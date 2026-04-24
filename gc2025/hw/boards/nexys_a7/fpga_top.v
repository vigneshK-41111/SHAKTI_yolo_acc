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
module fpga_top#( parameter AXI_ID_WIDTH = 4, parameter AXI_ADDR_WIDTH = 28)
  (
  
 

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




  proc_sys_reset_0 proc_reset_inst (
      .slowest_sync_clk (core_clk),
      .ext_reset_in     (sys_rst),
      .aux_reset_in     (1'b1),
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
    .resetn   (1'b1), 
    .locked   (locked)
  );
   
   always @(posedge clk) begin
     aresetn <= ~rst;
   end
   

   


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
        .spi0_io_ncs_out(spi0_io_nss_out),
        .spi0_io_ncs_outen(spi0_io_nss_outen),
        .spi0_io_ncs_in_val(spi0_io_nss_in_val),
	.spi0_io_miso_out(spi0_io_miso_out),
	.spi0_io_miso_outen(spi0_io_miso_outen),
	.spi0_io_miso_in_val(spi0_io_miso_in_val),

       // UART port definitions
        .uart0_io_SIN(uart0_SIN),
        .uart0_io_SOUT(uart0_SOUT),
       
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


  assign interrupts = 2'b0;

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

// Enable if onboard flash or disable if external flash
	 STARTUPE2#(.PROG_USR("False"),
               .SIM_CCLK_FREQ(0.0))   startupe2_inst1(
               .CFGCLK(open),
               .CFGMCLK(open),
               .EOS(open),
               .PREQ(open),
               .CLK(0),
               .GSR(0),
               .GTS(0),
               .KEYCLEARB(0),
               .PACK(0),
               .USRCCLKO(spi0_io_sclk_out),
               .USRCCLKTS(0),
               .USRDONEO(1),
               .USRDONETS(1));

endmodule
