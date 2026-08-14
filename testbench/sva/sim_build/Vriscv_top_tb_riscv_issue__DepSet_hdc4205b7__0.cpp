// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top_tb.h for the primary calling header

#include "Vriscv_top_tb__pch.h"
#include "Vriscv_top_tb__Syms.h"
#include "Vriscv_top_tb_riscv_issue.h"

VL_INLINE_OPT void Vriscv_top_tb_riscv_issue___ico_sequent__TOP__riscv_top_tb__dut__u_core__u_issue__0(Vriscv_top_tb_riscv_issue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_top_tb_riscv_issue___ico_sequent__TOP__riscv_top_tb__dut__u_core__u_issue__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__exception_e2_r 
        = (((IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__valid_e2_q) 
            & ((IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__load_store_e2_w) 
               & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__writeback_mem_valid_w)))
            ? (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_unaligned_e2_q) 
                & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__resp_load_w))
                ? 0x14U : (((~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__resp_load_w)) 
                            & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_unaligned_e2_q))
                            ? 0x16U : (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__mem_error_o) 
                                        & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__resp_load_w))
                                        ? 0x15U : (
                                                   ((~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__resp_load_w)) 
                                                    & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__mem_error_o))
                                                    ? 0x17U
                                                    : 0U))))
            : (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__exception_e2_q));
    vlSelfRef.__PVT__stall_w = (1U & (((~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_div__DOT__valid_q)) 
                                       & ((IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                                          >> 4U)) | 
                                      ((~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__writeback_mem_valid_w)) 
                                       & (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__load_store_e2_w))));
    vlSelfRef.__PVT__pipe_squash_e1_e2_w = ((0U != (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__exception_e2_r)) 
                                            | (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__squash_e1_e2_q));
    vlSelfRef.__PVT__pipe_valid_wb_w = ((~ (IData)(vlSelfRef.__PVT__stall_w)) 
                                        & (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__valid_wb_q));
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__valid_e2_w = 
        ((~ (IData)(vlSelfRef.__PVT__stall_w)) & (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__valid_e2_q));
    vlSelfRef.__PVT__opcode_valid_w = ((~ ((IData)(vlSelfRef.__PVT__pipe_squash_e1_e2_w) 
                                           | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__branch_q))) 
                                       & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_dec_valid_w));
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x2dU;
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_pc = 0U;
    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x2dU;
    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_pc = 0U;
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[0U] = 0x2dU;
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[1U] = 0U;
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[2U] = 0U;
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] = 0x2dU;
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] = 0U;
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] = 0U;
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[0U] = 0x2dU;
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[1U] = 0U;
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[2U] = 0U;
    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra[0U] = 0x2dU;
    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra[1U] = 0U;
    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra[2U] = 0U;
    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[0U] = 0x2dU;
    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[1U] = 0U;
    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[2U] = 0U;
    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rd[0U] = 0x2dU;
    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rd[1U] = 0U;
    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rd[2U] = 0U;
    if (vlSelfRef.__PVT__pipe_valid_wb_w) {
        if (((((((((0x7013U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                   | (0x13U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                  | (0x2013U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                 | (0x3013U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                | (0x6013U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
               | (0x4013U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
              | (0x1013U == (0xfc00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
             | (0x5013U == (0xfc00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)))) {
            if ((0x7013U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x616e6469U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x616e6469U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x13U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x61646469U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x61646469U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2013U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x736c7469U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x736c7469U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x3013U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6c746975U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x73U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x6c746975U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0x73U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6013U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6f7269U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x6f7269U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x4013U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x786f7269U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x786f7269U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x1013U == (0xfc00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x736c6c69U;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x736c6c69U;
                } else {
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x73726c69U;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x73726c69U;
                }
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x40005013U == (0xfc00707fU 
                                           & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                          | (0x37U == (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                         | (0x17U == (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                        | (0x33U == (0xfe00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                       | (0x40000033U == (0xfe00707fU 
                                          & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                      | (0x2033U == (0xfe00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                     | (0x3033U == (0xfe00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                    | (0x4033U == (0xfe00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)))) {
            if ((0x40005013U == (0xfc00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x73726169U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x73726169U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x37U == (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6c7569U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x6c7569U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x17U == (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x75697063U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x61U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x75697063U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0x61U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x33U == (0xfe00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x616464U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x616464U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x40000033U == (0xfe00707fU 
                                        & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x737562U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x737562U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2033U == (0xfe00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x736c74U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x736c74U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x3033U == (0xfe00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x736c7475U;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x736c7475U;
                } else {
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x786f72U;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x786f72U;
                }
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x6033U == (0xfe00707fU 
                                       & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                          | (0x7033U == (0xfe00707fU 
                                         & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                         | (0x1033U == (0xfe00707fU 
                                        & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                        | (0x5033U == (0xfe00707fU 
                                       & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                       | (0x40005033U == (0xfe00707fU 
                                          & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                      | (0x6fU == (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                     | (0x67U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                    | (0x63U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)))) {
            if ((0x6033U == (0xfe00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6f72U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x6f72U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x7033U == (0xfe00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x616e64U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x616e64U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x1033U == (0xfe00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x736c6cU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x736c6cU;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5033U == (0xfe00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x73726cU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x73726cU;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x40005033U == (0xfe00707fU 
                                        & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x737261U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x737261U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6fU == (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6a616cU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x6a616cU;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x67U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6a616c72U;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x6a616c72U;
                } else {
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x626571U;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x626571U;
                }
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x1063U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                          | (0x4063U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                         | (0x5063U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                        | (0x6063U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                       | (0x7063U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                      | (3U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                     | (0x1003U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                    | (0x2003U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)))) {
            if ((0x1063U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x626e65U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x626e65U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x4063U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x626c74U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x626c74U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5063U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x626765U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x626765U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6063U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x626c7475U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x626c7475U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x7063U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x62676575U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x62676575U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((3U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6c62U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x6c62U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x1003U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6c68U;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x6c68U;
                } else {
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6c77U;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x6c77U;
                }
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x4003U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                          | (0x5003U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                         | (0x6003U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                        | (0x23U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                       | (0x1023U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                      | (0x2023U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                     | (0x73U == vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                    | (0x100073U == vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
            if ((0x4003U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6c6275U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x6c6275U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5003U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6c6875U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x6c6875U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6003U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6c7775U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x6c7775U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x23U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x7362U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x7362U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x1023U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x7368U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x7368U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2023U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x7377U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x7377U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x73U == vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) {
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x63616c6cU;
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x65U;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x63616c6cU;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0x65U;
                } else {
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x7265616bU;
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x6562U;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x7265616bU;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0x6562U;
                }
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x200073U == (0xcfffffffU 
                                         & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                          | (0x1073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                         | (0x2073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                        | (0x3073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                       | (0x5073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                      | (0x6073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                     | (0x7073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                    | (0x2000033U == (0xfe00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)))) {
            if ((0x200073U == (0xcfffffffU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x65726574U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x65726574U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x1073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x73727277U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x73727277U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x73727273U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x73727273U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x3073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x73727263U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x73727263U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x72727769U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x6373U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x72727769U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0x6373U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x72727369U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x6373U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x72727369U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0x6373U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x7073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x72726369U;
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x6373U;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x72726369U;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0x6373U;
                } else {
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6d756cU;
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x6d756cU;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                }
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x2001033U == (0xfe00707fU 
                                          & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                          | (0x2002033U == (0xfe00707fU 
                                            & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                         | (0x2003033U == (0xfe00707fU 
                                           & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                        | (0x2004033U == (0xfe00707fU 
                                          & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                       | (0x2005033U == (0xfe00707fU 
                                         & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                      | (0x2006033U == (0xfe00707fU 
                                        & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                     | (0x2007033U == (0xfe00707fU 
                                       & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                    | (0x100fU == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)))) {
            if ((0x2001033U == (0xfe00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6d756c68U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x6d756c68U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2002033U == (0xfe00707fU 
                                       & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6c687375U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x6d75U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x6c687375U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0x6d75U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2003033U == (0xfe00707fU 
                                       & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x756c6875U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x6dU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x756c6875U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0x6dU;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2004033U == (0xfe00707fU 
                                       & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x646976U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x646976U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2005033U == (0xfe00707fU 
                                       & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x64697675U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x64697675U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2006033U == (0xfe00707fU 
                                       & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x72656dU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x72656dU;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x2007033U == (0xfe00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x72656d75U;
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x72656d75U;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                } else {
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x63652e69U;
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x66656eU;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x63652e69U;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0x66656eU;
                }
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            }
        }
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_pc 
            = vlSelfRef.__PVT__u_pipe_ctrl__DOT__pc_wb_q;
        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_pc 
            = vlSelfRef.__PVT__u_pipe_ctrl__DOT__pc_wb_q;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[0U] 
            = vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h80d7e585__0[0U];
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[1U] 
            = vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h80d7e585__0[1U];
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[2U] 
            = vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h80d7e585__0[2U];
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] 
            = vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_hef8b1dcb__0[0U];
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] 
            = vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_hef8b1dcb__0[1U];
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] 
            = vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_hef8b1dcb__0[2U];
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[0U] 
            = vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h5dd7f615__0[0U];
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[1U] 
            = vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h5dd7f615__0[1U];
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[2U] 
            = vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h5dd7f615__0[2U];
        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra[0U] 
            = vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_h80d7e585__0[0U];
        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra[1U] 
            = vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_h80d7e585__0[1U];
        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra[2U] 
            = vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_h80d7e585__0[2U];
        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[0U] 
            = vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_hef8b1dcb__0[0U];
        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[1U] 
            = vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_hef8b1dcb__0[1U];
        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[2U] 
            = vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_hef8b1dcb__0[2U];
        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rd[0U] 
            = vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_h5dd7f615__0[0U];
        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rd[1U] 
            = vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_h5dd7f615__0[1U];
        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rd[2U] 
            = vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_h5dd7f615__0[2U];
        if ((((((((((((((((((((0x13U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                              || (0x7013U == (0x707fU 
                                              & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                             || (0x2013U == (0x707fU 
                                             & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                            || (0x3013U == (0x707fU 
                                            & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                           || (0x6013U == (0x707fU 
                                           & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                          || (0x4013U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                         || (0x1073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                        || (0x2073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                       || (0x3073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                      || (0x5073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                     || (0x6073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                    || (0x7073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                   | (((0x1013U == (0xfc00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                       || (0x5013U == (0xfc00707fU 
                                       & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                      || (0x40005013U == (0xfc00707fU 
                                          & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)))) 
                  | (0x37U == (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                 | (0x17U == (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                | (0x6fU == (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
               | (0x67U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
              | ((((((3U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                     || (0x1003U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                    || (0x2003U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                   || (0x4003U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                  || (0x5003U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                 || (0x6003U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)))) 
             | (((0x23U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                 || (0x1023U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                || (0x2023U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))))) {
            if ((1U & (~ ((((((((((((0x13U == (0x707fU 
                                               & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                                    || (0x7013U == 
                                        (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                                   || (0x2013U == (0x707fU 
                                                   & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                                  || (0x3013U == (0x707fU 
                                                  & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                                 || (0x6013U == (0x707fU 
                                                 & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                                || (0x4013U == (0x707fU 
                                                & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                               || (0x1073U == (0x707fU 
                                               & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                              || (0x2073U == (0x707fU 
                                              & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                             || (0x3073U == (0x707fU 
                                             & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                            || (0x5073U == (0x707fU 
                                            & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                           || (0x6073U == (0x707fU 
                                           & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                          || (0x7073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)))))) {
                if ((1U & (~ (((0x1013U == (0xfc00707fU 
                                            & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                               || (0x5013U == (0xfc00707fU 
                                               & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                              || (0x40005013U == (0xfc00707fU 
                                                  & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)))))) {
                    if ((0x37U != (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                        if ((0x17U != (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                            if ((0x6fU == (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                                if ((1U == (0x1fU & 
                                            (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                             >> 7U)))) {
                                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x63616c6cU;
                                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x63616c6cU;
                                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
                                }
                            } else if ((0x67U == (0x707fU 
                                                  & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                                if ((IData)(((0x8000U 
                                              == (0xf8000U 
                                                  & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                                             & (0U 
                                                == 
                                                (((- (IData)(
                                                             (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                                    >> 0x14U)))))) {
                                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x726574U;
                                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x726574U;
                                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
                                } else if ((1U == (0x1fU 
                                                   & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                                      >> 7U)))) {
                                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x20285229U;
                                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x63616c6cU;
                                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x20285229U;
                                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0x63616c6cU;
                                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
                                }
                            }
                            if ((0x6fU != (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                                if ((0x67U != (0x707fU 
                                               & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                                    if ((1U & (~ ((
                                                   ((((3U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                                                      || (0x1003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                                                     || (0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                                                    || (0x4003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                                                   || (0x5003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                                                  || (0x6003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)))))) {
                                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[0U] = 0x2dU;
                                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[1U] = 0U;
                                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[2U] = 0U;
                                        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rd[0U] = 0x2dU;
                                        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rd[1U] = 0U;
                                        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rd[2U] = 0U;
                                    }
                                }
                            }
                        }
                    }
                    if ((0x37U == (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[2U] = 0U;
                        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra[2U] = 0U;
                    } else if ((0x17U == (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[0U] = 0x7063U;
                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[2U] = 0U;
                        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra[0U] = 0x7063U;
                        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra[2U] = 0U;
                    } else if ((0x6fU == (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[2U] = 0U;
                        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra[2U] = 0U;
                    }
                }
            }
            if (((((((((((((0x13U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                           || (0x7013U == (0x707fU 
                                           & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                          || (0x2013U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                         || (0x3013U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                        || (0x6013U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                       || (0x4013U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                      || (0x1073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                     || (0x2073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                    || (0x3073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                   || (0x5073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                  || (0x6073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                 || (0x7073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                          >> 0x14U));
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                          >> 0x14U));
            } else if ((((0x1013U == (0xfc00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                         || (0x5013U == (0xfc00707fU 
                                         & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                        || (0x40005013U == (0xfc00707fU 
                                            & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm 
                    = (0x1fU & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                >> 0x14U));
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_imm 
                    = (0x1fU & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                >> 0x14U));
            } else if ((0x37U == (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm 
                    = (0xfffff000U & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q);
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_imm 
                    = (0xfffff000U & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q);
            } else if ((0x17U == (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm 
                    = (0xfffff000U & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q);
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_imm 
                    = (0xfffff000U & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q);
            } else if ((0x6fU == (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm 
                    = (vlSelfRef.__PVT__u_pipe_ctrl__DOT__pc_wb_q 
                       + (((- (IData)((vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                       >> 0x1fU))) 
                           << 0x14U) | (((0xff000U 
                                          & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q) 
                                         | (0x800U 
                                            & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                               >> 9U))) 
                                        | ((0x7e0U 
                                            & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                                 >> 0x14U))))));
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_imm 
                    = (vlSelfRef.__PVT__u_pipe_ctrl__DOT__pc_wb_q 
                       + (((- (IData)((vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                       >> 0x1fU))) 
                           << 0x14U) | (((0xff000U 
                                          & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q) 
                                         | (0x800U 
                                            & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                               >> 9U))) 
                                        | ((0x7e0U 
                                            & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                                 >> 0x14U))))));
            } else if ((0x67U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                          >> 0x14U));
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                          >> 0x14U));
            } else if (((((((3U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                            || (0x1003U == (0x707fU 
                                            & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                           || (0x2003U == (0x707fU 
                                           & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                          || (0x4003U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                         || (0x5003U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                        || (0x6003U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                          >> 0x14U));
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                          >> 0x14U));
            } else {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                                      >> 7U))));
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                                      >> 7U))));
            }
        }
    }
    vlSelfRef.__PVT__pipe_rd_wb_w = (0x1fU & ((- (IData)(
                                                         ((IData)(vlSelfRef.__PVT__pipe_valid_wb_w) 
                                                          & ((~ (IData)(vlSelfRef.__PVT__stall_w)) 
                                                             & ((IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_wb_q) 
                                                                >> 7U))))) 
                                              & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                                 >> 7U)));
    vlSelfRef.__PVT__pipe_rd_e2_w = (0x1fU & ((- (IData)(
                                                         ((IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__valid_e2_w) 
                                                          & ((~ (IData)(vlSelfRef.__PVT__stall_w)) 
                                                             & ((IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e2_q) 
                                                                >> 7U))))) 
                                              & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_e2_q 
                                                 >> 7U)));
}

VL_INLINE_OPT void Vriscv_top_tb_riscv_issue___ico_sequent__TOP__riscv_top_tb__dut__u_core__u_issue__1(Vriscv_top_tb_riscv_issue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_top_tb_riscv_issue___ico_sequent__TOP__riscv_top_tb__dut__u_core__u_issue__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__result_e2_r 
        = vlSelfRef.__PVT__u_pipe_ctrl__DOT__result_e2_q;
    if (((IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__valid_e2_w) 
         & (IData)((0U != (6U & (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e2_q)))))) {
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__result_e2_r 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__wb_result_r;
    } else if (((IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__valid_e2_w) 
                & ((IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e2_q) 
                   >> 5U))) {
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__result_e2_r 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_mul__DOT__result_e2_q;
    }
    vlSelfRef.__PVT__issue_rb_value_r = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__rb0_value_r;
    if (((IData)(vlSelfRef.__PVT__pipe_rd_wb_w) == 
         (0x1fU & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                   >> 0x14U)))) {
        vlSelfRef.__PVT__issue_rb_value_r = vlSelfRef.__PVT__u_pipe_ctrl__DOT__result_wb_q;
    }
    if (((IData)(vlSelfRef.__PVT__pipe_rd_e2_w) == 
         (0x1fU & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                   >> 0x14U)))) {
        vlSelfRef.__PVT__issue_rb_value_r = vlSelfRef.__PVT__u_pipe_ctrl__DOT__result_e2_r;
    }
    if (((IData)(vlSelfRef.__PVT__pipe_rd_e1_w) == 
         (0x1fU & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                   >> 0x14U)))) {
        vlSelfRef.__PVT__issue_rb_value_r = vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__result_q;
    }
    if ((0U == (0x1fU & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                         >> 0x14U)))) {
        vlSelfRef.__PVT__issue_rb_value_r = 0U;
    }
    vlSelfRef.__PVT__issue_ra_value_r = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__ra0_value_r;
    if (((IData)(vlSelfRef.__PVT__pipe_rd_wb_w) == 
         (0x1fU & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                   >> 0xfU)))) {
        vlSelfRef.__PVT__issue_ra_value_r = vlSelfRef.__PVT__u_pipe_ctrl__DOT__result_wb_q;
    }
    if (((IData)(vlSelfRef.__PVT__pipe_rd_e2_w) == 
         (0x1fU & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                   >> 0xfU)))) {
        vlSelfRef.__PVT__issue_ra_value_r = vlSelfRef.__PVT__u_pipe_ctrl__DOT__result_e2_r;
    }
    if (((IData)(vlSelfRef.__PVT__pipe_rd_e1_w) == 
         (0x1fU & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                   >> 0xfU)))) {
        vlSelfRef.__PVT__issue_ra_value_r = vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__result_q;
    }
    if ((0U == (0x1fU & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                         >> 0xfU)))) {
        vlSelfRef.__PVT__issue_ra_value_r = 0U;
    }
}

VL_INLINE_OPT void Vriscv_top_tb_riscv_issue___ico_sequent__TOP__riscv_top_tb__dut__u_core__u_issue__2(Vriscv_top_tb_riscv_issue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_top_tb_riscv_issue___ico_sequent__TOP__riscv_top_tb__dut__u_core__u_issue__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__opcode_issue_r = 0U;
    vlSelfRef.__PVT__opcode_accept_r = 0U;
    vlSelfRef.__PVT__scoreboard_r = 0U;
    if ((IData)((0U != (0x22U & (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q))))) {
        vlSelfRef.__PVT__scoreboard_r = (vlSelfRef.__PVT__scoreboard_r 
                                         | (0xffffffffULL 
                                            & ((IData)(1U) 
                                               << (IData)(vlSelfRef.__PVT__pipe_rd_e1_w))));
    }
    if (((IData)((0U != (6U & (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q)))) 
         & (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_mul_w) 
             | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_div_w)) 
            | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_csr_w)))) {
        vlSelfRef.__PVT__scoreboard_r = 0xffffffffU;
    }
    if ((1U & (~ ((((((~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__mem_accept_o)) 
                      & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_writeback_q) 
                         | ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_flush_q) 
                            | ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_invalidate_q) 
                               | ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__mem_d_rd_o) 
                                  | (0U != (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__mem_d_wr_o))))))) 
                     | ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__delay_lsu_e2_w) 
                        | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_unaligned_e1_q))) 
                    | (IData)(vlSelfRef.__PVT__stall_w)) 
                   | (IData)(vlSelfRef.__PVT__div_pending_q)) 
                  | (IData)(vlSelfRef.__PVT__csr_pending_q))))) {
        if (((IData)(vlSelfRef.__PVT__opcode_valid_w) 
             & (~ (((vlSelfRef.__PVT__scoreboard_r 
                     >> (0x1fU & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                  >> 0xfU))) | (vlSelfRef.__PVT__scoreboard_r 
                                                >> 
                                                (0x1fU 
                                                 & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                                    >> 0x14U)))) 
                   | (vlSelfRef.__PVT__scoreboard_r 
                      >> (0x1fU & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                   >> 7U))))))) {
            vlSelfRef.__PVT__opcode_issue_r = 1U;
            vlSelfRef.__PVT__opcode_accept_r = 1U;
            if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_rd_valid_w) 
                 & (0U != (0x1fU & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                    >> 7U))))) {
                vlSelfRef.__PVT__scoreboard_r = (vlSelfRef.__PVT__scoreboard_r 
                                                 | (0xffffffffULL 
                                                    & ((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                                           >> 7U)))));
            }
        }
    }
    vlSelfRef.__PVT__fetch_accept_o = (1U & ((~ (IData)(vlSelfRef.__PVT__opcode_valid_w)) 
                                             | ((~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__take_interrupt_q)) 
                                                & (IData)(vlSelfRef.__PVT__opcode_accept_r))));
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x2dU;
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_pc = 0U;
    if (vlSelfRef.__PVT__opcode_issue_r) {
        vlSelfRef.__PVT__csr_opcode_invalid_o = vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_invalid_w;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[0U] = 0x2dU;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[1U] = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[2U] = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[0U] = 0x2dU;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[1U] = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[2U] = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd[0U] = 0x2dU;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd[1U] = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd[2U] = 0U;
        if (((((((((0x7013U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                   | (0x13U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                  | (0x2013U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                 | (0x3013U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                | (0x6013U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
               | (0x4013U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
              | (0x1013U == (0xfc00707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
             | (0x5013U == (0xfc00707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)))) {
            if ((0x7013U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x616e6469U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x13U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x61646469U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2013U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x736c7469U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x3013U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6c746975U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x73U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6013U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6f7269U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x4013U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x786f7269U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] 
                    = ((0x1013U == (0xfc00707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))
                        ? 0x736c6c69U : 0x73726c69U);
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x40005013U == (0xfc00707fU 
                                           & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                          | (0x37U == (0x7fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                         | (0x17U == (0x7fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                        | (0x33U == (0xfe00707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                       | (0x40000033U == (0xfe00707fU 
                                          & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                      | (0x2033U == (0xfe00707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                     | (0x3033U == (0xfe00707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                    | (0x4033U == (0xfe00707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)))) {
            if ((0x40005013U == (0xfc00707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x73726169U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x37U == (0x7fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6c7569U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x17U == (0x7fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x75697063U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x61U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x33U == (0xfe00707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x616464U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x40000033U == (0xfe00707fU 
                                        & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x737562U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2033U == (0xfe00707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x736c74U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] 
                    = ((0x3033U == (0xfe00707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))
                        ? 0x736c7475U : 0x786f72U);
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x6033U == (0xfe00707fU 
                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                          | (0x7033U == (0xfe00707fU 
                                         & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                         | (0x1033U == (0xfe00707fU 
                                        & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                        | (0x5033U == (0xfe00707fU 
                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                       | (0x40005033U == (0xfe00707fU 
                                          & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                      | (0x6fU == (0x7fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                     | (0x67U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                    | (0x63U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)))) {
            if ((0x6033U == (0xfe00707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6f72U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x7033U == (0xfe00707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x616e64U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x1033U == (0xfe00707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x736c6cU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5033U == (0xfe00707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x73726cU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x40005033U == (0xfe00707fU 
                                        & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x737261U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6fU == (0x7fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6a616cU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] 
                    = ((0x67U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))
                        ? 0x6a616c72U : 0x626571U);
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x1063U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                          | (0x4063U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                         | (0x5063U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                        | (0x6063U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                       | (0x7063U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                      | (3U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                     | (0x1003U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                    | (0x2003U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)))) {
            if ((0x1063U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x626e65U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x4063U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x626c74U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5063U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x626765U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6063U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x626c7475U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x7063U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x62676575U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((3U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6c62U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] 
                    = ((0x1003U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))
                        ? 0x6c68U : 0x6c77U);
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x4003U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                          | (0x5003U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                         | (0x6003U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                        | (0x23U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                       | (0x1023U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                      | (0x2023U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                     | (0x73U == vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                    | (0x100073U == vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
            if ((0x4003U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6c6275U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5003U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6c6875U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6003U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6c7775U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x23U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x7362U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x1023U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x7368U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2023U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x7377U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x73U == vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) {
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x63616c6cU;
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x65U;
                } else {
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x7265616bU;
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x6562U;
                }
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x200073U == (0xcfffffffU 
                                         & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                          | (0x1073U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                         | (0x2073U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                        | (0x3073U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                       | (0x5073U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                      | (0x6073U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                     | (0x7073U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                    | (0x2000033U == (0xfe00707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)))) {
            if ((0x200073U == (0xcfffffffU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x65726574U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x1073U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x73727277U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2073U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x73727273U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x3073U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x73727263U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5073U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x72727769U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x6373U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6073U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x72727369U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x6373U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x7073U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x72726369U;
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x6373U;
                } else {
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6d756cU;
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                }
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x2001033U == (0xfe00707fU 
                                          & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                          | (0x2002033U == (0xfe00707fU 
                                            & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                         | (0x2003033U == (0xfe00707fU 
                                           & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                        | (0x2004033U == (0xfe00707fU 
                                          & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                       | (0x2005033U == (0xfe00707fU 
                                         & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                      | (0x2006033U == (0xfe00707fU 
                                        & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                     | (0x2007033U == (0xfe00707fU 
                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                    | (0x100fU == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)))) {
            if ((0x2001033U == (0xfe00707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6d756c68U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2002033U == (0xfe00707fU 
                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x6c687375U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x6d75U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2003033U == (0xfe00707fU 
                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x756c6875U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x6dU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2004033U == (0xfe00707fU 
                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x646976U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2005033U == (0xfe00707fU 
                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x64697675U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2006033U == (0xfe00707fU 
                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x72656dU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x2007033U == (0xfe00707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x72656d75U;
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                } else {
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x63652e69U;
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x66656eU;
                }
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
            }
        }
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_pc 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_pc_w;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[0U] 
            = vlSelfRef.u_pipe_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h80d7e585__0[0U];
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[1U] 
            = vlSelfRef.u_pipe_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h80d7e585__0[1U];
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[2U] 
            = vlSelfRef.u_pipe_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h80d7e585__0[2U];
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[0U] 
            = vlSelfRef.u_pipe_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_hef8b1dcb__0[0U];
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[1U] 
            = vlSelfRef.u_pipe_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_hef8b1dcb__0[1U];
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[2U] 
            = vlSelfRef.u_pipe_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_hef8b1dcb__0[2U];
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd[0U] 
            = vlSelfRef.u_pipe_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h5dd7f615__0[0U];
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd[1U] 
            = vlSelfRef.u_pipe_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h5dd7f615__0[1U];
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd[2U] 
            = vlSelfRef.u_pipe_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h5dd7f615__0[2U];
        if ((((((((((((((((((((0x13U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                              || (0x7013U == (0x707fU 
                                              & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                             || (0x2013U == (0x707fU 
                                             & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                            || (0x3013U == (0x707fU 
                                            & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                           || (0x6013U == (0x707fU 
                                           & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                          || (0x4013U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                         || (0x1073U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                        || (0x2073U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                       || (0x3073U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                      || (0x5073U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                     || (0x6073U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                    || (0x7073U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                   | (((0x1013U == (0xfc00707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                       || (0x5013U == (0xfc00707fU 
                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                      || (0x40005013U == (0xfc00707fU 
                                          & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)))) 
                  | (0x37U == (0x7fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                 | (0x17U == (0x7fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                | (0x6fU == (0x7fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
               | (0x67U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
              | ((((((3U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                     || (0x1003U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                    || (0x2003U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                   || (0x4003U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                  || (0x5003U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                 || (0x6003U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)))) 
             | (((0x23U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                 || (0x1023U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                || (0x2023U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))))) {
            if ((1U & (~ ((((((((((((0x13U == (0x707fU 
                                               & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                    || (0x7013U == 
                                        (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                                   || (0x2013U == (0x707fU 
                                                   & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                                  || (0x3013U == (0x707fU 
                                                  & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                                 || (0x6013U == (0x707fU 
                                                 & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                                || (0x4013U == (0x707fU 
                                                & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                               || (0x1073U == (0x707fU 
                                               & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                              || (0x2073U == (0x707fU 
                                              & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                             || (0x3073U == (0x707fU 
                                             & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                            || (0x5073U == (0x707fU 
                                            & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                           || (0x6073U == (0x707fU 
                                           & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                          || (0x7073U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)))))) {
                if ((1U & (~ (((0x1013U == (0xfc00707fU 
                                            & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                               || (0x5013U == (0xfc00707fU 
                                               & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                              || (0x40005013U == (0xfc00707fU 
                                                  & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)))))) {
                    if ((0x37U != (0x7fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                        if ((0x17U != (0x7fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                            if ((0x6fU == (0x7fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                                if ((1U == (0x1fU & 
                                            (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                             >> 7U)))) {
                                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x63616c6cU;
                                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
                                }
                            } else if ((0x67U == (0x707fU 
                                                  & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                                if ((IData)(((0x8000U 
                                              == (0xf8000U 
                                                  & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                             & (0U 
                                                == 
                                                (((- (IData)(
                                                             (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                                    >> 0x14U)))))) {
                                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x726574U;
                                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0U;
                                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
                                } else if ((1U == (0x1fU 
                                                   & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                                      >> 7U)))) {
                                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[0U] = 0x20285229U;
                                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[1U] = 0x63616c6cU;
                                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str[2U] = 0U;
                                }
                            }
                            if ((0x6fU != (0x7fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                                if ((0x67U != (0x707fU 
                                               & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                                    if ((1U & (~ ((
                                                   ((((3U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                                      || (0x1003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                                                     || (0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                                                    || (0x4003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                                                   || (0x5003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                                                  || (0x6003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)))))) {
                                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd[0U] = 0x2dU;
                                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd[1U] = 0U;
                                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd[2U] = 0U;
                                    }
                                }
                            }
                        }
                    }
                    if ((0x37U == (0x7fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[2U] = 0U;
                    } else if ((0x17U == (0x7fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[0U] = 0x7063U;
                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[2U] = 0U;
                    } else if ((0x6fU == (0x7fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[2U] = 0U;
                    }
                }
            }
            if (((((((((((((0x13U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                           || (0x7013U == (0x707fU 
                                           & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                          || (0x2013U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                         || (0x3013U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                        || (0x6013U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                       || (0x4013U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                      || (0x1073U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                     || (0x2073U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                    || (0x3073U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                   || (0x5073U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                  || (0x6073U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                 || (0x7073U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                          >> 0x14U));
            } else if ((((0x1013U == (0xfc00707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                         || (0x5013U == (0xfc00707fU 
                                         & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                        || (0x40005013U == (0xfc00707fU 
                                            & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_imm 
                    = (0x1fU & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                >> 0x14U));
            } else if ((0x37U == (0x7fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_imm 
                    = (0xfffff000U & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w);
            } else if ((0x17U == (0x7fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_imm 
                    = (0xfffff000U & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w);
            } else if ((0x6fU == (0x7fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_imm 
                    = (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_pc_w 
                       + (((- (IData)((vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                       >> 0x1fU))) 
                           << 0x14U) | (((0xff000U 
                                          & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w) 
                                         | (0x800U 
                                            & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                               >> 9U))) 
                                        | ((0x7e0U 
                                            & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                                 >> 0x14U))))));
            } else if ((0x67U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                          >> 0x14U));
            } else if (((((((3U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                            || (0x1003U == (0x707fU 
                                            & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                           || (0x2003U == (0x707fU 
                                           & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                          || (0x4003U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                         || (0x5003U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))) 
                        || (0x6003U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                          >> 0x14U));
            } else {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                                      >> 7U))));
            }
        }
        vlSelfRef.__PVT__csr_opcode_valid_o = (1U & 
                                               (~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__take_interrupt_q)));
    } else {
        vlSelfRef.__PVT__csr_opcode_invalid_o = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[0U] = 0x2dU;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[1U] = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra[2U] = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[0U] = 0x2dU;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[1U] = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb[2U] = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd[0U] = 0x2dU;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd[1U] = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd[2U] = 0U;
        vlSelfRef.__PVT__csr_opcode_valid_o = 0U;
    }
}

VL_INLINE_OPT void Vriscv_top_tb_riscv_issue___ico_sequent__TOP__riscv_top_tb__dut__u_core__u_issue__3(Vriscv_top_tb_riscv_issue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_top_tb_riscv_issue___ico_sequent__TOP__riscv_top_tb__dut__u_core__u_issue__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__branch_request_o = ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__branch_q) 
                                         | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__branch_d_exec_request_w));
}

VL_INLINE_OPT void Vriscv_top_tb_riscv_issue___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_issue__0(Vriscv_top_tb_riscv_issue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_top_tb_riscv_issue___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_issue__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*79:0*/ __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout;
    VL_ZERO_W(80, __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout);
    CData/*4:0*/ __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum;
    __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum = 0;
    VlWide<3>/*79:0*/ __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__Vfuncout;
    VL_ZERO_W(80, __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__Vfuncout);
    CData/*4:0*/ __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum;
    __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum = 0;
    VlWide<3>/*79:0*/ __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__Vfuncout;
    VL_ZERO_W(80, __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__Vfuncout);
    CData/*4:0*/ __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum;
    __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum = 0;
    VlWide<3>/*79:0*/ __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__Vfuncout;
    VL_ZERO_W(80, __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__Vfuncout);
    CData/*4:0*/ __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum;
    __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum = 0;
    VlWide<3>/*79:0*/ __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__Vfuncout;
    VL_ZERO_W(80, __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__Vfuncout);
    CData/*4:0*/ __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum;
    __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum = 0;
    VlWide<3>/*79:0*/ __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__Vfuncout;
    VL_ZERO_W(80, __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__Vfuncout);
    CData/*4:0*/ __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum;
    __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum = 0;
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<3>/*95:0*/ __Vtemp_92;
    VlWide<3>/*95:0*/ __Vtemp_139;
    VlWide<3>/*95:0*/ __Vtemp_185;
    VlWide<3>/*95:0*/ __Vtemp_232;
    VlWide<3>/*95:0*/ __Vtemp_278;
    VlWide<3>/*95:0*/ __Vtemp_325;
    VlWide<3>/*95:0*/ __Vtemp_371;
    VlWide<3>/*95:0*/ __Vtemp_418;
    VlWide<3>/*95:0*/ __Vtemp_464;
    VlWide<3>/*95:0*/ __Vtemp_511;
    VlWide<3>/*95:0*/ __Vtemp_557;
    // Body
    if (vlSymsp->TOP__riscv_top_tb.__PVT__rst) {
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__squash_e1_e2_q = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__csr_wr_wb_q = 0U;
        vlSelfRef.__PVT__div_pending_q = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__operand_rb_wb_q = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__operand_ra_wb_q = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__npc_wb_q = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__pc_wb_q = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__exception_e2_q = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__valid_wb_q = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__result_wb_q = 0U;
        vlSelfRef.__PVT__csr_pending_q = 0U;
        vlSelfRef.__PVT__priv_x_q = 3U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__csr_wr_e2_q = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__operand_rb_e2_q = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__operand_ra_e2_q = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__npc_e2_q = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__pc_e2_q = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_e2_q = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__valid_e2_q = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__result_e2_q = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_wb_q = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__operand_rb_e1_q = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__operand_ra_e1_q = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__npc_e1_q = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__pc_e1_q = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_e1_q = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__valid_e1_q = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__exception_e1_q = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e2_q = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q = 0U;
    } else {
        if (vlSelfRef.__PVT__pipe_squash_e1_e2_w) {
            vlSelfRef.__PVT__div_pending_q = 0U;
            vlSelfRef.__PVT__csr_pending_q = 0U;
        } else {
            if (((IData)(vlSelfRef.__PVT__opcode_issue_r) 
                 & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_div_w))) {
                vlSelfRef.__PVT__div_pending_q = 1U;
            } else if (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_div__DOT__valid_q) {
                vlSelfRef.__PVT__div_pending_q = 0U;
            }
            if (((IData)(vlSelfRef.__PVT__csr_opcode_valid_o) 
                 & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_csr_w))) {
                vlSelfRef.__PVT__csr_pending_q = 1U;
            } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__stall_w)) 
                              & ((IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_wb_q) 
                                 >> 3U)))) {
                vlSelfRef.__PVT__csr_pending_q = 0U;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__stall_w)))) {
            vlSelfRef.__PVT__u_pipe_ctrl__DOT__squash_e1_e2_q 
                = (0U != (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__exception_e2_r));
            vlSelfRef.__PVT__u_pipe_ctrl__DOT__csr_wr_wb_q 
                = vlSelfRef.__PVT__u_pipe_ctrl__DOT__csr_wr_e2_q;
            vlSelfRef.__PVT__u_pipe_ctrl__DOT__operand_rb_wb_q 
                = vlSelfRef.__PVT__u_pipe_ctrl__DOT__operand_rb_e2_q;
            vlSelfRef.__PVT__u_pipe_ctrl__DOT__operand_ra_wb_q 
                = vlSelfRef.__PVT__u_pipe_ctrl__DOT__operand_ra_e2_q;
            vlSelfRef.__PVT__u_pipe_ctrl__DOT__npc_wb_q 
                = vlSelfRef.__PVT__u_pipe_ctrl__DOT__npc_e2_q;
            vlSelfRef.__PVT__u_pipe_ctrl__DOT__pc_wb_q 
                = vlSelfRef.__PVT__u_pipe_ctrl__DOT__pc_e2_q;
            vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                = vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_e2_q;
            vlSelfRef.__PVT__u_pipe_ctrl__DOT__valid_wb_q 
                = ((0x20U & (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__exception_e2_r))
                    ? (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__valid_e2_q)
                    : ((0x10U & (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__exception_e2_r))
                        ? ((8U & (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__exception_e2_r))
                            ? ((4U & (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__exception_e2_r))
                                ? ((1U & (~ (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__exception_e2_r))) 
                                   && (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__valid_e2_q))
                                : (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__valid_e2_q))
                            : ((1U & (~ ((IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__exception_e2_r) 
                                         >> 2U))) && (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__valid_e2_q)))
                        : (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__valid_e2_q)));
            vlSelfRef.__PVT__u_pipe_ctrl__DOT__result_wb_q 
                = (((IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__valid_e2_w) 
                    & (IData)((0U != (6U & (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e2_q)))))
                    ? vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__wb_result_r
                    : (((IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__valid_e2_w) 
                        & ((IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e2_q) 
                           >> 5U)) ? vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_mul__DOT__result_e2_q
                        : vlSelfRef.__PVT__u_pipe_ctrl__DOT__result_e2_q));
            vlSelfRef.__PVT__u_pipe_ctrl__DOT__csr_wr_e2_q 
                = ((1U & (~ (IData)(vlSelfRef.__PVT__pipe_squash_e1_e2_w))) 
                   && (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__rd_valid_e1_q));
            vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_wb_q 
                = ((0U != (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__exception_e2_r))
                    ? (0x37fU & (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e2_q))
                    : (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e2_q));
            if (vlSelfRef.__PVT__pipe_squash_e1_e2_w) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__exception_e2_q = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__operand_rb_e2_q = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__operand_ra_e2_q = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__npc_e2_q = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__pc_e2_q = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_e2_q = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__valid_e2_q = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__result_e2_q = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e2_q = 0U;
            } else {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__exception_e2_q 
                    = ((0x100U & (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q))
                        ? 0x20U : ((0U != (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__exception_e1_q))
                                    ? (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__exception_e1_q)
                                    : (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__exception_e1_q)));
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__operand_rb_e2_q 
                    = vlSelfRef.__PVT__u_pipe_ctrl__DOT__operand_rb_e1_q;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__operand_ra_e2_q 
                    = vlSelfRef.__PVT__u_pipe_ctrl__DOT__operand_ra_e1_q;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__npc_e2_q 
                    = vlSelfRef.__PVT__u_pipe_ctrl__DOT__npc_e1_q;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__pc_e2_q 
                    = vlSelfRef.__PVT__u_pipe_ctrl__DOT__pc_e1_q;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_e2_q 
                    = vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_e1_q;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__valid_e2_q 
                    = vlSelfRef.__PVT__u_pipe_ctrl__DOT__valid_e1_q;
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                              >> 8U)))) {
                    if ((0U != (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__exception_e1_q))) {
                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__valid_e2_q = 0U;
                    }
                }
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__result_e2_q 
                    = ((0x10U & (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q))
                        ? vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_div__DOT__wb_result_q
                        : ((8U & (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q))
                            ? vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__rd_result_e1_q
                            : vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__result_q));
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e2_q 
                    = vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q;
            }
            if ((((IData)(vlSelfRef.__PVT__opcode_issue_r) 
                  & (IData)(vlSelfRef.__PVT__opcode_accept_r)) 
                 & (~ (IData)(vlSelfRef.__PVT__pipe_squash_e1_e2_w)))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__operand_rb_e1_q 
                    = vlSelfRef.__PVT__issue_rb_value_r;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__operand_ra_e1_q 
                    = vlSelfRef.__PVT__issue_ra_value_r;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__npc_e1_q 
                    = ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__branch_d_exec_request_w)
                        ? vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__branch_target_r
                        : ((IData)(4U) + vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_pc_w));
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__pc_e1_q 
                    = vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_pc_w;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_e1_q 
                    = vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__exception_e1_q 
                    = ((0U != (IData)(vlSelfRef.__PVT__issue_fault_w))
                        ? (IData)(vlSelfRef.__PVT__issue_fault_w)
                        : (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__branch_d_exec_request_w) 
                            & (0U != (3U & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__branch_target_r)))
                            ? 0x10U : 0U));
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q 
                    = ((0x3feU & (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q)) 
                       | (1U & (~ (((((3U == (0x707fU 
                                              & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                      | ((0x1003U == 
                                          (0x707fU 
                                           & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                         | ((0x2003U 
                                             == (0x707fU 
                                                 & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                            | ((0x4003U 
                                                == 
                                                (0x707fU 
                                                 & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                               | ((0x5003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                                  | ((0x6003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                                     | ((0x23U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                                        | ((0x1023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                                           | (0x2023U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)))))))))) 
                                     | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_csr_w)) 
                                    | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_div_w)) 
                                   | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_mul_w)))));
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q 
                    = ((0x3fdU & (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q)) 
                       | (((((3U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                             | ((0x1003U == (0x707fU 
                                             & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                | ((0x2003U == (0x707fU 
                                                & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                   | ((0x4003U == (0x707fU 
                                                   & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                      | ((0x5003U == 
                                          (0x707fU 
                                           & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                         | ((0x6003U 
                                             == (0x707fU 
                                                 & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                            | ((0x23U 
                                                == 
                                                (0x707fU 
                                                 & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                               | ((0x1023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                                  | (0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)))))))))) 
                            & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_rd_valid_w)) 
                           & (~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__take_interrupt_q))) 
                          << 1U));
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q 
                    = ((0x3fbU & (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q)) 
                       | (((((3U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                             | ((0x1003U == (0x707fU 
                                             & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                | ((0x2003U == (0x707fU 
                                                & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                   | ((0x4003U == (0x707fU 
                                                   & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                      | ((0x5003U == 
                                          (0x707fU 
                                           & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                         | ((0x6003U 
                                             == (0x707fU 
                                                 & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                            | ((0x23U 
                                                == 
                                                (0x707fU 
                                                 & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                               | ((0x1023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                                  | (0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)))))))))) 
                            & (~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_rd_valid_w))) 
                           & (~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__take_interrupt_q))) 
                          << 2U));
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q 
                    = ((0x3e7U & (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q)) 
                       | ((((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_div_w) 
                            & (~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__take_interrupt_q))) 
                           << 4U) | (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_csr_w) 
                                      & (~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__take_interrupt_q))) 
                                     << 3U)));
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q 
                    = ((0x39fU & (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q)) 
                       | (((((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_57) 
                             | ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_64) 
                                | ((0x4063U == (0x707fU 
                                                & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                   | ((0x5063U == (0x707fU 
                                                   & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                      | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_63))))) 
                            & (~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__take_interrupt_q))) 
                           << 6U) | (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_mul_w) 
                                      & (~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__take_interrupt_q))) 
                                     << 5U)));
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q 
                    = ((0x27fU & (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q)) 
                       | (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__take_interrupt_q) 
                           << 8U) | (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_rd_valid_w) 
                                      & (~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__take_interrupt_q))) 
                                     << 7U)));
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q 
                    = (0x200U | (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q));
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__valid_e1_q = 1U;
            } else {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__operand_rb_e1_q = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__operand_ra_e1_q = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__npc_e1_q = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__pc_e1_q = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_e1_q = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__exception_e1_q = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__valid_e1_q = 0U;
            }
        }
        if (vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__branch_q) {
            vlSelfRef.__PVT__priv_x_q = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__branch_csr_priv_o;
        }
    }
    __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum 
        = (0x1fU & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                    >> 0xfU));
    if ((8U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
                    __Vtemp_46[0U] = 0x7436U;
                    __Vtemp_92[0U] = 0x6135U;
                } else {
                    __Vtemp_46[0U] = 0x7435U;
                    __Vtemp_92[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
                __Vtemp_46[0U] = 0x7434U;
                __Vtemp_92[0U] = 0x6133U;
            } else {
                __Vtemp_46[0U] = 0x7433U;
                __Vtemp_92[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
                __Vtemp_46[0U] = 0x733131U;
                __Vtemp_92[0U] = 0x6131U;
            } else {
                __Vtemp_46[0U] = 0x733130U;
                __Vtemp_92[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
            __Vtemp_46[0U] = 0x7339U;
            __Vtemp_92[0U] = 0x7331U;
        } else {
            __Vtemp_46[0U] = 0x7338U;
            __Vtemp_92[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
                __Vtemp_46[0U] = 0x7337U;
                __Vtemp_92[0U] = 0x7432U;
            } else {
                __Vtemp_46[0U] = 0x7336U;
                __Vtemp_92[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
            __Vtemp_46[0U] = 0x7335U;
            __Vtemp_92[0U] = 0x7430U;
        } else {
            __Vtemp_46[0U] = 0x7334U;
            __Vtemp_92[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
            __Vtemp_46[0U] = 0x7333U;
            __Vtemp_92[0U] = 0x6770U;
        } else {
            __Vtemp_46[0U] = 0x7332U;
            __Vtemp_92[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
        __Vtemp_46[0U] = 0x6137U;
        __Vtemp_92[0U] = 0x7261U;
    } else {
        __Vtemp_46[0U] = 0x6136U;
        __Vtemp_92[0U] = 0x7a65726fU;
    }
    __Vtemp_46[1U] = 0U;
    __Vtemp_46[2U] = 0U;
    __Vtemp_92[1U] = 0U;
    __Vtemp_92[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout[0U] 
            = __Vtemp_46[0U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout[1U] 
            = __Vtemp_46[1U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout[2U] 
            = __Vtemp_46[2U];
    } else {
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout[0U] 
            = __Vtemp_92[0U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout[1U] 
            = __Vtemp_92[1U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout[2U] 
            = __Vtemp_92[2U];
    }
    vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h80d7e585__0[0U] 
        = __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout[0U];
    vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h80d7e585__0[1U] 
        = __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout[1U];
    vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h80d7e585__0[2U] 
        = __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout[2U];
    __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum 
        = (0x1fU & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                    >> 0x14U));
    if ((8U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
                    __Vtemp_139[0U] = 0x7436U;
                    __Vtemp_185[0U] = 0x6135U;
                } else {
                    __Vtemp_139[0U] = 0x7435U;
                    __Vtemp_185[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
                __Vtemp_139[0U] = 0x7434U;
                __Vtemp_185[0U] = 0x6133U;
            } else {
                __Vtemp_139[0U] = 0x7433U;
                __Vtemp_185[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
                __Vtemp_139[0U] = 0x733131U;
                __Vtemp_185[0U] = 0x6131U;
            } else {
                __Vtemp_139[0U] = 0x733130U;
                __Vtemp_185[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
            __Vtemp_139[0U] = 0x7339U;
            __Vtemp_185[0U] = 0x7331U;
        } else {
            __Vtemp_139[0U] = 0x7338U;
            __Vtemp_185[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
                __Vtemp_139[0U] = 0x7337U;
                __Vtemp_185[0U] = 0x7432U;
            } else {
                __Vtemp_139[0U] = 0x7336U;
                __Vtemp_185[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
            __Vtemp_139[0U] = 0x7335U;
            __Vtemp_185[0U] = 0x7430U;
        } else {
            __Vtemp_139[0U] = 0x7334U;
            __Vtemp_185[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
            __Vtemp_139[0U] = 0x7333U;
            __Vtemp_185[0U] = 0x6770U;
        } else {
            __Vtemp_139[0U] = 0x7332U;
            __Vtemp_185[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
        __Vtemp_139[0U] = 0x6137U;
        __Vtemp_185[0U] = 0x7261U;
    } else {
        __Vtemp_139[0U] = 0x6136U;
        __Vtemp_185[0U] = 0x7a65726fU;
    }
    __Vtemp_139[1U] = 0U;
    __Vtemp_139[2U] = 0U;
    __Vtemp_185[1U] = 0U;
    __Vtemp_185[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__Vfuncout[0U] 
            = __Vtemp_139[0U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__Vfuncout[1U] 
            = __Vtemp_139[1U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__Vfuncout[2U] 
            = __Vtemp_139[2U];
    } else {
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__Vfuncout[0U] 
            = __Vtemp_185[0U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__Vfuncout[1U] 
            = __Vtemp_185[1U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__Vfuncout[2U] 
            = __Vtemp_185[2U];
    }
    vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_hef8b1dcb__0[0U] 
        = __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__Vfuncout[0U];
    vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_hef8b1dcb__0[1U] 
        = __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__Vfuncout[1U];
    vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_hef8b1dcb__0[2U] 
        = __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__Vfuncout[2U];
    __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum 
        = (0x1fU & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                    >> 7U));
    if ((8U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
                    __Vtemp_232[0U] = 0x7436U;
                    __Vtemp_278[0U] = 0x6135U;
                } else {
                    __Vtemp_232[0U] = 0x7435U;
                    __Vtemp_278[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
                __Vtemp_232[0U] = 0x7434U;
                __Vtemp_278[0U] = 0x6133U;
            } else {
                __Vtemp_232[0U] = 0x7433U;
                __Vtemp_278[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
                __Vtemp_232[0U] = 0x733131U;
                __Vtemp_278[0U] = 0x6131U;
            } else {
                __Vtemp_232[0U] = 0x733130U;
                __Vtemp_278[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
            __Vtemp_232[0U] = 0x7339U;
            __Vtemp_278[0U] = 0x7331U;
        } else {
            __Vtemp_232[0U] = 0x7338U;
            __Vtemp_278[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
                __Vtemp_232[0U] = 0x7337U;
                __Vtemp_278[0U] = 0x7432U;
            } else {
                __Vtemp_232[0U] = 0x7336U;
                __Vtemp_278[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
            __Vtemp_232[0U] = 0x7335U;
            __Vtemp_278[0U] = 0x7430U;
        } else {
            __Vtemp_232[0U] = 0x7334U;
            __Vtemp_278[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
            __Vtemp_232[0U] = 0x7333U;
            __Vtemp_278[0U] = 0x6770U;
        } else {
            __Vtemp_232[0U] = 0x7332U;
            __Vtemp_278[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
        __Vtemp_232[0U] = 0x6137U;
        __Vtemp_278[0U] = 0x7261U;
    } else {
        __Vtemp_232[0U] = 0x6136U;
        __Vtemp_278[0U] = 0x7a65726fU;
    }
    __Vtemp_232[1U] = 0U;
    __Vtemp_232[2U] = 0U;
    __Vtemp_278[1U] = 0U;
    __Vtemp_278[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__Vfuncout[0U] 
            = __Vtemp_232[0U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__Vfuncout[1U] 
            = __Vtemp_232[1U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__Vfuncout[2U] 
            = __Vtemp_232[2U];
    } else {
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__Vfuncout[0U] 
            = __Vtemp_278[0U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__Vfuncout[1U] 
            = __Vtemp_278[1U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__Vfuncout[2U] 
            = __Vtemp_278[2U];
    }
    vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h5dd7f615__0[0U] 
        = __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__Vfuncout[0U];
    vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h5dd7f615__0[1U] 
        = __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__Vfuncout[1U];
    vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h5dd7f615__0[2U] 
        = __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__Vfuncout[2U];
    __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum 
        = (0x1fU & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                    >> 0xfU));
    if ((8U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum))) {
                    __Vtemp_325[0U] = 0x7436U;
                    __Vtemp_371[0U] = 0x6135U;
                } else {
                    __Vtemp_325[0U] = 0x7435U;
                    __Vtemp_371[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum))) {
                __Vtemp_325[0U] = 0x7434U;
                __Vtemp_371[0U] = 0x6133U;
            } else {
                __Vtemp_325[0U] = 0x7433U;
                __Vtemp_371[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum))) {
                __Vtemp_325[0U] = 0x733131U;
                __Vtemp_371[0U] = 0x6131U;
            } else {
                __Vtemp_325[0U] = 0x733130U;
                __Vtemp_371[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum))) {
            __Vtemp_325[0U] = 0x7339U;
            __Vtemp_371[0U] = 0x7331U;
        } else {
            __Vtemp_325[0U] = 0x7338U;
            __Vtemp_371[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum))) {
                __Vtemp_325[0U] = 0x7337U;
                __Vtemp_371[0U] = 0x7432U;
            } else {
                __Vtemp_325[0U] = 0x7336U;
                __Vtemp_371[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum))) {
            __Vtemp_325[0U] = 0x7335U;
            __Vtemp_371[0U] = 0x7430U;
        } else {
            __Vtemp_325[0U] = 0x7334U;
            __Vtemp_371[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum))) {
            __Vtemp_325[0U] = 0x7333U;
            __Vtemp_371[0U] = 0x6770U;
        } else {
            __Vtemp_325[0U] = 0x7332U;
            __Vtemp_371[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum))) {
        __Vtemp_325[0U] = 0x6137U;
        __Vtemp_371[0U] = 0x7261U;
    } else {
        __Vtemp_325[0U] = 0x6136U;
        __Vtemp_371[0U] = 0x7a65726fU;
    }
    __Vtemp_325[1U] = 0U;
    __Vtemp_325[2U] = 0U;
    __Vtemp_371[1U] = 0U;
    __Vtemp_371[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum))) {
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__Vfuncout[0U] 
            = __Vtemp_325[0U];
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__Vfuncout[1U] 
            = __Vtemp_325[1U];
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__Vfuncout[2U] 
            = __Vtemp_325[2U];
    } else {
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__Vfuncout[0U] 
            = __Vtemp_371[0U];
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__Vfuncout[1U] 
            = __Vtemp_371[1U];
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__Vfuncout[2U] 
            = __Vtemp_371[2U];
    }
    vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_h80d7e585__0[0U] 
        = __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__Vfuncout[0U];
    vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_h80d7e585__0[1U] 
        = __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__Vfuncout[1U];
    vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_h80d7e585__0[2U] 
        = __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__Vfuncout[2U];
    __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum 
        = (0x1fU & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                    >> 0x14U));
    if ((8U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum))) {
                    __Vtemp_418[0U] = 0x7436U;
                    __Vtemp_464[0U] = 0x6135U;
                } else {
                    __Vtemp_418[0U] = 0x7435U;
                    __Vtemp_464[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum))) {
                __Vtemp_418[0U] = 0x7434U;
                __Vtemp_464[0U] = 0x6133U;
            } else {
                __Vtemp_418[0U] = 0x7433U;
                __Vtemp_464[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum))) {
                __Vtemp_418[0U] = 0x733131U;
                __Vtemp_464[0U] = 0x6131U;
            } else {
                __Vtemp_418[0U] = 0x733130U;
                __Vtemp_464[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum))) {
            __Vtemp_418[0U] = 0x7339U;
            __Vtemp_464[0U] = 0x7331U;
        } else {
            __Vtemp_418[0U] = 0x7338U;
            __Vtemp_464[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum))) {
                __Vtemp_418[0U] = 0x7337U;
                __Vtemp_464[0U] = 0x7432U;
            } else {
                __Vtemp_418[0U] = 0x7336U;
                __Vtemp_464[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum))) {
            __Vtemp_418[0U] = 0x7335U;
            __Vtemp_464[0U] = 0x7430U;
        } else {
            __Vtemp_418[0U] = 0x7334U;
            __Vtemp_464[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum))) {
            __Vtemp_418[0U] = 0x7333U;
            __Vtemp_464[0U] = 0x6770U;
        } else {
            __Vtemp_418[0U] = 0x7332U;
            __Vtemp_464[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum))) {
        __Vtemp_418[0U] = 0x6137U;
        __Vtemp_464[0U] = 0x7261U;
    } else {
        __Vtemp_418[0U] = 0x6136U;
        __Vtemp_464[0U] = 0x7a65726fU;
    }
    __Vtemp_418[1U] = 0U;
    __Vtemp_418[2U] = 0U;
    __Vtemp_464[1U] = 0U;
    __Vtemp_464[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum))) {
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__Vfuncout[0U] 
            = __Vtemp_418[0U];
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__Vfuncout[1U] 
            = __Vtemp_418[1U];
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__Vfuncout[2U] 
            = __Vtemp_418[2U];
    } else {
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__Vfuncout[0U] 
            = __Vtemp_464[0U];
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__Vfuncout[1U] 
            = __Vtemp_464[1U];
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__Vfuncout[2U] 
            = __Vtemp_464[2U];
    }
    vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_hef8b1dcb__0[0U] 
        = __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__Vfuncout[0U];
    vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_hef8b1dcb__0[1U] 
        = __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__Vfuncout[1U];
    vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_hef8b1dcb__0[2U] 
        = __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__Vfuncout[2U];
    __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum 
        = (0x1fU & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                    >> 7U));
    if ((8U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum))) {
                    __Vtemp_511[0U] = 0x7436U;
                    __Vtemp_557[0U] = 0x6135U;
                } else {
                    __Vtemp_511[0U] = 0x7435U;
                    __Vtemp_557[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum))) {
                __Vtemp_511[0U] = 0x7434U;
                __Vtemp_557[0U] = 0x6133U;
            } else {
                __Vtemp_511[0U] = 0x7433U;
                __Vtemp_557[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum))) {
                __Vtemp_511[0U] = 0x733131U;
                __Vtemp_557[0U] = 0x6131U;
            } else {
                __Vtemp_511[0U] = 0x733130U;
                __Vtemp_557[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum))) {
            __Vtemp_511[0U] = 0x7339U;
            __Vtemp_557[0U] = 0x7331U;
        } else {
            __Vtemp_511[0U] = 0x7338U;
            __Vtemp_557[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum))) {
                __Vtemp_511[0U] = 0x7337U;
                __Vtemp_557[0U] = 0x7432U;
            } else {
                __Vtemp_511[0U] = 0x7336U;
                __Vtemp_557[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum))) {
            __Vtemp_511[0U] = 0x7335U;
            __Vtemp_557[0U] = 0x7430U;
        } else {
            __Vtemp_511[0U] = 0x7334U;
            __Vtemp_557[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum))) {
            __Vtemp_511[0U] = 0x7333U;
            __Vtemp_557[0U] = 0x6770U;
        } else {
            __Vtemp_511[0U] = 0x7332U;
            __Vtemp_557[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum))) {
        __Vtemp_511[0U] = 0x6137U;
        __Vtemp_557[0U] = 0x7261U;
    } else {
        __Vtemp_511[0U] = 0x6136U;
        __Vtemp_557[0U] = 0x7a65726fU;
    }
    __Vtemp_511[1U] = 0U;
    __Vtemp_511[2U] = 0U;
    __Vtemp_557[1U] = 0U;
    __Vtemp_557[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum))) {
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__Vfuncout[0U] 
            = __Vtemp_511[0U];
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__Vfuncout[1U] 
            = __Vtemp_511[1U];
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__Vfuncout[2U] 
            = __Vtemp_511[2U];
    } else {
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__Vfuncout[0U] 
            = __Vtemp_557[0U];
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__Vfuncout[1U] 
            = __Vtemp_557[1U];
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__Vfuncout[2U] 
            = __Vtemp_557[2U];
    }
    vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_h5dd7f615__0[0U] 
        = __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__Vfuncout[0U];
    vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_h5dd7f615__0[1U] 
        = __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__Vfuncout[1U];
    vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_h5dd7f615__0[2U] 
        = __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__Vfuncout[2U];
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__load_store_e2_w 
        = (IData)((0U != (6U & (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e2_q))));
    vlSelfRef.__PVT__pipe_rd_e1_w = (0x1fU & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                                                             >> 7U)))) 
                                              & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_e1_q 
                                                 >> 7U)));
}

VL_INLINE_OPT void Vriscv_top_tb_riscv_issue___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_issue__1(Vriscv_top_tb_riscv_issue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_top_tb_riscv_issue___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_issue__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__issue_fault_w = ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_dec_fault_fetch_w)
                                       ? 0x11U : ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_fault_page_w)
                                                   ? 0x1cU
                                                   : 0U));
}

VL_INLINE_OPT void Vriscv_top_tb_riscv_issue___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_issue__2(Vriscv_top_tb_riscv_issue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_top_tb_riscv_issue___nba_sequent__TOP__riscv_top_tb__dut__u_core__u_issue__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__riscv_top_tb.__PVT__rst) {
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__exception_wb_q = 0U;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__csr_wdata_e2_q = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__stall_w)))) {
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q 
            = vlSelfRef.__PVT__u_pipe_ctrl__DOT__csr_wdata_e2_q;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__exception_wb_q 
            = vlSelfRef.__PVT__u_pipe_ctrl__DOT__exception_e2_r;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__csr_wdata_e2_q 
            = ((IData)(vlSelfRef.__PVT__pipe_squash_e1_e2_w)
                ? 0U : vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__csr_wdata_e1_q);
    }
}

VL_INLINE_OPT void Vriscv_top_tb_riscv_issue___nba_comb__TOP__riscv_top_tb__dut__u_core__u_issue__0(Vriscv_top_tb_riscv_issue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_top_tb_riscv_issue___nba_comb__TOP__riscv_top_tb__dut__u_core__u_issue__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*79:0*/ __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__Vfuncout;
    VL_ZERO_W(80, __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__Vfuncout);
    CData/*4:0*/ __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum;
    __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum = 0;
    VlWide<3>/*79:0*/ __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__Vfuncout;
    VL_ZERO_W(80, __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__Vfuncout);
    CData/*4:0*/ __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum;
    __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum = 0;
    VlWide<3>/*79:0*/ __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__Vfuncout;
    VL_ZERO_W(80, __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__Vfuncout);
    CData/*4:0*/ __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum;
    __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum = 0;
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<3>/*95:0*/ __Vtemp_92;
    VlWide<3>/*95:0*/ __Vtemp_139;
    VlWide<3>/*95:0*/ __Vtemp_185;
    VlWide<3>/*95:0*/ __Vtemp_232;
    VlWide<3>/*95:0*/ __Vtemp_278;
    // Body
    __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum 
        = (0x1fU & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                    >> 0xfU));
    if ((8U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum))) {
                    __Vtemp_46[0U] = 0x7436U;
                    __Vtemp_92[0U] = 0x6135U;
                } else {
                    __Vtemp_46[0U] = 0x7435U;
                    __Vtemp_92[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum))) {
                __Vtemp_46[0U] = 0x7434U;
                __Vtemp_92[0U] = 0x6133U;
            } else {
                __Vtemp_46[0U] = 0x7433U;
                __Vtemp_92[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum))) {
                __Vtemp_46[0U] = 0x733131U;
                __Vtemp_92[0U] = 0x6131U;
            } else {
                __Vtemp_46[0U] = 0x733130U;
                __Vtemp_92[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum))) {
            __Vtemp_46[0U] = 0x7339U;
            __Vtemp_92[0U] = 0x7331U;
        } else {
            __Vtemp_46[0U] = 0x7338U;
            __Vtemp_92[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum))) {
                __Vtemp_46[0U] = 0x7337U;
                __Vtemp_92[0U] = 0x7432U;
            } else {
                __Vtemp_46[0U] = 0x7336U;
                __Vtemp_92[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum))) {
            __Vtemp_46[0U] = 0x7335U;
            __Vtemp_92[0U] = 0x7430U;
        } else {
            __Vtemp_46[0U] = 0x7334U;
            __Vtemp_92[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum))) {
            __Vtemp_46[0U] = 0x7333U;
            __Vtemp_92[0U] = 0x6770U;
        } else {
            __Vtemp_46[0U] = 0x7332U;
            __Vtemp_92[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum))) {
        __Vtemp_46[0U] = 0x6137U;
        __Vtemp_92[0U] = 0x7261U;
    } else {
        __Vtemp_46[0U] = 0x6136U;
        __Vtemp_92[0U] = 0x7a65726fU;
    }
    __Vtemp_46[1U] = 0U;
    __Vtemp_46[2U] = 0U;
    __Vtemp_92[1U] = 0U;
    __Vtemp_92[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__regnum))) {
        __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__Vfuncout[0U] 
            = __Vtemp_46[0U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__Vfuncout[1U] 
            = __Vtemp_46[1U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__Vfuncout[2U] 
            = __Vtemp_46[2U];
    } else {
        __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__Vfuncout[0U] 
            = __Vtemp_92[0U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__Vfuncout[1U] 
            = __Vtemp_92[1U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__Vfuncout[2U] 
            = __Vtemp_92[2U];
    }
    vlSelfRef.u_pipe_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h80d7e585__0[0U] 
        = __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__Vfuncout[0U];
    vlSelfRef.u_pipe_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h80d7e585__0[1U] 
        = __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__Vfuncout[1U];
    vlSelfRef.u_pipe_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h80d7e585__0[2U] 
        = __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__0__Vfuncout[2U];
    __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum 
        = (0x1fU & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                    >> 0x14U));
    if ((8U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum))) {
                    __Vtemp_139[0U] = 0x7436U;
                    __Vtemp_185[0U] = 0x6135U;
                } else {
                    __Vtemp_139[0U] = 0x7435U;
                    __Vtemp_185[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum))) {
                __Vtemp_139[0U] = 0x7434U;
                __Vtemp_185[0U] = 0x6133U;
            } else {
                __Vtemp_139[0U] = 0x7433U;
                __Vtemp_185[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum))) {
                __Vtemp_139[0U] = 0x733131U;
                __Vtemp_185[0U] = 0x6131U;
            } else {
                __Vtemp_139[0U] = 0x733130U;
                __Vtemp_185[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum))) {
            __Vtemp_139[0U] = 0x7339U;
            __Vtemp_185[0U] = 0x7331U;
        } else {
            __Vtemp_139[0U] = 0x7338U;
            __Vtemp_185[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum))) {
                __Vtemp_139[0U] = 0x7337U;
                __Vtemp_185[0U] = 0x7432U;
            } else {
                __Vtemp_139[0U] = 0x7336U;
                __Vtemp_185[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum))) {
            __Vtemp_139[0U] = 0x7335U;
            __Vtemp_185[0U] = 0x7430U;
        } else {
            __Vtemp_139[0U] = 0x7334U;
            __Vtemp_185[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum))) {
            __Vtemp_139[0U] = 0x7333U;
            __Vtemp_185[0U] = 0x6770U;
        } else {
            __Vtemp_139[0U] = 0x7332U;
            __Vtemp_185[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum))) {
        __Vtemp_139[0U] = 0x6137U;
        __Vtemp_185[0U] = 0x7261U;
    } else {
        __Vtemp_139[0U] = 0x6136U;
        __Vtemp_185[0U] = 0x7a65726fU;
    }
    __Vtemp_139[1U] = 0U;
    __Vtemp_139[2U] = 0U;
    __Vtemp_185[1U] = 0U;
    __Vtemp_185[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__regnum))) {
        __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__Vfuncout[0U] 
            = __Vtemp_139[0U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__Vfuncout[1U] 
            = __Vtemp_139[1U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__Vfuncout[2U] 
            = __Vtemp_139[2U];
    } else {
        __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__Vfuncout[0U] 
            = __Vtemp_185[0U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__Vfuncout[1U] 
            = __Vtemp_185[1U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__Vfuncout[2U] 
            = __Vtemp_185[2U];
    }
    vlSelfRef.u_pipe_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_hef8b1dcb__0[0U] 
        = __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__Vfuncout[0U];
    vlSelfRef.u_pipe_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_hef8b1dcb__0[1U] 
        = __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__Vfuncout[1U];
    vlSelfRef.u_pipe_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_hef8b1dcb__0[2U] 
        = __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__1__Vfuncout[2U];
    __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum 
        = (0x1fU & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                    >> 7U));
    if ((8U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum))) {
                    __Vtemp_232[0U] = 0x7436U;
                    __Vtemp_278[0U] = 0x6135U;
                } else {
                    __Vtemp_232[0U] = 0x7435U;
                    __Vtemp_278[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum))) {
                __Vtemp_232[0U] = 0x7434U;
                __Vtemp_278[0U] = 0x6133U;
            } else {
                __Vtemp_232[0U] = 0x7433U;
                __Vtemp_278[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum))) {
                __Vtemp_232[0U] = 0x733131U;
                __Vtemp_278[0U] = 0x6131U;
            } else {
                __Vtemp_232[0U] = 0x733130U;
                __Vtemp_278[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum))) {
            __Vtemp_232[0U] = 0x7339U;
            __Vtemp_278[0U] = 0x7331U;
        } else {
            __Vtemp_232[0U] = 0x7338U;
            __Vtemp_278[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum))) {
                __Vtemp_232[0U] = 0x7337U;
                __Vtemp_278[0U] = 0x7432U;
            } else {
                __Vtemp_232[0U] = 0x7336U;
                __Vtemp_278[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum))) {
            __Vtemp_232[0U] = 0x7335U;
            __Vtemp_278[0U] = 0x7430U;
        } else {
            __Vtemp_232[0U] = 0x7334U;
            __Vtemp_278[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum))) {
            __Vtemp_232[0U] = 0x7333U;
            __Vtemp_278[0U] = 0x6770U;
        } else {
            __Vtemp_232[0U] = 0x7332U;
            __Vtemp_278[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum))) {
        __Vtemp_232[0U] = 0x6137U;
        __Vtemp_278[0U] = 0x7261U;
    } else {
        __Vtemp_232[0U] = 0x6136U;
        __Vtemp_278[0U] = 0x7a65726fU;
    }
    __Vtemp_232[1U] = 0U;
    __Vtemp_232[2U] = 0U;
    __Vtemp_278[1U] = 0U;
    __Vtemp_278[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__regnum))) {
        __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__Vfuncout[0U] 
            = __Vtemp_232[0U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__Vfuncout[1U] 
            = __Vtemp_232[1U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__Vfuncout[2U] 
            = __Vtemp_232[2U];
    } else {
        __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__Vfuncout[0U] 
            = __Vtemp_278[0U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__Vfuncout[1U] 
            = __Vtemp_278[1U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__Vfuncout[2U] 
            = __Vtemp_278[2U];
    }
    vlSelfRef.u_pipe_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h5dd7f615__0[0U] 
        = __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__Vfuncout[0U];
    vlSelfRef.u_pipe_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h5dd7f615__0[1U] 
        = __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__Vfuncout[1U];
    vlSelfRef.u_pipe_ctrl__DOT__u_trace_d__DOT____VdfgExtracted_h5dd7f615__0[2U] 
        = __Vfunc_u_pipe_ctrl__DOT__u_trace_d__DOT__get_regname_str__2__Vfuncout[2U];
}

VL_INLINE_OPT void Vriscv_top_tb_riscv_issue___nba_comb__TOP__riscv_top_tb__dut__u_core__u_issue__1(Vriscv_top_tb_riscv_issue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_top_tb_riscv_issue___nba_comb__TOP__riscv_top_tb__dut__u_core__u_issue__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__exception_e2_r 
        = (((IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__valid_e2_q) 
            & ((IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__load_store_e2_w) 
               & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__writeback_mem_valid_w)))
            ? (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_unaligned_e2_q) 
                & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__resp_load_w))
                ? 0x14U : (((~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__resp_load_w)) 
                            & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_unaligned_e2_q))
                            ? 0x16U : (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__mem_error_o) 
                                        & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__resp_load_w))
                                        ? 0x15U : (
                                                   ((~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__resp_load_w)) 
                                                    & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__mem_error_o))
                                                    ? 0x17U
                                                    : 0U))))
            : (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__exception_e2_q));
    vlSelfRef.__PVT__stall_w = (1U & (((~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_div__DOT__valid_q)) 
                                       & ((IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                                          >> 4U)) | 
                                      ((~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__writeback_mem_valid_w)) 
                                       & (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__load_store_e2_w))));
    vlSelfRef.__PVT__pipe_squash_e1_e2_w = ((0U != (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__exception_e2_r)) 
                                            | (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__squash_e1_e2_q));
    vlSelfRef.__PVT__pipe_valid_wb_w = ((~ (IData)(vlSelfRef.__PVT__stall_w)) 
                                        & (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__valid_wb_q));
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__valid_e2_w = 
        ((~ (IData)(vlSelfRef.__PVT__stall_w)) & (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__valid_e2_q));
    vlSelfRef.__PVT__opcode_valid_w = ((~ ((IData)(vlSelfRef.__PVT__pipe_squash_e1_e2_w) 
                                           | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__branch_q))) 
                                       & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_dec_valid_w));
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x2dU;
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_pc = 0U;
    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x2dU;
    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_pc = 0U;
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[0U] = 0x2dU;
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[1U] = 0U;
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[2U] = 0U;
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] = 0x2dU;
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] = 0U;
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] = 0U;
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[0U] = 0x2dU;
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[1U] = 0U;
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[2U] = 0U;
    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra[0U] = 0x2dU;
    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra[1U] = 0U;
    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra[2U] = 0U;
    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[0U] = 0x2dU;
    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[1U] = 0U;
    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[2U] = 0U;
    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rd[0U] = 0x2dU;
    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rd[1U] = 0U;
    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rd[2U] = 0U;
    if (vlSelfRef.__PVT__pipe_valid_wb_w) {
        if (((((((((0x7013U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                   | (0x13U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                  | (0x2013U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                 | (0x3013U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                | (0x6013U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
               | (0x4013U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
              | (0x1013U == (0xfc00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
             | (0x5013U == (0xfc00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)))) {
            if ((0x7013U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x616e6469U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x616e6469U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x13U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x61646469U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x61646469U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2013U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x736c7469U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x736c7469U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x3013U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6c746975U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x73U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x6c746975U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0x73U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6013U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6f7269U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x6f7269U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x4013U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x786f7269U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x786f7269U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x1013U == (0xfc00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x736c6c69U;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x736c6c69U;
                } else {
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x73726c69U;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x73726c69U;
                }
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x40005013U == (0xfc00707fU 
                                           & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                          | (0x37U == (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                         | (0x17U == (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                        | (0x33U == (0xfe00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                       | (0x40000033U == (0xfe00707fU 
                                          & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                      | (0x2033U == (0xfe00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                     | (0x3033U == (0xfe00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                    | (0x4033U == (0xfe00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)))) {
            if ((0x40005013U == (0xfc00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x73726169U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x73726169U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x37U == (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6c7569U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x6c7569U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x17U == (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x75697063U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x61U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x75697063U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0x61U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x33U == (0xfe00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x616464U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x616464U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x40000033U == (0xfe00707fU 
                                        & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x737562U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x737562U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2033U == (0xfe00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x736c74U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x736c74U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x3033U == (0xfe00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x736c7475U;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x736c7475U;
                } else {
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x786f72U;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x786f72U;
                }
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x6033U == (0xfe00707fU 
                                       & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                          | (0x7033U == (0xfe00707fU 
                                         & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                         | (0x1033U == (0xfe00707fU 
                                        & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                        | (0x5033U == (0xfe00707fU 
                                       & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                       | (0x40005033U == (0xfe00707fU 
                                          & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                      | (0x6fU == (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                     | (0x67U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                    | (0x63U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)))) {
            if ((0x6033U == (0xfe00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6f72U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x6f72U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x7033U == (0xfe00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x616e64U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x616e64U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x1033U == (0xfe00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x736c6cU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x736c6cU;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5033U == (0xfe00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x73726cU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x73726cU;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x40005033U == (0xfe00707fU 
                                        & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x737261U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x737261U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6fU == (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6a616cU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x6a616cU;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x67U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6a616c72U;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x6a616c72U;
                } else {
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x626571U;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x626571U;
                }
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x1063U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                          | (0x4063U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                         | (0x5063U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                        | (0x6063U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                       | (0x7063U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                      | (3U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                     | (0x1003U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                    | (0x2003U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)))) {
            if ((0x1063U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x626e65U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x626e65U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x4063U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x626c74U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x626c74U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5063U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x626765U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x626765U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6063U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x626c7475U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x626c7475U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x7063U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x62676575U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x62676575U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((3U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6c62U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x6c62U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x1003U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6c68U;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x6c68U;
                } else {
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6c77U;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x6c77U;
                }
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x4003U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                          | (0x5003U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                         | (0x6003U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                        | (0x23U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                       | (0x1023U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                      | (0x2023U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                     | (0x73U == vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                    | (0x100073U == vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
            if ((0x4003U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6c6275U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x6c6275U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5003U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6c6875U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x6c6875U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6003U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6c7775U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x6c7775U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x23U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x7362U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x7362U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x1023U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x7368U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x7368U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2023U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x7377U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x7377U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x73U == vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) {
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x63616c6cU;
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x65U;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x63616c6cU;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0x65U;
                } else {
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x7265616bU;
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x6562U;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x7265616bU;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0x6562U;
                }
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x200073U == (0xcfffffffU 
                                         & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                          | (0x1073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                         | (0x2073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                        | (0x3073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                       | (0x5073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                      | (0x6073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                     | (0x7073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                    | (0x2000033U == (0xfe00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)))) {
            if ((0x200073U == (0xcfffffffU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x65726574U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x65726574U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x1073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x73727277U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x73727277U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x73727273U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x73727273U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x3073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x73727263U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x73727263U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x5073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x72727769U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x6373U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x72727769U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0x6373U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x6073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x72727369U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x6373U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x72727369U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0x6373U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x7073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x72726369U;
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x6373U;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x72726369U;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0x6373U;
                } else {
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6d756cU;
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x6d756cU;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                }
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x2001033U == (0xfe00707fU 
                                          & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                          | (0x2002033U == (0xfe00707fU 
                                            & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                         | (0x2003033U == (0xfe00707fU 
                                           & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                        | (0x2004033U == (0xfe00707fU 
                                          & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                       | (0x2005033U == (0xfe00707fU 
                                         & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                      | (0x2006033U == (0xfe00707fU 
                                        & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                     | (0x2007033U == (0xfe00707fU 
                                       & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                    | (0x100fU == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)))) {
            if ((0x2001033U == (0xfe00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6d756c68U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x6d756c68U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2002033U == (0xfe00707fU 
                                       & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x6c687375U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x6d75U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x6c687375U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0x6d75U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2003033U == (0xfe00707fU 
                                       & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x756c6875U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x6dU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x756c6875U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0x6dU;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2004033U == (0xfe00707fU 
                                       & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x646976U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x646976U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2005033U == (0xfe00707fU 
                                       & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x64697675U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x64697675U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else if ((0x2006033U == (0xfe00707fU 
                                       & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x72656dU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x72656dU;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x2007033U == (0xfe00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x72656d75U;
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x72656d75U;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                } else {
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x63652e69U;
                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x66656eU;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x63652e69U;
                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0x66656eU;
                }
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
            }
        }
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_pc 
            = vlSelfRef.__PVT__u_pipe_ctrl__DOT__pc_wb_q;
        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_pc 
            = vlSelfRef.__PVT__u_pipe_ctrl__DOT__pc_wb_q;
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[0U] 
            = vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h80d7e585__0[0U];
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[1U] 
            = vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h80d7e585__0[1U];
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[2U] 
            = vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h80d7e585__0[2U];
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] 
            = vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_hef8b1dcb__0[0U];
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] 
            = vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_hef8b1dcb__0[1U];
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] 
            = vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_hef8b1dcb__0[2U];
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[0U] 
            = vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h5dd7f615__0[0U];
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[1U] 
            = vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h5dd7f615__0[1U];
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[2U] 
            = vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h5dd7f615__0[2U];
        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra[0U] 
            = vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_h80d7e585__0[0U];
        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra[1U] 
            = vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_h80d7e585__0[1U];
        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra[2U] 
            = vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_h80d7e585__0[2U];
        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[0U] 
            = vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_hef8b1dcb__0[0U];
        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[1U] 
            = vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_hef8b1dcb__0[1U];
        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[2U] 
            = vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_hef8b1dcb__0[2U];
        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rd[0U] 
            = vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_h5dd7f615__0[0U];
        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rd[1U] 
            = vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_h5dd7f615__0[1U];
        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rd[2U] 
            = vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_h5dd7f615__0[2U];
        if ((((((((((((((((((((0x13U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                              || (0x7013U == (0x707fU 
                                              & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                             || (0x2013U == (0x707fU 
                                             & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                            || (0x3013U == (0x707fU 
                                            & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                           || (0x6013U == (0x707fU 
                                           & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                          || (0x4013U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                         || (0x1073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                        || (0x2073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                       || (0x3073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                      || (0x5073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                     || (0x6073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                    || (0x7073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                   | (((0x1013U == (0xfc00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                       || (0x5013U == (0xfc00707fU 
                                       & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                      || (0x40005013U == (0xfc00707fU 
                                          & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)))) 
                  | (0x37U == (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                 | (0x17U == (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                | (0x6fU == (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
               | (0x67U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
              | ((((((3U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                     || (0x1003U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                    || (0x2003U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                   || (0x4003U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                  || (0x5003U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                 || (0x6003U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)))) 
             | (((0x23U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                 || (0x1023U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                || (0x2023U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))))) {
            if ((1U & (~ ((((((((((((0x13U == (0x707fU 
                                               & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                                    || (0x7013U == 
                                        (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                                   || (0x2013U == (0x707fU 
                                                   & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                                  || (0x3013U == (0x707fU 
                                                  & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                                 || (0x6013U == (0x707fU 
                                                 & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                                || (0x4013U == (0x707fU 
                                                & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                               || (0x1073U == (0x707fU 
                                               & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                              || (0x2073U == (0x707fU 
                                              & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                             || (0x3073U == (0x707fU 
                                             & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                            || (0x5073U == (0x707fU 
                                            & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                           || (0x6073U == (0x707fU 
                                           & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                          || (0x7073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)))))) {
                if ((1U & (~ (((0x1013U == (0xfc00707fU 
                                            & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                               || (0x5013U == (0xfc00707fU 
                                               & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                              || (0x40005013U == (0xfc00707fU 
                                                  & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)))))) {
                    if ((0x37U != (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                        if ((0x17U != (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                            if ((0x6fU == (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                                if ((1U == (0x1fU & 
                                            (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                             >> 7U)))) {
                                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x63616c6cU;
                                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x63616c6cU;
                                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
                                }
                            } else if ((0x67U == (0x707fU 
                                                  & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                                if ((IData)(((0x8000U 
                                              == (0xf8000U 
                                                  & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                                             & (0U 
                                                == 
                                                (((- (IData)(
                                                             (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                                    >> 0x14U)))))) {
                                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x726574U;
                                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0U;
                                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x726574U;
                                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0U;
                                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
                                } else if ((1U == (0x1fU 
                                                   & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                                      >> 7U)))) {
                                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[0U] = 0x20285229U;
                                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[1U] = 0x63616c6cU;
                                    vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str[2U] = 0U;
                                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[0U] = 0x20285229U;
                                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[1U] = 0x63616c6cU;
                                    vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str[2U] = 0U;
                                }
                            }
                            if ((0x6fU != (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                                if ((0x67U != (0x707fU 
                                               & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                                    if ((1U & (~ ((
                                                   ((((3U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                                                      || (0x1003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                                                     || (0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                                                    || (0x4003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                                                   || (0x5003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                                                  || (0x6003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)))))) {
                                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[0U] = 0x2dU;
                                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[1U] = 0U;
                                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd[2U] = 0U;
                                        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rd[0U] = 0x2dU;
                                        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rd[1U] = 0U;
                                        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rd[2U] = 0U;
                                    }
                                }
                            }
                        }
                    }
                    if ((0x37U == (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[2U] = 0U;
                        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra[2U] = 0U;
                    } else if ((0x17U == (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[0U] = 0x7063U;
                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[2U] = 0U;
                        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra[0U] = 0x7063U;
                        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra[2U] = 0U;
                    } else if ((0x6fU == (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra[2U] = 0U;
                        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra[2U] = 0U;
                    }
                }
            }
            if (((((((((((((0x13U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                           || (0x7013U == (0x707fU 
                                           & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                          || (0x2013U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                         || (0x3013U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                        || (0x6013U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                       || (0x4013U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                      || (0x1073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                     || (0x2073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                    || (0x3073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                   || (0x5073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                  || (0x6073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                 || (0x7073U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                          >> 0x14U));
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                          >> 0x14U));
            } else if ((((0x1013U == (0xfc00707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                         || (0x5013U == (0xfc00707fU 
                                         & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                        || (0x40005013U == (0xfc00707fU 
                                            & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm 
                    = (0x1fU & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                >> 0x14U));
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_imm 
                    = (0x1fU & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                >> 0x14U));
            } else if ((0x37U == (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm 
                    = (0xfffff000U & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q);
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_imm 
                    = (0xfffff000U & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q);
            } else if ((0x17U == (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm 
                    = (0xfffff000U & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q);
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_imm 
                    = (0xfffff000U & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q);
            } else if ((0x6fU == (0x7fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm 
                    = (vlSelfRef.__PVT__u_pipe_ctrl__DOT__pc_wb_q 
                       + (((- (IData)((vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                       >> 0x1fU))) 
                           << 0x14U) | (((0xff000U 
                                          & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q) 
                                         | (0x800U 
                                            & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                               >> 9U))) 
                                        | ((0x7e0U 
                                            & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                                 >> 0x14U))))));
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_imm 
                    = (vlSelfRef.__PVT__u_pipe_ctrl__DOT__pc_wb_q 
                       + (((- (IData)((vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                       >> 0x1fU))) 
                           << 0x14U) | (((0xff000U 
                                          & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q) 
                                         | (0x800U 
                                            & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                               >> 9U))) 
                                        | ((0x7e0U 
                                            & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                                 >> 0x14U))))));
            } else if ((0x67U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                          >> 0x14U));
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                          >> 0x14U));
            } else if (((((((3U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                            || (0x1003U == (0x707fU 
                                            & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                           || (0x2003U == (0x707fU 
                                           & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                          || (0x4003U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                         || (0x5003U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                        || (0x6003U == (0x707fU & vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)))) {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                          >> 0x14U));
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                          >> 0x14U));
            } else {
                vlSelfRef.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                                      >> 7U))));
                vlSelfRef.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_imm 
                    = (((- (IData)((vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                                      >> 7U))));
            }
        }
    }
    vlSelfRef.__PVT__pipe_rd_wb_w = (0x1fU & ((- (IData)(
                                                         ((IData)(vlSelfRef.__PVT__pipe_valid_wb_w) 
                                                          & ((~ (IData)(vlSelfRef.__PVT__stall_w)) 
                                                             & ((IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_wb_q) 
                                                                >> 7U))))) 
                                              & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                                 >> 7U)));
    vlSelfRef.__PVT__pipe_rd_e2_w = (0x1fU & ((- (IData)(
                                                         ((IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__valid_e2_w) 
                                                          & ((~ (IData)(vlSelfRef.__PVT__stall_w)) 
                                                             & ((IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e2_q) 
                                                                >> 7U))))) 
                                              & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_e2_q 
                                                 >> 7U)));
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__result_e2_r 
        = vlSelfRef.__PVT__u_pipe_ctrl__DOT__result_e2_q;
    if (((IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__valid_e2_w) 
         & (IData)((0U != (6U & (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e2_q)))))) {
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__result_e2_r 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__wb_result_r;
    } else if (((IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__valid_e2_w) 
                & ((IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e2_q) 
                   >> 5U))) {
        vlSelfRef.__PVT__u_pipe_ctrl__DOT__result_e2_r 
            = vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_mul__DOT__result_e2_q;
    }
    vlSelfRef.__PVT__issue_rb_value_r = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__rb0_value_r;
    if (((IData)(vlSelfRef.__PVT__pipe_rd_wb_w) == 
         (0x1fU & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                   >> 0x14U)))) {
        vlSelfRef.__PVT__issue_rb_value_r = vlSelfRef.__PVT__u_pipe_ctrl__DOT__result_wb_q;
    }
    if (((IData)(vlSelfRef.__PVT__pipe_rd_e2_w) == 
         (0x1fU & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                   >> 0x14U)))) {
        vlSelfRef.__PVT__issue_rb_value_r = vlSelfRef.__PVT__u_pipe_ctrl__DOT__result_e2_r;
    }
    if (((IData)(vlSelfRef.__PVT__pipe_rd_e1_w) == 
         (0x1fU & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                   >> 0x14U)))) {
        vlSelfRef.__PVT__issue_rb_value_r = vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__result_q;
    }
    if ((0U == (0x1fU & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                         >> 0x14U)))) {
        vlSelfRef.__PVT__issue_rb_value_r = 0U;
    }
    vlSelfRef.__PVT__issue_ra_value_r = vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__ra0_value_r;
    if (((IData)(vlSelfRef.__PVT__pipe_rd_wb_w) == 
         (0x1fU & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                   >> 0xfU)))) {
        vlSelfRef.__PVT__issue_ra_value_r = vlSelfRef.__PVT__u_pipe_ctrl__DOT__result_wb_q;
    }
    if (((IData)(vlSelfRef.__PVT__pipe_rd_e2_w) == 
         (0x1fU & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                   >> 0xfU)))) {
        vlSelfRef.__PVT__issue_ra_value_r = vlSelfRef.__PVT__u_pipe_ctrl__DOT__result_e2_r;
    }
    if (((IData)(vlSelfRef.__PVT__pipe_rd_e1_w) == 
         (0x1fU & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                   >> 0xfU)))) {
        vlSelfRef.__PVT__issue_ra_value_r = vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__result_q;
    }
    if ((0U == (0x1fU & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                         >> 0xfU)))) {
        vlSelfRef.__PVT__issue_ra_value_r = 0U;
    }
}
