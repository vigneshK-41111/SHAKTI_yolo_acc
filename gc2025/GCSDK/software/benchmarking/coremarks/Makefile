# SPDX-License-Identifier: GPL-3.0 only

SHELL := /bin/bash  # Use bash syntax

# Default variables
DC ?=
PROGRAM ?= coremark
ITERATIONS ?= 100
TARGET ?= yamuna
DEBUG ?=

# Architecture defaults
MARCH ?= rv64imac
MABI ?= lp64
XLEN ?= 64
FLAGS ?=
target ?= CUSTOM

# -----------------------------------------------------------------------------
# Target-based configuration
# -----------------------------------------------------------------------------
ifeq ($(TARGET),yamuna)
	MARCH = rv32imac_zicsr_zifencei
	MABI  = ilp32
	XLEN  = 64
	target = YAMUNA
endif

ifeq ($(TARGET),ganga)
	MARCH = rv64imac_zicsr_zifencei
	MABI  = lp64
	XLEN  = 64
	target = GANGA
endif

ifeq ($(TARGET),vajra)
	MARCH = rv64imac_zicsr_zifencei
	MABI  = lp64
	XLEN  = 64
	target = VAJRA
endif

# -----------------------------------------------------------------------------
# Compiler flags
# -----------------------------------------------------------------------------
FLAGS_STR = -mcmodel=medany -D$(target) -DPERFORMANCE_RUN=1 -DMAIN_HAS_NOARGC=1 -DHAS_STDIO \
						-DHAS_PRINTF -DHAS_TIME_H -DUSE_CLOCK -DHAS_FLOAT=0 -DITERATIONS=$(ITERATIONS) \
						-O3 -fno-common -funroll-loops -finline-functions -fselective-scheduling \
						-falign-functions=16 -falign-jumps=4 -falign-loops=4 -finline-limit=1000 \
					 	-nostartfiles -nostdlib -ffast-math -fno-builtin-printf \
						-mexplicit-relocs -march=$(MARCH) -mabi=$(MABI) 
# -----------------------------------------------------------------------------
# Default target
# -----------------------------------------------------------------------------
all: create_dir
	make $(PROGRAM).riscv TARGET=$(TARGET)

# -----------------------------------------------------------------------------
# Build rule
# -----------------------------------------------------------------------------
$(PROGRAM).riscv: create_dir
	@echo "==============================================="
	@echo " Building CoreMark for target: $(TARGET)"
	@echo " Architecture: $(MARCH) | ABI: $(MABI) | XLEN: $(XLEN)"
	@echo "==============================================="
	@echo "$(FLAGS_STR)" > ./output/compiler_flags.txt
	@riscv$(XLEN)-unknown-elf-gcc $(FLAGS_STR) -I$(bsplib) -I$(bspinc) -I$(bspdri)/plic \
		-I./common -I./coremarks -I$(bspboard) \
		-c coremarks/core_util.c -o ./output/core_util.o  -lc -lm -lgcc

	@riscv$(XLEN)-unknown-elf-gcc $(FLAGS_STR) -I$(bsplib) -I$(bspinc) -I$(bspdri)/plic \
		-I./common -I./coremarks -I$(bspboard) \
		-c coremarks/core_state.c -o ./output/core_state.o  -lc -lm -lgcc

	@riscv$(XLEN)-unknown-elf-gcc $(FLAGS_STR) -I$(bsplib) -I$(bspinc) -I$(bspdri)/plic \
		-I./common -I./coremarks -I$(bspboard) \
		-c coremarks/core_list_join.c -o ./output/core_list_join.o  -lc -lm -lgcc

	@riscv$(XLEN)-unknown-elf-gcc $(FLAGS_STR) -I$(bsplib) -I$(bspinc) -I$(bspdri)/plic \
		-I./common -I./coremarks -I$(bspboard) \
		-c coremarks/core_portme.c -o ./output/core_portme.o  -lc -lm -lgcc

	@riscv$(XLEN)-unknown-elf-gcc $(FLAGS_STR) -I$(bsplib) -I$(bspinc) -I$(bspdri)/plic \
		-I./common -I./coremarks -I$(bspboard) \
		-c coremarks.c -o ./output/coremarks.o  -lc -lm -lgcc

	@riscv$(XLEN)-unknown-elf-gcc $(FLAGS_STR) -I$(bsplib) -I$(bspinc) -I$(bspdri)/plic \
		-I./common -I./coremarks -I$(bspboard) \
		-c coremarks/core_matrix.c -o ./output/core_matrix.o  -lc -lm -lgcc

	@riscv$(XLEN)-unknown-elf-gcc $(FLAGS_STR) -T $(bspboard)/link.ld \
		$(GENLIB)/gen_lib/libshakti$(XLEN).a \
		./output/core_util.o ./output/core_state.o ./output/core_list_join.o \
		./output/core_portme.o ./output/coremarks.o ./output/core_matrix.o \
		-o ./output/coremarks.shakti -static -nostartfiles  -lc -lm -lgcc

	@riscv$(XLEN)-unknown-elf-objdump -D ./output/coremarks.shakti > ./output/$(PROGRAM).dump

# -----------------------------------------------------------------------------
# Utility targets
# -----------------------------------------------------------------------------
create_dir:
	@mkdir -p ./output

clean:
	rm -rf ./output
