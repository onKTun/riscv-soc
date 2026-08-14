// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top_tb.h for the primary calling header

#include "Vriscv_top_tb__pch.h"
#include "Vriscv_top_tb__Syms.h"
#include "Vriscv_top_tb_riscv_top__M0_MBffff.h"

VL_INLINE_OPT void Vriscv_top_tb_riscv_top__M0_MBffff___ico_sequent__TOP__riscv_top_tb__dut__0(Vriscv_top_tb_riscv_top__M0_MBffff* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_tb_riscv_top__M0_MBffff___ico_sequent__TOP__riscv_top_tb__dut__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dcache_wr_w = vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__mem_d_wr_o;
    vlSelfRef.dcache_rd_w = vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__mem_d_rd_o;
    vlSelfRef.dcache_data_rd_w = ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_mux__DOT__cache_access_q)
                                   ? vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__data_r
                                   : vlSymsp->TOP__riscv_top_tb__d_memory.__PVT__rdata_o);
}

VL_INLINE_OPT void Vriscv_top_tb_riscv_top__M0_MBffff___nba_sequent__TOP__riscv_top_tb__dut__0(Vriscv_top_tb_riscv_top__M0_MBffff* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_tb_riscv_top__M0_MBffff___nba_sequent__TOP__riscv_top_tb__dut__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__sva_checker__DOT__reset_cycle_count;
    __Vdly__sva_checker__DOT__reset_cycle_count = 0;
    // Body
    if (vlSelfRef.__PVT__sva_checker__DOT__CHK_017_clock_period_seen) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[16]);
        }
    }
    if (vlSelfRef.__PVT__sva_checker__DOT__CHK_018_clock_duty_seen) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[17]);
        }
    }
    if (vlSelfRef.__PVT__sva_checker__DOT__clock_negedge_seen) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ (5.0 == (VL_TIME_UNITED_D(1000) 
                                              - vlSelfRef.__PVT__sva_checker__DOT__last_negedge_time)))))) {
                VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:238: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_018_clock_low_time_A: [CHK_018_clock_duty] clock low time is not 5 ns\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 238, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_6_0)) 
                                  | (~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:255: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_020_reset_release_A: [CHK_020_reset_release] reset reasserted immediately after release\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 255, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__dcache_rd_w) 
                                        & (0U != (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__dcache_wr_w))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:171: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_012_core_data_request_A: [CHK_012_core_data_request] simultaneous core data read and write\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 171, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_3_0) 
                                      & (~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst)))) 
                                  | (5U <= vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut____PVT__sva_checker__DOT__reset_cycle_count)))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:248: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_019_reset_duration_A: [CHK_019_reset_duration] reset was held for fewer than five clocks\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 248, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | (IData)(((0U != 
                                              (0xf8000U 
                                               & vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core____PVT__fetch_instr_w)) 
                                             | (0U 
                                                == vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__issue_ra_value_r)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:311: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_028_zero_register_A: [CHK_028_zero_register] x0 source operand was not zero\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 311, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__d_memory____PVT__rlast_o)) 
                                     | (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__d_memory____PVT__read_active))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:129: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_006_dcache_response_A: [CHK_006_dcache_response] RLAST without RVALID\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 129, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | ((~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core____PVT__u_exec__DOT__branch_taken_q) 
                                         & (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core____PVT__u_exec__DOT__branch_ntaken_q))) 
                                     & ((~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core____PVT__u_exec__DOT__branch_ntaken_q) 
                                            | (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core____PVT__u_exec__DOT__branch_taken_q))) 
                                        | (0U == (3U 
                                                  & vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core____PVT__u_exec__DOT__pc_x_q))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:329: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_030_branch_control_A: [CHK_030_branch_control] contradictory branch result or misaligned target\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 329, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_wvalid_o)) 
                                     | (0U != (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_wstrb_o)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:122: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_005_dcache_write_A: [CHK_005_dcache_write] write beat has no active byte lanes\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 122, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | (0xaU >= (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_dcache__u_core____PVT__state_q))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:143: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_008_dcache_fsm_A: [CHK_008_dcache_fsm] illegal D-cache state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 143, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__i_memory____PVT__rlast_o)) 
                                     | (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__i_memory____PVT__read_active))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:106: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_003_icache_response_A: [CHK_003_icache_response] RLAST without RVALID\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 106, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_2_0)) 
                                     | ((4U == (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_dcache__u_core____PVT__state_q)) 
                                        | (5U == (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_dcache__u_core____PVT__state_q))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:195: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_015_dcache_refill_exit_A: [CHK_015_dcache_refill_exit] completed refill did not enter READ or WRITE\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 195, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_arvalid_o)) 
                                     | ((0U == (3U 
                                                & vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_awaddr_o)) 
                                        & (1U == ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__u_axi__DOT__u_axi__DOT__valid_q)
                                                   ? 
                                                  (3U 
                                                   & (vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__u_axi__DOT__u_axi__DOT__buf_q[1U] 
                                                      >> 0xdU))
                                                   : 1U))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:114: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_004_dcache_read_A: [CHK_004_dcache_read] illegal D-cache AXI read request\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 114, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_0_0)) 
                                     | (3U == (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_icache____PVT__state_q)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:179: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_013_icache_refill_exit_A: [CHK_013_icache_refill_exit] completed refill did not enter RELOOKUP\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 179, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_1_0)) 
                                     | (1U == (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_icache____PVT__state_q)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:186: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_014_icache_relookup_A: [CHK_014_icache_relookup] RELOOKUP did not return to LOOKUP\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 186, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_12_0)) 
                                     | (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__valid_e2_q))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:337: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_031_pipeline_progress_A: [CHK_031_pipeline_progress] valid E1 instruction did not advance to E2\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 337, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst)) 
                                  | ((0U == (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_icache____PVT__state_q)) 
                                     & (0U == (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_dcache__u_core____PVT__state_q)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:150: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_009_reset_states_A: [CHK_009_reset_states] cache did not remain in its reset state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 150, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst)) 
                                  | (~ ((((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_icache____PVT__axi_arvalid_o) 
                                          | (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_awvalid_o)) 
                                         | (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_wvalid_o)) 
                                        | (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_arvalid_o)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:93: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_001_reset_quiet_A: [CHK_001_reset_quiet] AXI request active during reset\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 93, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_8_0) 
                                      & (~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst)))) 
                                  | (~ ((((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_icache____PVT__axi_arvalid_o) 
                                          | (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_awvalid_o)) 
                                         | (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_wvalid_o)) 
                                        | (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_arvalid_o)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:261: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_021_post_reset_quiet_A: [CHK_021_post_reset_quiet] AXI request active on first clock after reset release\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 261, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | ((0U == (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__pipe_rd_wb_w)) 
                                     | ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__pipe_valid_wb_w) 
                                        & ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__pipe_rd_wb_w) 
                                           == (0x1fU 
                                               & (vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                                  >> 7U)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:403: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_037_commit_destination_A: [CHK_037_commit_destination] writeback destination does not match instruction RD\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 403, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | (IData)((2U != 
                                             (0x82U 
                                              & (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_e1_q))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:410: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_038_load_store_destination_LOAD_A: [CHK_038_load_store_destination] load missing RD-valid control\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 410, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | (IData)((0x84U 
                                             != (0x84U 
                                                 & (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_e1_q))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:413: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_038_load_store_destination_STORE_A: [CHK_038_load_store_destination] load/store RD-valid control is incorrect\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 413, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | (IData)((0x40U 
                                             != (0x41U 
                                                 & (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_e1_q))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:421: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_039_branch_class_A: [CHK_039_branch_class] branch was not classified for ALU execution\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 421, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | ((~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__pipe_valid_wb_w) 
                                         & (0x37U == 
                                            (0x7fU 
                                             & vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__opcode_wb_q)))) 
                                     | (vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__result_wb_q 
                                        == (0xfffff000U 
                                            & vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__opcode_wb_q)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:395: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_036_lui_result_A: [CHK_036_lui_result] incorrect LUI writeback result\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 395, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | ((~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__pipe_valid_wb_w) 
                                         & (0x13U == 
                                            (0x707fU 
                                             & vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__opcode_wb_q)))) 
                                     | (vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__result_wb_q 
                                        == (vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__operand_ra_wb_q 
                                            + (((- (IData)(
                                                           (vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                                  >> 0x14U)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:379: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_035_add_result_ADDI_A: [CHK_035_add_result] incorrect ADDI writeback result\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 379, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | ((~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__pipe_valid_wb_w) 
                                         & (0x33U == 
                                            (0xfe00707fU 
                                             & vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__opcode_wb_q)))) 
                                     | (vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__result_wb_q 
                                        == (vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__operand_ra_wb_q 
                                            + vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__operand_rb_wb_q)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:384: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_035_add_result_ADD_A: [CHK_035_add_result] incorrect ADD writeback result\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 384, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__valid_e1_q) 
                                     | (0U == (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_e1_q)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:294: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_025_invalid_stage_clear_A: [CHK_025_invalid_stage_clear] invalid E1 stage retained control bits\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 294, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | ((~ (IData)((6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_e1_q))))) 
                                     & (~ (IData)((6U 
                                                   == 
                                                   (6U 
                                                    & (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_e2_q))))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:279: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_023_load_store_exclusion_A: [CHK_023_load_store_exclusion] pipeline stage marked as both load and store\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 279, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | (VL_ONEHOT0_I((0x1fU 
                                                   & ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                                                      >> 1U))) 
                                     & VL_ONEHOT0_I(
                                                    (0x1fU 
                                                     & ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_e2_q) 
                                                        >> 1U))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:287: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_024_operation_class_A: [CHK_024_operation_class] multiple exclusive operation classes active\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 287, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_13_0)) 
                                     | (((vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__pc_e2_q 
                                          == vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_14_0) 
                                         & (vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__opcode_e2_q 
                                            == vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_15_0)) 
                                        & ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_e2_q) 
                                           == (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_16_0))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:358: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_033_e1_e2_metadata_A: [CHK_033_e1_e2_metadata] E1 metadata did not propagate to E2\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 358, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_17_0)) 
                                     | ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__stall_w) 
                                        | (((vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__pc_wb_q 
                                             == vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_18_0) 
                                            & (vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                               == vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_19_0)) 
                                           & ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_wb_q) 
                                              == (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_20_0)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:370: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_034_e2_wb_metadata_A: [CHK_034_e2_wb_metadata] E2 metadata did not propagate to writeback\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 370, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__stall_w)) 
                                     | ((((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                                          >> 4U) | 
                                         ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_e2_q) 
                                          >> 1U)) | 
                                        ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_e2_q) 
                                         >> 2U)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:429: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_040_stall_cause_A: [CHK_040_stall_cause] pipeline stalled without a DIV/load/store cause\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 429, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | ((((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__valid_e1_q)) 
                                       | (0U == (3U 
                                                 & vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__pc_e1_q))) 
                                      & ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__valid_e2_q)) 
                                         | (0U == (3U 
                                                   & vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__pc_e2_q)))) 
                                     & ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__valid_wb_q)) 
                                        | (0U == (3U 
                                                  & vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__pc_wb_q))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:321: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_029_pipeline_pc_A: [CHK_029_pipeline_pc] valid pipeline PC is not word aligned\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 321, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst)) 
                                  | ((((((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__valid_e1_q)) 
                                         & (~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__valid_e2_q))) 
                                        & (~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__valid_wb_q))) 
                                       & (0U == (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_e1_q))) 
                                      & (0U == (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_e2_q))) 
                                     & (0U == (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_wb_q)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:271: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_022_pipeline_reset_A: [CHK_022_pipeline_reset] pipeline registers not clear during reset\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 271, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | ((((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__valid_e1_q)) 
                                       | ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                                          >> 9U)) & 
                                      ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__valid_e2_q)) 
                                       | ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_e2_q) 
                                          >> 9U))) 
                                     & ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__valid_wb_q)) 
                                        | ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_wb_q) 
                                           >> 9U)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:347: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_032_pipeline_complete_A: [CHK_032_pipeline_complete] valid stage missing COMPLETE control\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 347, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_10_0)) 
                                     | (0U == (((((
                                                   (((vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_11_0[0U] 
                                                      ^ vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__opcode_wb_q) 
                                                     | (vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_11_0[1U] 
                                                        ^ vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__pc_wb_q)) 
                                                    | (vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_11_0[2U] 
                                                       ^ (IData)(
                                                                 (((QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__opcode_e2_q)) 
                                                                   << 0xbU) 
                                                                  | (QData)((IData)(
                                                                                (((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__valid_wb_q) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_wb_q)))))))) 
                                                   | (vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_11_0[3U] 
                                                      ^ 
                                                      (((IData)(
                                                                (((QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_e2_q)) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__pc_e2_q)))) 
                                                        << 0xbU) 
                                                       | (IData)(
                                                                 ((((QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__opcode_e2_q)) 
                                                                    << 0xbU) 
                                                                   | (QData)((IData)(
                                                                                (((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__valid_wb_q) 
                                                                                << 0xaU) 
                                                                                | (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_wb_q))))) 
                                                                  >> 0x20U))))) 
                                                  | (vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_11_0[4U] 
                                                     ^ 
                                                     ((((IData)(
                                                                (((QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__pc_e1_q)) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__opcode_e1_q)))) 
                                                        << 0x16U) 
                                                       | ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__valid_e2_q) 
                                                          << 0x15U)) 
                                                      | (((IData)(
                                                                  (((QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_e2_q)) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__pc_e2_q)))) 
                                                          >> 0x15U) 
                                                         | ((IData)(
                                                                    ((((QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_e2_q)) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__pc_e2_q))) 
                                                                     >> 0x20U)) 
                                                            << 0xbU))))) 
                                                 | (vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_11_0[5U] 
                                                    ^ 
                                                    (((0x1fffffU 
                                                       & ((IData)(
                                                                  (((QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__pc_e1_q)) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__opcode_e1_q)))) 
                                                          >> 0xaU)) 
                                                      | ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__valid_e2_q) 
                                                         >> 0xbU)) 
                                                     | ((0x200000U 
                                                         & ((IData)(
                                                                    (((QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__pc_e1_q)) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__opcode_e1_q)))) 
                                                            >> 0xaU)) 
                                                        | ((IData)(
                                                                   ((((QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__pc_e1_q)) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__opcode_e1_q))) 
                                                                    >> 0x20U)) 
                                                           << 0x16U))))) 
                                                | (vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_11_0[6U] 
                                                   ^ 
                                                   ((0x1fffffU 
                                                     & ((IData)(
                                                                ((((QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__pc_e1_q)) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__opcode_e1_q))) 
                                                                 >> 0x20U)) 
                                                        >> 0xaU)) 
                                                    | (((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                                                        << 0x16U) 
                                                       | (0x200000U 
                                                          & ((IData)(
                                                                     ((((QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__pc_e1_q)) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__opcode_e1_q))) 
                                                                      >> 0x20U)) 
                                                             >> 0xaU)))))) 
                                               | (vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_11_0[7U] 
                                                  ^ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__valid_e1_q)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:304: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_026_pipeline_stall_A: [CHK_026_pipeline_stall] pipeline registers changed while stalled\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 304, "");
        }
    }
    if (vlSymsp->TOP__riscv_top_tb.__PVT__rst) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[0]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__mem_i_rd_o))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[10]);
        }
    }
    __Vdly__sva_checker__DOT__reset_cycle_count = vlSelfRef.__PVT__sva_checker__DOT__reset_cycle_count;
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wvalid_o) 
            & (IData)(vlSymsp->TOP__riscv_top_tb__d_memory.__PVT__wready_o)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[4]);
        }
    }
    if (((IData)(vlSelfRef.sva_checker__DOT___Vpast_7_0) 
         & (~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[19]);
        }
    }
    if ((((IData)(vlSelfRef.sva_checker__DOT___Vpast_4_0) 
          & (~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst))) 
         & (5U <= vlSelfRef.__PVT__sva_checker__DOT__reset_cycle_count))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[18]);
        }
    }
    if ((((IData)(vlSelfRef.sva_checker__DOT___Vpast_9_0) 
          & (~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst))) 
         & (~ ((((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__axi_arvalid_o) 
                 | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_awvalid_o)) 
                | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wvalid_o)) 
               | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_arvalid_o))))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[20]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & ((IData)(vlSelfRef.dcache_rd_w) | (0U != (IData)(vlSelfRef.dcache_wr_w))))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[11]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_valid_wb_w) 
            & (0U != (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w))))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[35]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__stall_w))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[25]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__stall_w))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[38]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__branch_ntaken_q) 
            | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__branch_taken_q)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[28]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & (2U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__state_q)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[6]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & (3U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__state_q)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[13]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__valid_e1_q) 
             & (~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__stall_w))) 
            & (~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_squash_e1_e2_w))))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[29]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__valid_e1_q) 
             & (~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__stall_w))) 
            & (~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_squash_e1_e2_w))))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[31]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & (0U == (0xf8000U & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[26]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_arvalid_o) 
            & (~ (IData)(vlSymsp->TOP__riscv_top_tb__d_memory.__PVT__read_active))))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[3]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & (6U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__state_q)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[7]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & (((6U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__state_q)) 
             & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__pmem_cache_ack_w)) 
            & (0U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__pmem_len_q))))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[14]);
        }
    }
    if ((((IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst) 
          & (0U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__state_q))) 
         & (0U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__state_q)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[8]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & ((IData)(vlSymsp->TOP__riscv_top_tb__d_memory.__PVT__bvalid_o) 
            | ((IData)(vlSymsp->TOP__riscv_top_tb__d_memory.__PVT__read_active) 
               & (IData)(vlSymsp->TOP__riscv_top_tb__d_memory.__PVT__rlast_o))))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[5]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_valid_wb_w) 
            & ((0x13U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
               | (0x33U == (0xfe00707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)))))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[33]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_valid_wb_w) 
            & (0x37U == (0x7fU & vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[34]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & (0U != (6U & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q))))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[22]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & (0U != (0x1fU & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                            >> 1U))))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[23]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & (0U != (6U & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q))))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[36]);
        }
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
               & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                  >> 6U)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[37]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & ((~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__valid_e1_q)) 
            & (0U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q))))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[24]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__valid_e2_q) 
             & (~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__stall_w))) 
            & (0U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_e2_r))))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[32]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__valid_wb_q))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[27]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__axi_arvalid_o) 
            & (~ (IData)(vlSymsp->TOP__riscv_top_tb__i_memory.__PVT__read_active))))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[1]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__axi_arvalid_o) 
            & (~ (IData)(vlSymsp->TOP__riscv_top_tb__i_memory.__PVT__read_active))))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[9]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & ((IData)(vlSymsp->TOP__riscv_top_tb__i_memory.__PVT__read_active) 
            & (IData)(vlSymsp->TOP__riscv_top_tb__i_memory.__PVT__rlast_o)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[2]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & (((2U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__state_q)) 
             & (IData)(vlSymsp->TOP__riscv_top_tb__i_memory.__PVT__read_active)) 
            & (IData)(vlSymsp->TOP__riscv_top_tb__i_memory.__PVT__rlast_o)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[12]);
        }
    }
    if (((((IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst) 
           & (~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__valid_e1_q))) 
          & (~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__valid_e2_q))) 
         & (~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__valid_wb_q)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[21]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__valid_e1_q) 
             & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__valid_e2_q)) 
            & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__valid_wb_q)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[30]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & (((IData)(vlSymsp->TOP__riscv_top_tb__i_memory.__PVT__read_active) 
             | (IData)(vlSymsp->TOP__riscv_top_tb__d_memory.__PVT__read_active)) 
            | (IData)(vlSymsp->TOP__riscv_top_tb__d_memory.__PVT__bvalid_o)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[15]);
        }
    }
    if (vlSelfRef.__PVT__sva_checker__DOT__clock_posedge_seen) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ (10.0 == (VL_TIME_UNITED_D(1000) 
                                               - vlSelfRef.__PVT__sva_checker__DOT__last_posedge_time)))))) {
                VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:218: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_017_clock_period_A: [CHK_017_clock_period] expected 10 ns, measured %0^\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),64,
                             (VL_TIME_UNITED_D(1000) 
                              - vlSelfRef.__PVT__sva_checker__DOT__last_posedge_time),
                             -9);
                VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 218, "");
            }
        }
        vlSelfRef.__PVT__sva_checker__DOT__CHK_017_clock_period_seen = 1U;
    }
    if (vlSymsp->TOP__riscv_top_tb.__PVT__rst) {
        __Vdly__sva_checker__DOT__reset_cycle_count 
            = ((IData)(1U) + vlSelfRef.__PVT__sva_checker__DOT__reset_cycle_count);
        vlSelfRef.__PVT__sva_checker__DOT__CHK_009_reset_states_seen = 1U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_001_reset_quiet_seen = 1U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_022_pipeline_reset_seen = 1U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_011_fetch_alignment_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_005_dcache_write_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_012_core_data_request_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_037_commit_destination_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_040_stall_cause_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_026_pipeline_stall_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_030_branch_control_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_007_icache_fsm_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_014_icache_relookup_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_031_pipeline_progress_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_033_e1_e2_metadata_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_028_zero_register_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_004_dcache_read_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_008_dcache_fsm_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_015_dcache_refill_exit_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_006_dcache_response_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_036_lui_result_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_035_add_result_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_039_branch_class_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_038_load_store_destination_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_023_load_store_exclusion_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_024_operation_class_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_025_invalid_stage_clear_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_034_e2_wb_metadata_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_029_pipeline_pc_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_010_icache_read_only_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_002_icache_refill_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_003_icache_response_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_013_icache_refill_exit_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_032_pipeline_complete_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_016_axi_response_seen = 0U;
    } else {
        if (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__mem_i_rd_o) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_011_fetch_alignment_seen = 1U;
        }
        if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wvalid_o) 
             & (IData)(vlSymsp->TOP__riscv_top_tb__d_memory.__PVT__wready_o))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_005_dcache_write_seen = 1U;
        }
        if (((IData)(vlSelfRef.dcache_rd_w) | (0U != (IData)(vlSelfRef.dcache_wr_w)))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_012_core_data_request_seen = 1U;
        }
        if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_valid_wb_w) 
             & (0U != (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w)))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_037_commit_destination_seen = 1U;
        }
        if (vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__stall_w) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_040_stall_cause_seen = 1U;
            vlSelfRef.__PVT__sva_checker__DOT__CHK_026_pipeline_stall_seen = 1U;
        }
        if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__branch_ntaken_q) 
             | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_exec__DOT__branch_taken_q))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_030_branch_control_seen = 1U;
        }
        if ((2U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__state_q))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_007_icache_fsm_seen = 1U;
        }
        if ((3U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__state_q))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_014_icache_relookup_seen = 1U;
        }
        if ((((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__valid_e1_q) 
              & (~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__stall_w))) 
             & (~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_squash_e1_e2_w)))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_031_pipeline_progress_seen = 1U;
            vlSelfRef.__PVT__sva_checker__DOT__CHK_033_e1_e2_metadata_seen = 1U;
        }
        if ((0U == (0x1fU & (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__fetch_instr_w 
                             >> 0xfU)))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_028_zero_register_seen = 1U;
        }
        if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_arvalid_o) 
             & (~ (IData)(vlSymsp->TOP__riscv_top_tb__d_memory.__PVT__read_active)))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_004_dcache_read_seen = 1U;
        }
        if ((6U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__state_q))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_008_dcache_fsm_seen = 1U;
        }
        if ((((6U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__state_q)) 
              & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__pmem_cache_ack_w)) 
             & (0U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__pmem_len_q)))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_015_dcache_refill_exit_seen = 1U;
        }
        if (((IData)(vlSymsp->TOP__riscv_top_tb__d_memory.__PVT__bvalid_o) 
             | ((IData)(vlSymsp->TOP__riscv_top_tb__d_memory.__PVT__read_active) 
                & (IData)(vlSymsp->TOP__riscv_top_tb__d_memory.__PVT__rlast_o)))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_006_dcache_response_seen = 1U;
        }
        if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_valid_wb_w) 
             & (0x37U == (0x7fU & vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_036_lui_result_seen = 1U;
        }
        if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__pipe_valid_wb_w) 
             & ((0x13U == (0x707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_wb_q)) 
                | (0x33U == (0xfe00707fU & vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_wb_q))))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_035_add_result_seen = 1U;
        }
        if ((0x40U & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_039_branch_class_seen = 1U;
        }
        if ((IData)((0U != (6U & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q))))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_038_load_store_destination_seen = 1U;
            vlSelfRef.__PVT__sva_checker__DOT__CHK_023_load_store_exclusion_seen = 1U;
        }
        if ((0U != (0x1fU & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                             >> 1U)))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_024_operation_class_seen = 1U;
        }
        if (((~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__valid_e1_q)) 
             & (0U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q)))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_025_invalid_stage_clear_seen = 1U;
        }
        if ((((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__valid_e2_q) 
              & (~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__stall_w))) 
             & (0U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_e2_r)))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_034_e2_wb_metadata_seen = 1U;
        }
        if (vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__valid_wb_q) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_029_pipeline_pc_seen = 1U;
        }
        if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__axi_arvalid_o) 
             & (~ (IData)(vlSymsp->TOP__riscv_top_tb__i_memory.__PVT__read_active)))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_010_icache_read_only_seen = 1U;
            vlSelfRef.__PVT__sva_checker__DOT__CHK_002_icache_refill_seen = 1U;
        }
        if (((IData)(vlSymsp->TOP__riscv_top_tb__i_memory.__PVT__read_active) 
             & (IData)(vlSymsp->TOP__riscv_top_tb__i_memory.__PVT__rlast_o))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_003_icache_response_seen = 1U;
        }
        if ((((2U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__state_q)) 
              & (IData)(vlSymsp->TOP__riscv_top_tb__i_memory.__PVT__read_active)) 
             & (IData)(vlSymsp->TOP__riscv_top_tb__i_memory.__PVT__rlast_o))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_013_icache_refill_exit_seen = 1U;
        }
        if ((((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__valid_e1_q) 
              & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__valid_e2_q)) 
             & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__valid_wb_q))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_032_pipeline_complete_seen = 1U;
        }
        if ((((IData)(vlSymsp->TOP__riscv_top_tb__i_memory.__PVT__read_active) 
              | (IData)(vlSymsp->TOP__riscv_top_tb__d_memory.__PVT__read_active)) 
             | (IData)(vlSymsp->TOP__riscv_top_tb__d_memory.__PVT__bvalid_o))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_016_axi_response_seen = 1U;
        }
    }
    vlSelfRef.__PVT__sva_checker__DOT__last_posedge_time 
        = VL_TIME_UNITED_D(1000);
    vlSelfRef.__PVT__sva_checker__DOT__clock_posedge_seen = 1U;
    vlSelfRef.sva_checker__DOT___Vpast_15_0 = vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__opcode_e1_q;
    vlSelfRef.sva_checker__DOT___Vpast_14_0 = vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__pc_e1_q;
    vlSelfRef.sva_checker__DOT___Vpast_19_0 = vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__opcode_e2_q;
    vlSelfRef.sva_checker__DOT___Vpast_18_0 = vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__pc_e2_q;
    vlSelfRef.sva_checker__DOT___Vpast_20_0 = vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_e2_q;
    vlSelfRef.sva_checker__DOT___Vpast_16_0 = vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_e1_q;
    vlSelfRef.sva_checker__DOT___Vpast_3_0 = vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst;
    vlSelfRef.sva_checker__DOT___Vpast_5_0 = vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst;
    vlSelfRef.sva_checker__DOT___Vpast_8_0 = vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst;
    vlSelfRef.sva_checker__DOT___Vpast_6_0 = ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_5_0) 
                                              & (~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst)));
    vlSelfRef.sva_checker__DOT___Vpast_1_0 = ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst)) 
                                              & (3U 
                                                 == (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_icache____PVT__state_q)));
    vlSelfRef.sva_checker__DOT___Vpast_2_0 = ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst)) 
                                              & (((6U 
                                                   == (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_dcache__u_core____PVT__state_q)) 
                                                  & (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__pmem_cache_ack_w)) 
                                                 & (0U 
                                                    == (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_dcache__u_core____PVT__pmem_len_q))));
    vlSelfRef.sva_checker__DOT___Vpast_10_0 = ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst)) 
                                               & (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__stall_w));
    vlSelfRef.sva_checker__DOT___Vpast_0_0 = ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst)) 
                                              & (((2U 
                                                   == (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_icache____PVT__state_q)) 
                                                  & (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__i_memory____PVT__read_active)) 
                                                 & (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__i_memory____PVT__rlast_o)));
    vlSelfRef.sva_checker__DOT___Vpast_17_0 = ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst)) 
                                               & (((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__valid_e2_q) 
                                                   & (~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__stall_w))) 
                                                  & (0U 
                                                     == (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__exception_e2_r))));
    vlSelfRef.sva_checker__DOT___Vpast_12_0 = ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst)) 
                                               & (((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__valid_e1_q) 
                                                   & (~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__stall_w))) 
                                                  & (~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__pipe_squash_e1_e2_w))));
    vlSelfRef.sva_checker__DOT___Vpast_13_0 = ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst)) 
                                               & (((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__valid_e1_q) 
                                                   & (~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__stall_w))) 
                                                  & (~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__pipe_squash_e1_e2_w))));
    vlSelfRef.sva_checker__DOT___Vpast_11_0[0U] = (IData)(
                                                          (((QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__pc_wb_q)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__opcode_wb_q))));
    vlSelfRef.sva_checker__DOT___Vpast_11_0[1U] = (IData)(
                                                          ((((QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__pc_wb_q)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__opcode_wb_q))) 
                                                           >> 0x20U));
    vlSelfRef.sva_checker__DOT___Vpast_11_0[2U] = (
                                                   (vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__opcode_e2_q 
                                                    << 0xbU) 
                                                   | (((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__valid_wb_q) 
                                                       << 0xaU) 
                                                      | (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_wb_q)));
    vlSelfRef.sva_checker__DOT___Vpast_11_0[3U] = (
                                                   (0xfffff800U 
                                                    & vlSelfRef.sva_checker__DOT___Vpast_11_0[3U]) 
                                                   | (vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__opcode_e2_q 
                                                      >> 0x15U));
    vlSelfRef.sva_checker__DOT___Vpast_11_0[3U] = (
                                                   (0x7ffU 
                                                    & vlSelfRef.sva_checker__DOT___Vpast_11_0[3U]) 
                                                   | ((IData)(
                                                              (((QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__valid_e2_q)) 
                                                                << 0x2aU) 
                                                               | (((QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_e2_q)) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__pc_e2_q))))) 
                                                      << 0xbU));
    vlSelfRef.sva_checker__DOT___Vpast_11_0[4U] = (
                                                   ((IData)(
                                                            (((QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__valid_e2_q)) 
                                                              << 0x2aU) 
                                                             | (((QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_e2_q)) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__pc_e2_q))))) 
                                                    >> 0x15U) 
                                                   | ((vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__opcode_e1_q 
                                                       << 0x16U) 
                                                      | ((IData)(
                                                                 ((((QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__valid_e2_q)) 
                                                                    << 0x2aU) 
                                                                   | (((QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_e2_q)) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__pc_e2_q)))) 
                                                                  >> 0x20U)) 
                                                         << 0xbU)));
    vlSelfRef.sva_checker__DOT___Vpast_11_0[5U] = (
                                                   (0xffc00000U 
                                                    & vlSelfRef.sva_checker__DOT___Vpast_11_0[5U]) 
                                                   | (((0x7ffU 
                                                        & (vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__opcode_e1_q 
                                                           >> 0xaU)) 
                                                       | ((IData)(
                                                                  ((((QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__valid_e2_q)) 
                                                                     << 0x2aU) 
                                                                    | (((QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_e2_q)) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__pc_e2_q)))) 
                                                                   >> 0x20U)) 
                                                          >> 0x15U)) 
                                                      | (0x3ff800U 
                                                         & (vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__opcode_e1_q 
                                                            >> 0xaU))));
    vlSelfRef.sva_checker__DOT___Vpast_11_0[5U] = (
                                                   (0x3fffffU 
                                                    & vlSelfRef.sva_checker__DOT___Vpast_11_0[5U]) 
                                                   | ((IData)(
                                                              (((QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__valid_e1_q)) 
                                                                << 0x2aU) 
                                                               | (((QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_e1_q)) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__pc_e1_q))))) 
                                                      << 0x16U));
    vlSelfRef.sva_checker__DOT___Vpast_11_0[6U] = (
                                                   ((IData)(
                                                            (((QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__valid_e1_q)) 
                                                              << 0x2aU) 
                                                             | (((QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_e1_q)) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__pc_e1_q))))) 
                                                    >> 0xaU) 
                                                   | ((IData)(
                                                              ((((QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__valid_e1_q)) 
                                                                 << 0x2aU) 
                                                                | (((QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_e1_q)) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__pc_e1_q)))) 
                                                               >> 0x20U)) 
                                                      << 0x16U));
    vlSelfRef.sva_checker__DOT___Vpast_11_0[7U] = (1U 
                                                   & ((IData)(
                                                              ((((QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__valid_e1_q)) 
                                                                 << 0x2aU) 
                                                                | (((QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__ctrl_e1_q)) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__pc_e1_q)))) 
                                                               >> 0x20U)) 
                                                      >> 0xaU));
    if ((1U & (~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)))) {
        if (((IData)(vlSelfRef.sva_checker__DOT___Vpast_22_0) 
             & (~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_020_reset_release_seen = 1U;
            if ((1U & (~ ((((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__axi_arvalid_o) 
                            | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_awvalid_o)) 
                           | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wvalid_o)) 
                          | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_arvalid_o))))) {
                vlSelfRef.__PVT__sva_checker__DOT__CHK_021_post_reset_quiet_seen = 1U;
            }
        }
        if ((((IData)(vlSelfRef.sva_checker__DOT___Vpast_21_0) 
              & (~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst))) 
             & (5U <= vlSelfRef.__PVT__sva_checker__DOT__reset_cycle_count))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_019_reset_duration_seen = 1U;
        }
    }
    vlSelfRef.sva_checker__DOT___Vpast_7_0 = vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst;
    vlSelfRef.sva_checker__DOT___Vpast_4_0 = vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst;
    vlSelfRef.sva_checker__DOT___Vpast_9_0 = vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst;
    vlSelfRef.__PVT__sva_checker__DOT__reset_cycle_count 
        = __Vdly__sva_checker__DOT__reset_cycle_count;
    vlSelfRef.sva_checker__DOT___Vpast_21_0 = vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst;
    vlSelfRef.sva_checker__DOT___Vpast_22_0 = vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst;
}

VL_INLINE_OPT void Vriscv_top_tb_riscv_top__M0_MBffff___nba_sequent__TOP__riscv_top_tb__dut__1(Vriscv_top_tb_riscv_top__M0_MBffff* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_tb_riscv_top__M0_MBffff___nba_sequent__TOP__riscv_top_tb__dut__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dcache_data_wr_w = vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_data_wr_q;
    vlSelfRef.dcache_addr_w = (0xfffffffcU & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_addr_q);
}

VL_INLINE_OPT void Vriscv_top_tb_riscv_top__M0_MBffff___nba_sequent__TOP__riscv_top_tb__dut__2(Vriscv_top_tb_riscv_top__M0_MBffff* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_tb_riscv_top__M0_MBffff___nba_sequent__TOP__riscv_top_tb__dut__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sva_checker__DOT__last_negedge_time 
        = VL_TIME_UNITED_D(1000);
    vlSelfRef.__PVT__sva_checker__DOT__clock_negedge_seen = 1U;
    if (vlSelfRef.__PVT__sva_checker__DOT__clock_posedge_seen) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY((1U & (~ (5.0 == (VL_TIME_UNITED_D(1000) 
                                              - vlSelfRef.__PVT__sva_checker__DOT__last_posedge_time)))))) {
                VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:229: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_018_clock_high_time_A: [CHK_018_clock_duty] clock high time is not 5 ns\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 229, "");
            }
        }
        vlSelfRef.__PVT__sva_checker__DOT__CHK_018_clock_duty_seen = 1U;
    }
}

VL_INLINE_OPT void Vriscv_top_tb_riscv_top__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__0(Vriscv_top_tb_riscv_top__M0_MBffff* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_tb_riscv_top__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dcache_data_rd_w = ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__u_mux__DOT__cache_access_q)
                                   ? vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__data_r
                                   : vlSymsp->TOP__riscv_top_tb__d_memory.__PVT__rdata_o);
}

VL_INLINE_OPT void Vriscv_top_tb_riscv_top__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__1(Vriscv_top_tb_riscv_top__M0_MBffff* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_tb_riscv_top__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dcache_ack_w = vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__mem_ack_o;
}

VL_INLINE_OPT void Vriscv_top_tb_riscv_top__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__2(Vriscv_top_tb_riscv_top__M0_MBffff* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_tb_riscv_top__M0_MBffff___nba_comb__TOP__riscv_top_tb__dut__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dcache_wr_w = vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__mem_d_wr_o;
    vlSelfRef.dcache_rd_w = vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__mem_d_rd_o;
}
