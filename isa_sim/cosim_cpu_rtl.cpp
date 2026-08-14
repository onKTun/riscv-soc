// cosim_cpu_rtl.cpp
//
// STATUS: design-complete, NOT YET BUILT OR TESTED. See cosim_cpu_rtl.h and
// knowledge_capture.md for full derivation, rationale, and open items.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cosim_cpu_rtl.h"

//--------------------------------------------------------------------
// ctor / dtor
//--------------------------------------------------------------------
cosim_cpu_rtl::cosim_cpu_rtl(vluint64_t max_cycles_per_step)
    : m_dut(new Vcosim_harness())
    , m_trace(NULL)
    , m_time(0)
    , m_max_cycles_per_step(max_cycles_per_step)
    , m_fault(false)
    , m_stopped(false)
    , m_pending_interrupt(false)
    , m_last_pc(0)
    , m_last_rd(0)
    , m_last_value(0)
    , m_last_rd_valid(false)
{
}

cosim_cpu_rtl::~cosim_cpu_rtl()
{
    if (m_trace)
    {
        m_trace->close();
        delete m_trace;
    }
    m_dut->final();
    delete m_dut;
}
//--------------------------------------------------------------------
// open_trace: optional VCD dump, mirrors run_sva.sh's --trace usage
//--------------------------------------------------------------------
void cosim_cpu_rtl::open_trace(const char *vcd_path)
{
    Verilated::traceEverOn(true);
    m_trace = new VerilatedVcdC();
    m_dut->trace(m_trace, 99);
    m_trace->open(vcd_path);
}
//--------------------------------------------------------------------
// clk_edge: advance one full clock cycle, dump trace if enabled
//--------------------------------------------------------------------
void cosim_cpu_rtl::clk_edge(void)
{
    // Falling edge first (settle comb logic from previous posedge)
    m_dut->clk_i = 0;
    m_dut->eval();
    if (m_trace) m_trace->dump(m_time++);

    // Rising edge — this is where retire_valid_o/regs become valid
    m_dut->clk_i = 1;
    m_dut->eval();
    if (m_trace) m_trace->dump(m_time++);

    // Sample the dcache request/ack bus every cycle, not just on
    // retirement - loads/stores can span multiple cycles (cache miss
    // refill), and event_push() must see each qualifying cycle exactly
    // once, same granularity as the reference model's per-access push
    // in Riscv::load()/store(). See Session 7 for the resolved signal-
    // access mechanism.
    maybe_push_load_events();
    maybe_push_store_event();
}
//--------------------------------------------------------------------
// reset: hold rst_i for a fixed window, matching verification_manifest.json's
// documented reset contract (active-high, 5-cycle duration) from the SVA
// suite, then release and set reset_vector_i.
//--------------------------------------------------------------------
void cosim_cpu_rtl::reset(uint32_t pc)
{
    m_dut->rst_i          = 1;
    m_dut->intr_i         = 0;
    m_dut->reset_vector_i = pc;

    for (int i = 0; i < 5; i++)
        clk_edge();

    m_dut->rst_i = 0;
    clk_edge();

    m_fault   = false;
    m_stopped = false;
    m_last_pc = pc;
    m_last_rd_valid = false;
}
//--------------------------------------------------------------------
// step: clock forward until retire_valid_o pulses (one instruction
// retiring), mirroring Riscv::step()'s per-instruction granularity.
// Includes a watchdog so a hung core (e.g. permanently stalled cache
// miss due to a memory-model bug) fails loudly instead of hanging CI.
//--------------------------------------------------------------------
void cosim_cpu_rtl::step(void)
{
    vluint64_t cycles = 0;

    do
    {
        clk_edge();
        cycles++;

        if (cycles > m_max_cycles_per_step)
        {
            fprintf(stderr,
                "ERROR: cosim_cpu_rtl watchdog: no retirement in %llu cycles "
                "(last PC=%08x) - likely hang\n",
                (unsigned long long)m_max_cycles_per_step, m_last_pc);
            m_fault = true;
            return;
        }
    }
    while (!m_dut->retire_valid_o);

    // Latch retirement-edge state - read once, right after the posedge
    // that asserted retire_valid_o, before anything else can change it.
    m_last_pc       = m_dut->retire_pc_o;
    m_last_rd       = m_dut->retire_rd_o;
    m_last_value    = m_dut->retire_value_o;
    // x0 writes are architecturally no-ops; retire_rd_o==0 is ambiguous
    // between "wrote x0" and "no destination" by construction in the RTL
    // (riscv_pipe_ctrl.v's rd_wb_o is zero-forced in both cases) - treating
    // both as "not a valid GPR write" is correct either way, since x0 always
    // reads back 0 regardless.
    m_last_rd_valid = (m_last_rd != 0);
}
//--------------------------------------------------------------------
// get_reg_valid / get_register: report validity only for the single
// register written by the most recently retired instruction, matching
// cosim::step()'s comparison loop, which only compares registers where
// BOTH attached CPUs report get_reg_valid() true for that index.
//--------------------------------------------------------------------
bool cosim_cpu_rtl::get_reg_valid(int r)
{
    return m_last_rd_valid && (r == (int)m_last_rd);
}

uint32_t cosim_cpu_rtl::get_register(int r)
{
    if (r == 0)
        return 0;

    // Prefer the just-retired value if this is the register that was
    // just written - avoids a race against the debug bus, which reflects
    // the flop's value AFTER this cycle's write, so should agree, but
    // using the latched retire_value_o directly is the more direct/
    // trustworthy source for the register that just retired.
    if (m_last_rd_valid && r == (int)m_last_rd)
        return m_last_value;

    return read_debug_reg(r);
}
//--------------------------------------------------------------------
// read_debug_reg: map integer index -> the right debug_x<r>_o port.
// The regfile debug bus is 31 individually-named ports (no indexed read
// port exists in riscv_regfile.v - see knowledge_capture.md Session 3),
// so this is unavoidably a manual switch rather than an array index.
//--------------------------------------------------------------------
uint32_t cosim_cpu_rtl::read_debug_reg(int r)
{
    switch (r)
    {
        case 1:  return m_dut->debug_x1_o;
        case 2:  return m_dut->debug_x2_o;
        case 3:  return m_dut->debug_x3_o;
        case 4:  return m_dut->debug_x4_o;
        case 5:  return m_dut->debug_x5_o;
        case 6:  return m_dut->debug_x6_o;
        case 7:  return m_dut->debug_x7_o;
        case 8:  return m_dut->debug_x8_o;
        case 9:  return m_dut->debug_x9_o;
        case 10: return m_dut->debug_x10_o;
        case 11: return m_dut->debug_x11_o;
        case 12: return m_dut->debug_x12_o;
        case 13: return m_dut->debug_x13_o;
        case 14: return m_dut->debug_x14_o;
        case 15: return m_dut->debug_x15_o;
        case 16: return m_dut->debug_x16_o;
        case 17: return m_dut->debug_x17_o;
        case 18: return m_dut->debug_x18_o;
        case 19: return m_dut->debug_x19_o;
        case 20: return m_dut->debug_x20_o;
        case 21: return m_dut->debug_x21_o;
        case 22: return m_dut->debug_x22_o;
        case 23: return m_dut->debug_x23_o;
        case 24: return m_dut->debug_x24_o;
        case 25: return m_dut->debug_x25_o;
        case 26: return m_dut->debug_x26_o;
        case 27: return m_dut->debug_x27_o;
        case 28: return m_dut->debug_x28_o;
        case 29: return m_dut->debug_x29_o;
        case 30: return m_dut->debug_x30_o;
        case 31: return m_dut->debug_x31_o;
        default:
            fprintf(stderr, "ERROR: cosim_cpu_rtl: register index %d out of range\n", r);
            m_fault = true;
            return 0;
    }
}
//--------------------------------------------------------------------
// set_register: reference model can push an initial register value
// (used by riscv_main.cpp-style setup); RTL has no such backdoor write
// port today. See header open item 4 - not needed for Phase B (both
// sides reset to 0 identically), but will matter if Phase C wants to
// seed specific pre-conditions.
//--------------------------------------------------------------------
void cosim_cpu_rtl::set_register(int r, uint32_t val)
{
    fprintf(stderr,
        "WARNING: cosim_cpu_rtl::set_register(%d, %08x) ignored - "
        "no RTL backdoor write port exists yet\n", r, val);
}
//--------------------------------------------------------------------
// set_interrupt: mirrors Riscv::set_interrupt()'s single-line contract
// (irq==0 only, single external interrupt). intr_i is level-driven at
// the harness boundary, held until explicitly cleared - not yet wired
// to auto-clear, since Phase B doesn't exercise interrupts.
//--------------------------------------------------------------------
void cosim_cpu_rtl::set_interrupt(int irq)
{
    if (irq != 0)
    {
        fprintf(stderr, "ERROR: cosim_cpu_rtl::set_interrupt: only irq==0 supported "
                         "(matches reference model's single external interrupt line)\n");
        m_fault = true;
        return;
    }
    m_dut->intr_i = 1;
    m_pending_interrupt = true;
}
//--------------------------------------------------------------------
// enable_trace: opens a VCD if not already open. Trace mask is accepted
// for interface compatibility but unused today (Verilator trace level
// is fixed at construction via open_trace's hardcoded '99' depth).
//--------------------------------------------------------------------
void cosim_cpu_rtl::enable_trace(uint32_t mask)
{
    (void)mask;
    if (!m_trace)
        open_trace("cosim_rtl_trace.vcd");
}
//--------------------------------------------------------------------
// mem_create / mem_write_byte: direct backdoor memory load, used by
// elf_load()'s mem_create/mem_load callbacks (cosim_main.cpp pattern).
// NOT implemented via cosim_mem_api/attach_mem - see header open item 1.
//--------------------------------------------------------------------
bool cosim_cpu_rtl::mem_create(uint32_t base, uint32_t size)
{
    // No-op today: axi_memory_model.v sizes its array at elaboration
    // time via the WORDS parameter, not at runtime. base/size are
    // accepted for interface compatibility with elf_load()'s callback
    // signature but not yet range-checked against the harness's fixed
    // 64K-word (256KB) per-side memory. See header open item 1.
    (void)base; (void)size;
    return true;
}

// set_byte_in_word: merges a single byte into the correct lane of a
// little-endian 32-bit word, per addr[1:0]. Used only by mem_write_byte()
// below - elf_load() calls this one byte at a time regardless of the
// underlying word-addressed storage.
static uint32_t set_byte_in_word(uint32_t word, int byte_idx, uint8_t b)
{
    uint32_t shift = (uint32_t)(byte_idx & 3) * 8;
    uint32_t mask  = 0xFFu << shift;
    return (word & ~mask) | ((uint32_t)b << shift);
}

void cosim_cpu_rtl::mem_write_byte(uint32_t addr, uint8_t data)
{
    // Mirrors the same byte into BOTH the I-side and D-side memory
    // models, since elf_load() doesn't distinguish code from data at
    // load time and the harness's two axi_memory_model instances are
    // NOT a shared address space (split I/D memory topology, confirmed
    // with Kevin - see knowledge_capture.md Session 4/5).
    //
    // RESOLVED Session 7: `mem` in axi_memory_model.v is now annotated
    // `/* verilator public */` (confirmed diff, testbench/top_cache_axi/
    // axi_memory_model.v line 41 - lint-clean, 0 new warnings, verified
    // via Claude Code + direct diff review). Verilator's public attribute
    // makes the array a plain public member on the generated C++ class,
    // reachable via the same dotted hierarchy path Verilator always uses
    // for module instances - no accessor method exists or is needed.
    m_dut->cosim_harness->u_imem->mem[addr >> 2] =
        set_byte_in_word(m_dut->cosim_harness->u_imem->mem[addr >> 2], addr & 3, data);
    m_dut->cosim_harness->u_dmem->mem[addr >> 2] =
        set_byte_in_word(m_dut->cosim_harness->u_dmem->mem[addr >> 2], addr & 3, data);
}

//--------------------------------------------------------------------
// strb_to_event_value: re-extract the stored value from its byte/
// halfword LANE in dcache_data_wr_w, to match Riscv::store()'s
// low-byte/halfword masking convention on the reference-model side.
// Fully derived from riscv_lsu.v's complete mem_wr_r table (lines
// 194-243), knowledge_capture.md Session 6. Static: no instance state
// needed, pure function of (strobe, data word).
//--------------------------------------------------------------------
static bool strb_to_event_value(uint32_t strb, uint32_t data_word,
                                 uint32_t *out_value)
{
    switch (strb)
    {
        case 0xF: *out_value = data_word;                  return true; // SW
        case 0xC: *out_value = (data_word >> 16) & 0xFFFF;  return true; // SH, addr[1:0]==2
        case 0x3: *out_value =  data_word        & 0xFFFF;  return true; // SH, addr[1:0]==0
        case 0x8: *out_value = (data_word >> 24) & 0xFF;    return true; // SB, addr[1:0]==3
        case 0x4: *out_value = (data_word >> 16) & 0xFF;    return true; // SB, addr[1:0]==2
        case 0x2: *out_value = (data_word >>  8) & 0xFF;    return true; // SB, addr[1:0]==1
        case 0x1: *out_value =  data_word        & 0xFF;    return true; // SB, addr[1:0]==0
        case 0x0: return false; // no store this cycle
        default:
            // mem_wr_r never produces any other pattern - fatal if seen,
            // since a wrong guess here would corrupt the cosim comparison
            // silently rather than failing loudly (Session 6 rationale).
            fprintf(stderr,
                "ERROR: cosim_cpu_rtl: unexpected store strobe %01x\n", strb);
            return false;
    }
}
//--------------------------------------------------------------------
// maybe_push_store_event / maybe_push_load_events: sample the dcache
// request bus once per clk_edge() and push cosim events on the trigger
// conditions derived in Sessions 5-6:
//   - dcache_rd_w asserted        -> COSIM_EVENT_LOAD,        arg1=dcache_addr_w
//   - dcache_ack_w asserted       -> COSIM_EVENT_LOAD_RESULT, arg1=dcache_data_rd_w
//     (ack fires on both read and write completion; only push
//      LOAD_RESULT when the completing request was a read - i.e. the
//      cycle's dcache_wr_w was 0. Load and store acks are mutually
//      exclusive per riscv_lsu.v's single outstanding-request FSM, so
//      checking dcache_wr_w on the SAME cycle as dcache_ack_w correctly
//      distinguishes them.)
//   - dcache_wr_w != 4'b0         -> COSIM_EVENT_STORE, arg1=dcache_addr_w,
//                                     arg2=strb_to_event_value(...)
//
// Address masking is a no-op on this bus (riscv_lsu.v line 326 word-
// aligns mem_addr_o unconditionally for every access width, matching
// the reference model's `physical & ~3`), so dcache_addr_w is passed
// to event_push() unmodified regardless of width - no masking branch
// needed here, only in strb_to_event_value() above for the VALUE.
//
// RESOLVED Session 7: dcache_addr_w/dcache_data_wr_w/dcache_rd_w/
// dcache_wr_w/dcache_ack_w/dcache_data_rd_w are now `/* verilator
// public */` in riscv_top.v (confirmed diff, lint-clean, 0 new
// warnings). Reached via m_dut->cosim_harness->u_top->dcache_*_w, same pattern as
// mem_write_byte()'s access to cosim_harness->u_imem->mem[]/
// cosim_harness->u_dmem->mem[] (siblings of u_top in cosim_harness.v,
// NOT nested inside u_top - confirmed Session 9, see below).
//--------------------------------------------------------------------
void cosim_cpu_rtl::maybe_push_store_event(void)
{
    uint32_t strb = m_dut->cosim_harness->u_top->dcache_wr_w;
    if (strb == 0)
        return;

    uint32_t value;
    if (!strb_to_event_value(strb, m_dut->cosim_harness->u_top->dcache_data_wr_w, &value))
    {
        // strb_to_event_value already logged the specific bad pattern.
        m_fault = true;
        return;
    }

    event_push(COSIM_EVENT_STORE, m_dut->cosim_harness->u_top->dcache_addr_w, value);
}

void cosim_cpu_rtl::maybe_push_load_events(void)
{
    if (m_dut->cosim_harness->u_top->dcache_rd_w)
        event_push(COSIM_EVENT_LOAD, m_dut->cosim_harness->u_top->dcache_addr_w, 0);

    // ack fires for both read and write completion; only the read case
    // produces a LOAD_RESULT. dcache_wr_w is sampled on the SAME cycle
    // as dcache_ack_w here - the request that's completing is the one
    // whose wr strobe was driven when the ack asserts (single
    // outstanding request, riscv_lsu.v FSM), so this correctly
    // distinguishes a load-completion ack from a store-completion ack.
    if (m_dut->cosim_harness->u_top->dcache_ack_w && m_dut->cosim_harness->u_top->dcache_wr_w == 0)
        event_push(COSIM_EVENT_LOAD_RESULT, m_dut->cosim_harness->u_top->dcache_data_rd_w, 0);
}
