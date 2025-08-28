#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part075.c - 3 个函数

// 函数: void FUN_1802cd2b0(longlong param_1,longlong param_2,longlong param_3,char param_4,float *param_5)
void FUN_1802cd2b0(longlong param_1,longlong param_2,longlong param_3,char param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  longlong lVar9;
  uint64_t uVar10;
  uint64_t *puVar11;
  int iVar12;
  float fVar13;
  int8_t auStack_498 [32];
  int8_t auStack_478 [12];
  int32_t uStack_46c;
  int32_t uStack_45c;
  int32_t uStack_44c;
  int32_t uStack_43c;
  longlong lStack_438;
  int8_t auStack_430 [64];
  int8_t auStack_3f0 [64];
  int8_t auStack_3b0 [64];
  int8_t auStack_370 [64];
  int8_t auStack_330 [64];
  int8_t auStack_2f0 [64];
  int8_t auStack_2b0 [64];
  int8_t auStack_270 [64];
  int8_t auStack_230 [64];
  int8_t auStack_1f0 [64];
  int8_t auStack_1b0 [64];
  int8_t auStack_170 [64];
  int8_t auStack_130 [64];
  int8_t auStack_f0 [64];
  int8_t auStack_b0 [64];
  int aiStack_70 [4];
  int32_t auStack_60 [4];
  ulonglong uStack_50;
  
  uStack_50 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_498;
  lStack_438 = param_3;
  FUN_180287b30(param_5 + 0x40,auStack_478);
  uStack_46c = 0;
  uStack_45c = 0;
  uStack_44c = 0;
  uStack_43c = 0x3f800000;
  uVar10 = FUN_180286010(param_5 + 0x10,auStack_430,1);
  uVar10 = FUN_1800946d0(auStack_478,auStack_3f0,uVar10);
  puVar11 = (uint64_t *)FUN_1800946d0(param_5,auStack_3b0,uVar10);
  uVar10 = puVar11[1];
  *(uint64_t *)(param_1 + 0xa0) = *puVar11;
  *(uint64_t *)(param_1 + 0xa8) = uVar10;
  uVar10 = puVar11[3];
  *(uint64_t *)(param_1 + 0xb0) = puVar11[2];
  *(uint64_t *)(param_1 + 0xb8) = uVar10;
  uVar10 = puVar11[5];
  *(uint64_t *)(param_1 + 0xc0) = puVar11[4];
  *(uint64_t *)(param_1 + 200) = uVar10;
  uVar5 = *(int32_t *)((longlong)puVar11 + 0x34);
  uVar6 = *(int32_t *)(puVar11 + 7);
  uVar7 = *(int32_t *)((longlong)puVar11 + 0x3c);
  *(int32_t *)(param_1 + 0xd0) = *(int32_t *)(puVar11 + 6);
  *(int32_t *)(param_1 + 0xd4) = uVar5;
  *(int32_t *)(param_1 + 0xd8) = uVar6;
  *(int32_t *)(param_1 + 0xdc) = uVar7;
  FUN_180287b30(param_5 + 0x90,auStack_478);
  uStack_46c = 0;
  uStack_45c = 0;
  uStack_44c = 0;
  uStack_43c = 0x3f800000;
  uVar10 = FUN_180286010(param_5 + 0x60,auStack_370,1);
  uVar10 = FUN_1800946d0(auStack_478,auStack_330,uVar10);
  puVar11 = (uint64_t *)FUN_1800946d0(param_5,auStack_2f0,uVar10);
  uVar10 = puVar11[1];
  *(uint64_t *)(param_1 + 0xe0) = *puVar11;
  *(uint64_t *)(param_1 + 0xe8) = uVar10;
  uVar10 = puVar11[3];
  *(uint64_t *)(param_1 + 0xf0) = puVar11[2];
  *(uint64_t *)(param_1 + 0xf8) = uVar10;
  uVar10 = puVar11[5];
  *(uint64_t *)(param_1 + 0x100) = puVar11[4];
  *(uint64_t *)(param_1 + 0x108) = uVar10;
  uVar5 = *(int32_t *)((longlong)puVar11 + 0x34);
  uVar6 = *(int32_t *)(puVar11 + 7);
  uVar7 = *(int32_t *)((longlong)puVar11 + 0x3c);
  *(int32_t *)(param_1 + 0x110) = *(int32_t *)(puVar11 + 6);
  *(int32_t *)(param_1 + 0x114) = uVar5;
  *(int32_t *)(param_1 + 0x118) = uVar6;
  *(int32_t *)(param_1 + 0x11c) = uVar7;
  FUN_180287b30(param_5 + 0xe0,auStack_478);
  uStack_46c = 0;
  uStack_45c = 0;
  uStack_44c = 0;
  uStack_43c = 0x3f800000;
  uVar10 = FUN_180286010(param_5 + 0xb0,auStack_2b0,1);
  uVar10 = FUN_1800946d0(auStack_478,auStack_270,uVar10);
  puVar11 = (uint64_t *)FUN_1800946d0(param_5,auStack_230,uVar10);
  uVar10 = puVar11[1];
  *(uint64_t *)(param_1 + 0x120) = *puVar11;
  *(uint64_t *)(param_1 + 0x128) = uVar10;
  uVar10 = puVar11[3];
  *(uint64_t *)(param_1 + 0x130) = puVar11[2];
  *(uint64_t *)(param_1 + 0x138) = uVar10;
  uVar10 = puVar11[5];
  *(uint64_t *)(param_1 + 0x140) = puVar11[4];
  *(uint64_t *)(param_1 + 0x148) = uVar10;
  uVar5 = *(int32_t *)((longlong)puVar11 + 0x34);
  uVar6 = *(int32_t *)(puVar11 + 7);
  uVar7 = *(int32_t *)((longlong)puVar11 + 0x3c);
  *(int32_t *)(param_1 + 0x150) = *(int32_t *)(puVar11 + 6);
  *(int32_t *)(param_1 + 0x154) = uVar5;
  *(int32_t *)(param_1 + 0x158) = uVar6;
  *(int32_t *)(param_1 + 0x15c) = uVar7;
  FUN_180287b30(param_5 + 0x130,auStack_478);
  uStack_46c = 0;
  uStack_45c = 0;
  uStack_44c = 0;
  uStack_43c = 0x3f800000;
  uVar10 = FUN_180286010(param_5 + 0x100,auStack_1f0,1);
  uVar10 = FUN_1800946d0(auStack_478,auStack_1b0,uVar10);
  puVar11 = (uint64_t *)FUN_1800946d0(param_5,auStack_170,uVar10);
  uVar10 = puVar11[1];
  *(uint64_t *)(param_1 + 0x160) = *puVar11;
  *(uint64_t *)(param_1 + 0x168) = uVar10;
  uVar10 = puVar11[3];
  *(uint64_t *)(param_1 + 0x170) = puVar11[2];
  *(uint64_t *)(param_1 + 0x178) = uVar10;
  uVar10 = puVar11[5];
  *(uint64_t *)(param_1 + 0x180) = puVar11[4];
  *(uint64_t *)(param_1 + 0x188) = uVar10;
  uVar5 = *(int32_t *)((longlong)puVar11 + 0x34);
  uVar6 = *(int32_t *)(puVar11 + 7);
  uVar7 = *(int32_t *)((longlong)puVar11 + 0x3c);
  *(int32_t *)(param_1 + 400) = *(int32_t *)(puVar11 + 6);
  *(int32_t *)(param_1 + 0x194) = uVar5;
  *(int32_t *)(param_1 + 0x198) = uVar6;
  *(int32_t *)(param_1 + 0x19c) = uVar7;
  FUN_180287b30(param_5 + 0x180,auStack_478);
  uStack_46c = 0;
  uStack_45c = 0;
  uStack_44c = 0;
  uStack_43c = 0x3f800000;
  uVar10 = FUN_180286010(param_5 + 0x150,auStack_130,1);
  uVar10 = FUN_1800946d0(auStack_478,auStack_f0,uVar10);
  puVar11 = (uint64_t *)FUN_1800946d0(param_5,auStack_b0,uVar10);
  auStack_60[0] = 0x10;
  auStack_60[1] = 0x11;
  auStack_60[2] = 0x12;
  uVar10 = puVar11[1];
  aiStack_70[0] = 4;
  aiStack_70[1] = 2;
  *(uint64_t *)(param_1 + 0x1a0) = *puVar11;
  *(uint64_t *)(param_1 + 0x1a8) = uVar10;
  aiStack_70[2] = 1;
  uVar10 = puVar11[3];
  *(uint64_t *)(param_1 + 0x1b0) = puVar11[2];
  *(uint64_t *)(param_1 + 0x1b8) = uVar10;
  uVar10 = puVar11[5];
  *(uint64_t *)(param_1 + 0x1c0) = puVar11[4];
  *(uint64_t *)(param_1 + 0x1c8) = uVar10;
  lVar9 = SYSTEM_STATE_MANAGER;
  uVar5 = *(int32_t *)((longlong)puVar11 + 0x34);
  uVar6 = *(int32_t *)(puVar11 + 7);
  uVar7 = *(int32_t *)((longlong)puVar11 + 0x3c);
  *(int32_t *)(param_1 + 0x1d0) = *(int32_t *)(puVar11 + 6);
  *(int32_t *)(param_1 + 0x1d4) = uVar5;
  *(int32_t *)(param_1 + 0x1d8) = uVar6;
  *(int32_t *)(param_1 + 0x1dc) = uVar7;
  iVar3 = *(int *)(lVar9 + 0xe70);
  iVar12 = 0;
  if ((-1 < iVar3) && (iVar12 = iVar3, 2 < iVar3)) {
    iVar12 = 2;
  }
  iVar3 = *(int *)(param_2 + 0x3588);
  iVar4 = aiStack_70[iVar12];
  FUN_1802cda00(param_2 + 0x126e0,param_1);
  *(int8_t *)(param_2 + 0x129c0) = *(int8_t *)(param_1 + 0x7c);
  *(int32_t *)(param_2 + 0x129c4) = *(int32_t *)(param_1 + 0x78);
  *(int8_t *)(param_2 + 0x129c1) = 1;
  *(char *)(param_2 + 0x129c8) = param_4;
  *(int8_t *)(param_2 + 0x129c9) = 1;
  puVar11 = (uint64_t *)(*(longlong *)(lStack_438 + 0x60b80) + 0x100);
  if ((uint64_t *)(param_2 + 0x129d0) != puVar11) {
    FUN_18017b480((uint64_t *)(param_2 + 0x129d0),*puVar11,
                  *(uint64_t *)(*(longlong *)(lStack_438 + 0x60b80) + 0x108));
  }
  if (*(char *)(param_1 + 0x7c) == '\0') {
    fVar13 = param_5[0x4c];
    fVar1 = *(float *)(param_1 + 0x84);
    if (fVar1 <= fVar13 + 2.0) {
      if (fVar1 < fVar13 - 2.0) {
        fVar13 = fVar1 + 2.0;
      }
    }
    else {
      fVar13 = fVar1 - 2.0;
    }
    *(float *)(param_1 + 0x84) = fVar13;
    fVar13 = param_5[0x4d];
    fVar1 = *(float *)(param_1 + 0x88);
    if (fVar1 <= fVar13 + 2.0) {
      if (fVar1 < fVar13 - 2.0) {
        fVar13 = fVar1 + 2.0;
      }
    }
    else {
      fVar13 = fVar1 - 2.0;
    }
    *(float *)(param_1 + 0x88) = fVar13;
    fVar13 = param_5[0x4e];
    fVar1 = *(float *)(param_1 + 0x8c);
    if (fVar1 <= fVar13 + 2.0) {
      if (fVar1 < fVar13 - 2.0) {
        fVar13 = fVar1 + 2.0;
      }
    }
    else {
      fVar13 = fVar1 - 2.0;
    }
    *(float *)(param_1 + 0x8c) = fVar13;
  }
  else {
    uVar10 = *(uint64_t *)(param_5 + 0x4e);
    *(uint64_t *)(param_1 + 0x84) = *(uint64_t *)(param_5 + 0x4c);
    *(uint64_t *)(param_1 + 0x8c) = uVar10;
  }
  *(float *)(param_2 + 76000) = param_5[0x1a0];
  *(float *)(param_2 + 0x128e4) = param_5[0x1a2];
  fVar13 = param_5[9];
  fVar1 = param_5[8];
  fVar2 = param_5[10];
  uVar5 = auStack_60[iVar12];
  *(float *)(param_2 + 0x128ec) = ((float)iVar4 * 1.2741406) / (float)(iVar3 * 2);
  *(float *)(param_2 + 0x128e8) = SQRT(fVar1 * fVar1 + fVar13 * fVar13 + fVar2 * fVar2);
  uVar10 = *(uint64_t *)(param_5 + 2);
  *(uint64_t *)(param_2 + 0x12760) = *(uint64_t *)param_5;
  *(uint64_t *)(param_2 + 0x12768) = uVar10;
  uVar10 = *(uint64_t *)(param_5 + 6);
  *(uint64_t *)(param_2 + 0x12770) = *(uint64_t *)(param_5 + 4);
  *(uint64_t *)(param_2 + 0x12778) = uVar10;
  uVar10 = *(uint64_t *)(param_5 + 10);
  *(uint64_t *)(param_2 + 0x12780) = *(uint64_t *)(param_5 + 8);
  *(uint64_t *)(param_2 + 0x12788) = uVar10;
  uVar10 = *(uint64_t *)(param_5 + 0xc);
  uVar8 = *(uint64_t *)(param_5 + 0xe);
  *(int32_t *)(param_2 + 0x128f0) = 0;
  *(uint64_t *)(param_2 + 0x12790) = uVar10;
  *(uint64_t *)(param_2 + 0x12798) = uVar8;
  uVar10 = *(uint64_t *)(param_1 + 0xa8);
  *(uint64_t *)(param_2 + 0x127a0) = *(uint64_t *)(param_1 + 0xa0);
  *(uint64_t *)(param_2 + 0x127a8) = uVar10;
  uVar10 = *(uint64_t *)(param_1 + 0xb8);
  *(uint64_t *)(param_2 + 0x127b0) = *(uint64_t *)(param_1 + 0xb0);
  *(uint64_t *)(param_2 + 0x127b8) = uVar10;
  uVar10 = *(uint64_t *)(param_1 + 200);
  *(uint64_t *)(param_2 + 0x127c0) = *(uint64_t *)(param_1 + 0xc0);
  *(uint64_t *)(param_2 + 0x127c8) = uVar10;
  uVar10 = *(uint64_t *)(param_1 + 0xd8);
  *(uint64_t *)(param_2 + 0x127d0) = *(uint64_t *)(param_1 + 0xd0);
  *(uint64_t *)(param_2 + 0x127d8) = uVar10;
  uVar10 = *(uint64_t *)(param_1 + 0xe8);
  *(uint64_t *)(param_2 + 0x127e0) = *(uint64_t *)(param_1 + 0xe0);
  *(uint64_t *)(param_2 + 0x127e8) = uVar10;
  uVar10 = *(uint64_t *)(param_1 + 0xf8);
  *(uint64_t *)(param_2 + 0x127f0) = *(uint64_t *)(param_1 + 0xf0);
  *(uint64_t *)(param_2 + 0x127f8) = uVar10;
  uVar10 = *(uint64_t *)(param_1 + 0x108);
  *(uint64_t *)(param_2 + 0x12800) = *(uint64_t *)(param_1 + 0x100);
  *(uint64_t *)(param_2 + 0x12808) = uVar10;
  uVar10 = *(uint64_t *)(param_1 + 0x118);
  *(uint64_t *)(param_2 + 0x12810) = *(uint64_t *)(param_1 + 0x110);
  *(uint64_t *)(param_2 + 0x12818) = uVar10;
  uVar10 = *(uint64_t *)(param_1 + 0x128);
  *(uint64_t *)(param_2 + 0x12820) = *(uint64_t *)(param_1 + 0x120);
  *(uint64_t *)(param_2 + 0x12828) = uVar10;
  uVar10 = *(uint64_t *)(param_1 + 0x138);
  *(uint64_t *)(param_2 + 0x12830) = *(uint64_t *)(param_1 + 0x130);
  *(uint64_t *)(param_2 + 0x12838) = uVar10;
  uVar10 = *(uint64_t *)(param_1 + 0x148);
  *(uint64_t *)(param_2 + 0x12840) = *(uint64_t *)(param_1 + 0x140);
  *(uint64_t *)(param_2 + 0x12848) = uVar10;
  uVar10 = *(uint64_t *)(param_1 + 0x158);
  *(uint64_t *)(param_2 + 0x12850) = *(uint64_t *)(param_1 + 0x150);
  *(uint64_t *)(param_2 + 0x12858) = uVar10;
  uVar10 = *(uint64_t *)(param_1 + 0x168);
  *(uint64_t *)(param_2 + 0x12860) = *(uint64_t *)(param_1 + 0x160);
  *(uint64_t *)(param_2 + 0x12868) = uVar10;
  uVar10 = *(uint64_t *)(param_1 + 0x178);
  *(uint64_t *)(param_2 + 0x12870) = *(uint64_t *)(param_1 + 0x170);
  *(uint64_t *)(param_2 + 0x12878) = uVar10;
  uVar10 = *(uint64_t *)(param_1 + 0x188);
  *(uint64_t *)(param_2 + 0x12880) = *(uint64_t *)(param_1 + 0x180);
  *(uint64_t *)(param_2 + 0x12888) = uVar10;
  uVar10 = *(uint64_t *)(param_1 + 0x198);
  *(uint64_t *)(param_2 + 0x12890) = *(uint64_t *)(param_1 + 400);
  *(uint64_t *)(param_2 + 0x12898) = uVar10;
  uVar10 = *(uint64_t *)(param_1 + 0x1a8);
  *(uint64_t *)(param_2 + 0x128a0) = *(uint64_t *)(param_1 + 0x1a0);
  *(uint64_t *)(param_2 + 0x128a8) = uVar10;
  uVar10 = *(uint64_t *)(param_1 + 0x1b8);
  *(uint64_t *)(param_2 + 0x128b0) = *(uint64_t *)(param_1 + 0x1b0);
  *(uint64_t *)(param_2 + 0x128b8) = uVar10;
  uVar10 = *(uint64_t *)(param_1 + 0x1c8);
  *(uint64_t *)(param_2 + 0x128c0) = *(uint64_t *)(param_1 + 0x1c0);
  *(uint64_t *)(param_2 + 0x128c8) = uVar10;
  uVar10 = *(uint64_t *)(param_1 + 0x1d0);
  uVar8 = *(uint64_t *)(param_1 + 0x1d8);
  *(int32_t *)(param_2 + 0x128f4) = uVar5;
  *(uint64_t *)(param_2 + 0x128d0) = uVar10;
  *(uint64_t *)(param_2 + 0x128d8) = uVar8;
  *(float *)(param_2 + 0x128fc) =
       SQRT(*param_5 * *param_5 + param_5[1] * param_5[1] + param_5[2] * param_5[2]);
  *(int32_t *)(param_2 + 0x12904) = 0x3f800000;
  *(float *)(param_2 + 0x12900) = (float)(0 < iVar12);
  uVar10 = *(uint64_t *)(param_1 + 0x8c);
  *(uint64_t *)(param_2 + 0x12910) = *(uint64_t *)(param_1 + 0x84);
  *(uint64_t *)(param_2 + 0x12918) = uVar10;
  if (param_4 != '\0') {
    *(int8_t *)(param_1 + 0x7c) = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_50 ^ (ulonglong)auStack_498);
}



longlong * FUN_1802cda00(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)*param_2;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  plVar1 = (longlong *)*param_1;
  *param_1 = (longlong)plVar3;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  plVar1 = (longlong *)param_1[1];
  param_1[1] = (longlong)plVar3;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar3 = (longlong *)param_2[2];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  plVar1 = (longlong *)param_1[2];
  param_1[2] = (longlong)plVar3;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar3 = (longlong *)param_2[3];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  plVar1 = (longlong *)param_1[3];
  param_1[3] = (longlong)plVar3;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar3 = (longlong *)param_2[4];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  plVar1 = (longlong *)param_1[4];
  param_1[4] = (longlong)plVar3;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar3 = param_1 + 5;
  lVar4 = 2;
  do {
    plVar1 = *(longlong **)(((longlong)param_2 - (longlong)param_1) + (longlong)plVar3);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plVar2 = (longlong *)*plVar3;
    *plVar3 = (longlong)plVar1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    plVar3 = plVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  plVar3 = (longlong *)param_2[7];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  plVar1 = (longlong *)param_1[7];
  param_1[7] = (longlong)plVar3;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar3 = (longlong *)param_2[8];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  plVar1 = (longlong *)param_1[8];
  param_1[8] = (longlong)plVar3;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar3 = (longlong *)param_2[9];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  plVar1 = (longlong *)param_1[9];
  param_1[9] = (longlong)plVar3;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar3 = (longlong *)param_2[10];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  plVar1 = (longlong *)param_1[10];
  param_1[10] = (longlong)plVar3;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar3 = (longlong *)param_2[0xb];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  plVar1 = (longlong *)param_1[0xb];
  param_1[0xb] = (longlong)plVar3;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar3 = (longlong *)param_2[0xc];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  plVar1 = (longlong *)param_1[0xc];
  param_1[0xc] = (longlong)plVar3;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar3 = (longlong *)param_2[0xd];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  plVar1 = (longlong *)param_1[0xd];
  param_1[0xd] = (longlong)plVar3;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar3 = (longlong *)param_2[0xe];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  plVar1 = (longlong *)param_1[0xe];
  param_1[0xe] = (longlong)plVar3;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802cdce0(int32_t *param_1)
void FUN_1802cdce0(int32_t *param_1)

{
  FUN_18029fb10(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),*param_1,0,param_1[4],0xfffffffffffffffe);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802cdd10(int32_t *param_1)
void FUN_1802cdd10(int32_t *param_1)

{
  FUN_18029d760(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),*param_1,*(int8_t *)(param_1 + 4),0,
                0xffffffff,1,0xfffffffffffffffe);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




