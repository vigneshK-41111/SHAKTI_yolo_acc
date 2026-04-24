#!/bin/bash
set -e

REPO_URL="https://gitlab.com/shaktiproject/gc2025.git"
BRANCH_NAME="platformio_files"

echo "➡️ Cloning repository branch $BRANCH_NAME..."
git clone --branch "$BRANCH_NAME" --single-branch "$REPO_URL" repo_tmp

FRAMEWORK_SRC="repo_tmp/framework-shakti-gc2025-sdk"
PLATFORM_SRC="repo_tmp/shakti-gc2025"
SHAKTI_OPENOCD_SRC="repo_tmp/shakti-openocd"

# -----------------------------------------
# 1. Locate PlatformIO Installation
# -----------------------------------------
echo "🔍 Searching for .platformio directory in HOME..."

if [ -d "$HOME/.platformio" ]; then
    PIO_DIR="$HOME/.platformio"
    echo "✅ Found PlatformIO directory at: $PIO_DIR"
else
    echo "❌ ERROR: .platformio not found in HOME directory."
    echo "➡️ Install PlatformIO IDE extension in VSCode first."
    rm -rf repo_tmp
    exit 1
fi

PKG_DIR="$PIO_DIR/packages"
PLAT_DIR="$PIO_DIR/platforms"

mkdir -p "$PKG_DIR"
mkdir -p "$PLAT_DIR"

# -----------------------------------------
# 2. Install Framework
# -----------------------------------------
FRAMEWORK_DST="$PKG_DIR/framework-shakti-gc2025-sdk"

echo "➡️ Installing framework-shakti-gc2025-sdk..."
rm -rf "$FRAMEWORK_DST"
mkdir -p "$FRAMEWORK_DST"
cp -r "$FRAMEWORK_SRC/"* "$FRAMEWORK_DST/"

echo "✅ Framework installed to $FRAMEWORK_DST"

# -----------------------------------------
# 3. Install shakti-openocd (CUSTOM OPENOCD)
# -----------------------------------------
SHAKTI_OPENOCD_DST="$PKG_DIR/shakti-openocd"

echo "➡️ Installing shakti-openocd package..."
rm -rf "$SHAKTI_OPENOCD_DST"
mkdir -p "$SHAKTI_OPENOCD_DST"

# Copy binary
if [ -f "$SHAKTI_OPENOCD_SRC/openocd" ]; then
    cp "$SHAKTI_OPENOCD_SRC/openocd" "$SHAKTI_OPENOCD_DST/openocd"
    chmod +x "$SHAKTI_OPENOCD_DST/openocd"
    echo "✅ Copied openocd binary"
else
    echo "❌ ERROR: openocd binary missing in repo"
    exit 1
fi

# Copy package.json
if [ -f "$SHAKTI_OPENOCD_SRC/package.json" ]; then
    cp "$SHAKTI_OPENOCD_SRC/package.json" "$SHAKTI_OPENOCD_DST/package.json"
    echo "✅ Copied package.json"
else
    echo "❌ ERROR: package.json missing in shakti-openocd folder"
    exit 1
fi

echo "🟢 shakti-openocd installed at: $SHAKTI_OPENOCD_DST"

# -----------------------------------------
# 4. Copy helper files
# -----------------------------------------
echo "➡️ Installing helper files..."

[ -d "$FRAMEWORK_SRC/elf2hex" ] && cp -r "$FRAMEWORK_SRC/elf2hex" "$FRAMEWORK_DST/"
[ -d "$FRAMEWORK_SRC/openocd" ] && cp -r "$FRAMEWORK_SRC/openocd" "$FRAMEWORK_DST/"
[ -f "$FRAMEWORK_SRC/package.json" ] && cp "$FRAMEWORK_SRC/package.json" "$FRAMEWORK_DST/"
[ -f "$FRAMEWORK_SRC/.piopm" ] && cp "$FRAMEWORK_SRC/.piopm" "$FRAMEWORK_DST/" || true

echo "✅ Helper files installed."

# -----------------------------------------
# 5. Install Platform Package
# -----------------------------------------
PLATFORM_DST="$PLAT_DIR/shakti-gc2025"

echo "➡️ Installing Platform shakti-gc2025..."
rm -rf "$PLATFORM_DST"
mkdir -p "$PLATFORM_DST"
cp -r "$PLATFORM_SRC/"* "$PLATFORM_DST/"
echo "✅ Platform installed to $PLATFORM_DST"

# -----------------------------------------
# 6. Cleanup
# -----------------------------------------
rm -rf repo_tmp

# -----------------------------------------
# 7. Open VSCode for verification
# -----------------------------------------
echo "➡️ Opening Visual Studio Code..."

if command -v code >/dev/null 2>&1; then
    code "$PIO_DIR" >/dev/null 2>&1 &
else
    echo "⚠️ VSCode (code) command not found. Skip opening."
fi

# -----------------------------------------
# 8. Final success message
# -----------------------------------------
echo ""
echo "🎉 SUCCESS! SHAKTI PlatformIO setup completed."
echo "🟢 Framework installed at: $FRAMEWORK_DST"
echo "🟢 Platform installed at: $PLATFORM_DST"
echo "🟢 shakti-openocd installed at: $SHAKTI_OPENOCD_DST"
echo "🟢 VSCode opened for verification."

