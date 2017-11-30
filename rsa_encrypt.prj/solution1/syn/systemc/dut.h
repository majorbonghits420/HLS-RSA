// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _dut_HH_
#define _dut_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "dut_urem_32ns_32ns_32_36.h"
#include "dut_mul_32s_32s_32_6.h"

namespace ap_rtl {

struct dut : public sc_module {
    // Port declarations 12
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > strm_in_V_V_dout;
    sc_in< sc_logic > strm_in_V_V_empty_n;
    sc_out< sc_logic > strm_in_V_V_read;
    sc_out< sc_lv<32> > strm_out_V_V_din;
    sc_in< sc_logic > strm_out_V_V_full_n;
    sc_out< sc_logic > strm_out_V_V_write;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    dut(sc_module_name name);
    SC_HAS_PROCESS(dut);

    ~dut();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    dut_urem_32ns_32ns_32_36<1,36,32,32,32>* dut_urem_32ns_32ns_32_36_U1;
    dut_mul_32s_32s_32_6<1,6,32,32,32>* dut_mul_32s_32s_32_6_U2;
    dut_mul_32s_32s_32_6<1,6,32,32,32>* dut_mul_32s_32s_32_6_U3;
    dut_urem_32ns_32ns_32_36<1,36,32,32,32>* dut_urem_32ns_32ns_32_36_U4;
    sc_signal< sc_lv<45> > ap_CS_fsm;
    sc_signal< sc_logic > ap_sig_cseq_ST_st1_fsm_0;
    sc_signal< bool > ap_sig_60;
    sc_signal< sc_logic > strm_in_V_V_blk_n;
    sc_signal< sc_logic > ap_sig_cseq_ST_st2_fsm_1;
    sc_signal< bool > ap_sig_84;
    sc_signal< sc_logic > ap_sig_cseq_ST_st3_fsm_2;
    sc_signal< bool > ap_sig_92;
    sc_signal< sc_logic > strm_out_V_V_blk_n;
    sc_signal< sc_logic > ap_sig_cseq_ST_st81_fsm_44;
    sc_signal< bool > ap_sig_101;
    sc_signal< sc_lv<32> > p_i_reg_81;
    sc_signal< sc_lv<32> > x_pn_i_reg_90;
    sc_signal< sc_lv<32> > tmp_V_4_reg_166;
    sc_signal< bool > ap_sig_111;
    sc_signal< sc_lv<32> > tmp_V_5_reg_171;
    sc_signal< sc_lv<32> > tmp_V_6_reg_176;
    sc_signal< sc_lv<1> > tmp_i_fu_109_p2;
    sc_signal< sc_lv<1> > tmp_i_reg_182;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp0_stg0_fsm_3;
    sc_signal< bool > ap_sig_126;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it0;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it1;
    sc_signal< sc_lv<1> > tmp_1_fu_115_p1;
    sc_signal< sc_lv<1> > tmp_1_reg_186;
    sc_signal< sc_lv<1> > ap_reg_ppstg_tmp_1_reg_186_pp0_iter1;
    sc_signal< sc_lv<32> > tmp_fu_134_p1;
    sc_signal< sc_lv<32> > tmp_reg_190;
    sc_signal< sc_lv<32> > grp_fu_119_p2;
    sc_signal< sc_lv<32> > x_assign_1_reg_195;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp0_stg35_fsm_38;
    sc_signal< bool > ap_sig_152;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp0_stg36_fsm_39;
    sc_signal< bool > ap_sig_163;
    sc_signal< sc_lv<32> > grp_fu_138_p2;
    sc_signal< sc_lv<32> > tmp_6_i_reg_207;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp0_stg40_fsm_43;
    sc_signal< bool > ap_sig_177;
    sc_signal< sc_lv<32> > grp_fu_144_p2;
    sc_signal< sc_lv<32> > p_i_phi_fu_84_p4;
    sc_signal< sc_lv<32> > x_pn_i_phi_fu_93_p4;
    sc_signal< sc_lv<32> > tmp_V_fu_64;
    sc_signal< sc_lv<32> > grp_fu_149_p2;
    sc_signal< sc_lv<31> > y_assign_1_fu_124_p4;
    sc_signal< sc_lv<45> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<45> ap_ST_st1_fsm_0;
    static const sc_lv<45> ap_ST_st2_fsm_1;
    static const sc_lv<45> ap_ST_st3_fsm_2;
    static const sc_lv<45> ap_ST_pp0_stg0_fsm_3;
    static const sc_lv<45> ap_ST_pp0_stg1_fsm_4;
    static const sc_lv<45> ap_ST_pp0_stg2_fsm_5;
    static const sc_lv<45> ap_ST_pp0_stg3_fsm_6;
    static const sc_lv<45> ap_ST_pp0_stg4_fsm_7;
    static const sc_lv<45> ap_ST_pp0_stg5_fsm_8;
    static const sc_lv<45> ap_ST_pp0_stg6_fsm_9;
    static const sc_lv<45> ap_ST_pp0_stg7_fsm_10;
    static const sc_lv<45> ap_ST_pp0_stg8_fsm_11;
    static const sc_lv<45> ap_ST_pp0_stg9_fsm_12;
    static const sc_lv<45> ap_ST_pp0_stg10_fsm_13;
    static const sc_lv<45> ap_ST_pp0_stg11_fsm_14;
    static const sc_lv<45> ap_ST_pp0_stg12_fsm_15;
    static const sc_lv<45> ap_ST_pp0_stg13_fsm_16;
    static const sc_lv<45> ap_ST_pp0_stg14_fsm_17;
    static const sc_lv<45> ap_ST_pp0_stg15_fsm_18;
    static const sc_lv<45> ap_ST_pp0_stg16_fsm_19;
    static const sc_lv<45> ap_ST_pp0_stg17_fsm_20;
    static const sc_lv<45> ap_ST_pp0_stg18_fsm_21;
    static const sc_lv<45> ap_ST_pp0_stg19_fsm_22;
    static const sc_lv<45> ap_ST_pp0_stg20_fsm_23;
    static const sc_lv<45> ap_ST_pp0_stg21_fsm_24;
    static const sc_lv<45> ap_ST_pp0_stg22_fsm_25;
    static const sc_lv<45> ap_ST_pp0_stg23_fsm_26;
    static const sc_lv<45> ap_ST_pp0_stg24_fsm_27;
    static const sc_lv<45> ap_ST_pp0_stg25_fsm_28;
    static const sc_lv<45> ap_ST_pp0_stg26_fsm_29;
    static const sc_lv<45> ap_ST_pp0_stg27_fsm_30;
    static const sc_lv<45> ap_ST_pp0_stg28_fsm_31;
    static const sc_lv<45> ap_ST_pp0_stg29_fsm_32;
    static const sc_lv<45> ap_ST_pp0_stg30_fsm_33;
    static const sc_lv<45> ap_ST_pp0_stg31_fsm_34;
    static const sc_lv<45> ap_ST_pp0_stg32_fsm_35;
    static const sc_lv<45> ap_ST_pp0_stg33_fsm_36;
    static const sc_lv<45> ap_ST_pp0_stg34_fsm_37;
    static const sc_lv<45> ap_ST_pp0_stg35_fsm_38;
    static const sc_lv<45> ap_ST_pp0_stg36_fsm_39;
    static const sc_lv<45> ap_ST_pp0_stg37_fsm_40;
    static const sc_lv<45> ap_ST_pp0_stg38_fsm_41;
    static const sc_lv<45> ap_ST_pp0_stg39_fsm_42;
    static const sc_lv<45> ap_ST_pp0_stg40_fsm_43;
    static const sc_lv<45> ap_ST_st81_fsm_44;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_2C;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_26;
    static const sc_lv<32> ap_const_lv32_27;
    static const sc_lv<32> ap_const_lv32_2B;
    static const sc_lv<32> ap_const_lv32_1F;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_sig_101();
    void thread_ap_sig_111();
    void thread_ap_sig_126();
    void thread_ap_sig_152();
    void thread_ap_sig_163();
    void thread_ap_sig_177();
    void thread_ap_sig_60();
    void thread_ap_sig_84();
    void thread_ap_sig_92();
    void thread_ap_sig_cseq_ST_pp0_stg0_fsm_3();
    void thread_ap_sig_cseq_ST_pp0_stg35_fsm_38();
    void thread_ap_sig_cseq_ST_pp0_stg36_fsm_39();
    void thread_ap_sig_cseq_ST_pp0_stg40_fsm_43();
    void thread_ap_sig_cseq_ST_st1_fsm_0();
    void thread_ap_sig_cseq_ST_st2_fsm_1();
    void thread_ap_sig_cseq_ST_st3_fsm_2();
    void thread_ap_sig_cseq_ST_st81_fsm_44();
    void thread_p_i_phi_fu_84_p4();
    void thread_strm_in_V_V_blk_n();
    void thread_strm_in_V_V_read();
    void thread_strm_out_V_V_blk_n();
    void thread_strm_out_V_V_din();
    void thread_strm_out_V_V_write();
    void thread_tmp_1_fu_115_p1();
    void thread_tmp_fu_134_p1();
    void thread_tmp_i_fu_109_p2();
    void thread_x_pn_i_phi_fu_93_p4();
    void thread_y_assign_1_fu_124_p4();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
