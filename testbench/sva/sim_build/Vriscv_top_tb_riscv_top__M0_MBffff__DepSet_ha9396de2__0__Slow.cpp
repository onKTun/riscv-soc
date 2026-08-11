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
    if (VL_LIKELY(((((((((((((((((IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_001_reset_quiet_seen) 
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
                   & (IData)(vlSelfRef.__PVT__sva_checker__DOT__CHK_016_axi_response_seen)))) {
        VL_WRITEF_NX("[COVERAGE] all required SVA triggers were observed\n",0);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: riscv_top_tb.sv:218: Assertion failed in %Nriscv_top_tb.dut.sva_checker: [COVERAGE] one or more required CHK triggers were not observed\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 218, "", false);
    }
}

VL_ATTR_COLD void Vriscv_top_tb_riscv_top__M0_MBffff___configure_coverage(Vriscv_top_tb_riscv_top__M0_MBffff* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_tb_riscv_top__M0_MBffff___configure_coverage\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "testbench/sva/riscv_top_tb.sv", 52, 28, ".sva_checker.CHK_001_reset_quiet_C", "v_user/riscv_top_sva_checker", "CHK_001_reset_quiet_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "testbench/sva/riscv_top_tb.sv", 58, 30, ".sva_checker.CHK_002_icache_refill_C", "v_user/riscv_top_sva_checker", "CHK_002_icache_refill_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "testbench/sva/riscv_top_tb.sv", 65, 32, ".sva_checker.CHK_003_icache_response_C", "v_user/riscv_top_sva_checker", "CHK_003_icache_response_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "testbench/sva/riscv_top_tb.sv", 73, 28, ".sva_checker.CHK_004_dcache_read_C", "v_user/riscv_top_sva_checker", "CHK_004_dcache_read_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "testbench/sva/riscv_top_tb.sv", 81, 29, ".sva_checker.CHK_005_dcache_write_C", "v_user/riscv_top_sva_checker", "CHK_005_dcache_write_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "testbench/sva/riscv_top_tb.sv", 88, 32, ".sva_checker.CHK_006_dcache_response_C", "v_user/riscv_top_sva_checker", "CHK_006_dcache_response_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "testbench/sva/riscv_top_tb.sv", 95, 27, ".sva_checker.CHK_007_icache_fsm_C", "v_user/riscv_top_sva_checker", "CHK_007_icache_fsm_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "testbench/sva/riscv_top_tb.sv", 102, 27, ".sva_checker.CHK_008_dcache_fsm_C", "v_user/riscv_top_sva_checker", "CHK_008_dcache_fsm_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "testbench/sva/riscv_top_tb.sv", 109, 29, ".sva_checker.CHK_009_reset_states_C", "v_user/riscv_top_sva_checker", "CHK_009_reset_states_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "testbench/sva/riscv_top_tb.sv", 116, 33, ".sva_checker.CHK_010_icache_read_only_C", "v_user/riscv_top_sva_checker", "CHK_010_icache_read_only_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "testbench/sva/riscv_top_tb.sv", 123, 32, ".sva_checker.CHK_011_fetch_alignment_C", "v_user/riscv_top_sva_checker", "CHK_011_fetch_alignment_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "testbench/sva/riscv_top_tb.sv", 130, 34, ".sva_checker.CHK_012_core_data_request_C", "v_user/riscv_top_sva_checker", "CHK_012_core_data_request_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "testbench/sva/riscv_top_tb.sv", 138, 35, ".sva_checker.CHK_013_icache_refill_exit_C", "v_user/riscv_top_sva_checker", "CHK_013_icache_refill_exit_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "testbench/sva/riscv_top_tb.sv", 145, 32, ".sva_checker.CHK_014_icache_relookup_C", "v_user/riscv_top_sva_checker", "CHK_014_icache_relookup_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "testbench/sva/riscv_top_tb.sv", 154, 35, ".sva_checker.CHK_015_dcache_refill_exit_C", "v_user/riscv_top_sva_checker", "CHK_015_dcache_refill_exit_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "testbench/sva/riscv_top_tb.sv", 168, 29, ".sva_checker.CHK_016_axi_response_C", "v_user/riscv_top_sva_checker", "CHK_016_axi_response_C", "");
}
