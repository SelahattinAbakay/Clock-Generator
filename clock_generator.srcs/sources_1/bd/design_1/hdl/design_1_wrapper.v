//Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2019.2 (win64) Build 2708876 Wed Nov  6 21:40:23 MST 2019
//Date        : Thu May  9 14:01:23 2024
//Host        : DESKTOP-F2KTFA0 running 64-bit major release  (build 9200)
//Command     : generate_target design_1_wrapper.bd
//Design      : design_1_wrapper
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module design_1_wrapper
   (clk,
    out_clock,
    rst);
  input clk;
  output out_clock;
  input rst;

  wire clk;
  wire out_clock;
  wire rst;

  design_1 design_1_i
       (.clk(clk),
        .out_clock(out_clock),
        .rst(rst));
endmodule
