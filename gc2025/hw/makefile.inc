
VERILOGDIR:=build/hw/verilog

BSVBUILDDIR:=build/hw/intermediate

BSVOUTDIR:=bin

BSCCMD:=bsc -u -verilog -elab -vdir build/hw/verilog -bdir build/hw/intermediate -info-dir build/hw/intermediate +RTS -K40000M -RTS -check-assert  -keep-fires -opt-undetermined-vals -remove-false-rules -remove-empty-rules -remove-starved-rules -remove-dollar -unspecified-to X -show-schedule -show-module-use -cross-info 

BSC_DEFINES:=Addr_space=25 xlen=32 flen=32 elen=32 bypass_sources=2 debug debug_bus_sz=32 ASSERT static_check VERBOSITY=0 isb_s0s1=2 isb_s1s2=2 isb_s2s3=1 isb_s3s4=8 isb_s4s5=8 RV32 ibuswidth=32 dbuswidth=32 resetpc=4096 paddr=32 vaddr=32 CORE_AXI4 iesize=2 desize=1 num_harts=1 microtrap_support wawid=0 bscan2e mhpm_eventcount=31 atomic reservation_sz=8 compressed muldiv MULSTAGES_IN=1 MULSTAGES_OUT=1 MULSTAGES_TOTAL=2 DIVSTAGES=32 zicsr bpu gshare btbdepth=8 bhtdepth=128 histlen=8 histbits=5 rasdepth=8 bpu_ras iwords=4 iblocks=16 iways=1 isets=64 ifbsize=4 icache_onehot=0 icache ifence irepl=0 dwords=4 dblocks=16 dways=1 dsets=64 dfbsize=4 dsbsize=2 dlbsize=4 dibsize=2 dcache_1rw dcache_onehot=0 dcache drepl=1 csr_low_latency reset_cycles=128 max_int_cause=16 max_ex_cause=32 causesize=7 stage0_noinline stage1_noinline stage2_noinline stage3_noinline stage4_noinline stage5_noinline mbox_noinline mbox_mul_noinline mbox_div_noinline registerfile_noinline bpu_noinline riscv_noinline csrbox_noinline scoreboard_noinline bypass_noinline base_alu_noinline decoder_noinline decompress_noinline

BSVINCDIR:=.:%/Libraries:c-class/src:c-class/src/predictors:c-class/src/fpu/:c-class/src/fpu/hardfloat:c-class/src/fpu/bsv_float:c-class/src/mbox:csrbox_bsv:fabrics/axi4:fabrics/axi4lite:fabrics/bridges:caches_mmu/src/dcache/:caches_mmu/src/icache_1rw/:caches_mmu/src/tlbs:caches_mmu/src/pmp:common_bsv/:common_verilog/bsvwrappers/:devices/bootrom:devices/pwm_v2/:devices/uart_v2:devices/clint:devices/bram:devices/riscvdebug100:devices/jtagdtm/:devices/err_slave/:devices/gpio_v2/:devices/riscv-plic/:devices/i2c/:devices/spi_v2/:devices/gptimer/:devices/iqc:devices/tcm

BS_VERILOG_LIB:=/scratch1/Vignesh/backup/bsc/bsv_Practice/bsc/inst/lib/Verilog/

TOP_MODULE:=mkDebugSoc

TOP_DIR:=./

TOP_FILE:=DebugSoc.bsv

VERILATOR_FLAGS:= -O3 -LDFLAGS "-static" --x-assign fast  --x-initial fast --noassert sim_main.cpp --bbox-sys -Wno-STMTDLY  -Wno-UNOPTFLAT -Wno-WIDTH -Wno-lint -Wno-COMBDLY -Wno-INITIALDLY  --autoflush   --threads 1 -DBSV_RESET_FIFO_HEAD  -DBSV_RESET_FIFO_ARRAY --output-split 20000  --output-split-ctrace 10000

VERILATOR_SPEED:= OPT_FAST="-O3" OPT_SLOW="-O3" OPT="-O3 "

SHAKTI_HOME:=/scratch1/iot/new/gc2025/hw

XLEN:=32

SYNTHTOP=fpga_top

TOP_BIN=DebugSoc.bo

include depends.mk
