/*
Copyright (c) 2018, IIT Madras All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted
provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this list of conditions
  and the following disclaimer.
* Redistributions in binary form must reproduce the above copyright notice, this list of
  conditions and the following disclaimer in the documentation and/or other materials provided
 with the distribution.
* Neither the name of IIT Madras  nor the names of its contributors may be used to endorse or
  promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS
OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
--------------------------------------------------------------------------------------------------

Author: Arjun Menon , P.George
Details:

--------------------------------------------------------------------------------------------------
*/
module fpga_top#( parameter AXI_ID_WIDTH = 4, parameter AXI_ADDR_WIDTH = 31)
  (
  // ---- DDR ports --------------//
  input                   c0_sys_clk_p,
  input                   c0_sys_clk_n,
  output                  c0_ddr4_act_n,
  output [16:0]           c0_ddr4_adr,
  output [1:0]            c0_ddr4_ba,
  output [0:0]            c0_ddr4_bg,
  output [0:0]            c0_ddr4_cke,
  output [0:0]            c0_ddr4_odt,
  output [0:0]            c0_ddr4_cs_n,
  output [0:0]            c0_ddr4_ck_t,
  output [0:0]            c0_ddr4_ck_c,
  output                  c0_ddr4_reset_n,
  inout  [7:0]            c0_ddr4_dm_dbi_n,
  inout  [63:0]           c0_ddr4_dq,
  inout  [7:0]            c0_ddr4_dqs_t,
  inout  [7:0]            c0_ddr4_dqs_c,
//  output        ddr3_cs_n,
//  output        ddr3_cs_n,
/*
  output [1:0]  ddr3_dm,
  output        ddr3_odt,
*/  
  // ethernet ports
  /*input phy_tx_clk,
  input phy_rx_clk,
  input phy_crs,
  input phy_dv,
  input [3:0]phy_rx_data,
  input phy_col,
  input phy_rx_er,
  output phy_rst_n,
  output phy_tx_en,
  output [3:0]phy_tx_data,
  output phy_ref_clk,
  inout phy_mdio,
  output phy_mdc,*/
  // ---- JTAG ports ------- //
    input pin_tck,
    input pin_trst,
    input pin_tdi,
    input pin_tms,
    output pin_tdo,
   // ---- UART ports --------//
    input         uart0_SIN,
    output        uart0_SOUT,

//   // ---- I2C ports --------//
/*
    inout         i2c0_sda,
    inout         i2c0_scl,

  
    inout         i2c1_sda,
    inout         i2c1_scl,

//   // ---- SPI ports ---------//
   inout       spi0_mosi,
// output       spi0_sclk,// if external flash enable this or disable if onboard flash
   inout       spi0_nss,
   inout        spi0_miso,
   inout        spi0_sclk,

  // ---- io_cell_ports(Pin Muxed) ---------//
    inout io7_cell,
    inout io8_cell,
    inout io9_cell,
    inout io10_cell,
    inout io12_cell,
    inout io13_cell,
    inout io16_cell,
    inout io17_cell,
    inout io18_cell,
    inout io19_cell,
    inout io20_cell,


    // ---- GPIO ports --------//
    inout gpio_4,
    inout gpio_7,
    inout gpio_8,
    inout gpio_14,
    inout gpio_15,
    inout gpio_16,
    inout gpio_17,
    inout gpio_18,
    inout gpio_19,
    inout gpio_20,
    inout gpio_21,
    inout gpio_22,
    inout gpio_23,
    inout gpio_24,
    inout gpio_25,
    inout gpio_26,
    inout gpio_27,
    inout gpio_28,
    inout gpio_29,
    inout gpio_30,
    inout gpio_31,

    input gptimer0_in,
    output gptimer0_out,
    input external_clk,

    input gptimer1_in,
    output gptimer1_out,
*/
/*
    input gptimer2_in,
    output gptimer2_out,

    input gptimer3_in,
    output gptimer3_out,
	
*/


    // ---- System Reset ------//
    input         sys_rst,	//Active Low

    // ---- System Clock ------//
    input         sys_clk_p,
    input         sys_clk_n
   );

  reg aresetn ;

  wire                            soc_reset;      // reset to the SoC
  wire                            core_clk;       // clock to the SoC
  wire                              ddr3_main;      // main clock to the ddr3-mig
  wire                              ddr3_ref;       // reference clock to dr3 mig
  wire                            locked;         // indicates pll is stable
  wire                              clk;            // mig ui clk            
  wire                              rst;            // mig ui reset
  wire                            mmcm_locked;    // indicates the ui clock from mig is stable
 wire                              c0_ddr4_ui_clk;            // mig ui clk            
  wire                              c0_ddr4_ui_clk_sync_rst;            // mig ui reset
  reg                               c0_ddr4_aresetn;
  // Signals driven by axi converter to DDR slave ports
  wire [AXI_ID_WIDTH-1:0]           c0_ddr4_s_axi_awid;
  wire [AXI_ADDR_WIDTH-1:0]         c0_ddr4_s_axi_awaddr;
  wire [7:0]                        c0_ddr4_s_axi_awlen;
  wire [2:0]                        c0_ddr4_s_axi_awsize;
  wire [1:0]                        c0_ddr4_s_axi_awburst;
  wire [0:0]                        c0_ddr4_s_axi_awlock;
  wire [3:0]                        c0_ddr4_s_axi_awcache;
  wire [2:0]                        c0_ddr4_s_axi_awprot;
  wire                              c0_ddr4_s_axi_awvalid;
  wire                              c0_ddr4_s_axi_awready; 
`ifdef BUS_WIDTH128   
  wire [127:0]                       c0_ddr4_s_axi_wdata;
  wire [15:0]                        c0_ddr4_s_axi_wstrb;
`elsif BUS_WIDTH64
  wire [63:0]                       c0_ddr4_s_axi_wdata;
  wire [7:0]                        c0_ddr4_s_axi_wstrb;
`elsif BUS_WIDTH32
  wire [31:0]                       c0_ddr4_s_axi_wdata;
  wire [3:0]                        c0_ddr4_s_axi_wstrb;
`else
  wire [127:0]                       c0_ddr4_s_axi_wdata;
  wire [15:0]                        c0_ddr4_s_axi_wstrb;
`endif
  wire                              c0_ddr4_s_axi_wlast;
  wire                              c0_ddr4_s_axi_wvalid;
  wire                              c0_ddr4_s_axi_wready;   
  wire                              c0_ddr4_s_axi_bready;
  wire [AXI_ID_WIDTH-1:0]           c0_ddr4_s_axi_bid;
  wire [1:0]                        c0_ddr4_s_axi_bresp;
  wire                              c0_ddr4_s_axi_bvalid;   
  wire [AXI_ID_WIDTH-1:0]           c0_ddr4_s_axi_arid;
  wire [AXI_ADDR_WIDTH-1:0]         c0_ddr4_s_axi_araddr;
  wire [7:0]                        c0_ddr4_s_axi_arlen;
  wire [2:0]                        c0_ddr4_s_axi_arsize;
  wire [1:0]                        c0_ddr4_s_axi_arburst;
  wire [0:0]                        c0_ddr4_s_axi_arlock;
  wire [3:0]                        c0_ddr4_s_axi_arcache;
  wire [2:0]                        c0_ddr4_s_axi_arprot;
  wire                              c0_ddr4_s_axi_arvalid;
  wire                              c0_ddr4_s_axi_arready;    
  wire                              c0_ddr4_s_axi_rready;
  wire [AXI_ID_WIDTH-1:0]           c0_ddr4_s_axi_rid;
`ifdef BUS_WIDTH128   
  wire [127:0]                       c0_ddr4_s_axi_rdata;
`elsif BUS_WIDTH64
  wire [63:0]                       c0_ddr4_s_axi_rdata;
`elsif BUS_WIDTH32
  wire [31:0]                       c0_ddr4_s_axi_rdata;
`else
  wire [127:0]                       c0_ddr4_s_axi_rdata;
`endif
  wire [1:0]                        c0_ddr4_s_axi_rresp;
  wire                              c0_ddr4_s_axi_rlast;
  wire                              c0_ddr4_s_axi_rvalid;   
  // Signals from SoC Master to axi converter
  wire [AXI_ID_WIDTH-1:0]           s_axi_awid;
  wire [AXI_ADDR_WIDTH-1:0]         s_axi_awaddr;
  wire [7:0]                        s_axi_awlen;
  wire [2:0]                        s_axi_awsize;
  wire [1:0]                        s_axi_awburst;
  wire [0:0]                        s_axi_awlock;
  wire [3:0]                        s_axi_awcache;
  wire [2:0]                        s_axi_awprot;
  wire                              s_axi_awvalid;
  wire                              s_axi_awready;    
`ifdef BUS_WIDTH128   
  wire [127:0]                       s_axi_wdata;
  wire [15:0]                        s_axi_wstrb;
`elsif BUS_WIDTH64
  wire [63:0]                       s_axi_wdata;
  wire [7:0]                        s_axi_wstrb;
`elsif BUS_WIDTH32
  wire [31:0]                       s_axi_wdata;
  wire [3:0]                        s_axi_wstrb;
`else
  wire [127:0]                       s_axi_wdata;
  wire [15:0]                        s_axi_wstrb;
`endif
  wire                              s_axi_wlast;
  wire                              s_axi_wvalid;
  wire                              s_axi_wready;
  wire                              s_axi_bready;
  wire [AXI_ID_WIDTH-1:0]           s_axi_bid;
  wire [1:0]                        s_axi_bresp;
  wire                              s_axi_bvalid;
  wire [AXI_ID_WIDTH-1:0]           s_axi_arid;
  wire [AXI_ADDR_WIDTH-1:0]         s_axi_araddr;
  wire [7:0]                        s_axi_arlen;
  wire [2:0]                        s_axi_arsize;
  wire [1:0]                        s_axi_arburst;
  wire [0:0]                        s_axi_arlock;
  wire [3:0]                        s_axi_arcache;
  wire [2:0]                        s_axi_arprot;
  wire                              s_axi_arvalid;
  wire                              s_axi_arready;
  wire                              s_axi_rready;
  wire [AXI_ID_WIDTH-1:0]           s_axi_rid;
`ifdef BUS_WIDTH128   
  wire [127:0]                      s_axi_rdata;
`elsif BUS_WIDTH64
  wire [63:0]                       s_axi_rdata;
`elsif BUS_WIDTH32
  wire [31:0]                       s_axi_rdata;
`else
  wire [127:0]                      s_axi_rdata;
`endif
  wire [1:0]                        s_axi_rresp;
  wire                              s_axi_rlast;
  wire                              s_axi_rvalid;   
  wire [11:0]                       device_temp; 
  wire [1:0]                         interrupts;

   wire phy_mdio_o, phy_mdio_i, phy_mdio_t;

   wire i2c0_scl_out, i2c0_scl_in, i2c0_scl_out_en;
   wire i2c0_sda_out, i2c0_sda_in, i2c0_sda_out_en;
   wire i2c1_scl_out, i2c1_scl_in, i2c1_scl_out_en;
   wire i2c1_sda_out, i2c1_sda_in, i2c1_sda_out_en;

   wire io7_cell_in, io7_cell_out, io7_cell_en;
   wire io8_cell_in, io8_cell_out, io8_cell_en;
   wire io9_cell_in, io9_cell_out, io9_cell_en;
   wire io10_cell_in, io10_cell_out, io10_cell_en;
   wire io12_cell_in, io12_cell_out, io12_cell_en;
   wire io13_cell_in, io13_cell_out, io13_cell_en;
   wire io16_cell_in, io16_cell_out, io16_cell_en;
   wire io17_cell_in, io17_cell_out, io17_cell_en;
   wire io18_cell_in, io18_cell_out, io18_cell_en;
   wire io19_cell_in, io19_cell_out, io19_cell_en;
   wire io20_cell_in, io20_cell_out, io20_cell_en;

   wire gpio_4_in, gpio_4_out, gpio_4_en;
   wire gpio_7_in, gpio_7_out, gpio_7_en;
   wire gpio_8_in, gpio_8_out, gpio_8_en;
   wire gpio_14_in, gpio_14_out, gpio_14_en;
   wire gpio_15_in, gpio_15_out, gpio_15_en;
   wire gpio_16_in, gpio_16_out, gpio_16_en;
   wire gpio_17_in, gpio_17_out, gpio_17_en;
   wire gpio_18_in, gpio_18_out, gpio_18_en;
   wire gpio_19_in, gpio_19_out, gpio_19_en;
   wire gpio_20_in, gpio_20_out, gpio_20_en;
   wire gpio_21_in, gpio_21_out, gpio_21_en;
   wire gpio_22_in, gpio_22_out, gpio_22_en;
   wire gpio_23_in, gpio_23_out, gpio_23_en;
   wire gpio_24_in, gpio_24_out, gpio_24_en;
   wire gpio_25_in, gpio_25_out, gpio_25_en;
   wire gpio_26_in, gpio_26_out, gpio_26_en;
   wire gpio_27_in, gpio_27_out, gpio_27_en;
   wire gpio_28_in, gpio_28_out, gpio_28_en;
   wire gpio_29_in, gpio_29_out, gpio_29_en;
   wire gpio_30_in, gpio_30_out, gpio_30_en;
   wire gpio_31_in, gpio_31_out, gpio_31_en;

   wire ip2intc_irpt;
// ---------------------------------------------------------------------------- //
    wire wire_tck_clk;
    wire wire_trst;
    wire wire_capture;
    wire wire_run_test;
    wire wire_sel;
    wire wire_shift;
    wire wire_tdi;
    wire wire_tms;
    wire wire_update;
    wire wire_tdo;

/*
    BSCANE2 #(
      .JTAG_CHAIN(4) // Value for USER command.
    )
    bse2_inst (
      .CAPTURE(wire_capture), // 1-bit output: CAPTURE output from TAP controller.
      .DRCK(), // 1-bit output: Gated TCK output. When SEL is asserted, DRCK toggles when CAPTURE or SHIFT are asserted.
      .RESET(wire_trst), // 1-bit output: Reset output for TAP controller.
      .RUNTEST(wire_run_test), // 1-bit output: Output asserted when TAP controller is in Run Test/Idle state.
      .SEL(wire_sel), // 1-bit output: USER instruction active output.
      .SHIFT(wire_shift), // 1-bit output: SHIFT output from TAP controller.
      .TCK(wire_tck_clk), // 1-bit output: Test Clock output. Fabric connection to TAP Clock pin.
      .TDI(wire_tdi), // 1-bit output: Test Data Input (TDI) output from TAP controller.
      .TMS(wire_tms), // 1-bit output: Test Mode Select output. Fabric connection to TAP.
      .UPDATE(wire_update), // 1-bit output: UPDATE output from TAP controller
      .TDO(wire_tdo) // 1-bit input: Test Data Output (TDO) input for USER function.
    );
*/

  wire [31:0] temp_s_axi_awaddr, temp_s_axi_araddr;
  assign s_axi_awaddr= temp_s_axi_awaddr [AXI_ADDR_WIDTH-1:0];
  assign s_axi_araddr= temp_s_axi_araddr [AXI_ADDR_WIDTH-1:0];


  proc_sys_reset_0 proc_reset_inst (
      .slowest_sync_clk (core_clk),
      .ext_reset_in     (sys_rst),
      .aux_reset_in     (c0_init_calib_complete), //For DDR
      //.aux_reset_in     (1'b1), //For TCM
      .mb_debug_sys_rst (0),
      .dcm_locked       (locked),
      .mb_reset         (soc_reset),
      .bus_struct_reset (),
      .peripheral_reset (),
      .interconnect_aresetn (),
      .peripheral_aresetn ()
  );
   // ---------------------------------------------------------------------------- //
   // ---------- Clock divider ----------------//
   clk_divider clk_div (
                       .clk_in1_p(sys_clk_p),
                       .clk_in1_n(sys_clk_n),
                       .clk_out1(core_clk),
                    // .clk_out2(ddr3_main),
                    //   .clk_out3(c0_sys_clk_i),
                       .reset   (sys_rst),  //Can pass sys_rst ?
    .locked   (locked)
  );
   // ----------------------------------------- //
  // ------------ MIG for DDR4 ---------------//

  kcu105mig ddr (
  .c0_init_calib_complete(c0_init_calib_complete),    // output wire c0_init_calib_complete
  .dbg_clk(),                                  // output wire dbg_clk
  .c0_sys_clk_p(c0_sys_clk_p),                        // input wire c0_sys_clk_p
  .c0_sys_clk_n(c0_sys_clk_n),                        // input wire c0_sys_clk_n
  .dbg_bus(),                                  // output wire [511 : 0] dbg_bus
  .c0_ddr4_adr(c0_ddr4_adr),                          // output wire [16 : 0] c0_ddr4_adr
  .c0_ddr4_ba(c0_ddr4_ba),                            // output wire [1 : 0] c0_ddr4_ba
  .c0_ddr4_cke(c0_ddr4_cke),                          // output wire [0 : 0] c0_ddr4_cke
  .c0_ddr4_cs_n(c0_ddr4_cs_n),                        // output wire [0 : 0] c0_ddr4_cs_n
  .c0_ddr4_dm_dbi_n(c0_ddr4_dm_dbi_n),                // inout wire [7 : 0] c0_ddr4_dm_dbi_n
  .c0_ddr4_dq(c0_ddr4_dq),                            // inout wire [63 : 0] c0_ddr4_dq
  .c0_ddr4_dqs_c(c0_ddr4_dqs_c),                      // inout wire [7 : 0] c0_ddr4_dqs_c
  .c0_ddr4_dqs_t(c0_ddr4_dqs_t),                      // inout wire [7 : 0] c0_ddr4_dqs_t
  .c0_ddr4_odt(c0_ddr4_odt),                          // output wire [0 : 0] c0_ddr4_odt
  .c0_ddr4_bg(c0_ddr4_bg),                            // output wire [0 : 0] c0_ddr4_bg
  .c0_ddr4_reset_n(c0_ddr4_reset_n),                  // output wire c0_ddr4_reset_n
  .c0_ddr4_act_n(c0_ddr4_act_n),                      // output wire c0_ddr4_act_n
  .c0_ddr4_ck_c(c0_ddr4_ck_c),                        // output wire [0 : 0] c0_ddr4_ck_c
  .c0_ddr4_ck_t(c0_ddr4_ck_t),                        // output wire [0 : 0] c0_ddr4_ck_t
  .c0_ddr4_ui_clk(c0_ddr4_ui_clk),                    // output wire c0_ddr4_ui_clk
  .c0_ddr4_ui_clk_sync_rst(c0_ddr4_ui_clk_sync_rst),  // output wire c0_ddr4_ui_clk_sync_rst
  .c0_ddr4_aresetn(c0_ddr4_aresetn),                  // input wire c0_ddr4_aresetn
  .c0_ddr4_s_axi_awid(c0_ddr4_s_axi_awid),            // input wire [3 : 0] c0_ddr4_s_axi_awid
  .c0_ddr4_s_axi_awaddr(c0_ddr4_s_axi_awaddr),        // input wire [30 : 0] c0_ddr4_s_axi_awaddr
  .c0_ddr4_s_axi_awlen(c0_ddr4_s_axi_awlen),          // input wire [7 : 0] c0_ddr4_s_axi_awlen
  .c0_ddr4_s_axi_awsize(c0_ddr4_s_axi_awsize),        // input wire [2 : 0] c0_ddr4_s_axi_awsize
  .c0_ddr4_s_axi_awburst(c0_ddr4_s_axi_awburst),      // input wire [1 : 0] c0_ddr4_s_axi_awburst
  .c0_ddr4_s_axi_awlock(c0_ddr4_s_axi_awlock),        // input wire [0 : 0] c0_ddr4_s_axi_awlock
  .c0_ddr4_s_axi_awcache(c0_ddr4_s_axi_awcache),      // input wire [3 : 0] c0_ddr4_s_axi_awcache
  .c0_ddr4_s_axi_awprot(c0_ddr4_s_axi_awprot),        // input wire [2 : 0] c0_ddr4_s_axi_awprot
  .c0_ddr4_s_axi_awqos(c0_ddr4_s_axi_awqos),          // input wire [3 : 0] c0_ddr4_s_axi_awqos
  .c0_ddr4_s_axi_awvalid(c0_ddr4_s_axi_awvalid),      // input wire c0_ddr4_s_axi_awvalid
  .c0_ddr4_s_axi_awready(c0_ddr4_s_axi_awready),      // output wire c0_ddr4_s_axi_awready
  .c0_ddr4_s_axi_wdata(c0_ddr4_s_axi_wdata),          // input wire [511 : 0] c0_ddr4_s_axi_wdata
  .c0_ddr4_s_axi_wstrb(c0_ddr4_s_axi_wstrb),          // input wire [63 : 0] c0_ddr4_s_axi_wstrb
  .c0_ddr4_s_axi_wlast(c0_ddr4_s_axi_wlast),          // input wire c0_ddr4_s_axi_wlast
  .c0_ddr4_s_axi_wvalid(c0_ddr4_s_axi_wvalid),        // input wire c0_ddr4_s_axi_wvalid
  .c0_ddr4_s_axi_wready(c0_ddr4_s_axi_wready),        // output wire c0_ddr4_s_axi_wready
  .c0_ddr4_s_axi_bready(c0_ddr4_s_axi_bready),        // input wire c0_ddr4_s_axi_bready
  .c0_ddr4_s_axi_bid(c0_ddr4_s_axi_bid),              // output wire [3 : 0] c0_ddr4_s_axi_bid
  .c0_ddr4_s_axi_bresp(c0_ddr4_s_axi_bresp),          // output wire [1 : 0] c0_ddr4_s_axi_bresp
  .c0_ddr4_s_axi_bvalid(c0_ddr4_s_axi_bvalid),        // output wire c0_ddr4_s_axi_bvalid
  .c0_ddr4_s_axi_arid(c0_ddr4_s_axi_arid),            // input wire [3 : 0] c0_ddr4_s_axi_arid
  .c0_ddr4_s_axi_araddr(c0_ddr4_s_axi_araddr),        // input wire [30 : 0] c0_ddr4_s_axi_araddr
  .c0_ddr4_s_axi_arlen(c0_ddr4_s_axi_arlen),          // input wire [7 : 0] c0_ddr4_s_axi_arlen
  .c0_ddr4_s_axi_arsize(c0_ddr4_s_axi_arsize),        // input wire [2 : 0] c0_ddr4_s_axi_arsize
  .c0_ddr4_s_axi_arburst(c0_ddr4_s_axi_arburst),      // input wire [1 : 0] c0_ddr4_s_axi_arburst
  .c0_ddr4_s_axi_arlock(c0_ddr4_s_axi_arlock),        // input wire [0 : 0] c0_ddr4_s_axi_arlock
  .c0_ddr4_s_axi_arcache(c0_ddr4_s_axi_arcache),      // input wire [3 : 0] c0_ddr4_s_axi_arcache
  .c0_ddr4_s_axi_arprot(c0_ddr4_s_axi_arprot),        // input wire [2 : 0] c0_ddr4_s_axi_arprot
  .c0_ddr4_s_axi_arqos(c0_ddr4_s_axi_arqos),          // input wire [3 : 0] c0_ddr4_s_axi_arqos
  .c0_ddr4_s_axi_arvalid(c0_ddr4_s_axi_arvalid),      // input wire c0_ddr4_s_axi_arvalid
  .c0_ddr4_s_axi_arready(c0_ddr4_s_axi_arready),      // output wire c0_ddr4_s_axi_arready
  .c0_ddr4_s_axi_rready(c0_ddr4_s_axi_rready),        // input wire c0_ddr4_s_axi_rready
  .c0_ddr4_s_axi_rlast(c0_ddr4_s_axi_rlast),          // output wire c0_ddr4_s_axi_rlast
  .c0_ddr4_s_axi_rvalid(c0_ddr4_s_axi_rvalid),        // output wire c0_ddr4_s_axi_rvalid
  .c0_ddr4_s_axi_rresp(c0_ddr4_s_axi_rresp),          // output wire [1 : 0] c0_ddr4_s_axi_rresp
  .c0_ddr4_s_axi_rid(c0_ddr4_s_axi_rid),              // output wire [3 : 0] c0_ddr4_s_axi_rid
  .c0_ddr4_s_axi_rdata(c0_ddr4_s_axi_rdata),          // output wire [511 : 0] c0_ddr4_s_axi_rdata
      .sys_rst                        (sys_rst)
   );


   always @(posedge c0_ddr4_ui_clk) begin
     c0_ddr4_aresetn <= ~c0_ddr4_ui_clk_sync_rst;
   end
   

   // Instantiating the clock converter between the SoC and DDR3 MIG
   clk_converter clock_converter (
       .s_axi_aclk(core_clk),
    .s_axi_aresetn(~soc_reset),
       .s_axi_awid(s_axi_awid),
       .s_axi_awaddr(s_axi_awaddr),
       .s_axi_awlen(s_axi_awlen),
       .s_axi_awsize(s_axi_awsize),
       .s_axi_awburst(s_axi_awburst),
       .s_axi_awlock(1'b0),
       .s_axi_awcache(4'b10),
       .s_axi_awprot(s_axi_awprot),
       .s_axi_awregion(4'b0),
       .s_axi_awqos(4'b0),
       .s_axi_awvalid(s_axi_awvalid),
       .s_axi_awready(s_axi_awready),
       .s_axi_wdata(s_axi_wdata),
       .s_axi_wstrb(s_axi_wstrb),
       .s_axi_wlast(s_axi_wlast),
       .s_axi_wvalid(s_axi_wvalid),
       .s_axi_wready(s_axi_wready),
       .s_axi_bid(s_axi_bid),
       .s_axi_bresp(s_axi_bresp),
       .s_axi_bvalid(s_axi_bvalid),
       .s_axi_bready(s_axi_bready),
       .s_axi_arid(s_axi_arid),
       .s_axi_araddr(s_axi_araddr),
       .s_axi_arlen(s_axi_arlen),
       .s_axi_arsize(s_axi_arsize),
       .s_axi_arburst(s_axi_arburst),
       .s_axi_arlock(1'b0),
       .s_axi_arcache(4'b10),
       .s_axi_arprot(s_axi_arprot),
       .s_axi_arregion(4'b0),
       .s_axi_arqos(4'b0),
       .s_axi_arvalid(s_axi_arvalid),
       .s_axi_arready(s_axi_arready),
       .s_axi_rid(s_axi_rid),
       .s_axi_rdata(s_axi_rdata),
       .s_axi_rresp(s_axi_rresp),
       .s_axi_rlast(s_axi_rlast),
       .s_axi_rvalid(s_axi_rvalid),
       .s_axi_rready(s_axi_rready),
       .m_axi_aclk(c0_ddr4_ui_clk),
       .m_axi_aresetn(c0_ddr4_aresetn),
       .m_axi_awid(c0_ddr4_s_axi_awid),
       .m_axi_awaddr(c0_ddr4_s_axi_awaddr),
       .m_axi_awlen(c0_ddr4_s_axi_awlen),
       .m_axi_awsize(c0_ddr4_s_axi_awsize),
       .m_axi_awburst(c0_ddr4_s_axi_awburst),
       .m_axi_awlock(c0_ddr4_s_axi_awlock),
       .m_axi_awcache(c0_ddr4_s_axi_awcache),
       .m_axi_awprot(c0_ddr4_s_axi_awprot),
       .m_axi_awregion(),
       .m_axi_awqos(c0_ddr4_s_axi_awqos),
       .m_axi_awvalid(c0_ddr4_s_axi_awvalid),
       .m_axi_awready(c0_ddr4_s_axi_awready),
       .m_axi_wdata(c0_ddr4_s_axi_wdata),
       .m_axi_wstrb(c0_ddr4_s_axi_wstrb),
       .m_axi_wlast(c0_ddr4_s_axi_wlast),
       .m_axi_wvalid(c0_ddr4_s_axi_wvalid),
       .m_axi_wready(c0_ddr4_s_axi_wready),
       .m_axi_bid(c0_ddr4_s_axi_bid),
       .m_axi_bresp(c0_ddr4_s_axi_bresp),
       .m_axi_bvalid(c0_ddr4_s_axi_bvalid),
       .m_axi_bready(c0_ddr4_s_axi_bready),
       .m_axi_arid(c0_ddr4_s_axi_arid),
       .m_axi_araddr(c0_ddr4_s_axi_araddr),
       .m_axi_arlen(c0_ddr4_s_axi_arlen),
       .m_axi_arsize(c0_ddr4_s_axi_arsize),
       .m_axi_arburst(c0_ddr4_s_axi_arburst),
       .m_axi_arlock(c0_ddr4_s_axi_arlock),
       .m_axi_arcache(c0_ddr4_s_axi_arcache),
       .m_axi_arprot(c0_ddr4_s_axi_arprot),
       .m_axi_arregion(),
       .m_axi_arqos(c0_ddr4_s_axi_arqos),
       .m_axi_arvalid(c0_ddr4_s_axi_arvalid),
       .m_axi_arready(c0_ddr4_s_axi_arready),
       .m_axi_rid(c0_ddr4_s_axi_rid),
       .m_axi_rdata(c0_ddr4_s_axi_rdata),
       .m_axi_rresp(c0_ddr4_s_axi_rresp),
       .m_axi_rlast(c0_ddr4_s_axi_rlast),
       .m_axi_rvalid(c0_ddr4_s_axi_rvalid), 
       .m_axi_rready(c0_ddr4_s_axi_rready)
   );

   // ---- Instantiating the C-class SoC -------------//
   mkDebugSoc core(
       // Main Clock and Reset to the SoC
        .CLK(core_clk),
        .RST_N(~soc_reset),
        .CLK_ext_clk(external_clk),
        /*
        .CLK_tck_clk(wire_tck_clk),
        .RST_N_trst(~wire_trst),
        .wire_capture_capture_in(wire_capture),
        .wire_run_test_run_test_in(wire_run_test),
        .wire_sel_sel_in(wire_sel),
        .wire_shift_shift_in(wire_shift),
        .wire_tdi_tdi_in(wire_tdi),
        .wire_tms_tms_in(wire_tms),
        .wire_update_update_in(wire_update),
        .wire_tdo(wire_tdo),
        */

        .CLK_tck_clk(pin_tck),
        .RST_N_trst(pin_trst),
        .wire_tdi_tdi_in(pin_tdi),
        .wire_tms_tms_in(pin_tms),
        .wire_tdo(pin_tdo),

      // SPI ports
        .spi0_io_mosi_out(spi0_io_mosi_out),
        .spi0_io_mosi_outen(spi0_io_mosi_outen),
        .spi0_io_mosi_in_val(spi0_io_mosi_in_val),
        .spi0_io_sclk_out(spi0_io_sclk_out),
        .spi0_io_sclk_outen(spi0_io_sclk_outen),
        .spi0_io_sclk_in_val(spi0_io_sclk_in_val),
        .spi0_io_ncs_out0(spi0_io_nss_out),
        .spi0_io_ncs_outen0(spi0_io_nss_outen),
        .spi0_io_ncs_in0_val(spi0_io_nss_in_val),
	.spi0_io_miso_out(spi0_io_miso_out),
	.spi0_io_miso_outen(spi0_io_miso_outen),
	.spi0_io_miso_in_val(spi0_io_miso_in_val),

       // UART port definitions
        .uart0_io_SIN(uart0_SIN),
        .uart0_io_SOUT(uart0_SOUT),
       // AXI4 Master interface to be connected to DDR3
		   .mem_master_AWVALID (s_axi_awvalid),
		   .mem_master_AWADDR  (temp_s_axi_awaddr),
		   .mem_master_AWSIZE  (s_axi_awsize),
		   .mem_master_AWPROT  (s_axi_awprot),
		   .mem_master_AWLEN   (s_axi_awlen),
		   .mem_master_AWBURST (s_axi_awburst),
		   .mem_master_AWID    (s_axi_awid),
		   .mem_master_AWREADY (s_axi_awready),
                
		   .mem_master_WVALID  (s_axi_wvalid),
		   .mem_master_WDATA   (s_axi_wdata),
		   .mem_master_WSTRB   (s_axi_wstrb),
		   .mem_master_WLAST   (s_axi_wlast),
		   .mem_master_WID     (),
		   .mem_master_WREADY  (s_axi_wready),
                
		   .mem_master_BVALID  (s_axi_bvalid),
		   .mem_master_BRESP   (s_axi_bresp),
		   .mem_master_BID     (s_axi_bid),
		   .mem_master_BREADY  (s_axi_bready),
                
		   .mem_master_ARVALID (s_axi_arvalid),
		   .mem_master_ARADDR  (temp_s_axi_araddr),
		   .mem_master_ARSIZE  (s_axi_arsize),
		   .mem_master_ARPROT  (s_axi_arprot),
		   .mem_master_ARLEN   (s_axi_arlen),
		   .mem_master_ARBURST (s_axi_arburst),
		   .mem_master_ARID    (s_axi_arid),
		   .mem_master_ARREADY (s_axi_arready),
                
		   .mem_master_RVALID (s_axi_rvalid),
		   .mem_master_RRESP  (s_axi_rresp),
		   .mem_master_RDATA  (s_axi_rdata),
		   .mem_master_RLAST  (s_axi_rlast),
		   .mem_master_RID    (s_axi_rid),
		   .mem_master_RREADY(s_axi_rready),
			  //I2C ports
        .i2c0_out_scl_out (i2c0_scl_out),
        .i2c0_out_scl_in_in(i2c0_scl_in),
        .i2c0_out_scl_out_en(i2c0_scl_out_en),
        .i2c0_out_sda_out(i2c0_sda_out),
        .i2c0_out_sda_in_in(i2c0_sda_in),
        .i2c0_out_sda_out_en(i2c0_sda_out_en),

			  ////I2C ports
        .i2c1_out_scl_out (i2c1_scl_out),
        .i2c1_out_scl_in_in(i2c1_scl_in),
        .i2c1_out_scl_out_en(i2c1_scl_out_en),
        .i2c1_out_sda_out(i2c1_sda_out),
        .i2c1_out_sda_in_in(i2c1_sda_in),
        .i2c1_out_sda_out_en(i2c1_sda_out_en),

        .gptimer0_io_input_signal_signal_in(gptimer0_in),
		    .gptimer0_io_timer_out(gptimer0_out),	

        .gptimer1_io_input_signal_signal_in(gptimer1_in),
		    .gptimer1_io_timer_out(gptimer1_out),	

        .gptimer2_io_input_signal_signal_in(gptimer2_in),
		    .gptimer2_io_timer_out(gptimer2_out),	

        .gptimer3_io_input_signal_signal_in(gptimer3_in),
		    .gptimer3_io_timer_out(gptimer3_out),	

        //pin muxed pins
    	  .iocell_io_io7_cell_in_in(io7_cell_in),
    	  .iocell_io_io8_cell_in_in(io8_cell_in),
    	  .iocell_io_io9_cell_in_in(io9_cell_in),
    	  .iocell_io_io10_cell_in_in(io10_cell_in),
    	  .iocell_io_io12_cell_in_in(io12_cell_in),
    	  .iocell_io_io13_cell_in_in(io13_cell_in),
    	  .iocell_io_io16_cell_in_in(io16_cell_in),
    	  .iocell_io_io17_cell_in_in(io17_cell_in),
    	  .iocell_io_io18_cell_in_in(io18_cell_in),
    	  .iocell_io_io19_cell_in_in(io19_cell_in),
    	  .iocell_io_io20_cell_in_in(io20_cell_in),
    	  .iocell_io_io7_cell_out(io7_cell_out),
    	  .iocell_io_io8_cell_out(io8_cell_out),
    	  .iocell_io_io9_cell_out(io9_cell_out),
    	  .iocell_io_io10_cell_out(io10_cell_out),
    	  .iocell_io_io12_cell_out(io12_cell_out),
    	  .iocell_io_io13_cell_out(io13_cell_out),
    	  .iocell_io_io16_cell_out(io16_cell_out),
    	  .iocell_io_io17_cell_out(io17_cell_out),
    	  .iocell_io_io18_cell_out(io18_cell_out),
    	  .iocell_io_io19_cell_out(io19_cell_out),
    	  .iocell_io_io20_cell_out(io20_cell_out),
    	  .iocell_io_io7_cell_outen(io7_cell_en),
    	  .iocell_io_io8_cell_outen(io8_cell_en),
    	  .iocell_io_io9_cell_outen(io9_cell_en),
    	  .iocell_io_io10_cell_outen(io10_cell_en),
    	  .iocell_io_io12_cell_outen(io12_cell_en),
    	  .iocell_io_io13_cell_outen(io13_cell_en),
    	  .iocell_io_io16_cell_outen(io16_cell_en),
    	  .iocell_io_io17_cell_outen(io17_cell_en),
    	  .iocell_io_io18_cell_outen(io18_cell_en),
    	  .iocell_io_io19_cell_outen(io19_cell_en),
    	  .iocell_io_io20_cell_outen(io20_cell_en),
        

        //GPIO
        .gpio_4_in(gpio_4_in),
        .gpio_7_in(gpio_7_in),
        .gpio_8_in(gpio_8_in),
        .gpio_14_in(gpio_14_in),
        .gpio_15_in(gpio_15_in),
        .gpio_16_in(gpio_16_in),
        .gpio_17_in(gpio_17_in),
        .gpio_18_in(gpio_18_in),
        .gpio_19_in(gpio_19_in),
        .gpio_20_in(gpio_20_in),
        .gpio_21_in(gpio_21_in),
        .gpio_22_in(gpio_22_in),
        .gpio_23_in(gpio_23_in),
        .gpio_24_in(gpio_24_in),
        .gpio_25_in(gpio_25_in),
        .gpio_26_in(gpio_26_in),
        .gpio_27_in(gpio_27_in),
        .gpio_28_in(gpio_28_in),
        .gpio_29_in(gpio_29_in),
        .gpio_30_in(gpio_30_in),
        .gpio_31_in(gpio_31_in),
        .gpio_4_out(gpio_4_out),
        .gpio_7_out(gpio_7_out),
        .gpio_8_out(gpio_8_out),
        .gpio_14_out(gpio_14_out),
        .gpio_15_out(gpio_15_out),
        .gpio_16_out(gpio_16_out),
        .gpio_17_out(gpio_17_out),
        .gpio_18_out(gpio_18_out),
        .gpio_19_out(gpio_19_out),
        .gpio_20_out(gpio_20_out),
        .gpio_21_out(gpio_21_out),
        .gpio_22_out(gpio_22_out),
        .gpio_23_out(gpio_23_out),
        .gpio_24_out(gpio_24_out),
        .gpio_25_out(gpio_25_out),
        .gpio_26_out(gpio_26_out),
        .gpio_27_out(gpio_27_out),
        .gpio_28_out(gpio_28_out),
        .gpio_29_out(gpio_29_out),
        .gpio_30_out(gpio_30_out),
        .gpio_31_out(gpio_31_out),
        .gpio_4_outen(gpio_4_en),
        .gpio_7_outen(gpio_7_en),
        .gpio_8_outen(gpio_8_en),
        .gpio_14_outen(gpio_14_en),
        .gpio_15_outen(gpio_15_en),
        .gpio_16_outen(gpio_16_en),
        .gpio_17_outen(gpio_17_en),
        .gpio_18_outen(gpio_18_en),
        .gpio_19_outen(gpio_19_en),
        .gpio_20_outen(gpio_20_en),
        .gpio_21_outen(gpio_21_en),
        .gpio_22_outen(gpio_22_en),
        .gpio_23_outen(gpio_23_en),
        .gpio_24_outen(gpio_24_en),
        .gpio_25_outen(gpio_25_en),
        .gpio_26_outen(gpio_26_en),
        .gpio_27_outen(gpio_27_en),
        .gpio_28_outen(gpio_28_en),
        .gpio_29_outen(gpio_29_en),
        .gpio_30_outen(gpio_30_en),
        .gpio_31_outen(gpio_31_en),

        .ext_interrupts_i(interrupts)
   );




  assign interrupts = 2'b0 ;

/*   // ---- Instantiating the C-class SoC -------------//
   genvar index;
   generate
   for(index=0; index<32; index= index+1)
      begin: connect_gpio_tristates
      IOBUF gpio_iobuf_inst (
             .O(gpio_in[index]),
             .IO(gpio[index]),
             .I(gpio_out[index]),
             .T(~gpio_out_en[index])
				 );
      end
   endgenerate*/
//---- IOBUF FOR I2C -----//
/*
   IOBUF i2c0_scl_inst(
             .O(i2c0_scl_in),
             .IO(i2c0_scl),
             .I(i2c0_scl_out),
             .T(~i2c0_scl_out_en)
         );

   IOBUF i2c0_sda_inst(
             .O(i2c0_sda_in),
             .IO(i2c0_sda),
             .I(i2c0_sda_out),
             .T(~i2c0_sda_out_en)
         );

   ////---- IOBUF FOR I2C -----//
   IOBUF i2c1_scl_inst(
             .O(i2c1_scl_in),
             .IO(i2c1_scl),
             .I(i2c1_scl_out),
             .T(~i2c1_scl_out_en)
         );

   IOBUF i2c1_sda_inst(
             .O(i2c1_sda_in),
             .IO(i2c1_sda),
             .I(i2c1_sda_out),
             .T(~i2c1_sda_out_en)
         );
  //----IOBUF FOR MUXED PIN----//

   IOBUF io7_cell_inst(
             .O(io7_cell_in),
             .IO(io7_cell),
             .I(io7_cell_out),
             .T(io7_cell_en)
         );

   IOBUF io8_cell_inst(
             .O(io8_cell_in),
             .IO(io8_cell),
             .I(io8_cell_out),
             .T(io8_cell_en)
         );

   IOBUF io9_cell_inst(
             .O(io9_cell_in),
             .IO(io9_cell),
             .I(io9_cell_out),
             .T(io9_cell_en)
         );

   IOBUF io10_cell_inst(
             .O(io10_cell_in),
             .IO(io10_cell),
             .I(io10_cell_out),
             .T(io10_cell_en)
         );

   IOBUF io12_cell_inst(
             .O(io12_cell_in),
             .IO(io12_cell),
             .I(io12_cell_out),
             .T(io12_cell_en)
         );

   IOBUF io13_cell_inst(
             .O(io13_cell_in),
             .IO(io13_cell),
             .I(io13_cell_out),
             .T(io13_cell_en)
         );

   IOBUF io16_cell_inst(
             .O(io16_cell_in),
             .IO(io16_cell),
             .I(io16_cell_out),
             .T(io16_cell_en)
         );

   IOBUF io17_cell_inst(
             .O(io17_cell_in),
             .IO(io17_cell),
             .I(io17_cell_out),
             .T(io17_cell_en)
         );

   IOBUF io18_cell_inst(
             .O(io18_cell_in),
             .IO(io18_cell),
             .I(io18_cell_out),
             .T(io18_cell_en)
         );

   IOBUF io19_cell_inst(
             .O(io19_cell_in),
             .IO(io19_cell),
             .I(io19_cell_out),
             .T(io19_cell_en)
         );

   IOBUF io20_cell_inst(
             .O(io20_cell_in),
             .IO(io20_cell),
             .I(io20_cell_out),
             .T(io20_cell_en)
         );
   //-----IOBUF FOR GPIO-----//

   IOBUF gpio_4_inst(
             .O(gpio_4_in),
             .IO(gpio_4),
             .I(gpio_4_out),
             .T(~gpio_4_en)
         );

   IOBUF gpio_7_inst(
             .O(gpio_7_in),
             .IO(gpio_7),
             .I(gpio_7_out),
             .T(~gpio_7_en)
         );

   IOBUF gpio_8_inst(
             .O(gpio_8_in),
             .IO(gpio_8),
             .I(gpio_8_out),
             .T(~gpio_8_en)
         );

   IOBUF gpio_14_inst(
             .O(gpio_14_in),
             .IO(gpio_14),
             .I(gpio_14_out),
             .T(~gpio_14_en)
         );

   IOBUF gpio_15_inst(.O(gpio_15_in),.IO(gpio_15),.I(gpio_15_out),.T(~gpio_15_en));
   IOBUF gpio_16_inst(.O(gpio_16_in),.IO(gpio_16),.I(gpio_16_out),.T(~gpio_16_en));
   IOBUF gpio_17_inst(.O(gpio_17_in),.IO(gpio_17),.I(gpio_17_out),.T(~gpio_17_en));
   IOBUF gpio_18_inst(.O(gpio_18_in),.IO(gpio_18),.I(gpio_18_out),.T(~gpio_18_en));
   IOBUF gpio_19_inst(.O(gpio_19_in),.IO(gpio_19),.I(gpio_19_out),.T(~gpio_19_en));
   IOBUF gpio_20_inst(.O(gpio_20_in),.IO(gpio_20),.I(gpio_20_out),.T(~gpio_20_en));
   IOBUF gpio_21_inst(.O(gpio_21_in),.IO(gpio_21),.I(gpio_21_out),.T(~gpio_21_en));
   IOBUF gpio_22_inst(.O(gpio_22_in),.IO(gpio_22),.I(gpio_22_out),.T(~gpio_22_en));
   IOBUF gpio_23_inst(.O(gpio_23_in),.IO(gpio_23),.I(gpio_23_out),.T(~gpio_23_en));
   IOBUF gpio_24_inst(.O(gpio_24_in),.IO(gpio_24),.I(gpio_24_out),.T(~gpio_24_en));
   IOBUF gpio_25_inst(.O(gpio_25_in),.IO(gpio_25),.I(gpio_25_out),.T(~gpio_25_en));
   IOBUF gpio_26_inst(.O(gpio_26_in),.IO(gpio_26),.I(gpio_26_out),.T(~gpio_26_en));
   IOBUF gpio_27_inst(.O(gpio_27_in),.IO(gpio_27),.I(gpio_27_out),.T(~gpio_27_en));
   IOBUF gpio_28_inst(.O(gpio_28_in),.IO(gpio_28),.I(gpio_28_out),.T(~gpio_28_en));
   IOBUF gpio_29_inst(.O(gpio_29_in),.IO(gpio_29),.I(gpio_29_out),.T(~gpio_29_en));
   IOBUF gpio_30_inst(.O(gpio_30_in),.IO(gpio_30),.I(gpio_30_out),.T(~gpio_30_en));
   IOBUF gpio_31_inst(.O(gpio_31_in),.IO(gpio_31),.I(gpio_31_out),.T(~gpio_31_en));
   IOBUF spi0_inst_mosi(.O(spi0_io_mosi_in_val),.IO(spi0_mosi),.I(spi0_io_mosi_out),.T(~spi0_io_mosi_outen));
   IOBUF spi0_inst_miso(.O(spi0_io_miso_in_val),.IO(spi0_miso),.I(spi0_io_miso_out),.T(~spi0_io_miso_outen));
   IOBUF spi0_inst_nss(.O(spi0_io_nss_in_val) ,.IO(spi0_nss) ,.I(spi0_io_nss_out) ,.T(~spi0_io_nss_outen));
   IOBUF spi0_inst_sclk(.O(spi0_io_sclk_in_val) ,.IO(spi0_sclk) ,.I(spi0_io_sclk_out) ,.T(~spi0_io_sclk_outen));

*/

endmodule
