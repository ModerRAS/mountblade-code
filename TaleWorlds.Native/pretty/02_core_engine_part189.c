#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part189.c - 14 个函数

// 函数: void FUN_18017107a(void)
void FUN_18017107a(void)

{
  uint64_t uVar1;
  int64_t unaff_RDI;
  uint64_t in_stack_00000050;
  
  uVar1 = LoadCursorFromFileA();
  *(uint64_t *)(unaff_RDI + 0x50) = uVar1;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180171101(int64_t param_1)
void FUN_180171101(int64_t param_1)

{
  int64_t lVar1;
  int64_t unaff_RBX;
  int64_t lStack0000000000000028;
  uint64_t in_stack_00000050;
  
  lVar1 = *(int64_t *)(param_1 + 0x20);
  lStack0000000000000028 = lVar1 + 0x18;
  FUN_180173720(lVar1,*(int32_t *)(unaff_RBX + 0x30),*(int32_t *)(unaff_RBX + 0x34),
                *(int8_t *)(unaff_RBX + 0x38),lVar1 + 0x38);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801712c0(int64_t param_1)
void FUN_1801712c0(int64_t param_1)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int8_t auStack_98 [32];
  uint64_t uStack_78;
  uint64_t uStack_70;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_98;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  lVar3 = GetFocus();
  uStack_68 = CONCAT31(uStack_68._1_3_,*(int64_t *)(param_1 + 8) == lVar3);
  lVar3 = WindowFromPoint(CONCAT44(uStack_60,uStack_64));
  uStack_5c = CONCAT31(uStack_5c._1_3_,lVar3 == *(int64_t *)(param_1 + 8));
  GetWindowRect(*(int64_t *)(param_1 + 8),&uStack_58);
  lVar3 = GetConsoleWindow();
  if (lVar3 != 0) {
    GetWindowRect(lVar3,&uStack_48);
  }
  uStack_28 = (int32_t)uStack_78;
  uStack_24 = uStack_78._4_4_;
  uStack_20 = (int32_t)uStack_70;
  uStack_1c = uStack_70._4_4_;
  MapWindowPoints(*(uint64_t *)(param_1 + 8),0,&uStack_28,2);
  uStack_38 = CONCAT44(uStack_24,uStack_28);
  GetClientRect(*(uint64_t *)(param_1 + 8),&uStack_78);
  GetCursorPos(&uStack_64);
  uVar4 = (uint64_t)(*(int *)(param_1 + 0x13c) - 1U & 1);
  puVar1 = (uint64_t *)(param_1 + 0xac + uVar4 * 0x48);
  *puVar1 = uStack_78;
  puVar1[1] = uStack_70;
  puVar1 = (uint64_t *)(param_1 + 0xbc + uVar4 * 0x48);
  *puVar1 = CONCAT44(uStack_64,uStack_68);
  puVar1[1] = CONCAT44(uStack_5c,uStack_60);
  puVar1 = (uint64_t *)(param_1 + 0xcc + uVar4 * 0x48);
  *puVar1 = uStack_58;
  puVar1[1] = uStack_50;
  puVar2 = (int32_t *)(param_1 + 0xdc + uVar4 * 0x48);
  *puVar2 = (int32_t)uStack_48;
  puVar2[1] = uStack_48._4_4_;
  puVar2[2] = (int32_t)uStack_40;
  puVar2[3] = uStack_40._4_4_;
  *(uint64_t *)(param_1 + 0xec + uVar4 * 0x48) = uStack_38;
  LOCK();
  *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + 1;
  UNLOCK();
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_98);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180171410(int64_t param_1,uint64_t *param_2)
void FUN_180171410(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  code *pcVar4;
  int64_t *plVar5;
  int8_t auStack_98 [32];
  int64_t lStack_78;
  int64_t *plStack_68;
  uint64_t uStack_60;
  int64_t *plStack_58;
  int64_t **pplStack_50;
  void *puStack_48;
  int8_t *puStack_40;
  int32_t uStack_38;
  int8_t auStack_30 [16];
  uint64_t uStack_20;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_20 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_98;
  *(uint64_t *)(param_1 + 0x10) = *param_2;
  plVar5 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x218,8,3);
  lVar1 = system_context_ptr + 0x70;
  lVar2 = system_context_ptr + 0x78;
  puStack_48 = &system_config_ptr;
  puStack_40 = auStack_30;
  auStack_30[0] = 0;
  uStack_38 = 0xc;
  plStack_68 = plVar5;
  strcpy_s(auStack_30,0x10,&rendering_buffer_2016_ptr);
  lStack_78 = lVar1;
  FUN_18020e0e0(plVar5,&puStack_48,3,lVar2);
  *plVar5 = (int64_t)&processed_var_9056_ptr;
  *plVar5 = (int64_t)&rendering_buffer_2920_ptr;
  *(int8_t *)(plVar5 + 0x41) = 0;
  *(int64_t **)(param_1 + 0x140) = plVar5;
  puStack_48 = &system_state_ptr;
  *(int64_t *)(*(int64_t *)(param_1 + 0x140) + 0x210) = param_1;
  FUN_18020e840(*(uint64_t *)(param_1 + 0x140));
  plStack_68 = *(int64_t **)(param_1 + 0x140);
  SystemSecurity_Manager(system_context_ptr + 0x48,&plStack_68);
  plVar5 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,200,8,3);
  plStack_68 = plVar5;
  UltraHighFreq_PerformanceMonitor1(plVar5);
  *plVar5 = (int64_t)&rendering_buffer_2776_ptr;
  plVar5[0x18] = param_1;
  plStack_58 = plVar5;
  (**(code **)(*plVar5 + 0x28))(plVar5);
  puVar3 = *(uint64_t **)(param_1 + 0x140);
  pcVar4 = *(code **)*puVar3;
  pplStack_50 = &plStack_68;
  plStack_68 = plVar5;
  (**(code **)(*plVar5 + 0x28))(plVar5);
  (*pcVar4)(puVar3,&plStack_68);
  CoreEngine_SystemInitializer(*(uint64_t *)(param_1 + 0x140));
  *(int8_t *)(core_system_data_memory + 0x2028) = 1;
  (**(code **)(*plVar5 + 0x38))(plVar5);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_20 ^ (uint64_t)auStack_98);
}





// 函数: void FUN_180171610(int64_t param_1)
void FUN_180171610(int64_t param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  
  puVar1 = *(uint64_t **)(param_1 + 0x20);
  puVar2 = *(uint64_t **)(param_1 + 0x18);
  if (puVar2 != puVar1) {
    do {
      *puVar2 = &system_state_ptr;
      puVar2 = puVar2 + 0xe;
    } while (puVar2 != puVar1);
    puVar2 = *(uint64_t **)(param_1 + 0x18);
  }
  *(uint64_t **)(param_1 + 0x20) = puVar2;
  uVar3 = GetDC(0);
                    // WARNING: Could not recover jumptable at 0x00018017167a. Too many branches
                    // WARNING: Treating indirect jump as call
  EnumDisplayMonitors(uVar3,0,FUN_180170ba0,param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1801716e0(int64_t param_1,int64_t param_2)

{
  uint64_t *puVar1;
  code *pcVar2;
  int64_t *plVar3;
  int64_t *plStackX_8;
  
  if (*(int64_t *)(param_1 + 8) == 0) {
    return 0;
  }
  plVar3 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x48,8,3,0xfffffffffffffffe);
  *plVar3 = (int64_t)&system_handler1_ptr;
  *plVar3 = (int64_t)&system_handler2_ptr;
  *(int32_t *)(plVar3 + 1) = 0;
  *plVar3 = (int64_t)&ui_system_data_1000_ptr;
  LOCK();
  *(int8_t *)(plVar3 + 2) = 0;
  UNLOCK();
  plVar3[3] = -1;
  *plVar3 = (int64_t)&rendering_buffer_2640_ptr;
  *(int32_t *)(plVar3 + 5) = 0;
  plVar3[4] = param_1;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3[6] = param_2;
  puVar1 = *(uint64_t **)(param_1 + 0x140);
  pcVar2 = *(code **)*puVar1;
  plStackX_8 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  (*pcVar2)(puVar1,&plStackX_8);
  CoreEngine_SystemInitializer(*(uint64_t *)(param_1 + 0x140));
  (**(code **)(*plVar3 + 0x38))(plVar3);
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1801717e0(int64_t param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  code *pcVar2;
  int64_t *plVar3;
  int64_t *aplStackX_8 [2];
  int64_t **pplStackX_18;
  int64_t *plStackX_20;
  
  if (*(int64_t *)(param_1 + 8) == 0) {
    return 0;
  }
  plVar3 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x48,8,3,0xfffffffffffffffe);
  *plVar3 = (int64_t)&system_handler1_ptr;
  *plVar3 = (int64_t)&system_handler2_ptr;
  *(int32_t *)(plVar3 + 1) = 0;
  *plVar3 = (int64_t)&ui_system_data_1000_ptr;
  LOCK();
  *(int8_t *)(plVar3 + 2) = 0;
  UNLOCK();
  plVar3[3] = -1;
  *plVar3 = (int64_t)&rendering_buffer_2640_ptr;
  *(int32_t *)(plVar3 + 5) = 1;
  plVar3[4] = param_1;
  pplStackX_18 = (int64_t **)plVar3;
  plStackX_20 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  puVar1 = *(uint64_t **)(param_1 + 0x140);
  pcVar2 = *(code **)*puVar1;
  pplStackX_18 = aplStackX_8;
  aplStackX_8[0] = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  (*pcVar2)(puVar1,aplStackX_8);
  CoreEngine_SystemInitializer(*(uint64_t *)(param_1 + 0x140));
  SystemCore_ConfigurationHandler0(param_2,param_1 + 0x148);
  (**(code **)(*plVar3 + 0x38))(plVar3);
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801718f0(int64_t param_1)
void FUN_1801718f0(int64_t param_1)

{
  uint64_t *puVar1;
  code *pcVar2;
  int64_t *plVar3;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t *plStackX_18;
  
  plVar3 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x48,8,3,0xfffffffffffffffe);
  *plVar3 = (int64_t)&system_handler1_ptr;
  *plVar3 = (int64_t)&system_handler2_ptr;
  *(int32_t *)(plVar3 + 1) = 0;
  *plVar3 = (int64_t)&ui_system_data_1000_ptr;
  LOCK();
  *(int8_t *)(plVar3 + 2) = 0;
  UNLOCK();
  plVar3[3] = -1;
  *plVar3 = (int64_t)&rendering_buffer_2640_ptr;
  *(int32_t *)(plVar3 + 5) = 2;
  plVar3[4] = param_1;
  pplStackX_10 = (int64_t **)plVar3;
  plStackX_18 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  puVar1 = *(uint64_t **)(param_1 + 0x140);
  pcVar2 = *(code **)*puVar1;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  (*pcVar2)(puVar1,&plStackX_8);
  CoreEngine_SystemInitializer(*(uint64_t *)(param_1 + 0x140));
                    // WARNING: Could not recover jumptable at 0x0001801719ca. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar3 + 0x38))(plVar3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801719d0(int64_t param_1)
void FUN_1801719d0(int64_t param_1)

{
  uint64_t *puVar1;
  code *pcVar2;
  int64_t *plVar3;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t *plStackX_18;
  
  plVar3 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x48,8,3,0xfffffffffffffffe);
  *plVar3 = (int64_t)&system_handler1_ptr;
  *plVar3 = (int64_t)&system_handler2_ptr;
  *(int32_t *)(plVar3 + 1) = 0;
  *plVar3 = (int64_t)&ui_system_data_1000_ptr;
  LOCK();
  *(int8_t *)(plVar3 + 2) = 0;
  UNLOCK();
  plVar3[3] = -1;
  *plVar3 = (int64_t)&rendering_buffer_2640_ptr;
  *(int32_t *)(plVar3 + 5) = 3;
  plVar3[4] = param_1;
  pplStackX_10 = (int64_t **)plVar3;
  plStackX_18 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  puVar1 = *(uint64_t **)(param_1 + 0x140);
  pcVar2 = *(code **)*puVar1;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  (*pcVar2)(puVar1,&plStackX_8);
  CoreEngine_SystemInitializer(*(uint64_t *)(param_1 + 0x140));
                    // WARNING: Could not recover jumptable at 0x000180171aaa. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar3 + 0x38))(plVar3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180171ab0(int64_t param_1)
void FUN_180171ab0(int64_t param_1)

{
  uint64_t *puVar1;
  code *pcVar2;
  int64_t *plVar3;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t *plStackX_18;
  
  plVar3 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x48,8,3,0xfffffffffffffffe);
  *plVar3 = (int64_t)&system_handler1_ptr;
  *plVar3 = (int64_t)&system_handler2_ptr;
  *(int32_t *)(plVar3 + 1) = 0;
  *plVar3 = (int64_t)&ui_system_data_1000_ptr;
  LOCK();
  *(int8_t *)(plVar3 + 2) = 0;
  UNLOCK();
  plVar3[3] = -1;
  *plVar3 = (int64_t)&rendering_buffer_2640_ptr;
  *(int32_t *)(plVar3 + 5) = 4;
  plVar3[4] = param_1;
  pplStackX_10 = (int64_t **)plVar3;
  plStackX_18 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  puVar1 = *(uint64_t **)(param_1 + 0x140);
  pcVar2 = *(code **)*puVar1;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  (*pcVar2)(puVar1,&plStackX_8);
  CoreEngine_SystemInitializer(*(uint64_t *)(param_1 + 0x140));
                    // WARNING: Could not recover jumptable at 0x000180171b8a. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar3 + 0x38))(plVar3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180171c80(int64_t param_1,int64_t param_2)
void FUN_180171c80(int64_t param_1,int64_t param_2)

{
  uint64_t *puVar1;
  code *pcVar2;
  int64_t *plVar3;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t *plStackX_18;
  
  plVar3 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x48,8,3,0xfffffffffffffffe);
  *plVar3 = (int64_t)&system_handler1_ptr;
  *plVar3 = (int64_t)&system_handler2_ptr;
  *(int32_t *)(plVar3 + 1) = 0;
  *plVar3 = (int64_t)&ui_system_data_1000_ptr;
  LOCK();
  *(int8_t *)(plVar3 + 2) = 0;
  UNLOCK();
  plVar3[3] = -1;
  *plVar3 = (int64_t)&rendering_buffer_2640_ptr;
  *(int32_t *)(plVar3 + 5) = 5;
  plVar3[4] = param_1;
  pplStackX_10 = (int64_t **)plVar3;
  plStackX_18 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3[6] = param_2;
  puVar1 = *(uint64_t **)(param_1 + 0x140);
  pcVar2 = *(code **)*puVar1;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  (*pcVar2)(puVar1,&plStackX_8);
                    // WARNING: Could not recover jumptable at 0x000180171d4b. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar3 + 0x38))(plVar3);
  return;
}



uint64_t * FUN_180171d50(int64_t param_1,uint64_t *param_2,int param_3)

{
  int32_t *puVar1;
  uint uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x13c);
  uVar3 = 0;
  uVar4 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  uVar7 = (uint64_t)(uVar2 & 1);
  if (param_3 == 0) {
    puVar1 = (int32_t *)(param_1 + 0xcc + uVar7 * 0x48);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
  }
  else {
    uVar5 = uVar3;
    uVar6 = uVar4;
    if (param_3 == 1) {
      puVar1 = (int32_t *)(param_1 + 0xdc + uVar7 * 0x48);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
    }
  }
  *(int32_t *)param_2 = uVar3;
  *(int32_t *)(param_2 + 1) = uVar5;
  *(int32_t *)((int64_t)param_2 + 4) = uVar4;
  *(int32_t *)((int64_t)param_2 + 0xc) = uVar6;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180171dd0(int64_t param_1,int32_t param_2,int32_t *param_3)
void FUN_180171dd0(int64_t param_1,int32_t param_2,int32_t *param_3)

{
  uint64_t *puVar1;
  code *pcVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int64_t *plVar6;
  int64_t *plStackX_8;
  
  plVar6 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x48,8,3,0xfffffffffffffffe);
  *plVar6 = (int64_t)&system_handler1_ptr;
  *plVar6 = (int64_t)&system_handler2_ptr;
  *(int32_t *)(plVar6 + 1) = 0;
  *plVar6 = (int64_t)&ui_system_data_1000_ptr;
  LOCK();
  *(int8_t *)(plVar6 + 2) = 0;
  UNLOCK();
  plVar6[3] = -1;
  *plVar6 = (int64_t)&rendering_buffer_2640_ptr;
  *(int32_t *)(plVar6 + 5) = 7;
  plVar6[4] = param_1;
  (**(code **)(*plVar6 + 0x28))(plVar6);
  *(int32_t *)(plVar6 + 6) = param_2;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(int32_t *)((int64_t)plVar6 + 0x34) = *param_3;
  *(int32_t *)(plVar6 + 7) = uVar3;
  *(int32_t *)((int64_t)plVar6 + 0x3c) = uVar4;
  *(int32_t *)(plVar6 + 8) = uVar5;
  puVar1 = *(uint64_t **)(param_1 + 0x140);
  pcVar2 = *(code **)*puVar1;
  plStackX_8 = plVar6;
  (**(code **)(*plVar6 + 0x28))(plVar6);
  (*pcVar2)(puVar1,&plStackX_8);
  CoreEngine_SystemInitializer(*(uint64_t *)(param_1 + 0x140));
                    // WARNING: Could not recover jumptable at 0x000180171eb9. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar6 + 0x38))(plVar6);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * FUN_180171f10(int64_t param_1,int *param_2)

{
  int64_t lVar1;
  uint uVar2;
  int iVar3;
  int64_t lVar4;
  uint uVar5;
  
  lVar1 = *(int64_t *)(param_1 + 0x18);
  iVar3 = (int)((*(int64_t *)(param_1 + 0x20) - lVar1) / 0x70);
  if ((1 < iVar3) && (*(int *)(SYSTEM_STATE_MANAGER + 0x1f10) < iVar3)) {
    lVar4 = (int64_t)*(int *)(SYSTEM_STATE_MANAGER + 0x1f10) * 0x70;
    uVar2 = *(int *)(lVar4 + 0x60 + lVar1) - *(int *)(lVar4 + 0x58 + lVar1);
    uVar5 = (int)uVar2 >> 0x1f;
    *param_2 = (uVar2 ^ uVar5) - uVar5;
    uVar2 = *(int *)(lVar4 + 100 + lVar1) - *(int *)(lVar4 + 0x5c + lVar1);
    uVar5 = (int)uVar2 >> 0x1f;
    param_2[1] = (uVar2 ^ uVar5) - uVar5;
    return param_2;
  }
  iVar3 = GetSystemMetrics(0);
  *param_2 = iVar3;
  iVar3 = GetSystemMetrics(1);
  param_2[1] = iVar3;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180171fb0(int64_t param_1,int32_t *param_2)

{
  uint64_t *puVar1;
  code *pcVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int64_t *plVar6;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t *plStackX_18;
  
  plVar6 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x48,8,3,0xfffffffffffffffe);
  *plVar6 = (int64_t)&system_handler1_ptr;
  *plVar6 = (int64_t)&system_handler2_ptr;
  *(int32_t *)(plVar6 + 1) = 0;
  *plVar6 = (int64_t)&ui_system_data_1000_ptr;
  LOCK();
  *(int8_t *)(plVar6 + 2) = 0;
  UNLOCK();
  plVar6[3] = -1;
  *plVar6 = (int64_t)&rendering_buffer_2640_ptr;
  *(int32_t *)(plVar6 + 5) = 8;
  plVar6[4] = param_1;
  pplStackX_10 = (int64_t **)plVar6;
  plStackX_18 = plVar6;
  (**(code **)(*plVar6 + 0x28))(plVar6);
  if (param_2 == (int32_t *)0x0) {
    *(int8_t *)(plVar6 + 6) = 0;
  }
  else {
    *(int8_t *)(plVar6 + 6) = 1;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *(int32_t *)((int64_t)plVar6 + 0x34) = *param_2;
    *(int32_t *)(plVar6 + 7) = uVar3;
    *(int32_t *)((int64_t)plVar6 + 0x3c) = uVar4;
    *(int32_t *)(plVar6 + 8) = uVar5;
  }
  puVar1 = *(uint64_t **)(param_1 + 0x140);
  pcVar2 = *(code **)*puVar1;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = plVar6;
  (**(code **)(*plVar6 + 0x28))(plVar6);
  (*pcVar2)(puVar1,&plStackX_8);
  (**(code **)(*plVar6 + 0x38))(plVar6);
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t FUN_1801720a0(int64_t param_1,int32_t param_2)

{
  int8_t uVar1;
  int iVar2;
  uint64_t *puVar3;
  code *pcVar4;
  int iVar5;
  int64_t *plVar6;
  uint64_t uStackX_8;
  int64_t *plStackX_18;
  uint64_t uStackX_20;
  uint64_t uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  iVar2 = *(int *)(*(int64_t *)(param_1 + 0x140) + 0x48);
  iVar5 = _Thrd_id();
  if (iVar5 != iVar2) {
    plVar6 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x48,8,3,uVar7);
    *plVar6 = (int64_t)&system_handler1_ptr;
    *plVar6 = (int64_t)&system_handler2_ptr;
    *(int32_t *)(plVar6 + 1) = 0;
    *plVar6 = (int64_t)&ui_system_data_1000_ptr;
    LOCK();
    *(int8_t *)(plVar6 + 2) = 0;
    UNLOCK();
    plVar6[3] = -1;
    *plVar6 = (int64_t)&rendering_buffer_2640_ptr;
    *(int32_t *)(plVar6 + 5) = 9;
    plVar6[4] = param_1;
    (**(code **)(*plVar6 + 0x28))(plVar6);
    *(int32_t *)(plVar6 + 6) = param_2;
    puVar3 = *(uint64_t **)(param_1 + 0x140);
    pcVar4 = *(code **)*puVar3;
    uStackX_8 = &plStackX_18;
    plStackX_18 = plVar6;
    (**(code **)(*plVar6 + 0x28))(plVar6);
    (*pcVar4)(puVar3,&plStackX_18);
    uVar1 = *(int8_t *)(param_1 + 0x168);
    (**(code **)(*plVar6 + 0x38))(plVar6);
    return uVar1;
  }
  GetCursorPos(&uStackX_20);
  uStackX_8 = (int64_t **)uStackX_20;
  ScreenToClient(*(uint64_t *)(param_1 + 8),&uStackX_8);
  if ((-1 < (int)uStackX_8) && ((float)(int)uStackX_8 < *(float *)(system_operation_state + 0x17ec))) {
    if ((-1 < (int64_t)uStackX_8) && ((float)uStackX_8._4_4_ < *(float *)(system_operation_state + 0x17f0))
       ) {
      switch(param_2) {
      case 0:
        SetCursor(*(uint64_t *)(param_1 + 0x88));
        return 1;
      case 1:
        SetCursor(*(uint64_t *)(param_1 + 0x40));
        return 1;
      case 2:
        SetCursor(*(uint64_t *)(param_1 + 0x50));
        return 1;
      case 3:
        SetCursor(*(uint64_t *)(param_1 + 0x58));
        return 1;
      case 4:
        SetCursor(*(uint64_t *)(param_1 + 0x60));
        return 1;
      case 5:
        SetCursor(*(uint64_t *)(param_1 + 0x68));
        return 1;
      case 6:
        SetCursor(*(uint64_t *)(param_1 + 0x70));
        return 1;
      case 7:
        SetCursor(*(uint64_t *)(param_1 + 0x78));
        return 1;
      case 8:
        SetCursor(*(uint64_t *)(param_1 + 0x80));
        return 1;
      case 9:
        SetCursor(*(uint64_t *)(param_1 + 0x90));
        return 1;
      case 10:
        SetCursor(*(uint64_t *)(param_1 + 0x98));
        return 1;
      case 0xb:
        SetCursor(*(uint64_t *)(param_1 + 0x48));
      }
      return 1;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801723a0(int64_t param_1,char param_2,int32_t param_3)
void FUN_1801723a0(int64_t param_1,char param_2,int32_t param_3)

{
  uint64_t *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t *plStackX_8;
  uint64_t uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  iVar4 = *(int *)(*(int64_t *)(param_1 + 0x140) + 0x48);
  iVar3 = _Thrd_id();
  if (iVar3 == iVar4) {
    if (param_2 == '\0') {
      do {
        iVar4 = ShowCursor(0);
      } while (-1 < iVar4);
    }
    else {
      if (**(char **)(core_system_data_memory + 0x2010) != '\0') {
        **(char **)(core_system_data_memory + 0x2010) = '\0';
      }
      FUN_1801720a0(param_1,param_3);
      do {
        iVar4 = ShowCursor(1);
      } while (iVar4 < 0);
    }
  }
  else {
    plVar5 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x48,8,3,uVar6);
    *plVar5 = (int64_t)&system_handler1_ptr;
    *plVar5 = (int64_t)&system_handler2_ptr;
    *(int32_t *)(plVar5 + 1) = 0;
    *plVar5 = (int64_t)&ui_system_data_1000_ptr;
    LOCK();
    *(int8_t *)(plVar5 + 2) = 0;
    UNLOCK();
    plVar5[3] = -1;
    *plVar5 = (int64_t)&rendering_buffer_2640_ptr;
    *(int32_t *)(plVar5 + 5) = 10;
    plVar5[4] = param_1;
    (**(code **)(*plVar5 + 0x28))(plVar5);
    *(char *)(plVar5 + 6) = param_2;
    *(int32_t *)((int64_t)plVar5 + 0x34) = param_3;
    puVar1 = *(uint64_t **)(param_1 + 0x140);
    pcVar2 = *(code **)*puVar1;
    plStackX_8 = plVar5;
    (**(code **)(*plVar5 + 0x28))(plVar5);
    (*pcVar2)(puVar1,&plStackX_8);
    (**(code **)(*plVar5 + 0x38))(plVar5);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801724f0(int64_t param_1,int32_t param_2,int64_t param_3)
void FUN_1801724f0(int64_t param_1,int32_t param_2,int64_t param_3)

{
  uint64_t *puVar1;
  code *pcVar2;
  int64_t *plVar3;
  int64_t *plStackX_8;
  
  plVar3 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x48,8,3,0xfffffffffffffffe);
  *plVar3 = (int64_t)&system_handler1_ptr;
  *plVar3 = (int64_t)&system_handler2_ptr;
  *(int32_t *)(plVar3 + 1) = 0;
  *plVar3 = (int64_t)&ui_system_data_1000_ptr;
  LOCK();
  *(int8_t *)(plVar3 + 2) = 0;
  UNLOCK();
  plVar3[3] = -1;
  *plVar3 = (int64_t)&rendering_buffer_2640_ptr;
  *(int32_t *)(plVar3 + 5) = 0xb;
  plVar3[4] = param_1;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  *(int32_t *)(plVar3 + 6) = param_2;
  plVar3[7] = param_3;
  puVar1 = *(uint64_t **)(param_1 + 0x140);
  pcVar2 = *(code **)*puVar1;
  plStackX_8 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  (*pcVar2)(puVar1,&plStackX_8);
  CoreEngine_SystemInitializer(*(uint64_t *)(param_1 + 0x140));
                    // WARNING: Could not recover jumptable at 0x0001801725d6. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar3 + 0x38))(plVar3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801725e0(int64_t param_1,int32_t param_2,int32_t param_3,int8_t param_4)
void FUN_1801725e0(int64_t param_1,int32_t param_2,int32_t param_3,int8_t param_4)

{
  uint64_t *puVar1;
  code *pcVar2;
  int64_t *plVar3;
  int64_t *plStackX_8;
  
  plVar3 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x48,8,3,0xfffffffffffffffe);
  *plVar3 = (int64_t)&system_handler1_ptr;
  *plVar3 = (int64_t)&system_handler2_ptr;
  *(int32_t *)(plVar3 + 1) = 0;
  *plVar3 = (int64_t)&ui_system_data_1000_ptr;
  LOCK();
  *(int8_t *)(plVar3 + 2) = 0;
  UNLOCK();
  plVar3[3] = -1;
  *plVar3 = (int64_t)&rendering_buffer_2640_ptr;
  *(int32_t *)(plVar3 + 5) = 0xc;
  plVar3[4] = param_1;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  *(int32_t *)(plVar3 + 6) = param_2;
  *(int32_t *)((int64_t)plVar3 + 0x34) = param_3;
  *(int8_t *)(plVar3 + 7) = param_4;
  puVar1 = *(uint64_t **)(param_1 + 0x140);
  pcVar2 = *(code **)*puVar1;
  plStackX_8 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  (*pcVar2)(puVar1,&plStackX_8);
  CoreEngine_SystemInitializer(*(uint64_t *)(param_1 + 0x140));
                    // WARNING: Could not recover jumptable at 0x0001801726de. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar3 + 0x38))(plVar3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801726f0(int64_t param_1,uint64_t param_2)
void FUN_1801726f0(int64_t param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  code *pcVar2;
  int64_t *plVar3;
  int64_t *aplStackX_8 [2];
  int64_t **pplStackX_18;
  int64_t *plStackX_20;
  
  plVar3 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x48,8,3,0xfffffffffffffffe);
  *plVar3 = (int64_t)&system_handler1_ptr;
  *plVar3 = (int64_t)&system_handler2_ptr;
  *(int32_t *)(plVar3 + 1) = 0;
  *plVar3 = (int64_t)&ui_system_data_1000_ptr;
  LOCK();
  *(int8_t *)(plVar3 + 2) = 0;
  UNLOCK();
  plVar3[3] = -1;
  *plVar3 = (int64_t)&rendering_buffer_2640_ptr;
  *(int32_t *)(plVar3 + 5) = 0xd;
  plVar3[4] = param_1;
  pplStackX_18 = (int64_t **)plVar3;
  plStackX_20 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  SystemCore_ConfigurationHandler0(param_1 + 0x148,param_2);
  puVar1 = *(uint64_t **)(param_1 + 0x140);
  pcVar2 = *(code **)*puVar1;
  pplStackX_18 = aplStackX_8;
  aplStackX_8[0] = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  (*pcVar2)(puVar1,aplStackX_8);
                    // WARNING: Could not recover jumptable at 0x0001801727c6. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar3 + 0x38))(plVar3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



