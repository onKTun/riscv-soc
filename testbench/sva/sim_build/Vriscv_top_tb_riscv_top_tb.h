// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_top_tb.h for the primary calling header

#ifndef VERILATED_VRISCV_TOP_TB_RISCV_TOP_TB_H_
#define VERILATED_VRISCV_TOP_TB_RISCV_TOP_TB_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vriscv_top_tb_riscv_top__M0_MBffff;


class Vriscv_top_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_top_tb_riscv_top_tb final : public VerilatedModule {
  public:
    // CELLS
    Vriscv_top_tb_riscv_top__M0_MBffff* dut;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__rst;
    CData/*0:0*/ __PVT__i_bvalid;
    CData/*0:0*/ __PVT__i_arready;
    CData/*0:0*/ __PVT__i_rvalid;
    CData/*0:0*/ __PVT__i_rlast;
    CData/*3:0*/ __PVT__i_bid;
    CData/*0:0*/ __PVT__d_awready;
    CData/*0:0*/ __PVT__d_wready;
    CData/*0:0*/ __PVT__d_bvalid;
    CData/*0:0*/ __PVT__d_arready;
    CData/*0:0*/ __PVT__d_rvalid;
    CData/*0:0*/ __PVT__d_rlast;
    CData/*3:0*/ __PVT__d_bid;
    CData/*0:0*/ __PVT__result_valid;
    CData/*0:0*/ __PVT__i_memory__DOT__result_valid_o;
    CData/*0:0*/ __PVT__i_memory__DOT__read_active;
    CData/*7:0*/ __PVT__i_memory__DOT__read_left;
    CData/*3:0*/ __PVT__i_memory__DOT__read_id;
    CData/*0:0*/ __PVT__i_memory__DOT__write_active;
    CData/*3:0*/ __PVT__i_memory__DOT__write_id;
    CData/*0:0*/ __PVT__d_memory__DOT__read_active;
    CData/*7:0*/ __PVT__d_memory__DOT__read_left;
    CData/*3:0*/ __PVT__d_memory__DOT__read_id;
    CData/*0:0*/ __PVT__d_memory__DOT__write_active;
    CData/*3:0*/ __PVT__d_memory__DOT__write_id;
    CData/*7:0*/ __Vdly__i_memory__DOT__read_left;
    CData/*7:0*/ __Vdly__d_memory__DOT__read_left;
    IData/*31:0*/ __PVT__cycles;
    IData/*31:0*/ __PVT__i_rdata;
    IData/*31:0*/ __PVT__d_rdata;
    IData/*31:0*/ __PVT__result_data;
    IData/*31:0*/ __PVT__i_read_bursts;
    IData/*31:0*/ __PVT__d_read_bursts;
    IData/*31:0*/ __PVT__d_write_words;
    IData/*31:0*/ __PVT__i_memory__DOT__result_data_o;
    IData/*31:0*/ __PVT__i_memory__DOT__write_words_o;
    IData/*31:0*/ __PVT__i_memory__DOT__read_addr;
    IData/*31:0*/ __PVT__i_memory__DOT__write_addr;
    IData/*31:0*/ __PVT__i_memory__DOT__i;
    IData/*31:0*/ __PVT__d_memory__DOT__read_addr;
    IData/*31:0*/ __PVT__d_memory__DOT__write_addr;
    IData/*31:0*/ __PVT__d_memory__DOT__active_write_addr;
    IData/*31:0*/ __PVT__d_memory__DOT__i;
    IData/*31:0*/ __Vdly__i_memory__DOT__read_addr;
    IData/*31:0*/ __Vdly__d_memory__DOT__read_addr;
    VlUnpacked<IData/*31:0*/, 1024> __PVT__i_memory__DOT__mem;
    VlUnpacked<IData/*31:0*/, 1024> __PVT__d_memory__DOT__mem;

    // INTERNAL VARIABLES
    Vriscv_top_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_top_tb_riscv_top_tb(Vriscv_top_tb__Syms* symsp, const char* v__name);
    ~Vriscv_top_tb_riscv_top_tb();
    VL_UNCOPYABLE(Vriscv_top_tb_riscv_top_tb);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
