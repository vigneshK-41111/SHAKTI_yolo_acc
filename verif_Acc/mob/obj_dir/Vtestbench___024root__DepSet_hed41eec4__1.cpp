// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench___024root.h"

extern const VlUnpacked<CData/*1:0*/, 32> Vtestbench__ConstPool__TABLE_hd59e8662_0;

VL_INLINE_OPT void Vtestbench___024root___nba_comb__TOP__0(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*4:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    CData/*4:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    CData/*4:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    // Body
    vlSelf->tb__DOT__s_bvalid = ((IData)(vlSelf->tb__DOT__s_awvalid) 
                                 & (IData)(vlSelf->tb__DOT__s_wvalid));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__read_fifo 
        = ((IData)(vlSelf->tb__DOT__out_wready) & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT____VdfgRegularize_hb3c3245c_5_0));
    __Vtableidx10 = (((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__resp_ready) 
                      << 4U) | (((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__rs_resp__DOT__s_ready_t) 
                                 << 3U) | (((IData)(vlSelf->tb__DOT__out_bvalid) 
                                            << 2U) 
                                           | (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__rs_resp__DOT__state))));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__rs_resp__DOT__next 
        = Vtestbench__ConstPool__TABLE_hd59e8662_0[__Vtableidx10];
    __Vtableidx16 = (((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__buff_rdata__DOT__full_n) 
                      << 4U) | (((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__s_ready_t) 
                                 << 3U) | (((IData)(vlSelf->tb__DOT__pix_rvalid) 
                                            << 2U) 
                                           | (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state))));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__next 
        = Vtestbench__ConstPool__TABLE_hd59e8662_0[__Vtableidx16];
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__ost_ctrl_valid 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__could_multi_bursts__DOT__sect_handling) 
           & ((~ ((~ (IData)(vlSelf->tb__DOT__pix_arready)) 
                  & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__burst_valid))) 
              & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__full_n)));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__data_fifo__DOT__pop 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__data_fifo__DOT__empty_n) 
           & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__data_fifo__DOT__dout_vld)) 
              | (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__read_fifo)));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__data_pop 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__data_fifo__DOT__dout_vld) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__read_fifo));
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
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__req_en 
        = (((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__flying_req)) 
            & (0U != (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__last_cnt))) 
           | (((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__flying_req) 
               & ((IData)((vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__data_out 
                           >> 0x24U)) & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__data_pop))) 
              & (0U != (0x1fU & ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__last_cnt) 
                                 >> 1U)))));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__next_req 
        = (1U & ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__rs_req__DOT__state) 
                 & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__req_handling)) 
                    | ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__last_sect_tmp) 
                       & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__next_sect)))));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__rs_req_valid 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__req_en) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__req_fifo__DOT__dout_vld));
    __Vtableidx14 = (((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__next_req) 
                      << 4U) | (((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__rs_req__DOT__s_ready_t) 
                                 << 3U) | (((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__ARVALID_Dummy) 
                                            << 2U) 
                                           | (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__rs_req__DOT__state))));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__bus_read__DOT__rreq_burst_conv__DOT__rs_req__DOT__next 
        = Vtestbench__ConstPool__TABLE_hd59e8662_0[__Vtableidx14];
    __Vtableidx8 = (((IData)(vlSelf->tb__DOT__out_awready) 
                     << 4U) | (((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__rs_req__DOT__s_ready_t) 
                                << 3U) | (((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__rs_req_valid) 
                                           << 2U) | (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__rs_req__DOT__state))));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__bus_write__DOT__wreq_throttle__DOT__genblk1__DOT__rs_req__DOT__next 
        = Vtestbench__ConstPool__TABLE_hd59e8662_0[__Vtableidx8];
}

extern const VlUnpacked<CData/*3:0*/, 256> Vtestbench__ConstPool__TABLE_h94891c55_0;
extern const VlUnpacked<CData/*4:0*/, 512> Vtestbench__ConstPool__TABLE_hc760732e_0;

VL_INLINE_OPT void Vtestbench___024root___nba_comb__TOP__1(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_comb__TOP__1\n"); );
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
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*8:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*8:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*4:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    // Body
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388_buf_A_ce1 
        = ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_block_pp0_stage0_subdone_grp0_done_reg)) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_enable_reg_pp0_iter10));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__select_ln56_fu_1161_p3 
        = (7U & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__icmp_ln56_reg_3936)
                   ? 0U : (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__w_idx_fu_272)) 
                 + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__and_ln55_fu_1131_p2)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__select_ln55_1_fu_1136_p3 
        = (7U & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__h_fu_280) 
                 + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__icmp_ln56_reg_3936)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_block_pp0_stage0_subdone_grp2 
        = ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__data_valid)) 
           & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_block_pp0_stage0_subdone_grp2_done_reg)) 
              & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_enable_reg_pp0_iter9)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_loop_init 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483_ap_start_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__select_ln56_1_fu_560_p3 
        = ((0x30U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__indvar_flatten19_fu_150))
            ? 1U : (0x7fU & ((IData)(1U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__indvar_flatten19_fu_150))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__select_ln55_1_fu_473_p3 
        = (0xfU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__h_fu_154) 
                   + (0x30U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__indvar_flatten19_fu_150))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__and_ln55_fu_467_p2 
        = ((0x30U != (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__indvar_flatten19_fu_150)) 
           & (4U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__oc_fu_142)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT____VdfgRegularize_hf886e175_0_1 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_enable_reg_pp0_iter1) 
           & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_CS_fsm) 
              >> 1U));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_NS_fsm 
        = ((1U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_CS_fsm))
            ? ((1U & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483_ap_start_reg)) 
                      & (~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_enable_reg_pp0_iter1))))
                ? 1U : 2U) : ((2U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_CS_fsm))
                               ? 1U : 0U));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483_ap_ready 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_enable_reg_pp0_iter0_reg) 
           & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__icmp_ln113_reg_376) 
              & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_CS_fsm) 
                 >> 1U)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_enable_reg_pp0_iter0 
        = ((1U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_CS_fsm))
            ? (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483_ap_start_reg)
            : (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_enable_reg_pp0_iter0_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_loop_init 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471_ap_start_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__select_ln56_2_fu_461_p3 
        = ((0x240U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__indvar_flatten39_fu_146))
            ? 1U : (0x3ffU & ((IData)(1U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__indvar_flatten39_fu_146))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__select_ln55_2_fu_389_p3 
        = (0xfU & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__h_fu_150) 
                   + (0x240U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__indvar_flatten39_fu_146))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__and_ln55_fu_383_p2 
        = ((0x240U != (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__indvar_flatten39_fu_146)) 
           & (0x30U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__oc_fu_138)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_loop_init 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410_ap_start_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_block_pp0_stage0_subdone_grp2 
        = ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__full_n)) 
           & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_block_pp0_stage0_subdone_grp2_done_reg)) 
              & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_enable_reg_pp0_iter2)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410_ap_ready 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_enable_reg_pp0_iter0_reg) 
           & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__icmp_ln55_reg_1217) 
              & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_CS_fsm) 
                 >> 3U)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__features_1_conv_2_bias_ce0_local 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_enable_reg_pp0_iter0_reg) 
           & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_CS_fsm) 
              >> 1U));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410_buf_B_ce1 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_enable_reg_pp0_iter2) 
           & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_CS_fsm) 
              >> 1U));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_enable_reg_pp0_iter0 
        = ((1U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_CS_fsm))
            ? (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410_ap_start_reg)
            : (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_enable_reg_pp0_iter0_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_condition_exit_pp0_iter1_stage1 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_enable_reg_pp0_iter1) 
           & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_CS_fsm) 
               >> 1U) & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__icmp_ln55_reg_1217_pp0_iter1_reg)));
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
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_done_int 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_loop_exit_ready_pp0_iter1_reg) 
            & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_CS_fsm) 
               >> 1U)) | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_done_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_block_pp0_stage0_subdone_grp1 
        = (((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__fifo_wreq__DOT__full_n)) 
            & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_block_pp0_stage0_subdone_grp1_done_reg)) 
               & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_enable_reg_pp0_iter1))) 
           | ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__user_resp__DOT__dout_vld)) 
              & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_block_pp0_stage0_subdone_grp1_done_reg)) 
                 & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_enable_reg_pp0_iter7))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447_ap_ready 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter0_reg) 
           & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__icmp_ln55_reg_1002) 
              & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_CS_fsm) 
                 >> 1U)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447_buf_exp_ce1 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter4) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_CS_fsm));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_condition_exit_pp0_iter3_stage0 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter3) 
           & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_CS_fsm) 
              & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__icmp_ln55_reg_1002_pp0_iter2_reg)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__features_2_conv_0_1_bias_ce0_local 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter1) 
           & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_CS_fsm) 
              >> 1U));
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT____VdfgRegularize_h3c5d5d61_0_6 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter1) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_CS_fsm));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_done_int 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_loop_exit_ready_pp0_iter3_reg) 
            & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_CS_fsm)) 
           | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_done_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_loop_init 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447_ap_start_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter0 
        = ((1U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_CS_fsm))
            ? (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447_ap_start_reg)
            : (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter0_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_NS_fsm 
        = vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_CS_fsm;
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT____VdfgRegularize_h2ff13d75_0_8 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_CS_fsm) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521_ap_start_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_loop_init 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521_ap_start_reg));
    if (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter0_reg) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459_ap_ready 
            = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__icmp_ln74_reg_1703) 
               & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
                  >> 4U));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__features_2_conv_1_1_weight_address1_local 
            = (0x7fU & ((0x10U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm))
                         ? ((IData)(6U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__empty_61_reg_1752))
                         : ((8U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm))
                             ? ((IData)(4U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__empty_61_reg_1752))
                             : ((4U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm))
                                 ? ((IData)(2U) + (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__empty_61_reg_1752))
                                 : ((2U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm))
                                     ? (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__empty_61_fu_616_p1)
                                     : 0U)))));
    } else {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459_ap_ready = 0U;
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__features_2_conv_1_1_weight_address1_local = 0U;
    }
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
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT____VdfgRegularize_h5c84ba7c_0_4 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter1) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm));
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
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459_buf_A_ce1 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter2) 
           & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
              >> 1U));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT____VdfgRegularize_h5c84ba7c_0_5 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter0_reg) 
           & (IData)((0U != (0x1cU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm)))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_condition_exit_pp0_iter1_stage1 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter1) 
           & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
               >> 1U) & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__icmp_ln74_reg_1703_pp0_iter1_reg)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_done_int 
        = ((((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
             >> 1U) & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_loop_exit_ready_pp0_iter1_reg)) 
           | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_done_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter0 
        = ((1U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm))
            ? (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459_ap_start_reg)
            : (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter0_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_loop_init 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459_ap_start_reg));
    vlSelf->tb__DOT__dut__DOT__p_cast_fu_596_p3 = (
                                                   (0x18U 
                                                    & ((IData)(vlSelf->tb__DOT__dut__DOT__c_fu_224) 
                                                       << 3U)) 
                                                   | (7U 
                                                      & (IData)(vlSelf->tb__DOT__dut__DOT__c_fu_224)));
    vlSelf->tb__DOT__dut__DOT__thr_add1_fu_762_p3 = 
        (((IData)(vlSelf->tb__DOT__dut__DOT__tmp_5_reg_1007) 
          << 4U) | (IData)(vlSelf->tb__DOT__dut__DOT__c_fu_224));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422_ap_ready 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter0_reg) 
           & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__icmp_ln76_reg_1330) 
              & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm) 
                 >> 4U)));
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
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422_buf_B_ce1 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter0_reg) 
           & (IData)((0U != (0x1eU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm)))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422_buf_A_ce1 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter2) 
           & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm) 
              >> 1U));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_condition_exit_pp0_iter1_stage1 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter1) 
           & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm) 
               >> 1U) & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__icmp_ln76_reg_1330_pp0_iter1_reg)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_done_int 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_loop_exit_ready_pp0_iter1_reg) 
            & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm) 
               >> 1U)) | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_done_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_loop_init 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422_ap_start_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter0 
        = ((1U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm))
            ? (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422_ap_start_reg)
            : (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_enable_reg_pp0_iter0_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_block_pp0_stage0_subdone_grp1 
        = ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__fifo_rreq__DOT__full_n)) 
           & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_block_pp0_stage0_subdone_grp1_done_reg)) 
              & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_enable_reg_pp0_iter1)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_NS_fsm 
        = vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_CS_fsm;
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT____VdfgRegularize_h3e66546a_0_5 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_CS_fsm) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388_ap_start_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_loop_init 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388_ap_start_reg));
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
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398_buf_B_ce1 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter1) 
           & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
              >> 6U));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT____VdfgRegularize_h0e68c41c_0_5 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter1) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT____VdfgRegularize_h0e68c41c_0_6 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
           & (IData)((0U != (0x3ffcU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm)))));
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
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398_ap_ready 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
           & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__icmp_ln30_reg_3361) 
              & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
                 >> 6U)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0 
        = ((1U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm))
            ? (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398_ap_start_reg)
            : (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_loop_init 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_loop_init_int) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398_ap_start_reg));
    if ((0x2000U & vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)) {
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
        vlSelf->tb__DOT__dut__DOT__buf_exp_ce1 = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT____VdfgRegularize_h5c84ba7c_0_5) 
                                                  | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT____VdfgRegularize_h5c84ba7c_0_4));
    } else {
        vlSelf->tb__DOT__dut__DOT__buf_exp_address1 
            = (0x1fffU & ((0x800U & vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)
                           ? (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__add_ln62_reg_1080_pp0_iter3_reg)
                           : 0U));
        vlSelf->tb__DOT__dut__DOT__buf_exp_ce1 = ((1U 
                                                   & (vlSelf->tb__DOT__dut__DOT__ap_CS_fsm 
                                                      >> 0xbU)) 
                                                  && (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447_buf_exp_ce1));
    }
    tb__DOT__dut__DOT____VdfgExtracted_h5811251e__0 
        = (IData)((0U != (0xc0000U & vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)));
    tb__DOT__dut__DOT____VdfgExtracted_h4fbf0135__0 
        = (IData)((0U != (3U & vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__features_2_conv_3_bias_ce0_local 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) 
           & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
              >> 1U));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0 
        = ((1U & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)
            ? (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471_ap_start_reg)
            : (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg));
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
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471_buf_B_ce1 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter1) 
           & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
              >> 5U));
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
    if (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_enable_reg_pp0_iter0_reg) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_16 
            = (1U & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                     >> 0x11U));
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471_ap_ready 
            = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__icmp_ln55_reg_3927) 
               & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                  >> 5U));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_3 
            = (IData)((0U != (0xa000U & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_15 
            = (1U & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                     >> 0xbU));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_14 
            = (1U & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                     >> 9U));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_13 
            = (1U & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                     >> 7U));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_12 
            = (1U & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                     >> 5U));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_11 
            = (1U & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                     >> 3U));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_10 
            = (1U & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                     >> 0x10U));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_9 
            = (1U & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                     >> 0xeU));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_8 
            = (1U & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                     >> 0xcU));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_7 
            = (1U & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                     >> 0xaU));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_6 
            = (1U & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                     >> 8U));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_5 
            = (1U & (vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm 
                     >> 6U));
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_2 
            = (IData)((0U != (0x14U & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm)));
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
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_16 = 0U;
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471_ap_ready = 0U;
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_3 = 0U;
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_15 = 0U;
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_14 = 0U;
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_13 = 0U;
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_12 = 0U;
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_11 = 0U;
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_10 = 0U;
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_9 = 0U;
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_8 = 0U;
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_7 = 0U;
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_6 = 0U;
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_5 = 0U;
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_2 = 0U;
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__features_2_conv_3_weight_address1_local = 0U;
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__features_2_conv_3_weight_address0_local = 0U;
    }
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT____VdfgRegularize_hf886e175_0_2 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_loop_init) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_CS_fsm));
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__empty_fu_487_p2 
        = ((0x30U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__indvar_flatten19_fu_150)) 
           | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__and_ln55_fu_467_p2));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_done_int 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483_ap_ready) 
            & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_CS_fsm) 
               >> 1U)) | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_done_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483_buf_B_ce0 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_enable_reg_pp0_iter0) 
            & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_CS_fsm)) 
           | ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_enable_reg_pp0_iter0_reg) 
              & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_CS_fsm) 
                 >> 1U)));
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT____VdfgRegularize_hf269a7ea_0_17 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_loop_init) 
           & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__ap_CS_fsm);
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__empty_fu_403_p2 
        = ((0x240U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__indvar_flatten39_fu_146)) 
           | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__and_ln55_fu_383_p2));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_sig_allocacmp_indvar_flatten32_load 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_loop_init) 
            & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__ap_CS_fsm))
            ? 0U : (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__indvar_flatten32_fu_158));
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
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT____VdfgRegularize_h2ff13d75_0_5 
        = (1U & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_block_pp0_stage0_subdone_grp1)) 
                 & (~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_block_pp0_stage0_subdone_grp1_done_reg))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_block_pp0_stage0_subdone 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_block_pp0_stage0_subdone_grp1) 
           | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_block_pp0_stage0_subdone_grp2));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__features_2_conv_0_1_weight_ce1_local 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter0_reg) 
            & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_CS_fsm) 
               >> 1U)) | (IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT____VdfgRegularize_h3c5d5d61_0_6));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447_buf_B_ce0 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__features_2_conv_0_1_bias_ce0_local) 
           | (IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT____VdfgRegularize_h3c5d5d61_0_6));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_sig_allocacmp_indvar_flatten52_load 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_loop_init) 
            & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_CS_fsm))
            ? 0U : (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__indvar_flatten52_fu_154));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_idle_pp0_0to2 
        = (1U & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter2)) 
                 & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter1)) 
                    & (~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__ap_enable_reg_pp0_iter0)))));
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT____VdfgRegularize_h2ff13d75_0_7 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_loop_init) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_CS_fsm));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__features_2_conv_1_1_weight_ce1_local 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_enable_reg_pp0_iter0_reg) 
            & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm) 
               >> 1U)) | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT____VdfgRegularize_h5c84ba7c_0_5));
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
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT____VdfgRegularize_h5c84ba7c_0_7 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_loop_init) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_CS_fsm));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422_ap_done 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_done_int) 
           | ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422_ap_start_reg)) 
              & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_sig_allocacmp_ow_1 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_loop_init) 
            & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_CS_fsm))
            ? 0U : (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ow_fu_154));
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
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_block_pp0_stage0_subdone 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_block_pp0_stage0_subdone_grp2) 
           | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_block_pp0_stage0_subdone_grp1));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_sig_allocacmp_i_2 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_loop_init) 
            & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_CS_fsm))
            ? 0U : (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__i_fu_66));
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
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__features_0_1_weight_ce1_local 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_enable_reg_pp0_iter0_reg) 
            & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm) 
               >> 1U)) | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT____VdfgRegularize_h0e68c41c_0_6));
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
    tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT____VdfgRegularize_h0e68c41c_0_9 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_loop_init) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__ap_CS_fsm));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__push 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__full_n) 
           & ((IData)(tb__DOT__dut__DOT____VdfgExtracted_h5811251e__0) 
              & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_enable_reg_pp0_iter2) 
                 & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_block_pp0_stage0_subdone_grp2)) 
                    & (~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_block_pp0_stage0_subdone_grp2_done_reg))))));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__fifo_rreq__DOT__push 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__fifo_rreq__DOT__full_n) 
           & ((IData)(tb__DOT__dut__DOT____VdfgExtracted_h4fbf0135__0) 
              & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_CS_fsm) 
                  & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_enable_reg_pp0_iter1)) 
                 & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_block_pp0_stage0_subdone_grp1)) 
                    & (~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_block_pp0_stage0_subdone_grp1_done_reg))))));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__ready_for_data 
        = (1U & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__data_valid)) 
                 | ((IData)(tb__DOT__dut__DOT____VdfgExtracted_h4fbf0135__0) 
                    & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_enable_reg_pp0_iter9) 
                       & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_block_pp0_stage0_subdone_grp2)) 
                          & (~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_block_pp0_stage0_subdone_grp2_done_reg)))))));
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
    if ((0x8000U & vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)) {
        vlSelf->tb__DOT__dut__DOT__buf_A_address0 = tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address0_local;
        vlSelf->tb__DOT__dut__DOT__buf_A_address1 = 
            (0xfffU & (IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471__DOT__buf_A_address1_local));
        vlSelf->tb__DOT__dut__DOT__buf_A_ce1 = vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_32_fu_471_buf_A_ce0;
    } else {
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
        if ((0x2000U & vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)) {
            vlSelf->tb__DOT__dut__DOT__buf_A_address1 
                = (0xfffU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__add_ln86_reg_1911_pp0_iter1_reg));
            vlSelf->tb__DOT__dut__DOT__buf_A_ce1 = vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459_buf_A_ce1;
        } else if ((0x100U & vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)) {
            vlSelf->tb__DOT__dut__DOT__buf_A_address1 
                = (0xfffU & vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__zext_ln83_10_reg_1354_pp0_iter2_reg);
            vlSelf->tb__DOT__dut__DOT__buf_A_ce1 = vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422_buf_A_ce1;
        } else if ((0x200U & vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)) {
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
            vlSelf->tb__DOT__dut__DOT__buf_A_ce1 = vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410_buf_A_ce0;
        } else if ((8U & vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)) {
            vlSelf->tb__DOT__dut__DOT__buf_A_address1 
                = (0xfffU & (IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT__buf_A_address1_local));
            vlSelf->tb__DOT__dut__DOT__buf_A_ce1 = 
                ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT____VdfgRegularize_h0e68c41c_0_6) 
                 | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_30_1_VITIS_LOOP_31_2_VITIS_LOOP_32_3_fu_398__DOT____VdfgRegularize_h0e68c41c_0_5));
        } else {
            vlSelf->tb__DOT__dut__DOT__buf_A_address1 
                = (0xfffU & ((2U & vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)
                              ? vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__zext_ln168_reg_165_pp0_iter9_reg
                              : 0U));
            vlSelf->tb__DOT__dut__DOT__buf_A_ce1 = 
                ((1U & (vlSelf->tb__DOT__dut__DOT__ap_CS_fsm 
                        >> 1U)) && (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388_buf_A_ce1));
        }
    }
    if (tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT____VdfgRegularize_hf886e175_0_2) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_sig_allocacmp_c_1 = 0U;
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__trunc_ln113_fu_173_p1 = 0U;
    } else {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_sig_allocacmp_c_1 
            = vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__c_fu_108;
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__trunc_ln113_fu_173_p1 
            = (0xfU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__c_fu_108));
    }
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__add_ln57_fu_548_p2 
        = (7U & ((IData)(1U) + ((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__empty_fu_487_p2)
                                 ? 0U : (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__oc_fu_142))));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__trunc_ln60_fu_518_p1 
        = (1U & ((~ (IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__empty_fu_487_p2)) 
                 & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__oc_fu_142)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__trunc_ln58_fu_509_p1 
        = ((IData)(tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__empty_fu_487_p2)
            ? 0U : (3U & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_3_fu_410__DOT__oc_fu_142)));
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
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__trunc_ln60_fu_425_p1 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__empty_fu_403_p2)
            ? 0U : (0x1fU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_55_1_VITIS_LOOP_56_2_VITIS_LOOP_57_31_fu_447__DOT__oc_fu_138)));
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
    if (tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT____VdfgRegularize_h2ff13d75_0_7) {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_sig_allocacmp_i_1 = 0U;
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__tmp_1_fu_284_p34 = 0U;
    } else {
        vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_sig_allocacmp_i_1 
            = vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__i_fu_138;
        tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__tmp_1_fu_284_p34 
            = (0xfU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__i_fu_138));
    }
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
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__add_ln83_9_fu_459_p2 
        = (0x7ffU & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_76_3_fu_422__DOT__ap_sig_allocacmp_ow_1) 
                      << 3U) + (IData)(vlSelf->tb__DOT__dut__DOT__thr_add1_reg_1023)));
    if ((0x20000U & vlSelf->tb__DOT__dut__DOT__ap_CS_fsm)) {
        vlSelf->tb__DOT__dut__DOT__buf_B_ce1 = vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483_buf_B_ce0;
        if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_enable_reg_pp0_iter0_reg) 
             & ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_CS_fsm) 
                >> 1U))) {
            vlSelf->tb__DOT__dut__DOT__buf_B_address1 
                = (0xfffU & (0x20U | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__trunc_ln113_reg_385)));
            vlSelf->tb__DOT__dut__DOT__buf_B_address0 
                = (0xfffU & (0x3fU & VL_EXTENDS_II(6,5, (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__zext_ln115_1_cast_reg_395))));
        } else if (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_enable_reg_pp0_iter0) 
                    & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__ap_CS_fsm))) {
            vlSelf->tb__DOT__dut__DOT__buf_B_address1 
                = (0xfffU & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__trunc_ln113_fu_173_p1));
            vlSelf->tb__DOT__dut__DOT__buf_B_address0 
                = (0xfffU & (0x10U | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_113_1_fu_483__DOT__trunc_ln113_fu_173_p1)));
        } else {
            vlSelf->tb__DOT__dut__DOT__buf_B_address1 
                = (0xfffU & 0U);
            vlSelf->tb__DOT__dut__DOT__buf_B_address0 
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
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_done_int 
        = (((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_block_pp0_stage0_subdone)) 
            & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_loop_exit_ready_pp0_iter9_reg)) 
           | (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_done_reg));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388_ap_ready 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT____VdfgRegularize_h3e66546a_0_5) 
           & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_block_pp0_stage0_subdone)) 
              & (0x6c0U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_166_1_fu_388__DOT__ap_sig_allocacmp_i_2))));
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
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__genblk1__DOT__wnext 
        = (0x3fU & ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__push)
                     ? ((0x3eU == (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__genblk1__DOT__waddr))
                         ? 0U : ((IData)(1U) + (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__genblk1__DOT__waddr)))
                     : (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__buff_wdata__DOT__genblk1__DOT__waddr)));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__next_split 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__ready_for_split) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__ready_for_data));
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
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__user_resp__DOT__pop 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__user_resp__DOT__empty_n) 
           & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_m_axi_U__DOT__store_unit_0__DOT__user_resp__DOT__dout_vld)) 
              | (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_out_0_BREADY)));
    tb__DOT__dut__DOT__ap_block_state20_on_subcall_done 
        = (1U & ((~ ((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__ap_done_int) 
                     | ((~ (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521_ap_start_reg)) 
                        & (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_186_2_fu_521__DOT__flow_control_loop_pipe_sequential_init_U__DOT__ap_done_cache)))) 
                 & (~ (IData)(vlSelf->tb__DOT__dut__DOT__icmp_ln154_reg_870))));
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
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__and_ln74_fu_515_p2 
        = ((0x24U != (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_sig_allocacmp_indvar_flatten59_load)) 
           & (6U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_sig_allocacmp_ow_load)));
    vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__select_ln74_1_fu_521_p3 
        = (0x3fU & (((IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT____VdfgRegularize_h5c84ba7c_0_7)
                      ? 0U : (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__c_fu_190)) 
                    + (0x24U == (IData)(vlSelf->tb__DOT__dut__DOT__grp_mobilenet_top_Pipeline_VITIS_LOOP_74_1_VITIS_LOOP_75_2_VITIS_LOOP_76_3_fu_459__DOT__ap_sig_allocacmp_indvar_flatten59_load))));
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
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__first_split 
        = ((0U == (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__split_cnt_buf)) 
           & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__next_split));
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__last_split 
        = (((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__split_cnt) 
            == ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__last_data)
                 ? (3U & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT____Vcellout__bus_wide_gen__DOT__rreq_offset__if_dout))
                 : 3U)) & (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__next_split));
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
    vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rreq_offset__DOT__pop 
        = ((IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rreq_offset__DOT__empty_n) 
           & ((~ (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__rreq_offset__DOT__dout_vld)) 
              | (IData)(vlSelf->tb__DOT__dut__DOT__mnv2_cnn_axi4_pix_m_axi_U__DOT__load_unit_0__DOT__bus_wide_gen__DOT__next_offset)));
}

void Vtestbench___024root___timing_resume(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h95c06bd6__0.resume("@(posedge tb.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hf3634ce6__0.resume("@([changed] tb.s_bvalid)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtestbench___024root___timing_commit(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h95c06bd6__0.commit("@(posedge tb.clk)");
    }
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hf3634ce6__0.commit("@([changed] tb.s_bvalid)");
    }
}

void Vtestbench___024root___eval_triggers__act(Vtestbench___024root* vlSelf);
void Vtestbench___024root___eval_act(Vtestbench___024root* vlSelf);

bool Vtestbench___024root___eval_phase__act(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtestbench___024root___eval_triggers__act(vlSelf);
    Vtestbench___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtestbench___024root___timing_resume(vlSelf);
        Vtestbench___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtestbench___024root___eval_nba(Vtestbench___024root* vlSelf);

bool Vtestbench___024root___eval_phase__nba(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtestbench___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__nba(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestbench___024root___eval(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtestbench___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("testbench.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtestbench___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("testbench.v", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtestbench___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtestbench___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtestbench___024root___eval_debug_assertions(Vtestbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
