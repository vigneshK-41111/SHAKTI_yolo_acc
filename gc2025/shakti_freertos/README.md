# Running FreeRTOS Application on GC2025 Shakti SoC

This document explains running [FreeRTOS](https://github.com/FreeRTOS/FreeRTOS.git) applications on the Shakti SoC for GC2025.

### Prerequisites
- Clone the Shakti GC2025 repository.
- Ensure that the PATH environment variable includes a valid RISC-V GNU toolchain.

### Repository
- Clone Shakti GC2025 repository.
- https://gitlab.com/shaktiproject/gc2025

### Setup steps
- Change the directory to the git clone path of the GC2025 repo.
- Execute the script “<PATH_to_GC2025>/setup.sh”.

### Script actions
- Clones the FreeRTOS repo if it is not already cloned.
- Modifies FreeRTOSConfig.h and portASM.S to support Shakti SoC.
- Board support package required for Shakti SoC is copied to <PATH_to_GC2025>/FreeRTOS/FreeRTOS/Demo/shakti-freertos/bsp.
- Copies sample program to <PATH_to_GC2025>/FreeRTOS/FreeRTOS/Demo/shakti-freertos/ganga.
- Builds a sample program and copies the ELF file to <PATH_to_GC2025>/FreeRTOS/FreeRTOS/Demo/shakti-freertos/ganga/freertos.elf.

### Board Support Package
- The board support package has the drivers for UART, I2C, SPI, GPIO, PLIC, CLINT, and SoC-specific files.
- The source code is in <PATH_to_GC2025>/FreeRTOS/FreeRTOS/Demo/shakti-freertos/bsp/.

### Sample program
- Sample program is in <PATH_to_GC2025>/FreeRTOS/FreeRTOS/Demo/shakti-freertos/ganga.
- This program demonstrates running three tasks with different priorities, and each task demonstrates interfacing with I2C, SPI, and GPIO peripherals.

### Task priorities
- DS3231_RTC — priority 2.
- SPI_Flash — priority 1.
- LED_Task — priority 0.

### DS3231 I2C task
- Task: vTaskDS3231 communicates with the DS3231 RTC via I2C.
- Initializes I2C, writes and reads time registers, and prints formatted time and date, verifying I2C operation and FreeRTOS task scheduling.

### SPI Flash task
- Task: vTaskSPIFlash handles SPI Flash memory testing via the SSPI driver.
- Initializes SPI, performs erase, write, and read-back verification, ensuring stable SPI and memory access.

### GPIO task
- Task: vLEDTask uses the GPIOv2 driver to read pin data.
- Configures GPIO, polls data, and prints results, validating GPIO under multitasking.

### Build an application
- To build a custom application, navigate to <PATH_to_GC2025>/FreeRTOS/FreeRTOS/Demo/shakti-freertos/ganga.
- Make your desired changes in main.c, then rebuild the project using:

```bash
make clean
make
```

- A new ELF file will be placed at <PATH_to_GC2025>/FreeRTOS/FreeRTOS/Demo/shakti-freertos/ganga/freertos.elf.

### Upload and boot support (Yamuna / Ganga platforms)

- Added support for an **upload** target that runs after a board reset.
- The binary uploaded using `make upload` is programmed into the **boot memory**, so it automatically executes as boot code when the board is reset.

**Usage:**
- To Upload a custom application, navigate to <PATH_to_GC2025>/FreeRTOS/FreeRTOS/Demo/shakti-freertos/ganga.
- To build, generate the ELF, and upload it to the board:
```bash
make clean
make upload
```
- On pressing reset, the uploaded binary will boot automatically.

### Note
- Ensure that the RISC-V toolchain is sourced before running make.
- The same steps apply to the yamuna sample as well.