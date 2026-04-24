## This file is a general .xdc for the Arty A7-100 Rev. D
## To use it in a project:
## - uncomment the lines corresponding to used pins
## - rename the used ports (in each line, after get_ports) according to the top level signal names in the project

set_property CLOCK_DEDICATED_ROUTE BACKBONE [get_nets sys_clk_IBUF]

## Pmod Header JB
set_property -dict { PACKAGE_PIN D14   IOSTANDARD LVCMOS33 } [get_ports { i2c0_sda }]; #IO_L11P_T1_SRCC_15 Sch=jb[0]
set_property -dict { PACKAGE_PIN F16   IOSTANDARD LVCMOS33 } [get_ports { i2c0_scl }]; #IO_L11N_T1_SRCC_15 Sch=jb[1]
set_property -dict { PACKAGE_PIN G16   IOSTANDARD LVCMOS33 } [get_ports { gpio_14 }]; #IO_L12P_T1_MRCC_15 Sch=jb[2]
set_property PULLDOWN true [get_ports { gpio_14 }]; 
set_property -dict { PACKAGE_PIN H14   IOSTANDARD LVCMOS33 } [get_ports { gpio_15 }]; #IO_L12N_T1_MRCC_15 Sch=jb[3]
set_property PULLDOWN true [get_ports { gpio_15 }]; 

set_property -dict { PACKAGE_PIN E16   IOSTANDARD LVCMOS33 } [get_ports { external_clk }]; #IO_L24N_T3_RS0_15 Sch=jb[7]
set_property -dict { PACKAGE_PIN F13   IOSTANDARD LVCMOS33 } [get_ports { gpio_4 }]; #IO_L5P_T0_AD9P_15 Sch=jb[8]
set_property PULLDOWN true [get_ports { gpio_4 }];
set_property -dict { PACKAGE_PIN G13   IOSTANDARD LVCMOS33 } [get_ports { gpio_7 }]; #IO_0_15 Sch=jb[9]
set_property PULLDOWN true [get_ports { gpio_7 }]; 
set_property -dict { PACKAGE_PIN H16   IOSTANDARD LVCMOS33 } [get_ports { gpio_8 }]; #IO_L13P_T2_MRCC_15 Sch=jb[10]
set_property PULLDOWN true [get_ports { gpio_8 }]; 

## Pmod Header JC
set_property -dict { PACKAGE_PIN K1   IOSTANDARD LVCMOS33 } [get_ports { gptimer0_in }]; #IO_L20P_T3_A08_D24_14 Sch=jc_p[1]
set_property -dict { PACKAGE_PIN F6   IOSTANDARD LVCMOS33 } [get_ports { gptimer0_out }]; #IO_L20N_T3_A07_D23_14 Sch=jc_n[1]
set_property -dict { PACKAGE_PIN J2   IOSTANDARD LVCMOS33 } [get_ports { gptimer1_in }]; #IO_L21P_T3_DQS_14 Sch=jc_p[2]
set_property -dict { PACKAGE_PIN G6   IOSTANDARD LVCMOS33 } [get_ports { gptimer1_out }]; #IO_L21N_T3_DQS_A06_D22_14 Sch=jc_n[2]
set_property -dict { PACKAGE_PIN E7   IOSTANDARD LVCMOS33 } [get_ports { gptimer2_in }]; #IO_L22P_T3_A05_D21_14 Sch=jc_p[3]
set_property -dict { PACKAGE_PIN J3   IOSTANDARD LVCMOS33 } [get_ports { gptimer2_out }]; #IO_L22N_T3_A04_D20_14 Sch=jc_n[3]
set_property -dict { PACKAGE_PIN J4   IOSTANDARD LVCMOS33 } [get_ports { gptimer3_in }]; #IO_L23P_T3_A03_D19_14 Sch=jc_p[4]
set_property -dict { PACKAGE_PIN E6   IOSTANDARD LVCMOS33 } [get_ports { gptimer3_out }]; #IO_L23N_T3_A02_D18_14 Sch=jc_n[4]

## USB-UART Interface
set_property -dict { PACKAGE_PIN D4   IOSTANDARD LVCMOS33 } [get_ports { uart0_SOUT }]; #IO_L19N_T3_VREF_16 Sch=uart_rxd_out
set_property -dict { PACKAGE_PIN C4   IOSTANDARD LVCMOS33 } [get_ports { uart0_SIN }]; #IO_L14N_T2_SRCC_16 Sch=uart_txd_in

## ChipKit Outer Digital Header
set_property -dict { PACKAGE_PIN U16   IOSTANDARD LVCMOS33 } [get_ports { io8_cell  }]; #IO_L18P_T2_A12_D28_14 Sch=ck_io[1]
set_property PULLDOWN true [get_ports { io8_cell }]; 
set_property -dict { PACKAGE_PIN P14   IOSTANDARD LVCMOS33 } [get_ports { io9_cell  }]; #IO_L8N_T1_D12_14 Sch=ck_io[2]
set_property PULLDOWN true [get_ports { io9_cell }]; 
set_property -dict { PACKAGE_PIN T11   IOSTANDARD LVCMOS33 } [get_ports { io10_cell  }]; #IO_L19P_T3_A10_D26_14 Sch=ck_io[3]
set_property PULLDOWN true [get_ports { io10_cell }]; 
set_property -dict { PACKAGE_PIN T14   IOSTANDARD LVCMOS33 } [get_ports { io12_cell  }]; #IO_L14P_T2_SRCC_14 Sch=ck_io[5]
set_property PULLDOWN true [get_ports { io12_cell }]; 
set_property -dict { PACKAGE_PIN T15   IOSTANDARD LVCMOS33 } [get_ports { io13_cell  }]; #IO_L14N_T2_SRCC_14 Sch=ck_io[6]
set_property PULLDOWN true [get_ports { io13_cell }]; 
set_property -dict { PACKAGE_PIN M16   IOSTANDARD LVCMOS33 } [get_ports { io16_cell  }]; #IO_L10P_T1_D14_14 Sch=ck_io[9]
set_property PULLDOWN true [get_ports { io16_cell }]; 

##Pmod Headers
##Pmod Header JA
set_property -dict { PACKAGE_PIN C17   IOSTANDARD LVCMOS33 } [get_ports { io8_cell }]; #IO_L20N_T3_A19_15 Sch=ja[1]
set_property PULLDOWN true [get_ports { io8_cell }]; 
set_property -dict { PACKAGE_PIN D18   IOSTANDARD LVCMOS33 } [get_ports { io9_cell }]; #IO_L21N_T3_DQS_A18_15 Sch=ja[2]
set_property PULLDOWN true [get_ports { io9_cell }]; 
set_property -dict { PACKAGE_PIN E18   IOSTANDARD LVCMOS33 } [get_ports { io10_cell }]; #IO_L21P_T3_DQS_15 Sch=ja[3]
set_property PULLDOWN true [get_ports { io10_cell }]; 
set_property -dict { PACKAGE_PIN G17   IOSTANDARD LVCMOS33 } [get_ports { io12_cell }]; #IO_L18N_T2_A23_15 Sch=ja[4]
set_property PULLDOWN true [get_ports { io12_cell }]; 
set_property -dict { PACKAGE_PIN D17   IOSTANDARD LVCMOS33 } [get_ports { io13_cell }]; #IO_L16N_T2_A27_15 Sch=ja[7]
set_property PULLDOWN true [get_ports { io13_cell }]; 
set_property -dict { PACKAGE_PIN E17   IOSTANDARD LVCMOS33 } [get_ports { io16_cell }]; #IO_L16P_T2_A28_15 Sch=ja[8]
set_property PULLDOWN true [get_ports { io16_cell }]; 
set_property -dict { PACKAGE_PIN F18   IOSTANDARD LVCMOS33 } [get_ports { i2c1_scl }]; #IO_L22N_T3_A16_15 Sch=ja[9]
set_property -dict { PACKAGE_PIN G18   IOSTANDARD LVCMOS33 } [get_ports { i2c1_sda }]; #IO_L22P_T3_A17_15 Sch=ja[10]


##Micro SD Connector
#set_property -dict { PACKAGE_PIN E2    IOSTANDARD LVCMOS33 } [get_ports { SD_RESET }]; #IO_L14P_T2_SRCC_35 Sch=sd_reset
#set_property -dict { PACKAGE_PIN A1    IOSTANDARD LVCMOS33 } [get_ports { SD_CD }]; #IO_L9N_T1_DQS_AD7N_35 Sch=sd_cd
set_property -dict { PACKAGE_PIN B1    IOSTANDARD LVCMOS33 } [get_ports { io20_cell }]; #IO_L9P_T1_DQS_AD7P_35 Sch=sd_sck
set_property -dict { PACKAGE_PIN C1    IOSTANDARD LVCMOS33 } [get_ports { io18_cell }]; #IO_L16N_T2_35 Sch=sd_cmd
set_property -dict { PACKAGE_PIN C2    IOSTANDARD LVCMOS33 } [get_ports { io19_cell }]; #IO_L16P_T2_35 Sch=sd_dat[0]
#set_property -dict { PACKAGE_PIN E1    IOSTANDARD LVCMOS33 } [get_ports { SD_DAT[1] }]; #IO_L18N_T2_35 Sch=sd_dat[1]
#set_property -dict { PACKAGE_PIN F1    IOSTANDARD LVCMOS33 } [get_ports { SD_DAT[2] }]; #IO_L18P_T2_35 Sch=sd_dat[2]
set_property -dict { PACKAGE_PIN D2    IOSTANDARD LVCMOS33 } [get_ports { io17_cell }]; #IO_L14N_T2_SRCC_35 Sch=sd_dat[3]


## LEDs
set_property -dict { PACKAGE_PIN H17   IOSTANDARD LVCMOS33 } [get_ports { gpio_16 }]; #IO_L24N_T3_35 Sch=led[0]
set_property -dict { PACKAGE_PIN K15   IOSTANDARD LVCMOS33 } [get_ports { gpio_17 }]; #IO_25_35 Sch=led[1]
set_property -dict { PACKAGE_PIN J13   IOSTANDARD LVCMOS33 } [get_ports { gpio_18 }]; #IO_L24P_T3_A01_D17_14 Sch=led[2]
set_property -dict { PACKAGE_PIN N14   IOSTANDARD LVCMOS33 } [get_ports { gpio_19 }]; #IO_L24N_T3_A00_D16_14 Sch=led[3]

## Buttons
set_property -dict { PACKAGE_PIN N17    IOSTANDARD LVCMOS33 } [get_ports { gpio_20 }]; #IO_L6N_T0_VREF_16 Sch=btnc
set_property -dict { PACKAGE_PIN M18    IOSTANDARD LVCMOS33 } [get_ports { gpio_21 }]; #IO_L11P_T1_SRCC_16 Sch=btnu
set_property -dict { PACKAGE_PIN P17    IOSTANDARD LVCMOS33 } [get_ports { gpio_22 }]; #IO_L11N_T1_SRCC_16 Sch=btnl
set_property -dict { PACKAGE_PIN M17    IOSTANDARD LVCMOS33 } [get_ports { gpio_23 }]; #IO_L12P_T1_MRCC_16 Sch=btnr
set_property -dict { PACKAGE_PIN P18    IOSTANDARD LVCMOS33 } [get_ports { io7_cell }]; #IO_L9N_T1_DQS_D13_14 Sch=btnd


## Pmod Header JD
set_property -dict { PACKAGE_PIN H4    IOSTANDARD LVCMOS33 } [get_ports { gpio_24 }]; #IO_L11N_T1_SRCC_35 Sch=jd[1]
set_property PULLDOWN true [get_ports { gpio_24 }]; 
set_property -dict { PACKAGE_PIN H1    IOSTANDARD LVCMOS33 } [get_ports { gpio_25 }]; #IO_L12N_T1_MRCC_35 Sch=jd[2]
set_property PULLDOWN true [get_ports { gpio_25 }];
set_property -dict { PACKAGE_PIN G1    IOSTANDARD LVCMOS33 } [get_ports { gpio_26 }]; #IO_L13P_T2_MRCC_35 Sch=jd[3]
set_property PULLDOWN true [get_ports { gpio_26 }];
set_property -dict { PACKAGE_PIN G3    IOSTANDARD LVCMOS33 } [get_ports { gpio_27 }]; #IO_L13N_T2_MRCC_35 Sch=jd[4]
set_property PULLDOWN true [get_ports { gpio_27 }];
set_property -dict { PACKAGE_PIN H2    IOSTANDARD LVCMOS33 } [get_ports { gpio_28 }]; #IO_L14P_T2_SRCC_35 Sch=jd[7]
set_property PULLDOWN true [get_ports { gpio_28 }];
set_property -dict { PACKAGE_PIN G4    IOSTANDARD LVCMOS33 } [get_ports { gpio_29 }]; #IO_L14N_T2_SRCC_35 Sch=jd[8]
set_property PULLDOWN true [get_ports { gpio_29 }];
set_property -dict { PACKAGE_PIN G2    IOSTANDARD LVCMOS33 } [get_ports { gpio_30 }]; #IO_L15P_T2_DQS_35 Sch=jd[9]
set_property PULLDOWN true [get_ports { gpio_30 }];
set_property -dict { PACKAGE_PIN F3    IOSTANDARD LVCMOS33 } [get_ports { gpio_31 }]; #IO_L15N_T2_DQS_35 Sch=jd[10]
set_property PULLDOWN true [get_ports { gpio_31 }];


## Quad SPI Flash
set_property -dict { PACKAGE_PIN L13   IOSTANDARD LVCMOS33 } [get_ports { spi0_nss }]; #IO_L6P_T0_FCS_B_14 Sch=qspi_cs
set_property -dict { PACKAGE_PIN K17   IOSTANDARD LVCMOS33 } [get_ports { spi0_mosi }]; #IO_L1P_T0_D00_MOSI_14 Sch=qspi_dq[0]
set_property -dict { PACKAGE_PIN K18   IOSTANDARD LVCMOS33 } [get_ports { spi0_miso }]; #IO_L1N_T0_D01_DIN_14 Sch=qspi_dq[1]
#set_property -dict { PACKAGE_PIN L14   IOSTANDARD LVCMOS33 } [get_ports { qspi_dq[2] }]; #IO_L2P_T0_D02_14 Sch=qspi_dq[2]
#set_property -dict { PACKAGE_PIN M14   IOSTANDARD LVCMOS33 } [get_ports { qspi_dq[3] }]; #IO_L2N_T0_D03_14 Sch=qspi_dq[3]


set_property -dict { PACKAGE_PIN C12    IOSTANDARD LVCMOS33 } [get_ports { sys_rst }]; #IO_L16P_T2_35 Sch=ck_rst


