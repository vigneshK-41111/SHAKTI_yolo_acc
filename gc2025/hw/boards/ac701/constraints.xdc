# Page numbers refer to ug952-ac701-a7-eval-bd.pdf

# Bank  0 : 3.3V
# Bank 12 : 2.5V
# Bank 13 : 1.8V
# Bank 14 : 3.3V
# Bank 15 : 2.5V
# Bank 16 : 2.5V
# Bank 33 : 1.5V
# Bank 34 : 1.5V
# Bank 35 : 1.5V

set_property CLOCK_DEDICATED_ROUTE BACKBONE [get_nets clk_div/inst/clk_in1_clk_divider]
# Lock MMCM to clock region matching sys_clk_p/n (Bank 0 → X1Y1 or X1Y2)
# set_property LOC MMCME2_ADV_X1Y1 [get_cells clk_div/inst/mmcm_adv_inst]


# Quad SPI Flash Memory, page 20
# set_property -dict { PACKAGE_PIN R14 IOSTANDARD LVCMOS  } [get_ports flash_d_i[0]]
# set_property -dict { PACKAGE_PIN R15 IOSTANDARD LVCMOS  } [get_ports flash_d_i[1]]
# set_property -dict { PACKAGE_PIN P14 IOSTANDARD LVCMOS  } [get_ports flash_d_i[2]]
# set_property -dict { PACKAGE_PIN N14 IOSTANDARD LVCMOS  } [get_ports flash_d_i[3]]
# set_property -dict { PACKAGE_PIN P18 IOSTANDARD LVCMOS  } [get_ports qspi_ic_cs_b_i]

# SD Card Interface, page 22
# set_property -dict { PACKAGE_PIN N24 IOSTANDARD LVCMOS  } [get_ports sdio_clk_i]
# set_property -dict { PACKAGE_PIN N23 IOSTANDARD LVCMOS  } [get_ports sdio_cmd_i]
# set_property -dict { PACKAGE_PIN P19 IOSTANDARD LVCMOS  } [get_ports sdio_dat_i[0]]
# set_property -dict { PACKAGE_PIN N19 IOSTANDARD LVCMOS  } [get_ports sdio_dat_i[1]]
# set_property -dict { PACKAGE_PIN P23 IOSTANDARD LVCMOS  } [get_ports sdio_dat_i[2]]
# set_property -dict { PACKAGE_PIN P21 IOSTANDARD LVCMOS  } [get_ports sdio_dat_i[3]]
# set_property -dict { PACKAGE_PIN P24 IOSTANDARD LVCMOS  } [get_ports sdio_sddet_i]
# set_property -dict { PACKAGE_PIN R20 IOSTANDARD LVCMOS  } [get_ports sdio_sdwp_i]

# Clock Generation, page 24
set_property -dict { PACKAGE_PIN P3 IOSTANDARD DIFF_SSTL15 }   [get_ports { sys_clk_n } ]; # sysclk_n_i
set_property -dict { PACKAGE_PIN R3 IOSTANDARD DIFF_SSTL15 }   [get_ports { sys_clk_p } ]; # sysclk_p_i
# set_property PACKAGE_PIN M22  IOSTANDARD LVCMOS  } [get_ports user_clock_n_i]
# set_property PACKAGE_PIN M21  IOSTANDARD LVCMOS  } [get_ports user_clock_p_i]
# set_property PACKAGE_PIN H23  IOSTANDARD LVCMOS  } [get_ports user_sma_clock_n_i]
# set_property PACKAGE_PIN J23  IOSTANDARD LVCMOS  } [get_ports user_sma_clock_p_i]
# set_property PACKAGE_PIN E11  IOSTANDARD LVCMOS  } [get_ports pcie_clk_qo_n_i]
# set_property PACKAGE_PIN F11  IOSTANDARD LVCMOS  } [get_ports pcie_clk_qo_p_i]
# set_property PACKAGE_PIN A24  IOSTANDARD LVCMOS  } [get_ports pcie_mgt_clk_sel_o[0]]
# set_property PACKAGE_PIN C26  IOSTANDARD LVCMOS  } [get_ports pcie_mgt_clk_sel_o[1]]
# set_property PACKAGE_PIN M20  IOSTANDARD LVCMOS  } [get_ports pcie_perst_i]
# set_property PACKAGE_PIN K26  IOSTANDARD LVCMOS  } [get_ports pcie_wake_b_i]
# set_property PACKAGE_PIN D24  IOSTANDARD LVCMOS  } [get_ports rec_clock_c_n_i]
# set_property PACKAGE_PIN D23  IOSTANDARD LVCMOS  } [get_ports rec_clock_c_p_i]
# set_property PACKAGE_PIN M19  IOSTANDARD LVCMOS  } [get_ports si5324_int_alm_b_i]
# set_property PACKAGE_PIN B24  IOSTANDARD LVCMOS  } [get_ports si5324_rst_b_i]

# SFP/SFP+ Connector, page 39
# set_property PACKAGE_PIN R23  IOSTANDARD LVCMOS  } [get_ports sfp_los_i]
# set_property PACKAGE_PIN AB13 IOSTANDARD LVCMOS  } [get_ports sfp_mgt_clk0_n_i]
# set_property PACKAGE_PIN AA13 IOSTANDARD LVCMOS  } [get_ports sfp_mgt_clk0_p_i]
# set_property PACKAGE_PIN AB11 IOSTANDARD LVCMOS  } [get_ports sfp_mgt_clk1_n_i]
# set_property PACKAGE_PIN AA11 IOSTANDARD LVCMOS  } [get_ports sfp_mgt_clk1_p_i]
# set_property PACKAGE_PIN B26  IOSTANDARD LVCMOS  } [get_ports sfp_mgt_clk_sel_o[0]]
# set_property PACKAGE_PIN C24  IOSTANDARD LVCMOS  } [get_ports sfp_mgt_clk_sel_o[1]]
# set_property PACKAGE_PIN R18  IOSTANDARD LVCMOS  } [get_ports sfp_tx_disable_i]

# 10/100/1000 Mb/s Tri-Speed Ethernet PHY, page 41
# set_property PACKAGE_PIN W18  IOSTANDARD LVCMOS  } [get_ports phy_mdc]
# set_property PACKAGE_PIN T14  IOSTANDARD LVCMOS  } [get_ports phy_mdio]
# set_property PACKAGE_PIN V18  IOSTANDARD LVCMOS  } [get_ports phy_rst_n]
# set_property PACKAGE_PIN U21  IOSTANDARD LVCMOS  } [get_ports phy_rx_clk]
# set_property PACKAGE_PIN U14  IOSTANDARD LVCMOS  } [get_ports phy_rx_ctrl_i]
# set_property PACKAGE_PIN U17  IOSTANDARD LVCMOS  } [get_ports phy_rx_data[0]]
# set_property PACKAGE_PIN V17  IOSTANDARD LVCMOS  } [get_ports phy_rx_data[1]]
# set_property PACKAGE_PIN V16  IOSTANDARD LVCMOS  } [get_ports phy_rx_data[2]]
# set_property PACKAGE_PIN V14  IOSTANDARD LVCMOS  } [get_ports phy_rx_data[3]]
# set_property PACKAGE_PIN U22  IOSTANDARD LVCMOS  } [get_ports phy_tx_clk]
# set_property PACKAGE_PIN T15  IOSTANDARD LVCMOS  } [get_ports phy_tx_ctrl_i]
# set_property PACKAGE_PIN U16  IOSTANDARD LVCMOS  } [get_ports phy_tx_data[0]]
# set_property PACKAGE_PIN U15  IOSTANDARD LVCMOS  } [get_ports phy_tx_data[1]]
# set_property PACKAGE_PIN T18  IOSTANDARD LVCMOS  } [get_ports phy_tx_data[2]]
# set_property PACKAGE_PIN T17  IOSTANDARD LVCMOS  } [get_ports phy_tx_data[3]]

# USB-to-UART Bridge, page 43
# set_property -dict { PACKAGE_PIN W19  IOSTANDARD LVCMOS18 } [get_ports usb_uart_cts_i]
# set_property -dict { PACKAGE_PIN V19  IOSTANDARD LVCMOS18 } [get_ports usb_uart_rts_i]
set_property -dict { PACKAGE_PIN U19 IOSTANDARD LVCMOS18 }  [get_ports { uart0_SOUT } ]; # usb_uart_rx_i
set_property -dict { PACKAGE_PIN T19 IOSTANDARD LVCMOS18 }  [get_ports { uart0_SIN } ];  # usb_uart_tx_i

# HDMI Video Output, page 44
# set_property -dict { PACKAGE_PIN W21  IOSTANDARD LVCMOS  } [get_ports hdmi_int_i]
# set_property -dict { PACKAGE_PIN V21  IOSTANDARD LVCMOS  } [get_ports hdmi_r_clk_i]
# set_property -dict { PACKAGE_PIN W24  IOSTANDARD LVCMOS  } [get_ports hdmi_r_d_i[10]]
# set_property -dict { PACKAGE_PIN U26  IOSTANDARD LVCMOS  } [get_ports hdmi_r_d_i[11]]
# set_property -dict { PACKAGE_PIN U25  IOSTANDARD LVCMOS  } [get_ports hdmi_r_d_i[16]]
# set_property -dict { PACKAGE_PIN V24  IOSTANDARD LVCMOS  } [get_ports hdmi_r_d_i[17]]
# set_property -dict { PACKAGE_PIN U20  IOSTANDARD LVCMOS  } [get_ports hdmi_r_d_i[18]]
# set_property -dict { PACKAGE_PIN W23  IOSTANDARD LVCMOS  } [get_ports hdmi_r_d_i[19]]
# set_property -dict { PACKAGE_PIN W20  IOSTANDARD LVCMOS  } [get_ports hdmi_r_d_i[20]]
# set_property -dict { PACKAGE_PIN U24  IOSTANDARD LVCMOS  } [get_ports hdmi_r_d_i[21]]
# set_property -dict { PACKAGE_PIN Y20  IOSTANDARD LVCMOS  } [get_ports hdmi_r_d_i[22]]
# set_property -dict { PACKAGE_PIN V23  IOSTANDARD LVCMOS  } [get_ports hdmi_r_d_i[23]]
# set_property -dict { PACKAGE_PIN AA23 IOSTANDARD LVCMOS  } [get_ports hdmi_r_d_i[28]]
# set_property -dict { PACKAGE_PIN AA25 IOSTANDARD LVCMOS  } [get_ports hdmi_r_d_i[29]]
# set_property -dict { PACKAGE_PIN AB25 IOSTANDARD LVCMOS  } [get_ports hdmi_r_d_i[30]]
# set_property -dict { PACKAGE_PIN AC24 IOSTANDARD LVCMOS  } [get_ports hdmi_r_d_i[31]]
# set_property -dict { PACKAGE_PIN AB24 IOSTANDARD LVCMOS  } [get_ports hdmi_r_d_i[32]]
# set_property -dict { PACKAGE_PIN Y22  IOSTANDARD LVCMOS  } [get_ports hdmi_r_d_i[33]]
# set_property -dict { PACKAGE_PIN Y23  IOSTANDARD LVCMOS  } [get_ports hdmi_r_d_i[34]]
# set_property -dict { PACKAGE_PIN V22  IOSTANDARD LVCMOS  } [get_ports hdmi_r_d_i[35]]
# set_property -dict { PACKAGE_PIN AA24 IOSTANDARD LVCMOS  } [get_ports hdmi_r_d_i[4]]
# set_property -dict { PACKAGE_PIN Y25  IOSTANDARD LVCMOS  } [get_ports hdmi_r_d_i[5]]
# set_property -dict { PACKAGE_PIN Y26  IOSTANDARD LVCMOS  } [get_ports hdmi_r_d_i[6]]
# set_property -dict { PACKAGE_PIN V26  IOSTANDARD LVCMOS  } [get_ports hdmi_r_d_i[7]]
# set_property -dict { PACKAGE_PIN W26  IOSTANDARD LVCMOS  } [get_ports hdmi_r_d_i[8]]
# set_property -dict { PACKAGE_PIN W25  IOSTANDARD LVCMOS  } [get_ports hdmi_r_d_i[9]]
# set_property -dict { PACKAGE_PIN AB26 IOSTANDARD LVCMOS  } [get_ports hdmi_r_de_i]
# set_property -dict { PACKAGE_PIN AA22 IOSTANDARD LVCMOS  } [get_ports hdmi_r_hsync_i]
# set_property -dict { PACKAGE_PIN Y21  IOSTANDARD LVCMOS  } [get_ports hdmi_r_spdif_i]
# set_property -dict { PACKAGE_PIN AC26 IOSTANDARD LVCMOS  } [get_ports hdmi_r_vsync_i]
# set_property -dict { PACKAGE_PIN T20  IOSTANDARD LVCMOS  } [get_ports hdmi_spdif_out_i]

# LCD Character Display, page 47
# set_property -dict { PACKAGE_PIN L25  IOSTANDARD LVCMOS  } [get_ports lcd_db_i[4]]
# set_property -dict { PACKAGE_PIN M24  IOSTANDARD LVCMOS  } [get_ports lcd_db_i[5]]
# set_property -dict { PACKAGE_PIN M25  IOSTANDARD LVCMOS  } [get_ports lcd_db_i[6]]
# set_property -dict { PACKAGE_PIN L22  IOSTANDARD LVCMOS  } [get_ports lcd_db_i[7]]
# set_property -dict { PACKAGE_PIN L20  IOSTANDARD LVCMOS  } [get_ports lcd_e_i]
# set_property -dict { PACKAGE_PIN L23  IOSTANDARD LVCMOS  } [get_ports lcd_rs_i]
# set_property -dict { PACKAGE_PIN L24  IOSTANDARD LVCMOS  } [get_ports lcd_rw_i]

# I2C Bus Switch, page 49
# set_property -dict { PACKAGE_PIN R17  IOSTANDARD LVCMOS  } [get_ports iic_mux_reset_b_i]
# set_property -dict { PACKAGE_PIN N18  IOSTANDARD LVCMOS  } [get_ports iic_scl_main_i]
# set_property -dict { PACKAGE_PIN K25  IOSTANDARD LVCMOS  } [get_ports iic_sda_main_i]

# User I/O, page 51
#gpio_dip_switches ( SW2 )
set_property -dict { PACKAGE_PIN R8   IOSTANDARD LVCMOS15  } [get_ports { gpio_20 } ]; # gpio_dip_sw_i[0]
set_property -dict { PACKAGE_PIN P8   IOSTANDARD LVCMOS15  } [get_ports { gpio_21 } ]; # gpio_dip_sw_i[1]
set_property -dict { PACKAGE_PIN R7   IOSTANDARD LVCMOS15  } [get_ports { gpio_22 } ]; #  gpio_dip_sw_i[2]
set_property -dict { PACKAGE_PIN R6   IOSTANDARD LVCMOS15  } [get_ports { gpio_23 } ]; #  gpio_dip_sw_i[3]

#gpio_leds ( 0 - 4 )
set_property -dict { PACKAGE_PIN M26  IOSTANDARD LVCMOS33  } [get_ports { gpio_16 } ]; #  gpio_led_o[0]
set_property -dict { PACKAGE_PIN T24  IOSTANDARD LVCMOS33  } [get_ports { gpio_17 } ]; #  gpio_led_o[1]
set_property -dict { PACKAGE_PIN T25  IOSTANDARD LVCMOS33  } [get_ports { gpio_18 } ]; #  gpio_led_o[2]
set_property -dict { PACKAGE_PIN R26  IOSTANDARD LVCMOS33  } [get_ports { gpio_19 } ]; #  gpio_led_o[3]

#gpio_switches ( SW3 - SW7 )
set_property -dict { PACKAGE_PIN U6 IOSTANDARD LVCMOS15  } [get_ports { gpio_4 } ]; #  gpio_sw_c_i
set_property -dict { PACKAGE_PIN U5 IOSTANDARD LVCMOS15  } [get_ports { gpio_7 } ]; #  gpio_sw_e_i
set_property -dict { PACKAGE_PIN P6 IOSTANDARD LVCMOS15  } [get_ports { gpio_8 } ]; #  gpio_sw_n_i
set_property -dict { PACKAGE_PIN T5 IOSTANDARD LVCMOS15  } [get_ports { gpio_14 } ]; #  gpio_sw_s_i
set_property -dict { PACKAGE_PIN R5 IOSTANDARD LVCMOS15  } [get_ports { gpio_15 } ]; #  gpio_sw_w_i

#cpu_reset ( SW8 )
set_property -dict { PACKAGE_PIN U4 IOSTANDARD LVCMOS15 }    [get_ports { sys_rst }];  # cpu_reset_i

# set_property -dict { PACKAGE_PIN T7   IOSTANDARD LVCMOS  } [get_ports user_sma_gpio_n_i]
# set_property -dict { PACKAGE_PIN T8   IOSTANDARD LVCMOS  } [get_ports user_sma_gpio_p_i]

#pmods ( J48 )
set_property -dict { PACKAGE_PIN P26 IOSTANDARD LVCMOS33 } [get_ports { spi0_nss } ]; #pmod_i[0]
set_property -dict { PACKAGE_PIN T22 IOSTANDARD LVCMOS33 } [get_ports { spi0_sclk } ]; #pmod_i[1]
set_property -dict { PACKAGE_PIN R22 IOSTANDARD LVCMOS33 } [get_ports { spi0_mosi } ]; #pmod_i[2]
set_property -dict { PACKAGE_PIN T23 IOSTANDARD LVCMOS33 } [get_ports { spi0_miso } ]; #pmod_i[3]


# set_property -dict { PACKAGE_PIN N22  IOSTANDARD LVCMOS  } [get_ports rotary_inca_i]
# set_property -dict { PACKAGE_PIN P20  IOSTANDARD LVCMOS  } [get_ports rotary_incb_i]
# set_property -dict { PACKAGE_PIN N21  IOSTANDARD LVCMOS  } [get_ports rotary_push_i]

# FPGA Mezzanine Card Interface, page 58
# set_property -dict { PACKAGE_PIN C19  IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_clk0_m2c_n_i]
# set_property -dict { PACKAGE_PIN D19  IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_clk0_m2c_p_i]
# set_property -dict { PACKAGE_PIN H22  IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_clk1_m2c_n_i]
# set_property -dict { PACKAGE_PIN H21  IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_clk1_m2c_p_i]
# set_property -dict { PACKAGE_PIN AB19 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_n_i[0]]
# set_property -dict { PACKAGE_PIN AA19 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_p_i[0]]
# set_property -dict { PACKAGE_PIN AC21 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_n_i[1]]
# set_property -dict { PACKAGE_PIN AB21 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_p_i[1]]
# set_property -dict { PACKAGE_PIN AE26 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_n_i[2]]
# set_property -dict { PACKAGE_PIN AE25 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_p_i[2]]
# set_property -dict { PACKAGE_PIN AC23 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_n_i[3]]
# set_property -dict { PACKAGE_PIN AC22 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_p_i[3]]
# set_property -dict { PACKAGE_PIN AF25 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_n_i[4]]
# set_property -dict { PACKAGE_PIN AF24 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_p_i[4]]
# set_property -dict { PACKAGE_PIN AD26 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_n_i[5]]
# set_property -dict { PACKAGE_PIN AD25 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_p_i[5]]
# set_property -dict { PACKAGE_PIN AF23 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_n_i[6]]
# set_property -dict { PACKAGE_PIN AE23 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_p_i[6]]
# set_property -dict { PACKAGE_PIN AD24 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_n_i[7]]
# set_property -dict { PACKAGE_PIN AD23 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_p_i[7]]
# set_property -dict { PACKAGE_PIN AE21 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_n_i[8]]
# set_property -dict { PACKAGE_PIN AD21 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_p_i[8]]
# set_property -dict { PACKAGE_PIN AF20 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_n_i[9]]
# set_property -dict { PACKAGE_PIN AF19 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_p_i[9]]
# set_property -dict { PACKAGE_PIN AF22 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_n_i[10]]
# set_property -dict { PACKAGE_PIN AE22 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_p_i[10]]
# set_property -dict { PACKAGE_PIN AE20 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_n_i[11]]
# set_property -dict { PACKAGE_PIN AD20 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_p_i[11]]
# set_property -dict { PACKAGE_PIN AD19 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_n_i[12]]
# set_property -dict { PACKAGE_PIN AC19 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_p_i[12]]
# set_property -dict { PACKAGE_PIN AD18 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_n_i[13]]
# set_property -dict { PACKAGE_PIN AC18 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_p_i[13]]
# set_property -dict { PACKAGE_PIN AF18 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_n_i[14]]
# set_property -dict { PACKAGE_PIN AE18 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_p_i[14]]
# set_property -dict { PACKAGE_PIN AA18 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_n_i[15]]
# set_property -dict { PACKAGE_PIN Y18  IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_p_i[15]]
# set_property -dict { PACKAGE_PIN AF17 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_n_i[16]]
# set_property -dict { PACKAGE_PIN AE17 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_p_i[16]]
# set_property -dict { PACKAGE_PIN AB20 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_n_i[17]]
# set_property -dict { PACKAGE_PIN AA20 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_p_i[17]]
# set_property -dict { PACKAGE_PIN AB17 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_n_i[18]]
# set_property -dict { PACKAGE_PIN AA17 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_p_i[18]]
# set_property -dict { PACKAGE_PIN AD17 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_n_i[19]]
# set_property -dict { PACKAGE_PIN AC17 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_p_i[19]]
# set_property -dict { PACKAGE_PIN Y17  IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_n_i[20]]
# set_property -dict { PACKAGE_PIN Y16  IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_p_i[20]]
# set_property -dict { PACKAGE_PIN AC16 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_n_i[21]]
# set_property -dict { PACKAGE_PIN AB16 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_p_i[21]]
# set_property -dict { PACKAGE_PIN AA15 IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_n_i[22]]
# set_property -dict { PACKAGE_PIN Y15  IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_p_i[22]]
# set_property -dict { PACKAGE_PIN W15  IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_n_i[23]]
# set_property -dict { PACKAGE_PIN W14  IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_ha_p_i[23]]
# set_property -dict { PACKAGE_PIN C18  IOSTANDARD LVCMOS33 } [get_ports { i2c0_sda } ]; # fmc1_hpc_la_n_i[0]
# set_property -dict { PACKAGE_PIN D18  IOSTANDARD LVCMOS33 } [get_ports { i2c0_scl } ]; # fmc1_hpc_la_p_i[0]
# set_property -dict { PACKAGE_PIN E18  IOSTANDARD LVCMOS33 } [get_ports { io7_cell } ]; # fmc1_hpc_la_n_i[1]
# set_property -dict { PACKAGE_PIN E17  IOSTANDARD LVCMOS33 } [get_ports { io8_cell } ]; # fmc1_hpc_la_p_i[1]
set_property -dict { PACKAGE_PIN H15  IOSTANDARD LVCMOS33 } [get_ports { io7_cell } ]; # fmc1_hpc_la_n_i[2] 
set_property -dict { PACKAGE_PIN H14  IOSTANDARD LVCMOS33 } [get_ports { io8_cell } ]; # fmc1_hpc_la_p_i[2] 
set_property -dict { PACKAGE_PIN F17  IOSTANDARD LVCMOS33 } [get_ports { io9_cell } ]; # fmc1_hpc_la_n_i[3] 
set_property -dict { PACKAGE_PIN G17  IOSTANDARD LVCMOS33 } [get_ports { io10_cell } ]; #fmc1_hpc_la_p_i[3] 
set_property -dict { PACKAGE_PIN F19  IOSTANDARD LVCMOS33 } [get_ports { io12_cell } ]; #fmc1_hpc_la_n_i[4] 
set_property -dict { PACKAGE_PIN F18  IOSTANDARD LVCMOS33 } [get_ports { io13_cell } ]; #fmc1_hpc_la_p_i[4] 
set_property -dict { PACKAGE_PIN F15  IOSTANDARD LVCMOS33 } [get_ports { io16_cell } ]; #fmc1_hpc_la_n_i[5] 
set_property -dict { PACKAGE_PIN G15  IOSTANDARD LVCMOS33 } [get_ports { io17_cell } ]; #fmc1_hpc_la_p_i[5] 
set_property -dict { PACKAGE_PIN F20  IOSTANDARD LVCMOS33 } [get_ports { io18_cell } ]; #fmc1_hpc_la_n_i[6] 
set_property -dict { PACKAGE_PIN G19  IOSTANDARD LVCMOS33 } [get_ports { io19_cell } ]; #fmc1_hpc_la_p_i[6]
set_property -dict { PACKAGE_PIN G16  IOSTANDARD LVCMOS33 } [get_ports { io20_cell } ]; #fmc1_hpc_la_n_i[7]
set_property -dict { PACKAGE_PIN H16  IOSTANDARD LVCMOS33 } [get_ports { i2c0_sda } ]; #fmc1_hpc_la_p_i[7]
set_property -dict { PACKAGE_PIN B17  IOSTANDARD LVCMOS33 } [get_ports { i2c0_scl } ]; #fmc1_hpc_la_n_i[8]
set_property -dict { PACKAGE_PIN C17  IOSTANDARD LVCMOS33 } [get_ports { i2c1_sda } ]; #fmc1_hpc_la_p_i[8]
set_property -dict { PACKAGE_PIN D16  IOSTANDARD LVCMOS33 } [get_ports { i2c1_scl } ]; #fmc1_hpc_la_n_i[9]
set_property -dict { PACKAGE_PIN E16  IOSTANDARD LVCMOS33 } [get_ports { external_clk } ]; #fmc1_hpc_la_p_i[9]
set_property -dict { PACKAGE_PIN A18  IOSTANDARD LVCMOS33 } [get_ports { gptimer0_in } ]; #fmc1_hpc_la_n_i[10]
set_property -dict { PACKAGE_PIN A17  IOSTANDARD LVCMOS33 } [get_ports { gptimer0_out } ]; #fmc1_hpc_la_p_i[10]
set_property -dict { PACKAGE_PIN A19  IOSTANDARD LVCMOS33 } [get_ports { gptimer1_in } ]; #fmc1_hpc_la_n_i[11]
set_property -dict { PACKAGE_PIN B19  IOSTANDARD LVCMOS33 } [get_ports { gptimer1_out } ]; #fmc1_hpc_la_p_i[11]
set_property -dict { PACKAGE_PIN D20  IOSTANDARD LVCMOS33 } [get_ports { gptimer2_in } ]; #fmc1_hpc_la_n_i[12]
set_property -dict { PACKAGE_PIN E20  IOSTANDARD LVCMOS33 } [get_ports { gptimer2_out } ]; #fmc1_hpc_la_p_i[12]
set_property -dict { PACKAGE_PIN A20  IOSTANDARD LVCMOS33 } [get_ports { gptimer3_in } ]; #fmc1_hpc_la_n_i[13]
set_property -dict { PACKAGE_PIN B20  IOSTANDARD LVCMOS33 } [get_ports { gptimer3_out } ]; #fmc1_hpc_la_p_i[13]]
set_property -dict { PACKAGE_PIN B21  IOSTANDARD LVCMOS33 } [get_ports { gpio_22 } ]; #fmc1_hpc_la_n_i[14]]
set_property -dict { PACKAGE_PIN C21  IOSTANDARD LVCMOS33 } [get_ports { gpio_23 } ]; #fmc1_hpc_la_p_i[14]]
set_property -dict { PACKAGE_PIN A22  IOSTANDARD LVCMOS33 } [get_ports { gpio_24 } ]; #fmc1_hpc_la_n_i[15]]
set_property -dict { PACKAGE_PIN B22  IOSTANDARD LVCMOS33 } [get_ports { gpio_25 } ]; # fmc1_hpc_la_p_i[15]]
set_property -dict { PACKAGE_PIN D21  IOSTANDARD LVCMOS33 } [get_ports { gpio_26 } ]; # fmc1_hpc_la_n_i[16]]
set_property -dict { PACKAGE_PIN E21  IOSTANDARD LVCMOS33 } [get_ports { gpio_27 } ]; # fmc1_hpc_la_p_i[16]]
set_property -dict { PACKAGE_PIN J21  IOSTANDARD LVCMOS33 } [get_ports { gpio_28 } ]; # fmc1_hpc_la_n_i[17]]
set_property -dict { PACKAGE_PIN K21  IOSTANDARD LVCMOS33 } [get_ports { gpio_29 } ]; # fmc1_hpc_la_p_i[17]]
set_property -dict { PACKAGE_PIN G21  IOSTANDARD LVCMOS33 } [get_ports { gpio_30 } ]; # fmc1_hpc_la_n_i[18]]
set_property -dict { PACKAGE_PIN G20  IOSTANDARD LVCMOS33 } [get_ports { gpio_31 } ]; # fmc1_hpc_la_p_i[18]]
# set_property -dict { PACKAGE_PIN L14  IOSTANDARD LVCMOS33 } [get_ports { gpio_23 } ]; # fmc1_hpc_la_n_i[19]]
# set_property -dict { PACKAGE_PIN M14  IOSTANDARD LVCMOS33 } [get_ports { gpio_24 } ]; # fmc1_hpc_la_p_i[19]]
# set_property -dict { PACKAGE_PIN M17  IOSTANDARD LVCMOS33 } [get_ports { gpio_25 } ]; # fmc1_hpc_la_n_i[20]]
# set_property -dict { PACKAGE_PIN M16  IOSTANDARD LVCMOS33 } [get_ports { gpio_26 } ]; # fmc1_hpc_la_p_i[20]]
# set_property -dict { PACKAGE_PIN H19  IOSTANDARD LVCMOS33 } [get_ports { gpio_27 } ]; # fmc1_hpc_la_n_i[21]]
# set_property -dict { PACKAGE_PIN J19  IOSTANDARD LVCMOS33 } [get_ports { gpio_28 } ]; # fmc1_hpc_la_p_i[21]]
# set_property -dict { PACKAGE_PIN L18  IOSTANDARD LVCMOS33 } [get_ports { gpio_29 } ]; # fmc1_hpc_la_n_i[22]]
# set_property -dict { PACKAGE_PIN L17  IOSTANDARD LVCMOS33 } [get_ports { gpio_30 } ]; # fmc1_hpc_la_p_i[22]]
# set_property -dict { PACKAGE_PIN J20  IOSTANDARD LVCMOS33 } [get_ports { gpio_31 } ]; # fmc1_hpc_la_n_i[23]]
# set_property -dict { PACKAGE_PIN K20  IOSTANDARD LVCMOS33 } [get_ports { i2c1_sda } ]; # fmc1_hpc_la_p_i[23]]
# set_property -dict { PACKAGE_PIN H18  IOSTANDARD LVCMOS33 } [get_ports { i2c1_scl } ]; #fmc1_hpc_la_n_i[24]]
# set_property -dict { PACKAGE_PIN J18  IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_la_p_i[24]]
# set_property -dict { PACKAGE_PIN F22  IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_la_n_i[25]]
# set_property -dict { PACKAGE_PIN G22  IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_la_p_i[25]]
# set_property -dict { PACKAGE_PIN H24  IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_la_n_i[26]]
# set_property -dict { PACKAGE_PIN J24  IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_la_p_i[26]]
# set_property -dict { PACKAGE_PIN E23  IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_la_n_i[27]]
# set_property -dict { PACKAGE_PIN F23  IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_la_p_i[27]]
# set_property -dict { PACKAGE_PIN K23  IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_la_n_i[28]]
# set_property -dict { PACKAGE_PIN K22  IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_la_p_i[28]]
# set_property -dict { PACKAGE_PIN F24  IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_la_n_i[29]]
# set_property -dict { PACKAGE_PIN G24  IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_la_p_i[29]]
# set_property -dict { PACKAGE_PIN D25  IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_la_n_i[30]]
# set_property -dict { PACKAGE_PIN E25  IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_la_p_i[30]]
# set_property -dict { PACKAGE_PIN D26  IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_la_n_i[31]]
# set_property -dict { PACKAGE_PIN E26  IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_la_p_i[31]]
# set_property -dict { PACKAGE_PIN G26  IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_la_n_i[32]]
# set_property -dict { PACKAGE_PIN H26  IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_la_p_i[32]]
# set_property -dict { PACKAGE_PIN F25  IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_la_n_i[33]]
# set_property -dict { PACKAGE_PIN G25  IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_la_p_i[33]]
# set_property -dict { PACKAGE_PIN N17  IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_pg_m2c_i]
# set_property -dict { PACKAGE_PIN N16  IOSTANDARD LVCMOS33 } [get_ports fmc1_hpc_prsnt_m2c_b_i]
# set_property -dict { PACKAGE_PIN R16  IOSTANDARD LVCMOS33 } [get_ports fmc_vadj_on_b_i]
# set_property -dict { PACKAGE_PIN P15  IOSTANDARD LVCMOS33 } [get_ports ctrl2_pwrgood_i]

# Power Management, page 62
# set_property -dict { PACKAGE_PIN N26  IOSTANDARD LVCMOS  } [get_ports pmbus_alert_i]
# set_property -dict { PACKAGE_PIN R21  IOSTANDARD LVCMOS  } [get_ports pmbus_clk_io]
# set_property -dict { PACKAGE_PIN P25  IOSTANDARD LVCMOS  } [get_ports pmbus_ctrl_i]
# set_property -dict { PACKAGE_PIN R25  IOSTANDARD LVCMOS  } [get_ports pmbus_data_io]

# Cooling Fan Control, page 67
# set_property -dict { PACKAGE_PIN J26  IOSTANDARD LVCMOS  } [get_ports sm_fan_pwm_i]
# set_property -dict { PACKAGE_PIN J25  IOSTANDARD LVCMOS  } [get_ports sm_fan_tach_i]

# XADC Power System Measurement, page 72
# set_property -dict { PACKAGE_PIN K17  IOSTANDARD LVCMOS  } [get_ports xadc_ad1_r_n_i]
# set_property -dict { PACKAGE_PIN K16  IOSTANDARD LVCMOS  } [get_ports xadc_ad1_r_p_i]
# set_property -dict { PACKAGE_PIN L15  IOSTANDARD LVCMOS  } [get_ports xadc_ad9_r_n_i]
# set_property -dict { PACKAGE_PIN M15  IOSTANDARD LVCMOS  } [get_ports xadc_ad9_r_p_i]
# set_property -dict { PACKAGE_PIN H17  IOSTANDARD LVCMOS  } [get_ports xadc_gpio_i[0]]
# set_property -dict { PACKAGE_PIN E22  IOSTANDARD LVCMOS  } [get_ports xadc_gpio_i[1]]
# set_property -dict { PACKAGE_PIN K18  IOSTANDARD LVCMOS  } [get_ports xadc_gpio_i[2]]
# set_property -dict { PACKAGE_PIN L19  IOSTANDARD LVCMOS  } [get_ports xadc_gpio_i[3]]
# set_property -dict { PACKAGE_PIN B25  IOSTANDARD LVCMOS  } [get_ports xadc_mux_addr_i[0]]
# set_property -dict { PACKAGE_PIN A25  IOSTANDARD LVCMOS  } [get_ports xadc_mux_addr_i[1]]
# set_property -dict { PACKAGE_PIN A23  IOSTANDARD LVCMOS  } [get_ports xadc_mux_addr_i[2]]
# set_property -dict { PACKAGE_PIN J16  IOSTANDARD LVCMOS  } [get_ports xadc_vaux0_r_n_i]
# set_property -dict { PACKAGE_PIN K15  IOSTANDARD LVCMOS  } [get_ports xadc_vaux0_r_p_i]
# set_property -dict { PACKAGE_PIN J15  IOSTANDARD LVCMOS  } [get_ports xadc_vaux8_r_n_i]
# set_property -dict { PACKAGE_PIN J14  IOSTANDARD LVCMOS  } [get_ports xadc_vaux8_r_p_i]

# CONFIG
# set_property BITSTREAM.GENERAL.COMPRESS        FALSE [current_design]
# set_property BITSTREAM.CONFIG.SPI_BUSWIDTH     4     [current_design]
# set_property BITSTREAM.CONFIG.EXTMASTERCCLK_EN div-1 [current_design]
# set_property BITSTREAM.CONFIG.SPI_FALL_EDGE    YES   [current_design]
# set_property CFGBVS                            VCCO  [current_design]
# set_property CONFIG_VOLTAGE                    3.3   [current_design]
