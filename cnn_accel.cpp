#include <stdint.h>

#define IN_SIZE 416
#define OUT_CH 16
#define TILE 32

#define MAX_SIZE (IN_SIZE * IN_SIZE * OUT_CH)

void cnn_accel(
    volatile const int8_t *input,
    volatile int8_t *output,
    int size
) {

#pragma HLS INTERFACE s_axilite port=return bundle=control
#pragma HLS INTERFACE s_axilite port=size   bundle=control

#pragma HLS INTERFACE m_axi port=input  bundle=gmem depth=MAX_SIZE offset=slave
#pragma HLS INTERFACE m_axi port=output bundle=gmem depth=MAX_SIZE offset=slave

#pragma HLS INTERFACE ap_ctrl_hs port=return

    // 🔥 FORCE side-effect (prevents optimization)
    if (size > 0) {
        output[0] = input[0];
    }

    int8_t tile_in[TILE][TILE][3];
#pragma HLS BIND_STORAGE variable=tile_in type=ram_t2p impl=bram

    int8_t tile_out[TILE][TILE][OUT_CH];
#pragma HLS BIND_STORAGE variable=tile_out type=ram_t2p impl=bram

    // ---------------- TILING ----------------
    for (int ty = 0; ty < size; ty += TILE) {
#pragma HLS LOOP_TRIPCOUNT min=1 max=416

        for (int tx = 0; tx < size; tx += TILE) {
#pragma HLS LOOP_TRIPCOUNT min=1 max=416

            // ---------------- LOAD ----------------
            for (int y = 0; y < TILE; y++) {
                for (int x = 0; x < TILE; x++) {
#pragma HLS PIPELINE II=1

                    int gy = ty + y;
                    int gx = tx + x;

                    if (gy < size && gx < size) {
                        int idx = (gy * size + gx) * 3;

                        tile_in[y][x][0] = input[idx + 0];
                        tile_in[y][x][1] = input[idx + 1];
                        tile_in[y][x][2] = input[idx + 2];
                    } else {
                        // 🔥 prevent undefined behavior
                        tile_in[y][x][0] = 0;
                        tile_in[y][x][1] = 0;
                        tile_in[y][x][2] = 0;
                    }
                }
            }

            // ---------------- COMPUTE ----------------
            for (int y = 0; y < TILE; y++) {
                for (int x = 0; x < TILE; x++) {
#pragma HLS PIPELINE II=1

                    for (int c = 0; c < OUT_CH; c++) {

                        int sum = 0;

                        sum += tile_in[y][x][0];
                        sum += tile_in[y][x][1];
                        sum += tile_in[y][x][2];

                        tile_out[y][x][c] = (int8_t)(sum >> 1);
                    }
                }
            }

            // ---------------- STORE ----------------
            for (int y = 0; y < TILE; y++) {
                for (int x = 0; x < TILE; x++) {
#pragma HLS PIPELINE II=1

                    int gy = ty + y;
                    int gx = tx + x;

                    if (gy < size && gx < size) {
                        int idx = (gy * size + gx) * OUT_CH;

                        for (int c = 0; c < OUT_CH; c++) {
                            output[idx + c] = tile_out[y][x][c];
                        }
                    }
                }
            }
        }
    }
}
