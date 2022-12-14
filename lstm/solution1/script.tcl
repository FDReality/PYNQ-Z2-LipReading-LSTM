############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project LSTM
set_top LSTM_Top
add_files LSTM/weight.h
add_files LSTM/utils.h
add_files LSTM/rnn_top.cpp
add_files LSTM/rnn.h
add_files LSTM/rnn.cpp
add_files -tb LSTM/main.cpp -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xc7z020-clg400-1}
create_clock -period 10 -name default
config_export -format ip_catalog -rtl verilog
#source "./LSTM/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog
