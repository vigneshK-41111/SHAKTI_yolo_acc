# This script segment is generated automatically by AutoPilot

set name cnn_accel_urem_4ns_3ns_2_8_1
if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $name BINDTYPE {op} TYPE {urem} IMPL {auto} LATENCY 7 ALLOW_PRAGMA 1
}


set name cnn_accel_mul_4ns_33ns_36_2_1
if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $name BINDTYPE {op} TYPE {mul} IMPL {auto} LATENCY 1 ALLOW_PRAGMA 1
}


set name cnn_accel_mul_4ns_6ns_9_1_1
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
    id 13 \
    name tile_in \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename tile_in \
    op interface \
    ports { tile_in_address0 { O 4 vector } tile_in_ce0 { O 1 bit } tile_in_we0 { O 1 bit } tile_in_d0 { O 8 vector } tile_in_address1 { O 4 vector } tile_in_ce1 { O 1 bit } tile_in_we1 { O 1 bit } tile_in_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'tile_in'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 14 \
    name tile_in_1 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename tile_in_1 \
    op interface \
    ports { tile_in_1_address0 { O 4 vector } tile_in_1_ce0 { O 1 bit } tile_in_1_we0 { O 1 bit } tile_in_1_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'tile_in_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 15 \
    name tile_in_2 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename tile_in_2 \
    op interface \
    ports { tile_in_2_address0 { O 4 vector } tile_in_2_ce0 { O 1 bit } tile_in_2_we0 { O 1 bit } tile_in_2_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'tile_in_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 16 \
    name tile_in_3 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename tile_in_3 \
    op interface \
    ports { tile_in_3_address0 { O 4 vector } tile_in_3_ce0 { O 1 bit } tile_in_3_we0 { O 1 bit } tile_in_3_d0 { O 8 vector } tile_in_3_address1 { O 4 vector } tile_in_3_ce1 { O 1 bit } tile_in_3_we1 { O 1 bit } tile_in_3_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'tile_in_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 17 \
    name tile_in_4 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename tile_in_4 \
    op interface \
    ports { tile_in_4_address0 { O 4 vector } tile_in_4_ce0 { O 1 bit } tile_in_4_we0 { O 1 bit } tile_in_4_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'tile_in_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 18 \
    name tile_in_5 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename tile_in_5 \
    op interface \
    ports { tile_in_5_address0 { O 4 vector } tile_in_5_ce0 { O 1 bit } tile_in_5_we0 { O 1 bit } tile_in_5_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'tile_in_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 19 \
    name tile_in_6 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename tile_in_6 \
    op interface \
    ports { tile_in_6_address0 { O 4 vector } tile_in_6_ce0 { O 1 bit } tile_in_6_we0 { O 1 bit } tile_in_6_d0 { O 8 vector } tile_in_6_address1 { O 4 vector } tile_in_6_ce1 { O 1 bit } tile_in_6_we1 { O 1 bit } tile_in_6_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'tile_in_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 20 \
    name tile_in_7 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename tile_in_7 \
    op interface \
    ports { tile_in_7_address0 { O 4 vector } tile_in_7_ce0 { O 1 bit } tile_in_7_we0 { O 1 bit } tile_in_7_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'tile_in_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 21 \
    name tile_in_8 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename tile_in_8 \
    op interface \
    ports { tile_in_8_address0 { O 4 vector } tile_in_8_ce0 { O 1 bit } tile_in_8_we0 { O 1 bit } tile_in_8_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'tile_in_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 22 \
    name tile_in_9 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename tile_in_9 \
    op interface \
    ports { tile_in_9_address0 { O 4 vector } tile_in_9_ce0 { O 1 bit } tile_in_9_we0 { O 1 bit } tile_in_9_d0 { O 8 vector } tile_in_9_address1 { O 4 vector } tile_in_9_ce1 { O 1 bit } tile_in_9_we1 { O 1 bit } tile_in_9_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'tile_in_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 23 \
    name tile_in_10 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename tile_in_10 \
    op interface \
    ports { tile_in_10_address0 { O 4 vector } tile_in_10_ce0 { O 1 bit } tile_in_10_we0 { O 1 bit } tile_in_10_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'tile_in_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 24 \
    name tile_in_11 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename tile_in_11 \
    op interface \
    ports { tile_in_11_address0 { O 4 vector } tile_in_11_ce0 { O 1 bit } tile_in_11_we0 { O 1 bit } tile_in_11_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'tile_in_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 25 \
    name tile_in_12 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename tile_in_12 \
    op interface \
    ports { tile_in_12_address0 { O 4 vector } tile_in_12_ce0 { O 1 bit } tile_in_12_we0 { O 1 bit } tile_in_12_d0 { O 8 vector } tile_in_12_address1 { O 4 vector } tile_in_12_ce1 { O 1 bit } tile_in_12_we1 { O 1 bit } tile_in_12_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'tile_in_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 26 \
    name tile_in_13 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename tile_in_13 \
    op interface \
    ports { tile_in_13_address0 { O 4 vector } tile_in_13_ce0 { O 1 bit } tile_in_13_we0 { O 1 bit } tile_in_13_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'tile_in_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 27 \
    name tile_in_14 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename tile_in_14 \
    op interface \
    ports { tile_in_14_address0 { O 4 vector } tile_in_14_ce0 { O 1 bit } tile_in_14_we0 { O 1 bit } tile_in_14_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'tile_in_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 28 \
    name tile_in_15 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename tile_in_15 \
    op interface \
    ports { tile_in_15_address0 { O 4 vector } tile_in_15_ce0 { O 1 bit } tile_in_15_we0 { O 1 bit } tile_in_15_d0 { O 8 vector } tile_in_15_address1 { O 4 vector } tile_in_15_ce1 { O 1 bit } tile_in_15_we1 { O 1 bit } tile_in_15_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'tile_in_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 29 \
    name tile_in_16 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename tile_in_16 \
    op interface \
    ports { tile_in_16_address0 { O 4 vector } tile_in_16_ce0 { O 1 bit } tile_in_16_we0 { O 1 bit } tile_in_16_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'tile_in_16'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 30 \
    name tile_in_17 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename tile_in_17 \
    op interface \
    ports { tile_in_17_address0 { O 4 vector } tile_in_17_ce0 { O 1 bit } tile_in_17_we0 { O 1 bit } tile_in_17_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'tile_in_17'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 31 \
    name tile_in_18 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename tile_in_18 \
    op interface \
    ports { tile_in_18_address0 { O 4 vector } tile_in_18_ce0 { O 1 bit } tile_in_18_we0 { O 1 bit } tile_in_18_d0 { O 8 vector } tile_in_18_address1 { O 4 vector } tile_in_18_ce1 { O 1 bit } tile_in_18_we1 { O 1 bit } tile_in_18_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'tile_in_18'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 32 \
    name tile_in_19 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename tile_in_19 \
    op interface \
    ports { tile_in_19_address0 { O 4 vector } tile_in_19_ce0 { O 1 bit } tile_in_19_we0 { O 1 bit } tile_in_19_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'tile_in_19'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 33 \
    name tile_in_20 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename tile_in_20 \
    op interface \
    ports { tile_in_20_address0 { O 4 vector } tile_in_20_ce0 { O 1 bit } tile_in_20_we0 { O 1 bit } tile_in_20_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'tile_in_20'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 34 \
    name tile_in_21 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename tile_in_21 \
    op interface \
    ports { tile_in_21_address0 { O 4 vector } tile_in_21_ce0 { O 1 bit } tile_in_21_we0 { O 1 bit } tile_in_21_d0 { O 8 vector } tile_in_21_address1 { O 4 vector } tile_in_21_ce1 { O 1 bit } tile_in_21_we1 { O 1 bit } tile_in_21_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'tile_in_21'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 35 \
    name tile_in_22 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename tile_in_22 \
    op interface \
    ports { tile_in_22_address0 { O 4 vector } tile_in_22_ce0 { O 1 bit } tile_in_22_we0 { O 1 bit } tile_in_22_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'tile_in_22'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 36 \
    name tile_in_23 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename tile_in_23 \
    op interface \
    ports { tile_in_23_address0 { O 4 vector } tile_in_23_ce0 { O 1 bit } tile_in_23_we0 { O 1 bit } tile_in_23_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'tile_in_23'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 37 \
    name tile_in_24 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename tile_in_24 \
    op interface \
    ports { tile_in_24_address0 { O 4 vector } tile_in_24_ce0 { O 1 bit } tile_in_24_we0 { O 1 bit } tile_in_24_d0 { O 8 vector } tile_in_24_address1 { O 4 vector } tile_in_24_ce1 { O 1 bit } tile_in_24_we1 { O 1 bit } tile_in_24_d1 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'tile_in_24'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 38 \
    name tile_in_25 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename tile_in_25 \
    op interface \
    ports { tile_in_25_address0 { O 4 vector } tile_in_25_ce0 { O 1 bit } tile_in_25_we0 { O 1 bit } tile_in_25_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'tile_in_25'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 39 \
    name tile_in_26 \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename tile_in_26 \
    op interface \
    ports { tile_in_26_address0 { O 4 vector } tile_in_26_ce0 { O 1 bit } tile_in_26_we0 { O 1 bit } tile_in_26_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'tile_in_26'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 9 \
    name gmem \
    type other \
    dir I \
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
    id 10 \
    name mul_ln37_cast \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_mul_ln37_cast \
    op interface \
    ports { mul_ln37_cast { I 33 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 11 \
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
    id 12 \
    name size \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_size \
    op interface \
    ports { size { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 40 \
    name zext_ln38 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_zext_ln38 \
    op interface \
    ports { zext_ln38 { I 28 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 41 \
    name phi_mul \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_phi_mul \
    op interface \
    ports { phi_mul { I 59 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 42 \
    name input_r \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_r \
    op interface \
    ports { input_r { I 64 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 43 \
    name zext_ln37_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_zext_ln37_2 \
    op interface \
    ports { zext_ln37_2 { I 33 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 44 \
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


