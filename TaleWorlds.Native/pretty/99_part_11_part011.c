#include "TaleWorlds.Native.Split.h"

// 99_part_11_part011.c - 11 个函数

// 函数: void FUN_1806e25b0(int64_t param_1,uint param_2,float *param_3)
void FUN_1806e25b0(int64_t param_1,uint param_2,float *param_3)

{
  int32_t *puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t *puVar7;
  int64_t lVar8;
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
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  uint64_t uStack_d8;
  int8_t auStack_d0 [8];
  int8_t auStack_c8 [16];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  
  fStack_98 = *param_3;
  fStack_90 = param_3[2];
  fStack_8c = param_3[3];
  fStack_94 = param_3[1];
  fVar9 = param_3[6];
  fVar10 = param_3[4];
  fVar12 = param_3[5];
  lVar8 = (int64_t)(int)param_2 * 0x1c;
  fVar11 = 1.0 / SQRT(fStack_98 * fStack_98 + fStack_94 * fStack_94 + fStack_90 * fStack_90 +
                      fStack_8c * fStack_8c);
  fStack_98 = fStack_98 * fVar11;
  fStack_90 = fVar11 * fStack_90;
  *(float *)(lVar8 + 0x28 + param_1) = fStack_98;
  fStack_94 = fStack_94 * fVar11;
  *(float *)(lVar8 + 0x30 + param_1) = fStack_90;
  fStack_8c = fStack_8c * fVar11;
  *(float *)(lVar8 + 0x2c + param_1) = fStack_94;
  *(float *)(lVar8 + 0x34 + param_1) = fStack_8c;
  *(float *)(lVar8 + 0x38 + param_1) = fVar10;
  *(float *)(lVar8 + 0x3c + param_1) = fVar12;
  *(float *)(lVar8 + 0x40 + param_1) = fVar9;
  fStack_88 = fVar10;
  fStack_84 = fVar12;
  fStack_80 = fVar9;
  (**(code **)(**(int64_t **)(param_1 + 0x60) + 0x30))
            (*(int64_t **)(param_1 + 0x60),&uStack_d8,auStack_d0);
  FUN_1806dfd60(param_1,&fStack_b8,(&uStack_d8)[param_2]);
  fStack_e8 = -fStack_b8;
  fVar18 = (fVar10 - fStack_a8) + (fVar10 - fStack_a8);
  fStack_e4 = -fStack_b4;
  fStack_e0 = -fStack_b0;
  fVar20 = (fVar12 - fStack_a4) + (fVar12 - fStack_a4);
  fVar17 = (fVar9 - fStack_a0) + (fVar9 - fStack_a0);
  fStack_dc = fStack_ac;
  fVar14 = fStack_ac * fStack_ac - 0.5;
  fVar16 = fVar17 * fStack_e4;
  fVar15 = fVar18 * fStack_e0;
  fVar9 = fVar20 * fStack_e0;
  fVar13 = fVar20 * fStack_e4 + fVar18 * fStack_e8 + fVar17 * fStack_e0;
  fVar19 = fVar18 * fStack_e4;
  fVar12 = fVar13 * fStack_e8;
  fVar10 = fVar17 * fStack_e8;
  fVar21 = fVar20 * fStack_e8;
  fVar11 = fVar13 * fStack_e4;
  fVar13 = fVar13 * fStack_e0;
  puVar7 = (int32_t *)SystemCore_Initializer(&fStack_e8,auStack_c8,&fStack_98);
  plVar2 = *(int64_t **)(param_1 + 0x60);
  uVar4 = puVar7[1];
  uVar5 = puVar7[2];
  uVar6 = puVar7[3];
  lVar3 = *(int64_t *)(param_1 + 0x68);
  puVar1 = (int32_t *)(lVar3 + 0x10 + lVar8);
  *puVar1 = *puVar7;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  *(float *)(lVar3 + 0x20 + lVar8) = (fVar16 - fVar9) * fStack_ac + fVar14 * fVar18 + fVar12;
  *(float *)(lVar3 + 0x24 + lVar8) = (fVar15 - fVar10) * fStack_ac + fVar14 * fVar20 + fVar11;
  *(float *)(lVar3 + 0x28 + lVar8) = (fVar21 - fVar19) * fStack_ac + fVar14 * fVar17 + fVar13;
                    // WARNING: Could not recover jumptable at 0x0001806e2876. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar2 + 0x40))();
  return;
}






// 函数: void FUN_1806e2880(int64_t param_1,int64_t param_2,float param_3,float *param_4)
void FUN_1806e2880(int64_t param_1,int64_t param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar6 = *(float *)(param_2 + 0xc);
  fVar9 = 0.0;
  fVar1 = *(float *)(param_2 + 0x14);
  if ((0.0 < fVar6) || (0.0 < *(float *)(param_2 + 8))) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = *(float *)(param_2 + 0x10);
  }
  if (fVar1 < fVar7 + param_3) {
    pfVar4 = *(float **)(param_1 + 8);
    *(float **)(param_1 + 8) = pfVar4 + 0x14;
    *(int16_t *)((int64_t)pfVar4 + 0x4e) = 0;
    *pfVar4 = *param_4;
    pfVar4[1] = param_4[1];
    pfVar4[2] = param_4[2];
    fVar6 = *(float *)(param_1 + 0x14);
    fVar7 = *(float *)(param_1 + 0x18);
    fVar8 = *param_4;
    fVar10 = *(float *)(param_1 + 0x10);
    fVar2 = *param_4;
    fVar3 = param_4[2];
    fVar5 = param_4[1];
    pfVar4[4] = fVar6 * param_4[2] - fVar7 * param_4[1];
    pfVar4[5] = fVar7 * fVar8 - fVar10 * fVar3;
    pfVar4[6] = fVar10 * fVar5 - fVar6 * fVar2;
    pfVar4[8] = *param_4;
    pfVar4[9] = param_4[1];
    pfVar4[10] = param_4[2];
    fVar6 = *(float *)(param_1 + 0x20);
    fVar7 = *(float *)(param_1 + 0x24);
    fVar8 = *(float *)(param_1 + 0x1c);
    fVar10 = *param_4;
    fVar2 = *param_4;
    fVar3 = param_4[1];
    fVar5 = fVar8 * param_4[2];
    pfVar4[0xc] = fVar6 * param_4[2] - fVar7 * param_4[1];
    pfVar4[0xe] = fVar8 * fVar3 - fVar6 * fVar2;
    pfVar4[0xd] = fVar7 * fVar10 - fVar5;
    pfVar4[3] = fVar1 - param_3;
    func_0x0001806dedc0(fVar5,pfVar4,param_2);
    fVar6 = *(float *)(param_2 + 0xc);
  }
  fVar7 = -*param_4;
  fVar8 = -param_4[1];
  fVar1 = *(float *)(param_2 + 0x18);
  fVar10 = -param_4[2];
  if ((fVar6 <= 0.0) && (*(float *)(param_2 + 8) <= 0.0)) {
    fVar9 = *(float *)(param_2 + 0x10);
  }
  if (-fVar1 < fVar9 + -param_3) {
    pfVar4 = *(float **)(param_1 + 8);
    *(float **)(param_1 + 8) = pfVar4 + 0x14;
    *(int16_t *)((int64_t)pfVar4 + 0x4e) = 0;
    *pfVar4 = fVar7;
    pfVar4[1] = fVar8;
    pfVar4[2] = fVar10;
    fVar6 = *(float *)(param_1 + 0x14);
    fVar9 = *(float *)(param_1 + 0x18);
    fVar2 = *(float *)(param_1 + 0x10);
    pfVar4[4] = fVar6 * fVar10 - fVar9 * fVar8;
    pfVar4[6] = fVar2 * fVar8 - fVar6 * fVar7;
    pfVar4[5] = fVar9 * fVar7 - fVar2 * fVar10;
    pfVar4[8] = fVar7;
    pfVar4[9] = fVar8;
    pfVar4[10] = fVar10;
    fVar6 = *(float *)(param_1 + 0x20);
    fVar9 = *(float *)(param_1 + 0x24);
    fVar2 = *(float *)(param_1 + 0x1c);
    pfVar4[0xc] = fVar6 * fVar10 - fVar9 * fVar8;
    pfVar4[0xe] = fVar2 * fVar8 - fVar6 * fVar7;
    pfVar4[0xd] = fVar9 * fVar7 - fVar2 * fVar10;
    pfVar4[3] = -fVar1 - -param_3;
    func_0x0001806dedc0(param_1,pfVar4,param_2);
  }
  return;
}






// 函数: void FUN_1806e2b50(int64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4,
void FUN_1806e2b50(int64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4,
                  char param_5,char param_6)

{
  float fVar1;
  float fVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  
  SystemCore_Initializer(param_4,&fStack_c8);
  lVar4 = param_2 + 0x10c;
  if (param_5 != '\0') {
    fVar7 = fStack_c4 * 2.0;
    fVar6 = fStack_bc * 2.0;
    fVar8 = fStack_c8 * fVar7 - fStack_c0 * fVar6;
    fVar11 = fStack_c0 * fVar7 + fStack_c8 * fVar6;
    fVar10 = (fStack_c4 * fVar7 + fStack_bc * fVar6) - 1.0;
    fVar5 = (float)atan2f(*(int32_t *)(param_3 + 4),*(float *)(param_3 + 0xc) + 1.0);
    fVar9 = *(float *)(param_2 + 0x11c);
    fVar1 = *(float *)(param_2 + 0x120);
    fVar5 = fVar5 * 4.0;
    fVar2 = *(float *)(param_2 + 0x124);
    if ((0.0 < *(float *)(param_2 + 0x118)) || (0.0 < *(float *)(param_2 + 0x114))) {
      fVar9 = 0.0;
    }
    if (fVar5 < fVar1 + fVar9) {
      puVar3 = *(uint64_t **)(param_1 + 8);
      fVar6 = fStack_c0 * fVar6 - fStack_c8 * fVar7;
      *(uint64_t **)(param_1 + 8) = puVar3 + 10;
      *(int16_t *)((int64_t)puVar3 + 0x4e) = 0;
      *puVar3 = 0;
      *(int32_t *)(puVar3 + 1) = 0;
      *(float *)(puVar3 + 3) = -fVar11;
      *(float *)(puVar3 + 2) = fVar6;
      *(float *)((int64_t)puVar3 + 0x14) = -fVar10;
      puVar3[4] = 0;
      *(int32_t *)(puVar3 + 5) = 0;
      *(float *)(puVar3 + 7) = -fVar11;
      *(float *)(puVar3 + 6) = fVar6;
      *(float *)((int64_t)puVar3 + 0x34) = -fVar10;
      *(ushort *)((int64_t)puVar3 + 0x4c) = *(ushort *)((int64_t)puVar3 + 0x4c) | 0x40;
      *(float *)((int64_t)puVar3 + 0xc) = fVar5 - fVar1;
      func_0x0001806dedc0(param_1,puVar3,lVar4);
    }
    if (fVar2 - fVar9 < fVar5) {
      puVar3 = *(uint64_t **)(param_1 + 8);
      *(uint64_t **)(param_1 + 8) = puVar3 + 10;
      *(int16_t *)((int64_t)puVar3 + 0x4e) = 0;
      *puVar3 = 0;
      *(int32_t *)(puVar3 + 1) = 0;
      *(float *)(puVar3 + 2) = fVar8;
      *(float *)((int64_t)puVar3 + 0x14) = fVar10;
      *(float *)(puVar3 + 3) = fVar11;
      puVar3[4] = 0;
      *(int32_t *)(puVar3 + 5) = 0;
      *(float *)(puVar3 + 6) = fVar8;
      *(float *)((int64_t)puVar3 + 0x34) = fVar10;
      *(float *)(puVar3 + 7) = fVar11;
      *(ushort *)((int64_t)puVar3 + 0x4c) = *(ushort *)((int64_t)puVar3 + 0x4c) | 0x40;
      *(float *)((int64_t)puVar3 + 0xc) = fVar2 - fVar5;
      func_0x0001806dedc0(param_1,puVar3,lVar4);
    }
  }
  if (param_6 != '\0') {
    fVar6 = fStack_bc * 2.0;
    fVar7 = fStack_c0 * 2.0;
    fVar10 = fStack_c8 * fVar7 + fStack_c4 * fVar6;
    fVar8 = (fStack_c0 * fVar7 + fStack_bc * fVar6) - 1.0;
    fVar11 = fStack_c4 * fVar7 - fStack_c8 * fVar6;
    fVar5 = (float)atan2f(*(int32_t *)(param_3 + 8),*(float *)(param_3 + 0xc) + 1.0);
    fVar9 = *(float *)(param_2 + 0x11c);
    fVar1 = *(float *)(param_2 + 0x128);
    fVar5 = fVar5 * 4.0;
    fVar2 = *(float *)(param_2 + 300);
    if ((0.0 < *(float *)(param_2 + 0x118)) || (0.0 < *(float *)(param_2 + 0x114))) {
      fVar9 = 0.0;
    }
    if (fVar5 < fVar1 + fVar9) {
      puVar3 = *(uint64_t **)(param_1 + 8);
      fVar6 = fStack_c8 * fVar6 - fStack_c4 * fVar7;
      *(uint64_t **)(param_1 + 8) = puVar3 + 10;
      *(int16_t *)((int64_t)puVar3 + 0x4e) = 0;
      *puVar3 = 0;
      *(int32_t *)(puVar3 + 1) = 0;
      *(float *)(puVar3 + 3) = -fVar8;
      *(float *)(puVar3 + 2) = -fVar10;
      *(float *)((int64_t)puVar3 + 0x14) = fVar6;
      puVar3[4] = 0;
      *(int32_t *)(puVar3 + 5) = 0;
      *(float *)(puVar3 + 7) = -fVar8;
      *(float *)(puVar3 + 6) = -fVar10;
      *(float *)((int64_t)puVar3 + 0x34) = fVar6;
      *(ushort *)((int64_t)puVar3 + 0x4c) = *(ushort *)((int64_t)puVar3 + 0x4c) | 0x40;
      *(float *)((int64_t)puVar3 + 0xc) = fVar5 - fVar1;
      func_0x0001806dedc0(param_1,puVar3,lVar4);
    }
    if (fVar2 - fVar9 < fVar5) {
      puVar3 = *(uint64_t **)(param_1 + 8);
      *(uint64_t **)(param_1 + 8) = puVar3 + 10;
      *(int16_t *)((int64_t)puVar3 + 0x4e) = 0;
      *puVar3 = 0;
      *(int32_t *)(puVar3 + 1) = 0;
      *(float *)(puVar3 + 2) = fVar10;
      *(float *)((int64_t)puVar3 + 0x14) = fVar11;
      *(float *)(puVar3 + 3) = fVar8;
      puVar3[4] = 0;
      *(int32_t *)(puVar3 + 5) = 0;
      *(float *)(puVar3 + 6) = fVar10;
      *(float *)((int64_t)puVar3 + 0x34) = fVar11;
      *(float *)(puVar3 + 7) = fVar8;
      *(ushort *)((int64_t)puVar3 + 0x4c) = *(ushort *)((int64_t)puVar3 + 0x4c) | 0x40;
      *(float *)((int64_t)puVar3 + 0xc) = fVar2 - fVar5;
      func_0x0001806dedc0(param_1,puVar3,lVar4);
    }
  }
  return;
}



float * FUN_1806e2f90(float *param_1,float *param_2,float param_3,uint64_t param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_2[3];
  fVar2 = 0.0;
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  if (fVar1 < 0.0) {
    fVar3 = -fVar3;
    fVar4 = -fVar4;
    fVar5 = -fVar5;
    fVar1 = -fVar1;
  }
  *(bool *)param_4 = fVar1 < param_3;
  if (fVar1 >= param_3) {
    *param_1 = fVar3;
    param_1[1] = fVar4;
    param_1[2] = fVar5;
    param_1[3] = fVar1;
    return param_1;
  }
  fVar1 = SQRT(1.0 - param_3 * param_3);
  fVar6 = fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
    fVar5 = 0.0;
  }
  else {
    fVar6 = 1.0 / SQRT(fVar6);
    fVar2 = fVar6 * fVar4;
    fVar5 = fVar6 * fVar5;
    fVar6 = fVar6 * fVar3;
  }
  param_1[2] = fVar1 * fVar5;
  param_1[3] = param_3;
  *param_1 = fVar1 * fVar6;
  param_1[1] = fVar1 * fVar2;
  return param_1;
}






// 函数: void FUN_1806e30c0(int64_t *param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
void FUN_1806e30c0(int64_t *param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
                  float param_5,uint param_6)

{
  int64_t lVar1;
  
  lVar1 = *param_1;
  atan2f(param_4,param_5 + 1.0);
                    // WARNING: Could not recover jumptable at 0x0001806e3148. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(lVar1 + 0x18))(param_1,param_3,param_6 ^ 0x80000000);
  return;
}






// 函数: void FUN_1806e3150(int64_t *param_1,float *param_2,float *param_3,int64_t param_4,float param_5,
void FUN_1806e3150(int64_t *param_1,float *param_2,float *param_3,int64_t param_4,float param_5,
                  float *param_6,int64_t param_7,float param_8,float *param_9,int64_t param_10,
                  float param_11)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int32_t uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  
  fVar6 = 0.0;
  if ((0.0 < *(float *)(param_4 + 0xc)) || (0.0 < *(float *)(param_4 + 8))) {
    fVar11 = 0.0;
  }
  else {
    fVar11 = *(float *)(param_4 + 0x10);
  }
  fVar1 = *(float *)(param_4 + 0x18);
  if ((param_5 < fVar1 + fVar11) || (*(float *)(param_4 + 0x14) - fVar11 < param_5)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((0.0 < *(float *)(param_7 + 0xc)) || (0.0 < *(float *)(param_7 + 8))) {
    fVar11 = 0.0;
  }
  else {
    fVar11 = *(float *)(param_7 + 0x10);
  }
  fVar12 = *(float *)(param_7 + 0x18);
  if ((param_8 < fVar12 + fVar11) || (*(float *)(param_7 + 0x14) - fVar11 < param_8)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((*(float *)(param_10 + 0xc) <= 0.0) && (*(float *)(param_10 + 8) <= 0.0)) {
    fVar6 = *(float *)(param_10 + 0x10);
  }
  fStack_d0 = *(float *)(param_10 + 0x18);
  if ((param_11 < fStack_d0 + fVar6) || (*(float *)(param_10 + 0x14) - fVar6 < param_11)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (((bVar3) || (bVar4)) || (uVar5 = 0xffffff, bVar2)) {
    uVar5 = 0xff0000;
  }
  fStack_100 = *(float *)(param_7 + 0x14);
  fVar6 = *(float *)(param_4 + 0x14);
  fVar7 = *param_6 * fStack_100;
  fVar9 = param_6[1] * fStack_100;
  fStack_100 = param_6[2] * fStack_100;
  fVar11 = *(float *)(param_10 + 0x14);
  fStack_128 = *param_6 * fVar12;
  fVar8 = param_9[2] * fVar11;
  fVar10 = param_9[1] * fVar11;
  fStack_d4 = param_9[1] * fStack_d0;
  fStack_124 = param_6[1] * fVar12;
  fVar11 = *param_9 * fVar11;
  fVar13 = *param_9 * fStack_d0;
  fStack_d8 = *param_3 * fVar1 + *param_2;
  fVar12 = param_6[2] * fVar12;
  fStack_108 = *param_3 * fVar6 + *param_2;
  fStack_148 = fStack_d8 + fStack_128;
  fStack_d0 = param_9[2] * fStack_d0;
  fStack_128 = fStack_108 + fStack_128;
  fStack_138 = fStack_148 + fVar13;
  fStack_e4 = param_3[1] * fVar1 + param_2[1];
  fStack_e0 = param_3[2] * *(float *)(param_4 + 0x18) + param_2[2];
  fStack_144 = fStack_e4 + fStack_124;
  fStack_140 = fStack_e0 + fVar12;
  fStack_134 = fStack_144 + fStack_d4;
  fStack_130 = fStack_140 + fStack_d0;
  fStack_118 = fStack_128 + fVar13;
  fStack_104 = param_3[1] * fVar6 + param_2[1];
  fStack_124 = fStack_104 + fStack_124;
  fStack_114 = fStack_124 + fStack_d4;
  fStack_120 = param_3[2] * fVar6 + param_2[2];
  fStack_124 = fStack_124 + fVar10;
  fStack_e4 = fStack_e4 + fVar9;
  fStack_e0 = fStack_e0 + fStack_100;
  fStack_100 = fStack_120 + fStack_100;
  fStack_120 = fStack_120 + fVar12;
  fStack_144 = fVar10 + fStack_144;
  fStack_128 = fStack_128 + fVar11;
  fStack_110 = fStack_120 + fStack_d0;
  fStack_120 = fStack_120 + fVar8;
  fStack_108 = fStack_108 + fVar7;
  fStack_f8 = fStack_108 + fVar13;
  fStack_104 = fStack_104 + fVar9;
  fStack_f4 = fStack_104 + fStack_d4;
  fStack_f0 = fStack_100 + fStack_d0;
  fStack_d8 = fStack_d8 + fVar7;
  fStack_e8 = fStack_d8 + fVar11;
  fStack_d8 = fStack_d8 + fVar13;
  fStack_d4 = fStack_e4 + fStack_d4;
  fStack_e4 = fStack_e4 + fVar10;
  fStack_d0 = fStack_e0 + fStack_d0;
  fStack_e0 = fStack_e0 + fVar8;
  fStack_148 = fVar11 + fStack_148;
  fStack_140 = fVar8 + fStack_140;
  fStack_108 = fStack_108 + fVar11;
  fStack_104 = fStack_104 + fVar10;
  fStack_100 = fStack_100 + fVar8;
  (**(code **)(*param_1 + 0x30))(param_1,&fStack_138,&fStack_118,uVar5);
  (**(code **)(*param_1 + 0x30))(param_1,&fStack_118,&fStack_f8,uVar5);
  (**(code **)(*param_1 + 0x30))(param_1,&fStack_f8,&fStack_d8,uVar5);
  (**(code **)(*param_1 + 0x30))(param_1,&fStack_d8,&fStack_138,uVar5);
  (**(code **)(*param_1 + 0x30))(param_1,&fStack_148,&fStack_128,uVar5);
  (**(code **)(*param_1 + 0x30))(param_1,&fStack_128,&fStack_108,uVar5);
  (**(code **)(*param_1 + 0x30))(param_1,&fStack_108,&fStack_e8,uVar5);
  (**(code **)(*param_1 + 0x30))(param_1,&fStack_e8,&fStack_148,uVar5);
  (**(code **)(*param_1 + 0x30))(param_1,&fStack_138,&fStack_148,uVar5);
  (**(code **)(*param_1 + 0x30))(param_1,&fStack_118,&fStack_128,uVar5);
  (**(code **)(*param_1 + 0x30))(param_1,&fStack_f8,&fStack_108,uVar5);
  (**(code **)(*param_1 + 0x30))(param_1,&fStack_d8,&fStack_e8,uVar5);
  return;
}






// 函数: void FUN_1806e3720(int64_t *param_1,int64_t param_2,uint64_t param_3,float param_4,float param_5
void FUN_1806e3720(int64_t *param_1,int64_t param_2,uint64_t param_3,float param_4,float param_5
                  )

{
  float fVar1;
  float fVar2;
  
  if (param_4 <= -1.0) {
    param_4 = -1.0;
  }
  if (1.0 <= param_4) {
    param_4 = 1.0;
  }
  fVar1 = (float)asinf(param_4);
  fVar2 = *(float *)(param_2 + 0x100);
  if ((0.0 < *(float *)(param_2 + 0xfc)) || (0.0 < *(float *)(param_2 + 0xf8))) {
    fVar2 = 0.0;
  }
                    // WARNING: Could not recover jumptable at 0x0001806e37b7. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x28))
            (param_1,param_3,param_5,param_5 - fVar2 < fVar1 || fVar1 < fVar2 - param_5);
  return;
}






// 函数: void FUN_1806e37c0(int64_t *param_1,float *param_2,float *param_3,int64_t param_4,float param_5)
void FUN_1806e37c0(int64_t *param_1,float *param_2,float *param_3,int64_t param_4,float param_5)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  uint64_t uVar4;
  float fVar5;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  
  fVar5 = 0.0;
  if ((*(float *)(param_4 + 0xc) <= 0.0) && (*(float *)(param_4 + 8) <= 0.0)) {
    fVar5 = *(float *)(param_4 + 0x10);
  }
  fVar1 = *(float *)(param_4 + 0x18);
  fVar2 = *(float *)(param_4 + 0x14);
  if ((param_5 < fVar1 + fVar5) || (fVar2 - fVar5 < param_5)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  fStack_58 = *param_3 * fVar1 + *param_2;
  fStack_54 = param_3[1] * fVar1 + param_2[1];
  fStack_68 = *param_3 * fVar2 + *param_2;
  fStack_64 = param_3[1] * fVar2 + param_2[1];
  fStack_50 = param_3[2] * fVar1 + param_2[2];
  fStack_60 = param_3[2] * fVar2 + param_2[2];
  uVar4 = 0xffffff;
  if (bVar3) {
    uVar4 = 0xff0000;
  }
  (**(code **)(*param_1 + 0x30))(param_1,&fStack_58,&fStack_68,uVar4);
  return;
}






// 函数: void FUN_1806e38f0(int64_t *param_1,float *param_2,float *param_3,int64_t param_4,float param_5,
void FUN_1806e38f0(int64_t *param_1,float *param_2,float *param_3,int64_t param_4,float param_5,
                  float *param_6,int64_t param_7,float param_8)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  int32_t uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  
  fVar5 = 0.0;
  if ((0.0 < *(float *)(param_4 + 0xc)) || (0.0 < *(float *)(param_4 + 8))) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = *(float *)(param_4 + 0x10);
  }
  fVar1 = *(float *)(param_4 + 0x18);
  if ((param_5 < fVar1 + fVar6) || (*(float *)(param_4 + 0x14) - fVar6 < param_5)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((*(float *)(param_7 + 0xc) <= 0.0) && (*(float *)(param_7 + 8) <= 0.0)) {
    fVar5 = *(float *)(param_7 + 0x10);
  }
  fStack_e0 = *(float *)(param_7 + 0x18);
  if ((param_8 < fStack_e0 + fVar5) || (*(float *)(param_7 + 0x14) - fVar5 < param_8)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((bVar3) || (uVar4 = 0xffffff, bVar2)) {
    uVar4 = 0xff0000;
  }
  fVar5 = *(float *)(param_7 + 0x14);
  fVar6 = *(float *)(param_4 + 0x14);
  fStack_c8 = *param_3 * fVar1 + *param_2;
  fVar8 = *param_6 * fVar5;
  fVar7 = param_6[1] * fVar5;
  fVar5 = param_6[2] * fVar5;
  fStack_b8 = fStack_c8 + fVar8;
  fStack_b4 = param_3[1] * fVar1 + param_2[1];
  fStack_e8 = *param_6 * fStack_e0;
  fStack_b0 = param_3[2] * *(float *)(param_4 + 0x18) + param_2[2];
  fStack_c8 = fStack_c8 + fStack_e8;
  fStack_e4 = param_6[1] * fStack_e0;
  fStack_d0 = param_3[2] * fVar6 + param_2[2];
  fStack_e0 = param_6[2] * fStack_e0;
  fStack_c4 = fStack_b4 + fStack_e4;
  fStack_b4 = fStack_b4 + fVar7;
  fStack_d8 = *param_3 * fVar6 + *param_2;
  fStack_d4 = param_3[1] * fVar6 + param_2[1];
  fStack_c0 = fStack_b0 + fStack_e0;
  fStack_b0 = fStack_b0 + fVar5;
  fStack_e8 = fStack_d8 + fStack_e8;
  fStack_d8 = fStack_d8 + fVar8;
  fStack_e4 = fStack_d4 + fStack_e4;
  fStack_d4 = fStack_d4 + fVar7;
  fStack_e0 = fStack_d0 + fStack_e0;
  fStack_d0 = fStack_d0 + fVar5;
  (**(code **)(*param_1 + 0x30))(param_1,&fStack_c8,&fStack_e8,uVar4);
  (**(code **)(*param_1 + 0x30))(param_1,&fStack_e8,&fStack_d8,uVar4);
  (**(code **)(*param_1 + 0x30))(param_1,&fStack_d8,&fStack_b8,uVar4);
  (**(code **)(*param_1 + 0x30))(param_1,&fStack_b8,&fStack_c8,uVar4);
  return;
}






// 函数: void FUN_1806e3bc0(int64_t param_1)
void FUN_1806e3bc0(int64_t param_1)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  byte *pbVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t *plVar8;
  float fVar9;
  float fVar10;
  int8_t auStackX_8 [8];
  int64_t lStack_38;
  int8_t auStack_30 [40];
  
  (**(code **)(**(int64_t **)(param_1 + 0x60) + 0x30))
            (*(int64_t **)(param_1 + 0x60),&lStack_38,auStack_30);
  plVar8 = &lStack_38;
  lVar7 = 2;
  do {
    if ((((int64_t *)*plVar8 != (int64_t *)0x0) &&
        (lVar4 = (**(code **)(*(int64_t *)*plVar8 + 0x30))(), lVar4 != 0)) &&
       (iVar3 = (**(code **)(*(int64_t *)*plVar8 + 0x28))(), iVar3 == 1)) {
      plVar1 = (int64_t *)*plVar8;
      pbVar5 = (byte *)(**(code **)(*plVar1 + 0x1a8))(plVar1,auStackX_8);
      if ((*pbVar5 & 1) == 0) {
        plVar6 = (int64_t *)(**(code **)(*plVar1 + 0x30))(plVar1);
        fVar9 = (float)(**(code **)(*plVar6 + 0x368))(plVar6);
        fVar10 = (float)(**(code **)(*plVar1 + 0x240))(plVar1);
        cVar2 = (**(code **)(*plVar1 + 0x1f8))(plVar1);
        if ((fVar10 < fVar9) || (fVar9 = fVar10, cVar2 != '\0')) {
          (**(code **)(*plVar1 + 0x248))(plVar1);
          (**(code **)(*plVar1 + 0x238))(plVar1,fVar9);
        }
      }
    }
    plVar8 = plVar8 + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}



int64_t *
FUN_1806e3cd0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
             uint64_t param_5)

{
  char cVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  void *puVar4;
  int64_t lVar5;
  int16_t auStackX_8 [4];
  uint64_t in_stack_ffffffffffffff98;
  int32_t uVar6;
  uint64_t in_stack_ffffffffffffffa0;
  uint64_t uVar7;
  int32_t uVar8;
  
  uVar8 = (int32_t)((uint64_t)in_stack_ffffffffffffffa0 >> 0x20);
  uVar6 = (int32_t)((uint64_t)in_stack_ffffffffffffff98 >> 0x20);
  plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  plVar3 = (int64_t *)PxGetFoundation();
  cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (cVar1 == '\0') {
    puVar4 = &ui_system_data_1728_ptr;
  }
  else {
    puVar4 = (void *)__std_type_info_name(0x180bfc610,0x180c827e0);
  }
  plVar2 = (int64_t *)
           (**(code **)(*plVar2 + 8))(plVar2,0x70,puVar4,&processed_var_4624_ptr,CONCAT44(uVar6,0x2d));
  if (plVar2 == (int64_t *)0x0) {
    plVar2 = (int64_t *)0x0;
  }
  else {
    (**(code **)(*param_1 + 0x20))(param_1);
    auStackX_8[0] = 3;
    uVar7 = param_4;
    FUN_1806e5940(plVar2,0x101,auStackX_8,param_2,param_3,param_4,param_5,0x90,&processed_var_4600_ptr);
    uVar8 = (int32_t)((uint64_t)uVar7 >> 0x20);
    lVar5 = plVar2[0xd];
    *plVar2 = (int64_t)&processed_var_4128_ptr;
    plVar2[3] = (int64_t)&processed_var_4520_ptr;
    *(int32_t *)(lVar5 + 0x78) = 0x501502f9;
    *(int32_t *)(lVar5 + 0x7c) = 0x40490fdb;
    *(int32_t *)(lVar5 + 0x54) = 0x7f7fffff;
    *(int32_t *)(lVar5 + 0x5c) = 0;
    *(int32_t *)(lVar5 + 0x60) = 0x3f000000;
    *(int32_t *)(lVar5 + 100) = 0;
    *(int32_t *)(lVar5 + 0x68) = 0;
    *(int32_t *)(lVar5 + 0x50) = 0;
    *(uint64_t *)(lVar5 + 0x6c) = 0x3fc90fdb3dcccccd;
    *(int32_t *)(lVar5 + 0x74) = 0xbfc90fdb;
    *(int32_t *)(lVar5 + 0x58) = 0x3f800000;
    *(int16_t *)(lVar5 + 0x80) = 0;
  }
  lVar5 = (**(code **)(*param_1 + 0xd0))
                    (param_1,param_2,param_4,plVar2 + 3,0x180be0780,CONCAT44(uVar8,0x90));
  plVar2[0xc] = lVar5;
  if (lVar5 == 0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,1);
    plVar2 = (int64_t *)0x0;
  }
  return plVar2;
}






// 函数: void FUN_1806e3eb0(int64_t param_1,uint64_t param_2)
void FUN_1806e3eb0(int64_t param_1,uint64_t param_2)

{
  uint64_t uVar1;
  
  uVar1 = FUN_1806f59e0(param_2,*(uint64_t *)(param_1 + 0x60),param_1 + 0x18,0x180be0780);
  *(uint64_t *)(param_1 + 0x60) = uVar1;
  return;
}






// 函数: void FUN_1806e3ef0(int64_t param_1,int64_t *param_2)
void FUN_1806e3ef0(int64_t param_1,int64_t *param_2)

{
  if (*(int64_t *)(param_1 + 0x68) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,0x10);
    (**(code **)(*param_2 + 0x10))(param_2,*(uint64_t *)(param_1 + 0x68),0x90);
  }
                    // WARNING: Could not recover jumptable at 0x0001806e3f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x20))(param_2,*(uint64_t *)(param_1 + 0x20));
  return;
}



uint * FUN_1806e3fa0(int64_t *param_1,int64_t param_2)

{
  uint uVar1;
  int64_t lVar2;
  uint *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint *puVar6;
  
  puVar6 = (uint *)*param_1;
  if (puVar6 == (uint *)0x0) {
    lVar2 = 0;
    puVar6 = (uint *)0x0;
  }
  else {
    *(int16_t *)((int64_t)puVar6 + 10) = 2;
    *(void **)puVar6 = &processed_var_4128_ptr;
    *(void **)(puVar6 + 6) = &processed_var_4520_ptr;
    lVar2 = *param_1;
  }
  *param_1 = lVar2 + 0x70;
  if (*(int64_t *)(puVar6 + 0x1a) != 0) {
    uVar5 = *(int64_t *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
    *(uint64_t *)(param_2 + 8) = uVar5 + 0x90;
    *(uint64_t *)(puVar6 + 0x1a) = uVar5;
  }
  uVar1 = **(uint **)(param_2 + 8);
  puVar3 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar3;
  if (uVar1 == 0) {
    puVar3 = (uint *)0x0;
  }
  *(uint **)(puVar6 + 8) = puVar3;
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar1;
  uVar4 = FUN_1806f59e0(param_2,*(uint64_t *)(puVar6 + 0x18),puVar6 + 6,0x180be0780);
  *(uint64_t *)(puVar6 + 0x18) = uVar4;
  return puVar6;
}



uint64_t FUN_1806e4050(int64_t *param_1)

{
  float *pfVar1;
  float fVar2;
  uint64_t uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  int8_t auStack_48 [72];
  
  pfVar1 = (float *)(**(code **)(*param_1 + 0x48))(param_1,auStack_48);
  fVar6 = *pfVar1;
  fVar5 = pfVar1[3];
  if (fVar6 == 0.0) {
    fVar6 = 0.0;
    fVar5 = 1.0;
  }
  else {
    fVar2 = 1.0 / SQRT(fVar5 * fVar5 + fVar6 * fVar6);
    fVar5 = fVar5 * fVar2;
    fVar6 = fVar6 * fVar2;
  }
  if (fVar5 <= -1.0) {
    fVar5 = -1.0;
  }
  if (1.0 <= fVar5) {
    fVar5 = 1.0;
  }
  uVar3 = acosf(fVar5);
  uVar4 = (uint)((uint64_t)uVar3 >> 0x20);
  fVar5 = (float)uVar3 + (float)uVar3;
  if (fVar6 < 0.0) {
    fVar5 = -fVar5;
    uVar4 = uVar4 ^ 0x80000000;
  }
  return CONCAT44(uVar4,fVar5);
}



float FUN_1806e40f0(int64_t *param_1)

{
  float *pfVar1;
  int8_t auStack_18 [24];
  
  pfVar1 = (float *)(**(code **)(*param_1 + 0x58))(param_1,auStack_18);
  return SQRT(*pfVar1 * *pfVar1 + pfVar1[1] * pfVar1[1] + pfVar1[2] * pfVar1[2]);
}






