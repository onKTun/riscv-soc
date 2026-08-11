// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top_tb.h for the primary calling header

#include "Vriscv_top_tb__pch.h"
#include "Vriscv_top_tb__Syms.h"
#include "Vriscv_top_tb_riscv_regfile.h"

VL_INLINE_OPT void Vriscv_top_tb_riscv_regfile___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile__0(Vriscv_top_tb_riscv_regfile* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vriscv_top_tb_riscv_regfile___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__riscv_top_tb.__PVT__rst) {
        vlSelfRef.__PVT__REGFILE__DOT__reg_r31_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r30_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r29_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r12_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r11_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r7_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r10_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r5_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r8_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r3_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r6_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r1_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r4_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r2_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r9_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r13_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r14_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r15_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r16_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r17_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r18_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r19_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r20_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r21_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r22_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r23_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r24_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r25_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r26_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r27_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r28_q = 0U;
    } else {
        if ((0x1fU == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r31_q 
                = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q;
        }
        if ((0x1eU == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r30_q 
                = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q;
        }
        if ((0x1dU == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r29_q 
                = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q;
        }
        if ((0xcU == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r12_q 
                = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q;
        }
        if ((0xbU == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r11_q 
                = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q;
        }
        if ((7U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r7_q 
                = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q;
        }
        if ((0xaU == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r10_q 
                = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q;
        }
        if ((5U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r5_q 
                = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q;
        }
        if ((8U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r8_q 
                = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q;
        }
        if ((3U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r3_q 
                = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q;
        }
        if ((6U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r6_q 
                = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q;
        }
        if ((1U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r1_q 
                = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q;
        }
        if ((4U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r4_q 
                = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q;
        }
        if ((2U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r2_q 
                = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q;
        }
        if ((9U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r9_q 
                = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q;
        }
        if ((0xdU == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r13_q 
                = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q;
        }
        if ((0xeU == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r14_q 
                = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q;
        }
        if ((0xfU == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r15_q 
                = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q;
        }
        if ((0x10U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r16_q 
                = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q;
        }
        if ((0x11U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r17_q 
                = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q;
        }
        if ((0x12U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r18_q 
                = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q;
        }
        if ((0x13U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r19_q 
                = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q;
        }
        if ((0x14U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r20_q 
                = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q;
        }
        if ((0x15U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r21_q 
                = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q;
        }
        if ((0x16U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r22_q 
                = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q;
        }
        if ((0x17U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r23_q 
                = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q;
        }
        if ((0x18U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r24_q 
                = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q;
        }
        if ((0x19U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r25_q 
                = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q;
        }
        if ((0x1aU == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r26_q 
                = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q;
        }
        if ((0x1bU == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r27_q 
                = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q;
        }
        if ((0x1cU == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r28_q 
                = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q;
        }
    }
}

VL_INLINE_OPT void Vriscv_top_tb_riscv_regfile___nba_comb__TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile__0(Vriscv_top_tb_riscv_regfile* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vriscv_top_tb_riscv_regfile___nba_comb__TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__REGFILE__DOT__rb0_value_r = ((0x1000000U 
                                                   & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                   ? 
                                                  ((0x800000U 
                                                    & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                    ? 
                                                   ((0x400000U 
                                                     & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                     ? 
                                                    ((0x200000U 
                                                      & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? vlSelfRef.__PVT__REGFILE__DOT__reg_r31_q
                                                       : vlSelfRef.__PVT__REGFILE__DOT__reg_r30_q)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? vlSelfRef.__PVT__REGFILE__DOT__reg_r29_q
                                                       : vlSelfRef.__PVT__REGFILE__DOT__reg_r28_q))
                                                     : 
                                                    ((0x200000U 
                                                      & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? vlSelfRef.__PVT__REGFILE__DOT__reg_r27_q
                                                       : vlSelfRef.__PVT__REGFILE__DOT__reg_r26_q)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? vlSelfRef.__PVT__REGFILE__DOT__reg_r25_q
                                                       : vlSelfRef.__PVT__REGFILE__DOT__reg_r24_q)))
                                                    : 
                                                   ((0x400000U 
                                                     & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                     ? 
                                                    ((0x200000U 
                                                      & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? vlSelfRef.__PVT__REGFILE__DOT__reg_r23_q
                                                       : vlSelfRef.__PVT__REGFILE__DOT__reg_r22_q)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? vlSelfRef.__PVT__REGFILE__DOT__reg_r21_q
                                                       : vlSelfRef.__PVT__REGFILE__DOT__reg_r20_q))
                                                     : 
                                                    ((0x200000U 
                                                      & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? vlSelfRef.__PVT__REGFILE__DOT__reg_r19_q
                                                       : vlSelfRef.__PVT__REGFILE__DOT__reg_r18_q)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? vlSelfRef.__PVT__REGFILE__DOT__reg_r17_q
                                                       : vlSelfRef.__PVT__REGFILE__DOT__reg_r16_q))))
                                                   : 
                                                  ((0x800000U 
                                                    & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                    ? 
                                                   ((0x400000U 
                                                     & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                     ? 
                                                    ((0x200000U 
                                                      & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? vlSelfRef.__PVT__REGFILE__DOT__reg_r15_q
                                                       : vlSelfRef.__PVT__REGFILE__DOT__reg_r14_q)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? vlSelfRef.__PVT__REGFILE__DOT__reg_r13_q
                                                       : vlSelfRef.__PVT__REGFILE__DOT__reg_r12_q))
                                                     : 
                                                    ((0x200000U 
                                                      & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? vlSelfRef.__PVT__REGFILE__DOT__reg_r11_q
                                                       : vlSelfRef.__PVT__REGFILE__DOT__reg_r10_q)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? vlSelfRef.__PVT__REGFILE__DOT__reg_r9_q
                                                       : vlSelfRef.__PVT__REGFILE__DOT__reg_r8_q)))
                                                    : 
                                                   ((0x400000U 
                                                     & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                     ? 
                                                    ((0x200000U 
                                                      & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? vlSelfRef.__PVT__REGFILE__DOT__reg_r7_q
                                                       : vlSelfRef.__PVT__REGFILE__DOT__reg_r6_q)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? vlSelfRef.__PVT__REGFILE__DOT__reg_r5_q
                                                       : vlSelfRef.__PVT__REGFILE__DOT__reg_r4_q))
                                                     : 
                                                    ((0x200000U 
                                                      & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? vlSelfRef.__PVT__REGFILE__DOT__reg_r3_q
                                                       : vlSelfRef.__PVT__REGFILE__DOT__reg_r2_q)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? vlSelfRef.__PVT__REGFILE__DOT__reg_r1_q
                                                       : 0U)))));
    vlSelfRef.__PVT__REGFILE__DOT__ra0_value_r = ((0x80000U 
                                                   & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                   ? 
                                                  ((0x40000U 
                                                    & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                    ? 
                                                   ((0x20000U 
                                                     & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                     ? 
                                                    ((0x10000U 
                                                      & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? vlSelfRef.__PVT__REGFILE__DOT__reg_r31_q
                                                       : vlSelfRef.__PVT__REGFILE__DOT__reg_r30_q)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? vlSelfRef.__PVT__REGFILE__DOT__reg_r29_q
                                                       : vlSelfRef.__PVT__REGFILE__DOT__reg_r28_q))
                                                     : 
                                                    ((0x10000U 
                                                      & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? vlSelfRef.__PVT__REGFILE__DOT__reg_r27_q
                                                       : vlSelfRef.__PVT__REGFILE__DOT__reg_r26_q)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? vlSelfRef.__PVT__REGFILE__DOT__reg_r25_q
                                                       : vlSelfRef.__PVT__REGFILE__DOT__reg_r24_q)))
                                                    : 
                                                   ((0x20000U 
                                                     & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                     ? 
                                                    ((0x10000U 
                                                      & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? vlSelfRef.__PVT__REGFILE__DOT__reg_r23_q
                                                       : vlSelfRef.__PVT__REGFILE__DOT__reg_r22_q)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? vlSelfRef.__PVT__REGFILE__DOT__reg_r21_q
                                                       : vlSelfRef.__PVT__REGFILE__DOT__reg_r20_q))
                                                     : 
                                                    ((0x10000U 
                                                      & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? vlSelfRef.__PVT__REGFILE__DOT__reg_r19_q
                                                       : vlSelfRef.__PVT__REGFILE__DOT__reg_r18_q)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? vlSelfRef.__PVT__REGFILE__DOT__reg_r17_q
                                                       : vlSelfRef.__PVT__REGFILE__DOT__reg_r16_q))))
                                                   : 
                                                  ((0x40000U 
                                                    & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                    ? 
                                                   ((0x20000U 
                                                     & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                     ? 
                                                    ((0x10000U 
                                                      & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? vlSelfRef.__PVT__REGFILE__DOT__reg_r15_q
                                                       : vlSelfRef.__PVT__REGFILE__DOT__reg_r14_q)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? vlSelfRef.__PVT__REGFILE__DOT__reg_r13_q
                                                       : vlSelfRef.__PVT__REGFILE__DOT__reg_r12_q))
                                                     : 
                                                    ((0x10000U 
                                                      & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? vlSelfRef.__PVT__REGFILE__DOT__reg_r11_q
                                                       : vlSelfRef.__PVT__REGFILE__DOT__reg_r10_q)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? vlSelfRef.__PVT__REGFILE__DOT__reg_r9_q
                                                       : vlSelfRef.__PVT__REGFILE__DOT__reg_r8_q)))
                                                    : 
                                                   ((0x20000U 
                                                     & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                     ? 
                                                    ((0x10000U 
                                                      & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? vlSelfRef.__PVT__REGFILE__DOT__reg_r7_q
                                                       : vlSelfRef.__PVT__REGFILE__DOT__reg_r6_q)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? vlSelfRef.__PVT__REGFILE__DOT__reg_r5_q
                                                       : vlSelfRef.__PVT__REGFILE__DOT__reg_r4_q))
                                                     : 
                                                    ((0x10000U 
                                                      & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? vlSelfRef.__PVT__REGFILE__DOT__reg_r3_q
                                                       : vlSelfRef.__PVT__REGFILE__DOT__reg_r2_q)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? vlSelfRef.__PVT__REGFILE__DOT__reg_r1_q
                                                       : 0U)))));
}
