// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_muldiv_csr_tb.h for the primary calling header

#include "Vriscv_muldiv_csr_tb__pch.h"
#include "Vriscv_muldiv_csr_tb_axi_memory_model__R80000104.h"

VL_ATTR_COLD void Vriscv_muldiv_csr_tb_axi_memory_model__R80000104___stl_sequent__TOP__riscv_muldiv_csr_tb__d_memory__0(Vriscv_muldiv_csr_tb_axi_memory_model__R80000104* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_muldiv_csr_tb_axi_memory_model__R80000104___stl_sequent__TOP__riscv_muldiv_csr_tb__d_memory__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__arready_o = (1U & (~ (IData)(vlSelfRef.__PVT__read_active)));
    vlSelfRef.__PVT__rvalid_o = vlSelfRef.__PVT__read_active;
    vlSelfRef.__PVT__awready_o = (1U & ((~ (IData)(vlSelfRef.__PVT__write_active)) 
                                        & (~ (IData)(vlSelfRef.__PVT__bvalid_o))));
    vlSelfRef.__PVT__rdata_o = ((0x400U > (vlSelfRef.__PVT__read_addr 
                                           >> 2U)) ? 
                                vlSelfRef.mem[(0x3ffU 
                                               & (vlSelfRef.__PVT__read_addr 
                                                  >> 2U))]
                                 : 0U);
}

VL_ATTR_COLD void Vriscv_muldiv_csr_tb_axi_memory_model__R80000104___ctor_var_reset(Vriscv_muldiv_csr_tb_axi_memory_model__R80000104* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_muldiv_csr_tb_axi_memory_model__R80000104___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__awvalid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__awaddr_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__awid_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__awlen_i = VL_RAND_RESET_I(8);
    vlSelf->__PVT__awready_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wvalid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wdata_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__wstrb_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__wlast_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wready_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bvalid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bresp_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__bid_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__bready_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__arvalid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__araddr_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__arid_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__arlen_i = VL_RAND_RESET_I(8);
    vlSelf->__PVT__arready_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rresp_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__rid_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__rlast_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rready_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__result_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__result_data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__read_bursts_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__write_words_o = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__read_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__read_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__read_left = VL_RAND_RESET_I(8);
    vlSelf->__PVT__read_id = VL_RAND_RESET_I(4);
    vlSelf->__PVT__write_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__write_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__write_id = VL_RAND_RESET_I(4);
    vlSelf->__PVT__active_write_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__i = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__read_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__read_left = VL_RAND_RESET_I(8);
}

VL_ATTR_COLD void Vriscv_muldiv_csr_tb_axi_memory_model__R80000104___configure_coverage(Vriscv_muldiv_csr_tb_axi_memory_model__R80000104* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_muldiv_csr_tb_axi_memory_model__R80000104___configure_coverage\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
