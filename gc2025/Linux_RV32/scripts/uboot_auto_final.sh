#!/usr/bin/env bash
set -euo pipefail

# ------------------------------------------------------------
# U-Boot auto build script (fresh clone + patch + defconfig)
# Installs host dependencies (Ubuntu/Debian + Fedora/RHEL + Arch + openSUSE)
# ------------------------------------------------------------

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"

UBOOT_REPO="https://github.com/u-boot/u-boot.git"
UBOOT_TAG="v2025.07"
UBOOT_DIR="${ROOT_DIR}/Downloads/u-boot"

PATCH_FILE="${ROOT_DIR}/bsp/patches/u-boot/shakti_uboot.patch"
DEFCONFIG_SRC="${ROOT_DIR}/bsp/defconfig/shakti_uboot_defconfig"
DEFCONFIG_NAME="shakti_uboot_defconfig"

export ARCH=riscv
export CROSS_COMPILE=riscv32-unknown-linux-gnu-

need_cmd() { command -v "$1" >/dev/null 2>&1; }

run_sudo() {
  if [[ $EUID -eq 0 ]]; then
    "$@"
  else
    sudo "$@"
  fi
}

detect_pkg_mgr() {
  if need_cmd apt-get; then echo "apt"
  elif need_cmd dnf; then echo "dnf"
  elif need_cmd yum; then echo "yum"
  elif need_cmd pacman; then echo "pacman"
  elif need_cmd zypper; then echo "zypper"
  else echo "unknown"
  fi
}

install_deps() {
  local pmgr
  pmgr="$(detect_pkg_mgr)"

  echo "------------------------------------------------------------"
  echo "Installing host dependencies for U-Boot (package manager: $pmgr)"
  echo "------------------------------------------------------------"

  case "$pmgr" in
    apt)
      run_sudo apt-get update
      # U-Boot host deps commonly required for tools/ (mkimage, mkeficapsule, dtc, kconfig)
      run_sudo apt-get install -y \
        build-essential \
        git \
        flex \
        bison \
        bc \
        device-tree-compiler \
        libssl-dev \
        libgnutls28-dev \
        uuid-dev \
        pkg-config \
        libncurses-dev \
        python3 \
        python3-pip \
        swig \
        wget \
        curl \
        rsync \
        xz-utils \
        file \
        ca-certificates
      ;;
    dnf)
      run_sudo dnf -y install \
        gcc gcc-c++ make git \
        flex bison bc \
        dtc \
        openssl-devel \
        gnutls-devel \
        libuuid-devel \
        pkgconf-pkg-config \
        ncurses-devel \
        python3 python3-pip \
        swig \
        wget curl rsync xz file ca-certificates
      ;;
    yum)
      run_sudo yum -y install \
        gcc gcc-c++ make git \
        flex bison bc \
        dtc \
        openssl-devel \
        gnutls-devel \
        libuuid-devel \
        pkgconfig \
        ncurses-devel \
        python3 python3-pip \
        swig \
        wget curl rsync xz file ca-certificates
      ;;
    pacman)
      run_sudo pacman -Sy --noconfirm \
        base-devel git \
        flex bison bc \
        dtc \
        openssl \
        gnutls \
        util-linux-libs \
        pkgconf \
        ncurses \
        python python-pip \
        swig \
        wget curl rsync xz file ca-certificates
      ;;
    zypper)
      run_sudo zypper --non-interactive refresh
      run_sudo zypper --non-interactive install \
        gcc gcc-c++ make git \
        flex bison bc \
        device-tree-compiler \
        libopenssl-devel \
        gnutls-devel \
        libuuid-devel \
        pkg-config \
        ncurses-devel \
        python3 python3-pip \
        swig \
        wget curl rsync xz file ca-certificates
      ;;
    *)
      echo "WARNING: No supported package manager found."
      echo "Install manually: git, make, gcc, flex, bison, bc, dtc,"
      echo "OpenSSL dev headers, GnuTLS dev headers, uuid dev, ncurses dev, pkg-config, python3, swig."
      ;;
  esac
}

verify_deps() {
  echo "------------------------------------------------------------"
  echo "Verifying required host tools..."
  echo "------------------------------------------------------------"

  local missing=0
  for t in git make gcc flex bison dtc pkg-config; do
    if ! need_cmd "$t"; then
      echo "ERROR: Missing required tool: $t"
      missing=1
    fi
  done

  # OpenSSL header check (evp.h)
  if [[ ! -f /usr/include/openssl/evp.h ]]; then
    if need_cmd pkg-config && pkg-config --exists openssl; then :; else
      echo "ERROR: OpenSSL dev headers missing (libssl-dev / openssl-devel)"
      missing=1
    fi
  fi

  # GnuTLS header check (gnutls.h) required for mkeficapsule
  if [[ ! -f /usr/include/gnutls/gnutls.h ]]; then
    if need_cmd pkg-config && pkg-config --exists gnutls; then :; else
      echo "ERROR: GnuTLS dev headers missing (libgnutls28-dev / gnutls-devel)"
      missing=1
    fi
  fi

  if [[ "$missing" -ne 0 ]]; then
    echo
    echo "Dependency check failed. Install missing packages and re-run."
    exit 1
  fi

  echo "OK: Host dependencies look good."
}

echo "ROOT_DIR   : ${ROOT_DIR}"
echo "U-Boot repo: ${UBOOT_REPO}"
echo "U-Boot tag : ${UBOOT_TAG}"
echo "U-Boot dir : ${UBOOT_DIR}"
echo "Defconfig  : ${DEFCONFIG_SRC}"
echo "Patch      : ${PATCH_FILE}"
echo

# ---- sanity checks ----
if [[ ! -f "${DEFCONFIG_SRC}" ]]; then
  echo "ERROR: Defconfig not found: ${DEFCONFIG_SRC}"
  exit 1
fi

# ---- deps ----
install_deps
verify_deps

# ---- toolchain check ----
if ! need_cmd "${CROSS_COMPILE}gcc"; then
  echo "ERROR: Toolchain not found: ${CROSS_COMPILE}gcc"
  echo "Hint: install first using: ${ROOT_DIR}/scripts/riscv32_linux_toolchain_imac_install.sh"
  exit 1
fi

mkdir -p "${ROOT_DIR}/Downloads"

# ---- always fresh clone to avoid patch conflicts ----
if [[ -d "${UBOOT_DIR}" ]]; then
  echo "Removing existing U-Boot directory for a clean run..."
  rm -rf "${UBOOT_DIR}"
fi

echo "Cloning U-Boot..."
git clone "${UBOOT_REPO}" "${UBOOT_DIR}"

cd "${UBOOT_DIR}"

echo "Checking out ${UBOOT_TAG}..."
git fetch --all --tags
git checkout -f "${UBOOT_TAG}"

echo "Cleaning tree..."
make distclean

# ---- apply patch (optional) ----
if [[ -f "${PATCH_FILE}" ]]; then
  echo "Applying patch..."
  git apply --whitespace=nowarn "${PATCH_FILE}"
else
  echo "Patch not found (skipping)."
fi

# ---- copy defconfig AFTER clone ----
echo "Copying BSP defconfig into U-Boot configs/ ..."
cp -v "${DEFCONFIG_SRC}" "configs/${DEFCONFIG_NAME}"

echo "Configuring using ${DEFCONFIG_NAME}..."
make "${DEFCONFIG_NAME}"

# Accept defaults and avoid interactive Kconfig prompts (if any)
make olddefconfig

echo "Building U-Boot..."
make -j"$(nproc)"

echo
echo "✅ Build outputs:"
ls -1 u-boot u-boot.bin u-boot.map u-boot-nodtb.bin 2>/dev/null || true
echo
echo "Done. U-Boot at: ${UBOOT_DIR}"

