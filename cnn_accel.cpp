
#include <stdint.h>

// ===== WEIGHTS =====
#include "0_conv_weight.h"
#include "0_conv_weight_bias.h"

#include "1_conv_weight.h"
#include "1_conv_weight_bias.h"

#include "2_cv1_conv_weight.h"
#include "2_cv1_conv_weight_bias.h"

#define TILE 16
#define K 3
#define OC_PAR 8   // 🔥 PROCESS ONLY 8 CHANNELS AT A TIME

// ================= CONV =================
void conv_layer(
    volatile int8_t *input,
    volatile int8_t *output,
    int H, int W,
    int IN_CH,
    int OUT_CH,
    int8_t *weights,
    int8_t *bias
) {

#pragma HLS INLINE off

    int8_t tile_in[TILE+2][TILE+2][32];
#pragma HLS BIND_STORAGE variable=tile_in type=ram_t2p impl=bram

    int8_t tile_out[TILE][TILE][OC_PAR];
#pragma HLS BIND_STORAGE variable=tile_out type=ram_t2p impl=bram

    for (int oc_base = 0; oc_base < OUT_CH; oc_base += OC_PAR) {

        for (int ty = 0; ty < H; ty += TILE) {
            for (int tx = 0; tx < W; tx += TILE) {

                // LOAD TILE
                for (int y = 0; y < TILE+2; y++) {
                    for (int x = 0; x < TILE+2; x++) {
#pragma HLS PIPELINE II=1

                        int gy = ty + y - 1;
                        int gx = tx + x - 1;

                        for (int c = 0; c < IN_CH; c++) {
                            if (gy >= 0 && gx >= 0 && gy < H && gx < W) {
                                int idx = (gy * W + gx) * IN_CH;
                                tile_in[y][x][c] = input[idx + c];
                            } else {
                                tile_in[y][x][c] = 0;
                            }
                        }
                    }
                }

                // COMPUTE (ONLY 8 CHANNELS)
                for (int oc = 0; oc < OC_PAR; oc++) {
                    for (int y = 0; y < TILE; y++) {
                        for (int x = 0; x < TILE; x++) {

#pragma HLS PIPELINE II=1

                            int sum = bias[oc_base + oc];

                            for (int ic = 0; ic < IN_CH; ic++) {
                                for (int ky = 0; ky < K; ky++) {
                                    for (int kx = 0; kx < K; kx++) {

                                        int w_idx =
                                            (oc_base+oc)*(IN_CH*K*K) +
                                            ic*(K*K) +
                                            ky*K + kx;

                                        sum += tile_in[y+ky][x+kx][ic] *
                                               weights[w_idx];
                                    }
                                }
                            }

                            sum >>= 8;

                            if (sum < 0) sum = 0;
                            if (sum > 127) sum = 127;

                            tile_out[y][x][oc] = (int8_t)sum;
                        }
                    }
                }

                // STORE
                for (int y = 0; y < TILE; y++) {
                    for (int x = 0; x < TILE; x++) {
#pragma HLS PIPELINE II=1

                        int gy = ty + y;
                        int gx = tx + x;

                        if (gy < H && gx < W) {
                            int idx = (gy * W + gx) * OUT_CH;

                            for (int oc = 0; oc < OC_PAR; oc++) {
                                output[idx + oc_base + oc] =
                                    tile_out[y][x][oc];
                            }
                        }
                    }
                }
            }
        }
    }
}

// ================= TOP =================
void cnn_accel(
    volatile int8_t *input,
    volatile int8_t *output,
    int size
) {

#pragma HLS INTERFACE m_axi port=input  bundle=gmem
#pragma HLS INTERFACE m_axi port=output bundle=gmem
#pragma HLS INTERFACE s_axilite port=size
#pragma HLS INTERFACE s_axilite port=return

    // Reuse SAME engine sequentially
    conv_layer(input, output, size, size, 3, 16,
               w_0_conv_weight, w_0_conv_weight_bias);

    conv_layer(output, output, size, size, 16, 32,
               w_1_conv_weight, w_1_conv_weight_bias);

    conv_layer(output, output, size, size, 32, 64,
               w_2_cv1_conv_weight, w_2_cv1_conv_weight_bias);
}


