IVERILOG ?= iverilog
VVP      ?= vvp
CORE_DIR := ../../core/riscv
TOP_DIR  := ../../top_cache_axi/src_v
RTL      := $(wildcard $(CORE_DIR)/*.v) $(wildcard $(TOP_DIR)/*.v)
OUT      := top_cache_axi_tb.out

.PHONY: all run clean
all: run
$(OUT): top_cache_axi_tb.v axi_memory_model.v $(RTL)
	$(IVERILOG) -g2012 -I$(CORE_DIR) -I$(TOP_DIR) -s top_cache_axi_tb -o $@ $(RTL) axi_memory_model.v top_cache_axi_tb.v
run: $(OUT)
	$(VVP) $(OUT)
clean:
	rm -f $(OUT) top_cache_axi_tb.vcd
