open_project cnn_accel
set_top cnn_accel

add_files cnn_accel.cpp
add_files conv1_weight.h
add_files conv2_weight.h
add_files conv3_weight.h

open_solution "solution1"

set_part xc7a200tsbg484-1
create_clock -period 10

# Skip simulation
# csim_design

# Run synthesis directly
csynth_design

exit
