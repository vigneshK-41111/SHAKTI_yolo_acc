# 1 "cnn_accel.cpp"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 376 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/scratch1/Vignesh/Vivado_24/Vitis/2024.2/common/technology/autopilot/etc/autopilot_ssdm_op.h" 1
# 105 "/scratch1/Vignesh/Vivado_24/Vitis/2024.2/common/technology/autopilot/etc/autopilot_ssdm_op.h"
extern "C" {






    void _ssdm_op_IfRead(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_IfWrite(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbRead(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbWrite(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanRead(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanWrite(...) __attribute__ ((nothrow)) __attribute__((overloadable));


    void _ssdm_StreamRead(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_StreamWrite(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbRead(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbWrite(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanRead(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanWrite(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned _ssdm_StreamSize(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_ReadReq(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_Read(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_WriteReq(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_Write(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_NbReadReq(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_CanReadReq(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_NbWriteReq(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_CanWriteReq(...) __attribute__ ((nothrow)) __attribute__((overloadable));




    void _ssdm_op_MemShiftRead(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_PrintNone(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_PrintInt(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_PrintDouble(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_Wait(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_Poll(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_Return(...) __attribute__ ((nothrow)) __attribute__((overloadable));


    void _ssdm_op_SpecSynModule(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecTopModule(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecProcessDecl(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecProcessDef(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecPort(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecConnection(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecChannel(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecSensitive(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecModuleInst(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecPortMap(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecReset(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecPlatform(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecClockDomain(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecPowerDomain(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    int _ssdm_op_SpecRegionBegin(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    int _ssdm_op_SpecRegionEnd(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecLoopName(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecLoopTripCount(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    int _ssdm_op_SpecStateBegin(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    int _ssdm_op_SpecStateEnd(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecInterface(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecPipeline(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecDataflowPipeline(...) __attribute__ ((nothrow)) __attribute__((overloadable));


    void _ssdm_op_SpecLatency(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecParallel(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecProtocol(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecOccurrence(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecResource(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecResourceLimit(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecCHCore(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecFUCore(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecIFCore(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecIPCore(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecMemCore(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecExt(...) __attribute__ ((nothrow)) __attribute__((overloadable));




    void _ssdm_SpecArrayDimSize(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_RegionBegin(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_RegionEnd(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_InlineAll(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_InlineLoop(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_Inline(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_InlineSelf(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_InlineRegion(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_SpecArrayMap(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecArrayPartition(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecArrayReshape(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_SpecStream(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecStable(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecStableContent(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecBindPort(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecPipoDepth(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_SpecExpr(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecExprBalance(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_SpecDependence(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_SpecLoopMerge(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecLoopFlatten(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecLoopRewind(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_SpecFuncInstantiation(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecFuncBuffer(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecFuncExtract(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecConstant(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_DataPack(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecDataPack(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecBitsMap(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecLicense(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void __xilinx_ip_top(...) __attribute__ ((nothrow)) __attribute__((overloadable));


}
# 2 "<built-in>" 2
# 1 "cnn_accel.cpp" 2

# 1 "/scratch1/Vignesh/Vivado_24/Vitis/2024.2/lnx64/tools/clang-3.9-csynth/lib/clang/7.0.0/include/stdint.h" 1 3
# 63 "/scratch1/Vignesh/Vivado_24/Vitis/2024.2/lnx64/tools/clang-3.9-csynth/lib/clang/7.0.0/include/stdint.h" 3
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 394 "/usr/include/features.h" 3 4
# 1 "/usr/include/features-time64.h" 1 3 4
# 20 "/usr/include/features-time64.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 21 "/usr/include/features-time64.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 1 3 4
# 19 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 20 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 2 3 4
# 22 "/usr/include/features-time64.h" 2 3 4
# 395 "/usr/include/features.h" 2 3 4
# 480 "/usr/include/features.h" 3 4
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 481 "/usr/include/features.h" 2 3 4
# 502 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 576 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 577 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 578 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 503 "/usr/include/features.h" 2 3 4
# 526 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 527 "/usr/include/features.h" 2 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 2 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 1 3 4
# 19 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 20 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 2 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;






typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;



typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 141 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 142 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/time64.h" 1 3 4
# 143 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef long int __suseconds64_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 28 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 30 "/usr/include/stdint.h" 2 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 3 4
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 35 "/usr/include/stdint.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 3 4
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
# 38 "/usr/include/stdint.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-least.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/stdint-least.h" 3 4
typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;


typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;
# 42 "/usr/include/stdint.h" 2 3 4





typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 60 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 76 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 90 "/usr/include/stdint.h" 3 4
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
# 64 "/scratch1/Vignesh/Vivado_24/Vitis/2024.2/lnx64/tools/clang-3.9-csynth/lib/clang/7.0.0/include/stdint.h" 2 3
# 3 "cnn_accel.cpp" 2


# 1 "./0_conv_weight.h" 1




int8_t w_0_conv_weight[432] = {
-14, -2, 12, -43, 3, 44, -39, -2, 36, -16, 1, 18, -56, 3, 53, -43,
0, 40, -6, -2, 3, -25, 4, 23, -18, 3, 18, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, -2, -11, -4, -15, -32, -25, -13, -28, -24, 1,
4, 2, 5, 9, 7, 3, 6, 5, 0, 8, 2, 10, 25, 17, 9, 23,
18, 17, 47, 34, -1, -1, -1, -14, -49, -33, 22, 56, 40, -1, -5, -1,
-16, -58, -38, 5, 22, 14, 0, -1, 1, -4, -25, -13, 22, -17, -9, 43,
-43, 15, 8, -49, 26, 39, -22, -12, 52, -56, 16, 8, -54, 34, 8, -8,
-2, 21, -22, 9, 0, -24, 12, 3, 8, 4, 11, 26, 21, 7, 19, 16,
0, -4, -1, -5, -13, -8, -2, -10, -6, -2, -3, -1, -6, -13, -11, -4,
-12, -10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, -18, -43, -26, -5, -6, -2, 21, 46,
34, -19, -50, -28, -4, -7, -1, 22, 48, 37, -6, -24, -11, -3, -6, -2,
10, 25, 17, 15, 16, 5, 15, 18, 2, 5, 2, -9, -18, -30, -16, -27,
-38, -21, -13, -23, -9, 1, 13, 8, 8, 27, 20, 6, 21, 17, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 35, 30, -39, -93, -43, 18,
31, 35, 34, 43, 43, -55, -127, -57, 31, 41, 46, 11, 21, 14, -22, -51,
-23, 10, 19, 17, -35, -55, -37, 45, 90, 58, -15, -36, -18, -11, -33, -13,
47, 95, 59, -35, -60, -42, -18, -30, -19, 19, 44, 26, -4, -19, -7, 13,
-1, -14, 44, 4, -48, 39, 2, -41, 16, 0, -15, 51, 2, -58, 41, 4,
-44, 3, -1, -6, 23, 2, -27, 20, 5, -19, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, -4, -7, -6, -8, -8, -8, -7, -10, -10, 17, 22,
11, 24, 34, 17, 16, 20, 8, -15, -14, -7, -20, -19, -9, -11, -9, 1,

};
# 6 "cnn_accel.cpp" 2
# 1 "./0_conv_weight_bias.h" 1




int8_t w_0_conv_weight_bias[16] = {
21, -127, 23, 25, 83, 9, 52, 46, 23, 20, -93, 36, -9, 24, -44, 21,

};
# 7 "cnn_accel.cpp" 2

# 1 "./1_conv_weight.h" 1




int8_t w_1_conv_weight[4608] = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-4, -3, 1, -4, -2, -1, 0, 4, 5, 0, 5, -4, -4, 3, -9, 0,
-1, -6, 34, 1, -38, 86, 7, -90, 30, 18, -39, 2, -1, -3, 3, 1,
-1, 4, 1, 3, 5, -2, 0, 2, -4, 2, 3, -5, 3, -45, 5, 35,
-109, -5, 125, -55, -4, 59, 0, 2, 1, -1, 1, 0, 1, -2, 0, 3,
-6, 2, 7, -5, -1, 9, -4, -3, 3, -1, 3, 6, 1, 0, 3, 1,
3, 18, 0, -21, 7, 8, -19, -3, 6, -4, -7, 4, 13, -17, 5, 10,
-9, 1, 8, 0, -2, -1, 0, -3, 0, -1, 0, 0, 3, 3, 5, 4,
2, 1, 3, 0, 2, 1, 1, -4, -4, -1, -8, 0, 4, 3, -9, 0,
11, -11, -5, 12, 2, 4, 8, 5, 1, -8, -12, -1, 2, -5, 3, 11,
14, -7, 1, 33, -38, 14, 13, -14, 9, 1, -8, 6, 1, -6, 6, 1,
-4, 2, -2, 5, 0, -1, 2, -4, 0, 3, -2, 2, 0, -1, -5, 4,
-4, -5, 1, 1, 9, -8, -9, 17, 5, -27, 5, 16, -17, -2, 4, -2,
-2, 3, -3, -1, 4, -1, 2, 6, -4, 14, -11, -5, 13, -13, -6, 1,
-8, 4, 2, -8, 7, 1, -5, 6, -2, 0, -2, 3, -7, 4, 5, -3,
-3, -2, 4, 0, -3, 3, -1, -3, 3, -2, -4, 9, 2, -5, 15, -1,
-4, 16, 0, 1, -1, -1, 7, -5, -2, 3, 2, -4, 0, 0, 1, -1,
5, 0, 4, 3, 4, -11, 14, -3, -34, 42, -14, -17, 13, -8, -2, 6,
5, -4, 1, 8, -12, 6, -2, -3, 4, 0, -2, 3, -1, -2, 2, 2,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
9, 17, -4, -4, -43, -7, -2, 28, 9, 1, -16, -6, -8, 10, 19, 2,
1, -17, -5, 3, 3, 6, -1, -7, -1, -5, 3, -9, -22, -2, -7, 44,
16, 15, -36, -21, 7, 1, -7, -9, -2, 23, 4, 13, -20, -2, 1, -4,
4, -1, -3, 0, -4, 4, -2, -8, 6, 14, -1, -6, -14, 8, 14, 8,
-2, -9, -8, -12, 7, -6, 15, 5, 0, 15, -2, 10, -47, -14, -19, 22,
17, -2, 2, 1, 2, 4, 4, 3, -2, -5, 14, -7, -4, -28, -2, 8,
13, 12, -9, 10, 20, -4, -32, -48, 22, 16, 28, -23, -2, -9, 5, 12,
29, -2, -4, 10, 23, -12, -21, 1, -1, 46, 16, 5, -22, -18, -21, 2,
6, -1, 5, 12, 7, -1, -16, -8, -1, -2, 7, 8, -1, 3, 0, 1,
0, 0, 1, 0, 0, 0, 1, -1, -1, 1, 2, 3, 1, 1, 1, 0,
0, 1, -3, 1, -3, -2, 4, 0, -3, -2, -5, -1, 1, 1, 0, 0,
0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, -1, -5, -6,
-2, 5, -1, -5, 0, -4, 1, -2, 0, -1, 0, 1, 0, -1, 1, -4,
-2, -2, -1, 3, 1, -2, 2, 1, 1, 0, 0, 0, -1, 0, 0, 0,
1, -3, 1, -3, 2, 21, 15, -1, 19, 12, 0, 0, 0, 1, 1, 0,
0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1,
0, 0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 1, 0, 0, 2, 1,
-1, 1, 2, 0, 0, 1, 0, 4, -6, -4, -6, -30, -26, -2, -26, -20,
-21, -5, 16, -45, 0, 36, -22, 5, 16, -12, 14, -5, -12, 23, -6, -12,
16, -13, 5, -7, 4, 7, -18, 7, 6, -14, 7, 0, -4, -4, 4, 4,
-10, 7, 7, -3, -13, 12, 12, -26, 29, 1, -10, 14, -7, -3, 3, -1,
-2, -1, 2, 0, -5, 3, -4, 6, -10, -12, 22, -10, -11, 17, 2, -8,
10, 5, -12, 16, 3, -16, 14, -7, -1, 3, -1, -7, 2, 4, -5, 6,
0, 4, 0, -1, 4, -5, -1, 6, -6, 0, -2, 4, -6, 4, 13, -12,
4, 10, -14, 1, 0, 1, -7, 5, -1, -3, 10, -5, -4, 4, -4, 1,
-6, -2, 0, 0, -1, 7, 4, -24, 22, 12, -51, 11, 8, -26, -1, -6,
1, 6, -2, -1, 10, 4, -15, 3, -3, -1, 3, -5, 1, 0, -1, -1,
6, 8, -12, -3, 12, -15, -9, 15, -14, 13, -29, 17, 17, -28, 17, 12,
-19, 7, -2, 10, -4, -6, 12, -8, -5, 10, -4, 3, -5, 4, 1, 0,
-1, 6, -5, -1, 6, -30, 21, 13, -60, 44, 5, -31, 21, -2, 2, -1,
-3, 4, -3, -2, 5, -1, 6, -16, 13, 2, -37, 40, -8, -4, 19, 10,
-20, 12, 17, -24, 12, 18, -21, 8, -1, 0, -1, 4, -6, 3, 1, -1,
4, 2, -1, -1, 2, -2, -3, 2, -2, -2, 0, -11, 6, 3, -9, 6,
8, -11, 6, 3, -3, 3, 0, -5, 6, 1, -6, 7, -2, 0, -1, -1,
5, -5, -2, -2, -10, -6, -2, 4, -1, -10, 13, 3, -17, 14, -3, 6,
9, -6, 0, 8, 2, -12, 4, 2, 0, -4, 1, 3, -6, 3, 0, -3,
-2, 3, 2, 0, -4, 2, 1, 0, 0, 0, -1, 2, -2, -4, -2, 5,
-1, 1, -29, 2, 36, -95, -5, 95, -43, 6, 44, 4, -1, 5, -1, 2,
8, 0, 2, 5, 1, 1, -1, 3, -2, 3, 3, 0, -2, 34, 10, -56,
117, 22, -120, 41, 13, -58, 1, -3, 2, 4, 0, -1, -2, -3, 0, 14,
-8, -6, 25, -7, -23, 20, -5, -16, 3, 2, 5, 0, -2, 5, 2, -1,
5, -25, -3, 19, -15, -3, 12, -6, 3, 1, 9, 3, -2, 14, -2, -17,
11, 1, -7, -2, -1, 0, -2, -2, -1, 3, 1, 3, 5, 7, 7, 1,
4, 7, -2, 2, 5, 2, 0, 0, -5, -8, -1, 2, 1, 3, -4, 1,
1, -1, -1, -1, 3, 3, 1, -7, -1, 8, 4, -5, 4, 16, -4, -10,
6, 7, 8, 2, 5, 4, 5, -2, 4, 4, -1, 4, 6, 0, -4, 7,
3, 0, 19, 75, 32, 9, 0, 22, -21, -94, -29, -1, -7, -3, -1, -3,
2, -4, -4, 0, 8, 6, 6, -3, -2, -2, -3, -6, -2, -27, -96, -45,
-4, -5, -20, 24, 127, 45, 4, 6, 1, -2, -1, -6, 1, -2, 0, 1,
2, 3, -17, -12, -19, 3, 20, 3, -1, -1, 1, -4, -7, -5, 0, -2,
3, 24, 8, 1, 0, -6, -2, -21, -16, -3, -13, -22, -13, -1, -2, -4,
12, 15, 5, 2, 1, 3, -2, -1, -3, 1, 0, 4, 2, 6, 5, -4,
-1, -1, -1, -2, 1, 7, 6, 7, 1, 6, 4, 8, 0, 4, -6, -13,
-17, 4, 4, -6, 12, 20, 11, 5, -6, -2, -11, -6, 1, -11, 0, 12,
1, 0, 0, 1, 2, 1, -3, 4, 4, -8, -11, -9, 0, 1, -1, 8,
14, 6, 7, 5, 5, 1, 0, 1, 0, -5, -2, 9, 15, 13, 15, 20,
20, 7, 12, 7, -2, -3, -1, 1, 0, 2, -2, 0, 3, 7, 13, 7,
1, 3, 2, -4, -14, -7, -1, -3, 0, 0, 0, 2, 1, 0, -3, -9,
-16, -12, -1, 1, 0, 7, 22, 18, -14, -24, -17, -12, -17, -14, -7, -14,
-9, 3, 4, 5, 1, -1, -1, 1, -3, -2, -6, -7, -4, 0, -2, -1,
7, 6, 0, -3, -6, -5, -1, 0, 1, 4, 5, 5, 1, 4, 4, 0,
-1, 0, -5, -4, -7, -1, -2, 0, 0, 0, -1, 6, 4, -3, 8, 8,
3, 0, 0, -5, -7, -8, -12, -1, 3, 2, -2, 1, 1, -1, -4, -3,
1, 4, 7, 3, 4, 1, 6, -1, -3, 8, 15, 10, 3, 3, 2, -11,
-14, -13, 3, -2, 3, -2, -5, -3, 6, 4, 4, 2, 2, 3, -16, -23,
-14, -10, -14, -9, 3, 2, 3, -2, -1, -5, 0, -2, 0, 0, -2, 1,
-3, -3, -3, 2, 7, 4, 1, 1, 3, -2, -1, 0, -1, -1, 0, 4,
20, 13, 1, 8, 5, -9, -9, -9, 3, 3, 2, 8, 21, 11, 11, 18,
14, 4, 2, 2, -2, -2, -1, 1, 3, 3, 4, 4, 2, 5, 4, 2,
-5, -8, -6, 1, 5, 4, 1, 1, 1, -3, -7, -5, -3, -6, -5, -8,
-9, -9, 0, 2, 0, 5, 7, -1, 3, 1, 0, 0, 0, 0, -2, -6,
-6, 5, 0, -4, 1, -1, -4, 3, 4, 6, -3, -3, -2, -1, -1, -2,
-19, 13, -11, -12, 30, -23, 23, -20, 9, 10, 3, -15, 20, -26, 8, 1,
-14, 11, -1, -3, 4, -8, 9, -2, 3, 8, -12, 2, -8, 3, 5, -27,
15, -27, 28, -1, -14, 32, -11, 22, -74, 47, 27, -22, -8, -4, 3, -1,
-3, 3, -1, 6, 1, -10, -6, 3, -1, -2, 3, 0, 9, -42, 18, 2,
10, -9, 19, -13, -9, 9, -25, 20, -6, 14, -5, -4, 22, -18, 30, -24,
-4, -1, -3, 0, -1, -1, 2, 0, 5, -5, 6, -6, -5, 10, -25, 12,
-15, 1, 3, -7, 11, -5, 7, -12, 5, 4, -18, 6, 0, -4, 3, -2,
6, -3, -2, 13, -4, 11, -15, 8, 10, -23, 18, -27, 23, -9, 9, -4,
-1, -6, -6, 9, -9, -2, 1, 0, -4, 1, -1, 5, -1, 3, 2, -6,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
6, 8, 4, 13, 17, 10, 9, 13, 4, 8, -1, -8, 13, -2, -11, 7,
-1, -6, -2, 2, 2, -5, 2, 3, -2, 1, 2, 2, 1, 0, -1, -2,
4, -2, -1, 4, 7, -2, -1, 9, -6, -3, 7, -5, -4, -2, 0, 4,
-9, -1, 10, -4, -1, 6, 1, -1, -3, 4, 1, -2, 4, 2, -2, 3,
0, -5, 15, 4, -11, 10, 2, -12, -4, -1, 4, -1, 2, 3, 3, 3,
3, 0, 0, 2, -1, -1, 2, 0, -1, 2, 4, 0, -1, 7, 0, -3,
7, -2, -4, -2, -1, 1, 0, 1, 0, 2, -1, 1, 1, 2, 2, -3,
0, 5, -2, 2, 4, -8, -17, -5, -12, -20, -13, -10, -21, -11, -2, 2,
1, -3, 1, 1, -6, -3, -1, 0, 0, 2, -4, -1, 4, 0, -1, 2,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
8, 8, -10, -3, -11, 7, -1, -1, -7, 9, 6, -5, -8, 2, 10, -1,
-9, -6, -1, 4, 6, -6, -14, -13, 5, 10, 8, 13, 10, -9, -27, -7,
8, 13, 4, -20, 1, 5, -10, -2, -13, -9, -3, 15, 14, -1, -4, -5,
4, 1, 1, -1, 2, 0, -3, -5, 2, -11, 12, 4, 10, -10, -4, -3,
-12, -14, 12, 16, 20, -8, -19, -9, -18, -2, 15, 13, -4, -22, -15, 0,
18, -1, -3, -3, 0, 1, 2, 2, 2, 2, -10, -19, -14, 31, 35, 20,
-16, -17, -5, -12, -31, -4, 25, 91, 46, -19, -62, -36, -3, 7, -12, 11,
-13, 16, -15, 12, 8, -10, -13, 0, 10, 11, 2, -1, -6, 1, 3, 9,
1, -1, -2, 1, -11, 2, 2, -4, -3, 0, 2, -9, -3, 4, 3, 3,
-1, -1, 1, -1, 1, 4, -1, 1, 5, 1, 6, 5, 3, 11, 8, 0,
6, 3, 2, -2, 2, -2, -1, -3, -1, -4, -1, 1, 2, 3, 0, 1,
3, 2, 6, 3, -1, -2, -1, 1, -2, 2, 2, -2, -1, -2, 0, -1,
0, 3, -1, -1, -4, -3, 1, -1, -2, 0, -1, -1, 1, 0, -1, -7,
0, 0, 4, 22, 23, 4, 25, 21, -1, -1, 1, 1, 0, 3, 3, 3,
4, 1, 0, 3, -1, -4, -3, 0, -4, -3, -3, -3, -5, 2, 4, -1,
-2, 0, -3, -2, -2, -1, -2, -2, 1, -1, 3, 0, 0, -1, 2, -2,
-2, -1, -1, 0, 0, 1, 1, 0, 2, 3, 2, 2, 1, 0, -18, -15,
-13, -20, -19, -16, -15, -20, -16, 0, -2, -1, 1, 0, 1, -1, -2, 2,
-7, 31, -24, -12, -8, 33, 14, -20, 7, -1, 13, -19, -18, 15, -1, -5,
-11, 4, -5, 0, 2, 4, -14, 7, 3, 1, -2, -9, 13, -7, -23, 6,
18, 15, -37, 20, -10, 5, -6, -10, 35, -16, -7, 4, -10, 0, 0, -1,
0, 0, 5, -3, 0, 1, -5, -16, 6, -20, 74, -56, 31, -48, 24, 4,
3, -8, -11, 24, -1, -9, -5, 7, 5, -18, 9, 22, -10, -23, -16, 35,
-18, -3, -3, -4, -1, -1, 1, 0, 0, -4, 6, -16, 7, 7, 9, -12,
-11, 17, -1, 4, -14, 4, -10, 43, -30, 0, -26, 18, -6, 8, -11, 9,
-28, 20, -7, 17, -9, 10, -25, 25, 12, 13, -39, -11, 25, -10, 6, 5,
-10, 4, 7, -3, -20, 0, 1, -6, -3, 1, 7, -9, 1, -1, 6, -1,
-10, -11, -11, -19, -20, -16, -10, -15, -11, -7, -1, 9, -8, 1, 15, -7,
-1, 7, 4, 0, -1, 4, -2, -7, 6, 0, -3, -2, 4, 3, 2, -1,
2, 4, -1, -1, -8, -1, 4, -10, 4, 9, -6, 2, 10, 1, 0, -1,
7, -1, -6, 6, 0, -5, -1, -1, 0, -5, 3, 4, -7, -1, 4, -7,
-1, 6, -12, 3, 20, -14, -3, 14, -1, -3, 0, -1, 2, 4, -2, 3,
6, 3, -1, -2, 4, -1, -4, 4, 0, -3, -3, -2, 2, -2, 0, 7,
-4, -3, 5, 1, -2, -2, -3, 1, 4, 0, 2, 2, 1, 2, 4, 4,
0, -2, 2, 2, 1, 4, 11, 7, 11, 24, 13, 9, 19, 10, 3, 1,
-4, 4, -1, -4, 0, -4, -10, -1, 1, 0, 2, 3, -4, -1, 3, 0,
2, -1, 2, 2, 0, -3, -2, 0, 3, 8, 12, 11, -12, -17, -15, 5,
8, 7, -1, -5, -2, 4, 5, 4, -1, -2, -2, 12, 25, 8, -21, -47,
-22, 3, 17, 3, 3, 6, 6, 7, 0, -6, -4, -1, -4, 0, -2, 0,
1, 4, 2, -1, -3, -2, 5, 3, 0, -7, 8, 4, -1, -6, -2, 6,
11, 9, -1, -6, -4, -2, -8, 0, -12, -33, -14, 13, 42, 15, -6, -22,
-12, 1, 4, 3, -3, -5, -3, 1, -1, 0, 2, 4, 1, -4, -6, -5,
2, 5, 1, -3, -8, 2, -13, -42, -25, 10, 34, 20, 14, 32, 18, -5,
0, -5, -1, -7, 2, 1, -2, 1, -3, -5, 3, 4, 2, -2, -1, 0,
3, -12, -7, -12, 5, 7, 4, -2, -7, -3, 0, 1, 3, -2, -1, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
2, 11, -15, -2, 13, -20, -4, 6, -12, -1, 4, -9, -1, 11, -16, -2,
11, -13, -3, 6, -1, -4, 1, 0, -4, -2, 3, -6, 5, -1, -1, 6,
-4, 8, -2, -2, -1, 11, -7, -1, 36, -34, -5, 26, -20, -2, 3, -3,
-4, 2, -2, -4, 0, 2, -4, 16, -8, -7, 52, -40, -6, 41, -45, -3,
9, -7, 0, 18, -14, 0, 19, -18, 1, 0, -2, 1, -5, 1, -6, 6,
3, 0, 1, 4, -1, -2, 5, -1, -4, 5, 0, -14, 8, -1, -11, 10,
-1, -9, 7, 0, 5, -2, -3, 8, -3, -9, 9, -8, -4, -3, 1, 1,
-3, 5, 0, -9, 0, -3, -19, 17, -1, -29, 25, 7, -27, 12, -3, -6,
16, -4, -6, 10, -1, -10, 4, 1, -1, 8, 1, -6, 10, 0, -7, 9,
-11, 7, 18, 14, -42, 7, -6, 26, -14, -16, 11, 6, -1, -17, 8, 0,
-8, -4, 2, -6, 6, -1, 0, -8, -8, 4, 0, -10, 3, 14, 15, -62,
24, -7, 24, -16, -4, 28, -15, 2, -16, -2, 1, -22, 13, -1, -2, 2,
1, -6, -7, -8, 3, 0, -1, 22, -26, 20, -61, 27, -15, 5, 5, -4,
15, -2, -12, -12, 18, -1, -14, -3, 13, -4, -15, -19, 56, -23, -2, -17,
13, 0, 6, 3, 4, 2, 0, 4, 7, -1, 9, 12, -25, -20, 14, 4,
6, -11, 7, 9, 10, -17, -17, -23, 28, 1, 2, -7, -5, 0, 11, 2,
6, -18, -1, -4, 5, 9, 0, -33, -8, 44, -4, -3, -16, 13, 3, 4,
5, -7, 5, 2, -4, -13, -1, 3, -2, 8, 1, 9, -4, -4, 9, 6,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -4, -1, 4, 6, -5, 2, -4, 2, -5, 0, -1, 10, 15, 10, -8,
-10, -8, 4, 7, 5, -9, -11, -7, 3, 4, 5, 18, 21, 14, 10, 3,
3, -30, -40, -29, 1, 2, -4, 1, -2, -3, 4, 1, -1, 4, 3, 3,
-2, -2, -1, -1, 1, -2, 0, -1, 2, -2, -3, -1, 0, 0, 4, -8,
-8, -10, 16, 23, 15, -5, -5, -5, -22, -46, -28, -1, -1, -1, 14, 10,
5, -2, -3, 0, 0, 2, 2, -2, -2, 0, -11, -8, -4, 12, 13, 6,
-1, -2, -4, -4, 1, 1, 13, 14, 11, -6, -11, -11, 0, -5, -6, 1,
-4, 1, -12, -10, -14, 3, -1, 1, -1, -5, 4, -1, -5, -3, 18, 23,
12, -1, 3, -4, -20, -16, -11, 1, 1, -2, 0, -3, 0, -1, 3, 3,
-1, 1, 0, 0, 1, 0, -1, 0, -1, 0, -2, -1, -1, -3, 0, -1,
0, 2, 1, -3, 1, -4, -10, -7, 1, -6, -3, 0, 0, 0, 0, 1,
0, 1, 0, 0, 1, 0, 1, -1, 0, 2, -1, 0, 0, 2, 0, 0,
0, -9, -5, 0, -6, -4, 0, 1, 0, -1, 0, 0, -1, -2, 0, -1,
-2, -2, 0, -2, -1, -1, -2, -1, 0, 1, 0, 1, 1, 0, 1, 0,
-2, 7, 1, 3, -3, -27, -23, -1, -28, -21, 0, -1, -1, 1, 0, 1,
2, 1, 1, 1, 0, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, 0,
1, 0, -1, 0, 0, -1, 1, 1, 0, 0, 0, 0, 0, 0, 4, 2,
2, 0, 1, 2, 0, 1, 2, -9, -5, -7, -2, 27, 25, -7, 28, 24,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
6, 4, 5, 2, 4, 3, 4, 0, 3, 1, -10, -11, 5, 2, 3, 3,
3, 2, -23, -93, -43, -1, -10, -4, 28, 100, 55, 1, -2, 3, 0, -2,
1, 2, 2, 2, 5, 3, 4, -3, -2, -2, -2, 0, -4, 31, 119, 43,
4, 18, 16, -48, -121, -66, 3, 3, 5, 0, -3, -4, 0, 1, -1, 9,
16, 10, -7, -6, -12, -6, -1, -6, 1, -3, -3, -6, -6, -1, 0, -5,
-3, -27, -16, -14, -3, 3, 0, 17, 17, 4, 3, 11, 8, 4, -1, 4,
-17, -27, -16, 2, -4, 0, 1, 1, 2, 3, -1, 0, 5, 1, 4, 4,
4, 0, 1, 0, -2, 2, 2, 5, 3, 2, 3, 3, 5, 2, 2, 1,
-5, 9, 5, -3, 4, -1, -6, -5, 7, 21, -4, -4, -2, 2, -8, -12,

};
# 9 "cnn_accel.cpp" 2
# 1 "./1_conv_weight_bias.h" 1




int8_t w_1_conv_weight_bias[32] = {
3, 3, 29, 39, 14, -11, 78, -10, -8, 7, 27, 38, 7, 62, -23, 47,
35, 41, 35, 83, -5, 40, -80, -7, 108, -22, 79, 100, 122, 67, 127, 48,

};
# 10 "cnn_accel.cpp" 2

# 1 "./2_cv1_conv_weight.h" 1




int8_t w_2_cv1_conv_weight[1024] = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
4, 9, 1, 10, -20, 4, 0, 11, 2, 0, -2, 1, 2, 13, -14, 1,
-1, -9, 3, -20, 4, -2, 11, 3, -22, 1, 0, -7, 2, -1, -5, -3,
20, 20, -2, -35, -19, 23, -1, -20, -33, -5, 1, 2, 3, -3, -23, 4,
-2, -13, 3, -15, -5, -1, 6, -29, -18, 1, -1, -16, 4, 0, 0, 0,
-12, 1, 4, 1, -2, -10, 1, 3, 2, 2, 0, 11, 9, -6, 5, 0,
-2, -20, 11, 4, 2, -22, -3, 8, 2, -2, 3, -20, 5, 2, -10, -3,
-6, 11, 1, 0, -2, 2, 0, 0, -6, -1, 0, 2, 14, -4, 6, 6,
12, 8, -16, -9, 11, -4, -10, -24, -11, -13, 6, 16, 5, -4, 43, 1,
-2, -7, -2, -15, -10, -4, -3, -8, -14, -3, 0, 2, 1, -14, -4, 2,
0, 5, 6, -9, 1, 8, -10, -3, -5, 12, -2, 3, 3, 0, -6, 0,
-1, 5, -55, -2, -1, 0, -2, 0, 2, 38, -29, 7, -6, 0, 1, -11,
-6, -1, 0, 1, 4, -6, 0, -2, -1, 1, -7, -3, -1, -4, 2, 23,
-16, -18, -3, 23, -8, -17, 5, 14, 23, -1, 2, -4, -2, -8, -4, -1,
3, 10, 1, -8, 2, 3, -12, 18, -2, 4, 1, 13, -4, 0, 8, 1,
-20, -19, 0, -16, 16, -24, -4, -11, -15, -1, 2, 2, 1, -26, 20, 2,
0, 13, 7, 15, 2, -1, -24, -12, 15, 3, 1, 10, 1, -2, -3, 1,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-11, 11, -3, 6, -26, -9, -5, 11, -2, 1, 1, 3, -2, 13, -13, 2,
-4, -54, 2, -33, 3, -46, 9, 3, -31, -19, 0, -38, -12, 1, -16, 3,
-3, 6, 1, 5, 11, 0, -1, 2, 4, -2, -1, -6, 2, 7, 1, 1,
1, -7, -3, 9, -1, -19, 5, -3, 4, -22, 3, -3, -7, -2, 13, 0,
-28, -17, 3, -1, -1, -33, -2, 4, 7, 1, -1, 4, -2, -17, 6, 3,
-1, -38, -1, 5, 5, -36, -18, 4, -1, -26, 3, -31, -6, 2, -7, -3,
-22, 10, 4, -13, -4, -14, 4, 5, 0, 4, 8, 8, -33, -3, 4, 1,
-6, -5, 9, -7, -2, -14, -12, -2, -9, 19, -2, -13, -127, 0, 9, 2,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
1, -1, 0, 0, 1, 0, 23, -1, 0, 0, -3, 0, 1, 1, -1, 0,
18, -1, 10, 1, 0, -1, 2, 0, 0, 0, -26, -1, 1, -12, 0, 1,
0, -1, 12, -1, 1, 2, -6, 0, -3, -36, -14, -1, -2, 1, 2, -8,
-2, 0, -3, 1, -3, -1, 2, -2, 2, 0, -5, -3, -1, 0, -1, 1,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 1, -2, -1, 3, 1, -3, -3, 1, -3, 16, -1, -4, 1, 1, 1,
-10, 0, -2, 2, 2, 0, 1, 0, -1, -3, -8, 1, 1, 2, 0, -44,
0, -1, 0, 0, 0, 0, 20, 0, 0, -2, -1, 0, -1, 0, -1, 0,
-24, -1, -1, 1, 0, -1, -1, -1, 0, -1, 18, -1, 1, -15, -2, 0,
0, 2, -4, -2, 0, 2, -2, -3, -1, -1, -37, -6, 0, 1, 0, 0,
-9, -1, -5, 0, -3, -2, 1, -1, 1, -7, -3, 1, 1, -2, 1, 22,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
1, -1, -31, -1, 2, 1, -7, 1, -2, 11, 2, -3, -2, -1, 3, -4,
-2, 1, -1, 1, -4, -1, 2, -2, 1, -2, -6, -1, 0, 0, 1, -15,
0, -1, -1, 0, 1, 0, -13, 0, 0, -1, 0, 0, -2, 0, -1, -2,
18, -1, 5, -1, -2, 0, 0, -1, -1, -2, 11, -1, 1, 29, -1, 0,
-4, -1, 1, 0, -3, -5, 1, 4, 3, 2, -4, -44, 26, -1, -4, -5,
4, -3, 1, -1, 0, -2, 1, 1, -1, 6, 1, -4, -11, -1, 1, 1,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-5, -8, -3, -30, -12, -7, -3, -38, -28, -4, 1, 2, 2, -21, -8, -8,
-1, 0, 2, -15, 2, 0, -19, -33, -6, -1, -2, -1, 2, -2, 6, 0,
-2, -3, -1, 0, -2, -2, 1, -1, 0, -1, 0, 1, -2, -2, -2, -3,
1, -2, -21, -1, -4, 0, -2, -1, -2, 0, -3, -3, 2, -1, 1, 0,

};
# 12 "cnn_accel.cpp" 2
# 1 "./2_cv1_conv_weight_bias.h" 1




int8_t w_2_cv1_conv_weight_bias[32] = {
86, 33, 51, 85, 39, 78, 0, 77, 33, 47, 38, 41, 79, 76, 61, 34,
60, 28, 9, 77, 37, 55, 41, 48, 42, 39, 74, 16, 31, 53, 17, 127,

};
# 13 "cnn_accel.cpp" 2






void conv_layer(
    volatile int8_t *input,
    volatile int8_t *output,
    int H, int W,
    int IN_CH,
    int OUT_CH,
    int8_t *weights,
    int8_t *bias
) {

#pragma HLS INLINE off

 int8_t tile_in[16 +2][16 +2][32];
#pragma HLS BIND_STORAGE variable=tile_in type=ram_t2p impl=bram

 int8_t tile_out[16][16][8];
#pragma HLS BIND_STORAGE variable=tile_out type=ram_t2p impl=bram

 VITIS_LOOP_37_1: for (int oc_base = 0; oc_base < OUT_CH; oc_base += 8) {

        VITIS_LOOP_39_2: for (int ty = 0; ty < H; ty += 16) {
            VITIS_LOOP_40_3: for (int tx = 0; tx < W; tx += 16) {


                VITIS_LOOP_43_4: for (int y = 0; y < 16 +2; y++) {
                    VITIS_LOOP_44_5: for (int x = 0; x < 16 +2; x++) {
#pragma HLS PIPELINE II=1

 int gy = ty + y - 1;
                        int gx = tx + x - 1;

                        VITIS_LOOP_50_6: for (int c = 0; c < IN_CH; c++) {
                            if (gy >= 0 && gx >= 0 && gy < H && gx < W) {
                                int idx = (gy * W + gx) * IN_CH;
                                tile_in[y][x][c] = input[idx + c];
                            } else {
                                tile_in[y][x][c] = 0;
                            }
                        }
                    }
                }


                VITIS_LOOP_62_7: for (int oc = 0; oc < 8; oc++) {
                    VITIS_LOOP_63_8: for (int y = 0; y < 16; y++) {
                        VITIS_LOOP_64_9: for (int x = 0; x < 16; x++) {

#pragma HLS PIPELINE II=1

 int sum = bias[oc_base + oc];

                            VITIS_LOOP_70_10: for (int ic = 0; ic < IN_CH; ic++) {
                                VITIS_LOOP_71_11: for (int ky = 0; ky < 3; ky++) {
                                    VITIS_LOOP_72_12: for (int kx = 0; kx < 3; kx++) {

                                        int w_idx =
                                            (oc_base+oc)*(IN_CH*3*3) +
                                            ic*(3*3) +
                                            ky*3 + kx;

                                        sum += tile_in[y+ky][x+kx][ic] *
                                               weights[w_idx];
                                    }
                                }
                            }

                            sum >>= 8;

                            if (sum < 0) sum = 0;
                            if (sum > 127) sum = 127;

                            tile_out[y][x][oc] = (int8_t)sum;
                        }
                    }
                }


                VITIS_LOOP_96_13: for (int y = 0; y < 16; y++) {
                    VITIS_LOOP_97_14: for (int x = 0; x < 16; x++) {
#pragma HLS PIPELINE II=1

 int gy = ty + y;
                        int gx = tx + x;

                        if (gy < H && gx < W) {
                            int idx = (gy * W + gx) * OUT_CH;

                            VITIS_LOOP_106_15: for (int oc = 0; oc < 8; oc++) {
                                output[idx + oc_base + oc] =
                                    tile_out[y][x][oc];
                            }
                        }
                    }
                }
            }
        }
    }
}


__attribute__((sdx_kernel("cnn_accel", 0))) void cnn_accel(
    volatile int8_t *input,
    volatile int8_t *output,
    int size
) {
#line 25 "/scratch1/iot/run_hls.tcl"
#pragma HLSDIRECTIVE TOP name=cnn_accel
# 123 "cnn_accel.cpp"


#pragma HLS INTERFACE m_axi port=input bundle=gmem
#pragma HLS INTERFACE m_axi port=output bundle=gmem
#pragma HLS INTERFACE s_axilite port=size
#pragma HLS INTERFACE s_axilite port=return


 conv_layer(input, output, size, size, 3, 16,
               w_0_conv_weight, w_0_conv_weight_bias);

    conv_layer(output, output, size, size, 16, 32,
               w_1_conv_weight, w_1_conv_weight_bias);

    conv_layer(output, output, size, size, 32, 64,
               w_2_cv1_conv_weight, w_2_cv1_conv_weight_bias);
}
