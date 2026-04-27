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
module fpga_top#( parameter AXI_ID_WIDTH = 4, parameter AXI_ADDR_WIDTH = 30)
  (
  // ---- DDR ports --------------//
  inout  [15:0] ddr3_dq,
  inout  [1:0]  ddr3_dqs_n,
  inout  [1:0]  ddr3_dqs_p,    
  output [14:0] ddr3_addr,
  output [2:0]  ddr3_ba,
  output        ddr3_ras_n,
  output        ddr3_cas_n,
  output        ddr3_we_n,
  output        ddr3_reset_n,
  output        ddr3_ck_p,
  output        ddr3_ck_n,
  output        ddr3_cke,
//  output        ddr3_cs_n,
  output [1:0]  ddr3_dm,
  output        ddr3_odt,
  
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
   // ---- UART ports --------//
    input         uart0_SIN,
    output        uart0_SOUT,

//   // ---- I2C ports --------//
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

    input gptimer2_in,
    output gptimer2_out,

    input gptimer3_in,
    output gptimer3_out,
	



    // ---- System Reset ------//
    input         sys_rst,	//Active Low

    // ---- System Clock ------//
    input         sys_clk
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
  // Signals driven by axi converter to DDR slave ports
  wire [AXI_ID_WIDTH-1:0]           m_axi_awid;
  wire [AXI_ADDR_WIDTH-1:0]         m_axi_awaddr;
  wire [7:0]                        m_axi_awlen;
  wire [2:0]                        m_axi_awsize;
  wire [1:0]                        m_axi_awburst;
  wire [0:0]                        m_axi_awlock;
  wire [3:0]                        m_axi_awcache;
  wire [2:0]                        m_axi_awprot;
  wire                              m_axi_awvalid;
  wire                              m_axi_awready; 
`ifdef BUS_WIDTH128   
  wire [127:0]                       m_axi_wdata;
  wire [15:0]                        m_axi_wstrb;
`elsif BUS_WIDTH64
  wire [63:0]                       m_axi_wdata;
  wire [7:0]                        m_axi_wstrb;
`elsif BUS_WIDTH32
  wire [31:0]                       m_axi_wdata;
  wire [3:0]                        m_axi_wstrb;
`else
  wire [127:0]                       m_axi_wdata;
  wire [15:0]                        m_axi_wstrb;
`endif
  wire                              m_axi_wlast;
  wire                              m_axi_wvalid;
  wire                              m_axi_wready;   
  wire                              m_axi_bready;
  wire [AXI_ID_WIDTH-1:0]           m_axi_bid;
  wire [1:0]                        m_axi_bresp;
  wire                              m_axi_bvalid;   
  wire [AXI_ID_WIDTH-1:0]           m_axi_arid;
  wire [AXI_ADDR_WIDTH-1:0]         m_axi_araddr;
  wire [7:0]                        m_axi_arlen;
  wire [2:0]                        m_axi_arsize;
  wire [1:0]                        m_axi_arburst;
  wire [0:0]                        m_axi_arlock;
  wire [3:0]                        m_axi_arcache;
  wire [2:0]                        m_axi_arprot;
  wire                              m_axi_arvalid;
  wire                              m_axi_arready;    
  wire                              m_axi_rready;
  wire [AXI_ID_WIDTH-1:0]           m_axi_rid;
`ifdef BUS_WIDTH128   
  wire [127:0]                      m_axi_rdata;
`elsif BUS_WIDTH64
  wire [63:0]                       m_axi_rdata;
`elsif BUS_WIDTH32
  wire [31:0]                       m_axi_rdata;
`else
  wire [127:0]                      m_axi_rdata;
`endif
  wire [1:0]                        m_axi_rresp;
  wire                              m_axi_rlast;
  wire                              m_axi_rvalid;   
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
// CPU → CNN (control path)
wire [31:0] cnn_ctrl_awaddr;
wire        cnn_ctrl_awvalid;
wire        cnn_ctrl_awready;

wire [31:0] cnn_ctrl_wdata;
wire        cnn_ctrl_wvalid;
wire        cnn_ctrl_wready;
wire [3:0]  cnn_ctrl_wstrb;

wire [1:0]  cnn_ctrl_bresp;
wire        cnn_ctrl_bvalid;
wire        cnn_ctrl_bready;

wire [31:0] cnn_ctrl_araddr;
wire        cnn_ctrl_arvalid;
wire        cnn_ctrl_arready;

wire [31:0] cnn_ctrl_rdata;
wire        cnn_ctrl_rvalid;
wire        cnn_ctrl_rready;


wire cnn_master_awvalid;
wire cnn_master_awready;
wire [AXI_ADDR_WIDTH-1:0] cnn_master_awaddr;
wire [AXI_ID_WIDTH-1:0] cnn_master_awid;
wire [7:0] cnn_master_awlen;
wire [2:0] cnn_master_awsize;
wire [1:0] cnn_master_awburst;
wire [0:0] cnn_master_awlock;
wire [3:0] cnn_master_awcache;
wire [2:0] cnn_master_awprot;
wire [3:0] cnn_master_awqos;
wire [3:0] cnn_master_awregion;
wire cnn_master_awuser;
wire cnn_master_wvalid;
wire cnn_master_wready;
`ifdef BUS_WIDTH128
wire [127:0] cnn_master_wdata;
wire [15:0] cnn_master_wstrb;
`elsif BUS_WIDTH64
wire [63:0] cnn_master_wdata;
wire [7:0] cnn_master_wstrb;
`elsif BUS_WIDTH32
wire [31:0] cnn_master_wdata;
wire [3:0] cnn_master_wstrb;
`else
wire [127:0] cnn_master_wdata;
wire [15:0] cnn_master_wstrb;
`endif
wire cnn_master_wlast;
wire [AXI_ID_WIDTH-1:0] cnn_master_wid;
wire cnn_master_wuser;
wire cnn_master_arvalid;
wire cnn_master_arready;
wire [AXI_ADDR_WIDTH-1:0] cnn_master_araddr;
wire [AXI_ID_WIDTH-1:0] cnn_master_arid;
wire [7:0] cnn_master_arlen;
wire [2:0] cnn_master_arsize;
wire [1:0] cnn_master_arburst;
wire [0:0] cnn_master_arlock;
wire [3:0] cnn_master_arcache;
wire [2:0] cnn_master_arprot;
wire [3:0] cnn_master_arqos;
wire [3:0] cnn_master_arregion;
wire cnn_master_aruser;
wire cnn_master_rvalid;
wire cnn_master_rready;
`ifdef BUS_WIDTH128
wire [127:0] cnn_master_rdata;
`elsif BUS_WIDTH64
wire [63:0] cnn_master_rdata;
`elsif BUS_WIDTH32
wire [31:0] cnn_master_rdata;
`else
wire [127:0] cnn_master_rdata;
`endif
wire cnn_master_rlast;
wire [AXI_ID_WIDTH-1:0] cnn_master_rid;
wire cnn_master_ruser;
wire [1:0] cnn_master_rresp;
wire cnn_master_bvalid;
wire cnn_master_bready;
wire [1:0] cnn_master_bresp;
wire [AXI_ID_WIDTH-1:0] cnn_master_bid;




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


  wire [31:0] temp_s_axi_awaddr, temp_s_axi_araddr;
  assign s_axi_awaddr= temp_s_axi_awaddr [AXI_ADDR_WIDTH-1:0];
  assign s_axi_araddr= temp_s_axi_araddr [AXI_ADDR_WIDTH-1:0];

  proc_sys_reset_0 proc_reset_inst (
      .slowest_sync_clk (core_clk),
      .ext_reset_in     (sys_rst),
      .aux_reset_in     (init_calib_complete),
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
                       .clk_in1(sys_clk),
                       .clk_out1(core_clk),
                    .clk_out2(ddr3_main),
                    .clk_out3(ddr3_ref),
    .resetn   (sys_rst), 
    .locked   (locked)
  );
   // ----------------------------------------- //
  // ------------ MIG for DDR3 ---------------//
  mig_ddr3 mig_ddr3 (
 // Memory interface ports
      .ddr3_addr                      (ddr3_addr),
      .ddr3_ba                        (ddr3_ba),
      .ddr3_cas_n                     (ddr3_cas_n),
      .ddr3_ck_n                      (ddr3_ck_n),
      .ddr3_ck_p                      (ddr3_ck_p),
      .ddr3_cke                       (ddr3_cke),
      .ddr3_ras_n                     (ddr3_ras_n),
      .ddr3_we_n                      (ddr3_we_n),
      .ddr3_dq                        (ddr3_dq),
      .ddr3_dqs_n                     (ddr3_dqs_n),
      .ddr3_dqs_p                     (ddr3_dqs_p),
      .ddr3_reset_n                   (ddr3_reset_n),
      .init_calib_complete            (init_calib_complete),

//      .ddr3_cs_n                      (ddr3_cs_n),
      .ddr3_dm                        (ddr3_dm),
      .ddr3_odt                       (ddr3_odt),
      .ui_clk                         (clk),
      .ui_clk_sync_rst                (rst),
      .mmcm_locked                    (mmcm_locked),
      .aresetn                        (aresetn),
      .app_sr_req                     ( 1'b0),
      .app_ref_req                    ( 1'b0),
      .app_zq_req                     ( 1'b0),
      .app_sr_active                  (),
      .app_ref_ack                    (),
      .app_zq_ack                     (),
      // Slave Interface Write Address Ports
      .s_axi_awid                     (m_axi_awid),
      .s_axi_awaddr                   (m_axi_awaddr),
      .s_axi_awlen                    (m_axi_awlen),
      .s_axi_awsize                   (m_axi_awsize),
      .s_axi_awburst                  (m_axi_awburst),
      .s_axi_awlock                   (m_axi_awlock),
      .s_axi_awcache                  (m_axi_awcache),
      .s_axi_awprot                   (m_axi_awprot),
      .s_axi_awqos                    (4'h0),
      .s_axi_awvalid                  (m_axi_awvalid),
      .s_axi_awready                  (m_axi_awready),
      // Slave Interface Write Data Ports
      .s_axi_wdata                    (m_axi_wdata),
      .s_axi_wstrb                    (m_axi_wstrb),
      .s_axi_wlast                    (m_axi_wlast),
      .s_axi_wvalid                   (m_axi_wvalid),
      .s_axi_wready                   (m_axi_wready),
      // Slave Interface Write Response Ports
      .s_axi_bid                      (m_axi_bid),
      .s_axi_bresp                    (m_axi_bresp),
      .s_axi_bvalid                   (m_axi_bvalid),
      .s_axi_bready                   (m_axi_bready),
      // Slave Interface Read Address Ports
      .s_axi_arid                     (m_axi_arid),
      .s_axi_araddr                   (m_axi_araddr),
      .s_axi_arlen                    (m_axi_arlen),
      .s_axi_arsize                   (m_axi_arsize),
      .s_axi_arburst                  (m_axi_arburst),
      .s_axi_arlock                   (m_axi_arlock),
      .s_axi_arcache                  (m_axi_arcache),
      .s_axi_arprot                   (m_axi_arprot),
      .s_axi_arqos                    (4'h0),
      .s_axi_arvalid                  (m_axi_arvalid),
      .s_axi_arready                  (m_axi_arready),
      // Slave Interface Read Data Ports
      .s_axi_rid                      (m_axi_rid),
      .s_axi_rdata                    (m_axi_rdata),
      .s_axi_rresp                    (m_axi_rresp),
      .s_axi_rlast                    (m_axi_rlast),
      .s_axi_rvalid                   (m_axi_rvalid),
      .s_axi_rready                   (m_axi_rready),
      .sys_clk_i                      (ddr3_main),
      .clk_ref_i                      (ddr3_ref),
      //.device_temp_i                  (device_temp),
      .sys_rst                        (sys_rst)
   );

   always @(posedge clk) begin
     aresetn <= ~rst;
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
       .m_axi_aclk(clk),
       .m_axi_aresetn(aresetn),
       .m_axi_awid(m_axi_awid),
       .m_axi_awaddr(m_axi_awaddr),
       .m_axi_awlen(m_axi_awlen),
       .m_axi_awsize(m_axi_awsize),
       .m_axi_awburst(m_axi_awburst),
       .m_axi_awlock(m_axi_awlock),
       .m_axi_awcache(m_axi_awcache),
       .m_axi_awprot(m_axi_awprot),
       .m_axi_awregion(),
       .m_axi_awqos(),
       .m_axi_awvalid(m_axi_awvalid),
       .m_axi_awready(m_axi_awready),
       .m_axi_wdata(m_axi_wdata),
       .m_axi_wstrb(m_axi_wstrb),
       .m_axi_wlast(m_axi_wlast),
       .m_axi_wvalid(m_axi_wvalid),
       .m_axi_wready(m_axi_wready),
       .m_axi_bid(m_axi_bid),
       .m_axi_bresp(m_axi_bresp),
       .m_axi_bvalid(m_axi_bvalid),
       .m_axi_bready(m_axi_bready),
       .m_axi_arid(m_axi_arid),
       .m_axi_araddr(m_axi_araddr),
       .m_axi_arlen(m_axi_arlen),
       .m_axi_arsize(m_axi_arsize),
       .m_axi_arburst(m_axi_arburst),
       .m_axi_arlock(m_axi_arlock),
       .m_axi_arcache(m_axi_arcache),
       .m_axi_arprot(m_axi_arprot),
       .m_axi_arregion(),
       .m_axi_arqos(),
       .m_axi_arvalid(m_axi_arvalid),
       .m_axi_arready(m_axi_arready),
       .m_axi_rid(m_axi_rid),
       .m_axi_rdata(m_axi_rdata),
       .m_axi_rresp(m_axi_rresp),
       .m_axi_rlast(m_axi_rlast),
       .m_axi_rvalid(m_axi_rvalid), 
       .m_axi_rready(m_axi_rready)
   );

  cnn_accel cnn_inst (

    // ✅ FAST CLOCK (same as DDR)
    .ap_clk(core_clk),
    .ap_rst_n(aresetn),

    .m_axi_gmem_AWVALID(cnn_master_awvalid),
    .m_axi_gmem_AWREADY(cnn_master_awready),
    .m_axi_gmem_AWADDR(cnn_master_awaddr),
    .m_axi_gmem_AWID(cnn_master_awid),
    .m_axi_gmem_AWLEN(cnn_master_awlen),
    .m_axi_gmem_AWSIZE(cnn_master_awsize),
    .m_axi_gmem_AWBURST(cnn_master_awburst),
    .m_axi_gmem_AWLOCK(cnn_master_awlock),
    .m_axi_gmem_AWCACHE(cnn_master_awcache),
    .m_axi_gmem_AWPROT(cnn_master_awprot),
    .m_axi_gmem_AWQOS(cnn_master_awqos),
    .m_axi_gmem_AWREGION(cnn_master_awregion),
    .m_axi_gmem_AWUSER(cnn_master_awuser),
    .m_axi_gmem_WVALID(cnn_master_wvalid),
    .m_axi_gmem_WREADY(cnn_master_wready),
    .m_axi_gmem_WDATA(cnn_master_wdata),
    .m_axi_gmem_WSTRB(cnn_master_wstrb),
    .m_axi_gmem_WLAST(cnn_master_wlast),
    .m_axi_gmem_WID(cnn_master_wid),
    .m_axi_gmem_WUSER(cnn_master_wuser),
    .m_axi_gmem_ARVALID(cnn_master_arvalid),
    .m_axi_gmem_ARREADY(cnn_master_arready),
    .m_axi_gmem_ARADDR(cnn_master_araddr),
    .m_axi_gmem_ARID(cnn_master_arid),
    .m_axi_gmem_ARLEN(cnn_master_arlen),
    .m_axi_gmem_ARSIZE(cnn_master_arsize),
    .m_axi_gmem_ARBURST(cnn_master_arburst),
    .m_axi_gmem_ARLOCK(cnn_master_arlock),
    .m_axi_gmem_ARCACHE(cnn_master_arcache),
    .m_axi_gmem_ARPROT(cnn_master_arprot),
    .m_axi_gmem_ARQOS(cnn_master_arqos),
    .m_axi_gmem_ARREGION(cnn_master_arregion),
    .m_axi_gmem_ARUSER(cnn_master_aruser),
    .m_axi_gmem_RVALID(cnn_master_rvalid),
    .m_axi_gmem_RREADY(cnn_master_rready),
    .m_axi_gmem_RDATA(cnn_master_rdata),
    .m_axi_gmem_RLAST(cnn_master_rlast),
    .m_axi_gmem_RID(cnn_master_rid),
    .m_axi_gmem_RUSER(cnn_master_ruser),
    .m_axi_gmem_RRESP(cnn_master_rresp),
    .m_axi_gmem_BVALID(cnn_master_bvalid),
    .m_axi_gmem_BREADY(cnn_master_bready),
    .m_axi_gmem_BRESP(cnn_master_bresp),
    .m_axi_gmem_BID(cnn_master_bid),
    .s_axi_control_AWVALID(cnn_ctrl_awvalid),
    .s_axi_control_AWREADY(cnn_ctrl_awready),
    .s_axi_control_AWADDR(cnn_ctrl_awaddr),
    .s_axi_control_WVALID(cnn_ctrl_wvalid),
    .s_axi_control_WREADY(cnn_ctrl_wready),
    .s_axi_control_WDATA(cnn_ctrl_wdata),
    .s_axi_control_WSTRB(cnn_ctrl_wstrb),
    .s_axi_control_ARVALID(cnn_ctrl_arvalid),
    .s_axi_control_ARREADY(cnn_ctrl_arready),
    .s_axi_control_ARADDR(cnn_ctrl_araddr),
    .s_axi_control_RVALID(cnn_ctrl_rvalid),
    .s_axi_control_RREADY(cnn_ctrl_rready),
    .s_axi_control_RDATA(cnn_ctrl_rdata),
    .s_axi_control_RRESP(cnn_ctrl_rresp),
    .s_axi_control_BVALID(cnn_ctrl_bvalid),
    .s_axi_control_BREADY(cnn_ctrl_bready),
    .s_axi_control_BRESP(cnn_ctrl_bresp)

);




   // ---- Instantiating the C-class SoC -------------//
   mkDebugSoc core(
       // Main Clock and Reset to the SoC
        .CLK(core_clk),
        .RST_N(~soc_reset),
        .CLK_tck_clk(wire_tck_clk),
        .RST_N_trst(~wire_trst),
        .CLK_ext_clk(external_clk),
        .wire_capture_capture_in(wire_capture),
        .wire_run_test_run_test_in(wire_run_test),
        .wire_sel_sel_in(wire_sel),
        .wire_shift_shift_in(wire_shift),
        .wire_tdi_tdi_in(wire_tdi),
        .wire_tms_tms_in(wire_tms),
        .wire_update_update_in(wire_update),
        .wire_tdo(wire_tdo),

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

        //AXI4 LITE Master Interface 
        .cnn_accel_top_awaddr(cnn_ctrl_awaddr),
        .cnn_accel_top_awvalid(cnn_ctrl_awvalid),
        .cnn_accel_top_m_awready_awready(cnn_ctrl_awready),

        .cnn_accel_top_wdata(cnn_ctrl_wdata),
        .cnn_accel_top_wvalid(cnn_ctrl_wvalid),
        .cnn_accel_top_m_wready_wready(cnn_ctrl_wready),
        .cnn_accel_top_wstrb(cnn_ctrl_wstrb),
        

        .cnn_accel_top_m_bvalid_bresp(cnn_ctrl_bresp),
        .cnn_accel_top_m_bvalid_bvalid(cnn_ctrl_bvalid),
        .cnn_accel_top_bready(cnn_ctrl_bready),
        

        .cnn_accel_top_araddr(cnn_ctrl_araddr),
        .cnn_accel_top_arvalid(cnn_ctrl_arvalid),
        .cnn_accel_top_m_arready_arready(cnn_ctrl_arready),
        .cnn_accel_top_m_rvalid_rresp(cnn_ctrl_rresp),

        .cnn_accel_top_m_rvalid_rdata(cnn_ctrl_rdata),
        .cnn_accel_top_m_rvalid_rvalid(cnn_ctrl_rvalid),
        .cnn_accel_top_rready(cnn_ctrl_rready),

        .acc_master_AWVALID(cnn_master_awvalid),
        .acc_master_AWREADY(cnn_master_awready),
        .acc_master_AWADDR(cnn_master_awaddr),
        .acc_master_AWID(cnn_master_awid),
        .acc_master_AWLEN(cnn_master_awlen),
        .acc_master_AWSIZE(cnn_master_awsize),
        .acc_master_AWBURST(cnn_master_awburst),
        // .acc_master_AWLOCK(1'b0),
        // .acc_master_AWCACHE(4'b10),
        .acc_master_AWPROT(cnn_master_awprot),
        // .acc_master_AWQOS(),
        // .acc_master_AWREGION(),
        // .acc_master_AWUSER(),
        .acc_master_WVALID(cnn_master_wvalid),
        .acc_master_WREADY(cnn_master_wready),
        .acc_master_WDATA(cnn_master_wdata),
        .acc_master_WSTRB(cnn_master_wstrb),
        .acc_master_WLAST(cnn_master_wlast),
        .acc_master_WID(cnn_master_wid),
        // .acc_master_WUSER(),
        .acc_master_ARVALID(cnn_master_arvalid),
        .acc_master_ARREADY(cnn_master_arready),
        .acc_master_ARADDR(cnn_master_araddr),
        .acc_master_ARID(cnn_master_arid),
        .acc_master_ARLEN(cnn_master_arlen),
        .acc_master_ARSIZE(cnn_master_arsize),
        .acc_master_ARBURST(cnn_master_arburst),
        // .acc_master_ARLOCK(1'b0),
        // .acc_master_ARCACHE(4'b10),
        .acc_master_ARPROT(cnn_master_arprot),
        // .acc_master_ARQOS(),
        // .acc_master_ARREGION(),
        // .acc_master_ARUSER(),
        .acc_master_RVALID(cnn_master_rvalid),
        .acc_master_RREADY(cnn_master_rready),
        .acc_master_RDATA(cnn_master_rdata),
        .acc_master_RLAST(cnn_master_rlast),
        .acc_master_RID(cnn_master_rid),
        // .acc_master_RUSER(),
        .acc_master_RRESP(cnn_master_rresp),
        .acc_master_BVALID(cnn_master_bvalid),
        .acc_master_BREADY(cnn_master_bready),
        .acc_master_BRESP(cnn_master_bresp),
        .acc_master_BID(cnn_master_bid),

                 
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



endmodule
