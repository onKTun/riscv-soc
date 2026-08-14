// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_muldiv_csr_tb.h for the primary calling header

#ifndef VERILATED_VRISCV_MULDIV_CSR_TB_ICACHE_DATA_RAM_H_
#define VERILATED_VRISCV_MULDIV_CSR_TB_ICACHE_DATA_RAM_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vriscv_muldiv_csr_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_muldiv_csr_tb_icache_data_ram final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__wr_i,0,0);
    VL_IN16(__PVT__addr_i,10,0);
    VL_IN(__PVT__data_i,31,0);
    VL_OUT(__PVT__data_o,31,0);
    IData/*31:0*/ __PVT__ram_read_q;
    VlUnpacked<IData/*31:0*/, 2048> ram;

    // INTERNAL VARIABLES
    Vriscv_muldiv_csr_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_muldiv_csr_tb_icache_data_ram(Vriscv_muldiv_csr_tb__Syms* symsp, const char* v__name);
    ~Vriscv_muldiv_csr_tb_icache_data_ram();
    VL_UNCOPYABLE(Vriscv_muldiv_csr_tb_icache_data_ram);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
