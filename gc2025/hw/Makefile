## 			Makefile for C-Class on Arty-A7
-include makefile.inc
XLEN_build ?= 64
ISA=RV$(XLEN_build)IMAFDCSU
JOBS:=$(shell nproc)
SHAKTI_HOME:=$(CURDIR)

WORKING_DIR := $(shell pwd)
Vivado_loc=$(shell which vivado || which vivado_lab)

ifeq ($(BSCAN2E), enable)
	override BSC_DEFINES += bscan2e=True
	JTAG_TYPE:=JTAG_BSCAN2E
else
	JTAG_TYPE:=JTAG_EXTERNAL
endif

ifeq ($(BOARD), arty_a7)
	FPGA:=xc7a100tcsg324-1
	MCS:=true
else ifeq ($(BOARD), arty_a7_yamuna)
	FPGA:=xc7a100tcsg324-1
	MCS:=true
else ifeq ($(BOARD), nexys_a7)
	FPGA:=xc7a100tcsg324-1
	MCS:=true
else ifeq ($(BOARD), arty_a7_ganga)
	FPGA:=xc7a100tcsg324-1
	MCS:=true
else ifeq ($(BOARD), nexys4_ddr)
	FPGA:=xc7a100tcsg324-1
	MCS:=true
else ifeq ($(BOARD), arty_a7_fpu)
	FPGA:=xc7a100tcsg324-1
	MCS:=true
else ifeq ($(BOARD), profpga)
	FPGA:=xcvu440-flga2892-1-c
	MCS:=false
else ifeq ($(BOARD), nexys_video)
	FPGA:=xc7a200tsbg484-1
	MCS:=true
else ifeq ($(BOARD), genesys2_yamuna)
	FPGA:=xc7k325tffg900-2
	MCS:=true
else ifeq ($(BOARD), genesys2_ganga)
	FPGA:=xc7k325tffg900-2
	MCS:=true
else ifeq ($(BOARD), vcu118)
	FPGA:=xcvu9p-flga2104-2L-e
	MCS:=false
else ifeq ($(BOARD), vcu108)
	FPGA:=xcvu095-ffva2104-2-e
	MCS:=false
endif

MOREDEFINES=$(addprefix -D , $(BSC_DEFINES))

# ------------------------------------- Makefile TARGETS ----------------------------------------- #
default: quick_build_xilinx
build:  quick_build_xilinx 
build_hyp: quick_build_xilinx_hyp
build: ## To start bitstream and MCS file generation for boards (passed through BOARD parameter)

rebuild:
	@make generate_verilog -j && make generate_boot_files ip_build board_build

build_program: quick_build_xilinx program_mcs
build_program: ## To start bitstream and MCS file generation  for boards (passed through BOARD parameter) and program it to the BOARD connected.

%.bo:
	 $(info building $@)
	 @$(BSCCMD) $(MOREDEFINES) -p $(BSVINCDIR) $<

.PHONY: help
help: ## This help dialog.
	@fgrep -h "##" $(MAKEFILE_LIST) | fgrep -v fgrep | sed -e 's/\\$$//' | sed -e 's/##//' | column	-c2 -t -s :

.PHONY: run_setup_fpga
run_setup_fpga: ## Run command to setup all dependant files for FPGA.
	@pip3 install -r requirements.txt
	@cp -r boards/$(BOARD)/. .
	@python3 -m configure.main --ispec sample_config/c$(XLEN_build)_$(BOARD)/rv$(XLEN_build)i_isa.yaml \
	--customspec sample_config/c$(XLEN_build)_$(BOARD)/rv$(XLEN_build)i_custom.yaml \
	--cspec sample_config/c$(XLEN_build)_$(BOARD)/core$(XLEN_build).yaml \
	--gspec sample_config/c$(XLEN_build)_$(BOARD)/csr_grouping$(XLEN_build).yaml \
	--dspec sample_config/c$(XLEN_build)_$(BOARD)/rv$(XLEN_build)i_debug.yaml
# ifeq ($(BOARD), arty_a7)
# endif
	@mkdir build
	@mkdir build/hw
	@mkdir build/hw/intermediate
	@mkdir build/hw/verilog

.PHONY: run_setup_fpga_hyp
run_setup_fpga_hyp: ## Run command to setup all dependant files for FPGA.
	@pip3 install -r requirements.txt
	@python3 -m configure.main --ispec sample_config/h64_$(BOARD)/rv64i_isa.yaml \
	--customspec sample_config/h64_$(BOARD)/rv64i_custom.yaml \
	--cspec sample_config/h64_$(BOARD)/core64.yaml \
	--gspec sample_config/h64_$(BOARD)/csr_grouping64.yaml \
	--dspec sample_config/h64_$(BOARD)/rv64i_debug.yaml
# ifeq ($(BOARD), arty_a7)
	@cp -r boards/$(BOARD)/. .
# endif
	@mkdir build
	@mkdir build/hw
	@mkdir build/hw/intermediate
	@mkdir build/hw/verilog

	
.PHONY: run_setup_sim
run_setup_sim: ## Run command to setup all dependant files for simulation.
	@pip3 install -r requirements.txt
	./run_sim.sh

.PHONY: simulate
simulate: ## Compile BSV and generate simulation executable with Verilator and boot files
simulate: run_setup_sim
	@make generate_verilog -j && make generate_boot_files_sim link_verilator 

.PHONY: generate_boot_files
generate_boot_files:
ifeq ($(BOARD), arty_a7_yamuna)
	@cd boot-code-yamuna; make
	@cp boot-code-yamuna/outputs/boot.mem $(VERILOGDIR)/
else ifeq ($(BOARD), nexys_a7)
	@cd boot-code-yamuna; make
	@cp boot-code-yamuna/outputs/boot.mem $(VERILOGDIR)/
else ifeq ($(BOARD), genesys2_yamuna)
	@cd boot-code-yamuna; make
	@cp boot-code-yamuna/outputs/boot.mem $(VERILOGDIR)/
else ifeq ($(BOARD), genesys2_ganga)
	@cd boot-code-ganga; make
	@cp boot-code-ganga/outputs/boot.mem $(VERILOGDIR)/
else ifeq ($(BOARD), arty_a7_ganga)
	@cd boot-code-ganga; make
	@cp boot-code-ganga/outputs/boot.mem $(VERILOGDIR)/
else
	@cd boot-code; make
	@cp boot-code/outputs/boot.mem $(VERILOGDIR)/
endif

.PHONY: quick_build_xilinx
quick_build_xilinx: run_setup_fpga
	@make generate_verilog -j && make generate_boot_files ip_build board_build

.PHONY: quick_build_xilinx_hyp
quick_build_xilinx_hyp: run_setup_fpga_hyp
	@make generate_verilog -j && make generate_boot_files ip_build board_build  

.PHONY: link_verilator                                                                              
link_verilator: ## Generate simulation executable using Verilator                                   
	@echo "Linking $(TOP_MODULE) using verilator"
	@mkdir -p $(BSVOUTDIR) obj_dir
	@echo "#define TOPMODULE V$(TOP_MODULE)" > sim_main.h                                             
	@echo '#include "V$(TOP_MODULE).h"' >> sim_main.h                                                 
	verilator $(VERILATOR_FLAGS) --cc $(TOP_MODULE).v -y $(VERILOGDIR) -y $(BS_VERILOG_LIB) -y common_verilog --exe        
	@ln -f -s sim_main.cpp obj_dir/sim_main.cpp                                                       
	@ln -f -s sim_main.h obj_dir/sim_main.h                                                           
	@make -j8 -C obj_dir -f V$(TOP_MODULE).mk                                                         
	@cp obj_dir/V$(TOP_MODULE) $(BSVOUTDIR)/out

.PHONY: link_verilator_gdb
link_verilator_gdb: ## Generate simulation executable using Verilator and VPI for GDB
	@echo "Linking Verilator With the Shakti RBB Vpi"
	@mkdir -p $(BSVOUTDIR) obj_dir
	@echo "#define TOPMODULE V$(TOP_MODULE)_edited" >sim_main.h
	@echo '#include "V$(TOP_MODULE)_edited.h"' >> sim_main.h
	@sed  -f devices/jtagdtm/sed_script.txt  $(VERILOGDIR)/$(TOP_MODULE).v > tmp1.v
	@cat  devices/jtagdtm/verilator_config.vlt \
	      devices/jtagdtm/vpi_sv.v \
	      tmp1.v                         > $(VERILOGDIR)/$(TOP_MODULE)_edited.v
	@rm   -f  tmp1.v
	verilator $(VERILATOR_FLAGS) --threads-dpi all --cc $(TOP_MODULE)_edited.v --exe sim_main.cpp devices/jtagdtm/RBB_Shakti.c -y $(VERILOGDIR) -y $(BS_VERILOG_LIB) -y common_verilog 
	@ln -f -s sim_main.cpp obj_dir/sim_main.cpp
	@ln -f -s sim_main.h obj_dir/sim_main.h
	@ln -f -s ./devices/jtagdtm/RBB_Shakti.c obj_dir/RBB_Shakti.c
	@echo "INFO: Linking verilated files"
	make $(VERILATOR_SPEED) VM_PARALLEL_BUILDS=1 -j4 -C obj_dir -f V$(TOP_MODULE)_edited.mk
	@cp obj_dir/V$(TOP_MODULE)_edited $(BSVOUTDIR)/out
	@cp gdb_setup/code.mem$(XLEN) $(BSVOUTDIR)/code.mem
	@echo Linking finished

.PHONY: generate_verilog 
generate_verilog: $(BSVBUILDDIR)/$(TOP_BIN)
	@cp ${BS_VERILOG_LIB}/../Verilog.Vivado/RegFile.v ${VERILOGDIR}  
	@cp ${BS_VERILOG_LIB}/../Verilog.Vivado/BRAM2BELoad.v ${VERILOGDIR} 
	@cp ./ip_verilog/* ${VERILOGDIR}  
	@cp ${BS_VERILOG_LIB}/FIFO2.v ${VERILOGDIR}
	@cp ${BS_VERILOG_LIB}/FIFO1.v ${VERILOGDIR}
	@cp ${BS_VERILOG_LIB}/FIFO10.v ${VERILOGDIR}
	@cp ${BS_VERILOG_LIB}/FIFOL1.v ${VERILOGDIR}
	@cp ${BS_VERILOG_LIB}/Counter.v ${VERILOGDIR}
	@cp ${BS_VERILOG_LIB}/SizedFIFO.v ${VERILOGDIR}
	@cp ${BS_VERILOG_LIB}/ResetEither.v ${VERILOGDIR}
	@cp ${BS_VERILOG_LIB}/MakeReset0.v ${VERILOGDIR}
	@cp ${BS_VERILOG_LIB}/SyncReset0.v ${VERILOGDIR}
	@cp ${BS_VERILOG_LIB}/ClockInverter.v ${VERILOGDIR}
	@cp ${BS_VERILOG_LIB}/SyncFIFO1.v ${VERILOGDIR}
	@cp ${BS_VERILOG_LIB}/SyncFIFO.v ${VERILOGDIR}
	@cp ${BS_VERILOG_LIB}/RevertReg.v ${VERILOGDIR}
	@cp ${BS_VERILOG_LIB}/SyncBit.v ${VERILOGDIR}
	@cp ./common_verilog/bram_1rw.v ${VERILOGDIR}
	@cp ${BS_VERILOG_LIB}/FIFO20.v ${VERILOGDIR}
	@cp ${BS_VERILOG_LIB}/BRAM1.v ${VERILOGDIR}
	@cp ./common_verilog/bram_2rw.v ${VERILOGDIR}
	@cp common_verilog/signedmul.v ${VERILOGDIR}
	@cp ${BS_VERILOG_LIB}/SyncRegister.v ${VERILOGDIR}
	@cp ${BS_VERILOG_LIB}/MakeClock.v ${VERILOGDIR}
	@cp ${BS_VERILOG_LIB}/UngatedClockMux.v ${VERILOGDIR}
	@cp ${BS_VERILOG_LIB}/MakeResetA.v ${VERILOGDIR}
	@cp ${BS_VERILOG_LIB}/SyncResetA.v ${VERILOGDIR}
	@cp ${BS_VERILOG_LIB}/SyncHandshake.v ${VERILOGDIR}
	@echo Compilation finished

.PHONY: regress
regress: ## To run regressions on the core.
	@SHAKTI_HOME=$$PWD perl -I$(SHAKTI_HOME)/verification/verif-scripts $(SHAKTI_HOME)/verification/verif-scripts/makeRegress.pl $(opts)

.PHONY: test
test: ## To run a single riscv-test on the core.
	@SHAKTI_HOME=$$PWD CONFIG_LOG=0 perl -I$(SHAKTI_HOME)/verification/verif-scripts $(SHAKTI_HOME)/verification/verif-scripts/makeTest.pl $(opts)

.PHONY: torture
torture: ## To run riscv-tortur on the core.
	@SHAKTI_HOME=$$PWD perl -I$(SHAKTI_HOME)/verification/verif-scripts $(SHAKTI_HOME)/verification/verif-scripts/makeTorture.pl $(opts)

.PHONY: aapg
aapg: ## to generate and run aapf tests
	@SHAKTI_HOME=$$PWD perl -I$(SHAKTI_HOME)/verification/verif-scripts $(SHAKTI_HOME)/verification/verif-scripts/makeAapg.pl $(opts)

.PHONY: csmith
csmith: ## to generate and run csmith tests
	@SHAKTI_HOME=$$PWD perl -I$(SHAKTI_HOME)/verification/verif-scripts $(SHAKTI_HOME)/verification/verif-scripts/makeCSmith.pl $(opts)

.PHONY: update_xlen
update_xlen:
	@echo "XLEN=$(XLEN)" > verification/dts/Makefile.inc

.PHONY: generate_boot_files_sim
generate_boot_files_sim: ## to generate boot files for simulation
generate_boot_files_sim: update_xlen
	@mkdir -p bin
	@cd verification/dts/; make;
	@head -n 4096 verification/dts/boot.hex > bin/boot.mem
	@rm -rf bin/boot1.mem
	@for number in $$(seq 1 8192) ; do \
    echo "00000000" >> bin/boot1.mem; \
  done;
	@cut -c1-8 verification/dts/boot.hex > bin/boot.MSB
	@if [ "$(XLEN)" = "64" ]; then\
	  cut -c9-16 verification/dts/boot.hex > bin/boot.LSB;\
    else cp bin/boot.MSB bin/boot.LSB;\
  fi

.PHONY: ip_build
ip_build: ## build Xilinx Core-IPs used in this project
	vivado -log ipbuild.log -nojournal -mode tcl -notrace -source boards/$(BOARD)/tcl/create_ip_project.tcl \
		-tclargs $(FPGA) $(XLEN) $(ISA) $(JOBS) \
		|| (echo "Could not create IP project"; exit 1)

.PHONY: board_build
board_build:
	vivado -nojournal -nolog -mode tcl -notrace -source boards/$(BOARD)/tcl/create_project.tcl -tclargs $(SYNTHTOP) $(FPGA) $(ISA) $(JTAG_TYPE) $(VERILOGDIR)\
	|| (echo "Could not create core project"; exit 1)
	vivado -nojournal -log artybuild.log -notrace -mode tcl -source boards/$(BOARD)/tcl/run.tcl \
		-tclargs $(JOBS) || (echo "ERROR: While running synthesis")
ifeq ($(MCS),true)
	@make generate_mcs BOARD=$(BOARD)
endif

.PHONY: program_fpga_jlink
program_fpga_jlink: ## program the fpga
	$(Vivado_loc) -nojournal -nolog -mode tcl -source boards/$(BOARD)/tcl/program.tcl

.PHONY: generate_mcs
generate_mcs: ## Generate the FPGA Configuration Memory file.
	vivado -nojournal -nolog -mode tcl -source boards/$(BOARD)/tcl/generate_mcs.tcl

.PHONY: program_mcs
program_mcs: ## Program the FPGA Configuration Memory in order to use the onboard ftdi jtag chain
	$(Vivado_loc) -nojournal -nolog -mode tcl -source boards/$(BOARD)/tcl/program_mcs.tcl
	echo "Please Disconnect and reconnect Your Arty Board from your PC"
	echo "After programming reset the device once and run \"sudo openocd \
	-f shakti-arty.cfg\" to start a gdb server at localhost:3333 "

.PHONY: program_bitstream
program_bitstream: ## Program the FPGA bitstream directly to the FPGA device
	$(Vivado_loc) -nojournal -nolog -mode tcl -source boards/$(BOARD)/tcl/program.tcl
	echo "Bitstream programmed to FPGA."
	echo "Run \"sudo openocd -f shakti-arty.cfg\" to start GDB server at localhost:3333"


.PHONY: clean
clean: ## clean bsv build director
	rm -rf build

.PHONY: clean_verif
clean_verif:
	rm -rf verification/workdir/*
	rm -rf verification/riscv-torture/output/riscv-torture
.PHONY: clean_all
clean_all: ## Clean all things including BSV and fpga_project and verification
	rm -rf build
	rm -rf verification/workdir/*
	rm -rf verification/riscv-torture/output/riscv-torture
	rm -rf fpga_project
		@python3 -m configure.main --ispec sample_config/c$(XLEN_build)_$(BOARD)/rv$(XLEN_build)i_isa.yaml \
	--customspec sample_config/c$(XLEN_build)_$(BOARD)/rv$(XLEN_build)i_custom.yaml \
	--cspec sample_config/c$(XLEN_build)_$(BOARD)/core$(XLEN_build).yaml \
	--gspec sample_config/c$(XLEN_build)_$(BOARD)/csr_grouping$(XLEN_build).yaml \
	--dspec sample_config/c$(XLEN_build)_$(BOARD)/rv$(XLEN_build)i_debug.yaml --clean
