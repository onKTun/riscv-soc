// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_muldiv_csr_tb.h for the primary calling header

#include "Vriscv_muldiv_csr_tb__pch.h"
#include "Vriscv_muldiv_csr_tb__Syms.h"
#include "Vriscv_muldiv_csr_tb_axi_memory_model__R80000104.h"

VL_ATTR_COLD void Vriscv_muldiv_csr_tb_axi_memory_model__R80000104___stl_sequent__TOP__riscv_muldiv_csr_tb__d_memory__1(Vriscv_muldiv_csr_tb_axi_memory_model__R80000104* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_muldiv_csr_tb_axi_memory_model__R80000104___stl_sequent__TOP__riscv_muldiv_csr_tb__d_memory__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__active_write_addr = ((IData)(vlSelfRef.__PVT__write_active)
                                           ? vlSelfRef.__PVT__write_addr
                                           : vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__axi_awaddr_o);
    vlSelfRef.__PVT__wready_o = ((IData)(vlSelfRef.__PVT__write_active) 
                                 | ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__axi_awvalid_o) 
                                    & (IData)(vlSelfRef.__PVT__awready_o)));
}
