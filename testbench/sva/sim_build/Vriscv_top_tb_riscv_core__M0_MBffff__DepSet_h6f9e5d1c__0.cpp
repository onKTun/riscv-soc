// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top_tb.h for the primary calling header

#include "Vriscv_top_tb__pch.h"
#include "Vriscv_top_tb__Syms.h"
#include "Vriscv_top_tb_riscv_core__M0_MBffff.h"

VL_INLINE_OPT void Vriscv_top_tb_riscv_core__M0_MBffff___nba_sequent__TOP__riscv_top_tb__dut__u_core__0(Vriscv_top_tb_riscv_core__M0_MBffff* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_tb_riscv_core__M0_MBffff___nba_sequent__TOP__riscv_top_tb__dut__u_core__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__u_lsu__DOT__mem_rd_q;
    __Vdly__u_lsu__DOT__mem_rd_q = 0;
    CData/*3:0*/ __Vdly__u_lsu__DOT__mem_wr_q;
    __Vdly__u_lsu__DOT__mem_wr_q = 0;
    CData/*0:0*/ __Vdly__u_lsu__DOT__mem_unaligned_e1_q;
    __Vdly__u_lsu__DOT__mem_unaligned_e1_q = 0;
    CData/*1:0*/ __Vdly__u_lsu__DOT__u_lsu_request__DOT__count_q;
    __Vdly__u_lsu__DOT__u_lsu_request__DOT__count_q = 0;
    CData/*0:0*/ __Vdly__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q;
    __Vdly__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q = 0;
    CData/*0:0*/ __Vdly__u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q;
    __Vdly__u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q = 0;
    QData/*62:0*/ __Vdly__u_div__DOT__divisor_q;
    __Vdly__u_div__DOT__divisor_q = 0;
    IData/*31:0*/ __Vdly__u_div__DOT__q_mask_q;
    __Vdly__u_div__DOT__q_mask_q = 0;
    CData/*0:0*/ __VdlySet__u_lsu__DOT__u_lsu_request__DOT__ram_q__v0;
    __VdlySet__u_lsu__DOT__u_lsu_request__DOT__ram_q__v0 = 0;
    QData/*35:0*/ __VdlyVal__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2;
    __VdlyVal__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2 = 0;
    CData/*0:0*/ __VdlyDim0__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2;
    __VdlyDim0__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2 = 0;
    CData/*0:0*/ __VdlySet__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2;
    __VdlySet__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2 = 0;
    // Body
    vlSelfRef.__Vdly__u_div__DOT__dividend_q = vlSelfRef.__PVT__u_div__DOT__dividend_q;
    __Vdly__u_div__DOT__divisor_q = vlSelfRef.__PVT__u_div__DOT__divisor_q;
    vlSelfRef.__Vdly__u_div__DOT__quotient_q = vlSelfRef.__PVT__u_div__DOT__quotient_q;
    __Vdly__u_div__DOT__q_mask_q = vlSelfRef.__PVT__u_div__DOT__q_mask_q;
    __Vdly__u_lsu__DOT__u_lsu_request__DOT__count_q 
        = vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q;
    __Vdly__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q 
        = vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q;
    __Vdly__u_lsu__DOT__mem_unaligned_e1_q = vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_e1_q;
    __Vdly__u_lsu__DOT__mem_wr_q = vlSelfRef.__PVT__u_lsu__DOT__mem_wr_q;
    __Vdly__u_lsu__DOT__mem_rd_q = vlSelfRef.__PVT__u_lsu__DOT__mem_rd_q;
    __Vdly__u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q 
        = vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q;
    __VdlySet__u_lsu__DOT__u_lsu_request__DOT__ram_q__v0 = 0U;
    __VdlySet__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2 = 0U;
    if (vlSymsp->TOP__riscv_top_tb.__PVT__rst) {
        vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__i = 2U;
        vlSelfRef.__Vdly__u_div__DOT__dividend_q = 0U;
        __Vdly__u_div__DOT__divisor_q = 0ULL;
        vlSelfRef.__Vdly__u_div__DOT__quotient_q = 0U;
        __Vdly__u_div__DOT__q_mask_q = 0U;
        __Vdly__u_lsu__DOT__u_lsu_request__DOT__count_q = 0U;
        __Vdly__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q = 0U;
        __Vdly__u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q = 0U;
        __VdlySet__u_lsu__DOT__u_lsu_request__DOT__ram_q__v0 = 1U;
        vlSelfRef.__PVT__u_exec__DOT__branch_call_q = 0U;
        vlSelfRef.__PVT__u_exec__DOT__branch_ret_q = 0U;
        vlSelfRef.__PVT__u_exec__DOT__branch_jmp_q = 0U;
        vlSelfRef.__PVT__u_exec__DOT__branch_taken_q = 0U;
        vlSelfRef.__PVT__u_exec__DOT__branch_ntaken_q = 0U;
        vlSelfRef.__PVT__u_exec__DOT__pc_m_q = 0U;
        vlSelfRef.__PVT__u_exec__DOT__pc_x_q = 0U;
        vlSelfRef.__PVT__u_fetch__DOT__icache_fetch_q = 0U;
        vlSelfRef.__PVT__u_fetch__DOT__active_q = 0U;
        vlSelfRef.__PVT__u_fetch__DOT__branch_d_q = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__pending_lsu_e2_q = 0U;
        vlSelfRef.__PVT__u_fetch__DOT__pc_d_q = 0U;
        vlSelfRef.__PVT__u_fetch__DOT__priv_f_q = 3U;
        vlSelfRef.__PVT__u_mul__DOT__operand_b_e1_q = 0ULL;
        vlSelfRef.__PVT__u_mul__DOT__operand_a_e1_q = 0ULL;
        vlSelfRef.__PVT__u_mul__DOT__result_e3_q = 0U;
        vlSelfRef.__PVT__u_fetch__DOT__skid_buffer_q[0U] = 0U;
        vlSelfRef.__PVT__u_fetch__DOT__skid_buffer_q[1U] = 0U;
        vlSelfRef.__PVT__u_fetch__DOT__skid_buffer_q[2U] = 0U;
        vlSelfRef.__PVT__u_div__DOT__div_busy_q = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__mem_addr_q = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__mem_data_wr_q = 0U;
        __Vdly__u_lsu__DOT__mem_rd_q = 0U;
        __Vdly__u_lsu__DOT__mem_wr_q = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__mem_cacheable_q = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__mem_invalidate_q = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__mem_writeback_q = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__mem_flush_q = 0U;
        __Vdly__u_lsu__DOT__mem_unaligned_e1_q = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__mem_load_q = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__mem_xb_q = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__mem_xh_q = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__mem_ls_q = 0U;
        vlSelfRef.__PVT__u_fetch__DOT__branch_priv_q = 3U;
    } else {
        if (vlSelfRef.__PVT__u_div__DOT__div_start_w) {
            vlSelfRef.__Vdly__u_div__DOT__dividend_q 
                = (((IData)(vlSelfRef.__PVT__u_div__DOT__signed_operation_w) 
                    & (vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r 
                       >> 0x1fU)) ? (- vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r)
                    : vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r);
            __Vdly__u_div__DOT__divisor_q = (((IData)(vlSelfRef.__PVT__u_div__DOT__signed_operation_w) 
                                              & (vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r 
                                                 >> 0x1fU))
                                              ? ((QData)((IData)(
                                                                 (- vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r))) 
                                                 << 0x1fU)
                                              : ((QData)((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r)) 
                                                 << 0x1fU));
            vlSelfRef.__Vdly__u_div__DOT__quotient_q = 0U;
            __Vdly__u_div__DOT__q_mask_q = 0x80000000U;
            vlSelfRef.__PVT__u_div__DOT__div_busy_q = 1U;
        } else {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_div__DOT__div_complete_w)))) {
                if (vlSelfRef.__PVT__u_div__DOT__div_busy_q) {
                    if ((vlSelfRef.__PVT__u_div__DOT__divisor_q 
                         <= (QData)((IData)(vlSelfRef.__PVT__u_div__DOT__dividend_q)))) {
                        vlSelfRef.__Vdly__u_div__DOT__dividend_q 
                            = (vlSelfRef.__PVT__u_div__DOT__dividend_q 
                               - (IData)(vlSelfRef.__PVT__u_div__DOT__divisor_q));
                        vlSelfRef.__Vdly__u_div__DOT__quotient_q 
                            = (vlSelfRef.__PVT__u_div__DOT__quotient_q 
                               | vlSelfRef.__PVT__u_div__DOT__q_mask_q);
                    }
                    __Vdly__u_div__DOT__divisor_q = 
                        (0x3fffffffffffffffULL & (vlSelfRef.__PVT__u_div__DOT__divisor_q 
                                                  >> 1U));
                    __Vdly__u_div__DOT__q_mask_q = 
                        (vlSelfRef.__PVT__u_div__DOT__q_mask_q 
                         >> 1U);
                }
            }
            if (vlSelfRef.__PVT__u_div__DOT__div_complete_w) {
                vlSelfRef.__PVT__u_div__DOT__div_busy_q = 0U;
            }
        }
        if ((((IData)(vlSelfRef.u_lsu__DOT____Vcellinp__u_lsu_request__push_i) 
              & (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__accept_o)) 
             & (~ ((IData)(vlSelfRef.__PVT__writeback_mem_valid_w) 
                   & (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__valid_o))))) {
            __Vdly__u_lsu__DOT__u_lsu_request__DOT__count_q 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q)));
        } else if (((~ ((IData)(vlSelfRef.u_lsu__DOT____Vcellinp__u_lsu_request__push_i) 
                        & (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__accept_o))) 
                    & ((IData)(vlSelfRef.__PVT__writeback_mem_valid_w) 
                       & (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__valid_o)))) {
            __Vdly__u_lsu__DOT__u_lsu_request__DOT__count_q 
                = (3U & ((IData)(vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__writeback_mem_valid_w) 
             & (0U != (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q)))) {
            __Vdly__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q)));
        }
        if (((IData)(vlSelfRef.u_lsu__DOT____Vcellinp__u_lsu_request__push_i) 
             & (2U != (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q)))) {
            __VdlyVal__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2 
                = (((QData)((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_addr_q)) 
                    << 4U) | (QData)((IData)(((((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_ls_q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_xh_q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_xb_q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_load_q))))));
            __VdlyDim0__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2 
                = vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q;
            __VdlySet__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2 = 1U;
            __Vdly__u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q)));
        }
        if (vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__opcode_issue_r) {
            vlSelfRef.__PVT__u_exec__DOT__branch_call_q 
                = (((IData)(vlSelfRef.__PVT__u_exec__DOT__branch_r) 
                    & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__opcode_issue_r)) 
                   & (IData)(vlSelfRef.__PVT__u_exec__DOT__branch_call_r));
            vlSelfRef.__PVT__u_exec__DOT__branch_ret_q 
                = (((IData)(vlSelfRef.__PVT__u_exec__DOT__branch_r) 
                    & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__opcode_issue_r)) 
                   & (IData)(vlSelfRef.__PVT__u_exec__DOT__branch_ret_r));
            vlSelfRef.__PVT__u_exec__DOT__branch_jmp_q 
                = (((IData)(vlSelfRef.__PVT__u_exec__DOT__branch_r) 
                    & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__opcode_issue_r)) 
                   & (IData)(vlSelfRef.__PVT__u_exec__DOT__branch_jmp_r));
            vlSelfRef.__PVT__u_exec__DOT__branch_taken_q 
                = ((IData)(vlSelfRef.__PVT__u_exec__DOT__branch_r) 
                   & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__opcode_issue_r) 
                      & (IData)(vlSelfRef.__PVT__u_exec__DOT__branch_taken_r)));
            vlSelfRef.__PVT__u_exec__DOT__branch_ntaken_q 
                = ((IData)(vlSelfRef.__PVT__u_exec__DOT__branch_r) 
                   & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__opcode_issue_r) 
                      & (~ (IData)(vlSelfRef.__PVT__u_exec__DOT__branch_taken_r))));
            vlSelfRef.__PVT__u_exec__DOT__pc_m_q = vlSelfRef.__PVT__fetch_pc_w;
            vlSelfRef.__PVT__u_exec__DOT__pc_x_q = 
                ((IData)(vlSelfRef.__PVT__u_exec__DOT__branch_taken_r)
                  ? vlSelfRef.__PVT__u_exec__DOT__branch_target_r
                  : ((IData)(4U) + vlSelfRef.__PVT__fetch_pc_w));
        }
        if (((IData)(vlSelfRef.__PVT__mem_i_rd_o) & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__req_accept_o))) {
            vlSelfRef.__PVT__u_fetch__DOT__icache_fetch_q = 1U;
            vlSelfRef.__PVT__u_fetch__DOT__pc_d_q = vlSelfRef.__PVT__u_fetch__DOT__pc_f_q;
        } else if (vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__req_valid_o) {
            vlSelfRef.__PVT__u_fetch__DOT__icache_fetch_q = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__u_fetch__DOT__branch_q) 
             & (~ (IData)(vlSelfRef.__PVT__u_fetch__DOT__stall_w)))) {
            vlSelfRef.__PVT__u_fetch__DOT__active_q = 1U;
            vlSelfRef.__PVT__u_fetch__DOT__branch_d_q = 1U;
            vlSelfRef.__PVT__u_fetch__DOT__priv_f_q 
                = vlSelfRef.__PVT__u_fetch__DOT__branch_priv_q;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_fetch__DOT__stall_w)))) {
            vlSelfRef.__PVT__u_fetch__DOT__branch_d_q = 0U;
        }
        if (vlSelfRef.__PVT__u_lsu__DOT__issue_lsu_e1_w) {
            vlSelfRef.__PVT__u_lsu__DOT__pending_lsu_e2_q = 1U;
        } else if (((IData)(vlSelfRef.__PVT__u_lsu__DOT__complete_ok_e2_w) 
                    | (IData)(vlSelfRef.__PVT__u_lsu__DOT__complete_err_e2_w))) {
            vlSelfRef.__PVT__u_lsu__DOT__pending_lsu_e2_q = 0U;
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__stall_w)))) {
            if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__opcode_issue_r) 
                 & (IData)(vlSelfRef.__PVT__u_mul__DOT__mult_inst_w))) {
                if ((0x2002033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
                    vlSelfRef.__PVT__u_mul__DOT__operand_b_e1_q 
                        = (QData)((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r));
                    vlSelfRef.__PVT__u_mul__DOT__operand_a_e1_q 
                        = vlSelfRef.u_mul__DOT____VdfgRegularize_h4f118b46_0_3;
                } else if ((0x2001033U == (0xfe00707fU 
                                           & vlSelfRef.__PVT__fetch_instr_w))) {
                    vlSelfRef.__PVT__u_mul__DOT__operand_b_e1_q 
                        = (((QData)((IData)((vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r 
                                             >> 0x1fU))) 
                            << 0x20U) | (QData)((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r)));
                    vlSelfRef.__PVT__u_mul__DOT__operand_a_e1_q 
                        = vlSelfRef.u_mul__DOT____VdfgRegularize_h4f118b46_0_3;
                } else {
                    vlSelfRef.__PVT__u_mul__DOT__operand_b_e1_q 
                        = (QData)((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r));
                    vlSelfRef.__PVT__u_mul__DOT__operand_a_e1_q 
                        = (QData)((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r));
                }
            } else {
                vlSelfRef.__PVT__u_mul__DOT__operand_b_e1_q = 0ULL;
                vlSelfRef.__PVT__u_mul__DOT__operand_a_e1_q = 0ULL;
            }
            vlSelfRef.__PVT__u_mul__DOT__result_e3_q 
                = vlSelfRef.__PVT__u_mul__DOT__result_e2_q;
        }
        if (((IData)(vlSelfRef.__PVT__fetch_dec_valid_w) 
             & (~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__fetch_accept_o)))) {
            vlSelfRef.__PVT__u_fetch__DOT__skid_buffer_q[0U] 
                = (IData)((((QData)((IData)(vlSelfRef.__PVT__fetch_pc_w)) 
                            << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__fetch_dec_instr_w))));
            vlSelfRef.__PVT__u_fetch__DOT__skid_buffer_q[1U] 
                = (IData)(((((QData)((IData)(vlSelfRef.__PVT__fetch_pc_w)) 
                             << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__fetch_dec_instr_w))) 
                           >> 0x20U));
            vlSelfRef.__PVT__u_fetch__DOT__skid_buffer_q[2U] 
                = (((IData)(vlSelfRef.__PVT__fetch_fault_page_w) 
                    << 1U) | (IData)(vlSelfRef.__PVT__fetch_dec_fault_fetch_w));
        } else {
            vlSelfRef.__PVT__u_fetch__DOT__skid_buffer_q[0U] = 0U;
            vlSelfRef.__PVT__u_fetch__DOT__skid_buffer_q[1U] = 0U;
            vlSelfRef.__PVT__u_fetch__DOT__skid_buffer_q[2U] = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__u_lsu__DOT__complete_err_e2_w) 
             | (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_e2_q))) {
            vlSelfRef.__PVT__u_lsu__DOT__mem_addr_q = 0U;
            vlSelfRef.__PVT__u_lsu__DOT__mem_data_wr_q = 0U;
            __Vdly__u_lsu__DOT__mem_rd_q = 0U;
            __Vdly__u_lsu__DOT__mem_wr_q = 0U;
            vlSelfRef.__PVT__u_lsu__DOT__mem_cacheable_q = 0U;
            vlSelfRef.__PVT__u_lsu__DOT__mem_invalidate_q = 0U;
            vlSelfRef.__PVT__u_lsu__DOT__mem_writeback_q = 0U;
            vlSelfRef.__PVT__u_lsu__DOT__mem_flush_q = 0U;
            __Vdly__u_lsu__DOT__mem_unaligned_e1_q = 0U;
            vlSelfRef.__PVT__u_lsu__DOT__mem_load_q = 0U;
            vlSelfRef.__PVT__u_lsu__DOT__mem_xb_q = 0U;
            vlSelfRef.__PVT__u_lsu__DOT__mem_xh_q = 0U;
            vlSelfRef.__PVT__u_lsu__DOT__mem_ls_q = 0U;
        } else if ((1U & (~ ((((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_rd_q) 
                               | (0U != (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_wr_q))) 
                              | (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_e1_q)) 
                             & (IData)(vlSelfRef.__PVT__u_lsu__DOT__delay_lsu_e2_w))))) {
            if ((1U & (~ ((((((IData)(vlSelfRef.__PVT__mmu_lsu_writeback_w) 
                              | (IData)(vlSelfRef.__PVT__mmu_lsu_invalidate_w)) 
                             | (IData)(vlSelfRef.__PVT__mmu_lsu_flush_w)) 
                            | (IData)(vlSelfRef.__PVT__mem_d_rd_o)) 
                           | (0U != (IData)(vlSelfRef.__PVT__mem_d_wr_o))) 
                          & (~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__mem_accept_o)))))) {
                vlSelfRef.__PVT__u_lsu__DOT__mem_addr_q = 0U;
                vlSelfRef.__PVT__u_lsu__DOT__mem_data_wr_q 
                    = vlSelfRef.__PVT__u_lsu__DOT__mem_data_r;
                __Vdly__u_lsu__DOT__mem_rd_q = vlSelfRef.__PVT__u_lsu__DOT__mem_rd_r;
                __Vdly__u_lsu__DOT__mem_wr_q = vlSelfRef.__PVT__u_lsu__DOT__mem_wr_r;
                vlSelfRef.__PVT__u_lsu__DOT__mem_cacheable_q = 0U;
                vlSelfRef.__PVT__u_lsu__DOT__mem_invalidate_q = 0U;
                vlSelfRef.__PVT__u_lsu__DOT__mem_writeback_q = 0U;
                vlSelfRef.__PVT__u_lsu__DOT__mem_flush_q = 0U;
                __Vdly__u_lsu__DOT__mem_unaligned_e1_q 
                    = vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_r;
                vlSelfRef.__PVT__u_lsu__DOT__mem_load_q 
                    = ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                       & (IData)(vlSelfRef.__PVT__u_lsu__DOT__load_inst_w));
                vlSelfRef.__PVT__u_lsu__DOT__mem_xb_q 
                    = (((3U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w)) 
                        | (0x4003U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w))) 
                       | (0x23U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w)));
                vlSelfRef.__PVT__u_lsu__DOT__mem_xh_q 
                    = ((IData)(vlSelfRef.__PVT__u_lsu__DOT__req_lh_w) 
                       | (0x1023U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w)));
                vlSelfRef.__PVT__u_lsu__DOT__mem_ls_q 
                    = vlSelfRef.__PVT__u_lsu__DOT__load_signed_inst_w;
                vlSelfRef.__PVT__u_lsu__DOT__mem_cacheable_q 
                    = ((0xffffU >= vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r) 
                       | ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                          & (((IData)(vlSelfRef.__PVT__u_lsu__DOT__dcache_invalidate_w) 
                              | (IData)(vlSelfRef.__PVT__u_lsu__DOT__dcache_writeback_w)) 
                             | (IData)(vlSelfRef.__PVT__u_lsu__DOT__dcache_flush_w))));
                vlSelfRef.__PVT__u_lsu__DOT__mem_invalidate_q 
                    = ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                       & (IData)(vlSelfRef.__PVT__u_lsu__DOT__dcache_invalidate_w));
                vlSelfRef.__PVT__u_lsu__DOT__mem_writeback_q 
                    = ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                       & (IData)(vlSelfRef.__PVT__u_lsu__DOT__dcache_writeback_w));
                vlSelfRef.__PVT__u_lsu__DOT__mem_flush_q 
                    = ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                       & (IData)(vlSelfRef.__PVT__u_lsu__DOT__dcache_flush_w));
                vlSelfRef.__PVT__u_lsu__DOT__mem_addr_q 
                    = vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r;
            }
        }
        if (vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__branch_request_o) {
            vlSelfRef.__PVT__u_fetch__DOT__branch_priv_q 
                = ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__branch_q)
                    ? (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__branch_csr_priv_o)
                    : (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__priv_x_q));
        }
    }
    vlSelfRef.__PVT__u_fetch__DOT__icache_invalidate_q = 0U;
    vlSelfRef.__PVT__u_fetch__DOT__stall_q = ((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
                                              & (IData)(vlSelfRef.__PVT__u_fetch__DOT__stall_w));
    vlSelfRef.__PVT__u_fetch__DOT__skid_valid_q = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst))) 
                                                   && ((IData)(vlSelfRef.__PVT__fetch_dec_valid_w) 
                                                       & (~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__fetch_accept_o))));
    vlSelfRef.__PVT__u_div__DOT__divisor_q = __Vdly__u_div__DOT__divisor_q;
    vlSelfRef.__PVT__u_div__DOT__q_mask_q = __Vdly__u_div__DOT__q_mask_q;
    vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q 
        = __Vdly__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q;
    vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q 
        = __Vdly__u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q;
    vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q 
        = __Vdly__u_lsu__DOT__u_lsu_request__DOT__count_q;
    if (__VdlySet__u_lsu__DOT__u_lsu_request__DOT__ram_q__v0) {
        vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q[0U] = 0ULL;
        vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q[1U] = 0ULL;
    }
    if (__VdlySet__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2) {
        vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q[__VdlyDim0__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2] 
            = __VdlyVal__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2;
    }
    vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__accept_o 
        = (2U != (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q));
    vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__valid_o 
        = (0U != (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q));
    vlSelfRef.__PVT__u_lsu__DOT__resp_addr_w = (IData)(
                                                       (vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                                                        [vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                                        >> 4U));
    vlSelfRef.__PVT__u_lsu__DOT__resp_load_w = (1U 
                                                & (IData)(
                                                          vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                                                          [vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q]));
    vlSelfRef.__PVT__fetch_fault_page_w = ((IData)(vlSelfRef.__PVT__u_fetch__DOT__skid_valid_q) 
                                           && (1U & 
                                               (vlSelfRef.__PVT__u_fetch__DOT__skid_buffer_q[2U] 
                                                >> 1U)));
    vlSelfRef.__PVT__u_lsu__DOT__mem_wr_q = __Vdly__u_lsu__DOT__mem_wr_q;
    vlSelfRef.__PVT__u_lsu__DOT__mem_rd_q = __Vdly__u_lsu__DOT__mem_rd_q;
    vlSelfRef.__PVT__mmu_lsu_invalidate_w = vlSelfRef.__PVT__u_lsu__DOT__mem_invalidate_q;
    vlSelfRef.__PVT__mmu_lsu_writeback_w = vlSelfRef.__PVT__u_lsu__DOT__mem_writeback_q;
    vlSelfRef.__PVT__mmu_lsu_flush_w = vlSelfRef.__PVT__u_lsu__DOT__mem_flush_q;
    vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_e2_q 
        = ((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
           & ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_e1_q) 
              & (~ (IData)(vlSelfRef.__PVT__u_lsu__DOT__delay_lsu_e2_w))));
    vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_e1_q 
        = __Vdly__u_lsu__DOT__mem_unaligned_e1_q;
}

VL_INLINE_OPT void Vriscv_top_tb_riscv_core__M0_MBffff___nba_sequent__TOP__riscv_top_tb__dut__u_core__1(Vriscv_top_tb_riscv_core__M0_MBffff* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_tb_riscv_core__M0_MBffff___nba_sequent__TOP__riscv_top_tb__dut__u_core__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    if (vlSelfRef.__PVT__u_fetch__DOT__skid_valid_q) {
        vlSelfRef.__PVT__fetch_dec_fault_fetch_w = 
            (1U & vlSelfRef.__PVT__u_fetch__DOT__skid_buffer_q[2U]);
        vlSelfRef.__PVT__fetch_pc_w = vlSelfRef.__PVT__u_fetch__DOT__skid_buffer_q[1U];
    } else {
        vlSelfRef.__PVT__fetch_dec_fault_fetch_w = 
            (1U & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__axi_error_q));
        vlSelfRef.__PVT__fetch_pc_w = (0xfffffffcU 
                                       & vlSelfRef.__PVT__u_fetch__DOT__pc_d_q);
    }
    vlSelfRef.u_decode__DOT____Vcellinp__genblk1__DOT__u_dec__fetch_fault_i 
        = ((IData)(vlSelfRef.__PVT__fetch_dec_fault_fetch_w) 
           | (IData)(vlSelfRef.__PVT__fetch_fault_page_w));
    vlSelfRef.__PVT__u_div__DOT__valid_q = ((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
                                            & (IData)(vlSelfRef.__PVT__u_div__DOT__div_complete_w));
    if (vlSymsp->TOP__riscv_top_tb.__PVT__rst) {
        vlSelfRef.__PVT__u_mul__DOT__result_e2_q = 0U;
        vlSelfRef.__PVT__u_exec__DOT__result_q = 0U;
        vlSelfRef.__PVT__u_div__DOT__wb_result_q = 0U;
        vlSelfRef.__PVT__u_mul__DOT__mulhi_sel_e1_q = 0U;
        vlSelfRef.__PVT__u_div__DOT__div_inst_q = 0U;
        vlSelfRef.__PVT__u_div__DOT__invert_res_q = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__stall_w)))) {
            vlSelfRef.__PVT__u_mul__DOT__result_e2_q 
                = ((IData)(vlSelfRef.__PVT__u_mul__DOT__mulhi_sel_e1_q)
                    ? vlSelfRef.__PVT__u_mul__DOT__mult_result_w[1U]
                    : vlSelfRef.__PVT__u_mul__DOT__mult_result_w[0U]);
            vlSelfRef.__PVT__u_exec__DOT__result_q 
                = vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__result_r;
            vlSelfRef.__PVT__u_mul__DOT__mulhi_sel_e1_q 
                = (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__opcode_issue_r) 
                    & (IData)(vlSelfRef.__PVT__u_mul__DOT__mult_inst_w)) 
                   && (0x2000033U != (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w)));
        }
        if (vlSelfRef.__PVT__u_div__DOT__div_complete_w) {
            vlSelfRef.__PVT__u_div__DOT__wb_result_q 
                = ((IData)(vlSelfRef.__PVT__u_div__DOT__div_inst_q)
                    ? ((IData)(vlSelfRef.__PVT__u_div__DOT__invert_res_q)
                        ? (- vlSelfRef.__PVT__u_div__DOT__quotient_q)
                        : vlSelfRef.__PVT__u_div__DOT__quotient_q)
                    : ((IData)(vlSelfRef.__PVT__u_div__DOT__invert_res_q)
                        ? (- vlSelfRef.__PVT__u_div__DOT__dividend_q)
                        : vlSelfRef.__PVT__u_div__DOT__dividend_q));
        }
        if (vlSelfRef.__PVT__u_div__DOT__div_start_w) {
            vlSelfRef.__PVT__u_div__DOT__div_inst_q 
                = vlSelfRef.__PVT__u_div__DOT__div_operation_w;
            vlSelfRef.__PVT__u_div__DOT__invert_res_q 
                = ((((0x2004033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w)) 
                     & ((vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r 
                         >> 0x1fU) != (vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r 
                                       >> 0x1fU))) 
                    & (0U != vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r)) 
                   | ((0x2006033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w)) 
                      & (vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r 
                         >> 0x1fU)));
        }
    }
    __Vtemp_2[0U] = (IData)(vlSelfRef.__PVT__u_mul__DOT__operand_a_e1_q);
    __Vtemp_2[1U] = (((- (IData)((1U & (IData)((vlSelfRef.__PVT__u_mul__DOT__operand_a_e1_q 
                                                >> 0x20U))))) 
                      << 1U) | (IData)((vlSelfRef.__PVT__u_mul__DOT__operand_a_e1_q 
                                        >> 0x20U)));
    __Vtemp_2[2U] = ((- (IData)((1U & (IData)((vlSelfRef.__PVT__u_mul__DOT__operand_a_e1_q 
                                               >> 0x20U))))) 
                     >> 0x1fU);
    __Vtemp_3[0U] = (IData)(vlSelfRef.__PVT__u_mul__DOT__operand_b_e1_q);
    __Vtemp_3[1U] = (((- (IData)((1U & (IData)((vlSelfRef.__PVT__u_mul__DOT__operand_b_e1_q 
                                                >> 0x20U))))) 
                      << 1U) | (IData)((vlSelfRef.__PVT__u_mul__DOT__operand_b_e1_q 
                                        >> 0x20U)));
    __Vtemp_3[2U] = ((- (IData)((1U & (IData)((vlSelfRef.__PVT__u_mul__DOT__operand_b_e1_q 
                                               >> 0x20U))))) 
                     >> 0x1fU);
    VL_MUL_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    vlSelfRef.__PVT__u_mul__DOT__mult_result_w[0U] 
        = __Vtemp_4[0U];
    vlSelfRef.__PVT__u_mul__DOT__mult_result_w[1U] 
        = __Vtemp_4[1U];
    vlSelfRef.__PVT__u_mul__DOT__mult_result_w[2U] 
        = (1U & __Vtemp_4[2U]);
    vlSelfRef.__PVT__u_div__DOT__quotient_q = vlSelfRef.__Vdly__u_div__DOT__quotient_q;
    vlSelfRef.__PVT__u_div__DOT__dividend_q = vlSelfRef.__Vdly__u_div__DOT__dividend_q;
    vlSelfRef.__PVT__u_div__DOT__div_complete_w = (
                                                   (~ (IData)(
                                                              (0U 
                                                               != vlSelfRef.__PVT__u_div__DOT__q_mask_q))) 
                                                   & (IData)(vlSelfRef.__PVT__u_div__DOT__div_busy_q));
}

VL_INLINE_OPT void Vriscv_top_tb_riscv_core__M0_MBffff___nba_sequent__TOP__riscv_top_tb__dut__u_core__2(Vriscv_top_tb_riscv_core__M0_MBffff* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_tb_riscv_core__M0_MBffff___nba_sequent__TOP__riscv_top_tb__dut__u_core__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__riscv_top_tb.__PVT__rst) {
        vlSelfRef.__PVT__u_fetch__DOT__pc_f_q = 0U;
        vlSelfRef.__PVT__u_fetch__DOT__branch_q = 0U;
        vlSelfRef.__PVT__u_fetch__DOT__branch_pc_q = 0U;
    } else {
        if (((IData)(vlSelfRef.__PVT__u_fetch__DOT__branch_q) 
             & (~ (IData)(vlSelfRef.__PVT__u_fetch__DOT__stall_w)))) {
            vlSelfRef.__PVT__u_fetch__DOT__pc_f_q = vlSelfRef.__PVT__u_fetch__DOT__branch_pc_q;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_fetch__DOT__stall_w)))) {
            vlSelfRef.__PVT__u_fetch__DOT__pc_f_q = 
                ((IData)(4U) + (0xfffffffcU & vlSelfRef.__PVT__u_fetch__DOT__icache_pc_w));
        }
        if (vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__branch_request_o) {
            vlSelfRef.__PVT__u_fetch__DOT__branch_q = 1U;
            vlSelfRef.__PVT__u_fetch__DOT__branch_pc_q 
                = ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__branch_q)
                    ? vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__branch_target_q
                    : vlSelfRef.__PVT__u_exec__DOT__branch_target_r);
        } else if (((IData)(vlSelfRef.__PVT__mem_i_rd_o) 
                    & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__req_accept_o))) {
            vlSelfRef.__PVT__u_fetch__DOT__branch_q = 0U;
            vlSelfRef.__PVT__u_fetch__DOT__branch_pc_q = 0U;
        }
    }
    vlSelfRef.__PVT__u_fetch__DOT__icache_pc_w = vlSelfRef.__PVT__u_fetch__DOT__pc_f_q;
}

VL_INLINE_OPT void Vriscv_top_tb_riscv_core__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__u_core__0(Vriscv_top_tb_riscv_core__M0_MBffff* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_tb_riscv_core__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__u_core__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_58;
    u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_58 = 0;
    CData/*0:0*/ u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_59;
    u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_59 = 0;
    CData/*0:0*/ u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_60;
    u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_60 = 0;
    CData/*0:0*/ u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_61;
    u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_61 = 0;
    CData/*0:0*/ u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_62;
    u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_62 = 0;
    CData/*0:0*/ u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_65;
    u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_65 = 0;
    // Body
    vlSelfRef.__PVT__fetch_dec_instr_w = ((IData)(vlSelfRef.__PVT__u_fetch__DOT__skid_valid_q)
                                           ? vlSelfRef.__PVT__u_fetch__DOT__skid_buffer_q[0U]
                                           : vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__inst_r);
    vlSelfRef.__PVT__u_fetch__DOT__icache_busy_w = 
        ((~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__req_valid_o)) 
         & (IData)(vlSelfRef.__PVT__u_fetch__DOT__icache_fetch_q));
    vlSelfRef.__PVT__fetch_dec_valid_w = ((~ ((IData)(vlSelfRef.__PVT__u_fetch__DOT__branch_d_q) 
                                              | (IData)(vlSelfRef.__PVT__u_fetch__DOT__branch_q))) 
                                          & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__req_valid_o) 
                                             | (IData)(vlSelfRef.__PVT__u_fetch__DOT__skid_valid_q)));
    vlSelfRef.__PVT__u_lsu__DOT__complete_err_e2_w 
        = ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__mem_ack_o) 
           & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__mem_error_o));
    vlSelfRef.__PVT__u_lsu__DOT__wb_result_r = 0U;
    vlSelfRef.__PVT__u_lsu__DOT__addr_lsb_r = (3U & vlSelfRef.__PVT__u_lsu__DOT__resp_addr_w);
    vlSelfRef.__PVT__u_lsu__DOT__load_byte_r = (1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                                                           [vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                                           >> 1U)));
    vlSelfRef.__PVT__u_lsu__DOT__load_half_r = (1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                                                           [vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                                           >> 2U)));
    vlSelfRef.__PVT__u_lsu__DOT__load_signed_r = (1U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                                                             [vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                                             >> 3U)));
    if ((((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__mem_ack_o) 
          & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__mem_error_o)) 
         | (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_e2_q))) {
        vlSelfRef.__PVT__u_lsu__DOT__wb_result_r = vlSelfRef.__PVT__u_lsu__DOT__resp_addr_w;
    } else if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__mem_ack_o) 
                & (IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_load_w))) {
        if (vlSelfRef.__PVT__u_lsu__DOT__load_byte_r) {
            vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                = ((2U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__addr_lsb_r))
                    ? ((1U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__addr_lsb_r))
                        ? (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_mux__DOT__cache_access_q)
                             ? vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__data_r
                             : vlSymsp->TOP__riscv_top_tb.__PVT__d_rdata) 
                           >> 0x18U) : (0xffU & (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_mux__DOT__cache_access_q)
                                                   ? vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__data_r
                                                   : vlSymsp->TOP__riscv_top_tb.__PVT__d_rdata) 
                                                 >> 0x10U)))
                    : ((1U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__addr_lsb_r))
                        ? (0xffU & (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_mux__DOT__cache_access_q)
                                      ? vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__data_r
                                      : vlSymsp->TOP__riscv_top_tb.__PVT__d_rdata) 
                                    >> 8U)) : (0xffU 
                                               & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_mux__DOT__cache_access_q)
                                                   ? vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__data_r
                                                   : vlSymsp->TOP__riscv_top_tb.__PVT__d_rdata))));
            if (((IData)(vlSelfRef.__PVT__u_lsu__DOT__load_signed_r) 
                 & (vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                    >> 7U))) {
                vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                    = (0xffffff00U | (0xffU & vlSelfRef.__PVT__u_lsu__DOT__wb_result_r));
            }
        } else if (vlSelfRef.__PVT__u_lsu__DOT__load_half_r) {
            vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                = ((2U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__addr_lsb_r))
                    ? (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_mux__DOT__cache_access_q)
                         ? vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__data_r
                         : vlSymsp->TOP__riscv_top_tb.__PVT__d_rdata) 
                       >> 0x10U) : (0xffffU & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_mux__DOT__cache_access_q)
                                                ? vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__data_r
                                                : vlSymsp->TOP__riscv_top_tb.__PVT__d_rdata)));
            if (((IData)(vlSelfRef.__PVT__u_lsu__DOT__load_signed_r) 
                 & (vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                    >> 0xfU))) {
                vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                    = (0xffff0000U | (0xffffU & vlSelfRef.__PVT__u_lsu__DOT__wb_result_r));
            }
        } else {
            vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                = ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_mux__DOT__cache_access_q)
                    ? vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__data_r
                    : vlSymsp->TOP__riscv_top_tb.__PVT__d_rdata);
        }
    }
    vlSelfRef.__PVT__u_lsu__DOT__complete_ok_e2_w = 
        ((~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__mem_error_o)) 
         & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__mem_ack_o));
    vlSelfRef.__PVT__writeback_mem_valid_w = ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__mem_ack_o) 
                                              | (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_e2_q));
    vlSelfRef.__PVT__fetch_instr_w = ((IData)(vlSelfRef.u_decode__DOT____Vcellinp__genblk1__DOT__u_dec__fetch_fault_i)
                                       ? 0U : vlSelfRef.__PVT__fetch_dec_instr_w);
    vlSelfRef.__PVT__u_lsu__DOT__delay_lsu_e2_w = (
                                                   (~ (IData)(vlSelfRef.__PVT__u_lsu__DOT__complete_ok_e2_w)) 
                                                   & (IData)(vlSelfRef.__PVT__u_lsu__DOT__pending_lsu_e2_q));
    vlSelfRef.__PVT__u_div__DOT__signed_operation_w 
        = ((0x2004033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w)) 
           | (0x2006033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w)));
    vlSelfRef.__PVT__u_lsu__DOT__dcache_invalidate_w 
        = (IData)((0x3a201073U == (0xfff0707fU & vlSelfRef.__PVT__fetch_instr_w)));
    vlSelfRef.__PVT__u_lsu__DOT__dcache_writeback_w 
        = (IData)((0x3a101073U == (0xfff0707fU & vlSelfRef.__PVT__fetch_instr_w)));
    vlSelfRef.__PVT__u_lsu__DOT__dcache_flush_w = (IData)(
                                                          (0x3a001073U 
                                                           == 
                                                           (0xfff0707fU 
                                                            & vlSelfRef.__PVT__fetch_instr_w)));
    vlSelfRef.__PVT__u_mul__DOT__mult_inst_w = ((0x2000033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelfRef.__PVT__fetch_instr_w)) 
                                                | ((0x2001033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelfRef.__PVT__fetch_instr_w)) 
                                                   | ((0x2002033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelfRef.__PVT__fetch_instr_w)) 
                                                      | (0x2003033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelfRef.__PVT__fetch_instr_w)))));
    vlSelfRef.__PVT__u_div__DOT__div_operation_w = 
        ((0x2004033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w)) 
         | (0x2005033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w)));
    vlSelfRef.__PVT__u_lsu__DOT__req_lh_w = ((0x1003U 
                                              == (0x707fU 
                                                  & vlSelfRef.__PVT__fetch_instr_w)) 
                                             | (0x5003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelfRef.__PVT__fetch_instr_w)));
    vlSelfRef.__PVT__u_lsu__DOT__load_signed_inst_w 
        = ((3U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w)) 
           | ((0x1003U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w)) 
              | (0x2003U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w))));
    vlSelfRef.__PVT__u_exec__DOT__alu_func_r = 0U;
    if ((0x33U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_func_r = 4U;
    } else if ((0x7033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_func_r = 7U;
    } else if ((0x6033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_func_r = 8U;
    } else if ((0x1033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_func_r = 1U;
    } else if ((0x40005033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_func_r = 3U;
    } else if ((0x5033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_func_r = 2U;
    } else if ((0x40000033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_func_r = 6U;
    } else if ((0x4033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_func_r = 9U;
    } else if ((0x2033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_func_r = 0xbU;
    } else if ((0x3033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_func_r = 0xaU;
    } else if ((0x13U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_func_r = 4U;
    } else if ((0x7013U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_func_r = 7U;
    } else if ((0x2013U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_func_r = 0xbU;
    } else if ((0x3013U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_func_r = 0xaU;
    } else if ((0x6013U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_func_r = 8U;
    } else if ((0x4013U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_func_r = 9U;
    } else if ((0x1013U == (0xfc00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_func_r = 1U;
    } else if ((0x5013U == (0xfc00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_func_r = 2U;
    } else if ((0x40005013U == (0xfc00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_func_r = 3U;
    } else if ((0x37U != (0x7fU & vlSelfRef.__PVT__fetch_instr_w))) {
        if ((0x17U == (0x7fU & vlSelfRef.__PVT__fetch_instr_w))) {
            vlSelfRef.__PVT__u_exec__DOT__alu_func_r = 4U;
        } else if (((0x6fU == (0x7fU & vlSelfRef.__PVT__fetch_instr_w)) 
                    | (0x67U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w)))) {
            vlSelfRef.__PVT__u_exec__DOT__alu_func_r = 4U;
        }
    }
    vlSelfRef.__PVT__u_exec__DOT__imm12_r = (((- (IData)(
                                                         (vlSelfRef.__PVT__fetch_instr_w 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (vlSelfRef.__PVT__fetch_instr_w 
                                                >> 0x14U));
    vlSelfRef.__PVT__fetch_instr_exec_w = ((0x7013U 
                                            == (0x707fU 
                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                           | ((0x13U 
                                               == (0x707fU 
                                                   & vlSelfRef.__PVT__fetch_instr_w)) 
                                              | ((0x2013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelfRef.__PVT__fetch_instr_w)) 
                                                 | ((0x3013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelfRef.__PVT__fetch_instr_w)) 
                                                    | ((0x6013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.__PVT__fetch_instr_w)) 
                                                       | ((0x4013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelfRef.__PVT__fetch_instr_w)) 
                                                          | ((0x1013U 
                                                              == 
                                                              (0xfc00707fU 
                                                               & vlSelfRef.__PVT__fetch_instr_w)) 
                                                             | ((0x5013U 
                                                                 == 
                                                                 (0xfc00707fU 
                                                                  & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                | ((0x40005013U 
                                                                    == 
                                                                    (0xfc00707fU 
                                                                     & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                   | ((0x37U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                      | ((0x17U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                         | ((0x33U 
                                                                             == 
                                                                             (0xfe00707fU 
                                                                              & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                            | ((0x40000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                               | ((0x2033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x3033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x4033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x6033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x7033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x1033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x5033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | (0x40005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w))))))))))))))))))))));
    vlSelfRef.u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_57 
        = ((0x6fU == (0x7fU & vlSelfRef.__PVT__fetch_instr_w)) 
           | (0x67U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w)));
    vlSelfRef.u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_64 
        = ((0x63U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w)) 
           | (0x1063U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w)));
    vlSelfRef.u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_63 
        = ((0x6063U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w)) 
           | (0x7063U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w)));
    u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_58 
        = ((0x2000033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w)) 
           | (0x2001033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w)));
    u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_62 
        = ((0x2002033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w)) 
           | (0x2003033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w)));
    u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_59 
        = ((0x2004033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w)) 
           | (0x2005033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w)));
    u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_60 
        = ((0x100073U == vlSelfRef.__PVT__fetch_instr_w) 
           | (0x200073U == (0xcfffffffU & vlSelfRef.__PVT__fetch_instr_w)));
    u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_65 
        = ((0x6073U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w)) 
           | (0x7073U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w)));
    u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_61 
        = ((0x2006033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w)) 
           | (0x2007033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w)));
    vlSelfRef.__PVT__mem_d_wr_o = ((~ (- (IData)((IData)(vlSelfRef.__PVT__u_lsu__DOT__delay_lsu_e2_w)))) 
                                   & (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_wr_q));
    vlSelfRef.__PVT__mem_d_rd_o = ((~ (IData)(vlSelfRef.__PVT__u_lsu__DOT__delay_lsu_e2_w)) 
                                   & (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_rd_q));
    vlSelfRef.__PVT__u_lsu__DOT__load_inst_w = ((IData)(vlSelfRef.__PVT__u_lsu__DOT__load_signed_inst_w) 
                                                | ((0x4003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelfRef.__PVT__fetch_instr_w)) 
                                                   | ((0x5003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.__PVT__fetch_instr_w)) 
                                                      | (0x6003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelfRef.__PVT__fetch_instr_w)))));
    vlSelfRef.__PVT__fetch_instr_mul_w = ((IData)(u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_58) 
                                          | (IData)(u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_62));
    vlSelfRef.__PVT__fetch_instr_div_w = ((IData)(u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_59) 
                                          | (IData)(u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_61));
    vlSelfRef.__PVT__fetch_instr_rd_valid_w = ((0x67U 
                                                == 
                                                (0x707fU 
                                                 & vlSelfRef.__PVT__fetch_instr_w)) 
                                               | ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.__PVT__fetch_instr_w)) 
                                                  | ((0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelfRef.__PVT__fetch_instr_w)) 
                                                     | ((0x17U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelfRef.__PVT__fetch_instr_w)) 
                                                        | ((0x13U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.__PVT__fetch_instr_w)) 
                                                           | ((0x1013U 
                                                               == 
                                                               (0xfc00707fU 
                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                              | ((0x2013U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                 | ((0x3013U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                    | ((0x4013U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                       | ((0x5013U 
                                                                           == 
                                                                           (0xfc00707fU 
                                                                            & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                          | ((0x40005013U 
                                                                              == 
                                                                              (0xfc00707fU 
                                                                               & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                             | ((0x6013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x7013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x33U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x40000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x1033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x2033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x3033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x4033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x5033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x40005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x6033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x7033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((3U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x1003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x2003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x4003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x5003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x6003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((IData)(u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_58) 
                                                                                | ((IData)(u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_62) 
                                                                                | ((IData)(u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_59) 
                                                                                | ((IData)(u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_61) 
                                                                                | ((0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x3073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x5073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | (IData)(u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_65))))))))))))))))))))))))))))))))))))));
    vlSelfRef.__PVT__fetch_instr_invalid_w = ((~ ((IData)(vlSelfRef.__PVT__fetch_instr_exec_w) 
                                                  | ((IData)(vlSelfRef.u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_57) 
                                                     | ((IData)(vlSelfRef.u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_64) 
                                                        | ((0x4063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.__PVT__fetch_instr_w)) 
                                                           | ((0x5063U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                              | ((IData)(vlSelfRef.u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_63) 
                                                                 | ((3U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                    | ((0x1003U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                       | ((0x2003U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                          | ((0x4003U 
                                                                              == 
                                                                              (0x707fU 
                                                                               & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                             | ((0x5003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x6003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x23U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x1023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x2023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x73U 
                                                                                == vlSelfRef.__PVT__fetch_instr_w) 
                                                                                | ((IData)(u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_60) 
                                                                                | ((0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x3073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x5073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((IData)(u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_65) 
                                                                                | ((0x10500073U 
                                                                                == 
                                                                                (0xffff8fffU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0xfU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x100fU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x12000073U 
                                                                                == 
                                                                                (0xfe007fffU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x2000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x2001033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x2002033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x2003033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x2004033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | ((0x2005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                                | (IData)(u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_61)))))))))))))))))))))))))))))))))) 
                                              & (IData)(vlSelfRef.__PVT__fetch_dec_valid_w));
    vlSelfRef.__PVT__fetch_instr_csr_w = ((0x73U == vlSelfRef.__PVT__fetch_instr_w) 
                                          | ((IData)(u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_60) 
                                             | ((0x1073U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelfRef.__PVT__fetch_instr_w)) 
                                                | ((0x2073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelfRef.__PVT__fetch_instr_w)) 
                                                   | ((0x3073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.__PVT__fetch_instr_w)) 
                                                      | ((0x5073U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelfRef.__PVT__fetch_instr_w)) 
                                                         | ((0x6073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.__PVT__fetch_instr_w)) 
                                                            | ((0x7073U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelfRef.__PVT__fetch_instr_w)) 
                                                               | ((0x10500073U 
                                                                   == 
                                                                   (0xffff8fffU 
                                                                    & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                  | ((0xfU 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                     | ((0x100fU 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                        | ((0x12000073U 
                                                                            == 
                                                                            (0xfe007fffU 
                                                                             & vlSelfRef.__PVT__fetch_instr_w)) 
                                                                           | ((IData)(vlSelfRef.__PVT__fetch_instr_invalid_w) 
                                                                              | (IData)(vlSelfRef.u_decode__DOT____Vcellinp__genblk1__DOT__u_dec__fetch_fault_i))))))))))))));
}

VL_INLINE_OPT void Vriscv_top_tb_riscv_core__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__u_core__1(Vriscv_top_tb_riscv_core__M0_MBffff* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_tb_riscv_core__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__u_core__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r = 0U;
    vlSelfRef.u_mul__DOT____VdfgRegularize_h4f118b46_0_3 
        = (((QData)((IData)((vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r 
                             >> 0x1fU))) << 0x20U) 
           | (QData)((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r)));
    vlSelfRef.__PVT__u_exec__DOT__branch_r = 0U;
    vlSelfRef.__PVT__u_exec__DOT__branch_taken_r = 0U;
    vlSelfRef.__PVT__u_exec__DOT__branch_call_r = 0U;
    vlSelfRef.__PVT__u_exec__DOT__branch_ret_r = 0U;
    vlSelfRef.__PVT__u_exec__DOT__branch_jmp_r = 0U;
    vlSelfRef.__PVT__u_exec__DOT__branch_target_r = 
        (vlSelfRef.__PVT__fetch_pc_w + (((- (IData)(
                                                    (vlSelfRef.__PVT__fetch_instr_w 
                                                     >> 0x1fU))) 
                                         << 0xdU) | 
                                        (((0x1000U 
                                           & (vlSelfRef.__PVT__fetch_instr_w 
                                              >> 0x13U)) 
                                          | (0x800U 
                                             & (vlSelfRef.__PVT__fetch_instr_w 
                                                << 4U))) 
                                         | ((0x7e0U 
                                             & (vlSelfRef.__PVT__fetch_instr_w 
                                                >> 0x14U)) 
                                            | (0x1eU 
                                               & (vlSelfRef.__PVT__fetch_instr_w 
                                                  >> 7U))))));
    if ((0x33U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r;
    } else if ((0x7033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r;
    } else if ((0x6033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r;
    } else if ((0x1033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r;
    } else if ((0x40005033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r;
    } else if ((0x5033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r;
    } else if ((0x40000033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r;
    } else if ((0x4033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r;
    } else if ((0x2033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r;
    } else if ((0x3033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r;
    } else if ((0x13U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec__DOT__imm12_r;
    } else if ((0x7013U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec__DOT__imm12_r;
    } else if ((0x2013U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec__DOT__imm12_r;
    } else if ((0x3013U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec__DOT__imm12_r;
    } else if ((0x6013U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec__DOT__imm12_r;
    } else if ((0x4013U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec__DOT__imm12_r;
    } else if ((0x1013U == (0xfc00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r 
            = (0x1fU & (vlSelfRef.__PVT__fetch_instr_w 
                        >> 0x14U));
    } else if ((0x5013U == (0xfc00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r 
            = (0x1fU & (vlSelfRef.__PVT__fetch_instr_w 
                        >> 0x14U));
    } else if ((0x40005013U == (0xfc00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r 
            = (0x1fU & (vlSelfRef.__PVT__fetch_instr_w 
                        >> 0x14U));
    } else if ((0x37U != (0x7fU & vlSelfRef.__PVT__fetch_instr_w))) {
        if ((0x17U == (0x7fU & vlSelfRef.__PVT__fetch_instr_w))) {
            vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r 
                = (0xfffff000U & vlSelfRef.__PVT__fetch_instr_w);
        } else if (((0x6fU == (0x7fU & vlSelfRef.__PVT__fetch_instr_w)) 
                    | (0x67U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w)))) {
            vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r = 4U;
        }
    }
    if ((0x6fU == (0x7fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec__DOT__branch_taken_r = 1U;
        vlSelfRef.__PVT__u_exec__DOT__branch_target_r 
            = (vlSelfRef.__PVT__fetch_pc_w + (((- (IData)(
                                                          (vlSelfRef.__PVT__fetch_instr_w 
                                                           >> 0x1fU))) 
                                               << 0x14U) 
                                              | (((0xff000U 
                                                   & vlSelfRef.__PVT__fetch_instr_w) 
                                                  | (0x800U 
                                                     & (vlSelfRef.__PVT__fetch_instr_w 
                                                        >> 9U))) 
                                                 | ((0x7e0U 
                                                     & (vlSelfRef.__PVT__fetch_instr_w 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSelfRef.__PVT__fetch_instr_w 
                                                          >> 0x14U))))));
        vlSelfRef.__PVT__u_exec__DOT__branch_call_r 
            = (1U == (0x1fU & (vlSelfRef.__PVT__fetch_instr_w 
                               >> 7U)));
        vlSelfRef.__PVT__u_exec__DOT__branch_jmp_r = 1U;
    } else if ((0x67U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__branch_ret_r 
            = (IData)(((0x8000U == (0xf8000U & vlSelfRef.__PVT__fetch_instr_w)) 
                       & (0U == (0xfffU & vlSelfRef.__PVT__u_exec__DOT__imm12_r))));
        vlSelfRef.__PVT__u_exec__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec__DOT__branch_taken_r = 1U;
        vlSelfRef.__PVT__u_exec__DOT__branch_target_r 
            = (vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r 
               + vlSelfRef.__PVT__u_exec__DOT__imm12_r);
        vlSelfRef.__PVT__u_exec__DOT__branch_call_r 
            = ((~ (IData)(vlSelfRef.__PVT__u_exec__DOT__branch_ret_r)) 
               & (0x80U == (0xf80U & vlSelfRef.__PVT__fetch_instr_w)));
        vlSelfRef.__PVT__u_exec__DOT__branch_target_r 
            = (0xfffffffeU & vlSelfRef.__PVT__u_exec__DOT__branch_target_r);
        vlSelfRef.__PVT__u_exec__DOT__branch_jmp_r 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__u_exec__DOT__branch_call_r) 
                        | (IData)(vlSelfRef.__PVT__u_exec__DOT__branch_ret_r))));
    } else if ((0x63U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec__DOT__branch_taken_r 
            = (vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r 
               == vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r);
    } else if ((0x1063U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec__DOT__branch_taken_r 
            = (vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r 
               != vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r);
    } else if ((0x4063U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__branch_r = 1U;
        vlSelfRef.__Vfunc_u_exec__DOT__less_than_signed__0__y 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r;
        vlSelfRef.__Vfunc_u_exec__DOT__less_than_signed__0__x 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r;
        vlSelfRef.__PVT__u_exec__DOT__less_than_signed__Vstatic__v 
            = (vlSelfRef.__Vfunc_u_exec__DOT__less_than_signed__0__x 
               - vlSelfRef.__Vfunc_u_exec__DOT__less_than_signed__0__y);
        vlSelfRef.__Vfunc_u_exec__DOT__less_than_signed__0__Vfuncout 
            = (1U & (((vlSelfRef.__Vfunc_u_exec__DOT__less_than_signed__0__x 
                       >> 0x1fU) != (vlSelfRef.__Vfunc_u_exec__DOT__less_than_signed__0__y 
                                     >> 0x1fU)) ? (vlSelfRef.__Vfunc_u_exec__DOT__less_than_signed__0__x 
                                                   >> 0x1fU)
                      : (vlSelfRef.__PVT__u_exec__DOT__less_than_signed__Vstatic__v 
                         >> 0x1fU)));
        vlSelfRef.__PVT__u_exec__DOT__branch_taken_r 
            = vlSelfRef.__Vfunc_u_exec__DOT__less_than_signed__0__Vfuncout;
    } else if ((0x5063U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec__DOT__branch_taken_r 
            = (([&]() {
                    vlSelfRef.__Vfunc_u_exec__DOT__greater_than_signed__1__y 
                        = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r;
                    vlSelfRef.__Vfunc_u_exec__DOT__greater_than_signed__1__x 
                        = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r;
                    vlSelfRef.__PVT__u_exec__DOT__greater_than_signed__Vstatic__v 
                        = (vlSelfRef.__Vfunc_u_exec__DOT__greater_than_signed__1__y 
                           - vlSelfRef.__Vfunc_u_exec__DOT__greater_than_signed__1__x);
                    vlSelfRef.__Vfunc_u_exec__DOT__greater_than_signed__1__Vfuncout 
                        = (1U & (((vlSelfRef.__Vfunc_u_exec__DOT__greater_than_signed__1__x 
                                   >> 0x1fU) != (vlSelfRef.__Vfunc_u_exec__DOT__greater_than_signed__1__y 
                                                 >> 0x1fU))
                                  ? (vlSelfRef.__Vfunc_u_exec__DOT__greater_than_signed__1__y 
                                     >> 0x1fU) : (vlSelfRef.__PVT__u_exec__DOT__greater_than_signed__Vstatic__v 
                                                  >> 0x1fU)));
                }(), (IData)(vlSelfRef.__Vfunc_u_exec__DOT__greater_than_signed__1__Vfuncout)) 
               | (vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r 
                  == vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r));
    } else if ((0x6063U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec__DOT__branch_taken_r 
            = (vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r 
               < vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r);
    } else if ((0x7063U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec__DOT__branch_taken_r 
            = (vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r 
               >= vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r);
    }
    vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r = 0U;
    if ((0x33U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x7033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x6033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x1033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x40005033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x5033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x40000033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x4033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x2033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x3033U == (0xfe00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x13U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x7013U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x2013U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x3013U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x6013U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x4013U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x1013U == (0xfc00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x5013U == (0xfc00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x40005013U == (0xfc00707fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r;
    } else if ((0x37U == (0x7fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r 
            = (0xfffff000U & vlSelfRef.__PVT__fetch_instr_w);
    } else if ((0x17U == (0x7fU & vlSelfRef.__PVT__fetch_instr_w))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r 
            = vlSelfRef.__PVT__fetch_pc_w;
    } else if (((0x6fU == (0x7fU & vlSelfRef.__PVT__fetch_instr_w)) 
                | (0x67U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w)))) {
        vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r 
            = vlSelfRef.__PVT__fetch_pc_w;
    }
    vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__sub_res_w 
        = (vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r 
           - vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r);
    vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_right_fill_r = 0U;
    vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_right_1_r = 0U;
    vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_right_2_r = 0U;
    vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_right_4_r = 0U;
    vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_right_8_r = 0U;
    vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_left_1_r = 0U;
    vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_left_2_r = 0U;
    vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_left_4_r = 0U;
    vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_left_8_r = 0U;
    if ((8U & (IData)(vlSelfRef.__PVT__u_exec__DOT__alu_func_r))) {
        vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__result_r 
            = ((4U & (IData)(vlSelfRef.__PVT__u_exec__DOT__alu_func_r))
                ? vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r
                : ((2U & (IData)(vlSelfRef.__PVT__u_exec__DOT__alu_func_r))
                    ? ((1U & (IData)(vlSelfRef.__PVT__u_exec__DOT__alu_func_r))
                        ? (((vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r 
                             >> 0x1fU) != (vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r 
                                           >> 0x1fU))
                            ? ((vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r 
                                >> 0x1fU) ? 1U : 0U)
                            : ((vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__sub_res_w 
                                >> 0x1fU) ? 1U : 0U))
                        : ((vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r 
                            < vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r)
                            ? 1U : 0U)) : ((1U & (IData)(vlSelfRef.__PVT__u_exec__DOT__alu_func_r))
                                            ? (vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r 
                                               ^ vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r)
                                            : (vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r 
                                               | vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r))));
    } else if ((4U & (IData)(vlSelfRef.__PVT__u_exec__DOT__alu_func_r))) {
        vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__result_r 
            = ((2U & (IData)(vlSelfRef.__PVT__u_exec__DOT__alu_func_r))
                ? ((1U & (IData)(vlSelfRef.__PVT__u_exec__DOT__alu_func_r))
                    ? (vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r 
                       & vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r)
                    : vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__sub_res_w)
                : ((1U & (IData)(vlSelfRef.__PVT__u_exec__DOT__alu_func_r))
                    ? vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r
                    : (vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r 
                       + vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r)));
    } else if ((2U & (IData)(vlSelfRef.__PVT__u_exec__DOT__alu_func_r))) {
        vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_right_fill_r 
            = (((vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r 
                 >> 0x1fU) & (3U == (IData)(vlSelfRef.__PVT__u_exec__DOT__alu_func_r)))
                ? 0xffffU : 0U);
        vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_right_1_r 
            = ((1U & vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r)
                ? ((0x80000000U & ((IData)(vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_right_fill_r) 
                                   << 0x10U)) | (vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r 
                                                 >> 1U))
                : vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r);
        vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_right_2_r 
            = ((2U & vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r)
                ? ((0xc0000000U & ((IData)(vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_right_fill_r) 
                                   << 0x10U)) | (vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_right_1_r 
                                                 >> 2U))
                : vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_right_1_r);
        vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_right_4_r 
            = ((4U & vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r)
                ? ((0xf0000000U & ((IData)(vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_right_fill_r) 
                                   << 0x10U)) | (vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_right_2_r 
                                                 >> 4U))
                : vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_right_2_r);
        vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_right_8_r 
            = ((8U & vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r)
                ? ((0xff000000U & ((IData)(vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_right_fill_r) 
                                   << 0x10U)) | (vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_right_4_r 
                                                 >> 8U))
                : vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_right_4_r);
        vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__result_r 
            = ((0x10U & vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r)
                ? (((IData)(vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_right_fill_r) 
                    << 0x10U) | (vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_right_8_r 
                                 >> 0x10U)) : vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_right_8_r);
    } else if ((1U & (IData)(vlSelfRef.__PVT__u_exec__DOT__alu_func_r))) {
        vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_left_1_r 
            = ((1U & vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r)
                ? (vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r 
                   << 1U) : vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r);
        vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_left_2_r 
            = ((2U & vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r)
                ? (vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_left_1_r 
                   << 2U) : vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_left_1_r);
        vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_left_4_r 
            = ((4U & vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r)
                ? (vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_left_2_r 
                   << 4U) : vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_left_2_r);
        vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_left_8_r 
            = ((8U & vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r)
                ? (vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_left_4_r 
                   << 8U) : vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_left_4_r);
        vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__result_r 
            = ((0x10U & vlSelfRef.__PVT__u_exec__DOT__alu_input_b_r)
                ? (vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_left_8_r 
                   << 0x10U) : vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__shift_left_8_r);
    } else {
        vlSelfRef.__PVT__u_exec__DOT__u_alu__DOT__result_r 
            = vlSelfRef.__PVT__u_exec__DOT__alu_input_a_r;
    }
}

VL_INLINE_OPT void Vriscv_top_tb_riscv_core__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__u_core__2(Vriscv_top_tb_riscv_core__M0_MBffff* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_tb_riscv_core__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__u_core__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_lsu__DOT__issue_lsu_e1_w = (
                                                   ((IData)(vlSelfRef.__PVT__mem_d_rd_o) 
                                                    | ((0U 
                                                        != (IData)(vlSelfRef.__PVT__mem_d_wr_o)) 
                                                       | ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_writeback_q) 
                                                          | ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_flush_q) 
                                                             | (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_invalidate_q))))) 
                                                   & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__mem_accept_o));
    vlSelfRef.u_lsu__DOT____Vcellinp__u_lsu_request__push_i 
        = ((IData)(vlSelfRef.__PVT__u_lsu__DOT__issue_lsu_e1_w) 
           | ((~ (IData)(vlSelfRef.__PVT__u_lsu__DOT__delay_lsu_e2_w)) 
              & (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_e1_q)));
}

VL_INLINE_OPT void Vriscv_top_tb_riscv_core__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__u_core__3(Vriscv_top_tb_riscv_core__M0_MBffff* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_tb_riscv_core__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__u_core__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_div__DOT__div_start_w = ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__opcode_issue_r) 
                                                & ((IData)(vlSelfRef.__PVT__u_div__DOT__div_operation_w) 
                                                   | ((0x2006033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelfRef.__PVT__fetch_instr_w)) 
                                                      | (0x2007033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelfRef.__PVT__fetch_instr_w)))));
    vlSelfRef.__PVT__branch_d_exec_request_w = ((IData)(vlSelfRef.__PVT__u_exec__DOT__branch_r) 
                                                & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__opcode_issue_r) 
                                                   & (IData)(vlSelfRef.__PVT__u_exec__DOT__branch_taken_r)));
    vlSelfRef.__PVT__mem_i_rd_o = ((IData)(vlSelfRef.__PVT__u_fetch__DOT__active_q) 
                                   & ((~ (IData)(vlSelfRef.__PVT__u_fetch__DOT__icache_busy_w)) 
                                      & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__fetch_accept_o)));
    vlSelfRef.__PVT__u_fetch__DOT__stall_w = (1U & 
                                              ((~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__fetch_accept_o)) 
                                               | ((~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__req_accept_o)) 
                                                  | (IData)(vlSelfRef.__PVT__u_fetch__DOT__icache_busy_w))));
    vlSelfRef.__PVT__u_lsu__DOT__mem_data_r = 0U;
    vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_r = 0U;
    vlSelfRef.__PVT__u_lsu__DOT__mem_wr_r = 0U;
    vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r = (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                                                & (0x1073U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelfRef.__PVT__fetch_instr_w)))
                                                ? vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r
                                                : (
                                                   ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                                                    & (IData)(vlSelfRef.__PVT__u_lsu__DOT__load_inst_w))
                                                    ? 
                                                   (vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r 
                                                    + 
                                                    (((- (IData)(
                                                                 (vlSelfRef.__PVT__fetch_instr_w 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelfRef.__PVT__fetch_instr_w 
                                                        >> 0x14U)))
                                                    : 
                                                   (vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r 
                                                    + 
                                                    (((- (IData)(
                                                                 (vlSelfRef.__PVT__fetch_instr_w 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0xfe0U 
                                                         & (vlSelfRef.__PVT__fetch_instr_w 
                                                            >> 0x14U)) 
                                                        | (0x1fU 
                                                           & (vlSelfRef.__PVT__fetch_instr_w 
                                                              >> 7U)))))));
    if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
         & ((0x2023U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w)) 
            | ((0x2003U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w)) 
               | (0x6003U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w)))))) {
        vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_r 
            = (0U != (3U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r));
    } else if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                & ((0x1023U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w)) 
                   | (IData)(vlSelfRef.__PVT__u_lsu__DOT__req_lh_w)))) {
        vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_r 
            = (1U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r);
    }
    vlSelfRef.__PVT__u_lsu__DOT__mem_rd_r = (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                                              & (IData)(vlSelfRef.__PVT__u_lsu__DOT__load_inst_w)) 
                                             & (~ (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_r)));
    if ((((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
          & (0x2023U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w))) 
         & (~ (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_r)))) {
        vlSelfRef.__PVT__u_lsu__DOT__mem_data_r = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r;
        vlSelfRef.__PVT__u_lsu__DOT__mem_wr_r = 0xfU;
    } else if ((((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                 & (0x1023U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w))) 
                & (~ (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_r)))) {
        if ((2U == (3U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r))) {
            vlSelfRef.__PVT__u_lsu__DOT__mem_data_r 
                = (vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r 
                   << 0x10U);
            vlSelfRef.__PVT__u_lsu__DOT__mem_wr_r = 0xcU;
        } else {
            vlSelfRef.__PVT__u_lsu__DOT__mem_data_r 
                = (0xffffU & vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r);
            vlSelfRef.__PVT__u_lsu__DOT__mem_wr_r = 3U;
        }
    } else if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                & (0x23U == (0x707fU & vlSelfRef.__PVT__fetch_instr_w)))) {
        if ((2U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r)) {
            if ((1U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r)) {
                vlSelfRef.__PVT__u_lsu__DOT__mem_data_r 
                    = (vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r 
                       << 0x18U);
                vlSelfRef.__PVT__u_lsu__DOT__mem_wr_r = 8U;
            } else {
                vlSelfRef.__PVT__u_lsu__DOT__mem_data_r 
                    = (0xff0000U & (vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r 
                                    << 0x10U));
                vlSelfRef.__PVT__u_lsu__DOT__mem_wr_r = 4U;
            }
        } else if ((1U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r)) {
            vlSelfRef.__PVT__u_lsu__DOT__mem_data_r 
                = (0xff00U & (vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r 
                              << 8U));
            vlSelfRef.__PVT__u_lsu__DOT__mem_wr_r = 2U;
        } else {
            vlSelfRef.__PVT__u_lsu__DOT__mem_data_r 
                = (0xffU & vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r);
            vlSelfRef.__PVT__u_lsu__DOT__mem_wr_r = 1U;
        }
    } else {
        vlSelfRef.__PVT__u_lsu__DOT__mem_wr_r = 0U;
    }
}
