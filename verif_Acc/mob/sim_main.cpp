#include "Vmobilenet_top.h"
#include "verilated.h"
#include <iostream>
#include <fstream>
#include <vector>

#define MEM_SIZE 1000000

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

// ================= MEMORY =================
std::vector<uint8_t> mem(MEM_SIZE);

// ================= CLOCK =================
void tick(Vmobilenet_top* dut) {
    dut->ap_clk = 0;
    dut->eval();
    main_time++;

    dut->ap_clk = 1;
    dut->eval();
    main_time++;
}

// ================= LOAD IMAGE =================
void load_image() {
    std::ifstream file("image3.raw", std::ios::binary);
    if (!file) {
        std::cout << "FAILED TO OPEN image3.raw\n";
        exit(1);
    }

    file.read((char*)mem.data(), MEM_SIZE);
    std::cout << "Image loaded\n";
}

// ================= AXI-LITE WRITE =================
void axi_write(Vmobilenet_top* dut, uint32_t addr, uint32_t data) {

    dut->s_axi_mnv2_cnn_axilite_ctrl_AWADDR  = addr;
    dut->s_axi_mnv2_cnn_axilite_ctrl_AWVALID = 1;

    dut->s_axi_mnv2_cnn_axilite_ctrl_WDATA   = data;
    dut->s_axi_mnv2_cnn_axilite_ctrl_WVALID  = 1;

    dut->s_axi_mnv2_cnn_axilite_ctrl_BREADY  = 1;

    // wait ready
    while (!(dut->s_axi_mnv2_cnn_axilite_ctrl_AWREADY &&
             dut->s_axi_mnv2_cnn_axilite_ctrl_WREADY)) {
        tick(dut);
    }

    dut->s_axi_mnv2_cnn_axilite_ctrl_AWVALID = 0;
    dut->s_axi_mnv2_cnn_axilite_ctrl_WVALID  = 0;

    // wait response
    while (!dut->s_axi_mnv2_cnn_axilite_ctrl_BVALID) {
        tick(dut);
    }

    tick(dut);
    dut->s_axi_mnv2_cnn_axilite_ctrl_BREADY = 0;
}

// ================= MAIN =================
int main(int argc, char** argv) {

    Verilated::commandArgs(argc, argv);
    Vmobilenet_top* dut = new Vmobilenet_top;

    load_image();

    // ================= INIT =================
    dut->ap_rst_n = 0;
    dut->ap_clk = 0;

    // AXI default
    dut->m_axi_mnv2_cnn_axi4_pix_ARREADY = 1;
    dut->m_axi_mnv2_cnn_axi4_pix_RVALID  = 0;

    dut->m_axi_mnv2_cnn_axi4_out_AWREADY = 1;
    dut->m_axi_mnv2_cnn_axi4_out_WREADY  = 1;
    dut->m_axi_mnv2_cnn_axi4_out_BVALID  = 0;

    dut->s_axi_mnv2_cnn_axilite_ctrl_AWVALID = 0;
    dut->s_axi_mnv2_cnn_axilite_ctrl_WVALID  = 0;

    // reset
    for (int i = 0; i < 20; i++) tick(dut);
    dut->ap_rst_n = 1;

    // ================= CONFIG =================
    axi_write(dut, 0x10, 0);         // input addr low
    axi_write(dut, 0x14, 0);

    axi_write(dut, 0x1C, 200000);    // output addr low
    axi_write(dut, 0x20, 0);

    axi_write(dut, 0x28, 416);       // size

    axi_write(dut, 0x00, 1);         // START

    std::cout << "CNN STARTED\n";

    // ================= SIM LOOP =================
    while (main_time < 2000000) {

        // ===== AXI READ (INPUT) =====
        if (dut->m_axi_mnv2_cnn_axi4_pix_ARVALID) {

            uint32_t addr = dut->m_axi_mnv2_cnn_axi4_pix_ARADDR;

            uint32_t data =
                (mem[addr+3] << 24) |
                (mem[addr+2] << 16) |
                (mem[addr+1] << 8)  |
                (mem[addr]);

            dut->m_axi_mnv2_cnn_axi4_pix_RDATA  = data;
            dut->m_axi_mnv2_cnn_axi4_pix_RVALID = 1;
            dut->m_axi_mnv2_cnn_axi4_pix_RLAST  = 1;
        } else {
            dut->m_axi_mnv2_cnn_axi4_pix_RVALID = 0;
        }

        // ===== AXI WRITE (OUTPUT) =====
        if (dut->m_axi_mnv2_cnn_axi4_out_WVALID) {

            uint32_t addr = dut->m_axi_mnv2_cnn_axi4_out_AWADDR;
            uint32_t data = dut->m_axi_mnv2_cnn_axi4_out_WDATA;

            mem[addr]   = data & 0xFF;
            mem[addr+1] = (data >> 8) & 0xFF;
            mem[addr+2] = (data >> 16) & 0xFF;
            mem[addr+3] = (data >> 24) & 0xFF;

            if (dut->m_axi_mnv2_cnn_axi4_out_WLAST)
                dut->m_axi_mnv2_cnn_axi4_out_BVALID = 1;
        }

        if (dut->m_axi_mnv2_cnn_axi4_out_BREADY)
            dut->m_axi_mnv2_cnn_axi4_out_BVALID = 0;

        tick(dut);
    }

    // ================= OUTPUT =================
    std::cout << "OUT[0] = " << (int)mem[200000] << std::endl;
    std::cout << "OUT[1] = " << (int)mem[200001] << std::endl;
    std::cout << "OUT[2] = " << (int)mem[200002] << std::endl;

    std::cout << "Simulation DONE\n";

    delete dut;
    return 0;
}
