// cosim_cpu_rtl.h
//
// RTL-side cosim_cpu_api implementation, wrapping the Verilated
// cosim_harness (riscv_top + split I/D axi_memory_model).
//
// STATUS: design-complete, NOT YET BUILT OR TESTED. Verilator was not
// available in the sandbox this was authored in — see knowledge_capture.md
// for the full derivation and open items before building/running this.
//
// Design notes (see knowledge_capture.md Sessions 2-6 for full trace):
// - step() clocks the harness forward until retire_valid_o pulses, mirroring
//   Riscv::step()'s one-instruction-per-call granularity.
// - get_pc()/get_register()/get_reg_valid() read back state latched at that
//   retirement edge, not live combinational state, matching cosim::step()'s
//   expectation that state is stable for the whole comparison.
// - CSR state (including mtime/mcycle) is deliberately NOT exposed here —
//   cosim::step() only diffs PC + the 32 GPRs, so nothing else is needed for
//   Phase B. See knowledge_capture.md Session 1 for why mtime is excluded
//   (reference model ticks mtime per retired instruction; RTL's mtime IS
//   mcycle and ticks every clock cycle including stalls — these are
//   incompatible clocks and any interrupt-timing comparison must be
//   deferred to Phase C with different pass/fail criteria).
//
// RESOLVED (Session 7): signal-access mechanism decided as Verilator
// `/* verilator public */` annotations, not new top-level ports. Confirmed
// applied to riscv_top.v (dcache_addr_w/dcache_data_wr_w/dcache_rd_w/
// dcache_wr_w/dcache_ack_w/dcache_data_rd_w) and axi_memory_model.v
// (`mem` array) via Claude Code + direct diff review — lint-clean, 0 new
// warnings on either file. mem_write_byte() and the event-push methods
// below now use these hierarchy paths directly.
//
// OPEN ITEMS STILL NOT RESOLVED (see knowledge_capture.md "Open items"):
// 1. get_opcode() returns a hardcoded 0 — no RTL signal traced yet for the
//    retired instruction's raw encoding. Not required for Phase B's PC/
//    register diff; would help mismatch debugging.
// 2. set_register() is a no-op (warns and ignores) — no RTL backdoor
//    register-write port exists. Not needed for Phase B (both sides reset
//    to 0 identically); would matter for Phase C precondition-seeding.
// 3. Still not built/run: Verilator is not installed in this sandbox.
//    All Session 7 wiring is design/lint-level complete on the RTL side
//    only — the C++ wrapper itself has not been compiled against a
//    generated Vcosim_harness.h.
#ifndef __COSIM_CPU_RTL_H__
#define __COSIM_CPU_RTL_H__

#include "cosim_api.h"
#include "Vcosim_harness.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

// Vcosim_harness.h only forward-declares Vcosim_harness_cosim_harness (and
// transitively, Vcosim_harness_riscv_top / the memory-model class) — it
// deliberately doesn't pull in their full definitions, to keep the
// top-level model header lightweight. Since this wrapper dereferences
// through those pointers (m_dut->cosim_harness->u_top->dcache_*_w, etc.,
// mem_write_byte()'s ->u_imem->mem[]), the real generated class headers
// for each level of the hierarchy are needed here too. Found Session 9
// via "invalid use of incomplete type" at the g++ link step - Verilator
// generates one header per module instance under obj_dir/, named after
// the module type (not the instance name).
#include "Vcosim_harness_cosim_harness.h"
#include "Vcosim_harness_riscv_top.h"
#include "Vcosim_harness_axi_memory_model__W10000.h"

class cosim_cpu_rtl : public cosim_cpu_api
{
public:
    cosim_cpu_rtl(vluint64_t max_cycles_per_step = 100000);
    ~cosim_cpu_rtl();

    // cosim_cpu_api
    void      reset(uint32_t pc) override;
    bool      get_fault(void) override   { return m_fault; }
    bool      get_stopped(void) override { return m_stopped; }
    void      step(void) override;
    uint32_t  get_opcode(void) override  { return 0; } // open item 3 — not wired yet
    uint32_t  get_pc(void) override      { return m_last_pc; }
    bool      get_reg_valid(int r) override;
    uint32_t  get_register(int r) override;
    int       get_num_reg(void) override { return 32; }
    void      set_register(int r, uint32_t val) override;
    void      set_interrupt(int irq) override;
    void      enable_trace(uint32_t mask) override;

    // Memory access — used directly by cosim_main.cpp's elf_load() path,
    // NOT registered via cosim::attach_mem (see open item 1 above / class
    // header comment for why cosim_mem_api is not implemented yet).
    void      mem_write_byte(uint32_t addr, uint8_t data);
    bool      mem_create(uint32_t base, uint32_t size);

    void      open_trace(const char *vcd_path);

private:
    void      clk_edge(void);          // one full clk_i posedge + settle
    uint32_t  read_debug_reg(int r);   // maps r -> the right debug_x<r>_o port

    // Implemented Session 7 — sampled once per clk_edge(), see .cpp for
    // full derivation (trigger conditions, ack/wr disambiguation).
    void      maybe_push_store_event(void);
    void      maybe_push_load_events(void);

    Vcosim_harness *m_dut;
    VerilatedVcdC  *m_trace;
    vluint64_t      m_time;
    vluint64_t      m_max_cycles_per_step;

    bool     m_fault;
    bool     m_stopped;
    bool     m_pending_interrupt;

    // State latched at the most recent retire_valid_o pulse
    uint32_t m_last_pc;
    uint32_t m_last_rd;
    uint32_t m_last_value;
    bool     m_last_rd_valid;
};

#endif
