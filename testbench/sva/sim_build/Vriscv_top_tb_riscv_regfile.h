// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_top_tb.h for the primary calling header

#ifndef VERILATED_VRISCV_TOP_TB_RISCV_REGFILE_H_
#define VERILATED_VRISCV_TOP_TB_RISCV_REGFILE_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vriscv_top_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_top_tb_riscv_regfile final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_i,0,0);
        VL_IN8(__PVT__rd0_i,4,0);
        VL_IN8(__PVT__ra0_i,4,0);
        VL_IN8(__PVT__rb0_i,4,0);
        VL_IN(__PVT__rd0_value_i,31,0);
        VL_OUT(__PVT__ra0_value_o,31,0);
        VL_OUT(__PVT__rb0_value_o,31,0);
        VL_OUT(__PVT__x1_debug_o,31,0);
        VL_OUT(__PVT__x2_debug_o,31,0);
        VL_OUT(__PVT__x3_debug_o,31,0);
        VL_OUT(__PVT__x4_debug_o,31,0);
        VL_OUT(__PVT__x5_debug_o,31,0);
        VL_OUT(__PVT__x6_debug_o,31,0);
        VL_OUT(__PVT__x7_debug_o,31,0);
        VL_OUT(__PVT__x8_debug_o,31,0);
        VL_OUT(__PVT__x9_debug_o,31,0);
        VL_OUT(__PVT__x10_debug_o,31,0);
        VL_OUT(__PVT__x11_debug_o,31,0);
        VL_OUT(__PVT__x12_debug_o,31,0);
        VL_OUT(__PVT__x13_debug_o,31,0);
        VL_OUT(__PVT__x14_debug_o,31,0);
        VL_OUT(__PVT__x15_debug_o,31,0);
        VL_OUT(__PVT__x16_debug_o,31,0);
        VL_OUT(__PVT__x17_debug_o,31,0);
        VL_OUT(__PVT__x18_debug_o,31,0);
        VL_OUT(__PVT__x19_debug_o,31,0);
        VL_OUT(__PVT__x20_debug_o,31,0);
        VL_OUT(__PVT__x21_debug_o,31,0);
        VL_OUT(__PVT__x22_debug_o,31,0);
        VL_OUT(__PVT__x23_debug_o,31,0);
        VL_OUT(__PVT__x24_debug_o,31,0);
        VL_OUT(__PVT__x25_debug_o,31,0);
        VL_OUT(__PVT__x26_debug_o,31,0);
        VL_OUT(__PVT__x27_debug_o,31,0);
        VL_OUT(__PVT__x28_debug_o,31,0);
        VL_OUT(__PVT__x29_debug_o,31,0);
        VL_OUT(__PVT__x30_debug_o,31,0);
        VL_OUT(__PVT__x31_debug_o,31,0);
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r1_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r2_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r3_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r4_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r5_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r6_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r7_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r8_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r9_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r10_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r11_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r12_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r13_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r14_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r15_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r16_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r17_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r18_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r19_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r20_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r21_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r22_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r23_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r24_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r25_q;
    };
    struct {
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r26_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r27_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r28_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r29_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r30_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__reg_r31_q;
        IData/*31:0*/ __PVT__REGFILE__DOT__ra0_value_r;
        IData/*31:0*/ __PVT__REGFILE__DOT__rb0_value_r;
    };

    // INTERNAL VARIABLES
    Vriscv_top_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_top_tb_riscv_regfile(Vriscv_top_tb__Syms* symsp, const char* v__name);
    ~Vriscv_top_tb_riscv_regfile();
    VL_UNCOPYABLE(Vriscv_top_tb_riscv_regfile);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    uint32_t REGFILE__DOT__get_register(uint32_t r);
    bool REGFILE__DOT__set_register(uint32_t r, uint32_t value);
};


#endif  // guard
