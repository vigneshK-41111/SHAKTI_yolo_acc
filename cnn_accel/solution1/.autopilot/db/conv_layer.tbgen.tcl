set moduleName conv_layer
set isTopModule 0
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
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
set C_modelName {conv_layer}
set C_modelType { void 0 }
set ap_memory_interface_dict [dict create]
set C_modelArgList {
	{ gmem int 8 regular {axi_master 2}  }
	{ input_r int 64 regular  }
	{ output_r int 64 regular  }
	{ H int 32 regular  }
}
set hasAXIMCache 0
set l_AXIML2Cache [list]
set AXIMCacheInstDict [dict create]
set C_modelArgMapList {[ 
	{ "Name" : "gmem", "interface" : "axi_master", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[ {"cElement": [{"cName": "input_r","offset": { "type": "dynamic","port_name": "input_r","bundle": "control"},"direction": "READONLY"},{"cName": "output_r","offset": { "type": "dynamic","port_name": "output_r","bundle": "control"},"direction": "READWRITE"}]}]} , 
 	{ "Name" : "input_r", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "output_r", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "H", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 55
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
	{ output_r sc_in sc_lv 64 signal 2 } 
	{ H sc_in sc_lv 32 signal 3 } 
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
 	{ "name": "output_r", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "output_r", "role": "default" }} , 
 	{ "name": "H", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "H", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "37", "165"],
		"CDFG" : "conv_layer",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "gmem", "Type" : "MAXI", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "29", "SubInstance" : "grp_conv_layer_Pipeline_VITIS_LOOP_43_4_VITIS_LOOP_44_5_fu_279", "Port" : "gmem", "Inst_start_state" : "4", "Inst_end_state" : "5"},
					{"ID" : "165", "SubInstance" : "grp_conv_layer_Pipeline_VITIS_LOOP_96_13_VITIS_LOOP_97_14_fu_406", "Port" : "gmem", "Inst_start_state" : "8", "Inst_end_state" : "9"}]},
			{"Name" : "input_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "H", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_0_conv_weight_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317", "Port" : "w_0_conv_weight_bias", "Inst_start_state" : "6", "Inst_end_state" : "7"}]},
			{"Name" : "w_0_conv_weight_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317", "Port" : "w_0_conv_weight_0", "Inst_start_state" : "6", "Inst_end_state" : "7"}]},
			{"Name" : "w_0_conv_weight_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317", "Port" : "w_0_conv_weight_1", "Inst_start_state" : "6", "Inst_end_state" : "7"}]},
			{"Name" : "w_0_conv_weight_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317", "Port" : "w_0_conv_weight_2", "Inst_start_state" : "6", "Inst_end_state" : "7"}]},
			{"Name" : "w_0_conv_weight_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317", "Port" : "w_0_conv_weight_3", "Inst_start_state" : "6", "Inst_end_state" : "7"}]},
			{"Name" : "w_0_conv_weight_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317", "Port" : "w_0_conv_weight_4", "Inst_start_state" : "6", "Inst_end_state" : "7"}]},
			{"Name" : "w_0_conv_weight_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317", "Port" : "w_0_conv_weight_5", "Inst_start_state" : "6", "Inst_end_state" : "7"}]},
			{"Name" : "w_0_conv_weight_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317", "Port" : "w_0_conv_weight_6", "Inst_start_state" : "6", "Inst_end_state" : "7"}]},
			{"Name" : "w_0_conv_weight_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317", "Port" : "w_0_conv_weight_7", "Inst_start_state" : "6", "Inst_end_state" : "7"}]},
			{"Name" : "w_0_conv_weight_8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317", "Port" : "w_0_conv_weight_8", "Inst_start_state" : "6", "Inst_end_state" : "7"}]},
			{"Name" : "w_0_conv_weight_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317", "Port" : "w_0_conv_weight_9", "Inst_start_state" : "6", "Inst_end_state" : "7"}]},
			{"Name" : "w_0_conv_weight_10", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317", "Port" : "w_0_conv_weight_10", "Inst_start_state" : "6", "Inst_end_state" : "7"}]},
			{"Name" : "w_0_conv_weight_11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317", "Port" : "w_0_conv_weight_11", "Inst_start_state" : "6", "Inst_end_state" : "7"}]},
			{"Name" : "w_0_conv_weight_12", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317", "Port" : "w_0_conv_weight_12", "Inst_start_state" : "6", "Inst_end_state" : "7"}]},
			{"Name" : "w_0_conv_weight_13", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317", "Port" : "w_0_conv_weight_13", "Inst_start_state" : "6", "Inst_end_state" : "7"}]},
			{"Name" : "w_0_conv_weight_14", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317", "Port" : "w_0_conv_weight_14", "Inst_start_state" : "6", "Inst_end_state" : "7"}]},
			{"Name" : "w_0_conv_weight_15", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317", "Port" : "w_0_conv_weight_15", "Inst_start_state" : "6", "Inst_end_state" : "7"}]},
			{"Name" : "w_0_conv_weight_16", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317", "Port" : "w_0_conv_weight_16", "Inst_start_state" : "6", "Inst_end_state" : "7"}]},
			{"Name" : "w_0_conv_weight_17", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317", "Port" : "w_0_conv_weight_17", "Inst_start_state" : "6", "Inst_end_state" : "7"}]},
			{"Name" : "w_0_conv_weight_18", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317", "Port" : "w_0_conv_weight_18", "Inst_start_state" : "6", "Inst_end_state" : "7"}]},
			{"Name" : "w_0_conv_weight_19", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317", "Port" : "w_0_conv_weight_19", "Inst_start_state" : "6", "Inst_end_state" : "7"}]},
			{"Name" : "w_0_conv_weight_20", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317", "Port" : "w_0_conv_weight_20", "Inst_start_state" : "6", "Inst_end_state" : "7"}]},
			{"Name" : "w_0_conv_weight_21", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317", "Port" : "w_0_conv_weight_21", "Inst_start_state" : "6", "Inst_end_state" : "7"}]},
			{"Name" : "w_0_conv_weight_22", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317", "Port" : "w_0_conv_weight_22", "Inst_start_state" : "6", "Inst_end_state" : "7"}]},
			{"Name" : "w_0_conv_weight_23", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317", "Port" : "w_0_conv_weight_23", "Inst_start_state" : "6", "Inst_end_state" : "7"}]},
			{"Name" : "w_0_conv_weight_24", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317", "Port" : "w_0_conv_weight_24", "Inst_start_state" : "6", "Inst_end_state" : "7"}]},
			{"Name" : "w_0_conv_weight_25", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317", "Port" : "w_0_conv_weight_25", "Inst_start_state" : "6", "Inst_end_state" : "7"}]},
			{"Name" : "w_0_conv_weight_26", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317", "Port" : "w_0_conv_weight_26", "Inst_start_state" : "6", "Inst_end_state" : "7"}]}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_40_3", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "9", "FirstState" : "ap_ST_fsm_state4", "LastState" : ["ap_ST_fsm_state9"], "QuitState" : ["ap_ST_fsm_state4"], "PreState" : ["ap_ST_fsm_state3"], "PostState" : ["ap_ST_fsm_state3"], "OneDepthLoop" : "0", "OneStateBlock": ""}},
			{"Name" : "VITIS_LOOP_39_2", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "9", "FirstState" : "ap_ST_fsm_state3", "LastState" : ["ap_ST_fsm_state4"], "QuitState" : ["ap_ST_fsm_state3"], "PreState" : ["ap_ST_fsm_state2"], "PostState" : ["ap_ST_fsm_state2"], "OneDepthLoop" : "0", "OneStateBlock": ""}},
			{"Name" : "VITIS_LOOP_37_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "9", "FirstState" : "ap_ST_fsm_state2", "LastState" : ["ap_ST_fsm_state3"], "QuitState" : ["ap_ST_fsm_state2"], "PreState" : ["ap_ST_fsm_state1"], "PostState" : ["ap_ST_fsm_state1"], "OneDepthLoop" : "0", "OneStateBlock": ""}}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tile_in_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tile_in_431_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tile_in_432_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tile_in_433_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tile_in_434_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tile_in_435_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tile_in_436_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tile_in_437_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tile_in_438_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tile_in_439_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tile_in_440_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tile_in_441_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tile_in_442_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tile_in_443_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tile_in_444_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tile_in_445_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tile_in_446_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tile_in_447_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tile_in_448_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tile_in_449_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tile_in_450_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tile_in_451_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tile_in_452_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tile_in_453_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tile_in_454_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tile_in_455_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tile_in_456_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tile_out_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_43_4_VITIS_LOOP_44_5_fu_279", "Parent" : "0", "Child" : ["30", "31", "32", "33", "34", "35", "36"],
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
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_43_4_VITIS_LOOP_44_5_fu_279.mul_33s_32s_63_2_1_U1", "Parent" : "29"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_43_4_VITIS_LOOP_44_5_fu_279.mul_5ns_7ns_11_1_1_U2", "Parent" : "29"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_43_4_VITIS_LOOP_44_5_fu_279.urem_5ns_3ns_2_9_1_U3", "Parent" : "29"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_43_4_VITIS_LOOP_44_5_fu_279.urem_5ns_3ns_2_9_1_U4", "Parent" : "29"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_43_4_VITIS_LOOP_44_5_fu_279.mul_5ns_7ns_11_1_1_U5", "Parent" : "29"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_43_4_VITIS_LOOP_44_5_fu_279.mul_7ns_5ns_11_1_1_U6", "Parent" : "29"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_43_4_VITIS_LOOP_44_5_fu_279.flow_control_loop_pipe_sequential_init_U", "Parent" : "29"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317", "Parent" : "0", "Child" : ["38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127", "128", "129", "130", "131", "132", "133", "134", "135", "136", "137", "138", "139", "140", "141", "142", "143", "144", "145", "146", "147", "148", "149", "150", "151", "152", "153", "154", "155", "156", "157", "158", "159", "160", "161", "162", "163", "164"],
		"CDFG" : "conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2067", "EstimateLatencyMax" : "2067",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "empty", "Type" : "None", "Direction" : "I"},
			{"Name" : "tile_out", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "tile_in", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "tile_in_431", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "tile_in_432", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "tile_in_433", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "tile_in_434", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "tile_in_435", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "tile_in_436", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "tile_in_437", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "tile_in_438", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "tile_in_439", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "tile_in_440", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "tile_in_441", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "tile_in_442", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "tile_in_443", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "tile_in_444", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "tile_in_445", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "tile_in_446", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "tile_in_447", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "tile_in_448", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "tile_in_449", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "tile_in_450", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "tile_in_451", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "tile_in_452", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "tile_in_453", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "tile_in_454", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "tile_in_455", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "tile_in_456", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w_0_conv_weight_bias", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w_0_conv_weight_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w_0_conv_weight_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w_0_conv_weight_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w_0_conv_weight_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w_0_conv_weight_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w_0_conv_weight_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w_0_conv_weight_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w_0_conv_weight_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w_0_conv_weight_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w_0_conv_weight_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w_0_conv_weight_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w_0_conv_weight_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w_0_conv_weight_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w_0_conv_weight_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w_0_conv_weight_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w_0_conv_weight_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w_0_conv_weight_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w_0_conv_weight_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w_0_conv_weight_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w_0_conv_weight_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w_0_conv_weight_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w_0_conv_weight_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w_0_conv_weight_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w_0_conv_weight_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w_0_conv_weight_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w_0_conv_weight_25", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w_0_conv_weight_26", "Type" : "Memory", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter18", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter18", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.w_0_conv_weight_bias_U", "Parent" : "37"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.w_0_conv_weight_0_U", "Parent" : "37"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.w_0_conv_weight_1_U", "Parent" : "37"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.w_0_conv_weight_2_U", "Parent" : "37"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.w_0_conv_weight_3_U", "Parent" : "37"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.w_0_conv_weight_4_U", "Parent" : "37"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.w_0_conv_weight_5_U", "Parent" : "37"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.w_0_conv_weight_6_U", "Parent" : "37"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.w_0_conv_weight_7_U", "Parent" : "37"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.w_0_conv_weight_8_U", "Parent" : "37"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.w_0_conv_weight_9_U", "Parent" : "37"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.w_0_conv_weight_10_U", "Parent" : "37"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.w_0_conv_weight_11_U", "Parent" : "37"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.w_0_conv_weight_12_U", "Parent" : "37"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.w_0_conv_weight_13_U", "Parent" : "37"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.w_0_conv_weight_14_U", "Parent" : "37"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.w_0_conv_weight_15_U", "Parent" : "37"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.w_0_conv_weight_16_U", "Parent" : "37"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.w_0_conv_weight_17_U", "Parent" : "37"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.w_0_conv_weight_18_U", "Parent" : "37"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.w_0_conv_weight_19_U", "Parent" : "37"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.w_0_conv_weight_20_U", "Parent" : "37"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.w_0_conv_weight_21_U", "Parent" : "37"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.w_0_conv_weight_22_U", "Parent" : "37"},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.w_0_conv_weight_23_U", "Parent" : "37"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.w_0_conv_weight_24_U", "Parent" : "37"},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.w_0_conv_weight_25_U", "Parent" : "37"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.w_0_conv_weight_26_U", "Parent" : "37"},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U44", "Parent" : "37"},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U45", "Parent" : "37"},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U46", "Parent" : "37"},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U47", "Parent" : "37"},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U48", "Parent" : "37"},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U49", "Parent" : "37"},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U50", "Parent" : "37"},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U51", "Parent" : "37"},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U52", "Parent" : "37"},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U53", "Parent" : "37"},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U54", "Parent" : "37"},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U55", "Parent" : "37"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U56", "Parent" : "37"},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U57", "Parent" : "37"},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U58", "Parent" : "37"},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U59", "Parent" : "37"},
	{"ID" : "82", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U60", "Parent" : "37"},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U61", "Parent" : "37"},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U62", "Parent" : "37"},
	{"ID" : "85", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U63", "Parent" : "37"},
	{"ID" : "86", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U64", "Parent" : "37"},
	{"ID" : "87", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U65", "Parent" : "37"},
	{"ID" : "88", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U66", "Parent" : "37"},
	{"ID" : "89", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U67", "Parent" : "37"},
	{"ID" : "90", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U68", "Parent" : "37"},
	{"ID" : "91", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U69", "Parent" : "37"},
	{"ID" : "92", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U70", "Parent" : "37"},
	{"ID" : "93", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.urem_5ns_3ns_2_9_1_U71", "Parent" : "37"},
	{"ID" : "94", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.urem_5ns_3ns_2_9_1_U72", "Parent" : "37"},
	{"ID" : "95", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mul_5ns_7ns_11_1_1_U73", "Parent" : "37"},
	{"ID" : "96", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mul_5ns_7ns_11_1_1_U74", "Parent" : "37"},
	{"ID" : "97", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mul_5ns_7ns_11_1_1_U75", "Parent" : "37"},
	{"ID" : "98", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mul_5ns_7ns_11_1_1_U76", "Parent" : "37"},
	{"ID" : "99", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mul_5ns_7ns_11_1_1_U77", "Parent" : "37"},
	{"ID" : "100", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mul_5ns_7ns_11_1_1_U78", "Parent" : "37"},
	{"ID" : "101", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mul_7ns_5ns_11_1_1_U79", "Parent" : "37"},
	{"ID" : "102", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mul_7ns_5ns_11_1_1_U80", "Parent" : "37"},
	{"ID" : "103", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mul_7ns_5ns_11_1_1_U81", "Parent" : "37"},
	{"ID" : "104", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mul_7ns_5ns_11_1_1_U82", "Parent" : "37"},
	{"ID" : "105", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mul_7ns_5ns_11_1_1_U83", "Parent" : "37"},
	{"ID" : "106", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mul_7ns_5ns_11_1_1_U84", "Parent" : "37"},
	{"ID" : "107", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mul_7ns_5ns_11_1_1_U85", "Parent" : "37"},
	{"ID" : "108", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mul_7ns_5ns_11_1_1_U86", "Parent" : "37"},
	{"ID" : "109", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mul_7ns_5ns_11_1_1_U87", "Parent" : "37"},
	{"ID" : "110", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U88", "Parent" : "37"},
	{"ID" : "111", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U89", "Parent" : "37"},
	{"ID" : "112", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U90", "Parent" : "37"},
	{"ID" : "113", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U91", "Parent" : "37"},
	{"ID" : "114", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U92", "Parent" : "37"},
	{"ID" : "115", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U93", "Parent" : "37"},
	{"ID" : "116", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U94", "Parent" : "37"},
	{"ID" : "117", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U95", "Parent" : "37"},
	{"ID" : "118", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U96", "Parent" : "37"},
	{"ID" : "119", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U97", "Parent" : "37"},
	{"ID" : "120", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U98", "Parent" : "37"},
	{"ID" : "121", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U99", "Parent" : "37"},
	{"ID" : "122", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U100", "Parent" : "37"},
	{"ID" : "123", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U101", "Parent" : "37"},
	{"ID" : "124", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U102", "Parent" : "37"},
	{"ID" : "125", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U103", "Parent" : "37"},
	{"ID" : "126", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U104", "Parent" : "37"},
	{"ID" : "127", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U105", "Parent" : "37"},
	{"ID" : "128", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U106", "Parent" : "37"},
	{"ID" : "129", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U107", "Parent" : "37"},
	{"ID" : "130", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U108", "Parent" : "37"},
	{"ID" : "131", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U109", "Parent" : "37"},
	{"ID" : "132", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U110", "Parent" : "37"},
	{"ID" : "133", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U111", "Parent" : "37"},
	{"ID" : "134", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U112", "Parent" : "37"},
	{"ID" : "135", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U113", "Parent" : "37"},
	{"ID" : "136", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.sparsemux_7_2_8_1_1_U114", "Parent" : "37"},
	{"ID" : "137", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mul_8s_7s_14_1_1_U115", "Parent" : "37"},
	{"ID" : "138", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mul_8s_7s_15_1_1_U116", "Parent" : "37"},
	{"ID" : "139", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mul_8s_6s_14_1_1_U117", "Parent" : "37"},
	{"ID" : "140", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mul_8s_7s_15_1_1_U118", "Parent" : "37"},
	{"ID" : "141", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mul_8s_7s_15_1_1_U119", "Parent" : "37"},
	{"ID" : "142", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mul_8s_6s_14_1_1_U120", "Parent" : "37"},
	{"ID" : "143", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mul_8s_8s_16_1_1_U121", "Parent" : "37"},
	{"ID" : "144", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mul_8s_7s_15_1_1_U122", "Parent" : "37"},
	{"ID" : "145", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mul_8s_8s_16_1_1_U123", "Parent" : "37"},
	{"ID" : "146", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mul_8s_7s_15_1_1_U124", "Parent" : "37"},
	{"ID" : "147", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mul_8s_7s_15_1_1_U125", "Parent" : "37"},
	{"ID" : "148", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mac_muladd_8s_7s_15s_15_4_1_U126", "Parent" : "37"},
	{"ID" : "149", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mac_muladd_8s_7s_15s_15_4_1_U127", "Parent" : "37"},
	{"ID" : "150", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mac_muladd_8s_7s_16s_16_4_1_U128", "Parent" : "37"},
	{"ID" : "151", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mac_muladd_8s_6s_14s_14_4_1_U129", "Parent" : "37"},
	{"ID" : "152", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mac_muladd_8s_7s_15s_15_4_1_U130", "Parent" : "37"},
	{"ID" : "153", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mac_muladd_8s_7s_15s_15_4_1_U131", "Parent" : "37"},
	{"ID" : "154", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mac_muladd_8s_7s_15s_15_4_1_U132", "Parent" : "37"},
	{"ID" : "155", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mac_muladd_8s_7s_16s_16_4_1_U133", "Parent" : "37"},
	{"ID" : "156", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mac_muladd_8s_6s_15s_15_4_1_U134", "Parent" : "37"},
	{"ID" : "157", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mac_muladd_8s_6s_8s_13_4_1_U135", "Parent" : "37"},
	{"ID" : "158", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mac_muladd_8s_6s_14s_14_4_1_U136", "Parent" : "37"},
	{"ID" : "159", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mac_muladd_8s_6s_14s_14_4_1_U137", "Parent" : "37"},
	{"ID" : "160", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mac_muladd_8s_7s_15s_16_4_1_U138", "Parent" : "37"},
	{"ID" : "161", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mac_muladd_8s_7s_15ns_15_4_1_U139", "Parent" : "37"},
	{"ID" : "162", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mac_muladd_8s_6s_15s_15_4_1_U140", "Parent" : "37"},
	{"ID" : "163", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.mac_muladd_8s_7s_15s_16_4_1_U141", "Parent" : "37"},
	{"ID" : "164", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317.flow_control_loop_pipe_sequential_init_U", "Parent" : "37"},
	{"ID" : "165", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_96_13_VITIS_LOOP_97_14_fu_406", "Parent" : "0", "Child" : ["166", "167"],
		"CDFG" : "conv_layer_Pipeline_VITIS_LOOP_96_13_VITIS_LOOP_97_14",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2060", "EstimateLatencyMax" : "2060",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "ty", "Type" : "None", "Direction" : "I"},
			{"Name" : "H", "Type" : "None", "Direction" : "I"},
			{"Name" : "sext_ln37", "Type" : "None", "Direction" : "I"},
			{"Name" : "tile_out", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "tx", "Type" : "None", "Direction" : "I"},
			{"Name" : "zext_ln37", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "gmem", "Type" : "MAXI", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "gmem_blk_n_AW", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_W", "Type" : "RtlSignal"},
					{"Name" : "gmem_blk_n_B", "Type" : "RtlSignal"}]}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_96_13_VITIS_LOOP_97_14", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "8", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage2", "LastStateIter" : "ap_enable_reg_pp0_iter2", "LastStateBlock" : "ap_block_pp0_stage2_subdone", "QuitState" : "ap_ST_fsm_pp0_stage2", "QuitStateIter" : "ap_enable_reg_pp0_iter2", "QuitStateBlock" : "ap_block_pp0_stage2_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "166", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_96_13_VITIS_LOOP_97_14_fu_406.mul_32ns_32s_60_2_1_U213", "Parent" : "165"},
	{"ID" : "167", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_layer_Pipeline_VITIS_LOOP_96_13_VITIS_LOOP_97_14_fu_406.flow_control_loop_pipe_sequential_init_U", "Parent" : "165"}]}


set ArgLastReadFirstWriteLatency {
	conv_layer {
		gmem {Type IO LastRead 36 FirstWrite -1}
		input_r {Type I LastRead 0 FirstWrite -1}
		output_r {Type I LastRead 0 FirstWrite -1}
		H {Type I LastRead 0 FirstWrite -1}
		w_0_conv_weight_bias {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_0 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_1 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_2 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_3 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_4 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_5 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_6 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_7 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_8 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_9 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_10 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_11 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_12 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_13 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_14 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_15 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_16 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_17 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_18 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_19 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_20 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_21 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_22 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_23 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_24 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_25 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_26 {Type I LastRead -1 FirstWrite -1}}
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
		tx {Type I LastRead 0 FirstWrite -1}}
	conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9 {
		empty {Type I LastRead 0 FirstWrite -1}
		tile_out {Type O LastRead -1 FirstWrite 18}
		tile_in {Type I LastRead 11 FirstWrite -1}
		tile_in_431 {Type I LastRead 11 FirstWrite -1}
		tile_in_432 {Type I LastRead 11 FirstWrite -1}
		tile_in_433 {Type I LastRead 11 FirstWrite -1}
		tile_in_434 {Type I LastRead 11 FirstWrite -1}
		tile_in_435 {Type I LastRead 11 FirstWrite -1}
		tile_in_436 {Type I LastRead 11 FirstWrite -1}
		tile_in_437 {Type I LastRead 11 FirstWrite -1}
		tile_in_438 {Type I LastRead 11 FirstWrite -1}
		tile_in_439 {Type I LastRead 11 FirstWrite -1}
		tile_in_440 {Type I LastRead 11 FirstWrite -1}
		tile_in_441 {Type I LastRead 11 FirstWrite -1}
		tile_in_442 {Type I LastRead 11 FirstWrite -1}
		tile_in_443 {Type I LastRead 11 FirstWrite -1}
		tile_in_444 {Type I LastRead 11 FirstWrite -1}
		tile_in_445 {Type I LastRead 11 FirstWrite -1}
		tile_in_446 {Type I LastRead 11 FirstWrite -1}
		tile_in_447 {Type I LastRead 11 FirstWrite -1}
		tile_in_448 {Type I LastRead 11 FirstWrite -1}
		tile_in_449 {Type I LastRead 11 FirstWrite -1}
		tile_in_450 {Type I LastRead 11 FirstWrite -1}
		tile_in_451 {Type I LastRead 11 FirstWrite -1}
		tile_in_452 {Type I LastRead 11 FirstWrite -1}
		tile_in_453 {Type I LastRead 11 FirstWrite -1}
		tile_in_454 {Type I LastRead 11 FirstWrite -1}
		tile_in_455 {Type I LastRead 11 FirstWrite -1}
		tile_in_456 {Type I LastRead 11 FirstWrite -1}
		w_0_conv_weight_bias {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_0 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_1 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_2 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_3 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_4 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_5 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_6 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_7 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_8 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_9 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_10 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_11 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_12 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_13 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_14 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_15 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_16 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_17 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_18 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_19 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_20 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_21 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_22 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_23 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_24 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_25 {Type I LastRead -1 FirstWrite -1}
		w_0_conv_weight_26 {Type I LastRead -1 FirstWrite -1}}
	conv_layer_Pipeline_VITIS_LOOP_96_13_VITIS_LOOP_97_14 {
		ty {Type I LastRead 0 FirstWrite -1}
		H {Type I LastRead 0 FirstWrite -1}
		sext_ln37 {Type I LastRead 0 FirstWrite -1}
		tile_out {Type I LastRead 5 FirstWrite -1}
		tx {Type I LastRead 0 FirstWrite -1}
		zext_ln37 {Type I LastRead 0 FirstWrite -1}
		output_r {Type I LastRead 0 FirstWrite -1}
		gmem {Type O LastRead 14 FirstWrite 6}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "-1", "Max" : "-1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	 { m_axi {  { m_axi_gmem_0_AWVALID VALID 1 1 }  { m_axi_gmem_0_AWREADY READY 0 1 }  { m_axi_gmem_0_AWADDR ADDR 1 64 }  { m_axi_gmem_0_AWID ID 1 1 }  { m_axi_gmem_0_AWLEN SIZE 1 32 }  { m_axi_gmem_0_AWSIZE BURST 1 3 }  { m_axi_gmem_0_AWBURST LOCK 1 2 }  { m_axi_gmem_0_AWLOCK CACHE 1 2 }  { m_axi_gmem_0_AWCACHE PROT 1 4 }  { m_axi_gmem_0_AWPROT QOS 1 3 }  { m_axi_gmem_0_AWQOS REGION 1 4 }  { m_axi_gmem_0_AWREGION USER 1 4 }  { m_axi_gmem_0_AWUSER DATA 1 1 }  { m_axi_gmem_0_WVALID VALID 1 1 }  { m_axi_gmem_0_WREADY READY 0 1 }  { m_axi_gmem_0_WDATA FIFONUM 1 8 }  { m_axi_gmem_0_WSTRB STRB 1 1 }  { m_axi_gmem_0_WLAST LAST 1 1 }  { m_axi_gmem_0_WID ID 1 1 }  { m_axi_gmem_0_WUSER DATA 1 1 }  { m_axi_gmem_0_ARVALID VALID 1 1 }  { m_axi_gmem_0_ARREADY READY 0 1 }  { m_axi_gmem_0_ARADDR ADDR 1 64 }  { m_axi_gmem_0_ARID ID 1 1 }  { m_axi_gmem_0_ARLEN SIZE 1 32 }  { m_axi_gmem_0_ARSIZE BURST 1 3 }  { m_axi_gmem_0_ARBURST LOCK 1 2 }  { m_axi_gmem_0_ARLOCK CACHE 1 2 }  { m_axi_gmem_0_ARCACHE PROT 1 4 }  { m_axi_gmem_0_ARPROT QOS 1 3 }  { m_axi_gmem_0_ARQOS REGION 1 4 }  { m_axi_gmem_0_ARREGION USER 1 4 }  { m_axi_gmem_0_ARUSER DATA 1 1 }  { m_axi_gmem_0_RVALID VALID 0 1 }  { m_axi_gmem_0_RREADY READY 1 1 }  { m_axi_gmem_0_RDATA FIFONUM 0 8 }  { m_axi_gmem_0_RLAST LAST 0 1 }  { m_axi_gmem_0_RID ID 0 1 }  { m_axi_gmem_0_RFIFONUM LEN 0 11 }  { m_axi_gmem_0_RUSER DATA 0 1 }  { m_axi_gmem_0_RRESP RESP 0 2 }  { m_axi_gmem_0_BVALID VALID 0 1 }  { m_axi_gmem_0_BREADY READY 1 1 }  { m_axi_gmem_0_BRESP RESP 0 2 }  { m_axi_gmem_0_BID ID 0 1 }  { m_axi_gmem_0_BUSER DATA 0 1 } } }
	input_r { ap_none {  { input_r in_data 0 64 } } }
	output_r { ap_none {  { output_r in_data 0 64 } } }
	H { ap_none {  { H in_data 0 32 } } }
}
