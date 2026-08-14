// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscv_muldiv_csr_tb__Syms.h"


VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("riscv_muldiv_csr_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__i_memory__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__d_memory__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+749,0,"RESULT_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+750,0,"MAX_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+727,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+751,0,"i_awvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"i_awready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"i_wvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"i_wready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"i_wlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"i_bvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"i_bready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+648,0,"i_arvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"i_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"i_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"i_rlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+752,0,"i_rready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+753,0,"i_awaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+753,0,"i_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"i_araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+729,0,"i_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+754,0,"i_awid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+754,0,"i_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+239,0,"i_bid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+754,0,"i_arid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+240,0,"i_rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+755,0,"i_awlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+756,0,"i_arlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+757,0,"i_awburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+757,0,"i_bresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+758,0,"i_arburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+757,0,"i_rresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+241,0,"d_awvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"d_awready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"d_wvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"d_wready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"d_wlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"d_bvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+752,0,"d_bready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"d_arvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"d_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"d_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"d_rlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+752,0,"d_rready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+251,0,"d_awaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+252,0,"d_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+251,0,"d_araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+730,0,"d_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"d_awid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+254,0,"d_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+255,0,"d_bid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+253,0,"d_arid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+256,0,"d_rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+257,0,"d_awlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+257,0,"d_arlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+258,0,"d_awburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+757,0,"d_bresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+258,0,"d_arburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+757,0,"d_rresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+259,0,"result_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+260,0,"result_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+261,0,"i_read_bursts",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"d_read_bursts",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+263,0,"d_write_words",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("i_memory", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__i_memory__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("d_memory", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__d_memory__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__i_memory__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__i_memory__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+759,0,"WORDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+760,0,"RESULT_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+727,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+753,0,"awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+754,0,"awid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+755,0,"awlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+232,0,"awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+753,0,"wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+754,0,"wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+751,0,"wlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+757,0,"bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+239,0,"bid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+751,0,"bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+648,0,"arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+238,0,"araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+754,0,"arid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+756,0,"arlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+235,0,"arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+729,0,"rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+757,0,"rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+240,0,"rid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+237,0,"rlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+752,0,"rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"result_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+265,0,"result_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+261,0,"read_bursts_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+266,0,"write_words_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+236,0,"read_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+267,0,"read_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+268,0,"read_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+240,0,"read_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+233,0,"write_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+269,0,"write_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+270,0,"write_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+271,0,"active_write_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+731,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_dcache__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_core__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_icache__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+761,0,"CORE_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+753,0,"MEM_CACHE_ADDR_MIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+762,0,"MEM_CACHE_ADDR_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+727,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"axi_i_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"axi_i_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"axi_i_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+757,0,"axi_i_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+239,0,"axi_i_bid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+235,0,"axi_i_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"axi_i_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+729,0,"axi_i_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+757,0,"axi_i_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+240,0,"axi_i_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+237,0,"axi_i_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"axi_d_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"axi_d_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"axi_d_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+757,0,"axi_d_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+255,0,"axi_d_bid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+248,0,"axi_d_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"axi_d_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+730,0,"axi_d_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+757,0,"axi_d_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+256,0,"axi_d_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+250,0,"axi_d_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"intr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+753,0,"reset_vector_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+751,0,"axi_i_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+753,0,"axi_i_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+754,0,"axi_i_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+755,0,"axi_i_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+757,0,"axi_i_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+751,0,"axi_i_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+753,0,"axi_i_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+754,0,"axi_i_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+751,0,"axi_i_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"axi_i_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+648,0,"axi_i_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+238,0,"axi_i_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+754,0,"axi_i_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+756,0,"axi_i_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+758,0,"axi_i_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+752,0,"axi_i_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"axi_d_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+251,0,"axi_d_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"axi_d_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+257,0,"axi_d_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+258,0,"axi_d_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+243,0,"axi_d_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+252,0,"axi_d_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,0,"axi_d_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+245,0,"axi_d_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+752,0,"axi_d_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"axi_d_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+251,0,"axi_d_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"axi_d_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+257,0,"axi_d_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+258,0,"axi_d_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+752,0,"axi_d_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"retire_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"retire_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+272,0,"retire_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+273,0,"retire_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+167,0,"debug_x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,0,"debug_x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"debug_x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"debug_x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"debug_x5_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"debug_x6_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"debug_x7_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"debug_x8_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"debug_x9_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"debug_x10_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"debug_x11_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"debug_x12_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"debug_x13_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"debug_x14_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"debug_x15_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"debug_x16_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"debug_x17_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"debug_x18_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"debug_x19_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"debug_x20_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"debug_x21_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"debug_x22_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"debug_x23_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"debug_x24_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"debug_x25_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"debug_x26_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"debug_x27_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"debug_x28_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"debug_x29_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"debug_x30_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+197,0,"debug_x31_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+649,0,"icache_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"icache_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"dcache_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"dcache_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+732,0,"dcache_ack_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+277,0,"dcache_resp_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+650,0,"icache_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+761,0,"cpu_id_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+733,0,"dcache_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+734,0,"dcache_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"dcache_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"icache_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"dcache_writeback_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+763,0,"dcache_req_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+279,0,"dcache_cacheable_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"icache_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+735,0,"dcache_data_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+651,0,"icache_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+736,0,"dcache_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+281,0,"icache_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+16,0,"icache_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"dcache_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+737,0,"dcache_data_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_dcache", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_dcache__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_core", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_core__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_icache", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_icache__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("muldiv_csr_sva_checker", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+727,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"mul_opcode_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+652,0,"mul_opcode_opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"mul_opcode_ra_operand",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"mul_opcode_rb_operand",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+20,0,"mul_hold",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+283,0,"mul_writeback_value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17,0,"div_opcode_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+652,0,"div_opcode_opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"div_opcode_ra_operand",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"div_opcode_rb_operand",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+284,0,"div_writeback_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+285,0,"div_writeback_value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+286,0,"div_busy_q",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"csr_opcode_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+652,0,"csr_opcode_opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+22,0,"csr_opcode_invalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+287,0,"csr_result_e1_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+288,0,"csr_result_e1_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+289,0,"csr_result_e1_exception",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+290,0,"csr_current_priv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+21,0,"csrfile_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+653,0,"csrfile_raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+654,0,"csrfile_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+291,0,"csrfile_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+292,0,"csrfile_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+293,0,"csrfile_mepc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+294,0,"csrfile_mcause",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"csrfile_exception_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+272,0,"csrfile_exception_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+764,0,"INST_MUL_MASK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+765,0,"INST_MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+766,0,"INST_MULH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+767,0,"INST_MULHSU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+768,0,"INST_MULHU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+769,0,"INST_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+770,0,"INST_DIVU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+771,0,"INST_REM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+772,0,"INST_REMU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+773,0,"INST_CSR_MASK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+774,0,"INST_CSRRW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+775,0,"INST_CSRRS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+776,0,"INST_CSRRC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+777,0,"INST_CSRRWI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+778,0,"INST_CSRRSI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+779,0,"INST_CSRRCI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+780,0,"EXCEPTION_ILLEGAL_INSTRUCTION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+198,0,"CHK_017_mul_result_valid_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+199,0,"CHK_018_mul_hold_stable_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+200,0,"CHK_019_mulh_signed_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+201,0,"CHK_020_mulhu_unsigned_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+202,0,"CHK_021_mulhsu_mixed_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+203,0,"CHK_022_mul_zero_id_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+781,0,"mul_ra_e0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+782,0,"mul_rb_e0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+655,0,"mul_is_mul_e0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+656,0,"mul_is_mulh_e0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+657,0,"mul_is_mulhsu_e0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+658,0,"mul_is_mulhu_e0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+783,0,"mul_valid_e0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+23,0,"mul_full_product_e0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+296,0,"mul_expect_e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+297,0,"mul_expect_e2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+298,0,"mul_expect_valid_e1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+299,0,"mul_expect_valid_e2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"CHK_023_div_by_zero_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+205,0,"CHK_024_div_overflow_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+206,0,"CHK_025_div_result_correct_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+207,0,"CHK_026_div_busy_no_new_issue_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+208,0,"CHK_027_div_valid_pulse_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+659,0,"is_div_e0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+660,0,"is_divu_e0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+661,0,"is_rem_e0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+662,0,"is_remu_e0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+300,0,"div_ra_latched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"div_rb_latched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+302,0,"div_is_div_latched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"div_is_divu_latched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+304,0,"div_is_rem_latched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"div_is_remu_latched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+306,0,"div_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+307,0,"div_ref_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+308,0,"div_ref_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+309,0,"divu_ref_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"divu_ref_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,0,"CHK_028_csr_write_readback_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+210,0,"CHK_029_illegal_csr_exception_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+211,0,"CHK_030_mepc_capture_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+311,0,"csr_last_waddr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+312,0,"csr_last_wdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+313,0,"csr_write_pending_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+25,0,"a33",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+27,0,"b33",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__d_memory__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__d_memory__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+759,0,"WORDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+749,0,"RESULT_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+727,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+251,0,"awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"awid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+257,0,"awlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+242,0,"awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+252,0,"wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,0,"wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+245,0,"wlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+757,0,"bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+255,0,"bid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+752,0,"bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+251,0,"araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"arid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+257,0,"arlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+248,0,"arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+730,0,"rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+757,0,"rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+256,0,"rid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+250,0,"rlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+752,0,"rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"result_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+260,0,"result_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"read_bursts_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+263,0,"write_words_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+249,0,"read_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+314,0,"read_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+315,0,"read_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+256,0,"read_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+316,0,"write_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+317,0,"write_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+318,0,"write_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+319,0,"active_write_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+738,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
}

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_dcache__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_dcache__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+761,0,"AXI_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+727,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+734,0,"mem_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+737,0,"mem_data_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+733,0,"mem_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+736,0,"mem_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+279,0,"mem_cacheable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+763,0,"mem_req_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+276,0,"mem_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"mem_writeback_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"mem_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"axi_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"axi_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"axi_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+757,0,"axi_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+255,0,"axi_bid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+248,0,"axi_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"axi_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+730,0,"axi_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+757,0,"axi_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+256,0,"axi_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+250,0,"axi_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"mem_data_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"mem_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+663,0,"mem_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"mem_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+277,0,"mem_resp_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+241,0,"axi_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+251,0,"axi_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"axi_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+257,0,"axi_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+258,0,"axi_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+243,0,"axi_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+252,0,"axi_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,0,"axi_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+245,0,"axi_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+752,0,"axi_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"axi_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+251,0,"axi_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"axi_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+257,0,"axi_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+258,0,"axi_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+752,0,"axi_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+320,0,"mem_uncached_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+321,0,"pmem_cache_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+322,0,"mem_uncached_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"pmem_cache_len_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+739,0,"mem_cached_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+730,0,"pmem_cache_read_data_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+323,0,"mem_cached_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"pmem_uncached_ack_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"pmem_len_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+325,0,"pmem_uncached_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"mem_cached_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"pmem_cache_ack_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"pmem_cache_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"pmem_cache_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"pmem_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"pmem_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+763,0,"mem_cached_req_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+327,0,"mem_uncached_ack_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+328,0,"pmem_ack_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+737,0,"mem_uncached_data_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+329,0,"pmem_uncached_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+664,0,"mem_cached_data_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+730,0,"pmem_uncached_read_data_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+330,0,"mem_uncached_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"pmem_uncached_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+730,0,"mem_uncached_data_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+740,0,"pmem_write_data_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+331,0,"pmem_uncached_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+33,0,"mem_cached_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+332,0,"mem_cached_resp_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+755,0,"pmem_uncached_len_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+737,0,"mem_cached_data_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+665,0,"pmem_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+333,0,"pmem_select_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+334,0,"mem_cached_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"mem_uncached_cacheable_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+734,0,"mem_cached_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+335,0,"mem_uncached_writeback_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+666,0,"pmem_cache_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+751,0,"pmem_cache_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+763,0,"mem_uncached_req_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+336,0,"pmem_uncached_write_data_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+337,0,"mem_uncached_resp_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+34,0,"pmem_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"mem_cached_cacheable_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"mem_uncached_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+751,0,"mem_uncached_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"mem_uncached_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"pmem_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+667,0,"pmem_cache_write_data_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+339,0,"mem_cached_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+734,0,"mem_uncached_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+340,0,"pmem_uncached_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+730,0,"pmem_read_data_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+668,0,"mem_cached_ack_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"mem_cached_writeback_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_core", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_axi", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+761,0,"AXI_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+727,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"outport_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"outport_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"outport_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+757,0,"outport_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+255,0,"outport_bid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+248,0,"outport_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"outport_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+730,0,"outport_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+757,0,"outport_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+256,0,"outport_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+250,0,"outport_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+665,0,"inport_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+34,0,"inport_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"inport_len_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"inport_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+740,0,"inport_write_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+241,0,"outport_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+251,0,"outport_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"outport_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+257,0,"outport_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+258,0,"outport_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+243,0,"outport_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+252,0,"outport_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,0,"outport_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+245,0,"outport_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+752,0,"outport_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"outport_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+251,0,"outport_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"outport_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+257,0,"outport_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+258,0,"outport_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+752,0,"outport_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"inport_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+328,0,"inport_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"inport_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+730,0,"inport_read_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+246,0,"bvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"rvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+757,0,"bresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+757,0,"rresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+342,0,"accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+343,0,"res_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"req_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+344,0,"res_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+345,0,"req_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+346,0,"req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->declBit(c+37,0,"req_push_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+4,0,"req_data_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->declBit(c+349,0,"req_can_issue_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+350,0,"req_is_read_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+351,0,"req_is_write_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+352,0,"req_len_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+353,0,"req_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+354,0,"req_last_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+355,0,"res_push_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+356,0,"resp_pop_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+357,0,"resp_outstanding_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("u_axi", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+727,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"inport_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+351,0,"inport_write_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+358,0,"inport_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+754,0,"inport_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+352,0,"inport_len_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+758,0,"inport_burst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+359,0,"inport_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+360,0,"inport_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+752,0,"inport_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+752,0,"inport_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"outport_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"outport_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"outport_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+757,0,"outport_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+255,0,"outport_bid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+248,0,"outport_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"outport_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+730,0,"outport_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+757,0,"outport_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+256,0,"outport_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+250,0,"outport_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+342,0,"inport_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"inport_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+757,0,"inport_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+255,0,"inport_bid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+249,0,"inport_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+730,0,"inport_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+757,0,"inport_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+256,0,"inport_rid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+250,0,"inport_rlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"outport_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+251,0,"outport_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"outport_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+257,0,"outport_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+258,0,"outport_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+243,0,"outport_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+252,0,"outport_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,0,"outport_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+245,0,"outport_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+752,0,"outport_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"outport_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+251,0,"outport_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"outport_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+257,0,"outport_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+258,0,"outport_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+752,0,"outport_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+361,0,"req_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+362,0,"valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+363,0,"buf_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 83,0);
    tracep->declBit(c+366,0,"inport_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+367,0,"inport_write_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+251,0,"inport_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"inport_id_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+257,0,"inport_len_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+258,0,"inport_burst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+252,0,"inport_wdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,0,"inport_wstrb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+245,0,"inport_wlast_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"skid_busy_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+368,0,"awvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+369,0,"wvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"wlast_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+371,0,"wr_cmd_accepted_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+372,0,"wr_data_accepted_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"wr_data_last_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_req", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+784,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+785,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+786,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+727,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+4,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->declBit(c+37,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+342,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+346,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->declBit(c+338,0,"accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+345,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+785,0,"COUNT_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ram_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+374+i*3,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 76,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+380,0,"rd_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+381,0,"wr_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+382,0,"count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+727,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+734,0,"mem_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+737,0,"mem_data_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+733,0,"mem_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+736,0,"mem_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+279,0,"mem_cacheable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+763,0,"mem_req_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+276,0,"mem_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"mem_writeback_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"mem_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+664,0,"mem_cached_data_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+30,0,"mem_cached_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+668,0,"mem_cached_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+339,0,"mem_cached_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+332,0,"mem_cached_resp_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+730,0,"mem_uncached_data_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+322,0,"mem_uncached_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"mem_uncached_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"mem_uncached_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+337,0,"mem_uncached_resp_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1,0,"mem_data_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"mem_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+663,0,"mem_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"mem_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+277,0,"mem_resp_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+734,0,"mem_cached_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+737,0,"mem_cached_data_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+33,0,"mem_cached_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+739,0,"mem_cached_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+279,0,"mem_cached_cacheable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+763,0,"mem_cached_req_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+323,0,"mem_cached_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"mem_cached_writeback_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+334,0,"mem_cached_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+734,0,"mem_uncached_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+737,0,"mem_uncached_data_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+36,0,"mem_uncached_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"mem_uncached_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+279,0,"mem_uncached_cacheable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+763,0,"mem_uncached_req_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+320,0,"mem_uncached_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"mem_uncached_writeback_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"mem_uncached_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+333,0,"cache_active_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+383,0,"hold_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+384,0,"cache_access_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"request_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"pending_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+385,0,"pending_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_pmem_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+727,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"outport_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+328,0,"outport_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"outport_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+730,0,"outport_read_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+333,0,"select_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+331,0,"inport0_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+340,0,"inport0_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+755,0,"inport0_len_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+329,0,"inport0_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+336,0,"inport0_write_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+666,0,"inport1_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+32,0,"inport1_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"inport1_len_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+31,0,"inport1_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+667,0,"inport1_write_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+665,0,"outport_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+34,0,"outport_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"outport_len_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"outport_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+740,0,"outport_write_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+325,0,"inport0_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"inport0_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"inport0_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+730,0,"inport0_read_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+321,0,"inport1_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"inport1_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"inport1_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+730,0,"inport1_read_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+665,0,"outport_wr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+34,0,"outport_rd_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"outport_len_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"outport_addr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+740,0,"outport_write_data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+386,0,"select_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_uncached", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+727,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+734,0,"mem_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+737,0,"mem_data_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+36,0,"mem_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"mem_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+279,0,"mem_cacheable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+763,0,"mem_req_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+320,0,"mem_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"mem_writeback_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"mem_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+325,0,"outport_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"outport_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"outport_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+730,0,"outport_read_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+730,0,"mem_data_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+322,0,"mem_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"mem_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"mem_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+337,0,"mem_resp_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+331,0,"outport_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+340,0,"outport_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+755,0,"outport_len_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+329,0,"outport_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+336,0,"outport_write_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+387,0,"res_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+388,0,"req_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+389,0,"request_complete_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+389,0,"req_pop_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+390,0,"req_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+391,0,"req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 69,0);
    tracep->declBit(c+394,0,"drop_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"request_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"req_push_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"res_push_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"request_pending_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+396,0,"request_in_progress_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+340,0,"req_is_read_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+397,0,"req_is_write_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+398,0,"req_is_drop_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+399,0,"dropped_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_req", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+787,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+785,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+786,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+727,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+741,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 69,0);
    tracep->declBit(c+41,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+389,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+391,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 69,0);
    tracep->declBit(c+388,0,"accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+390,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+785,0,"COUNT_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ram_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+400+i*3,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 69,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+406,0,"rd_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+407,0,"wr_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+408,0,"count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_resp", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+788,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+785,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+786,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+727,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+763,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+42,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+337,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+387,0,"accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+409,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+785,0,"COUNT_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ram_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+410+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 10,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+412,0,"rd_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+413,0,"wr_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+414,0,"count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_icache__u_tag0__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_icache__u_tag1__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_icache__u_data0__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_icache__u_data1__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_icache__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_icache__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+761,0,"AXI_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+727,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"req_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"req_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"req_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+281,0,"req_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+232,0,"axi_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"axi_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"axi_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+757,0,"axi_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+239,0,"axi_bid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+235,0,"axi_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"axi_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+729,0,"axi_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+757,0,"axi_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+240,0,"axi_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+237,0,"axi_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+651,0,"req_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+649,0,"req_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"req_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+650,0,"req_inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+751,0,"axi_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+753,0,"axi_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+754,0,"axi_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+755,0,"axi_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+757,0,"axi_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+751,0,"axi_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+753,0,"axi_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+754,0,"axi_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+751,0,"axi_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"axi_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+648,0,"axi_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+238,0,"axi_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+754,0,"axi_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+756,0,"axi_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+758,0,"axi_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+752,0,"axi_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+785,0,"ICACHE_NUM_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+789,0,"ICACHE_NUM_LINES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+790,0,"ICACHE_LINE_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+791,0,"ICACHE_LINE_SIZE_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+792,0,"ICACHE_LINE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+790,0,"ICACHE_LINE_WORDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+791,0,"ICACHE_TAG_REQ_LINE_L",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+793,0,"ICACHE_TAG_REQ_LINE_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+790,0,"ICACHE_TAG_REQ_LINE_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+794,0,"CACHE_TAG_ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+794,0,"CACHE_TAG_VALID_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+795,0,"CACHE_TAG_DATA_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+796,0,"ICACHE_TAG_CMP_ADDR_L",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+797,0,"ICACHE_TAG_CMP_ADDR_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+794,0,"ICACHE_TAG_CMP_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+415,0,"req_line_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+788,0,"CACHE_DATA_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+416,0,"req_data_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+785,0,"STATE_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+757,0,"STATE_FLUSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+758,0,"STATE_LOOKUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+798,0,"STATE_REFILL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+799,0,"STATE_RELOOKUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+669,0,"next_state_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+417,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+418,0,"flush_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+419,0,"invalidate_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+420,0,"replace_way_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+421,0,"lookup_valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+422,0,"lookup_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+423,0,"req_pc_tag_cmp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+424,0,"tag_addr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+425,0,"tag_data_in_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+426,0,"tag0_write_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+212,0,"tag0_data_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("u_tag0", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_icache__u_tag0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+213,0,"tag0_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"tag0_addr_bits_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+670,0,"tag0_hit_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+427,0,"tag1_write_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"tag1_data_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("u_tag1", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_icache__u_tag1__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+216,0,"tag1_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+217,0,"tag1_addr_bits_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+671,0,"tag1_hit_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+672,0,"tag_hit_any_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+428,0,"data_addr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+429,0,"data_write_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+430,0,"data0_write_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+218,0,"data0_data_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_data0", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_icache__u_data0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+431,0,"data1_write_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+219,0,"data1_data_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_data1", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_icache__u_data1__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+650,0,"inst_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+432,0,"axi_arvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"axi_error_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_core__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_core__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+786,0,"SUPPORT_MULDIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+761,0,"SUPPORT_SUPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+761,0,"SUPPORT_MMU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+786,0,"SUPPORT_LOAD_BYPASS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+786,0,"SUPPORT_MUL_BYPASS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+761,0,"SUPPORT_REGFILE_XILINX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+761,0,"EXTRA_DECODE_STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+753,0,"MEM_CACHE_ADDR_MIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+762,0,"MEM_CACHE_ADDR_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+727,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+735,0,"mem_d_data_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"mem_d_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+732,0,"mem_d_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"mem_d_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+277,0,"mem_d_resp_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+651,0,"mem_i_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+649,0,"mem_i_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"mem_i_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+650,0,"mem_i_inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+751,0,"intr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+753,0,"reset_vector_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+753,0,"cpu_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+433,0,"mem_d_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"mem_d_data_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+43,0,"mem_d_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"mem_d_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+279,0,"mem_d_cacheable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+763,0,"mem_d_req_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+276,0,"mem_d_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"mem_d_writeback_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"mem_d_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"mem_i_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"mem_i_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"mem_i_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+281,0,"mem_i_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+13,0,"retire_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"retire_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+272,0,"retire_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+273,0,"retire_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+167,0,"debug_x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,0,"debug_x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"debug_x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"debug_x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"debug_x5_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"debug_x6_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"debug_x7_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"debug_x8_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"debug_x9_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"debug_x10_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"debug_x11_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"debug_x12_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"debug_x13_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"debug_x14_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"debug_x15_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"debug_x16_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"debug_x17_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"debug_x18_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"debug_x19_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"debug_x20_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"debug_x21_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"debug_x22_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"debug_x23_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"debug_x24_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"debug_x25_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"debug_x26_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"debug_x27_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"debug_x28_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"debug_x29_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"debug_x30_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+197,0,"debug_x31_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+278,0,"mmu_lsu_writeback_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+435,0,"fetch_in_priv_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+673,0,"mul_opcode_rd_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+436,0,"mmu_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+437,0,"lsu_opcode_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+45,0,"fetch_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+673,0,"csr_opcode_rd_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+438,0,"branch_exec_source_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"csr_opcode_rb_operand_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"writeback_div_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+21,0,"csr_opcode_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"branch_csr_request_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+650,0,"mmu_ifetch_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"opcode_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+674,0,"opcode_rb_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+282,0,"mmu_lsu_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"mul_opcode_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+440,0,"mmu_mxr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+757,0,"branch_d_exec_priv_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+649,0,"mmu_ifetch_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"csr_opcode_invalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+295,0,"csr_writeback_exception_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+675,0,"fetch_instr_mul_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+441,0,"branch_exec_is_ret_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+273,0,"csr_writeback_exception_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"mmu_lsu_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+751,0,"fetch_in_fault_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"branch_request_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+437,0,"csr_opcode_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"writeback_mem_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+289,0,"csr_result_e1_exception_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+442,0,"branch_csr_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"mmu_lsu_data_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+443,0,"fetch_fault_page_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+277,0,"mmu_lsu_resp_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+763,0,"mmu_lsu_req_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+18,0,"opcode_ra_operand_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"squash_decode_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+443,0,"fetch_dec_fault_page_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+652,0,"mul_opcode_opcode_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+20,0,"exec_hold_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+676,0,"fetch_instr_invalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"branch_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+677,0,"mul_opcode_ra_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+674,0,"csr_opcode_rb_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+8,0,"lsu_stall_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+444,0,"branch_exec_is_not_taken_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+445,0,"branch_exec_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+652,0,"opcode_opcode_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"mul_opcode_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"branch_d_exec_request_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"mul_opcode_ra_operand_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+446,0,"branch_exec_is_taken_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"fetch_dec_fault_fetch_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+678,0,"fetch_dec_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"fetch_fault_fetch_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"lsu_opcode_invalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+433,0,"mmu_lsu_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+20,0,"mul_hold_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+651,0,"mmu_ifetch_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+732,0,"mmu_lsu_ack_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+437,0,"fetch_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+751,0,"mmu_ifetch_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"mul_opcode_rb_operand_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+448,0,"branch_csr_priv_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+449,0,"branch_exec_request_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"lsu_opcode_ra_operand_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17,0,"div_opcode_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+450,0,"branch_priv_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+43,0,"mmu_lsu_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+437,0,"fetch_dec_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+744,0,"interrupt_inhibit_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"mmu_ifetch_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+451,0,"writeback_mem_exception_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+679,0,"fetch_instr_lsu_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+452,0,"mmu_priv_d_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+677,0,"opcode_ra_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+18,0,"csr_opcode_ra_operand_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"writeback_mem_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+284,0,"writeback_div_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+674,0,"mul_opcode_rb_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+751,0,"opcode_invalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+680,0,"fetch_instr_branch_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+281,0,"mmu_ifetch_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+16,0,"mmu_ifetch_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"mmu_ifetch_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+673,0,"lsu_opcode_rd_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+652,0,"lsu_opcode_opcode_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+751,0,"mmu_load_fault_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+453,0,"mmu_satp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+288,0,"csr_result_e1_wdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"opcode_rb_operand_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+276,0,"mmu_lsu_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"fetch_dec_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+677,0,"csr_opcode_ra_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+454,0,"ifence_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+681,0,"fetch_instr_exec_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+673,0,"opcode_rd_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+292,0,"csr_writeback_wdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+455,0,"csr_writeback_write_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"take_interrupt_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+457,0,"csr_result_e1_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"branch_d_exec_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+678,0,"fetch_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+458,0,"csr_writeback_waddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+459,0,"branch_exec_is_jmp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"mmu_lsu_cacheable_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+682,0,"fetch_instr_csr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"lsu_opcode_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+683,0,"fetch_dec_instr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+287,0,"csr_result_e1_write_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+652,0,"csr_opcode_opcode_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+684,0,"fetch_instr_div_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+652,0,"fetch_instr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+751,0,"mul_opcode_invalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+685,0,"fetch_instr_rd_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+735,0,"mmu_lsu_data_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17,0,"exec_opcode_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+283,0,"writeback_mul_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+275,0,"mmu_lsu_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+674,0,"lsu_opcode_rb_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+15,0,"mmu_lsu_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"lsu_opcode_rb_operand_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+460,0,"mmu_sum_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+461,0,"writeback_exec_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+677,0,"lsu_opcode_ra_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+272,0,"csr_writeback_exception_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+751,0,"mmu_store_fault_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"branch_exec_is_call_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_issue", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_decode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+786,0,"SUPPORT_MULDIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+761,0,"EXTRA_DECODE_STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+727,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+678,0,"fetch_in_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+683,0,"fetch_in_instr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"fetch_in_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+447,0,"fetch_in_fault_fetch_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+443,0,"fetch_in_fault_page_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"fetch_out_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"squash_decode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"fetch_in_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+678,0,"fetch_out_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+652,0,"fetch_out_instr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"fetch_out_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+447,0,"fetch_out_fault_fetch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+443,0,"fetch_out_fault_page_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+681,0,"fetch_out_instr_exec_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+679,0,"fetch_out_instr_lsu_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+680,0,"fetch_out_instr_branch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+675,0,"fetch_out_instr_mul_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+684,0,"fetch_out_instr_div_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+682,0,"fetch_out_instr_csr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+685,0,"fetch_out_instr_rd_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+676,0,"fetch_out_instr_invalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+752,0,"enable_muldiv_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+652,0,"fetch_in_instr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_dec", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+678,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"fetch_fault_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+752,0,"enable_muldiv_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+652,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+676,0,"invalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+681,0,"exec_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+679,0,"lsu_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+680,0,"branch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+675,0,"mul_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+684,0,"div_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+682,0,"csr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+685,0,"rd_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+676,0,"invalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_div", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+727,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"opcode_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+652,0,"opcode_opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"opcode_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+751,0,"opcode_invalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+673,0,"opcode_rd_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+677,0,"opcode_ra_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+674,0,"opcode_rb_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+18,0,"opcode_ra_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"opcode_rb_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+284,0,"writeback_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+285,0,"writeback_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+284,0,"valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+285,0,"wb_result_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+659,0,"inst_div_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+660,0,"inst_divu_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+661,0,"inst_rem_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+662,0,"inst_remu_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+686,0,"div_rem_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+687,0,"signed_operation_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+688,0,"div_operation_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+464,0,"dividend_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+465,0,"divisor_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 62,0);
    tracep->declBus(c+467,0,"quotient_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+468,0,"q_mask_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+469,0,"div_inst_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"div_busy_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+470,0,"invert_res_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"div_start_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+471,0,"div_complete_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+472,0,"div_result_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_exec", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+727,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"opcode_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+652,0,"opcode_opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"opcode_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+751,0,"opcode_invalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+673,0,"opcode_rd_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+677,0,"opcode_ra_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+674,0,"opcode_rb_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+18,0,"opcode_ra_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"opcode_rb_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+20,0,"hold_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"branch_request_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+446,0,"branch_is_taken_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+444,0,"branch_is_not_taken_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+438,0,"branch_source_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+462,0,"branch_is_call_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+441,0,"branch_is_ret_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+459,0,"branch_is_jmp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+445,0,"branch_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"branch_d_request_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"branch_d_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+757,0,"branch_d_priv_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+461,0,"writeback_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+689,0,"imm20_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+690,0,"imm12_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+691,0,"bimm_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+692,0,"jimm20_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+693,0,"shamt_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+694,0,"alu_func_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+52,0,"alu_input_a_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"alu_input_b_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"alu_p_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+461,0,"result_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"less_than_signed__Vstatic__v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"greater_than_signed__Vstatic__v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+57,0,"branch_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"branch_taken_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"branch_target_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"branch_call_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"branch_ret_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"branch_jmp_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+446,0,"branch_taken_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+444,0,"branch_ntaken_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+445,0,"pc_x_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+438,0,"pc_m_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+462,0,"branch_call_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+441,0,"branch_ret_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+459,0,"branch_jmp_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+694,0,"alu_op_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+52,0,"alu_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"alu_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"alu_p_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"result_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"shift_right_fill_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,16);
    tracep->declBus(c+63,0,"shift_right_1_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"shift_right_2_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"shift_right_4_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"shift_right_8_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"shift_left_1_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"shift_left_2_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"shift_left_4_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"shift_left_8_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"sub_res_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_fetch", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+761,0,"SUPPORT_MMU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+727,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"fetch_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+651,0,"icache_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+649,0,"icache_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"icache_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+650,0,"icache_inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+751,0,"icache_page_fault_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+454,0,"fetch_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"branch_request_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"branch_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+450,0,"branch_priv_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+678,0,"fetch_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+683,0,"fetch_instr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"fetch_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+447,0,"fetch_fault_fetch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+443,0,"fetch_fault_page_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"icache_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"icache_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"icache_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+281,0,"icache_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+435,0,"icache_priv_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+46,0,"squash_decode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+473,0,"active_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+695,0,"icache_busy_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"stall_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+474,0,"branch_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+475,0,"branch_pc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+476,0,"branch_priv_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+474,0,"branch_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+475,0,"branch_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+476,0,"branch_priv_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+477,0,"stall_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+478,0,"icache_fetch_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"icache_invalidate_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+480,0,"pc_f_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+481,0,"pc_d_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+480,0,"icache_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+435,0,"icache_priv_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+482,0,"fetch_resp_drop_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+435,0,"priv_f_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+483,0,"branch_d_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+484,0,"skid_buffer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declBit(c+487,0,"skid_valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_lsu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+753,0,"MEM_CACHE_ADDR_MIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+762,0,"MEM_CACHE_ADDR_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+727,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"opcode_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+652,0,"opcode_opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"opcode_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+751,0,"opcode_invalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+673,0,"opcode_rd_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+677,0,"opcode_ra_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+674,0,"opcode_rb_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+18,0,"opcode_ra_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"opcode_rb_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+735,0,"mem_data_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"mem_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+732,0,"mem_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"mem_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+277,0,"mem_resp_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+751,0,"mem_load_fault_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"mem_store_fault_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+433,0,"mem_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"mem_data_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+43,0,"mem_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"mem_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+279,0,"mem_cacheable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+763,0,"mem_req_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+276,0,"mem_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"mem_writeback_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"mem_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"writeback_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"writeback_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+451,0,"writeback_exception_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+8,0,"stall_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+488,0,"mem_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"mem_data_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+489,0,"mem_rd_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+490,0,"mem_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+279,0,"mem_cacheable_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"mem_invalidate_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"mem_writeback_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"mem_flush_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+491,0,"mem_unaligned_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+492,0,"mem_unaligned_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"mem_load_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"mem_xb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+495,0,"mem_xh_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+496,0,"mem_ls_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+497,0,"pending_lsu_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"issue_lsu_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"complete_ok_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"complete_err_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"delay_lsu_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+696,0,"load_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+697,0,"load_signed_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+698,0,"store_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+699,0,"req_lb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+700,0,"req_lh_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+701,0,"req_lw_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+702,0,"req_sb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+703,0,"req_sh_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+704,0,"req_sw_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+705,0,"req_sw_lw_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+706,0,"req_sh_lh_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"mem_addr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+78,0,"mem_unaligned_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"mem_data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+80,0,"mem_rd_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"mem_wr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+707,0,"dcache_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+708,0,"dcache_writeback_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+709,0,"dcache_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"resp_load_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+499,0,"resp_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+500,0,"resp_byte_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+501,0,"resp_half_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"resp_signed_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"addr_lsb_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+83,0,"load_byte_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"load_half_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"load_signed_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"wb_result_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+503,0,"fault_load_align_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+504,0,"fault_store_align_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+505,0,"fault_load_bus_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"fault_store_bus_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"fault_load_page_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"fault_store_page_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_lsu_request", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+800,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+785,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+786,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+727,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+507,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+86,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+509,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+511,0,"accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+512,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+785,0,"COUNT_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ram_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+513+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 35,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+517,0,"rd_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+518,0,"wr_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+519,0,"count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+520,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_mmu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+753,0,"MEM_CACHE_ADDR_MIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+762,0,"MEM_CACHE_ADDR_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+761,0,"SUPPORT_MMU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+727,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+452,0,"priv_d_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+460,0,"sum_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+440,0,"mxr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+436,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+453,0,"satp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+16,0,"fetch_in_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"fetch_in_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"fetch_in_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+281,0,"fetch_in_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+435,0,"fetch_in_priv_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+651,0,"fetch_out_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+649,0,"fetch_out_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"fetch_out_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+650,0,"fetch_out_inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+433,0,"lsu_in_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"lsu_in_data_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+43,0,"lsu_in_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"lsu_in_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+279,0,"lsu_in_cacheable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+763,0,"lsu_in_req_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+276,0,"lsu_in_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"lsu_in_writeback_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"lsu_in_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+735,0,"lsu_out_data_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"lsu_out_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+732,0,"lsu_out_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"lsu_out_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+277,0,"lsu_out_resp_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+651,0,"fetch_in_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+649,0,"fetch_in_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"fetch_in_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+650,0,"fetch_in_inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+16,0,"fetch_out_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"fetch_out_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"fetch_out_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+281,0,"fetch_out_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+751,0,"fetch_in_fault_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+735,0,"lsu_in_data_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"lsu_in_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+732,0,"lsu_in_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"lsu_in_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+277,0,"lsu_in_resp_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+433,0,"lsu_out_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"lsu_out_data_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+43,0,"lsu_out_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"lsu_out_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+279,0,"lsu_out_cacheable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+763,0,"lsu_out_req_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+276,0,"lsu_out_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"lsu_out_writeback_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"lsu_out_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"lsu_in_load_fault_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"lsu_in_store_fault_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+785,0,"STATE_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+761,0,"STATE_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+786,0,"STATE_LEVEL_FIRST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+785,0,"STATE_LEVEL_SECOND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+801,0,"STATE_UPDATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+727,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"opcode_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+652,0,"opcode_opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"opcode_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+751,0,"opcode_invalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+673,0,"opcode_rd_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+677,0,"opcode_ra_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+674,0,"opcode_rb_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+18,0,"opcode_ra_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"opcode_rb_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+20,0,"hold_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+283,0,"writeback_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+785,0,"MULT_STAGES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+283,0,"result_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+521,0,"result_e3_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+522,0,"operand_a_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+524,0,"operand_b_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+526,0,"mulhi_sel_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+527,0,"mult_result_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declQuad(c+87,0,"operand_b_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+89,0,"operand_a_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+530,0,"result_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+710,0,"mult_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+786,0,"SUPPORT_MULDIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+786,0,"SUPPORT_DUAL_ISSUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+786,0,"SUPPORT_LOAD_BYPASS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+786,0,"SUPPORT_MUL_BYPASS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+761,0,"SUPPORT_REGFILE_XILINX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+727,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+678,0,"fetch_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+652,0,"fetch_instr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"fetch_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+447,0,"fetch_fault_fetch_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+443,0,"fetch_fault_page_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+681,0,"fetch_instr_exec_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+679,0,"fetch_instr_lsu_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+680,0,"fetch_instr_branch_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+675,0,"fetch_instr_mul_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+684,0,"fetch_instr_div_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+682,0,"fetch_instr_csr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+685,0,"fetch_instr_rd_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+676,0,"fetch_instr_invalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"branch_exec_request_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+446,0,"branch_exec_is_taken_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+444,0,"branch_exec_is_not_taken_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+438,0,"branch_exec_source_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+462,0,"branch_exec_is_call_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+441,0,"branch_exec_is_ret_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+459,0,"branch_exec_is_jmp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+445,0,"branch_exec_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"branch_d_exec_request_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"branch_d_exec_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+757,0,"branch_d_exec_priv_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+439,0,"branch_csr_request_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+442,0,"branch_csr_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+448,0,"branch_csr_priv_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+461,0,"writeback_exec_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"writeback_mem_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"writeback_mem_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+451,0,"writeback_mem_exception_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+283,0,"writeback_mul_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+284,0,"writeback_div_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+285,0,"writeback_div_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+457,0,"csr_result_e1_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+287,0,"csr_result_e1_write_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+288,0,"csr_result_e1_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+289,0,"csr_result_e1_exception_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+8,0,"lsu_stall_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"take_interrupt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"fetch_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"branch_request_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"branch_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+450,0,"branch_priv_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17,0,"exec_opcode_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"lsu_opcode_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"csr_opcode_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"mul_opcode_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"div_opcode_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+652,0,"opcode_opcode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"opcode_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+751,0,"opcode_invalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+673,0,"opcode_rd_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+677,0,"opcode_ra_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+674,0,"opcode_rb_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+18,0,"opcode_ra_operand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"opcode_rb_operand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+652,0,"lsu_opcode_opcode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"lsu_opcode_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+751,0,"lsu_opcode_invalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+673,0,"lsu_opcode_rd_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+677,0,"lsu_opcode_ra_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+674,0,"lsu_opcode_rb_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+18,0,"lsu_opcode_ra_operand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"lsu_opcode_rb_operand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+652,0,"mul_opcode_opcode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"mul_opcode_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+751,0,"mul_opcode_invalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+673,0,"mul_opcode_rd_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+677,0,"mul_opcode_ra_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+674,0,"mul_opcode_rb_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+18,0,"mul_opcode_ra_operand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"mul_opcode_rb_operand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+652,0,"csr_opcode_opcode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"csr_opcode_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+22,0,"csr_opcode_invalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+673,0,"csr_opcode_rd_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+677,0,"csr_opcode_ra_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+674,0,"csr_opcode_rb_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+18,0,"csr_opcode_ra_operand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"csr_opcode_rb_operand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+455,0,"csr_writeback_write_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+458,0,"csr_writeback_waddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+292,0,"csr_writeback_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"csr_writeback_exception_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+272,0,"csr_writeback_exception_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+273,0,"csr_writeback_exception_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+20,0,"exec_hold_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"mul_hold_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+744,0,"interrupt_inhibit_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"retire_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"retire_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+272,0,"retire_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+273,0,"retire_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+167,0,"debug_x1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,0,"debug_x2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"debug_x3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"debug_x4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"debug_x5_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"debug_x6_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"debug_x7_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"debug_x8_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"debug_x9_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"debug_x10_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"debug_x11_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"debug_x12_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"debug_x13_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"debug_x14_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"debug_x15_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"debug_x16_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"debug_x17_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"debug_x18_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"debug_x19_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"debug_x20_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"debug_x21_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"debug_x22_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"debug_x23_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"debug_x24_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"debug_x25_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"debug_x26_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"debug_x27_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"debug_x28_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"debug_x29_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"debug_x30_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+197,0,"debug_x31_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+752,0,"enable_muldiv_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+752,0,"enable_mul_bypass_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"stall_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"squash_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+531,0,"priv_x_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+92,0,"opcode_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+677,0,"issue_ra_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+674,0,"issue_rb_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+673,0,"issue_rd_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+685,0,"issue_sb_alloc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+681,0,"issue_exec_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+679,0,"issue_lsu_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+680,0,"issue_branch_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+675,0,"issue_mul_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+684,0,"issue_div_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+682,0,"issue_csr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+676,0,"issue_invalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"pipe_squash_e1_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"opcode_issue_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"opcode_accept_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"pipe_stall_raw_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"pipe_load_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+533,0,"pipe_store_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+534,0,"pipe_mul_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+535,0,"pipe_branch_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+536,0,"pipe_rd_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+537,0,"pipe_pc_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+538,0,"pipe_opcode_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+539,0,"pipe_operand_ra_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+540,0,"pipe_operand_rb_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+541,0,"pipe_load_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+542,0,"pipe_mul_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+94,0,"pipe_rd_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+95,0,"pipe_result_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+13,0,"pipe_valid_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"pipe_csr_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"pipe_rd_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+273,0,"pipe_result_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+272,0,"pipe_pc_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+543,0,"pipe_opc_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+544,0,"pipe_ra_val_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+545,0,"pipe_rb_val_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"pipe_exception_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+546,0,"issue_fault_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+547,0,"div_pending_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+548,0,"csr_pending_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"scoreboard_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+711,0,"issue_ra_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+712,0,"issue_rb_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+802,0,"issue_b_ra_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+803,0,"issue_b_rb_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_regfile", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+18,0,"issue_ra_value_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"issue_rb_value_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+549,0,"v_pipe_rs1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+550,0,"v_pipe_rs2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("u_pipe_ctrl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+786,0,"SUPPORT_LOAD_BYPASS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+786,0,"SUPPORT_MUL_BYPASS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+727,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"issue_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"issue_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"issue_stall_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+679,0,"issue_lsu_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+682,0,"issue_csr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+684,0,"issue_div_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+675,0,"issue_mul_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+680,0,"issue_branch_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+685,0,"issue_rd_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+673,0,"issue_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+546,0,"issue_exception_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+456,0,"take_interrupt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"issue_branch_taken_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"issue_branch_target_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"issue_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+652,0,"issue_opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"issue_operand_ra_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"issue_operand_rb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+461,0,"alu_result_e1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+457,0,"csr_result_value_e1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+287,0,"csr_result_write_e1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+288,0,"csr_result_wdata_e1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+289,0,"csr_result_exception_e1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+532,0,"load_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+533,0,"store_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+534,0,"mul_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+535,0,"branch_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+536,0,"rd_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+537,0,"pc_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+538,0,"opcode_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+539,0,"operand_ra_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+540,0,"operand_rb_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"mem_complete_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"mem_result_e2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+451,0,"mem_exception_e2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+283,0,"mul_result_e2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+541,0,"load_e2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+542,0,"mul_e2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+94,0,"rd_e2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+95,0,"result_e2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+284,0,"div_complete_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+285,0,"div_result_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+13,0,"valid_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"csr_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"rd_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+273,0,"result_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+272,0,"pc_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+543,0,"opcode_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+544,0,"operand_ra_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+545,0,"operand_rb_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"exception_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+455,0,"csr_write_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+458,0,"csr_waddr_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+292,0,"csr_wdata_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+20,0,"stall_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"squash_e1_e2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"squash_e1_e2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"squash_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"squash_e1_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"branch_misaligned_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+551,0,"valid_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+552,0,"ctrl_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+537,0,"pc_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+553,0,"npc_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+538,0,"opcode_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+539,0,"operand_ra_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+540,0,"operand_rb_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+554,0,"exception_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+555,0,"alu_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+556,0,"csr_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+557,0,"div_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+558,0,"valid_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+559,0,"ctrl_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+560,0,"csr_wr_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+561,0,"csr_wdata_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+562,0,"result_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+563,0,"pc_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+564,0,"npc_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+565,0,"opcode_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+566,0,"operand_ra_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+567,0,"operand_rb_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+568,0,"exception_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+95,0,"result_e2_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+99,0,"valid_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+569,0,"load_store_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"exception_e2_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+570,0,"squash_e1_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+571,0,"valid_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+572,0,"ctrl_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+455,0,"csr_wr_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+292,0,"csr_wdata_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+273,0,"result_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+272,0,"pc_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+573,0,"npc_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+543,0,"opcode_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+544,0,"operand_ra_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+545,0,"operand_rb_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"exception_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+10,0,"complete_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_trace_d", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+17,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+437,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+652,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+101,0,"dbg_inst_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+104,0,"dbg_inst_ra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+107,0,"dbg_inst_rb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+110,0,"dbg_inst_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declBus(c+113,0,"dbg_inst_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"dbg_inst_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+677,0,"ra_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+674,0,"rb_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+673,0,"rd_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_trace_wb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+13,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+272,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+543,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+115,0,"dbg_inst_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+118,0,"dbg_inst_ra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+121,0,"dbg_inst_rb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+124,0,"dbg_inst_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declBus(c+127,0,"dbg_inst_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"dbg_inst_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+549,0,"ra_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+550,0,"rb_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+574,0,"rd_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_pipe_dec0_verif", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+13,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+272,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+543,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+129,0,"dbg_inst_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+132,0,"dbg_inst_ra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+135,0,"dbg_inst_rb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+138,0,"dbg_inst_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declBus(c+141,0,"dbg_inst_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"dbg_inst_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+549,0,"ra_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+550,0,"rb_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+574,0,"rd_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_tag0__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_tag1__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_data0__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_data1__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+727,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+734,0,"mem_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+737,0,"mem_data_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+33,0,"mem_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+739,0,"mem_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+279,0,"mem_cacheable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+763,0,"mem_req_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+323,0,"mem_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"mem_writeback_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+334,0,"mem_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+321,0,"outport_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"outport_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"outport_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+730,0,"outport_read_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+664,0,"mem_data_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+30,0,"mem_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+668,0,"mem_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+339,0,"mem_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+332,0,"mem_resp_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+666,0,"outport_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+32,0,"outport_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"outport_len_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+31,0,"outport_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+667,0,"outport_write_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+785,0,"DCACHE_NUM_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+789,0,"DCACHE_NUM_LINES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+790,0,"DCACHE_LINE_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+791,0,"DCACHE_LINE_SIZE_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+792,0,"DCACHE_LINE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+790,0,"DCACHE_LINE_WORDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+791,0,"DCACHE_TAG_REQ_LINE_L",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+793,0,"DCACHE_TAG_REQ_LINE_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+790,0,"DCACHE_TAG_REQ_LINE_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+794,0,"CACHE_TAG_ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+794,0,"CACHE_TAG_DIRTY_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+795,0,"CACHE_TAG_VALID_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+804,0,"CACHE_TAG_DATA_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+796,0,"DCACHE_TAG_CMP_ADDR_L",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+797,0,"DCACHE_TAG_CMP_ADDR_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+794,0,"DCACHE_TAG_CMP_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+805,0,"STATE_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+754,0,"STATE_RESET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+806,0,"STATE_FLUSH_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+807,0,"STATE_FLUSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+808,0,"STATE_LOOKUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+809,0,"STATE_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+810,0,"STATE_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+811,0,"STATE_REFILL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+812,0,"STATE_EVICT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+813,0,"STATE_EVICT_WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+814,0,"STATE_INVALIDATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+815,0,"STATE_WRITEBACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+143,0,"next_state_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+575,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+713,0,"tag_hit_any_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+714,0,"tag0_hit_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+715,0,"tag1_hit_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+220,0,"data0_data_out_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"data1_data_out_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+576,0,"flush_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+577,0,"mem_addr_m_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"mem_data_m_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+579,0,"mem_wr_m_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+580,0,"mem_rd_m_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+332,0,"mem_tag_m_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+581,0,"mem_inval_m_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+582,0,"mem_writeback_m_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+583,0,"mem_flush_m_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"mem_accept_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+584,0,"req_addr_tag_cmp_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+585,0,"replace_way_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+666,0,"pmem_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+32,0,"pmem_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"pmem_len_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+586,0,"pmem_last_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"pmem_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+667,0,"pmem_write_data_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+321,0,"pmem_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"pmem_ack_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"pmem_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+730,0,"pmem_read_data_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+716,0,"evict_way_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+745,0,"tag_dirty_any_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+746,0,"tag_hit_and_dirty_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+587,0,"flushing_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+144,0,"tag_addr_x_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+588,0,"tag_addr_m_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+589,0,"tag_data_in_m_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBit(c+717,0,"tag0_write_m_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+222,0,"tag0_data_out_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->pushPrefix("u_tag0", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_tag0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+223,0,"tag0_valid_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"tag0_dirty_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+225,0,"tag0_addr_bits_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+718,0,"tag1_write_m_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+226,0,"tag1_data_out_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->pushPrefix("u_tag1", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_tag1__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+227,0,"tag1_valid_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"tag1_dirty_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+229,0,"tag1_addr_bits_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+816,0,"EVICT_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+719,0,"evict_way_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+720,0,"evict_data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+721,0,"evict_addr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+721,0,"evict_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+720,0,"evict_data_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+788,0,"CACHE_DATA_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"data_addr_x_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+146,0,"data_addr_m_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+590,0,"data_write_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+722,0,"data0_write_m_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+747,0,"data0_data_in_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_data0", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_data0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+723,0,"data1_write_m_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+747,0,"data1_data_in_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_data1", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_data1__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+591,0,"flush_last_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+664,0,"data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+668,0,"mem_ack_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+592,0,"pmem_rd_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+593,0,"pmem_wr0_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+594,0,"pmem_len_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+595,0,"pmem_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+596,0,"pmem_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+597,0,"pmem_write_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+339,0,"error_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"refill_request_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+748,0,"evict_request_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+598,0,"dbg_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
}

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_icache__u_data0__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_icache__u_data0__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+727,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+428,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+729,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+430,0,"wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+218,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+218,0,"ram_read_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_icache__u_data1__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_icache__u_data1__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+727,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+428,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+729,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+431,0,"wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+219,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"ram_read_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_icache__u_tag0__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_icache__u_tag0__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+727,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+424,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+425,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+426,0,"wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+212,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+212,0,"ram_read_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
}

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_icache__u_tag1__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_icache__u_tag1__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+727,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+424,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+425,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+427,0,"wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+215,0,"ram_read_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
}

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+786,0,"SUPPORT_MULDIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+761,0,"SUPPORT_SUPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+727,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"intr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"opcode_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+652,0,"opcode_opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"opcode_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+22,0,"opcode_invalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+673,0,"opcode_rd_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+677,0,"opcode_ra_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+674,0,"opcode_rb_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+18,0,"opcode_ra_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"opcode_rb_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+455,0,"csr_writeback_write_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+458,0,"csr_writeback_waddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+292,0,"csr_writeback_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"csr_writeback_exception_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+272,0,"csr_writeback_exception_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+273,0,"csr_writeback_exception_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+753,0,"cpu_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+753,0,"reset_vector_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+744,0,"interrupt_inhibit_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+457,0,"csr_result_e1_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+287,0,"csr_result_e1_write_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+288,0,"csr_result_e1_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+289,0,"csr_result_e1_exception_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+439,0,"branch_csr_request_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+442,0,"branch_csr_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+448,0,"branch_csr_priv_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+456,0,"take_interrupt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+454,0,"ifence_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+452,0,"mmu_priv_d_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+460,0,"mmu_sum_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+440,0,"mmu_mxr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+436,0,"mmu_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+453,0,"mmu_satp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+147,0,"ecall_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"ebreak_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"eret_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+724,0,"eret_priv_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+150,0,"csrrw_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"csrrs_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"csrrc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"csrrwi_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"csrrsi_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"csrrci_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"wfi_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"fence_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"sfence_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"ifence_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+290,0,"current_priv_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+725,0,"csr_priv_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+726,0,"csr_readonly_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"csr_write_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"set_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"clr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"csr_fault_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+163,0,"data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+164,0,"satp_update_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"timer_irq_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+817,0,"misa_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+654,0,"csr_rdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+601,0,"csr_branch_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+602,0,"csr_target_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+603,0,"interrupt_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+604,0,"status_reg_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+453,0,"satp_reg_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_csrfile", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+287,0,"rd_valid_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+457,0,"rd_result_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+288,0,"csr_wdata_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+289,0,"exception_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+165,0,"eret_fault_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"take_interrupt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+436,0,"tlb_flush_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+454,0,"ifence_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"branch_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+442,0,"branch_target_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+605,0,"reset_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+786,0,"SUPPORT_MTIMECMP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+761,0,"SUPPORT_SUPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+727,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"ext_intr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"timer_intr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+753,0,"cpu_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+817,0,"misa_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"exception_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+272,0,"exception_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+273,0,"exception_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+21,0,"csr_ren_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+653,0,"csr_raddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+654,0,"csr_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+291,0,"csr_waddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+292,0,"csr_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+601,0,"csr_branch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+602,0,"csr_target_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"priv_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+604,0,"status_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+453,0,"satp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+603,0,"interrupt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+293,0,"csr_mepc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+294,0,"csr_mcause_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+604,0,"csr_sr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+606,0,"csr_mtvec_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+607,0,"csr_mip_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+608,0,"csr_mie_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"csr_mpriv_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+609,0,"csr_mcycle_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+610,0,"csr_mcycle_h_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+611,0,"csr_mscratch_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+612,0,"csr_mtval_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+613,0,"csr_mtimecmp_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+614,0,"csr_mtime_ie_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+615,0,"csr_medeleg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+616,0,"csr_mideleg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+617,0,"csr_sepc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+618,0,"csr_stvec_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+619,0,"csr_scause_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+620,0,"csr_stval_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+453,0,"csr_satp_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+621,0,"csr_sscratch_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+622,0,"irq_pending_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+603,0,"irq_masked_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+799,0,"irq_priv_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+818,0,"m_enabled_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+819,0,"m_interrupts_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+820,0,"s_enabled_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+821,0,"s_interrupts_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+623,0,"irq_priv_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+624,0,"csr_mip_upd_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"buffer_mip_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+654,0,"rdata_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+625,0,"csr_mepc_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+626,0,"csr_mcause_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+627,0,"csr_mtval_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+628,0,"csr_sr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+629,0,"csr_mtvec_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+630,0,"csr_mip_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+631,0,"csr_mie_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+632,0,"csr_mpriv_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+633,0,"csr_mcycle_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+634,0,"csr_mscratch_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+635,0,"csr_mtimecmp_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+636,0,"csr_mtime_ie_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+637,0,"csr_medeleg_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+638,0,"csr_mideleg_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+639,0,"csr_mip_next_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+640,0,"csr_mip_next_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+641,0,"csr_sepc_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+642,0,"csr_stvec_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+643,0,"csr_scause_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+644,0,"csr_stval_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+645,0,"csr_satp_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+646,0,"csr_sscratch_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+647,0,"is_exception_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"exception_s_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+601,0,"branch_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+602,0,"branch_target_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+761,0,"SUPPORT_REGFILE_XILINX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+727,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"rd0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+273,0,"rd0_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+677,0,"ra0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+674,0,"rb0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+711,0,"ra0_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+712,0,"rb0_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+167,0,"x1_debug_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,0,"x2_debug_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"x3_debug_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"x4_debug_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"x5_debug_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"x6_debug_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"x7_debug_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"x8_debug_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"x9_debug_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"x10_debug_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"x11_debug_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"x12_debug_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"x13_debug_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"x14_debug_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"x15_debug_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"x16_debug_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"x17_debug_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"x18_debug_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"x19_debug_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"x20_debug_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"x21_debug_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"x22_debug_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"x23_debug_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"x24_debug_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"x25_debug_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"x26_debug_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"x27_debug_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"x28_debug_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"x29_debug_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"x30_debug_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+197,0,"x31_debug_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("REGFILE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+167,0,"reg_r1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,0,"reg_r2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"reg_r3_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"reg_r4_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"reg_r5_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"reg_r6_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"reg_r7_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"reg_r8_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"reg_r9_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"reg_r10_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"reg_r11_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"reg_r12_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"reg_r13_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"reg_r14_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"reg_r15_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"reg_r16_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"reg_r17_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"reg_r18_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"reg_r19_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"reg_r20_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"reg_r21_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"reg_r22_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"reg_r23_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"reg_r24_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"reg_r25_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"reg_r26_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"reg_r27_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"reg_r28_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"reg_r29_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"reg_r30_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+197,0,"reg_r31_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+753,0,"x0_zero_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+167,0,"x1_ra_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,0,"x2_sp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"x3_gp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"x4_tp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"x5_t0_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"x6_t1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"x7_t2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"x8_s0_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"x9_s1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"x10_a0_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"x11_a1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"x12_a2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"x13_a3_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"x14_a4_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"x15_a5_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"x16_a6_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"x17_a7_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"x18_s2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"x19_s3_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"x20_s4_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"x21_s5_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"x22_s6_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"x23_s7_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"x24_s8_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"x25_s9_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"x26_s10_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"x27_s11_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"x28_t3_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"x29_t4_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"x30_t5_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+197,0,"x31_t6_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+711,0,"ra0_value_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+712,0,"rb0_value_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_data0__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_data0__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+727,0,"clk0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+145,0,"addr0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+753,0,"data0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+754,0,"wr0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+727,0,"clk1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"addr1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+747,0,"data1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+722,0,"wr1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+220,0,"data0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"data1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"ram_read0_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"ram_read1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_data1__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_data1__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+727,0,"clk0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+145,0,"addr0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+753,0,"data0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+754,0,"wr0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+727,0,"clk1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"addr1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+747,0,"data1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+723,0,"wr1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+221,0,"data0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+231,0,"data1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"ram_read0_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+231,0,"ram_read1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_tag0__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_tag0__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+727,0,"clk0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+144,0,"addr0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+727,0,"clk1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+588,0,"addr1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+589,0,"data1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBit(c+717,0,"wr1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+222,0,"data0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+222,0,"ram_read0_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
}

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_tag1__0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_tag1__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+727,0,"clk0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+144,0,"addr0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+727,0,"clk1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"rst1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+588,0,"addr1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+589,0,"data1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBit(c+718,0,"wr1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+226,0,"data0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+226,0,"ram_read0_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
}

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_init_top(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_muldiv_csr_tb___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vriscv_muldiv_csr_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vriscv_muldiv_csr_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vriscv_muldiv_csr_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_register(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_muldiv_csr_tb___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vriscv_muldiv_csr_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vriscv_muldiv_csr_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vriscv_muldiv_csr_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vriscv_muldiv_csr_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_const_0_sub_0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_muldiv_csr_tb___024root__trace_const_0\n"); );
    // Init
    Vriscv_muldiv_csr_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_muldiv_csr_tb___024root*>(voidSelf);
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vriscv_muldiv_csr_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_const_0_sub_0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_muldiv_csr_tb___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+749,(0x80000104U),32);
    bufp->fullIData(oldp+750,(0xbb8U),32);
    bufp->fullBit(oldp+751,(0U));
    bufp->fullBit(oldp+752,(1U));
    bufp->fullIData(oldp+753,(0U),32);
    bufp->fullCData(oldp+754,(0U),4);
    bufp->fullCData(oldp+755,(0U),8);
    bufp->fullCData(oldp+756,(7U),8);
    bufp->fullCData(oldp+757,(0U),2);
    bufp->fullCData(oldp+758,(1U),2);
    bufp->fullIData(oldp+759,(0x400U),32);
    bufp->fullIData(oldp+760,(0xffffffffU),32);
    bufp->fullIData(oldp+761,(0U),32);
    bufp->fullIData(oldp+762,(0xffffU),32);
    bufp->fullSData(oldp+763,(0U),11);
    bufp->fullIData(oldp+764,(0xfe00707fU),32);
    bufp->fullIData(oldp+765,(0x2000033U),32);
    bufp->fullIData(oldp+766,(0x2001033U),32);
    bufp->fullIData(oldp+767,(0x2002033U),32);
    bufp->fullIData(oldp+768,(0x2003033U),32);
    bufp->fullIData(oldp+769,(0x2004033U),32);
    bufp->fullIData(oldp+770,(0x2005033U),32);
    bufp->fullIData(oldp+771,(0x2006033U),32);
    bufp->fullIData(oldp+772,(0x2007033U),32);
    bufp->fullIData(oldp+773,(0x707fU),32);
    bufp->fullIData(oldp+774,(0x1073U),32);
    bufp->fullIData(oldp+775,(0x2073U),32);
    bufp->fullIData(oldp+776,(0x3073U),32);
    bufp->fullIData(oldp+777,(0x5073U),32);
    bufp->fullIData(oldp+778,(0x6073U),32);
    bufp->fullIData(oldp+779,(0x7073U),32);
    bufp->fullCData(oldp+780,(0x12U),6);
    bufp->fullIData(oldp+781,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__mul_ra_e0),32);
    bufp->fullIData(oldp+782,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__mul_rb_e0),32);
    bufp->fullBit(oldp+783,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__mul_valid_e0));
    bufp->fullIData(oldp+784,(0x4dU),32);
    bufp->fullIData(oldp+785,(2U),32);
    bufp->fullIData(oldp+786,(1U),32);
    bufp->fullIData(oldp+787,(0x46U),32);
    bufp->fullIData(oldp+788,(0xbU),32);
    bufp->fullIData(oldp+789,(0x100U),32);
    bufp->fullIData(oldp+790,(8U),32);
    bufp->fullIData(oldp+791,(5U),32);
    bufp->fullIData(oldp+792,(0x20U),32);
    bufp->fullIData(oldp+793,(0xcU),32);
    bufp->fullIData(oldp+794,(0x13U),32);
    bufp->fullIData(oldp+795,(0x14U),32);
    bufp->fullIData(oldp+796,(0xdU),32);
    bufp->fullIData(oldp+797,(0x1fU),32);
    bufp->fullCData(oldp+798,(2U),2);
    bufp->fullCData(oldp+799,(3U),2);
    bufp->fullIData(oldp+800,(0x24U),32);
    bufp->fullIData(oldp+801,(3U),32);
    bufp->fullIData(oldp+802,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_b_ra_value_w),32);
    bufp->fullIData(oldp+803,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_b_rb_value_w),32);
    bufp->fullIData(oldp+804,(0x15U),32);
    bufp->fullIData(oldp+805,(4U),32);
    bufp->fullCData(oldp+806,(1U),4);
    bufp->fullCData(oldp+807,(2U),4);
    bufp->fullCData(oldp+808,(3U),4);
    bufp->fullCData(oldp+809,(4U),4);
    bufp->fullCData(oldp+810,(5U),4);
    bufp->fullCData(oldp+811,(6U),4);
    bufp->fullCData(oldp+812,(7U),4);
    bufp->fullCData(oldp+813,(8U),4);
    bufp->fullCData(oldp+814,(9U),4);
    bufp->fullCData(oldp+815,(0xaU),4);
    bufp->fullIData(oldp+816,(0x1bU),32);
    bufp->fullIData(oldp+817,(0x40001100U),32);
    bufp->fullBit(oldp+818,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__m_enabled_r));
    bufp->fullIData(oldp+819,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__m_interrupts_r),32);
    bufp->fullBit(oldp+820,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__s_enabled_r));
    bufp->fullIData(oldp+821,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__s_interrupts_r),32);
}

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_full_0_sub_0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_muldiv_csr_tb___024root__trace_full_0\n"); );
    // Init
    Vriscv_muldiv_csr_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_muldiv_csr_tb___024root*>(voidSelf);
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vriscv_muldiv_csr_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vriscv_muldiv_csr_tb___024root__trace_full_0_sub_0(Vriscv_muldiv_csr_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vriscv_muldiv_csr_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_muldiv_csr_tb___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    bufp->fullIData(oldp+1,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_mux__DOT__cache_access_q)
                              ? vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__data_r
                              : vlSymsp->TOP__riscv_muldiv_csr_tb__d_memory.__PVT__rdata_o)),32);
    bufp->fullCData(oldp+2,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__pmem_select_w)
                              ? ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__VdfgRegularize_h82da71bd_1_2)
                                  ? 7U : 0U) : 0U)),8);
    bufp->fullIData(oldp+3,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__pmem_select_w)
                              ? vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__pmem_addr_w
                              : (0xfffffffcU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                                 [vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][0U]))),32);
    __Vtemp_1[0U] = (IData)((((QData)((IData)(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__pmem_select_w)
                                                ? vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__pmem_write_data_w
                                                : vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                                               [vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][1U]))) 
                              << 0x20U) | (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__pmem_select_w)
                                                            ? vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__pmem_addr_w
                                                            : 
                                                           (0xfffffffcU 
                                                            & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                                                            [vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][0U]))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__pmem_select_w)
                                                 ? vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__pmem_write_data_w
                                                 : 
                                                vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                                                [vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][1U]))) 
                               << 0x20U) | (QData)((IData)(
                                                           ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__pmem_select_w)
                                                             ? vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__pmem_addr_w
                                                             : 
                                                            (0xfffffffcU 
                                                             & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                                                             [vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][0U]))))) 
                             >> 0x20U));
    __Vtemp_1[2U] = ((((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__pmem_select_w)
                        ? ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__VdfgRegularize_h82da71bd_1_2)
                            ? 7U : 0U) : 0U) << 5U) 
                     | (((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_pmem_mux__DOT__outport_rd_r) 
                         << 4U) | (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_pmem_mux__DOT__outport_wr_r)));
    bufp->fullWData(oldp+4,(__Vtemp_1),77);
    bufp->fullIData(oldp+7,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__PVT__branch_q)
                              ? vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__PVT__branch_target_q
                              : vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__branch_target_r)),32);
    bufp->fullBit(oldp+8,((((~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__mem_accept_o)) 
                            & ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_writeback_q) 
                               | ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_flush_q) 
                                  | ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_invalidate_q) 
                                     | ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__mem_d_rd_o) 
                                        | (0U != (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__mem_d_wr_o))))))) 
                           | ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__delay_lsu_e2_w) 
                              | (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_unaligned_e1_q)))));
    bufp->fullBit(oldp+9,((1U & ((~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__stall_w)) 
                                 & ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_wb_q) 
                                    >> 3U)))));
    bufp->fullBit(oldp+10,(((~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__stall_w)) 
                            & ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_wb_q) 
                               >> 9U))));
    bufp->fullBit(oldp+11,(((6U != (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__state_q)) 
                            & (6U == (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__next_state_r)))));
    bufp->fullBit(oldp+12,((((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                             & ((0x344U == (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w 
                                            >> 0x14U)) 
                                | (0x144U == (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w 
                                              >> 0x14U)))) 
                            | (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mip_upd_q))));
    bufp->fullBit(oldp+13,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__pipe_valid_wb_w));
    bufp->fullCData(oldp+14,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__pipe_rd_wb_w),5);
    bufp->fullBit(oldp+15,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__mem_accept_o));
    bufp->fullBit(oldp+16,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__mem_i_rd_o));
    bufp->fullBit(oldp+17,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__opcode_issue_r));
    bufp->fullIData(oldp+18,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r),32);
    bufp->fullIData(oldp+19,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r),32);
    bufp->fullBit(oldp+20,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__stall_w));
    bufp->fullBit(oldp+21,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o));
    bufp->fullBit(oldp+22,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__csr_opcode_invalid_o));
    bufp->fullQData(oldp+23,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__mul_full_product_e0),64);
    bufp->fullQData(oldp+25,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__unnamedblk1__DOT__a33),33);
    bufp->fullQData(oldp+27,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__unnamedblk1__DOT__b33),33);
    bufp->fullCData(oldp+29,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__VdfgRegularize_h82da71bd_1_2)
                               ? 7U : 0U)),8);
    bufp->fullBit(oldp+30,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__mem_accept_r));
    bufp->fullIData(oldp+31,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__pmem_addr_w),32);
    bufp->fullBit(oldp+32,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__pmem_rd_w));
    bufp->fullBit(oldp+33,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__mem_cached_rd_w));
    bufp->fullBit(oldp+34,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_pmem_mux__DOT__outport_rd_r));
    bufp->fullCData(oldp+35,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__mem_uncached_wr_w),4);
    bufp->fullBit(oldp+36,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__mem_uncached_rd_w));
    bufp->fullBit(oldp+37,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+38,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_mux__DOT__request_w));
    bufp->fullCData(oldp+39,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_mux__DOT__pending_r),5);
    bufp->fullBit(oldp+40,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__request_w));
    bufp->fullBit(oldp+41,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__req_push_w));
    bufp->fullBit(oldp+42,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__res_push_w));
    bufp->fullBit(oldp+43,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__mem_d_rd_o));
    bufp->fullCData(oldp+44,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__mem_d_wr_o),4);
    bufp->fullBit(oldp+45,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__fetch_accept_o));
    bufp->fullBit(oldp+46,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__branch_request_o));
    bufp->fullBit(oldp+47,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__writeback_mem_valid_w));
    bufp->fullBit(oldp+48,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__branch_d_exec_request_w));
    bufp->fullIData(oldp+49,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__wb_result_r),32);
    bufp->fullIData(oldp+50,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__branch_target_r),32);
    bufp->fullBit(oldp+51,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_div__DOT__div_start_w));
    bufp->fullIData(oldp+52,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__alu_input_a_r),32);
    bufp->fullIData(oldp+53,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__alu_input_b_r),32);
    bufp->fullIData(oldp+54,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__u_alu__DOT__result_r),32);
    bufp->fullIData(oldp+55,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__less_than_signed__Vstatic__v),32);
    bufp->fullIData(oldp+56,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__greater_than_signed__Vstatic__v),32);
    bufp->fullBit(oldp+57,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__branch_r));
    bufp->fullBit(oldp+58,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__branch_taken_r));
    bufp->fullBit(oldp+59,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__branch_call_r));
    bufp->fullBit(oldp+60,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__branch_ret_r));
    bufp->fullBit(oldp+61,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__branch_jmp_r));
    bufp->fullSData(oldp+62,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_right_fill_r),16);
    bufp->fullIData(oldp+63,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_right_1_r),32);
    bufp->fullIData(oldp+64,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_right_2_r),32);
    bufp->fullIData(oldp+65,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_right_4_r),32);
    bufp->fullIData(oldp+66,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_right_8_r),32);
    bufp->fullIData(oldp+67,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_left_1_r),32);
    bufp->fullIData(oldp+68,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_left_2_r),32);
    bufp->fullIData(oldp+69,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_left_4_r),32);
    bufp->fullIData(oldp+70,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__u_alu__DOT__shift_left_8_r),32);
    bufp->fullIData(oldp+71,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__u_alu__DOT__sub_res_w),32);
    bufp->fullBit(oldp+72,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_fetch__DOT__stall_w));
    bufp->fullBit(oldp+73,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__issue_lsu_e1_w));
    bufp->fullBit(oldp+74,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__complete_ok_e2_w));
    bufp->fullBit(oldp+75,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__complete_err_e2_w));
    bufp->fullBit(oldp+76,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__delay_lsu_e2_w));
    bufp->fullIData(oldp+77,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_addr_r),32);
    bufp->fullBit(oldp+78,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_unaligned_r));
    bufp->fullIData(oldp+79,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_data_r),32);
    bufp->fullBit(oldp+80,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_rd_r));
    bufp->fullCData(oldp+81,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_wr_r),4);
    bufp->fullCData(oldp+82,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__addr_lsb_r),2);
    bufp->fullBit(oldp+83,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__load_byte_r));
    bufp->fullBit(oldp+84,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__load_half_r));
    bufp->fullBit(oldp+85,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__load_signed_r));
    bufp->fullBit(oldp+86,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.u_lsu__DOT____Vcellinp__u_lsu_request__push_i));
    bufp->fullQData(oldp+87,(((0x2002033U == (0xfe00707fU 
                                              & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w))
                               ? (QData)((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r))
                               : ((0x2001033U == (0xfe00707fU 
                                                  & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w))
                                   ? (((QData)((IData)(
                                                       (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r 
                                                        >> 0x1fU))) 
                                       << 0x20U) | (QData)((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r)))
                                   : (QData)((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_rb_value_r))))),33);
    bufp->fullQData(oldp+89,(((0x2002033U == (0xfe00707fU 
                                              & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w))
                               ? vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.u_mul__DOT____VdfgRegularize_h4f118b46_0_3
                               : ((0x2001033U == (0xfe00707fU 
                                                  & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w))
                                   ? vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.u_mul__DOT____VdfgRegularize_h4f118b46_0_3
                                   : (QData)((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_ra_value_r))))),33);
    bufp->fullBit(oldp+91,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__pipe_squash_e1_e2_w));
    bufp->fullBit(oldp+92,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__opcode_valid_w));
    bufp->fullBit(oldp+93,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__opcode_accept_r));
    bufp->fullCData(oldp+94,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__pipe_rd_e2_w),5);
    bufp->fullIData(oldp+95,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_e2_r),32);
    bufp->fullIData(oldp+96,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__scoreboard_r),32);
    bufp->fullBit(oldp+97,((0U != (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_e2_r))));
    bufp->fullBit(oldp+98,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__branch_d_exec_request_w) 
                            & (0U != (3U & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__branch_target_r)))));
    bufp->fullBit(oldp+99,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__valid_e2_w));
    bufp->fullCData(oldp+100,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_e2_r),6);
    bufp->fullWData(oldp+101,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_str),80);
    bufp->fullWData(oldp+104,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_ra),80);
    bufp->fullWData(oldp+107,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rb),80);
    bufp->fullWData(oldp+110,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_rd),80);
    bufp->fullIData(oldp+113,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_imm),32);
    bufp->fullIData(oldp+114,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_d__DOT__dbg_inst_pc),32);
    bufp->fullWData(oldp+115,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_str),80);
    bufp->fullWData(oldp+118,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_ra),80);
    bufp->fullWData(oldp+121,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rb),80);
    bufp->fullWData(oldp+124,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_rd),80);
    bufp->fullIData(oldp+127,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_imm),32);
    bufp->fullIData(oldp+128,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__u_trace_wb__DOT__dbg_inst_pc),32);
    bufp->fullWData(oldp+129,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_str),80);
    bufp->fullWData(oldp+132,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_ra),80);
    bufp->fullWData(oldp+135,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rb),80);
    bufp->fullWData(oldp+138,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_rd),80);
    bufp->fullIData(oldp+141,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_imm),32);
    bufp->fullIData(oldp+142,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_dec0_verif__DOT__dbg_inst_pc),32);
    bufp->fullCData(oldp+143,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__next_state_r),4);
    bufp->fullCData(oldp+144,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__tag_addr_x_r),8);
    bufp->fullSData(oldp+145,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__data_addr_x_r),11);
    bufp->fullSData(oldp+146,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__data_addr_m_r),11);
    bufp->fullBit(oldp+147,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                             & (0x73U == vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w))));
    bufp->fullBit(oldp+148,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                             & (0x100073U == vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w))));
    bufp->fullBit(oldp+149,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                             & (0x200073U == (0xcfffffffU 
                                              & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)))));
    bufp->fullBit(oldp+150,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__PVT__csrrw_w));
    bufp->fullBit(oldp+151,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                             & (0x2073U == (0x707fU 
                                            & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)))));
    bufp->fullBit(oldp+152,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                             & (0x3073U == (0x707fU 
                                            & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)))));
    bufp->fullBit(oldp+153,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__PVT__csrrwi_w));
    bufp->fullBit(oldp+154,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__PVT__csrrsi_w));
    bufp->fullBit(oldp+155,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__PVT__csrrci_w));
    bufp->fullBit(oldp+156,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                             & (0x10500073U == (0xffff8fffU 
                                                & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)))));
    bufp->fullBit(oldp+157,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__csr_opcode_valid_o) 
                             & (0xfU == (0x707fU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)))));
    bufp->fullBit(oldp+158,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__PVT__sfence_w));
    bufp->fullBit(oldp+159,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__PVT__ifence_w));
    bufp->fullBit(oldp+160,(((IData)(((0U != (0xf8000U 
                                              & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                      | (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__PVT__csrrw_w))) 
                             | (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__PVT__csrrwi_w))));
    bufp->fullBit(oldp+161,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__VdfgExtracted_h8b06e925__0));
    bufp->fullBit(oldp+162,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__VdfgExtracted_hefcb34c3__0));
    bufp->fullIData(oldp+163,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__PVT__data_r),32);
    bufp->fullBit(oldp+164,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__PVT__satp_update_w));
    bufp->fullBit(oldp+165,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__PVT__eret_fault_w));
    bufp->fullIData(oldp+166,(vlSymsp->TOP__riscv_muldiv_csr_tb.__PVT__cycles),32);
    bufp->fullIData(oldp+167,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r1_q),32);
    bufp->fullIData(oldp+168,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r2_q),32);
    bufp->fullIData(oldp+169,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r3_q),32);
    bufp->fullIData(oldp+170,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r4_q),32);
    bufp->fullIData(oldp+171,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r5_q),32);
    bufp->fullIData(oldp+172,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r6_q),32);
    bufp->fullIData(oldp+173,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r7_q),32);
    bufp->fullIData(oldp+174,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r8_q),32);
    bufp->fullIData(oldp+175,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r9_q),32);
    bufp->fullIData(oldp+176,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r10_q),32);
    bufp->fullIData(oldp+177,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r11_q),32);
    bufp->fullIData(oldp+178,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r12_q),32);
    bufp->fullIData(oldp+179,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r13_q),32);
    bufp->fullIData(oldp+180,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r14_q),32);
    bufp->fullIData(oldp+181,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r15_q),32);
    bufp->fullIData(oldp+182,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r16_q),32);
    bufp->fullIData(oldp+183,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r17_q),32);
    bufp->fullIData(oldp+184,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r18_q),32);
    bufp->fullIData(oldp+185,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r19_q),32);
    bufp->fullIData(oldp+186,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r20_q),32);
    bufp->fullIData(oldp+187,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r21_q),32);
    bufp->fullIData(oldp+188,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r22_q),32);
    bufp->fullIData(oldp+189,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r23_q),32);
    bufp->fullIData(oldp+190,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r24_q),32);
    bufp->fullIData(oldp+191,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r25_q),32);
    bufp->fullIData(oldp+192,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r26_q),32);
    bufp->fullIData(oldp+193,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r27_q),32);
    bufp->fullIData(oldp+194,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r28_q),32);
    bufp->fullIData(oldp+195,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r29_q),32);
    bufp->fullIData(oldp+196,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r30_q),32);
    bufp->fullIData(oldp+197,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r31_q),32);
    bufp->fullBit(oldp+198,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__CHK_017_mul_result_valid_seen));
    bufp->fullBit(oldp+199,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__CHK_018_mul_hold_stable_seen));
    bufp->fullBit(oldp+200,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__CHK_019_mulh_signed_seen));
    bufp->fullBit(oldp+201,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__CHK_020_mulhu_unsigned_seen));
    bufp->fullBit(oldp+202,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__CHK_021_mulhsu_mixed_seen));
    bufp->fullBit(oldp+203,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__CHK_022_mul_zero_id_seen));
    bufp->fullBit(oldp+204,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__CHK_023_div_by_zero_seen));
    bufp->fullBit(oldp+205,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__CHK_024_div_overflow_seen));
    bufp->fullBit(oldp+206,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__CHK_025_div_result_correct_seen));
    bufp->fullBit(oldp+207,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__CHK_026_div_busy_no_new_issue_seen));
    bufp->fullBit(oldp+208,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__CHK_027_div_valid_pulse_seen));
    bufp->fullBit(oldp+209,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__CHK_028_csr_write_readback_seen));
    bufp->fullBit(oldp+210,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__CHK_029_illegal_csr_exception_seen));
    bufp->fullBit(oldp+211,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__CHK_030_mepc_capture_seen));
    bufp->fullIData(oldp+212,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache__u_tag0.__PVT__ram_read_q),20);
    bufp->fullBit(oldp+213,((1U & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache__u_tag0.__PVT__ram_read_q 
                                   >> 0x13U))));
    bufp->fullIData(oldp+214,((0x7ffffU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache__u_tag0.__PVT__ram_read_q)),19);
    bufp->fullIData(oldp+215,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache__u_tag1.__PVT__ram_read_q),20);
    bufp->fullBit(oldp+216,((1U & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache__u_tag1.__PVT__ram_read_q 
                                   >> 0x13U))));
    bufp->fullIData(oldp+217,((0x7ffffU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache__u_tag1.__PVT__ram_read_q)),19);
    bufp->fullIData(oldp+218,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache__u_data0.__PVT__ram_read_q),32);
    bufp->fullIData(oldp+219,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache__u_data1.__PVT__ram_read_q),32);
    bufp->fullIData(oldp+220,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_data0.__PVT__ram_read0_q),32);
    bufp->fullIData(oldp+221,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_data1.__PVT__ram_read0_q),32);
    bufp->fullIData(oldp+222,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_tag0.__PVT__ram_read0_q),21);
    bufp->fullBit(oldp+223,((1U & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_tag0.__PVT__ram_read0_q 
                                   >> 0x14U))));
    bufp->fullBit(oldp+224,((1U & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_tag0.__PVT__ram_read0_q 
                                   >> 0x13U))));
    bufp->fullIData(oldp+225,((0x7ffffU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_tag0.__PVT__ram_read0_q)),19);
    bufp->fullIData(oldp+226,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_tag1.__PVT__ram_read0_q),21);
    bufp->fullBit(oldp+227,((1U & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_tag1.__PVT__ram_read0_q 
                                   >> 0x14U))));
    bufp->fullBit(oldp+228,((1U & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_tag1.__PVT__ram_read0_q 
                                   >> 0x13U))));
    bufp->fullIData(oldp+229,((0x7ffffU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_tag1.__PVT__ram_read0_q)),19);
    bufp->fullIData(oldp+230,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_data0.__PVT__ram_read1_q),32);
    bufp->fullIData(oldp+231,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_data1.__PVT__ram_read1_q),32);
    bufp->fullBit(oldp+232,(vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.__PVT__awready_o));
    bufp->fullBit(oldp+233,(vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.__PVT__write_active));
    bufp->fullBit(oldp+234,(vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.__PVT__bvalid_o));
    bufp->fullBit(oldp+235,((1U & (~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.__PVT__read_active)))));
    bufp->fullBit(oldp+236,(vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.__PVT__read_active));
    bufp->fullBit(oldp+237,(vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.__PVT__rlast_o));
    bufp->fullIData(oldp+238,((0xffffffe0U & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache.__PVT__lookup_addr_q)),32);
    bufp->fullCData(oldp+239,(vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.__PVT__bid_o),4);
    bufp->fullCData(oldp+240,(vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.__PVT__read_id),4);
    bufp->fullBit(oldp+241,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__axi_awvalid_o));
    bufp->fullBit(oldp+242,(vlSymsp->TOP__riscv_muldiv_csr_tb__d_memory.__PVT__awready_o));
    bufp->fullBit(oldp+243,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__axi_wvalid_o));
    bufp->fullBit(oldp+244,(vlSymsp->TOP__riscv_muldiv_csr_tb__d_memory.__PVT__wready_o));
    bufp->fullBit(oldp+245,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__axi_wlast_o));
    bufp->fullBit(oldp+246,(vlSymsp->TOP__riscv_muldiv_csr_tb__d_memory.__PVT__bvalid_o));
    bufp->fullBit(oldp+247,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__axi_arvalid_o));
    bufp->fullBit(oldp+248,((1U & (~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__d_memory.__PVT__read_active)))));
    bufp->fullBit(oldp+249,(vlSymsp->TOP__riscv_muldiv_csr_tb__d_memory.__PVT__read_active));
    bufp->fullBit(oldp+250,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__d_memory.__PVT__read_active) 
                             & (0U == (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__d_memory.__PVT__read_left)))));
    bufp->fullIData(oldp+251,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__axi_awaddr_o),32);
    bufp->fullIData(oldp+252,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__axi_wdata_o),32);
    bufp->fullCData(oldp+253,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__axi_awid_o),4);
    bufp->fullCData(oldp+254,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__axi_wstrb_o),4);
    bufp->fullCData(oldp+255,(vlSymsp->TOP__riscv_muldiv_csr_tb__d_memory.__PVT__bid_o),4);
    bufp->fullCData(oldp+256,(vlSymsp->TOP__riscv_muldiv_csr_tb__d_memory.__PVT__read_id),4);
    bufp->fullCData(oldp+257,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__axi_awlen_o),8);
    bufp->fullCData(oldp+258,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__valid_q)
                                ? (3U & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__buf_q[1U] 
                                         >> 0xdU)) : 1U)),2);
    bufp->fullBit(oldp+259,(vlSymsp->TOP__riscv_muldiv_csr_tb__d_memory.__PVT__result_valid_o));
    bufp->fullIData(oldp+260,(vlSymsp->TOP__riscv_muldiv_csr_tb__d_memory.__PVT__result_data_o),32);
    bufp->fullIData(oldp+261,(vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.__PVT__read_bursts_o),32);
    bufp->fullIData(oldp+262,(vlSymsp->TOP__riscv_muldiv_csr_tb__d_memory.__PVT__read_bursts_o),32);
    bufp->fullIData(oldp+263,(vlSymsp->TOP__riscv_muldiv_csr_tb__d_memory.__PVT__write_words_o),32);
    bufp->fullBit(oldp+264,(vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.__PVT__result_valid_o));
    bufp->fullIData(oldp+265,(vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.__PVT__result_data_o),32);
    bufp->fullIData(oldp+266,(vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.__PVT__write_words_o),32);
    bufp->fullIData(oldp+267,(vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.__PVT__read_addr),32);
    bufp->fullCData(oldp+268,(vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.__PVT__read_left),8);
    bufp->fullIData(oldp+269,(vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.__PVT__write_addr),32);
    bufp->fullCData(oldp+270,(vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.__PVT__write_id),4);
    bufp->fullIData(oldp+271,(vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.__PVT__active_write_addr),32);
    bufp->fullIData(oldp+272,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__pc_wb_q),32);
    bufp->fullIData(oldp+273,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_wb_q),32);
    bufp->fullBit(oldp+274,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__PVT__ifence_q) 
                             | (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_fetch__DOT__icache_invalidate_q))));
    bufp->fullBit(oldp+275,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_flush_q));
    bufp->fullBit(oldp+276,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_invalidate_q));
    bufp->fullSData(oldp+277,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_mux__DOT__cache_access_q)
                                ? (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__mem_tag_m_q)
                                : vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__ram_q
                               [vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__rd_ptr_q])),11);
    bufp->fullBit(oldp+278,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_writeback_q));
    bufp->fullBit(oldp+279,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_cacheable_q));
    bufp->fullBit(oldp+280,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache.__PVT__axi_error_q));
    bufp->fullIData(oldp+281,((0xfffffffcU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_fetch__DOT__pc_f_q)),32);
    bufp->fullBit(oldp+282,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__mem_error_o));
    bufp->fullIData(oldp+283,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_mul__DOT__result_e2_q),32);
    bufp->fullBit(oldp+284,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_div__DOT__valid_q));
    bufp->fullIData(oldp+285,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_div__DOT__wb_result_q),32);
    bufp->fullBit(oldp+286,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_div__DOT__div_busy_q));
    bufp->fullBit(oldp+287,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__PVT__rd_valid_e1_q));
    bufp->fullIData(oldp+288,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__PVT__csr_wdata_e1_q),32);
    bufp->fullCData(oldp+289,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__PVT__exception_e1_q),6);
    bufp->fullCData(oldp+290,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mpriv_q),2);
    bufp->fullSData(oldp+291,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__Vcellinp__u_csrfile__csr_waddr_i),12);
    bufp->fullIData(oldp+292,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_wb_q),32);
    bufp->fullIData(oldp+293,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mepc_q),32);
    bufp->fullIData(oldp+294,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mcause_q),32);
    bufp->fullCData(oldp+295,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q),6);
    bufp->fullIData(oldp+296,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__mul_expect_e1),32);
    bufp->fullIData(oldp+297,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__mul_expect_e2),32);
    bufp->fullBit(oldp+298,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__mul_expect_valid_e1));
    bufp->fullBit(oldp+299,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__mul_expect_valid_e2));
    bufp->fullIData(oldp+300,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__div_ra_latched),32);
    bufp->fullIData(oldp+301,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__div_rb_latched),32);
    bufp->fullBit(oldp+302,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__div_is_div_latched));
    bufp->fullBit(oldp+303,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__div_is_divu_latched));
    bufp->fullBit(oldp+304,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__div_is_rem_latched));
    bufp->fullBit(oldp+305,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__div_is_remu_latched));
    bufp->fullBit(oldp+306,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__div_pending));
    bufp->fullIData(oldp+307,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__div_ref_q),32);
    bufp->fullIData(oldp+308,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__div_ref_r),32);
    bufp->fullIData(oldp+309,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__divu_ref_q),32);
    bufp->fullIData(oldp+310,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__divu_ref_r),32);
    bufp->fullSData(oldp+311,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__csr_last_waddr_q),12);
    bufp->fullIData(oldp+312,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__csr_last_wdata_q),32);
    bufp->fullBit(oldp+313,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.__PVT__muldiv_csr_sva_checker__DOT__csr_write_pending_q));
    bufp->fullIData(oldp+314,(vlSymsp->TOP__riscv_muldiv_csr_tb__d_memory.__PVT__read_addr),32);
    bufp->fullCData(oldp+315,(vlSymsp->TOP__riscv_muldiv_csr_tb__d_memory.__PVT__read_left),8);
    bufp->fullBit(oldp+316,(vlSymsp->TOP__riscv_muldiv_csr_tb__d_memory.__PVT__write_active));
    bufp->fullIData(oldp+317,(vlSymsp->TOP__riscv_muldiv_csr_tb__d_memory.__PVT__write_addr),32);
    bufp->fullCData(oldp+318,(vlSymsp->TOP__riscv_muldiv_csr_tb__d_memory.__PVT__write_id),4);
    bufp->fullIData(oldp+319,(vlSymsp->TOP__riscv_muldiv_csr_tb__d_memory.__PVT__active_write_addr),32);
    bufp->fullBit(oldp+320,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.u_mux__DOT____VdfgRegularize_ha7b7af01_2_1) 
                             & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_invalidate_q))));
    bufp->fullBit(oldp+321,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__pmem_cache_accept_w));
    bufp->fullBit(oldp+322,(((2U != (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__count_q)) 
                             & (2U != (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__count_q)))));
    bufp->fullBit(oldp+323,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__mem_cached_invalidate_w));
    bufp->fullBit(oldp+324,(((~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_pmem_mux__DOT__select_q)) 
                             & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__pmem_ack_w))));
    bufp->fullBit(oldp+325,(((~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__pmem_select_w)) 
                             & (2U != (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__u_req__DOT__count_q)))));
    bufp->fullBit(oldp+326,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__pmem_cache_ack_w));
    bufp->fullBit(oldp+327,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__mem_uncached_ack_w));
    bufp->fullBit(oldp+328,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__pmem_ack_w));
    bufp->fullIData(oldp+329,((0xfffffffcU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                               [vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][0U])),32);
    bufp->fullBit(oldp+330,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.u_mux__DOT____VdfgRegularize_ha7b7af01_2_1) 
                             & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_flush_q))));
    bufp->fullCData(oldp+331,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__pmem_uncached_wr_w),4);
    bufp->fullSData(oldp+332,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__mem_tag_m_q),11);
    bufp->fullBit(oldp+333,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__pmem_select_w));
    bufp->fullBit(oldp+334,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__mem_cached_flush_w));
    bufp->fullBit(oldp+335,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.u_mux__DOT____VdfgRegularize_ha7b7af01_2_1) 
                             & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_writeback_q))));
    bufp->fullIData(oldp+336,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                              [vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][1U]),32);
    bufp->fullSData(oldp+337,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__ram_q
                              [vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__rd_ptr_q]),11);
    bufp->fullBit(oldp+338,((2U != (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__u_req__DOT__count_q))));
    bufp->fullBit(oldp+339,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__error_q));
    bufp->fullBit(oldp+340,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__pmem_uncached_rd_w));
    bufp->fullBit(oldp+341,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__mem_cached_writeback_w));
    bufp->fullBit(oldp+342,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__accept_w));
    bufp->fullBit(oldp+343,((2U != (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__resp_outstanding_q))));
    bufp->fullBit(oldp+344,((0U != (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__resp_outstanding_q))));
    bufp->fullBit(oldp+345,((0U != (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__u_req__DOT__count_q))));
    bufp->fullWData(oldp+346,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__u_req__DOT__ram_q
                              [vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q]),77);
    bufp->fullBit(oldp+349,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__req_can_issue_w));
    bufp->fullBit(oldp+350,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__req_can_issue_w) 
                             & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.u_axi__DOT____VdfgRegularize_h8a1a94ad_3_0))));
    bufp->fullBit(oldp+351,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__req_is_write_w));
    bufp->fullCData(oldp+352,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__req_len_w),8);
    bufp->fullCData(oldp+353,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__req_cnt_q),8);
    bufp->fullBit(oldp+354,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__req_is_write_w) 
                             & ((0U == (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__req_len_w)) 
                                & (0U == (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__req_cnt_q))))));
    bufp->fullBit(oldp+355,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__res_push_w));
    bufp->fullBit(oldp+356,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__resp_pop_w));
    bufp->fullCData(oldp+357,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__resp_outstanding_q),2);
    bufp->fullIData(oldp+358,((0xfffffffcU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__u_req__DOT__ram_q
                               [vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q][0U])),32);
    bufp->fullIData(oldp+359,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__u_req__DOT__ram_q
                              [vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q][1U]),32);
    bufp->fullCData(oldp+360,((0xfU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__u_req__DOT__ram_q
                               [vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q][2U])),4);
    bufp->fullCData(oldp+361,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__req_cnt_q),8);
    bufp->fullBit(oldp+362,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__valid_q));
    bufp->fullWData(oldp+363,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__buf_q),84);
    bufp->fullBit(oldp+366,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__inport_valid_w));
    bufp->fullBit(oldp+367,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__inport_write_w));
    bufp->fullBit(oldp+368,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__awvalid_q));
    bufp->fullBit(oldp+369,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__wvalid_q));
    bufp->fullBit(oldp+370,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__wlast_q));
    bufp->fullBit(oldp+371,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__wr_cmd_accepted_w));
    bufp->fullBit(oldp+372,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__wr_data_accepted_w));
    bufp->fullBit(oldp+373,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__wr_data_last_w));
    bufp->fullWData(oldp+374,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__u_req__DOT__ram_q[0]),77);
    bufp->fullWData(oldp+377,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__u_req__DOT__ram_q[1]),77);
    bufp->fullBit(oldp+380,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q));
    bufp->fullBit(oldp+381,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__u_req__DOT__wr_ptr_q));
    bufp->fullCData(oldp+382,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_axi__DOT__u_req__DOT__count_q),2);
    bufp->fullBit(oldp+383,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_mux__DOT__hold_w));
    bufp->fullBit(oldp+384,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_mux__DOT__cache_access_q));
    bufp->fullCData(oldp+385,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_mux__DOT__pending_q),5);
    bufp->fullBit(oldp+386,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_pmem_mux__DOT__select_q));
    bufp->fullBit(oldp+387,((2U != (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__count_q))));
    bufp->fullBit(oldp+388,((2U != (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__count_q))));
    bufp->fullBit(oldp+389,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__request_complete_w));
    bufp->fullBit(oldp+390,((0U != (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__count_q))));
    bufp->fullWData(oldp+391,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                              [vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q]),70);
    bufp->fullBit(oldp+394,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__drop_req_w));
    bufp->fullBit(oldp+395,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__request_pending_q));
    bufp->fullBit(oldp+396,(((~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__mem_uncached_ack_w)) 
                             & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__request_pending_q))));
    bufp->fullBit(oldp+397,(((~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.u_uncached__DOT____VdfgRegularize_hf17169b5_1_0)) 
                             & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.u_uncached__DOT____VdfgRegularize_hf17169b5_1_1))));
    bufp->fullBit(oldp+398,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__req_is_drop_w));
    bufp->fullBit(oldp+399,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__dropped_q));
    bufp->fullWData(oldp+400,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q[0]),70);
    bufp->fullWData(oldp+403,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q[1]),70);
    bufp->fullBit(oldp+406,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q));
    bufp->fullBit(oldp+407,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__wr_ptr_q));
    bufp->fullCData(oldp+408,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__count_q),2);
    bufp->fullBit(oldp+409,((0U != (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__count_q))));
    bufp->fullSData(oldp+410,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__ram_q[0]),11);
    bufp->fullSData(oldp+411,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__ram_q[1]),11);
    bufp->fullBit(oldp+412,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__rd_ptr_q));
    bufp->fullBit(oldp+413,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__wr_ptr_q));
    bufp->fullCData(oldp+414,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__count_q),2);
    bufp->fullCData(oldp+415,((0xffU & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_fetch__DOT__pc_f_q 
                                        >> 5U))),8);
    bufp->fullSData(oldp+416,((0x7ffU & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_fetch__DOT__pc_f_q 
                                         >> 2U))),11);
    bufp->fullCData(oldp+417,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache.__PVT__state_q),2);
    bufp->fullCData(oldp+418,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache.__PVT__flush_addr_q),8);
    bufp->fullBit(oldp+419,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache.__PVT__invalidate_q));
    bufp->fullBit(oldp+420,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache.__PVT__replace_way_q));
    bufp->fullBit(oldp+421,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache.__PVT__lookup_valid_q));
    bufp->fullIData(oldp+422,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache.__PVT__lookup_addr_q),32);
    bufp->fullIData(oldp+423,((vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache.__PVT__lookup_addr_q 
                               >> 0xdU)),19);
    bufp->fullCData(oldp+424,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache.__PVT__tag_addr_r),8);
    bufp->fullIData(oldp+425,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache.__PVT__tag_data_in_r),20);
    bufp->fullBit(oldp+426,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache.__PVT__tag0_write_r));
    bufp->fullBit(oldp+427,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache.__PVT__tag1_write_r));
    bufp->fullSData(oldp+428,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache.__PVT__data_addr_r),11);
    bufp->fullSData(oldp+429,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache.__PVT__data_write_addr_q),11);
    bufp->fullBit(oldp+430,(((~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache.__PVT__replace_way_q)) 
                             & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.__PVT__read_active))));
    bufp->fullBit(oldp+431,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.__PVT__read_active) 
                             & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache.__PVT__replace_way_q))));
    bufp->fullBit(oldp+432,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache.__PVT__axi_arvalid_q));
    bufp->fullIData(oldp+433,((0xfffffffcU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_addr_q)),32);
    bufp->fullIData(oldp+434,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_data_wr_q),32);
    bufp->fullCData(oldp+435,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_fetch__DOT__priv_f_q),2);
    bufp->fullBit(oldp+436,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__PVT__tlb_flush_q));
    bufp->fullIData(oldp+437,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_pc_w),32);
    bufp->fullIData(oldp+438,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__pc_m_q),32);
    bufp->fullBit(oldp+439,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__PVT__branch_q));
    bufp->fullBit(oldp+440,((1U & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_sr_q 
                                   >> 0x13U))));
    bufp->fullBit(oldp+441,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__branch_ret_q));
    bufp->fullIData(oldp+442,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__PVT__branch_target_q),32);
    bufp->fullBit(oldp+443,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_fault_page_w));
    bufp->fullBit(oldp+444,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__branch_ntaken_q));
    bufp->fullIData(oldp+445,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__pc_x_q),32);
    bufp->fullBit(oldp+446,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__branch_taken_q));
    bufp->fullBit(oldp+447,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_dec_fault_fetch_w));
    bufp->fullCData(oldp+448,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__PVT__branch_csr_priv_o),2);
    bufp->fullBit(oldp+449,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__branch_ntaken_q) 
                             | (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__branch_taken_q))));
    bufp->fullCData(oldp+450,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__PVT__branch_q)
                                ? (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__PVT__branch_csr_priv_o)
                                : (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__priv_x_q))),2);
    bufp->fullCData(oldp+451,((((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_unaligned_e2_q) 
                                & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__resp_load_w))
                                ? 0x14U : (((~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__resp_load_w)) 
                                            & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_unaligned_e2_q))
                                            ? 0x16U
                                            : (((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__mem_error_o) 
                                                & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__resp_load_w))
                                                ? 0x15U
                                                : (
                                                   ((~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__resp_load_w)) 
                                                    & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__mem_error_o))
                                                    ? 0x17U
                                                    : 0U))))),6);
    bufp->fullCData(oldp+452,((3U & ((0x20000U & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_sr_q)
                                      ? (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_sr_q 
                                         >> 0xbU) : (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mpriv_q)))),2);
    bufp->fullIData(oldp+453,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_satp_q),32);
    bufp->fullBit(oldp+454,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__PVT__ifence_q));
    bufp->fullBit(oldp+455,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wr_wb_q));
    bufp->fullBit(oldp+456,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__PVT__take_interrupt_q));
    bufp->fullIData(oldp+457,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__PVT__rd_result_e1_q),32);
    bufp->fullSData(oldp+458,((vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                               >> 0x14U)),12);
    bufp->fullBit(oldp+459,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__branch_jmp_q));
    bufp->fullBit(oldp+460,((1U & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_sr_q 
                                   >> 0x12U))));
    bufp->fullIData(oldp+461,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__result_q),32);
    bufp->fullBit(oldp+462,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__branch_call_q));
    bufp->fullBit(oldp+463,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.u_decode__DOT____Vcellinp__genblk1__DOT__u_dec__fetch_fault_i));
    bufp->fullIData(oldp+464,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_div__DOT__dividend_q),32);
    bufp->fullQData(oldp+465,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_div__DOT__divisor_q),63);
    bufp->fullIData(oldp+467,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_div__DOT__quotient_q),32);
    bufp->fullIData(oldp+468,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_div__DOT__q_mask_q),32);
    bufp->fullBit(oldp+469,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_div__DOT__div_inst_q));
    bufp->fullBit(oldp+470,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_div__DOT__invert_res_q));
    bufp->fullBit(oldp+471,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_div__DOT__div_complete_w));
    bufp->fullIData(oldp+472,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_div__DOT__div_inst_q)
                                ? ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_div__DOT__invert_res_q)
                                    ? (- vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_div__DOT__quotient_q)
                                    : vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_div__DOT__quotient_q)
                                : ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_div__DOT__invert_res_q)
                                    ? (- vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_div__DOT__dividend_q)
                                    : vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_div__DOT__dividend_q))),32);
    bufp->fullBit(oldp+473,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_fetch__DOT__active_q));
    bufp->fullBit(oldp+474,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_fetch__DOT__branch_q));
    bufp->fullIData(oldp+475,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_fetch__DOT__branch_pc_q),32);
    bufp->fullCData(oldp+476,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_fetch__DOT__branch_priv_q),2);
    bufp->fullBit(oldp+477,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_fetch__DOT__stall_q));
    bufp->fullBit(oldp+478,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_fetch__DOT__icache_fetch_q));
    bufp->fullBit(oldp+479,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_fetch__DOT__icache_invalidate_q));
    bufp->fullIData(oldp+480,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_fetch__DOT__pc_f_q),32);
    bufp->fullIData(oldp+481,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_fetch__DOT__pc_d_q),32);
    bufp->fullBit(oldp+482,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_fetch__DOT__branch_d_q) 
                             | (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_fetch__DOT__branch_q))));
    bufp->fullBit(oldp+483,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_fetch__DOT__branch_d_q));
    bufp->fullWData(oldp+484,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_fetch__DOT__skid_buffer_q),66);
    bufp->fullBit(oldp+487,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_fetch__DOT__skid_valid_q));
    bufp->fullIData(oldp+488,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_addr_q),32);
    bufp->fullBit(oldp+489,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_rd_q));
    bufp->fullCData(oldp+490,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_wr_q),4);
    bufp->fullBit(oldp+491,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_unaligned_e1_q));
    bufp->fullBit(oldp+492,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_unaligned_e2_q));
    bufp->fullBit(oldp+493,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_load_q));
    bufp->fullBit(oldp+494,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_xb_q));
    bufp->fullBit(oldp+495,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_xh_q));
    bufp->fullBit(oldp+496,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_ls_q));
    bufp->fullBit(oldp+497,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__pending_lsu_e2_q));
    bufp->fullBit(oldp+498,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__resp_load_w));
    bufp->fullIData(oldp+499,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__resp_addr_w),32);
    bufp->fullBit(oldp+500,((1U & (IData)((vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                                           [vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                           >> 1U)))));
    bufp->fullBit(oldp+501,((1U & (IData)((vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                                           [vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                           >> 2U)))));
    bufp->fullBit(oldp+502,((1U & (IData)((vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                                           [vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                           >> 3U)))));
    bufp->fullBit(oldp+503,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_unaligned_e2_q) 
                             & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__resp_load_w))));
    bufp->fullBit(oldp+504,(((~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__resp_load_w)) 
                             & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_unaligned_e2_q))));
    bufp->fullBit(oldp+505,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__mem_error_o) 
                             & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__resp_load_w))));
    bufp->fullBit(oldp+506,(((~ (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__resp_load_w)) 
                             & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__mem_error_o))));
    bufp->fullQData(oldp+507,((((QData)((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_addr_q)) 
                                << 4U) | (QData)((IData)(
                                                         ((((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_ls_q) 
                                                            << 3U) 
                                                           | ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_xh_q) 
                                                              << 2U)) 
                                                          | (((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_xb_q) 
                                                              << 1U) 
                                                             | (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__mem_load_q))))))),36);
    bufp->fullQData(oldp+509,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                              [vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q]),36);
    bufp->fullBit(oldp+511,((2U != (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q))));
    bufp->fullBit(oldp+512,((0U != (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q))));
    bufp->fullQData(oldp+513,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q[0]),36);
    bufp->fullQData(oldp+515,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q[1]),36);
    bufp->fullBit(oldp+517,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q));
    bufp->fullBit(oldp+518,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q));
    bufp->fullCData(oldp+519,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q),2);
    bufp->fullIData(oldp+520,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__i),32);
    bufp->fullIData(oldp+521,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_mul__DOT__result_e3_q),32);
    bufp->fullQData(oldp+522,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_mul__DOT__operand_a_e1_q),33);
    bufp->fullQData(oldp+524,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_mul__DOT__operand_b_e1_q),33);
    bufp->fullBit(oldp+526,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_mul__DOT__mulhi_sel_e1_q));
    bufp->fullWData(oldp+527,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_mul__DOT__mult_result_w),65);
    bufp->fullIData(oldp+530,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_mul__DOT__mulhi_sel_e1_q)
                                ? vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_mul__DOT__mult_result_w[1U]
                                : vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_mul__DOT__mult_result_w[0U])),32);
    bufp->fullCData(oldp+531,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__priv_x_q),2);
    bufp->fullBit(oldp+532,((1U & ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+533,((1U & ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+534,((1U & ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                                   >> 5U))));
    bufp->fullBit(oldp+535,((1U & ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                                   >> 6U))));
    bufp->fullCData(oldp+536,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__pipe_rd_e1_w),5);
    bufp->fullIData(oldp+537,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__pc_e1_q),32);
    bufp->fullIData(oldp+538,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_e1_q),32);
    bufp->fullIData(oldp+539,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__operand_ra_e1_q),32);
    bufp->fullIData(oldp+540,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__operand_rb_e1_q),32);
    bufp->fullBit(oldp+541,((1U & ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e2_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+542,((1U & ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e2_q) 
                                   >> 5U))));
    bufp->fullIData(oldp+543,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_wb_q),32);
    bufp->fullIData(oldp+544,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__operand_ra_wb_q),32);
    bufp->fullIData(oldp+545,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__operand_rb_wb_q),32);
    bufp->fullCData(oldp+546,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__issue_fault_w),6);
    bufp->fullBit(oldp+547,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__div_pending_q));
    bufp->fullBit(oldp+548,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__csr_pending_q));
    bufp->fullCData(oldp+549,((0x1fU & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+550,((0x1fU & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+551,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__valid_e1_q));
    bufp->fullSData(oldp+552,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q),10);
    bufp->fullIData(oldp+553,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__npc_e1_q),32);
    bufp->fullCData(oldp+554,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_e1_q),6);
    bufp->fullBit(oldp+555,((1U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q))));
    bufp->fullBit(oldp+556,((1U & ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+557,((1U & ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e1_q) 
                                   >> 4U))));
    bufp->fullBit(oldp+558,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__valid_e2_q));
    bufp->fullSData(oldp+559,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_e2_q),10);
    bufp->fullBit(oldp+560,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wr_e2_q));
    bufp->fullIData(oldp+561,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__csr_wdata_e2_q),32);
    bufp->fullIData(oldp+562,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__result_e2_q),32);
    bufp->fullIData(oldp+563,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__pc_e2_q),32);
    bufp->fullIData(oldp+564,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__npc_e2_q),32);
    bufp->fullIData(oldp+565,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_e2_q),32);
    bufp->fullIData(oldp+566,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__operand_ra_e2_q),32);
    bufp->fullIData(oldp+567,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__operand_rb_e2_q),32);
    bufp->fullCData(oldp+568,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_e2_q),6);
    bufp->fullBit(oldp+569,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__load_store_e2_w));
    bufp->fullBit(oldp+570,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__squash_e1_e2_q));
    bufp->fullBit(oldp+571,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__valid_wb_q));
    bufp->fullSData(oldp+572,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__ctrl_wb_q),10);
    bufp->fullIData(oldp+573,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__npc_wb_q),32);
    bufp->fullCData(oldp+574,((0x1fU & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__opcode_wb_q 
                                        >> 7U))),5);
    bufp->fullCData(oldp+575,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__state_q),4);
    bufp->fullCData(oldp+576,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__flush_addr_q),8);
    bufp->fullIData(oldp+577,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__mem_addr_m_q),32);
    bufp->fullIData(oldp+578,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__mem_data_m_q),32);
    bufp->fullCData(oldp+579,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__mem_wr_m_q),4);
    bufp->fullBit(oldp+580,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__mem_rd_m_q));
    bufp->fullBit(oldp+581,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__mem_inval_m_q));
    bufp->fullBit(oldp+582,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__mem_writeback_m_q));
    bufp->fullBit(oldp+583,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__mem_flush_m_q));
    bufp->fullIData(oldp+584,((vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__mem_addr_m_q 
                               >> 0xdU)),19);
    bufp->fullBit(oldp+585,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__replace_way_q));
    bufp->fullBit(oldp+586,((0U == (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__pmem_len_q))));
    bufp->fullBit(oldp+587,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__flushing_q));
    bufp->fullCData(oldp+588,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__tag_addr_m_r),8);
    bufp->fullIData(oldp+589,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__tag_data_in_m_r),21);
    bufp->fullSData(oldp+590,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__data_write_addr_q),11);
    bufp->fullBit(oldp+591,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__flush_last_q));
    bufp->fullBit(oldp+592,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__pmem_rd_q));
    bufp->fullBit(oldp+593,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__pmem_wr0_q));
    bufp->fullCData(oldp+594,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__pmem_len_q),8);
    bufp->fullIData(oldp+595,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__pmem_addr_q),32);
    bufp->fullCData(oldp+596,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__pmem_wr_q),4);
    bufp->fullIData(oldp+597,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__pmem_write_data_q),32);
    bufp->fullWData(oldp+598,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__dbg_state),80);
    bufp->fullBit(oldp+601,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__branch_r));
    bufp->fullIData(oldp+602,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__branch_target_r),32);
    bufp->fullIData(oldp+603,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__irq_masked_r),32);
    bufp->fullIData(oldp+604,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_sr_q),32);
    bufp->fullBit(oldp+605,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr.__PVT__reset_q));
    bufp->fullIData(oldp+606,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mtvec_q),32);
    bufp->fullIData(oldp+607,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mip_q),32);
    bufp->fullIData(oldp+608,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mie_q),32);
    bufp->fullIData(oldp+609,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mcycle_q),32);
    bufp->fullIData(oldp+610,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mcycle_h_q),32);
    bufp->fullIData(oldp+611,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mscratch_q),32);
    bufp->fullIData(oldp+612,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mtval_q),32);
    bufp->fullIData(oldp+613,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mtimecmp_q),32);
    bufp->fullBit(oldp+614,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mtime_ie_q));
    bufp->fullIData(oldp+615,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_medeleg_q),32);
    bufp->fullIData(oldp+616,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mideleg_q),32);
    bufp->fullIData(oldp+617,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_sepc_q),32);
    bufp->fullIData(oldp+618,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_stvec_q),32);
    bufp->fullIData(oldp+619,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_scause_q),32);
    bufp->fullIData(oldp+620,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_stval_q),32);
    bufp->fullIData(oldp+621,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_sscratch_q),32);
    bufp->fullIData(oldp+622,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__irq_pending_r),32);
    bufp->fullCData(oldp+623,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__irq_priv_q),2);
    bufp->fullBit(oldp+624,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mip_upd_q));
    bufp->fullIData(oldp+625,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mepc_r),32);
    bufp->fullIData(oldp+626,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mcause_r),32);
    bufp->fullIData(oldp+627,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mtval_r),32);
    bufp->fullIData(oldp+628,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_sr_r),32);
    bufp->fullIData(oldp+629,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mtvec_r),32);
    bufp->fullIData(oldp+630,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mip_r),32);
    bufp->fullIData(oldp+631,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mie_r),32);
    bufp->fullCData(oldp+632,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mpriv_r),2);
    bufp->fullIData(oldp+633,(((IData)(1U) + vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mcycle_q)),32);
    bufp->fullIData(oldp+634,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mscratch_r),32);
    bufp->fullIData(oldp+635,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mtimecmp_r),32);
    bufp->fullBit(oldp+636,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mtime_ie_r));
    bufp->fullIData(oldp+637,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_medeleg_r),32);
    bufp->fullIData(oldp+638,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mideleg_r),32);
    bufp->fullIData(oldp+639,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mip_next_q),32);
    bufp->fullIData(oldp+640,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_mip_next_r),32);
    bufp->fullIData(oldp+641,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_sepc_r),32);
    bufp->fullIData(oldp+642,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_stvec_r),32);
    bufp->fullIData(oldp+643,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_scause_r),32);
    bufp->fullIData(oldp+644,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_stval_r),32);
    bufp->fullIData(oldp+645,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_satp_r),32);
    bufp->fullIData(oldp+646,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__csr_sscratch_r),32);
    bufp->fullBit(oldp+647,((0x10U == (0x30U & (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__u_pipe_ctrl__DOT__exception_wb_q)))));
    bufp->fullBit(oldp+648,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache.__PVT__axi_arvalid_o));
    bufp->fullBit(oldp+649,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache.__PVT__req_valid_o));
    bufp->fullIData(oldp+650,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache.__PVT__inst_r),32);
    bufp->fullBit(oldp+651,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache.__PVT__req_accept_o));
    bufp->fullIData(oldp+652,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w),32);
    bufp->fullSData(oldp+653,((vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+654,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_csr__u_csrfile.__PVT__rdata_r),32);
    bufp->fullBit(oldp+655,((0x2000033U == (0xfe00707fU 
                                            & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w))));
    bufp->fullBit(oldp+656,((0x2001033U == (0xfe00707fU 
                                            & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w))));
    bufp->fullBit(oldp+657,((0x2002033U == (0xfe00707fU 
                                            & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w))));
    bufp->fullBit(oldp+658,((0x2003033U == (0xfe00707fU 
                                            & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w))));
    bufp->fullBit(oldp+659,((0x2004033U == (0xfe00707fU 
                                            & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w))));
    bufp->fullBit(oldp+660,((0x2005033U == (0xfe00707fU 
                                            & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w))));
    bufp->fullBit(oldp+661,((0x2006033U == (0xfe00707fU 
                                            & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w))));
    bufp->fullBit(oldp+662,((0x2007033U == (0xfe00707fU 
                                            & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w))));
    bufp->fullBit(oldp+663,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__mem_ack_o));
    bufp->fullIData(oldp+664,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__data_r),32);
    bufp->fullCData(oldp+665,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_pmem_mux__DOT__outport_wr_r),4);
    bufp->fullCData(oldp+666,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__pmem_wr_w),4);
    bufp->fullIData(oldp+667,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__pmem_write_data_w),32);
    bufp->fullBit(oldp+668,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__mem_ack_r));
    bufp->fullCData(oldp+669,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache.__PVT__next_state_r),2);
    bufp->fullBit(oldp+670,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache.__PVT__tag0_hit_w));
    bufp->fullBit(oldp+671,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache.__PVT__tag1_hit_w));
    bufp->fullBit(oldp+672,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_icache.__PVT__tag_hit_any_w));
    bufp->fullCData(oldp+673,((0x1fU & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w 
                                        >> 7U))),5);
    bufp->fullCData(oldp+674,((0x1fU & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+675,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_mul_w));
    bufp->fullBit(oldp+676,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_invalid_w));
    bufp->fullCData(oldp+677,((0x1fU & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w 
                                        >> 0xfU))),5);
    bufp->fullBit(oldp+678,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_dec_valid_w));
    bufp->fullBit(oldp+679,(((3U == (0x707fU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)) 
                             | ((0x1003U == (0x707fU 
                                             & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                | ((0x2003U == (0x707fU 
                                                & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                   | ((0x4003U == (0x707fU 
                                                   & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                      | ((0x5003U == 
                                          (0x707fU 
                                           & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                         | ((0x6003U 
                                             == (0x707fU 
                                                 & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                            | ((0x23U 
                                                == 
                                                (0x707fU 
                                                 & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                               | ((0x1023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                                  | (0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w))))))))))));
    bufp->fullBit(oldp+680,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_57) 
                             | ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_64) 
                                | ((0x4063U == (0x707fU 
                                                & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                   | ((0x5063U == (0x707fU 
                                                   & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                      | (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.u_decode__DOT__genblk1__DOT__u_dec__DOT____VdfgRegularize_h97a258c1_0_63)))))));
    bufp->fullBit(oldp+681,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_exec_w));
    bufp->fullBit(oldp+682,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_csr_w));
    bufp->fullIData(oldp+683,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_dec_instr_w),32);
    bufp->fullBit(oldp+684,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_div_w));
    bufp->fullBit(oldp+685,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_rd_valid_w));
    bufp->fullBit(oldp+686,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_div__DOT__div_operation_w) 
                             | ((0x2006033U == (0xfe00707fU 
                                                & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                | (0x2007033U == (0xfe00707fU 
                                                  & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w))))));
    bufp->fullBit(oldp+687,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_div__DOT__signed_operation_w));
    bufp->fullBit(oldp+688,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_div__DOT__div_operation_w));
    bufp->fullIData(oldp+689,((0xfffff000U & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)),32);
    bufp->fullIData(oldp+690,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__imm12_r),32);
    bufp->fullIData(oldp+691,((((- (IData)((vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w 
                                            >> 0x1fU))) 
                                << 0xdU) | (((0x1000U 
                                              & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w 
                                                 >> 0x13U)) 
                                             | (0x800U 
                                                & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w 
                                                   << 4U))) 
                                            | ((0x7e0U 
                                                & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w 
                                                     >> 7U)))))),32);
    bufp->fullIData(oldp+692,((((- (IData)((vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w 
                                            >> 0x1fU))) 
                                << 0x14U) | (((0xff000U 
                                               & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w) 
                                              | (0x800U 
                                                 & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w 
                                                    >> 9U))) 
                                             | ((0x7e0U 
                                                 & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w 
                                                      >> 0x14U)))))),32);
    bufp->fullCData(oldp+693,((0x1fU & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+694,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_exec__DOT__alu_func_r),4);
    bufp->fullBit(oldp+695,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_fetch__DOT__icache_busy_w));
    bufp->fullBit(oldp+696,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__load_inst_w));
    bufp->fullBit(oldp+697,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__load_signed_inst_w));
    bufp->fullBit(oldp+698,(((0x23U == (0x707fU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)) 
                             | ((0x1023U == (0x707fU 
                                             & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                | (0x2023U == (0x707fU 
                                               & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w))))));
    bufp->fullBit(oldp+699,(((3U == (0x707fU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)) 
                             | (0x4003U == (0x707fU 
                                            & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)))));
    bufp->fullBit(oldp+700,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__req_lh_w));
    bufp->fullBit(oldp+701,(((0x2003U == (0x707fU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)) 
                             | (0x6003U == (0x707fU 
                                            & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)))));
    bufp->fullBit(oldp+702,((0x23U == (0x707fU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w))));
    bufp->fullBit(oldp+703,((0x1023U == (0x707fU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w))));
    bufp->fullBit(oldp+704,((0x2023U == (0x707fU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w))));
    bufp->fullBit(oldp+705,(((0x2023U == (0x707fU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)) 
                             | ((0x2003U == (0x707fU 
                                             & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)) 
                                | (0x6003U == (0x707fU 
                                               & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w))))));
    bufp->fullBit(oldp+706,(((0x1023U == (0x707fU & vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w)) 
                             | (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__req_lh_w))));
    bufp->fullBit(oldp+707,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__dcache_flush_w));
    bufp->fullBit(oldp+708,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__dcache_writeback_w));
    bufp->fullBit(oldp+709,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_lsu__DOT__dcache_invalidate_w));
    bufp->fullBit(oldp+710,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__u_mul__DOT__mult_inst_w));
    bufp->fullIData(oldp+711,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__ra0_value_r),32);
    bufp->fullIData(oldp+712,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__rb0_value_r),32);
    bufp->fullBit(oldp+713,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__tag_hit_any_m_w));
    bufp->fullBit(oldp+714,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__tag0_hit_m_w));
    bufp->fullBit(oldp+715,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__tag1_hit_m_w));
    bufp->fullBit(oldp+716,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__evict_way_w));
    bufp->fullBit(oldp+717,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__tag0_write_m_r));
    bufp->fullBit(oldp+718,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__tag1_write_m_r));
    bufp->fullBit(oldp+719,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__evict_way_r));
    bufp->fullIData(oldp+720,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__evict_data_r),32);
    bufp->fullIData(oldp+721,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__evict_addr_r),27);
    bufp->fullCData(oldp+722,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__data0_write_m_r),4);
    bufp->fullCData(oldp+723,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__data1_write_m_r),4);
    bufp->fullCData(oldp+724,((3U & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w 
                                     >> 0x1cU))),2);
    bufp->fullCData(oldp+725,((3U & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w 
                                     >> 0x1cU))),2);
    bufp->fullBit(oldp+726,((3U == (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_w 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+727,(vlSymsp->TOP__riscv_muldiv_csr_tb.__PVT__clk));
    bufp->fullBit(oldp+728,(vlSymsp->TOP__riscv_muldiv_csr_tb.__PVT__rst));
    bufp->fullIData(oldp+729,(vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.__PVT__rdata_o),32);
    bufp->fullIData(oldp+730,(vlSymsp->TOP__riscv_muldiv_csr_tb__d_memory.__PVT__rdata_o),32);
    bufp->fullIData(oldp+731,(vlSymsp->TOP__riscv_muldiv_csr_tb__i_memory.__PVT__i),32);
    bufp->fullBit(oldp+732,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.dcache_ack_w));
    bufp->fullBit(oldp+733,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.dcache_rd_w));
    bufp->fullIData(oldp+734,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.dcache_addr_w),32);
    bufp->fullIData(oldp+735,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.dcache_data_rd_w),32);
    bufp->fullCData(oldp+736,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.dcache_wr_w),4);
    bufp->fullIData(oldp+737,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.dcache_data_wr_w),32);
    bufp->fullIData(oldp+738,(vlSymsp->TOP__riscv_muldiv_csr_tb__d_memory.__PVT__i),32);
    bufp->fullCData(oldp+739,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.u_mux__DOT____VdfgRegularize_ha7b7af01_2_4)
                                ? (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.dcache_wr_w)
                                : 0U)),4);
    bufp->fullIData(oldp+740,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__pmem_select_w)
                                ? vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__pmem_write_data_w
                                : vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                               [vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][1U])),32);
    __Vtemp_2[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.dcache_data_wr_w)) 
                              << 0x20U) | (QData)((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.dcache_addr_w))));
    __Vtemp_2[1U] = (IData)(((((QData)((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.dcache_data_wr_w)) 
                               << 0x20U) | (QData)((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut.dcache_addr_w))) 
                             >> 0x20U));
    __Vtemp_2[2U] = (((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__u_uncached__DOT__drop_req_w) 
                      << 5U) | (((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__mem_uncached_rd_w) 
                                 << 4U) | (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache.__PVT__mem_uncached_wr_w)));
    bufp->fullWData(oldp+741,(__Vtemp_2),70);
    bufp->fullBit(oldp+744,(((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core__u_issue.__PVT__csr_pending_q) 
                             | (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_core.__PVT__fetch_instr_csr_w))));
    bufp->fullBit(oldp+745,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__tag_dirty_any_m_w));
    bufp->fullBit(oldp+746,((((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__tag0_hit_m_w) 
                              & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_tag0.__PVT__ram_read0_q 
                                 >> 0x13U)) | ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__tag1_hit_m_w) 
                                               & (vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core__u_tag1.__PVT__ram_read0_q 
                                                  >> 0x13U)))));
    bufp->fullIData(oldp+747,(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__data0_data_in_m_w),32);
    bufp->fullBit(oldp+748,(((7U == (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__state_q)) 
                             & ((IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__evict_way_w) 
                                | (IData)(vlSymsp->TOP__riscv_muldiv_csr_tb__dut__u_dcache__u_core.__PVT__mem_writeback_m_q)))));
}
