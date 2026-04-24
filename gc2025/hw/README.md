# <b>GC2025</b>

### <b>Maintained by : RISE/Shakti Lab, Indian Institute of Technology, Madras</b>

Please follow the following steps to generate bitstream and MCS for the supported boards.

The serial communication happens using uart0 connected to the FPGA which
communicate to the host system through the micro-USB port.

The debug interface of the processor is connected to the Xilinx JTAG tap, which in-turn is time
multiplexed with uart0, and is connected to the micro-USB port. This configuration let’s us to
not have dedicated JTAG pins, thereby eliminating the need for an external JTAG Debug probe (like J-Link).

The DDR controller (of Xilinx) uses the default pin configuration as specified by Digilent.

The Ethernet controller (of Xilinx) uses the default ping configuraion as specified by Digilent

For more SoC related details please view README.rst

<b>To Build MCS File for Yamuna:</b>

```
  $ git clone https://gitlab.com/shaktiproject/gc2025.git
  $ cd gc2025/hw
  $ make build BOARD=arty_a7_yamuna XLEN_build=32
```
For nexys_video support pass BOARD=nexys_video 

<b>To Build MCS File for Ganga:</b>

```
  $ git clone https://gitlab.com/shaktiproject/gc2025.git
  $ cd gc2025/hw
  $ make build BOARD=arty_a7_ganga
```
For nexys_video support pass BOARD=nexys_video 

<b>Simulation for Yamuna SoC:</b>

```
  $ git clone https://gitlab.com/shaktiproject/gc2025.git
  $ cd gc2025/hw
  $ make build_sim BOARD=arty_a7_yamuna XLEN_build=32
```
For nexys_video support pass BOARD=nexys_video 

<b>GDB Simulation for Yamuna SoC:</b>

```
  $ git clone https://gitlab.com/shaktiproject/gc2025.git
  $ cd gc2025/hw
  $ make build_sim_gdb BOARD=arty_a7_yamuna XLEN_build=32
```
For nexys_video support pass BOARD=nexys_video 

<b>Simulation for Ganga SoC:</b>

```
  $ git clone https://gitlab.com/shaktiproject/gc2025.git
  $ cd gc2025/hw
  $ make build_sim BOARD=arty_a7_ganga #for Verilator
  $ make build_vcs_sim BOARD=arty_a7_ganga #for VCS
```
For nexys_video support pass BOARD=nexys_video 

<b>GDB Simulation for Ganga SoC:</b>

```
  $ git clone https://gitlab.com/shaktiproject/gc2025.git
  $ cd gc2025/hw
  $ make build_sim_gdb BOARD=arty_a7_ganga #for Verilator
  $ make build_vcs_sim_gdb BOARD=arty_a7_ganga #for VCS
```
For nexys_video support pass BOARD=nexys_video 

<b>To Perform Simulation (code.mem):</b>

```
After building Simulation for Ganga/Yamuna SoC, to generate the code.mem follow the steps below,
  
  $ elf2hex 4 67108864 hello.shakti 2147483648 > code.mem #Only for Yamuna SoC 
  $ elf2hex 8 33554432 hello.shakti 2147483648 > code.mem #Only for Ganga SoC

Place the generated code.mem in the bin directory, then follow the below steps,

  $ cd bin
  $ ./out +trace  #to enable waveform dumping in the logs directory [to run in verilator]
  $ ./out +vcd  #to enable waveform dumping [to run in VCS]


The print statements in the code will be printed in the app_log file in the bin directory
```

<b>To Perform GDB Simulation:</b>

```
After building executable "out" for GC2025 SoC with the build_sim_gdb / build_vcs_sim_gdb command,

In first tab go to the hw/bin directory,
  $ ./out +trace  #trace to enable waveform dumping in the logs directory [to run in verilator]
  $ ./out +vcd  #vcd to enable waveform dumping [to run in VCS]

In second tab connect the openocd,
  $ sudo openocd -f gdb_setup/shakti_ocd.cfg

In third tab open the gdb and establish the connection,
  $ riscv64-unknown-elf-gdb
  (gdb) source gdb_setup/gdb.script
  (gdb) file <path to the executable file>
  (gdb) load
  (gdb) compare-sections #if any mismatch, load again
  (gdb) c


Load the code in the third tab and see the prints in the app_log[UART0] file in the bin directory 

```

<b>To Build MCS File for Nexys A7:</b>

```
  $ git clone https://gitlab.com/shaktiproject/gc2025.git
  $ cd gc2025/hw
  $ make build BOARD=nexys_a7 XLEN_build=32
```

<b>To Build RTL for Yamuna [ASIC]:</b>

```
  $ git clone https://gitlab.com/shaktiproject/gc2025.git
  $ cd gc2025/hw
  $ make yamuna_asic XLEN_build=32
```

<b>Supported Boards:</b>


1. ARTY-A7-100T which can be passed as BOARD=arty_a7
2. ARTY-A7-100T with FPU which can be passed as BOARD=arty\_a7_fpu
3. Virtix Ultrascale+ VCU118 which can be passed as BOARD=vcu118
4. proFPGA using Virtix Ultrascale which can be passed as BOARD=profpga

Note:
1. To run simulation with linux as payload change the BRAM size to 2^28 in TbSoc.bsv
2. Do not run for any other board after building for ARTY-A7-100T-FPU.
