// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top_tb.h for the primary calling header

#include "Vriscv_top_tb__pch.h"
#include "Vriscv_top_tb__Syms.h"
#include "Vriscv_top_tb_icache.h"

VL_ATTR_COLD void Vriscv_top_tb_icache___stl_sequent__TOP__riscv_top_tb__dut__u_icache__0(Vriscv_top_tb_icache* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_tb_icache___stl_sequent__TOP__riscv_top_tb__dut__u_icache__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tag_data_in_r = 0U;
    vlSelfRef.__PVT__data_addr_r = (0x7ffU & ((2U == (IData)(vlSelfRef.__PVT__state_q))
                                               ? (IData)(vlSelfRef.__PVT__data_write_addr_q)
                                               : ((3U 
                                                   == (IData)(vlSelfRef.__PVT__state_q))
                                                   ? 
                                                  (vlSelfRef.__PVT__lookup_addr_q 
                                                   >> 2U)
                                                   : 
                                                  (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_fetch__DOT__pc_f_q 
                                                   >> 2U))));
    vlSelfRef.__PVT__tag0_hit_w = ((vlSymsp->TOP__riscv_top_tb__dut__u_icache__u_tag0.__PVT__ram_read_q 
                                    >> 0x13U) & ((0x7ffffU 
                                                  & vlSymsp->TOP__riscv_top_tb__dut__u_icache__u_tag0.__PVT__ram_read_q) 
                                                 == 
                                                 (vlSelfRef.__PVT__lookup_addr_q 
                                                  >> 0xdU)));
    vlSelfRef.__PVT__tag1_hit_w = ((vlSymsp->TOP__riscv_top_tb__dut__u_icache__u_tag1.__PVT__ram_read_q 
                                    >> 0x13U) & ((0x7ffffU 
                                                  & vlSymsp->TOP__riscv_top_tb__dut__u_icache__u_tag1.__PVT__ram_read_q) 
                                                 == 
                                                 (vlSelfRef.__PVT__lookup_addr_q 
                                                  >> 0xdU)));
    vlSelfRef.__PVT__tag0_write_r = 0U;
    vlSelfRef.__PVT__tag1_write_r = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__state_q))) {
        vlSelfRef.__PVT__tag_data_in_r = 0U;
        vlSelfRef.__PVT__tag_addr_r = (0xffU & (IData)(vlSelfRef.__PVT__flush_addr_q));
        vlSelfRef.__PVT__tag0_write_r = 1U;
        vlSelfRef.__PVT__tag1_write_r = 1U;
    } else {
        if ((2U == (IData)(vlSelfRef.__PVT__state_q))) {
            vlSelfRef.__PVT__tag_data_in_r = (0x80000U 
                                              | (vlSelfRef.__PVT__lookup_addr_q 
                                                 >> 0xdU));
            vlSelfRef.__PVT__tag0_write_r = (((IData)(vlSymsp->TOP__riscv_top_tb.__PVT__i_memory__DOT__read_active) 
                                              & (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__i_rlast)) 
                                             & (~ (IData)(vlSelfRef.__PVT__replace_way_q)));
            vlSelfRef.__PVT__tag1_write_r = (((IData)(vlSymsp->TOP__riscv_top_tb.__PVT__i_memory__DOT__read_active) 
                                              & (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__i_rlast)) 
                                             & (IData)(vlSelfRef.__PVT__replace_way_q));
        }
        vlSelfRef.__PVT__tag_addr_r = (0xffU & (((2U 
                                                  == (IData)(vlSelfRef.__PVT__state_q)) 
                                                 | (3U 
                                                    == (IData)(vlSelfRef.__PVT__state_q)))
                                                 ? 
                                                (vlSelfRef.__PVT__lookup_addr_q 
                                                 >> 5U)
                                                 : 
                                                (vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_fetch__DOT__pc_f_q 
                                                 >> 5U)));
    }
    vlSelfRef.__PVT__tag_hit_any_w = ((IData)(vlSelfRef.__PVT__tag0_hit_w) 
                                      | (IData)(vlSelfRef.__PVT__tag1_hit_w));
    vlSelfRef.__PVT__inst_r = vlSymsp->TOP__riscv_top_tb__dut__u_icache__u_data0.__PVT__ram_read_q;
    if (vlSelfRef.__PVT__tag0_hit_w) {
        vlSelfRef.__PVT__inst_r = vlSymsp->TOP__riscv_top_tb__dut__u_icache__u_data0.__PVT__ram_read_q;
    } else if (vlSelfRef.__PVT__tag1_hit_w) {
        vlSelfRef.__PVT__inst_r = vlSymsp->TOP__riscv_top_tb__dut__u_icache__u_data1.__PVT__ram_read_q;
    }
    vlSelfRef.__PVT__next_state_r = vlSelfRef.__PVT__state_q;
    if ((2U & (IData)(vlSelfRef.__PVT__state_q))) {
        if ((1U & (IData)(vlSelfRef.__PVT__state_q))) {
            vlSelfRef.__PVT__next_state_r = 1U;
        } else if (((IData)(vlSymsp->TOP__riscv_top_tb.__PVT__i_memory__DOT__read_active) 
                    & (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__i_rlast))) {
            vlSelfRef.__PVT__next_state_r = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__state_q))) {
        if (((IData)(vlSelfRef.__PVT__lookup_valid_q) 
             & (~ (IData)(vlSelfRef.__PVT__tag_hit_any_w)))) {
            vlSelfRef.__PVT__next_state_r = 2U;
        } else if (((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core__u_csr.__PVT__ifence_q) 
                    | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_fetch__DOT__icache_invalidate_q))) {
            vlSelfRef.__PVT__next_state_r = 0U;
        }
    } else if (vlSelfRef.__PVT__invalidate_q) {
        vlSelfRef.__PVT__next_state_r = 1U;
    } else if ((0xffU == (IData)(vlSelfRef.__PVT__flush_addr_q))) {
        vlSelfRef.__PVT__next_state_r = 1U;
    }
    vlSelfRef.__PVT__req_valid_o = ((IData)(vlSelfRef.__PVT__lookup_valid_q) 
                                    & ((1U == (IData)(vlSelfRef.__PVT__state_q)) 
                                       & (IData)(vlSelfRef.__PVT__tag_hit_any_w)));
    vlSelfRef.__PVT__axi_arvalid_o = (((1U == (IData)(vlSelfRef.__PVT__state_q)) 
                                       & (2U == (IData)(vlSelfRef.__PVT__next_state_r))) 
                                      | (IData)(vlSelfRef.__PVT__axi_arvalid_q));
    vlSelfRef.__PVT__req_accept_o = ((1U == (IData)(vlSelfRef.__PVT__state_q)) 
                                     & (2U != (IData)(vlSelfRef.__PVT__next_state_r)));
}
