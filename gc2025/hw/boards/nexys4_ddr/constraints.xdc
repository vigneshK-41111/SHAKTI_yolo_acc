## Clock Signal
#set_property -dict { PACKAGE_PIN E3    IOSTANDARD LVCMOS33 } [get_ports { sys_clk }]; #IO_L13P_T2_MRCC_34 Sch=sysclk
#create_clock -add -name sys_clk_pin -period 10.00 -waveform {0 5} [get_ports sys_clk]

set_property -dict { PACKAGE_PIN C12   IOSTANDARD LVCMOS33 } [get_ports { sys_rst }]; #IO_L3P_T0_DQS_AD1P_15 Sch=cpu_resetn

### UART
set_property -dict { PACKAGE_PIN D4  IOSTANDARD LVCMOS33 } [get_ports { uart0_SOUT }]; #IO_L15P_T2_DQS_RDWR_B_14 Sch=uart_rx_out
set_property -dict { PACKAGE_PIN C4   IOSTANDARD LVCMOS33 } [get_ports { uart0_SIN }]; #IO_L14P_T2_SRCC_14 Sch=uart_tx_in

### Pmod header JA
set_property -dict { PACKAGE_PIN C17  IOSTANDARD LVCMOS33 } [get_ports { i2c0_sda }]; #IO_L10N_T1_D15_14 Sch=ja[1]
set_property -dict { PACKAGE_PIN D18  IOSTANDARD LVCMOS33 } [get_ports { i2c0_scl }]; #IO_L10P_T1_D14_14 Sch=ja[2]
set_property -dict { PACKAGE_PIN E18  IOSTANDARD LVCMOS33 } [get_ports { i2c1_sda }]; #IO_L15N_T2_DQS_DOUT_CSO_B_14 Sch=ja[3]
set_property -dict { PACKAGE_PIN G17  IOSTANDARD LVCMOS33 } [get_ports { i2c1_scl }]; #IO_L17N_T2_A13_D29_14 Sch=ja[4]

set_property -dict { PACKAGE_PIN D17   IOSTANDARD LVCMOS33 } [get_ports { spi0_mosi }]; #IO_L9P_T1_DQS_14 Sch=ja[7]
set_property -dict { PACKAGE_PIN E17  IOSTANDARD LVCMOS33 } [get_ports { spi0_sclk }]; #IO_L8N_T1_D12_14 Sch=ja[8]
set_property -dict { PACKAGE_PIN F18  IOSTANDARD LVCMOS33 } [get_ports { spi0_nss} ]; #IO_L8P_T1_D11_14 Sch=ja[9]
set_property -dict { PACKAGE_PIN G18  IOSTANDARD LVCMOS33 } [get_ports { spi0_miso }]; #IO_L17P_T2_A14_D30_14 Sch=ja[10]


# ## Pmod header JB
set_property -dict { PACKAGE_PIN D14    IOSTANDARD LVCMOS33 } [get_ports { io10_cell }]; #IO_L21P_T3_DQS_34 Sch=jb_p[1]
set_property -dict { PACKAGE_PIN F16    IOSTANDARD LVCMOS33 } [get_ports { io12_cell }]; #IO_L21N_T3_DQS_34 Sch=jb_n[1]
set_property -dict { PACKAGE_PIN G16    IOSTANDARD LVCMOS33 } [get_ports { io13_cell }]; #IO_L19P_T3_34 Sch=jb_p[2]
set_property -dict { PACKAGE_PIN H14    IOSTANDARD LVCMOS33 } [get_ports { io16_cell }]; #IO_L19N_T3_VREF_34 Sch=jb_n[2]
set_property -dict { PACKAGE_PIN E16    IOSTANDARD LVCMOS33 } [get_ports { io7_cell }]; #IO_L24P_T3_34 Sch=jb_p[3]
set_property -dict { PACKAGE_PIN F13    IOSTANDARD LVCMOS33 } [get_ports { io8_cell }]; #IO_L24N_T3_34 Sch=jb_n[3]
set_property -dict { PACKAGE_PIN G13    IOSTANDARD LVCMOS33 } [get_ports { io9_cell }]; #IO_L23P_T3_34 Sch=jb_p[4]
#set_property -dict { PACKAGE_PIN H16    IOSTANDARD LVCMOS33 } [get_ports { io17_cell }]; #IO_L23N_T3_34 Sch=jb_n[4]


#### Pmod header JC
#set_property -dict { PACKAGE_PIN K1    IOSTANDARD LVCMOS33 } [get_ports { io18_cell }]; #IO_L18P_T2_34 Sch=jc_p[1]
#set_property -dict { PACKAGE_PIN F6   IOSTANDARD LVCMOS33 } [get_ports { io19_cell }]; #IO_L18N_T2_34 Sch=jc_n[1]
set_property -dict { PACKAGE_PIN J2   IOSTANDARD LVCMOS33 } [get_ports { external_clk }]; #IO_L22P_T3_34 Sch=jc_p[2]

set_property -dict { PACKAGE_PIN G6   IOSTANDARD LVCMOS33 } [get_ports { gpio_4 }]; #IO_L22N_T3_34 Sch=jc_n[2]
set_property PULLDOWN true [get_ports { gpio_4 }]; 
set_property -dict { PACKAGE_PIN E7    IOSTANDARD LVCMOS33 } [get_ports { gpio_7 }]; #IO_L17P_T2_34 Sch=jc_p[3]
set_property PULLDOWN true [get_ports { gpio_7 }]; 
set_property -dict { PACKAGE_PIN J3    IOSTANDARD LVCMOS33 } [get_ports { gpio_8 }]; #IO_L17N_T2_34 Sch=jc_n[3]
set_property PULLDOWN true [get_ports { gpio_8 }]; 
set_property -dict { PACKAGE_PIN J4   IOSTANDARD LVCMOS33 } [get_ports { gpio_14 }]; #IO_L20P_T3_34 Sch=jc_p[4]
set_property PULLDOWN true [get_ports { gpio_14 }]; 
set_property -dict { PACKAGE_PIN E6   IOSTANDARD LVCMOS33 } [get_ports { gpio_15 }]; #IO_L20N_T3_34 Sch=jc_n[4]
set_property PULLDOWN true [get_ports { gpio_15 }]; 

##Pmod Header JD

set_property -dict { PACKAGE_PIN H4    IOSTANDARD LVCMOS33 } [get_ports { gptimer0_in }]; #IO_L21N_T3_DQS_35 Sch=jd[1]
set_property -dict { PACKAGE_PIN H1    IOSTANDARD LVCMOS33 } [get_ports { gptimer0_out }]; #IO_L17P_T2_35 Sch=jd[2]
set_property -dict { PACKAGE_PIN G1    IOSTANDARD LVCMOS33 } [get_ports { gptimer1_in }]; #IO_L17N_T2_35 Sch=jd[3]
set_property -dict { PACKAGE_PIN G3    IOSTANDARD LVCMOS33 } [get_ports { gptimer1_out }]; #IO_L20N_T3_35 Sch=jd[4]
set_property -dict { PACKAGE_PIN H2    IOSTANDARD LVCMOS33 } [get_ports { gptimer2_in }]; #IO_L15P_T2_DQS_35 Sch=jd[7]
set_property -dict { PACKAGE_PIN G4    IOSTANDARD LVCMOS33 } [get_ports { gptimer2_out }]; #IO_L20P_T3_35 Sch=jd[8]
set_property -dict { PACKAGE_PIN G2    IOSTANDARD LVCMOS33 } [get_ports { gptimer3_in }]; #IO_L15N_T2_DQS_35 Sch=jd[9]
set_property -dict { PACKAGE_PIN F3    IOSTANDARD LVCMOS33 } [get_ports { gptimer3_out }]; #IO_L13N_T2_MRCC_35 Sch=jd[10]


### LEDs
set_property -dict { PACKAGE_PIN H17   IOSTANDARD LVCMOS33 } [get_ports { gpio_16 }]; #IO_L15P_T2_DQS_13 Sch=led[0]
set_property PULLDOWN true [get_ports { gpio_16 }]; 
set_property -dict { PACKAGE_PIN K15   IOSTANDARD LVCMOS33 } [get_ports { gpio_17 }]; #IO_L15N_T2_DQS_13 Sch=led[1]
set_property PULLDOWN true [get_ports { gpio_17 }]; 
set_property -dict { PACKAGE_PIN J13   IOSTANDARD LVCMOS33 } [get_ports { gpio_18 }]; #IO_L17P_T2_13 Sch=led[2]
set_property PULLDOWN true [get_ports { gpio_18 }]; 
set_property -dict { PACKAGE_PIN N14   IOSTANDARD LVCMOS33 } [get_ports { gpio_19 }]; #IO_L17N_T2_13 Sch=led[3]
set_property PULLDOWN true [get_ports { gpio_19 }]; 
set_property -dict { PACKAGE_PIN R18   IOSTANDARD LVCMOS33 } [get_ports { gpio_20 }]; #IO_L14N_T2_SRCC_13 Sch=led[4]
set_property PULLDOWN true [get_ports { gpio_20 }]; 
set_property -dict { PACKAGE_PIN V17   IOSTANDARD LVCMOS33 } [get_ports { gpio_21 }]; #IO_L16N_T2_13 Sch=led[5]
set_property PULLDOWN true [get_ports { gpio_21 }]; 
set_property -dict { PACKAGE_PIN U17   IOSTANDARD LVCMOS33 } [get_ports { gpio_22 }]; #IO_L16P_T2_13 Sch=led[6]
set_property PULLDOWN true [get_ports { gpio_22 }]; 
set_property -dict { PACKAGE_PIN U16   IOSTANDARD LVCMOS33 } [get_ports { gpio_23 }]; #IO_L5P_T0_13 Sch=led[7]
set_property PULLDOWN true [get_ports { gpio_23 }]; 
set_property -dict { PACKAGE_PIN V16   IOSTANDARD LVCMOS33 } [get_ports { gpio_24 }]; #IO_L16N_T2_A27_15 Sch=led[8]
set_property PULLDOWN true [get_ports { gpio_24 }]; 
set_property -dict { PACKAGE_PIN T15   IOSTANDARD LVCMOS33 } [get_ports { gpio_25 }]; #IO_L16P_T2_A28_15 Sch=led[9]
set_property PULLDOWN true [get_ports { gpio_25 }]; 
set_property -dict { PACKAGE_PIN U14   IOSTANDARD LVCMOS33 } [get_ports { gpio_26 }]; #IO_L17N_T2_A25_15 Sch=led[10]
set_property PULLDOWN true [get_ports { gpio_26 }]; 
set_property -dict { PACKAGE_PIN T16   IOSTANDARD LVCMOS33 } [get_ports { gpio_27 }]; #IO_L17P_T2_A26_15 Sch=led[11]
set_property PULLDOWN true [get_ports { gpio_27 }]; 
set_property -dict { PACKAGE_PIN V15   IOSTANDARD LVCMOS33 } [get_ports { gpio_28 }]; #IO_L18N_T2_A23_15 Sch=led[12]
set_property PULLDOWN true [get_ports { gpio_28 }]; 
set_property -dict { PACKAGE_PIN V14   IOSTANDARD LVCMOS33 } [get_ports { gpio_29 }]; #IO_L18P_T2_A24_15 Sch=led[13]
set_property PULLDOWN true [get_ports { gpio_29 }]; 
set_property -dict { PACKAGE_PIN V12   IOSTANDARD LVCMOS33 } [get_ports { gpio_30 }]; #IO_L10N_T1_AD11N_15 Sch=led[14]
set_property PULLDOWN true [get_ports { gpio_30 }]; 
set_property -dict { PACKAGE_PIN V11   IOSTANDARD LVCMOS33 } [get_ports { gpio_31 }]; #IO_L10P_T1_AD11P_15 Sch=led[15]
set_property PULLDOWN true [get_ports { gpio_31 }]; 


# SD card
set_property -dict { PACKAGE_PIN B1   IOSTANDARD LVCMOS33 } [get_ports { io20_cell }]; #IO_L12P_T1_MRCC_14 Sch=sd_cclk
#set_property -dict { PACKAGE_PIN A1   IOSTANDARD LVCMOS33 } [get_ports { sd_cd }]; #IO_L20N_T3_A07_D23_14 Sch=sd_cd
set_property -dict { PACKAGE_PIN C1   IOSTANDARD LVCMOS33 } [get_ports { io18_cell }]; #IO_L12N_T1_MRCC_14 Sch=sd_cmd
set_property -dict { PACKAGE_PIN C2   IOSTANDARD LVCMOS33 } [get_ports { io19_cell }]; #IO_L14N_T2_SRCC_14 Sch=sd_d[0]
#set_property -dict { PACKAGE_PIN E1   IOSTANDARD LVCMOS33 } [get_ports { sd_d[1] }]; #IO_L4P_T0_D04_14 Sch=sd_d[1]
#set_property -dict { PACKAGE_PIN F1   IOSTANDARD LVCMOS33 } [get_ports { sd_d[2] }]; #IO_L6N_T0_D08_VREF_14 Sch=sd_d[2]
set_property -dict { PACKAGE_PIN D2   IOSTANDARD LVCMOS33 } [get_ports { io17_cell }]; #IO_L18N_T2_A11_D27_14 Sch=sd_d[3]
#set_property -dict { PACKAGE_PIN E2   IOSTANDARD LVCMOS33 } [get_ports { sd_reset }]; #IO_L11N_T1_SRCC_14 Sch=sd_reset
