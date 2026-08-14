// cosim_main.cpp
//
// Cosim driver: attaches the reference model (Riscv) and the RTL wrapper
// (cosim_cpu_rtl) to one cosim::instance(), loads a single ELF into both
// memories, and steps them together via cosim::instance()->step() so the
// framework's built-in PC/register/event diff actually runs.
//
// This does NOT reuse riscv_main()/riscv_main.cpp as-is: that driver is
// hardwired to a single cosim_cpu_api* and calls sim->step() directly,
// bypassing cosim::step()'s comparison logic entirely (confirmed by
// reading riscv_main.cpp - see knowledge_capture.md Session 5). A second,
// parallel driver is required for genuine two-CPU lockstep; riscv_main.cpp's
// option-parsing pattern is reused for familiarity, but the run loop here
// is new.
//
// KNOWN GAP (see knowledge_capture.md Session 5): cosim_cpu_rtl does not
// yet implement cosim_mem_api and never calls event_push() (open item 2 in
// cosim_cpu_rtl.h), so cosim::step()'s load/store event-queue comparison
// is inert today - this driver currently only exercises PC+GPR comparison.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "riscv.h"
#include "cosim_cpu_rtl.h"
#include "cosim_api.h"
#include "elf_load.h"

static cosim_cpu_rtl *g_rtl_for_load = NULL;

//-----------------------------------------------------------------
// mem_create / mem_load: fan out ELF loading to both attached CPUs.
// The reference model's memory goes through cosim::instance() (as
// main.cpp already does today for the single-CPU case); the RTL side
// goes through the wrapper's own backdoor write, since it isn't
// registered via attach_mem (see cosim_cpu_rtl.h open item 1).
//-----------------------------------------------------------------
static int mem_create(void *arg, uint32_t base, uint32_t size)
{
    (void)arg;
    bool ref_ok = cosim::instance()->create_memory(base, size);
    bool rtl_ok = g_rtl_for_load->mem_create(base, size);
    return ref_ok && rtl_ok;
}

static int mem_load(void *arg, uint32_t addr, uint8_t data)
{
    (void)arg;
    cosim::instance()->write(addr, data);
    g_rtl_for_load->mem_write_byte(addr, data);
    return cosim::instance()->valid_addr(addr);
}

//-----------------------------------------------------------------
// main
//-----------------------------------------------------------------
int main(int argc, char *argv[])
{
    char *filename    = NULL;
    int   max_cycles   = -1;
    int   trace        = 0;
    int   c;

    while ((c = getopt(argc, argv, "f:c:t:")) != -1)
    {
        switch (c)
        {
            case 'f': filename   = optarg; break;
            case 'c': max_cycles = (int)strtoul(optarg, NULL, 0); break;
            case 't': trace      = strtoul(optarg, NULL, 0); break;
            default:
                fprintf(stderr,
                    "Usage: cosim_main -f filename.elf [-c max_instructions] [-t 0/1]\n");
                exit(-1);
        }
    }

    if (!filename)
    {
        fprintf(stderr, "Error: -f filename.elf is required\n");
        exit(-1);
    }

    Riscv         *ref = new Riscv();
    cosim_cpu_rtl *rtl = new cosim_cpu_rtl();

    // Attach in a fixed, documented order: reference model first, so
    // cosim::step()'s "front" CPU (m_cpu.front(), used as the mismatch-
    // reporting baseline in cosim_api.cpp) is always the reference model,
    // never the RTL - mismatches then always print as "RTL differs from
    // reference," never the other way round.
    cosim::instance()->attach_cpu("reference", ref);
    cosim::instance()->attach_cpu("rtl", rtl);

    // Only the reference model is registered via attach_mem/cosim_mem_api
    // today (matches main.cpp's existing pattern). The RTL side's memory
    // is loaded directly through mem_write_byte in the callbacks above,
    // NOT through cosim::attach_mem, since cosim_cpu_rtl does not yet
    // implement cosim_mem_api (see cosim_cpu_rtl.h open item 1).
    cosim::instance()->attach_mem("reference", ref, 0, 0xFFFFFFFF);

    g_rtl_for_load = rtl;

    if (trace)
        rtl->open_trace("cosim_rtl_trace.vcd");

    // --- Priming reset -------------------------------------------------
    // Verilator defers a module's `initial` blocks to that module's first
    // eval() call, which for cosim_cpu_rtl only happens inside reset()
    // (via clk_edge()). axi_memory_model.v has an `initial` block that
    // fills mem[] with the NOP encoding on every word; if that first
    // eval() happened AFTER elf_load()'s backdoor mem_write_byte() pokes
    // below, it would silently wipe the freshly-loaded program back to
    // NOPs. This throwaway reset (placeholder PC of 0) forces that first
    // eval()/initial-block firing to happen before the ELF load, so the
    // real writes below stick. cosim::reset() fans out to every attached
    // CPU, so the reference model is reset here too; it is reset again
    // below with the real start_addr, which has no observable side effect
    // since Riscv::reset() is idempotent and cheap.
    cosim::instance()->reset(0);

    // --- Load ELF (safe now: mem[]'s one-time initial fill has already
    //     happened, so these backdoor writes are not overwritten) -------
    uint32_t start_addr = 0;
    if (!elf_load(filename, mem_create, mem_load, NULL, &start_addr))
    {
        fprintf(stderr, "Error: could not open %s\n", filename);
        return 1;
    }

    printf("Starting from 0x%08x\n", start_addr);

    // --- Real reset, now with the correct entry point -------------------
    // Reset BOTH CPUs to the same PC. cosim::reset() (inherited from
    // cosim_cpu_api's aggregate implementation in cosim_api.cpp) already
    // fans out to every attached CPU's reset(), so this one call resets
    // both the reference model and the RTL harness. This does not re-run
    // axi_memory_model.v's initial block (Verilator only fires a given
    // initial block once per model lifetime), so the ELF contents loaded
    // above are preserved through this second reset.
    cosim::instance()->reset(start_addr);

    int  instr_count = 0;
    while (!cosim::instance()->get_fault() && !cosim::instance()->get_stopped())
    {
        // NOTE: calling cosim::instance()->step(), NOT ref->step() or
        // rtl->step() directly - this is the line that actually invokes
        // the framework's PC/register/event comparison (cosim_api.cpp's
        // cosim::step()). Skipping this and stepping the CPUs individually,
        // as riscv_main.cpp's loop does for the single-CPU case, would
        // silently skip all comparison and defeat the purpose of this
        // driver entirely.
        cosim::instance()->step();
        instr_count++;

        if (max_cycles != -1 && instr_count >= max_cycles)
            break;
    }

    bool fault = cosim::instance()->get_fault();

    if (fault)
        fprintf(stderr, "COSIM FAILED after %d instructions (last PC=%08x)\n",
                instr_count, ref->get_pc());
    else
        printf("COSIM PASSED: %d instructions, RTL matched reference "
               "bit-for-bit (PC + all GPRs)\n", instr_count);

    ref->stats_dump();

    delete ref;
    delete rtl;

    return fault ? 1 : 0;
}
