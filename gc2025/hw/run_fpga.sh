python3 -m configure.main --ispec sample_config/c64_profpga/rv64i_isa.yaml \
  --customspec sample_config/c64_profpga/rv64i_custom.yaml \
  --cspec sample_config/c64_profpga/core64.yaml \
  --gspec sample_config/c64_profpga/csr_grouping64.yaml \
  --dspec sample_config/c64_profpga/rv64i_debug.yaml

mkdir build
mkdir build/hw
mkdir build/hw/intermediate
mkdir build/hw/verilog
  #--verbose debug

