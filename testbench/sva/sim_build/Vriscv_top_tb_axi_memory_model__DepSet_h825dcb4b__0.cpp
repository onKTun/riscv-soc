// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top_tb.h for the primary calling header

#include "Vriscv_top_tb__pch.h"
#include "Vriscv_top_tb_axi_memory_model.h"

VL_INLINE_OPT void Vriscv_top_tb_axi_memory_model___eval_initial__TOP__riscv_top_tb__i_memory(Vriscv_top_tb_axi_memory_model* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_tb_axi_memory_model___eval_initial__TOP__riscv_top_tb__i_memory\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i = 0U;
    while (VL_GTS_III(32, 0x400U, vlSelfRef.__PVT__i)) {
        vlSelfRef.mem[(0x3ffU & vlSelfRef.__PVT__i)] = 0x13U;
        vlSelfRef.__PVT__i = ((IData)(1U) + vlSelfRef.__PVT__i);
    }
}

VL_INLINE_OPT void Vriscv_top_tb_axi_memory_model___ico_sequent__TOP__riscv_top_tb__i_memory__0(Vriscv_top_tb_axi_memory_model* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_tb_axi_memory_model___ico_sequent__TOP__riscv_top_tb__i_memory__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rdata_o = ((0x400U > (vlSelfRef.__PVT__read_addr 
                                           >> 2U)) ? 
                                vlSelfRef.mem[(0x3ffU 
                                               & (vlSelfRef.__PVT__read_addr 
                                                  >> 2U))]
                                 : 0U);
}
