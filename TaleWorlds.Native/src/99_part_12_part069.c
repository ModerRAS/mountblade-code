#include "TaleWorlds.Native.Split.h"

// 99_part_12_part069.c - 2 个函数

// 函数: void FUN_1807fa710(float *param_1,float *param_2,uint param_3,int param_4,int param_5,
void FUN_1807fa710(float *param_1,float *param_2,uint param_3,int param_4,int param_5,
                  longlong param_6,longlong param_7,longlong param_8,longlong param_9,float param_10
                  ,float param_11,float param_12)

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
  longlong lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  lVar20 = (longlong)param_5;
  iVar18 = (int)param_3 >> 2;
  if (iVar18 != 0) {
    iVar17 = param_4 * 2;
    iVar16 = param_4 * 3;
    do {
      lVar19 = *(longlong *)(param_6 + 8 + lVar20 * 0x10);
      fVar1 = *(float *)(param_6 + lVar20 * 0x10);
      fVar2 = *(float *)(param_6 + 4 + lVar20 * 0x10);
      fVar3 = *(float *)(lVar19 + 0x18);
      fVar4 = *(float *)(lVar19 + 0x14);
      fVar21 = (*param_2 - fVar1 * *(float *)(lVar19 + 0x1c)) - fVar2 * *(float *)(lVar19 + 0x20);
      fVar5 = *(float *)(lVar19 + 0x10);
      *(float *)(param_6 + 4 + lVar20 * 0x10) = fVar1;
      *(float *)(param_6 + lVar20 * 0x10) = fVar21;
      lVar19 = *(longlong *)(param_8 + 8 + lVar20 * 0x10);
      fVar6 = *(float *)(param_8 + lVar20 * 0x10);
      fVar7 = *(float *)(lVar19 + 0x14);
      fVar8 = *(float *)(param_8 + 4 + lVar20 * 0x10);
      fVar9 = *(float *)(lVar19 + 0x18);
      fVar22 = (*param_2 - fVar6 * *(float *)(lVar19 + 0x1c)) - fVar8 * *(float *)(lVar19 + 0x20);
      fVar10 = *(float *)(lVar19 + 0x10);
      *(float *)(param_8 + 4 + lVar20 * 0x10) = fVar6;
      *(float *)(param_8 + lVar20 * 0x10) = fVar22;
      lVar19 = *(longlong *)(param_7 + 8 + lVar20 * 0x10);
      fVar11 = *(float *)(param_7 + 4 + lVar20 * 0x10);
      fVar12 = *(float *)(lVar19 + 0x18);
      fVar13 = *(float *)(param_7 + lVar20 * 0x10);
      fVar14 = *(float *)(lVar19 + 0x14);
      fVar24 = ((fVar6 * fVar7 + fVar22 * fVar10 + fVar8 * fVar9) -
               fVar13 * *(float *)(lVar19 + 0x1c)) - fVar11 * *(float *)(lVar19 + 0x20);
      fVar6 = *(float *)(lVar19 + 0x10);
      *(float *)(param_7 + 4 + lVar20 * 0x10) = fVar13;
      *(float *)(param_7 + lVar20 * 0x10) = fVar24;
      lVar19 = *(longlong *)(param_9 + 8 + lVar20 * 0x10);
      fVar7 = *(float *)(param_9 + lVar20 * 0x10);
      fVar8 = *(float *)(param_9 + 4 + lVar20 * 0x10);
      fVar9 = *(float *)(lVar19 + 0x18);
      fVar10 = *(float *)(lVar19 + 0x14);
      fVar23 = (*param_2 - fVar7 * *(float *)(lVar19 + 0x1c)) - fVar8 * *(float *)(lVar19 + 0x20);
      fVar22 = *(float *)(lVar19 + 0x10);
      *(float *)(param_9 + 4 + lVar20 * 0x10) = fVar7;
      *(float *)(param_9 + lVar20 * 0x10) = fVar23;
      *param_1 = ((fVar1 * fVar4 + fVar21 * fVar5 + fVar2 * fVar3) * param_10 -
                 (fVar13 * fVar14 + fVar24 * fVar6 + fVar11 * fVar12) * param_11) +
                 (fVar23 * fVar22 + fVar7 * fVar10 + fVar8 * fVar9) * param_12;
      lVar19 = *(longlong *)(param_6 + 8 + lVar20 * 0x10);
      fVar1 = *(float *)(param_6 + lVar20 * 0x10);
      fVar2 = *(float *)(param_6 + 4 + lVar20 * 0x10);
      fVar3 = *(float *)(lVar19 + 0x18);
      fVar4 = *(float *)(lVar19 + 0x14);
      fVar21 = (param_2[param_4] - fVar1 * *(float *)(lVar19 + 0x1c)) -
               fVar2 * *(float *)(lVar19 + 0x20);
      fVar5 = *(float *)(lVar19 + 0x10);
      *(float *)(param_6 + 4 + lVar20 * 0x10) = fVar1;
      *(float *)(param_6 + lVar20 * 0x10) = fVar21;
      lVar19 = *(longlong *)(param_8 + 8 + lVar20 * 0x10);
      fVar6 = *(float *)(param_8 + lVar20 * 0x10);
      fVar7 = *(float *)(param_8 + 4 + lVar20 * 0x10);
      fVar8 = *(float *)(lVar19 + 0x18);
      fVar9 = *(float *)(lVar19 + 0x14);
      fVar22 = (param_2[param_4] - fVar6 * *(float *)(lVar19 + 0x1c)) -
               fVar7 * *(float *)(lVar19 + 0x20);
      fVar10 = *(float *)(lVar19 + 0x10);
      *(float *)(param_8 + 4 + lVar20 * 0x10) = fVar6;
      *(float *)(param_8 + lVar20 * 0x10) = fVar22;
      lVar19 = *(longlong *)(param_7 + 8 + lVar20 * 0x10);
      fVar11 = *(float *)(param_7 + 4 + lVar20 * 0x10);
      fVar12 = *(float *)(lVar19 + 0x18);
      fVar13 = *(float *)(param_7 + lVar20 * 0x10);
      fVar14 = *(float *)(lVar19 + 0x14);
      fVar24 = ((fVar22 * fVar10 + fVar6 * fVar9 + fVar7 * fVar8) -
               fVar13 * *(float *)(lVar19 + 0x1c)) - fVar11 * *(float *)(lVar19 + 0x20);
      fVar6 = *(float *)(lVar19 + 0x10);
      *(float *)(param_7 + 4 + lVar20 * 0x10) = fVar13;
      *(float *)(param_7 + lVar20 * 0x10) = fVar24;
      lVar19 = *(longlong *)(param_9 + 8 + lVar20 * 0x10);
      fVar7 = *(float *)(param_9 + lVar20 * 0x10);
      fVar8 = *(float *)(param_9 + 4 + lVar20 * 0x10);
      fVar9 = *(float *)(lVar19 + 0x18);
      fVar10 = *(float *)(lVar19 + 0x14);
      fVar23 = (param_2[param_4] - fVar7 * *(float *)(lVar19 + 0x1c)) -
               fVar8 * *(float *)(lVar19 + 0x20);
      fVar22 = *(float *)(lVar19 + 0x10);
      *(float *)(param_9 + 4 + lVar20 * 0x10) = fVar7;
      *(float *)(param_9 + lVar20 * 0x10) = fVar23;
      param_1[param_4] =
           ((fVar21 * fVar5 + fVar1 * fVar4 + fVar2 * fVar3) * param_10 -
           (fVar24 * fVar6 + fVar13 * fVar14 + fVar11 * fVar12) * param_11) +
           (fVar23 * fVar22 + fVar7 * fVar10 + fVar8 * fVar9) * param_12;
      lVar19 = *(longlong *)(param_6 + 8 + lVar20 * 0x10);
      fVar1 = *(float *)(param_6 + lVar20 * 0x10);
      fVar2 = *(float *)(param_6 + 4 + lVar20 * 0x10);
      fVar3 = *(float *)(lVar19 + 0x18);
      fVar4 = *(float *)(lVar19 + 0x14);
      fVar21 = (param_2[iVar17] - fVar1 * *(float *)(lVar19 + 0x1c)) -
               fVar2 * *(float *)(lVar19 + 0x20);
      fVar5 = *(float *)(lVar19 + 0x10);
      *(float *)(param_6 + 4 + lVar20 * 0x10) = fVar1;
      *(float *)(param_6 + lVar20 * 0x10) = fVar21;
      lVar19 = *(longlong *)(param_8 + 8 + lVar20 * 0x10);
      fVar6 = *(float *)(param_8 + lVar20 * 0x10);
      fVar7 = *(float *)(lVar19 + 0x14);
      fVar8 = *(float *)(param_8 + 4 + lVar20 * 0x10);
      fVar9 = *(float *)(lVar19 + 0x18);
      fVar22 = (param_2[iVar17] - fVar6 * *(float *)(lVar19 + 0x1c)) -
               fVar8 * *(float *)(lVar19 + 0x20);
      fVar10 = *(float *)(lVar19 + 0x10);
      *(float *)(param_8 + 4 + lVar20 * 0x10) = fVar6;
      *(float *)(param_8 + lVar20 * 0x10) = fVar22;
      lVar19 = *(longlong *)(param_7 + 8 + lVar20 * 0x10);
      fVar11 = *(float *)(param_7 + 4 + lVar20 * 0x10);
      fVar12 = *(float *)(lVar19 + 0x18);
      fVar13 = *(float *)(param_7 + lVar20 * 0x10);
      fVar14 = *(float *)(lVar19 + 0x14);
      fVar24 = ((fVar6 * fVar7 + fVar22 * fVar10 + fVar8 * fVar9) -
               fVar13 * *(float *)(lVar19 + 0x1c)) - fVar11 * *(float *)(lVar19 + 0x20);
      fVar6 = *(float *)(lVar19 + 0x10);
      *(float *)(param_7 + 4 + lVar20 * 0x10) = fVar13;
      *(float *)(param_7 + lVar20 * 0x10) = fVar24;
      lVar19 = *(longlong *)(param_9 + 8 + lVar20 * 0x10);
      fVar7 = *(float *)(param_9 + lVar20 * 0x10);
      fVar8 = *(float *)(param_9 + 4 + lVar20 * 0x10);
      fVar9 = *(float *)(lVar19 + 0x14);
      fVar10 = *(float *)(lVar19 + 0x18);
      fVar23 = (param_2[iVar17] - fVar7 * *(float *)(lVar19 + 0x1c)) -
               fVar8 * *(float *)(lVar19 + 0x20);
      fVar22 = *(float *)(lVar19 + 0x10);
      *(float *)(param_9 + 4 + lVar20 * 0x10) = fVar7;
      *(float *)(param_9 + lVar20 * 0x10) = fVar23;
      param_1[iVar17] =
           ((fVar21 * fVar5 + fVar1 * fVar4 + fVar2 * fVar3) * param_10 -
           (fVar13 * fVar14 + fVar24 * fVar6 + fVar11 * fVar12) * param_11) +
           (fVar7 * fVar9 + fVar23 * fVar22 + fVar8 * fVar10) * param_12;
      lVar19 = *(longlong *)(param_6 + 8 + lVar20 * 0x10);
      fVar1 = *(float *)(param_6 + lVar20 * 0x10);
      fVar2 = *(float *)(param_6 + 4 + lVar20 * 0x10);
      fVar3 = *(float *)(lVar19 + 0x18);
      fVar4 = *(float *)(lVar19 + 0x14);
      fVar21 = (param_2[iVar16] - fVar1 * *(float *)(lVar19 + 0x1c)) -
               fVar2 * *(float *)(lVar19 + 0x20);
      fVar5 = *(float *)(lVar19 + 0x10);
      *(float *)(param_6 + lVar20 * 0x10) = fVar21;
      *(float *)(param_6 + 4 + lVar20 * 0x10) = fVar1;
      lVar19 = *(longlong *)(param_8 + 8 + lVar20 * 0x10);
      fVar6 = *(float *)(param_8 + lVar20 * 0x10);
      fVar7 = *(float *)(param_8 + 4 + lVar20 * 0x10);
      fVar8 = *(float *)(lVar19 + 0x18);
      fVar9 = *(float *)(lVar19 + 0x14);
      fVar22 = (param_2[iVar16] - fVar6 * *(float *)(lVar19 + 0x1c)) -
               fVar7 * *(float *)(lVar19 + 0x20);
      fVar10 = *(float *)(lVar19 + 0x10);
      *(float *)(param_8 + lVar20 * 0x10) = fVar22;
      *(float *)(param_8 + 4 + lVar20 * 0x10) = fVar6;
      lVar19 = *(longlong *)(param_7 + 8 + lVar20 * 0x10);
      fVar11 = *(float *)(param_7 + 4 + lVar20 * 0x10);
      fVar12 = *(float *)(lVar19 + 0x18);
      fVar13 = *(float *)(param_7 + lVar20 * 0x10);
      fVar14 = *(float *)(lVar19 + 0x14);
      fVar24 = ((fVar22 * fVar10 + fVar6 * fVar9 + fVar7 * fVar8) -
               fVar13 * *(float *)(lVar19 + 0x1c)) - fVar11 * *(float *)(lVar19 + 0x20);
      fVar6 = *(float *)(lVar19 + 0x10);
      *(float *)(param_7 + lVar20 * 0x10) = fVar24;
      *(float *)(param_7 + 4 + lVar20 * 0x10) = fVar13;
      lVar19 = *(longlong *)(param_9 + 8 + lVar20 * 0x10);
      fVar7 = *(float *)(param_9 + lVar20 * 0x10);
      fVar8 = *(float *)(param_9 + 4 + lVar20 * 0x10);
      fVar9 = *(float *)(lVar19 + 0x18);
      fVar10 = *(float *)(lVar19 + 0x14);
      fVar23 = (param_2[iVar16] - fVar7 * *(float *)(lVar19 + 0x1c)) -
               fVar8 * *(float *)(lVar19 + 0x20);
      fVar22 = *(float *)(lVar19 + 0x10);
      *(float *)(param_9 + 4 + lVar20 * 0x10) = fVar7;
      *(float *)(param_9 + lVar20 * 0x10) = fVar23;
      param_1[iVar16] =
           ((fVar1 * fVar4 + fVar21 * fVar5 + fVar2 * fVar3) * param_10 -
           (fVar24 * fVar6 + fVar13 * fVar14 + fVar11 * fVar12) * param_11) +
           (fVar23 * fVar22 + fVar7 * fVar10 + fVar8 * fVar9) * param_12;
      param_1 = param_1 + param_4 * 4;
      param_2 = param_2 + param_4 * 4;
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
  }
  param_3 = param_3 & 3;
  if (param_3 != 0) {
    lVar20 = (longlong)param_5;
    lVar19 = (longlong)param_1 - (longlong)param_2;
    do {
      lVar15 = *(longlong *)(param_6 + 8 + lVar20 * 0x10);
      fVar1 = *(float *)(param_6 + lVar20 * 0x10);
      fVar2 = *(float *)(param_6 + 4 + lVar20 * 0x10);
      fVar3 = *(float *)(lVar15 + 0x18);
      fVar4 = *(float *)(lVar15 + 0x14);
      fVar21 = (*param_2 - fVar1 * *(float *)(lVar15 + 0x1c)) - fVar2 * *(float *)(lVar15 + 0x20);
      fVar5 = *(float *)(lVar15 + 0x10);
      *(float *)(param_6 + lVar20 * 0x10) = fVar21;
      *(float *)(param_6 + 4 + lVar20 * 0x10) = fVar1;
      lVar15 = *(longlong *)(param_8 + 8 + lVar20 * 0x10);
      fVar6 = *(float *)(param_8 + lVar20 * 0x10);
      fVar7 = *(float *)(param_8 + 4 + lVar20 * 0x10);
      fVar8 = *(float *)(lVar15 + 0x18);
      fVar9 = *(float *)(lVar15 + 0x14);
      fVar22 = (*param_2 - fVar6 * *(float *)(lVar15 + 0x1c)) - fVar7 * *(float *)(lVar15 + 0x20);
      fVar10 = *(float *)(lVar15 + 0x10);
      *(float *)(param_8 + lVar20 * 0x10) = fVar22;
      *(float *)(param_8 + 4 + lVar20 * 0x10) = fVar6;
      lVar15 = *(longlong *)(param_7 + 8 + lVar20 * 0x10);
      fVar11 = *(float *)(param_7 + 4 + lVar20 * 0x10);
      fVar12 = *(float *)(lVar15 + 0x18);
      fVar13 = *(float *)(param_7 + lVar20 * 0x10);
      fVar14 = *(float *)(lVar15 + 0x14);
      fVar24 = ((fVar22 * fVar10 + fVar6 * fVar9 + fVar7 * fVar8) -
               fVar13 * *(float *)(lVar15 + 0x1c)) - fVar11 * *(float *)(lVar15 + 0x20);
      fVar6 = *(float *)(lVar15 + 0x10);
      *(float *)(param_7 + lVar20 * 0x10) = fVar24;
      *(float *)(param_7 + 4 + lVar20 * 0x10) = fVar13;
      lVar15 = *(longlong *)(param_9 + 8 + lVar20 * 0x10);
      fVar7 = *(float *)(param_9 + lVar20 * 0x10);
      fVar8 = *(float *)(param_9 + 4 + lVar20 * 0x10);
      fVar9 = *(float *)(lVar15 + 0x14);
      fVar10 = *(float *)(lVar15 + 0x18);
      fVar23 = (*param_2 - fVar7 * *(float *)(lVar15 + 0x1c)) - fVar8 * *(float *)(lVar15 + 0x20);
      fVar22 = *(float *)(lVar15 + 0x10);
      *(float *)(param_9 + 4 + lVar20 * 0x10) = fVar7;
      *(float *)(param_9 + lVar20 * 0x10) = fVar23;
      *(float *)(lVar19 + (longlong)param_2) =
           ((fVar21 * fVar5 + fVar1 * fVar4 + fVar2 * fVar3) * param_10 -
           (fVar13 * fVar14 + fVar24 * fVar6 + fVar11 * fVar12) * param_11) +
           (fVar7 * fVar9 + fVar23 * fVar22 + fVar8 * fVar10) * param_12;
      param_2 = param_2 + param_4;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}






// 函数: void FUN_1807fa774(undefined8 param_1,float *param_2,uint param_3,int param_4)
void FUN_1807fa774(undefined8 param_1,float *param_2,uint param_3,int param_4)

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
  longlong lVar15;
  int iVar16;
  int iVar17;
  longlong in_RAX;
  longlong lVar18;
  longlong unaff_RBX;
  int iVar19;
  undefined8 unaff_RBP;
  float *unaff_RDI;
  longlong lVar20;
  longlong in_R10;
  longlong in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  uint in_stack_000000b0;
  longlong in_stack_000000b8;
  
  *(undefined8 *)(in_RAX + 8) = unaff_RBP;
  iVar19 = (int)param_3 >> 2;
  *(undefined8 *)(in_RAX + -0x28) = unaff_R14;
  if (iVar19 != 0) {
    *(undefined8 *)(in_RAX + 0x10) = unaff_R12;
    *(undefined8 *)(in_RAX + 0x18) = unaff_R13;
    iVar17 = param_4 * 2;
    iVar16 = param_4 * 3;
    do {
      lVar18 = *(longlong *)(in_stack_000000b8 + 8 + unaff_R15 * 0x10);
      fVar1 = *(float *)(in_stack_000000b8 + unaff_R15 * 0x10);
      fVar2 = *(float *)(in_stack_000000b8 + 4 + unaff_R15 * 0x10);
      fVar3 = *(float *)(lVar18 + 0x18);
      fVar4 = *(float *)(lVar18 + 0x14);
      fVar21 = (*param_2 - fVar1 * *(float *)(lVar18 + 0x1c)) - fVar2 * *(float *)(lVar18 + 0x20);
      fVar5 = *(float *)(lVar18 + 0x10);
      *(float *)(in_stack_000000b8 + 4 + unaff_R15 * 0x10) = fVar1;
      *(float *)(in_stack_000000b8 + unaff_R15 * 0x10) = fVar21;
      lVar18 = *(longlong *)(in_R11 + 8 + unaff_R15 * 0x10);
      fVar6 = *(float *)(in_R11 + unaff_R15 * 0x10);
      fVar7 = *(float *)(lVar18 + 0x14);
      fVar8 = *(float *)(in_R11 + 4 + unaff_R15 * 0x10);
      fVar9 = *(float *)(lVar18 + 0x18);
      fVar22 = (*param_2 - fVar6 * *(float *)(lVar18 + 0x1c)) - fVar8 * *(float *)(lVar18 + 0x20);
      fVar10 = *(float *)(lVar18 + 0x10);
      *(float *)(in_R11 + 4 + unaff_R15 * 0x10) = fVar6;
      *(float *)(in_R11 + unaff_R15 * 0x10) = fVar22;
      lVar18 = *(longlong *)(unaff_RBX + 8 + unaff_R15 * 0x10);
      fVar11 = *(float *)(unaff_RBX + 4 + unaff_R15 * 0x10);
      fVar12 = *(float *)(lVar18 + 0x18);
      fVar13 = *(float *)(unaff_RBX + unaff_R15 * 0x10);
      fVar14 = *(float *)(lVar18 + 0x14);
      fVar24 = ((fVar6 * fVar7 + fVar22 * fVar10 + fVar8 * fVar9) -
               fVar13 * *(float *)(lVar18 + 0x1c)) - fVar11 * *(float *)(lVar18 + 0x20);
      fVar6 = *(float *)(lVar18 + 0x10);
      *(float *)(unaff_RBX + 4 + unaff_R15 * 0x10) = fVar13;
      *(float *)(unaff_RBX + unaff_R15 * 0x10) = fVar24;
      lVar18 = *(longlong *)(in_R10 + 8 + unaff_R15 * 0x10);
      fVar7 = *(float *)(in_R10 + unaff_R15 * 0x10);
      fVar8 = *(float *)(in_R10 + 4 + unaff_R15 * 0x10);
      fVar9 = *(float *)(lVar18 + 0x18);
      fVar10 = *(float *)(lVar18 + 0x14);
      fVar23 = (*param_2 - fVar7 * *(float *)(lVar18 + 0x1c)) - fVar8 * *(float *)(lVar18 + 0x20);
      fVar22 = *(float *)(lVar18 + 0x10);
      *(float *)(in_R10 + 4 + unaff_R15 * 0x10) = fVar7;
      *(float *)(in_R10 + unaff_R15 * 0x10) = fVar23;
      *unaff_RDI = ((fVar1 * fVar4 + fVar21 * fVar5 + fVar2 * fVar3) * unaff_XMM10_Da -
                   (fVar13 * fVar14 + fVar24 * fVar6 + fVar11 * fVar12) * unaff_XMM9_Da) +
                   (fVar23 * fVar22 + fVar7 * fVar10 + fVar8 * fVar9) * unaff_XMM8_Da;
      lVar18 = *(longlong *)(in_stack_000000b8 + 8 + unaff_R15 * 0x10);
      fVar1 = *(float *)(in_stack_000000b8 + unaff_R15 * 0x10);
      fVar2 = *(float *)(in_stack_000000b8 + 4 + unaff_R15 * 0x10);
      fVar3 = *(float *)(lVar18 + 0x18);
      fVar4 = *(float *)(lVar18 + 0x14);
      fVar21 = (param_2[param_4] - fVar1 * *(float *)(lVar18 + 0x1c)) -
               fVar2 * *(float *)(lVar18 + 0x20);
      fVar5 = *(float *)(lVar18 + 0x10);
      *(float *)(in_stack_000000b8 + 4 + unaff_R15 * 0x10) = fVar1;
      *(float *)(in_stack_000000b8 + unaff_R15 * 0x10) = fVar21;
      lVar18 = *(longlong *)(in_R11 + 8 + unaff_R15 * 0x10);
      fVar6 = *(float *)(in_R11 + unaff_R15 * 0x10);
      fVar7 = *(float *)(in_R11 + 4 + unaff_R15 * 0x10);
      fVar8 = *(float *)(lVar18 + 0x18);
      fVar9 = *(float *)(lVar18 + 0x14);
      fVar22 = (param_2[param_4] - fVar6 * *(float *)(lVar18 + 0x1c)) -
               fVar7 * *(float *)(lVar18 + 0x20);
      fVar10 = *(float *)(lVar18 + 0x10);
      *(float *)(in_R11 + 4 + unaff_R15 * 0x10) = fVar6;
      *(float *)(in_R11 + unaff_R15 * 0x10) = fVar22;
      lVar18 = *(longlong *)(unaff_RBX + 8 + unaff_R15 * 0x10);
      fVar11 = *(float *)(unaff_RBX + 4 + unaff_R15 * 0x10);
      fVar12 = *(float *)(lVar18 + 0x18);
      fVar13 = *(float *)(unaff_RBX + unaff_R15 * 0x10);
      fVar14 = *(float *)(lVar18 + 0x14);
      fVar24 = ((fVar22 * fVar10 + fVar6 * fVar9 + fVar7 * fVar8) -
               fVar13 * *(float *)(lVar18 + 0x1c)) - fVar11 * *(float *)(lVar18 + 0x20);
      fVar6 = *(float *)(lVar18 + 0x10);
      *(float *)(unaff_RBX + 4 + unaff_R15 * 0x10) = fVar13;
      *(float *)(unaff_RBX + unaff_R15 * 0x10) = fVar24;
      lVar18 = *(longlong *)(in_R10 + 8 + unaff_R15 * 0x10);
      fVar7 = *(float *)(in_R10 + unaff_R15 * 0x10);
      fVar8 = *(float *)(in_R10 + 4 + unaff_R15 * 0x10);
      fVar9 = *(float *)(lVar18 + 0x18);
      fVar10 = *(float *)(lVar18 + 0x14);
      fVar23 = (param_2[param_4] - fVar7 * *(float *)(lVar18 + 0x1c)) -
               fVar8 * *(float *)(lVar18 + 0x20);
      fVar22 = *(float *)(lVar18 + 0x10);
      *(float *)(in_R10 + 4 + unaff_R15 * 0x10) = fVar7;
      *(float *)(in_R10 + unaff_R15 * 0x10) = fVar23;
      unaff_RDI[param_4] =
           ((fVar21 * fVar5 + fVar1 * fVar4 + fVar2 * fVar3) * unaff_XMM10_Da -
           (fVar24 * fVar6 + fVar13 * fVar14 + fVar11 * fVar12) * unaff_XMM9_Da) +
           (fVar23 * fVar22 + fVar7 * fVar10 + fVar8 * fVar9) * unaff_XMM8_Da;
      lVar18 = *(longlong *)(in_stack_000000b8 + 8 + unaff_R15 * 0x10);
      fVar1 = *(float *)(in_stack_000000b8 + unaff_R15 * 0x10);
      fVar2 = *(float *)(in_stack_000000b8 + 4 + unaff_R15 * 0x10);
      fVar3 = *(float *)(lVar18 + 0x18);
      fVar4 = *(float *)(lVar18 + 0x14);
      fVar21 = (param_2[iVar17] - fVar1 * *(float *)(lVar18 + 0x1c)) -
               fVar2 * *(float *)(lVar18 + 0x20);
      fVar5 = *(float *)(lVar18 + 0x10);
      *(float *)(in_stack_000000b8 + 4 + unaff_R15 * 0x10) = fVar1;
      *(float *)(in_stack_000000b8 + unaff_R15 * 0x10) = fVar21;
      lVar18 = *(longlong *)(in_R11 + 8 + unaff_R15 * 0x10);
      fVar6 = *(float *)(in_R11 + unaff_R15 * 0x10);
      fVar7 = *(float *)(lVar18 + 0x14);
      fVar8 = *(float *)(in_R11 + 4 + unaff_R15 * 0x10);
      fVar9 = *(float *)(lVar18 + 0x18);
      fVar22 = (param_2[iVar17] - fVar6 * *(float *)(lVar18 + 0x1c)) -
               fVar8 * *(float *)(lVar18 + 0x20);
      fVar10 = *(float *)(lVar18 + 0x10);
      *(float *)(in_R11 + 4 + unaff_R15 * 0x10) = fVar6;
      *(float *)(in_R11 + unaff_R15 * 0x10) = fVar22;
      lVar18 = *(longlong *)(unaff_RBX + 8 + unaff_R15 * 0x10);
      fVar11 = *(float *)(unaff_RBX + 4 + unaff_R15 * 0x10);
      fVar12 = *(float *)(lVar18 + 0x18);
      fVar13 = *(float *)(unaff_RBX + unaff_R15 * 0x10);
      fVar14 = *(float *)(lVar18 + 0x14);
      fVar24 = ((fVar6 * fVar7 + fVar22 * fVar10 + fVar8 * fVar9) -
               fVar13 * *(float *)(lVar18 + 0x1c)) - fVar11 * *(float *)(lVar18 + 0x20);
      fVar6 = *(float *)(lVar18 + 0x10);
      *(float *)(unaff_RBX + 4 + unaff_R15 * 0x10) = fVar13;
      *(float *)(unaff_RBX + unaff_R15 * 0x10) = fVar24;
      lVar18 = *(longlong *)(in_R10 + 8 + unaff_R15 * 0x10);
      fVar7 = *(float *)(in_R10 + unaff_R15 * 0x10);
      fVar8 = *(float *)(in_R10 + 4 + unaff_R15 * 0x10);
      fVar9 = *(float *)(lVar18 + 0x14);
      fVar10 = *(float *)(lVar18 + 0x18);
      fVar23 = (param_2[iVar17] - fVar7 * *(float *)(lVar18 + 0x1c)) -
               fVar8 * *(float *)(lVar18 + 0x20);
      fVar22 = *(float *)(lVar18 + 0x10);
      *(float *)(in_R10 + 4 + unaff_R15 * 0x10) = fVar7;
      *(float *)(in_R10 + unaff_R15 * 0x10) = fVar23;
      unaff_RDI[iVar17] =
           ((fVar21 * fVar5 + fVar1 * fVar4 + fVar2 * fVar3) * unaff_XMM10_Da -
           (fVar13 * fVar14 + fVar24 * fVar6 + fVar11 * fVar12) * unaff_XMM9_Da) +
           (fVar7 * fVar9 + fVar23 * fVar22 + fVar8 * fVar10) * unaff_XMM8_Da;
      lVar18 = *(longlong *)(in_stack_000000b8 + 8 + unaff_R15 * 0x10);
      fVar1 = *(float *)(in_stack_000000b8 + unaff_R15 * 0x10);
      fVar2 = *(float *)(in_stack_000000b8 + 4 + unaff_R15 * 0x10);
      fVar3 = *(float *)(lVar18 + 0x18);
      fVar4 = *(float *)(lVar18 + 0x14);
      fVar21 = (param_2[iVar16] - fVar1 * *(float *)(lVar18 + 0x1c)) -
               fVar2 * *(float *)(lVar18 + 0x20);
      fVar5 = *(float *)(lVar18 + 0x10);
      *(float *)(in_stack_000000b8 + unaff_R15 * 0x10) = fVar21;
      *(float *)(in_stack_000000b8 + 4 + unaff_R15 * 0x10) = fVar1;
      lVar18 = *(longlong *)(in_R11 + 8 + unaff_R15 * 0x10);
      fVar6 = *(float *)(in_R11 + unaff_R15 * 0x10);
      fVar7 = *(float *)(in_R11 + 4 + unaff_R15 * 0x10);
      fVar8 = *(float *)(lVar18 + 0x18);
      fVar9 = *(float *)(lVar18 + 0x14);
      fVar22 = (param_2[iVar16] - fVar6 * *(float *)(lVar18 + 0x1c)) -
               fVar7 * *(float *)(lVar18 + 0x20);
      fVar10 = *(float *)(lVar18 + 0x10);
      *(float *)(in_R11 + unaff_R15 * 0x10) = fVar22;
      *(float *)(in_R11 + 4 + unaff_R15 * 0x10) = fVar6;
      lVar18 = *(longlong *)(unaff_RBX + 8 + unaff_R15 * 0x10);
      fVar11 = *(float *)(unaff_RBX + 4 + unaff_R15 * 0x10);
      fVar12 = *(float *)(lVar18 + 0x18);
      fVar13 = *(float *)(unaff_RBX + unaff_R15 * 0x10);
      fVar14 = *(float *)(lVar18 + 0x14);
      fVar24 = ((fVar22 * fVar10 + fVar6 * fVar9 + fVar7 * fVar8) -
               fVar13 * *(float *)(lVar18 + 0x1c)) - fVar11 * *(float *)(lVar18 + 0x20);
      fVar6 = *(float *)(lVar18 + 0x10);
      *(float *)(unaff_RBX + unaff_R15 * 0x10) = fVar24;
      *(float *)(unaff_RBX + 4 + unaff_R15 * 0x10) = fVar13;
      lVar18 = *(longlong *)(in_R10 + 8 + unaff_R15 * 0x10);
      fVar7 = *(float *)(in_R10 + unaff_R15 * 0x10);
      fVar8 = *(float *)(in_R10 + 4 + unaff_R15 * 0x10);
      fVar9 = *(float *)(lVar18 + 0x18);
      fVar10 = *(float *)(lVar18 + 0x14);
      fVar23 = (param_2[iVar16] - fVar7 * *(float *)(lVar18 + 0x1c)) -
               fVar8 * *(float *)(lVar18 + 0x20);
      fVar22 = *(float *)(lVar18 + 0x10);
      *(float *)(in_R10 + 4 + unaff_R15 * 0x10) = fVar7;
      *(float *)(in_R10 + unaff_R15 * 0x10) = fVar23;
      unaff_RDI[iVar16] =
           ((fVar1 * fVar4 + fVar21 * fVar5 + fVar2 * fVar3) * unaff_XMM10_Da -
           (fVar24 * fVar6 + fVar13 * fVar14 + fVar11 * fVar12) * unaff_XMM9_Da) +
           (fVar23 * fVar22 + fVar7 * fVar10 + fVar8 * fVar9) * unaff_XMM8_Da;
      unaff_RDI = unaff_RDI + param_4 * 4;
      param_2 = param_2 + param_4 * 4;
      iVar19 = iVar19 + -1;
    } while (iVar19 != 0);
    unaff_R15 = (ulonglong)in_stack_000000b0;
  }
  param_3 = param_3 & 3;
  if (param_3 != 0) {
    lVar18 = (longlong)(int)unaff_R15;
    lVar20 = (longlong)unaff_RDI - (longlong)param_2;
    do {
      lVar15 = *(longlong *)(in_stack_000000b8 + 8 + lVar18 * 0x10);
      fVar1 = *(float *)(in_stack_000000b8 + lVar18 * 0x10);
      fVar2 = *(float *)(in_stack_000000b8 + 4 + lVar18 * 0x10);
      fVar3 = *(float *)(lVar15 + 0x18);
      fVar4 = *(float *)(lVar15 + 0x14);
      fVar21 = (*param_2 - fVar1 * *(float *)(lVar15 + 0x1c)) - fVar2 * *(float *)(lVar15 + 0x20);
      fVar5 = *(float *)(lVar15 + 0x10);
      *(float *)(in_stack_000000b8 + lVar18 * 0x10) = fVar21;
      *(float *)(in_stack_000000b8 + 4 + lVar18 * 0x10) = fVar1;
      lVar15 = *(longlong *)(in_R11 + 8 + lVar18 * 0x10);
      fVar6 = *(float *)(in_R11 + lVar18 * 0x10);
      fVar7 = *(float *)(in_R11 + 4 + lVar18 * 0x10);
      fVar8 = *(float *)(lVar15 + 0x18);
      fVar9 = *(float *)(lVar15 + 0x14);
      fVar22 = (*param_2 - fVar6 * *(float *)(lVar15 + 0x1c)) - fVar7 * *(float *)(lVar15 + 0x20);
      fVar10 = *(float *)(lVar15 + 0x10);
      *(float *)(in_R11 + lVar18 * 0x10) = fVar22;
      *(float *)(in_R11 + 4 + lVar18 * 0x10) = fVar6;
      lVar15 = *(longlong *)(unaff_RBX + 8 + lVar18 * 0x10);
      fVar11 = *(float *)(unaff_RBX + 4 + lVar18 * 0x10);
      fVar12 = *(float *)(lVar15 + 0x18);
      fVar13 = *(float *)(unaff_RBX + lVar18 * 0x10);
      fVar14 = *(float *)(lVar15 + 0x14);
      fVar24 = ((fVar22 * fVar10 + fVar6 * fVar9 + fVar7 * fVar8) -
               fVar13 * *(float *)(lVar15 + 0x1c)) - fVar11 * *(float *)(lVar15 + 0x20);
      fVar6 = *(float *)(lVar15 + 0x10);
      *(float *)(unaff_RBX + lVar18 * 0x10) = fVar24;
      *(float *)(unaff_RBX + 4 + lVar18 * 0x10) = fVar13;
      lVar15 = *(longlong *)(in_R10 + 8 + lVar18 * 0x10);
      fVar7 = *(float *)(in_R10 + lVar18 * 0x10);
      fVar8 = *(float *)(in_R10 + 4 + lVar18 * 0x10);
      fVar9 = *(float *)(lVar15 + 0x14);
      fVar10 = *(float *)(lVar15 + 0x18);
      fVar23 = (*param_2 - fVar7 * *(float *)(lVar15 + 0x1c)) - fVar8 * *(float *)(lVar15 + 0x20);
      fVar22 = *(float *)(lVar15 + 0x10);
      *(float *)(in_R10 + 4 + lVar18 * 0x10) = fVar7;
      *(float *)(in_R10 + lVar18 * 0x10) = fVar23;
      *(float *)(lVar20 + (longlong)param_2) =
           ((fVar21 * fVar5 + fVar1 * fVar4 + fVar2 * fVar3) * unaff_XMM10_Da -
           (fVar13 * fVar14 + fVar24 * fVar6 + fVar11 * fVar12) * unaff_XMM9_Da) +
           (fVar7 * fVar9 + fVar23 * fVar22 + fVar8 * fVar10) * unaff_XMM8_Da;
      param_2 = param_2 + param_4;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}






