# This script segment is generated automatically by AutoPilot

set name cnn_accel_mul_18s_18s_18_1_1
if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $name BINDTYPE {op} TYPE {mul} IMPL {auto} LATENCY 0 ALLOW_PRAGMA 1
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 225 \
    name conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_9 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_9 \
    op interface \
    ports { conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_9_address0 { O 10 vector } conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_9_ce0 { O 1 bit } conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_9_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 226 \
    name conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_6 \
    op interface \
    ports { conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_6_address0 { O 10 vector } conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_6_ce0 { O 1 bit } conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_6_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 227 \
    name conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_5 \
    op interface \
    ports { conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_5_address0 { O 10 vector } conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_5_ce0 { O 1 bit } conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_5_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 228 \
    name conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_4 \
    op interface \
    ports { conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_4_address0 { O 10 vector } conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_4_ce0 { O 1 bit } conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_4_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 229 \
    name conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_3 \
    op interface \
    ports { conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_3_address0 { O 10 vector } conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_3_ce0 { O 1 bit } conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_3_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 230 \
    name conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_2 \
    op interface \
    ports { conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_2_address0 { O 10 vector } conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_2_ce0 { O 1 bit } conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_2_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 231 \
    name conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_1 \
    op interface \
    ports { conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_1_address0 { O 10 vector } conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_1_ce0 { O 1 bit } conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_1_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 232 \
    name conv_mulmulmullayer_signed_char_signed_char_int_int_int_int_signed_char_signed \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename conv_mulmulmullayer_signed_char_signed_char_int_int_int_int_signed_char_signed \
    op interface \
    ports { conv_mulmulmullayer_signed_char_signed_char_int_int_int_int_signed_char_signed_address0 { O 10 vector } conv_mulmulmullayer_signed_char_signed_char_int_int_int_int_signed_char_signed_ce0 { O 1 bit } conv_mulmulmullayer_signed_char_signed_char_int_int_int_int_signed_char_signed_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'conv_mulmulmullayer_signed_char_signed_char_int_int_int_int_signed_char_signed'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 233 \
    name conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_8 \
    op interface \
    ports { conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_8_address0 { O 10 vector } conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_8_ce0 { O 1 bit } conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_8_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 234 \
    name conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_7 \
    op interface \
    ports { conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_7_address0 { O 10 vector } conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_7_ce0 { O 1 bit } conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_7_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'conv_layer_signed_char_signed_char_int_int_int_int_signed_char_signed_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 235 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_10 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_10 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_10_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_10_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_10_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 236 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_11 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_11 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_11_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_11_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_11_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 237 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_12 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_12 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_12_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_12_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_12_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 238 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_13 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_13 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_13_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_13_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_13_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 239 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_14 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_14 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_14_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_14_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_14_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 240 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_15 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_15 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_15_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_15_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_15_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 241 \
    name cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1 \
    op interface \
    ports { cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_address1 { O 18 vector } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_ce1 { O 1 bit } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_we1 { O 1 bit } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_d1 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 242 \
    name cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_12 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_12 \
    op interface \
    ports { cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_12_address1 { O 18 vector } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_12_ce1 { O 1 bit } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_12_we1 { O 1 bit } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_12_d1 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 243 \
    name cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_13 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_13 \
    op interface \
    ports { cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_13_address1 { O 18 vector } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_13_ce1 { O 1 bit } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_13_we1 { O 1 bit } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_13_d1 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 244 \
    name cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_14 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_14 \
    op interface \
    ports { cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_14_address1 { O 18 vector } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_14_ce1 { O 1 bit } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_14_we1 { O 1 bit } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_14_d1 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 245 \
    name cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_15 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_15 \
    op interface \
    ports { cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_15_address1 { O 18 vector } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_15_ce1 { O 1 bit } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_15_we1 { O 1 bit } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_15_d1 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 246 \
    name cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_16 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_16 \
    op interface \
    ports { cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_16_address1 { O 18 vector } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_16_ce1 { O 1 bit } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_16_we1 { O 1 bit } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_16_d1 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_16'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 247 \
    name cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_17 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_17 \
    op interface \
    ports { cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_17_address1 { O 18 vector } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_17_ce1 { O 1 bit } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_17_we1 { O 1 bit } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_17_d1 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_17'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 248 \
    name cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_18 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_18 \
    op interface \
    ports { cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_18_address1 { O 18 vector } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_18_ce1 { O 1 bit } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_18_we1 { O 1 bit } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_18_d1 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_18'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 249 \
    name cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_19 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_19 \
    op interface \
    ports { cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_19_address1 { O 18 vector } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_19_ce1 { O 1 bit } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_19_we1 { O 1 bit } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_19_d1 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_19'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 250 \
    name cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_20 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_20 \
    op interface \
    ports { cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_20_address1 { O 18 vector } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_20_ce1 { O 1 bit } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_20_we1 { O 1 bit } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_20_d1 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_20'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 251 \
    name p_ZZ9cnn_accelPVaS0_iE4buf1_10 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ9cnn_accelPVaS0_iE4buf1_10 \
    op interface \
    ports { p_ZZ9cnn_accelPVaS0_iE4buf1_10_address1 { O 18 vector } p_ZZ9cnn_accelPVaS0_iE4buf1_10_ce1 { O 1 bit } p_ZZ9cnn_accelPVaS0_iE4buf1_10_we1 { O 1 bit } p_ZZ9cnn_accelPVaS0_iE4buf1_10_d1 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ9cnn_accelPVaS0_iE4buf1_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 252 \
    name p_ZZ9cnn_accelPVaS0_iE4buf1_11 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ9cnn_accelPVaS0_iE4buf1_11 \
    op interface \
    ports { p_ZZ9cnn_accelPVaS0_iE4buf1_11_address1 { O 18 vector } p_ZZ9cnn_accelPVaS0_iE4buf1_11_ce1 { O 1 bit } p_ZZ9cnn_accelPVaS0_iE4buf1_11_we1 { O 1 bit } p_ZZ9cnn_accelPVaS0_iE4buf1_11_d1 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ9cnn_accelPVaS0_iE4buf1_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 253 \
    name p_ZZ9cnn_accelPVaS0_iE4buf1_12 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ9cnn_accelPVaS0_iE4buf1_12 \
    op interface \
    ports { p_ZZ9cnn_accelPVaS0_iE4buf1_12_address1 { O 18 vector } p_ZZ9cnn_accelPVaS0_iE4buf1_12_ce1 { O 1 bit } p_ZZ9cnn_accelPVaS0_iE4buf1_12_we1 { O 1 bit } p_ZZ9cnn_accelPVaS0_iE4buf1_12_d1 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ9cnn_accelPVaS0_iE4buf1_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 254 \
    name p_ZZ9cnn_accelPVaS0_iE4buf1_13 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ9cnn_accelPVaS0_iE4buf1_13 \
    op interface \
    ports { p_ZZ9cnn_accelPVaS0_iE4buf1_13_address1 { O 18 vector } p_ZZ9cnn_accelPVaS0_iE4buf1_13_ce1 { O 1 bit } p_ZZ9cnn_accelPVaS0_iE4buf1_13_we1 { O 1 bit } p_ZZ9cnn_accelPVaS0_iE4buf1_13_d1 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ9cnn_accelPVaS0_iE4buf1_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 255 \
    name p_ZZ9cnn_accelPVaS0_iE4buf1_14 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ9cnn_accelPVaS0_iE4buf1_14 \
    op interface \
    ports { p_ZZ9cnn_accelPVaS0_iE4buf1_14_address1 { O 18 vector } p_ZZ9cnn_accelPVaS0_iE4buf1_14_ce1 { O 1 bit } p_ZZ9cnn_accelPVaS0_iE4buf1_14_we1 { O 1 bit } p_ZZ9cnn_accelPVaS0_iE4buf1_14_d1 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ9cnn_accelPVaS0_iE4buf1_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 256 \
    name p_ZZ9cnn_accelPVaS0_iE4buf1_15 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ9cnn_accelPVaS0_iE4buf1_15 \
    op interface \
    ports { p_ZZ9cnn_accelPVaS0_iE4buf1_15_address1 { O 18 vector } p_ZZ9cnn_accelPVaS0_iE4buf1_15_ce1 { O 1 bit } p_ZZ9cnn_accelPVaS0_iE4buf1_15_we1 { O 1 bit } p_ZZ9cnn_accelPVaS0_iE4buf1_15_d1 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ9cnn_accelPVaS0_iE4buf1_15'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 221 \
    name ty \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ty \
    op interface \
    ports { ty { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 222 \
    name H \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_H \
    op interface \
    ports { H { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 223 \
    name empty \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_empty \
    op interface \
    ports { empty { I 18 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 224 \
    name tx \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_tx \
    op interface \
    ports { tx { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


# flow_control definition:
set InstName cnn_accel_flow_control_loop_pipe_sequential_init_U
set CompName cnn_accel_flow_control_loop_pipe_sequential_init
set name flow_control_loop_pipe_sequential_init
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_UPC_flow_control] == "::AESL_LIB_VIRTEX::xil_gen_UPC_flow_control"} {
eval "::AESL_LIB_VIRTEX::xil_gen_UPC_flow_control { \
    name ${name} \
    prefix cnn_accel_ \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_UPC_flow_control, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $CompName BINDTYPE interface TYPE internal_upc_flow_control INSTNAME $InstName
}


