#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part032.c - 21 个函数

// 函数: void FUN_1801eb320(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801eb320(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_30;
  int32_t uStack_2c;
  int64_t *plStack_28;
  void *puStack_20;
  void *puStack_18;
  
  uVar5 = 0xfffffffffffffffe;
  param_1 = (int64_t *)*param_1;
  lVar1 = *param_1;
  while (uVar2 = system_context_ptr, *(int *)(lVar1 + 0x30c) != 0) {
    lVar3 = FUN_18005e890(system_context_ptr);
    if (lVar3 != 0) {
      plVar4 = (int64_t *)FUN_18005e890(uVar2);
      (**(code **)(*plVar4 + 0x20))(plVar4,0,*plVar4,param_4,uVar5);
    }
  }
  plStack_28 = param_1 + 1;
  puStack_20 = &unknown_var_3392_ptr;
  puStack_18 = &unknown_var_3376_ptr;
  uStack_40 = (int32_t)*param_1;
  uStack_3c = (int32_t)((uint64_t)*param_1 >> 0x20);
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  FUN_18005c650(&uStack_30);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_1801eb3d0(int64_t *param_1,int64_t *param_2,int param_3)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c03480;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    lVar2 = *param_1;
    if (lVar2 != 0) {
      *(uint64_t *)(lVar2 + 8) = &system_data_buffer_ptr;
      if (*(int64_t *)(lVar2 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *(uint64_t *)(lVar2 + 0x10) = 0;
      *(int32_t *)(lVar2 + 0x20) = 0;
      *(uint64_t *)(lVar2 + 8) = &system_state_ptr;
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(lVar2);
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      *puVar3 = *puVar1;
      FUN_180627ae0(puVar3 + 1,puVar1 + 1);
      *param_1 = (int64_t)puVar3;
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






// 函数: void FUN_1801eb560(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801eb560(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int8_t auStack_30 [40];
  
  FUN_180627ae0(auStack_30,*param_1 + 0x10,param_3,param_4,0xfffffffffffffffe);
  FUN_1801cb3e0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_1801eb5a0(int64_t *param_1,int64_t *param_2,int param_3)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c033c0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    lVar2 = *param_1;
    if (lVar2 != 0) {
      *(uint64_t *)(lVar2 + 0x10) = &system_data_buffer_ptr;
      if (*(int64_t *)(lVar2 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *(uint64_t *)(lVar2 + 0x18) = 0;
      *(int32_t *)(lVar2 + 0x28) = 0;
      *(uint64_t *)(lVar2 + 0x10) = &system_state_ptr;
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(lVar2);
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x30,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      *puVar3 = *puVar1;
      *(int8_t *)(puVar3 + 1) = *(int8_t *)(puVar1 + 1);
      FUN_180627ae0(puVar3 + 2,puVar1 + 2);
      *param_1 = (int64_t)puVar3;
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



uint64_t FUN_1801eb780(uint64_t param_1,uint64_t param_2)

{
  FUN_1801ebc30();
  if ((param_2 & 1) != 0) {
    free(param_1,0x178);
  }
  return param_1;
}



uint64_t FUN_1801eb7c0(uint64_t param_1,uint64_t param_2)

{
  FUN_1801df040();
  if ((param_2 & 1) != 0) {
    free(param_1,0x398);
  }
  return param_1;
}



int64_t * FUN_1801eb800(int64_t *param_1,int64_t param_2,int64_t param_3,uint64_t param_4)

{
  void *puVar1;
  
  *param_1 = (int64_t)&system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = (int64_t)&system_data_buffer_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  param_1[4] = param_3;
  puVar1 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar1 = *(void **)(param_2 + 8);
  }
  (**(code **)(*param_1 + 0x10))
            (param_1,puVar1,*(code **)(*param_1 + 0x10),param_4,0xfffffffffffffffe);
  *(int8_t *)(param_1 + 5) = 0;
  return param_1;
}



int FUN_1801eb880(int64_t param_1)

{
  int iVar1;
  
  AcquireSRWLockExclusive(param_1 + 0x60);
  iVar1 = *(int *)(param_1 + 0x68) + 1;
  *(int *)(param_1 + 0x68) = iVar1;
  ReleaseSRWLockExclusive(param_1 + 0x60);
  return iVar1;
}



uint64_t * FUN_1801eb8e0(uint64_t *param_1)

{
  int64_t *plVar1;
  
  param_1[1] = 0xffffffffffffffff;
  *(int32_t *)(param_1 + 2) = 0xffffffff;
  *(int16_t *)((int64_t)param_1 + 0x14) = 0xffff;
  param_1[4] = 0;
  param_1[5] = &system_state_ptr;
  param_1[6] = 0;
  *(int32_t *)(param_1 + 7) = 0;
  param_1[5] = &system_data_buffer_ptr;
  param_1[8] = 0;
  param_1[6] = 0;
  *(int32_t *)(param_1 + 7) = 0;
  param_1[0xb] = 0;
  *param_1 = 0;
  plVar1 = (int64_t *)param_1[4];
  param_1[4] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int32_t *)(param_1 + 9) = 0;
  *(int32_t *)((int64_t)param_1 + 0x4c) = 0;
  *(int32_t *)(param_1 + 10) = 0;
  *(int32_t *)((int64_t)param_1 + 0x54) = 0;
  plVar1 = (int64_t *)param_1[0xb];
  param_1[0xb] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  return param_1;
}



int64_t FUN_1801eb9b0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  FUN_1801eb8e0();
  plVar1 = (int64_t *)(param_1 + 0x60);
  *plVar1 = (int64_t)&system_state_ptr;
  *(uint64_t *)(param_1 + 0x68) = 0;
  *(int32_t *)(param_1 + 0x70) = 0;
  *plVar1 = (int64_t)&system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 0x78) = 0;
  *(uint64_t *)(param_1 + 0x68) = 0;
  *(int32_t *)(param_1 + 0x70) = 0;
  plVar2 = (int64_t *)(param_1 + 0x80);
  *plVar2 = (int64_t)&system_state_ptr;
  *(uint64_t *)(param_1 + 0x88) = 0;
  *(int32_t *)(param_1 + 0x90) = 0;
  *plVar2 = (int64_t)&system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 0x98) = 0;
  *(uint64_t *)(param_1 + 0x88) = 0;
  *(int32_t *)(param_1 + 0x90) = 0;
  (**(code **)(*plVar1 + 0x10))(plVar1,&system_buffer_ptr,param_3,param_4,uVar3);
  (**(code **)(*plVar2 + 0x10))(plVar2,&system_buffer_ptr);
  *(int32_t *)(param_1 + 0xa4) = 0;
  *(int32_t *)(param_1 + 0xa8) = 0x11;
  *(int32_t *)(param_1 + 0xa0) = 0;
  return param_1;
}






// 函数: void FUN_1801eba80(int64_t param_1)
void FUN_1801eba80(int64_t param_1)

{
  *(uint64_t *)(param_1 + 0x10) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(int32_t *)(param_1 + 0x28) = 0;
  *(uint64_t *)(param_1 + 0x10) = &system_state_ptr;
  return;
}






// 函数: void FUN_1801ebae0(int64_t param_1)
void FUN_1801ebae0(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  
  uVar4 = *(uint64_t *)(param_1 + 0x10);
  lVar1 = *(int64_t *)(param_1 + 8);
  uVar3 = 0;
  if (uVar4 != 0) {
    do {
      lVar2 = *(int64_t *)(lVar1 + uVar3 * 8);
      if (lVar2 != 0) {
        *(uint64_t *)(lVar2 + 0x10) = &system_data_buffer_ptr;
        if (*(int64_t *)(lVar2 + 0x18) == 0) {
          *(uint64_t *)(lVar2 + 0x18) = 0;
          *(int32_t *)(lVar2 + 0x28) = 0;
          *(uint64_t *)(lVar2 + 0x10) = &system_state_ptr;
                    // WARNING: Subroutine does not return
          CoreMemoryPoolInitializer(lVar2);
        }
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *(uint64_t *)(lVar1 + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
    uVar4 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar4) && (*(int64_t *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return;
}






// 函数: void FUN_1801ebbf0(int64_t param_1)
void FUN_1801ebbf0(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  
  uVar4 = *(uint64_t *)(param_1 + 0x10);
  lVar1 = *(int64_t *)(param_1 + 8);
  uVar3 = 0;
  if (uVar4 != 0) {
    do {
      lVar2 = *(int64_t *)(lVar1 + uVar3 * 8);
      if (lVar2 != 0) {
        *(uint64_t *)(lVar2 + 0x10) = &system_data_buffer_ptr;
        if (*(int64_t *)(lVar2 + 0x18) == 0) {
          *(uint64_t *)(lVar2 + 0x18) = 0;
          *(int32_t *)(lVar2 + 0x28) = 0;
          *(uint64_t *)(lVar2 + 0x10) = &system_state_ptr;
                    // WARNING: Subroutine does not return
          CoreMemoryPoolInitializer(lVar2);
        }
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *(uint64_t *)(lVar1 + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
    uVar4 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar4) && (*(int64_t *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return;
}






// 函数: void FUN_1801ebc10(int64_t param_1)
void FUN_1801ebc10(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  
  uVar4 = *(uint64_t *)(param_1 + 0x10);
  lVar1 = *(int64_t *)(param_1 + 8);
  uVar3 = 0;
  if (uVar4 != 0) {
    do {
      lVar2 = *(int64_t *)(lVar1 + uVar3 * 8);
      if (lVar2 != 0) {
        *(uint64_t *)(lVar2 + 0x10) = &system_data_buffer_ptr;
        if (*(int64_t *)(lVar2 + 0x18) == 0) {
          *(uint64_t *)(lVar2 + 0x18) = 0;
          *(int32_t *)(lVar2 + 0x28) = 0;
          *(uint64_t *)(lVar2 + 0x10) = &system_state_ptr;
                    // WARNING: Subroutine does not return
          CoreMemoryPoolInitializer(lVar2);
        }
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *(uint64_t *)(lVar1 + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
    uVar4 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar4) && (*(int64_t *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return;
}






// 函数: void FUN_1801ebc30(uint64_t *param_1)
void FUN_1801ebc30(uint64_t *param_1)

{
  *param_1 = &unknown_var_3768_ptr;
  FUN_1801ebae0();
  _Mtx_destroy_in_situ();
  FUN_180057830();
  _Mtx_destroy_in_situ();
  _Mtx_destroy_in_situ();
  FUN_18005d260(param_1 + 1,param_1[3]);
  return;
}



int64_t * FUN_1801ebcd0(int64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  
  plVar1 = *(int64_t **)(param_1 + 0x48);
  *param_2 = (int64_t)plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  return param_2;
}



int64_t FUN_1801ebd20(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *(uint64_t *)(param_1 + 0x130) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x138) != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  *(uint64_t *)(param_1 + 0x138) = 0;
  *(int32_t *)(param_1 + 0x148) = 0;
  *(uint64_t *)(param_1 + 0x130) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x110) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x118) != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  *(uint64_t *)(param_1 + 0x118) = 0;
  *(int32_t *)(param_1 + 0x128) = 0;
  *(uint64_t *)(param_1 + 0x110) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0xf0) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0xf8) != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  *(uint64_t *)(param_1 + 0xf8) = 0;
  *(int32_t *)(param_1 + 0x108) = 0;
  *(uint64_t *)(param_1 + 0xf0) = &system_state_ptr;
  FUN_1801ec300(param_1 + 0xc0,*(uint64_t *)(param_1 + 0xd0),param_3,param_4,0xfffffffffffffffe);
  FUN_180049470(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x150);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_1801ebe20(int64_t *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  
  lVar3 = param_2[1] - *param_2 >> 5;
  uVar1 = *(uint *)(param_2 + 3);
  *(uint *)(param_1 + 3) = uVar1;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar3 << 5,uVar1 & 0xff,param_4,0xfffffffffffffffe);
  }
  *param_1 = lVar2;
  param_1[1] = lVar2;
  param_1[2] = lVar3 * 0x20 + lVar2;
  lVar3 = *param_1;
  lVar2 = param_2[1];
  for (lVar4 = *param_2; lVar4 != lVar2; lVar4 = lVar4 + 0x20) {
    FUN_180627ae0(lVar3,lVar4);
    lVar3 = lVar3 + 0x20;
  }
  param_1[1] = lVar3;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1801ebee0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  puVar2 = (uint64_t *)
           CoreMemoryPoolAllocator(system_memory_pool_ptr,0x48,*(int8_t *)(param_1 + 0x28),param_4,
                         0xfffffffffffffffe);
  *(int32_t *)(puVar2 + 4) = *(int32_t *)(param_2 + 0x20);
  lVar4 = *(int64_t *)(param_2 + 0x30) - *(int64_t *)(param_2 + 0x28) >> 5;
  uVar1 = *(uint *)(param_2 + 0x40);
  *(uint *)(puVar2 + 8) = uVar1;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar4 << 5,uVar1 & 0xff,puVar2 + 4,uVar6);
  }
  puVar2[5] = lVar3;
  puVar2[6] = lVar3;
  puVar2[7] = lVar4 * 0x20 + lVar3;
  lVar4 = puVar2[5];
  lVar3 = *(int64_t *)(param_2 + 0x30);
  for (lVar5 = *(int64_t *)(param_2 + 0x28); lVar5 != lVar3; lVar5 = lVar5 + 0x20) {
    FUN_180627ae0(lVar4,lVar5);
    lVar4 = lVar4 + 0x20;
  }
  puVar2[6] = lVar4;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = param_3;
  *(int8_t *)(puVar2 + 3) = *(int8_t *)(param_2 + 0x18);
  return puVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1801ebff0(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  uint uVar2;
  int64_t *plVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint64_t uVar11;
  
  uVar11 = 0xfffffffffffffffe;
  puVar5 = (uint64_t *)FUN_1801ebee0();
  if (*param_2 != 0) {
    uVar6 = FUN_1801ebff0(param_1,*param_2,puVar5,param_4,uVar11);
    *puVar5 = uVar6;
  }
  puVar4 = puVar5;
  for (plVar3 = (int64_t *)param_2[1]; plVar3 != (int64_t *)0x0; plVar3 = (int64_t *)plVar3[1]) {
    lVar8 = 0;
    puVar7 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x48,*(int8_t *)(param_1 + 0x28));
    *(int *)(puVar7 + 4) = (int)plVar3[4];
    plVar1 = puVar7 + 5;
    lVar9 = plVar3[6] - plVar3[5] >> 5;
    uVar2 = *(uint *)(plVar3 + 8);
    *(uint *)(puVar7 + 8) = uVar2;
    if (lVar9 != 0) {
      lVar8 = CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar9 << 5,uVar2 & 0xff,param_4,uVar11,plVar1);
    }
    *plVar1 = lVar8;
    puVar7[6] = lVar8;
    puVar7[7] = lVar9 * 0x20 + lVar8;
    lVar8 = *plVar1;
    lVar9 = plVar3[6];
    for (lVar10 = plVar3[5]; lVar10 != lVar9; lVar10 = lVar10 + 0x20) {
      FUN_180627ae0(lVar8,lVar10);
      lVar8 = lVar8 + 0x20;
    }
    puVar7[6] = lVar8;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = puVar4;
    *(char *)(puVar7 + 3) = (char)plVar3[3];
    puVar4[1] = puVar7;
    if (*plVar3 != 0) {
      uVar6 = FUN_1801ebff0(param_1,*plVar3,puVar7);
      *puVar7 = uVar6;
    }
    puVar4 = puVar7;
  }
  return puVar5;
}



uint64_t *
FUN_1801ec160(uint64_t *param_1,int64_t param_2,uint64_t *param_3,uint64_t param_4,
             uint64_t param_5)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  
  FUN_180049830();
  *param_1 = &unknown_var_3864_ptr;
  puVar1 = param_1 + 0x18;
  *puVar1 = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(int32_t *)(param_1 + 0x1d) = *(int32_t *)(param_2 + 0x28);
  *puVar1 = puVar1;
  param_1[0x19] = puVar1;
  param_1[0x1a] = 0;
  *(int8_t *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  if (*(int64_t *)(param_2 + 0x10) != 0) {
    puVar5 = (uint64_t *)FUN_1801ebff0(puVar1,*(int64_t *)(param_2 + 0x10),puVar1);
    param_1[0x1a] = puVar5;
    puVar4 = (uint64_t *)*puVar5;
    puVar3 = puVar5;
    while (puVar2 = puVar4, puVar2 != (uint64_t *)0x0) {
      puVar3 = puVar2;
      puVar4 = (uint64_t *)*puVar2;
    }
    *puVar1 = puVar3;
    puVar1 = (uint64_t *)puVar5[1];
    while (puVar3 = puVar1, puVar3 != (uint64_t *)0x0) {
      puVar5 = puVar3;
      puVar1 = (uint64_t *)puVar3[1];
    }
    param_1[0x19] = puVar5;
    param_1[0x1c] = *(uint64_t *)(param_2 + 0x20);
  }
  FUN_180627ae0(param_1 + 0x1e,param_3);
  SystemCore_EncryptionEngine0(param_1 + 0x22,param_4);
  SystemCore_EncryptionEngine0(param_1 + 0x26,param_5);
  param_1[3] = 0xfffffffffffffffc;
  FUN_1801ec300(param_2,*(uint64_t *)(param_2 + 0x10));
  *param_3 = &system_data_buffer_ptr;
  if (param_3[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  param_3[1] = 0;
  *(int32_t *)(param_3 + 3) = 0;
  *param_3 = &system_state_ptr;
  return param_1;
}






// 函数: void FUN_1801ec2d0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801ec2d0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  puVar1 = *(uint64_t **)(param_1 + 0x10);
  for (puVar2 = *(uint64_t **)(param_1 + 8); puVar2 != puVar1; puVar2 = puVar2 + 4) {
    (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
  }
  if (*(int64_t *)(param_1 + 8) == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}






// 函数: void FUN_1801ec300(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801ec300(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 != (uint64_t *)0x0) {
    FUN_1801ec300(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
    FUN_18005d580();
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(param_2);
  }
  return;
}






// 函数: void FUN_1801ec370(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801ec370(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1801ec300(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1801ec390(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801ec390(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1801ec300(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1801ec3c0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801ec3c0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1801ec300(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801ec3f0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801ec3f0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  void *puVar4;
  float fVar5;
  int64_t lStackX_10;
  int32_t uVar6;
  void *puStack_58;
  int64_t lStack_50;
  uint uStack_48;
  uint64_t uStack_40;
  
  lVar2 = system_system_data_config;
  if (system_system_data_config == 0) {
    QueryPerformanceCounter(&lStackX_10,param_2,param_3,param_4,0,0xfffffffffffffffe);
    lVar2 = lStackX_10;
  }
  fVar5 = (float)((double)(lVar2 - system_system_data_config) * system_system_data_config - (double)param_1[5]);
  *(float *)param_1[4] = fVar5;
  if (*(char *)(param_1 + 6) == '\0') {
    *param_1 = &system_data_buffer_ptr;
    if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    param_1[1] = 0;
    *(int32_t *)(param_1 + 3) = 0;
    *param_1 = &system_state_ptr;
    return;
  }
  puStack_58 = &system_data_buffer_ptr;
  uStack_40 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  uVar6 = 1;
  uVar1 = *(uint *)(param_1 + 2);
  uVar3 = (uint64_t)uVar1;
  if (param_1[1] != 0) {
    CoreMemoryPoolProcessor(&puStack_58,uVar3);
  }
  if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(lStack_50,param_1[1],uVar3,param_4,uVar6);
  }
  if (lStack_50 != 0) {
    *(int8_t *)(uVar3 + lStack_50) = 0;
  }
  uStack_48 = uVar1;
  uStack_40._4_4_ = *(uint *)((int64_t)param_1 + 0x1c);
  CoreMemoryPoolProcessor(&puStack_58,3);
  *(int32_t *)((uint64_t)uStack_48 + lStack_50) = 0x203a20;
  uStack_48 = 3;
  FUN_18005d190(param_1,&puStack_58);
  puStack_58 = &system_data_buffer_ptr;
  if (lStack_50 != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  lStack_50 = 0;
  uStack_40 = (uint64_t)uStack_40._4_4_ << 0x20;
  puStack_58 = &system_state_ptr;
  FUN_1806284c0(param_1,fVar5);
  puVar4 = &system_buffer_ptr;
  if ((void *)param_1[1] != (void *)0x0) {
    puVar4 = (void *)param_1[1];
  }
                    // WARNING: Subroutine does not return
  FUN_180062300(system_message_context,&unknown_var_92_ptr,puVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_1801ec5c0(int64_t *param_1,uint64_t param_2)

{
  int32_t *puVar1;
  int32_t *puVar2;
  int64_t *plVar3;
  int64_t *plStackX_18;
  
  *param_1 = (int64_t)&system_state_ptr;
  puVar2 = (int32_t *)0x0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = (int64_t)&system_data_buffer_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *(int8_t *)(param_1 + 6) = 1;
  plStackX_18 = param_1;
  puVar1 = (int32_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,4,4,3,0xfffffffffffffffe);
  if (puVar1 != (int32_t *)0x0) {
    *puVar1 = 0;
    puVar2 = puVar1;
  }
  param_1[4] = (int64_t)puVar2;
  (**(code **)(*param_1 + 0x10))(param_1,param_2);
  plVar3 = system_system_data_config;
  if (system_system_data_config == (int64_t *)0x0) {
    QueryPerformanceCounter(&plStackX_18);
    plVar3 = plStackX_18;
  }
  param_1[5] = (int64_t)((double)((int64_t)plVar3 - system_system_data_config) * system_system_data_config);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801ec6a0(uint64_t param_1,int32_t param_2)
void FUN_1801ec6a0(uint64_t param_1,int32_t param_2)

{
  int64_t lVar1;
  char cVar2;
  void *puVar3;
  int32_t auStackX_10 [6];
  
  lVar1 = system_module_state;
  if ((*(int64_t *)(system_module_state + 0x680) != 0) &&
     (auStackX_10[0] = param_2, cVar2 = (**(code **)(system_module_state + 0x688))(auStackX_10),
     param_2 = auStackX_10[0], cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x630) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x630);
      }
      SystemCore_ResourceManager0(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0x620) = *(int32_t *)(lVar1 + 0x668);
    return;
  }
  *(int32_t *)(lVar1 + 0x620) = param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801ec720(void)
void FUN_1801ec720(void)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0xb8,8,0x11);
  *(int16_t *)(puVar1 + 8) = 0;
  *(int16_t *)((int64_t)puVar1 + 0x42) = 0x7f;
  puVar1[6] = 0xffffffffffffffff;
  puVar1[7] = 0xffffffffffffffff;
  puVar1[1] = 0;
  *(int32_t *)(puVar1 + 2) = 0;
  puVar1[3] = 0;
  puVar1[5] = 0xdeadbeef;
  *puVar1 = 0xffffffffffffffff;
  *(int32_t *)(puVar1 + 4) = 0xffffffff;
                    // WARNING: Subroutine does not return
  memset(puVar1 + 9,0,0x70);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801ec7b0(void)
void FUN_1801ec7b0(void)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0xb8,8,0x11);
  *(int16_t *)(puVar1 + 8) = 0;
  *(int16_t *)((int64_t)puVar1 + 0x42) = 0x7f;
  puVar1[6] = 0xffffffffffffffff;
  puVar1[7] = 0xffffffffffffffff;
  puVar1[1] = 0;
  *(int32_t *)(puVar1 + 2) = 0;
  puVar1[3] = 0;
  puVar1[5] = 0xdeadbeef;
  *puVar1 = 0xffffffffffffffff;
  *(int32_t *)(puVar1 + 4) = 0xffffffff;
                    // WARNING: Subroutine does not return
  memset(puVar1 + 9,0,0x70);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801ec840(void)
void FUN_1801ec840(void)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0xb8,8,0x11);
  *(int16_t *)(puVar1 + 8) = 0;
  *(int16_t *)((int64_t)puVar1 + 0x42) = 0x7f;
  puVar1[6] = 0xffffffffffffffff;
  puVar1[7] = 0xffffffffffffffff;
  puVar1[1] = 0;
  *(int32_t *)(puVar1 + 2) = 0;
  puVar1[3] = 0;
  puVar1[5] = 0xdeadbeef;
  *puVar1 = 0xffffffffffffffff;
  *(int32_t *)(puVar1 + 4) = 0xffffffff;
                    // WARNING: Subroutine does not return
  memset(puVar1 + 9,0,0x70);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801ec8d0(void)
void FUN_1801ec8d0(void)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0xb8,8,0x11);
  *(int16_t *)(puVar1 + 8) = 0;
  *(int16_t *)((int64_t)puVar1 + 0x42) = 0x7f;
  puVar1[6] = 0xffffffffffffffff;
  puVar1[7] = 0xffffffffffffffff;
  puVar1[1] = 0;
  *(int32_t *)(puVar1 + 2) = 0;
  puVar1[3] = 0;
  puVar1[5] = 0xdeadbeef;
  *puVar1 = 0xffffffffffffffff;
  *(int32_t *)(puVar1 + 4) = 0xffffffff;
                    // WARNING: Subroutine does not return
  memset(puVar1 + 9,0,0x70);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801ec960(void)
void FUN_1801ec960(void)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0xb8,8,0x11);
  *(int16_t *)(puVar1 + 8) = 0;
  *(int16_t *)((int64_t)puVar1 + 0x42) = 0x7f;
  puVar1[6] = 0xffffffffffffffff;
  puVar1[7] = 0xffffffffffffffff;
  puVar1[1] = 0;
  *(int32_t *)(puVar1 + 2) = 0;
  puVar1[3] = 0;
  puVar1[5] = 0xdeadbeef;
  *puVar1 = 0xffffffffffffffff;
  *(int32_t *)(puVar1 + 4) = 0xffffffff;
                    // WARNING: Subroutine does not return
  memset(puVar1 + 9,0,0x70);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801ec9f0(void)
void FUN_1801ec9f0(void)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0xb8,8,0x11);
  *(int16_t *)(puVar1 + 8) = 0;
  *(int16_t *)((int64_t)puVar1 + 0x42) = 0x7f;
  puVar1[6] = 0xffffffffffffffff;
  puVar1[7] = 0xffffffffffffffff;
  puVar1[1] = 0;
  *(int32_t *)(puVar1 + 2) = 0;
  puVar1[3] = 0;
  puVar1[5] = 0xdeadbeef;
  *puVar1 = 0xffffffffffffffff;
  *(int32_t *)(puVar1 + 4) = 0xffffffff;
                    // WARNING: Subroutine does not return
  memset(puVar1 + 9,0,0x70);
}






// 函数: void FUN_1801eca80(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801eca80(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t unaff_RSI;
  
  lVar3 = *(int64_t *)(param_1 + 8);
  do {
    if (lVar3 == param_1) {
      puVar1 = *(uint64_t **)(param_1 + 0x10);
      if (puVar1 != (uint64_t *)0x0) {
        FUN_18004b790(param_1,*puVar1,param_3,param_4,unaff_RSI);
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer(puVar1);
      }
      *(int64_t *)param_1 = param_1;
      *(uint64_t *)(param_1 + 0x10) = 0;
      *(int8_t *)(param_1 + 0x18) = 0;
      *(uint64_t *)(param_1 + 0x20) = 0;
      *(int64_t *)(param_1 + 8) = param_1;
      return;
    }
    plVar2 = *(int64_t **)(lVar3 + 0x28);
    switch(*(int32_t *)(param_1 + 0x6c)) {
    case 0:
      lVar4 = *plVar2;
      break;
    case 1:
      lVar4 = plVar2[1];
      break;
    case 2:
      lVar4 = plVar2[4];
      break;
    case 3:
      lVar4 = plVar2[3];
      break;
    case 4:
      lVar4 = plVar2[2];
      break;
    case 5:
      lVar4 = plVar2[5];
      break;
    default:
      goto LAB_1801ecaf0;
    }
    if ((lVar4 != 0) && (*(int64_t **)(lVar4 + 0x18) != (int64_t *)0x0)) {
      (**(code **)(**(int64_t **)(lVar4 + 0x18) + 0x10))();
    }
LAB_1801ecaf0:
    lVar3 = func_0x00018066bd70(lVar3);
  } while( true );
}






