# Buildroot – Complete Build & Setup Guide (RV32 – Shakti Yamuna)

## What is Buildroot?

Buildroot is a tool used to generate a complete Linux root filesystem.
It provides the Linux user space required to get a working shell.

It builds:
- Root filesystem (rootfs)
- BusyBox (shell + basic commands)
- Init system
- Libraries

---

## RISC-V Boot Flow (Context)

Power ON
↓
OpenSBI (M-mode firmware)
↓
U-Boot (bootloader)
↓
Linux Kernel (S-mode)
↓
Buildroot Root Filesystem (user space)

---

## Why Buildroot is Needed

The Linux kernel:
- Manages hardware
- Does not provide a shell

Buildroot:
- Provides /init
- Provides /bin/sh
- Provides basic Linux utilities

Without Buildroot, Linux boots but you cannot log in.

---

## System Requirements

- Ubuntu 20.04 / 22.04
- Internet connection
- RISC-V RV32 Linux toolchain installed:
  riscv32-unknown-linux-gnu-

---

## Directory Layout (Expected)

Linux_RV32/
├── Downloads/
│   └── buildroot/
├── bsp/
│   └── defconfig/
│       └── shakti_yamuna_defconfig
├── docs/
│   └── buildroot/
│       └── README.md

---

## 1) Clone Buildroot

cd ~/gc2025/Linux_RV32/Downloads
git clone https://github.com/buildroot/buildroot.git
cd buildroot

(Optional) Checkout stable release:
git checkout 2025.02.1

---

## 2) Load Shakti Yamuna Defconfig

cp ../../bsp/defconfig/shakti_yamuna_defconfig configs/
make shakti_yamuna_defconfig

This creates:
- .config
- output/

---

## 3) Configure Toolchain

make menuconfig

Set:
Toolchain → Toolchain type → External toolchain
Toolchain prefix → riscv32-unknown-linux-gnu-

Save and exit.

---

## 4) Configure Root Filesystem Type

In menuconfig:
Filesystem images → [*] ext4 root filesystem

ext4 is recommended for SD card boot.

---

## 5) Build Buildroot

make -j$(nproc)

---

## 6) Build Output Files

ls output/images/

Important files:
- rootfs.ext4
- rootfs.cpio
- rootfs.tar

---

## 7) Write RootFS to SD Card

sudo dd if=output/images/rootfs.ext4 of=/dev/mmcblk0p2 bs=4M status=progress conv=fsync
sync

---

## 8) Linux Boot Arguments

Recommended bootargs:

earlycon=sbi console=hvc0,115200 root=/dev/mmcblk0p2 rootfstype=ext4 rootwait rw

---

## 9) Login

Buildroot default:
- User: root
- No password

You should see a shell prompt after boot.

---

## 10) Save Defconfig (Optional)

If you change menuconfig:

make savedefconfig DEFCONFIG=./configs/shakti_yamuna_defconfig

---

## Summary

OpenSBI → U-Boot → Linux → Buildroot root filesystem
