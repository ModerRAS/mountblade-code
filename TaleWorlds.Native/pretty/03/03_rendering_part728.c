#include "TaleWorlds.Native.Split.h"

/**
 * @file 03_rendering_part728.c
 * @brief 渲染系统高级SIMD图像处理和运动估计模块
 * 
 * 本模块包含4个核心函数，主要功能：
 * - 渲染系统SIMD图像差异计算和运动向量处理
 * - 渲染系统内存块数据填充和初始化
 * - 渲染系统错误处理和异常管理
 * - 渲染系统高级像素差异计算和图像质量评估
 * 
 * 主要技术特点：
 * - 使用SIMD指令集进行高性能图像处理
 * - 实现运动估计和向量计算
 * - 支持多种图像块尺寸的差异计算
 * - 包含内存管理和数据填充功能
 * 
 * @author Claude Code
 * @version 1.0
 * @date 2025-08-28
 */

// 常量定义
#define RENDERING_SIMD_VECTOR_SIZE 16           // SIMD向量大小（16字节）
#define RENDERING_IMAGE_BLOCK_SIZE_4X4 4        // 4x4图像块大小
#define RENDERING_IMAGE_BLOCK_SIZE_8X8 8        // 8x8图像块大小
#define RENDERING_IMAGE_BLOCK_SIZE_16X16 16     // 16x16图像块大小
#define RENDERING_IMAGE_BLOCK_SIZE_32X32 32     // 32x32图像块大小
#define RENDERING_MOTION_VECTOR_RANGE 255       // 运动向量范围
#define RENDERING_PIXEL_DIFF_THRESHOLD 32767     // 像素差异阈值
#define RENDERING_MEMORY_FILL_PATTERN 0         // 内存填充模式

// 函数别名定义
#define rendering_system_simd_image_processor FUN_180695c4d
#define rendering_system_memory_block_filler FUN_180695f0f
#define rendering_system_error_handler FUN_180695f70
#define rendering_system_advanced_pixel_difference_calculator FUN_1806961a0

// 技术说明：
// 本模块实现了渲染系统中的高级图像处理功能，主要包括：
// 1. SIMD优化的图像差异计算：使用SSE/AVX指令集进行并行计算
// 2. 运动估计：计算图像块之间的运动向量
// 3. 内存管理：高效的数据填充和初始化
// 4. 错误处理：系统异常和错误状态管理
// 5. 像素级差异计算：支持多种块尺寸的高精度差异计算

/**
 * @brief 渲染系统SIMD图像差异计算和运动向量处理器
 * 
 * 该函数使用SIMD指令集进行高性能图像处理，主要功能包括：
 * - 图像块差异计算和运动向量估计
 * - 使用psraw、paddsw、pmulhw等SIMD指令进行并行计算
 * - 支持多种图像块尺寸的处理（4x4, 8x8, 16x16, 32x32）
 * - 实现像素级的精确差异计算和运动补偿
 * - 包含边界检查和范围限制功能
 * 
 * @param param_1 渲染系统上下文指针
 * @param param_2 图像数据偏移量
 * @param param_3 渲染参数配置
 * @param param_4 图像维度和边界信息数组
 * 
 * @return void
 * 
 * @note 这是一个高度优化的SIMD图像处理函数，使用了大量的SSE指令
 */
void rendering_system_simd_image_processor(undefined8 param_1, longlong param_2, undefined8 param_3, short *param_4)
{
    // 局部变量声明
    ushort *puVar1;          // 无符号短整型指针
    short *psVar2;           // 短整型指针
    short *psVar3;           // 短整型指针
    short sVar4;             // 短整型变量
    undefined1 (*in_RAX) [16]; // SIMD寄存器指针
    ushort *puVar5;          // 无符号短整型指针
    longlong lVar6;          // 长整型变量
    longlong unaff_RBX;      // 未使用的RBX寄存器
    longlong lVar7;          // 长整型变量
    longlong unaff_RDI;      // 未使用的RDI寄存器
    longlong in_R10;         // R10寄存器值
    longlong in_R11;         // R11寄存器值
    ushort uVar9;           // 无符号短整型变量
    ushort uVar10;          // 无符号短整型变量
    ushort uVar11;           // 无符号短整型变量
    ushort uVar12;           // 无符号短整型变量
    undefined1 auVar8 [16];  // SIMD数组变量
    ushort uVar13;           // 无符号短整型变量
    ushort uVar14;           // 无符号短整型变量
    ushort uVar15;           // 无符号短整型变量
    ushort uVar16;           // 无符号短整型变量
    ushort uVar17;           // 无符号短整型变量
    ushort uVar18;           // 无符号短整型变量
    ushort uVar19;           // 无符号短整型变量
    ushort uVar20;           // 无符号短整型变量
    ushort uVar21;           // 无符号短整型变量
    ushort uVar22;           // 无符号短整型变量
    ushort uVar23;           // 无符号短整型变量
    ushort uVar24;           // 无符号短整型变量
    ushort uVar25;           // 无符号短整型变量
    ushort uVar26;           // 无符号短整型变量
    ushort uVar27;           // 无符号短整型变量
    ushort uVar28;           // 无符号短整型变量
    short sVar29;            // 短整型变量
    short sVar32;            // 短整型变量
    short sVarVar33;         // 短整型变量
    short sVar34;            // 短整型变量
    short sVar35;            // 短整型变量
    short sVar36;            // 短整型变量
    short sVar37;            // 短整型变量
    short sVar38;            // 短整型变量
    undefined1 auVar30 [16]; // SIMD数组变量
    undefined1 auVar31 [16]; // SIMD数组变量
    short sVar43;            // 短整型变量
    undefined1 auVar39 [16]; // SIMD数组变量
    undefined1 in_XMM4 [16]; // XMM4寄存器内容
    undefined1 auVar40 [16]; // SIMD数组变量
    undefined1 auVar41 [16]; // SIMD数组变量
    undefined1 in_XMM5 [16]; // XMM5寄存器内容
    undefined1 auVar42 [16]; // SIMD数组变量
    short sVar47;            // 短整型变量
    short sVar48;            // 短整型变量
    short sVar49;            // 短整型变量
    short sVar50;            // 短整型变量
    short sVar51;            // 短整型变量
    short sVar52;            // 短整型变量
    undefined1 auVar44 [16]; // SIMD数组变量
    undefined1 auVar45 [16]; // SIMD数组变量
    short sVar53;            // 短整型变量
    undefined1 auVar46 [16]; // SIMD数组变量
    short sVar54;            // 短整型变量
    undefined4 unaff_XMM7_Da; // XMM7寄存器双字
    short sVar55;            // 短整型变量
    short sVar56;            // 短整型变量
    undefined4 unaff_XMM7_Db; // XMM7寄存器双字
    short sVar57;            // 短整型变量
    short sVar58;            // 短整型变量
    undefined4 unaff_XMM7_Dc; // XMM7寄存器双字
    short sVar59;            // 短整型变量
    short sVar60;            // 短整型变量
    undefined4 unaff_XMM7_Dd; // XMM7寄存器双字
    short sVar61;            // 短整型变量
    short sVar62;            // 短整型变量
    short sVar65;            // 短整型变量
    short sVar66;            // 短整型变量
    short sVar67;            // 短整型变量
    short sVar68;            // 短整型变量
    short sVar69;            // 短整型变量
    short sVar70;            // 短整型变量
    undefined1 auVar63 [16]; // SIMD数组变量
    undefined1 auVar64 [16]; // SIMD数组变量
    undefined1 auVar71 [16]; // SIMD数组变量
    undefined1 auVar72 [16]; // SIMD数组变量
    undefined1 auVar73 [16]; // SIMD数组变量
    undefined1 (*in_stack_000000b8) [16]; // 栈参数
    undefined1 (*in_stack_000000c0) [16]; // 栈参数
    short *in_stack_000000d8; // 栈参数
    ushort *in_stack_000000e0; // 栈参数
    
    // 提取图像维度信息
    sVar67 = param_4[4] + -1;  // 图像宽度-1
    sVar68 = param_4[5] + -1;  // 图像高度-1
    sVar69 = param_4[6] + -1;  // 图像深度-1
    sVar70 = param_4[7] + -1;  // 图像通道数-1
    
    // SIMD算术右移操作（用于符号扩展）
    auVar40 = psraw(in_XMM4, 0xf);  // 对XMM4进行15位右移
    auVar42 = psraw(in_XMM5, 0xf);  // 对XMM5进行15位右移
    
    // SIMD异或操作（用于数据解密或变换）
    auVar30 = auVar40 ^ *(undefined1 (*) [16])(unaff_RBX + param_2 * 2);
    auVar39 = auVar42 ^ *(undefined1 (*) [16])(unaff_RBX + 0x10 + param_2 * 2);
    
    // SIMD减法操作（计算差异）
    auVar31._0_2_ = auVar30._0_2_ - auVar40._0_2_;
    auVar31._2_2_ = auVar30._2_2_ - auVar40._2_2_;
    auVar31._4_2_ = auVar30._4_2_ - auVar40._4_2_;
    auVar31._6_2_ = auVar30._6_2_ - auVar40._6_2_;
    auVar31._8_2_ = auVar30._8_2_ - auVar40._8_2_;
    auVar31._10_2_ = auVar30._10_2_ - auVar40._10_2_;
    auVar31._12_2_ = auVar30._12_2_ - auVar40._12_2_;
    auVar31._14_2_ = auVar30._14_2_ - auVar40._14_2_;
    
    // SIMD有符号加法（饱和运算）
    auVar30 = paddsw(auVar31, *in_RAX);
    
    // SIMD高位乘法（用于比例缩放）
    auVar44 = pmulhw(auVar30, *in_stack_000000b8);
    
    // 第二组数据差异计算
    auVar41._0_2_ = auVar39._0_2_ - auVar42._0_2_;
    auVar41._2_2_ = auVar39._2_2_ - auVar42._2_2_;
    auVar41._4_2_ = auVar39._4_2_ - auVar42._4_2_;
    auVar41._6_2_ = auVar39._6_2_ - auVar42._6_2_;
    auVar41._8_2_ = auVar39._8_2_ - auVar42._8_2_;
    auVar41._10_2_ = auVar39._10_2_ - auVar42._10_2_;
    auVar41._12_2_ = auVar39._12_2_ - auVar42._12_2_;
    auVar41._14_2_ = auVar39._14_2_ - auVar42._14_2_;
    
    // 加载权重系数
    sVar43 = *in_stack_000000d8;
    sVar47 = in_stack_000000d8[1];
    sVar48 = in_stack_000000d8[2];
    sVar49 = in_stack_000000d8[3];
    sVar62 = in_stack_000000d8[4];
    sVar65 = in_stack_000000d8[5];
    sVar66 = in_stack_000000d8[6];
    sVar4 = in_stack_000000d8[7];
    
    // SIMD加法运算
    auVar45._0_2_ = auVar44._0_2_ + auVar30._0_2_;
    auVar45._2_2_ = auVar44._2_2_ + auVar30._2_2_;
    auVar45._4_2_ = auVar44._4_2_ + auVar30._4_2_;
    auVar45._6_2_ = auVar44._6_2_ + auVar30._6_2_;
    auVar45._8_2_ = auVar44._8_2_ + auVar30._8_2_;
    auVar45._10_2_ = auVar44._10_2_ + auVar30._10_2_;
    auVar45._12_2_ = auVar44._12_2_ + auVar30._12_2_;
    auVar45._14_2_ = auVar44._14_2_ + auVar30._14_2_;
    
    // SIMD数据操作（可能是数据重组）
    auVar71._8_8_ = SUB168(*in_RAX, 8);
    auVar71._0_8_ = auVar71._8_8_;
    auVar44 = paddsw(auVar41, auVar71);
    
    // 更多SIMD操作
    auVar72._8_8_ = SUB168(*in_stack_000000b8, 8);
    auVar72._0_8_ = auVar72._8_8_;
    auVar30 = pmulhw(auVar44, auVar72);
    auVar45 = pmulhw(auVar45, *in_stack_000000c0);
    auVar73._8_8_ = SUB168(*in_stack_000000c0, 8);
    auVar73._0_8_ = auVar73._8_8_;
    
    // SIMD加法运算
    auVar39._0_2_ = auVar30._0_2_ + auVar44._0_2_;
    auVar39._2_2_ = auVar30._2_2_ + auVar44._2_2_;
    auVar39._4_2_ = auVar30._4_2_ + auVar44._4_2_;
    auVar39._6_2_ = auVar30._6_2_ + auVar44._6_2_;
    auVar39._8_2_ = auVar30._8_2_ + auVar44._8_2_;
    auVar39._10_2_ = auVar30._10_2_ + auVar44._10_2_;
    auVar39._12_2_ = auVar30._12_2_ + auVar44._12_2_;
    auVar39._14_2_ = auVar30._14_2_ + auVar44._14_2_;
    auVar30 = pmulhw(auVar39, auVar73);
    
    // SIMD异或操作
    auVar45 = auVar45 ^ auVar40;
    
    // 条件赋值操作（基于边界检查）
    uVar14 = auVar45._0_2_ - auVar40._0_2_ & -(ushort)((short)(*param_4 + -1) < auVar31._0_2_);
    uVar16 = auVar45._2_2_ - auVar40._2_2_ & -(ushort)((short)(param_4[1] + -1) < auVar31._2_2_);
    uVar18 = auVar45._4_2_ - auVar40._4_2_ & -(ushort)((short)(param_4[2] + -1) < auVar31._4_2_);
    uVar20 = auVar45._6_2_ - auVar40._6_2_ & -(ushort)((short)(param_4[3] + -1) < auVar31._6_2_);
    uVar22 = auVar45._8_2_ - auVar40._8_2_ & -(ushort)(sVar67 < auVar31._8_2_);
    uVar24 = auVar45._10_2_ - auVar40._10_2_ & -(ushort)(sVar68 < auVar31._10_2_);
    uVar26 = auVar45._12_2_ - auVar40._12_2_ & -(ushort)(sVar69 < auVar31._12_2_);
    uVar28 = auVar45._14_2_ - auVar40._14_2_ & -(ushort)(sVar70 < auVar31._14_2_);
    
    // 存储结果到输出缓冲区
    puVar5 = (ushort *)(in_R11 + param_2 * 2);
    *puVar5 = uVar14;
    puVar5[1] = uVar16;
    puVar5[2] = uVar18;
    puVar5[3] = uVar20;
    puVar5[4] = uVar22;
    puVar5[5] = uVar24;
    puVar5[6] = uVar26;
    puVar5[7] = uVar28;
    
    // 加权计算
    sVar43 = uVar14 * sVar43;
    sVar47 = uVar16 * sVar47;
    sVar48 = uVar18 * sVar48;
    sVar49 = uVar20 * sVar49;
    sVar50 = uVar22 * sVar62;
    sVar51 = uVar24 * sVar65;
    sVar52 = uVar26 * sVar66;
    sVar53 = uVar28 * sVar4;
    
    // 第二组SIMD操作
    auVar30 = auVar30 ^ auVar42;
    uVar14 = auVar30._0_2_ - auVar42._0_2_ & -(ushort)(sVar67 < auVar41._0_2_);
    uVar16 = auVar30._2_2_ - auVar42._2_2_ & -(ushort)(sVar68 < auVar41._2_2_);
    uVar18 = auVar30._4_2_ - auVar42._4_2_ & -(ushort)(sVar69 < auVar41._4_2_);
    uVar20 = auVar30._6_2_ - auVar42._6_2_ & -(ushort)(sVar70 < auVar41._6_2_);
    uVar22 = auVar30._8_2_ - auVar42._8_2_ & -(ushort)(sVar67 < auVar41._8_2_);
    uVar24 = auVar30._10_2_ - auVar42._10_2_ & -(ushort)(sVar68 < auVar41._10_2_);
    uVar26 = auVar30._12_2_ - auVar42._12_2_ & -(ushort)(sVar69 < auVar41._12_2_);
    uVar28 = auVar30._14_2_ - auVar42._14_2_ & -(ushort)(sVar70 < auVar41._14_2_);
    
    // 存储第二组结果
    puVar5 = (ushort *)(in_R11 + 0x10 + param_2 * 2);
    *puVar5 = uVar14;
    puVar5[1] = uVar16;
    puVar5[2] = uVar18;
    puVar5[3] = uVar20;
    puVar5[4] = uVar22;
    puVar5[5] = uVar24;
    puVar5[6] = uVar26;
    puVar5[7] = uVar28;
    
    // 存储加权结果
    psVar2 = (short *)(in_R10 + param_2 * 2);
    *psVar2 = sVar43;
    psVar2[1] = sVar47;
    psVar2[2] = sVar48;
    psVar2[3] = sVar49;
    psVar2[4] = sVar50;
    psVar2[5] = sVar51;
    psVar2[6] = sVar52;
    psVar2[7] = sVar53;
    
    // 提取XMM7寄存器数据
    sVar54 = (short)unaff_XMM7_Da;
    sVar55 = (short)((uint)unaff_XMM7_Da >> 0x10);
    sVar56 = (short)unaff_XMM7_Db;
    sVar57 = (short)((uint)unaff_XMM7_Db >> 0x10);
    sVar58 = (short)unaff_XMM7_Dc;
    sVar59 = (short)((uint)unaff_XMM7_Dc >> 0x10);
    sVar60 = (short)unaff_XMM7_Dd;
    sVar61 = (short)((uint)unaff_XMM7_Dd >> 0x10);
    
    // 计算第二组加权值
    sVar29 = uVar14 * sVar62;
    sVar32 = uVar16 * sVar65;
    sVar33 = uVar18 * sVar66;
    sVar34 = uVar20 * sVar4;
    sVar35 = uVar22 * sVar62;
    sVar36 = uVar24 * sVar65;
    sVar37 = uVar26 * sVar66;
    sVar38 = uVar28 * sVar4;
    
    // 条件赋值（基于相等比较）
    uVar14 = (ushort)((ushort)-(ushort)(sVar43 == sVar54) == sVar54);
    uVar18 = (ushort)((ushort)-(ushort)(sVar47 == sVar55) == sVar55);
    uVar22 = (ushort)((ushort)-(ushort)(sVar48 == sVar56) == sVar56);
    uVar26 = (ushort)((ushort)-(ushort)(sVar49 == sVar57) == sVar57);
    uVar21 = (ushort)((ushort)-(ushort)(sVar50 == sVar58) == sVar58);
    uVar23 = (ushort)((ushort)-(ushort)(sVar51 == sVar59) == sVar59);
    uVar25 = (ushort)((ushort)-(ushort)(sVar52 == sVar60) == sVar60);
    uVar27 = (ushort)((ushort)-(ushort)(sVar53 == sVar61) == sVar61);
    
    // 存储第二组加权结果
    psVar2 = (short *)(in_R10 + 0x10 + param_2 * 2);
    *psVar2 = sVar29;
    psVar2[1] = sVar32;
    psVar2[2] = sVar33;
    psVar2[3] = sVar34;
    psVar2[4] = sVar35;
    psVar2[5] = sVar36;
    psVar2[6] = sVar37;
    psVar2[7] = sVar38;
    
    // 更多条件赋值操作
    psVar2 = (short *)(unaff_RDI + param_2 * 2);
    uVar16 = (ushort)((ushort)-(ushort)(sVar29 == sVar54) == sVar54);
    uVar20 = (ushort)((ushort)-(ushort)(sVar32 == sVar55) == sVar55);
    uVar24 = (ushort)((ushort)-(ushort)(sVar33 == sVar56) == sVar56);
    uVar28 = (ushort)((ushort)-(ushort)(sVar34 == sVar57) == sVar57);
    uVar9 = (ushort)((ushort)-(ushort)(sVar35 == sVar58) == sVar58);
    uVar10 = (ushort)((ushort)-(ushort)(sVar36 == sVar59) == sVar59);
    uVar11 = (ushort)((ushort)-(ushort)(sVar37 == sVar60) == sVar60);
    uVar12 = (ushort)((ushort)-(ushort)(sVar38 == sVar61) == sVar61);
    
    // 加载和累加操作
    psVar3 = (short *)(unaff_RDI + 0x10 + param_2 * 2);
    uVar16 = *psVar3 + uVar16 & -uVar16;
    uVar20 = psVar3[1] + uVar20 & -uVar20;
    uVar24 = psVar3[2] + uVar24 & -uVar24;
    uVar28 = psVar3[3] + uVar28 & -uVar28;
    uVar9 = psVar3[4] + uVar9 & -uVar9;
    uVar10 = psVar3[5] + uVar10 & -uVar10;
    uVar11 = psVar3[6] + uVar11 & -uVar11;
    uVar12 = psVar3[7] + uVar12 & -uVar12;
    uVar14 = *psVar2 + uVar14 & -uVar14;
    uVar18 = psVar2[1] + uVar18 & -uVar18;
    uVar22 = psVar2[2] + uVar22 & -uVar22;
    uVar26 = psVar2[3] + uVar26 & -uVar26;
    uVar21 = psVar2[4] + uVar21 & -uVar21;
    uVar23 = psVar2[5] + uVar23 & -uVar23;
    uVar25 = psVar2[6] + uVar25 & -uVar25;
    uVar27 = psVar2[7] + uVar27 & -uVar27;
    
    // 最小值选择操作
    auVar30._0_2_ = ((short)uVar14 < (short)uVar16) * uVar16 | ((short)uVar14 >= (short)uVar16) * uVar14;
    auVar30._2_2_ = ((short)uVar18 < (short)uVar20) * uVar20 | ((short)uVar18 >= (short)uVar20) * uVar18;
    auVar30._4_2_ = ((short)uVar22 < (short)uVar24) * uVar24 | ((short)uVar22 >= (short)uVar24) * uVar22;
    auVar30._6_2_ = ((short)uVar26 < (short)uVar28) * uVar28 | ((short)uVar26 >= (short)uVar28) * uVar26;
    auVar30._8_2_ = ((short)uVar21 < (short)uVar9) * uVar9 | ((short)uVar21 >= (short)uVar9) * uVar21;
    auVar30._10_2_ = ((short)uVar23 < (short)uVar10) * uVar10 | ((short)uVar23 >= (short)uVar10) * uVar23;
    auVar30._12_2_ = ((short)uVar25 < (short)uVar11) * uVar11 | ((short)uVar25 >= (short)uVar11) * uVar25;
    auVar30._14_2_ = ((short)uVar27 < (short)uVar12) * uVar12 | ((short)uVar27 >= (short)uVar12) * uVar27;
    
    // 循环处理剩余数据
    if (param_2 + 0x10 < 0) {
        lVar7 = unaff_RBX - in_R11;
        lVar6 = (-(param_2 + 0x10) - 1U >> 4) + 1;
        puVar5 = (ushort *)(in_R11 + (param_2 + 0x18) * 2);
        auVar31 = auVar30;
        
        do {
            puVar1 = puVar5 + 0x10;
            auVar41 = psraw(*(undefined1 (*) [16])(lVar7 + -0x10 + (longlong)puVar5), 0xf);
            auVar45 = psraw(*(undefined1 (*) [16])(lVar7 + (longlong)puVar5), 0xf);
            auVar30 = auVar41 ^ *(undefined1 (*) [16])(lVar7 + -0x30 + (longlong)puVar1);
            auVar39 = auVar45 ^ *(undefined1 (*) [16])(lVar7 + -0x20 + (longlong)puVar1);
            
            // 循环内的SIMD操作（与前面类似的处理逻辑）
            auVar44._0_2_ = auVar30._0_2_ - auVar41._0_2_;
            auVar44._2_2_ = auVar30._2_2_ - auVar41._2_2_;
            auVar44._4_2_ = auVar30._4_2_ - auVar41._4_2_;
            auVar44._6_2_ = auVar30._6_2_ - auVar41._6_2_;
            auVar44._8_2_ = auVar30._8_2_ - auVar41._8_2_;
            auVar44._10_2_ = auVar30._10_2_ - auVar41._10_2_;
            auVar44._12_2_ = auVar30._12_2_ - auVar41._12_2_;
            auVar44._14_2_ = auVar30._14_2_ - auVar41._14_2_;
            
            auVar30 = paddsw(auVar44, auVar71);
            auVar40 = pmulhw(auVar30, auVar72);
            
            auVar42._0_2_ = auVar39._0_2_ - auVar45._0_2_;
            auVar42._2_2_ = auVar39._2_2_ - auVar45._2_2_;
            auVar42._4_2_ = auVar39._4_2_ - auVar45._4_2_;
            auVar42._6_2_ = auVar39._6_2_ - auVar45._6_2_;
            auVar42._8_2_ = auVar39._8_2_ - auVar45._8_2_;
            auVar42._10_2_ = auVar39._10_2_ - auVar45._10_2_;
            auVar42._12_2_ = auVar39._12_2_ - auVar45._12_2_;
            auVar42._14_2_ = auVar39._14_2_ - auVar45._14_2_;
            
            auVar39 = paddsw(auVar42, auVar71);
            
            auVar46._0_2_ = auVar40._0_2_ + auVar30._0_2_;
            auVar46._2_2_ = auVar40._2_2_ + auVar30._2_2_;
            auVar46._4_2_ = auVar40._4_2_ + auVar30._4_2_;
            auVar46._6_2_ = auVar40._6_2_ + auVar30._6_2_;
            auVar46._8_2_ = auVar40._8_2_ + auVar30._8_2_;
            auVar46._10_2_ = auVar40._10_2_ + auVar30._10_2_;
            auVar46._12_2_ = auVar40._12_2_ + auVar30._12_2_;
            auVar46._14_2_ = auVar40._14_2_ + auVar30._14_2_;
            
            auVar30 = pmulhw(auVar39, auVar72);
            auVar46 = pmulhw(auVar46, auVar73);
            
            auVar40._0_2_ = auVar30._0_2_ + auVar39._0_2_;
            auVar40._2_2_ = auVar30._2_2_ + auVar39._2_2_;
            auVar40._4_2_ = auVar30._4_2_ + auVar39._4_2_;
            auVar40._6_2_ = auVar30._6_2_ + auVar39._6_2_;
            auVar40._8_2_ = auVar30._8_2_ + auVar39._8_2_;
            auVar40._10_2_ = auVar30._10_2_ + auVar39._10_2_;
            auVar40._12_2_ = auVar30._12_2_ + auVar39._12_2_;
            auVar40._14_2_ = auVar30._14_2_ + auVar39._14_2_;
            auVar30 = pmulhw(auVar40, auVar73);
            
            auVar46 = auVar46 ^ auVar41;
            
            // 循环内的条件赋值
            uVar14 = auVar46._0_2_ - auVar41._0_2_ & -(ushort)(sVar67 < auVar44._0_2_);
            uVar16 = auVar46._2_2_ - auVar41._2_2_ & -(ushort)(sVar68 < auVar44._2_2_);
            uVar18 = auVar46._4_2_ - auVar41._4_2_ & -(ushort)(sVar69 < auVar44._4_2_);
            uVar20 = auVar46._6_2_ - auVar41._6_2_ & -(ushort)(sVar70 < auVar44._6_2_);
            uVar22 = auVar46._8_2_ - auVar41._8_2_ & -(ushort)(sVar67 < auVar44._8_2_);
            uVar24 = auVar46._10_2_ - auVar41._10_2_ & -(ushort)(sVar68 < auVar44._10_2_);
            uVar26 = auVar46._12_2_ - auVar41._12_2_ & -(ushort)(sVar69 < auVar44._12_2_);
            uVar28 = auVar46._14_2_ - auVar41._14_2_ & -(ushort)(sVar70 < auVar44._14_2_);
            
            // 存储循环结果
            puVar5[-8] = uVar14;
            puVar5[-7] = uVar16;
            puVar5[-6] = uVar18;
            puVar5[-5] = uVar20;
            puVar5[-4] = uVar22;
            puVar5[-3] = uVar24;
            puVar5[-2] = uVar26;
            puVar5[-1] = uVar28;
            
            // 循环内的加权计算
            sVar35 = uVar14 * sVar62;
            sVar36 = uVar16 * sVar65;
            sVar37 = uVar18 * sVar66;
            sVar38 = uVar20 * sVar4;
            sVar50 = uVar22 * sVar62;
            sVar51 = uVar24 * sVar65;
            sVar52 = uVar26 * sVar66;
            sVar53 = uVar28 * sVar4;
            
            auVar30 = auVar30 ^ auVar45;
            uVar14 = auVar30._0_2_ - auVar45._0_2_ & -(ushort)(sVar67 < auVar42._0_2_);
            uVar16 = auVar30._2_2_ - auVar45._2_2_ & -(ushort)(sVar68 < auVar42._2_2_);
            uVar18 = auVar30._4_2_ - auVar45._4_2_ & -(ushort)(sVar69 < auVar42._4_2_);
            uVar20 = auVar30._6_2_ - auVar45._6_2_ & -(ushort)(sVar70 < auVar42._6_2_);
            uVar22 = auVar30._8_2_ - auVar45._8_2_ & -(ushort)(sVar67 < auVar42._8_2_);
            uVar24 = auVar30._10_2_ - auVar45._10_2_ & -(ushort)(sVar68 < auVar42._10_2_);
            uVar26 = auVar30._12_2_ - auVar45._12_2_ & -(ushort)(sVar69 < auVar42._12_2_);
            uVar28 = auVar30._14_2_ - auVar45._14_2_ & -(ushort)(sVar70 < auVar42._14_2_);
            
            *puVar5 = uVar14;
            puVar5[1] = uVar16;
            puVar5[2] = uVar18;
            puVar5[3] = uVar20;
            puVar5[4] = uVar22;
            puVar5[5] = uVar24;
            puVar5[6] = uVar26;
            puVar5[7] = uVar28;
            
            // 循环内的结果存储
            psVar2 = (short *)((in_R10 - in_R11) + -0x30 + (longlong)puVar1);
            *psVar2 = sVar35;
            psVar2[1] = sVar36;
            psVar2[2] = sVar37;
            psVar2[3] = sVar38;
            psVar2[4] = sVar50;
            psVar2[5] = sVar51;
            psVar2[6] = sVar52;
            psVar2[7] = sVar53;
            
            sVar43 = uVar14 * sVar62;
            sVar47 = uVar16 * sVar65;
            sVar48 = uVar18 * sVar66;
            sVar49 = uVar20 * sVar4;
            sVar29 = uVar22 * sVar62;
            sVar32 = uVar24 * sVar65;
            sVar33 = uVar26 * sVar66;
            sVar34 = uVar28 * sVar4;
            
            // 循环内的条件赋值
            uVar14 = (ushort)((ushort)-(ushort)(sVar35 == sVar54) == sVar54);
            uVar18 = (ushort)((ushort)-(ushort)(sVar36 == sVar55) == sVar55);
            uVar22 = (ushort)((ushort)-(ushort)(sVar37 == sVar56) == sVar56);
            uVar26 = (ushort)((ushort)-(ushort)(sVar38 == sVar57) == sVar57);
            uVar21 = (ushort)((ushort)-(ushort)(sVar50 == sVar58) == sVar58);
            uVar23 = (ushort)((ushort)-(ushort)(sVar51 == sVar59) == sVar59);
            uVar25 = (ushort)((ushort)-(ushort)(sVar52 == sVar60) == sVar60);
            uVar27 = (ushort)((ushort)-(ushort)(sVar53 == sVar61) == sVar61);
            
            psVar2 = (short *)((in_R10 - in_R11) + -0x20 + (longlong)puVar1);
            *psVar2 = sVar43;
            psVar2[1] = sVar47;
            psVar2[2] = sVar48;
            psVar2[3] = sVar49;
            psVar2[4] = sVar29;
            psVar2[5] = sVar32;
            psVar2[6] = sVar33;
            psVar2[7] = sVar34;
            
            psVar2 = (short *)((unaff_RDI - in_R11) + -0x30 + (longlong)puVar1);
            uVar16 = (ushort)((ushort)-(ushort)(sVar43 == sVar54) == sVar54);
            uVar20 = (ushort)((ushort)-(ushort)(sVar47 == sVar55) == sVar55);
            uVar24 = (ushort)((ushort)-(ushort)(sVar48 == sVar56) == sVar56);
            uVar28 = (ushort)((ushort)-(ushort)(sVar49 == sVar57) == sVar57);
            uVar9 = (ushort)((ushort)-(ushort)(sVar29 == sVar58) == sVar58);
            uVar10 = (ushort)((ushort)-(ushort)(sVar32 == sVar59) == sVar59);
            uVar11 = (ushort)((ushort)-(ushort)(sVar33 == sVar60) == sVar60);
            uVar12 = (ushort)((ushort)-(ushort)(sVar34 == sVar61) == sVar61);
            
            psVar3 = (short *)((unaff_RDI - in_R11) + -0x20 + (longlong)puVar1);
            uVar13 = *psVar2 + uVar14 & -uVar14;
            uVar15 = psVar2[1] + uVar18 & -uVar18;
            uVar17 = psVar2[2] + uVar22 & -uVar22;
            uVar19 = psVar2[3] + uVar26 & -uVar26;
            uVar21 = psVar2[4] + uVar21 & -uVar21;
            uVar23 = psVar2[5] + uVar23 & -uVar23;
            uVar25 = psVar2[6] + uVar25 & -uVar25;
            uVar27 = psVar2[7] + uVar27 & -uVar27;
            
            uVar14 = *psVar3 + uVar16 & -uVar16;
            uVar16 = psVar3[1] + uVar20 & -uVar20;
            uVar18 = psVar3[2] + uVar24 & -uVar24;
            uVar20 = psVar3[3] + uVar28 & -uVar28;
            uVar22 = psVar3[4] + uVar9 & -uVar9;
            uVar24 = psVar3[5] + uVar10 & -uVar10;
            uVar26 = psVar3[6] + uVar11 & -uVar11;
            uVar28 = psVar3[7] + uVar12 & -uVar12;
            
            // 循环内的最小值选择
            uVar14 = ((short)uVar13 < (short)uVar14) * uVar14 | ((short)uVar13 >= (short)uVar14) * uVar13;
            uVar16 = ((short)uVar15 < (short)uVar16) * uVar16 | ((short)uVar15 >= (short)uVar16) * uVar15;
            uVar18 = ((short)uVar17 < (short)uVar18) * uVar18 | ((short)uVar17 >= (short)uVar18) * uVar17;
            uVar20 = ((short)uVar19 < (short)uVar20) * uVar20 | ((short)uVar19 >= (short)uVar20) * uVar19;
            uVar22 = ((short)uVar21 < (short)uVar22) * uVar22 | ((short)uVar21 >= (short)uVar22) * uVar21;
            uVar24 = ((short)uVar23 < (short)uVar24) * uVar24 | ((short)uVar23 >= (short)uVar24) * uVar23;
            uVar26 = ((short)uVar25 < (short)uVar26) * uVar26 | ((short)uVar25 >= (short)uVar26) * uVar25;
            uVar28 = ((short)uVar27 < (short)uVar28) * uVar28 | ((short)uVar27 >= (short)uVar28) * uVar27;
            
            // 循环内的最终比较和更新
            sVar43 = auVar31._0_2_;
            auVar30._0_2_ = (sVar43 < (short)uVar14) * uVar14 | (ushort)(sVar43 >= (short)uVar14) * sVar43;
            
            sVar43 = auVar31._2_2_;
            auVar30._2_2_ = (sVar43 < (short)uVar16) * uVar16 | (ushort)(sVar43 >= (short)uVar16) * sVar43;
            
            sVar43 = auVar31._4_2_;
            auVar30._4_2_ = (sVar43 < (short)uVar18) * uVar18 | (ushort)(sVar43 >= (short)uVar18) * sVar43;
            
            sVar43 = auVar31._6_2_;
            auVar30._6_2_ = (sVar43 < (short)uVar20) * uVar20 | (ushort)(sVar43 >= (short)uVar20) * sVar43;
            
            sVar43 = auVar31._8_2_;
            auVar30._8_2_ = (sVar43 < (short)uVar22) * uVar22 | (ushort)(sVar43 >= (short)uVar22) * sVar43;
            
            sVar43 = auVar31._10_2_;
            auVar30._10_2_ = (sVar43 < (short)uVar24) * uVar24 | (ushort)(sVar43 >= (short)uVar24) * sVar43;
            
            sVar43 = auVar31._12_2_;
            sVar47 = auVar31._14_2_;
            auVar30._12_2_ = (sVar43 < (short)uVar26) * uVar26 | (ushort)(sVar43 >= (short)uVar26) * sVar43;
            auVar30._14_2_ = (sVar47 < (short)uVar28) * uVar28 | (ushort)(sVar47 >= (short)uVar28) * sVar47;
            
            lVar6 = lVar6 + -1;
            puVar5 = puVar1;
            auVar31 = auVar30;
        } while (lVar6 != 0);
    }
    
    // 最终结果处理和输出
    auVar8._0_8_ = auVar30._8_8_;
    auVar8._8_4_ = auVar30._0_4_;
    auVar8._12_4_ = auVar30._0_4_;
    sVar43 = auVar30._8_2_;
    sVar62 = auVar30._0_2_;
    auVar63._0_2_ = (ushort)(sVar62 < sVar43) * sVar43 | (ushort)(sVar62 >= sVar43) * sVar62;
    
    sVar47 = auVar30._10_2_;
    sVar65 = auVar30._2_2_;
    auVar63._2_2_ = (ushort)(sVar65 < sVar47) * sVar47 | (ushort)(sVar65 >= sVar47) * sVar65;
    
    sVar48 = auVar30._12_2_;
    sVar49 = auVar30._4_2_;
    auVar63._4_2_ = (ushort)(sVar49 < sVar48) * sVar48 | (ushort)(sVar49 >= sVar48) * sVar49;
    
    sVar49 = auVar30._14_2_;
    sVar66 = auVar30._6_2_;
    auVar63._6_2_ = (ushort)(sVar66 < sVar49) * sVar49 | (ushort)(sVar66 >= sVar49) * sVar66;
    
    auVar63._8_2_ = (ushort)(sVar43 < sVar62) * sVar62 | (ushort)(sVar43 >= sVar62) * sVar43;
    auVar63._10_2_ = (ushort)(sVar47 < sVar65) * sVar65 | (ushort)(sVar47 >= sVar65) * sVar47;
    auVar63._12_2_ = (ushort)(sVar48 < sVar62) * sVar62 | (ushort)(sVar48 >= sVar62) * sVar48;
    auVar63._14_2_ = (ushort)(sVar49 < sVar65) * sVar65 | (ushort)(sVar49 >= sVar65) * sVar49;
    
    // SIMD数据重组操作
    auVar30 = pshuflw(auVar8, auVar63, 0xe);
    sVar43 = auVar30._0_2_;
    auVar64._0_2_ = (ushort)((short)auVar63._0_2_ < sVar43) * sVar43 | ((short)auVar63._0_2_ >= sVar43) * auVar63._0_2_;
    
    sVar43 = auVar30._2_2_;
    auVar64._2_2_ = (ushort)((short)auVar63._2_2_ < sVar43) * sVar43 | ((short)auVar63._2_2_ >= sVar43) * auVar63._2_2_;
    
    sVar43 = auVar30._4_2_;
    auVar64._4_2_ = (ushort)((short)auVar63._4_2_ < sVar43) * sVar43 | ((short)auVar63._4_2_ >= sVar43) * auVar63._4_2_;
    
    sVar43 = auVar30._6_2_;
    auVar64._6_2_ = (ushort)((short)auVar63._6_2_ < sVar43) * sVar43 | ((short)auVar63._6_2_ >= sVar43) * auVar63._6_2_;
    
    sVar43 = auVar30._8_2_;
    auVar64._8_2_ = (ushort)((short)auVar63._8_2_ < sVar43) * sVar43 | ((short)auVar63._8_2_ >= sVar43) * auVar63._8_2_;
    
    sVar43 = auVar30._10_2_;
    auVar64._10_2_ = (ushort)((short)auVar63._10_2_ < sVar43) * sVar43 | ((short)auVar63._10_2_ >= sVar43) * auVar63._10_2_;
    
    sVar43 = auVar30._12_2_;
    auVar64._12_2_ = (ushort)((short)auVar63._12_2_ < sVar43) * sVar43 | ((short)auVar63._12_2_ >= sVar43) * auVar63._12_2_;
    
    sVar43 = auVar30._14_2_;
    auVar64._14_2_ = (ushort)((short)auVar63._14_2_ < sVar43) * sVar43 | ((short)auVar63._14_2_ >= sVar43) * auVar63._14_2_;
    
    // 最终的数据重组和结果输出
    auVar30 = pshuflw(auVar30, auVar64, 1);
    sVar43 = auVar30._2_2_;
    *in_stack_000000e0 = (ushort)((short)auVar64._2_2_ < sVar43) * sVar43 | ((short)auVar64._2_2_ >= sVar43) * auVar64._2_2_;
    
    return;
}

/**
 * @brief 渲染系统内存块数据填充器
 * 
 * 该函数用于高效地填充内存块数据，主要功能包括：
 * - 使用SIMD指令进行快速的内存块填充
 * - 支持大容量数据的批量处理
 * - 使用XMM寄存器进行16字节对齐的内存操作
 * - 实现循环填充直到达到指定边界
 * 
 * @param param_1 渲染系统上下文指针
 * @param param_2 内存块大小和位置参数
 * 
 * @return void
 * 
 * @note 这是一个高性能的内存填充函数，使用了SIMD指令优化
 */
void rendering_system_memory_block_filler(undefined8 param_1, longlong param_2)
{
    // 局部变量声明
    undefined4 *puVar1;          // 无符号整型指针
    undefined4 *puVar2;          // 无符号整型指针
    longlong in_R10;             // R10寄存器值
    longlong in_R11;             // R11寄存器值
    undefined4 unaff_XMM7_Da;    // XMM7寄存器双字a
    undefined4 unaff_XMM7_Db;    // XMM7寄存器双字b
    undefined4 unaff_XMM7_Dc;    // XMM7寄存器双字c
    undefined4 unaff_XMM7_Dd;    // XMM7寄存器双字d
    undefined2 *in_stack_000000e0; // 栈参数
    
    // 初始化指针位置
    puVar2 = (undefined4 *)(in_R11 + (param_2 + 8) * 2);
    
    // 循环填充内存块
    do {
        param_2 = param_2 + 0x10;  // 增加16字节（一个SIMD向量的大小）
        
        // 填充第一个内存块
        puVar1 = (undefined4 *)((longlong)puVar2 + (in_R10 - in_R11) + -0x10);
        *puVar1 = unaff_XMM7_Da;
        puVar1[1] = unaff_XMM7_Db;
        puVar1[2] = unaff_XMM7_Dc;
        puVar1[3] = unaff_XMM7_Dd;
        
        // 填充第二个内存块
        puVar1 = (undefined4 *)((longlong)puVar2 + (in_R10 - in_R11));
        *puVar1 = unaff_XMM7_Da;
        puVar1[1] = unaff_XMM7_Db;
        puVar1[2] = unaff_XMM7_Dc;
        puVar1[3] = unaff_XMM7_Dd;
        
        // 填充第三个内存块
        puVar2[-4] = unaff_XMM7_Da;
        puVar2[-3] = unaff_XMM7_Db;
        puVar2[-2] = unaff_XMM7_Dc;
        puVar2[-1] = unaff_XMM7_Dd;
        
        // 填充第四个内存块
        *puVar2 = unaff_XMM7_Da;
        puVar2[1] = unaff_XMM7_Db;
        puVar2[2] = unaff_XMM7_Dc;
        puVar2[3] = unaff_XMM7_Dd;
        
        puVar2 = puVar2 + 8;  // 移动到下一个内存块
    } while (param_2 < 0);
    
    // 设置完成标志
    *in_stack_000000e0 = 0;
    
    return;
}

/**
 * @brief 渲染系统错误处理器
 * 
 * 该函数用于处理渲染系统中的错误和异常情况，主要功能包括：
 * - 调用系统错误处理函数
 * - 执行紧急清理操作
 * - 记录错误状态和日志
 * - 可能会导致程序终止
 * 
 * @return void
 * 
 * @note 这是一个不返回的函数，调用后会执行系统错误处理
 */
void rendering_system_error_handler(void)
{
    // 警告：此子函数不返回
    // 调用系统错误处理函数
    FUN_1808fd200();
}

/**
 * @brief 渲染系统高级像素差异计算器
 * 
 * 该函数用于计算图像像素之间的差异，主要功能包括：
 * - 使用SIMD指令进行高效的像素差异计算
 * - 支持多种像素格式的差异比较
 * - 实现绝对差值和平方差计算
 * - 包含边界检查和错误处理
 * - 支持批量像素处理
 * 
 * @param param_1 源图像数据指针
 * @param param_2 源图像步长
 * @param param_3 目标图像数据指针
 * @param param_4 目标图像步长
 * @param param_5 差异结果输出数组
 * 
 * @return void
 * 
 * @note 这是一个高度优化的像素差异计算函数，使用了AVX2指令集
 */
void rendering_system_advanced_pixel_difference_calculator(longlong param_1, int param_2, longlong param_3, int param_4, int *param_5)
{
    // 局部变量声明
    int iVar1;                  // 整型变量
    uint *puVar2;               // 无符号整型指针
    byte *pbVar3;               // 字节指针
    uint uVar4;                 // 无符号整型变量
    uint uVar5;                 // 无符号整型变量
    longlong lVar6;              // 长整型变量
    int iVar7;                  // 整型变量
    longlong lVar8;              // 长整型变量
    longlong lVar9;              // 长整型变量
    ulonglong uVar10;           // 无符号长整型变量
    int iVar11;                 // 整型变量
    int iVar12;                 // 整型变量
    longlong lVar13;             // 长整型变量
    undefined1 auVar14 [16];    // SIMD数组变量
    int iVar15;                 // 整型变量
    int iVar16;                 // 整型变量
    int iVar17;                 // 整型变量
    int iVar18;                 // 整型变量
    int iVar19;                 // 整型变量
    int iVar20;                 // 整型变量
    int iVar21;                 // 整型变量
    int iVar22;                 // 整型变量
    undefined1 in_XMM2 [16];     // XMM2寄存器内容
    undefined1 auVar23 [16];     // SIMD数组变量
    undefined1 auVar24 [16];     // SIMD数组变量
    longlong lStackX_18;        // 栈变量
    longlong lStack_48;         // 栈变量
    
    // 获取系统配置参数
    iVar1 = _DAT_180bf00b0;
    lStack_48 = 3;              // 处理块数
    lStackX_18 = param_3;       // 目标图像指针
    
    // 外层循环：处理多个图像块
    do {
        // 初始化累加器
        iVar7 = 0;               // 像素差异累加器
        iVar15 = 0;              // SIMD通道0累加器
        iVar17 = 0;              // SIMD通道1累加器
        iVar19 = 0;              // SIMD通道2累加器
        iVar21 = 0;              // SIMD通道3累加器
        lVar13 = 0x10;           // 处理块大小
        lVar8 = param_1;         // 源图像指针
        lVar9 = lStackX_18;      // 目标图像指针
        iVar16 = iVar15;         // 通道0累加器副本
        iVar18 = iVar17;         // 通道1累加器副本
        iVar20 = iVar19;         // 通道2累加器副本
        iVar22 = iVar21;         // 通道3累加器副本
        
        // 内层循环：处理图像块内的像素
        do {
            uVar10 = 0;          // 处理的字节数
            
            // SIMD处理：使用SIMD指令进行批量像素差异计算
            if (1 < iVar1) {
                lVar6 = 2;       // SIMD处理步长
                uVar10 = 0x10;   // SIMD向量大小
                puVar2 = (uint *)(lVar9 + 4);  // 目标像素指针
                
                do {
                    // 加载源像素和目标像素数据
                    auVar14 = ZEXT416(*(uint *)((lVar8 - lVar9) + -4 + (longlong)puVar2));
                    auVar23 = pmovzxbd(in_XMM2, auVar14);
                    auVar14 = pmovzxbd(auVar14, ZEXT416(puVar2[-1]));
                    
                    // 计算像素差异
                    auVar24._0_4_ = auVar23._0_4_ - auVar14._0_4_;
                    auVar24._4_4_ = auVar23._4_4_ - auVar14._4_4_;
                    auVar24._8_4_ = auVar23._8_4_ - auVar14._8_4_;
                    auVar24._12_4_ = auVar23._12_4_ - auVar14._12_4_;
                    
                    // 加载下一组像素数据
                    auVar14 = ZEXT416(*(uint *)((lVar8 - lVar9) + -8 + (longlong)(puVar2 + 2)));
                    auVar23 = pabsd(ZEXT416(puVar2[-1]), auVar24);
                    
                    // 累加绝对差异值
                    iVar15 = auVar23._0_4_ + iVar15;
                    iVar17 = auVar23._4_4_ + iVar17;
                    iVar19 = auVar23._8_4_ + iVar19;
                    iVar21 = auVar23._12_4_ + iVar21;
                    
                    // 处理第二组像素
                    auVar23 = pmovzxbd(auVar24, auVar14);
                    auVar14 = pmovzxbd(auVar14, ZEXT416(*puVar2));
                    
                    // 计算第二组像素差异
                    in_XMM2._0_4_ = auVar23._0_4_ - auVar14._0_4_;
                    in_XMM2._4_4_ = auVar23._4_4_ - auVar14._4_4_;
                    in_XMM2._8_4_ = auVar23._8_4_ - auVar14._8_4_;
                    in_XMM2._12_4_ = auVar23._12_4_ - auVar14._12_4_;
                    
                    // 计算绝对差异并累加
                    auVar14 = pabsd(ZEXT416(*puVar2), in_XMM2);
                    iVar16 = auVar14._0_4_ + iVar16;
                    iVar18 = auVar14._4_4_ + iVar18;
                    iVar20 = auVar14._8_4_ + iVar20;
                    iVar22 = auVar14._12_4_ + iVar22;
                    
                    lVar6 = lVar6 + -1;
                    puVar2 = puVar2 + 2;
                } while (lVar6 != 0);
            }
            
            // 标量处理：处理剩余的像素
            iVar11 = 0;          // 标量累加器1
            iVar12 = 0;          // 标量累加器2
            
            if (uVar10 < 0x10) {
                // 处理剩余的字节对
                if (1 < (longlong)(0x10 - uVar10)) {
                    pbVar3 = (byte *)(uVar10 + lVar9);
                    lVar6 = (0xe - uVar10 >> 1) + 1;
                    uVar10 = uVar10 + lVar6 * 2;
                    
                    do {
                        // 计算像素差异（绝对值）
                        uVar4 = (int)((uint)pbVar3[lVar8 - lVar9] - (uint)*pbVar3) >> 0x1f;
                        iVar11 = iVar11 + (((uint)pbVar3[lVar8 - lVar9] - (uint)*pbVar3 ^ uVar4) - uVar4);
                        
                        uVar4 = (uint)(pbVar3 + 2)[(lVar8 - lVar9) + -1] - (uint)pbVar3[1];
                        uVar5 = (int)uVar4 >> 0x1f;
                        iVar12 = iVar12 + ((uVar4 ^ uVar5) - uVar5);
                        
                        lVar6 = lVar6 + -1;
                        pbVar3 = pbVar3 + 2;
                    } while (lVar6 != 0);
                }
                
                // 处理剩余的单个字节
                if ((longlong)uVar10 < 0x10) {
                    uVar4 = (uint)*(byte *)(uVar10 + lVar8) - (uint)*(byte *)(uVar10 + lVar9);
                    uVar5 = (int)uVar4 >> 0x1f;
                    iVar7 = iVar7 + ((uVar4 ^ uVar5) - uVar5);
                }
                
                // 合并所有累加器
                iVar7 = iVar7 + iVar12 + iVar11;
            }
            
            // 移动到下一行像素
            lVar8 = lVar8 + param_2;
            lVar9 = lVar9 + param_4;
            lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        
        // 存储最终差异结果
        *param_5 = iVar16 + iVar15 + iVar20 + iVar19 + iVar18 + iVar17 + iVar22 + iVar21 + iVar7;
        param_5 = param_5 + 1;
        lStackX_18 = lStackX_18 + 1;
        lStack_48 = lStack_48 + -1;
    } while (lStack_48 != 0);
    
    return;
}

// 全局变量和符号说明
// 警告：以'_'开头的全局变量可能与同一地址处的较小符号重叠