#!/usr/bin/env bash
set -euo pipefail

# Linux_RV32 root (script lives in scripts/)
ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"

OPENSBI_REPO="https://github.com/riscv-software-src/opensbi.git"
OPENSBI_TAG="v1.7"
OPENSBI_DIR="${ROOT_DIR}/Downloads/opensbi"

PATCH_FILE="${ROOT_DIR}/bsp/patches/opensbi/shakti_opensbi.patch"
UBOOT_BIN="${ROOT_DIR}/Downloads/u-boot/u-boot.bin"

export CROSS_COMPILE=riscv32-unknown-linux-gnu-

echo "ROOT_DIR     : ${ROOT_DIR}"
echo "OpenSBI repo : ${OPENSBI_REPO}"
echo "OpenSBI tag  : ${OPENSBI_TAG}"
echo "OpenSBI dir  : ${OPENSBI_DIR}"
echo "Patch        : ${PATCH_FILE}"
echo "U-Boot bin   : ${UBOOT_BIN}"
echo

# ---- sanity checks ----
if ! command -v "${CROSS_COMPILE}gcc" >/dev/null 2>&1; then
  echo "ERROR: Toolchain not found: ${CROSS_COMPILE}gcc"
  exit 1
fi

mkdir -p "${ROOT_DIR}/Downloads"

# ---- always fresh clone ----
if [[ -d "${OPENSBI_DIR}" ]]; then
  echo "Removing existing OpenSBI directory for a clean build..."
  rm -rf "${OPENSBI_DIR}"
fi

echo "Cloning OpenSBI..."
git clone "${OPENSBI_REPO}" "${OPENSBI_DIR}"

cd "${OPENSBI_DIR}"

echo "Checking out ${OPENSBI_TAG}..."
git fetch --all --tags
git checkout -f "${OPENSBI_TAG}"

# ---- apply BSP patch ----
if [[ -f "${PATCH_FILE}" ]]; then
  echo "Applying BSP patch..."
  patch -p1 < "${PATCH_FILE}"
else
  echo "ERROR: OpenSBI patch not found!"
  exit 1
fi

# ---- build OpenSBI (no payload) ----
echo
echo "Building OpenSBI (no payload)..."
make distclean
make PLATFORM=cclass/yamuna FW_TEXT_START=0x80000000 -j"$(nproc)"

# ---- build OpenSBI + U-Boot payload ----
if [[ -f "${UBOOT_BIN}" ]]; then
  echo
  echo "Building OpenSBI + U-Boot payload..."
  make distclean
  make PLATFORM=cclass/yamuna \
       FW_TEXT_START=0x80000000 \
       FW_PAYLOAD_PATH="${UBOOT_BIN}" \
       -j"$(nproc)"
else
  echo
  echo "WARNING: U-Boot binary not found:"
  echo "  ${UBOOT_BIN}"
  echo "Skipping payload build."
fi

echo
echo "✅ OpenSBI build completed."
echo "Output directory:"
echo "  build/platform/cclass/yamuna/firmware/"
ls build/platform/cclass/yamuna/firmware/ 2>/dev/null || true
