# README – SD Card Preparation & Boot
## Shakti Yamuna (RV32) | U-Boot + Linux + Buildroot

---

## 1. Overview

This document explains how to prepare an SD card for **Shakti Yamuna** using:

- U-Boot
- Linux (RV32)
- Buildroot root filesystem

### SD Card Layout

| Partition | Filesystem | Size   | Purpose |
|----------|------------|--------|---------|
| p1       | FAT32      | 256MB  | BOOT (Image, DTB, extlinux) |
| p2       | ext4       | Rest   | Linux root filesystem |

---

## 2. Identify SD Card Device (Host PC)

```bash
lsblk
```

Example:
```text
NAME   SIZE TYPE
sda    32G  disk
```

> IMPORTANT: Replace `sdX` everywhere with your actual SD card device name.

---

## 3. Unmount Existing Partitions

```bash
sudo umount /dev/sdX* 2>/dev/null
```

---

## 4. Partition SD Card using fdisk

```bash
sudo fdisk /dev/sdX
```

Inside fdisk:
```text
o
n
p
1
2048
+256M
t
c
a
1
n
p
2
<ENTER>
<ENTER>
w
```

Reload partition table:
```bash
sudo partprobe /dev/sdX
```

---

## 5. Format Partitions

```bash
sudo mkfs.vfat -F32 -n BOOT /dev/sdX1
sudo mkfs.ext4 -L rootfs /dev/sdX2
```

---

## 6. Mount SD Card

```bash
sudo mkdir -p /mnt/yamuna/{boot,rootfs}
sudo mount /dev/sdX1 /mnt/yamuna/boot
sudo mount /dev/sdX2 /mnt/yamuna/rootfs
```

---

## 7. Copy Kernel Image

```bash
sudo cp ~/gc2025/Linux_RV32/Downloads/linux/arch/riscv/boot/Image /mnt/yamuna/boot/
```

---

## 8. Copy Device Tree

```bash
sudo cp ~/gc2025/Linux_RV32/Downloads/linux/arch/riscv/boot/dts/shakti/shakti_yamuna.dtb /mnt/yamuna/boot/
```

---

## 9. Root Filesystem

### Option A (recommended)

```bash
sudo dd if=~/gc2025/Linux_RV32/Downloads/buildroot/output/images/rootfs.ext4 of=/dev/sdX2 bs=4M status=progress
sync
```

### Option B (tar)

```bash
sudo tar -xpf ~/gc2025/Linux_RV32/Downloads/buildroot/output/images/rootfs.tar -C /mnt/yamuna/rootfs
```
```text
Modify /etc/inittab
After copying the files to the SD card, edit the inittab file and comment out the following line:
::sysinit:/etc/init.d/rcS
Change it to:
#::sysinit:/etc/init.d/rcS
```

---

## 10. Unmount

```bash
sync
sudo umount /mnt/yamuna/boot
sudo umount /mnt/yamuna/rootfs
```

---

## 11. U-Boot MMC Checks 
go to the folder

```bash 
cd ~/gc2025/Linux_RV32/scripts
```

```bash 
./opensbi_auto_final.sh
```
 OpenSBI build completed.
Output directory:

```bash 
cd  ~/gc2025/Linux_RV32/build/platform/cclass/yamuna/firmware/
``` 
```bash
riscv32-unknown-linux-gnu-gdb
GNU gdb (GDB) 16.3.90.20250610-git
Copyright (C) 2024 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
Type "show copying" and "show warranty" for details.
This GDB was configured as "--host=x86_64-pc-linux-gnu --target=riscv32-unknown-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<https://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
    <http://www.gnu.org/software/gdb/documentation/>.

For help, type "help".
Type "apropos word" to search for commands related to "word".
(gdb) target remote:3333
(gdb) file build/platform/cclass/yamuna/firmware/fw_payload.elf
(gdb) load
(gdb) c 
```


```bash
mmc list
mmc dev 0
mmc rescan
mmc info
part list mmc 0
fstype mmc 0:1
fstype mmc 0:2
fatls mmc 0:1
ext4ls mmc 0:2 /
```

---

## 12. Boot Commands

```bash
setenv kernel_addr_r 0x80400000
setenv fdt_addr_r    0x83000000
fatload mmc 0:1 ${kernel_addr_r} Image
fatload mmc 0:1 ${fdt_addr_r} shakti_yamuna.dtb
setenv bootargs "console=hvc0 earlycon=sbi root=/dev/mmcblk0p2 rw rootwait rootfstype=ext4 loglevel=7"
booti ${kernel_addr_r} - ${fdt_addr_r}
```

---


