## This file is a general .xdc for the Arty A7-100 Rev. D
## To use it in a project:
## - uncomment the lines corresponding to used pins
## - rename the used ports (in each line, after get_ports) according to the top level signal names in the project

set_property CLOCK_DEDICATED_ROUTE BACKBONE [get_nets sys_clk_IBUF]

## Pmod Header JB
set_property -dict { PACKAGE_PIN E15   IOSTANDARD LVCMOS33 } [get_ports { i2c0_sda }]; #IO_L11P_T1_SRCC_15 Sch=jb_p[1]
set_property -dict { PACKAGE_PIN E16   IOSTANDARD LVCMOS33 } [get_ports { i2c0_scl }]; #IO_L11N_T1_SRCC_15 Sch=jb_n[1]
set_property -dict { PACKAGE_PIN D15   IOSTANDARD LVCMOS33 } [get_ports { gpio_14 }]; #IO_L12P_T1_MRCC_15 Sch=jb_p[2]
set_property PULLDOWN true [get_ports { gpio_14 }]; 
set_property -dict { PACKAGE_PIN C15   IOSTANDARD LVCMOS33 } [get_ports { gpio_15 }]; #IO_L12N_T1_MRCC_15 Sch=jb_n[2]
set_property PULLDOWN true [get_ports { gpio_15 }]; 

set_property -dict { PACKAGE_PIN J15   IOSTANDARD LVCMOS33 } [get_ports { external_clk }]; #IO_L24N_T3_RS0_15 Sch=jb_n[4]

## Pmod Header JC
set_property -dict { PACKAGE_PIN U12   IOSTANDARD LVCMOS33 } [get_ports { gptimer0_in }]; #IO_L20P_T3_A08_D24_14 Sch=jc_p[1]
set_property -dict { PACKAGE_PIN V12   IOSTANDARD LVCMOS33 } [get_ports { gptimer0_out }]; #IO_L20N_T3_A07_D23_14 Sch=jc_n[1]
set_property -dict { PACKAGE_PIN V10   IOSTANDARD LVCMOS33 } [get_ports { gptimer1_in }]; #IO_L21P_T3_DQS_14 Sch=jc_p[2]
set_property -dict { PACKAGE_PIN V11   IOSTANDARD LVCMOS33 } [get_ports { gptimer1_out }]; #IO_L21N_T3_DQS_A06_D22_14 Sch=jc_n[2]

## USB-UART Interface
set_property -dict { PACKAGE_PIN D10   IOSTANDARD LVCMOS33 } [get_ports { uart0_SOUT }]; #IO_L19N_T3_VREF_16 Sch=uart_rxd_out
set_property -dict { PACKAGE_PIN A9    IOSTANDARD LVCMOS33 } [get_ports { uart0_SIN }]; #IO_L14N_T2_SRCC_16 Sch=uart_txd_in

## ChipKit Outer Digital Header
set_property -dict { PACKAGE_PIN V15   IOSTANDARD LVCMOS33 } [get_ports { io7_cell  }]; #IO_L16P_T2_CSI_B_14 Sch=ck_io[0]
set_property PULLDOWN true [get_ports { io7_cell }]; 
set_property -dict { PACKAGE_PIN U16   IOSTANDARD LVCMOS33 } [get_ports { io8_cell  }]; #IO_L18P_T2_A12_D28_14 Sch=ck_io[1]
set_property PULLDOWN true [get_ports { io8_cell }]; 
set_property -dict { PACKAGE_PIN P14   IOSTANDARD LVCMOS33 } [get_ports { io9_cell  }]; #IO_L8N_T1_D12_14 Sch=ck_io[2]
set_property PULLDOWN true [get_ports { io9_cell }]; 
set_property -dict { PACKAGE_PIN T11   IOSTANDARD LVCMOS33 } [get_ports { io10_cell  }]; #IO_L19P_T3_A10_D26_14 Sch=ck_io[3]
set_property PULLDOWN true [get_ports { io10_cell }]; 
set_property -dict { PACKAGE_PIN R12   IOSTANDARD LVCMOS33 } [get_ports { gpio_4  }]; #IO_L5P_T0_D06_14 Sch=ck_io[4]
set_property PULLDOWN true [get_ports { gpio_4 }];
set_property -dict { PACKAGE_PIN T14   IOSTANDARD LVCMOS33 } [get_ports { io12_cell  }]; #IO_L14P_T2_SRCC_14 Sch=ck_io[5]
set_property PULLDOWN true [get_ports { io12_cell }]; 
set_property -dict { PACKAGE_PIN T15   IOSTANDARD LVCMOS33 } [get_ports { io13_cell  }]; #IO_L14N_T2_SRCC_14 Sch=ck_io[6]
set_property PULLDOWN true [get_ports { io13_cell }]; 
set_property -dict { PACKAGE_PIN T16   IOSTANDARD LVCMOS33 } [get_ports { gpio_7 }]; #IO_L15N_T2_DQS_DOUT_CSO_B_14 Sch=ck_io[7]
set_property PULLDOWN true [get_ports { gpio_7 }]; 
set_property -dict { PACKAGE_PIN N15   IOSTANDARD LVCMOS33 } [get_ports { gpio_8  }]; #IO_L11P_T1_SRCC_14 Sch=ck_io[8]
set_property PULLDOWN true [get_ports { gpio_8 }]; 
set_property -dict { PACKAGE_PIN M16   IOSTANDARD LVCMOS33 } [get_ports { io16_cell  }]; #IO_L10P_T1_D14_14 Sch=ck_io[9]
set_property PULLDOWN true [get_ports { io16_cell }]; 
set_property -dict { PACKAGE_PIN V17   IOSTANDARD LVCMOS33 } [get_ports { io17_cell }]; #IO_L18N_T2_A11_D27_14 Sch=ck_io[10]
set_property PULLUP true [get_ports { io17_cell }]; 
set_property -dict { PACKAGE_PIN U18   IOSTANDARD LVCMOS33 } [get_ports { io18_cell }]; #IO_L17N_T2_A13_D29_14 Sch=ck_io[11]
 set_property PULLUP true [get_ports { io18_cell }]; 
set_property -dict { PACKAGE_PIN R17   IOSTANDARD LVCMOS33 } [get_ports { io19_cell }]; #IO_L12N_T1_MRCC_14 Sch=ck_io[12]
 set_property PULLUP true [get_ports { io19_cell }]; 
set_property -dict { PACKAGE_PIN P17   IOSTANDARD LVCMOS33 } [get_ports { io20_cell }]; #IO_L12P_T1_MRCC_14 Sch=ck_io[13]
 set_property PULLUP true [get_ports { io20_cell }]; 



## Quad SPI Flash
set_property -dict { PACKAGE_PIN L13   IOSTANDARD LVCMOS33 } [get_ports { spi0_nss }]; #IO_L6P_T0_FCS_B_14 Sch=qspi_cs
set_property -dict { PACKAGE_PIN K17   IOSTANDARD LVCMOS33 } [get_ports { spi0_mosi }]; #IO_L1P_T0_D00_MOSI_14 Sch=qspi_dq[0]
set_property -dict { PACKAGE_PIN K18   IOSTANDARD LVCMOS33 } [get_ports { spi0_miso }]; #IO_L1N_T0_D01_DIN_14 Sch=qspi_dq[1]
#set_property -dict { PACKAGE_PIN L14   IOSTANDARD LVCMOS33 } [get_ports { qspi_dq[2] }]; #IO_L2P_T0_D02_14 Sch=qspi_dq[2]
#set_property -dict { PACKAGE_PIN M14   IOSTANDARD LVCMOS33 } [get_ports { qspi_dq[3] }]; #IO_L2N_T0_D03_14 Sch=qspi_dq[3]

## ChipKit I2C
#set_property -dict { PACKAGE_PIN L18   IOSTANDARD LVCMOS33 } [get_ports { i2c1_scl }]; #IO_L4P_T0_D04_14 Sch=ck_scl
#set_property -dict { PACKAGE_PIN M18   IOSTANDARD LVCMOS33 } [get_ports { i2c1_sda }]; #IO_L4N_T0_D05_14 Sch=ck_sda

set_property -dict { PACKAGE_PIN C2    IOSTANDARD LVCMOS33 } [get_ports { sys_rst }]; #IO_L16P_T2_35 Sch=ck_rst

# SMSC Ethernet PHY
set_property -dict { PACKAGE_PIN D17   IOSTANDARD LVCMOS33 } [get_ports { phy_col }]; #IO_L16N_T2_A27_15 Sch=eth_col
set_property -dict { PACKAGE_PIN G14   IOSTANDARD LVCMOS33 } [get_ports { phy_crs }]; #IO_L15N_T2_DQS_ADV_B_15 Sch=eth_crs
set_property -dict { PACKAGE_PIN F16   IOSTANDARD LVCMOS33 } [get_ports { phy_mdc }]; #IO_L14N_T2_SRCC_15 Sch=eth_mdc
set_property -dict { PACKAGE_PIN K13   IOSTANDARD LVCMOS33 } [get_ports { phy_mdio }]; #IO_L17P_T2_A26_15 Sch=eth_mdio
set_property -dict { PACKAGE_PIN G18   IOSTANDARD LVCMOS33 } [get_ports { phy_ref_clk }]; #IO_L22P_T3_A17_15 Sch=eth_ref_clk
set_property -dict { PACKAGE_PIN C16   IOSTANDARD LVCMOS33 } [get_ports { phy_rst_n }]; #IO_L20P_T3_A20_15 Sch=eth_rstn
set_property -dict { PACKAGE_PIN F15   IOSTANDARD LVCMOS33 } [get_ports { phy_rx_clk }]; #IO_L14P_T2_SRCC_15 Sch=eth_rx_clk
set_property -dict { PACKAGE_PIN G16   IOSTANDARD LVCMOS33 } [get_ports { phy_dv }]; #IO_L13N_T2_MRCC_15 Sch=eth_rx_dv
set_property -dict { PACKAGE_PIN D18   IOSTANDARD LVCMOS33 } [get_ports { phy_rx_data[0] }]; #IO_L21N_T3_DQS_A18_15 Sch=eth_rxd[0]
set_property -dict { PACKAGE_PIN E17   IOSTANDARD LVCMOS33 } [get_ports { phy_rx_data[1] }]; #IO_L16P_T2_A28_15 Sch=eth_rxd[1]
set_property -dict { PACKAGE_PIN E18   IOSTANDARD LVCMOS33 } [get_ports { phy_rx_data[2] }]; #IO_L21P_T3_DQS_15 Sch=eth_rxd[2]
set_property -dict { PACKAGE_PIN G17   IOSTANDARD LVCMOS33 } [get_ports { phy_rx_data[3] }]; #IO_L18N_T2_A23_15 Sch=eth_rxd[3]
set_property -dict { PACKAGE_PIN C17   IOSTANDARD LVCMOS33 } [get_ports { phy_rx_er }]; #IO_L20N_T3_A19_15 Sch=eth_rxerr
set_property -dict { PACKAGE_PIN H16   IOSTANDARD LVCMOS33 } [get_ports { phy_tx_clk }]; #IO_L13P_T2_MRCC_15 Sch=eth_tx_clk
set_property -dict { PACKAGE_PIN H15   IOSTANDARD LVCMOS33 } [get_ports { phy_tx_en }]; #IO_L19N_T3_A21_VREF_15 Sch=eth_tx_en
set_property -dict { PACKAGE_PIN H14   IOSTANDARD LVCMOS33 } [get_ports { phy_tx_data[0] }]; #IO_L15P_T2_DQS_15 Sch=eth_txd[0]
set_property -dict { PACKAGE_PIN J14   IOSTANDARD LVCMOS33 } [get_ports { phy_tx_data[1] }]; #IO_L19P_T3_A22_15 Sch=eth_txd[1]
set_property -dict { PACKAGE_PIN J13   IOSTANDARD LVCMOS33 } [get_ports { phy_tx_data[2] }]; #IO_L17N_T2_A25_15 Sch=eth_txd[2]
set_property -dict { PACKAGE_PIN H17   IOSTANDARD LVCMOS33 } [get_ports { phy_tx_data[3] }]; #IO_L18P_T2_A24_15 Sch=eth_txd[3]

