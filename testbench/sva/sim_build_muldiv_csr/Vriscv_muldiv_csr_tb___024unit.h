// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_muldiv_csr_tb.h for the primary calling header

#ifndef VERILATED_VRISCV_MULDIV_CSR_TB___024UNIT_H_
#define VERILATED_VRISCV_MULDIV_CSR_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vriscv_muldiv_csr_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_muldiv_csr_tb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vriscv_muldiv_csr_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_muldiv_csr_tb___024unit(Vriscv_muldiv_csr_tb__Syms* symsp, const char* v__name);
    ~Vriscv_muldiv_csr_tb___024unit();
    VL_UNCOPYABLE(Vriscv_muldiv_csr_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
