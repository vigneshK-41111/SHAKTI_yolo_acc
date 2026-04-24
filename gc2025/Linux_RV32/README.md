# Linux RV32 Bring-up on Shakti Yamuna
## OpenSBI + U-Boot + Linux Kernel + Buildroot

This repository documents the **complete bring-up of Linux on RV32 (RISC-V 32-bit)**
for the **Shakti C-Class Yamuna** platform.

It covers everything from:
- Toolchain
- Firmware
- Bootloader
- Kernel
- Root filesystem
- Booting from SD card

---

## Repository Structure

```text
Linux_RV32/
├── bsp/                    # Board support patches & defconfigs
│   ├── defconfig/
│   └── patches/
├── build/                  # Optional build artifacts
├── Downloads/              # Cloned upstream sources
│   ├── opensbi/
│   ├── u-boot/
│   ├── linux/
│   └── buildroot/
├── docs/                   # Documentation (READMEs)
│   ├── opensbi/
│   ├── u-boot/
│   ├── linux/
│   ├── buildroot/
│   └── riscv32_toolchain/
└── scripts/                # Helper scripts (optional)
```

---

## RISC-V Boot Flow

```text
Power ON
  ↓
OpenSBI (M-mode firmware)
  ↓
U-Boot (bootloader)
  ↓
Linux Kernel (S-mode)
  ↓
Buildroot Root Filesystem
```

---

## Components Overview

### 1) RISC-V RV32 Toolchain
- Cross-compiler used for OpenSBI, U-Boot, Linux, and Buildroot
- Prefix:
  ```
  riscv32-unknown-linux-gnu-
  ```

Documentation:
```
docs/riscv32_toolchain/README.md
```

---

### 2) OpenSBI (Firmware)
- Runs in **Machine mode (M-mode)**
- Initializes CPU and low-level platform
- Jumps to U-Boot or Linux

Documentation:
```
docs/opensbi/README.md
```

---

### 3) U-Boot (Bootloader)
- Loaded by OpenSBI
- Initializes DRAM and peripherals
- Loads Linux kernel and DTB

Documentation:
```
docs/u-boot/README.md
```

---

### 4) Linux Kernel (RV32)
- Runs in **Supervisor mode (S-mode)**
- Version used: **Linux 6.16**
- Board-specific patches applied for Shakti Yamuna

Documentation:
```
docs/linux/README.md
```

---

### 5) Buildroot (Root Filesystem)
- Provides Linux user space
- BusyBox shell, init system, basic utilities
- Root filesystem stored on SD card (ext4)

Documentation:
```
docs/buildroot/README.md
```

---

## SD Card Layout

Recommended SD card partitioning:

| Partition | Type  | Usage |
|---------|-------|------|
| p1 | FAT32 | Kernel Image + DTB |
| p2 | ext4 | Buildroot root filesystem |

---

## Kernel Boot Arguments (Reference)

```text
earlycon=sbi console=hvc0 console=ttySHK0,115200 root=/dev/mmcblk0p2 rootfstype=ext4 rootwait rw
```

---

## Status

✅ OpenSBI boots  
✅ U-Boot loads kernel  
✅ Linux kernel boots  
✅ Buildroot rootfs mounts  
✅ Interactive shell on UART  

---

## How to Use This Repository

Follow the READMEs in this order:

1. `docs/riscv32_toolchain/README.md`
2. `docs/opensbi/README.md`
3. `docs/u-boot/README.md`
4. `docs/linux/README.md`
5. `docs/buildroot/README.md`

---

## Final Summary

> **This repository provides a complete, working reference for bringing up Linux on RV32 (Shakti Yamuna) from power-on to shell prompt.**
