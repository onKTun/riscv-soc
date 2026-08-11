// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top_tb.h for the primary calling header

#include "Vriscv_top_tb__pch.h"
#include "Vriscv_top_tb_riscv_top_tb.h"

VL_INLINE_OPT void Vriscv_top_tb_riscv_top_tb___act_comb__TOP__riscv_top_tb__0(Vriscv_top_tb_riscv_top_tb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_top_tb_riscv_top_tb___act_comb__TOP__riscv_top_tb__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_rdata = ((0x400U > (vlSelfRef.__PVT__i_memory__DOT__read_addr 
                                           >> 2U)) ? 
                                vlSelfRef.__PVT__i_memory__DOT__mem
                                [(0x3ffU & (vlSelfRef.__PVT__i_memory__DOT__read_addr 
                                            >> 2U))]
                                 : 0U);
}
