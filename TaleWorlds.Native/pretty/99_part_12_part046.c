#include "TaleWorlds.Native.Split.h"

// 99_part_12_part046.c - 12 个函数

// 函数: void FUN_1807e8db0(float *param_1,float *param_2,longlong param_3,int param_4,int param_5,
void FUN_1807e8db0(float *param_1,float *param_2,longlong param_3,int param_4,int param_5,
                  int *param_6,int *param_7,int param_8,float param_9,float param_10,float param_11,
                  int param_12,int param_13)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  int16_t uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  int8_t auVar14 [16];
  int8_t auVar15 [16];
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
  
  param_12 = param_12 * param_13;
  uVar11 = param_8 * param_13;
  param_5 = param_5 * param_13;
  for (uVar13 = param_4 * param_13; (param_12 != 0 && ((uVar13 & 7) != 0));
      uVar13 = (uVar13 + 1) - ((int)((uVar11 - (uVar13 + 1)) + -1) >> 0x1f & uVar11)) {
    fVar20 = (float)(int)*(short *)(param_3 + (longlong)(int)uVar13 * 2) * 3.051851e-05;
    fVar21 = fVar20 * param_11 + *param_2;
    *param_1 = fVar20 * param_9 + *param_2 * param_10;
    if (fVar21 <= 1.0) {
      if (-1.0 <= fVar21) {
        uVar9 = (int16_t)(int)(fVar21 * 32767.0);
      }
      else {
        uVar9 = 0x8000;
      }
    }
    else {
      uVar9 = 0x7fff;
    }
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    *(int16_t *)(param_3 + (longlong)param_5 * 2) = uVar9;
    param_5 = (param_5 + 1) - ((int)((uVar11 - (param_5 + 1)) + -1) >> 0x1f & uVar11);
    param_12 = param_12 + -1;
  }
  if (7 < param_12) {
    uVar8 = (param_12 - 8U >> 3) + 1;
    uVar10 = (ulonglong)uVar8;
    param_12 = param_12 + uVar8 * -8;
    do {
      fVar20 = *param_2;
      fVar21 = param_2[1];
      fVar2 = param_2[2];
      fVar3 = param_2[3];
      fVar4 = param_2[4];
      fVar5 = param_2[5];
      fVar6 = param_2[6];
      fVar7 = param_2[7];
      param_2 = param_2 + 8;
      piVar1 = (int *)(param_3 + (longlong)(int)uVar13 * 2);
      fVar22 = (float)(int)(short)*piVar1 * 3.051851e-05;
      fVar23 = (float)(int)(short)piVar1[1] * 3.051851e-05;
      fVar24 = (float)(int)(short)piVar1[2] * 3.051851e-05;
      fVar25 = (float)(int)(short)piVar1[3] * 3.051851e-05;
      fVar16 = (float)(*piVar1 >> 0x10) * 3.051851e-05;
      fVar17 = (float)(piVar1[1] >> 0x10) * 3.051851e-05;
      fVar18 = (float)(piVar1[2] >> 0x10) * 3.051851e-05;
      fVar19 = (float)(piVar1[3] >> 0x10) * 3.051851e-05;
      *param_1 = fVar22 * param_9 + fVar20 * param_10;
      param_1[1] = fVar16 * param_9 + fVar21 * param_10;
      param_1[2] = fVar23 * param_9 + fVar2 * param_10;
      param_1[3] = fVar17 * param_9 + fVar3 * param_10;
      param_1[4] = fVar24 * param_9 + fVar4 * param_10;
      param_1[5] = fVar18 * param_9 + fVar5 * param_10;
      param_1[6] = fVar25 * param_9 + fVar6 * param_10;
      param_1[7] = fVar19 * param_9 + fVar7 * param_10;
      param_1 = param_1 + 8;
      auVar14._0_4_ = (int)((fVar22 * param_11 + fVar20) * 32767.0);
      auVar14._4_4_ = (int)((fVar16 * param_11 + fVar21) * 32767.0);
      auVar14._8_4_ = (int)((fVar23 * param_11 + fVar2) * 32767.0);
      auVar14._12_4_ = (int)((fVar17 * param_11 + fVar3) * 32767.0);
      auVar15._0_4_ = (int)((fVar24 * param_11 + fVar4) * 32767.0);
      auVar15._4_4_ = (int)((fVar18 * param_11 + fVar5) * 32767.0);
      auVar15._8_4_ = (int)((fVar25 * param_11 + fVar6) * 32767.0);
      auVar15._12_4_ = (int)((fVar19 * param_11 + fVar7) * 32767.0);
      auVar15 = packssdw(auVar14,auVar15);
      *(int8_t (*) [16])(param_3 + (longlong)param_5 * 2) = auVar15;
      param_5 = (param_5 + 8) - ((int)((uVar11 - (param_5 + 8)) + -1) >> 0x1f & uVar11);
      uVar13 = (uVar13 + 8) - ((int)((uVar11 - (uVar13 + 8)) + -1) >> 0x1f & uVar11);
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if (param_12 != 0) {
    lVar12 = (longlong)param_1 - (longlong)param_2;
    do {
      fVar20 = (float)(int)*(short *)(param_3 + (longlong)(int)uVar13 * 2) * 3.051851e-05;
      fVar21 = fVar20 * param_11 + *param_2;
      *(float *)(lVar12 + (longlong)param_2) = fVar20 * param_9 + *param_2 * param_10;
      if (fVar21 <= 1.0) {
        if (-1.0 <= fVar21) {
          uVar9 = (int16_t)(int)(fVar21 * 32767.0);
        }
        else {
          uVar9 = 0x8000;
        }
      }
      else {
        uVar9 = 0x7fff;
      }
      param_2 = param_2 + 1;
      *(int16_t *)(param_3 + (longlong)param_5 * 2) = uVar9;
      param_5 = (param_5 + 1) - ((int)((uVar11 - (param_5 + 1)) + -1) >> 0x1f & uVar11);
      uVar13 = (uVar13 + 1) - ((int)((uVar11 - (uVar13 + 1)) + -1) >> 0x1f & uVar11);
      param_12 = param_12 + -1;
    } while (param_12 != 0);
  }
  *param_6 = (int)uVar13 / param_13;
  *param_7 = param_5 / param_13;
  return;
}






// 函数: void FUN_1807e8e65(uint64_t param_1,uint64_t param_2,int param_3,int param_4)
void FUN_1807e8e65(uint64_t param_1,uint64_t param_2,int param_3,int param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  int16_t uVar9;
  ulonglong uVar10;
  int in_EDX;
  uint uVar11;
  float *unaff_RBX;
  longlong lVar12;
  int16_t unaff_BP;
  int unaff_ESI;
  longlong unaff_RDI;
  uint uVar13;
  int in_R10D;
  int iVar14;
  float *in_R11;
  uint64_t in_XMM0_Qb;
  uint64_t in_XMM1_Qb;
  int8_t auVar15 [16];
  int8_t auVar16 [16];
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
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float fStackX_10;
  float fStackX_14;
  float fStackX_18;
  float fStackX_1c;
  float fStackX_20;
  float fStackX_24;
  float fStack0000000000000028;
  float fStack000000000000002c;
  int *in_stack_00000108;
  int *in_stack_00000110;
  
  iVar14 = in_R10D * unaff_ESI;
  uVar11 = in_EDX * unaff_ESI;
  param_3 = param_3 * unaff_ESI;
  for (uVar13 = param_4 * unaff_ESI; (iVar14 != 0 && ((uVar13 & 7) != 0));
      uVar13 = (uVar13 + 1) - ((int)((uVar11 - (uVar13 + 1)) + -1) >> 0x1f & uVar11)) {
    fVar21 = (float)(int)*(short *)(unaff_RDI + (longlong)(int)uVar13 * 2) * unaff_XMM12_Da;
    fVar22 = fVar21 * unaff_XMM10_Da + *in_R11;
    *unaff_RBX = fVar21 * unaff_XMM8_Da + *in_R11 * unaff_XMM9_Da;
    uVar9 = unaff_BP;
    if (fVar22 <= unaff_XMM13_Da) {
      if (unaff_XMM7_Da <= fVar22) {
        uVar9 = (short)(int)(fVar22 * unaff_XMM11_Da);
      }
      else {
        uVar9 = 0x8000;
      }
    }
    in_R11 = in_R11 + 1;
    unaff_RBX = unaff_RBX + 1;
    *(int16_t *)(unaff_RDI + (longlong)param_3 * 2) = uVar9;
    param_3 = (param_3 + 1) - ((int)((uVar11 - (param_3 + 1)) + -1) >> 0x1f & uVar11);
    iVar14 = iVar14 + -1;
  }
  if (7 < iVar14) {
    fStackX_10 = (float)param_1;
    fStackX_14 = (float)((ulonglong)param_1 >> 0x20);
    fStackX_18 = (float)in_XMM0_Qb;
    fStackX_1c = (float)((ulonglong)in_XMM0_Qb >> 0x20);
    fStackX_20 = (float)param_2;
    fStackX_24 = (float)((ulonglong)param_2 >> 0x20);
    fStack0000000000000028 = (float)in_XMM1_Qb;
    fStack000000000000002c = (float)((ulonglong)in_XMM1_Qb >> 0x20);
    uVar8 = (iVar14 - 8U >> 3) + 1;
    uVar10 = (ulonglong)uVar8;
    iVar14 = iVar14 + uVar8 * -8;
    do {
      fVar21 = *in_R11;
      fVar22 = in_R11[1];
      fVar2 = in_R11[2];
      fVar3 = in_R11[3];
      fVar4 = in_R11[4];
      fVar5 = in_R11[5];
      fVar6 = in_R11[6];
      fVar7 = in_R11[7];
      in_R11 = in_R11 + 8;
      piVar1 = (int *)(unaff_RDI + (longlong)(int)uVar13 * 2);
      fVar23 = (float)(int)(short)*piVar1 * fStackX_10;
      fVar24 = (float)(int)(short)piVar1[1] * fStackX_14;
      fVar25 = (float)(int)(short)piVar1[2] * fStackX_18;
      fVar26 = (float)(int)(short)piVar1[3] * fStackX_1c;
      fVar17 = (float)(*piVar1 >> 0x10) * fStackX_10;
      fVar18 = (float)(piVar1[1] >> 0x10) * fStackX_14;
      fVar19 = (float)(piVar1[2] >> 0x10) * fStackX_18;
      fVar20 = (float)(piVar1[3] >> 0x10) * fStackX_1c;
      *unaff_RBX = fVar23 * unaff_XMM8_Da + fVar21 * unaff_XMM9_Da;
      unaff_RBX[1] = fVar17 * unaff_XMM8_Da + fVar22 * unaff_XMM9_Da;
      unaff_RBX[2] = fVar24 * unaff_XMM8_Da + fVar2 * unaff_XMM9_Da;
      unaff_RBX[3] = fVar18 * unaff_XMM8_Da + fVar3 * unaff_XMM9_Da;
      unaff_RBX[4] = fVar25 * unaff_XMM8_Da + fVar4 * unaff_XMM9_Da;
      unaff_RBX[5] = fVar19 * unaff_XMM8_Da + fVar5 * unaff_XMM9_Da;
      unaff_RBX[6] = fVar26 * unaff_XMM8_Da + fVar6 * unaff_XMM9_Da;
      unaff_RBX[7] = fVar20 * unaff_XMM8_Da + fVar7 * unaff_XMM9_Da;
      unaff_RBX = unaff_RBX + 8;
      auVar15._0_4_ = (int)((fVar23 * unaff_XMM10_Da + fVar21) * fStackX_20);
      auVar15._4_4_ = (int)((fVar17 * unaff_XMM10_Da + fVar22) * fStackX_24);
      auVar15._8_4_ = (int)((fVar24 * unaff_XMM10_Da + fVar2) * fStack0000000000000028);
      auVar15._12_4_ = (int)((fVar18 * unaff_XMM10_Da + fVar3) * fStack000000000000002c);
      auVar16._0_4_ = (int)((fVar25 * unaff_XMM10_Da + fVar4) * fStackX_20);
      auVar16._4_4_ = (int)((fVar19 * unaff_XMM10_Da + fVar5) * fStackX_24);
      auVar16._8_4_ = (int)((fVar26 * unaff_XMM10_Da + fVar6) * fStack0000000000000028);
      auVar16._12_4_ = (int)((fVar20 * unaff_XMM10_Da + fVar7) * fStack000000000000002c);
      auVar16 = packssdw(auVar15,auVar16);
      *(int8_t (*) [16])(unaff_RDI + (longlong)param_3 * 2) = auVar16;
      param_3 = (param_3 + 8) - ((int)((uVar11 - (param_3 + 8)) + -1) >> 0x1f & uVar11);
      uVar13 = (uVar13 + 8) - ((int)((uVar11 - (uVar13 + 8)) + -1) >> 0x1f & uVar11);
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    unaff_XMM7_Da = -1.0;
    unaff_XMM11_Da = 32767.0;
    unaff_XMM13_Da = 1.0;
  }
  if (iVar14 != 0) {
    lVar12 = (longlong)unaff_RBX - (longlong)in_R11;
    do {
      fVar21 = (float)(int)*(short *)(unaff_RDI + (longlong)(int)uVar13 * 2) * unaff_XMM12_Da;
      fVar22 = fVar21 * unaff_XMM10_Da + *in_R11;
      *(float *)(lVar12 + (longlong)in_R11) = fVar21 * unaff_XMM8_Da + *in_R11 * unaff_XMM9_Da;
      uVar9 = unaff_BP;
      if (fVar22 <= unaff_XMM13_Da) {
        if (unaff_XMM7_Da <= fVar22) {
          uVar9 = (short)(int)(fVar22 * unaff_XMM11_Da);
        }
        else {
          uVar9 = 0x8000;
        }
      }
      in_R11 = in_R11 + 1;
      *(int16_t *)(unaff_RDI + (longlong)param_3 * 2) = uVar9;
      param_3 = (param_3 + 1) - ((int)((uVar11 - (param_3 + 1)) + -1) >> 0x1f & uVar11);
      uVar13 = (uVar13 + 1) - ((int)((uVar11 - (uVar13 + 1)) + -1) >> 0x1f & uVar11);
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  *in_stack_00000108 = (int)uVar13 / unaff_ESI;
  *in_stack_00000110 = param_3 / unaff_ESI;
  return;
}






// 函数: void FUN_1807e8f74(uint64_t param_1,uint param_2,int param_3,int param_4)
void FUN_1807e8f74(uint64_t param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint in_EAX;
  int16_t uVar8;
  ulonglong uVar9;
  float *unaff_RBX;
  longlong lVar10;
  int16_t unaff_BP;
  int unaff_ESI;
  longlong unaff_RDI;
  int in_R10D;
  int iVar11;
  float *in_R11;
  int8_t auVar12 [16];
  int8_t auVar13 [16];
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
  float unaff_XMM7_Da;
  float unaff_XMM7_Db;
  float unaff_XMM7_Dc;
  float unaff_XMM7_Dd;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM11_Db;
  float unaff_XMM11_Dc;
  float unaff_XMM11_Dd;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM13_Db;
  float unaff_XMM13_Dc;
  float unaff_XMM13_Dd;
  float unaff_XMM14_Da;
  float unaff_XMM14_Db;
  float unaff_XMM14_Dc;
  float unaff_XMM14_Dd;
  float unaff_XMM15_Da;
  float unaff_XMM15_Db;
  float unaff_XMM15_Dc;
  float unaff_XMM15_Dd;
  int *in_stack_00000108;
  int *in_stack_00000110;
  
  uVar9 = (ulonglong)in_EAX;
  iVar11 = in_R10D + in_EAX * -8;
  do {
    fVar18 = *in_R11;
    fVar19 = in_R11[1];
    fVar2 = in_R11[2];
    fVar3 = in_R11[3];
    fVar4 = in_R11[4];
    fVar5 = in_R11[5];
    fVar6 = in_R11[6];
    fVar7 = in_R11[7];
    in_R11 = in_R11 + 8;
    piVar1 = (int *)(unaff_RDI + (longlong)param_4 * 2);
    fVar20 = (float)(int)(short)*piVar1 * unaff_XMM7_Da;
    fVar21 = (float)(int)(short)piVar1[1] * unaff_XMM7_Db;
    fVar22 = (float)(int)(short)piVar1[2] * unaff_XMM7_Dc;
    fVar23 = (float)(int)(short)piVar1[3] * unaff_XMM7_Dd;
    fVar14 = (float)(*piVar1 >> 0x10) * unaff_XMM7_Da;
    fVar15 = (float)(piVar1[1] >> 0x10) * unaff_XMM7_Db;
    fVar16 = (float)(piVar1[2] >> 0x10) * unaff_XMM7_Dc;
    fVar17 = (float)(piVar1[3] >> 0x10) * unaff_XMM7_Dd;
    *unaff_RBX = fVar20 * unaff_XMM14_Da + fVar18 * unaff_XMM15_Da;
    unaff_RBX[1] = fVar14 * unaff_XMM14_Db + fVar19 * unaff_XMM15_Db;
    unaff_RBX[2] = fVar21 * unaff_XMM14_Dc + fVar2 * unaff_XMM15_Dc;
    unaff_RBX[3] = fVar15 * unaff_XMM14_Dd + fVar3 * unaff_XMM15_Dd;
    unaff_RBX[4] = fVar22 * unaff_XMM14_Da + fVar4 * unaff_XMM15_Da;
    unaff_RBX[5] = fVar16 * unaff_XMM14_Db + fVar5 * unaff_XMM15_Db;
    unaff_RBX[6] = fVar23 * unaff_XMM14_Dc + fVar6 * unaff_XMM15_Dc;
    unaff_RBX[7] = fVar17 * unaff_XMM14_Dd + fVar7 * unaff_XMM15_Dd;
    unaff_RBX = unaff_RBX + 8;
    auVar12._0_4_ = (int)((fVar20 * unaff_XMM11_Da + fVar18) * unaff_XMM13_Da);
    auVar12._4_4_ = (int)((fVar14 * unaff_XMM11_Db + fVar19) * unaff_XMM13_Db);
    auVar12._8_4_ = (int)((fVar21 * unaff_XMM11_Dc + fVar2) * unaff_XMM13_Dc);
    auVar12._12_4_ = (int)((fVar15 * unaff_XMM11_Dd + fVar3) * unaff_XMM13_Dd);
    auVar13._0_4_ = (int)((fVar22 * unaff_XMM11_Da + fVar4) * unaff_XMM13_Da);
    auVar13._4_4_ = (int)((fVar16 * unaff_XMM11_Db + fVar5) * unaff_XMM13_Db);
    auVar13._8_4_ = (int)((fVar23 * unaff_XMM11_Dc + fVar6) * unaff_XMM13_Dc);
    auVar13._12_4_ = (int)((fVar17 * unaff_XMM11_Dd + fVar7) * unaff_XMM13_Dd);
    auVar13 = packssdw(auVar12,auVar13);
    *(int8_t (*) [16])(unaff_RDI + (longlong)param_3 * 2) = auVar13;
    param_3 = (param_3 + 8) - ((int)((param_2 - (param_3 + 8)) + -1) >> 0x1f & param_2);
    param_4 = (param_4 + 8) - ((int)((param_2 - (param_4 + 8)) + -1) >> 0x1f & param_2);
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if (iVar11 != 0) {
    lVar10 = (longlong)unaff_RBX - (longlong)in_R11;
    do {
      fVar18 = (float)(int)*(short *)(unaff_RDI + (longlong)param_4 * 2) * unaff_XMM12_Da;
      fVar19 = fVar18 * unaff_XMM10_Da + *in_R11;
      *(float *)(lVar10 + (longlong)in_R11) = fVar18 * unaff_XMM8_Da + *in_R11 * unaff_XMM9_Da;
      uVar8 = unaff_BP;
      if (fVar19 <= 1.0) {
        if (-1.0 <= fVar19) {
          uVar8 = (short)(int)(fVar19 * 32767.0);
        }
        else {
          uVar8 = 0x8000;
        }
      }
      in_R11 = in_R11 + 1;
      *(int16_t *)(unaff_RDI + (longlong)param_3 * 2) = uVar8;
      param_3 = (param_3 + 1) - ((int)((param_2 - (param_3 + 1)) + -1) >> 0x1f & param_2);
      param_4 = (param_4 + 1) - ((int)((param_2 - (param_4 + 1)) + -1) >> 0x1f & param_2);
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  *in_stack_00000108 = param_4 / unaff_ESI;
  *in_stack_00000110 = param_3 / unaff_ESI;
  return;
}






// 函数: void FUN_1807e9076(uint64_t param_1,uint param_2,int param_3,int param_4)
void FUN_1807e9076(uint64_t param_1,uint param_2,int param_3,int param_4)

{
  int16_t uVar1;
  longlong unaff_RBX;
  longlong lVar2;
  int16_t unaff_BP;
  int unaff_ESI;
  longlong unaff_RDI;
  int in_R10D;
  float *in_R11;
  float fVar3;
  float fVar4;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  int *in_stack_00000108;
  int *in_stack_00000110;
  
  if (in_R10D != 0) {
    lVar2 = unaff_RBX - (longlong)in_R11;
    do {
      fVar3 = (float)(int)*(short *)(unaff_RDI + (longlong)param_4 * 2) * unaff_XMM12_Da;
      fVar4 = fVar3 * unaff_XMM10_Da + *in_R11;
      *(float *)(lVar2 + (longlong)in_R11) = fVar3 * unaff_XMM8_Da + *in_R11 * unaff_XMM9_Da;
      uVar1 = unaff_BP;
      if (fVar4 <= unaff_XMM13_Da) {
        if (unaff_XMM7_Da <= fVar4) {
          uVar1 = (short)(int)(fVar4 * unaff_XMM11_Da);
        }
        else {
          uVar1 = 0x8000;
        }
      }
      in_R11 = in_R11 + 1;
      *(int16_t *)(unaff_RDI + (longlong)param_3 * 2) = uVar1;
      param_3 = (param_3 + 1) - ((int)((param_2 - (param_3 + 1)) + -1) >> 0x1f & param_2);
      param_4 = (param_4 + 1) - ((int)((param_2 - (param_4 + 1)) + -1) >> 0x1f & param_2);
      in_R10D = in_R10D + -1;
    } while (in_R10D != 0);
  }
  *in_stack_00000108 = param_4 / unaff_ESI;
  *in_stack_00000110 = param_3 / unaff_ESI;
  return;
}






// 函数: void FUN_1807e908b(uint64_t param_1,uint param_2,int param_3,int param_4)
void FUN_1807e908b(uint64_t param_1,uint param_2,int param_3,int param_4)

{
  int16_t uVar1;
  longlong unaff_RBX;
  longlong lVar2;
  int16_t unaff_BP;
  int unaff_ESI;
  longlong unaff_RDI;
  int in_R10D;
  float *in_R11;
  float fVar3;
  float fVar4;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  int *in_stack_00000108;
  int *in_stack_00000110;
  
  lVar2 = unaff_RBX - (longlong)in_R11;
  do {
    fVar3 = (float)(int)*(short *)(unaff_RDI + (longlong)param_4 * 2) * unaff_XMM12_Da;
    fVar4 = fVar3 * unaff_XMM10_Da + *in_R11;
    *(float *)(lVar2 + (longlong)in_R11) = fVar3 * unaff_XMM8_Da + *in_R11 * unaff_XMM9_Da;
    uVar1 = unaff_BP;
    if (fVar4 <= unaff_XMM13_Da) {
      if (unaff_XMM7_Da <= fVar4) {
        uVar1 = (short)(int)(fVar4 * unaff_XMM11_Da);
      }
      else {
        uVar1 = 0x8000;
      }
    }
    in_R11 = in_R11 + 1;
    *(int16_t *)(unaff_RDI + (longlong)param_3 * 2) = uVar1;
    param_3 = (param_3 + 1) - ((int)((param_2 - (param_3 + 1)) + -1) >> 0x1f & param_2);
    param_4 = (param_4 + 1) - ((int)((param_2 - (param_4 + 1)) + -1) >> 0x1f & param_2);
    in_R10D = in_R10D + -1;
  } while (in_R10D != 0);
  *in_stack_00000108 = param_4 / unaff_ESI;
  *in_stack_00000110 = param_3 / unaff_ESI;
  return;
}






// 函数: void FUN_1807e9180(longlong param_1,float *param_2,longlong param_3,uint param_4,float *param_5,
void FUN_1807e9180(longlong param_1,float *param_2,longlong param_3,uint param_4,float *param_5,
                  float *param_6,int32_t param_7,float param_8,float param_9,float param_10,
                  float param_11,float param_12)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_4) {
    param_3 = param_3 - (longlong)param_2;
    param_1 = param_1 - (longlong)param_2;
    fVar3 = *param_6;
    fVar5 = *param_5;
    uVar1 = (ulonglong)param_4;
    do {
      fVar2 = *(float *)(param_3 + (longlong)param_2);
      fVar2 = fVar2 * fVar2;
      fVar4 = param_10;
      if (fVar3 < fVar2) {
        fVar4 = param_9;
      }
      fVar5 = fVar5 + (fVar2 - fVar5) * fVar4;
      fVar3 = (fVar5 - fVar3) * fVar4 + fVar3;
      fVar2 = param_8;
      if (param_11 < fVar3) {
        fVar2 = (float)powf(fVar3 * param_12,param_7);
        fVar2 = fVar2 * param_8;
      }
      *param_2 = fVar2 * *(float *)((longlong)param_2 + param_1);
      param_2 = param_2 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
    *param_6 = fVar3;
    *param_5 = fVar5;
  }
  return;
}






// 函数: void FUN_1807e9196(longlong param_1,float *param_2,longlong param_3,uint param_4)
void FUN_1807e9196(longlong param_1,float *param_2,longlong param_3,uint param_4)

{
  longlong in_RAX;
  uint64_t unaff_RDI;
  ulonglong uVar1;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  float fVar2;
  float fVar3;
  float fVar4;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  float fVar5;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  float *in_stack_000000e0;
  float *in_stack_000000e8;
  int32_t in_stack_000000f0;
  float in_stack_000000f8;
  float in_stack_00000100;
  float in_stack_00000108;
  float in_stack_00000110;
  float in_stack_00000118;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RDI;
  *(uint64_t *)(in_RAX + 0x10) = unaff_R14;
  param_3 = param_3 - (longlong)param_2;
  *(uint64_t *)(in_RAX + 0x18) = unaff_R15;
  param_1 = param_1 - (longlong)param_2;
  *(int32_t *)(in_RAX + -0x28) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x24) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x20) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x1c) = unaff_XMM6_Dd;
  fVar3 = *in_stack_000000e8;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM7_Dd;
  fVar5 = *in_stack_000000e0;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM8_Dd;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM9_Dd;
  *(int32_t *)(in_RAX + -0x68) = unaff_XMM10_Da;
  *(int32_t *)(in_RAX + -100) = unaff_XMM10_Db;
  *(int32_t *)(in_RAX + -0x60) = unaff_XMM10_Dc;
  *(int32_t *)(in_RAX + -0x5c) = unaff_XMM10_Dd;
  *(int32_t *)(in_RAX + -0x78) = unaff_XMM11_Da;
  *(int32_t *)(in_RAX + -0x74) = unaff_XMM11_Db;
  *(int32_t *)(in_RAX + -0x70) = unaff_XMM11_Dc;
  *(int32_t *)(in_RAX + -0x6c) = unaff_XMM11_Dd;
  uVar1 = (ulonglong)param_4;
  do {
    fVar2 = *(float *)(param_3 + (longlong)param_2);
    fVar2 = fVar2 * fVar2;
    fVar4 = in_stack_00000108;
    if (fVar3 < fVar2) {
      fVar4 = in_stack_00000100;
    }
    fVar5 = fVar5 + (fVar2 - fVar5) * fVar4;
    fVar3 = (fVar5 - fVar3) * fVar4 + fVar3;
    fVar2 = in_stack_000000f8;
    if (in_stack_00000110 < fVar3) {
      fVar2 = (float)powf(fVar3 * in_stack_00000118,in_stack_000000f0);
      fVar2 = fVar2 * in_stack_000000f8;
    }
    *param_2 = fVar2 * *(float *)((longlong)param_2 + param_1);
    param_2 = param_2 + 1;
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  *in_stack_000000e8 = fVar3;
  *in_stack_000000e0 = fVar5;
  return;
}






// 函数: void FUN_1807e92fa(void)
void FUN_1807e92fa(void)

{
  return;
}






// 函数: void FUN_1807e9300(longlong param_1,float *param_2,longlong param_3,uint param_4,float *param_5,
void FUN_1807e9300(longlong param_1,float *param_2,longlong param_3,uint param_4,float *param_5,
                  float *param_6,int32_t param_7,float param_8,float param_9,float param_10,
                  float param_11,float param_12)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_4) {
    param_3 = param_3 - (longlong)param_2;
    param_1 = param_1 - (longlong)param_2;
    fVar2 = *param_6;
    fVar5 = *param_5;
    uVar1 = (ulonglong)param_4;
    do {
      fVar3 = *(float *)(param_3 + 4 + (longlong)param_2);
      fVar4 = *(float *)(param_3 + (longlong)param_2);
      fVar4 = fVar3 * fVar3 + fVar4 * fVar4;
      fVar3 = param_10;
      if (fVar2 < fVar4) {
        fVar3 = param_9;
      }
      fVar5 = fVar5 + (fVar4 - fVar5) * fVar3;
      fVar2 = (fVar5 - fVar2) * fVar3 + fVar2;
      fVar3 = param_8;
      if (param_11 < fVar2) {
        fVar3 = (float)powf(fVar2 * param_12,param_7);
        fVar3 = fVar3 * param_8;
      }
      fVar4 = *(float *)(param_1 + (longlong)param_2);
      param_2[1] = fVar3 * *(float *)(param_1 + 4 + (longlong)param_2);
      *param_2 = fVar3 * fVar4;
      param_2 = param_2 + 2;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
    *param_6 = fVar2;
    *param_5 = fVar5;
  }
  return;
}






// 函数: void FUN_1807e9316(longlong param_1,float *param_2,longlong param_3,uint param_4)
void FUN_1807e9316(longlong param_1,float *param_2,longlong param_3,uint param_4)

{
  longlong in_RAX;
  uint64_t unaff_RBP;
  ulonglong uVar1;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  float fVar2;
  float fVar3;
  float fVar4;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  float fVar5;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  float *in_stack_000000e0;
  float *in_stack_000000e8;
  int32_t in_stack_000000f0;
  float in_stack_000000f8;
  float in_stack_00000100;
  float in_stack_00000108;
  float in_stack_00000110;
  float in_stack_00000118;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x10) = unaff_R14;
  param_3 = param_3 - (longlong)param_2;
  *(uint64_t *)(in_RAX + 0x18) = unaff_R15;
  param_1 = param_1 - (longlong)param_2;
  *(int32_t *)(in_RAX + -0x28) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x24) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x20) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x1c) = unaff_XMM6_Dd;
  fVar2 = *in_stack_000000e8;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM7_Dd;
  fVar5 = *in_stack_000000e0;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM8_Dd;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM9_Dd;
  *(int32_t *)(in_RAX + -0x68) = unaff_XMM10_Da;
  *(int32_t *)(in_RAX + -100) = unaff_XMM10_Db;
  *(int32_t *)(in_RAX + -0x60) = unaff_XMM10_Dc;
  *(int32_t *)(in_RAX + -0x5c) = unaff_XMM10_Dd;
  *(int32_t *)(in_RAX + -0x78) = unaff_XMM11_Da;
  *(int32_t *)(in_RAX + -0x74) = unaff_XMM11_Db;
  *(int32_t *)(in_RAX + -0x70) = unaff_XMM11_Dc;
  *(int32_t *)(in_RAX + -0x6c) = unaff_XMM11_Dd;
  uVar1 = (ulonglong)param_4;
  do {
    fVar3 = *(float *)(param_3 + 4 + (longlong)param_2);
    fVar4 = *(float *)(param_3 + (longlong)param_2);
    fVar4 = fVar3 * fVar3 + fVar4 * fVar4;
    fVar3 = in_stack_00000108;
    if (fVar2 < fVar4) {
      fVar3 = in_stack_00000100;
    }
    fVar5 = fVar5 + (fVar4 - fVar5) * fVar3;
    fVar2 = (fVar5 - fVar2) * fVar3 + fVar2;
    fVar3 = in_stack_000000f8;
    if (in_stack_00000110 < fVar2) {
      fVar3 = (float)powf(fVar2 * in_stack_00000118,in_stack_000000f0);
      fVar3 = fVar3 * in_stack_000000f8;
    }
    fVar4 = *(float *)(param_1 + (longlong)param_2);
    param_2[1] = fVar3 * *(float *)(param_1 + 4 + (longlong)param_2);
    *param_2 = fVar3 * fVar4;
    param_2 = param_2 + 2;
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  *in_stack_000000e8 = fVar2;
  *in_stack_000000e0 = fVar5;
  return;
}






// 函数: void FUN_1807e94ab(void)
void FUN_1807e94ab(void)

{
  return;
}






// 函数: void FUN_1807e94b0(longlong param_1,longlong param_2,longlong param_3,uint param_4,float *param_5,
void FUN_1807e94b0(longlong param_1,longlong param_2,longlong param_3,uint param_4,float *param_5,
                  float *param_6,int32_t param_7,float param_8,float param_9,float param_10,
                  float param_11,float param_12)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (0 < (int)param_4) {
    pfVar6 = (float *)(param_1 + 8);
    pfVar7 = (float *)(param_3 + 8);
    pfVar8 = (float *)(param_2 + 8);
    fVar13 = *param_5;
    fVar10 = *param_6;
    uVar9 = (ulonglong)param_4;
    do {
      fVar12 = pfVar7[-2] * pfVar7[-2] + pfVar7[-1] * pfVar7[-1] + *pfVar7 * *pfVar7 +
               pfVar7[1] * pfVar7[1] + pfVar7[2] * pfVar7[2] + pfVar7[3] * pfVar7[3];
      fVar11 = param_10;
      if (fVar10 < fVar12) {
        fVar11 = param_9;
      }
      fVar13 = fVar13 + (fVar12 - fVar13) * fVar11;
      fVar10 = (fVar13 - fVar10) * fVar11 + fVar10;
      fVar11 = param_8;
      if (param_11 < fVar10) {
        fVar11 = (float)powf(fVar10 * param_12,param_7);
        fVar11 = fVar11 * param_8;
      }
      fVar2 = pfVar6[-1];
      fVar3 = *pfVar6;
      fVar4 = pfVar6[1];
      fVar5 = pfVar6[2];
      pfVar1 = pfVar6 + 3;
      fVar12 = pfVar6[-2];
      pfVar6 = pfVar6 + 6;
      pfVar8[3] = fVar11 * *pfVar1;
      pfVar8[-1] = fVar2 * fVar11;
      *pfVar8 = fVar3 * fVar11;
      pfVar8[1] = fVar4 * fVar11;
      pfVar8[2] = fVar5 * fVar11;
      pfVar8 = pfVar8 + 6;
      *(float *)((longlong)pfVar7 + (param_2 - param_3) + -8) = fVar11 * fVar12;
      pfVar7 = pfVar7 + 6;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    *param_6 = fVar10;
    *param_5 = fVar13;
  }
  return;
}






