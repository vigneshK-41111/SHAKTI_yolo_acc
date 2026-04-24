#!/usr/bin/env bash
set -euo pipefail

# ===================== CONFIG =====================
RISCV_PREFIX="/opt/riscv32-imac-linux"

TOP_DIR="${HOME}/gc2025/Linux_RV32/build"
SRC_DIR="${TOP_DIR}/riscv-gnu-toolchain"
BUILD_DIR="${TOP_DIR}/riscv-gnu-toolchain-build-rv32imac-linux"

ARCH="rv32imac"
ABI="ilp32"

JOBS="$(command -v nproc >/dev/null 2>&1 && nproc || echo 4)"

# ===================== FUNCTIONS =====================
ensure_prereqs_ubuntu() {
  if command -v apt-get >/dev/null 2>&1; then
    echo "==> Installing prerequisites (Ubuntu/Debian)..."
    sudo apt-get update
    sudo apt-get install -y \
      autoconf automake autotools-dev curl python3 python3-pip python3-tomli \
      libmpc-dev libmpfr-dev libgmp-dev gawk build-essential bison flex \
      texinfo gperf libtool patchutils bc zlib1g-dev libexpat-dev \
      ninja-build git cmake libglib2.0-dev libslirp-dev
  fi
}

add_toolchain_to_bashrc() {
  local BASHRC="${HOME}/.bashrc"
  local LINE="export PATH=${RISCV_PREFIX}/bin:\$PATH"

  echo "==> Adding RISC-V toolchain to ~/.bashrc"

  if ! grep -Fxq "$LINE" "$BASHRC"; then
    {
      echo ""
      echo "# RISC-V RV32IMAC Linux Toolchain"
      echo "$LINE"
    } >> "$BASHRC"
  fi
}

activate_toolchain_now() {
  echo "==> Activating toolchain in current shell..."
  export PATH="${RISCV_PREFIX}/bin:${PATH}"
}

# ===================== MAIN =====================
echo "==> Target: Linux toolchain (glibc) for ${ARCH}/${ABI}"
echo "==> Install prefix: ${RISCV_PREFIX}"
echo "==> Source dir:     ${SRC_DIR}"
echo "==> Build dir:      ${BUILD_DIR}"
echo "==> Jobs:           ${JOBS}"
echo

ensure_prereqs_ubuntu

echo "==> Creating install prefix..."
sudo mkdir -p "${RISCV_PREFIX}"
sudo chown -R "${USER}:${USER}" "${RISCV_PREFIX}"

if [[ ! -d "${SRC_DIR}/.git" ]]; then
  echo "==> Cloning riscv-gnu-toolchain..."
  mkdir -p "${TOP_DIR}"
  git clone https://github.com/riscv/riscv-gnu-toolchain "${SRC_DIR}"
else
  echo "==> Source already exists."
fi

echo "==> Preparing build directory..."
mkdir -p "${BUILD_DIR}"
cd "${BUILD_DIR}"

echo "==> Configuring..."
"${SRC_DIR}/configure" \
  --prefix="${RISCV_PREFIX}" \
  --with-arch="${ARCH}" \
  --with-abi="${ABI}"

echo "==> Building and installing (make linux)..."
make -j"${JOBS}" linux

add_toolchain_to_bashrc
activate_toolchain_now

echo
echo "==> Verifying toolchain..."

if command -v riscv32-unknown-linux-gnu-gcc >/dev/null 2>&1; then
  echo "SUCCESS: $(which riscv32-unknown-linux-gnu-gcc)"
  riscv32-unknown-linux-gnu-gcc -v | head -n 5
else
  echo "ERROR: riscv32-unknown-linux-gnu-gcc not found"
  exit 1
fi

echo
echo "==> DONE. Toolchain is permanently available."

