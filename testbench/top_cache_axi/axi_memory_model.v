`timescale 1ns/1ps

// Small AXI4 memory model for simulation. It supports INCR read bursts and
// write transactions used by the repository's instruction and data caches.
module axi_memory_model #(
    parameter WORDS = 1024,
    parameter RESULT_ADDR = 32'hffff_ffff
) (
    input clk_i,
    input rst_i,
    input awvalid_i,
    input [31:0] awaddr_i,
    input [3:0] awid_i,
    input [7:0] awlen_i,
    output awready_o,
    input wvalid_i,
    input [31:0] wdata_i,
    input [3:0] wstrb_i,
    input wlast_i,
    output wready_o,
    output reg bvalid_o,
    output [1:0] bresp_o,
    output reg [3:0] bid_o,
    input bready_i,
    input arvalid_i,
    input [31:0] araddr_i,
    input [3:0] arid_i,
    input [7:0] arlen_i,
    output arready_o,
    output rvalid_o,
    output [31:0] rdata_o,
    output [1:0] rresp_o,
    output [3:0] rid_o,
    output rlast_o,
    input rready_i,
    output reg result_valid_o,
    output reg [31:0] result_data_o,
    output reg [31:0] read_bursts_o,
    output reg [31:0] write_words_o
);
    reg [31:0] mem [0:WORDS-1] /* verilator public */;
    reg read_active;
    reg [31:0] read_addr;
    reg [7:0] read_left;
    reg [3:0] read_id;
    reg write_active;
    reg [31:0] write_addr;
    reg [3:0] write_id;
    wire [31:0] active_write_addr = write_active ? write_addr : awaddr_i;
    integer i;

    assign arready_o = !read_active;
    assign rvalid_o  = read_active;
    assign rdata_o   = (read_addr[31:2] < WORDS) ? mem[read_addr[31:2]] : 32'b0;
    assign rresp_o   = 2'b00;
    assign rid_o     = read_id;
    assign rlast_o   = read_active && (read_left == 0);

    assign awready_o = !write_active && !bvalid_o;
    // Permit address and first data beat to be accepted together.
    assign wready_o  = write_active || (awvalid_i && awready_o);
    assign bresp_o   = 2'b00;

    always @(posedge clk_i or posedge rst_i) begin
        if (rst_i) begin
            read_active  <= 1'b0;
            read_addr    <= 32'b0;
            read_left    <= 8'b0;
            read_id      <= 4'b0;
            write_active <= 1'b0;
            write_addr   <= 32'b0;
            write_id     <= 4'b0;
            bvalid_o     <= 1'b0;
            bid_o        <= 4'b0;
            result_valid_o <= 1'b0;
            result_data_o  <= 32'b0;
            read_bursts_o  <= 32'b0;
            write_words_o  <= 32'b0;
        end else begin
            if (arvalid_i && arready_o) begin
                read_active <= 1'b1;
                read_addr   <= araddr_i;
                read_left   <= arlen_i;
                read_id     <= arid_i;
                read_bursts_o <= read_bursts_o + 1;
            end else if (rvalid_o && rready_i) begin
                if (read_left == 0)
                    read_active <= 1'b0;
                else begin
                    read_addr <= read_addr + 4;
                    read_left <= read_left - 1'b1;
                end
            end

            if (awvalid_i && awready_o) begin
                write_active <= 1'b1;
                write_addr   <= awaddr_i;
                write_id     <= awid_i;
            end

            if (wvalid_i && wready_o) begin
                if (active_write_addr[31:2] < WORDS) begin
                    if (wstrb_i[0]) mem[active_write_addr[31:2]][7:0]   <= wdata_i[7:0];
                    if (wstrb_i[1]) mem[active_write_addr[31:2]][15:8]  <= wdata_i[15:8];
                    if (wstrb_i[2]) mem[active_write_addr[31:2]][23:16] <= wdata_i[23:16];
                    if (wstrb_i[3]) mem[active_write_addr[31:2]][31:24] <= wdata_i[31:24];
                end
                write_words_o <= write_words_o + 1;
                if (active_write_addr == RESULT_ADDR) begin
                    result_valid_o <= 1'b1;
                    result_data_o  <= wdata_i;
                end
                if (wlast_i) begin
                    write_active <= 1'b0;
                    bvalid_o <= 1'b1;
                    bid_o <= write_active ? write_id : awid_i;
                end else begin
                    write_active <= 1'b1;
                    write_addr <= active_write_addr + 4;
                end
            end

            if (bvalid_o && bready_i)
                bvalid_o <= 1'b0;
        end
    end

    initial begin
        for (i = 0; i < WORDS; i = i + 1)
            mem[i] = 32'h0000_0013;
    end
endmodule
