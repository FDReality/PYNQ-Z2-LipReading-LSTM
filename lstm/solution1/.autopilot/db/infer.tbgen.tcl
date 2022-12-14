set moduleName infer
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
set C_modelName {infer}
set C_modelType { void 0 }
set C_modelArgList {
	{ input_r float 32 regular {array 784 { 1 3 } 1 1 }  }
	{ res float 32 regular {array 5 { 2 2 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_r", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "res", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} ]}
# RTL Port declarations: 
set portNum 19
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ input_r_address0 sc_out sc_lv 10 signal 0 } 
	{ input_r_ce0 sc_out sc_logic 1 signal 0 } 
	{ input_r_q0 sc_in sc_lv 32 signal 0 } 
	{ res_address0 sc_out sc_lv 3 signal 1 } 
	{ res_ce0 sc_out sc_logic 1 signal 1 } 
	{ res_we0 sc_out sc_logic 1 signal 1 } 
	{ res_d0 sc_out sc_lv 32 signal 1 } 
	{ res_q0 sc_in sc_lv 32 signal 1 } 
	{ res_address1 sc_out sc_lv 3 signal 1 } 
	{ res_ce1 sc_out sc_logic 1 signal 1 } 
	{ res_we1 sc_out sc_logic 1 signal 1 } 
	{ res_d1 sc_out sc_lv 32 signal 1 } 
	{ res_q1 sc_in sc_lv 32 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "input_r_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "input_r", "role": "address0" }} , 
 	{ "name": "input_r_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_r", "role": "ce0" }} , 
 	{ "name": "input_r_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_r", "role": "q0" }} , 
 	{ "name": "res_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "res", "role": "address0" }} , 
 	{ "name": "res_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res", "role": "ce0" }} , 
 	{ "name": "res_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res", "role": "we0" }} , 
 	{ "name": "res_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "res", "role": "d0" }} , 
 	{ "name": "res_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "res", "role": "q0" }} , 
 	{ "name": "res_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "res", "role": "address1" }} , 
 	{ "name": "res_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res", "role": "ce1" }} , 
 	{ "name": "res_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res", "role": "we1" }} , 
 	{ "name": "res_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "res", "role": "d1" }} , 
 	{ "name": "res_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "res", "role": "q1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "35", "41", "46", "115", "118", "120"],
		"CDFG" : "infer",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "412929", "EstimateLatencyMax" : "412933",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state29", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_tanh_fu_550"},
			{"State" : "ap_ST_fsm_state43", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_tanh_fu_550"},
			{"State" : "ap_ST_fsm_state17", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_sigmoid_fu_556"},
			{"State" : "ap_ST_fsm_state23", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_sigmoid_fu_556"},
			{"State" : "ap_ST_fsm_state35", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_sigmoid_fu_556"},
			{"State" : "ap_ST_fsm_state13", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gemvm_fu_562"},
			{"State" : "ap_ST_fsm_state19", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gemvm_fu_562"},
			{"State" : "ap_ST_fsm_state25", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gemvm_fu_562"},
			{"State" : "ap_ST_fsm_state31", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gemvm_fu_562"},
			{"State" : "ap_ST_fsm_state46", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gemvm1_fu_573"},
			{"State" : "ap_ST_fsm_state37", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_hprod_fu_708"},
			{"State" : "ap_ST_fsm_state39", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_hprod_fu_708"},
			{"State" : "ap_ST_fsm_state45", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_hprod_fu_708"},
			{"State" : "ap_ST_fsm_state15", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_geva_1_fu_715"},
			{"State" : "ap_ST_fsm_state21", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_geva_1_fu_715"},
			{"State" : "ap_ST_fsm_state27", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_geva_1_fu_715"},
			{"State" : "ap_ST_fsm_state33", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_geva_1_fu_715"},
			{"State" : "ap_ST_fsm_state41", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_geva_1_fu_715"}],
		"Port" : [
			{"Name" : "input_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "res", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "res"}]},
			{"Name" : "Weight0_f", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "41", "SubInstance" : "grp_gemvm_fu_562", "Port" : "a"}]},
			{"Name" : "Bias0_f", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "118", "SubInstance" : "grp_geva_1_fu_715", "Port" : "a"}]},
			{"Name" : "Weight0_i", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "41", "SubInstance" : "grp_gemvm_fu_562", "Port" : "a"}]},
			{"Name" : "Bias0_i", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "118", "SubInstance" : "grp_geva_1_fu_715", "Port" : "a"}]},
			{"Name" : "Weight0_c", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "41", "SubInstance" : "grp_gemvm_fu_562", "Port" : "a"}]},
			{"Name" : "Bias0_c", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "118", "SubInstance" : "grp_geva_1_fu_715", "Port" : "a"}]},
			{"Name" : "Weight0_o", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "41", "SubInstance" : "grp_gemvm_fu_562", "Port" : "a"}]},
			{"Name" : "Bias0_o", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "118", "SubInstance" : "grp_geva_1_fu_715", "Port" : "a"}]},
			{"Name" : "Weight_lc_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_0"}]},
			{"Name" : "Weight_lc_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_1"}]},
			{"Name" : "Weight_lc_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_2"}]},
			{"Name" : "Weight_lc_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_3"}]},
			{"Name" : "Weight_lc_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_4"}]},
			{"Name" : "Weight_lc_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_5"}]},
			{"Name" : "Weight_lc_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_6"}]},
			{"Name" : "Weight_lc_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_7"}]},
			{"Name" : "Weight_lc_8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_8"}]},
			{"Name" : "Weight_lc_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_9"}]},
			{"Name" : "Weight_lc_10", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_10"}]},
			{"Name" : "Weight_lc_11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_11"}]},
			{"Name" : "Weight_lc_12", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_12"}]},
			{"Name" : "Weight_lc_13", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_13"}]},
			{"Name" : "Weight_lc_14", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_14"}]},
			{"Name" : "Weight_lc_15", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_15"}]},
			{"Name" : "Weight_lc_16", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_16"}]},
			{"Name" : "Weight_lc_17", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_17"}]},
			{"Name" : "Weight_lc_18", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_18"}]},
			{"Name" : "Weight_lc_19", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_19"}]},
			{"Name" : "Weight_lc_20", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_20"}]},
			{"Name" : "Weight_lc_21", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_21"}]},
			{"Name" : "Weight_lc_22", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_22"}]},
			{"Name" : "Weight_lc_23", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_23"}]},
			{"Name" : "Weight_lc_24", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_24"}]},
			{"Name" : "Weight_lc_25", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_25"}]},
			{"Name" : "Weight_lc_26", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_26"}]},
			{"Name" : "Weight_lc_27", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_27"}]},
			{"Name" : "Weight_lc_28", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_28"}]},
			{"Name" : "Weight_lc_29", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_29"}]},
			{"Name" : "Weight_lc_30", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_30"}]},
			{"Name" : "Weight_lc_31", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_31"}]},
			{"Name" : "Weight_lc_32", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_32"}]},
			{"Name" : "Weight_lc_33", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_33"}]},
			{"Name" : "Weight_lc_34", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_34"}]},
			{"Name" : "Weight_lc_35", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_35"}]},
			{"Name" : "Weight_lc_36", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_36"}]},
			{"Name" : "Weight_lc_37", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_37"}]},
			{"Name" : "Weight_lc_38", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_38"}]},
			{"Name" : "Weight_lc_39", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_39"}]},
			{"Name" : "Weight_lc_40", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_40"}]},
			{"Name" : "Weight_lc_41", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_41"}]},
			{"Name" : "Weight_lc_42", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_42"}]},
			{"Name" : "Weight_lc_43", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_43"}]},
			{"Name" : "Weight_lc_44", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_44"}]},
			{"Name" : "Weight_lc_45", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_45"}]},
			{"Name" : "Weight_lc_46", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_46"}]},
			{"Name" : "Weight_lc_47", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_47"}]},
			{"Name" : "Weight_lc_48", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_48"}]},
			{"Name" : "Weight_lc_49", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_49"}]},
			{"Name" : "Weight_lc_50", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_50"}]},
			{"Name" : "Weight_lc_51", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_51"}]},
			{"Name" : "Weight_lc_52", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_52"}]},
			{"Name" : "Weight_lc_53", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_53"}]},
			{"Name" : "Weight_lc_54", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_54"}]},
			{"Name" : "Weight_lc_55", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_55"}]},
			{"Name" : "Weight_lc_56", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_56"}]},
			{"Name" : "Weight_lc_57", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_57"}]},
			{"Name" : "Weight_lc_58", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_58"}]},
			{"Name" : "Weight_lc_59", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_59"}]},
			{"Name" : "Weight_lc_60", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_60"}]},
			{"Name" : "Weight_lc_61", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_61"}]},
			{"Name" : "Weight_lc_62", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_62"}]},
			{"Name" : "Weight_lc_63", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_63"}]},
			{"Name" : "Bias_lc", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight0_f_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Bias0_f_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight0_i_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Bias0_i_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight0_c_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Bias0_c_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Weight0_o_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Bias0_o_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Bias_lc_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.gate_f_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.gate_i_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.stat_C_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.C_t_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.gate_o_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.h_t_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.vec_i_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.vec_tmp_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_tanh_fu_550", "Parent" : "0", "Child" : ["19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34"],
		"CDFG" : "tanh",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "91", "EstimateLatencyMax" : "91",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "res", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "a", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_tanh_fu_550.LSTM_Top_fptrunc_dEe_U25", "Parent" : "18"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_tanh_fu_550.LSTM_Top_fptrunc_dEe_U26", "Parent" : "18"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_tanh_fu_550.LSTM_Top_fpext_32eOg_U27", "Parent" : "18"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_tanh_fu_550.LSTM_Top_fpext_32eOg_U28", "Parent" : "18"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_tanh_fu_550.LSTM_Top_fpext_32eOg_U29", "Parent" : "18"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_tanh_fu_550.LSTM_Top_fpext_32eOg_U30", "Parent" : "18"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_tanh_fu_550.LSTM_Top_dsub_64nibs_U31", "Parent" : "18"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_tanh_fu_550.LSTM_Top_dadd_64nfYi_U32", "Parent" : "18"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_tanh_fu_550.LSTM_Top_dsub_64nibs_U33", "Parent" : "18"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_tanh_fu_550.LSTM_Top_dadd_64nfYi_U34", "Parent" : "18"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_tanh_fu_550.LSTM_Top_ddiv_64ng8j_U35", "Parent" : "18"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_tanh_fu_550.LSTM_Top_ddiv_64ng8j_U36", "Parent" : "18"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_tanh_fu_550.LSTM_Top_dexp_64nhbi_U37", "Parent" : "18"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_tanh_fu_550.LSTM_Top_dexp_64nhbi_U38", "Parent" : "18"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_tanh_fu_550.LSTM_Top_dexp_64nhbi_U39", "Parent" : "18"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_tanh_fu_550.LSTM_Top_dexp_64nhbi_U40", "Parent" : "18"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sigmoid_fu_556", "Parent" : "0", "Child" : ["36", "37", "38", "39", "40"],
		"CDFG" : "sigmoid",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "123", "EstimateLatencyMax" : "123",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "res", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "a", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sigmoid_fu_556.LSTM_Top_fptrunc_dEe_U13", "Parent" : "35"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sigmoid_fu_556.LSTM_Top_fpext_32eOg_U14", "Parent" : "35"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sigmoid_fu_556.LSTM_Top_dadd_64nfYi_U15", "Parent" : "35"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sigmoid_fu_556.LSTM_Top_ddiv_64ng8j_U16", "Parent" : "35"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sigmoid_fu_556.LSTM_Top_dexp_64nhbi_U17", "Parent" : "35"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_gemvm_fu_562", "Parent" : "0", "Child" : ["42", "43", "44", "45"],
		"CDFG" : "gemvm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "3366", "EstimateLatencyMax" : "3366",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "res", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "a", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm_fu_562.LSTM_Top_fadd_32nbkb_U1", "Parent" : "41"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm_fu_562.LSTM_Top_fadd_32nbkb_U2", "Parent" : "41"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm_fu_562.LSTM_Top_fmul_32ncud_U3", "Parent" : "41"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm_fu_562.LSTM_Top_fmul_32ncud_U4", "Parent" : "41"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573", "Parent" : "0", "Child" : ["47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114"],
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
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_0_U", "Parent" : "46"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_1_U", "Parent" : "46"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_2_U", "Parent" : "46"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_3_U", "Parent" : "46"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_4_U", "Parent" : "46"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_5_U", "Parent" : "46"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_6_U", "Parent" : "46"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_7_U", "Parent" : "46"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_8_U", "Parent" : "46"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_9_U", "Parent" : "46"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_10_U", "Parent" : "46"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_11_U", "Parent" : "46"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_12_U", "Parent" : "46"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_13_U", "Parent" : "46"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_14_U", "Parent" : "46"},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_15_U", "Parent" : "46"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_16_U", "Parent" : "46"},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_17_U", "Parent" : "46"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_18_U", "Parent" : "46"},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_19_U", "Parent" : "46"},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_20_U", "Parent" : "46"},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_21_U", "Parent" : "46"},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_22_U", "Parent" : "46"},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_23_U", "Parent" : "46"},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_24_U", "Parent" : "46"},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_25_U", "Parent" : "46"},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_26_U", "Parent" : "46"},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_27_U", "Parent" : "46"},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_28_U", "Parent" : "46"},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_29_U", "Parent" : "46"},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_30_U", "Parent" : "46"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_31_U", "Parent" : "46"},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_32_U", "Parent" : "46"},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_33_U", "Parent" : "46"},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_34_U", "Parent" : "46"},
	{"ID" : "82", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_35_U", "Parent" : "46"},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_36_U", "Parent" : "46"},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_37_U", "Parent" : "46"},
	{"ID" : "85", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_38_U", "Parent" : "46"},
	{"ID" : "86", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_39_U", "Parent" : "46"},
	{"ID" : "87", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_40_U", "Parent" : "46"},
	{"ID" : "88", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_41_U", "Parent" : "46"},
	{"ID" : "89", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_42_U", "Parent" : "46"},
	{"ID" : "90", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_43_U", "Parent" : "46"},
	{"ID" : "91", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_44_U", "Parent" : "46"},
	{"ID" : "92", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_45_U", "Parent" : "46"},
	{"ID" : "93", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_46_U", "Parent" : "46"},
	{"ID" : "94", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_47_U", "Parent" : "46"},
	{"ID" : "95", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_48_U", "Parent" : "46"},
	{"ID" : "96", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_49_U", "Parent" : "46"},
	{"ID" : "97", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_50_U", "Parent" : "46"},
	{"ID" : "98", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_51_U", "Parent" : "46"},
	{"ID" : "99", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_52_U", "Parent" : "46"},
	{"ID" : "100", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_53_U", "Parent" : "46"},
	{"ID" : "101", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_54_U", "Parent" : "46"},
	{"ID" : "102", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_55_U", "Parent" : "46"},
	{"ID" : "103", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_56_U", "Parent" : "46"},
	{"ID" : "104", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_57_U", "Parent" : "46"},
	{"ID" : "105", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_58_U", "Parent" : "46"},
	{"ID" : "106", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_59_U", "Parent" : "46"},
	{"ID" : "107", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_60_U", "Parent" : "46"},
	{"ID" : "108", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_61_U", "Parent" : "46"},
	{"ID" : "109", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_62_U", "Parent" : "46"},
	{"ID" : "110", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.Weight_lc_63_U", "Parent" : "46"},
	{"ID" : "111", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.LSTM_Top_fadd_32nbkb_U49", "Parent" : "46"},
	{"ID" : "112", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.LSTM_Top_fadd_32nbkb_U50", "Parent" : "46"},
	{"ID" : "113", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.LSTM_Top_fmul_32ncud_U51", "Parent" : "46"},
	{"ID" : "114", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gemvm1_fu_573.LSTM_Top_fmul_32ncud_U52", "Parent" : "46"},
	{"ID" : "115", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_hprod_fu_708", "Parent" : "0", "Child" : ["116", "117"],
		"CDFG" : "hprod",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "39", "EstimateLatencyMax" : "39",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "res", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "a", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "116", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_hprod_fu_708.LSTM_Top_fmul_32ncud_U44", "Parent" : "115"},
	{"ID" : "117", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_hprod_fu_708.LSTM_Top_fmul_32ncud_U45", "Parent" : "115"},
	{"ID" : "118", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_geva_1_fu_715", "Parent" : "0", "Child" : ["119"],
		"CDFG" : "geva_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "73", "EstimateLatencyMax" : "73",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "res", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "a", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "119", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_geva_1_fu_715.LSTM_Top_fadd_32nbkb_U10", "Parent" : "118"},
	{"ID" : "120", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.LSTM_Top_fadd_32nbkb_U119", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	infer {
		input_r {Type I LastRead 8 FirstWrite -1}
		res {Type IO LastRead 10 FirstWrite 16}
		Weight0_f {Type I LastRead -1 FirstWrite -1}
		Bias0_f {Type I LastRead -1 FirstWrite -1}
		Weight0_i {Type I LastRead -1 FirstWrite -1}
		Bias0_i {Type I LastRead -1 FirstWrite -1}
		Weight0_c {Type I LastRead -1 FirstWrite -1}
		Bias0_c {Type I LastRead -1 FirstWrite -1}
		Weight0_o {Type I LastRead -1 FirstWrite -1}
		Bias0_o {Type I LastRead -1 FirstWrite -1}
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
		Weight_lc_63 {Type I LastRead -1 FirstWrite -1}
		Bias_lc {Type I LastRead -1 FirstWrite -1}}
	tanh {
		res {Type O LastRead -1 FirstWrite 59}
		a {Type I LastRead 2 FirstWrite -1}}
	sigmoid {
		res {Type O LastRead -1 FirstWrite 59}
		a {Type I LastRead 1 FirstWrite -1}}
	gemvm {
		res {Type IO LastRead 1 FirstWrite 467}
		a {Type I LastRead 47 FirstWrite -1}
		b {Type I LastRead 47 FirstWrite -1}}
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
		Weight_lc_63 {Type I LastRead -1 FirstWrite -1}}
	hprod {
		res {Type O LastRead -1 FirstWrite 7}
		a {Type I LastRead 2 FirstWrite -1}
		b {Type I LastRead 2 FirstWrite -1}}
	geva_1 {
		res {Type IO LastRead 2 FirstWrite 8}
		a {Type I LastRead 2 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "412929", "Max" : "412933"}
	, {"Name" : "Interval", "Min" : "412929", "Max" : "412933"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	input_r { ap_memory {  { input_r_address0 mem_address 1 10 }  { input_r_ce0 mem_ce 1 1 }  { input_r_q0 mem_dout 0 32 } } }
	res { ap_memory {  { res_address0 mem_address 1 3 }  { res_ce0 mem_ce 1 1 }  { res_we0 mem_we 1 1 }  { res_d0 mem_din 1 32 }  { res_q0 mem_dout 0 32 }  { res_address1 MemPortADDR2 1 3 }  { res_ce1 MemPortCE2 1 1 }  { res_we1 MemPortWE2 1 1 }  { res_d1 MemPortDIN2 1 32 }  { res_q1 MemPortDOUT2 0 32 } } }
}
