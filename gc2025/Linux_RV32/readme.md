
# Linux_RV32 – Yamuna (RV32IMAC) BSP Build Guide

This repository provides a **script-driven build flow** for running Linux on the
**Shakti Yamuna** platform using an **RV32IMAC-only** RISC-V core.

The build generates the complete boot stack:

- RISC-V GNU **Linux toolchain** (glibc)
- **U-Boot v2025.07** (Yamuna)
- **OpenSBI v1.7** (Yamuna platform, U-Boot payload)
- **Linux Kernel v6.16** (Yamuna 32-bit)
- **Buildroot** root filesystem (Yamuna)

---

## 0. Board Constraints (Important)

- **ISA:** RV32IMAC only  
- **ABI:** ilp32 (soft-float)  


All components **must** be built for `rv32imac / ilp32`.

---

## 1. Repository Location

All commands in this guide assume:

```bash
~/gc_test/gc2025/Linux_RV32/build

export LINUX_RV32_ROOT="$HOME/gc_test/gc2025/Linux_RV32/build"

2. Repository Layout (Actual)

Linux_RV32/build/
├── bsp/                         # BSP patches
│   ├── shakti_uboot.patch
│   ├── shakti_opensbi.patch
│   ├── shakti_linux.patch
│   └── shakti_buildroot.patch
├── u-boot/
├── linux/
├── buildroot/
├── riscv-gnu-toolchain/
├── riscv-gnu-toolchain-build-rv32imac-linux/
├── riscv32_linux_toolchain_imac_install.sh
├── uboot_setup.sh
├── opensbi_auto.sh
├── linux_setup.sh
├── buildroot_setup.sh
└── readme.md

3. Supported Host Systems
OS	Status
Ubuntu 24.04	✅ Supported and Tested

4. Host Dependencies
4.1 Toolchain Dependencies
sudo apt update
sudo apt install -y \
  autoconf automake autotools-dev curl python3 python3-pip python3-tomli \
  libmpc-dev libmpfr-dev libgmp-dev gawk build-essential bison flex \
  texinfo gperf libtool patchutils bc zlib1g-dev libexpat-dev \
  ninja-build git cmake libglib2.0-dev libslirp-dev

5. Environment Setup (Use for All Builds)

Run once per terminal:

export LINUX_RV32_ROOT="$HOME/gc_test/gc2025/Linux_RV32/build"

# Toolchain install prefix
export RISCV_TOOLCHAIN="/opt/riscv32-imac-linux"
export PATH="$RISCV_TOOLCHAIN/bin:$PATH"

# Cross compiler prefix
export CROSS_COMPILE="riscv32-unknown-linux-gnu-"

# Linux kernel build requires ARCH=riscv
export ARCH="riscv"

6. RISC-V Linux Toolchain (RV32IMAC)

Build and install the Linux toolchain:

cd "$LINUX_RV32_ROOT"
./riscv32_linux_toolchain_imac_install.sh
source ~/.bashrc


Toolchain installs to:

/opt/riscv32-imac-linux

7. U-Boot (v2025.07) – Yamuna

U-Boot is the bootloader loaded by OpenSBI.

7.1 Setup (Clone + Patch)
cd "$LINUX_RV32_ROOT"
./uboot_setup.sh


Verify Yamuna defconfig exists:

ls u-boot/configs/shakti_yamuna_defconfig

7.2 Build U-Boot (Yamuna)
cd "$LINUX_RV32_ROOT/u-boot"
export CROSS_COMPILE="riscv32-unknown-linux-gnu-"

make distclean
make shakti_yamuna_defconfig
make -j$(nproc)


Outputs:

u-boot
u-boot.bin
u-boot.elf

8. OpenSBI (v1.7) – Yamuna Platform

OpenSBI runs immediately after ROM and loads U-Boot as its payload.

8.1 Build Using Script
cd "$LINUX_RV32_ROOT"
./opensbi_auto.sh

8.2 Manual Build (Reference)
cd "$LINUX_RV32_ROOT/opensbi"
export CROSS_COMPILE="riscv32-unknown-linux-gnu-"

make \
  PLATFORM=cclass/yamuna \
  FW_TEXT_START=0x80000000 \
  FW_PAYLOAD_PATH="$LINUX_RV32_ROOT/u-boot/u-boot.bin" \
  -j$(nproc)


Output:

opensbi/build/platform/cclass/yamuna/firmware/fw_payload.elf


Boot chain:

ROM → OpenSBI → U-Boot → Linux

9. Linux Kernel (v6.16) – Yamuna 32-bit
9.1 Setup (Clone + Checkout)
cd "$LINUX_RV32_ROOT"
./linux_setup.sh

9.2 Apply BSP Patch (IMPORTANT)

The Linux BSP patch must be applied using patch, not git apply:

cd "$LINUX_RV32_ROOT/linux"
patch -p1 < ../bsp/shakti_linux.patch

9.3 Build Linux Kernel (Yamuna)

Verify defconfig exists:

ls arch/riscv/configs/shakti_yamuna_32_defconfig


Build:

cd "$LINUX_RV32_ROOT/linux"
export ARCH="riscv"
export CROSS_COMPILE="riscv32-unknown-linux-gnu-"

make mrproper
make shakti_yamuna_32_defconfig
make -j$(nproc)


Kernel image:

ls -lh arch/riscv/boot/Image

10. Buildroot – Yamuna Root Filesystem
10.1 Setup (Clone + Patch)
cd "$LINUX_RV32_ROOT"
./buildroot_setup.sh


Verify defconfig exists:

ls buildroot/configs/shakti_yamuna_defconfig

10.2 Build Root Filesystem
cd "$LINUX_RV32_ROOT/buildroot"
make clean
make shakti_yamuna_defconfig
make -j$(nproc)


Output images:

ls -lh output/images

11. Recommended Build Order

Toolchain

U-Boot (Yamuna)

OpenSBI (Yamuna + U-Boot payload)

Linux Kernel (Yamuna 32-bit)

Buildroot (Yamuna)


