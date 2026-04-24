
// Copyright (c) 2000-2012 Bluespec, Inc.

// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
// $Revision$
// $Date$

`ifdef BSV_NO_MAIN_V
`else

`ifdef BSV_ASSIGNMENT_DELAY
`else
  `define BSV_ASSIGNMENT_DELAY
`endif

`ifdef BSV_POSITIVE_RESET
  `define BSV_RESET_VALUE 1'b1
  `define BSV_RESET_EDGE posedge
`else
  `define BSV_RESET_VALUE 1'b0
  `define BSV_RESET_EDGE negedge
`endif

`ifdef BSV_RESET_NAME
`else
 `define BSV_RESET_NAME RST_N
`endif

`ifdef BSV_TIMESCALE
 `timescale `BSV_TIMESCALE
`endif

module vcs_sim();

   reg CLK;
   reg CLK_1G;
   reg RST;
 
   mkTbSoc gcsoc(.CLK(CLK),
               .RST_N(RST)
               );

   initial 
   begin  
    if ($test$plusargs("vcd")) 
    begin
      $display("VCD dumping enabled");
      $dumpfile("dump.vcd");
      $dumpvars();
      // $fsdbDumpvars();
      // $dumpports(vcs_sim.gcsoc.soc,"dumpports.evcd");
    end
    #0
    RST = `BSV_RESET_VALUE;
    #4482;
    RST = !`BSV_RESET_VALUE;
    $display("reset done");  
   end 

    initial
      begin : clk_160mhz_clock_loop
         #0 ;
         CLK = 1'b0  ;
         #80 ;
         forever
            begin
               CLK =  1'b1 ;
               #3.125;
               CLK = 1'b0 ;
               #3.125  ;

            end // forever begin
    end // initial begin

    initial
      begin : clk_1ghz_clock_loop
        #0;
        CLK_1G = 1'b0;
        #60;
        forever 
          begin
            CLK_1G = 1'b1;
            #0.5;
            CLK_1G = 1'b0;
            #0.5;
          end
    end


endmodule

`endif

