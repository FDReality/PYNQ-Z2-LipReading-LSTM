set moduleName gemvm1
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {gemvm1}
set C_modelType { void 0 }
set C_modelArgList {
	{ res float 32 regular {array 5 { 2 3 } 1 1 }  }
	{ b float 32 regular {array 64 { 1 1 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "res", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "b", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 17
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ res_address0 sc_out sc_lv 3 signal 0 } 
	{ res_ce0 sc_out sc_logic 1 signal 0 } 
	{ res_we0 sc_out sc_logic 1 signal 0 } 
	{ res_d0 sc_out sc_lv 32 signal 0 } 
	{ res_q0 sc_in sc_lv 32 signal 0 } 
	{ b_address0 sc_out sc_lv 6 signal 1 } 
	{ b_ce0 sc_out sc_logic 1 signal 1 } 
	{ b_q0 sc_in sc_lv 32 signal 1 } 
	{ b_address1 sc_out sc_lv 6 signal 1 } 
	{ b_ce1 sc_out sc_logic 1 signal 1 } 
	{ b_q1 sc_in sc_lv 32 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "res_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "res", "role": "address0" }} , 
 	{ "name": "res_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res", "role": "ce0" }} , 
 	{ "name": "res_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res", "role": "we0" }} , 
 	{ "name": "res_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "res", "role": "d0" }} , 
 	{ "name": "res_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "res", "role": "q0" }} , 
 	{ "name": "b_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "b", "role": "address0" }} , 
 	{ "name": "b_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b", "role": "ce0" }} , 
 	{ "name": "b_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "b", "role": "q0" }} , 
 	{ "name": "b_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "b", "role": "address1" }} , 
 	{ "name": "b_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b", "role": "ce1" }} , 
 	{ "name": "b_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "b", "role": "q1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68"],
		"CDFG" : "gemvm1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "456", "EstimateLatencyMax" : "456",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "res", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "b", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_25", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_26", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_27", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_28", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_29", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_30", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_31", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_32", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_33", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_34", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_35", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_36", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_37", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_38", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_39", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_40", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_41", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_42", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_43", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_44", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_45", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_46", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_47", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_48", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_49", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_50", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_51", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_52", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_53", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_54", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_55", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_56", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_57", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_58", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_59", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_60", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_61", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_62", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Weight_lc_63", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_0_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_1_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_2_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_3_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_4_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_5_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_6_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_7_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_8_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_9_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_10_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_11_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_12_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_13_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_14_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_15_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_16_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_17_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_18_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_19_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_20_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_21_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_22_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_23_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_24_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_25_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_26_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_27_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_28_U", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_29_U", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_30_U", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_31_U", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_32_U", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_33_U", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_34_U", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_35_U", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_36_U", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_37_U", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_38_U", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_39_U", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_40_U", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_41_U", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_42_U", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_43_U", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_44_U", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_45_U", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_46_U", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_47_U", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_48_U", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_49_U", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_50_U", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_51_U", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_52_U", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_53_U", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_54_U", "Parent" : "0"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_55_U", "Parent" : "0"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_56_U", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_57_U", "Parent" : "0"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_58_U", "Parent" : "0"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_59_U", "Parent" : "0"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_60_U", "Parent" : "0"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_61_U", "Parent" : "0"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_62_U", "Parent" : "0"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight_lc_63_U", "Parent" : "0"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.LSTM_Top_fadd_32nbkb_U49", "Parent" : "0"},
	{"ID" : "66", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.LSTM_Top_fadd_32nbkb_U50", "Parent" : "0"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.LSTM_Top_fmul_32ncud_U51", "Parent" : "0"},
	{"ID" : "68", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.LSTM_Top_fmul_32ncud_U52", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	gemvm1 {
		res {Type IO LastRead 1 FirstWrite 327}
		b {Type I LastRead 33 FirstWrite -1}
		Weight_lc_0 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_1 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_2 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_3 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_4 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_5 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_6 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_7 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_8 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_9 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_10 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_11 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_12 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_13 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_14 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_15 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_16 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_17 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_18 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_19 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_20 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_21 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_22 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_23 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_24 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_25 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_26 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_27 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_28 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_29 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_30 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_31 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_32 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_33 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_34 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_35 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_36 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_37 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_38 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_39 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_40 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_41 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_42 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_43 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_44 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_45 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_46 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_47 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_48 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_49 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_50 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_51 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_52 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_53 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_54 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_55 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_56 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_57 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_58 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_59 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_60 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_61 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_62 {Type I LastRead -1 FirstWrite -1}
		Weight_lc_63 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "456", "Max" : "456"}
	, {"Name" : "Interval", "Min" : "456", "Max" : "456"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	res { ap_memory {  { res_address0 mem_address 1 3 }  { res_ce0 mem_ce 1 1 }  { res_we0 mem_we 1 1 }  { res_d0 mem_din 1 32 }  { res_q0 mem_dout 0 32 } } }
	b { ap_memory {  { b_address0 mem_address 1 6 }  { b_ce0 mem_ce 1 1 }  { b_q0 mem_dout 0 32 }  { b_address1 MemPortADDR2 1 6 }  { b_ce1 MemPortCE2 1 1 }  { b_q1 MemPortDOUT2 0 32 } } }
}
