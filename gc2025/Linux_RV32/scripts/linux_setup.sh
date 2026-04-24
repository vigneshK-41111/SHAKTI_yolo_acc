#!/bin/bash
set -e

# ========= CONFIG =========
LINUX_REPO="https://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git"
LINUX_VERSION="v6.16"

# Script directory (your RV32 root)
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

# Use repo-local paths
BUILD_DIR="${SCRIPT_DIR}"
PATCH_DIR="${SCRIPT_DIR}/bsp"
LINUX_PATCH="shakti_linux.patch"
LINUX_SRC="${SCRIPT_DIR}/linux"
# ==========================

echo "=== Linux setup started ==="
echo "Build dir : $BUILD_DIR"
echo "Linux src : $LINUX_SRC"
echo "Patch dir : $PATCH_DIR"
echo "Patch     : $PATCH_DIR/$LINUX_PATCH"
echo "Version   : $LINUX_VERSION"
echo

# Check patch exists
if [ ! -f "$PATCH_DIR/$LINUX_PATCH" ]; then
  echo "ERROR: Patch not found: $PATCH_DIR/$LINUX_PATCH"
  exit 1
fi

# Clone Linux if not present
if [ ! -d "$LINUX_SRC/.git" ]; then
  echo "Cloning Linux kernel..."
  git clone "$LINUX_REPO" "$LINUX_SRC"
else
  echo "Linux source already exists"
fi

cd "$LINUX_SRC"

# Fetch tags and checkout version
echo "Checking out Linux version $LINUX_VERSION"
git fetch --tags
git checkout -f "$LINUX_VERSION"

# Clean tree (recommended before applying patch)
echo "Cleaning tree..."
git reset --hard
git clean -fd

# Apply patch
echo "Applying Linux patch..."
git apply --whitespace=fix "$PATCH_DIR/$LINUX_PATCH"

echo "=== Linux patch applied successfully ==="

