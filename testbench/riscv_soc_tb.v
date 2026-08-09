`timescale 1ns/1ps

// Single entry point for the combined core, cache, and AXI testbench.
// The included files define the AXI memory model and top_cache_axi_tb.
`include "top_cache_axi/axi_memory_model.v"
`include "top_cache_axi/top_cache_axi_tb.v"
