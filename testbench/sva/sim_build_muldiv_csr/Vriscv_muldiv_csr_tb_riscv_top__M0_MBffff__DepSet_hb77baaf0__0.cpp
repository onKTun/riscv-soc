// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_muldiv_csr_tb.h for the primary calling header

#include "Vriscv_muldiv_csr_tb__pch.h"
#include "Vriscv_muldiv_csr_tb__Syms.h"
#include "Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff.h"

VL_INLINE_OPT void Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff___ico_sequent__TOP__riscv_muldiv_csr_tb__dut__0(Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff___ico_sequent__TOP__riscv_muldiv_csr_tb__dut__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dcache_wr_w = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__mem_d_wr_o;
    vlSelfRef.dcache_rd_w = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__mem_d_rd_o;
    vlSelfRef.dcache_data_rd_w = ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_mux__DOT__cache_access_q)
                                   ? vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__data_r
                                   : vlSymsp->TOP__riscv_muldiv_csr_tb__d_memory.__PVT__rdata_o);
}

VL_INLINE_OPT void Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff___ico_sequent__TOP__riscv_muldiv_csr_tb__dut__1(Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff___ico_sequent__TOP__riscv_muldiv_csr_tb__dut__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__unnamedblk1__DOT__a33 
        = (((0x2002033U == (0xfe00707fU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)) 
            | (0x2001033U == (0xfe00707fU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)))
            ? (((QData)((IData)((vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r 
                                 >> 0x1fU))) << 0x20U) 
               | (QData)((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r)))
            : (QData)((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r)));
    vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__unnamedblk1__DOT__b33 
        = ((0x2002033U == (0xfe00707fU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w))
            ? (QData)((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r))
            : ((0x2001033U == (0xfe00707fU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w))
                ? (((QData)((IData)((vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r 
                                     >> 0x1fU))) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r)))
                : (QData)((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r))));
    vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__mul_full_product_e0 
        = VL_MULS_QQQ(64, VL_EXTENDS_QQ(64,34, (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__unnamedblk1__DOT__a33 
                                                                             >> 0x20U))))) 
                                                 << 0x21U) 
                                                | vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__unnamedblk1__DOT__a33)), 
                      VL_EXTENDS_QQ(64,34, (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__unnamedblk1__DOT__b33 
                                                                         >> 0x20U))))) 
                                             << 0x21U) 
                                            | vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__unnamedblk1__DOT__b33)));
}

VL_INLINE_OPT void Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff___nba_sequent__TOP__riscv_muldiv_csr_tb__dut__0(Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff___nba_sequent__TOP__riscv_muldiv_csr_tb__dut__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__2__Vfuncout;
    __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__2__op;
    __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__2__op = 0;
    CData/*0:0*/ __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__3__Vfuncout;
    __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__3__op;
    __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__3__op = 0;
    CData/*0:0*/ __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__4__Vfuncout;
    __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__4__op;
    __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__4__op = 0;
    CData/*0:0*/ __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__5__Vfuncout;
    __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__5__op;
    __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__5__op = 0;
    CData/*0:0*/ __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__6__Vfuncout;
    __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__6__op;
    __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__6__op = 0;
    CData/*0:0*/ __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__7__Vfuncout;
    __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__7__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__7__op;
    __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__7__op = 0;
    CData/*0:0*/ __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__8__Vfuncout;
    __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__8__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__8__op;
    __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__8__op = 0;
    CData/*0:0*/ __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__9__Vfuncout;
    __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__9__op;
    __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__9__op = 0;
    // Body
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb____PVT__rst) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__muldiv_csr_sva_checker__DOT___Vpast_5_0)) 
                                     | (vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile____PVT__rdata_r 
                                        == vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__csr_last_wdata_q))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_muldiv_csr_sva.sv:411: Assertion failed in %Nriscv_muldiv_csr_tb.dut.muldiv_csr_sva_checker.CHK_028_csr_write_readback_A: [CHK_028_csr_write_readback] CSR read after write did not return written value\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_muldiv_csr_sva.sv", 411, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb____PVT__rst) 
                                  | ((~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__muldiv_csr_sva_checker__DOT___Vpast_6_0) 
                                         & (0x12U == (IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr____PVT__exception_e1_q)))) 
                                     | (IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__muldiv_csr_sva_checker__DOT___Vpast_7_0))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_muldiv_csr_sva.sv:446: Assertion failed in %Nriscv_muldiv_csr_tb.dut.muldiv_csr_sva_checker.CHK_029_illegal_csr_exception_A: [CHK_029_illegal_csr_exception] illegal-instruction exception raised without a CSR/invalid opcode cause\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_muldiv_csr_sva.sv", 446, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb____PVT__rst) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__muldiv_csr_sva_checker__DOT___Vpast_8_0)) 
                                     | (vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile____PVT__csr_mepc_q 
                                        == vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__muldiv_csr_sva_checker__DOT___Vpast_9_0))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_muldiv_csr_sva.sv:453: Assertion failed in %Nriscv_muldiv_csr_tb.dut.muldiv_csr_sva_checker.CHK_030_mepc_capture_A: [CHK_030_mepc_capture] mepc did not capture the exception PC\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_muldiv_csr_sva.sv", 453, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb____PVT__rst) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__muldiv_csr_sva_checker__DOT___Vpast_0_0)) 
                                     | (vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__muldiv_csr_sva_checker__DOT___Vpast_1_0 
                                        == vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core____PVT__u_mul__DOT__result_e2_q))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_muldiv_csr_sva.sv:190: Assertion failed in %Nriscv_muldiv_csr_tb.dut.muldiv_csr_sva_checker.CHK_018_mul_hold_stable_A: [CHK_018_mul_hold_stable] multiplier writeback changed while held\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_muldiv_csr_sva.sv", 190, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb____PVT__rst) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__muldiv_csr_sva_checker__DOT___Vpast_4_0)) 
                                     | (~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core____PVT__u_div__DOT__valid_q)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_muldiv_csr_sva.sv:369: Assertion failed in %Nriscv_muldiv_csr_tb.dut.muldiv_csr_sva_checker.CHK_027_div_valid_pulse_A: [CHK_027_div_valid_pulse] writeback_valid did not deassert the cycle after asserting\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_muldiv_csr_sva.sv", 369, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb____PVT__rst) 
                                  | ((~ (((IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__mul_expect_valid_e2) 
                                          & (0U == vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__mul_expect_e2)) 
                                         & (IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__muldiv_csr_sva_checker__DOT___Vpast_3_1))) 
                                     | (0U == vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core____PVT__u_mul__DOT__result_e2_q))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_muldiv_csr_sva.sv:223: Assertion failed in %Nriscv_muldiv_csr_tb.dut.muldiv_csr_sva_checker.CHK_022_mul_zero_id_A: [CHK_022_mul_zero_id] MUL by zero did not produce zero result\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_muldiv_csr_sva.sv", 223, "");
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb.__PVT__rst)) 
         & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_div__DOT__div_busy_q))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[9]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb.__PVT__rst)) 
         & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__PVT__rd_valid_e1_q))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[11]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb.__PVT__rst)) 
         & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__stall_w))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[1]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb.__PVT__rst)) 
         & (0U != (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[13]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb.__PVT__rst)) 
         & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_div__DOT__valid_q))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[10]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb.__PVT__rst)) 
         & ((((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__opcode_issue_r) 
              & (0x2001033U == (0xfe00707fU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w))) 
             & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r 
                >> 0x1fU)) & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r 
                              >> 0x1fU)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[2]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb.__PVT__rst)) 
         & ((((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__opcode_issue_r) 
              & (0x2003033U == (0xfe00707fU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w))) 
             & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r 
                >> 0x1fU)) & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r 
                              >> 0x1fU)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[3]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb.__PVT__rst)) 
         & ((((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__opcode_issue_r) 
              & (0x2002033U == (0xfe00707fU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w))) 
             & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r 
                >> 0x1fU)) & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r 
                              >> 0x1fU)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[4]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb.__PVT__rst)) 
         & (((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__opcode_issue_r) 
             & (0x2000033U == (0xfe00707fU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w))) 
            & ((0U == vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r) 
               | (0U == vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r))))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[5]);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb____PVT__rst) 
                                  | ((~ (((IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core____PVT__u_div__DOT__valid_q) 
                                          & (0x80000000U 
                                             == vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__div_ra_latched)) 
                                         & (0xffffffffU 
                                            == vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__div_rb_latched))) 
                                     | (((IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__div_is_div_latched) 
                                         & (0x80000000U 
                                            == vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core____PVT__u_div__DOT__wb_result_q)) 
                                        | ((IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__div_is_rem_latched) 
                                           & (0U == vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core____PVT__u_div__DOT__wb_result_q))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_muldiv_csr_sva.sv:304: Assertion failed in %Nriscv_muldiv_csr_tb.dut.muldiv_csr_sva_checker.CHK_024_div_overflow_A: [CHK_024_div_overflow] INT_MIN/-1 overflow result violates RISC-V spec Table 7.1: got %0x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_div__DOT__wb_result_q);
            VL_STOP_MT("testbench/sva/riscv_muldiv_csr_sva.sv", 304, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb____PVT__rst) 
                                  | ((~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core____PVT__u_div__DOT__valid_q) 
                                         & (0U == vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__div_rb_latched))) 
                                     | (((((IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__div_is_div_latched) 
                                           & (0xffffffffU 
                                              == vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core____PVT__u_div__DOT__wb_result_q)) 
                                          | ((IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__div_is_divu_latched) 
                                             & (0xffffffffU 
                                                == vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core____PVT__u_div__DOT__wb_result_q))) 
                                         | ((IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__div_is_rem_latched) 
                                            & (vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core____PVT__u_div__DOT__wb_result_q 
                                               == vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__div_ra_latched))) 
                                        | ((IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__div_is_remu_latched) 
                                           & (vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core____PVT__u_div__DOT__wb_result_q 
                                              == vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__div_ra_latched))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_muldiv_csr_sva.sv:289: Assertion failed in %Nriscv_muldiv_csr_tb.dut.muldiv_csr_sva_checker.CHK_023_div_by_zero_A: [CHK_023_div_by_zero] divide-by-zero result violates RISC-V spec Table 7.1: got %0x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_div__DOT__wb_result_q);
            VL_STOP_MT("testbench/sva/riscv_muldiv_csr_sva.sv", 289, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb____PVT__rst) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core____PVT__u_div__DOT__valid_q)) 
                                     | (((((IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__div_is_div_latched) 
                                           & (vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core____PVT__u_div__DOT__wb_result_q 
                                              == vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__div_ref_q)) 
                                          | ((IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__div_is_rem_latched) 
                                             & (vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core____PVT__u_div__DOT__wb_result_q 
                                                == vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__div_ref_r))) 
                                         | ((IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__div_is_divu_latched) 
                                            & (vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core____PVT__u_div__DOT__wb_result_q 
                                               == vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__divu_ref_q))) 
                                        | ((IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__div_is_remu_latched) 
                                           & (vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core____PVT__u_div__DOT__wb_result_q 
                                              == vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__divu_ref_r))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_muldiv_csr_sva.sv:345: Assertion failed in %Nriscv_muldiv_csr_tb.dut.muldiv_csr_sva_checker.CHK_025_div_result_correct_A: [CHK_025_div_result_correct] divider result mismatch vs. behavioral reference: got %0x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_div__DOT__wb_result_q);
            VL_STOP_MT("testbench/sva/riscv_muldiv_csr_sva.sv", 345, "");
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb.__PVT__rst)) 
         & (IData)(vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__mul_expect_valid_e2))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[0]);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb____PVT__rst) 
                                  | ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__mul_expect_valid_e2)) 
                                     | (vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core____PVT__u_mul__DOT__result_e2_q 
                                        == vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__mul_expect_e2))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_muldiv_csr_sva.sv:180: Assertion failed in %Nriscv_muldiv_csr_tb.dut.muldiv_csr_sva_checker.CHK_017_mul_result_valid_A: [CHK_017_mul_result_valid] multiplier writeback value mismatch: got %0x expected %0x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_mul__DOT__result_e2_q,
                         32,vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__mul_expect_e2);
            VL_STOP_MT("testbench/sva/riscv_muldiv_csr_sva.sv", 180, "");
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb.__PVT__rst)) 
         & (((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_div__DOT__valid_q) 
             & (0U != vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_rb_latched)) 
            & (~ ((0x80000000U == vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_ra_latched) 
                  & (0xffffffffU == vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_rb_latched)))))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[8]);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb____PVT__rst) 
                                  | ((~ ((IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core____PVT__u_div__DOT__div_busy_q) 
                                         & (IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue____PVT__opcode_issue_r))) 
                                     | ((~ ([&]() {
                                                __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__4__op 
                                                    = vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core____PVT__fetch_instr_w;
                                                __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__4__Vfuncout 
                                                    = 
                                                    ((((0x2004033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__4__op)) 
                                                       | (0x2005033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__4__op))) 
                                                      | (0x2006033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__4__op))) 
                                                     | (0x2007033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__4__op)));
                                            }(), (IData)(__Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__4__Vfuncout))) 
                                        | (~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core____PVT__u_div__DOT__div_busy_q))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: riscv_muldiv_csr_sva.sv:357: Assertion failed in %Nriscv_muldiv_csr_tb.dut.muldiv_csr_sva_checker.CHK_026_div_busy_no_new_issue_A: [CHK_026_div_busy_no_new_issue] new divide op issued while divider busy\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("testbench/sva/riscv_muldiv_csr_sva.sv", 357, "");
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb.__PVT__rst)) 
         & (((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__opcode_issue_r) 
             & ([&]() {
                            __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__2__op 
                                = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w;
                            __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__2__Vfuncout 
                                = ((((0x2004033U == 
                                      (0xfe00707fU 
                                       & __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__2__op)) 
                                     | (0x2005033U 
                                        == (0xfe00707fU 
                                            & __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__2__op))) 
                                    | (0x2006033U == 
                                       (0xfe00707fU 
                                        & __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__2__op))) 
                                   | (0x2007033U == 
                                      (0xfe00707fU 
                                       & __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__2__op)));
                        }(), (IData)(__Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__2__Vfuncout))) 
            & (0U == vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[6]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb.__PVT__rst)) 
         & ((((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__opcode_issue_r) 
              & ([&]() {
                                __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__3__op 
                                    = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w;
                                __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__3__Vfuncout 
                                    = ((((0x2004033U 
                                          == (0xfe00707fU 
                                              & __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__3__op)) 
                                         | (0x2005033U 
                                            == (0xfe00707fU 
                                                & __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__3__op))) 
                                        | (0x2006033U 
                                           == (0xfe00707fU 
                                               & __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__3__op))) 
                                       | (0x2007033U 
                                          == (0xfe00707fU 
                                              & __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__3__op)));
                            }(), (IData)(__Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__3__Vfuncout))) 
             & (0x80000000U == vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r)) 
            & (0xffffffffU == vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[7]);
        }
    }
    if (((~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb.__PVT__rst)) 
         & (((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
             & ([&]() {
                            __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__5__op 
                                = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w;
                            __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__5__Vfuncout 
                                = ((((((0x1073U == 
                                        (0x707fU & __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__5__op)) 
                                       | (0x2073U == 
                                          (0x707fU 
                                           & __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__5__op))) 
                                      | (0x3073U == 
                                         (0x707fU & __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__5__op))) 
                                     | (0x5073U == 
                                        (0x707fU & __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__5__op))) 
                                    | (0x6073U == (0x707fU 
                                                   & __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__5__op))) 
                                   | (0x7073U == (0x707fU 
                                                  & __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__5__op)));
                        }(), (IData)(__Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__5__Vfuncout))) 
            & (0x12U == (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__PVT__exception_e1_q))))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 2)) {
            ++(vlSymsp->__Vcoverage[12]);
        }
    }
    vlSelfRef.muldiv_csr_sva_checker__DOT___Vpast_9_0 
        = vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__pc_wb_q;
    vlSelfRef.muldiv_csr_sva_checker__DOT___Vpast_6_0 
        = vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue____PVT__csr_opcode_valid_o;
    vlSelfRef.muldiv_csr_sva_checker__DOT___Vpast_1_0 
        = vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core____PVT__u_mul__DOT__result_e2_q;
    vlSelfRef.muldiv_csr_sva_checker__DOT___Vpast_7_0 
        = (([&]() {
                __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__9__op 
                    = vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core____PVT__fetch_instr_w;
                __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__9__Vfuncout 
                    = ((((((0x1073U == (0x707fU & __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__9__op)) 
                           | (0x2073U == (0x707fU & __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__9__op))) 
                          | (0x3073U == (0x707fU & __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__9__op))) 
                         | (0x5073U == (0x707fU & __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__9__op))) 
                        | (0x6073U == (0x707fU & __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__9__op))) 
                       | (0x7073U == (0x707fU & __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__9__op)));
            }(), (IData)(__Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__9__Vfuncout)) 
           | (IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue____PVT__csr_opcode_invalid_o));
    vlSelfRef.muldiv_csr_sva_checker__DOT___Vpast_3_1 
        = vlSelfRef.muldiv_csr_sva_checker__DOT___Vpast_2_0;
    vlSelfRef.muldiv_csr_sva_checker__DOT___Vpast_0_0 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb____PVT__rst)) 
           & (IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue____PVT__stall_w));
    vlSelfRef.muldiv_csr_sva_checker__DOT___Vpast_8_0 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb____PVT__rst)) 
           & (0U != (IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue____PVT__u_pipe_ctrl__DOT__exception_wb_q)));
    vlSelfRef.muldiv_csr_sva_checker__DOT___Vpast_4_0 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb____PVT__rst)) 
           & (IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core____PVT__u_div__DOT__valid_q));
    vlSelfRef.muldiv_csr_sva_checker__DOT___Vpast_5_0 
        = ((~ (IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb____PVT__rst)) 
           & (((IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__csr_write_pending_q) 
               & (IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue____PVT__csr_opcode_valid_o)) 
              & ((vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core____PVT__fetch_instr_w 
                  >> 0x14U) == (IData)(vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut____PVT__muldiv_csr_sva_checker__DOT__csr_last_waddr_q))));
    if (vlSymsp->TOP__riscv_muldiv_csr_tb.__PVT__rst) {
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_017_mul_result_valid_seen = 0U;
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_018_mul_hold_stable_seen = 0U;
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_019_mulh_signed_seen = 0U;
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_020_mulhu_unsigned_seen = 0U;
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_021_mulhsu_mixed_seen = 0U;
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_022_mul_zero_id_seen = 0U;
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_023_div_by_zero_seen = 0U;
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_024_div_overflow_seen = 0U;
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_025_div_result_correct_seen = 0U;
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_026_div_busy_no_new_issue_seen = 0U;
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_027_div_valid_pulse_seen = 0U;
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_028_csr_write_readback_seen = 0U;
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_029_illegal_csr_exception_seen = 0U;
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_030_mepc_capture_seen = 0U;
    } else {
        if (vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__mul_expect_valid_e2) {
            vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_017_mul_result_valid_seen = 1U;
        }
        if (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__stall_w) {
            vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_018_mul_hold_stable_seen = 1U;
        }
        if (((((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__opcode_issue_r) 
               & (0x2001033U == (0xfe00707fU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w))) 
              & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r 
                 >> 0x1fU)) & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r 
                               >> 0x1fU))) {
            vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_019_mulh_signed_seen = 1U;
        }
        if (((((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__opcode_issue_r) 
               & (0x2003033U == (0xfe00707fU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w))) 
              & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r 
                 >> 0x1fU)) & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r 
                               >> 0x1fU))) {
            vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_020_mulhu_unsigned_seen = 1U;
        }
        if (((((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__opcode_issue_r) 
               & (0x2002033U == (0xfe00707fU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w))) 
              & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r 
                 >> 0x1fU)) & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r 
                               >> 0x1fU))) {
            vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_021_mulhsu_mixed_seen = 1U;
        }
        if ((((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__opcode_issue_r) 
              & (0x2000033U == (0xfe00707fU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w))) 
             & ((0U == vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r) 
                | (0U == vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r)))) {
            vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_022_mul_zero_id_seen = 1U;
        }
        if ((((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__opcode_issue_r) 
              & ([&]() {
                            __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__6__op 
                                = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w;
                            __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__6__Vfuncout 
                                = ((((0x2004033U == 
                                      (0xfe00707fU 
                                       & __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__6__op)) 
                                     | (0x2005033U 
                                        == (0xfe00707fU 
                                            & __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__6__op))) 
                                    | (0x2006033U == 
                                       (0xfe00707fU 
                                        & __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__6__op))) 
                                   | (0x2007033U == 
                                      (0xfe00707fU 
                                       & __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__6__op)));
                        }(), (IData)(__Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__6__Vfuncout))) 
             & (0U == vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r))) {
            vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_023_div_by_zero_seen = 1U;
        }
        if ((((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_div__DOT__valid_q) 
              & (0U != vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_rb_latched)) 
             & (~ ((0x80000000U == vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_ra_latched) 
                   & (0xffffffffU == vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_rb_latched))))) {
            vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_025_div_result_correct_seen = 1U;
        }
        if (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_div__DOT__div_busy_q) {
            vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_026_div_busy_no_new_issue_seen = 1U;
        }
        if (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_div__DOT__valid_q) {
            vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_027_div_valid_pulse_seen = 1U;
        }
        if (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__PVT__rd_valid_e1_q) {
            vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_028_csr_write_readback_seen = 1U;
        }
        if ((0U != (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q))) {
            vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_030_mepc_capture_seen = 1U;
        }
        if (((((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__opcode_issue_r) 
               & ([&]() {
                                __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__7__op 
                                    = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w;
                                __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__7__Vfuncout 
                                    = ((((0x2004033U 
                                          == (0xfe00707fU 
                                              & __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__7__op)) 
                                         | (0x2005033U 
                                            == (0xfe00707fU 
                                                & __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__7__op))) 
                                        | (0x2006033U 
                                           == (0xfe00707fU 
                                               & __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__7__op))) 
                                       | (0x2007033U 
                                          == (0xfe00707fU 
                                              & __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__7__op)));
                            }(), (IData)(__Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__7__Vfuncout))) 
              & (0x80000000U == vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r)) 
             & (0xffffffffU == vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r))) {
            vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_024_div_overflow_seen = 1U;
        }
        if ((((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
              & ([&]() {
                            __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__8__op 
                                = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w;
                            __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__8__Vfuncout 
                                = ((((((0x1073U == 
                                        (0x707fU & __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__8__op)) 
                                       | (0x2073U == 
                                          (0x707fU 
                                           & __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__8__op))) 
                                      | (0x3073U == 
                                         (0x707fU & __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__8__op))) 
                                     | (0x5073U == 
                                        (0x707fU & __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__8__op))) 
                                    | (0x6073U == (0x707fU 
                                                   & __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__8__op))) 
                                   | (0x7073U == (0x707fU 
                                                  & __Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__8__op)));
                        }(), (IData)(__Vfunc_muldiv_csr_sva_checker__DOT__is_csr_family__8__Vfuncout))) 
             & (0x12U == (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__PVT__exception_e1_q)))) {
            vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_029_illegal_csr_exception_seen = 1U;
        }
    }
    vlSelfRef.muldiv_csr_sva_checker__DOT___Vpast_2_0 
        = ((0x2000033U == (0xfe00707fU & vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core____PVT__fetch_instr_w)) 
           & ((0U == vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue____PVT__issue_ra_value_r) 
              | (0U == vlSelfRef.__Vsampled_TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue____PVT__issue_rb_value_r)));
}

VL_INLINE_OPT void Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff___nba_sequent__TOP__riscv_muldiv_csr_tb__dut__1(Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff___nba_sequent__TOP__riscv_muldiv_csr_tb__dut__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vfunc_muldiv_csr_sva_checker__DOT__is_mul_family__0__Vfuncout;
    __Vfunc_muldiv_csr_sva_checker__DOT__is_mul_family__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_muldiv_csr_sva_checker__DOT__is_mul_family__0__op;
    __Vfunc_muldiv_csr_sva_checker__DOT__is_mul_family__0__op = 0;
    CData/*0:0*/ __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__1__Vfuncout;
    __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__1__op;
    __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__1__op = 0;
    CData/*0:0*/ __Vdly__muldiv_csr_sva_checker__DOT__mul_expect_valid_e1;
    __Vdly__muldiv_csr_sva_checker__DOT__mul_expect_valid_e1 = 0;
    IData/*31:0*/ __Vdly__muldiv_csr_sva_checker__DOT__mul_expect_e1;
    __Vdly__muldiv_csr_sva_checker__DOT__mul_expect_e1 = 0;
    CData/*0:0*/ __Vdly__muldiv_csr_sva_checker__DOT__div_pending;
    __Vdly__muldiv_csr_sva_checker__DOT__div_pending = 0;
    CData/*0:0*/ __Vdly__muldiv_csr_sva_checker__DOT__csr_write_pending_q;
    __Vdly__muldiv_csr_sva_checker__DOT__csr_write_pending_q = 0;
    // Body
    __Vdly__muldiv_csr_sva_checker__DOT__csr_write_pending_q 
        = vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__csr_write_pending_q;
    __Vdly__muldiv_csr_sva_checker__DOT__mul_expect_valid_e1 
        = vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__mul_expect_valid_e1;
    __Vdly__muldiv_csr_sva_checker__DOT__mul_expect_e1 
        = vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__mul_expect_e1;
    __Vdly__muldiv_csr_sva_checker__DOT__div_pending 
        = vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_pending;
    vlSelfRef.dcache_data_wr_w = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_data_wr_q;
    vlSelfRef.dcache_addr_w = (0xfffffffcU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_addr_q);
    if (vlSymsp->TOP__riscv_muldiv_csr_tb.__PVT__rst) {
        __Vdly__muldiv_csr_sva_checker__DOT__csr_write_pending_q = 0U;
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__csr_last_wdata_q = 0U;
    } else if (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__PVT__rd_valid_e1_q) {
        __Vdly__muldiv_csr_sva_checker__DOT__csr_write_pending_q = 1U;
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__csr_last_wdata_q 
            = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q;
    } else if ((((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                 & ((vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w 
                     >> 0x14U) == (IData)(vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__csr_last_waddr_q))) 
                & (IData)(vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__csr_write_pending_q))) {
        __Vdly__muldiv_csr_sva_checker__DOT__csr_write_pending_q = 0U;
    }
    if (vlSymsp->TOP__riscv_muldiv_csr_tb.__PVT__rst) {
        __Vdly__muldiv_csr_sva_checker__DOT__mul_expect_valid_e1 = 0U;
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__mul_expect_valid_e2 = 0U;
        __Vdly__muldiv_csr_sva_checker__DOT__mul_expect_e1 = 0U;
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__mul_expect_e2 = 0U;
    } else if ((1U & (~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__stall_w)))) {
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__mul_expect_valid_e2 
            = vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__mul_expect_valid_e1;
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__mul_expect_e2 
            = vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__mul_expect_e1;
        __Vdly__muldiv_csr_sva_checker__DOT__mul_expect_valid_e1 
            = ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__opcode_issue_r) 
               & ([&]() {
                    __Vfunc_muldiv_csr_sva_checker__DOT__is_mul_family__0__op 
                        = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w;
                    __Vfunc_muldiv_csr_sva_checker__DOT__is_mul_family__0__Vfuncout 
                        = ((((0x2000033U == (0xfe00707fU 
                                             & __Vfunc_muldiv_csr_sva_checker__DOT__is_mul_family__0__op)) 
                             | (0x2001033U == (0xfe00707fU 
                                               & __Vfunc_muldiv_csr_sva_checker__DOT__is_mul_family__0__op))) 
                            | (0x2002033U == (0xfe00707fU 
                                              & __Vfunc_muldiv_csr_sva_checker__DOT__is_mul_family__0__op))) 
                           | (0x2003033U == (0xfe00707fU 
                                             & __Vfunc_muldiv_csr_sva_checker__DOT__is_mul_family__0__op)));
                }(), (IData)(__Vfunc_muldiv_csr_sva_checker__DOT__is_mul_family__0__Vfuncout)));
        __Vdly__muldiv_csr_sva_checker__DOT__mul_expect_e1 
            = ((0x2000033U == (0xfe00707fU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w))
                ? (IData)(vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__mul_full_product_e0)
                : (IData)((vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__mul_full_product_e0 
                           >> 0x20U)));
    }
    if (vlSymsp->TOP__riscv_muldiv_csr_tb.__PVT__rst) {
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_ra_latched = 0U;
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_rb_latched = 0U;
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_is_div_latched = 0U;
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_is_divu_latched = 0U;
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_is_rem_latched = 0U;
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_is_remu_latched = 0U;
        __Vdly__muldiv_csr_sva_checker__DOT__div_pending = 0U;
    } else if ((((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__opcode_issue_r) 
                 & ([&]() {
                        __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__1__op 
                            = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w;
                        __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__1__Vfuncout 
                            = ((((0x2004033U == (0xfe00707fU 
                                                 & __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__1__op)) 
                                 | (0x2005033U == (0xfe00707fU 
                                                   & __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__1__op))) 
                                | (0x2006033U == (0xfe00707fU 
                                                  & __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__1__op))) 
                               | (0x2007033U == (0xfe00707fU 
                                                 & __Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__1__op)));
                    }(), (IData)(__Vfunc_muldiv_csr_sva_checker__DOT__is_div_family__1__Vfuncout))) 
                & (~ (IData)(vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_pending)))) {
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_ra_latched 
            = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r;
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_rb_latched 
            = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r;
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_is_div_latched 
            = (0x2004033U == (0xfe00707fU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w));
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_is_divu_latched 
            = (0x2005033U == (0xfe00707fU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w));
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_is_rem_latched 
            = (0x2006033U == (0xfe00707fU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w));
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_is_remu_latched 
            = (0x2007033U == (0xfe00707fU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w));
        __Vdly__muldiv_csr_sva_checker__DOT__div_pending = 1U;
    } else if (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_div__DOT__valid_q) {
        __Vdly__muldiv_csr_sva_checker__DOT__div_pending = 0U;
    }
    if (vlSymsp->TOP__riscv_muldiv_csr_tb.__PVT__rst) {
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__csr_last_waddr_q = 0U;
    } else if (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__PVT__rd_valid_e1_q) {
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__csr_last_waddr_q 
            = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i;
    }
    vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__csr_write_pending_q 
        = __Vdly__muldiv_csr_sva_checker__DOT__csr_write_pending_q;
    vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__mul_expect_valid_e1 
        = __Vdly__muldiv_csr_sva_checker__DOT__mul_expect_valid_e1;
    vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__mul_expect_e1 
        = __Vdly__muldiv_csr_sva_checker__DOT__mul_expect_e1;
    vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_pending 
        = __Vdly__muldiv_csr_sva_checker__DOT__div_pending;
    if ((0U == vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_rb_latched)) {
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_ref_q = 0xffffffffU;
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_ref_r 
            = vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_ra_latched;
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__divu_ref_q = 0xffffffffU;
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__divu_ref_r 
            = vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_ra_latched;
    } else {
        if (((0x80000000U == vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_ra_latched) 
             & (0xffffffffU == vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_rb_latched))) {
            vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_ref_q = 0x80000000U;
            vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_ref_r = 0U;
        } else {
            vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_ref_q 
                = VL_DIVS_III(32, vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_ra_latched, vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_rb_latched);
            vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_ref_r 
                = VL_MODDIVS_III(32, vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_ra_latched, vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_rb_latched);
        }
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__divu_ref_q 
            = VL_DIV_III(32, vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_ra_latched, vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_rb_latched);
        vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__divu_ref_r 
            = VL_MODDIV_III(32, vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_ra_latched, vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__div_rb_latched);
    }
}

VL_INLINE_OPT void Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff___nba_comb__TOP__riscv_muldiv_csr_tb__dut__0(Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff___nba_comb__TOP__riscv_muldiv_csr_tb__dut__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dcache_data_rd_w = ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_mux__DOT__cache_access_q)
                                   ? vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__data_r
                                   : vlSymsp->TOP__riscv_muldiv_csr_tb__d_memory.__PVT__rdata_o);
}

VL_INLINE_OPT void Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff___nba_comb__TOP__riscv_muldiv_csr_tb__dut__1(Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff___nba_comb__TOP__riscv_muldiv_csr_tb__dut__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dcache_ack_w = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__mem_ack_o;
}

VL_INLINE_OPT void Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff___nba_comb__TOP__riscv_muldiv_csr_tb__dut__2(Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff___nba_comb__TOP__riscv_muldiv_csr_tb__dut__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dcache_wr_w = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__mem_d_wr_o;
    vlSelfRef.dcache_rd_w = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__mem_d_rd_o;
    vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__unnamedblk1__DOT__a33 
        = (((0x2002033U == (0xfe00707fU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)) 
            | (0x2001033U == (0xfe00707fU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)))
            ? (((QData)((IData)((vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r 
                                 >> 0x1fU))) << 0x20U) 
               | (QData)((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r)))
            : (QData)((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r)));
    vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__unnamedblk1__DOT__b33 
        = ((0x2002033U == (0xfe00707fU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w))
            ? (QData)((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r))
            : ((0x2001033U == (0xfe00707fU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w))
                ? (((QData)((IData)((vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r 
                                     >> 0x1fU))) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r)))
                : (QData)((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r))));
    vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__mul_full_product_e0 
        = VL_MULS_QQQ(64, VL_EXTENDS_QQ(64,34, (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__unnamedblk1__DOT__a33 
                                                                             >> 0x20U))))) 
                                                 << 0x21U) 
                                                | vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__unnamedblk1__DOT__a33)), 
                      VL_EXTENDS_QQ(64,34, (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__unnamedblk1__DOT__b33 
                                                                         >> 0x20U))))) 
                                             << 0x21U) 
                                            | vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__unnamedblk1__DOT__b33)));
}
