// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top_tb.h for the primary calling header

#include "Vriscv_top_tb__pch.h"
#include "Vriscv_top_tb_dcache_core_tag_ram.h"

VL_ATTR_COLD void Vriscv_top_tb_dcache_core_tag_ram___ctor_var_reset(Vriscv_top_tb_dcache_core_tag_ram* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vriscv_top_tb_dcache_core_tag_ram___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk0_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst0_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__addr0_i = VL_RAND_RESET_I(8);
    vlSelf->__PVT__clk1_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst1_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__addr1_i = VL_RAND_RESET_I(8);
    vlSelf->__PVT__data1_i = VL_RAND_RESET_I(21);
    vlSelf->__PVT__wr1_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data0_o = VL_RAND_RESET_I(21);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->ram[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->__PVT__ram_read0_q = VL_RAND_RESET_I(21);
}

VL_ATTR_COLD void Vriscv_top_tb_dcache_core_tag_ram___configure_coverage(Vriscv_top_tb_dcache_core_tag_ram* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vriscv_top_tb_dcache_core_tag_ram___configure_coverage\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
