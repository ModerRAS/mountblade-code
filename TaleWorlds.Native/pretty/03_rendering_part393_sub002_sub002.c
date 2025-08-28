#include "TaleWorlds.Native.Split.h"

// 03_rendering_part393_sub002_sub002.c - 1 个函数

// 函数: void FUN_1804856a0(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1804856a0(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int8_t auStack_60 [24];
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  plVar1 = (longlong *)*param_2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2,param_3,param_4,0xfffffffffffffffe);
  }
  plVar2 = *(longlong **)(param_1 + 0x150);
  *(longlong **)(param_1 + 0x150) = plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  lVar3 = *param_2;
  if (lVar3 != 0) {
    uStack_48 = *(uint64_t *)(lVar3 + 0x70);
    uStack_40 = *(uint64_t *)(lVar3 + 0x78);
    uStack_38 = *(uint64_t *)(lVar3 + 0x80);
    uStack_30 = *(uint64_t *)(lVar3 + 0x88);
    uStack_28 = *(int32_t *)(lVar3 + 0x90);
    uStack_24 = *(int32_t *)(lVar3 + 0x94);
    uStack_20 = *(int32_t *)(lVar3 + 0x98);
    uStack_1c = *(int32_t *)(lVar3 + 0x9c);
    uStack_18 = *(int32_t *)(lVar3 + 0xa0);
    uStack_14 = *(int32_t *)(lVar3 + 0xa4);
    uStack_10 = *(int32_t *)(lVar3 + 0xa8);
    uStack_c = *(int32_t *)(lVar3 + 0xac);
    FUN_1802bfc90(&uStack_48,auStack_60);
    *(uint64_t *)(param_1 + 0xd0) = uStack_48;
    *(uint64_t *)(param_1 + 0xd8) = uStack_40;
    *(uint64_t *)(param_1 + 0xe0) = uStack_38;
    *(uint64_t *)(param_1 + 0xe8) = uStack_30;
    *(int32_t *)(param_1 + 0xf0) = uStack_28;
    *(int32_t *)(param_1 + 0xf4) = uStack_24;
    *(int32_t *)(param_1 + 0xf8) = uStack_20;
    *(int32_t *)(param_1 + 0xfc) = uStack_1c;
    *(int32_t *)(param_1 + 0x100) = uStack_18;
    *(int32_t *)(param_1 + 0x104) = uStack_14;
    *(int32_t *)(param_1 + 0x108) = uStack_10;
    *(int32_t *)(param_1 + 0x10c) = uStack_c;
    FUN_1802864f0();
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x38))();
  }
  return;
}



uint64_t *
FUN_1804857a0(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if ((longlong *)param_1[0x2a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2a] + 0x38))();
  }
  *param_1 = &unknown_var_3696_ptr;
  *param_1 = &unknown_var_3552_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x160,param_3,param_4,uVar1);
  }
  return param_1;
}



int FUN_180485810(longlong param_1,float *param_2,float *param_3,int32_t *param_4,
                 uint64_t param_5,float *param_6)

{
  longlong lVar1;
  int iVar2;
  int32_t *puVar3;
  int iVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int32_t uStack_2c;
  
  lVar1 = param_1 + 0x10;
  uVar9 = (uint)(longlong)(param_6[3] * 256.0);
  uVar12 = 0xff;
  if (uVar9 < 0xff) {
    uVar12 = uVar9;
  }
  uVar11 = (uint)(longlong)(*param_6 * 256.0);
  uVar9 = 0xff;
  if (uVar11 < 0xff) {
    uVar9 = uVar11;
  }
  uVar10 = (uint)(longlong)(param_6[1] * 256.0);
  uVar11 = 0xff;
  if (uVar10 < 0xff) {
    uVar11 = uVar10;
  }
  uVar10 = (uint)(longlong)(param_6[2] * 256.0);
  param_6._0_4_ = 0xff;
  if (uVar10 < 0xff) {
    param_6._0_4_ = uVar10;
  }
  param_6._0_4_ = ((uVar12 << 8 | uVar9) << 8 | uVar11) << 8 | (uint)param_6;
  uVar5 = FUN_180235000(lVar1,param_2);
  fStack_38 = *param_2 + *param_3;
  uStack_2c = 0x7f7fffff;
  fStack_34 = param_2[1] + param_3[1];
  fStack_30 = param_2[2];
  uVar6 = FUN_180235000(lVar1,&fStack_38);
  fStack_38 = *param_2 + *param_3;
  fStack_34 = param_2[1] + param_3[1];
  uStack_2c = 0x7f7fffff;
  fStack_30 = param_2[2] + param_3[2];
  uVar7 = FUN_180235000(lVar1,&fStack_38);
  fStack_38 = *param_2;
  fStack_34 = param_2[1];
  fStack_30 = param_2[2] + param_3[2];
  uStack_2c = 0x7f7fffff;
  uVar8 = FUN_180235000(lVar1,&fStack_38);
  fStack_38 = 0.0;
  fStack_34 = 0.0;
  fStack_30 = 1.0;
  uStack_2c = 0x7f7fffff;
  uVar5 = FUN_1802350e0(lVar1,uVar5,param_4,&param_6,&fStack_38);
  puVar3 = (int32_t *)CONCAT44(param_5._4_4_,(int32_t)param_5);
  param_5._4_4_ = param_4[1];
  param_5._0_4_ = *puVar3;
  uVar6 = FUN_1802350e0(lVar1,uVar6,&param_5,&param_6,&fStack_38);
  uVar7 = FUN_1802350e0(lVar1,uVar7,puVar3,&param_6,&fStack_38);
  param_5._0_4_ = *param_4;
  param_5._4_4_ = puVar3[1];
  uVar8 = FUN_1802350e0(lVar1,uVar8,&param_5,&param_6,&fStack_38);
  FUN_180235410(lVar1,uVar5,uVar6,uVar7);
  lVar1 = *(longlong *)(param_1 + 0x18);
  iVar2 = *(int *)(lVar1 + 0x88);
  iVar4 = *(int *)(lVar1 + 0x8c);
  if (iVar4 < iVar2 + 1) {
    if (iVar4 < 2) {
      iVar4 = 8;
    }
    else {
      iVar4 = (iVar4 >> 1) + iVar4;
    }
    *(int *)(lVar1 + 0x8c) = iVar4;
    FUN_180085f20(lVar1 + 0x88);
  }
  *(int *)(lVar1 + 0x88) = iVar2 + 1;
  lVar1 = (longlong)iVar2 * 0xc;
  *(int32_t *)(lVar1 + *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x90)) = uVar5;
  *(int32_t *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x90) + 4 + lVar1) = uVar7;
  *(int32_t *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x90) + 8 + lVar1) = uVar8;
  *(int16_t *)(param_1 + 0x41) = 0x101;
  return iVar2;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong *
FUN_180485a80(longlong *param_1,longlong param_2,float *param_3,float *param_4,float *param_5,
             float *param_6)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  longlong *plVar9;
  uint64_t *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  void *puVar13;
  byte bVar14;
  longlong *plVar15;
  float *pfVar16;
  int iVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  uint64_t uStack_370;
  longlong *plStack_368;
  longlong *plStack_360;
  uint64_t uStack_358;
  float fStack_350;
  float fStack_34c;
  int aiStack_348 [2];
  uint64_t uStack_340;
  longlong *plStack_338;
  longlong *plStack_330;
  float afStack_328 [2];
  longlong *plStack_320;
  int32_t uStack_318;
  longlong *plStack_310;
  int16_t uStack_308;
  char cStack_306;
  longlong *plStack_300;
  longlong *plStack_2f8;
  longlong *plStack_2f0;
  longlong *plStack_2e8;
  longlong *plStack_2e0;
  longlong *plStack_2d8;
  longlong *plStack_2d0;
  int8_t auStack_2c8 [8];
  longlong *plStack_2c0;
  int32_t uStack_2b8;
  longlong *plStack_2b0;
  int16_t uStack_2a8;
  char cStack_2a6;
  longlong *plStack_2a0;
  float *pfStack_298;
  uint64_t uStack_290;
  longlong *plStack_288;
  longlong *plStack_280;
  longlong *plStack_278;
  longlong *plStack_270;
  longlong *plStack_268;
  longlong *plStack_260;
  longlong *plStack_258;
  longlong *plStack_250;
  longlong *plStack_248;
  longlong *plStack_240;
  longlong *plStack_238;
  longlong *plStack_230;
  longlong *plStack_228;
  longlong *plStack_218;
  longlong *plStack_210;
  void *puStack_208;
  longlong lStack_200;
  int32_t uStack_1f0;
  void *puStack_1e8;
  longlong lStack_1e0;
  int32_t uStack_1d0;
  void *puStack_1c8;
  longlong lStack_1c0;
  int32_t uStack_1b0;
  void *puStack_1a8;
  longlong lStack_1a0;
  int32_t uStack_190;
  void *puStack_188;
  longlong lStack_180;
  int32_t uStack_170;
  void *puStack_168;
  longlong lStack_160;
  int32_t uStack_150;
  void *puStack_148;
  longlong lStack_140;
  int32_t uStack_130;
  void *puStack_128;
  longlong lStack_120;
  int32_t uStack_110;
  void *puStack_108;
  longlong lStack_100;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  float fStack_b8;
  float fStack_b4;
  int32_t uStack_b0;
  int32_t uStack_ac;
  longlong *plStack_a8;
  uint64_t uStack_a0;
  longlong *plStack_98;
  longlong *plStack_90;
  longlong *plStack_88;
  
  uStack_a0 = 0xfffffffffffffffe;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  FUN_180627e10(param_2,&puStack_108,&unknown_var_6816_ptr);
  FUN_180627e10(param_2,&puStack_128,&unknown_var_6824_ptr);
  FUN_180627e10(param_2,&puStack_148,&unknown_var_6832_ptr);
  FUN_180627e10(param_2,&puStack_208,&unknown_var_6944_ptr);
  FUN_180627e10(param_2,&puStack_168,&unknown_var_6952_ptr);
  FUN_180627e10(param_2,&puStack_188,&unknown_var_6968_ptr);
  FUN_180627e10(param_2,&puStack_1a8,&unknown_var_6984_ptr);
  FUN_180627e10(param_2,&puStack_1c8,&unknown_var_6840_ptr);
  FUN_180627e10(param_2,&puStack_1e8,&unknown_var_6852_ptr);
  plStack_218 = (longlong *)0x0;
  plStack_210 = (longlong *)0x0;
  plStack_288 = (longlong *)0x0;
  *param_1 = 0;
  plStack_278 = (longlong *)0x0;
  plStack_280 = (longlong *)0x0;
  plStack_270 = (longlong *)0x0;
  plStack_268 = (longlong *)0x0;
  FUN_1800b33d0(_DAT_180c86930,&plStack_2a0,param_2);
  if (plStack_2a0 == (longlong *)0x0) {
    puVar10 = (uint64_t *)FUN_1800bf050(0,&uStack_358);
    puVar10 = (uint64_t *)FUN_1800763c0(*puVar10,&plStack_368);
    bVar14 = 0xd;
  }
  else {
    puVar10 = (uint64_t *)FUN_1800763c0(plStack_2a0,&fStack_350);
    bVar14 = 3;
  }
  plVar15 = (longlong *)*puVar10;
  *puVar10 = 0;
  plStack_230 = plVar15;
  plStack_98 = plVar15;
  if (((bVar14 & 8) != 0) && (bVar14 = bVar14 & 0xf7, plStack_368 != (longlong *)0x0)) {
    (**(code **)(*plStack_368 + 0x38))();
  }
  if (((bVar14 & 4) != 0) && (bVar14 = bVar14 & 0xfb, uStack_358 != (longlong *)0x0)) {
    (**(code **)(*uStack_358 + 0x38))();
  }
  if ((bVar14 & 2) != 0) {
    bVar14 = bVar14 & 0xfd;
    if ((longlong *)CONCAT44(fStack_34c,fStack_350) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(fStack_34c,fStack_350) + 0x38))();
    }
  }
  FUN_1800b33d0(_DAT_180c86930,&plStack_360,&puStack_108);
  if (plStack_360 == (longlong *)0x0) {
    puVar10 = (uint64_t *)FUN_1800763c0(plVar15,&uStack_358);
    bVar14 = bVar14 | 0x20;
  }
  else {
    puVar10 = (uint64_t *)FUN_1800763c0(plStack_360,&fStack_350);
    bVar14 = bVar14 | 0x10;
  }
  plVar11 = (longlong *)*puVar10;
  *puVar10 = 0;
  plStack_368 = (longlong *)0x0;
  plStack_2e0 = plVar11;
  plStack_218 = plVar11;
  if (((bVar14 & 0x20) != 0) && (bVar14 = bVar14 & 0xdf, uStack_358 != (longlong *)0x0)) {
    (**(code **)(*uStack_358 + 0x38))();
  }
  if ((bVar14 & 0x10) != 0) {
    bVar14 = bVar14 & 0xef;
    if ((longlong *)CONCAT44(fStack_34c,fStack_350) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(fStack_34c,fStack_350) + 0x38))();
    }
  }
  puVar10 = (uint64_t *)FUN_1800b33d0(_DAT_180c86930,&uStack_370,&puStack_128);
  plVar12 = (longlong *)*puVar10;
  *puVar10 = 0;
  plStack_368 = plStack_360;
  if (plStack_360 != (longlong *)0x0) {
    lVar3 = *plStack_360;
    plStack_360 = plVar12;
    (**(code **)(lVar3 + 0x38))();
    plVar12 = plStack_360;
  }
  plStack_360 = plVar12;
  if (uStack_370 != (longlong *)0x0) {
    (**(code **)(*uStack_370 + 0x38))();
  }
  if (plStack_360 == (longlong *)0x0) {
    puVar10 = (uint64_t *)FUN_1800763c0(plVar11,&uStack_358);
    bVar14 = bVar14 | 0x80;
  }
  else {
    puVar10 = (uint64_t *)FUN_1800763c0(plStack_360,&fStack_350);
    bVar14 = bVar14 | 0x40;
  }
  plStack_2e8 = (longlong *)*puVar10;
  *puVar10 = 0;
  plStack_368 = (longlong *)0x0;
  plStack_210 = plStack_2e8;
  if (((char)bVar14 < '\0') && (bVar14 = bVar14 & 0x7f, uStack_358 != (longlong *)0x0)) {
    (**(code **)(*uStack_358 + 0x38))();
  }
  if (((bVar14 & 0x40) != 0) && ((longlong *)CONCAT44(fStack_34c,fStack_350) != (longlong *)0x0)) {
    (**(code **)(*(longlong *)CONCAT44(fStack_34c,fStack_350) + 0x38))();
  }
  puVar10 = (uint64_t *)FUN_1800b33d0(_DAT_180c86930,&uStack_370,&puStack_148);
  plVar11 = (longlong *)*puVar10;
  *puVar10 = 0;
  plStack_368 = plStack_360;
  if (plStack_360 != (longlong *)0x0) {
    lVar3 = *plStack_360;
    plStack_360 = plVar11;
    (**(code **)(lVar3 + 0x38))();
    plVar11 = plStack_360;
  }
  plStack_360 = plVar11;
  if (uStack_370 != (longlong *)0x0) {
    (**(code **)(*uStack_370 + 0x38))();
  }
  bVar18 = plStack_360 == (longlong *)0x0;
  if (bVar18) {
    puVar10 = (uint64_t *)FUN_1800763c0(plVar15,&uStack_358);
  }
  else {
    puVar10 = (uint64_t *)FUN_1800763c0(plStack_360,&fStack_350);
  }
  plVar11 = (longlong *)*puVar10;
  *puVar10 = 0;
  plStack_368 = (longlong *)0x0;
  plStack_2f8 = plVar11;
  plStack_288 = plVar11;
  if ((bVar18) && (uStack_358 != (longlong *)0x0)) {
    (**(code **)(*uStack_358 + 0x38))();
  }
  if ((!bVar18) && ((longlong *)CONCAT44(fStack_34c,fStack_350) != (longlong *)0x0)) {
    (**(code **)(*(longlong *)CONCAT44(fStack_34c,fStack_350) + 0x38))();
  }
  puVar10 = (uint64_t *)FUN_1800b33d0(_DAT_180c86930,&uStack_370,&puStack_208);
  plVar12 = (longlong *)*puVar10;
  *puVar10 = 0;
  plStack_368 = plStack_360;
  if (plStack_360 != (longlong *)0x0) {
    lVar3 = *plStack_360;
    plStack_360 = plVar12;
    (**(code **)(lVar3 + 0x38))();
    plVar12 = plStack_360;
  }
  plStack_360 = plVar12;
  if (uStack_370 != (longlong *)0x0) {
    (**(code **)(*uStack_370 + 0x38))();
  }
  bVar18 = plStack_360 == (longlong *)0x0;
  if (bVar18) {
    plVar11 = (longlong *)FUN_1800763c0(plVar11,&uStack_358);
  }
  else {
    plVar11 = (longlong *)FUN_1800763c0(plStack_360,&fStack_350);
  }
  lVar3 = *plVar11;
  *plVar11 = 0;
  plStack_368 = (longlong *)*param_1;
  *param_1 = lVar3;
  if (plStack_368 != (longlong *)0x0) {
    (**(code **)(*plStack_368 + 0x38))();
  }
  if ((bVar18) && (uStack_358 != (longlong *)0x0)) {
    (**(code **)(*uStack_358 + 0x38))();
  }
  if ((!bVar18) && ((longlong *)CONCAT44(fStack_34c,fStack_350) != (longlong *)0x0)) {
    (**(code **)(*(longlong *)CONCAT44(fStack_34c,fStack_350) + 0x38))();
  }
  puVar10 = (uint64_t *)FUN_1800b33d0(_DAT_180c86930,&uStack_370,&puStack_168);
  plVar11 = (longlong *)*puVar10;
  *puVar10 = 0;
  plStack_368 = plStack_360;
  if (plStack_360 != (longlong *)0x0) {
    lVar3 = *plStack_360;
    plStack_360 = plVar11;
    (**(code **)(lVar3 + 0x38))();
    plVar11 = plStack_360;
  }
  plStack_360 = plVar11;
  if (uStack_370 != (longlong *)0x0) {
    (**(code **)(*uStack_370 + 0x38))();
  }
  bVar18 = plStack_360 == (longlong *)0x0;
  if (bVar18) {
    puVar10 = (uint64_t *)FUN_1800763c0(plVar15,&uStack_358);
  }
  else {
    puVar10 = (uint64_t *)FUN_1800763c0(plStack_360,&fStack_350);
  }
  plStack_300 = (longlong *)*puVar10;
  *puVar10 = 0;
  plStack_368 = (longlong *)0x0;
  plStack_280 = plStack_300;
  if ((bVar18) && (uStack_358 != (longlong *)0x0)) {
    (**(code **)(*uStack_358 + 0x38))();
  }
  if ((!bVar18) && ((longlong *)CONCAT44(fStack_34c,fStack_350) != (longlong *)0x0)) {
    (**(code **)(*(longlong *)CONCAT44(fStack_34c,fStack_350) + 0x38))();
  }
  puVar10 = (uint64_t *)FUN_1800b33d0(_DAT_180c86930,&uStack_370,&puStack_188);
  plVar11 = (longlong *)*puVar10;
  *puVar10 = 0;
  plStack_368 = plStack_360;
  if (plStack_360 != (longlong *)0x0) {
    lVar3 = *plStack_360;
    plStack_360 = plVar11;
    (**(code **)(lVar3 + 0x38))();
    plVar11 = plStack_360;
  }
  plStack_360 = plVar11;
  if (uStack_370 != (longlong *)0x0) {
    (**(code **)(*uStack_370 + 0x38))();
  }
  bVar18 = plStack_360 == (longlong *)0x0;
  if (bVar18) {
    puVar10 = (uint64_t *)FUN_1800763c0(plVar15,&uStack_358);
  }
  else {
    puVar10 = (uint64_t *)FUN_1800763c0(plStack_360,&fStack_350);
  }
  plStack_2f0 = (longlong *)*puVar10;
  *puVar10 = 0;
  plStack_368 = (longlong *)0x0;
  plStack_278 = plStack_2f0;
  if ((bVar18) && (uStack_358 != (longlong *)0x0)) {
    (**(code **)(*uStack_358 + 0x38))();
  }
  if ((!bVar18) && ((longlong *)CONCAT44(fStack_34c,fStack_350) != (longlong *)0x0)) {
    (**(code **)(*(longlong *)CONCAT44(fStack_34c,fStack_350) + 0x38))();
  }
  puVar10 = (uint64_t *)FUN_1800b33d0(_DAT_180c86930,&uStack_370,&puStack_1c8);
  plVar11 = (longlong *)*puVar10;
  *puVar10 = 0;
  plStack_368 = plStack_360;
  if (plStack_360 != (longlong *)0x0) {
    lVar3 = *plStack_360;
    plStack_360 = plVar11;
    (**(code **)(lVar3 + 0x38))();
    plVar11 = plStack_360;
  }
  plStack_360 = plVar11;
  if (uStack_370 != (longlong *)0x0) {
    (**(code **)(*uStack_370 + 0x38))();
  }
  bVar18 = plStack_360 == (longlong *)0x0;
  if (bVar18) {
    puVar10 = (uint64_t *)FUN_1800763c0(plVar15,&fStack_350);
  }
  else {
    puVar10 = (uint64_t *)FUN_1800763c0(plStack_360,&uStack_370);
  }
  plVar11 = (longlong *)*puVar10;
  *puVar10 = 0;
  uStack_358 = (longlong *)0x0;
  plStack_368 = plVar11;
  plStack_270 = plVar11;
  if ((bVar18) && ((longlong *)CONCAT44(fStack_34c,fStack_350) != (longlong *)0x0)) {
    (**(code **)(*(longlong *)CONCAT44(fStack_34c,fStack_350) + 0x38))();
  }
  if ((!bVar18) && (uStack_370 != (longlong *)0x0)) {
    (**(code **)(*uStack_370 + 0x38))();
  }
  puVar10 = (uint64_t *)FUN_1800b33d0(_DAT_180c86930,&uStack_340,&puStack_1a8);
  plVar12 = (longlong *)*puVar10;
  *puVar10 = 0;
  uStack_358 = plStack_360;
  if (plStack_360 != (longlong *)0x0) {
    lVar3 = *plStack_360;
    plStack_360 = plVar12;
    (**(code **)(lVar3 + 0x38))();
    plVar12 = plStack_360;
  }
  plStack_360 = plVar12;
  if (uStack_340 != (longlong *)0x0) {
    (**(code **)(*uStack_340 + 0x38))();
  }
  bVar18 = plStack_360 == (longlong *)0x0;
  if (bVar18) {
    plVar12 = (longlong *)FUN_1800763c0(plVar15,&fStack_350);
  }
  else {
    plVar12 = (longlong *)FUN_1800763c0(plStack_360,&uStack_370);
  }
  plVar4 = (longlong *)*plVar12;
  *plVar12 = 0;
  uStack_358 = (longlong *)0x0;
  plStack_268 = plVar4;
  plStack_228 = plVar4;
  if ((bVar18) && ((longlong *)CONCAT44(fStack_34c,fStack_350) != (longlong *)0x0)) {
    (**(code **)(*(longlong *)CONCAT44(fStack_34c,fStack_350) + 0x38))();
  }
  if ((!bVar18) && (uStack_370 != (longlong *)0x0)) {
    (**(code **)(*uStack_370 + 0x38))();
  }
  pfVar16 = param_5;
  uStack_370 = (longlong *)0x0;
  FUN_180487b30(plVar4,&uStack_370,param_5);
  uStack_370 = (longlong *)0x0;
  FUN_180487b30(plVar11,&uStack_370,pfVar16);
  uStack_370 = (longlong *)0x0;
  FUN_180487b30(plStack_300,&uStack_370,pfVar16);
  uStack_370 = (longlong *)0x0;
  FUN_180487b30(plStack_2f0,&uStack_370,pfVar16);
  FUN_180075b70(plStack_2e0);
  FUN_180075b70(plStack_2e8);
  FUN_180075b70(plStack_2f8);
  FUN_180075b70(*param_1);
  FUN_180075b70(plStack_300);
  FUN_180075b70(plStack_2f0);
  FUN_180075b70(plVar4);
  FUN_180075b70(plVar11);
  pfVar6 = uStackX_18;
  fVar21 = *pfVar16;
  fVar20 = fVar21 / pfVar16[1];
  aiStack_348[0] = 1;
  aiStack_348[1] = 0;
  uStack_370 = (longlong *)CONCAT44(param_4[1],*param_4 - fVar21);
  uStack_340 = (longlong *)CONCAT44(param_4[1] - pfVar16[1],fVar21 + *uStackX_18);
  FUN_1804879d0(plStack_2f8,&uStack_340,&uStack_370,aiStack_348 + 1,aiStack_348,fVar20);
  aiStack_348[1] = 0;
  aiStack_348[0] = 0;
  uStack_370 = (longlong *)CONCAT44(pfVar6[1] + pfVar16[1],*param_4 - *pfVar16);
  uStack_340 = (longlong *)CONCAT44(pfVar6[1],*pfVar16 + *pfVar6);
  FUN_1804879d0(*param_1,&uStack_340,&uStack_370,aiStack_348,aiStack_348 + 1,fVar20);
  aiStack_348[1] = 0;
  aiStack_348[0] = 0;
  uStack_370 = (longlong *)CONCAT44(param_4[1] - pfVar16[1],*pfVar6 + *pfVar16);
  uStack_340 = (longlong *)CONCAT44(pfVar16[1] + pfVar6[1],*pfVar6);
  FUN_180487870(plStack_2e0,&uStack_340,&uStack_370,aiStack_348,aiStack_348 + 1,fVar20);
  plVar12 = plStack_2e8;
  aiStack_348[1] = 1;
  aiStack_348[0] = 0;
  uStack_370 = (longlong *)CONCAT44(param_4[1] - pfVar16[1],*param_4);
  uStack_340 = (longlong *)CONCAT44(pfVar16[1] + pfVar6[1],*param_4 - *pfVar16);
  FUN_180487870(plStack_2e8,&uStack_340,&uStack_370,aiStack_348,aiStack_348 + 1,fVar20);
  uStack_e8 = 0x3f800000;
  uStack_e0 = 0;
  uStack_d8 = 0x3f80000000000000;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0x3f800000;
  fStack_b8 = 0.0;
  fStack_b4 = 0.0;
  uStack_b0 = 0;
  uStack_ac = 0x3f800000;
  puVar10 = (uint64_t *)FUN_1800b33d0(_DAT_180c86930,&fStack_350,&puStack_1e8);
  plVar11 = (longlong *)*puVar10;
  *puVar10 = 0;
  uStack_358 = plStack_360;
  if (plStack_360 != (longlong *)0x0) {
    lVar3 = *plStack_360;
    plStack_360 = plVar11;
    (**(code **)(lVar3 + 0x38))();
    plVar11 = plStack_360;
  }
  plStack_360 = plVar11;
  if ((longlong *)CONCAT44(fStack_34c,fStack_350) != (longlong *)0x0) {
    (**(code **)(*(longlong *)CONCAT44(fStack_34c,fStack_350) + 0x38))();
  }
  bVar18 = plStack_360 == (longlong *)0x0;
  if (bVar18) {
    plVar11 = (longlong *)FUN_1800763c0(plVar15,&uStack_358);
  }
  else {
    plVar11 = (longlong *)FUN_1800763c0(plStack_360,&fStack_350);
  }
  plVar5 = (longlong *)*plVar11;
  *plVar11 = 0;
  plStack_90 = plVar5;
  if ((bVar18) && (uStack_358 != (longlong *)0x0)) {
    (**(code **)(*uStack_358 + 0x38))();
  }
  if ((!bVar18) && ((longlong *)CONCAT44(fStack_34c,fStack_350) != (longlong *)0x0)) {
    (**(code **)(*(longlong *)CONCAT44(fStack_34c,fStack_350) + 0x38))();
  }
  uStack_370 = (longlong *)0x3f8000003f800000;
  uStack_340 = (longlong *)0x0;
  FUN_180487b30(plVar5,&uStack_340,&uStack_370);
  FUN_180075b70(plVar5);
  lVar3 = *(longlong *)(*param_1 + 0x1b8);
  if (((((lVar3 != plVar12[0x37]) || (lVar3 != plStack_2f8[0x37])) || (lVar3 != plStack_300[0x37]))
      || ((lVar3 != plStack_2f0[0x37] || (lVar3 != plStack_368[0x37])))) ||
     ((lVar3 != plVar4[0x37] || (lVar3 != plVar5[0x37])))) {
    FUN_1806272a0(&unknown_var_6864_ptr);
  }
  pfVar6 = param_6;
  fVar21 = ((uStackX_20[1] - pfVar16[1]) - (pfVar16[1] + uStackX_18[1])) / param_6[1];
  aiStack_348[0] = (int)fVar21;
  iVar17 = 0;
  if (0 < aiStack_348[0]) {
    aiStack_348[1] = 0;
    uStack_340 = (longlong *)((ulonglong)uStack_340 & 0xffffffff00000000);
    do {
      pfVar1 = uStackX_20;
      FUN_1800763c0(plVar5,&uStack_370);
      plVar15 = uStack_370;
      fVar20 = pfVar6[1];
      fVar2 = *pfVar6;
      fVar19 = pfVar1[1] - pfVar16[1];
      fStack_34c = fVar19 - (float)iVar17 * fVar20;
      fStack_350 = *pfVar1 - *pfVar16;
      iVar17 = iVar17 + 1;
      uStack_358 = (longlong *)CONCAT44(fVar19 - (float)iVar17 * fVar20,*pfVar16 + *uStackX_18);
      plStack_a8 = uStack_370;
      if (uStack_370 != (longlong *)0x0) {
        (**(code **)(*uStack_370 + 0x28))(uStack_370);
      }
      plStack_338 = (longlong *)0x0;
      plStack_330 = (longlong *)0x0;
      pfStack_298 = afStack_328;
      plStack_310 = (longlong *)0x0;
      plStack_320 = (longlong *)0x0;
      afStack_328[0]._0_1_ = 0;
      plStack_260 = plVar15;
      if (plVar15 != (longlong *)0x0) {
        (**(code **)(*plVar15 + 0x28))(plVar15);
      }
      plVar11 = plStack_338;
      plStack_260 = plStack_338;
      plStack_338 = plVar15;
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x38))();
      }
      plStack_320 = plVar15;
      uStack_318 = 0;
      FUN_18007f4c0(afStack_328);
      plVar11 = plStack_310;
      plStack_258 = plStack_310;
      if (plStack_310 != (longlong *)0x0) {
        (**(code **)(*plStack_310 + 0x28))(plStack_310);
      }
      plVar12 = plStack_330;
      plStack_258 = plStack_330;
      plStack_330 = plVar11;
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x38))();
      }
      uStack_308 = 0;
      cStack_306 = '\0';
      if (plVar15 != (longlong *)0x0) {
        (**(code **)(*plVar15 + 0x38))(plVar15);
      }
      FUN_1802325e0(&plStack_338,&uStack_358,&fStack_350,&uStack_340,aiStack_348 + 1,fVar2 / fVar20)
      ;
      if ((plStack_338 != (longlong *)0x0) && (plStack_330 != (longlong *)0x0)) {
        if (cStack_306 != '\0') {
          FUN_180075b70();
        }
        FUN_18007f6a0(afStack_328);
        if ((char)uStack_308 != '\0') {
          FUN_180079520(plStack_338);
        }
        if (uStack_308._1_1_ != '\0') {
          FUN_180079520(plStack_338);
        }
        plVar15 = plStack_330;
        plStack_250 = plStack_330;
        plStack_330 = (longlong *)0x0;
        if (plVar15 != (longlong *)0x0) {
          (**(code **)(*plVar15 + 0x38))();
        }
      }
      pfStack_298 = afStack_328;
      FUN_18007f6a0(afStack_328);
      if (plStack_310 != (longlong *)0x0) {
        (**(code **)(*plStack_310 + 0x38))();
      }
      if (plStack_330 != (longlong *)0x0) {
        (**(code **)(*plStack_330 + 0x38))();
      }
      if (plStack_338 != (longlong *)0x0) {
        (**(code **)(*plStack_338 + 0x38))();
      }
      plVar11 = uStack_370;
      plVar15 = (longlong *)*param_1;
      plStack_88 = plVar15;
      if (plVar15 != (longlong *)0x0) {
        (**(code **)(*plVar15 + 0x28))(plVar15);
      }
      plStack_2d8 = (longlong *)0x0;
      plStack_2d0 = (longlong *)0x0;
      plStack_2b0 = (longlong *)0x0;
      plStack_2c0 = (longlong *)0x0;
      auStack_2c8[0] = 0;
      pfStack_298 = (float *)auStack_2c8;
      if (plVar15 != (longlong *)0x0) {
        plStack_248 = plVar15;
        (**(code **)(*plVar15 + 0x28))(plVar15);
      }
      plStack_248 = plStack_2d8;
      plVar12 = plVar15;
      if (plStack_2d8 != (longlong *)0x0) {
        lVar3 = *plStack_2d8;
        plStack_2d8 = plVar15;
        (**(code **)(lVar3 + 0x38))();
        plVar12 = plStack_2d8;
      }
      plStack_2d8 = plVar12;
      uStack_2b8 = 0;
      plStack_2c0 = plVar15;
      FUN_18007f4c0(auStack_2c8);
      plVar12 = plStack_2b0;
      plStack_240 = plStack_2b0;
      if (plStack_2b0 != (longlong *)0x0) {
        (**(code **)(*plStack_2b0 + 0x28))(plStack_2b0);
      }
      plVar4 = plStack_2d0;
      plStack_240 = plStack_2d0;
      plStack_2d0 = plVar12;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x38))();
      }
      uStack_2a8 = 0;
      cStack_2a6 = '\0';
      if (plVar15 != (longlong *)0x0) {
        (**(code **)(*plVar15 + 0x38))(plVar15);
      }
      pfStack_298 = (float *)0x3f8000003f800000;
      uStack_290 = 0x3f8000003f800000;
      FUN_180235ca0(&plStack_2d8,plVar11,&uStack_e8,0xff,&pfStack_298,1,0,0,1);
      if ((plStack_2d8 != (longlong *)0x0) && (plStack_2d0 != (longlong *)0x0)) {
        if (cStack_2a6 != '\0') {
          FUN_180075b70();
        }
        FUN_18007f6a0(auStack_2c8);
        if ((char)uStack_2a8 != '\0') {
          FUN_180079520(plStack_2d8);
        }
        if (uStack_2a8._1_1_ != '\0') {
          FUN_180079520(plStack_2d8);
        }
        plVar15 = plStack_2d0;
        plStack_238 = plStack_2d0;
        plStack_2d0 = (longlong *)0x0;
        if (plVar15 != (longlong *)0x0) {
          (**(code **)(*plVar15 + 0x38))();
        }
      }
      pfStack_298 = (float *)auStack_2c8;
      FUN_18007f6a0(auStack_2c8);
      if (plStack_2b0 != (longlong *)0x0) {
        (**(code **)(*plStack_2b0 + 0x38))();
      }
      if (plStack_2d0 != (longlong *)0x0) {
        (**(code **)(*plStack_2d0 + 0x38))();
      }
      if (plStack_2d8 != (longlong *)0x0) {
        (**(code **)(*plStack_2d8 + 0x38))();
      }
      if (uStack_370 != (longlong *)0x0) {
        (**(code **)(*uStack_370 + 0x38))();
      }
      plVar15 = plStack_230;
      pfVar16 = param_5;
    } while (iVar17 < aiStack_348[0]);
  }
  pfVar6 = param_6;
  fVar20 = (float)aiStack_348[0];
  fVar21 = fVar21 - fVar20;
  if (0.0 < fVar21) {
    FUN_1800763c0(plVar5,&uStack_370);
    plVar11 = uStack_370;
    plStack_338 = (longlong *)0x0;
    plStack_330 = (longlong *)0x0;
    param_5 = afStack_328;
    plStack_310 = (longlong *)0x0;
    plStack_320 = (longlong *)0x0;
    afStack_328[0]._0_1_ = 0;
    param_6 = (float *)uStack_370;
    if (uStack_370 != (longlong *)0x0) {
      (**(code **)(*uStack_370 + 0x28))(uStack_370);
    }
    plVar12 = plStack_338;
    param_6 = (float *)plStack_338;
    plStack_338 = plVar11;
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x38))();
    }
    plStack_320 = plVar11;
    uStack_318 = 0;
    FUN_18007f4c0(afStack_328);
    plVar11 = plStack_310;
    param_6 = (float *)plStack_310;
    if (plStack_310 != (longlong *)0x0) {
      (**(code **)(*plStack_310 + 0x28))(plStack_310);
    }
    plVar12 = plStack_330;
    param_6 = (float *)plStack_330;
    plStack_330 = plVar11;
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x38))();
    }
    pfVar8 = uStackX_20;
    pfVar7 = uStackX_18;
    uStack_308 = 0;
    cStack_306 = '\0';
    fVar2 = pfVar6[1];
    param_6 = (float *)((ulonglong)param_6 & 0xffffffff00000000);
    param_5 = (float *)((ulonglong)param_5 & 0xffffffff00000000);
    pfVar1 = uStackX_20 + 1;
    uStackX_20 = (float *)CONCAT44((*pfVar1 - pfVar16[1]) - fVar2 * fVar20,*uStackX_20 - *pfVar16);
    uStackX_18 = (float *)CONCAT44((*pfVar1 - pfVar16[1]) - (float)(aiStack_348[0] + 1) * fVar2,
                                   *pfVar16 + *uStackX_18);
    FUN_1802325e0(&plStack_338,&uStackX_18,&uStackX_20,&param_5,&param_6,*pfVar6 / fVar2);
    fVar20 = pfVar16[1] + pfVar7[1];
    uStackX_18 = (float *)CONCAT44(fVar21 * pfVar6[1] + fVar20,*pfVar8 - *pfVar16);
    uStackX_20 = (float *)CONCAT44(fVar20,*pfVar16 + *pfVar7);
    FUN_180231fa0(&plStack_338,&uStackX_20,&uStackX_18,fVar21);
    if ((plStack_338 != (longlong *)0x0) && (plStack_330 != (longlong *)0x0)) {
      if (cStack_306 != '\0') {
        FUN_180075b70();
      }
      FUN_18007f6a0(afStack_328);
      if ((char)uStack_308 != '\0') {
        FUN_180079520(plStack_338);
      }
      if (uStack_308._1_1_ != '\0') {
        FUN_180079520(plStack_338);
      }
      plVar11 = plStack_330;
      uStackX_18 = (float *)plStack_330;
      plStack_330 = (longlong *)0x0;
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x38))();
      }
    }
    uStackX_18 = afStack_328;
    FUN_18007f6a0(afStack_328);
    if (plStack_310 != (longlong *)0x0) {
      (**(code **)(*plStack_310 + 0x38))();
    }
    if (plStack_330 != (longlong *)0x0) {
      (**(code **)(*plStack_330 + 0x38))();
    }
    if (plStack_338 != (longlong *)0x0) {
      (**(code **)(*plStack_338 + 0x38))();
    }
    FUN_180095100(*param_1,uStack_370,&uStack_e8);
    if (uStack_370 != (longlong *)0x0) {
      (**(code **)(*uStack_370 + 0x38))();
    }
  }
  plVar12 = plStack_2f8;
  FUN_180095100(*param_1,plStack_2f8,&system_data_0300);
  FUN_180095100(*param_1,plStack_2e0,&system_data_0300);
  FUN_180095100(*param_1,plStack_2e8,&system_data_0300);
  FUN_180075b70(*param_1);
  plVar9 = plStack_228;
  FUN_180095100(*param_1,plStack_228,&uStack_e8);
  fStack_b4 = *(float *)(*param_1 + 0x288) - *(float *)(plStack_300 + 0x51);
  FUN_180095100(*param_1,plStack_300,&uStack_e8);
  plVar4 = plStack_2f0;
  fStack_b8 = *(float *)(*param_1 + 0x284) - *(float *)((longlong)plStack_2f0 + 0x284);
  FUN_180095100(*param_1,plStack_2f0,&uStack_e8);
  plVar11 = plStack_368;
  fStack_b4 = 0.0;
  FUN_180095100(*param_1,plStack_368,&uStack_e8);
  puVar13 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar13 = *(void **)(param_2 + 8);
  }
  (**(code **)(*(longlong *)(*param_1 + 0x10) + 0x10))((longlong *)(*param_1 + 0x10),puVar13);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x38))(plVar5);
  }
  if (plStack_360 != (longlong *)0x0) {
    (**(code **)(*plStack_360 + 0x38))();
  }
  if (plVar15 != (longlong *)0x0) {
    (**(code **)(*plVar15 + 0x38))(plVar15);
  }
  if (plStack_2a0 != (longlong *)0x0) {
    (**(code **)(*plStack_2a0 + 0x38))();
  }
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x38))(plVar9);
  }
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x38))(plVar11);
  }
  (**(code **)(*plStack_300 + 0x38))();
  (**(code **)(*plVar4 + 0x38))(plVar4);
  if (plVar12 != (longlong *)0x0) {
    (**(code **)(*plVar12 + 0x38))(plVar12);
  }
  if (plStack_2e8 != (longlong *)0x0) {
    (**(code **)(*plStack_2e8 + 0x38))();
  }
  if (plStack_2e0 != (longlong *)0x0) {
    (**(code **)(*plStack_2e0 + 0x38))();
  }
  puStack_1e8 = &unknown_var_3456_ptr;
  if (lStack_1e0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_1e0 = 0;
  uStack_1d0 = 0;
  puStack_1e8 = &unknown_var_720_ptr;
  puStack_1c8 = &unknown_var_3456_ptr;
  if (lStack_1c0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_1c0 = 0;
  uStack_1b0 = 0;
  puStack_1c8 = &unknown_var_720_ptr;
  puStack_1a8 = &unknown_var_3456_ptr;
  if (lStack_1a0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_1a0 = 0;
  uStack_190 = 0;
  puStack_1a8 = &unknown_var_720_ptr;
  puStack_188 = &unknown_var_3456_ptr;
  if (lStack_180 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_180 = 0;
  uStack_170 = 0;
  puStack_188 = &unknown_var_720_ptr;
  puStack_168 = &unknown_var_3456_ptr;
  if (lStack_160 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_160 = 0;
  uStack_150 = 0;
  puStack_168 = &unknown_var_720_ptr;
  puStack_208 = &unknown_var_3456_ptr;
  if (lStack_200 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_200 = 0;
  uStack_1f0 = 0;
  puStack_208 = &unknown_var_720_ptr;
  puStack_148 = &unknown_var_3456_ptr;
  if (lStack_140 == 0) {
    lStack_140 = 0;
    uStack_130 = 0;
    puStack_148 = &unknown_var_720_ptr;
    puStack_128 = &unknown_var_3456_ptr;
    if (lStack_120 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_120 = 0;
    uStack_110 = 0;
    puStack_128 = &unknown_var_720_ptr;
    puStack_108 = &unknown_var_3456_ptr;
    if (lStack_100 == 0) {
      return param_1;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Removing unreachable block (ram,0x0001804875dd)
// WARNING: Removing unreachable block (ram,0x0001804875f1)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong *
FUN_1804871c0(longlong *param_1,longlong param_2,uint64_t *param_3,int32_t *param_4,
             uint64_t param_5)

{
  float fVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  float *pfVar7;
  longlong *plVar8;
  uint64_t *puVar9;
  void *puVar10;
  bool bVar11;
  uint64_t uStackX_10;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  longlong *plStack_140;
  longlong *plStack_138;
  longlong *plStack_130;
  longlong *plStack_128;
  longlong *plStack_120;
  longlong *plStack_118;
  longlong *plStack_110;
  longlong *plStack_108;
  void *puStack_100;
  longlong lStack_f8;
  int32_t uStack_e8;
  void *puStack_e0;
  longlong lStack_d8;
  int32_t uStack_c8;
  void *puStack_c0;
  longlong lStack_b8;
  uint64_t uStack_a0;
  longlong *plStack_98;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  
  uStack_a0 = 0xfffffffffffffffe;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  FUN_180627e10(param_2,&puStack_c0,&unknown_var_6816_ptr);
  FUN_180627e10(param_2,&puStack_e0,&unknown_var_6824_ptr);
  FUN_180627e10(param_2,&puStack_100,&unknown_var_6936_ptr);
  plStack_110 = (longlong *)0x0;
  plStack_108 = (longlong *)0x0;
  FUN_1800b33d0(_DAT_180c86930,&plStack_118,param_2);
  bVar11 = plStack_118 == (longlong *)0x0;
  if (bVar11) {
    puVar9 = (uint64_t *)FUN_1800bf050(0,&plStack_120);
    plVar8 = (longlong *)FUN_1800763c0(*puVar9,&uStackX_10);
  }
  else {
    plVar8 = (longlong *)FUN_1800763c0(plStack_118,&plStack_130);
  }
  plVar2 = (longlong *)*plVar8;
  *plVar8 = 0;
  plStack_98 = plVar2;
  if ((bVar11) && (uStackX_10 != (longlong *)0x0)) {
    (**(code **)(*uStackX_10 + 0x38))();
  }
  if ((bVar11) && (plStack_120 != (longlong *)0x0)) {
    (**(code **)(*plStack_120 + 0x38))();
  }
  if ((!bVar11) && (plStack_130 != (longlong *)0x0)) {
    (**(code **)(*plStack_130 + 0x38))();
  }
  FUN_1800b33d0(_DAT_180c86930,&plStack_140,&puStack_c0);
  bVar11 = plStack_140 == (longlong *)0x0;
  if (bVar11) {
    plVar8 = (longlong *)FUN_1800763c0(plVar2,&plStack_130);
  }
  else {
    plVar8 = (longlong *)FUN_1800763c0(plStack_140,&plStack_120);
  }
  plVar3 = (longlong *)*plVar8;
  *plVar8 = 0;
  uStackX_10 = (longlong *)0x0;
  plStack_110 = plVar3;
  if ((bVar11) && (plStack_130 != (longlong *)0x0)) {
    (**(code **)(*plStack_130 + 0x38))();
  }
  if ((!bVar11) && (plStack_120 != (longlong *)0x0)) {
    (**(code **)(*plStack_120 + 0x38))();
  }
  puVar9 = (uint64_t *)FUN_1800b33d0(_DAT_180c86930,&plStack_138,&puStack_e0);
  plVar8 = (longlong *)*puVar9;
  *puVar9 = 0;
  uStackX_10 = plStack_140;
  if (plStack_140 != (longlong *)0x0) {
    lVar4 = *plStack_140;
    plStack_140 = plVar8;
    (**(code **)(lVar4 + 0x38))();
    plVar8 = plStack_140;
  }
  plStack_140 = plVar8;
  if (plStack_138 != (longlong *)0x0) {
    (**(code **)(*plStack_138 + 0x38))();
  }
  bVar11 = plStack_140 == (longlong *)0x0;
  if (bVar11) {
    plVar8 = (longlong *)FUN_1800763c0(plVar3,&plStack_138);
  }
  else {
    plVar8 = (longlong *)FUN_1800763c0(plStack_140,&plStack_130);
  }
  plVar5 = (longlong *)*plVar8;
  *plVar8 = 0;
  uStackX_10 = (longlong *)0x0;
  plStack_108 = plVar5;
  if ((bVar11) && (plStack_138 != (longlong *)0x0)) {
    (**(code **)(*plStack_138 + 0x38))();
  }
  if ((!bVar11) && (plStack_130 != (longlong *)0x0)) {
    (**(code **)(*plStack_130 + 0x38))();
  }
  pfVar7 = (float *)CONCAT44(param_5._4_4_,(int32_t)param_5);
  param_5._4_4_ = *(float *)((longlong)uStackX_18 + 4) + pfVar7[1];
  param_5._0_4_ = *param_4;
  uStackX_10 = (longlong *)*uStackX_18;
  FUN_180487b30(plVar3,&uStackX_10,&param_5);
  param_5._4_4_ = (float)param_4[1];
  param_5._0_4_ = *param_4;
  uStackX_10 = (longlong *)CONCAT44(param_5._4_4_ - *pfVar7,*(int32_t *)uStackX_18);
  FUN_180487b30(plVar5,&uStackX_10,&param_5);
  puVar9 = (uint64_t *)FUN_1800b33d0(_DAT_180c86930,&param_5,&puStack_100);
  plVar8 = (longlong *)*puVar9;
  *puVar9 = 0;
  plStack_138 = plStack_140;
  if (plStack_140 != (longlong *)0x0) {
    lVar4 = *plStack_140;
    plStack_140 = plVar8;
    (**(code **)(lVar4 + 0x38))();
    plVar8 = plStack_140;
  }
  plStack_140 = plVar8;
  if ((longlong *)CONCAT44(param_5._4_4_,(int32_t)param_5) != (longlong *)0x0) {
    (**(code **)(*(longlong *)CONCAT44(param_5._4_4_,(int32_t)param_5) + 0x38))();
  }
  bVar11 = plStack_140 == (longlong *)0x0;
  if (bVar11) {
    plVar8 = (longlong *)FUN_1800763c0(plVar2,&param_5);
  }
  else {
    plVar8 = (longlong *)FUN_1800763c0(plStack_140,&uStackX_10);
  }
  plVar6 = (longlong *)*plVar8;
  *plVar8 = 0;
  plStack_138 = plVar6;
  if ((bVar11) && ((longlong *)CONCAT44(param_5._4_4_,(int32_t)param_5) != (longlong *)0x0)) {
    (**(code **)(*(longlong *)CONCAT44(param_5._4_4_,(int32_t)param_5) + 0x38))();
  }
  param_5._0_4_ = 0x3f800000;
  param_5._4_4_ = 1.0;
  uStackX_10 = (longlong *)0x0;
  FUN_180487b30(plVar6,&uStackX_10,&param_5);
  FUN_180075b70(plVar6);
  if ((plVar3[0x37] != plVar5[0x37]) || (plVar3[0x37] != plVar6[0x37])) {
    FUN_1806272a0(&unknown_var_7008_ptr);
  }
  uStack_88 = 0x3f800000;
  uStack_80 = 0;
  uStack_78 = 0x3f80000000000000;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0x3f800000;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0x3f800000;
  FUN_180095100(plVar3,plVar5,&uStack_88);
  FUN_1800763c0(plVar6,&plStack_128);
  fVar1 = pfVar7[1];
  param_5._0_4_ = 0;
  uStackX_10 = (longlong *)((ulonglong)uStackX_10 & 0xffffffff00000000);
  uStackX_20 = (int32_t *)CONCAT44((float)uStackX_20[1] - fVar1,*uStackX_20);
  uStackX_18 = (uint64_t *)
               CONCAT44(fVar1 + *(float *)((longlong)uStackX_18 + 4),*(int32_t *)uStackX_18);
  FUN_180487870(plStack_128,&uStackX_18,&uStackX_20,&uStackX_10,&param_5,*pfVar7 / fVar1);
  FUN_180095100(plVar3,plStack_128,&uStack_88);
  puVar10 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar10 = *(void **)(param_2 + 8);
  }
  (**(code **)(plVar3[2] + 0x10))(plVar3 + 2,puVar10);
  *param_1 = (longlong)plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  if (plStack_128 != (longlong *)0x0) {
    (**(code **)(*plStack_128 + 0x38))();
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x38))(plVar6);
  }
  if (plStack_140 != (longlong *)0x0) {
    (**(code **)(*plStack_140 + 0x38))();
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2);
  }
  if (plStack_118 != (longlong *)0x0) {
    (**(code **)(*plStack_118 + 0x38))();
  }
  (**(code **)(*plVar5 + 0x38))(plVar5);
  (**(code **)(*plVar3 + 0x38))(plVar3);
  puStack_100 = &unknown_var_3456_ptr;
  if (lStack_f8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_f8 = 0;
  uStack_e8 = 0;
  puStack_100 = &unknown_var_720_ptr;
  puStack_e0 = &unknown_var_3456_ptr;
  if (lStack_d8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_d8 = 0;
  uStack_c8 = 0;
  puStack_e0 = &unknown_var_720_ptr;
  puStack_c0 = &unknown_var_3456_ptr;
  if (lStack_b8 == 0) {
    return param_1;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}







