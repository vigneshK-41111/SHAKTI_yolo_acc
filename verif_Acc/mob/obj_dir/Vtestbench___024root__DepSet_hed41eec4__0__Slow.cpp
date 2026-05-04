// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench___024root.h"

VL_ATTR_COLD void Vtestbench___024root___eval_static__TOP(Vtestbench___024root* vlSelf);

VL_ATTR_COLD void Vtestbench___024root___eval_static(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_static\n"); );
    // Body
    Vtestbench___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtestbench___024root___eval_static__TOP(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axilite_ctrl_s_axi_U__DOT__int_ap_start = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axilite_ctrl_s_axi_U__DOT__int_auto_restart = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axilite_ctrl_s_axi_U__DOT__int_gie = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axilite_ctrl_s_axi_U__DOT__int_ier = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axilite_ctrl_s_axi_U__DOT__int_isr = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axilite_ctrl_s_axi_U__DOT__int_pixel_in = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axilite_ctrl_s_axi_U__DOT__int_pool1_out = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axilite_ctrl_s_axi_U__DOT__int_start_r = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__fifo_wreq__DOT__full_n = 1U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__fifo_wreq__DOT__empty_n = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__fifo_wreq__DOT__dout_vld = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__fifo_wreq__DOT__mOutPtr = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__fifo_wreq__DOT__genblk1__DOT__raddr = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__full_n = 1U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__empty_n = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__dout_vld = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__mOutPtr = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__genblk1__DOT__waddr = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__genblk1__DOT__raddr = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__fifo_wrsp__DOT__dout_vld = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__user_resp__DOT__full_n = 1U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__user_resp__DOT__empty_n = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__user_resp__DOT__dout_vld = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__user_resp__DOT__mOutPtr = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__wreq_offset__DOT__dout_vld = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__fifo_burst__DOT__dout_vld = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__req_fifo__DOT__dout_vld = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__data_fifo__DOT__full_n = 1U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__data_fifo__DOT__empty_n = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__data_fifo__DOT__dout_vld = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__data_fifo__DOT__mOutPtr = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__data_fifo__DOT__genblk1__DOT__raddr = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__dout_vld = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__fifo_rreq__DOT__full_n = 1U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__fifo_rreq__DOT__empty_n = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__fifo_rreq__DOT__dout_vld = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__fifo_rreq__DOT__mOutPtr = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__fifo_rreq__DOT__genblk1__DOT__raddr = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__full_n = 1U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__empty_n = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__dout_vld = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__mOutPtr = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__genblk1__DOT__waddr = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__genblk1__DOT__raddr = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rreq_offset__DOT__full_n = 1U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rreq_offset__DOT__empty_n = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rreq_offset__DOT__dout_vld = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rreq_offset__DOT__mOutPtr = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rreq_offset__DOT__genblk1__DOT__raddr = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__full_n = 1U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__empty_n = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__dout_vld = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mOutPtr = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_burst__DOT__full_n = 1U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_burst__DOT__empty_n = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_burst__DOT__dout_vld = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_burst__DOT__mOutPtr = 0U;
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_burst__DOT__genblk1__DOT__raddr = 0U;
}

extern const VlWide<11>/*351:0*/ Vtestbench__ConstPool__CONST_hef3c2215_0;
extern const VlWide<11>/*351:0*/ Vtestbench__ConstPool__CONST_he61a240b_0;
extern const VlWide<14>/*447:0*/ Vtestbench__ConstPool__CONST_ha41849b8_0;
extern const VlWide<15>/*479:0*/ Vtestbench__ConstPool__CONST_h3a1716bc_0;
extern const VlWide<25>/*799:0*/ Vtestbench__ConstPool__CONST_h6e0302b7_0;
extern const VlWide<25>/*799:0*/ Vtestbench__ConstPool__CONST_he5210c06_0;
extern const VlWide<25>/*799:0*/ Vtestbench__ConstPool__CONST_h83c742e2_0;
extern const VlWide<25>/*799:0*/ Vtestbench__ConstPool__CONST_h0f3c35a4_0;
extern const VlWide<25>/*799:0*/ Vtestbench__ConstPool__CONST_h364ff3eb_0;
extern const VlWide<25>/*799:0*/ Vtestbench__ConstPool__CONST_hfba24092_0;
extern const VlWide<25>/*799:0*/ Vtestbench__ConstPool__CONST_h51cbb4df_0;
extern const VlWide<25>/*799:0*/ Vtestbench__ConstPool__CONST_hc58947e6_0;
extern const VlWide<25>/*799:0*/ Vtestbench__ConstPool__CONST_h2776187b_0;
extern const VlWide<25>/*799:0*/ Vtestbench__ConstPool__CONST_h2a246694_0;

VL_ATTR_COLD void Vtestbench___024root___eval_initial__TOP(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP\n"); );
    // Init
    IData/*31:0*/ tb__DOT__i;
    tb__DOT__i = 0;
    IData/*31:0*/ tb__DOT__f;
    tb__DOT__f = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e726177U;
    __Vtemp_1[1U] = 0x61676533U;
    __Vtemp_1[2U] = 0x696dU;
    tb__DOT__f = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                             , std::string{"rb"});
    ;
    if (VL_UNLIKELY((0U == tb__DOT__f))) {
        VL_WRITEF_NX("FAILED TO OPEN image\n",0);
        VL_FINISH_MT("testbench.v", 111, "");
    }
    tb__DOT__i = 0U;
    while ((! (tb__DOT__f ? feof(VL_CVT_I_FP(tb__DOT__f)) : true))) {
        vlSelf->tb__DOT____Vlvbound_h1932b697__0 = 
            (0xffU & (tb__DOT__f ? fgetc(VL_CVT_I_FP(tb__DOT__f)) : -1));
        if (VL_LIKELY((0x1e8480U >= (0x1fffffU & tb__DOT__i)))) {
            vlSelf->tb__DOT__mem[(0x1fffffU & tb__DOT__i)] 
                = vlSelf->tb__DOT____Vlvbound_h1932b697__0;
        }
        tb__DOT__i = ((IData)(1U) + tb__DOT__i);
    }
    VL_FCLOSE_I(tb__DOT__f); VL_WRITEF_NX("Loaded %11d bytes\n",0,
                                          32,tb__DOT__i);
    VL_READMEM_N(true, 16, 2304, 0, VL_CVT_PACK_STR_NW(11, Vtestbench__ConstPool__CONST_hef3c2215_0)
                 ,  &(vlSelf->tb__DOT__dut__DOT__buf_A_U__DOT__ram)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 16, 2304, 0, VL_CVT_PACK_STR_NW(11, Vtestbench__ConstPool__CONST_hef3c2215_0)
                 ,  &(vlSelf->tb__DOT__dut__DOT__buf_B_U__DOT__ram)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 16, 6912, 0, VL_CVT_PACK_STR_NW(11, Vtestbench__ConstPool__CONST_he61a240b_0)
                 ,  &(vlSelf->tb__DOT__dut__DOT__buf_exp_U__DOT__ram)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 32, 0, VL_CVT_PACK_STR_NW(14, Vtestbench__ConstPool__CONST_ha41849b8_0)
                 ,  &(vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_bias_U__DOT__rom0)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 7, 32, 0, VL_CVT_PACK_STR_NW(15, Vtestbench__ConstPool__CONST_h3a1716bc_0)
                 ,  &(vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_U__DOT__rom0)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 7, 32, 0, VL_CVT_PACK_STR_NW(15, Vtestbench__ConstPool__CONST_h3a1716bc_0)
                 ,  &(vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_U__DOT__rom1)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 7, 32, 0, VL_CVT_PACK_STR_NW(15, Vtestbench__ConstPool__CONST_h3a1716bc_0)
                 ,  &(vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_U__DOT__rom2)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 7, 32, 0, VL_CVT_PACK_STR_NW(15, Vtestbench__ConstPool__CONST_h3a1716bc_0)
                 ,  &(vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_U__DOT__rom3)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 7, 32, 0, VL_CVT_PACK_STR_NW(15, Vtestbench__ConstPool__CONST_h3a1716bc_0)
                 ,  &(vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_U__DOT__rom4)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 32, 0, VL_CVT_PACK_STR_NW(25, Vtestbench__ConstPool__CONST_h6e0302b7_0)
                 ,  &(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__features_0_1_bias_U__DOT__rom0)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 7, 32, 0, VL_CVT_PACK_STR_NW(25, Vtestbench__ConstPool__CONST_he5210c06_0)
                 ,  &(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__features_0_1_weight_U__DOT__rom0)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 16, 0, VL_CVT_PACK_STR_NW(25, Vtestbench__ConstPool__CONST_h83c742e2_0)
                 ,  &(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__features_1_conv_2_bias_U__DOT__rom0)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 7, 16, 0, VL_CVT_PACK_STR_NW(25, Vtestbench__ConstPool__CONST_h0f3c35a4_0)
                 ,  &(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__features_1_conv_2_weight_U__DOT__rom0)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 96, 0, VL_CVT_PACK_STR_NW(25, Vtestbench__ConstPool__CONST_h364ff3eb_0)
                 ,  &(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__features_2_conv_0_1_bias_U__DOT__rom0)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 7, 96, 0, VL_CVT_PACK_STR_NW(25, Vtestbench__ConstPool__CONST_hfba24092_0)
                 ,  &(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__features_2_conv_0_1_weight_U__DOT__rom0)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 96, 0, VL_CVT_PACK_STR_NW(25, Vtestbench__ConstPool__CONST_h51cbb4df_0)
                 ,  &(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__features_2_conv_1_1_bias_U__DOT__rom0)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 7, 96, 0, VL_CVT_PACK_STR_NW(25, Vtestbench__ConstPool__CONST_hc58947e6_0)
                 ,  &(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__features_2_conv_1_1_weight_U__DOT__rom0)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 8, 24, 0, VL_CVT_PACK_STR_NW(25, Vtestbench__ConstPool__CONST_h2776187b_0)
                 ,  &(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__features_2_conv_3_bias_U__DOT__rom0)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 7, 24, 0, VL_CVT_PACK_STR_NW(25, Vtestbench__ConstPool__CONST_h2a246694_0)
                 ,  &(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__features_2_conv_3_weight_U__DOT__rom0)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtestbench___024root___eval_final(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__stl(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtestbench___024root___eval_phase__stl(Vtestbench___024root* vlSelf);

VL_ATTR_COLD void Vtestbench___024root___eval_settle(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtestbench___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("testbench.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtestbench___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__stl(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestbench___024root___stl_sequent__TOP__0(Vtestbench___024root* vlSelf);

VL_ATTR_COLD void Vtestbench___024root___eval_stl(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtestbench___024root___stl_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 32> Vtestbench__ConstPool__TABLE_hd59e8662_0;
extern const VlUnpacked<CData/*4:0*/, 512> Vtestbench__ConstPool__TABLE_hc760732e_0;
extern const VlUnpacked<CData/*3:0*/, 256> Vtestbench__ConstPool__TABLE_h94891c55_0;

VL_ATTR_COLD void Vtestbench___024root___stl_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb__DOT__dut__DOT__ap_block_state20_on_subcall_done;
    tb__DOT__dut__DOT__ap_block_state20_on_subcall_done = 0;
    CData/*0:0*/ tb__DOT__dut__DOT____VdfgExtracted_h5811251e__0;
    tb__DOT__dut__DOT____VdfgExtracted_h5811251e__0 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT____VdfgExtracted_h4fbf0135__0;
    tb__DOT__dut__DOT____VdfgExtracted_h4fbf0135__0 = 0;
    SData/*11:0*/ tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__buf_A_address1_local;
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__buf_A_address1_local = 0;
    SData/*11:0*/ tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__buf_A_address0_local;
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__buf_A_address0_local = 0;
    IData/*23:0*/ tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p0;
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p0 = 0;
    IData/*22:0*/ tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p1;
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p1 = 0;
    IData/*23:0*/ tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p0;
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p0 = 0;
    IData/*22:0*/ tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p1;
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p1 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT____VdfgRegularize_h0e68c41c_0_9;
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT____VdfgRegularize_h0e68c41c_0_9 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__empty_fu_487_p2;
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__empty_fu_487_p2 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT____VdfgRegularize_h42b641d4_0_2;
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT____VdfgRegularize_h42b641d4_0_2 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT____VdfgRegularize_h42b641d4_0_3;
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT____VdfgRegularize_h42b641d4_0_3 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT____VdfgRegularize_h42b641d4_0_4;
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT____VdfgRegularize_h42b641d4_0_4 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT____VdfgRegularize_h3c5d5d61_0_6;
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT____VdfgRegularize_h3c5d5d61_0_6 = 0;
    SData/*11:0*/ tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address1_local;
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address1_local = 0;
    SData/*11:0*/ tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address0_local;
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address0_local = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_2;
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_2 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_3;
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_3 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_5;
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_5 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_6;
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_6 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_7;
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_7 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_8;
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_8 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_9;
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_9 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_10;
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_10 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_11;
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_11 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_12;
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_12 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_13;
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_13 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_14;
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_14 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_15;
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_15 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_17;
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_17 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT____VdfgRegularize_hf886e175_0_2;
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT____VdfgRegularize_hf886e175_0_2 = 0;
    CData/*3:0*/ tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__tmp_1_fu_284_p34;
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__tmp_1_fu_284_p34 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT____VdfgRegularize_h2ff13d75_0_5;
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT____VdfgRegularize_h2ff13d75_0_5 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT____VdfgRegularize_h2ff13d75_0_7;
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT____VdfgRegularize_h2ff13d75_0_7 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__WREADY_Dummy;
    tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__WREADY_Dummy = 0;
    CData/*1:0*/ tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__Vstatic__dout;
    tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__Vstatic__dout = 0;
    IData/*31:0*/ tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__Vstatic__i;
    tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__Vstatic__i = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__offset_write;
    tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__offset_write = 0;
    CData/*1:0*/ tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__head_pad_sel;
    tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__head_pad_sel = 0;
    CData/*1:0*/ tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__tail_pad_sel;
    tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__tail_pad_sel = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__first_beat;
    tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__first_beat = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__last_beat;
    tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__last_beat = 0;
    IData/*31:0*/ tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT____VdfgRegularize_h9b029bc0_2_0;
    tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT____VdfgRegularize_h9b029bc0_2_0 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__offset_write;
    tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__offset_write = 0;
    CData/*1:0*/ __Vfunc_tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__4__Vfuncout;
    __Vfunc_tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__4__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__4__din;
    __Vfunc_tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__4__din = 0;
    CData/*1:0*/ __Vfunc_tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__5__Vfuncout;
    __Vfunc_tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__5__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__5__din;
    __Vfunc_tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__5__din = 0;
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*8:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*8:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*4:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*4:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*4:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    CData/*4:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    CData/*4:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    CData/*4:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    // Body
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_NS_fsm 
        = vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_CS_fsm;
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_NS_fsm 
        = vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_CS_fsm;
    vlSelf->tb__DOT__dut__DOT__p_cast_fu_596_p3 = (
                                                   (0x18U 
                                                    & ((IData)(vlSelf->tb__DOT__dut__DOT__c_fu_224) 
                                                       << 3U)) 
                                                   | (7U 
                                                      & (IData)(vlSelf->tb__DOT__dut__DOT__c_fu_224)));
    vlSelf->tb__DOT__dut__DOT__empty_189_fu_728_p2 
        = (0x7ffU & (((IData)(vlSelf->tb__DOT__dut__DOT__oh_reg_376) 
                      << 7U) - ((IData)(vlSelf->tb__DOT__dut__DOT__oh_reg_376) 
                                << 5U)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_159_fu_1066_p2 
        = (0x1ffU & (VL_EXTENDS_II(9,8, (0xfcU & (((IData)(0x3fU) 
                                                   + 
                                                   ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ow_mid2_reg_3385) 
                                                    << 1U)) 
                                                  << 2U))) 
                     - VL_EXTENDS_II(9,6, (0x3fU & 
                                           ((IData)(0x3fU) 
                                            + ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ow_mid2_reg_3385) 
                                               << 1U))))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_155_fu_1384_p2 
        = (0xfffU & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__select_ln31_reg_3402) 
                      << 7U) + ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__select_ln31_reg_3402) 
                                << 4U)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__select_ln56_1_fu_560_p3 
        = ((0x30U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__indvar_flatten19_fu_150))
            ? 1U : (0x7fU & ((IData)(1U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__indvar_flatten19_fu_150))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ref_tmp43_1_i_fu_1208_p8 
        = ((VL_LTS_IQQ(40, 0x60000ULL, vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__sum_11_reg_1505) 
            << 1U) | (VL_GTES_IQQ(40, 0x60000ULL, vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__sum_11_reg_1505) 
                      & (IData)((vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__sum_11_reg_1505 
                                 >> 0x27U))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__select_ln56_2_fu_461_p3 
        = ((0x240U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__indvar_flatten39_fu_146))
            ? 1U : (0x3ffU & ((IData)(1U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__indvar_flatten39_fu_146))));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axilite_ctrl_s_axi_U__DOT__wmask 
        = (((- (IData)((1U & ((IData)(vlSelf->tb__DOT__dut__DOT__s_axi_mnv2_cnn_axilite_ctrl_WSTRB) 
                              >> 3U)))) << 0x18U) | 
           ((0xff0000U & ((- (IData)((1U & ((IData)(vlSelf->tb__DOT__dut__DOT__s_axi_mnv2_cnn_axilite_ctrl_WSTRB) 
                                            >> 2U)))) 
                          << 0x10U)) | ((0xff00U & 
                                         ((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->tb__DOT__dut__DOT__s_axi_mnv2_cnn_axilite_ctrl_WSTRB) 
                                                         >> 1U)))) 
                                          << 8U)) | 
                                        (0xffU & (- (IData)(
                                                            (1U 
                                                             & (IData)(vlSelf->tb__DOT__dut__DOT__s_axi_mnv2_cnn_axilite_ctrl_WSTRB))))))));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__valid_length 
        = (1U & (~ ((IData)((vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT____Vcellout__fifo_wreq__if_dout 
                             >> 0x3fU)) | (0U == (IData)(
                                                         (vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT____Vcellout__fifo_wreq__if_dout 
                                                          >> 0x20U))))));
    if (vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__could_multi_bursts__DOT__last_loop) {
        vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__ost_ctrl_info 
            = vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__last_sect_buf;
        vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__out_CTRL_LEN 
            = (0xffU & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__sect_len_buf));
    } else {
        vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__ost_ctrl_info = 0U;
        vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__out_CTRL_LEN = 0xffU;
    }
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT____Vcellinp__rs_rdata__s_data 
        = (((QData)((IData)(vlSelf->tb__DOT__dut__DOT__m_axi_mnv2_cnn_axi4_pix_RLAST)) 
            << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__pix_rdata)));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__ost_ctrl_len 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__could_multi_bursts__DOT__last_loop)
            ? (0x1fU & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__sect_len_buf))
            : 0x1fU);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__data_push 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__WVALID_Dummy) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__data_fifo__DOT__full_n));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__req_fifo__DOT__push 
        = ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__req_fifo__DOT__dout_vld)) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__burst_valid));
    vlSelf->tb__DOT__s_bvalid = ((IData)(vlSelf->tb__DOT__s_awvalid) 
                                 & (IData)(vlSelf->tb__DOT__s_wvalid));
    vlSelf->tb__DOT__dut__DOT__thr_add1_fu_762_p3 = 
        (((IData)(vlSelf->tb__DOT__dut__DOT__tmp_5_reg_1007) 
          << 4U) | (IData)(vlSelf->tb__DOT__dut__DOT__c_fu_224));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__add_ln83_13_fu_614_p2 
        = (0x7ffU & ((0x7fU & VL_EXTENDS_II(7,6, (0x20U 
                                                  | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__zext_ln83_reg_1334)))) 
                     + (IData)(vlSelf->tb__DOT__dut__DOT__empty_189_reg_1002)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__features_2_conv_3_bias_ce0_local 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
           & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
              >> 1U));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT____VdfgRegularize_hf886e175_0_1 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_enable_reg_pp0_iter1) 
           & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_CS_fsm) 
              >> 1U));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483_mobilenet_top_signed_char_volatile_short_volatile_int_int_pool1 
        = (0xffffU & ((VL_EXTENDS_II(18,17, vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__add_ln115_1_reg_420) 
                       + VL_EXTENDS_II(18,17, vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__add_ln115_reg_415)) 
                      >> 2U));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__add_ln40_41_fu_3245_p2 
        = (0xffffffffffffffULL & ((vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__tmp_41_reg_3948 
                                   << 0x10U) + VL_EXTENDS_QQ(56,47, vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_765)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ref_tmp53_1_i_fu_3301_p8 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__icmp_ln44_reg_3959) 
            << 1U) | ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__icmp_ln44_reg_3959)) 
                      & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__add_ln40_41_reg_3953 
                         >> 0x37U)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_174_fu_2289_p2 
        = (0x7ffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_157_reg_3735) 
                     + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__p_cast61_reg_3700)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__select_ln55_1_fu_473_p3 
        = (0xfU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__h_fu_154) 
                   + (0x30U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__indvar_flatten19_fu_150))));
    vlSelf->__VdfgRegularize_hd87f99a1_78_0 = (0xffffffffffULL 
                                               & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__reg_370 
                                                  + vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__reg_374));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__select_ln55_2_fu_389_p3 
        = (0xfU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__h_fu_150) 
                   + (0x240U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__indvar_flatten39_fu_146))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ref_tmp23_1_i_fu_943_p8 
        = ((VL_LTS_IQQ(40, 0x60000ULL, vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__trunc_ln60_4_reg_1126) 
            << 1U) | (VL_GTES_IQQ(40, 0x60000ULL, vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__trunc_ln60_4_reg_1126) 
                      & (IData)((vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__add_ln60_11_reg_1120 
                                 >> 0x37U))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__add_ln83_31_fu_1035_p2 
        = (0x1fffU & ((0x240U | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__select_ln74_1_reg_1707)) 
                      + (0x1f80U & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__select_ln75_reg_1729) 
                                     << 0xaU) | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__select_ln75_reg_1729) 
                                                 << 7U)))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__add_ln83_37_fu_1587_p2 
        = (0xffffffffffffffULL & ((vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__tmp_19_reg_1978 
                                   << 0x10U) + VL_EXTENDS_QQ(56,47, vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__mul_ln83_16_reg_1973)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ref_tmp43_1_i1_fu_1643_p8 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__icmp_ln86_reg_1989) 
            << 1U) | ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__icmp_ln86_reg_1989)) 
                      & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__add_ln83_37_reg_1983 
                         >> 0x37U)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__select_ln55_1_fu_1136_p3 
        = (7U & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__h_fu_280) 
                 + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__icmp_ln56_reg_3936)));
    vlSelf->__VdfgRegularize_hd87f99a1_132_0 = (0xffffffffffULL 
                                                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1017 
                                                   + vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1021));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT____Vcellinp__rs_req__s_data 
        = (((QData)((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__tmp_len)) 
            << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__tmp_addr)));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT____Vcellinp__rs_req__s_data 
        = (((QData)((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__tmp_len)) 
            << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__tmp_addr)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_NS_fsm 
        = ((1U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_CS_fsm))
            ? ((1U & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483_ap_start_reg)) 
                      & (~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_enable_reg_pp0_iter1))))
                ? 1U : 2U) : ((2U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_CS_fsm))
                               ? 1U : 0U));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__sect_total_tmp 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__first_sect)
            ? vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__sect_total
            : vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__sect_total_buf);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__sect_total_tmp 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__first_sect)
            ? vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__sect_total
            : vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__sect_total_buf);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447_ap_ready 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter0_reg) 
           & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__icmp_ln55_reg_1002) 
              & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_CS_fsm) 
                 >> 1U)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459_ap_ready 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter0_reg) 
           & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__icmp_ln74_reg_1703) 
              & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
                 >> 4U)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0 
        = ((1U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))
            ? (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398_ap_start_reg)
            : (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410_ap_ready 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_enable_reg_pp0_iter0_reg) 
           & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__icmp_ln55_reg_1217) 
              & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_CS_fsm) 
                 >> 3U)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422_ap_ready 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter0_reg) 
           & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__icmp_ln76_reg_1330) 
              & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm) 
                 >> 4U)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0 
        = ((1U & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
            ? (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471_ap_start_reg)
            : (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__sum_3_fu_2179_p3 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_154_reg_3460)
            ? vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__sum_cast93_reg_3634
            : vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__sum_2_reg_3741);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__sum_9_fu_1123_p3 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__empty_55_reg_1310)
            ? vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__sum_8_reg_1500
            : vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__sum_7_reg_1493);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__add_ln60_11_fu_886_p2 
        = (0xffffffffffffffULL & ((0xffffffffff0000ULL 
                                   & (VL_EXTENDS_QQ(56,48, 
                                                    ((QData)((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__tmp_55_reg_1115)) 
                                                     << 0x10U)) 
                                      + VL_EXTENDS_QQ(56,47, vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__reg_286))) 
                                  + VL_EXTENDS_QQ(56,47, vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__reg_290)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__features_0_1_weight_address1_local 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg)
            ? (0x1fU & ((0x2000U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))
                         ? ((IData)(0x18U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_124_reg_3415))
                         : ((0x1000U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))
                             ? ((IData)(0x16U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_124_reg_3415))
                             : ((0x800U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))
                                 ? ((IData)(0x15U) 
                                    + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_124_reg_3415))
                                 : ((0x400U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))
                                     ? ((IData)(0x12U) 
                                        + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_124_reg_3415))
                                     : ((0x200U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))
                                         ? ((IData)(0x11U) 
                                            + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_124_reg_3415))
                                         : ((0x100U 
                                             & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))
                                             ? ((IData)(0xfU) 
                                                + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_124_reg_3415))
                                             : ((0x80U 
                                                 & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))
                                                 ? 
                                                ((IData)(0xcU) 
                                                 + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_124_reg_3415))
                                                 : 
                                                ((0x40U 
                                                  & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))
                                                  ? 
                                                 ((IData)(9U) 
                                                  + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_124_reg_3415))
                                                  : 
                                                 ((0x20U 
                                                   & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))
                                                   ? 
                                                  ((IData)(7U) 
                                                   + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_124_reg_3415))
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))
                                                    ? 
                                                   ((IData)(6U) 
                                                    + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_124_reg_3415))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))
                                                     ? 
                                                    ((IData)(3U) 
                                                     + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_124_reg_3415))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_124_reg_3415))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))
                                                       ? 
                                                      ((0x10U 
                                                        & ((~ 
                                                            (0xfU 
                                                             & (VL_MULS_III(8, (IData)(0x1bU), 
                                                                            (0xffU 
                                                                             & VL_EXTENDS_II(8,4, (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_122_reg_3392)))) 
                                                                >> 4U))) 
                                                           << 4U)) 
                                                       | (0xfU 
                                                          & VL_MULS_III(8, (IData)(0x1bU), 
                                                                        (0xffU 
                                                                         & VL_EXTENDS_II(8,4, (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_122_reg_3392))))))
                                                       : 0U))))))))))))))
            : 0U);
    if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter1) 
         & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
            >> 3U))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1001) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1005) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p0 
            = (0x7fffffU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__zext_ln60_31_reg_4425));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p0 
            = (0x7fffffU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__zext_ln60_33_reg_4430));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter1) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 2U))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1001) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1005) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p0 
            = (0x7fffffU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__zext_ln60_27_reg_4390));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p0 
            = (0x7fffffU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__zext_ln60_29_reg_4395));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter1) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 1U))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1001) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1005) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p0 
            = (0x7fffffU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__zext_ln60_23_reg_4355));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p0 
            = (0x7fffffU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__zext_ln60_25_reg_4360));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter1) 
                & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1001) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1005) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p0 
            = (0x7fffffU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__zext_ln60_19_reg_4320));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p0 
            = (0x7fffffU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__zext_ln60_21_reg_4325));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 0x17U))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1001) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1005) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p0 
            = (0x7fffffU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__zext_ln60_15_reg_4285));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p0 
            = (0x7fffffU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__zext_ln60_17_reg_4290));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 0x16U))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1001) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1005) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p0 
            = (0x7fffffU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__zext_ln60_11_reg_4250));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p0 
            = (0x7fffffU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__zext_ln60_13_reg_4255));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 0x15U))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1001) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1005) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p0 
            = (0x7fffffU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__zext_ln60_7_reg_4215));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p0 
            = (0x7fffffU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__zext_ln60_9_reg_4220));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 0x14U))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1001) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1005) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p0 
            = (0x7fffffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_992) 
                            << 0x10U));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p0 
            = (0x7fffffU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__zext_ln60_5_reg_4185));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 0x13U))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1001) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1005) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p0 
            = (0x7fffffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1009) 
                            << 0x10U));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p0 
            = (0x7fffffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1013) 
                            << 0x10U));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 0x12U))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1001) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1005) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p0 
            = (0x7fffffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_992) 
                            << 0x10U));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p0 
            = (0x7fffffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_997) 
                            << 0x10U));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 0x11U))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1001) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1005) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p0 
            = (0x7fffffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1009) 
                            << 0x10U));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p0 
            = (0x7fffffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1013) 
                            << 0x10U));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 0x10U))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1001) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1005) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p0 
            = (0x7fffffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_992) 
                            << 0x10U));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p0 
            = (0x7fffffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_997) 
                            << 0x10U));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 0xfU))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1001) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1005) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p0 
            = (0x7fffffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1009) 
                            << 0x10U));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p0 
            = (0x7fffffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1013) 
                            << 0x10U));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 0xeU))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1001) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1005) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p0 
            = (0x7fffffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_992) 
                            << 0x10U));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p0 
            = (0x7fffffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_997) 
                            << 0x10U));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 0xdU))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1001) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1005) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p0 
            = (0x7fffffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1009) 
                            << 0x10U));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p0 
            = (0x7fffffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1013) 
                            << 0x10U));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 0xcU))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1001) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1005) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p0 
            = (0x7fffffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_992) 
                            << 0x10U));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p0 
            = (0x7fffffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_997) 
                            << 0x10U));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 0xbU))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1001) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1005) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p0 
            = (0x7fffffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1009) 
                            << 0x10U));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p0 
            = (0x7fffffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1013) 
                            << 0x10U));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 0xaU))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1001) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1005) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p0 
            = (0x7fffffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_992) 
                            << 0x10U));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p0 
            = (0x7fffffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_997) 
                            << 0x10U));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 9U))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1001) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1005) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p0 
            = (0x7fffffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1009) 
                            << 0x10U));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p0 
            = (0x7fffffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1013) 
                            << 0x10U));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 8U))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1001) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1005) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p0 
            = (0x7fffffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_992) 
                            << 0x10U));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p0 
            = (0x7fffffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_997) 
                            << 0x10U));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 7U))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1001) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1005) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p0 
            = (0x7fffffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1009) 
                            << 0x10U));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p0 
            = (0x7fffffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1013) 
                            << 0x10U));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 6U))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1001) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1005) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p0 
            = (0x7fffffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_992) 
                            << 0x10U));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p0 
            = (0x7fffffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_997) 
                            << 0x10U));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 5U))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1001) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1005) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p0 
            = (0x7fffffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1009) 
                            << 0x10U));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p0 
            = (0x7fffffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1013) 
                            << 0x10U));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 4U))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1001) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p1 
            = (0xffffffU & (IData)((0xffffffffffULL 
                                    & VL_EXTENDS_QI(40,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1005) 
                                                     << 8U)))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p0 
            = (0x7fffffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_992) 
                            << 0x10U));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p0 
            = (0x7fffffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_997) 
                            << 0x10U));
    } else {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p1 
            = (0xffffffU & 0U);
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p1 
            = (0xffffffU & 0U);
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p0 
            = (0x7fffffU & 0U);
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p0 
            = (0x7fffffU & 0U);
    }
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__could_multi_bursts__DOT__addr_tmp 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__could_multi_bursts__DOT__first_loop)
            ? vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__sect_addr_buf
            : (vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__could_multi_bursts__DOT__addr_buf 
               + (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__could_multi_bursts__DOT__addr_step)));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__could_multi_bursts__DOT__addr_tmp 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__could_multi_bursts__DOT__first_loop)
            ? vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__sect_addr_buf
            : (vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__could_multi_bursts__DOT__addr_buf 
               + (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__could_multi_bursts__DOT__addr_step)));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__wrsp_read 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__user_resp__DOT__full_n) 
           & ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__fifo_wrsp__DOT__dout_vld) 
              & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__wrsp_type)) 
                 | ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__rs_resp__DOT__state) 
                    & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__last_resp)))));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__sect_len 
        = ((0U == vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__sect_total)
            ? (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__beat_len)
            : (((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__last_sect)) 
                & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__first_sect))
                ? (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__start_to_4k)
                : (((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__first_sect)) 
                    & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__last_sect))
                    ? (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__end_from_4k)
                    : 0x3ffU)));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__push 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__full_n) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__sect_len 
        = ((0U == vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__sect_total)
            ? (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__beat_len)
            : (((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__last_sect)) 
                & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__first_sect))
                ? (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__start_to_4k)
                : (((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__first_sect)) 
                    & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__last_sect))
                    ? (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__end_from_4k)
                    : 0x3ffU)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__select_ln31_fu_929_p3 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__and_ln30_reg_3370)
            ? (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__add_ln31_reg_3380)
            : (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__select_ln30_reg_3365));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__grp_fu_394_p2 
        = (0x7fffffffffffULL & VL_MULS_QQQ(47, (0x7fffffffffffULL 
                                                & VL_EXTENDS_QI(47,24, 
                                                                (0xffffffU 
                                                                 & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter1) 
                                                                     & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
                                                                        >> 2U))
                                                                     ? (IData)(
                                                                               (0x7fffffffffffULL 
                                                                                & VL_EXTENDS_QI(47,24, 
                                                                                ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__reg_419) 
                                                                                << 8U))))
                                                                     : 
                                                                    (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter1) 
                                                                      & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
                                                                         >> 1U))
                                                                      ? (IData)(
                                                                                (0x7fffffffffffULL 
                                                                                & VL_EXTENDS_QI(47,24, 
                                                                                ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__reg_419) 
                                                                                << 8U))))
                                                                      : 
                                                                     (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter1) 
                                                                       & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm))
                                                                       ? (IData)(
                                                                                (0x7fffffffffffULL 
                                                                                & VL_EXTENDS_QI(47,24, 
                                                                                ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__reg_419) 
                                                                                << 8U))))
                                                                       : 
                                                                      (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter0_reg) 
                                                                        & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
                                                                           >> 4U))
                                                                        ? (IData)(
                                                                                (0x7fffffffffffULL 
                                                                                & VL_EXTENDS_QI(47,24, 
                                                                                ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__reg_419) 
                                                                                << 8U))))
                                                                        : 0U))))))), 
                                           (0x7fffffffffffULL 
                                            & VL_EXTENDS_QI(47,24, 
                                                            (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter1) 
                                                              & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
                                                                 >> 2U))
                                                              ? 
                                                             ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__reg_410) 
                                                              << 0x10U)
                                                              : 
                                                             (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter1) 
                                                               & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
                                                                  >> 1U))
                                                               ? 
                                                              ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__reg_402) 
                                                               << 0x10U)
                                                               : 
                                                              (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter1) 
                                                                & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm))
                                                                ? 
                                                               ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__reg_410) 
                                                                << 0x10U)
                                                                : 
                                                               (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter0_reg) 
                                                                 & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
                                                                    >> 4U))
                                                                 ? 
                                                                ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__reg_402) 
                                                                 << 0x10U)
                                                                 : 0U))))))));
    __Vtableidx16 = (((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__full_n) 
                      << 4U) | (((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__s_ready_t) 
                                 << 3U) | (((IData)(vlSelf->tb__DOT__pix_rvalid) 
                                            << 2U) 
                                           | (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state))));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__next 
        = Vtestbench__ConstPool__TABLE_hd59e8662_0[__Vtableidx16];
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT____VdfgRegularize_h3e66546a_0_5 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_CS_fsm) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388_ap_start_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_loop_init 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447_ap_start_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT____VdfgRegularize_h2ff13d75_0_8 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_CS_fsm) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521_ap_start_reg));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__pop 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__empty_n) 
           & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__dout_vld)) 
              | (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rs_tmp_rdata__DOT__s_ready_t)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_loop_init 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410_ap_start_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__grp_fu_390_p2 
        = (0x7fffffffffffULL & VL_MULS_QQQ(47, (0x7fffffffffffULL 
                                                & VL_EXTENDS_QI(47,24, 
                                                                (0xffffffU 
                                                                 & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter1) 
                                                                     & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
                                                                        >> 3U))
                                                                     ? (IData)(
                                                                               (0x7fffffffffffULL 
                                                                                & VL_EXTENDS_QI(47,24, 
                                                                                ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__reg_414) 
                                                                                << 8U))))
                                                                     : 
                                                                    (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter1) 
                                                                      & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
                                                                         >> 2U))
                                                                      ? (IData)(
                                                                                (0x7fffffffffffULL 
                                                                                & VL_EXTENDS_QI(47,24, 
                                                                                ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__reg_414) 
                                                                                << 8U))))
                                                                      : 
                                                                     (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter1) 
                                                                       & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
                                                                          >> 1U))
                                                                       ? (IData)(
                                                                                (0x7fffffffffffULL 
                                                                                & VL_EXTENDS_QI(47,24, 
                                                                                ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__reg_414) 
                                                                                << 8U))))
                                                                       : 
                                                                      (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter1) 
                                                                        & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm))
                                                                        ? (IData)(
                                                                                (0x7fffffffffffULL 
                                                                                & VL_EXTENDS_QI(47,24, 
                                                                                ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__reg_414) 
                                                                                << 8U))))
                                                                        : 
                                                                       (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter0_reg) 
                                                                         & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
                                                                            >> 4U))
                                                                         ? (IData)(
                                                                                (0x7fffffffffffULL 
                                                                                & VL_EXTENDS_QI(47,24, 
                                                                                ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__reg_414) 
                                                                                << 8U))))
                                                                         : 0U)))))))), 
                                           (0x7fffffffffffULL 
                                            & VL_EXTENDS_QI(47,24, 
                                                            (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter1) 
                                                              & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
                                                                 >> 3U))
                                                              ? 
                                                             ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__features_2_conv_1_1_weight_load_8_reg_1941) 
                                                              << 0x10U)
                                                              : 
                                                             (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter1) 
                                                               & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
                                                                  >> 2U))
                                                               ? 
                                                              ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__reg_406) 
                                                               << 0x10U)
                                                               : 
                                                              (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter1) 
                                                                & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
                                                                   >> 1U))
                                                                ? 
                                                               ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__reg_398) 
                                                                << 0x10U)
                                                                : 
                                                               (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter1) 
                                                                 & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm))
                                                                 ? 
                                                                ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__reg_406) 
                                                                 << 0x10U)
                                                                 : 
                                                                (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter0_reg) 
                                                                  & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
                                                                     >> 4U))
                                                                  ? 
                                                                 ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__reg_398) 
                                                                  << 0x10U)
                                                                  : 0U)))))))));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__next_ctrl 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__dout_vld) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__ready_for_outstanding));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__next_burst 
        = ((IData)((vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__data_p1 
                    >> 0x20U)) & ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state) 
                                  & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__full_n)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447_buf_exp_ce1 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter4) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_CS_fsm));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT____VdfgRegularize_h5c84ba7c_0_4 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter1) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__features_1_conv_2_bias_ce0_local 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_enable_reg_pp0_iter0_reg) 
           & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_CS_fsm) 
              >> 1U));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__grp_fu_362_p2 
        = (0x7fffffffffffULL & VL_MULS_QQQ(47, (0x7fffffffffffULL 
                                                & VL_EXTENDS_QI(47,24, 
                                                                (0xffffffU 
                                                                 & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter1) 
                                                                     & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm) 
                                                                        >> 1U))
                                                                     ? (IData)(
                                                                               (0x7fffffffffffULL 
                                                                                & VL_EXTENDS_QI(47,24, 
                                                                                ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__reg_371) 
                                                                                << 8U))))
                                                                     : 
                                                                    (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter1) 
                                                                      & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm))
                                                                      ? (IData)(
                                                                                (0x7fffffffffffULL 
                                                                                & VL_EXTENDS_QI(47,24, 
                                                                                ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__reg_371) 
                                                                                << 8U))))
                                                                      : 
                                                                     (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter0_reg) 
                                                                       & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm) 
                                                                          >> 4U))
                                                                       ? (IData)(
                                                                                (0x7fffffffffffULL 
                                                                                & VL_EXTENDS_QI(47,24, 
                                                                                ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__reg_371) 
                                                                                << 8U))))
                                                                       : 
                                                                      (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter0_reg) 
                                                                        & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm) 
                                                                           >> 3U))
                                                                        ? (IData)(
                                                                                (0x7fffffffffffULL 
                                                                                & VL_EXTENDS_QI(47,24, 
                                                                                ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__reg_371) 
                                                                                << 8U))))
                                                                        : 0U))))))), 
                                           (0x7fffffffffffULL 
                                            & VL_EXTENDS_QI(47,24, 
                                                            (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter1) 
                                                              & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm) 
                                                                 >> 1U))
                                                              ? 
                                                             ((IData)(vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_load_8_reg_997) 
                                                              << 0x10U)
                                                              : 
                                                             (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter1) 
                                                               & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm))
                                                               ? 
                                                              ((IData)(vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_load_6_reg_987) 
                                                               << 0x10U)
                                                               : 
                                                              (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter0_reg) 
                                                                & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm) 
                                                                   >> 4U))
                                                                ? 
                                                               ((IData)(vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_load_3_reg_972) 
                                                                << 0x10U)
                                                                : 
                                                               (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter0_reg) 
                                                                 & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm) 
                                                                    >> 3U))
                                                                 ? 
                                                                ((IData)(vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_load_1_reg_962) 
                                                                 << 0x10U)
                                                                 : 0U))))))));
    if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter1) 
         & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
            >> 3U))) {
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p0 
            = (0xffffffU & (IData)((0x7fffffffffffULL 
                                    & VL_EXTENDS_QI(47,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_748) 
                                                     << 8U)))));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p0 
            = (0xffffffU & (IData)((0x7fffffffffffULL 
                                    & VL_EXTENDS_QI(47,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__buf_A_load_61_reg_3928) 
                                                     << 8U)))));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p1 
            = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_739) 
               << 0x10U);
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p1 
            = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__features_0_1_weight_load_1_reg_3902) 
               << 0x10U);
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter1) 
                & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                   >> 2U))) {
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p0 
            = (0xffffffU & (IData)((0x7fffffffffffULL 
                                    & VL_EXTENDS_QI(47,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_748) 
                                                     << 8U)))));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p0 
            = (0xffffffU & (IData)((0x7fffffffffffULL 
                                    & VL_EXTENDS_QI(47,24, 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_753) 
                                                     << 8U)))));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p1 
            = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_730) 
               << 0x10U);
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p1 
            = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_744) 
               << 0x10U);
    } else {
        if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter1) 
             & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))) {
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p0 
                = (0xffffffU & (IData)((0x7fffffffffffULL 
                                        & VL_EXTENDS_QI(47,24, 
                                                        ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_753) 
                                                         << 8U)))));
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p1 
                = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_730) 
                   << 0x10U);
        } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                    & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                       >> 0xdU))) {
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p0 
                = (0xffffffU & (IData)((0x7fffffffffffULL 
                                        & VL_EXTENDS_QI(47,24, 
                                                        ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_753) 
                                                         << 8U)))));
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p1 
                = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_744) 
                   << 0x10U);
        } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                    & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                       >> 0xcU))) {
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p0 
                = (0xffffffU & (IData)((0x7fffffffffffULL 
                                        & VL_EXTENDS_QI(47,24, 
                                                        ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_753) 
                                                         << 8U)))));
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p1 
                = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_734) 
                   << 0x10U);
        } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                    & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                       >> 0xbU))) {
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p0 
                = (0xffffffU & (IData)((0x7fffffffffffULL 
                                        & VL_EXTENDS_QI(47,24, 
                                                        ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_753) 
                                                         << 8U)))));
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p1 
                = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_739) 
                   << 0x10U);
        } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                    & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                       >> 0xaU))) {
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p0 
                = (0xffffffU & (IData)((0x7fffffffffffULL 
                                        & VL_EXTENDS_QI(47,24, 
                                                        ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_753) 
                                                         << 8U)))));
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p1 
                = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_744) 
                   << 0x10U);
        } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                    & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                       >> 9U))) {
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p0 
                = (0xffffffU & (IData)((0x7fffffffffffULL 
                                        & VL_EXTENDS_QI(47,24, 
                                                        ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_753) 
                                                         << 8U)))));
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p1 
                = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_744) 
                   << 0x10U);
        } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                    & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                       >> 8U))) {
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p0 
                = (0xffffffU & (IData)((0x7fffffffffffULL 
                                        & VL_EXTENDS_QI(47,24, 
                                                        ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_753) 
                                                         << 8U)))));
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p1 
                = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_734) 
                   << 0x10U);
        } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                    & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                       >> 7U))) {
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p0 
                = (0xffffffU & (IData)((0x7fffffffffffULL 
                                        & VL_EXTENDS_QI(47,24, 
                                                        ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_753) 
                                                         << 8U)))));
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p1 
                = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_739) 
                   << 0x10U);
        } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                    & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                       >> 6U))) {
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p0 
                = (0xffffffU & (IData)((0x7fffffffffffULL 
                                        & VL_EXTENDS_QI(47,24, 
                                                        ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_753) 
                                                         << 8U)))));
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p1 
                = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_744) 
                   << 0x10U);
        } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                    & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                       >> 5U))) {
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p0 
                = (0xffffffU & (IData)((0x7fffffffffffULL 
                                        & VL_EXTENDS_QI(47,24, 
                                                        ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_753) 
                                                         << 8U)))));
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p1 
                = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_734) 
                   << 0x10U);
        } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                    & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                       >> 4U))) {
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p0 
                = (0xffffffU & (IData)((0x7fffffffffffULL 
                                        & VL_EXTENDS_QI(47,24, 
                                                        ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_753) 
                                                         << 8U)))));
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p1 
                = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_739) 
                   << 0x10U);
        } else {
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p0 
                = (0xffffffU & 0U);
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p1 = 0U;
        }
        if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter1) 
             & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                >> 1U))) {
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p0 
                = (0xffffffU & (IData)((0x7fffffffffffULL 
                                        & VL_EXTENDS_QI(47,24, 
                                                        ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_748) 
                                                         << 8U)))));
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p1 
                = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_739) 
                   << 0x10U);
        } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter1) 
                    & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))) {
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p0 
                = (0xffffffU & (IData)((0x7fffffffffffULL 
                                        & VL_EXTENDS_QI(47,24, 
                                                        ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_748) 
                                                         << 8U)))));
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p1 
                = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_734) 
                   << 0x10U);
        } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                    & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                       >> 0xdU))) {
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p0 
                = (0xffffffU & (IData)((0x7fffffffffffULL 
                                        & VL_EXTENDS_QI(47,24, 
                                                        ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_748) 
                                                         << 8U)))));
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p1 
                = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_739) 
                   << 0x10U);
        } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                    & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                       >> 0xcU))) {
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p0 
                = (0xffffffU & (IData)((0x7fffffffffffULL 
                                        & VL_EXTENDS_QI(47,24, 
                                                        ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_748) 
                                                         << 8U)))));
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p1 
                = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_730) 
                   << 0x10U);
        } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                    & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                       >> 0xbU))) {
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p0 
                = (0xffffffU & (IData)((0x7fffffffffffULL 
                                        & VL_EXTENDS_QI(47,24, 
                                                        ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_748) 
                                                         << 8U)))));
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p1 
                = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_744) 
                   << 0x10U);
        } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                    & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                       >> 0xaU))) {
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p0 
                = (0xffffffU & (IData)((0x7fffffffffffULL 
                                        & VL_EXTENDS_QI(47,24, 
                                                        ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_748) 
                                                         << 8U)))));
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p1 
                = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_734) 
                   << 0x10U);
        } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                    & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                       >> 9U))) {
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p0 
                = (0xffffffU & (IData)((0x7fffffffffffULL 
                                        & VL_EXTENDS_QI(47,24, 
                                                        ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_748) 
                                                         << 8U)))));
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p1 
                = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_739) 
                   << 0x10U);
        } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                    & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                       >> 8U))) {
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p0 
                = (0xffffffU & (IData)((0x7fffffffffffULL 
                                        & VL_EXTENDS_QI(47,24, 
                                                        ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_748) 
                                                         << 8U)))));
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p1 
                = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_744) 
                   << 0x10U);
        } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                    & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                       >> 7U))) {
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p0 
                = (0xffffffU & (IData)((0x7fffffffffffULL 
                                        & VL_EXTENDS_QI(47,24, 
                                                        ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_748) 
                                                         << 8U)))));
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p1 
                = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_734) 
                   << 0x10U);
        } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                    & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                       >> 6U))) {
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p0 
                = (0xffffffU & (IData)((0x7fffffffffffULL 
                                        & VL_EXTENDS_QI(47,24, 
                                                        ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_748) 
                                                         << 8U)))));
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p1 
                = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_739) 
                   << 0x10U);
        } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                    & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                       >> 5U))) {
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p0 
                = (0xffffffU & (IData)((0x7fffffffffffULL 
                                        & VL_EXTENDS_QI(47,24, 
                                                        ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_748) 
                                                         << 8U)))));
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p1 
                = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_744) 
                   << 0x10U);
        } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                    & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                       >> 4U))) {
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p0 
                = (0xffffffU & (IData)((0x7fffffffffffULL 
                                        & VL_EXTENDS_QI(47,24, 
                                                        ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_748) 
                                                         << 8U)))));
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p1 
                = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_734) 
                   << 0x10U);
        } else {
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p0 
                = (0xffffffU & 0U);
            tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p1 = 0U;
        }
    }
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__grp_fu_358_p2 
        = (0x7fffffffffffULL & VL_MULS_QQQ(47, (0x7fffffffffffULL 
                                                & VL_EXTENDS_QI(47,24, 
                                                                (0xffffffU 
                                                                 & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter1) 
                                                                     & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm) 
                                                                        >> 1U))
                                                                     ? (IData)(
                                                                               (0x7fffffffffffULL 
                                                                                & VL_EXTENDS_QI(47,24, 
                                                                                ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__reg_366) 
                                                                                << 8U))))
                                                                     : 
                                                                    (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter1) 
                                                                      & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm))
                                                                      ? (IData)(
                                                                                (0x7fffffffffffULL 
                                                                                & VL_EXTENDS_QI(47,24, 
                                                                                ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__reg_366) 
                                                                                << 8U))))
                                                                      : 
                                                                     (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter0_reg) 
                                                                       & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm) 
                                                                          >> 4U))
                                                                       ? (IData)(
                                                                                (0x7fffffffffffULL 
                                                                                & VL_EXTENDS_QI(47,24, 
                                                                                ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__reg_366) 
                                                                                << 8U))))
                                                                       : 
                                                                      (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter0_reg) 
                                                                        & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm) 
                                                                           >> 3U))
                                                                        ? (IData)(
                                                                                (0x7fffffffffffULL 
                                                                                & VL_EXTENDS_QI(47,24, 
                                                                                ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__reg_366) 
                                                                                << 8U))))
                                                                        : 
                                                                       (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter0_reg) 
                                                                         & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm) 
                                                                            >> 2U))
                                                                         ? (IData)(
                                                                                (0x7fffffffffffULL 
                                                                                & VL_EXTENDS_QI(47,24, 
                                                                                ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__reg_366) 
                                                                                << 8U))))
                                                                         : 0U)))))))), 
                                           (0x7fffffffffffULL 
                                            & VL_EXTENDS_QI(47,24, 
                                                            (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter1) 
                                                              & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm) 
                                                                 >> 1U))
                                                              ? 
                                                             ((IData)(vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_load_7_reg_992) 
                                                              << 0x10U)
                                                              : 
                                                             (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter1) 
                                                               & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm))
                                                               ? 
                                                              ((IData)(vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_load_5_reg_982) 
                                                               << 0x10U)
                                                               : 
                                                              (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter0_reg) 
                                                                & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm) 
                                                                   >> 4U))
                                                                ? 
                                                               ((IData)(vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_load_2_reg_967) 
                                                                << 0x10U)
                                                                : 
                                                               (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter0_reg) 
                                                                 & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm) 
                                                                    >> 3U))
                                                                 ? 
                                                                ((IData)(vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_load_reg_957) 
                                                                 << 0x10U)
                                                                 : 
                                                                (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter0_reg) 
                                                                  & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm) 
                                                                     >> 2U))
                                                                  ? 
                                                                 ((IData)(vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_load_4_reg_977) 
                                                                  << 0x10U)
                                                                  : 0U)))))))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398_buf_B_ce1 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter1) 
           & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
              >> 6U));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410_buf_B_ce1 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_enable_reg_pp0_iter2) 
           & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_CS_fsm) 
              >> 1U));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422_buf_B_ce1 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter0_reg) 
           & (IData)((0U != (0x1eU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm)))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471_buf_B_ce1 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter1) 
           & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
              >> 5U));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459_buf_A_ce1 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter2) 
           & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
              >> 1U));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388_buf_A_ce1 
        = ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_block_pp0_stage0_subdone_grp0_done_reg)) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_enable_reg_pp0_iter10));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_loop_init 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388_ap_start_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT____VdfgRegularize_h0e68c41c_0_5 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter1) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422_buf_A_ce1 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter2) 
           & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm) 
              >> 1U));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__resp_ready 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__dout_vld) 
           & (((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__user_resp__DOT__full_n) 
               & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__wrsp_type)) 
              | (~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__last_resp))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_condition_exit_pp0_iter3_stage0 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter3) 
           & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_CS_fsm) 
              & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__icmp_ln55_reg_1002_pp0_iter2_reg)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT____VdfgRegularize_h5c84ba7c_0_5 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter0_reg) 
           & (IData)((0U != (0x1cU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm)))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter0 
        = ((1U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm))
            ? (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459_ap_start_reg)
            : (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter0_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_condition_exit_pp0_iter1_stage1 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter1) 
           & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
               >> 1U) & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__icmp_ln74_reg_1703_pp0_iter1_reg)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_enable_reg_pp0_iter0 
        = ((1U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_CS_fsm))
            ? (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410_ap_start_reg)
            : (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_enable_reg_pp0_iter0_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_condition_exit_pp0_iter1_stage1 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_enable_reg_pp0_iter1) 
           & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_CS_fsm) 
               >> 1U) & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__icmp_ln55_reg_1217_pp0_iter1_reg)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_condition_exit_pp0_iter1_stage1 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter1) 
           & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm) 
               >> 1U) & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__icmp_ln76_reg_1330_pp0_iter1_reg)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__empty_61_fu_616_p1 
        = (0x7fU & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__select_ln74_1_reg_1707) 
                     << 3U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__select_ln74_1_reg_1707)));
    __Vfunc_tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__4__din 
        = (vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__offset_pack_reg 
           >> 0x1fU);
    tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__Vstatic__dout = 0U;
    tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__Vstatic__i = 0U;
    while ((tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__Vstatic__i 
            < (IData)(__Vfunc_tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__4__din))) {
        tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__Vstatic__dout 
            = ((IData)(tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__Vstatic__dout) 
               | (3U & ((IData)(1U) << (1U & tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__Vstatic__i))));
        tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__Vstatic__i 
            = ((IData)(1U) + tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__Vstatic__i);
    }
    __Vfunc_tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__4__Vfuncout 
        = tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__Vstatic__dout;
    tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__head_pad_sel 
        = __Vfunc_tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__4__Vfuncout;
    __Vfunc_tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__5__din 
        = (1U & (vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__offset_pack_reg 
                 >> 0x1eU));
    tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__Vstatic__dout = 0U;
    tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__Vstatic__i = 0U;
    while ((tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__Vstatic__i 
            < (IData)(__Vfunc_tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__5__din))) {
        tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__Vstatic__dout 
            = ((IData)(tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__Vstatic__dout) 
               | (3U & ((IData)(1U) << (1U & tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__Vstatic__i))));
        tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__Vstatic__i 
            = ((IData)(1U) + tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__Vstatic__i);
    }
    __Vfunc_tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__5__Vfuncout 
        = tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__Vstatic__dout;
    tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__tail_pad_sel 
        = __Vfunc_tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__bus_wide_gen__DOT__decoder__5__Vfuncout;
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__features_2_conv_0_1_bias_ce0_local 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter1) 
           & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_CS_fsm) 
              >> 1U));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__add_ln83_1_fu_896_p5 
        = ((0x1f80U & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__select_ln75_reg_1729) 
                        << 0xaU) | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__select_ln75_reg_1729) 
                                    << 7U))) | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__select_ln74_1_reg_1707));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__last_sect_tmp 
        = ((0U == vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__sect_total) 
           | (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__last_sect));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__last_sect_tmp 
        = ((0U == vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__sect_total) 
           | (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__last_sect));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT____VdfgRegularize_h0e68c41c_0_6 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
           & (IData)((0U != (0x3ffcU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm)))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter0 
        = ((1U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_CS_fsm))
            ? (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447_ap_start_reg)
            : (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter0_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_loop_init 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471_ap_start_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__and_ln55_fu_467_p2 
        = ((0x30U != (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__indvar_flatten19_fu_150)) 
           & (4U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__oc_fu_142)));
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT____VdfgRegularize_h3c5d5d61_0_6 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter1) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_CS_fsm));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__and_ln55_fu_383_p2 
        = ((0x240U != (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__indvar_flatten39_fu_146)) 
           & (0x30U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__oc_fu_138)));
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT____VdfgRegularize_h42b641d4_0_4 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_enable_reg_pp0_iter0_reg) 
           & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_CS_fsm) 
              >> 2U));
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT____VdfgRegularize_h42b641d4_0_3 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_enable_reg_pp0_iter0_reg) 
           & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_CS_fsm) 
              >> 3U));
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT____VdfgRegularize_h42b641d4_0_2 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_enable_reg_pp0_iter1) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_CS_fsm));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__empty_120_fu_618_p2 
        = (0x7ffU & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__select_ln56_reg_1229) 
                      << 3U) + (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__select_ln55_1_reg_1221) 
                                 << 7U) - ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__select_ln55_1_reg_1221) 
                                           << 5U))));
    tb__DOT__dut__DOT____VdfgExtracted_h5811251e__0 
        = (IData)((0U != (0xc0000U & vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__add_ln83_s_fu_808_p3 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__tmp_7_reg_1792) 
            << 6U) | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__select_ln74_1_reg_1707));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_172_fu_2140_p2 
        = (0x7ffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_166_reg_3578) 
                     + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_156_reg_3600)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_164_fu_1186_p2 
        = (0xfffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_163_reg_3521) 
                     + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_153_reg_3454)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_16 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
           & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
              >> 0x11U));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__ost_ctrl_valid 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__could_multi_bursts__DOT__sect_handling) 
           & ((~ ((~ (IData)(vlSelf->tb__DOT__pix_arready)) 
                  & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__burst_valid))) 
              & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__full_n)));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__ost_ctrl_valid 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__could_multi_bursts__DOT__sect_handling) 
           & ((~ ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__burst_valid) 
                  & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__req_fifo__DOT__dout_vld))) 
              & (~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__dout_vld))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_done_int 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_loop_exit_ready_pp0_iter3_reg) 
            & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_CS_fsm)) 
           | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_done_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_done_int 
        = ((((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
             >> 1U) & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_loop_exit_ready_pp0_iter1_reg)) 
           | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_done_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_done_int 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_loop_exit_ready_pp0_iter1_reg) 
            & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_CS_fsm) 
               >> 1U)) | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_done_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_loop_init 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422_ap_start_reg));
    tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__offset_write 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__rs_req__DOT__s_ready_t) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__tmp_valid));
    tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__last_beat 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__last_beat_set) 
            | (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__single_beat)) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__offset_valid));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_loop_init 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459_ap_start_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter0 
        = ((1U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm))
            ? (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422_ap_start_reg)
            : (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter0_reg));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT____VdfgRegularize_hb3c3245c_5_0 
        = ((0U != (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__last_cnt)) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__flying_req));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_loop_init 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521_ap_start_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_done_int 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_loop_exit_ready_pp0_iter1_reg) 
            & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm) 
               >> 1U)) | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_done_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483_ap_ready 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_enable_reg_pp0_iter0_reg) 
           & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__icmp_ln113_reg_376) 
              & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_CS_fsm) 
                 >> 1U)));
    tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__offset_write 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__rs_req__DOT__s_ready_t) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__tmp_valid));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__and_ln55_fu_1131_p2 
        = ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__icmp_ln56_reg_3936)) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__icmp_ln57_reg_3944));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398_ap_ready 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
           & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__icmp_ln30_reg_3361) 
              & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                 >> 6U)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471_ap_ready 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
           & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__icmp_ln55_reg_3927) 
              & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                 >> 5U)));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__ready_for_data 
        = (1U & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__WVALID_Dummy)) 
                 | (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__data_fifo__DOT__full_n)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_loop_init 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398_ap_start_reg));
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_3 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
           & (IData)((0U != (0xa000U & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm))));
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_15 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
           & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
              >> 0xbU));
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_14 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
           & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
              >> 9U));
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_13 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
           & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
              >> 7U));
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_12 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
           & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
              >> 5U));
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_11 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
           & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
              >> 3U));
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_10 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
           & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
              >> 0x10U));
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_9 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
           & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
              >> 0xeU));
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_8 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
           & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
              >> 0xcU));
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_7 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
           & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
              >> 0xaU));
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_6 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
           & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
              >> 8U));
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_5 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
           & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
              >> 6U));
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_2 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
           & (IData)((0U != (0x14U & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm))));
    tb__DOT__dut__DOT____VdfgExtracted_h4fbf0135__0 
        = (IData)((0U != (3U & vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__empty_115_fu_531_p2 
        = (0x3ffU & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__select_ln56_reg_1020) 
                      << 2U) + (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__select_ln55_2_reg_1006) 
                                 << 6U) - ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__select_ln55_2_reg_1006) 
                                           << 4U))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_fu_1348_p2 
        = (0x7ffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_79_reg_3962) 
                     + (0x7e0U & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__select_ln55_1_reg_3949) 
                                   << 8U) | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__select_ln55_1_reg_3949) 
                                             << 5U)))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_block_pp0_stage0_subdone_grp1 
        = ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__fifo_rreq__DOT__full_n)) 
           & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_block_pp0_stage0_subdone_grp1_done_reg)) 
              & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_enable_reg_pp0_iter1)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_170_fu_1962_p2 
        = (0x7ffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_163_reg_3521) 
                     + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_156_reg_3600)));
    if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter1) 
         & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__features_0_1_weight_address0_local 
            = (0x1fU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_150_reg_3877));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__buf_A_address1_local 
            = (0xfffU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__add_ln40_42_reg_3762));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                   >> 0xdU))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__features_0_1_weight_address0_local 
            = (0x1fU & ((IData)(0x19U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_124_reg_3415)));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__buf_A_address1_local 
            = (0xfffU & (1U | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__tmp_36_reg_3812) 
                               << 1U)));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                   >> 0xcU))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__features_0_1_weight_address0_local 
            = (0x1fU & ((IData)(0x17U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_124_reg_3415)));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__buf_A_address1_local 
            = (0xfffU & (0x7ffU & ((IData)(2U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_173_reg_3799))));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                   >> 0xbU))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__features_0_1_weight_address0_local 
            = (0x1fU & ((IData)(0x14U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_124_reg_3415)));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__buf_A_address1_local 
            = (0xfffU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_173_reg_3799));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                   >> 0xaU))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__features_0_1_weight_address0_local 
            = (0x1fU & ((IData)(0x13U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_124_reg_3415)));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__buf_A_address1_local 
            = (0xfffU & (0x7ffU & ((IData)(1U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_172_reg_3751))));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                   >> 9U))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__features_0_1_weight_address0_local 
            = (0x1fU & ((IData)(0xeU) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_124_reg_3415)));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__buf_A_address1_local 
            = (0xfffU & (0x7ffU & ((IData)(2U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_170_reg_3710))));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                   >> 8U))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__features_0_1_weight_address0_local 
            = (0x1fU & ((IData)(0xdU) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_124_reg_3415)));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__buf_A_address1_local 
            = (0xfffU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_170_fu_1962_p2));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                   >> 7U))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__features_0_1_weight_address0_local 
            = (0x1fU & ((IData)(0xbU) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_124_reg_3415)));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__buf_A_address1_local 
            = (0xfffU & VL_EXTENDS_II(12,12, (0xfffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_169_reg_3622)))));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                   >> 6U))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__features_0_1_weight_address0_local 
            = (0x1fU & ((IData)(0xaU) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_124_reg_3415)));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__buf_A_address1_local 
            = (0xfffU & VL_EXTENDS_II(12,12, (0xfffU 
                                              & ((IData)(2U) 
                                                 + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_167_reg_3583)))));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                   >> 5U))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__features_0_1_weight_address0_local 
            = (0x1fU & ((IData)(8U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_124_reg_3415)));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__buf_A_address1_local 
            = (0xfffU & VL_EXTENDS_II(12,12, (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_167_reg_3583)));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                   >> 4U))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__features_0_1_weight_address0_local 
            = (0x1fU & ((IData)(5U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_124_reg_3415)));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__buf_A_address1_local 
            = (0xfffU & VL_EXTENDS_II(12,12, (1U | 
                                              ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__tmp_16_reg_3553) 
                                               << 1U))));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                   >> 3U))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__features_0_1_weight_address0_local 
            = (0x1fU & ((IData)(4U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_124_reg_3415)));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__buf_A_address1_local 
            = (0xfffU & VL_EXTENDS_II(12,12, (0xfffU 
                                              & ((IData)(2U) 
                                                 + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_160_reg_3482)))));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                   >> 2U))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__features_0_1_weight_address0_local 
            = (0x1fU & ((IData)(2U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_124_reg_3415)));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__buf_A_address1_local 
            = (0xfffU & VL_EXTENDS_II(12,12, (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_160_reg_3482)));
    } else {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__features_0_1_weight_address0_local 
            = (0x1fU & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                         & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                            >> 1U)) ? (0xffU & VL_MULS_III(8, (IData)(0x1bU), 
                                                           (0xffU 
                                                            & VL_EXTENDS_II(8,4, (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_122_reg_3392)))))
                         : 0U));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__buf_A_address1_local 
            = (0xfffU & 0U);
    }
    tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__first_beat 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__first_beat_set) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__offset_valid));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_loop_init 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483_ap_start_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_enable_reg_pp0_iter0 
        = ((1U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_CS_fsm))
            ? (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483_ap_start_reg)
            : (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_enable_reg_pp0_iter0_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_block_pp0_stage0_subdone_grp2 
        = ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__full_n)) 
           & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_block_pp0_stage0_subdone_grp2_done_reg)) 
              & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_enable_reg_pp0_iter2)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_block_pp0_stage0_subdone_grp1 
        = (((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__fifo_wreq__DOT__full_n)) 
            & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_block_pp0_stage0_subdone_grp1_done_reg)) 
               & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_enable_reg_pp0_iter1))) 
           | ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__user_resp__DOT__dout_vld)) 
              & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_block_pp0_stage0_subdone_grp1_done_reg)) 
                 & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_enable_reg_pp0_iter7))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_block_pp0_stage0_subdone_grp2 
        = ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__data_valid)) 
           & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_block_pp0_stage0_subdone_grp2_done_reg)) 
              & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_enable_reg_pp0_iter9)));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__ready_for_split 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rreq_offset__DOT__dout_vld) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rs_tmp_rdata__DOT__state));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__genblk1__DOT__wnext 
        = (0x3ffU & ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__push)
                      ? ((0x3feU == (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__genblk1__DOT__waddr))
                          ? 0U : ((IData)(1U) + (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__genblk1__DOT__waddr)))
                      : (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__genblk1__DOT__waddr)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_153_fu_1021_p2 
        = (0xfffU & ((0xfc0U & (((IData)(0x3fU) + ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__select_ln31_fu_929_p3) 
                                                   << 1U)) 
                                << 6U)) + VL_EXTENDS_II(12,9, 
                                                        (0x1f8U 
                                                         & (((IData)(0x3fU) 
                                                             + 
                                                             ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__select_ln31_fu_929_p3) 
                                                              << 1U)) 
                                                            << 3U)))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_sig_allocacmp_indvar_flatten52_load 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_loop_init) 
            & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_CS_fsm))
            ? 0U : (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__indvar_flatten52_fu_154));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__genblk1__DOT__rnext 
        = (0x3ffU & ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__pop)
                      ? ((0x3feU == (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__genblk1__DOT__raddr))
                          ? 0U : ((IData)(1U) + (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__genblk1__DOT__raddr)))
                      : (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__genblk1__DOT__raddr)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_sig_allocacmp_indvar_flatten32_load 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_loop_init) 
            & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_CS_fsm))
            ? 0U : (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__indvar_flatten32_fu_158));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pop 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__empty_n) 
           & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__dout_vld)) 
              | (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__next_ctrl)));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_burst__DOT__pop 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_burst__DOT__empty_n) 
           & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_burst__DOT__dout_vld)) 
              | (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__next_burst)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p2 
        = (0x7fffffffffffULL & VL_MULS_QQQ(47, (0x7fffffffffffULL 
                                                & VL_EXTENDS_QI(47,24, tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p0)), 
                                           (0x7fffffffffffULL 
                                            & VL_EXTENDS_QI(47,24, tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p1))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p2 
        = (0x7fffffffffffULL & VL_MULS_QQQ(47, (0x7fffffffffffULL 
                                                & VL_EXTENDS_QI(47,24, tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p0)), 
                                           (0x7fffffffffffULL 
                                            & VL_EXTENDS_QI(47,24, tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p1))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_sig_allocacmp_i_2 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_loop_init) 
            & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_CS_fsm))
            ? 0U : (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__i_fu_66));
    __Vtableidx10 = (((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__resp_ready) 
                      << 4U) | (((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__rs_resp__DOT__s_ready_t) 
                                 << 3U) | (((IData)(vlSelf->tb__DOT__out_bvalid) 
                                            << 2U) 
                                           | (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__rs_resp__DOT__state))));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__rs_resp__DOT__next 
        = Vtestbench__ConstPool__TABLE_hd59e8662_0[__Vtableidx10];
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__features_2_conv_1_1_weight_ce1_local 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter0_reg) 
            & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
               >> 1U)) | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT____VdfgRegularize_h5c84ba7c_0_5));
    if ((0x2000U & vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)) {
        vlSelf->tb__DOT__dut__DOT__buf_exp_ce1 = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT____VdfgRegularize_h5c84ba7c_0_5) 
                                                  | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT____VdfgRegularize_h5c84ba7c_0_4));
        vlSelf->tb__DOT__dut__DOT__buf_exp_address1 
            = (0x1fffU & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter1) 
                           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm))
                           ? (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__add_ln83_32_reg_1896)
                           : (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter0_reg) 
                               & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
                                  >> 4U)) ? ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__add_ln83_1_reg_1865) 
                                             + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__zext_ln83_24_reg_1828))
                               : (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter0_reg) 
                                   & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
                                      >> 3U)) ? ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__add_ln83_s_reg_1818) 
                                                 + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__sub_ln83_2_reg_1839))
                                   : (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter0_reg) 
                                       & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
                                          >> 2U)) ? 
                                      ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__add_ln83_s_fu_808_p3) 
                                       + VL_EXTENDS_II(13,12, (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__sub_ln83_reg_1787)))
                                       : 0U)))));
    } else {
        vlSelf->tb__DOT__dut__DOT__buf_exp_ce1 = ((1U 
                                                   & (vlSelf->tb__DOT__dut__DOT__ap_CS_fsm 
                                                      >> 0xbU)) 
                                                  && (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447_buf_exp_ce1));
        vlSelf->tb__DOT__dut__DOT__buf_exp_address1 
            = (0x1fffU & ((0x800U & vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)
                           ? (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__add_ln62_reg_1080_pp0_iter3_reg)
                           : 0U));
    }
    __Vtableidx3 = ((0x100U & (((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter2)) 
                                & (~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter1))) 
                               << 8U)) | (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459_ap_start_reg) 
                                           << 7U) | 
                                          ((0x40U & 
                                            ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter0)) 
                                             << 6U)) 
                                           | (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_condition_exit_pp0_iter1_stage1) 
                                               << 5U) 
                                              | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm)))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_NS_fsm 
        = Vtestbench__ConstPool__TABLE_hc760732e_0[__Vtableidx3];
    __Vtableidx1 = ((0x80U & (((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_enable_reg_pp0_iter2)) 
                               & (~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_enable_reg_pp0_iter1))) 
                              << 7U)) | (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410_ap_start_reg) 
                                          << 6U) | 
                                         (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_condition_exit_pp0_iter1_stage1) 
                                           << 5U) | 
                                          ((0x10U & 
                                            ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_enable_reg_pp0_iter0)) 
                                             << 4U)) 
                                           | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_CS_fsm)))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_NS_fsm 
        = Vtestbench__ConstPool__TABLE_h94891c55_0[__Vtableidx1];
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__features_2_conv_1_1_weight_address1_local 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter0_reg)
            ? (0x7fU & ((0x10U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm))
                         ? ((IData)(6U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__empty_61_reg_1752))
                         : ((8U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm))
                             ? ((IData)(4U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__empty_61_reg_1752))
                             : ((4U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm))
                                 ? ((IData)(2U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__empty_61_reg_1752))
                                 : ((2U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm))
                                     ? (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__empty_61_fu_616_p1)
                                     : 0U))))) : 0U);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__features_2_conv_1_1_weight_address0_local 
        = (0x7fU & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter1) 
                     & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm))
                     ? ((IData)(8U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__empty_61_reg_1752))
                     : (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter0_reg) 
                         & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
                            >> 4U)) ? ((IData)(7U) 
                                       + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__empty_61_reg_1752))
                         : (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter0_reg) 
                             & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
                                >> 3U)) ? ((IData)(5U) 
                                           + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__empty_61_reg_1752))
                             : (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter0_reg) 
                                 & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
                                    >> 2U)) ? ((IData)(3U) 
                                               + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__empty_61_reg_1752))
                                 : (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter0_reg) 
                                     & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
                                        >> 1U)) ? ((IData)(1U) 
                                                   + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__empty_61_fu_616_p1))
                                     : 0U))))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__features_0_1_weight_ce1_local 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
            & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
               >> 1U)) | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT____VdfgRegularize_h0e68c41c_0_6));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_idle_pp0_0to2 
        = (1U & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter2)) 
                 & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter1)) 
                    & (~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter0)))));
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_17 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_loop_init) 
           & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm);
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__empty_fu_487_p2 
        = ((0x30U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__indvar_flatten19_fu_150)) 
           | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__and_ln55_fu_467_p2));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__features_2_conv_0_1_weight_ce1_local 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter0_reg) 
            & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_CS_fsm) 
               >> 1U)) | (IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT____VdfgRegularize_h3c5d5d61_0_6));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447_buf_B_ce0 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__features_2_conv_0_1_bias_ce0_local) 
           | (IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT____VdfgRegularize_h3c5d5d61_0_6));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__empty_fu_403_p2 
        = ((0x240U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__indvar_flatten39_fu_146)) 
           | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__and_ln55_fu_383_p2));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__features_1_conv_2_weight_ce1_local 
        = ((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT____VdfgRegularize_h42b641d4_0_4) 
           | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__features_1_conv_2_bias_ce0_local) 
              | ((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT____VdfgRegularize_h42b641d4_0_3) 
                 | (IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT____VdfgRegularize_h42b641d4_0_2))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410_buf_A_ce0 
        = ((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT____VdfgRegularize_h42b641d4_0_4) 
           | ((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT____VdfgRegularize_h42b641d4_0_3) 
              | (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_enable_reg_pp0_iter1) 
                  & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_CS_fsm) 
                     >> 1U)) | (IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT____VdfgRegularize_h42b641d4_0_2))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__buf_exp_address0_local 
        = (0x1fffU & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter1) 
                       & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
                          >> 1U)) ? (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__add_ln83_36_reg_1906)
                       : (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter1) 
                           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm))
                           ? (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__add_ln83_34_reg_1901)
                           : (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter0_reg) 
                               & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
                                  >> 4U)) ? ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__add_ln83_1_reg_1865) 
                                             + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__zext_ln83_28_reg_1854))
                               : (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter0_reg) 
                                   & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
                                      >> 3U)) ? ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__add_ln83_1_fu_896_p5) 
                                                 + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__sext_ln83_25_reg_1812))
                                   : (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter0_reg) 
                                       & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
                                          >> 2U)) ? 
                                      ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__add_ln83_s_fu_808_p3) 
                                       + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__sub_ln83_1_reg_1797))
                                       : 0U))))));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__push 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__full_n) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__ost_ctrl_valid));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_burst__DOT__push 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_burst__DOT__full_n) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__ost_ctrl_valid));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__next_sect 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__req_handling) 
           & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__could_multi_bursts__DOT__sect_handling)) 
              | ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__could_multi_bursts__DOT__last_loop) 
                 & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__ost_ctrl_valid))));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__fifo_burst__DOT__push 
        = ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__fifo_burst__DOT__dout_vld)) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__ost_ctrl_valid));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__push 
        = ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__dout_vld)) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__ost_ctrl_valid));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__next_sect 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__req_handling) 
           & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__could_multi_bursts__DOT__sect_handling)) 
              | ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__could_multi_bursts__DOT__last_loop) 
                 & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__ost_ctrl_valid))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_sig_allocacmp_ow_1 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_loop_init) 
            & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm))
            ? 0U : (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ow_fu_154));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rreq_offset__DOT__push 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rreq_offset__DOT__full_n) 
           & (IData)(tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__offset_write));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__rreq_ready 
        = (1U & ((~ (IData)(tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__offset_write)) 
                 | (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rreq_offset__DOT__full_n)));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__add_tail 
        = (((2U & ((IData)(tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__tail_pad_sel) 
                   << 1U)) | (1U & ((IData)(tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__tail_pad_sel) 
                                    >> 1U))) & (- (IData)((IData)(tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__last_beat))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT____VdfgRegularize_h5c84ba7c_0_7 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_loop_init) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm));
    __Vtableidx2 = ((0x100U & (((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter2)) 
                                & (~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter1))) 
                               << 8U)) | (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422_ap_start_reg) 
                                           << 7U) | 
                                          (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_condition_exit_pp0_iter1_stage1) 
                                            << 6U) 
                                           | ((0x20U 
                                               & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter0)) 
                                                  << 5U)) 
                                              | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm)))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_NS_fsm 
        = Vtestbench__ConstPool__TABLE_hc760732e_0[__Vtableidx2];
    vlSelf->tb__DOT__out_wvalid = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__data_fifo__DOT__dout_vld) 
                                   & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT____VdfgRegularize_hb3c3245c_5_0));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__read_fifo 
        = ((IData)(vlSelf->tb__DOT__out_wready) & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT____VdfgRegularize_hb3c3245c_5_0));
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT____VdfgRegularize_h2ff13d75_0_7 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_loop_init) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_CS_fsm));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422_ap_done 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_done_int) 
           | ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422_ap_start_reg)) 
              & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_done_int 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483_ap_ready) 
            & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_CS_fsm) 
               >> 1U)) | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_done_reg));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__wreq_offset__DOT__push 
        = ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__wreq_offset__DOT__dout_vld)) 
           & (IData)(tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__offset_write));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__wreq_ready 
        = (1U & ((~ (IData)(tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__offset_write)) 
                 | (~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__wreq_offset__DOT__dout_vld))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__select_ln56_fu_1161_p3 
        = (7U & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__icmp_ln56_reg_3936)
                   ? 0U : (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__w_idx_fu_272)) 
                 + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__and_ln55_fu_1131_p2)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_fu_1149_p2 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__icmp_ln56_reg_3936) 
           | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__and_ln55_fu_1131_p2));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_NS_fsm 
        = (((((((((1U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm)) 
                  | (2U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))) 
                 | (4U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))) 
                | (8U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))) 
               | (0x10U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))) 
              | (0x20U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))) 
             | (0x40U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))) 
            | (0x80U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm)))
            ? ((1U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))
                ? ((1U & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398_ap_start_reg)) 
                          & (~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter1))))
                    ? 1U : 2U) : ((2U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))
                                   ? 4U : ((4U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))
                                            ? 8U : 
                                           ((8U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))
                                             ? 0x10U
                                             : ((0x10U 
                                                 == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))
                                                 ? 0x20U
                                                 : 
                                                ((0x20U 
                                                  == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))
                                                  ? 0x40U
                                                  : 
                                                 ((0x40U 
                                                   == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))
                                                   ? 
                                                  ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398_ap_ready)
                                                    ? 1U
                                                    : 0x80U)
                                                   : 0x100U)))))))
            : ((0x100U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))
                ? 0x200U : ((0x200U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))
                             ? 0x400U : ((0x400U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))
                                          ? 0x800U : 
                                         ((0x800U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))
                                           ? 0x1000U
                                           : ((0x1000U 
                                               == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))
                                               ? 0x2000U
                                               : ((0x2000U 
                                                   == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))
                                                   ? 1U
                                                   : 0U)))))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_done_int 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398_ap_ready) 
            & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
               >> 6U)) | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_done_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_NS_fsm 
        = (((((((((1U == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm) 
                  | (2U == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)) 
                 | (4U == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)) 
                | (8U == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)) 
               | (0x10U == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)) 
              | (0x20U == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)) 
             | (0x40U == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)) 
            | (0x80U == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm))
            ? ((1U == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                ? ((1U & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471_ap_start_reg)) 
                          & (~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter1))))
                    ? 1U : 2U) : ((2U == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                   ? 4U : ((4U == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                            ? 8U : 
                                           ((8U == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                             ? 0x10U
                                             : ((0x10U 
                                                 == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                                 ? 0x20U
                                                 : 
                                                ((0x20U 
                                                  == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                                  ? 
                                                 ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471_ap_ready)
                                                   ? 1U
                                                   : 0x40U)
                                                  : 
                                                 ((0x40U 
                                                   == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                                   ? 0x80U
                                                   : 0x100U)))))))
            : (((((((((0x100U == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm) 
                      | (0x200U == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)) 
                     | (0x400U == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)) 
                    | (0x800U == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)) 
                   | (0x1000U == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)) 
                  | (0x2000U == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)) 
                 | (0x4000U == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)) 
                | (0x8000U == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm))
                ? ((0x100U == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                    ? 0x200U : ((0x200U == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                 ? 0x400U : ((0x400U 
                                              == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                              ? 0x800U
                                              : ((0x800U 
                                                  == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                                  ? 0x1000U
                                                  : 
                                                 ((0x1000U 
                                                   == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                                   ? 0x2000U
                                                   : 
                                                  ((0x2000U 
                                                    == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                                    ? 0x4000U
                                                    : 
                                                   ((0x4000U 
                                                     == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                                     ? 0x8000U
                                                     : 0x10000U)))))))
                : (((((((((0x10000U == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm) 
                          | (0x20000U == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)) 
                         | (0x40000U == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)) 
                        | (0x80000U == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)) 
                       | (0x100000U == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)) 
                      | (0x200000U == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)) 
                     | (0x400000U == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)) 
                    | (0x800000U == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm))
                    ? ((0x10000U == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                        ? 0x20000U : ((0x20000U == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                       ? 0x40000U : 
                                      ((0x40000U == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                        ? 0x80000U : 
                                       ((0x80000U == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                         ? 0x100000U
                                         : ((0x100000U 
                                             == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                             ? 0x200000U
                                             : ((0x200000U 
                                                 == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                                 ? 0x400000U
                                                 : 
                                                ((0x400000U 
                                                  == vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                                  ? 0x800000U
                                                  : 1U)))))))
                    : 0U)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_done_int 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471_ap_ready) 
            & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
               >> 5U)) | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_done_reg));
    tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__WREADY_Dummy 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__fifo_burst__DOT__dout_vld) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__ready_for_data));
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT____VdfgRegularize_h0e68c41c_0_9 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_loop_init) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_4 
        = ((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_3) 
           | ((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_15) 
              | ((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_14) 
                 | ((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_13) 
                    | ((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_12) 
                       | ((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_11) 
                          | ((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_10) 
                             | ((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_9) 
                                | ((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_8) 
                                   | ((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_7) 
                                      | ((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_6) 
                                         | ((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_5) 
                                            | (IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_2)))))))))))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471_buf_A_ce0 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
            & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
               >> 0x17U)) | (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                              & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                                 >> 0x16U)) | (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                                                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                                                   >> 0x15U)) 
                                               | (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                                                   & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                                                      >> 0x14U)) 
                                                  | (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                                                      & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                                                         >> 0x13U)) 
                                                     | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_16) 
                                                        | ((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_3) 
                                                           | ((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_15) 
                                                              | ((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_14) 
                                                                 | ((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_13) 
                                                                    | ((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_12) 
                                                                       | ((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_11) 
                                                                          | (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                                                                              & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                                                                                >> 0x12U)) 
                                                                             | ((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_10) 
                                                                                | ((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_9) 
                                                                                | ((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_8) 
                                                                                | ((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_7) 
                                                                                | ((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_6) 
                                                                                | ((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_5) 
                                                                                | ((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_2) 
                                                                                | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter1) 
                                                                                & ((vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                                                                                >> 1U) 
                                                                                | vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm))))))))))))))))))))));
    if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter1) 
         & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
            >> 1U))) {
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address0_local 
            = (0x7ffU & ((IData)(0x2fU) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_reg_4051)));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address1_local 
            = (0x7ffU & ((IData)(0x2eU) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_reg_4051)));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter1) 
                & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)) {
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address0_local 
            = (0x7ffU & ((IData)(0x2dU) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_reg_4051)));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address1_local 
            = (0x7ffU & ((IData)(0x2cU) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_reg_4051)));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 0x17U))) {
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address0_local 
            = (0x7ffU & ((IData)(0x2bU) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_reg_4051)));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address1_local 
            = (0x7ffU & ((IData)(0x2aU) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_reg_4051)));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 0x16U))) {
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address0_local 
            = (0x7ffU & ((IData)(0x29U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_reg_4051)));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address1_local 
            = (0x7ffU & ((IData)(0x28U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_reg_4051)));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 0x15U))) {
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address0_local 
            = (0x7ffU & ((IData)(0x27U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_reg_4051)));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address1_local 
            = (0x7ffU & ((IData)(0x26U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_reg_4051)));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 0x14U))) {
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address0_local 
            = (0x7ffU & ((IData)(0x25U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_reg_4051)));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address1_local 
            = (0x7ffU & ((IData)(0x24U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_reg_4051)));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 0x13U))) {
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address0_local 
            = (0x7ffU & ((IData)(0x23U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_reg_4051)));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address1_local 
            = (0x7ffU & ((IData)(0x22U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_reg_4051)));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 0x12U))) {
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address0_local 
            = (0x7ffU & ((IData)(0x21U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_reg_4051)));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address1_local 
            = (0x7ffU & ((IData)(0x20U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_reg_4051)));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 0x11U))) {
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address0_local 
            = (0x7ffU & ((IData)(0x1fU) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_reg_4051)));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address1_local 
            = (0x7ffU & ((IData)(0x1eU) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_reg_4051)));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 0x10U))) {
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address0_local 
            = (0x7ffU & ((IData)(0x1dU) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_reg_4051)));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address1_local 
            = (0x7ffU & ((IData)(0x1cU) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_reg_4051)));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 0xfU))) {
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address0_local 
            = (0x7ffU & ((IData)(0x1bU) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_reg_4051)));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address1_local 
            = (0x7ffU & ((IData)(0x1aU) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_reg_4051)));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 0xeU))) {
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address0_local 
            = (0x7ffU & ((IData)(0x19U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_reg_4051)));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address1_local 
            = (0x7ffU & ((IData)(0x18U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_reg_4051)));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 0xdU))) {
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address0_local 
            = (0x7ffU & ((IData)(0x17U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_reg_4051)));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address1_local 
            = (0x7ffU & ((IData)(0x16U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_reg_4051)));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 0xcU))) {
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address0_local 
            = (0x7ffU & ((IData)(0x15U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_reg_4051)));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address1_local 
            = (0x7ffU & ((IData)(0x14U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_reg_4051)));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 0xbU))) {
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address0_local 
            = (0x7ffU & ((IData)(0x13U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_reg_4051)));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address1_local 
            = (0x7ffU & ((IData)(0x12U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_reg_4051)));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 0xaU))) {
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address0_local 
            = (0x7ffU & ((IData)(0x11U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_reg_4051)));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address1_local 
            = (0x7ffU & ((IData)(0x10U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_reg_4051)));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 9U))) {
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address0_local 
            = (0xfU | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_33_reg_4117) 
                       << 4U));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address1_local 
            = (0xeU | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_33_reg_4117) 
                       << 4U));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 8U))) {
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address0_local 
            = (0xdU | (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_33_reg_4117) 
                        << 4U) | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_29_reg_4111) 
                                  << 1U)));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address1_local 
            = (0xcU | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_33_reg_4117) 
                       << 4U));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 7U))) {
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address0_local 
            = (0xbU | (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_33_reg_4117) 
                        << 4U) | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_37_reg_4134) 
                                  << 2U)));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address1_local 
            = (0xaU | (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_33_reg_4117) 
                        << 4U) | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_37_reg_4134) 
                                  << 2U)));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 6U))) {
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address0_local 
            = (9U | (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_33_reg_4117) 
                      << 4U) | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_35_reg_4129) 
                                << 1U)));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address1_local 
            = (8U | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_33_reg_4117) 
                     << 4U));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 5U))) {
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address0_local 
            = (7U | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_27_reg_4103) 
                     << 3U));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address1_local 
            = (6U | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_27_reg_4103) 
                     << 3U));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 4U))) {
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address0_local 
            = (5U | (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_27_reg_4103) 
                      << 3U) | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_29_reg_4111) 
                                << 1U)));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address1_local 
            = (4U | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_27_reg_4103) 
                     << 3U));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 3U))) {
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address0_local 
            = (3U | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_24_reg_4097) 
                     << 2U));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address1_local 
            = (2U | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_24_reg_4097) 
                     << 2U));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
                & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                   >> 2U))) {
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address0_local 
            = (1U | (0x7feU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_fu_1348_p2)));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address1_local 
            = vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_fu_1348_p2;
    } else {
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address0_local = 0U;
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address1_local = 0U;
    }
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__fifo_rreq__DOT__push 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__fifo_rreq__DOT__full_n) 
           & ((IData)(tb__DOT__dut__DOT____VdfgExtracted_h4fbf0135__0) 
              & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_CS_fsm) 
                  & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_enable_reg_pp0_iter1)) 
                 & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_block_pp0_stage0_subdone_grp1)) 
                    & (~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_block_pp0_stage0_subdone_grp1_done_reg))))));
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__buf_A_address0_local 
        = (0xfffU & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter1) 
                      & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                         >> 1U)) ? (0x7ffU & ((IData)(2U) 
                                              + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__add_ln40_42_reg_3762)))
                      : (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter1) 
                          & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))
                          ? (0x7ffU & ((IData)(1U) 
                                       + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__add_ln40_42_reg_3762)))
                          : (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                              & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                                 >> 0xdU)) ? (0x7ffU 
                                              & ((IData)(2U) 
                                                 + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_174_reg_3806)))
                              : (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                                  & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                                     >> 0xcU)) ? (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_174_reg_3806)
                                  : (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                                      & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                                         >> 0xbU)) ? 
                                     (0x7ffU & ((IData)(1U) 
                                                + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_173_reg_3799)))
                                      : (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                                          & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                                             >> 0xaU))
                                          ? (0x7ffU 
                                             & ((IData)(2U) 
                                                + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_172_reg_3751)))
                                          : (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                                              & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                                                 >> 9U))
                                              ? (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_172_fu_2140_p2)
                                              : (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                                                  & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                                                     >> 8U))
                                                  ? 
                                                 (1U 
                                                  | (0x7feU 
                                                     & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_170_fu_1962_p2)))
                                                  : 
                                                 (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                                                   & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                                                      >> 7U))
                                                   ? 
                                                  VL_EXTENDS_II(12,12, 
                                                                (0xfffU 
                                                                 & ((IData)(2U) 
                                                                    + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_169_reg_3622))))
                                                   : 
                                                  (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                                                    & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                                                       >> 6U))
                                                    ? 
                                                   VL_EXTENDS_II(12,12, (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_169_reg_3622))
                                                    : 
                                                   (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                                                     & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                                                        >> 5U))
                                                     ? 
                                                    VL_EXTENDS_II(12,12, 
                                                                  (0xfffU 
                                                                   & ((IData)(1U) 
                                                                      + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_167_reg_3583))))
                                                     : 
                                                    (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                                                      & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                                                         >> 4U))
                                                      ? 
                                                     VL_EXTENDS_II(12,12, 
                                                                   (0xfffU 
                                                                    & ((IData)(2U) 
                                                                       + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_164_reg_3543))))
                                                      : 
                                                     (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                                                       & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                                                          >> 3U))
                                                       ? 
                                                      VL_EXTENDS_II(12,12, (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_164_fu_1186_p2))
                                                       : 
                                                      (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
                                                        & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                                                           >> 2U))
                                                        ? 
                                                       VL_EXTENDS_II(12,12, 
                                                                     (0xfffU 
                                                                      & ((IData)(1U) 
                                                                         + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_160_reg_3482))))
                                                        : 0U)))))))))))))));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__add_head 
        = ((IData)(tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__head_pad_sel) 
           & (- (IData)((IData)(tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__first_beat))));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__len_cnt_tmp 
        = (0x3fffffffU & ((IData)(tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__first_beat)
                           ? vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__offset_pack_reg
                           : vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__len_cnt_buf));
    tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT____VdfgRegularize_h9b029bc0_2_0 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__first_pad) 
            & (IData)(tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__first_beat))
            ? ((IData)(1U) << (vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__offset_pack_reg 
                               >> 0x1fU)) : ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__first_pad)
                                              ? 1U : (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__pad_oh_reg)));
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT____VdfgRegularize_hf886e175_0_2 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_loop_init) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_CS_fsm));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483_buf_B_ce0 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_enable_reg_pp0_iter0) 
            & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_CS_fsm)) 
           | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_enable_reg_pp0_iter0_reg) 
              & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_CS_fsm) 
                 >> 1U)));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__push 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__full_n) 
           & ((IData)(tb__DOT__dut__DOT____VdfgExtracted_h5811251e__0) 
              & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_enable_reg_pp0_iter2) 
                 & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_block_pp0_stage0_subdone_grp2)) 
                    & (~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_block_pp0_stage0_subdone_grp2_done_reg))))));
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT____VdfgRegularize_h2ff13d75_0_5 
        = (1U & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_block_pp0_stage0_subdone_grp1)) 
                 & (~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_block_pp0_stage0_subdone_grp1_done_reg))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_block_pp0_stage0_subdone 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_block_pp0_stage0_subdone_grp1) 
           | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_block_pp0_stage0_subdone_grp2));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__ready_for_data 
        = (1U & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__data_valid)) 
                 | ((IData)(tb__DOT__dut__DOT____VdfgExtracted_h4fbf0135__0) 
                    & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_enable_reg_pp0_iter9) 
                       & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_block_pp0_stage0_subdone_grp2)) 
                          & (~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_block_pp0_stage0_subdone_grp2_done_reg)))))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_block_pp0_stage0_subdone 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_block_pp0_stage0_subdone_grp2) 
           | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_block_pp0_stage0_subdone_grp1));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__last_data 
        = ((IData)((vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rs_tmp_rdata__DOT__data_p1 
                    >> 0x20U)) & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__ready_for_split));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__first_data 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__first_beat) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__ready_for_split));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_NS_fsm 
        = ((1U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_CS_fsm))
            ? (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_idle_pp0_0to2) 
                & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_condition_exit_pp0_iter3_stage0))
                ? 1U : ((1U & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447_ap_start_reg)) 
                               & ((~ ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter3) 
                                      | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter4))) 
                                  & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter2)) 
                                     & (~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter1))))))
                         ? 1U : 2U)) : ((2U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_CS_fsm))
                                         ? 1U : 0U));
    if (tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_17) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_sig_allocacmp_oc_load = 0U;
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_sig_allocacmp_indvar_flatten92_load = 0U;
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_sig_allocacmp_indvar_flatten79_load = 0U;
    } else {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_sig_allocacmp_oc_load 
            = vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__oc_fu_268;
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_sig_allocacmp_indvar_flatten92_load 
            = vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__indvar_flatten92_fu_284;
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_sig_allocacmp_indvar_flatten79_load 
            = vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__indvar_flatten79_fu_276;
    }
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__add_ln57_fu_548_p2 
        = (7U & ((IData)(1U) + ((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__empty_fu_487_p2)
                                 ? 0U : (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__oc_fu_142))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__trunc_ln58_fu_509_p1 
        = ((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__empty_fu_487_p2)
            ? 0U : (3U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__oc_fu_142)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__trunc_ln60_fu_518_p1 
        = (1U & ((~ (IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__empty_fu_487_p2)) 
                 & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__oc_fu_142)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__trunc_ln60_fu_425_p1 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__empty_fu_403_p2)
            ? 0U : (0x1fU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__oc_fu_138)));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__next_req 
        = (1U & ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__rs_req__DOT__state) 
                 & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__req_handling)) 
                    | ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__last_sect_tmp) 
                       & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__next_sect)))));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__next_req 
        = (1U & ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__rs_req__DOT__state) 
                 & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__req_handling)) 
                    | ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__last_sect_tmp) 
                       & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__next_sect)))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__add_ln83_9_fu_459_p2 
        = (0x7ffU & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_sig_allocacmp_ow_1) 
                      << 3U) + (IData)(vlSelf->tb__DOT__dut__DOT__thr_add1_reg_1023)));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__next_rreq 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__fifo_rreq__DOT__dout_vld) 
           & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__tmp_valid)) 
              | ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__rs_req__DOT__s_ready_t) 
                 & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__rreq_ready))));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__ARVALID_Dummy 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__tmp_valid) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__rreq_ready));
    if (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT____VdfgRegularize_h5c84ba7c_0_7) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_sig_allocacmp_indvar_flatten72_load = 0U;
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_sig_allocacmp_ow_load = 0U;
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_sig_allocacmp_indvar_flatten59_load = 0U;
    } else {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_sig_allocacmp_indvar_flatten72_load 
            = vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__indvar_flatten72_fu_194;
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_sig_allocacmp_ow_load 
            = vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ow_fu_178;
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_sig_allocacmp_indvar_flatten59_load 
            = vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__indvar_flatten59_fu_186;
    }
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__data_fifo__DOT__pop 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__data_fifo__DOT__empty_n) 
           & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__data_fifo__DOT__dout_vld)) 
              | (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__read_fifo)));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__data_pop 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__data_fifo__DOT__dout_vld) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__read_fifo));
    if (tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT____VdfgRegularize_h2ff13d75_0_7) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_sig_allocacmp_i_1 = 0U;
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__tmp_1_fu_284_p34 = 0U;
    } else {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_sig_allocacmp_i_1 
            = vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__i_fu_138;
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__tmp_1_fu_284_p34 
            = (0xfU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__i_fu_138));
    }
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__AWVALID_Dummy 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__tmp_valid) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__wreq_ready));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__next_wreq 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__fifo_wreq__DOT__dout_vld) 
           & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__fifo_wrsp__DOT__dout_vld)) 
              & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__tmp_valid)) 
                 | ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__rs_req__DOT__s_ready_t) 
                    & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__wreq_ready)))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__trunc_ln58_fu_1195_p1 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_fu_1149_p2)
            ? 0U : (7U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__oc_load_reg_3931)));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__next_data 
        = ((IData)(tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__WREADY_Dummy) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__data_valid));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__ready_for_data 
        = (1U & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__data_valid)) 
                 | (IData)(tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__WREADY_Dummy)));
    if (tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT____VdfgRegularize_h0e68c41c_0_9) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_sig_allocacmp_indvar_flatten12_load = 0U;
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_sig_allocacmp_ow_load = 0U;
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_sig_allocacmp_indvar_flatten_load = 0U;
    } else {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_sig_allocacmp_indvar_flatten12_load 
            = vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__indvar_flatten12_fu_238;
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_sig_allocacmp_ow_load 
            = vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ow_fu_222;
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_sig_allocacmp_indvar_flatten_load 
            = vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__indvar_flatten_fu_230;
    }
    if ((0x8000U & vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)) {
        vlSelf->tb__DOT__dut__DOT__buf_A_ce1 = vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471_buf_A_ce0;
        vlSelf->tb__DOT__dut__DOT__buf_A_address0 = tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address0_local;
        vlSelf->tb__DOT__dut__DOT__buf_A_address1 = 
            (0xfffU & (IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address1_local));
    } else {
        if ((0x2000U & vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)) {
            vlSelf->tb__DOT__dut__DOT__buf_A_ce1 = vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459_buf_A_ce1;
            vlSelf->tb__DOT__dut__DOT__buf_A_address1 
                = (0xfffU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__add_ln86_reg_1911_pp0_iter1_reg));
        } else if ((0x100U & vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)) {
            vlSelf->tb__DOT__dut__DOT__buf_A_ce1 = vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422_buf_A_ce1;
            vlSelf->tb__DOT__dut__DOT__buf_A_address1 
                = (0xfffU & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__zext_ln83_10_reg_1354_pp0_iter2_reg);
        } else if ((0x200U & vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)) {
            vlSelf->tb__DOT__dut__DOT__buf_A_ce1 = vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410_buf_A_ce0;
            vlSelf->tb__DOT__dut__DOT__buf_A_address1 
                = (0xfffU & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_enable_reg_pp0_iter1) 
                              & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_CS_fsm) 
                                 >> 1U)) ? (6U | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__tmp_51_reg_1282) 
                                                  << 3U))
                              : (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_enable_reg_pp0_iter1) 
                                  & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_CS_fsm))
                                  ? (4U | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__tmp_51_reg_1282) 
                                           << 3U)) : 
                                 (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_enable_reg_pp0_iter0_reg) 
                                   & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_CS_fsm) 
                                      >> 3U)) ? (2U 
                                                 | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__tmp_46_reg_1276) 
                                                    << 2U))
                                   : (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_enable_reg_pp0_iter0_reg) 
                                       & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_CS_fsm) 
                                          >> 2U)) ? (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__empty_120_fu_618_p2)
                                       : 0U)))));
        } else if ((8U & vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)) {
            vlSelf->tb__DOT__dut__DOT__buf_A_ce1 = 
                ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT____VdfgRegularize_h0e68c41c_0_6) 
                 | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT____VdfgRegularize_h0e68c41c_0_5));
            vlSelf->tb__DOT__dut__DOT__buf_A_address1 
                = (0xfffU & (IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__buf_A_address1_local));
        } else {
            vlSelf->tb__DOT__dut__DOT__buf_A_ce1 = 
                ((1U & (vlSelf->tb__DOT__dut__DOT__ap_CS_fsm 
                        >> 1U)) && (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388_buf_A_ce1));
            vlSelf->tb__DOT__dut__DOT__buf_A_address1 
                = (0xfffU & ((2U & vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)
                              ? vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__zext_ln168_reg_165_pp0_iter9_reg
                              : 0U));
        }
        vlSelf->tb__DOT__dut__DOT__buf_A_address0 = 
            ((0x200U & vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)
              ? (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_enable_reg_pp0_iter1) 
                  & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_CS_fsm) 
                     >> 1U)) ? (7U | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__tmp_51_reg_1282) 
                                      << 3U)) : (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_enable_reg_pp0_iter1) 
                                                  & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_CS_fsm))
                                                  ? 
                                                 (5U 
                                                  | (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__tmp_51_reg_1282) 
                                                      << 3U) 
                                                     | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__tmp_60_reg_1290) 
                                                        << 1U)))
                                                  : 
                                                 (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_enable_reg_pp0_iter0_reg) 
                                                   & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_CS_fsm) 
                                                      >> 3U))
                                                   ? 
                                                  (3U 
                                                   | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__tmp_46_reg_1276) 
                                                      << 2U))
                                                   : 
                                                  (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_enable_reg_pp0_iter0_reg) 
                                                    & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_CS_fsm) 
                                                       >> 2U))
                                                    ? 
                                                   (1U 
                                                    | (0x7feU 
                                                       & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__empty_120_fu_618_p2)))
                                                    : 0U))))
              : ((8U & vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)
                  ? (IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__buf_A_address0_local)
                  : 0U));
    }
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__pad_oh 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__dout_vld)
            ? (3U & tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT____VdfgRegularize_h9b029bc0_2_0)
            : 0U);
    if (tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT____VdfgRegularize_hf886e175_0_2) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_sig_allocacmp_c_1 = 0U;
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__trunc_ln113_fu_173_p1 = 0U;
    } else {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_sig_allocacmp_c_1 
            = vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__c_fu_108;
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__trunc_ln113_fu_173_p1 
            = (0xfU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__c_fu_108));
    }
    if ((0x20000U & vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)) {
        vlSelf->tb__DOT__dut__DOT__buf_B_ce1 = vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483_buf_B_ce0;
        if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_enable_reg_pp0_iter0_reg) 
             & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_CS_fsm) 
                >> 1U))) {
            vlSelf->tb__DOT__dut__DOT__buf_B_address0 
                = (0xfffU & (0x3fU & VL_EXTENDS_II(6,5, (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__zext_ln115_1_cast_reg_395))));
            vlSelf->tb__DOT__dut__DOT__buf_B_address1 
                = (0xfffU & (0x20U | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__trunc_ln113_reg_385)));
        } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_enable_reg_pp0_iter0) 
                    & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_CS_fsm))) {
            vlSelf->tb__DOT__dut__DOT__buf_B_address0 
                = (0xfffU & (0x10U | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__trunc_ln113_fu_173_p1)));
            vlSelf->tb__DOT__dut__DOT__buf_B_address1 
                = (0xfffU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__trunc_ln113_fu_173_p1));
        } else {
            vlSelf->tb__DOT__dut__DOT__buf_B_address0 
                = (0xfffU & 0U);
            vlSelf->tb__DOT__dut__DOT__buf_B_address1 
                = (0xfffU & 0U);
        }
    } else {
        if ((0x8000U & vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)) {
            vlSelf->tb__DOT__dut__DOT__buf_B_ce1 = vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471_buf_B_ce1;
            vlSelf->tb__DOT__dut__DOT__buf_B_address1 
                = (0xfffU & ((0x1f8U & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__select_ln56_reg_3957_pp0_iter1_reg) 
                                         << 3U) + (
                                                   ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__select_ln55_1_reg_3949_pp0_iter1_reg) 
                                                    << 6U) 
                                                   - 
                                                   ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__select_ln55_1_reg_3949_pp0_iter1_reg) 
                                                    << 4U)))) 
                             | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__trunc_ln58_reg_3967_pp0_iter1_reg)));
        } else if ((0x800U & vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)) {
            vlSelf->tb__DOT__dut__DOT__buf_B_ce1 = vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447_buf_B_ce0;
            vlSelf->tb__DOT__dut__DOT__buf_B_address1 
                = (0xfffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter1)
                              ? ((2U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_CS_fsm))
                                  ? (2U | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__tmp_65_reg_1054) 
                                           << 2U)) : 
                                 ((1U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_CS_fsm))
                                   ? (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__empty_115_fu_531_p2)
                                   : 0U)) : 0U));
        } else if ((0x100U & vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)) {
            vlSelf->tb__DOT__dut__DOT__buf_B_ce1 = vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422_buf_B_ce1;
            vlSelf->tb__DOT__dut__DOT__buf_B_address1 
                = (0xfffU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter0_reg)
                              ? ((0x10U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm))
                                  ? (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__add_ln83_16_reg_1423)
                                  : ((8U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm))
                                      ? (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__add_ln83_11_reg_1413)
                                      : ((4U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm))
                                          ? VL_EXTENDS_II(12,12, 
                                                          (0xfffU 
                                                           & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__sext_ln83_2_reg_1383) 
                                                              + 
                                                              ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__add_ln81_reg_1364) 
                                                               << 3U))))
                                          : ((2U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm))
                                              ? VL_EXTENDS_II(12,12, 
                                                              (0xfffU 
                                                               & (VL_EXTENDS_II(12,11, (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__add_ln83_reg_1339)) 
                                                                  + 
                                                                  VL_EXTENDS_II(12,8, 
                                                                                (0xf8U 
                                                                                & (((IData)(0x1fU) 
                                                                                + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ow_1_reg_1324)) 
                                                                                << 3U))))))
                                              : 0U))))
                              : 0U));
        } else if ((0x200U & vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)) {
            vlSelf->tb__DOT__dut__DOT__buf_B_ce1 = vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410_buf_B_ce1;
            vlSelf->tb__DOT__dut__DOT__buf_B_address1 
                = (0xfffU & ((0x3fcU & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__select_ln56_reg_1229_pp0_iter1_reg) 
                                         << 2U) + (
                                                   ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__select_ln55_1_reg_1221_pp0_iter1_reg) 
                                                    << 6U) 
                                                   - 
                                                   ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__select_ln55_1_reg_1221_pp0_iter1_reg) 
                                                    << 4U)))) 
                             | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__trunc_ln58_reg_1236_pp0_iter1_reg)));
        } else {
            vlSelf->tb__DOT__dut__DOT__buf_B_ce1 = 
                ((1U & (vlSelf->tb__DOT__dut__DOT__ap_CS_fsm 
                        >> 3U)) && (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398_buf_B_ce1));
            vlSelf->tb__DOT__dut__DOT__buf_B_address1 
                = (0xfffU & ((8U & vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)
                              ? (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__add_ln44_reg_3629_pp0_iter1_reg)
                              : 0U));
        }
        vlSelf->tb__DOT__dut__DOT__buf_B_address0 = 
            (0xfffU & ((0x800U & vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)
                        ? ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter1)
                            ? ((2U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_CS_fsm))
                                ? (3U | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__tmp_65_reg_1054) 
                                         << 2U)) : 
                               ((1U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_CS_fsm))
                                 ? (1U | (0x3feU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__empty_115_fu_531_p2)))
                                 : 0U)) : 0U) : ((0x100U 
                                                  & vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)
                                                  ? 
                                                 (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter0_reg) 
                                                   & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm) 
                                                      >> 4U))
                                                   ? (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__add_ln83_18_reg_1428)
                                                   : 
                                                  (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter0_reg) 
                                                    & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm) 
                                                       >> 3U))
                                                    ? (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__add_ln83_14_reg_1418)
                                                    : 
                                                   (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter0_reg) 
                                                     & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm) 
                                                        >> 2U))
                                                     ? 
                                                    ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__sext_ln83_reg_1377) 
                                                     + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__zext_ln76_cast_reg_1290))
                                                     : 
                                                    (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter0_reg) 
                                                      & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm) 
                                                         >> 1U))
                                                      ? 
                                                     VL_EXTENDS_II(12,12, 
                                                                   (0xfffU 
                                                                    & (VL_EXTENDS_II(12,11, (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__add_ln83_reg_1339)) 
                                                                       + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__shl_ln83_14_reg_1344))))
                                                      : 
                                                     (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter0) 
                                                       & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm))
                                                       ? (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__add_ln83_9_fu_459_p2)
                                                       : 0U)))))
                                                  : 0U)));
    }
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__genblk1__DOT__wnext 
        = (0x3fU & ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__push)
                     ? ((0x3eU == (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__genblk1__DOT__waddr))
                         ? 0U : ((IData)(1U) + (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__genblk1__DOT__waddr)))
                     : (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__genblk1__DOT__waddr)));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__fifo_wreq__DOT__push 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__fifo_wreq__DOT__full_n) 
           & ((IData)(tb__DOT__dut__DOT____VdfgExtracted_h5811251e__0) 
              & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_CS_fsm) 
                  & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_enable_reg_pp0_iter1)) 
                 & (IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT____VdfgRegularize_h2ff13d75_0_5))));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_0_BREADY 
        = ((IData)(tb__DOT__dut__DOT____VdfgExtracted_h5811251e__0) 
           & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_enable_reg_pp0_iter7) 
              & (IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT____VdfgRegularize_h2ff13d75_0_5)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_done_int 
        = (((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_block_pp0_stage0_subdone)) 
            & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_loop_exit_ready_pp0_iter6_reg)) 
           | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_done_reg));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__next_split 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__ready_for_split) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__ready_for_data));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388_ap_ready 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT____VdfgRegularize_h3e66546a_0_5) 
           & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_block_pp0_stage0_subdone)) 
              & (0x6c0U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_sig_allocacmp_i_2))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_done_int 
        = (((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_block_pp0_stage0_subdone)) 
            & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_loop_exit_ready_pp0_iter9_reg)) 
           | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_done_reg));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__split_cnt 
        = (3U & (((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__first_data) 
                  & (0U == (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__split_cnt_buf)))
                  ? ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT____Vcellout__bus_wide_gen__DOT__rreq_offset__if_dout) 
                     >> 2U) : (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__split_cnt_buf)));
    if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter1) 
         & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_CS_fsm))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__features_2_conv_0_1_weight_address0_local 
            = (3U | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__trunc_ln60_reg_1028) 
                     << 2U));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__features_2_conv_0_1_weight_address1_local 
            = (2U | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__trunc_ln60_reg_1028) 
                     << 2U));
    } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter0_reg) 
                & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_CS_fsm) 
                   >> 1U))) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__features_2_conv_0_1_weight_address0_local 
            = (1U | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__trunc_ln60_fu_425_p1) 
                     << 2U));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__features_2_conv_0_1_weight_address1_local 
            = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__trunc_ln60_fu_425_p1) 
               << 2U);
    } else {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__features_2_conv_0_1_weight_address0_local = 0U;
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__features_2_conv_0_1_weight_address1_local = 0U;
    }
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__fifo_rreq__DOT__pop 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__fifo_rreq__DOT__empty_n) 
           & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__fifo_rreq__DOT__dout_vld)) 
              | (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__next_rreq)));
    __Vtableidx14 = (((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__next_req) 
                      << 4U) | (((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__rs_req__DOT__s_ready_t) 
                                 << 3U) | (((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__ARVALID_Dummy) 
                                            << 2U) 
                                           | (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__rs_req__DOT__state))));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__rs_req__DOT__next 
        = Vtestbench__ConstPool__TABLE_hd59e8662_0[__Vtableidx14];
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__and_ln74_fu_515_p2 
        = ((0x24U != (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_sig_allocacmp_indvar_flatten59_load)) 
           & (6U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_sig_allocacmp_ow_load)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__select_ln74_1_fu_521_p3 
        = (0x3fU & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT____VdfgRegularize_h5c84ba7c_0_7)
                      ? 0U : (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__c_fu_190)) 
                    + (0x24U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_sig_allocacmp_indvar_flatten59_load))));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__req_en 
        = (((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__flying_req)) 
            & (0U != (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__last_cnt))) 
           | (((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__flying_req) 
               & ((IData)((vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__data_out 
                           >> 0x24U)) & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__data_pop))) 
              & (0U != (0x1fU & ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__last_cnt) 
                                 >> 1U)))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521_ap_ready 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT____VdfgRegularize_h2ff13d75_0_8) 
           & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_block_pp0_stage0_subdone)) 
              & (0x10U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_sig_allocacmp_i_1))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__sparsemux_33_4_16_1_1_U82__DOT__dout_tmp 
        = ((8U & (IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__tmp_1_fu_284_p34))
            ? ((4U & (IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__tmp_1_fu_284_p34))
                ? ((2U & (IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__tmp_1_fu_284_p34))
                    ? ((1U & (IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__tmp_1_fu_284_p34))
                        ? (IData)(vlSelf->tb__DOT__dut__DOT__p_ZZ13mobilenet_topPVaPVsiPiE5pool1_15)
                        : (IData)(vlSelf->tb__DOT__dut__DOT__p_ZZ13mobilenet_topPVaPVsiPiE5pool1_14))
                    : ((1U & (IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__tmp_1_fu_284_p34))
                        ? (IData)(vlSelf->tb__DOT__dut__DOT__p_ZZ13mobilenet_topPVaPVsiPiE5pool1_13)
                        : (IData)(vlSelf->tb__DOT__dut__DOT__p_ZZ13mobilenet_topPVaPVsiPiE5pool1_12)))
                : ((2U & (IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__tmp_1_fu_284_p34))
                    ? ((1U & (IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__tmp_1_fu_284_p34))
                        ? (IData)(vlSelf->tb__DOT__dut__DOT__p_ZZ13mobilenet_topPVaPVsiPiE5pool1_11)
                        : (IData)(vlSelf->tb__DOT__dut__DOT__p_ZZ13mobilenet_topPVaPVsiPiE5pool1_10))
                    : ((1U & (IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__tmp_1_fu_284_p34))
                        ? (IData)(vlSelf->tb__DOT__dut__DOT__mobilenet_top_signed_char_volatile_short_volatile_int_int_pool1_9)
                        : (IData)(vlSelf->tb__DOT__dut__DOT__mobilenet_top_signed_char_volatile_short_volatile_int_int_pool1_8))))
            : ((4U & (IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__tmp_1_fu_284_p34))
                ? ((2U & (IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__tmp_1_fu_284_p34))
                    ? ((1U & (IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__tmp_1_fu_284_p34))
                        ? (IData)(vlSelf->tb__DOT__dut__DOT__mobilenet_top_signed_char_volatile_short_volatile_int_int_pool1_7)
                        : (IData)(vlSelf->tb__DOT__dut__DOT__mobilenet_top_signed_char_volatile_short_volatile_int_int_pool1_6))
                    : ((1U & (IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__tmp_1_fu_284_p34))
                        ? (IData)(vlSelf->tb__DOT__dut__DOT__mobilenet_top_signed_char_volatile_short_volatile_int_int_pool1_5)
                        : (IData)(vlSelf->tb__DOT__dut__DOT__mobilenet_top_signed_char_volatile_short_volatile_int_int_pool1_4)))
                : ((2U & (IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__tmp_1_fu_284_p34))
                    ? ((1U & (IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__tmp_1_fu_284_p34))
                        ? (IData)(vlSelf->tb__DOT__dut__DOT__mobilenet_top_signed_char_volatile_short_volatile_int_int_pool1_3)
                        : (IData)(vlSelf->tb__DOT__dut__DOT__mobilenet_top_signed_char_volatile_short_volatile_int_int_pool1_2))
                    : ((1U & (IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__tmp_1_fu_284_p34))
                        ? (IData)(vlSelf->tb__DOT__dut__DOT__mobilenet_top_signed_char_volatile_short_volatile_int_int_pool1_1)
                        : (IData)(vlSelf->tb__DOT__dut__DOT__mobilenet_top_signed_char_volatile_short_volatile_int_int_pool1)))));
    __Vtableidx6 = (((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__next_req) 
                     << 4U) | (((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__rs_req__DOT__s_ready_t) 
                                << 3U) | (((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__AWVALID_Dummy) 
                                           << 2U) | (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__rs_req__DOT__state))));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__rs_req__DOT__next 
        = Vtestbench__ConstPool__TABLE_hd59e8662_0[__Vtableidx6];
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__fifo_wrsp__DOT__push 
        = ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__fifo_wrsp__DOT__dout_vld)) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__next_wreq));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__fifo_wreq__DOT__pop 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__fifo_wreq__DOT__empty_n) 
           & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__fifo_wreq__DOT__dout_vld)) 
              | (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__next_wreq)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__sub_ln60_fu_1224_p2 
        = (0x1ffU & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__trunc_ln58_fu_1195_p1) 
                      << 6U) - ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__trunc_ln58_fu_1195_p1) 
                                << 4U)));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__next_burst 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__burst_len) 
            == (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__len_cnt)) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__next_data));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__next_wdata 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__offset_valid) 
           & ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__dout_vld) 
              & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__ready_for_data)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__and_ln30_fu_857_p2 
        = ((0x90U != (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_sig_allocacmp_indvar_flatten_load)) 
           & (0xcU == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_sig_allocacmp_ow_load)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__select_ln30_1_fu_863_p3 
        = (0xfU & (((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT____VdfgRegularize_h0e68c41c_0_9)
                     ? 0U : (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__oc_fu_234)) 
                   + (0x90U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_sig_allocacmp_indvar_flatten_load))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__select_ln30_fu_837_p3 
        = ((0x90U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_sig_allocacmp_indvar_flatten_load))
            ? 0U : ((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT____VdfgRegularize_h0e68c41c_0_9)
                     ? 0U : (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__oh_fu_226)));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__last_pad 
        = (1U & ((IData)(tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__last_beat)
                  ? ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__pad_oh) 
                     >> (1U & (~ (- (IData)((vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__offset_pack_reg 
                                             >> 0x1eU))))))
                  : ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__dout_vld) 
                     & (tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT____VdfgRegularize_h9b029bc0_2_0 
                        >> 1U))));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__user_resp__DOT__pop 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__user_resp__DOT__empty_n) 
           & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__user_resp__DOT__dout_vld)) 
              | (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_0_BREADY)));
    tb__DOT__dut__DOT__ap_block_state20_on_subcall_done 
        = (1U & ((~ ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_done_int) 
                     | ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521_ap_start_reg)) 
                        & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache)))) 
                 & (~ (IData)(vlSelf->tb__DOT__dut__DOT__icmp_ln154_reg_870))));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__first_split 
        = ((0U == (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__split_cnt_buf)) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__next_split));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__last_split 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__split_cnt) 
            == ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__last_data)
                 ? (3U & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT____Vcellout__bus_wide_gen__DOT__rreq_offset__if_dout))
                 : 3U)) & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__next_split));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__rs_req_valid 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__req_en) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__req_fifo__DOT__dout_vld));
    if (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__features_2_conv_3_weight_address1_local 
            = (0x1fU & ((0x10000U & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                         ? ((IData)(0x1eU) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__trunc_ln60_reg_3977))
                         : ((0x8000U & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                             ? ((IData)(0x1cU) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__trunc_ln60_reg_3977))
                             : ((0x4000U & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                 ? ((IData)(0x1aU) 
                                    + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__trunc_ln60_reg_3977))
                                 : ((0x2000U & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                     ? ((IData)(0x18U) 
                                        + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__trunc_ln60_reg_3977))
                                     : ((0x1000U & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                         ? ((IData)(0x16U) 
                                            + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__trunc_ln60_reg_3977))
                                         : ((0x800U 
                                             & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                             ? ((IData)(0x14U) 
                                                + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__trunc_ln60_reg_3977))
                                             : ((0x400U 
                                                 & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                                 ? 
                                                ((IData)(0x12U) 
                                                 + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__trunc_ln60_reg_3977))
                                                 : 
                                                ((0x200U 
                                                  & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                                  ? 
                                                 (0x10U 
                                                  & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_51_reg_4027)) 
                                                     << 4U))
                                                  : 
                                                 ((0x100U 
                                                   & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                                   ? 
                                                  (0xeU 
                                                   | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_51_reg_4027) 
                                                      << 4U))
                                                   : 
                                                  ((0x80U 
                                                    & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                                    ? 
                                                   (0xcU 
                                                    | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_51_reg_4027) 
                                                       << 4U))
                                                    : 
                                                   ((0x40U 
                                                     & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                                     ? 
                                                    (0xaU 
                                                     | (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_51_reg_4027) 
                                                         << 4U) 
                                                        | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_53_reg_4045) 
                                                           << 2U)))
                                                     : 
                                                    ((0x20U 
                                                      & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                                      ? 
                                                     (8U 
                                                      | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_51_reg_4027) 
                                                         << 4U))
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                                       ? 
                                                      (6U 
                                                       | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_48_reg_4013) 
                                                          << 3U))
                                                       : 
                                                      ((8U 
                                                        & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                                        ? 
                                                       (4U 
                                                        | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_48_reg_4013) 
                                                           << 3U))
                                                        : 
                                                       ((4U 
                                                         & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                                         ? 
                                                        (2U 
                                                         | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_46_reg_4007) 
                                                            << 2U))
                                                         : 
                                                        ((2U 
                                                          & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                                          ? (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__sub_ln60_fu_1224_p2)
                                                          : 0U)))))))))))))))));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__features_2_conv_3_weight_address0_local 
            = (0x1fU & ((0x20000U & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                         ? (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__trunc_ln60_reg_3977)
                         : ((0x10000U & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                             ? ((IData)(0x1fU) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__trunc_ln60_reg_3977))
                             : ((0x8000U & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                 ? ((IData)(0x1dU) 
                                    + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__trunc_ln60_reg_3977))
                                 : ((0x4000U & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                     ? ((IData)(0x1bU) 
                                        + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__trunc_ln60_reg_3977))
                                     : ((0x2000U & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                         ? ((IData)(0x19U) 
                                            + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__trunc_ln60_reg_3977))
                                         : ((0x1000U 
                                             & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                             ? ((IData)(0x17U) 
                                                + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__trunc_ln60_reg_3977))
                                             : ((0x800U 
                                                 & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                                 ? 
                                                ((IData)(0x15U) 
                                                 + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__trunc_ln60_reg_3977))
                                                 : 
                                                ((0x400U 
                                                  & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                                  ? 
                                                 ((IData)(0x13U) 
                                                  + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__trunc_ln60_reg_3977))
                                                  : 
                                                 ((0x200U 
                                                   & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                                   ? 
                                                  ((IData)(0x11U) 
                                                   + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__trunc_ln60_reg_3977))
                                                   : 
                                                  ((0x100U 
                                                    & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                                    ? 
                                                   (0xfU 
                                                    | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_51_reg_4027) 
                                                       << 4U))
                                                    : 
                                                   ((0x80U 
                                                     & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                                     ? 
                                                    (0xdU 
                                                     | (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_51_reg_4027) 
                                                         << 4U) 
                                                        | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_49_reg_4021) 
                                                           << 1U)))
                                                     : 
                                                    ((0x40U 
                                                      & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                                      ? 
                                                     (0xbU 
                                                      | (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_51_reg_4027) 
                                                          << 4U) 
                                                         | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_53_reg_4045) 
                                                            << 2U)))
                                                      : 
                                                     ((0x20U 
                                                       & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                                       ? 
                                                      (9U 
                                                       | (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_51_reg_4027) 
                                                           << 4U) 
                                                          | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_52_reg_4040) 
                                                             << 1U)))
                                                       : 
                                                      ((0x10U 
                                                        & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                                        ? 
                                                       (7U 
                                                        | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_48_reg_4013) 
                                                           << 3U))
                                                        : 
                                                       ((8U 
                                                         & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                                         ? 
                                                        (5U 
                                                         | (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_48_reg_4013) 
                                                             << 3U) 
                                                            | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_49_reg_4021) 
                                                               << 1U)))
                                                         : 
                                                        ((4U 
                                                          & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                                          ? 
                                                         (3U 
                                                          | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_46_reg_4007) 
                                                             << 2U))
                                                          : 
                                                         ((2U 
                                                           & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
                                                           ? 
                                                          (1U 
                                                           | (0x1eU 
                                                              & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__sub_ln60_fu_1224_p2)))
                                                           : 0U))))))))))))))))));
    } else {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__features_2_conv_3_weight_address1_local = 0U;
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__features_2_conv_3_weight_address0_local = 0U;
    }
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__pop 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__empty_n) 
           & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__dout_vld)) 
              | (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__next_wdata)));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__next_beat 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__offset_valid) 
           & ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__last_pad) 
              & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__ready_for_data)));
    vlSelf->tb__DOT__dut__DOT__ap_done = ((~ (IData)(tb__DOT__dut__DOT__ap_block_state20_on_subcall_done)) 
                                          & (vlSelf->tb__DOT__dut__DOT__ap_CS_fsm 
                                             >> 0x13U));
    vlSelf->tb__DOT__dut__DOT__ap_NS_fsm = ((((((((
                                                   (1U 
                                                    == vlSelf->tb__DOT__dut__DOT__ap_CS_fsm) 
                                                   | (2U 
                                                      == vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)) 
                                                  | (4U 
                                                     == vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)) 
                                                 | (8U 
                                                    == vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)) 
                                                | (0x10U 
                                                   == vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)) 
                                               | (0x20U 
                                                  == vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)) 
                                              | (0x40U 
                                                 == vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)) 
                                             | (0x80U 
                                                == vlSelf->tb__DOT__dut__DOT__ap_CS_fsm))
                                             ? ((1U 
                                                 == vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)
                                                 ? 
                                                ((((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axilite_ctrl_s_axi_U__DOT__int_ap_start) 
                                                   & (0U 
                                                      == vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axilite_ctrl_s_axi_U__DOT__int_start_r)) 
                                                  & vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)
                                                  ? 0x80000U
                                                  : 
                                                 ((((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axilite_ctrl_s_axi_U__DOT__int_ap_start) 
                                                    & (0U 
                                                       != vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axilite_ctrl_s_axi_U__DOT__int_start_r)) 
                                                   & vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)
                                                   ? 2U
                                                   : 1U))
                                                 : 
                                                ((2U 
                                                  == vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)
                                                  ? 
                                                 ((((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_done_int) 
                                                    | ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388_ap_start_reg)) 
                                                       & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache))) 
                                                   & (vlSelf->tb__DOT__dut__DOT__ap_CS_fsm 
                                                      >> 1U))
                                                   ? 4U
                                                   : 2U)
                                                  : 
                                                 ((4U 
                                                   == vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)
                                                   ? 8U
                                                   : 
                                                  ((8U 
                                                    == vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)
                                                    ? 
                                                   ((((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_done_int) 
                                                      | ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398_ap_start_reg)) 
                                                         & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache))) 
                                                     & (vlSelf->tb__DOT__dut__DOT__ap_CS_fsm 
                                                        >> 3U))
                                                     ? 0x10U
                                                     : 8U)
                                                    : 
                                                   ((0x10U 
                                                     == vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)
                                                     ? 
                                                    (((8U 
                                                       == (IData)(vlSelf->tb__DOT__dut__DOT__c_fu_224)) 
                                                      & (vlSelf->tb__DOT__dut__DOT__ap_CS_fsm 
                                                         >> 4U))
                                                      ? 0x200U
                                                      : 0x20U)
                                                     : 
                                                    ((0x20U 
                                                      == vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)
                                                      ? 0x40U
                                                      : 
                                                     ((0x40U 
                                                       == vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)
                                                       ? 0x80U
                                                       : 0x100U)))))))
                                             : ((((
                                                   (((((0x100U 
                                                        == vlSelf->tb__DOT__dut__DOT__ap_CS_fsm) 
                                                       | (0x200U 
                                                          == vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)) 
                                                      | (0x400U 
                                                         == vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)) 
                                                     | (0x800U 
                                                        == vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)) 
                                                    | (0x1000U 
                                                       == vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)) 
                                                   | (0x2000U 
                                                      == vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)) 
                                                  | (0x4000U 
                                                     == vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)) 
                                                 | (0x8000U 
                                                    == vlSelf->tb__DOT__dut__DOT__ap_CS_fsm))
                                                 ? 
                                                ((0x100U 
                                                  == vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)
                                                  ? 
                                                 ((((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422_ap_done) 
                                                    & (IData)(vlSelf->tb__DOT__dut__DOT__icmp_ln75_reg_1029)) 
                                                   & (vlSelf->tb__DOT__dut__DOT__ap_CS_fsm 
                                                      >> 8U))
                                                   ? 0x10U
                                                   : 
                                                  ((((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422_ap_done) 
                                                     & (~ (IData)(vlSelf->tb__DOT__dut__DOT__icmp_ln75_reg_1029))) 
                                                    & (vlSelf->tb__DOT__dut__DOT__ap_CS_fsm 
                                                       >> 8U))
                                                    ? 0x40U
                                                    : 0x100U))
                                                  : 
                                                 ((0x200U 
                                                   == vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)
                                                   ? 
                                                  ((((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_done_int) 
                                                     | ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410_ap_start_reg)) 
                                                        & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache))) 
                                                    & (vlSelf->tb__DOT__dut__DOT__ap_CS_fsm 
                                                       >> 9U))
                                                    ? 0x400U
                                                    : 0x200U)
                                                   : 
                                                  ((0x400U 
                                                    == vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)
                                                    ? 0x800U
                                                    : 
                                                   ((0x800U 
                                                     == vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)
                                                     ? 
                                                    ((((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_done_int) 
                                                       | ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447_ap_start_reg)) 
                                                          & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache))) 
                                                      & (vlSelf->tb__DOT__dut__DOT__ap_CS_fsm 
                                                         >> 0xbU))
                                                      ? 0x1000U
                                                      : 0x800U)
                                                     : 
                                                    ((0x1000U 
                                                      == vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)
                                                      ? 0x2000U
                                                      : 
                                                     ((0x2000U 
                                                       == vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)
                                                       ? 
                                                      ((((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_done_int) 
                                                         | ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459_ap_start_reg)) 
                                                            & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache))) 
                                                        & (vlSelf->tb__DOT__dut__DOT__ap_CS_fsm 
                                                           >> 0xdU))
                                                        ? 0x4000U
                                                        : 0x2000U)
                                                       : 
                                                      ((0x4000U 
                                                        == vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)
                                                        ? 0x8000U
                                                        : 
                                                       ((((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_done_int) 
                                                          | ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471_ap_start_reg)) 
                                                             & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache))) 
                                                         & (vlSelf->tb__DOT__dut__DOT__ap_CS_fsm 
                                                            >> 0xfU))
                                                         ? 0x10000U
                                                         : 0x8000U))))))))
                                                 : 
                                                ((0x10000U 
                                                  == vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)
                                                  ? 0x20000U
                                                  : 
                                                 ((0x20000U 
                                                   == vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)
                                                   ? 
                                                  ((((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_done_int) 
                                                     | ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483_ap_start_reg)) 
                                                        & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache))) 
                                                    & (vlSelf->tb__DOT__dut__DOT__ap_CS_fsm 
                                                       >> 0x11U))
                                                    ? 0x40000U
                                                    : 0x20000U)
                                                   : 
                                                  ((0x40000U 
                                                    == vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)
                                                    ? 0x80000U
                                                    : 
                                                   ((0x80000U 
                                                     == vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)
                                                     ? 
                                                    ((IData)(
                                                             ((vlSelf->tb__DOT__dut__DOT__ap_CS_fsm 
                                                               >> 0x13U) 
                                                              & (~ (IData)(tb__DOT__dut__DOT__ap_block_state20_on_subcall_done))))
                                                      ? 1U
                                                      : 0x80000U)
                                                     : 0U))))));
    __Vtableidx12 = (((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__last_split) 
                      << 4U) | (((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rs_tmp_rdata__DOT__s_ready_t) 
                                 << 3U) | (((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__dout_vld) 
                                            << 2U) 
                                           | (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rs_tmp_rdata__DOT__state))));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rs_tmp_rdata__DOT__next 
        = Vtestbench__ConstPool__TABLE_hd59e8662_0[__Vtableidx12];
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__next_offset 
        = ((IData)((vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rs_tmp_rdata__DOT__data_p1 
                    >> 0x20U)) & ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rs_tmp_rdata__DOT__state) 
                                  & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__last_split)));
    __Vtableidx8 = (((IData)(vlSelf->tb__DOT__out_awready) 
                     << 4U) | (((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__rs_req__DOT__s_ready_t) 
                                << 3U) | (((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__rs_req_valid) 
                                           << 2U) | (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__rs_req__DOT__state))));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__rs_req__DOT__next 
        = Vtestbench__ConstPool__TABLE_hd59e8662_0[__Vtableidx8];
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__genblk1__DOT__rnext 
        = (0x3fU & ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__pop)
                     ? ((0x3eU == (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__genblk1__DOT__raddr))
                         ? 0U : ((IData)(1U) + (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__genblk1__DOT__raddr)))
                     : (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__genblk1__DOT__raddr)));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__next_offset 
        = ((IData)(tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__last_beat) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__next_beat));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rreq_offset__DOT__pop 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rreq_offset__DOT__empty_n) 
           & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rreq_offset__DOT__dout_vld)) 
              | (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__next_offset)));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__offset_read 
        = (1U & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__offset_valid)) 
                 | (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__next_offset)));
}

VL_ATTR_COLD void Vtestbench___024root___eval_triggers__stl(Vtestbench___024root* vlSelf);

VL_ATTR_COLD bool Vtestbench___024root___eval_phase__stl(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtestbench___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtestbench___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] tb.s_bvalid)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__nba(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] tb.s_bvalid)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestbench___024root___ctor_var_reset(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__rst_n = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2000001; ++__Vi0) {
        vlSelf->tb__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb__DOT__pix_arready = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__pix_rdata = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__pix_rvalid = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__out_awready = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__out_wvalid = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__out_wready = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__out_bvalid = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__s_awaddr = VL_RAND_RESET_I(6);
    vlSelf->tb__DOT__s_awvalid = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__s_wdata = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__s_wvalid = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__s_bvalid = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT____Vlvbound_h1932b697__0 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT____Vlvbound_heed0f62b__0 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT____Vlvbound_h1038de08__0 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT____Vlvbound_h1073b884__0 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT____Vlvbound_h1073dd5e__0 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__dut__DOT__m_axi_mnv2_cnn_axi4_pix_RLAST = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__s_axi_mnv2_cnn_axilite_ctrl_WSTRB = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__ap_done = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__ap_CS_fsm = VL_RAND_RESET_I(20);
    vlSelf->tb__DOT__dut__DOT__buf_A_address0 = VL_RAND_RESET_I(12);
    vlSelf->tb__DOT__dut__DOT__buf_A_q0 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__buf_A_address1 = VL_RAND_RESET_I(12);
    vlSelf->tb__DOT__dut__DOT__buf_A_ce1 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__buf_A_q1 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__buf_B_address0 = VL_RAND_RESET_I(12);
    vlSelf->tb__DOT__dut__DOT__buf_B_q0 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__buf_B_address1 = VL_RAND_RESET_I(12);
    vlSelf->tb__DOT__dut__DOT__buf_B_ce1 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__buf_B_q1 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__buf_exp_q0 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__buf_exp_address1 = VL_RAND_RESET_I(13);
    vlSelf->tb__DOT__dut__DOT__buf_exp_ce1 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__buf_exp_q1 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__mobilenet_top_signed_char_volatile_short_volatile_int_int_pool1 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__mobilenet_top_signed_char_volatile_short_volatile_int_int_pool1_1 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__mobilenet_top_signed_char_volatile_short_volatile_int_int_pool1_2 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__mobilenet_top_signed_char_volatile_short_volatile_int_int_pool1_3 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__mobilenet_top_signed_char_volatile_short_volatile_int_int_pool1_4 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__mobilenet_top_signed_char_volatile_short_volatile_int_int_pool1_5 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__mobilenet_top_signed_char_volatile_short_volatile_int_int_pool1_6 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__mobilenet_top_signed_char_volatile_short_volatile_int_int_pool1_7 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__mobilenet_top_signed_char_volatile_short_volatile_int_int_pool1_8 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__mobilenet_top_signed_char_volatile_short_volatile_int_int_pool1_9 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__p_ZZ13mobilenet_topPVaPVsiPiE5pool1_10 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__p_ZZ13mobilenet_topPVaPVsiPiE5pool1_11 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__p_ZZ13mobilenet_topPVaPVsiPiE5pool1_12 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__p_ZZ13mobilenet_topPVaPVsiPiE5pool1_13 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__p_ZZ13mobilenet_topPVaPVsiPiE5pool1_14 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__p_ZZ13mobilenet_topPVaPVsiPiE5pool1_15 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_bias_q0 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_q0 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_q1 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_q2 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_q3 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_q4 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_q5 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_q6 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_q7 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_q8 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__pool1_out_read_reg_860 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__pixel_in_read_reg_865 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__icmp_ln154_reg_870 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__add_ln74_reg_887 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__empty_reg_892 = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__dut__DOT__sum_1_reg_947 = VL_RAND_RESET_I(24);
    vlSelf->tb__DOT__dut__DOT__shl_i_i26_i_i_i1_reg_952 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_load_reg_957 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_load_1_reg_962 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_load_2_reg_967 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_load_3_reg_972 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_load_4_reg_977 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_load_5_reg_982 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_load_6_reg_987 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_load_7_reg_992 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_load_8_reg_997 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__empty_189_fu_728_p2 = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__empty_189_reg_1002 = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__tmp_5_reg_1007 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__empty_190_reg_1012 = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__dut__DOT__empty_191_reg_1017 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__thr_add1_fu_762_p3 = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__thr_add1_reg_1023 = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__icmp_ln75_reg_1029 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388_ap_ready = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388_buf_A_ce1 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398_ap_ready = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398_buf_B_ce1 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410_ap_ready = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410_buf_A_ce0 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410_buf_B_ce1 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422_ap_done = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422_ap_ready = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422_buf_B_ce1 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422_buf_A_ce1 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447_ap_ready = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447_buf_B_ce0 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447_buf_exp_ce1 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459_ap_ready = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459_buf_A_ce1 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471_ap_ready = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471_buf_A_ce0 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471_buf_B_ce1 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483_ap_ready = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483_mobilenet_top_signed_char_volatile_short_volatile_int_int_pool1 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483_buf_B_ce0 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521_ap_ready = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_0_BREADY = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__oh_reg_376 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388_ap_start_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398_ap_start_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410_ap_start_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422_ap_start_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447_ap_start_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459_ap_start_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471_ap_start_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483_ap_start_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521_ap_start_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__c_fu_224 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__p_cast_fu_596_p3 = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__dut__DOT__ap_NS_fsm = VL_RAND_RESET_I(20);
    for (int __Vi0 = 0; __Vi0 < 2304; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__buf_A_U__DOT__ram[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->tb__DOT__dut__DOT__buf_A_U__DOT____Vlvbound_h327ebed4__0 = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 2304; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__buf_B_U__DOT__ram[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->tb__DOT__dut__DOT__buf_B_U__DOT____Vlvbound_h327ebed4__0 = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 6912; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__buf_exp_U__DOT__ram[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->tb__DOT__dut__DOT__buf_exp_U__DOT____Vlvbound_hac0a4f7d__0 = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_bias_U__DOT__rom0[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_U__DOT__rom0[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_U__DOT__rom1[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_U__DOT__rom2[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_U__DOT__rom3[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__features_1_conv_0_1_weight_U__DOT__rom4[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_CS_fsm = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_enable_reg_pp0_iter1 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_enable_reg_pp0_iter2 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_enable_reg_pp0_iter3 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_enable_reg_pp0_iter4 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_enable_reg_pp0_iter5 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_enable_reg_pp0_iter6 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_enable_reg_pp0_iter7 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_enable_reg_pp0_iter8 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_enable_reg_pp0_iter9 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_enable_reg_pp0_iter10 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_block_pp0_stage0_subdone_grp1_done_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_block_pp0_stage0_subdone_grp1 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_block_pp0_stage0_subdone = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_block_pp0_stage0_subdone_grp2_done_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_block_pp0_stage0_subdone_grp2 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__zext_ln168_reg_165 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__zext_ln168_reg_165_pp0_iter1_reg = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__zext_ln168_reg_165_pp0_iter2_reg = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__zext_ln168_reg_165_pp0_iter3_reg = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__zext_ln168_reg_165_pp0_iter4_reg = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__zext_ln168_reg_165_pp0_iter5_reg = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__zext_ln168_reg_165_pp0_iter6_reg = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__zext_ln168_reg_165_pp0_iter7_reg = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__zext_ln168_reg_165_pp0_iter8_reg = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__zext_ln168_reg_165_pp0_iter9_reg = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__mnv2_cnn_axi4_pix_addr_reg_170 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__mnv2_cnn_axi4_pix_addr_read_reg_176 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__i_fu_66 = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_loop_init = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_sig_allocacmp_i_2 = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_block_pp0_stage0_subdone_grp0_done_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_done_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_done_int = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_loop_exit_ready_pp0_iter1_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_loop_exit_ready_pp0_iter2_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_loop_exit_ready_pp0_iter3_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_loop_exit_ready_pp0_iter4_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_loop_exit_ready_pp0_iter5_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_loop_exit_ready_pp0_iter6_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_loop_exit_ready_pp0_iter7_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_loop_exit_ready_pp0_iter8_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_loop_exit_ready_pp0_iter9_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_NS_fsm = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT____VdfgRegularize_h3e66546a_0_5 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm = VL_RAND_RESET_I(14);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter1 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__icmp_ln30_reg_3361 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__features_0_1_bias_q0 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__features_0_1_weight_q0 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__features_0_1_weight_q1 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_730 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_734 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_739 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_744 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_748 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_753 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_722_p2 = VL_RAND_RESET_Q(47);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_757 = VL_RAND_RESET_Q(47);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__grp_fu_726_p2 = VL_RAND_RESET_Q(47);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_761 = VL_RAND_RESET_Q(47);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_765 = VL_RAND_RESET_Q(47);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__reg_769 = VL_RAND_RESET_Q(47);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__select_ln30_fu_837_p3 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__select_ln30_reg_3365 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__and_ln30_fu_857_p2 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__and_ln30_reg_3370 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__select_ln30_1_fu_863_p3 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__select_ln30_1_reg_3375 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__add_ln31_reg_3380 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ow_mid2_reg_3385 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_122_reg_3392 = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__select_ln31_fu_929_p3 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__select_ln31_reg_3402 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__features_0_1_bias_load_reg_3409 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_124_reg_3415 = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_153_fu_1021_p2 = VL_RAND_RESET_I(12);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_153_reg_3454 = VL_RAND_RESET_I(12);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_154_reg_3460 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__tmp_12_reg_3467 = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_159_fu_1066_p2 = VL_RAND_RESET_I(9);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_159_reg_3472 = VL_RAND_RESET_I(9);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__p_cast56_reg_3477 = VL_RAND_RESET_I(12);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_160_reg_3482 = VL_RAND_RESET_I(12);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_161_reg_3489 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_161_reg_3489_pp0_iter1_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__p_shl_reg_3516 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_163_reg_3521 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_164_fu_1186_p2 = VL_RAND_RESET_I(12);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_164_reg_3543 = VL_RAND_RESET_I(12);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__tmp_16_reg_3553 = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_166_reg_3578 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_167_reg_3583 = VL_RAND_RESET_I(12);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_156_reg_3600 = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__tmp_65_reg_3607 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_169_reg_3622 = VL_RAND_RESET_I(12);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__add_ln44_reg_3629 = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__add_ln44_reg_3629_pp0_iter1_reg = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__sum_cast93_reg_3634 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__tmp_17_reg_3650 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__tmp_18_reg_3675 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__p_cast61_reg_3700 = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__tmp_20_reg_3705 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_170_fu_1962_p2 = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_170_reg_3710 = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_157_reg_3735 = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__sum_2_reg_3741 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_172_fu_2140_p2 = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_172_reg_3751 = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__add_ln40_42_reg_3762 = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__sum_3_fu_2179_p3 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__sum_3_reg_3779 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__tmp_22_reg_3784 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_173_reg_3799 = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_174_fu_2289_p2 = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_174_reg_3806 = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__tmp_36_reg_3812 = VL_RAND_RESET_I(10);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__add_ln40_18_reg_3827 = VL_RAND_RESET_Q(56);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__tmp_27_reg_3852 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_150_reg_3877 = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__tmp_29_reg_3882 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__features_0_1_weight_load_1_reg_3902 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__tmp_31_reg_3907 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__tmp_33_reg_3923 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__buf_A_load_61_reg_3928 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__tmp_37_reg_3938 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__tmp_39_reg_3943 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__tmp_41_reg_3948 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__add_ln40_41_fu_3245_p2 = VL_RAND_RESET_Q(56);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__add_ln40_41_reg_3953 = VL_RAND_RESET_Q(56);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__icmp_ln44_reg_3959 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ow_fu_222 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_loop_init = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_sig_allocacmp_ow_load = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__oh_fu_226 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__indvar_flatten_fu_230 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_sig_allocacmp_indvar_flatten_load = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__oc_fu_234 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__indvar_flatten12_fu_238 = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_sig_allocacmp_indvar_flatten12_load = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__features_0_1_weight_ce1_local = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__features_0_1_weight_address1_local = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__features_0_1_weight_address0_local = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__empty_155_fu_1384_p2 = VL_RAND_RESET_I(12);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ref_tmp53_1_i_fu_3301_p8 = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_done_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_done_int = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_NS_fsm = VL_RAND_RESET_I(14);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT____VdfgRegularize_h0e68c41c_0_5 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT____VdfgRegularize_h0e68c41c_0_6 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__features_0_1_bias_U__DOT__rom0[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__features_0_1_weight_U__DOT__rom0[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_CS_fsm = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_enable_reg_pp0_iter0 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_enable_reg_pp0_iter1 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_enable_reg_pp0_iter2 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_enable_reg_pp0_iter0_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__icmp_ln55_reg_1217 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__features_1_conv_2_bias_q0 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__features_1_conv_2_weight_q0 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__features_1_conv_2_weight_q1 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__reg_346 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__reg_350 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__reg_354 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__reg_358 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__reg_362 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__reg_366 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__reg_370 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__reg_374 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__icmp_ln55_reg_1217_pp0_iter1_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__select_ln55_1_fu_473_p3 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__select_ln55_1_reg_1221 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__select_ln55_1_reg_1221_pp0_iter1_reg = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__select_ln56_reg_1229 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__select_ln56_reg_1229_pp0_iter1_reg = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__trunc_ln58_fu_509_p1 = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__trunc_ln58_reg_1236 = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__trunc_ln58_reg_1236_pp0_iter1_reg = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__trunc_ln60_fu_518_p1 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__trunc_ln60_reg_1246 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__tmp_46_reg_1276 = VL_RAND_RESET_I(9);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__tmp_51_reg_1282 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__tmp_60_reg_1290 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__features_1_conv_2_bias_load_reg_1295 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__add_ln60_1_reg_1360 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__tmp_63_reg_1365 = VL_RAND_RESET_I(24);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__add_ln60_5_reg_1370 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__trunc_ln3_reg_1375 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__oc_fu_142 = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__add_ln57_fu_548_p2 = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_loop_init = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__w_idx_fu_146 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__indvar_flatten19_fu_150 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__select_ln56_1_fu_560_p3 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__h_fu_154 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__indvar_flatten32_fu_158 = VL_RAND_RESET_I(10);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_sig_allocacmp_indvar_flatten32_load = VL_RAND_RESET_I(10);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__features_1_conv_2_bias_ce0_local = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__features_1_conv_2_weight_ce1_local = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__and_ln55_fu_467_p2 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__empty_120_fu_618_p2 = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_done_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_done_int = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_loop_exit_ready_pp0_iter1_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_condition_exit_pp0_iter1_stage1 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_NS_fsm = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__features_1_conv_2_bias_U__DOT__rom0[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__features_1_conv_2_weight_U__DOT__rom0[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter0 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter1 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter2 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter0_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__icmp_ln76_reg_1330 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__reg_366 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__reg_371 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__grp_fu_358_p2 = VL_RAND_RESET_Q(47);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__reg_375 = VL_RAND_RESET_Q(47);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__grp_fu_362_p2 = VL_RAND_RESET_Q(47);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__reg_379 = VL_RAND_RESET_Q(47);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__zext_ln76_cast_reg_1290 = VL_RAND_RESET_I(12);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__sum_1_cast122_cast1_reg_1295 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__shl_i_i26_i_i_i43_cast224_cast_reg_1300 = VL_RAND_RESET_Q(47);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__sum_1_cast122_cast_reg_1305 = VL_RAND_RESET_I(31);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__empty_55_reg_1310 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__empty_56_reg_1317 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ow_1_reg_1324 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__icmp_ln76_reg_1330_pp0_iter1_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__zext_ln83_reg_1334 = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__add_ln83_reg_1339 = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__shl_ln83_14_reg_1344 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__zext_ln83_2_reg_1349 = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__zext_ln83_10_reg_1354 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__zext_ln83_10_reg_1354_pp0_iter1_reg = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__zext_ln83_10_reg_1354_pp0_iter2_reg = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__add_ln81_reg_1364 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__icmp_ln82_reg_1370 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__icmp_ln82_reg_1370_pp0_iter1_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__sext_ln83_reg_1377 = VL_RAND_RESET_I(12);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__sext_ln83_2_reg_1383 = VL_RAND_RESET_I(12);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__mul_ln83_4_reg_1408 = VL_RAND_RESET_Q(47);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__add_ln83_11_reg_1413 = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__add_ln83_14_reg_1418 = VL_RAND_RESET_I(12);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__add_ln83_16_reg_1423 = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__add_ln83_18_reg_1428 = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__sum_2_reg_1443 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__icmp_ln82_1_reg_1449 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__sum_4_reg_1466 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__mul_ln83_6_reg_1472 = VL_RAND_RESET_Q(47);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__sum_5_reg_1477 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__mul_ln83_7_reg_1483 = VL_RAND_RESET_Q(47);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__mul_ln83_8_reg_1488 = VL_RAND_RESET_Q(47);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__sum_7_reg_1493 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__sum_8_reg_1500 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__sum_11_reg_1505 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ref_tmp43_1_i_reg_1512 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ow_fu_154 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_loop_init = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_sig_allocacmp_ow_1 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__add_ln83_9_fu_459_p2 = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__add_ln83_13_fu_614_p2 = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__sum_9_fu_1123_p3 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ref_tmp43_1_i_fu_1208_p8 = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_done_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_done_int = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_loop_exit_ready_pp0_iter1_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_condition_exit_pp0_iter1_stage1 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_NS_fsm = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_CS_fsm = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter0 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter1 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter2 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter3 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter4 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter0_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__icmp_ln55_reg_1002 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__features_2_conv_0_1_bias_q0 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__features_2_conv_0_1_weight_q0 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__features_2_conv_0_1_weight_q1 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__reg_278 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__reg_282 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__reg_286 = VL_RAND_RESET_Q(47);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__reg_290 = VL_RAND_RESET_Q(47);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__icmp_ln55_reg_1002_pp0_iter1_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__icmp_ln55_reg_1002_pp0_iter2_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__select_ln55_2_fu_389_p3 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__select_ln55_2_reg_1006 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__oc_2_mid2_reg_1013 = VL_RAND_RESET_I(6);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__select_ln56_reg_1020 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__trunc_ln60_fu_425_p1 = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__trunc_ln60_reg_1028 = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__tmp_65_reg_1054 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__features_2_conv_0_1_weight_load_reg_1060 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__features_2_conv_0_1_weight_load_1_reg_1065 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__add_ln62_reg_1080 = VL_RAND_RESET_I(13);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__add_ln62_reg_1080_pp0_iter2_reg = VL_RAND_RESET_I(13);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__add_ln62_reg_1080_pp0_iter3_reg = VL_RAND_RESET_I(13);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__features_2_conv_0_1_weight_load_2_reg_1100 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__features_2_conv_0_1_weight_load_3_reg_1105 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__features_2_conv_0_1_bias_load_reg_1110 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__tmp_55_reg_1115 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__add_ln60_11_fu_886_p2 = VL_RAND_RESET_Q(56);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__add_ln60_11_reg_1120 = VL_RAND_RESET_Q(56);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__trunc_ln60_4_reg_1126 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ref_tmp23_1_i_reg_1131 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__oc_fu_138 = VL_RAND_RESET_I(6);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_loop_init = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__w_idx_fu_142 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__indvar_flatten39_fu_146 = VL_RAND_RESET_I(10);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__select_ln56_2_fu_461_p3 = VL_RAND_RESET_I(10);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__h_fu_150 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__indvar_flatten52_fu_154 = VL_RAND_RESET_I(13);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_sig_allocacmp_indvar_flatten52_load = VL_RAND_RESET_I(13);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__features_2_conv_0_1_weight_ce1_local = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__features_2_conv_0_1_weight_address1_local = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__features_2_conv_0_1_weight_address0_local = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__features_2_conv_0_1_bias_ce0_local = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__and_ln55_fu_383_p2 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__empty_fu_403_p2 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__empty_115_fu_531_p2 = VL_RAND_RESET_I(10);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ref_tmp23_1_i_fu_943_p8 = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_done_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_done_int = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_loop_exit_ready_pp0_iter1_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_condition_exit_pp0_iter3_stage0 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_idle_pp0_0to2 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_loop_exit_ready_pp0_iter2_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_loop_exit_ready_pp0_iter3_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_NS_fsm = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 96; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__features_2_conv_0_1_bias_U__DOT__rom0[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 96; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__features_2_conv_0_1_weight_U__DOT__rom0[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter0 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter1 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter2 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter0_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__icmp_ln74_reg_1703 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__features_2_conv_1_1_bias_q0 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__features_2_conv_1_1_weight_q0 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__features_2_conv_1_1_weight_q1 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__reg_398 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__reg_402 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__reg_406 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__reg_410 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__reg_414 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__reg_419 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__grp_fu_390_p2 = VL_RAND_RESET_Q(47);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__reg_423 = VL_RAND_RESET_Q(47);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__grp_fu_394_p2 = VL_RAND_RESET_Q(47);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__reg_427 = VL_RAND_RESET_Q(47);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__icmp_ln74_reg_1703_pp0_iter1_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__select_ln74_1_fu_521_p3 = VL_RAND_RESET_I(6);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__select_ln74_1_reg_1707 = VL_RAND_RESET_I(6);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ow_2_mid2_reg_1717 = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__select_ln75_reg_1729 = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__features_2_conv_1_1_bias_load_reg_1746 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__empty_61_fu_616_p1 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__empty_61_reg_1752 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__empty_73_reg_1773 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__icmp_ln82_reg_1780 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__icmp_ln82_reg_1780_pp0_iter1_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__sub_ln83_reg_1787 = VL_RAND_RESET_I(12);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__tmp_7_reg_1792 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__sub_ln83_1_reg_1797 = VL_RAND_RESET_I(10);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__sext_ln83_25_reg_1812 = VL_RAND_RESET_I(13);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__add_ln83_s_fu_808_p3 = VL_RAND_RESET_I(13);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__add_ln83_s_reg_1818 = VL_RAND_RESET_I(13);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__zext_ln83_24_reg_1828 = VL_RAND_RESET_I(13);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__sub_ln83_2_reg_1839 = VL_RAND_RESET_I(10);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__zext_ln83_28_reg_1854 = VL_RAND_RESET_I(13);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__add_ln83_1_fu_896_p5 = VL_RAND_RESET_I(13);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__add_ln83_1_reg_1865 = VL_RAND_RESET_I(13);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__add_ln83_32_reg_1896 = VL_RAND_RESET_I(13);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__add_ln83_34_reg_1901 = VL_RAND_RESET_I(13);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__add_ln83_36_reg_1906 = VL_RAND_RESET_I(13);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__add_ln86_reg_1911 = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__add_ln86_reg_1911_pp0_iter1_reg = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__sum_reg_1916 = VL_RAND_RESET_I(24);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__add_ln83_22_reg_1926 = VL_RAND_RESET_Q(48);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__features_2_conv_1_1_weight_load_8_reg_1941 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__sum_14_reg_1946 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__mul_ln83_13_reg_1952 = VL_RAND_RESET_Q(47);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__tmp_16_reg_1962 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__tmp_17_reg_1967 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__mul_ln83_16_reg_1973 = VL_RAND_RESET_Q(47);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__tmp_19_reg_1978 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__add_ln83_37_fu_1587_p2 = VL_RAND_RESET_Q(56);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__add_ln83_37_reg_1983 = VL_RAND_RESET_Q(56);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__icmp_ln86_reg_1989 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ow_fu_178 = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_loop_init = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_sig_allocacmp_ow_load = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__oh_fu_182 = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__indvar_flatten59_fu_186 = VL_RAND_RESET_I(6);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_sig_allocacmp_indvar_flatten59_load = VL_RAND_RESET_I(6);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__c_fu_190 = VL_RAND_RESET_I(6);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__indvar_flatten72_fu_194 = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_sig_allocacmp_indvar_flatten72_load = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__features_2_conv_1_1_weight_ce1_local = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__features_2_conv_1_1_weight_address1_local = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__features_2_conv_1_1_weight_address0_local = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__buf_exp_address0_local = VL_RAND_RESET_I(13);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__and_ln74_fu_515_p2 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__add_ln83_31_fu_1035_p2 = VL_RAND_RESET_I(13);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ref_tmp43_1_i1_fu_1643_p8 = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_done_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_done_int = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_loop_exit_ready_pp0_iter1_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_condition_exit_pp0_iter1_stage1 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_NS_fsm = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT____VdfgRegularize_h5c84ba7c_0_4 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT____VdfgRegularize_h5c84ba7c_0_5 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT____VdfgRegularize_h5c84ba7c_0_7 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 96; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__features_2_conv_1_1_bias_U__DOT__rom0[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 96; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__features_2_conv_1_1_weight_U__DOT__rom0[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm = VL_RAND_RESET_I(24);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter1 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__icmp_ln55_reg_3927 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__features_2_conv_3_bias_q0 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__features_2_conv_3_weight_q0 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__features_2_conv_3_weight_q1 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_992 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_997 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1001 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1005 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1009 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1013 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1017 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__reg_1021 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__oc_load_reg_3931 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__icmp_ln56_reg_3936 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__icmp_ln57_reg_3944 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__select_ln55_1_fu_1136_p3 = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__select_ln55_1_reg_3949 = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__select_ln55_1_reg_3949_pp0_iter1_reg = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__select_ln56_fu_1161_p3 = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__select_ln56_reg_3957 = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__select_ln56_reg_3957_pp0_iter1_reg = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_79_reg_3962 = VL_RAND_RESET_I(9);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__trunc_ln58_fu_1195_p1 = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__trunc_ln58_reg_3967 = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__trunc_ln58_reg_3967_pp0_iter1_reg = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__trunc_ln60_reg_3977 = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_46_reg_4007 = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_48_reg_4013 = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_49_reg_4021 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_51_reg_4027 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_52_reg_4040 = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_53_reg_4045 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_fu_1348_p2 = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_80_reg_4051 = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_24_reg_4097 = VL_RAND_RESET_I(9);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_27_reg_4103 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_29_reg_4111 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_33_reg_4117 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_35_reg_4129 = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_37_reg_4134 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__features_2_conv_3_bias_load_reg_4140 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__zext_ln60_5_reg_4185 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__add_ln60_1_reg_4210 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__zext_ln60_7_reg_4215 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__zext_ln60_9_reg_4220 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_47_reg_4245 = VL_RAND_RESET_I(24);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__zext_ln60_11_reg_4250 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__zext_ln60_13_reg_4255 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__add_ln60_5_reg_4280 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__zext_ln60_15_reg_4285 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__zext_ln60_17_reg_4290 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_50_reg_4315 = VL_RAND_RESET_I(24);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__zext_ln60_19_reg_4320 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__zext_ln60_21_reg_4325 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__add_ln60_9_reg_4350 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__zext_ln60_23_reg_4355 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__zext_ln60_25_reg_4360 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_54_reg_4385 = VL_RAND_RESET_I(24);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__zext_ln60_27_reg_4390 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__zext_ln60_29_reg_4395 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__add_ln60_13_reg_4420 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__zext_ln60_31_reg_4425 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__zext_ln60_33_reg_4430 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_55_reg_4455 = VL_RAND_RESET_I(24);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__add_ln60_18_reg_4480 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_56_reg_4505 = VL_RAND_RESET_I(24);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__add_ln60_26_reg_4530 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_57_reg_4555 = VL_RAND_RESET_I(24);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__add_ln60_34_reg_4580 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_58_reg_4600 = VL_RAND_RESET_I(24);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__add_ln60_42_reg_4615 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_59_reg_4630 = VL_RAND_RESET_I(24);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__add_ln60_48_reg_4645 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_60_reg_4660 = VL_RAND_RESET_I(24);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__add_ln60_52_reg_4675 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_61_reg_4690 = VL_RAND_RESET_I(24);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__add_ln60_56_reg_4705 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__tmp_62_reg_4710 = VL_RAND_RESET_I(24);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__add_ln60_60_reg_4715 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__trunc_ln63_1_reg_4720 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__oc_fu_268 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_loop_init = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_sig_allocacmp_oc_load = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__w_idx_fu_272 = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__indvar_flatten79_fu_276 = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_sig_allocacmp_indvar_flatten79_load = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__h_fu_280 = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__indvar_flatten92_fu_284 = VL_RAND_RESET_I(9);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_sig_allocacmp_indvar_flatten92_load = VL_RAND_RESET_I(9);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__features_2_conv_3_bias_ce0_local = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__features_2_conv_3_weight_address1_local = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__features_2_conv_3_weight_address0_local = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p0 = VL_RAND_RESET_I(23);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_984_p1 = VL_RAND_RESET_I(24);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p0 = VL_RAND_RESET_I(23);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__grp_fu_988_p1 = VL_RAND_RESET_I(24);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__and_ln55_fu_1131_p2 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__empty_fu_1149_p2 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__sub_ln60_fu_1224_p2 = VL_RAND_RESET_I(9);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_done_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_done_int = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_NS_fsm = VL_RAND_RESET_I(24);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_4 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_16 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 24; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__features_2_conv_3_bias_U__DOT__rom0[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 24; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__features_2_conv_3_weight_U__DOT__rom0[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_CS_fsm = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_enable_reg_pp0_iter0 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_enable_reg_pp0_iter1 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_enable_reg_pp0_iter0_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__icmp_ln113_reg_376 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__add_ln113_reg_380 = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__trunc_ln113_fu_173_p1 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__trunc_ln113_reg_385 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__trunc_ln113_reg_385_pp0_iter1_reg = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__zext_ln115_1_cast_reg_395 = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__add_ln115_reg_415 = VL_RAND_RESET_I(17);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__add_ln115_1_reg_420 = VL_RAND_RESET_I(17);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__c_fu_108 = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_loop_init = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_sig_allocacmp_c_1 = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_done_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_done_int = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_NS_fsm = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT____VdfgRegularize_hf886e175_0_1 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_CS_fsm = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_enable_reg_pp0_iter1 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_enable_reg_pp0_iter2 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_enable_reg_pp0_iter3 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_enable_reg_pp0_iter4 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_enable_reg_pp0_iter5 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_enable_reg_pp0_iter6 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_enable_reg_pp0_iter7 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_block_pp0_stage0_subdone_grp1_done_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_block_pp0_stage0_subdone_grp1 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_block_pp0_stage0_subdone = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_block_pp0_stage0_subdone_grp2_done_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_block_pp0_stage0_subdone_grp2 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ref_tmp_i_i_0_reg_460 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ref_tmp_i_i_0_reg_460_pp0_iter1_reg = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__mnv2_cnn_axi4_out_addr_reg_465 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__i_fu_138 = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_loop_init = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_sig_allocacmp_i_1 = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_done_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_done_int = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_loop_exit_ready_pp0_iter1_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_loop_exit_ready_pp0_iter2_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_loop_exit_ready_pp0_iter3_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_loop_exit_ready_pp0_iter4_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_loop_exit_ready_pp0_iter5_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_loop_exit_ready_pp0_iter6_reg = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_NS_fsm = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT____VdfgRegularize_h2ff13d75_0_8 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__sparsemux_33_4_16_1_1_U82__DOT__dout_tmp = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axilite_ctrl_s_axi_U__DOT__waddr = VL_RAND_RESET_I(6);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axilite_ctrl_s_axi_U__DOT__wmask = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axilite_ctrl_s_axi_U__DOT__int_ap_start = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axilite_ctrl_s_axi_U__DOT__int_auto_restart = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axilite_ctrl_s_axi_U__DOT__int_gie = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axilite_ctrl_s_axi_U__DOT__int_ier = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axilite_ctrl_s_axi_U__DOT__int_isr = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axilite_ctrl_s_axi_U__DOT__int_pixel_in = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axilite_ctrl_s_axi_U__DOT__int_pool1_out = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axilite_ctrl_s_axi_U__DOT__int_start_r = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__AWVALID_Dummy = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__next_wreq = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__wreq_ready = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__valid_length = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__tmp_addr = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__tmp_len = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__tmp_valid = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__next_wdata = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__wrsp_read = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__wrsp_type = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT____Vcellout__fifo_wreq__if_dout = VL_RAND_RESET_Q(64);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT____Vcellout__buff_wdata__if_dout = VL_RAND_RESET_I(18);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__offset_read = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__offset_pack = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__offset_pack_reg = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__offset_valid = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__next_offset = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__len_cnt_buf = VL_RAND_RESET_I(30);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__len_cnt_tmp = VL_RAND_RESET_I(30);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__add_head = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__add_tail = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__pad_oh = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__pad_oh_reg = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__ready_for_data = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__first_pad = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__last_pad = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__first_beat_set = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__last_beat_set = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__single_beat = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__next_beat = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__data_buf = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__strb_buf = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__data_valid = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__fifo_wreq__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__fifo_wreq__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__fifo_wreq__DOT__full_n = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__fifo_wreq__DOT__empty_n = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__fifo_wreq__DOT__dout_vld = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__fifo_wreq__DOT__mOutPtr = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__fifo_wreq__DOT__genblk1__DOT__raddr = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__fifo_wreq__DOT__genblk1__DOT__U_fifo_srl__DOT__genblk1__DOT__mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__fifo_wreq__DOT__genblk1__DOT__U_fifo_srl__DOT____Vlvbound_h59f17dfa__0 = VL_RAND_RESET_Q(64);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__full_n = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__empty_n = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__dout_vld = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__mOutPtr = VL_RAND_RESET_I(7);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__genblk1__DOT__waddr = VL_RAND_RESET_I(6);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__genblk1__DOT__raddr = VL_RAND_RESET_I(6);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__genblk1__DOT__wnext = VL_RAND_RESET_I(6);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__genblk1__DOT__rnext = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 63; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__genblk1__DOT__U_fifo_mem__DOT__mem[__Vi0] = VL_RAND_RESET_I(18);
    }
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__genblk1__DOT__U_fifo_mem__DOT__raddr_reg = VL_RAND_RESET_I(6);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__genblk1__DOT__U_fifo_mem__DOT____Vlvbound_hfaa83ebd__0 = VL_RAND_RESET_I(18);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__fifo_wrsp__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__fifo_wrsp__DOT__dout_vld = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__user_resp__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__user_resp__DOT__full_n = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__user_resp__DOT__empty_n = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__user_resp__DOT__dout_vld = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__user_resp__DOT__mOutPtr = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__wreq_offset__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__bus_wide_gen__DOT__wreq_offset__DOT__dout_vld = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__ost_ctrl_len = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__ost_ctrl_valid = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__next_data = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__data_buf = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__strb_buf = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__ready_for_data = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__len_cnt = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__burst_len = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__next_burst = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__WVALID_Dummy = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__WLAST_Dummy = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__last_resp = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__resp_ready = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__next_req = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__start_addr = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__sect_addr_buf = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__req_handling = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__start_to_4k = VL_RAND_RESET_I(10);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__end_from_4k = VL_RAND_RESET_I(10);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__sect_len = VL_RAND_RESET_I(10);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__sect_len_buf = VL_RAND_RESET_I(10);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__beat_len = VL_RAND_RESET_I(10);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__sect_cnt = VL_RAND_RESET_I(20);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__sect_total = VL_RAND_RESET_I(20);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__sect_total_buf = VL_RAND_RESET_I(20);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__sect_total_tmp = VL_RAND_RESET_I(20);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__first_sect = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__last_sect = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__last_sect_tmp = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__last_sect_buf = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__next_sect = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__burst_valid = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT____Vcellinp__rs_req__s_data = VL_RAND_RESET_Q(64);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__could_multi_bursts__DOT__addr_tmp = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__could_multi_bursts__DOT__addr_buf = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__could_multi_bursts__DOT__addr_step = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__could_multi_bursts__DOT__len_buf = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__could_multi_bursts__DOT__sect_handling = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__could_multi_bursts__DOT__loop_cnt = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__could_multi_bursts__DOT__first_loop = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__could_multi_bursts__DOT__last_loop = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__rs_req__DOT__data_p1 = VL_RAND_RESET_Q(64);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__rs_req__DOT__data_p2 = VL_RAND_RESET_Q(64);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__rs_req__DOT__s_ready_t = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__rs_req__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_burst_conv__DOT__rs_req__DOT__next = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__fifo_burst__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__fifo_burst__DOT__dout_vld = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__rs_req_valid = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__rs_req_in = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__data_out = VL_RAND_RESET_Q(37);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__req_en = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__read_fifo = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__data_push = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__data_pop = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__flying_req = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__last_cnt = VL_RAND_RESET_I(6);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT____VdfgRegularize_hb3c3245c_5_0 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__rs_req__DOT__data_p1 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__rs_req__DOT__data_p2 = VL_RAND_RESET_Q(40);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__rs_req__DOT__s_ready_t = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__rs_req__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__rs_req__DOT__next = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__req_fifo__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__req_fifo__DOT__dout_vld = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__data_fifo__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__data_fifo__DOT__full_n = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__data_fifo__DOT__empty_n = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__data_fifo__DOT__dout_vld = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__data_fifo__DOT__mOutPtr = VL_RAND_RESET_I(6);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__data_fifo__DOT__genblk1__DOT__raddr = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 31; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__data_fifo__DOT__genblk1__DOT__U_fifo_srl__DOT__genblk1__DOT__mem[__Vi0] = VL_RAND_RESET_Q(37);
    }
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__data_fifo__DOT__genblk1__DOT__U_fifo_srl__DOT____Vlvbound_h1c836e11__0 = VL_RAND_RESET_Q(37);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__rs_resp__DOT__s_ready_t = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__rs_resp__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__rs_resp__DOT__next = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__dout_vld = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__ARVALID_Dummy = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__next_rreq = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__rreq_ready = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__tmp_addr = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__tmp_len = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__tmp_valid = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__ready_for_outstanding = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT____Vcellout__fifo_rreq__if_dout = VL_RAND_RESET_Q(64);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT____Vcellout__buff_rdata__if_dout = VL_RAND_RESET_Q(34);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__next_offset = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__first_beat = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__first_data = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__last_data = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__ready_for_data = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__data_buf = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__data_valid = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__split_cnt = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__split_cnt_buf = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__first_split = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__next_split = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__last_split = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__ready_for_split = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT____Vcellout__bus_wide_gen__DOT__rreq_offset__if_dout = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__fifo_rreq__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__fifo_rreq__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__fifo_rreq__DOT__full_n = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__fifo_rreq__DOT__empty_n = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__fifo_rreq__DOT__dout_vld = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__fifo_rreq__DOT__mOutPtr = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__fifo_rreq__DOT__genblk1__DOT__raddr = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__fifo_rreq__DOT__genblk1__DOT__U_fifo_srl__DOT__genblk1__DOT__mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__fifo_rreq__DOT__genblk1__DOT__U_fifo_srl__DOT____Vlvbound_h07545002__0 = VL_RAND_RESET_Q(64);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__full_n = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__empty_n = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__dout_vld = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__mOutPtr = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__genblk1__DOT__waddr = VL_RAND_RESET_I(10);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__genblk1__DOT__raddr = VL_RAND_RESET_I(10);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__genblk1__DOT__wnext = VL_RAND_RESET_I(10);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__genblk1__DOT__rnext = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 1023; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__genblk1__DOT__U_fifo_mem__DOT__mem[__Vi0] = VL_RAND_RESET_Q(34);
    }
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__genblk1__DOT__U_fifo_mem__DOT__raddr_reg = VL_RAND_RESET_I(10);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__genblk1__DOT__U_fifo_mem__DOT____Vlvbound_hd598033e__0 = VL_RAND_RESET_Q(34);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rreq_offset__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rreq_offset__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rreq_offset__DOT__full_n = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rreq_offset__DOT__empty_n = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rreq_offset__DOT__dout_vld = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rreq_offset__DOT__mOutPtr = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rreq_offset__DOT__genblk1__DOT__raddr = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rreq_offset__DOT__genblk1__DOT__U_fifo_srl__DOT__genblk1__DOT__mem[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rreq_offset__DOT__genblk1__DOT__U_fifo_srl__DOT____Vlvbound_he5c4d866__0 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rs_tmp_rdata__DOT__data_p1 = VL_RAND_RESET_Q(33);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rs_tmp_rdata__DOT__data_p2 = VL_RAND_RESET_Q(33);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rs_tmp_rdata__DOT__s_ready_t = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rs_tmp_rdata__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rs_tmp_rdata__DOT__next = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__ost_ctrl_info = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__ost_ctrl_valid = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__next_ctrl = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__last_burst = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__next_burst = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT____Vcellinp__rs_rdata__s_data = VL_RAND_RESET_Q(33);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__out_CTRL_LEN = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__next_req = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__start_addr = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__sect_addr_buf = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__req_handling = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__start_to_4k = VL_RAND_RESET_I(10);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__end_from_4k = VL_RAND_RESET_I(10);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__sect_len = VL_RAND_RESET_I(10);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__sect_len_buf = VL_RAND_RESET_I(10);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__beat_len = VL_RAND_RESET_I(10);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__sect_cnt = VL_RAND_RESET_I(20);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__sect_total = VL_RAND_RESET_I(20);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__sect_total_buf = VL_RAND_RESET_I(20);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__sect_total_tmp = VL_RAND_RESET_I(20);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__first_sect = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__last_sect = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__last_sect_tmp = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__last_sect_buf = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__next_sect = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__burst_valid = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT____Vcellinp__rs_req__s_data = VL_RAND_RESET_Q(64);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__could_multi_bursts__DOT__addr_tmp = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__could_multi_bursts__DOT__addr_buf = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__could_multi_bursts__DOT__addr_step = VL_RAND_RESET_I(11);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__could_multi_bursts__DOT__sect_handling = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__could_multi_bursts__DOT__loop_cnt = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__could_multi_bursts__DOT__first_loop = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__could_multi_bursts__DOT__last_loop = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__rs_req__DOT__data_p1 = VL_RAND_RESET_Q(64);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__rs_req__DOT__data_p2 = VL_RAND_RESET_Q(64);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__rs_req__DOT__s_ready_t = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__rs_req__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__rs_req__DOT__next = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__data_p1 = VL_RAND_RESET_Q(33);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__data_p2 = VL_RAND_RESET_Q(33);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__s_ready_t = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__next = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__full_n = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__empty_n = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__dout_vld = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mOutPtr = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_burst__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_burst__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_burst__DOT__full_n = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_burst__DOT__empty_n = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_burst__DOT__dout_vld = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_burst__DOT__mOutPtr = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_burst__DOT__genblk1__DOT__raddr = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_burst__DOT__genblk1__DOT__U_fifo_srl__DOT__genblk1__DOT__mem[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_burst__DOT__genblk1__DOT__U_fifo_srl__DOT____Vlvbound_h82beb376__0 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_78_0 = VL_RAND_RESET_Q(40);
    vlSelf->__VdfgRegularize_hd87f99a1_132_0 = VL_RAND_RESET_Q(40);
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__s_bvalid__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
