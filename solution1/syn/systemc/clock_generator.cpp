// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "clock_generator.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic clock_generator::ap_const_logic_1 = sc_dt::Log_1;
const sc_lv<1> clock_generator::ap_ST_fsm_state1 = "1";
const sc_lv<32> clock_generator::ap_const_lv32_9 = "1001";
const sc_lv<32> clock_generator::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> clock_generator::ap_const_lv32_FFFFFFFF = "11111111111111111111111111111111";
const sc_lv<1> clock_generator::ap_const_lv1_1 = "1";
const sc_logic clock_generator::ap_const_logic_0 = sc_dt::Log_0;
const bool clock_generator::ap_const_boolean_1 = true;

clock_generator::clock_generator(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_icmp_ln33_fu_46_p2);
    sensitive << ( counter );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_next_counter_fu_52_p2);
    sensitive << ( counter );

    SC_METHOD(thread_out_clock);
    sensitive << ( state );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_select_ln21_fu_72_p3);
    sensitive << ( state );
    sensitive << ( icmp_ln33_fu_46_p2 );
    sensitive << ( xor_ln33_fu_66_p2 );

    SC_METHOD(thread_select_ln33_fu_58_p3);
    sensitive << ( icmp_ln33_fu_46_p2 );
    sensitive << ( next_counter_fu_52_p2 );

    SC_METHOD(thread_xor_ln33_fu_66_p2);
    sensitive << ( icmp_ln33_fu_46_p2 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_CS_fsm );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    state = "0";
    counter = "00000000000000000000000000001001";
    ap_CS_fsm = "1";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "clock_generator_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, out_clock, "(port)out_clock");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, state, "state");
    sc_trace(mVcdFile, counter, "counter");
    sc_trace(mVcdFile, select_ln21_fu_72_p3, "select_ln21_fu_72_p3");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, select_ln33_fu_58_p3, "select_ln33_fu_58_p3");
    sc_trace(mVcdFile, icmp_ln33_fu_46_p2, "icmp_ln33_fu_46_p2");
    sc_trace(mVcdFile, next_counter_fu_52_p2, "next_counter_fu_52_p2");
    sc_trace(mVcdFile, xor_ln33_fu_66_p2, "xor_ln33_fu_66_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("clock_generator.hdltvin.dat");
    mHdltvoutHandle.open("clock_generator.hdltvout.dat");
}

clock_generator::~clock_generator() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
}

void clock_generator::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        counter = select_ln33_fu_58_p3.read();
        state = select_ln21_fu_72_p3.read();
    }
}

void clock_generator::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void clock_generator::thread_icmp_ln33_fu_46_p2() {
    icmp_ln33_fu_46_p2 = (!counter.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(counter.read() == ap_const_lv32_0);
}

void clock_generator::thread_next_counter_fu_52_p2() {
    next_counter_fu_52_p2 = (!counter.read().is_01() || !ap_const_lv32_FFFFFFFF.is_01())? sc_lv<32>(): (sc_biguint<32>(counter.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFFF));
}

void clock_generator::thread_out_clock() {
    out_clock =  (sc_logic) (state.read()[0]);
}

void clock_generator::thread_select_ln21_fu_72_p3() {
    select_ln21_fu_72_p3 = (!state.read()[0].is_01())? sc_lv<1>(): ((state.read()[0].to_bool())? xor_ln33_fu_66_p2.read(): icmp_ln33_fu_46_p2.read());
}

void clock_generator::thread_select_ln33_fu_58_p3() {
    select_ln33_fu_58_p3 = (!icmp_ln33_fu_46_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln33_fu_46_p2.read()[0].to_bool())? ap_const_lv32_9: next_counter_fu_52_p2.read());
}

void clock_generator::thread_xor_ln33_fu_66_p2() {
    xor_ln33_fu_66_p2 = (icmp_ln33_fu_46_p2.read() ^ ap_const_lv1_1);
}

void clock_generator::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "X";
            break;
    }
}

void clock_generator::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"out_clock\" :  \"" << out_clock.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

