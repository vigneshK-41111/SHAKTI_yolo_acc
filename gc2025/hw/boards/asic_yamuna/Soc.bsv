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

Author: Neel Gala
Email id: neelgala@gmail.com
Details:

--------------------------------------------------------------------------------------------------
*/
package Soc;
  // project related imports
  import Semi_FIFOF:: *;
  import AXI4_Types:: *;
  import AXI4_Fabric:: *;
  import AXI4_Lite_Types:: *;
  import AXI4_Lite_Fabric:: *;
  import axi2axil :: * ;
  import ccore:: * ;
  import Clocks :: *;
  import ccore_types::*;
  import GetPut :: * ;
  import Connectable :: * ;
  `include "Soc.defines"

  // peripheral imports
  import clint::*;
  import err_slave::*;
  import pwm_cluster :: * ;
  import uart_cluster :: * ;
  import spi_cluster :: * ;
  import mixed_cluster :: * ;
  import uart :: *;
  import sspi :: *;
  import pwm :: *;
  import i2c :: *;
  import TCM::*;
  import gpio :: *;
  import csrbox :: * ;
  import bram :: *;
  import BUtils::*;
`ifdef debug
  import debug_types::*;     
`endif                

  import Vector :: *;

  `ifdef simulate
    import sign_dump :: *;
  `endif

  function Bit#(TLog#(`Num_Fast_Slaves)) fn_slave_map_fast (Bit#(`paddr) addr);
    Bit#(TLog#(`Num_Fast_Slaves)) slave_num = 0;
    if(addr >= `TCMBase && addr<= `TCMEnd)
      slave_num = `TCM_slave_num;
    else if(addr >= `ClintBase && addr <= `ClintEnd)
      slave_num = `Clint_slave_num;
  `ifdef debug
    else if(addr >= `DebugBase && addr <= `DebugEnd)
      slave_num = `Debug_slave_num;
  `endif
    else if(addr >= `SlowBase && addr <= `SlowEnd)
      slave_num = `Slow_fabric_slave_num;
    else if(addr >= `PLICBase && addr <= `PLICEnd)
      slave_num = `Slow_fabric_slave_num;
  `ifdef simulate
    else if(addr >= `SignBase && addr <= `SignEnd)
      slave_num = `Sign_slave_num;
  `endif
    else
      slave_num = `FastErr_slave_num;
      
    return slave_num;
  endfunction:fn_slave_map_fast
  
  function Bit#(TLog#(`Num_Slaves)) fn_slave_map (Bit#(`paddr) addr);
    Bit#(TLog#(`Num_Slaves)) slave_num = 0;
    if(addr >= `PWMClusterBase && addr <= `PWMClusterEnd)
      slave_num = `PWMCluster_slave_num;
    else if(addr >= `UARTClusterBase && addr <= `UARTClusterEnd)
      slave_num = `UARTCluster_slave_num;
    else if(addr >= `SPIClusterBase && addr <= `SPIClusterEnd)
      slave_num = `SPICluster_slave_num;
    else if(addr >= `MixedClusterBase && addr <= `MixedClusterEnd)
      slave_num = `MixedCluster_slave_num;
    else if(addr >= `PLICBase && addr <= `PLICEnd)
      slave_num = `MixedCluster_slave_num;
    else
      slave_num = `Err_slave_num;
      
    return slave_num;
  endfunction:fn_slave_map

  interface Ifc_chip_io;
    interface Ifc_sspi_io spi0_io;
    interface Ifc_sspi_io spi1_io;
    interface RS232 uart0_io;
    interface RS232 uart1_io;
    interface RS232 uart2_io;

    method Bit#(1) pwm0_io;
    method Bit#(1) pwm1_io;
    method Bit#(1) pwm2_io;
    method Bit#(1) pwm3_io;
    method Bit#(1) pwm4_io;
    method Bit#(1) pwm5_io;

		method I2C_out i2c0_out;									//I2c IO interface
		method I2C_out i2c1_out;									//I2c IO interface

  (*always_enabled,always_ready*)
  method Action gpio_0(Bit#(1) in);

  (*always_enabled,always_ready*)
  method Action gpio_1(Bit#(1) in);
  
  (*always_enabled,always_ready*)
  method Action gpio_2(Bit#(1) in);
  
  (*always_enabled,always_ready*)
  method Action gpio_3(Bit#(1) in);
  
  (*always_enabled,always_ready*)
  method Action gpio_4(Bit#(1) in);
  
  (*always_enabled,always_ready*)
  method Action gpio_5(Bit#(1) in);
  
  (*always_enabled,always_ready*)
  method Action gpio_6(Bit#(1) in);
  
  (*always_enabled,always_ready*)
  method Action gpio_7(Bit#(1) in);
  
  (*always_enabled,always_ready*)
  method Action gpio_8(Bit#(1) in);
  
  (*always_enabled,always_ready*)
  method Action gpio_9(Bit#(1) in);
  
  (*always_enabled,always_ready*)
  method Action gpio_10(Bit#(1) in);
  
  (*always_enabled,always_ready*)
  method Action gpio_11(Bit#(1) in);
  
  (*always_enabled,always_ready*)
  method Action gpio_12(Bit#(1) in);
  
  (*always_enabled,always_ready*)
  method Action gpio_13(Bit#(1) in);
  
  (*always_enabled,always_ready*)
  method Action gpio_14(Bit#(1) in);
  
  (*always_enabled,always_ready*)
  method Action gpio_15(Bit#(1) in);
  
  (*always_enabled,always_ready*)
  method Bit#(1) gpio_0_out;

  (*always_enabled,always_ready*)
  method Bit#(1) gpio_1_out;
  
  (*always_enabled,always_ready*)
  method Bit#(1) gpio_2_out;
  
  (*always_enabled,always_ready*)
  method Bit#(1) gpio_3_out;
  
  (*always_enabled,always_ready*)
  method Bit#(1) gpio_4_out;
  
  (*always_enabled,always_ready*)
  method Bit#(1) gpio_5_out;
  
  (*always_enabled,always_ready*)
  method Bit#(1) gpio_6_out;
  
  (*always_enabled,always_ready*)
  method Bit#(1) gpio_7_out;
  
  (*always_enabled,always_ready*)
  method Bit#(1) gpio_8_out;
  
  (*always_enabled,always_ready*)
  method Bit#(1) gpio_9_out;
  
  (*always_enabled,always_ready*)
  method Bit#(1) gpio_10_out;
  
  (*always_enabled,always_ready*)
  method Bit#(1) gpio_11_out;
  
  (*always_enabled,always_ready*)
  method Bit#(1) gpio_12_out;
  
  (*always_enabled,always_ready*)
  method Bit#(1) gpio_13_out;
  
  (*always_enabled,always_ready*)
  method Bit#(1) gpio_14_out;
  
  (*always_enabled,always_ready*)
  method Bit#(1) gpio_15_out;
  
  (*always_enabled,always_ready*)
  method Bit#(1) gpio_0_outen;

  (*always_enabled,always_ready*)
  method Bit#(1) gpio_1_outen;
  
  (*always_enabled,always_ready*)
  method Bit#(1) gpio_2_outen;
  
  (*always_enabled,always_ready*)
  method Bit#(1) gpio_3_outen;
  
  (*always_enabled,always_ready*)
  method Bit#(1) gpio_4_outen;
  
  (*always_enabled,always_ready*)
  method Bit#(1) gpio_5_outen;
  
  (*always_enabled,always_ready*)
  method Bit#(1) gpio_6_outen;
  
  (*always_enabled,always_ready*)
  method Bit#(1) gpio_7_outen;
  
  (*always_enabled,always_ready*)
  method Bit#(1) gpio_8_outen;
  
  (*always_enabled,always_ready*)
  method Bit#(1) gpio_9_outen;
  
  (*always_enabled,always_ready*)
  method Bit#(1) gpio_10_outen;
  
  (*always_enabled,always_ready*)
  method Bit#(1) gpio_11_outen;
  
  (*always_enabled,always_ready*)
  method Bit#(1) gpio_12_outen;
  
  (*always_enabled,always_ready*)
  method Bit#(1) gpio_13_outen;
  
  (*always_enabled,always_ready*)
  method Bit#(1) gpio_14_outen;
  
  (*always_enabled,always_ready*)
  method Bit#(1) gpio_15_outen;
  
  endinterface

  interface Ifc_soc_sb;
  `ifdef rtldump
    interface Sbread sbread;
    method Maybe#(CommitLogPacket) commitlog;
  `endif
  `ifdef debug
    interface AXI4_Slave_IFC#(`paddr, `elen, USERSPACE) to_debug_master;
    interface AXI4_Master_IFC#(`paddr, `elen, USERSPACE) to_debug_slave;
    method Action ma_hart_interrupts (Bit#(`num_harts) i);
    method Bit#(`num_harts) mv_harts_have_reset;
    method Bit#(`num_harts) mv_core_debugenable;
  `endif
  endinterface


  interface Ifc_Soc;
    interface Ifc_chip_io chip_io;
    interface Ifc_soc_sb soc_sb;
  endinterface

  typedef (TAdd#(TSub#(TMul#(`num_harts,2),1), `ifdef debug 1 `else 0 `endif )) Debug_master_num;
  typedef (TAdd#(Debug_master_num, 1)) Num_Fast_Masters;

  (*synthesize*)
   module mktcm(Ifc_TCM_axi4#(`paddr,XLEN,USERSPACE,4,1,15));
    let ifc();
    mkTCM_axi4#("TCM", valueOf(`TCMBase)) _temp(ifc);
    return ifc;
  endmodule


  (*synthesize*)
  module mkSoc#(`ifdef debug Vector#(`num_harts, Reset) hartresets `endif ) (Ifc_Soc);
    let curr_clk<-exposeCurrentClock;
    let curr_reset<-exposeCurrentReset;

    Reset core_reset [`num_harts];
    for (Integer i = 0; i<`num_harts; i = i + 1) begin
    `ifdef debug
      core_reset[i]<- mkResetEither(hartresets[i],curr_reset);     // OR default and new_rst
    `else
      core_reset[i] = curr_reset;
    `endif
    end

    let tcm 	 <- mktcm();

    Ifc_ccore_axi4 ccore <- mkccore_axi4(`resetpc, 0);

    AXI4_Fabric_IFC #(`Num_Fast_Masters, `Num_Fast_Slaves, `paddr, ELEN, USERSPACE) 
                                                    fabric <- mkAXI4_Fabric(fn_slave_map_fast);
    Ifc_clint_axi4#(`paddr, ELEN, 0, 1, 256) clint <- mkclint_axi4();
 
    Ifc_err_slave_axi4#(`paddr,ELEN,0) fast_err_slave <- mkerr_slave_axi4;

    AXI4_Lite_Fabric_IFC #(`Num_Masters, `Num_Slaves, `paddr, 32, USERSPACE) 
                                                        slow_fabric <- mkAXI4_Lite_Fabric(fn_slave_map);
    Ifc_pwm_cluster pwm_cluster <- mkpwm_cluster;
    Ifc_uart_cluster uart_cluster <- mkuart_cluster;
    Ifc_spi_cluster spi_cluster <- mkspi_cluster;
    Ifc_mixed_cluster mixed_cluster <- mkmixed_cluster;
    Ifc_err_slave_axi4lite#(`paddr,32,0) err_slave <- mkerr_slave_axi4lite;
    `ifdef simulate
      Ifc_sign_dump signature <- mksign_dump();
    `endif

    Wire#(Bit#(1)) wr_gpio0_in <- mkDWire(0);
    Wire#(Bit#(1)) wr_gpio1_in <- mkDWire(0);
    Wire#(Bit#(1)) wr_gpio2_in <- mkDWire(0);
    Wire#(Bit#(1)) wr_gpio3_in <- mkDWire(0);
    Wire#(Bit#(1)) wr_gpio4_in <- mkDWire(0);
    Wire#(Bit#(1)) wr_gpio5_in <- mkDWire(0);
    Wire#(Bit#(1)) wr_gpio6_in <- mkDWire(0);
    Wire#(Bit#(1)) wr_gpio7_in <- mkDWire(0);
    Wire#(Bit#(1)) wr_gpio8_in <- mkDWire(0);
    Wire#(Bit#(1)) wr_gpio9_in <- mkDWire(0);
    Wire#(Bit#(1)) wr_gpio10_in <- mkDWire(0);
    Wire#(Bit#(1)) wr_gpio11_in <- mkDWire(0);
    Wire#(Bit#(1)) wr_gpio12_in <- mkDWire(0);
    Wire#(Bit#(1)) wr_gpio13_in <- mkDWire(0);
    Wire#(Bit#(1)) wr_gpio14_in <- mkDWire(0);
    Wire#(Bit#(1)) wr_gpio15_in <- mkDWire(0);
    

  `ifdef debug
    Bit#(`num_harts) lv_haveresets=0;
    Bit#(`num_harts) lv_debugenable=0;
    Wire#(Bit#(`num_harts)) wr_hart_interrupts <- mkWire();
    for (Integer i = 0; i<`num_harts; i = i + 1) begin
      lv_haveresets[i] = ccore.mv_core_is_reset;
      lv_debugenable[i] = ccore.mv_core_debugenable;
      /*doc:rule: */
      rule rl_connect_debug_interrupt;
        ccore.ma_debug_interrupt(wr_hart_interrupts[i]);
      endrule:rl_connect_debug_interrupt
      /*doc:rule: */
      rule rl_connect_available; 
        ccore.ma_debugger_available(1);
      endrule:rl_connect_available
    end
    mkConnection(clint.ma_stop_count,ccore.mv_stop_timer);
  `endif

		//Rule to connect PLIC interrupt to the core's sideband
		rule rl_core_plic_connection;
			ccore.sb_plic_meip(mixed_cluster.sb_ext_interrupt[0]);
		endrule
		
	`ifdef supervisor
		rule rl_core_plic_c1_connection;
			ccore.sb_plic_seip(mixed_cluster.sb_ext_interrupt[1]);
		endrule
	`endif

    rule connect_interrupt_lines;
      mixed_cluster.interrupts({spi_cluster.spi1_sb_interrupt,
                                spi_cluster.spi0_sb_interrupt,
                                2'b0, uart_cluster.uart_interrupts, pwm_cluster.pwm5_sb_interrupt, 
                                                  pwm_cluster.pwm4_sb_interrupt, 
                                                  pwm_cluster.pwm3_sb_interrupt, 
                                                  pwm_cluster.pwm2_sb_interrupt, 
                                                  pwm_cluster.pwm1_sb_interrupt, 
                                                  pwm_cluster.pwm0_sb_interrupt});
    endrule

    rule connect_gpio_input_lines;
      let gpio_in_combined = unpack({
			  wr_gpio15_in,
			  wr_gpio14_in,
			  wr_gpio13_in,
			  wr_gpio12_in,
			  wr_gpio11_in,
			  wr_gpio10_in,
			  wr_gpio9_in,
			  wr_gpio8_in,
			  wr_gpio7_in,
			  wr_gpio6_in,
			  wr_gpio5_in,
			  wr_gpio4_in,
			  wr_gpio3_in,
			  wr_gpio2_in,
			  wr_gpio1_in,
			  wr_gpio0_in	});
		   mixed_cluster.gpio_io.gpio_in(gpio_in_combined);
    endrule
    

      
    // ------------------------------------------------------------------------------------------/
   	mkConnection(ccore.master_d,	fabric.v_from_masters[`Mem_master_num]);
   	mkConnection(ccore.master_i, fabric.v_from_masters[`Fetch_master_num]);
    `ifdef simulate
      mkConnection(signature.master, fabric.v_from_masters[`Sign_master_num]);
    `endif

    mkConnection(fabric.v_to_slaves [`TCM_slave_num],tcm.slave);

  	mkConnection (fabric.v_to_slaves [`Clint_slave_num ],clint.slave);
    mkConnection (fabric.v_to_slaves [`FastErr_slave_num ] , fast_err_slave.slave);

    mkConnection (fabric.v_to_slaves [`Slow_fabric_slave_num], slow_fabric.v_from_masters[0]);

    // sideband connection
    mkConnection(ccore.sb_clint_msip,clint.sb_clint_msip);
    mkConnection(ccore.sb_clint_mtip,clint.sb_clint_mtip);
    mkConnection(ccore.sb_clint_mtime,clint.sb_clint_mtime);

    mkConnection (slow_fabric.v_to_slaves [`PWMCluster_slave_num], pwm_cluster.slave);
    mkConnection (slow_fabric.v_to_slaves [`UARTCluster_slave_num], uart_cluster.slave);
    mkConnection (slow_fabric.v_to_slaves [`SPICluster_slave_num], spi_cluster.slave);
    mkConnection (slow_fabric.v_to_slaves [`MixedCluster_slave_num], mixed_cluster.slave);
    mkConnection (slow_fabric.v_to_slaves [`Err_slave_num ] , err_slave.slave);
    `ifdef simulate
      mkConnection (fabric.v_to_slaves [`Sign_slave_num ] , signature.slave);
    `endif

    


    interface soc_sb = interface Ifc_soc_sb
    `ifdef rtldump
      interface commitlog= ccore.commitlog;
      interface sbread = ccore.sbread;
    `endif
      interface to_debug_master = fabric.v_from_masters[`Debug_master_num];
      interface to_debug_slave = fabric.v_to_slaves[`Debug_slave_num];
      method Action ma_hart_interrupts (Bit#(`num_harts) i);
        wr_hart_interrupts <= i;
      endmethod
      method mv_harts_have_reset = lv_haveresets;
      method mv_core_debugenable = lv_debugenable;
    endinterface;

  interface chip_io = interface Ifc_chip_io
    method Action gpio_0(Bit#(1) in);
        wr_gpio0_in <= in;
    endmethod

    method Action gpio_1(Bit#(1) in);
        wr_gpio1_in <= in;
    endmethod
    
    method Action gpio_2(Bit#(1) in);
        wr_gpio2_in <= in;
    endmethod
    
    method Action gpio_3(Bit#(1) in);
        wr_gpio3_in <= in;
    endmethod
    
    method Action gpio_4(Bit#(1) in);
        wr_gpio4_in <= in;
    endmethod
    
    method Action gpio_5(Bit#(1) in);
        wr_gpio5_in <= in;
    endmethod
    
    method Action gpio_6(Bit#(1) in);
        wr_gpio6_in <= in;
    endmethod
    
    method Action gpio_7(Bit#(1) in);
        wr_gpio7_in <= in;
    endmethod
    
    method Action gpio_8(Bit#(1) in);
        wr_gpio8_in <= in;
    endmethod
    
    method Action gpio_9(Bit#(1) in);
        wr_gpio9_in <= in;
    endmethod
    
    method Action gpio_10(Bit#(1) in);
        wr_gpio10_in <= in;
    endmethod
    
    method Action gpio_11(Bit#(1) in);
        wr_gpio11_in <= in;
    endmethod
    
    method Action gpio_12(Bit#(1) in);
        wr_gpio12_in <= in;
    endmethod
    
    method Action gpio_13(Bit#(1) in);
        wr_gpio13_in <= in;
    endmethod
    
    method Action gpio_14(Bit#(1) in);
        wr_gpio14_in <= in;
    endmethod
    
    method Action gpio_15(Bit#(1) in);
        wr_gpio15_in <= in;
    endmethod

    
    method Bit#(1) gpio_0_out = mixed_cluster.gpio_io.gpio_out[0];
    method Bit#(1) gpio_1_out = mixed_cluster.gpio_io.gpio_out[1];
    method Bit#(1) gpio_2_out = mixed_cluster.gpio_io.gpio_out[2];
    method Bit#(1) gpio_3_out = mixed_cluster.gpio_io.gpio_out[3];
    method Bit#(1) gpio_4_out = mixed_cluster.gpio_io.gpio_out[4];
    method Bit#(1) gpio_5_out = mixed_cluster.gpio_io.gpio_out[5];
    method Bit#(1) gpio_6_out = mixed_cluster.gpio_io.gpio_out[6];
    method Bit#(1) gpio_7_out = mixed_cluster.gpio_io.gpio_out[7];
    method Bit#(1) gpio_8_out = mixed_cluster.gpio_io.gpio_out[8];
    method Bit#(1) gpio_9_out = mixed_cluster.gpio_io.gpio_out[9];
    method Bit#(1) gpio_10_out = mixed_cluster.gpio_io.gpio_out[10];
    method Bit#(1) gpio_11_out = mixed_cluster.gpio_io.gpio_out[11];
    method Bit#(1) gpio_12_out = mixed_cluster.gpio_io.gpio_out[12];
    method Bit#(1) gpio_13_out = mixed_cluster.gpio_io.gpio_out[13];
    method Bit#(1) gpio_14_out = mixed_cluster.gpio_io.gpio_out[14];
    method Bit#(1) gpio_15_out = mixed_cluster.gpio_io.gpio_out[15];
    
    
    method Bit#(1) gpio_0_outen = mixed_cluster.gpio_io.gpio_out_en[0];
    method Bit#(1) gpio_1_outen = mixed_cluster.gpio_io.gpio_out_en[1];
    method Bit#(1) gpio_2_outen = mixed_cluster.gpio_io.gpio_out_en[2];
    method Bit#(1) gpio_3_outen = mixed_cluster.gpio_io.gpio_out_en[3];
    method Bit#(1) gpio_4_outen = mixed_cluster.gpio_io.gpio_out_en[4];
    method Bit#(1) gpio_5_outen = mixed_cluster.gpio_io.gpio_out_en[5];
    method Bit#(1) gpio_6_outen = mixed_cluster.gpio_io.gpio_out_en[6];
    method Bit#(1) gpio_7_outen = mixed_cluster.gpio_io.gpio_out_en[7];
    method Bit#(1) gpio_8_outen = mixed_cluster.gpio_io.gpio_out_en[8];
    method Bit#(1) gpio_9_outen = mixed_cluster.gpio_io.gpio_out_en[9];
    method Bit#(1) gpio_10_outen = mixed_cluster.gpio_io.gpio_out_en[10];
    method Bit#(1) gpio_11_outen = mixed_cluster.gpio_io.gpio_out_en[11];
    method Bit#(1) gpio_12_outen = mixed_cluster.gpio_io.gpio_out_en[12];
    method Bit#(1) gpio_13_outen = mixed_cluster.gpio_io.gpio_out_en[13];
    method Bit#(1) gpio_14_outen = mixed_cluster.gpio_io.gpio_out_en[14];
    method Bit#(1) gpio_15_outen = mixed_cluster.gpio_io.gpio_out_en[15];
    


    interface spi0_io = spi_cluster.spi0_io;
    interface spi1_io = spi_cluster.spi1_io;

    interface uart0_io = uart_cluster.uart0_io;
    interface uart1_io = uart_cluster.uart1_io;
    interface uart2_io = uart_cluster.uart2_io;

		method  i2c0_out = mixed_cluster.i2c0_out;									//I2c IO interface
		method  i2c1_out = mixed_cluster.i2c1_out;									//I2c IO interface

    method  pwm0_io  = pwm_cluster.pwm0_io;
    method  pwm1_io  = pwm_cluster.pwm1_io;
    method  pwm2_io  = pwm_cluster.pwm2_io;
    method  pwm3_io  = pwm_cluster.pwm3_io;
    method  pwm4_io  = pwm_cluster.pwm4_io;
    method  pwm5_io  = pwm_cluster.pwm5_io;
    
  endinterface;

  endmodule: mkSoc
endpackage: Soc
