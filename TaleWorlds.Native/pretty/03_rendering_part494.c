#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part494.c - 17 个函数

// 函数: void FUN_1805308fe(float *param_1,float param_2,uint64_t param_3,float param_4)
void FUN_1805308fe(float *param_1,float param_2,uint64_t param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int32_t in_EAX;
  uint uVar5;
  int iVar6;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int in_R9D;
  bool in_ZF;
  float in_XMM0_Da;
  float extraout_XMM0_Da;
  int32_t extraout_XMM0_Db;
  int8_t auVar7 [16];
  float fVar8;
  float fVar9;
  int32_t uVar11;
  int8_t auVar10 [16];
  float fVar12;
  float in_XMM4_Dd;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  
  uVar11 = 0x3f000000;
  param_1[0x1c] = param_4;
  param_1[0x1d] = in_XMM0_Da;
  param_1[0x1e] = param_2;
  param_1[0x1f] = in_XMM4_Dd;
  fVar9 = param_1[0x14];
  fVar16 = param_1[4];
  fVar13 = param_1[0x15];
  fVar15 = param_1[5];
  fVar14 = param_1[0x16];
  fVar1 = param_1[6];
  param_1[0x24] = param_4;
  param_1[0x25] = in_XMM0_Da;
  param_1[0x26] = param_2;
  param_1[0x27] = in_XMM4_Dd;
  *(int32_t *)(unaff_RBP + -0x7d) = 0x7f7fffff;
  param_1[0x20] = fVar9 - fVar16;
  param_1[0x21] = fVar13 - fVar15;
  param_1[0x22] = fVar14 - fVar1;
  param_1[0x23] = in_XMM4_Dd;
  fVar9 = param_1[0x25];
  fVar16 = param_1[0x24];
  fVar13 = param_1[0x26];
  fVar14 = fVar16 * fVar16 + fVar9 * fVar9 + fVar13 * fVar13;
  auVar10 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
  fVar15 = auVar10._0_4_;
  fVar15 = fVar15 * 0.5 * (3.0 - fVar14 * fVar15 * fVar15);
  fVar14 = fVar15 * fVar14;
  param_1[0x24] = fVar16 * fVar15;
  param_1[0x25] = fVar9 * fVar15;
  param_1[0x26] = fVar13 * fVar15;
  param_1[0x28] = fVar14;
  if (in_ZF) {
    fVar16 = *(float *)(unaff_RBP + 0x6f) * 1.96;
    fVar9 = fVar14;
    if (((fVar16 < fVar14) && (in_R9D == 0)) && (*(char *)(unaff_RBP + 0x77) != -1)) {
      pfVar4 = *(float **)(unaff_RBP + 0x7f);
      fVar9 = param_1[0x10];
      fVar13 = *pfVar4;
      fVar15 = param_1[0x12];
      fVar1 = pfVar4[2];
      fVar2 = param_1[0x11];
      fVar3 = pfVar4[1];
      fVar12 = (param_1[1] - pfVar4[1]) * (param_1[1] - pfVar4[1]) +
               (*param_1 - *pfVar4) * (*param_1 - *pfVar4) +
               (param_1[2] - pfVar4[2]) * (param_1[2] - pfVar4[2]);
      auVar10 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
      fVar8 = auVar10._0_4_;
      *(float *)(unaff_RBP + 0x5f) = fVar8 * 0.5 * (3.0 - fVar12 * fVar8 * fVar8) * fVar12;
      fVar13 = (fVar2 - fVar3) * (fVar2 - fVar3) + (fVar9 - fVar13) * (fVar9 - fVar13) +
               (fVar15 - fVar1) * (fVar15 - fVar1);
      auVar10 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
      fVar9 = auVar10._0_4_;
      fVar13 = fVar9 * 0.5 * ((float)system_data_01f0 - fVar13 * fVar9 * fVar9) * fVar13;
      fStack0000000000000030 = param_4;
      fStack0000000000000034 = in_XMM0_Da;
      fStack0000000000000038 = param_2;
      in_EAX = acosf();
      if (fVar13 <= *(float *)(unaff_RBP + 0x5f)) {
        fVar13 = *(float *)(unaff_RBP + 0x5f);
      }
      fVar9 = extraout_XMM0_Da * fVar13;
      uVar11 = extraout_XMM0_Db;
      if (extraout_XMM0_Da * fVar13 <= fVar14) {
        fVar9 = fVar14;
      }
    }
    fVar9 = fVar9 / fVar16;
    auVar10._4_4_ = uVar11;
    auVar10._0_4_ = fVar9;
    iVar6 = (int)fVar9;
    fVar16 = fVar9;
    if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar9)) {
      auVar10._8_4_ = uVar11;
      auVar10._12_4_ = uVar11;
      auVar7._8_8_ = auVar10._8_8_;
      auVar7._4_4_ = fVar9;
      auVar7._0_4_ = fVar9;
      uVar5 = movmskps(in_EAX,auVar7);
      fVar16 = (float)(int)(iVar6 + (uVar5 & 1 ^ 1));
    }
    if (fVar9 <= 0.0) {
      fVar16 = fVar16 - 1e-08;
    }
    else {
      fVar16 = fVar16 + 1e-08;
    }
    *(int *)(unaff_RBX + 0xa4) = (int)fVar16;
    if (0xff < (int)fVar16) {
      *(int32_t *)(unaff_RBX + 0xa4) = 0xff;
    }
  }
  else {
    param_1[0x29] = 1.4013e-45;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180530a25(float *param_1,uint64_t param_2,uint64_t param_3,int param_4)
void FUN_180530a25(float *param_1,uint64_t param_2,uint64_t param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int32_t in_EAX;
  uint uVar6;
  int iVar7;
  longlong unaff_RBX;
  longlong unaff_RBP;
  float extraout_XMM0_Da;
  int32_t extraout_XMM0_Db;
  int8_t auVar8 [16];
  float fVar9;
  float fVar10;
  int8_t auVar11 [16];
  float fVar12;
  float fVar13;
  float unaff_XMM12_Da;
  int32_t unaff_XMM12_Db;
  float fVar14;
  
  fVar14 = *(float *)(unaff_RBP + 0x6f) * 1.96;
  fVar10 = unaff_XMM12_Da;
  if (((fVar14 < unaff_XMM12_Da) && (param_4 == 0)) && (*(char *)(unaff_RBP + 0x77) != -1)) {
    pfVar5 = *(float **)(unaff_RBP + 0x7f);
    fVar10 = param_1[0x10];
    fVar13 = *pfVar5;
    fVar1 = param_1[0x12];
    fVar2 = pfVar5[2];
    fVar3 = param_1[0x11];
    fVar4 = pfVar5[1];
    fVar12 = (param_1[1] - pfVar5[1]) * (param_1[1] - pfVar5[1]) +
             (*param_1 - *pfVar5) * (*param_1 - *pfVar5) +
             (param_1[2] - pfVar5[2]) * (param_1[2] - pfVar5[2]);
    auVar11 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
    fVar9 = auVar11._0_4_;
    *(float *)(unaff_RBP + 0x5f) = fVar9 * 0.5 * (3.0 - fVar12 * fVar9 * fVar9) * fVar12;
    fVar13 = (fVar3 - fVar4) * (fVar3 - fVar4) + (fVar10 - fVar13) * (fVar10 - fVar13) +
             (fVar1 - fVar2) * (fVar1 - fVar2);
    auVar11 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
    fVar10 = auVar11._0_4_;
    fVar13 = fVar10 * 0.5 * ((float)system_data_01f0 - fVar13 * fVar10 * fVar10) * fVar13;
    in_EAX = acosf();
    if (fVar13 <= *(float *)(unaff_RBP + 0x5f)) {
      fVar13 = *(float *)(unaff_RBP + 0x5f);
    }
    fVar10 = extraout_XMM0_Da * fVar13;
    unaff_XMM12_Db = extraout_XMM0_Db;
    if (extraout_XMM0_Da * fVar13 <= unaff_XMM12_Da) {
      fVar10 = unaff_XMM12_Da;
    }
  }
  fVar10 = fVar10 / fVar14;
  auVar11._4_4_ = unaff_XMM12_Db;
  auVar11._0_4_ = fVar10;
  iVar7 = (int)fVar10;
  fVar14 = fVar10;
  if ((iVar7 != -0x80000000) && ((float)iVar7 != fVar10)) {
    auVar11._8_4_ = unaff_XMM12_Db;
    auVar11._12_4_ = unaff_XMM12_Db;
    auVar8._8_8_ = auVar11._8_8_;
    auVar8._4_4_ = fVar10;
    auVar8._0_4_ = fVar10;
    uVar6 = movmskps(in_EAX,auVar8);
    fVar14 = (float)(int)(iVar7 + (uVar6 & 1 ^ 1));
  }
  if (fVar10 <= 0.0) {
    fVar14 = fVar14 - 1e-08;
  }
  else {
    fVar14 = fVar14 + 1e-08;
  }
  *(int *)(unaff_RBX + 0xa4) = (int)fVar14;
  if (0xff < (int)fVar14) {
    *(int32_t *)(unaff_RBX + 0xa4) = 0xff;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180530a8d(longlong param_1)
void FUN_180530a8d(longlong param_1)

{
  int32_t uVar1;
  uint uVar2;
  longlong in_RAX;
  int iVar3;
  longlong unaff_RBX;
  longlong unaff_RBP;
  uint64_t extraout_XMM0_Qa;
  int8_t auVar5 [16];
  int32_t uVar8;
  int8_t auVar6 [16];
  int8_t auVar7 [16];
  float fVar9;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float fVar10;
  float unaff_XMM12_Da;
  float fVar11;
  float unaff_XMM14_Da;
  int8_t auVar4 [16];
  
  fVar10 = *(float *)(param_1 + 8) - *(float *)(in_RAX + 8);
  fVar11 = *(float *)(param_1 + 0x44) - *(float *)(in_RAX + 4);
  fVar9 = unaff_XMM7_Da * unaff_XMM7_Da + unaff_XMM10_Da * unaff_XMM10_Da + fVar10 * fVar10;
  auVar6._8_4_ = unaff_XMM7_Dc;
  auVar6._0_8_ = CONCAT44(unaff_XMM7_Db,fVar9);
  auVar6._12_4_ = unaff_XMM7_Dd;
  auVar7._8_4_ = unaff_XMM7_Dc;
  auVar7._0_8_ = CONCAT44(unaff_XMM7_Db,fVar9);
  auVar7._12_4_ = unaff_XMM7_Dd;
  auVar7 = rsqrtss(auVar6,auVar7);
  fVar10 = auVar7._0_4_;
  *(float *)(unaff_RBP + 0x5f) = unaff_XMM6_Da * fVar10 * (3.0 - fVar9 * fVar10 * fVar10) * fVar9;
  fVar10 = fVar11 * fVar11 + unaff_XMM8_Da * unaff_XMM8_Da + unaff_XMM9_Da * unaff_XMM9_Da;
  auVar7 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
  fVar9 = auVar7._0_4_;
  fVar10 = fVar9 * 0.5 * ((float)system_data_01f0 - fVar10 * fVar9 * fVar9) * fVar10;
  uVar1 = acosf();
  if (fVar10 <= *(float *)(unaff_RBP + 0x5f)) {
    fVar10 = *(float *)(unaff_RBP + 0x5f);
  }
  fVar10 = (float)extraout_XMM0_Qa * fVar10;
  if (fVar10 <= unaff_XMM12_Da) {
    fVar10 = unaff_XMM12_Da;
  }
  fVar10 = fVar10 / unaff_XMM14_Da;
  uVar8 = (int32_t)((ulonglong)extraout_XMM0_Qa >> 0x20);
  auVar5._4_4_ = uVar8;
  auVar5._0_4_ = fVar10;
  iVar3 = (int)fVar10;
  fVar9 = fVar10;
  if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar10)) {
    auVar5._8_4_ = uVar8;
    auVar5._12_4_ = uVar8;
    auVar4._8_8_ = auVar5._8_8_;
    auVar4._4_4_ = fVar10;
    auVar4._0_4_ = fVar10;
    uVar2 = movmskps(uVar1,auVar4);
    fVar9 = (float)(int)(iVar3 + (uVar2 & 1 ^ 1));
  }
  if (fVar10 <= 0.0) {
    fVar9 = fVar9 - 1e-08;
  }
  else {
    fVar9 = fVar9 + 1e-08;
  }
  *(int *)(unaff_RBX + 0xa4) = (int)fVar9;
  if (0xff < (int)fVar9) {
    *(int32_t *)(unaff_RBX + 0xa4) = 0xff;
  }
  return;
}





// 函数: void FUN_180530bbd(void)
void FUN_180530bbd(void)

{
  int32_t uVar1;
  uint uVar2;
  int iVar3;
  longlong unaff_RBX;
  longlong unaff_RBP;
  uint64_t extraout_XMM0_Qa;
  int32_t uVar4;
  float fVar5;
  int8_t auVar7 [16];
  float fVar8;
  float unaff_XMM12_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  int8_t auVar6 [16];
  
  uVar1 = acosf();
  if (unaff_XMM15_Da <= *(float *)(unaff_RBP + 0x5f)) {
    unaff_XMM15_Da = *(float *)(unaff_RBP + 0x5f);
  }
  uVar4 = (int32_t)((ulonglong)extraout_XMM0_Qa >> 0x20);
  fVar8 = (float)extraout_XMM0_Qa * unaff_XMM15_Da;
  if (fVar8 <= unaff_XMM12_Da) {
    fVar8 = unaff_XMM12_Da;
  }
  fVar8 = fVar8 / unaff_XMM14_Da;
  auVar7._4_4_ = uVar4;
  auVar7._0_4_ = fVar8;
  iVar3 = (int)fVar8;
  fVar5 = fVar8;
  if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar8)) {
    auVar7._8_4_ = uVar4;
    auVar7._12_4_ = uVar4;
    auVar6._8_8_ = auVar7._8_8_;
    auVar6._4_4_ = fVar8;
    auVar6._0_4_ = fVar8;
    uVar2 = movmskps(uVar1,auVar6);
    fVar5 = (float)(int)(iVar3 + (uVar2 & 1 ^ 1));
  }
  if (fVar8 <= 0.0) {
    fVar5 = fVar5 - 1e-08;
  }
  else {
    fVar5 = fVar5 + 1e-08;
  }
  *(int *)(unaff_RBX + 0xa4) = (int)fVar5;
  if (0xff < (int)fVar5) {
    *(int32_t *)(unaff_RBX + 0xa4) = 0xff;
  }
  return;
}





// 函数: void FUN_180530bef(void)
void FUN_180530bef(void)

{
  int32_t in_EAX;
  uint uVar1;
  int iVar2;
  longlong unaff_RBX;
  float fVar3;
  int8_t auVar5 [16];
  float fVar6;
  float unaff_XMM12_Da;
  int32_t unaff_XMM12_Db;
  float unaff_XMM14_Da;
  int8_t auVar4 [16];
  
  fVar6 = unaff_XMM12_Da / unaff_XMM14_Da;
  auVar5._4_4_ = unaff_XMM12_Db;
  auVar5._0_4_ = fVar6;
  iVar2 = (int)fVar6;
  fVar3 = fVar6;
  if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar6)) {
    auVar5._8_4_ = unaff_XMM12_Db;
    auVar5._12_4_ = unaff_XMM12_Db;
    auVar4._8_8_ = auVar5._8_8_;
    auVar4._4_4_ = fVar6;
    auVar4._0_4_ = fVar6;
    uVar1 = movmskps(in_EAX,auVar4);
    fVar3 = (float)(int)(iVar2 + (uVar1 & 1 ^ 1));
  }
  if (fVar6 <= 0.0) {
    fVar3 = fVar3 - 1e-08;
  }
  else {
    fVar3 = fVar3 + 1e-08;
  }
  *(int *)(unaff_RBX + 0xa4) = (int)fVar3;
  if (0xff < (int)fVar3) {
    *(int32_t *)(unaff_RBX + 0xa4) = 0xff;
  }
  return;
}





// 函数: void FUN_180530c0d(int param_1,uint64_t param_2,float param_3)
void FUN_180530c0d(int param_1,uint64_t param_2,float param_3)

{
  int32_t in_EAX;
  uint uVar1;
  longlong unaff_RBX;
  float fVar2;
  int8_t in_XMM1 [16];
  int8_t auVar3 [16];
  int8_t auVar4 [16];
  
  auVar3._0_4_ = in_XMM1._0_4_;
  if ((float)param_1 != auVar3._0_4_) {
    auVar4._0_8_ = in_XMM1._0_8_;
    auVar4._8_4_ = in_XMM1._4_4_;
    auVar4._12_4_ = in_XMM1._4_4_;
    auVar3._8_8_ = auVar4._8_8_;
    auVar3._4_4_ = auVar3._0_4_;
    uVar1 = movmskps(in_EAX,auVar3);
    in_XMM1 = ZEXT416((uint)(float)(int)(param_1 + (uVar1 & 1 ^ 1)));
  }
  if (param_3 <= 0.0) {
    fVar2 = in_XMM1._0_4_ - 1e-08;
  }
  else {
    fVar2 = in_XMM1._0_4_ + 1e-08;
  }
  *(int *)(unaff_RBX + 0xa4) = (int)fVar2;
  if (0xff < (int)fVar2) {
    *(int32_t *)(unaff_RBX + 0xa4) = 0xff;
  }
  return;
}





// 函数: void FUN_180530c69(void)
void FUN_180530c69(void)

{
  return;
}





// 函数: void FUN_180530ca0(longlong param_1,int32_t param_2)
void FUN_180530ca0(longlong param_1,int32_t param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint64_t uVar4;
  longlong lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int32_t uVar8;
  
  if ((((*(uint *)(param_1 + 0x56c) & 0x2000) != 0) &&
      (lVar1 = *(longlong *)(param_1 + 0x6d8), lVar1 != 0)) && (*(char *)(lVar1 + 0x8be) != '\0')) {
    if (-1 < *(int *)(param_1 + 0x564)) {
      lVar2 = *(longlong *)(param_1 + 0x8d8);
      lVar5 = (longlong)*(int *)(param_1 + 0x564) * 0xa60;
      lVar3 = *(longlong *)(lVar5 + 0x3778 + lVar2);
      if ((lVar3 == 0) || (*(char *)(lVar3 + 0x8be) == '\0')) {
        FUN_180544550(lVar1,0);
        uVar8 = 0x3f800000;
        uVar4 = 0;
        uVar6 = uVar4;
        uVar7 = uVar4;
      }
      else {
        FUN_180544550();
        uVar4 = *(uint64_t *)(lVar5 + 0x3630 + lVar2);
        uVar8 = *(int32_t *)(*(longlong *)(lVar5 + 0x3778 + lVar2) + 0x8c0);
        uVar6 = *(uint64_t *)(*(longlong *)(param_1 + 0x658) + 0x208);
        uVar7 = *(uint64_t *)(lVar5 + 0x36f8 + lVar2);
      }
      FUN_180577110(*(uint64_t *)(param_1 + 0x590),uVar4,uVar6,uVar7,uVar8,param_2);
      return;
    }
    FUN_180544550(lVar1,0);
    FUN_180577110(*(uint64_t *)(param_1 + 0x590),0,0,0,0x3f800000,param_2);
  }
  return;
}





// 函数: void FUN_180530ced(uint64_t param_1)
void FUN_180530ced(uint64_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong in_RAX;
  uint64_t uVar3;
  longlong unaff_RBX;
  longlong lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int32_t uVar7;
  
  lVar1 = *(longlong *)(unaff_RBX + 0x8d8);
  lVar4 = in_RAX * 0xa60;
  lVar2 = *(longlong *)(lVar4 + 0x3778 + lVar1);
  if ((lVar2 == 0) || (*(char *)(lVar2 + 0x8be) == '\0')) {
    FUN_180544550(param_1,0);
    uVar7 = 0x3f800000;
    uVar3 = 0;
    uVar5 = uVar3;
    uVar6 = uVar3;
  }
  else {
    FUN_180544550();
    uVar3 = *(uint64_t *)(lVar4 + 0x3630 + lVar1);
    uVar7 = *(int32_t *)(*(longlong *)(lVar4 + 0x3778 + lVar1) + 0x8c0);
    uVar5 = *(uint64_t *)(*(longlong *)(unaff_RBX + 0x658) + 0x208);
    uVar6 = *(uint64_t *)(lVar4 + 0x36f8 + lVar1);
  }
  FUN_180577110(*(uint64_t *)(unaff_RBX + 0x590),uVar3,uVar5,uVar6,uVar7);
  return;
}





// 函数: void FUN_180530d94(uint64_t param_1)
void FUN_180530d94(uint64_t param_1)

{
  longlong unaff_RBX;
  
  FUN_180544550(param_1,0);
  FUN_180577110(*(uint64_t *)(unaff_RBX + 0x590),0,0,0,0x3f800000);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180530dd0(longlong param_1)
void FUN_180530dd0(longlong param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  byte bVar13;
  longlong lVar14;
  int8_t auStackX_8 [8];
  longlong lStackX_10;
  
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x8f8) + 0x9e4);
  if (-1 < iVar2) {
    bVar13 = (byte)((uint)*(int32_t *)(param_1 + 0x564) >> 0x1f) ^ 1;
    if ((*(byte *)(param_1 + 0x56c) & 1) == 0) {
      iVar3 = *(int *)(param_1 + 0x10);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x560);
    }
    lVar9 = (longlong)iVar3 * 0xa60 + *(longlong *)(param_1 + 0x8d8);
    lStackX_10 = *(longlong *)(lVar9 + 0x3998);
    lVar14 = (longlong)iVar2 * 0x1f8 + lStackX_10;
    lVar5 = *(longlong *)(lVar14 + 0xd8);
    lVar11 = (longlong)*(int *)(lVar14 + 0xf8) * 0xa0;
    bVar7 = *(byte *)((longlong)*(int *)(lVar11 + 100 + lVar5) * 0x170 + 0x140 + render_system_config);
    if ((*(int *)(lVar11 + 0x5c + lVar5) == 0xf) && ((*(uint *)(param_1 + 0x56c) & 0x1000000) != 0))
    {
      bVar7 = bVar7 & 0xfd;
    }
    if (bVar13 == 0) {
      bVar6 = bVar7 & 1;
    }
    else {
      bVar6 = bVar7 & 2;
    }
    if ((bVar6 != 0) || ((bVar7 & 8) != 0)) {
      iVar12 = 0;
      iVar3 = (int)((*(longlong *)(lVar14 + 0xe0) - lVar5) / 0xa0);
      if (0 < iVar3) {
        do {
          iVar10 = (int)((longlong)iVar12 % (longlong)iVar3);
          bVar7 = *(byte *)((longlong)*(int *)((longlong)iVar10 * 0xa0 + 100 + lVar5) * 0x170 +
                            0x140 + render_system_config);
          if ((bVar7 & 0x10) == 0) {
            if (bVar13 == 0) {
              if ((bVar7 & 1) == 0) goto LAB_180530f48;
            }
            else if (((bVar7 & 2) == 0) ||
                    ((*(int *)((longlong)iVar10 * 0xa0 + 0x5c + lVar5) == 0xf &&
                     ((*(uint *)(param_1 + 0x56c) >> 0x18 & 1) != 0)))) {
LAB_180530f48:
              if ((bVar7 & 8) == 0) {
                if (-1 < iVar10) {
                  if ((iVar10 != *(int *)(lVar14 + 0xf8)) &&
                     (FUN_180537bd0(lStackX_10,iVar2,(longlong)iVar12 % (longlong)iVar3 & 0xffffffff
                                    ,auStackX_8), *(int *)(param_1 + 0x570) == 1)) {
                    puVar1 = (ushort *)(*(longlong *)(param_1 + 0x6e0) + 0x130);
                    *puVar1 = *puVar1 | 0x20;
                  }
                  goto FUN_180530fe5;
                }
                break;
              }
            }
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar3);
      }
      cVar8 = FUN_180531480(param_1,iVar2);
      if (cVar8 == '\0') {
        FUN_18050bb10(lVar9 + 0x30a0,1,0xffffffff,1,0);
      }
      else {
        FUN_18050c740(param_1,iVar2,8);
      }
    }
  }
FUN_180530fe5:
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x8f8) + 0x9e0);
  if (-1 < iVar2) {
    uVar4 = *(uint *)(*(longlong *)(param_1 + 0x8f8) + 0x9e4);
    FUN_180531300(param_1,iVar2,*(uint *)(param_1 + 0x564) >> 0x1f ^ 1,uVar4 >> 0x1f ^ 1,
                  (byte)(uVar4 >> 0x1f),0,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180530dd8(longlong param_1)
void FUN_180530dd8(longlong param_1)

{
  ushort *puVar1;
  int iVar2;
  int32_t uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  longlong in_RAX;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  uint64_t unaff_RBP;
  uint64_t unaff_RDI;
  int iVar13;
  byte bVar14;
  longlong lVar15;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  longlong in_stack_00000088;
  
  *(uint64_t *)(in_RAX + 0x18) = unaff_RBP;
  lVar6 = *(longlong *)(param_1 + 0x8f8);
  *(uint64_t *)(in_RAX + -0x18) = unaff_RDI;
  iVar2 = *(int *)(lVar6 + 0x9e4);
  if (-1 < iVar2) {
    uVar3 = *(int32_t *)(param_1 + 0x564);
    *(uint64_t *)(in_RAX + -0x20) = unaff_R12;
    *(uint64_t *)(in_RAX + -0x28) = unaff_R13;
    bVar14 = (byte)((uint)uVar3 >> 0x1f) ^ 1;
    bVar8 = *(byte *)(param_1 + 0x56c);
    *(uint64_t *)(in_RAX + -0x30) = unaff_R14;
    *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
    if ((bVar8 & 1) == 0) {
      iVar4 = *(int *)(param_1 + 0x10);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x560);
    }
    lVar10 = (longlong)iVar4 * 0xa60 + *(longlong *)(param_1 + 0x8d8);
    in_stack_00000088 = *(longlong *)(lVar10 + 0x3998);
    lVar15 = (longlong)iVar2 * 0x1f8 + in_stack_00000088;
    lVar6 = *(longlong *)(lVar15 + 0xd8);
    lVar12 = (longlong)*(int *)(lVar15 + 0xf8) * 0xa0;
    bVar8 = *(byte *)((longlong)*(int *)(lVar12 + 100 + lVar6) * 0x170 + 0x140 + render_system_config);
    if ((*(int *)(lVar12 + 0x5c + lVar6) == 0xf) && ((*(uint *)(param_1 + 0x56c) & 0x1000000) != 0))
    {
      bVar8 = bVar8 & 0xfd;
    }
    if (bVar14 == 0) {
      bVar7 = bVar8 & 1;
    }
    else {
      bVar7 = bVar8 & 2;
    }
    if ((bVar7 != 0) || ((bVar8 & 8) != 0)) {
      iVar13 = 0;
      iVar4 = (int)((*(longlong *)(lVar15 + 0xe0) - lVar6) / 0xa0);
      if (0 < iVar4) {
        do {
          iVar11 = (int)((longlong)iVar13 % (longlong)iVar4);
          bVar8 = *(byte *)((longlong)*(int *)((longlong)iVar11 * 0xa0 + 100 + lVar6) * 0x170 +
                            0x140 + render_system_config);
          if ((bVar8 & 0x10) == 0) {
            if (bVar14 == 0) {
              if ((bVar8 & 1) == 0) goto LAB_180530f48;
            }
            else if (((bVar8 & 2) == 0) ||
                    ((*(int *)((longlong)iVar11 * 0xa0 + 0x5c + lVar6) == 0xf &&
                     ((*(uint *)(param_1 + 0x56c) >> 0x18 & 1) != 0)))) {
LAB_180530f48:
              if ((bVar8 & 8) == 0) {
                if (-1 < iVar11) {
                  if ((iVar11 != *(int *)(lVar15 + 0xf8)) &&
                     (FUN_180537bd0(in_stack_00000088,iVar2,
                                    (longlong)iVar13 % (longlong)iVar4 & 0xffffffff,&stack0x00000080
                                   ), *(int *)(param_1 + 0x570) == 1)) {
                    puVar1 = (ushort *)(*(longlong *)(param_1 + 0x6e0) + 0x130);
                    *puVar1 = *puVar1 | 0x20;
                  }
                  goto FUN_180530fe5;
                }
                break;
              }
            }
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < iVar4);
      }
      cVar9 = FUN_180531480(param_1,iVar2);
      if (cVar9 == '\0') {
        FUN_18050bb10(lVar10 + 0x30a0,1,0xffffffff,1,0);
      }
      else {
        FUN_18050c740(param_1,iVar2,8);
      }
    }
  }
FUN_180530fe5:
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x8f8) + 0x9e0);
  if (-1 < iVar2) {
    uVar5 = *(uint *)(*(longlong *)(param_1 + 0x8f8) + 0x9e4);
    FUN_180531300(param_1,iVar2,*(uint *)(param_1 + 0x564) >> 0x1f ^ 1,uVar5 >> 0x1f ^ 1,
                  (byte)(uVar5 >> 0x1f));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180530e00(longlong param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)
void FUN_180530e00(longlong param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)

{
  ushort *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  longlong in_RAX;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong unaff_RBX;
  ulonglong unaff_RDI;
  int iVar10;
  byte bVar11;
  longlong lVar12;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  longlong lStack0000000000000088;
  
  *(uint64_t *)(in_RAX + -0x20) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R13;
  bVar11 = (byte)((uint)param_4 >> 0x1f) ^ 1;
  bVar5 = *(byte *)(param_1 + 0x56c);
  *(uint64_t *)(in_RAX + -0x30) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  if ((bVar5 & 1) == 0) {
    iVar2 = *(int *)(param_1 + 0x10);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x560);
  }
  lVar7 = (longlong)iVar2 * 0xa60 + *(longlong *)(unaff_RBX + 0x8d8);
  lStack0000000000000088 = *(longlong *)(lVar7 + 0x3998);
  lVar12 = unaff_RDI * 0x1f8 + lStack0000000000000088;
  lVar3 = *(longlong *)(lVar12 + 0xd8);
  lVar9 = (longlong)*(int *)(lVar12 + 0xf8) * 0xa0;
  bVar5 = *(byte *)((longlong)*(int *)(lVar9 + 100 + lVar3) * 0x170 + 0x140 + render_system_config);
  if ((*(int *)(lVar9 + 0x5c + lVar3) == 0xf) && ((*(uint *)(unaff_RBX + 0x56c) & 0x1000000) != 0))
  {
    bVar5 = bVar5 & 0xfd;
  }
  if (bVar11 == 0) {
    bVar4 = bVar5 & 1;
  }
  else {
    bVar4 = bVar5 & 2;
  }
  if ((bVar4 != 0) || ((bVar5 & 8) != 0)) {
    iVar10 = 0;
    iVar2 = (int)((*(longlong *)(lVar12 + 0xe0) - lVar3) / 0xa0);
    if (0 < iVar2) {
      do {
        iVar8 = (int)((longlong)iVar10 % (longlong)iVar2);
        bVar5 = *(byte *)((longlong)*(int *)((longlong)iVar8 * 0xa0 + 100 + lVar3) * 0x170 + 0x140 +
                         render_system_config);
        if ((bVar5 & 0x10) == 0) {
          if (bVar11 == 0) {
            if ((bVar5 & 1) == 0) goto LAB_180530f48;
          }
          else if (((bVar5 & 2) == 0) ||
                  ((*(int *)((longlong)iVar8 * 0xa0 + 0x5c + lVar3) == 0xf &&
                   ((*(uint *)(unaff_RBX + 0x56c) >> 0x18 & 1) != 0)))) {
LAB_180530f48:
            if ((bVar5 & 8) == 0) {
              if (-1 < iVar8) {
                if ((iVar8 != *(int *)(lVar12 + 0xf8)) &&
                   (FUN_180537bd0(lStack0000000000000088,unaff_RDI & 0xffffffff,
                                  (longlong)iVar10 % (longlong)iVar2 & 0xffffffff,&stack0x00000080),
                   *(int *)(unaff_RBX + 0x570) == 1)) {
                  puVar1 = (ushort *)(*(longlong *)(unaff_RBX + 0x6e0) + 0x130);
                  *puVar1 = *puVar1 | 0x20;
                }
                goto FUN_180530fd1;
              }
              break;
            }
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar2);
    }
    cVar6 = FUN_180531480();
    if (cVar6 == '\0') {
      FUN_18050bb10(lVar7 + 0x30a0,1,0xffffffff,1,0);
    }
    else {
      FUN_18050c740();
    }
  }
FUN_180530fd1:
  if (-1 < *(int *)(*(longlong *)(unaff_RBX + 0x8f8) + 0x9e0)) {
    FUN_180531300();
  }
  return;
}





// 函数: void FUN_180530ecd(longlong param_1,uint64_t param_2,uint64_t param_3,char param_4)
void FUN_180530ecd(longlong param_1,uint64_t param_2,uint64_t param_3,char param_4)

{
  ushort *puVar1;
  byte bVar2;
  char cVar3;
  longlong in_RAX;
  int iVar4;
  longlong unaff_RBX;
  int32_t unaff_EDI;
  int iVar5;
  int iVar6;
  int unaff_R12D;
  longlong unaff_R14;
  longlong unaff_R15;
  uint64_t in_stack_00000088;
  
  iVar5 = 0;
  iVar6 = (int)(SUB168(SEXT816(in_RAX) * SEXT816(param_1),8) >> 6) -
          (SUB164(SEXT816(in_RAX) * SEXT816(param_1),0xc) >> 0x1f);
  if (0 < iVar6) {
    do {
      iVar4 = (int)((longlong)iVar5 % (longlong)iVar6);
      bVar2 = *(byte *)((longlong)*(int *)((longlong)iVar4 * 0xa0 + 100 + unaff_R14) * 0x170 + 0x140
                       + unaff_R15);
      if ((bVar2 & 0x10) == 0) {
        if (param_4 == '\0') {
          if ((bVar2 & 1) == 0) goto LAB_180530f48;
        }
        else if (((bVar2 & 2) == 0) ||
                ((*(int *)((longlong)iVar4 * 0xa0 + 0x5c + unaff_R14) == 0xf &&
                 ((*(uint *)(unaff_RBX + 0x56c) >> 0x18 & 1) != 0)))) {
LAB_180530f48:
          if ((bVar2 & 8) == 0) {
            if (-1 < iVar4) {
              if ((iVar4 != unaff_R12D) &&
                 (FUN_180537bd0(in_stack_00000088,unaff_EDI,
                                (longlong)iVar5 % (longlong)iVar6 & 0xffffffff,&stack0x00000080),
                 *(int *)(unaff_RBX + 0x570) == 1)) {
                puVar1 = (ushort *)(*(longlong *)(unaff_RBX + 0x6e0) + 0x130);
                *puVar1 = *puVar1 | 0x20;
              }
              goto LAB_180530fcc;
            }
            break;
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar6);
  }
  cVar3 = FUN_180531480();
  if (cVar3 == '\0') {
    FUN_18050bb10();
  }
  else {
    FUN_18050c740();
  }
LAB_180530fcc:
  if (-1 < *(int *)(*(longlong *)(unaff_RBX + 0x8f8) + 0x9e0)) {
    FUN_180531300();
  }
  return;
}





// 函数: void FUN_180530fd1(void)
void FUN_180530fd1(void)

{
  longlong unaff_RBX;
  int32_t uStack0000000000000028;
  int8_t uStack0000000000000030;
  
  if (-1 < *(int *)(*(longlong *)(unaff_RBX + 0x8f8) + 0x9e0)) {
    uStack0000000000000030 = 0;
    uStack0000000000000028 = 0;
    FUN_180531300();
  }
  return;
}





// 函数: void FUN_180530fe5(void)
void FUN_180530fe5(void)

{
  longlong unaff_RBX;
  int32_t uStack0000000000000028;
  int8_t uStack0000000000000030;
  
  if (-1 < *(int *)(*(longlong *)(unaff_RBX + 0x8f8) + 0x9e0)) {
    uStack0000000000000030 = 0;
    uStack0000000000000028 = 0;
    FUN_180531300();
  }
  return;
}





// 函数: void FUN_180531003(void)
void FUN_180531003(void)

{
  int32_t uStack0000000000000028;
  int8_t uStack0000000000000030;
  
  uStack0000000000000030 = 0;
  uStack0000000000000028 = 0;
  FUN_180531300();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



