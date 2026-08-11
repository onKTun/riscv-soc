// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top_tb.h for the primary calling header

#include "Vriscv_top_tb__pch.h"
#include "Vriscv_top_tb__Syms.h"
#include "Vriscv_top_tb_dcache.h"

extern const VlUnpacked<CData/*0:0*/, 512> Vriscv_top_tb__ConstPool__TABLE_hc6b02f5a_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vriscv_top_tb__ConstPool__TABLE_h578b2aa6_0;

VL_INLINE_OPT void Vriscv_top_tb_dcache___nba_sequent__TOP__riscv_top_tb__dut__u_dcache__0(Vriscv_top_tb_dcache* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_tb_dcache___nba_sequent__TOP__riscv_top_tb__dut__u_dcache__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ u_axi__DOT__u_axi__DOT____VdfgRegularize_he156c47b_0_2;
    u_axi__DOT__u_axi__DOT____VdfgRegularize_he156c47b_0_2 = 0;
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*1:0*/ __Vdly__u_uncached__DOT__u_req__DOT__count_q;
    __Vdly__u_uncached__DOT__u_req__DOT__count_q = 0;
    CData/*0:0*/ __Vdly__u_uncached__DOT__u_req__DOT__rd_ptr_q;
    __Vdly__u_uncached__DOT__u_req__DOT__rd_ptr_q = 0;
    CData/*0:0*/ __Vdly__u_uncached__DOT__u_req__DOT__wr_ptr_q;
    __Vdly__u_uncached__DOT__u_req__DOT__wr_ptr_q = 0;
    CData/*1:0*/ __Vdly__u_uncached__DOT__u_resp__DOT__count_q;
    __Vdly__u_uncached__DOT__u_resp__DOT__count_q = 0;
    CData/*0:0*/ __Vdly__u_uncached__DOT__u_resp__DOT__rd_ptr_q;
    __Vdly__u_uncached__DOT__u_resp__DOT__rd_ptr_q = 0;
    CData/*0:0*/ __Vdly__u_uncached__DOT__u_resp__DOT__wr_ptr_q;
    __Vdly__u_uncached__DOT__u_resp__DOT__wr_ptr_q = 0;
    CData/*7:0*/ __Vdly__u_axi__DOT__req_cnt_q;
    __Vdly__u_axi__DOT__req_cnt_q = 0;
    CData/*1:0*/ __Vdly__u_axi__DOT__resp_outstanding_q;
    __Vdly__u_axi__DOT__resp_outstanding_q = 0;
    CData/*1:0*/ __Vdly__u_axi__DOT__u_req__DOT__count_q;
    __Vdly__u_axi__DOT__u_req__DOT__count_q = 0;
    CData/*0:0*/ __Vdly__u_axi__DOT__u_req__DOT__rd_ptr_q;
    __Vdly__u_axi__DOT__u_req__DOT__rd_ptr_q = 0;
    CData/*0:0*/ __Vdly__u_axi__DOT__u_req__DOT__wr_ptr_q;
    __Vdly__u_axi__DOT__u_req__DOT__wr_ptr_q = 0;
    CData/*7:0*/ __Vdly__u_axi__DOT__u_axi__DOT__req_cnt_q;
    __Vdly__u_axi__DOT__u_axi__DOT__req_cnt_q = 0;
    VlWide<3>/*69:0*/ __VdlyVal__u_uncached__DOT__u_req__DOT__ram_q__v0;
    VL_ZERO_W(70, __VdlyVal__u_uncached__DOT__u_req__DOT__ram_q__v0);
    CData/*0:0*/ __VdlyDim0__u_uncached__DOT__u_req__DOT__ram_q__v0;
    __VdlyDim0__u_uncached__DOT__u_req__DOT__ram_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_uncached__DOT__u_req__DOT__ram_q__v0;
    __VdlySet__u_uncached__DOT__u_req__DOT__ram_q__v0 = 0;
    CData/*0:0*/ __VdlyDim0__u_uncached__DOT__u_resp__DOT__ram_q__v0;
    __VdlyDim0__u_uncached__DOT__u_resp__DOT__ram_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_uncached__DOT__u_resp__DOT__ram_q__v0;
    __VdlySet__u_uncached__DOT__u_resp__DOT__ram_q__v0 = 0;
    VlWide<3>/*76:0*/ __VdlyVal__u_axi__DOT__u_req__DOT__ram_q__v0;
    VL_ZERO_W(77, __VdlyVal__u_axi__DOT__u_req__DOT__ram_q__v0);
    CData/*0:0*/ __VdlyDim0__u_axi__DOT__u_req__DOT__ram_q__v0;
    __VdlyDim0__u_axi__DOT__u_req__DOT__ram_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_axi__DOT__u_req__DOT__ram_q__v0;
    __VdlySet__u_axi__DOT__u_req__DOT__ram_q__v0 = 0;
    // Body
    __Vdly__u_axi__DOT__req_cnt_q = vlSelfRef.__PVT__u_axi__DOT__req_cnt_q;
    __Vdly__u_uncached__DOT__u_resp__DOT__wr_ptr_q 
        = vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__wr_ptr_q;
    __VdlySet__u_uncached__DOT__u_resp__DOT__ram_q__v0 = 0U;
    __Vdly__u_axi__DOT__u_axi__DOT__req_cnt_q = vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__req_cnt_q;
    __Vdly__u_uncached__DOT__u_req__DOT__rd_ptr_q = vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q;
    __Vdly__u_axi__DOT__resp_outstanding_q = vlSelfRef.__PVT__u_axi__DOT__resp_outstanding_q;
    __Vdly__u_axi__DOT__u_req__DOT__rd_ptr_q = vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q;
    __Vdly__u_axi__DOT__u_req__DOT__count_q = vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__count_q;
    __Vdly__u_uncached__DOT__u_req__DOT__count_q = vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__count_q;
    __Vdly__u_axi__DOT__u_req__DOT__wr_ptr_q = vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__wr_ptr_q;
    __VdlySet__u_axi__DOT__u_req__DOT__ram_q__v0 = 0U;
    __Vdly__u_uncached__DOT__u_resp__DOT__rd_ptr_q 
        = vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__rd_ptr_q;
    __Vdly__u_uncached__DOT__u_resp__DOT__count_q = vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__count_q;
    __Vdly__u_uncached__DOT__u_req__DOT__wr_ptr_q = vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__wr_ptr_q;
    __VdlySet__u_uncached__DOT__u_req__DOT__ram_q__v0 = 0U;
    if (vlSymsp->TOP__riscv_top_tb.__PVT__rst) {
        __Vdly__u_axi__DOT__req_cnt_q = 0U;
        __Vdly__u_uncached__DOT__u_resp__DOT__wr_ptr_q = 0U;
        __Vdly__u_axi__DOT__u_axi__DOT__req_cnt_q = 0U;
        __Vdly__u_uncached__DOT__u_req__DOT__rd_ptr_q = 0U;
        __Vdly__u_axi__DOT__resp_outstanding_q = 0U;
        __Vdly__u_axi__DOT__u_req__DOT__rd_ptr_q = 0U;
        __Vdly__u_axi__DOT__u_req__DOT__count_q = 0U;
        __Vdly__u_uncached__DOT__u_req__DOT__count_q = 0U;
        __Vdly__u_axi__DOT__u_req__DOT__wr_ptr_q = 0U;
        __Vdly__u_uncached__DOT__u_resp__DOT__rd_ptr_q = 0U;
        __Vdly__u_uncached__DOT__u_resp__DOT__count_q = 0U;
        __Vdly__u_uncached__DOT__u_req__DOT__wr_ptr_q = 0U;
        vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__wlast_q = 0U;
        vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__wvalid_q = 0U;
        vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__awvalid_q = 0U;
        vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_q[0U] = 0U;
        vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_q[1U] = 0U;
        vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_q[2U] = 0U;
        vlSelfRef.__PVT__u_mux__DOT__pending_q = 0U;
        vlSelfRef.__PVT__u_uncached__DOT__request_pending_q = 0U;
        vlSelfRef.__PVT__u_mux__DOT__cache_access_q = 0U;
    } else {
        if (((((IData)(vlSelfRef.__PVT__u_axi__DOT__req_is_write_w) 
               & (0U == (IData)(vlSelfRef.__PVT__u_axi__DOT__req_cnt_q))) 
              & (0U != (IData)(vlSelfRef.__PVT__u_axi__DOT__req_len_w))) 
             & (IData)(vlSelfRef.__PVT__u_axi__DOT__accept_w))) {
            __Vdly__u_axi__DOT__req_cnt_q = (0xffU 
                                             & ((IData)(vlSelfRef.__PVT__u_axi__DOT__req_len_w) 
                                                - (IData)(1U)));
        } else if ((((0U != (IData)(vlSelfRef.__PVT__u_axi__DOT__req_cnt_q)) 
                     & (IData)(vlSelfRef.__PVT__u_axi__DOT__req_is_write_w)) 
                    & (IData)(vlSelfRef.__PVT__u_axi__DOT__accept_w))) {
            __Vdly__u_axi__DOT__req_cnt_q = (0xffU 
                                             & ((IData)(vlSelfRef.__PVT__u_axi__DOT__req_cnt_q) 
                                                - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__u_uncached__DOT__res_push_w) 
             & (2U != (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__count_q)))) {
            __VdlyDim0__u_uncached__DOT__u_resp__DOT__ram_q__v0 
                = vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__wr_ptr_q;
            __VdlySet__u_uncached__DOT__u_resp__DOT__ram_q__v0 = 1U;
            __Vdly__u_uncached__DOT__u_resp__DOT__wr_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__wr_ptr_q)));
        }
        if ((((IData)(vlSelfRef.__PVT__u_axi__DOT__req_can_issue_w) 
              & (IData)(vlSelfRef.__PVT__u_axi__DOT__req_is_write_w)) 
             & (IData)(vlSelfRef.__PVT__u_axi__DOT__accept_w))) {
            __Vdly__u_axi__DOT__u_axi__DOT__req_cnt_q 
                = (0xffU & ((0U != (IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__req_cnt_q))
                             ? ((IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__req_cnt_q) 
                                - (IData)(1U)) : (IData)(vlSelfRef.__PVT__u_axi__DOT__req_len_w)));
        }
        if (((IData)(vlSelfRef.__PVT__u_uncached__DOT__request_complete_w) 
             & (0U != (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__count_q)))) {
            __Vdly__u_uncached__DOT__u_req__DOT__rd_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q)));
        }
        if ((((IData)(vlSelfRef.__PVT__u_axi__DOT__res_push_w) 
              & (IData)(vlSelfRef.__PVT__u_axi__DOT__res_accept_w)) 
             & (~ ((IData)(vlSelfRef.__PVT__u_axi__DOT__resp_pop_w) 
                   & (IData)(vlSelfRef.__PVT__u_axi__DOT__res_valid_w))))) {
            __Vdly__u_axi__DOT__resp_outstanding_q 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_axi__DOT__resp_outstanding_q)));
        } else if (((~ ((IData)(vlSelfRef.__PVT__u_axi__DOT__res_push_w) 
                        & (IData)(vlSelfRef.__PVT__u_axi__DOT__res_accept_w))) 
                    & ((IData)(vlSelfRef.__PVT__u_axi__DOT__resp_pop_w) 
                       & (IData)(vlSelfRef.__PVT__u_axi__DOT__res_valid_w)))) {
            __Vdly__u_axi__DOT__resp_outstanding_q 
                = (3U & ((IData)(vlSelfRef.__PVT__u_axi__DOT__resp_outstanding_q) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__u_axi__DOT__accept_w) 
             & (0U != (IData)(vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__count_q)))) {
            __Vdly__u_axi__DOT__u_req__DOT__rd_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q)));
        }
        if ((((IData)(vlSelfRef.__PVT__u_axi__DOT__req_push_w) 
              & (IData)(vlSelfRef.__PVT__u_axi__DOT__req_accept_w)) 
             & (~ ((IData)(vlSelfRef.__PVT__u_axi__DOT__accept_w) 
                   & (IData)(vlSelfRef.__PVT__u_axi__DOT__req_valid_w))))) {
            __Vdly__u_axi__DOT__u_req__DOT__count_q 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__count_q)));
        } else if (((~ ((IData)(vlSelfRef.__PVT__u_axi__DOT__req_push_w) 
                        & (IData)(vlSelfRef.__PVT__u_axi__DOT__req_accept_w))) 
                    & ((IData)(vlSelfRef.__PVT__u_axi__DOT__accept_w) 
                       & (IData)(vlSelfRef.__PVT__u_axi__DOT__req_valid_w)))) {
            __Vdly__u_axi__DOT__u_req__DOT__count_q 
                = (3U & ((IData)(vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__count_q) 
                         - (IData)(1U)));
        }
        if ((((IData)(vlSelfRef.__PVT__u_uncached__DOT__req_push_w) 
              & (IData)(vlSelfRef.__PVT__u_uncached__DOT__req_accept_w)) 
             & (~ ((IData)(vlSelfRef.__PVT__u_uncached__DOT__request_complete_w) 
                   & (IData)(vlSelfRef.__PVT__u_uncached__DOT__req_valid_w))))) {
            __Vdly__u_uncached__DOT__u_req__DOT__count_q 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__count_q)));
        } else if (((~ ((IData)(vlSelfRef.__PVT__u_uncached__DOT__req_push_w) 
                        & (IData)(vlSelfRef.__PVT__u_uncached__DOT__req_accept_w))) 
                    & ((IData)(vlSelfRef.__PVT__u_uncached__DOT__request_complete_w) 
                       & (IData)(vlSelfRef.__PVT__u_uncached__DOT__req_valid_w)))) {
            __Vdly__u_uncached__DOT__u_req__DOT__count_q 
                = (3U & ((IData)(vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__count_q) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__u_axi__DOT__req_push_w) 
             & (2U != (IData)(vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__count_q)))) {
            if (vlSelfRef.__PVT__pmem_select_w) {
                __VdlyVal__u_axi__DOT__u_req__DOT__ram_q__v0[0U] 
                    = vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__pmem_addr_w;
                __VdlyVal__u_axi__DOT__u_req__DOT__ram_q__v0[1U] 
                    = vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__pmem_write_data_w;
            } else {
                __VdlyVal__u_axi__DOT__u_req__DOT__ram_q__v0[0U] 
                    = (0xfffffffcU & vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                       [vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][0U]);
                __VdlyVal__u_axi__DOT__u_req__DOT__ram_q__v0[1U] 
                    = vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                    [vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][1U];
            }
            __VdlyVal__u_axi__DOT__u_req__DOT__ram_q__v0[2U] 
                = (0x1fffU & ((((IData)(vlSelfRef.__PVT__pmem_select_w)
                                 ? ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__VdfgRegularize_h82da71bd_1_2)
                                     ? 7U : 0U) : 0U) 
                               << 5U) | (((IData)(vlSelfRef.__PVT__u_pmem_mux__DOT__outport_rd_r) 
                                          << 4U) | (IData)(vlSelfRef.__PVT__u_pmem_mux__DOT__outport_wr_r))));
            __VdlyDim0__u_axi__DOT__u_req__DOT__ram_q__v0 
                = vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__wr_ptr_q;
            __VdlySet__u_axi__DOT__u_req__DOT__ram_q__v0 = 1U;
            __Vdly__u_axi__DOT__u_req__DOT__wr_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__wr_ptr_q)));
        }
        if (((IData)(vlSelfRef.__PVT__mem_uncached_ack_w) 
             & (0U != (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__count_q)))) {
            __Vdly__u_uncached__DOT__u_resp__DOT__rd_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__rd_ptr_q)));
        }
        if ((((IData)(vlSelfRef.__PVT__u_uncached__DOT__res_push_w) 
              & (IData)(vlSelfRef.__PVT__u_uncached__DOT__res_accept_w)) 
             & (~ ((IData)(vlSelfRef.__PVT__mem_uncached_ack_w) 
                   & (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__valid_o))))) {
            __Vdly__u_uncached__DOT__u_resp__DOT__count_q 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__count_q)));
        } else if (((~ ((IData)(vlSelfRef.__PVT__u_uncached__DOT__res_push_w) 
                        & (IData)(vlSelfRef.__PVT__u_uncached__DOT__res_accept_w))) 
                    & ((IData)(vlSelfRef.__PVT__mem_uncached_ack_w) 
                       & (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__valid_o)))) {
            __Vdly__u_uncached__DOT__u_resp__DOT__count_q 
                = (3U & ((IData)(vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__count_q) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__u_uncached__DOT__req_push_w) 
             & (2U != (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__count_q)))) {
            __VdlyVal__u_uncached__DOT__u_req__DOT__ram_q__v0[0U] 
                = (IData)((((QData)((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_data_wr_q)) 
                            << 0x20U) | (QData)((IData)(
                                                        (0xfffffffcU 
                                                         & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_addr_q)))));
            __VdlyVal__u_uncached__DOT__u_req__DOT__ram_q__v0[1U] 
                = (IData)(((((QData)((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_data_wr_q)) 
                             << 0x20U) | (QData)((IData)(
                                                         (0xfffffffcU 
                                                          & vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_addr_q)))) 
                           >> 0x20U));
            __VdlyVal__u_uncached__DOT__u_req__DOT__ram_q__v0[2U] 
                = (0x3fU & (((IData)(vlSelfRef.__PVT__u_uncached__DOT__drop_req_w) 
                             << 5U) | (((IData)(vlSelfRef.__PVT__mem_uncached_rd_w) 
                                        << 4U) | (IData)(vlSelfRef.__PVT__mem_uncached_wr_w))));
            __VdlyDim0__u_uncached__DOT__u_req__DOT__ram_q__v0 
                = vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__wr_ptr_q;
            __VdlySet__u_uncached__DOT__u_req__DOT__ram_q__v0 = 1U;
            __Vdly__u_uncached__DOT__u_req__DOT__wr_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__wr_ptr_q)));
        }
        if (((IData)(vlSelfRef.__PVT__axi_wvalid_o) 
             & (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__d_wready))) {
            vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__wlast_q 
                = vlSelfRef.__PVT__axi_wlast_o;
        }
        if ((((IData)(vlSelfRef.__PVT__axi_wvalid_o) 
              & (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__d_wready)) 
             & (~ (IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__wr_cmd_accepted_w)))) {
            vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__wvalid_q = 1U;
        } else if (vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__wr_cmd_accepted_w) {
            vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__wvalid_q = 0U;
        }
        if ((((IData)(vlSelfRef.__PVT__axi_awvalid_o) 
              & (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__d_awready)) 
             & ((~ (IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__wr_data_accepted_w)) 
                | (~ (IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__wr_data_last_w))))) {
            vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__awvalid_q = 1U;
        } else if (((IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__wr_data_accepted_w) 
                    & (IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__wr_data_last_w))) {
            vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__awvalid_q = 0U;
        }
        vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_q[0U] 
            = (IData)((((QData)((IData)((((IData)(vlSelfRef.__PVT__axi_awlen_o) 
                                          << 4U) | (IData)(vlSelfRef.__PVT__axi_awid_o)))) 
                        << 0x21U) | (((QData)((IData)(vlSelfRef.__PVT__axi_awaddr_o)) 
                                      << 1U) | (QData)((IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__inport_write_w)))));
        vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_q[1U] 
            = (((IData)((((QData)((IData)((((IData)(vlSelfRef.__PVT__axi_wlast_o) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.__PVT__axi_wstrb_o)))) 
                          << 0x22U) | (((QData)((IData)(vlSelfRef.__PVT__axi_wdata_o)) 
                                        << 2U) | (QData)((IData)(vlSelfRef.__PVT__axi_awburst_o))))) 
                << 0xdU) | (IData)(((((QData)((IData)(
                                                      (((IData)(vlSelfRef.__PVT__axi_awlen_o) 
                                                        << 4U) 
                                                       | (IData)(vlSelfRef.__PVT__axi_awid_o)))) 
                                      << 0x21U) | (
                                                   ((QData)((IData)(vlSelfRef.__PVT__axi_awaddr_o)) 
                                                    << 1U) 
                                                   | (QData)((IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__inport_write_w)))) 
                                    >> 0x20U)));
        vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_q[2U] 
            = (((IData)((((QData)((IData)((((IData)(vlSelfRef.__PVT__axi_wlast_o) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.__PVT__axi_wstrb_o)))) 
                          << 0x22U) | (((QData)((IData)(vlSelfRef.__PVT__axi_wdata_o)) 
                                        << 2U) | (QData)((IData)(vlSelfRef.__PVT__axi_awburst_o))))) 
                >> 0x13U) | ((IData)(((((QData)((IData)(
                                                        (((IData)(vlSelfRef.__PVT__axi_wlast_o) 
                                                          << 4U) 
                                                         | (IData)(vlSelfRef.__PVT__axi_wstrb_o)))) 
                                        << 0x22U) | 
                                       (((QData)((IData)(vlSelfRef.__PVT__axi_wdata_o)) 
                                         << 2U) | (QData)((IData)(vlSelfRef.__PVT__axi_awburst_o)))) 
                                      >> 0x20U)) << 0xdU));
        vlSelfRef.__PVT__u_mux__DOT__pending_q = vlSelfRef.__PVT__u_mux__DOT__pending_r;
        if (vlSelfRef.__PVT__u_uncached__DOT__request_complete_w) {
            vlSelfRef.__PVT__u_uncached__DOT__request_pending_q = 1U;
        } else if (vlSelfRef.__PVT__mem_uncached_ack_w) {
            vlSelfRef.__PVT__u_uncached__DOT__request_pending_q = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__u_mux__DOT__request_w) 
             & (IData)(vlSelfRef.__PVT__mem_accept_o))) {
            vlSelfRef.__PVT__u_mux__DOT__cache_access_q 
                = vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_cacheable_q;
        }
    }
    vlSelfRef.__PVT__u_uncached__DOT__dropped_q = (
                                                   (~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
                                                   & (IData)(vlSelfRef.__PVT__u_uncached__DOT__req_is_drop_w));
    vlSelfRef.__PVT__u_pmem_mux__DOT__select_q = ((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst)) 
                                                  & (IData)(vlSelfRef.__PVT__pmem_select_w));
    __Vtableidx1 = ((((0x100U & ((~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__d_memory__DOT__read_active)) 
                                 << 8U)) | (((IData)(vlSelfRef.__PVT__axi_arvalid_o) 
                                             << 7U) 
                                            | ((IData)(vlSymsp->TOP__riscv_top_tb.__PVT__d_wready) 
                                               << 6U))) 
                     | (((IData)(vlSelfRef.__PVT__axi_wvalid_o) 
                         << 5U) | ((IData)(vlSymsp->TOP__riscv_top_tb.__PVT__d_awready) 
                                   << 4U))) | ((((IData)(vlSelfRef.__PVT__axi_awvalid_o) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.__PVT__u_axi__DOT__accept_w) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.__PVT__u_axi__DOT__req_can_issue_w) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__rst))));
    if (Vriscv_top_tb__ConstPool__TABLE_hc6b02f5a_0
        [__Vtableidx1]) {
        vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__valid_q 
            = Vriscv_top_tb__ConstPool__TABLE_h578b2aa6_0
            [__Vtableidx1];
    }
    vlSelfRef.__PVT__u_axi__DOT__req_cnt_q = __Vdly__u_axi__DOT__req_cnt_q;
    vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__wr_ptr_q 
        = __Vdly__u_uncached__DOT__u_resp__DOT__wr_ptr_q;
    if (__VdlySet__u_uncached__DOT__u_resp__DOT__ram_q__v0) {
        vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__ram_q[__VdlyDim0__u_uncached__DOT__u_resp__DOT__ram_q__v0] = 0U;
    }
    vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__req_cnt_q 
        = __Vdly__u_axi__DOT__u_axi__DOT__req_cnt_q;
    vlSelfRef.__PVT__u_axi__DOT__resp_outstanding_q 
        = __Vdly__u_axi__DOT__resp_outstanding_q;
    vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q 
        = __Vdly__u_axi__DOT__u_req__DOT__rd_ptr_q;
    vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__wr_ptr_q 
        = __Vdly__u_axi__DOT__u_req__DOT__wr_ptr_q;
    vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q 
        = __Vdly__u_uncached__DOT__u_req__DOT__rd_ptr_q;
    if (__VdlySet__u_axi__DOT__u_req__DOT__ram_q__v0) {
        vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__ram_q[__VdlyDim0__u_axi__DOT__u_req__DOT__ram_q__v0][0U] 
            = __VdlyVal__u_axi__DOT__u_req__DOT__ram_q__v0[0U];
        vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__ram_q[__VdlyDim0__u_axi__DOT__u_req__DOT__ram_q__v0][1U] 
            = __VdlyVal__u_axi__DOT__u_req__DOT__ram_q__v0[1U];
        vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__ram_q[__VdlyDim0__u_axi__DOT__u_req__DOT__ram_q__v0][2U] 
            = __VdlyVal__u_axi__DOT__u_req__DOT__ram_q__v0[2U];
    }
    vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__count_q 
        = __Vdly__u_axi__DOT__u_req__DOT__count_q;
    vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__rd_ptr_q 
        = __Vdly__u_uncached__DOT__u_resp__DOT__rd_ptr_q;
    vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__count_q 
        = __Vdly__u_uncached__DOT__u_resp__DOT__count_q;
    vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__wr_ptr_q 
        = __Vdly__u_uncached__DOT__u_req__DOT__wr_ptr_q;
    if (__VdlySet__u_uncached__DOT__u_req__DOT__ram_q__v0) {
        vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__ram_q[__VdlyDim0__u_uncached__DOT__u_req__DOT__ram_q__v0][0U] 
            = __VdlyVal__u_uncached__DOT__u_req__DOT__ram_q__v0[0U];
        vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__ram_q[__VdlyDim0__u_uncached__DOT__u_req__DOT__ram_q__v0][1U] 
            = __VdlyVal__u_uncached__DOT__u_req__DOT__ram_q__v0[1U];
        vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__ram_q[__VdlyDim0__u_uncached__DOT__u_req__DOT__ram_q__v0][2U] 
            = __VdlyVal__u_uncached__DOT__u_req__DOT__ram_q__v0[2U];
    }
    vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__count_q 
        = __Vdly__u_uncached__DOT__u_req__DOT__count_q;
    vlSelfRef.__PVT__u_axi__DOT__res_accept_w = (2U 
                                                 != (IData)(vlSelfRef.__PVT__u_axi__DOT__resp_outstanding_q));
    vlSelfRef.__PVT__u_axi__DOT__res_valid_w = (0U 
                                                != (IData)(vlSelfRef.__PVT__u_axi__DOT__resp_outstanding_q));
    vlSelfRef.__PVT__u_axi__DOT__req_len_w = (0xffU 
                                              & (vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__ram_q
                                                 [vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q][2U] 
                                                 >> 5U));
    vlSelfRef.u_axi__DOT____VdfgRegularize_h8a1a94ad_3_0 
        = (1U & (vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__ram_q
                 [vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q][2U] 
                 >> 4U));
    vlSelfRef.__PVT__u_axi__DOT__req_accept_w = (2U 
                                                 != (IData)(vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__count_q));
    vlSelfRef.__PVT__u_axi__DOT__req_valid_w = (0U 
                                                != (IData)(vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__count_q));
    vlSelfRef.__PVT__u_axi__DOT__req_can_issue_w = 
        ((0U != (IData)(vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__count_q)) 
         & (2U != (IData)(vlSelfRef.__PVT__u_axi__DOT__resp_outstanding_q)));
    vlSelfRef.__PVT__u_uncached__DOT__res_accept_w 
        = (2U != (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__count_q));
    vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__valid_o 
        = (0U != (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__count_q));
    vlSelfRef.u_uncached__DOT____VdfgRegularize_hf17169b5_1_0 
        = (1U & (vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                 [vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][2U] 
                 >> 4U));
    vlSelfRef.__PVT__u_uncached__DOT__req_accept_w 
        = (2U != (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__count_q));
    vlSelfRef.__PVT__u_uncached__DOT__req_valid_w = 
        (0U != (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__count_q));
    vlSelfRef.__PVT__mem_error_o = ((IData)(vlSelfRef.__PVT__u_mux__DOT__cache_access_q) 
                                    && (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__error_q));
    vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__inport_valid_w 
        = ((IData)(vlSelfRef.__PVT__u_axi__DOT__req_can_issue_w) 
           | (IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__valid_q));
    vlSelfRef.__PVT__u_axi__DOT__req_is_write_w = (
                                                   (~ (IData)(vlSelfRef.u_axi__DOT____VdfgRegularize_h8a1a94ad_3_0)) 
                                                   & (IData)(vlSelfRef.__PVT__u_axi__DOT__req_can_issue_w));
    if (vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__valid_q) {
        vlSelfRef.__PVT__axi_awburst_o = (3U & (vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_q[1U] 
                                                >> 0xdU));
        vlSelfRef.__PVT__axi_wstrb_o = (0xfU & ((vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_q[2U] 
                                                 << 0x11U) 
                                                | (vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_q[2U] 
                                                   >> 0xfU)));
        vlSelfRef.__PVT__axi_wdata_o = ((vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_q[2U] 
                                         << 0x11U) 
                                        | (vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_q[1U] 
                                           >> 0xfU));
        vlSelfRef.__PVT__axi_awid_o = (0xfU & (vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_q[1U] 
                                               >> 1U));
        vlSelfRef.__PVT__axi_wlast_o = (1U & (vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_q[2U] 
                                              >> 0x13U));
        vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__inport_write_w 
            = (1U & vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_q[0U]);
    } else {
        vlSelfRef.__PVT__axi_awburst_o = 1U;
        vlSelfRef.__PVT__axi_wstrb_o = (0xfU & vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__ram_q
                                        [vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q][2U]);
        vlSelfRef.__PVT__axi_wdata_o = vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__ram_q
            [vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q][1U];
        vlSelfRef.__PVT__axi_awid_o = 0U;
        vlSelfRef.__PVT__axi_wlast_o = (1U & (((0U 
                                                == (IData)(vlSelfRef.__PVT__u_axi__DOT__req_len_w)) 
                                               & (0U 
                                                  == (IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__req_cnt_q))) 
                                              | (1U 
                                                 == (IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__req_cnt_q))));
        vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__inport_write_w 
            = (1U & (IData)(vlSelfRef.__PVT__u_axi__DOT__req_is_write_w));
    }
    u_axi__DOT__u_axi__DOT____VdfgRegularize_he156c47b_0_2 
        = ((IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__inport_valid_w) 
           & (IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__inport_write_w));
    vlSelfRef.__PVT__axi_wvalid_o = ((~ (IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__wvalid_q)) 
                                     & (IData)(u_axi__DOT__u_axi__DOT____VdfgRegularize_he156c47b_0_2));
    vlSelfRef.__PVT__axi_awvalid_o = ((~ (IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__awvalid_q)) 
                                      & (IData)(u_axi__DOT__u_axi__DOT____VdfgRegularize_he156c47b_0_2));
}

VL_INLINE_OPT void Vriscv_top_tb_dcache___nba_sequent__TOP__riscv_top_tb__dut__u_dcache__1(Vriscv_top_tb_dcache* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_tb_dcache___nba_sequent__TOP__riscv_top_tb__dut__u_dcache__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ u_axi__DOT__u_axi__DOT____VdfgRegularize_he156c47b_0_1;
    u_axi__DOT__u_axi__DOT____VdfgRegularize_he156c47b_0_1 = 0;
    // Body
    if ((0U != (IData)(vlSelfRef.__PVT__u_mux__DOT__pending_q))) {
        vlSelfRef.__PVT__pmem_select_w = vlSelfRef.__PVT__u_mux__DOT__cache_access_q;
        vlSelfRef.__PVT__u_mux__DOT__hold_w = ((IData)(vlSelfRef.__PVT__u_mux__DOT__cache_access_q) 
                                               != (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_cacheable_q));
    } else {
        vlSelfRef.__PVT__pmem_select_w = vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_cacheable_q;
        vlSelfRef.__PVT__u_mux__DOT__hold_w = 0U;
    }
    vlSelfRef.u_axi__DOT__u_axi__DOT____VdfgRegularize_he156c47b_0_0 
        = ((IData)(vlSelfRef.__PVT__axi_awvalid_o) 
           & (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__d_awready));
    if (vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__valid_q) {
        vlSelfRef.__PVT__axi_awlen_o = (0xffU & ((vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_q[1U] 
                                                  << 0x1bU) 
                                                 | (vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_q[1U] 
                                                    >> 5U)));
        vlSelfRef.__PVT__axi_awaddr_o = ((vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_q[1U] 
                                          << 0x1fU) 
                                         | (vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_q[0U] 
                                            >> 1U));
    } else {
        vlSelfRef.__PVT__axi_awlen_o = (0xffU & (IData)(vlSelfRef.__PVT__u_axi__DOT__req_len_w));
        vlSelfRef.__PVT__axi_awaddr_o = (0xfffffffcU 
                                         & vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__ram_q
                                         [vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q][0U]);
    }
    vlSelfRef.__PVT__axi_arvalid_o = ((~ (IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__inport_write_w)) 
                                      & (IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__inport_valid_w));
    u_axi__DOT__u_axi__DOT____VdfgRegularize_he156c47b_0_1 
        = ((IData)(vlSelfRef.__PVT__axi_wvalid_o) & (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__d_wready));
    vlSelfRef.__PVT__pmem_ack_w = ((IData)(vlSymsp->TOP__riscv_top_tb.__PVT__d_bvalid) 
                                   | (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__d_memory__DOT__read_active));
    vlSelfRef.__PVT__u_axi__DOT__resp_pop_w = ((IData)(vlSymsp->TOP__riscv_top_tb.__PVT__d_bvalid) 
                                               | ((IData)(vlSymsp->TOP__riscv_top_tb.__PVT__d_rlast) 
                                                  & (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__d_memory__DOT__read_active)));
    vlSelfRef.__PVT__pmem_cache_accept_w = ((2U != (IData)(vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__count_q)) 
                                            & (IData)(vlSelfRef.__PVT__pmem_select_w));
    vlSelfRef.u_mux__DOT____VdfgRegularize_ha7b7af01_2_1 
        = (1U & ((~ (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_cacheable_q)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_mux__DOT__hold_w))));
    vlSelfRef.u_mux__DOT____VdfgRegularize_ha7b7af01_2_4 
        = ((~ (IData)(vlSelfRef.__PVT__u_mux__DOT__hold_w)) 
           & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_cacheable_q));
    vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__wr_cmd_accepted_w 
        = ((IData)(vlSelfRef.u_axi__DOT__u_axi__DOT____VdfgRegularize_he156c47b_0_0) 
           | (IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__awvalid_q));
    vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__wr_data_accepted_w 
        = ((IData)(u_axi__DOT__u_axi__DOT____VdfgRegularize_he156c47b_0_1) 
           | (IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__wvalid_q));
    vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__wr_data_last_w 
        = (((IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__wlast_q) 
            & (IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__wvalid_q)) 
           | ((IData)(u_axi__DOT__u_axi__DOT____VdfgRegularize_he156c47b_0_1) 
              & (IData)(vlSelfRef.__PVT__axi_wlast_o)));
    vlSelfRef.__PVT__u_axi__DOT__accept_w = ((~ (IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__valid_q)) 
                                             & ((IData)(vlSelfRef.u_axi__DOT__u_axi__DOT____VdfgRegularize_he156c47b_0_0) 
                                                | ((IData)(u_axi__DOT__u_axi__DOT____VdfgRegularize_he156c47b_0_1) 
                                                   | ((IData)(vlSelfRef.__PVT__axi_arvalid_o) 
                                                      & (~ (IData)(vlSymsp->TOP__riscv_top_tb.__PVT__d_memory__DOT__read_active))))));
    vlSelfRef.__PVT__pmem_cache_ack_w = ((IData)(vlSelfRef.__PVT__pmem_ack_w) 
                                         & (IData)(vlSelfRef.__PVT__u_pmem_mux__DOT__select_q));
    vlSelfRef.__PVT__mem_uncached_ack_w = ((IData)(vlSelfRef.__PVT__u_uncached__DOT__dropped_q) 
                                           | ((~ (IData)(vlSelfRef.__PVT__u_pmem_mux__DOT__select_q)) 
                                              & (IData)(vlSelfRef.__PVT__pmem_ack_w)));
    vlSelfRef.__PVT__u_uncached__DOT__drop_req_w = 
        ((IData)(vlSelfRef.u_mux__DOT____VdfgRegularize_ha7b7af01_2_1) 
         & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_invalidate_q) 
            | ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_flush_q) 
               | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_writeback_q))));
    vlSelfRef.__PVT__mem_cached_invalidate_w = ((IData)(vlSelfRef.u_mux__DOT____VdfgRegularize_ha7b7af01_2_4) 
                                                & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_invalidate_q));
    vlSelfRef.__PVT__mem_cached_writeback_w = ((IData)(vlSelfRef.u_mux__DOT____VdfgRegularize_ha7b7af01_2_4) 
                                               & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_writeback_q));
    vlSelfRef.__PVT__mem_cached_flush_w = ((IData)(vlSelfRef.u_mux__DOT____VdfgRegularize_ha7b7af01_2_4) 
                                           & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_flush_q));
    vlSelfRef.__PVT__u_axi__DOT__res_push_w = ((((IData)(vlSelfRef.__PVT__u_axi__DOT__req_is_write_w) 
                                                 & ((0U 
                                                     == (IData)(vlSelfRef.__PVT__u_axi__DOT__req_len_w)) 
                                                    & (0U 
                                                       == (IData)(vlSelfRef.__PVT__u_axi__DOT__req_cnt_q)))) 
                                                | ((IData)(vlSelfRef.__PVT__u_axi__DOT__req_can_issue_w) 
                                                   & (IData)(vlSelfRef.u_axi__DOT____VdfgRegularize_h8a1a94ad_3_0))) 
                                               & (IData)(vlSelfRef.__PVT__u_axi__DOT__accept_w));
    vlSelfRef.u_uncached__DOT____VdfgRegularize_hf17169b5_1_1 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__mem_uncached_ack_w)) 
               & (IData)(vlSelfRef.__PVT__u_uncached__DOT__request_pending_q))) 
           & (0U != (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__count_q)));
    vlSelfRef.__PVT__u_uncached__DOT__req_is_drop_w 
        = ((IData)(vlSelfRef.u_uncached__DOT____VdfgRegularize_hf17169b5_1_1) 
           & (vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__ram_q
              [vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][2U] 
              >> 5U));
    vlSelfRef.__PVT__pmem_uncached_rd_w = ((IData)(vlSelfRef.u_uncached__DOT____VdfgRegularize_hf17169b5_1_1) 
                                           & (IData)(vlSelfRef.u_uncached__DOT____VdfgRegularize_hf17169b5_1_0));
    vlSelfRef.__PVT__pmem_uncached_wr_w = (((~ (IData)(vlSelfRef.u_uncached__DOT____VdfgRegularize_hf17169b5_1_0)) 
                                            & (IData)(vlSelfRef.u_uncached__DOT____VdfgRegularize_hf17169b5_1_1))
                                            ? (0xfU 
                                               & vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                                               [vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][2U])
                                            : 0U);
    vlSelfRef.__PVT__u_uncached__DOT__request_complete_w 
        = ((IData)(vlSelfRef.__PVT__u_uncached__DOT__req_is_drop_w) 
           | (((IData)(vlSelfRef.__PVT__pmem_uncached_rd_w) 
               | (0U != (IData)(vlSelfRef.__PVT__pmem_uncached_wr_w))) 
              & ((~ (IData)(vlSelfRef.__PVT__pmem_select_w)) 
                 & (2U != (IData)(vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__count_q)))));
}

VL_INLINE_OPT void Vriscv_top_tb_dcache___nba_comb__TOP__riscv_top_tb__dut__u_dcache__0(Vriscv_top_tb_dcache* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_tb_dcache___nba_comb__TOP__riscv_top_tb__dut__u_dcache__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mem_ack_o = ((IData)(vlSelfRef.__PVT__u_mux__DOT__cache_access_q)
                                   ? (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__mem_ack_r)
                                   : (IData)(vlSelfRef.__PVT__mem_uncached_ack_w));
    vlSelfRef.__PVT__u_pmem_mux__DOT__outport_wr_r 
        = ((IData)(vlSelfRef.__PVT__pmem_select_w) ? (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__pmem_wr_w)
            : (IData)(vlSelfRef.__PVT__pmem_uncached_wr_w));
}

VL_INLINE_OPT void Vriscv_top_tb_dcache___nba_comb__TOP__riscv_top_tb__dut__u_dcache__1(Vriscv_top_tb_dcache* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_tb_dcache___nba_comb__TOP__riscv_top_tb__dut__u_dcache__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mem_uncached_wr_w = ((IData)(vlSelfRef.u_mux__DOT____VdfgRegularize_ha7b7af01_2_1)
                                           ? (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__mem_d_wr_o)
                                           : 0U);
    vlSelfRef.__PVT__u_mux__DOT__request_w = ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__mem_d_rd_o) 
                                              | ((0U 
                                                  != (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__mem_d_wr_o)) 
                                                 | ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_flush_q) 
                                                    | ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_invalidate_q) 
                                                       | (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_writeback_q)))));
    vlSelfRef.__PVT__mem_uncached_rd_w = ((IData)(vlSelfRef.u_mux__DOT____VdfgRegularize_ha7b7af01_2_1) 
                                          & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__mem_d_rd_o));
    vlSelfRef.__PVT__mem_cached_rd_w = ((IData)(vlSelfRef.u_mux__DOT____VdfgRegularize_ha7b7af01_2_4) 
                                        & (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__mem_d_rd_o));
    vlSelfRef.__PVT__u_uncached__DOT__request_w = ((IData)(vlSelfRef.__PVT__u_uncached__DOT__drop_req_w) 
                                                   | ((IData)(vlSelfRef.__PVT__mem_uncached_rd_w) 
                                                      | (0U 
                                                         != (IData)(vlSelfRef.__PVT__mem_uncached_wr_w))));
    vlSelfRef.__PVT__u_uncached__DOT__req_push_w = 
        ((IData)(vlSelfRef.__PVT__u_uncached__DOT__request_w) 
         & (2U != (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__count_q)));
    vlSelfRef.__PVT__u_uncached__DOT__res_push_w = 
        ((IData)(vlSelfRef.__PVT__u_uncached__DOT__request_w) 
         & (2U != (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__count_q)));
}

VL_INLINE_OPT void Vriscv_top_tb_dcache___nba_comb__TOP__riscv_top_tb__dut__u_dcache__2(Vriscv_top_tb_dcache* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_tb_dcache___nba_comb__TOP__riscv_top_tb__dut__u_dcache__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ u_mux__DOT____VdfgRegularize_ha7b7af01_2_3;
    u_mux__DOT____VdfgRegularize_ha7b7af01_2_3 = 0;
    // Body
    vlSelfRef.__PVT__mem_accept_o = ((~ (IData)(vlSelfRef.__PVT__u_mux__DOT__hold_w)) 
                                     & ((IData)(vlSymsp->TOP__riscv_top_tb__dut__u_core.__PVT__u_lsu__DOT__mem_cacheable_q)
                                         ? (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__mem_accept_r)
                                         : ((2U != (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__count_q)) 
                                            & (2U != (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__count_q)))));
    vlSelfRef.__PVT__u_pmem_mux__DOT__outport_rd_r 
        = ((IData)(vlSelfRef.__PVT__pmem_select_w) ? (IData)(vlSymsp->TOP__riscv_top_tb__dut__u_dcache__u_core.__PVT__pmem_rd_w)
            : (IData)(vlSelfRef.__PVT__pmem_uncached_rd_w));
    u_mux__DOT____VdfgRegularize_ha7b7af01_2_3 = ((IData)(vlSelfRef.__PVT__u_mux__DOT__request_w) 
                                                  & (IData)(vlSelfRef.__PVT__mem_accept_o));
    vlSelfRef.__PVT__u_axi__DOT__req_push_w = ((IData)(vlSelfRef.__PVT__u_pmem_mux__DOT__outport_rd_r) 
                                               | (0U 
                                                  != (IData)(vlSelfRef.__PVT__u_pmem_mux__DOT__outport_wr_r)));
    vlSelfRef.__PVT__u_mux__DOT__pending_r = vlSelfRef.__PVT__u_mux__DOT__pending_q;
    if (((~ (IData)(vlSelfRef.__PVT__mem_ack_o)) & (IData)(u_mux__DOT____VdfgRegularize_ha7b7af01_2_3))) {
        vlSelfRef.__PVT__u_mux__DOT__pending_r = (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__u_mux__DOT__pending_r)));
    } else if (((~ (IData)(u_mux__DOT____VdfgRegularize_ha7b7af01_2_3)) 
                & (IData)(vlSelfRef.__PVT__mem_ack_o))) {
        vlSelfRef.__PVT__u_mux__DOT__pending_r = (0x1fU 
                                                  & ((IData)(vlSelfRef.__PVT__u_mux__DOT__pending_r) 
                                                     - (IData)(1U)));
    }
}
