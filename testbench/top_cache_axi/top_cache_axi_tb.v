`timescale 1ns/1ps

module top_cache_axi_tb;
    localparam RESULT_ADDR = 32'h8000_0104;
    localparam MAX_CYCLES = 3000;
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
                    $display("FAIL: cached program returned 0x%08x", result_data);
                    $fatal(1);
                end
                if (i_read_bursts == 0 || d_read_bursts == 0 || d_write_words == 0) begin
                    $display("FAIL: expected I-cache and D-cache AXI traffic was not observed");
                    $fatal(1);
                end
                $display("PASS: core + I-cache + D-cache + AXI test completed");
                $display("      I-read bursts=%0d D-read bursts=%0d D-write words=%0d", i_read_bursts, d_read_bursts, d_write_words);
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
        // The first branch crosses no line; later sequential fetches enter a
        // second 32-byte line, requiring at least two I-cache refills.
        i_memory.mem[0]  = 32'h00500093; // addi x1, x0, 5
        i_memory.mem[1]  = 32'h00700113; // addi x2, x0, 7
        i_memory.mem[2]  = 32'h002081b3; // add  x3, x1, x2
        i_memory.mem[3]  = 32'h00c00213; // addi x4, x0, 12
        i_memory.mem[4]  = 32'h02419063; // bne  x3, x4, fail
        i_memory.mem[5]  = 32'h10302023; // sw   x3, 0x100(x0), cached
        i_memory.mem[6]  = 32'h10002283; // lw   x5, 0x100(x0), cached
        i_memory.mem[7]  = 32'h00429a63; // bne  x5, x4, fail
        i_memory.mem[8]  = 32'h00100313; // addi x6, x0, 1
        i_memory.mem[9]  = 32'h800003b7; // lui  x7, 0x80000
        i_memory.mem[10] = 32'h1063a223; // sw   x6, 0x104(x7), uncached result
        i_memory.mem[11] = 32'h0000006f; // jal  x0, 0
        i_memory.mem[12] = 32'h00200313; // fail: addi x6, x0, 2
        i_memory.mem[13] = 32'h800003b7; // lui  x7, 0x80000
        i_memory.mem[14] = 32'h1063a223; // sw   x6, 0x104(x7)
        i_memory.mem[15] = 32'h0000006f; // jal  x0, 0
        $dumpfile("top_cache_axi_tb.vcd");
        $dumpvars(0, top_cache_axi_tb);
        repeat (5) @(posedge clk);
        #1 rst = 1'b0;
    end
endmodule
