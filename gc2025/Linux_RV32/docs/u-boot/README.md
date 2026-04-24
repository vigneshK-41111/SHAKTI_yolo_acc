# U-Boot – Build and Usage Guide (RV32 – Shakti Yamuna)

## What is U-Boot?

**U-Boot is a bootloader that starts Linux.**

On embedded systems, Linux **cannot start directly after power ON**.  
U-Boot prepares the hardware and loads the Linux kernel.

On **RISC-V systems**, U-Boot is started by **OpenSBI**.

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

## What U-Boot Does

U-Boot:
- Initializes **DRAM**
- Initializes **UART / console**
- Loads **Linux kernel (Image)**
- Loads **Device Tree (DTB)**
- Passes control to Linux

After U-Boot finishes, **Linux starts running**.

---

## Why U-Boot Is Required

Linux:
- Does **not** initialize hardware
- Assumes memory and console are ready

U-Boot:
- Performs board initialization
- Provides boot commands
- Loads Linux correctly

➡️ **Linux depends on U-Boot to boot on real hardware**

---

## U-Boot in One Line

> **U-Boot runs after OpenSBI and before Linux.**

---

## Output Files After Build

After building U-Boot, the following files are generated:

| File | Description |
|----|----|
| `u-boot` | ELF image (debug) |
| `u-boot.bin` | Binary used by OpenSBI |
| `u-boot.map` | Memory map |
| `u-boot-nodtb.bin` | U-Boot without DTB |

---

## System Requirements

- Ubuntu 20.04 / 22.04
- Internet connection
- RV32 Linux toolchain installed:
  ```
  riscv32-unknown-linux-gnu-
  ```

---

## Directory Layout

```text
Linux_RV32/
├── Downloads/
│   └── u-boot/
├── bsp/
│   └── defconfig/
│       └── shakti_uboot_defconfig
```

---

## 1) Install Dependencies

```bash
sudo apt update

sudo apt install -y   git   make   gcc   g++   bc   bison   flex   libssl-dev   libncurses-dev   python3   python3-pip   device-tree-compiler   swig   rsync   wget   curl libgnutls28-dev
```

---

## 2) Clone U-Boot Source

```bash
cd ~/gc2025/Linux_RV32/
mkdir Downloads
cd Downloads
git clone https://github.com/u-boot/u-boot.git
cd u-boot
```

---

## 3) Checkout U-Boot Version

```bash
git fetch --all --tags
git checkout v2025.07
```

Verify:
```bash
git describe --tags
```

Expected output:
```text
v2025.07
```
```bash
patch -p1 < ../../bsp/patches/u-boot/shakti_uboot.patch
```

---

## 4) Export Build Environment

```bash
export ARCH=riscv
export CROSS_COMPILE=riscv32-unknown-linux-gnu-

```

---

## 5) Configure U-Boot (Shakti Yamuna)

Clean source tree:
```bash
make distclean
```

Apply BSP defconfig:
```bash
cp ../../bsp/defconfig/shakti_uboot_defconfig configs/
make shakti_uboot_defconfig
```

---

## 6) Build U-Boot

```bash
make -j$(nproc)
```

You may see:
```text
WARNING: CONFIG_OF_EMBED is enabled
```
This is **expected** and safe to ignore.

---

## 7) Verify Build Output

```bash
ls u-boot*
```

Expected:
```text
u-boot
u-boot.bin
u-boot.map
u-boot-nodtb.bin
```

---

## Using U-Boot with OpenSBI

U-Boot is normally combined with OpenSBI using:

```text
fw_payload.bin = OpenSBI + u-boot.bin
```

This firmware is flashed to the board or booted by the platform.

---


## Final Summary

> **OpenSBI initializes the CPU → U-Boot loads Linux → Linux runs user space**
