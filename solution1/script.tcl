############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project clock_generator-vhls
set_top clock_generator
add_files clock_generator-vhls/clock_generator.cpp
add_files clock_generator-vhls/clock_generator.h
open_solution "solution1"
set_part {xc7a35tcpg236-1}
create_clock -period 10 -name default
#source "./clock_generator-vhls/solution1/directives.tcl"
#csim_design
csynth_design
#cosim_design
export_design -rtl verilog -format ip_catalog -vendor "Xilinx" -version "1.1.0"
