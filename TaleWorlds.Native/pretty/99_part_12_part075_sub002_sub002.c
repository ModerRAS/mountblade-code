#include "TaleWorlds.Native.Split.h"

// 99_part_12_part075_sub002_sub002.c - 1 个函数

// 函数: void FUN_1807fbef0(float *param_1,float *param_2,uint param_3,int param_4,int param_5,
void FUN_1807fbef0(float *param_1,float *param_2,uint param_3,int param_4,int param_5,
                  int64_t param_6,int64_t param_7,int64_t param_8,int64_t param_9,float param_10
                  ,float param_11,float param_12)

{
  int64_t lVar1;
  int64_t lVar2;
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
  int iVar18;
  int iVar19;
  int iVar20;
  int64_t lVar21;
  int64_t lVar22;
  int64_t lVar23;
  float *pfVar24;
  float *pfVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float *pfStackX_8;
  
  lVar21 = (int64_t)param_5;
  iVar20 = (int)param_3 >> 2;
  pfStackX_8 = param_1;
  if (iVar20 != 0) {
    iVar19 = param_4 * 2;
    lVar1 = lVar21 + 0x20;
    lVar2 = lVar21 + 0x40;
    lVar22 = lVar21 + 0x60;
    iVar18 = param_4 * 3;
    do {
      lVar23 = *(int64_t *)(param_6 + 8 + lVar21 * 0x10);
      fVar3 = *(float *)(param_6 + lVar21 * 0x10);
      fVar4 = *(float *)(param_6 + 4 + lVar21 * 0x10);
      fVar5 = *(float *)(lVar23 + 0x14);
      fVar32 = *(float *)(lVar23 + 0x18);
      fVar26 = (*param_2 - fVar3 * *(float *)(lVar23 + 0x1c)) - fVar4 * *(float *)(lVar23 + 0x20);
      fVar33 = *(float *)(lVar23 + 0x10);
      *(float *)(param_6 + 4 + lVar21 * 0x10) = fVar3;
      *(float *)(param_6 + lVar21 * 0x10) = fVar26;
      lVar23 = *(int64_t *)(param_6 + 8 + lVar1 * 0x10);
      fVar6 = *(float *)(param_6 + 4 + lVar1 * 0x10);
      fVar7 = *(float *)(lVar23 + 0x18);
      fVar8 = *(float *)(param_6 + lVar1 * 0x10);
      fVar29 = *(float *)(lVar23 + 0x14);
      fVar26 = ((fVar3 * fVar5 + fVar26 * fVar33 + fVar4 * fVar32) -
               fVar8 * *(float *)(lVar23 + 0x1c)) - fVar6 * *(float *)(lVar23 + 0x20);
      fVar3 = *(float *)(lVar23 + 0x10);
      *(float *)(param_6 + lVar1 * 0x10) = fVar26;
      *(float *)(param_6 + 4 + lVar1 * 0x10) = fVar8;
      lVar23 = *(int64_t *)(param_6 + 8 + lVar2 * 0x10);
      fVar4 = *(float *)(param_6 + lVar2 * 0x10);
      fVar5 = *(float *)(lVar23 + 0x14);
      fVar32 = *(float *)(param_6 + 4 + lVar2 * 0x10);
      fVar33 = *(float *)(lVar23 + 0x18);
      fVar26 = ((fVar8 * fVar29 + fVar26 * fVar3 + fVar6 * fVar7) -
               fVar4 * *(float *)(lVar23 + 0x1c)) - fVar32 * *(float *)(lVar23 + 0x20);
      fVar3 = *(float *)(lVar23 + 0x10);
      *(float *)(param_6 + 4 + lVar2 * 0x10) = fVar4;
      *(float *)(param_6 + lVar2 * 0x10) = fVar26;
      lVar23 = *(int64_t *)(param_6 + 8 + lVar22 * 0x10);
      fVar6 = *(float *)(param_6 + lVar22 * 0x10);
      fVar7 = *(float *)(lVar23 + 0x14);
      fVar8 = *(float *)(param_6 + 4 + lVar22 * 0x10);
      fVar29 = *(float *)(lVar23 + 0x18);
      fVar30 = ((fVar4 * fVar5 + fVar26 * fVar3 + fVar32 * fVar33) -
               fVar6 * *(float *)(lVar23 + 0x1c)) - fVar8 * *(float *)(lVar23 + 0x20);
      fVar3 = *(float *)(lVar23 + 0x10);
      *(float *)(param_6 + 4 + lVar22 * 0x10) = fVar6;
      *(float *)(param_6 + lVar22 * 0x10) = fVar30;
      lVar23 = *(int64_t *)(param_8 + 8 + lVar21 * 0x10);
      fVar4 = *(float *)(param_8 + lVar21 * 0x10);
      fVar5 = *(float *)(param_8 + 4 + lVar21 * 0x10);
      fVar32 = *(float *)(lVar23 + 0x14);
      fVar33 = *(float *)(lVar23 + 0x18);
      fVar27 = (*param_2 - fVar4 * *(float *)(lVar23 + 0x1c)) - fVar5 * *(float *)(lVar23 + 0x20);
      fVar26 = *(float *)(lVar23 + 0x10);
      *(float *)(param_8 + 4 + lVar21 * 0x10) = fVar4;
      *(float *)(param_8 + lVar21 * 0x10) = fVar27;
      lVar23 = *(int64_t *)(param_8 + 8 + lVar1 * 0x10);
      fVar9 = *(float *)(param_8 + 4 + lVar1 * 0x10);
      fVar10 = *(float *)(lVar23 + 0x18);
      fVar11 = *(float *)(param_8 + lVar1 * 0x10);
      fVar12 = *(float *)(lVar23 + 0x14);
      fVar27 = ((fVar27 * fVar26 + fVar4 * fVar32 + fVar5 * fVar33) -
               fVar11 * *(float *)(lVar23 + 0x1c)) - fVar9 * *(float *)(lVar23 + 0x20);
      fVar4 = *(float *)(lVar23 + 0x10);
      *(float *)(param_8 + lVar1 * 0x10) = fVar27;
      *(float *)(param_8 + 4 + lVar1 * 0x10) = fVar11;
      lVar23 = *(int64_t *)(param_8 + 8 + lVar2 * 0x10);
      fVar5 = *(float *)(param_8 + lVar2 * 0x10);
      fVar32 = *(float *)(param_8 + 4 + lVar2 * 0x10);
      fVar33 = *(float *)(lVar23 + 0x18);
      fVar26 = *(float *)(lVar23 + 0x14);
      fVar27 = ((fVar27 * fVar4 + fVar11 * fVar12 + fVar9 * fVar10) -
               fVar5 * *(float *)(lVar23 + 0x1c)) - fVar32 * *(float *)(lVar23 + 0x20);
      fVar4 = *(float *)(lVar23 + 0x10);
      *(float *)(param_8 + lVar2 * 0x10) = fVar27;
      *(float *)(param_8 + 4 + lVar2 * 0x10) = fVar5;
      lVar23 = *(int64_t *)(param_8 + 8 + lVar22 * 0x10);
      fVar9 = *(float *)(param_8 + lVar22 * 0x10);
      fVar10 = *(float *)(param_8 + 4 + lVar22 * 0x10);
      fVar11 = *(float *)(lVar23 + 0x18);
      fVar12 = *(float *)(lVar23 + 0x14);
      fVar27 = ((fVar27 * fVar4 + fVar5 * fVar26 + fVar32 * fVar33) -
               fVar9 * *(float *)(lVar23 + 0x1c)) - fVar10 * *(float *)(lVar23 + 0x20);
      fVar4 = *(float *)(lVar23 + 0x10);
      *(float *)(param_8 + lVar22 * 0x10) = fVar27;
      *(float *)(param_8 + 4 + lVar22 * 0x10) = fVar9;
      lVar23 = *(int64_t *)(param_7 + 8 + lVar21 * 0x10);
      fVar5 = *(float *)(param_7 + lVar21 * 0x10);
      fVar32 = *(float *)(lVar23 + 0x14);
      fVar33 = *(float *)(param_7 + 4 + lVar21 * 0x10);
      fVar26 = *(float *)(lVar23 + 0x18);
      fVar27 = ((fVar27 * fVar4 + fVar9 * fVar12 + fVar10 * fVar11) -
               fVar5 * *(float *)(lVar23 + 0x1c)) - fVar33 * *(float *)(lVar23 + 0x20);
      fVar4 = *(float *)(lVar23 + 0x10);
      *(float *)(param_7 + lVar21 * 0x10) = fVar27;
      *(float *)(param_7 + 4 + lVar21 * 0x10) = fVar5;
      lVar23 = *(int64_t *)(param_7 + 8 + lVar1 * 0x10);
      fVar9 = *(float *)(param_7 + lVar1 * 0x10);
      fVar10 = *(float *)(param_7 + 4 + lVar1 * 0x10);
      fVar11 = *(float *)(lVar23 + 0x18);
      fVar12 = *(float *)(lVar23 + 0x14);
      fVar27 = ((fVar5 * fVar32 + fVar27 * fVar4 + fVar33 * fVar26) -
               fVar9 * *(float *)(lVar23 + 0x1c)) - fVar10 * *(float *)(lVar23 + 0x20);
      fVar4 = *(float *)(lVar23 + 0x10);
      *(float *)(param_7 + lVar1 * 0x10) = fVar27;
      *(float *)(param_7 + 4 + lVar1 * 0x10) = fVar9;
      lVar23 = *(int64_t *)(param_7 + 8 + lVar2 * 0x10);
      fVar5 = *(float *)(param_7 + lVar2 * 0x10);
      fVar32 = *(float *)(lVar23 + 0x14);
      fVar33 = *(float *)(param_7 + 4 + lVar2 * 0x10);
      fVar26 = *(float *)(lVar23 + 0x18);
      fVar27 = ((fVar9 * fVar12 + fVar27 * fVar4 + fVar10 * fVar11) -
               fVar5 * *(float *)(lVar23 + 0x1c)) - fVar33 * *(float *)(lVar23 + 0x20);
      fVar4 = *(float *)(lVar23 + 0x10);
      *(float *)(param_7 + 4 + lVar2 * 0x10) = fVar5;
      *(float *)(param_7 + lVar2 * 0x10) = fVar27;
      lVar23 = *(int64_t *)(param_7 + 8 + lVar22 * 0x10);
      fVar9 = *(float *)(param_7 + lVar22 * 0x10);
      fVar10 = *(float *)(lVar23 + 0x14);
      fVar11 = *(float *)(param_7 + 4 + lVar22 * 0x10);
      fVar12 = *(float *)(lVar23 + 0x18);
      fVar31 = ((fVar5 * fVar32 + fVar27 * fVar4 + fVar33 * fVar26) -
               fVar9 * *(float *)(lVar23 + 0x1c)) - fVar11 * *(float *)(lVar23 + 0x20);
      fVar4 = *(float *)(lVar23 + 0x10);
      *(float *)(param_7 + lVar22 * 0x10) = fVar31;
      *(float *)(param_7 + 4 + lVar22 * 0x10) = fVar9;
      lVar23 = *(int64_t *)(param_9 + 8 + lVar21 * 0x10);
      fVar5 = *(float *)(param_9 + lVar21 * 0x10);
      fVar32 = *(float *)(param_9 + 4 + lVar21 * 0x10);
      fVar33 = *(float *)(lVar23 + 0x14);
      fVar26 = *(float *)(lVar23 + 0x18);
      fVar28 = (*param_2 - fVar5 * *(float *)(lVar23 + 0x1c)) - fVar32 * *(float *)(lVar23 + 0x20);
      fVar27 = *(float *)(lVar23 + 0x10);
      *(float *)(param_9 + 4 + lVar21 * 0x10) = fVar5;
      *(float *)(param_9 + lVar21 * 0x10) = fVar28;
      lVar23 = *(int64_t *)(param_9 + 8 + lVar1 * 0x10);
      fVar13 = *(float *)(param_9 + 4 + lVar1 * 0x10);
      fVar14 = *(float *)(param_9 + lVar1 * 0x10);
      fVar15 = *(float *)(lVar23 + 0x14);
      fVar16 = *(float *)(lVar23 + 0x18);
      fVar28 = ((fVar5 * fVar33 + fVar28 * fVar27 + fVar32 * fVar26) -
               fVar14 * *(float *)(lVar23 + 0x1c)) - fVar13 * *(float *)(lVar23 + 0x20);
      fVar5 = *(float *)(lVar23 + 0x10);
      *(float *)(param_9 + lVar1 * 0x10) = fVar28;
      *(float *)(param_9 + 4 + lVar1 * 0x10) = fVar14;
      lVar23 = *(int64_t *)(param_9 + 8 + lVar2 * 0x10);
      fVar32 = *(float *)(param_9 + lVar2 * 0x10);
      fVar33 = *(float *)(param_9 + 4 + lVar2 * 0x10);
      fVar26 = *(float *)(lVar23 + 0x18);
      fVar27 = *(float *)(lVar23 + 0x14);
      fVar28 = ((fVar14 * fVar15 + fVar28 * fVar5 + fVar13 * fVar16) -
               fVar32 * *(float *)(lVar23 + 0x1c)) - fVar33 * *(float *)(lVar23 + 0x20);
      fVar5 = *(float *)(lVar23 + 0x10);
      *(float *)(param_9 + 4 + lVar2 * 0x10) = fVar32;
      *(float *)(param_9 + lVar2 * 0x10) = fVar28;
      lVar23 = *(int64_t *)(param_9 + 8 + lVar22 * 0x10);
      fVar13 = *(float *)(param_9 + lVar22 * 0x10);
      fVar14 = *(float *)(param_9 + 4 + lVar22 * 0x10);
      fVar15 = *(float *)(lVar23 + 0x18);
      fVar16 = *(float *)(lVar23 + 0x14);
      fVar32 = ((fVar28 * fVar5 + fVar32 * fVar27 + fVar33 * fVar26) -
               fVar13 * *(float *)(lVar23 + 0x1c)) - fVar14 * *(float *)(lVar23 + 0x20);
      fVar5 = *(float *)(lVar23 + 0x10);
      *(float *)(param_9 + lVar22 * 0x10) = fVar32;
      *(float *)(param_9 + 4 + lVar22 * 0x10) = fVar13;
      *param_1 = (fVar9 * fVar10 + fVar31 * fVar4 + fVar11 * fVar12) * param_11 +
                 (fVar6 * fVar7 + fVar30 * fVar3 + fVar8 * fVar29) * param_10 +
                 (fVar32 * fVar5 + fVar13 * fVar16 + fVar14 * fVar15) * param_12;
      lVar23 = *(int64_t *)(param_6 + 8 + lVar21 * 0x10);
      fVar3 = *(float *)(param_6 + lVar21 * 0x10);
      fVar4 = *(float *)(param_6 + 4 + lVar21 * 0x10);
      fVar5 = *(float *)(lVar23 + 0x18);
      fVar32 = *(float *)(lVar23 + 0x14);
      fVar29 = (param_2[param_4] - fVar3 * *(float *)(lVar23 + 0x1c)) -
               fVar4 * *(float *)(lVar23 + 0x20);
      fVar33 = *(float *)(lVar23 + 0x10);
      *(float *)(param_6 + 4 + lVar21 * 0x10) = fVar3;
      *(float *)(param_6 + lVar21 * 0x10) = fVar29;
      lVar23 = *(int64_t *)(param_6 + 8 + lVar1 * 0x10);
      fVar6 = *(float *)(param_6 + 4 + lVar1 * 0x10);
      fVar7 = *(float *)(param_6 + lVar1 * 0x10);
      fVar8 = *(float *)(lVar23 + 0x18);
      fVar26 = ((fVar29 * fVar33 + fVar3 * fVar32 + fVar4 * fVar5) -
               fVar7 * *(float *)(lVar23 + 0x1c)) - fVar6 * *(float *)(lVar23 + 0x20);
      fVar3 = *(float *)(lVar23 + 0x14);
      fVar4 = *(float *)(lVar23 + 0x10);
      *(float *)(param_6 + lVar1 * 0x10) = fVar26;
      *(float *)(param_6 + 4 + lVar1 * 0x10) = fVar7;
      lVar23 = *(int64_t *)(param_6 + 8 + lVar2 * 0x10);
      fVar5 = *(float *)(param_6 + lVar2 * 0x10);
      fVar32 = *(float *)(lVar23 + 0x14);
      fVar33 = *(float *)(param_6 + 4 + lVar2 * 0x10);
      fVar29 = *(float *)(lVar23 + 0x18);
      fVar26 = ((fVar26 * fVar4 + fVar7 * fVar3 + fVar6 * fVar8) - fVar5 * *(float *)(lVar23 + 0x1c)
               ) - fVar33 * *(float *)(lVar23 + 0x20);
      fVar3 = *(float *)(lVar23 + 0x10);
      *(float *)(param_6 + lVar2 * 0x10) = fVar26;
      *(float *)(param_6 + 4 + lVar2 * 0x10) = fVar5;
      lVar23 = *(int64_t *)(param_6 + 8 + lVar22 * 0x10);
      fVar4 = *(float *)(param_6 + lVar22 * 0x10);
      fVar6 = *(float *)(lVar23 + 0x14);
      fVar7 = *(float *)(param_6 + 4 + lVar22 * 0x10);
      fVar8 = *(float *)(lVar23 + 0x18);
      fVar30 = ((fVar5 * fVar32 + fVar26 * fVar3 + fVar33 * fVar29) -
               fVar4 * *(float *)(lVar23 + 0x1c)) - fVar7 * *(float *)(lVar23 + 0x20);
      fVar3 = *(float *)(lVar23 + 0x10);
      *(float *)(param_6 + lVar22 * 0x10) = fVar30;
      *(float *)(param_6 + 4 + lVar22 * 0x10) = fVar4;
      lVar23 = *(int64_t *)(param_8 + 8 + lVar21 * 0x10);
      fVar5 = *(float *)(param_8 + lVar21 * 0x10);
      fVar32 = *(float *)(param_8 + 4 + lVar21 * 0x10);
      fVar33 = *(float *)(lVar23 + 0x14);
      fVar29 = *(float *)(lVar23 + 0x18);
      fVar27 = (param_2[param_4] - fVar5 * *(float *)(lVar23 + 0x1c)) -
               fVar32 * *(float *)(lVar23 + 0x20);
      fVar26 = *(float *)(lVar23 + 0x10);
      *(float *)(param_8 + 4 + lVar21 * 0x10) = fVar5;
      *(float *)(param_8 + lVar21 * 0x10) = fVar27;
      lVar23 = *(int64_t *)(param_8 + 8 + lVar1 * 0x10);
      fVar9 = *(float *)(param_8 + 4 + lVar1 * 0x10);
      fVar10 = *(float *)(lVar23 + 0x18);
      fVar11 = *(float *)(param_8 + lVar1 * 0x10);
      fVar12 = *(float *)(lVar23 + 0x14);
      fVar27 = ((fVar5 * fVar33 + fVar27 * fVar26 + fVar32 * fVar29) -
               fVar11 * *(float *)(lVar23 + 0x1c)) - fVar9 * *(float *)(lVar23 + 0x20);
      fVar5 = *(float *)(lVar23 + 0x10);
      *(float *)(param_8 + lVar1 * 0x10) = fVar27;
      *(float *)(param_8 + 4 + lVar1 * 0x10) = fVar11;
      lVar23 = *(int64_t *)(param_8 + 8 + lVar2 * 0x10);
      fVar32 = *(float *)(param_8 + lVar2 * 0x10);
      fVar33 = *(float *)(param_8 + 4 + lVar2 * 0x10);
      fVar29 = *(float *)(lVar23 + 0x14);
      fVar26 = *(float *)(lVar23 + 0x18);
      fVar27 = ((fVar11 * fVar12 + fVar27 * fVar5 + fVar9 * fVar10) -
               fVar32 * *(float *)(lVar23 + 0x1c)) - fVar33 * *(float *)(lVar23 + 0x20);
      fVar5 = *(float *)(lVar23 + 0x10);
      *(float *)(param_8 + lVar2 * 0x10) = fVar27;
      *(float *)(param_8 + 4 + lVar2 * 0x10) = fVar32;
      lVar23 = *(int64_t *)(param_8 + 8 + lVar22 * 0x10);
      fVar9 = *(float *)(param_8 + lVar22 * 0x10);
      fVar10 = *(float *)(lVar23 + 0x14);
      fVar11 = *(float *)(param_8 + 4 + lVar22 * 0x10);
      fVar12 = *(float *)(lVar23 + 0x18);
      fVar27 = ((fVar32 * fVar29 + fVar27 * fVar5 + fVar33 * fVar26) -
               fVar9 * *(float *)(lVar23 + 0x1c)) - fVar11 * *(float *)(lVar23 + 0x20);
      fVar5 = *(float *)(lVar23 + 0x10);
      *(float *)(param_8 + lVar22 * 0x10) = fVar27;
      *(float *)(param_8 + 4 + lVar22 * 0x10) = fVar9;
      lVar23 = *(int64_t *)(param_7 + 8 + lVar21 * 0x10);
      fVar32 = *(float *)(param_7 + lVar21 * 0x10);
      fVar33 = *(float *)(param_7 + 4 + lVar21 * 0x10);
      fVar29 = *(float *)(lVar23 + 0x18);
      fVar26 = *(float *)(lVar23 + 0x14);
      fVar27 = ((fVar9 * fVar10 + fVar27 * fVar5 + fVar11 * fVar12) -
               fVar32 * *(float *)(lVar23 + 0x1c)) - fVar33 * *(float *)(lVar23 + 0x20);
      fVar5 = *(float *)(lVar23 + 0x10);
      *(float *)(param_7 + lVar21 * 0x10) = fVar27;
      *(float *)(param_7 + 4 + lVar21 * 0x10) = fVar32;
      lVar23 = *(int64_t *)(param_7 + 8 + lVar1 * 0x10);
      fVar9 = *(float *)(param_7 + lVar1 * 0x10);
      fVar10 = *(float *)(param_7 + 4 + lVar1 * 0x10);
      fVar11 = *(float *)(lVar23 + 0x18);
      fVar12 = *(float *)(lVar23 + 0x14);
      fVar27 = ((fVar27 * fVar5 + fVar32 * fVar26 + fVar33 * fVar29) -
               fVar9 * *(float *)(lVar23 + 0x1c)) - fVar10 * *(float *)(lVar23 + 0x20);
      fVar5 = *(float *)(lVar23 + 0x10);
      *(float *)(param_7 + 4 + lVar1 * 0x10) = fVar9;
      *(float *)(param_7 + lVar1 * 0x10) = fVar27;
      lVar23 = *(int64_t *)(param_7 + 8 + lVar2 * 0x10);
      fVar32 = *(float *)(param_7 + lVar2 * 0x10);
      fVar33 = *(float *)(param_7 + 4 + lVar2 * 0x10);
      fVar29 = *(float *)(lVar23 + 0x18);
      fVar26 = *(float *)(lVar23 + 0x14);
      fVar27 = ((fVar27 * fVar5 + fVar9 * fVar12 + fVar10 * fVar11) -
               fVar32 * *(float *)(lVar23 + 0x1c)) - fVar33 * *(float *)(lVar23 + 0x20);
      fVar5 = *(float *)(lVar23 + 0x10);
      *(float *)(param_7 + lVar2 * 0x10) = fVar27;
      *(float *)(param_7 + 4 + lVar2 * 0x10) = fVar32;
      lVar23 = *(int64_t *)(param_7 + 8 + lVar22 * 0x10);
      fVar9 = *(float *)(param_7 + lVar22 * 0x10);
      fVar10 = *(float *)(param_7 + 4 + lVar22 * 0x10);
      fVar11 = *(float *)(lVar23 + 0x18);
      fVar12 = *(float *)(lVar23 + 0x14);
      fVar31 = ((fVar27 * fVar5 + fVar32 * fVar26 + fVar33 * fVar29) -
               fVar9 * *(float *)(lVar23 + 0x1c)) - fVar10 * *(float *)(lVar23 + 0x20);
      fVar5 = *(float *)(lVar23 + 0x10);
      *(float *)(param_7 + lVar22 * 0x10) = fVar31;
      *(float *)(param_7 + 4 + lVar22 * 0x10) = fVar9;
      lVar23 = *(int64_t *)(param_9 + 8 + lVar21 * 0x10);
      fVar32 = *(float *)(param_9 + lVar21 * 0x10);
      fVar33 = *(float *)(param_9 + 4 + lVar21 * 0x10);
      fVar29 = *(float *)(lVar23 + 0x18);
      fVar26 = *(float *)(lVar23 + 0x14);
      fVar28 = (param_2[param_4] - fVar32 * *(float *)(lVar23 + 0x1c)) -
               fVar33 * *(float *)(lVar23 + 0x20);
      fVar27 = *(float *)(lVar23 + 0x10);
      *(float *)(param_9 + 4 + lVar21 * 0x10) = fVar32;
      *(float *)(param_9 + lVar21 * 0x10) = fVar28;
      lVar23 = *(int64_t *)(param_9 + 8 + lVar1 * 0x10);
      fVar13 = *(float *)(param_9 + 4 + lVar1 * 0x10);
      fVar14 = *(float *)(lVar23 + 0x18);
      fVar15 = *(float *)(param_9 + lVar1 * 0x10);
      fVar16 = *(float *)(lVar23 + 0x14);
      fVar28 = ((fVar28 * fVar27 + fVar32 * fVar26 + fVar33 * fVar29) -
               fVar15 * *(float *)(lVar23 + 0x1c)) - fVar13 * *(float *)(lVar23 + 0x20);
      fVar32 = *(float *)(lVar23 + 0x10);
      *(float *)(param_9 + lVar1 * 0x10) = fVar28;
      *(float *)(param_9 + 4 + lVar1 * 0x10) = fVar15;
      lVar23 = *(int64_t *)(param_9 + 8 + lVar2 * 0x10);
      fVar33 = *(float *)(param_9 + lVar2 * 0x10);
      fVar29 = *(float *)(param_9 + 4 + lVar2 * 0x10);
      fVar26 = *(float *)(lVar23 + 0x18);
      fVar27 = *(float *)(lVar23 + 0x14);
      fVar28 = ((fVar28 * fVar32 + fVar15 * fVar16 + fVar13 * fVar14) -
               fVar33 * *(float *)(lVar23 + 0x1c)) - fVar29 * *(float *)(lVar23 + 0x20);
      fVar32 = *(float *)(lVar23 + 0x10);
      *(float *)(param_9 + lVar2 * 0x10) = fVar28;
      *(float *)(param_9 + 4 + lVar2 * 0x10) = fVar33;
      lVar23 = *(int64_t *)(param_9 + 8 + lVar22 * 0x10);
      fVar13 = *(float *)(param_9 + lVar22 * 0x10);
      fVar14 = *(float *)(param_9 + 4 + lVar22 * 0x10);
      fVar15 = *(float *)(lVar23 + 0x18);
      fVar16 = *(float *)(lVar23 + 0x14);
      fVar33 = ((fVar28 * fVar32 + fVar33 * fVar27 + fVar29 * fVar26) -
               fVar13 * *(float *)(lVar23 + 0x1c)) - fVar14 * *(float *)(lVar23 + 0x20);
      fVar32 = *(float *)(lVar23 + 0x10);
      *(float *)(param_9 + lVar22 * 0x10) = fVar33;
      *(float *)(param_9 + 4 + lVar22 * 0x10) = fVar13;
      param_1[param_4] =
           (fVar31 * fVar5 + fVar9 * fVar12 + fVar10 * fVar11) * param_11 +
           (fVar4 * fVar6 + fVar30 * fVar3 + fVar7 * fVar8) * param_10 +
           (fVar33 * fVar32 + fVar13 * fVar16 + fVar14 * fVar15) * param_12;
      lVar23 = *(int64_t *)(param_6 + 8 + lVar21 * 0x10);
      fVar3 = *(float *)(param_6 + lVar21 * 0x10);
      fVar4 = *(float *)(param_6 + 4 + lVar21 * 0x10);
      fVar5 = *(float *)(lVar23 + 0x14);
      fVar32 = *(float *)(lVar23 + 0x18);
      fVar26 = (param_2[iVar19] - fVar3 * *(float *)(lVar23 + 0x1c)) -
               fVar4 * *(float *)(lVar23 + 0x20);
      fVar33 = *(float *)(lVar23 + 0x10);
      *(float *)(param_6 + 4 + lVar21 * 0x10) = fVar3;
      *(float *)(param_6 + lVar21 * 0x10) = fVar26;
      lVar23 = *(int64_t *)(param_6 + 8 + lVar1 * 0x10);
      fVar6 = *(float *)(param_6 + 4 + lVar1 * 0x10);
      fVar7 = *(float *)(lVar23 + 0x18);
      fVar8 = *(float *)(param_6 + lVar1 * 0x10);
      fVar29 = *(float *)(lVar23 + 0x14);
      fVar26 = ((fVar3 * fVar5 + fVar26 * fVar33 + fVar4 * fVar32) -
               fVar8 * *(float *)(lVar23 + 0x1c)) - fVar6 * *(float *)(lVar23 + 0x20);
      fVar3 = *(float *)(lVar23 + 0x10);
      *(float *)(param_6 + lVar1 * 0x10) = fVar26;
      *(float *)(param_6 + 4 + lVar1 * 0x10) = fVar8;
      lVar23 = *(int64_t *)(param_6 + 8 + lVar2 * 0x10);
      fVar4 = *(float *)(param_6 + lVar2 * 0x10);
      fVar5 = *(float *)(lVar23 + 0x14);
      fVar32 = *(float *)(param_6 + 4 + lVar2 * 0x10);
      fVar33 = *(float *)(lVar23 + 0x18);
      fVar26 = ((fVar8 * fVar29 + fVar26 * fVar3 + fVar6 * fVar7) -
               fVar4 * *(float *)(lVar23 + 0x1c)) - fVar32 * *(float *)(lVar23 + 0x20);
      fVar3 = *(float *)(lVar23 + 0x10);
      *(float *)(param_6 + 4 + lVar2 * 0x10) = fVar4;
      *(float *)(param_6 + lVar2 * 0x10) = fVar26;
      lVar23 = *(int64_t *)(param_6 + 8 + lVar22 * 0x10);
      fVar6 = *(float *)(param_6 + lVar22 * 0x10);
      fVar7 = *(float *)(param_6 + 4 + lVar22 * 0x10);
      fVar8 = *(float *)(lVar23 + 0x18);
      fVar29 = *(float *)(lVar23 + 0x14);
      fVar30 = ((fVar4 * fVar5 + fVar26 * fVar3 + fVar32 * fVar33) -
               fVar6 * *(float *)(lVar23 + 0x1c)) - fVar7 * *(float *)(lVar23 + 0x20);
      fVar3 = *(float *)(lVar23 + 0x10);
      *(float *)(param_6 + lVar22 * 0x10) = fVar30;
      *(float *)(param_6 + 4 + lVar22 * 0x10) = fVar6;
      lVar23 = *(int64_t *)(param_8 + 8 + lVar21 * 0x10);
      fVar4 = *(float *)(param_8 + lVar21 * 0x10);
      fVar5 = *(float *)(param_8 + 4 + lVar21 * 0x10);
      fVar32 = *(float *)(lVar23 + 0x14);
      fVar33 = *(float *)(lVar23 + 0x18);
      fVar27 = (param_2[iVar19] - fVar4 * *(float *)(lVar23 + 0x1c)) -
               fVar5 * *(float *)(lVar23 + 0x20);
      fVar26 = *(float *)(lVar23 + 0x10);
      *(float *)(param_8 + 4 + lVar21 * 0x10) = fVar4;
      *(float *)(param_8 + lVar21 * 0x10) = fVar27;
      lVar23 = *(int64_t *)(param_8 + 8 + lVar1 * 0x10);
      fVar9 = *(float *)(param_8 + 4 + lVar1 * 0x10);
      fVar10 = *(float *)(lVar23 + 0x18);
      fVar11 = *(float *)(param_8 + lVar1 * 0x10);
      fVar12 = *(float *)(lVar23 + 0x14);
      fVar27 = ((fVar4 * fVar32 + fVar27 * fVar26 + fVar5 * fVar33) -
               fVar11 * *(float *)(lVar23 + 0x1c)) - fVar9 * *(float *)(lVar23 + 0x20);
      fVar4 = *(float *)(lVar23 + 0x10);
      *(float *)(param_8 + lVar1 * 0x10) = fVar27;
      *(float *)(param_8 + 4 + lVar1 * 0x10) = fVar11;
      lVar23 = *(int64_t *)(param_8 + 8 + lVar2 * 0x10);
      fVar5 = *(float *)(param_8 + lVar2 * 0x10);
      fVar32 = *(float *)(lVar23 + 0x14);
      fVar33 = *(float *)(param_8 + 4 + lVar2 * 0x10);
      fVar26 = *(float *)(lVar23 + 0x18);
      fVar27 = ((fVar11 * fVar12 + fVar27 * fVar4 + fVar9 * fVar10) -
               fVar5 * *(float *)(lVar23 + 0x1c)) - fVar33 * *(float *)(lVar23 + 0x20);
      fVar4 = *(float *)(lVar23 + 0x10);
      *(float *)(param_8 + 4 + lVar2 * 0x10) = fVar5;
      *(float *)(param_8 + lVar2 * 0x10) = fVar27;
      lVar23 = *(int64_t *)(param_8 + 8 + lVar22 * 0x10);
      fVar9 = *(float *)(param_8 + lVar22 * 0x10);
      fVar10 = *(float *)(param_8 + 4 + lVar22 * 0x10);
      fVar11 = *(float *)(lVar23 + 0x14);
      fVar12 = *(float *)(lVar23 + 0x18);
      fVar27 = ((fVar5 * fVar32 + fVar27 * fVar4 + fVar33 * fVar26) -
               fVar9 * *(float *)(lVar23 + 0x1c)) - fVar10 * *(float *)(lVar23 + 0x20);
      fVar4 = *(float *)(lVar23 + 0x10);
      *(float *)(param_8 + lVar22 * 0x10) = fVar27;
      *(float *)(param_8 + 4 + lVar22 * 0x10) = fVar9;
      lVar23 = *(int64_t *)(param_7 + 8 + lVar21 * 0x10);
      fVar5 = *(float *)(param_7 + lVar21 * 0x10);
      fVar32 = *(float *)(lVar23 + 0x14);
      fVar33 = *(float *)(param_7 + 4 + lVar21 * 0x10);
      fVar26 = *(float *)(lVar23 + 0x18);
      fVar27 = ((fVar9 * fVar11 + fVar27 * fVar4 + fVar10 * fVar12) -
               fVar5 * *(float *)(lVar23 + 0x1c)) - fVar33 * *(float *)(lVar23 + 0x20);
      fVar4 = *(float *)(lVar23 + 0x10);
      *(float *)(param_7 + lVar21 * 0x10) = fVar27;
      *(float *)(param_7 + 4 + lVar21 * 0x10) = fVar5;
      lVar23 = *(int64_t *)(param_7 + 8 + lVar1 * 0x10);
      fVar9 = *(float *)(param_7 + lVar1 * 0x10);
      fVar10 = *(float *)(lVar23 + 0x14);
      fVar11 = *(float *)(param_7 + 4 + lVar1 * 0x10);
      fVar12 = *(float *)(lVar23 + 0x18);
      fVar27 = ((fVar5 * fVar32 + fVar27 * fVar4 + fVar33 * fVar26) -
               fVar9 * *(float *)(lVar23 + 0x1c)) - fVar11 * *(float *)(lVar23 + 0x20);
      fVar4 = *(float *)(lVar23 + 0x10);
      *(float *)(param_7 + lVar1 * 0x10) = fVar27;
      *(float *)(param_7 + 4 + lVar1 * 0x10) = fVar9;
      lVar23 = *(int64_t *)(param_7 + 8 + lVar2 * 0x10);
      fVar5 = *(float *)(param_7 + lVar2 * 0x10);
      fVar32 = *(float *)(lVar23 + 0x14);
      fVar33 = *(float *)(param_7 + 4 + lVar2 * 0x10);
      fVar26 = *(float *)(lVar23 + 0x18);
      fVar27 = ((fVar9 * fVar10 + fVar27 * fVar4 + fVar11 * fVar12) -
               fVar5 * *(float *)(lVar23 + 0x1c)) - fVar33 * *(float *)(lVar23 + 0x20);
      fVar4 = *(float *)(lVar23 + 0x10);
      *(float *)(param_7 + 4 + lVar2 * 0x10) = fVar5;
      *(float *)(param_7 + lVar2 * 0x10) = fVar27;
      lVar23 = *(int64_t *)(param_7 + 8 + lVar22 * 0x10);
      fVar9 = *(float *)(param_7 + lVar22 * 0x10);
      fVar10 = *(float *)(lVar23 + 0x14);
      fVar11 = *(float *)(param_7 + 4 + lVar22 * 0x10);
      fVar12 = *(float *)(lVar23 + 0x18);
      fVar31 = ((fVar5 * fVar32 + fVar27 * fVar4 + fVar33 * fVar26) -
               fVar9 * *(float *)(lVar23 + 0x1c)) - fVar11 * *(float *)(lVar23 + 0x20);
      fVar4 = *(float *)(lVar23 + 0x10);
      *(float *)(param_7 + lVar22 * 0x10) = fVar31;
      *(float *)(param_7 + 4 + lVar22 * 0x10) = fVar9;
      lVar23 = *(int64_t *)(param_9 + 8 + lVar21 * 0x10);
      fVar5 = *(float *)(param_9 + lVar21 * 0x10);
      fVar32 = *(float *)(param_9 + 4 + lVar21 * 0x10);
      fVar33 = *(float *)(lVar23 + 0x14);
      fVar26 = *(float *)(lVar23 + 0x18);
      fVar28 = (param_2[iVar19] - fVar5 * *(float *)(lVar23 + 0x1c)) -
               fVar32 * *(float *)(lVar23 + 0x20);
      fVar27 = *(float *)(lVar23 + 0x10);
      *(float *)(param_9 + 4 + lVar21 * 0x10) = fVar5;
      *(float *)(param_9 + lVar21 * 0x10) = fVar28;
      lVar23 = *(int64_t *)(param_9 + 8 + lVar1 * 0x10);
      fVar13 = *(float *)(param_9 + 4 + lVar1 * 0x10);
      fVar14 = *(float *)(lVar23 + 0x18);
      fVar15 = *(float *)(param_9 + lVar1 * 0x10);
      fVar16 = *(float *)(lVar23 + 0x14);
      fVar28 = ((fVar5 * fVar33 + fVar28 * fVar27 + fVar32 * fVar26) -
               fVar15 * *(float *)(lVar23 + 0x1c)) - fVar13 * *(float *)(lVar23 + 0x20);
      fVar5 = *(float *)(lVar23 + 0x10);
      *(float *)(param_9 + lVar1 * 0x10) = fVar28;
      *(float *)(param_9 + 4 + lVar1 * 0x10) = fVar15;
      lVar23 = *(int64_t *)(param_9 + 8 + lVar2 * 0x10);
      fVar32 = *(float *)(param_9 + lVar2 * 0x10);
      fVar33 = *(float *)(param_9 + 4 + lVar2 * 0x10);
      fVar26 = *(float *)(lVar23 + 0x18);
      fVar27 = *(float *)(lVar23 + 0x14);
      fVar28 = ((fVar28 * fVar5 + fVar15 * fVar16 + fVar13 * fVar14) -
               fVar32 * *(float *)(lVar23 + 0x1c)) - fVar33 * *(float *)(lVar23 + 0x20);
      fVar5 = *(float *)(lVar23 + 0x10);
      *(float *)(param_9 + 4 + lVar2 * 0x10) = fVar32;
      *(float *)(param_9 + lVar2 * 0x10) = fVar28;
      lVar23 = *(int64_t *)(param_9 + 8 + lVar22 * 0x10);
      fVar13 = *(float *)(param_9 + lVar22 * 0x10);
      fVar14 = *(float *)(param_9 + 4 + lVar22 * 0x10);
      fVar15 = *(float *)(lVar23 + 0x18);
      fVar16 = *(float *)(lVar23 + 0x14);
      fVar32 = ((fVar28 * fVar5 + fVar32 * fVar27 + fVar33 * fVar26) -
               fVar13 * *(float *)(lVar23 + 0x1c)) - fVar14 * *(float *)(lVar23 + 0x20);
      fVar5 = *(float *)(lVar23 + 0x10);
      *(float *)(param_9 + 4 + lVar22 * 0x10) = fVar13;
      *(float *)(param_9 + lVar22 * 0x10) = fVar32;
      param_1[iVar19] =
           (fVar9 * fVar10 + fVar31 * fVar4 + fVar11 * fVar12) * param_11 +
           (fVar6 * fVar29 + fVar30 * fVar3 + fVar7 * fVar8) * param_10 +
           (fVar32 * fVar5 + fVar13 * fVar16 + fVar14 * fVar15) * param_12;
      lVar23 = *(int64_t *)(param_6 + 8 + lVar21 * 0x10);
      fVar3 = *(float *)(param_6 + lVar21 * 0x10);
      fVar4 = *(float *)(param_6 + 4 + lVar21 * 0x10);
      fVar5 = *(float *)(lVar23 + 0x18);
      fVar32 = *(float *)(lVar23 + 0x14);
      fVar26 = (param_2[iVar18] - fVar3 * *(float *)(lVar23 + 0x1c)) -
               fVar4 * *(float *)(lVar23 + 0x20);
      fVar33 = *(float *)(lVar23 + 0x10);
      *(float *)(param_6 + 4 + lVar21 * 0x10) = fVar3;
      *(float *)(param_6 + lVar21 * 0x10) = fVar26;
      lVar23 = *(int64_t *)(param_6 + 8 + lVar1 * 0x10);
      fVar6 = *(float *)(param_6 + 4 + lVar1 * 0x10);
      fVar7 = *(float *)(lVar23 + 0x18);
      fVar8 = *(float *)(param_6 + lVar1 * 0x10);
      fVar29 = *(float *)(lVar23 + 0x14);
      fVar26 = ((fVar26 * fVar33 + fVar3 * fVar32 + fVar4 * fVar5) -
               fVar8 * *(float *)(lVar23 + 0x1c)) - fVar6 * *(float *)(lVar23 + 0x20);
      fVar3 = *(float *)(lVar23 + 0x10);
      *(float *)(param_6 + lVar1 * 0x10) = fVar26;
      *(float *)(param_6 + 4 + lVar1 * 0x10) = fVar8;
      lVar23 = *(int64_t *)(param_6 + 8 + lVar2 * 0x10);
      fVar4 = *(float *)(param_6 + lVar2 * 0x10);
      fVar5 = *(float *)(param_6 + 4 + lVar2 * 0x10);
      fVar32 = *(float *)(lVar23 + 0x18);
      fVar33 = *(float *)(lVar23 + 0x14);
      fVar26 = ((fVar26 * fVar3 + fVar8 * fVar29 + fVar6 * fVar7) -
               fVar4 * *(float *)(lVar23 + 0x1c)) - fVar5 * *(float *)(lVar23 + 0x20);
      fVar3 = *(float *)(lVar23 + 0x10);
      *(float *)(param_6 + 4 + lVar2 * 0x10) = fVar4;
      *(float *)(param_6 + lVar2 * 0x10) = fVar26;
      lVar23 = *(int64_t *)(param_6 + 8 + lVar22 * 0x10);
      fVar6 = *(float *)(param_6 + lVar22 * 0x10);
      fVar7 = *(float *)(param_6 + 4 + lVar22 * 0x10);
      fVar8 = *(float *)(lVar23 + 0x18);
      fVar29 = *(float *)(lVar23 + 0x14);
      fVar30 = ((fVar26 * fVar3 + fVar4 * fVar33 + fVar5 * fVar32) -
               fVar6 * *(float *)(lVar23 + 0x1c)) - fVar7 * *(float *)(lVar23 + 0x20);
      fVar3 = *(float *)(lVar23 + 0x10);
      *(float *)(param_6 + 4 + lVar22 * 0x10) = fVar6;
      *(float *)(param_6 + lVar22 * 0x10) = fVar30;
      lVar23 = *(int64_t *)(param_8 + 8 + lVar21 * 0x10);
      fVar4 = *(float *)(param_8 + lVar21 * 0x10);
      fVar5 = *(float *)(param_8 + 4 + lVar21 * 0x10);
      fVar32 = *(float *)(lVar23 + 0x14);
      fVar33 = *(float *)(lVar23 + 0x18);
      fVar27 = (param_2[iVar18] - fVar4 * *(float *)(lVar23 + 0x1c)) -
               fVar5 * *(float *)(lVar23 + 0x20);
      fVar26 = *(float *)(lVar23 + 0x10);
      *(float *)(param_8 + 4 + lVar21 * 0x10) = fVar4;
      *(float *)(param_8 + lVar21 * 0x10) = fVar27;
      lVar23 = *(int64_t *)(param_8 + 8 + lVar1 * 0x10);
      fVar9 = *(float *)(param_8 + 4 + lVar1 * 0x10);
      fVar10 = *(float *)(lVar23 + 0x18);
      fVar11 = *(float *)(param_8 + lVar1 * 0x10);
      fVar12 = *(float *)(lVar23 + 0x14);
      fVar27 = ((fVar27 * fVar26 + fVar4 * fVar32 + fVar5 * fVar33) -
               fVar11 * *(float *)(lVar23 + 0x1c)) - fVar9 * *(float *)(lVar23 + 0x20);
      fVar4 = *(float *)(lVar23 + 0x10);
      *(float *)(param_8 + lVar1 * 0x10) = fVar27;
      *(float *)(param_8 + 4 + lVar1 * 0x10) = fVar11;
      lVar23 = *(int64_t *)(param_8 + 8 + lVar2 * 0x10);
      fVar5 = *(float *)(param_8 + lVar2 * 0x10);
      fVar32 = *(float *)(lVar23 + 0x14);
      fVar33 = *(float *)(param_8 + 4 + lVar2 * 0x10);
      fVar26 = *(float *)(lVar23 + 0x18);
      fVar27 = ((fVar27 * fVar4 + fVar11 * fVar12 + fVar9 * fVar10) -
               fVar5 * *(float *)(lVar23 + 0x1c)) - fVar33 * *(float *)(lVar23 + 0x20);
      fVar4 = *(float *)(lVar23 + 0x10);
      *(float *)(param_8 + lVar2 * 0x10) = fVar27;
      *(float *)(param_8 + 4 + lVar2 * 0x10) = fVar5;
      lVar23 = *(int64_t *)(param_8 + 8 + lVar22 * 0x10);
      fVar9 = *(float *)(param_8 + lVar22 * 0x10);
      fVar10 = *(float *)(lVar23 + 0x14);
      fVar11 = *(float *)(param_8 + 4 + lVar22 * 0x10);
      fVar12 = *(float *)(lVar23 + 0x18);
      fVar27 = ((fVar5 * fVar32 + fVar27 * fVar4 + fVar33 * fVar26) -
               fVar9 * *(float *)(lVar23 + 0x1c)) - fVar11 * *(float *)(lVar23 + 0x20);
      fVar4 = *(float *)(lVar23 + 0x10);
      *(float *)(param_8 + lVar22 * 0x10) = fVar27;
      *(float *)(param_8 + 4 + lVar22 * 0x10) = fVar9;
      lVar23 = *(int64_t *)(param_7 + 8 + lVar21 * 0x10);
      fVar5 = *(float *)(param_7 + lVar21 * 0x10);
      fVar32 = *(float *)(param_7 + 4 + lVar21 * 0x10);
      fVar33 = *(float *)(lVar23 + 0x18);
      fVar26 = *(float *)(lVar23 + 0x14);
      fVar27 = ((fVar9 * fVar10 + fVar27 * fVar4 + fVar11 * fVar12) -
               fVar5 * *(float *)(lVar23 + 0x1c)) - fVar32 * *(float *)(lVar23 + 0x20);
      fVar4 = *(float *)(lVar23 + 0x10);
      *(float *)(param_7 + lVar21 * 0x10) = fVar27;
      *(float *)(param_7 + 4 + lVar21 * 0x10) = fVar5;
      lVar23 = *(int64_t *)(param_7 + 8 + lVar1 * 0x10);
      fVar9 = *(float *)(param_7 + lVar1 * 0x10);
      fVar10 = *(float *)(param_7 + 4 + lVar1 * 0x10);
      fVar11 = *(float *)(lVar23 + 0x18);
      fVar12 = *(float *)(lVar23 + 0x14);
      fVar27 = ((fVar27 * fVar4 + fVar5 * fVar26 + fVar32 * fVar33) -
               fVar9 * *(float *)(lVar23 + 0x1c)) - fVar10 * *(float *)(lVar23 + 0x20);
      fVar4 = *(float *)(lVar23 + 0x10);
      *(float *)(param_7 + lVar1 * 0x10) = fVar27;
      *(float *)(param_7 + 4 + lVar1 * 0x10) = fVar9;
      lVar23 = *(int64_t *)(param_7 + 8 + lVar2 * 0x10);
      fVar5 = *(float *)(param_7 + lVar2 * 0x10);
      fVar32 = *(float *)(param_7 + 4 + lVar2 * 0x10);
      fVar33 = *(float *)(lVar23 + 0x18);
      fVar26 = *(float *)(lVar23 + 0x14);
      fVar27 = ((fVar27 * fVar4 + fVar9 * fVar12 + fVar10 * fVar11) -
               fVar5 * *(float *)(lVar23 + 0x1c)) - fVar32 * *(float *)(lVar23 + 0x20);
      fVar4 = *(float *)(lVar23 + 0x10);
      *(float *)(param_7 + 4 + lVar2 * 0x10) = fVar5;
      *(float *)(param_7 + lVar2 * 0x10) = fVar27;
      lVar23 = *(int64_t *)(param_7 + 8 + lVar22 * 0x10);
      fVar9 = *(float *)(param_7 + lVar22 * 0x10);
      fVar10 = *(float *)(param_7 + 4 + lVar22 * 0x10);
      fVar11 = *(float *)(lVar23 + 0x18);
      fVar12 = *(float *)(lVar23 + 0x14);
      fVar31 = ((fVar27 * fVar4 + fVar5 * fVar26 + fVar32 * fVar33) -
               fVar9 * *(float *)(lVar23 + 0x1c)) - fVar10 * *(float *)(lVar23 + 0x20);
      fVar4 = *(float *)(lVar23 + 0x10);
      *(float *)(param_7 + lVar22 * 0x10) = fVar31;
      *(float *)(param_7 + 4 + lVar22 * 0x10) = fVar9;
      lVar23 = *(int64_t *)(param_9 + 8 + lVar21 * 0x10);
      fVar5 = *(float *)(param_9 + lVar21 * 0x10);
      fVar32 = *(float *)(param_9 + 4 + lVar21 * 0x10);
      fVar33 = *(float *)(lVar23 + 0x14);
      fVar26 = *(float *)(lVar23 + 0x18);
      fVar28 = (param_2[iVar18] - fVar5 * *(float *)(lVar23 + 0x1c)) -
               fVar32 * *(float *)(lVar23 + 0x20);
      fVar27 = *(float *)(lVar23 + 0x10);
      *(float *)(param_9 + 4 + lVar21 * 0x10) = fVar5;
      *(float *)(param_9 + lVar21 * 0x10) = fVar28;
      lVar23 = *(int64_t *)(param_9 + 8 + lVar1 * 0x10);
      fVar13 = *(float *)(param_9 + 4 + lVar1 * 0x10);
      fVar14 = *(float *)(param_9 + lVar1 * 0x10);
      param_2 = param_2 + param_4 * 4;
      fVar15 = *(float *)(lVar23 + 0x14);
      fVar16 = *(float *)(lVar23 + 0x18);
      fVar28 = ((fVar5 * fVar33 + fVar28 * fVar27 + fVar32 * fVar26) -
               fVar14 * *(float *)(lVar23 + 0x1c)) - fVar13 * *(float *)(lVar23 + 0x20);
      fVar5 = *(float *)(lVar23 + 0x10);
      *(float *)(param_9 + lVar1 * 0x10) = fVar28;
      *(float *)(param_9 + 4 + lVar1 * 0x10) = fVar14;
      lVar23 = *(int64_t *)(param_9 + 8 + lVar2 * 0x10);
      fVar32 = *(float *)(param_9 + lVar2 * 0x10);
      fVar33 = *(float *)(lVar23 + 0x14);
      fVar26 = *(float *)(param_9 + 4 + lVar2 * 0x10);
      fVar27 = *(float *)(lVar23 + 0x18);
      fVar28 = ((fVar14 * fVar15 + fVar28 * fVar5 + fVar13 * fVar16) -
               fVar32 * *(float *)(lVar23 + 0x1c)) - fVar26 * *(float *)(lVar23 + 0x20);
      fVar5 = *(float *)(lVar23 + 0x10);
      *(float *)(param_9 + lVar2 * 0x10) = fVar28;
      *(float *)(param_9 + 4 + lVar2 * 0x10) = fVar32;
      lVar23 = *(int64_t *)(param_9 + 8 + lVar22 * 0x10);
      fVar13 = *(float *)(param_9 + lVar22 * 0x10);
      fVar14 = *(float *)(lVar23 + 0x14);
      fVar15 = *(float *)(param_9 + 4 + lVar22 * 0x10);
      fVar16 = *(float *)(lVar23 + 0x18);
      fVar32 = ((fVar32 * fVar33 + fVar28 * fVar5 + fVar26 * fVar27) -
               fVar13 * *(float *)(lVar23 + 0x1c)) - fVar15 * *(float *)(lVar23 + 0x20);
      fVar5 = *(float *)(lVar23 + 0x10);
      *(float *)(param_9 + 4 + lVar22 * 0x10) = fVar13;
      *(float *)(param_9 + lVar22 * 0x10) = fVar32;
      param_1[iVar18] =
           (fVar31 * fVar4 + fVar9 * fVar12 + fVar10 * fVar11) * param_11 +
           (fVar30 * fVar3 + fVar6 * fVar29 + fVar7 * fVar8) * param_10 +
           (fVar13 * fVar14 + fVar32 * fVar5 + fVar15 * fVar16) * param_12;
      param_1 = param_1 + param_4 * 4;
      iVar20 = iVar20 + -1;
      pfStackX_8 = param_1;
    } while (iVar20 != 0);
  }
  lVar21 = (int64_t)param_5;
  param_3 = param_3 & 3;
  if (param_3 != 0) {
    lVar1 = lVar21 + 0x20;
    lVar2 = lVar21 + 0x40;
    lVar22 = lVar21 + 0x60;
    pfVar25 = (float *)(lVar22 * 0x10 + param_6);
    pfVar24 = (float *)(lVar2 * 0x10 + param_6);
    lVar23 = (int64_t)pfStackX_8 - (int64_t)param_2;
    do {
      lVar17 = *(int64_t *)(param_6 + 8 + lVar21 * 0x10);
      fVar3 = *(float *)(param_6 + lVar21 * 0x10);
      fVar4 = *(float *)(param_6 + 4 + lVar21 * 0x10);
      fVar5 = *(float *)(lVar17 + 0x14);
      fVar32 = *(float *)(lVar17 + 0x18);
      fVar26 = (*param_2 - fVar3 * *(float *)(lVar17 + 0x1c)) - fVar4 * *(float *)(lVar17 + 0x20);
      fVar33 = *(float *)(lVar17 + 0x10);
      *(float *)(param_6 + 4 + lVar21 * 0x10) = fVar3;
      *(float *)(param_6 + lVar21 * 0x10) = fVar26;
      lVar17 = *(int64_t *)(param_6 + 8 + lVar1 * 0x10);
      fVar6 = *(float *)(param_6 + 4 + lVar1 * 0x10);
      fVar7 = *(float *)(lVar17 + 0x18);
      fVar8 = *(float *)(param_6 + lVar1 * 0x10);
      fVar29 = *(float *)(lVar17 + 0x14);
      fVar26 = ((fVar3 * fVar5 + fVar26 * fVar33 + fVar4 * fVar32) -
               fVar8 * *(float *)(lVar17 + 0x1c)) - fVar6 * *(float *)(lVar17 + 0x20);
      fVar3 = *(float *)(lVar17 + 0x10);
      *(float *)(param_6 + lVar1 * 0x10) = fVar26;
      *(float *)(param_6 + 4 + lVar1 * 0x10) = fVar8;
      lVar17 = *(int64_t *)(pfVar24 + 2);
      fVar4 = *pfVar24;
      fVar5 = pfVar24[1];
      fVar32 = *(float *)(lVar17 + 0x18);
      fVar33 = *(float *)(lVar17 + 0x14);
      fVar26 = ((fVar8 * fVar29 + fVar26 * fVar3 + fVar6 * fVar7) -
               fVar4 * *(float *)(lVar17 + 0x1c)) - fVar5 * *(float *)(lVar17 + 0x20);
      fVar3 = *(float *)(lVar17 + 0x10);
      pfVar24[1] = fVar4;
      *pfVar24 = fVar26;
      lVar17 = *(int64_t *)(pfVar25 + 2);
      fVar6 = *pfVar25;
      fVar7 = pfVar25[1];
      fVar8 = *(float *)(lVar17 + 0x18);
      fVar29 = *(float *)(lVar17 + 0x14);
      fVar30 = ((fVar26 * fVar3 + fVar4 * fVar33 + fVar5 * fVar32) -
               fVar6 * *(float *)(lVar17 + 0x1c)) - fVar7 * *(float *)(lVar17 + 0x20);
      fVar3 = *(float *)(lVar17 + 0x10);
      pfVar25[1] = fVar6;
      *pfVar25 = fVar30;
      lVar17 = *(int64_t *)(param_8 + 8 + lVar21 * 0x10);
      fVar4 = *(float *)(param_8 + lVar21 * 0x10);
      fVar5 = *(float *)(param_8 + 4 + lVar21 * 0x10);
      fVar32 = *(float *)(lVar17 + 0x14);
      fVar33 = *(float *)(lVar17 + 0x18);
      fVar27 = (*param_2 - fVar4 * *(float *)(lVar17 + 0x1c)) - fVar5 * *(float *)(lVar17 + 0x20);
      fVar26 = *(float *)(lVar17 + 0x10);
      *(float *)(param_8 + 4 + lVar21 * 0x10) = fVar4;
      *(float *)(param_8 + lVar21 * 0x10) = fVar27;
      lVar17 = *(int64_t *)(param_8 + 8 + lVar1 * 0x10);
      fVar9 = *(float *)(param_8 + 4 + lVar1 * 0x10);
      fVar10 = *(float *)(lVar17 + 0x18);
      fVar11 = *(float *)(param_8 + lVar1 * 0x10);
      fVar12 = *(float *)(lVar17 + 0x14);
      fVar27 = ((fVar27 * fVar26 + fVar4 * fVar32 + fVar5 * fVar33) -
               fVar11 * *(float *)(lVar17 + 0x1c)) - fVar9 * *(float *)(lVar17 + 0x20);
      fVar4 = *(float *)(lVar17 + 0x10);
      *(float *)(param_8 + lVar1 * 0x10) = fVar27;
      *(float *)(param_8 + 4 + lVar1 * 0x10) = fVar11;
      lVar17 = *(int64_t *)(param_8 + 8 + lVar2 * 0x10);
      fVar5 = *(float *)(param_8 + lVar2 * 0x10);
      fVar32 = *(float *)(lVar17 + 0x14);
      fVar33 = *(float *)(param_8 + 4 + lVar2 * 0x10);
      fVar26 = *(float *)(lVar17 + 0x18);
      fVar27 = ((fVar11 * fVar12 + fVar27 * fVar4 + fVar9 * fVar10) -
               fVar5 * *(float *)(lVar17 + 0x1c)) - fVar33 * *(float *)(lVar17 + 0x20);
      fVar4 = *(float *)(lVar17 + 0x10);
      *(float *)(param_8 + lVar2 * 0x10) = fVar27;
      *(float *)(param_8 + 4 + lVar2 * 0x10) = fVar5;
      lVar17 = *(int64_t *)(param_8 + 8 + lVar22 * 0x10);
      fVar9 = *(float *)(param_8 + lVar22 * 0x10);
      fVar10 = *(float *)(lVar17 + 0x14);
      fVar11 = *(float *)(param_8 + 4 + lVar22 * 0x10);
      fVar12 = *(float *)(lVar17 + 0x18);
      fVar27 = ((fVar5 * fVar32 + fVar27 * fVar4 + fVar33 * fVar26) -
               fVar9 * *(float *)(lVar17 + 0x1c)) - fVar11 * *(float *)(lVar17 + 0x20);
      fVar4 = *(float *)(lVar17 + 0x10);
      *(float *)(param_8 + lVar22 * 0x10) = fVar27;
      *(float *)(param_8 + 4 + lVar22 * 0x10) = fVar9;
      lVar17 = *(int64_t *)(param_7 + 8 + lVar21 * 0x10);
      fVar5 = *(float *)(param_7 + lVar21 * 0x10);
      fVar32 = *(float *)(lVar17 + 0x14);
      fVar33 = *(float *)(param_7 + 4 + lVar21 * 0x10);
      fVar26 = *(float *)(lVar17 + 0x18);
      fVar27 = ((fVar9 * fVar10 + fVar27 * fVar4 + fVar11 * fVar12) -
               fVar5 * *(float *)(lVar17 + 0x1c)) - fVar33 * *(float *)(lVar17 + 0x20);
      fVar4 = *(float *)(lVar17 + 0x10);
      *(float *)(param_7 + lVar21 * 0x10) = fVar27;
      *(float *)(param_7 + 4 + lVar21 * 0x10) = fVar5;
      lVar17 = *(int64_t *)(param_7 + 8 + lVar1 * 0x10);
      fVar9 = *(float *)(param_7 + lVar1 * 0x10);
      fVar10 = *(float *)(param_7 + 4 + lVar1 * 0x10);
      fVar11 = *(float *)(lVar17 + 0x18);
      fVar12 = *(float *)(lVar17 + 0x14);
      fVar27 = ((fVar5 * fVar32 + fVar27 * fVar4 + fVar33 * fVar26) -
               fVar9 * *(float *)(lVar17 + 0x1c)) - fVar10 * *(float *)(lVar17 + 0x20);
      fVar4 = *(float *)(lVar17 + 0x10);
      *(float *)(param_7 + lVar1 * 0x10) = fVar27;
      *(float *)(param_7 + 4 + lVar1 * 0x10) = fVar9;
      lVar17 = *(int64_t *)(param_7 + 8 + lVar2 * 0x10);
      fVar5 = *(float *)(param_7 + lVar2 * 0x10);
      fVar32 = *(float *)(lVar17 + 0x14);
      fVar33 = *(float *)(param_7 + 4 + lVar2 * 0x10);
      fVar26 = *(float *)(lVar17 + 0x18);
      fVar27 = ((fVar9 * fVar12 + fVar27 * fVar4 + fVar10 * fVar11) -
               fVar5 * *(float *)(lVar17 + 0x1c)) - fVar33 * *(float *)(lVar17 + 0x20);
      fVar4 = *(float *)(lVar17 + 0x10);
      *(float *)(param_7 + 4 + lVar2 * 0x10) = fVar5;
      *(float *)(param_7 + lVar2 * 0x10) = fVar27;
      lVar17 = *(int64_t *)(param_7 + 8 + lVar22 * 0x10);
      fVar9 = *(float *)(param_7 + lVar22 * 0x10);
      fVar10 = *(float *)(param_7 + 4 + lVar22 * 0x10);
      fVar11 = *(float *)(lVar17 + 0x18);
      fVar12 = *(float *)(lVar17 + 0x14);
      fVar31 = ((fVar5 * fVar32 + fVar27 * fVar4 + fVar33 * fVar26) -
               fVar9 * *(float *)(lVar17 + 0x1c)) - fVar10 * *(float *)(lVar17 + 0x20);
      fVar4 = *(float *)(lVar17 + 0x10);
      *(float *)(param_7 + lVar22 * 0x10) = fVar31;
      *(float *)(param_7 + 4 + lVar22 * 0x10) = fVar9;
      lVar17 = *(int64_t *)(param_9 + 8 + lVar21 * 0x10);
      fVar5 = *(float *)(param_9 + lVar21 * 0x10);
      fVar32 = *(float *)(param_9 + 4 + lVar21 * 0x10);
      fVar33 = *(float *)(lVar17 + 0x18);
      fVar26 = *(float *)(lVar17 + 0x14);
      fVar28 = (*param_2 - fVar5 * *(float *)(lVar17 + 0x1c)) - fVar32 * *(float *)(lVar17 + 0x20);
      fVar27 = *(float *)(lVar17 + 0x10);
      *(float *)(param_9 + 4 + lVar21 * 0x10) = fVar5;
      *(float *)(param_9 + lVar21 * 0x10) = fVar28;
      lVar17 = *(int64_t *)(param_9 + 8 + lVar1 * 0x10);
      fVar13 = *(float *)(param_9 + 4 + lVar1 * 0x10);
      fVar14 = *(float *)(param_9 + lVar1 * 0x10);
      fVar15 = *(float *)(lVar17 + 0x14);
      fVar16 = *(float *)(lVar17 + 0x18);
      fVar28 = ((fVar28 * fVar27 + fVar5 * fVar26 + fVar32 * fVar33) -
               fVar14 * *(float *)(lVar17 + 0x1c)) - fVar13 * *(float *)(lVar17 + 0x20);
      fVar5 = *(float *)(lVar17 + 0x10);
      *(float *)(param_9 + lVar1 * 0x10) = fVar28;
      *(float *)(param_9 + 4 + lVar1 * 0x10) = fVar14;
      lVar17 = *(int64_t *)(param_9 + 8 + lVar2 * 0x10);
      fVar32 = *(float *)(param_9 + lVar2 * 0x10);
      fVar33 = *(float *)(param_9 + 4 + lVar2 * 0x10);
      fVar26 = *(float *)(lVar17 + 0x18);
      fVar27 = *(float *)(lVar17 + 0x14);
      fVar28 = ((fVar28 * fVar5 + fVar14 * fVar15 + fVar13 * fVar16) -
               fVar32 * *(float *)(lVar17 + 0x1c)) - fVar33 * *(float *)(lVar17 + 0x20);
      fVar5 = *(float *)(lVar17 + 0x10);
      *(float *)(param_9 + lVar2 * 0x10) = fVar28;
      *(float *)(param_9 + 4 + lVar2 * 0x10) = fVar32;
      lVar17 = *(int64_t *)(param_9 + 8 + lVar22 * 0x10);
      fVar13 = *(float *)(param_9 + lVar22 * 0x10);
      fVar14 = *(float *)(param_9 + 4 + lVar22 * 0x10);
      fVar15 = *(float *)(lVar17 + 0x18);
      fVar16 = *(float *)(lVar17 + 0x14);
      fVar32 = ((fVar28 * fVar5 + fVar32 * fVar27 + fVar33 * fVar26) -
               fVar13 * *(float *)(lVar17 + 0x1c)) - fVar14 * *(float *)(lVar17 + 0x20);
      fVar5 = *(float *)(lVar17 + 0x10);
      *(float *)(param_9 + 4 + lVar22 * 0x10) = fVar13;
      *(float *)(param_9 + lVar22 * 0x10) = fVar32;
      *(float *)((int64_t)param_2 + lVar23) =
           (fVar31 * fVar4 + fVar9 * fVar12 + fVar10 * fVar11) * param_11 +
           (fVar30 * fVar3 + fVar6 * fVar29 + fVar7 * fVar8) * param_10 +
           (fVar32 * fVar5 + fVar13 * fVar16 + fVar14 * fVar15) * param_12;
      param_2 = param_2 + param_4;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}








