# Created by Sathya Narayanan N
# Email id: sathya281@gmail.com

# Copyright (C) 2019 IIT Madras. All rights reserved.

# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.

# You should have received a copy of the GNU General Public License
# along with this program. If not, see <https://www.gnu.org/licenses/>

SHELL := /bin/bash # Use bash syntax
DC ?=
PROGRAM ?= sdcard
#default target board
TARGET ?= yamuna
DEBUG ?=
MARCH ?= rv32imac
MABI  ?= ilp32
XLEN  ?= 32
FLAGS ?=


all: create_dir
	make $(PROGRAM).riscv 

$(PROGRAM).riscv: create_dir
	@riscv$(XLEN)-unknown-elf-gcc -march=$(MARCH) -mabi=$(MABI) -w $(DC) -mcmodel=medany -static -std=gnu99 -fno-builtin-printf -I$(bspboard) -I$(bspinc) -I$(bspdri) -c ./$(PROGRAM).c -o ./output/$(PROGRAM).o -lm -lgcc
	@riscv$(XLEN)-unknown-elf-gcc -march=$(MARCH) -mabi=$(MABI) -w $(DC) -mcmodel=medany -static -std=gnu99 -fno-builtin-printf -I$(bspboard) -I$(bspinc) -c $(bspdri)/sspi/sspi_driver.c -o ./output/sspi_driver.o -lm -lgcc
	@riscv$(XLEN)-unknown-elf-gcc -march=$(MARCH) -mabi=$(MABI) -w $(DC) -mcmodel=medany -static -std=gnu99 -fno-builtin-printf -I$(bspboard) -I$(bspinc) -c $(bspdri)/i2c/i2c_driver.c -o ./output/i2c_driver.o -lm -lgcc
	@riscv$(XLEN)-unknown-elf-gcc -march=$(MARCH) -mabi=$(MABI) -w $(DC) -mcmodel=medany -static -std=gnu99 -fno-builtin-printf -I$(bspboard) -I$(bspinc) -c $(bspdri)/Arducam/ov2640.c -o ./output/ov2640.o -lm -lgcc
	@riscv$(XLEN)-unknown-elf-gcc -march=$(MARCH) -mabi=$(MABI) -w $(DC) -mcmodel=medany -static -std=gnu99 -fno-builtin-printf -I$(bspboard) -I$(bspinc) -c $(bspdri)/i2c/gpio_i2c.c -o ./output/gpio_i2c.o -lm -lgcc
	@riscv$(XLEN)-unknown-elf-gcc -march=$(MARCH) -mabi=$(MABI) -w $(DC) -mcmodel=medany -static -std=gnu99 -fno-builtin-printf -I$(bspboard) -I$(bspinc) -c $(bspdri)/Arducam/resize.c -o ./output/resize.o -lm -lgcc
	@riscv$(XLEN)-unknown-elf-gcc -march=$(MARCH) -mabi=$(MABI) -w $(DC) -mcmodel=medany -static -std=gnu99 -fno-builtin-printf -I$(bspboard) -I$(bspinc) -c $(bspdri)/Arducam/arducam_ddr.c -o ./output/arducam_ddr.o -lm -lgcc
#	@riscv$(XLEN)-unknown-elf-gcc -march=$(MARCH) -mabi=$(MABI) $(DC) -mcmodel=medany -static -std=gnu99 -fno-builtin-printf -I$(bspboard) -I$(bspinc) -c $(bspdri)/sspi/sspi_driver.c -o ./output/sspi_driver.o -lm -lgcc
#	@riscv$(XLEN)-unknown-elf-gcc -march=$(MARCH) -mabi=$(MABI) $(DC) -mcmodel=medany -static -std=gnu99 -fno-builtin-printf -I$(bspboard) -I$(bspinc) -c $(bspdri)/sspi/sspi_spansion.c -o ./output/sspi_spansion.o -lm -lgcc
	@echo "Linking files"
	@riscv$(XLEN)-unknown-elf-gcc -T $(bspboard)/link.ld ./output/sspi_driver.o ./output/i2c_driver.o ./output/ov2640.o ./output/gpio_i2c.o ./output/resize.o ./output/arducam_ddr.o ./output/$(PROGRAM).o $(GENLIB)/gen_lib/libshakti$(XLEN).a  -o ./output/$(PROGRAM).shakti  -march=$(MARCH) -mabi=$(MABI) -static -nostartfiles -lm -lgcc 
	@riscv$(XLEN)-unknown-elf-objdump -D ./output/$(PROGRAM).shakti &> ./output/$(PROGRAM).dump
create_dir:
	@mkdir -p ./output


#  $(GENLIB)/gen_lib/libshakti$(XLEN).a 
