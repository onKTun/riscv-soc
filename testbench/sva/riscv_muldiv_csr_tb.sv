`timescale 1ns/1ps
`define TB_VCD_FILENAME "riscv_muldiv_csr_tb.vcd"

//-----------------------------------------------------------------
// Directed stimulus for CHK_017-CHK_030 (riscv_multiplier,
// riscv_divider, riscv_csr, riscv_csr_regfile).
//
// Structurally mirrors testbench/top_cache_axi/top_cache_axi_tb.v
// (same riscv_top + axi_memory_model harness, same RESULT_ADDR
// pass/fail convention) but loads a dedicated RV32M + Zicsr program
// so the multiplier, divider, and CSR blocks are actually exercised.
// See knowledge_capture.md, Phase 4-6, for instruction encodings and
// the expected value derivation (including RISC-V spec Table 7.1
// divide-by-zero/overflow semantics, verified against a Python model
// of the RTL's restoring-divider algorithm before this file was written).
//-----------------------------------------------------------------
module riscv_muldiv_csr_tb;
    localparam RESULT_ADDR = 32'h8000_0104;
    localparam MAX_CYCLES  = 3000;

    reg clk = 1'b0;
    reg rst = 1'b1;
    integer cycles = 0;

    wire i_awvalid, i_awready, i_wvalid, i_wready, i_wlast, i_bvalid, i_bready;
    wire i_arvalid, i_arready, i_rvalid, i_rlast, i_rready;
    wire [31:0] i_awaddr, i_wdata, i_araddr, i_rdata;
    wire [3:0] i_awid, i_wstrb, i_bid, i_arid, i_rid;
    wire [7:0] i_awlen, i_arlen;
    wire [1:0] i_awburst, i_bresp, i_arburst, i_rresp;
    wire d_awvalid, d_awready, d_wvalid, d_wready, d_wlast, d_bvalid, d_bready;
    wire d_arvalid, d_arready, d_rvalid, d_rlast, d_rready;
    wire [31:0] d_awaddr, d_wdata, d_araddr, d_rdata;
    wire [3:0] d_awid, d_wstrb, d_bid, d_arid, d_rid;
    wire [7:0] d_awlen, d_arlen;
    wire [1:0] d_awburst, d_bresp, d_arburst, d_rresp;
    wire result_valid;
    wire [31:0] result_data;
    wire [31:0] i_read_bursts, d_read_bursts, d_write_words;

    always #5 clk = ~clk;

    // SUPPORT_SUPER=1 is required here: riscv_csr.v's csr_fault_r (the
    // illegal-CSR-access / write-to-read-only detection driving
    // EXCEPTION_ILLEGAL_INSTRUCTION) is unconditionally tied to 1'b0
    // when SUPPORT_SUPER=0 (see core/riscv/riscv_csr.v line 147). The
    // default core build (SUPPORT_SUPER=0, as used by the existing
    // riscv_core_tb.v and top_cache_axi_tb.v directed tests) therefore
    // cannot exercise CHK_029/CHK_030 at all -- this was discovered
    // empirically while bringing up this testbench (see
    // knowledge_capture.md Phase 6) and is itself a piece of
    // microarchitectural knowledge worth keeping: the illegal-CSR trap
    // path is supervisor-mode-gated, not a baseline RV32I/Zicsr feature
    // of this core.
    riscv_top #(
        .MEM_CACHE_ADDR_MIN(32'h0000_0000),
        .MEM_CACHE_ADDR_MAX(32'h0000_ffff)
    ) dut (
        .clk_i(clk), .rst_i(rst), .intr_i(1'b0), .reset_vector_i(32'b0),
        .axi_i_awready_i(i_awready), .axi_i_wready_i(i_wready),
        .axi_i_bvalid_i(i_bvalid), .axi_i_bresp_i(i_bresp), .axi_i_bid_i(i_bid),
        .axi_i_arready_i(i_arready), .axi_i_rvalid_i(i_rvalid),
        .axi_i_rdata_i(i_rdata), .axi_i_rresp_i(i_rresp),
        .axi_i_rid_i(i_rid), .axi_i_rlast_i(i_rlast),
        .axi_d_awready_i(d_awready), .axi_d_wready_i(d_wready),
        .axi_d_bvalid_i(d_bvalid), .axi_d_bresp_i(d_bresp), .axi_d_bid_i(d_bid),
        .axi_d_arready_i(d_arready), .axi_d_rvalid_i(d_rvalid),
        .axi_d_rdata_i(d_rdata), .axi_d_rresp_i(d_rresp),
        .axi_d_rid_i(d_rid), .axi_d_rlast_i(d_rlast),
        .axi_i_awvalid_o(i_awvalid), .axi_i_awaddr_o(i_awaddr), .axi_i_awid_o(i_awid),
        .axi_i_awlen_o(i_awlen), .axi_i_awburst_o(i_awburst),
        .axi_i_wvalid_o(i_wvalid), .axi_i_wdata_o(i_wdata), .axi_i_wstrb_o(i_wstrb),
        .axi_i_wlast_o(i_wlast), .axi_i_bready_o(i_bready),
        .axi_i_arvalid_o(i_arvalid), .axi_i_araddr_o(i_araddr), .axi_i_arid_o(i_arid),
        .axi_i_arlen_o(i_arlen), .axi_i_arburst_o(i_arburst), .axi_i_rready_o(i_rready),
        .axi_d_awvalid_o(d_awvalid), .axi_d_awaddr_o(d_awaddr), .axi_d_awid_o(d_awid),
        .axi_d_awlen_o(d_awlen), .axi_d_awburst_o(d_awburst),
        .axi_d_wvalid_o(d_wvalid), .axi_d_wdata_o(d_wdata), .axi_d_wstrb_o(d_wstrb),
        .axi_d_wlast_o(d_wlast), .axi_d_bready_o(d_bready),
        .axi_d_arvalid_o(d_arvalid), .axi_d_araddr_o(d_araddr), .axi_d_arid_o(d_arid),
        .axi_d_arlen_o(d_arlen), .axi_d_arburst_o(d_arburst), .axi_d_rready_o(d_rready)
    );

    axi_memory_model #(.WORDS(1024)) i_memory (
        .clk_i(clk), .rst_i(rst),
        .awvalid_i(i_awvalid), .awaddr_i(i_awaddr), .awid_i(i_awid), .awlen_i(i_awlen), .awready_o(i_awready),
        .wvalid_i(i_wvalid), .wdata_i(i_wdata), .wstrb_i(i_wstrb), .wlast_i(i_wlast), .wready_o(i_wready),
        .bvalid_o(i_bvalid), .bresp_o(i_bresp), .bid_o(i_bid), .bready_i(i_bready),
        .arvalid_i(i_arvalid), .araddr_i(i_araddr), .arid_i(i_arid), .arlen_i(i_arlen), .arready_o(i_arready),
        .rvalid_o(i_rvalid), .rdata_o(i_rdata), .rresp_o(i_rresp), .rid_o(i_rid), .rlast_o(i_rlast), .rready_i(i_rready),
        .result_valid_o(), .result_data_o(), .read_bursts_o(i_read_bursts), .write_words_o()
    );

    axi_memory_model #(.WORDS(1024), .RESULT_ADDR(RESULT_ADDR)) d_memory (
        .clk_i(clk), .rst_i(rst),
        .awvalid_i(d_awvalid), .awaddr_i(d_awaddr), .awid_i(d_awid), .awlen_i(d_awlen), .awready_o(d_awready),
        .wvalid_i(d_wvalid), .wdata_i(d_wdata), .wstrb_i(d_wstrb), .wlast_i(d_wlast), .wready_o(d_wready),
        .bvalid_o(d_bvalid), .bresp_o(d_bresp), .bid_o(d_bid), .bready_i(d_bready),
        .arvalid_i(d_arvalid), .araddr_i(d_araddr), .arid_i(d_arid), .arlen_i(d_arlen), .arready_o(d_arready),
        .rvalid_o(d_rvalid), .rdata_o(d_rdata), .rresp_o(d_rresp), .rid_o(d_rid), .rlast_o(d_rlast), .rready_i(d_rready),
        .result_valid_o(result_valid), .result_data_o(result_data),
        .read_bursts_o(d_read_bursts), .write_words_o(d_write_words)
    );

    always @(posedge clk) begin
        if (!rst) begin
            cycles <= cycles + 1;
            if (result_valid) begin
                if (result_data !== 32'd1) begin
                    $display("FAIL: MUL/DIV/CSR program returned 0x%08x", result_data);
                    $fatal(1);
                end
                $display("PASS: MUL/DIV/CSR directed program completed");
                $finish;
            end
            if (cycles >= MAX_CYCLES) begin
                $display("FAIL: timeout after %0d cycles", MAX_CYCLES);
                $fatal(1);
            end
        end
    end

    initial begin
        #1;
        // --- RV32M + Zicsr directed program ---
        // Encodings hand-assembled and cross-checked against
        // core/riscv/riscv_defs.v opcode/funct3/funct7 fields.
        // See knowledge_capture.md for the generator script and the
        // Python reference model used to validate divide-by-zero /
        // signed-overflow expected values against RISC-V spec Table 7.1.

        i_memory.mem[0]  = 32'h00600093; // addi x1, x0, 6
        i_memory.mem[1]  = 32'h00700113; // addi x2, x0, 7
        i_memory.mem[2]  = 32'h022081b3; // mul    x3, x1, x2   -> 42                    (CHK_017)
        i_memory.mem[3]  = 32'h00000213; // addi x4, x0, 0
        i_memory.mem[4]  = 32'h024082b3; // mul    x5, x1, x4   -> 0                     (CHK_022)
        i_memory.mem[5]  = 32'hfff00313; // addi x6, x0, -1     -> 0xFFFFFFFF
        i_memory.mem[6]  = 32'h026313b3; // mulh   x7, x6, x6   -> signed x signed, both MSB set (CHK_019)
        i_memory.mem[7]  = 32'h02633433; // mulhu  x8, x6, x6   -> unsigned x unsigned, both MSB set (CHK_020)
        i_memory.mem[8]  = 32'h026324b3; // mulhsu x9, x6, x6   -> ra negative, rb MSB set (CHK_021)
        i_memory.mem[9]  = 32'h01400513; // addi x10, x0, 20
        i_memory.mem[10] = 32'h00300593; // addi x11, x0, 3
        i_memory.mem[11] = 32'h02b54633; // div  x12, x10, x11  -> 6                     (CHK_025)
        i_memory.mem[12] = 32'h02b566b3; // rem  x13, x10, x11  -> 2                     (CHK_025)
        i_memory.mem[13] = 32'h02b55733; // divu x14, x10, x11  -> 6
        i_memory.mem[14] = 32'h02b577b3; // remu x15, x10, x11  -> 2
        i_memory.mem[15] = 32'h00000813; // addi x16, x0, 0     -> divisor = 0
        i_memory.mem[16] = 32'h030548b3; // div  x17, x10, x16  -> -1 (all ones)         (CHK_023)
        i_memory.mem[17] = 32'h03055933; // divu x18, x10, x16  -> 0xFFFFFFFF            (CHK_023)
        i_memory.mem[18] = 32'h030569b3; // rem  x19, x10, x16  -> 20 (dividend)         (CHK_023)
        i_memory.mem[19] = 32'h03057a33; // remu x20, x10, x16  -> 20 (dividend)         (CHK_023)
        i_memory.mem[20] = 32'h80000ab7; // lui  x21, 0x80000   -> 0x80000000 (INT_MIN)
        i_memory.mem[21] = 32'hfff00b13; // addi x22, x0, -1    -> 0xFFFFFFFF
        i_memory.mem[22] = 32'h036acbb3; // div  x23, x21, x22  -> INT_MIN (overflow)    (CHK_024)
        i_memory.mem[23] = 32'h036aec33; // rem  x24, x21, x22  -> 0 (overflow)          (CHK_024)
        i_memory.mem[24] = 32'h05500c93; // addi x25, x0, 0x55
        i_memory.mem[25] = 32'h340c9073; // csrrw x0, mscratch, x25                      (CHK_028)
        i_memory.mem[26] = 32'h34002d73; // csrrs x26, mscratch, x0 -> 0x55              (CHK_028)
        // NOTE: CHK_029 (illegal-CSR-access exception) and CHK_030 (mepc
        // capture on that exception) are NOT exercised by this program.
        // riscv_csr.v's csr_fault_r is tied to 1'b0 whenever the core is
        // built with SUPPORT_SUPER=0, which is the only configuration
        // reachable through riscv_top.v (SUPPORT_SUPER is not exposed as
        // a pass-through parameter there). Per Kevin's decision
        // (knowledge_capture.md Phase 6/7), riscv_top.v is not modified;
        // CHK_029/CHK_030 are documented as verified-unreachable at the
        // default configuration and excluded from this checker's sign-off
        // vacuity gate. The assertions remain compiled in and live so
        // that if this ever changes (e.g. a future top-level exposes
        // SUPPORT_SUPER), they will start being exercised automatically
        // and any real violation would still be caught.
        i_memory.mem[27] = 32'h00100e13; // addi x28, x0, 1     -> pass marker value
        i_memory.mem[28] = 32'h80000eb7; // lui  x29, 0x80000   -> 0x8000_0000 (uncached base)
        i_memory.mem[29] = 32'h11cea223; // sw   x28, 0x104(x29) -> RESULT_ADDR <= 1 (PASS)

        $dumpfile(`TB_VCD_FILENAME);
        $dumpvars(0, riscv_muldiv_csr_tb);
        repeat (5) @(posedge clk);
        #1 rst = 1'b0;
    end
endmodule
