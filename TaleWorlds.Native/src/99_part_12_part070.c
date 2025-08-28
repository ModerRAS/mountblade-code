#include "TaleWorlds.Native.Split.h"

// 99_part_12_part070.c - 3 个函数

// 函数: void FUN_1807fa79d(undefined8 param_1,float *param_2,uint param_3,longlong param_4)
void FUN_1807fa79d(undefined8 param_1,float *param_2,uint param_3,longlong param_4)

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
  int unaff_EBP;
  longlong unaff_RSI;
  float *unaff_RDI;
  longlong lVar19;
  longlong in_R10;
  longlong in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  int unaff_R14D;
  longlong unaff_R15;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  int in_stack_000000b0;
  
  *(undefined8 *)(in_RAX + 0x10) = unaff_R12;
  *(undefined8 *)(in_RAX + 0x18) = unaff_R13;
  iVar17 = (int)unaff_RSI * 2;
  iVar16 = (int)unaff_RSI * 3;
  do {
    lVar18 = *(longlong *)(param_4 + 8 + unaff_R15 * 0x10);
    fVar1 = *(float *)(param_4 + unaff_R15 * 0x10);
    fVar2 = *(float *)(param_4 + 4 + unaff_R15 * 0x10);
    fVar3 = *(float *)(lVar18 + 0x18);
    fVar4 = *(float *)(lVar18 + 0x14);
    fVar20 = (*param_2 - fVar1 * *(float *)(lVar18 + 0x1c)) - fVar2 * *(float *)(lVar18 + 0x20);
    fVar5 = *(float *)(lVar18 + 0x10);
    *(float *)(param_4 + 4 + unaff_R15 * 0x10) = fVar1;
    *(float *)(param_4 + unaff_R15 * 0x10) = fVar20;
    lVar18 = *(longlong *)(in_R11 + 8 + unaff_R15 * 0x10);
    fVar6 = *(float *)(in_R11 + unaff_R15 * 0x10);
    fVar7 = *(float *)(lVar18 + 0x14);
    fVar8 = *(float *)(in_R11 + 4 + unaff_R15 * 0x10);
    fVar9 = *(float *)(lVar18 + 0x18);
    fVar21 = (*param_2 - fVar6 * *(float *)(lVar18 + 0x1c)) - fVar8 * *(float *)(lVar18 + 0x20);
    fVar10 = *(float *)(lVar18 + 0x10);
    *(float *)(in_R11 + 4 + unaff_R15 * 0x10) = fVar6;
    *(float *)(in_R11 + unaff_R15 * 0x10) = fVar21;
    lVar18 = *(longlong *)(unaff_RBX + 8 + unaff_R15 * 0x10);
    fVar11 = *(float *)(unaff_RBX + 4 + unaff_R15 * 0x10);
    fVar12 = *(float *)(lVar18 + 0x18);
    fVar13 = *(float *)(unaff_RBX + unaff_R15 * 0x10);
    fVar14 = *(float *)(lVar18 + 0x14);
    fVar23 = ((fVar6 * fVar7 + fVar21 * fVar10 + fVar8 * fVar9) - fVar13 * *(float *)(lVar18 + 0x1c)
             ) - fVar11 * *(float *)(lVar18 + 0x20);
    fVar6 = *(float *)(lVar18 + 0x10);
    *(float *)(unaff_RBX + 4 + unaff_R15 * 0x10) = fVar13;
    *(float *)(unaff_RBX + unaff_R15 * 0x10) = fVar23;
    lVar18 = *(longlong *)(in_R10 + 8 + unaff_R15 * 0x10);
    fVar7 = *(float *)(in_R10 + unaff_R15 * 0x10);
    fVar8 = *(float *)(in_R10 + 4 + unaff_R15 * 0x10);
    fVar9 = *(float *)(lVar18 + 0x18);
    fVar10 = *(float *)(lVar18 + 0x14);
    fVar22 = (*param_2 - fVar7 * *(float *)(lVar18 + 0x1c)) - fVar8 * *(float *)(lVar18 + 0x20);
    fVar21 = *(float *)(lVar18 + 0x10);
    *(float *)(in_R10 + 4 + unaff_R15 * 0x10) = fVar7;
    *(float *)(in_R10 + unaff_R15 * 0x10) = fVar22;
    *unaff_RDI = ((fVar1 * fVar4 + fVar20 * fVar5 + fVar2 * fVar3) * unaff_XMM10_Da -
                 (fVar13 * fVar14 + fVar23 * fVar6 + fVar11 * fVar12) * unaff_XMM9_Da) +
                 (fVar22 * fVar21 + fVar7 * fVar10 + fVar8 * fVar9) * unaff_XMM8_Da;
    lVar18 = *(longlong *)(param_4 + 8 + unaff_R15 * 0x10);
    fVar1 = *(float *)(param_4 + unaff_R15 * 0x10);
    fVar2 = *(float *)(param_4 + 4 + unaff_R15 * 0x10);
    fVar3 = *(float *)(lVar18 + 0x18);
    fVar4 = *(float *)(lVar18 + 0x14);
    fVar20 = (param_2[unaff_RSI] - fVar1 * *(float *)(lVar18 + 0x1c)) -
             fVar2 * *(float *)(lVar18 + 0x20);
    fVar5 = *(float *)(lVar18 + 0x10);
    *(float *)(param_4 + 4 + unaff_R15 * 0x10) = fVar1;
    *(float *)(param_4 + unaff_R15 * 0x10) = fVar20;
    lVar18 = *(longlong *)(in_R11 + 8 + unaff_R15 * 0x10);
    fVar6 = *(float *)(in_R11 + unaff_R15 * 0x10);
    fVar7 = *(float *)(in_R11 + 4 + unaff_R15 * 0x10);
    fVar8 = *(float *)(lVar18 + 0x18);
    fVar9 = *(float *)(lVar18 + 0x14);
    fVar21 = (param_2[unaff_RSI] - fVar6 * *(float *)(lVar18 + 0x1c)) -
             fVar7 * *(float *)(lVar18 + 0x20);
    fVar10 = *(float *)(lVar18 + 0x10);
    *(float *)(in_R11 + 4 + unaff_R15 * 0x10) = fVar6;
    *(float *)(in_R11 + unaff_R15 * 0x10) = fVar21;
    lVar18 = *(longlong *)(unaff_RBX + 8 + unaff_R15 * 0x10);
    fVar11 = *(float *)(unaff_RBX + 4 + unaff_R15 * 0x10);
    fVar12 = *(float *)(lVar18 + 0x18);
    fVar13 = *(float *)(unaff_RBX + unaff_R15 * 0x10);
    fVar14 = *(float *)(lVar18 + 0x14);
    fVar23 = ((fVar21 * fVar10 + fVar6 * fVar9 + fVar7 * fVar8) - fVar13 * *(float *)(lVar18 + 0x1c)
             ) - fVar11 * *(float *)(lVar18 + 0x20);
    fVar6 = *(float *)(lVar18 + 0x10);
    *(float *)(unaff_RBX + 4 + unaff_R15 * 0x10) = fVar13;
    *(float *)(unaff_RBX + unaff_R15 * 0x10) = fVar23;
    lVar18 = *(longlong *)(in_R10 + 8 + unaff_R15 * 0x10);
    fVar7 = *(float *)(in_R10 + unaff_R15 * 0x10);
    fVar8 = *(float *)(in_R10 + 4 + unaff_R15 * 0x10);
    fVar9 = *(float *)(lVar18 + 0x18);
    fVar10 = *(float *)(lVar18 + 0x14);
    fVar22 = (param_2[unaff_RSI] - fVar7 * *(float *)(lVar18 + 0x1c)) -
             fVar8 * *(float *)(lVar18 + 0x20);
    fVar21 = *(float *)(lVar18 + 0x10);
    *(float *)(in_R10 + 4 + unaff_R15 * 0x10) = fVar7;
    *(float *)(in_R10 + unaff_R15 * 0x10) = fVar22;
    unaff_RDI[unaff_RSI] =
         ((fVar20 * fVar5 + fVar1 * fVar4 + fVar2 * fVar3) * unaff_XMM10_Da -
         (fVar23 * fVar6 + fVar13 * fVar14 + fVar11 * fVar12) * unaff_XMM9_Da) +
         (fVar22 * fVar21 + fVar7 * fVar10 + fVar8 * fVar9) * unaff_XMM8_Da;
    lVar18 = *(longlong *)(param_4 + 8 + unaff_R15 * 0x10);
    fVar1 = *(float *)(param_4 + unaff_R15 * 0x10);
    fVar2 = *(float *)(param_4 + 4 + unaff_R15 * 0x10);
    fVar3 = *(float *)(lVar18 + 0x18);
    fVar4 = *(float *)(lVar18 + 0x14);
    fVar20 = (param_2[iVar17] - fVar1 * *(float *)(lVar18 + 0x1c)) -
             fVar2 * *(float *)(lVar18 + 0x20);
    fVar5 = *(float *)(lVar18 + 0x10);
    *(float *)(param_4 + 4 + unaff_R15 * 0x10) = fVar1;
    *(float *)(param_4 + unaff_R15 * 0x10) = fVar20;
    lVar18 = *(longlong *)(in_R11 + 8 + unaff_R15 * 0x10);
    fVar6 = *(float *)(in_R11 + unaff_R15 * 0x10);
    fVar7 = *(float *)(lVar18 + 0x14);
    fVar8 = *(float *)(in_R11 + 4 + unaff_R15 * 0x10);
    fVar9 = *(float *)(lVar18 + 0x18);
    fVar21 = (param_2[iVar17] - fVar6 * *(float *)(lVar18 + 0x1c)) -
             fVar8 * *(float *)(lVar18 + 0x20);
    fVar10 = *(float *)(lVar18 + 0x10);
    *(float *)(in_R11 + 4 + unaff_R15 * 0x10) = fVar6;
    *(float *)(in_R11 + unaff_R15 * 0x10) = fVar21;
    lVar18 = *(longlong *)(unaff_RBX + 8 + unaff_R15 * 0x10);
    fVar11 = *(float *)(unaff_RBX + 4 + unaff_R15 * 0x10);
    fVar12 = *(float *)(lVar18 + 0x18);
    fVar13 = *(float *)(unaff_RBX + unaff_R15 * 0x10);
    fVar14 = *(float *)(lVar18 + 0x14);
    fVar23 = ((fVar6 * fVar7 + fVar21 * fVar10 + fVar8 * fVar9) - fVar13 * *(float *)(lVar18 + 0x1c)
             ) - fVar11 * *(float *)(lVar18 + 0x20);
    fVar6 = *(float *)(lVar18 + 0x10);
    *(float *)(unaff_RBX + 4 + unaff_R15 * 0x10) = fVar13;
    *(float *)(unaff_RBX + unaff_R15 * 0x10) = fVar23;
    lVar18 = *(longlong *)(in_R10 + 8 + unaff_R15 * 0x10);
    fVar7 = *(float *)(in_R10 + unaff_R15 * 0x10);
    fVar8 = *(float *)(in_R10 + 4 + unaff_R15 * 0x10);
    fVar9 = *(float *)(lVar18 + 0x14);
    fVar10 = *(float *)(lVar18 + 0x18);
    fVar22 = (param_2[iVar17] - fVar7 * *(float *)(lVar18 + 0x1c)) -
             fVar8 * *(float *)(lVar18 + 0x20);
    fVar21 = *(float *)(lVar18 + 0x10);
    *(float *)(in_R10 + 4 + unaff_R15 * 0x10) = fVar7;
    *(float *)(in_R10 + unaff_R15 * 0x10) = fVar22;
    unaff_RDI[iVar17] =
         ((fVar20 * fVar5 + fVar1 * fVar4 + fVar2 * fVar3) * unaff_XMM10_Da -
         (fVar13 * fVar14 + fVar23 * fVar6 + fVar11 * fVar12) * unaff_XMM9_Da) +
         (fVar7 * fVar9 + fVar22 * fVar21 + fVar8 * fVar10) * unaff_XMM8_Da;
    lVar18 = *(longlong *)(param_4 + 8 + unaff_R15 * 0x10);
    fVar1 = *(float *)(param_4 + unaff_R15 * 0x10);
    fVar2 = *(float *)(param_4 + 4 + unaff_R15 * 0x10);
    fVar3 = *(float *)(lVar18 + 0x18);
    fVar4 = *(float *)(lVar18 + 0x14);
    fVar20 = (param_2[iVar16] - fVar1 * *(float *)(lVar18 + 0x1c)) -
             fVar2 * *(float *)(lVar18 + 0x20);
    fVar5 = *(float *)(lVar18 + 0x10);
    *(float *)(param_4 + unaff_R15 * 0x10) = fVar20;
    *(float *)(param_4 + 4 + unaff_R15 * 0x10) = fVar1;
    lVar18 = *(longlong *)(in_R11 + 8 + unaff_R15 * 0x10);
    fVar6 = *(float *)(in_R11 + unaff_R15 * 0x10);
    fVar7 = *(float *)(in_R11 + 4 + unaff_R15 * 0x10);
    fVar8 = *(float *)(lVar18 + 0x18);
    fVar9 = *(float *)(lVar18 + 0x14);
    fVar21 = (param_2[iVar16] - fVar6 * *(float *)(lVar18 + 0x1c)) -
             fVar7 * *(float *)(lVar18 + 0x20);
    fVar10 = *(float *)(lVar18 + 0x10);
    *(float *)(in_R11 + unaff_R15 * 0x10) = fVar21;
    *(float *)(in_R11 + 4 + unaff_R15 * 0x10) = fVar6;
    lVar18 = *(longlong *)(unaff_RBX + 8 + unaff_R15 * 0x10);
    fVar11 = *(float *)(unaff_RBX + 4 + unaff_R15 * 0x10);
    fVar12 = *(float *)(lVar18 + 0x18);
    fVar13 = *(float *)(unaff_RBX + unaff_R15 * 0x10);
    fVar14 = *(float *)(lVar18 + 0x14);
    fVar23 = ((fVar21 * fVar10 + fVar6 * fVar9 + fVar7 * fVar8) - fVar13 * *(float *)(lVar18 + 0x1c)
             ) - fVar11 * *(float *)(lVar18 + 0x20);
    fVar6 = *(float *)(lVar18 + 0x10);
    *(float *)(unaff_RBX + unaff_R15 * 0x10) = fVar23;
    *(float *)(unaff_RBX + 4 + unaff_R15 * 0x10) = fVar13;
    lVar18 = *(longlong *)(in_R10 + 8 + unaff_R15 * 0x10);
    fVar7 = *(float *)(in_R10 + unaff_R15 * 0x10);
    fVar8 = *(float *)(in_R10 + 4 + unaff_R15 * 0x10);
    fVar9 = *(float *)(lVar18 + 0x18);
    fVar10 = *(float *)(lVar18 + 0x14);
    fVar22 = (param_2[iVar16] - fVar7 * *(float *)(lVar18 + 0x1c)) -
             fVar8 * *(float *)(lVar18 + 0x20);
    fVar21 = *(float *)(lVar18 + 0x10);
    *(float *)(in_R10 + 4 + unaff_R15 * 0x10) = fVar7;
    *(float *)(in_R10 + unaff_R15 * 0x10) = fVar22;
    unaff_RDI[iVar16] =
         ((fVar1 * fVar4 + fVar20 * fVar5 + fVar2 * fVar3) * unaff_XMM10_Da -
         (fVar23 * fVar6 + fVar13 * fVar14 + fVar11 * fVar12) * unaff_XMM9_Da) +
         (fVar22 * fVar21 + fVar7 * fVar10 + fVar8 * fVar9) * unaff_XMM8_Da;
    unaff_RDI = unaff_RDI + unaff_R14D;
    param_2 = param_2 + unaff_R14D;
    unaff_EBP = unaff_EBP + -1;
  } while (unaff_EBP != 0);
  param_3 = param_3 & 3;
  if (param_3 != 0) {
    lVar18 = (longlong)in_stack_000000b0;
    lVar19 = (longlong)unaff_RDI - (longlong)param_2;
    do {
      lVar15 = *(longlong *)(param_4 + 8 + lVar18 * 0x10);
      fVar1 = *(float *)(param_4 + lVar18 * 0x10);
      fVar2 = *(float *)(param_4 + 4 + lVar18 * 0x10);
      fVar3 = *(float *)(lVar15 + 0x18);
      fVar4 = *(float *)(lVar15 + 0x14);
      fVar20 = (*param_2 - fVar1 * *(float *)(lVar15 + 0x1c)) - fVar2 * *(float *)(lVar15 + 0x20);
      fVar5 = *(float *)(lVar15 + 0x10);
      *(float *)(param_4 + lVar18 * 0x10) = fVar20;
      *(float *)(param_4 + 4 + lVar18 * 0x10) = fVar1;
      lVar15 = *(longlong *)(in_R11 + 8 + lVar18 * 0x10);
      fVar6 = *(float *)(in_R11 + lVar18 * 0x10);
      fVar7 = *(float *)(in_R11 + 4 + lVar18 * 0x10);
      fVar8 = *(float *)(lVar15 + 0x18);
      fVar9 = *(float *)(lVar15 + 0x14);
      fVar21 = (*param_2 - fVar6 * *(float *)(lVar15 + 0x1c)) - fVar7 * *(float *)(lVar15 + 0x20);
      fVar10 = *(float *)(lVar15 + 0x10);
      *(float *)(in_R11 + lVar18 * 0x10) = fVar21;
      *(float *)(in_R11 + 4 + lVar18 * 0x10) = fVar6;
      lVar15 = *(longlong *)(unaff_RBX + 8 + lVar18 * 0x10);
      fVar11 = *(float *)(unaff_RBX + 4 + lVar18 * 0x10);
      fVar12 = *(float *)(lVar15 + 0x18);
      fVar13 = *(float *)(unaff_RBX + lVar18 * 0x10);
      fVar14 = *(float *)(lVar15 + 0x14);
      fVar23 = ((fVar21 * fVar10 + fVar6 * fVar9 + fVar7 * fVar8) -
               fVar13 * *(float *)(lVar15 + 0x1c)) - fVar11 * *(float *)(lVar15 + 0x20);
      fVar6 = *(float *)(lVar15 + 0x10);
      *(float *)(unaff_RBX + lVar18 * 0x10) = fVar23;
      *(float *)(unaff_RBX + 4 + lVar18 * 0x10) = fVar13;
      lVar15 = *(longlong *)(in_R10 + 8 + lVar18 * 0x10);
      fVar7 = *(float *)(in_R10 + lVar18 * 0x10);
      fVar8 = *(float *)(in_R10 + 4 + lVar18 * 0x10);
      fVar9 = *(float *)(lVar15 + 0x14);
      fVar10 = *(float *)(lVar15 + 0x18);
      fVar22 = (*param_2 - fVar7 * *(float *)(lVar15 + 0x1c)) - fVar8 * *(float *)(lVar15 + 0x20);
      fVar21 = *(float *)(lVar15 + 0x10);
      *(float *)(in_R10 + 4 + lVar18 * 0x10) = fVar7;
      *(float *)(in_R10 + lVar18 * 0x10) = fVar22;
      *(float *)(lVar19 + (longlong)param_2) =
           ((fVar20 * fVar5 + fVar1 * fVar4 + fVar2 * fVar3) * unaff_XMM10_Da -
           (fVar13 * fVar14 + fVar23 * fVar6 + fVar11 * fVar12) * unaff_XMM9_Da) +
           (fVar7 * fVar9 + fVar22 * fVar21 + fVar8 * fVar10) * unaff_XMM8_Da;
      param_2 = param_2 + unaff_RSI;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}






// 函数: void FUN_1807fadc7(undefined8 param_1,float *param_2,uint param_3,longlong param_4)
void FUN_1807fadc7(undefined8 param_1,float *param_2,uint param_3,longlong param_4)

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
  longlong lVar16;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar17;
  longlong in_R10;
  longlong in_R11;
  int unaff_R15D;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  
  param_3 = param_3 & 3;
  if (param_3 != 0) {
    lVar16 = (longlong)unaff_R15D;
    lVar17 = unaff_RDI - (longlong)param_2;
    do {
      lVar15 = *(longlong *)(param_4 + 8 + lVar16 * 0x10);
      fVar1 = *(float *)(param_4 + lVar16 * 0x10);
      fVar2 = *(float *)(param_4 + 4 + lVar16 * 0x10);
      fVar3 = *(float *)(lVar15 + 0x18);
      fVar4 = *(float *)(lVar15 + 0x14);
      fVar18 = (*param_2 - fVar1 * *(float *)(lVar15 + 0x1c)) - fVar2 * *(float *)(lVar15 + 0x20);
      fVar5 = *(float *)(lVar15 + 0x10);
      *(float *)(param_4 + lVar16 * 0x10) = fVar18;
      *(float *)(param_4 + 4 + lVar16 * 0x10) = fVar1;
      lVar15 = *(longlong *)(in_R11 + 8 + lVar16 * 0x10);
      fVar6 = *(float *)(in_R11 + lVar16 * 0x10);
      fVar7 = *(float *)(in_R11 + 4 + lVar16 * 0x10);
      fVar8 = *(float *)(lVar15 + 0x18);
      fVar9 = *(float *)(lVar15 + 0x14);
      fVar19 = (*param_2 - fVar6 * *(float *)(lVar15 + 0x1c)) - fVar7 * *(float *)(lVar15 + 0x20);
      fVar10 = *(float *)(lVar15 + 0x10);
      *(float *)(in_R11 + lVar16 * 0x10) = fVar19;
      *(float *)(in_R11 + 4 + lVar16 * 0x10) = fVar6;
      lVar15 = *(longlong *)(unaff_RBX + 8 + lVar16 * 0x10);
      fVar11 = *(float *)(unaff_RBX + 4 + lVar16 * 0x10);
      fVar12 = *(float *)(lVar15 + 0x18);
      fVar13 = *(float *)(unaff_RBX + lVar16 * 0x10);
      fVar14 = *(float *)(lVar15 + 0x14);
      fVar21 = ((fVar19 * fVar10 + fVar6 * fVar9 + fVar7 * fVar8) -
               fVar13 * *(float *)(lVar15 + 0x1c)) - fVar11 * *(float *)(lVar15 + 0x20);
      fVar6 = *(float *)(lVar15 + 0x10);
      *(float *)(unaff_RBX + lVar16 * 0x10) = fVar21;
      *(float *)(unaff_RBX + 4 + lVar16 * 0x10) = fVar13;
      lVar15 = *(longlong *)(in_R10 + 8 + lVar16 * 0x10);
      fVar7 = *(float *)(in_R10 + lVar16 * 0x10);
      fVar8 = *(float *)(in_R10 + 4 + lVar16 * 0x10);
      fVar9 = *(float *)(lVar15 + 0x14);
      fVar10 = *(float *)(lVar15 + 0x18);
      fVar20 = (*param_2 - fVar7 * *(float *)(lVar15 + 0x1c)) - fVar8 * *(float *)(lVar15 + 0x20);
      fVar19 = *(float *)(lVar15 + 0x10);
      *(float *)(in_R10 + 4 + lVar16 * 0x10) = fVar7;
      *(float *)(in_R10 + lVar16 * 0x10) = fVar20;
      *(float *)(lVar17 + (longlong)param_2) =
           ((fVar18 * fVar5 + fVar1 * fVar4 + fVar2 * fVar3) * unaff_XMM10_Da -
           (fVar13 * fVar14 + fVar21 * fVar6 + fVar11 * fVar12) * unaff_XMM9_Da) +
           (fVar7 * fVar9 + fVar20 * fVar19 + fVar8 * fVar10) * unaff_XMM8_Da;
      param_2 = param_2 + unaff_RSI;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}






// 函数: void FUN_1807fadde(undefined8 param_1,float *param_2,int param_3,longlong param_4)
void FUN_1807fadde(undefined8 param_1,float *param_2,int param_3,longlong param_4)

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
  longlong lVar16;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar17;
  longlong in_R10;
  longlong in_R11;
  int unaff_R15D;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  
  lVar16 = (longlong)unaff_R15D;
  lVar17 = unaff_RDI - (longlong)param_2;
  do {
    lVar15 = *(longlong *)(param_4 + 8 + lVar16 * 0x10);
    fVar1 = *(float *)(param_4 + lVar16 * 0x10);
    fVar2 = *(float *)(param_4 + 4 + lVar16 * 0x10);
    fVar3 = *(float *)(lVar15 + 0x18);
    fVar4 = *(float *)(lVar15 + 0x14);
    fVar18 = (*param_2 - fVar1 * *(float *)(lVar15 + 0x1c)) - fVar2 * *(float *)(lVar15 + 0x20);
    fVar5 = *(float *)(lVar15 + 0x10);
    *(float *)(param_4 + lVar16 * 0x10) = fVar18;
    *(float *)(param_4 + 4 + lVar16 * 0x10) = fVar1;
    lVar15 = *(longlong *)(in_R11 + 8 + lVar16 * 0x10);
    fVar6 = *(float *)(in_R11 + lVar16 * 0x10);
    fVar7 = *(float *)(in_R11 + 4 + lVar16 * 0x10);
    fVar8 = *(float *)(lVar15 + 0x18);
    fVar9 = *(float *)(lVar15 + 0x14);
    fVar19 = (*param_2 - fVar6 * *(float *)(lVar15 + 0x1c)) - fVar7 * *(float *)(lVar15 + 0x20);
    fVar10 = *(float *)(lVar15 + 0x10);
    *(float *)(in_R11 + lVar16 * 0x10) = fVar19;
    *(float *)(in_R11 + 4 + lVar16 * 0x10) = fVar6;
    lVar15 = *(longlong *)(unaff_RBX + 8 + lVar16 * 0x10);
    fVar11 = *(float *)(unaff_RBX + 4 + lVar16 * 0x10);
    fVar12 = *(float *)(lVar15 + 0x18);
    fVar13 = *(float *)(unaff_RBX + lVar16 * 0x10);
    fVar14 = *(float *)(lVar15 + 0x14);
    fVar21 = ((fVar19 * fVar10 + fVar6 * fVar9 + fVar7 * fVar8) - fVar13 * *(float *)(lVar15 + 0x1c)
             ) - fVar11 * *(float *)(lVar15 + 0x20);
    fVar6 = *(float *)(lVar15 + 0x10);
    *(float *)(unaff_RBX + lVar16 * 0x10) = fVar21;
    *(float *)(unaff_RBX + 4 + lVar16 * 0x10) = fVar13;
    lVar15 = *(longlong *)(in_R10 + 8 + lVar16 * 0x10);
    fVar7 = *(float *)(in_R10 + lVar16 * 0x10);
    fVar8 = *(float *)(in_R10 + 4 + lVar16 * 0x10);
    fVar9 = *(float *)(lVar15 + 0x14);
    fVar10 = *(float *)(lVar15 + 0x18);
    fVar20 = (*param_2 - fVar7 * *(float *)(lVar15 + 0x1c)) - fVar8 * *(float *)(lVar15 + 0x20);
    fVar19 = *(float *)(lVar15 + 0x10);
    *(float *)(in_R10 + 4 + lVar16 * 0x10) = fVar7;
    *(float *)(in_R10 + lVar16 * 0x10) = fVar20;
    *(float *)(lVar17 + (longlong)param_2) =
         ((fVar18 * fVar5 + fVar1 * fVar4 + fVar2 * fVar3) * unaff_XMM10_Da -
         (fVar13 * fVar14 + fVar21 * fVar6 + fVar11 * fVar12) * unaff_XMM9_Da) +
         (fVar7 * fVar9 + fVar20 * fVar19 + fVar8 * fVar10) * unaff_XMM8_Da;
    param_2 = param_2 + unaff_RSI;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}






