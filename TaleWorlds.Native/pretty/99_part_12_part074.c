#include "TaleWorlds.Native.Split.h"
// 99_part_12_part074.c - 1 个函数
// 函数: void function_7fbbbf(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t param_4)
void function_7fbbbf(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t param_4)
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
  int unaff_ESI;
  int64_t unaff_RDI;
  int64_t in_R10;
  int64_t in_R11;
  int64_t lVar19;
  float *pfVar20;
  int unaff_R14D;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  lVar19 = in_R11 + 0x20;
  pfVar20 = (float *)(lVar19 * 0x10 + unaff_RDI);
  lVar18 = unaff_RBP - (int64_t)unaff_RBX;
  do {
    lVar17 = *(int64_t *)(param_3 + 8 + in_R11 * 0x10);
    fVar1 = *(float *)(param_3 + in_R11 * 0x10);
    fVar2 = *(float *)(param_3 + 4 + in_R11 * 0x10);
    fVar3 = *(float *)(lVar17 + 0x14);
    fVar26 = *(float *)(lVar17 + 0x18);
    fVar21 = (*unaff_RBX - fVar1 * *(float *)(lVar17 + 0x1c)) - fVar2 * *(float *)(lVar17 + 0x20);
    fVar4 = *(float *)(lVar17 + 0x10);
    *(float *)(param_3 + 4 + in_R11 * 0x10) = fVar1;
    *(float *)(param_3 + in_R11 * 0x10) = fVar21;
    lVar17 = *(int64_t *)(param_3 + 8 + lVar19 * 0x10);
    fVar5 = *(float *)(param_3 + 4 + lVar19 * 0x10);
    fVar6 = *(float *)(lVar17 + 0x18);
    fVar7 = *(float *)(param_3 + lVar19 * 0x10);
    fVar8 = *(float *)(lVar17 + 0x14);
    fVar24 = ((fVar1 * fVar3 + fVar21 * fVar4 + fVar2 * fVar26) - fVar7 * *(float *)(lVar17 + 0x1c))
             - fVar5 * *(float *)(lVar17 + 0x20);
    fVar1 = *(float *)(lVar17 + 0x10);
    *(float *)(param_3 + lVar19 * 0x10) = fVar24;
    *(float *)(param_3 + 4 + lVar19 * 0x10) = fVar7;
    lVar17 = *(int64_t *)(in_R10 + 8 + in_R11 * 0x10);
    fVar2 = *(float *)(in_R10 + in_R11 * 0x10);
    fVar3 = *(float *)(in_R10 + 4 + in_R11 * 0x10);
    fVar26 = *(float *)(lVar17 + 0x18);
    fVar4 = *(float *)(lVar17 + 0x14);
    fVar22 = (*unaff_RBX - fVar2 * *(float *)(lVar17 + 0x1c)) - fVar3 * *(float *)(lVar17 + 0x20);
    fVar21 = *(float *)(lVar17 + 0x10);
    *(float *)(in_R10 + 4 + in_R11 * 0x10) = fVar2;
    *(float *)(in_R10 + in_R11 * 0x10) = fVar22;
    lVar17 = *(int64_t *)(in_R10 + 8 + lVar19 * 0x10);
    fVar9 = *(float *)(in_R10 + 4 + lVar19 * 0x10);
    fVar10 = *(float *)(lVar17 + 0x18);
    fVar11 = *(float *)(in_R10 + lVar19 * 0x10);
    fVar12 = *(float *)(lVar17 + 0x14);
    fVar22 = ((fVar22 * fVar21 + fVar2 * fVar4 + fVar3 * fVar26) -
             fVar11 * *(float *)(lVar17 + 0x1c)) - fVar9 * *(float *)(lVar17 + 0x20);
    fVar2 = *(float *)(lVar17 + 0x10);
    *(float *)(in_R10 + 4 + lVar19 * 0x10) = fVar11;
    *(float *)(in_R10 + lVar19 * 0x10) = fVar22;
    lVar17 = *(int64_t *)(param_4 + 8 + in_R11 * 0x10);
    fVar3 = *(float *)(param_4 + in_R11 * 0x10);
    fVar26 = *(float *)(param_4 + 4 + in_R11 * 0x10);
    fVar4 = *(float *)(lVar17 + 0x18);
    fVar21 = *(float *)(lVar17 + 0x14);
    fVar22 = ((fVar22 * fVar2 + fVar11 * fVar12 + fVar9 * fVar10) -
             fVar3 * *(float *)(lVar17 + 0x1c)) - fVar26 * *(float *)(lVar17 + 0x20);
    fVar2 = *(float *)(lVar17 + 0x10);
    *(float *)(param_4 + in_R11 * 0x10) = fVar22;
    *(float *)(param_4 + 4 + in_R11 * 0x10) = fVar3;
    lVar17 = *(int64_t *)(param_4 + 8 + lVar19 * 0x10);
    fVar9 = *(float *)(param_4 + lVar19 * 0x10);
    fVar10 = *(float *)(param_4 + 4 + lVar19 * 0x10);
    fVar11 = *(float *)(lVar17 + 0x18);
    fVar12 = *(float *)(lVar17 + 0x14);
    fVar25 = ((fVar22 * fVar2 + fVar3 * fVar21 + fVar26 * fVar4) - fVar9 * *(float *)(lVar17 + 0x1c)
             ) - fVar10 * *(float *)(lVar17 + 0x20);
    fVar2 = *(float *)(lVar17 + 0x10);
    *(float *)(param_4 + lVar19 * 0x10) = fVar25;
    *(float *)(param_4 + 4 + lVar19 * 0x10) = fVar9;
    lVar17 = *(int64_t *)(unaff_RDI + 8 + in_R11 * 0x10);
    fVar3 = *(float *)(unaff_RDI + in_R11 * 0x10);
    fVar26 = *(float *)(unaff_RDI + 4 + in_R11 * 0x10);
    fVar4 = *(float *)(lVar17 + 0x18);
    fVar21 = *(float *)(lVar17 + 0x14);
    fVar23 = (*unaff_RBX - fVar3 * *(float *)(lVar17 + 0x1c)) - fVar26 * *(float *)(lVar17 + 0x20);
    fVar22 = *(float *)(lVar17 + 0x10);
    *(float *)(unaff_RDI + 4 + in_R11 * 0x10) = fVar3;
    *(float *)(unaff_RDI + in_R11 * 0x10) = fVar23;
    lVar17 = *(int64_t *)(pfVar20 + 2);
    fVar13 = pfVar20[1];
    fVar14 = *(float *)(lVar17 + 0x18);
    fVar15 = *pfVar20;
    fVar16 = *(float *)(lVar17 + 0x14);
    fVar26 = ((fVar23 * fVar22 + fVar3 * fVar21 + fVar26 * fVar4) -
             fVar15 * *(float *)(lVar17 + 0x1c)) - fVar13 * *(float *)(lVar17 + 0x20);
    fVar3 = *(float *)(lVar17 + 0x10);
    pfVar20[1] = fVar15;
    *pfVar20 = fVar26;
    *(float *)((int64_t)unaff_RBX + lVar18) =
         (fVar25 * fVar2 + fVar9 * fVar12 + fVar10 * fVar11) * unaff_XMM9_Da +
         (fVar24 * fVar1 + fVar7 * fVar8 + fVar5 * fVar6) * unaff_XMM10_Da +
         (fVar26 * fVar3 + fVar15 * fVar16 + fVar13 * fVar14) * unaff_XMM8_Da;
    unaff_RBX = unaff_RBX + unaff_R14D;
    unaff_ESI = unaff_ESI + -1;
  } while (unaff_ESI != 0);
  return;
}