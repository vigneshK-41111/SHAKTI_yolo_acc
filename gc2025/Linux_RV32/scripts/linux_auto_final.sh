#!/usr/bin/env bash
set -euo pipefail

# Linux_RV32 root (script lives in scripts/)
ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"

LINUX_REPO="https://github.com/torvalds/linux.git"
LINUX_TAG="v6.16"
LINUX_DIR="${ROOT_DIR}/Downloads/linux"

PATCH_FILE="${ROOT_DIR}/bsp/patches/linux/shakti_linux.patch"
DEFCONFIG_SRC="${ROOT_DIR}/bsp/defconfig/shakti_yamuna_32_defconfig"
DEFCONFIG_NAME="shakti_yamuna_32_defconfig"

export ARCH=riscv
export CROSS_COMPILE=riscv32-unknown-linux-gnu-

echo "ROOT_DIR   : ${ROOT_DIR}"
echo "Linux repo : ${LINUX_REPO}"
echo "Linux tag  : ${LINUX_TAG}"
echo "Linux dir  : ${LINUX_DIR}"
echo "Patch      : ${PATCH_FILE}"
echo "Defconfig  : ${DEFCONFIG_SRC}"
echo

# ---- sanity checks ----
if ! command -v "${CROSS_COMPILE}gcc" >/dev/null 2>&1; then
  echo "ERROR: Toolchain not found: ${CROSS_COMPILE}gcc"
  exit 1
fi

if [[ ! -f "${PATCH_FILE}" ]]; then
  echo "ERROR: Linux patch not found: ${PATCH_FILE}"
  exit 1
fi

if [[ ! -f "${DEFCONFIG_SRC}" ]]; then
  echo "ERROR: Defconfig not found: ${DEFCONFIG_SRC}"
  exit 1
fi

mkdir -p "${ROOT_DIR}/Downloads"

# ---- always fresh clone to avoid patch conflicts ----
if [[ -d "${LINUX_DIR}" ]]; then
  echo "Removing existing Linux directory for a clean run..."
  rm -rf "${LINUX_DIR}"
fi

echo "Cloning Linux..."
git clone "${LINUX_REPO}" "${LINUX_DIR}"

cd "${LINUX_DIR}"

echo "Checking out ${LINUX_TAG}..."
git fetch --all --tags
git checkout -f "${LINUX_TAG}"

echo "Kernel version:"
make kernelversion || true
echo

echo "Cleaning source tree..."
make mrproper

echo "Applying Shakti Linux patch (patch -p1)..."
patch -p1 < "${PATCH_FILE}"

# ---- copy defconfig AFTER clone (your request) ----
echo "Copying BSP defconfig into arch/riscv/configs/ ..."
cp -v "${DEFCONFIG_SRC}" "arch/riscv/configs/${DEFCONFIG_NAME}"

echo "Configuring kernel..."
make "${DEFCONFIG_NAME}"

echo "Building Linux kernel..."
make -j"$(nproc)"

echo "Building DTBs..."
make -j"$(nproc)" dtbs

echo
echo "✅ Build done."
echo "Key outputs:"
echo "  Kernel Image : ${LINUX_DIR}/arch/riscv/boot/Image"
echo "  vmlinux      : ${LINUX_DIR}/vmlinux"
echo "  System.map   : ${LINUX_DIR}/System.map"
echo "  DTBs         : ${LINUX_DIR}/arch/riscv/boot/dts/shakti/*.dtb"
echo
echo "Verify vmlinux:"
file vmlinux || true
