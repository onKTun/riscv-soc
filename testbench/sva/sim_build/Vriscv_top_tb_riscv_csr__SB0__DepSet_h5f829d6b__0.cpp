// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top_tb.h for the primary calling header

#include "Vriscv_top_tb__pch.h"
#include "Vriscv_top_tb__Syms.h"
#include "Vriscv_top_tb_riscv_csr__SB0.h"

VL_INLINE_OPT void Vriscv_top_tb_riscv_csr__SB0___ico_sequent__TOP__riscv_top_tb__dut__u_core__u_csr__0(Vriscv_top_tb_riscv_csr__SB0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_top_tb_riscv_csr__SB0___ico_sequent__TOP__riscv_top_tb__dut__u_core__u_csr__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ifence_w = ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                                 & (0x100fU == (0x707fU 
                                                & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)));
    vlSelfRef.__PVT__sfence_w = ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                                 & (0x12000073U == 
                                    (0xfe007fffU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)));
    vlSelfRef.__PVT__eret_fault_w = (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                                      & (0x200073U 
                                         == (0xcfffffffU 
                                             & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                                     & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mpriv_q) 
                                        < (3U & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                                 >> 0x1cU))));
    vlSelfRef.__PVT__csrrsi_w = ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                                 & (0x6073U == (0x707fU 
                                                & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)));
    vlSelfRef.__PVT__csrrci_w = ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                                 & (0x7073U == (0x707fU 
                                                & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)));
    vlSelfRef.__PVT__csrrw_w = ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                                & (0x1073U == (0x707fU 
                                               & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)));
    vlSelfRef.__PVT__csrrwi_w = ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                                 & (0x5073U == (0x707fU 
                                                & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)));
    vlSelfRef.__PVT__data_r = ((((IData)(vlSelfRef.__PVT__csrrwi_w) 
                                 | (IData)(vlSelfRef.__PVT__csrrsi_w)) 
                                | (IData)(vlSelfRef.__PVT__csrrci_w))
                                ? (0x1fU & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                            >> 0xfU))
                                : vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r);
    vlSelfRef.__VdfgExtracted_h8b06e925__0 = ((IData)(vlSelfRef.__PVT__csrrw_w) 
                                              | (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                                                  & (0x2073U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                                                 | ((IData)(vlSelfRef.__PVT__csrrwi_w) 
                                                    | (IData)(vlSelfRef.__PVT__csrrsi_w))));
    vlSelfRef.__VdfgExtracted_hefcb34c3__0 = ((IData)(vlSelfRef.__PVT__csrrw_w) 
                                              | (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                                                  & (0x3073U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                                                 | ((IData)(vlSelfRef.__PVT__csrrwi_w) 
                                                    | (IData)(vlSelfRef.__PVT__csrrci_w))));
    vlSelfRef.__PVT__satp_update_w = ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                                      & (((IData)(vlSelfRef.__VdfgExtracted_hefcb34c3__0) 
                                          | (IData)(vlSelfRef.__VdfgExtracted_h8b06e925__0)) 
                                         & (((IData)(
                                                     ((0U 
                                                       != 
                                                       (0xf8000U 
                                                        & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                                      | (IData)(vlSelfRef.__PVT__csrrw_w))) 
                                             | (IData)(vlSelfRef.__PVT__csrrwi_w)) 
                                            & (0x180U 
                                               == (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                                   >> 0x14U)))));
}

VL_INLINE_OPT void Vriscv_top_tb_riscv_csr__SB0___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_csr__0(Vriscv_top_tb_riscv_csr__SB0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_top_tb_riscv_csr__SB0___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_csr__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__reset_q = vlSelfRef.__PVT__reset_q;
    vlSelfRef.__Vdly__take_interrupt_q = vlSelfRef.__PVT__take_interrupt_q;
    vlSelfRef.__Vdly__take_interrupt_q = ((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
                                          & ((0U != vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__irq_masked_r) 
                                             & (~ ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_pending_q) 
                                                   | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_csr_w)))));
    vlSelfRef.__PVT__tlb_flush_q = ((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
                                    & ((IData)(vlSelfRef.__PVT__satp_update_w) 
                                       | (IData)(vlSelfRef.__PVT__sfence_w)));
    vlSelfRef.__PVT__ifence_q = ((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
                                 & (IData)(vlSelfRef.__PVT__ifence_w));
}

VL_INLINE_OPT void Vriscv_top_tb_riscv_csr__SB0___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_csr__1(Vriscv_top_tb_riscv_csr__SB0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_top_tb_riscv_csr__SB0___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_csr__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__take_interrupt_q = vlSelfRef.__Vdly__take_interrupt_q;
    if (vlSymsp->TOP__riscv_top_tb.__PVT__rst) {
        vlSelfRef.__PVT__exception_e1_q = 0U;
        vlSelfRef.__PVT__rd_result_e1_q = 0U;
    } else if (vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) {
        vlSelfRef.__PVT__exception_e1_q = (0x3fU & 
                                           ((0x73U 
                                             == vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                             ? ((IData)(0x18U) 
                                                + (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mpriv_q))
                                             : ((IData)(vlSelfRef.__PVT__eret_fault_w)
                                                 ? 0x12U
                                                 : 
                                                ((0x200073U 
                                                  == 
                                                  (0xcfffffffU 
                                                   & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))
                                                  ? 
                                                 ((IData)(0x30U) 
                                                  + 
                                                  (3U 
                                                   & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                                      >> 0x1cU)))
                                                  : 
                                                 ((0x100073U 
                                                   == vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)
                                                   ? 0x13U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_invalid_o)
                                                    ? 0x12U
                                                    : 
                                                   ((((IData)(vlSelfRef.__PVT__satp_update_w) 
                                                      | (IData)(vlSelfRef.__PVT__ifence_w)) 
                                                     | (IData)(vlSelfRef.__PVT__sfence_w))
                                                     ? 0x34U
                                                     : 0U)))))));
        vlSelfRef.__PVT__rd_result_e1_q = (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_invalid_o) 
                                            | (IData)(vlSelfRef.__PVT__eret_fault_w))
                                            ? vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w
                                            : vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__rdata_r);
    } else {
        vlSelfRef.__PVT__exception_e1_q = 0U;
        vlSelfRef.__PVT__rd_result_e1_q = 0U;
    }
    vlSelfRef.__PVT__rd_valid_e1_q = ((1U & (~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst))) 
                                      && ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                                          && ((IData)(vlSelfRef.__VdfgExtracted_h8b06e925__0) 
                                              | (IData)(vlSelfRef.__VdfgExtracted_hefcb34c3__0))));
}

VL_INLINE_OPT void Vriscv_top_tb_riscv_csr__SB0___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_csr__2(Vriscv_top_tb_riscv_csr__SB0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_top_tb_riscv_csr__SB0___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_csr__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__branch_csr_priv_o = ((vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_satp_q 
                                           >> 0x1fU)
                                           ? (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mpriv_q)
                                           : 3U);
    vlSelfRef.__Vcellinp__u_csrfile__csr_waddr_i = 
        ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wr_wb_q)
          ? (vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
             >> 0x14U) : 0U);
    if (vlSymsp->TOP__riscv_top_tb.__PVT__rst) {
        vlSelfRef.__PVT__branch_target_q = 0U;
        vlSelfRef.__PVT__branch_q = 0U;
        vlSelfRef.__Vdly__reset_q = 1U;
    } else if (vlSelfRef.__PVT__reset_q) {
        vlSelfRef.__PVT__branch_target_q = 0U;
        vlSelfRef.__PVT__branch_q = 1U;
        vlSelfRef.__Vdly__reset_q = 0U;
    } else {
        vlSelfRef.__PVT__branch_q = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__branch_r;
        vlSelfRef.__PVT__branch_target_q = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__branch_target_r;
    }
    vlSelfRef.__PVT__reset_q = vlSelfRef.__Vdly__reset_q;
}

VL_INLINE_OPT void Vriscv_top_tb_riscv_csr__SB0___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_csr__3(Vriscv_top_tb_riscv_csr__SB0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_top_tb_riscv_csr__SB0___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_csr__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__riscv_top_tb.__PVT__rst) {
        vlSelfRef.__PVT__csr_wdata_e1_q = 0U;
    } else if (vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) {
        if (((IData)(vlSelfRef.__VdfgExtracted_h8b06e925__0) 
             & (IData)(vlSelfRef.__VdfgExtracted_hefcb34c3__0))) {
            vlSelfRef.__PVT__csr_wdata_e1_q = vlSelfRef.__PVT__data_r;
        } else if (vlSelfRef.__VdfgExtracted_h8b06e925__0) {
            vlSelfRef.__PVT__csr_wdata_e1_q = (vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__rdata_r 
                                               | vlSelfRef.__PVT__data_r);
        } else if (vlSelfRef.__VdfgExtracted_hefcb34c3__0) {
            vlSelfRef.__PVT__csr_wdata_e1_q = (vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__rdata_r 
                                               & (~ vlSelfRef.__PVT__data_r));
        }
    } else {
        vlSelfRef.__PVT__csr_wdata_e1_q = 0U;
    }
}
