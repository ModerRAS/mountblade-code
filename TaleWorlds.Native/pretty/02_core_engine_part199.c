#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// $fun 的语义化别名
#define $alias_name $fun
// 02_core_engine_part199.c - 2 个函数
// 函数: void function_17dd60(uint64_t param_1,uint64_t param_2)
void function_17dd60(uint64_t param_1,uint64_t param_2)
{
  int64_t *plVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  int32_t *puVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  void *plocal_var_80;
  int32_t *plocal_var_78;
  int32_t local_var_70;
  uint64_t local_var_68;
  puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x98,8,3);
  uVar6 = 0xfffffffffffffffe;
  puVar5 = puVar3;
  SystemCore_SyncController(puVar3,param_2,param_1);
  *puVar5 = &rendering_buffer_2008_ptr;
  plVar1 = puVar5 + 0xf;
  *plVar1 = (int64_t)&system_state_ptr;
  puVar5[0x10] = 0;
  *(int32_t *)(puVar5 + 0x11) = 0;
  *plVar1 = (int64_t)&system_data_buffer_ptr;
  puVar5[0x12] = 0;
  puVar5[0x10] = 0;
  *(int32_t *)(puVar5 + 0x11) = 0;
  *(int8_t *)(puVar5 + 0xe) = 0;
  (**(code **)(*plVar1 + 0x10))(plVar1,&system_data_e968);
  plocal_var_80 = &system_data_buffer_ptr;
  local_var_68 = 0;
  plocal_var_78 = (int32_t *)0x0;
  local_var_70 = 0;
  puVar4 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x1f,0x13);
  *(int8_t *)puVar4 = 0;
  plocal_var_78 = puVar4;
  uVar2 = CoreEngineSystemCleanup(puVar4);
  local_var_68 = CONCAT44(local_var_68._4_4_,uVar2);
  *puVar4 = 0x74726150;
  puVar4[1] = 0x206c6169;
  puVar4[2] = 0x656b6142;
  puVar4[3] = 0x726f4620;
  *(uint64_t *)(puVar4 + 4) = 0x746e657272754320;
  puVar4[6] = 0x76654c20;
  *(int16_t *)(puVar4 + 7) = 0x6c65;
  *(int8_t *)((int64_t)puVar4 + 0x1e) = 0;
  local_var_70 = 0x1e;
  SystemNetwork_Processor(puVar3,&plocal_var_80,puVar3 + 0xe,0xb,uVar6);
  plocal_var_80 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar4);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_17ee80(int64_t *param_1)
void function_17ee80(int64_t *param_1)
{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plStackX_8;
  lVar2 = system_main_module_state;
  plStackX_8 = param_1;
  plVar3 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,200,8,3,0xfffffffffffffffe);
  plStackX_8 = plVar3;
  UltraHighFreq_PerformanceMonitor1(plVar3);
  *plVar3 = (int64_t)&processed_var_7960_ptr;
  plVar3[0x18] = lVar2 + 0x38;
  plVar3[3] = -3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar1 = system_context_ptr;
  plStackX_8 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  SystemCore_TimerManager(uVar1,&plStackX_8);
// WARNING: Could not recover jumptable at 0x00018017ef34. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*plVar3 + 0x38))(plVar3);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address