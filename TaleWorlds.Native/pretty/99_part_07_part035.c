#include "TaleWorlds.Native.Split.h"

// 99_part_07_part035.c - 6 个函数

// 函数: void FUN_1804bb5b0(int64_t param_1,int64_t *param_2,int64_t *param_3,int64_t *param_4,
void FUN_1804bb5b0(int64_t param_1,int64_t *param_2,int64_t *param_3,int64_t *param_4,
                  uint64_t *param_5,uint64_t param_6,int32_t param_7,int32_t param_8,
                  int64_t param_9,int8_t param_10)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint uVar4;
  int64_t *plVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int64_t *plVar8;
  uint64_t *puVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  int32_t extraout_XMM0_Da;
  int32_t uVar13;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int64_t *plStackX_8;
  int64_t *plStack_60;
  int64_t *plStack_58;
  int64_t *plStack_50;
  int64_t *plStack_48;
  uint64_t uStack_40;
  
  lVar3 = param_9;
  uStack_40 = 0xfffffffffffffffe;
  plVar10 = (int64_t *)0x0;
  plStackX_8 = (int64_t *)0x0;
  param_6 = (int64_t *)0x0;
  plStack_60 = (int64_t *)0x0;
  plStack_58 = (int64_t *)0x0;
  puVar6 = (uint64_t *)(param_1 + 0xb8);
  uVar4 = func_0x0001804bb950(param_9);
  puVar9 = (uint64_t *)puVar6[2];
  puVar7 = puVar6;
  if (puVar9 != (uint64_t *)0x0) {
    do {
      if (*(uint *)(puVar9 + 4) < uVar4) {
        puVar9 = (uint64_t *)*puVar9;
      }
      else {
        puVar7 = puVar9;
        puVar9 = (uint64_t *)puVar9[1];
      }
    } while (puVar9 != (uint64_t *)0x0);
    if ((puVar7 != puVar6) && (*(uint *)(puVar7 + 4) <= uVar4)) goto LAB_1804bb64b;
  }
  puVar7 = puVar6;
LAB_1804bb64b:
  if (puVar7 == puVar6) {
    plVar5 = (int64_t *)FUN_1804bca40(puVar7,&plStack_48,lVar3);
    lVar1 = *plVar5;
    *plVar5 = 0;
    plStack_50 = (int64_t *)*param_2;
    *param_2 = lVar1;
    uVar13 = extraout_XMM0_Da;
    if (plStack_50 != (int64_t *)0x0) {
      uVar13 = (**(code **)(*plStack_50 + 0x38))();
    }
    if (plStack_48 != (int64_t *)0x0) {
      uVar13 = (**(code **)(*plStack_48 + 0x38))();
    }
    plVar5 = (int64_t *)FUN_1804bd030(uVar13,&plStack_50,lVar3,param_7);
    lVar1 = *plVar5;
    *plVar5 = 0;
    plStack_48 = (int64_t *)*param_4;
    *param_4 = lVar1;
    uVar13 = extraout_XMM0_Da_00;
    if (plStack_48 != (int64_t *)0x0) {
      uVar13 = (**(code **)(*plStack_48 + 0x38))();
    }
    if (plStack_50 != (int64_t *)0x0) {
      uVar13 = (**(code **)(*plStack_50 + 0x38))();
    }
    plVar5 = (int64_t *)FUN_1804bd2b0(uVar13,&plStack_50,lVar3,param_8);
    lVar1 = *plVar5;
    *plVar5 = 0;
    plStack_48 = (int64_t *)*param_3;
    *param_3 = lVar1;
    uVar13 = extraout_XMM0_Da_01;
    if (plStack_48 != (int64_t *)0x0) {
      uVar13 = (**(code **)(*plStack_48 + 0x38))();
    }
    if (plStack_50 != (int64_t *)0x0) {
      uVar13 = (**(code **)(*plStack_50 + 0x38))();
    }
    puVar6 = (uint64_t *)FUN_1804bce70(uVar13,&plStack_50,lVar3);
    uVar2 = *puVar6;
    *puVar6 = 0;
    plStack_48 = (int64_t *)*param_5;
    *param_5 = uVar2;
    plVar8 = plStack_50;
    plVar11 = plVar10;
    plVar12 = plVar10;
    plVar5 = plVar10;
    if (plStack_48 != (int64_t *)0x0) {
      (**(code **)(*plStack_48 + 0x38))();
      plVar8 = plStack_50;
    }
  }
  else {
    FUN_1804af7b0(puVar7[5],&plStackX_8,&param_6,&plStack_60,&plStack_58,lVar3 + 0x3c,
                  *(int32_t *)(lVar3 + 8),param_7,*(int32_t *)(lVar3 + 4),param_8,
                  *(int32_t *)(lVar3 + 0xc),*(int32_t *)(lVar3 + 0x20),
                  *(int32_t *)(lVar3 + 0x18),*(int32_t *)(lVar3 + 0x1c),
                  *(int32_t *)(lVar3 + 0x548),*(int32_t *)(lVar3 + 0x53c),
                  *(int32_t *)(lVar3 + 0x54c),*(int32_t *)(lVar3 + 0x550),
                  *(int32_t *)(lVar3 + 0x558),*(int32_t *)(lVar3 + 0x554),param_10);
    plVar10 = plStackX_8;
    plStack_48 = plStackX_8;
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x28))(plStackX_8);
    }
    plStack_48 = (int64_t *)*param_2;
    *param_2 = (int64_t)plVar10;
    if (plStack_48 != (int64_t *)0x0) {
      (**(code **)(*plStack_48 + 0x38))();
    }
    plVar5 = param_6;
    plStack_48 = param_6;
    if (param_6 != (int64_t *)0x0) {
      (**(code **)(*param_6 + 0x28))(param_6);
    }
    plStack_48 = (int64_t *)*param_3;
    *param_3 = (int64_t)plVar5;
    if (plStack_48 != (int64_t *)0x0) {
      (**(code **)(*plStack_48 + 0x38))();
    }
    plVar11 = plStack_60;
    plStack_48 = plStack_60;
    if (plStack_60 != (int64_t *)0x0) {
      (**(code **)(*plStack_60 + 0x28))(plStack_60);
    }
    plStack_48 = (int64_t *)*param_4;
    *param_4 = (int64_t)plVar11;
    if (plStack_48 != (int64_t *)0x0) {
      (**(code **)(*plStack_48 + 0x38))();
    }
    plVar12 = plStack_58;
    plStack_48 = plStack_58;
    if (plStack_58 != (int64_t *)0x0) {
      (**(code **)(*plStack_58 + 0x28))(plStack_58);
    }
    plStack_48 = (int64_t *)*param_5;
    *param_5 = plVar12;
    plVar8 = plStack_48;
  }
  if (plVar8 != (int64_t *)0x0) {
    (**(code **)(*plVar8 + 0x38))();
  }
  if (plVar12 != (int64_t *)0x0) {
    (**(code **)(*plVar12 + 0x38))(plVar12);
  }
  if (plVar11 != (int64_t *)0x0) {
    (**(code **)(*plVar11 + 0x38))(plVar11);
  }
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x38))(plVar5);
  }
  if (plVar10 != (int64_t *)0x0) {
    (**(code **)(*plVar10 + 0x38))(plVar10);
  }
  return;
}



float FUN_1804bba40(int64_t param_1,int param_2,uint param_3,float param_4,float param_5)

{
  uint64_t *puVar1;
  float *pfVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  int8_t auStackX_8 [8];
  uint auStackX_10 [2];
  int8_t auStack_58 [64];
  
  fVar8 = 21.0;
  if (5.0 <= param_4) {
    if (10.0 <= param_4) {
      if (16.0 <= param_4) {
        uVar5 = (21.0 <= param_4) + 3;
      }
      else {
        uVar5 = 2;
      }
    }
    else {
      uVar5 = 1;
    }
  }
  else {
    uVar5 = 0;
  }
  puVar1 = (uint64_t *)(param_1 + 0xb8);
  uVar6 = (param_2 << 8 | param_3) << 8;
  auStackX_10[0] = uVar6 | uVar5;
  puVar4 = puVar1;
  puVar3 = *(uint64_t **)(param_1 + 200);
  while (puVar3 != (uint64_t *)0x0) {
    if (*(uint *)(puVar3 + 4) < auStackX_10[0]) {
      puVar3 = (uint64_t *)*puVar3;
    }
    else {
      puVar4 = puVar3;
      puVar3 = (uint64_t *)puVar3[1];
    }
  }
  if ((puVar4 == puVar1) || (auStackX_10[0] < *(uint *)(puVar4 + 4))) {
    puVar4 = (uint64_t *)FUN_1804c0610(puVar1,auStackX_8,auStackX_10[0],puVar4,auStackX_10);
    puVar4 = (uint64_t *)*puVar4;
  }
  pfVar2 = (float *)puVar4[5];
  if (uVar5 == 4) {
    fVar8 = *pfVar2;
  }
  else {
    fVar7 = (float)func_0x000180570560(uVar5);
    if (uVar5 == 0) {
      fVar8 = 5.0;
    }
    else if (uVar5 == 1) {
      fVar8 = 10.0;
    }
    else if (uVar5 == 2) {
      fVar8 = 16.0;
    }
    else if (uVar5 != 3) {
      fVar8 = 128.0;
    }
    auStackX_10[0] = uVar5 + 1 | uVar6;
    puVar4 = puVar1;
    puVar3 = *(uint64_t **)(param_1 + 200);
    while (puVar3 != (uint64_t *)0x0) {
      if (*(uint *)(puVar3 + 4) < auStackX_10[0]) {
        puVar3 = (uint64_t *)*puVar3;
      }
      else {
        puVar4 = puVar3;
        puVar3 = (uint64_t *)puVar3[1];
      }
    }
    if ((puVar4 == puVar1) || (auStackX_10[0] < *(uint *)(puVar4 + 4))) {
      puVar4 = (uint64_t *)FUN_1804c0610(puVar1,auStack_58);
      puVar4 = (uint64_t *)*puVar4;
    }
    fVar8 = ((param_4 - fVar7) / ((fVar8 - fVar7) + 1.0)) * (*(float *)puVar4[5] - *pfVar2) +
            *pfVar2;
  }
  return (param_5 * 0.2 + 0.9) * fVar8;
}



float FUN_1804bbb2e(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int unaff_EBX;
  uint unaff_EBP;
  float *unaff_RSI;
  uint64_t *unaff_RDI;
  float fVar4;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  uint in_stack_00000098;
  float in_stack_000000b0;
  
  fVar4 = (float)func_0x000180570560();
  if (unaff_EBX == 0) {
    unaff_XMM7_Da = 5.0;
  }
  else if (unaff_EBX == 1) {
    unaff_XMM7_Da = 10.0;
  }
  else if (unaff_EBX == 2) {
    unaff_XMM7_Da = 16.0;
  }
  else if (unaff_EBX != 3) {
    unaff_XMM7_Da = 128.0;
  }
  in_stack_00000098 = unaff_EBX + 1U | unaff_EBP;
  puVar2 = (uint64_t *)unaff_RDI[2];
  puVar3 = unaff_RDI;
  while (puVar1 = puVar2, puVar1 != (uint64_t *)0x0) {
    if (*(uint *)(puVar1 + 4) < in_stack_00000098) {
      puVar2 = (uint64_t *)*puVar1;
    }
    else {
      puVar2 = (uint64_t *)puVar1[1];
      puVar3 = puVar1;
    }
  }
  if ((puVar3 == unaff_RDI) || (in_stack_00000098 < *(uint *)(puVar3 + 4))) {
    puVar3 = (uint64_t *)FUN_1804c0610(fVar4,&stack0x00000030,param_3,puVar3,&stack0x00000098);
    puVar3 = (uint64_t *)*puVar3;
  }
  return (in_stack_000000b0 * 0.2 + 0.9) *
         (((unaff_XMM6_Da - fVar4) / ((unaff_XMM7_Da - fVar4) + 1.0)) *
          (*(float *)puVar3[5] - *unaff_RSI) + *unaff_RSI);
}



float FUN_1804bbc0c(void)

{
  float *unaff_RSI;
  float in_stack_000000b0;
  
  return (in_stack_000000b0 * 0.2 + 0.9) * *unaff_RSI;
}



uint FUN_1804bbc50(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  int iVar8;
  uint uVar9;
  uint64_t *puVar10;
  uint uVar11;
  uint64_t *puVar12;
  float fVar13;
  int8_t auVar14 [16];
  float fVar15;
  float fVar16;
  
  puVar12 = (uint64_t *)(param_1 + 0xb8);
  uVar4 = func_0x0001804bb950(param_2);
  puVar10 = (uint64_t *)puVar12[2];
  puVar7 = puVar12;
  if (puVar10 != (uint64_t *)0x0) {
    do {
      if (*(uint *)(puVar10 + 4) < uVar4) {
        puVar10 = (uint64_t *)*puVar10;
      }
      else {
        puVar7 = puVar10;
        puVar10 = (uint64_t *)puVar10[1];
      }
    } while (puVar10 != (uint64_t *)0x0);
    if ((puVar7 != puVar12) && (*(uint *)(puVar7 + 4) <= uVar4)) goto LAB_1804bbc9e;
  }
  puVar7 = puVar12;
LAB_1804bbc9e:
  fVar16 = *(float *)(param_2 + 0x548);
  if (0.99 <= fVar16) {
    fVar16 = 0.99;
  }
  iVar3 = *(int *)(puVar7[5] + 0x5d0) + -1;
  fVar16 = (float)iVar3 * fVar16;
  iVar8 = (int)fVar16;
  fVar13 = fVar16;
  if ((iVar8 != -0x80000000) && ((float)iVar8 != fVar16)) {
    auVar14._4_4_ = fVar16;
    auVar14._0_4_ = fVar16;
    auVar14._8_8_ = 0;
    uVar4 = movmskps(iVar3,auVar14);
    fVar13 = (float)(int)(iVar8 - (uVar4 & 1));
  }
  lVar2 = *(int64_t *)(puVar7[5] + 0x5c8);
  fVar16 = fVar16 - fVar13;
  fVar15 = 1.0 - fVar16;
  lVar6 = (int64_t)(int)(fVar13 + 0.1);
  lVar1 = lVar6 + 1;
  uVar5 = (uint)(int64_t)
                ((fVar15 * *(float *)(lVar2 + lVar6 * 0x10) +
                 fVar16 * *(float *)(lVar2 + lVar1 * 0x10)) * 256.0);
  uVar4 = 0xff;
  if (uVar5 < 0xff) {
    uVar4 = uVar5;
  }
  uVar11 = (uint)(int64_t)
                 ((fVar15 * *(float *)(lVar2 + 4 + lVar6 * 0x10) +
                  fVar16 * *(float *)(lVar2 + 4 + lVar1 * 0x10)) * 256.0);
  uVar5 = 0xff;
  if (uVar11 < 0xff) {
    uVar5 = uVar11;
  }
  uVar9 = (uint)(int64_t)
                ((fVar15 * *(float *)(lVar2 + 8 + lVar6 * 0x10) +
                 fVar16 * *(float *)(lVar2 + 8 + lVar1 * 0x10)) * 256.0);
  uVar11 = 0xff;
  if (uVar9 < 0xff) {
    uVar11 = uVar9;
  }
  return ((uVar4 | 0xffffff00) << 8 | uVar5) << 8 | uVar11;
}






// 函数: void FUN_1804bbcc0(int64_t param_1,float *param_2,int param_3,uint param_4)
void FUN_1804bbcc0(int64_t param_1,float *param_2,int param_3,uint param_4)

{
  uint64_t *puVar1;
  int iVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  int iVar5;
  uint64_t *puVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint64_t uVar13;
  float fVar14;
  int8_t auVar15 [16];
  float fVar16;
  int8_t auStackX_8 [8];
  uint auStackX_18 [2];
  
  uVar11 = 0;
  puVar1 = (uint64_t *)(param_1 + 0xb8);
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  param_2[8] = 0.0;
  param_2[9] = 0.0;
  param_2[10] = 0.0;
  param_2[0xb] = 0.0;
  param_2[0xc] = 0.0;
  param_2[0xd] = 0.0;
  param_2[0xe] = 0.0;
  param_2[0xf] = 0.0;
  param_2[0x10] = 0.0;
  param_2[0x11] = 0.0;
  param_2[0x12] = 0.0;
  param_2[0x13] = 0.0;
  fVar16 = *param_2;
  auStackX_18[0] = 0;
  if (5.0 <= fVar16) {
    if (10.0 <= fVar16) {
      if (16.0 <= fVar16) {
        auStackX_18[0] = (21.0 <= fVar16) + 3;
      }
      else {
        auStackX_18[0] = 2;
      }
    }
    else {
      auStackX_18[0] = 1;
    }
  }
  auStackX_18[0] = (param_3 << 8 | param_4) << 8 | auStackX_18[0];
  puVar6 = puVar1;
  puVar3 = *(uint64_t **)(param_1 + 200);
  while (puVar3 != (uint64_t *)0x0) {
    if (*(uint *)(puVar3 + 4) < auStackX_18[0]) {
      puVar3 = (uint64_t *)*puVar3;
    }
    else {
      puVar6 = puVar3;
      puVar3 = (uint64_t *)puVar3[1];
    }
  }
  if ((puVar6 == puVar1) || (auStackX_18[0] < *(uint *)(puVar6 + 4))) {
    puVar6 = (uint64_t *)FUN_1804c0610(puVar1,auStackX_8,auStackX_18[0],puVar6,auStackX_18);
    puVar6 = (uint64_t *)*puVar6;
  }
  lVar4 = puVar6[5];
  uVar13 = uVar11;
  if (0 < *(int *)(lVar4 + 0x298)) {
    do {
      lVar12 = *(int64_t *)(lVar4 + 0x290);
      iVar10 = (int)uVar11;
      uVar9 = iVar10 >> 0x1f & 0xf;
      iVar5 = iVar10 + uVar9;
      fVar16 = *(float *)(uVar13 + 0x48 + lVar12);
      bVar7 = (((byte)iVar5 & 0xf) - (char)uVar9) * '\x04';
      iVar2 = *(int *)(uVar13 + 0x44 + lVar12);
      fVar16 = fVar16 / (fVar16 - *(float *)(uVar13 + 0x4c + lVar12));
      if ((iVar2 == 0x2e) || (iVar2 == 0)) {
        fVar16 = 0.5;
      }
      fVar16 = fVar16 * 15.0;
      iVar8 = (int)fVar16;
      fVar14 = fVar16;
      if ((iVar8 != -0x80000000) && ((float)iVar8 != fVar16)) {
        auVar15._4_4_ = fVar16;
        auVar15._0_4_ = fVar16;
        auVar15._8_8_ = 0;
        uVar9 = movmskps(iVar2,auVar15);
        fVar14 = (float)(int)(iVar8 - (uVar9 & 1));
      }
      lVar12 = (int64_t)(iVar5 >> 4);
      iVar2 = (int)fVar14;
      if (0.5 < fVar16 - fVar14) {
        iVar2 = (int)fVar14 + 1;
      }
      uVar11 = (uint64_t)(iVar10 + 1U);
      *(uint64_t *)(param_2 + lVar12 * 2 + 6) =
           (int64_t)iVar2 << (bVar7 & 0x3f) |
           ~(0xfL << (bVar7 & 0x3f)) & *(uint64_t *)(param_2 + lVar12 * 2 + 6);
      uVar13 = uVar13 + 0xa8;
    } while ((int)(iVar10 + 1U) < *(int *)(lVar4 + 0x298));
  }
  return;
}






// 函数: void FUN_1804bbdcd(void)
void FUN_1804bbdcd(void)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBX;
  int64_t unaff_RDI;
  int64_t lVar6;
  int64_t in_R10;
  int64_t in_R11;
  float fVar7;
  int8_t auVar9 [16];
  float fVar10;
  int32_t uVar11;
  uint64_t in_XMM3_Qa;
  float in_XMM4_Da;
  int8_t auVar8 [16];
  
  do {
    lVar6 = *(int64_t *)(in_R11 + 0x290);
    uVar5 = unaff_EBX >> 0x1f & 0xf;
    iVar2 = unaff_EBX + uVar5;
    fVar10 = *(float *)(in_R10 + 0x48 + lVar6);
    bVar3 = (((byte)iVar2 & 0xf) - (char)uVar5) * '\x04';
    iVar1 = *(int *)(in_R10 + 0x44 + lVar6);
    if ((iVar1 == 0x2e) ||
       (fVar10 = fVar10 / (fVar10 - *(float *)(in_R10 + 0x4c + lVar6)), uVar11 = 0, iVar1 == 0)) {
      fVar10 = (float)in_XMM3_Qa;
      uVar11 = (int)((uint64_t)in_XMM3_Qa >> 0x20);
    }
    fVar10 = fVar10 * in_XMM4_Da;
    auVar9._4_4_ = uVar11;
    auVar9._0_4_ = fVar10;
    iVar4 = (int)fVar10;
    fVar7 = fVar10;
    if ((iVar4 != -0x80000000) && ((float)iVar4 != fVar10)) {
      auVar9._8_4_ = uVar11;
      auVar9._12_4_ = uVar11;
      auVar8._8_8_ = auVar9._8_8_;
      auVar8._4_4_ = fVar10;
      auVar8._0_4_ = fVar10;
      uVar5 = movmskps(iVar1,auVar8);
      fVar7 = (float)(int)(iVar4 - (uVar5 & 1));
    }
    lVar6 = (int64_t)(iVar2 >> 4);
    iVar1 = (int)fVar7;
    if ((float)in_XMM3_Qa < fVar10 - fVar7) {
      iVar1 = (int)fVar7 + 1;
    }
    unaff_EBX = unaff_EBX + 1;
    in_R10 = in_R10 + 0xa8;
    *(uint64_t *)(unaff_RDI + 0x18 + lVar6 * 8) =
         (int64_t)iVar1 << (bVar3 & 0x3f) |
         ~(0xfL << (bVar3 & 0x3f)) & *(uint64_t *)(unaff_RDI + 0x18 + lVar6 * 8);
  } while (unaff_EBX < *(int *)(in_R11 + 0x298));
  return;
}






// 函数: void FUN_1804bbea8(void)
void FUN_1804bbea8(void)

{
  return;
}






// 函数: void FUN_1804bbec0(int64_t param_1,int64_t param_2,int32_t *param_3)
void FUN_1804bbec0(int64_t param_1,int64_t param_2,int32_t *param_3)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint uVar4;
  uint64_t *puVar5;
  int *piVar6;
  uint64_t uVar7;
  int iVar8;
  uint64_t uVar9;
  int iVar10;
  uint64_t *puVar11;
  uint64_t uVar12;
  int64_t lVar13;
  float *pfVar14;
  float fVar15;
  int8_t auStackX_10 [8];
  
  uVar12 = 0;
  *(uint64_t *)(param_2 + 0x540) = 0;
  *(uint *)(param_2 + 8) = param_3[4] & 0x3f;
  *(uint *)(param_2 + 4) = (uint)param_3[4] >> 6 & 0x3f;
  *(uint *)(param_2 + 0x18) = (uint)param_3[4] >> 0xc & 0x3f;
  *(float *)(param_2 + 0x558) = (float)((uint)param_3[4] >> 0x12 & 0x3f) * 0.015873017;
  *(uint *)(param_2 + 0x20) = (uint)param_3[4] >> 0x18 & 0x3f;
  *(float *)(param_2 + 0x54c) =
       (float)((uint)(*(uint64_t *)(param_3 + 4) >> 0x1e) & 0x3f) * 0.015873017;
  *(int32_t *)(param_2 + 0x53c) = *param_3;
  *(float *)(param_2 + 0x550) =
       (float)((uint)((uint64_t)*(uint64_t *)(param_3 + 4) >> 0x2a) & 0x3f) * 0.015873017;
  puVar11 = (uint64_t *)(param_1 + 0xb8);
  *(float *)(param_2 + 0x548) = (float)(*(ushort *)((int64_t)param_3 + 0x16) & 0x3f) * 0.015873017;
  uVar4 = func_0x0001804bb950(param_2);
  puVar3 = (uint64_t *)puVar11[2];
  puVar5 = puVar11;
  while (puVar2 = puVar3, puVar2 != (uint64_t *)0x0) {
    if (*(uint *)(puVar2 + 4) < uVar4) {
      puVar3 = (uint64_t *)*puVar2;
    }
    else {
      puVar3 = (uint64_t *)puVar2[1];
      puVar5 = puVar2;
    }
  }
  if ((puVar5 == puVar11) || (uVar4 < *(uint *)(puVar5 + 4))) {
    puVar5 = (uint64_t *)FUN_1804c0610(puVar11,auStackX_10);
    puVar5 = (uint64_t *)*puVar5;
  }
  lVar1 = puVar5[5];
  iVar8 = *(int *)(lVar1 + 0x298);
  lVar13 = (int64_t)iVar8;
  if (0 < iVar8) {
    piVar6 = (int *)(*(int64_t *)(lVar1 + 0x290) + 0x44);
    uVar7 = uVar12;
    uVar9 = uVar12;
    do {
      iVar10 = (int)uVar9;
      if (*piVar6 == 0x3c) goto LAB_1804bc03e;
      uVar9 = (uint64_t)(iVar10 + 1);
      uVar7 = uVar7 + 1;
      piVar6 = piVar6 + 0x2a;
    } while ((int64_t)uVar7 < lVar13);
  }
  iVar10 = -1;
LAB_1804bc03e:
  if (0 < iVar8) {
    piVar6 = (int *)(*(int64_t *)(lVar1 + 0x290) + 0x44);
    uVar7 = uVar12;
    uVar9 = uVar12;
    do {
      iVar8 = (int)uVar9;
      if (*piVar6 == 0x3d) goto LAB_1804bc06e;
      uVar9 = (uint64_t)(iVar8 + 1);
      uVar7 = uVar7 + 1;
      piVar6 = piVar6 + 0x2a;
    } while ((int64_t)uVar7 < lVar13);
  }
  iVar8 = -1;
LAB_1804bc06e:
  pfVar14 = (float *)(param_2 + 0x3c);
  uVar7 = uVar12;
  do {
    if ((int64_t)uVar12 < lVar13) {
      if (uVar12 == (int64_t)iVar10) {
        *(int32_t *)(param_2 + 0x540) = param_3[1];
        *(int32_t *)(param_2 + 0x3c + (int64_t)iVar10 * 4) = param_3[1];
      }
      else if (uVar12 == (int64_t)iVar8) {
        *(int32_t *)(param_2 + 0x544) = param_3[2];
        *(int32_t *)(param_2 + 0x3c + (int64_t)iVar8 * 4) = param_3[2];
      }
      else {
        *pfVar14 = (float)((uint)(*(uint64_t *)(param_3 + (uVar7 >> 4) * 2 + 6) >>
                                 (sbyte)(((uint)uVar7 & 0xf) << 2)) & 0xf) * 0.06666667;
      }
    }
    else {
      *pfVar14 = 0.0;
    }
    uVar4 = (uint)uVar7 + 1;
    uVar7 = (uint64_t)uVar4;
    uVar12 = uVar12 + 1;
    pfVar14 = pfVar14 + 1;
  } while ((int)uVar4 < 0x140);
  *(uint *)(param_2 + 0x28) = param_3[0xe] & 0x7fffffff;
  *(uint *)(param_2 + 0x2c) = (uint)((uint64_t)*(uint64_t *)(param_3 + 0xe) >> 0x20) & 0x7fffffff
  ;
  *(uint *)(param_2 + 0x30) = param_3[0x10] & 0x7fffffff;
  *(uint *)(param_2 + 0x34) =
       (uint)((uint64_t)*(uint64_t *)(param_3 + 0x10) >> 0x20) & 0x7fffffff;
  *(uint *)(param_2 + 0x24) = param_3[0x12] & 0x3f;
  *(uint *)(param_2 + 0x1c) = (uint)param_3[0x12] >> 6 & 0x3f;
  *(uint *)(param_2 + 0xc) = (uint)param_3[0x12] >> 0xc & 0x3f;
  *(byte *)(param_2 + 0x564) = (byte)((uint)param_3[0x12] >> 0x12) & 1;
  fVar15 = (float)((uint)param_3[0x12] >> 0x13 & 0x3f) * 0.015873017;
  if (0.0 <= fVar15) {
    if (1.0 <= fVar15) {
      fVar15 = 1.0;
    }
  }
  else {
    fVar15 = 0.0;
  }
  *(float *)(param_2 + 0x55c) = fVar15;
  fVar15 = (float)((uint)param_3[0x12] >> 0x19 & 0x3f) * 0.015873017;
  if (0.0 <= fVar15) {
    if (1.0 <= fVar15) {
      fVar15 = 1.0;
    }
    *(float *)(param_2 + 0x560) = fVar15;
  }
  else {
    *(int32_t *)(param_2 + 0x560) = 0;
  }
  return;
}






// 函数: void FUN_1804bc1f0(int64_t param_1,int64_t param_2,char param_3)
void FUN_1804bc1f0(int64_t param_1,int64_t param_2,char param_3)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint uVar4;
  uint64_t *puVar5;
  int iVar6;
  int64_t lVar7;
  int32_t *puVar8;
  uint64_t *puVar9;
  int32_t uVar10;
  int8_t auStackX_8 [8];
  
  puVar9 = (uint64_t *)(param_1 + 0xb8);
  uVar4 = func_0x0001804bb950(param_2);
  puVar3 = (uint64_t *)puVar9[2];
  puVar5 = puVar9;
  while (puVar2 = puVar3, puVar2 != (uint64_t *)0x0) {
    if (*(uint *)(puVar2 + 4) < uVar4) {
      puVar3 = (uint64_t *)*puVar2;
    }
    else {
      puVar3 = (uint64_t *)puVar2[1];
      puVar5 = puVar2;
    }
  }
  if ((puVar5 == puVar9) || (uVar4 < *(uint *)(puVar5 + 4))) {
    puVar5 = (uint64_t *)FUN_1804c0610(puVar9,auStackX_8);
    puVar5 = (uint64_t *)*puVar5;
  }
  lVar1 = puVar5[5];
  iVar6 = 0;
  if (0 < *(int *)(lVar1 + 0x298)) {
    puVar8 = (int32_t *)(param_2 + 0x3c);
    lVar7 = 0;
    do {
      if (*(char *)(*(int64_t *)(lVar1 + 0x290) + 0x50 + lVar7) != '\0') {
        if (param_3 == '\0') {
          uVar10 = 0;
        }
        else {
          uVar10 = 0x3f800000;
        }
        *puVar8 = uVar10;
      }
      iVar6 = iVar6 + 1;
      puVar8 = puVar8 + 1;
      lVar7 = lVar7 + 0xa8;
    } while (iVar6 < *(int *)(lVar1 + 0x298));
  }
  return;
}



uint64_t
FUN_1804bc2d0(int64_t param_1,int32_t param_2,int32_t param_3,int32_t param_4,int param_5)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint uVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int8_t auStack_18 [24];
  
  puVar5 = (uint64_t *)(param_1 + 0xb8);
  uVar3 = func_0x0001804bb9d0(param_2,param_3,param_4);
  puVar2 = (uint64_t *)puVar5[2];
  puVar4 = puVar5;
  while (puVar1 = puVar2, puVar1 != (uint64_t *)0x0) {
    if (*(uint *)(puVar1 + 4) < uVar3) {
      puVar2 = (uint64_t *)*puVar1;
    }
    else {
      puVar2 = (uint64_t *)puVar1[1];
      puVar4 = puVar1;
    }
  }
  if ((puVar4 == puVar5) || (uVar3 < *(uint *)(puVar4 + 4))) {
    puVar4 = (uint64_t *)FUN_1804c0610(puVar5,auStack_18);
    puVar4 = (uint64_t *)*puVar4;
  }
  if (puVar4[5] != 0) {
    return *(uint64_t *)(puVar4[5] + 0x2a0 + (int64_t)param_5 * 8);
  }
  SystemCore_ResourceManager0(&unknown_var_7688_ptr);
  return 0;
}



uint64_t FUN_1804bc380(int64_t param_1,int32_t param_2,int32_t param_3,int32_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint uVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int8_t auStack_18 [24];
  
  puVar5 = (uint64_t *)(param_1 + 0xb8);
  uVar3 = func_0x0001804bb9d0(param_2,param_3,param_4);
  puVar2 = (uint64_t *)puVar5[2];
  puVar4 = puVar5;
  while (puVar1 = puVar2, puVar1 != (uint64_t *)0x0) {
    if (*(uint *)(puVar1 + 4) < uVar3) {
      puVar2 = (uint64_t *)*puVar1;
    }
    else {
      puVar2 = (uint64_t *)puVar1[1];
      puVar4 = puVar1;
    }
  }
  if ((puVar4 == puVar5) || (uVar3 < *(uint *)(puVar4 + 4))) {
    puVar4 = (uint64_t *)FUN_1804c0610(puVar5,auStack_18);
    puVar4 = (uint64_t *)*puVar4;
  }
  if (puVar4[5] != 0) {
    return *(uint64_t *)(puVar4[5] + 0x2b8);
  }
  SystemCore_ResourceManager0(&unknown_var_7656_ptr);
  return 0;
}



uint64_t
FUN_1804bc420(int64_t param_1,int32_t param_2,int32_t param_3,int param_4,int32_t param_5)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint uVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int8_t auStack_18 [16];
  
  puVar6 = (uint64_t *)(param_1 + 0xb8);
  uVar4 = func_0x0001804bb9d0(param_2,param_3,param_5);
  puVar3 = (uint64_t *)puVar6[2];
  puVar5 = puVar6;
  while (puVar2 = puVar3, puVar2 != (uint64_t *)0x0) {
    if (*(uint *)(puVar2 + 4) < uVar4) {
      puVar3 = (uint64_t *)*puVar2;
    }
    else {
      puVar3 = (uint64_t *)puVar2[1];
      puVar5 = puVar2;
    }
  }
  if ((puVar5 == puVar6) || (uVar4 < *(uint *)(puVar5 + 4))) {
    puVar5 = (uint64_t *)FUN_1804c0610(puVar6,auStack_18);
    puVar5 = (uint64_t *)*puVar5;
  }
  lVar1 = puVar5[5];
  if (lVar1 == 0) {
    SystemCore_ResourceManager0(&unknown_var_7728_ptr);
    return 0;
  }
  if (param_4 == 2) {
    return *(uint64_t *)(lVar1 + 0x2c8);
  }
  if (param_4 != 1) {
    SystemCore_ResourceManager0(&unknown_var_7768_ptr);
    return 0;
  }
  return *(uint64_t *)(lVar1 + 0x2c0);
}



int64_t FUN_1804bc4f0(int64_t param_1,int32_t param_2,int32_t param_3,int32_t param_4)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint uVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int8_t auStack_18 [24];
  
  puVar6 = (uint64_t *)(param_1 + 0xb8);
  uVar4 = func_0x0001804bb9d0(param_2,param_3,param_4);
  puVar3 = (uint64_t *)puVar6[2];
  puVar5 = puVar6;
  while (puVar2 = puVar3, puVar2 != (uint64_t *)0x0) {
    if (*(uint *)(puVar2 + 4) < uVar4) {
      puVar3 = (uint64_t *)*puVar2;
    }
    else {
      puVar3 = (uint64_t *)puVar2[1];
      puVar5 = puVar2;
    }
  }
  if ((puVar5 == puVar6) || (uVar4 < *(uint *)(puVar5 + 4))) {
    puVar5 = (uint64_t *)FUN_1804c0610(puVar6,auStack_18);
    puVar5 = (uint64_t *)*puVar5;
  }
  lVar1 = puVar5[5];
  if (lVar1 != 0) {
    return *(int64_t *)(lVar1 + 0x2d0);
  }
  return lVar1;
}






