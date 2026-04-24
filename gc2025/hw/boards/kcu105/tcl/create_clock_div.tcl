#set curdir [ file dirname [ file normalize [ info script ] ] ]
#source $curdir/env.tcl
#
#open_project $ip_project_dir/$ip_project.xpr
#set_property "simulator_language" "Mixed" [current_project]
#set_property "target_language" "Verilog" [current_project]

puts "\nDEBUG: Creating Clock Divider from Clock Wizard\n"

if { [get_ips -quiet clk_divider] eq "" } {
    create_ip -name clk_wiz -vendor xilinx.com -library ip -module_name clk_divider 
} else {
    reset_run clk_divider_synth_1
}

set_property -dict [list \
                        CONFIG.CLK_IN1_BOARD_INTERFACE {Custom} \
                        CONFIG.PRIM_SOURCE {Differential_clock_capable_pin} \
                        CONFIG.PRIM_IN_FREQ {125.000} \
                        CONFIG.CLKIN1_JITTER_PS {80.0} \
                        CONFIG.MMCM_CLKFBOUT_MULT_F {48.000} \
                        CONFIG.MMCM_CLKIN1_PERIOD {8.000} \
                        CONFIG.MMCM_CLKIN2_PERIOD {10.000} \
                        CONFIG.MMCM_CLKOUT1_DIVIDE {1} \
                        CONFIG.CLKOUT1_USED {true} \
                        CONFIG.CLKOUT1_DRIVES {BUFG} \
                        CONFIG.CLKOUT1_REQUESTED_OUT_FREQ {50.000} \
                        CONFIG.RESET_TYPE {ACTIVE_HIGH} \
                        CONFIG.MMCM_DIVCLK_DIVIDE {5} \
                        CONFIG.MMCM_CLKOUT0_DIVIDE_F {24.000} \
                        CONFIG.NUM_OUT_CLKS {1} \
                        CONFIG.RESET_PORT {reset} \
                        CONFIG.CLKOUT1_JITTER {196.543} \
                        CONFIG.CLKOUT1_PHASE_ERROR {222.305}] [get_ips clk_divider]

generate_target {instantiation_template} [get_ips clk_divider]
create_ip_run [get_ips clk_divider]
#launch_run clk_divider_synth_1
#wait_on_run clk_divider_synth_1
#exit
