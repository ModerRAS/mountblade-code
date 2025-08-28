#include "TaleWorlds.Native.Split.h"
// 99_part_12_part056.c - 9 个函数
// 函数: void function_7ef605(uint64_t param_1,uint64_t param_2,int64_t param_3)
void function_7ef605(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t lVar6;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t unaff_R14;
  int64_t lVar7;
  int64_t unaff_R15;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int local_buffer_c0;
  pfVar5 = (float *)(unaff_RSI + 4 + param_3 * 8);
  lVar7 = (unaff_R14 + param_3 * -8) - unaff_RSI;
  lVar6 = param_3;
  do {
    fVar8 = *(float *)(lVar7 + -4 + (int64_t)pfVar5);
    fVar9 = *(float *)(lVar7 + (int64_t)pfVar5);
    fVar10 = *(float *)(((unaff_R15 + param_3 * -8) - unaff_RSI) + -4 + (int64_t)pfVar5);
    fVar1 = *(float *)((int64_t)pfVar5 + ((unaff_RBP + param_3 * -8) - unaff_RSI) + -4);
    fVar13 = fVar1 * -fVar9 + pfVar5[unaff_R12 + param_3 * -2] * fVar8;
    fVar2 = pfVar5[param_3 * -2 + -1];
    fVar12 = fVar1 * fVar8 - pfVar5[unaff_R12 + param_3 * -2] * -fVar9;
    fVar1 = *pfVar5;
    fVar3 = pfVar5[-1];
    fVar11 = fVar10 * fVar9 + pfVar5[unaff_R13 + param_3 * -2] * fVar8;
    fVar4 = pfVar5[param_3 * -2];
    fVar8 = fVar10 * fVar8 - pfVar5[unaff_R13 + param_3 * -2] * fVar9;
    fVar10 = fVar11 + fVar13;
    fVar13 = fVar13 - fVar11;
    fVar9 = fVar8 + fVar12;
    fVar12 = fVar12 - fVar8;
    pfVar5[param_3 * -2 + -1] = fVar2 + fVar9;
    pfVar5[param_3 * -2] = fVar4 + fVar10;
    pfVar5[-1] = fVar3 + fVar13;
    *pfVar5 = fVar1 - fVar12;
    pfVar5[(local_buffer_c0 - param_3) * 2 + -1] = fVar2 - fVar9;
    pfVar5[(local_buffer_c0 - param_3) * 2] = fVar4 - fVar10;
    pfVar5[param_3 * 4 + -1] = fVar3 - fVar13;
    pfVar5[param_3 * 4] = fVar1 + fVar12;
    pfVar5 = pfVar5 + 2;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}
// 函数: void function_7ef615(int64_t param_1,uint64_t param_2,int64_t param_3,int64_t param_4)
void function_7ef615(int64_t param_1,uint64_t param_2,int64_t param_3,int64_t param_4)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t lVar6;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t unaff_R14;
  int64_t lVar7;
  int64_t unaff_R15;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  pfVar5 = (float *)(unaff_RSI + 4 + param_1);
  lVar7 = (unaff_R14 - param_1) - unaff_RSI;
  lVar6 = param_3;
  do {
    fVar8 = *(float *)(lVar7 + -4 + (int64_t)pfVar5);
    fVar9 = *(float *)(lVar7 + (int64_t)pfVar5);
    fVar10 = *(float *)(((unaff_R15 - param_1) - unaff_RSI) + -4 + (int64_t)pfVar5);
    fVar1 = *(float *)((int64_t)pfVar5 + ((unaff_RBP - param_1) - unaff_RSI) + -4);
    fVar13 = fVar1 * -fVar9 + pfVar5[unaff_R12 + param_3 * -2] * fVar8;
    fVar2 = *(float *)((-4 - param_1) + (int64_t)pfVar5);
    fVar12 = fVar1 * fVar8 - pfVar5[unaff_R12 + param_3 * -2] * -fVar9;
    fVar1 = *pfVar5;
    fVar3 = pfVar5[-1];
    fVar11 = fVar10 * fVar9 + pfVar5[unaff_R13 + param_3 * -2] * fVar8;
    fVar4 = pfVar5[param_3 * -2];
    fVar8 = fVar10 * fVar8 - pfVar5[unaff_R13 + param_3 * -2] * fVar9;
    fVar10 = fVar11 + fVar13;
    fVar13 = fVar13 - fVar11;
    fVar9 = fVar8 + fVar12;
    fVar12 = fVar12 - fVar8;
    *(float *)((-4 - param_1) + (int64_t)pfVar5) = fVar2 + fVar9;
    pfVar5[param_3 * -2] = fVar4 + fVar10;
    pfVar5[-1] = fVar3 + fVar13;
    *pfVar5 = fVar1 - fVar12;
    pfVar5[(param_4 - param_3) * 2 + -1] = fVar2 - fVar9;
    pfVar5[(param_4 - param_3) * 2] = fVar4 - fVar10;
    pfVar5[param_3 * 4 + -1] = fVar3 - fVar13;
    pfVar5[param_3 * 4] = fVar1 + fVar12;
    pfVar5 = pfVar5 + 2;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}
// 函数: void function_7ef7af(void)
void function_7ef7af(void)
{
  return;
}
// 函数: void function_7ef7e0(float *param_1,float *param_2,int64_t param_3,int param_4)
void function_7ef7e0(float *param_1,float *param_2,int64_t param_3,int param_4)
{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int64_t lVar5;
  float *pfVar6;
  int64_t lVar7;
  float *pfVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  *param_2 = *param_1 + param_1[1];
  iVar4 = param_4 / 2;
  lVar12 = (int64_t)iVar4;
  param_2[1] = 0.0;
  param_2[iVar4 * 2] = *param_1 - param_1[1];
  param_2[(int64_t)(iVar4 * 2) + 1] = 0.0;
  if (1 < lVar12) {
    lVar9 = 1;
    lVar11 = 1;
    if (4 < iVar4) {
      lVar7 = param_3 - (int64_t)param_1;
      pfVar6 = param_1 + 3;
      lVar10 = (int64_t)param_2 - (int64_t)param_1;
      pfVar8 = param_1 + lVar12 * 2 + -4;
      lVar5 = (lVar12 - 5U >> 2) + 1;
      lVar11 = lVar5 * 4 + 1;
      do {
        fVar13 = *(float *)((int64_t)pfVar6 + lVar7 + -4);
        fVar16 = pfVar6[-1];
        fVar1 = *pfVar6;
        fVar2 = pfVar8[2];
        fVar3 = pfVar8[3];
        fVar14 = (1.0 - fVar13) * 0.5;
        fVar17 = (fVar13 + 1.0) * 0.5;
        fVar13 = *(float *)((int64_t)pfVar6 + lVar7) * -0.5;
        fVar15 = *(float *)((int64_t)pfVar6 + lVar7) * 0.5;
        *(float *)((int64_t)pfVar6 + lVar10) =
             (fVar16 * fVar13 + fVar1 * fVar14 + fVar2 * fVar15) - fVar3 * fVar17;
        *(float *)((int64_t)pfVar6 + lVar10 + -4) =
             (fVar16 * fVar14 - fVar1 * fVar13) + fVar2 * fVar17 + fVar3 * fVar15;
        fVar13 = *(float *)((int64_t)pfVar6 + lVar7 + 4);
        fVar16 = *(float *)((int64_t)pfVar6 + lVar7 + 8);
        fVar1 = pfVar6[1];
        fVar2 = pfVar6[2];
        fVar3 = *pfVar8;
        fVar14 = pfVar8[1];
        fVar15 = (1.0 - fVar13) * 0.5;
        fVar17 = (fVar13 + 1.0) * 0.5;
        fVar13 = fVar16 * -0.5;
        fVar16 = fVar16 * 0.5;
        *(float *)((int64_t)pfVar6 + lVar10 + 8) =
             (fVar1 * fVar13 + fVar2 * fVar15 + fVar3 * fVar16) - fVar14 * fVar17;
        *(float *)((int64_t)pfVar6 + lVar10 + 4) =
             (fVar1 * fVar15 - fVar2 * fVar13) + fVar3 * fVar17 + fVar14 * fVar16;
        fVar13 = *(float *)((int64_t)pfVar6 + lVar7 + 0xc);
        fVar16 = *(float *)((int64_t)pfVar6 + lVar7 + 0x10);
        fVar1 = pfVar6[3];
        fVar2 = pfVar6[4];
        fVar3 = pfVar8[-2];
        fVar14 = fVar16 * -0.5;
        fVar17 = (fVar13 + 1.0) * 0.5;
        fVar15 = (1.0 - fVar13) * 0.5;
        fVar16 = fVar16 * 0.5;
        fVar13 = pfVar8[-1];
        *(float *)((int64_t)pfVar6 + lVar10 + 0xc) =
             (fVar1 * fVar15 - fVar2 * fVar14) + fVar3 * fVar17 + fVar13 * fVar16;
        *(float *)((int64_t)pfVar6 + lVar10 + 0x10) =
             (fVar1 * fVar14 + fVar2 * fVar15 + fVar3 * fVar16) - fVar13 * fVar17;
        fVar13 = *(float *)((int64_t)pfVar6 + lVar7 + 0x14);
        fVar16 = *(float *)((int64_t)pfVar6 + lVar7 + 0x18);
        fVar1 = pfVar6[5];
        fVar2 = pfVar6[6];
        fVar3 = pfVar8[-4];
        fVar14 = pfVar8[-3];
        fVar17 = (1.0 - fVar13) * 0.5;
        pfVar8 = pfVar8 + -8;
        fVar15 = fVar16 * -0.5;
        fVar13 = (fVar13 + 1.0) * 0.5;
        fVar16 = fVar16 * 0.5;
        *(float *)((int64_t)pfVar6 + lVar10 + 0x14) =
             (fVar1 * fVar17 - fVar2 * fVar15) + fVar3 * fVar13 + fVar14 * fVar16;
        *(float *)((int64_t)pfVar6 + lVar10 + 0x18) =
             (fVar1 * fVar15 + fVar2 * fVar17 + fVar3 * fVar16) - fVar14 * fVar13;
        pfVar6 = pfVar6 + 8;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (lVar11 < lVar12) {
      pfVar6 = param_1 + lVar11 * 2 + 1;
      pfVar8 = param_1 + (lVar12 - lVar11) * 2;
      lVar11 = lVar12 - lVar11;
      do {
        fVar13 = *(float *)((int64_t)pfVar6 + (param_3 - (int64_t)param_1) + -4);
        fVar16 = *(float *)((int64_t)pfVar6 + (param_3 - (int64_t)param_1));
        fVar1 = pfVar6[-1];
        fVar2 = *pfVar6;
        fVar3 = *pfVar8;
        fVar14 = pfVar8[1];
        fVar17 = (1.0 - fVar13) * 0.5;
        pfVar8 = pfVar8 + -2;
        fVar15 = fVar16 * -0.5;
        fVar13 = (fVar13 + 1.0) * 0.5;
        fVar16 = fVar16 * 0.5;
        *(float *)((int64_t)pfVar6 + ((int64_t)param_2 - (int64_t)param_1) + -4) =
             (fVar1 * fVar17 - fVar2 * fVar15) + fVar3 * fVar13 + fVar14 * fVar16;
        *(float *)((int64_t)pfVar6 + ((int64_t)param_2 - (int64_t)param_1)) =
             (fVar1 * fVar15 + fVar2 * fVar17 + fVar3 * fVar16) - fVar14 * fVar13;
        pfVar6 = pfVar6 + 2;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (4 < iVar4) {
      lVar11 = (lVar12 - 5U >> 2) + 1;
      lVar9 = lVar11 * 4 + 1;
      pfVar6 = param_2 + 4;
      pfVar8 = param_2 + ((int64_t)param_4 + -2) * 2;
      do {
        pfVar8[2] = pfVar6[-2];
        pfVar8[3] = -pfVar6[-1];
        *pfVar8 = *pfVar6;
        pfVar8[1] = -pfVar6[1];
        pfVar8[-2] = pfVar6[2];
        pfVar8[-1] = -pfVar6[3];
        pfVar8[-4] = pfVar6[4];
        pfVar8[-3] = -pfVar6[5];
        lVar11 = lVar11 + -1;
        pfVar6 = pfVar6 + 8;
        pfVar8 = pfVar8 + -8;
      } while (lVar11 != 0);
    }
    if (lVar9 < lVar12) {
      pfVar6 = param_2 + (param_4 - lVar9) * 2;
      do {
        *pfVar6 = param_2[lVar9 * 2];
        lVar11 = lVar9 * 2;
        lVar9 = lVar9 + 1;
        pfVar6[1] = -param_2[lVar11 + 1];
        pfVar6 = pfVar6 + -2;
      } while (lVar9 < lVar12);
    }
  }
  return;
}
// 函数: void function_7ef841(void)
void function_7ef841(void)
{
  float fVar1;
  float fVar2;
  float fVar3;
  int64_t lVar4;
  float *pfVar5;
  int32_t *puVar6;
  int64_t lVar7;
  float *pfVar8;
  int32_t *puVar9;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t in_R10;
  int64_t in_R11;
  int64_t unaff_R14;
  uint64_t unaff_R15;
  float fVar13;
  int32_t unaff_XMM8_Da;
  float fVar14;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  float fVar15;
  float fVar16;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  float fVar17;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  *(uint64_t *)(in_R11 + 8) = unaff_RSI;
  lVar10 = 1;
  lVar12 = 1;
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM8_Dd;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM9_Dd;
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM10_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM10_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM10_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM10_Dd;
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM11_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM11_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM11_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM11_Dd;
  if (4 < (int)unaff_R14) {
    *(uint64_t *)(in_R11 + 0x10) = unaff_R15;
    lVar7 = unaff_RDI - unaff_RBX;
    pfVar5 = (float *)(unaff_RBX + 0xc);
    lVar11 = in_R10 - unaff_RBX;
    pfVar8 = (float *)(unaff_RBX + -0x10 + unaff_R14 * 8);
    lVar4 = (unaff_R14 - 5U >> 2) + 1;
    lVar12 = lVar4 * 4 + 1;
    do {
      fVar13 = *(float *)((int64_t)pfVar5 + lVar7 + -4);
      fVar16 = pfVar5[-1];
      fVar1 = *pfVar5;
      fVar2 = pfVar8[2];
      fVar3 = pfVar8[3];
      fVar14 = (1.0 - fVar13) * 0.5;
      fVar17 = (fVar13 + 1.0) * 0.5;
      fVar13 = *(float *)((int64_t)pfVar5 + lVar7) * -0.5;
      fVar15 = *(float *)((int64_t)pfVar5 + lVar7) * 0.5;
      *(float *)((int64_t)pfVar5 + lVar11) =
           (fVar16 * fVar13 + fVar1 * fVar14 + fVar2 * fVar15) - fVar3 * fVar17;
      *(float *)((int64_t)pfVar5 + lVar11 + -4) =
           (fVar16 * fVar14 - fVar1 * fVar13) + fVar2 * fVar17 + fVar3 * fVar15;
      fVar13 = *(float *)((int64_t)pfVar5 + lVar7 + 4);
      fVar16 = *(float *)((int64_t)pfVar5 + lVar7 + 8);
      fVar1 = pfVar5[1];
      fVar2 = pfVar5[2];
      fVar3 = *pfVar8;
      fVar14 = pfVar8[1];
      fVar15 = (1.0 - fVar13) * 0.5;
      fVar17 = (fVar13 + 1.0) * 0.5;
      fVar13 = fVar16 * -0.5;
      fVar16 = fVar16 * 0.5;
      *(float *)((int64_t)pfVar5 + lVar11 + 8) =
           (fVar1 * fVar13 + fVar2 * fVar15 + fVar3 * fVar16) - fVar14 * fVar17;
      *(float *)((int64_t)pfVar5 + lVar11 + 4) =
           (fVar1 * fVar15 - fVar2 * fVar13) + fVar3 * fVar17 + fVar14 * fVar16;
      fVar13 = *(float *)((int64_t)pfVar5 + lVar7 + 0xc);
      fVar16 = *(float *)((int64_t)pfVar5 + lVar7 + 0x10);
      fVar1 = pfVar5[3];
      fVar2 = pfVar5[4];
      fVar3 = pfVar8[-2];
      fVar14 = fVar16 * -0.5;
      fVar17 = (fVar13 + 1.0) * 0.5;
      fVar15 = (1.0 - fVar13) * 0.5;
      fVar16 = fVar16 * 0.5;
      fVar13 = pfVar8[-1];
      *(float *)((int64_t)pfVar5 + lVar11 + 0xc) =
           (fVar1 * fVar15 - fVar2 * fVar14) + fVar3 * fVar17 + fVar13 * fVar16;
      *(float *)((int64_t)pfVar5 + lVar11 + 0x10) =
           (fVar1 * fVar14 + fVar2 * fVar15 + fVar3 * fVar16) - fVar13 * fVar17;
      fVar13 = *(float *)((int64_t)pfVar5 + lVar7 + 0x14);
      fVar16 = *(float *)((int64_t)pfVar5 + lVar7 + 0x18);
      fVar1 = pfVar5[5];
      fVar2 = pfVar5[6];
      fVar3 = pfVar8[-4];
      fVar14 = pfVar8[-3];
      fVar17 = (1.0 - fVar13) * 0.5;
      pfVar8 = pfVar8 + -8;
      fVar15 = fVar16 * -0.5;
      fVar13 = (fVar13 + 1.0) * 0.5;
      fVar16 = fVar16 * 0.5;
      *(float *)((int64_t)pfVar5 + lVar11 + 0x14) =
           (fVar1 * fVar17 - fVar2 * fVar15) + fVar3 * fVar13 + fVar14 * fVar16;
      *(float *)((int64_t)pfVar5 + lVar11 + 0x18) =
           (fVar1 * fVar15 + fVar2 * fVar17 + fVar3 * fVar16) - fVar14 * fVar13;
      pfVar5 = pfVar5 + 8;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (lVar12 < unaff_R14) {
    pfVar5 = (float *)(unaff_RBX + 4 + lVar12 * 8);
    pfVar8 = (float *)(unaff_RBX + (unaff_R14 - lVar12) * 8);
    lVar12 = unaff_R14 - lVar12;
    do {
      fVar13 = *(float *)((int64_t)pfVar5 + (unaff_RDI - unaff_RBX) + -4);
      fVar16 = *(float *)((int64_t)pfVar5 + (unaff_RDI - unaff_RBX));
      fVar1 = pfVar5[-1];
      fVar2 = *pfVar5;
      fVar3 = *pfVar8;
      fVar14 = pfVar8[1];
      fVar17 = (1.0 - fVar13) * 0.5;
      pfVar8 = pfVar8 + -2;
      fVar15 = fVar16 * -0.5;
      fVar13 = (fVar13 + 1.0) * 0.5;
      fVar16 = fVar16 * 0.5;
      *(float *)((int64_t)pfVar5 + (in_R10 - unaff_RBX) + -4) =
           (fVar1 * fVar17 - fVar2 * fVar15) + fVar3 * fVar13 + fVar14 * fVar16;
      *(float *)((int64_t)pfVar5 + (in_R10 - unaff_RBX)) =
           (fVar1 * fVar15 + fVar2 * fVar17 + fVar3 * fVar16) - fVar14 * fVar13;
      pfVar5 = pfVar5 + 2;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  if (4 < (int)unaff_R14) {
    lVar12 = (unaff_R14 - 5U >> 2) + 1;
    lVar10 = lVar12 * 4 + 1;
    puVar6 = (int32_t *)(in_R10 + 0x10);
    puVar9 = (int32_t *)(in_R10 + (unaff_RBP + -2) * 8);
    do {
      puVar9[2] = puVar6[-2];
      puVar9[3] = puVar6[-1] ^ 0x80000000;
      *puVar9 = *puVar6;
      puVar9[1] = puVar6[1] ^ 0x80000000;
      puVar9[-2] = puVar6[2];
      puVar9[-1] = puVar6[3] ^ 0x80000000;
      puVar9[-4] = puVar6[4];
      puVar9[-3] = puVar6[5] ^ 0x80000000;
      lVar12 = lVar12 + -1;
      puVar6 = puVar6 + 8;
      puVar9 = puVar9 + -8;
    } while (lVar12 != 0);
  }
  if (lVar10 < unaff_R14) {
    puVar6 = (int32_t *)(in_R10 + (unaff_RBP - lVar10) * 8);
    do {
      *puVar6 = *(int32_t *)(in_R10 + lVar10 * 8);
      lVar12 = lVar10 * 8;
      lVar10 = lVar10 + 1;
      puVar6[1] = *(uint *)(in_R10 + 4 + lVar12) ^ 0x80000000;
      puVar6 = puVar6 + -2;
    } while (lVar10 < unaff_R14);
  }
  return;
}
// 函数: void function_7ef89c(uint64_t param_1,uint64_t param_2,int64_t param_3)
void function_7ef89c(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  float fVar1;
  float fVar2;
  float fVar3;
  int64_t lVar4;
  float *pfVar5;
  int32_t *puVar6;
  int64_t lVar7;
  float *pfVar8;
  int32_t *puVar9;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int64_t lVar10;
  int64_t lVar11;
  int64_t in_R10;
  int64_t in_R11;
  int64_t unaff_R14;
  uint64_t unaff_R15;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  *(uint64_t *)(in_R11 + 0x10) = unaff_R15;
  lVar7 = unaff_RDI - unaff_RBX;
  pfVar5 = (float *)(unaff_RBX + 0xc);
  lVar10 = in_R10 - unaff_RBX;
  pfVar8 = (float *)(unaff_RBX + -0x10 + unaff_R14 * 8);
  lVar4 = (unaff_R14 - 5U >> 2) + 1;
  lVar11 = lVar4 * 4 + 1;
  do {
    fVar12 = *(float *)((int64_t)pfVar5 + lVar7 + -4);
    fVar15 = pfVar5[-1];
    fVar1 = *pfVar5;
    fVar2 = pfVar8[2];
    fVar3 = pfVar8[3];
    fVar13 = (unaff_XMM12_Da - fVar12) * unaff_XMM11_Da;
    fVar16 = (fVar12 + unaff_XMM12_Da) * unaff_XMM11_Da;
    fVar12 = *(float *)((int64_t)pfVar5 + lVar7) * unaff_XMM13_Da;
    fVar14 = *(float *)((int64_t)pfVar5 + lVar7) * unaff_XMM11_Da;
    *(float *)((int64_t)pfVar5 + lVar10) =
         (fVar15 * fVar12 + fVar1 * fVar13 + fVar2 * fVar14) - fVar3 * fVar16;
    *(float *)((int64_t)pfVar5 + lVar10 + -4) =
         (fVar15 * fVar13 - fVar1 * fVar12) + fVar2 * fVar16 + fVar3 * fVar14;
    fVar12 = *(float *)((int64_t)pfVar5 + lVar7 + 4);
    fVar15 = *(float *)((int64_t)pfVar5 + lVar7 + 8);
    fVar1 = pfVar5[1];
    fVar2 = pfVar5[2];
    fVar3 = *pfVar8;
    fVar13 = pfVar8[1];
    fVar14 = (unaff_XMM12_Da - fVar12) * unaff_XMM11_Da;
    fVar16 = (fVar12 + unaff_XMM12_Da) * unaff_XMM11_Da;
    fVar12 = fVar15 * unaff_XMM13_Da;
    fVar15 = fVar15 * unaff_XMM11_Da;
    *(float *)((int64_t)pfVar5 + lVar10 + 8) =
         (fVar1 * fVar12 + fVar2 * fVar14 + fVar3 * fVar15) - fVar13 * fVar16;
    *(float *)((int64_t)pfVar5 + lVar10 + 4) =
         (fVar1 * fVar14 - fVar2 * fVar12) + fVar3 * fVar16 + fVar13 * fVar15;
    fVar12 = *(float *)((int64_t)pfVar5 + lVar7 + 0xc);
    fVar15 = *(float *)((int64_t)pfVar5 + lVar7 + 0x10);
    fVar1 = pfVar5[3];
    fVar2 = pfVar5[4];
    fVar3 = pfVar8[-2];
    fVar13 = fVar15 * unaff_XMM13_Da;
    fVar16 = (fVar12 + unaff_XMM12_Da) * unaff_XMM11_Da;
    fVar14 = (unaff_XMM12_Da - fVar12) * unaff_XMM11_Da;
    fVar15 = fVar15 * unaff_XMM11_Da;
    fVar12 = pfVar8[-1];
    *(float *)((int64_t)pfVar5 + lVar10 + 0xc) =
         (fVar1 * fVar14 - fVar2 * fVar13) + fVar3 * fVar16 + fVar12 * fVar15;
    *(float *)((int64_t)pfVar5 + lVar10 + 0x10) =
         (fVar1 * fVar13 + fVar2 * fVar14 + fVar3 * fVar15) - fVar12 * fVar16;
    fVar12 = *(float *)((int64_t)pfVar5 + lVar7 + 0x14);
    fVar15 = *(float *)((int64_t)pfVar5 + lVar7 + 0x18);
    fVar1 = pfVar5[5];
    fVar2 = pfVar5[6];
    fVar3 = pfVar8[-4];
    fVar13 = pfVar8[-3];
    fVar16 = (unaff_XMM12_Da - fVar12) * unaff_XMM11_Da;
    pfVar8 = pfVar8 + -8;
    fVar14 = fVar15 * unaff_XMM13_Da;
    fVar12 = (fVar12 + unaff_XMM12_Da) * unaff_XMM11_Da;
    fVar15 = fVar15 * unaff_XMM11_Da;
    *(float *)((int64_t)pfVar5 + lVar10 + 0x14) =
         (fVar1 * fVar16 - fVar2 * fVar14) + fVar3 * fVar12 + fVar13 * fVar15;
    *(float *)((int64_t)pfVar5 + lVar10 + 0x18) =
         (fVar1 * fVar14 + fVar2 * fVar16 + fVar3 * fVar15) - fVar13 * fVar12;
    pfVar5 = pfVar5 + 8;
    lVar4 = lVar4 - param_3;
  } while (lVar4 != 0);
  if (lVar11 < unaff_R14) {
    pfVar5 = (float *)(unaff_RBX + 4 + lVar11 * 8);
    pfVar8 = (float *)(unaff_RBX + (unaff_R14 - lVar11) * 8);
    lVar11 = unaff_R14 - lVar11;
    do {
      fVar12 = *(float *)((int64_t)pfVar5 + (unaff_RDI - unaff_RBX) + -4);
      fVar15 = *(float *)((int64_t)pfVar5 + (unaff_RDI - unaff_RBX));
      fVar1 = pfVar5[-1];
      fVar2 = *pfVar5;
      fVar3 = *pfVar8;
      fVar13 = pfVar8[1];
      fVar16 = (unaff_XMM12_Da - fVar12) * unaff_XMM11_Da;
      pfVar8 = pfVar8 + -2;
      fVar14 = fVar15 * unaff_XMM13_Da;
      fVar12 = (fVar12 + unaff_XMM12_Da) * unaff_XMM11_Da;
      fVar15 = fVar15 * unaff_XMM11_Da;
      *(float *)((int64_t)pfVar5 + (in_R10 - unaff_RBX) + -4) =
           (fVar1 * fVar16 - fVar2 * fVar14) + fVar3 * fVar12 + fVar13 * fVar15;
      *(float *)((int64_t)pfVar5 + (in_R10 - unaff_RBX)) =
           (fVar1 * fVar14 + fVar2 * fVar16 + fVar3 * fVar15) - fVar13 * fVar12;
      pfVar5 = pfVar5 + 2;
      lVar11 = lVar11 - param_3;
    } while (lVar11 != 0);
  }
  if (4 < (int)unaff_R14) {
    lVar11 = (unaff_R14 - 5U >> 2) + 1;
    param_3 = lVar11 * 4 + 1;
    puVar6 = (int32_t *)(in_R10 + 0x10);
    puVar9 = (int32_t *)(in_R10 + (unaff_RBP + -2) * 8);
    do {
      puVar9[2] = puVar6[-2];
      puVar9[3] = puVar6[-1] ^ 0x80000000;
      *puVar9 = *puVar6;
      puVar9[1] = puVar6[1] ^ 0x80000000;
      puVar9[-2] = puVar6[2];
      puVar9[-1] = puVar6[3] ^ 0x80000000;
      puVar9[-4] = puVar6[4];
      puVar9[-3] = puVar6[5] ^ 0x80000000;
      lVar11 = lVar11 + -1;
      puVar6 = puVar6 + 8;
      puVar9 = puVar9 + -8;
    } while (lVar11 != 0);
  }
  if (param_3 < unaff_R14) {
    puVar6 = (int32_t *)(in_R10 + (unaff_RBP - param_3) * 8);
    do {
      *puVar6 = *(int32_t *)(in_R10 + param_3 * 8);
      lVar11 = param_3 * 8;
      param_3 = param_3 + 1;
      puVar6[1] = *(uint *)(in_R10 + 4 + lVar11) ^ 0x80000000;
      puVar6 = puVar6 + -2;
    } while (param_3 < unaff_R14);
  }
  return;
}
// 函数: void function_7efb6d(uint64_t param_1,uint64_t param_2,int64_t param_3)
void function_7efb6d(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int32_t *puVar6;
  float *pfVar7;
  int32_t *puVar8;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t lVar9;
  int64_t in_R10;
  int64_t unaff_R14;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  if (unaff_RSI < unaff_R14) {
    pfVar5 = (float *)(unaff_RBX + 4 + unaff_RSI * 8);
    pfVar7 = (float *)(unaff_RBX + (unaff_R14 - unaff_RSI) * 8);
    lVar9 = unaff_R14 - unaff_RSI;
    do {
      fVar13 = *(float *)((int64_t)pfVar5 + (unaff_RDI - unaff_RBX) + -4);
      fVar12 = *(float *)((int64_t)pfVar5 + (unaff_RDI - unaff_RBX));
      fVar1 = pfVar5[-1];
      fVar2 = *pfVar5;
      fVar3 = *pfVar7;
      fVar4 = pfVar7[1];
      fVar11 = (unaff_XMM12_Da - fVar13) * unaff_XMM11_Da;
      pfVar7 = pfVar7 + -2;
      fVar10 = fVar12 * unaff_XMM13_Da;
      fVar13 = (fVar13 + unaff_XMM12_Da) * unaff_XMM11_Da;
      fVar12 = fVar12 * unaff_XMM11_Da;
      *(float *)((int64_t)pfVar5 + (in_R10 - unaff_RBX) + -4) =
           (fVar1 * fVar11 - fVar2 * fVar10) + fVar3 * fVar13 + fVar4 * fVar12;
      *(float *)((int64_t)pfVar5 + (in_R10 - unaff_RBX)) =
           (fVar1 * fVar10 + fVar2 * fVar11 + fVar3 * fVar12) - fVar4 * fVar13;
      pfVar5 = pfVar5 + 2;
      lVar9 = lVar9 - param_3;
    } while (lVar9 != 0);
  }
  if (4 < (int)unaff_R14) {
    lVar9 = (unaff_R14 - 5U >> 2) + 1;
    param_3 = lVar9 * 4 + 1;
    puVar6 = (int32_t *)(in_R10 + 0x10);
    puVar8 = (int32_t *)(in_R10 + (unaff_RBP + -2) * 8);
    do {
      puVar8[2] = puVar6[-2];
      puVar8[3] = puVar6[-1] ^ 0x80000000;
      *puVar8 = *puVar6;
      puVar8[1] = puVar6[1] ^ 0x80000000;
      puVar8[-2] = puVar6[2];
      puVar8[-1] = puVar6[3] ^ 0x80000000;
      puVar8[-4] = puVar6[4];
      puVar8[-3] = puVar6[5] ^ 0x80000000;
      lVar9 = lVar9 + -1;
      puVar6 = puVar6 + 8;
      puVar8 = puVar8 + -8;
    } while (lVar9 != 0);
  }
  if (param_3 < unaff_R14) {
    puVar6 = (int32_t *)(in_R10 + (unaff_RBP - param_3) * 8);
    do {
      *puVar6 = *(int32_t *)(in_R10 + param_3 * 8);
      lVar9 = param_3 * 8;
      param_3 = param_3 + 1;
      puVar6[1] = *(uint *)(in_R10 + 4 + lVar9) ^ 0x80000000;
      puVar6 = puVar6 + -2;
    } while (param_3 < unaff_R14);
  }
  return;
}
// 函数: void function_7efc89(uint64_t param_1,uint param_2)
void function_7efc89(uint64_t param_1,uint param_2)
{
  int32_t *puVar1;
  int32_t *puVar2;
  int64_t unaff_RBP;
  int64_t lVar3;
  int64_t lVar4;
  int64_t in_R10;
  int64_t unaff_R14;
  lVar4 = (unaff_R14 - 5U >> 2) + 1;
  lVar3 = lVar4 * 4 + 1;
  puVar1 = (int32_t *)(in_R10 + 0x10);
  puVar2 = (int32_t *)(in_R10 + (unaff_RBP + -2) * 8);
  do {
    puVar2[2] = puVar1[-2];
    puVar2[3] = puVar1[-1] ^ param_2;
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1] ^ param_2;
    puVar2[-2] = puVar1[2];
    puVar2[-1] = puVar1[3] ^ param_2;
    puVar2[-4] = puVar1[4];
    puVar2[-3] = puVar1[5] ^ param_2;
    lVar4 = lVar4 + -1;
    puVar1 = puVar1 + 8;
    puVar2 = puVar2 + -8;
  } while (lVar4 != 0);
  if (lVar3 < unaff_R14) {
    puVar1 = (int32_t *)(in_R10 + (unaff_RBP - lVar3) * 8);
    do {
      *puVar1 = *(int32_t *)(in_R10 + lVar3 * 8);
      lVar4 = lVar3 * 8;
      lVar3 = lVar3 + 1;
      puVar1[1] = *(uint *)(in_R10 + 4 + lVar4) ^ param_2;
      puVar1 = puVar1 + -2;
    } while (lVar3 < unaff_R14);
  }
  return;
}
// 函数: void function_7efd50(int64_t param_1,int64_t param_2,int64_t param_3,int param_4)
void function_7efd50(int64_t param_1,int64_t param_2,int64_t param_3,int param_4)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int64_t lVar5;
  float *pfVar6;
  float *pfVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  lVar9 = 0;
  lVar11 = (int64_t)(param_4 / 2);
  if (3 < lVar11) {
    pfVar7 = (float *)(param_1 + -8 + lVar11 * 8);
    lVar10 = param_2 - param_1;
    pfVar6 = (float *)(param_1 + 4);
    lVar8 = param_3 - param_1;
    lVar5 = (lVar11 - 4U >> 2) + 1;
    lVar9 = lVar5 * 4;
    do {
      fVar14 = *(float *)(lVar8 + (int64_t)pfVar6);
      fVar13 = *(float *)((int64_t)pfVar6 + lVar8 + -4);
      fVar1 = pfVar6[-1];
      fVar12 = 1.0 - fVar13;
      fVar2 = *pfVar6;
      fVar13 = fVar13 + 1.0;
      fVar3 = pfVar7[2];
      fVar4 = pfVar7[3];
      *(float *)((int64_t)pfVar6 + lVar10 + -4) =
           (fVar1 * fVar12 - fVar2 * fVar14) + fVar3 * fVar13 + fVar4 * -fVar14;
      *(float *)(lVar10 + (int64_t)pfVar6) =
           (fVar2 * fVar12 + fVar1 * fVar14 + fVar3 * -fVar14) - fVar4 * fVar13;
      fVar14 = *(float *)(lVar8 + 8 + (int64_t)pfVar6);
      fVar13 = *(float *)(lVar8 + 4 + (int64_t)pfVar6);
      fVar1 = pfVar6[1];
      fVar12 = 1.0 - fVar13;
      fVar2 = pfVar6[2];
      fVar13 = fVar13 + 1.0;
      fVar3 = *pfVar7;
      fVar4 = pfVar7[1];
      *(float *)(lVar10 + 4 + (int64_t)pfVar6) =
           (fVar1 * fVar12 - fVar2 * fVar14) + fVar3 * fVar13 + fVar4 * -fVar14;
      *(float *)(lVar10 + 8 + (int64_t)pfVar6) =
           (fVar2 * fVar12 + fVar1 * fVar14 + fVar3 * -fVar14) - fVar4 * fVar13;
      fVar14 = *(float *)(lVar8 + 0xc + (int64_t)pfVar6);
      fVar13 = *(float *)(lVar8 + 0x10 + (int64_t)pfVar6);
      fVar12 = 1.0 - fVar14;
      fVar1 = pfVar6[3];
      fVar14 = fVar14 + 1.0;
      fVar2 = pfVar6[4];
      fVar3 = pfVar7[-2];
      fVar4 = pfVar7[-1];
      *(float *)(lVar10 + 0xc + (int64_t)pfVar6) =
           (fVar1 * fVar12 - fVar2 * fVar13) + fVar3 * fVar14 + fVar4 * -fVar13;
      *(float *)(lVar10 + 0x10 + (int64_t)pfVar6) =
           (fVar2 * fVar12 + fVar1 * fVar13 + fVar3 * -fVar13) - fVar4 * fVar14;
      fVar14 = *(float *)(lVar8 + 0x18 + (int64_t)pfVar6);
      fVar13 = *(float *)(lVar8 + 0x14 + (int64_t)pfVar6);
      fVar1 = pfVar6[5];
      fVar12 = 1.0 - fVar13;
      fVar2 = pfVar6[6];
      fVar13 = fVar13 + 1.0;
      fVar3 = pfVar7[-4];
      fVar4 = pfVar7[-3];
      pfVar7 = pfVar7 + -8;
      *(float *)(lVar10 + 0x14 + (int64_t)pfVar6) =
           (fVar1 * fVar12 - fVar2 * fVar14) + fVar3 * fVar13 + fVar4 * -fVar14;
      *(float *)((int64_t)pfVar6 + lVar10 + 0x18) =
           (fVar2 * fVar12 + fVar1 * fVar14 + fVar3 * -fVar14) - fVar4 * fVar13;
      pfVar6 = pfVar6 + 8;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (lVar9 < lVar11) {
    pfVar7 = (float *)(param_1 + 4 + lVar9 * 8);
    lVar5 = lVar11 - lVar9;
    pfVar6 = (float *)(param_1 + (lVar11 - lVar9) * 8);
    do {
      fVar14 = *(float *)((param_3 - param_1) + (int64_t)pfVar7);
      fVar13 = *(float *)((int64_t)pfVar7 + (param_3 - param_1) + -4);
      fVar1 = pfVar7[-1];
      fVar12 = 1.0 - fVar13;
      fVar2 = *pfVar7;
      fVar13 = fVar13 + 1.0;
      fVar3 = *pfVar6;
      fVar4 = pfVar6[1];
      pfVar6 = pfVar6 + -2;
      *(float *)((int64_t)pfVar7 + (param_2 - param_1) + -4) =
           (fVar1 * fVar12 - fVar2 * fVar14) + fVar3 * fVar13 + fVar4 * -fVar14;
      *(float *)((param_2 - param_1) + (int64_t)pfVar7) =
           (fVar2 * fVar12 + fVar1 * fVar14 + fVar3 * -fVar14) - fVar4 * fVar13;
      pfVar7 = pfVar7 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}