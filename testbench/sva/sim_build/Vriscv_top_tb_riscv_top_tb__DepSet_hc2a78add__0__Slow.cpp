// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top_tb.h for the primary calling header

#include "Vriscv_top_tb__pch.h"
#include "Vriscv_top_tb__Syms.h"
#include "Vriscv_top_tb_riscv_top_tb.h"

VL_ATTR_COLD void Vriscv_top_tb_riscv_top_tb___stl_sequent__TOP__riscv_top_tb__1(Vriscv_top_tb_riscv_top_tb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_top_tb_riscv_top_tb___stl_sequent__TOP__riscv_top_tb__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__d_memory__DOT__active_write_addr 
        = ((IData)(vlSelfRef.__PVT__d_memory__DOT__write_active)
            ? vlSelfRef.__PVT__d_memory__DOT__write_addr
            : vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_awaddr_o);
    vlSelfRef.__PVT__d_wready = ((IData)(vlSelfRef.__PVT__d_memory__DOT__write_active) 
                                 | ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_awvalid_o) 
                                    & (IData)(vlSelfRef.__PVT__d_awready)));
}
