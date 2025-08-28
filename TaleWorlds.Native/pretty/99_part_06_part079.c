#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_06_part079.c - 8 个函数

// 函数: void FUN_1803f6590(int64_t param_1)
void FUN_1803f6590(int64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  
  *(int32_t *)(param_1 + 0x74 + (int64_t)*(int *)(param_1 + 0x464) * 4) = 0xffffffe8;
  lVar1 = param_1 + (int64_t)*(int *)(param_1 + 0x464) * 8;
  plVar2 = *(int64_t **)(param_1 + (int64_t)*(int *)(param_1 + 0x460) * 8 + 0x450);
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plVar3 = *(int64_t **)(lVar1 + 0x138);
  *(int64_t **)(lVar1 + 0x138) = plVar2;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  plVar2 = *(int64_t **)(param_1 + 0x450 + (int64_t)(1 - *(int *)(param_1 + 0x460)) * 8);
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plVar3 = *(int64_t **)(param_1 + 0x428);
  *(int64_t **)(param_1 + 0x428) = plVar2;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  *(int *)(param_1 + 0x460) = 1 - *(int *)(param_1 + 0x460);
  return;
}



uint64_t * FUN_1803f6670(uint64_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  
  FUN_1801fa180();
  *param_1 = &memory_allocator_3864_ptr;
  DataStructureManager(param_1 + 0x8a,8,2,&SUB_18005d5f0,DataCacheManager);
  *(int32_t *)(param_1 + 0x8c) = 0;
  *(int32_t *)((int64_t)param_1 + 0x464) = 4;
  plVar1 = (int64_t *)param_1[0x8b];
  param_1[0x8b] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (int64_t *)param_1[0x8b];
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (int64_t *)param_1[0x8a];
  param_1[0x8a] = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  return param_1;
}



uint64_t * FUN_1803f6750(uint64_t *param_1,uint param_2)

{
  *param_1 = &memory_allocator_3864_ptr;
  SystemDataValidator(param_1 + 0x8a,8,2,DataCacheManager,0xfffffffffffffffe);
  FUN_1801f9920(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x468);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_1803f67c0(int64_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *plVar6;
  
  uVar3 = CoreSystem_LoggingManager0(system_memory_pool_ptr,0x468,8,3,0xfffffffffffffffe);
  lVar4 = FUN_1803f6670(uVar3);
  FUN_1801f8ea0(lVar4,param_1);
  plVar6 = (int64_t *)(lVar4 + 0x450);
  lVar5 = 2;
  do {
    plVar1 = *(int64_t **)((param_1 - lVar4) + (int64_t)plVar6);
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plVar2 = (int64_t *)*plVar6;
    *plVar6 = (int64_t)plVar1;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    plVar6 = plVar6 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(int32_t *)(lVar4 + 0x460) = *(int32_t *)(param_1 + 0x460);
  *(int32_t *)(lVar4 + 0x464) = *(int32_t *)(param_1 + 0x464);
  return lVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f68a0(int64_t *param_1,int64_t param_2)
void FUN_1803f68a0(int64_t *param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int8_t auStack_1e8 [32];
  int64_t *plStack_1c8;
  int64_t *plStack_1c0;
  int64_t *plStack_1b8;
  int32_t uStack_1b0;
  int32_t uStack_1ac;
  int32_t uStack_1a8;
  int32_t uStack_1a4;
  int32_t uStack_1a0;
  uint64_t uStack_19c;
  uint64_t uStack_194;
  int8_t uStack_18c;
  uint64_t uStack_18b;
  int32_t uStack_180;
  int8_t uStack_17c;
  uint64_t uStack_178;
  void *puStack_168;
  int8_t *puStack_160;
  int32_t uStack_158;
  int8_t auStack_150 [136];
  void *puStack_c8;
  int8_t *puStack_c0;
  int32_t uStack_b8;
  int8_t auStack_b0 [136];
  uint64_t uStack_28;
  
  uStack_178 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1e8;
  FUN_1801f9270();
  uStack_1a8 = 1;
  uStack_1a4 = 1;
  uStack_19c = 0;
  uStack_194 = 0x3f80000000000000;
  uStack_18b = 1;
  uStack_18c = 0;
  uStack_17c = 0;
  uStack_1a0 = (int32_t)param_1[0xe];
  uStack_180 = *(int32_t *)(param_2 + 0x1bd4);
  if (*(char *)((int64_t)param_1 + 0x4c) == '\0') {
    uStack_1b0 = (int32_t)(int64_t)(double)param_1[0xb];
    uStack_1ac = (int32_t)(int64_t)(double)param_1[0xc];
    if (param_1[0x8a] == 0) {
      puStack_c8 = &memory_allocator_3432_ptr;
      puStack_c0 = auStack_b0;
      auStack_b0[0] = 0;
      uStack_b8 = 0xe;
      strcpy_s(auStack_b0,0x80,&rendering_buffer_2976_ptr);
      plVar2 = (int64_t *)FUN_1800b1230(system_resource_state,&plStack_1b8,&puStack_c8,&uStack_1b0);
      lVar1 = *plVar2;
      *plVar2 = 0;
      plStack_1c8 = (int64_t *)param_1[0x8a];
      param_1[0x8a] = lVar1;
      if (plStack_1c8 != (int64_t *)0x0) {
        (**(code **)(*plStack_1c8 + 0x38))();
      }
      if (plStack_1b8 != (int64_t *)0x0) {
        (**(code **)(*plStack_1b8 + 0x38))();
      }
      puStack_c8 = &system_state_ptr;
    }
    if (param_1[0x8b] == 0) {
      puStack_168 = &memory_allocator_3432_ptr;
      puStack_160 = auStack_150;
      auStack_150[0] = 0;
      uStack_158 = 0xe;
      strcpy_s(auStack_150,0x80,&rendering_buffer_2992_ptr);
      plVar2 = (int64_t *)FUN_1800b1230(system_resource_state,&plStack_1c0,&puStack_168,&uStack_1b0);
      lVar1 = *plVar2;
      *plVar2 = 0;
      plStack_1c8 = (int64_t *)param_1[0x8b];
      param_1[0x8b] = lVar1;
      if (plStack_1c8 != (int64_t *)0x0) {
        (**(code **)(*plStack_1c8 + 0x38))();
      }
      if (plStack_1c0 != (int64_t *)0x0) {
        (**(code **)(*plStack_1c0 + 0x38))();
      }
      puStack_168 = &system_state_ptr;
    }
  }
  else {
    uStack_1b0 = (int32_t)(int64_t)((double)*(int *)(param_2 + 0x3590) * (double)param_1[0xb]);
    uStack_1ac = (int32_t)(int64_t)((double)*(int *)(param_2 + 0x3594) * (double)param_1[0xc]);
    puStack_168 = &memory_allocator_3432_ptr;
    puStack_160 = auStack_150;
    auStack_150[0] = 0;
    uStack_158 = 0xe;
    strcpy_s(auStack_150,0x80,&rendering_buffer_2976_ptr);
    plVar2 = (int64_t *)FUN_1800b1230(system_resource_state,&plStack_1b8,&puStack_168,&uStack_1b0);
    lVar1 = *plVar2;
    *plVar2 = 0;
    plStack_1c0 = (int64_t *)param_1[0x8a];
    param_1[0x8a] = lVar1;
    if (plStack_1c0 != (int64_t *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    if (plStack_1b8 != (int64_t *)0x0) {
      (**(code **)(*plStack_1b8 + 0x38))();
    }
    puStack_168 = &system_state_ptr;
    puStack_c8 = &memory_allocator_3432_ptr;
    puStack_c0 = auStack_b0;
    auStack_b0[0] = 0;
    uStack_b8 = 0xe;
    strcpy_s(auStack_b0,0x80,&rendering_buffer_2992_ptr);
    plVar2 = (int64_t *)FUN_1800b1230(system_resource_state,&plStack_1c8,&puStack_c8,&uStack_1b0);
    lVar1 = *plVar2;
    *plVar2 = 0;
    plStack_1c0 = (int64_t *)param_1[0x8b];
    param_1[0x8b] = lVar1;
    if (plStack_1c0 != (int64_t *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    if (plStack_1c8 != (int64_t *)0x0) {
      (**(code **)(*plStack_1c8 + 0x38))();
    }
    puStack_c8 = &system_state_ptr;
  }
  (**(code **)(*param_1 + 0x40))(param_1,0,0);
  plStack_1c8 = (int64_t *)param_1[0x89];
  param_1[0x89] = 0;
  if (plStack_1c8 != (int64_t *)0x0) {
    (**(code **)(*plStack_1c8 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  CoreSystemConfigManager(uStack_28 ^ (uint64_t)auStack_1e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f6c60(int64_t param_1,uint64_t param_2,int64_t param_3,int32_t param_4,
void FUN_1803f6c60(int64_t param_1,uint64_t param_2,int64_t param_3,int32_t param_4,
                  int32_t param_5)

{
  int64_t *plVar1;
  int64_t *plVar2;
  bool bVar3;
  bool bVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t **pplVar7;
  int64_t *plStackX_8;
  int64_t *aplStackX_18 [2];
  
  plVar1 = *(int64_t **)(param_1 + 0x458);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar6 = *(int64_t **)(param_1 + 0x450);
  if (plVar6 != (int64_t *)0x0) {
    plStackX_8 = plVar6;
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  plStackX_8 = *(int64_t **)(param_1 + 0x458);
  *(int64_t **)(param_1 + 0x458) = plVar6;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  plVar6 = *(int64_t **)(param_1 + 0x138);
  if (plVar6 != (int64_t *)0x0) {
    plStackX_8 = plVar6;
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  plStackX_8 = *(int64_t **)(param_1 + 0x450);
  *(int64_t **)(param_1 + 0x450) = plVar6;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  *(int32_t *)(param_1 + 0x84) = 0xffffffe8;
  *(int32_t *)(param_1 + 0x8c) = 0xffffffe8;
  plVar6 = *(int64_t **)(param_1 + 0x458);
  if (plVar6 == (int64_t *)0x0) {
    plVar6 = (int64_t *)FUN_1800bdc80();
    plStackX_8 = plVar6;
    if (plVar6 != (int64_t *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6);
    }
    pplVar7 = &plStackX_8;
    bVar4 = false;
    bVar3 = true;
  }
  else {
    aplStackX_18[0] = plVar6;
    (**(code **)(*plVar6 + 0x28))(plVar6);
    pplVar7 = aplStackX_18;
    bVar4 = true;
    bVar3 = false;
  }
  *pplVar7 = (int64_t *)0x0;
  plVar2 = *(int64_t **)(param_1 + 0x158);
  *(int64_t **)(param_1 + 0x158) = plVar6;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  if (bVar3) {
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  if (bVar4) {
    if (aplStackX_18[0] != (int64_t *)0x0) {
      (**(code **)(*aplStackX_18[0] + 0x38))();
    }
  }
  bVar4 = false;
  bVar3 = false;
  if (plVar1 == (int64_t *)0x0) {
    plVar6 = (int64_t *)FUN_1800bdc80();
    plStackX_8 = plVar6;
    if (plVar6 != (int64_t *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6);
    }
    pplVar7 = &plStackX_8;
    bVar3 = true;
  }
  else {
    aplStackX_18[0] = plVar1;
    (**(code **)(*plVar1 + 0x28))(plVar1);
    pplVar7 = aplStackX_18;
    bVar4 = true;
    plVar6 = plVar1;
  }
  *pplVar7 = (int64_t *)0x0;
  plVar2 = *(int64_t **)(param_1 + 0x168);
  *(int64_t **)(param_1 + 0x168) = plVar6;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  if (bVar3) {
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  if (bVar4) {
    if (aplStackX_18[0] != (int64_t *)0x0) {
      (**(code **)(*aplStackX_18[0] + 0x38))();
    }
  }
  bVar4 = false;
  bVar3 = false;
  plVar6 = *(int64_t **)(param_1 + 0x460);
  if (plVar6 != (int64_t *)0x0) {
    plStackX_8 = plVar6;
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  plStackX_8 = *(int64_t **)(param_1 + 0x468);
  *(int64_t **)(param_1 + 0x468) = plVar6;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  plVar6 = *(int64_t **)(param_1 + 0x1a0);
  if (plVar6 != (int64_t *)0x0) {
    plStackX_8 = plVar6;
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  plStackX_8 = *(int64_t **)(param_1 + 0x460);
  *(int64_t **)(param_1 + 0x460) = plVar6;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  *(int32_t *)(param_1 + 0xb0) = 0xffffffe8;
  plVar6 = *(int64_t **)(param_1 + 0x468);
  if (plVar6 == (int64_t *)0x0) {
    plVar6 = (int64_t *)FUN_1800bdc80();
    plStackX_8 = plVar6;
    if (plVar6 != (int64_t *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6);
    }
    pplVar7 = &plStackX_8;
    bVar3 = true;
  }
  else {
    aplStackX_18[0] = plVar6;
    (**(code **)(*plVar6 + 0x28))(plVar6);
    pplVar7 = aplStackX_18;
    bVar4 = true;
  }
  *pplVar7 = (int64_t *)0x0;
  plVar2 = *(int64_t **)(param_1 + 0x1b0);
  *(int64_t **)(param_1 + 0x1b0) = plVar6;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  if (bVar3) {
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  if (bVar4) {
    if (aplStackX_18[0] != (int64_t *)0x0) {
      (**(code **)(*aplStackX_18[0] + 0x38))();
    }
  }
  lVar5 = system_message_buffer;
  *(int32_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1ca0) =
       *(int32_t *)(param_3 + 0x12c00);
  *(int32_t *)(*(int64_t *)(lVar5 + 0x1cd8) + 0x1ca4) = *(int32_t *)(param_3 + 0x12c04);
  *(float *)(*(int64_t *)(lVar5 + 0x1cd8) + 0x1c90) = (float)*(byte *)(param_1 + 0x470);
  *(int32_t *)(*(int64_t *)(lVar5 + 0x1cd8) + 0x1c80) = *(int32_t *)(param_3 + 0x12c00);
  *(int32_t *)(*(int64_t *)(lVar5 + 0x1cd8) + 0x1c84) = *(int32_t *)(param_3 + 0x12c04);
  FUN_1801f6650(param_1,param_2,param_3,param_4,param_5);
  *(int8_t *)(param_1 + 0x470) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1);
  }
  return;
}



uint64_t * FUN_1803f7080(uint64_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  
  FUN_1801fa180();
  *param_1 = &memory_allocator_3776_ptr;
  DataStructureManager(param_1 + 0x8a,8,2,&SUB_18005d5f0,DataCacheManager);
  DataStructureManager(param_1 + 0x8c,8,2,&SUB_18005d5f0,DataCacheManager);
  *(int8_t *)(param_1 + 0x8e) = 1;
  plVar1 = (int64_t *)param_1[0x8b];
  param_1[0x8b] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (int64_t *)param_1[0x8b];
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (int64_t *)param_1[0x8a];
  param_1[0x8a] = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  return param_1;
}



uint64_t * FUN_1803f7180(uint64_t *param_1,uint param_2)

{
  *param_1 = &memory_allocator_3776_ptr;
  SystemDataValidator(param_1 + 0x8c,8,2,DataCacheManager,0xfffffffffffffffe);
  SystemDataValidator(param_1 + 0x8a,8,2,DataCacheManager);
  FUN_1801f9920(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x478);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_1803f7210(int64_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *plVar7;
  
  uVar3 = CoreSystem_LoggingManager0(system_memory_pool_ptr,0x478,8,3,0xfffffffffffffffe);
  lVar4 = FUN_1803f7080(uVar3);
  FUN_1801f8ea0(lVar4,param_1);
  plVar7 = (int64_t *)(lVar4 + 0x450);
  lVar5 = 2;
  lVar6 = 2;
  do {
    plVar1 = *(int64_t **)((param_1 - lVar4) + (int64_t)plVar7);
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plVar2 = (int64_t *)*plVar7;
    *plVar7 = (int64_t)plVar1;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    plVar7 = plVar7 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  plVar7 = (int64_t *)(lVar4 + 0x460);
  do {
    plVar1 = *(int64_t **)((int64_t)plVar7 + (param_1 - lVar4));
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plVar2 = (int64_t *)*plVar7;
    *plVar7 = (int64_t)plVar1;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    plVar7 = plVar7 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(int8_t *)(lVar4 + 0x470) = *(int8_t *)(param_1 + 0x470);
  return lVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f7330(int64_t param_1,int64_t param_2)
void FUN_1803f7330(int64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  int8_t auStack_148 [32];
  int32_t uStack_128;
  int64_t *plStack_120;
  int32_t uStack_118;
  int32_t uStack_114;
  int32_t uStack_110;
  int32_t uStack_10c;
  int32_t uStack_108;
  uint64_t uStack_104;
  uint64_t uStack_fc;
  int8_t uStack_f4;
  uint64_t uStack_f3;
  int32_t uStack_e8;
  int8_t uStack_e4;
  int64_t *plStack_e0;
  uint64_t uStack_d8;
  void *puStack_c8;
  int8_t *puStack_c0;
  int32_t uStack_b8;
  int8_t auStack_b0 [136];
  uint64_t uStack_28;
  
  uStack_d8 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_148;
  uStack_128 = 0;
  FUN_1801f9270();
  uStack_110 = 1;
  uStack_10c = 1;
  uStack_104 = 0;
  uStack_fc = 0x3f80000000000000;
  uStack_f3 = 1;
  uStack_f4 = 0;
  uStack_e4 = 0;
  uStack_108 = *(int32_t *)(param_1 + 0x70);
  uStack_e8 = *(int32_t *)(param_2 + 0x1bd4);
  if (*(char *)(param_1 + 0x4c) != '\0') {
    uStack_118 = (int32_t)
                 (int64_t)((float)*(double *)(param_1 + 0x58) * (float)*(int *)(param_2 + 0x3590));
    uStack_114 = (int32_t)
                 (int64_t)((float)*(double *)(param_1 + 0x60) * (float)*(int *)(param_2 + 0x3594));
    puStack_c8 = &memory_allocator_3432_ptr;
    puStack_c0 = auStack_b0;
    auStack_b0[0] = 0;
    uStack_b8 = 0xb;
    strcpy_s(auStack_b0,0x80,&memory_allocator_3008_ptr);
    puVar2 = (uint64_t *)FUN_1800b1230(system_resource_state,&plStack_120,&puStack_c8,&uStack_118);
    uStack_128 = 1;
    uVar1 = *puVar2;
    *puVar2 = 0;
    plStack_e0 = *(int64_t **)(param_1 + 0x428);
    *(uint64_t *)(param_1 + 0x428) = uVar1;
    if (plStack_e0 != (int64_t *)0x0) {
      (**(code **)(*plStack_e0 + 0x38))();
    }
    uStack_128 = 0;
    if (plStack_120 != (int64_t *)0x0) {
      (**(code **)(*plStack_120 + 0x38))();
    }
    puStack_c8 = &system_state_ptr;
  }
  plStack_120 = *(int64_t **)(param_1 + 0x448);
  *(uint64_t *)(param_1 + 0x448) = 0;
  if (plStack_120 != (int64_t *)0x0) {
    (**(code **)(*plStack_120 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  CoreSystemConfigManager(uStack_28 ^ (uint64_t)auStack_148);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f74f0(int64_t *param_1,int64_t param_2)
void FUN_1803f74f0(int64_t *param_1,int64_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int iVar4;
  uint64_t uVar5;
  uint uVar6;
  void *puVar7;
  int8_t auVar8 [16];
  int8_t auVar9 [16];
  int8_t auVar10 [16];
  int8_t auVar11 [16];
  int8_t auStack_158 [32];
  int32_t uStack_138;
  int64_t *plStack_128;
  int iStack_120;
  int iStack_11c;
  int32_t uStack_118;
  int32_t uStack_114;
  int32_t uStack_110;
  uint64_t uStack_10c;
  uint64_t uStack_104;
  int16_t uStack_fc;
  byte bStack_fa;
  int16_t uStack_f9;
  int8_t uStack_f7;
  int8_t uStack_f6;
  int16_t uStack_f5;
  int iStack_f0;
  int8_t uStack_ec;
  uint64_t uStack_e8;
  void *puStack_d8;
  int8_t *puStack_d0;
  uint uStack_c8;
  int8_t auStack_c0 [136];
  uint64_t uStack_38;
  
  uStack_e8 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  FUN_1801f9270();
  puStack_d8 = &memory_allocator_3432_ptr;
  puStack_d0 = auStack_c0;
  auStack_c0[0] = 0;
  uStack_c8 = *(uint *)(param_1 + 4);
  puVar7 = &system_buffer_ptr;
  if ((void *)param_1[3] != (void *)0x0) {
    puVar7 = (void *)param_1[3];
  }
  strcpy_s(auStack_c0,0x80,puVar7);
  uVar5 = (uint64_t)uStack_c8;
  uVar6 = uStack_c8 + 1;
  if (uVar6 < 0x7f) {
    *(int16_t *)(puStack_d0 + uVar5) = 0x5f;
    uVar5 = (uint64_t)uVar6;
    uStack_c8 = uVar6;
  }
  puVar7 = &system_buffer_ptr;
  if (*(void **)(param_2 + 0x3528) != (void *)0x0) {
    puVar7 = *(void **)(param_2 + 0x3528);
  }
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (puVar7[lVar2] != '\0');
  iVar4 = (int)lVar2;
  if ((0 < iVar4) && ((uint)((int)uVar5 + iVar4) < 0x7f)) {
                    // WARNING: Subroutine does not return
    memcpy(puStack_d0 + uVar5,puVar7,(int64_t)(iVar4 + 1));
  }
  if (*(char *)((int64_t)param_1 + 0x4d) == '\0') {
    iVar4 = (int)param_1[0x37];
    if (iVar4 == -1) {
      uStack_118 = 1;
      uStack_114 = 1;
      uStack_fc = 0x100;
      uStack_f9 = 0;
      uStack_f5 = 0;
      uStack_ec = 0;
      uStack_110 = (int32_t)param_1[0xe];
      bStack_fa = *(byte *)(param_1 + 10);
      uVar6 = (uint)bStack_fa;
      uStack_f6 = bStack_fa == 0;
      uStack_f7 = 1;
      uStack_10c = 0;
      uStack_104 = 0;
      iStack_f0 = iVar4;
      if (*(char *)((int64_t)param_1 + 0x4c) == '\0') {
        iStack_120 = (int)(int64_t)(double)param_1[0xb];
        iStack_11c = (int)(int64_t)(double)param_1[0xc];
        if (param_1[0x85] != 0) goto LAB_1803f78fe;
        (**(code **)(*param_1 + 8))(param_1,&iStack_120,param_2);
        uVar3 = FUN_1800b1230(system_resource_state,&plStack_128,&puStack_d8,&iStack_120);
        FUN_180060b80(param_1 + 0x85,uVar3);
      }
      else {
        auVar8._0_4_ = (float)(double)param_1[0xb] * (float)*(int *)(param_2 + 0x3590);
        iVar4 = (int)auVar8._0_4_;
        if (auVar8._0_4_ <= 0.0) {
          if ((iVar4 != -0x80000000) && ((float)iVar4 != auVar8._0_4_)) {
            auVar9._4_4_ = auVar8._0_4_;
            auVar9._0_4_ = auVar8._0_4_;
            auVar9._8_8_ = 0;
            uVar6 = movmskps((uint)bStack_fa,auVar9);
            uVar6 = uVar6 & 1 ^ 1;
            auVar8._0_4_ = (float)(int)(iVar4 + uVar6);
          }
          auVar8._0_4_ = auVar8._0_4_ - 1e-08;
        }
        else {
          if ((iVar4 != -0x80000000) && ((float)iVar4 != auVar8._0_4_)) {
            auVar8._4_4_ = auVar8._0_4_;
            auVar8._8_8_ = 0;
            uVar6 = movmskps((uint)bStack_fa,auVar8);
            uVar6 = uVar6 & 1 ^ 1;
            auVar8._0_4_ = (float)(int)(iVar4 + uVar6);
          }
          auVar8._0_4_ = auVar8._0_4_ + 1e-08;
        }
        iStack_120 = (int)auVar8._0_4_;
        auVar10._0_4_ = (float)(double)param_1[0xc] * (float)*(int *)(param_2 + 0x3594);
        iVar4 = (int)auVar10._0_4_;
        if (auVar10._0_4_ <= 0.0) {
          if ((iVar4 != -0x80000000) && ((float)iVar4 != auVar10._0_4_)) {
            auVar11._4_4_ = auVar10._0_4_;
            auVar11._0_4_ = auVar10._0_4_;
            auVar11._8_8_ = 0;
            uVar6 = movmskps(uVar6,auVar11);
            auVar10._0_4_ = (float)(int)(iVar4 + (uVar6 & 1 ^ 1));
          }
          auVar10._0_4_ = auVar10._0_4_ - 1e-08;
        }
        else {
          if ((iVar4 != -0x80000000) && ((float)iVar4 != auVar10._0_4_)) {
            auVar10._4_4_ = auVar10._0_4_;
            auVar10._8_8_ = 0;
            uVar6 = movmskps(uVar6,auVar10);
            auVar10._0_4_ = (float)(int)(iVar4 + (uVar6 & 1 ^ 1));
          }
          auVar10._0_4_ = auVar10._0_4_ + 1e-08;
        }
        iStack_11c = (int)auVar10._0_4_;
        if (iStack_120 < 1) {
          iStack_120 = 1;
        }
        if (iStack_11c < 1) {
          iStack_11c = 1;
        }
        (**(code **)(*param_1 + 8))(param_1,&iStack_120,param_2);
        uVar3 = FUN_1800b1230(system_resource_state,&plStack_128,&puStack_d8,&iStack_120);
        FUN_180060b80(param_1 + 0x85,uVar3);
      }
    }
    else {
      if (iVar4 == -3) {
        if (((int)param_1[0x3b] == 9) && (iVar4 = strcmp(param_1[0x3a],&processed_var_5656_ptr), iVar4 == 0))
        {
          uVar3 = FUN_180244ff0(param_2);
          FUN_180056f10(param_1 + 0x85,uVar3);
        }
        else {
          puVar7 = &system_buffer_ptr;
          if ((void *)param_1[3] != (void *)0x0) {
            puVar7 = (void *)param_1[3];
          }
          SystemCore_ResourceManager0(&processed_var_7200_ptr,puVar7);
        }
        goto LAB_1803f78fe;
      }
      if (iVar4 != -2) goto LAB_1803f78fe;
      uStack_138 = *(int32_t *)(param_2 + 0x1bd4);
      uVar3 = FUN_1801f9aa0(uVar5,&plStack_128,param_1,param_1 + 0x39);
      FUN_180060b80(param_1 + 0x85,uVar3);
    }
  }
  else {
    plVar1 = *(int64_t **)(param_2 + 0x9690);
    if (plVar1 != (int64_t *)0x0) {
      plStack_128 = plVar1;
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plStack_128 = (int64_t *)param_1[0x85];
    param_1[0x85] = (int64_t)plVar1;
  }
  if (plStack_128 != (int64_t *)0x0) {
    (**(code **)(*plStack_128 + 0x38))();
  }
LAB_1803f78fe:
  puStack_d8 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  CoreSystemConfigManager(uStack_38 ^ (uint64_t)auStack_158);
}






// 函数: void FUN_1803f7930(int64_t param_1)
void FUN_1803f7930(int64_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int *piVar4;
  
  plVar2 = (int64_t *)(param_1 + 0x138);
  piVar4 = (int *)(param_1 + 0x74);
  lVar3 = 0x10;
  do {
    if (*piVar4 != -2) {
      plVar1 = (int64_t *)*plVar2;
      *plVar2 = 0;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
    }
    piVar4 = piVar4 + 1;
    plVar2 = plVar2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  plVar2 = *(int64_t **)(param_1 + 0x428);
  *(uint64_t *)(param_1 + 0x428) = 0;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f79d0(int64_t *param_1,int64_t param_2)
void FUN_1803f79d0(int64_t *param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int8_t auStack_1e8 [32];
  int64_t *plStack_1c8;
  int64_t *plStack_1c0;
  int64_t *plStack_1b8;
  int iStack_1b0;
  int iStack_1ac;
  int32_t uStack_1a8;
  int32_t uStack_1a4;
  int32_t uStack_1a0;
  int32_t uStack_19c;
  int32_t uStack_198;
  int32_t uStack_194;
  int32_t uStack_190;
  int8_t uStack_18c;
  uint64_t uStack_18b;
  int32_t uStack_180;
  int8_t uStack_17c;
  uint64_t uStack_178;
  void *puStack_168;
  int8_t *puStack_160;
  int32_t uStack_158;
  int8_t auStack_150 [136];
  void *puStack_c8;
  int8_t *puStack_c0;
  int32_t uStack_b8;
  int8_t auStack_b0 [136];
  uint64_t uStack_28;
  
  uStack_178 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1e8;
  FUN_1801f9270();
  uStack_1a8 = 1;
  uStack_1a4 = 1;
  uStack_19c = 0;
  uStack_198 = 0;
  uStack_194 = 0;
  uStack_190 = 0x3f800000;
  uStack_18b = 1;
  uStack_18c = 0;
  uStack_17c = 0;
  uStack_1a0 = (int32_t)param_1[0xe];
  iStack_1b0 = (int)(int64_t)(double)param_1[0xb];
  iStack_1ac = (int)(int64_t)(double)param_1[0xc];
  uStack_180 = *(int32_t *)(param_2 + 0x1bd4);
  if (*(char *)((int64_t)param_1 + 0x4c) == '\0') {
    if (param_1[0x8a] == 0) {
      puStack_c8 = &memory_allocator_3432_ptr;
      puStack_c0 = auStack_b0;
      auStack_b0[0] = 0;
      uStack_b8 = 7;
      strcpy_s(auStack_b0,0x80,&memory_allocator_3152_ptr);
      plVar2 = (int64_t *)FUN_1800b1230(system_resource_state,&plStack_1b8,&puStack_c8,&iStack_1b0);
      lVar1 = *plVar2;
      *plVar2 = 0;
      plStack_1c8 = (int64_t *)param_1[0x8a];
      param_1[0x8a] = lVar1;
      if (plStack_1c8 != (int64_t *)0x0) {
        (**(code **)(*plStack_1c8 + 0x38))();
      }
      if (plStack_1b8 != (int64_t *)0x0) {
        (**(code **)(*plStack_1b8 + 0x38))();
      }
      puStack_c8 = &system_state_ptr;
    }
    if (param_1[0x8b] == 0) {
      puStack_168 = &memory_allocator_3432_ptr;
      puStack_160 = auStack_150;
      auStack_150[0] = 0;
      uStack_158 = 0xf;
      strcpy_s(auStack_150,0x80,&memory_allocator_3160_ptr);
      plVar2 = (int64_t *)FUN_1800b1230(system_resource_state,&plStack_1c0,&puStack_168,&iStack_1b0);
      lVar1 = *plVar2;
      *plVar2 = 0;
      plStack_1c8 = (int64_t *)param_1[0x8b];
      param_1[0x8b] = lVar1;
      if (plStack_1c8 != (int64_t *)0x0) {
        (**(code **)(*plStack_1c8 + 0x38))();
      }
      if (plStack_1c0 != (int64_t *)0x0) {
        (**(code **)(*plStack_1c0 + 0x38))();
      }
      puStack_168 = &system_state_ptr;
    }
  }
  else {
    iStack_1b0 = iStack_1b0 * *(int *)(param_2 + 0x3590);
    iStack_1ac = iStack_1ac * *(int *)(param_2 + 0x3594);
    puStack_168 = &memory_allocator_3432_ptr;
    puStack_160 = auStack_150;
    auStack_150[0] = 0;
    uStack_158 = 0xe;
    strcpy_s(auStack_150,0x80,&rendering_buffer_2976_ptr);
    plVar2 = (int64_t *)FUN_1800b1230(system_resource_state,&plStack_1b8,&puStack_168,&iStack_1b0);
    lVar1 = *plVar2;
    *plVar2 = 0;
    plStack_1c0 = (int64_t *)param_1[0x8a];
    param_1[0x8a] = lVar1;
    if (plStack_1c0 != (int64_t *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    if (plStack_1b8 != (int64_t *)0x0) {
      (**(code **)(*plStack_1b8 + 0x38))();
    }
    puStack_168 = &system_state_ptr;
    puStack_c8 = &memory_allocator_3432_ptr;
    puStack_c0 = auStack_b0;
    auStack_b0[0] = 0;
    uStack_b8 = 0xe;
    strcpy_s(auStack_b0,0x80,&rendering_buffer_2992_ptr);
    plVar2 = (int64_t *)FUN_1800b1230(system_resource_state,&plStack_1c8,&puStack_c8,&iStack_1b0);
    lVar1 = *plVar2;
    *plVar2 = 0;
    plStack_1c0 = (int64_t *)param_1[0x8b];
    param_1[0x8b] = lVar1;
    if (plStack_1c0 != (int64_t *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    if (plStack_1c8 != (int64_t *)0x0) {
      (**(code **)(*plStack_1c8 + 0x38))();
    }
    puStack_c8 = &system_state_ptr;
  }
  (**(code **)(*param_1 + 0x40))(param_1,0,0);
  plStack_1c8 = (int64_t *)param_1[0x89];
  param_1[0x89] = 0;
  if (plStack_1c8 != (int64_t *)0x0) {
    (**(code **)(*plStack_1c8 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  CoreSystemConfigManager(uStack_28 ^ (uint64_t)auStack_1e8);
}






// 函数: void FUN_1803f7d70(int64_t param_1)
void FUN_1803f7d70(int64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  
  *(int32_t *)(param_1 + 0x74 + (int64_t)*(int *)(param_1 + 0x46c) * 4) = 0xffffffe8;
  lVar1 = param_1 + (int64_t)*(int *)(param_1 + 0x46c) * 8;
  plVar2 = *(int64_t **)(param_1 + (int64_t)*(int *)(param_1 + 0x468) * 8 + 0x450);
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plVar3 = *(int64_t **)(lVar1 + 0x138);
  *(int64_t **)(lVar1 + 0x138) = plVar2;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  plVar2 = *(int64_t **)(param_1 + 0x450 + (int64_t)(1 - *(int *)(param_1 + 0x468)) * 8);
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plVar3 = *(int64_t **)(param_1 + 0x428);
  *(int64_t **)(param_1 + 0x428) = plVar2;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  *(int *)(param_1 + 0x468) = 1 - *(int *)(param_1 + 0x468);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




