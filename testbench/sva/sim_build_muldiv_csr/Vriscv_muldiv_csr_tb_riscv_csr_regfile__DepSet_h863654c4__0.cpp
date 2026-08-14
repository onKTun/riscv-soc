// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_muldiv_csr_tb.h for the primary calling header

#include "Vriscv_muldiv_csr_tb__pch.h"
#include "Vriscv_muldiv_csr_tb__Syms.h"
#include "Vriscv_muldiv_csr_tb_riscv_csr_regfile.h"

VL_INLINE_OPT void Vriscv_muldiv_csr_tb_riscv_csr_regfile___nba_sequent__TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile__0(Vriscv_muldiv_csr_tb_riscv_csr_regfile* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vriscv_muldiv_csr_tb_riscv_csr_regfile___nba_sequent__TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__csr_mcycle_h_q = vlSelfRef.__PVT__csr_mcycle_h_q;
    vlSelfRef.__Vdly__csr_mcycle_q = vlSelfRef.__PVT__csr_mcycle_q;
    if (vlSymsp->TOP__riscv_muldiv_csr_tb.__PVT__rst) {
        vlSelfRef.__PVT__irq_priv_q = 3U;
    } else if ((0U != vlSelfRef.__PVT__irq_masked_r)) {
        vlSelfRef.__PVT__irq_priv_q = 3U;
    }
}

VL_INLINE_OPT void Vriscv_muldiv_csr_tb_riscv_csr_regfile___nba_sequent__TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile__1(Vriscv_muldiv_csr_tb_riscv_csr_regfile* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vriscv_muldiv_csr_tb_riscv_csr_regfile___nba_sequent__TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__riscv_muldiv_csr_tb.__PVT__rst) {
        vlSelfRef.__PVT__csr_mepc_q = 0U;
        vlSelfRef.__PVT__csr_sr_q = 0U;
        vlSelfRef.__PVT__csr_mcause_q = 0U;
        vlSelfRef.__PVT__csr_mtval_q = 0U;
        vlSelfRef.__PVT__csr_mtvec_q = 0U;
        vlSelfRef.__PVT__csr_mip_q = 0U;
        vlSelfRef.__PVT__csr_mie_q = 0U;
        vlSelfRef.__PVT__csr_mpriv_q = 3U;
        vlSelfRef.__Vdly__csr_mcycle_q = 0U;
        vlSelfRef.__Vdly__csr_mcycle_h_q = 0U;
        vlSelfRef.__PVT__csr_mscratch_q = 0U;
        vlSelfRef.__PVT__csr_mtimecmp_q = 0U;
        vlSelfRef.__PVT__csr_mtime_ie_q = 0U;
        vlSelfRef.__PVT__csr_medeleg_q = 0U;
        vlSelfRef.__PVT__csr_mideleg_q = 0U;
        vlSelfRef.__PVT__csr_sepc_q = 0U;
        vlSelfRef.__PVT__csr_stvec_q = 0U;
        vlSelfRef.__PVT__csr_scause_q = 0U;
        vlSelfRef.__PVT__csr_stval_q = 0U;
        vlSelfRef.__PVT__csr_satp_q = 0U;
        vlSelfRef.__PVT__csr_sscratch_q = 0U;
        vlSelfRef.__PVT__csr_mip_next_q = 0U;
    } else {
        if ((0xffffffffU == vlSelfRef.__PVT__csr_mcycle_q)) {
            vlSelfRef.__Vdly__csr_mcycle_h_q = ((IData)(1U) 
                                                + vlSelfRef.__PVT__csr_mcycle_h_q);
        }
        if ((((0x7b2U == (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i)) 
              | (0x8b2U == (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) 
             & (~ (IData)((0U != (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))))) {
            if (VL_UNLIKELY((0U == (0xff000000U & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q)))) {
                VL_FINISH_MT("core/riscv/riscv_csr_regfile.v", 567, "");
                VL_FINISH_MT("core/riscv/riscv_csr_regfile.v", 568, "");
            } else if (VL_UNLIKELY((0x1000000U == (0xff000000U 
                                                   & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q)))) {
                VL_WRITEF_NX("%c",0,8,(0xffU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q));
            }
        }
        vlSelfRef.__PVT__csr_mepc_q = vlSelfRef.__PVT__csr_mepc_r;
        vlSelfRef.__PVT__csr_sr_q = vlSelfRef.__PVT__csr_sr_r;
        vlSelfRef.__PVT__csr_mcause_q = vlSelfRef.__PVT__csr_mcause_r;
        vlSelfRef.__PVT__csr_mtval_q = vlSelfRef.__PVT__csr_mtval_r;
        vlSelfRef.__PVT__csr_mtvec_q = vlSelfRef.__PVT__csr_mtvec_r;
        vlSelfRef.__PVT__csr_mip_q = vlSelfRef.__PVT__csr_mip_r;
        vlSelfRef.__PVT__csr_mie_q = vlSelfRef.__PVT__csr_mie_r;
        vlSelfRef.__PVT__csr_mpriv_q = 3U;
        vlSelfRef.__PVT__csr_mscratch_q = vlSelfRef.__PVT__csr_mscratch_r;
        vlSelfRef.__PVT__csr_mtimecmp_q = vlSelfRef.__PVT__csr_mtimecmp_r;
        vlSelfRef.__PVT__csr_mtime_ie_q = vlSelfRef.__PVT__csr_mtime_ie_r;
        vlSelfRef.__PVT__csr_medeleg_q = 0U;
        vlSelfRef.__PVT__csr_mideleg_q = 0U;
        vlSelfRef.__PVT__csr_sepc_q = 0U;
        vlSelfRef.__PVT__csr_stvec_q = 0U;
        vlSelfRef.__PVT__csr_scause_q = 0U;
        vlSelfRef.__PVT__csr_stval_q = 0U;
        vlSelfRef.__PVT__csr_satp_q = 0U;
        vlSelfRef.__PVT__csr_sscratch_q = 0U;
        vlSelfRef.__PVT__csr_mip_next_q = ((((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                                             & ((0x344U 
                                                 == 
                                                 (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w 
                                                  >> 0x14U)) 
                                                | (0x144U 
                                                   == 
                                                   (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w 
                                                    >> 0x14U)))) 
                                            | (IData)(vlSelfRef.__PVT__csr_mip_upd_q))
                                            ? vlSelfRef.__PVT__csr_mip_next_r
                                            : 0U);
        vlSelfRef.__Vdly__csr_mcycle_q = vlSelfRef.__PVT__csr_mcycle_r;
    }
    if (vlSymsp->TOP__riscv_muldiv_csr_tb.__PVT__rst) {
        vlSelfRef.__PVT__csr_mip_upd_q = 0U;
    } else if (((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                & ((0x344U == (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w 
                               >> 0x14U)) | (0x144U 
                                             == (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w 
                                                 >> 0x14U))))) {
        vlSelfRef.__PVT__csr_mip_upd_q = 1U;
    } else if ((((0x344U == (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i)) 
                 | (0x144U == (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) 
                | (0U != (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))) {
        vlSelfRef.__PVT__csr_mip_upd_q = 0U;
    }
    vlSelfRef.__PVT__csr_mcycle_h_q = vlSelfRef.__Vdly__csr_mcycle_h_q;
    vlSelfRef.__PVT__csr_mcycle_q = vlSelfRef.__Vdly__csr_mcycle_q;
    vlSelfRef.__PVT__csr_mcycle_r = ((IData)(1U) + vlSelfRef.__PVT__csr_mcycle_q);
    vlSelfRef.__PVT__irq_pending_r = (vlSelfRef.__PVT__csr_mip_q 
                                      & vlSelfRef.__PVT__csr_mie_q);
    vlSelfRef.__PVT__irq_masked_r = ((8U & vlSelfRef.__PVT__csr_sr_q)
                                      ? vlSelfRef.__PVT__irq_pending_r
                                      : 0U);
}

VL_INLINE_OPT void Vriscv_muldiv_csr_tb_riscv_csr_regfile___nba_sequent__TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile__2(Vriscv_muldiv_csr_tb_riscv_csr_regfile* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vriscv_muldiv_csr_tb_riscv_csr_regfile___nba_sequent__TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__csr_mtvec_r = vlSelfRef.__PVT__csr_mtvec_q;
    vlSelfRef.__PVT__csr_mscratch_r = vlSelfRef.__PVT__csr_mscratch_q;
    vlSelfRef.__PVT__csr_mideleg_r = vlSelfRef.__PVT__csr_mideleg_q;
    vlSelfRef.__PVT__csr_stvec_r = vlSelfRef.__PVT__csr_stvec_q;
    vlSelfRef.__PVT__csr_mie_r = vlSelfRef.__PVT__csr_mie_q;
    vlSelfRef.__PVT__csr_satp_r = vlSelfRef.__PVT__csr_satp_q;
    vlSelfRef.__PVT__csr_sscratch_r = vlSelfRef.__PVT__csr_sscratch_q;
    vlSelfRef.__PVT__csr_mtimecmp_r = vlSelfRef.__PVT__csr_mtimecmp_q;
    vlSelfRef.__PVT__csr_medeleg_r = vlSelfRef.__PVT__csr_medeleg_q;
    vlSelfRef.__PVT__csr_stval_r = vlSelfRef.__PVT__csr_stval_q;
    vlSelfRef.__PVT__csr_mtime_ie_r = vlSelfRef.__PVT__csr_mtime_ie_q;
    if ((0x20U != (0x30U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))) {
        if ((1U & (~ ((0x30U <= (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)) 
                      & (0x33U >= (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))))) {
            if ((0x10U != (0x30U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                            if ((0x100U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                                                vlSelfRef.__PVT__csr_mtvec_r 
                                                                    = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q;
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i)))) {
                                                                vlSelfRef.__PVT__csr_mie_r 
                                                                    = 
                                                                    (0xaaaU 
                                                                     & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q);
                                                            }
                                                        }
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                             >> 2U)))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                                                vlSelfRef.__PVT__csr_mideleg_r 
                                                                    = 
                                                                    (0xffffU 
                                                                     & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q);
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i)))) {
                                                                vlSelfRef.__PVT__csr_medeleg_r 
                                                                    = 
                                                                    (0xffffU 
                                                                     & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if ((0x40U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i)))) {
                                                                vlSelfRef.__PVT__csr_mscratch_r 
                                                                    = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((0x100U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                          >> 7U)))) {
                                if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                              >> 6U)))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                  >> 5U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i)))) {
                                                            vlSelfRef.__PVT__csr_mie_r 
                                                                = 
                                                                ((0xfffffdddU 
                                                                  & vlSelfRef.__PVT__csr_mie_r) 
                                                                 | (0x222U 
                                                                    & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                      >> 9U)))) {
                            if ((0x100U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                                                vlSelfRef.__PVT__csr_stvec_r 
                                                                    = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if ((0x40U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i)))) {
                                                                vlSelfRef.__PVT__csr_sscratch_r 
                                                                    = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                if ((0x80U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i)))) {
                                                                vlSelfRef.__PVT__csr_satp_r 
                                                                    = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((0x400U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                        if ((0x200U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                            if ((0x100U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                if ((0x80U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                    if ((0x40U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i)))) {
                                                                vlSelfRef.__PVT__csr_mtimecmp_r 
                                                                    = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q;
                                                                vlSelfRef.__PVT__csr_mtime_ie_r = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__csr_mepc_r = vlSelfRef.__PVT__csr_mepc_q;
    vlSelfRef.__PVT__csr_mcause_r = vlSelfRef.__PVT__csr_mcause_q;
    vlSelfRef.__PVT__csr_sepc_r = vlSelfRef.__PVT__csr_sepc_q;
    vlSelfRef.__PVT__csr_scause_r = vlSelfRef.__PVT__csr_scause_q;
    vlSelfRef.__PVT__csr_mtval_r = vlSelfRef.__PVT__csr_mtval_q;
    vlSelfRef.__PVT__csr_sr_r = vlSelfRef.__PVT__csr_sr_q;
    vlSelfRef.__PVT__csr_mpriv_r = vlSelfRef.__PVT__csr_mpriv_q;
    if ((0x20U == (0x30U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))) {
        if ((3U != (IData)(vlSelfRef.__PVT__irq_priv_q))) {
            vlSelfRef.__PVT__csr_stval_r = 0U;
            vlSelfRef.__PVT__csr_sepc_r = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__pc_wb_q;
            if ((2U & vlSelfRef.__PVT__irq_masked_r)) {
                vlSelfRef.__PVT__csr_scause_r = 0x80000001U;
            } else if ((0x20U & vlSelfRef.__PVT__irq_masked_r)) {
                vlSelfRef.__PVT__csr_scause_r = 0x80000005U;
            } else if ((0x200U & vlSelfRef.__PVT__irq_masked_r)) {
                vlSelfRef.__PVT__csr_scause_r = 0x80000009U;
            }
        }
        if ((3U == (IData)(vlSelfRef.__PVT__irq_priv_q))) {
            vlSelfRef.__PVT__csr_mepc_r = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__pc_wb_q;
            if ((8U & vlSelfRef.__PVT__irq_masked_r)) {
                vlSelfRef.__PVT__csr_mcause_r = 0x80000003U;
            } else if ((0x80U & vlSelfRef.__PVT__irq_masked_r)) {
                vlSelfRef.__PVT__csr_mcause_r = 0x80000007U;
            } else if ((0x800U & vlSelfRef.__PVT__irq_masked_r)) {
                vlSelfRef.__PVT__csr_mcause_r = 0x8000000bU;
            }
            vlSelfRef.__PVT__csr_mtval_r = 0U;
            vlSelfRef.__PVT__csr_sr_r = ((0xffffff7fU 
                                          & vlSelfRef.__PVT__csr_sr_r) 
                                         | (0x80U & 
                                            (vlSelfRef.__PVT__csr_sr_r 
                                             << 4U)));
            vlSelfRef.__PVT__csr_mpriv_r = 3U;
            vlSelfRef.__PVT__csr_sr_r = ((0xffffe7ffU 
                                          & vlSelfRef.__PVT__csr_sr_r) 
                                         | ((IData)(vlSelfRef.__PVT__csr_mpriv_q) 
                                            << 0xbU));
            vlSelfRef.__PVT__csr_sr_r = (0xfffffff7U 
                                         & vlSelfRef.__PVT__csr_sr_r);
        } else {
            vlSelfRef.__PVT__csr_sr_r = ((0xffffffdfU 
                                          & vlSelfRef.__PVT__csr_sr_r) 
                                         | (0x20U & 
                                            (vlSelfRef.__PVT__csr_sr_r 
                                             << 4U)));
            vlSelfRef.__PVT__csr_mpriv_r = 1U;
            vlSelfRef.__PVT__csr_sr_r = ((0xfffffeffU 
                                          & vlSelfRef.__PVT__csr_sr_r) 
                                         | ((1U == (IData)(vlSelfRef.__PVT__csr_mpriv_q)) 
                                            << 8U));
            vlSelfRef.__PVT__csr_sr_r = (0xfffffffdU 
                                         & vlSelfRef.__PVT__csr_sr_r);
        }
    } else {
        if ((1U & (~ ((0x30U <= (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)) 
                      & (0x33U >= (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))))) {
            if ((0x10U != (0x30U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                  >> 0xaU)))) {
                        if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                      >> 9U)))) {
                            if ((0x100U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                              >> 7U)))) {
                                    if ((0x40U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                             >> 2U)))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                                                vlSelfRef.__PVT__csr_stval_r 
                                                                    = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q;
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i)))) {
                                                                vlSelfRef.__PVT__csr_scause_r 
                                                                    = 
                                                                    (0x8000000fU 
                                                                     & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q);
                                                            }
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                                                vlSelfRef.__PVT__csr_sepc_r 
                                                                    = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((0x10U == (0x30U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))) {
                vlSelfRef.__PVT__csr_mepc_r = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__pc_wb_q;
                vlSelfRef.__PVT__csr_mcause_r = (0xfU 
                                                 & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q));
                vlSelfRef.__PVT__csr_mtval_r = ((0x20U 
                                                 & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q))
                                                 ? 0U
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q))
                                                      ? vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q
                                                      : 0U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q))
                                                      ? vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q
                                                      : vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__pc_wb_q))
                                                    : 0U)
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q))
                                                    ? vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q))
                                                      ? 0U
                                                      : vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q)
                                                     : vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__pc_wb_q)))
                                                  : 0U));
            } else if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                 >> 0xbU)))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                              >> 0xaU)))) {
                    if ((0x200U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                        if ((0x100U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                          >> 7U)))) {
                                if ((0x40U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                  >> 5U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                                            vlSelfRef.__PVT__csr_mepc_r 
                                                                = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q;
                                                        }
                                                    }
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i)))) {
                                                            vlSelfRef.__PVT__csr_mcause_r 
                                                                = 
                                                                (0x8000000fU 
                                                                 & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q);
                                                        }
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                                            vlSelfRef.__PVT__csr_mtval_r 
                                                                = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (((0x30U <= (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)) 
             & (0x33U >= (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))) {
            if ((3U == (3U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))) {
                vlSelfRef.__PVT__csr_mpriv_r = (3U 
                                                & (vlSelfRef.__PVT__csr_sr_r 
                                                   >> 0xbU));
                vlSelfRef.__PVT__csr_sr_r = ((0xfffffff7U 
                                              & vlSelfRef.__PVT__csr_sr_r) 
                                             | (8U 
                                                & (vlSelfRef.__PVT__csr_sr_r 
                                                   >> 4U)));
                vlSelfRef.__PVT__csr_sr_r = (0x80U 
                                             | vlSelfRef.__PVT__csr_sr_r);
                vlSelfRef.__PVT__csr_sr_r = (0xffffe7ffU 
                                             & vlSelfRef.__PVT__csr_sr_r);
            } else {
                vlSelfRef.__PVT__csr_mpriv_r = ((0x100U 
                                                 & vlSelfRef.__PVT__csr_sr_r)
                                                 ? 1U
                                                 : 0U);
                vlSelfRef.__PVT__csr_sr_r = ((0xfffffffdU 
                                              & vlSelfRef.__PVT__csr_sr_r) 
                                             | (2U 
                                                & (vlSelfRef.__PVT__csr_sr_r 
                                                   >> 4U)));
                vlSelfRef.__PVT__csr_sr_r = (0x20U 
                                             | vlSelfRef.__PVT__csr_sr_r);
                vlSelfRef.__PVT__csr_sr_r = (0xfffffeffU 
                                             & vlSelfRef.__PVT__csr_sr_r);
            }
        } else if ((0x10U == (0x30U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))) {
            vlSelfRef.__PVT__csr_sr_r = ((0xffffff7fU 
                                          & vlSelfRef.__PVT__csr_sr_r) 
                                         | (0x80U & 
                                            (vlSelfRef.__PVT__csr_sr_r 
                                             << 4U)));
            vlSelfRef.__PVT__csr_mpriv_r = 3U;
            vlSelfRef.__PVT__csr_sr_r = ((0xffffe7ffU 
                                          & vlSelfRef.__PVT__csr_sr_r) 
                                         | ((IData)(vlSelfRef.__PVT__csr_mpriv_q) 
                                            << 0xbU));
            vlSelfRef.__PVT__csr_sr_r = (0xfffffff7U 
                                         & vlSelfRef.__PVT__csr_sr_r);
        } else if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                             >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                    if ((0x100U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                        if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i)))) {
                                                        vlSelfRef.__PVT__csr_sr_r 
                                                            = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x100U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                  >> 7U)))) {
                        if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                      >> 6U)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                          >> 5U)))) {
                                if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i)))) {
                                                    vlSelfRef.__PVT__csr_sr_r 
                                                        = 
                                                        ((0xfffbfeccU 
                                                          & vlSelfRef.__PVT__csr_sr_r) 
                                                         | (0x40133U 
                                                            & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__csr_mip_next_r = vlSelfRef.__PVT__csr_mip_next_q;
    if ((vlSelfRef.__PVT__csr_mcycle_q == vlSelfRef.__PVT__csr_mtimecmp_q)) {
        vlSelfRef.__PVT__csr_mtime_ie_r = 0U;
        vlSelfRef.__PVT__csr_mip_next_r = ((0x80U & vlSelfRef.__PVT__csr_mideleg_q)
                                            ? ((0xffffffdfU 
                                                & vlSelfRef.__PVT__csr_mip_next_r) 
                                               | ((IData)(vlSelfRef.__PVT__csr_mtime_ie_q) 
                                                  << 5U))
                                            : ((0xffffff7fU 
                                                & vlSelfRef.__PVT__csr_mip_next_r) 
                                               | ((IData)(vlSelfRef.__PVT__csr_mtime_ie_q) 
                                                  << 7U)));
    }
    vlSelfRef.__PVT__csr_mip_r = vlSelfRef.__PVT__csr_mip_q;
    if ((0x20U != (0x30U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))) {
        if ((1U & (~ ((0x30U <= (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)) 
                      & (0x33U >= (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))))) {
            if ((0x10U != (0x30U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                            if ((0x100U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                              >> 7U)))) {
                                    if ((0x40U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i)))) {
                                                                vlSelfRef.__PVT__csr_mip_r 
                                                                    = 
                                                                    (0xaaaU 
                                                                     & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((0x100U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                          >> 7U)))) {
                                if ((0x40U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                  >> 5U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i)))) {
                                                            vlSelfRef.__PVT__csr_mip_r 
                                                                = 
                                                                ((0xfffffdddU 
                                                                  & vlSelfRef.__PVT__csr_mip_r) 
                                                                 | (0x222U 
                                                                    & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__csr_mip_r = (vlSelfRef.__PVT__csr_mip_r 
                                  | vlSelfRef.__PVT__csr_mip_next_r);
    vlSelfRef.__PVT__branch_r = 0U;
    vlSelfRef.__PVT__branch_target_r = 0U;
    if ((0x20U == (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q))) {
        vlSelfRef.__PVT__branch_r = 1U;
        vlSelfRef.__PVT__branch_target_r = ((3U == (IData)(vlSelfRef.__PVT__irq_priv_q))
                                             ? vlSelfRef.__PVT__csr_mtvec_q
                                             : vlSelfRef.__PVT__csr_stvec_q);
    } else if (((0x30U <= (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)) 
                & (0x33U >= (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))) {
        vlSelfRef.__PVT__branch_r = 1U;
        vlSelfRef.__PVT__branch_target_r = ((3U == 
                                             (3U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))
                                             ? vlSelfRef.__PVT__csr_mepc_q
                                             : vlSelfRef.__PVT__csr_sepc_q);
    } else if ((0x10U == (0x30U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))) {
        vlSelfRef.__PVT__branch_r = 1U;
        vlSelfRef.__PVT__branch_target_r = vlSelfRef.__PVT__csr_mtvec_q;
    } else if ((0x34U == (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q))) {
        vlSelfRef.__PVT__branch_r = 1U;
        vlSelfRef.__PVT__branch_target_r = ((IData)(4U) 
                                            + vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__pc_wb_q);
    }
}

VL_INLINE_OPT void Vriscv_muldiv_csr_tb_riscv_csr_regfile___nba_comb__TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile__0(Vriscv_muldiv_csr_tb_riscv_csr_regfile* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vriscv_muldiv_csr_tb_riscv_csr_regfile___nba_comb__TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rdata_r = ((vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w 
                                 >> 0x1fU) ? ((0x40000000U 
                                               & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                               ? ((0x20000000U 
                                                   & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                   ? 0U
                                                   : 
                                                  ((0x10000000U 
                                                    & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                    ? 0U
                                                    : 
                                                   ((0x8000000U 
                                                     & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                     ? 
                                                    ((0x4000000U 
                                                      & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                      ? 0U
                                                      : 
                                                     ((0x2000000U 
                                                       & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? 0U
                                                       : 
                                                      ((0x1000000U 
                                                        & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                        ? 0U
                                                        : 
                                                       ((0x800000U 
                                                         & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                         ? 0U
                                                         : 
                                                        ((0x400000U 
                                                          & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                          ? 0U
                                                          : 
                                                         ((0x200000U 
                                                           & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                           ? 0U
                                                           : 
                                                          ((0x100000U 
                                                            & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                            ? vlSelfRef.__PVT__csr_mcycle_h_q
                                                            : 0U)))))))
                                                     : 
                                                    ((0x4000000U 
                                                      & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                      ? 0U
                                                      : 
                                                     ((0x2000000U 
                                                       & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? 0U
                                                       : 
                                                      ((0x1000000U 
                                                        & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                        ? 0U
                                                        : 
                                                       ((0x800000U 
                                                         & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                         ? 0U
                                                         : 
                                                        ((0x400000U 
                                                          & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                          ? 0U
                                                          : 
                                                         ((0x200000U 
                                                           & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                           ? 0U
                                                           : vlSelfRef.__PVT__csr_mcycle_q)))))))))
                                               : 0U)
                                 : ((0x40000000U & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                     ? ((0x20000000U 
                                         & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                         ? ((0x10000000U 
                                             & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                             ? ((0x8000000U 
                                                 & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                 ? 
                                                ((0x4000000U 
                                                  & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                  ? 
                                                 ((0x2000000U 
                                                   & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                   ? 0U
                                                   : 
                                                  ((0x1000000U 
                                                    & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                    ? 0U
                                                    : 
                                                   ((0x800000U 
                                                     & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                     ? 0U
                                                     : 
                                                    ((0x400000U 
                                                      & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                      ? 0U
                                                      : 
                                                     ((0x200000U 
                                                       & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? 0U
                                                       : 
                                                      ((0x100000U 
                                                        & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                        ? 0U
                                                        : vlSelfRef.__PVT__csr_mtimecmp_q))))))
                                                  : 0U)
                                                 : 0U)
                                             : 0U) : 0U)
                                     : ((0x20000000U 
                                         & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                         ? ((0x10000000U 
                                             & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                             ? ((0x8000000U 
                                                 & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                 ? 0U
                                                 : 
                                                ((0x4000000U 
                                                  & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                  ? 
                                                 ((0x2000000U 
                                                   & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                   ? 0U
                                                   : 
                                                  ((0x1000000U 
                                                    & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                    ? 0U
                                                    : 
                                                   ((0x800000U 
                                                     & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                     ? 0U
                                                     : 
                                                    ((0x400000U 
                                                      & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                      ? 
                                                     ((0x200000U 
                                                       & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? 0U
                                                       : 
                                                      ((0x100000U 
                                                        & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                        ? 0U
                                                        : 
                                                       (0xaaaU 
                                                        & vlSelfRef.__PVT__csr_mip_q)))
                                                      : 
                                                     ((0x200000U 
                                                       & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? 
                                                      ((0x100000U 
                                                        & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                        ? vlSelfRef.__PVT__csr_mtval_q
                                                        : 
                                                       (0x8000000fU 
                                                        & vlSelfRef.__PVT__csr_mcause_q))
                                                       : 
                                                      ((0x100000U 
                                                        & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                        ? vlSelfRef.__PVT__csr_mepc_q
                                                        : vlSelfRef.__PVT__csr_mscratch_q))))))
                                                  : 
                                                 ((0x2000000U 
                                                   & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                   ? 0U
                                                   : 
                                                  ((0x1000000U 
                                                    & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                    ? 0U
                                                    : 
                                                   ((0x800000U 
                                                     & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                     ? 0U
                                                     : 
                                                    ((0x400000U 
                                                      & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                      ? 
                                                     ((0x200000U 
                                                       & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? 0U
                                                       : 
                                                      ((0x100000U 
                                                        & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                        ? vlSelfRef.__PVT__csr_mtvec_q
                                                        : 
                                                       (0xaaaU 
                                                        & vlSelfRef.__PVT__csr_mie_q)))
                                                      : 
                                                     ((0x200000U 
                                                       & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                       ? 0U
                                                       : 
                                                      ((0x100000U 
                                                        & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)
                                                        ? 0x40001100U
                                                        : vlSelfRef.__PVT__csr_sr_q))))))))
                                             : 0U) : 0U)));
}
