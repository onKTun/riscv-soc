`timescale 1ns/1ps

// Cosim harness: riscv_top + axi_memory_model glued together as one Verilator top module, so the C++ wrapper (cosim_cpu_rtl) only deals
// with clk/rst/intr and the debug ports - never raw AXI beats.
//
// STATUS: design-complete, NOT YET BUILT/ELABORATED. See
// knowledge_capture.md Session 4 for the memory-topology decision
// (split I/D memory, matching testbench/top_cache_axi/top_cache_axi_tb.v's
// existing pattern) and Sessions 2-4 for the retire_*/debug_x* ports this
// harness passes through (already added to riscv_top.v and confirmed
// lint-clean by Claude Code + verified by direct diff review).
module cosim_harness (
    input  clk_i,
    input  rst_i,
    input  intr_i,
    input  [31:0] reset_vector_i,

    output          retire_valid_o,
    output [ 4:0]   retire_rd_o,
    output [31:0]   retire_pc_o,
    output [31:0]   retire_value_o,
    output [31:0]   debug_x1_o,  output [31:0]   debug_x2_o,
    output [31:0]   debug_x3_o,  output [31:0]   debug_x4_o,
    output [31:0]   debug_x5_o,  output [31:0]   debug_x6_o,
    output [31:0]   debug_x7_o,  output [31:0]   debug_x8_o,
    output [31:0]   debug_x9_o,  output [31:0]   debug_x10_o,
    output [31:0]   debug_x11_o, output [31:0]   debug_x12_o,
    output [31:0]   debug_x13_o, output [31:0]   debug_x14_o,
    output [31:0]   debug_x15_o, output [31:0]   debug_x16_o,
    output [31:0]   debug_x17_o, output [31:0]   debug_x18_o,
    output [31:0]   debug_x19_o, output [31:0]   debug_x20_o,
    output [31:0]   debug_x21_o, output [31:0]   debug_x22_o,
    output [31:0]   debug_x23_o, output [31:0]   debug_x24_o,
    output [31:0]   debug_x25_o, output [31:0]   debug_x26_o,
    output [31:0]   debug_x27_o, output [31:0]   debug_x28_o,
    output [31:0]   debug_x29_o, output [31:0]   debug_x30_o,
    output [31:0]   debug_x31_o

    // Decision (Session 7, confirmed with Kevin): Verilator public
    // annotation, NOT top-level ports. dcache_addr_w/dcache_data_wr_w/
    // dcache_rd_w/dcache_wr_w/dcache_ack_w/dcache_data_rd_w are marked
    // `/* verilator public */` at their declaration inside riscv_top.v
    // (see riscv_top_public_annotations.patch alongside this file). No
    // port-list change is needed here or in u_top's instantiation below —
    // the C++ wrapper reaches them directly via the hierarchical path
    // m_dut->u_top->dcache_addr_w, etc., exactly like it already does for
    // u_imem->mem[]/u_dmem->mem[] once those get the same treatment.
);

wire [31:0] axi_i_awaddr, axi_i_wdata, axi_i_araddr, axi_i_rdata;
wire [3:0]  axi_i_awid, axi_i_wstrb, axi_i_arid, axi_i_bid, axi_i_rid;
wire [7:0]  axi_i_awlen, axi_i_arlen;
wire [1:0]  axi_i_awburst, axi_i_arburst, axi_i_bresp, axi_i_rresp;
wire        axi_i_awvalid, axi_i_awready, axi_i_wvalid, axi_i_wready,
            axi_i_wlast, axi_i_bvalid, axi_i_bready, axi_i_arvalid,
            axi_i_arready, axi_i_rvalid, axi_i_rready, axi_i_rlast;

wire [31:0] axi_d_awaddr, axi_d_wdata, axi_d_araddr, axi_d_rdata;
wire [3:0]  axi_d_awid, axi_d_wstrb, axi_d_arid, axi_d_bid, axi_d_rid;
wire [7:0]  axi_d_awlen, axi_d_arlen;
wire [1:0]  axi_d_awburst, axi_d_arburst, axi_d_bresp, axi_d_rresp;
wire        axi_d_awvalid, axi_d_awready, axi_d_wvalid, axi_d_wready,
            axi_d_wlast, axi_d_bvalid, axi_d_bready, axi_d_arvalid,
            axi_d_arready, axi_d_rvalid, axi_d_rready, axi_d_rlast;

riscv_top
#( .CORE_ID(0), .MEM_CACHE_ADDR_MIN(0), .MEM_CACHE_ADDR_MAX(32'hffffffff) )
u_top
(
    .clk_i(clk_i), .rst_i(rst_i), .intr_i(intr_i),
    .reset_vector_i(reset_vector_i),

    // I-side AXI <-> u_imem
    .axi_i_awready_i(axi_i_awready), .axi_i_wready_i(axi_i_wready),
    .axi_i_bvalid_i(axi_i_bvalid),   .axi_i_bresp_i(axi_i_bresp),
    .axi_i_bid_i(axi_i_bid),         .axi_i_arready_i(axi_i_arready),
    .axi_i_rvalid_i(axi_i_rvalid),   .axi_i_rdata_i(axi_i_rdata),
    .axi_i_rresp_i(axi_i_rresp),     .axi_i_rid_i(axi_i_rid),
    .axi_i_rlast_i(axi_i_rlast),
    .axi_i_awvalid_o(axi_i_awvalid), .axi_i_awaddr_o(axi_i_awaddr),
    .axi_i_awid_o(axi_i_awid),       .axi_i_awlen_o(axi_i_awlen),
    .axi_i_awburst_o(axi_i_awburst), .axi_i_wvalid_o(axi_i_wvalid),
    .axi_i_wdata_o(axi_i_wdata),     .axi_i_wstrb_o(axi_i_wstrb),
    .axi_i_wlast_o(axi_i_wlast),     .axi_i_bready_o(axi_i_bready),
    .axi_i_arvalid_o(axi_i_arvalid), .axi_i_araddr_o(axi_i_araddr),
    .axi_i_arid_o(axi_i_arid),       .axi_i_arlen_o(axi_i_arlen),
    .axi_i_arburst_o(axi_i_arburst), .axi_i_rready_o(axi_i_rready),

    // D-side AXI <-> u_dmem
    .axi_d_awready_i(axi_d_awready), .axi_d_wready_i(axi_d_wready),
    .axi_d_bvalid_i(axi_d_bvalid),   .axi_d_bresp_i(axi_d_bresp),
    .axi_d_bid_i(axi_d_bid),         .axi_d_arready_i(axi_d_arready),
    .axi_d_rvalid_i(axi_d_rvalid),   .axi_d_rdata_i(axi_d_rdata),
    .axi_d_rresp_i(axi_d_rresp),     .axi_d_rid_i(axi_d_rid),
    .axi_d_rlast_i(axi_d_rlast),
    .axi_d_awvalid_o(axi_d_awvalid), .axi_d_awaddr_o(axi_d_awaddr),
    .axi_d_awid_o(axi_d_awid),       .axi_d_awlen_o(axi_d_awlen),
    .axi_d_awburst_o(axi_d_awburst), .axi_d_wvalid_o(axi_d_wvalid),
    .axi_d_wdata_o(axi_d_wdata),     .axi_d_wstrb_o(axi_d_wstrb),
    .axi_d_wlast_o(axi_d_wlast),     .axi_d_bready_o(axi_d_bready),
    .axi_d_arvalid_o(axi_d_arvalid), .axi_d_araddr_o(axi_d_araddr),
    .axi_d_arid_o(axi_d_arid),       .axi_d_arlen_o(axi_d_arlen),
    .axi_d_arburst_o(axi_d_arburst), .axi_d_rready_o(axi_d_rready),

    .retire_valid_o(retire_valid_o), .retire_rd_o(retire_rd_o),
    .retire_pc_o(retire_pc_o),       .retire_value_o(retire_value_o),
    .debug_x1_o(debug_x1_o),   .debug_x2_o(debug_x2_o),
    .debug_x3_o(debug_x3_o),   .debug_x4_o(debug_x4_o),
    .debug_x5_o(debug_x5_o),   .debug_x6_o(debug_x6_o),
    .debug_x7_o(debug_x7_o),   .debug_x8_o(debug_x8_o),
    .debug_x9_o(debug_x9_o),   .debug_x10_o(debug_x10_o),
    .debug_x11_o(debug_x11_o), .debug_x12_o(debug_x12_o),
    .debug_x13_o(debug_x13_o), .debug_x14_o(debug_x14_o),
    .debug_x15_o(debug_x15_o), .debug_x16_o(debug_x16_o),
    .debug_x17_o(debug_x17_o), .debug_x18_o(debug_x18_o),
    .debug_x19_o(debug_x19_o), .debug_x20_o(debug_x20_o),
    .debug_x21_o(debug_x21_o), .debug_x22_o(debug_x22_o),
    .debug_x23_o(debug_x23_o), .debug_x24_o(debug_x24_o),
    .debug_x25_o(debug_x25_o), .debug_x26_o(debug_x26_o),
    .debug_x27_o(debug_x27_o), .debug_x28_o(debug_x28_o),
    .debug_x29_o(debug_x29_o), .debug_x30_o(debug_x30_o),
    .debug_x31_o(debug_x31_o)
);

// Two independent memory model instances (one per AXI master), each with
// its own backing array - split I/D topology, confirmed with Kevin (see
// knowledge_capture.md Session 4). This means self-modifying-code tests
// are NOT supported by this harness as-is; fine for Phase B's plain
// RV32IM instruction-stream testing.
//
// NOTE: `mem` is instance-internal storage in axi_memory_model.v today
// with no external read/write access - the C++ wrapper's mem_write_byte()
// assumes hierarchy access to u_imem.mem[]/u_dmem.mem[], which requires
// either a Verilator public annotation on `mem` or a dedicated backdoor
// port added to axi_memory_model.v (open item, see knowledge_capture.md
// Session 4/6 and cosim_cpu_rtl.cpp's mem_write_byte() comment).
axi_memory_model #(.WORDS(1<<16)) u_imem (
    .clk_i(clk_i), .rst_i(rst_i),
    .awvalid_i(axi_i_awvalid), .awaddr_i(axi_i_awaddr), .awid_i(axi_i_awid),
    .awlen_i(axi_i_awlen), .awready_o(axi_i_awready),
    .wvalid_i(axi_i_wvalid), .wdata_i(axi_i_wdata), .wstrb_i(axi_i_wstrb),
    .wlast_i(axi_i_wlast), .wready_o(axi_i_wready),
    .bvalid_o(axi_i_bvalid), .bresp_o(axi_i_bresp), .bid_o(axi_i_bid),
    .bready_i(axi_i_bready),
    .arvalid_i(axi_i_arvalid), .araddr_i(axi_i_araddr), .arid_i(axi_i_arid),
    .arlen_i(axi_i_arlen), .arready_o(axi_i_arready),
    .rvalid_o(axi_i_rvalid), .rdata_o(axi_i_rdata), .rresp_o(axi_i_rresp),
    .rid_o(axi_i_rid), .rlast_o(axi_i_rlast), .rready_i(axi_i_rready)
);

axi_memory_model #(.WORDS(1<<16)) u_dmem (
    .clk_i(clk_i), .rst_i(rst_i),
    .awvalid_i(axi_d_awvalid), .awaddr_i(axi_d_awaddr), .awid_i(axi_d_awid),
    .awlen_i(axi_d_awlen), .awready_o(axi_d_awready),
    .wvalid_i(axi_d_wvalid), .wdata_i(axi_d_wdata), .wstrb_i(axi_d_wstrb),
    .wlast_i(axi_d_wlast), .wready_o(axi_d_wready),
    .bvalid_o(axi_d_bvalid), .bresp_o(axi_d_bresp), .bid_o(axi_d_bid),
    .bready_i(axi_d_bready),
    .arvalid_i(axi_d_arvalid), .araddr_i(axi_d_araddr), .arid_i(axi_d_arid),
    .arlen_i(axi_d_arlen), .arready_o(axi_d_arready),
    .rvalid_o(axi_d_rvalid), .rdata_o(axi_d_rdata), .rresp_o(axi_d_rresp),
    .rid_o(axi_d_rid), .rlast_o(axi_d_rlast), .rready_i(axi_d_rready)
);

endmodule
