`timescale 1ns/1ps

// SVA checker bound to the complete core + I-cache + D-cache AXI top.
module riscv_top_sva_checker (
    input logic clk_i,
    input logic rst_i,
    input logic i_awvalid, i_wvalid, i_bvalid, i_arvalid, i_arready,
    input logic i_rvalid, i_rlast,
    input logic [1:0] i_rresp,
    input logic [31:0] i_araddr,
    input logic [7:0] i_arlen,
    input logic [1:0] i_arburst,
    input logic d_awvalid, d_awready, d_wvalid, d_wready, d_bvalid,
    input logic d_arvalid, d_arready, d_rvalid, d_rlast,
    input logic [1:0] d_bresp, d_rresp,
    input logic [31:0] d_awaddr, d_araddr,
    input logic [7:0] d_awlen, d_arlen,
    input logic [1:0] d_awburst, d_arburst,
    input logic [31:0] d_wdata,
    input logic [3:0] d_wstrb,
    input logic d_wlast,
    input logic fetch_rd,
    input logic [31:0] fetch_pc,
    input logic core_d_rd,
    input logic [3:0] core_d_wr,
    input logic [1:0] icache_state,
    input logic [3:0] dcache_state,
    input logic dcache_pmem_ack,
    input logic dcache_pmem_last,
    input logic pipe_valid_e1, pipe_valid_e2, pipe_valid_wb,
    input logic [9:0] pipe_ctrl_e1, pipe_ctrl_e2, pipe_ctrl_wb,
    input logic [31:0] pipe_pc_e1, pipe_pc_e2, pipe_pc_wb,
    input logic [31:0] pipe_opcode_e1, pipe_opcode_e2, pipe_opcode_wb,
    input logic pipe_stall, pipe_squash,
    input logic [4:0] issue_ra_idx,
    input logic [31:0] issue_ra_value,
    input logic branch_taken, branch_not_taken, branch_request,
    input logic [31:0] branch_pc,
    input logic [31:0] pipe_result_wb,
    input logic [31:0] pipe_ra_wb, pipe_rb_wb,
    input logic [5:0] pipe_exception_e2, pipe_exception_wb,
    input logic commit_valid,
    input logic [4:0] commit_rd
);
    bit CHK_001_reset_quiet_seen;
    bit CHK_002_icache_refill_seen;
    bit CHK_003_icache_response_seen;
    bit CHK_004_dcache_read_seen;
    bit CHK_005_dcache_write_seen;
    bit CHK_006_dcache_response_seen;
    bit CHK_007_icache_fsm_seen;
    bit CHK_008_dcache_fsm_seen;
    bit CHK_009_reset_states_seen;
    bit CHK_010_icache_read_only_seen;
    bit CHK_011_fetch_alignment_seen;
    bit CHK_012_core_data_request_seen;
    bit CHK_013_icache_refill_exit_seen;
    bit CHK_014_icache_relookup_seen;
    bit CHK_015_dcache_refill_exit_seen;
    bit CHK_016_axi_response_seen;
    bit CHK_017_clock_period_seen;
    bit CHK_018_clock_duty_seen;
    bit CHK_019_reset_duration_seen;
    bit CHK_020_reset_release_seen;
    bit CHK_021_post_reset_quiet_seen;
    bit clock_posedge_seen;
    bit clock_negedge_seen;
    realtime last_posedge_time;
    realtime last_negedge_time;
    int unsigned reset_cycle_count;
    bit CHK_022_pipeline_reset_seen;
    bit CHK_023_load_store_exclusion_seen;
    bit CHK_024_operation_class_seen;
    bit CHK_025_invalid_stage_clear_seen;
    bit CHK_026_pipeline_stall_seen;
    bit CHK_028_zero_register_seen;
    bit CHK_029_pipeline_pc_seen;
    bit CHK_030_branch_control_seen;
    bit CHK_031_pipeline_progress_seen;
    bit CHK_032_pipeline_complete_seen;
    bit CHK_033_e1_e2_metadata_seen;
    bit CHK_034_e2_wb_metadata_seen;
    bit CHK_035_add_result_seen;
    bit CHK_036_lui_result_seen;
    bit CHK_037_commit_destination_seen;
    bit CHK_038_load_store_destination_seen;
    bit CHK_039_branch_class_seen;
    bit CHK_040_stall_cause_seen;

    CHK_001_reset_quiet_A: assert property (
        @(posedge clk_i) rst_i |->
        !(i_awvalid || i_wvalid || i_arvalid || d_awvalid || d_wvalid || d_arvalid)
    ) else $error("[CHK_001_reset_quiet] AXI request active during reset");
    CHK_001_reset_quiet_C: cover property (@(posedge clk_i) rst_i);

    CHK_002_icache_refill_A: assert property (
        @(posedge clk_i) disable iff (rst_i)
        i_arvalid |-> (i_araddr[4:0] == 5'b0 && i_arlen == 8'd7 && i_arburst == 2'b01)
    ) else $error("[CHK_002_icache_refill] illegal I-cache AXI refill request");
    CHK_002_icache_refill_C: cover property (
        @(posedge clk_i) disable iff (rst_i) i_arvalid && i_arready
    );

    CHK_003_icache_response_A: assert property (
        @(posedge clk_i) disable iff (rst_i) i_rlast |-> i_rvalid
    ) else $error("[CHK_003_icache_response] RLAST without RVALID");
    CHK_003_icache_response_C: cover property (
        @(posedge clk_i) disable iff (rst_i) i_rvalid && i_rlast
    );

    CHK_004_dcache_read_A: assert property (
        @(posedge clk_i) disable iff (rst_i)
        d_arvalid |-> (d_araddr[1:0] == 2'b0 && d_arburst == 2'b01)
    ) else $error("[CHK_004_dcache_read] illegal D-cache AXI read request");
    CHK_004_dcache_read_C: cover property (
        @(posedge clk_i) disable iff (rst_i) d_arvalid && d_arready
    );

    CHK_005_dcache_write_A: assert property (
        @(posedge clk_i) disable iff (rst_i)
        d_wvalid |-> (d_wstrb != 4'b0)
    ) else $error("[CHK_005_dcache_write] write beat has no active byte lanes");
    CHK_005_dcache_write_C: cover property (
        @(posedge clk_i) disable iff (rst_i) d_wvalid && d_wready
    );

    CHK_006_dcache_response_A: assert property (
        @(posedge clk_i) disable iff (rst_i) d_rlast |-> d_rvalid
    ) else $error("[CHK_006_dcache_response] RLAST without RVALID");
    CHK_006_dcache_response_C: cover property (
        @(posedge clk_i) disable iff (rst_i) d_bvalid || (d_rvalid && d_rlast)
    );

    CHK_007_icache_fsm_A: assert property (
        @(posedge clk_i) disable iff (rst_i) icache_state inside {[2'd0:2'd3]}
    ) else $error("[CHK_007_icache_fsm] illegal I-cache state");
    CHK_007_icache_fsm_C: cover property (
        @(posedge clk_i) disable iff (rst_i) icache_state == 2'd2
    );

    CHK_008_dcache_fsm_A: assert property (
        @(posedge clk_i) disable iff (rst_i) dcache_state inside {[4'd0:4'd10]}
    ) else $error("[CHK_008_dcache_fsm] illegal D-cache state");
    CHK_008_dcache_fsm_C: cover property (
        @(posedge clk_i) disable iff (rst_i) dcache_state == 4'd6
    );

    CHK_009_reset_states_A: assert property (
        @(posedge clk_i) rst_i |-> (icache_state == 2'd0 && dcache_state == 4'd0)
    ) else $error("[CHK_009_reset_states] cache did not remain in its reset state");
    CHK_009_reset_states_C: cover property (
        @(posedge clk_i) rst_i && icache_state == 2'd0 && dcache_state == 4'd0
    );

    CHK_010_icache_read_only_A: assert property (
        @(posedge clk_i) !(i_awvalid || i_wvalid)
    ) else $error("[CHK_010_icache_read_only] instruction cache attempted an AXI write");
    CHK_010_icache_read_only_C: cover property (
        @(posedge clk_i) disable iff (rst_i) i_arvalid && i_arready
    );

    CHK_011_fetch_alignment_A: assert property (
        @(posedge clk_i) disable iff (rst_i) fetch_rd |-> (fetch_pc[1:0] == 2'b00)
    ) else $error("[CHK_011_fetch_alignment] core issued a misaligned instruction fetch");
    CHK_011_fetch_alignment_C: cover property (
        @(posedge clk_i) disable iff (rst_i) fetch_rd
    );

    CHK_012_core_data_request_A: assert property (
        @(posedge clk_i) disable iff (rst_i) !(core_d_rd && (core_d_wr != 4'b0))
    ) else $error("[CHK_012_core_data_request] simultaneous core data read and write");
    CHK_012_core_data_request_C: cover property (
        @(posedge clk_i) disable iff (rst_i) core_d_rd || (core_d_wr != 4'b0)
    );

    CHK_013_icache_refill_exit_A: assert property (
        @(posedge clk_i) disable iff (rst_i)
        icache_state == 2'd2 && i_rvalid && i_rlast |=> icache_state == 2'd3
    ) else $error("[CHK_013_icache_refill_exit] completed refill did not enter RELOOKUP");
    CHK_013_icache_refill_exit_C: cover property (
        @(posedge clk_i) disable iff (rst_i) icache_state == 2'd2 && i_rvalid && i_rlast
    );

    CHK_014_icache_relookup_A: assert property (
        @(posedge clk_i) disable iff (rst_i) icache_state == 2'd3 |=> icache_state == 2'd1
    ) else $error("[CHK_014_icache_relookup] RELOOKUP did not return to LOOKUP");
    CHK_014_icache_relookup_C: cover property (
        @(posedge clk_i) disable iff (rst_i) icache_state == 2'd3
    );

    CHK_015_dcache_refill_exit_A: assert property (
        @(posedge clk_i) disable iff (rst_i)
        dcache_state == 4'd6 && dcache_pmem_ack && dcache_pmem_last
        |=> dcache_state inside {4'd4, 4'd5}
    ) else $error("[CHK_015_dcache_refill_exit] completed refill did not enter READ or WRITE");
    CHK_015_dcache_refill_exit_C: cover property (
        @(posedge clk_i) disable iff (rst_i)
        dcache_state == 4'd6 && dcache_pmem_ack && dcache_pmem_last
    );

    CHK_016_axi_response_I_R_A: assert property (
        @(posedge clk_i) disable iff (rst_i) i_rvalid |-> i_rresp == 2'b00
    ) else $error("[CHK_016_axi_response] non-OKAY instruction read response");
    CHK_016_axi_response_D_R_A: assert property (
        @(posedge clk_i) disable iff (rst_i) d_rvalid |-> d_rresp == 2'b00
    ) else $error("[CHK_016_axi_response] non-OKAY data read response");
    CHK_016_axi_response_D_B_A: assert property (
        @(posedge clk_i) disable iff (rst_i) d_bvalid |-> d_bresp == 2'b00
    ) else $error("[CHK_016_axi_response] non-OKAY data write response");
    CHK_016_axi_response_C: cover property (
        @(posedge clk_i) disable iff (rst_i) i_rvalid || d_rvalid || d_bvalid
    );

    // The 10 ns period is the cycle-based default selected by the plan.
    always @(posedge clk_i) begin : CHK_017_clock_period_A
        if (clock_posedge_seen) begin
            assert (($realtime - last_posedge_time) == 10ns)
                else $error("[CHK_017_clock_period] expected 10 ns, measured %0t", $realtime - last_posedge_time);
            CHK_017_clock_period_seen = 1'b1;
        end
        last_posedge_time = $realtime;
        clock_posedge_seen = 1'b1;
    end
    CHK_017_clock_period_C: cover property (@(posedge clk_i) CHK_017_clock_period_seen);

    always @(negedge clk_i) begin : CHK_018_clock_high_time_A
        if (clock_posedge_seen) begin
            assert (($realtime - last_posedge_time) == 5ns)
                else $error("[CHK_018_clock_duty] clock high time is not 5 ns");
            CHK_018_clock_duty_seen = 1'b1;
        end
        last_negedge_time = $realtime;
        clock_negedge_seen = 1'b1;
    end
    always @(posedge clk_i) begin : CHK_018_clock_low_time_A
        if (clock_negedge_seen)
            assert (($realtime - last_negedge_time) == 5ns)
                else $error("[CHK_018_clock_duty] clock low time is not 5 ns");
    end
    CHK_018_clock_duty_C: cover property (@(posedge clk_i) CHK_018_clock_duty_seen);

    always_ff @(posedge clk_i) begin
        if (rst_i)
            reset_cycle_count <= reset_cycle_count + 1'b1;
    end
    CHK_019_reset_duration_A: assert property (
        @(posedge clk_i) $fell(rst_i) |-> reset_cycle_count >= 5
    ) else $error("[CHK_019_reset_duration] reset was held for fewer than five clocks");
    CHK_019_reset_duration_C: cover property (
        @(posedge clk_i) $fell(rst_i) && reset_cycle_count >= 5
    );

    CHK_020_reset_release_A: assert property (
        @(posedge clk_i) $fell(rst_i) |=> !rst_i
    ) else $error("[CHK_020_reset_release] reset reasserted immediately after release");
    CHK_020_reset_release_C: cover property (@(posedge clk_i) $fell(rst_i));

    CHK_021_post_reset_quiet_A: assert property (
        @(posedge clk_i) $fell(rst_i) |->
        !(i_awvalid || i_wvalid || i_arvalid || d_awvalid || d_wvalid || d_arvalid)
    ) else $error("[CHK_021_post_reset_quiet] AXI request active on first clock after reset release");
    CHK_021_post_reset_quiet_C: cover property (
        @(posedge clk_i) $fell(rst_i) &&
        !(i_awvalid || i_wvalid || i_arvalid || d_awvalid || d_wvalid || d_arvalid)
    );

    CHK_022_pipeline_reset_A: assert property (
        @(posedge clk_i) rst_i |->
        (!pipe_valid_e1 && !pipe_valid_e2 && !pipe_valid_wb &&
         pipe_ctrl_e1 == 10'b0 && pipe_ctrl_e2 == 10'b0 && pipe_ctrl_wb == 10'b0)
    ) else $error("[CHK_022_pipeline_reset] pipeline registers not clear during reset");
    CHK_022_pipeline_reset_C: cover property (
        @(posedge clk_i) rst_i && !pipe_valid_e1 && !pipe_valid_e2 && !pipe_valid_wb
    );

    CHK_023_load_store_exclusion_A: assert property (
        @(posedge clk_i) disable iff (rst_i)
        !(pipe_ctrl_e1[1] && pipe_ctrl_e1[2]) && !(pipe_ctrl_e2[1] && pipe_ctrl_e2[2])
    ) else $error("[CHK_023_load_store_exclusion] pipeline stage marked as both load and store");
    CHK_023_load_store_exclusion_C: cover property (
        @(posedge clk_i) disable iff (rst_i) pipe_ctrl_e1[1] || pipe_ctrl_e1[2]
    );

    CHK_024_operation_class_A: assert property (
        @(posedge clk_i) disable iff (rst_i)
        $onehot0(pipe_ctrl_e1[5:1]) && $onehot0(pipe_ctrl_e2[5:1])
    ) else $error("[CHK_024_operation_class] multiple exclusive operation classes active");
    CHK_024_operation_class_C: cover property (
        @(posedge clk_i) disable iff (rst_i) |pipe_ctrl_e1[5:1]
    );

    CHK_025_invalid_stage_clear_A: assert property (
        @(posedge clk_i) disable iff (rst_i) !pipe_valid_e1 |-> pipe_ctrl_e1 == 10'b0
    ) else $error("[CHK_025_invalid_stage_clear] invalid E1 stage retained control bits");
    CHK_025_invalid_stage_clear_C: cover property (
        @(posedge clk_i) disable iff (rst_i) !pipe_valid_e1 && pipe_ctrl_e1 == 10'b0
    );

    CHK_026_pipeline_stall_A: assert property (
        @(posedge clk_i) disable iff (rst_i) pipe_stall |=>
        $stable({pipe_valid_e1, pipe_ctrl_e1, pipe_pc_e1, pipe_opcode_e1,
                 pipe_valid_e2, pipe_ctrl_e2, pipe_pc_e2, pipe_opcode_e2,
                 pipe_valid_wb, pipe_ctrl_wb, pipe_pc_wb, pipe_opcode_wb})
    ) else $error("[CHK_026_pipeline_stall] pipeline registers changed while stalled");
    CHK_026_pipeline_stall_C: cover property (
        @(posedge clk_i) disable iff (rst_i) pipe_stall
    );

    CHK_028_zero_register_A: assert property (
        @(posedge clk_i) disable iff (rst_i) issue_ra_idx == 5'd0 |-> issue_ra_value == 32'b0
    ) else $error("[CHK_028_zero_register] x0 source operand was not zero");
    CHK_028_zero_register_C: cover property (
        @(posedge clk_i) disable iff (rst_i) issue_ra_idx == 5'd0
    );

    CHK_029_pipeline_pc_A: assert property (
        @(posedge clk_i) disable iff (rst_i)
        (!pipe_valid_e1 || pipe_pc_e1[1:0] == 2'b00) &&
        (!pipe_valid_e2 || pipe_pc_e2[1:0] == 2'b00) &&
        (!pipe_valid_wb || pipe_pc_wb[1:0] == 2'b00)
    ) else $error("[CHK_029_pipeline_pc] valid pipeline PC is not word aligned");
    CHK_029_pipeline_pc_C: cover property (
        @(posedge clk_i) disable iff (rst_i) pipe_valid_wb
    );

    CHK_030_branch_control_A: assert property (
        @(posedge clk_i) disable iff (rst_i)
        !(branch_taken && branch_not_taken) && (!branch_request || branch_pc[1:0] == 2'b00)
    ) else $error("[CHK_030_branch_control] contradictory branch result or misaligned target");
    CHK_030_branch_control_C: cover property (
        @(posedge clk_i) disable iff (rst_i) branch_request
    );

    CHK_031_pipeline_progress_A: assert property (
        @(posedge clk_i) disable iff (rst_i)
        pipe_valid_e1 && !pipe_stall && !pipe_squash |=> pipe_valid_e2
    ) else $error("[CHK_031_pipeline_progress] valid E1 instruction did not advance to E2");
    CHK_031_pipeline_progress_C: cover property (
        @(posedge clk_i) disable iff (rst_i) pipe_valid_e1 && !pipe_stall && !pipe_squash
    );

    CHK_032_pipeline_complete_A: assert property (
        @(posedge clk_i) disable iff (rst_i)
        (!pipe_valid_e1 || pipe_ctrl_e1[9]) &&
        (!pipe_valid_e2 || pipe_ctrl_e2[9]) &&
        (!pipe_valid_wb || pipe_ctrl_wb[9])
    ) else $error("[CHK_032_pipeline_complete] valid stage missing COMPLETE control");
    CHK_032_pipeline_complete_C: cover property (
        @(posedge clk_i) disable iff (rst_i) pipe_valid_e1 && pipe_valid_e2 && pipe_valid_wb
    );

    CHK_033_e1_e2_metadata_A: assert property (
        @(posedge clk_i) disable iff (rst_i)
        pipe_valid_e1 && !pipe_stall && !pipe_squash |=>
        (pipe_pc_e2 == $past(pipe_pc_e1) &&
         pipe_opcode_e2 == $past(pipe_opcode_e1) &&
         pipe_ctrl_e2 == $past(pipe_ctrl_e1))
    ) else $error("[CHK_033_e1_e2_metadata] E1 metadata did not propagate to E2");
    CHK_033_e1_e2_metadata_C: cover property (
        @(posedge clk_i) disable iff (rst_i) pipe_valid_e1 && !pipe_stall && !pipe_squash
    );

    CHK_034_e2_wb_metadata_A: assert property (
        @(posedge clk_i) disable iff (rst_i)
        pipe_valid_e2 && !pipe_stall && pipe_exception_e2 == 6'b0 |=>
        pipe_stall ||
        (pipe_pc_wb == $past(pipe_pc_e2) &&
         pipe_opcode_wb == $past(pipe_opcode_e2) &&
         pipe_ctrl_wb == $past(pipe_ctrl_e2))
    ) else $error("[CHK_034_e2_wb_metadata] E2 metadata did not propagate to writeback");
    CHK_034_e2_wb_metadata_C: cover property (
        @(posedge clk_i) disable iff (rst_i) pipe_valid_e2 && !pipe_stall && pipe_exception_e2 == 6'b0
    );

    CHK_035_add_result_ADDI_A: assert property (
        @(posedge clk_i) disable iff (rst_i)
        commit_valid && ((pipe_opcode_wb & 32'h0000_707f) == 32'h0000_0013)
        |-> pipe_result_wb == pipe_ra_wb + {{20{pipe_opcode_wb[31]}}, pipe_opcode_wb[31:20]}
    ) else $error("[CHK_035_add_result] incorrect ADDI writeback result");
    CHK_035_add_result_ADD_A: assert property (
        @(posedge clk_i) disable iff (rst_i)
        commit_valid && ((pipe_opcode_wb & 32'hfe00_707f) == 32'h0000_0033)
        |-> pipe_result_wb == pipe_ra_wb + pipe_rb_wb
    ) else $error("[CHK_035_add_result] incorrect ADD writeback result");
    CHK_035_add_result_C: cover property (
        @(posedge clk_i) disable iff (rst_i)
        commit_valid && (((pipe_opcode_wb & 32'h0000_707f) == 32'h0000_0013) ||
                         ((pipe_opcode_wb & 32'hfe00_707f) == 32'h0000_0033))
    );

    CHK_036_lui_result_A: assert property (
        @(posedge clk_i) disable iff (rst_i)
        commit_valid && pipe_opcode_wb[6:0] == 7'b0110111
        |-> pipe_result_wb == {pipe_opcode_wb[31:12], 12'b0}
    ) else $error("[CHK_036_lui_result] incorrect LUI writeback result");
    CHK_036_lui_result_C: cover property (
        @(posedge clk_i) disable iff (rst_i) commit_valid && pipe_opcode_wb[6:0] == 7'b0110111
    );

    CHK_037_commit_destination_A: assert property (
        @(posedge clk_i) disable iff (rst_i)
        commit_rd != 5'd0 |-> (commit_valid && commit_rd == pipe_opcode_wb[11:7])
    ) else $error("[CHK_037_commit_destination] writeback destination does not match instruction RD");
    CHK_037_commit_destination_C: cover property (
        @(posedge clk_i) disable iff (rst_i) commit_valid && commit_rd != 5'd0
    );

    CHK_038_load_store_destination_LOAD_A: assert property (
        @(posedge clk_i) disable iff (rst_i) pipe_ctrl_e1[1] |-> pipe_ctrl_e1[7]
    ) else $error("[CHK_038_load_store_destination] load missing RD-valid control");
    CHK_038_load_store_destination_STORE_A: assert property (
        @(posedge clk_i) disable iff (rst_i) pipe_ctrl_e1[2] |-> !pipe_ctrl_e1[7]
    ) else $error("[CHK_038_load_store_destination] load/store RD-valid control is incorrect");
    CHK_038_load_store_destination_C: cover property (
        @(posedge clk_i) disable iff (rst_i) pipe_ctrl_e1[1] || pipe_ctrl_e1[2]
    );

    CHK_039_branch_class_A: assert property (
        @(posedge clk_i) disable iff (rst_i)
        pipe_ctrl_e1[6] |-> pipe_ctrl_e1[0]
    ) else $error("[CHK_039_branch_class] branch was not classified for ALU execution");
    CHK_039_branch_class_C: cover property (
        @(posedge clk_i) disable iff (rst_i) pipe_ctrl_e1[6]
    );

    CHK_040_stall_cause_A: assert property (
        @(posedge clk_i) disable iff (rst_i)
        pipe_stall |-> (pipe_ctrl_e1[4] || pipe_ctrl_e2[1] || pipe_ctrl_e2[2])
    ) else $error("[CHK_040_stall_cause] pipeline stalled without a DIV/load/store cause");
    CHK_040_stall_cause_C: cover property (
        @(posedge clk_i) disable iff (rst_i) pipe_stall
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
            CHK_009_reset_states_seen <= 1'b1;
            CHK_010_icache_read_only_seen <= 1'b0;
            CHK_011_fetch_alignment_seen <= 1'b0;
            CHK_012_core_data_request_seen <= 1'b0;
            CHK_013_icache_refill_exit_seen <= 1'b0;
            CHK_014_icache_relookup_seen <= 1'b0;
            CHK_015_dcache_refill_exit_seen <= 1'b0;
            CHK_016_axi_response_seen <= 1'b0;
            CHK_022_pipeline_reset_seen <= 1'b1;
            CHK_023_load_store_exclusion_seen <= 1'b0;
            CHK_024_operation_class_seen <= 1'b0;
            CHK_025_invalid_stage_clear_seen <= 1'b0;
            CHK_026_pipeline_stall_seen <= 1'b0;
            CHK_028_zero_register_seen <= 1'b0;
            CHK_029_pipeline_pc_seen <= 1'b0;
            CHK_030_branch_control_seen <= 1'b0;
            CHK_031_pipeline_progress_seen <= 1'b0;
            CHK_032_pipeline_complete_seen <= 1'b0;
            CHK_033_e1_e2_metadata_seen <= 1'b0;
            CHK_034_e2_wb_metadata_seen <= 1'b0;
            CHK_035_add_result_seen <= 1'b0;
            CHK_036_lui_result_seen <= 1'b0;
            CHK_037_commit_destination_seen <= 1'b0;
            CHK_038_load_store_destination_seen <= 1'b0;
            CHK_039_branch_class_seen <= 1'b0;
            CHK_040_stall_cause_seen <= 1'b0;
        end else begin
            if (i_arvalid && i_arready) CHK_002_icache_refill_seen <= 1'b1;
            if (i_rvalid && i_rlast) CHK_003_icache_response_seen <= 1'b1;
            if (d_arvalid && d_arready) CHK_004_dcache_read_seen <= 1'b1;
            if (d_wvalid && d_wready) CHK_005_dcache_write_seen <= 1'b1;
            if (d_bvalid || (d_rvalid && d_rlast)) CHK_006_dcache_response_seen <= 1'b1;
            if (icache_state == 2'd2) CHK_007_icache_fsm_seen <= 1'b1;
            if (dcache_state == 4'd6) CHK_008_dcache_fsm_seen <= 1'b1;
            if (i_arvalid && i_arready) CHK_010_icache_read_only_seen <= 1'b1;
            if (fetch_rd) CHK_011_fetch_alignment_seen <= 1'b1;
            if (core_d_rd || (core_d_wr != 4'b0)) CHK_012_core_data_request_seen <= 1'b1;
            if (icache_state == 2'd2 && i_rvalid && i_rlast) CHK_013_icache_refill_exit_seen <= 1'b1;
            if (icache_state == 2'd3) CHK_014_icache_relookup_seen <= 1'b1;
            if (dcache_state == 4'd6 && dcache_pmem_ack && dcache_pmem_last) CHK_015_dcache_refill_exit_seen <= 1'b1;
            if (i_rvalid || d_rvalid || d_bvalid) CHK_016_axi_response_seen <= 1'b1;
            if (pipe_ctrl_e1[1] || pipe_ctrl_e1[2]) CHK_023_load_store_exclusion_seen <= 1'b1;
            if (|pipe_ctrl_e1[5:1]) CHK_024_operation_class_seen <= 1'b1;
            if (!pipe_valid_e1 && pipe_ctrl_e1 == 10'b0) CHK_025_invalid_stage_clear_seen <= 1'b1;
            if (pipe_stall) CHK_026_pipeline_stall_seen <= 1'b1;
            if (issue_ra_idx == 5'd0) CHK_028_zero_register_seen <= 1'b1;
            if (pipe_valid_wb) CHK_029_pipeline_pc_seen <= 1'b1;
            if (branch_request) CHK_030_branch_control_seen <= 1'b1;
            if (pipe_valid_e1 && !pipe_stall && !pipe_squash) CHK_031_pipeline_progress_seen <= 1'b1;
            if (pipe_valid_e1 && pipe_valid_e2 && pipe_valid_wb) CHK_032_pipeline_complete_seen <= 1'b1;
            if (pipe_valid_e1 && !pipe_stall && !pipe_squash) CHK_033_e1_e2_metadata_seen <= 1'b1;
            if (pipe_valid_e2 && !pipe_stall && pipe_exception_e2 == 6'b0) CHK_034_e2_wb_metadata_seen <= 1'b1;
            if (commit_valid && (((pipe_opcode_wb & 32'h0000_707f) == 32'h0000_0013) ||
                                 ((pipe_opcode_wb & 32'hfe00_707f) == 32'h0000_0033))) CHK_035_add_result_seen <= 1'b1;
            if (commit_valid && pipe_opcode_wb[6:0] == 7'b0110111) CHK_036_lui_result_seen <= 1'b1;
            if (commit_valid && commit_rd != 5'd0) CHK_037_commit_destination_seen <= 1'b1;
            if (pipe_ctrl_e1[1] || pipe_ctrl_e1[2]) CHK_038_load_store_destination_seen <= 1'b1;
            if (pipe_ctrl_e1[6]) CHK_039_branch_class_seen <= 1'b1;
            if (pipe_stall) CHK_040_stall_cause_seen <= 1'b1;
            if ($fell(rst_i) && reset_cycle_count >= 5) CHK_019_reset_duration_seen <= 1'b1;
            if ($fell(rst_i)) begin
                CHK_020_reset_release_seen <= 1'b1;
                if (!(i_awvalid || i_wvalid || i_arvalid || d_awvalid || d_wvalid || d_arvalid))
                    CHK_021_post_reset_quiet_seen <= 1'b1;
            end
        end
    end

    final begin
        $display("[CORE COVERAGE] reset=%0b ls=%0b op=%0b invalid=%0b stall=%0b x0=%0b pc=%0b branch=%0b progress=%0b",
                 CHK_022_pipeline_reset_seen, CHK_023_load_store_exclusion_seen,
                 CHK_024_operation_class_seen, CHK_025_invalid_stage_clear_seen,
                 CHK_026_pipeline_stall_seen, CHK_028_zero_register_seen, CHK_029_pipeline_pc_seen,
                 CHK_030_branch_control_seen, CHK_031_pipeline_progress_seen);
        if (!(CHK_001_reset_quiet_seen && CHK_002_icache_refill_seen &&
              CHK_003_icache_response_seen && CHK_004_dcache_read_seen &&
              CHK_005_dcache_write_seen && CHK_006_dcache_response_seen &&
              CHK_007_icache_fsm_seen && CHK_008_dcache_fsm_seen &&
              CHK_009_reset_states_seen && CHK_010_icache_read_only_seen &&
              CHK_011_fetch_alignment_seen && CHK_012_core_data_request_seen &&
              CHK_013_icache_refill_exit_seen && CHK_014_icache_relookup_seen &&
              CHK_015_dcache_refill_exit_seen && CHK_016_axi_response_seen &&
              CHK_017_clock_period_seen && CHK_018_clock_duty_seen &&
              CHK_019_reset_duration_seen && CHK_020_reset_release_seen &&
              CHK_021_post_reset_quiet_seen && CHK_022_pipeline_reset_seen &&
              CHK_023_load_store_exclusion_seen && CHK_024_operation_class_seen &&
              CHK_025_invalid_stage_clear_seen && CHK_026_pipeline_stall_seen &&
              CHK_028_zero_register_seen && CHK_029_pipeline_pc_seen && CHK_030_branch_control_seen &&
              CHK_031_pipeline_progress_seen && CHK_032_pipeline_complete_seen &&
              CHK_033_e1_e2_metadata_seen && CHK_034_e2_wb_metadata_seen &&
              CHK_035_add_result_seen && CHK_036_lui_result_seen &&
              CHK_037_commit_destination_seen && CHK_038_load_store_destination_seen &&
              CHK_039_branch_class_seen && CHK_040_stall_cause_seen))
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
    .i_rlast(axi_i_rlast_i), .i_rresp(axi_i_rresp_i), .i_araddr(axi_i_araddr_o),
    .i_arlen(axi_i_arlen_o), .i_arburst(axi_i_arburst_o),
    .d_awvalid(axi_d_awvalid_o), .d_awready(axi_d_awready_i),
    .d_wvalid(axi_d_wvalid_o), .d_wready(axi_d_wready_i),
    .d_bvalid(axi_d_bvalid_i), .d_arvalid(axi_d_arvalid_o),
    .d_arready(axi_d_arready_i), .d_rvalid(axi_d_rvalid_i),
    .d_rlast(axi_d_rlast_i), .d_bresp(axi_d_bresp_i), .d_rresp(axi_d_rresp_i),
    .d_awaddr(axi_d_awaddr_o),
    .d_araddr(axi_d_araddr_o), .d_awlen(axi_d_awlen_o),
    .d_arlen(axi_d_arlen_o), .d_awburst(axi_d_awburst_o),
    .d_arburst(axi_d_arburst_o), .d_wdata(axi_d_wdata_o),
    .d_wstrb(axi_d_wstrb_o), .d_wlast(axi_d_wlast_o),
    .fetch_rd(icache_rd_w), .fetch_pc(icache_pc_w),
    .core_d_rd(dcache_rd_w), .core_d_wr(dcache_wr_w),
    .icache_state(u_icache.state_q), .dcache_state(u_dcache.u_core.state_q),
    .dcache_pmem_ack(u_dcache.u_core.pmem_ack_w),
    .dcache_pmem_last(u_dcache.u_core.pmem_last_w),
    .pipe_valid_e1(u_core.u_issue.u_pipe_ctrl.valid_e1_q),
    .pipe_valid_e2(u_core.u_issue.u_pipe_ctrl.valid_e2_q),
    .pipe_valid_wb(u_core.u_issue.u_pipe_ctrl.valid_wb_q),
    .pipe_ctrl_e1(u_core.u_issue.u_pipe_ctrl.ctrl_e1_q),
    .pipe_ctrl_e2(u_core.u_issue.u_pipe_ctrl.ctrl_e2_q),
    .pipe_ctrl_wb(u_core.u_issue.u_pipe_ctrl.ctrl_wb_q),
    .pipe_pc_e1(u_core.u_issue.u_pipe_ctrl.pc_e1_q),
    .pipe_pc_e2(u_core.u_issue.u_pipe_ctrl.pc_e2_q),
    .pipe_pc_wb(u_core.u_issue.u_pipe_ctrl.pc_wb_q),
    .pipe_opcode_e1(u_core.u_issue.u_pipe_ctrl.opcode_e1_q),
    .pipe_opcode_e2(u_core.u_issue.u_pipe_ctrl.opcode_e2_q),
    .pipe_opcode_wb(u_core.u_issue.u_pipe_ctrl.opcode_wb_q),
    .pipe_stall(u_core.u_issue.stall_w),
    .pipe_squash(u_core.u_issue.pipe_squash_e1_e2_w),
    .issue_ra_idx(u_core.opcode_ra_idx_w),
    .issue_ra_value(u_core.opcode_ra_operand_w),
    .branch_taken(u_core.branch_exec_is_taken_w),
    .branch_not_taken(u_core.branch_exec_is_not_taken_w),
    .branch_request(u_core.branch_exec_request_w),
    .branch_pc(u_core.branch_exec_pc_w),
    .pipe_result_wb(u_core.u_issue.u_pipe_ctrl.result_wb_q),
    .pipe_ra_wb(u_core.u_issue.u_pipe_ctrl.operand_ra_wb_q),
    .pipe_rb_wb(u_core.u_issue.u_pipe_ctrl.operand_rb_wb_q),
    .pipe_exception_e2(u_core.u_issue.u_pipe_ctrl.exception_e2_r),
    .pipe_exception_wb(u_core.u_issue.u_pipe_ctrl.exception_wb_q),
    .commit_valid(u_core.u_issue.pipe_valid_wb_w),
    .commit_rd(u_core.u_issue.pipe_rd_wb_w)
);

`include "top_cache_axi/axi_memory_model.v"
`define TB_MODULE_NAME riscv_top_tb
`define TB_VCD_FILENAME "riscv_top.vcd"
`include "top_cache_axi/top_cache_axi_tb.v"
