# This script segment is generated automatically by AutoPilot

set name cnn_accel_mul_6ns_31ns_36_2_1
if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $name BINDTYPE {op} TYPE {mul} IMPL {auto} LATENCY 1 ALLOW_PRAGMA 1
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
    id 3349 \
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
    id 3350 \
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
    id 3351 \
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
    id 3352 \
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
    id 3353 \
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
    id 3354 \
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
    id 3355 \
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
    id 3356 \
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
    id 3357 \
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
    id 3358 \
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
    id 3359 \
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
    id 3360 \
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
    id 3361 \
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
    id 3362 \
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
    id 3363 \
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
    id 3364 \
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
    id 3365 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_16 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_16 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_16_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_16_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_16_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_16'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3366 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_17 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_17 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_17_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_17_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_17_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_17'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3367 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_18 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_18 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_18_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_18_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_18_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_18'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3368 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_19 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_19 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_19_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_19_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_19_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_19'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3369 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_20 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_20 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_20_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_20_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_20_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_20'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3370 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_21 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_21 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_21_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_21_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_21_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_21'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3371 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_22 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_22 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_22_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_22_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_22_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_22'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3372 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_23 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_23 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_23_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_23_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_23_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_23'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3373 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_24 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_24 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_24_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_24_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_24_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_24'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3374 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_25 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_25 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_25_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_25_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_25_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_25'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3375 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_26 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_26 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_26_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_26_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_26_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_26'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3376 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_27 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_27 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_27_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_27_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_27_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_27'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3377 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_28 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_28 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_28_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_28_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_28_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_28'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3378 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_29 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_29 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_29_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_29_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_29_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_29'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3379 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_30 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_30 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_30_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_30_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_30_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_30'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3380 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_31 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_31 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_31_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_31_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_31_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_31'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3381 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_32 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_32 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_32_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_32_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_32_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_32'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3382 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_33 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_33 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_33_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_33_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_33_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_33'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3383 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_34 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_34 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_34_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_34_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_34_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_34'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3384 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_35 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_35 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_35_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_35_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_35_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_35'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3385 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_36 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_36 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_36_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_36_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_36_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_36'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3386 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_37 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_37 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_37_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_37_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_37_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_37'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3387 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_38 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_38 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_38_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_38_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_38_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_38'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3388 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_39 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_39 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_39_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_39_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_39_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_39'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3389 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_40 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_40 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_40_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_40_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_40_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_40'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3390 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_41 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_41 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_41_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_41_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_41_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_41'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3391 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_42 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_42 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_42_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_42_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_42_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_42'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3392 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_43 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_43 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_43_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_43_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_43_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_43'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3393 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_44 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_44 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_44_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_44_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_44_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_44'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3394 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_45 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_45 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_45_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_45_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_45_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_45'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3395 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_46 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_46 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_46_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_46_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_46_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_46'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3396 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_47 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_47 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_47_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_47_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_47_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_47'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3397 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_48 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_48 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_48_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_48_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_48_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_48'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3398 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_49 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_49 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_49_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_49_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_49_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_49'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3399 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_50 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_50 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_50_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_50_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_50_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_50'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3400 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_51 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_51 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_51_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_51_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_51_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_51'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3401 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_52 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_52 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_52_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_52_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_52_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_52'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3402 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_53 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_53 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_53_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_53_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_53_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_53'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3403 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_54 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_54 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_54_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_54_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_54_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_54'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3404 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_55 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_55 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_55_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_55_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_55_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_55'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3405 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_56 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_56 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_56_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_56_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_56_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_56'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3406 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_57 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_57 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_57_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_57_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_57_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_57'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3407 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_58 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_58 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_58_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_58_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_58_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_58'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3408 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_59 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_59 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_59_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_59_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_59_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_59'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3409 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_60 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_60 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_60_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_60_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_60_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_60'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3410 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_61 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_61 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_61_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_61_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_61_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_61'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3411 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_62 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_62 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_62_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_62_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_62_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_62'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3412 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_63 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_63 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_63_address0 { O 10 vector } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_63_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_63_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E8tile_out_63'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3341 \
    name H_cast303 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_H_cast303 \
    op interface \
    ports { H_cast303 { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3342 \
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
    id 3343 \
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
    id 3344 \
    name zext_ln44 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_zext_ln44 \
    op interface \
    ports { zext_ln44 { I 26 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3345 \
    name phi_mul \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_phi_mul \
    op interface \
    ports { phi_mul { I 53 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3346 \
    name output_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_output_r \
    op interface \
    ports { output_r { I 64 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3347 \
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
    id 3348 \
    name gmem \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_gmem \
    op interface \
    ports { m_axi_gmem_0_AWVALID { O 1 bit } m_axi_gmem_0_AWREADY { I 1 bit } m_axi_gmem_0_AWADDR { O 64 vector } m_axi_gmem_0_AWID { O 1 vector } m_axi_gmem_0_AWLEN { O 32 vector } m_axi_gmem_0_AWSIZE { O 3 vector } m_axi_gmem_0_AWBURST { O 2 vector } m_axi_gmem_0_AWLOCK { O 2 vector } m_axi_gmem_0_AWCACHE { O 4 vector } m_axi_gmem_0_AWPROT { O 3 vector } m_axi_gmem_0_AWQOS { O 4 vector } m_axi_gmem_0_AWREGION { O 4 vector } m_axi_gmem_0_AWUSER { O 1 vector } m_axi_gmem_0_WVALID { O 1 bit } m_axi_gmem_0_WREADY { I 1 bit } m_axi_gmem_0_WDATA { O 8 vector } m_axi_gmem_0_WSTRB { O 1 vector } m_axi_gmem_0_WLAST { O 1 bit } m_axi_gmem_0_WID { O 1 vector } m_axi_gmem_0_WUSER { O 1 vector } m_axi_gmem_0_ARVALID { O 1 bit } m_axi_gmem_0_ARREADY { I 1 bit } m_axi_gmem_0_ARADDR { O 64 vector } m_axi_gmem_0_ARID { O 1 vector } m_axi_gmem_0_ARLEN { O 32 vector } m_axi_gmem_0_ARSIZE { O 3 vector } m_axi_gmem_0_ARBURST { O 2 vector } m_axi_gmem_0_ARLOCK { O 2 vector } m_axi_gmem_0_ARCACHE { O 4 vector } m_axi_gmem_0_ARPROT { O 3 vector } m_axi_gmem_0_ARQOS { O 4 vector } m_axi_gmem_0_ARREGION { O 4 vector } m_axi_gmem_0_ARUSER { O 1 vector } m_axi_gmem_0_RVALID { I 1 bit } m_axi_gmem_0_RREADY { O 1 bit } m_axi_gmem_0_RDATA { I 8 vector } m_axi_gmem_0_RLAST { I 1 bit } m_axi_gmem_0_RID { I 1 vector } m_axi_gmem_0_RFIFONUM { I 11 vector } m_axi_gmem_0_RUSER { I 1 vector } m_axi_gmem_0_RRESP { I 2 vector } m_axi_gmem_0_BVALID { I 1 bit } m_axi_gmem_0_BREADY { O 1 bit } m_axi_gmem_0_BRESP { I 2 vector } m_axi_gmem_0_BID { I 1 vector } m_axi_gmem_0_BUSER { I 1 vector } } \
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


