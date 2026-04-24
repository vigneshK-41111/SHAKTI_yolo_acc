set SynModuleInfo {
  {SRCNAME cnn_accel_Pipeline_VITIS_LOOP_42_3_VITIS_LOOP_43_4 MODELNAME cnn_accel_Pipeline_VITIS_LOOP_42_3_VITIS_LOOP_43_4 RTLNAME cnn_accel_cnn_accel_Pipeline_VITIS_LOOP_42_3_VITIS_LOOP_43_4
    SUBMODULES {
      {MODELNAME cnn_accel_mul_32ns_32s_62_2_1 RTLNAME cnn_accel_mul_32ns_32s_62_2_1 BINDTYPE op TYPE mul IMPL auto LATENCY 1 ALLOW_PRAGMA 1}
      {MODELNAME cnn_accel_flow_control_loop_pipe_sequential_init RTLNAME cnn_accel_flow_control_loop_pipe_sequential_init BINDTYPE interface TYPE internal_upc_flow_control INSTNAME cnn_accel_flow_control_loop_pipe_sequential_init_U}
    }
  }
  {SRCNAME cnn_accel_Pipeline_VITIS_LOOP_65_5_VITIS_LOOP_66_6 MODELNAME cnn_accel_Pipeline_VITIS_LOOP_65_5_VITIS_LOOP_66_6 RTLNAME cnn_accel_cnn_accel_Pipeline_VITIS_LOOP_65_5_VITIS_LOOP_66_6}
  {SRCNAME cnn_accel_Pipeline_VITIS_LOOP_83_8_VITIS_LOOP_84_9 MODELNAME cnn_accel_Pipeline_VITIS_LOOP_83_8_VITIS_LOOP_84_9 RTLNAME cnn_accel_cnn_accel_Pipeline_VITIS_LOOP_83_8_VITIS_LOOP_84_9
    SUBMODULES {
      {MODELNAME cnn_accel_mul_28s_28s_28_3_1 RTLNAME cnn_accel_mul_28s_28s_28_3_1 BINDTYPE op TYPE mul IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
    }
  }
  {SRCNAME cnn_accel MODELNAME cnn_accel RTLNAME cnn_accel IS_TOP 1
    SUBMODULES {
      {MODELNAME cnn_accel_tile_in_RAM_T2P_BRAM_1R1W RTLNAME cnn_accel_tile_in_RAM_T2P_BRAM_1R1W BINDTYPE storage TYPE ram_t2p IMPL bram LATENCY 2 ALLOW_PRAGMA 1}
      {MODELNAME cnn_accel_gmem_m_axi RTLNAME cnn_accel_gmem_m_axi BINDTYPE interface TYPE adapter IMPL m_axi}
      {MODELNAME cnn_accel_control_s_axi RTLNAME cnn_accel_control_s_axi BINDTYPE interface TYPE interface_s_axilite}
      {MODELNAME cnn_accel_control_r_s_axi RTLNAME cnn_accel_control_r_s_axi BINDTYPE interface TYPE interface_s_axilite}
    }
  }
}
