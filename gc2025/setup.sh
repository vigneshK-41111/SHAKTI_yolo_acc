#!/bin/bash
set -e

BASE_DIR=$(pwd)
FREERTOS_DIR="$BASE_DIR/FreeRTOS"
DEMO_DIR="$FREERTOS_DIR/FreeRTOS/Demo"
PORTABLE_PATH="$FREERTOS_DIR/FreeRTOS/Source/portable/GCC/RISC-V"
SHAKTI_FREERTOS_DIR="$BASE_DIR/shakti_freertos"

echo "[STEP 1] Checking FreeRTOS repository..."
if [ -d "$FREERTOS_DIR" ]; then
    echo "  - FreeRTOS directory already exists, using existing clone."
    cd "$FREERTOS_DIR"
    git fetch origin
    git submodule update --init --recursive
else
    echo "  - Cloning FreeRTOS repository..."
    git clone https://github.com/FreeRTOS/FreeRTOS.git
    cd "$FREERTOS_DIR"
    git submodule update --init --recursive
fi

echo "[STEP 2] Ensuring shakti_freertos is available inside gc2025..."
if [ ! -d "$SHAKTI_FREERTOS_DIR" ]; then
    echo "  ❌ ERROR: shakti_freertos directory not found!"
    exit 1
fi

echo "[STEP 3] Copying shakti_freertos to FreeRTOS Demo directory..."
cd "$DEMO_DIR"
if [ -d "shakti_freertos" ]; then
    echo "  - Existing shakti_freertos directory found, removing..."
    rm -rf shakti_freertos
fi
cp -r "$SHAKTI_FREERTOS_DIR" ./shakti_freertos
echo "  - Copied shakti_freertos into Demo/"

echo "[STEP 4] Updating custom portASM.S..."
CUSTOM_PORTASM_PATH="$SHAKTI_FREERTOS_DIR/portASM.S"
if [ -f "$CUSTOM_PORTASM_PATH" ]; then
    echo "  - Found custom portASM.S"
    if [ -f "$PORTABLE_PATH/portASM.S" ]; then
        echo "  - Removing existing portASM.S from $PORTABLE_PATH"
        rm -f "$PORTABLE_PATH/portASM.S"
    fi
    echo "  - Copying new portASM.S into $PORTABLE_PATH"
    cp "$CUSTOM_PORTASM_PATH" "$PORTABLE_PATH/"
else
    echo "  ⚠️ portASM.S not found inside shakti_freertos/"
fi

echo "[STEP 5] Building FreeRTOS for Shakti Ganga..."
cd "$DEMO_DIR/shakti_freertos/ganga"
make clean
make || { echo "❌ Ganga build failed!"; exit 1; }


echo "[✅ DONE] Build completed successfully!"
echo "ELF outputs:"
echo "  - Ganga  : $DEMO_DIR/shakti_freertos/ganga/freertos.elf"
