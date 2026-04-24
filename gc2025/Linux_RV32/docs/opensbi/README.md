# OpenSBI v1.7 – Build and Usage Guide  
**Platform: RV32 – Shakti Yamuna**

---

## What is OpenSBI?

**OpenSBI (Open Supervisor Binary Interface)** is the **first firmware that runs on a RISC-V system**.

On RISC-V platforms:

- Linux **cannot start directly** after power-on
- OpenSBI executes first in **Machine mode (M-mode)**
- It initializes low-level platform hardware
- It hands control to the **next stage**:
  - usually **U-Boot**
  - or directly to the **Linux kernel**

---

## RISC-V Boot Flow

```
Power ON
   ↓
OpenSBI (M-mode firmware)
   ↓
U-Boot (bootloader)
   ↓
Linux Kernel (S-mode)
   ↓
Linux User Space (root filesystem)
```

---

## What OpenSBI Does

OpenSBI provides:

- Standard **SBI calls** (timer, IPI, RFENCE, console, etc.)
- Transition from **M-mode → S-mode**
- Early console output
- A common firmware layer for all RISC-V operating systems

Linux **depends on OpenSBI** to run correctly on RISC-V hardware.

---

## System Requirements

- Ubuntu 20.04 / 22.04
- Internet connection
- RV32 Linux toolchain installed:

  ```
  riscv32-unknown-linux-gnu-
  ```

- U-Boot source (required for payload build)

---

## Directory Layout

```
Linux_RV32/
├── Downloads/
│   ├── opensbi/
│   └── u-boot/
├── bsp/
│   └── patches/
│       └── opensbi/
│           └── shakti_opensbi.patch
```

---

## Install Dependencies

```bash
sudo apt update

sudo apt install -y \
  git \
  make \
  gcc \
  g++ \
  python3 \
  python3-pip \
  device-tree-compiler \
  wget \
  curl
```

---

## Clone OpenSBI Source

```bash
cd ~/gc2025/Linux_RV32/Downloads
git clone https://github.com/riscv-software-src/opensbi.git
cd opensbi
```

---

## Checkout OpenSBI Version v1.7

```bash
git fetch --all --tags
git checkout v1.7
```

Verify the version:

```bash
git describe --tags
```

Expected output:

```
v1.7
```

---

## Apply Shakti BSP Patch

```bash
patch -p1 < ../../bsp/patches/opensbi/shakti_opensbi.patch
```

---

## Export Toolchain

```bash
export CROSS_COMPILE=riscv32-unknown-linux-gnu-
```

---

## Build OpenSBI (No Payload)

```bash
make distclean

make PLATFORM=cclass/yamuna \
     FW_TEXT_START=0x80000000 \
     -j$(nproc)
```

---

## Build OpenSBI + U-Boot Payload

```bash
make distclean

make PLATFORM=cclass/yamuna \
     FW_TEXT_START=0x80000000 \
     FW_PAYLOAD_PATH=../u-boot/u-boot.bin \
     -j$(nproc)
```

---

## Output Files

```
build/platform/cclass/yamuna/firmware/
```

| File | Description |
|-----|------------|
| fw_payload.bin | OpenSBI + U-Boot firmware |
| fw_payload.elf | ELF image |
| fw_dynamic.bin | Dynamic firmware |
| fw_jump.bin | Jump firmware |

---

## Console

```
earlycon=sbi console=hvc0
```

---

## Summary

OpenSBI initializes hardware → U-Boot loads Linux → Linux runs user space
