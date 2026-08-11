// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_top_tb.h for the primary calling header

#ifndef VERILATED_VRISCV_TOP_TB_DCACHE_CORE_TAG_RAM_H_
#define VERILATED_VRISCV_TOP_TB_DCACHE_CORE_TAG_RAM_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vriscv_top_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_top_tb_dcache_core_tag_ram final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk1_i,0,0);
    VL_IN8(__PVT__clk0_i,0,0);
    VL_IN8(__PVT__rst0_i,0,0);
    VL_IN8(__PVT__addr0_i,7,0);
    VL_IN8(__PVT__rst1_i,0,0);
    VL_IN8(__PVT__addr1_i,7,0);
    VL_IN8(__PVT__wr1_i,0,0);
    VL_IN(__PVT__data1_i,20,0);
    VL_OUT(__PVT__data0_o,20,0);
    IData/*20:0*/ __PVT__ram_read0_q;
    VlUnpacked<IData/*20:0*/, 256> ram;

    // INTERNAL VARIABLES
    Vriscv_top_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_top_tb_dcache_core_tag_ram(Vriscv_top_tb__Syms* symsp, const char* v__name);
    ~Vriscv_top_tb_dcache_core_tag_ram();
    VL_UNCOPYABLE(Vriscv_top_tb_dcache_core_tag_ram);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
