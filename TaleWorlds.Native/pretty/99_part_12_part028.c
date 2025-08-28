#include "TaleWorlds.Native.Split.h"

// 99_part_12_part028.c - 12 个函数

// 函数: void FUN_1807db4f0(int64_t *param_1,int64_t param_2,uint param_3)
void FUN_1807db4f0(int64_t *param_1,int64_t param_2,uint param_3)

{
  int32_t *puVar1;
  int32_t *puVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  int32_t uVar16;
  int32_t uVar17;
  int32_t uVar18;
  int32_t uVar19;
  int32_t uVar20;
  int32_t uVar21;
  int32_t uVar22;
  int32_t uVar23;
  int32_t uVar24;
  int32_t uVar25;
  uint64_t uVar26;
  uint uVar27;
  uint uVar28;
  
  uVar28 = 0;
  if (param_3 >> 2 != 0) {
    do {
      uVar26 = (uint64_t)(uVar28 * 4);
      puVar1 = (int32_t *)(*param_1 + uVar26 * 4);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (int32_t *)(param_1[1] + uVar26 * 4);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (int32_t *)(param_1[2] + uVar26 * 4);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      uVar12 = puVar2[2];
      uVar13 = puVar2[3];
      puVar2 = (int32_t *)(param_1[3] + uVar26 * 4);
      uVar14 = *puVar2;
      uVar15 = puVar2[1];
      uVar16 = puVar2[2];
      uVar17 = puVar2[3];
      puVar2 = (int32_t *)(param_1[4] + uVar26 * 4);
      uVar18 = *puVar2;
      uVar19 = puVar2[1];
      uVar20 = puVar2[2];
      uVar21 = puVar2[3];
      puVar2 = (int32_t *)(param_1[5] + uVar26 * 4);
      uVar22 = *puVar2;
      uVar23 = puVar2[1];
      uVar24 = puVar2[2];
      uVar25 = puVar2[3];
      uVar27 = uVar28 * 0x18;
      uVar28 = uVar28 + 1;
      puVar2 = (int32_t *)(param_2 + (uint64_t)uVar27 * 4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar2[2] = uVar10;
      puVar2[3] = uVar14;
      puVar1 = (int32_t *)(param_2 + (uint64_t)(uVar27 + 4) * 4);
      *puVar1 = uVar18;
      puVar1[1] = uVar22;
      puVar1[2] = uVar3;
      puVar1[3] = uVar7;
      puVar1 = (int32_t *)(param_2 + (uint64_t)(uVar27 + 8) * 4);
      *puVar1 = uVar11;
      puVar1[1] = uVar15;
      puVar1[2] = uVar19;
      puVar1[3] = uVar23;
      puVar1 = (int32_t *)(param_2 + (uint64_t)(uVar27 + 0xc) * 4);
      *puVar1 = uVar4;
      puVar1[1] = uVar8;
      puVar1[2] = uVar12;
      puVar1[3] = uVar16;
      puVar1 = (int32_t *)(param_2 + (uint64_t)(uVar27 + 0x10) * 4);
      *puVar1 = uVar20;
      puVar1[1] = uVar24;
      puVar1[2] = uVar5;
      puVar1[3] = uVar9;
      puVar1 = (int32_t *)(param_2 + (uint64_t)(uVar27 + 0x14) * 4);
      *puVar1 = uVar13;
      puVar1[1] = uVar17;
      puVar1[2] = uVar21;
      puVar1[3] = uVar25;
    } while (uVar28 < param_3 >> 2);
  }
  return;
}






// 函数: void FUN_1807db50a(uint64_t param_1,uint64_t param_2,uint param_3,int64_t param_4)
void FUN_1807db50a(uint64_t param_1,uint64_t param_2,uint param_3,int64_t param_4)

{
  int32_t *puVar1;
  int32_t *puVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  int32_t uVar16;
  int32_t uVar17;
  int32_t uVar18;
  int32_t uVar19;
  int32_t uVar20;
  int32_t uVar21;
  int32_t uVar22;
  int32_t uVar23;
  int32_t uVar24;
  int32_t uVar25;
  uint64_t uVar26;
  uint uVar27;
  int64_t *in_R10;
  uint in_R11D;
  
  do {
    uVar26 = (uint64_t)(in_R11D * 4);
    puVar1 = (int32_t *)(*in_R10 + uVar26 * 4);
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    puVar2 = (int32_t *)(in_R10[1] + uVar26 * 4);
    uVar6 = *puVar2;
    uVar7 = puVar2[1];
    uVar8 = puVar2[2];
    uVar9 = puVar2[3];
    puVar2 = (int32_t *)(in_R10[2] + uVar26 * 4);
    uVar10 = *puVar2;
    uVar11 = puVar2[1];
    uVar12 = puVar2[2];
    uVar13 = puVar2[3];
    puVar2 = (int32_t *)(in_R10[3] + uVar26 * 4);
    uVar14 = *puVar2;
    uVar15 = puVar2[1];
    uVar16 = puVar2[2];
    uVar17 = puVar2[3];
    puVar2 = (int32_t *)(in_R10[4] + uVar26 * 4);
    uVar18 = *puVar2;
    uVar19 = puVar2[1];
    uVar20 = puVar2[2];
    uVar21 = puVar2[3];
    puVar2 = (int32_t *)(in_R10[5] + uVar26 * 4);
    uVar22 = *puVar2;
    uVar23 = puVar2[1];
    uVar24 = puVar2[2];
    uVar25 = puVar2[3];
    uVar27 = in_R11D * 0x18;
    in_R11D = in_R11D + 1;
    puVar2 = (int32_t *)(param_4 + (uint64_t)uVar27 * 4);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar2[2] = uVar10;
    puVar2[3] = uVar14;
    puVar1 = (int32_t *)(param_4 + (uint64_t)(uVar27 + 4) * 4);
    *puVar1 = uVar18;
    puVar1[1] = uVar22;
    puVar1[2] = uVar3;
    puVar1[3] = uVar7;
    puVar1 = (int32_t *)(param_4 + (uint64_t)(uVar27 + 8) * 4);
    *puVar1 = uVar11;
    puVar1[1] = uVar15;
    puVar1[2] = uVar19;
    puVar1[3] = uVar23;
    puVar1 = (int32_t *)(param_4 + (uint64_t)(uVar27 + 0xc) * 4);
    *puVar1 = uVar4;
    puVar1[1] = uVar8;
    puVar1[2] = uVar12;
    puVar1[3] = uVar16;
    puVar1 = (int32_t *)(param_4 + (uint64_t)(uVar27 + 0x10) * 4);
    *puVar1 = uVar20;
    puVar1[1] = uVar24;
    puVar1[2] = uVar5;
    puVar1[3] = uVar9;
    puVar1 = (int32_t *)(param_4 + (uint64_t)(uVar27 + 0x14) * 4);
    *puVar1 = uVar13;
    puVar1[1] = uVar17;
    puVar1[2] = uVar21;
    puVar1[3] = uVar25;
  } while (in_R11D < param_3);
  return;
}






// 函数: void FUN_1807db5ea(void)
void FUN_1807db5ea(void)

{
  return;
}






// 函数: void FUN_1807db5f0(int64_t *param_1,int64_t param_2,uint param_3)
void FUN_1807db5f0(int64_t *param_1,int64_t param_2,uint param_3)

{
  int32_t *puVar1;
  int32_t *puVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  int32_t uVar16;
  int32_t uVar17;
  int32_t uVar18;
  int32_t uVar19;
  int32_t uVar20;
  int32_t uVar21;
  int32_t uVar22;
  int32_t uVar23;
  int32_t uVar24;
  int32_t uVar25;
  int32_t uVar26;
  int32_t uVar27;
  int32_t uVar28;
  int32_t uVar29;
  int32_t uVar30;
  int32_t uVar31;
  int32_t uVar32;
  int32_t uVar33;
  uint uVar34;
  uint64_t uVar35;
  uint uVar36;
  
  uVar36 = 0;
  if (param_3 >> 2 != 0) {
    do {
      uVar35 = (uint64_t)(uVar36 * 4);
      puVar1 = (int32_t *)(*param_1 + uVar35 * 4);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (int32_t *)(param_1[1] + uVar35 * 4);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (int32_t *)(param_1[2] + uVar35 * 4);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      uVar12 = puVar2[2];
      uVar13 = puVar2[3];
      puVar2 = (int32_t *)(param_1[3] + uVar35 * 4);
      uVar14 = *puVar2;
      uVar15 = puVar2[1];
      uVar16 = puVar2[2];
      uVar17 = puVar2[3];
      puVar2 = (int32_t *)(param_1[4] + uVar35 * 4);
      uVar18 = *puVar2;
      uVar19 = puVar2[1];
      uVar20 = puVar2[2];
      uVar21 = puVar2[3];
      puVar2 = (int32_t *)(param_1[5] + uVar35 * 4);
      uVar22 = *puVar2;
      uVar23 = puVar2[1];
      uVar24 = puVar2[2];
      uVar25 = puVar2[3];
      puVar2 = (int32_t *)(param_1[6] + uVar35 * 4);
      uVar26 = *puVar2;
      uVar27 = puVar2[1];
      uVar28 = puVar2[2];
      uVar29 = puVar2[3];
      puVar2 = (int32_t *)(param_1[7] + uVar35 * 4);
      uVar30 = *puVar2;
      uVar31 = puVar2[1];
      uVar32 = puVar2[2];
      uVar33 = puVar2[3];
      uVar34 = uVar36 * 0x20;
      uVar36 = uVar36 + 1;
      puVar2 = (int32_t *)(param_2 + (uint64_t)uVar34 * 4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar2[2] = uVar10;
      puVar2[3] = uVar14;
      puVar1 = (int32_t *)(param_2 + (uint64_t)(uVar34 + 4) * 4);
      *puVar1 = uVar18;
      puVar1[1] = uVar22;
      puVar1[2] = uVar26;
      puVar1[3] = uVar30;
      puVar1 = (int32_t *)(param_2 + (uint64_t)(uVar34 + 8) * 4);
      *puVar1 = uVar3;
      puVar1[1] = uVar7;
      puVar1[2] = uVar11;
      puVar1[3] = uVar15;
      puVar1 = (int32_t *)(param_2 + (uint64_t)(uVar34 + 0xc) * 4);
      *puVar1 = uVar19;
      puVar1[1] = uVar23;
      puVar1[2] = uVar27;
      puVar1[3] = uVar31;
      puVar1 = (int32_t *)(param_2 + (uint64_t)(uVar34 + 0x10) * 4);
      *puVar1 = uVar4;
      puVar1[1] = uVar8;
      puVar1[2] = uVar12;
      puVar1[3] = uVar16;
      puVar1 = (int32_t *)(param_2 + (uint64_t)(uVar34 + 0x14) * 4);
      *puVar1 = uVar20;
      puVar1[1] = uVar24;
      puVar1[2] = uVar28;
      puVar1[3] = uVar32;
      puVar1 = (int32_t *)(param_2 + (uint64_t)(uVar34 + 0x18) * 4);
      *puVar1 = uVar5;
      puVar1[1] = uVar9;
      puVar1[2] = uVar13;
      puVar1[3] = uVar17;
      puVar1 = (int32_t *)(param_2 + (uint64_t)(uVar34 + 0x1c) * 4);
      *puVar1 = uVar21;
      puVar1[1] = uVar25;
      puVar1[2] = uVar29;
      puVar1[3] = uVar33;
    } while (uVar36 < param_3 >> 2);
  }
  return;
}






// 函数: void FUN_1807db60a(uint64_t param_1,uint64_t param_2,uint param_3,int64_t param_4)
void FUN_1807db60a(uint64_t param_1,uint64_t param_2,uint param_3,int64_t param_4)

{
  int32_t *puVar1;
  int32_t *puVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  int32_t uVar16;
  int32_t uVar17;
  int32_t uVar18;
  int32_t uVar19;
  int32_t uVar20;
  int32_t uVar21;
  int32_t uVar22;
  int32_t uVar23;
  int32_t uVar24;
  int32_t uVar25;
  int32_t uVar26;
  int32_t uVar27;
  int32_t uVar28;
  int32_t uVar29;
  int32_t uVar30;
  int32_t uVar31;
  int32_t uVar32;
  int32_t uVar33;
  uint uVar34;
  uint64_t uVar35;
  int64_t *in_R10;
  uint in_R11D;
  
  do {
    uVar35 = (uint64_t)(in_R11D * 4);
    puVar1 = (int32_t *)(*in_R10 + uVar35 * 4);
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    puVar2 = (int32_t *)(in_R10[1] + uVar35 * 4);
    uVar6 = *puVar2;
    uVar7 = puVar2[1];
    uVar8 = puVar2[2];
    uVar9 = puVar2[3];
    puVar2 = (int32_t *)(in_R10[2] + uVar35 * 4);
    uVar10 = *puVar2;
    uVar11 = puVar2[1];
    uVar12 = puVar2[2];
    uVar13 = puVar2[3];
    puVar2 = (int32_t *)(in_R10[3] + uVar35 * 4);
    uVar14 = *puVar2;
    uVar15 = puVar2[1];
    uVar16 = puVar2[2];
    uVar17 = puVar2[3];
    puVar2 = (int32_t *)(in_R10[4] + uVar35 * 4);
    uVar18 = *puVar2;
    uVar19 = puVar2[1];
    uVar20 = puVar2[2];
    uVar21 = puVar2[3];
    puVar2 = (int32_t *)(in_R10[5] + uVar35 * 4);
    uVar22 = *puVar2;
    uVar23 = puVar2[1];
    uVar24 = puVar2[2];
    uVar25 = puVar2[3];
    puVar2 = (int32_t *)(in_R10[6] + uVar35 * 4);
    uVar26 = *puVar2;
    uVar27 = puVar2[1];
    uVar28 = puVar2[2];
    uVar29 = puVar2[3];
    puVar2 = (int32_t *)(in_R10[7] + uVar35 * 4);
    uVar30 = *puVar2;
    uVar31 = puVar2[1];
    uVar32 = puVar2[2];
    uVar33 = puVar2[3];
    uVar34 = in_R11D * 0x20;
    in_R11D = in_R11D + 1;
    puVar2 = (int32_t *)(param_4 + (uint64_t)uVar34 * 4);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar2[2] = uVar10;
    puVar2[3] = uVar14;
    puVar1 = (int32_t *)(param_4 + (uint64_t)(uVar34 + 4) * 4);
    *puVar1 = uVar18;
    puVar1[1] = uVar22;
    puVar1[2] = uVar26;
    puVar1[3] = uVar30;
    puVar1 = (int32_t *)(param_4 + (uint64_t)(uVar34 + 8) * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar7;
    puVar1[2] = uVar11;
    puVar1[3] = uVar15;
    puVar1 = (int32_t *)(param_4 + (uint64_t)(uVar34 + 0xc) * 4);
    *puVar1 = uVar19;
    puVar1[1] = uVar23;
    puVar1[2] = uVar27;
    puVar1[3] = uVar31;
    puVar1 = (int32_t *)(param_4 + (uint64_t)(uVar34 + 0x10) * 4);
    *puVar1 = uVar4;
    puVar1[1] = uVar8;
    puVar1[2] = uVar12;
    puVar1[3] = uVar16;
    puVar1 = (int32_t *)(param_4 + (uint64_t)(uVar34 + 0x14) * 4);
    *puVar1 = uVar20;
    puVar1[1] = uVar24;
    puVar1[2] = uVar28;
    puVar1[3] = uVar32;
    puVar1 = (int32_t *)(param_4 + (uint64_t)(uVar34 + 0x18) * 4);
    *puVar1 = uVar5;
    puVar1[1] = uVar9;
    puVar1[2] = uVar13;
    puVar1[3] = uVar17;
    puVar1 = (int32_t *)(param_4 + (uint64_t)(uVar34 + 0x1c) * 4);
    *puVar1 = uVar21;
    puVar1[1] = uVar25;
    puVar1[2] = uVar29;
    puVar1[3] = uVar33;
  } while (in_R11D < param_3);
  return;
}






// 函数: void FUN_1807db743(void)
void FUN_1807db743(void)

{
  return;
}






// 函数: void FUN_1807db890(int64_t param_1,int64_t param_2,uint param_3,float *param_4,uint64_t param_5,
void FUN_1807db890(int64_t param_1,int64_t param_2,uint param_3,float *param_4,uint64_t param_5,
                  uint64_t param_6,int param_7)

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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float *pfVar21;
  float *pfVar22;
  uint64_t uVar23;
  
  uVar23 = (uint64_t)param_3;
  if (param_7 == 0) {
    if (0 < (int)param_3) {
      pfVar21 = (float *)(param_2 + 8);
      pfVar22 = (float *)(param_1 + 8);
      fVar1 = param_4[1];
      fVar2 = *param_4;
      fVar3 = param_4[2];
      fVar4 = param_4[3];
      fVar5 = param_4[4];
      fVar6 = param_4[5];
      do {
        fVar7 = pfVar22[-1];
        fVar8 = pfVar22[-2];
        fVar9 = *pfVar22;
        fVar10 = pfVar22[1];
        fVar11 = pfVar22[2];
        fVar12 = pfVar22[3];
        fVar13 = param_4[0x20];
        fVar14 = param_4[0x22];
        fVar15 = param_4[0x21];
        fVar16 = param_4[0x23];
        *(float *)((param_2 - param_1) + -8 + (int64_t)pfVar22) =
             fVar2 * fVar8 + fVar1 * fVar7 + fVar3 * fVar9 + fVar4 * fVar10 + fVar5 * fVar11 +
             fVar6 * fVar12 + *(float *)((param_2 - param_1) + -8 + (int64_t)pfVar22);
        fVar17 = param_4[0x40];
        fVar18 = param_4[0x42];
        fVar19 = param_4[0x41];
        fVar20 = param_4[0x43];
        pfVar21[-1] = fVar13 * fVar8 + fVar15 * fVar7 + fVar14 * fVar9 + fVar16 * fVar10 +
                      param_4[0x24] * fVar11 + param_4[0x25] * fVar12 + pfVar21[-1];
        fVar13 = param_4[0x60];
        fVar14 = param_4[0x62];
        fVar15 = param_4[0x61];
        fVar16 = param_4[99];
        *pfVar21 = fVar17 * fVar8 + fVar19 * fVar7 + fVar18 * fVar9 + fVar20 * fVar10 +
                   param_4[0x44] * fVar11 + param_4[0x45] * fVar12 + *pfVar21;
        fVar17 = param_4[0x81];
        pfVar22 = pfVar22 + 6;
        fVar18 = param_4[0x82];
        fVar19 = param_4[0x80];
        pfVar21[1] = fVar13 * fVar8 + fVar15 * fVar7 + fVar14 * fVar9 + fVar16 * fVar10 +
                     param_4[100] * fVar11 + param_4[0x65] * fVar12 + pfVar21[1];
        fVar13 = param_4[0xa0];
        fVar14 = param_4[0xa2];
        fVar15 = param_4[0xa1];
        fVar16 = param_4[0xa3];
        pfVar21[2] = fVar19 * fVar8 + fVar17 * fVar7 + fVar18 * fVar9 + param_4[0x83] * fVar10 +
                     param_4[0x84] * fVar11 + param_4[0x85] * fVar12 + pfVar21[2];
        pfVar21[3] = fVar13 * fVar8 + fVar15 * fVar7 + fVar14 * fVar9 + fVar16 * fVar10 +
                     param_4[0xa4] * fVar11 + param_4[0xa5] * fVar12 + pfVar21[3];
        pfVar21 = pfVar21 + 6;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
    return;
  }
                    // WARNING: Subroutine does not return
  memset(param_2,0,(uint64_t)(param_3 * 6) << 2);
}






// 函数: void FUN_1807db8da(void)
void FUN_1807db8da(void)

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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float *pfVar21;
  float *pfVar22;
  float *unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  
  pfVar21 = (float *)(unaff_RSI + 8);
  pfVar22 = (float *)(unaff_RBP + 8);
  fVar1 = unaff_RBX[1];
  fVar2 = *unaff_RBX;
  fVar3 = unaff_RBX[2];
  fVar4 = unaff_RBX[3];
  fVar5 = unaff_RBX[4];
  fVar6 = unaff_RBX[5];
  do {
    fVar7 = pfVar22[-1];
    fVar8 = pfVar22[-2];
    fVar9 = *pfVar22;
    fVar10 = pfVar22[1];
    fVar11 = pfVar22[2];
    fVar12 = pfVar22[3];
    fVar13 = unaff_RBX[0x20];
    fVar14 = unaff_RBX[0x22];
    fVar15 = unaff_RBX[0x21];
    fVar16 = unaff_RBX[0x23];
    *(float *)((unaff_RSI - unaff_RBP) + -8 + (int64_t)pfVar22) =
         fVar2 * fVar8 + fVar1 * fVar7 + fVar3 * fVar9 + fVar4 * fVar10 + fVar5 * fVar11 +
         fVar6 * fVar12 + *(float *)((unaff_RSI - unaff_RBP) + -8 + (int64_t)pfVar22);
    fVar17 = unaff_RBX[0x40];
    fVar18 = unaff_RBX[0x42];
    fVar19 = unaff_RBX[0x41];
    fVar20 = unaff_RBX[0x43];
    pfVar21[-1] = fVar13 * fVar8 + fVar15 * fVar7 + fVar14 * fVar9 + fVar16 * fVar10 +
                  unaff_RBX[0x24] * fVar11 + unaff_RBX[0x25] * fVar12 + pfVar21[-1];
    fVar13 = unaff_RBX[0x60];
    fVar14 = unaff_RBX[0x62];
    fVar15 = unaff_RBX[0x61];
    fVar16 = unaff_RBX[99];
    *pfVar21 = fVar17 * fVar8 + fVar19 * fVar7 + fVar18 * fVar9 + fVar20 * fVar10 +
               unaff_RBX[0x44] * fVar11 + unaff_RBX[0x45] * fVar12 + *pfVar21;
    fVar17 = unaff_RBX[0x81];
    pfVar22 = pfVar22 + 6;
    fVar18 = unaff_RBX[0x82];
    fVar19 = unaff_RBX[0x80];
    pfVar21[1] = fVar13 * fVar8 + fVar15 * fVar7 + fVar14 * fVar9 + fVar16 * fVar10 +
                 unaff_RBX[100] * fVar11 + unaff_RBX[0x65] * fVar12 + pfVar21[1];
    fVar13 = unaff_RBX[0xa0];
    fVar14 = unaff_RBX[0xa2];
    fVar15 = unaff_RBX[0xa1];
    fVar16 = unaff_RBX[0xa3];
    pfVar21[2] = fVar19 * fVar8 + fVar17 * fVar7 + fVar18 * fVar9 + unaff_RBX[0x83] * fVar10 +
                 unaff_RBX[0x84] * fVar11 + unaff_RBX[0x85] * fVar12 + pfVar21[2];
    pfVar21[3] = fVar13 * fVar8 + fVar15 * fVar7 + fVar14 * fVar9 + fVar16 * fVar10 +
                 unaff_RBX[0xa4] * fVar11 + unaff_RBX[0xa5] * fVar12 + pfVar21[3];
    pfVar21 = pfVar21 + 6;
    unaff_RDI = unaff_RDI + -1;
  } while (unaff_RDI != 0);
  return;
}






// 函数: void FUN_1807dbc20(void)
void FUN_1807dbc20(void)

{
  return;
}






// 函数: void FUN_1807dbc40(float *param_1,float *param_2,uint param_3,float *param_4,uint64_t param_5,
void FUN_1807dbc40(float *param_1,float *param_2,uint param_3,float *param_4,uint64_t param_5,
                  uint64_t param_6,int param_7)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
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
  float fVar17;
  float fVar18;
  float fVar19;
  uint uVar20;
  
  fVar6 = *param_4;
  fVar7 = param_4[1];
  fVar8 = param_4[2];
  fVar9 = param_4[3];
  fVar10 = param_4[4];
  fVar11 = param_4[5];
  if (param_7 != 0) {
                    // WARNING: Subroutine does not return
    memset(param_2,0,(uint64_t)(param_3 * 6) << 2);
  }
  for (uVar20 = param_3 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
    fVar12 = param_1[7];
    fVar13 = param_1[8];
    fVar14 = param_1[6];
    fVar15 = param_1[9];
    *param_2 = fVar7 * param_1[1] + fVar6 * *param_1 + fVar8 * param_1[2] + fVar9 * param_1[3] +
               fVar10 * param_1[4] + fVar11 * param_1[5] + *param_2;
    fVar16 = param_1[0xd];
    fVar17 = param_1[0xe];
    fVar18 = param_1[0xc];
    fVar19 = param_1[0xf];
    param_2[6] = fVar7 * fVar12 + fVar6 * fVar14 + fVar8 * fVar13 + fVar9 * fVar15 +
                 fVar10 * param_1[10] + fVar11 * param_1[0xb] + param_2[6];
    fVar12 = param_1[0x13];
    fVar13 = param_1[0x14];
    fVar14 = param_1[0x12];
    fVar15 = param_1[0x15];
    param_2[0xc] = fVar7 * fVar16 + fVar6 * fVar18 + fVar8 * fVar17 + fVar9 * fVar19 +
                   fVar10 * param_1[0x10] + fVar11 * param_1[0x11] + param_2[0xc];
    pfVar1 = param_1 + 0x16;
    pfVar2 = param_1 + 0x17;
    param_1 = param_1 + 0x18;
    param_2[0x12] =
         fVar7 * fVar12 + fVar6 * fVar14 + fVar8 * fVar13 + fVar9 * fVar15 + fVar10 * *pfVar1 +
         fVar11 * *pfVar2 + param_2[0x12];
    param_2 = param_2 + 0x18;
  }
  param_3 = param_3 & 3;
  if (param_3 != 0) {
    param_1 = param_1 + 2;
    do {
      pfVar1 = param_1 + -2;
      pfVar2 = param_1 + -1;
      fVar12 = *param_1;
      pfVar3 = param_1 + 1;
      pfVar4 = param_1 + 2;
      pfVar5 = param_1 + 3;
      param_1 = param_1 + 6;
      *param_2 = fVar7 * *pfVar2 + fVar6 * *pfVar1 + fVar8 * fVar12 + fVar9 * *pfVar3 +
                 fVar10 * *pfVar4 + fVar11 * *pfVar5 + *param_2;
      param_2 = param_2 + 6;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}






// 函数: void FUN_1807dbec0(float *param_1,float *param_2,uint param_3,float *param_4,uint64_t param_5,
void FUN_1807dbec0(float *param_1,float *param_2,uint param_3,float *param_4,uint64_t param_5,
                  uint64_t param_6,int param_7)

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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar3 = param_4[2];
  fVar4 = param_4[3];
  fVar5 = param_4[4];
  fVar6 = param_4[5];
  fVar7 = param_4[0x20];
  if (param_7 != 0) {
                    // WARNING: Subroutine does not return
    memset(param_2,0,(uint64_t)(param_3 * 6) << 2);
  }
  for (uVar22 = param_3 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
    fVar8 = param_1[1];
    fVar9 = *param_1;
    fVar10 = param_1[2];
    fVar11 = param_1[3];
    fVar12 = param_1[4];
    fVar13 = param_1[5];
    fVar14 = param_1[7];
    fVar15 = param_1[8];
    fVar16 = param_1[9];
    fVar17 = param_1[10];
    fVar18 = param_4[0x22];
    fVar19 = param_1[0xb];
    fVar20 = param_4[0x21];
    param_2[1] = fVar9 * fVar7 + fVar8 * param_4[0x21] + fVar10 * param_4[0x22] +
                 fVar11 * param_4[0x23] + fVar12 * param_4[0x24] + fVar13 * param_4[0x25] +
                 param_2[1];
    fVar21 = param_1[6];
    *param_2 = fVar9 * fVar1 + fVar8 * fVar2 + fVar10 * fVar3 + fVar11 * fVar4 + fVar12 * fVar5 +
               fVar13 * fVar6 + *param_2;
    fVar8 = param_1[0xd];
    fVar9 = param_1[0xe];
    fVar10 = param_1[0xf];
    fVar11 = param_1[0x10];
    param_2[7] = fVar21 * fVar7 + fVar14 * fVar20 + fVar15 * fVar18 + fVar16 * param_4[0x23] +
                 fVar17 * param_4[0x24] + fVar19 * param_4[0x25] + param_2[7];
    fVar12 = param_1[0xc];
    param_2[6] = fVar21 * fVar1 + fVar14 * fVar2 + fVar15 * fVar3 + fVar16 * fVar4 + fVar17 * fVar5
                 + fVar19 * fVar6 + param_2[6];
    fVar13 = param_1[0x11];
    fVar14 = param_1[0x13];
    fVar15 = param_1[0x14];
    fVar16 = param_1[0x15];
    fVar17 = param_1[0x16];
    fVar18 = param_4[0x22];
    fVar19 = param_1[0x17];
    fVar20 = param_4[0x21];
    param_2[0xd] = fVar12 * fVar7 + fVar8 * param_4[0x21] + fVar9 * param_4[0x22] +
                   fVar10 * param_4[0x23] + fVar11 * param_4[0x24] + fVar13 * param_4[0x25] +
                   param_2[0xd];
    fVar21 = param_1[0x12];
    param_1 = param_1 + 0x18;
    param_2[0xc] = fVar12 * fVar1 + fVar8 * fVar2 + fVar9 * fVar3 + fVar10 * fVar4 + fVar11 * fVar5
                   + fVar13 * fVar6 + param_2[0xc];
    fVar8 = param_4[0x23];
    fVar9 = param_4[0x24];
    fVar10 = param_4[0x25];
    param_2[0x12] =
         fVar21 * fVar1 + fVar14 * fVar2 + fVar15 * fVar3 + fVar16 * fVar4 + fVar17 * fVar5 +
         fVar19 * fVar6 + param_2[0x12];
    param_2[0x13] =
         fVar21 * fVar7 + fVar14 * fVar20 + fVar15 * fVar18 + fVar16 * fVar8 + fVar17 * fVar9 +
         fVar19 * fVar10 + param_2[0x13];
    param_2 = param_2 + 0x18;
  }
  param_3 = param_3 & 3;
  if (param_3 != 0) {
    param_1 = param_1 + 2;
    do {
      fVar8 = param_1[-1];
      fVar9 = param_1[-2];
      fVar10 = *param_1;
      fVar11 = param_1[1];
      fVar12 = param_1[2];
      fVar13 = param_1[3];
      param_1 = param_1 + 6;
      param_2[1] = fVar9 * fVar7 + fVar8 * param_4[0x21] + fVar10 * param_4[0x22] +
                   fVar11 * param_4[0x23] + fVar12 * param_4[0x24] + fVar13 * param_4[0x25] +
                   param_2[1];
      *param_2 = fVar9 * fVar1 + fVar8 * fVar2 + fVar10 * fVar3 + fVar11 * fVar4 + fVar12 * fVar5 +
                 fVar13 * fVar6 + *param_2;
      param_2 = param_2 + 6;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}






// 函数: void FUN_1807dc3d0(int64_t param_1,float *param_2,uint param_3,float *param_4,uint64_t param_5,
void FUN_1807dc3d0(int64_t param_1,float *param_2,uint param_3,float *param_4,uint64_t param_5,
                  int param_6,int param_7)

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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint64_t uVar22;
  float *pfVar23;
  
  uVar22 = (uint64_t)param_3;
  if (param_7 == 0) {
    if (0 < (int)param_3) {
      pfVar23 = (float *)(param_1 + 8);
      fVar1 = *param_4;
      fVar2 = param_4[1];
      fVar3 = param_4[2];
      fVar4 = param_4[3];
      fVar5 = param_4[4];
      do {
        fVar6 = pfVar23[-2];
        fVar7 = pfVar23[-1];
        fVar8 = *pfVar23;
        fVar9 = pfVar23[1];
        fVar10 = pfVar23[2];
        fVar11 = pfVar23[3];
        fVar12 = pfVar23[4];
        fVar13 = pfVar23[5];
        fVar14 = param_4[0x22];
        fVar15 = param_4[0x21];
        *param_2 = fVar1 * fVar6 + *param_2 + fVar2 * fVar7 + fVar3 * fVar8 + fVar4 * fVar9 +
                   fVar5 * fVar10 + param_4[5] * fVar11 + param_4[6] * fVar12 + param_4[7] * fVar13;
        fVar16 = param_4[0x42];
        fVar17 = param_4[0x41];
        param_2[1] = fVar6 * param_4[0x20] + param_2[1] + fVar7 * fVar15 + fVar8 * fVar14 +
                     fVar9 * param_4[0x23] + fVar10 * param_4[0x24] + fVar11 * param_4[0x25] +
                     fVar12 * param_4[0x26] + fVar13 * param_4[0x27];
        fVar14 = param_4[0x62];
        fVar15 = param_4[0x61];
        param_2[2] = fVar6 * param_4[0x40] + param_2[2] + fVar7 * fVar17 + fVar8 * fVar16 +
                     fVar9 * param_4[0x43] + fVar10 * param_4[0x44] + fVar11 * param_4[0x45] +
                     fVar12 * param_4[0x46] + fVar13 * param_4[0x47];
        fVar16 = param_4[0x82];
        fVar17 = param_4[0x81];
        param_2[3] = fVar6 * param_4[0x60] + param_2[3] + fVar7 * fVar15 + fVar8 * fVar14 +
                     fVar9 * param_4[99] + fVar10 * param_4[100] + fVar11 * param_4[0x65] +
                     fVar12 * param_4[0x66] + fVar13 * param_4[0x67];
        fVar14 = param_4[0xa2];
        fVar15 = param_4[0xa1];
        param_2[4] = fVar6 * param_4[0x80] + param_2[4] + fVar7 * fVar17 + fVar8 * fVar16 +
                     fVar9 * param_4[0x83] + fVar10 * param_4[0x84] + fVar11 * param_4[0x85] +
                     fVar12 * param_4[0x86] + fVar13 * param_4[0x87];
        param_2[5] = fVar6 * param_4[0xa0] + param_2[5] + fVar7 * fVar15 + fVar8 * fVar14 +
                     fVar9 * param_4[0xa3] + fVar10 * param_4[0xa4] + fVar11 * param_4[0xa5] +
                     fVar12 * param_4[0xa6] + fVar13 * param_4[0xa7];
        fVar14 = param_4[0xe0];
        pfVar23 = pfVar23 + 8;
        fVar15 = param_4[0xe1];
        fVar16 = param_4[0xe2];
        fVar17 = param_4[0xe3];
        fVar18 = param_4[0xe4];
        fVar19 = param_4[0xe5];
        fVar20 = param_4[0xe6];
        fVar21 = param_4[0xe7];
        param_2[6] = fVar6 * param_4[0xc0] + param_2[6] + fVar7 * param_4[0xc1] +
                     fVar8 * param_4[0xc2] + fVar9 * param_4[0xc3] + fVar10 * param_4[0xc4] +
                     fVar11 * param_4[0xc5] + fVar12 * param_4[0xc6] + fVar13 * param_4[199];
        param_2[7] = fVar6 * fVar14 + param_2[7] + fVar7 * fVar15 + fVar8 * fVar16 + fVar9 * fVar17
                     + fVar10 * fVar18 + fVar11 * fVar19 + fVar12 * fVar20 + fVar13 * fVar21;
        param_2 = param_2 + 8;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
    return;
  }
                    // WARNING: Subroutine does not return
  memset(param_2,0,(uint64_t)(param_3 * param_6) << 2);
}






