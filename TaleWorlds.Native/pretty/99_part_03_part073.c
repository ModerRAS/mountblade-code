#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part073.c - 2 个函数

// 函数: void FUN_18023e4f0(int64_t *param_1)
void FUN_18023e4f0(int64_t *param_1)

{
  int iVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  param_1 = (int64_t *)*param_1;
  if ((*(int64_t *)(*param_1 + 0x348) != 0) && (*(int *)(*param_1 + 0x350) != -1)) {
    uVar6 = FUN_1801781f0();
    *(uint64_t *)(*param_1 + 0x1f0) = uVar6;
    plVar2 = (int64_t *)*param_1;
    lVar3 = plVar2[0x3e];
    if (lVar3 != 0) {
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2);
      }
      plVar4 = *(int64_t **)(lVar3 + 0x10);
      *(int64_t **)(lVar3 + 0x10) = plVar2;
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x38))();
      }
      lVar3 = *param_1;
      iVar1 = *(int *)(system_main_module_state + 0x224);
      *(int64_t *)(lVar3 + 0x340) = (int64_t)iVar1;
      LOCK();
      *(int32_t *)(lVar3 + 0x380) = 2;
      UNLOCK();
      LOCK();
      *(int8_t *)(lVar3 + 900) = 1;
      UNLOCK();
      if (param_1[3] != 0) {
        (*(code *)param_1[4])(CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),*param_1,param_1 + 1);
      }
    }
  }
  lVar3 = *param_1;
  if (*(int64_t *)(lVar3 + 0x1f0) == 0) {
    lVar5 = param_1[5];
    uVar6 = FUN_1800c0100();
    FUN_1800a5810(system_message_buffer,uVar6,1,0,lVar3,(int)lVar5,uVar7);
    if (param_1[3] != 0) {
      (*(code *)param_1[4])(0,*param_1,param_1 + 1);
    }
  }
                    // WARNING: Could not recover jumptable at 0x00018023e617. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(int64_t *)*param_1 + 0x38))();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_18023e620(int64_t *param_1,int64_t *param_2,int param_3,uint64_t param_4)

{
  int64_t lVar1;
  
  if (param_3 == 3) {
    return 0x180c03ec0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
        (**(code **)(lVar1 + 0x18))(lVar1 + 8,0,0,param_4,0xfffffffffffffffe);
      }
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar1);
    }
  }
  else {
    if (param_3 == 1) {
      lVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x30,8,system_allocation_flags);
      FUN_18023c3b0(lVar1,*param_2);
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

int64_t FUN_18023e750(int64_t *param_1,int64_t *param_2,int param_3,uint64_t param_4)

{
  int64_t lVar1;
  
  if (param_3 == 3) {
    return 0x180c03d80;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
        (**(code **)(lVar1 + 0x18))(lVar1 + 8,0,0,param_4,0xfffffffffffffffe);
      }
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar1);
    }
  }
  else {
    if (param_3 == 1) {
      lVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x30,8,system_allocation_flags);
      FUN_18023c3b0(lVar1,*param_2);
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

int64_t FUN_18023e880(int64_t *param_1,int64_t *param_2,int param_3,uint64_t param_4)

{
  int64_t lVar1;
  
  if (param_3 == 3) {
    return 0x180c03d40;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      if (*(code **)(lVar1 + 0x20) != (code *)0x0) {
        (**(code **)(lVar1 + 0x20))(lVar1 + 0x10,0,0,param_4,0xfffffffffffffffe);
      }
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar1);
    }
  }
  else {
    if (param_3 == 1) {
      lVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x60,8,system_allocation_flags);
      FUN_18023c2e0(lVar1,*param_2);
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




// 函数: void FUN_18023eac0(int64_t param_1,int64_t param_2,uint64_t param_3,int64_t *param_4)
void FUN_18023eac0(int64_t param_1,int64_t param_2,uint64_t param_3,int64_t *param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  uint64_t *puVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  uint64_t uVar9;
  
  lVar1 = param_4[1];
  lVar2 = *(int64_t *)(param_1 + 8);
  lVar3 = *param_4;
  uVar9 = *(uint64_t *)(lVar1 + 0x2ec);
  *(uint64_t *)(lVar3 + 0x14) = *(uint64_t *)(lVar1 + 0x2e4);
  *(uint64_t *)(lVar3 + 0x1c) = uVar9;
  uVar9 = *(uint64_t *)(lVar1 + 0x2fc);
  *(uint64_t *)(lVar3 + 0x24) = *(uint64_t *)(lVar1 + 0x2f4);
  *(uint64_t *)(lVar3 + 0x2c) = uVar9;
  uVar9 = *(uint64_t *)(lVar1 + 0x30c);
  *(uint64_t *)(lVar3 + 0x34) = *(uint64_t *)(lVar1 + 0x304);
  *(uint64_t *)(lVar3 + 0x3c) = uVar9;
  uVar9 = *(uint64_t *)(lVar1 + 0x31c);
  *(uint64_t *)(lVar3 + 0x44) = *(uint64_t *)(lVar1 + 0x314);
  *(uint64_t *)(lVar3 + 0x4c) = uVar9;
  uVar6 = *(int32_t *)(lVar1 + 0x328);
  uVar7 = *(int32_t *)(lVar1 + 0x32c);
  uVar8 = *(int32_t *)(lVar1 + 0x330);
  *(int32_t *)(lVar3 + 0x54) = *(int32_t *)(lVar1 + 0x324);
  *(int32_t *)(lVar3 + 0x58) = uVar6;
  *(int32_t *)(lVar3 + 0x5c) = uVar7;
  *(int32_t *)(lVar3 + 0x60) = uVar8;
  *(uint64_t *)(lVar3 + 100) = *(uint64_t *)(lVar1 + 0x334);
  plVar4 = (int64_t *)*param_4;
  if ((((char)plVar4[2] == '\0') && (*(char *)((int64_t)plVar4 + 0x11) == '\0')) && (*plVar4 != 0))
  {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(int16_t *)(plVar4 + 2) = 1;
  *plVar4 = lVar2;
  plVar4[1] = param_2;
  puVar5 = (uint64_t *)*param_4;
  if ((*(char *)((int64_t)puVar5 + 0x66) == '\0') && (*(char *)(puVar5 + 2) != '\0')) {
    uVar9 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,puVar5[1],3);
                    // WARNING: Subroutine does not return
    memcpy(uVar9,*puVar5,puVar5[1]);
  }
  return;
}



uint64_t *
FUN_18023ec00(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &memory_allocator_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 9;
  strcpy_s(param_2[1],0x80,&processed_var_8872_ptr,param_4,0,0xfffffffffffffffe);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




