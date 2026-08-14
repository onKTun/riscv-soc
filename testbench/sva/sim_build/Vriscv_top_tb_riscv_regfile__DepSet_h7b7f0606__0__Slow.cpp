// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top_tb.h for the primary calling header

#include "Vriscv_top_tb__pch.h"
#include "Vriscv_top_tb_riscv_regfile.h"

VL_ATTR_COLD void Vriscv_top_tb_riscv_regfile___ctor_var_reset(Vriscv_top_tb_riscv_regfile* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vriscv_top_tb_riscv_regfile___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rd0_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rd0_value_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ra0_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rb0_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ra0_value_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rb0_value_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x1_debug_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x2_debug_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x3_debug_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x4_debug_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x5_debug_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x6_debug_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x7_debug_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x8_debug_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x9_debug_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x10_debug_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x11_debug_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x12_debug_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x13_debug_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x14_debug_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x15_debug_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x16_debug_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x17_debug_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x18_debug_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x19_debug_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x20_debug_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x21_debug_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x22_debug_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x23_debug_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x24_debug_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x25_debug_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x26_debug_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x27_debug_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x28_debug_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x29_debug_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x30_debug_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__x31_debug_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__REGFILE__DOT__reg_r1_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__REGFILE__DOT__reg_r2_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__REGFILE__DOT__reg_r3_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__REGFILE__DOT__reg_r4_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__REGFILE__DOT__reg_r5_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__REGFILE__DOT__reg_r6_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__REGFILE__DOT__reg_r7_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__REGFILE__DOT__reg_r8_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__REGFILE__DOT__reg_r9_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__REGFILE__DOT__reg_r10_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__REGFILE__DOT__reg_r11_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__REGFILE__DOT__reg_r12_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__REGFILE__DOT__reg_r13_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__REGFILE__DOT__reg_r14_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__REGFILE__DOT__reg_r15_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__REGFILE__DOT__reg_r16_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__REGFILE__DOT__reg_r17_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__REGFILE__DOT__reg_r18_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__REGFILE__DOT__reg_r19_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__REGFILE__DOT__reg_r20_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__REGFILE__DOT__reg_r21_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__REGFILE__DOT__reg_r22_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__REGFILE__DOT__reg_r23_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__REGFILE__DOT__reg_r24_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__REGFILE__DOT__reg_r25_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__REGFILE__DOT__reg_r26_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__REGFILE__DOT__reg_r27_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__REGFILE__DOT__reg_r28_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__REGFILE__DOT__reg_r29_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__REGFILE__DOT__reg_r30_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__REGFILE__DOT__reg_r31_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__REGFILE__DOT__ra0_value_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__REGFILE__DOT__rb0_value_r = VL_RAND_RESET_I(32);
}

VL_ATTR_COLD void Vriscv_top_tb_riscv_regfile___configure_coverage(Vriscv_top_tb_riscv_regfile* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vriscv_top_tb_riscv_regfile___configure_coverage\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
