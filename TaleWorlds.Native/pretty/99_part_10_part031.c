#include "TaleWorlds.Native.Split.h"

// 99_part_10_part031.c - 6 个函数

// 函数: void FUN_1806b7380(uint64_t param_1,int32_t param_2,uint64_t param_3,int8_t param_4)
void FUN_1806b7380(uint64_t param_1,int32_t param_2,uint64_t param_3,int8_t param_4)

{
  int32_t auStackX_10 [6];
  
  auStackX_10[0] = param_2;
  FUN_1806bdc70(0,param_1,auStackX_10,1,param_3,param_4);
  return;
}



uint64_t FUN_1806b73c0(uint64_t param_1,uint64_t *param_2,uint param_3)

{
  int8_t *puVar1;
  uint64_t uVar2;
  int32_t *puVar3;
  int64_t *plVar4;
  int32_t *puVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uStack_5c8;
  uint64_t uStack_5c0;
  uint64_t uStack_5b8;
  uint64_t uStack_5b0;
  uint64_t uStack_5a8;
  uint64_t uStack_5a0;
  int32_t uStack_598;
  int8_t auStack_590 [56];
  int8_t auStack_558 [448];
  int8_t uStack_398;
  int8_t *puStack_390;
  uint uStack_388;
  uint uStack_384;
  int8_t auStack_378 [832];
  int8_t uStack_38;
  int8_t *puStack_30;
  uint uStack_28;
  uint uStack_24;
  
  puStack_30 = auStack_378;
  uVar8 = (uint64_t)param_3;
  uStack_28 = 0;
  uStack_38 = 1;
  uStack_24 = 0x10;
  if (0x10 < param_3) {
    FUN_1806bcbe0(auStack_378,uVar8);
  }
  uStack_388 = 0;
  puStack_390 = auStack_558;
  uStack_398 = 1;
  uStack_384 = 0x10;
  if (0x10 < param_3) {
    FUN_1806bcc80(auStack_558,uVar8);
  }
  uVar7 = uVar8;
  if (param_3 != 0) {
    do {
      plVar4 = (int64_t *)*param_2;
      uVar2 = (**(code **)(*plVar4 + 0x48))(plVar4,auStack_590);
      FUN_1806ba780(&uStack_5c8,uVar2);
      if (uStack_28 < (uStack_24 & 0x7fffffff)) {
        puVar6 = (uint64_t *)(puStack_30 + (uint64_t)uStack_28 * 0x34);
        *puVar6 = uStack_5c8;
        puVar6[1] = uStack_5c0;
        puVar6[2] = uStack_5b8;
        puVar6[3] = uStack_5b0;
        puVar6[4] = uStack_5a8;
        puVar6[5] = uStack_5a0;
        *(int32_t *)(puVar6 + 6) = uStack_598;
        uStack_28 = uStack_28 + 1;
      }
      else {
        FUN_1806bc8e0(auStack_378,&uStack_5c8);
      }
      puVar3 = (int32_t *)(**(code **)(*plVar4 + 0x98))(plVar4,auStack_590);
      if (uStack_388 < (uStack_384 & 0x7fffffff)) {
        puVar5 = (int32_t *)(puStack_390 + (uint64_t)uStack_388 * 0x1c);
        *puVar5 = *puVar3;
        puVar5[1] = puVar3[1];
        puVar5[2] = puVar3[2];
        puVar5[3] = puVar3[3];
        puVar5[4] = puVar3[4];
        puVar5[5] = puVar3[5];
        puVar5[6] = puVar3[6];
        uStack_388 = uStack_388 + 1;
      }
      else {
        FUN_1806bca00(auStack_558);
      }
      param_2 = param_2 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_1806bded0(param_1,puStack_30,puStack_390,uVar8);
  puVar1 = puStack_390;
  if (((uStack_384 & 0x7fffffff) != 0) && (-1 < (int)uStack_384)) {
    if (puStack_390 == auStack_558) {
      uStack_398 = 0;
    }
    else if (puStack_390 != (int8_t *)0x0) {
      plVar4 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar4 + 0x10))(plVar4,puVar1);
    }
  }
  puVar1 = puStack_30;
  if (((((uStack_24 & 0x7fffffff) != 0) && (-1 < (int)uStack_24)) && (puStack_30 != auStack_378)) &&
     (puStack_30 != (int8_t *)0x0)) {
    plVar4 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar4 + 0x10))(plVar4,puVar1);
  }
  return param_1;
}



uint64_t
FUN_1806b73d5(uint64_t param_1,uint64_t *param_2,uint param_3,uint64_t param_4,
             uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
             uint64_t param_9,int32_t param_10)

{
  int64_t lVar1;
  int64_t in_RAX;
  uint64_t uVar2;
  int32_t *puVar3;
  int64_t *plVar4;
  int32_t *puVar5;
  uint64_t *puVar6;
  int64_t unaff_RBP;
  uint64_t uVar7;
  uint64_t unaff_RDI;
  uint64_t unaff_R14;
  uint64_t uVar8;
  uint64_t uStackX_20;
  
  *(uint64_t *)(in_RAX + 0x10) = unaff_RDI;
  *(uint64_t *)(in_RAX + 0x18) = unaff_R14;
  *(int64_t *)(unaff_RBP + 0x4b8) = unaff_RBP + 0x170;
  uVar8 = (uint64_t)param_3;
  *(int32_t *)(unaff_RBP + 0x4c0) = 0;
  *(int8_t *)(unaff_RBP + 0x4b0) = 1;
  *(int32_t *)(unaff_RBP + 0x4c4) = 0x10;
  if (0x10 < param_3) {
    FUN_1806bcbe0(unaff_RBP + 0x170,uVar8);
  }
  *(int32_t *)(unaff_RBP + 0x160) = 0;
  *(int64_t *)(unaff_RBP + 0x158) = unaff_RBP + -0x70;
  *(int8_t *)(unaff_RBP + 0x150) = 1;
  *(int32_t *)(unaff_RBP + 0x164) = 0x10;
  if (0x10 < param_3) {
    FUN_1806bcc80(unaff_RBP + -0x70,uVar8);
  }
  uVar7 = uVar8;
  if (param_3 != 0) {
    do {
      plVar4 = (int64_t *)*param_2;
      uVar2 = (**(code **)(*plVar4 + 0x48))(plVar4,&stack0x00000058);
      FUN_1806ba780(&uStackX_20,uVar2);
      if (*(uint *)(unaff_RBP + 0x4c0) < (*(uint *)(unaff_RBP + 0x4c4) & 0x7fffffff)) {
        puVar6 = (uint64_t *)
                 ((uint64_t)*(uint *)(unaff_RBP + 0x4c0) * 0x34 + *(int64_t *)(unaff_RBP + 0x4b8))
        ;
        *puVar6 = uStackX_20;
        puVar6[1] = param_5;
        puVar6[2] = param_6;
        puVar6[3] = param_7;
        puVar6[4] = param_8;
        puVar6[5] = param_9;
        *(int32_t *)(puVar6 + 6) = param_10;
        *(int *)(unaff_RBP + 0x4c0) = *(int *)(unaff_RBP + 0x4c0) + 1;
      }
      else {
        FUN_1806bc8e0(unaff_RBP + 0x170,&uStackX_20);
      }
      puVar3 = (int32_t *)(**(code **)(*plVar4 + 0x98))(plVar4,&stack0x00000058);
      if (*(uint *)(unaff_RBP + 0x160) < (*(uint *)(unaff_RBP + 0x164) & 0x7fffffff)) {
        puVar5 = (int32_t *)
                 ((uint64_t)*(uint *)(unaff_RBP + 0x160) * 0x1c + *(int64_t *)(unaff_RBP + 0x158))
        ;
        *puVar5 = *puVar3;
        puVar5[1] = puVar3[1];
        puVar5[2] = puVar3[2];
        puVar5[3] = puVar3[3];
        puVar5[4] = puVar3[4];
        puVar5[5] = puVar3[5];
        puVar5[6] = puVar3[6];
        *(int *)(unaff_RBP + 0x160) = *(int *)(unaff_RBP + 0x160) + 1;
      }
      else {
        FUN_1806bca00(unaff_RBP + -0x70);
      }
      param_2 = param_2 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_1806bded0(param_1,*(uint64_t *)(unaff_RBP + 0x4b8),*(uint64_t *)(unaff_RBP + 0x158),uVar8)
  ;
  if (((*(uint *)(unaff_RBP + 0x164) & 0x7fffffff) != 0) && (-1 < (int)*(uint *)(unaff_RBP + 0x164))
     ) {
    lVar1 = *(int64_t *)(unaff_RBP + 0x158);
    if (lVar1 == unaff_RBP + -0x70) {
      *(int8_t *)(unaff_RBP + 0x150) = 0;
    }
    else if (lVar1 != 0) {
      plVar4 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar4 + 0x10))(plVar4,lVar1);
    }
  }
  if (((((*(uint *)(unaff_RBP + 0x4c4) & 0x7fffffff) != 0) &&
       (-1 < (int)*(uint *)(unaff_RBP + 0x4c4))) &&
      (lVar1 = *(int64_t *)(unaff_RBP + 0x4b8), lVar1 != unaff_RBP + 0x170)) && (lVar1 != 0)) {
    plVar4 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar4 + 0x10))(plVar4,lVar1);
  }
  return param_1;
}






// 函数: void FUN_1806b745f(void)
void FUN_1806b745f(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  int32_t *puVar3;
  int64_t *plVar4;
  int32_t *puVar5;
  uint64_t *puVar6;
  int64_t unaff_RBP;
  uint64_t uVar7;
  uint64_t *unaff_RDI;
  uint64_t unaff_R14;
  int32_t extraout_XMM0_Da;
  int32_t uVar8;
  uint64_t uStackX_20;
  uint64_t in_stack_00000028;
  uint64_t in_stack_00000030;
  uint64_t in_stack_00000038;
  uint64_t in_stack_00000040;
  uint64_t in_stack_00000048;
  int32_t in_stack_00000050;
  
  uVar7 = unaff_R14;
  do {
    plVar4 = (int64_t *)*unaff_RDI;
    uVar2 = (**(code **)(*plVar4 + 0x48))(plVar4,&stack0x00000058);
    FUN_1806ba780(&uStackX_20,uVar2);
    if (*(uint *)(unaff_RBP + 0x4c0) < (*(uint *)(unaff_RBP + 0x4c4) & 0x7fffffff)) {
      puVar6 = (uint64_t *)
               ((uint64_t)*(uint *)(unaff_RBP + 0x4c0) * 0x34 + *(int64_t *)(unaff_RBP + 0x4b8));
      *puVar6 = uStackX_20;
      puVar6[1] = in_stack_00000028;
      puVar6[2] = in_stack_00000030;
      puVar6[3] = in_stack_00000038;
      puVar6[4] = in_stack_00000040;
      puVar6[5] = in_stack_00000048;
      *(int32_t *)(puVar6 + 6) = in_stack_00000050;
      *(int *)(unaff_RBP + 0x4c0) = *(int *)(unaff_RBP + 0x4c0) + 1;
    }
    else {
      FUN_1806bc8e0(unaff_RBP + 0x170,&uStackX_20);
    }
    puVar3 = (int32_t *)(**(code **)(*plVar4 + 0x98))(plVar4,&stack0x00000058);
    if (*(uint *)(unaff_RBP + 0x160) < (*(uint *)(unaff_RBP + 0x164) & 0x7fffffff)) {
      puVar5 = (int32_t *)
               ((uint64_t)*(uint *)(unaff_RBP + 0x160) * 0x1c + *(int64_t *)(unaff_RBP + 0x158));
      *puVar5 = *puVar3;
      puVar5[1] = puVar3[1];
      puVar5[2] = puVar3[2];
      puVar5[3] = puVar3[3];
      puVar5[4] = puVar3[4];
      puVar5[5] = puVar3[5];
      puVar5[6] = puVar3[6];
      *(int *)(unaff_RBP + 0x160) = *(int *)(unaff_RBP + 0x160) + 1;
      uVar8 = extraout_XMM0_Da;
    }
    else {
      uVar8 = FUN_1806bca00(unaff_RBP + -0x70);
    }
    unaff_RDI = unaff_RDI + 1;
    uVar7 = uVar7 - 1;
  } while (uVar7 != 0);
  FUN_1806bded0(uVar8,*(uint64_t *)(unaff_RBP + 0x4b8),*(uint64_t *)(unaff_RBP + 0x158),
                unaff_R14 & 0xffffffff);
  if (((*(uint *)(unaff_RBP + 0x164) & 0x7fffffff) != 0) && (-1 < (int)*(uint *)(unaff_RBP + 0x164))
     ) {
    lVar1 = *(int64_t *)(unaff_RBP + 0x158);
    if (lVar1 == unaff_RBP + -0x70) {
      *(int8_t *)(unaff_RBP + 0x150) = 0;
    }
    else if (lVar1 != 0) {
      plVar4 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar4 + 0x10))(plVar4,lVar1);
    }
  }
  if (((((*(uint *)(unaff_RBP + 0x4c4) & 0x7fffffff) != 0) &&
       (-1 < (int)*(uint *)(unaff_RBP + 0x4c4))) &&
      (lVar1 = *(int64_t *)(unaff_RBP + 0x4b8), lVar1 != unaff_RBP + 0x170)) && (lVar1 != 0)) {
    plVar4 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar4 + 0x10))(plVar4,lVar1);
  }
  return;
}






// 函数: void FUN_1806b756d(void)
void FUN_1806b756d(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t unaff_RBP;
  
  FUN_1806bded0();
  if (((*(uint *)(unaff_RBP + 0x164) & 0x7fffffff) != 0) && (-1 < (int)*(uint *)(unaff_RBP + 0x164))
     ) {
    lVar1 = *(int64_t *)(unaff_RBP + 0x158);
    if (lVar1 == unaff_RBP + -0x70) {
      *(int8_t *)(unaff_RBP + 0x150) = 0;
    }
    else if (lVar1 != 0) {
      plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
    }
  }
  if (((((*(uint *)(unaff_RBP + 0x4c4) & 0x7fffffff) != 0) &&
       (-1 < (int)*(uint *)(unaff_RBP + 0x4c4))) &&
      (lVar1 = *(int64_t *)(unaff_RBP + 0x4b8), lVar1 != unaff_RBP + 0x170)) && (lVar1 != 0)) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  return;
}






// 函数: void FUN_1806b75a3(void)
void FUN_1806b75a3(void)

{
  int64_t lVar1;
  int in_EAX;
  int64_t *plVar2;
  int64_t unaff_RBP;
  
  if (-1 < in_EAX) {
    lVar1 = *(int64_t *)(unaff_RBP + 0x158);
    if (lVar1 == unaff_RBP + -0x70) {
      *(int8_t *)(unaff_RBP + 0x150) = 0;
    }
    else if (lVar1 != 0) {
      plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
    }
  }
  if (((((*(uint *)(unaff_RBP + 0x4c4) & 0x7fffffff) != 0) &&
       (-1 < (int)*(uint *)(unaff_RBP + 0x4c4))) &&
      (lVar1 = *(int64_t *)(unaff_RBP + 0x4b8), lVar1 != unaff_RBP + 0x170)) && (lVar1 != 0)) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  return;
}






// 函数: void FUN_1806b7650(int64_t *param_1,uint64_t param_2,float *param_3,int32_t param_4,
void FUN_1806b7650(int64_t *param_1,uint64_t param_2,float *param_3,int32_t param_4,
                  int8_t param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  int8_t auStack_98 [144];
  
  pfVar5 = (float *)(**(code **)(*param_1 + 0x90))(param_1,auStack_98);
  fVar10 = *param_3 + *param_3;
  fVar7 = param_3[1] + param_3[1];
  fVar1 = pfVar5[3];
  fVar9 = param_3[2] + param_3[2];
  fVar2 = pfVar5[1];
  fVar3 = *pfVar5;
  fVar4 = pfVar5[2];
  fVar8 = fVar1 * fVar1 - 0.5;
  fVar6 = fVar3 * fVar10 + fVar2 * fVar7 + fVar4 * fVar9;
  fStack_a8 = (fVar2 * fVar9 - fVar4 * fVar7) * fVar1 + fVar8 * fVar10 + fVar3 * fVar6 + pfVar5[4];
  fStack_a0 = (fVar3 * fVar7 - fVar2 * fVar10) * fVar1 + fVar8 * fVar9 + fVar4 * fVar6 + pfVar5[6];
  fStack_a4 = (fVar4 * fVar10 - fVar3 * fVar9) * fVar1 + fVar8 * fVar7 + fVar2 * fVar6 + pfVar5[5];
  FUN_1806badd0(param_1,param_2,&fStack_a8,param_4,param_5);
  return;
}






// 函数: void FUN_1806b7820(int64_t *param_1,float *param_2,uint64_t param_3,int32_t param_4,
void FUN_1806b7820(int64_t *param_1,float *param_2,uint64_t param_3,int32_t param_4,
                  int8_t param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  int8_t auStack_98 [144];
  
  pfVar5 = (float *)(**(code **)(*param_1 + 0x90))(param_1,auStack_98);
  fVar10 = *param_2 + *param_2;
  fVar7 = param_2[1] + param_2[1];
  fVar1 = pfVar5[3];
  fVar9 = param_2[2] + param_2[2];
  fVar2 = pfVar5[1];
  fVar3 = *pfVar5;
  fVar4 = pfVar5[2];
  fVar8 = fVar1 * fVar1 - 0.5;
  fVar6 = fVar3 * fVar10 + fVar2 * fVar7 + fVar4 * fVar9;
  fStack_a8 = (fVar2 * fVar9 - fVar4 * fVar7) * fVar1 + fVar8 * fVar10 + fVar3 * fVar6;
  fStack_a4 = (fVar4 * fVar10 - fVar3 * fVar9) * fVar1 + fVar8 * fVar7 + fVar2 * fVar6;
  fStack_a0 = (fVar3 * fVar7 - fVar2 * fVar10) * fVar1 + fVar8 * fVar9 + fVar4 * fVar6;
  FUN_1806badd0(param_1,&fStack_a8,param_3,param_4,param_5);
  return;
}






