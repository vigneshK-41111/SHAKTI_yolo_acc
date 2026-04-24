# SPDX-License-Identifier: GPL-3.0 only

SHELL := /bin/bash  # Use bash syntax

# Default variables
DC ?=
PROGRAM ?= dhry
ITERATIONS ?= 10000
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
	MARCH = rv64imac
	MABI  = lp64
	XLEN  = 64
	target = VAJRA
endif

# -----------------------------------------------------------------------------
# Compiler flags
# -----------------------------------------------------------------------------
FLAGS_STR = -mcmodel=medany -D$(target) -DCONFIG_RISCV$(XLEN)=True -static -std=gnu99 \
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
	@echo " Building Dhrystone for target: $(TARGET)"
	@echo " Architecture: $(MARCH) | ABI: $(MABI) | XLEN: $(XLEN)"
	@echo "==============================================="

	@riscv$(XLEN)-unknown-elf-gcc $(FLAGS_STR) -I$(bsplib) -I$(bspinc) -I$(bspdri)/plic -I./common \
		-c dhrystone.c -o ./output/dhrystone.o

	@riscv$(XLEN)-unknown-elf-gcc $(FLAGS_STR) -I$(bsplib) -I$(bspinc) -I$(bspdri)/plic -I./common \
		-c dhry_2.c -o ./output/dhry_2.o

	@riscv$(XLEN)-unknown-elf-gcc $(FLAGS_STR) -T $(bspboard)/link.ld \
		$(GENLIB)/gen_lib/libshakti$(XLEN).a ./output/dhrystone.o ./output/dhry_2.o \
		-o ./output/dhry.shakti -static -nostartfiles -lc -lm -lgcc

	@riscv$(XLEN)-unknown-elf-objdump -D ./output/dhry.shakti > ./output/$(PROGRAM).dump

# -----------------------------------------------------------------------------
# Utility targets
# -----------------------------------------------------------------------------
create_dir:
	@mkdir -p ./output

clean:
	rm -rf ./output
