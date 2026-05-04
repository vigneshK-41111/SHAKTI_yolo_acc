# This script segment is generated automatically by AutoPilot

if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler cnn_accel_mac_muladd_18s_18s_18ns_18_4_1 BINDTYPE {op} TYPE {all} IMPL {dsp_slice} LATENCY 3
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
    id 329 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_15 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_15 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_15_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_15_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_15_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_15_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 330 \
    name p_ZZ9cnn_accelPVaS0_iE4buf1_15 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ9cnn_accelPVaS0_iE4buf1_15 \
    op interface \
    ports { p_ZZ9cnn_accelPVaS0_iE4buf1_15_address0 { O 18 vector } p_ZZ9cnn_accelPVaS0_iE4buf1_15_ce0 { O 1 bit } p_ZZ9cnn_accelPVaS0_iE4buf1_15_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ9cnn_accelPVaS0_iE4buf1_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 331 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_14 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_14 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_14_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_14_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_14_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_14_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 332 \
    name p_ZZ9cnn_accelPVaS0_iE4buf1_14 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ9cnn_accelPVaS0_iE4buf1_14 \
    op interface \
    ports { p_ZZ9cnn_accelPVaS0_iE4buf1_14_address0 { O 18 vector } p_ZZ9cnn_accelPVaS0_iE4buf1_14_ce0 { O 1 bit } p_ZZ9cnn_accelPVaS0_iE4buf1_14_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ9cnn_accelPVaS0_iE4buf1_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 333 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_13 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_13 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_13_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_13_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_13_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_13_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 334 \
    name p_ZZ9cnn_accelPVaS0_iE4buf1_13 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ9cnn_accelPVaS0_iE4buf1_13 \
    op interface \
    ports { p_ZZ9cnn_accelPVaS0_iE4buf1_13_address0 { O 18 vector } p_ZZ9cnn_accelPVaS0_iE4buf1_13_ce0 { O 1 bit } p_ZZ9cnn_accelPVaS0_iE4buf1_13_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ9cnn_accelPVaS0_iE4buf1_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 335 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_12 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_12 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_12_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_12_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_12_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_12_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 336 \
    name p_ZZ9cnn_accelPVaS0_iE4buf1_12 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ9cnn_accelPVaS0_iE4buf1_12 \
    op interface \
    ports { p_ZZ9cnn_accelPVaS0_iE4buf1_12_address0 { O 18 vector } p_ZZ9cnn_accelPVaS0_iE4buf1_12_ce0 { O 1 bit } p_ZZ9cnn_accelPVaS0_iE4buf1_12_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ9cnn_accelPVaS0_iE4buf1_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 337 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_11 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_11 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_11_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_11_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_11_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_11_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 338 \
    name p_ZZ9cnn_accelPVaS0_iE4buf1_11 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ9cnn_accelPVaS0_iE4buf1_11 \
    op interface \
    ports { p_ZZ9cnn_accelPVaS0_iE4buf1_11_address0 { O 18 vector } p_ZZ9cnn_accelPVaS0_iE4buf1_11_ce0 { O 1 bit } p_ZZ9cnn_accelPVaS0_iE4buf1_11_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ9cnn_accelPVaS0_iE4buf1_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 339 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_10 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_10 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_10_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_10_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_10_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_10_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 340 \
    name p_ZZ9cnn_accelPVaS0_iE4buf1_10 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename p_ZZ9cnn_accelPVaS0_iE4buf1_10 \
    op interface \
    ports { p_ZZ9cnn_accelPVaS0_iE4buf1_10_address0 { O 18 vector } p_ZZ9cnn_accelPVaS0_iE4buf1_10_ce0 { O 1 bit } p_ZZ9cnn_accelPVaS0_iE4buf1_10_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ9cnn_accelPVaS0_iE4buf1_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 341 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_9 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_9 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_9_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_9_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_9_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_9_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 342 \
    name cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_20 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_20 \
    op interface \
    ports { cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_20_address0 { O 18 vector } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_20_ce0 { O 1 bit } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_20_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_20'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 343 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_8 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_8 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_8_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_8_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_8_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_8_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 344 \
    name cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_19 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_19 \
    op interface \
    ports { cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_19_address0 { O 18 vector } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_19_ce0 { O 1 bit } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_19_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_19'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 345 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_7 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_7 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_7_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_7_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_7_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_7_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 346 \
    name cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_18 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_18 \
    op interface \
    ports { cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_18_address0 { O 18 vector } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_18_ce0 { O 1 bit } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_18_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_18'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 347 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_6 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_6 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_6_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_6_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_6_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_6_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 348 \
    name cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_17 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_17 \
    op interface \
    ports { cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_17_address0 { O 18 vector } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_17_ce0 { O 1 bit } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_17_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_17'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 349 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_5 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_5 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_5_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_5_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_5_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_5_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 350 \
    name cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_16 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_16 \
    op interface \
    ports { cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_16_address0 { O 18 vector } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_16_ce0 { O 1 bit } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_16_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_16'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 351 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_4 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_4 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_4_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_4_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_4_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_4_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 352 \
    name cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_15 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_15 \
    op interface \
    ports { cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_15_address0 { O 18 vector } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_15_ce0 { O 1 bit } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_15_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 353 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_3 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_3 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_3_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_3_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_3_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_3_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 354 \
    name cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_14 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_14 \
    op interface \
    ports { cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_14_address0 { O 18 vector } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_14_ce0 { O 1 bit } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_14_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 355 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_2 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_2 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_2_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_2_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_2_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_2_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 356 \
    name cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_13 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_13 \
    op interface \
    ports { cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_13_address0 { O 18 vector } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_13_ce0 { O 1 bit } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_13_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 357 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_1 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_1 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_1_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_1_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_1_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_1_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 358 \
    name cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_12 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_12 \
    op interface \
    ports { cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_12_address0 { O 18 vector } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_12_ce0 { O 1 bit } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_12_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 359 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_0 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_0_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_0_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_0_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 360 \
    name cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1 \
    op interface \
    ports { cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_address0 { O 18 vector } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_ce0 { O 1 bit } cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1_q0 { I 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'cnn_accel_signed_char_volatile_signed_char_volatile_int_buf1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 361 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_0 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_0_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_0_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_0_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 362 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_0 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_0_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_0_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_0_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 363 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_0 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_0_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_0_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_0_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 364 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_0 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_0_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_0_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_0_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 365 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_0 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_0_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_0_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_0_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 366 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_0 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_0_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_0_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_0_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 367 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_0 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_0_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_0_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_0_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 368 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_0 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_0 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_0_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_0_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_0_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_0_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 369 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_1 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_1 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_1_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_1_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_1_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_1_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 370 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_1 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_1 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_1_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_1_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_1_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_1_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 371 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_1 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_1 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_1_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_1_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_1_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_1_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 372 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_1 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_1 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_1_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_1_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_1_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_1_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 373 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_1 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_1 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_1_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_1_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_1_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_1_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 374 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_1 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_1 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_1_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_1_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_1_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_1_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 375 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_1 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_1 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_1_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_1_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_1_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_1_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 376 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_1 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_1 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_1_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_1_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_1_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_1_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 377 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_2 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_2 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_2_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_2_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_2_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_2_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 378 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_2 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_2 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_2_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_2_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_2_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_2_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 379 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_2 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_2 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_2_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_2_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_2_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_2_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 380 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_2 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_2 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_2_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_2_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_2_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_2_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 381 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_2 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_2 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_2_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_2_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_2_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_2_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 382 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_2 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_2 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_2_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_2_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_2_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_2_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 383 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_2 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_2 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_2_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_2_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_2_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_2_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 384 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_2 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_2 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_2_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_2_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_2_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_2_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 385 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_3 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_3 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_3_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_3_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_3_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_3_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 386 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_3 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_3 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_3_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_3_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_3_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_3_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 387 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_3 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_3 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_3_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_3_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_3_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_3_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 388 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_3 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_3 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_3_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_3_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_3_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_3_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 389 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_3 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_3 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_3_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_3_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_3_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_3_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 390 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_3 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_3 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_3_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_3_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_3_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_3_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 391 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_3 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_3 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_3_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_3_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_3_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_3_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 392 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_3 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_3 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_3_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_3_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_3_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_3_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 393 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_4 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_4 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_4_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_4_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_4_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_4_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 394 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_4 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_4 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_4_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_4_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_4_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_4_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 395 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_4 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_4 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_4_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_4_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_4_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_4_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 396 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_4 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_4 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_4_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_4_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_4_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_4_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 397 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_4 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_4 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_4_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_4_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_4_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_4_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 398 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_4 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_4 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_4_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_4_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_4_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_4_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 399 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_4 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_4 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_4_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_4_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_4_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_4_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 400 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_4 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_4 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_4_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_4_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_4_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_4_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 401 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_5 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_5 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_5_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_5_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_5_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_5_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 402 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_5 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_5 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_5_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_5_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_5_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_5_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 403 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_5 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_5 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_5_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_5_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_5_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_5_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 404 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_5 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_5 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_5_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_5_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_5_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_5_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 405 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_5 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_5 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_5_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_5_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_5_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_5_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 406 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_5 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_5 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_5_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_5_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_5_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_5_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 407 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_5 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_5 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_5_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_5_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_5_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_5_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 408 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_5 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_5 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_5_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_5_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_5_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_5_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 409 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_6 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_6 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_6_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_6_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_6_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_6_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 410 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_6 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_6 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_6_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_6_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_6_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_6_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 411 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_6 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_6 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_6_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_6_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_6_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_6_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 412 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_6 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_6 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_6_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_6_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_6_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_6_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 413 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_6 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_6 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_6_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_6_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_6_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_6_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 414 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_6 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_6 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_6_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_6_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_6_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_6_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 415 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_6 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_6 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_6_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_6_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_6_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_6_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 416 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_6 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_6 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_6_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_6_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_6_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_6_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 417 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_7 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_7 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_7_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_7_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_7_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_7_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 418 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_7 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_7 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_7_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_7_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_7_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_7_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 419 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_7 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_7 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_7_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_7_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_7_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_7_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 420 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_7 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_7 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_7_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_7_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_7_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_7_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 421 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_7 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_7 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_7_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_7_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_7_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_7_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 422 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_7 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_7 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_7_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_7_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_7_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_7_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 423 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_7 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_7 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_7_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_7_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_7_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_7_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 424 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_7 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_7 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_7_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_7_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_7_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_7_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 425 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_8 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_8 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_8_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_8_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_8_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_8_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 426 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_8 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_8 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_8_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_8_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_8_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_8_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 427 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_8 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_8 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_8_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_8_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_8_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_8_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 428 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_8 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_8 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_8_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_8_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_8_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_8_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 429 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_8 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_8 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_8_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_8_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_8_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_8_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 430 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_8 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_8 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_8_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_8_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_8_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_8_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 431 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_8 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_8 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_8_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_8_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_8_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_8_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 432 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_8 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_8 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_8_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_8_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_8_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_8_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 433 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_9 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_9 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_9_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_9_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_9_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_9_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 434 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_9 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_9 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_9_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_9_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_9_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_9_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 435 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_9 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_9 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_9_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_9_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_9_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_9_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 436 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_9 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_9 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_9_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_9_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_9_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_9_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 437 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_9 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_9 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_9_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_9_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_9_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_9_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 438 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_9 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_9 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_9_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_9_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_9_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_9_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 439 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_9 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_9 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_9_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_9_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_9_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_9_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 440 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_9 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_9 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_9_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_9_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_9_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_9_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 441 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_10 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_10 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_10_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_10_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_10_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_10_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 442 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_10 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_10 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_10_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_10_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_10_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_10_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 443 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_10 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_10 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_10_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_10_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_10_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_10_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 444 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_10 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_10 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_10_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_10_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_10_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_10_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 445 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_10 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_10 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_10_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_10_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_10_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_10_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 446 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_10 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_10 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_10_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_10_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_10_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_10_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 447 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_10 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_10 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_10_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_10_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_10_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_10_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 448 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_10 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_10 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_10_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_10_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_10_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_10_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 449 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_11 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_11 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_11_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_11_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_11_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_11_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 450 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_11 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_11 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_11_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_11_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_11_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_11_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 451 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_11 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_11 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_11_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_11_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_11_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_11_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 452 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_11 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_11 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_11_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_11_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_11_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_11_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 453 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_11 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_11 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_11_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_11_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_11_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_11_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 454 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_11 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_11 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_11_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_11_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_11_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_11_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 455 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_11 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_11 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_11_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_11_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_11_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_11_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 456 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_11 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_11 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_11_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_11_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_11_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_11_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 457 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_12 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_12 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_12_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_12_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_12_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_12_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 458 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_12 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_12 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_12_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_12_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_12_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_12_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 459 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_12 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_12 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_12_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_12_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_12_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_12_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 460 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_12 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_12 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_12_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_12_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_12_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_12_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 461 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_12 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_12 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_12_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_12_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_12_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_12_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 462 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_12 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_12 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_12_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_12_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_12_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_12_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 463 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_12 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_12 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_12_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_12_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_12_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_12_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 464 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_12 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_12 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_12_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_12_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_12_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_12_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 465 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_13 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_13 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_13_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_13_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_13_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_13_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 466 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_13 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_13 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_13_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_13_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_13_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_13_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 467 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_13 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_13 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_13_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_13_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_13_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_13_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 468 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_13 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_13 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_13_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_13_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_13_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_13_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 469 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_13 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_13 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_13_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_13_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_13_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_13_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 470 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_13 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_13 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_13_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_13_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_13_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_13_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 471 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_13 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_13 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_13_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_13_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_13_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_13_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 472 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_13 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_13 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_13_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_13_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_13_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_13_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 473 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_14 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_14 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_14_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_14_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_14_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_14_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 474 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_14 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_14 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_14_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_14_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_14_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_14_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 475 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_14 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_14 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_14_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_14_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_14_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_14_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 476 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_14 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_14 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_14_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_14_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_14_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_14_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 477 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_14 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_14 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_14_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_14_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_14_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_14_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 478 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_14 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_14 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_14_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_14_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_14_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_14_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 479 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_14 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_14 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_14_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_14_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_14_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_14_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 480 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_14 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_14 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_14_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_14_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_14_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_14_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 481 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_15 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_15 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_15_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_15_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_15_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_15_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_1_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 482 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_15 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_15 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_15_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_15_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_15_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_15_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_0_2_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 483 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_15 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_15 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_15_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_15_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_15_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_15_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_0_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 484 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_15 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_15 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_15_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_15_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_15_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_15_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_1_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 485 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_15 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_15 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_15_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_15_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_15_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_15_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_1_2_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 486 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_15 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_15 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_15_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_15_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_15_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_15_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_0_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 487 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_15 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_15 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_15_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_15_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_15_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_15_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_1_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 488 \
    name p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_15 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_15 \
    op interface \
    ports { p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_15_address0 { O 8 vector } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_15_ce0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_15_we0 { O 1 bit } p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_15_d0 { O 7 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'p_ZZ10conv_layerPaS_iiiiS_S_E7tile_in_2_2_15'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 325 \
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
    id 326 \
    name sext_ln43 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_sext_ln43 \
    op interface \
    ports { sext_ln43 { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 327 \
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
    id 328 \
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


