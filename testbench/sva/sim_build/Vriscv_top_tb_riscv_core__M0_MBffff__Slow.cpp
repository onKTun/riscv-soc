// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top_tb.h for the primary calling header

#include "Vriscv_top_tb__pch.h"
#include "Vriscv_top_tb__Syms.h"
#include "Vriscv_top_tb_riscv_core__M0_MBffff.h"

void Vriscv_top_tb_riscv_core__M0_MBffff___ctor_var_reset(Vriscv_top_tb_riscv_core__M0_MBffff* vlSelf);

Vriscv_top_tb_riscv_core__M0_MBffff::Vriscv_top_tb_riscv_core__M0_MBffff(Vriscv_top_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vriscv_top_tb_riscv_core__M0_MBffff___ctor_var_reset(this);
}

void Vriscv_top_tb_riscv_core__M0_MBffff___configure_coverage(Vriscv_top_tb_riscv_core__M0_MBffff* vlSelf, bool first);

void Vriscv_top_tb_riscv_core__M0_MBffff::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
    Vriscv_top_tb_riscv_core__M0_MBffff___configure_coverage(this, first);
}

Vriscv_top_tb_riscv_core__M0_MBffff::~Vriscv_top_tb_riscv_core__M0_MBffff() {
}

// Coverage
void Vriscv_top_tb_riscv_core__M0_MBffff::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    std::string fullhier = std::string{VerilatedModule::name()} + hierp;
    if (!fullhier.empty() && fullhier[0] == '.') fullhier = fullhier.substr(1);
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), VerilatedModule::name(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",fullhier,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
