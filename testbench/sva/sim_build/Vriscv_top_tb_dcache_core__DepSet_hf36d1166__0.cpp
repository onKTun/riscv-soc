// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top_tb.h for the primary calling header

#include "Vriscv_top_tb__pch.h"
#include "Vriscv_top_tb_dcache_core.h"

VL_INLINE_OPT void Vriscv_top_tb_dcache_core___nba_sequent__TOP__riscv_top_tb__dut__u_dcache__u_core__3(Vriscv_top_tb_dcache_core* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_top_tb_dcache_core___nba_sequent__TOP__riscv_top_tb__dut__u_dcache__u_core__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tag_dirty_any_m_w = ((IData)(vlSelfRef.__VdfgExtracted_h46ba6bcb__0) 
                                          | (IData)(vlSelfRef.__VdfgExtracted_h03d1c5f6__0));
}
