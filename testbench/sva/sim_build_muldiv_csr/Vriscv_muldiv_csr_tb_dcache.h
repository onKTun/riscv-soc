// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_muldiv_csr_tb.h for the primary calling header

#ifndef VERILATED_VRISCV_MULDIV_CSR_TB_DCACHE_H_
#define VERILATED_VRISCV_MULDIV_CSR_TB_DCACHE_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vriscv_muldiv_csr_tb_dcache_core;


class Vriscv_muldiv_csr_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_muldiv_csr_tb_dcache final : public VerilatedModule {
  public:
    // CELLS
    Vriscv_muldiv_csr_tb_dcache_core* u_core;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_i,0,0);
        VL_IN8(__PVT__mem_rd_i,0,0);
        VL_IN8(__PVT__mem_wr_i,3,0);
        VL_IN8(__PVT__mem_cacheable_i,0,0);
        VL_IN8(__PVT__mem_invalidate_i,0,0);
        VL_IN8(__PVT__mem_writeback_i,0,0);
        VL_IN8(__PVT__mem_flush_i,0,0);
        VL_IN8(__PVT__axi_awready_i,0,0);
        VL_IN8(__PVT__axi_wready_i,0,0);
        VL_IN8(__PVT__axi_bvalid_i,0,0);
        VL_IN8(__PVT__axi_bresp_i,1,0);
        VL_IN8(__PVT__axi_bid_i,3,0);
        VL_IN8(__PVT__axi_arready_i,0,0);
        VL_IN8(__PVT__axi_rvalid_i,0,0);
        VL_IN8(__PVT__axi_rresp_i,1,0);
        VL_IN8(__PVT__axi_rid_i,3,0);
        VL_IN8(__PVT__axi_rlast_i,0,0);
        VL_OUT8(__PVT__mem_accept_o,0,0);
        VL_OUT8(__PVT__mem_ack_o,0,0);
        VL_OUT8(__PVT__mem_error_o,0,0);
        VL_OUT8(__PVT__axi_awvalid_o,0,0);
        VL_OUT8(__PVT__axi_awid_o,3,0);
        VL_OUT8(__PVT__axi_awlen_o,7,0);
        VL_OUT8(__PVT__axi_awburst_o,1,0);
        VL_OUT8(__PVT__axi_wvalid_o,0,0);
        VL_OUT8(__PVT__axi_wstrb_o,3,0);
        VL_OUT8(__PVT__axi_wlast_o,0,0);
        VL_OUT8(__PVT__axi_bready_o,0,0);
        VL_OUT8(__PVT__axi_arvalid_o,0,0);
        VL_OUT8(__PVT__axi_arid_o,3,0);
        VL_OUT8(__PVT__axi_arlen_o,7,0);
        VL_OUT8(__PVT__axi_arburst_o,1,0);
        VL_OUT8(__PVT__axi_rready_o,0,0);
        CData/*0:0*/ __PVT__pmem_cache_accept_w;
        CData/*0:0*/ __PVT__mem_cached_invalidate_w;
        CData/*0:0*/ __PVT__pmem_cache_ack_w;
        CData/*0:0*/ __PVT__mem_uncached_ack_w;
        CData/*0:0*/ __PVT__pmem_ack_w;
        CData/*3:0*/ __PVT__pmem_uncached_wr_w;
        CData/*0:0*/ __PVT__mem_cached_rd_w;
        CData/*0:0*/ __PVT__pmem_select_w;
        CData/*0:0*/ __PVT__mem_cached_flush_w;
        CData/*3:0*/ __PVT__mem_uncached_wr_w;
        CData/*0:0*/ __PVT__mem_uncached_rd_w;
        CData/*0:0*/ __PVT__pmem_uncached_rd_w;
        CData/*0:0*/ __PVT__mem_cached_writeback_w;
        CData/*0:0*/ __PVT__u_uncached__DOT__res_accept_w;
        CData/*0:0*/ __PVT__u_uncached__DOT__req_accept_w;
        CData/*0:0*/ __PVT__u_uncached__DOT__request_complete_w;
        CData/*0:0*/ __PVT__u_uncached__DOT__req_valid_w;
        CData/*0:0*/ __PVT__u_uncached__DOT__drop_req_w;
        CData/*0:0*/ __PVT__u_uncached__DOT__request_w;
        CData/*0:0*/ __PVT__u_uncached__DOT__req_push_w;
        CData/*0:0*/ __PVT__u_uncached__DOT__res_push_w;
        CData/*0:0*/ __PVT__u_uncached__DOT__request_pending_q;
        CData/*0:0*/ __PVT__u_uncached__DOT__req_is_drop_w;
        CData/*0:0*/ __PVT__u_uncached__DOT__dropped_q;
        CData/*0:0*/ u_uncached__DOT____VdfgRegularize_hf17169b5_1_0;
        CData/*0:0*/ u_uncached__DOT____VdfgRegularize_hf17169b5_1_1;
        CData/*0:0*/ __PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q;
        CData/*0:0*/ __PVT__u_uncached__DOT__u_req__DOT__wr_ptr_q;
        CData/*1:0*/ __PVT__u_uncached__DOT__u_req__DOT__count_q;
        CData/*0:0*/ __PVT__u_uncached__DOT__u_resp__DOT__valid_o;
    };
    struct {
        CData/*0:0*/ __PVT__u_uncached__DOT__u_resp__DOT__rd_ptr_q;
        CData/*0:0*/ __PVT__u_uncached__DOT__u_resp__DOT__wr_ptr_q;
        CData/*1:0*/ __PVT__u_uncached__DOT__u_resp__DOT__count_q;
        CData/*3:0*/ __PVT__u_pmem_mux__DOT__outport_wr_r;
        CData/*0:0*/ __PVT__u_pmem_mux__DOT__outport_rd_r;
        CData/*0:0*/ __PVT__u_pmem_mux__DOT__select_q;
        CData/*0:0*/ __PVT__u_mux__DOT__hold_w;
        CData/*0:0*/ __PVT__u_mux__DOT__cache_access_q;
        CData/*0:0*/ __PVT__u_mux__DOT__request_w;
        CData/*4:0*/ __PVT__u_mux__DOT__pending_r;
        CData/*4:0*/ __PVT__u_mux__DOT__pending_q;
        CData/*0:0*/ u_mux__DOT____VdfgRegularize_ha7b7af01_2_1;
        CData/*0:0*/ u_mux__DOT____VdfgRegularize_ha7b7af01_2_4;
        CData/*0:0*/ __PVT__u_axi__DOT__accept_w;
        CData/*0:0*/ __PVT__u_axi__DOT__res_accept_w;
        CData/*0:0*/ __PVT__u_axi__DOT__req_accept_w;
        CData/*0:0*/ __PVT__u_axi__DOT__res_valid_w;
        CData/*0:0*/ __PVT__u_axi__DOT__req_valid_w;
        CData/*0:0*/ __PVT__u_axi__DOT__req_push_w;
        CData/*0:0*/ __PVT__u_axi__DOT__req_can_issue_w;
        CData/*0:0*/ __PVT__u_axi__DOT__req_is_write_w;
        CData/*7:0*/ __PVT__u_axi__DOT__req_len_w;
        CData/*7:0*/ __PVT__u_axi__DOT__req_cnt_q;
        CData/*0:0*/ __PVT__u_axi__DOT__res_push_w;
        CData/*0:0*/ __PVT__u_axi__DOT__resp_pop_w;
        CData/*1:0*/ __PVT__u_axi__DOT__resp_outstanding_q;
        CData/*0:0*/ u_axi__DOT____VdfgRegularize_h8a1a94ad_3_0;
        CData/*0:0*/ __PVT__u_axi__DOT__u_req__DOT__rd_ptr_q;
        CData/*0:0*/ __PVT__u_axi__DOT__u_req__DOT__wr_ptr_q;
        CData/*1:0*/ __PVT__u_axi__DOT__u_req__DOT__count_q;
        CData/*7:0*/ __PVT__u_axi__DOT__u_axi__DOT__req_cnt_q;
        CData/*0:0*/ __PVT__u_axi__DOT__u_axi__DOT__valid_q;
        CData/*0:0*/ __PVT__u_axi__DOT__u_axi__DOT__inport_valid_w;
        CData/*0:0*/ __PVT__u_axi__DOT__u_axi__DOT__inport_write_w;
        CData/*0:0*/ __PVT__u_axi__DOT__u_axi__DOT__awvalid_q;
        CData/*0:0*/ __PVT__u_axi__DOT__u_axi__DOT__wvalid_q;
        CData/*0:0*/ __PVT__u_axi__DOT__u_axi__DOT__wlast_q;
        CData/*0:0*/ __PVT__u_axi__DOT__u_axi__DOT__wr_cmd_accepted_w;
        CData/*0:0*/ __PVT__u_axi__DOT__u_axi__DOT__wr_data_accepted_w;
        CData/*0:0*/ __PVT__u_axi__DOT__u_axi__DOT__wr_data_last_w;
        CData/*0:0*/ u_axi__DOT__u_axi__DOT____VdfgRegularize_he156c47b_0_0;
        VL_IN16(__PVT__mem_req_tag_i,10,0);
        VL_OUT16(__PVT__mem_resp_tag_o,10,0);
        VL_IN(__PVT__mem_addr_i,31,0);
        VL_IN(__PVT__mem_data_wr_i,31,0);
        VL_IN(__PVT__axi_rdata_i,31,0);
        VL_OUT(__PVT__mem_data_rd_o,31,0);
        VL_OUT(__PVT__axi_awaddr_o,31,0);
        VL_OUT(__PVT__axi_wdata_o,31,0);
        VL_OUT(__PVT__axi_araddr_o,31,0);
        VlWide<3>/*83:0*/ __PVT__u_axi__DOT__u_axi__DOT__buf_q;
        VlUnpacked<VlWide<3>/*69:0*/, 2> __PVT__u_uncached__DOT__u_req__DOT__ram_q;
        VlUnpacked<SData/*10:0*/, 2> __PVT__u_uncached__DOT__u_resp__DOT__ram_q;
        VlUnpacked<VlWide<3>/*76:0*/, 2> __PVT__u_axi__DOT__u_req__DOT__ram_q;
    };

    // INTERNAL VARIABLES
    Vriscv_muldiv_csr_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_muldiv_csr_tb_dcache(Vriscv_muldiv_csr_tb__Syms* symsp, const char* v__name);
    ~Vriscv_muldiv_csr_tb_dcache();
    VL_UNCOPYABLE(Vriscv_muldiv_csr_tb_dcache);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
