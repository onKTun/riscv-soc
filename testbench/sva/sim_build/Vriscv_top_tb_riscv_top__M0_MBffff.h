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
        VL_OUT8(__PVT__retire_valid_o,0,0);
        VL_OUT8(__PVT__retire_rd_o,4,0);
        CData/*0:0*/ dcache_ack_w;
        CData/*0:0*/ dcache_rd_w;
        CData/*3:0*/ dcache_wr_w;
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
    };
    struct {
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_011_fetch_alignment_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_012_core_data_request_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_013_icache_refill_exit_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_014_icache_relookup_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_015_dcache_refill_exit_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_016_axi_response_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_017_clock_period_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_018_clock_duty_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_019_reset_duration_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_020_reset_release_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_021_post_reset_quiet_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__clock_posedge_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__clock_negedge_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_022_pipeline_reset_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_023_load_store_exclusion_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_024_operation_class_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_025_invalid_stage_clear_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_026_pipeline_stall_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_028_zero_register_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_029_pipeline_pc_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_030_branch_control_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_031_pipeline_progress_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_032_pipeline_complete_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_033_e1_e2_metadata_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_034_e2_wb_metadata_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_035_add_result_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_036_lui_result_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_037_commit_destination_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_038_load_store_destination_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_039_branch_class_seen;
        CData/*0:0*/ __PVT__sva_checker__DOT__CHK_040_stall_cause_seen;
        CData/*0:0*/ sva_checker__DOT___Vpast_0_0;
        CData/*0:0*/ sva_checker__DOT___Vpast_1_0;
        CData/*0:0*/ sva_checker__DOT___Vpast_2_0;
        CData/*0:0*/ sva_checker__DOT___Vpast_3_0;
        CData/*0:0*/ sva_checker__DOT___Vpast_4_0;
        CData/*0:0*/ sva_checker__DOT___Vpast_5_0;
        CData/*0:0*/ sva_checker__DOT___Vpast_6_0;
        CData/*0:0*/ sva_checker__DOT___Vpast_7_0;
        CData/*0:0*/ sva_checker__DOT___Vpast_8_0;
        CData/*0:0*/ sva_checker__DOT___Vpast_9_0;
        CData/*0:0*/ sva_checker__DOT___Vpast_10_0;
        CData/*0:0*/ sva_checker__DOT___Vpast_12_0;
        CData/*0:0*/ sva_checker__DOT___Vpast_13_0;
        CData/*0:0*/ sva_checker__DOT___Vpast_17_0;
        CData/*0:0*/ sva_checker__DOT___Vpast_21_0;
        CData/*0:0*/ sva_checker__DOT___Vpast_22_0;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb____PVT__rst;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_icache____PVT__axi_arvalid_o;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_awvalid_o;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_wvalid_o;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_arvalid_o;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__i_memory____PVT__rlast_o;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__i_memory____PVT__read_active;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__u_axi__DOT__u_axi__DOT__valid_q;
        CData/*3:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_wstrb_o;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__d_memory____PVT__rlast_o;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__d_memory____PVT__read_active;
        CData/*3:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_dcache__u_core____PVT__state_q;
        CData/*1:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_icache____PVT__state_q;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__dcache_rd_w;
        CData/*3:0*/ __Vsampled_TOP__riscv_top_tb__dut__dcache_wr_w;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_0_0;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_1_0;
    };
    struct {
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_2_0;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_3_0;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_6_0;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_8_0;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__valid_e1_q;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__valid_e2_q;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__valid_wb_q;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_10_0;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_core____PVT__u_exec__DOT__branch_taken_q;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_core____PVT__u_exec__DOT__branch_ntaken_q;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_12_0;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_13_0;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_17_0;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__stall_w;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__pipe_valid_wb_w;
        CData/*4:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__pipe_rd_wb_w;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__pmem_cache_ack_w;
        CData/*7:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_dcache__u_core____PVT__pmem_len_q;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_5_0;
        CData/*0:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__pipe_squash_e1_e2_w;
        CData/*5:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__exception_e2_r;
        SData/*9:0*/ sva_checker__DOT___Vpast_16_0;
        SData/*9:0*/ sva_checker__DOT___Vpast_20_0;
        SData/*9:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_e1_q;
        SData/*9:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_e2_q;
        SData/*9:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_wb_q;
        SData/*9:0*/ __Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_16_0;
        SData/*9:0*/ __Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_20_0;
        VL_IN(__PVT__axi_i_rdata_i,31,0);
        VL_IN(__PVT__axi_d_rdata_i,31,0);
        VL_IN(__PVT__reset_vector_i,31,0);
        VL_OUT(__PVT__axi_i_awaddr_o,31,0);
        VL_OUT(__PVT__axi_i_wdata_o,31,0);
        VL_OUT(__PVT__axi_i_araddr_o,31,0);
        VL_OUT(__PVT__axi_d_awaddr_o,31,0);
        VL_OUT(__PVT__axi_d_wdata_o,31,0);
        VL_OUT(__PVT__axi_d_araddr_o,31,0);
        VL_OUT(__PVT__retire_pc_o,31,0);
        VL_OUT(__PVT__retire_value_o,31,0);
        VL_OUT(__PVT__debug_x1_o,31,0);
        VL_OUT(__PVT__debug_x2_o,31,0);
        VL_OUT(__PVT__debug_x3_o,31,0);
        VL_OUT(__PVT__debug_x4_o,31,0);
        VL_OUT(__PVT__debug_x5_o,31,0);
        VL_OUT(__PVT__debug_x6_o,31,0);
        VL_OUT(__PVT__debug_x7_o,31,0);
        VL_OUT(__PVT__debug_x8_o,31,0);
        VL_OUT(__PVT__debug_x9_o,31,0);
        VL_OUT(__PVT__debug_x10_o,31,0);
        VL_OUT(__PVT__debug_x11_o,31,0);
        VL_OUT(__PVT__debug_x12_o,31,0);
        VL_OUT(__PVT__debug_x13_o,31,0);
        VL_OUT(__PVT__debug_x14_o,31,0);
        VL_OUT(__PVT__debug_x15_o,31,0);
        VL_OUT(__PVT__debug_x16_o,31,0);
        VL_OUT(__PVT__debug_x17_o,31,0);
        VL_OUT(__PVT__debug_x18_o,31,0);
        VL_OUT(__PVT__debug_x19_o,31,0);
        VL_OUT(__PVT__debug_x20_o,31,0);
        VL_OUT(__PVT__debug_x21_o,31,0);
        VL_OUT(__PVT__debug_x22_o,31,0);
        VL_OUT(__PVT__debug_x23_o,31,0);
        VL_OUT(__PVT__debug_x24_o,31,0);
        VL_OUT(__PVT__debug_x25_o,31,0);
    };
    struct {
        VL_OUT(__PVT__debug_x26_o,31,0);
        VL_OUT(__PVT__debug_x27_o,31,0);
        VL_OUT(__PVT__debug_x28_o,31,0);
        VL_OUT(__PVT__debug_x29_o,31,0);
        VL_OUT(__PVT__debug_x30_o,31,0);
        VL_OUT(__PVT__debug_x31_o,31,0);
        IData/*31:0*/ dcache_addr_w;
        IData/*31:0*/ dcache_data_rd_w;
        IData/*31:0*/ dcache_data_wr_w;
        IData/*31:0*/ __PVT__sva_checker__DOT__reset_cycle_count;
        VlWide<8>/*224:0*/ sva_checker__DOT___Vpast_11_0;
        IData/*31:0*/ sva_checker__DOT___Vpast_14_0;
        IData/*31:0*/ sva_checker__DOT___Vpast_15_0;
        IData/*31:0*/ sva_checker__DOT___Vpast_18_0;
        IData/*31:0*/ sva_checker__DOT___Vpast_19_0;
        IData/*31:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_awaddr_o;
        VlWide<3>/*83:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__u_axi__DOT__u_axi__DOT__buf_q;
        IData/*31:0*/ __Vsampled_TOP__riscv_top_tb__dut____PVT__sva_checker__DOT__reset_cycle_count;
        VlWide<8>/*224:0*/ __Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_11_0;
        IData/*31:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__pc_e1_q;
        IData/*31:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__opcode_e1_q;
        IData/*31:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__pc_e2_q;
        IData/*31:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__opcode_e2_q;
        IData/*31:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__pc_wb_q;
        IData/*31:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__opcode_wb_q;
        IData/*31:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_core____PVT__fetch_instr_w;
        IData/*31:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__issue_ra_value_r;
        IData/*31:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_core____PVT__u_exec__DOT__pc_x_q;
        IData/*31:0*/ __Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_14_0;
        IData/*31:0*/ __Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_15_0;
        IData/*31:0*/ __Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_18_0;
        IData/*31:0*/ __Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_19_0;
        IData/*31:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__result_wb_q;
        IData/*31:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__operand_ra_wb_q;
        IData/*31:0*/ __Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__operand_rb_wb_q;
    };
    double __PVT__sva_checker__DOT__last_posedge_time;
    double __PVT__sva_checker__DOT__last_negedge_time;

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
