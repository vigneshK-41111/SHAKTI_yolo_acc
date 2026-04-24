#create_clock -period 60.000 -name tck -waveform {0.000 30.000} -add [get_nets pin_tck]

#set_multicycle_path -setup 4 -from [get_clocks tck] -to [get_clocks clk_out1_clk_divider] -end
#set_multicycle_path -hold 3 -from [get_clocks tck] -to [get_clocks clk_out1_clk_divider] -end
#set_multicycle_path -setup 4 -from [get_clocks clk_out1_clk_divider] -to [get_clocks tck] -start
#set_multicycle_path -hold 4 -from [get_clocks clk_out1_clk_divider] -to [get_clocks tck] -start

#set_property CLOCK_DEDICATED_ROUTE FALSE [get_nets pin_tck_IBUF]
#set_property CLOCK_DEDICATED_ROUTE BACKBONE [get_nets sys_clk_IBUF]

##Pmod Header JA for JTAG
#set_property -dict { PACKAGE_PIN G13   IOSTANDARD LVCMOS33 } [get_ports { pin_tms             }]; #IO_0_15 Sch=ja[1]
#set_property PULLUP   true [get_ports { pin_tms  }]; 
#set_property -dict { PACKAGE_PIN B11   IOSTANDARD LVCMOS33 } [get_ports { pin_tdi             }]; #IO_L4P_T0_15 Sch=ja[2]
#set_property -dict { PACKAGE_PIN D12   IOSTANDARD LVCMOS33 } [get_ports { pin_trst            }]; #IO_L6P_T0_15 Sch=ja[4]
#set_property PULLDOWN true [get_ports { pin_trst }]; 
#set_property -dict { PACKAGE_PIN D13   IOSTANDARD LVCMOS33 } [get_ports { pin_tdo             }]; #IO_L6N_T0_VREF_15 Sch=ja[7]
#set_property -dict { PACKAGE_PIN B18   IOSTANDARD LVCMOS33 } [get_ports { pin_tck             }]; #IO_L10P_T1_AD11P_15 Sch=ja[8]

# create_clock -period 50.000 -name tck -waveform {0.000 25.000} -add [get_nets pin_tck]

# set_multicycle_path -setup 5 -from [get_clocks tck] -to [get_clocks clk_out1_clk_divider] -end
# set_multicycle_path -hold 4 -from [get_clocks tck] -to [get_clocks clk_out1_clk_divider] -start
# set_multicycle_path -setup 5 -from [get_clocks clk_out1_clk_divider] -to [get_clocks tck] -start
# set_multicycle_path -hold 4 -from [get_clocks clk_out1_clk_divider] -to [get_clocks tck] -start

# set_property CLOCK_DEDICATED_ROUTE FALSE [get_nets pin_tck_IBUF]

# #JTAG

# #FMC J2.H32
# set_property PACKAGE_PIN L13      [get_ports "pin_trst"] ;# Bank  47 VCCO - VADJ_1V8_FPGA - IO_L7N_T1L_N1_QBC_AD13N_47
# set_property IOSTANDARD  LVCMOS18 [get_ports "pin_trst"] ;# Bank  47 VCCO - VADJ_1V8_FPGA - IO_L7N_T1L_N1_QBC_AD13N_47
# set_property PULLDOWN true [get_ports pin_trst];
# #FMC J2.H34
# set_property PACKAGE_PIN E9       [get_ports "pin_tdi"] ;# Bank  47 VCCO - VADJ_1V8_FPGA - IO_L17P_T2U_N8_AD10P_47
# set_property IOSTANDARD  LVCMOS18 [get_ports "pin_tdi"] ;# Bank  47 VCCO - VADJ_1V8_FPGA - IO_L17P_T2U_N8_AD10P_47
# #FMC J2.H35
# set_property PACKAGE_PIN D9       [get_ports "pin_tms"] ;
# set_property IOSTANDARD  LVCMOS18 [get_ports "pin_tms"] ;
# set_property PULLUP true [get_ports pin_tms];
# #FMC J2.H37
# set_property PACKAGE_PIN F8     [get_ports "pin_tck"] ;
# set_property IOSTANDARD  LVCMOS18 [get_ports "pin_tck"] ;
# #FMC J2.H38
# set_property PACKAGE_PIN E8     [get_ports "pin_tdo"] ;
# set_property IOSTANDARD  LVCMOS18 [get_ports "pin_tdo"] ;