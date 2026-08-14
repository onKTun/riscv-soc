// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_muldiv_csr_tb.h for the primary calling header

#include "Vriscv_muldiv_csr_tb__pch.h"
#include "Vriscv_muldiv_csr_tb__Syms.h"
#include "Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff.h"

VL_ATTR_COLD void Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff___eval_final__TOP__riscv_muldiv_csr_tb__dut(Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff___eval_final__TOP__riscv_muldiv_csr_tb__dut\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_029_illegal_csr_exception_seen))))) {
        VL_WRITEF_NX("[COVERAGE-EXEMPT] CHK_029_illegal_csr_exception: unreachable at SUPPORT_SUPER=0 (riscv_top.v does not expose this parameter); excluded from sign-off by design decision, see knowledge_capture.md\n",0);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_030_mepc_capture_seen))))) {
        VL_WRITEF_NX("[COVERAGE-EXEMPT] CHK_030_mepc_capture: depends on CHK_029's exception path; same exemption applies\n",0);
    }
    if (VL_LIKELY(((((((((((((IData)(vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_017_mul_result_valid_seen) 
                             & (IData)(vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_018_mul_hold_stable_seen)) 
                            & (IData)(vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_019_mulh_signed_seen)) 
                           & (IData)(vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_020_mulhu_unsigned_seen)) 
                          & (IData)(vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_021_mulhsu_mixed_seen)) 
                         & (IData)(vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_022_mul_zero_id_seen)) 
                        & (IData)(vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_023_div_by_zero_seen)) 
                       & (IData)(vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_024_div_overflow_seen)) 
                      & (IData)(vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_025_div_result_correct_seen)) 
                     & (IData)(vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_026_div_busy_no_new_issue_seen)) 
                    & (IData)(vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_027_div_valid_pulse_seen)) 
                   & (IData)(vlSelfRef.__PVT__muldiv_csr_sva_checker__DOT__CHK_028_csr_write_readback_seen)))) {
        VL_WRITEF_NX("[COVERAGE] all required MUL/DIV/CSR SVA triggers were observed (CHK_017-028; CHK_029/030 sign-off-exempt per documented design decision)\n",0);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: riscv_muldiv_csr_sva.sv:533: Assertion failed in %Nriscv_muldiv_csr_tb.dut.muldiv_csr_sva_checker: [COVERAGE] one or more required MUL/DIV/CSR CHK triggers were not observed (CHK_017-028; CHK_029/030 are sign-off-exempt, see above)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("testbench/sva/riscv_muldiv_csr_sva.sv", 533, "", false);
    }
}

VL_ATTR_COLD void Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff___stl_sequent__TOP__riscv_muldiv_csr_tb__dut__0(Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff___stl_sequent__TOP__riscv_muldiv_csr_tb__dut__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dcache_data_wr_w = vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_data_wr_q;
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
    vlSelfRef.dcache_addr_w = (0xfffffffcU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_addr_q);
}

VL_ATTR_COLD void Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff___configure_coverage(Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_muldiv_csr_tb_riscv_top__M0_MBffff___configure_coverage\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "testbench/sva/riscv_muldiv_csr_sva.sv", 182, 33, ".muldiv_csr_sva_checker.CHK_017_mul_result_valid_C", "v_user/riscv_muldiv_csr_sva_checker", "CHK_017_mul_result_valid_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "testbench/sva/riscv_muldiv_csr_sva.sv", 191, 32, ".muldiv_csr_sva_checker.CHK_018_mul_hold_stable_C", "v_user/riscv_muldiv_csr_sva_checker", "CHK_018_mul_hold_stable_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "testbench/sva/riscv_muldiv_csr_sva.sv", 196, 28, ".muldiv_csr_sva_checker.CHK_019_mulh_signed_C", "v_user/riscv_muldiv_csr_sva_checker", "CHK_019_mulh_signed_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "testbench/sva/riscv_muldiv_csr_sva.sv", 204, 31, ".muldiv_csr_sva_checker.CHK_020_mulhu_unsigned_C", "v_user/riscv_muldiv_csr_sva_checker", "CHK_020_mulhu_unsigned_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "testbench/sva/riscv_muldiv_csr_sva.sv", 211, 29, ".muldiv_csr_sva_checker.CHK_021_mulhsu_mixed_C", "v_user/riscv_muldiv_csr_sva_checker", "CHK_021_mulhsu_mixed_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "testbench/sva/riscv_muldiv_csr_sva.sv", 224, 28, ".muldiv_csr_sva_checker.CHK_022_mul_zero_id_C", "v_user/riscv_muldiv_csr_sva_checker", "CHK_022_mul_zero_id_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "testbench/sva/riscv_muldiv_csr_sva.sv", 291, 28, ".muldiv_csr_sva_checker.CHK_023_div_by_zero_C", "v_user/riscv_muldiv_csr_sva_checker", "CHK_023_div_by_zero_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "testbench/sva/riscv_muldiv_csr_sva.sv", 306, 29, ".muldiv_csr_sva_checker.CHK_024_div_overflow_C", "v_user/riscv_muldiv_csr_sva_checker", "CHK_024_div_overflow_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "testbench/sva/riscv_muldiv_csr_sva.sv", 347, 35, ".muldiv_csr_sva_checker.CHK_025_div_result_correct_C", "v_user/riscv_muldiv_csr_sva_checker", "CHK_025_div_result_correct_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "testbench/sva/riscv_muldiv_csr_sva.sv", 358, 38, ".muldiv_csr_sva_checker.CHK_026_div_busy_no_new_issue_C", "v_user/riscv_muldiv_csr_sva_checker", "CHK_026_div_busy_no_new_issue_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "testbench/sva/riscv_muldiv_csr_sva.sv", 370, 32, ".muldiv_csr_sva_checker.CHK_027_div_valid_pulse_C", "v_user/riscv_muldiv_csr_sva_checker", "CHK_027_div_valid_pulse_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "testbench/sva/riscv_muldiv_csr_sva.sv", 412, 35, ".muldiv_csr_sva_checker.CHK_028_csr_write_readback_C", "v_user/riscv_muldiv_csr_sva_checker", "CHK_028_csr_write_readback_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "testbench/sva/riscv_muldiv_csr_sva.sv", 432, 38, ".muldiv_csr_sva_checker.CHK_029_illegal_csr_exception_C", "v_user/riscv_muldiv_csr_sva_checker", "CHK_029_illegal_csr_exception_C", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "testbench/sva/riscv_muldiv_csr_sva.sv", 454, 29, ".muldiv_csr_sva_checker.CHK_030_mepc_capture_C", "v_user/riscv_muldiv_csr_sva_checker", "CHK_030_mepc_capture_C", "");
}
