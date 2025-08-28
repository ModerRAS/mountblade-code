#include "TaleWorlds.Native.Split.h"

// 99_part_12_part071.c - 1 个函数

// 函数: void FUN_1807fafa0(float *param_1,float *param_2,uint param_3,int param_4,int param_5,
void FUN_1807fafa0(float *param_1,float *param_2,uint param_3,int param_4,int param_5,
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
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float *pfVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  lVar19 = (longlong)param_5;
  iVar22 = (int)param_3 >> 2;
  if (iVar22 != 0) {
    lVar18 = lVar19 + 0x20;
    iVar17 = param_4 * 2;
    iVar16 = param_4 * 3;
    do {
      lVar20 = *(longlong *)(param_6 + 8 + lVar19 * 0x10);
      fVar1 = *(float *)(param_6 + lVar19 * 0x10);
      fVar2 = *(float *)(param_6 + 4 + lVar19 * 0x10);
      fVar3 = *(float *)(lVar20 + 0x14);
      fVar29 = *(float *)(lVar20 + 0x18);
      fVar23 = (*param_2 - fVar1 * *(float *)(lVar20 + 0x1c)) - fVar2 * *(float *)(lVar20 + 0x20);
      fVar30 = *(float *)(lVar20 + 0x10);
      *(float *)(param_6 + 4 + lVar19 * 0x10) = fVar1;
      *(float *)(param_6 + lVar19 * 0x10) = fVar23;
      lVar20 = *(longlong *)(param_6 + 8 + lVar18 * 0x10);
      fVar4 = *(float *)(param_6 + 4 + lVar18 * 0x10);
      fVar5 = *(float *)(lVar20 + 0x18);
      fVar6 = *(float *)(param_6 + lVar18 * 0x10);
      fVar26 = *(float *)(lVar20 + 0x14);
      fVar27 = ((fVar1 * fVar3 + fVar23 * fVar30 + fVar2 * fVar29) -
               fVar6 * *(float *)(lVar20 + 0x1c)) - fVar4 * *(float *)(lVar20 + 0x20);
      fVar1 = *(float *)(lVar20 + 0x10);
      *(float *)(param_6 + lVar18 * 0x10) = fVar27;
      *(float *)(param_6 + 4 + lVar18 * 0x10) = fVar6;
      lVar20 = *(longlong *)(param_8 + 8 + lVar19 * 0x10);
      fVar2 = *(float *)(param_8 + lVar19 * 0x10);
      fVar3 = *(float *)(param_8 + 4 + lVar19 * 0x10);
      fVar29 = *(float *)(lVar20 + 0x14);
      fVar30 = *(float *)(lVar20 + 0x18);
      fVar24 = (*param_2 - fVar2 * *(float *)(lVar20 + 0x1c)) - fVar3 * *(float *)(lVar20 + 0x20);
      fVar23 = *(float *)(lVar20 + 0x10);
      *(float *)(param_8 + 4 + lVar19 * 0x10) = fVar2;
      *(float *)(param_8 + lVar19 * 0x10) = fVar24;
      lVar20 = *(longlong *)(param_8 + 8 + lVar18 * 0x10);
      fVar7 = *(float *)(param_8 + 4 + lVar18 * 0x10);
      fVar8 = *(float *)(lVar20 + 0x18);
      fVar9 = *(float *)(param_8 + lVar18 * 0x10);
      fVar10 = *(float *)(lVar20 + 0x14);
      fVar24 = ((fVar2 * fVar29 + fVar24 * fVar23 + fVar3 * fVar30) -
               fVar9 * *(float *)(lVar20 + 0x1c)) - fVar7 * *(float *)(lVar20 + 0x20);
      fVar2 = *(float *)(lVar20 + 0x10);
      *(float *)(param_8 + 4 + lVar18 * 0x10) = fVar9;
      *(float *)(param_8 + lVar18 * 0x10) = fVar24;
      lVar20 = *(longlong *)(param_7 + 8 + lVar19 * 0x10);
      fVar3 = *(float *)(param_7 + lVar19 * 0x10);
      fVar29 = *(float *)(param_7 + 4 + lVar19 * 0x10);
      fVar30 = *(float *)(lVar20 + 0x18);
      fVar23 = *(float *)(lVar20 + 0x14);
      fVar24 = ((fVar24 * fVar2 + fVar9 * fVar10 + fVar7 * fVar8) -
               fVar3 * *(float *)(lVar20 + 0x1c)) - fVar29 * *(float *)(lVar20 + 0x20);
      fVar2 = *(float *)(lVar20 + 0x10);
      *(float *)(param_7 + 4 + lVar19 * 0x10) = fVar3;
      *(float *)(param_7 + lVar19 * 0x10) = fVar24;
      lVar20 = *(longlong *)(param_7 + 8 + lVar18 * 0x10);
      fVar7 = *(float *)(param_7 + lVar18 * 0x10);
      fVar8 = *(float *)(lVar20 + 0x14);
      fVar9 = *(float *)(param_7 + 4 + lVar18 * 0x10);
      fVar10 = *(float *)(lVar20 + 0x18);
      fVar28 = ((fVar24 * fVar2 + fVar3 * fVar23 + fVar29 * fVar30) -
               fVar7 * *(float *)(lVar20 + 0x1c)) - fVar9 * *(float *)(lVar20 + 0x20);
      fVar2 = *(float *)(lVar20 + 0x10);
      *(float *)(param_7 + lVar18 * 0x10) = fVar28;
      *(float *)(param_7 + 4 + lVar18 * 0x10) = fVar7;
      lVar20 = *(longlong *)(param_9 + 8 + lVar19 * 0x10);
      fVar3 = *(float *)(param_9 + lVar19 * 0x10);
      fVar29 = *(float *)(param_9 + 4 + lVar19 * 0x10);
      fVar30 = *(float *)(lVar20 + 0x18);
      fVar23 = *(float *)(lVar20 + 0x14);
      fVar25 = (*param_2 - fVar3 * *(float *)(lVar20 + 0x1c)) - fVar29 * *(float *)(lVar20 + 0x20);
      fVar24 = *(float *)(lVar20 + 0x10);
      *(float *)(param_9 + lVar19 * 0x10) = fVar25;
      *(float *)(param_9 + 4 + lVar19 * 0x10) = fVar3;
      lVar20 = *(longlong *)(param_9 + 8 + lVar18 * 0x10);
      fVar11 = *(float *)(param_9 + lVar18 * 0x10);
      fVar12 = *(float *)(param_9 + 4 + lVar18 * 0x10);
      fVar13 = *(float *)(lVar20 + 0x18);
      fVar14 = *(float *)(lVar20 + 0x14);
      fVar29 = ((fVar3 * fVar23 + fVar25 * fVar24 + fVar29 * fVar30) -
               fVar11 * *(float *)(lVar20 + 0x1c)) - fVar12 * *(float *)(lVar20 + 0x20);
      fVar3 = *(float *)(lVar20 + 0x10);
      *(float *)(param_9 + 4 + lVar18 * 0x10) = fVar11;
      *(float *)(param_9 + lVar18 * 0x10) = fVar29;
      *param_1 = (fVar7 * fVar8 + fVar28 * fVar2 + fVar9 * fVar10) * param_11 +
                 (fVar6 * fVar26 + fVar27 * fVar1 + fVar4 * fVar5) * param_10 +
                 (fVar11 * fVar14 + fVar29 * fVar3 + fVar12 * fVar13) * param_12;
      lVar20 = *(longlong *)(param_6 + 8 + lVar19 * 0x10);
      fVar1 = *(float *)(param_6 + lVar19 * 0x10);
      fVar2 = *(float *)(param_6 + 4 + lVar19 * 0x10);
      fVar3 = *(float *)(lVar20 + 0x18);
      fVar23 = (param_2[param_4] - fVar1 * *(float *)(lVar20 + 0x1c)) -
               fVar2 * *(float *)(lVar20 + 0x20);
      fVar29 = *(float *)(lVar20 + 0x14);
      fVar30 = *(float *)(lVar20 + 0x10);
      *(float *)(param_6 + 4 + lVar19 * 0x10) = fVar1;
      *(float *)(param_6 + lVar19 * 0x10) = fVar23;
      lVar20 = *(longlong *)(param_6 + 8 + lVar18 * 0x10);
      fVar4 = *(float *)(param_6 + 4 + lVar18 * 0x10);
      fVar5 = *(float *)(lVar20 + 0x18);
      fVar6 = *(float *)(param_6 + lVar18 * 0x10);
      fVar26 = *(float *)(lVar20 + 0x14);
      fVar27 = ((fVar1 * fVar29 + fVar23 * fVar30 + fVar2 * fVar3) -
               fVar6 * *(float *)(lVar20 + 0x1c)) - fVar4 * *(float *)(lVar20 + 0x20);
      fVar1 = *(float *)(lVar20 + 0x10);
      *(float *)(param_6 + lVar18 * 0x10) = fVar27;
      *(float *)(param_6 + 4 + lVar18 * 0x10) = fVar6;
      lVar20 = *(longlong *)(param_8 + 8 + lVar19 * 0x10);
      fVar2 = *(float *)(param_8 + lVar19 * 0x10);
      fVar3 = *(float *)(param_8 + 4 + lVar19 * 0x10);
      fVar29 = *(float *)(lVar20 + 0x14);
      fVar30 = *(float *)(lVar20 + 0x18);
      fVar24 = (param_2[param_4] - fVar2 * *(float *)(lVar20 + 0x1c)) -
               fVar3 * *(float *)(lVar20 + 0x20);
      fVar23 = *(float *)(lVar20 + 0x10);
      *(float *)(param_8 + 4 + lVar19 * 0x10) = fVar2;
      *(float *)(param_8 + lVar19 * 0x10) = fVar24;
      lVar20 = *(longlong *)(param_8 + 8 + lVar18 * 0x10);
      fVar7 = *(float *)(param_8 + 4 + lVar18 * 0x10);
      fVar8 = *(float *)(lVar20 + 0x18);
      fVar9 = *(float *)(param_8 + lVar18 * 0x10);
      fVar10 = *(float *)(lVar20 + 0x14);
      fVar24 = ((fVar2 * fVar29 + fVar24 * fVar23 + fVar3 * fVar30) -
               fVar9 * *(float *)(lVar20 + 0x1c)) - fVar7 * *(float *)(lVar20 + 0x20);
      fVar2 = *(float *)(lVar20 + 0x10);
      *(float *)(param_8 + lVar18 * 0x10) = fVar24;
      *(float *)(param_8 + 4 + lVar18 * 0x10) = fVar9;
      lVar20 = *(longlong *)(param_7 + 8 + lVar19 * 0x10);
      fVar3 = *(float *)(param_7 + lVar19 * 0x10);
      fVar29 = *(float *)(lVar20 + 0x14);
      fVar30 = *(float *)(param_7 + 4 + lVar19 * 0x10);
      fVar23 = *(float *)(lVar20 + 0x18);
      fVar24 = ((fVar9 * fVar10 + fVar24 * fVar2 + fVar7 * fVar8) -
               fVar3 * *(float *)(lVar20 + 0x1c)) - fVar30 * *(float *)(lVar20 + 0x20);
      fVar2 = *(float *)(lVar20 + 0x10);
      *(float *)(param_7 + 4 + lVar19 * 0x10) = fVar3;
      *(float *)(param_7 + lVar19 * 0x10) = fVar24;
      lVar20 = *(longlong *)(param_7 + 8 + lVar18 * 0x10);
      fVar7 = *(float *)(param_7 + lVar18 * 0x10);
      fVar8 = *(float *)(param_7 + 4 + lVar18 * 0x10);
      fVar9 = *(float *)(lVar20 + 0x18);
      fVar10 = *(float *)(lVar20 + 0x14);
      fVar28 = ((fVar3 * fVar29 + fVar24 * fVar2 + fVar30 * fVar23) -
               fVar7 * *(float *)(lVar20 + 0x1c)) - fVar8 * *(float *)(lVar20 + 0x20);
      fVar2 = *(float *)(lVar20 + 0x10);
      *(float *)(param_7 + lVar18 * 0x10) = fVar28;
      *(float *)(param_7 + 4 + lVar18 * 0x10) = fVar7;
      lVar20 = *(longlong *)(param_9 + 8 + lVar19 * 0x10);
      fVar3 = *(float *)(param_9 + lVar19 * 0x10);
      fVar29 = *(float *)(param_9 + 4 + lVar19 * 0x10);
      fVar30 = *(float *)(lVar20 + 0x18);
      fVar23 = *(float *)(lVar20 + 0x14);
      fVar25 = (param_2[param_4] - fVar3 * *(float *)(lVar20 + 0x1c)) -
               fVar29 * *(float *)(lVar20 + 0x20);
      fVar24 = *(float *)(lVar20 + 0x10);
      *(float *)(param_9 + lVar19 * 0x10) = fVar25;
      *(float *)(param_9 + 4 + lVar19 * 0x10) = fVar3;
      lVar20 = *(longlong *)(param_9 + 8 + lVar18 * 0x10);
      fVar11 = *(float *)(param_9 + lVar18 * 0x10);
      fVar12 = *(float *)(param_9 + 4 + lVar18 * 0x10);
      fVar13 = *(float *)(lVar20 + 0x18);
      fVar14 = *(float *)(lVar20 + 0x14);
      fVar29 = ((fVar25 * fVar24 + fVar3 * fVar23 + fVar29 * fVar30) -
               fVar11 * *(float *)(lVar20 + 0x1c)) - fVar12 * *(float *)(lVar20 + 0x20);
      fVar3 = *(float *)(lVar20 + 0x10);
      *(float *)(param_9 + lVar18 * 0x10) = fVar29;
      *(float *)(param_9 + 4 + lVar18 * 0x10) = fVar11;
      param_1[param_4] =
           (fVar28 * fVar2 + fVar7 * fVar10 + fVar8 * fVar9) * param_11 +
           (fVar6 * fVar26 + fVar27 * fVar1 + fVar4 * fVar5) * param_10 +
           (fVar29 * fVar3 + fVar11 * fVar14 + fVar12 * fVar13) * param_12;
      lVar20 = *(longlong *)(param_6 + 8 + lVar19 * 0x10);
      fVar1 = *(float *)(param_6 + lVar19 * 0x10);
      fVar2 = *(float *)(param_6 + 4 + lVar19 * 0x10);
      fVar3 = *(float *)(lVar20 + 0x18);
      fVar29 = *(float *)(lVar20 + 0x14);
      fVar23 = (param_2[iVar17] - fVar1 * *(float *)(lVar20 + 0x1c)) -
               fVar2 * *(float *)(lVar20 + 0x20);
      fVar30 = *(float *)(lVar20 + 0x10);
      *(float *)(param_6 + 4 + lVar19 * 0x10) = fVar1;
      *(float *)(param_6 + lVar19 * 0x10) = fVar23;
      lVar20 = *(longlong *)(param_6 + 8 + lVar18 * 0x10);
      fVar4 = *(float *)(param_6 + lVar18 * 0x10);
      fVar5 = *(float *)(param_6 + 4 + lVar18 * 0x10);
      fVar6 = *(float *)(lVar20 + 0x18);
      fVar26 = *(float *)(lVar20 + 0x14);
      fVar27 = ((fVar23 * fVar30 + fVar1 * fVar29 + fVar2 * fVar3) -
               fVar4 * *(float *)(lVar20 + 0x1c)) - fVar5 * *(float *)(lVar20 + 0x20);
      fVar1 = *(float *)(lVar20 + 0x10);
      *(float *)(param_6 + lVar18 * 0x10) = fVar27;
      *(float *)(param_6 + 4 + lVar18 * 0x10) = fVar4;
      lVar20 = *(longlong *)(param_8 + 8 + lVar19 * 0x10);
      fVar2 = *(float *)(param_8 + lVar19 * 0x10);
      fVar3 = *(float *)(param_8 + 4 + lVar19 * 0x10);
      fVar29 = *(float *)(lVar20 + 0x18);
      fVar30 = *(float *)(lVar20 + 0x14);
      fVar24 = (param_2[iVar17] - fVar2 * *(float *)(lVar20 + 0x1c)) -
               fVar3 * *(float *)(lVar20 + 0x20);
      fVar23 = *(float *)(lVar20 + 0x10);
      *(float *)(param_8 + 4 + lVar19 * 0x10) = fVar2;
      *(float *)(param_8 + lVar19 * 0x10) = fVar24;
      lVar20 = *(longlong *)(param_8 + 8 + lVar18 * 0x10);
      fVar7 = *(float *)(param_8 + 4 + lVar18 * 0x10);
      fVar8 = *(float *)(lVar20 + 0x18);
      fVar9 = *(float *)(param_8 + lVar18 * 0x10);
      fVar10 = *(float *)(lVar20 + 0x14);
      fVar24 = ((fVar24 * fVar23 + fVar2 * fVar30 + fVar3 * fVar29) -
               fVar9 * *(float *)(lVar20 + 0x1c)) - fVar7 * *(float *)(lVar20 + 0x20);
      fVar2 = *(float *)(lVar20 + 0x10);
      *(float *)(param_8 + lVar18 * 0x10) = fVar24;
      *(float *)(param_8 + 4 + lVar18 * 0x10) = fVar9;
      lVar20 = *(longlong *)(param_7 + 8 + lVar19 * 0x10);
      fVar3 = *(float *)(param_7 + lVar19 * 0x10);
      fVar29 = *(float *)(param_7 + 4 + lVar19 * 0x10);
      fVar30 = *(float *)(lVar20 + 0x18);
      fVar23 = *(float *)(lVar20 + 0x14);
      fVar24 = ((fVar24 * fVar2 + fVar9 * fVar10 + fVar7 * fVar8) -
               fVar3 * *(float *)(lVar20 + 0x1c)) - fVar29 * *(float *)(lVar20 + 0x20);
      fVar2 = *(float *)(lVar20 + 0x10);
      *(float *)(param_7 + 4 + lVar19 * 0x10) = fVar3;
      *(float *)(param_7 + lVar19 * 0x10) = fVar24;
      lVar20 = *(longlong *)(param_7 + 8 + lVar18 * 0x10);
      fVar7 = *(float *)(param_7 + lVar18 * 0x10);
      fVar8 = *(float *)(param_7 + 4 + lVar18 * 0x10);
      fVar9 = *(float *)(lVar20 + 0x18);
      fVar10 = *(float *)(lVar20 + 0x14);
      fVar28 = ((fVar24 * fVar2 + fVar3 * fVar23 + fVar29 * fVar30) -
               fVar7 * *(float *)(lVar20 + 0x1c)) - fVar8 * *(float *)(lVar20 + 0x20);
      fVar2 = *(float *)(lVar20 + 0x10);
      *(float *)(param_7 + lVar18 * 0x10) = fVar28;
      *(float *)(param_7 + 4 + lVar18 * 0x10) = fVar7;
      lVar20 = *(longlong *)(param_9 + 8 + lVar19 * 0x10);
      fVar3 = *(float *)(param_9 + lVar19 * 0x10);
      fVar29 = *(float *)(param_9 + 4 + lVar19 * 0x10);
      fVar30 = *(float *)(lVar20 + 0x14);
      fVar23 = *(float *)(lVar20 + 0x18);
      fVar25 = (param_2[iVar17] - fVar3 * *(float *)(lVar20 + 0x1c)) -
               fVar29 * *(float *)(lVar20 + 0x20);
      fVar24 = *(float *)(lVar20 + 0x10);
      *(float *)(param_9 + lVar19 * 0x10) = fVar25;
      *(float *)(param_9 + 4 + lVar19 * 0x10) = fVar3;
      lVar20 = *(longlong *)(param_9 + 8 + lVar18 * 0x10);
      fVar11 = *(float *)(param_9 + lVar18 * 0x10);
      fVar12 = *(float *)(param_9 + 4 + lVar18 * 0x10);
      fVar13 = *(float *)(lVar20 + 0x18);
      fVar14 = *(float *)(lVar20 + 0x14);
      fVar29 = ((fVar3 * fVar30 + fVar25 * fVar24 + fVar29 * fVar23) -
               fVar11 * *(float *)(lVar20 + 0x1c)) - fVar12 * *(float *)(lVar20 + 0x20);
      fVar3 = *(float *)(lVar20 + 0x10);
      *(float *)(param_9 + lVar18 * 0x10) = fVar29;
      *(float *)(param_9 + 4 + lVar18 * 0x10) = fVar11;
      param_1[iVar17] =
           (fVar7 * fVar10 + fVar28 * fVar2 + fVar8 * fVar9) * param_11 +
           (fVar27 * fVar1 + fVar4 * fVar26 + fVar5 * fVar6) * param_10 +
           (fVar29 * fVar3 + fVar11 * fVar14 + fVar12 * fVar13) * param_12;
      lVar20 = *(longlong *)(param_6 + 8 + lVar19 * 0x10);
      fVar1 = *(float *)(param_6 + lVar19 * 0x10);
      fVar2 = *(float *)(param_6 + 4 + lVar19 * 0x10);
      fVar3 = *(float *)(lVar20 + 0x18);
      fVar29 = *(float *)(lVar20 + 0x14);
      fVar26 = (param_2[iVar16] - fVar1 * *(float *)(lVar20 + 0x1c)) -
               fVar2 * *(float *)(lVar20 + 0x20);
      fVar30 = *(float *)(lVar20 + 0x10);
      *(float *)(param_6 + 4 + lVar19 * 0x10) = fVar1;
      *(float *)(param_6 + lVar19 * 0x10) = fVar26;
      lVar20 = *(longlong *)(param_6 + 8 + lVar18 * 0x10);
      fVar4 = *(float *)(param_6 + 4 + lVar18 * 0x10);
      fVar5 = *(float *)(param_6 + lVar18 * 0x10);
      fVar6 = *(float *)(lVar20 + 0x18);
      fVar27 = ((fVar26 * fVar30 + fVar1 * fVar29 + fVar2 * fVar3) -
               fVar5 * *(float *)(lVar20 + 0x1c)) - fVar4 * *(float *)(lVar20 + 0x20);
      fVar1 = *(float *)(lVar20 + 0x14);
      fVar2 = *(float *)(lVar20 + 0x10);
      *(float *)(param_6 + lVar18 * 0x10) = fVar27;
      *(float *)(param_6 + 4 + lVar18 * 0x10) = fVar5;
      lVar20 = *(longlong *)(param_8 + 8 + lVar19 * 0x10);
      fVar3 = *(float *)(param_8 + lVar19 * 0x10);
      fVar29 = *(float *)(param_8 + 4 + lVar19 * 0x10);
      fVar30 = *(float *)(lVar20 + 0x14);
      fVar26 = *(float *)(lVar20 + 0x18);
      fVar24 = (param_2[iVar16] - fVar3 * *(float *)(lVar20 + 0x1c)) -
               fVar29 * *(float *)(lVar20 + 0x20);
      fVar23 = *(float *)(lVar20 + 0x10);
      *(float *)(param_8 + 4 + lVar19 * 0x10) = fVar3;
      *(float *)(param_8 + lVar19 * 0x10) = fVar24;
      lVar20 = *(longlong *)(param_8 + 8 + lVar18 * 0x10);
      fVar7 = *(float *)(param_8 + 4 + lVar18 * 0x10);
      fVar8 = *(float *)(lVar20 + 0x18);
      fVar9 = *(float *)(param_8 + lVar18 * 0x10);
      fVar10 = *(float *)(lVar20 + 0x14);
      fVar24 = ((fVar3 * fVar30 + fVar24 * fVar23 + fVar29 * fVar26) -
               fVar9 * *(float *)(lVar20 + 0x1c)) - fVar7 * *(float *)(lVar20 + 0x20);
      fVar3 = *(float *)(lVar20 + 0x10);
      *(float *)(param_8 + lVar18 * 0x10) = fVar24;
      *(float *)(param_8 + 4 + lVar18 * 0x10) = fVar9;
      lVar20 = *(longlong *)(param_7 + 8 + lVar19 * 0x10);
      fVar29 = *(float *)(param_7 + lVar19 * 0x10);
      fVar30 = *(float *)(lVar20 + 0x14);
      fVar26 = *(float *)(param_7 + 4 + lVar19 * 0x10);
      fVar23 = *(float *)(lVar20 + 0x18);
      fVar24 = ((fVar9 * fVar10 + fVar24 * fVar3 + fVar7 * fVar8) -
               fVar29 * *(float *)(lVar20 + 0x1c)) - fVar26 * *(float *)(lVar20 + 0x20);
      fVar3 = *(float *)(lVar20 + 0x10);
      *(float *)(param_7 + 4 + lVar19 * 0x10) = fVar29;
      *(float *)(param_7 + lVar19 * 0x10) = fVar24;
      lVar20 = *(longlong *)(param_7 + 8 + lVar18 * 0x10);
      fVar7 = *(float *)(param_7 + lVar18 * 0x10);
      fVar8 = *(float *)(lVar20 + 0x14);
      fVar9 = *(float *)(param_7 + 4 + lVar18 * 0x10);
      fVar10 = *(float *)(lVar20 + 0x18);
      fVar28 = ((fVar29 * fVar30 + fVar24 * fVar3 + fVar26 * fVar23) -
               fVar7 * *(float *)(lVar20 + 0x1c)) - fVar9 * *(float *)(lVar20 + 0x20);
      fVar3 = *(float *)(lVar20 + 0x10);
      *(float *)(param_7 + lVar18 * 0x10) = fVar28;
      *(float *)(param_7 + 4 + lVar18 * 0x10) = fVar7;
      lVar20 = *(longlong *)(param_9 + 8 + lVar19 * 0x10);
      pfVar21 = param_2 + iVar16;
      param_2 = param_2 + param_4 * 4;
      fVar29 = *(float *)(param_9 + lVar19 * 0x10);
      fVar30 = *(float *)(param_9 + 4 + lVar19 * 0x10);
      fVar26 = *(float *)(lVar20 + 0x14);
      fVar23 = *(float *)(lVar20 + 0x18);
      fVar25 = (*pfVar21 - fVar29 * *(float *)(lVar20 + 0x1c)) - fVar30 * *(float *)(lVar20 + 0x20);
      fVar24 = *(float *)(lVar20 + 0x10);
      *(float *)(param_9 + 4 + lVar19 * 0x10) = fVar29;
      *(float *)(param_9 + lVar19 * 0x10) = fVar25;
      lVar20 = *(longlong *)(param_9 + 8 + lVar18 * 0x10);
      fVar11 = *(float *)(param_9 + 4 + lVar18 * 0x10);
      fVar12 = *(float *)(lVar20 + 0x18);
      fVar13 = *(float *)(param_9 + lVar18 * 0x10);
      fVar14 = *(float *)(lVar20 + 0x14);
      fVar30 = ((fVar29 * fVar26 + fVar25 * fVar24 + fVar30 * fVar23) -
               fVar13 * *(float *)(lVar20 + 0x1c)) - fVar11 * *(float *)(lVar20 + 0x20);
      fVar29 = *(float *)(lVar20 + 0x10);
      *(float *)(param_9 + 4 + lVar18 * 0x10) = fVar13;
      *(float *)(param_9 + lVar18 * 0x10) = fVar30;
      param_1[iVar16] =
           (fVar7 * fVar8 + fVar28 * fVar3 + fVar9 * fVar10) * param_11 +
           (fVar5 * fVar1 + fVar27 * fVar2 + fVar4 * fVar6) * param_10 +
           (fVar13 * fVar14 + fVar30 * fVar29 + fVar11 * fVar12) * param_12;
      param_1 = param_1 + param_4 * 4;
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
  }
  param_3 = param_3 & 3;
  if (param_3 != 0) {
    lVar20 = lVar19 + 0x20;
    pfVar21 = (float *)(lVar20 * 0x10 + param_9);
    lVar18 = (longlong)param_1 - (longlong)param_2;
    do {
      lVar15 = *(longlong *)(param_6 + 8 + lVar19 * 0x10);
      fVar1 = *(float *)(param_6 + lVar19 * 0x10);
      fVar2 = *(float *)(param_6 + 4 + lVar19 * 0x10);
      fVar3 = *(float *)(lVar15 + 0x14);
      fVar29 = *(float *)(lVar15 + 0x18);
      fVar23 = (*param_2 - fVar1 * *(float *)(lVar15 + 0x1c)) - fVar2 * *(float *)(lVar15 + 0x20);
      fVar30 = *(float *)(lVar15 + 0x10);
      *(float *)(param_6 + 4 + lVar19 * 0x10) = fVar1;
      *(float *)(param_6 + lVar19 * 0x10) = fVar23;
      lVar15 = *(longlong *)(param_6 + 8 + lVar20 * 0x10);
      fVar4 = *(float *)(param_6 + 4 + lVar20 * 0x10);
      fVar5 = *(float *)(lVar15 + 0x18);
      fVar6 = *(float *)(param_6 + lVar20 * 0x10);
      fVar26 = *(float *)(lVar15 + 0x14);
      fVar27 = ((fVar1 * fVar3 + fVar23 * fVar30 + fVar2 * fVar29) -
               fVar6 * *(float *)(lVar15 + 0x1c)) - fVar4 * *(float *)(lVar15 + 0x20);
      fVar1 = *(float *)(lVar15 + 0x10);
      *(float *)(param_6 + lVar20 * 0x10) = fVar27;
      *(float *)(param_6 + 4 + lVar20 * 0x10) = fVar6;
      lVar15 = *(longlong *)(param_8 + 8 + lVar19 * 0x10);
      fVar2 = *(float *)(param_8 + lVar19 * 0x10);
      fVar3 = *(float *)(param_8 + 4 + lVar19 * 0x10);
      fVar29 = *(float *)(lVar15 + 0x18);
      fVar30 = *(float *)(lVar15 + 0x14);
      fVar24 = (*param_2 - fVar2 * *(float *)(lVar15 + 0x1c)) - fVar3 * *(float *)(lVar15 + 0x20);
      fVar23 = *(float *)(lVar15 + 0x10);
      *(float *)(param_8 + 4 + lVar19 * 0x10) = fVar2;
      *(float *)(param_8 + lVar19 * 0x10) = fVar24;
      lVar15 = *(longlong *)(param_8 + 8 + lVar20 * 0x10);
      fVar7 = *(float *)(param_8 + 4 + lVar20 * 0x10);
      fVar8 = *(float *)(lVar15 + 0x18);
      fVar9 = *(float *)(param_8 + lVar20 * 0x10);
      fVar10 = *(float *)(lVar15 + 0x14);
      fVar24 = ((fVar24 * fVar23 + fVar2 * fVar30 + fVar3 * fVar29) -
               fVar9 * *(float *)(lVar15 + 0x1c)) - fVar7 * *(float *)(lVar15 + 0x20);
      fVar2 = *(float *)(lVar15 + 0x10);
      *(float *)(param_8 + 4 + lVar20 * 0x10) = fVar9;
      *(float *)(param_8 + lVar20 * 0x10) = fVar24;
      lVar15 = *(longlong *)(param_7 + 8 + lVar19 * 0x10);
      fVar3 = *(float *)(param_7 + lVar19 * 0x10);
      fVar29 = *(float *)(param_7 + 4 + lVar19 * 0x10);
      fVar30 = *(float *)(lVar15 + 0x18);
      fVar23 = *(float *)(lVar15 + 0x14);
      fVar24 = ((fVar24 * fVar2 + fVar9 * fVar10 + fVar7 * fVar8) -
               fVar3 * *(float *)(lVar15 + 0x1c)) - fVar29 * *(float *)(lVar15 + 0x20);
      fVar2 = *(float *)(lVar15 + 0x10);
      *(float *)(param_7 + lVar19 * 0x10) = fVar24;
      *(float *)(param_7 + 4 + lVar19 * 0x10) = fVar3;
      lVar15 = *(longlong *)(param_7 + 8 + lVar20 * 0x10);
      fVar7 = *(float *)(param_7 + lVar20 * 0x10);
      fVar8 = *(float *)(param_7 + 4 + lVar20 * 0x10);
      fVar9 = *(float *)(lVar15 + 0x18);
      fVar10 = *(float *)(lVar15 + 0x14);
      fVar28 = ((fVar24 * fVar2 + fVar3 * fVar23 + fVar29 * fVar30) -
               fVar7 * *(float *)(lVar15 + 0x1c)) - fVar8 * *(float *)(lVar15 + 0x20);
      fVar2 = *(float *)(lVar15 + 0x10);
      *(float *)(param_7 + lVar20 * 0x10) = fVar28;
      *(float *)(param_7 + 4 + lVar20 * 0x10) = fVar7;
      lVar15 = *(longlong *)(param_9 + 8 + lVar19 * 0x10);
      fVar3 = *(float *)(param_9 + lVar19 * 0x10);
      fVar29 = *(float *)(param_9 + 4 + lVar19 * 0x10);
      fVar30 = *(float *)(lVar15 + 0x18);
      fVar23 = *(float *)(lVar15 + 0x14);
      fVar25 = (*param_2 - fVar3 * *(float *)(lVar15 + 0x1c)) - fVar29 * *(float *)(lVar15 + 0x20);
      fVar24 = *(float *)(lVar15 + 0x10);
      *(float *)(param_9 + 4 + lVar19 * 0x10) = fVar3;
      *(float *)(param_9 + lVar19 * 0x10) = fVar25;
      lVar15 = *(longlong *)(pfVar21 + 2);
      fVar11 = pfVar21[1];
      fVar12 = *(float *)(lVar15 + 0x18);
      fVar13 = *pfVar21;
      fVar14 = *(float *)(lVar15 + 0x14);
      fVar29 = ((fVar25 * fVar24 + fVar3 * fVar23 + fVar29 * fVar30) -
               fVar13 * *(float *)(lVar15 + 0x1c)) - fVar11 * *(float *)(lVar15 + 0x20);
      fVar3 = *(float *)(lVar15 + 0x10);
      pfVar21[1] = fVar13;
      *pfVar21 = fVar29;
      *(float *)((longlong)param_2 + lVar18) =
           (fVar28 * fVar2 + fVar7 * fVar10 + fVar8 * fVar9) * param_11 +
           (fVar27 * fVar1 + fVar6 * fVar26 + fVar4 * fVar5) * param_10 +
           (fVar29 * fVar3 + fVar13 * fVar14 + fVar11 * fVar12) * param_12;
      param_2 = param_2 + param_4;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}






