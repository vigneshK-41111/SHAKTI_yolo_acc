# RISC-V RV32 Toolchain Setup (Manual – Standalone)

This document explains how to **manually build and install**
the **RISC-V RV32 Linux (glibc) toolchain**.

No scripts are used.

This toolchain is required to build:
- OpenSBI
- U-Boot
- Linux Kernel
- Buildroot

---

## Toolchain Information

- Architecture : `rv32imac`
- ABI          : `ilp32`
- C library    : `glibc`
- Install path : `/opt/riscv32-imac-linux`
- Compiler     : `riscv32-unknown-linux-gnu-gcc`

---

## 1) Install Host Dependencies (Ubuntu)

```bash
sudo apt-get update
sudo apt-get install -y \
  autoconf \
  automake \
  autotools-dev \
  curl \
  python3 \
  python3-pip \
  python3-tomli \
  libmpc-dev \
  libmpfr-dev \
  libgmp-dev \
  gawk \
  build-essential \
  bison \
  flex \
  texinfo \
  gperf \
  libtool \
  patchutils \
  bc \
  zlib1g-dev \
  libexpat-dev \
  ninja-build \
  git \
  cmake \
  libglib2.0-dev \
  libslirp-dev

2) Go to Downloads Directory
cd ~/gc_test/gc2025/Linux_RV32/Downloads

3) Clone RISC-V GNU Toolchain
git clone https://github.com/riscv/riscv-gnu-toolchain.git
cd riscv-gnu-toolchain

4) Create Build Directory (Out-of-tree Build)
mkdir riscv-gnu-toolchain-build-rv32
cd riscv-gnu-toolchain-build-rv32

5) Configure Toolchain (RV32 Linux)
../configure \
  --prefix=/opt/riscv32-imac-linux \
  --with-arch=rv32imac \
  --with-abi=ilp32

6) Build and Install Toolchain
make linux -j$(nproc)
⏳ Build time: 30–90 minutes

7) Fix /opt Permission Issue (If Needed)
sudo mkdir -p /opt/riscv32-imac-linux
sudo chown -R $USER:$USER /opt/riscv32-imac-linux

8) Verify Installation
ls /opt/riscv32-imac-linux

Run once:

echo '' >> ~/.bashrc
echo '# RISC-V RV32 Linux Toolchain' >> ~/.bashrc
echo 'export PATH=/opt/riscv32-imac-linux/bin:$PATH' >> ~/.bashrc
Reload environment:

source ~/.bashrc

10) Verify Toolchain in PATH
which riscv32-unknown-linux-gnu-gcc
Expected output:

/opt/riscv32-imac-linux/bin/riscv32-unknown-linux-gnu-gcc
11) Check Compiler Version

riscv32-unknown-linux-gnu-gcc -v
You should see:

Target: riscv32-unknown-linux-gnu

Configured with: rv32imac / ilp32
