set moduleName LSTM_Top
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_none
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {LSTM_Top}
set C_modelType { void 0 }
set C_modelArgList {
	{ in_data_V int 32 regular {axi_s 0 volatile  { in_r Data } }  }
	{ in_keep_V int 4 regular {axi_s 0 volatile  { in_r Keep } }  }
	{ in_strb_V int 4 regular {axi_s 0 volatile  { in_r Strb } }  }
	{ in_user_V int 1 regular {axi_s 0 volatile  { in_r User } }  }
	{ in_last_V int 1 regular {axi_s 0 volatile  { in_r Last } }  }
	{ in_id_V int 1 regular {axi_s 0 volatile  { in_r ID } }  }
	{ in_dest_V int 1 regular {axi_s 0 volatile  { in_r Dest } }  }
	{ out_data_V int 32 regular {axi_s 1 volatile  { out_r Data } }  }
	{ out_keep_V int 4 regular {axi_s 1 volatile  { out_r Keep } }  }
	{ out_strb_V int 4 regular {axi_s 1 volatile  { out_r Strb } }  }
	{ out_user_V int 1 regular {axi_s 1 volatile  { out_r User } }  }
	{ out_last_V int 1 regular {axi_s 1 volatile  { out_r Last } }  }
	{ out_id_V int 1 regular {axi_s 1 volatile  { out_r ID } }  }
	{ out_dest_V int 1 regular {axi_s 1 volatile  { out_r Dest } }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "in_data_V", "interface" : "axis", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.data.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 783,"step" : 1}]}]}]} , 
 	{ "Name" : "in_keep_V", "interface" : "axis", "bitwidth" : 4, "direction" : "READONLY", "bitSlice":[{"low":0,"up":3,"cElement": [{"cName": "in.keep.V","cData": "uint4","bit_use": { "low": 0,"up": 3},"cArray": [{"low" : 0,"up" : 783,"step" : 1}]}]}]} , 
 	{ "Name" : "in_strb_V", "interface" : "axis", "bitwidth" : 4, "direction" : "READONLY", "bitSlice":[{"low":0,"up":3,"cElement": [{"cName": "in.strb.V","cData": "uint4","bit_use": { "low": 0,"up": 3},"cArray": [{"low" : 0,"up" : 783,"step" : 1}]}]}]} , 
 	{ "Name" : "in_user_V", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "in.user.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 783,"step" : 1}]}]}]} , 
 	{ "Name" : "in_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "in.last.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 783,"step" : 1}]}]}]} , 
 	{ "Name" : "in_id_V", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "in.id.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 783,"step" : 1}]}]}]} , 
 	{ "Name" : "in_dest_V", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "in.dest.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 783,"step" : 1}]}]}]} , 
 	{ "Name" : "out_data_V", "interface" : "axis", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out.data.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 4,"step" : 1}]}]}]} , 
 	{ "Name" : "out_keep_V", "interface" : "axis", "bitwidth" : 4, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":3,"cElement": [{"cName": "out.keep.V","cData": "uint4","bit_use": { "low": 0,"up": 3},"cArray": [{"low" : 0,"up" : 4,"step" : 1}]}]}]} , 
 	{ "Name" : "out_strb_V", "interface" : "axis", "bitwidth" : 4, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":3,"cElement": [{"cName": "out.strb.V","cData": "uint4","bit_use": { "low": 0,"up": 3},"cArray": [{"low" : 0,"up" : 4,"step" : 1}]}]}]} , 
 	{ "Name" : "out_user_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "out.user.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 4,"step" : 1}]}]}]} , 
 	{ "Name" : "out_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "out.last.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 4,"step" : 1}]}]}]} , 
 	{ "Name" : "out_id_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "out.id.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 4,"step" : 1}]}]}]} , 
 	{ "Name" : "out_dest_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "out.dest.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 4,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 20
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ in_r_TDATA sc_in sc_lv 32 signal 0 } 
	{ in_r_TVALID sc_in sc_logic 1 invld 6 } 
	{ in_r_TREADY sc_out sc_logic 1 inacc 6 } 
	{ in_r_TKEEP sc_in sc_lv 4 signal 1 } 
	{ in_r_TSTRB sc_in sc_lv 4 signal 2 } 
	{ in_r_TUSER sc_in sc_lv 1 signal 3 } 
	{ in_r_TLAST sc_in sc_lv 1 signal 4 } 
	{ in_r_TID sc_in sc_lv 1 signal 5 } 
	{ in_r_TDEST sc_in sc_lv 1 signal 6 } 
	{ out_r_TDATA sc_out sc_lv 32 signal 7 } 
	{ out_r_TVALID sc_out sc_logic 1 outvld 13 } 
	{ out_r_TREADY sc_in sc_logic 1 outacc 13 } 
	{ out_r_TKEEP sc_out sc_lv 4 signal 8 } 
	{ out_r_TSTRB sc_out sc_lv 4 signal 9 } 
	{ out_r_TUSER sc_out sc_lv 1 signal 10 } 
	{ out_r_TLAST sc_out sc_lv 1 signal 11 } 
	{ out_r_TID sc_out sc_lv 1 signal 12 } 
	{ out_r_TDEST sc_out sc_lv 1 signal 13 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "in_r_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_data_V", "role": "" }} , 
 	{ "name": "in_r_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "in_dest_V", "role": "D" }} , 
 	{ "name": "in_r_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "in_dest_V", "role": "Y" }} , 
 	{ "name": "in_r_TKEEP", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "in_keep_V", "role": "" }} , 
 	{ "name": "in_r_TSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "in_strb_V", "role": "" }} , 
 	{ "name": "in_r_TUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in_user_V", "role": "" }} , 
 	{ "name": "in_r_TLAST", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in_last_V", "role": "" }} , 
 	{ "name": "in_r_TID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in_id_V", "role": "" }} , 
 	{ "name": "in_r_TDEST", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "in_dest_V", "role": "" }} , 
 	{ "name": "out_r_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_data_V", "role": "" }} , 
 	{ "name": "out_r_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_dest_V", "role": "D" }} , 
 	{ "name": "out_r_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "out_dest_V", "role": "Y" }} , 
 	{ "name": "out_r_TKEEP", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "out_keep_V", "role": "" }} , 
 	{ "name": "out_r_TSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "out_strb_V", "role": "" }} , 
 	{ "name": "out_r_TUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "out_user_V", "role": "" }} , 
 	{ "name": "out_r_TLAST", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "out_last_V", "role": "" }} , 
 	{ "name": "out_r_TID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "out_id_V", "role": "" }} , 
 	{ "name": "out_r_TDEST", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "out_dest_V", "role": "" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "126", "127", "128", "129", "130", "131", "132", "133", "134", "135", "136", "137", "138", "139"],
		"CDFG" : "LSTM_Top",
		"Protocol" : "ap_ctrl_none",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "413741", "EstimateLatencyMax" : "413745",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_lipnet_lstm_fu_196"}],
		"Port" : [
			{"Name" : "in_data_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "in_data_V"}]},
			{"Name" : "in_keep_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "in_keep_V"}]},
			{"Name" : "in_strb_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "in_strb_V"}]},
			{"Name" : "in_user_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "in_user_V"}]},
			{"Name" : "in_last_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "in_last_V"}]},
			{"Name" : "in_id_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "in_id_V"}]},
			{"Name" : "in_dest_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "in_dest_V"}]},
			{"Name" : "out_data_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "out_data_V"}]},
			{"Name" : "out_keep_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "out_keep_V"}]},
			{"Name" : "out_strb_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "out_strb_V"}]},
			{"Name" : "out_user_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "out_user_V"}]},
			{"Name" : "out_last_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "out_last_V"}]},
			{"Name" : "out_id_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "out_id_V"}]},
			{"Name" : "out_dest_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "out_dest_V"}]},
			{"Name" : "Weight0_f", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight0_f"}]},
			{"Name" : "Bias0_f", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Bias0_f"}]},
			{"Name" : "Weight0_i", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight0_i"}]},
			{"Name" : "Bias0_i", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Bias0_i"}]},
			{"Name" : "Weight0_c", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight0_c"}]},
			{"Name" : "Bias0_c", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Bias0_c"}]},
			{"Name" : "Weight0_o", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight0_o"}]},
			{"Name" : "Bias0_o", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Bias0_o"}]},
			{"Name" : "Weight_lc_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_0"}]},
			{"Name" : "Weight_lc_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_1"}]},
			{"Name" : "Weight_lc_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_2"}]},
			{"Name" : "Weight_lc_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_3"}]},
			{"Name" : "Weight_lc_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_4"}]},
			{"Name" : "Weight_lc_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_5"}]},
			{"Name" : "Weight_lc_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_6"}]},
			{"Name" : "Weight_lc_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_7"}]},
			{"Name" : "Weight_lc_8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_8"}]},
			{"Name" : "Weight_lc_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_9"}]},
			{"Name" : "Weight_lc_10", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_10"}]},
			{"Name" : "Weight_lc_11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_11"}]},
			{"Name" : "Weight_lc_12", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_12"}]},
			{"Name" : "Weight_lc_13", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_13"}]},
			{"Name" : "Weight_lc_14", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_14"}]},
			{"Name" : "Weight_lc_15", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_15"}]},
			{"Name" : "Weight_lc_16", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_16"}]},
			{"Name" : "Weight_lc_17", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_17"}]},
			{"Name" : "Weight_lc_18", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_18"}]},
			{"Name" : "Weight_lc_19", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_19"}]},
			{"Name" : "Weight_lc_20", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_20"}]},
			{"Name" : "Weight_lc_21", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_21"}]},
			{"Name" : "Weight_lc_22", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_22"}]},
			{"Name" : "Weight_lc_23", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_23"}]},
			{"Name" : "Weight_lc_24", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_24"}]},
			{"Name" : "Weight_lc_25", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_25"}]},
			{"Name" : "Weight_lc_26", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_26"}]},
			{"Name" : "Weight_lc_27", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_27"}]},
			{"Name" : "Weight_lc_28", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_28"}]},
			{"Name" : "Weight_lc_29", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_29"}]},
			{"Name" : "Weight_lc_30", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_30"}]},
			{"Name" : "Weight_lc_31", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_31"}]},
			{"Name" : "Weight_lc_32", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_32"}]},
			{"Name" : "Weight_lc_33", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_33"}]},
			{"Name" : "Weight_lc_34", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_34"}]},
			{"Name" : "Weight_lc_35", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_35"}]},
			{"Name" : "Weight_lc_36", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_36"}]},
			{"Name" : "Weight_lc_37", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_37"}]},
			{"Name" : "Weight_lc_38", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_38"}]},
			{"Name" : "Weight_lc_39", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_39"}]},
			{"Name" : "Weight_lc_40", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_40"}]},
			{"Name" : "Weight_lc_41", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_41"}]},
			{"Name" : "Weight_lc_42", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_42"}]},
			{"Name" : "Weight_lc_43", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_43"}]},
			{"Name" : "Weight_lc_44", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_44"}]},
			{"Name" : "Weight_lc_45", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_45"}]},
			{"Name" : "Weight_lc_46", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_46"}]},
			{"Name" : "Weight_lc_47", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_47"}]},
			{"Name" : "Weight_lc_48", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_48"}]},
			{"Name" : "Weight_lc_49", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_49"}]},
			{"Name" : "Weight_lc_50", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_50"}]},
			{"Name" : "Weight_lc_51", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_51"}]},
			{"Name" : "Weight_lc_52", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_52"}]},
			{"Name" : "Weight_lc_53", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_53"}]},
			{"Name" : "Weight_lc_54", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_54"}]},
			{"Name" : "Weight_lc_55", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_55"}]},
			{"Name" : "Weight_lc_56", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_56"}]},
			{"Name" : "Weight_lc_57", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_57"}]},
			{"Name" : "Weight_lc_58", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_58"}]},
			{"Name" : "Weight_lc_59", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_59"}]},
			{"Name" : "Weight_lc_60", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_60"}]},
			{"Name" : "Weight_lc_61", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_61"}]},
			{"Name" : "Weight_lc_62", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_62"}]},
			{"Name" : "Weight_lc_63", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Weight_lc_63"}]},
			{"Name" : "Bias_lc", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_lipnet_lstm_fu_196", "Port" : "Bias_lc"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196", "Parent" : "0", "Child" : ["2", "3", "4", "125"],
		"CDFG" : "lipnet_lstm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "413738", "EstimateLatencyMax" : "413742",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state20", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_infer_fu_335"}],
		"Port" : [
			{"Name" : "in_data_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "in_r_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "in_keep_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "in_strb_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "in_user_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "in_last_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "in_id_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "in_dest_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "out_data_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "out_r_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_keep_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "out_strb_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "out_user_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "out_last_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "out_id_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "out_dest_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "Weight0_f", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight0_f"}]},
			{"Name" : "Bias0_f", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Bias0_f"}]},
			{"Name" : "Weight0_i", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight0_i"}]},
			{"Name" : "Bias0_i", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Bias0_i"}]},
			{"Name" : "Weight0_c", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight0_c"}]},
			{"Name" : "Bias0_c", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Bias0_c"}]},
			{"Name" : "Weight0_o", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight0_o"}]},
			{"Name" : "Bias0_o", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Bias0_o"}]},
			{"Name" : "Weight_lc_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_0"}]},
			{"Name" : "Weight_lc_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_1"}]},
			{"Name" : "Weight_lc_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_2"}]},
			{"Name" : "Weight_lc_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_3"}]},
			{"Name" : "Weight_lc_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_4"}]},
			{"Name" : "Weight_lc_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_5"}]},
			{"Name" : "Weight_lc_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_6"}]},
			{"Name" : "Weight_lc_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_7"}]},
			{"Name" : "Weight_lc_8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_8"}]},
			{"Name" : "Weight_lc_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_9"}]},
			{"Name" : "Weight_lc_10", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_10"}]},
			{"Name" : "Weight_lc_11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_11"}]},
			{"Name" : "Weight_lc_12", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_12"}]},
			{"Name" : "Weight_lc_13", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_13"}]},
			{"Name" : "Weight_lc_14", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_14"}]},
			{"Name" : "Weight_lc_15", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_15"}]},
			{"Name" : "Weight_lc_16", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_16"}]},
			{"Name" : "Weight_lc_17", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_17"}]},
			{"Name" : "Weight_lc_18", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_18"}]},
			{"Name" : "Weight_lc_19", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_19"}]},
			{"Name" : "Weight_lc_20", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_20"}]},
			{"Name" : "Weight_lc_21", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_21"}]},
			{"Name" : "Weight_lc_22", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_22"}]},
			{"Name" : "Weight_lc_23", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_23"}]},
			{"Name" : "Weight_lc_24", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_24"}]},
			{"Name" : "Weight_lc_25", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_25"}]},
			{"Name" : "Weight_lc_26", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_26"}]},
			{"Name" : "Weight_lc_27", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_27"}]},
			{"Name" : "Weight_lc_28", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_28"}]},
			{"Name" : "Weight_lc_29", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_29"}]},
			{"Name" : "Weight_lc_30", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_30"}]},
			{"Name" : "Weight_lc_31", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_31"}]},
			{"Name" : "Weight_lc_32", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_32"}]},
			{"Name" : "Weight_lc_33", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_33"}]},
			{"Name" : "Weight_lc_34", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_34"}]},
			{"Name" : "Weight_lc_35", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_35"}]},
			{"Name" : "Weight_lc_36", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_36"}]},
			{"Name" : "Weight_lc_37", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_37"}]},
			{"Name" : "Weight_lc_38", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_38"}]},
			{"Name" : "Weight_lc_39", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_39"}]},
			{"Name" : "Weight_lc_40", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_40"}]},
			{"Name" : "Weight_lc_41", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_41"}]},
			{"Name" : "Weight_lc_42", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_42"}]},
			{"Name" : "Weight_lc_43", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_43"}]},
			{"Name" : "Weight_lc_44", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_44"}]},
			{"Name" : "Weight_lc_45", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_45"}]},
			{"Name" : "Weight_lc_46", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_46"}]},
			{"Name" : "Weight_lc_47", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_47"}]},
			{"Name" : "Weight_lc_48", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_48"}]},
			{"Name" : "Weight_lc_49", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_49"}]},
			{"Name" : "Weight_lc_50", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_50"}]},
			{"Name" : "Weight_lc_51", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_51"}]},
			{"Name" : "Weight_lc_52", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_52"}]},
			{"Name" : "Weight_lc_53", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_53"}]},
			{"Name" : "Weight_lc_54", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_54"}]},
			{"Name" : "Weight_lc_55", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_55"}]},
			{"Name" : "Weight_lc_56", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_56"}]},
			{"Name" : "Weight_lc_57", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_57"}]},
			{"Name" : "Weight_lc_58", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_58"}]},
			{"Name" : "Weight_lc_59", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_59"}]},
			{"Name" : "Weight_lc_60", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_60"}]},
			{"Name" : "Weight_lc_61", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_61"}]},
			{"Name" : "Weight_lc_62", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_62"}]},
			{"Name" : "Weight_lc_63", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Weight_lc_63"}]},
			{"Name" : "Bias_lc", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_infer_fu_335", "Port" : "Bias_lc"}]}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.img_dat_U", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.res_U", "Parent" : "1"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335", "Parent" : "1", "Child" : ["5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "39", "45", "50", "119", "122", "124"],
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
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "res"}]},
			{"Name" : "Weight0_f", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "45", "SubInstance" : "grp_gemvm_fu_562", "Port" : "a"}]},
			{"Name" : "Bias0_f", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "122", "SubInstance" : "grp_geva_1_fu_715", "Port" : "a"}]},
			{"Name" : "Weight0_i", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "45", "SubInstance" : "grp_gemvm_fu_562", "Port" : "a"}]},
			{"Name" : "Bias0_i", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "122", "SubInstance" : "grp_geva_1_fu_715", "Port" : "a"}]},
			{"Name" : "Weight0_c", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "45", "SubInstance" : "grp_gemvm_fu_562", "Port" : "a"}]},
			{"Name" : "Bias0_c", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "122", "SubInstance" : "grp_geva_1_fu_715", "Port" : "a"}]},
			{"Name" : "Weight0_o", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "45", "SubInstance" : "grp_gemvm_fu_562", "Port" : "a"}]},
			{"Name" : "Bias0_o", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "122", "SubInstance" : "grp_geva_1_fu_715", "Port" : "a"}]},
			{"Name" : "Weight_lc_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_0"}]},
			{"Name" : "Weight_lc_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_1"}]},
			{"Name" : "Weight_lc_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_2"}]},
			{"Name" : "Weight_lc_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_3"}]},
			{"Name" : "Weight_lc_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_4"}]},
			{"Name" : "Weight_lc_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_5"}]},
			{"Name" : "Weight_lc_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_6"}]},
			{"Name" : "Weight_lc_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_7"}]},
			{"Name" : "Weight_lc_8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_8"}]},
			{"Name" : "Weight_lc_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_9"}]},
			{"Name" : "Weight_lc_10", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_10"}]},
			{"Name" : "Weight_lc_11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_11"}]},
			{"Name" : "Weight_lc_12", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_12"}]},
			{"Name" : "Weight_lc_13", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_13"}]},
			{"Name" : "Weight_lc_14", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_14"}]},
			{"Name" : "Weight_lc_15", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_15"}]},
			{"Name" : "Weight_lc_16", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_16"}]},
			{"Name" : "Weight_lc_17", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_17"}]},
			{"Name" : "Weight_lc_18", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_18"}]},
			{"Name" : "Weight_lc_19", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_19"}]},
			{"Name" : "Weight_lc_20", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_20"}]},
			{"Name" : "Weight_lc_21", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_21"}]},
			{"Name" : "Weight_lc_22", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_22"}]},
			{"Name" : "Weight_lc_23", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_23"}]},
			{"Name" : "Weight_lc_24", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_24"}]},
			{"Name" : "Weight_lc_25", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_25"}]},
			{"Name" : "Weight_lc_26", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_26"}]},
			{"Name" : "Weight_lc_27", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_27"}]},
			{"Name" : "Weight_lc_28", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_28"}]},
			{"Name" : "Weight_lc_29", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_29"}]},
			{"Name" : "Weight_lc_30", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_30"}]},
			{"Name" : "Weight_lc_31", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_31"}]},
			{"Name" : "Weight_lc_32", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_32"}]},
			{"Name" : "Weight_lc_33", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_33"}]},
			{"Name" : "Weight_lc_34", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_34"}]},
			{"Name" : "Weight_lc_35", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_35"}]},
			{"Name" : "Weight_lc_36", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_36"}]},
			{"Name" : "Weight_lc_37", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_37"}]},
			{"Name" : "Weight_lc_38", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_38"}]},
			{"Name" : "Weight_lc_39", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_39"}]},
			{"Name" : "Weight_lc_40", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_40"}]},
			{"Name" : "Weight_lc_41", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_41"}]},
			{"Name" : "Weight_lc_42", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_42"}]},
			{"Name" : "Weight_lc_43", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_43"}]},
			{"Name" : "Weight_lc_44", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_44"}]},
			{"Name" : "Weight_lc_45", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_45"}]},
			{"Name" : "Weight_lc_46", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_46"}]},
			{"Name" : "Weight_lc_47", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_47"}]},
			{"Name" : "Weight_lc_48", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_48"}]},
			{"Name" : "Weight_lc_49", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_49"}]},
			{"Name" : "Weight_lc_50", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_50"}]},
			{"Name" : "Weight_lc_51", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_51"}]},
			{"Name" : "Weight_lc_52", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_52"}]},
			{"Name" : "Weight_lc_53", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_53"}]},
			{"Name" : "Weight_lc_54", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_54"}]},
			{"Name" : "Weight_lc_55", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_55"}]},
			{"Name" : "Weight_lc_56", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_56"}]},
			{"Name" : "Weight_lc_57", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_57"}]},
			{"Name" : "Weight_lc_58", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_58"}]},
			{"Name" : "Weight_lc_59", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_59"}]},
			{"Name" : "Weight_lc_60", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_60"}]},
			{"Name" : "Weight_lc_61", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_61"}]},
			{"Name" : "Weight_lc_62", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_62"}]},
			{"Name" : "Weight_lc_63", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_gemvm1_fu_573", "Port" : "Weight_lc_63"}]},
			{"Name" : "Bias_lc", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "5", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.Weight0_f_U", "Parent" : "4"},
	{"ID" : "6", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.Bias0_f_U", "Parent" : "4"},
	{"ID" : "7", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.Weight0_i_U", "Parent" : "4"},
	{"ID" : "8", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.Bias0_i_U", "Parent" : "4"},
	{"ID" : "9", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.Weight0_c_U", "Parent" : "4"},
	{"ID" : "10", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.Bias0_c_U", "Parent" : "4"},
	{"ID" : "11", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.Weight0_o_U", "Parent" : "4"},
	{"ID" : "12", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.Bias0_o_U", "Parent" : "4"},
	{"ID" : "13", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.Bias_lc_U", "Parent" : "4"},
	{"ID" : "14", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.gate_f_U", "Parent" : "4"},
	{"ID" : "15", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.gate_i_U", "Parent" : "4"},
	{"ID" : "16", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.stat_C_U", "Parent" : "4"},
	{"ID" : "17", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.C_t_U", "Parent" : "4"},
	{"ID" : "18", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.gate_o_U", "Parent" : "4"},
	{"ID" : "19", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.h_t_U", "Parent" : "4"},
	{"ID" : "20", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.vec_i_U", "Parent" : "4"},
	{"ID" : "21", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.vec_tmp_U", "Parent" : "4"},
	{"ID" : "22", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_tanh_fu_550", "Parent" : "4", "Child" : ["23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38"],
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
	{"ID" : "23", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_tanh_fu_550.LSTM_Top_fptrunc_dEe_U25", "Parent" : "22"},
	{"ID" : "24", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_tanh_fu_550.LSTM_Top_fptrunc_dEe_U26", "Parent" : "22"},
	{"ID" : "25", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_tanh_fu_550.LSTM_Top_fpext_32eOg_U27", "Parent" : "22"},
	{"ID" : "26", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_tanh_fu_550.LSTM_Top_fpext_32eOg_U28", "Parent" : "22"},
	{"ID" : "27", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_tanh_fu_550.LSTM_Top_fpext_32eOg_U29", "Parent" : "22"},
	{"ID" : "28", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_tanh_fu_550.LSTM_Top_fpext_32eOg_U30", "Parent" : "22"},
	{"ID" : "29", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_tanh_fu_550.LSTM_Top_dsub_64nibs_U31", "Parent" : "22"},
	{"ID" : "30", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_tanh_fu_550.LSTM_Top_dadd_64nfYi_U32", "Parent" : "22"},
	{"ID" : "31", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_tanh_fu_550.LSTM_Top_dsub_64nibs_U33", "Parent" : "22"},
	{"ID" : "32", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_tanh_fu_550.LSTM_Top_dadd_64nfYi_U34", "Parent" : "22"},
	{"ID" : "33", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_tanh_fu_550.LSTM_Top_ddiv_64ng8j_U35", "Parent" : "22"},
	{"ID" : "34", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_tanh_fu_550.LSTM_Top_ddiv_64ng8j_U36", "Parent" : "22"},
	{"ID" : "35", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_tanh_fu_550.LSTM_Top_dexp_64nhbi_U37", "Parent" : "22"},
	{"ID" : "36", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_tanh_fu_550.LSTM_Top_dexp_64nhbi_U38", "Parent" : "22"},
	{"ID" : "37", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_tanh_fu_550.LSTM_Top_dexp_64nhbi_U39", "Parent" : "22"},
	{"ID" : "38", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_tanh_fu_550.LSTM_Top_dexp_64nhbi_U40", "Parent" : "22"},
	{"ID" : "39", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_sigmoid_fu_556", "Parent" : "4", "Child" : ["40", "41", "42", "43", "44"],
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
	{"ID" : "40", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_sigmoid_fu_556.LSTM_Top_fptrunc_dEe_U13", "Parent" : "39"},
	{"ID" : "41", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_sigmoid_fu_556.LSTM_Top_fpext_32eOg_U14", "Parent" : "39"},
	{"ID" : "42", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_sigmoid_fu_556.LSTM_Top_dadd_64nfYi_U15", "Parent" : "39"},
	{"ID" : "43", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_sigmoid_fu_556.LSTM_Top_ddiv_64ng8j_U16", "Parent" : "39"},
	{"ID" : "44", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_sigmoid_fu_556.LSTM_Top_dexp_64nhbi_U17", "Parent" : "39"},
	{"ID" : "45", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm_fu_562", "Parent" : "4", "Child" : ["46", "47", "48", "49"],
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
	{"ID" : "46", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm_fu_562.LSTM_Top_fadd_32nbkb_U1", "Parent" : "45"},
	{"ID" : "47", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm_fu_562.LSTM_Top_fadd_32nbkb_U2", "Parent" : "45"},
	{"ID" : "48", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm_fu_562.LSTM_Top_fmul_32ncud_U3", "Parent" : "45"},
	{"ID" : "49", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm_fu_562.LSTM_Top_fmul_32ncud_U4", "Parent" : "45"},
	{"ID" : "50", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573", "Parent" : "4", "Child" : ["51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118"],
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
	{"ID" : "51", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_0_U", "Parent" : "50"},
	{"ID" : "52", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_1_U", "Parent" : "50"},
	{"ID" : "53", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_2_U", "Parent" : "50"},
	{"ID" : "54", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_3_U", "Parent" : "50"},
	{"ID" : "55", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_4_U", "Parent" : "50"},
	{"ID" : "56", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_5_U", "Parent" : "50"},
	{"ID" : "57", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_6_U", "Parent" : "50"},
	{"ID" : "58", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_7_U", "Parent" : "50"},
	{"ID" : "59", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_8_U", "Parent" : "50"},
	{"ID" : "60", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_9_U", "Parent" : "50"},
	{"ID" : "61", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_10_U", "Parent" : "50"},
	{"ID" : "62", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_11_U", "Parent" : "50"},
	{"ID" : "63", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_12_U", "Parent" : "50"},
	{"ID" : "64", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_13_U", "Parent" : "50"},
	{"ID" : "65", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_14_U", "Parent" : "50"},
	{"ID" : "66", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_15_U", "Parent" : "50"},
	{"ID" : "67", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_16_U", "Parent" : "50"},
	{"ID" : "68", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_17_U", "Parent" : "50"},
	{"ID" : "69", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_18_U", "Parent" : "50"},
	{"ID" : "70", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_19_U", "Parent" : "50"},
	{"ID" : "71", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_20_U", "Parent" : "50"},
	{"ID" : "72", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_21_U", "Parent" : "50"},
	{"ID" : "73", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_22_U", "Parent" : "50"},
	{"ID" : "74", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_23_U", "Parent" : "50"},
	{"ID" : "75", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_24_U", "Parent" : "50"},
	{"ID" : "76", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_25_U", "Parent" : "50"},
	{"ID" : "77", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_26_U", "Parent" : "50"},
	{"ID" : "78", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_27_U", "Parent" : "50"},
	{"ID" : "79", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_28_U", "Parent" : "50"},
	{"ID" : "80", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_29_U", "Parent" : "50"},
	{"ID" : "81", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_30_U", "Parent" : "50"},
	{"ID" : "82", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_31_U", "Parent" : "50"},
	{"ID" : "83", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_32_U", "Parent" : "50"},
	{"ID" : "84", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_33_U", "Parent" : "50"},
	{"ID" : "85", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_34_U", "Parent" : "50"},
	{"ID" : "86", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_35_U", "Parent" : "50"},
	{"ID" : "87", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_36_U", "Parent" : "50"},
	{"ID" : "88", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_37_U", "Parent" : "50"},
	{"ID" : "89", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_38_U", "Parent" : "50"},
	{"ID" : "90", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_39_U", "Parent" : "50"},
	{"ID" : "91", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_40_U", "Parent" : "50"},
	{"ID" : "92", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_41_U", "Parent" : "50"},
	{"ID" : "93", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_42_U", "Parent" : "50"},
	{"ID" : "94", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_43_U", "Parent" : "50"},
	{"ID" : "95", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_44_U", "Parent" : "50"},
	{"ID" : "96", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_45_U", "Parent" : "50"},
	{"ID" : "97", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_46_U", "Parent" : "50"},
	{"ID" : "98", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_47_U", "Parent" : "50"},
	{"ID" : "99", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_48_U", "Parent" : "50"},
	{"ID" : "100", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_49_U", "Parent" : "50"},
	{"ID" : "101", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_50_U", "Parent" : "50"},
	{"ID" : "102", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_51_U", "Parent" : "50"},
	{"ID" : "103", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_52_U", "Parent" : "50"},
	{"ID" : "104", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_53_U", "Parent" : "50"},
	{"ID" : "105", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_54_U", "Parent" : "50"},
	{"ID" : "106", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_55_U", "Parent" : "50"},
	{"ID" : "107", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_56_U", "Parent" : "50"},
	{"ID" : "108", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_57_U", "Parent" : "50"},
	{"ID" : "109", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_58_U", "Parent" : "50"},
	{"ID" : "110", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_59_U", "Parent" : "50"},
	{"ID" : "111", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_60_U", "Parent" : "50"},
	{"ID" : "112", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_61_U", "Parent" : "50"},
	{"ID" : "113", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_62_U", "Parent" : "50"},
	{"ID" : "114", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.Weight_lc_63_U", "Parent" : "50"},
	{"ID" : "115", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.LSTM_Top_fadd_32nbkb_U49", "Parent" : "50"},
	{"ID" : "116", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.LSTM_Top_fadd_32nbkb_U50", "Parent" : "50"},
	{"ID" : "117", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.LSTM_Top_fmul_32ncud_U51", "Parent" : "50"},
	{"ID" : "118", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_gemvm1_fu_573.LSTM_Top_fmul_32ncud_U52", "Parent" : "50"},
	{"ID" : "119", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_hprod_fu_708", "Parent" : "4", "Child" : ["120", "121"],
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
	{"ID" : "120", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_hprod_fu_708.LSTM_Top_fmul_32ncud_U44", "Parent" : "119"},
	{"ID" : "121", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_hprod_fu_708.LSTM_Top_fmul_32ncud_U45", "Parent" : "119"},
	{"ID" : "122", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_geva_1_fu_715", "Parent" : "4", "Child" : ["123"],
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
	{"ID" : "123", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.grp_geva_1_fu_715.LSTM_Top_fadd_32nbkb_U10", "Parent" : "122"},
	{"ID" : "124", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.grp_infer_fu_335.LSTM_Top_fadd_32nbkb_U119", "Parent" : "4"},
	{"ID" : "125", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_lipnet_lstm_fu_196.LSTM_Top_fdiv_32njbC_U134", "Parent" : "1"},
	{"ID" : "126", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_in_data_V_U", "Parent" : "0"},
	{"ID" : "127", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_in_keep_V_U", "Parent" : "0"},
	{"ID" : "128", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_in_strb_V_U", "Parent" : "0"},
	{"ID" : "129", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_in_user_V_U", "Parent" : "0"},
	{"ID" : "130", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_in_last_V_U", "Parent" : "0"},
	{"ID" : "131", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_in_id_V_U", "Parent" : "0"},
	{"ID" : "132", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_in_dest_V_U", "Parent" : "0"},
	{"ID" : "133", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_out_data_V_U", "Parent" : "0"},
	{"ID" : "134", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_out_keep_V_U", "Parent" : "0"},
	{"ID" : "135", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_out_strb_V_U", "Parent" : "0"},
	{"ID" : "136", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_out_user_V_U", "Parent" : "0"},
	{"ID" : "137", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_out_last_V_U", "Parent" : "0"},
	{"ID" : "138", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_out_id_V_U", "Parent" : "0"},
	{"ID" : "139", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_out_dest_V_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	LSTM_Top {
		in_data_V {Type I LastRead 1 FirstWrite -1}
		in_keep_V {Type I LastRead 1 FirstWrite -1}
		in_strb_V {Type I LastRead 1 FirstWrite -1}
		in_user_V {Type I LastRead 1 FirstWrite -1}
		in_last_V {Type I LastRead 1 FirstWrite -1}
		in_id_V {Type I LastRead 1 FirstWrite -1}
		in_dest_V {Type I LastRead 1 FirstWrite -1}
		out_data_V {Type O LastRead -1 FirstWrite 5}
		out_keep_V {Type O LastRead -1 FirstWrite 5}
		out_strb_V {Type O LastRead -1 FirstWrite 5}
		out_user_V {Type O LastRead -1 FirstWrite 5}
		out_last_V {Type O LastRead -1 FirstWrite 5}
		out_id_V {Type O LastRead -1 FirstWrite 5}
		out_dest_V {Type O LastRead -1 FirstWrite 5}
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
	lipnet_lstm {
		in_data_V {Type I LastRead 1 FirstWrite -1}
		in_keep_V {Type I LastRead 1 FirstWrite -1}
		in_strb_V {Type I LastRead 1 FirstWrite -1}
		in_user_V {Type I LastRead 1 FirstWrite -1}
		in_last_V {Type I LastRead 1 FirstWrite -1}
		in_id_V {Type I LastRead 1 FirstWrite -1}
		in_dest_V {Type I LastRead 1 FirstWrite -1}
		out_data_V {Type O LastRead -1 FirstWrite 5}
		out_keep_V {Type O LastRead -1 FirstWrite 5}
		out_strb_V {Type O LastRead -1 FirstWrite 5}
		out_user_V {Type O LastRead -1 FirstWrite 5}
		out_last_V {Type O LastRead -1 FirstWrite 5}
		out_id_V {Type O LastRead -1 FirstWrite 5}
		out_dest_V {Type O LastRead -1 FirstWrite 5}
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
	{"Name" : "Latency", "Min" : "413741", "Max" : "413745"}
	, {"Name" : "Interval", "Min" : "413742", "Max" : "413746"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	in_data_V { axis {  { in_r_TDATA in_data 0 32 } } }
	in_keep_V { axis {  { in_r_TKEEP in_data 0 4 } } }
	in_strb_V { axis {  { in_r_TSTRB in_data 0 4 } } }
	in_user_V { axis {  { in_r_TUSER in_data 0 1 } } }
	in_last_V { axis {  { in_r_TLAST in_data 0 1 } } }
	in_id_V { axis {  { in_r_TID in_data 0 1 } } }
	in_dest_V { axis {  { in_r_TVALID in_vld 0 1 }  { in_r_TREADY in_acc 1 1 }  { in_r_TDEST in_data 0 1 } } }
	out_data_V { axis {  { out_r_TDATA out_data 1 32 } } }
	out_keep_V { axis {  { out_r_TKEEP out_data 1 4 } } }
	out_strb_V { axis {  { out_r_TSTRB out_data 1 4 } } }
	out_user_V { axis {  { out_r_TUSER out_data 1 1 } } }
	out_last_V { axis {  { out_r_TLAST out_data 1 1 } } }
	out_id_V { axis {  { out_r_TID out_data 1 1 } } }
	out_dest_V { axis {  { out_r_TVALID out_vld 1 1 }  { out_r_TREADY out_acc 0 1 }  { out_r_TDEST out_data 1 1 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
