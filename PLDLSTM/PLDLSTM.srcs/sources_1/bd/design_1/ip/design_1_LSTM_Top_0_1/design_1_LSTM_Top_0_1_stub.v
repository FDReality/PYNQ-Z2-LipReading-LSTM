// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2019.2 (win64) Build 2708876 Wed Nov  6 21:40:23 MST 2019
// Date        : Fri Nov 25 12:08:30 2022
// Host        : LAPTOP-OLT6HJVT running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode synth_stub
//               d:/FPGA/Lab1/PLDLSTM/PLDLSTM.srcs/sources_1/bd/design_1/ip/design_1_LSTM_Top_0_1/design_1_LSTM_Top_0_1_stub.v
// Design      : design_1_LSTM_Top_0_1
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7z020clg400-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* X_CORE_INFO = "LSTM_Top,Vivado 2019.2" *)
module design_1_LSTM_Top_0_1(ap_clk, ap_rst_n, in_r_TVALID, in_r_TREADY, 
  in_r_TDATA, in_r_TDEST, in_r_TKEEP, in_r_TSTRB, in_r_TUSER, in_r_TLAST, in_r_TID, out_r_TVALID, 
  out_r_TREADY, out_r_TDATA, out_r_TDEST, out_r_TKEEP, out_r_TSTRB, out_r_TUSER, out_r_TLAST, 
  out_r_TID)
/* synthesis syn_black_box black_box_pad_pin="ap_clk,ap_rst_n,in_r_TVALID,in_r_TREADY,in_r_TDATA[31:0],in_r_TDEST[0:0],in_r_TKEEP[3:0],in_r_TSTRB[3:0],in_r_TUSER[0:0],in_r_TLAST[0:0],in_r_TID[0:0],out_r_TVALID,out_r_TREADY,out_r_TDATA[31:0],out_r_TDEST[0:0],out_r_TKEEP[3:0],out_r_TSTRB[3:0],out_r_TUSER[0:0],out_r_TLAST[0:0],out_r_TID[0:0]" */;
  input ap_clk;
  input ap_rst_n;
  input in_r_TVALID;
  output in_r_TREADY;
  input [31:0]in_r_TDATA;
  input [0:0]in_r_TDEST;
  input [3:0]in_r_TKEEP;
  input [3:0]in_r_TSTRB;
  input [0:0]in_r_TUSER;
  input [0:0]in_r_TLAST;
  input [0:0]in_r_TID;
  output out_r_TVALID;
  input out_r_TREADY;
  output [31:0]out_r_TDATA;
  output [0:0]out_r_TDEST;
  output [3:0]out_r_TKEEP;
  output [3:0]out_r_TSTRB;
  output [0:0]out_r_TUSER;
  output [0:0]out_r_TLAST;
  output [0:0]out_r_TID;
endmodule
