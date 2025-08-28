#include "CoreSystem_ValidationEngine0_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 01_initialization_part057.c - 7 个函数
// 函数: void GenericFunction_18007b1a0(int64_t *param_1)
void GenericFunction_18007b1a0(int64_t *param_1)
{
  int64_t *plVar1;
  for (plVar1 = (int64_t *)*param_1; plVar1 != (int64_t *)param_1[1]; plVar1 = plVar1 + 4) {
    if (*plVar1 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  if (*param_1 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// 函数: void GenericFunction_18007b1c0(int64_t *param_1)
void GenericFunction_18007b1c0(int64_t *param_1)
{
  int64_t *plVar1;
  for (plVar1 = (int64_t *)*param_1; plVar1 != (int64_t *)param_1[1]; plVar1 = plVar1 + 4) {
    if (*plVar1 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  if (*param_1 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
int8_t GenericFunction_18007b1e0(int64_t param_1)
{
  char cVar1;
  int64_t lVar2;
  lVar2 = *(int64_t *)(param_1 + 0x1b8);
  cVar1 = *(char *)(lVar2 + 0x38c);
  if (cVar1 == '\t') {
    cVar1 = Function_59f5000a();
    *(char *)(lVar2 + 0x38c) = cVar1;
  }
  cVar1 = GenericFunction_18007b240(param_1,param_1 + 0x1e8,cVar1);
  if (cVar1 == '\0') {
    *(byte *)(param_1 + 0xfe) = *(byte *)(param_1 + 0xfe) & 0xfb;
    return 0;
  }
  return 1;
}
// WARNING: Removing unreachable block (ram,0x00018007b857)
// WARNING: Removing unreachable block (ram,0x00018007b868)
// WARNING: Removing unreachable block (ram,0x00018007b879)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t GenericFunction_18007b240(int64_t param_1,int64_t *param_2,byte param_3,char param_4)
{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  int32_t uVar13;
  int64_t *plVar14;
  bool bVar15;
  int64_t *plStack_f0;
  int64_t *plStack_e8;
  int64_t *plStack_e0;
  int64_t *plStack_d8;
  int64_t *plStack_d0;
  int64_t *plStack_c8;
  int64_t *plStack_c0;
  int64_t *plStack_b8;
  int8_t stack_array_b0 [8];
  int64_t lStack_a8;
  int32_t local_var_a0;
  int64_t *plStack_98;
  int64_t lStack_90;
  int32_t local_var_88;
  int64_t *aplStack_78 [2];
  code *pcStack_68;
  void *plocal_var_60;
  uint64_t local_var_58;
  int64_t *plStack_50;
  int64_t *plStack_48;
  int64_t *plStack_40;
  local_var_58 = 0xfffffffffffffffe;
  while ((lVar6 = param_1, (*(byte *)(param_1 + 0xfd) & 0x20) == 0 &&
         (lVar6 = Function_4c4a6726(*(uint64_t *)(param_1 + 0x1b0)), lVar6 != param_1))) {
    if ((param_4 != '\0') ||
       (pbVar1 = (byte *)(param_1 + 0x100), param_1 = lVar6, (*pbVar1 & 8) != 0)) {
      param_4 = '\x01';
      param_1 = lVar6;
    }
  }
  if ((*(byte *)(param_1 + 0x100) & 8) != 0) {
    param_4 = '\x01';
  }
  GenericFunction_18007baa0(param_1);
  plVar14 = (int64_t *)(*(int64_t *)(lVar6 + 0x1e0) + (uint64_t)param_3 * 0x18);
  if ((int64_t *)*param_2 != plVar14) {
    if ((int64_t *)*param_2 != (int64_t *)0x0) {
      GenericFunction_180080060();
    }
    *param_2 = (int64_t)plVar14;
    if (plVar14 != (int64_t *)0x0) {
      LOCK();
      *(int *)(plVar14 + 2) = (int)plVar14[2] + 1;
      UNLOCK();
    }
    if (param_2[1] != 0) {
      pbVar1 = (byte *)(param_2[1] + 0xfe);
      *pbVar1 = *pbVar1 & 0xfb;
    }
  }
  LOCK();
  bVar15 = *(char *)((int64_t)plVar14 + 0x15) == '\0';
  if (bVar15) {
    *(char *)((int64_t)plVar14 + 0x15) = '\x01';
  }
  UNLOCK();
  if (!bVar15) goto LAB_18007b8fd;
  lVar6 = param_1;
  if ((*(byte *)(param_1 + 0xfd) & 0x20) == 0) {
    lVar6 = Function_4c4a6726(*(uint64_t *)(param_1 + 0x1b0));
  }
  if (*(int *)(lVar6 + 0x200) < 1) {
    LOCK();
    if (*(char *)((int64_t)plVar14 + 0x15) == '\x01') {
      *(char *)((int64_t)plVar14 + 0x15) = '\x03';
    }
    UNLOCK();
    goto LAB_18007b8fd;
  }
  if (*plVar14 == 0) {
    puVar7 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,0x20);
    *puVar7 = &system_handler1_ptr;
    *puVar7 = &system_handler2_ptr;
    *(int32_t *)(puVar7 + 1) = 0;
    *puVar7 = &processed_var_7064_ptr;
    LOCK();
    *(int8_t *)(puVar7 + 2) = 0;
    UNLOCK();
    LOCK();
    *(int32_t *)((int64_t)puVar7 + 0x14) = 0;
    UNLOCK();
    puVar7[3] = 0;
    puVar7[4] = param_1;
    SystemCore_PointerManager(plVar14);
  }
  if (plVar14[1] == 0) {
    puVar7 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,0x20);
    *puVar7 = &system_handler1_ptr;
    *puVar7 = &system_handler2_ptr;
    *(int32_t *)(puVar7 + 1) = 0;
    *puVar7 = &processed_var_6960_ptr;
    LOCK();
    *(int32_t *)(puVar7 + 2) = 0;
    UNLOCK();
    puVar7[3] = 0;
    SystemCore_PointerManager(plVar14 + 1);
  }
  local_var_88 = 1;
  lStack_90 = param_1;
  CoreEngine_07F770(&lStack_90);
  lVar6 = *(int64_t *)(param_1 + 0x210);
  if (lVar6 == 0) {
LAB_18007b44a:
    if (*(int64_t *)(param_1 + 0xa8) == 0) {
LAB_18007b454:
      LOCK();
      *(int8_t *)((int64_t)plVar14 + 0x15) = 4;
      UNLOCK();
      uVar8 = SystemManager_Validator(&lStack_90);
      return uVar8 & 0xffffffffffffff00;
    }
  }
  else {
    if (*(int *)(lVar6 + 0x60) == 0) goto LAB_18007b454;
    if (lVar6 == 0) goto LAB_18007b44a;
  }
  uVar9 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xa0,8,0x20);
  plVar10 = (int64_t *)GenericFunction_1800842a0(uVar9);
  plStack_50 = plVar10;
  if (plVar10 != (int64_t *)0x0) {
    (**(code **)(*plVar10 + 0x28))(plVar10);
  }
  lVar6 = param_1;
  if ((*(byte *)(param_1 + 0xfd) & 0x20) == 0) {
    lVar6 = Function_4c4a6726(*(uint64_t *)(param_1 + 0x1b0));
  }
  *(int32_t *)(plVar10 + 2) = *(int32_t *)(lVar6 + 0x200);
  *(byte *)(plVar10 + 0x13) =
       *(byte *)(plVar10 + 0x13) ^ (*(byte *)(param_1 + 0xfe) >> 1 ^ *(byte *)(plVar10 + 0x13)) & 1;
  *(byte *)((int64_t)plVar10 + 0x14) = param_3;
  cVar2 = *(char *)(param_1 + 0xfa);
  *(char *)((int64_t)plVar10 + 0x15) = cVar2;
  if (cVar2 == '\x01') {
    param_4 = '\x01';
  }
  plVar11 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x30,8,0x20);
  *plVar11 = (int64_t)&system_handler1_ptr;
  *plVar11 = (int64_t)&system_handler2_ptr;
  *(int32_t *)(plVar11 + 1) = 0;
  *plVar11 = (int64_t)&processed_var_6752_ptr;
  plVar11[4] = 0;
  plVar11[2] = 0;
  *(byte *)(plVar11 + 5) = *(byte *)(plVar11 + 5) | 1;
  plStack_48 = plVar11;
  (**(code **)(*plVar11 + 0x28))(plVar11);
  bVar5 = *(byte *)(param_1 + 0xfd) & 0x20;
  lVar6 = param_1;
  if (bVar5 == 0) {
    lVar6 = Function_4c4a6726(*(uint64_t *)(param_1 + 0x1b0));
  }
  iVar3 = *(int *)(lVar6 + 0x200);
  lVar6 = param_1;
  if (bVar5 == 0) {
    lVar6 = Function_4c4a6726(*(uint64_t *)(param_1 + 0x1b0));
  }
  iVar4 = *(int *)(lVar6 + 0x1fc);
  uVar13 = 2;
  if (0xffff < iVar3) {
    uVar13 = 4;
  }
  *(byte *)(plVar11 + 5) =
       *(byte *)(plVar11 + 5) ^ (*(byte *)(param_1 + 0xfe) >> 1 ^ *(byte *)(plVar11 + 5)) & 1;
  *(int32_t *)((int64_t)plVar11 + 0x14) = uVar13;
  *(int *)(plVar11 + 2) = iVar4 * 3;
  *(int8_t *)(plVar11 + 3) = *(int8_t *)(param_1 + 0xfa);
  if ((*(int64_t *)(param_1 + 0xa8) == 0) || (*(int64_t *)(param_1 + 0x210) != 0)) {
    if (param_4 == '\0') {
      uVar9 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
      (**(code **)(*plVar10 + 0x28))(plVar10);
      (**(code **)(*plVar11 + 0x28))(plVar11);
      pcStack_68 = GenericFunction_180083390;
      plocal_var_60 = &processed_var_8416_ptr;
      plStack_b8 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,system_allocation_flags);
      *plStack_b8 = param_1;
      *(byte *)(plStack_b8 + 1) = param_3;
      plStack_b8[2] = (int64_t)plVar10;
      plStack_b8[3] = (int64_t)plVar11;
      aplStack_78[0] = plStack_b8;
      plVar12 = (int64_t *)SystemCore_ErrorHandler(uVar9,aplStack_78);
      plStack_c0 = plVar12;
      plStack_40 = plVar12;
      uVar9 = system_context_ptr;
      if (plVar12 != (int64_t *)0x0) {
        (**(code **)(*plVar12 + 0x28))(plVar12);
        uVar9 = system_context_ptr;
        (**(code **)(*plVar12 + 0x28))(plVar12);
      }
      GenericFunction_18005e450(uVar9,&plStack_c0);
      if (plVar12 != (int64_t *)0x0) {
        lVar6 = *plVar12;
LAB_18007b8dc:
        (**(code **)(lVar6 + 0x38))(plVar12);
      }
    }
    else {
      plStack_e0 = plVar11;
      (**(code **)(*plVar11 + 0x28))(plVar11);
      plStack_d8 = plVar10;
      (**(code **)(*plVar10 + 0x28))(plVar10);
      GenericFunction_18007e080(param_1,param_3,&plStack_d8,&plStack_e0);
      plStack_d0 = plVar11;
      (**(code **)(*plVar11 + 0x28))(plVar11);
      plStack_c8 = plVar10;
      (**(code **)(*plVar10 + 0x28))(plVar10);
      GenericFunction_18007c8e0(param_1,param_3,&plStack_c8,&plStack_d0);
      SystemManager_Validator(&lStack_90);
      if (*(char *)(param_1 + 0xf4) == '\x01') {
        plStack_b8 = (int64_t *)0x0;
        plStack_98 = (int64_t *)0x0;
        stack_array_b0[0] = 0;
        local_var_a0 = 3;
        lStack_a8 = param_1;
        CoreEngine_07F4C0(stack_array_b0);
        plVar12 = plStack_98;
        plStack_98 = (int64_t *)0x0;
        if (plVar12 != (int64_t *)0x0) {
          (**(code **)(*plVar12 + 0x38))();
        }
        SystemSecurityManager(stack_array_b0);
        if (plStack_98 != (int64_t *)0x0) {
          lVar6 = *plStack_98;
          plVar12 = plStack_98;
          goto LAB_18007b8dc;
        }
      }
    }
  }
  else {
    plStack_f0 = plVar10;
    (**(code **)(*plVar10 + 0x28))(plVar10);
    plStack_e8 = plVar11;
    (**(code **)(*plVar11 + 0x28))(plVar11);
    GenericFunction_18007c490(param_1,param_3,&plStack_e8,&plStack_f0,param_4);
  }
  (**(code **)(*plVar11 + 0x38))(plVar11);
  (**(code **)(*plVar10 + 0x38))(plVar10);
  SystemManager_Validator(&lStack_90);
LAB_18007b8fd:
  return (uint64_t)((byte)(*(char *)((int64_t)plVar14 + 0x15) - 2U) < 2);
}
// 函数: void GenericFunction_18007b930(int64_t *param_1)
void GenericFunction_18007b930(int64_t *param_1)
{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  int64_t **pplStackX_18;
  int64_t **pplStackX_20;
  uint64_t uVar3;
  int8_t stack_array_40 [8];
  int64_t lStack_38;
  int32_t local_var_30;
  int64_t *plStack_28;
  uVar3 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  pplStackX_18 = &plStackX_8;
  plStackX_8 = (int64_t *)param_1[3];
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_20 = &plStackX_10;
  plStackX_10 = (int64_t *)param_1[2];
  if (plStackX_10 != (int64_t *)0x0) {
    (**(code **)(*plStackX_10 + 0x28))();
  }
  GenericFunction_18007e080(lVar1,(char)param_1[1],&plStackX_10,&plStackX_8,uVar3);
  lVar1 = *param_1;
  pplStackX_18 = &plStackX_8;
  plStackX_8 = (int64_t *)param_1[3];
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_20 = &plStackX_10;
  plStackX_10 = (int64_t *)param_1[2];
  if (plStackX_10 != (int64_t *)0x0) {
    (**(code **)(*plStackX_10 + 0x28))();
  }
  GenericFunction_18007c8e0(lVar1,(char)param_1[1],&plStackX_10,&plStackX_8);
  lStack_38 = *param_1;
  if (*(char *)(lStack_38 + 0xf4) == '\x01') {
    plStackX_8 = (int64_t *)0x0;
    plStack_28 = (int64_t *)0x0;
    stack_array_40[0] = 0;
    local_var_30 = 3;
    CoreEngine_07F4C0(stack_array_40);
    plVar2 = plStack_28;
    plStackX_10 = plStack_28;
    plStack_28 = (int64_t *)0x0;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    SystemSecurityManager(stack_array_40);
    if (plStack_28 != (int64_t *)0x0) {
      (**(code **)(*plStack_28 + 0x38))();
    }
  }
  return;
}
// 函数: void GenericFunction_18007ba60(int64_t param_1)
void GenericFunction_18007ba60(int64_t param_1)
{
  if (*(int64_t **)(param_1 + 0x18) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x18) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x10) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x10) + 0x38))();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_18007baa0(int64_t param_1)
void GenericFunction_18007baa0(int64_t param_1)
{
  uint64_t uVar1;
  if (*(int64_t *)(param_1 + 0x1e0) == 0) {
    uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x180,8,0x1c);
// WARNING: Subroutine does not return
    memset(uVar1,0,0x180);
  }
  return;
}
// 函数: void GenericFunction_18007bb70(int64_t *param_1)
void GenericFunction_18007bb70(int64_t *param_1)
{
  if ((int64_t *)param_1[1] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[1] + 0x38))();
  }
  if ((int64_t *)*param_1 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_1 + 0x38))();
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x00018007c17d)
// WARNING: Removing unreachable block (ram,0x00018007c188)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_18007bbb0(int64_t param_1,int64_t param_2,int64_t param_3)
void GenericFunction_18007bbb0(int64_t param_1,int64_t param_2,int64_t param_3)
{
  int iVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t *plVar8;
  uint64_t *puVar9;
  uint *puVar10;
  uint uVar11;
  void *puVar12;
  uint uVar13;
  uint uVar14;
  uint64_t uVar15;
  uint uVar16;
  uint uVar17;
  int8_t stack_array_68 [32];
  uint64_t local_var_48;
  int64_t *plStack_40;
  uint64_t local_var_38;
  int64_t *plStack_30;
  int64_t lStack_28;
  uint64_t local_var_20;
  local_var_48 = 0xfffffffffffffffe;
  local_var_20 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_68;
  if ((param_2 == 0) ||
     (((*(float *)(param_1 + 0x238) == *(float *)(param_2 + 0x44) &&
       (*(float *)(param_1 + 0x23c) == *(float *)(param_2 + 0x48))) &&
      (*(float *)(param_1 + 0x240) == *(float *)(param_2 + 0x4c))))) {
    uVar5 = *(uint64_t *)(param_3 + 0x4c);
    *(uint64_t *)(param_1 + 0x238) = *(uint64_t *)(param_3 + 0x44);
    *(uint64_t *)(param_1 + 0x240) = uVar5;
  }
  if ((param_2 == 0) ||
     (((*(float *)(param_1 + 0x248) == *(float *)(param_2 + 0x54) &&
       (*(float *)(param_1 + 0x24c) == *(float *)(param_2 + 0x58))) &&
      (*(float *)(param_1 + 0x250) == *(float *)(param_2 + 0x5c))))) {
    uVar5 = *(uint64_t *)(param_3 + 0x5c);
    *(uint64_t *)(param_1 + 0x248) = *(uint64_t *)(param_3 + 0x54);
    *(uint64_t *)(param_1 + 0x250) = uVar5;
  }
  if ((param_2 == 0) ||
     (((*(float *)(param_1 + 0x2a8) == *(float *)(param_2 + 100) &&
       (*(float *)(param_1 + 0x2ac) == *(float *)(param_2 + 0x68))) &&
      (*(float *)(param_1 + 0x2b0) == *(float *)(param_2 + 0x6c))))) {
    uVar5 = *(uint64_t *)(param_3 + 0x6c);
    *(uint64_t *)(param_1 + 0x2a8) = *(uint64_t *)(param_3 + 100);
    *(uint64_t *)(param_1 + 0x2b0) = uVar5;
  }
  if ((param_2 == 0) ||
     (((*(float *)(param_1 + 0x2b8) == *(float *)(param_2 + 0x74) &&
       (*(float *)(param_1 + 700) == *(float *)(param_2 + 0x78))) &&
      (*(float *)(param_1 + 0x2c0) == *(float *)(param_2 + 0x7c))))) {
    uVar5 = *(uint64_t *)(param_3 + 0x7c);
    *(uint64_t *)(param_1 + 0x2b8) = *(uint64_t *)(param_3 + 0x74);
    *(uint64_t *)(param_1 + 0x2c0) = uVar5;
  }
  if (param_2 == 0) {
    *(int32_t *)(param_1 + 0x100) = *(int32_t *)(param_3 + 0x30);
  }
  else {
    uVar17 = 1;
    uVar11 = 2;
    do {
      puVar10 = (uint *)(param_1 + 0x100);
      uVar16 = *(uint *)(param_2 + 0x30);
      uVar14 = *(uint *)(param_3 + 0x30);
      if ((uVar17 & uVar16) != (uVar17 & uVar14)) {
        if ((uVar17 & uVar14) == 0) {
          uVar16 = *(uint *)(param_1 + 0x100) & ~(1 << (uVar11 - 2 & 0x1f));
        }
        else {
          uVar16 = *puVar10 | 1 << (uVar11 - 2 & 0x1f);
        }
        *puVar10 = uVar16;
        uVar16 = *(uint *)(param_2 + 0x30);
        uVar14 = *(uint *)(param_3 + 0x30);
      }
      uVar13 = uVar17 << 1 & uVar14;
      if ((uVar17 << 1 & uVar16) != uVar13) {
        if (uVar13 == 0) {
          uVar16 = *puVar10 & ~(1 << (uVar11 - 1 & 0x1f));
        }
        else {
          uVar16 = *(uint *)(param_1 + 0x100) | 1 << (uVar11 - 1 & 0x1f);
        }
        *(uint *)(param_1 + 0x100) = uVar16;
        uVar16 = *(uint *)(param_2 + 0x30);
        uVar14 = *(uint *)(param_3 + 0x30);
      }
      uVar13 = uVar17 << 2 & uVar14;
      if ((uVar17 << 2 & uVar16) != uVar13) {
        if (uVar13 == 0) {
          uVar16 = *puVar10 & ~(1 << (uVar11 & 0x1f));
        }
        else {
          uVar16 = *(uint *)(param_1 + 0x100) | 1 << (uVar11 & 0x1f);
        }
        *(uint *)(param_1 + 0x100) = uVar16;
        uVar16 = *(uint *)(param_2 + 0x30);
        uVar14 = *(uint *)(param_3 + 0x30);
      }
      uVar13 = uVar17 << 3 & uVar14;
      if ((uVar17 << 3 & uVar16) != uVar13) {
        if (uVar13 == 0) {
          uVar16 = *puVar10 & ~(1 << (uVar11 + 1 & 0x1f));
        }
        else {
          uVar16 = *(uint *)(param_1 + 0x100) | 1 << (uVar11 + 1 & 0x1f);
        }
        *(uint *)(param_1 + 0x100) = uVar16;
        uVar16 = *(uint *)(param_2 + 0x30);
        uVar14 = *(uint *)(param_3 + 0x30);
      }
      uVar13 = uVar17 << 4 & uVar14;
      if ((uVar17 << 4 & uVar16) != uVar13) {
        if (uVar13 == 0) {
          uVar16 = *puVar10 & ~(1 << (uVar11 + 2 & 0x1f));
        }
        else {
          uVar16 = *(uint *)(param_1 + 0x100) | 1 << (uVar11 + 2 & 0x1f);
        }
        *(uint *)(param_1 + 0x100) = uVar16;
        uVar16 = *(uint *)(param_2 + 0x30);
        uVar14 = *(uint *)(param_3 + 0x30);
      }
      uVar13 = uVar17 << 5 & uVar14;
      if ((uVar17 << 5 & uVar16) != uVar13) {
        if (uVar13 == 0) {
          *puVar10 = *puVar10 & ~(1 << (uVar11 + 3 & 0x1f));
          uVar16 = *(uint *)(param_2 + 0x30);
          uVar14 = *(uint *)(param_3 + 0x30);
        }
        else {
          *(uint *)(param_1 + 0x100) = *(uint *)(param_1 + 0x100) | 1 << (uVar11 + 3 & 0x1f);
          uVar16 = *(uint *)(param_2 + 0x30);
          uVar14 = *(uint *)(param_3 + 0x30);
        }
      }
      puVar10 = (uint *)(param_1 + 0x100);
      uVar13 = uVar17 << 6 & uVar14;
      if ((uVar17 << 6 & uVar16) != uVar13) {
        if (uVar13 == 0) {
          uVar16 = *puVar10 & ~(1 << (uVar11 + 4 & 0x1f));
        }
        else {
          uVar16 = *(uint *)(param_1 + 0x100) | 1 << (uVar11 + 4 & 0x1f);
        }
        *puVar10 = uVar16;
        uVar16 = *(uint *)(param_2 + 0x30);
        uVar14 = *(uint *)(param_3 + 0x30);
      }
      uVar13 = uVar17 << 7 & uVar14;
      if ((uVar17 << 7 & uVar16) != uVar13) {
        if (uVar13 == 0) {
          uVar16 = *puVar10 & ~(1 << (uVar11 + 5 & 0x1f));
        }
        else {
          uVar16 = *(uint *)(param_1 + 0x100) | 1 << (uVar11 + 5 & 0x1f);
        }
        *(uint *)(param_1 + 0x100) = uVar16;
        uVar16 = *(uint *)(param_2 + 0x30);
        uVar14 = *(uint *)(param_3 + 0x30);
      }
      uVar13 = uVar17 << 8 & uVar14;
      if ((uVar17 << 8 & uVar16) != uVar13) {
        if (uVar13 == 0) {
          uVar16 = *puVar10 & ~(1 << (uVar11 + 6 & 0x1f));
        }
        else {
          uVar16 = *(uint *)(param_1 + 0x100) | 1 << (uVar11 + 6 & 0x1f);
        }
        *(uint *)(param_1 + 0x100) = uVar16;
        uVar16 = *(uint *)(param_2 + 0x30);
        uVar14 = *(uint *)(param_3 + 0x30);
      }
      uVar13 = uVar17 << 9 & uVar14;
      if ((uVar17 << 9 & uVar16) != uVar13) {
        if (uVar13 == 0) {
          uVar16 = *puVar10 & ~(1 << (uVar11 + 7 & 0x1f));
        }
        else {
          uVar16 = *(uint *)(param_1 + 0x100) | 1 << (uVar11 + 7 & 0x1f);
        }
        *(uint *)(param_1 + 0x100) = uVar16;
        uVar16 = *(uint *)(param_2 + 0x30);
        uVar14 = *(uint *)(param_3 + 0x30);
      }
      uVar13 = uVar17 << 10 & uVar14;
      if ((uVar17 << 10 & uVar16) != uVar13) {
        if (uVar13 == 0) {
          uVar16 = *puVar10 & ~(1 << (uVar11 + 8 & 0x1f));
        }
        else {
          uVar16 = *(uint *)(param_1 + 0x100) | 1 << (uVar11 + 8 & 0x1f);
        }
        *(uint *)(param_1 + 0x100) = uVar16;
        uVar16 = *(uint *)(param_2 + 0x30);
        uVar14 = *(uint *)(param_3 + 0x30);
      }
      uVar14 = uVar17 << 0xb & uVar14;
      if ((uVar17 << 0xb & uVar16) != uVar14) {
        if (uVar14 == 0) {
          uVar16 = *puVar10 & ~(1 << (uVar11 + 9 & 0x1f));
        }
        else {
          uVar16 = *(uint *)(param_1 + 0x100) | 1 << (uVar11 + 9 & 0x1f);
        }
        *(uint *)(param_1 + 0x100) = uVar16;
      }
      uVar16 = uVar17 << 0xc & *(uint *)(param_3 + 0x30);
      if ((uVar17 << 0xc & *(uint *)(param_2 + 0x30)) != uVar16) {
        if (uVar16 == 0) {
          uVar16 = *(uint *)(param_1 + 0x100) & ~(1 << (uVar11 + 10 & 0x1f));
        }
        else {
          uVar16 = *(uint *)(param_1 + 0x100) | 1 << (uVar11 + 10 & 0x1f);
        }
        *(uint *)(param_1 + 0x100) = uVar16;
      }
      uVar16 = uVar17 << 0xd & *(uint *)(param_3 + 0x30);
      if ((uVar17 << 0xd & *(uint *)(param_2 + 0x30)) != uVar16) {
        if (uVar16 == 0) {
          uVar16 = *(uint *)(param_1 + 0x100) & ~(1 << (uVar11 + 0xb & 0x1f));
        }
        else {
          uVar16 = *(uint *)(param_1 + 0x100) | 1 << (uVar11 + 0xb & 0x1f);
        }
        *(uint *)(param_1 + 0x100) = uVar16;
      }
      uVar16 = uVar17 << 0xe & *(uint *)(param_3 + 0x30);
      if ((uVar17 << 0xe & *(uint *)(param_2 + 0x30)) != uVar16) {
        puVar10 = (uint *)(param_1 + 0x100);
        if (uVar16 == 0) {
          *puVar10 = *puVar10 & ~(1 << (uVar11 + 0xc & 0x1f));
        }
        else {
          *puVar10 = *puVar10 | 1 << (uVar11 + 0xc & 0x1f);
        }
      }
      uVar16 = uVar17 << 0xf & *(uint *)(param_3 + 0x30);
      if ((uVar17 << 0xf & *(uint *)(param_2 + 0x30)) != uVar16) {
        if (uVar16 == 0) {
          uVar16 = *(uint *)(param_1 + 0x100) & ~(1 << (uVar11 + 0xd & 0x1f));
        }
        else {
          uVar16 = *(uint *)(param_1 + 0x100) | 1 << (uVar11 + 0xd & 0x1f);
        }
        *(uint *)(param_1 + 0x100) = uVar16;
      }
      uVar17 = uVar17 << 0x10 | uVar17 >> 0x10;
      iVar1 = uVar11 + 0xe;
      uVar11 = uVar11 + 0x10;
    } while (iVar1 < 0x20);
  }
  *(int32_t *)(param_1 + 0x208) = *(int32_t *)(param_3 + 0x84);
  *(int32_t *)(param_1 + 0x1f8) = *(int32_t *)(param_3 + 0x88);
  *(int32_t *)(param_1 + 0x1fc) = *(int32_t *)(param_3 + 0x8c);
  *(int32_t *)(param_1 + 0x200) = *(int32_t *)(param_3 + 0x90);
  *(int32_t *)(param_1 + 0x204) = *(int32_t *)(param_3 + 0x94);
  uVar5 = *(uint64_t *)(param_3 + 0xa0);
  *(uint64_t *)(param_1 + 0x274) = *(uint64_t *)(param_3 + 0x98);
  *(uint64_t *)(param_1 + 0x27c) = uVar5;
  uVar5 = *(uint64_t *)(param_3 + 0xb0);
  *(uint64_t *)(param_1 + 0x284) = *(uint64_t *)(param_3 + 0xa8);
  *(uint64_t *)(param_1 + 0x28c) = uVar5;
  uVar2 = *(int32_t *)(param_3 + 0xbc);
  uVar3 = *(int32_t *)(param_3 + 0xc0);
  uVar4 = *(int32_t *)(param_3 + 0xc4);
  *(int32_t *)(param_1 + 0x294) = *(int32_t *)(param_3 + 0xb8);
  *(int32_t *)(param_1 + 0x298) = uVar2;
  *(int32_t *)(param_1 + 0x29c) = uVar3;
  *(int32_t *)(param_1 + 0x2a0) = uVar4;
  *(int32_t *)(param_1 + 0x2a4) = *(int32_t *)(param_3 + 200);
  plStack_30 = (int64_t *)0x0;
  lStack_28 = 0;
  if (param_2 != 0) {
    plVar6 = (int64_t *)(param_2 + 0x158);
    if ((*plVar6 == 0) && (*(int64_t *)(param_2 + 0x160) == 0)) {
      plVar6 = (int64_t *)(param_2 + 0x34);
    }
    plStack_30 = (int64_t *)*plVar6;
    lStack_28 = plVar6[1];
  }
  local_var_38 = 0;
  plVar6 = (int64_t *)(param_1 + 0x1b8);
  plStack_40 = (int64_t *)*plVar6;
  *plVar6 = 0;
  if (plStack_40 != (int64_t *)0x0) {
    (**(code **)(*plStack_40 + 0x38))();
  }
  plVar8 = (int64_t *)(param_3 + 0x158);
  if ((*plVar8 == 0) && (*(int64_t *)(param_3 + 0x160) == 0)) {
    plVar8 = (int64_t *)(param_3 + 0x34);
  }
  lVar7 = DataStructure_55f80(*(uint64_t *)(param_1 + 0xa8),&system_data_02e0,plVar8);
  if (lVar7 != 0) {
    RenderingSystem_ResourceAllocator(plVar6,lVar7 + 0xb0);
  }
  if (*plVar6 == 0) {
    puVar12 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x18) != (void *)0x0) {
      puVar12 = *(void **)(param_1 + 0x18);
    }
    SystemCore_Allocator(&processed_var_5560_ptr,puVar12);
    plVar8 = (int64_t *)GenericFunction_1800be9a0(init_system_data_config,&plStack_30,0);
    lVar7 = *plVar8;
    *plVar8 = 0;
    plStack_40 = (int64_t *)*plVar6;
    *plVar6 = lVar7;
    if (plStack_40 != (int64_t *)0x0) {
      (**(code **)(*plStack_40 + 0x38))();
    }
    if (plStack_30 != (int64_t *)0x0) {
      (**(code **)(*plStack_30 + 0x38))();
    }
  }
  GenericFunction_1800781e0(param_1);
  if ((*(int64_t *)(param_1 + 600) == 0) &&
     ((*(uint *)(*(int64_t *)(param_1 + 0x1b8) + 0x388) >> 0x19 & 1) != 0)) {
    puVar9 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x58,8,0x1c);
    *(uint64_t *)((int64_t)puVar9 + 0x2c) = 0xffffffffffffffff;
    *(int32_t *)(puVar9 + 9) = 0xffffffff;
    *puVar9 = 0;
    puVar9[2] = 0;
    puVar9[7] = 0;
    *(int32_t *)(puVar9 + 5) = 0xffffffff;
    *(int32_t *)(puVar9 + 4) = 0xffffffff;
    puVar9[3] = 0;
    *(int32_t *)(puVar9 + 8) = 0;
    *(int32_t *)(puVar9 + 1) = 0;
    *(int8_t *)((int64_t)puVar9 + 0x44) = 0;
    *(int8_t *)((int64_t)puVar9 + 0x24) = 0;
    *(uint64_t **)(param_1 + 600) = puVar9;
  }
  *(int8_t *)(param_1 + 0xf6) = *(int8_t *)(param_3 + 0xcc);
  if ((uint64_t *)(param_1 + 0x218) != (uint64_t *)(param_3 + 0xd0)) {
    GenericFunction_1800588c0((uint64_t *)(param_1 + 0x218),*(uint64_t *)(param_3 + 0xd0),
                  *(uint64_t *)(param_3 + 0xd8));
  }
  *(int32_t *)(*(int64_t *)(param_1 + 0x268) + 0x10) = *(int32_t *)(param_3 + 0xf0);
  *(int32_t *)(*(int64_t *)(param_1 + 0x268) + 0x14) = *(int32_t *)(param_3 + 0x144);
  *(int8_t *)(*(int64_t *)(param_1 + 0x268) + 0x18) = *(int8_t *)(param_3 + 0x148);
  *(int8_t *)(*(int64_t *)(param_1 + 0x268) + 0x19) = *(int8_t *)(param_3 + 0x149);
  *(int8_t *)(*(int64_t *)(param_1 + 0x268) + 0x1a) = *(int8_t *)(param_3 + 0x14a);
  *(int32_t *)(*(int64_t *)(param_1 + 0x268) + 0x44) = *(int32_t *)(param_3 + 0x118);
  *(int32_t *)(*(int64_t *)(param_1 + 0x268) + 0x48) = *(int32_t *)(param_3 + 0x11c);
  *(int32_t *)(*(int64_t *)(param_1 + 0x268) + 0x4c) = *(int32_t *)(param_3 + 0x120);
  *(int32_t *)(*(int64_t *)(param_1 + 0x268) + 0x50) = *(int32_t *)(param_3 + 0x124);
  *(int32_t *)(*(int64_t *)(param_1 + 0x268) + 0x54) = *(int32_t *)(param_3 + 0x128);
  *(int32_t *)(*(int64_t *)(param_1 + 0x268) + 0x58) = *(int32_t *)(param_3 + 300);
  *(int32_t *)(*(int64_t *)(param_1 + 0x268) + 0x5c) = *(int32_t *)(param_3 + 0x130);
  *(int32_t *)(*(int64_t *)(param_1 + 0x268) + 0x60) = *(int32_t *)(param_3 + 0x134);
  *(int32_t *)(*(int64_t *)(param_1 + 0x268) + 100) = *(int32_t *)(param_3 + 0x138);
  *(int32_t *)(*(int64_t *)(param_1 + 0x268) + 0x68) = *(int32_t *)(param_3 + 0x13c);
  *(int32_t *)(*(int64_t *)(param_1 + 0x268) + 0x6c) = *(int32_t *)(param_3 + 0x140);
  lVar7 = *(int64_t *)(param_1 + 0x268);
  uVar11 = *(uint *)(param_3 + 0x108);
  uVar15 = (uint64_t)uVar11;
  if (*(int64_t *)(param_3 + 0x100) != 0) {
    CoreEngineDataBufferProcessor(lVar7 + 0x20,uVar15);
  }
  if (uVar11 != 0) {
// WARNING: Subroutine does not return
    memcpy(*(uint64_t *)(lVar7 + 0x28),*(uint64_t *)(param_3 + 0x100),uVar15);
  }
  *(int32_t *)(lVar7 + 0x30) = 0;
  if (*(int64_t *)(lVar7 + 0x28) != 0) {
    *(int8_t *)(uVar15 + *(int64_t *)(lVar7 + 0x28)) = 0;
  }
  *(int32_t *)(lVar7 + 0x3c) = *(int32_t *)(param_3 + 0x114);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_20 ^ (uint64_t)stack_array_68);
}