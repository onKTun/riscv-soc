// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top_tb.h for the primary calling header

#include "Vriscv_top_tb__pch.h"
#include "Vriscv_top_tb__Syms.h"
#include "Vriscv_top_tb_dcache.h"

VL_ATTR_COLD void Vriscv_top_tb_dcache___stl_sequent__TOP__riscv_top_tb__dut__u_dcache__0(Vriscv_top_tb_dcache* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_tb_dcache___stl_sequent__TOP__riscv_top_tb__dut__u_dcache__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ u_axi__DOT__u_axi__DOT____VdfgRegularize_he156c47b_0_2;
    u_axi__DOT__u_axi__DOT____VdfgRegularize_he156c47b_0_2 = 0;
    // Body
    vlSelfRef.__PVT__u_uncached__DOT__req_accept_w 
        = (2U != (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__count_q));
    vlSelfRef.__PVT__u_uncached__DOT__res_accept_w 
        = (2U != (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__count_q));
    vlSelfRef.__PVT__u_uncached__DOT__req_valid_w = 
        (0U != (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__count_q));
    vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__valid_o 
        = (0U != (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__count_q));
    vlSelfRef.__PVT__u_axi__DOT__res_accept_w = (2U 
                                                 != (IData)(vlSelfRef.__PVT__u_axi__DOT__resp_outstanding_q));
    vlSelfRef.__PVT__u_axi__DOT__res_valid_w = (0U 
                                                != (IData)(vlSelfRef.__PVT__u_axi__DOT__resp_outstanding_q));
    vlSelfRef.__PVT__u_axi__DOT__req_accept_w = (2U 
                                                 != (IData)(vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__count_q));
    vlSelfRef.__PVT__u_axi__DOT__req_valid_w = (0U 
                                                != (IData)(vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__count_q));
    vlSelfRef.__PVT__u_axi__DOT__req_len_w = (0xffU 
                                              & (vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__ram_q
                                                 [vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q][2U] 
                                                 >> 5U));
    vlSelfRef.u_uncached__DOT____VdfgRegularize_hf17169b5_1_0 
        = (1U & (vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                 [vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][2U] 
                 >> 4U));
    vlSelfRef.__PVT__pmem_select_w = ((0U != (IData)(vlSelfRef.__PVT__u_mux__DOT__pending_q))
                                       ? (IData)(vlSelfRef.__PVT__u_mux__DOT__cache_access_q)
                                       : (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_cacheable_q));
    vlSelfRef.u_axi__DOT____VdfgRegularize_h8a1a94ad_3_0 
        = (1U & (vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__ram_q
                 [vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q][2U] 
                 >> 4U));
    vlSelfRef.__PVT__u_axi__DOT__req_can_issue_w = 
        ((0U != (IData)(vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__count_q)) 
         & (2U != (IData)(vlSelfRef.__PVT__u_axi__DOT__resp_outstanding_q)));
    vlSelfRef.__PVT__u_mux__DOT__hold_w = ((0U != (IData)(vlSelfRef.__PVT__u_mux__DOT__pending_q)) 
                                           & ((IData)(vlSelfRef.__PVT__u_mux__DOT__cache_access_q) 
                                              != (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_cacheable_q)));
    vlSelfRef.__PVT__mem_error_o = ((IData)(vlSelfRef.__PVT__u_mux__DOT__cache_access_q) 
                                    && (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__error_q));
    vlSelfRef.__PVT__pmem_ack_w = ((IData)(vlSymsp->TOP__riscv_top_tb__d_memory.__PVT__bvalid_o) 
                                   | (IData)(vlSymsp->TOP__riscv_top_tb__d_memory.__PVT__read_active));
    vlSelfRef.__PVT__u_axi__DOT__resp_pop_w = ((IData)(vlSymsp->TOP__riscv_top_tb__d_memory.__PVT__bvalid_o) 
                                               | ((IData)(vlSymsp->TOP__riscv_top_tb__d_memory.__PVT__rlast_o) 
                                                  & (IData)(vlSymsp->TOP__riscv_top_tb__d_memory.__PVT__read_active)));
    vlSelfRef.__PVT__pmem_cache_accept_w = ((2U != (IData)(vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__count_q)) 
                                            & (IData)(vlSelfRef.__PVT__pmem_select_w));
    vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__inport_valid_w 
        = ((IData)(vlSelfRef.__PVT__u_axi__DOT__req_can_issue_w) 
           | (IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__valid_q));
    vlSelfRef.__PVT__u_axi__DOT__req_is_write_w = (
                                                   (~ (IData)(vlSelfRef.u_axi__DOT____VdfgRegularize_h8a1a94ad_3_0)) 
                                                   & (IData)(vlSelfRef.__PVT__u_axi__DOT__req_can_issue_w));
    if (vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__valid_q) {
        vlSelfRef.__PVT__axi_awid_o = (0xfU & (vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_q[1U] 
                                               >> 1U));
        vlSelfRef.__PVT__axi_awburst_o = (3U & (vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_q[1U] 
                                                >> 0xdU));
        vlSelfRef.__PVT__axi_wdata_o = ((vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_q[2U] 
                                         << 0x11U) 
                                        | (vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_q[1U] 
                                           >> 0xfU));
        vlSelfRef.__PVT__axi_wstrb_o = (0xfU & ((vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_q[2U] 
                                                 << 0x11U) 
                                                | (vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_q[2U] 
                                                   >> 0xfU)));
        vlSelfRef.__PVT__axi_awaddr_o = ((vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_q[1U] 
                                          << 0x1fU) 
                                         | (vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_q[0U] 
                                            >> 1U));
        vlSelfRef.__PVT__axi_awlen_o = (0xffU & ((vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_q[1U] 
                                                  << 0x1bU) 
                                                 | (vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_q[1U] 
                                                    >> 5U)));
        vlSelfRef.__PVT__axi_wlast_o = (1U & (vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_q[2U] 
                                              >> 0x13U));
        vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__inport_write_w 
            = (1U & vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_q[0U]);
    } else {
        vlSelfRef.__PVT__axi_awid_o = 0U;
        vlSelfRef.__PVT__axi_awburst_o = 1U;
        vlSelfRef.__PVT__axi_wdata_o = vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__ram_q
            [vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q][1U];
        vlSelfRef.__PVT__axi_wstrb_o = (0xfU & vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__ram_q
                                        [vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q][2U]);
        vlSelfRef.__PVT__axi_awaddr_o = (0xfffffffcU 
                                         & vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__ram_q
                                         [vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q][0U]);
        vlSelfRef.__PVT__axi_awlen_o = (0xffU & (IData)(vlSelfRef.__PVT__u_axi__DOT__req_len_w));
        vlSelfRef.__PVT__axi_wlast_o = (1U & (((0U 
                                                == (IData)(vlSelfRef.__PVT__u_axi__DOT__req_len_w)) 
                                               & (0U 
                                                  == (IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__req_cnt_q))) 
                                              | (1U 
                                                 == (IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__req_cnt_q))));
        vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__inport_write_w 
            = (1U & (IData)(vlSelfRef.__PVT__u_axi__DOT__req_is_write_w));
    }
    vlSelfRef.u_mux__DOT____VdfgRegularize_ha7b7af01_2_1 
        = (1U & ((~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_cacheable_q)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_mux__DOT__hold_w))));
    vlSelfRef.u_mux__DOT____VdfgRegularize_ha7b7af01_2_4 
        = ((~ (IData)(vlSelfRef.__PVT__u_mux__DOT__hold_w)) 
           & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_cacheable_q));
    vlSelfRef.__PVT__pmem_cache_ack_w = ((IData)(vlSelfRef.__PVT__pmem_ack_w) 
                                         & (IData)(vlSelfRef.__PVT__u_pmem_mux__DOT__select_q));
    vlSelfRef.__PVT__mem_uncached_ack_w = ((IData)(vlSelfRef.__PVT__u_uncached__DOT__dropped_q) 
                                           | ((~ (IData)(vlSelfRef.__PVT__u_pmem_mux__DOT__select_q)) 
                                              & (IData)(vlSelfRef.__PVT__pmem_ack_w)));
    vlSelfRef.__PVT__u_uncached__DOT__drop_req_w = 
        ((IData)(vlSelfRef.u_mux__DOT____VdfgRegularize_ha7b7af01_2_1) 
         & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_invalidate_q) 
            | ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_flush_q) 
               | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_writeback_q))));
    vlSelfRef.__PVT__mem_cached_invalidate_w = ((IData)(vlSelfRef.u_mux__DOT____VdfgRegularize_ha7b7af01_2_4) 
                                                & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_invalidate_q));
    vlSelfRef.__PVT__mem_cached_writeback_w = ((IData)(vlSelfRef.u_mux__DOT____VdfgRegularize_ha7b7af01_2_4) 
                                               & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_writeback_q));
    vlSelfRef.__PVT__mem_cached_flush_w = ((IData)(vlSelfRef.u_mux__DOT____VdfgRegularize_ha7b7af01_2_4) 
                                           & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_flush_q));
    vlSelfRef.u_uncached__DOT____VdfgRegularize_hf17169b5_1_1 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__mem_uncached_ack_w)) 
               & (IData)(vlSelfRef.__PVT__u_uncached__DOT__request_pending_q))) 
           & (0U != (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__count_q)));
    vlSelfRef.__PVT__axi_arvalid_o = ((~ (IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__inport_write_w)) 
                                      & (IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__inport_valid_w));
    u_axi__DOT__u_axi__DOT____VdfgRegularize_he156c47b_0_2 
        = ((IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__inport_valid_w) 
           & (IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__inport_write_w));
    vlSelfRef.__PVT__u_uncached__DOT__req_is_drop_w 
        = ((IData)(vlSelfRef.u_uncached__DOT____VdfgRegularize_hf17169b5_1_1) 
           & (vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__ram_q
              [vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][2U] 
              >> 5U));
    vlSelfRef.__PVT__pmem_uncached_rd_w = ((IData)(vlSelfRef.u_uncached__DOT____VdfgRegularize_hf17169b5_1_1) 
                                           & (IData)(vlSelfRef.u_uncached__DOT____VdfgRegularize_hf17169b5_1_0));
    vlSelfRef.__PVT__pmem_uncached_wr_w = (((~ (IData)(vlSelfRef.u_uncached__DOT____VdfgRegularize_hf17169b5_1_0)) 
                                            & (IData)(vlSelfRef.u_uncached__DOT____VdfgRegularize_hf17169b5_1_1))
                                            ? (0xfU 
                                               & vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                                               [vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][2U])
                                            : 0U);
    vlSelfRef.__PVT__axi_wvalid_o = ((~ (IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__wvalid_q)) 
                                     & (IData)(u_axi__DOT__u_axi__DOT____VdfgRegularize_he156c47b_0_2));
    vlSelfRef.__PVT__axi_awvalid_o = ((~ (IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__awvalid_q)) 
                                      & (IData)(u_axi__DOT__u_axi__DOT____VdfgRegularize_he156c47b_0_2));
    vlSelfRef.__PVT__u_uncached__DOT__request_complete_w 
        = ((IData)(vlSelfRef.__PVT__u_uncached__DOT__req_is_drop_w) 
           | (((IData)(vlSelfRef.__PVT__pmem_uncached_rd_w) 
               | (0U != (IData)(vlSelfRef.__PVT__pmem_uncached_wr_w))) 
              & ((~ (IData)(vlSelfRef.__PVT__pmem_select_w)) 
                 & (2U != (IData)(vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__count_q)))));
    vlSelfRef.u_axi__DOT__u_axi__DOT____VdfgRegularize_he156c47b_0_0 
        = ((IData)(vlSelfRef.__PVT__axi_awvalid_o) 
           & (IData)(vlSymsp->TOP__riscv_top_tb__d_memory.__PVT__awready_o));
    vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__wr_cmd_accepted_w 
        = ((IData)(vlSelfRef.u_axi__DOT__u_axi__DOT____VdfgRegularize_he156c47b_0_0) 
           | (IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__awvalid_q));
}

VL_ATTR_COLD void Vriscv_top_tb_dcache___stl_sequent__TOP__riscv_top_tb__dut__u_dcache__1(Vriscv_top_tb_dcache* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_tb_dcache___stl_sequent__TOP__riscv_top_tb__dut__u_dcache__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ u_axi__DOT__u_axi__DOT____VdfgRegularize_he156c47b_0_1;
    u_axi__DOT__u_axi__DOT____VdfgRegularize_he156c47b_0_1 = 0;
    // Body
    vlSelfRef.__PVT__mem_ack_o = ((IData)(vlSelfRef.__PVT__u_mux__DOT__cache_access_q)
                                   ? (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__mem_ack_r)
                                   : (IData)(vlSelfRef.__PVT__mem_uncached_ack_w));
    vlSelfRef.__PVT__u_pmem_mux__DOT__outport_wr_r 
        = ((IData)(vlSelfRef.__PVT__pmem_select_w) ? (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__pmem_wr_w)
            : (IData)(vlSelfRef.__PVT__pmem_uncached_wr_w));
    u_axi__DOT__u_axi__DOT____VdfgRegularize_he156c47b_0_1 
        = ((IData)(vlSelfRef.__PVT__axi_wvalid_o) & (IData)(vlSymsp->TOP__riscv_top_tb__d_memory.__PVT__wready_o));
    vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__wr_data_accepted_w 
        = ((IData)(u_axi__DOT__u_axi__DOT____VdfgRegularize_he156c47b_0_1) 
           | (IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__wvalid_q));
    vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__wr_data_last_w 
        = (((IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__wlast_q) 
            & (IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__wvalid_q)) 
           | ((IData)(u_axi__DOT__u_axi__DOT____VdfgRegularize_he156c47b_0_1) 
              & (IData)(vlSelfRef.__PVT__axi_wlast_o)));
    vlSelfRef.__PVT__u_axi__DOT__accept_w = ((~ (IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__valid_q)) 
                                             & ((IData)(vlSelfRef.u_axi__DOT__u_axi__DOT____VdfgRegularize_he156c47b_0_0) 
                                                | ((IData)(u_axi__DOT__u_axi__DOT____VdfgRegularize_he156c47b_0_1) 
                                                   | ((IData)(vlSelfRef.__PVT__axi_arvalid_o) 
                                                      & (~ (IData)(vlSymsp->TOP__riscv_top_tb__d_memory.__PVT__read_active))))));
    vlSelfRef.__PVT__u_axi__DOT__res_push_w = ((((IData)(vlSelfRef.__PVT__u_axi__DOT__req_is_write_w) 
                                                 & ((0U 
                                                     == (IData)(vlSelfRef.__PVT__u_axi__DOT__req_len_w)) 
                                                    & (0U 
                                                       == (IData)(vlSelfRef.__PVT__u_axi__DOT__req_cnt_q)))) 
                                                | ((IData)(vlSelfRef.__PVT__u_axi__DOT__req_can_issue_w) 
                                                   & (IData)(vlSelfRef.u_axi__DOT____VdfgRegularize_h8a1a94ad_3_0))) 
                                               & (IData)(vlSelfRef.__PVT__u_axi__DOT__accept_w));
}
