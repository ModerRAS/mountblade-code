#include "TaleWorlds.Native.Split.h"

// 99_part_12_part030.c - 4 个函数

// 函数: void FUN_1807ddd40(float *param_1,float *param_2,int param_3,float *param_4,undefined8 param_5,
void FUN_1807ddd40(float *param_1,float *param_2,int param_3,float *param_4,undefined8 param_5,
                  undefined8 param_6,int param_7)

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
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  ulonglong uVar27;
  int iVar28;
  
  if (param_7 != 0) {
                    // WARNING: Subroutine does not return
    memset(param_2,0,(ulonglong)(uint)(param_3 * 6) << 2);
  }
  iVar28 = 0;
  if (3 < param_3) {
    fVar1 = param_4[1];
    fVar2 = *param_4;
    fVar3 = param_4[2];
    fVar4 = param_4[3];
    fVar5 = param_4[0x21];
    fVar6 = param_4[0x20];
    fVar7 = param_4[0x22];
    fVar8 = param_4[0x23];
    uVar26 = (param_3 - 4U >> 2) + 1;
    uVar27 = (ulonglong)uVar26;
    iVar28 = uVar26 * 4;
    do {
      fVar9 = param_1[1];
      fVar10 = *param_1;
      fVar11 = param_1[2];
      fVar12 = param_1[3];
      *param_2 = fVar2 * fVar10 + fVar9 * fVar1 + fVar11 * fVar3 + fVar12 * fVar4 + *param_2;
      fVar13 = param_4[0x40];
      fVar14 = param_4[0x42];
      fVar15 = param_4[0x41];
      fVar16 = param_4[0x43];
      param_2[1] = fVar10 * fVar6 + fVar9 * fVar5 + fVar11 * fVar7 + fVar12 * fVar8 + param_2[1];
      fVar17 = param_4[0x60];
      fVar18 = param_4[0x62];
      fVar19 = param_4[0x61];
      fVar20 = param_4[99];
      param_2[2] = fVar10 * fVar13 + fVar9 * fVar15 + fVar11 * fVar14 + fVar12 * fVar16 + param_2[2]
      ;
      fVar13 = param_4[0xa0];
      fVar14 = param_4[0x80];
      fVar15 = param_4[0xa2];
      fVar16 = param_4[0x82];
      fVar21 = param_4[0xa1];
      fVar22 = param_4[0x81];
      fVar23 = param_1[5];
      fVar24 = param_4[0xa3];
      fVar25 = param_4[0x83];
      param_2[3] = fVar10 * fVar17 + fVar9 * fVar19 + fVar11 * fVar18 + fVar12 * fVar20 + param_2[3]
      ;
      fVar17 = param_1[6];
      param_2[5] = fVar10 * fVar13 + fVar9 * fVar21 + fVar11 * fVar15 + fVar12 * fVar24 + param_2[5]
      ;
      fVar13 = param_1[4];
      param_2[4] = fVar10 * fVar14 + fVar9 * fVar22 + fVar11 * fVar16 + fVar12 * fVar25 + param_2[4]
      ;
      fVar9 = param_1[7];
      param_2[6] = fVar2 * fVar13 + fVar23 * fVar1 + fVar17 * fVar3 + fVar9 * fVar4 + param_2[6];
      fVar10 = param_4[0x40];
      fVar11 = param_4[0x42];
      fVar12 = param_4[0x41];
      fVar14 = param_4[0x43];
      param_2[7] = fVar13 * fVar6 + fVar23 * fVar5 + fVar17 * fVar7 + fVar9 * fVar8 + param_2[7];
      fVar15 = param_4[0x60];
      fVar16 = param_4[0x62];
      fVar18 = param_4[0x61];
      fVar19 = param_4[99];
      param_2[8] = fVar13 * fVar10 + fVar23 * fVar12 + fVar17 * fVar11 + fVar9 * fVar14 + param_2[8]
      ;
      fVar10 = param_4[0x80];
      fVar11 = param_4[0xa0];
      fVar12 = param_4[0xa2];
      fVar14 = param_4[0x82];
      fVar20 = param_4[0xa1];
      fVar21 = param_4[0x81];
      fVar22 = param_1[9];
      fVar24 = param_4[0xa3];
      fVar25 = param_4[0x83];
      param_2[9] = fVar13 * fVar15 + fVar23 * fVar18 + fVar17 * fVar16 + fVar9 * fVar19 + param_2[9]
      ;
      fVar15 = param_1[10];
      fVar16 = param_1[0xb];
      param_2[0xb] = fVar13 * fVar11 + fVar23 * fVar20 + fVar17 * fVar12 + fVar9 * fVar24 +
                     param_2[0xb];
      fVar11 = param_1[8];
      param_2[10] = fVar13 * fVar10 + fVar23 * fVar21 + fVar17 * fVar14 + fVar9 * fVar25 +
                    param_2[10];
      param_2[0xc] = fVar2 * fVar11 + fVar22 * fVar1 + fVar15 * fVar3 + fVar16 * fVar4 +
                     param_2[0xc];
      fVar9 = param_4[0x40];
      fVar10 = param_4[0x42];
      fVar12 = param_4[0x41];
      fVar13 = param_4[0x43];
      param_2[0xd] = fVar11 * fVar6 + fVar22 * fVar5 + fVar15 * fVar7 + fVar16 * fVar8 +
                     param_2[0xd];
      fVar14 = param_4[0x60];
      fVar17 = param_4[0x62];
      fVar18 = param_4[0x61];
      fVar19 = param_4[99];
      param_2[0xe] = fVar11 * fVar9 + fVar22 * fVar12 + fVar15 * fVar10 + fVar16 * fVar13 +
                     param_2[0xe];
      fVar9 = param_4[0x80];
      fVar10 = param_4[0xa0];
      fVar12 = param_4[0xa2];
      fVar13 = param_4[0x82];
      fVar20 = param_4[0xa1];
      fVar21 = param_4[0x81];
      fVar23 = param_1[0xd];
      fVar24 = param_4[0x83];
      fVar25 = param_4[0xa3];
      param_2[0xf] = fVar11 * fVar14 + fVar22 * fVar18 + fVar15 * fVar17 + fVar16 * fVar19 +
                     param_2[0xf];
      fVar14 = param_1[0xe];
      fVar17 = param_1[0xf];
      param_2[0x11] =
           fVar11 * fVar10 + fVar22 * fVar20 + fVar15 * fVar12 + fVar16 * fVar25 + param_2[0x11];
      fVar10 = param_1[0xc];
      param_2[0x10] =
           fVar11 * fVar9 + fVar22 * fVar21 + fVar15 * fVar13 + fVar16 * fVar24 + param_2[0x10];
      param_1 = param_1 + 0x10;
      param_2[0x12] =
           fVar23 * fVar1 + fVar2 * fVar10 + fVar14 * fVar3 + fVar17 * fVar4 + param_2[0x12];
      fVar9 = param_4[0x40];
      fVar11 = param_4[0x42];
      fVar12 = param_4[0x41];
      fVar13 = param_4[0x43];
      param_2[0x13] =
           fVar10 * fVar6 + fVar23 * fVar5 + fVar14 * fVar7 + fVar17 * fVar8 + param_2[0x13];
      fVar15 = param_4[0x60];
      fVar16 = param_4[0x62];
      fVar18 = param_4[0x61];
      fVar19 = param_4[99];
      param_2[0x14] =
           fVar10 * fVar9 + fVar23 * fVar12 + fVar14 * fVar11 + fVar17 * fVar13 + param_2[0x14];
      fVar9 = param_4[0x80];
      fVar11 = param_4[0xa0];
      fVar12 = param_4[0x82];
      fVar13 = param_4[0xa2];
      fVar20 = param_4[0xa1];
      fVar21 = param_4[0x81];
      fVar22 = param_4[0x83];
      fVar24 = param_4[0xa3];
      param_2[0x15] =
           fVar10 * fVar15 + fVar23 * fVar18 + fVar14 * fVar16 + fVar17 * fVar19 + param_2[0x15];
      param_2[0x17] =
           fVar10 * fVar11 + fVar23 * fVar20 + fVar14 * fVar13 + fVar17 * fVar24 + param_2[0x17];
      param_2[0x16] =
           fVar10 * fVar9 + fVar23 * fVar21 + fVar14 * fVar12 + fVar17 * fVar22 + param_2[0x16];
      param_2 = param_2 + 0x18;
      uVar27 = uVar27 - 1;
    } while (uVar27 != 0);
  }
  if (iVar28 < param_3) {
    fVar1 = param_4[1];
    param_2 = param_2 + 2;
    fVar2 = *param_4;
    param_1 = param_1 + 2;
    fVar3 = param_4[2];
    fVar4 = param_4[3];
    fVar5 = param_4[0x21];
    fVar6 = param_4[0x20];
    fVar7 = param_4[0x22];
    fVar8 = param_4[0x23];
    uVar27 = (ulonglong)(uint)(param_3 - iVar28);
    do {
      fVar9 = param_1[-1];
      fVar10 = param_1[-2];
      fVar11 = *param_1;
      fVar12 = param_1[1];
      param_1 = param_1 + 4;
      param_2[-2] = fVar9 * fVar1 + fVar2 * fVar10 + fVar11 * fVar3 + fVar12 * fVar4 + param_2[-2];
      fVar13 = param_4[0x40];
      fVar14 = param_4[0x42];
      fVar15 = param_4[0x41];
      fVar16 = param_4[0x43];
      param_2[-1] = fVar10 * fVar6 + fVar9 * fVar5 + fVar11 * fVar7 + fVar12 * fVar8 + param_2[-1];
      fVar17 = param_4[0x60];
      fVar18 = param_4[0x62];
      fVar19 = param_4[0x61];
      fVar20 = param_4[99];
      *param_2 = fVar10 * fVar13 + fVar9 * fVar15 + fVar11 * fVar14 + fVar12 * fVar16 + *param_2;
      fVar13 = param_4[0x80];
      fVar14 = param_4[0xa0];
      fVar15 = param_4[0x82];
      fVar16 = param_4[0xa2];
      fVar21 = param_4[0xa1];
      fVar22 = param_4[0x81];
      fVar23 = param_4[0x83];
      fVar24 = param_4[0xa3];
      param_2[1] = fVar10 * fVar17 + fVar9 * fVar19 + fVar11 * fVar18 + fVar12 * fVar20 + param_2[1]
      ;
      param_2[3] = fVar10 * fVar14 + fVar9 * fVar21 + fVar11 * fVar16 + fVar12 * fVar24 + param_2[3]
      ;
      param_2[2] = fVar10 * fVar13 + fVar9 * fVar22 + fVar11 * fVar15 + fVar12 * fVar23 + param_2[2]
      ;
      param_2 = param_2 + 6;
      uVar27 = uVar27 - 1;
    } while (uVar27 != 0);
  }
  return;
}






// 函数: void FUN_1807de660(float *param_1,float *param_2,uint param_3,float *param_4,undefined8 param_5,
void FUN_1807de660(float *param_1,float *param_2,uint param_3,float *param_4,undefined8 param_5,
                  undefined8 param_6,int param_7)

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
  uint uVar17;
  
  fVar1 = param_4[0xa1];
  fVar2 = *param_4;
  fVar3 = param_4[0x21];
  fVar4 = param_4[0x20];
  fVar5 = param_4[0x40];
  fVar6 = param_4[0x60];
  fVar7 = param_4[0x80];
  fVar8 = param_4[0x81];
  fVar9 = param_4[0xa0];
  fVar10 = param_4[0x41];
  fVar11 = param_4[0x61];
  if ((((((2e-05 <= ABS(param_4[1])) || (2e-05 <= ABS(fVar4))) || (2e-05 <= ABS(fVar5))) ||
       ((2e-05 <= ABS(fVar10) || (2e-05 <= ABS(fVar6))))) ||
      ((2e-05 <= ABS(fVar11) || ((2e-05 <= ABS(fVar7) || (2e-05 <= ABS(fVar8))))))) ||
     ((2e-05 <= ABS(fVar9) || (2e-05 <= ABS(fVar1))))) {
    if (param_7 == 0) {
      for (uVar17 = param_3 >> 1; uVar17 != 0; uVar17 = uVar17 - 1) {
        fVar12 = *param_1;
        fVar13 = param_1[1];
        *param_2 = fVar13 * param_4[1] + fVar12 * fVar2 + *param_2;
        param_2[1] = fVar13 * fVar3 + fVar12 * fVar4 + param_2[1];
        param_2[2] = fVar13 * fVar10 + fVar12 * fVar5 + param_2[2];
        fVar14 = param_1[3];
        param_2[3] = fVar13 * fVar11 + fVar12 * fVar6 + param_2[3];
        fVar15 = param_1[2];
        param_2[4] = fVar13 * fVar8 + fVar12 * fVar7 + param_2[4];
        fVar16 = param_4[1];
        param_2[5] = fVar13 * fVar1 + fVar12 * fVar9 + param_2[5];
        param_2[6] = fVar14 * fVar16 + fVar15 * fVar2 + param_2[6];
        param_2[7] = fVar14 * fVar3 + fVar15 * fVar4 + param_2[7];
        param_2[8] = fVar14 * fVar10 + fVar15 * fVar5 + param_2[8];
        fVar12 = param_4[0xa1];
        param_2[9] = fVar14 * fVar11 + fVar15 * fVar6 + param_2[9];
        param_2[10] = fVar14 * fVar8 + fVar15 * fVar7 + param_2[10];
        param_1 = param_1 + 4;
        param_2[0xb] = fVar14 * fVar12 + fVar15 * fVar9 + param_2[0xb];
        param_2 = param_2 + 0xc;
      }
      param_3 = param_3 & 1;
      if (param_3 != 0) {
        param_2 = param_2 + 2;
        do {
          fVar12 = param_1[1];
          fVar13 = *param_1;
          param_1 = param_1 + 2;
          param_2[-2] = fVar12 * param_4[1] + fVar13 * fVar2 + param_2[-2];
          param_2[-1] = fVar12 * fVar3 + fVar13 * fVar4 + param_2[-1];
          *param_2 = fVar12 * fVar10 + fVar13 * fVar5 + *param_2;
          param_2[1] = fVar12 * fVar11 + fVar13 * fVar6 + param_2[1];
          param_2[2] = fVar12 * fVar8 + fVar13 * fVar7 + param_2[2];
          param_2[3] = fVar12 * fVar1 + fVar13 * fVar9 + param_2[3];
          param_2 = param_2 + 6;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
      }
    }
    else {
      for (uVar17 = param_3 >> 1; uVar17 != 0; uVar17 = uVar17 - 1) {
        fVar12 = *param_1;
        fVar13 = param_1[1];
        *param_2 = fVar13 * param_4[1] + fVar12 * fVar2;
        param_2[1] = fVar13 * fVar3 + fVar12 * fVar4;
        param_2[2] = fVar13 * fVar10 + fVar12 * fVar5;
        param_2[3] = fVar13 * fVar11 + fVar12 * fVar6;
        fVar14 = param_1[3];
        param_2[4] = fVar13 * fVar8 + fVar12 * fVar7;
        fVar15 = param_1[2];
        fVar16 = param_4[1];
        param_1 = param_1 + 4;
        param_2[5] = fVar13 * fVar1 + fVar12 * fVar9;
        param_2[6] = fVar14 * fVar16 + fVar15 * fVar2;
        param_2[7] = fVar14 * fVar3 + fVar15 * fVar4;
        param_2[8] = fVar14 * fVar10 + fVar15 * fVar5;
        fVar12 = param_4[0xa1];
        param_2[9] = fVar14 * fVar11 + fVar15 * fVar6;
        param_2[10] = fVar14 * fVar8 + fVar15 * fVar7;
        param_2[0xb] = fVar14 * fVar12 + fVar15 * fVar9;
        param_2 = param_2 + 0xc;
      }
      param_3 = param_3 & 1;
      if (param_3 != 0) {
        param_2 = param_2 + 2;
        do {
          fVar12 = param_1[1];
          fVar13 = *param_1;
          param_1 = param_1 + 2;
          param_2[-2] = fVar12 * param_4[1] + fVar13 * fVar2;
          param_2[-1] = fVar12 * fVar3 + fVar13 * fVar4;
          *param_2 = fVar12 * fVar10 + fVar13 * fVar5;
          param_2[1] = fVar12 * fVar11 + fVar13 * fVar6;
          param_2[2] = fVar12 * fVar8 + fVar13 * fVar7;
          param_2[3] = fVar12 * fVar1 + fVar13 * fVar9;
          param_2 = param_2 + 6;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
      }
    }
  }
  else {
    if (param_7 != 0) {
                    // WARNING: Subroutine does not return
      memset(param_2,0,(ulonglong)(param_3 * 6) << 2);
    }
    for (uVar17 = param_3 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      fVar1 = param_1[1];
      *param_2 = fVar2 * *param_1 + *param_2;
      fVar4 = param_1[2];
      param_2[1] = fVar3 * fVar1 + param_2[1];
      fVar1 = param_1[3];
      param_2[6] = fVar2 * fVar4 + param_2[6];
      fVar4 = param_1[4];
      param_2[7] = fVar3 * fVar1 + param_2[7];
      fVar1 = param_1[5];
      param_2[0xc] = fVar2 * fVar4 + param_2[0xc];
      fVar4 = param_1[6];
      param_2[0xd] = fVar3 * fVar1 + param_2[0xd];
      fVar1 = param_1[7];
      param_1 = param_1 + 8;
      param_2[0x12] = fVar2 * fVar4 + param_2[0x12];
      param_2[0x13] = fVar3 * fVar1 + param_2[0x13];
      param_2 = param_2 + 0x18;
    }
    for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
      fVar1 = *param_1;
      fVar4 = param_1[1];
      param_1 = param_1 + 2;
      *param_2 = fVar2 * fVar1 + *param_2;
      param_2[1] = fVar3 * fVar4 + param_2[1];
      param_2 = param_2 + 6;
    }
  }
  return;
}






// 函数: void FUN_1807dedd0(float *param_1,float *param_2,uint param_3,float *param_4,undefined8 param_5,
void FUN_1807dedd0(float *param_1,float *param_2,uint param_3,float *param_4,undefined8 param_5,
                  undefined8 param_6,int param_7)

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
  uint uVar18;
  
  fVar1 = param_4[0x61];
  fVar2 = *param_4;
  fVar3 = param_4[0x21];
  fVar4 = param_4[0x20];
  fVar5 = param_4[0x40];
  fVar6 = param_4[0x60];
  fVar7 = param_4[0x41];
  fVar8 = param_4[0x80];
  fVar9 = param_4[0xa0];
  fVar10 = param_4[0xc0];
  fVar11 = param_4[0xe0];
  if (((((2e-05 <= ABS(param_4[1])) || (2e-05 <= ABS(fVar4))) || (2e-05 <= ABS(fVar5))) ||
      ((((2e-05 <= ABS(fVar7) || (2e-05 <= ABS(fVar6))) ||
        ((2e-05 <= ABS(fVar1) || ((2e-05 <= ABS(fVar8) || (2e-05 <= ABS(param_4[0x81]))))))) ||
       (2e-05 <= ABS(fVar9))))) ||
     ((((2e-05 <= ABS(param_4[0xa1]) || (2e-05 <= ABS(fVar10))) || (2e-05 <= ABS(param_4[0xc1]))) ||
      ((2e-05 <= ABS(fVar11) || (2e-05 <= ABS(param_4[0xe1]))))))) {
    if (param_7 != 0) {
                    // WARNING: Subroutine does not return
      memset(param_2,0,(ulonglong)(param_3 * 8) << 2);
    }
    for (uVar18 = param_3 >> 1; uVar18 != 0; uVar18 = uVar18 - 1) {
      fVar12 = *param_1;
      fVar13 = param_1[1];
      *param_2 = fVar13 * param_4[1] + fVar12 * fVar2 + *param_2;
      param_2[1] = fVar13 * fVar3 + fVar12 * fVar4 + param_2[1];
      fVar14 = param_1[3];
      param_2[2] = fVar13 * fVar7 + fVar12 * fVar5 + param_2[2];
      fVar15 = param_4[0x81];
      param_2[3] = fVar13 * fVar1 + fVar12 * fVar6 + param_2[3];
      fVar16 = param_4[0xa1];
      param_2[4] = fVar13 * fVar15 + fVar12 * fVar8 + param_2[4];
      fVar15 = param_4[0xc1];
      fVar17 = param_4[0xe1];
      param_2[5] = fVar13 * fVar16 + fVar12 * fVar9 + param_2[5];
      fVar16 = param_1[2];
      param_2[6] = fVar13 * fVar15 + fVar12 * fVar10 + param_2[6];
      fVar15 = param_4[1];
      param_2[7] = fVar13 * fVar17 + fVar12 * fVar11 + param_2[7];
      param_2[8] = fVar14 * fVar15 + fVar16 * fVar2 + param_2[8];
      param_2[9] = fVar14 * fVar3 + fVar16 * fVar4 + param_2[9];
      fVar12 = param_4[0x61];
      param_2[10] = fVar14 * fVar7 + fVar16 * fVar5 + param_2[10];
      fVar13 = param_4[0x81];
      param_1 = param_1 + 4;
      param_2[0xb] = fVar14 * fVar12 + fVar16 * fVar6 + param_2[0xb];
      fVar12 = param_4[0xa1];
      param_2[0xc] = fVar14 * fVar13 + fVar16 * fVar8 + param_2[0xc];
      fVar13 = param_4[0xc1];
      fVar15 = param_4[0xe1];
      param_2[0xd] = fVar14 * fVar12 + fVar16 * fVar9 + param_2[0xd];
      param_2[0xe] = fVar14 * fVar13 + fVar16 * fVar10 + param_2[0xe];
      param_2[0xf] = fVar14 * fVar15 + fVar16 * fVar11 + param_2[0xf];
      param_2 = param_2 + 0x10;
    }
    param_3 = param_3 & 1;
    if (param_3 != 0) {
      param_2 = param_2 + 2;
      do {
        fVar1 = *param_1;
        fVar12 = param_1[1];
        param_1 = param_1 + 2;
        param_2[-2] = fVar12 * param_4[1] + fVar1 * fVar2 + param_2[-2];
        param_2[-1] = fVar12 * fVar3 + fVar1 * fVar4 + param_2[-1];
        fVar13 = param_4[0x61];
        *param_2 = fVar12 * fVar7 + fVar1 * fVar5 + *param_2;
        fVar14 = param_4[0x81];
        param_2[1] = fVar12 * fVar13 + fVar1 * fVar6 + param_2[1];
        fVar13 = param_4[0xa1];
        param_2[2] = fVar12 * fVar14 + fVar1 * fVar8 + param_2[2];
        fVar14 = param_4[0xc1];
        fVar15 = param_4[0xe1];
        param_2[3] = fVar12 * fVar13 + fVar1 * fVar9 + param_2[3];
        param_2[4] = fVar12 * fVar14 + fVar1 * fVar10 + param_2[4];
        param_2[5] = fVar12 * fVar15 + fVar1 * fVar11 + param_2[5];
        param_2 = param_2 + 8;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
  }
  else {
    if (param_7 != 0) {
                    // WARNING: Subroutine does not return
      memset(param_2,0,(ulonglong)(param_3 * 8) << 2);
    }
    for (uVar18 = param_3 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      fVar1 = param_1[1];
      *param_2 = fVar2 * *param_1 + *param_2;
      fVar4 = param_1[2];
      param_2[1] = fVar3 * fVar1 + param_2[1];
      fVar1 = param_1[3];
      param_2[8] = fVar2 * fVar4 + param_2[8];
      fVar4 = param_1[4];
      param_2[9] = fVar3 * fVar1 + param_2[9];
      fVar1 = param_1[5];
      param_2[0x10] = fVar2 * fVar4 + param_2[0x10];
      fVar4 = param_1[6];
      param_2[0x11] = fVar3 * fVar1 + param_2[0x11];
      fVar1 = param_1[7];
      param_1 = param_1 + 8;
      param_2[0x18] = fVar2 * fVar4 + param_2[0x18];
      param_2[0x19] = fVar3 * fVar1 + param_2[0x19];
      param_2 = param_2 + 0x20;
    }
    for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
      fVar1 = *param_1;
      fVar4 = param_1[1];
      param_1 = param_1 + 2;
      *param_2 = fVar2 * fVar1 + *param_2;
      param_2[1] = fVar3 * fVar4 + param_2[1];
      param_2 = param_2 + 8;
    }
  }
  return;
}






// 函数: void FUN_1807df470(float *param_1,float *param_2,uint param_3,float *param_4,undefined8 param_5,
void FUN_1807df470(float *param_1,float *param_2,uint param_3,float *param_4,undefined8 param_5,
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
  uint uVar9;
  longlong lVar10;
  
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar3 = param_4[0x20];
  fVar4 = param_4[0x21];
  if (param_7 == 0) {
    for (uVar9 = param_3 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      fVar5 = param_1[1];
      fVar6 = *param_1;
      fVar7 = param_1[2];
      fVar8 = param_1[3];
      *param_2 = fVar6 * fVar1 + fVar5 * fVar2 + *param_2;
      param_2[1] = fVar6 * fVar3 + fVar5 * fVar4 + param_2[1];
      fVar5 = param_1[4];
      fVar6 = param_1[5];
      param_2[2] = fVar7 * fVar1 + fVar8 * fVar2 + param_2[2];
      param_2[3] = fVar7 * fVar3 + fVar8 * fVar4 + param_2[3];
      fVar7 = param_1[6];
      fVar8 = param_1[7];
      param_1 = param_1 + 8;
      param_2[4] = fVar5 * fVar1 + fVar6 * fVar2 + param_2[4];
      param_2[5] = fVar5 * fVar3 + fVar6 * fVar4 + param_2[5];
      param_2[6] = fVar7 * fVar1 + fVar8 * fVar2 + param_2[6];
      param_2[7] = fVar7 * fVar3 + fVar8 * fVar4 + param_2[7];
      param_2 = param_2 + 8;
    }
    param_3 = param_3 & 3;
    if (param_3 != 0) {
      lVar10 = (longlong)param_1 - (longlong)param_2;
      do {
        fVar5 = *(float *)(lVar10 + 4 + (longlong)param_2);
        fVar6 = *(float *)(lVar10 + (longlong)param_2);
        *param_2 = fVar5 * fVar2 + fVar6 * fVar1 + *param_2;
        param_2[1] = fVar5 * fVar4 + fVar6 * fVar3 + param_2[1];
        param_2 = param_2 + 2;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
    return;
  }
                    // WARNING: Subroutine does not return
  memset(param_2,0,(ulonglong)(param_3 * param_6) << 2);
}






