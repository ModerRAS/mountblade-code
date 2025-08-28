#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part042.c - 14 个函数

// 函数: void FUN_1800810b0(int64_t *param_1)
void FUN_1800810b0(int64_t *param_1)

{
  int64_t *plVar1;
  
  for (plVar1 = (int64_t *)*param_1; plVar1 != (int64_t *)param_1[1]; plVar1 = plVar1 + 4) {
    if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Removing unreachable block (ram,0x0001800811eb)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180081120(uint64_t *param_1,uint64_t *param_2)

{
  int8_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  
  uVar2 = *param_2;
  uVar1 = *(int8_t *)(param_2 + 1);
  uVar3 = param_2[2];
  param_2[2] = 0;
  uVar4 = param_2[3];
  param_2[3] = 0;
  param_1[2] = FUN_180083260;
  param_1[3] = FUN_1800831c0;
  puVar5 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x20,8,system_allocation_flags,0xfffffffffffffffe);
  *puVar5 = uVar2;
  *(int8_t *)(puVar5 + 1) = uVar1;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  *param_1 = puVar5;
  if ((int64_t *)param_2[3] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_2[3] + 0x38))();
  }
  if ((int64_t *)param_2[2] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_2[2] + 0x38))();
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180081220(uint64_t param_1,int64_t *param_2,int param_3)
void FUN_180081220(uint64_t param_1,int64_t *param_2,int param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int8_t auStack_c8 [32];
  int32_t uStack_a8;
  uint64_t uStack_a0;
  int64_t *plStack_98;
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  uint64_t uStack_28;
  
  uVar1 = core_system_data_memory;
  uStack_a0 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_c8;
  uStack_a8 = 0;
  param_3 = param_3 * 4;
  puStack_88 = &unknown_var_3480_ptr;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0x1c;
  plStack_98 = param_2;
  strcpy_s(auStack_70,0x40,&system_data_fc60);
  FUN_1802037e0();
  puStack_88 = &system_state_ptr;
  uVar2 = FUN_18062b1e0(system_memory_pool_ptr,param_3,0x10,3);
  FUN_180082aa0(uVar1,param_2);
  *(uint64_t *)(*param_2 + 0x10) = uVar2;
  *(int *)(*param_2 + 0x18) = param_3;
  *(int *)(*param_2 + 0x1c) = param_3;
  *(int8_t *)(*param_2 + 0x20) = 0;
  uStack_a8 = 1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (uint64_t)auStack_c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180081350(uint64_t param_1,int64_t *param_2,int param_3)
void FUN_180081350(uint64_t param_1,int64_t *param_2,int param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int8_t auStack_c8 [32];
  int32_t uStack_a8;
  uint64_t uStack_a0;
  int64_t *plStack_98;
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  uint64_t uStack_28;
  
  uVar1 = core_system_data_memory;
  uStack_a0 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_c8;
  uStack_a8 = 0;
  param_3 = param_3 * 2;
  puStack_88 = &unknown_var_3480_ptr;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0x1c;
  plStack_98 = param_2;
  strcpy_s(auStack_70,0x40,&system_data_fc60);
  FUN_1802037e0();
  puStack_88 = &system_state_ptr;
  uVar2 = FUN_18062b1e0(system_memory_pool_ptr,param_3,0x10,3);
  FUN_180082c20(uVar1,param_2);
  *(uint64_t *)(*param_2 + 0x10) = uVar2;
  *(int *)(*param_2 + 0x18) = param_3;
  *(int *)(*param_2 + 0x1c) = param_3;
  *(int8_t *)(*param_2 + 0x20) = 0;
  uStack_a8 = 1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (uint64_t)auStack_c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180081480(uint64_t param_1,int64_t *param_2,int32_t param_3)
void FUN_180081480(uint64_t param_1,int64_t *param_2,int32_t param_3)

{
  uint64_t uVar1;
  int8_t auStack_c8 [32];
  int32_t uStack_a8;
  uint64_t uStack_a0;
  int64_t *plStack_98;
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  uint64_t uStack_28;
  
  uStack_a0 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_c8;
  uStack_a8 = 0;
  puStack_88 = &unknown_var_3480_ptr;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0x1c;
  plStack_98 = param_2;
  strcpy_s(auStack_70,0x40,&system_data_fc60);
  FUN_1802037e0();
  puStack_88 = &system_state_ptr;
  uVar1 = FUN_18062b1e0(system_memory_pool_ptr,param_3,0x10,3);
  FUN_1800828d0(param_1,param_2);
  uStack_a8 = 1;
  *(uint64_t *)(*param_2 + 0x10) = uVar1;
  *(int32_t *)(*param_2 + 0x18) = param_3;
  *(int32_t *)(*param_2 + 0x1c) = param_3;
  *(int8_t *)(*param_2 + 0x20) = 0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (uint64_t)auStack_c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180081590(uint64_t param_1,int64_t *param_2,int32_t param_3)
void FUN_180081590(uint64_t param_1,int64_t *param_2,int32_t param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int8_t auStack_c8 [32];
  int32_t uStack_a8;
  uint64_t uStack_a0;
  int64_t *plStack_98;
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  uint64_t uStack_28;
  
  uVar1 = core_system_data_memory;
  uStack_a0 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_c8;
  uStack_a8 = 0;
  puStack_88 = &unknown_var_3480_ptr;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0x1c;
  plStack_98 = param_2;
  strcpy_s(auStack_70,0x40,&system_data_fc60);
  FUN_1802037e0();
  puStack_88 = &system_state_ptr;
  uVar2 = FUN_18062b1e0(system_memory_pool_ptr,param_3,0x10,0x20);
  FUN_1800828d0(uVar1,param_2);
  *(uint64_t *)(*param_2 + 0x10) = uVar2;
  *(int32_t *)(*param_2 + 0x18) = param_3;
  *(int32_t *)(*param_2 + 0x1c) = param_3;
  *(int8_t *)(*param_2 + 0x20) = 0;
  uStack_a8 = 1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (uint64_t)auStack_c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800816c0(int64_t param_1,int64_t *param_2)
void FUN_1800816c0(int64_t param_1,int64_t *param_2)

{
  int iVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int8_t auStack_d8 [32];
  int32_t uStack_b8;
  int64_t *plStack_b0;
  int64_t *plStack_a8;
  uint64_t uStack_a0;
  void *puStack_98;
  int8_t *puStack_90;
  int32_t uStack_88;
  int8_t auStack_80 [72];
  uint64_t uStack_38;
  
  uStack_a0 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_d8;
  uStack_b8 = 0;
  iVar1 = **(int **)(param_1 + 8);
  *(int **)(param_1 + 8) = *(int **)(param_1 + 8) + 1;
  uVar2 = core_system_data_memory;
  if (iVar1 != 0) {
    iVar1 = iVar1 * 4;
    puStack_98 = &unknown_var_3480_ptr;
    puStack_90 = auStack_80;
    auStack_80[0] = 0;
    uStack_88 = 0x1c;
    strcpy_s(auStack_80,0x40,&system_data_fc60);
    FUN_1802037e0();
    puStack_98 = &system_state_ptr;
    lVar4 = FUN_18062b1e0(system_memory_pool_ptr,iVar1,0x10,0x1e);
    FUN_180083520(uVar2,&plStack_b0);
    plVar3 = plStack_b0;
    plStack_b0[2] = lVar4;
    *(int *)(plStack_b0 + 3) = iVar1;
    *(int *)((int64_t)plStack_b0 + 0x1c) = iVar1;
    *(int8_t *)(plStack_b0 + 4) = 0;
    uStack_b8 = 1;
    plStack_b0 = (int64_t *)0x0;
    plStack_a8 = (int64_t *)*param_2;
    *param_2 = (int64_t)plVar3;
    if (plStack_a8 != (int64_t *)0x0) {
      (**(code **)(*plStack_a8 + 0x38))();
    }
    uStack_b8 = 0;
    if (plStack_b0 != (int64_t *)0x0) {
      (**(code **)(*plStack_b0 + 0x38))();
    }
                    // WARNING: Subroutine does not return
    memcpy(*(uint64_t *)(*param_2 + 0x10),*(uint64_t *)(param_1 + 8),
           (int64_t)*(int *)(*param_2 + 0x1c));
  }
  plStack_a8 = (int64_t *)*param_2;
  *param_2 = 0;
  if (plStack_a8 != (int64_t *)0x0) {
    (**(code **)(*plStack_a8 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180081870(int64_t param_1,int64_t *param_2)
void FUN_180081870(int64_t param_1,int64_t *param_2)

{
  int iVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int8_t auStack_d8 [32];
  int32_t uStack_b8;
  int64_t *plStack_b0;
  int64_t *plStack_a8;
  uint64_t uStack_a0;
  void *puStack_98;
  int8_t *puStack_90;
  int32_t uStack_88;
  int8_t auStack_80 [72];
  uint64_t uStack_38;
  
  uStack_a0 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_d8;
  uStack_b8 = 0;
  iVar1 = **(int **)(param_1 + 8);
  *(int **)(param_1 + 8) = *(int **)(param_1 + 8) + 1;
  uVar2 = core_system_data_memory;
  if (iVar1 != 0) {
    iVar1 = iVar1 * 4;
    puStack_98 = &unknown_var_3480_ptr;
    puStack_90 = auStack_80;
    auStack_80[0] = 0;
    uStack_88 = 0x1c;
    strcpy_s(auStack_80,0x40,&system_data_fc60);
    FUN_1802037e0();
    puStack_98 = &system_state_ptr;
    lVar4 = FUN_18062b1e0(system_memory_pool_ptr,iVar1,0x10,0x1e);
    FUN_1800836a0(uVar2,&plStack_b0);
    plVar3 = plStack_b0;
    plStack_b0[2] = lVar4;
    *(int *)(plStack_b0 + 3) = iVar1;
    *(int *)((int64_t)plStack_b0 + 0x1c) = iVar1;
    *(int8_t *)(plStack_b0 + 4) = 0;
    uStack_b8 = 1;
    plStack_b0 = (int64_t *)0x0;
    plStack_a8 = (int64_t *)*param_2;
    *param_2 = (int64_t)plVar3;
    if (plStack_a8 != (int64_t *)0x0) {
      (**(code **)(*plStack_a8 + 0x38))();
    }
    uStack_b8 = 0;
    if (plStack_b0 != (int64_t *)0x0) {
      (**(code **)(*plStack_b0 + 0x38))();
    }
                    // WARNING: Subroutine does not return
    memcpy(*(uint64_t *)(*param_2 + 0x10),*(uint64_t *)(param_1 + 8),
           (int64_t)*(int *)(*param_2 + 0x1c));
  }
  plStack_a8 = (int64_t *)*param_2;
  *param_2 = 0;
  if (plStack_a8 != (int64_t *)0x0) {
    (**(code **)(*plStack_a8 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180081a20(int64_t param_1,int64_t *param_2)
void FUN_180081a20(int64_t param_1,int64_t *param_2)

{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int iVar4;
  int8_t auStack_d8 [32];
  int32_t uStack_b8;
  int64_t *plStack_b0;
  int64_t *plStack_a8;
  uint64_t uStack_a0;
  void *puStack_98;
  int8_t *puStack_90;
  int32_t uStack_88;
  int8_t auStack_80 [72];
  uint64_t uStack_38;
  
  uStack_a0 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_d8;
  uStack_b8 = 0;
  iVar4 = **(int **)(param_1 + 8);
  *(int **)(param_1 + 8) = *(int **)(param_1 + 8) + 1;
  uVar1 = core_system_data_memory;
  if (iVar4 != 0) {
    iVar4 = iVar4 * 0x18;
    puStack_98 = &unknown_var_3480_ptr;
    puStack_90 = auStack_80;
    auStack_80[0] = 0;
    uStack_88 = 0x1c;
    strcpy_s(auStack_80,0x40,&system_data_fc60);
    FUN_1802037e0();
    puStack_98 = &system_state_ptr;
    lVar3 = FUN_18062b1e0(system_memory_pool_ptr,iVar4,0x10,0x1e);
    FUN_180083820(uVar1,&plStack_b0);
    plVar2 = plStack_b0;
    plStack_b0[2] = lVar3;
    *(int *)(plStack_b0 + 3) = iVar4;
    *(int *)((int64_t)plStack_b0 + 0x1c) = iVar4;
    *(int8_t *)(plStack_b0 + 4) = 0;
    uStack_b8 = 1;
    plStack_b0 = (int64_t *)0x0;
    plStack_a8 = (int64_t *)*param_2;
    *param_2 = (int64_t)plVar2;
    if (plStack_a8 != (int64_t *)0x0) {
      (**(code **)(*plStack_a8 + 0x38))();
    }
    uStack_b8 = 0;
    if (plStack_b0 != (int64_t *)0x0) {
      (**(code **)(*plStack_b0 + 0x38))();
    }
                    // WARNING: Subroutine does not return
    memcpy(*(uint64_t *)(*param_2 + 0x10),*(uint64_t *)(param_1 + 8),
           (int64_t)*(int *)(*param_2 + 0x1c));
  }
  plStack_a8 = (int64_t *)*param_2;
  *param_2 = 0;
  if (plStack_a8 != (int64_t *)0x0) {
    (**(code **)(*plStack_a8 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180081bd0(int64_t param_1,int64_t *param_2)
void FUN_180081bd0(int64_t param_1,int64_t *param_2)

{
  int iVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int8_t auStack_d8 [32];
  int32_t uStack_b8;
  int64_t *plStack_b0;
  int64_t *plStack_a8;
  uint64_t uStack_a0;
  void *puStack_98;
  int8_t *puStack_90;
  int32_t uStack_88;
  int8_t auStack_80 [72];
  uint64_t uStack_38;
  
  uStack_a0 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_d8;
  uStack_b8 = 0;
  iVar1 = **(int **)(param_1 + 8);
  *(int **)(param_1 + 8) = *(int **)(param_1 + 8) + 1;
  uVar2 = core_system_data_memory;
  if (iVar1 != 0) {
    iVar1 = iVar1 * 8;
    puStack_98 = &unknown_var_3480_ptr;
    puStack_90 = auStack_80;
    auStack_80[0] = 0;
    uStack_88 = 0x1c;
    strcpy_s(auStack_80,0x40,&system_data_fc60);
    FUN_1802037e0();
    puStack_98 = &system_state_ptr;
    lVar4 = FUN_18062b1e0(system_memory_pool_ptr,iVar1,0x10,0x1e);
    FUN_1800839a0(uVar2,&plStack_b0);
    plVar3 = plStack_b0;
    plStack_b0[2] = lVar4;
    *(int *)(plStack_b0 + 3) = iVar1;
    *(int *)((int64_t)plStack_b0 + 0x1c) = iVar1;
    *(int8_t *)(plStack_b0 + 4) = 0;
    uStack_b8 = 1;
    plStack_b0 = (int64_t *)0x0;
    plStack_a8 = (int64_t *)*param_2;
    *param_2 = (int64_t)plVar3;
    if (plStack_a8 != (int64_t *)0x0) {
      (**(code **)(*plStack_a8 + 0x38))();
    }
    uStack_b8 = 0;
    if (plStack_b0 != (int64_t *)0x0) {
      (**(code **)(*plStack_b0 + 0x38))();
    }
                    // WARNING: Subroutine does not return
    memcpy(*(uint64_t *)(*param_2 + 0x10),*(uint64_t *)(param_1 + 8),
           (int64_t)*(int *)(*param_2 + 0x1c));
  }
  plStack_a8 = (int64_t *)*param_2;
  *param_2 = 0;
  if (plStack_a8 != (int64_t *)0x0) {
    (**(code **)(*plStack_a8 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180081d80(int64_t param_1,int64_t *param_2)
void FUN_180081d80(int64_t param_1,int64_t *param_2)

{
  int iVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int8_t auStack_d8 [32];
  int32_t uStack_b8;
  int64_t *plStack_b0;
  int64_t *plStack_a8;
  uint64_t uStack_a0;
  void *puStack_98;
  int8_t *puStack_90;
  int32_t uStack_88;
  int8_t auStack_80 [72];
  uint64_t uStack_38;
  
  uStack_a0 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_d8;
  uStack_b8 = 0;
  iVar1 = **(int **)(param_1 + 8);
  *(int **)(param_1 + 8) = *(int **)(param_1 + 8) + 1;
  uVar2 = core_system_data_memory;
  if (iVar1 != 0) {
    iVar1 = iVar1 * 4;
    puStack_98 = &unknown_var_3480_ptr;
    puStack_90 = auStack_80;
    auStack_80[0] = 0;
    uStack_88 = 0x1c;
    strcpy_s(auStack_80,0x40,&system_data_fc60);
    FUN_1802037e0();
    puStack_98 = &system_state_ptr;
    lVar4 = FUN_18062b1e0(system_memory_pool_ptr,iVar1,0x10,0x1e);
    FUN_180082aa0(uVar2,&plStack_b0);
    plVar3 = plStack_b0;
    plStack_b0[2] = lVar4;
    *(int *)(plStack_b0 + 3) = iVar1;
    *(int *)((int64_t)plStack_b0 + 0x1c) = iVar1;
    *(int8_t *)(plStack_b0 + 4) = 0;
    uStack_b8 = 1;
    plStack_b0 = (int64_t *)0x0;
    plStack_a8 = (int64_t *)*param_2;
    *param_2 = (int64_t)plVar3;
    if (plStack_a8 != (int64_t *)0x0) {
      (**(code **)(*plStack_a8 + 0x38))();
    }
    uStack_b8 = 0;
    if (plStack_b0 != (int64_t *)0x0) {
      (**(code **)(*plStack_b0 + 0x38))();
    }
                    // WARNING: Subroutine does not return
    memcpy(*(uint64_t *)(*param_2 + 0x10),*(uint64_t *)(param_1 + 8),
           (int64_t)*(int *)(*param_2 + 0x1c));
  }
  plStack_a8 = (int64_t *)*param_2;
  *param_2 = 0;
  if (plStack_a8 != (int64_t *)0x0) {
    (**(code **)(*plStack_a8 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180081f30(int64_t param_1,int64_t *param_2)
void FUN_180081f30(int64_t param_1,int64_t *param_2)

{
  int iVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int8_t auStack_d8 [32];
  int32_t uStack_b8;
  int64_t *plStack_b0;
  int64_t *plStack_a8;
  uint64_t uStack_a0;
  void *puStack_98;
  int8_t *puStack_90;
  int32_t uStack_88;
  int8_t auStack_80 [72];
  uint64_t uStack_38;
  
  uStack_a0 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_d8;
  uStack_b8 = 0;
  iVar1 = **(int **)(param_1 + 8);
  *(int **)(param_1 + 8) = *(int **)(param_1 + 8) + 1;
  uVar2 = core_system_data_memory;
  if (iVar1 != 0) {
    puStack_98 = &unknown_var_3480_ptr;
    puStack_90 = auStack_80;
    auStack_80[0] = 0;
    uStack_88 = 0x1c;
    strcpy_s(auStack_80,0x40,&system_data_fc60);
    FUN_1802037e0();
    puStack_98 = &system_state_ptr;
    lVar4 = FUN_18062b1e0(system_memory_pool_ptr,iVar1,0x10,0x1e);
    FUN_1800828d0(uVar2,&plStack_b0);
    plVar3 = plStack_b0;
    plStack_b0[2] = lVar4;
    *(int *)(plStack_b0 + 3) = iVar1;
    *(int *)((int64_t)plStack_b0 + 0x1c) = iVar1;
    *(int8_t *)(plStack_b0 + 4) = 0;
    uStack_b8 = 1;
    plStack_b0 = (int64_t *)0x0;
    plStack_a8 = (int64_t *)*param_2;
    *param_2 = (int64_t)plVar3;
    if (plStack_a8 != (int64_t *)0x0) {
      (**(code **)(*plStack_a8 + 0x38))();
    }
    uStack_b8 = 0;
    if (plStack_b0 != (int64_t *)0x0) {
      (**(code **)(*plStack_b0 + 0x38))();
    }
                    // WARNING: Subroutine does not return
    memcpy(*(uint64_t *)(*param_2 + 0x10),*(uint64_t *)(param_1 + 8),
           (int64_t)*(int *)(*param_2 + 0x1c));
  }
  plStack_a8 = (int64_t *)*param_2;
  *param_2 = 0;
  if (plStack_a8 != (int64_t *)0x0) {
    (**(code **)(*plStack_a8 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800820e0(int64_t param_1,int64_t *param_2)
void FUN_1800820e0(int64_t param_1,int64_t *param_2)

{
  int iVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int8_t auStack_d8 [32];
  int32_t uStack_b8;
  int64_t *plStack_b0;
  int64_t *plStack_a8;
  uint64_t uStack_a0;
  void *puStack_98;
  int8_t *puStack_90;
  int32_t uStack_88;
  int8_t auStack_80 [72];
  uint64_t uStack_38;
  
  uStack_a0 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_d8;
  uStack_b8 = 0;
  iVar1 = **(int **)(param_1 + 8);
  *(int **)(param_1 + 8) = *(int **)(param_1 + 8) + 1;
  uVar2 = core_system_data_memory;
  if (iVar1 != 0) {
    iVar1 = iVar1 * 2;
    puStack_98 = &unknown_var_3480_ptr;
    puStack_90 = auStack_80;
    auStack_80[0] = 0;
    uStack_88 = 0x1c;
    strcpy_s(auStack_80,0x40,&system_data_fc60);
    FUN_1802037e0();
    puStack_98 = &system_state_ptr;
    lVar4 = FUN_18062b1e0(system_memory_pool_ptr,iVar1,0x10,0x1e);
    FUN_180082c20(uVar2,&plStack_b0);
    plVar3 = plStack_b0;
    plStack_b0[2] = lVar4;
    *(int *)(plStack_b0 + 3) = iVar1;
    *(int *)((int64_t)plStack_b0 + 0x1c) = iVar1;
    *(int8_t *)(plStack_b0 + 4) = 0;
    uStack_b8 = 1;
    plStack_b0 = (int64_t *)0x0;
    plStack_a8 = (int64_t *)*param_2;
    *param_2 = (int64_t)plVar3;
    if (plStack_a8 != (int64_t *)0x0) {
      (**(code **)(*plStack_a8 + 0x38))();
    }
    uStack_b8 = 0;
    if (plStack_b0 != (int64_t *)0x0) {
      (**(code **)(*plStack_b0 + 0x38))();
    }
                    // WARNING: Subroutine does not return
    memcpy(*(uint64_t *)(*param_2 + 0x10),*(uint64_t *)(param_1 + 8),
           (int64_t)*(int *)(*param_2 + 0x1c));
  }
  plStack_a8 = (int64_t *)*param_2;
  *param_2 = 0;
  if (plStack_a8 != (int64_t *)0x0) {
    (**(code **)(*plStack_a8 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180082290(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180082290(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  uint64_t *puVar10;
  uint64_t uVar11;
  
  puVar7 = (uint64_t *)param_1[1];
  if ((uint64_t)(param_1[2] - (int64_t)puVar7 >> 5) < param_2) {
    puVar10 = (uint64_t *)*param_1;
    lVar4 = (int64_t)puVar7 - (int64_t)puVar10 >> 5;
    uVar9 = lVar4 * 2;
    if (lVar4 == 0) {
      uVar9 = 1;
    }
    if (uVar9 < lVar4 + param_2) {
      uVar9 = lVar4 + param_2;
    }
    puVar5 = (uint64_t *)0x0;
    if (uVar9 != 0) {
      puVar5 = (uint64_t *)
               FUN_18062b420(system_memory_pool_ptr,uVar9 << 5,(char)param_1[3],param_4,0xfffffffffffffffe);
      puVar7 = (uint64_t *)param_1[1];
      puVar10 = (uint64_t *)*param_1;
    }
    puVar6 = puVar5;
    if (puVar10 != puVar7) {
      lVar4 = (int64_t)puVar5 - (int64_t)puVar10;
      puVar10 = puVar10 + 3;
      do {
        *puVar6 = 0;
        *(uint64_t *)(lVar4 + -0x10 + (int64_t)puVar10) = 0;
        *(uint64_t *)(lVar4 + -8 + (int64_t)puVar10) = 0;
        *(int32_t *)(lVar4 + (int64_t)puVar10) = *(int32_t *)puVar10;
        uVar3 = *puVar6;
        *puVar6 = puVar10[-3];
        puVar10[-3] = uVar3;
        uVar3 = *(uint64_t *)(lVar4 + -0x10 + (int64_t)puVar10);
        *(uint64_t *)(lVar4 + -0x10 + (int64_t)puVar10) = puVar10[-2];
        puVar10[-2] = uVar3;
        uVar3 = *(uint64_t *)(lVar4 + -8 + (int64_t)puVar10);
        *(uint64_t *)(lVar4 + -8 + (int64_t)puVar10) = puVar10[-1];
        puVar10[-1] = uVar3;
        uVar2 = *(int32_t *)(lVar4 + (int64_t)puVar10);
        *(int32_t *)(lVar4 + (int64_t)puVar10) = *(int32_t *)puVar10;
        *(int32_t *)puVar10 = uVar2;
        puVar6 = puVar6 + 4;
        puVar1 = puVar10 + 1;
        puVar10 = puVar10 + 4;
      } while (puVar1 != puVar7);
    }
    if (param_2 != 0) {
      puVar7 = puVar6 + 1;
      uVar11 = param_2;
      do {
        puVar7[-1] = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        *(int32_t *)(puVar7 + 2) = 3;
        puVar7 = puVar7 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    plVar8 = (int64_t *)*param_1;
    if (plVar8 != (int64_t *)param_1[1]) {
      do {
        if (*plVar8 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        plVar8 = plVar8 + 4;
      } while (plVar8 != (int64_t *)param_1[1]);
      plVar8 = (int64_t *)*param_1;
    }
    if (plVar8 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar8);
    }
    *param_1 = (int64_t)puVar5;
    param_1[1] = (int64_t)(puVar6 + param_2 * 4);
    param_1[2] = (int64_t)(puVar5 + uVar9 * 4);
  }
  else {
    uVar9 = param_2;
    if (param_2 != 0) {
      do {
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *(int32_t *)(puVar7 + 3) = 3;
        puVar7 = puVar7 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      puVar7 = (uint64_t *)param_1[1];
    }
    param_1[1] = (int64_t)(puVar7 + param_2 * 4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800824a0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800824a0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  uint64_t *puVar10;
  uint64_t uVar11;
  
  puVar7 = (uint64_t *)param_1[1];
  if ((uint64_t)(param_1[2] - (int64_t)puVar7 >> 5) < param_2) {
    puVar10 = (uint64_t *)*param_1;
    lVar4 = (int64_t)puVar7 - (int64_t)puVar10 >> 5;
    uVar9 = lVar4 * 2;
    if (lVar4 == 0) {
      uVar9 = 1;
    }
    if (uVar9 < lVar4 + param_2) {
      uVar9 = lVar4 + param_2;
    }
    puVar5 = (uint64_t *)0x0;
    if (uVar9 != 0) {
      puVar5 = (uint64_t *)
               FUN_18062b420(system_memory_pool_ptr,uVar9 << 5,(char)param_1[3],param_4,0xfffffffffffffffe);
      puVar7 = (uint64_t *)param_1[1];
      puVar10 = (uint64_t *)*param_1;
    }
    puVar6 = puVar5;
    if (puVar10 != puVar7) {
      lVar4 = (int64_t)puVar5 - (int64_t)puVar10;
      puVar10 = puVar10 + 3;
      do {
        *puVar6 = 0;
        *(uint64_t *)(lVar4 + -0x10 + (int64_t)puVar10) = 0;
        *(uint64_t *)(lVar4 + -8 + (int64_t)puVar10) = 0;
        *(int32_t *)(lVar4 + (int64_t)puVar10) = *(int32_t *)puVar10;
        uVar3 = *puVar6;
        *puVar6 = puVar10[-3];
        puVar10[-3] = uVar3;
        uVar3 = *(uint64_t *)(lVar4 + -0x10 + (int64_t)puVar10);
        *(uint64_t *)(lVar4 + -0x10 + (int64_t)puVar10) = puVar10[-2];
        puVar10[-2] = uVar3;
        uVar3 = *(uint64_t *)(lVar4 + -8 + (int64_t)puVar10);
        *(uint64_t *)(lVar4 + -8 + (int64_t)puVar10) = puVar10[-1];
        puVar10[-1] = uVar3;
        uVar2 = *(int32_t *)(lVar4 + (int64_t)puVar10);
        *(int32_t *)(lVar4 + (int64_t)puVar10) = *(int32_t *)puVar10;
        *(int32_t *)puVar10 = uVar2;
        puVar6 = puVar6 + 4;
        puVar1 = puVar10 + 1;
        puVar10 = puVar10 + 4;
      } while (puVar1 != puVar7);
    }
    if (param_2 != 0) {
      puVar7 = puVar6 + 1;
      uVar11 = param_2;
      do {
        puVar7[-1] = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        *(int32_t *)(puVar7 + 2) = 3;
        puVar7 = puVar7 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    plVar8 = (int64_t *)*param_1;
    if (plVar8 != (int64_t *)param_1[1]) {
      do {
        if (*plVar8 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        plVar8 = plVar8 + 4;
      } while (plVar8 != (int64_t *)param_1[1]);
      plVar8 = (int64_t *)*param_1;
    }
    if (plVar8 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar8);
    }
    *param_1 = (int64_t)puVar5;
    param_1[1] = (int64_t)(puVar6 + param_2 * 4);
    param_1[2] = (int64_t)(puVar5 + uVar9 * 4);
  }
  else {
    uVar9 = param_2;
    if (param_2 != 0) {
      do {
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *(int32_t *)(puVar7 + 3) = 3;
        puVar7 = puVar7 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      puVar7 = (uint64_t *)param_1[1];
    }
    param_1[1] = (int64_t)(puVar7 + param_2 * 4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



