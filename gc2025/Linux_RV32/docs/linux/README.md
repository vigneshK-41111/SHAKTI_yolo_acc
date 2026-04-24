# Linux Kernel – Build and Usage Guide (RV32 – Shakti Yamuna)

## What is the Linux Kernel?

**The Linux kernel is the core of the operating system.**

It is responsible for:
- CPU scheduling
- Memory management
- Device drivers
- System calls
- Process and file management

On RISC-V systems, the Linux kernel **cannot start by itself**.
It requires **OpenSBI** and **U-Boot** to boot correctly.

---

## RISC-V Boot Flow

Power ON  
↓  
OpenSBI (M-mode firmware)  
↓  
U-Boot (bootloader)  
↓  
Linux Kernel (S-mode)  
↓  
Linux User Space (root filesystem)

---

## Why Linux Needs U-Boot

Linux:
- Does **not** initialize hardware
- Assumes RAM and console are already available

U-Boot:
- Initializes memory and peripherals
- Loads Linux kernel (`Image`)
- Loads Device Tree (`.dtb`)
- Passes control to the kernel

---

## Linux in One Line

> **Linux runs after U-Boot and controls the entire system.**

---

## System Requirements

- Ubuntu 20.04 / 22.04
- Internet connection
- RISC-V RV32 Linux toolchain installed:
  ```
  riscv32-unknown-linux-gnu-
  ```

---

## Directory Layout (Expected)

```text
Linux_RV32/
├── Downloads/
│   └── linux/                  ← Linux kernel source
├── bsp/
│   ├── patches/
│   │   └── linux/
│   │       └── shakti_linux.patch
│   └── defconfig/
│       └── shakti_yamuna_32_defconfig
```

---

## 1) Install Dependencies

```bash
sudo apt update

sudo apt install -y   git   make   gcc   g++   bc   bison   flex   libssl-dev   libncurses-dev   python3   device-tree-compiler   rsync   wget   curl
```

---

## 2) Clone Linux Kernel Source

```bash
cd ~/gc2025/Linux_RV32/Downloads
git clone https://github.com/torvalds/linux.git
cd linux
```

---

## 3) Checkout Linux Version 6.16

```bash
git fetch --all --tags
git checkout v6.16
```

Verify version:
```bash
make kernelversion
```

Expected output:
```text
6.16.0
```

Note: Detached HEAD state is normal.

---

## 4) Clean Source Tree

```bash
make mrproper
```

---

## 5) Apply Shakti Linux Patch  
(**Using `patch`, NOT `git apply`**)

```bash
patch -p1 < ../../bsp/patches/linux/shakti_linux.patch
```

Successful output example:
```text
patching file arch/riscv/boot/dts/Makefile
patching file drivers/tty/serial/shakti_uart.c
```

Optional dry run:
```bash
patch -p1 --dry-run < ../../bsp/patches/linux/shakti_linux.patch
```

---

## 6) Export Build Environment

```bash
export ARCH=riscv
export CROSS_COMPILE=riscv32-unknown-linux-gnu-
```

---

## 7) Configure Kernel for Shakti Yamuna (RV32)

```bash
cp ../../bsp/defconfig/shakti_yamuna_32_defconfig arch/riscv/configs/
make shakti_yamuna_32_defconfig
```

Verify configs:
```bash
ls arch/riscv/configs/
```

---

## 8) Build Linux Kernel

```bash
make -j$(nproc)
```

---

## 9) Build Device Tree Blobs (DTB)

```bash
make -j$(nproc) dtbs
```

---

## 10) Build Output Files

After a successful build, important files are:

| File | Description |
|----|----|
| `arch/riscv/boot/Image` | Linux kernel image |
| `vmlinux` | ELF kernel (debug) |
| `System.map` | Kernel symbol map |
| `arch/riscv/boot/dts/shakti/*.dtb` | Device Tree blobs |

---

## 11) Verify Kernel Architecture

```bash
file vmlinux
```

Expected:
```text
RISC-V
32-bit
```

---

## Console and Early Boot

- Early console via OpenSBI:
  ```text
  earlycon=sbi console=hvc0
  
  ```

---

## Notes

- Always checkout the correct Linux version **before** applying patches
- Patch must match the kernel version
- Linux runs in **Supervisor mode (S-mode)** on RISC-V
- Kernel is loaded by **U-Boot**
- OpenSBI always runs before U-Boot

---

## Final Summary

> **OpenSBI initializes the system → U-Boot loads Linux → Linux runs user space**
