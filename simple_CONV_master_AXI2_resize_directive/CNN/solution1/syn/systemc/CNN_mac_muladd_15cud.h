// ==============================================================
// File generated on Tue Apr 02 18:08:10 +0430 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __CNN_mac_muladd_15cud__HH__
#define __CNN_mac_muladd_15cud__HH__
#include "simcore_mac_1.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int din1_WIDTH,
    int din2_WIDTH,
    int dout_WIDTH>
SC_MODULE(CNN_mac_muladd_15cud) {
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_in< sc_dt::sc_lv<din1_WIDTH> >   din1;
    sc_core::sc_in< sc_dt::sc_lv<din2_WIDTH> >   din2;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    simcore_mac_1<ID, 1, din0_WIDTH, din1_WIDTH, din2_WIDTH, dout_WIDTH> simcore_mac_1_U;

    SC_CTOR(CNN_mac_muladd_15cud):  simcore_mac_1_U ("simcore_mac_1_U") {
        simcore_mac_1_U.din0(din0);
        simcore_mac_1_U.din1(din1);
        simcore_mac_1_U.din2(din2);
        simcore_mac_1_U.dout(dout);

    }

};

#endif //
