########
Ganga
########

Memory MAP
^^^^^^^^^^

======== ============ =============
Config   base-address bound-address
======== ============ =============
Memory   'h8000_0000  'h8FFF_FFFF
BootRAM  'h0000_1000  'h0000_8FFF
UART0    'h0001_1300  'h0001_1340
UART1    'h0001_1400  'h0001_1440
SPI0     'h0002_0000  'h0002_00FF
SPI1     'h0002_0100  'h0002_01FF
I2C0     'h0004_0000  'h0004_00FF
GPIO     'h0004_0100  'h0004_01FF
GPT0     'h0004_0200  'h0004_02FF
GPT1     'h0004_0300  'h0004_03FF
PinMux   'h0004_1500  'h0004_15FF
Ethernet 'h0004_4000  'h0004_7FFF
Clint    'h0200_0000  'h020B_FFFF
PLIC     'h0C00_0000  'h0FFF_FFFF
======== ============ =============

PinMuxing Rules
^^^^^^^^^^^^^^^

=========== ========= =========  ========
Soc signal  Config-0  Config-1   Config-2
=========== ========= =========  ========
io7_cell    GPIO[0]   UART1-RX   -
io8_cell    GPIO[1]   UART1-TX   -
io9_cell    GPIO[2]   -
io10_cell   GPIO[3]   -
io12_cell   GPIO[5]   -          -
io13_cell   GPIO[6]   -          -
io16_cell   GPIO[9]   -          -
io17_cell   GPIO[10]  SPI1_NCS   -
io18_cell   GPIO[11]  SPI1_MOSI  -
io19_cell   GPIO[12]  SPI1_MISO  -
io20_cell   GPIO[13]  SPI1_CLK   -
=========== ========= =========  ========

FPGA Board Connector Mapping
^^^^^^^^^^^^^^^^^^^^^^^^^^^^
==========    ============= =============
soc_signal    Schematic Pin Name FPGA Pin
==========    ============= =============
i2c0_sda      jb_p[1]       E15
i2c0_scl      jb_n[1]       E16
gpio_14       jb_p[2]       D15
gpio_15       jb_n[2]       C15
external_clk  jb_n[4]       J15
gptimer0_in   jc_p[1]       U12
gptimer0_out  jc_n[1]       V12
gptimer1_in   jc_p[2]       V10
gptimer1_out  jc_n[2]       V11
uart0_SOUT    uart_rxd_out  D10
uart0_SIN     uart_txd_in   A9
io7_cell      ck_io[0]      V15
io8_cell      ck_io[1]      U16
io9_cell      ck_io[2]      P14
io10_cell     ck_io[3]      T11
gpio_4        ck_io[4]      R12
io12_cell     ck_io[5]      T14
io13_cell     ck_io[6]      T15
gpio_7        ck_io[7]      T16
gpio_8        ck_io[8]      N15
io16_cell     ck_io[9]      M16
io17_cell     ck_io[10]     V17
io18_cell     ck_io[11]     U18
io19_cell     ck_io[12]     R17
io20_cell     ck_io[13]     P17
spi0_nss      qspi_cs       L13
spi0_mosi     qspi_dq[0]    K17
spi0_miso     qspi_dq[1]    K18
sys_rst       ck_rst        C2
==========    ============= =============



The serial communication happens using uart0 connected to the FPGA package pins D10 and A9, which 
communicate to the host system through the micro-USB port (connector J10).

The debug interface of the processor is connected to the Xilinx JTAG tap, which in-turn is time 
multiplexed with uart0, and is connected to the micro-USB port. This configuration let’s us to 
not have dedicated JTAG pins, thereby eliminating the need for an external JTAG Debug probe (like J-Link).

The DDR controller (of Xilinx) uses the default pin configuration as specified by Digilent.

The Ethernet controller (of Xilinx) uses the default ping configuraion as specified by Digilent

To Build MCS File:
^^^^^^^^^^^^^^^^^

.. code-block:: shell-session

  $ git clone https://gitlab.com/shaktiproject/gc2025.git
  $ cd gc2025/hw/
  $ make build BOARD=arty_a7_ganga

Connecting to the Target
^^^^^^^^^^^^^^^^^^^^^^^^

In a New Terminal window

.. code-block:: yaml

  $ openocd -f shakti-arty.cfg

In yet Another Terminal window

.. code-block:: yaml

  $ riscv64-unknown-elf-gdb -x gdb.script

Launch UART Console

.. code-block:: yaml

  $ sudo miniterm /dev/ttyUSB1 19200


