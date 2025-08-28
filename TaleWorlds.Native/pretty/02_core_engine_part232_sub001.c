#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part232_sub001.c - 13 个函数

#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part232.c - 13 个函数


// 函数: void FUN_180202180(int64_t param_1)
void FUN_180202180(int64_t param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int8_t auVar5 [16];
  int8_t auVar6 [16];
  int8_t auVar7 [16];
  int8_t auVar8 [16];
  int8_t auVar9 [16];
  int8_t auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int64_t lVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint uVar19;
  uint uVar20;
  float *pfVar21;
  int64_t lVar22;
  int64_t lVar23;
  float *pfVar24;
  uint64_t uVar25;
  uint64_t uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  
  pfVar24 = *(float **)(param_1 + 0x70);
  uVar18 = 0;
  pfVar4 = *(float **)(param_1 + 0x68);
  uVar20 = 0;
  if (pfVar4 != pfVar24) {
    lVar23 = (int64_t)pfVar24 - (int64_t)pfVar4 >> 2;
    uVar26 = uVar18;
    uVar19 = uVar20;
    for (lVar16 = lVar23; lVar16 != 0; lVar16 = lVar16 >> 1) {
      uVar19 = (int)uVar26 + 1;
      uVar26 = (uint64_t)uVar19;
    }
    FUN_180202d20(pfVar4,pfVar24,(int64_t)(int)(uVar19 - 1) * 2,0);
    if (lVar23 < 0x1d) {
      func_0x00018009d8a0(pfVar4,pfVar24);
    }
    else {
      pfVar21 = pfVar4 + 0x1c;
      func_0x00018009d8a0(pfVar4);
      for (; pfVar21 != pfVar24; pfVar21 = pfVar21 + 1) {
        fVar2 = *pfVar21;
        fVar1 = pfVar21[-1];
        pfVar4 = pfVar21;
        while (fVar2 < fVar1) {
          *pfVar4 = fVar1;
          fVar1 = pfVar4[-2];
          pfVar4 = pfVar4 + -1;
        }
        *pfVar4 = fVar2;
      }
    }
  }
  pfVar24 = *(float **)(param_1 + 0x90);
  pfVar4 = *(float **)(param_1 + 0x88);
  if (pfVar4 != pfVar24) {
    lVar23 = (int64_t)pfVar24 - (int64_t)pfVar4 >> 2;
    uVar26 = uVar18;
    for (lVar16 = lVar23; lVar16 != 0; lVar16 = lVar16 >> 1) {
      uVar20 = (int)uVar26 + 1;
      uVar26 = (uint64_t)uVar20;
    }
    FUN_180202d20(pfVar4,pfVar24,(int64_t)(int)(uVar20 - 1) * 2,0);
    if (lVar23 < 0x1d) {
      func_0x00018009d8a0(pfVar4,pfVar24);
    }
    else {
      pfVar21 = pfVar4 + 0x1c;
      func_0x00018009d8a0(pfVar4);
      for (; pfVar21 != pfVar24; pfVar21 = pfVar21 + 1) {
        fVar2 = *pfVar21;
        fVar1 = pfVar21[-1];
        pfVar4 = pfVar21;
        while (fVar2 < fVar1) {
          *pfVar4 = fVar1;
          fVar1 = pfVar4[-2];
          pfVar4 = pfVar4 + -1;
        }
        *pfVar4 = fVar2;
      }
    }
  }
  pfVar24 = *(float **)(param_1 + 0x68);
  dVar28 = 0.0;
  dVar32 = 0.0;
  dVar27 = 0.0;
  uVar26 = *(int64_t *)(param_1 + 0x70) - (int64_t)pfVar24 >> 2;
  dVar29 = 0.0;
  dVar12 = 0.0;
  dVar31 = 0.0;
  dVar14 = 0.0;
  if (uVar26 != 0) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar26;
    lVar16 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar5,8);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar26 * 0xf;
    lVar23 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar6,8);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar26 * 0x1e;
    lVar22 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar7,8);
    uVar17 = uVar18;
    uVar25 = uVar18;
    dVar32 = 0.0;
    dVar12 = 0.0;
    dVar14 = 0.0;
    do {
      if ((int64_t)uVar17 < (int64_t)(int)((uVar26 - lVar16 >> 1) + lVar16 >> 6)) {
        dVar27 = dVar27 + 1.0;
        dVar32 = dVar32 + (double)*pfVar24;
      }
      if ((int64_t)uVar17 < (int64_t)(int)((uVar26 * 0xf - lVar23 >> 1) + lVar23 >> 6)) {
        dVar12 = dVar12 + 1.0;
        dVar29 = dVar29 + (double)*pfVar24;
      }
      if ((int64_t)uVar17 < (int64_t)(int)((uVar26 * 0x1e - lVar22 >> 1) + lVar22 >> 6)) {
        dVar14 = dVar14 + 1.0;
        dVar31 = dVar31 + (double)*pfVar24;
      }
      uVar20 = (int)uVar25 + 1;
      uVar25 = (uint64_t)uVar20;
      uVar17 = uVar17 + 1;
      pfVar24 = pfVar24 + 1;
    } while ((uint64_t)(int64_t)(int)uVar20 < uVar26);
  }
  iVar3 = *(int *)(param_1 + 0xdc);
  dVar13 = 0.0;
  dVar15 = 1.0 / (double)iVar3;
  dVar11 = 0.0;
  dVar33 = (double)(iVar3 + -1);
  dVar30 = 0.0;
  *(double *)(param_1 + 0xf0) =
       ((1.0 / dVar27) * dVar32 + dVar33 * *(double *)(param_1 + 0xf0)) * dVar15;
  dVar32 = 0.0;
  *(double *)(param_1 + 0xf8) = (dVar33 * *(double *)(param_1 + 0xf8) + dVar29 / dVar12) * dVar15;
  *(double *)(param_1 + 0x100) = (dVar33 * *(double *)(param_1 + 0x100) + dVar31 / dVar14) * dVar15;
  pfVar24 = *(float **)(param_1 + 0x88);
  uVar26 = *(int64_t *)(param_1 + 0x90) - (int64_t)pfVar24 >> 2;
  if (uVar26 != 0) {
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar26;
    lVar16 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar8,8);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar26 * 0xf;
    lVar23 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar9,8);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar26 * 0x1e;
    lVar22 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar10,8);
    uVar17 = uVar18;
    dVar11 = 0.0;
    dVar13 = 0.0;
    do {
      if ((int64_t)uVar18 < (int64_t)(int)((uVar26 - lVar16 >> 1) + lVar16 >> 6)) {
        dVar28 = dVar28 + (double)*pfVar24;
      }
      if ((int64_t)uVar18 < (int64_t)(int)((uVar26 * 0xf - lVar23 >> 1) + lVar23 >> 6)) {
        dVar11 = dVar11 + 1.0;
        dVar30 = dVar30 + (double)*pfVar24;
      }
      if ((int64_t)uVar18 < (int64_t)(int)((uVar26 * 0x1e - lVar22 >> 1) + lVar22 >> 6)) {
        dVar13 = dVar13 + 1.0;
        dVar32 = dVar32 + (double)*pfVar24;
      }
      uVar20 = (int)uVar17 + 1;
      uVar17 = (uint64_t)uVar20;
      uVar18 = uVar18 + 1;
      pfVar24 = pfVar24 + 1;
    } while ((uint64_t)(int64_t)(int)uVar20 < uVar26);
  }
  *(int *)(param_1 + 0xdc) = iVar3 + 1;
  *(double *)(param_1 + 0x108) =
       (dVar33 * *(double *)(param_1 + 0x108) + (1.0 / dVar27) * dVar28) * dVar15;
  *(double *)(param_1 + 0x110) = (dVar33 * *(double *)(param_1 + 0x110) + dVar30 / dVar11) * dVar15;
  *(double *)(param_1 + 0x118) = (dVar33 * *(double *)(param_1 + 0x118) + dVar32 / dVar13) * dVar15;
  *(double *)(param_1 + 0xe0) =
       (dVar33 * *(double *)(param_1 + 0xe0) + *(double *)(param_1 + 0xc0)) * dVar15;
  *(double *)(param_1 + 0xe8) =
       (dVar33 * *(double *)(param_1 + 0xe8) + *(double *)(param_1 + 0xb8)) * dVar15;
  return;
}






// 函数: void FUN_1802021bc(void)
void FUN_1802021bc(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int8_t auVar5 [16];
  int8_t auVar6 [16];
  int8_t auVar7 [16];
  int8_t auVar8 [16];
  int8_t auVar9 [16];
  int8_t auVar10 [16];
  double dVar11;
  int64_t in_RAX;
  int64_t lVar12;
  uint64_t uVar13;
  uint uVar14;
  float *pfVar15;
  float *pfVar16;
  int64_t lVar17;
  float *unaff_RBX;
  uint64_t unaff_RBP;
  int64_t lVar18;
  uint64_t unaff_RSI;
  float *unaff_RDI;
  uint64_t uVar19;
  uint64_t uVar20;
  int64_t unaff_R14;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  double dVar30;
  double dVar31;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBP;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM8_Dd;
  uVar14 = (uint)unaff_RSI;
  if (unaff_RDI != unaff_RBX) {
    lVar18 = (int64_t)unaff_RBX - (int64_t)unaff_RDI >> 2;
    for (lVar12 = lVar18; lVar12 != 0; lVar12 = lVar12 >> 1) {
    }
    FUN_180202d20();
    if (lVar18 < 0x1d) {
      func_0x00018009d8a0();
    }
    else {
      pfVar15 = unaff_RDI + 0x1c;
      func_0x00018009d8a0();
      for (; pfVar15 != unaff_RBX; pfVar15 = pfVar15 + 1) {
        fVar2 = *pfVar15;
        fVar1 = pfVar15[-1];
        pfVar4 = pfVar15;
        while (fVar2 < fVar1) {
          *pfVar4 = fVar1;
          fVar1 = pfVar4[-2];
          pfVar4 = pfVar4 + -1;
        }
        *pfVar4 = fVar2;
      }
    }
  }
  pfVar15 = *(float **)(unaff_R14 + 0x90);
  pfVar4 = *(float **)(unaff_R14 + 0x88);
  if (pfVar4 != pfVar15) {
    uVar19 = unaff_RSI & 0xffffffff;
    lVar18 = (int64_t)pfVar15 - (int64_t)pfVar4 >> 2;
    for (lVar12 = lVar18; lVar12 != 0; lVar12 = lVar12 >> 1) {
      uVar14 = (int)uVar19 + 1;
      uVar19 = (uint64_t)uVar14;
    }
    FUN_180202d20(pfVar4,pfVar15,(int64_t)(int)(uVar14 - 1) * 2,0);
    if (lVar18 < 0x1d) {
      func_0x00018009d8a0(pfVar4,pfVar15);
    }
    else {
      pfVar16 = pfVar4 + 0x1c;
      func_0x00018009d8a0(pfVar4);
      for (; pfVar16 != pfVar15; pfVar16 = pfVar16 + 1) {
        fVar2 = *pfVar16;
        fVar1 = pfVar16[-1];
        pfVar4 = pfVar16;
        while (fVar2 < fVar1) {
          *pfVar4 = fVar1;
          fVar1 = pfVar4[-2];
          pfVar4 = pfVar4 + -1;
        }
        *pfVar4 = fVar2;
      }
    }
  }
  pfVar15 = *(float **)(unaff_R14 + 0x68);
  dVar22 = 0.0;
  dVar26 = 0.0;
  dVar21 = 0.0;
  uVar20 = *(int64_t *)(unaff_R14 + 0x70) - (int64_t)pfVar15 >> 2;
  dVar23 = 0.0;
  dVar28 = 0.0;
  dVar25 = 0.0;
  dVar11 = 0.0;
  uVar19 = unaff_RSI & 0xffffffff;
  if (uVar20 != 0) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar20;
    lVar12 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar5,8);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar20 * 0xf;
    lVar18 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar6,8);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar20 * 0x1e;
    lVar17 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar7,8);
    uVar13 = unaff_RSI;
    dVar11 = 0.0;
    do {
      if ((int64_t)uVar13 < (int64_t)(int)((uVar20 - lVar12 >> 1) + lVar12 >> 6)) {
        dVar21 = dVar21 + 1.0;
        dVar26 = dVar26 + (double)*pfVar15;
      }
      if ((int64_t)uVar13 < (int64_t)(int)((uVar20 * 0xf - lVar18 >> 1) + lVar18 >> 6)) {
        dVar28 = dVar28 + 1.0;
        dVar23 = dVar23 + (double)*pfVar15;
      }
      if ((int64_t)uVar13 < (int64_t)(int)((uVar20 * 0x1e - lVar17 >> 1) + lVar17 >> 6)) {
        dVar11 = dVar11 + 1.0;
        dVar25 = dVar25 + (double)*pfVar15;
      }
      uVar14 = (int)uVar19 + 1;
      uVar19 = (uint64_t)uVar14;
      uVar13 = uVar13 + 1;
      pfVar15 = pfVar15 + 1;
    } while ((uint64_t)(int64_t)(int)uVar14 < uVar20);
  }
  iVar3 = *(int *)(unaff_R14 + 0xdc);
  dVar29 = 0.0;
  dVar31 = 1.0 / (double)iVar3;
  dVar27 = 0.0;
  dVar30 = (double)(iVar3 + -1);
  dVar24 = 0.0;
  *(double *)(unaff_R14 + 0xf0) =
       ((1.0 / dVar21) * dVar26 + dVar30 * *(double *)(unaff_R14 + 0xf0)) * dVar31;
  dVar26 = 0.0;
  *(double *)(unaff_R14 + 0xf8) =
       (dVar30 * *(double *)(unaff_R14 + 0xf8) + dVar23 / dVar28) * dVar31;
  *(double *)(unaff_R14 + 0x100) =
       (dVar30 * *(double *)(unaff_R14 + 0x100) + dVar25 / dVar11) * dVar31;
  pfVar15 = *(float **)(unaff_R14 + 0x88);
  uVar19 = *(int64_t *)(unaff_R14 + 0x90) - (int64_t)pfVar15 >> 2;
  if (uVar19 != 0) {
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar19;
    lVar12 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar8,8);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar19 * 0xf;
    lVar18 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar9,8);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar19 * 0x1e;
    lVar17 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar10,8);
    uVar20 = unaff_RSI;
    do {
      if ((int64_t)unaff_RSI < (int64_t)(int)((uVar19 - lVar12 >> 1) + lVar12 >> 6)) {
        dVar22 = dVar22 + (double)*pfVar15;
      }
      if ((int64_t)unaff_RSI < (int64_t)(int)((uVar19 * 0xf - lVar18 >> 1) + lVar18 >> 6)) {
        dVar27 = dVar27 + 1.0;
        dVar24 = dVar24 + (double)*pfVar15;
      }
      if ((int64_t)unaff_RSI < (int64_t)(int)((uVar19 * 0x1e - lVar17 >> 1) + lVar17 >> 6)) {
        dVar29 = dVar29 + 1.0;
        dVar26 = dVar26 + (double)*pfVar15;
      }
      uVar14 = (int)uVar20 + 1;
      uVar20 = (uint64_t)uVar14;
      unaff_RSI = unaff_RSI + 1;
      pfVar15 = pfVar15 + 1;
    } while ((uint64_t)(int64_t)(int)uVar14 < uVar19);
  }
  *(int *)(unaff_R14 + 0xdc) = iVar3 + 1;
  *(double *)(unaff_R14 + 0x108) =
       (dVar30 * *(double *)(unaff_R14 + 0x108) + (1.0 / dVar21) * dVar22) * dVar31;
  *(double *)(unaff_R14 + 0x110) =
       (dVar30 * *(double *)(unaff_R14 + 0x110) + dVar24 / dVar27) * dVar31;
  *(double *)(unaff_R14 + 0x118) =
       (dVar30 * *(double *)(unaff_R14 + 0x118) + dVar26 / dVar29) * dVar31;
  *(double *)(unaff_R14 + 0xe0) =
       (dVar30 * *(double *)(unaff_R14 + 0xe0) + *(double *)(unaff_R14 + 0xc0)) * dVar31;
  *(double *)(unaff_R14 + 0xe8) =
       (dVar30 * *(double *)(unaff_R14 + 0xe8) + *(double *)(unaff_R14 + 0xb8)) * dVar31;
  return;
}






// 函数: void FUN_180202367(uint64_t param_1,double param_2,double param_3,int param_4)
void FUN_180202367(uint64_t param_1,double param_2,double param_3,int param_4)

{
  int iVar1;
  int8_t auVar2 [16];
  int8_t auVar3 [16];
  int8_t auVar4 [16];
  int8_t auVar5 [16];
  int8_t auVar6 [16];
  int8_t auVar7 [16];
  int8_t auVar8 [16];
  int8_t auVar9 [16];
  int8_t auVar10 [16];
  int8_t auVar11 [16];
  int8_t auVar12 [16];
  int8_t auVar13 [16];
  uint64_t uVar14;
  int64_t lVar15;
  int64_t lVar16;
  int64_t lVar17;
  uint uVar18;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  float *in_R8;
  float *pfVar20;
  uint64_t in_R10;
  int64_t unaff_R14;
  double in_XMM3_Qa;
  double in_XMM4_Qa;
  double dVar21;
  double in_XMM5_Qa;
  double dVar22;
  double unaff_XMM6_Qa;
  double dVar23;
  double unaff_XMM7_Qa;
  double dVar24;
  double unaff_XMM8_Qa;
  double dVar25;
  double dVar26;
  uint64_t uVar19;
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = unaff_RDI;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = in_R10;
  lVar15 = SUB168(auVar2 * auVar8,8);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = unaff_RDI;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = in_R10 * 0xf;
  lVar16 = SUB168(auVar3 * auVar9,8);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = unaff_RDI;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = in_R10 * 0x1e;
  lVar17 = SUB168(auVar4 * auVar10,8);
  uVar14 = unaff_RSI;
  do {
    if ((int64_t)uVar14 < (int64_t)(int)((in_R10 - lVar15 >> 1) + lVar15 >> 6)) {
      param_2 = param_2 + param_3;
      unaff_XMM6_Qa = unaff_XMM6_Qa + (double)*in_R8;
    }
    if ((int64_t)uVar14 < (int64_t)(int)((in_R10 * 0xf - lVar16 >> 1) + lVar16 >> 6)) {
      unaff_XMM7_Qa = unaff_XMM7_Qa + param_3;
      in_XMM4_Qa = in_XMM4_Qa + (double)*in_R8;
    }
    if ((int64_t)uVar14 < (int64_t)(int)((in_R10 * 0x1e - lVar17 >> 1) + lVar17 >> 6)) {
      unaff_XMM8_Qa = unaff_XMM8_Qa + param_3;
      in_XMM5_Qa = in_XMM5_Qa + (double)*in_R8;
    }
    param_4 = param_4 + 1;
    uVar14 = uVar14 + 1;
    in_R8 = in_R8 + 1;
  } while ((uint64_t)(int64_t)param_4 < in_R10);
  iVar1 = *(int *)(unaff_R14 + 0xdc);
  dVar26 = param_3 / (double)iVar1;
  dVar25 = (double)(iVar1 + -1);
  *(double *)(unaff_R14 + 0xf0) =
       ((param_3 / param_2) * unaff_XMM6_Qa + dVar25 * *(double *)(unaff_R14 + 0xf0)) * dVar26;
  *(double *)(unaff_R14 + 0xf8) =
       (dVar25 * *(double *)(unaff_R14 + 0xf8) + in_XMM4_Qa / unaff_XMM7_Qa) * dVar26;
  *(double *)(unaff_R14 + 0x100) =
       (dVar25 * *(double *)(unaff_R14 + 0x100) + in_XMM5_Qa / unaff_XMM8_Qa) * dVar26;
  pfVar20 = *(float **)(unaff_R14 + 0x88);
  uVar14 = *(int64_t *)(unaff_R14 + 0x90) - (int64_t)pfVar20 >> 2;
  dVar21 = in_XMM3_Qa;
  dVar22 = in_XMM3_Qa;
  dVar23 = in_XMM3_Qa;
  dVar24 = in_XMM3_Qa;
  if (uVar14 != 0) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = unaff_RDI;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar14;
    lVar15 = SUB168(auVar5 * auVar11,8);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = unaff_RDI;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar14 * 0xf;
    lVar16 = SUB168(auVar6 * auVar12,8);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = unaff_RDI;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar14 * 0x1e;
    lVar17 = SUB168(auVar7 * auVar13,8);
    uVar19 = unaff_RSI;
    do {
      if ((int64_t)unaff_RSI < (int64_t)(int)((uVar14 - lVar15 >> 1) + lVar15 >> 6)) {
        in_XMM3_Qa = in_XMM3_Qa + (double)*pfVar20;
      }
      if ((int64_t)unaff_RSI < (int64_t)(int)((uVar14 * 0xf - lVar16 >> 1) + lVar16 >> 6)) {
        dVar23 = dVar23 + param_3;
        dVar21 = dVar21 + (double)*pfVar20;
      }
      if ((int64_t)unaff_RSI < (int64_t)(int)((uVar14 * 0x1e - lVar17 >> 1) + lVar17 >> 6)) {
        dVar24 = dVar24 + param_3;
        dVar22 = dVar22 + (double)*pfVar20;
      }
      uVar18 = (int)uVar19 + 1;
      uVar19 = (uint64_t)uVar18;
      unaff_RSI = unaff_RSI + 1;
      pfVar20 = pfVar20 + 1;
    } while ((uint64_t)(int64_t)(int)uVar18 < uVar14);
  }
  *(int *)(unaff_R14 + 0xdc) = iVar1 + 1;
  *(double *)(unaff_R14 + 0x108) =
       (dVar25 * *(double *)(unaff_R14 + 0x108) + (param_3 / param_2) * in_XMM3_Qa) * dVar26;
  *(double *)(unaff_R14 + 0x110) =
       (dVar25 * *(double *)(unaff_R14 + 0x110) + dVar21 / dVar23) * dVar26;
  *(double *)(unaff_R14 + 0x118) =
       (dVar25 * *(double *)(unaff_R14 + 0x118) + dVar22 / dVar24) * dVar26;
  *(double *)(unaff_R14 + 0xe0) =
       (dVar25 * *(double *)(unaff_R14 + 0xe0) + *(double *)(unaff_R14 + 0xc0)) * dVar26;
  *(double *)(unaff_R14 + 0xe8) =
       (dVar25 * *(double *)(unaff_R14 + 0xe8) + *(double *)(unaff_R14 + 0xb8)) * dVar26;
  return;
}






// 函数: void FUN_1802024d5(uint64_t param_1,uint64_t param_2,double param_3,double param_4)
void FUN_1802024d5(uint64_t param_1,uint64_t param_2,double param_3,double param_4)

{
  int8_t auVar1 [16];
  int8_t auVar2 [16];
  int8_t auVar3 [16];
  int8_t auVar4 [16];
  int8_t auVar5 [16];
  int8_t auVar6 [16];
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int unaff_EBX;
  uint uVar10;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  float *in_R8;
  uint64_t in_R9;
  int64_t unaff_R14;
  double in_XMM4_Qa;
  double in_XMM5_Qa;
  double unaff_XMM6_Qa;
  double unaff_XMM7_Qa;
  double unaff_XMM9_Qa;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  double unaff_XMM11_Qa;
  uint64_t uVar11;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = unaff_RDI;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = in_R9;
  lVar7 = SUB168(auVar1 * auVar4,8);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = unaff_RDI;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = in_R9 * 0xf;
  lVar8 = SUB168(auVar2 * auVar5,8);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = unaff_RDI;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = in_R9 * 0x1e;
  lVar9 = SUB168(auVar3 * auVar6,8);
  uVar11 = unaff_RSI;
  do {
    if ((int64_t)unaff_RSI < (int64_t)(int)((in_R9 - lVar7 >> 1) + lVar7 >> 6)) {
      param_4 = param_4 + (double)*in_R8;
    }
    if ((int64_t)unaff_RSI < (int64_t)(int)((in_R9 * 0xf - lVar8 >> 1) + lVar8 >> 6)) {
      unaff_XMM6_Qa = unaff_XMM6_Qa + param_3;
      in_XMM4_Qa = in_XMM4_Qa + (double)*in_R8;
    }
    if ((int64_t)unaff_RSI < (int64_t)(int)((in_R9 * 0x1e - lVar9 >> 1) + lVar9 >> 6)) {
      unaff_XMM7_Qa = unaff_XMM7_Qa + param_3;
      in_XMM5_Qa = in_XMM5_Qa + (double)*in_R8;
    }
    uVar10 = (int)uVar11 + 1;
    uVar11 = (uint64_t)uVar10;
    unaff_RSI = unaff_RSI + 1;
    in_R8 = in_R8 + 1;
  } while ((uint64_t)(int64_t)(int)uVar10 < in_R9);
  *(int *)(unaff_R14 + 0xdc) = unaff_EBX + 1;
  *(double *)(unaff_R14 + 0x108) =
       (unaff_XMM9_Qa * *(double *)(unaff_R14 + 0x108) + unaff_XMM11_Qa * param_4) *
       (double)CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
  *(double *)(unaff_R14 + 0x110) =
       (unaff_XMM9_Qa * *(double *)(unaff_R14 + 0x110) + in_XMM4_Qa / unaff_XMM6_Qa) *
       (double)CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
  *(double *)(unaff_R14 + 0x118) =
       (unaff_XMM9_Qa * *(double *)(unaff_R14 + 0x118) + in_XMM5_Qa / unaff_XMM7_Qa) *
       (double)CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
  *(double *)(unaff_R14 + 0xe0) =
       (unaff_XMM9_Qa * *(double *)(unaff_R14 + 0xe0) + *(double *)(unaff_R14 + 0xc0)) *
       (double)CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
  *(double *)(unaff_R14 + 0xe8) =
       (unaff_XMM9_Qa * *(double *)(unaff_R14 + 0xe8) + *(double *)(unaff_R14 + 0xb8)) *
       (double)CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180202660(int64_t param_1)
void FUN_180202660(int64_t param_1)

{
  uint64_t uVar1;
  int32_t uVar2;
  int32_t *puVar3;
  void *puVar4;
  void *puStack_158;
  int32_t *puStack_150;
  int32_t uStack_148;
  uint64_t uStack_140;
  int8_t auStack_58 [32];
  uint64_t uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  puVar4 = &ui_system_data_1208_ptr;
  if (*(char *)(param_1 + 0xd9) != '\0') {
    puVar4 = &ui_system_data_1256_ptr;
  }
  CoreMemoryPoolValidator(auStack_58,puVar4);
  uVar1 = *(uint64_t *)(param_1 + 0xe8);
  puStack_158 = &system_data_buffer_ptr;
  uStack_140 = 0;
  puStack_150 = (int32_t *)0x0;
  uStack_148 = 0;
  puVar3 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  puStack_150 = puVar3;
  uVar2 = CoreEngineSystemCleanup(puVar3);
  uStack_140 = CONCAT44(uStack_140._4_4_,uVar2);
  *puVar3 = 0x74746162;
  puVar3[1] = 0x6d5f656c;
  puVar3[2] = 0x5f6e6961;
  puVar3[3] = 0x737066;
  uStack_148 = 0xf;
  FUN_180047e70(0x74746162,auStack_58,&puStack_158,(int)uVar1);
  puStack_158 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar3);
}






// 函数: void FUN_180202c00(float *param_1,float *param_2,int64_t param_3,int8_t param_4)
void FUN_180202c00(float *param_1,float *param_2,int64_t param_3,int8_t param_4)

{
  float fVar1;
  float fVar2;
  uint64_t uVar3;
  int64_t lVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  
  uVar3 = (int64_t)param_2 - (int64_t)param_1;
  while ((0x70 < (int64_t)(uVar3 & 0xfffffffffffffffc) && (0 < param_3))) {
    lVar4 = (int64_t)param_2 - (int64_t)param_1 >> 2;
    if (lVar4 < 0) {
      lVar4 = lVar4 + 1;
    }
    fVar7 = *param_1;
    fVar1 = param_2[-1];
    fVar2 = param_1[lVar4 >> 1];
    fVar8 = fVar7;
    if (fVar7 < fVar2) {
      fVar8 = fVar2;
      fVar2 = fVar7;
    }
    pfVar5 = param_2;
    pfVar6 = param_1;
    if ((fVar1 <= fVar8) && (fVar8 = fVar2, fVar2 < fVar1)) {
      fVar8 = fVar1;
    }
    while( true ) {
      while (fVar7 < fVar8) {
        fVar7 = pfVar6[1];
        pfVar6 = pfVar6 + 1;
      }
      pfVar5 = pfVar5 + -1;
      fVar1 = *pfVar5;
      while (fVar8 < fVar1) {
        pfVar5 = pfVar5 + -1;
        fVar1 = *pfVar5;
      }
      if (pfVar5 <= pfVar6) break;
      fVar1 = *pfVar6;
      *pfVar6 = *pfVar5;
      *pfVar5 = fVar1;
      fVar7 = pfVar6[1];
      pfVar6 = pfVar6 + 1;
    }
    param_3 = param_3 + -1;
    FUN_180202c00(pfVar6,param_2,param_3,param_4);
    uVar3 = (int64_t)pfVar6 - (int64_t)param_1;
    param_2 = pfVar6;
  }
  if (param_3 == 0) {
    FUN_180202e40(param_1,param_2,param_2,param_4);
  }
  return;
}






// 函数: void FUN_180202c0d(float *param_1,float *param_2,int64_t param_3,int8_t param_4)
void FUN_180202c0d(float *param_1,float *param_2,int64_t param_3,int8_t param_4)

{
  float fVar1;
  float fVar2;
  int64_t in_RAX;
  uint64_t uVar3;
  int64_t lVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  
  uVar3 = in_RAX - (int64_t)param_1;
  while ((0x70 < (int64_t)(uVar3 & 0xfffffffffffffffc) && (0 < param_3))) {
    lVar4 = (int64_t)param_2 - (int64_t)param_1 >> 2;
    if (lVar4 < 0) {
      lVar4 = lVar4 + 1;
    }
    fVar7 = *param_1;
    fVar1 = param_2[-1];
    fVar2 = param_1[lVar4 >> 1];
    fVar8 = fVar7;
    if (fVar7 < fVar2) {
      fVar8 = fVar2;
      fVar2 = fVar7;
    }
    pfVar5 = param_2;
    pfVar6 = param_1;
    if ((fVar1 <= fVar8) && (fVar8 = fVar2, fVar2 < fVar1)) {
      fVar8 = fVar1;
    }
    while( true ) {
      while (fVar7 < fVar8) {
        fVar7 = pfVar6[1];
        pfVar6 = pfVar6 + 1;
      }
      pfVar5 = pfVar5 + -1;
      fVar1 = *pfVar5;
      while (fVar8 < fVar1) {
        pfVar5 = pfVar5 + -1;
        fVar1 = *pfVar5;
      }
      if (pfVar5 <= pfVar6) break;
      fVar1 = *pfVar6;
      *pfVar6 = *pfVar5;
      *pfVar5 = fVar1;
      fVar7 = pfVar6[1];
      pfVar6 = pfVar6 + 1;
    }
    param_3 = param_3 + -1;
    FUN_180202c00(pfVar6,param_2,param_3,param_4);
    uVar3 = (int64_t)pfVar6 - (int64_t)param_1;
    param_2 = pfVar6;
  }
  if (param_3 == 0) {
    FUN_180202e40(param_1,param_2,param_2,param_4);
  }
  return;
}






// 函数: void FUN_180202c2d(int32_t param_1,float *param_2)
void FUN_180202c2d(int32_t param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int64_t lVar3;
  float *pfVar4;
  float *pfVar5;
  int8_t unaff_BL;
  int64_t unaff_RBP;
  float *unaff_RSI;
  float fVar6;
  float fVar7;
  
  do {
    pfVar5 = param_2;
    if (unaff_RBP < 1) break;
    lVar3 = (int64_t)param_2 - (int64_t)unaff_RSI >> 2;
    if (lVar3 < 0) {
      lVar3 = lVar3 + 1;
    }
    fVar6 = *unaff_RSI;
    fVar1 = param_2[-1];
    fVar2 = unaff_RSI[lVar3 >> 1];
    fVar7 = fVar6;
    if (fVar6 < fVar2) {
      fVar7 = fVar2;
      fVar2 = fVar6;
    }
    pfVar4 = param_2;
    pfVar5 = unaff_RSI;
    if ((fVar1 <= fVar7) && (fVar7 = fVar2, fVar2 < fVar1)) {
      fVar7 = fVar1;
    }
    while( true ) {
      while (fVar6 < fVar7) {
        fVar6 = pfVar5[1];
        pfVar5 = pfVar5 + 1;
      }
      pfVar4 = pfVar4 + -1;
      fVar1 = *pfVar4;
      while (fVar7 < fVar1) {
        pfVar4 = pfVar4 + -1;
        fVar1 = *pfVar4;
      }
      if (pfVar4 <= pfVar5) break;
      fVar1 = *pfVar5;
      *pfVar5 = *pfVar4;
      *pfVar4 = fVar1;
      fVar6 = pfVar5[1];
      pfVar5 = pfVar5 + 1;
    }
    unaff_RBP = unaff_RBP + -1;
    param_1 = FUN_180202c00(pfVar5,param_2,unaff_RBP,unaff_BL);
    param_2 = pfVar5;
  } while (0x70 < (int64_t)((int64_t)pfVar5 - (int64_t)unaff_RSI & 0xfffffffffffffffcU));
  if (unaff_RBP == 0) {
    FUN_180202e40(param_1,pfVar5,pfVar5,unaff_BL);
  }
  return;
}






// 函数: void FUN_180202cef(void)
void FUN_180202cef(void)

{
  int64_t unaff_RBP;
  
  if (unaff_RBP == 0) {
    FUN_180202e40();
  }
  return;
}






// 函数: void FUN_180202cf9(void)
void FUN_180202cf9(void)

{
  FUN_180202e40();
  return;
}






// 函数: void FUN_180202d20(float *param_1,float *param_2,int64_t param_3,int8_t param_4)
void FUN_180202d20(float *param_1,float *param_2,int64_t param_3,int8_t param_4)

{
  float fVar1;
  float fVar2;
  uint64_t uVar3;
  int64_t lVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  
  uVar3 = (int64_t)param_2 - (int64_t)param_1;
  while ((0x70 < (int64_t)(uVar3 & 0xfffffffffffffffc) && (0 < param_3))) {
    lVar4 = (int64_t)param_2 - (int64_t)param_1 >> 2;
    if (lVar4 < 0) {
      lVar4 = lVar4 + 1;
    }
    fVar7 = *param_1;
    fVar1 = param_2[-1];
    fVar2 = param_1[lVar4 >> 1];
    fVar8 = fVar7;
    if (fVar7 < fVar2) {
      fVar8 = fVar2;
      fVar2 = fVar7;
    }
    pfVar5 = param_2;
    pfVar6 = param_1;
    if ((fVar1 <= fVar8) && (fVar8 = fVar2, fVar2 < fVar1)) {
      fVar8 = fVar1;
    }
    while( true ) {
      while (fVar7 < fVar8) {
        fVar7 = pfVar6[1];
        pfVar6 = pfVar6 + 1;
      }
      pfVar5 = pfVar5 + -1;
      fVar1 = *pfVar5;
      while (fVar8 < fVar1) {
        pfVar5 = pfVar5 + -1;
        fVar1 = *pfVar5;
      }
      if (pfVar5 <= pfVar6) break;
      fVar1 = *pfVar6;
      *pfVar6 = *pfVar5;
      *pfVar5 = fVar1;
      fVar7 = pfVar6[1];
      pfVar6 = pfVar6 + 1;
    }
    param_3 = param_3 + -1;
    FUN_180202d20(pfVar6,param_2,param_3,param_4);
    uVar3 = (int64_t)pfVar6 - (int64_t)param_1;
    param_2 = pfVar6;
  }
  if (param_3 == 0) {
    FUN_180203100(param_1,param_2,param_2,param_4);
  }
  return;
}






// 函数: void FUN_180202d2d(float *param_1,float *param_2,int64_t param_3,int8_t param_4)
void FUN_180202d2d(float *param_1,float *param_2,int64_t param_3,int8_t param_4)

{
  float fVar1;
  float fVar2;
  int64_t in_RAX;
  uint64_t uVar3;
  int64_t lVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  
  uVar3 = in_RAX - (int64_t)param_1;
  while ((0x70 < (int64_t)(uVar3 & 0xfffffffffffffffc) && (0 < param_3))) {
    lVar4 = (int64_t)param_2 - (int64_t)param_1 >> 2;
    if (lVar4 < 0) {
      lVar4 = lVar4 + 1;
    }
    fVar7 = *param_1;
    fVar1 = param_2[-1];
    fVar2 = param_1[lVar4 >> 1];
    fVar8 = fVar7;
    if (fVar7 < fVar2) {
      fVar8 = fVar2;
      fVar2 = fVar7;
    }
    pfVar5 = param_2;
    pfVar6 = param_1;
    if ((fVar1 <= fVar8) && (fVar8 = fVar2, fVar2 < fVar1)) {
      fVar8 = fVar1;
    }
    while( true ) {
      while (fVar7 < fVar8) {
        fVar7 = pfVar6[1];
        pfVar6 = pfVar6 + 1;
      }
      pfVar5 = pfVar5 + -1;
      fVar1 = *pfVar5;
      while (fVar8 < fVar1) {
        pfVar5 = pfVar5 + -1;
        fVar1 = *pfVar5;
      }
      if (pfVar5 <= pfVar6) break;
      fVar1 = *pfVar6;
      *pfVar6 = *pfVar5;
      *pfVar5 = fVar1;
      fVar7 = pfVar6[1];
      pfVar6 = pfVar6 + 1;
    }
    param_3 = param_3 + -1;
    FUN_180202d20(pfVar6,param_2,param_3,param_4);
    uVar3 = (int64_t)pfVar6 - (int64_t)param_1;
    param_2 = pfVar6;
  }
  if (param_3 == 0) {
    FUN_180203100(param_1,param_2,param_2,param_4);
  }
  return;
}






