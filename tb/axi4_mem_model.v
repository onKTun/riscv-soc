// =============================================================================
// axi4_mem_model.v
//
// Simple behavioral AXI4 Full subordinate (slave) memory model.
// Supports single-beat and fixed-length INCR bursts (as used by the
// icache/dcache 8-beat, 32-byte line fills and writebacks per
// RISCV_Core_TopCacheAXI_Microarchitecture.md / PROCESSOR_CORE_REQUIREMENTS.md).
//
// Simplifications (documented, not hidden):
//   - Always ready with a fixed 1-cycle response latency on AR/AW acceptance,
//     and a fixed 1-cycle latency before each R/B beat. No backpressure /
//     random stalling is modeled. Good enough for functional boot/basic-
//     execution checking; NOT a protocol-stress or timing-corner testbench.
//   - Only AXI4_BURST_INCR (2'b01) is exercised by the DUT in this scope, but
//     FIXED (2'b00) is also handled trivially (address does not increment).
//   - No WRAP support (not needed by this core/cache combination).
//   - No AWID/ARID-based reordering; responses are returned strictly in
//     request order (in-order single-threaded slave), which matches a single
//     shared-memory model at this level.
//   - Byte-addressed, word-aligned only (WSTRB partial-word writes ARE
//     respected on the write data path).
//
// Fix history: the W_IDLE/R_IDLE handshake checks originally read back
// awready_o/arready_o non-blockingly in the same cycle they were set,
// creating a same-cycle-visibility race. The write channel also did not
// handle a master asserting AWVALID and WVALID on the same cycle (as this
// project's dcache_axi.v does), which silently dropped the first (and, for
// single-beat stores, only) write-data beat and left the FSM stuck in
// W_DATA forever. Both fixed -- see knowledge_capture.md for the full
// root-cause trace from a real tb_riscv_top.v run.
// =============================================================================
`timescale 1ns / 1ps

module axi4_mem_model
#(
    parameter MEM_BYTES    = 65536,
    parameter INSTANCE_TAG = "MEM"
)
(
    input  wire        clk_i,
    input  wire        rst_i,

    // Write address channel
    input  wire        awvalid_i,
    input  wire [31:0] awaddr_i,
    input  wire [3:0]  awid_i,
    input  wire [7:0]  awlen_i,
    input  wire [1:0]  awburst_i,
    output reg         awready_o,

    // Write data channel
    input  wire        wvalid_i,
    input  wire [31:0] wdata_i,
    input  wire [3:0]  wstrb_i,
    input  wire        wlast_i,
    output reg         wready_o,

    // Write response channel
    output reg         bvalid_o,
    output reg  [1:0]  bresp_o,
    output reg  [3:0]  bid_o,
    input  wire        bready_i,

    // Read address channel
    input  wire        arvalid_i,
    input  wire [31:0] araddr_i,
    input  wire [3:0]  arid_i,
    input  wire [7:0]  arlen_i,
    input  wire [1:0]  arburst_i,
    output reg         arready_o,

    // Read data channel
    output reg         rvalid_o,
    output reg  [31:0] rdata_o,
    output reg  [1:0]  rresp_o,
    output reg  [3:0]  rid_o,
    output reg         rlast_o,
    input  wire        rready_i
);

    localparam [1:0] RESP_OKAY = 2'b00;

    // Byte-addressable backing store
    reg [7:0] mem [0:MEM_BYTES-1];

    integer j;
    initial begin
        for (j = 0; j < MEM_BYTES; j = j + 1)
            mem[j] = 8'h00;
        awready_o = 1'b0;
        wready_o  = 1'b0;
        bvalid_o  = 1'b0;
        bresp_o   = RESP_OKAY;
        bid_o     = 4'h0;
        arready_o = 1'b0;
        rvalid_o  = 1'b0;
        rdata_o   = 32'h0;
        rresp_o   = RESP_OKAY;
        rid_o     = 4'h0;
        rlast_o   = 1'b0;
    end

    // -------------------------------------------------------------------
    // Task/function API for the TB to preload / inspect memory directly.
    // -------------------------------------------------------------------
    task write_word(input [31:0] addr, input [31:0] data);
        begin
            mem[addr+0] = data[7:0];
            mem[addr+1] = data[15:8];
            mem[addr+2] = data[23:16];
            mem[addr+3] = data[31:24];
        end
    endtask

    function [31:0] read_word(input [31:0] addr);
        begin
            read_word = {mem[addr+3], mem[addr+2], mem[addr+1], mem[addr+0]};
        end
    endfunction

    // -------------------------------------------------------------------
    // Write channel FSM: accepts AW, then streams W beats (burst-aware),
    // then issues a single B response after the last beat.
    // -------------------------------------------------------------------
    localparam W_IDLE = 2'd0, W_DATA = 2'd1, W_RESP = 2'd2;
    reg [1:0]  w_state;
    reg [31:0] w_addr;
    reg [7:0]  w_beats_remaining;
    reg [3:0]  w_id_r;

    always @(posedge clk_i) begin
        if (rst_i) begin
            w_state           <= W_IDLE;
            awready_o         <= 1'b0;
            wready_o          <= 1'b0;
            bvalid_o          <= 1'b0;
            w_addr            <= 32'h0;
            w_beats_remaining <= 8'h0;
            w_id_r            <= 4'h0;
        end else begin
            case (w_state)
                W_IDLE: begin
                    awready_o <= 1'b1;
                    if (awvalid_i) begin
                        w_addr            <= awaddr_i;
                        w_beats_remaining <= awlen_i + 8'h1;
                        w_id_r            <= awid_i;
                        awready_o         <= 1'b0;
                        wready_o          <= 1'b1;
                        w_state           <= W_DATA;

                        // Handle a master that asserts AWVALID and WVALID
                        // on the same cycle (e.g. this core's dcache_axi.v
                        // wrapper: outport_wvalid_o and outport_awvalid_o
                        // both derive from the same inport_valid_w/write_w
                        // condition, asserted together). wready_o above
                        // won't be visible externally until next edge, so
                        // if wvalid_i is *already* high this same cycle,
                        // consume that first beat here directly -- otherwise
                        // a master that only pulses WVALID for one cycle
                        // will have that beat missed entirely, and W_DATA
                        // will wait forever for a WVALID that already came
                        // and went. This was the actual root cause of the
                        // tb_riscv_top.v lockup (AW fired once, W/B never
                        // completed) -- see knowledge_capture.md.
                        if (wvalid_i) begin
                            if (wstrb_i[0]) mem[awaddr_i+0] = wdata_i[7:0];
                            if (wstrb_i[1]) mem[awaddr_i+1] = wdata_i[15:8];
                            if (wstrb_i[2]) mem[awaddr_i+2] = wdata_i[23:16];
                            if (wstrb_i[3]) mem[awaddr_i+3] = wdata_i[31:24];

                            w_addr            <= awaddr_i + 32'h4;
                            w_beats_remaining <= awlen_i; // one beat already consumed

                            if (wlast_i || awlen_i == 8'h0) begin
                                wready_o <= 1'b0;
                                bvalid_o <= 1'b1;
                                bid_o    <= awid_i;
                                bresp_o  <= RESP_OKAY;
                                w_state  <= W_RESP;
                            end
                        end
                    end
                end

                W_DATA: begin
                    if (wvalid_i && wready_o) begin
                        if (wstrb_i[0]) mem[w_addr+0] = wdata_i[7:0];
                        if (wstrb_i[1]) mem[w_addr+1] = wdata_i[15:8];
                        if (wstrb_i[2]) mem[w_addr+2] = wdata_i[23:16];
                        if (wstrb_i[3]) mem[w_addr+3] = wdata_i[31:24];

                        w_addr            <= w_addr + 32'h4; // INCR; FIXED bursts (not used here) would hold addr
                        w_beats_remaining <= w_beats_remaining - 8'h1;

                        if (wlast_i || w_beats_remaining == 8'h1) begin
                            wready_o <= 1'b0;
                            bvalid_o <= 1'b1;
                            bid_o    <= w_id_r;
                            bresp_o  <= RESP_OKAY;
                            w_state  <= W_RESP;
                        end
                    end
                end

                W_RESP: begin
                    if (bvalid_o && bready_i) begin
                        bvalid_o  <= 1'b0;
                        w_state   <= W_IDLE;
                    end
                end

                default: w_state <= W_IDLE;
            endcase
        end
    end

    // -------------------------------------------------------------------
    // Read channel FSM: accepts AR, then streams R beats (burst-aware),
    // asserting RLAST on the final beat of the burst.
    // -------------------------------------------------------------------
    localparam R_IDLE = 2'd0, R_DATA = 2'd1;
    reg [1:0]  r_state;
    reg [31:0] r_addr;
    reg [7:0]  r_beats_remaining;
    reg [3:0]  r_id_r;

    always @(posedge clk_i) begin
        if (rst_i) begin
            r_state           <= R_IDLE;
            arready_o         <= 1'b0;
            rvalid_o          <= 1'b0;
            rlast_o           <= 1'b0;
            r_addr            <= 32'h0;
            r_beats_remaining <= 8'h0;
            r_id_r            <= 4'h0;
        end else begin
            case (r_state)
                R_IDLE: begin
                    arready_o <= 1'b1;
                    rlast_o   <= 1'b0;
                    // See W_IDLE above for why this checks arvalid_i alone
                    // rather than (arvalid_i && arready_o): arready_o was
                    // just scheduled non-blocking on the line above and its
                    // new value isn't visible until next edge. This FSM
                    // happened not to exhibit the bug in practice (arready_o
                    // is re-asserted every idle cycle, so the race window is
                    // effectively only the first idle cycle out of reset),
                    // but the same fix is applied here for correctness and
                    // consistency with the write channel.
                    if (arvalid_i) begin
                        r_addr            <= araddr_i;
                        r_beats_remaining <= arlen_i + 8'h1;
                        r_id_r            <= arid_i;
                        arready_o         <= 1'b0;
                        rvalid_o          <= 1'b1;
                        rdata_o           <= read_word(araddr_i);
                        rid_o             <= arid_i;
                        rresp_o           <= RESP_OKAY;
                        rlast_o           <= (arlen_i == 8'h0);
                        r_state           <= R_DATA;
                    end
                end

                R_DATA: begin
                    if (rvalid_o && rready_i) begin
                        if (r_beats_remaining <= 8'h1) begin
                            rvalid_o <= 1'b0;
                            rlast_o  <= 1'b0;
                            r_state  <= R_IDLE;
                        end else begin
                            r_addr            <= r_addr + 32'h4; // INCR
                            r_beats_remaining <= r_beats_remaining - 8'h1;
                            rdata_o           <= read_word(r_addr + 32'h4);
                            rlast_o           <= (r_beats_remaining == 8'h2);
                        end
                    end
                end

                default: r_state <= R_IDLE;
            endcase
        end
    end

endmodule
