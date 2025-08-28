#include "TaleWorlds.Native.Split.h"
// 99_part_10_part031.c - 6 个函数
// 函数: void function_6b7380(uint64_t param_1,int32_t param_2,uint64_t param_3,int8_t param_4)
void function_6b7380(uint64_t param_1,int32_t param_2,uint64_t param_3,int8_t param_4)
{
  int32_t astack_special_x_10 [6];
  astack_special_x_10[0] = param_2;
  function_6bdc70(0,param_1,astack_special_x_10,1,param_3,param_4);
  return;
}
uint64_t function_6b73c0(uint64_t param_1,uint64_t *param_2,uint param_3)
{
  int8_t *puVar1;
  uint64_t uVar2;
  int32_t *puVar3;
  int64_t *plVar4;
  int32_t *puVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t local_var_5c8;
  uint64_t local_var_5c0;
  uint64_t local_var_5b8;
  uint64_t local_var_5b0;
  uint64_t local_var_5a8;
  uint64_t local_var_5a0;
  int32_t local_var_598;
  int8_t stack_array_590 [56];
  int8_t stack_array_558 [448];
  int8_t local_var_398;
  int8_t *plocal_var_390;
  uint local_var_388;
  uint local_var_384;
  int8_t stack_array_378 [832];
  int8_t local_var_38;
  int8_t *plocal_var_30;
  uint local_var_28;
  uint local_var_24;
  plocal_var_30 = stack_array_378;
  uVar8 = (uint64_t)param_3;
  local_var_28 = 0;
  local_var_38 = 1;
  local_var_24 = 0x10;
  if (0x10 < param_3) {
    function_6bcbe0(stack_array_378,uVar8);
  }
  local_var_388 = 0;
  plocal_var_390 = stack_array_558;
  local_var_398 = 1;
  local_var_384 = 0x10;
  if (0x10 < param_3) {
    function_6bcc80(stack_array_558,uVar8);
  }
  uVar7 = uVar8;
  if (param_3 != 0) {
    do {
      plVar4 = (int64_t *)*param_2;
      uVar2 = (**(code **)(*plVar4 + 0x48))(plVar4,stack_array_590);
      function_6ba780(&local_var_5c8,uVar2);
      if (local_var_28 < (local_var_24 & 0x7fffffff)) {
        puVar6 = (uint64_t *)(plocal_var_30 + (uint64_t)local_var_28 * 0x34);
        *puVar6 = local_var_5c8;
        puVar6[1] = local_var_5c0;
        puVar6[2] = local_var_5b8;
        puVar6[3] = local_var_5b0;
        puVar6[4] = local_var_5a8;
        puVar6[5] = local_var_5a0;
        *(int32_t *)(puVar6 + 6) = local_var_598;
        local_var_28 = local_var_28 + 1;
      }
      else {
        function_6bc8e0(stack_array_378,&local_var_5c8);
      }
      puVar3 = (int32_t *)(**(code **)(*plVar4 + 0x98))(plVar4,stack_array_590);
      if (local_var_388 < (local_var_384 & 0x7fffffff)) {
        puVar5 = (int32_t *)(plocal_var_390 + (uint64_t)local_var_388 * 0x1c);
        *puVar5 = *puVar3;
        puVar5[1] = puVar3[1];
        puVar5[2] = puVar3[2];
        puVar5[3] = puVar3[3];
        puVar5[4] = puVar3[4];
        puVar5[5] = puVar3[5];
        puVar5[6] = puVar3[6];
        local_var_388 = local_var_388 + 1;
      }
      else {
        function_6bca00(stack_array_558);
      }
      param_2 = param_2 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  function_6bded0(param_1,plocal_var_30,plocal_var_390,uVar8);
  puVar1 = plocal_var_390;
  if (((local_var_384 & 0x7fffffff) != 0) && (-1 < (int)local_var_384)) {
    if (plocal_var_390 == stack_array_558) {
      local_var_398 = 0;
    }
    else if (plocal_var_390 != (int8_t *)0x0) {
      plVar4 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar4 + 0x10))(plVar4,puVar1);
    }
  }
  puVar1 = plocal_var_30;
  if (((((local_var_24 & 0x7fffffff) != 0) && (-1 < (int)local_var_24)) && (plocal_var_30 != stack_array_378)) &&
     (plocal_var_30 != (int8_t *)0x0)) {
    plVar4 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar4 + 0x10))(plVar4,puVar1);
  }
  return param_1;
}
uint64_t
function_6b73d5(uint64_t param_1,uint64_t *param_2,uint param_3,uint64_t param_4,
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
  uint64_t stack_special_x_20;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RDI;
  *(uint64_t *)(in_RAX + 0x18) = unaff_R14;
  *(int64_t *)(unaff_RBP + 0x4b8) = unaff_RBP + 0x170;
  uVar8 = (uint64_t)param_3;
  *(int32_t *)(unaff_RBP + 0x4c0) = 0;
  *(int8_t *)(unaff_RBP + 0x4b0) = 1;
  *(int32_t *)(unaff_RBP + 0x4c4) = 0x10;
  if (0x10 < param_3) {
    function_6bcbe0(unaff_RBP + 0x170,uVar8);
  }
  *(int32_t *)(unaff_RBP + 0x160) = 0;
  *(int64_t *)(unaff_RBP + 0x158) = unaff_RBP + -0x70;
  *(int8_t *)(unaff_RBP + 0x150) = 1;
  *(int32_t *)(unaff_RBP + 0x164) = 0x10;
  if (0x10 < param_3) {
    function_6bcc80(unaff_RBP + -0x70,uVar8);
  }
  uVar7 = uVar8;
  if (param_3 != 0) {
    do {
      plVar4 = (int64_t *)*param_2;
      uVar2 = (**(code **)(*plVar4 + 0x48))(plVar4,&local_buffer_00000058);
      function_6ba780(&stack_special_x_20,uVar2);
      if (*(uint *)(unaff_RBP + 0x4c0) < (*(uint *)(unaff_RBP + 0x4c4) & 0x7fffffff)) {
        puVar6 = (uint64_t *)
                 ((uint64_t)*(uint *)(unaff_RBP + 0x4c0) * 0x34 + *(int64_t *)(unaff_RBP + 0x4b8))
        ;
        *puVar6 = stack_special_x_20;
        puVar6[1] = param_5;
        puVar6[2] = param_6;
        puVar6[3] = param_7;
        puVar6[4] = param_8;
        puVar6[5] = param_9;
        *(int32_t *)(puVar6 + 6) = param_10;
        *(int *)(unaff_RBP + 0x4c0) = *(int *)(unaff_RBP + 0x4c0) + 1;
      }
      else {
        function_6bc8e0(unaff_RBP + 0x170,&stack_special_x_20);
      }
      puVar3 = (int32_t *)(**(code **)(*plVar4 + 0x98))(plVar4,&local_buffer_00000058);
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
        function_6bca00(unaff_RBP + -0x70);
      }
      param_2 = param_2 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  function_6bded0(param_1,*(uint64_t *)(unaff_RBP + 0x4b8),*(uint64_t *)(unaff_RBP + 0x158),uVar8)
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
// 函数: void function_6b745f(void)
void function_6b745f(void)
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
  uint64_t stack_special_x_20;
  uint64_t local_var_28;
  uint64_t local_var_30;
  uint64_t local_var_38;
  uint64_t local_var_40;
  uint64_t local_var_48;
  int32_t local_buffer_50;
  uVar7 = unaff_R14;
  do {
    plVar4 = (int64_t *)*unaff_RDI;
    uVar2 = (**(code **)(*plVar4 + 0x48))(plVar4,&local_buffer_00000058);
    function_6ba780(&stack_special_x_20,uVar2);
    if (*(uint *)(unaff_RBP + 0x4c0) < (*(uint *)(unaff_RBP + 0x4c4) & 0x7fffffff)) {
      puVar6 = (uint64_t *)
               ((uint64_t)*(uint *)(unaff_RBP + 0x4c0) * 0x34 + *(int64_t *)(unaff_RBP + 0x4b8));
      *puVar6 = stack_special_x_20;
      puVar6[1] = local_var_28;
      puVar6[2] = local_var_30;
      puVar6[3] = local_var_38;
      puVar6[4] = local_var_40;
      puVar6[5] = local_var_48;
      *(int32_t *)(puVar6 + 6) = local_buffer_50;
      *(int *)(unaff_RBP + 0x4c0) = *(int *)(unaff_RBP + 0x4c0) + 1;
    }
    else {
      function_6bc8e0(unaff_RBP + 0x170,&stack_special_x_20);
    }
    puVar3 = (int32_t *)(**(code **)(*plVar4 + 0x98))(plVar4,&local_buffer_00000058);
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
      uVar8 = function_6bca00(unaff_RBP + -0x70);
    }
    unaff_RDI = unaff_RDI + 1;
    uVar7 = uVar7 - 1;
  } while (uVar7 != 0);
  function_6bded0(uVar8,*(uint64_t *)(unaff_RBP + 0x4b8),*(uint64_t *)(unaff_RBP + 0x158),
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
// 函数: void function_6b756d(void)
void function_6b756d(void)
{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t unaff_RBP;
  function_6bded0();
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
// 函数: void function_6b75a3(void)
void function_6b75a3(void)
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
// 函数: void function_6b7650(int64_t *param_1,uint64_t param_2,float *param_3,int32_t param_4,
void function_6b7650(int64_t *param_1,uint64_t param_2,float *param_3,int32_t param_4,
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
  int8_t stack_array_98 [144];
  pfVar5 = (float *)(**(code **)(*param_1 + 0x90))(param_1,stack_array_98);
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
  function_6badd0(param_1,param_2,&fStack_a8,param_4,param_5);
  return;
}
// 函数: void function_6b7820(int64_t *param_1,float *param_2,uint64_t param_3,int32_t param_4,
void function_6b7820(int64_t *param_1,float *param_2,uint64_t param_3,int32_t param_4,
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
  int8_t stack_array_98 [144];
  pfVar5 = (float *)(**(code **)(*param_1 + 0x90))(param_1,stack_array_98);
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
  function_6badd0(param_1,&fStack_a8,param_3,param_4,param_5);
  return;
}