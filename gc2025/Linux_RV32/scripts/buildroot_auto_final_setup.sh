#!/bin/bash
set -euo pipefail

# ========= CONFIG =========
BUILDROOT_REPO="https://github.com/buildroot/buildroot.git"

# Choose one:
USE_LATEST_TAG=1     # 1 = checkout latest stable tag, 0 = use master

# Your defconfig (in your repo)
DEFCONFIG_SRC_REL="bsp/defconfig/shakti_yamuna_buildroot_defconfig"

# Clone buildroot into Downloads (create if missing)
DOWNLOADS_DIR_REL="Downloads"
BUILDROOT_DIR_NAME="buildroot"
# ==========================

# Script dir and repo root (repo root = one level up from scripts/)
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
REPO_ROOT="$(cd "${SCRIPT_DIR}/.." && pwd)"

DEFCONFIG_SRC="${REPO_ROOT}/${DEFCONFIG_SRC_REL}"

DOWNLOADS_DIR="${REPO_ROOT}/${DOWNLOADS_DIR_REL}"
BUILDROOT_DIR="${DOWNLOADS_DIR}/${BUILDROOT_DIR_NAME}"

echo "=== Buildroot no-patch setup started ==="
echo "Repo root     : $REPO_ROOT"
echo "Downloads dir : $DOWNLOADS_DIR"
echo "Buildroot dir : $BUILDROOT_DIR"
echo "Defconfig src : $DEFCONFIG_SRC"
echo

# Check defconfig exists
if [[ ! -f "$DEFCONFIG_SRC" ]]; then
  echo "ERROR: defconfig not found: $DEFCONFIG_SRC"
  exit 1
fi

# Ensure Downloads exists
mkdir -p "$DOWNLOADS_DIR"

# Clone or update buildroot
if [[ ! -d "$BUILDROOT_DIR/.git" ]]; then
  echo "Cloning Buildroot..."
  git clone "$BUILDROOT_REPO" "$BUILDROOT_DIR"
else
  echo "Updating existing Buildroot..."
  git -C "$BUILDROOT_DIR" fetch --all --tags
fi

cd "$BUILDROOT_DIR"

# Checkout latest stable tag or master
if [[ "$USE_LATEST_TAG" -eq 1 ]]; then
  LATEST_TAG="$(git tag -l | grep -E '^20[0-9]{2}\.[0-9]{2}(\.[0-9]+)?$' | sort -V | tail -n 1)"
  if [[ -z "$LATEST_TAG" ]]; then
    echo "ERROR: Could not determine latest Buildroot tag."
    exit 1
  fi
  echo "Checking out latest tag: $LATEST_TAG"
  git checkout -f "$LATEST_TAG"
else
  echo "Checking out master"
  git checkout -f master
  git pull --ff-only
fi

# Clean tree
git reset --hard
git clean -fd

# Copy defconfig into buildroot configs/
DEFCONFIG_NAME="shakti_yamuna_buildroot_defconfig"
echo "Copying defconfig into Buildroot configs/$DEFCONFIG_NAME ..."
cp -f "$DEFCONFIG_SRC" "configs/$DEFCONFIG_NAME"

# Configure & build
echo "Running: make $DEFCONFIG_NAME"
make "$DEFCONFIG_NAME"

echo "Running: make (build)"
make -j"$(nproc)"

echo
echo "=== Buildroot no-patch setup completed successfully ==="
echo "Output images: $BUILDROOT_DIR/output/images"

