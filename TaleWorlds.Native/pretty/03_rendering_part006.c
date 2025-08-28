#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part006.c - 4 个函数

// 函数: void FUN_180270e30(int64_t param_1)
void FUN_180270e30(int64_t param_1)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_180170900(param_1 + 2000);
  SystemDataValidator(param_1 + 0x248,0x58,0x10,FUN_180044a30,uVar1);
  *(uint64_t *)(param_1 + 0x228) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x230) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x230) = 0;
  *(int32_t *)(param_1 + 0x240) = 0;
  *(uint64_t *)(param_1 + 0x228) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x208) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x210) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x210) = 0;
  *(int32_t *)(param_1 + 0x220) = 0;
  *(uint64_t *)(param_1 + 0x208) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x1e8) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x1f0) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x1f0) = 0;
  *(int32_t *)(param_1 + 0x200) = 0;
  *(uint64_t *)(param_1 + 0x1e8) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x1c8) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x1d0) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x1d0) = 0;
  *(int32_t *)(param_1 + 0x1e0) = 0;
  *(uint64_t *)(param_1 + 0x1c8) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x1a8) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x1b0) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x1b0) = 0;
  *(int32_t *)(param_1 + 0x1c0) = 0;
  *(uint64_t *)(param_1 + 0x1a8) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x188) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 400) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 400) = 0;
  *(int32_t *)(param_1 + 0x1a0) = 0;
  *(uint64_t *)(param_1 + 0x188) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x168) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x170) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x170) = 0;
  *(int32_t *)(param_1 + 0x180) = 0;
  *(uint64_t *)(param_1 + 0x168) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x148) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x150) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x150) = 0;
  *(int32_t *)(param_1 + 0x160) = 0;
  *(uint64_t *)(param_1 + 0x148) = &system_state_ptr;
  FUN_180242610();
  *(uint64_t *)(param_1 + 0x108) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x110) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x110) = 0;
  *(int32_t *)(param_1 + 0x120) = 0;
  *(uint64_t *)(param_1 + 0x108) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0xe8) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0xf0) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0xf0) = 0;
  *(int32_t *)(param_1 + 0x100) = 0;
  *(uint64_t *)(param_1 + 0xe8) = &system_state_ptr;
  *(uint64_t *)(param_1 + 200) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0xd0) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0xd0) = 0;
  *(int32_t *)(param_1 + 0xe0) = 0;
  *(uint64_t *)(param_1 + 200) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0xa8) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0xb0) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0xb0) = 0;
  *(int32_t *)(param_1 + 0xc0) = 0;
  *(uint64_t *)(param_1 + 0xa8) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x88) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x90) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x90) = 0;
  *(int32_t *)(param_1 + 0xa0) = 0;
  *(uint64_t *)(param_1 + 0x88) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x68) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x70) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x70) = 0;
  *(int32_t *)(param_1 + 0x80) = 0;
  *(uint64_t *)(param_1 + 0x68) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x48) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x50) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x50) = 0;
  *(int32_t *)(param_1 + 0x60) = 0;
  *(uint64_t *)(param_1 + 0x48) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x28) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(int32_t *)(param_1 + 0x40) = 0;
  *(uint64_t *)(param_1 + 0x28) = &system_state_ptr;
  *(uint64_t *)(param_1 + 8) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int32_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)(param_1 + 8) = &system_state_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180271150(uint64_t param_1,int64_t param_2)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x1c68,8,3,0xfffffffffffffffe);
  *puVar1 = &unknown_var_5192_ptr;
  *puVar1 = &unknown_var_8072_ptr;
  FUN_180272880(puVar1 + 1);
  if (param_2 != 0) {
    FUN_1802711e0(puVar1 + 1,param_2 + 8);
  }
  return puVar1;
}



int32_t * FUN_1802711e0(int32_t *param_1,int32_t *param_2)

{
  void *puVar1;
  int32_t *puVar2;
  int64_t lVar3;
  void *puVar4;
  
  *param_1 = *param_2;
  SystemCore_ConfigurationHandler0(param_1 + 2,param_2 + 2);
  SystemCore_ConfigurationHandler0(param_1 + 10,param_2 + 10);
  SystemCore_ConfigurationHandler0(param_1 + 0x12,param_2 + 0x12);
  SystemCore_ConfigurationHandler0(param_1 + 0x1a,param_2 + 0x1a);
  SystemCore_ConfigurationHandler0(param_1 + 0x22,param_2 + 0x22);
  SystemCore_ConfigurationHandler0(param_1 + 0x2a,param_2 + 0x2a);
  SystemCore_ConfigurationHandler0(param_1 + 0x32,param_2 + 0x32);
  SystemCore_ConfigurationHandler0(param_1 + 0x3a,param_2 + 0x3a);
  SystemCore_ConfigurationHandler0(param_1 + 0x42,param_2 + 0x42);
  if (param_1 + 0x4a != param_2 + 0x4a) {
    FUN_180241a50(param_1 + 0x4a,*(uint64_t *)(param_2 + 0x4a),*(uint64_t *)(param_2 + 0x4c));
  }
  SystemCore_ConfigurationHandler0(param_1 + 0x52,param_2 + 0x52);
  SystemCore_ConfigurationHandler0(param_1 + 0x5a,param_2 + 0x5a);
  SystemCore_ConfigurationHandler0(param_1 + 0x62,param_2 + 0x62);
  SystemCore_ConfigurationHandler0(param_1 + 0x6a,param_2 + 0x6a);
  SystemCore_ConfigurationHandler0(param_1 + 0x72,param_2 + 0x72);
  SystemCore_ConfigurationHandler0(param_1 + 0x7a,param_2 + 0x7a);
  SystemCore_ConfigurationHandler0(param_1 + 0x82,param_2 + 0x82);
  SystemCore_ConfigurationHandler0(param_1 + 0x8a,param_2 + 0x8a);
  puVar2 = param_1 + 0x96;
  lVar3 = 0x10;
  do {
    *puVar2 = *(int32_t *)(((int64_t)param_2 - (int64_t)param_1) + (int64_t)puVar2);
    puVar1 = *(void **)(((int64_t)param_2 - (int64_t)param_1) + -8 + (int64_t)puVar2);
    puVar4 = &system_buffer_ptr;
    if (puVar1 != (void *)0x0) {
      puVar4 = puVar1;
    }
    strcpy_s(*(uint64_t *)(puVar2 + -2),0x40,puVar4);
    puVar2 = puVar2 + 0x16;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  param_1[0x1f2] = param_2[0x1f2];
  *(int8_t *)(param_1 + 499) = *(int8_t *)(param_2 + 499);
  FUN_18023fa30(param_1 + 500,param_2 + 500);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1802713e0(int64_t param_1)
void FUN_1802713e0(int64_t param_1)

{
  int iVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  
  uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x2210,0x10,0x11,0xfffffffffffffffe);
  plVar3 = (int64_t *)FUN_18023fe10(uVar2);
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  plVar6 = *(int64_t **)(param_1 + 0xb0);
  *(int64_t **)(param_1 + 0xb0) = plVar3;
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x38))();
  }
  *(int64_t *)(*(int64_t *)(param_1 + 0xb0) + 0xa8) = param_1;
  *(int8_t *)(*(int64_t *)(param_1 + 0xb0) + 0xb1) = 1;
  FUN_18023ec80(*(uint64_t *)(param_1 + 0xb0));
  lVar7 = system_resource_state;
  plVar3 = *(int64_t **)(param_1 + 0xb0);
  iVar1 = (**(code **)(*plVar3 + 0x60))(plVar3);
  *(int8_t *)((int64_t)plVar3 + 0xb2) = 1;
  plVar6 = (int64_t *)((int64_t)iVar1 * 0x98 + lVar7 + 8);
  iVar1 = _Mtx_lock(plVar6 + 8);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  plVar8 = (int64_t *)plVar6[1];
  plVar4 = (int64_t *)0x0;
  if (plVar8 < (int64_t *)plVar6[2]) {
    plVar6[1] = (int64_t)(plVar8 + 1);
    *plVar8 = (int64_t)plVar3;
    goto LAB_1802abf36;
  }
  plVar5 = (int64_t *)*plVar6;
  lVar7 = (int64_t)plVar8 - (int64_t)plVar5 >> 3;
  if (lVar7 == 0) {
    lVar7 = 1;
LAB_1802abea0:
    plVar4 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar7 * 8,(char)plVar6[3]);
    plVar8 = (int64_t *)plVar6[1];
    plVar5 = (int64_t *)*plVar6;
    plVar9 = plVar4;
  }
  else {
    lVar7 = lVar7 * 2;
    plVar9 = plVar4;
    if (lVar7 != 0) goto LAB_1802abea0;
  }
  for (; plVar5 != plVar8; plVar5 = plVar5 + 1) {
    *plVar4 = *plVar5;
    *plVar5 = 0;
    plVar4 = plVar4 + 1;
  }
  *plVar4 = (int64_t)plVar3;
  plVar3 = (int64_t *)plVar6[1];
  plVar8 = (int64_t *)*plVar6;
  if (plVar8 != plVar3) {
    do {
      if ((int64_t *)*plVar8 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar8 + 0x38))();
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar3);
    plVar8 = (int64_t *)*plVar6;
  }
  if (plVar8 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(plVar8);
  }
  *plVar6 = (int64_t)plVar9;
  plVar6[1] = (int64_t)(plVar4 + 1);
  plVar6[2] = (int64_t)(plVar9 + lVar7);
LAB_1802abf36:
  *(int8_t *)(plVar6 + 0x12) = 1;
  iVar1 = _Mtx_unlock(plVar6 + 8);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1802714c0(uint *param_1,int64_t param_2)
void FUN_1802714c0(uint *param_1,int64_t param_2)

{
  uint uVar1;
  uint64_t *puVar2;
  uint *puVar3;
  uint *puVar4;
  void *puVar5;
  int iVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int8_t auStack_f8 [32];
  int iStack_d8;
  uint *puStack_d0;
  void **ppuStack_c8;
  uint64_t uStack_c0;
  void **ppuStack_b8;
  uint64_t *puStack_b0;
  void *puStack_a8;
  void *puStack_a0;
  int32_t uStack_98;
  uint8_t auStack_90 [64];
  uint64_t uStack_50;
  uint64_t uStack_48;
  
  uStack_c0 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_f8;
  iVar6 = **(int **)(param_2 + 8);
  *(int **)(param_2 + 8) = *(int **)(param_2 + 8) + 1;
  iStack_d8 = iVar6;
  puStack_d0 = param_1;
  FUN_180272bd0(&render_data_ptr,param_2,param_1);
  uVar1 = **(uint **)(param_2 + 8);
  puVar3 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar3;
  if (uVar1 != 0) {
    (**(code **)(*(int64_t *)(param_1 + 2) + 0x18))(param_1 + 2,puVar3,uVar1);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar1;
    puVar3 = *(uint **)(param_2 + 8);
  }
  uVar1 = *puVar3;
  puVar3 = puVar3 + 1;
  *(uint **)(param_2 + 8) = puVar3;
  if (uVar1 != 0) {
    (**(code **)(*(int64_t *)(param_1 + 10) + 0x18))(param_1 + 10,puVar3,uVar1);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar1;
    puVar3 = *(uint **)(param_2 + 8);
  }
  uVar1 = *puVar3;
  puVar3 = puVar3 + 1;
  *(uint **)(param_2 + 8) = puVar3;
  if (uVar1 != 0) {
    (**(code **)(*(int64_t *)(param_1 + 0x12) + 0x18))(param_1 + 0x12,puVar3,uVar1);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar1;
    puVar3 = *(uint **)(param_2 + 8);
  }
  uVar1 = *puVar3;
  puVar3 = puVar3 + 1;
  *(uint **)(param_2 + 8) = puVar3;
  if (uVar1 != 0) {
    (**(code **)(*(int64_t *)(param_1 + 0x1a) + 0x18))(param_1 + 0x1a,puVar3,uVar1);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar1;
    puVar3 = *(uint **)(param_2 + 8);
  }
  uVar1 = *puVar3;
  puVar3 = puVar3 + 1;
  *(uint **)(param_2 + 8) = puVar3;
  if (uVar1 != 0) {
    (**(code **)(*(int64_t *)(param_1 + 0x22) + 0x18))(param_1 + 0x22,puVar3,uVar1);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar1;
    puVar3 = *(uint **)(param_2 + 8);
  }
  uVar1 = *puVar3;
  puVar3 = puVar3 + 1;
  *(uint **)(param_2 + 8) = puVar3;
  if (uVar1 != 0) {
    (**(code **)(*(int64_t *)(param_1 + 0x2a) + 0x18))(param_1 + 0x2a,puVar3,uVar1);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar1;
    puVar3 = *(uint **)(param_2 + 8);
  }
  uVar1 = *puVar3;
  puVar3 = puVar3 + 1;
  *(uint **)(param_2 + 8) = puVar3;
  if (uVar1 != 0) {
    (**(code **)(*(int64_t *)(param_1 + 0x32) + 0x18))(param_1 + 0x32,puVar3,uVar1);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar1;
    puVar3 = *(uint **)(param_2 + 8);
  }
  uVar1 = *puVar3;
  puVar3 = puVar3 + 1;
  *(uint **)(param_2 + 8) = puVar3;
  if (uVar1 != 0) {
    (**(code **)(*(int64_t *)(param_1 + 0x3a) + 0x18))(param_1 + 0x3a,puVar3,uVar1);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar1;
    puVar3 = *(uint **)(param_2 + 8);
  }
  uVar1 = *puVar3;
  puVar3 = puVar3 + 1;
  *(uint **)(param_2 + 8) = puVar3;
  if (uVar1 != 0) {
    (**(code **)(*(int64_t *)(param_1 + 0x42) + 0x18))(param_1 + 0x42,puVar3,uVar1);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar1;
    puVar3 = *(uint **)(param_2 + 8);
  }
  uVar1 = *puVar3;
  puVar3 = puVar3 + 1;
  *(uint **)(param_2 + 8) = puVar3;
  if (0 < (int)uVar1) {
    ppuStack_b8 = &puStack_a8;
    uVar7 = (uint64_t)uVar1;
    do {
      puStack_a8 = &unknown_var_3480_ptr;
      puStack_a0 = auStack_90;
      auStack_90[0] = 0;
      uStack_98 = 0;
      strcpy_s(auStack_90,0x40,&system_buffer_ptr);
      uStack_50 = 0;
      uVar1 = **(uint **)(param_2 + 8);
      puVar3 = *(uint **)(param_2 + 8) + 1;
      *(uint **)(param_2 + 8) = puVar3;
      if (uVar1 != 0) {
        (**(code **)(puStack_a8 + 0x18))(&puStack_a8,puVar3,uVar1);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar1;
        puVar3 = *(uint **)(param_2 + 8);
      }
      uVar1 = *puVar3;
      *(uint **)(param_2 + 8) = puVar3 + 1;
      uStack_50 = CONCAT44(puVar3[1],uVar1);
      *(uint **)(param_2 + 8) = puVar3 + 2;
      puVar2 = *(uint64_t **)(param_1 + 0x4c);
      if (puVar2 < *(uint64_t **)(param_1 + 0x4e)) {
        *(uint64_t **)(param_1 + 0x4c) = puVar2 + 0xc;
        *puVar2 = &system_state_ptr;
        puVar2[1] = 0;
        *(int32_t *)(puVar2 + 2) = 0;
        *puVar2 = &unknown_var_3480_ptr;
        puVar2[1] = puVar2 + 3;
        *(int32_t *)(puVar2 + 2) = 0;
        *(int8_t *)(puVar2 + 3) = 0;
        *(int32_t *)(puVar2 + 2) = uStack_98;
        puVar5 = &system_buffer_ptr;
        if (puStack_a0 != (void *)0x0) {
          puVar5 = puStack_a0;
        }
        ppuStack_c8 = (void **)puVar2;
        puStack_b0 = puVar2;
        strcpy_s(puVar2[1],0x40,puVar5);
        *(int32_t *)(puVar2 + 0xb) = (int32_t)uStack_50;
        *(int32_t *)((int64_t)puVar2 + 0x5c) = uStack_50._4_4_;
      }
      else {
        FUN_1802416d0(param_1 + 0x4a,&puStack_a8);
      }
      ppuStack_c8 = &puStack_a8;
      puStack_a8 = &system_state_ptr;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    puVar3 = *(uint **)(param_2 + 8);
    param_1 = puStack_d0;
    iVar6 = iStack_d8;
  }
  uVar1 = *puVar3;
  puVar3 = puVar3 + 1;
  *(uint **)(param_2 + 8) = puVar3;
  if (uVar1 != 0) {
    (**(code **)(*(int64_t *)(param_1 + 0x52) + 0x18))(param_1 + 0x52,puVar3,uVar1);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar1;
    puVar3 = *(uint **)(param_2 + 8);
  }
  uVar1 = *puVar3;
  puVar3 = puVar3 + 1;
  *(uint **)(param_2 + 8) = puVar3;
  if (uVar1 != 0) {
    (**(code **)(*(int64_t *)(param_1 + 0x5a) + 0x18))(param_1 + 0x5a,puVar3,uVar1);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar1;
    puVar3 = *(uint **)(param_2 + 8);
  }
  uVar1 = *puVar3;
  puVar3 = puVar3 + 1;
  *(uint **)(param_2 + 8) = puVar3;
  if (uVar1 != 0) {
    (**(code **)(*(int64_t *)(param_1 + 0x62) + 0x18))(param_1 + 0x62,puVar3,uVar1);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar1;
    puVar3 = *(uint **)(param_2 + 8);
  }
  uVar1 = *puVar3;
  puVar3 = puVar3 + 1;
  *(uint **)(param_2 + 8) = puVar3;
  if (uVar1 != 0) {
    (**(code **)(*(int64_t *)(param_1 + 0x6a) + 0x18))(param_1 + 0x6a,puVar3,uVar1);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar1;
    puVar3 = *(uint **)(param_2 + 8);
  }
  uVar1 = *puVar3;
  puVar3 = puVar3 + 1;
  *(uint **)(param_2 + 8) = puVar3;
  if (uVar1 != 0) {
    (**(code **)(*(int64_t *)(param_1 + 0x72) + 0x18))(param_1 + 0x72,puVar3,uVar1);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar1;
    puVar3 = *(uint **)(param_2 + 8);
  }
  uVar1 = *puVar3;
  puVar3 = puVar3 + 1;
  *(uint **)(param_2 + 8) = puVar3;
  if (uVar1 != 0) {
    (**(code **)(*(int64_t *)(param_1 + 0x7a) + 0x18))(param_1 + 0x7a,puVar3,uVar1);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar1;
    puVar3 = *(uint **)(param_2 + 8);
  }
  uVar1 = *puVar3;
  puVar3 = puVar3 + 1;
  *(uint **)(param_2 + 8) = puVar3;
  if (uVar1 != 0) {
    (**(code **)(*(int64_t *)(param_1 + 0x82) + 0x18))(param_1 + 0x82,puVar3,uVar1);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar1;
    puVar3 = *(uint **)(param_2 + 8);
  }
  uVar1 = *puVar3;
  puVar3 = puVar3 + 1;
  *(uint **)(param_2 + 8) = puVar3;
  if (uVar1 != 0) {
    (**(code **)(*(int64_t *)(param_1 + 0x8a) + 0x18))(param_1 + 0x8a,puVar3,uVar1);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar1;
    puVar3 = *(uint **)(param_2 + 8);
  }
  puVar4 = param_1 + 0x92;
  lVar8 = 0x10;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *(uint **)(param_2 + 8) = puVar3;
    if (uVar1 != 0) {
      (**(code **)(*(int64_t *)puVar4 + 0x18))(puVar4,puVar3,(uint64_t)uVar1);
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar1;
      puVar3 = *(uint **)(param_2 + 8);
    }
    puVar4 = puVar4 + 0x16;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  if (iVar6 == 0) {
    param_1[0x1f2] = *puVar3;
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  }
  else {
    FUN_18025a7b0(&unknown_var_9712_ptr,param_2,param_1 + 0x1f2);
  }
  *(int8_t *)(param_1 + 499) = **(int8_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 1;
  if ((char)param_1[499] != '\0') {
    FUN_180271cf0(param_1 + 500,param_2);
    *(byte *)(param_1 + 0x632) = (byte)(*param_1 >> 0xc) & 1;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_f8);
}





// 函数: void FUN_1802719d0(int32_t *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802719d0(int32_t *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int8_t uVar1;
  int32_t uVar2;
  int8_t *puVar3;
  int32_t *puVar4;
  int *piVar5;
  int64_t lVar6;
  int iVar7;
  uint uVar8;
  uint64_t uVar9;
  int iVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t unaff_RDI;
  uint64_t uVar13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  
  puVar4 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = 1;
  param_2[1] = param_2[1] + 4;
  System_DataSerializer(&render_data_ptr,*param_1,param_2);
  System_QueueProcessor(param_2,param_1 + 2);
  System_QueueProcessor(param_2,param_1 + 10);
  System_QueueProcessor(param_2,param_1 + 0x12);
  System_QueueProcessor(param_2,param_1 + 0x1a);
  System_QueueProcessor(param_2,param_1 + 0x22);
  System_QueueProcessor(param_2,param_1 + 0x2a);
  System_QueueProcessor(param_2,param_1 + 0x32);
  System_QueueProcessor(param_2,param_1 + 0x3a);
  System_QueueProcessor(param_2,param_1 + 0x42);
  lVar6 = (*(int64_t *)(param_1 + 0x4c) - *(int64_t *)(param_1 + 0x4a)) / 6 +
          (*(int64_t *)(param_1 + 0x4c) - *(int64_t *)(param_1 + 0x4a) >> 0x3f);
  piVar5 = (int *)param_2[1];
  iVar10 = (int)(lVar6 >> 4) - (int)(lVar6 >> 0x3f);
  if ((uint64_t)((*param_2 - (int64_t)piVar5) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)piVar5 + (4 - *param_2));
    piVar5 = (int *)param_2[1];
  }
  *piVar5 = iVar10;
  iVar7 = 0;
  param_2[1] = param_2[1] + 4;
  lVar6 = (int64_t)iVar10;
  if (0 < iVar10) {
    lVar11 = 0;
    do {
      System_QueueProcessor(param_2,(int64_t)iVar7 * 0x60 + *(int64_t *)(param_1 + 0x4a));
      puVar4 = (int32_t *)param_2[1];
      uVar2 = *(int32_t *)(lVar11 + 0x58 + *(int64_t *)(param_1 + 0x4a));
      if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
        System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
        puVar4 = (int32_t *)param_2[1];
      }
      *puVar4 = uVar2;
      param_2[1] = param_2[1] + 4;
      puVar4 = (int32_t *)param_2[1];
      uVar2 = *(int32_t *)(lVar11 + 0x5c + *(int64_t *)(param_1 + 0x4a));
      if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
        System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
        puVar4 = (int32_t *)param_2[1];
      }
      *puVar4 = uVar2;
      iVar7 = iVar7 + 1;
      param_2[1] = param_2[1] + 4;
      lVar11 = lVar11 + 0x60;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  System_QueueProcessor(param_2,param_1 + 0x52);
  System_QueueProcessor(param_2,param_1 + 0x5a);
  System_QueueProcessor(param_2,param_1 + 0x62);
  System_QueueProcessor(param_2,param_1 + 0x6a);
  System_QueueProcessor(param_2,param_1 + 0x72);
  System_QueueProcessor(param_2,param_1 + 0x7a);
  System_QueueProcessor(param_2,param_1 + 0x82);
  System_QueueProcessor(param_2,param_1 + 0x8a);
  puVar4 = param_1 + 0x92;
  lVar6 = 0x10;
  do {
    System_QueueProcessor(param_2,puVar4);
    puVar4 = puVar4 + 0x16;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  FUN_18025a940(&unknown_var_9712_ptr,param_1[0x1f2],param_2);
  puVar3 = (int8_t *)param_2[1];
  uVar1 = *(int8_t *)(param_1 + 499);
  if ((uint64_t)((*param_2 - (int64_t)puVar3) + param_2[2]) < 2) {
    System_BufferManager(param_2,puVar3 + (1 - *param_2));
    puVar3 = (int8_t *)param_2[1];
  }
  *puVar3 = uVar1;
  param_2[1] = param_2[1] + 1;
  if (*(char *)(param_1 + 499) == '\0') {
    return;
  }
  puVar4 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  uVar12 = 0;
  *puVar4 = 0;
  param_2[1] = param_2[1] + 4;
  piVar5 = (int *)param_2[1];
  lVar6 = (*(int64_t *)(param_1 + 0x1fe) - *(int64_t *)(param_1 + 0x1fc)) / 0x26 +
          (*(int64_t *)(param_1 + 0x1fe) - *(int64_t *)(param_1 + 0x1fc) >> 0x3f);
  if ((uint64_t)((*param_2 - (int64_t)piVar5) + param_2[2]) < 5) {
    lVar11 = (int64_t)piVar5 - *param_2;
    System_BufferManager(param_2,lVar11 + 4,lVar11,param_4,unaff_R15,unaff_R14,unaff_RDI);
    piVar5 = (int *)param_2[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> 0x3f);
  param_2[1] = param_2[1] + 4;
  lVar6 = *(int64_t *)(param_1 + 0x1fe) - *(int64_t *)(param_1 + 0x1fc) >> 0x3f;
  uVar9 = uVar12;
  uVar13 = uVar12;
  if ((*(int64_t *)(param_1 + 0x1fe) - *(int64_t *)(param_1 + 0x1fc)) / 0x98 + lVar6 != lVar6) {
    do {
      System_QueueProcessor(param_2,uVar13 * 0x98 + *(int64_t *)(param_1 + 0x1fc));
      uVar8 = (int)uVar9 + 1;
      uVar9 = (uint64_t)uVar8;
      uVar13 = (int64_t)(int)uVar8;
    } while ((uint64_t)(int64_t)(int)uVar8 <
             (uint64_t)((*(int64_t *)(param_1 + 0x1fe) - *(int64_t *)(param_1 + 0x1fc)) / 0x98));
  }
  System_QueueProcessor(param_2,param_1 + 0x204);
  puVar3 = (int8_t *)param_2[1];
  uVar1 = *(int8_t *)(param_1 + 0x22a);
  if ((uint64_t)((*param_2 - (int64_t)puVar3) + param_2[2]) < 2) {
    System_BufferManager(param_2,puVar3 + (1 - *param_2));
    puVar3 = (int8_t *)param_2[1];
  }
  *puVar3 = uVar1;
  param_2[1] = param_2[1] + 1;
  puVar4 = (int32_t *)param_2[1];
  uVar2 = param_1[0x22b];
  if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = uVar2;
  param_2[1] = param_2[1] + 4;
  System_QueueProcessor(param_2,param_1 + 0x22c);
  lVar6 = (*(int64_t *)(param_1 + 0x254) - *(int64_t *)(param_1 + 0x252)) / 0x26 +
          (*(int64_t *)(param_1 + 0x254) - *(int64_t *)(param_1 + 0x252) >> 0x3f);
  piVar5 = (int *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)piVar5) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)piVar5 + (4 - *param_2));
    piVar5 = (int *)param_2[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> 0x3f);
  param_2[1] = param_2[1] + 4;
  lVar6 = *(int64_t *)(param_1 + 0x254) - *(int64_t *)(param_1 + 0x252) >> 0x3f;
  uVar9 = uVar12;
  uVar13 = uVar12;
  if ((*(int64_t *)(param_1 + 0x254) - *(int64_t *)(param_1 + 0x252)) / 0x98 + lVar6 != lVar6) {
    do {
      System_QueueProcessor(param_2,uVar13 * 0x98 + *(int64_t *)(param_1 + 0x252));
      uVar8 = (int)uVar9 + 1;
      uVar9 = (uint64_t)uVar8;
      uVar13 = (int64_t)(int)uVar8;
    } while ((uint64_t)(int64_t)(int)uVar8 <
             (uint64_t)((*(int64_t *)(param_1 + 0x254) - *(int64_t *)(param_1 + 0x252)) / 0x98));
  }
  puVar4 = param_1 + 0x25a;
  lVar6 = 5;
  do {
    System_QueueProcessor(param_2,puVar4);
    puVar4 = puVar4 + 0x26;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  lVar6 = (*(int64_t *)(param_1 + 0x31a) - *(int64_t *)(param_1 + 0x318)) / 0x26 +
          (*(int64_t *)(param_1 + 0x31a) - *(int64_t *)(param_1 + 0x318) >> 0x3f);
  piVar5 = (int *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)piVar5) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)piVar5 + (4 - *param_2));
    piVar5 = (int *)param_2[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> 0x3f);
  param_2[1] = param_2[1] + 4;
  lVar6 = *(int64_t *)(param_1 + 0x31a) - *(int64_t *)(param_1 + 0x318) >> 0x3f;
  uVar9 = uVar12;
  uVar13 = uVar12;
  if ((*(int64_t *)(param_1 + 0x31a) - *(int64_t *)(param_1 + 0x318)) / 0x98 + lVar6 != lVar6) {
    do {
      System_QueueProcessor(param_2,uVar13 * 0x98 + *(int64_t *)(param_1 + 0x318));
      uVar8 = (int)uVar9 + 1;
      uVar9 = (uint64_t)uVar8;
      uVar13 = (int64_t)(int)uVar8;
    } while ((uint64_t)(int64_t)(int)uVar8 <
             (uint64_t)((*(int64_t *)(param_1 + 0x31a) - *(int64_t *)(param_1 + 0x318)) / 0x98));
  }
  puVar4 = param_1 + 0x480;
  lVar6 = 9;
  do {
    System_QueueProcessor(param_2,puVar4);
    puVar4 = puVar4 + 0x26;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  System_QueueProcessor(param_2,param_1 + 0x5d6);
  System_QueueProcessor(param_2,param_1 + 0x5fc);
  lVar6 = (*(int64_t *)(param_1 + 0x624) - *(int64_t *)(param_1 + 0x622)) / 0x26 +
          (*(int64_t *)(param_1 + 0x624) - *(int64_t *)(param_1 + 0x622) >> 0x3f);
  piVar5 = (int *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)piVar5) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)piVar5 + (4 - *param_2));
    piVar5 = (int *)param_2[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> 0x3f);
  param_2[1] = param_2[1] + 4;
  lVar6 = *(int64_t *)(param_1 + 0x624) - *(int64_t *)(param_1 + 0x622) >> 0x3f;
  uVar9 = uVar12;
  uVar13 = uVar12;
  if ((*(int64_t *)(param_1 + 0x624) - *(int64_t *)(param_1 + 0x622)) / 0x98 + lVar6 != lVar6) {
    do {
      System_QueueProcessor(param_2,uVar13 * 0x98 + *(int64_t *)(param_1 + 0x622));
      uVar8 = (int)uVar9 + 1;
      uVar9 = (uint64_t)uVar8;
      uVar13 = (int64_t)(int)uVar8;
    } while ((uint64_t)(int64_t)(int)uVar8 <
             (uint64_t)((*(int64_t *)(param_1 + 0x624) - *(int64_t *)(param_1 + 0x622)) / 0x98));
  }
  System_QueueProcessor(param_2,param_1 + 0x62a);
  puVar3 = (int8_t *)param_2[1];
  uVar1 = *(int8_t *)((int64_t)param_1 + 0x18c9);
  if ((uint64_t)((*param_2 - (int64_t)puVar3) + param_2[2]) < 2) {
    System_BufferManager(param_2,puVar3 + (1 - *param_2));
    puVar3 = (int8_t *)param_2[1];
  }
  *puVar3 = uVar1;
  param_2[1] = param_2[1] + 1;
  puVar4 = (int32_t *)param_2[1];
  if (*(char *)((int64_t)param_1 + 0x18c9) != '\0') {
    System_QueueProcessor(param_2,param_1 + 0x634);
    System_QueueProcessor(param_2,param_1 + 0x65a);
    System_QueueProcessor(param_2,param_1 + 0x680);
    System_QueueProcessor(param_2,param_1 + 0x6a6);
    System_QueueProcessor(param_2,param_1 + 0x6cc);
    System_QueueProcessor(param_2,param_1 + 0x6f2);
    puVar4 = (int32_t *)param_2[1];
  }
  if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = 0x10;
  param_2[1] = param_2[1] + 4;
  param_1 = param_1 + 800;
  do {
    piVar5 = (int *)param_2[1];
    if ((uint64_t)((*param_2 - (int64_t)piVar5) + param_2[2]) < 5) {
      System_BufferManager(param_2,(int64_t)piVar5 + (4 - *param_2));
      piVar5 = (int *)param_2[1];
    }
    *piVar5 = (int)uVar12;
    param_2[1] = param_2[1] + 4;
    System_QueueProcessor(param_2,param_1);
    uVar8 = (int)uVar12 + 1;
    uVar12 = (uint64_t)uVar8;
    param_1 = param_1 + 0x16;
  } while ((int)uVar8 < 0x10);
  return;
}





