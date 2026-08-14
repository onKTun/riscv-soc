// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_muldiv_csr_tb.h for the primary calling header

#include "Vriscv_muldiv_csr_tb__pch.h"
#include "Vriscv_muldiv_csr_tb___024root.h"

void Vriscv_muldiv_csr_tb___024root___eval_triggers__ico(Vriscv_muldiv_csr_tb___024root* vlSelf);
void Vriscv_muldiv_csr_tb___024root___eval_ico(Vriscv_muldiv_csr_tb___024root* vlSelf);

bool Vriscv_muldiv_csr_tb___024root___eval_phase__ico(Vriscv_muldiv_csr_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_muldiv_csr_tb___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vriscv_muldiv_csr_tb___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vriscv_muldiv_csr_tb___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vriscv_muldiv_csr_tb___024root___timing_resume(Vriscv_muldiv_csr_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_muldiv_csr_tb___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hbaacaee0__0.resume(
                                                   "@(posedge riscv_muldiv_csr_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vriscv_muldiv_csr_tb___024root___timing_commit(Vriscv_muldiv_csr_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_muldiv_csr_tb___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hbaacaee0__0.commit(
                                                   "@(posedge riscv_muldiv_csr_tb.clk)");
    }
}

void Vriscv_muldiv_csr_tb___024root___eval_triggers__act(Vriscv_muldiv_csr_tb___024root* vlSelf);
void Vriscv_muldiv_csr_tb___024root___eval_act(Vriscv_muldiv_csr_tb___024root* vlSelf);

bool Vriscv_muldiv_csr_tb___024root___eval_phase__act(Vriscv_muldiv_csr_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_muldiv_csr_tb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vriscv_muldiv_csr_tb___024root___eval_triggers__act(vlSelf);
    Vriscv_muldiv_csr_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vriscv_muldiv_csr_tb___024root___timing_resume(vlSelf);
        Vriscv_muldiv_csr_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vriscv_muldiv_csr_tb___024root___eval_nba(Vriscv_muldiv_csr_tb___024root* vlSelf);

bool Vriscv_muldiv_csr_tb___024root___eval_phase__nba(Vriscv_muldiv_csr_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_muldiv_csr_tb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vriscv_muldiv_csr_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
void Vriscv_muldiv_csr_tb___024root___eval_debug_assertions(Vriscv_muldiv_csr_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_muldiv_csr_tb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
