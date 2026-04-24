#!/usr/bin/env vivado -mode batch -source
open_project fpga_project/c-class/c-class.xpr
launch_runs impl_1 -to_step write_bitstream -jobs 8
wait_on_run impl_1

write_hw_platform -fixed -include_bit -force c-class.xsa
