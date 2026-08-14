// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_muldiv_csr_tb.h for the primary calling header

#include "Vriscv_muldiv_csr_tb__pch.h"
#include "Vriscv_muldiv_csr_tb_dcache_core_data_ram.h"

VL_ATTR_COLD void Vriscv_muldiv_csr_tb_dcache_core_data_ram___ctor_var_reset(Vriscv_muldiv_csr_tb_dcache_core_data_ram* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vriscv_muldiv_csr_tb_dcache_core_data_ram___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk0_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst0_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__addr0_i = VL_RAND_RESET_I(11);
    vlSelf->__PVT__data0_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__wr0_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__clk1_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst1_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__addr1_i = VL_RAND_RESET_I(11);
    vlSelf->__PVT__data1_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__wr1_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__data0_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__data1_o = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__ram_read0_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ram_read1_q = VL_RAND_RESET_I(32);
}

VL_ATTR_COLD void Vriscv_muldiv_csr_tb_dcache_core_data_ram___configure_coverage(Vriscv_muldiv_csr_tb_dcache_core_data_ram* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vriscv_muldiv_csr_tb_dcache_core_data_ram___configure_coverage\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
