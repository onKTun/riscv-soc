// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top_tb.h for the primary calling header

#include "Vriscv_top_tb__pch.h"
#include "Vriscv_top_tb__Syms.h"
#include "Vriscv_top_tb_riscv_top__M0_MBffff.h"

VL_INLINE_OPT void Vriscv_top_tb_riscv_top__M0_MBffff___nba_sequent__TOP__riscv_top_tb__dut__0(Vriscv_top_tb_riscv_top__M0_MBffff* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_tb_riscv_top__M0_MBffff___nba_sequent__TOP__riscv_top_tb__dut__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core____PVT__mem_d_rd_o) 
                                        & (0U != (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_core____PVT__mem_d_wr_o))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:129: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_012_core_data_request_A: [CHK_012_core_data_request] simultaneous core data read and write\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 129, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_wvalid_o)) 
                                     | (0U != (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_wstrb_o)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:80: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_005_dcache_write_A: [CHK_005_dcache_write] write beat has no active byte lanes\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 80, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__d_rlast)) 
                                     | (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__d_memory__DOT__read_active))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:87: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_006_dcache_response_A: [CHK_006_dcache_response] RLAST without RVALID\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 87, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | (0xaU >= (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_dcache__u_core____PVT__state_q))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:101: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_008_dcache_fsm_A: [CHK_008_dcache_fsm] illegal D-cache state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 101, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__i_rlast)) 
                                     | (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__i_memory__DOT__read_active))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:64: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_003_icache_response_A: [CHK_003_icache_response] RLAST without RVALID\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 64, "");
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
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:72: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_004_dcache_read_A: [CHK_004_dcache_read] illegal D-cache AXI read request\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 72, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_2_0)) 
                                     | ((4U == (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_dcache__u_core____PVT__state_q)) 
                                        | (5U == (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_dcache__u_core____PVT__state_q))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:153: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_015_dcache_refill_exit_A: [CHK_015_dcache_refill_exit] completed refill did not enter READ or WRITE\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 153, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_0_0)) 
                                     | (3U == (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_icache____PVT__state_q)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:137: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_013_icache_refill_exit_A: [CHK_013_icache_refill_exit] completed refill did not enter RELOOKUP\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 137, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__sva_checker__DOT___Vpast_1_0)) 
                                     | (1U == (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_icache____PVT__state_q)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:144: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_014_icache_relookup_A: [CHK_014_icache_relookup] RELOOKUP did not return to LOOKUP\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 144, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst)) 
                                  | (~ ((((IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_icache____PVT__axi_arvalid_o) 
                                          | (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_awvalid_o)) 
                                         | (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_wvalid_o)) 
                                        | (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__axi_arvalid_o)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:51: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_001_reset_quiet_A: [CHK_001_reset_quiet] AXI request active during reset\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 51, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst)) 
                                  | ((0U == (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_icache____PVT__state_q)) 
                                     & (0U == (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_dcache__u_core____PVT__state_q)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_top_tb.sv:108: Assertion failed in %Nriscv_top_tb.dut.sva_checker.CHK_009_reset_states_A: [CHK_009_reset_states] cache did not remain in its reset state\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_top_tb.sv", 108, "");
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
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wvalid_o) 
            & (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__d_wready)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[4]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__mem_d_rd_o) 
            | (0U != (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__mem_d_wr_o))))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[11]);
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
         & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_arvalid_o) 
            & (~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__d_memory__DOT__read_active))))) {
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
         & ((IData)(vlSymsp->TOP__riscv_top_tb.__PVT__d_bvalid) 
            | ((IData)(vlSymsp->TOP__riscv_top_tb.__PVT__d_memory__DOT__read_active) 
               & (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__d_rlast))))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[5]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__axi_arvalid_o) 
            & (~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__i_memory__DOT__read_active))))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[1]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__axi_arvalid_o) 
            & (~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__i_memory__DOT__read_active))))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[9]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & ((IData)(vlSymsp->TOP__riscv_top_tb.__PVT__i_memory__DOT__read_active) 
            & (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__i_rlast)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[2]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & (((2U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__state_q)) 
             & (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__i_memory__DOT__read_active)) 
            & (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__i_rlast)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[12]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
         & (((IData)(vlSymsp->TOP__riscv_top_tb.__PVT__i_memory__DOT__read_active) 
             | (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__d_memory__DOT__read_active)) 
            | (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__d_bvalid)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[15]);
        }
    }
    if (vlSymsp->TOP__riscv_top_tb.__PVT__rst) {
        vlSelfRef.__PVT__sva_checker__DOT__CHK_009_reset_states_seen = 1U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_001_reset_quiet_seen = 1U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_011_fetch_alignment_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_005_dcache_write_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_012_core_data_request_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_007_icache_fsm_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_014_icache_relookup_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_004_dcache_read_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_008_dcache_fsm_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_015_dcache_refill_exit_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_006_dcache_response_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_010_icache_read_only_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_002_icache_refill_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_003_icache_response_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_013_icache_refill_exit_seen = 0U;
        vlSelfRef.__PVT__sva_checker__DOT__CHK_016_axi_response_seen = 0U;
    } else {
        if (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__mem_i_rd_o) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_011_fetch_alignment_seen = 1U;
        }
        if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_wvalid_o) 
             & (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__d_wready))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_005_dcache_write_seen = 1U;
        }
        if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__mem_d_rd_o) 
             | (0U != (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__mem_d_wr_o)))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_012_core_data_request_seen = 1U;
        }
        if ((2U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__state_q))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_007_icache_fsm_seen = 1U;
        }
        if ((3U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__state_q))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_014_icache_relookup_seen = 1U;
        }
        if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache.__PVT__axi_arvalid_o) 
             & (~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__d_memory__DOT__read_active)))) {
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
        if (((IData)(vlSymsp->TOP__riscv_top_tb.__PVT__d_bvalid) 
             | ((IData)(vlSymsp->TOP__riscv_top_tb.__PVT__d_memory__DOT__read_active) 
                & (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__d_rlast)))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_006_dcache_response_seen = 1U;
        }
        if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__axi_arvalid_o) 
             & (~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__i_memory__DOT__read_active)))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_010_icache_read_only_seen = 1U;
            vlSelfRef.__PVT__sva_checker__DOT__CHK_002_icache_refill_seen = 1U;
        }
        if (((IData)(vlSymsp->TOP__riscv_top_tb.__PVT__i_memory__DOT__read_active) 
             & (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__i_rlast))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_003_icache_response_seen = 1U;
        }
        if ((((2U == (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_icache.__PVT__state_q)) 
              & (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__i_memory__DOT__read_active)) 
             & (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__i_rlast))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_013_icache_refill_exit_seen = 1U;
        }
        if ((((IData)(vlSymsp->TOP__riscv_top_tb.__PVT__i_memory__DOT__read_active) 
              | (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__d_memory__DOT__read_active)) 
             | (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__d_bvalid))) {
            vlSelfRef.__PVT__sva_checker__DOT__CHK_016_axi_response_seen = 1U;
        }
    }
    vlSelfRef.sva_checker__DOT___Vpast_1_0 = ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst)) 
                                              & (3U 
                                                 == (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_icache____PVT__state_q)));
    vlSelfRef.sva_checker__DOT___Vpast_2_0 = ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst)) 
                                              & (((6U 
                                                   == (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_dcache__u_core____PVT__state_q)) 
                                                  & (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_dcache____PVT__pmem_cache_ack_w)) 
                                                 & (0U 
                                                    == (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_dcache__u_core____PVT__pmem_len_q))));
    vlSelfRef.sva_checker__DOT___Vpast_0_0 = ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__rst)) 
                                              & (((2U 
                                                   == (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb__dut__u_icache____PVT__state_q)) 
                                                  & (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__i_memory__DOT__read_active)) 
                                                 & (IData)(vlSelfRef.__Vsampled_TOP__riscv_top_tb____PVT__i_rlast)));
}
