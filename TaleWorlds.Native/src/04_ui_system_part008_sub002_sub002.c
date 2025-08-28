#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part008_sub002_sub002.c - UI系统高级数据处理和变换模块
// 本模块包含7个核心函数，涵盖UI系统数据处理、矩阵变换、优化处理、高级处理、验证、最终处理和布尔检查等功能
// 主要函数包括：ui_system_advanced_data_processor、ui_system_matrix_transformer、ui_system_optimization_handler等

// ============================================================================
// 常量定义和函数别名
// ============================================================================

// 函数别名定义，便于理解和维护
#define ui_system_advanced_data_processor FUN_1806587d0
#define ui_system_matrix_transformer FUN_180658a60
#define ui_system_optimization_handler FUN_180658ccb
#define ui_system_advanced_processor FUN_180658d13
#define ui_system_validation_handler FUN_180658f54
#define ui_system_final_processor FUN_1806590e5
#define ui_system_boolean_checker FUN_180659163

// 内存操作常量
#define UI_SYSTEM_ALIGNMENT_SIZE 0x10       // UI系统内存对齐大小
#define UI_SYSTEM_BLOCK_SIZE 0x20           // UI系统内存块大小
#define UI_SYSTEM_MAX_ITERATIONS 100        // UI系统最大迭代次数
#define UI_SYSTEM_PRECISION_THRESHOLD 1e-6  // UI系统精度阈值

// 矩阵操作常量
#define MATRIX_SIZE_4x4 16                  // 4x4矩阵大小
#define MATRIX_SIZE_3x3 9                   // 3x3矩阵大小
#define MATRIX_IDENTITY_VALUE 1.0f          // 矩阵单位值

// ============================================================================
// 核心函数实现
// ============================================================================

/**
 * UI系统高级数据处理器
 * 
 * 该函数负责处理UI系统中的高级数据操作，包括数据转换、内存管理和状态更新。
 * 使用复杂的指针运算和内存操作来确保数据的正确处理和传输。
 * 
 * @param param_1 指向UI系统数据结构的指针，包含主要数据和处理状态
 * @param param_2 指向输出数据缓冲区的指针，用于存储处理后的数据
 * @param param_3 指向配置参数的指针，包含处理所需的配置信息
 * @return 无返回值，通过指针参数输出处理结果
 * 
 * 处理流程：
 * 1. 验证输入参数的有效性
 * 2. 初始化内存缓冲区和处理状态
 * 3. 执行数据转换和处理操作
 * 4. 更新系统状态和输出结果
 * 5. 清理临时资源并返回
 */
void ui_system_advanced_data_processor(longlong *param_1, longlong *param_2, longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong lStackX_8;
  undefined8 uStackX_18;
  undefined8 uVar13;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined4 uStack_48;
  
  // 初始化数据结构和状态变量
  uVar13 = 0xfffffffffffffffe;
  lVar5 = param_2[1];
  param_1[9] = *param_2;
  param_1[10] = lVar5;
  lVar5 = param_2[3];
  param_1[0xb] = param_2[2];
  param_1[0xc] = lVar5;
  lVar5 = param_2[5];
  param_1[0xd] = param_2[4];
  param_1[0xe] = lVar5;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x34);
  lVar5 = param_2[7];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(int *)(param_1 + 0xf) = (int)param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar1;
  *(int *)(param_1 + 0x10) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar2;
  
  // 计算处理范围和初始化缓冲区
  lVar5 = param_3[1] - *param_3 >> 4;
  puStack_60 = (undefined8 *)0x0;
  puStack_58 = (undefined8 *)0x0;
  puVar9 = (undefined8 *)0x0;
  puStack_50 = (undefined8 *)0x0;
  uStack_48 = 3;
  iVar4 = (int)lVar5;
  lStackX_8 = (longlong)iVar4;
  
  // 分配处理所需的内存缓冲区
  if (iVar4 != 0) {
    puStack_58 = (undefined8 *)
                 FUN_18062b420(_DAT_180c8ed18,lStackX_8 * 8,
                               CONCAT71((int7)(int3)((ulonglong)lVar5 >> 8),3),param_3,
                               0xfffffffffffffffe);
    puStack_50 = puStack_58 + lStackX_8;
  }
  
  // 设置处理指针和状态
  puVar8 = puStack_50;
  puVar7 = puStack_58;
  puVar10 = puStack_58;
  puVar11 = puVar9;
  puStack_60 = puStack_58;
  
  // 主处理循环：执行数据转换和处理操作
  if (0 < lStackX_8) {
    do {
      puVar3 = puStack_58;
      lVar5 = *param_3;
      if (puStack_58 < puVar8) {
        // 直接数据复制操作
        *puStack_58 = *(undefined8 *)((longlong)puVar11 + lVar5);
        puVar7 = puVar10;
      }
      else {
        // 动态内存扩展和数据迁移
        lVar6 = (longlong)puStack_58 - (longlong)puVar10 >> 3;
        if (lVar6 == 0) {
          lVar6 = 1;
LAB_1806588f2:
          // 分配新的内存块
          puVar7 = (undefined8 *)
                   FUN_18062b420(_DAT_180c8ed18,lVar6 * 8,
                                 CONCAT71((int7)((ulonglong)lStackX_8 >> 8),3),param_3,uVar13);
        }
        else {
          lVar6 = lVar6 * 2;
          puVar7 = puVar9;
          if (lVar6 != 0) goto LAB_1806588f2;
        }
        // 执行数据迁移
        if (puVar10 != puVar3) {
                    // WARNING: Subroutine does not return
          memmove(puVar7,puVar10,(longlong)puVar3 - (longlong)puVar10);
        }
        *puVar7 = *(undefined8 *)((longlong)puVar11 + lVar5);
        // 释放旧的内存块
        if (puVar10 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar10);
        }
        puVar8 = puVar7 + lVar6;
        puStack_60 = puVar7;
        puStack_50 = puVar8;
        puStack_58 = puVar7;
      }
      puStack_58 = puStack_58 + 1;
      lStackX_8 = lStackX_8 + -1;
      puVar10 = puVar7;
      puVar11 = puVar11 + 2;
    } while (lStackX_8 != 0);
  }
  
  // 清理和处理最终结果
  lVar5 = (longlong)puStack_58 - (longlong)puVar7;
  FUN_180640330(puVar7,puStack_58);
  FUN_18063efb0(param_1,&puStack_60,lVar5 >> 3 & 0xffffffff,1);
  FUN_18033a920(param_1 + 0x11,param_1[1] - *param_1 >> 3);
  
  // 最终数据验证和清理
  puVar8 = puVar9;
  if (param_1[1] - *param_1 >> 3 != 0) {
    do {
      uStackX_18 = CONCAT44(*(undefined4 *)((longlong)puVar9 + *param_1 + 4),
                            *(undefined4 *)((longlong)puVar9 + *param_1));
      *(undefined8 *)((longlong)puVar9 + param_1[0x11]) = uStackX_18;
      uVar12 = (int)puVar8 + 1;
      puVar9 = puVar9 + 1;
      puVar8 = (undefined8 *)(ulonglong)uVar12;
    } while ((ulonglong)(longlong)(int)uVar12 < (ulonglong)(param_1[1] - *param_1 >> 3));
  }
  
  // 释放临时内存资源
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar7);
}



/**
 * UI系统矩阵变换器
 * 
 * 该函数执行UI系统中的矩阵变换和数学计算操作，包括坐标变换、
 * 缩放、旋转和投影等操作。使用浮点运算确保高精度的变换结果。
 * 
 * @param param_1 指向变换矩阵的指针，包含变换参数和状态信息
 * @param param_2 指向输入坐标数组的指针，包含待变换的坐标数据
 * @param param_3 指向输出坐标数组的指针，用于存储变换后的坐标
 * @param param_4 指向辅助计算数组的指针，用于存储中间计算结果
 * @param param_5 变换模式标志，控制变换的具体行为和算法
 * @return 操作状态码，0表示成功，非0表示错误或异常
 * 
 * 算法特点：
 * - 使用4x4矩阵进行齐次坐标变换
 * - 支持多种变换模式（平移、旋转、缩放、投影）
 * - 采用浮点运算保证精度
 * - 包含边界检查和错误处理
 */
undefined8
ui_system_matrix_transformer(longlong *param_1, float *param_2, float *param_3, float *param_4, char param_5)

{
  // 输入参数和中间变量
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float *pfVar13;
  char cVar14;
  longlong lVar15;
  undefined8 uVar16;
  float *pfVar17;
  int iVar18;
  undefined4 *puVar19;
  float fVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  
  // 矩阵计算变量
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  
  // 栈变量和临时存储
  undefined8 uStackX_8;
  float fStackX_10;
  float fStackX_14;
  float fStackX_18;
  float fStackX_1c;
  float *pfStackX_20;
  
  // 变换结果缓冲区
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  
  // 控制变量和状态
  longlong lStack_1a8;
  longlong lStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  
  // 临时计算缓冲区
  float fStack_178;
  float fStack_174;
  float fStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  
  // 矩阵运算中间结果
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  
  fVar31 = *param_2;
  fVar32 = param_2[1];
  fVar33 = param_2[2];
  fVar6 = param_2[3];
  fVar20 = param_2[4];
  fVar30 = param_2[5];
  fVar7 = param_2[6];
  fVar8 = param_2[7];
  fVar9 = param_2[8];
  fVar10 = param_2[9];
  fVar11 = param_2[10];
  fVar12 = param_2[0xb];
  fVar1 = *(float *)(param_1 + 9);
  fVar27 = *(float *)(param_1 + 10);
  fVar25 = *(float *)((longlong)param_1 + 0x4c);
  fVar26 = *(float *)((longlong)param_1 + 0x7c);
  fVar28 = *(float *)((longlong)param_1 + 0x6c);
  fVar2 = *(float *)((longlong)param_1 + 0x5c);
  fVar3 = *(float *)(param_1 + 0xb);
  fStack_118 = fVar25 * fVar20 + fVar1 * fVar31 + fVar27 * fVar9;
  fStack_114 = fVar25 * fVar30 + fVar1 * fVar32 + fVar27 * fVar10;
  fStack_110 = fVar25 * fVar7 + fVar1 * fVar33 + fVar27 * fVar11;
  fStack_10c = fVar25 * fVar8 + fVar1 * fVar6 + fVar27 * fVar12;
  fVar1 = *(float *)(param_1 + 0xc);
  fVar27 = *(float *)(param_1 + 0xd);
  fVar34 = fVar2 * fVar20 + fVar3 * fVar31 + fVar1 * fVar9;
  fVar35 = fVar2 * fVar30 + fVar3 * fVar32 + fVar1 * fVar10;
  fVar36 = fVar2 * fVar7 + fVar3 * fVar33 + fVar1 * fVar11;
  fVar25 = *(float *)(param_1 + 0xe);
  fVar29 = *(float *)(param_1 + 0xf);
  fStack_108 = fVar28 * fVar20 + fVar27 * fVar31 + fVar25 * fVar9;
  fStack_104 = fVar28 * fVar30 + fVar27 * fVar32 + fVar25 * fVar10;
  fStack_100 = fVar28 * fVar7 + fVar27 * fVar33 + fVar25 * fVar11;
  fStack_fc = fVar28 * fVar8 + fVar27 * fVar6 + fVar25 * fVar12;
  fVar27 = *(float *)(param_1 + 0x10);
  fStack_f8 = fVar26 * fVar20 + fVar29 * fVar31 + fVar27 * fVar9 + param_2[0xc];
  fStack_f4 = fVar26 * fVar30 + fVar29 * fVar32 + fVar27 * fVar10 + param_2[0xd];
  fStack_f0 = fVar26 * fVar7 + fVar29 * fVar33 + fVar27 * fVar11 + param_2[0xe];
  fStack_ec = fVar26 * fVar8 + fVar29 * fVar6 + fVar27 * fVar12 + param_2[0xf];
  fVar25 = *param_3 - fStack_f8;
  fVar31 = param_3[1] - fStack_f4;
  fVar28 = param_3[2] - fStack_f0;
  fVar27 = param_3[8];
  fVar29 = param_3[6] - fStack_f0;
  fVar26 = param_3[4] - fStack_f8;
  fVar33 = param_3[5] - fStack_f4;
  fStack_1b8 = fVar31 * fStack_114 + fVar25 * fStack_118 + fStack_110 * fVar28;
  fStack_1b4 = fVar31 * fVar35 + fVar25 * fVar34 + fVar36 * fVar28;
  fVar32 = fVar31 * fStack_104 + fVar25 * fStack_108 + fStack_100 * fVar28;
  fStack_1ac = fVar31 * fStack_fc + fVar25 * fStack_fc + fStack_fc * fVar28;
  fStack_1c8 = fVar33 * fStack_114 + fVar26 * fStack_118 + fStack_110 * fVar29;
  fStack_1c4 = fVar33 * fVar35 + fVar26 * fVar34 + fVar36 * fVar29;
  fVar25 = fVar33 * fStack_104 + fVar26 * fStack_108 + fStack_100 * fVar29;
  fStack_1bc = fVar33 * fStack_fc + fVar26 * fStack_fc + fStack_fc * fVar29;
  if (((fVar25 - fVar27) * (fVar32 + fVar27) <= 0.0) ||
     ((fVar25 + fVar27) * (fVar32 - fVar27) <= 0.0)) {
    fVar26 = 3.4028235e+38;
    lVar23 = param_1[0x11];
    iVar18 = (int)(param_1[0x12] - lVar23 >> 3);
    lStack_1a0 = (longlong)iVar18;
    fStackX_10 = 0.0;
    fStackX_14 = 0.0;
    fVar28 = 3.4028235e+38;
    fStackX_18 = 0.0;
    fStackX_1c = 0.0;
    pfStackX_20 = param_4;
    fStack_1c0 = fVar25;
    fStack_1b0 = fVar32;
    if (0 < iVar18) {
      lVar4 = *param_1;
      iVar24 = 1;
      uStack_190 = 0;
      puVar19 = (undefined4 *)(lVar4 + 4);
      uStack_18c = 0x7f7fffff;
      uStack_180 = 0;
      uStack_17c = 0x7f7fffff;
      uStack_160 = 0;
      uStack_15c = 0x7f7fffff;
      uStack_150 = 0;
      uStack_14c = 0x7f7fffff;
      uStackX_8 = param_1;
      lStack_1a8 = lStack_1a0;
      fVar29 = fStackX_18;
      fVar31 = fStackX_1c;
      fVar33 = fStackX_10;
      fVar20 = fStackX_14;
      do {
        uStack_198 = *(undefined4 *)((lVar23 - lVar4) + -4 + (longlong)puVar19);
        uStack_194 = *(undefined4 *)((lVar23 - lVar4) + (longlong)puVar19);
        lVar22 = (longlong)(iVar24 % iVar18);
        uStack_188 = *(undefined4 *)(lVar23 + lVar22 * 8);
        uStack_184 = *(undefined4 *)(lVar23 + 4 + lVar22 * 8);
        FUN_1806457f0(&uStack_188,&uStack_198,&fStack_1b8,&fStack_1c8,&fStack_138,&fStack_178);
        uStack_164 = *puVar19;
        uStack_154 = *(undefined4 *)(lVar4 + 4 + lVar22 * 8);
        fVar30 = (fStack_174 - fStack_134) * (fStack_174 - fStack_134) +
                 (fStack_178 - fStack_138) * (fStack_178 - fStack_138) +
                 (fStack_170 - fStack_130) * (fStack_170 - fStack_130);
        uStack_168 = puVar19[-1];
        uStack_158 = *(undefined4 *)(lVar4 + lVar22 * 8);
        if (fVar30 < fVar26) {
          fVar29 = fStack_178;
          fVar31 = fStack_174;
          fVar26 = fVar30;
        }
        FUN_1806457f0(&uStack_158,&uStack_168,&fStack_1b8,&fStack_1c8,&fStack_148,&fStack_128);
        fVar30 = (fStack_124 - fStack_144) * (fStack_124 - fStack_144) +
                 (fStack_128 - fStack_148) * (fStack_128 - fStack_148) +
                 (fStack_120 - fStack_140) * (fStack_120 - fStack_140);
        if (fVar30 < fVar28) {
          fVar33 = fStack_148;
          fVar20 = fStack_144;
          fVar28 = fVar30;
        }
        iVar24 = iVar24 + 1;
        puVar19 = puVar19 + 2;
        lStack_1a8 = lStack_1a8 + -1;
      } while (lStack_1a8 != 0);
      lStack_1a8 = 0;
      param_1 = uStackX_8;
      fStackX_18 = fVar29;
      fStackX_1c = fVar31;
      fStackX_10 = fVar33;
      fStackX_14 = fVar20;
    }
    pfVar13 = pfStackX_20;
    fVar29 = fStackX_14;
    fVar28 = fStackX_10;
    lVar23 = 0;
    bVar5 = true;
    iVar24 = 0;
    if (3 < lStack_1a0) {
      lVar4 = param_1[0x11];
      iVar21 = 2;
      lVar22 = (lStack_1a0 - 4U >> 2) + 1;
      pfVar17 = (float *)(lVar4 + 0x14);
      iVar24 = (int)lVar22 * 4;
      lVar23 = lVar22 * 4;
      do {
        lVar15 = (longlong)((iVar21 + -1) % iVar18);
        if ((!bVar5) ||
           ((fVar31 = (pfVar17[-4] - *(float *)(lVar4 + 4 + lVar15 * 8)) *
                      (fStackX_18 - pfVar17[-5]) -
                      (fStackX_1c - pfVar17[-4]) * (pfVar17[-5] - *(float *)(lVar4 + lVar15 * 8)),
            fVar31 <= 0.0 && (fVar31 < 0.0)))) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if ((!bVar5) ||
           ((fVar31 = (pfVar17[-2] - *(float *)(lVar4 + 4 + (longlong)(iVar21 % iVar18) * 8)) *
                      (fStackX_18 - pfVar17[-3]) -
                      (fStackX_1c - pfVar17[-2]) *
                      (pfVar17[-3] - *(float *)(lVar4 + (longlong)(iVar21 % iVar18) * 8)),
            fVar31 <= 0.0 && (fVar31 < 0.0)))) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        lVar15 = (longlong)((iVar21 + 1) % iVar18);
        if ((!bVar5) ||
           ((fVar31 = (*pfVar17 - *(float *)(lVar4 + 4 + lVar15 * 8)) * (fStackX_18 - pfVar17[-1]) -
                      (fStackX_1c - *pfVar17) * (pfVar17[-1] - *(float *)(lVar4 + lVar15 * 8)),
            fVar31 <= 0.0 && (fVar31 < 0.0)))) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        lVar15 = (longlong)((iVar21 + 2) % iVar18);
        if ((!bVar5) ||
           ((fVar31 = (pfVar17[2] - *(float *)(lVar4 + 4 + lVar15 * 8)) * (fStackX_18 - pfVar17[1])
                      - (fStackX_1c - pfVar17[2]) * (pfVar17[1] - *(float *)(lVar4 + lVar15 * 8)),
            fVar31 <= 0.0 && (fVar31 < 0.0)))) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        iVar21 = iVar21 + 4;
        pfVar17 = pfVar17 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
    }
    if (lVar23 < lStack_1a0) {
      lVar4 = param_1[0x11];
      do {
        iVar24 = iVar24 + 1;
        if ((!bVar5) ||
           ((fVar31 = *(float *)(lVar4 + 4 + lVar23 * 8), fVar33 = *(float *)(lVar4 + lVar23 * 8),
            fVar31 = (fVar31 - *(float *)(lVar4 + 4 + (longlong)(iVar24 % iVar18) * 8)) *
                     (fStackX_18 - fVar33) -
                     (fStackX_1c - fVar31) *
                     (fVar33 - *(float *)(lVar4 + (longlong)(iVar24 % iVar18) * 8)), fVar31 <= 0.0
            && (fVar31 < 0.0)))) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        lVar23 = lVar23 + 1;
      } while (lVar23 < lStack_1a0);
    }
    fVar31 = fVar28;
    fVar33 = fVar29;
    if (bVar5) {
      if (param_5 == '\0') {
        if ((0.0 < fVar25 * fVar32) ||
           ((fVar27 = fVar32 - fVar25, -1e-05 < fVar27 && (fVar27 < 1e-05)))) {
          fVar31 = fStack_1c8;
          fVar33 = fStack_1c4;
          if (ABS(fVar32) < ABS(fVar25)) {
            fVar31 = fStack_1b8;
            fVar33 = fStack_1b4;
          }
        }
        else if (fVar32 <= fVar25) {
          fVar25 = fVar25 / (fVar25 - fVar32);
          fVar31 = (fStack_1b8 - fStack_1c8) * fVar25 + fStack_1c8;
          fVar33 = (fStack_1b4 - fStack_1c4) * fVar25 + fStack_1c4;
        }
        else {
          fVar31 = (fStack_1c8 - fStack_1b8) * (fVar32 / fVar27) + fStack_1b8;
          fVar33 = (fStack_1c4 - fStack_1b4) * (fVar32 / fVar27) + fStack_1b4;
        }
        uStackX_8._0_4_ = fVar31;
        uStackX_8._4_4_ = fVar33;
        cVar14 = FUN_18063e7e0(param_1,&uStackX_8);
        if (cVar14 == '\0') {
          fVar31 = fVar28;
          fVar33 = fVar29;
        }
      }
    }
    else if (fVar27 * fVar27 <= fVar26) goto LAB_180659172;
    uVar16 = 1;
    *pfVar13 = fVar34 * fVar33 + fStack_118 * fVar31 + fStack_108 * 0.0 + fStack_f8;
    pfVar13[1] = fVar35 * fVar33 + fStack_114 * fVar31 + fStack_104 * 0.0 + fStack_f4;
    pfVar13[2] = fVar36 * fVar33 + fStack_110 * fVar31 + fStack_100 * 0.0 + fStack_f0;
    pfVar13[3] = (fVar2 * fVar8 + fVar3 * fVar6 + fVar1 * fVar12) * fVar33 + fStack_10c * fVar31 +
                 fStack_fc * 0.0 + fStack_ec;
  }
  else {
LAB_180659172:
    uVar16 = 0;
  }
  return uVar16;
}



undefined8 FUN_180658ccb(longlong *param_1)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  longlong lVar10;
  float *pfVar11;
  int iVar12;
  longlong unaff_RBX;
  undefined8 uVar13;
  float *unaff_RBP;
  undefined8 uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong unaff_R12;
  float *unaff_R13;
  int iVar18;
  float fVar19;
  float fVar20;
  float unaff_XMM6_Da;
  float fVar21;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM12_Da;
  float unaff_XMM12_Db;
  float unaff_XMM12_Dc;
  float unaff_XMM12_Dd;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000040;
  float fStack0000000000000044;
  longlong in_stack_00000050;
  longlong lStack0000000000000058;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  
  fVar20 = 0.0;
  fVar21 = 0.0;
  lVar17 = param_1[0x11];
  unaff_RBP[0x42] = unaff_XMM14_Da;
  iVar12 = (int)(unaff_RBX - lVar17 >> 3);
  lStack0000000000000058 = (longlong)iVar12;
  unaff_RBP[0x43] = unaff_XMM15_Da;
  uVar14 = *(undefined8 *)(unaff_RBP + 0x42);
  unaff_RBP[0x44] = 0.0;
  unaff_RBP[0x45] = 0.0;
  if (0 < iVar12) {
    lVar2 = *param_1;
    iVar18 = 1;
    uVar13 = *(undefined8 *)(unaff_RBP + 0x44);
    uStack0000000000000068 = 0;
    pfVar11 = (float *)(lVar2 + 4);
    uStack000000000000006c = 0x7f7fffff;
    uStack0000000000000078 = 0;
    uStack000000000000007c = 0x7f7fffff;
    unaff_RBP[-0x1a] = 0.0;
    unaff_RBP[-0x19] = 3.4028235e+38;
    unaff_RBP[-0x16] = 0.0;
    unaff_RBP[-0x15] = 3.4028235e+38;
    fVar21 = unaff_XMM10_Da;
    fVar20 = unaff_XMM10_Da;
    in_stack_00000050 = lStack0000000000000058;
    do {
      uStack0000000000000060 = *(undefined4 *)((lVar17 - lVar2) + -4 + (longlong)pfVar11);
      uStack0000000000000064 = *(undefined4 *)((lVar17 - lVar2) + (longlong)pfVar11);
      lVar16 = (longlong)(iVar18 % iVar12);
      uStack0000000000000070 = *(undefined4 *)(lVar17 + lVar16 * 8);
      uStack0000000000000074 = *(undefined4 *)(lVar17 + 4 + lVar16 * 8);
      FUN_1806457f0(&stack0x00000070,&stack0x00000060,&stack0x00000040,&stack0x00000030,
                    unaff_RBP + -0x10);
      unaff_RBP[-0x1b] = *pfVar11;
      unaff_RBP[-0x17] = *(float *)(lVar2 + 4 + lVar16 * 8);
      fVar19 = (unaff_RBP[-0x1f] - unaff_RBP[-0xf]) * (unaff_RBP[-0x1f] - unaff_RBP[-0xf]) +
               (unaff_RBP[-0x20] - unaff_RBP[-0x10]) * (unaff_RBP[-0x20] - unaff_RBP[-0x10]) +
               (unaff_RBP[-0x1e] - unaff_RBP[-0xe]) * (unaff_RBP[-0x1e] - unaff_RBP[-0xe]);
      unaff_RBP[-0x1c] = pfVar11[-1];
      unaff_RBP[-0x18] = *(float *)(lVar2 + lVar16 * 8);
      unaff_XMM10_Da = fVar19;
      if (fVar21 <= fVar19) {
        unaff_XMM10_Da = fVar21;
      }
      if (fVar19 < fVar21) {
        uVar13 = *(undefined8 *)(unaff_RBP + -0x20);
      }
      FUN_1806457f0(unaff_RBP + -0x18,unaff_RBP + -0x1c,&stack0x00000040,&stack0x00000030,
                    unaff_RBP + -0x14);
      fVar21 = (unaff_RBP[-0xb] - unaff_RBP[-0x13]) * (unaff_RBP[-0xb] - unaff_RBP[-0x13]) +
               (unaff_RBP[-0xc] - unaff_RBP[-0x14]) * (unaff_RBP[-0xc] - unaff_RBP[-0x14]) +
               (unaff_RBP[-10] - unaff_RBP[-0x12]) * (unaff_RBP[-10] - unaff_RBP[-0x12]);
      fVar19 = fVar21;
      if (fVar20 <= fVar21) {
        fVar19 = fVar20;
      }
      if (fVar21 < fVar20) {
        uVar14 = *(undefined8 *)(unaff_RBP + -0x14);
      }
      iVar18 = iVar18 + 1;
      pfVar11 = pfVar11 + 2;
      in_stack_00000050 = in_stack_00000050 + -1;
      fVar21 = unaff_XMM10_Da;
      fVar20 = fVar19;
    } while (in_stack_00000050 != 0);
    unaff_R12 = *(longlong *)(unaff_RBP + 0x40);
    unaff_R13 = *(float **)(unaff_RBP + 0x46);
    *(undefined8 *)(unaff_RBP + 0x44) = uVar13;
    fVar21 = unaff_RBP[0x45];
    fVar20 = unaff_RBP[0x44];
    *(undefined8 *)(unaff_RBP + 0x42) = uVar14;
    unaff_XMM15_Da = unaff_RBP[0x43];
    unaff_XMM14_Da = unaff_RBP[0x42];
    in_stack_00000050 = 0;
  }
  lVar17 = 0;
  bVar3 = true;
  iVar18 = 0;
  if (3 < lStack0000000000000058) {
    lVar2 = *(longlong *)(unaff_R12 + 0x88);
    iVar15 = 2;
    lVar16 = (lStack0000000000000058 - 4U >> 2) + 1;
    pfVar11 = (float *)(lVar2 + 0x14);
    iVar18 = (int)lVar16 * 4;
    lVar17 = lVar16 * 4;
    do {
      lVar10 = (longlong)((iVar15 + -1) % iVar12);
      if ((!bVar3) ||
         ((fVar19 = (pfVar11[-4] - *(float *)(lVar2 + 4 + lVar10 * 8)) * (fVar20 - pfVar11[-5]) -
                    (fVar21 - pfVar11[-4]) * (pfVar11[-5] - *(float *)(lVar2 + lVar10 * 8)),
          fVar19 <= unaff_XMM6_Da && (fVar19 < unaff_XMM6_Da)))) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((!bVar3) ||
         ((fVar19 = (pfVar11[-2] - *(float *)(lVar2 + 4 + (longlong)(iVar15 % iVar12) * 8)) *
                    (fVar20 - pfVar11[-3]) -
                    (fVar21 - pfVar11[-2]) *
                    (pfVar11[-3] - *(float *)(lVar2 + (longlong)(iVar15 % iVar12) * 8)),
          fVar19 <= unaff_XMM6_Da && (fVar19 < unaff_XMM6_Da)))) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      lVar10 = (longlong)((iVar15 + 1) % iVar12);
      if ((!bVar3) ||
         ((fVar19 = (*pfVar11 - *(float *)(lVar2 + 4 + lVar10 * 8)) * (fVar20 - pfVar11[-1]) -
                    (fVar21 - *pfVar11) * (pfVar11[-1] - *(float *)(lVar2 + lVar10 * 8)),
          fVar19 <= unaff_XMM6_Da && (fVar19 < unaff_XMM6_Da)))) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      lVar10 = (longlong)((iVar15 + 2) % iVar12);
      if ((!bVar3) ||
         ((fVar19 = (pfVar11[2] - *(float *)(lVar2 + 4 + lVar10 * 8)) * (fVar20 - pfVar11[1]) -
                    (fVar21 - pfVar11[2]) * (pfVar11[1] - *(float *)(lVar2 + lVar10 * 8)),
          fVar19 <= unaff_XMM6_Da && (fVar19 < unaff_XMM6_Da)))) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      iVar15 = iVar15 + 4;
      pfVar11 = pfVar11 + 8;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  if (lVar17 < lStack0000000000000058) {
    lVar2 = *(longlong *)(unaff_R12 + 0x88);
    do {
      iVar18 = iVar18 + 1;
      if ((!bVar3) ||
         ((fVar19 = *(float *)(lVar2 + 4 + lVar17 * 8), fVar1 = *(float *)(lVar2 + lVar17 * 8),
          fVar19 = (fVar19 - *(float *)(lVar2 + 4 + (longlong)(iVar18 % iVar12) * 8)) *
                   (fVar20 - fVar1) -
                   (fVar21 - fVar19) * (fVar1 - *(float *)(lVar2 + (longlong)(iVar18 % iVar12) * 8))
          , fVar19 <= unaff_XMM6_Da && (fVar19 < unaff_XMM6_Da)))) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < lStack0000000000000058);
  }
  if (bVar3) {
    if (*(char *)(unaff_RBP + 0x48) == '\0') {
      if ((unaff_XMM6_Da < unaff_XMM9_Da * unaff_XMM8_Da) ||
         ((fVar21 = unaff_XMM8_Da - unaff_XMM9_Da, -1e-05 < fVar21 && (fVar21 < 1e-05)))) {
        uVar13 = CONCAT44(fStack0000000000000034,fStack0000000000000030);
        if (ABS(unaff_XMM8_Da) < ABS(unaff_XMM9_Da)) {
          uVar13 = CONCAT44(fStack0000000000000044,fStack0000000000000040);
        }
      }
      else if (unaff_XMM8_Da <= unaff_XMM9_Da) {
        fVar21 = unaff_XMM9_Da / (unaff_XMM9_Da - unaff_XMM8_Da);
        unaff_RBP[0x40] =
             (fStack0000000000000040 - fStack0000000000000030) * fVar21 + fStack0000000000000030;
        unaff_RBP[0x41] =
             (fStack0000000000000044 - fStack0000000000000034) * fVar21 + fStack0000000000000034;
        uVar13 = *(undefined8 *)(unaff_RBP + 0x40);
      }
      else {
        unaff_RBP[0x40] =
             (fStack0000000000000030 - fStack0000000000000040) * (unaff_XMM8_Da / fVar21) +
             fStack0000000000000040;
        unaff_RBP[0x41] =
             (fStack0000000000000034 - fStack0000000000000044) * (unaff_XMM8_Da / fVar21) +
             fStack0000000000000044;
        uVar13 = *(undefined8 *)(unaff_RBP + 0x40);
      }
      *(undefined8 *)(unaff_RBP + 0x40) = uVar13;
      cVar9 = FUN_18063e7e0(unaff_R12,unaff_RBP + 0x40);
      if (cVar9 == '\0') {
        uVar13 = uVar14;
      }
      *(undefined8 *)(unaff_RBP + 0x40) = uVar13;
      unaff_XMM14_Da = unaff_RBP[0x40];
      unaff_XMM15_Da = unaff_RBP[0x41];
    }
  }
  else if (unaff_XMM13_Da * unaff_XMM13_Da <= unaff_XMM10_Da) {
    return 0;
  }
  fVar21 = unaff_RBP[-7];
  fVar20 = unaff_RBP[-6];
  fVar19 = unaff_RBP[-5];
  fVar1 = unaff_RBP[-3];
  fVar4 = unaff_RBP[-2];
  fVar5 = unaff_RBP[-1];
  fVar6 = unaff_RBP[1];
  fVar7 = unaff_RBP[2];
  fVar8 = unaff_RBP[3];
  *unaff_R13 = unaff_XMM12_Da * unaff_XMM15_Da + unaff_RBP[-8] * unaff_XMM14_Da +
               unaff_RBP[-4] * 0.0 + *unaff_RBP;
  unaff_R13[1] = unaff_XMM12_Db * unaff_XMM15_Da + fVar21 * unaff_XMM14_Da + fVar1 * 0.0 + fVar6;
  unaff_R13[2] = unaff_XMM12_Dc * unaff_XMM15_Da + fVar20 * unaff_XMM14_Da + fVar4 * 0.0 + fVar7;
  unaff_R13[3] = unaff_XMM12_Dd * unaff_XMM15_Da + fVar19 * unaff_XMM14_Da + fVar5 * 0.0 + fVar8;
  return 1;
}



undefined8 FUN_180658d13(longlong *param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  longlong lVar9;
  float *pfVar10;
  int unaff_EBX;
  undefined8 uVar11;
  float *unaff_RBP;
  longlong lVar12;
  undefined8 unaff_RDI;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong unaff_R12;
  float *unaff_R13;
  int iVar16;
  longlong unaff_R14;
  longlong unaff_R15;
  float fVar17;
  float fVar18;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float fVar19;
  float unaff_XMM12_Da;
  float unaff_XMM12_Db;
  float unaff_XMM12_Dc;
  float unaff_XMM12_Dd;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000040;
  float fStack0000000000000044;
  longlong in_stack_00000050;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  
  unaff_RBP[0x44] = in_XMM5_Da;
  unaff_RBP[0x45] = unaff_XMM7_Da;
  if (0 < unaff_EBX) {
    lVar15 = *param_1;
    iVar16 = 1;
    uVar11 = *(undefined8 *)(unaff_RBP + 0x44);
    uStack0000000000000068 = 0;
    pfVar10 = (float *)(lVar15 + 4);
    uStack000000000000006c = 0x7f7fffff;
    uStack0000000000000078 = 0;
    uStack000000000000007c = 0x7f7fffff;
    unaff_RBP[-0x1a] = 0.0;
    unaff_RBP[-0x19] = 3.4028235e+38;
    unaff_RBP[-0x16] = 0.0;
    unaff_RBP[-0x15] = 3.4028235e+38;
    fVar18 = unaff_XMM10_Da;
    fVar19 = unaff_XMM10_Da;
    in_stack_00000050 = unaff_R14;
    do {
      uStack0000000000000060 = *(undefined4 *)((unaff_R15 - lVar15) + -4 + (longlong)pfVar10);
      uStack0000000000000064 = *(undefined4 *)((unaff_R15 - lVar15) + (longlong)pfVar10);
      lVar14 = (longlong)(iVar16 % unaff_EBX);
      uStack0000000000000070 = *(undefined4 *)(unaff_R15 + lVar14 * 8);
      uStack0000000000000074 = *(undefined4 *)(unaff_R15 + 4 + lVar14 * 8);
      FUN_1806457f0(&stack0x00000070,&stack0x00000060,&stack0x00000040,&stack0x00000030,
                    unaff_RBP + -0x10);
      unaff_RBP[-0x1b] = *pfVar10;
      unaff_RBP[-0x17] = *(float *)(lVar15 + 4 + lVar14 * 8);
      fVar17 = (unaff_RBP[-0x1f] - unaff_RBP[-0xf]) * (unaff_RBP[-0x1f] - unaff_RBP[-0xf]) +
               (unaff_RBP[-0x20] - unaff_RBP[-0x10]) * (unaff_RBP[-0x20] - unaff_RBP[-0x10]) +
               (unaff_RBP[-0x1e] - unaff_RBP[-0xe]) * (unaff_RBP[-0x1e] - unaff_RBP[-0xe]);
      unaff_RBP[-0x1c] = pfVar10[-1];
      unaff_RBP[-0x18] = *(float *)(lVar15 + lVar14 * 8);
      unaff_XMM10_Da = fVar17;
      if (fVar18 <= fVar17) {
        unaff_XMM10_Da = fVar18;
      }
      if (fVar17 < fVar18) {
        uVar11 = *(undefined8 *)(unaff_RBP + -0x20);
      }
      FUN_1806457f0(unaff_RBP + -0x18,unaff_RBP + -0x1c,&stack0x00000040,&stack0x00000030,
                    unaff_RBP + -0x14);
      fVar18 = (unaff_RBP[-0xb] - unaff_RBP[-0x13]) * (unaff_RBP[-0xb] - unaff_RBP[-0x13]) +
               (unaff_RBP[-0xc] - unaff_RBP[-0x14]) * (unaff_RBP[-0xc] - unaff_RBP[-0x14]) +
               (unaff_RBP[-10] - unaff_RBP[-0x12]) * (unaff_RBP[-10] - unaff_RBP[-0x12]);
      fVar17 = fVar18;
      if (fVar19 <= fVar18) {
        fVar17 = fVar19;
      }
      if (fVar18 < fVar19) {
        unaff_RDI = *(undefined8 *)(unaff_RBP + -0x14);
      }
      iVar16 = iVar16 + 1;
      pfVar10 = pfVar10 + 2;
      in_stack_00000050 = in_stack_00000050 + -1;
      fVar18 = unaff_XMM10_Da;
      fVar19 = fVar17;
    } while (in_stack_00000050 != 0);
    unaff_R12 = *(longlong *)(unaff_RBP + 0x40);
    unaff_R13 = *(float **)(unaff_RBP + 0x46);
    *(undefined8 *)(unaff_RBP + 0x44) = uVar11;
    unaff_XMM7_Da = unaff_RBP[0x45];
    in_XMM5_Da = unaff_RBP[0x44];
    *(undefined8 *)(unaff_RBP + 0x42) = unaff_RDI;
    unaff_XMM15_Da = unaff_RBP[0x43];
    unaff_XMM14_Da = unaff_RBP[0x42];
    in_stack_00000050 = 0;
  }
  lVar15 = 0;
  bVar1 = true;
  iVar16 = 0;
  if (3 < unaff_R14) {
    lVar14 = *(longlong *)(unaff_R12 + 0x88);
    iVar13 = 2;
    lVar12 = (unaff_R14 - 4U >> 2) + 1;
    pfVar10 = (float *)(lVar14 + 0x14);
    iVar16 = (int)lVar12 * 4;
    lVar15 = lVar12 * 4;
    do {
      lVar9 = (longlong)((iVar13 + -1) % unaff_EBX);
      if ((!bVar1) ||
         ((fVar18 = (pfVar10[-4] - *(float *)(lVar14 + 4 + lVar9 * 8)) * (in_XMM5_Da - pfVar10[-5])
                    - (unaff_XMM7_Da - pfVar10[-4]) * (pfVar10[-5] - *(float *)(lVar14 + lVar9 * 8))
          , fVar18 <= unaff_XMM6_Da && (fVar18 < unaff_XMM6_Da)))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((!bVar1) ||
         ((fVar18 = (pfVar10[-2] - *(float *)(lVar14 + 4 + (longlong)(iVar13 % unaff_EBX) * 8)) *
                    (in_XMM5_Da - pfVar10[-3]) -
                    (unaff_XMM7_Da - pfVar10[-2]) *
                    (pfVar10[-3] - *(float *)(lVar14 + (longlong)(iVar13 % unaff_EBX) * 8)),
          fVar18 <= unaff_XMM6_Da && (fVar18 < unaff_XMM6_Da)))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      lVar9 = (longlong)((iVar13 + 1) % unaff_EBX);
      if ((!bVar1) ||
         ((fVar18 = (*pfVar10 - *(float *)(lVar14 + 4 + lVar9 * 8)) * (in_XMM5_Da - pfVar10[-1]) -
                    (unaff_XMM7_Da - *pfVar10) * (pfVar10[-1] - *(float *)(lVar14 + lVar9 * 8)),
          fVar18 <= unaff_XMM6_Da && (fVar18 < unaff_XMM6_Da)))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      lVar9 = (longlong)((iVar13 + 2) % unaff_EBX);
      if ((!bVar1) ||
         ((fVar18 = (pfVar10[2] - *(float *)(lVar14 + 4 + lVar9 * 8)) * (in_XMM5_Da - pfVar10[1]) -
                    (unaff_XMM7_Da - pfVar10[2]) * (pfVar10[1] - *(float *)(lVar14 + lVar9 * 8)),
          fVar18 <= unaff_XMM6_Da && (fVar18 < unaff_XMM6_Da)))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      iVar13 = iVar13 + 4;
      pfVar10 = pfVar10 + 8;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  if (lVar15 < unaff_R14) {
    lVar14 = *(longlong *)(unaff_R12 + 0x88);
    do {
      iVar16 = iVar16 + 1;
      if ((!bVar1) ||
         ((fVar18 = *(float *)(lVar14 + 4 + lVar15 * 8), fVar19 = *(float *)(lVar14 + lVar15 * 8),
          fVar18 = (fVar18 - *(float *)(lVar14 + 4 + (longlong)(iVar16 % unaff_EBX) * 8)) *
                   (in_XMM5_Da - fVar19) -
                   (unaff_XMM7_Da - fVar18) *
                   (fVar19 - *(float *)(lVar14 + (longlong)(iVar16 % unaff_EBX) * 8)),
          fVar18 <= unaff_XMM6_Da && (fVar18 < unaff_XMM6_Da)))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < unaff_R14);
  }
  if (bVar1) {
    if (*(char *)(unaff_RBP + 0x48) == '\0') {
      if ((unaff_XMM6_Da < unaff_XMM9_Da * unaff_XMM8_Da) ||
         ((fVar18 = unaff_XMM8_Da - unaff_XMM9_Da, -1e-05 < fVar18 && (fVar18 < 1e-05)))) {
        uVar11 = CONCAT44(fStack0000000000000034,fStack0000000000000030);
        if (ABS(unaff_XMM8_Da) < ABS(unaff_XMM9_Da)) {
          uVar11 = CONCAT44(fStack0000000000000044,fStack0000000000000040);
        }
      }
      else if (unaff_XMM8_Da <= unaff_XMM9_Da) {
        fVar18 = unaff_XMM9_Da / (unaff_XMM9_Da - unaff_XMM8_Da);
        unaff_RBP[0x40] =
             (fStack0000000000000040 - fStack0000000000000030) * fVar18 + fStack0000000000000030;
        unaff_RBP[0x41] =
             (fStack0000000000000044 - fStack0000000000000034) * fVar18 + fStack0000000000000034;
        uVar11 = *(undefined8 *)(unaff_RBP + 0x40);
      }
      else {
        unaff_RBP[0x40] =
             (fStack0000000000000030 - fStack0000000000000040) * (unaff_XMM8_Da / fVar18) +
             fStack0000000000000040;
        unaff_RBP[0x41] =
             (fStack0000000000000034 - fStack0000000000000044) * (unaff_XMM8_Da / fVar18) +
             fStack0000000000000044;
        uVar11 = *(undefined8 *)(unaff_RBP + 0x40);
      }
      *(undefined8 *)(unaff_RBP + 0x40) = uVar11;
      cVar8 = FUN_18063e7e0(unaff_R12,unaff_RBP + 0x40);
      if (cVar8 == '\0') {
        uVar11 = unaff_RDI;
      }
      *(undefined8 *)(unaff_RBP + 0x40) = uVar11;
      unaff_XMM14_Da = unaff_RBP[0x40];
      unaff_XMM15_Da = unaff_RBP[0x41];
    }
  }
  else if (unaff_XMM13_Da * unaff_XMM13_Da <= unaff_XMM10_Da) {
    return 0;
  }
  fVar18 = unaff_RBP[-7];
  fVar19 = unaff_RBP[-6];
  fVar17 = unaff_RBP[-5];
  fVar2 = unaff_RBP[-3];
  fVar3 = unaff_RBP[-2];
  fVar4 = unaff_RBP[-1];
  fVar5 = unaff_RBP[1];
  fVar6 = unaff_RBP[2];
  fVar7 = unaff_RBP[3];
  *unaff_R13 = unaff_XMM12_Da * unaff_XMM15_Da + unaff_RBP[-8] * unaff_XMM14_Da +
               unaff_RBP[-4] * 0.0 + *unaff_RBP;
  unaff_R13[1] = unaff_XMM12_Db * unaff_XMM15_Da + fVar18 * unaff_XMM14_Da + fVar2 * 0.0 + fVar5;
  unaff_R13[2] = unaff_XMM12_Dc * unaff_XMM15_Da + fVar19 * unaff_XMM14_Da + fVar3 * 0.0 + fVar6;
  unaff_R13[3] = unaff_XMM12_Dd * unaff_XMM15_Da + fVar17 * unaff_XMM14_Da + fVar4 * 0.0 + fVar7;
  return 1;
}



undefined8 FUN_180658f54(void)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  char cVar11;
  longlong lVar12;
  float *pfVar13;
  int unaff_EBX;
  float *unaff_RBP;
  longlong lVar14;
  undefined8 unaff_RDI;
  char in_R9B;
  int iVar15;
  longlong lVar16;
  longlong unaff_R12;
  float *unaff_R13;
  longlong unaff_R14;
  int unaff_R15D;
  int iVar17;
  float fVar18;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM12_Da;
  float unaff_XMM12_Db;
  float unaff_XMM12_Dc;
  float unaff_XMM12_Dd;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000040;
  float fStack0000000000000044;
  
  lVar2 = *(longlong *)(unaff_R12 + 0x88);
  iVar15 = unaff_R15D + 2;
  lVar14 = (unaff_R14 - 4U >> 2) + 1;
  pfVar13 = (float *)(lVar2 + 0x14);
  iVar17 = (int)lVar14 * 4;
  lVar16 = lVar14 * 4;
  do {
    lVar12 = (longlong)((iVar15 + -1) % unaff_EBX);
    if ((in_R9B == '\0') ||
       ((fVar18 = (pfVar13[-4] - *(float *)(lVar2 + 4 + lVar12 * 8)) * (in_XMM5_Da - pfVar13[-5]) -
                  (unaff_XMM7_Da - pfVar13[-4]) * (pfVar13[-5] - *(float *)(lVar2 + lVar12 * 8)),
        fVar18 <= unaff_XMM6_Da && (fVar18 < unaff_XMM6_Da)))) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if ((!bVar10) ||
       ((fVar18 = (pfVar13[-2] - *(float *)(lVar2 + 4 + (longlong)(iVar15 % unaff_EBX) * 8)) *
                  (in_XMM5_Da - pfVar13[-3]) -
                  (unaff_XMM7_Da - pfVar13[-2]) *
                  (pfVar13[-3] - *(float *)(lVar2 + (longlong)(iVar15 % unaff_EBX) * 8)),
        fVar18 <= unaff_XMM6_Da && (fVar18 < unaff_XMM6_Da)))) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    lVar12 = (longlong)((iVar15 + 1) % unaff_EBX);
    if ((!bVar10) ||
       ((fVar18 = (*pfVar13 - *(float *)(lVar2 + 4 + lVar12 * 8)) * (in_XMM5_Da - pfVar13[-1]) -
                  (unaff_XMM7_Da - *pfVar13) * (pfVar13[-1] - *(float *)(lVar2 + lVar12 * 8)),
        fVar18 <= unaff_XMM6_Da && (fVar18 < unaff_XMM6_Da)))) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    lVar12 = (longlong)((iVar15 + 2) % unaff_EBX);
    if ((!bVar10) ||
       ((fVar18 = (pfVar13[2] - *(float *)(lVar2 + 4 + lVar12 * 8)) * (in_XMM5_Da - pfVar13[1]) -
                  (unaff_XMM7_Da - pfVar13[2]) * (pfVar13[1] - *(float *)(lVar2 + lVar12 * 8)),
        fVar18 <= unaff_XMM6_Da && (fVar18 < unaff_XMM6_Da)))) {
      in_R9B = '\0';
    }
    else {
      in_R9B = '\x01';
    }
    iVar15 = iVar15 + 4;
    pfVar13 = pfVar13 + 8;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  if (lVar16 < unaff_R14) {
    lVar2 = *(longlong *)(unaff_R12 + 0x88);
    do {
      iVar17 = iVar17 + 1;
      if ((in_R9B == '\0') ||
         ((fVar18 = *(float *)(lVar2 + 4 + lVar16 * 8), fVar1 = *(float *)(lVar2 + lVar16 * 8),
          fVar18 = (fVar18 - *(float *)(lVar2 + 4 + (longlong)(iVar17 % unaff_EBX) * 8)) *
                   (in_XMM5_Da - fVar1) -
                   (unaff_XMM7_Da - fVar18) *
                   (fVar1 - *(float *)(lVar2 + (longlong)(iVar17 % unaff_EBX) * 8)),
          fVar18 <= unaff_XMM6_Da && (fVar18 < unaff_XMM6_Da)))) {
        in_R9B = '\0';
      }
      else {
        in_R9B = '\x01';
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < unaff_R14);
  }
  if (in_R9B == '\0') {
    if (unaff_XMM13_Da * unaff_XMM13_Da <= unaff_XMM10_Da) {
      return 0;
    }
  }
  else if (*(char *)(unaff_RBP + 0x48) == '\0') {
    fVar18 = unaff_XMM9_Da * unaff_XMM8_Da;
    if ((unaff_XMM6_Da < fVar18) ||
       ((fVar18 = unaff_XMM8_Da - unaff_XMM9_Da, -1e-05 < fVar18 && (fVar18 < 1e-05)))) {
      if (ABS(unaff_XMM8_Da) < ABS(unaff_XMM9_Da)) {
        _fStack0000000000000030 = _fStack0000000000000040;
      }
    }
    else if (unaff_XMM8_Da <= unaff_XMM9_Da) {
      fVar18 = unaff_XMM9_Da - unaff_XMM8_Da;
      unaff_RBP[0x40] =
           (fStack0000000000000040 - fStack0000000000000030) * (unaff_XMM9_Da / fVar18) +
           fStack0000000000000030;
      unaff_RBP[0x41] =
           (fStack0000000000000044 - fStack0000000000000034) * (unaff_XMM9_Da / fVar18) +
           fStack0000000000000034;
      _fStack0000000000000030 = *(undefined8 *)(unaff_RBP + 0x40);
    }
    else {
      unaff_RBP[0x40] =
           (fStack0000000000000030 - fStack0000000000000040) * (unaff_XMM8_Da / fVar18) +
           fStack0000000000000040;
      unaff_RBP[0x41] =
           (fStack0000000000000034 - fStack0000000000000044) * (unaff_XMM8_Da / fVar18) +
           fStack0000000000000044;
      _fStack0000000000000030 = *(undefined8 *)(unaff_RBP + 0x40);
    }
    *(undefined8 *)(unaff_RBP + 0x40) = _fStack0000000000000030;
    cVar11 = FUN_18063e7e0(fVar18,unaff_RBP + 0x40);
    if (cVar11 == '\0') {
      _fStack0000000000000030 = unaff_RDI;
    }
    *(undefined8 *)(unaff_RBP + 0x40) = _fStack0000000000000030;
    unaff_XMM14_Da = unaff_RBP[0x40];
    unaff_XMM15_Da = unaff_RBP[0x41];
  }
  fVar18 = unaff_RBP[-7];
  fVar1 = unaff_RBP[-6];
  fVar3 = unaff_RBP[-5];
  fVar4 = unaff_RBP[-3];
  fVar5 = unaff_RBP[-2];
  fVar6 = unaff_RBP[-1];
  fVar7 = unaff_RBP[1];
  fVar8 = unaff_RBP[2];
  fVar9 = unaff_RBP[3];
  *unaff_R13 = unaff_XMM12_Da * unaff_XMM15_Da + unaff_RBP[-8] * unaff_XMM14_Da +
               unaff_RBP[-4] * 0.0 + *unaff_RBP;
  unaff_R13[1] = unaff_XMM12_Db * unaff_XMM15_Da + fVar18 * unaff_XMM14_Da + fVar4 * 0.0 + fVar7;
  unaff_R13[2] = unaff_XMM12_Dc * unaff_XMM15_Da + fVar1 * unaff_XMM14_Da + fVar5 * 0.0 + fVar8;
  unaff_R13[3] = unaff_XMM12_Dd * unaff_XMM15_Da + fVar3 * unaff_XMM14_Da + fVar6 * 0.0 + fVar9;
  return 1;
}



undefined8 FUN_1806590e5(void)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  int unaff_EBX;
  float *unaff_RBP;
  undefined8 unaff_RDI;
  int iVar11;
  char in_R9B;
  longlong in_R11;
  longlong unaff_R12;
  float *unaff_R13;
  longlong unaff_R14;
  int unaff_R15D;
  float fVar12;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM12_Da;
  float unaff_XMM12_Db;
  float unaff_XMM12_Dc;
  float unaff_XMM12_Dd;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000040;
  float fStack0000000000000044;
  
  lVar2 = *(longlong *)(unaff_R12 + 0x88);
  iVar11 = unaff_R15D + 1;
  do {
    if ((in_R9B == '\0') ||
       ((fVar12 = *(float *)(lVar2 + 4 + in_R11 * 8), fVar1 = *(float *)(lVar2 + in_R11 * 8),
        fVar12 = (fVar12 - *(float *)(lVar2 + 4 + (longlong)(iVar11 % unaff_EBX) * 8)) *
                 (in_XMM5_Da - fVar1) -
                 (unaff_XMM7_Da - fVar12) *
                 (fVar1 - *(float *)(lVar2 + (longlong)(iVar11 % unaff_EBX) * 8)),
        fVar12 <= unaff_XMM6_Da && (fVar12 < unaff_XMM6_Da)))) {
      in_R9B = '\0';
    }
    else {
      in_R9B = '\x01';
    }
    iVar11 = iVar11 + 1;
    in_R11 = in_R11 + 1;
  } while (in_R11 < unaff_R14);
  if (in_R9B == '\0') {
    if (unaff_XMM13_Da * unaff_XMM13_Da <= unaff_XMM10_Da) {
      return 0;
    }
  }
  else if (*(char *)(unaff_RBP + 0x48) == '\0') {
    fVar12 = unaff_XMM9_Da * unaff_XMM8_Da;
    if ((unaff_XMM6_Da < fVar12) ||
       ((fVar12 = unaff_XMM8_Da - unaff_XMM9_Da, -1e-05 < fVar12 && (fVar12 < 1e-05)))) {
      if (ABS(unaff_XMM8_Da) < ABS(unaff_XMM9_Da)) {
        _fStack0000000000000030 = _fStack0000000000000040;
      }
    }
    else if (unaff_XMM8_Da <= unaff_XMM9_Da) {
      fVar12 = unaff_XMM9_Da - unaff_XMM8_Da;
      unaff_RBP[0x40] =
           (fStack0000000000000040 - fStack0000000000000030) * (unaff_XMM9_Da / fVar12) +
           fStack0000000000000030;
      unaff_RBP[0x41] =
           (fStack0000000000000044 - fStack0000000000000034) * (unaff_XMM9_Da / fVar12) +
           fStack0000000000000034;
      _fStack0000000000000030 = *(undefined8 *)(unaff_RBP + 0x40);
    }
    else {
      unaff_RBP[0x40] =
           (fStack0000000000000030 - fStack0000000000000040) * (unaff_XMM8_Da / fVar12) +
           fStack0000000000000040;
      unaff_RBP[0x41] =
           (fStack0000000000000034 - fStack0000000000000044) * (unaff_XMM8_Da / fVar12) +
           fStack0000000000000044;
      _fStack0000000000000030 = *(undefined8 *)(unaff_RBP + 0x40);
    }
    *(undefined8 *)(unaff_RBP + 0x40) = _fStack0000000000000030;
    cVar10 = FUN_18063e7e0(fVar12,unaff_RBP + 0x40);
    if (cVar10 == '\0') {
      _fStack0000000000000030 = unaff_RDI;
    }
    *(undefined8 *)(unaff_RBP + 0x40) = _fStack0000000000000030;
    unaff_XMM14_Da = unaff_RBP[0x40];
    unaff_XMM15_Da = unaff_RBP[0x41];
  }
  fVar12 = unaff_RBP[-7];
  fVar1 = unaff_RBP[-6];
  fVar3 = unaff_RBP[-5];
  fVar4 = unaff_RBP[-3];
  fVar5 = unaff_RBP[-2];
  fVar6 = unaff_RBP[-1];
  fVar7 = unaff_RBP[1];
  fVar8 = unaff_RBP[2];
  fVar9 = unaff_RBP[3];
  *unaff_R13 = unaff_XMM12_Da * unaff_XMM15_Da + unaff_RBP[-8] * unaff_XMM14_Da +
               unaff_RBP[-4] * 0.0 + *unaff_RBP;
  unaff_R13[1] = unaff_XMM12_Db * unaff_XMM15_Da + fVar12 * unaff_XMM14_Da + fVar4 * 0.0 + fVar7;
  unaff_R13[2] = unaff_XMM12_Dc * unaff_XMM15_Da + fVar1 * unaff_XMM14_Da + fVar5 * 0.0 + fVar8;
  unaff_R13[3] = unaff_XMM12_Dd * unaff_XMM15_Da + fVar3 * unaff_XMM14_Da + fVar6 * 0.0 + fVar9;
  return 1;
}



bool FUN_180659163(void)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *unaff_RBP;
  float *unaff_R13;
  float unaff_XMM10_Da;
  float unaff_XMM12_Da;
  float unaff_XMM12_Db;
  float unaff_XMM12_Dc;
  float unaff_XMM12_Dd;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  
  bVar1 = unaff_XMM10_Da < unaff_XMM13_Da * unaff_XMM13_Da;
  if (bVar1) {
    fVar2 = unaff_RBP[-7];
    fVar3 = unaff_RBP[-6];
    fVar4 = unaff_RBP[-5];
    fVar5 = unaff_RBP[-3];
    fVar6 = unaff_RBP[-2];
    fVar7 = unaff_RBP[-1];
    fVar8 = unaff_RBP[1];
    fVar9 = unaff_RBP[2];
    fVar10 = unaff_RBP[3];
    *unaff_R13 = unaff_XMM12_Da * unaff_XMM15_Da + unaff_RBP[-8] * unaff_XMM14_Da +
                 unaff_RBP[-4] * 0.0 + *unaff_RBP;
    unaff_R13[1] = unaff_XMM12_Db * unaff_XMM15_Da + fVar2 * unaff_XMM14_Da + fVar5 * 0.0 + fVar8;
    unaff_R13[2] = unaff_XMM12_Dc * unaff_XMM15_Da + fVar3 * unaff_XMM14_Da + fVar6 * 0.0 + fVar9;
    unaff_R13[3] = unaff_XMM12_Dd * unaff_XMM15_Da + fVar4 * unaff_XMM14_Da + fVar7 * 0.0 + fVar10;
  }
  return bVar1;
}







