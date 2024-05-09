-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2019.2 (win64) Build 2708876 Wed Nov  6 21:40:23 MST 2019
-- Date        : Thu May  9 14:02:07 2024
-- Host        : DESKTOP-F2KTFA0 running 64-bit major release  (build 9200)
-- Command     : write_vhdl -force -mode synth_stub
--               d:/vivado_hls/clock_generator-vhls/clock_generator.srcs/sources_1/bd/design_1/ip/design_1_clock_generator_0_0/design_1_clock_generator_0_0_stub.vhdl
-- Design      : design_1_clock_generator_0_0
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7a35tcpg236-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity design_1_clock_generator_0_0 is
  Port ( 
    ap_clk : in STD_LOGIC;
    ap_rst : in STD_LOGIC;
    out_clock : out STD_LOGIC
  );

end design_1_clock_generator_0_0;

architecture stub of design_1_clock_generator_0_0 is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "ap_clk,ap_rst,out_clock";
attribute X_CORE_INFO : string;
attribute X_CORE_INFO of stub : architecture is "clock_generator,Vivado 2019.2";
begin
end;
