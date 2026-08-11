//      // verilator_coverage annotation
        `timescale 1ns/1ps
        
        // SVA checker bound to the complete core + I-cache + D-cache AXI top.
        module riscv_top_sva_checker (
            input logic clk_i,
            input logic rst_i,
            input logic i_awvalid, i_wvalid, i_bvalid, i_arvalid, i_arready,
            input logic i_rvalid, i_rlast,
            input logic [31:0] i_araddr,
            input logic [7:0] i_arlen,
            input logic [1:0] i_arburst,
            input logic d_awvalid, d_awready, d_wvalid, d_wready, d_bvalid,
            input logic d_arvalid, d_arready, d_rvalid, d_rlast,
            input logic [31:0] d_awaddr, d_araddr,
            input logic [7:0] d_awlen, d_arlen,
            input logic [1:0] d_awburst, d_arburst,
            input logic [31:0] d_wdata,
            input logic [3:0] d_wstrb,
            input logic d_wlast,
            input logic [1:0] icache_state,
            input logic [3:0] dcache_state
        );
            bit CHK_001_reset_quiet_seen;
            bit CHK_002_icache_refill_seen;
            bit CHK_003_icache_response_seen;
            bit CHK_004_dcache_read_seen;
            bit CHK_005_dcache_write_seen;
            bit CHK_006_dcache_response_seen;
            bit CHK_007_icache_fsm_seen;
            bit CHK_008_dcache_fsm_seen;
        
            CHK_001_reset_quiet_A: assert property (
                @(posedge clk_i) rst_i |->
                !(i_awvalid || i_wvalid || i_arvalid || d_awvalid || d_wvalid || d_arvalid)
            ) else $error("[CHK_001_reset_quiet] AXI request active during reset");
%000005     CHK_001_reset_quiet_C: cover property (@(posedge clk_i) rst_i);
        
            CHK_002_icache_refill_A: assert property (
                @(posedge clk_i) disable iff (rst_i)
                i_arvalid |-> (i_araddr[4:0] == 5'b0 && i_arlen == 8'd7 && i_arburst == 2'b01)
            ) else $error("[CHK_002_icache_refill] illegal I-cache AXI refill request");
%000002     CHK_002_icache_refill_C: cover property (
                @(posedge clk_i) disable iff (rst_i) i_arvalid && i_arready
            );
        
            CHK_003_icache_response_A: assert property (
                @(posedge clk_i) disable iff (rst_i) i_rlast |-> i_rvalid
            ) else $error("[CHK_003_icache_response] RLAST without RVALID");
%000002     CHK_003_icache_response_C: cover property (
                @(posedge clk_i) disable iff (rst_i) i_rvalid && i_rlast
            );
        
            CHK_004_dcache_read_A: assert property (
                @(posedge clk_i) disable iff (rst_i)
                d_arvalid |-> (d_araddr[1:0] == 2'b0 && d_arburst == 2'b01)
            ) else $error("[CHK_004_dcache_read] illegal D-cache AXI read request");
%000001     CHK_004_dcache_read_C: cover property (
                @(posedge clk_i) disable iff (rst_i) d_arvalid && d_arready
            );
        
            CHK_005_dcache_write_A: assert property (
                @(posedge clk_i) disable iff (rst_i)
                d_wvalid |-> (d_wstrb != 4'b0)
            ) else $error("[CHK_005_dcache_write] write beat has no active byte lanes");
%000001     CHK_005_dcache_write_C: cover property (
                @(posedge clk_i) disable iff (rst_i) d_wvalid && d_wready
            );
        
            CHK_006_dcache_response_A: assert property (
                @(posedge clk_i) disable iff (rst_i) d_rlast |-> d_rvalid
            ) else $error("[CHK_006_dcache_response] RLAST without RVALID");
%000002     CHK_006_dcache_response_C: cover property (
                @(posedge clk_i) disable iff (rst_i) d_bvalid || (d_rvalid && d_rlast)
            );
        
            CHK_007_icache_fsm_A: assert property (
                @(posedge clk_i) disable iff (rst_i) icache_state inside {[2'd0:2'd3]}
            ) else $error("[CHK_007_icache_fsm] illegal I-cache state");
 000016     CHK_007_icache_fsm_C: cover property (
                @(posedge clk_i) disable iff (rst_i) icache_state == 2'd2
            );
        
            CHK_008_dcache_fsm_A: assert property (
                @(posedge clk_i) disable iff (rst_i) dcache_state inside {[4'd0:4'd10]}
            ) else $error("[CHK_008_dcache_fsm] illegal D-cache state");
%000009     CHK_008_dcache_fsm_C: cover property (
                @(posedge clk_i) disable iff (rst_i) dcache_state == 4'd6
            );
        
            // Required antecedent/behavior tracking prevents vacuous sign-off.
            always_ff @(posedge clk_i) begin
                if (rst_i) begin
                    CHK_001_reset_quiet_seen <= 1'b1;
                    CHK_002_icache_refill_seen <= 1'b0;
                    CHK_003_icache_response_seen <= 1'b0;
                    CHK_004_dcache_read_seen <= 1'b0;
                    CHK_005_dcache_write_seen <= 1'b0;
                    CHK_006_dcache_response_seen <= 1'b0;
                    CHK_007_icache_fsm_seen <= 1'b0;
                    CHK_008_dcache_fsm_seen <= 1'b0;
                end else begin
                    if (i_arvalid && i_arready) CHK_002_icache_refill_seen <= 1'b1;
                    if (i_rvalid && i_rlast) CHK_003_icache_response_seen <= 1'b1;
                    if (d_arvalid && d_arready) CHK_004_dcache_read_seen <= 1'b1;
                    if (d_wvalid && d_wready) CHK_005_dcache_write_seen <= 1'b1;
                    if (d_bvalid || (d_rvalid && d_rlast)) CHK_006_dcache_response_seen <= 1'b1;
                    if (icache_state == 2'd2) CHK_007_icache_fsm_seen <= 1'b1;
                    if (dcache_state == 4'd6) CHK_008_dcache_fsm_seen <= 1'b1;
                end
            end
        
            final begin
                if (!(CHK_001_reset_quiet_seen && CHK_002_icache_refill_seen &&
                      CHK_003_icache_response_seen && CHK_004_dcache_read_seen &&
                      CHK_005_dcache_write_seen && CHK_006_dcache_response_seen &&
                      CHK_007_icache_fsm_seen && CHK_008_dcache_fsm_seen))
                    $fatal(1, "[COVERAGE] one or more required CHK triggers were not observed");
                else
                    $display("[COVERAGE] all required SVA triggers were observed");
            end
        endmodule
        
        bind riscv_top riscv_top_sva_checker sva_checker (
            .clk_i(clk_i), .rst_i(rst_i),
            .i_awvalid(axi_i_awvalid_o), .i_wvalid(axi_i_wvalid_o),
            .i_bvalid(axi_i_bvalid_i), .i_arvalid(axi_i_arvalid_o),
            .i_arready(axi_i_arready_i), .i_rvalid(axi_i_rvalid_i),
            .i_rlast(axi_i_rlast_i), .i_araddr(axi_i_araddr_o),
            .i_arlen(axi_i_arlen_o), .i_arburst(axi_i_arburst_o),
            .d_awvalid(axi_d_awvalid_o), .d_awready(axi_d_awready_i),
            .d_wvalid(axi_d_wvalid_o), .d_wready(axi_d_wready_i),
            .d_bvalid(axi_d_bvalid_i), .d_arvalid(axi_d_arvalid_o),
            .d_arready(axi_d_arready_i), .d_rvalid(axi_d_rvalid_i),
            .d_rlast(axi_d_rlast_i), .d_awaddr(axi_d_awaddr_o),
            .d_araddr(axi_d_araddr_o), .d_awlen(axi_d_awlen_o),
            .d_arlen(axi_d_arlen_o), .d_awburst(axi_d_awburst_o),
            .d_arburst(axi_d_arburst_o), .d_wdata(axi_d_wdata_o),
            .d_wstrb(axi_d_wstrb_o), .d_wlast(axi_d_wlast_o),
            .icache_state(u_icache.state_q), .dcache_state(u_dcache.u_core.state_q)
        );
        
        `include "top_cache_axi/axi_memory_model.v"
        `define TB_MODULE_NAME riscv_top_tb
        `define TB_VCD_FILENAME "riscv_top.vcd"
        `include "top_cache_axi/top_cache_axi_tb.v"
        
