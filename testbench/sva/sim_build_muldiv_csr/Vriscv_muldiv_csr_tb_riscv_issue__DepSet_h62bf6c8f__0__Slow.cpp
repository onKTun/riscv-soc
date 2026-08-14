// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_muldiv_csr_tb.h for the primary calling header

#include "Vriscv_muldiv_csr_tb__pch.h"
#include "Vriscv_muldiv_csr_tb__Syms.h"
#include "Vriscv_muldiv_csr_tb_riscv_issue.h"

VL_ATTR_COLD void Vriscv_muldiv_csr_tb_riscv_issue___stl_sequent__TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__0(Vriscv_muldiv_csr_tb_riscv_issue* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_muldiv_csr_tb_riscv_issue___stl_sequent__TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*79:0*/ __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout;
    VL_ZERO_W(80, __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout);
    CData/*4:0*/ __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum;
    __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum = 0;
    VlWide<3>/*79:0*/ __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__Vfuncout;
    VL_ZERO_W(80, __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__Vfuncout);
    CData/*4:0*/ __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum;
    __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum = 0;
    VlWide<3>/*79:0*/ __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__Vfuncout;
    VL_ZERO_W(80, __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__Vfuncout);
    CData/*4:0*/ __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum;
    __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum = 0;
    VlWide<3>/*79:0*/ __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__Vfuncout;
    VL_ZERO_W(80, __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__Vfuncout);
    CData/*4:0*/ __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum;
    __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum = 0;
    VlWide<3>/*79:0*/ __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__Vfuncout;
    VL_ZERO_W(80, __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__Vfuncout);
    CData/*4:0*/ __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum;
    __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum = 0;
    VlWide<3>/*79:0*/ __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__Vfuncout;
    VL_ZERO_W(80, __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__Vfuncout);
    CData/*4:0*/ __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum;
    __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum = 0;
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<3>/*95:0*/ __Vtemp_92;
    VlWide<3>/*95:0*/ __Vtemp_139;
    VlWide<3>/*95:0*/ __Vtemp_185;
    VlWide<3>/*95:0*/ __Vtemp_232;
    VlWide<3>/*95:0*/ __Vtemp_278;
    VlWide<3>/*95:0*/ __Vtemp_325;
    VlWide<3>/*95:0*/ __Vtemp_371;
    VlWide<3>/*95:0*/ __Vtemp_418;
    VlWide<3>/*95:0*/ __Vtemp_464;
    VlWide<3>/*95:0*/ __Vtemp_511;
    VlWide<3>/*95:0*/ __Vtemp_557;
    // Body
    __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum 
        = (0x1fU & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                    >> 0xfU));
    if ((8U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
                    __Vtemp_46[0U] = 0x7436U;
                    __Vtemp_92[0U] = 0x6135U;
                } else {
                    __Vtemp_46[0U] = 0x7435U;
                    __Vtemp_92[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
                __Vtemp_46[0U] = 0x7434U;
                __Vtemp_92[0U] = 0x6133U;
            } else {
                __Vtemp_46[0U] = 0x7433U;
                __Vtemp_92[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
                __Vtemp_46[0U] = 0x733131U;
                __Vtemp_92[0U] = 0x6131U;
            } else {
                __Vtemp_46[0U] = 0x733130U;
                __Vtemp_92[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
            __Vtemp_46[0U] = 0x7339U;
            __Vtemp_92[0U] = 0x7331U;
        } else {
            __Vtemp_46[0U] = 0x7338U;
            __Vtemp_92[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
                __Vtemp_46[0U] = 0x7337U;
                __Vtemp_92[0U] = 0x7432U;
            } else {
                __Vtemp_46[0U] = 0x7336U;
                __Vtemp_92[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
            __Vtemp_46[0U] = 0x7335U;
            __Vtemp_92[0U] = 0x7430U;
        } else {
            __Vtemp_46[0U] = 0x7334U;
            __Vtemp_92[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
            __Vtemp_46[0U] = 0x7333U;
            __Vtemp_92[0U] = 0x6770U;
        } else {
            __Vtemp_46[0U] = 0x7332U;
            __Vtemp_92[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
        __Vtemp_46[0U] = 0x6137U;
        __Vtemp_92[0U] = 0x7261U;
    } else {
        __Vtemp_46[0U] = 0x6136U;
        __Vtemp_92[0U] = 0x7a65726fU;
    }
    __Vtemp_46[1U] = 0U;
    __Vtemp_46[2U] = 0U;
    __Vtemp_92[1U] = 0U;
    __Vtemp_92[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__regnum))) {
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout[0U] 
            = __Vtemp_46[0U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout[1U] 
            = __Vtemp_46[1U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout[2U] 
            = __Vtemp_46[2U];
    } else {
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout[0U] 
            = __Vtemp_92[0U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout[1U] 
            = __Vtemp_92[1U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout[2U] 
            = __Vtemp_92[2U];
    }
    vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h80d7e585__0[0U] 
        = __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout[0U];
    vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h80d7e585__0[1U] 
        = __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout[1U];
    vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h80d7e585__0[2U] 
        = __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__3__Vfuncout[2U];
    __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum 
        = (0x1fU & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                    >> 0x14U));
    if ((8U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
                    __Vtemp_139[0U] = 0x7436U;
                    __Vtemp_185[0U] = 0x6135U;
                } else {
                    __Vtemp_139[0U] = 0x7435U;
                    __Vtemp_185[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
                __Vtemp_139[0U] = 0x7434U;
                __Vtemp_185[0U] = 0x6133U;
            } else {
                __Vtemp_139[0U] = 0x7433U;
                __Vtemp_185[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
                __Vtemp_139[0U] = 0x733131U;
                __Vtemp_185[0U] = 0x6131U;
            } else {
                __Vtemp_139[0U] = 0x733130U;
                __Vtemp_185[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
            __Vtemp_139[0U] = 0x7339U;
            __Vtemp_185[0U] = 0x7331U;
        } else {
            __Vtemp_139[0U] = 0x7338U;
            __Vtemp_185[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
                __Vtemp_139[0U] = 0x7337U;
                __Vtemp_185[0U] = 0x7432U;
            } else {
                __Vtemp_139[0U] = 0x7336U;
                __Vtemp_185[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
            __Vtemp_139[0U] = 0x7335U;
            __Vtemp_185[0U] = 0x7430U;
        } else {
            __Vtemp_139[0U] = 0x7334U;
            __Vtemp_185[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
            __Vtemp_139[0U] = 0x7333U;
            __Vtemp_185[0U] = 0x6770U;
        } else {
            __Vtemp_139[0U] = 0x7332U;
            __Vtemp_185[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
        __Vtemp_139[0U] = 0x6137U;
        __Vtemp_185[0U] = 0x7261U;
    } else {
        __Vtemp_139[0U] = 0x6136U;
        __Vtemp_185[0U] = 0x7a65726fU;
    }
    __Vtemp_139[1U] = 0U;
    __Vtemp_139[2U] = 0U;
    __Vtemp_185[1U] = 0U;
    __Vtemp_185[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__regnum))) {
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__Vfuncout[0U] 
            = __Vtemp_139[0U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__Vfuncout[1U] 
            = __Vtemp_139[1U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__Vfuncout[2U] 
            = __Vtemp_139[2U];
    } else {
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__Vfuncout[0U] 
            = __Vtemp_185[0U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__Vfuncout[1U] 
            = __Vtemp_185[1U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__Vfuncout[2U] 
            = __Vtemp_185[2U];
    }
    vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_hef8b1dcb__0[0U] 
        = __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__Vfuncout[0U];
    vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_hef8b1dcb__0[1U] 
        = __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__Vfuncout[1U];
    vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_hef8b1dcb__0[2U] 
        = __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__4__Vfuncout[2U];
    __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum 
        = (0x1fU & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                    >> 7U));
    if ((8U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
                    __Vtemp_232[0U] = 0x7436U;
                    __Vtemp_278[0U] = 0x6135U;
                } else {
                    __Vtemp_232[0U] = 0x7435U;
                    __Vtemp_278[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
                __Vtemp_232[0U] = 0x7434U;
                __Vtemp_278[0U] = 0x6133U;
            } else {
                __Vtemp_232[0U] = 0x7433U;
                __Vtemp_278[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
                __Vtemp_232[0U] = 0x733131U;
                __Vtemp_278[0U] = 0x6131U;
            } else {
                __Vtemp_232[0U] = 0x733130U;
                __Vtemp_278[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
            __Vtemp_232[0U] = 0x7339U;
            __Vtemp_278[0U] = 0x7331U;
        } else {
            __Vtemp_232[0U] = 0x7338U;
            __Vtemp_278[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
                __Vtemp_232[0U] = 0x7337U;
                __Vtemp_278[0U] = 0x7432U;
            } else {
                __Vtemp_232[0U] = 0x7336U;
                __Vtemp_278[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
            __Vtemp_232[0U] = 0x7335U;
            __Vtemp_278[0U] = 0x7430U;
        } else {
            __Vtemp_232[0U] = 0x7334U;
            __Vtemp_278[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
            __Vtemp_232[0U] = 0x7333U;
            __Vtemp_278[0U] = 0x6770U;
        } else {
            __Vtemp_232[0U] = 0x7332U;
            __Vtemp_278[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
        __Vtemp_232[0U] = 0x6137U;
        __Vtemp_278[0U] = 0x7261U;
    } else {
        __Vtemp_232[0U] = 0x6136U;
        __Vtemp_278[0U] = 0x7a65726fU;
    }
    __Vtemp_232[1U] = 0U;
    __Vtemp_232[2U] = 0U;
    __Vtemp_278[1U] = 0U;
    __Vtemp_278[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__regnum))) {
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__Vfuncout[0U] 
            = __Vtemp_232[0U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__Vfuncout[1U] 
            = __Vtemp_232[1U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__Vfuncout[2U] 
            = __Vtemp_232[2U];
    } else {
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__Vfuncout[0U] 
            = __Vtemp_278[0U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__Vfuncout[1U] 
            = __Vtemp_278[1U];
        __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__Vfuncout[2U] 
            = __Vtemp_278[2U];
    }
    vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h5dd7f615__0[0U] 
        = __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__Vfuncout[0U];
    vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h5dd7f615__0[1U] 
        = __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__Vfuncout[1U];
    vlSelfRef.u_pipe_ctrl__DOT__u_trace_wb__DOT____VdfgExtracted_h5dd7f615__0[2U] 
        = __Vfunc_u_pipe_ctrl__DOT__u_trace_wb__DOT__get_regname_str__5__Vfuncout[2U];
    __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum 
        = (0x1fU & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                    >> 0xfU));
    if ((8U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum))) {
                    __Vtemp_325[0U] = 0x7436U;
                    __Vtemp_371[0U] = 0x6135U;
                } else {
                    __Vtemp_325[0U] = 0x7435U;
                    __Vtemp_371[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum))) {
                __Vtemp_325[0U] = 0x7434U;
                __Vtemp_371[0U] = 0x6133U;
            } else {
                __Vtemp_325[0U] = 0x7433U;
                __Vtemp_371[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum))) {
                __Vtemp_325[0U] = 0x733131U;
                __Vtemp_371[0U] = 0x6131U;
            } else {
                __Vtemp_325[0U] = 0x733130U;
                __Vtemp_371[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum))) {
            __Vtemp_325[0U] = 0x7339U;
            __Vtemp_371[0U] = 0x7331U;
        } else {
            __Vtemp_325[0U] = 0x7338U;
            __Vtemp_371[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum))) {
                __Vtemp_325[0U] = 0x7337U;
                __Vtemp_371[0U] = 0x7432U;
            } else {
                __Vtemp_325[0U] = 0x7336U;
                __Vtemp_371[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum))) {
            __Vtemp_325[0U] = 0x7335U;
            __Vtemp_371[0U] = 0x7430U;
        } else {
            __Vtemp_325[0U] = 0x7334U;
            __Vtemp_371[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum))) {
            __Vtemp_325[0U] = 0x7333U;
            __Vtemp_371[0U] = 0x6770U;
        } else {
            __Vtemp_325[0U] = 0x7332U;
            __Vtemp_371[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum))) {
        __Vtemp_325[0U] = 0x6137U;
        __Vtemp_371[0U] = 0x7261U;
    } else {
        __Vtemp_325[0U] = 0x6136U;
        __Vtemp_371[0U] = 0x7a65726fU;
    }
    __Vtemp_325[1U] = 0U;
    __Vtemp_325[2U] = 0U;
    __Vtemp_371[1U] = 0U;
    __Vtemp_371[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__regnum))) {
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__Vfuncout[0U] 
            = __Vtemp_325[0U];
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__Vfuncout[1U] 
            = __Vtemp_325[1U];
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__Vfuncout[2U] 
            = __Vtemp_325[2U];
    } else {
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__Vfuncout[0U] 
            = __Vtemp_371[0U];
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__Vfuncout[1U] 
            = __Vtemp_371[1U];
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__Vfuncout[2U] 
            = __Vtemp_371[2U];
    }
    vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_h80d7e585__0[0U] 
        = __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__Vfuncout[0U];
    vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_h80d7e585__0[1U] 
        = __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__Vfuncout[1U];
    vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_h80d7e585__0[2U] 
        = __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__6__Vfuncout[2U];
    __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum 
        = (0x1fU & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                    >> 0x14U));
    if ((8U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum))) {
                    __Vtemp_418[0U] = 0x7436U;
                    __Vtemp_464[0U] = 0x6135U;
                } else {
                    __Vtemp_418[0U] = 0x7435U;
                    __Vtemp_464[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum))) {
                __Vtemp_418[0U] = 0x7434U;
                __Vtemp_464[0U] = 0x6133U;
            } else {
                __Vtemp_418[0U] = 0x7433U;
                __Vtemp_464[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum))) {
                __Vtemp_418[0U] = 0x733131U;
                __Vtemp_464[0U] = 0x6131U;
            } else {
                __Vtemp_418[0U] = 0x733130U;
                __Vtemp_464[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum))) {
            __Vtemp_418[0U] = 0x7339U;
            __Vtemp_464[0U] = 0x7331U;
        } else {
            __Vtemp_418[0U] = 0x7338U;
            __Vtemp_464[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum))) {
                __Vtemp_418[0U] = 0x7337U;
                __Vtemp_464[0U] = 0x7432U;
            } else {
                __Vtemp_418[0U] = 0x7336U;
                __Vtemp_464[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum))) {
            __Vtemp_418[0U] = 0x7335U;
            __Vtemp_464[0U] = 0x7430U;
        } else {
            __Vtemp_418[0U] = 0x7334U;
            __Vtemp_464[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum))) {
            __Vtemp_418[0U] = 0x7333U;
            __Vtemp_464[0U] = 0x6770U;
        } else {
            __Vtemp_418[0U] = 0x7332U;
            __Vtemp_464[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum))) {
        __Vtemp_418[0U] = 0x6137U;
        __Vtemp_464[0U] = 0x7261U;
    } else {
        __Vtemp_418[0U] = 0x6136U;
        __Vtemp_464[0U] = 0x7a65726fU;
    }
    __Vtemp_418[1U] = 0U;
    __Vtemp_418[2U] = 0U;
    __Vtemp_464[1U] = 0U;
    __Vtemp_464[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__regnum))) {
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__Vfuncout[0U] 
            = __Vtemp_418[0U];
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__Vfuncout[1U] 
            = __Vtemp_418[1U];
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__Vfuncout[2U] 
            = __Vtemp_418[2U];
    } else {
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__Vfuncout[0U] 
            = __Vtemp_464[0U];
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__Vfuncout[1U] 
            = __Vtemp_464[1U];
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__Vfuncout[2U] 
            = __Vtemp_464[2U];
    }
    vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_hef8b1dcb__0[0U] 
        = __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__Vfuncout[0U];
    vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_hef8b1dcb__0[1U] 
        = __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__Vfuncout[1U];
    vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_hef8b1dcb__0[2U] 
        = __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__7__Vfuncout[2U];
    __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum 
        = (0x1fU & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                    >> 7U));
    if ((8U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum))) {
        if ((4U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum))) {
            if ((2U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum))) {
                if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum))) {
                    __Vtemp_511[0U] = 0x7436U;
                    __Vtemp_557[0U] = 0x6135U;
                } else {
                    __Vtemp_511[0U] = 0x7435U;
                    __Vtemp_557[0U] = 0x6134U;
                }
            } else if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum))) {
                __Vtemp_511[0U] = 0x7434U;
                __Vtemp_557[0U] = 0x6133U;
            } else {
                __Vtemp_511[0U] = 0x7433U;
                __Vtemp_557[0U] = 0x6132U;
            }
        } else if ((2U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum))) {
                __Vtemp_511[0U] = 0x733131U;
                __Vtemp_557[0U] = 0x6131U;
            } else {
                __Vtemp_511[0U] = 0x733130U;
                __Vtemp_557[0U] = 0x6130U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum))) {
            __Vtemp_511[0U] = 0x7339U;
            __Vtemp_557[0U] = 0x7331U;
        } else {
            __Vtemp_511[0U] = 0x7338U;
            __Vtemp_557[0U] = 0x7330U;
        }
    } else if ((4U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum))) {
        if ((2U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum))) {
            if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum))) {
                __Vtemp_511[0U] = 0x7337U;
                __Vtemp_557[0U] = 0x7432U;
            } else {
                __Vtemp_511[0U] = 0x7336U;
                __Vtemp_557[0U] = 0x7431U;
            }
        } else if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum))) {
            __Vtemp_511[0U] = 0x7335U;
            __Vtemp_557[0U] = 0x7430U;
        } else {
            __Vtemp_511[0U] = 0x7334U;
            __Vtemp_557[0U] = 0x7470U;
        }
    } else if ((2U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum))) {
        if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum))) {
            __Vtemp_511[0U] = 0x7333U;
            __Vtemp_557[0U] = 0x6770U;
        } else {
            __Vtemp_511[0U] = 0x7332U;
            __Vtemp_557[0U] = 0x7370U;
        }
    } else if ((1U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum))) {
        __Vtemp_511[0U] = 0x6137U;
        __Vtemp_557[0U] = 0x7261U;
    } else {
        __Vtemp_511[0U] = 0x6136U;
        __Vtemp_557[0U] = 0x7a65726fU;
    }
    __Vtemp_511[1U] = 0U;
    __Vtemp_511[2U] = 0U;
    __Vtemp_557[1U] = 0U;
    __Vtemp_557[2U] = 0U;
    if ((0x10U & (IData)(__Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__regnum))) {
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__Vfuncout[0U] 
            = __Vtemp_511[0U];
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__Vfuncout[1U] 
            = __Vtemp_511[1U];
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__Vfuncout[2U] 
            = __Vtemp_511[2U];
    } else {
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__Vfuncout[0U] 
            = __Vtemp_557[0U];
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__Vfuncout[1U] 
            = __Vtemp_557[1U];
        __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__Vfuncout[2U] 
            = __Vtemp_557[2U];
    }
    vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_h5dd7f615__0[0U] 
        = __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__Vfuncout[0U];
    vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_h5dd7f615__0[1U] 
        = __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__Vfuncout[1U];
    vlSelfRef.u_pipe_dec0_verif__DOT____VdfgExtracted_h5dd7f615__0[2U] 
        = __Vfunc_u_pipe_dec0_verif__DOT__get_regname_str__8__Vfuncout[2U];
    vlSelfRef.__PVT__pipe_rd_e1_w = (0x1fU & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                                                             >> 7U)))) 
                                              & (vlSelfRef.__PVT__u_pipe_ctrl__DOT__opcode_e1_q 
                                                 >> 7U)));
    vlSelfRef.__PVT__u_pipe_ctrl__DOT__load_store_e2_w 
        = (IData)((0U != (6U & (IData)(vlSelfRef.__PVT__u_pipe_ctrl__DOT__ctrl_e2_q))));
    vlSelfRef.__PVT__issue_fault_w = ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_dec_fault_fetch_w)
                                       ? 0x11U : ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_fault_page_w)
                                                   ? 0x1cU
                                                   : 0U));
}
