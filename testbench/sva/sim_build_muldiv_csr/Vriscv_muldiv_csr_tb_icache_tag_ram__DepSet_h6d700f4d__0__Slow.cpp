// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_muldiv_csr_tb.h for the primary calling header

#include "Vriscv_muldiv_csr_tb__pch.h"
#include "Vriscv_muldiv_csr_tb_icache_tag_ram.h"

VL_ATTR_COLD void Vriscv_muldiv_csr_tb_icache_tag_ram___ctor_var_reset(Vriscv_muldiv_csr_tb_icache_tag_ram* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_muldiv_csr_tb_icache_tag_ram___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__addr_i = VL_RAND_RESET_I(8);
    vlSelf->__PVT__data_i = VL_RAND_RESET_I(20);
    vlSelf->__PVT__wr_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_o = VL_RAND_RESET_I(20);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->ram[__Vi0] = VL_RAND_RESET_I(20);
    }
    vlSelf->__PVT__ram_read_q = VL_RAND_RESET_I(20);
}

VL_ATTR_COLD void Vriscv_muldiv_csr_tb_icache_tag_ram___configure_coverage(Vriscv_muldiv_csr_tb_icache_tag_ram* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_muldiv_csr_tb_icache_tag_ram___configure_coverage\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
