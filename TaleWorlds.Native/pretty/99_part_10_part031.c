#include "TaleWorlds.Native.Split.h"

// 99_part_10_part031.c - 6 个函数

// 函数: void FUN_1806b7380(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4)
void FUN_1806b7380(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined4 auStackX_10 [6];
  
  auStackX_10[0] = param_2;
  FUN_1806bdc70(0,param_1,auStackX_10,1,param_3,param_4);
  return;
}



undefined8 FUN_1806b73c0(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined4 uStack_598;
  undefined1 auStack_590 [56];
  undefined1 auStack_558 [448];
  undefined1 uStack_398;
  undefined1 *puStack_390;
  uint uStack_388;
  uint uStack_384;
  undefined1 auStack_378 [832];
  undefined1 uStack_38;
  undefined1 *puStack_30;
  uint uStack_28;
  uint uStack_24;
  
  puStack_30 = auStack_378;
  uVar8 = (ulonglong)param_3;
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
      plVar4 = (longlong *)*param_2;
      uVar2 = (**(code **)(*plVar4 + 0x48))(plVar4,auStack_590);
      FUN_1806ba780(&uStack_5c8,uVar2);
      if (uStack_28 < (uStack_24 & 0x7fffffff)) {
        puVar6 = (undefined8 *)(puStack_30 + (ulonglong)uStack_28 * 0x34);
        *puVar6 = uStack_5c8;
        puVar6[1] = uStack_5c0;
        puVar6[2] = uStack_5b8;
        puVar6[3] = uStack_5b0;
        puVar6[4] = uStack_5a8;
        puVar6[5] = uStack_5a0;
        *(undefined4 *)(puVar6 + 6) = uStack_598;
        uStack_28 = uStack_28 + 1;
      }
      else {
        FUN_1806bc8e0(auStack_378,&uStack_5c8);
      }
      puVar3 = (undefined4 *)(**(code **)(*plVar4 + 0x98))(plVar4,auStack_590);
      if (uStack_388 < (uStack_384 & 0x7fffffff)) {
        puVar5 = (undefined4 *)(puStack_390 + (ulonglong)uStack_388 * 0x1c);
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
    else if (puStack_390 != (undefined1 *)0x0) {
      plVar4 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar4 + 0x10))(plVar4,puVar1);
    }
  }
  puVar1 = puStack_30;
  if (((((uStack_24 & 0x7fffffff) != 0) && (-1 < (int)uStack_24)) && (puStack_30 != auStack_378)) &&
     (puStack_30 != (undefined1 *)0x0)) {
    plVar4 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar4 + 0x10))(plVar4,puVar1);
  }
  return param_1;
}



undefined8
FUN_1806b73d5(undefined8 param_1,undefined8 *param_2,uint param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10)

{
  longlong lVar1;
  longlong in_RAX;
  undefined8 uVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  longlong unaff_RBP;
  ulonglong uVar7;
  undefined8 unaff_RDI;
  undefined8 unaff_R14;
  ulonglong uVar8;
  undefined8 uStackX_20;
  
  *(undefined8 *)(in_RAX + 0x10) = unaff_RDI;
  *(undefined8 *)(in_RAX + 0x18) = unaff_R14;
  *(longlong *)(unaff_RBP + 0x4b8) = unaff_RBP + 0x170;
  uVar8 = (ulonglong)param_3;
  *(undefined4 *)(unaff_RBP + 0x4c0) = 0;
  *(undefined1 *)(unaff_RBP + 0x4b0) = 1;
  *(undefined4 *)(unaff_RBP + 0x4c4) = 0x10;
  if (0x10 < param_3) {
    FUN_1806bcbe0(unaff_RBP + 0x170,uVar8);
  }
  *(undefined4 *)(unaff_RBP + 0x160) = 0;
  *(longlong *)(unaff_RBP + 0x158) = unaff_RBP + -0x70;
  *(undefined1 *)(unaff_RBP + 0x150) = 1;
  *(undefined4 *)(unaff_RBP + 0x164) = 0x10;
  if (0x10 < param_3) {
    FUN_1806bcc80(unaff_RBP + -0x70,uVar8);
  }
  uVar7 = uVar8;
  if (param_3 != 0) {
    do {
      plVar4 = (longlong *)*param_2;
      uVar2 = (**(code **)(*plVar4 + 0x48))(plVar4,&stack0x00000058);
      FUN_1806ba780(&uStackX_20,uVar2);
      if (*(uint *)(unaff_RBP + 0x4c0) < (*(uint *)(unaff_RBP + 0x4c4) & 0x7fffffff)) {
        puVar6 = (undefined8 *)
                 ((ulonglong)*(uint *)(unaff_RBP + 0x4c0) * 0x34 + *(longlong *)(unaff_RBP + 0x4b8))
        ;
        *puVar6 = uStackX_20;
        puVar6[1] = param_5;
        puVar6[2] = param_6;
        puVar6[3] = param_7;
        puVar6[4] = param_8;
        puVar6[5] = param_9;
        *(undefined4 *)(puVar6 + 6) = param_10;
        *(int *)(unaff_RBP + 0x4c0) = *(int *)(unaff_RBP + 0x4c0) + 1;
      }
      else {
        FUN_1806bc8e0(unaff_RBP + 0x170,&uStackX_20);
      }
      puVar3 = (undefined4 *)(**(code **)(*plVar4 + 0x98))(plVar4,&stack0x00000058);
      if (*(uint *)(unaff_RBP + 0x160) < (*(uint *)(unaff_RBP + 0x164) & 0x7fffffff)) {
        puVar5 = (undefined4 *)
                 ((ulonglong)*(uint *)(unaff_RBP + 0x160) * 0x1c + *(longlong *)(unaff_RBP + 0x158))
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
  FUN_1806bded0(param_1,*(undefined8 *)(unaff_RBP + 0x4b8),*(undefined8 *)(unaff_RBP + 0x158),uVar8)
  ;
  if (((*(uint *)(unaff_RBP + 0x164) & 0x7fffffff) != 0) && (-1 < (int)*(uint *)(unaff_RBP + 0x164))
     ) {
    lVar1 = *(longlong *)(unaff_RBP + 0x158);
    if (lVar1 == unaff_RBP + -0x70) {
      *(undefined1 *)(unaff_RBP + 0x150) = 0;
    }
    else if (lVar1 != 0) {
      plVar4 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar4 + 0x10))(plVar4,lVar1);
    }
  }
  if (((((*(uint *)(unaff_RBP + 0x4c4) & 0x7fffffff) != 0) &&
       (-1 < (int)*(uint *)(unaff_RBP + 0x4c4))) &&
      (lVar1 = *(longlong *)(unaff_RBP + 0x4b8), lVar1 != unaff_RBP + 0x170)) && (lVar1 != 0)) {
    plVar4 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar4 + 0x10))(plVar4,lVar1);
  }
  return param_1;
}






// 函数: void FUN_1806b745f(void)
void FUN_1806b745f(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  longlong unaff_RBP;
  ulonglong uVar7;
  undefined8 *unaff_RDI;
  ulonglong unaff_R14;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar8;
  undefined8 uStackX_20;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  
  uVar7 = unaff_R14;
  do {
    plVar4 = (longlong *)*unaff_RDI;
    uVar2 = (**(code **)(*plVar4 + 0x48))(plVar4,&stack0x00000058);
    FUN_1806ba780(&uStackX_20,uVar2);
    if (*(uint *)(unaff_RBP + 0x4c0) < (*(uint *)(unaff_RBP + 0x4c4) & 0x7fffffff)) {
      puVar6 = (undefined8 *)
               ((ulonglong)*(uint *)(unaff_RBP + 0x4c0) * 0x34 + *(longlong *)(unaff_RBP + 0x4b8));
      *puVar6 = uStackX_20;
      puVar6[1] = in_stack_00000028;
      puVar6[2] = in_stack_00000030;
      puVar6[3] = in_stack_00000038;
      puVar6[4] = in_stack_00000040;
      puVar6[5] = in_stack_00000048;
      *(undefined4 *)(puVar6 + 6) = in_stack_00000050;
      *(int *)(unaff_RBP + 0x4c0) = *(int *)(unaff_RBP + 0x4c0) + 1;
    }
    else {
      FUN_1806bc8e0(unaff_RBP + 0x170,&uStackX_20);
    }
    puVar3 = (undefined4 *)(**(code **)(*plVar4 + 0x98))(plVar4,&stack0x00000058);
    if (*(uint *)(unaff_RBP + 0x160) < (*(uint *)(unaff_RBP + 0x164) & 0x7fffffff)) {
      puVar5 = (undefined4 *)
               ((ulonglong)*(uint *)(unaff_RBP + 0x160) * 0x1c + *(longlong *)(unaff_RBP + 0x158));
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
  FUN_1806bded0(uVar8,*(undefined8 *)(unaff_RBP + 0x4b8),*(undefined8 *)(unaff_RBP + 0x158),
                unaff_R14 & 0xffffffff);
  if (((*(uint *)(unaff_RBP + 0x164) & 0x7fffffff) != 0) && (-1 < (int)*(uint *)(unaff_RBP + 0x164))
     ) {
    lVar1 = *(longlong *)(unaff_RBP + 0x158);
    if (lVar1 == unaff_RBP + -0x70) {
      *(undefined1 *)(unaff_RBP + 0x150) = 0;
    }
    else if (lVar1 != 0) {
      plVar4 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar4 + 0x10))(plVar4,lVar1);
    }
  }
  if (((((*(uint *)(unaff_RBP + 0x4c4) & 0x7fffffff) != 0) &&
       (-1 < (int)*(uint *)(unaff_RBP + 0x4c4))) &&
      (lVar1 = *(longlong *)(unaff_RBP + 0x4b8), lVar1 != unaff_RBP + 0x170)) && (lVar1 != 0)) {
    plVar4 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar4 + 0x10))(plVar4,lVar1);
  }
  return;
}






// 函数: void FUN_1806b756d(void)
void FUN_1806b756d(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong unaff_RBP;
  
  FUN_1806bded0();
  if (((*(uint *)(unaff_RBP + 0x164) & 0x7fffffff) != 0) && (-1 < (int)*(uint *)(unaff_RBP + 0x164))
     ) {
    lVar1 = *(longlong *)(unaff_RBP + 0x158);
    if (lVar1 == unaff_RBP + -0x70) {
      *(undefined1 *)(unaff_RBP + 0x150) = 0;
    }
    else if (lVar1 != 0) {
      plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
    }
  }
  if (((((*(uint *)(unaff_RBP + 0x4c4) & 0x7fffffff) != 0) &&
       (-1 < (int)*(uint *)(unaff_RBP + 0x4c4))) &&
      (lVar1 = *(longlong *)(unaff_RBP + 0x4b8), lVar1 != unaff_RBP + 0x170)) && (lVar1 != 0)) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  return;
}






// 函数: void FUN_1806b75a3(void)
void FUN_1806b75a3(void)

{
  longlong lVar1;
  int in_EAX;
  longlong *plVar2;
  longlong unaff_RBP;
  
  if (-1 < in_EAX) {
    lVar1 = *(longlong *)(unaff_RBP + 0x158);
    if (lVar1 == unaff_RBP + -0x70) {
      *(undefined1 *)(unaff_RBP + 0x150) = 0;
    }
    else if (lVar1 != 0) {
      plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
    }
  }
  if (((((*(uint *)(unaff_RBP + 0x4c4) & 0x7fffffff) != 0) &&
       (-1 < (int)*(uint *)(unaff_RBP + 0x4c4))) &&
      (lVar1 = *(longlong *)(unaff_RBP + 0x4b8), lVar1 != unaff_RBP + 0x170)) && (lVar1 != 0)) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  return;
}






// 函数: void FUN_1806b7650(longlong *param_1,undefined8 param_2,float *param_3,undefined4 param_4,
void FUN_1806b7650(longlong *param_1,undefined8 param_2,float *param_3,undefined4 param_4,
                  undefined1 param_5)

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
  undefined1 auStack_98 [144];
  
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






// 函数: void FUN_1806b7820(longlong *param_1,float *param_2,undefined8 param_3,undefined4 param_4,
void FUN_1806b7820(longlong *param_1,float *param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 param_5)

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
  undefined1 auStack_98 [144];
  
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






