// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top_tb.h for the primary calling header

#include "Vriscv_top_tb__pch.h"
#include "Vriscv_top_tb__Syms.h"
#include "Vriscv_top_tb_riscv_top__M0_MBffff.h"

VL_ATTR_COLD void Vriscv_top_tb_riscv_top__M0_MBffff___eval_final__TOP__riscv_top_tb__dut(Vriscv_top_tb_riscv_top__M0_MBffff* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_tb_riscv_top__M0_MBffff___eval_final__TOP__riscv_top_tb__dut\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("[CORE COVERAGE] reset=%0b ls=%0b op=%0b invalid=%0b stall=%0b x0=%0b pc=%0b branch=%0b progress=%0b\n",0,
                 1,vlSelfRef.__PVT__sva_checker__DOT__CHK_022_pipeline_reset_seen,
                 1,(IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_023_load_store_exclusion_seen),
                 1,vlSelfRef.__PVT__sva_checker__DOT__CHK_024_operation_class_seen,
                 1,(IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_025_invalid_stage_clear_seen),
                 1,vlSelfRef.__PVT__sva_checker__DOT__CHK_026_pipeline_stall_seen,
                 1,(IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_028_zero_register_seen),
                 1,vlSelfRef.__PVT__sva_checker__DOT__CHK_029_pipeline_pc_seen,
                 1,(IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_030_branch_control_seen),
                 1,vlSelfRef.__PVT__sva_checker__DOT__CHK_031_pipeline_progress_seen);
    if (VL_LIKELY((((((((((((((((((((((((((((((((((
                                                   ((((((IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_001_reset_quiet_seen) 
                                                        & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_002_icache_refill_seen)) 
                                                       & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_003_icache_response_seen)) 
                                                      & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_004_dcache_read_seen)) 
                                                     & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_005_dcache_write_seen)) 
                                                    & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_006_dcache_response_seen)) 
                                                   & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_007_icache_fsm_seen)) 
                                                  & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_008_dcache_fsm_seen)) 
                                                 & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_009_reset_states_seen)) 
                                                & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_010_icache_read_only_seen)) 
                                               & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_011_fetch_alignment_seen)) 
                                              & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_012_core_data_request_seen)) 
                                             & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_013_icache_refill_exit_seen)) 
                                            & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_014_icache_relookup_seen)) 
                                           & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_015_dcache_refill_exit_seen)) 
                                          & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_016_axi_response_seen)) 
                                         & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_017_clock_period_seen)) 
                                        & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_018_clock_duty_seen)) 
                                       & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_019_reset_duration_seen)) 
                                      & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_020_reset_release_seen)) 
                                     & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_021_post_reset_quiet_seen)) 
                                    & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_022_pipeline_reset_seen)) 
                                   & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_023_load_store_exclusion_seen)) 
                                  & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_024_operation_class_seen)) 
                                 & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_025_invalid_stage_clear_seen)) 
                                & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_026_pipeline_stall_seen)) 
                               & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_028_zero_register_seen)) 
                              & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_029_pipeline_pc_seen)) 
                             & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_030_branch_control_seen)) 
                            & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_031_pipeline_progress_seen)) 
                           & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_032_pipeline_complete_seen)) 
                          & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_033_e1_e2_metadata_seen)) 
                         & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_034_e2_wb_metadata_seen)) 
                        & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_035_add_result_seen)) 
                       & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_036_lui_result_seen)) 
                      & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_037_commit_destination_seen)) 
                     & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_038_load_store_destination_seen)) 
                    & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_039_branch_class_seen)) 
                   & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_040_stall_cause_seen)))) {
        VL_WRITEF_NX("[COVERAGE] all required SVA triggers were observed\n",0);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: riscv_top_tb.sv:539: Assertion failed in %Nriscv_top_tb.dut.sva_checker: [COVERAGE] one or more required CHK triggers were not observed\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 539, "", false);
    }
}

VL_ATTR_COLD void Vriscv_top_tb_riscv_top__M0_MBffff___configure_coverage(Vriscv_top_tb_riscv_top__M0_MBffff* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_tb_riscv_top__M0_MBffff___configure_coverage\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "testbench/sva/riscv_top_tb.sv", 94, 28, ".sva_checker.CHK_001_reset_quiet_C", "v_user/riscv_top_sva_checker", "CHK_001_reset_quiet_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "testbench/sva/riscv_top_tb.sv", 100, 30, ".sva_checker.CHK_002_icache_refill_C", "v_user/riscv_top_sva_checker", "CHK_002_icache_refill_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "testbench/sva/riscv_top_tb.sv", 107, 32, ".sva_checker.CHK_003_icache_response_C", "v_user/riscv_top_sva_checker", "CHK_003_icache_response_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "testbench/sva/riscv_top_tb.sv", 115, 28, ".sva_checker.CHK_004_dcache_read_C", "v_user/riscv_top_sva_checker", "CHK_004_dcache_read_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "testbench/sva/riscv_top_tb.sv", 123, 29, ".sva_checker.CHK_005_dcache_write_C", "v_user/riscv_top_sva_checker", "CHK_005_dcache_write_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "testbench/sva/riscv_top_tb.sv", 130, 32, ".sva_checker.CHK_006_dcache_response_C", "v_user/riscv_top_sva_checker", "CHK_006_dcache_response_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "testbench/sva/riscv_top_tb.sv", 137, 27, ".sva_checker.CHK_007_icache_fsm_C", "v_user/riscv_top_sva_checker", "CHK_007_icache_fsm_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "testbench/sva/riscv_top_tb.sv", 144, 27, ".sva_checker.CHK_008_dcache_fsm_C", "v_user/riscv_top_sva_checker", "CHK_008_dcache_fsm_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "testbench/sva/riscv_top_tb.sv", 151, 29, ".sva_checker.CHK_009_reset_states_C", "v_user/riscv_top_sva_checker", "CHK_009_reset_states_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "testbench/sva/riscv_top_tb.sv", 158, 33, ".sva_checker.CHK_010_icache_read_only_C", "v_user/riscv_top_sva_checker", "CHK_010_icache_read_only_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "testbench/sva/riscv_top_tb.sv", 165, 32, ".sva_checker.CHK_011_fetch_alignment_C", "v_user/riscv_top_sva_checker", "CHK_011_fetch_alignment_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "testbench/sva/riscv_top_tb.sv", 172, 34, ".sva_checker.CHK_012_core_data_request_C", "v_user/riscv_top_sva_checker", "CHK_012_core_data_request_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "testbench/sva/riscv_top_tb.sv", 180, 35, ".sva_checker.CHK_013_icache_refill_exit_C", "v_user/riscv_top_sva_checker", "CHK_013_icache_refill_exit_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "testbench/sva/riscv_top_tb.sv", 187, 32, ".sva_checker.CHK_014_icache_relookup_C", "v_user/riscv_top_sva_checker", "CHK_014_icache_relookup_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "testbench/sva/riscv_top_tb.sv", 196, 35, ".sva_checker.CHK_015_dcache_refill_exit_C", "v_user/riscv_top_sva_checker", "CHK_015_dcache_refill_exit_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "testbench/sva/riscv_top_tb.sv", 210, 29, ".sva_checker.CHK_016_axi_response_C", "v_user/riscv_top_sva_checker", "CHK_016_axi_response_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "testbench/sva/riscv_top_tb.sv", 224, 29, ".sva_checker.CHK_017_clock_period_C", "v_user/riscv_top_sva_checker", "CHK_017_clock_period_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "testbench/sva/riscv_top_tb.sv", 240, 27, ".sva_checker.CHK_018_clock_duty_C", "v_user/riscv_top_sva_checker", "CHK_018_clock_duty_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "testbench/sva/riscv_top_tb.sv", 249, 31, ".sva_checker.CHK_019_reset_duration_C", "v_user/riscv_top_sva_checker", "CHK_019_reset_duration_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "testbench/sva/riscv_top_tb.sv", 256, 30, ".sva_checker.CHK_020_reset_release_C", "v_user/riscv_top_sva_checker", "CHK_020_reset_release_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "testbench/sva/riscv_top_tb.sv", 262, 33, ".sva_checker.CHK_021_post_reset_quiet_C", "v_user/riscv_top_sva_checker", "CHK_021_post_reset_quiet_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "testbench/sva/riscv_top_tb.sv", 272, 31, ".sva_checker.CHK_022_pipeline_reset_C", "v_user/riscv_top_sva_checker", "CHK_022_pipeline_reset_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "testbench/sva/riscv_top_tb.sv", 280, 37, ".sva_checker.CHK_023_load_store_exclusion_C", "v_user/riscv_top_sva_checker", "CHK_023_load_store_exclusion_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "testbench/sva/riscv_top_tb.sv", 288, 32, ".sva_checker.CHK_024_operation_class_C", "v_user/riscv_top_sva_checker", "CHK_024_operation_class_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "testbench/sva/riscv_top_tb.sv", 295, 36, ".sva_checker.CHK_025_invalid_stage_clear_C", "v_user/riscv_top_sva_checker", "CHK_025_invalid_stage_clear_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "testbench/sva/riscv_top_tb.sv", 305, 31, ".sva_checker.CHK_026_pipeline_stall_C", "v_user/riscv_top_sva_checker", "CHK_026_pipeline_stall_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "testbench/sva/riscv_top_tb.sv", 312, 30, ".sva_checker.CHK_028_zero_register_C", "v_user/riscv_top_sva_checker", "CHK_028_zero_register_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "testbench/sva/riscv_top_tb.sv", 322, 28, ".sva_checker.CHK_029_pipeline_pc_C", "v_user/riscv_top_sva_checker", "CHK_029_pipeline_pc_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "testbench/sva/riscv_top_tb.sv", 330, 31, ".sva_checker.CHK_030_branch_control_C", "v_user/riscv_top_sva_checker", "CHK_030_branch_control_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "testbench/sva/riscv_top_tb.sv", 338, 34, ".sva_checker.CHK_031_pipeline_progress_C", "v_user/riscv_top_sva_checker", "CHK_031_pipeline_progress_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "testbench/sva/riscv_top_tb.sv", 348, 34, ".sva_checker.CHK_032_pipeline_complete_C", "v_user/riscv_top_sva_checker", "CHK_032_pipeline_complete_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "testbench/sva/riscv_top_tb.sv", 359, 31, ".sva_checker.CHK_033_e1_e2_metadata_C", "v_user/riscv_top_sva_checker", "CHK_033_e1_e2_metadata_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "testbench/sva/riscv_top_tb.sv", 371, 31, ".sva_checker.CHK_034_e2_wb_metadata_C", "v_user/riscv_top_sva_checker", "CHK_034_e2_wb_metadata_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "testbench/sva/riscv_top_tb.sv", 385, 27, ".sva_checker.CHK_035_add_result_C", "v_user/riscv_top_sva_checker", "CHK_035_add_result_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "testbench/sva/riscv_top_tb.sv", 396, 27, ".sva_checker.CHK_036_lui_result_C", "v_user/riscv_top_sva_checker", "CHK_036_lui_result_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "testbench/sva/riscv_top_tb.sv", 404, 35, ".sva_checker.CHK_037_commit_destination_C", "v_user/riscv_top_sva_checker", "CHK_037_commit_destination_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "testbench/sva/riscv_top_tb.sv", 414, 39, ".sva_checker.CHK_038_load_store_destination_C", "v_user/riscv_top_sva_checker", "CHK_038_load_store_destination_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "testbench/sva/riscv_top_tb.sv", 422, 29, ".sva_checker.CHK_039_branch_class_C", "v_user/riscv_top_sva_checker", "CHK_039_branch_class_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "testbench/sva/riscv_top_tb.sv", 430, 28, ".sva_checker.CHK_040_stall_cause_C", "v_user/riscv_top_sva_checker", "CHK_040_stall_cause_C", "");
}
