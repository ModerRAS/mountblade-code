#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part051.c - 14 个函数
// 函数: void function_08d4c6(uint64_t *param_1)
void function_08d4c6(uint64_t *param_1)
{
  byte bVar1;
  bool bVar2;
  uint64_t *in_RAX;
  byte *pbVar3;
  int64_t unaff_RSI;
  int unaff_EDI;
  uint uVar4;
  int iVar5;
  uint64_t *in_R10;
  uint64_t *puVar6;
  int64_t lVar7;
  uint64_t *unaff_R14;
  do {
    if (unaff_EDI == 0) {
      puVar6 = (uint64_t *)in_R10[1];
      bVar2 = false;
    }
    else {
      if (*(int *)(in_R10 + 6) == 0) {
        bVar2 = true;
      }
      else {
        pbVar3 = *(byte **)(unaff_RSI + 8);
        lVar7 = in_R10[5] - (int64_t)pbVar3;
        do {
          uVar4 = (uint)pbVar3[lVar7];
          iVar5 = *pbVar3 - uVar4;
          if (*pbVar3 != uVar4) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar4 != 0);
        bVar2 = 0 < iVar5;
        if (iVar5 < 1) {
          puVar6 = (uint64_t *)in_R10[1];
          goto LAB_18008d51d;
        }
      }
      puVar6 = (uint64_t *)*in_R10;
    }
LAB_18008d51d:
    if (bVar2) {
      in_R10 = in_RAX;
    }
    in_RAX = in_R10;
    in_R10 = puVar6;
  } while (puVar6 != (uint64_t *)0x0);
  if (in_RAX != param_1) {
    if (*(int *)(in_RAX + 6) == 0) {
LAB_18008d56b:
      *unaff_R14 = in_RAX;
      return;
    }
    if (unaff_EDI != 0) {
      pbVar3 = (byte *)in_RAX[5];
      lVar7 = *(int64_t *)(unaff_RSI + 8) - (int64_t)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar4 = (uint)pbVar3[lVar7];
        if (bVar1 != uVar4) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar4 != 0);
      if ((int)(bVar1 - uVar4) < 1) goto LAB_18008d56b;
    }
  }
  *unaff_R14 = param_1;
  return;
}
// 函数: void function_08d535(int64_t param_1)
void function_08d535(int64_t param_1)
{
  byte bVar1;
  int64_t in_RAX;
  byte *pbVar2;
  int64_t unaff_RSI;
  int unaff_EDI;
  uint uVar3;
  int in_R10D;
  int64_t lVar4;
  int64_t *unaff_R14;
  if (*(int *)(in_RAX + 0x30) != in_R10D) {
    if (unaff_EDI != 0) {
      pbVar2 = *(byte **)(in_RAX + 0x28);
      lVar4 = *(int64_t *)(unaff_RSI + 8) - (int64_t)pbVar2;
      do {
        bVar1 = *pbVar2;
        uVar3 = (uint)pbVar2[lVar4];
        if (bVar1 != uVar3) break;
        pbVar2 = pbVar2 + 1;
      } while (uVar3 != 0);
      if ((int)(bVar1 - uVar3) < 1) goto LAB_18008d56b;
    }
    *unaff_R14 = param_1;
    return;
  }
LAB_18008d56b:
  *unaff_R14 = in_RAX;
  return;
}
// 函数: void function_08d5a0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_08d5a0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  function_08d810(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}
uint64_t * function_08d5c0(uint64_t *param_1,uint64_t *param_2,uint64_t param_3)
{
  int iVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  puVar2 = (uint64_t *)param_1[2];
  puVar4 = param_1;
  if ((uint64_t *)param_1[2] != (uint64_t *)0x0) {
    do {
      iVar1 = memcmp(puVar2 + 4,param_3,0x10);
      if (iVar1 < 0) {
        puVar3 = (uint64_t *)*puVar2;
      }
      else {
        puVar3 = (uint64_t *)puVar2[1];
        puVar4 = puVar2;
      }
      puVar2 = puVar3;
    } while (puVar3 != (uint64_t *)0x0);
    if ((puVar4 != param_1) && (iVar1 = memcmp(param_3,puVar4 + 4,0x10), -1 < iVar1)) {
      *param_2 = puVar4;
      return param_2;
    }
  }
  *param_2 = param_1;
  return param_2;
}
uint64_t * function_08d660(uint64_t *param_1,uint64_t param_2)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int iVar3;
  uint64_t *puVar4;
  int8_t astack_special_x_8 [8];
  puVar2 = (uint64_t *)param_1[2];
  puVar4 = param_1;
  while (puVar1 = puVar2, puVar1 != (uint64_t *)0x0) {
    iVar3 = memcmp(puVar1 + 4,param_2,0x10);
    if (iVar3 < 0) {
      puVar2 = (uint64_t *)*puVar1;
    }
    else {
      puVar2 = (uint64_t *)puVar1[1];
      puVar4 = puVar1;
    }
  }
  if ((puVar4 == param_1) || (iVar3 = memcmp(param_2,puVar4 + 4,0x10), iVar3 < 0)) {
    puVar4 = (uint64_t *)function_08da10(param_1,astack_special_x_8);
    puVar4 = (uint64_t *)*puVar4;
  }
  return puVar4 + 6;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_08d710(uint64_t *param_1,uint64_t param_2,uint64_t *param_3)
void function_08d710(uint64_t *param_1,uint64_t param_2,uint64_t *param_3)
{
  uint64_t uVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  bool bVar6;
  lVar3 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x28,*(int8_t *)(param_1 + 5));
  uVar1 = *param_3;
  bVar6 = true;
  *(uint64_t *)(lVar3 + 0x20) = uVar1;
  puVar4 = (uint64_t *)param_1[2];
  puVar2 = param_1;
  while (puVar4 != (uint64_t *)0x0) {
    bVar6 = uVar1 < (uint64_t)puVar4[4];
    puVar2 = puVar4;
    if (bVar6) {
      puVar4 = (uint64_t *)puVar4[1];
    }
    else {
      puVar4 = (uint64_t *)*puVar4;
    }
  }
  puVar4 = puVar2;
  if (bVar6) {
    if (puVar2 == (uint64_t *)param_1[1]) goto LAB_18008d7a0;
    puVar4 = (uint64_t *)SystemFunction_00018066b9a0(puVar2);
  }
  if (*(uint64_t *)(lVar3 + 0x20) <= (uint64_t)puVar4[4]) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar3);
  }
LAB_18008d7a0:
  if ((puVar2 == param_1) || (*(uint64_t *)(lVar3 + 0x20) < (uint64_t)puVar2[4])) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
// WARNING: Subroutine does not return
  SystemConfigProcessor(lVar3,puVar2,param_1,uVar5);
}
// 函数: void function_08d810(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_08d810(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  if (param_2 != (uint64_t *)0x0) {
    function_08d810(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
    > HighFreq_ParticleSystem1();
    RenderingSystem_CameraSystem(param_2 + 0xc,param_2[0xe]);
    > HighFreq_ParticleSystem1(param_2 + 6);
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(param_2);
  }
  return;
}
uint64_t *
function_08d8c0(int64_t *param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             uint64_t param_5)
{
  int64_t *plVar1;
  int iVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  bool bVar5;
  int64_t *plStackX_8;
  plVar3 = (int64_t *)*param_1;
  if ((param_4 == plVar3) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (iVar2 = memcmp(plVar3 + 4,param_5,0x10), param_4 = plVar3, iVar2 < 0))
    {
LAB_18008d951:
      uVar4 = 0;
      goto LAB_18008d954;
    }
  }
  else {
    plVar3 = (int64_t *)SystemFunction_00018066bd70(param_4);
    iVar2 = memcmp(param_4 + 4,param_5,0x10);
    if ((iVar2 < 0) && (iVar2 = memcmp(param_5,plVar3 + 4,0x10), iVar2 < 0)) {
      if (*param_4 == 0) goto LAB_18008d951;
      uVar4 = 1;
      param_4 = plVar3;
LAB_18008d954:
      if (param_4 != (int64_t *)0x0) {
        function_08dfa0(param_1,param_2,param_4,uVar4,param_5);
        return param_2;
      }
    }
  }
  bVar5 = true;
  plVar3 = (int64_t *)param_1[2];
  plVar1 = param_1;
  while (plVar3 != (int64_t *)0x0) {
    iVar2 = memcmp(param_5,plVar3 + 4,0x10);
    bVar5 = iVar2 < 0;
    plVar1 = plVar3;
    if (bVar5) {
      plVar3 = (int64_t *)plVar3[1];
    }
    else {
      plVar3 = (int64_t *)*plVar3;
    }
  }
  plVar3 = plVar1;
  if (bVar5) {
    if (plVar1 != (int64_t *)param_1[1]) {
      plVar3 = (int64_t *)SystemFunction_00018066b9a0(plVar1);
      goto LAB_18008d9c4;
    }
  }
  else {
LAB_18008d9c4:
    iVar2 = memcmp(plVar3 + 4,param_5,0x10);
    if (-1 < iVar2) goto LAB_18008d9f7;
  }
  function_08dfa0(param_1,&plStackX_8,plVar1,0,param_5);
  plVar3 = plStackX_8;
LAB_18008d9f7:
  *param_2 = plVar3;
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
function_08da10(int64_t *param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             int32_t *param_5)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int64_t *plVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t lVar7;
  uint64_t uVar8;
  bool bVar9;
  plVar6 = (int64_t *)*param_1;
  if ((param_4 == plVar6) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (iVar5 = memcmp(plVar6 + 4,param_5,0x10), param_4 = plVar6, iVar5 < 0))
    {
LAB_18008daa1:
      uVar8 = 0;
      goto LAB_18008daa4;
    }
  }
  else {
    plVar6 = (int64_t *)SystemFunction_00018066bd70(param_4);
    iVar5 = memcmp(param_4 + 4,param_5,0x10);
    if ((iVar5 < 0) && (iVar5 = memcmp(param_5,plVar6 + 4,0x10), iVar5 < 0)) {
      if (*param_4 == 0) goto LAB_18008daa1;
      uVar8 = 1;
      param_4 = plVar6;
LAB_18008daa4:
      if (param_4 != (int64_t *)0x0) {
        function_08e0f0(param_1,param_2,param_4,uVar8,param_5);
        return param_2;
      }
    }
  }
  bVar9 = true;
  plVar6 = (int64_t *)param_1[2];
  plVar4 = param_1;
  while (plVar6 != (int64_t *)0x0) {
    iVar5 = memcmp(param_5,plVar6 + 4,0x10);
    bVar9 = iVar5 < 0;
    plVar4 = plVar6;
    if (bVar9) {
      plVar6 = (int64_t *)plVar6[1];
    }
    else {
      plVar6 = (int64_t *)*plVar6;
    }
  }
  plVar6 = plVar4;
  if (bVar9) {
    if (plVar4 == (int64_t *)param_1[1]) goto label_08db2a;
    plVar6 = (int64_t *)SystemFunction_00018066b9a0(plVar4);
  }
  iVar5 = memcmp(plVar6 + 4,param_5,0x10);
  if (-1 < iVar5) {
    *param_2 = plVar6;
    return param_2;
  }
label_08db2a:
  if ((plVar4 == param_1) || (iVar5 = memcmp(param_5,plVar4 + 4,0x10), iVar5 < 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  lVar7 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x38,(char)param_1[5]);
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(int32_t *)(lVar7 + 0x20) = *param_5;
  *(int32_t *)(lVar7 + 0x24) = uVar1;
  *(int32_t *)(lVar7 + 0x28) = uVar2;
  *(int32_t *)(lVar7 + 0x2c) = uVar3;
  *(int32_t *)(lVar7 + 0x30) = 0;
// WARNING: Subroutine does not return
  SystemConfigProcessor(lVar7,plVar4,param_1,uVar8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_08db2a(int32_t param_1)
void function_08db2a(int32_t param_1)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int64_t lVar4;
  int64_t unaff_RBX;
  int32_t *unaff_RBP;
  int64_t unaff_RSI;
  if (unaff_RBX != unaff_RSI) {
    memcmp(param_1,unaff_RBX + 0x20,0x10);
  }
  lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x38,*(int8_t *)(unaff_RSI + 0x28));
  uVar1 = unaff_RBP[1];
  uVar2 = unaff_RBP[2];
  uVar3 = unaff_RBP[3];
  *(int32_t *)(lVar4 + 0x20) = *unaff_RBP;
  *(int32_t *)(lVar4 + 0x24) = uVar1;
  *(int32_t *)(lVar4 + 0x28) = uVar2;
  *(int32_t *)(lVar4 + 0x2c) = uVar3;
  *(int32_t *)(lVar4 + 0x30) = 0;
// WARNING: Subroutine does not return
  SystemConfigProcessor(lVar4);
}
// 函数: void function_08db97(void)
void function_08db97(void)
{
  uint64_t unaff_RDI;
  uint64_t *unaff_R14;
  *unaff_R14 = unaff_RDI;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_08dbb0(int64_t *param_1,uint64_t param_2)
void function_08dbb0(int64_t *param_1,uint64_t param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  lVar2 = param_1[1];
  if (param_2 <= (uint64_t)((param_1[2] - lVar2) / 0x30)) {
    if (param_2 != 0) {
// WARNING: Subroutine does not return
      memset(lVar2,0,param_2 * 0x30);
    }
    param_1[1] = lVar2;
    return;
  }
  lVar4 = *param_1;
  lVar1 = (lVar2 - lVar4) / 0x30;
  uVar3 = lVar1 * 2;
  if (lVar1 == 0) {
    uVar3 = 1;
  }
  if (uVar3 < lVar1 + param_2) {
    uVar3 = lVar1 + param_2;
  }
  if (uVar3 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar3 * 0x30,(char)param_1[3]);
    lVar4 = *param_1;
    lVar2 = param_1[1];
  }
  if (lVar4 != lVar2) {
// WARNING: Subroutine does not return
    memmove(lVar1,lVar4,lVar2 - lVar4);
  }
  if (param_2 != 0) {
// WARNING: Subroutine does not return
    memset(lVar1,0,param_2 * 0x30);
  }
  if (*param_1 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *param_1 = lVar1;
  param_1[2] = uVar3 * 0x30 + lVar1;
  param_1[1] = lVar1;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_08dbfb(void)
void function_08dbfb(void)
{
  int64_t in_RAX;
  int64_t lVar1;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t uVar2;
  int64_t *unaff_RDI;
  int64_t in_R9;
  lVar1 = SUB168(SEXT816(in_RAX) * SEXT816(unaff_RBP - in_R9),8);
  lVar1 = (lVar1 >> 3) - (lVar1 >> 0x3f);
  uVar2 = lVar1 * 2;
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  if (uVar2 < (uint64_t)(lVar1 + unaff_RBX)) {
    uVar2 = lVar1 + unaff_RBX;
  }
  if (uVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar2 * 0x30,(char)unaff_RDI[3]);
    in_R9 = *unaff_RDI;
    unaff_RBP = unaff_RDI[1];
  }
  if (in_R9 != unaff_RBP) {
// WARNING: Subroutine does not return
    memmove(lVar1,in_R9,unaff_RBP - in_R9);
  }
  if (unaff_RBX != 0) {
// WARNING: Subroutine does not return
    memset(lVar1,0,unaff_RBX * 0x30);
  }
  if (*unaff_RDI != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *unaff_RDI = lVar1;
  unaff_RDI[2] = uVar2 * 0x30 + lVar1;
  unaff_RDI[1] = lVar1;
  return;
}
// 函数: void function_08dcf9(void)
void function_08dcf9(void)
{
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t unaff_RDI;
  if (unaff_RBX != 0) {
// WARNING: Subroutine does not return
    memset();
  }
  *(uint64_t *)(unaff_RDI + 8) = unaff_RBP;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_08dd40(int64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void function_08dd40(int64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int8_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  void *puVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  int64_t lStackX_18;
  uint64_t uVar10;
  uVar10 = 0xfffffffffffffffe;
  puVar8 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
  lStackX_18 = ((int64_t)puVar8 - (int64_t)puVar4) / 0x60;
  puVar1 = (uint64_t *)0x0;
  if (lStackX_18 == 0) {
    lStackX_18 = 1;
  }
  else {
    lStackX_18 = lStackX_18 * 2;
    if (lStackX_18 == 0) goto LAB_18008dde0;
  }
  puVar1 = (uint64_t *)
           CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lStackX_18 * 0x60,(char)param_1[3],param_4,
                         0xfffffffffffffffe);
  puVar8 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
LAB_18008dde0:
  puVar5 = puVar1;
  if (puVar4 != puVar8) {
    lVar9 = (int64_t)puVar1 - (int64_t)puVar4;
    puVar4 = puVar4 + 1;
    do {
      *puVar5 = &system_state_ptr;
      *(uint64_t *)(lVar9 + (int64_t)puVar4) = 0;
      *(int32_t *)(lVar9 + 8 + (int64_t)puVar4) = 0;
      *puVar5 = &system_data_buffer_ptr;
      *(uint64_t *)(lVar9 + 0x10 + (int64_t)puVar4) = 0;
      *(uint64_t *)(lVar9 + (int64_t)puVar4) = 0;
      *(int32_t *)(lVar9 + 8 + (int64_t)puVar4) = 0;
      *(int32_t *)(lVar9 + 8 + (int64_t)puVar4) = *(int32_t *)(puVar4 + 1);
      *(uint64_t *)(lVar9 + (int64_t)puVar4) = *puVar4;
      *(int32_t *)(lVar9 + 0x14 + (int64_t)puVar4) = *(int32_t *)((int64_t)puVar4 + 0x14);
      *(int32_t *)(lVar9 + 0x10 + (int64_t)puVar4) = *(int32_t *)(puVar4 + 2);
      *(int32_t *)(puVar4 + 1) = 0;
      *puVar4 = 0;
      puVar4[2] = 0;
      puVar2 = (uint64_t *)((int64_t)puVar4 + lVar9 + 0x18);
      *puVar2 = &system_state_ptr;
      *(uint64_t *)(lVar9 + 0x20 + (int64_t)puVar4) = 0;
      *(int32_t *)(lVar9 + 0x28 + (int64_t)puVar4) = 0;
      *puVar2 = &processed_var_672_ptr;
      puVar3 = (int8_t *)((int64_t)puVar4 + lVar9 + 0x30);
      *(int8_t **)(lVar9 + 0x20 + (int64_t)puVar4) = puVar3;
      *(int32_t *)(lVar9 + 0x28 + (int64_t)puVar4) = 0;
      *puVar3 = 0;
      *(int32_t *)(lVar9 + 0x28 + (int64_t)puVar4) = *(int32_t *)(puVar4 + 5);
      puVar7 = &system_buffer_ptr;
      if ((void *)puVar4[4] != (void *)0x0) {
        puVar7 = (void *)puVar4[4];
      }
      strcpy_s(*(uint64_t *)(lVar9 + 0x20 + (int64_t)puVar4),0x20,puVar7,param_4,uVar10,puVar2);
      *(int8_t *)(lVar9 + 0x50 + (int64_t)puVar4) = *(int8_t *)(puVar4 + 10);
      *(int32_t *)(lVar9 + 0x54 + (int64_t)puVar4) = *(int32_t *)((int64_t)puVar4 + 0x54);
      puVar5 = puVar5 + 0xc;
      puVar2 = puVar4 + 0xb;
      puVar4 = puVar4 + 0xc;
    } while (puVar2 != puVar8);
  }
  CoreEngineDataTransformer(puVar5,param_2);
  function_04b640(puVar5 + 4,param_2 + 0x20);
  *(int8_t *)(puVar5 + 0xb) = *(int8_t *)(param_2 + 0x58);
  *(int32_t *)((int64_t)puVar5 + 0x5c) = *(int32_t *)(param_2 + 0x5c);
  lVar9 = param_1[1];
  lVar6 = *param_1;
  if (lVar6 != lVar9) {
    do {
      function_089640(lVar6);
      lVar6 = lVar6 + 0x60;
    } while (lVar6 != lVar9);
    lVar6 = *param_1;
  }
  if (lVar6 == 0) {
    *param_1 = (int64_t)puVar1;
    param_1[1] = (int64_t)(puVar5 + 0xc);
    param_1[2] = (int64_t)(puVar1 + lStackX_18 * 0xc);
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(lVar6);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_08dfa0(int64_t param_1,uint64_t param_2,int64_t param_3,char param_4,
void function_08dfa0(int64_t param_1,uint64_t param_2,int64_t param_3,char param_4,
                  int32_t *param_5)
{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  if ((param_4 == '\0') && (param_3 != param_1)) {
    memcmp(param_5,param_3 + 0x20,0x10,0,0xfffffffffffffffe);
  }
  lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0xc0,*(int8_t *)(param_1 + 0x28));
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *(int32_t *)(lVar1 + 0x20) = *param_5;
  *(int32_t *)(lVar1 + 0x24) = uVar2;
  *(int32_t *)(lVar1 + 0x28) = uVar3;
  *(int32_t *)(lVar1 + 0x2c) = uVar4;
// WARNING: Subroutine does not return
  memset(lVar1 + 0x30,0,0x90);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_08e0f0(int64_t param_1,uint64_t param_2,int64_t param_3,char param_4,
void function_08e0f0(int64_t param_1,uint64_t param_2,int64_t param_3,char param_4,
                  int32_t *param_5)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  int64_t lVar5;
  int32_t uVar6;
  if ((param_4 == '\0') && (param_3 != param_1)) {
    iVar4 = memcmp(param_5,param_3 + 0x20,0x10);
    if (-1 < iVar4) {
      uVar6 = 1;
      goto LAB_18008e13f;
    }
  }
  uVar6 = 0;
LAB_18008e13f:
  lVar5 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x38,*(int8_t *)(param_1 + 0x28));
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(int32_t *)(lVar5 + 0x20) = *param_5;
  *(int32_t *)(lVar5 + 0x24) = uVar1;
  *(int32_t *)(lVar5 + 0x28) = uVar2;
  *(int32_t *)(lVar5 + 0x2c) = uVar3;
  *(int32_t *)(lVar5 + 0x30) = 0;
// WARNING: Subroutine does not return
  SystemConfigProcessor(lVar5,param_3,param_1,uVar6);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_08e1a0(int64_t *param_1,uint64_t *param_2,int64_t *param_3,int64_t *param_4)
void function_08e1a0(int64_t *param_1,uint64_t *param_2,int64_t *param_3,int64_t *param_4)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  int32_t *puVar11;
  int32_t *puVar12;
  uint64_t uVar13;
  int32_t *puVar14;
  int32_t *puVar15;
  int64_t lStackX_10;
  int64_t alStackX_18 [2];
  lVar5 = *param_3;
  lVar6 = *param_4;
  if (lVar5 != lVar6) {
    puVar14 = (int32_t *)0x0;
    puVar15 = puVar14;
    while (lVar5 != lVar6) {
      lVar5 = SystemFunction_00018066bd70(lVar5);
      puVar15 = (int32_t *)((int64_t)puVar15 + 1);
    }
    puVar11 = (int32_t *)param_1[1];
    if ((int32_t *)(param_1[2] - (int64_t)puVar11 >> 4) < puVar15) {
      puVar9 = (uint64_t *)*param_1;
      lVar5 = (int64_t)puVar11 - (int64_t)puVar9 >> 4;
      uVar13 = lVar5 * 2;
      if (lVar5 == 0) {
        uVar13 = 1;
      }
      if (uVar13 <= (uint64_t)((int64_t)puVar15 + lVar5)) {
        uVar13 = (int64_t)puVar15 + lVar5;
      }
      puVar15 = puVar14;
      if (uVar13 != 0) {
        puVar14 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar13 << 4,(char)param_1[3]);
        puVar9 = (uint64_t *)*param_1;
        puVar15 = puVar14;
      }
      for (; puVar9 != param_2; puVar9 = puVar9 + 2) {
        uVar1 = *(int32_t *)((int64_t)puVar9 + 4);
        uVar2 = *(int32_t *)(puVar9 + 1);
        uVar3 = *(int32_t *)((int64_t)puVar9 + 0xc);
        *puVar14 = *(int32_t *)puVar9;
        puVar14[1] = uVar1;
        puVar14[2] = uVar2;
        puVar14[3] = uVar3;
        puVar14 = puVar14 + 4;
      }
      lStackX_10 = *param_4;
      alStackX_18[0] = *param_3;
      puVar14 = (int32_t *)function_08eaf0(alStackX_18,&lStackX_10);
      puVar9 = (uint64_t *)param_1[1];
      if (param_2 != puVar9) {
        do {
          uVar1 = *(int32_t *)param_2;
          uVar2 = *(int32_t *)((int64_t)param_2 + 4);
          uVar3 = *(int32_t *)(param_2 + 1);
          uVar4 = *(int32_t *)((int64_t)param_2 + 0xc);
          param_2 = param_2 + 2;
          *puVar14 = uVar1;
          puVar14[1] = uVar2;
          puVar14[2] = uVar3;
          puVar14[3] = uVar4;
          puVar14 = puVar14 + 4;
        } while (param_2 != puVar9);
      }
      if (*param_1 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *param_1 = (int64_t)puVar15;
      param_1[2] = (int64_t)(puVar15 + uVar13 * 4);
      param_1[1] = (int64_t)puVar14;
    }
    else {
      puVar14 = (int32_t *)((int64_t)puVar11 - (int64_t)param_2 >> 4);
      if (puVar15 < puVar14) {
        puVar12 = puVar11 + (int64_t)puVar15 * -4;
        puVar14 = puVar11;
        if (puVar12 != puVar11) {
          do {
            uVar1 = *puVar12;
            uVar2 = puVar12[1];
            uVar3 = puVar12[2];
            uVar4 = puVar12[3];
            puVar12 = puVar12 + 4;
            *puVar14 = uVar1;
            puVar14[1] = uVar2;
            puVar14[2] = uVar3;
            puVar14[3] = uVar4;
            puVar14 = puVar14 + 4;
          } while (puVar12 != puVar11);
          puVar11 = (int32_t *)param_1[1];
        }
        puVar14 = puVar11 + (int64_t)puVar15 * -4;
        for (lVar5 = (int64_t)(puVar11 + (int64_t)puVar15 * -4) - (int64_t)param_2 >> 4;
            0 < lVar5; lVar5 = lVar5 + -1) {
          puVar11 = puVar14 + -4;
          *(uint64_t *)(puVar11 + (int64_t)puVar15 * 4) = *(uint64_t *)(puVar14 + -4);
          puVar11[(int64_t)puVar15 * 4 + 2] = puVar14[-2];
          puVar14 = puVar11;
        }
        lVar5 = *param_4;
        lVar6 = *param_3;
        if (lVar6 != lVar5) {
          do {
            *param_2 = *(uint64_t *)(lVar6 + 0x20);
            *(int32_t *)(param_2 + 1) = *(int32_t *)(lVar6 + 0x28);
            lVar6 = SystemFunction_00018066bd70(lVar6);
            param_2 = param_2 + 2;
          } while (lVar6 != lVar5);
          param_1[1] = param_1[1] + (int64_t)puVar15 * 0x10;
          return;
        }
      }
      else {
        lVar5 = *param_3;
        puVar12 = puVar14;
        if (puVar14 != (int32_t *)0x0) {
          do {
            lVar5 = SystemFunction_00018066bd70(lVar5);
            puVar12 = (int32_t *)((int64_t)puVar12 + -1);
          } while (puVar12 != (int32_t *)0x0);
          puVar11 = (int32_t *)param_1[1];
        }
        lStackX_10 = *param_4;
        alStackX_18[0] = lVar5;
        function_08eaf0(alStackX_18,&lStackX_10,puVar11);
        puVar9 = (uint64_t *)param_1[1];
        puVar10 = puVar9 + ((int64_t)puVar15 - (int64_t)puVar14) * 2;
        puVar7 = param_2;
        if (param_2 != puVar9) {
          do {
            uVar1 = *(int32_t *)((int64_t)puVar7 + 4);
            uVar2 = *(int32_t *)(puVar7 + 1);
            uVar3 = *(int32_t *)((int64_t)puVar7 + 0xc);
            puVar8 = puVar7 + 2;
            *(int32_t *)puVar10 = *(int32_t *)puVar7;
            *(int32_t *)((int64_t)puVar10 + 4) = uVar1;
            *(int32_t *)(puVar10 + 1) = uVar2;
            *(int32_t *)((int64_t)puVar10 + 0xc) = uVar3;
            puVar7 = puVar8;
            puVar10 = puVar10 + 2;
          } while (puVar8 != puVar9);
        }
        lVar6 = *param_3;
        puVar9 = param_2 + (int64_t)puVar14 * 2;
        while (lVar6 != lVar5) {
          lVar5 = SystemFunction_00018066b9a0(lVar5);
          puVar9[-2] = *(uint64_t *)(lVar5 + 0x20);
          *(int32_t *)(puVar9 + -1) = *(int32_t *)(lVar5 + 0x28);
          puVar9 = puVar9 + -2;
        }
      }
      param_1[1] = param_1[1] + (int64_t)puVar15 * 0x10;
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address