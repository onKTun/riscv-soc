// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_muldiv_csr_tb.h for the primary calling header

#include "Vriscv_muldiv_csr_tb__pch.h"
#include "Vriscv_muldiv_csr_tb__Syms.h"
#include "Vriscv_muldiv_csr_tb_riscv_csr__SB0.h"

VL_ATTR_COLD void Vriscv_muldiv_csr_tb_riscv_csr__SB0___stl_sequent__TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__0(Vriscv_muldiv_csr_tb_riscv_csr__SB0* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_muldiv_csr_tb_riscv_csr__SB0___stl_sequent__TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__branch_csr_priv_o = ((vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_satp_q 
                                           >> 0x1fU)
                                           ? (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mpriv_q)
                                           : 3U);
    vlSelfRef.__Vcellinp__u_csrfile__csr_waddr_i = 
        ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wr_wb_q)
          ? (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
             >> 0x14U) : 0U);
}
