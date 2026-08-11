// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top_tb.h for the primary calling header

#include "Vriscv_top_tb__pch.h"
#include "Vriscv_top_tb_riscv_top__M0_MBffff.h"

VL_ATTR_COLD void Vriscv_top_tb_riscv_top__M0_MBffff___ctor_var_reset(Vriscv_top_tb_riscv_top__M0_MBffff* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_tb_riscv_top__M0_MBffff___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_i_awready_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_i_wready_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_i_bvalid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_i_bresp_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_i_bid_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_i_arready_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_i_rvalid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_i_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_i_rresp_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_i_rid_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_i_rlast_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_d_awready_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_d_wready_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_d_bvalid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_d_bresp_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_d_bid_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_d_arready_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_d_rvalid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_d_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_d_rresp_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_d_rid_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_d_rlast_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__intr_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset_vector_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_i_awvalid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_i_awaddr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_i_awid_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_i_awlen_o = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_i_awburst_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_i_wvalid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_i_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_i_wstrb_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_i_wlast_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_i_bready_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_i_arvalid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_i_araddr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_i_arid_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_i_arlen_o = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_i_arburst_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_i_rready_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_d_awvalid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_d_awaddr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_d_awid_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_d_awlen_o = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_d_awburst_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_d_wvalid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_d_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_d_wstrb_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_d_wlast_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_d_bready_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_d_arvalid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_d_araddr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_d_arid_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi_d_arlen_o = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_d_arburst_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_d_rready_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sva_checker__DOT__CHK_001_reset_quiet_seen = 0;
    vlSelf->__PVT__sva_checker__DOT__CHK_002_icache_refill_seen = 0;
    vlSelf->__PVT__sva_checker__DOT__CHK_003_icache_response_seen = 0;
    vlSelf->__PVT__sva_checker__DOT__CHK_004_dcache_read_seen = 0;
    vlSelf->__PVT__sva_checker__DOT__CHK_005_dcache_write_seen = 0;
    vlSelf->__PVT__sva_checker__DOT__CHK_006_dcache_response_seen = 0;
    vlSelf->__PVT__sva_checker__DOT__CHK_007_icache_fsm_seen = 0;
    vlSelf->__PVT__sva_checker__DOT__CHK_008_dcache_fsm_seen = 0;
    vlSelf->__PVT__sva_checker__DOT__CHK_009_reset_states_seen = 0;
    vlSelf->__PVT__sva_checker__DOT__CHK_010_icache_read_only_seen = 0;
    vlSelf->__PVT__sva_checker__DOT__CHK_011_fetch_alignment_seen = 0;
    vlSelf->__PVT__sva_checker__DOT__CHK_012_core_data_request_seen = 0;
    vlSelf->__PVT__sva_checker__DOT__CHK_013_icache_refill_exit_seen = 0;
    vlSelf->__PVT__sva_checker__DOT__CHK_014_icache_relookup_seen = 0;
    vlSelf->__PVT__sva_checker__DOT__CHK_015_dcache_refill_exit_seen = 0;
    vlSelf->__PVT__sva_checker__DOT__CHK_016_axi_response_seen = 0;
    vlSelf->sva_checker__DOT___Vpast_0_0 = VL_RAND_RESET_I(1);
    vlSelf->sva_checker__DOT___Vpast_1_0 = VL_RAND_RESET_I(1);
    vlSelf->sva_checker__DOT___Vpast_2_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__riscv_top_tb____PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__riscv_top_tb__dut__u_icache____PVT__axi_arvalid_o = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_awvalid_o = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_wvalid_o = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_arvalid_o = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__riscv_top_tb____PVT__i_rlast = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__riscv_top_tb____PVT__i_memory__DOT__read_active = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_awaddr_o = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__u_axi__DOT__u_axi__DOT__valid_q = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(84, vlSelf->__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__u_axi__DOT__u_axi__DOT__buf_q);
    vlSelf->__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_wstrb_o = VL_RAND_RESET_I(4);
    vlSelf->__Vsampled_TOP__riscv_top_tb____PVT__d_rlast = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__riscv_top_tb____PVT__d_memory__DOT__read_active = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__riscv_top_tb__dut__u_dcache__u_core____PVT__state_q = VL_RAND_RESET_I(4);
    vlSelf->__Vsampled_TOP__riscv_top_tb__dut__u_icache____PVT__state_q = VL_RAND_RESET_I(2);
    vlSelf->__Vsampled_TOP__riscv_top_tb__dut__u_core____PVT__mem_d_rd_o = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__riscv_top_tb__dut__u_core____PVT__mem_d_wr_o = VL_RAND_RESET_I(4);
    vlSelf->__Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_0_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_1_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_2_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__pmem_cache_ack_w = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__riscv_top_tb__dut__u_dcache__u_core____PVT__pmem_len_q = VL_RAND_RESET_I(8);
}
