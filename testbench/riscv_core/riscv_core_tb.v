`timescale 1ns/1ps

module riscv_core_tb;
    localparam MEM_WORDS      = 256;
    localparam RESET_VECTOR   = 32'h0000_0000;
    localparam RESULT_ADDRESS = 32'h0000_0104;
    localparam MAX_CYCLES     = 500;

    reg         clk;
    reg         rst;
    reg         intr;
    reg  [31:0] mem_i_inst;
    reg         mem_i_valid;
    reg  [31:0] mem_d_data_rd;
    reg         mem_d_ack;
    reg  [10:0] mem_d_resp_tag;

    wire [31:0] mem_i_pc;
    wire        mem_i_rd;
    wire        mem_i_flush;
    wire        mem_i_invalidate;
    wire [31:0] mem_d_addr;
    wire [31:0] mem_d_data_wr;
    wire        mem_d_rd;
    wire [3:0]  mem_d_wr;
    wire [10:0] mem_d_req_tag;
    wire        mem_d_invalidate;
    wire        mem_d_writeback;
    wire        mem_d_flush;

    reg [31:0] memory [0:MEM_WORDS-1];
    integer i;
    integer cycle_count;

    riscv_core #(
        .SUPPORT_MULDIV(1),
        .SUPPORT_SUPER(0),
        .SUPPORT_MMU(0)
    ) dut (
        .clk_i(clk),
        .rst_i(rst),
        .mem_d_data_rd_i(mem_d_data_rd),
        .mem_d_accept_i(1'b1),
        .mem_d_ack_i(mem_d_ack),
        .mem_d_error_i(1'b0),
        .mem_d_resp_tag_i(mem_d_resp_tag),
        .mem_i_accept_i(1'b1),
        .mem_i_valid_i(mem_i_valid),
        .mem_i_error_i(1'b0),
        .mem_i_inst_i(mem_i_inst),
        .intr_i(intr),
        .reset_vector_i(RESET_VECTOR),
        .cpu_id_i(32'h0000_0000),
        .mem_d_addr_o(mem_d_addr),
        .mem_d_data_wr_o(mem_d_data_wr),
        .mem_d_rd_o(mem_d_rd),
        .mem_d_wr_o(mem_d_wr),
        .mem_d_cacheable_o(),
        .mem_d_req_tag_o(mem_d_req_tag),
        .mem_d_invalidate_o(mem_d_invalidate),
        .mem_d_writeback_o(mem_d_writeback),
        .mem_d_flush_o(mem_d_flush),
        .mem_i_rd_o(mem_i_rd),
        .mem_i_flush_o(mem_i_flush),
        .mem_i_invalidate_o(mem_i_invalidate),
        .mem_i_pc_o(mem_i_pc)
    );

    always #5 clk = ~clk;

    // One-cycle-latency instruction and data memory model.
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            mem_i_valid    <= 1'b0;
            mem_i_inst     <= 32'h0000_0013;
            mem_d_ack      <= 1'b0;
            mem_d_data_rd  <= 32'b0;
            mem_d_resp_tag <= 11'b0;
        end else begin
            mem_i_valid <= mem_i_rd;
            if (mem_i_rd && mem_i_pc[31:2] < MEM_WORDS)
                mem_i_inst <= memory[mem_i_pc[31:2]];
            else
                mem_i_inst <= 32'h0000_0013;

            mem_d_ack <= mem_d_rd || (mem_d_wr != 4'b0) ||
                         mem_d_flush || mem_d_invalidate || mem_d_writeback;
            if (mem_d_rd && mem_d_addr[31:2] < MEM_WORDS)
                mem_d_data_rd <= memory[mem_d_addr[31:2]];
            mem_d_resp_tag <= mem_d_req_tag;

            if (mem_d_wr != 4'b0 && mem_d_addr[31:2] < MEM_WORDS) begin
                if (mem_d_wr[0]) memory[mem_d_addr[31:2]][7:0]   <= mem_d_data_wr[7:0];
                if (mem_d_wr[1]) memory[mem_d_addr[31:2]][15:8]  <= mem_d_data_wr[15:8];
                if (mem_d_wr[2]) memory[mem_d_addr[31:2]][23:16] <= mem_d_data_wr[23:16];
                if (mem_d_wr[3]) memory[mem_d_addr[31:2]][31:24] <= mem_d_data_wr[31:24];

                if (mem_d_addr == RESULT_ADDRESS) begin
                    if (mem_d_data_wr == 32'd1) begin
                        $display("PASS: arithmetic, branch, store, and load test completed");
                        $finish;
                    end else begin
                        $display("FAIL: program reported result 0x%08x", mem_d_data_wr);
                        $fatal(1);
                    end
                end
            end
        end
    end

    always @(posedge clk) begin
        if (!rst) begin
            cycle_count <= cycle_count + 1;
            if (cycle_count >= MAX_CYCLES) begin
                $display("FAIL: timeout after %0d cycles", MAX_CYCLES);
                $fatal(1);
            end
        end
    end

    initial begin
        clk = 1'b0;
        rst = 1'b1;
        intr = 1'b0;
        cycle_count = 0;
        for (i = 0; i < MEM_WORDS; i = i + 1)
            memory[i] = 32'h0000_0013; // nop

        // RV32I self-checking program. A 1 written to 0x104 means pass;
        // a 2 means that either the ALU/branch or store/load check failed.
        memory[0]  = 32'h00500093; // addi x1, x0, 5
        memory[1]  = 32'h00700113; // addi x2, x0, 7
        memory[2]  = 32'h002081b3; // add  x3, x1, x2
        memory[3]  = 32'h00c00213; // addi x4, x0, 12
        memory[4]  = 32'h00419e63; // bne  x3, x4, fail
        memory[5]  = 32'h10302023; // sw   x3, 0x100(x0)
        memory[6]  = 32'h10002283; // lw   x5, 0x100(x0)
        memory[7]  = 32'h00429863; // bne  x5, x4, fail
        memory[8]  = 32'h00100313; // addi x6, x0, 1
        memory[9]  = 32'h10602223; // sw   x6, 0x104(x0)
        memory[10] = 32'h0000006f; // jal  x0, 0
        memory[11] = 32'h00200313; // fail: addi x6, x0, 2
        memory[12] = 32'h10602223; // sw   x6, 0x104(x0)
        memory[13] = 32'h0000006f; // jal  x0, 0

        $dumpfile("riscv_core_tb.vcd");
        $dumpvars(0, riscv_core_tb);
        repeat (5) @(posedge clk);
        #1;
        rst = 1'b0;
    end
endmodule
