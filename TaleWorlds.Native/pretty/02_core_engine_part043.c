#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part043.c - 9 个函数

// 函数: void FUN_1800826b0(int64_t *param_1,int64_t *param_2)
void FUN_1800826b0(int64_t *param_1,int64_t *param_2)

{
  int32_t *puVar1;
  int32_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  int32_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int64_t *plVar9;
  int64_t lVar10;
  int64_t lVar11;
  int32_t *puVar12;
  uint64_t uVar13;
  
  uVar13 = 0xfffffffffffffffe;
  puVar12 = (int32_t *)param_1[1];
  puVar6 = (int32_t *)*param_1;
  lVar10 = (int64_t)puVar12 - (int64_t)puVar6 >> 5;
  puVar7 = (uint64_t *)0x0;
  if (lVar10 == 0) {
    lVar10 = 1;
  }
  else {
    lVar10 = lVar10 * 2;
    puVar5 = puVar7;
    if (lVar10 == 0) goto LAB_180082720;
  }
  puVar5 = (uint64_t *)
           CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar10 << 5,(char)param_1[3],puVar12,0xfffffffffffffffe);
  puVar12 = (int32_t *)param_1[1];
  puVar6 = (int32_t *)*param_1;
LAB_180082720:
  puVar8 = puVar5;
  if (puVar6 != puVar12) {
    lVar11 = (int64_t)puVar5 - (int64_t)puVar6;
    puVar6 = puVar6 + 6;
    do {
      *puVar8 = 0;
      *(uint64_t *)(lVar11 + -0x10 + (int64_t)puVar6) = 0;
      *(uint64_t *)(lVar11 + -8 + (int64_t)puVar6) = 0;
      *(int32_t *)(lVar11 + (int64_t)puVar6) = *puVar6;
      uVar4 = *puVar8;
      *puVar8 = *(uint64_t *)(puVar6 + -6);
      *(uint64_t *)(puVar6 + -6) = uVar4;
      uVar4 = *(uint64_t *)(lVar11 + -0x10 + (int64_t)puVar6);
      *(uint64_t *)(lVar11 + -0x10 + (int64_t)puVar6) = *(uint64_t *)(puVar6 + -4);
      *(uint64_t *)(puVar6 + -4) = uVar4;
      uVar4 = *(uint64_t *)(lVar11 + -8 + (int64_t)puVar6);
      *(uint64_t *)(lVar11 + -8 + (int64_t)puVar6) = *(uint64_t *)(puVar6 + -2);
      *(uint64_t *)(puVar6 + -2) = uVar4;
      uVar2 = *(int32_t *)(lVar11 + (int64_t)puVar6);
      *(int32_t *)(lVar11 + (int64_t)puVar6) = *puVar6;
      *puVar6 = uVar2;
      puVar8 = puVar8 + 4;
      puVar1 = puVar6 + 2;
      puVar6 = puVar6 + 8;
    } while (puVar1 != puVar12);
  }
  lVar11 = param_2[1] - *param_2 >> 2;
  uVar3 = *(uint *)(param_2 + 3);
  *(uint *)(puVar8 + 3) = uVar3;
  if (lVar11 != 0) {
    puVar7 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar11 * 4,uVar3 & 0xff,puVar12,uVar13);
  }
  *puVar8 = puVar7;
  puVar8[1] = puVar7;
  puVar8[2] = (int64_t)puVar7 + lVar11 * 4;
  lVar11 = *param_2;
  if (lVar11 != param_2[1]) {
                    // WARNING: Subroutine does not return
    memmove(*puVar8,lVar11,param_2[1] - lVar11);
  }
  puVar8[1] = *puVar8;
  plVar9 = (int64_t *)*param_1;
  if (plVar9 != (int64_t *)param_1[1]) {
    do {
      if (*plVar9 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      plVar9 = plVar9 + 4;
    } while (plVar9 != (int64_t *)param_1[1]);
    plVar9 = (int64_t *)*param_1;
  }
  if (plVar9 == (int64_t *)0x0) {
    *param_1 = (int64_t)puVar5;
    param_1[1] = (int64_t)(puVar8 + 4);
    param_1[2] = (int64_t)(puVar5 + lVar10 * 4);
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(plVar9);
}





// 函数: void FUN_180082880(int64_t *param_1,int64_t *param_2)
void FUN_180082880(int64_t *param_1,int64_t *param_2)

{
  if (param_1 != param_2) {
    do {
      if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      param_1 = param_1 + 4;
    } while (param_1 != param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1800828d0(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t *plVar3;
  int32_t uVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  iVar2 = _Mtx_lock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar1 = *(int64_t *)(param_1 + 200);
  if (*(int64_t *)(param_1 + 0xc0) == lVar1) {
    plVar3 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,0x20,uVar4,uVar5);
    *plVar3 = (int64_t)&system_handler1_ptr;
    *plVar3 = (int64_t)&system_handler2_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (int64_t)&processed_var_6544_ptr;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (int64_t)&processed_var_6440_ptr;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  else {
    plVar3 = *(int64_t **)(lVar1 + -8);
    *(int64_t *)(param_1 + 200) = lVar1 + -8;
    plVar3[1] = -0x5a5a5a5a5a5a5a5b;
    plVar3[2] = -0x5a5a5a5a5a5a5a5b;
    plVar3[3] = -0x5a5a5a5a5a5a5a5b;
    plVar3[4] = -0x5a5a5a5a5a5a5a5b;
    *plVar3 = (int64_t)&system_handler1_ptr;
    *plVar3 = (int64_t)&system_handler2_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (int64_t)&processed_var_6544_ptr;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (int64_t)&processed_var_6440_ptr;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  iVar2 = _Mtx_unlock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return param_2;
}





// 函数: void FUN_180082a50(int64_t param_1,int64_t param_2,uint64_t param_3)
void FUN_180082a50(int64_t param_1,int64_t param_2,uint64_t param_3)

{
  if (param_1 != param_2) {
                    // WARNING: Subroutine does not return
    memmove(param_3,param_1,param_2 - param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180082aa0(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t *plVar3;
  int32_t uVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  iVar2 = _Mtx_lock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar1 = *(int64_t *)(param_1 + 200);
  if (*(int64_t *)(param_1 + 0xc0) == lVar1) {
    plVar3 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,0x20,uVar4,uVar5);
    *plVar3 = (int64_t)&system_handler1_ptr;
    *plVar3 = (int64_t)&system_handler2_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (int64_t)&processed_var_6544_ptr;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (int64_t)&processed_var_6232_ptr;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  else {
    plVar3 = *(int64_t **)(lVar1 + -8);
    *(int64_t *)(param_1 + 200) = lVar1 + -8;
    plVar3[1] = -0x5a5a5a5a5a5a5a5b;
    plVar3[2] = -0x5a5a5a5a5a5a5a5b;
    plVar3[3] = -0x5a5a5a5a5a5a5a5b;
    plVar3[4] = -0x5a5a5a5a5a5a5a5b;
    *plVar3 = (int64_t)&system_handler1_ptr;
    *plVar3 = (int64_t)&system_handler2_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (int64_t)&processed_var_6544_ptr;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (int64_t)&processed_var_6232_ptr;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  iVar2 = _Mtx_unlock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180082c20(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t *plVar3;
  int32_t uVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  iVar2 = _Mtx_lock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar1 = *(int64_t *)(param_1 + 200);
  if (*(int64_t *)(param_1 + 0xc0) == lVar1) {
    plVar3 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,0x20,uVar4,uVar5);
    *plVar3 = (int64_t)&system_handler1_ptr;
    *plVar3 = (int64_t)&system_handler2_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (int64_t)&processed_var_6544_ptr;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (int64_t)&processed_var_6336_ptr;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  else {
    plVar3 = *(int64_t **)(lVar1 + -8);
    *(int64_t *)(param_1 + 200) = lVar1 + -8;
    plVar3[1] = -0x5a5a5a5a5a5a5a5b;
    plVar3[2] = -0x5a5a5a5a5a5a5a5b;
    plVar3[3] = -0x5a5a5a5a5a5a5a5b;
    plVar3[4] = -0x5a5a5a5a5a5a5a5b;
    *plVar3 = (int64_t)&system_handler1_ptr;
    *plVar3 = (int64_t)&system_handler2_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (int64_t)&processed_var_6544_ptr;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (int64_t)&processed_var_6336_ptr;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  iVar2 = _Mtx_unlock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return param_2;
}



int8_t FUN_180082da0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int8_t *puVar1;
  int8_t uVar2;
  uint64_t uVar3;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  int64_t **pplStackX_18;
  uint64_t uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  param_1 = (int64_t *)*param_1;
  uVar3 = *(uint64_t *)
           (*(int64_t *)(*param_1 + 0x1e0) + (uint64_t)*(byte *)(param_1 + 1) * 0x18);
  pplStackX_18 = &plStackX_8;
  plStackX_8 = (int64_t *)param_1[2];
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  FUN_180255880(uVar3,&plStackX_8,param_3,param_4,uVar4);
  uVar3 = *(uint64_t *)
           (*(int64_t *)(*param_1 + 0x1e0) + 8 + (uint64_t)*(byte *)(param_1 + 1) * 0x18);
  pplStackX_18 = &plStackX_10;
  plStackX_10 = (int64_t *)param_1[3];
  if (plStackX_10 != (int64_t *)0x0) {
    (**(code **)(*plStackX_10 + 0x28))();
  }
  FUN_180255b70(uVar3,&plStackX_10);
  LOCK();
  puVar1 = (int8_t *)
           (*(int64_t *)(*param_1 + 0x1e0) + 0x15 + (uint64_t)*(byte *)(param_1 + 1) * 0x18);
  uVar2 = *puVar1;
  *puVar1 = 3;
  UNLOCK();
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_180082e70(int64_t *param_1,int64_t *param_2,int param_3)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  
  if (param_3 == 3) {
    return 0x180bfdd20;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    lVar3 = *param_1;
    if (lVar3 != 0) {
      if (*(int64_t **)(lVar3 + 0x18) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(lVar3 + 0x18) + 0x38))();
      }
      if (*(int64_t **)(lVar3 + 0x10) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(lVar3 + 0x10) + 0x38))();
      }
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar3);
    }
  }
  else {
    if (param_3 == 1) {
      puVar4 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      *puVar4 = *puVar1;
      *(int8_t *)(puVar4 + 1) = *(int8_t *)(puVar1 + 1);
      plVar2 = (int64_t *)puVar1[2];
      puVar4[2] = plVar2;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x28))();
      }
      plVar2 = (int64_t *)puVar1[3];
      puVar4[3] = plVar2;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x28))();
      }
      *param_1 = (int64_t)puVar4;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180082fd0(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)
void FUN_180082fd0(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  
  lVar3 = *param_4;
  uVar5 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xf0,8,3,0xfffffffffffffffe);
  plVar6 = (int64_t *)FUN_18007f2f0(uVar5);
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  plVar4 = *(int64_t **)(lVar3 + 0x210);
  *(int64_t **)(lVar3 + 0x210) = plVar6;
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  *(int8_t *)(param_1 + 0x1a) = 0x12;
  lVar3 = *(int64_t *)(lVar3 + 0x210);
  FUN_180080650(lVar3 + 0x10);
  FUN_180080650(lVar3 + 0x38,param_1);
  *(int8_t *)(lVar3 + 0x80) = *(int8_t *)(param_1 + 0x1a);
  *(int32_t *)(lVar3 + 0x60) = **(int32_t **)(param_1 + 8);
  *(int64_t *)(param_1 + 8) = *(int64_t *)(param_1 + 8) + 4;
  iVar1 = *(int *)(lVar3 + 0x60);
  iVar2 = *(int *)(lVar3 + 100);
  if (iVar2 < iVar1) {
    if (iVar1 == 0) {
      if (iVar2 < 2) {
        *(int32_t *)(lVar3 + 100) = 8;
      }
      else {
        *(int *)(lVar3 + 100) = (iVar2 >> 1) + iVar2;
      }
    }
    else {
      *(int *)(lVar3 + 100) = iVar1;
    }
    FUN_180086010(lVar3 + 0x60);
  }
  *(int *)(lVar3 + 0x60) = iVar1;
                    // WARNING: Subroutine does not return
  memcpy(*(uint64_t *)(lVar3 + 0x68),*(uint64_t *)(param_1 + 8),(int64_t)(iVar1 * 0x5c));
}



int FUN_180083100(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4)

{
  int iVar1;
  int *piVar2;
  
  FUN_18007e2b0(param_4[1],param_1);
  piVar2 = (int *)*param_4;
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  return iVar1;
}





// 函数: void FUN_1800831c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)
void FUN_1800831c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  int64_t *plStackX_20;
  int64_t *plStack_28;
  uint64_t uStack_20;
  int64_t **pplStack_18;
  int64_t **pplStack_10;
  
  uStack_20 = 0xfffffffffffffffe;
  puVar1 = (uint64_t *)*param_4;
  FUN_18007fd60(puVar1[2],puVar1[3],*(int8_t *)(puVar1 + 1),param_1);
  uVar2 = *puVar1;
  pplStack_18 = &plStackX_20;
  plStackX_20 = (int64_t *)puVar1[3];
  if (plStackX_20 != (int64_t *)0x0) {
    (**(code **)(*plStackX_20 + 0x28))();
  }
  pplStack_10 = &plStack_28;
  plStack_28 = (int64_t *)puVar1[2];
  if (plStack_28 != (int64_t *)0x0) {
    (**(code **)(*plStack_28 + 0x28))();
  }
  FUN_18007c8e0(uVar2,*(int8_t *)(puVar1 + 1),&plStack_28,&plStackX_20);
                    // WARNING: Could not recover jumptable at 0x000180083253. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(int64_t *)*puVar1 + 0x38))();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_180083260(int64_t *param_1,int64_t *param_2,int param_3)

{
  int64_t lVar1;
  
  if (param_3 == 3) {
    return 0x180bfdbe0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      if (*(int64_t **)(lVar1 + 0x18) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(lVar1 + 0x18) + 0x38))();
      }
      if (*(int64_t **)(lVar1 + 0x10) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(lVar1 + 0x10) + 0x38))();
      }
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar1);
    }
  }
  else {
    if (param_3 == 1) {
      lVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,system_allocation_flags,0xfffffffffffffffe);
      FUN_18007c7f0(lVar1,*param_2);
      *param_1 = lVar1;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_180083390(int64_t *param_1,int64_t *param_2,int param_3)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  
  if (param_3 == 3) {
    return 0x180bfdba0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    lVar3 = *param_1;
    if (lVar3 != 0) {
      if (*(int64_t **)(lVar3 + 0x18) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(lVar3 + 0x18) + 0x38))();
      }
      if (*(int64_t **)(lVar3 + 0x10) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(lVar3 + 0x10) + 0x38))();
      }
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar3);
    }
  }
  else {
    if (param_3 == 1) {
      puVar4 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      *puVar4 = *puVar1;
      *(int8_t *)(puVar4 + 1) = *(int8_t *)(puVar1 + 1);
      plVar2 = (int64_t *)puVar1[2];
      puVar4[2] = plVar2;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x28))();
      }
      plVar2 = (int64_t *)puVar1[3];
      puVar4[3] = plVar2;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x28))();
      }
      *param_1 = (int64_t)puVar4;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}





// 函数: void FUN_1800834f0(uint64_t *param_1)
void FUN_1800834f0(uint64_t *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
  uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(uint64_t *)(lVar3 + 0x20);
      *(uint64_t **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        SystemDataCleaner();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180083520(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t *plVar3;
  int32_t uVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  iVar2 = _Mtx_lock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar1 = *(int64_t *)(param_1 + 200);
  if (*(int64_t *)(param_1 + 0xc0) == lVar1) {
    plVar3 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,0x20,uVar4,uVar5);
    *plVar3 = (int64_t)&system_handler1_ptr;
    *plVar3 = (int64_t)&system_handler2_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (int64_t)&processed_var_6544_ptr;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (int64_t)&processed_var_5816_ptr;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  else {
    plVar3 = *(int64_t **)(lVar1 + -8);
    *(int64_t *)(param_1 + 200) = lVar1 + -8;
    plVar3[1] = -0x5a5a5a5a5a5a5a5b;
    plVar3[2] = -0x5a5a5a5a5a5a5a5b;
    plVar3[3] = -0x5a5a5a5a5a5a5a5b;
    plVar3[4] = -0x5a5a5a5a5a5a5a5b;
    *plVar3 = (int64_t)&system_handler1_ptr;
    *plVar3 = (int64_t)&system_handler2_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (int64_t)&processed_var_6544_ptr;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (int64_t)&processed_var_5816_ptr;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  iVar2 = _Mtx_unlock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1800836a0(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t *plVar3;
  int32_t uVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  iVar2 = _Mtx_lock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar1 = *(int64_t *)(param_1 + 200);
  if (*(int64_t *)(param_1 + 0xc0) == lVar1) {
    plVar3 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,0x20,uVar4,uVar5);
    *plVar3 = (int64_t)&system_handler1_ptr;
    *plVar3 = (int64_t)&system_handler2_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (int64_t)&processed_var_6544_ptr;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (int64_t)&processed_var_5920_ptr;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  else {
    plVar3 = *(int64_t **)(lVar1 + -8);
    *(int64_t *)(param_1 + 200) = lVar1 + -8;
    plVar3[1] = -0x5a5a5a5a5a5a5a5b;
    plVar3[2] = -0x5a5a5a5a5a5a5a5b;
    plVar3[3] = -0x5a5a5a5a5a5a5a5b;
    plVar3[4] = -0x5a5a5a5a5a5a5a5b;
    *plVar3 = (int64_t)&system_handler1_ptr;
    *plVar3 = (int64_t)&system_handler2_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (int64_t)&processed_var_6544_ptr;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (int64_t)&processed_var_5920_ptr;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  iVar2 = _Mtx_unlock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180083820(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t *plVar3;
  int32_t uVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  iVar2 = _Mtx_lock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar1 = *(int64_t *)(param_1 + 200);
  if (*(int64_t *)(param_1 + 0xc0) == lVar1) {
    plVar3 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,0x20,uVar4,uVar5);
    *plVar3 = (int64_t)&system_handler1_ptr;
    *plVar3 = (int64_t)&system_handler2_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (int64_t)&processed_var_6544_ptr;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (int64_t)&processed_var_6024_ptr;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  else {
    plVar3 = *(int64_t **)(lVar1 + -8);
    *(int64_t *)(param_1 + 200) = lVar1 + -8;
    plVar3[1] = -0x5a5a5a5a5a5a5a5b;
    plVar3[2] = -0x5a5a5a5a5a5a5a5b;
    plVar3[3] = -0x5a5a5a5a5a5a5a5b;
    plVar3[4] = -0x5a5a5a5a5a5a5a5b;
    *plVar3 = (int64_t)&system_handler1_ptr;
    *plVar3 = (int64_t)&system_handler2_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (int64_t)&processed_var_6544_ptr;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (int64_t)&processed_var_6024_ptr;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  iVar2 = _Mtx_unlock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1800839a0(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t *plVar3;
  int32_t uVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  iVar2 = _Mtx_lock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar1 = *(int64_t *)(param_1 + 200);
  if (*(int64_t *)(param_1 + 0xc0) == lVar1) {
    plVar3 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,0x20,uVar4,uVar5);
    *plVar3 = (int64_t)&system_handler1_ptr;
    *plVar3 = (int64_t)&system_handler2_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (int64_t)&processed_var_6544_ptr;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (int64_t)&processed_var_6128_ptr;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  else {
    plVar3 = *(int64_t **)(lVar1 + -8);
    *(int64_t *)(param_1 + 200) = lVar1 + -8;
    plVar3[1] = -0x5a5a5a5a5a5a5a5b;
    plVar3[2] = -0x5a5a5a5a5a5a5a5b;
    plVar3[3] = -0x5a5a5a5a5a5a5a5b;
    plVar3[4] = -0x5a5a5a5a5a5a5a5b;
    *plVar3 = (int64_t)&system_handler1_ptr;
    *plVar3 = (int64_t)&system_handler2_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (int64_t)&processed_var_6544_ptr;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (int64_t)&processed_var_6128_ptr;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  iVar2 = _Mtx_unlock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return param_2;
}





// 函数: void FUN_180083b20(int64_t param_1,int64_t param_2)
void FUN_180083b20(int64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  uint64_t uVar2;
  
  plVar1 = *(int64_t **)(param_1 + 0x30);
  uVar2 = (int64_t)(int)plVar1[2] + 7U & 0xfffffffffffffff8;
  *(int *)(plVar1 + 2) = (int)uVar2 + ((int)param_2 + 1) * 8;
                    // WARNING: Subroutine does not return
  memset(*plVar1 + uVar2,0,param_2 * 8);
}



uint64_t FUN_180083bf0(int64_t param_1)

{
  int64_t lVar1;
  
  if ((*(byte *)(param_1 + 0xfd) & 0x20) == 0) {
    param_1 = func_0x000180085de0(*(uint64_t *)(param_1 + 0x1b0));
  }
  lVar1 = 0;
  while ((*(int64_t *)(param_1 + 0x1e0) == 0 ||
         ((*(char *)(*(int64_t *)(param_1 + 0x1e0) + 0x15 + lVar1) != '\x01' &&
          (*(char *)(*(int64_t *)(param_1 + 0x1e0) + 0x15 + lVar1) != '\x02'))))) {
    lVar1 = lVar1 + 0x18;
    if (0x17f < lVar1) {
      return 1;
    }
  }
  return 0;
}



uint64_t *
FUN_180083c60(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &processed_var_5816_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t *
FUN_180083cb0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &processed_var_5920_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t *
FUN_180083d00(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &processed_var_6024_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t *
FUN_180083d50(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &processed_var_6128_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t *
FUN_180083da0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &processed_var_6232_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t *
FUN_180083df0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &processed_var_6336_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t *
FUN_180083e40(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &processed_var_6440_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_180083e90(uint64_t *param_1)
void FUN_180083e90(uint64_t *param_1)

{
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  return;
}



uint64_t *
FUN_180083ec0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_180083f10(int64_t *param_1)
void FUN_180083f10(int64_t *param_1)

{
  if ((int64_t *)param_1[0xc] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0xc] + 0x38))();
  }
  if ((int64_t *)param_1[0xb] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0xb] + 0x38))();
  }
  if ((int64_t *)param_1[10] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[10] + 0x38))();
  }
  if ((int64_t *)param_1[9] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[9] + 0x38))();
  }
  if ((int64_t *)param_1[8] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[8] + 0x38))();
  }
  if ((int64_t *)param_1[7] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[7] + 0x38))();
  }
  if ((int64_t *)param_1[6] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[6] + 0x38))();
  }
  if ((int64_t *)param_1[5] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[5] + 0x38))();
  }
  if ((int64_t *)param_1[4] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[4] + 0x38))();
  }
  if ((int64_t *)param_1[3] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[3] + 0x38))();
  }
  if ((int64_t *)param_1[2] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[2] + 0x38))();
  }
  if ((int64_t *)param_1[1] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[1] + 0x38))();
  }
  if ((int64_t *)*param_1 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_1 + 0x38))();
  }
  return;
}





