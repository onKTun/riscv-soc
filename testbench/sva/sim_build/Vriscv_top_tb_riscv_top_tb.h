// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_top_tb.h for the primary calling header

#ifndef VERILATED_VRISCV_TOP_TB_RISCV_TOP_TB_H_
#define VERILATED_VRISCV_TOP_TB_RISCV_TOP_TB_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vriscv_top_tb_axi_memory_model;
class Vriscv_top_tb_axi_memory_model__R80000104;
class Vriscv_top_tb_riscv_top__M0_MBffff;


class Vriscv_top_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_top_tb_riscv_top_tb final : public VerilatedModule {
  public:
    // CELLS
    Vriscv_top_tb_riscv_top__M0_MBffff* dut;
    Vriscv_top_tb_axi_memory_model* i_memory;
    Vriscv_top_tb_axi_memory_model__R80000104* d_memory;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__rst;
    IData/*31:0*/ __PVT__cycles;

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
