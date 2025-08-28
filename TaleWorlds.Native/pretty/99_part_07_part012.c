#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// $fun 的语义化别名
#define $alias_name $fun


// 99_part_07_part012.c - 19 个函数

// 函数: void FUN_1804a52b0(int64_t param_1,int32_t param_2)
void FUN_1804a52b0(int64_t param_1,int32_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t alStack_40 [2];
  void *puStack_30;
  void *puStack_28;
  
  uVar5 = 0xfffffffffffffffe;
  if ((system_debug_flag != '\0') && (system_cache_buffer != (int64_t *)0x0)) {
    cVar3 = (**(code **)(*system_cache_buffer + 0x28))();
    if (cVar3 != '\0') {
      (**(code **)(system_system_data_ui + 0x358))(*(int32_t *)(system_system_data_ui + 0x10),param_2);
    }
  }
  FUN_1804abca0();
  if (*(int *)(param_1 + 0x410) == 0) {
    lVar1 = *(int64_t *)(param_1 + 0x418);
    *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + 1;
    lVar4 = system_main_module_state;
    if (*(char *)(system_main_module_state + 0x38) != '\0') {
      if (*(int *)(lVar1 + 0x30) == 0) {
        *(int32_t *)(lVar1 + 0x30) = 1;
      }
      else {
        (**(code **)(*(int64_t *)(lVar1 + 0x10) + 0x10))((int64_t *)(lVar1 + 0x10),&system_buffer_ptr)
        ;
        lVar4 = system_main_module_state;
      }
      lVar1 = *(int64_t *)(lVar4 + 0x2b0);
      FUN_1804ca020(*(uint64_t *)(lVar1 + 0x418));
      plVar2 = *(int64_t **)(lVar1 + 0x418);
      if (plVar2 != (int64_t *)0x0) {
        plVar2[2] = (int64_t)&system_data_buffer_ptr;
        if (plVar2[3] != 0) {
                    // WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        plVar2[3] = 0;
        *(int32_t *)(plVar2 + 5) = 0;
        plVar2[2] = (int64_t)&system_state_ptr;
        if ((int64_t *)*plVar2 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*plVar2 + 0x38))();
        }
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager(plVar2);
      }
      *(uint64_t *)(lVar1 + 0x418) = 0;
      *(int32_t *)(lVar1 + 0x410) = 1;
      (**(code **)(system_system_data_ui + 0x340))(*(int32_t *)(system_system_data_ui + 0x10));
      SystemManager_DataHandler(system_message_context,0,0xd,&rendering_buffer_2104_ptr);
      *(int8_t *)(system_main_module_state + 0x1ef) = 1;
    }
  }
  else if (*(int *)(param_1 + 0x410) == 1) {
    (**(code **)(system_system_data_ui + 0xa0))(param_2);
    *(int32_t *)(param_1 + 0x420) = param_2;
    uVar5 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3,uVar5);
    puStack_30 = &processed_var_8352_ptr;
    puStack_28 = &processed_var_8320_ptr;
    alStack_40[0] = param_1;
    uVar5 = SystemCore_ErrorHandler(uVar5,alStack_40);
    SystemCore_PointerManager(system_system_data_ui + 0x220,uVar5);
    *(uint64_t *)(*(int64_t *)(system_system_data_ui + 0x220) + 0x18) = 0xfffffffffffffffd;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804a54e0(uint64_t param_1,uint64_t param_2)
void FUN_1804a54e0(uint64_t param_1,uint64_t param_2)

{
  char cVar1;
  int64_t lVar2;
  int32_t auStackX_18 [2];
  uint64_t uStackX_20;
  uint64_t uVar3;
  int32_t **ppuVar4;
  int32_t *apuStack_40 [2];
  code *pcStack_30;
  code *pcStack_28;
  
  uVar3 = 0xfffffffffffffffe;
  if (system_system_ui != 0) {
    FUN_18056df90();
  }
  cVar1 = (**(code **)(system_system_ui + 0x30))(&system_data_25c8);
  if (cVar1 != '\0') {
    auStackX_18[0] = (int)param_2;
    system_system_ui = FUN_18055c500(&system_data_25a0,param_2);
    FUN_1805f7e10(0x180c92c58,&system_data_2cd8,&system_data_2cf8);
    uStackX_20 = system_system_ui;
    lVar2 = system_system_ui - system_system_ui;
    ppuVar4 = apuStack_40;
    pcStack_30 = FUN_18055ec90;
    pcStack_28 = FUN_18055ec20;
    apuStack_40[0] = (int32_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,system_allocation_flags);
    *apuStack_40[0] = 0x80c925a0;
    apuStack_40[0][1] = 1;
    *(int32_t **)(apuStack_40[0] + 2) = auStackX_18;
    *(uint64_t **)(apuStack_40[0] + 4) = &uStackX_20;
    SystemCore_DataTransformer(0x80c925a0,0,lVar2 >> 3 & 0xffffffff,3,0xffffffffffffffff,apuStack_40,uVar3,
                  ppuVar4);
  }
  system_system_ui = system_system_ui + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void create_game_application(void)

{
  uint64_t *puVar1;
  void *puVar2;
  uint uVar3;
  uint uVar4;
  int8_t auStack_b8 [32];
  code *pcStack_98;
  void *puStack_88;
  int8_t *puStack_80;
  uint uStack_78;
  uint64_t uStack_70;
  int32_t uStack_68;
  uint64_t uStack_60;
  uint64_t *puStack_58;
  void *puStack_50;
  void *puStack_48;
  int iStack_40;
  uint8_t auStack_38 [8];
  uint64_t uStack_30;
  uint64_t uStack_28;
  
                    // 0x4a5650  32  create_game_application
  uStack_30 = 0x1804a566e;
  puVar1 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x428,8,3);
  uStack_60 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_b8;
  uStack_68 = 0;
  *puVar1 = &processed_var_4416_ptr;
  *puVar1 = &rendering_buffer_2120_ptr;
  pcStack_98 = SystemValidator;
  puStack_58 = puVar1;
  DataStructureManager(puVar1 + 2,0x20,0x20,FUN_180627850);
  puVar1[0x83] = 0;
  *(int32_t *)(puVar1 + 0x82) = 0xffffffff;
  FUN_18049dc80();
  (**(code **)(system_system_ui + 0x10))(&system_data_24d0,&system_data_d128);
  *(int32_t *)(puVar1 + 1) = 0;
  puStack_50 = &system_config_ptr;
  puStack_48 = auStack_38;
  auStack_38[0] = 0;
  iStack_40 = 6;
  strcpy_s(auStack_38,0x10,&rendering_buffer_2588_ptr);
  uStack_68 = 1;
  puStack_88 = &system_data_buffer_ptr;
  uStack_70 = 0;
  puStack_80 = (int8_t *)0x0;
  uStack_78 = 0;
  CoreMemoryPoolProcessor(&puStack_88,iStack_40);
  if (0 < iStack_40) {
    puVar2 = &system_buffer_ptr;
    if (puStack_48 != (void *)0x0) {
      puVar2 = puStack_48;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_80,puVar2,(int64_t)(iStack_40 + 1));
  }
  if (puStack_48 != (void *)0x0) {
    uStack_78 = 0;
    if (puStack_80 != (int8_t *)0x0) {
      *puStack_80 = 0;
    }
  }
  uVar4 = uStack_78;
  uStack_68 = 0;
  puStack_50 = &system_state_ptr;
  uVar3 = uStack_78 + 8;
  CoreMemoryPoolProcessor(&puStack_88,uVar3);
  *(uint64_t *)(puStack_80 + uStack_78) = 0x2f73656c75646f4d;
  *(int8_t *)((int64_t)(puStack_80 + uStack_78) + 8) = 0;
  uStack_78 = uVar3;
  if (0 < system_system_ui) {
    CoreMemoryPoolProcessor(&puStack_88,uVar3 + system_system_ui);
                    // WARNING: Subroutine does not return
    memcpy(puStack_80 + uStack_78,system_system_ui,(int64_t)(system_system_ui + 1));
  }
  uVar4 = uVar4 + 9;
  CoreMemoryPoolProcessor(&puStack_88,(uint64_t)uVar4);
  *(int16_t *)(puStack_80 + uStack_78) = 0x2f;
  uStack_78 = uVar4;
  if (puStack_80 != (int8_t *)0x0) {
    CoreMemoryPoolProcessor(&system_data_24f0,uVar4);
  }
  if (uVar4 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(system_system_ui,puStack_80,uVar4);
  }
  system_system_ui = uVar4;
  if (system_system_ui != 0) {
    *(int8_t *)((uint64_t)uVar4 + system_system_ui) = 0;
  }
  system_system_ui = uStack_70._4_4_;
  *(int32_t *)(puVar1 + 0x84) = 0;
  puStack_88 = &system_data_buffer_ptr;
  if (puStack_80 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  puStack_80 = (int8_t *)0x0;
  uStack_70 = (uint64_t)uStack_70._4_4_ << 0x20;
  puStack_88 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_b8,0);
}






// 函数: void FUN_1804a5930(int64_t param_1)
void FUN_1804a5930(int64_t param_1)

{
  int *piVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  
  uVar6 = *(uint64_t *)(param_1 + 0x10);
  lVar4 = *(int64_t *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(int64_t *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (uint64_t)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((int64_t)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (uint64_t)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemCore_DebugHandler();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_1804a5950(uint64_t *param_1)
void FUN_1804a5950(uint64_t *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  
  puVar2 = (uint64_t *)param_1[1];
  for (puVar4 = (uint64_t *)*param_1; puVar4 != puVar2; puVar4 = puVar4 + 7) {
    *puVar4 = &system_state_ptr;
  }
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != (uint64_t *)0x0) {
    uVar5 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((int64_t)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemCore_DebugHandler();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar2,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_1804a5970(int64_t *param_1)
void FUN_1804a5970(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x60) {
    FUN_1804a6ca0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}






// 函数: void FUN_1804a5990(int64_t param_1)
void FUN_1804a5990(int64_t param_1)

{
  int *piVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  
  uVar6 = *(uint64_t *)(param_1 + 0x10);
  lVar4 = *(int64_t *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(int64_t *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (uint64_t)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((int64_t)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (uint64_t)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemCore_DebugHandler();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804a59b0(int64_t *param_1)
void FUN_1804a59b0(int64_t *param_1)

{
  char cVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint uVar4;
  int64_t lVar5;
  uint64_t uVar7;
  uint64_t uVar6;
  
  *param_1 = (int64_t)&processed_var_6464_ptr;
  plVar2 = param_1 + 0x4f1;
  lVar5 = 0x3ff;
  lVar3 = 0x3ff;
  do {
    LOCK();
    *(int16_t *)plVar2 = 0xffff;
    UNLOCK();
    plVar2 = (int64_t *)((int64_t)plVar2 + 2);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  cVar1 = (**(code **)(param_1[5] + 0x30))(param_1 + 5);
  if (cVar1 != '\0') {
    (**(code **)(param_1[5] + 0x18))(param_1 + 5);
  }
  (**(code **)(*param_1 + 8))(param_1);
  plVar2 = param_1 + 0xf2;
  uVar6 = 0;
  do {
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      if ((*(int *)(lVar3 + 0x4c) != 0) && (system_cache_buffer != 0)) {
        (**(code **)(system_cache_buffer + 0x18))();
      }
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(lVar3);
    }
    *plVar2 = 0;
    plVar2 = plVar2 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  plVar2 = param_1 + 0xe7;
  lVar3 = *plVar2;
  uVar7 = uVar6;
  if (param_1[0xe8] - lVar3 >> 3 != 0) {
    do {
      lVar3 = *(int64_t *)(uVar7 + lVar3);
      if (lVar3 != 0) {
        FUN_18055e8d0(lVar3);
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager(lVar3);
      }
      *(uint64_t *)(uVar7 + *plVar2) = 0;
      uVar4 = (int)uVar6 + 1;
      uVar6 = (uint64_t)uVar4;
      lVar3 = *plVar2;
      uVar7 = uVar7 + 8;
    } while ((uint64_t)(int64_t)(int)uVar4 < (uint64_t)(param_1[0xe8] - lVar3 >> 3));
  }
  if (param_1[0x6bf] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  if (param_1[0x6bb] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  FUN_180368c20();
  if (param_1[0x6ac] == 0) {
    param_1[0x6ac] = 0;
    _Mtx_destroy_in_situ();
    FUN_18055e7a0();
    if (*plVar2 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    *param_1 = (int64_t)&processed_var_9800_ptr;
    cVar1 = (**(code **)(param_1[5] + 0x30))(param_1 + 5);
    if (cVar1 != '\0') {
      (**(code **)(param_1[5] + 0x18))(param_1 + 5);
    }
    (**(code **)(*param_1 + 8))(param_1);
    FUN_18056fd20(param_1 + 0xc3);
    if (param_1[0xba] == 0) {
      param_1[0xba] = 0;
      param_1[5] = (int64_t)&processed_var_9728_ptr;
      return;
    }
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}






// 函数: void FUN_1804a59d0(uint64_t *param_1)
void FUN_1804a59d0(uint64_t *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  
  puVar2 = (uint64_t *)param_1[1];
  for (puVar4 = (uint64_t *)*param_1; puVar4 != puVar2; puVar4 = puVar4 + 0xd) {
    *puVar4 = &system_state_ptr;
  }
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != (uint64_t *)0x0) {
    uVar5 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((int64_t)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemCore_DebugHandler();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar2,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_1804a59f0(int64_t param_1)
void FUN_1804a59f0(int64_t param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  FUN_1804a5d80();
  if ((1 < *(uint64_t *)(param_1 + 0x10)) &&
     (puVar2 = *(uint64_t **)(param_1 + 8), puVar2 != (uint64_t *)0x0)) {
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
          SystemCore_DebugHandler();
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
  return;
}






// 函数: void FUN_1804a5a30(int64_t param_1)
void FUN_1804a5a30(int64_t param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  FUN_1804a5d80();
  if ((1 < *(uint64_t *)(param_1 + 0x10)) &&
     (puVar2 = *(uint64_t **)(param_1 + 8), puVar2 != (uint64_t *)0x0)) {
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
          SystemCore_DebugHandler();
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
  return;
}






// 函数: void FUN_1804a5a70(uint64_t *param_1)
void FUN_1804a5a70(uint64_t *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  
  puVar2 = (uint64_t *)param_1[1];
  for (puVar4 = (uint64_t *)*param_1; puVar4 != puVar2; puVar4 = puVar4 + 0xd) {
    *puVar4 = &system_state_ptr;
  }
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != (uint64_t *)0x0) {
    uVar5 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((int64_t)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemCore_DebugHandler();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar2,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_1804a5ad0(int64_t param_1)
void FUN_1804a5ad0(int64_t param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  FUN_1804a5d80();
  if ((1 < *(uint64_t *)(param_1 + 0x10)) &&
     (puVar2 = *(uint64_t **)(param_1 + 8), puVar2 != (uint64_t *)0x0)) {
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
          SystemCore_DebugHandler();
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
  return;
}






// 函数: void FUN_1804a5b00(uint64_t *param_1)
void FUN_1804a5b00(uint64_t *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  
  puVar2 = (uint64_t *)param_1[1];
  for (puVar4 = (uint64_t *)*param_1; puVar4 != puVar2; puVar4 = puVar4 + 7) {
    *puVar4 = &system_state_ptr;
  }
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != (uint64_t *)0x0) {
    uVar5 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((int64_t)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemCore_DebugHandler();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar2,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_1804a5b60(int64_t *param_1)
void FUN_1804a5b60(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x60) {
    FUN_1804a6ca0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}






// 函数: void FUN_1804a5bc0(int64_t param_1)
void FUN_1804a5bc0(int64_t param_1)

{
  int *piVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  
  uVar6 = *(uint64_t *)(param_1 + 0x10);
  lVar4 = *(int64_t *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(int64_t *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (uint64_t)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((int64_t)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (uint64_t)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemCore_DebugHandler();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_1804a5bc6(int64_t param_1)
void FUN_1804a5bc6(int64_t param_1)

{
  int *piVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  
  uVar6 = *(uint64_t *)(param_1 + 0x10);
  lVar4 = *(int64_t *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(int64_t *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (uint64_t)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((int64_t)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (uint64_t)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemCore_DebugHandler();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_1804a5bf0(void)
void FUN_1804a5bf0(void)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t uVar4;
  int64_t unaff_R14;
  uint64_t unaff_R15;
  
  do {
    lVar3 = *(int64_t *)(unaff_R14 + unaff_RDI * 8);
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(lVar3);
    }
    *(uint64_t *)(unaff_R14 + unaff_RDI * 8) = unaff_R15;
    unaff_RDI = unaff_RDI + 1;
  } while (unaff_RDI < unaff_RSI);
  *(uint64_t *)(unaff_RBP + 0x18) = unaff_R15;
  if ((1 < *(uint64_t *)(unaff_RBP + 0x10)) &&
     (puVar2 = *(uint64_t **)(unaff_RBP + 8), puVar2 != (uint64_t *)0x0)) {
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
          SystemCore_DebugHandler();
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
  return;
}






// 函数: void FUN_1804a5c26(void)
void FUN_1804a5c26(void)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t uVar4;
  uint64_t unaff_R15;
  
  *(uint64_t *)(unaff_RBP + 0x18) = unaff_R15;
  if ((1 < unaff_RSI) && (puVar2 = *(uint64_t **)(unaff_RBP + 8), puVar2 != (uint64_t *)0x0)) {
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
          SystemCore_DebugHandler();
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
  return;
}






// 函数: void FUN_1804a5c44(void)
void FUN_1804a5c44(void)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  uint64_t uVar4;
  
  puVar2 = *(uint64_t **)(unaff_RBP + 8);
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
        SystemCore_DebugHandler();
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

uint64_t * FUN_1804a5c60(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3)

{
  int iVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  bool bVar9;
  uint64_t uVar10;
  
  uVar4 = *param_3;
  iVar1 = (int)param_3[1];
  bVar9 = true;
  puVar7 = (uint64_t *)param_1[2];
  puVar5 = param_1;
  while (puVar7 != (uint64_t *)0x0) {
    puVar5 = puVar7;
    if ((uVar4 < (uint64_t)puVar7[4]) ||
       ((uVar4 <= (uint64_t)puVar7[4] && (iVar1 < *(int *)(puVar7 + 5))))) {
      bVar9 = true;
      puVar7 = (uint64_t *)puVar7[1];
    }
    else {
      bVar9 = false;
      puVar7 = (uint64_t *)*puVar7;
    }
  }
  puVar7 = puVar5;
  if (bVar9) {
    if (puVar5 == (uint64_t *)param_1[1]) goto LAB_1804a5d01;
    puVar7 = (uint64_t *)func_0x00018066b9a0(puVar5);
  }
  if ((uVar4 <= (uint64_t)puVar7[4]) &&
     ((uVar4 < (uint64_t)puVar7[4] || (iVar1 <= *(int *)(puVar7 + 5))))) {
    *param_2 = puVar7;
    *(int8_t *)(param_2 + 1) = 0;
    return param_2;
  }
LAB_1804a5d01:
  lVar8 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x30,*(int8_t *)(param_1 + 5));
  uVar2 = *(int32_t *)((int64_t)param_3 + 4);
  uVar6 = param_3[1];
  uVar3 = *(int32_t *)((int64_t)param_3 + 0xc);
  *(int *)(lVar8 + 0x20) = (int)*param_3;
  *(int32_t *)(lVar8 + 0x24) = uVar2;
  *(int *)(lVar8 + 0x28) = (int)uVar6;
  *(int32_t *)(lVar8 + 0x2c) = uVar3;
  if (((puVar5 == param_1) || (uVar4 < (uint64_t)puVar5[4])) ||
     ((uVar4 <= (uint64_t)puVar5[4] && (iVar1 < *(int *)(puVar5 + 5))))) {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
  }
                    // WARNING: Subroutine does not return
  SystemStateController(lVar8,puVar5,param_1,uVar10);
}






