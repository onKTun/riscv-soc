// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_muldiv_csr_tb.h for the primary calling header

#ifndef VERILATED_VRISCV_MULDIV_CSR_TB_RISCV_TOP__M0_MBFFFF_H_
#define VERILATED_VRISCV_MULDIV_CSR_TB_RISCV_TOP__M0_MBFFFF_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vriscv_muldiv_csr_tb_dcache;
class Vriscv_muldiv_csr_tb_icache;
class Vriscv_muldiv_csr_tb_riscv_core__M0_MBffff;


class Vriscv_muldiv_csr_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff final : public VerilatedModule {
  public:
    // CELLS
    Vriscv_muldiv_csr_tb_dcache* u_dcache;
    Vriscv_muldiv_csr_tb_riscv_core__M0_MBffff* u_core;
    Vriscv_muldiv_csr_tb_icache* u_icache;

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
        CData/*0:0*/ __PVT__muldiv_csr_sva_checker__DOT__CHK_017_mul_result_valid_seen;
        CData/*0:0*/ __PVT__muldiv_csr_sva_checker__DOT__CHK_018_mul_hold_stable_seen;
        CData/*0:0*/ __PVT__muldiv_csr_sva_checker__DOT__CHK_019_mulh_signed_seen;
        CData/*0:0*/ __PVT__muldiv_csr_sva_checker__DOT__CHK_020_mulhu_unsigned_seen;
        CData/*0:0*/ __PVT__muldiv_csr_sva_checker__DOT__CHK_021_mulhsu_mixed_seen;
        CData/*0:0*/ __PVT__muldiv_csr_sva_checker__DOT__CHK_022_mul_zero_id_seen;
        CData/*0:0*/ __PVT__muldiv_csr_sva_checker__DOT__mul_valid_e0;
        CData/*0:0*/ __PVT__muldiv_csr_sva_checker__DOT__mul_expect_valid_e1;
        CData/*0:0*/ __PVT__muldiv_csr_sva_checker__DOT__mul_expect_valid_e2;
        CData/*0:0*/ __PVT__muldiv_csr_sva_checker__DOT__CHK_023_div_by_zero_seen;
    };
    struct {
        CData/*0:0*/ __PVT__muldiv_csr_sva_checker__DOT__CHK_024_div_overflow_seen;
        CData/*0:0*/ __PVT__muldiv_csr_sva_checker__DOT__CHK_025_div_result_correct_seen;
        CData/*0:0*/ __PVT__muldiv_csr_sva_checker__DOT__CHK_026_div_busy_no_new_issue_seen;
        CData/*0:0*/ __PVT__muldiv_csr_sva_checker__DOT__CHK_027_div_valid_pulse_seen;
        CData/*0:0*/ __PVT__muldiv_csr_sva_checker__DOT__div_is_div_latched;
        CData/*0:0*/ __PVT__muldiv_csr_sva_checker__DOT__div_is_divu_latched;
        CData/*0:0*/ __PVT__muldiv_csr_sva_checker__DOT__div_is_rem_latched;
        CData/*0:0*/ __PVT__muldiv_csr_sva_checker__DOT__div_is_remu_latched;
        CData/*0:0*/ __PVT__muldiv_csr_sva_checker__DOT__div_pending;
        CData/*0:0*/ __PVT__muldiv_csr_sva_checker__DOT__CHK_028_csr_write_readback_seen;
        CData/*0:0*/ __PVT__muldiv_csr_sva_checker__DOT__CHK_029_illegal_csr_exception_seen;
        CData/*0:0*/ __PVT__muldiv_csr_sva_checker__DOT__CHK_030_mepc_capture_seen;
        CData/*0:0*/ __PVT__muldiv_csr_sva_checker__DOT__csr_write_pending_q;
        CData/*0:0*/ muldiv_csr_sva_checker__DOT___Vpast_0_0;
        CData/*0:0*/ muldiv_csr_sva_checker__DOT___Vpast_2_0;
        CData/*0:0*/ muldiv_csr_sva_checker__DOT___Vpast_3_1;
        CData/*0:0*/ muldiv_csr_sva_checker__DOT___Vpast_4_0;
        CData/*0:0*/ muldiv_csr_sva_checker__DOT___Vpast_5_0;
        CData/*0:0*/ muldiv_csr_sva_checker__DOT___Vpast_6_0;
        CData/*0:0*/ muldiv_csr_sva_checker__DOT___Vpast_7_0;
        CData/*0:0*/ muldiv_csr_sva_checker__DOT___Vpast_8_0;
        CData/*0:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb____PVT__rst;
        CData/*0:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__mul_expect_valid_e2;
        CData/*0:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut__muldiv_csr_sva_checker__DOT___Vpast_0_0;
        CData/*0:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut__muldiv_csr_sva_checker__DOT___Vpast_3_1;
        CData/*0:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core____PVT__u_div__DOT__valid_q;
        CData/*0:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__div_is_div_latched;
        CData/*0:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__div_is_divu_latched;
        CData/*0:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__div_is_rem_latched;
        CData/*0:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__div_is_remu_latched;
        CData/*0:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core____PVT__u_div__DOT__div_busy_q;
        CData/*0:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue____PVT__opcode_issue_r;
        CData/*0:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut__muldiv_csr_sva_checker__DOT___Vpast_4_0;
        CData/*0:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut__muldiv_csr_sva_checker__DOT___Vpast_5_0;
        CData/*0:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut__muldiv_csr_sva_checker__DOT___Vpast_6_0;
        CData/*5:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr____PVT__exception_e1_q;
        CData/*0:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut__muldiv_csr_sva_checker__DOT___Vpast_7_0;
        CData/*0:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut__muldiv_csr_sva_checker__DOT___Vpast_8_0;
        CData/*0:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue____PVT__stall_w;
        CData/*0:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__csr_write_pending_q;
        CData/*0:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue____PVT__csr_opcode_valid_o;
        CData/*0:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue____PVT__csr_opcode_invalid_o;
        CData/*5:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__exception_wb_q;
        SData/*11:0*/ __PVT__muldiv_csr_sva_checker__DOT__csr_last_waddr_q;
        SData/*11:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__csr_last_waddr_q;
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
    };
    struct {
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
        VL_OUT(__PVT__debug_x26_o,31,0);
        VL_OUT(__PVT__debug_x27_o,31,0);
        VL_OUT(__PVT__debug_x28_o,31,0);
        VL_OUT(__PVT__debug_x29_o,31,0);
        VL_OUT(__PVT__debug_x30_o,31,0);
        VL_OUT(__PVT__debug_x31_o,31,0);
        IData/*31:0*/ dcache_addr_w;
        IData/*31:0*/ dcache_data_rd_w;
        IData/*31:0*/ dcache_data_wr_w;
        IData/*31:0*/ __PVT__muldiv_csr_sva_checker__DOT__mul_ra_e0;
        IData/*31:0*/ __PVT__muldiv_csr_sva_checker__DOT__mul_rb_e0;
        IData/*31:0*/ __PVT__muldiv_csr_sva_checker__DOT__mul_expect_e1;
        IData/*31:0*/ __PVT__muldiv_csr_sva_checker__DOT__mul_expect_e2;
        IData/*31:0*/ __PVT__muldiv_csr_sva_checker__DOT__div_ra_latched;
        IData/*31:0*/ __PVT__muldiv_csr_sva_checker__DOT__div_rb_latched;
        IData/*31:0*/ __PVT__muldiv_csr_sva_checker__DOT__div_ref_q;
        IData/*31:0*/ __PVT__muldiv_csr_sva_checker__DOT__div_ref_r;
        IData/*31:0*/ __PVT__muldiv_csr_sva_checker__DOT__divu_ref_q;
        IData/*31:0*/ __PVT__muldiv_csr_sva_checker__DOT__divu_ref_r;
        IData/*31:0*/ __PVT__muldiv_csr_sva_checker__DOT__csr_last_wdata_q;
        IData/*31:0*/ muldiv_csr_sva_checker__DOT___Vpast_1_0;
        IData/*31:0*/ muldiv_csr_sva_checker__DOT___Vpast_9_0;
        IData/*31:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core____PVT__u_mul__DOT__result_e2_q;
        IData/*31:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__mul_expect_e2;
        IData/*31:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut__muldiv_csr_sva_checker__DOT___Vpast_1_0;
        IData/*31:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__div_rb_latched;
        IData/*31:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core____PVT__u_div__DOT__wb_result_q;
        IData/*31:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__div_ra_latched;
        IData/*31:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__div_ref_q;
        IData/*31:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__div_ref_r;
        IData/*31:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__divu_ref_q;
        IData/*31:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__divu_ref_r;
        IData/*31:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core____PVT__fetch_instr_w;
        IData/*31:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile____PVT__rdata_r;
        IData/*31:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__csr_last_wdata_q;
        IData/*31:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile____PVT__csr_mepc_q;
        IData/*31:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut__muldiv_csr_sva_checker__DOT___Vpast_9_0;
        IData/*31:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue____PVT__issue_ra_value_r;
        IData/*31:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue____PVT__issue_rb_value_r;
        IData/*31:0*/ __Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__pc_wb_q;
        QData/*63:0*/ __PVT__muldiv_csr_sva_checker__DOT__mul_full_product_e0;
        QData/*32:0*/ __PVT__muldiv_csr_sva_checker__DOT__unnamedblk1__DOT__a33;
        QData/*32:0*/ __PVT__muldiv_csr_sva_checker__DOT__unnamedblk1__DOT__b33;
    };

    // INTERNAL VARIABLES
    Vriscv_muldiv_csr_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff(Vriscv_muldiv_csr_tb__Syms* symsp, const char* v__name);
    ~Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff();
    VL_UNCOPYABLE(Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
