// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscv_top_tb__Syms.h"


void Vriscv_top_tb___024root__trace_chg_0_sub_0(Vriscv_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vriscv_top_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top_tb___024root__trace_chg_0\n"); );
    // Init
    Vriscv_top_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_top_tb___024root*>(voidSelf);
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vriscv_top_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vriscv_top_tb___024root__trace_chg_0_sub_0(Vriscv_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top_tb___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__riscv_top_tb.__PVT__cycles),32);
        bufp->chgBit(oldp+1,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_001_reset_quiet_seen));
        bufp->chgBit(oldp+2,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_002_icache_refill_seen));
        bufp->chgBit(oldp+3,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_003_icache_response_seen));
        bufp->chgBit(oldp+4,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_004_dcache_read_seen));
        bufp->chgBit(oldp+5,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_005_dcache_write_seen));
        bufp->chgBit(oldp+6,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_006_dcache_response_seen));
        bufp->chgBit(oldp+7,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_007_icache_fsm_seen));
        bufp->chgBit(oldp+8,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_008_dcache_fsm_seen));
        bufp->chgBit(oldp+9,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_009_reset_states_seen));
        bufp->chgBit(oldp+10,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_010_icache_read_only_seen));
        bufp->chgBit(oldp+11,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_011_fetch_alignment_seen));
        bufp->chgBit(oldp+12,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_012_core_data_request_seen));
        bufp->chgBit(oldp+13,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_013_icache_refill_exit_seen));
        bufp->chgBit(oldp+14,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_014_icache_relookup_seen));
        bufp->chgBit(oldp+15,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_015_dcache_refill_exit_seen));
        bufp->chgBit(oldp+16,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_016_axi_response_seen));
        bufp->chgBit(oldp+17,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_017_clock_period_seen));
        bufp->chgBit(oldp+18,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_019_reset_duration_seen));
        bufp->chgBit(oldp+19,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_020_reset_release_seen));
        bufp->chgBit(oldp+20,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_021_post_reset_quiet_seen));
        bufp->chgBit(oldp+21,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__clock_posedge_seen));
        bufp->chgDouble(oldp+22,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__last_posedge_time));
        bufp->chgIData(oldp+24,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__reset_cycle_count),32);
        bufp->chgBit(oldp+25,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_022_pipeline_reset_seen));
        bufp->chgBit(oldp+26,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_023_load_store_exclusion_seen));
        bufp->chgBit(oldp+27,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_024_operation_class_seen));
        bufp->chgBit(oldp+28,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_025_invalid_stage_clear_seen));
        bufp->chgBit(oldp+29,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_026_pipeline_stall_seen));
        bufp->chgBit(oldp+30,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_028_zero_register_seen));
        bufp->chgBit(oldp+31,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_029_pipeline_pc_seen));
        bufp->chgBit(oldp+32,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_030_branch_control_seen));
        bufp->chgBit(oldp+33,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_031_pipeline_progress_seen));
        bufp->chgBit(oldp+34,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_032_pipeline_complete_seen));
        bufp->chgBit(oldp+35,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_033_e1_e2_metadata_seen));
        bufp->chgBit(oldp+36,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_034_e2_wb_metadata_seen));
        bufp->chgBit(oldp+37,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_035_add_result_seen));
        bufp->chgBit(oldp+38,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_036_lui_result_seen));
        bufp->chgBit(oldp+39,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_037_commit_destination_seen));
        bufp->chgBit(oldp+40,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_038_load_store_destination_seen));
        bufp->chgBit(oldp+41,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_039_branch_class_seen));
        bufp->chgBit(oldp+42,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_040_stall_cause_seen));
        bufp->chgIData(oldp+43,(vlSymsp->TOP__riscv_top_tb__dut__u_icache__u_tag0.__PVT__ram_read_q),20);
        bufp->chgBit(oldp+44,((1U & (vlSymsp->TOP__riscv_top_tb__dut__u_icache__u_tag0.__PVT__ram_read_q 
                                     >> 0x13U))));
        bufp->chgIData(oldp+45,((0x7ffffU & vlSymsp->TOP__riscv_top_tb__dut__u_icache__u_tag0.__PVT__ram_read_q)),19);
        bufp->chgIData(oldp+46,(vlSymsp->TOP__riscv_top_tb__dut__u_icache__u_tag1.__PVT__ram_read_q),20);
        bufp->chgBit(oldp+47,((1U & (vlSymsp->TOP__riscv_top_tb__dut__u_icache__u_tag1.__PVT__ram_read_q 
                                     >> 0x13U))));
        bufp->chgIData(oldp+48,((0x7ffffU & vlSymsp->TOP__riscv_top_tb__dut__u_icache__u_tag1.__PVT__ram_read_q)),19);
        bufp->chgIData(oldp+49,(vlSymsp->TOP__riscv_top_tb__dut__u_icache__u_data0.__PVT__ram_read_q),32);
        bufp->chgIData(oldp+50,(vlSymsp->TOP__riscv_top_tb__dut__u_icache__u_data1.__PVT__ram_read_q),32);
        bufp->chgIData(oldp+51,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core__u_data0.__PVT__ram_read0_q),32);
        bufp->chgIData(oldp+52,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core__u_data1.__PVT__ram_read0_q),32);
        bufp->chgIData(oldp+53,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core__u_tag0.__PVT__ram_read0_q),21);
        bufp->chgBit(oldp+54,((1U & (vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core__u_tag0.__PVT__ram_read0_q 
                                     >> 0x14U))));
        bufp->chgBit(oldp+55,((1U & (vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core__u_tag0.__PVT__ram_read0_q 
                                     >> 0x13U))));
        bufp->chgIData(oldp+56,((0x7ffffU & vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core__u_tag0.__PVT__ram_read0_q)),19);
        bufp->chgIData(oldp+57,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core__u_tag1.__PVT__ram_read0_q),21);
        bufp->chgBit(oldp+58,((1U & (vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core__u_tag1.__PVT__ram_read0_q 
                                     >> 0x14U))));
        bufp->chgBit(oldp+59,((1U & (vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core__u_tag1.__PVT__ram_read0_q 
                                     >> 0x13U))));
        bufp->chgIData(oldp+60,((0x7ffffU & vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core__u_tag1.__PVT__ram_read0_q)),19);
        bufp->chgIData(oldp+61,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r1_q),32);
        bufp->chgIData(oldp+62,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r2_q),32);
        bufp->chgIData(oldp+63,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r3_q),32);
        bufp->chgIData(oldp+64,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r4_q),32);
        bufp->chgIData(oldp+65,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r5_q),32);
        bufp->chgIData(oldp+66,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r6_q),32);
        bufp->chgIData(oldp+67,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r7_q),32);
        bufp->chgIData(oldp+68,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r8_q),32);
        bufp->chgIData(oldp+69,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r9_q),32);
        bufp->chgIData(oldp+70,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r10_q),32);
        bufp->chgIData(oldp+71,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r11_q),32);
        bufp->chgIData(oldp+72,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r12_q),32);
        bufp->chgIData(oldp+73,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r13_q),32);
        bufp->chgIData(oldp+74,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r14_q),32);
        bufp->chgIData(oldp+75,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r15_q),32);
        bufp->chgIData(oldp+76,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r16_q),32);
        bufp->chgIData(oldp+77,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r17_q),32);
        bufp->chgIData(oldp+78,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r18_q),32);
        bufp->chgIData(oldp+79,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r19_q),32);
        bufp->chgIData(oldp+80,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r20_q),32);
        bufp->chgIData(oldp+81,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r21_q),32);
        bufp->chgIData(oldp+82,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r22_q),32);
        bufp->chgIData(oldp+83,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r23_q),32);
        bufp->chgIData(oldp+84,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r24_q),32);
        bufp->chgIData(oldp+85,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r25_q),32);
        bufp->chgIData(oldp+86,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r26_q),32);
        bufp->chgIData(oldp+87,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r27_q),32);
        bufp->chgIData(oldp+88,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r28_q),32);
        bufp->chgIData(oldp+89,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r29_q),32);
        bufp->chgIData(oldp+90,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r30_q),32);
        bufp->chgIData(oldp+91,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r31_q),32);
        bufp->chgIData(oldp+92,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core__u_data0.__PVT__ram_read1_q),32);
        bufp->chgIData(oldp+93,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core__u_data1.__PVT__ram_read1_q),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+94,((1U & ((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__i_memory__DOT__write_active)) 
                                     & (~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__i_bvalid))))));
        bufp->chgBit(oldp+95,(vlSymsp->TOP__riscv_top_tb.__PVT__i_memory__DOT__write_active));
        bufp->chgBit(oldp+96,(vlSymsp->TOP__riscv_top_tb.__PVT__i_bvalid));
        bufp->chgBit(oldp+97,((1U & (~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__i_memory__DOT__read_active)))));
        bufp->chgBit(oldp+98,(vlSymsp->TOP__riscv_top_tb.__PVT__i_memory__DOT__read_active));
        bufp->chgBit(oldp+99,(vlSymsp->TOP__riscv_top_tb.__PVT__i_rlast));
        bufp->chgIData(oldp+100,((0xffffffe0U & vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__lookup_addr_q)),32);
        bufp->chgCData(oldp+101,(vlSymsp->TOP__riscv_top_tb.__PVT__i_bid),4);
        bufp->chgCData(oldp+102,(vlSymsp->TOP__riscv_top_tb.__PVT__i_memory__DOT__read_id),4);
        bufp->chgBit(oldp+103,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_awvalid_o));
        bufp->chgBit(oldp+104,(vlSymsp->TOP__riscv_top_tb.__PVT__d_awready));
        bufp->chgBit(oldp+105,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wvalid_o));
        bufp->chgBit(oldp+106,(vlSymsp->TOP__riscv_top_tb.__PVT__d_wready));
        bufp->chgBit(oldp+107,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wlast_o));
        bufp->chgBit(oldp+108,(vlSymsp->TOP__riscv_top_tb.__PVT__d_bvalid));
        bufp->chgBit(oldp+109,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_arvalid_o));
        bufp->chgBit(oldp+110,((1U & (~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__d_memory__DOT__read_active)))));
        bufp->chgBit(oldp+111,(vlSymsp->TOP__riscv_top_tb.__PVT__d_memory__DOT__read_active));
        bufp->chgBit(oldp+112,(vlSymsp->TOP__riscv_top_tb.__PVT__d_rlast));
        bufp->chgIData(oldp+113,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_awaddr_o),32);
        bufp->chgIData(oldp+114,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wdata_o),32);
        bufp->chgIData(oldp+115,(vlSymsp->TOP__riscv_top_tb.__PVT__d_rdata),32);
        bufp->chgCData(oldp+116,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_awid_o),4);
        bufp->chgCData(oldp+117,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wstrb_o),4);
        bufp->chgCData(oldp+118,(vlSymsp->TOP__riscv_top_tb.__PVT__d_bid),4);
        bufp->chgCData(oldp+119,(vlSymsp->TOP__riscv_top_tb.__PVT__d_memory__DOT__read_id),4);
        bufp->chgCData(oldp+120,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_awlen_o),8);
        bufp->chgCData(oldp+121,(((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__valid_q)
                                   ? (3U & (vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__buf_q[1U] 
                                            >> 0xdU))
                                   : 1U)),2);
        bufp->chgBit(oldp+122,(vlSymsp->TOP__riscv_top_tb.__PVT__result_valid));
        bufp->chgIData(oldp+123,(vlSymsp->TOP__riscv_top_tb.__PVT__result_data),32);
        bufp->chgIData(oldp+124,(vlSymsp->TOP__riscv_top_tb.__PVT__i_read_bursts),32);
        bufp->chgIData(oldp+125,(vlSymsp->TOP__riscv_top_tb.__PVT__d_read_bursts),32);
        bufp->chgIData(oldp+126,(vlSymsp->TOP__riscv_top_tb.__PVT__d_write_words),32);
        bufp->chgIData(oldp+127,(vlSymsp->TOP__riscv_top_tb.__PVT__d_memory__DOT__read_addr),32);
        bufp->chgCData(oldp+128,(vlSymsp->TOP__riscv_top_tb.__PVT__d_memory__DOT__read_left),8);
        bufp->chgBit(oldp+129,(vlSymsp->TOP__riscv_top_tb.__PVT__d_memory__DOT__write_active));
        bufp->chgIData(oldp+130,(vlSymsp->TOP__riscv_top_tb.__PVT__d_memory__DOT__write_addr),32);
        bufp->chgCData(oldp+131,(vlSymsp->TOP__riscv_top_tb.__PVT__d_memory__DOT__write_id),4);
        bufp->chgIData(oldp+132,(vlSymsp->TOP__riscv_top_tb.__PVT__d_memory__DOT__active_write_addr),32);
        bufp->chgBit(oldp+133,(vlSymsp->TOP__riscv_top_tb.__PVT__i_memory__DOT__result_valid_o));
        bufp->chgIData(oldp+134,(vlSymsp->TOP__riscv_top_tb.__PVT__i_memory__DOT__result_data_o),32);
        bufp->chgIData(oldp+135,(vlSymsp->TOP__riscv_top_tb.__PVT__i_memory__DOT__write_words_o),32);
        bufp->chgIData(oldp+136,(vlSymsp->TOP__riscv_top_tb.__PVT__i_memory__DOT__read_addr),32);
        bufp->chgCData(oldp+137,(vlSymsp->TOP__riscv_top_tb.__PVT__i_memory__DOT__read_left),8);
        bufp->chgIData(oldp+138,(vlSymsp->TOP__riscv_top_tb.__PVT__i_memory__DOT__write_addr),32);
        bufp->chgCData(oldp+139,(vlSymsp->TOP__riscv_top_tb.__PVT__i_memory__DOT__write_id),4);
        bufp->chgIData(oldp+140,(((IData)(vlSymsp->TOP__riscv_top_tb.__PVT__i_memory__DOT__write_active)
                                   ? vlSymsp->TOP__riscv_top_tb.__PVT__i_memory__DOT__write_addr
                                   : 0U)),32);
        bufp->chgBit(oldp+141,(((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__ifence_q) 
                                | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_fetch__DOT__icache_invalidate_q))));
        bufp->chgBit(oldp+142,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_flush_q));
        bufp->chgBit(oldp+143,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_invalidate_q));
        bufp->chgSData(oldp+144,(((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_mux__DOT__cache_access_q)
                                   ? (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__mem_tag_m_q)
                                   : vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__ram_q
                                  [vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__rd_ptr_q])),11);
        bufp->chgIData(oldp+145,((0xfffffffcU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_addr_q)),32);
        bufp->chgBit(oldp+146,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_writeback_q));
        bufp->chgBit(oldp+147,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_cacheable_q));
        bufp->chgBit(oldp+148,(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__axi_error_q));
        bufp->chgIData(oldp+149,((0xfffffffcU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_fetch__DOT__pc_f_q)),32);
        bufp->chgBit(oldp+150,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__mem_error_o));
        bufp->chgIData(oldp+151,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_data_wr_q),32);
        bufp->chgCData(oldp+152,(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__state_q),2);
        bufp->chgCData(oldp+153,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__state_q),4);
        bufp->chgBit(oldp+154,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__pmem_cache_ack_w));
        bufp->chgBit(oldp+155,((0U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__pmem_len_q))));
        bufp->chgBit(oldp+156,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__valid_e1_q));
        bufp->chgBit(oldp+157,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__valid_e2_q));
        bufp->chgBit(oldp+158,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__valid_wb_q));
        bufp->chgSData(oldp+159,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q),10);
        bufp->chgSData(oldp+160,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e2_q),10);
        bufp->chgSData(oldp+161,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_wb_q),10);
        bufp->chgIData(oldp+162,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__pc_e1_q),32);
        bufp->chgIData(oldp+163,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__pc_e2_q),32);
        bufp->chgIData(oldp+164,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__pc_wb_q),32);
        bufp->chgIData(oldp+165,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_e1_q),32);
        bufp->chgIData(oldp+166,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_e2_q),32);
        bufp->chgIData(oldp+167,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_wb_q),32);
        bufp->chgBit(oldp+168,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__branch_taken_q));
        bufp->chgBit(oldp+169,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__branch_ntaken_q));
        bufp->chgBit(oldp+170,(((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__branch_ntaken_q) 
                                | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__branch_taken_q))));
        bufp->chgIData(oldp+171,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__pc_x_q),32);
        bufp->chgIData(oldp+172,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q),32);
        bufp->chgIData(oldp+173,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__operand_ra_wb_q),32);
        bufp->chgIData(oldp+174,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__operand_rb_wb_q),32);
        bufp->chgCData(oldp+175,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q),6);
        bufp->chgBit(oldp+176,(((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.u_mux__DOT____VdfgRegularize_ha7b7af01_2_1) 
                                & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_invalidate_q))));
        bufp->chgBit(oldp+177,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__pmem_cache_accept_w));
        bufp->chgBit(oldp+178,(((2U != (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__count_q)) 
                                & (2U != (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__count_q)))));
        bufp->chgBit(oldp+179,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__mem_cached_invalidate_w));
        bufp->chgBit(oldp+180,(((~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_pmem_mux__DOT__select_q)) 
                                & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__pmem_ack_w))));
        bufp->chgBit(oldp+181,(((~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__pmem_select_w)) 
                                & (2U != (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__u_req__DOT__count_q)))));
        bufp->chgBit(oldp+182,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__mem_uncached_ack_w));
        bufp->chgBit(oldp+183,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__pmem_ack_w));
        bufp->chgIData(oldp+184,((0xfffffffcU & vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                                  [vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][0U])),32);
        bufp->chgBit(oldp+185,(((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.u_mux__DOT____VdfgRegularize_ha7b7af01_2_1) 
                                & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_flush_q))));
        bufp->chgCData(oldp+186,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__pmem_uncached_wr_w),4);
        bufp->chgSData(oldp+187,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__mem_tag_m_q),11);
        bufp->chgBit(oldp+188,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__pmem_select_w));
        bufp->chgBit(oldp+189,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__mem_cached_flush_w));
        bufp->chgBit(oldp+190,(((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.u_mux__DOT____VdfgRegularize_ha7b7af01_2_1) 
                                & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_writeback_q))));
        bufp->chgIData(oldp+191,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                                 [vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][1U]),32);
        bufp->chgSData(oldp+192,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__ram_q
                                 [vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__rd_ptr_q]),11);
        bufp->chgBit(oldp+193,((2U != (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__u_req__DOT__count_q))));
        bufp->chgBit(oldp+194,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__error_q));
        bufp->chgBit(oldp+195,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__pmem_uncached_rd_w));
        bufp->chgBit(oldp+196,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__mem_cached_writeback_w));
        bufp->chgBit(oldp+197,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__accept_w));
        bufp->chgBit(oldp+198,((2U != (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__resp_outstanding_q))));
        bufp->chgBit(oldp+199,((0U != (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__resp_outstanding_q))));
        bufp->chgBit(oldp+200,((0U != (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__u_req__DOT__count_q))));
        bufp->chgWData(oldp+201,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__u_req__DOT__ram_q
                                 [vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q]),77);
        bufp->chgBit(oldp+204,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__req_can_issue_w));
        bufp->chgBit(oldp+205,(((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__req_can_issue_w) 
                                & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.u_axi__DOT____VdfgRegularize_h8a1a94ad_3_0))));
        bufp->chgBit(oldp+206,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__req_is_write_w));
        bufp->chgCData(oldp+207,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__req_len_w),8);
        bufp->chgCData(oldp+208,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__req_cnt_q),8);
        bufp->chgBit(oldp+209,(((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__req_is_write_w) 
                                & ((0U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__req_len_w)) 
                                   & (0U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__req_cnt_q))))));
        bufp->chgBit(oldp+210,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__res_push_w));
        bufp->chgBit(oldp+211,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__resp_pop_w));
        bufp->chgCData(oldp+212,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__resp_outstanding_q),2);
        bufp->chgIData(oldp+213,((0xfffffffcU & vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__u_req__DOT__ram_q
                                  [vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q][0U])),32);
        bufp->chgIData(oldp+214,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__u_req__DOT__ram_q
                                 [vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q][1U]),32);
        bufp->chgCData(oldp+215,((0xfU & vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__u_req__DOT__ram_q
                                  [vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q][2U])),4);
        bufp->chgCData(oldp+216,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__req_cnt_q),8);
        bufp->chgBit(oldp+217,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__valid_q));
        bufp->chgWData(oldp+218,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__buf_q),84);
        bufp->chgBit(oldp+221,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__inport_valid_w));
        bufp->chgBit(oldp+222,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__inport_write_w));
        bufp->chgBit(oldp+223,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__awvalid_q));
        bufp->chgBit(oldp+224,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__wvalid_q));
        bufp->chgBit(oldp+225,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__wlast_q));
        bufp->chgBit(oldp+226,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__wr_cmd_accepted_w));
        bufp->chgBit(oldp+227,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__wr_data_accepted_w));
        bufp->chgBit(oldp+228,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__wr_data_last_w));
        bufp->chgWData(oldp+229,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__u_req__DOT__ram_q[0]),77);
        bufp->chgWData(oldp+232,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__u_req__DOT__ram_q[1]),77);
        bufp->chgBit(oldp+235,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q));
        bufp->chgBit(oldp+236,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__u_req__DOT__wr_ptr_q));
        bufp->chgCData(oldp+237,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__u_req__DOT__count_q),2);
        bufp->chgBit(oldp+238,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_mux__DOT__hold_w));
        bufp->chgBit(oldp+239,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_mux__DOT__cache_access_q));
        bufp->chgCData(oldp+240,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_mux__DOT__pending_q),5);
        bufp->chgBit(oldp+241,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_pmem_mux__DOT__select_q));
        bufp->chgBit(oldp+242,((2U != (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__count_q))));
        bufp->chgBit(oldp+243,((2U != (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__count_q))));
        bufp->chgBit(oldp+244,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__request_complete_w));
        bufp->chgBit(oldp+245,((0U != (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__count_q))));
        bufp->chgWData(oldp+246,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                                 [vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q]),70);
        bufp->chgBit(oldp+249,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__drop_req_w));
        bufp->chgBit(oldp+250,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__request_pending_q));
        bufp->chgBit(oldp+251,(((~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__mem_uncached_ack_w)) 
                                & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__request_pending_q))));
        bufp->chgBit(oldp+252,(((~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.u_uncached__DOT____VdfgRegularize_hf17169b5_1_0)) 
                                & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.u_uncached__DOT____VdfgRegularize_hf17169b5_1_1))));
        bufp->chgBit(oldp+253,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__req_is_drop_w));
        bufp->chgBit(oldp+254,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__dropped_q));
        bufp->chgWData(oldp+255,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q[0]),70);
        bufp->chgWData(oldp+258,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q[1]),70);
        bufp->chgBit(oldp+261,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q));
        bufp->chgBit(oldp+262,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__wr_ptr_q));
        bufp->chgCData(oldp+263,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__count_q),2);
        bufp->chgBit(oldp+264,((0U != (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__count_q))));
        bufp->chgSData(oldp+265,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__ram_q[0]),11);
        bufp->chgSData(oldp+266,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__ram_q[1]),11);
        bufp->chgBit(oldp+267,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__rd_ptr_q));
        bufp->chgBit(oldp+268,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__wr_ptr_q));
        bufp->chgCData(oldp+269,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__count_q),2);
        bufp->chgCData(oldp+270,((0xffU & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_fetch__DOT__pc_f_q 
                                           >> 5U))),8);
        bufp->chgSData(oldp+271,((0x7ffU & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_fetch__DOT__pc_f_q 
                                            >> 2U))),11);
        bufp->chgCData(oldp+272,(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__flush_addr_q),8);
        bufp->chgBit(oldp+273,(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__invalidate_q));
        bufp->chgBit(oldp+274,(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__replace_way_q));
        bufp->chgBit(oldp+275,(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__lookup_valid_q));
        bufp->chgIData(oldp+276,(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__lookup_addr_q),32);
        bufp->chgIData(oldp+277,((vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__lookup_addr_q 
                                  >> 0xdU)),19);
        bufp->chgCData(oldp+278,(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__tag_addr_r),8);
        bufp->chgIData(oldp+279,(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__tag_data_in_r),20);
        bufp->chgBit(oldp+280,(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__tag0_write_r));
        bufp->chgBit(oldp+281,(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__tag1_write_r));
        bufp->chgSData(oldp+282,(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__data_addr_r),11);
        bufp->chgSData(oldp+283,(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__data_write_addr_q),11);
        bufp->chgBit(oldp+284,(((~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__replace_way_q)) 
                                & (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__i_memory__DOT__read_active))));
        bufp->chgBit(oldp+285,(((IData)(vlSymsp->TOP__riscv_top_tb.__PVT__i_memory__DOT__read_active) 
                                & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__replace_way_q))));
        bufp->chgBit(oldp+286,(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__axi_arvalid_q));
        bufp->chgCData(oldp+287,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_fetch__DOT__priv_f_q),2);
        bufp->chgBit(oldp+288,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__tlb_flush_q));
        bufp->chgIData(oldp+289,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_pc_w),32);
        bufp->chgIData(oldp+290,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__pc_m_q),32);
        bufp->chgIData(oldp+291,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_div__DOT__wb_result_q),32);
        bufp->chgBit(oldp+292,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__branch_q));
        bufp->chgBit(oldp+293,((1U & (vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_sr_q 
                                      >> 0x13U))));
        bufp->chgBit(oldp+294,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__branch_ret_q));
        bufp->chgCData(oldp+295,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__exception_e1_q),6);
        bufp->chgIData(oldp+296,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__branch_target_q),32);
        bufp->chgBit(oldp+297,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_fault_page_w));
        bufp->chgBit(oldp+298,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_dec_fault_fetch_w));
        bufp->chgCData(oldp+299,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__branch_csr_priv_o),2);
        bufp->chgCData(oldp+300,(((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__branch_q)
                                   ? (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__branch_csr_priv_o)
                                   : (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__priv_x_q))),2);
        bufp->chgCData(oldp+301,((((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_unaligned_e2_q) 
                                   & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__resp_load_w))
                                   ? 0x14U : (((~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__resp_load_w)) 
                                               & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_unaligned_e2_q))
                                               ? 0x16U
                                               : (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__mem_error_o) 
                                                   & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__resp_load_w))
                                                   ? 0x15U
                                                   : 
                                                  (((~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__resp_load_w)) 
                                                    & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__mem_error_o))
                                                    ? 0x17U
                                                    : 0U))))),6);
        bufp->chgCData(oldp+302,((3U & ((0x20000U & vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_sr_q)
                                         ? (vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_sr_q 
                                            >> 0xbU)
                                         : (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mpriv_q)))),2);
        bufp->chgBit(oldp+303,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_div__DOT__valid_q));
        bufp->chgIData(oldp+304,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_satp_q),32);
        bufp->chgIData(oldp+305,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__csr_wdata_e1_q),32);
        bufp->chgBit(oldp+306,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__ifence_q));
        bufp->chgIData(oldp+307,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q),32);
        bufp->chgBit(oldp+308,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wr_wb_q));
        bufp->chgBit(oldp+309,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__take_interrupt_q));
        bufp->chgIData(oldp+310,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__rd_result_e1_q),32);
        bufp->chgSData(oldp+311,((vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                  >> 0x14U)),12);
        bufp->chgBit(oldp+312,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__branch_jmp_q));
        bufp->chgBit(oldp+313,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__rd_valid_e1_q));
        bufp->chgIData(oldp+314,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_mul__DOT__result_e2_q),32);
        bufp->chgBit(oldp+315,((1U & (vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_sr_q 
                                      >> 0x12U))));
        bufp->chgIData(oldp+316,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__result_q),32);
        bufp->chgBit(oldp+317,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__branch_call_q));
        bufp->chgBit(oldp+318,(vlSymsp->TOP__riscv_top_tb__dut__u_core.u_decode__DOT____Vcellinp__genblk1__DOT__u_dec__fetch_fault_i));
        bufp->chgIData(oldp+319,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_div__DOT__dividend_q),32);
        bufp->chgQData(oldp+320,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_div__DOT__divisor_q),63);
        bufp->chgIData(oldp+322,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_div__DOT__quotient_q),32);
        bufp->chgIData(oldp+323,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_div__DOT__q_mask_q),32);
        bufp->chgBit(oldp+324,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_div__DOT__div_inst_q));
        bufp->chgBit(oldp+325,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_div__DOT__div_busy_q));
        bufp->chgBit(oldp+326,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_div__DOT__invert_res_q));
        bufp->chgBit(oldp+327,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_div__DOT__div_complete_w));
        bufp->chgIData(oldp+328,(((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_div__DOT__div_inst_q)
                                   ? ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_div__DOT__invert_res_q)
                                       ? (- vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_div__DOT__quotient_q)
                                       : vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_div__DOT__quotient_q)
                                   : ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_div__DOT__invert_res_q)
                                       ? (- vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_div__DOT__dividend_q)
                                       : vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_div__DOT__dividend_q))),32);
        bufp->chgBit(oldp+329,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_fetch__DOT__active_q));
        bufp->chgBit(oldp+330,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_fetch__DOT__branch_q));
        bufp->chgIData(oldp+331,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_fetch__DOT__branch_pc_q),32);
        bufp->chgCData(oldp+332,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_fetch__DOT__branch_priv_q),2);
        bufp->chgBit(oldp+333,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_fetch__DOT__stall_q));
        bufp->chgBit(oldp+334,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_fetch__DOT__icache_fetch_q));
        bufp->chgBit(oldp+335,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_fetch__DOT__icache_invalidate_q));
        bufp->chgIData(oldp+336,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_fetch__DOT__pc_f_q),32);
        bufp->chgIData(oldp+337,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_fetch__DOT__pc_d_q),32);
        bufp->chgBit(oldp+338,(((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_fetch__DOT__branch_d_q) 
                                | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_fetch__DOT__branch_q))));
        bufp->chgBit(oldp+339,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_fetch__DOT__branch_d_q));
        bufp->chgWData(oldp+340,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_fetch__DOT__skid_buffer_q),66);
        bufp->chgBit(oldp+343,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_fetch__DOT__skid_valid_q));
        bufp->chgIData(oldp+344,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_addr_q),32);
        bufp->chgBit(oldp+345,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_rd_q));
        bufp->chgCData(oldp+346,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_wr_q),4);
        bufp->chgBit(oldp+347,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_unaligned_e1_q));
        bufp->chgBit(oldp+348,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_unaligned_e2_q));
        bufp->chgBit(oldp+349,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_load_q));
        bufp->chgBit(oldp+350,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_xb_q));
        bufp->chgBit(oldp+351,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_xh_q));
        bufp->chgBit(oldp+352,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_ls_q));
        bufp->chgBit(oldp+353,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__pending_lsu_e2_q));
        bufp->chgBit(oldp+354,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__resp_load_w));
        bufp->chgIData(oldp+355,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__resp_addr_w),32);
        bufp->chgBit(oldp+356,((1U & (IData)((vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                                              [vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                              >> 1U)))));
        bufp->chgBit(oldp+357,((1U & (IData)((vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                                              [vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                              >> 2U)))));
        bufp->chgBit(oldp+358,((1U & (IData)((vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                                              [vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                              >> 3U)))));
        bufp->chgBit(oldp+359,(((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_unaligned_e2_q) 
                                & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__resp_load_w))));
        bufp->chgBit(oldp+360,(((~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__resp_load_w)) 
                                & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_unaligned_e2_q))));
        bufp->chgBit(oldp+361,(((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__mem_error_o) 
                                & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__resp_load_w))));
        bufp->chgBit(oldp+362,(((~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__resp_load_w)) 
                                & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__mem_error_o))));
        bufp->chgQData(oldp+363,((((QData)((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_addr_q)) 
                                   << 4U) | (QData)((IData)(
                                                            ((((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_ls_q) 
                                                               << 3U) 
                                                              | ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_xh_q) 
                                                                 << 2U)) 
                                                             | (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_xb_q) 
                                                                 << 1U) 
                                                                | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_load_q))))))),36);
        bufp->chgQData(oldp+365,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                                 [vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q]),36);
        bufp->chgBit(oldp+367,((2U != (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q))));
        bufp->chgBit(oldp+368,((0U != (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q))));
        bufp->chgQData(oldp+369,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q[0]),36);
        bufp->chgQData(oldp+371,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q[1]),36);
        bufp->chgBit(oldp+373,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q));
        bufp->chgBit(oldp+374,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q));
        bufp->chgCData(oldp+375,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q),2);
        bufp->chgIData(oldp+376,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__i),32);
        bufp->chgIData(oldp+377,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_mul__DOT__result_e3_q),32);
        bufp->chgQData(oldp+378,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_mul__DOT__operand_a_e1_q),33);
        bufp->chgQData(oldp+380,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_mul__DOT__operand_b_e1_q),33);
        bufp->chgBit(oldp+382,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_mul__DOT__mulhi_sel_e1_q));
        bufp->chgWData(oldp+383,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_mul__DOT__mult_result_w),65);
        bufp->chgIData(oldp+386,(((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_mul__DOT__mulhi_sel_e1_q)
                                   ? vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_mul__DOT__mult_result_w[1U]
                                   : vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_mul__DOT__mult_result_w[0U])),32);
        bufp->chgCData(oldp+387,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__priv_x_q),2);
        bufp->chgBit(oldp+388,((1U & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                                      >> 1U))));
        bufp->chgBit(oldp+389,((1U & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                                      >> 2U))));
        bufp->chgBit(oldp+390,((1U & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                                      >> 5U))));
        bufp->chgBit(oldp+391,((1U & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                                      >> 6U))));
        bufp->chgCData(oldp+392,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_e1_w),5);
        bufp->chgIData(oldp+393,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__operand_ra_e1_q),32);
        bufp->chgIData(oldp+394,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__operand_rb_e1_q),32);
        bufp->chgBit(oldp+395,((1U & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e2_q) 
                                      >> 1U))));
        bufp->chgBit(oldp+396,((1U & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e2_q) 
                                      >> 5U))));
        bufp->chgCData(oldp+397,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_fault_w),6);
        bufp->chgBit(oldp+398,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__div_pending_q));
        bufp->chgBit(oldp+399,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_pending_q));
        bufp->chgCData(oldp+400,((0x1fU & (vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+401,((0x1fU & (vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                           >> 0x14U))),5);
        bufp->chgIData(oldp+402,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__npc_e1_q),32);
        bufp->chgCData(oldp+403,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_e1_q),6);
        bufp->chgBit(oldp+404,((1U & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q))));
        bufp->chgBit(oldp+405,((1U & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                                      >> 3U))));
        bufp->chgBit(oldp+406,((1U & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                                      >> 4U))));
        bufp->chgBit(oldp+407,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wr_e2_q));
        bufp->chgIData(oldp+408,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_e2_q),32);
        bufp->chgIData(oldp+409,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_e2_q),32);
        bufp->chgIData(oldp+410,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__npc_e2_q),32);
        bufp->chgIData(oldp+411,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__operand_ra_e2_q),32);
        bufp->chgIData(oldp+412,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__operand_rb_e2_q),32);
        bufp->chgCData(oldp+413,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_e2_q),6);
        bufp->chgBit(oldp+414,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__load_store_e2_w));
        bufp->chgBit(oldp+415,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__squash_e1_e2_q));
        bufp->chgIData(oldp+416,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__npc_wb_q),32);
        bufp->chgCData(oldp+417,((0x1fU & (vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                           >> 7U))),5);
        bufp->chgCData(oldp+418,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__flush_addr_q),8);
        bufp->chgIData(oldp+419,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__mem_addr_m_q),32);
        bufp->chgIData(oldp+420,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__mem_data_m_q),32);
        bufp->chgCData(oldp+421,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__mem_wr_m_q),4);
        bufp->chgBit(oldp+422,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__mem_rd_m_q));
        bufp->chgBit(oldp+423,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__mem_inval_m_q));
        bufp->chgBit(oldp+424,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__mem_writeback_m_q));
        bufp->chgBit(oldp+425,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__mem_flush_m_q));
        bufp->chgIData(oldp+426,((vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__mem_addr_m_q 
                                  >> 0xdU)),19);
        bufp->chgBit(oldp+427,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__replace_way_q));
        bufp->chgBit(oldp+428,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__flushing_q));
        bufp->chgCData(oldp+429,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__tag_addr_m_r),8);
        bufp->chgIData(oldp+430,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__tag_data_in_m_r),21);
        bufp->chgSData(oldp+431,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__data_write_addr_q),11);
        bufp->chgIData(oldp+432,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__data0_data_in_m_w),32);
        bufp->chgBit(oldp+433,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__flush_last_q));
        bufp->chgBit(oldp+434,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__pmem_rd_q));
        bufp->chgBit(oldp+435,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__pmem_wr0_q));
        bufp->chgCData(oldp+436,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__pmem_len_q),8);
        bufp->chgIData(oldp+437,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__pmem_addr_q),32);
        bufp->chgCData(oldp+438,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__pmem_wr_q),4);
        bufp->chgIData(oldp+439,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__pmem_write_data_q),32);
        bufp->chgWData(oldp+440,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__dbg_state),80);
        bufp->chgCData(oldp+443,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mpriv_q),2);
        bufp->chgBit(oldp+444,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__branch_r));
        bufp->chgIData(oldp+445,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__branch_target_r),32);
        bufp->chgIData(oldp+446,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__irq_masked_r),32);
        bufp->chgIData(oldp+447,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_sr_q),32);
        bufp->chgBit(oldp+448,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__reset_q));
        bufp->chgSData(oldp+449,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i),12);
        bufp->chgIData(oldp+450,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mepc_q),32);
        bufp->chgIData(oldp+451,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mcause_q),32);
        bufp->chgIData(oldp+452,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mtvec_q),32);
        bufp->chgIData(oldp+453,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mip_q),32);
        bufp->chgIData(oldp+454,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mie_q),32);
        bufp->chgIData(oldp+455,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mcycle_q),32);
        bufp->chgIData(oldp+456,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mcycle_h_q),32);
        bufp->chgIData(oldp+457,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mscratch_q),32);
        bufp->chgIData(oldp+458,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mtval_q),32);
        bufp->chgIData(oldp+459,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mtimecmp_q),32);
        bufp->chgBit(oldp+460,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mtime_ie_q));
        bufp->chgIData(oldp+461,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_medeleg_q),32);
        bufp->chgIData(oldp+462,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mideleg_q),32);
        bufp->chgIData(oldp+463,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_sepc_q),32);
        bufp->chgIData(oldp+464,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_stvec_q),32);
        bufp->chgIData(oldp+465,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_scause_q),32);
        bufp->chgIData(oldp+466,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_stval_q),32);
        bufp->chgIData(oldp+467,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_sscratch_q),32);
        bufp->chgIData(oldp+468,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__irq_pending_r),32);
        bufp->chgCData(oldp+469,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__irq_priv_q),2);
        bufp->chgBit(oldp+470,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mip_upd_q));
        bufp->chgIData(oldp+471,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mepc_r),32);
        bufp->chgIData(oldp+472,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mcause_r),32);
        bufp->chgIData(oldp+473,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mtval_r),32);
        bufp->chgIData(oldp+474,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_sr_r),32);
        bufp->chgIData(oldp+475,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mtvec_r),32);
        bufp->chgIData(oldp+476,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mip_r),32);
        bufp->chgIData(oldp+477,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mie_r),32);
        bufp->chgCData(oldp+478,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mpriv_r),2);
        bufp->chgIData(oldp+479,(((IData)(1U) + vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mcycle_q)),32);
        bufp->chgIData(oldp+480,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mscratch_r),32);
        bufp->chgIData(oldp+481,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mtimecmp_r),32);
        bufp->chgBit(oldp+482,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mtime_ie_r));
        bufp->chgIData(oldp+483,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_medeleg_r),32);
        bufp->chgIData(oldp+484,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mideleg_r),32);
        bufp->chgIData(oldp+485,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mip_next_q),32);
        bufp->chgIData(oldp+486,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mip_next_r),32);
        bufp->chgIData(oldp+487,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_sepc_r),32);
        bufp->chgIData(oldp+488,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_stvec_r),32);
        bufp->chgIData(oldp+489,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_scause_r),32);
        bufp->chgIData(oldp+490,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_stval_r),32);
        bufp->chgIData(oldp+491,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_satp_r),32);
        bufp->chgIData(oldp+492,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_sscratch_r),32);
        bufp->chgBit(oldp+493,((0x10U == (0x30U & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U] 
                     | vlSelfRef.__Vm_traceActivity
                     [4U]))) {
        bufp->chgIData(oldp+494,(((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_mux__DOT__cache_access_q)
                                   ? vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__data_r
                                   : vlSymsp->TOP__riscv_top_tb.__PVT__d_rdata)),32);
        bufp->chgCData(oldp+495,(((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.u_mux__DOT____VdfgRegularize_ha7b7af01_2_4)
                                   ? (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__mem_d_wr_o)
                                   : 0U)),4);
        bufp->chgCData(oldp+496,(((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__pmem_select_w)
                                   ? ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__VdfgRegularize_h82da71bd_1_2)
                                       ? 7U : 0U) : 0U)),8);
        bufp->chgIData(oldp+497,(((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__pmem_select_w)
                                   ? vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__pmem_addr_w
                                   : (0xfffffffcU & 
                                      vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                                      [vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][0U]))),32);
        bufp->chgIData(oldp+498,(((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__pmem_select_w)
                                   ? vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__pmem_write_data_w
                                   : vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                                  [vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][1U])),32);
        __Vtemp_1[0U] = (IData)((((QData)((IData)(((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__pmem_select_w)
                                                    ? vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__pmem_write_data_w
                                                    : 
                                                   vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                                                   [vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][1U]))) 
                                  << 0x20U) | (QData)((IData)(
                                                              ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__pmem_select_w)
                                                                ? vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__pmem_addr_w
                                                                : 
                                                               (0xfffffffcU 
                                                                & vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                                                                [vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][0U]))))));
        __Vtemp_1[1U] = (IData)(((((QData)((IData)(
                                                   ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__pmem_select_w)
                                                     ? vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__pmem_write_data_w
                                                     : 
                                                    vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                                                    [vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][1U]))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__pmem_select_w)
                                                                 ? vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__pmem_addr_w
                                                                 : 
                                                                (0xfffffffcU 
                                                                 & vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                                                                 [vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][0U]))))) 
                                 >> 0x20U));
        __Vtemp_1[2U] = ((((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__pmem_select_w)
                            ? ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__VdfgRegularize_h82da71bd_1_2)
                                ? 7U : 0U) : 0U) << 5U) 
                         | (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_pmem_mux__DOT__outport_rd_r) 
                             << 4U) | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_pmem_mux__DOT__outport_wr_r)));
        bufp->chgWData(oldp+499,(__Vtemp_1),77);
        __Vtemp_2[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_data_wr_q)) 
                                  << 0x20U) | (QData)((IData)(
                                                              (0xfffffffcU 
                                                               & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_addr_q)))));
        __Vtemp_2[1U] = (IData)(((((QData)((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_data_wr_q)) 
                                   << 0x20U) | (QData)((IData)(
                                                               (0xfffffffcU 
                                                                & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_addr_q)))) 
                                 >> 0x20U));
        __Vtemp_2[2U] = (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__drop_req_w) 
                          << 5U) | (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__mem_uncached_rd_w) 
                                     << 4U) | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__mem_uncached_wr_w)));
        bufp->chgWData(oldp+502,(__Vtemp_2),70);
        bufp->chgIData(oldp+505,(((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__branch_q)
                                   ? vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__branch_target_q
                                   : vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__branch_target_r)),32);
        bufp->chgBit(oldp+506,((((~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__mem_accept_o)) 
                                 & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_writeback_q) 
                                    | ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_flush_q) 
                                       | ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_invalidate_q) 
                                          | ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__mem_d_rd_o) 
                                             | (0U 
                                                != (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__mem_d_wr_o))))))) 
                                | ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__delay_lsu_e2_w) 
                                   | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_unaligned_e1_q)))));
        bufp->chgBit(oldp+507,(((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_pending_q) 
                                | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_csr_w))));
        bufp->chgBit(oldp+508,((1U & ((~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__stall_w)) 
                                      & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_wb_q) 
                                         >> 3U)))));
        bufp->chgBit(oldp+509,(((~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__stall_w)) 
                                & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_wb_q) 
                                   >> 9U))));
        bufp->chgBit(oldp+510,(((6U != (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__state_q)) 
                                & (6U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__next_state_r)))));
        bufp->chgBit(oldp+511,(((7U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__state_q)) 
                                & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__evict_way_w) 
                                   | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__mem_writeback_m_q)))));
        bufp->chgBit(oldp+512,((((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                                 & ((0x344U == (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                                >> 0x14U)) 
                                    | (0x144U == (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                                  >> 0x14U)))) 
                                | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mip_upd_q))));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+513,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__CHK_018_clock_duty_seen));
        bufp->chgBit(oldp+514,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__clock_negedge_seen));
        bufp->chgDouble(oldp+515,(vlSymsp->TOP__riscv_top_tb__dut.__PVT__sva_checker__DOT__last_negedge_time));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+517,(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__axi_arvalid_o));
        bufp->chgBit(oldp+518,(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__req_valid_o));
        bufp->chgBit(oldp+519,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__mem_ack_o));
        bufp->chgIData(oldp+520,(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__inst_r),32);
        bufp->chgBit(oldp+521,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__mem_d_rd_o));
        bufp->chgBit(oldp+522,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__mem_accept_o));
        bufp->chgBit(oldp+523,(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__req_accept_o));
        bufp->chgCData(oldp+524,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__mem_d_wr_o),4);
        bufp->chgBit(oldp+525,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__mem_i_rd_o));
        bufp->chgBit(oldp+526,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__stall_w));
        bufp->chgBit(oldp+527,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_squash_e1_e2_w));
        bufp->chgCData(oldp+528,((0x1fU & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                           >> 0xfU))),5);
        bufp->chgIData(oldp+529,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r),32);
        bufp->chgCData(oldp+530,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_e2_r),6);
        bufp->chgBit(oldp+531,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_valid_wb_w));
        bufp->chgCData(oldp+532,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w),5);
        bufp->chgCData(oldp+533,(((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__VdfgRegularize_h82da71bd_1_2)
                                   ? 7U : 0U)),8);
        bufp->chgBit(oldp+534,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__mem_accept_r));
        bufp->chgIData(oldp+535,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__pmem_addr_w),32);
        bufp->chgBit(oldp+536,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__pmem_rd_w));
        bufp->chgIData(oldp+537,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__data_r),32);
        bufp->chgBit(oldp+538,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__mem_cached_rd_w));
        bufp->chgCData(oldp+539,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_pmem_mux__DOT__outport_wr_r),4);
        bufp->chgCData(oldp+540,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__pmem_wr_w),4);
        bufp->chgBit(oldp+541,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_pmem_mux__DOT__outport_rd_r));
        bufp->chgCData(oldp+542,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__mem_uncached_wr_w),4);
        bufp->chgBit(oldp+543,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__mem_uncached_rd_w));
        bufp->chgIData(oldp+544,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__pmem_write_data_w),32);
        bufp->chgBit(oldp+545,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__mem_ack_r));
        bufp->chgBit(oldp+546,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_axi__DOT__req_push_w));
        bufp->chgBit(oldp+547,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_mux__DOT__request_w));
        bufp->chgCData(oldp+548,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_mux__DOT__pending_r),5);
        bufp->chgBit(oldp+549,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__request_w));
        bufp->chgBit(oldp+550,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__req_push_w));
        bufp->chgBit(oldp+551,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_uncached__DOT__res_push_w));
        bufp->chgCData(oldp+552,(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__next_state_r),2);
        bufp->chgBit(oldp+553,(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__tag0_hit_w));
        bufp->chgBit(oldp+554,(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__tag1_hit_w));
        bufp->chgBit(oldp+555,(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__tag_hit_any_w));
        bufp->chgCData(oldp+556,((0x1fU & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                           >> 7U))),5);
        bufp->chgBit(oldp+557,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__fetch_accept_o));
        bufp->chgIData(oldp+558,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r),32);
        bufp->chgBit(oldp+559,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o));
        bufp->chgCData(oldp+560,((0x1fU & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                           >> 0x14U))),5);
        bufp->chgBit(oldp+561,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__opcode_issue_r));
        bufp->chgBit(oldp+562,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_invalid_o));
        bufp->chgBit(oldp+563,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_mul_w));
        bufp->chgBit(oldp+564,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__branch_request_o));
        bufp->chgBit(oldp+565,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__writeback_mem_valid_w));
        bufp->chgIData(oldp+566,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w),32);
        bufp->chgBit(oldp+567,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_invalid_w));
        bufp->chgBit(oldp+568,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__branch_d_exec_request_w));
        bufp->chgBit(oldp+569,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_dec_valid_w));
        bufp->chgBit(oldp+570,(((3U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                | ((0x1003U == (0x707fU 
                                                & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                   | ((0x2003U == (0x707fU 
                                                   & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                      | ((0x4003U == 
                                          (0x707fU 
                                           & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                         | ((0x5003U 
                                             == (0x707fU 
                                                 & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                            | ((0x6003U 
                                                == 
                                                (0x707fU 
                                                 & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                               | ((0x23U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                                  | ((0x1023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                                     | (0x2023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))))))))))));
        bufp->chgIData(oldp+571,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__wb_result_r),32);
        bufp->chgBit(oldp+572,(((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_57) 
                                | ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_64) 
                                   | ((0x4063U == (0x707fU 
                                                   & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                      | ((0x5063U == 
                                          (0x707fU 
                                           & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                         | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_63)))))));
        bufp->chgBit(oldp+573,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_exec_w));
        bufp->chgIData(oldp+574,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__branch_target_r),32);
        bufp->chgBit(oldp+575,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_csr_w));
        bufp->chgIData(oldp+576,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_dec_instr_w),32);
        bufp->chgBit(oldp+577,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_div_w));
        bufp->chgBit(oldp+578,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_rd_valid_w));
        bufp->chgBit(oldp+579,((0x2004033U == (0xfe00707fU 
                                               & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))));
        bufp->chgBit(oldp+580,((0x2005033U == (0xfe00707fU 
                                               & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))));
        bufp->chgBit(oldp+581,((0x2006033U == (0xfe00707fU 
                                               & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))));
        bufp->chgBit(oldp+582,((0x2007033U == (0xfe00707fU 
                                               & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))));
        bufp->chgBit(oldp+583,(((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_div__DOT__div_operation_w) 
                                | ((0x2006033U == (0xfe00707fU 
                                                   & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                   | (0x2007033U == 
                                      (0xfe00707fU 
                                       & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))))));
        bufp->chgBit(oldp+584,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_div__DOT__signed_operation_w));
        bufp->chgBit(oldp+585,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_div__DOT__div_operation_w));
        bufp->chgBit(oldp+586,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_div__DOT__div_start_w));
        bufp->chgIData(oldp+587,((0xfffff000U & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)),32);
        bufp->chgIData(oldp+588,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__imm12_r),32);
        bufp->chgIData(oldp+589,((((- (IData)((vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                               >> 0x1fU))) 
                                   << 0xdU) | (((0x1000U 
                                                 & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                                    >> 0x13U)) 
                                                | (0x800U 
                                                   & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                                      << 4U))) 
                                               | ((0x7e0U 
                                                   & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                                        >> 7U)))))),32);
        bufp->chgIData(oldp+590,((((- (IData)((vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                               >> 0x1fU))) 
                                   << 0x14U) | (((0xff000U 
                                                  & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w) 
                                                 | (0x800U 
                                                    & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                                       >> 9U))) 
                                                | ((0x7e0U 
                                                    & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                                         >> 0x14U)))))),32);
        bufp->chgCData(oldp+591,((0x1fU & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+592,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__alu_func_r),4);
        bufp->chgIData(oldp+593,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__alu_input_a_r),32);
        bufp->chgIData(oldp+594,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__alu_input_b_r),32);
        bufp->chgIData(oldp+595,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__u_alu__DOT__result_r),32);
        bufp->chgIData(oldp+596,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__less_than_signed__Vstatic__v),32);
        bufp->chgIData(oldp+597,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__greater_than_signed__Vstatic__v),32);
        bufp->chgBit(oldp+598,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__branch_r));
        bufp->chgBit(oldp+599,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__branch_taken_r));
        bufp->chgBit(oldp+600,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__branch_call_r));
        bufp->chgBit(oldp+601,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__branch_ret_r));
        bufp->chgBit(oldp+602,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__branch_jmp_r));
        bufp->chgSData(oldp+603,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_right_fill_r),16);
        bufp->chgIData(oldp+604,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_right_1_r),32);
        bufp->chgIData(oldp+605,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_right_2_r),32);
        bufp->chgIData(oldp+606,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_right_4_r),32);
        bufp->chgIData(oldp+607,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_right_8_r),32);
        bufp->chgIData(oldp+608,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_left_1_r),32);
        bufp->chgIData(oldp+609,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_left_2_r),32);
        bufp->chgIData(oldp+610,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_left_4_r),32);
        bufp->chgIData(oldp+611,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_left_8_r),32);
        bufp->chgIData(oldp+612,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__u_alu__DOT__sub_res_w),32);
        bufp->chgBit(oldp+613,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_fetch__DOT__icache_busy_w));
        bufp->chgBit(oldp+614,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_fetch__DOT__stall_w));
        bufp->chgBit(oldp+615,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__issue_lsu_e1_w));
        bufp->chgBit(oldp+616,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__complete_ok_e2_w));
        bufp->chgBit(oldp+617,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__complete_err_e2_w));
        bufp->chgBit(oldp+618,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__delay_lsu_e2_w));
        bufp->chgBit(oldp+619,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__load_inst_w));
        bufp->chgBit(oldp+620,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__load_signed_inst_w));
        bufp->chgBit(oldp+621,(((0x23U == (0x707fU 
                                           & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                | ((0x1023U == (0x707fU 
                                                & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                   | (0x2023U == (0x707fU 
                                                  & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))))));
        bufp->chgBit(oldp+622,(((3U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                | (0x4003U == (0x707fU 
                                               & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)))));
        bufp->chgBit(oldp+623,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__req_lh_w));
        bufp->chgBit(oldp+624,(((0x2003U == (0x707fU 
                                             & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                | (0x6003U == (0x707fU 
                                               & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)))));
        bufp->chgBit(oldp+625,((0x23U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))));
        bufp->chgBit(oldp+626,((0x1023U == (0x707fU 
                                            & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))));
        bufp->chgBit(oldp+627,((0x2023U == (0x707fU 
                                            & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))));
        bufp->chgBit(oldp+628,(((0x2023U == (0x707fU 
                                             & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                | ((0x2003U == (0x707fU 
                                                & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                   | (0x6003U == (0x707fU 
                                                  & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))))));
        bufp->chgBit(oldp+629,(((0x1023U == (0x707fU 
                                             & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__req_lh_w))));
        bufp->chgIData(oldp+630,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_addr_r),32);
        bufp->chgBit(oldp+631,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_unaligned_r));
        bufp->chgIData(oldp+632,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_data_r),32);
        bufp->chgBit(oldp+633,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_rd_r));
        bufp->chgCData(oldp+634,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_wr_r),4);
        bufp->chgBit(oldp+635,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__dcache_flush_w));
        bufp->chgBit(oldp+636,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__dcache_writeback_w));
        bufp->chgBit(oldp+637,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__dcache_invalidate_w));
        bufp->chgCData(oldp+638,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__addr_lsb_r),2);
        bufp->chgBit(oldp+639,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__load_byte_r));
        bufp->chgBit(oldp+640,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__load_half_r));
        bufp->chgBit(oldp+641,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__load_signed_r));
        bufp->chgBit(oldp+642,(vlSymsp->TOP__riscv_top_tb__dut__u_core.u_lsu__DOT____Vcellinp__u_lsu_request__push_i));
        bufp->chgQData(oldp+643,(((0x2002033U == (0xfe00707fU 
                                                  & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))
                                   ? (QData)((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r))
                                   : ((0x2001033U == 
                                       (0xfe00707fU 
                                        & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))
                                       ? (((QData)((IData)(
                                                           (vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r 
                                                            >> 0x1fU))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r)))
                                       : (QData)((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r))))),33);
        bufp->chgQData(oldp+645,(((0x2002033U == (0xfe00707fU 
                                                  & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))
                                   ? vlSymsp->TOP__riscv_top_tb__dut__u_core.u_mul__DOT____VdfgRegularize_h4f118b46_0_3
                                   : ((0x2001033U == 
                                       (0xfe00707fU 
                                        & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))
                                       ? vlSymsp->TOP__riscv_top_tb__dut__u_core.u_mul__DOT____VdfgRegularize_h4f118b46_0_3
                                       : (QData)((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r))))),33);
        bufp->chgBit(oldp+647,(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_mul__DOT__mult_inst_w));
        bufp->chgBit(oldp+648,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__opcode_valid_w));
        bufp->chgBit(oldp+649,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__opcode_accept_r));
        bufp->chgCData(oldp+650,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_e2_w),5);
        bufp->chgIData(oldp+651,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_e2_r),32);
        bufp->chgIData(oldp+652,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__scoreboard_r),32);
        bufp->chgIData(oldp+653,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__ra0_value_r),32);
        bufp->chgIData(oldp+654,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__rb0_value_r),32);
        bufp->chgBit(oldp+655,((0U != (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_e2_r))));
        bufp->chgBit(oldp+656,(((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__branch_d_exec_request_w) 
                                & (0U != (3U & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__branch_target_r)))));
        bufp->chgBit(oldp+657,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__valid_e2_w));
        bufp->chgWData(oldp+658,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str),80);
        bufp->chgWData(oldp+661,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra),80);
        bufp->chgWData(oldp+664,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb),80);
        bufp->chgWData(oldp+667,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd),80);
        bufp->chgIData(oldp+670,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_imm),32);
        bufp->chgIData(oldp+671,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_pc),32);
        bufp->chgWData(oldp+672,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str),80);
        bufp->chgWData(oldp+675,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra),80);
        bufp->chgWData(oldp+678,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb),80);
        bufp->chgWData(oldp+681,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd),80);
        bufp->chgIData(oldp+684,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm),32);
        bufp->chgIData(oldp+685,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_pc),32);
        bufp->chgWData(oldp+686,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str),80);
        bufp->chgWData(oldp+689,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra),80);
        bufp->chgWData(oldp+692,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb),80);
        bufp->chgWData(oldp+695,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rd),80);
        bufp->chgIData(oldp+698,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_imm),32);
        bufp->chgIData(oldp+699,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_pc),32);
        bufp->chgCData(oldp+700,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__next_state_r),4);
        bufp->chgBit(oldp+701,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__tag_hit_any_m_w));
        bufp->chgBit(oldp+702,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__tag0_hit_m_w));
        bufp->chgBit(oldp+703,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__tag1_hit_m_w));
        bufp->chgBit(oldp+704,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__evict_way_w));
        bufp->chgCData(oldp+705,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__tag_addr_x_r),8);
        bufp->chgBit(oldp+706,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__tag0_write_m_r));
        bufp->chgBit(oldp+707,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__tag1_write_m_r));
        bufp->chgBit(oldp+708,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__evict_way_r));
        bufp->chgIData(oldp+709,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__evict_data_r),32);
        bufp->chgIData(oldp+710,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__evict_addr_r),27);
        bufp->chgSData(oldp+711,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__data_addr_x_r),11);
        bufp->chgSData(oldp+712,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__data_addr_m_r),11);
        bufp->chgCData(oldp+713,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__data0_write_m_r),4);
        bufp->chgCData(oldp+714,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__data1_write_m_r),4);
        bufp->chgBit(oldp+715,(((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                                & (0x73U == vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))));
        bufp->chgBit(oldp+716,(((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                                & (0x100073U == vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w))));
        bufp->chgBit(oldp+717,(((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                                & (0x200073U == (0xcfffffffU 
                                                 & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)))));
        bufp->chgCData(oldp+718,((3U & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                        >> 0x1cU))),2);
        bufp->chgBit(oldp+719,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__csrrw_w));
        bufp->chgBit(oldp+720,(((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                                & (0x2073U == (0x707fU 
                                               & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)))));
        bufp->chgBit(oldp+721,(((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                                & (0x3073U == (0x707fU 
                                               & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)))));
        bufp->chgBit(oldp+722,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__csrrwi_w));
        bufp->chgBit(oldp+723,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__csrrsi_w));
        bufp->chgBit(oldp+724,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__csrrci_w));
        bufp->chgBit(oldp+725,(((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                                & (0x10500073U == (0xffff8fffU 
                                                   & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)))));
        bufp->chgBit(oldp+726,(((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                                & (0xfU == (0x707fU 
                                            & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)))));
        bufp->chgBit(oldp+727,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__sfence_w));
        bufp->chgBit(oldp+728,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__ifence_w));
        bufp->chgCData(oldp+729,((3U & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                        >> 0x1cU))),2);
        bufp->chgBit(oldp+730,((3U == (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+731,(((IData)(((0U != (0xf8000U 
                                                 & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                         | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__csrrw_w))) 
                                | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__csrrwi_w))));
        bufp->chgBit(oldp+732,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__VdfgExtracted_h8b06e925__0));
        bufp->chgBit(oldp+733,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__VdfgExtracted_hefcb34c3__0));
        bufp->chgIData(oldp+734,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__data_r),32);
        bufp->chgBit(oldp+735,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__satp_update_w));
        bufp->chgIData(oldp+736,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr__u_csrfile.__PVT__rdata_r),32);
        bufp->chgBit(oldp+737,(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__eret_fault_w));
        bufp->chgSData(oldp+738,((vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                                  >> 0x14U)),12);
    }
    bufp->chgBit(oldp+739,(vlSymsp->TOP__riscv_top_tb.__PVT__clk));
    bufp->chgBit(oldp+740,(vlSymsp->TOP__riscv_top_tb.__PVT__rst));
    bufp->chgIData(oldp+741,(vlSymsp->TOP__riscv_top_tb.__PVT__i_rdata),32);
    bufp->chgIData(oldp+742,(vlSymsp->TOP__riscv_top_tb.__PVT__d_memory__DOT__i),32);
    bufp->chgIData(oldp+743,(vlSymsp->TOP__riscv_top_tb.__PVT__i_memory__DOT__i),32);
    bufp->chgBit(oldp+744,(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__tag_dirty_any_m_w));
    bufp->chgBit(oldp+745,((((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__tag0_hit_m_w) 
                             & (vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core__u_tag0.__PVT__ram_read0_q 
                                >> 0x13U)) | ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__tag1_hit_m_w) 
                                              & (vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core__u_tag1.__PVT__ram_read0_q 
                                                 >> 0x13U)))));
}

void Vriscv_top_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top_tb___024root__trace_cleanup\n"); );
    // Init
    Vriscv_top_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_top_tb___024root*>(voidSelf);
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
