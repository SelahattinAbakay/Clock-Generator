// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2019.2 (win64) Build 2708876 Wed Nov  6 21:40:23 MST 2019
// Date        : Thu May  9 14:02:07 2024
// Host        : DESKTOP-F2KTFA0 running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode synth_stub
//               d:/vivado_hls/clock_generator-vhls/clock_generator.srcs/sources_1/bd/design_1/ip/design_1_clock_generator_0_0/design_1_clock_generator_0_0_stub.v
// Design      : design_1_clock_generator_0_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7a35tcpg236-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* X_CORE_INFO = "clock_generator,Vivado 2019.2" *)
module design_1_clock_generator_0_0(ap_clk, ap_rst, out_clock)
/* synthesis syn_black_box black_box_pad_pin="ap_clk,ap_rst,out_clock" */;
  input ap_clk;
  input ap_rst;
  output out_clock;
endmodule
