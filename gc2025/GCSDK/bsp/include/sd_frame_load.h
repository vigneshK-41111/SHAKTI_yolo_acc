#ifndef SD_FRAME_LOAD_H
#define SD_FRAME_LOAD_H

#include <stdint.h>

#define FRAME_SIZE   (416*416*3)

int load_frames_to_ddr(int num_frames);

#endif