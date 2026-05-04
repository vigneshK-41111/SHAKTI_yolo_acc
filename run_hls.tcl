
open_project cnn_accel
set_top cnn_accel

add_files cnn_accel.cpp

add_files 0_conv_weight.h
add_files 0_conv_weight_bias.h

add_files 1_conv_weight.h
add_files 1_conv_weight_bias.h

add_files 2_cv1_conv_weight.h
add_files 2_cv1_conv_weight_bias.h

open_solution "solution2"

set_part xc7k325tffg900-2

create_clock -period 10

# Keep this
config_compile -pipeline_loops 1

csynth_design

exit


