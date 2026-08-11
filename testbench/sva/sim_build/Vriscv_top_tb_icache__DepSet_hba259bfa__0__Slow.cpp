// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top_tb.h for the primary calling header

#include "Vriscv_top_tb__pch.h"
#include "Vriscv_top_tb_icache.h"

VL_ATTR_COLD void Vriscv_top_tb_icache___ctor_var_reset(Vriscv_top_tb_icache* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_tb_icache___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req_rd_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req_flush_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req_invalidate_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req_pc_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_awready_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_wready_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_bvalid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_bresp_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_bid_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_arready_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_rvalid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_rresp_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_rid_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_rlast_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req_accept_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req_error_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req_inst_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_awvalid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_awaddr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_awid_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_awlen_o = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_awburst_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_wvalid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_wstrb_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_wlast_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_bready_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_arvalid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_araddr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_arid_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_arlen_o = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_arburst_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_rready_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__next_state_r = VL_RAND_RESET_I(2);
    vlSelf->__PVT__state_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__flush_addr_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__invalidate_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replace_way_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lookup_valid_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lookup_addr_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__tag_addr_r = VL_RAND_RESET_I(8);
    vlSelf->__PVT__tag_data_in_r = VL_RAND_RESET_I(20);
    vlSelf->__PVT__tag0_write_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tag0_hit_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tag1_write_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tag1_hit_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tag_hit_any_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_addr_r = VL_RAND_RESET_I(11);
    vlSelf->__PVT__data_write_addr_q = VL_RAND_RESET_I(11);
    vlSelf->__PVT__inst_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_arvalid_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_error_q = VL_RAND_RESET_I(1);
}

VL_ATTR_COLD void Vriscv_top_tb_icache___configure_coverage(Vriscv_top_tb_icache* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_tb_icache___configure_coverage\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
