set ModuleHierarchy {[{
"Name" : "cnn_accel","ID" : "0","Type" : "sequential",
"SubInsts" : [
	{"Name" : "grp_conv_layer_fu_280","ID" : "1","Type" : "sequential",
		"SubLoops" : [
		{"Name" : "VITIS_LOOP_37_1","ID" : "2","Type" : "no",
		"SubLoops" : [
		{"Name" : "VITIS_LOOP_39_2","ID" : "3","Type" : "no",
			"SubLoops" : [
			{"Name" : "VITIS_LOOP_40_3","ID" : "4","Type" : "no",
				"SubInsts" : [
				{"Name" : "grp_conv_layer_Pipeline_VITIS_LOOP_43_4_VITIS_LOOP_44_5_fu_279","ID" : "5","Type" : "sequential",
						"SubLoops" : [
						{"Name" : "VITIS_LOOP_43_4_VITIS_LOOP_44_5","ID" : "6","Type" : "pipeline"},]},
				{"Name" : "grp_conv_layer_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_317","ID" : "7","Type" : "sequential",
						"SubLoops" : [
						{"Name" : "VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9","ID" : "8","Type" : "pipeline"},]},
				{"Name" : "grp_conv_layer_Pipeline_VITIS_LOOP_96_13_VITIS_LOOP_97_14_fu_406","ID" : "9","Type" : "sequential",
						"SubLoops" : [
						{"Name" : "VITIS_LOOP_96_13_VITIS_LOOP_97_14","ID" : "10","Type" : "pipeline"},]},]},]},]},]},
	{"Name" : "grp_conv_layer_1_fu_348","ID" : "11","Type" : "sequential",
		"SubLoops" : [
		{"Name" : "VITIS_LOOP_37_1","ID" : "12","Type" : "no",
		"SubLoops" : [
		{"Name" : "VITIS_LOOP_39_2","ID" : "13","Type" : "no",
			"SubLoops" : [
			{"Name" : "VITIS_LOOP_40_3","ID" : "14","Type" : "no",
				"SubInsts" : [
				{"Name" : "grp_conv_layer_1_Pipeline_VITIS_LOOP_43_4_VITIS_LOOP_44_5_fu_829","ID" : "15","Type" : "sequential",
						"SubLoops" : [
						{"Name" : "VITIS_LOOP_43_4_VITIS_LOOP_44_5","ID" : "16","Type" : "pipeline"},]},
				{"Name" : "grp_conv_layer_1_Pipeline_VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_984","ID" : "17","Type" : "sequential",
						"SubLoops" : [
						{"Name" : "VITIS_LOOP_62_7_VITIS_LOOP_63_8_VITIS_LOOP_64_9","ID" : "18","Type" : "pipeline"},]},
				{"Name" : "grp_conv_layer_1_Pipeline_VITIS_LOOP_96_13_VITIS_LOOP_97_14_fu_1280","ID" : "19","Type" : "sequential",
						"SubLoops" : [
						{"Name" : "VITIS_LOOP_96_13_VITIS_LOOP_97_14","ID" : "20","Type" : "pipeline"},]},]},]},]},]},
	{"Name" : "grp_conv_layer_2_fu_502","ID" : "21","Type" : "sequential",
		"SubLoops" : [
		{"Name" : "VITIS_LOOP_37_1","ID" : "22","Type" : "no",
		"SubLoops" : [
		{"Name" : "VITIS_LOOP_39_2","ID" : "23","Type" : "no",
			"SubLoops" : [
			{"Name" : "VITIS_LOOP_40_3","ID" : "24","Type" : "no",
				"SubInsts" : [
				{"Name" : "grp_conv_layer_2_Pipeline_VITIS_LOOP_43_4_VITIS_LOOP_44_5_fu_5359","ID" : "25","Type" : "sequential",
						"SubLoops" : [
						{"Name" : "VITIS_LOOP_43_4_VITIS_LOOP_44_5","ID" : "26","Type" : "no"},]},
				{"Name" : "grp_conv_layer_2_Pipeline_VITIS_LOOP_96_13_VITIS_LOOP_97_14_fu_5658","ID" : "27","Type" : "sequential",
						"SubLoops" : [
						{"Name" : "VITIS_LOOP_96_13_VITIS_LOOP_97_14","ID" : "28","Type" : "pipeline"},]},],
				"SubLoops" : [
				{"Name" : "VITIS_LOOP_62_7","ID" : "29","Type" : "no",
					"SubInsts" : [
					{"Name" : "grp_conv_layer_2_Pipeline_VITIS_LOOP_63_8_VITIS_LOOP_64_9_fu_5671","ID" : "30","Type" : "sequential",
							"SubLoops" : [
							{"Name" : "VITIS_LOOP_63_8_VITIS_LOOP_64_9","ID" : "31","Type" : "pipeline"},]},]},]},]},]},]},]
}]}