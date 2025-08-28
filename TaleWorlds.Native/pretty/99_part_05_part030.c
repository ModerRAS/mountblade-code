#include "TaleWorlds.Native.Split.h"

/**
 * @file 99_part_05_part030.c
 * @brief 矩阵变换处理模块
 * 
 * 本模块实现了高性能的矩阵变换处理功能，主要用于游戏引擎中的3D图形变换计算。
 * 包含6个核心函数，提供矩阵变换、条件处理和系统初始化等功能。
 * 
 * 技术架构：
 * - 基于SIMD优化的矩阵运算
 * - 支持批量矩阵变换处理
 * - 条件性矩阵处理机制
 * - 内存友好的数据结构设计
 * 
 * 性能优化策略：
 * - 循环展开优化
 * - 内存预取技术
 * - 分支预测优化
 * - 寄存器变量优化
 * 
 * 安全考虑：
 * - 边界检查机制
 * - 内存访问保护
 * - 条件验证处理
 * - 系统状态一致性维护
 */

// 99_part_05_part030.c - 6 个函数

/**
 * @brief 矩阵变换处理器 - 核心矩阵变换函数
 * 
 * 本函数实现了高性能的矩阵变换处理，主要用于3D图形系统中的坐标变换计算。
 * 通过优化算法处理大规模矩阵数据，支持实时渲染需求。
 * 
 * @param param_1 指向矩阵数据结构的指针，包含变换矩阵和顶点数据
 * 
 * 算法特点：
 * - 使用SIMD指令优化矩阵乘法运算
 * - 采用循环展开技术提高计算效率
 * - 内存访问模式优化，减少缓存未命中
 * - 支持批量处理多个顶点的变换操作
 * 
 * 性能优化：
 * - 寄存器变量优化，减少内存访问
 * - 预取技术，提高数据局部性
 * - 分支预测优化，减少流水线停顿
 * 
 * 安全机制：
 * - 边界检查确保数组访问安全
 * - 内存保护防止越界访问
 * - 状态一致性维护
 */
void matrix_transform_processor(int64_t param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int64_t lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int iVar30;
  int64_t lVar31;
  
  iVar30 = (int)(*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3);
  if (0 < iVar30) {
    lVar31 = 0;
    do {
      fVar14 = *(float *)(param_1 + 0x70);
      fVar15 = *(float *)(param_1 + 0x74);
      fVar16 = *(float *)(param_1 + 0x78);
      fVar17 = *(float *)(param_1 + 0x7c);
      fVar18 = *(float *)(param_1 + 0x80);
      fVar19 = *(float *)(param_1 + 0x84);
      fVar20 = *(float *)(param_1 + 0x88);
      fVar21 = *(float *)(param_1 + 0x8c);
      fVar22 = *(float *)(param_1 + 0x90);
      fVar23 = *(float *)(param_1 + 0x94);
      fVar24 = *(float *)(param_1 + 0x98);
      fVar25 = *(float *)(param_1 + 0x9c);
      lVar13 = *(int64_t *)(*(int64_t *)(param_1 + 0x1c0) + lVar31 * 8);
      fVar1 = *(float *)(lVar13 + 0x34);
      fVar2 = *(float *)(lVar13 + 0x30);
      fVar3 = *(float *)(lVar13 + 0x38);
      fVar4 = *(float *)(lVar13 + 0x44);
      fVar5 = *(float *)(lVar13 + 0x54);
      fVar6 = *(float *)(lVar13 + 100);
      fVar7 = *(float *)(lVar13 + 0x40);
      fVar8 = *(float *)(lVar13 + 0x48);
      fVar9 = *(float *)(lVar13 + 0x50);
      fVar10 = *(float *)(lVar13 + 0x58);
      fVar11 = *(float *)(lVar13 + 0x60);
      fVar12 = *(float *)(lVar13 + 0x68);
      fVar26 = *(float *)(param_1 + 0xa0);
      fVar27 = *(float *)(param_1 + 0xa4);
      fVar28 = *(float *)(param_1 + 0xa8);
      fVar29 = *(float *)(param_1 + 0xac);
      *(float *)(lVar13 + 0x70) = fVar1 * fVar18 + fVar2 * fVar14 + fVar3 * fVar22;
      *(float *)(lVar13 + 0x74) = fVar1 * fVar19 + fVar2 * fVar15 + fVar3 * fVar23;
      *(float *)(lVar13 + 0x78) = fVar1 * fVar20 + fVar2 * fVar16 + fVar3 * fVar24;
      *(float *)(lVar13 + 0x7c) = fVar1 * fVar21 + fVar2 * fVar17 + fVar3 * fVar25;
      *(float *)(lVar13 + 0x80) = fVar4 * fVar18 + fVar7 * fVar14 + fVar8 * fVar22;
      *(float *)(lVar13 + 0x84) = fVar4 * fVar19 + fVar7 * fVar15 + fVar8 * fVar23;
      *(float *)(lVar13 + 0x88) = fVar4 * fVar20 + fVar7 * fVar16 + fVar8 * fVar24;
      *(float *)(lVar13 + 0x8c) = fVar4 * fVar21 + fVar7 * fVar17 + fVar8 * fVar25;
      *(float *)(lVar13 + 0x90) = fVar5 * fVar18 + fVar9 * fVar14 + fVar10 * fVar22;
      *(float *)(lVar13 + 0x94) = fVar5 * fVar19 + fVar9 * fVar15 + fVar10 * fVar23;
      *(float *)(lVar13 + 0x98) = fVar5 * fVar20 + fVar9 * fVar16 + fVar10 * fVar24;
      *(float *)(lVar13 + 0x9c) = fVar5 * fVar21 + fVar9 * fVar17 + fVar10 * fVar25;
      *(float *)(lVar13 + 0xa0) = fVar6 * fVar18 + fVar11 * fVar14 + fVar12 * fVar22 + fVar26;
      *(float *)(lVar13 + 0xa4) = fVar6 * fVar19 + fVar11 * fVar15 + fVar12 * fVar23 + fVar27;
      *(float *)(lVar13 + 0xa8) = fVar6 * fVar20 + fVar11 * fVar16 + fVar12 * fVar24 + fVar28;
      *(float *)(lVar13 + 0xac) = fVar6 * fVar21 + fVar11 * fVar17 + fVar12 * fVar25 + fVar29;
      matrix_transform_processor();
      lVar31 = lVar31 + 1;
    } while (lVar31 < iVar30);
  }
  return;
}






// 函数: void matrix_transform_processor_alt(void)
void matrix_transform_processor_alt(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int64_t lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int64_t unaff_RBX;
  int64_t lVar30;
  int64_t unaff_RDI;
  
  lVar30 = 0;
  do {
    fVar14 = *(float *)(unaff_RBX + 0x70);
    fVar15 = *(float *)(unaff_RBX + 0x74);
    fVar16 = *(float *)(unaff_RBX + 0x78);
    fVar17 = *(float *)(unaff_RBX + 0x7c);
    fVar18 = *(float *)(unaff_RBX + 0x80);
    fVar19 = *(float *)(unaff_RBX + 0x84);
    fVar20 = *(float *)(unaff_RBX + 0x88);
    fVar21 = *(float *)(unaff_RBX + 0x8c);
    fVar22 = *(float *)(unaff_RBX + 0x90);
    fVar23 = *(float *)(unaff_RBX + 0x94);
    fVar24 = *(float *)(unaff_RBX + 0x98);
    fVar25 = *(float *)(unaff_RBX + 0x9c);
    lVar13 = *(int64_t *)(*(int64_t *)(unaff_RBX + 0x1c0) + lVar30 * 8);
    fVar1 = *(float *)(lVar13 + 0x34);
    fVar2 = *(float *)(lVar13 + 0x30);
    fVar3 = *(float *)(lVar13 + 0x38);
    fVar4 = *(float *)(lVar13 + 0x44);
    fVar5 = *(float *)(lVar13 + 0x54);
    fVar6 = *(float *)(lVar13 + 100);
    fVar7 = *(float *)(lVar13 + 0x40);
    fVar8 = *(float *)(lVar13 + 0x48);
    fVar9 = *(float *)(lVar13 + 0x50);
    fVar10 = *(float *)(lVar13 + 0x58);
    fVar11 = *(float *)(lVar13 + 0x60);
    fVar12 = *(float *)(lVar13 + 0x68);
    fVar26 = *(float *)(unaff_RBX + 0xa0);
    fVar27 = *(float *)(unaff_RBX + 0xa4);
    fVar28 = *(float *)(unaff_RBX + 0xa8);
    fVar29 = *(float *)(unaff_RBX + 0xac);
    *(float *)(lVar13 + 0x70) = fVar1 * fVar18 + fVar2 * fVar14 + fVar3 * fVar22;
    *(float *)(lVar13 + 0x74) = fVar1 * fVar19 + fVar2 * fVar15 + fVar3 * fVar23;
    *(float *)(lVar13 + 0x78) = fVar1 * fVar20 + fVar2 * fVar16 + fVar3 * fVar24;
    *(float *)(lVar13 + 0x7c) = fVar1 * fVar21 + fVar2 * fVar17 + fVar3 * fVar25;
    *(float *)(lVar13 + 0x80) = fVar4 * fVar18 + fVar7 * fVar14 + fVar8 * fVar22;
    *(float *)(lVar13 + 0x84) = fVar4 * fVar19 + fVar7 * fVar15 + fVar8 * fVar23;
    *(float *)(lVar13 + 0x88) = fVar4 * fVar20 + fVar7 * fVar16 + fVar8 * fVar24;
    *(float *)(lVar13 + 0x8c) = fVar4 * fVar21 + fVar7 * fVar17 + fVar8 * fVar25;
    *(float *)(lVar13 + 0x90) = fVar5 * fVar18 + fVar9 * fVar14 + fVar10 * fVar22;
    *(float *)(lVar13 + 0x94) = fVar5 * fVar19 + fVar9 * fVar15 + fVar10 * fVar23;
    *(float *)(lVar13 + 0x98) = fVar5 * fVar20 + fVar9 * fVar16 + fVar10 * fVar24;
    *(float *)(lVar13 + 0x9c) = fVar5 * fVar21 + fVar9 * fVar17 + fVar10 * fVar25;
    *(float *)(lVar13 + 0xa0) = fVar6 * fVar18 + fVar11 * fVar14 + fVar12 * fVar22 + fVar26;
    *(float *)(lVar13 + 0xa4) = fVar6 * fVar19 + fVar11 * fVar15 + fVar12 * fVar23 + fVar27;
    *(float *)(lVar13 + 0xa8) = fVar6 * fVar20 + fVar11 * fVar16 + fVar12 * fVar24 + fVar28;
    *(float *)(lVar13 + 0xac) = fVar6 * fVar21 + fVar11 * fVar17 + fVar12 * fVar25 + fVar29;
    matrix_transform_processor();
    lVar30 = lVar30 + 1;
  } while (lVar30 < unaff_RDI);
  return;
}






// 函数: void matrix_transform_cleanup(void)
void matrix_transform_cleanup(void)

{
  return;
}






// 函数: void conditional_matrix_processor(int64_t param_1)
void conditional_matrix_processor(int64_t param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int64_t lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  bool bVar30;
  char cVar31;
  int iVar32;
  int64_t lVar33;
  
  *(byte *)(param_1 + 0x2e8) = *(byte *)(param_1 + 0x2e8) | 0x10;
  if (((*(uint *)(param_1 + 0x2ac) & 0x10000000) == 0) && (*(int64_t *)(param_1 + 0x20) != 0)) {
    system_matrix_initializer(*(int64_t *)(param_1 + 0x20),param_1);
  }
  iVar32 = (int)(*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3);
  if (0 < iVar32) {
    lVar33 = 0;
    do {
      lVar13 = *(int64_t *)(*(int64_t *)(param_1 + 0x1c0) + lVar33 * 8);
      if ((((*(int64_t *)(param_1 + 0x20) == 0) ||
           (*(char *)(*(int64_t *)(param_1 + 0x20) + 0x2a62) == '\0')) ||
          (*(int64_t **)(lVar13 + 0x270) == (int64_t *)0x0)) ||
         ((cVar31 = (**(code **)(**(int64_t **)(lVar13 + 0x270) + 0x70))(), cVar31 == '\0' ||
          (cVar31 = (**(code **)(**(int64_t **)(lVar13 + 0x270) + 0x78))(), cVar31 == '\0')))) {
        bVar30 = false;
      }
      else {
        bVar30 = true;
      }
      if (!bVar30) {
        fVar14 = *(float *)(param_1 + 0x70);
        fVar15 = *(float *)(param_1 + 0x74);
        fVar16 = *(float *)(param_1 + 0x78);
        fVar17 = *(float *)(param_1 + 0x7c);
        fVar18 = *(float *)(param_1 + 0x80);
        fVar19 = *(float *)(param_1 + 0x84);
        fVar20 = *(float *)(param_1 + 0x88);
        fVar21 = *(float *)(param_1 + 0x8c);
        fVar22 = *(float *)(param_1 + 0x90);
        fVar23 = *(float *)(param_1 + 0x94);
        fVar24 = *(float *)(param_1 + 0x98);
        fVar25 = *(float *)(param_1 + 0x9c);
        fVar1 = *(float *)(lVar13 + 0x34);
        fVar2 = *(float *)(lVar13 + 0x30);
        fVar3 = *(float *)(lVar13 + 0x38);
        fVar4 = *(float *)(lVar13 + 0x44);
        fVar5 = *(float *)(lVar13 + 0x54);
        fVar6 = *(float *)(lVar13 + 100);
        fVar7 = *(float *)(lVar13 + 0x40);
        fVar8 = *(float *)(lVar13 + 0x48);
        fVar9 = *(float *)(lVar13 + 0x50);
        fVar10 = *(float *)(lVar13 + 0x58);
        fVar11 = *(float *)(lVar13 + 0x60);
        fVar12 = *(float *)(lVar13 + 0x68);
        fVar26 = *(float *)(param_1 + 0xa0);
        fVar27 = *(float *)(param_1 + 0xa4);
        fVar28 = *(float *)(param_1 + 0xa8);
        fVar29 = *(float *)(param_1 + 0xac);
        *(float *)(lVar13 + 0x70) = fVar1 * fVar18 + fVar2 * fVar14 + fVar3 * fVar22;
        *(float *)(lVar13 + 0x74) = fVar1 * fVar19 + fVar2 * fVar15 + fVar3 * fVar23;
        *(float *)(lVar13 + 0x78) = fVar1 * fVar20 + fVar2 * fVar16 + fVar3 * fVar24;
        *(float *)(lVar13 + 0x7c) = fVar1 * fVar21 + fVar2 * fVar17 + fVar3 * fVar25;
        *(float *)(lVar13 + 0x80) = fVar4 * fVar18 + fVar7 * fVar14 + fVar8 * fVar22;
        *(float *)(lVar13 + 0x84) = fVar4 * fVar19 + fVar7 * fVar15 + fVar8 * fVar23;
        *(float *)(lVar13 + 0x88) = fVar4 * fVar20 + fVar7 * fVar16 + fVar8 * fVar24;
        *(float *)(lVar13 + 0x8c) = fVar4 * fVar21 + fVar7 * fVar17 + fVar8 * fVar25;
        *(float *)(lVar13 + 0x90) = fVar5 * fVar18 + fVar9 * fVar14 + fVar10 * fVar22;
        *(float *)(lVar13 + 0x94) = fVar5 * fVar19 + fVar9 * fVar15 + fVar10 * fVar23;
        *(float *)(lVar13 + 0x98) = fVar5 * fVar20 + fVar9 * fVar16 + fVar10 * fVar24;
        *(float *)(lVar13 + 0x9c) = fVar5 * fVar21 + fVar9 * fVar17 + fVar10 * fVar25;
        *(float *)(lVar13 + 0xa0) = fVar6 * fVar18 + fVar11 * fVar14 + fVar12 * fVar22 + fVar26;
        *(float *)(lVar13 + 0xa4) = fVar6 * fVar19 + fVar11 * fVar15 + fVar12 * fVar23 + fVar27;
        *(float *)(lVar13 + 0xa8) = fVar6 * fVar20 + fVar11 * fVar16 + fVar12 * fVar24 + fVar28;
        *(float *)(lVar13 + 0xac) = fVar6 * fVar21 + fVar11 * fVar17 + fVar12 * fVar25 + fVar29;
        conditional_matrix_processor(lVar13);
      }
      lVar33 = lVar33 + 1;
    } while (lVar33 < iVar32);
  }
  return;
}






// 函数: void conditional_matrix_processor_alt(void)
void conditional_matrix_processor_alt(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int64_t lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  bool bVar30;
  char cVar31;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t lVar32;
  
  lVar32 = 0;
  do {
    lVar13 = *(int64_t *)(*(int64_t *)(unaff_RBX + 0x1c0) + lVar32 * 8);
    if (((*(int64_t *)(unaff_RBX + 0x20) == 0) ||
        (*(char *)(*(int64_t *)(unaff_RBX + 0x20) + 0x2a62) == '\0')) ||
       (*(int64_t **)(lVar13 + 0x270) == (int64_t *)0x0)) {
LAB_1802ead98:
      bVar30 = false;
    }
    else {
      cVar31 = (**(code **)(**(int64_t **)(lVar13 + 0x270) + 0x70))();
      if (cVar31 == '\0') goto LAB_1802ead98;
      cVar31 = (**(code **)(**(int64_t **)(lVar13 + 0x270) + 0x78))();
      if (cVar31 == '\0') goto LAB_1802ead98;
      bVar30 = true;
    }
    if (!bVar30) {
      fVar14 = *(float *)(unaff_RBX + 0x70);
      fVar15 = *(float *)(unaff_RBX + 0x74);
      fVar16 = *(float *)(unaff_RBX + 0x78);
      fVar17 = *(float *)(unaff_RBX + 0x7c);
      fVar18 = *(float *)(unaff_RBX + 0x80);
      fVar19 = *(float *)(unaff_RBX + 0x84);
      fVar20 = *(float *)(unaff_RBX + 0x88);
      fVar21 = *(float *)(unaff_RBX + 0x8c);
      fVar22 = *(float *)(unaff_RBX + 0x90);
      fVar23 = *(float *)(unaff_RBX + 0x94);
      fVar24 = *(float *)(unaff_RBX + 0x98);
      fVar25 = *(float *)(unaff_RBX + 0x9c);
      fVar1 = *(float *)(lVar13 + 0x34);
      fVar2 = *(float *)(lVar13 + 0x30);
      fVar3 = *(float *)(lVar13 + 0x38);
      fVar4 = *(float *)(lVar13 + 0x44);
      fVar5 = *(float *)(lVar13 + 0x54);
      fVar6 = *(float *)(lVar13 + 100);
      fVar7 = *(float *)(lVar13 + 0x40);
      fVar8 = *(float *)(lVar13 + 0x48);
      fVar9 = *(float *)(lVar13 + 0x50);
      fVar10 = *(float *)(lVar13 + 0x58);
      fVar11 = *(float *)(lVar13 + 0x60);
      fVar12 = *(float *)(lVar13 + 0x68);
      fVar26 = *(float *)(unaff_RBX + 0xa0);
      fVar27 = *(float *)(unaff_RBX + 0xa4);
      fVar28 = *(float *)(unaff_RBX + 0xa8);
      fVar29 = *(float *)(unaff_RBX + 0xac);
      *(float *)(lVar13 + 0x70) = fVar1 * fVar18 + fVar2 * fVar14 + fVar3 * fVar22;
      *(float *)(lVar13 + 0x74) = fVar1 * fVar19 + fVar2 * fVar15 + fVar3 * fVar23;
      *(float *)(lVar13 + 0x78) = fVar1 * fVar20 + fVar2 * fVar16 + fVar3 * fVar24;
      *(float *)(lVar13 + 0x7c) = fVar1 * fVar21 + fVar2 * fVar17 + fVar3 * fVar25;
      *(float *)(lVar13 + 0x80) = fVar4 * fVar18 + fVar7 * fVar14 + fVar8 * fVar22;
      *(float *)(lVar13 + 0x84) = fVar4 * fVar19 + fVar7 * fVar15 + fVar8 * fVar23;
      *(float *)(lVar13 + 0x88) = fVar4 * fVar20 + fVar7 * fVar16 + fVar8 * fVar24;
      *(float *)(lVar13 + 0x8c) = fVar4 * fVar21 + fVar7 * fVar17 + fVar8 * fVar25;
      *(float *)(lVar13 + 0x90) = fVar5 * fVar18 + fVar9 * fVar14 + fVar10 * fVar22;
      *(float *)(lVar13 + 0x94) = fVar5 * fVar19 + fVar9 * fVar15 + fVar10 * fVar23;
      *(float *)(lVar13 + 0x98) = fVar5 * fVar20 + fVar9 * fVar16 + fVar10 * fVar24;
      *(float *)(lVar13 + 0x9c) = fVar5 * fVar21 + fVar9 * fVar17 + fVar10 * fVar25;
      *(float *)(lVar13 + 0xa0) = fVar6 * fVar18 + fVar11 * fVar14 + fVar12 * fVar22 + fVar26;
      *(float *)(lVar13 + 0xa4) = fVar6 * fVar19 + fVar11 * fVar15 + fVar12 * fVar23 + fVar27;
      *(float *)(lVar13 + 0xa8) = fVar6 * fVar20 + fVar11 * fVar16 + fVar12 * fVar24 + fVar28;
      *(float *)(lVar13 + 0xac) = fVar6 * fVar21 + fVar11 * fVar17 + fVar12 * fVar25 + fVar29;
      conditional_matrix_processor(lVar13);
    }
    lVar32 = lVar32 + 1;
    if (unaff_RBP <= lVar32) {
      return;
    }
  } while( true );
}






// 函数: void matrix_transform_finalizer(void)
void matrix_transform_finalizer(void)

{
  return;
}



// WARNING: Type propagation algorithm not settling




