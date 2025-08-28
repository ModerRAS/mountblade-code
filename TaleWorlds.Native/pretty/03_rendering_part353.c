#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part353.c - 18 个函数

// 函数: void FUN_18045af40(uint64_t *param_1)
void FUN_18045af40(uint64_t *param_1)

{
  FUN_18023b050(*param_1,0);
                    // WARNING: Could not recover jumptable at 0x00018045af5e. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(int64_t *)*param_1 + 0x38))();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t * FUN_18045afb0(int32_t *param_1)

{
  int64_t *plVar1;
  int32_t uVar2;
  int64_t *plVar3;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_14;
  
  plVar3 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x108,8,3,0xfffffffffffffffe);
  FUN_180244190(plVar3);
  *plVar3 = (int64_t)&processed_var_7416_ptr;
  plVar3[0x1e] = 0;
  plVar3[0x1f] = 0;
  plVar1 = (int64_t *)plVar3[0x1e];
  plVar3[0x1e] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (int64_t *)plVar3[0x1f];
  plVar3[0x1f] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int8_t *)(plVar3 + 0x20) = 1;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uStack_20 = SUB84(plVar3,0);
  uStack_1c = (int32_t)((uint64_t)plVar3 >> 0x20);
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  param_1[2] = uVar2;
  param_1[3] = uStack_14;
  (**(code **)(*plVar3 + 0x38))(plVar3);
  return param_1;
}





// 函数: void FUN_18045b0b0(int64_t param_1,int64_t *param_2)
void FUN_18045b0b0(int64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  
  if (param_1 != 0) {
    if (param_2 != (int64_t *)0x0) {
      (**(code **)(*param_2 + 0x28))(param_2);
    }
    plVar1 = *(int64_t **)(param_1 + 0xf0);
    *(int64_t **)(param_1 + 0xf0) = param_2;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    FUN_180488de0(param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t * FUN_18045b120(int32_t *param_1)

{
  int32_t uVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_14;
  
  uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x1e8,8,3,0xfffffffffffffffe);
  plVar3 = (int64_t *)FUN_180489240(uVar2);
  if (plVar3 == (int64_t *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    (**(code **)(*plVar3 + 0x28))(plVar3);
    uVar1 = (**(code **)(*plVar3 + 8))(plVar3);
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  uStack_20 = SUB84(plVar3,0);
  uStack_1c = (int32_t)((uint64_t)plVar3 >> 0x20);
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  param_1[2] = uVar1;
  param_1[3] = uStack_14;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3);
  }
  return param_1;
}





// 函数: void FUN_18045b1d0(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
void FUN_18045b1d0(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
                  uint64_t param_5,uint64_t param_6,int32_t param_7)

{
  uint64_t uVar1;
  void *puStack_30;
  int64_t lStack_28;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_180627910(&puStack_30,param_6);
  if (param_1 == 0) {
    puStack_30 = &system_data_buffer_ptr;
    if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  else {
    FUN_18048c490(param_1,param_2,param_3,param_4,param_5,&puStack_30,param_4 + 0x10,
                  *(int16_t *)(param_4 + 0x32c),*(int16_t *)(param_4 + 0x32e),param_7,uVar1);
    puStack_30 = &system_data_buffer_ptr;
    if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  return;
}





// 函数: void FUN_18045b2f0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18045b2f0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  void *puStack_30;
  int64_t lStack_28;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_180627910(&puStack_30);
  FUN_180489b50(param_1,&puStack_30,param_3,param_4,uVar1);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}





// 函数: void FUN_18045b360(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_18045b360(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  int32_t param_5,int32_t param_6,uint64_t param_7,uint64_t param_8,
                  int32_t param_9)

{
  uint64_t uVar1;
  void *puStack_50;
  int64_t lStack_48;
  int32_t uStack_38;
  void *puStack_30;
  int64_t lStack_28;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_180627910(&puStack_30,param_7);
  FUN_180627910(&puStack_50,param_8);
  if (param_1 == 0) {
    puStack_50 = &system_data_buffer_ptr;
    if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_48 = 0;
    uStack_38 = 0;
    puStack_50 = &system_state_ptr;
    puStack_30 = &system_data_buffer_ptr;
    if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  else {
    FUN_18048c490(param_1,param_2,param_3,0,param_4,&puStack_30,&puStack_50,param_5,param_6,param_9,
                  uVar1);
    puStack_50 = &system_data_buffer_ptr;
    if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_48 = 0;
    uStack_38 = 0;
    puStack_50 = &system_state_ptr;
    puStack_30 = &system_data_buffer_ptr;
    if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t * FUN_18045b510(int32_t *param_1)

{
  int32_t uVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_14;
  
  uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x1e8,8,3,0xfffffffffffffffe);
  plVar3 = (int64_t *)FUN_18030cef0(uVar2);
  if (plVar3 == (int64_t *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    (**(code **)(*plVar3 + 0x28))(plVar3);
    uVar1 = (**(code **)(*plVar3 + 8))(plVar3);
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  uStack_20 = SUB84(plVar3,0);
  uStack_1c = (int32_t)((uint64_t)plVar3 >> 0x20);
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  param_1[2] = uVar1;
  param_1[3] = uStack_14;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045b5b0(int64_t param_1)
void FUN_18045b5b0(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint uVar4;
  uint64_t uVar5;
  
  *(int8_t *)(param_1 + 0x120) = 1;
  uVar3 = 0;
  uVar5 = uVar3;
  if ((*(int64_t **)(param_1 + 0x110))[1] - **(int64_t **)(param_1 + 0x110) >> 3 != 0) {
    do {
      lVar2 = *(int64_t *)(uVar3 + **(int64_t **)(param_1 + 0x110));
      *(uint64_t *)(lVar2 + 0x10) = *(uint64_t *)(lVar2 + 8);
      uVar4 = (int)uVar5 + 1;
      uVar3 = uVar3 + 8;
      uVar5 = (uint64_t)uVar4;
    } while ((uint64_t)(int64_t)(int)uVar4 <
             (uint64_t)
             ((*(int64_t **)(param_1 + 0x110))[1] - **(int64_t **)(param_1 + 0x110) >> 3));
  }
  uVar4 = *(int *)(param_1 + 0x124) + 1U & 0x80000001;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
  }
  *(uint *)(param_1 + 0x124) = uVar4;
  *(int32_t *)(param_1 + 0x128) = 0;
  FUN_1800b8500(param_1 + 0x170 + (int64_t)(int)uVar4 * 0x20);
  lVar2 = *(int64_t *)(param_1 + 0x1c0);
  while( true ) {
    if (lVar2 == param_1 + 0x1b8) {
      *(int32_t *)(param_1 + 0x11c) = 0;
      *(int32_t *)(param_1 + 0x118) = *(int32_t *)(render_system_data_memory + 0x40);
      return;
    }
    lVar1 = *(int64_t *)(lVar2 + 0x30);
    *(int32_t *)(lVar1 + 0x20) = 0;
    *(int *)(lVar1 + 0x24) = *(int *)(lVar1 + 0x24) + 1;
    if (0x78 < *(int *)(lVar1 + 0x24)) break;
    lVar2 = func_0x00018066bd70(lVar2);
  }
  FUN_180057830(lVar1);
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(lVar1);
}





// 函数: void FUN_18045b7c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_18045b7c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  int32_t param_5,int32_t param_6,int64_t *param_7,uint64_t param_8)

{
  int64_t *plVar1;
  uint64_t uVar2;
  
  plVar1 = param_7;
  uVar2 = 0xfffffffffffffffe;
  if (param_7 != (int64_t *)0x0) {
    (**(code **)(*param_7 + 0x28))(param_7);
  }
  FUN_18030d960(param_1,param_2,param_3,param_4,param_5,param_6,&param_7,param_8,uVar2);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1);
  }
  return;
}





// 函数: void FUN_18045b880(uint64_t param_1,int64_t *param_2,uint64_t param_3)
void FUN_18045b880(uint64_t param_1,int64_t *param_2,uint64_t param_3)

{
  int64_t *plStackX_8;
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  plStackX_8 = param_2;
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  FUN_18030d960(param_1,0,0,0,0,0,&plStackX_8,param_3,uVar1);
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x38))(param_2);
  }
  return;
}



int8_t FUN_18045b900(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int8_t uVar1;
  int64_t *plStackX_8;
  uint64_t uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  plStackX_8 = param_2;
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  uVar1 = FUN_18030e490(param_1,&plStackX_8,param_3,param_4,uVar2);
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x38))(param_2);
  }
  return uVar1;
}





// 函数: void FUN_18045b970(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_18045b970(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  int32_t param_5,int32_t param_6,int64_t *param_7,uint64_t param_8)

{
  int64_t *plVar1;
  uint64_t uVar2;
  
  plVar1 = param_7;
  uVar2 = 0xfffffffffffffffe;
  if (param_7 != (int64_t *)0x0) {
    (**(code **)(*param_7 + 0x28))(param_7);
  }
  FUN_18030dcc0(param_1,param_2,param_3,param_4,param_5,param_6,&param_7,param_8,uVar2);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_18045ba30(void)

{
  int32_t uVar1;
  void *puStack_30;
  int64_t lStack_28;
  int32_t uStack_20;
  uint64_t uStack_18;
  
  puStack_30 = &system_data_buffer_ptr;
  uStack_18 = 0;
  lStack_28 = 0;
  uStack_20 = 0;
  System_DataHandler(&puStack_30,&processed_var_896_ptr,0,0,0xfffffffffffffffe);
  uVar1 = (**(code **)(*system_cache_buffer + 0x70))(system_cache_buffer,&puStack_30);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return uVar1;
}





// 函数: void FUN_18045bb20(void)
void FUN_18045bb20(void)

{
  int8_t auStack_30 [40];
  
  FUN_180627910(auStack_30);
  FUN_180200780();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_18045bbb0(void)

{
  int32_t uVar1;
  int64_t lVar2;
  float fVar3;
  float fVar4;
  int64_t *plStackX_8;
  uint64_t **ppuStackX_10;
  void *puStack_118;
  int64_t lStack_110;
  int32_t uStack_108;
  uint64_t uStack_100;
  void *puStack_f8;
  uint64_t uStack_f0;
  int32_t uStack_e8;
  uint64_t uStack_e0;
  void *puStack_d8;
  uint64_t uStack_d0;
  int32_t uStack_c8;
  uint64_t uStack_c0;
  void *puStack_b8;
  uint64_t uStack_b0;
  int32_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t **appuStack_98 [2];
  void *puStack_88;
  code *pcStack_80;
  int64_t alStack_78 [10];
  uint64_t uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  puStack_118 = &system_data_buffer_ptr;
  uStack_100 = 0;
  lStack_110 = 0;
  uStack_108 = 0;
  puStack_b8 = &system_data_buffer_ptr;
  uStack_a0 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  puStack_d8 = &system_data_buffer_ptr;
  uStack_c0 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  puStack_f8 = &system_data_buffer_ptr;
  uStack_e0 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  lVar2 = FUN_180623ce0();
  alStack_78[0] = 0;
  alStack_78[1] = 0;
  alStack_78[2] = 0;
  alStack_78[3] = 0;
  alStack_78[4] = 0;
  alStack_78[5] = 0;
  alStack_78[6] = 0;
  alStack_78[7] = 0;
  alStack_78[8] = 0;
  plStackX_8 = alStack_78;
  ppuStackX_10 = appuStack_98;
  puStack_88 = &rendering_buffer_2640_ptr;
  pcStack_80 = FUN_1800adba0;
  appuStack_98[0] = &plStackX_8;
  FUN_18005c650(appuStack_98);
  fVar3 = (float)alStack_78[0];
  if (alStack_78[0] < 0) {
    fVar3 = fVar3 + 1.8446744e+19;
  }
  fVar4 = (float)lVar2;
  if (lVar2 < 0) {
    fVar4 = fVar4 + 1.8446744e+19;
  }
  System_DataHandler(&puStack_118,&processed_var_784_ptr,(double)(fVar4 * 9.536743e-07),
                (double)(fVar3 * 9.536743e-07));
  uVar1 = (**(code **)(*system_cache_buffer + 0x70))(system_cache_buffer,&puStack_118);
  uStack_f0 = 0;
  uStack_e0 = uStack_e0 & 0xffffffff00000000;
  puStack_f8 = &system_state_ptr;
  uStack_d0 = 0;
  uStack_c0 = uStack_c0 & 0xffffffff00000000;
  puStack_d8 = &system_state_ptr;
  uStack_b0 = 0;
  uStack_a0 = uStack_a0 & 0xffffffff00000000;
  puStack_b8 = &system_state_ptr;
  puStack_118 = &system_data_buffer_ptr;
  if (lStack_110 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t
FUN_18045bdb0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int8_t uVar1;
  uint64_t uVar2;
  void *puStack_30;
  int64_t lStack_28;
  
  uVar2 = FUN_180627910(&puStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  uVar1 = FUN_180051f00(system_main_module_state,uVar2);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_18045be20(void)

{
  code *pcVar1;
  int32_t uVar2;
  uint64_t in_R9;
  void *puStack_30;
  int32_t *puStack_28;
  int32_t uStack_20;
  uint64_t uStack_18;
  
  pcVar1 = *(code **)(*system_cache_buffer + 0x70);
  puStack_30 = &system_data_buffer_ptr;
  uStack_18 = 0;
  puStack_28 = (int32_t *)0x0;
  uStack_20 = 0;
  puStack_28 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x1f,0x13,in_R9,0xfffffffffffffffe);
  *(int8_t *)puStack_28 = 0;
  uVar2 = CoreEngineSystemCleanup(puStack_28);
  uStack_18 = CONCAT44(uStack_18._4_4_,uVar2);
  *puStack_28 = 0x74696445;
  puStack_28[1] = 0x646f6d20;
  puStack_28[2] = 0x656e2065;
  puStack_28[3] = 0x20736465;
  *(uint64_t *)(puStack_28 + 4) = 0x6e65206562206f74;
  puStack_28[6] = 0x656c6261;
  *(int16_t *)(puStack_28 + 7) = 0x2164;
  *(int8_t *)((int64_t)puStack_28 + 0x1e) = 0;
  uStack_20 = 0x1e;
  uVar2 = (*pcVar1)(system_cache_buffer,&puStack_30);
  puStack_30 = &system_data_buffer_ptr;
  if (puStack_28 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045bf30(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18045bf30(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int8_t auStack_30 [16];
  void *puStack_20;
  void *puStack_18;
  
  FUN_18013f940(*system_main_module_state,1,param_3,param_4,0xfffffffffffffffe);
  *(int32_t *)(system_main_module_state + 4) = 0;
  FUN_180088160();
  FUN_1800c3730();
  FUN_1800c33e0(render_system_data_memory);
  FUN_1800c3c70();
  FUN_18018fb50();
  FUN_18021e0a0();
  FUN_18021e9c0();
  puStack_20 = &processed_var_4944_ptr;
  puStack_18 = &processed_var_4928_ptr;
  FUN_18005c650(auStack_30);
  return;
}



float FUN_18045bfc0(void)

{
  int64_t lVar1;
  float fVar2;
  
  lVar1 = FUN_180623ce0();
  fVar2 = (float)lVar1;
  if (lVar1 < 0) {
    fVar2 = fVar2 + 1.8446744e+19;
  }
  return fVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045c010(void)
void FUN_18045c010(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  lVar1 = system_main_module_state;
  lVar2 = CoreEngineMemoryPoolReallocator();
  *(int32_t *)(lVar2 + 0x19) = 0;
  *(int16_t *)(lVar2 + 0x1d) = 0;
  *(int8_t *)(lVar2 + 0x1f) = 0;
  *(int32_t *)(lVar2 + 0x28) = 3;
  *(int64_t *)lVar2 = lVar2;
  *(int64_t *)(lVar2 + 8) = lVar2;
  *(uint64_t *)(lVar2 + 0x10) = 0;
  *(int8_t *)(lVar2 + 0x18) = 0;
  *(uint64_t *)(lVar2 + 0x20) = 0;
  lVar3 = lVar2 + 0x30;
  *(uint64_t *)(lVar2 + 0x48) = 0;
  *(int32_t *)(lVar2 + 0x58) = 3;
  *(int64_t *)lVar3 = lVar3;
  *(int64_t *)(lVar2 + 0x38) = lVar3;
  *(uint64_t *)(lVar2 + 0x40) = 0;
  *(int8_t *)(lVar2 + 0x48) = 0;
  *(uint64_t *)(lVar2 + 0x50) = 0;
  *(uint64_t *)(lVar2 + 0x60) = 0;
  *(uint64_t *)(lVar2 + 0x68) = 0;
  *(uint64_t *)(lVar2 + 0x70) = 0;
  *(int32_t *)(lVar2 + 0x78) = 3;
  LOCK();
  *(int32_t *)(lVar2 + 0x80) = 0;
  UNLOCK();
  *(int64_t *)(lVar1 + 0x98) = lVar2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045c0d0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18045c0d0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  
  lVar2 = system_main_module_state;
  uVar3 = 0xfffffffffffffffe;
  FUN_18017aa30(*(uint64_t *)(system_main_module_state + 0x98));
  lVar1 = *(int64_t *)(lVar2 + 0x98);
  if (lVar1 != 0) {
    FUN_18017b3a0();
    FUN_18017b400(lVar1 + 0x30,*(uint64_t *)(lVar1 + 0x40),param_3,param_4,uVar3);
    FUN_1800b9270(lVar1,*(uint64_t *)(lVar1 + 0x10));
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar1);
  }
  *(uint64_t *)(lVar2 + 0x98) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045c160(void)
void FUN_18045c160(void)

{
  code *pcVar1;
  uint64_t uVar2;
  int8_t auStack_168 [32];
  uint64_t uStack_148;
  void *apuStack_138 [36];
  uint64_t uStack_18;
  
  uStack_148 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_168;
  pcVar1 = *(code **)(*system_cache_buffer + 0x70);
  uVar2 = FUN_1806240a0(apuStack_138);
  (*pcVar1)(system_cache_buffer,uVar2);
  apuStack_138[0] = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_168);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045c1d0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18045c1d0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  void *puVar2;
  void *puStack_30;
  int64_t lStack_28;
  
  lVar1 = FUN_180627910(&puStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  puVar2 = &system_buffer_ptr;
  if (*(void **)(lVar1 + 8) != (void *)0x0) {
    puVar2 = *(void **)(lVar1 + 8);
  }
  (**(code **)(*(int64_t *)(system_main_module_state + 0x148) + 0x10))
            ((int64_t *)(system_main_module_state + 0x148),puVar2);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045c250(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18045c250(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  void *puStack_30;
  int64_t lStack_28;
  
  uVar1 = FUN_180627910(&puStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  FUN_180054360(system_main_module_state,uVar1);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045c2c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18045c2c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int32_t uVar2;
  uint64_t uVar3;
  void **appuStackX_18 [2];
  uint64_t uVar4;
  void *puStack_30;
  int64_t lStack_28;
  
  uVar4 = 0xfffffffffffffffe;
  lVar1 = *system_main_module_state;
  appuStackX_18[0] = &puStack_30;
  uVar3 = FUN_180627910(&puStack_30);
  uVar2 = FUN_180142220(lVar1,uVar3,param_3,param_4,uVar4);
  FUN_180627910(&puStack_30,param_1);
  appuStackX_18[0] = (void **)CONCAT44(appuStackX_18[0]._4_4_,uVar2);
  uVar3 = FUN_18009b5a0(lVar1 + 0x858,&puStack_30);
  FUN_1800571e0(uVar3,appuStackX_18);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t
FUN_18045c380(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  int32_t uVar2;
  uint64_t uVar3;
  void *puStack_30;
  int64_t lStack_28;
  
  pcVar1 = *(code **)(*system_cache_buffer + 0x70);
  uVar3 = FUN_1800524c0(*system_cache_buffer,&puStack_30,param_3,param_4,0xfffffffffffffffe);
  uVar2 = (*pcVar1)(system_cache_buffer,uVar3);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045c3f0(uint64_t param_1)
void FUN_18045c3f0(uint64_t param_1)

{
  code *pcVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int8_t auStack_2b8 [32];
  int32_t uStack_298;
  void *puStack_290;
  int64_t lStack_288;
  int32_t uStack_278;
  uint64_t uStack_270;
  int8_t *puStack_268;
  int8_t auStack_260 [40];
  void *apuStack_238 [68];
  uint64_t uStack_18;
  
  uStack_270 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2b8;
  uStack_298 = 0;
  pcVar1 = *(code **)(*system_cache_buffer + 0x70);
  lVar4 = *system_main_module_state;
  puStack_268 = auStack_260;
  uVar3 = FUN_180627910(auStack_260,param_1);
  iVar2 = FUN_180142220(lVar4,uVar3);
  if (-1 < iVar2) {
    if ((uint64_t)(int64_t)iVar2 <
        (uint64_t)(*(int64_t *)(lVar4 + 0x890) - *(int64_t *)(lVar4 + 0x888) >> 5)) {
      lVar4 = (int64_t)iVar2 * 0x20 + *(int64_t *)(lVar4 + 0x888);
      goto LAB_18045c493;
    }
  }
  lVar4 = FUN_180628ca0();
LAB_18045c493:
  uVar3 = FUN_180624440(apuStack_238,lVar4);
  uVar3 = SystemCore_EncryptionEngine0(&puStack_290,uVar3);
  uStack_298 = 1;
  apuStack_238[0] = &system_state_ptr;
  (*pcVar1)(system_cache_buffer,uVar3);
  uStack_298 = 0;
  puStack_290 = &system_data_buffer_ptr;
  if (lStack_288 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_288 = 0;
  uStack_278 = 0;
  puStack_290 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_2b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t
FUN_18045c540(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  int32_t uVar2;
  uint64_t uVar3;
  void *puStack_30;
  int64_t lStack_28;
  
  pcVar1 = *(code **)(*system_cache_buffer + 0x70);
  uVar3 = FUN_18013f590(*system_main_module_state,&puStack_30,param_3,param_4,0xfffffffffffffffe);
  uVar2 = (*pcVar1)(system_cache_buffer,uVar3);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



