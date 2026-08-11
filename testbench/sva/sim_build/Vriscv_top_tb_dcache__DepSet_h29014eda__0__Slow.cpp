// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top_tb.h for the primary calling header

#include "Vriscv_top_tb__pch.h"
#include "Vriscv_top_tb_dcache.h"

VL_ATTR_COLD void Vriscv_top_tb_dcache___ctor_var_reset(Vriscv_top_tb_dcache* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_tb_dcache___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_addr_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_data_wr_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_rd_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_wr_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__mem_cacheable_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_req_tag_i = VL_RAND_RESET_I(11);
    vlSelf->__PVT__mem_invalidate_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_writeback_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_flush_i = VL_RAND_RESET_I(1);
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
    vlSelf->__PVT__mem_data_rd_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_accept_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_ack_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_error_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_resp_tag_o = VL_RAND_RESET_I(11);
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
    vlSelf->__PVT__pmem_cache_accept_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_cached_invalidate_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pmem_cache_ack_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_uncached_ack_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pmem_ack_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pmem_uncached_wr_w = VL_RAND_RESET_I(4);
    vlSelf->__PVT__mem_cached_rd_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pmem_select_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_cached_flush_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_uncached_wr_w = VL_RAND_RESET_I(4);
    vlSelf->__PVT__mem_uncached_rd_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pmem_uncached_rd_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_cached_writeback_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_uncached__DOT__res_accept_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_uncached__DOT__req_accept_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_uncached__DOT__request_complete_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_uncached__DOT__req_valid_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_uncached__DOT__drop_req_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_uncached__DOT__request_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_uncached__DOT__req_push_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_uncached__DOT__res_push_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_uncached__DOT__request_pending_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_uncached__DOT__req_is_drop_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_uncached__DOT__dropped_q = VL_RAND_RESET_I(1);
    vlSelf->u_uncached__DOT____VdfgRegularize_hf17169b5_1_0 = VL_RAND_RESET_I(1);
    vlSelf->u_uncached__DOT____VdfgRegularize_hf17169b5_1_1 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(70, vlSelf->__PVT__u_uncached__DOT__u_req__DOT__ram_q[__Vi0]);
    }
    vlSelf->__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_uncached__DOT__u_req__DOT__wr_ptr_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_uncached__DOT__u_req__DOT__count_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_uncached__DOT__u_resp__DOT__valid_o = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__u_uncached__DOT__u_resp__DOT__ram_q[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__PVT__u_uncached__DOT__u_resp__DOT__rd_ptr_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_uncached__DOT__u_resp__DOT__wr_ptr_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_uncached__DOT__u_resp__DOT__count_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_pmem_mux__DOT__outport_wr_r = VL_RAND_RESET_I(4);
    vlSelf->__PVT__u_pmem_mux__DOT__outport_rd_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_pmem_mux__DOT__select_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_mux__DOT__hold_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_mux__DOT__cache_access_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_mux__DOT__request_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_mux__DOT__pending_r = VL_RAND_RESET_I(5);
    vlSelf->__PVT__u_mux__DOT__pending_q = VL_RAND_RESET_I(5);
    vlSelf->u_mux__DOT____VdfgRegularize_ha7b7af01_2_1 = VL_RAND_RESET_I(1);
    vlSelf->u_mux__DOT____VdfgRegularize_ha7b7af01_2_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_axi__DOT__accept_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_axi__DOT__res_accept_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_axi__DOT__req_accept_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_axi__DOT__res_valid_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_axi__DOT__req_valid_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_axi__DOT__req_push_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_axi__DOT__req_can_issue_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_axi__DOT__req_is_write_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_axi__DOT__req_len_w = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u_axi__DOT__req_cnt_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u_axi__DOT__res_push_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_axi__DOT__resp_pop_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_axi__DOT__resp_outstanding_q = VL_RAND_RESET_I(2);
    vlSelf->u_axi__DOT____VdfgRegularize_h8a1a94ad_3_0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(77, vlSelf->__PVT__u_axi__DOT__u_req__DOT__ram_q[__Vi0]);
    }
    vlSelf->__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_axi__DOT__u_req__DOT__wr_ptr_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_axi__DOT__u_req__DOT__count_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_axi__DOT__u_axi__DOT__req_cnt_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u_axi__DOT__u_axi__DOT__valid_q = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(84, vlSelf->__PVT__u_axi__DOT__u_axi__DOT__buf_q);
    vlSelf->__PVT__u_axi__DOT__u_axi__DOT__inport_valid_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_axi__DOT__u_axi__DOT__inport_write_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_axi__DOT__u_axi__DOT__awvalid_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_axi__DOT__u_axi__DOT__wvalid_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_axi__DOT__u_axi__DOT__wlast_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_axi__DOT__u_axi__DOT__wr_cmd_accepted_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_axi__DOT__u_axi__DOT__wr_data_accepted_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_axi__DOT__u_axi__DOT__wr_data_last_w = VL_RAND_RESET_I(1);
    vlSelf->u_axi__DOT__u_axi__DOT____VdfgRegularize_he156c47b_0_0 = VL_RAND_RESET_I(1);
}

VL_ATTR_COLD void Vriscv_top_tb_dcache___configure_coverage(Vriscv_top_tb_dcache* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_tb_dcache___configure_coverage\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
