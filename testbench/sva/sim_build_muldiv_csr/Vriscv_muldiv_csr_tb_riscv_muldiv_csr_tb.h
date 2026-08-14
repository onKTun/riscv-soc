// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_muldiv_csr_tb.h for the primary calling header

#ifndef VERILATED_VRISCV_MULDIV_CSR_TB_RISCV_MULDIV_CSR_TB_H_
#define VERILATED_VRISCV_MULDIV_CSR_TB_RISCV_MULDIV_CSR_TB_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vriscv_muldiv_csr_tb_axi_memory_model;
class Vriscv_muldiv_csr_tb_axi_memory_model__R80000104;
class Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff;


class Vriscv_muldiv_csr_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_muldiv_csr_tb_riscv_muldiv_csr_tb final : public VerilatedModule {
  public:
    // CELLS
    Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff* dut;
    Vriscv_muldiv_csr_tb_axi_memory_model* i_memory;
    Vriscv_muldiv_csr_tb_axi_memory_model__R80000104* d_memory;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__rst;
    IData/*31:0*/ __PVT__cycles;

    // INTERNAL VARIABLES
    Vriscv_muldiv_csr_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_muldiv_csr_tb_riscv_muldiv_csr_tb(Vriscv_muldiv_csr_tb__Syms* symsp, const char* v__name);
    ~Vriscv_muldiv_csr_tb_riscv_muldiv_csr_tb();
    VL_UNCOPYABLE(Vriscv_muldiv_csr_tb_riscv_muldiv_csr_tb);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
