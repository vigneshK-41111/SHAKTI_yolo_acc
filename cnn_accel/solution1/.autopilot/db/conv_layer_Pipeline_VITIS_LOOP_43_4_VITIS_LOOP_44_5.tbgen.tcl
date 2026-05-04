set moduleName conv_layer_Pipeline_VITIS_LOOP_43_4_VITIS_LOOP_44_5
set isTopModule 0
set isCombinational 0
set isDatapathOnly 0
set isPipelined 1
set pipeline_type loop_auto_rewind
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set hasInterrupt 0
set DLRegFirstOffset 0
set DLRegItemOffset 0
set svuvm_can_support 1
set cdfgNum 15
set C_modelName {conv_layer_Pipeline_VITIS_LOOP_43_4_VITIS_LOOP_44_5}
set C_modelType { void 0 }
set ap_memory_interface_dict [dict create]
dict set ap_memory_interface_dict tile_in { MEM_WIDTH 8 MEM_SIZE 396 MASTER_TYPE BRAM_CTRL MEM_ADDRESS_MODE WORD_ADDRESS PACKAGE_IO port READ_LATENCY 0 }
dict set ap_memory_interface_dict tile_in_431 { MEM_WIDTH 8 MEM_SIZE 396 MASTER_TYPE BRAM_CTRL MEM_ADDRESS_MODE WORD_ADDRESS PACKAGE_IO port READ_LATENCY 0 }
dict set ap_memory_interface_dict tile_in_432 { MEM_WIDTH 8 MEM_SIZE 396 MASTER_TYPE BRAM_CTRL MEM_ADDRESS_MODE WORD_ADDRESS PACKAGE_IO port READ_LATENCY 0 }
dict set ap_memory_interface_dict tile_in_433 { MEM_WIDTH 8 MEM_SIZE 396 MASTER_TYPE BRAM_CTRL MEM_ADDRESS_MODE WORD_ADDRESS PACKAGE_IO port READ_LATENCY 0 }
dict set ap_memory_interface_dict tile_in_434 { MEM_WIDTH 8 MEM_SIZE 396 MASTER_TYPE BRAM_CTRL MEM_ADDRESS_MODE WORD_ADDRESS PACKAGE_IO port READ_LATENCY 0 }
dict set ap_memory_interface_dict tile_in_435 { MEM_WIDTH 8 MEM_SIZE 396 MASTER_TYPE BRAM_CTRL MEM_ADDRESS_MODE WORD_ADDRESS PACKAGE_IO port READ_LATENCY 0 }
dict set ap_memory_interface_dict tile_in_436 { MEM_WIDTH 8 MEM_SIZE 396 MASTER_TYPE BRAM_CTRL MEM_ADDRESS_MODE WORD_ADDRESS PACKAGE_IO port READ_LATENCY 0 }
dict set ap_memory_interface_dict tile_in_437 { MEM_WIDTH 8 MEM_SIZE 396 MASTER_TYPE BRAM_CTRL MEM_ADDRESS_MODE WORD_ADDRESS PACKAGE_IO port READ_LATENCY 0 }
dict set ap_memory_interface_dict tile_in_438 { MEM_WIDTH 8 MEM_SIZE 396 MASTER_TYPE BRAM_CTRL MEM_ADDRESS_MODE WORD_ADDRESS PACKAGE_IO port READ_LATENCY 0 }
dict set ap_memory_interface_dict tile_in_439 { MEM_WIDTH 8 MEM_SIZE 396 MASTER_TYPE BRAM_CTRL MEM_ADDRESS_MODE WORD_ADDRESS PACKAGE_IO port READ_LATENCY 0 }
dict set ap_memory_interface_dict tile_in_440 { MEM_WIDTH 8 MEM_SIZE 396 MASTER_TYPE BRAM_CTRL MEM_ADDRESS_MODE WORD_ADDRESS PACKAGE_IO port READ_LATENCY 0 }
dict set ap_memory_interface_dict tile_in_441 { MEM_WIDTH 8 MEM_SIZE 396 MASTER_TYPE BRAM_CTRL MEM_ADDRESS_MODE WORD_ADDRESS PACKAGE_IO port READ_LATENCY 0 }
dict set ap_memory_interface_dict tile_in_442 { MEM_WIDTH 8 MEM_SIZE 396 MASTER_TYPE BRAM_CTRL MEM_ADDRESS_MODE WORD_ADDRESS PACKAGE_IO port READ_LATENCY 0 }
dict set ap_memory_interface_dict tile_in_443 { MEM_WIDTH 8 MEM_SIZE 396 MASTER_TYPE BRAM_CTRL MEM_ADDRESS_MODE WORD_ADDRESS PACKAGE_IO port READ_LATENCY 0 }
dict set ap_memory_interface_dict tile_in_444 { MEM_WIDTH 8 MEM_SIZE 396 MASTER_TYPE BRAM_CTRL MEM_ADDRESS_MODE WORD_ADDRESS PACKAGE_IO port READ_LATENCY 0 }
dict set ap_memory_interface_dict tile_in_445 { MEM_WIDTH 8 MEM_SIZE 396 MASTER_TYPE BRAM_CTRL MEM_ADDRESS_MODE WORD_ADDRESS PACKAGE_IO port READ_LATENCY 0 }
dict set ap_memory_interface_dict tile_in_446 { MEM_WIDTH 8 MEM_SIZE 396 MASTER_TYPE BRAM_CTRL MEM_ADDRESS_MODE WORD_ADDRESS PACKAGE_IO port READ_LATENCY 0 }
dict set ap_memory_interface_dict tile_in_447 { MEM_WIDTH 8 MEM_SIZE 396 MASTER_TYPE BRAM_CTRL MEM_ADDRESS_MODE WORD_ADDRESS PACKAGE_IO port READ_LATENCY 0 }
dict set ap_memory_interface_dict tile_in_448 { MEM_WIDTH 8 MEM_SIZE 396 MASTER_TYPE BRAM_CTRL MEM_ADDRESS_MODE WORD_ADDRESS PACKAGE_IO port READ_LATENCY 0 }
dict set ap_memory_interface_dict tile_in_449 { MEM_WIDTH 8 MEM_SIZE 396 MASTER_TYPE BRAM_CTRL MEM_ADDRESS_MODE WORD_ADDRESS PACKAGE_IO port READ_LATENCY 0 }
dict set ap_memory_interface_dict tile_in_450 { MEM_WIDTH 8 MEM_SIZE 396 MASTER_TYPE BRAM_CTRL MEM_ADDRESS_MODE WORD_ADDRESS PACKAGE_IO port READ_LATENCY 0 }
dict set ap_memory_interface_dict tile_in_451 { MEM_WIDTH 8 MEM_SIZE 396 MASTER_TYPE BRAM_CTRL MEM_ADDRESS_MODE WORD_ADDRESS PACKAGE_IO port READ_LATENCY 0 }
dict set ap_memory_interface_dict tile_in_452 { MEM_WIDTH 8 MEM_SIZE 396 MASTER_TYPE BRAM_CTRL MEM_ADDRESS_MODE WORD_ADDRESS PACKAGE_IO port READ_LATENCY 0 }
dict set ap_memory_interface_dict tile_in_453 { MEM_WIDTH 8 MEM_SIZE 396 MASTER_TYPE BRAM_CTRL MEM_ADDRESS_MODE WORD_ADDRESS PACKAGE_IO port READ_LATENCY 0 }
dict set ap_memory_interface_dict tile_in_454 { MEM_WIDTH 8 MEM_SIZE 396 MASTER_TYPE BRAM_CTRL MEM_ADDRESS_MODE WORD_ADDRESS PACKAGE_IO port READ_LATENCY 0 }
dict set ap_memory_interface_dict tile_in_455 { MEM_WIDTH 8 MEM_SIZE 396 MASTER_TYPE BRAM_CTRL MEM_ADDRESS_MODE WORD_ADDRESS PACKAGE_IO port READ_LATENCY 0 }
dict set ap_memory_interface_dict tile_in_456 { MEM_WIDTH 8 MEM_SIZE 396 MASTER_TYPE BRAM_CTRL MEM_ADDRESS_MODE WORD_ADDRESS PACKAGE_IO port READ_LATENCY 0 }
set C_modelArgList {
	{ gmem int 8 regular {axi_master 0}  }
	{ input_r int 64 regular  }
	{ ty int 31 regular  }
	{ sext_ln37_6 int 31 regular  }
	{ sext_ln37_5 int 32 regular  }
	{ tile_in int 8 regular {array 396 { 0 3 } 0 1 }  }
	{ tile_in_431 int 8 regular {array 396 { 0 3 } 0 1 }  }
	{ tile_in_432 int 8 regular {array 396 { 0 3 } 0 1 }  }
	{ tile_in_433 int 8 regular {array 396 { 0 3 } 0 1 }  }
	{ tile_in_434 int 8 regular {array 396 { 0 3 } 0 1 }  }
	{ tile_in_435 int 8 regular {array 396 { 0 3 } 0 1 }  }
	{ tile_in_436 int 8 regular {array 396 { 0 3 } 0 1 }  }
	{ tile_in_437 int 8 regular {array 396 { 0 0 } 0 1 }  }
	{ tile_in_438 int 8 regular {array 396 { 0 3 } 0 1 }  }
	{ tile_in_439 int 8 regular {array 396 { 0 3 } 0 1 }  }
	{ tile_in_440 int 8 regular {array 396 { 0 3 } 0 1 }  }
	{ tile_in_441 int 8 regular {array 396 { 0 3 } 0 1 }  }
	{ tile_in_442 int 8 regular {array 396 { 0 3 } 0 1 }  }
	{ tile_in_443 int 8 regular {array 396 { 0 3 } 0 1 }  }
	{ tile_in_444 int 8 regular {array 396 { 0 3 } 0 1 }  }
	{ tile_in_445 int 8 regular {array 396 { 0 3 } 0 1 }  }
	{ tile_in_446 int 8 regular {array 396 { 0 3 } 0 1 }  }
	{ tile_in_447 int 8 regular {array 396 { 0 3 } 0 1 }  }
	{ tile_in_448 int 8 regular {array 396 { 0 3 } 0 1 }  }
	{ tile_in_449 int 8 regular {array 396 { 0 3 } 0 1 }  }
	{ tile_in_450 int 8 regular {array 396 { 0 3 } 0 1 }  }
	{ tile_in_451 int 8 regular {array 396 { 0 3 } 0 1 }  }
	{ tile_in_452 int 8 regular {array 396 { 0 3 } 0 1 }  }
	{ tile_in_453 int 8 regular {array 396 { 0 3 } 0 1 }  }
	{ tile_in_454 int 8 regular {array 396 { 0 3 } 0 1 }  }
	{ tile_in_455 int 8 regular {array 396 { 0 3 } 0 1 }  }
	{ tile_in_456 int 8 regular {array 396 { 0 3 } 0 1 }  }
	{ tx int 31 regular  }
}
set hasAXIMCache 0
set l_AXIML2Cache [list]
set AXIMCacheInstDict [dict create]
set C_modelArgMapList {[ 
	{ "Name" : "gmem", "interface" : "axi_master", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[ {"cElement": [{"cName": "input_r","offset": { "type": "dynamic","port_name": "input_r","bundle": "control"},"direction": "READONLY"},{"cName": "output_r","offset": { "type": "dynamic","port_name": "output_r","bundle": "control"},"direction": "READWRITE"}]}]} , 
 	{ "Name" : "input_r", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "ty", "interface" : "wire", "bitwidth" : 31, "direction" : "READONLY"} , 
 	{ "Name" : "sext_ln37_6", "interface" : "wire", "bitwidth" : 31, "direction" : "READONLY"} , 
 	{ "Name" : "sext_ln37_5", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "tile_in", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "tile_in_431", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "tile_in_432", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "tile_in_433", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "tile_in_434", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "tile_in_435", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "tile_in_436", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "tile_in_437", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "tile_in_438", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "tile_in_439", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "tile_in_440", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "tile_in_441", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "tile_in_442", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "tile_in_443", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "tile_in_444", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "tile_in_445", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "tile_in_446", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "tile_in_447", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "tile_in_448", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "tile_in_449", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "tile_in_450", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "tile_in_451", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "tile_in_452", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "tile_in_453", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "tile_in_454", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "tile_in_455", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "tile_in_456", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "tx", "interface" : "wire", "bitwidth" : 31, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 169
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ m_axi_gmem_0_AWVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_0_AWREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_0_AWADDR sc_out sc_lv 64 signal 0 } 
	{ m_axi_gmem_0_AWID sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_0_AWLEN sc_out sc_lv 32 signal 0 } 
	{ m_axi_gmem_0_AWSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_gmem_0_AWBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_gmem_0_AWLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_gmem_0_AWCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_0_AWPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_gmem_0_AWQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_0_AWREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_0_AWUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_0_WVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_0_WREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_0_WDATA sc_out sc_lv 8 signal 0 } 
	{ m_axi_gmem_0_WSTRB sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_0_WLAST sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_0_WID sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_0_WUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_0_ARVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_0_ARREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_0_ARADDR sc_out sc_lv 64 signal 0 } 
	{ m_axi_gmem_0_ARID sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_0_ARLEN sc_out sc_lv 32 signal 0 } 
	{ m_axi_gmem_0_ARSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_gmem_0_ARBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_gmem_0_ARLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_gmem_0_ARCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_0_ARPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_gmem_0_ARQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_0_ARREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_gmem_0_ARUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_gmem_0_RVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_0_RREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_0_RDATA sc_in sc_lv 8 signal 0 } 
	{ m_axi_gmem_0_RLAST sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_0_RID sc_in sc_lv 1 signal 0 } 
	{ m_axi_gmem_0_RFIFONUM sc_in sc_lv 11 signal 0 } 
	{ m_axi_gmem_0_RUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_gmem_0_RRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_gmem_0_BVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_gmem_0_BREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_gmem_0_BRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_gmem_0_BID sc_in sc_lv 1 signal 0 } 
	{ m_axi_gmem_0_BUSER sc_in sc_lv 1 signal 0 } 
	{ input_r sc_in sc_lv 64 signal 1 } 
	{ ty sc_in sc_lv 31 signal 2 } 
	{ sext_ln37_6 sc_in sc_lv 31 signal 3 } 
	{ sext_ln37_5 sc_in sc_lv 32 signal 4 } 
	{ tile_in_address0 sc_out sc_lv 9 signal 5 } 
	{ tile_in_ce0 sc_out sc_logic 1 signal 5 } 
	{ tile_in_we0 sc_out sc_logic 1 signal 5 } 
	{ tile_in_d0 sc_out sc_lv 8 signal 5 } 
	{ tile_in_431_address0 sc_out sc_lv 9 signal 6 } 
	{ tile_in_431_ce0 sc_out sc_logic 1 signal 6 } 
	{ tile_in_431_we0 sc_out sc_logic 1 signal 6 } 
	{ tile_in_431_d0 sc_out sc_lv 8 signal 6 } 
	{ tile_in_432_address0 sc_out sc_lv 9 signal 7 } 
	{ tile_in_432_ce0 sc_out sc_logic 1 signal 7 } 
	{ tile_in_432_we0 sc_out sc_logic 1 signal 7 } 
	{ tile_in_432_d0 sc_out sc_lv 8 signal 7 } 
	{ tile_in_433_address0 sc_out sc_lv 9 signal 8 } 
	{ tile_in_433_ce0 sc_out sc_logic 1 signal 8 } 
	{ tile_in_433_we0 sc_out sc_logic 1 signal 8 } 
	{ tile_in_433_d0 sc_out sc_lv 8 signal 8 } 
	{ tile_in_434_address0 sc_out sc_lv 9 signal 9 } 
	{ tile_in_434_ce0 sc_out sc_logic 1 signal 9 } 
	{ tile_in_434_we0 sc_out sc_logic 1 signal 9 } 
	{ tile_in_434_d0 sc_out sc_lv 8 signal 9 } 
	{ tile_in_435_address0 sc_out sc_lv 9 signal 10 } 
	{ tile_in_435_ce0 sc_out sc_logic 1 signal 10 } 
	{ tile_in_435_we0 sc_out sc_logic 1 signal 10 } 
	{ tile_in_435_d0 sc_out sc_lv 8 signal 10 } 
	{ tile_in_436_address0 sc_out sc_lv 9 signal 11 } 
	{ tile_in_436_ce0 sc_out sc_logic 1 signal 11 } 
	{ tile_in_436_we0 sc_out sc_logic 1 signal 11 } 
	{ tile_in_436_d0 sc_out sc_lv 8 signal 11 } 
	{ tile_in_437_address0 sc_out sc_lv 9 signal 12 } 
	{ tile_in_437_ce0 sc_out sc_logic 1 signal 12 } 
	{ tile_in_437_we0 sc_out sc_logic 1 signal 12 } 
	{ tile_in_437_d0 sc_out sc_lv 8 signal 12 } 
	{ tile_in_437_address1 sc_out sc_lv 9 signal 12 } 
	{ tile_in_437_ce1 sc_out sc_logic 1 signal 12 } 
	{ tile_in_437_we1 sc_out sc_logic 1 signal 12 } 
	{ tile_in_437_d1 sc_out sc_lv 8 signal 12 } 
	{ tile_in_438_address0 sc_out sc_lv 9 signal 13 } 
	{ tile_in_438_ce0 sc_out sc_logic 1 signal 13 } 
	{ tile_in_438_we0 sc_out sc_logic 1 signal 13 } 
	{ tile_in_438_d0 sc_out sc_lv 8 signal 13 } 
	{ tile_in_439_address0 sc_out sc_lv 9 signal 14 } 
	{ tile_in_439_ce0 sc_out sc_logic 1 signal 14 } 
	{ tile_in_439_we0 sc_out sc_logic 1 signal 14 } 
	{ tile_in_439_d0 sc_out sc_lv 8 signal 14 } 
	{ tile_in_440_address0 sc_out sc_lv 9 signal 15 } 
	{ tile_in_440_ce0 sc_out sc_logic 1 signal 15 } 
	{ tile_in_440_we0 sc_out sc_logic 1 signal 15 } 
	{ tile_in_440_d0 sc_out sc_lv 8 signal 15 } 
	{ tile_in_441_address0 sc_out sc_lv 9 signal 16 } 
	{ tile_in_441_ce0 sc_out sc_logic 1 signal 16 } 
	{ tile_in_441_we0 sc_out sc_logic 1 signal 16 } 
	{ tile_in_441_d0 sc_out sc_lv 8 signal 16 } 
	{ tile_in_442_address0 sc_out sc_lv 9 signal 17 } 
	{ tile_in_442_ce0 sc_out sc_logic 1 signal 17 } 
	{ tile_in_442_we0 sc_out sc_logic 1 signal 17 } 
	{ tile_in_442_d0 sc_out sc_lv 8 signal 17 } 
	{ tile_in_443_address0 sc_out sc_lv 9 signal 18 } 
	{ tile_in_443_ce0 sc_out sc_logic 1 signal 18 } 
	{ tile_in_443_we0 sc_out sc_logic 1 signal 18 } 
	{ tile_in_443_d0 sc_out sc_lv 8 signal 18 } 
	{ tile_in_444_address0 sc_out sc_lv 9 signal 19 } 
	{ tile_in_444_ce0 sc_out sc_logic 1 signal 19 } 
	{ tile_in_444_we0 sc_out sc_logic 1 signal 19 } 
	{ tile_in_444_d0 sc_out sc_lv 8 signal 19 } 
	{ tile_in_445_address0 sc_out sc_lv 9 signal 20 } 
	{ tile_in_445_ce0 sc_out sc_logic 1 signal 20 } 
	{ tile_in_445_we0 sc_out sc_logic 1 signal 20 } 
	{ tile_in_445_d0 sc_out sc_lv 8 signal 20 } 
	{ tile_in_446_address0 sc_out sc_lv 9 signal 21 } 
	{ tile_in_446_ce0 sc_out sc_logic 1 signal 21 } 
	{ tile_in_446_we0 sc_out sc_logic 1 signal 21 } 
	{ tile_in_446_d0 sc_out sc_lv 8 signal 21 } 
	{ tile_in_447_address0 sc_out sc_lv 9 signal 22 } 
	{ tile_in_447_ce0 sc_out sc_logic 1 signal 22 } 
	{ tile_in_447_we0 sc_out sc_logic 1 signal 22 } 
	{ tile_in_447_d0 sc_out sc_lv 8 signal 22 } 
	{ tile_in_448_address0 sc_out sc_lv 9 signal 23 } 
	{ tile_in_448_ce0 sc_out sc_logic 1 signal 23 } 
	{ tile_in_448_we0 sc_out sc_logic 1 signal 23 } 
	{ tile_in_448_d0 sc_out sc_lv 8 signal 23 } 
	{ tile_in_449_address0 sc_out sc_lv 9 signal 24 } 
	{ tile_in_449_ce0 sc_out sc_logic 1 signal 24 } 
	{ tile_in_449_we0 sc_out sc_logic 1 signal 24 } 
	{ tile_in_449_d0 sc_out sc_lv 8 signal 24 } 
	{ tile_in_450_address0 sc_out sc_lv 9 signal 25 } 
	{ tile_in_450_ce0 sc_out sc_logic 1 signal 25 } 
	{ tile_in_450_we0 sc_out sc_logic 1 signal 25 } 
	{ tile_in_450_d0 sc_out sc_lv 8 signal 25 } 
	{ tile_in_451_address0 sc_out sc_lv 9 signal 26 } 
	{ tile_in_451_ce0 sc_out sc_logic 1 signal 26 } 
	{ tile_in_451_we0 sc_out sc_logic 1 signal 26 } 
	{ tile_in_451_d0 sc_out sc_lv 8 signal 26 } 
	{ tile_in_452_address0 sc_out sc_lv 9 signal 27 } 
	{ tile_in_452_ce0 sc_out sc_logic 1 signal 27 } 
	{ tile_in_452_we0 sc_out sc_logic 1 signal 27 } 
	{ tile_in_452_d0 sc_out sc_lv 8 signal 27 } 
	{ tile_in_453_address0 sc_out sc_lv 9 signal 28 } 
	{ tile_in_453_ce0 sc_out sc_logic 1 signal 28 } 
	{ tile_in_453_we0 sc_out sc_logic 1 signal 28 } 
	{ tile_in_453_d0 sc_out sc_lv 8 signal 28 } 
	{ tile_in_454_address0 sc_out sc_lv 9 signal 29 } 
	{ tile_in_454_ce0 sc_out sc_logic 1 signal 29 } 
	{ tile_in_454_we0 sc_out sc_logic 1 signal 29 } 
	{ tile_in_454_d0 sc_out sc_lv 8 signal 29 } 
	{ tile_in_455_address0 sc_out sc_lv 9 signal 30 } 
	{ tile_in_455_ce0 sc_out sc_logic 1 signal 30 } 
	{ tile_in_455_we0 sc_out sc_logic 1 signal 30 } 
	{ tile_in_455_d0 sc_out sc_lv 8 signal 30 } 
	{ tile_in_456_address0 sc_out sc_lv 9 signal 31 } 
	{ tile_in_456_ce0 sc_out sc_logic 1 signal 31 } 
	{ tile_in_456_we0 sc_out sc_logic 1 signal 31 } 
	{ tile_in_456_d0 sc_out sc_lv 8 signal 31 } 
	{ tx sc_in sc_lv 31 signal 32 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "m_axi_gmem_0_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "0_AWVALID" }} , 
 	{ "name": "m_axi_gmem_0_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "0_AWREADY" }} , 
 	{ "name": "m_axi_gmem_0_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "gmem", "role": "0_AWADDR" }} , 
 	{ "name": "m_axi_gmem_0_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "0_AWID" }} , 
 	{ "name": "m_axi_gmem_0_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "gmem", "role": "0_AWLEN" }} , 
 	{ "name": "m_axi_gmem_0_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "gmem", "role": "0_AWSIZE" }} , 
 	{ "name": "m_axi_gmem_0_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "0_AWBURST" }} , 
 	{ "name": "m_axi_gmem_0_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "0_AWLOCK" }} , 
 	{ "name": "m_axi_gmem_0_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "0_AWCACHE" }} , 
 	{ "name": "m_axi_gmem_0_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "gmem", "role": "0_AWPROT" }} , 
 	{ "name": "m_axi_gmem_0_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "0_AWQOS" }} , 
 	{ "name": "m_axi_gmem_0_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "0_AWREGION" }} , 
 	{ "name": "m_axi_gmem_0_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "0_AWUSER" }} , 
 	{ "name": "m_axi_gmem_0_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "0_WVALID" }} , 
 	{ "name": "m_axi_gmem_0_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "0_WREADY" }} , 
 	{ "name": "m_axi_gmem_0_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "gmem", "role": "0_WDATA" }} , 
 	{ "name": "m_axi_gmem_0_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "0_WSTRB" }} , 
 	{ "name": "m_axi_gmem_0_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "0_WLAST" }} , 
 	{ "name": "m_axi_gmem_0_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "0_WID" }} , 
 	{ "name": "m_axi_gmem_0_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "0_WUSER" }} , 
 	{ "name": "m_axi_gmem_0_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "0_ARVALID" }} , 
 	{ "name": "m_axi_gmem_0_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "0_ARREADY" }} , 
 	{ "name": "m_axi_gmem_0_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "gmem", "role": "0_ARADDR" }} , 
 	{ "name": "m_axi_gmem_0_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "0_ARID" }} , 
 	{ "name": "m_axi_gmem_0_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "gmem", "role": "0_ARLEN" }} , 
 	{ "name": "m_axi_gmem_0_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "gmem", "role": "0_ARSIZE" }} , 
 	{ "name": "m_axi_gmem_0_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "0_ARBURST" }} , 
 	{ "name": "m_axi_gmem_0_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "0_ARLOCK" }} , 
 	{ "name": "m_axi_gmem_0_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "0_ARCACHE" }} , 
 	{ "name": "m_axi_gmem_0_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "gmem", "role": "0_ARPROT" }} , 
 	{ "name": "m_axi_gmem_0_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "0_ARQOS" }} , 
 	{ "name": "m_axi_gmem_0_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "gmem", "role": "0_ARREGION" }} , 
 	{ "name": "m_axi_gmem_0_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "0_ARUSER" }} , 
 	{ "name": "m_axi_gmem_0_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "0_RVALID" }} , 
 	{ "name": "m_axi_gmem_0_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "0_RREADY" }} , 
 	{ "name": "m_axi_gmem_0_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "gmem", "role": "0_RDATA" }} , 
 	{ "name": "m_axi_gmem_0_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "0_RLAST" }} , 
 	{ "name": "m_axi_gmem_0_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "0_RID" }} , 
 	{ "name": "m_axi_gmem_0_RFIFONUM", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "gmem", "role": "0_RFIFONUM" }} , 
 	{ "name": "m_axi_gmem_0_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "0_RUSER" }} , 
 	{ "name": "m_axi_gmem_0_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "0_RRESP" }} , 
 	{ "name": "m_axi_gmem_0_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "0_BVALID" }} , 
 	{ "name": "m_axi_gmem_0_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "0_BREADY" }} , 
 	{ "name": "m_axi_gmem_0_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "gmem", "role": "0_BRESP" }} , 
 	{ "name": "m_axi_gmem_0_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "0_BID" }} , 
 	{ "name": "m_axi_gmem_0_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "gmem", "role": "0_BUSER" }} , 
 	{ "name": "input_r", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "input_r", "role": "default" }} , 
 	{ "name": "ty", "direction": "in", "datatype": "sc_lv", "bitwidth":31, "type": "signal", "bundle":{"name": "ty", "role": "default" }} , 
 	{ "name": "sext_ln37_6", "direction": "in", "datatype": "sc_lv", "bitwidth":31, "type": "signal", "bundle":{"name": "sext_ln37_6", "role": "default" }} , 
 	{ "name": "sext_ln37_5", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "sext_ln37_5", "role": "default" }} , 
 	{ "name": "tile_in_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "tile_in", "role": "address0" }} , 
 	{ "name": "tile_in_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in", "role": "ce0" }} , 
 	{ "name": "tile_in_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in", "role": "we0" }} , 
 	{ "name": "tile_in_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "tile_in", "role": "d0" }} , 
 	{ "name": "tile_in_431_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "tile_in_431", "role": "address0" }} , 
 	{ "name": "tile_in_431_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_431", "role": "ce0" }} , 
 	{ "name": "tile_in_431_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_431", "role": "we0" }} , 
 	{ "name": "tile_in_431_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "tile_in_431", "role": "d0" }} , 
 	{ "name": "tile_in_432_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "tile_in_432", "role": "address0" }} , 
 	{ "name": "tile_in_432_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_432", "role": "ce0" }} , 
 	{ "name": "tile_in_432_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_432", "role": "we0" }} , 
 	{ "name": "tile_in_432_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "tile_in_432", "role": "d0" }} , 
 	{ "name": "tile_in_433_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "tile_in_433", "role": "address0" }} , 
 	{ "name": "tile_in_433_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_433", "role": "ce0" }} , 
 	{ "name": "tile_in_433_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_433", "role": "we0" }} , 
 	{ "name": "tile_in_433_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "tile_in_433", "role": "d0" }} , 
 	{ "name": "tile_in_434_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "tile_in_434", "role": "address0" }} , 
 	{ "name": "tile_in_434_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_434", "role": "ce0" }} , 
 	{ "name": "tile_in_434_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_434", "role": "we0" }} , 
 	{ "name": "tile_in_434_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "tile_in_434", "role": "d0" }} , 
 	{ "name": "tile_in_435_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "tile_in_435", "role": "address0" }} , 
 	{ "name": "tile_in_435_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_435", "role": "ce0" }} , 
 	{ "name": "tile_in_435_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_435", "role": "we0" }} , 
 	{ "name": "tile_in_435_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "tile_in_435", "role": "d0" }} , 
 	{ "name": "tile_in_436_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "tile_in_436", "role": "address0" }} , 
 	{ "name": "tile_in_436_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_436", "role": "ce0" }} , 
 	{ "name": "tile_in_436_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_436", "role": "we0" }} , 
 	{ "name": "tile_in_436_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "tile_in_436", "role": "d0" }} , 
 	{ "name": "tile_in_437_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "tile_in_437", "role": "address0" }} , 
 	{ "name": "tile_in_437_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_437", "role": "ce0" }} , 
 	{ "name": "tile_in_437_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_437", "role": "we0" }} , 
 	{ "name": "tile_in_437_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "tile_in_437", "role": "d0" }} , 
 	{ "name": "tile_in_437_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "tile_in_437", "role": "address1" }} , 
 	{ "name": "tile_in_437_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_437", "role": "ce1" }} , 
 	{ "name": "tile_in_437_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_437", "role": "we1" }} , 
 	{ "name": "tile_in_437_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "tile_in_437", "role": "d1" }} , 
 	{ "name": "tile_in_438_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "tile_in_438", "role": "address0" }} , 
 	{ "name": "tile_in_438_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_438", "role": "ce0" }} , 
 	{ "name": "tile_in_438_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_438", "role": "we0" }} , 
 	{ "name": "tile_in_438_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "tile_in_438", "role": "d0" }} , 
 	{ "name": "tile_in_439_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "tile_in_439", "role": "address0" }} , 
 	{ "name": "tile_in_439_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_439", "role": "ce0" }} , 
 	{ "name": "tile_in_439_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_439", "role": "we0" }} , 
 	{ "name": "tile_in_439_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "tile_in_439", "role": "d0" }} , 
 	{ "name": "tile_in_440_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "tile_in_440", "role": "address0" }} , 
 	{ "name": "tile_in_440_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_440", "role": "ce0" }} , 
 	{ "name": "tile_in_440_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_440", "role": "we0" }} , 
 	{ "name": "tile_in_440_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "tile_in_440", "role": "d0" }} , 
 	{ "name": "tile_in_441_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "tile_in_441", "role": "address0" }} , 
 	{ "name": "tile_in_441_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_441", "role": "ce0" }} , 
 	{ "name": "tile_in_441_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_441", "role": "we0" }} , 
 	{ "name": "tile_in_441_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "tile_in_441", "role": "d0" }} , 
 	{ "name": "tile_in_442_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "tile_in_442", "role": "address0" }} , 
 	{ "name": "tile_in_442_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_442", "role": "ce0" }} , 
 	{ "name": "tile_in_442_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_442", "role": "we0" }} , 
 	{ "name": "tile_in_442_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "tile_in_442", "role": "d0" }} , 
 	{ "name": "tile_in_443_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "tile_in_443", "role": "address0" }} , 
 	{ "name": "tile_in_443_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_443", "role": "ce0" }} , 
 	{ "name": "tile_in_443_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_443", "role": "we0" }} , 
 	{ "name": "tile_in_443_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "tile_in_443", "role": "d0" }} , 
 	{ "name": "tile_in_444_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "tile_in_444", "role": "address0" }} , 
 	{ "name": "tile_in_444_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_444", "role": "ce0" }} , 
 	{ "name": "tile_in_444_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_444", "role": "we0" }} , 
 	{ "name": "tile_in_444_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "tile_in_444", "role": "d0" }} , 
 	{ "name": "tile_in_445_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "tile_in_445", "role": "address0" }} , 
 	{ "name": "tile_in_445_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_445", "role": "ce0" }} , 
 	{ "name": "tile_in_445_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_445", "role": "we0" }} , 
 	{ "name": "tile_in_445_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "tile_in_445", "role": "d0" }} , 
 	{ "name": "tile_in_446_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "tile_in_446", "role": "address0" }} , 
 	{ "name": "tile_in_446_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_446", "role": "ce0" }} , 
 	{ "name": "tile_in_446_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_446", "role": "we0" }} , 
 	{ "name": "tile_in_446_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "tile_in_446", "role": "d0" }} , 
 	{ "name": "tile_in_447_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "tile_in_447", "role": "address0" }} , 
 	{ "name": "tile_in_447_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_447", "role": "ce0" }} , 
 	{ "name": "tile_in_447_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_447", "role": "we0" }} , 
 	{ "name": "tile_in_447_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "tile_in_447", "role": "d0" }} , 
 	{ "name": "tile_in_448_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "tile_in_448", "role": "address0" }} , 
 	{ "name": "tile_in_448_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_448", "role": "ce0" }} , 
 	{ "name": "tile_in_448_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_448", "role": "we0" }} , 
 	{ "name": "tile_in_448_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "tile_in_448", "role": "d0" }} , 
 	{ "name": "tile_in_449_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "tile_in_449", "role": "address0" }} , 
 	{ "name": "tile_in_449_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_449", "role": "ce0" }} , 
 	{ "name": "tile_in_449_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_449", "role": "we0" }} , 
 	{ "name": "tile_in_449_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "tile_in_449", "role": "d0" }} , 
 	{ "name": "tile_in_450_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "tile_in_450", "role": "address0" }} , 
 	{ "name": "tile_in_450_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_450", "role": "ce0" }} , 
 	{ "name": "tile_in_450_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_450", "role": "we0" }} , 
 	{ "name": "tile_in_450_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "tile_in_450", "role": "d0" }} , 
 	{ "name": "tile_in_451_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "tile_in_451", "role": "address0" }} , 
 	{ "name": "tile_in_451_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_451", "role": "ce0" }} , 
 	{ "name": "tile_in_451_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_451", "role": "we0" }} , 
 	{ "name": "tile_in_451_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "tile_in_451", "role": "d0" }} , 
 	{ "name": "tile_in_452_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "tile_in_452", "role": "address0" }} , 
 	{ "name": "tile_in_452_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_452", "role": "ce0" }} , 
 	{ "name": "tile_in_452_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_452", "role": "we0" }} , 
 	{ "name": "tile_in_452_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "tile_in_452", "role": "d0" }} , 
 	{ "name": "tile_in_453_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "tile_in_453", "role": "address0" }} , 
 	{ "name": "tile_in_453_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_453", "role": "ce0" }} , 
 	{ "name": "tile_in_453_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_453", "role": "we0" }} , 
 	{ "name": "tile_in_453_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "tile_in_453", "role": "d0" }} , 
 	{ "name": "tile_in_454_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "tile_in_454", "role": "address0" }} , 
 	{ "name": "tile_in_454_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_454", "role": "ce0" }} , 
 	{ "name": "tile_in_454_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_454", "role": "we0" }} , 
 	{ "name": "tile_in_454_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "tile_in_454", "role": "d0" }} , 
 	{ "name": "tile_in_455_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "tile_in_455", "role": "address0" }} , 
 	{ "name": "tile_in_455_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_455", "role": "ce0" }} , 
 	{ "name": "tile_in_455_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_455", "role": "we0" }} , 
 	{ "name": "tile_in_455_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "tile_in_455", "role": "d0" }} , 
 	{ "name": "tile_in_456_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "tile_in_456", "role": "address0" }} , 
 	{ "name": "tile_in_456_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_456", "role": "ce0" }} , 
 	{ "name": "tile_in_456_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "tile_in_456", "role": "we0" }} , 
 	{ "name": "tile_in_456_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "tile_in_456", "role": "d0" }} , 
 	{ "name": "tx", "direction": "in", "datatype": "sc_lv", "bitwidth":31, "type": "signal", "bundle":{"name": "tx", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7"],
		"CDFG" : "conv_layer_Pipeline_VITIS_LOOP_43_4_VITIS_LOOP_44_5",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "6176", "EstimateLatencyMax" : "6176",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "gmem", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "gmem_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "input_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "ty", "Type" : "None", "Direction" : "I"},
			{"Name" : "sext_ln37_6", "Type" : "None", "Direction" : "I"},
			{"Name" : "sext_ln37_5", "Type" : "None", "Direction" : "I"},
			{"Name" : "tile_in", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "tile_in_431", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "tile_in_432", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "tile_in_433", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "tile_in_434", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "tile_in_435", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "tile_in_436", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "tile_in_437", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "tile_in_438", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "tile_in_439", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "tile_in_440", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "tile_in_441", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "tile_in_442", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "tile_in_443", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "tile_in_444", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "tile_in_445", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "tile_in_446", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "tile_in_447", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "tile_in_448", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "tile_in_449", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "tile_in_450", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "tile_in_451", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "tile_in_452", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "tile_in_453", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "tile_in_454", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "tile_in_455", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "tile_in_456", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "tx", "Type" : "None", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_43_4_VITIS_LOOP_44_5", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "19", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage18", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage18_subdone", "QuitState" : "ap_ST_fsm_pp0_stage18", "QuitStateIter" : "ap_enable_reg_pp0_iter1", "QuitStateBlock" : "ap_block_pp0_stage18_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_33s_32s_63_2_1_U1", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_5ns_7ns_11_1_1_U2", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.urem_5ns_3ns_2_9_1_U3", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.urem_5ns_3ns_2_9_1_U4", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_5ns_7ns_11_1_1_U5", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_7ns_5ns_11_1_1_U6", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.flow_control_loop_pipe_sequential_init_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	conv_layer_Pipeline_VITIS_LOOP_43_4_VITIS_LOOP_44_5 {
		gmem {Type I LastRead 36 FirstWrite -1}
		input_r {Type I LastRead 0 FirstWrite -1}
		ty {Type I LastRead 0 FirstWrite -1}
		sext_ln37_6 {Type I LastRead 0 FirstWrite -1}
		sext_ln37_5 {Type I LastRead 0 FirstWrite -1}
		tile_in {Type O LastRead -1 FirstWrite 11}
		tile_in_431 {Type O LastRead -1 FirstWrite 11}
		tile_in_432 {Type O LastRead -1 FirstWrite 11}
		tile_in_433 {Type O LastRead -1 FirstWrite 11}
		tile_in_434 {Type O LastRead -1 FirstWrite 11}
		tile_in_435 {Type O LastRead -1 FirstWrite 11}
		tile_in_436 {Type O LastRead -1 FirstWrite 11}
		tile_in_437 {Type O LastRead -1 FirstWrite 11}
		tile_in_438 {Type O LastRead -1 FirstWrite 11}
		tile_in_439 {Type O LastRead -1 FirstWrite 11}
		tile_in_440 {Type O LastRead -1 FirstWrite 11}
		tile_in_441 {Type O LastRead -1 FirstWrite 11}
		tile_in_442 {Type O LastRead -1 FirstWrite 11}
		tile_in_443 {Type O LastRead -1 FirstWrite 11}
		tile_in_444 {Type O LastRead -1 FirstWrite 11}
		tile_in_445 {Type O LastRead -1 FirstWrite 11}
		tile_in_446 {Type O LastRead -1 FirstWrite 11}
		tile_in_447 {Type O LastRead -1 FirstWrite 11}
		tile_in_448 {Type O LastRead -1 FirstWrite 11}
		tile_in_449 {Type O LastRead -1 FirstWrite 11}
		tile_in_450 {Type O LastRead -1 FirstWrite 11}
		tile_in_451 {Type O LastRead -1 FirstWrite 11}
		tile_in_452 {Type O LastRead -1 FirstWrite 11}
		tile_in_453 {Type O LastRead -1 FirstWrite 11}
		tile_in_454 {Type O LastRead -1 FirstWrite 11}
		tile_in_455 {Type O LastRead -1 FirstWrite 11}
		tile_in_456 {Type O LastRead -1 FirstWrite 11}
		tx {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "6176", "Max" : "6176"}
	, {"Name" : "Interval", "Min" : "6176", "Max" : "6176"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	 { m_axi {  { m_axi_gmem_0_AWVALID VALID 1 1 }  { m_axi_gmem_0_AWREADY READY 0 1 }  { m_axi_gmem_0_AWADDR ADDR 1 64 }  { m_axi_gmem_0_AWID ID 1 1 }  { m_axi_gmem_0_AWLEN SIZE 1 32 }  { m_axi_gmem_0_AWSIZE BURST 1 3 }  { m_axi_gmem_0_AWBURST LOCK 1 2 }  { m_axi_gmem_0_AWLOCK CACHE 1 2 }  { m_axi_gmem_0_AWCACHE PROT 1 4 }  { m_axi_gmem_0_AWPROT QOS 1 3 }  { m_axi_gmem_0_AWQOS REGION 1 4 }  { m_axi_gmem_0_AWREGION USER 1 4 }  { m_axi_gmem_0_AWUSER DATA 1 1 }  { m_axi_gmem_0_WVALID VALID 1 1 }  { m_axi_gmem_0_WREADY READY 0 1 }  { m_axi_gmem_0_WDATA FIFONUM 1 8 }  { m_axi_gmem_0_WSTRB STRB 1 1 }  { m_axi_gmem_0_WLAST LAST 1 1 }  { m_axi_gmem_0_WID ID 1 1 }  { m_axi_gmem_0_WUSER DATA 1 1 }  { m_axi_gmem_0_ARVALID VALID 1 1 }  { m_axi_gmem_0_ARREADY READY 0 1 }  { m_axi_gmem_0_ARADDR ADDR 1 64 }  { m_axi_gmem_0_ARID ID 1 1 }  { m_axi_gmem_0_ARLEN SIZE 1 32 }  { m_axi_gmem_0_ARSIZE BURST 1 3 }  { m_axi_gmem_0_ARBURST LOCK 1 2 }  { m_axi_gmem_0_ARLOCK CACHE 1 2 }  { m_axi_gmem_0_ARCACHE PROT 1 4 }  { m_axi_gmem_0_ARPROT QOS 1 3 }  { m_axi_gmem_0_ARQOS REGION 1 4 }  { m_axi_gmem_0_ARREGION USER 1 4 }  { m_axi_gmem_0_ARUSER DATA 1 1 }  { m_axi_gmem_0_RVALID VALID 0 1 }  { m_axi_gmem_0_RREADY READY 1 1 }  { m_axi_gmem_0_RDATA FIFONUM 0 8 }  { m_axi_gmem_0_RLAST LAST 0 1 }  { m_axi_gmem_0_RID ID 0 1 }  { m_axi_gmem_0_RFIFONUM LEN 0 11 }  { m_axi_gmem_0_RUSER DATA 0 1 }  { m_axi_gmem_0_RRESP RESP 0 2 }  { m_axi_gmem_0_BVALID VALID 0 1 }  { m_axi_gmem_0_BREADY READY 1 1 }  { m_axi_gmem_0_BRESP RESP 0 2 }  { m_axi_gmem_0_BID ID 0 1 }  { m_axi_gmem_0_BUSER DATA 0 1 } } }
	input_r { ap_none {  { input_r in_data 0 64 } } }
	ty { ap_none {  { ty in_data 0 31 } } }
	sext_ln37_6 { ap_none {  { sext_ln37_6 in_data 0 31 } } }
	sext_ln37_5 { ap_none {  { sext_ln37_5 in_data 0 32 } } }
	tile_in { ap_memory {  { tile_in_address0 mem_address 1 9 }  { tile_in_ce0 mem_ce 1 1 }  { tile_in_we0 mem_we 1 1 }  { tile_in_d0 mem_din 1 8 } } }
	tile_in_431 { ap_memory {  { tile_in_431_address0 mem_address 1 9 }  { tile_in_431_ce0 mem_ce 1 1 }  { tile_in_431_we0 mem_we 1 1 }  { tile_in_431_d0 mem_din 1 8 } } }
	tile_in_432 { ap_memory {  { tile_in_432_address0 mem_address 1 9 }  { tile_in_432_ce0 mem_ce 1 1 }  { tile_in_432_we0 mem_we 1 1 }  { tile_in_432_d0 mem_din 1 8 } } }
	tile_in_433 { ap_memory {  { tile_in_433_address0 mem_address 1 9 }  { tile_in_433_ce0 mem_ce 1 1 }  { tile_in_433_we0 mem_we 1 1 }  { tile_in_433_d0 mem_din 1 8 } } }
	tile_in_434 { ap_memory {  { tile_in_434_address0 mem_address 1 9 }  { tile_in_434_ce0 mem_ce 1 1 }  { tile_in_434_we0 mem_we 1 1 }  { tile_in_434_d0 mem_din 1 8 } } }
	tile_in_435 { ap_memory {  { tile_in_435_address0 mem_address 1 9 }  { tile_in_435_ce0 mem_ce 1 1 }  { tile_in_435_we0 mem_we 1 1 }  { tile_in_435_d0 mem_din 1 8 } } }
	tile_in_436 { ap_memory {  { tile_in_436_address0 mem_address 1 9 }  { tile_in_436_ce0 mem_ce 1 1 }  { tile_in_436_we0 mem_we 1 1 }  { tile_in_436_d0 mem_din 1 8 } } }
	tile_in_437 { ap_memory {  { tile_in_437_address0 mem_address 1 9 }  { tile_in_437_ce0 mem_ce 1 1 }  { tile_in_437_we0 mem_we 1 1 }  { tile_in_437_d0 mem_din 1 8 }  { tile_in_437_address1 MemPortADDR2 1 9 }  { tile_in_437_ce1 MemPortCE2 1 1 }  { tile_in_437_we1 MemPortWE2 1 1 }  { tile_in_437_d1 MemPortDIN2 1 8 } } }
	tile_in_438 { ap_memory {  { tile_in_438_address0 mem_address 1 9 }  { tile_in_438_ce0 mem_ce 1 1 }  { tile_in_438_we0 mem_we 1 1 }  { tile_in_438_d0 mem_din 1 8 } } }
	tile_in_439 { ap_memory {  { tile_in_439_address0 mem_address 1 9 }  { tile_in_439_ce0 mem_ce 1 1 }  { tile_in_439_we0 mem_we 1 1 }  { tile_in_439_d0 mem_din 1 8 } } }
	tile_in_440 { ap_memory {  { tile_in_440_address0 mem_address 1 9 }  { tile_in_440_ce0 mem_ce 1 1 }  { tile_in_440_we0 mem_we 1 1 }  { tile_in_440_d0 mem_din 1 8 } } }
	tile_in_441 { ap_memory {  { tile_in_441_address0 mem_address 1 9 }  { tile_in_441_ce0 mem_ce 1 1 }  { tile_in_441_we0 mem_we 1 1 }  { tile_in_441_d0 mem_din 1 8 } } }
	tile_in_442 { ap_memory {  { tile_in_442_address0 mem_address 1 9 }  { tile_in_442_ce0 mem_ce 1 1 }  { tile_in_442_we0 mem_we 1 1 }  { tile_in_442_d0 mem_din 1 8 } } }
	tile_in_443 { ap_memory {  { tile_in_443_address0 mem_address 1 9 }  { tile_in_443_ce0 mem_ce 1 1 }  { tile_in_443_we0 mem_we 1 1 }  { tile_in_443_d0 mem_din 1 8 } } }
	tile_in_444 { ap_memory {  { tile_in_444_address0 mem_address 1 9 }  { tile_in_444_ce0 mem_ce 1 1 }  { tile_in_444_we0 mem_we 1 1 }  { tile_in_444_d0 mem_din 1 8 } } }
	tile_in_445 { ap_memory {  { tile_in_445_address0 mem_address 1 9 }  { tile_in_445_ce0 mem_ce 1 1 }  { tile_in_445_we0 mem_we 1 1 }  { tile_in_445_d0 mem_din 1 8 } } }
	tile_in_446 { ap_memory {  { tile_in_446_address0 mem_address 1 9 }  { tile_in_446_ce0 mem_ce 1 1 }  { tile_in_446_we0 mem_we 1 1 }  { tile_in_446_d0 mem_din 1 8 } } }
	tile_in_447 { ap_memory {  { tile_in_447_address0 mem_address 1 9 }  { tile_in_447_ce0 mem_ce 1 1 }  { tile_in_447_we0 mem_we 1 1 }  { tile_in_447_d0 mem_din 1 8 } } }
	tile_in_448 { ap_memory {  { tile_in_448_address0 mem_address 1 9 }  { tile_in_448_ce0 mem_ce 1 1 }  { tile_in_448_we0 mem_we 1 1 }  { tile_in_448_d0 mem_din 1 8 } } }
	tile_in_449 { ap_memory {  { tile_in_449_address0 mem_address 1 9 }  { tile_in_449_ce0 mem_ce 1 1 }  { tile_in_449_we0 mem_we 1 1 }  { tile_in_449_d0 mem_din 1 8 } } }
	tile_in_450 { ap_memory {  { tile_in_450_address0 mem_address 1 9 }  { tile_in_450_ce0 mem_ce 1 1 }  { tile_in_450_we0 mem_we 1 1 }  { tile_in_450_d0 mem_din 1 8 } } }
	tile_in_451 { ap_memory {  { tile_in_451_address0 mem_address 1 9 }  { tile_in_451_ce0 mem_ce 1 1 }  { tile_in_451_we0 mem_we 1 1 }  { tile_in_451_d0 mem_din 1 8 } } }
	tile_in_452 { ap_memory {  { tile_in_452_address0 mem_address 1 9 }  { tile_in_452_ce0 mem_ce 1 1 }  { tile_in_452_we0 mem_we 1 1 }  { tile_in_452_d0 mem_din 1 8 } } }
	tile_in_453 { ap_memory {  { tile_in_453_address0 mem_address 1 9 }  { tile_in_453_ce0 mem_ce 1 1 }  { tile_in_453_we0 mem_we 1 1 }  { tile_in_453_d0 mem_din 1 8 } } }
	tile_in_454 { ap_memory {  { tile_in_454_address0 mem_address 1 9 }  { tile_in_454_ce0 mem_ce 1 1 }  { tile_in_454_we0 mem_we 1 1 }  { tile_in_454_d0 mem_din 1 8 } } }
	tile_in_455 { ap_memory {  { tile_in_455_address0 mem_address 1 9 }  { tile_in_455_ce0 mem_ce 1 1 }  { tile_in_455_we0 mem_we 1 1 }  { tile_in_455_d0 mem_din 1 8 } } }
	tile_in_456 { ap_memory {  { tile_in_456_address0 mem_address 1 9 }  { tile_in_456_ce0 mem_ce 1 1 }  { tile_in_456_we0 mem_we 1 1 }  { tile_in_456_d0 mem_din 1 8 } } }
	tx { ap_none {  { tx in_data 0 31 } } }
}
