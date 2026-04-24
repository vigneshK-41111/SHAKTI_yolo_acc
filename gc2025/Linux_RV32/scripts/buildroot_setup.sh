#!/bin/bash
set -e

# ========= CONFIG =========
BUILDROOT_REPO="https://github.com/buildroot/buildroot.git"
BUILDROOT_VER="2025.08.2"

# Directory where this script lives (your repo root)
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

# Repo-local locations
BUILDROOT_DIR="${SCRIPT_DIR}/buildroot"
PATCH_FILE="${SCRIPT_DIR}/bsp/shakti_buildroot.patch"
# ==========================

apply_patch() {
  if git apply --check "$PATCH_FILE" >/dev/null 2>&1; then
    git apply --whitespace=fix "$PATCH_FILE"
    echo "Patch applied: $(basename "$PATCH_FILE")"
  else
    echo "Patch already applied or not applicable"
  fi
}

echo "=== Buildroot setup started ==="
echo "Buildroot dir : $BUILDROOT_DIR"
echo "Patch file    : $PATCH_FILE"
echo "Version       : $BUILDROOT_VER"
echo

# Check patch exists
if [ ! -f "$PATCH_FILE" ]; then
  echo "ERROR: Patch not found: $PATCH_FILE"
  exit 1
fi

# Clone Buildroot if missing
if [ ! -d "$BUILDROOT_DIR/.git" ]; then
  echo "Cloning Buildroot..."
  git clone "$BUILDROOT_REPO" "$BUILDROOT_DIR"
else
  echo "Buildroot already exists"
fi

cd "$BUILDROOT_DIR"

# Checkout required version
git fetch --tags
git checkout -f "$BUILDROOT_VER"

# Clean tree (recommended)
git reset --hard
git clean -fd

# Apply patch
apply_patch

echo "=== Buildroot setup completed successfully ==="

