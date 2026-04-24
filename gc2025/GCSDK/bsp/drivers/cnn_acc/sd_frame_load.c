#include <stdio.h>
#include "ff.h"
#include "diskio.h"
#include "sd_frame_load.h"

#define DDR_BASE 0x80000000

int sd_init_system()
{
    FRESULT fr;
    FATFS *fs;
    // Initialize disk (SSPI)
    if (disk_initialize(0) != 0) {
        printf("Disk init failed\n");
        return -1;
    }

    // Mount filesystem
    fr = f_mount(&fs, "", 1);
    if (fr != FR_OK) {
        printf("Mount failed: %d\n", fr);
        return -1;
    }

    printf("SD mounted successfully\n");
    return 0;
}

int load_frames_to_ddr(int num_frames)
{
    FIL fil;
    FRESULT fr;
    UINT br;

    for (int i = 0; i < num_frames; i++) {

        char filename[20];
        sprintf(filename, "f%d.raw", i);

        uint8_t *dest = (uint8_t *)(DDR_BASE + i * FRAME_SIZE);

        printf("Loading %s...\n", filename);

        fr = f_open(&fil, filename, FA_READ);
        if (fr != FR_OK) {
            printf("Open failed: %d\n", fr);
            return -1;
        }

        int total = 0;

        while (1) {
            fr = f_read(&fil, dest + total, 4096, &br);

            if (fr != FR_OK || br == 0)
                break;

            total += br;
        }

        printf("Loaded %d bytes\n", total);

        f_close(&fil);
    }

    return 0;
}