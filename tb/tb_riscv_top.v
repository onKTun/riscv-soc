// =============================================================================
// tb_riscv_top.v
//
// Basic self-checking testbench for `riscv_top` (top_cache_axi build:
// riscv_core + icache + dcache, two independent AXI4 Full masters).
//
// Scope / assumptions:
//   - Targets riscv_top only (per RISC-V_Core_TopCacheAXI_Microarchitecture.md
//     and PROCESSOR_CORE_REQUIREMENTS.md), not the full SoC/interconnect.
//   - The native XIP path to the SPI boot controller does NOT exist yet in
//     riscv_top (confirmed gap in the microarch doc, section 6.1). For this
//     standalone core-level TB, reset_vector_i is tied to 32'h0000_0000 and
//     BOTH axi_i_* and axi_d_* are backed by a single shared behavioral AXI4
//     memory model. This lets the core boot by fetching its first instruction
//     as a normal instruction-cache miss over AXI, which is a valid substitute
//     at this level of verification -- it is NOT a model of the real SPI/XIP
//     boot path, which will need its own TB once that RTL exists.
//   - Goal: boot/reset sanity + execute a small hand-assembled RV32IM program
//     out of the shared memory, and self-check completion via a "tohost"-style
//     memory-mapped write.
//
// AXI4 parameters (confirmed from riscv_top.v / axi4_defines.h):
//   ADDR_W=32, DATA_W=32, ID_W=4, AWLEN/ARLEN width=8, BURST width=2.
//   Caches issue 8-beat (AxLEN=7) INCR bursts on a miss/writeback; all other
//   transactions in this TB (there are none besides cache-line traffic at
//   this level) would be single-beat.
//
// Vivado xsim usage:
//   xvlog -sv tb_riscv_top.v axi4_mem_model.v riscv_top.v <core/cache sources>
//   xelab -debug typical tb_riscv_top -s tb_sim
//   xsim tb_sim -R
// =============================================================================
`timescale 1ns / 1ps

module tb_riscv_top;

    // -------------------------------------------------------------------
    // Parameters
    // -------------------------------------------------------------------
    localparam CLK_PERIOD_NS   = 5;         // 200 MHz per Phase 1 spec
    localparam RESET_CYCLES    = 10;
    localparam TIMEOUT_CYCLES  = 200_000;   // watchdog
    localparam [31:0] RESET_VECTOR   = 32'h0000_0000;
    localparam [31:0] TOHOST_ADDR    = 32'h0000_1000; // memory-mapped pass/fail flag

    // -------------------------------------------------------------------
    // Clock / reset / interrupt
    // -------------------------------------------------------------------
    reg clk_i;
    reg rst_i;
    reg intr_i;

    initial clk_i = 1'b0;
    always #(CLK_PERIOD_NS/2.0) clk_i = ~clk_i;

    // -------------------------------------------------------------------
    // DUT AXI wires (axi_i_* = instruction master, axi_d_* = data master)
    // -------------------------------------------------------------------
    // Instruction master
    wire        axi_i_awvalid;
    wire [31:0] axi_i_awaddr;
    wire [3:0]  axi_i_awid;
    wire [7:0]  axi_i_awlen;
    wire [1:0]  axi_i_awburst;
    wire        axi_i_wvalid;
    wire [31:0] axi_i_wdata;
    wire [3:0]  axi_i_wstrb;
    wire        axi_i_wlast;
    wire        axi_i_bready;
    wire        axi_i_arvalid;
    wire [31:0] axi_i_araddr;
    wire [3:0]  axi_i_arid;
    wire [7:0]  axi_i_arlen;
    wire [1:0]  axi_i_arburst;
    wire        axi_i_rready;

    wire        axi_i_awready;
    wire        axi_i_wready;
    wire        axi_i_bvalid;
    wire [1:0]  axi_i_bresp;
    wire [3:0]  axi_i_bid;
    wire        axi_i_arready;
    wire        axi_i_rvalid;
    wire [31:0] axi_i_rdata;
    wire [1:0]  axi_i_rresp;
    wire [3:0]  axi_i_rid;
    wire        axi_i_rlast;

    // Data master
    wire        axi_d_awvalid;
    wire [31:0] axi_d_awaddr;
    wire [3:0]  axi_d_awid;
    wire [7:0]  axi_d_awlen;
    wire [1:0]  axi_d_awburst;
    wire        axi_d_wvalid;
    wire [31:0] axi_d_wdata;
    wire [3:0]  axi_d_wstrb;
    wire        axi_d_wlast;
    wire        axi_d_bready;
    wire        axi_d_arvalid;
    wire [31:0] axi_d_araddr;
    wire [3:0]  axi_d_arid;
    wire [7:0]  axi_d_arlen;
    wire [1:0]  axi_d_arburst;
    wire        axi_d_rready;

    wire        axi_d_awready;
    wire        axi_d_wready;
    wire        axi_d_bvalid;
    wire [1:0]  axi_d_bresp;
    wire [3:0]  axi_d_bid;
    wire        axi_d_arready;
    wire        axi_d_rvalid;
    wire [31:0] axi_d_rdata;
    wire [1:0]  axi_d_rresp;
    wire [3:0]  axi_d_rid;
    wire        axi_d_rlast;

    // -------------------------------------------------------------------
    // DUT: riscv_top
    // -------------------------------------------------------------------
    riscv_top
    #(
        .CORE_ID            (0),
        .MEM_CACHE_ADDR_MIN (32'h0000_0000),
        .MEM_CACHE_ADDR_MAX (32'hffff_ffff)
    )
    u_dut
    (
        .clk_i              (clk_i),
        .rst_i              (rst_i),
        .reset_vector_i     (RESET_VECTOR),
        .intr_i             (intr_i),

        // Instruction AXI master
        .axi_i_awready_i    (axi_i_awready),
        .axi_i_wready_i     (axi_i_wready),
        .axi_i_bvalid_i     (axi_i_bvalid),
        .axi_i_bresp_i      (axi_i_bresp),
        .axi_i_bid_i        (axi_i_bid),
        .axi_i_arready_i    (axi_i_arready),
        .axi_i_rvalid_i     (axi_i_rvalid),
        .axi_i_rdata_i      (axi_i_rdata),
        .axi_i_rresp_i      (axi_i_rresp),
        .axi_i_rid_i        (axi_i_rid),
        .axi_i_rlast_i      (axi_i_rlast),

        .axi_i_awvalid_o    (axi_i_awvalid),
        .axi_i_awaddr_o     (axi_i_awaddr),
        .axi_i_awid_o       (axi_i_awid),
        .axi_i_awlen_o      (axi_i_awlen),
        .axi_i_awburst_o    (axi_i_awburst),
        .axi_i_wvalid_o     (axi_i_wvalid),
        .axi_i_wdata_o      (axi_i_wdata),
        .axi_i_wstrb_o      (axi_i_wstrb),
        .axi_i_wlast_o      (axi_i_wlast),
        .axi_i_bready_o     (axi_i_bready),
        .axi_i_arvalid_o    (axi_i_arvalid),
        .axi_i_araddr_o     (axi_i_araddr),
        .axi_i_arid_o       (axi_i_arid),
        .axi_i_arlen_o      (axi_i_arlen),
        .axi_i_arburst_o    (axi_i_arburst),
        .axi_i_rready_o     (axi_i_rready),

        // Data AXI master
        .axi_d_awready_i    (axi_d_awready),
        .axi_d_wready_i     (axi_d_wready),
        .axi_d_bvalid_i     (axi_d_bvalid),
        .axi_d_bresp_i      (axi_d_bresp),
        .axi_d_bid_i        (axi_d_bid),
        .axi_d_arready_i    (axi_d_arready),
        .axi_d_rvalid_i     (axi_d_rvalid),
        .axi_d_rdata_i      (axi_d_rdata),
        .axi_d_rresp_i      (axi_d_rresp),
        .axi_d_rid_i        (axi_d_rid),
        .axi_d_rlast_i      (axi_d_rlast),

        .axi_d_awvalid_o    (axi_d_awvalid),
        .axi_d_awaddr_o     (axi_d_awaddr),
        .axi_d_awid_o       (axi_d_awid),
        .axi_d_awlen_o      (axi_d_awlen),
        .axi_d_awburst_o    (axi_d_awburst),
        .axi_d_wvalid_o     (axi_d_wvalid),
        .axi_d_wdata_o      (axi_d_wdata),
        .axi_d_wstrb_o      (axi_d_wstrb),
        .axi_d_wlast_o      (axi_d_wlast),
        .axi_d_bready_o     (axi_d_bready),
        .axi_d_arvalid_o    (axi_d_arvalid),
        .axi_d_araddr_o     (axi_d_araddr),
        .axi_d_arid_o       (axi_d_arid),
        .axi_d_arlen_o      (axi_d_arlen),
        .axi_d_arburst_o    (axi_d_arburst),
        .axi_d_rready_o     (axi_d_rready)
    );

    // -------------------------------------------------------------------
    // Shared behavioral AXI4 memory model, instruction port
    // -------------------------------------------------------------------
    axi4_mem_model
    #(
        .MEM_BYTES   (65536),
        .INSTANCE_TAG("IMEM")
    )
    u_imem
    (
        .clk_i        (clk_i),
        .rst_i        (rst_i),

        .awvalid_i    (axi_i_awvalid),
        .awaddr_i     (axi_i_awaddr),
        .awid_i       (axi_i_awid),
        .awlen_i      (axi_i_awlen),
        .awburst_i    (axi_i_awburst),
        .wvalid_i     (axi_i_wvalid),
        .wdata_i      (axi_i_wdata),
        .wstrb_i      (axi_i_wstrb),
        .wlast_i      (axi_i_wlast),
        .bready_i     (axi_i_bready),
        .arvalid_i    (axi_i_arvalid),
        .araddr_i     (axi_i_araddr),
        .arid_i       (axi_i_arid),
        .arlen_i      (axi_i_arlen),
        .arburst_i    (axi_i_arburst),
        .rready_i     (axi_i_rready),

        .awready_o    (axi_i_awready),
        .wready_o     (axi_i_wready),
        .bvalid_o     (axi_i_bvalid),
        .bresp_o      (axi_i_bresp),
        .bid_o        (axi_i_bid),
        .arready_o    (axi_i_arready),
        .rvalid_o     (axi_i_rvalid),
        .rdata_o      (axi_i_rdata),
        .rresp_o      (axi_i_rresp),
        .rid_o        (axi_i_rid),
        .rlast_o      (axi_i_rlast)
    );

    // -------------------------------------------------------------------
    // Shared behavioral AXI4 memory model, data port
    // NOTE: u_imem and u_dmem are two model instances but must reflect the
    // same address space for this program to work (I-fetch and D-access
    // both target the same 64KB region). They are kept as separate module
    // instances (one per AXI master, mirroring the DUT's two independent
    // masters) but are preloaded identically at time 0 -- see load block
    // below. If your tests write data that instructions later fetch as code
    // (self-modifying code), this dual-model TB will NOT see that write
    // reflected on the instruction side; that is out of scope for boot/basic
    // execution verification.
    // -------------------------------------------------------------------
    axi4_mem_model
    #(
        .MEM_BYTES   (65536),
        .INSTANCE_TAG("DMEM")
    )
    u_dmem
    (
        .clk_i        (clk_i),
        .rst_i        (rst_i),

        .awvalid_i    (axi_d_awvalid),
        .awaddr_i     (axi_d_awaddr),
        .awid_i       (axi_d_awid),
        .awlen_i      (axi_d_awlen),
        .awburst_i    (axi_d_awburst),
        .wvalid_i     (axi_d_wvalid),
        .wdata_i      (axi_d_wdata),
        .wstrb_i      (axi_d_wstrb),
        .wlast_i      (axi_d_wlast),
        .bready_i     (axi_d_bready),
        .arvalid_i    (axi_d_arvalid),
        .araddr_i     (axi_d_araddr),
        .arid_i       (axi_d_arid),
        .arlen_i      (axi_d_arlen),
        .arburst_i    (axi_d_arburst),
        .rready_i     (axi_d_rready),

        .awready_o    (axi_d_awready),
        .wready_o     (axi_d_wready),
        .bvalid_o     (axi_d_bvalid),
        .bresp_o      (axi_d_bresp),
        .bid_o        (axi_d_bid),
        .arready_o    (axi_d_arready),
        .rvalid_o     (axi_d_rvalid),
        .rdata_o      (axi_d_rdata),
        .rresp_o      (axi_d_rresp),
        .rid_o        (axi_d_rid),
        .rlast_o      (axi_d_rlast)
    );

    // -------------------------------------------------------------------
    // Program load: hand-assembled RV32IM smoke-test program.
    //
    //   addi x1, x0, 5        # x1 = 5
    //   addi x2, x0, 7        # x2 = 7
    //   add  x3, x1, x2       # x3 = 12
    //   lui  x4, 0x1          # x4 = 0x00001000  (TOHOST_ADDR upper bits)
    //   sw   x3, 0(x4)        # mem[0x1000] = 12   -> write result to tohost
    //   addi x5, x0, 1        # x5 = 1
    //   sw   x5, 4(x4)        # mem[0x1004] = 1    -> "done" flag for TB
    // loop:
    //   jal  x0, loop         # spin
    //
    // Encodings generated per RV32I base ISA (opcode/funct fields), machine
    // mode, no privileged setup required (SUPPORT_SUPER=0 / SUPPORT_MMU=0
    // per PROCESSOR_CORE_REQUIREMENTS.md, so no CSR/mode init is needed to
    // execute plain integer instructions in M-mode at reset).
    // -------------------------------------------------------------------
    localparam NUM_INSTR = 8;
    reg [31:0] program [0:NUM_INSTR-1];

    initial begin
        program[0] = 32'h00500093; // addi x1, x0, 5
        program[1] = 32'h00700113; // addi x2, x0, 7
        program[2] = 32'h002081b3; // add  x3, x1, x2
        program[3] = 32'h00001237; // lui  x4, 0x1
        program[4] = 32'h00322023; // sw   x3, 0(x4)
        program[5] = 32'h00100293; // addi x5, x0, 1
        program[6] = 32'h00522223; // sw   x5, 4(x4)
        program[7] = 32'h0000006f; // jal  x0, 0  (self-loop)
    end

    integer i;
    initial begin
        // Preload identically into both memory model instances so
        // instruction fetch and data access see a consistent image.
        for (i = 0; i < NUM_INSTR; i = i + 1) begin
            u_imem.write_word(RESET_VECTOR + i*4, program[i]);
            u_dmem.write_word(RESET_VECTOR + i*4, program[i]);
        end
    end

    // -------------------------------------------------------------------
    // Reset / stimulus sequencing
    // -------------------------------------------------------------------
    integer cycle_count;

    initial begin
        rst_i       = 1'b1;
        intr_i      = 1'b0;
        cycle_count = 0;
        repeat (RESET_CYCLES) @(posedge clk_i);
        rst_i = 1'b0;
        $display("[%0t] TB: reset released, reset_vector = 0x%08h", $time, RESET_VECTOR);
    end

    always @(posedge clk_i) cycle_count = cycle_count + 1;

    // -------------------------------------------------------------------
    // Self-check: poll the "done" flag written by the program via the
    // data memory model's byte array directly (white-box check, simplest
    // reliable way to observe a store from the TB side).
    // -------------------------------------------------------------------
    reg test_done;
    reg test_pass;

    initial begin
        test_done = 1'b0;
        test_pass = 1'b0;

        wait (rst_i == 1'b0);

        while (!test_done && cycle_count < TIMEOUT_CYCLES) begin
            @(posedge clk_i);
            if (u_dmem.read_word(TOHOST_ADDR + 4) == 32'h1) begin
                test_done = 1'b1;
            end
        end

        if (test_done) begin
            if (u_dmem.read_word(TOHOST_ADDR) == 32'd12) begin
                test_pass = 1'b1;
                $display("[%0t] TB: PASS -- result = %0d at cycle %0d",
                          $time, u_dmem.read_word(TOHOST_ADDR), cycle_count);
            end else begin
                $display("[%0t] TB: FAIL -- expected 12, got %0d",
                          $time, u_dmem.read_word(TOHOST_ADDR));
            end
        end else begin
            $display("[%0t] TB: FAIL -- TIMEOUT after %0d cycles, done flag never set",
                      $time, cycle_count);
        end

        $display("=============================================");
        $display(" TEST RESULT: %s", test_pass ? "PASS" : "FAIL");
        $display("=============================================");

        #(CLK_PERIOD_NS*10);
        $finish;
    end

    // -------------------------------------------------------------------
    // Waveform dump (Vivado xsim: also add a .wcfg / use `log_wave` in TCL,
    // or run with `xsim tb_sim -gui` and add signals interactively)
    // -------------------------------------------------------------------
    initial begin
        $dumpfile("tb_riscv_top.vcd");
        $dumpvars(0, tb_riscv_top);
    end

endmodule
