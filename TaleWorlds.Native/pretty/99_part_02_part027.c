#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_02_part027.c - 11 个函数
// 函数: void function_0feaef(void)
void function_0feaef(void)
{
  return;
}
// 函数: void function_0feb10(int64_t *param_1)
void function_0feb10(int64_t *param_1)
{
  int64_t lVar1;
  lVar1 = function_0a19c0(param_1 + 2);
  if (lVar1 == 0) {
// WARNING: Could not recover jumptable at 0x0001800feb3d. Too many branches
// WARNING: Treating indirect jump as call
    _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              ((int64_t)*(int *)(*param_1 + 4) + (int64_t)param_1,2);
    return;
  }
  return;
}
int64_t function_0feb50(int64_t param_1,uint64_t param_2)
{
  param_1 = param_1 + -0xb0;
  function_0fd430(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x110);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_0feb90(int64_t *param_1)
void function_0feb90(int64_t *param_1)
{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  plVar3 = (int64_t *)param_1[1];
  plVar5 = (int64_t *)*param_1;
  uVar2 = (int64_t)plVar3 - (int64_t)plVar5 >> 3;
  if (2 < uVar2) {
    plVar1 = plVar5 + 3;
    if (plVar1 != plVar3) {
      do {
        if ((int64_t *)*plVar1 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*plVar1 + 0x38))();
        }
        plVar1 = plVar1 + 1;
      } while (plVar1 != plVar3);
      plVar5 = (int64_t *)*param_1;
    }
    param_1[1] = (int64_t)(plVar5 + 3);
    return;
  }
  uVar4 = 3 - uVar2;
  if ((uint64_t)(param_1[2] - (int64_t)plVar3 >> 3) < uVar4) {
    uVar6 = uVar2 * 2;
    if (uVar2 == 0) {
      uVar6 = 1;
    }
    if (uVar6 < uVar2 + uVar4) {
      uVar6 = uVar2 + uVar4;
    }
    plVar1 = (int64_t *)0x0;
    plVar7 = plVar1;
    if (uVar6 != 0) {
      plVar1 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar6 * 8,(char)param_1[3]);
      plVar5 = (int64_t *)*param_1;
      plVar3 = (int64_t *)param_1[1];
      plVar7 = plVar1;
    }
    for (; plVar5 != plVar3; plVar5 = plVar5 + 1) {
      *plVar1 = *plVar5;
      plVar1 = plVar1 + 1;
      *plVar5 = 0;
    }
    uVar2 = uVar4;
    plVar5 = plVar1;
    if (uVar4 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *plVar5 = 0;
        plVar5 = plVar5 + 1;
      }
    }
    plVar5 = (int64_t *)param_1[1];
    plVar3 = (int64_t *)*param_1;
    if (plVar3 != plVar5) {
      do {
        if ((int64_t *)*plVar3 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*plVar3 + 0x38))();
        }
        plVar3 = plVar3 + 1;
      } while (plVar3 != plVar5);
      plVar3 = (int64_t *)*param_1;
    }
    if (plVar3 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(plVar3);
    }
    *param_1 = (int64_t)plVar7;
    param_1[2] = (int64_t)(plVar7 + uVar6);
    param_1[1] = (int64_t)(plVar1 + uVar4);
    return;
  }
  uVar2 = uVar4;
  if (uVar4 != 0) {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *plVar3 = 0;
      plVar3 = plVar3 + 1;
    }
    plVar3 = (int64_t *)param_1[1];
  }
  param_1[1] = (int64_t)(plVar3 + uVar4);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_0febba(int64_t param_1,uint64_t param_2,uint64_t *param_3)
void function_0febba(int64_t param_1,uint64_t param_2,uint64_t *param_3)
{
  int64_t *plVar1;
  int64_t in_RAX;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t *unaff_RBX;
  uint64_t uVar4;
  int64_t *unaff_RSI;
  uint64_t *puVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  uVar4 = 3 - param_1;
  if (uVar4 <= (uint64_t)(in_RAX - (int64_t)unaff_RBX >> 3)) {
    uVar7 = uVar4;
    if (uVar4 != 0) {
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        *unaff_RBX = 0;
        unaff_RBX = unaff_RBX + 1;
      }
      unaff_RBX = (uint64_t *)unaff_RSI[1];
    }
    unaff_RSI[1] = (int64_t)(unaff_RBX + uVar4);
    return;
  }
  uVar7 = param_1 * 2;
  if (param_1 == 0) {
    uVar7 = 1;
  }
  if (uVar7 < param_1 + uVar4) {
    uVar7 = param_1 + uVar4;
  }
  puVar2 = (uint64_t *)0x0;
  puVar8 = puVar2;
  if (uVar7 != 0) {
    puVar2 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar7 * 8,(char)unaff_RSI[3]);
    param_3 = (uint64_t *)*unaff_RSI;
    unaff_RBX = (uint64_t *)unaff_RSI[1];
    puVar8 = puVar2;
  }
  for (; param_3 != unaff_RBX; param_3 = param_3 + 1) {
    *puVar2 = *param_3;
    puVar2 = puVar2 + 1;
    *param_3 = 0;
  }
  uVar3 = uVar4;
  puVar5 = puVar2;
  if (uVar4 != 0) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  plVar1 = (int64_t *)unaff_RSI[1];
  plVar6 = (int64_t *)*unaff_RSI;
  if (plVar6 != plVar1) {
    do {
      if ((int64_t *)*plVar6 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar6 + 0x38))();
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
    plVar6 = (int64_t *)*unaff_RSI;
  }
  if (plVar6 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(plVar6);
  }
  *unaff_RSI = (int64_t)puVar8;
  unaff_RSI[2] = (int64_t)(puVar8 + uVar7);
  unaff_RSI[1] = (int64_t)(puVar2 + uVar4);
  return;
}
// 函数: void function_0fecb5(void)
void function_0fecb5(void)
{
  int64_t lVar1;
  uint64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  lVar1 = unaff_RBP;
  if (unaff_RBP != 0) {
    for (; lVar1 != 0; lVar1 = lVar1 + -1) {
      *unaff_RBX = 0;
      unaff_RBX = unaff_RBX + 1;
    }
    unaff_RBX = *(uint64_t **)(unaff_RSI + 8);
  }
  *(uint64_t **)(unaff_RSI + 8) = unaff_RBX + unaff_RBP;
  return;
}
// 函数: void function_0fecde(uint64_t param_1,uint64_t param_2,int64_t param_3)
void function_0fecde(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  int64_t *unaff_RBX;
  int64_t *unaff_RSI;
  int64_t *plVar1;
  plVar1 = (int64_t *)(param_3 + 0x18);
  if (plVar1 != unaff_RBX) {
    do {
      if ((int64_t *)*plVar1 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar1 + 0x38))();
      }
      plVar1 = plVar1 + 1;
    } while (plVar1 != unaff_RBX);
    param_3 = *unaff_RSI;
  }
  unaff_RSI[1] = param_3 + 0x18;
  return;
}
// 函数: void function_0fed20(int64_t *param_1)
void function_0fed20(int64_t *param_1)
{
  int64_t lVar1;
  for (lVar1 = *param_1; lVar1 != param_1[1]; lVar1 = lVar1 + 0x28) {
    if (*(int64_t *)(lVar1 + 8) != 0) {
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
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_0fed40(void)
void function_0fed40(void)
{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  int iVar5;
  int iVar6;
  uint64_t in_R9;
  uint64_t uVar7;
  int aiStack_40 [2];
  int64_t lStack_38;
  uint64_t local_var_30;
  uint64_t local_var_28;
  int32_t local_var_20;
  lVar2 = system_system_data_config;
  uVar7 = 0xfffffffffffffffe;
  iVar6 = 1;
  iVar5 = 0;
  do {
    lStack_38 = 0;
    local_var_30 = 0;
    local_var_28 = 0;
    local_var_20 = 3;
    aiStack_40[0] = iVar6;
    if (*(uint64_t *)(lVar2 + 0xa8) < *(uint64_t *)(lVar2 + 0xb0)) {
      *(uint64_t *)(lVar2 + 0xa8) = *(uint64_t *)(lVar2 + 0xa8) + 0x28;
      function_0ff090();
    }
    else {
      function_0ff140(lVar2 + 0xa0,aiStack_40);
    }
    iVar3 = iVar6 * 2;
    if (iVar5 == 0x1f) {
      iVar3 = iVar6;
    }
    iVar6 = iVar3;
    if (lStack_38 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x20);
  if ((uint64_t)(*(int64_t *)(lVar2 + 0xd0) - *(int64_t *)(lVar2 + 0xc0) >> 3) < 0x1000) {
    lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x8000,*(int8_t *)(lVar2 + 0xd8),in_R9,uVar7);
    lVar1 = *(int64_t *)(lVar2 + 0xc0);
    if (lVar1 != *(int64_t *)(lVar2 + 200)) {
// WARNING: Subroutine does not return
      memmove(lVar4,lVar1,*(int64_t *)(lVar2 + 200) - lVar1);
    }
    if (lVar1 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(int64_t *)(lVar2 + 0xc0) = lVar4;
    *(int64_t *)(lVar2 + 200) = lVar4;
    *(int64_t *)(lVar2 + 0xd0) = lVar4 + 0x8000;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int function_0feeb0(int64_t param_1)
{
  int *piVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  lVar2 = system_system_data_config;
  UNLOCK();
  if (iVar3 + -1 != 0) {
    return iVar3 + -1;
  }
  plVar5 = (int64_t *)0x0;
  if (*(char *)(param_1 + 0x20) == '\0') {
    if (*(int64_t *)(param_1 + 0x10) != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)(param_1 + 0x10) = 0;
  }
  iVar3 = _Mtx_lock(lVar2 + 0x50);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  plVar7 = *(int64_t **)(lVar2 + 200);
  if (plVar7 < *(int64_t **)(lVar2 + 0xd0)) {
    *(int64_t **)(lVar2 + 200) = plVar7 + 1;
    *plVar7 = param_1;
    goto LAB_1800fefef;
  }
  plVar6 = *(int64_t **)(lVar2 + 0xc0);
  lVar4 = (int64_t)plVar7 - (int64_t)plVar6 >> 3;
  if (lVar4 == 0) {
    lVar4 = 1;
LAB_1800fef71:
    plVar5 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar4 * 8,*(int8_t *)(lVar2 + 0xd8));
    plVar7 = *(int64_t **)(lVar2 + 200);
    plVar6 = *(int64_t **)(lVar2 + 0xc0);
  }
  else {
    lVar4 = lVar4 * 2;
    if (lVar4 != 0) goto LAB_1800fef71;
  }
  if (plVar6 != plVar7) {
// WARNING: Subroutine does not return
    memmove(plVar5,plVar6,(int64_t)plVar7 - (int64_t)plVar6);
  }
  *plVar5 = param_1;
  if (*(int64_t *)(lVar2 + 0xc0) != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(int64_t **)(lVar2 + 0xc0) = plVar5;
  *(int64_t **)(lVar2 + 200) = plVar5 + 1;
  *(int64_t **)(lVar2 + 0xd0) = plVar5 + lVar4;
LAB_1800fefef:
  iVar3 = _Mtx_unlock(lVar2 + 0x50);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return 0;
}
// 函数: void function_0ff020(int64_t *param_1)
void function_0ff020(int64_t *param_1)
{
  int64_t lVar1;
  for (lVar1 = *param_1; lVar1 != param_1[1]; lVar1 = lVar1 + 0x28) {
    if (*(int64_t *)(lVar1 + 8) != 0) {
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
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t *
function_0ff090(int32_t *param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)
{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  *param_1 = *param_2;
  lVar3 = *(int64_t *)(param_2 + 4) - *(int64_t *)(param_2 + 2) >> 3;
  uVar1 = param_2[8];
  param_1[8] = uVar1;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar3 * 8,uVar1 & 0xff,param_4,0xfffffffffffffffe);
  }
  *(int64_t *)(param_1 + 2) = lVar2;
  *(int64_t *)(param_1 + 4) = lVar2;
  *(int64_t *)(param_1 + 6) = lVar2 + lVar3 * 8;
  lVar3 = *(int64_t *)(param_1 + 2);
  lVar2 = *(int64_t *)(param_2 + 2);
  if (lVar2 != *(int64_t *)(param_2 + 4)) {
// WARNING: Subroutine does not return
    memmove(lVar3,lVar2,*(int64_t *)(param_2 + 4) - lVar2);
  }
  *(int64_t *)(param_1 + 4) = lVar3;
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_0ff140(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_0ff140(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int32_t *puVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  uint64_t *puVar6;
  int32_t *puVar7;
  int64_t lVar8;
  int32_t *puVar9;
  int64_t lVar10;
  puVar9 = (int32_t *)param_1[1];
  puVar5 = (int32_t *)*param_1;
  lVar10 = ((int64_t)puVar9 - (int64_t)puVar5) / 0x28;
  puVar4 = (int32_t *)0x0;
  if (lVar10 == 0) {
    lVar10 = 1;
  }
  else {
    lVar10 = lVar10 * 2;
    if (lVar10 == 0) goto LAB_1800ff1c3;
  }
  puVar4 = (int32_t *)
           CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar10 * 0x28,(char)param_1[3],param_4,0xfffffffffffffffe);
  puVar9 = (int32_t *)param_1[1];
  puVar5 = (int32_t *)*param_1;
LAB_1800ff1c3:
  puVar7 = puVar4;
  if (puVar5 != puVar9) {
    lVar8 = (int64_t)puVar4 - (int64_t)puVar5;
    puVar5 = puVar5 + 8;
    do {
      *puVar7 = puVar5[-8];
      puVar6 = (uint64_t *)((int64_t)puVar5 + lVar8 + -0x18);
      *puVar6 = 0;
      *(uint64_t *)(lVar8 + -0x10 + (int64_t)puVar5) = 0;
      *(uint64_t *)(lVar8 + -8 + (int64_t)puVar5) = 0;
      *(int32_t *)(lVar8 + (int64_t)puVar5) = *puVar5;
      uVar3 = *puVar6;
      *puVar6 = *(uint64_t *)(puVar5 + -6);
      *(uint64_t *)(puVar5 + -6) = uVar3;
      uVar3 = *(uint64_t *)(lVar8 + -0x10 + (int64_t)puVar5);
      *(uint64_t *)(lVar8 + -0x10 + (int64_t)puVar5) = *(uint64_t *)(puVar5 + -4);
      *(uint64_t *)(puVar5 + -4) = uVar3;
      uVar3 = *(uint64_t *)(lVar8 + -8 + (int64_t)puVar5);
      *(uint64_t *)(lVar8 + -8 + (int64_t)puVar5) = *(uint64_t *)(puVar5 + -2);
      *(uint64_t *)(puVar5 + -2) = uVar3;
      uVar2 = *(int32_t *)(lVar8 + (int64_t)puVar5);
      *(int32_t *)(lVar8 + (int64_t)puVar5) = *puVar5;
      *puVar5 = uVar2;
      puVar7 = puVar7 + 10;
      puVar1 = puVar5 + 2;
      puVar5 = puVar5 + 10;
    } while (puVar1 != puVar9);
  }
  function_0ff090(puVar7,param_2);
  lVar8 = *param_1;
  if (lVar8 != param_1[1]) {
    do {
      if (*(int64_t *)(lVar8 + 8) != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lVar8 = lVar8 + 0x28;
    } while (lVar8 != param_1[1]);
    lVar8 = *param_1;
  }
  if (lVar8 == 0) {
    *param_1 = (int64_t)puVar4;
    param_1[1] = (int64_t)(puVar7 + 10);
    param_1[2] = (int64_t)(puVar4 + lVar10 * 10);
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(lVar8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_0ff2e0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_0ff2e0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int32_t uVar1;
  int32_t *puVar2;
  void *plocal_var_50;
  int32_t *plocal_var_48;
  int32_t local_var_40;
  uint64_t local_var_38;
  plocal_var_50 = &system_data_buffer_ptr;
  local_var_38 = 0;
  plocal_var_48 = (int32_t *)0x0;
  local_var_40 = 0;
  puVar2 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x13,0x13,param_4,0xfffffffffffffffe);
  *(int8_t *)puVar2 = 0;
  plocal_var_48 = puVar2;
  uVar1 = CoreEngineSystemCleanup(puVar2);
  local_var_38 = CONCAT44(local_var_38._4_4_,uVar1);
  *puVar2 = 0x69676e45;
  puVar2[1] = 0x4320656e;
  puVar2[2] = 0x69666e6f;
  puVar2[3] = 0x69462067;
  *(int16_t *)(puVar2 + 4) = 0x656c;
  *(int8_t *)((int64_t)puVar2 + 0x12) = 0;
  local_var_40 = 0x12;
  function_0ae520(param_1,&plocal_var_50);
  plocal_var_50 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar2);
}
uint64_t function_100b00(uint64_t param_1,uint64_t param_2)
{
  function_100b40();
  if ((param_2 & 1) != 0) {
    free(param_1,0x2650);
  }
  return param_1;
}