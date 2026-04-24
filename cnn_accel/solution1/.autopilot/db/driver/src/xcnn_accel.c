// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2024.2 (64-bit)
// Tool Version Limit: 2024.11
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.
// 
// ==============================================================
/***************************** Include Files *********************************/
#include "xcnn_accel.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XCnn_accel_CfgInitialize(XCnn_accel *InstancePtr, XCnn_accel_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Control_BaseAddress = ConfigPtr->Control_BaseAddress;
    InstancePtr->Control_r_BaseAddress = ConfigPtr->Control_r_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XCnn_accel_Start(XCnn_accel *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCnn_accel_ReadReg(InstancePtr->Control_BaseAddress, XCNN_ACCEL_CONTROL_ADDR_AP_CTRL) & 0x80;
    XCnn_accel_WriteReg(InstancePtr->Control_BaseAddress, XCNN_ACCEL_CONTROL_ADDR_AP_CTRL, Data | 0x01);
}

u32 XCnn_accel_IsDone(XCnn_accel *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCnn_accel_ReadReg(InstancePtr->Control_BaseAddress, XCNN_ACCEL_CONTROL_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XCnn_accel_IsIdle(XCnn_accel *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCnn_accel_ReadReg(InstancePtr->Control_BaseAddress, XCNN_ACCEL_CONTROL_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XCnn_accel_IsReady(XCnn_accel *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCnn_accel_ReadReg(InstancePtr->Control_BaseAddress, XCNN_ACCEL_CONTROL_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XCnn_accel_EnableAutoRestart(XCnn_accel *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCnn_accel_WriteReg(InstancePtr->Control_BaseAddress, XCNN_ACCEL_CONTROL_ADDR_AP_CTRL, 0x80);
}

void XCnn_accel_DisableAutoRestart(XCnn_accel *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCnn_accel_WriteReg(InstancePtr->Control_BaseAddress, XCNN_ACCEL_CONTROL_ADDR_AP_CTRL, 0);
}

void XCnn_accel_Set_size(XCnn_accel *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCnn_accel_WriteReg(InstancePtr->Control_BaseAddress, XCNN_ACCEL_CONTROL_ADDR_SIZE_DATA, Data);
}

u32 XCnn_accel_Get_size(XCnn_accel *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCnn_accel_ReadReg(InstancePtr->Control_BaseAddress, XCNN_ACCEL_CONTROL_ADDR_SIZE_DATA);
    return Data;
}

void XCnn_accel_Set_input_r(XCnn_accel *InstancePtr, u64 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCnn_accel_WriteReg(InstancePtr->Control_r_BaseAddress, XCNN_ACCEL_CONTROL_R_ADDR_INPUT_R_DATA, (u32)(Data));
    XCnn_accel_WriteReg(InstancePtr->Control_r_BaseAddress, XCNN_ACCEL_CONTROL_R_ADDR_INPUT_R_DATA + 4, (u32)(Data >> 32));
}

u64 XCnn_accel_Get_input_r(XCnn_accel *InstancePtr) {
    u64 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCnn_accel_ReadReg(InstancePtr->Control_r_BaseAddress, XCNN_ACCEL_CONTROL_R_ADDR_INPUT_R_DATA);
    Data += (u64)XCnn_accel_ReadReg(InstancePtr->Control_r_BaseAddress, XCNN_ACCEL_CONTROL_R_ADDR_INPUT_R_DATA + 4) << 32;
    return Data;
}

void XCnn_accel_Set_output_r(XCnn_accel *InstancePtr, u64 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCnn_accel_WriteReg(InstancePtr->Control_r_BaseAddress, XCNN_ACCEL_CONTROL_R_ADDR_OUTPUT_R_DATA, (u32)(Data));
    XCnn_accel_WriteReg(InstancePtr->Control_r_BaseAddress, XCNN_ACCEL_CONTROL_R_ADDR_OUTPUT_R_DATA + 4, (u32)(Data >> 32));
}

u64 XCnn_accel_Get_output_r(XCnn_accel *InstancePtr) {
    u64 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XCnn_accel_ReadReg(InstancePtr->Control_r_BaseAddress, XCNN_ACCEL_CONTROL_R_ADDR_OUTPUT_R_DATA);
    Data += (u64)XCnn_accel_ReadReg(InstancePtr->Control_r_BaseAddress, XCNN_ACCEL_CONTROL_R_ADDR_OUTPUT_R_DATA + 4) << 32;
    return Data;
}

void XCnn_accel_InterruptGlobalEnable(XCnn_accel *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCnn_accel_WriteReg(InstancePtr->Control_BaseAddress, XCNN_ACCEL_CONTROL_ADDR_GIE, 1);
}

void XCnn_accel_InterruptGlobalDisable(XCnn_accel *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCnn_accel_WriteReg(InstancePtr->Control_BaseAddress, XCNN_ACCEL_CONTROL_ADDR_GIE, 0);
}

void XCnn_accel_InterruptEnable(XCnn_accel *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XCnn_accel_ReadReg(InstancePtr->Control_BaseAddress, XCNN_ACCEL_CONTROL_ADDR_IER);
    XCnn_accel_WriteReg(InstancePtr->Control_BaseAddress, XCNN_ACCEL_CONTROL_ADDR_IER, Register | Mask);
}

void XCnn_accel_InterruptDisable(XCnn_accel *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XCnn_accel_ReadReg(InstancePtr->Control_BaseAddress, XCNN_ACCEL_CONTROL_ADDR_IER);
    XCnn_accel_WriteReg(InstancePtr->Control_BaseAddress, XCNN_ACCEL_CONTROL_ADDR_IER, Register & (~Mask));
}

void XCnn_accel_InterruptClear(XCnn_accel *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XCnn_accel_WriteReg(InstancePtr->Control_BaseAddress, XCNN_ACCEL_CONTROL_ADDR_ISR, Mask);
}

u32 XCnn_accel_InterruptGetEnabled(XCnn_accel *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XCnn_accel_ReadReg(InstancePtr->Control_BaseAddress, XCNN_ACCEL_CONTROL_ADDR_IER);
}

u32 XCnn_accel_InterruptGetStatus(XCnn_accel *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XCnn_accel_ReadReg(InstancePtr->Control_BaseAddress, XCNN_ACCEL_CONTROL_ADDR_ISR);
}

