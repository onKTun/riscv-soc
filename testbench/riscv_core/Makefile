IVERILOG ?= iverilog
VVP      ?= vvp

CORE_DIR := ../../core/riscv
RTL      := $(wildcard $(CORE_DIR)/*.v)
OUT      := riscv_core_tb.out

.PHONY: all run clean

all: run

$(OUT): riscv_core_tb.v $(RTL)
	$(IVERILOG) -g2012 -I$(CORE_DIR) -s riscv_core_tb -o $@ $(RTL) $<

run: $(OUT)
	$(VVP) $(OUT)

clean:
	rm -f $(OUT) riscv_core_tb.vcd
