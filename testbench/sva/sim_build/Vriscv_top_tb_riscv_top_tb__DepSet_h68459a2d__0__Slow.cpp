// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top_tb.h for the primary calling header

#include "Vriscv_top_tb__pch.h"
#include "Vriscv_top_tb_riscv_top_tb.h"

VL_ATTR_COLD void Vriscv_top_tb_riscv_top_tb___eval_static__TOP__riscv_top_tb(Vriscv_top_tb_riscv_top_tb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_top_tb_riscv_top_tb___eval_static__TOP__riscv_top_tb\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__clk = 0U;
    vlSelfRef.__PVT__rst = 1U;
    vlSelfRef.__PVT__cycles = 0U;
}

VL_ATTR_COLD void Vriscv_top_tb_riscv_top_tb___eval_initial__TOP__riscv_top_tb(Vriscv_top_tb_riscv_top_tb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_top_tb_riscv_top_tb___eval_initial__TOP__riscv_top_tb\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_memory__DOT__i = 0U;
    while (VL_GTS_III(32, 0x400U, vlSelfRef.__PVT__i_memory__DOT__i)) {
        vlSelfRef.__PVT__i_memory__DOT__mem[(0x3ffU 
                                             & vlSelfRef.__PVT__i_memory__DOT__i)] = 0x13U;
        vlSelfRef.__PVT__i_memory__DOT__i = ((IData)(1U) 
                                             + vlSelfRef.__PVT__i_memory__DOT__i);
    }
    vlSelfRef.__PVT__d_memory__DOT__i = 0U;
    while (VL_GTS_III(32, 0x400U, vlSelfRef.__PVT__d_memory__DOT__i)) {
        vlSelfRef.__PVT__d_memory__DOT__mem[(0x3ffU 
                                             & vlSelfRef.__PVT__d_memory__DOT__i)] = 0x13U;
        vlSelfRef.__PVT__d_memory__DOT__i = ((IData)(1U) 
                                             + vlSelfRef.__PVT__d_memory__DOT__i);
    }
}

VL_ATTR_COLD void Vriscv_top_tb_riscv_top_tb___stl_sequent__TOP__riscv_top_tb__0(Vriscv_top_tb_riscv_top_tb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_top_tb_riscv_top_tb___stl_sequent__TOP__riscv_top_tb__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i_arready = (1U & (~ (IData)(vlSelfRef.__PVT__i_memory__DOT__read_active)));
    vlSelfRef.__PVT__i_rvalid = vlSelfRef.__PVT__i_memory__DOT__read_active;
    vlSelfRef.__PVT__d_arready = (1U & (~ (IData)(vlSelfRef.__PVT__d_memory__DOT__read_active)));
    vlSelfRef.__PVT__d_rvalid = vlSelfRef.__PVT__d_memory__DOT__read_active;
    vlSelfRef.__PVT__i_rdata = ((0x400U > (vlSelfRef.__PVT__i_memory__DOT__read_addr 
                                           >> 2U)) ? 
                                vlSelfRef.__PVT__i_memory__DOT__mem
                                [(0x3ffU & (vlSelfRef.__PVT__i_memory__DOT__read_addr 
                                            >> 2U))]
                                 : 0U);
    vlSelfRef.__PVT__d_rlast = ((IData)(vlSelfRef.__PVT__d_memory__DOT__read_active) 
                                & (0U == (IData)(vlSelfRef.__PVT__d_memory__DOT__read_left)));
    vlSelfRef.__PVT__i_rlast = ((IData)(vlSelfRef.__PVT__i_memory__DOT__read_active) 
                                & (0U == (IData)(vlSelfRef.__PVT__i_memory__DOT__read_left)));
    vlSelfRef.__PVT__d_awready = (1U & ((~ (IData)(vlSelfRef.__PVT__d_memory__DOT__write_active)) 
                                        & (~ (IData)(vlSelfRef.__PVT__d_bvalid))));
    vlSelfRef.__PVT__d_rdata = ((0x400U > (vlSelfRef.__PVT__d_memory__DOT__read_addr 
                                           >> 2U)) ? 
                                vlSelfRef.__PVT__d_memory__DOT__mem
                                [(0x3ffU & (vlSelfRef.__PVT__d_memory__DOT__read_addr 
                                            >> 2U))]
                                 : 0U);
}

VL_ATTR_COLD void Vriscv_top_tb_riscv_top_tb___ctor_var_reset(Vriscv_top_tb_riscv_top_tb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_top_tb_riscv_top_tb___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cycles = VL_RAND_RESET_I(32);
    vlSelf->__PVT__i_bvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_arready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_rvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_rlast = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__i_bid = VL_RAND_RESET_I(4);
    vlSelf->__PVT__d_awready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__d_wready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__d_bvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__d_arready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__d_rvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__d_rlast = VL_RAND_RESET_I(1);
    vlSelf->__PVT__d_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__d_bid = VL_RAND_RESET_I(4);
    vlSelf->__PVT__result_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__result_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__i_read_bursts = VL_RAND_RESET_I(32);
    vlSelf->__PVT__d_read_bursts = VL_RAND_RESET_I(32);
    vlSelf->__PVT__d_write_words = VL_RAND_RESET_I(32);
    vlSelf->__PVT__i_memory__DOT__result_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_memory__DOT__result_data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__i_memory__DOT__write_words_o = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->__PVT__i_memory__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__i_memory__DOT__read_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_memory__DOT__read_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__i_memory__DOT__read_left = VL_RAND_RESET_I(8);
    vlSelf->__PVT__i_memory__DOT__read_id = VL_RAND_RESET_I(4);
    vlSelf->__PVT__i_memory__DOT__write_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_memory__DOT__write_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__i_memory__DOT__write_id = VL_RAND_RESET_I(4);
    vlSelf->__PVT__i_memory__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->__PVT__d_memory__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__d_memory__DOT__read_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__d_memory__DOT__read_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__d_memory__DOT__read_left = VL_RAND_RESET_I(8);
    vlSelf->__PVT__d_memory__DOT__read_id = VL_RAND_RESET_I(4);
    vlSelf->__PVT__d_memory__DOT__write_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__d_memory__DOT__write_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__d_memory__DOT__write_id = VL_RAND_RESET_I(4);
    vlSelf->__PVT__d_memory__DOT__active_write_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__d_memory__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__i_memory__DOT__read_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__i_memory__DOT__read_left = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__d_memory__DOT__read_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__d_memory__DOT__read_left = VL_RAND_RESET_I(8);
}

VL_ATTR_COLD void Vriscv_top_tb_riscv_top_tb___configure_coverage(Vriscv_top_tb_riscv_top_tb* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_top_tb_riscv_top_tb___configure_coverage\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
