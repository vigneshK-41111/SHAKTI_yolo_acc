python3 -m configure.main --ispec sample_config/c64_debug_sim/rv64i_isa.yaml \
  --customspec sample_config/c64_debug_sim/rv64i_custom.yaml \
  --cspec sample_config/c64_debug_sim/core64.yaml \
  --gspec sample_config/c64_debug_sim/csr_grouping64.yaml \
  --dspec sample_config/c64_debug_sim/rv64i_debug.yaml
  #--verbose debug

mkdir build
mkdir build/hw
mkdir build/hw/intermediate
mkdir build/hw/verilog

