// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_top_tb.h for the primary calling header

#ifndef VERILATED_VRISCV_TOP_TB_AXI_MEMORY_MODEL__R80000104_H_
#define VERILATED_VRISCV_TOP_TB_AXI_MEMORY_MODEL__R80000104_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vriscv_top_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_top_tb_axi_memory_model__R80000104 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__awvalid_i,0,0);
    VL_IN8(__PVT__awid_i,3,0);
    VL_IN8(__PVT__awlen_i,7,0);
    VL_OUT8(__PVT__awready_o,0,0);
    VL_IN8(__PVT__wvalid_i,0,0);
    VL_IN8(__PVT__wstrb_i,3,0);
    VL_IN8(__PVT__wlast_i,0,0);
    VL_OUT8(__PVT__wready_o,0,0);
    VL_OUT8(__PVT__bvalid_o,0,0);
    VL_OUT8(__PVT__bresp_o,1,0);
    VL_OUT8(__PVT__bid_o,3,0);
    VL_IN8(__PVT__bready_i,0,0);
    VL_IN8(__PVT__arvalid_i,0,0);
    VL_IN8(__PVT__arid_i,3,0);
    VL_IN8(__PVT__arlen_i,7,0);
    VL_OUT8(__PVT__arready_o,0,0);
    VL_OUT8(__PVT__rvalid_o,0,0);
    VL_OUT8(__PVT__rresp_o,1,0);
    VL_OUT8(__PVT__rid_o,3,0);
    VL_OUT8(__PVT__rlast_o,0,0);
    VL_IN8(__PVT__rready_i,0,0);
    VL_OUT8(__PVT__result_valid_o,0,0);
    CData/*0:0*/ __PVT__read_active;
    CData/*7:0*/ __PVT__read_left;
    CData/*3:0*/ __PVT__read_id;
    CData/*0:0*/ __PVT__write_active;
    CData/*3:0*/ __PVT__write_id;
    CData/*7:0*/ __Vdly__read_left;
    VL_IN(__PVT__awaddr_i,31,0);
    VL_IN(__PVT__wdata_i,31,0);
    VL_IN(__PVT__araddr_i,31,0);
    VL_OUT(__PVT__rdata_o,31,0);
    VL_OUT(__PVT__result_data_o,31,0);
    VL_OUT(__PVT__read_bursts_o,31,0);
    VL_OUT(__PVT__write_words_o,31,0);
    IData/*31:0*/ __PVT__read_addr;
    IData/*31:0*/ __PVT__write_addr;
    IData/*31:0*/ __PVT__active_write_addr;
    IData/*31:0*/ __PVT__i;
    IData/*31:0*/ __Vdly__read_addr;
    VlUnpacked<IData/*31:0*/, 1024> mem;

    // INTERNAL VARIABLES
    Vriscv_top_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_top_tb_axi_memory_model__R80000104(Vriscv_top_tb__Syms* symsp, const char* v__name);
    ~Vriscv_top_tb_axi_memory_model__R80000104();
    VL_UNCOPYABLE(Vriscv_top_tb_axi_memory_model__R80000104);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
