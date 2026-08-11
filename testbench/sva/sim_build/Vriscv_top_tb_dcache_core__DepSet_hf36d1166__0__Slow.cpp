// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top_tb.h for the primary calling header

#include "Vriscv_top_tb__pch.h"
#include "Vriscv_top_tb_dcache_core.h"

VL_ATTR_COLD void Vriscv_top_tb_dcache_core___ctor_var_reset(Vriscv_top_tb_dcache_core* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_top_tb_dcache_core___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_addr_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_data_wr_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_rd_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_wr_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__mem_cacheable_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_req_tag_i = VL_RAND_RESET_I(11);
    vlSelf->__PVT__mem_invalidate_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_writeback_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_flush_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__outport_accept_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__outport_ack_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__outport_error_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__outport_read_data_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_data_rd_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_accept_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_ack_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_error_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_resp_tag_o = VL_RAND_RESET_I(11);
    vlSelf->__PVT__outport_wr_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__outport_rd_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__outport_len_o = VL_RAND_RESET_I(8);
    vlSelf->__PVT__outport_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__outport_write_data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__next_state_r = VL_RAND_RESET_I(4);
    vlSelf->__PVT__state_q = VL_RAND_RESET_I(4);
    vlSelf->__PVT__tag_hit_any_m_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tag0_hit_m_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tag1_hit_m_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flush_addr_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__mem_addr_m_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_data_m_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_wr_m_q = VL_RAND_RESET_I(4);
    vlSelf->__PVT__mem_rd_m_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_tag_m_q = VL_RAND_RESET_I(11);
    vlSelf->__PVT__mem_inval_m_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_writeback_m_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_flush_m_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_accept_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replace_way_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pmem_wr_w = VL_RAND_RESET_I(4);
    vlSelf->__PVT__pmem_rd_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pmem_addr_w = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pmem_write_data_w = VL_RAND_RESET_I(32);
    vlSelf->__PVT__evict_way_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tag_dirty_any_m_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flushing_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tag_addr_x_r = VL_RAND_RESET_I(8);
    vlSelf->__PVT__tag_addr_m_r = VL_RAND_RESET_I(8);
    vlSelf->__PVT__tag_data_in_m_r = VL_RAND_RESET_I(21);
    vlSelf->__PVT__tag0_write_m_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tag1_write_m_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__evict_way_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__evict_data_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__evict_addr_r = VL_RAND_RESET_I(27);
    vlSelf->__PVT__data_addr_x_r = VL_RAND_RESET_I(11);
    vlSelf->__PVT__data_addr_m_r = VL_RAND_RESET_I(11);
    vlSelf->__PVT__data_write_addr_q = VL_RAND_RESET_I(11);
    vlSelf->__PVT__data0_write_m_r = VL_RAND_RESET_I(4);
    vlSelf->__PVT__data0_data_in_m_w = VL_RAND_RESET_I(32);
    vlSelf->__PVT__data1_write_m_r = VL_RAND_RESET_I(4);
    vlSelf->__PVT__flush_last_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_ack_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pmem_rd_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pmem_wr0_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pmem_len_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__pmem_addr_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pmem_wr_q = VL_RAND_RESET_I(4);
    vlSelf->__PVT__pmem_write_data_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__error_q = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80, vlSelf->__PVT__dbg_state);
    vlSelf->__VdfgExtracted_h46ba6bcb__0 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgExtracted_h03d1c5f6__0 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_h82da71bd_1_2 = VL_RAND_RESET_I(1);
}

VL_ATTR_COLD void Vriscv_top_tb_dcache_core___configure_coverage(Vriscv_top_tb_dcache_core* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_top_tb_dcache_core___configure_coverage\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
