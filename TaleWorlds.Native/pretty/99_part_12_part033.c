#include "TaleWorlds.Native.Split.h"

// 99_part_12_part033.c - 5 个函数

// 函数: void FUN_1807e0930(float *param_1,float *param_2,uint param_3,float *param_4,undefined8 param_5,
void FUN_1807e0930(float *param_1,float *param_2,uint param_3,float *param_4,undefined8 param_5,
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
  float *pfVar18;
  
  fVar1 = param_4[0x60];
  fVar2 = param_4[0x40];
  fVar3 = param_4[0x20];
  fVar4 = *param_4;
  fVar5 = param_4[0xe0];
  fVar6 = param_4[0x80];
  fVar7 = param_4[0xc0];
  fVar8 = param_4[0xa0];
  uVar17 = param_3 >> 2;
  if (param_7 == 0) {
    if (param_3 >> 2 != 0) {
      pfVar18 = param_2 + 8;
      do {
        fVar9 = *param_1;
        fVar10 = param_1[1];
        fVar11 = param_1[2];
        fVar12 = param_1[3];
        param_1 = param_1 + 4;
        fVar13 = pfVar18[-4];
        fVar14 = pfVar18[-3];
        fVar15 = pfVar18[-2];
        fVar16 = pfVar18[-1];
        *param_2 = fVar9 * fVar4 + *param_2;
        param_2[1] = fVar9 * fVar3 + param_2[1];
        param_2[2] = fVar9 * fVar2 + param_2[2];
        param_2[3] = fVar9 * fVar1 + param_2[3];
        param_2 = param_2 + 0x20;
        pfVar18[-4] = fVar9 * fVar6 + fVar13;
        pfVar18[-3] = fVar9 * fVar8 + fVar14;
        pfVar18[-2] = fVar9 * fVar7 + fVar15;
        pfVar18[-1] = fVar9 * fVar5 + fVar16;
        *pfVar18 = fVar10 * fVar4 + *pfVar18;
        pfVar18[1] = fVar10 * fVar3 + pfVar18[1];
        pfVar18[2] = fVar10 * fVar2 + pfVar18[2];
        pfVar18[3] = fVar10 * fVar1 + pfVar18[3];
        pfVar18[4] = fVar10 * fVar6 + pfVar18[4];
        pfVar18[5] = fVar10 * fVar8 + pfVar18[5];
        pfVar18[6] = fVar10 * fVar7 + pfVar18[6];
        pfVar18[7] = fVar10 * fVar5 + pfVar18[7];
        pfVar18[8] = fVar11 * fVar4 + pfVar18[8];
        pfVar18[9] = fVar11 * fVar3 + pfVar18[9];
        pfVar18[10] = fVar11 * fVar2 + pfVar18[10];
        pfVar18[0xb] = fVar11 * fVar1 + pfVar18[0xb];
        pfVar18[0xc] = fVar11 * fVar6 + pfVar18[0xc];
        pfVar18[0xd] = fVar11 * fVar8 + pfVar18[0xd];
        pfVar18[0xe] = fVar11 * fVar7 + pfVar18[0xe];
        pfVar18[0xf] = fVar11 * fVar5 + pfVar18[0xf];
        pfVar18[0x10] = fVar12 * fVar4 + pfVar18[0x10];
        pfVar18[0x11] = fVar12 * fVar3 + pfVar18[0x11];
        pfVar18[0x12] = fVar12 * fVar2 + pfVar18[0x12];
        pfVar18[0x13] = fVar12 * fVar1 + pfVar18[0x13];
        pfVar18[0x14] = fVar12 * fVar6 + pfVar18[0x14];
        pfVar18[0x15] = fVar12 * fVar8 + pfVar18[0x15];
        pfVar18[0x16] = fVar12 * fVar7 + pfVar18[0x16];
        pfVar18[0x17] = fVar12 * fVar5 + pfVar18[0x17];
        pfVar18 = pfVar18 + 0x20;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
      fVar9 = *param_1;
      param_1 = param_1 + 1;
      *param_2 = fVar9 * fVar4 + *param_2;
      param_2[1] = fVar9 * fVar3 + param_2[1];
      param_2[2] = fVar9 * fVar2 + param_2[2];
      param_2[3] = fVar9 * fVar1 + param_2[3];
      param_2[4] = fVar9 * fVar6 + param_2[4];
      param_2[5] = fVar9 * fVar8 + param_2[5];
      param_2[6] = fVar9 * fVar7 + param_2[6];
      param_2[7] = fVar9 * fVar5 + param_2[7];
      param_2 = param_2 + 8;
    }
  }
  else {
    for (uVar17 = param_3 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      fVar9 = *param_1;
      fVar10 = param_1[1];
      fVar11 = param_1[2];
      fVar12 = param_1[3];
      param_1 = param_1 + 4;
      *param_2 = fVar9 * fVar4;
      param_2[1] = fVar9 * fVar3;
      param_2[2] = fVar9 * fVar2;
      param_2[3] = fVar9 * fVar1;
      param_2[4] = fVar9 * fVar6;
      param_2[5] = fVar9 * fVar8;
      param_2[6] = fVar9 * fVar7;
      param_2[7] = fVar9 * fVar5;
      param_2[8] = fVar10 * fVar4;
      param_2[9] = fVar10 * fVar3;
      param_2[10] = fVar10 * fVar2;
      param_2[0xb] = fVar10 * fVar1;
      param_2[0xc] = fVar10 * fVar6;
      param_2[0xd] = fVar10 * fVar8;
      param_2[0xe] = fVar10 * fVar7;
      param_2[0xf] = fVar10 * fVar5;
      param_2[0x10] = fVar11 * fVar4;
      param_2[0x11] = fVar11 * fVar3;
      param_2[0x12] = fVar11 * fVar2;
      param_2[0x13] = fVar11 * fVar1;
      param_2[0x14] = fVar11 * fVar6;
      param_2[0x15] = fVar11 * fVar8;
      param_2[0x16] = fVar11 * fVar7;
      param_2[0x17] = fVar11 * fVar5;
      param_2[0x18] = fVar12 * fVar4;
      param_2[0x19] = fVar12 * fVar3;
      param_2[0x1a] = fVar12 * fVar2;
      param_2[0x1b] = fVar12 * fVar1;
      param_2[0x1c] = fVar12 * fVar6;
      param_2[0x1d] = fVar12 * fVar8;
      param_2[0x1e] = fVar12 * fVar7;
      param_2[0x1f] = fVar12 * fVar5;
      param_2 = param_2 + 0x20;
    }
    param_3 = param_3 & 3;
    if (param_3 != 0) {
      do {
        fVar9 = *param_1;
        param_1 = param_1 + 1;
        *param_2 = fVar9 * fVar4;
        param_2[1] = fVar9 * fVar3;
        param_2[2] = fVar9 * fVar2;
        param_2[3] = fVar9 * fVar1;
        param_2[4] = fVar9 * fVar6;
        param_2[5] = fVar9 * fVar8;
        param_2[6] = fVar9 * fVar7;
        param_2[7] = fVar9 * fVar5;
        param_3 = param_3 - 1;
        param_2 = param_2 + 8;
      } while (param_3 != 0);
      return;
    }
  }
  return;
}






// 函数: void FUN_1807e0cf0(float *param_1,longlong param_2,uint param_3,float *param_4,undefined8 param_5,
void FUN_1807e0cf0(float *param_1,longlong param_2,uint param_3,float *param_4,undefined8 param_5,
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
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  uint uVar33;
  float *pfVar34;
  float *pfVar35;
  
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar3 = param_4[2];
  fVar4 = param_4[3];
  fVar5 = param_4[0x20];
  fVar6 = param_4[0x21];
  fVar7 = param_4[0x22];
  fVar8 = param_4[0x23];
  fVar9 = param_4[0x40];
  fVar10 = param_4[0x41];
  fVar11 = param_4[0x42];
  fVar12 = param_4[0x43];
  fVar13 = param_4[0x60];
  fVar14 = param_4[0x61];
  fVar15 = param_4[0x62];
  fVar16 = param_4[99];
  fVar17 = param_4[0x80];
  fVar18 = param_4[0x81];
  fVar19 = param_4[0x82];
  fVar20 = param_4[0x83];
  fVar21 = param_4[0xa0];
  fVar22 = param_4[0xa1];
  fVar23 = param_4[0xa2];
  fVar24 = param_4[0xa3];
  if (param_7 != 0) {
                    // WARNING: Subroutine does not return
    memset(param_2,0,(ulonglong)(param_3 * 6) << 2);
  }
  uVar33 = param_3 >> 1;
  if (uVar33 != 0) {
    pfVar34 = (float *)(param_2 + 0x20);
    pfVar35 = param_1;
    do {
      fVar25 = *pfVar35;
      fVar26 = pfVar35[1];
      fVar27 = pfVar35[2];
      fVar28 = pfVar35[3];
      fVar29 = pfVar35[4];
      fVar30 = pfVar35[5];
      fVar31 = pfVar35[6];
      fVar32 = pfVar35[7];
      pfVar35 = pfVar35 + 8;
      pfVar34[-8] = fVar25 * fVar1 + pfVar34[-8] + fVar26 * fVar2 + fVar27 * fVar3 + fVar28 * fVar4;
      pfVar34[-7] = fVar25 * fVar5 + pfVar34[-7] + fVar26 * fVar6 + fVar27 * fVar7 + fVar28 * fVar8;
      pfVar34[-6] = fVar25 * fVar9 + pfVar34[-6] + fVar26 * fVar10 + fVar27 * fVar11 +
                    fVar28 * fVar12;
      pfVar34[-5] = fVar25 * fVar13 + pfVar34[-5] + fVar26 * fVar14 + fVar27 * fVar15 +
                    fVar28 * fVar16;
      pfVar34[-4] = fVar25 * fVar17 + pfVar34[-4] + fVar26 * fVar18 + fVar27 * fVar19 +
                    fVar28 * fVar20;
      pfVar34[-3] = fVar25 * fVar21 + pfVar34[-3] + fVar26 * fVar22 + fVar27 * fVar23 +
                    fVar28 * fVar24;
      pfVar34[-2] = fVar29 * fVar1 + pfVar34[-2] + fVar30 * fVar2 + fVar31 * fVar3 + fVar32 * fVar4;
      pfVar34[-1] = fVar29 * fVar5 + pfVar34[-1] + fVar30 * fVar6 + fVar31 * fVar7 + fVar32 * fVar8;
      *pfVar34 = fVar29 * fVar9 + *pfVar34 + fVar30 * fVar10 + fVar31 * fVar11 + fVar32 * fVar12;
      pfVar34[1] = fVar29 * fVar13 + pfVar34[1] + fVar30 * fVar14 + fVar31 * fVar15 +
                   fVar32 * fVar16;
      pfVar34[2] = fVar29 * fVar17 + pfVar34[2] + fVar30 * fVar18 + fVar31 * fVar19 +
                   fVar32 * fVar20;
      pfVar34[3] = fVar29 * fVar21 + pfVar34[3] + fVar30 * fVar22 + fVar31 * fVar23 +
                   fVar32 * fVar24;
      pfVar34 = pfVar34 + 0xc;
      uVar33 = uVar33 - 1;
    } while (uVar33 != 0);
  }
  param_3 = param_3 & 1;
  if (param_3 != 0) {
    fVar1 = param_4[1];
    pfVar34 = (float *)(param_2 + 8);
    fVar2 = *param_4;
    param_1 = param_1 + 2;
    fVar3 = param_4[2];
    fVar4 = param_4[3];
    fVar5 = param_4[0x21];
    fVar6 = param_4[0x20];
    fVar7 = param_4[0x22];
    fVar8 = param_4[0x23];
    do {
      fVar9 = param_1[-1];
      fVar10 = param_1[-2];
      fVar11 = *param_1;
      fVar12 = param_1[1];
      param_1 = param_1 + 4;
      pfVar34[-2] = fVar9 * fVar1 + fVar10 * fVar2 + fVar11 * fVar3 + fVar12 * fVar4 + pfVar34[-2];
      fVar13 = param_4[0x40];
      fVar14 = param_4[0x42];
      fVar15 = param_4[0x41];
      fVar16 = param_4[0x43];
      pfVar34[-1] = fVar10 * fVar6 + fVar9 * fVar5 + fVar11 * fVar7 + fVar12 * fVar8 + pfVar34[-1];
      fVar17 = param_4[0x60];
      fVar18 = param_4[0x62];
      fVar19 = param_4[0x61];
      fVar20 = param_4[99];
      *pfVar34 = fVar10 * fVar13 + fVar9 * fVar15 + fVar11 * fVar14 + fVar12 * fVar16 + *pfVar34;
      fVar13 = param_4[0x80];
      fVar14 = param_4[0xa0];
      fVar15 = param_4[0x82];
      fVar16 = param_4[0xa2];
      fVar21 = param_4[0xa1];
      fVar22 = param_4[0x81];
      fVar23 = param_4[0x83];
      fVar24 = param_4[0xa3];
      pfVar34[1] = fVar10 * fVar17 + fVar9 * fVar19 + fVar11 * fVar18 + fVar12 * fVar20 + pfVar34[1]
      ;
      pfVar34[3] = fVar10 * fVar14 + fVar9 * fVar21 + fVar11 * fVar16 + fVar12 * fVar24 + pfVar34[3]
      ;
      pfVar34[2] = fVar10 * fVar13 + fVar9 * fVar22 + fVar11 * fVar15 + fVar12 * fVar23 + pfVar34[2]
      ;
      pfVar34 = pfVar34 + 6;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}






// 函数: void FUN_1807e0d55(float *param_1,undefined8 param_2,undefined8 param_3)
void FUN_1807e0d55(float *param_1,undefined8 param_2,undefined8 param_3)

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
  uint uVar24;
  longlong in_RAX;
  float *pfVar25;
  float *pfVar26;
  float *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  uint unaff_EDI;
  int in_R8D;
  undefined8 unaff_R14;
  bool in_ZF;
  undefined4 in_XMM0_Da;
  float fVar27;
  float in_XMM2_Dc;
  float in_XMM2_Dd;
  float in_XMM4_Da;
  float in_XMM4_Db;
  float in_XMM4_Dc;
  float in_XMM4_Dd;
  float in_XMM5_Da;
  float in_XMM5_Db;
  float in_XMM5_Dc;
  float in_XMM5_Dd;
  float unaff_XMM6_Da;
  float unaff_XMM6_Db;
  float unaff_XMM6_Dc;
  float unaff_XMM6_Dd;
  float unaff_XMM9_Da;
  float unaff_XMM9_Db;
  float unaff_XMM9_Dc;
  float unaff_XMM9_Dd;
  float unaff_XMM11_Da;
  float unaff_XMM11_Db;
  float unaff_XMM11_Dc;
  float unaff_XMM11_Dd;
  
  fVar27 = (float)((ulonglong)param_3 >> 0x20);
  *(undefined8 *)(in_RAX + 8) = unaff_R14;
  if (!in_ZF) {
                    // WARNING: Subroutine does not return
    memset(in_XMM0_Da,0,(ulonglong)(uint)(in_R8D * 6) << 2);
  }
  uVar24 = unaff_EDI >> 1;
  if (uVar24 != 0) {
    pfVar25 = (float *)(unaff_RSI + 0x20);
    do {
      fVar1 = *param_1;
      fVar2 = param_1[1];
      fVar3 = param_1[2];
      fVar4 = param_1[3];
      fVar5 = param_1[4];
      fVar6 = param_1[5];
      fVar7 = param_1[6];
      fVar8 = param_1[7];
      param_1 = param_1 + 8;
      pfVar25[-8] = fVar1 * (float)param_3 + pfVar25[-8] + fVar2 * fVar27 + fVar3 * in_XMM2_Dc +
                    fVar4 * in_XMM2_Dd;
      pfVar25[-7] = fVar1 * in_XMM4_Da + pfVar25[-7] + fVar2 * in_XMM4_Db + fVar3 * in_XMM4_Dc +
                    fVar4 * in_XMM4_Dd;
      pfVar25[-6] = fVar1 * in_XMM5_Da + pfVar25[-6] + fVar2 * in_XMM5_Db + fVar3 * in_XMM5_Dc +
                    fVar4 * in_XMM5_Dd;
      pfVar25[-5] = fVar1 * unaff_XMM6_Da + pfVar25[-5] + fVar2 * unaff_XMM6_Db +
                    fVar3 * unaff_XMM6_Dc + fVar4 * unaff_XMM6_Dd;
      pfVar25[-4] = fVar1 * unaff_XMM9_Da + pfVar25[-4] + fVar2 * unaff_XMM9_Db +
                    fVar3 * unaff_XMM9_Dc + fVar4 * unaff_XMM9_Dd;
      pfVar25[-3] = fVar1 * unaff_XMM11_Da + pfVar25[-3] + fVar2 * unaff_XMM11_Db +
                    fVar3 * unaff_XMM11_Dc + fVar4 * unaff_XMM11_Dd;
      pfVar25[-2] = fVar5 * (float)param_3 + pfVar25[-2] + fVar6 * fVar27 + fVar7 * in_XMM2_Dc +
                    fVar8 * in_XMM2_Dd;
      pfVar25[-1] = fVar5 * in_XMM4_Da + pfVar25[-1] + fVar6 * in_XMM4_Db + fVar7 * in_XMM4_Dc +
                    fVar8 * in_XMM4_Dd;
      *pfVar25 = fVar5 * in_XMM5_Da + *pfVar25 + fVar6 * in_XMM5_Db + fVar7 * in_XMM5_Dc +
                 fVar8 * in_XMM5_Dd;
      pfVar25[1] = fVar5 * unaff_XMM6_Da + pfVar25[1] + fVar6 * unaff_XMM6_Db +
                   fVar7 * unaff_XMM6_Dc + fVar8 * unaff_XMM6_Dd;
      pfVar25[2] = fVar5 * unaff_XMM9_Da + pfVar25[2] + fVar6 * unaff_XMM9_Db +
                   fVar7 * unaff_XMM9_Dc + fVar8 * unaff_XMM9_Dd;
      pfVar25[3] = fVar5 * unaff_XMM11_Da + pfVar25[3] + fVar6 * unaff_XMM11_Db +
                   fVar7 * unaff_XMM11_Dc + fVar8 * unaff_XMM11_Dd;
      pfVar25 = pfVar25 + 0xc;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
  }
  uVar24 = unaff_EDI & 1;
  if (uVar24 != 0) {
    fVar27 = unaff_RBX[1];
    pfVar25 = (float *)(unaff_RSI + 8);
    fVar1 = *unaff_RBX;
    pfVar26 = (float *)(unaff_RBP + 8);
    fVar2 = unaff_RBX[2];
    fVar3 = unaff_RBX[3];
    fVar4 = unaff_RBX[0x21];
    fVar5 = unaff_RBX[0x20];
    fVar6 = unaff_RBX[0x22];
    fVar7 = unaff_RBX[0x23];
    do {
      fVar8 = pfVar26[-1];
      fVar9 = pfVar26[-2];
      fVar10 = *pfVar26;
      fVar11 = pfVar26[1];
      pfVar26 = pfVar26 + 4;
      pfVar25[-2] = fVar8 * fVar27 + fVar9 * fVar1 + fVar10 * fVar2 + fVar11 * fVar3 + pfVar25[-2];
      fVar12 = unaff_RBX[0x40];
      fVar13 = unaff_RBX[0x42];
      fVar14 = unaff_RBX[0x41];
      fVar15 = unaff_RBX[0x43];
      pfVar25[-1] = fVar9 * fVar5 + fVar8 * fVar4 + fVar10 * fVar6 + fVar11 * fVar7 + pfVar25[-1];
      fVar16 = unaff_RBX[0x60];
      fVar17 = unaff_RBX[0x62];
      fVar18 = unaff_RBX[0x61];
      fVar19 = unaff_RBX[99];
      *pfVar25 = fVar9 * fVar12 + fVar8 * fVar14 + fVar10 * fVar13 + fVar11 * fVar15 + *pfVar25;
      fVar12 = unaff_RBX[0x80];
      fVar13 = unaff_RBX[0xa0];
      fVar14 = unaff_RBX[0x82];
      fVar15 = unaff_RBX[0xa2];
      fVar20 = unaff_RBX[0xa1];
      fVar21 = unaff_RBX[0x81];
      fVar22 = unaff_RBX[0x83];
      fVar23 = unaff_RBX[0xa3];
      pfVar25[1] = fVar9 * fVar16 + fVar8 * fVar18 + fVar10 * fVar17 + fVar11 * fVar19 + pfVar25[1];
      pfVar25[3] = fVar9 * fVar13 + fVar8 * fVar20 + fVar10 * fVar15 + fVar11 * fVar23 + pfVar25[3];
      pfVar25[2] = fVar9 * fVar12 + fVar8 * fVar21 + fVar10 * fVar14 + fVar11 * fVar22 + pfVar25[2];
      pfVar25 = pfVar25 + 6;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
  }
  return;
}






// 函数: void FUN_1807e0f64(void)
void FUN_1807e0f64(void)

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
  float *pfVar25;
  float *pfVar26;
  float *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  int unaff_EDI;
  
  fVar1 = unaff_RBX[1];
  pfVar25 = (float *)(unaff_RSI + 8);
  fVar2 = *unaff_RBX;
  pfVar26 = (float *)(unaff_RBP + 8);
  fVar3 = unaff_RBX[2];
  fVar4 = unaff_RBX[3];
  fVar5 = unaff_RBX[0x21];
  fVar6 = unaff_RBX[0x20];
  fVar7 = unaff_RBX[0x22];
  fVar8 = unaff_RBX[0x23];
  do {
    fVar9 = pfVar26[-1];
    fVar10 = pfVar26[-2];
    fVar11 = *pfVar26;
    fVar12 = pfVar26[1];
    pfVar26 = pfVar26 + 4;
    pfVar25[-2] = fVar9 * fVar1 + fVar10 * fVar2 + fVar11 * fVar3 + fVar12 * fVar4 + pfVar25[-2];
    fVar13 = unaff_RBX[0x40];
    fVar14 = unaff_RBX[0x42];
    fVar15 = unaff_RBX[0x41];
    fVar16 = unaff_RBX[0x43];
    pfVar25[-1] = fVar10 * fVar6 + fVar9 * fVar5 + fVar11 * fVar7 + fVar12 * fVar8 + pfVar25[-1];
    fVar17 = unaff_RBX[0x60];
    fVar18 = unaff_RBX[0x62];
    fVar19 = unaff_RBX[0x61];
    fVar20 = unaff_RBX[99];
    *pfVar25 = fVar10 * fVar13 + fVar9 * fVar15 + fVar11 * fVar14 + fVar12 * fVar16 + *pfVar25;
    fVar13 = unaff_RBX[0x80];
    fVar14 = unaff_RBX[0xa0];
    fVar15 = unaff_RBX[0x82];
    fVar16 = unaff_RBX[0xa2];
    fVar21 = unaff_RBX[0xa1];
    fVar22 = unaff_RBX[0x81];
    fVar23 = unaff_RBX[0x83];
    fVar24 = unaff_RBX[0xa3];
    pfVar25[1] = fVar10 * fVar17 + fVar9 * fVar19 + fVar11 * fVar18 + fVar12 * fVar20 + pfVar25[1];
    pfVar25[3] = fVar10 * fVar14 + fVar9 * fVar21 + fVar11 * fVar16 + fVar12 * fVar24 + pfVar25[3];
    pfVar25[2] = fVar10 * fVar13 + fVar9 * fVar22 + fVar11 * fVar15 + fVar12 * fVar23 + pfVar25[2];
    pfVar25 = pfVar25 + 6;
    unaff_EDI = unaff_EDI + -1;
  } while (unaff_EDI != 0);
  return;
}






// 函数: void FUN_1807e11a0(float *param_1,float *param_2,uint param_3,float *param_4,undefined8 param_5,
void FUN_1807e11a0(float *param_1,float *param_2,uint param_3,float *param_4,undefined8 param_5,
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
  float *pfVar25;
  uint uVar26;
  
  fVar1 = param_4[0xa0];
  fVar2 = param_4[0xa1];
  fVar3 = *param_4;
  fVar4 = param_4[0x21];
  fVar5 = param_4[1];
  fVar6 = param_4[0x20];
  fVar7 = param_4[0x40];
  fVar8 = param_4[0x41];
  fVar9 = param_4[0x60];
  fVar10 = param_4[0x61];
  fVar11 = param_4[0x81];
  fVar12 = param_4[0x80];
  if (param_7 != 0) {
                    // WARNING: Subroutine does not return
    memset(param_2,0,(ulonglong)(param_3 * 6) << 2,fVar2,fVar2);
  }
  if ((((((2e-05 <= ABS(fVar5)) || (2e-05 <= ABS(fVar6))) || (2e-05 <= ABS(fVar7))) ||
       ((2e-05 <= ABS(fVar8) || (2e-05 <= ABS(fVar9))))) ||
      ((2e-05 <= ABS(fVar10) || ((2e-05 <= ABS(fVar12) || (2e-05 <= ABS(fVar11))))))) ||
     ((2e-05 <= ABS(fVar1) || (2e-05 <= ABS(fVar2))))) {
    uVar26 = param_3 >> 1;
    if (uVar26 != 0) {
      pfVar25 = param_2 + 8;
      do {
        fVar13 = *param_1;
        fVar14 = param_1[1];
        fVar15 = param_1[2];
        fVar16 = param_1[3];
        param_1 = param_1 + 4;
        fVar17 = pfVar25[-4];
        fVar18 = pfVar25[-3];
        fVar19 = pfVar25[-2];
        fVar20 = pfVar25[-1];
        fVar21 = *pfVar25;
        fVar22 = pfVar25[1];
        fVar23 = pfVar25[2];
        fVar24 = pfVar25[3];
        *param_2 = fVar13 * fVar3 + *param_2 + fVar14 * fVar5;
        param_2[1] = fVar13 * fVar6 + param_2[1] + fVar14 * fVar4;
        param_2[2] = fVar13 * fVar7 + param_2[2] + fVar14 * fVar8;
        param_2[3] = fVar13 * fVar9 + param_2[3] + fVar14 * fVar10;
        param_2 = param_2 + 0xc;
        pfVar25[-4] = fVar13 * fVar12 + fVar17 + fVar14 * fVar11;
        pfVar25[-3] = fVar13 * fVar1 + fVar18 + fVar14 * fVar2;
        pfVar25[-2] = fVar15 * fVar3 + fVar19 + fVar16 * fVar5;
        pfVar25[-1] = fVar15 * fVar6 + fVar20 + fVar16 * fVar4;
        *pfVar25 = fVar15 * fVar7 + fVar21 + fVar16 * fVar8;
        pfVar25[1] = fVar15 * fVar9 + fVar22 + fVar16 * fVar10;
        pfVar25[2] = fVar15 * fVar12 + fVar23 + fVar16 * fVar11;
        pfVar25[3] = fVar15 * fVar1 + fVar24 + fVar16 * fVar2;
        pfVar25 = pfVar25 + 0xc;
        uVar26 = uVar26 - 1;
      } while (uVar26 != 0);
    }
    param_3 = param_3 & 1;
    if (param_3 != 0) {
      param_2 = param_2 + 2;
      do {
        fVar2 = param_1[1];
        fVar13 = *param_1;
        param_1 = param_1 + 2;
        param_2[-2] = fVar2 * fVar5 + fVar13 * fVar3 + param_2[-2];
        param_2[-1] = fVar2 * fVar4 + fVar13 * fVar6 + param_2[-1];
        *param_2 = fVar2 * fVar8 + fVar13 * fVar7 + *param_2;
        fVar14 = param_4[0xa1];
        param_2[1] = fVar2 * fVar10 + fVar13 * fVar9 + param_2[1];
        param_2[2] = fVar2 * fVar11 + fVar13 * fVar12 + param_2[2];
        param_2[3] = fVar2 * fVar14 + fVar13 * fVar1 + param_2[3];
        param_2 = param_2 + 6;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
  }
  else {
    uVar26 = param_3 >> 2;
    if (uVar26 != 0) {
      pfVar25 = param_2 + 0xc;
      do {
        fVar1 = *param_1;
        fVar2 = param_1[1];
        fVar5 = param_1[2];
        fVar6 = param_1[3];
        fVar7 = param_1[4];
        fVar8 = param_1[5];
        fVar9 = param_1[6];
        fVar10 = param_1[7];
        param_1 = param_1 + 8;
        fVar11 = pfVar25[-8];
        fVar12 = pfVar25[-7];
        fVar13 = pfVar25[-6];
        fVar14 = pfVar25[-5];
        fVar15 = *pfVar25;
        fVar16 = pfVar25[1];
        fVar17 = pfVar25[2];
        fVar18 = pfVar25[3];
        fVar19 = pfVar25[4];
        fVar20 = pfVar25[5];
        fVar21 = pfVar25[6];
        fVar22 = pfVar25[7];
        *param_2 = fVar1 * fVar3 + *param_2;
        param_2[1] = fVar2 * fVar4 + param_2[1];
        param_2[2] = fVar5 * 0.0 + param_2[2];
        param_2[3] = fVar6 * 0.0 + param_2[3];
        param_2 = param_2 + 0x18;
        pfVar25[-8] = fVar1 * 0.0 + fVar11;
        pfVar25[-7] = fVar2 * 0.0 + fVar12;
        pfVar25[-6] = fVar5 * fVar3 + fVar13;
        pfVar25[-5] = fVar6 * fVar4 + fVar14;
        *pfVar25 = fVar7 * fVar3 + fVar15;
        pfVar25[1] = fVar8 * fVar4 + fVar16;
        pfVar25[2] = fVar9 * 0.0 + fVar17;
        pfVar25[3] = fVar10 * 0.0 + fVar18;
        pfVar25[4] = fVar7 * 0.0 + fVar19;
        pfVar25[5] = fVar8 * 0.0 + fVar20;
        pfVar25[6] = fVar9 * fVar3 + fVar21;
        pfVar25[7] = fVar10 * fVar4 + fVar22;
        pfVar25 = pfVar25 + 0x18;
        uVar26 = uVar26 - 1;
      } while (uVar26 != 0);
    }
    for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
      fVar1 = *param_1;
      fVar2 = param_1[1];
      param_1 = param_1 + 2;
      *param_2 = fVar3 * fVar1 + *param_2;
      param_2[1] = fVar4 * fVar2 + param_2[1];
      param_2 = param_2 + 6;
    }
  }
  return;
}






