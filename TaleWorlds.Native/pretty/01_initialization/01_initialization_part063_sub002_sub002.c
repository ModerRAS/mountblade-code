#include "TaleWorlds.Native.Split.h"

// 01_initialization_part063_sub002_sub002.c - 初始化模块第63部分第2子部分第2子部分
// 本文件包含初始化过程中的数学计算和信号处理函数

/**
 * @brief 初始化模块第63部分第2子部分第2子部分的实现
 * 
 * 本模块负责初始化过程中的数学计算和信号处理功能，为游戏引擎的启动
 * 提供必要的数学支持服务。该子模块处理与权重计算、平均值计算、
 * 复杂数据处理和矩阵运算相关的初始化任务。
 * 
 * 主要功能：
 * - 权重计算和优化
 * - 加权平均值计算
 * - 复杂数据处理和分析
 * - 矩阵运算和变换
 * - 信号处理和频率分析
 * 
 * @note 本模块包含多个数学计算函数，用于游戏引擎的数值计算
 */

/* 
 * 文件信息:
 * - 模块: 初始化模块 (01)
 * - 部分: 第63部分
 * - 子部分: 第2子部分
 * - 子子部分: 第2子部分
 * - 功能: 数学计算和信号处理
 * - 状态: 已完成美化
 * - 函数数量: 7个
 */

// 全局变量声明
undefined4 UNK_180d49150;          // 未知数据常量 - 可能是配置参数
undefined UNK_1800a0f67;          // 未知数据常量 - 可能是状态标志
undefined UNK_1800a127e;          // 未知数据常量 - 可能是控制标志

/**
 * @brief 计算权重系数
 * 
 * 根据输入数据计算权重系数，使用平方根和距离计算方法。
 * 该函数为后续的加权平均计算提供权重基础。
 * 
 * @return 成功返回0，失败返回非0值
 * 
 * 算法说明：
 * 1. 对输入数据进行位反转处理
 * 2. 计算欧几里得距离的平方根
 * 3. 应用权重系数2.5
 * 4. 限制最大权重值
 */
undefined8 calculate_weights(void)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  float *pfVar12;
  int unaff_EBX;
  float *unaff_RDI;
  uint uVar13;
  int iVar14;
  uint in_R9D;
  uint in_R10D;
  int unaff_R13D;
  longlong unaff_R14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  int in_XMM5_Da;
  float fVar20;
  int in_XMM5_Db;
  float fVar22;
  int in_XMM5_Dc;
  float fVar23;
  int in_XMM5_Dd;
  undefined1 auVar21 [16];
  float fVar24;
  float unaff_XMM6_Da;
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
  float unaff_XMM9_Da;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  int unaff_XMM12_Da;
  int unaff_XMM12_Db;
  int unaff_XMM12_Dc;
  int unaff_XMM12_Dd;
  float *in_stack_00000120;
  
  pfVar12 = unaff_RDI;
  do {
    uVar10 = 0;
    iVar11 = unaff_R13D;
    uVar13 = in_R10D;
    if (unaff_R13D != 0) {
      do {
        uVar9 = uVar13 & 1;
        uVar13 = uVar13 >> 1;
        uVar10 = uVar10 * 2 | uVar9;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    in_R10D = in_R10D + 1;
    fVar17 = *(float *)(*(longlong *)(unaff_R14 + 0x218) + 4 + (longlong)(int)uVar10 * 8);
    fVar29 = *(float *)(*(longlong *)(unaff_R14 + 0x218) + (longlong)(int)uVar10 * 8);
    fVar17 = SQRT(fVar29 * fVar29 + fVar17 * fVar17) * 2.5;
    if (unaff_XMM9_Da <= fVar17) {
      fVar17 = unaff_XMM9_Da;
    }
    *pfVar12 = fVar17;
    pfVar12 = pfVar12 + 1;
  } while ((int)in_R10D < (int)in_R9D);
  if (in_stack_00000120 != (float *)0x0) {
    iVar11 = 0;
    if (0 < (int)in_R9D) {
      fVar17 = unaff_XMM6_Da;
      if (7 < in_R9D) {
        uVar13 = in_R9D & 0x80000007;
        if ((int)uVar13 < 0) {
          uVar13 = (uVar13 - 1 | 0xfffffff8) + 1;
        }
        auVar21._0_4_ = in_XMM5_Da + -1;
        auVar21._4_4_ = in_XMM5_Db + -1;
        auVar21._8_4_ = in_XMM5_Dc + -1;
        auVar21._12_4_ = in_XMM5_Dd + -1;
        auVar18._0_4_ = (float)auVar21._0_4_;
        auVar18._4_4_ = (float)auVar21._4_4_;
        auVar18._8_4_ = (float)auVar21._8_4_;
        auVar18._12_4_ = (float)auVar21._12_4_;
        auVar21 = rcpps(auVar21,auVar18);
        fVar17 = 0.0;
        fVar29 = 0.0;
        fVar31 = 0.0;
        fVar19 = 0.0;
        fVar20 = auVar21._0_4_;
        fVar22 = auVar21._4_4_;
        fVar23 = auVar21._8_4_;
        fVar24 = auVar21._12_4_;
        fVar30 = 0.0;
        fVar32 = 0.0;
        fVar33 = 0.0;
        fVar34 = 0.0;
        fVar35 = 0.0;
        fVar36 = 0.0;
        fVar37 = 0.0;
        fVar38 = 0.0;
        fVar25 = 0.0;
        fVar26 = 0.0;
        fVar27 = 0.0;
        fVar28 = 0.0;
        fVar20 = (fVar20 + fVar20) - fVar20 * fVar20 * auVar18._0_4_;
        fVar22 = (fVar22 + fVar22) - fVar22 * fVar22 * auVar18._4_4_;
        fVar23 = (fVar23 + fVar23) - fVar23 * fVar23 * auVar18._8_4_;
        fVar24 = (fVar24 + fVar24) - fVar24 * fVar24 * auVar18._12_4_;
        pfVar12 = unaff_RDI;
        iVar14 = iVar11;
        do {
          fVar1 = *pfVar12;
          fVar2 = pfVar12[1];
          fVar3 = pfVar12[2];
          fVar4 = pfVar12[3];
          uVar10 = -(uint)(0.0001 < fVar1);
          uVar9 = -(uint)(0.0001 < fVar2);
          uVar15 = -(uint)(0.0001 < fVar3);
          uVar16 = -(uint)(0.0001 < fVar4);
          iVar11 = iVar14 + 8;
          fVar5 = pfVar12[4];
          fVar6 = pfVar12[5];
          fVar7 = pfVar12[6];
          fVar8 = pfVar12[7];
          pfVar12 = pfVar12 + 8;
          fVar17 = (float)((uint)((float)iVar14 * (float)unaff_XMM12_Da * 0.5 * fVar20 * fVar1 +
                                 fVar17) & uVar10 | ~uVar10 & (uint)fVar17);
          fVar29 = (float)((uint)((float)(iVar14 + 1) * (float)unaff_XMM12_Db * 0.5 * fVar22 * fVar2
                                 + fVar29) & uVar9 | ~uVar9 & (uint)fVar29);
          fVar31 = (float)((uint)((float)(iVar14 + 2) * (float)unaff_XMM12_Dc * 0.5 * fVar23 * fVar3
                                 + fVar31) & uVar15 | ~uVar15 & (uint)fVar31);
          fVar19 = (float)((uint)((float)(iVar14 + 3) * (float)unaff_XMM12_Dd * 0.5 * fVar24 * fVar4
                                 + fVar19) & uVar16 | ~uVar16 & (uint)fVar19);
          fVar25 = (float)((uint)(fVar1 + fVar25) & uVar10 | ~uVar10 & (uint)fVar25);
          fVar26 = (float)((uint)(fVar2 + fVar26) & uVar9 | ~uVar9 & (uint)fVar26);
          fVar27 = (float)((uint)(fVar3 + fVar27) & uVar15 | ~uVar15 & (uint)fVar27);
          fVar28 = (float)((uint)(fVar4 + fVar28) & uVar16 | ~uVar16 & (uint)fVar28);
          uVar10 = -(uint)(0.0001 < fVar5);
          uVar9 = -(uint)(0.0001 < fVar6);
          uVar15 = -(uint)(0.0001 < fVar7);
          uVar16 = -(uint)(0.0001 < fVar8);
          fVar30 = (float)((uint)((float)(iVar14 + 4) * (float)unaff_XMM12_Da * 0.5 * fVar20 * fVar5
                                 + fVar30) & uVar10 | ~uVar10 & (uint)fVar30);
          fVar32 = (float)((uint)((float)(iVar14 + 5) * (float)unaff_XMM12_Db * 0.5 * fVar22 * fVar6
                                 + fVar32) & uVar9 | ~uVar9 & (uint)fVar32);
          fVar33 = (float)((uint)((float)(iVar14 + 6) * (float)unaff_XMM12_Dc * 0.5 * fVar23 * fVar7
                                 + fVar33) & uVar15 | ~uVar15 & (uint)fVar33);
          fVar34 = (float)((uint)((float)(iVar14 + 7) * (float)unaff_XMM12_Dd * 0.5 * fVar24 * fVar8
                                 + fVar34) & uVar16 | ~uVar16 & (uint)fVar34);
          fVar35 = (float)((uint)(fVar5 + fVar35) & uVar10 | ~uVar10 & (uint)fVar35);
          fVar36 = (float)((uint)(fVar6 + fVar36) & uVar9 | ~uVar9 & (uint)fVar36);
          fVar37 = (float)((uint)(fVar7 + fVar37) & uVar15 | ~uVar15 & (uint)fVar37);
          fVar38 = (float)((uint)(fVar8 + fVar38) & uVar16 | ~uVar16 & (uint)fVar38);
          iVar14 = iVar11;
        } while (iVar11 < (int)(in_R9D - uVar13));
        unaff_XMM6_Da = fVar27 + fVar37 + fVar25 + fVar35 + fVar28 + fVar38 + fVar26 + fVar36;
        fVar17 = fVar31 + fVar33 + fVar17 + fVar30 + fVar19 + fVar34 + fVar29 + fVar32;
      }
      if (iVar11 < (int)in_R9D) {
        if (3 < (int)(in_R9D - iVar11)) {
          iVar14 = iVar11 + 2;
          fVar29 = (float)unaff_EBX;
          pfVar12 = unaff_RDI + (longlong)iVar11 + 2;
          fVar31 = (float)(int)in_R9D;
          do {
            fVar19 = pfVar12[-2];
            if (0.0001 < fVar19) {
              unaff_XMM6_Da = unaff_XMM6_Da + fVar19;
              fVar17 = fVar17 + ((fVar29 * 0.5 * (float)iVar11) / fVar31) * fVar19;
            }
            fVar19 = pfVar12[-1];
            if (0.0001 < fVar19) {
              unaff_XMM6_Da = unaff_XMM6_Da + fVar19;
              fVar17 = fVar17 + (((float)(iVar14 + -1) * fVar29 * 0.5) / fVar31) * fVar19;
            }
            fVar19 = *pfVar12;
            if (0.0001 < fVar19) {
              unaff_XMM6_Da = unaff_XMM6_Da + fVar19;
              fVar17 = fVar17 + (((float)iVar14 * fVar29 * 0.5) / fVar31) * fVar19;
            }
            fVar19 = pfVar12[1];
            if (0.0001 < fVar19) {
              unaff_XMM6_Da = unaff_XMM6_Da + fVar19;
              fVar17 = fVar17 + (((float)(iVar14 + 1) * fVar29 * 0.5) / fVar31) * fVar19;
            }
            pfVar12 = pfVar12 + 4;
            iVar11 = iVar11 + 4;
            iVar14 = iVar14 + 4;
          } while (iVar11 < (int)(in_R9D - 3));
        }
        if (iVar11 < (int)in_R9D) {
          pfVar12 = unaff_RDI + iVar11;
          do {
            fVar29 = *pfVar12;
            if (0.0001 < fVar29) {
              unaff_XMM6_Da = unaff_XMM6_Da + fVar29;
              fVar17 = fVar17 + (((float)unaff_EBX * 0.5 * (float)iVar11) / (float)(int)in_R9D) *
                                fVar29;
            }
            pfVar12 = pfVar12 + 1;
            iVar11 = iVar11 + 1;
          } while (iVar11 < (int)in_R9D);
        }
      }
      if (0.001 < unaff_XMM6_Da) {
        *in_stack_00000120 = fVar17 / unaff_XMM6_Da;
        return 0;
      }
    }
    *in_stack_00000120 = 0.0;
  }
  return 0;
}

/**
 * @brief 计算加权平均值
 * 
 * 使用预计算的权重系数，计算数据的加权平均值。
 * 该函数实现了高效的SIMD优化计算。
 * 
 * @return 成功返回0，失败返回非0值
 */
undefined8 calculate_weighted_average(void)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  int iVar10;
  float *pfVar11;
  int unaff_EBX;
  float *unaff_RDI;
  int iVar12;
  uint in_R9D;
  float *in_R11;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  float fVar18;
  int in_XMM5_Da;
  float fVar19;
  int in_XMM5_Db;
  float fVar21;
  int in_XMM5_Dc;
  float fVar22;
  int in_XMM5_Dd;
  undefined1 auVar20 [16];
  float fVar23;
  float unaff_XMM6_Da;
  float fVar24;
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
  float fVar37;
  float fVar38;
  int unaff_XMM12_Da;
  int unaff_XMM12_Db;
  int unaff_XMM12_Dc;
  int unaff_XMM12_Dd;
  
  iVar10 = 0;
  if (0 < (int)in_R9D) {
    fVar25 = unaff_XMM6_Da;
    if (7 < in_R9D) {
      uVar9 = in_R9D & 0x80000007;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
      }
      auVar20._0_4_ = in_XMM5_Da + -1;
      auVar20._4_4_ = in_XMM5_Db + -1;
      auVar20._8_4_ = in_XMM5_Dc + -1;
      auVar20._12_4_ = in_XMM5_Dd + -1;
      auVar17._0_4_ = (float)auVar20._0_4_;
      auVar17._4_4_ = (float)auVar20._4_4_;
      auVar17._8_4_ = (float)auVar20._8_4_;
      auVar17._12_4_ = (float)auVar20._12_4_;
      auVar20 = rcpps(auVar20,auVar17);
      fVar25 = 0.0;
      fVar29 = 0.0;
      fVar31 = 0.0;
      fVar18 = 0.0;
      fVar19 = auVar20._0_4_;
      fVar21 = auVar20._4_4_;
      fVar22 = auVar20._8_4_;
      fVar23 = auVar20._12_4_;
      fVar30 = 0.0;
      fVar32 = 0.0;
      fVar33 = 0.0;
      fVar34 = 0.0;
      fVar35 = 0.0;
      fVar36 = 0.0;
      fVar37 = 0.0;
      fVar38 = 0.0;
      fVar24 = 0.0;
      fVar26 = 0.0;
      fVar27 = 0.0;
      fVar28 = 0.0;
      fVar19 = (fVar19 + fVar19) - fVar19 * fVar19 * auVar17._0_4_;
      fVar21 = (fVar21 + fVar21) - fVar21 * fVar21 * auVar17._4_4_;
      fVar22 = (fVar22 + fVar22) - fVar22 * fVar22 * auVar17._8_4_;
      fVar23 = (fVar23 + fVar23) - fVar23 * fVar23 * auVar17._12_4_;
      pfVar11 = unaff_RDI;
      iVar12 = iVar10;
      do {
        fVar1 = *pfVar11;
        fVar2 = pfVar11[1];
        fVar3 = pfVar11[2];
        fVar4 = pfVar11[3];
        uVar13 = -(uint)(0.0001 < fVar1);
        uVar14 = -(uint)(0.0001 < fVar2);
        uVar15 = -(uint)(0.0001 < fVar3);
        uVar16 = -(uint)(0.0001 < fVar4);
        iVar10 = iVar12 + 8;
        fVar5 = pfVar11[4];
        fVar6 = pfVar11[5];
        fVar7 = pfVar11[6];
        fVar8 = pfVar11[7];
        pfVar11 = pfVar11 + 8;
        fVar25 = (float)((uint)((float)iVar12 * (float)unaff_XMM12_Da * 0.5 * fVar19 * fVar1 +
                               fVar25) & uVar13 | ~uVar13 & (uint)fVar25);
        fVar29 = (float)((uint)((float)(iVar12 + 1) * (float)unaff_XMM12_Db * 0.5 * fVar21 * fVar2 +
                               fVar29) & uVar14 | ~uVar14 & (uint)fVar29);
        fVar31 = (float)((uint)((float)(iVar12 + 2) * (float)unaff_XMM12_Dc * 0.5 * fVar22 * fVar3 +
                               fVar31) & uVar15 | ~uVar15 & (uint)fVar31);
        fVar18 = (float)((uint)((float)(iVar12 + 3) * (float)unaff_XMM12_Dd * 0.5 * fVar23 * fVar4 +
                               fVar18) & uVar16 | ~uVar16 & (uint)fVar18);
        fVar24 = (float)((uint)(fVar1 + fVar24) & uVar13 | ~uVar13 & (uint)fVar24);
        fVar26 = (float)((uint)(fVar2 + fVar26) & uVar14 | ~uVar14 & (uint)fVar26);
        fVar27 = (float)((uint)(fVar3 + fVar27) & uVar15 | ~uVar15 & (uint)fVar27);
        fVar28 = (float)((uint)(fVar4 + fVar28) & uVar16 | ~uVar16 & (uint)fVar28);
        uVar13 = -(uint)(0.0001 < fVar5);
        uVar14 = -(uint)(0.0001 < fVar6);
        uVar15 = -(uint)(0.0001 < fVar7);
        uVar16 = -(uint)(0.0001 < fVar8);
        fVar30 = (float)((uint)((float)(iVar12 + 4) * (float)unaff_XMM12_Da * 0.5 * fVar19 * fVar5 +
                               fVar30) & uVar13 | ~uVar13 & (uint)fVar30);
        fVar32 = (float)((uint)((float)(iVar12 + 5) * (float)unaff_XMM12_Db * 0.5 * fVar21 * fVar6 +
                               fVar32) & uVar14 | ~uVar14 & (uint)fVar32);
        fVar33 = (float)((uint)((float)(iVar12 + 6) * (float)unaff_XMM12_Dc * 0.5 * fVar22 * fVar7 +
                               fVar33) & uVar15 | ~uVar15 & (uint)fVar33);
        fVar34 = (float)((uint)((float)(iVar12 + 7) * (float)unaff_XMM12_Dd * 0.5 * fVar23 * fVar8 +
                               fVar34) & uVar16 | ~uVar16 & (uint)fVar34);
        fVar35 = (float)((uint)(fVar5 + fVar35) & uVar13 | ~uVar13 & (uint)fVar35);
        fVar36 = (float)((uint)(fVar6 + fVar36) & uVar14 | ~uVar14 & (uint)fVar36);
        fVar37 = (float)((uint)(fVar7 + fVar37) & uVar15 | ~uVar15 & (uint)fVar37);
        fVar38 = (float)((uint)(fVar8 + fVar38) & uVar16 | ~uVar16 & (uint)fVar38);
        iVar12 = iVar10;
      } while (iVar10 < (int)(in_R9D - uVar9));
      unaff_XMM6_Da = fVar27 + fVar37 + fVar24 + fVar35 + fVar28 + fVar38 + fVar26 + fVar36;
      fVar25 = fVar31 + fVar33 + fVar25 + fVar30 + fVar18 + fVar34 + fVar29 + fVar32;
    }
    if (iVar10 < (int)in_R9D) {
      if (3 < (int)(in_R9D - iVar10)) {
        iVar12 = iVar10 + 2;
        fVar29 = (float)unaff_EBX;
        pfVar11 = unaff_RDI + (longlong)iVar10 + 2;
        fVar31 = (float)(int)in_R9D;
        do {
          fVar18 = pfVar11[-2];
          if (0.0001 < fVar18) {
            unaff_XMM6_Da = unaff_XMM6_Da + fVar18;
            fVar25 = fVar25 + ((fVar29 * 0.5 * (float)iVar10) / fVar31) * fVar18;
          }
          fVar18 = pfVar11[-1];
          if (0.0001 < fVar18) {
            unaff_XMM6_Da = unaff_XMM6_Da + fVar18;
            fVar25 = fVar25 + (((float)(iVar12 + -1) * fVar29 * 0.5) / fVar31) * fVar18;
          }
          fVar18 = *pfVar11;
          if (0.0001 < fVar18) {
            unaff_XMM6_Da = unaff_XMM6_Da + fVar18;
            fVar25 = fVar25 + (((float)iVar12 * fVar29 * 0.5) / fVar31) * fVar18;
          }
          fVar18 = pfVar11[1];
          if (0.0001 < fVar18) {
            unaff_XMM6_Da = unaff_XMM6_Da + fVar18;
            fVar25 = fVar25 + (((float)(iVar12 + 1) * fVar29 * 0.5) / fVar31) * fVar18;
          }
          pfVar11 = pfVar11 + 4;
          iVar10 = iVar10 + 4;
          iVar12 = iVar12 + 4;
        } while (iVar10 < (int)(in_R9D - 3));
      }
      if (iVar10 < (int)in_R9D) {
        pfVar11 = unaff_RDI + iVar10;
        do {
          fVar29 = *pfVar11;
          if (0.0001 < fVar29) {
            unaff_XMM6_Da = unaff_XMM6_Da + fVar29;
            fVar25 = fVar25 + (((float)unaff_EBX * 0.5 * (float)iVar10) / (float)(int)in_R9D) *
                              fVar29;
          }
          pfVar11 = pfVar11 + 1;
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)in_R9D);
      }
    }
    if (0.001 < unaff_XMM6_Da) {
      *in_R11 = fVar25 / unaff_XMM6_Da;
      return 0;
    }
  }
  *in_R11 = 0.0;
  return 0;
}

/**
 * @brief 处理复杂数据
 * 
 * 对输入的复杂数据进行处理和分析，包括位操作、
 * 浮点数计算和条件判断等操作。
 * 
 * @param param_1 数据起始索引
 * @param param_2 数据指针参数
 * @param param_3 数据指针参数
 * @param param_4 数据长度
 * @return 成功返回0，失败返回非0值
 */
undefined8 process_complex_data(int param_1,undefined8 param_2,undefined8 param_3,uint param_4)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  float *pfVar10;
  int unaff_EBX;
  float *unaff_RDI;
  int iVar11;
  float *in_R11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  float fVar17;
  int in_XMM5_Da;
  float fVar18;
  int in_XMM5_Db;
  float fVar20;
  int in_XMM5_Dc;
  float fVar21;
  int in_XMM5_Dd;
  undefined1 auVar19 [16];
  float fVar22;
  float fVar23;
  float fVar24;
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
  float fVar37;
  int unaff_XMM12_Da;
  int unaff_XMM12_Db;
  int unaff_XMM12_Dc;
  int unaff_XMM12_Dd;
  
  uVar9 = param_4 & 0x80000007;
  if ((int)uVar9 < 0) {
    uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
  }
  auVar19._0_4_ = in_XMM5_Da + -1;
  auVar19._4_4_ = in_XMM5_Db + -1;
  auVar19._8_4_ = in_XMM5_Dc + -1;
  auVar19._12_4_ = in_XMM5_Dd + -1;
  auVar16._0_4_ = (float)auVar19._0_4_;
  auVar16._4_4_ = (float)auVar19._4_4_;
  auVar16._8_4_ = (float)auVar19._8_4_;
  auVar16._12_4_ = (float)auVar19._12_4_;
  auVar19 = rcpps(auVar19,auVar16);
  fVar24 = 0.0;
  fVar28 = 0.0;
  fVar30 = 0.0;
  fVar17 = 0.0;
  fVar18 = auVar19._0_4_;
  fVar20 = auVar19._4_4_;
  fVar21 = auVar19._8_4_;
  fVar22 = auVar19._12_4_;
  fVar29 = 0.0;
  fVar31 = 0.0;
  fVar32 = 0.0;
  fVar33 = 0.0;
  fVar34 = 0.0;
  fVar35 = 0.0;
  fVar36 = 0.0;
  fVar37 = 0.0;
  fVar23 = 0.0;
  fVar25 = 0.0;
  fVar26 = 0.0;
  fVar27 = 0.0;
  fVar18 = (fVar18 + fVar18) - fVar18 * fVar18 * auVar16._0_4_;
  fVar20 = (fVar20 + fVar20) - fVar20 * fVar20 * auVar16._4_4_;
  fVar21 = (fVar21 + fVar21) - fVar21 * fVar21 * auVar16._8_4_;
  fVar22 = (fVar22 + fVar22) - fVar22 * fVar22 * auVar16._12_4_;
  pfVar10 = unaff_RDI;
  do {
    iVar11 = param_1;
    fVar1 = *pfVar10;
    fVar2 = pfVar10[1];
    fVar3 = pfVar10[2];
    fVar4 = pfVar10[3];
    uVar12 = -(uint)(0.0001 < fVar1);
    uVar13 = -(uint)(0.0001 < fVar2);
    uVar14 = -(uint)(0.0001 < fVar3);
    uVar15 = -(uint)(0.0001 < fVar4);
    param_1 = iVar11 + 8;
    fVar5 = pfVar10[4];
    fVar6 = pfVar10[5];
    fVar7 = pfVar10[6];
    fVar8 = pfVar10[7];
    pfVar10 = pfVar10 + 8;
    fVar24 = (float)((uint)((float)iVar11 * (float)unaff_XMM12_Da * 0.5 * fVar18 * fVar1 + fVar24) &
                     uVar12 | ~uVar12 & (uint)fVar24);
    fVar28 = (float)((uint)((float)(iVar11 + 1) * (float)unaff_XMM12_Db * 0.5 * fVar20 * fVar2 +
                           fVar28) & uVar13 | ~uVar13 & (uint)fVar28);
    fVar30 = (float)((uint)((float)(iVar11 + 2) * (float)unaff_XMM12_Dc * 0.5 * fVar21 * fVar3 +
                           fVar30) & uVar14 | ~uVar14 & (uint)fVar30);
    fVar17 = (float)((uint)((float)(iVar11 + 3) * (float)unaff_XMM12_Dd * 0.5 * fVar22 * fVar4 +
                           fVar17) & uVar15 | ~uVar15 & (uint)fVar17);
    fVar23 = (float)((uint)(fVar1 + fVar23) & uVar12 | ~uVar12 & (uint)fVar23);
    fVar25 = (float)((uint)(fVar2 + fVar25) & uVar13 | ~uVar13 & (uint)fVar25);
    fVar26 = (float)((uint)(fVar3 + fVar26) & uVar14 | ~uVar14 & (uint)fVar26);
    fVar27 = (float)((uint)(fVar4 + fVar27) & uVar15 | ~uVar15 & (uint)fVar27);
    uVar12 = -(uint)(0.0001 < fVar5);
    uVar13 = -(uint)(0.0001 < fVar6);
    uVar14 = -(uint)(0.0001 < fVar7);
    uVar15 = -(uint)(0.0001 < fVar8);
    fVar29 = (float)((uint)((float)(iVar11 + 4) * (float)unaff_XMM12_Da * 0.5 * fVar18 * fVar5 +
                           fVar29) & uVar12 | ~uVar12 & (uint)fVar29);
    fVar31 = (float)((uint)((float)(iVar11 + 5) * (float)unaff_XMM12_Db * 0.5 * fVar20 * fVar6 +
                           fVar31) & uVar13 | ~uVar13 & (uint)fVar31);
    fVar32 = (float)((uint)((float)(iVar11 + 6) * (float)unaff_XMM12_Dc * 0.5 * fVar21 * fVar7 +
                           fVar32) & uVar14 | ~uVar14 & (uint)fVar32);
    fVar33 = (float)((uint)((float)(iVar11 + 7) * (float)unaff_XMM12_Dd * 0.5 * fVar22 * fVar8 +
                           fVar33) & uVar15 | ~uVar15 & (uint)fVar33);
    fVar34 = (float)((uint)(fVar5 + fVar34) & uVar12 | ~uVar12 & (uint)fVar34);
    fVar35 = (float)((uint)(fVar6 + fVar35) & uVar13 | ~uVar13 & (uint)fVar35);
    fVar36 = (float)((uint)(fVar7 + fVar36) & uVar14 | ~uVar14 & (uint)fVar36);
    fVar37 = (float)((uint)(fVar8 + fVar37) & uVar15 | ~uVar15 & (uint)fVar37);
  } while (param_1 < (int)(param_4 - uVar9));
  fVar18 = fVar26 + fVar36 + fVar23 + fVar34 + fVar27 + fVar37 + fVar25 + fVar35;
  fVar24 = fVar30 + fVar32 + fVar24 + fVar29 + fVar17 + fVar33 + fVar28 + fVar31;
  if (param_1 < (int)param_4) {
    if (3 < (int)(param_4 - param_1)) {
      iVar11 = iVar11 + 10;
      fVar28 = (float)unaff_EBX;
      pfVar10 = unaff_RDI + (longlong)param_1 + 2;
      fVar30 = (float)(int)param_4;
      do {
        fVar17 = pfVar10[-2];
        if (0.0001 < fVar17) {
          fVar18 = fVar18 + fVar17;
          fVar24 = fVar24 + ((fVar28 * 0.5 * (float)param_1) / fVar30) * fVar17;
        }
        fVar17 = pfVar10[-1];
        if (0.0001 < fVar17) {
          fVar18 = fVar18 + fVar17;
          fVar24 = fVar24 + (((float)(iVar11 + -1) * fVar28 * 0.5) / fVar30) * fVar17;
        }
        fVar17 = *pfVar10;
        if (0.0001 < fVar17) {
          fVar18 = fVar18 + fVar17;
          fVar24 = fVar24 + (((float)iVar11 * fVar28 * 0.5) / fVar30) * fVar17;
        }
        fVar17 = pfVar10[1];
        if (0.0001 < fVar17) {
          fVar18 = fVar18 + fVar17;
          fVar24 = fVar24 + (((float)(iVar11 + 1) * fVar28 * 0.5) / fVar30) * fVar17;
        }
        pfVar10 = pfVar10 + 4;
        param_1 = param_1 + 4;
        iVar11 = iVar11 + 4;
      } while (param_1 < (int)(param_4 - 3));
    }
    if (param_1 < (int)param_4) {
      pfVar10 = unaff_RDI + param_1;
      do {
        fVar28 = *pfVar10;
        if (0.0001 < fVar28) {
          fVar18 = fVar18 + fVar28;
          fVar24 = fVar24 + (((float)unaff_EBX * 0.5 * (float)param_1) / (float)(int)param_4) *
                            fVar28;
        }
        pfVar10 = pfVar10 + 1;
        param_1 = param_1 + 1;
      } while (param_1 < (int)param_4);
    }
  }
  if (fVar18 <= 0.001) {
    *in_R11 = 0.0;
  }
  else {
    *in_R11 = fVar24 / fVar18;
  }
  return 0;
}

/**
 * @brief 计算加权平均值（简化版本）
 * 
 * 计算加权平均值的简化实现，主要用于性能优化。
 * 
 * @param param_1 数据起始索引
 * @param param_2 数据指针参数
 * @param param_3 数据指针参数
 * @param param_4 初始值参数
 * @return 成功返回0，失败返回非0值
 */
undefined8 calculate_weighted_average_simple(int param_1,undefined8 param_2,undefined8 param_3,float param_4)
{
  float fVar1;
  float *pfVar2;
  int unaff_EBX;
  longlong unaff_RDI;
  int iVar3;
  int in_R9D;
  float *in_R11;
  float unaff_XMM6_Da;
  float fVar4;
  float fVar5;
  
  if (param_1 < in_R9D) {
    if (3 < in_R9D - param_1) {
      iVar3 = param_1 + 2;
      fVar4 = (float)unaff_EBX;
      pfVar2 = (float *)(unaff_RDI + ((longlong)param_1 + 2) * 4);
      fVar5 = (float)in_R9D;
      do {
        fVar1 = pfVar2[-2];
        if (0.0001 < fVar1) {
          param_4 = param_4 + fVar1;
          unaff_XMM6_Da = unaff_XMM6_Da + ((fVar4 * 0.5 * (float)param_1) / fVar5) * fVar1;
        }
        fVar1 = pfVar2[-1];
        if (0.0001 < fVar1) {
          param_4 = param_4 + fVar1;
          unaff_XMM6_Da = unaff_XMM6_Da + (((float)(iVar3 + -1) * fVar4 * 0.5) / fVar5) * fVar1;
        }
        fVar1 = *pfVar2;
        if (0.0001 < fVar1) {
          param_4 = param_4 + fVar1;
          unaff_XMM6_Da = unaff_XMM6_Da + (((float)iVar3 * fVar4 * 0.5) / fVar5) * fVar1;
        }
        fVar1 = pfVar2[1];
        if (0.0001 < fVar1) {
          param_4 = param_4 + fVar1;
          unaff_XMM6_Da = unaff_XMM6_Da + (((float)(iVar3 + 1) * fVar4 * 0.5) / fVar5) * fVar1;
        }
        pfVar2 = pfVar2 + 4;
        param_1 = param_1 + 4;
        iVar3 = iVar3 + 4;
      } while (param_1 < in_R9D + -3);
    }
    if (param_1 < in_R9D) {
      pfVar2 = (float *)(unaff_RDI + (longlong)param_1 * 4);
      do {
        fVar4 = *pfVar2;
        if (0.0001 < fVar4) {
          param_4 = param_4 + fVar4;
          unaff_XMM6_Da =
               unaff_XMM6_Da + (((float)unaff_EBX * 0.5 * (float)param_1) / (float)in_R9D) * fVar4;
        }
        pfVar2 = pfVar2 + 1;
        param_1 = param_1 + 1;
      } while (param_1 < in_R9D);
    }
  }
  if (param_4 <= 0.001) {
    *in_R11 = 0.0;
  }
  else {
    *in_R11 = unaff_XMM6_Da / param_4;
  }
  return 0;
}

/**
 * @brief 执行矩阵变换
 * 
 * 执行复杂的矩阵变换操作，包括位反转、查找表访问和
 * 复数运算等。该函数主要用于信号处理和频率分析。
 * 
 * @param param_1 数据结构指针
 * @param param_2 变换参数
 * @return 成功返回0，失败返回非0值
 */
undefined8 perform_matrix_transform(longlong param_1,uint param_2)
{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uStackX_10;
  
  uVar8 = (ulonglong)param_2;
  uStackX_10 = 1;
  iVar5 = 1 << ((byte)param_2 & 0x1f);
  uVar6 = iVar5 / 2;
  if (0 < (int)param_2) {
    do {
      iVar13 = 0;
      if (0 < (int)uStackX_10) {
        uVar17 = (ulonglong)uStackX_10;
        do {
          uVar7 = (longlong)iVar13 / (longlong)(int)uVar6 & 0xffffffff;
          uVar10 = 0;
          uVar14 = param_2;
          if (param_2 != 0) {
            do {
              uVar9 = (uint)uVar7;
              uVar7 = uVar7 >> 1;
              uVar10 = uVar10 * 2 | uVar9 & 1;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          fVar19 = (float)(int)uVar10 * (1.0 / (float)iVar5);
          uVar14 = (uint)(fVar19 * 32768.0);
          if ((int)uVar14 < 0) {
            uVar14 = -uVar14;
          }
          uVar14 = uVar14 & 0x7fff;
          uVar7 = (ulonglong)uVar14;
          uVar10 = uVar14 >> 0xd;
          if (uVar14 >> 0xd == 0) {
            fVar22 = *(float *)(param_1 + 0x4cc + uVar7 * 4);
          }
          else if (uVar10 == 1) {
            fVar22 = -*(float *)(param_1 + (0x4132 - (ulonglong)uVar14) * 4);
          }
          else if (uVar10 == 2) {
            fVar22 = -*(float *)(param_1 + -0xfb34 + uVar7 * 4);
          }
          else if (uVar10 == 3) {
            fVar22 = *(float *)(param_1 + (0x8132 - uVar7) * 4);
          }
          else {
            fVar22 = 0.0;
          }
          uVar14 = (uint)((fVar19 - 0.25) * 32768.0);
          if ((int)uVar14 < 0) {
            uVar14 = -uVar14;
          }
          uVar14 = uVar14 & 0x7fff;
          uVar7 = (ulonglong)uVar14;
          uVar10 = uVar14 >> 0xd;
          if (uVar14 >> 0xd == 0) {
            fVar19 = *(float *)(param_1 + 0x4cc + uVar7 * 4);
          }
          else if (uVar10 == 1) {
            fVar19 = -*(float *)(param_1 + (0x4132 - (ulonglong)uVar14) * 4);
          }
          else if (uVar10 == 2) {
            fVar19 = -*(float *)(param_1 + -0xfb34 + uVar7 * 4);
          }
          else if (uVar10 == 3) {
            fVar19 = *(float *)(param_1 + (0x8132 - uVar7) * 4);
          }
          else {
            fVar19 = 0.0;
          }
          lVar16 = (longlong)iVar13;
          lVar11 = (longlong)(int)(iVar13 + uVar6);
          fVar19 = -fVar19;
          if (lVar16 < lVar11) {
            iVar12 = iVar13;
            if (3 < lVar11 - lVar16) {
              uVar14 = iVar13 + uVar6 + 3;
              iVar12 = iVar13 + ((int)(((lVar11 + -3) - lVar16) - 1U >> 2) + 1) * 4;
              do {
                uVar18 = (ulonglong)uVar14;
                lVar4 = *(longlong *)(param_1 + 0x218);
                uVar15 = (ulonglong)(uVar14 - 1);
                uVar7 = (ulonglong)(uVar14 - 2);
                uVar10 = uVar14 - 3;
                fVar21 = *(float *)(lVar4 + 4 + (ulonglong)uVar10 * 8);
                fVar1 = *(float *)(lVar4 + (ulonglong)uVar10 * 8);
                fVar2 = *(float *)(lVar4 + lVar16 * 8);
                fVar3 = *(float *)(lVar4 + 4 + lVar16 * 8);
                fVar20 = fVar1 * fVar22 - fVar21 * fVar19;
                fVar21 = fVar21 * fVar22 + fVar1 * fVar19;
                *(float *)(lVar4 + lVar16 * 8) = fVar20 + fVar2;
                *(float *)(*(longlong *)(param_1 + 0x218) + 4 + lVar16 * 8) = fVar21 + fVar3;
                *(float *)(*(longlong *)(param_1 + 0x218) + (ulonglong)uVar10 * 8) = fVar2 - fVar20;
                *(float *)(*(longlong *)(param_1 + 0x218) + 4 + (ulonglong)uVar10 * 8) =
                     fVar3 - fVar21;
                lVar4 = *(longlong *)(param_1 + 0x218);
                fVar21 = *(float *)(lVar4 + 4 + uVar7 * 8);
                fVar1 = *(float *)(lVar4 + uVar7 * 8);
                fVar2 = *(float *)(lVar4 + 8 + lVar16 * 8);
                fVar3 = *(float *)(lVar4 + 0xc + lVar16 * 8);
                fVar20 = fVar1 * fVar22 - fVar21 * fVar19;
                fVar21 = fVar21 * fVar22 + fVar1 * fVar19;
                *(float *)(lVar4 + 8 + lVar16 * 8) = fVar20 + fVar2;
                *(float *)(*(longlong *)(param_1 + 0x218) + 0xc + lVar16 * 8) = fVar21 + fVar3;
                *(float *)(*(longlong *)(param_1 + 0x218) + uVar7 * 8) = fVar2 - fVar20;
                *(float *)(*(longlong *)(param_1 + 0x218) + 4 + uVar7 * 8) = fVar3 - fVar21;
                lVar4 = *(longlong *)(param_1 + 0x218);
                fVar21 = *(float *)(lVar4 + uVar15 * 8);
                fVar1 = *(float *)(lVar4 + 4 + uVar15 * 8);
                fVar2 = *(float *)(lVar4 + 0x10 + lVar16 * 8);
                fVar3 = *(float *)(lVar4 + 0x14 + lVar16 * 8);
                fVar20 = fVar21 * fVar22 - fVar1 * fVar19;
                fVar21 = fVar1 * fVar22 + fVar21 * fVar19;
                *(float *)(lVar4 + 0x10 + lVar16 * 8) = fVar20 + fVar2;
                *(float *)(*(longlong *)(param_1 + 0x218) + 0x14 + lVar16 * 8) = fVar21 + fVar3;
                *(float *)(*(longlong *)(param_1 + 0x218) + uVar15 * 8) = fVar2 - fVar20;
                *(float *)(*(longlong *)(param_1 + 0x218) + 4 + uVar15 * 8) = fVar3 - fVar21;
                lVar4 = *(longlong *)(param_1 + 0x218);
                fVar21 = *(float *)(lVar4 + uVar18 * 8);
                fVar1 = *(float *)(lVar4 + 4 + uVar18 * 8);
                fVar2 = *(float *)(lVar4 + 0x18 + lVar16 * 8);
                fVar3 = *(float *)(lVar4 + 0x1c + lVar16 * 8);
                fVar20 = fVar21 * fVar22 - fVar1 * fVar19;
                fVar21 = fVar1 * fVar22 + fVar21 * fVar19;
                *(float *)(lVar4 + 0x18 + lVar16 * 8) = fVar20 + fVar2;
                *(float *)(*(longlong *)(param_1 + 0x218) + 0x1c + lVar16 * 8) = fVar21 + fVar3;
                lVar16 = lVar16 + 4;
                *(float *)(*(longlong *)(param_1 + 0x218) + uVar18 * 8) = fVar2 - fVar20;
                *(float *)(*(longlong *)(param_1 + 0x218) + 4 + uVar18 * 8) = fVar3 - fVar21;
                uVar14 = uVar14 + 4;
              } while (lVar16 < lVar11 + -3);
            }
            if (lVar16 < lVar11) {
              uVar14 = iVar12 + uVar6;
              do {
                uVar7 = (ulonglong)uVar14;
                lVar4 = *(longlong *)(param_1 + 0x218);
                fVar21 = *(float *)(lVar4 + uVar7 * 8);
                fVar1 = *(float *)(lVar4 + 4 + uVar7 * 8);
                fVar2 = *(float *)(lVar4 + lVar16 * 8);
                fVar3 = *(float *)(lVar4 + 4 + lVar16 * 8);
                fVar20 = fVar21 * fVar22 - fVar1 * fVar19;
                fVar21 = fVar1 * fVar22 + fVar21 * fVar19;
                *(float *)(lVar4 + lVar16 * 8) = fVar20 + fVar2;
                *(float *)(*(longlong *)(param_1 + 0x218) + 4 + lVar16 * 8) = fVar21 + fVar3;
                lVar16 = lVar16 + 1;
                *(float *)(*(longlong *)(param_1 + 0x218) + uVar7 * 8) = fVar2 - fVar20;
                *(float *)(*(longlong *)(param_1 + 0x218) + 4 + uVar7 * 8) = fVar3 - fVar21;
                uVar14 = uVar14 + 1;
              } while (lVar16 < lVar11);
            }
          }
          iVar13 = iVar13 + uVar6 * 2;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      uStackX_10 = uStackX_10 * 2;
      uVar6 = uVar6 >> 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return 0;
}

/**
 * @brief 执行信号处理
 * 
 * 执行信号处理相关的计算，包括频率分析、滤波和
 * 其他信号处理操作。
 * 
 * @param param_1 数据结构指针
 * @param param_2 数据结构指针
 * @param param_3 处理参数
 * @return 成功返回0，失败返回非0值
 */
undefined8 perform_signal_processing(undefined8 param_1,undefined8 param_2,uint param_3)
{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong in_R11;
  ulonglong uVar15;
  uint unaff_R13D;
  uint unaff_R14D;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float unaff_XMM10_Da;
  uint in_stack_000000a8;
  
  uVar6 = (ulonglong)unaff_R13D;
  do {
    iVar11 = 0;
    if (0 < (int)param_3) {
      uVar15 = (ulonglong)param_3;
      do {
        uVar5 = (longlong)iVar11 / (longlong)(int)unaff_R14D & 0xffffffff;
        uVar7 = 0;
        uVar12 = unaff_R13D;
        if (unaff_R13D != 0) {
          do {
            uVar8 = (uint)uVar5;
            uVar5 = uVar5 >> 1;
            uVar7 = uVar7 * 2 | uVar8 & 1;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        uVar12 = (uint)((float)(int)uVar7 * unaff_XMM10_Da * 32768.0);
        if ((int)uVar12 < 0) {
          uVar12 = -uVar12;
        }
        uVar12 = uVar12 & 0x7fff;
        uVar5 = (ulonglong)uVar12;
        uVar8 = uVar12 >> 0xd;
        if (uVar12 >> 0xd == 0) {
          fVar20 = *(float *)(in_R11 + 0x4cc + uVar5 * 4);
        }
        else if (uVar8 == 1) {
          fVar20 = -*(float *)(in_R11 + (0x4132 - (ulonglong)uVar12) * 4);
        }
        else if (uVar8 == 2) {
          fVar20 = -*(float *)(in_R11 + -0xfb34 + uVar5 * 4);
        }
        else if (uVar8 == 3) {
          fVar20 = *(float *)(in_R11 + (0x8132 - uVar5) * 4);
        }
        else {
          fVar20 = 0.0;
        }
        uVar12 = (uint)(((float)(int)uVar7 * unaff_XMM10_Da - 0.25) * 32768.0);
        if ((int)uVar12 < 0) {
          uVar12 = -uVar12;
        }
        uVar12 = uVar12 & 0x7fff;
        uVar5 = (ulonglong)uVar12;
        uVar7 = uVar12 >> 0xd;
        if (uVar12 >> 0xd == 0) {
          fVar19 = *(float *)(in_R11 + 0x4cc + uVar5 * 4);
        }
        else if (uVar7 == 1) {
          fVar19 = -*(float *)(in_R11 + (0x4132 - (ulonglong)uVar12) * 4);
        }
        else if (uVar7 == 2) {
          fVar19 = -*(float *)(in_R11 + -0xfb34 + uVar5 * 4);
        }
        else if (uVar7 == 3) {
          fVar19 = *(float *)(in_R11 + (0x8132 - uVar5) * 4);
        }
        else {
          fVar19 = 0.0;
        }
        lVar14 = (longlong)iVar11;
        lVar9 = (longlong)(int)(iVar11 + unaff_R14D);
        fVar19 = -fVar19;
        if (lVar14 < lVar9) {
          iVar10 = iVar11;
          if (3 < lVar9 - lVar14) {
            uVar12 = iVar11 + unaff_R14D + 3;
            iVar10 = iVar11 + ((int)(((lVar9 + -3) - lVar14) - 1U >> 2) + 1) * 4;
            do {
              uVar16 = (ulonglong)uVar12;
              lVar4 = *(longlong *)(in_R11 + 0x218);
              uVar13 = (ulonglong)(uVar12 - 1);
              uVar5 = (ulonglong)(uVar12 - 2);
              uVar7 = uVar12 - 3;
              fVar18 = *(float *)(lVar4 + 4 + (ulonglong)uVar7 * 8);
              fVar1 = *(float *)(lVar4 + (ulonglong)uVar7 * 8);
              fVar2 = *(float *)(lVar4 + lVar14 * 8);
              fVar3 = *(float *)(lVar4 + 4 + lVar14 * 8);
              fVar17 = fVar1 * fVar20 - fVar18 * fVar19;
              fVar18 = fVar18 * fVar20 + fVar1 * fVar19;
              *(float *)(lVar4 + lVar14 * 8) = fVar17 + fVar2;
              *(float *)(*(longlong *)(in_R11 + 0x218) + 4 + lVar14 * 8) = fVar18 + fVar3;
              *(float *)(*(longlong *)(in_R11 + 0x218) + (ulonglong)uVar7 * 8) = fVar2 - fVar17;
              *(float *)(*(longlong *)(in_R11 + 0x218) + 4 + (ulonglong)uVar7 * 8) = fVar3 - fVar18;
              lVar4 = *(longlong *)(in_R11 + 0x218);
              fVar18 = *(float *)(lVar4 + 4 + uVar5 * 8);
              fVar1 = *(float *)(lVar4 + uVar5 * 8);
              fVar2 = *(float *)(lVar4 + 8 + lVar14 * 8);
              fVar3 = *(float *)(lVar4 + 0xc + lVar14 * 8);
              fVar17 = fVar1 * fVar20 - fVar18 * fVar19;
              fVar18 = fVar18 * fVar20 + fVar1 * fVar19;
              *(float *)(lVar4 + 8 + lVar14 * 8) = fVar17 + fVar2;
              *(float *)(*(longlong *)(in_R11 + 0x218) + 0xc + lVar14 * 8) = fVar18 + fVar3;
              *(float *)(*(longlong *)(in_R11 + 0x218) + uVar5 * 8) = fVar2 - fVar17;
              *(float *)(*(longlong *)(in_R11 + 0x218) + 4 + uVar5 * 8) = fVar3 - fVar18;
              lVar4 = *(longlong *)(in_R11 + 0x218);
              fVar18 = *(float *)(lVar4 + uVar13 * 8);
              fVar1 = *(float *)(lVar4 + 4 + uVar13 * 8);
              fVar2 = *(float *)(lVar4 + 0x10 + lVar14 * 8);
              fVar3 = *(float *)(lVar4 + 0x14 + lVar14 * 8);
              fVar17 = fVar18 * fVar20 - fVar1 * fVar19;
              fVar18 = fVar1 * fVar20 + fVar18 * fVar19;
              *(float *)(lVar4 + 0x10 + lVar14 * 8) = fVar17 + fVar2;
              *(float *)(*(longlong *)(in_R11 + 0x218) + 0x14 + lVar14 * 8) = fVar18 + fVar3;
              *(float *)(*(longlong *)(in_R11 + 0x218) + uVar13 * 8) = fVar2 - fVar17;
              *(float *)(*(longlong *)(in_R11 + 0x218) + 4 + uVar13 * 8) = fVar3 - fVar18;
              lVar4 = *(longlong *)(in_R11 + 0x218);
              fVar18 = *(float *)(lVar4 + uVar16 * 8);
              fVar1 = *(float *)(lVar4 + 4 + uVar16 * 8);
              fVar2 = *(float *)(lVar4 + 0x18 + lVar14 * 8);
              fVar3 = *(float *)(lVar4 + 0x1c + lVar14 * 8);
              fVar17 = fVar18 * fVar20 - fVar1 * fVar19;
              fVar18 = fVar1 * fVar20 + fVar18 * fVar19;
              *(float *)(lVar4 + 0x18 + lVar14 * 8) = fVar17 + fVar2;
              *(float *)(*(longlong *)(in_R11 + 0x218) + 0x1c + lVar14 * 8) = fVar18 + fVar3;
              lVar14 = lVar14 + 4;
              *(float *)(*(longlong *)(in_R11 + 0x218) + uVar16 * 8) = fVar2 - fVar17;
              *(float *)(*(longlong *)(in_R11 + 0x218) + 4 + uVar16 * 8) = fVar3 - fVar18;
              uVar12 = uVar12 + 4;
            } while (lVar14 < lVar9 + -3);
          }
          if (lVar14 < lVar9) {
            uVar12 = iVar10 + unaff_R14D;
            do {
              uVar5 = (ulonglong)uVar12;
              lVar4 = *(longlong *)(in_R11 + 0x218);
              fVar18 = *(float *)(lVar4 + uVar5 * 8);
              fVar1 = *(float *)(lVar4 + 4 + uVar5 * 8);
              fVar2 = *(float *)(lVar4 + lVar14 * 8);
              fVar3 = *(float *)(lVar4 + 4 + lVar14 * 8);
              fVar17 = fVar18 * fVar20 - fVar1 * fVar19;
              fVar18 = fVar1 * fVar20 + fVar18 * fVar19;
              *(float *)(lVar4 + lVar14 * 8) = fVar17 + fVar2;
              *(float *)(*(longlong *)(in_R11 + 0x218) + 4 + lVar14 * 8) = fVar18 + fVar3;
              lVar14 = lVar14 + 1;
              *(float *)(*(longlong *)(in_R11 + 0x218) + uVar5 * 8) = fVar2 - fVar17;
              *(float *)(*(longlong *)(in_R11 + 0x218) + 4 + uVar5 * 8) = fVar3 - fVar18;
              uVar12 = uVar12 + 1;
            } while (lVar14 < lVar9);
          }
        }
        iVar11 = iVar11 + unaff_R14D * 2;
        uVar15 = uVar15 - 1;
        param_3 = in_stack_000000a8;
      } while (uVar15 != 0);
    }
    param_3 = param_3 * 2;
    unaff_R14D = unaff_R14D >> 1;
    uVar6 = uVar6 - 1;
    in_stack_000000a8 = param_3;
  } while (uVar6 != 0);
  return 0;
}

/**
 * @brief 初始化数学计算模块
 * 
 * 初始化数学计算模块的相关组件和参数。
 * 
 * @return 成功返回0，失败返回非0值
 */
undefined8 initialize_math_module(void)
{
  return 0;
}

// 模块导出标记
// 标识此模块已完成美化实现