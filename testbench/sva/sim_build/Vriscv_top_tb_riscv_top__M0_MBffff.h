// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_top_tb.h for the primary calling header

#ifndef VERILATED_VRISCV_TOP_TB_RISCV_TOP__M0_MBFFFF_H_
#define VERILATED_VRISCV_TOP_TB_RISCV_TOP__M0_MBFFFF_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vriscv_top_tb_dcache;
class Vriscv_top_tb_icache;
class Vriscv_top_tb_riscv_core__M0_MBffff;


class Vriscv_top_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_top_tb_riscv_top__M0_MBffff final : public VerilatedModule {
  public:
    // CELLS
    Vriscv_top_tb_dcache* u_dcache;
    Vriscv_top_tb_riscv_core__M0_MBffff* u_core;
    Vriscv_top_tb_icache* u_icache;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_i,0,0);
        VL_IN8(__PVT__axi_i_awready_i,0,0);
        VL_IN8(__PVT__axi_i_wready_i,0,0);
        VL_IN8(__PVT__axi_i_bvalid_i,0,0);
        VL_IN8(__PVT__axi_i_bresp_i,1,0);
        VL_IN8(__PVT__axi_i_bid_i,3,0);
        VL_IN8(__PVT__axi_i_arready_i,0,0);
        VL_IN8(__PVT__axi_i_rvalid_i,0,0);
        VL_IN8(__PVT__axi_i_rresp_i,1,0);
        VL_IN8(__PVT__axi_i_rid_i,3,0);
        VL_IN8(__PVT__axi_i_rlast_i,0,0);
        VL_IN8(__PVT__axi_d_awready_i,0,0);
        VL_IN8(__PVT__axi_d_wready_i,0,0);
        VL_IN8(__PVT__axi_d_bvalid_i,0,0);
        VL_IN8(__PVT__axi_d_bresp_i,1,0);
        VL_IN8(__PVT__axi_d_bid_i,3,0);
        VL_IN8(__PVT__axi_d_arready_i,0,0);
        VL_IN8(__PVT__axi_d_rvalid_i,0,0);
        VL_IN8(__PVT__axi_d_rresp_i,1,0);
        VL_IN8(__PVT__axi_d_rid_i,3,0);
        VL_IN8(__PVT__axi_d_rlast_i,0,0);
        VL_IN8(__PVT__intr_i,0,0);
        VL_OUT8(__PVT__axi_i_awvalid_o,0,0);
        VL_OUT8(__PVT__axi_i_awid_o,3,0);
        VL_OUT8(__PVT__axi_i_awlen_o,7,0);
        VL_OUT8(__PVT__axi_i_awburst_o,1,0);
        VL_OUT8(__PVT__axi_i_wvalid_o,0,0);
        VL_OUT8(__PVT__axi_i_wstrb_o,3,0);
        VL_OUT8(__PVT__axi_i_wlast_o,0,0);
        VL_OUT8(__PVT__axi_i_bready_o,0,0);
        VL_OUT8(__PVT__axi_i_arvalid_o,0,0);
        VL_OUT8(__PVT__axi_i_arid_o,3,0);
        VL_OUT8(__PVT__axi_i_arlen_o,7,0);
        VL_OUT8(__PVT__axi_i_arburst_o,1,0);
        VL_OUT8(__PVT__axi_i_rready_o,0,0);
        VL_OUT8(__PVT__axi_d_awvalid_o,0,0);
        VL_OUT8(__PVT__axi_d_awid_o,3,0);
        VL_OUT8(__PVT__axi_d_awlen_o,7,0);
        VL_OUT8(__PVT__axi_d_awburst_o,1,0);
        VL_OUT8(__PVT__axi_d_wvalid_o,0,0);
        VL_OUT8(__PVT__axi_d_wstrb_o,3,0);
        VL_OUT8(__PVT__axi_d_wlast_o,0,0);
        VL_OUT8(__PVT__axi_d_bready_o,0,0);
        VL_OUT8(__PVT__axi_d_arvalid_o,0,0);
        VL_OUT8(__PVT__axi_d_arid_o,3,0);
        VL_OUT8(__PVT__axi_d_arlen_o,7,0);
        VL_OUT8(__PVT__axi_d_arburst_o,1,0);
        VL_OUT8(__PVT__axi_d_rready_o,0,0);
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_001_reset_quiet_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_002_icache_refill_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_003_icache_response_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_004_dcache_read_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_005_dcache_write_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_006_dcache_response_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_007_icache_fsm_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_008_dcache_fsm_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_009_reset_states_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_010_icache_read_only_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_011_fetch_alignment_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_012_core_data_request_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_013_icache_refill_exit_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_014_icache_relookup_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_015_dcache_refill_exit_seen;
    };
    struct {
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_016_axi_response_seen;
        CData/*0:0*/ sva_checker__DOT___Vpast_0_0;
        CData/*0:0*/ sva_checker__DOT___Vpast_1_0;
        CData/*0:0*/ sva_checker__DOT___Vpast_2_0;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb____PVT__rst;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_icache____PVT__axi_arvalid_o;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_awvalid_o;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_wvalid_o;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_arvalid_o;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb____PVT__i_rlast;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb____PVT__i_memory__DOT__read_active;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__u_axi__DOT__u_axi__DOT__valid_q;
        CData/*3:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_wstrb_o;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb____PVT__d_rlast;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb____PVT__d_memory__DOT__read_active;
        CData/*3:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_dcache__u_core____PVT__state_q;
        CData/*1:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_icache____PVT__state_q;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_core____PVT__mem_d_rd_o;
        CData/*3:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_core____PVT__mem_d_wr_o;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_0_0;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_1_0;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_2_0;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__pmem_cache_ack_w;
        CData/*7:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_dcache__u_core____PVT__pmem_len_q;
        VL_IN(__PVT__axi_i_rdata_i,31,0);
        VL_IN(__PVT__axi_d_rdata_i,31,0);
        VL_IN(__PVT__reset_vector_i,31,0);
        VL_OUT(__PVT__axi_i_awaddr_o,31,0);
        VL_OUT(__PVT__axi_i_wdata_o,31,0);
        VL_OUT(__PVT__axi_i_araddr_o,31,0);
        VL_OUT(__PVT__axi_d_awaddr_o,31,0);
        VL_OUT(__PVT__axi_d_wdata_o,31,0);
        VL_OUT(__PVT__axi_d_araddr_o,31,0);
        IData/*31:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_awaddr_o;
        VlWide<3>/*83:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__u_axi__DOT__u_axi__DOT__buf_q;
    };

    // INTERNAL VARIABLES
    Vriscv_top_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_top_tb_riscv_top__M0_MBffff(Vriscv_top_tb__Syms* symsp, const char* v__name);
    ~Vriscv_top_tb_riscv_top__M0_MBffff();
    VL_UNCOPYABLE(Vriscv_top_tb_riscv_top__M0_MBffff);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
