// 原始函数语义化别名定义
// 本文件包含当前文件中使用的原始函数的语义化别名
// 这些别名提高了代码的可读性和维护性
#include "TaleWorlds.Native.Split.h"
// 99_part_12_part073.c - 2 个函数
// 函数: void function_7fb03f(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t param_4)
void function_7fb03f(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t param_4)
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
  float fVar13;
  float fVar14;
  int64_t lVar15;
  int iVar16;
  int iVar17;
  int64_t in_RAX;
  float *unaff_RBX;
  float *unaff_RBP;
  int64_t lVar18;
  int64_t unaff_RDI;
  int64_t in_R10;
  int64_t in_R11;
  int64_t lVar19;
  float *pfVar20;
  int unaff_R12D;
  uint64_t unaff_R13;
  int64_t unaff_R14;
  int unaff_R15D;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  uint local_buffer_b0;
  int local_buffer_b8;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R13;
  lVar18 = in_R11 + 0x20;
  iVar17 = (int)unaff_R14 * 2;
  iVar16 = (int)unaff_R14 * 3;
  do {
    lVar19 = *(int64_t *)(param_3 + 8 + in_R11 * 0x10);
    fVar1 = *(float *)(param_3 + in_R11 * 0x10);
    fVar2 = *(float *)(param_3 + 4 + in_R11 * 0x10);
    fVar3 = *(float *)(lVar19 + 0x14);
    fVar27 = *(float *)(lVar19 + 0x18);
    fVar21 = (*unaff_RBX - fVar1 * *(float *)(lVar19 + 0x1c)) - fVar2 * *(float *)(lVar19 + 0x20);
    fVar28 = *(float *)(lVar19 + 0x10);
    *(float *)(param_3 + 4 + in_R11 * 0x10) = fVar1;
    *(float *)(param_3 + in_R11 * 0x10) = fVar21;
    lVar19 = *(int64_t *)(param_3 + 8 + lVar18 * 0x10);
    fVar4 = *(float *)(param_3 + 4 + lVar18 * 0x10);
    fVar5 = *(float *)(lVar19 + 0x18);
    fVar6 = *(float *)(param_3 + lVar18 * 0x10);
    fVar24 = *(float *)(lVar19 + 0x14);
    fVar25 = ((fVar1 * fVar3 + fVar21 * fVar28 + fVar2 * fVar27) - fVar6 * *(float *)(lVar19 + 0x1c)
             ) - fVar4 * *(float *)(lVar19 + 0x20);
    fVar1 = *(float *)(lVar19 + 0x10);
    *(float *)(param_3 + lVar18 * 0x10) = fVar25;
    *(float *)(param_3 + 4 + lVar18 * 0x10) = fVar6;
    lVar19 = *(int64_t *)(in_R10 + 8 + in_R11 * 0x10);
    fVar2 = *(float *)(in_R10 + in_R11 * 0x10);
    fVar3 = *(float *)(in_R10 + 4 + in_R11 * 0x10);
    fVar27 = *(float *)(lVar19 + 0x14);
    fVar28 = *(float *)(lVar19 + 0x18);
    fVar22 = (*unaff_RBX - fVar2 * *(float *)(lVar19 + 0x1c)) - fVar3 * *(float *)(lVar19 + 0x20);
    fVar21 = *(float *)(lVar19 + 0x10);
    *(float *)(in_R10 + 4 + in_R11 * 0x10) = fVar2;
    *(float *)(in_R10 + in_R11 * 0x10) = fVar22;
    lVar19 = *(int64_t *)(in_R10 + 8 + lVar18 * 0x10);
    fVar7 = *(float *)(in_R10 + 4 + lVar18 * 0x10);
    fVar8 = *(float *)(lVar19 + 0x18);
    fVar9 = *(float *)(in_R10 + lVar18 * 0x10);
    fVar10 = *(float *)(lVar19 + 0x14);
    fVar22 = ((fVar2 * fVar27 + fVar22 * fVar21 + fVar3 * fVar28) -
             fVar9 * *(float *)(lVar19 + 0x1c)) - fVar7 * *(float *)(lVar19 + 0x20);
    fVar2 = *(float *)(lVar19 + 0x10);
    *(float *)(in_R10 + 4 + lVar18 * 0x10) = fVar9;
    *(float *)(in_R10 + lVar18 * 0x10) = fVar22;
    lVar19 = *(int64_t *)(param_4 + 8 + in_R11 * 0x10);
    fVar3 = *(float *)(param_4 + in_R11 * 0x10);
    fVar27 = *(float *)(param_4 + 4 + in_R11 * 0x10);
    fVar28 = *(float *)(lVar19 + 0x18);
    fVar21 = *(float *)(lVar19 + 0x14);
    fVar22 = ((fVar22 * fVar2 + fVar9 * fVar10 + fVar7 * fVar8) - fVar3 * *(float *)(lVar19 + 0x1c))
             - fVar27 * *(float *)(lVar19 + 0x20);
    fVar2 = *(float *)(lVar19 + 0x10);
    *(float *)(param_4 + 4 + in_R11 * 0x10) = fVar3;
    *(float *)(param_4 + in_R11 * 0x10) = fVar22;
    lVar19 = *(int64_t *)(param_4 + 8 + lVar18 * 0x10);
    fVar7 = *(float *)(param_4 + lVar18 * 0x10);
    fVar8 = *(float *)(lVar19 + 0x14);
    fVar9 = *(float *)(param_4 + 4 + lVar18 * 0x10);
    fVar10 = *(float *)(lVar19 + 0x18);
    fVar26 = ((fVar22 * fVar2 + fVar3 * fVar21 + fVar27 * fVar28) -
             fVar7 * *(float *)(lVar19 + 0x1c)) - fVar9 * *(float *)(lVar19 + 0x20);
    fVar2 = *(float *)(lVar19 + 0x10);
    *(float *)(param_4 + lVar18 * 0x10) = fVar26;
    *(float *)(param_4 + 4 + lVar18 * 0x10) = fVar7;
    lVar19 = *(int64_t *)(unaff_RDI + 8 + in_R11 * 0x10);
    fVar3 = *(float *)(unaff_RDI + in_R11 * 0x10);
    fVar27 = *(float *)(unaff_RDI + 4 + in_R11 * 0x10);
    fVar28 = *(float *)(lVar19 + 0x18);
    fVar21 = *(float *)(lVar19 + 0x14);
    fVar23 = (*unaff_RBX - fVar3 * *(float *)(lVar19 + 0x1c)) - fVar27 * *(float *)(lVar19 + 0x20);
    fVar22 = *(float *)(lVar19 + 0x10);
    *(float *)(unaff_RDI + in_R11 * 0x10) = fVar23;
    *(float *)(unaff_RDI + 4 + in_R11 * 0x10) = fVar3;
    lVar19 = *(int64_t *)(unaff_RDI + 8 + lVar18 * 0x10);
    fVar11 = *(float *)(unaff_RDI + lVar18 * 0x10);
    fVar12 = *(float *)(unaff_RDI + 4 + lVar18 * 0x10);
    fVar13 = *(float *)(lVar19 + 0x18);
    fVar14 = *(float *)(lVar19 + 0x14);
    fVar27 = ((fVar3 * fVar21 + fVar23 * fVar22 + fVar27 * fVar28) -
             fVar11 * *(float *)(lVar19 + 0x1c)) - fVar12 * *(float *)(lVar19 + 0x20);
    fVar3 = *(float *)(lVar19 + 0x10);
    *(float *)(unaff_RDI + 4 + lVar18 * 0x10) = fVar11;
    *(float *)(unaff_RDI + lVar18 * 0x10) = fVar27;
    *unaff_RBP = (fVar7 * fVar8 + fVar26 * fVar2 + fVar9 * fVar10) * unaff_XMM9_Da +
                 (fVar6 * fVar24 + fVar25 * fVar1 + fVar4 * fVar5) * unaff_XMM10_Da +
                 (fVar11 * fVar14 + fVar27 * fVar3 + fVar12 * fVar13) * unaff_XMM8_Da;
    lVar19 = *(int64_t *)(param_3 + 8 + in_R11 * 0x10);
    fVar1 = *(float *)(param_3 + in_R11 * 0x10);
    fVar2 = *(float *)(param_3 + 4 + in_R11 * 0x10);
    fVar3 = *(float *)(lVar19 + 0x18);
    fVar21 = (unaff_RBX[unaff_R14] - fVar1 * *(float *)(lVar19 + 0x1c)) -
             fVar2 * *(float *)(lVar19 + 0x20);
    fVar27 = *(float *)(lVar19 + 0x14);
    fVar28 = *(float *)(lVar19 + 0x10);
    *(float *)(param_3 + 4 + in_R11 * 0x10) = fVar1;
    *(float *)(param_3 + in_R11 * 0x10) = fVar21;
    lVar19 = *(int64_t *)(param_3 + 8 + lVar18 * 0x10);
    fVar4 = *(float *)(param_3 + 4 + lVar18 * 0x10);
    fVar5 = *(float *)(lVar19 + 0x18);
    fVar6 = *(float *)(param_3 + lVar18 * 0x10);
    fVar24 = *(float *)(lVar19 + 0x14);
    fVar25 = ((fVar1 * fVar27 + fVar21 * fVar28 + fVar2 * fVar3) - fVar6 * *(float *)(lVar19 + 0x1c)
             ) - fVar4 * *(float *)(lVar19 + 0x20);
    fVar1 = *(float *)(lVar19 + 0x10);
    *(float *)(param_3 + lVar18 * 0x10) = fVar25;
    *(float *)(param_3 + 4 + lVar18 * 0x10) = fVar6;
    lVar19 = *(int64_t *)(in_R10 + 8 + in_R11 * 0x10);
    fVar2 = *(float *)(in_R10 + in_R11 * 0x10);
    fVar3 = *(float *)(in_R10 + 4 + in_R11 * 0x10);
    fVar27 = *(float *)(lVar19 + 0x14);
    fVar28 = *(float *)(lVar19 + 0x18);
    fVar22 = (unaff_RBX[unaff_R14] - fVar2 * *(float *)(lVar19 + 0x1c)) -
             fVar3 * *(float *)(lVar19 + 0x20);
    fVar21 = *(float *)(lVar19 + 0x10);
    *(float *)(in_R10 + 4 + in_R11 * 0x10) = fVar2;
    *(float *)(in_R10 + in_R11 * 0x10) = fVar22;
    lVar19 = *(int64_t *)(in_R10 + 8 + lVar18 * 0x10);
    fVar7 = *(float *)(in_R10 + 4 + lVar18 * 0x10);
    fVar8 = *(float *)(lVar19 + 0x18);
    fVar9 = *(float *)(in_R10 + lVar18 * 0x10);
    fVar10 = *(float *)(lVar19 + 0x14);
    fVar22 = ((fVar2 * fVar27 + fVar22 * fVar21 + fVar3 * fVar28) -
             fVar9 * *(float *)(lVar19 + 0x1c)) - fVar7 * *(float *)(lVar19 + 0x20);
    fVar2 = *(float *)(lVar19 + 0x10);
    *(float *)(in_R10 + lVar18 * 0x10) = fVar22;
    *(float *)(in_R10 + 4 + lVar18 * 0x10) = fVar9;
    lVar19 = *(int64_t *)(param_4 + 8 + in_R11 * 0x10);
    fVar3 = *(float *)(param_4 + in_R11 * 0x10);
    fVar27 = *(float *)(lVar19 + 0x14);
    fVar28 = *(float *)(param_4 + 4 + in_R11 * 0x10);
    fVar21 = *(float *)(lVar19 + 0x18);
    fVar22 = ((fVar9 * fVar10 + fVar22 * fVar2 + fVar7 * fVar8) - fVar3 * *(float *)(lVar19 + 0x1c))
             - fVar28 * *(float *)(lVar19 + 0x20);
    fVar2 = *(float *)(lVar19 + 0x10);
    *(float *)(param_4 + 4 + in_R11 * 0x10) = fVar3;
    *(float *)(param_4 + in_R11 * 0x10) = fVar22;
    lVar19 = *(int64_t *)(param_4 + 8 + lVar18 * 0x10);
    fVar7 = *(float *)(param_4 + lVar18 * 0x10);
    fVar8 = *(float *)(param_4 + 4 + lVar18 * 0x10);
    fVar9 = *(float *)(lVar19 + 0x18);
    fVar10 = *(float *)(lVar19 + 0x14);
    fVar26 = ((fVar3 * fVar27 + fVar22 * fVar2 + fVar28 * fVar21) -
             fVar7 * *(float *)(lVar19 + 0x1c)) - fVar8 * *(float *)(lVar19 + 0x20);
    fVar2 = *(float *)(lVar19 + 0x10);
    *(float *)(param_4 + lVar18 * 0x10) = fVar26;
    *(float *)(param_4 + 4 + lVar18 * 0x10) = fVar7;
    lVar19 = *(int64_t *)(unaff_RDI + 8 + in_R11 * 0x10);
    fVar3 = *(float *)(unaff_RDI + in_R11 * 0x10);
    fVar27 = *(float *)(unaff_RDI + 4 + in_R11 * 0x10);
    fVar28 = *(float *)(lVar19 + 0x18);
    fVar21 = *(float *)(lVar19 + 0x14);
    fVar23 = (unaff_RBX[unaff_R14] - fVar3 * *(float *)(lVar19 + 0x1c)) -
             fVar27 * *(float *)(lVar19 + 0x20);
    fVar22 = *(float *)(lVar19 + 0x10);
    *(float *)(unaff_RDI + in_R11 * 0x10) = fVar23;
    *(float *)(unaff_RDI + 4 + in_R11 * 0x10) = fVar3;
    lVar19 = *(int64_t *)(unaff_RDI + 8 + lVar18 * 0x10);
    fVar11 = *(float *)(unaff_RDI + lVar18 * 0x10);
    fVar12 = *(float *)(unaff_RDI + 4 + lVar18 * 0x10);
    fVar13 = *(float *)(lVar19 + 0x18);
    fVar14 = *(float *)(lVar19 + 0x14);
    fVar27 = ((fVar23 * fVar22 + fVar3 * fVar21 + fVar27 * fVar28) -
             fVar11 * *(float *)(lVar19 + 0x1c)) - fVar12 * *(float *)(lVar19 + 0x20);
    fVar3 = *(float *)(lVar19 + 0x10);
    *(float *)(unaff_RDI + lVar18 * 0x10) = fVar27;
    *(float *)(unaff_RDI + 4 + lVar18 * 0x10) = fVar11;
    unaff_RBP[unaff_R14] =
         (fVar26 * fVar2 + fVar7 * fVar10 + fVar8 * fVar9) * unaff_XMM9_Da +
         (fVar6 * fVar24 + fVar25 * fVar1 + fVar4 * fVar5) * unaff_XMM10_Da +
         (fVar27 * fVar3 + fVar11 * fVar14 + fVar12 * fVar13) * unaff_XMM8_Da;
    lVar19 = *(int64_t *)(param_3 + 8 + in_R11 * 0x10);
    fVar1 = *(float *)(param_3 + in_R11 * 0x10);
    fVar2 = *(float *)(param_3 + 4 + in_R11 * 0x10);
    fVar3 = *(float *)(lVar19 + 0x18);
    fVar27 = *(float *)(lVar19 + 0x14);
    fVar21 = (unaff_RBX[iVar17] - fVar1 * *(float *)(lVar19 + 0x1c)) -
             fVar2 * *(float *)(lVar19 + 0x20);
    fVar28 = *(float *)(lVar19 + 0x10);
    *(float *)(param_3 + 4 + in_R11 * 0x10) = fVar1;
    *(float *)(param_3 + in_R11 * 0x10) = fVar21;
    lVar19 = *(int64_t *)(param_3 + 8 + lVar18 * 0x10);
    fVar4 = *(float *)(param_3 + lVar18 * 0x10);
    fVar5 = *(float *)(param_3 + 4 + lVar18 * 0x10);
    fVar6 = *(float *)(lVar19 + 0x18);
    fVar24 = *(float *)(lVar19 + 0x14);
    fVar25 = ((fVar21 * fVar28 + fVar1 * fVar27 + fVar2 * fVar3) - fVar4 * *(float *)(lVar19 + 0x1c)
             ) - fVar5 * *(float *)(lVar19 + 0x20);
    fVar1 = *(float *)(lVar19 + 0x10);
    *(float *)(param_3 + lVar18 * 0x10) = fVar25;
    *(float *)(param_3 + 4 + lVar18 * 0x10) = fVar4;
    lVar19 = *(int64_t *)(in_R10 + 8 + in_R11 * 0x10);
    fVar2 = *(float *)(in_R10 + in_R11 * 0x10);
    fVar3 = *(float *)(in_R10 + 4 + in_R11 * 0x10);
    fVar27 = *(float *)(lVar19 + 0x18);
    fVar28 = *(float *)(lVar19 + 0x14);
    fVar22 = (unaff_RBX[iVar17] - fVar2 * *(float *)(lVar19 + 0x1c)) -
             fVar3 * *(float *)(lVar19 + 0x20);
    fVar21 = *(float *)(lVar19 + 0x10);
    *(float *)(in_R10 + 4 + in_R11 * 0x10) = fVar2;
    *(float *)(in_R10 + in_R11 * 0x10) = fVar22;
    lVar19 = *(int64_t *)(in_R10 + 8 + lVar18 * 0x10);
    fVar7 = *(float *)(in_R10 + 4 + lVar18 * 0x10);
    fVar8 = *(float *)(lVar19 + 0x18);
    fVar9 = *(float *)(in_R10 + lVar18 * 0x10);
    fVar10 = *(float *)(lVar19 + 0x14);
    fVar22 = ((fVar22 * fVar21 + fVar2 * fVar28 + fVar3 * fVar27) -
             fVar9 * *(float *)(lVar19 + 0x1c)) - fVar7 * *(float *)(lVar19 + 0x20);
    fVar2 = *(float *)(lVar19 + 0x10);
    *(float *)(in_R10 + lVar18 * 0x10) = fVar22;
    *(float *)(in_R10 + 4 + lVar18 * 0x10) = fVar9;
    lVar19 = *(int64_t *)(param_4 + 8 + in_R11 * 0x10);
    fVar3 = *(float *)(param_4 + in_R11 * 0x10);
    fVar27 = *(float *)(param_4 + 4 + in_R11 * 0x10);
    fVar28 = *(float *)(lVar19 + 0x18);
    fVar21 = *(float *)(lVar19 + 0x14);
    fVar22 = ((fVar22 * fVar2 + fVar9 * fVar10 + fVar7 * fVar8) - fVar3 * *(float *)(lVar19 + 0x1c))
             - fVar27 * *(float *)(lVar19 + 0x20);
    fVar2 = *(float *)(lVar19 + 0x10);
    *(float *)(param_4 + 4 + in_R11 * 0x10) = fVar3;
    *(float *)(param_4 + in_R11 * 0x10) = fVar22;
    lVar19 = *(int64_t *)(param_4 + 8 + lVar18 * 0x10);
    fVar7 = *(float *)(param_4 + lVar18 * 0x10);
    fVar8 = *(float *)(param_4 + 4 + lVar18 * 0x10);
    fVar9 = *(float *)(lVar19 + 0x18);
    fVar10 = *(float *)(lVar19 + 0x14);
    fVar26 = ((fVar22 * fVar2 + fVar3 * fVar21 + fVar27 * fVar28) -
             fVar7 * *(float *)(lVar19 + 0x1c)) - fVar8 * *(float *)(lVar19 + 0x20);
    fVar2 = *(float *)(lVar19 + 0x10);
    *(float *)(param_4 + lVar18 * 0x10) = fVar26;
    *(float *)(param_4 + 4 + lVar18 * 0x10) = fVar7;
    lVar19 = *(int64_t *)(unaff_RDI + 8 + in_R11 * 0x10);
    fVar3 = *(float *)(unaff_RDI + in_R11 * 0x10);
    fVar27 = *(float *)(unaff_RDI + 4 + in_R11 * 0x10);
    fVar28 = *(float *)(lVar19 + 0x14);
    fVar21 = *(float *)(lVar19 + 0x18);
    fVar23 = (unaff_RBX[iVar17] - fVar3 * *(float *)(lVar19 + 0x1c)) -
             fVar27 * *(float *)(lVar19 + 0x20);
    fVar22 = *(float *)(lVar19 + 0x10);
    *(float *)(unaff_RDI + in_R11 * 0x10) = fVar23;
    *(float *)(unaff_RDI + 4 + in_R11 * 0x10) = fVar3;
    lVar19 = *(int64_t *)(unaff_RDI + 8 + lVar18 * 0x10);
    fVar11 = *(float *)(unaff_RDI + lVar18 * 0x10);
    fVar12 = *(float *)(unaff_RDI + 4 + lVar18 * 0x10);
    fVar13 = *(float *)(lVar19 + 0x18);
    fVar14 = *(float *)(lVar19 + 0x14);
    fVar27 = ((fVar3 * fVar28 + fVar23 * fVar22 + fVar27 * fVar21) -
             fVar11 * *(float *)(lVar19 + 0x1c)) - fVar12 * *(float *)(lVar19 + 0x20);
    fVar3 = *(float *)(lVar19 + 0x10);
    *(float *)(unaff_RDI + lVar18 * 0x10) = fVar27;
    *(float *)(unaff_RDI + 4 + lVar18 * 0x10) = fVar11;
    unaff_RBP[iVar17] =
         (fVar7 * fVar10 + fVar26 * fVar2 + fVar8 * fVar9) * unaff_XMM9_Da +
         (fVar25 * fVar1 + fVar4 * fVar24 + fVar5 * fVar6) * unaff_XMM10_Da +
         (fVar27 * fVar3 + fVar11 * fVar14 + fVar12 * fVar13) * unaff_XMM8_Da;
    lVar19 = *(int64_t *)(param_3 + 8 + in_R11 * 0x10);
    fVar1 = *(float *)(param_3 + in_R11 * 0x10);
    fVar2 = *(float *)(param_3 + 4 + in_R11 * 0x10);
    fVar3 = *(float *)(lVar19 + 0x18);
    fVar27 = *(float *)(lVar19 + 0x14);
    fVar24 = (unaff_RBX[iVar16] - fVar1 * *(float *)(lVar19 + 0x1c)) -
             fVar2 * *(float *)(lVar19 + 0x20);
    fVar28 = *(float *)(lVar19 + 0x10);
    *(float *)(param_3 + 4 + in_R11 * 0x10) = fVar1;
    *(float *)(param_3 + in_R11 * 0x10) = fVar24;
    lVar19 = *(int64_t *)(param_3 + 8 + lVar18 * 0x10);
    fVar4 = *(float *)(param_3 + 4 + lVar18 * 0x10);
    fVar5 = *(float *)(param_3 + lVar18 * 0x10);
    fVar6 = *(float *)(lVar19 + 0x18);
    fVar25 = ((fVar24 * fVar28 + fVar1 * fVar27 + fVar2 * fVar3) - fVar5 * *(float *)(lVar19 + 0x1c)
             ) - fVar4 * *(float *)(lVar19 + 0x20);
    fVar1 = *(float *)(lVar19 + 0x14);
    fVar2 = *(float *)(lVar19 + 0x10);
    *(float *)(param_3 + lVar18 * 0x10) = fVar25;
    *(float *)(param_3 + 4 + lVar18 * 0x10) = fVar5;
    lVar19 = *(int64_t *)(in_R10 + 8 + in_R11 * 0x10);
    fVar3 = *(float *)(in_R10 + in_R11 * 0x10);
    fVar27 = *(float *)(in_R10 + 4 + in_R11 * 0x10);
    fVar28 = *(float *)(lVar19 + 0x14);
    fVar24 = *(float *)(lVar19 + 0x18);
    fVar22 = (unaff_RBX[iVar16] - fVar3 * *(float *)(lVar19 + 0x1c)) -
             fVar27 * *(float *)(lVar19 + 0x20);
    fVar21 = *(float *)(lVar19 + 0x10);
    *(float *)(in_R10 + 4 + in_R11 * 0x10) = fVar3;
    *(float *)(in_R10 + in_R11 * 0x10) = fVar22;
    lVar19 = *(int64_t *)(in_R10 + 8 + lVar18 * 0x10);
    fVar7 = *(float *)(in_R10 + 4 + lVar18 * 0x10);
    fVar8 = *(float *)(lVar19 + 0x18);
    fVar9 = *(float *)(in_R10 + lVar18 * 0x10);
    fVar10 = *(float *)(lVar19 + 0x14);
    fVar22 = ((fVar3 * fVar28 + fVar22 * fVar21 + fVar27 * fVar24) -
             fVar9 * *(float *)(lVar19 + 0x1c)) - fVar7 * *(float *)(lVar19 + 0x20);
    fVar3 = *(float *)(lVar19 + 0x10);
    *(float *)(in_R10 + lVar18 * 0x10) = fVar22;
    *(float *)(in_R10 + 4 + lVar18 * 0x10) = fVar9;
    lVar19 = *(int64_t *)(param_4 + 8 + in_R11 * 0x10);
    fVar27 = *(float *)(param_4 + in_R11 * 0x10);
    fVar28 = *(float *)(lVar19 + 0x14);
    fVar24 = *(float *)(param_4 + 4 + in_R11 * 0x10);
    fVar21 = *(float *)(lVar19 + 0x18);
    fVar22 = ((fVar9 * fVar10 + fVar22 * fVar3 + fVar7 * fVar8) - fVar27 * *(float *)(lVar19 + 0x1c)
             ) - fVar24 * *(float *)(lVar19 + 0x20);
    fVar3 = *(float *)(lVar19 + 0x10);
    *(float *)(param_4 + 4 + in_R11 * 0x10) = fVar27;
    *(float *)(param_4 + in_R11 * 0x10) = fVar22;
    lVar19 = *(int64_t *)(param_4 + 8 + lVar18 * 0x10);
    fVar7 = *(float *)(param_4 + lVar18 * 0x10);
    fVar8 = *(float *)(lVar19 + 0x14);
    fVar9 = *(float *)(param_4 + 4 + lVar18 * 0x10);
    fVar10 = *(float *)(lVar19 + 0x18);
    fVar26 = ((fVar27 * fVar28 + fVar22 * fVar3 + fVar24 * fVar21) -
             fVar7 * *(float *)(lVar19 + 0x1c)) - fVar9 * *(float *)(lVar19 + 0x20);
    fVar3 = *(float *)(lVar19 + 0x10);
    *(float *)(param_4 + lVar18 * 0x10) = fVar26;
    *(float *)(param_4 + 4 + lVar18 * 0x10) = fVar7;
    lVar19 = *(int64_t *)(unaff_RDI + 8 + in_R11 * 0x10);
    pfVar20 = unaff_RBX + iVar16;
    unaff_RBX = unaff_RBX + unaff_R12D;
    fVar27 = *(float *)(unaff_RDI + in_R11 * 0x10);
    fVar28 = *(float *)(unaff_RDI + 4 + in_R11 * 0x10);
    fVar24 = *(float *)(lVar19 + 0x14);
    fVar21 = *(float *)(lVar19 + 0x18);
    fVar23 = (*pfVar20 - fVar27 * *(float *)(lVar19 + 0x1c)) - fVar28 * *(float *)(lVar19 + 0x20);
    fVar22 = *(float *)(lVar19 + 0x10);
    *(float *)(unaff_RDI + 4 + in_R11 * 0x10) = fVar27;
    *(float *)(unaff_RDI + in_R11 * 0x10) = fVar23;
    lVar19 = *(int64_t *)(unaff_RDI + 8 + lVar18 * 0x10);
    fVar11 = *(float *)(unaff_RDI + 4 + lVar18 * 0x10);
    fVar12 = *(float *)(lVar19 + 0x18);
    fVar13 = *(float *)(unaff_RDI + lVar18 * 0x10);
    fVar14 = *(float *)(lVar19 + 0x14);
    fVar28 = ((fVar27 * fVar24 + fVar23 * fVar22 + fVar28 * fVar21) -
             fVar13 * *(float *)(lVar19 + 0x1c)) - fVar11 * *(float *)(lVar19 + 0x20);
    fVar27 = *(float *)(lVar19 + 0x10);
    *(float *)(unaff_RDI + 4 + lVar18 * 0x10) = fVar13;
    *(float *)(unaff_RDI + lVar18 * 0x10) = fVar28;
    unaff_RBP[iVar16] =
         (fVar7 * fVar8 + fVar26 * fVar3 + fVar9 * fVar10) * unaff_XMM9_Da +
         (fVar5 * fVar1 + fVar25 * fVar2 + fVar4 * fVar6) * unaff_XMM10_Da +
         (fVar13 * fVar14 + fVar28 * fVar27 + fVar11 * fVar12) * unaff_XMM8_Da;
    unaff_RBP = unaff_RBP + unaff_R12D;
    unaff_R15D = unaff_R15D + -1;
  } while (unaff_R15D != 0);
  local_buffer_b0 = local_buffer_b0 & 3;
  if (local_buffer_b0 != 0) {
    lVar19 = in_R11 + 0x20;
    pfVar20 = (float *)(lVar19 * 0x10 + unaff_RDI);
    lVar18 = (int64_t)unaff_RBP - (int64_t)unaff_RBX;
    do {
      lVar15 = *(int64_t *)(param_3 + 8 + in_R11 * 0x10);
      fVar1 = *(float *)(param_3 + in_R11 * 0x10);
      fVar2 = *(float *)(param_3 + 4 + in_R11 * 0x10);
      fVar3 = *(float *)(lVar15 + 0x14);
      fVar27 = *(float *)(lVar15 + 0x18);
      fVar21 = (*unaff_RBX - fVar1 * *(float *)(lVar15 + 0x1c)) - fVar2 * *(float *)(lVar15 + 0x20);
      fVar28 = *(float *)(lVar15 + 0x10);
      *(float *)(param_3 + 4 + in_R11 * 0x10) = fVar1;
      *(float *)(param_3 + in_R11 * 0x10) = fVar21;
      lVar15 = *(int64_t *)(param_3 + 8 + lVar19 * 0x10);
      fVar4 = *(float *)(param_3 + 4 + lVar19 * 0x10);
      fVar5 = *(float *)(lVar15 + 0x18);
      fVar6 = *(float *)(param_3 + lVar19 * 0x10);
      fVar24 = *(float *)(lVar15 + 0x14);
      fVar25 = ((fVar1 * fVar3 + fVar21 * fVar28 + fVar2 * fVar27) -
               fVar6 * *(float *)(lVar15 + 0x1c)) - fVar4 * *(float *)(lVar15 + 0x20);
      fVar1 = *(float *)(lVar15 + 0x10);
      *(float *)(param_3 + lVar19 * 0x10) = fVar25;
      *(float *)(param_3 + 4 + lVar19 * 0x10) = fVar6;
      lVar15 = *(int64_t *)(in_R10 + 8 + in_R11 * 0x10);
      fVar2 = *(float *)(in_R10 + in_R11 * 0x10);
      fVar3 = *(float *)(in_R10 + 4 + in_R11 * 0x10);
      fVar27 = *(float *)(lVar15 + 0x18);
      fVar28 = *(float *)(lVar15 + 0x14);
      fVar22 = (*unaff_RBX - fVar2 * *(float *)(lVar15 + 0x1c)) - fVar3 * *(float *)(lVar15 + 0x20);
      fVar21 = *(float *)(lVar15 + 0x10);
      *(float *)(in_R10 + 4 + in_R11 * 0x10) = fVar2;
      *(float *)(in_R10 + in_R11 * 0x10) = fVar22;
      lVar15 = *(int64_t *)(in_R10 + 8 + lVar19 * 0x10);
      fVar7 = *(float *)(in_R10 + 4 + lVar19 * 0x10);
      fVar8 = *(float *)(lVar15 + 0x18);
      fVar9 = *(float *)(in_R10 + lVar19 * 0x10);
      fVar10 = *(float *)(lVar15 + 0x14);
      fVar22 = ((fVar22 * fVar21 + fVar2 * fVar28 + fVar3 * fVar27) -
               fVar9 * *(float *)(lVar15 + 0x1c)) - fVar7 * *(float *)(lVar15 + 0x20);
      fVar2 = *(float *)(lVar15 + 0x10);
      *(float *)(in_R10 + 4 + lVar19 * 0x10) = fVar9;
      *(float *)(in_R10 + lVar19 * 0x10) = fVar22;
      lVar15 = *(int64_t *)(param_4 + 8 + in_R11 * 0x10);
      fVar3 = *(float *)(param_4 + in_R11 * 0x10);
      fVar27 = *(float *)(param_4 + 4 + in_R11 * 0x10);
      fVar28 = *(float *)(lVar15 + 0x18);
      fVar21 = *(float *)(lVar15 + 0x14);
      fVar22 = ((fVar22 * fVar2 + fVar9 * fVar10 + fVar7 * fVar8) -
               fVar3 * *(float *)(lVar15 + 0x1c)) - fVar27 * *(float *)(lVar15 + 0x20);
      fVar2 = *(float *)(lVar15 + 0x10);
      *(float *)(param_4 + in_R11 * 0x10) = fVar22;
      *(float *)(param_4 + 4 + in_R11 * 0x10) = fVar3;
      lVar15 = *(int64_t *)(param_4 + 8 + lVar19 * 0x10);
      fVar7 = *(float *)(param_4 + lVar19 * 0x10);
      fVar8 = *(float *)(param_4 + 4 + lVar19 * 0x10);
      fVar9 = *(float *)(lVar15 + 0x18);
      fVar10 = *(float *)(lVar15 + 0x14);
      fVar26 = ((fVar22 * fVar2 + fVar3 * fVar21 + fVar27 * fVar28) -
               fVar7 * *(float *)(lVar15 + 0x1c)) - fVar8 * *(float *)(lVar15 + 0x20);
      fVar2 = *(float *)(lVar15 + 0x10);
      *(float *)(param_4 + lVar19 * 0x10) = fVar26;
      *(float *)(param_4 + 4 + lVar19 * 0x10) = fVar7;
      lVar15 = *(int64_t *)(unaff_RDI + 8 + in_R11 * 0x10);
      fVar3 = *(float *)(unaff_RDI + in_R11 * 0x10);
      fVar27 = *(float *)(unaff_RDI + 4 + in_R11 * 0x10);
      fVar28 = *(float *)(lVar15 + 0x18);
      fVar21 = *(float *)(lVar15 + 0x14);
      fVar23 = (*unaff_RBX - fVar3 * *(float *)(lVar15 + 0x1c)) - fVar27 * *(float *)(lVar15 + 0x20)
      ;
      fVar22 = *(float *)(lVar15 + 0x10);
      *(float *)(unaff_RDI + 4 + in_R11 * 0x10) = fVar3;
      *(float *)(unaff_RDI + in_R11 * 0x10) = fVar23;
      lVar15 = *(int64_t *)(pfVar20 + 2);
      fVar11 = pfVar20[1];
      fVar12 = *(float *)(lVar15 + 0x18);
      fVar13 = *pfVar20;
      fVar14 = *(float *)(lVar15 + 0x14);
      fVar27 = ((fVar23 * fVar22 + fVar3 * fVar21 + fVar27 * fVar28) -
               fVar13 * *(float *)(lVar15 + 0x1c)) - fVar11 * *(float *)(lVar15 + 0x20);
      fVar3 = *(float *)(lVar15 + 0x10);
      pfVar20[1] = fVar13;
      *pfVar20 = fVar27;
      *(float *)((int64_t)unaff_RBX + lVar18) =
           (fVar26 * fVar2 + fVar7 * fVar10 + fVar8 * fVar9) * unaff_XMM9_Da +
           (fVar25 * fVar1 + fVar6 * fVar24 + fVar4 * fVar5) * unaff_XMM10_Da +
           (fVar27 * fVar3 + fVar13 * fVar14 + fVar11 * fVar12) * unaff_XMM8_Da;
      unaff_RBX = unaff_RBX + local_buffer_b8;
      local_buffer_b0 = local_buffer_b0 - 1;
    } while (local_buffer_b0 != 0);
  }
  return;
}
// 函数: void function_7fbba9(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t param_4)
void function_7fbba9(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t param_4)
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
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int64_t lVar17;
  float *unaff_RBX;
  int64_t unaff_RBP;
  int64_t lVar18;
  uint unaff_ESI;
  uint uVar19;
  int64_t unaff_RDI;
  int64_t in_R10;
  int64_t in_R11;
  int64_t lVar20;
  float *pfVar21;
  int unaff_R14D;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  uVar19 = unaff_ESI & 3;
  if (uVar19 != 0) {
    lVar20 = in_R11 + 0x20;
    pfVar21 = (float *)(lVar20 * 0x10 + unaff_RDI);
    lVar18 = unaff_RBP - (int64_t)unaff_RBX;
    do {
      lVar17 = *(int64_t *)(param_3 + 8 + in_R11 * 0x10);
      fVar1 = *(float *)(param_3 + in_R11 * 0x10);
      fVar2 = *(float *)(param_3 + 4 + in_R11 * 0x10);
      fVar3 = *(float *)(lVar17 + 0x14);
      fVar27 = *(float *)(lVar17 + 0x18);
      fVar22 = (*unaff_RBX - fVar1 * *(float *)(lVar17 + 0x1c)) - fVar2 * *(float *)(lVar17 + 0x20);
      fVar4 = *(float *)(lVar17 + 0x10);
      *(float *)(param_3 + 4 + in_R11 * 0x10) = fVar1;
      *(float *)(param_3 + in_R11 * 0x10) = fVar22;
      lVar17 = *(int64_t *)(param_3 + 8 + lVar20 * 0x10);
      fVar5 = *(float *)(param_3 + 4 + lVar20 * 0x10);
      fVar6 = *(float *)(lVar17 + 0x18);
      fVar7 = *(float *)(param_3 + lVar20 * 0x10);
      fVar8 = *(float *)(lVar17 + 0x14);
      fVar25 = ((fVar1 * fVar3 + fVar22 * fVar4 + fVar2 * fVar27) -
               fVar7 * *(float *)(lVar17 + 0x1c)) - fVar5 * *(float *)(lVar17 + 0x20);
      fVar1 = *(float *)(lVar17 + 0x10);
      *(float *)(param_3 + lVar20 * 0x10) = fVar25;
      *(float *)(param_3 + 4 + lVar20 * 0x10) = fVar7;
      lVar17 = *(int64_t *)(in_R10 + 8 + in_R11 * 0x10);
      fVar2 = *(float *)(in_R10 + in_R11 * 0x10);
      fVar3 = *(float *)(in_R10 + 4 + in_R11 * 0x10);
      fVar27 = *(float *)(lVar17 + 0x18);
      fVar4 = *(float *)(lVar17 + 0x14);
      fVar23 = (*unaff_RBX - fVar2 * *(float *)(lVar17 + 0x1c)) - fVar3 * *(float *)(lVar17 + 0x20);
      fVar22 = *(float *)(lVar17 + 0x10);
      *(float *)(in_R10 + 4 + in_R11 * 0x10) = fVar2;
      *(float *)(in_R10 + in_R11 * 0x10) = fVar23;
      lVar17 = *(int64_t *)(in_R10 + 8 + lVar20 * 0x10);
      fVar9 = *(float *)(in_R10 + 4 + lVar20 * 0x10);
      fVar10 = *(float *)(lVar17 + 0x18);
      fVar11 = *(float *)(in_R10 + lVar20 * 0x10);
      fVar12 = *(float *)(lVar17 + 0x14);
      fVar23 = ((fVar23 * fVar22 + fVar2 * fVar4 + fVar3 * fVar27) -
               fVar11 * *(float *)(lVar17 + 0x1c)) - fVar9 * *(float *)(lVar17 + 0x20);
      fVar2 = *(float *)(lVar17 + 0x10);
      *(float *)(in_R10 + 4 + lVar20 * 0x10) = fVar11;
      *(float *)(in_R10 + lVar20 * 0x10) = fVar23;
      lVar17 = *(int64_t *)(param_4 + 8 + in_R11 * 0x10);
      fVar3 = *(float *)(param_4 + in_R11 * 0x10);
      fVar27 = *(float *)(param_4 + 4 + in_R11 * 0x10);
      fVar4 = *(float *)(lVar17 + 0x18);
      fVar22 = *(float *)(lVar17 + 0x14);
      fVar23 = ((fVar23 * fVar2 + fVar11 * fVar12 + fVar9 * fVar10) -
               fVar3 * *(float *)(lVar17 + 0x1c)) - fVar27 * *(float *)(lVar17 + 0x20);
      fVar2 = *(float *)(lVar17 + 0x10);
      *(float *)(param_4 + in_R11 * 0x10) = fVar23;
      *(float *)(param_4 + 4 + in_R11 * 0x10) = fVar3;
      lVar17 = *(int64_t *)(param_4 + 8 + lVar20 * 0x10);
      fVar9 = *(float *)(param_4 + lVar20 * 0x10);
      fVar10 = *(float *)(param_4 + 4 + lVar20 * 0x10);
      fVar11 = *(float *)(lVar17 + 0x18);
      fVar12 = *(float *)(lVar17 + 0x14);
      fVar26 = ((fVar23 * fVar2 + fVar3 * fVar22 + fVar27 * fVar4) -
               fVar9 * *(float *)(lVar17 + 0x1c)) - fVar10 * *(float *)(lVar17 + 0x20);
      fVar2 = *(float *)(lVar17 + 0x10);
      *(float *)(param_4 + lVar20 * 0x10) = fVar26;
      *(float *)(param_4 + 4 + lVar20 * 0x10) = fVar9;
      lVar17 = *(int64_t *)(unaff_RDI + 8 + in_R11 * 0x10);
      fVar3 = *(float *)(unaff_RDI + in_R11 * 0x10);
      fVar27 = *(float *)(unaff_RDI + 4 + in_R11 * 0x10);
      fVar4 = *(float *)(lVar17 + 0x18);
      fVar22 = *(float *)(lVar17 + 0x14);
      fVar24 = (*unaff_RBX - fVar3 * *(float *)(lVar17 + 0x1c)) - fVar27 * *(float *)(lVar17 + 0x20)
      ;
      fVar23 = *(float *)(lVar17 + 0x10);
      *(float *)(unaff_RDI + 4 + in_R11 * 0x10) = fVar3;
      *(float *)(unaff_RDI + in_R11 * 0x10) = fVar24;
      lVar17 = *(int64_t *)(pfVar21 + 2);
      fVar13 = pfVar21[1];
      fVar14 = *(float *)(lVar17 + 0x18);
      fVar15 = *pfVar21;
      fVar16 = *(float *)(lVar17 + 0x14);
      fVar27 = ((fVar24 * fVar23 + fVar3 * fVar22 + fVar27 * fVar4) -
               fVar15 * *(float *)(lVar17 + 0x1c)) - fVar13 * *(float *)(lVar17 + 0x20);
      fVar3 = *(float *)(lVar17 + 0x10);
      pfVar21[1] = fVar15;
      *pfVar21 = fVar27;
      *(float *)((int64_t)unaff_RBX + lVar18) =
           (fVar26 * fVar2 + fVar9 * fVar12 + fVar10 * fVar11) * unaff_XMM9_Da +
           (fVar25 * fVar1 + fVar7 * fVar8 + fVar5 * fVar6) * unaff_XMM10_Da +
           (fVar27 * fVar3 + fVar15 * fVar16 + fVar13 * fVar14) * unaff_XMM8_Da;
      unaff_RBX = unaff_RBX + unaff_R14D;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  return;
}