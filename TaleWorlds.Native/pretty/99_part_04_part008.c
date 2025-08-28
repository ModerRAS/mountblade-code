#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part008.c - 18 个函数

// 函数: void FUN_18025d310(int32_t *param_1,int64_t *param_2)
void FUN_18025d310(int32_t *param_1,int64_t *param_2)

{
  int32_t uVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  
  uVar1 = *param_1;
  puVar4 = (int32_t *)param_2[1];
  if ((uint64_t)((param_2[2] - (int64_t)puVar4) + *param_2) < 5) {
    System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar4 = (int32_t *)param_2[1];
  uVar1 = param_1[1];
  if ((uint64_t)((param_2[2] - (int64_t)puVar4) + *param_2) < 5) {
    System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar4 = (int32_t *)param_2[1];
  uVar1 = param_1[2];
  if ((uint64_t)((param_2[2] - (int64_t)puVar4) + *param_2) < 5) {
    System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar4 = (int32_t *)param_2[1];
  uVar1 = param_1[3];
  if ((uint64_t)((param_2[2] - (int64_t)puVar4) + *param_2) < 5) {
    System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar4 = (int32_t *)param_2[1];
  uVar1 = param_1[4];
  if ((uint64_t)((param_2[2] - (int64_t)puVar4) + *param_2) < 5) {
    System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = uVar1;
  param_2[1] = param_2[1] + 4;
  FUN_1802575d0(puVar4,param_1[5],param_2);
  puVar2 = (uint64_t *)param_2[1];
  uVar3 = *(uint64_t *)(param_1 + 6);
  if ((uint64_t)((param_2[2] - (int64_t)puVar2) + *param_2) < 9) {
    System_BufferManager(param_2,(int64_t)puVar2 + (8 - *param_2));
    *(uint64_t *)param_2[1] = uVar3;
  }
  else {
    *puVar2 = uVar3;
  }
  param_2[1] = param_2[1] + 8;
  return;
}






// 函数: void FUN_18025d480(int32_t *param_1,int64_t param_2)
void FUN_18025d480(int32_t *param_1,int64_t param_2)

{
  int32_t uVar1;
  
  *param_1 = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  param_1[1] = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  param_1[2] = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  param_1[3] = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  uVar1 = **(int32_t **)(param_2 + 8);
  param_1[4] = uVar1;
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  FUN_180257480(uVar1,param_2,param_1 + 5);
  *(uint64_t *)(param_1 + 6) = **(uint64_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 8;
  return;
}






// 函数: void FUN_18025d510(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18025d510(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  void *puStack_48;
  int64_t lStack_40;
  int32_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  uint64_t uStack_18;
  int32_t uStack_10;
  
  puStack_48 = &system_data_buffer_ptr;
  uStack_30 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_10 = 3;
  FUN_18025d650(&puStack_48,param_1,param_3,param_4,0xfffffffffffffffe,&uStack_28);
  FUN_18025d860(&puStack_48,param_3);
  FUN_1800ff020(&uStack_28);
  puStack_48 = &system_data_buffer_ptr;
  if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}






// 函数: void FUN_18025d5f0(uint64_t *param_1)
void FUN_18025d5f0(uint64_t *param_1)

{
  FUN_1800ff020();
  *param_1 = &system_data_buffer_ptr;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &system_state_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18025d650(int64_t *param_1,int64_t param_2)
void FUN_18025d650(int64_t *param_1,int64_t param_2)

{
  uint uVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint *puVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t lVar10;
  
  uVar1 = **(uint **)(param_2 + 8);
  puVar7 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar7;
  if (uVar1 != 0) {
    (**(code **)(*param_1 + 0x18))(param_1,puVar7,uVar1);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar1;
    puVar7 = *(uint **)(param_2 + 8);
  }
  uVar1 = *puVar7;
  param_1 = param_1 + 4;
  *(uint **)(param_2 + 8) = puVar7 + 1;
  FUN_1800b8570(param_1,(int64_t)(int)uVar1);
  if ((int64_t)(int)uVar1 < 1) {
    return;
  }
  *(int32_t *)*param_1 = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  iVar2 = **(int **)(param_2 + 8);
  uVar5 = (uint64_t)iVar2;
  *(int **)(param_2 + 8) = *(int **)(param_2 + 8) + 1;
  lVar3 = *param_1;
  lVar4 = *(int64_t *)(lVar3 + 0x10);
  lVar8 = *(int64_t *)(lVar3 + 8);
  uVar6 = lVar4 - lVar8 >> 3;
  if (uVar6 < uVar5) {
    uVar5 = uVar5 - uVar6;
    if ((uint64_t)(*(int64_t *)(lVar3 + 0x18) - lVar4 >> 3) < uVar5) {
      uVar9 = uVar6 * 2;
      if (uVar6 == 0) {
        uVar9 = 1;
      }
      if (uVar9 < uVar6 + uVar5) {
        uVar9 = uVar6 + uVar5;
      }
      if (uVar9 == 0) {
        lVar10 = lVar4;
        lVar4 = 0;
      }
      else {
        lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar9 * 8,*(int8_t *)(lVar3 + 0x20));
        lVar8 = *(int64_t *)(lVar3 + 8);
        lVar10 = *(int64_t *)(lVar3 + 0x10);
      }
      if (lVar8 != lVar10) {
                    // WARNING: Subroutine does not return
        memmove(lVar4,lVar8,lVar10 - lVar8);
      }
      if (uVar5 != 0) {
                    // WARNING: Subroutine does not return
        memset(lVar4,0,uVar5 * 8);
      }
      if (*(int64_t *)(lVar3 + 8) != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *(int64_t *)(lVar3 + 8) = lVar4;
      *(uint64_t *)(lVar3 + 0x18) = lVar4 + uVar9 * 8;
    }
    else if (uVar5 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar4,0,uVar5 * 8);
    }
  }
  else {
    lVar4 = lVar8 + uVar5 * 8;
  }
  *(int64_t *)(lVar3 + 0x10) = lVar4;
                    // WARNING: Subroutine does not return
  memcpy(*(uint64_t *)(*param_1 + 8),*(uint64_t *)(param_2 + 8),(int64_t)(iVar2 * 8));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18025d6bd(void)
void FUN_18025d6bd(void)

{
  int64_t lVar1;
  int32_t *in_RAX;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t unaff_R14;
  int64_t *unaff_R15;
  int64_t *in_stack_00000068;
  int iStack0000000000000070;
  
  *(int32_t *)*unaff_R15 = *in_RAX;
  *(int64_t *)(unaff_R14 + 8) = *(int64_t *)(unaff_R14 + 8) + 4;
  iStack0000000000000070 = **(int **)(unaff_R14 + 8);
  uVar3 = (uint64_t)iStack0000000000000070;
  *(int **)(unaff_R14 + 8) = *(int **)(unaff_R14 + 8) + 1;
  lVar1 = *unaff_R15;
  lVar2 = *(int64_t *)(lVar1 + 0x10);
  lVar5 = *(int64_t *)(lVar1 + 8);
  uVar4 = lVar2 - lVar5 >> 3;
  if (uVar4 < uVar3) {
    uVar3 = uVar3 - uVar4;
    if ((uint64_t)(*(int64_t *)(lVar1 + 0x18) - lVar2 >> 3) < uVar3) {
      uVar6 = uVar4 * 2;
      if (uVar4 == 0) {
        uVar6 = 1;
      }
      if (uVar6 < uVar4 + uVar3) {
        uVar6 = uVar4 + uVar3;
      }
      if (uVar6 == 0) {
        lVar7 = lVar2;
        lVar2 = 0;
      }
      else {
        lVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar6 * 8,*(int8_t *)(lVar1 + 0x20));
        lVar5 = *(int64_t *)(lVar1 + 8);
        lVar7 = *(int64_t *)(lVar1 + 0x10);
      }
      if (lVar5 != lVar7) {
                    // WARNING: Subroutine does not return
        memmove(lVar2,lVar5,lVar7 - lVar5);
      }
      if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
        memset(lVar2,0,uVar3 * 8);
      }
      if (*(int64_t *)(lVar1 + 8) != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *(int64_t *)(lVar1 + 8) = lVar2;
      *(uint64_t *)(lVar1 + 0x18) = lVar2 + uVar6 * 8;
    }
    else {
      in_stack_00000068 = unaff_R15;
      if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
        memset(lVar2,0,uVar3 * 8);
      }
    }
  }
  else {
    lVar2 = lVar5 + uVar3 * 8;
    in_stack_00000068 = unaff_R15;
  }
  *(int64_t *)(lVar1 + 0x10) = lVar2;
                    // WARNING: Subroutine does not return
  memcpy(*(uint64_t *)(*in_stack_00000068 + 8),*(uint64_t *)(unaff_R14 + 8),
         (int64_t)(iStack0000000000000070 * 8));
}






// 函数: void FUN_18025d849(void)
void FUN_18025d849(void)

{
  return;
}






// 函数: void FUN_18025d860(int64_t param_1,int64_t *param_2)
void FUN_18025d860(int64_t param_1,int64_t *param_2)

{
  int32_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  int *piVar5;
  int64_t lVar6;
  int iVar7;
  uint64_t uVar8;
  
  System_QueueProcessor(param_2,param_1);
  piVar5 = (int *)param_2[1];
  iVar7 = (int)((*(int64_t *)(param_1 + 0x28) - *(int64_t *)(param_1 + 0x20)) / 0x28);
  if ((uint64_t)((*param_2 - (int64_t)piVar5) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)piVar5 + (4 - *param_2));
    piVar5 = (int *)param_2[1];
  }
  *piVar5 = iVar7;
  puVar4 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar4;
  if (0 < iVar7) {
    uVar1 = **(int32_t **)(param_1 + 0x20);
    if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
      System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
      puVar4 = (int32_t *)param_2[1];
    }
    *puVar4 = uVar1;
    param_2[1] = param_2[1] + 4;
    piVar5 = (int *)param_2[1];
    lVar6 = *(int64_t *)(*(int64_t *)(param_1 + 0x20) + 0x10);
    lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x20) + 8);
    if ((uint64_t)((*param_2 - (int64_t)piVar5) + param_2[2]) < 5) {
      System_BufferManager(param_2,(int64_t)piVar5 + (4 - *param_2));
      piVar5 = (int *)param_2[1];
    }
    iVar7 = (int)(lVar6 - lVar2 >> 3);
    *piVar5 = iVar7;
    param_2[1] = param_2[1] + 4;
    lVar6 = param_2[1];
    uVar3 = *(uint64_t *)(*(int64_t *)(param_1 + 0x20) + 8);
    uVar8 = (int64_t)iVar7 * 8;
    if ((uint64_t)((*param_2 - lVar6) + param_2[2]) <= uVar8) {
      System_BufferManager(param_2,uVar8 + (lVar6 - *param_2));
      lVar6 = param_2[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(lVar6,uVar3,uVar8);
  }
  return;
}






// 函数: void FUN_18025d8e7(int32_t *param_1)
void FUN_18025d8e7(int32_t *param_1)

{
  int32_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int *piVar4;
  int64_t lVar5;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int iVar6;
  uint64_t uVar7;
  
  uVar1 = **(int32_t **)(unaff_RBP + 0x20);
  if ((uint64_t)((*unaff_RBX - (int64_t)param_1) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    param_1 = (int32_t *)unaff_RBX[1];
  }
  *param_1 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  piVar4 = (int *)unaff_RBX[1];
  lVar5 = *(int64_t *)(*(int64_t *)(unaff_RBP + 0x20) + 0x10);
  lVar2 = *(int64_t *)(*(int64_t *)(unaff_RBP + 0x20) + 8);
  if ((uint64_t)((*unaff_RBX - (int64_t)piVar4) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    piVar4 = (int *)unaff_RBX[1];
  }
  iVar6 = (int)(lVar5 - lVar2 >> 3);
  *piVar4 = iVar6;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar5 = unaff_RBX[1];
  uVar3 = *(uint64_t *)(*(int64_t *)(unaff_RBP + 0x20) + 8);
  uVar7 = (int64_t)iVar6 * 8;
  if ((uint64_t)((*unaff_RBX - lVar5) + unaff_RBX[2]) <= uVar7) {
    System_BufferManager();
    lVar5 = unaff_RBX[1];
  }
                    // WARNING: Subroutine does not return
  memcpy(lVar5,uVar3,uVar7);
}






// 函数: void FUN_18025d9db(void)
void FUN_18025d9db(void)

{
  return;
}






// 函数: void FUN_18025d9f0(int64_t param_1,int64_t *param_2)
void FUN_18025d9f0(int64_t param_1,int64_t *param_2)

{
  int8_t uVar1;
  uint64_t uVar2;
  int8_t *puVar3;
  uint64_t *puVar4;
  int32_t *puVar5;
  
  puVar5 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar5 + (4 - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  *puVar5 = 0;
  puVar3 = (int8_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar3;
  uVar1 = *(int8_t *)(param_1 + 8);
  if ((uint64_t)((*param_2 - (int64_t)puVar3) + param_2[2]) < 2) {
    System_BufferManager(param_2,puVar3 + (1 - *param_2));
    puVar3 = (int8_t *)param_2[1];
  }
  *puVar3 = uVar1;
  puVar4 = (uint64_t *)(param_2[1] + 1);
  param_2[1] = (int64_t)puVar4;
  if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 0x11) {
    System_BufferManager(param_2,(int64_t)puVar4 + (0x10 - *param_2));
    puVar4 = (uint64_t *)param_2[1];
  }
  uVar2 = *(uint64_t *)(param_1 + 0x14);
  *puVar4 = *(uint64_t *)(param_1 + 0xc);
  puVar4[1] = uVar2;
  param_2[1] = param_2[1] + 0x10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18025daf0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  
  puVar2 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,3,0xfffffffffffffffe);
  *puVar2 = &unknown_var_5192_ptr;
  *puVar2 = &unknown_var_3616_ptr;
  *(int8_t *)(puVar2 + 1) = 0;
  *(uint64_t *)((int64_t)puVar2 + 0xc) = 0;
  *(uint64_t *)((int64_t)puVar2 + 0x14) = 0;
  if (param_2 != 0) {
    *(int8_t *)(puVar2 + 1) = *(int8_t *)(param_2 + 8);
    uVar1 = *(uint64_t *)(param_2 + 0x14);
    *(uint64_t *)((int64_t)puVar2 + 0xc) = *(uint64_t *)(param_2 + 0xc);
    *(uint64_t *)((int64_t)puVar2 + 0x14) = uVar1;
  }
  return puVar2;
}






// 函数: void FUN_18025db70(int64_t param_1)
void FUN_18025db70(int64_t param_1)

{
  int64_t alStack_30 [2];
  code *pcStack_20;
  code *pcStack_18;
  
  if (*(int64_t *)(param_1 + 0xb0) != 0) {
    pcStack_20 = (code *)&unknown_var_2656_ptr;
    pcStack_18 = FUN_18025dd00;
    alStack_30[0] = param_1;
    (**(code **)(**(int64_t **)(param_1 + 0x88) + 0x60))
              (*(int64_t **)(param_1 + 0x88),&system_data_0e28,param_1 + 0xc,0,alStack_30);
    if (pcStack_20 != (code *)0x0) {
      (*pcStack_20)(alStack_30,0,0);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18025dc00(int64_t param_1)
void FUN_18025dc00(int64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  void *puVar6;
  
  if (*(char *)(*(int64_t *)(param_1 + 0x20) + 8) == '\0') {
    uVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xe0,0x10,3,0xfffffffffffffffe);
    plVar5 = (int64_t *)FUN_1802ac0a0(uVar4);
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    plVar1 = *(int64_t **)(param_1 + 0xb0);
    *(int64_t **)(param_1 + 0xb0) = plVar5;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    plVar5 = (int64_t *)(*(int64_t *)(param_1 + 0xb0) + 0x10);
    puVar6 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x70) != (void *)0x0) {
      puVar6 = *(void **)(param_1 + 0x70);
    }
    (**(code **)(*plVar5 + 0x10))(plVar5,puVar6);
    *(int64_t *)(*(int64_t *)(param_1 + 0xb0) + 0xa8) = param_1;
    *(int8_t *)(*(int64_t *)(param_1 + 0xb0) + 0xb1) = 1;
    lVar2 = system_resource_state;
    plVar5 = *(int64_t **)(param_1 + 0xb0);
    iVar3 = (**(code **)(*plVar5 + 0x60))(plVar5);
    *(int8_t *)((int64_t)plVar5 + 0xb2) = 1;
    FUN_1802abe00((int64_t)iVar3 * 0x98 + lVar2 + 8,plVar5);
  }
  return;
}






// 函数: void FUN_18025dd00(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)
void FUN_18025dd00(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)

{
  int32_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  void *puStack_58;
  int64_t lStack_50;
  int32_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  int32_t uStack_20;
  
  puStack_58 = &system_data_buffer_ptr;
  uStack_40 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 3;
  FUN_18025d650(&puStack_58,param_1,param_3,param_4,0xfffffffffffffffe);
  lVar2 = *(int64_t *)(*param_4 + 0xb0);
  uVar3 = *(uint64_t *)(lVar2 + 0xb8);
  *(uint64_t *)(lVar2 + 0xb8) = uStack_38;
  uVar4 = *(uint64_t *)(lVar2 + 0xc0);
  *(uint64_t *)(lVar2 + 0xc0) = uStack_30;
  uVar5 = *(uint64_t *)(lVar2 + 200);
  *(uint64_t *)(lVar2 + 200) = uStack_28;
  uVar1 = *(int32_t *)(lVar2 + 0xd0);
  *(int32_t *)(lVar2 + 0xd0) = uStack_20;
  uStack_38 = uVar3;
  uStack_30 = uVar4;
  uStack_28 = uVar5;
  uStack_20 = uVar1;
  FUN_1800ff020(&uStack_38);
  puStack_58 = &system_data_buffer_ptr;
  if (lStack_50 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_18025de70(uint64_t param_1,int64_t param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  
  uVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xd8,8,0x1a);
  lVar5 = FUN_18025f2a0(uVar4);
  if (param_2 != 0) {
    *(int32_t *)(lVar5 + 8) = *(int32_t *)(param_2 + 8);
    FUN_180627be0(lVar5 + 0x10,param_2 + 0x10);
    uVar1 = *(int32_t *)(param_2 + 0x34);
    uVar2 = *(int32_t *)(param_2 + 0x38);
    uVar3 = *(int32_t *)(param_2 + 0x3c);
    *(int32_t *)(lVar5 + 0x30) = *(int32_t *)(param_2 + 0x30);
    *(int32_t *)(lVar5 + 0x34) = uVar1;
    *(int32_t *)(lVar5 + 0x38) = uVar2;
    *(int32_t *)(lVar5 + 0x3c) = uVar3;
    if ((uint64_t *)(lVar5 + 0x40) != (uint64_t *)(param_2 + 0x40)) {
      FUN_1802620c0((uint64_t *)(lVar5 + 0x40),*(uint64_t *)(param_2 + 0x40),
                    *(uint64_t *)(param_2 + 0x48));
    }
    if ((uint64_t *)(lVar5 + 0x60) != (uint64_t *)(param_2 + 0x60)) {
      FUN_180261ea0((uint64_t *)(lVar5 + 0x60),*(uint64_t *)(param_2 + 0x60),
                    *(uint64_t *)(param_2 + 0x68));
    }
    if ((uint64_t *)(lVar5 + 0x80) != (uint64_t *)(param_2 + 0x80)) {
      FUN_1802622c0((uint64_t *)(lVar5 + 0x80),*(uint64_t *)(param_2 + 0x80),
                    *(uint64_t *)(param_2 + 0x88));
    }
    uVar4 = *(uint64_t *)(param_2 + 0xa8);
    *(uint64_t *)(lVar5 + 0xa0) = *(uint64_t *)(param_2 + 0xa0);
    *(uint64_t *)(lVar5 + 0xa8) = uVar4;
    uVar4 = *(uint64_t *)(param_2 + 0xb8);
    *(uint64_t *)(lVar5 + 0xb0) = *(uint64_t *)(param_2 + 0xb0);
    *(uint64_t *)(lVar5 + 0xb8) = uVar4;
    uVar4 = *(uint64_t *)(param_2 + 200);
    *(uint64_t *)(lVar5 + 0xc0) = *(uint64_t *)(param_2 + 0xc0);
    *(uint64_t *)(lVar5 + 200) = uVar4;
    *(int32_t *)(lVar5 + 0xd0) = *(int32_t *)(param_2 + 0xd0);
    *(int8_t *)(lVar5 + 0xd4) = *(int8_t *)(param_2 + 0xd4);
  }
  return lVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18025df70(int64_t param_1)
void FUN_18025df70(int64_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  void *puVar3;
  
  if ((*(int64_t *)(param_1 + 0xb0) == 0) &&
     (*(char *)(*(int64_t *)(param_1 + 0x20) + 0xd4) == '\0')) {
    plVar2 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x140,0x10,6,0,0xfffffffffffffffe);
    *plVar2 = (int64_t)&system_handler1_ptr;
    *plVar2 = (int64_t)&system_handler2_ptr;
    *(int32_t *)(plVar2 + 1) = 0;
    *plVar2 = (int64_t)&unknown_var_8584_ptr;
    plVar1 = plVar2 + 2;
    *plVar1 = (int64_t)&system_state_ptr;
    plVar2[3] = 0;
    *(int32_t *)(plVar2 + 4) = 0;
    *plVar1 = (int64_t)&unknown_var_3432_ptr;
    plVar2[3] = (int64_t)(plVar2 + 5);
    *(int32_t *)(plVar2 + 4) = 0;
    *(int8_t *)(plVar2 + 5) = 0;
    *(int8_t *)((int64_t)plVar2 + 0xb2) = 0;
    *(int32_t *)(plVar2 + 1) = 0;
    *(int16_t *)(plVar2 + 0x16) = 0;
    plVar2[0x15] = 0;
    *plVar2 = (int64_t)&unknown_var_5960_ptr;
    plVar2[0x15] = param_1;
    plVar2[0x17] = 0;
    *(int8_t *)((int64_t)plVar2 + 300) = 0;
    plVar2[0x18] = 0;
    plVar2[0x19] = 0;
    plVar2[0x1a] = 0;
    plVar2[0x1b] = 0;
    plVar2[0x1c] = 0;
    plVar2[0x1d] = 0;
    plVar2[0x1e] = 0;
    plVar2[0x1f] = 0;
    plVar2[0x20] = 0;
    *(int32_t *)(plVar2 + 0x25) = 0;
    plVar2[0x21] = 0;
    plVar2[0x22] = 0;
    plVar2[0x23] = 0;
    plVar2[0x24] = 0;
    (**(code **)(*plVar2 + 0x28))(plVar2);
    puVar3 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x70) != (void *)0x0) {
      puVar3 = *(void **)(param_1 + 0x70);
    }
    (**(code **)(*plVar1 + 0x10))(plVar1,puVar3);
    plVar1 = *(int64_t **)(param_1 + 0xb0);
    *(int64_t **)(param_1 + 0xb0) = plVar2;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    *(int8_t *)(*(int64_t *)(param_1 + 0xb0) + 0xb1) = 1;
    FUN_1800b5cc0();
  }
  return;
}






// 函数: void FUN_18025e150(int32_t param_1,int64_t param_2)
void FUN_18025e150(int32_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t in_RCX;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int32_t uStack_38;
  int32_t uStack_34;
  uint64_t uStack_30;
  int32_t uStack_28;
  int32_t uStack_24;
  code *pcStack_20;
  void *puStack_18;
  
  if (*(int64_t *)(param_2 + 0xb0) == 0) {
    plVar1 = *(int64_t **)(in_RCX + 0xb0);
    if (plVar1 != (int64_t *)0x0) {
      plStackX_8 = plVar1;
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plStackX_8 = *(int64_t **)(param_2 + 0xb0);
    *(int64_t **)(param_2 + 0xb0) = plVar1;
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  else {
    pplStackX_10 = &plStackX_8;
    plStackX_8 = *(int64_t **)(in_RCX + 0xb0);
    if (plStackX_8 != (int64_t *)0x0) {
      param_1 = (**(code **)(*plStackX_8 + 0x28))();
    }
    FUN_1800b55b0(param_1,&plStackX_8);
  }
  uStack_30 = (int64_t **)CONCAT44(uStack_30._4_4_,(int32_t)uStack_30);
  if (*(int64_t *)(in_RCX + 0xb0) != 0) {
    *(int64_t *)(*(int64_t *)(in_RCX + 0xb0) + 0xa8) = param_2;
    lVar2 = *(int64_t *)(in_RCX + 0xb0);
    uStack_30 = (int64_t **)CONCAT44(uStack_30._4_4_,(int32_t)uStack_30);
    if (*(int64_t *)(lVar2 + 0xb8) != 0) {
      plStackX_8 = *(int64_t **)(lVar2 + 0xa8);
      uStack_30 = &plStackX_8;
      pcStack_20 = (code *)&unknown_var_4016_ptr;
      puStack_18 = &unknown_var_4000_ptr;
      uStack_38 = (int32_t)lVar2;
      uStack_34 = (int32_t)((uint64_t)lVar2 >> 0x20);
      uStack_28 = uStack_38;
      uStack_24 = uStack_34;
      (**(code **)(*(int64_t *)plStackX_8[0x11] + 0x60))
                ((int64_t *)plStackX_8[0x11],&system_data_0d48,(int64_t)plStackX_8 + 0xc,0,&uStack_30
                );
      if (pcStack_20 != (code *)0x0) {
        (*pcStack_20)(&uStack_30,0,0);
      }
    }
  }
  plStackX_8 = *(int64_t **)(in_RCX + 0xb0);
  *(uint64_t *)(in_RCX + 0xb0) = 0;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}






// 函数: void FUN_18025e330(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18025e330(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  void *puStack_98;
  int64_t lStack_90;
  int32_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  int32_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  int32_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  int32_t uStack_20;
  uint64_t uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  puStack_98 = &system_data_buffer_ptr;
  uStack_80 = 0;
  lStack_90 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 6;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 6;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 6;
  FUN_18025e700(&puStack_98,param_1,param_3,param_4,&uStack_38);
  FUN_18025e470(&puStack_98,param_3);
  FUN_18014e570(&uStack_38);
  FUN_18014e4d0(&uStack_58);
  FUN_18014e470(&uStack_78);
  puStack_98 = &system_data_buffer_ptr;
  if (lStack_90 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}






// 函数: void FUN_18025e470(int64_t param_1,int64_t *param_2)
void FUN_18025e470(int64_t param_1,int64_t *param_2)

{
  int *piVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int32_t *puVar8;
  uint64_t uVar9;
  
  System_QueueProcessor(param_2,param_1);
  lVar7 = *(int64_t *)(param_1 + 0x48) - *(int64_t *)(param_1 + 0x40);
  piVar1 = (int *)param_2[1];
  lVar7 = lVar7 / 0x12 + (lVar7 >> 0x3f);
  if ((uint64_t)((*param_2 - (int64_t)piVar1) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)piVar1 + (4 - *param_2));
    piVar1 = (int *)param_2[1];
  }
  *piVar1 = (int)(lVar7 >> 2) - (int)(lVar7 >> 0x3f);
  param_2[1] = param_2[1] + 4;
  uVar6 = 0;
  puVar8 = (int32_t *)param_2[1];
  uVar3 = (*(int64_t *)(param_1 + 0x48) - *(int64_t *)(param_1 + 0x40)) / 0x48;
  uVar5 = uVar6;
  uVar9 = uVar6;
  if (uVar3 != 0) {
    do {
      FUN_18025e930(*(int64_t *)(param_1 + 0x40) + uVar9 * 0x48,uVar3,param_2);
      uVar4 = (int)uVar5 + 1;
      uVar3 = (*(int64_t *)(param_1 + 0x48) - *(int64_t *)(param_1 + 0x40)) / 0x48;
      uVar5 = (uint64_t)uVar4;
      uVar9 = (int64_t)(int)uVar4;
    } while ((uint64_t)(int64_t)(int)uVar4 < uVar3);
    puVar8 = (int32_t *)param_2[1];
  }
  lVar7 = *(int64_t *)(param_1 + 0x68);
  lVar2 = *(int64_t *)(param_1 + 0x60);
  if ((uint64_t)((*param_2 - (int64_t)puVar8) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar8 + (4 - *param_2));
    puVar8 = (int32_t *)param_2[1];
  }
  *puVar8 = (int)((lVar7 - lVar2) / 0x38);
  param_2[1] = param_2[1] + 4;
  piVar1 = (int *)param_2[1];
  uVar3 = (*(int64_t *)(param_1 + 0x68) - *(int64_t *)(param_1 + 0x60)) / 0x38;
  uVar5 = uVar6;
  uVar9 = uVar6;
  if (uVar3 != 0) {
    do {
      FUN_18025ea90(uVar9 * 0x38 + *(int64_t *)(param_1 + 0x60),uVar3,param_2);
      uVar4 = (int)uVar5 + 1;
      uVar3 = (*(int64_t *)(param_1 + 0x68) - *(int64_t *)(param_1 + 0x60)) / 0x38;
      uVar5 = (uint64_t)uVar4;
      uVar9 = (int64_t)(int)uVar4;
    } while ((uint64_t)(int64_t)(int)uVar4 < uVar3);
    piVar1 = (int *)param_2[1];
  }
  lVar7 = *(int64_t *)(param_1 + 0x28) - *(int64_t *)(param_1 + 0x20);
  lVar7 = lVar7 / 6 + (lVar7 >> 0x3f);
  if ((uint64_t)((*param_2 - (int64_t)piVar1) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)piVar1 + (4 - *param_2));
    piVar1 = (int *)param_2[1];
  }
  *piVar1 = (int)(lVar7 >> 4) - (int)(lVar7 >> 0x3f);
  param_2[1] = param_2[1] + 4;
  lVar2 = *(int64_t *)(param_1 + 0x28) - *(int64_t *)(param_1 + 0x20);
  lVar7 = lVar2 >> 0x3f;
  uVar3 = uVar6;
  if (lVar2 / 0x60 + lVar7 != lVar7) {
    do {
      FUN_18025eb50(uVar3 * 0x60 + *(int64_t *)(param_1 + 0x20),param_2);
      uVar4 = (int)uVar6 + 1;
      uVar6 = (uint64_t)uVar4;
      uVar3 = (int64_t)(int)uVar4;
    } while ((uint64_t)(int64_t)(int)uVar4 <
             (uint64_t)((*(int64_t *)(param_1 + 0x28) - *(int64_t *)(param_1 + 0x20)) / 0x60));
  }
  return;
}






