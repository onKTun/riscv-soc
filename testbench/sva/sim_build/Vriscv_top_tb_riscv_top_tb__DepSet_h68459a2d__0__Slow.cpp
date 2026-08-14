// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top_tb.h for the primary calling header

#include "Vriscv_top_tb__pch.h"
#include "Vriscv_top_tb_riscv_top_tb.h"

VL_ATTR_COLD void Vriscv_top_tb_riscv_top_tb___eval_static__TOP__riscv_top_tb(Vriscv_top_tb_riscv_top_tb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_top_tb_riscv_top_tb___eval_static__TOP__riscv_top_tb\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__clk = 0U;
    vlSelfRef.__PVT__rst = 1U;
    vlSelfRef.__PVT__cycles = 0U;
}

VL_ATTR_COLD void Vriscv_top_tb_riscv_top_tb___ctor_var_reset(Vriscv_top_tb_riscv_top_tb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_top_tb_riscv_top_tb___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cycles = VL_RAND_RESET_I(32);
}

VL_ATTR_COLD void Vriscv_top_tb_riscv_top_tb___configure_coverage(Vriscv_top_tb_riscv_top_tb* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_top_tb_riscv_top_tb___configure_coverage\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
