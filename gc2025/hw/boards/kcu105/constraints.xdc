## This file is a general .xdc for the KCU105 Rev1.0 XDC 02/10/2018
## To use it in a project:
## - uncomment the lines corresponding to used pins
## - rename the used ports (in each line, after get_ports) according to the top level signal names in the project

set_property CLOCK_DEDICATED_ROUTE BACKBONE [get_nets sys_clk_IBUF]
set_property CLOCK_DEDICATED_ROUTE FALSE [get_nets pin_tck_IBUF]
set_property CLOCK_DEDICATED_ROUTE FALSE [get_nets external_clk]
set_property UNAVAILABLE_DURING_CALIBRATION TRUE [get_ports pin_tdi]

## Clock Wizard Input Clock
set_property PACKAGE_PIN F10       [get_ports "sys_clk_n"] ;# Bank  68 VCCO - VADJ_FMC - IO_L11N_T1U_N9_GC_68
set_property IOSTANDARD  LVDS     [get_ports "sys_clk_n"] ;# Bank  68 VCCO - VADJ_FMC - IO_L11N_T1U_N9_GC_68
set_property PACKAGE_PIN G10       [get_ports "sys_clk_p"] ;# Bank  68 VCCO - VADJ_FMC - IO_L11P_T1U_N8_GC_68
set_property IOSTANDARD  LVDS     [get_ports "sys_clk_p"] ;# Bank  68 VCCO - VADJ_FMC - IO_L11P_T1U_N8_GC_68

## CPU reset
set_property PACKAGE_PIN AN8      [get_ports "sys_rst" ] ;# Bank  68 VCCO - VADJ_FMC - IO_T2U_N12_68
set_property IOSTANDARD  LVCMOS18 [get_ports "sys_rst" ] ;# Bank  68 VCCO - VADJ_FMC - IO_T2U_N12_68


## PMOD0
#0
set_property PACKAGE_PIN AK25     [get_ports "pin_tck"] ;# Bank  28 VCCO - VADJ_FMC - IO_T3U_N12_28
set_property IOSTANDARD  LVCMOS12 [get_ports "pin_tck"] ;# Bank  28 VCCO - VADJ_FMC - IO_T3U_N12_28
#1
set_property PACKAGE_PIN AN21     [get_ports "pin_trst"] ;# Bank  28 VCCO - VADJ_FMC - IO_L23N_T3U_N9_28
set_property IOSTANDARD  LVCMOS12 [get_ports "pin_trst"] ;# Bank  28 VCCO - VADJ_FMC - IO_L23N_T3U_N9_28
#2
set_property PACKAGE_PIN AH18     [get_ports "pin_tdi"] ;# Bank  28 VCCO - VADJ_FMC - IO_T2U_N12_28
set_property IOSTANDARD  LVCMOS12 [get_ports "pin_tdi"] ;# Bank  28 VCCO - VADJ_FMC - IO_T2U_N12_28
#3
set_property PACKAGE_PIN AM19     [get_ports "pin_tms"] ;# Bank  28 VCCO - VADJ_FMC - IO_T1U_N12_28
set_property IOSTANDARD  LVCMOS12 [get_ports "pin_tms"] ;# Bank  28 VCCO - VADJ_FMC - IO_T1U_N12_28
#4
set_property PACKAGE_PIN AE26      [get_ports "pin_tdo"] ;# Bank  28 VCCO - VADJ_FMC - IO_L2N_T0L_N3_28
set_property IOSTANDARD  LVCMOS12 [get_ports "pin_tdo"] ;# Bank  28 VCCO - VADJ_FMC - IO_L2N_T0L_N3_28
##5
#set_property PACKAGE_PIN AF25      [get_ports "i2c0_sda"] ;# Bank  28 VCCO - VADJ_FMC - IO_L2P_T0L_N2_28
#set_property IOSTANDARD  LVCMOS12 [get_ports "i2c0_sda"] ;# Bank  28 VCCO - VADJ_FMC - IO_L2P_T0L_N2_28
##6
#set_property PACKAGE_PIN AE21      [get_ports "i2c0_scl"] ;# Bank  28 VCCO - VADJ_FMC - IO_L1N_T0L_N1_DBC_28
#set_property IOSTANDARD  LVCMOS12 [get_ports "i2c0_scl"] ;# Bank  28 VCCO - VADJ_FMC - IO_L1N_T0L_N1_DBC_28
#7
#set_property PACKAGE_PIN AM17     [get_ports "external_clk"] ;# Bank  68 VCCO - VADJ_FMC - IO_T1U_N12_68
#set_property IOSTANDARD  LVCMOS12 [get_ports "external_clk"] ;# Bank  68 VCCO - VADJ_FMC - IO_T1U_N12_68

## PMOD1 
##0
#set_property PACKAGE_PIN AL14      [get_ports "gptimer0_in"] ;# Bank  66 VCCO - VCC1V2   - IO_L4N_T0U_N7_DBC_AD7N_66
#set_property IOSTANDARD  LVCMOS12 [get_ports "gptimer0_in"] ;# Bank  66 VCCO - VCC1V2   - IO_L4N_T0U_N7_DBC_AD7N_66
##1
#set_property PACKAGE_PIN AM14      [get_ports "gptimer0_out"] ;# Bank  66 VCCO - VCC1V2   - IO_L4P_T0U_N6_DBC_AD7P_66
#set_property IOSTANDARD  LVCMOS12 [get_ports "gptimer0_out"] ;# Bank  66 VCCO - VCC1V2   - IO_L4P_T0U_N6_DBC_AD7P_66
##2
#set_property PACKAGE_PIN AP16     [get_ports "gptimer1_in"] ;# Bank  66 VCCO - VCC1V2   - IO_L3N_T0L_N5_AD15N_66
#set_property IOSTANDARD  LVCMOS12 [get_ports "gptimer1_in"] ;# Bank  66 VCCO - VCC1V2   - IO_L3N_T0L_N5_AD15N_66
##3
#set_property PACKAGE_PIN AP15     [get_ports "gptimer1_out"] ;# Bank  66 VCCO - VCC1V2   - IO_L3P_T0L_N4_AD15P_66
#set_property IOSTANDARD  LVCMOS12 [get_ports "gptimer1_out"] ;# Bank  66 VCCO - VCC1V2   - IO_L3P_T0L_N4_AD15P_66
# #4
# set_property PACKAGE_PIN AM16      [get_ports "spi0_nss"] ;# Bank  66 VCCO - VCC1V2   - IO_L2N_T0L_N3_66
# set_property IOSTANDARD  LVCMOS12 [get_ports "spi0_nss"] ;# Bank  66 VCCO - VCC1V2   - IO_L2N_T0L_N3_66
# #5
# set_property PACKAGE_PIN AM15     [get_ports "spi0_mosi"] ;# Bank  66 VCCO - VCC1V2   - IO_L2P_T0L_N2_66
# set_property IOSTANDARD  LVCMOS12 [get_ports "spi0_mosi"] ;# Bank  66 VCCO - VCC1V2   - IO_L2P_T0L_N2_66
# #6
# set_property PACKAGE_PIN AN18     [get_ports "spi0_miso"] ;# Bank  66 VCCO - VCC1V2   - IO_L1N_T0L_N1_DBC_66
# set_property IOSTANDARD  LVCMOS12 [get_ports "spi0_miso"] ;# Bank  66 VCCO - VCC1V2   - IO_L1N_T0L_N1_DBC_66
# #7
# set_property PACKAGE_PIN AN17     [get_ports "spi0_sclk"] ;# Bank  66 VCCO - VCC1V2   - IO_L1P_T0L_N0_DBC_66
# set_property IOSTANDARD  LVCMOS12 [get_ports "spi0_sclk"] ;# Bank  66 VCCO - VCC1V2   - IO_L1P_T0L_N0_DBC_66

### UART
set_property PACKAGE_PIN G25      [get_ports "uart0_SIN"] ;# Bank  64 VCCO - VCC1V2   - IO_L13N_T2L_N1_GC_QBC_64
set_property IOSTANDARD  LVCMOS18  [get_ports "uart0_SIN"] ;# Bank  64 VCCO - VCC1V2   - IO_L13N_T2L_N1_GC_QBC_64
set_property PACKAGE_PIN K26      [get_ports "uart0_SOUT"] ;# Bank  64 VCCO - VCC1V2   - IO_T1U_N12_64
set_property IOSTANDARD  LVCMOS18  [get_ports "uart0_SOUT"] ;# Bank  64 VCCO - VCC1V2   - IO_T1U_N12_64


##DDR4 Interface
set_property PACKAGE_PIN AH14      [get_ports "c0_ddr4_act_n"] ;

set_property PACKAGE_PIN AE17      [get_ports "c0_ddr4_adr[0]"] ;
set_property PACKAGE_PIN AF15      [get_ports "c0_ddr4_adr[10]"] ;
set_property PACKAGE_PIN AD19      [get_ports "c0_ddr4_adr[11]"] ;
set_property PACKAGE_PIN AJ14      [get_ports "c0_ddr4_adr[12]"] ;
set_property PACKAGE_PIN AG19      [get_ports "c0_ddr4_adr[13]"] ;
set_property PACKAGE_PIN AD16      [get_ports "c0_ddr4_adr[14]"] ;
set_property PACKAGE_PIN AG14      [get_ports "c0_ddr4_adr[15]"] ;
set_property PACKAGE_PIN AF14      [get_ports "c0_ddr4_adr[16]"] ;
set_property PACKAGE_PIN AH17      [get_ports "c0_ddr4_adr[1]"] ;
set_property PACKAGE_PIN AE18      [get_ports "c0_ddr4_adr[2]"] ;
set_property PACKAGE_PIN AJ15      [get_ports "c0_ddr4_adr[3]"] ;
set_property PACKAGE_PIN AG16      [get_ports "c0_ddr4_adr[4]"] ;
set_property PACKAGE_PIN AL17      [get_ports "c0_ddr4_adr[5]"] ;
set_property PACKAGE_PIN AK18      [get_ports "c0_ddr4_adr[6]"] ;
set_property PACKAGE_PIN AG17      [get_ports "c0_ddr4_adr[7]"] ;
set_property PACKAGE_PIN AF18      [get_ports "c0_ddr4_adr[8]"] ;
set_property PACKAGE_PIN AH19      [get_ports "c0_ddr4_adr[9]"] ;

set_property PACKAGE_PIN AF17      [get_ports "c0_ddr4_ba[0]"] ;
set_property PACKAGE_PIN AL15      [get_ports "c0_ddr4_ba[1]"] ;

set_property PACKAGE_PIN AG15      [get_ports "c0_ddr4_bg[0]"] ;
set_property PACKAGE_PIN AE15      [get_ports "c0_ddr4_ck_c[0]"] ;
set_property PACKAGE_PIN AE16      [get_ports "c0_ddr4_ck_t[0]"] ;
set_property PACKAGE_PIN AD15      [get_ports "c0_ddr4_cke[0]"] ;
set_property PACKAGE_PIN AL19      [get_ports "c0_ddr4_cs_n[0]"] ;

set_property PACKAGE_PIN AD21      [get_ports "c0_ddr4_dm_dbi_n[0]"] ;
set_property PACKAGE_PIN AE25      [get_ports "c0_ddr4_dm_dbi_n[1]"] ;
set_property PACKAGE_PIN AJ21      [get_ports "c0_ddr4_dm_dbi_n[2]"] ;
set_property PACKAGE_PIN AM21      [get_ports "c0_ddr4_dm_dbi_n[3]"] ;
set_property PACKAGE_PIN AH26      [get_ports "c0_ddr4_dm_dbi_n[4]"] ;
set_property PACKAGE_PIN AN26      [get_ports "c0_ddr4_dm_dbi_n[5]"] ;
set_property PACKAGE_PIN AJ29      [get_ports "c0_ddr4_dm_dbi_n[6]"] ;
set_property PACKAGE_PIN AL32      [get_ports "c0_ddr4_dm_dbi_n[7]"] ;

# DDR4 Data (DQ) Pins - KCU105
set_property PACKAGE_PIN AE23      [get_ports "c0_ddr4_dq[0]"] ; # Bank 44
set_property PACKAGE_PIN AG20      [get_ports "c0_ddr4_dq[1]"] ; # Bank 44
set_property PACKAGE_PIN AF22      [get_ports "c0_ddr4_dq[2]"] ; # Bank 44
set_property PACKAGE_PIN AF20      [get_ports "c0_ddr4_dq[3]"] ; # Bank 44
set_property PACKAGE_PIN AE22      [get_ports "c0_ddr4_dq[4]"] ; # Bank 44
set_property PACKAGE_PIN AD20      [get_ports "c0_ddr4_dq[5]"] ; # Bank 44
set_property PACKAGE_PIN AG22      [get_ports "c0_ddr4_dq[6]"] ; # Bank 44
set_property PACKAGE_PIN AE20      [get_ports "c0_ddr4_dq[7]"] ; # Bank 44
set_property PACKAGE_PIN AJ24      [get_ports "c0_ddr4_dq[8]"] ; # Bank 44
set_property PACKAGE_PIN AG24      [get_ports "c0_ddr4_dq[9]"] ; # Bank 44
set_property PACKAGE_PIN AJ23      [get_ports "c0_ddr4_dq[10]"] ; # Bank 44
set_property PACKAGE_PIN AF23      [get_ports "c0_ddr4_dq[11]"] ; # Bank 44
set_property PACKAGE_PIN AH23      [get_ports "c0_ddr4_dq[12]"] ; # Bank 44
set_property PACKAGE_PIN AF24      [get_ports "c0_ddr4_dq[13]"] ; # Bank 44
set_property PACKAGE_PIN AH22      [get_ports "c0_ddr4_dq[14]"] ; # Bank 44
set_property PACKAGE_PIN AG25      [get_ports "c0_ddr4_dq[15]"] ; # Bank 44
set_property PACKAGE_PIN AL22      [get_ports "c0_ddr4_dq[16]"] ; # Bank 44
set_property PACKAGE_PIN AL25      [get_ports "c0_ddr4_dq[17]"] ; # Bank 44
set_property PACKAGE_PIN AM20      [get_ports "c0_ddr4_dq[18]"] ; # Bank 44
set_property PACKAGE_PIN AK23      [get_ports "c0_ddr4_dq[19]"] ; # Bank 44
set_property PACKAGE_PIN AK22      [get_ports "c0_ddr4_dq[20]"] ; # Bank 44
set_property PACKAGE_PIN AL24      [get_ports "c0_ddr4_dq[21]"] ; # Bank 44
set_property PACKAGE_PIN AL20      [get_ports "c0_ddr4_dq[22]"] ; # Bank 44
set_property PACKAGE_PIN AL23      [get_ports "c0_ddr4_dq[23]"] ; # Bank 44
set_property PACKAGE_PIN AM24      [get_ports "c0_ddr4_dq[24]"] ; # Bank 44
set_property PACKAGE_PIN AN23      [get_ports "c0_ddr4_dq[25]"] ; # Bank 44
set_property PACKAGE_PIN AN24      [get_ports "c0_ddr4_dq[26]"] ; # Bank 44
set_property PACKAGE_PIN AP23      [get_ports "c0_ddr4_dq[27]"] ; # Bank 44
set_property PACKAGE_PIN AP25      [get_ports "c0_ddr4_dq[28]"] ; # Bank 44
set_property PACKAGE_PIN AN22      [get_ports "c0_ddr4_dq[29]"] ; # Bank 44
set_property PACKAGE_PIN AP24      [get_ports "c0_ddr4_dq[30]"] ; # Bank 44
set_property PACKAGE_PIN AM22      [get_ports "c0_ddr4_dq[31]"] ; # Bank 44
set_property PACKAGE_PIN AH28      [get_ports "c0_ddr4_dq[32]"] ; # Bank 46
set_property PACKAGE_PIN AK26      [get_ports "c0_ddr4_dq[33]"] ; # Bank 46
set_property PACKAGE_PIN AK28      [get_ports "c0_ddr4_dq[34]"] ; # Bank 46
set_property PACKAGE_PIN AM27      [get_ports "c0_ddr4_dq[35]"] ; # Bank 46
set_property PACKAGE_PIN AJ28      [get_ports "c0_ddr4_dq[36]"] ; # Bank 46
set_property PACKAGE_PIN AH27      [get_ports "c0_ddr4_dq[37]"] ; # Bank 46
set_property PACKAGE_PIN AK27      [get_ports "c0_ddr4_dq[38]"] ; # Bank 46
set_property PACKAGE_PIN AM26      [get_ports "c0_ddr4_dq[39]"] ; # Bank 46
set_property PACKAGE_PIN AL30      [get_ports "c0_ddr4_dq[40]"] ; # Bank 46
set_property PACKAGE_PIN AP29      [get_ports "c0_ddr4_dq[41]"] ; # Bank 46
set_property PACKAGE_PIN AM30      [get_ports "c0_ddr4_dq[42]"] ; # Bank 46
set_property PACKAGE_PIN AN28      [get_ports "c0_ddr4_dq[43]"] ; # Bank 46
set_property PACKAGE_PIN AL29      [get_ports "c0_ddr4_dq[44]"] ; # Bank 46
set_property PACKAGE_PIN AP28      [get_ports "c0_ddr4_dq[45]"] ; # Bank 46
set_property PACKAGE_PIN AM29      [get_ports "c0_ddr4_dq[46]"] ; # Bank 46
set_property PACKAGE_PIN AN27      [get_ports "c0_ddr4_dq[47]"] ; # Bank 46
set_property PACKAGE_PIN AH31      [get_ports "c0_ddr4_dq[48]"] ; # Bank 46
set_property PACKAGE_PIN AH32      [get_ports "c0_ddr4_dq[49]"] ; # Bank 46
set_property PACKAGE_PIN AJ34      [get_ports "c0_ddr4_dq[50]"] ; # Bank 46
set_property PACKAGE_PIN AK31      [get_ports "c0_ddr4_dq[51]"] ; # Bank 46
set_property PACKAGE_PIN AJ31      [get_ports "c0_ddr4_dq[52]"] ; # Bank 46
set_property PACKAGE_PIN AJ30      [get_ports "c0_ddr4_dq[53]"] ; # Bank 46
set_property PACKAGE_PIN AH34      [get_ports "c0_ddr4_dq[54]"] ; # Bank 46
set_property PACKAGE_PIN AK32      [get_ports "c0_ddr4_dq[55]"] ; # Bank 46
set_property PACKAGE_PIN AN33      [get_ports "c0_ddr4_dq[56]"] ; # Bank 46
set_property PACKAGE_PIN AP33      [get_ports "c0_ddr4_dq[57]"] ; # Bank 46
set_property PACKAGE_PIN AM34      [get_ports "c0_ddr4_dq[58]"] ; # Bank 46
set_property PACKAGE_PIN AP31      [get_ports "c0_ddr4_dq[59]"] ; # Bank 46
set_property PACKAGE_PIN AM32      [get_ports "c0_ddr4_dq[60]"] ; # Bank 46
set_property PACKAGE_PIN AN31      [get_ports "c0_ddr4_dq[61]"] ; # Bank 46
set_property PACKAGE_PIN AL34      [get_ports "c0_ddr4_dq[62]"] ; # Bank 46
set_property PACKAGE_PIN AN32      [get_ports "c0_ddr4_dq[63]"] ; # Bank 46

# DDR4 DQS Complement Pins - KCU105
set_property PACKAGE_PIN AH21      [get_ports "c0_ddr4_dqs_c[0]"] ; # Bank 44
set_property PACKAGE_PIN AJ25      [get_ports "c0_ddr4_dqs_c[1]"] ; # Bank 44
set_property PACKAGE_PIN AK20      [get_ports "c0_ddr4_dqs_c[2]"] ; # Bank 44
set_property PACKAGE_PIN AP21      [get_ports "c0_ddr4_dqs_c[3]"] ; # Bank 44
set_property PACKAGE_PIN AL28      [get_ports "c0_ddr4_dqs_c[4]"] ; # Bank 46
set_property PACKAGE_PIN AP30      [get_ports "c0_ddr4_dqs_c[5]"] ; # Bank 46
set_property PACKAGE_PIN AJ33      [get_ports "c0_ddr4_dqs_c[6]"] ; # Bank 46
set_property PACKAGE_PIN AP34      [get_ports "c0_ddr4_dqs_c[7]"] ; # Bank 46

# DDR4 DQS True Pins - KCU105
set_property PACKAGE_PIN AG21      [get_ports "c0_ddr4_dqs_t[0]"] ; # Bank 44
set_property PACKAGE_PIN AH24      [get_ports "c0_ddr4_dqs_t[1]"] ; # Bank 44
set_property PACKAGE_PIN AJ20      [get_ports "c0_ddr4_dqs_t[2]"] ; # Bank 44
set_property PACKAGE_PIN AP20      [get_ports "c0_ddr4_dqs_t[3]"] ; # Bank 44
set_property PACKAGE_PIN AL27      [get_ports "c0_ddr4_dqs_t[4]"] ; # Bank 46
set_property PACKAGE_PIN AN29      [get_ports "c0_ddr4_dqs_t[5]"] ; # Bank 46
set_property PACKAGE_PIN AH33      [get_ports "c0_ddr4_dqs_t[6]"] ; # Bank 46
set_property PACKAGE_PIN AN34      [get_ports "c0_ddr4_dqs_t[7]"] ; # Bank 46

# DDR4 Control Pins - KCU105
set_property PACKAGE_PIN AJ18      [get_ports "c0_ddr4_odt[0]"] ;   # Bank 45
set_property PACKAGE_PIN AL18      [get_ports "c0_ddr4_reset_n"] ; # Bank 45