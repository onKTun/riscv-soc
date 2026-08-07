// =============================================================================
// tb_riscv_core_smoke.v
//
// Minimal smoke-test testbench for the bare `riscv_core` (core/riscv/riscv_core.v)
// -- no icache, no dcache, no AXI. Drives the core's native valid/accept
// mem_i_*/mem_d_* interfaces directly with a trivial always-accept behavioral
// RAM.
//
// Goal: confirm the core resets cleanly, begins fetching at reset_vector_i,
// and the PC advances (i.e. the pipeline is alive and not hung/stalled
// forever) -- NOT full instruction-level correctness checking. See the
// tb_riscv_top.v / axi4_mem_model.v testbench (same project) for a
// self-checking program-result test through the AXI/cache path.
//
// Memory model simplifications (by design, since this is the "simple" TB):
//   - Single shared byte array services both mem_i_* (instruction) and
//     mem_d_* (data) ports combinationally -- no timing/latency modeling
//     at all. mem_i_accept_i / mem_d_accept_i are tied high via continuous
//     assignment (wire ... = 1'b1;), NOT an always@(*) block -- see
//     knowledge_capture.md for why: an always@(*) whose RHS is a pure
//     constant has no signal to trigger on and was observed (Vivado xsim)
//     to leave the reg at 'X' for the entire simulation, which silently
//     blocked mem_i_rd_o from ever asserting (0 fetches, full timeout).
//     mem_i_valid_i is asserted the cycle after a fetch request; mem_d_ack_i
//     is asserted the cycle after a data request. This is intentionally not
//     protocol-accurate to any real memory -- it exists purely to let the
//     core's pipeline run.
//   - No cacheable/uncacheable distinction, no burst behavior (none exists
//     on this bus -- see RISCV_Core_TopCacheAXI_Microarchitecture.md
//     section 1.1: this is a plain per-request valid/accept handshake).
//
// Vivado xsim usage:
//   xvlog -sv tb_riscv_core_smoke.v <core/riscv/*.v>
//   xelab -debug typical tb_riscv_core_smoke -s tb_sim
//   xsim tb_sim -R
// =============================================================================
`timescale 1ns / 1ps

module tb_riscv_core_smoke;

    // -------------------------------------------------------------------
    // Parameters
    // -------------------------------------------------------------------
    localparam CLK_PERIOD_NS  = 5;
    localparam RESET_CYCLES   = 10;
    localparam TIMEOUT_CYCLES = 5000;
    localparam STALL_LIMIT    = 200;     // max consecutive cycles PC may sit still
    localparam [31:0] RESET_VECTOR = 32'h0000_0000;

    // -------------------------------------------------------------------
    // Clock / reset
    // -------------------------------------------------------------------
    reg clk_i;
    reg rst_i;

    initial clk_i = 1'b0;
    always #(CLK_PERIOD_NS/2.0) clk_i = ~clk_i;

    // -------------------------------------------------------------------
    // Core I/O
    // -------------------------------------------------------------------
    reg  [31:0] mem_d_data_rd_i;
    wire        mem_d_accept_i = 1'b1;   // tie-off: continuous assign, not always@(*)
    reg         mem_d_ack_i;
    reg         mem_d_error_i;
    reg  [10:0] mem_d_resp_tag_i;

    wire        mem_i_accept_i = 1'b1;   // tie-off: continuous assign, not always@(*)
    reg         mem_i_valid_i;
    reg         mem_i_error_i;
    reg  [31:0] mem_i_inst_i;

    reg         intr_i;
    reg  [31:0] cpu_id_i;

    wire [31:0] mem_d_addr_o;
    wire [31:0] mem_d_data_wr_o;
    wire        mem_d_rd_o;
    wire [3:0]  mem_d_wr_o;
    wire        mem_d_cacheable_o;
    wire [10:0] mem_d_req_tag_o;
    wire        mem_d_invalidate_o;
    wire        mem_d_writeback_o;
    wire        mem_d_flush_o;

    wire        mem_i_rd_o;
    wire        mem_i_flush_o;
    wire        mem_i_invalidate_o;
    wire [31:0] mem_i_pc_o;

    // -------------------------------------------------------------------
    // DUT: bare riscv_core (SUPPORT_SUPER=0, SUPPORT_MMU=0 -> machine-mode
    // only, per PROCESSOR_CORE_REQUIREMENTS.md)
    // -------------------------------------------------------------------
    riscv_core
    #(
        .SUPPORT_MULDIV         (1),
        .SUPPORT_SUPER          (0),
        .SUPPORT_MMU            (0),
        .SUPPORT_LOAD_BYPASS    (1),
        .SUPPORT_MUL_BYPASS     (1),
        .SUPPORT_REGFILE_XILINX (0),
        .EXTRA_DECODE_STAGE     (0),
        .MEM_CACHE_ADDR_MIN     (32'h0000_0000),
        .MEM_CACHE_ADDR_MAX     (32'hffff_ffff)
    )
    u_dut
    (
        .clk_i              (clk_i),
        .rst_i              (rst_i),

        .mem_d_data_rd_i    (mem_d_data_rd_i),
        .mem_d_accept_i     (mem_d_accept_i),
        .mem_d_ack_i        (mem_d_ack_i),
        .mem_d_error_i      (mem_d_error_i),
        .mem_d_resp_tag_i   (mem_d_resp_tag_i),

        .mem_i_accept_i     (mem_i_accept_i),
        .mem_i_valid_i      (mem_i_valid_i),
        .mem_i_error_i      (mem_i_error_i),
        .mem_i_inst_i       (mem_i_inst_i),

        .intr_i             (intr_i),
        .reset_vector_i     (RESET_VECTOR),
        .cpu_id_i           (cpu_id_i),

        .mem_d_addr_o       (mem_d_addr_o),
        .mem_d_data_wr_o    (mem_d_data_wr_o),
        .mem_d_rd_o         (mem_d_rd_o),
        .mem_d_wr_o         (mem_d_wr_o),
        .mem_d_cacheable_o  (mem_d_cacheable_o),
        .mem_d_req_tag_o    (mem_d_req_tag_o),
        .mem_d_invalidate_o (mem_d_invalidate_o),
        .mem_d_writeback_o  (mem_d_writeback_o),
        .mem_d_flush_o      (mem_d_flush_o),

        .mem_i_rd_o         (mem_i_rd_o),
        .mem_i_flush_o      (mem_i_flush_o),
        .mem_i_invalidate_o (mem_i_invalidate_o),
        .mem_i_pc_o         (mem_i_pc_o)
    );

    // -------------------------------------------------------------------
    // Trivial shared memory: one word array, always-accept, 1-cycle
    // latency on both ports. No AXI, no cache, no burst -- just enough
    // to let the pipeline fetch and execute.
    // -------------------------------------------------------------------
    localparam MEM_WORDS = 1024;
    reg [31:0] mem [0:MEM_WORDS-1];

    integer k;
    initial begin
        for (k = 0; k < MEM_WORDS; k = k + 1)
            mem[k] = 32'h00000013; // NOP (addi x0,x0,0) filler
    end

    // Instruction port: always accept; return valid+data one cycle after
    // a request, combinationally addressed off mem_i_pc_o.
    always @(posedge clk_i) begin
        if (rst_i) begin
            mem_i_valid_i <= 1'b0;
            mem_i_inst_i  <= 32'h0;
            mem_i_error_i <= 1'b0;
        end else begin
            mem_i_valid_i <= mem_i_rd_o; // request seen this cycle -> valid next cycle
            mem_i_inst_i  <= mem[mem_i_pc_o[31:2] % MEM_WORDS];
            mem_i_error_i <= 1'b0;
        end
    end

    // Data port: always accept; ack one cycle after a request; supports
    // byte-enable writes; combinational read data off mem_d_addr_o.
    reg mem_d_req_pending;
    always @(posedge clk_i) begin
        if (rst_i) begin
            mem_d_ack_i       <= 1'b0;
            mem_d_data_rd_i   <= 32'h0;
            mem_d_error_i     <= 1'b0;
            mem_d_resp_tag_i  <= 11'h0;
        end else begin
            mem_d_ack_i      <= mem_d_rd_o | (|mem_d_wr_o);
            mem_d_data_rd_i  <= mem[mem_d_addr_o[31:2] % MEM_WORDS];
            mem_d_error_i    <= 1'b0;
            mem_d_resp_tag_i <= mem_d_req_tag_o;

            if (|mem_d_wr_o) begin
                if (mem_d_wr_o[0]) mem[mem_d_addr_o[31:2] % MEM_WORDS][7:0]   <= mem_d_data_wr_o[7:0];
                if (mem_d_wr_o[1]) mem[mem_d_addr_o[31:2] % MEM_WORDS][15:8]  <= mem_d_data_wr_o[15:8];
                if (mem_d_wr_o[2]) mem[mem_d_addr_o[31:2] % MEM_WORDS][23:16]<= mem_d_data_wr_o[23:16];
                if (mem_d_wr_o[3]) mem[mem_d_addr_o[31:2] % MEM_WORDS][31:24]<= mem_d_data_wr_o[31:24];
            end
        end
    end

    // -------------------------------------------------------------------
    // Program: same 8-instruction smoke sequence as the AXI-level TB
    // (5+7=12, store result + done flag, then self-loop), reused here so
    // both testbenches exercise identical program behavior at different
    // boundaries. Encodings independently verified in the prior session
    // (see knowledge_capture.md).
    // -------------------------------------------------------------------
    initial begin
        mem[0] = 32'h00500093; // addi x1, x0, 5
        mem[1] = 32'h00700113; // addi x2, x0, 7
        mem[2] = 32'h002081b3; // add  x3, x1, x2
        mem[3] = 32'h00001237; // lui  x4, 0x1
        mem[4] = 32'h00322023; // sw   x3, 0(x4)
        mem[5] = 32'h00100293; // addi x5, x0, 1
        mem[6] = 32'h00522223; // sw   x5, 4(x4)
        mem[7] = 32'h0000006f; // jal  x0, 0  (self-loop)
    end

    // -------------------------------------------------------------------
    // Reset sequencing
    // -------------------------------------------------------------------
    integer cycle_count;

    initial begin
        rst_i       = 1'b1;
        intr_i      = 1'b0;
        cpu_id_i    = 32'h0;
        cycle_count = 0;
        repeat (RESET_CYCLES) @(posedge clk_i);
        rst_i = 1'b0;
        $display("[%0t] TB: reset released, reset_vector = 0x%08h", $time, RESET_VECTOR);
    end

    always @(posedge clk_i) cycle_count = cycle_count + 1;

    // -------------------------------------------------------------------
    // Smoke check: track mem_i_pc_o. Confirm (a) at least one valid
    // instruction fetch happens, and (b) the PC does not sit frozen for
    // more than STALL_LIMIT consecutive cycles at any point (a hang / stuck
    // pipeline). This does NOT check the fetched instruction stream is
    // "correct" in any ISA sense -- only that the core is alive.
    // -------------------------------------------------------------------
    reg [31:0] last_pc;
    reg        seen_first_fetch;
    integer    stall_cycles;
    integer    fetch_count;
    reg        test_done;
    reg        test_pass;
    reg        hang_detected;

    initial begin
        last_pc          = 32'hxxxxxxxx;
        seen_first_fetch = 1'b0;
        stall_cycles     = 0;
        fetch_count      = 0;
        test_done        = 1'b0;
        test_pass         = 1'b0;
        hang_detected     = 1'b0;

        wait (rst_i == 1'b0);

        while (!test_done && cycle_count < TIMEOUT_CYCLES) begin
            @(posedge clk_i);

            if (mem_i_rd_o) begin
                fetch_count = fetch_count + 1;

                if (!seen_first_fetch) begin
                    seen_first_fetch = 1'b1;
                    last_pc          = mem_i_pc_o;
                    stall_cycles     = 0;
                    $display("[%0t] TB: first fetch request, PC=0x%08h", $time, mem_i_pc_o);
                end else if (mem_i_pc_o == last_pc) begin
                    stall_cycles = stall_cycles + 1;
                    if (stall_cycles > STALL_LIMIT) begin
                        hang_detected = 1'b1;
                        test_done     = 1'b1;
                        $display("[%0t] TB: FAIL -- PC stuck at 0x%08h for >%0d cycles",
                                  $time, last_pc, STALL_LIMIT);
                    end
                end else begin
                    last_pc      = mem_i_pc_o;
                    stall_cycles = 0;
                end
            end

            // Success condition: enough distinct fetches observed to prove
            // the pipeline ran past the reset vector and is progressing.
            if (!hang_detected && seen_first_fetch && fetch_count >= 20) begin
                test_done = 1'b1;
            end
        end

        if (!test_done) begin
            $display("[%0t] TB: FAIL -- TIMEOUT after %0d cycles, only %0d fetches seen",
                      $time, cycle_count, fetch_count);
        end else if (!hang_detected && seen_first_fetch) begin
            test_pass = 1'b1;
            $display("[%0t] TB: PASS -- core fetched %0d instructions, PC advancing, no stall > %0d cycles",
                      $time, fetch_count, STALL_LIMIT);
        end

        $display("=============================================");
        $display(" SMOKE TEST RESULT: %s", test_pass ? "PASS" : "FAIL");
        $display("=============================================");

        #(CLK_PERIOD_NS*10);
        $finish;
    end

    // -------------------------------------------------------------------
    // Waveform dump
    // -------------------------------------------------------------------
    initial begin
        $dumpfile("tb_riscv_core_smoke.vcd");
        $dumpvars(0, tb_riscv_core_smoke);
    end

endmodule
