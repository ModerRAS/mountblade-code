// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: MathOptimizationEngine */
#define MathOptimizationEngine MathOptimizationEngine
// 02_core_engine_part198.c - 14 个函数
// 函数: void function_17c830(uint64_t param_1,uint64_t param_2)
void function_17c830(uint64_t param_1,uint64_t param_2)
{
  uint64_t *puVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  void *plocal_var_a0;
  uint64_t *plocal_var_98;
  int32_t local_var_90;
  uint64_t local_var_88;
  puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xa8,8,3);
  uVar5 = 0xfffffffffffffffe;
  puVar4 = puVar3;
  SystemCore_SyncController(puVar3,param_2,param_1);
  *puVar4 = &processed_var_6912_ptr;
  puVar1 = puVar4 + 0xe;
  *puVar1 = &system_state_ptr;
  puVar4[0xf] = 0;
  *(int32_t *)(puVar4 + 0x10) = 0;
  *puVar1 = &system_data_buffer_ptr;
  puVar4[0x11] = 0;
  puVar4[0xf] = 0;
  *(int32_t *)(puVar4 + 0x10) = 0;
  plocal_var_a0 = &system_data_buffer_ptr;
  local_var_88 = 0;
  plocal_var_98 = (uint64_t *)0x0;
  local_var_90 = 0;
  puVar4 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar4 = 0;
  plocal_var_98 = puVar4;
  uVar2 = CoreEngineSystemCleanup(puVar4);
  local_var_88 = CONCAT44(local_var_88._4_4_,uVar2);
  *puVar4 = 0x6d614e2068746150;
  *(int16_t *)(puVar4 + 1) = 0x65;
  local_var_90 = 9;
  SystemNetwork_Processor(puVar3,&plocal_var_a0,puVar1,0,uVar5);
  plocal_var_a0 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar4);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_17c880(uint64_t param_1,uint64_t param_2)
void function_17c880(uint64_t param_1,uint64_t param_2)
{
  int64_t *plVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  void *plocal_var_48;
  uint64_t *plocal_var_40;
  int32_t local_var_38;
  uint64_t local_var_30;
  uVar5 = 0xfffffffffffffffe;
  puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x178,8,3,0xfffffffffffffffe);
  function_3624e0(puVar3,param_2,param_1);
  *puVar3 = &processed_var_7280_ptr;
  plVar1 = puVar3 + 0x2a;
  *plVar1 = (int64_t)&system_state_ptr;
  puVar3[0x2b] = 0;
  *(int32_t *)(puVar3 + 0x2c) = 0;
  *plVar1 = (int64_t)&system_data_buffer_ptr;
  puVar3[0x2d] = 0;
  puVar3[0x2b] = 0;
  *(int32_t *)(puVar3 + 0x2c) = 0;
  puVar3[0x2e] = 0;
  plVar6 = plVar1;
  (**(code **)(*plVar1 + 0x10))(plVar1,&system_buffer_ptr);
  plocal_var_48 = &system_data_buffer_ptr;
  local_var_30 = 0;
  plocal_var_40 = (uint64_t *)0x0;
  local_var_38 = 0;
  puVar4 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar4 = 0;
  plocal_var_40 = puVar4;
  uVar2 = CoreEngineSystemCleanup(puVar4);
  local_var_30 = CONCAT44(local_var_30._4_4_,uVar2);
  *puVar4 = 0x6d614e2068746150;
  *(int16_t *)(puVar4 + 1) = 0x65;
  local_var_38 = 9;
  SystemNetwork_Processor(puVar3,&plocal_var_48,plVar1,0,uVar5,plVar6);
  plocal_var_48 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar4);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_17ca10(uint64_t param_1,uint64_t param_2)
void function_17ca10(uint64_t param_1,uint64_t param_2)
{
  int32_t uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  void *plocal_var_b8;
  uint64_t *plocal_var_b0;
  int32_t local_var_a8;
  uint64_t local_var_a0;
  uint64_t local_var_38;
  uint64_t local_var_30;
  local_var_30 = 0x18017ca3a;
  puVar2 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x180,8,3);
  local_var_38 = 0xfffffffffffffffe;
  puVar3 = puVar2;
  SystemCore_SyncController(puVar2,param_2,param_1);
  *puVar3 = &processed_var_7952_ptr;
  DataStructureManager(puVar3 + 0xe,0x20,4,function_627850,SystemValidator);
  DataStructureManager(puVar2 + 0x1e,0x20,4,function_627850,SystemValidator);
  puVar2[0x2f] = 0;
  plocal_var_b8 = &system_data_buffer_ptr;
  local_var_a0 = 0;
  plocal_var_b0 = (uint64_t *)0x0;
  local_var_a8 = 0;
  puVar3 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  plocal_var_b0 = puVar3;
  uVar1 = CoreEngineSystemCleanup(puVar3);
  local_var_a0 = CONCAT44(local_var_a0._4_4_,uVar1);
  *puVar3 = 0x614d72656d6d7553;
  *(int32_t *)(puVar3 + 1) = 0x69726574;
  *(int16_t *)((int64_t)puVar3 + 0xc) = 0x6c61;
  *(int8_t *)((int64_t)puVar3 + 0xe) = 0;
  local_var_a8 = 0xe;
  SystemNetwork_Processor(puVar2,&plocal_var_b8,puVar2 + 0xe,0);
  plocal_var_b8 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar3);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_17ca60(uint64_t param_1,uint64_t param_2)
void function_17ca60(uint64_t param_1,uint64_t param_2)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int32_t uVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  void *plocal_var_128;
  uint64_t *plocal_var_120;
  int32_t local_var_118;
  uint64_t local_var_110;
  uint64_t local_var_48;
  puVar5 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x130,8,3);
  local_var_48 = 0xfffffffffffffffe;
  puVar6 = puVar5;
  SystemCore_SyncController(puVar5,param_2,param_1);
  *puVar6 = &processed_var_8496_ptr;
  plVar1 = puVar6 + 0xe;
  *plVar1 = (int64_t)&system_state_ptr;
  puVar6[0xf] = 0;
  *(int32_t *)(puVar6 + 0x10) = 0;
  *plVar1 = (int64_t)&system_data_buffer_ptr;
  puVar6[0x11] = 0;
  puVar6[0xf] = 0;
  *(int32_t *)(puVar6 + 0x10) = 0;
  plVar2 = puVar5 + 0x12;
  *plVar2 = (int64_t)&system_state_ptr;
  puVar5[0x13] = 0;
  *(int32_t *)(puVar5 + 0x14) = 0;
  *plVar2 = (int64_t)&system_data_buffer_ptr;
  puVar5[0x15] = 0;
  puVar5[0x13] = 0;
  *(int32_t *)(puVar5 + 0x14) = 0;
  plVar3 = puVar5 + 0x16;
  *plVar3 = (int64_t)&system_state_ptr;
  puVar5[0x17] = 0;
  *(int32_t *)(puVar5 + 0x18) = 0;
  *plVar3 = (int64_t)&system_data_buffer_ptr;
  puVar5[0x19] = 0;
  puVar5[0x17] = 0;
  *(int32_t *)(puVar5 + 0x18) = 0;
  puVar5[0x1a] = &system_state_ptr;
  puVar5[0x1b] = 0;
  *(int32_t *)(puVar5 + 0x1c) = 0;
  puVar5[0x1a] = &system_data_buffer_ptr;
  puVar5[0x1d] = 0;
  puVar5[0x1b] = 0;
  *(int32_t *)(puVar5 + 0x1c) = 0;
  (**(code **)(*plVar1 + 0x10))(plVar1,&system_buffer_ptr);
  (**(code **)(*plVar2 + 0x10))(plVar2,&system_buffer_ptr);
  (**(code **)(*plVar3 + 0x10))(plVar3,&system_buffer_ptr);
  puVar5[0x1e] = 0x3ff0000000000000;
  puVar5[0x1f] = 0;
  puVar5[0x20] = 0;
  *(int8_t *)(puVar5 + 0x22) = 0;
  plocal_var_128 = &system_data_buffer_ptr;
  local_var_110 = 0;
  plocal_var_120 = (uint64_t *)0x0;
  local_var_118 = 0;
  puVar6 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar6 = 0;
  plocal_var_120 = puVar6;
  uVar4 = CoreEngineSystemCleanup(puVar6);
  local_var_110 = CONCAT44(local_var_110._4_4_,uVar4);
  *puVar6 = 0x6e6f74656c656b53;
  *(int32_t *)(puVar6 + 1) = 0x6d614e20;
  *(int16_t *)((int64_t)puVar6 + 0xc) = 0x65;
  local_var_118 = 0xd;
  SystemNetwork_Processor(puVar5,&plocal_var_128,plVar1,0);
  plocal_var_128 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar6);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * function_17cac0(uint64_t param_1,uint64_t param_2)
{
  uint64_t *puVar1;
  puVar1 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x70,8,3,0xfffffffffffffffe);
  SystemCore_SyncController(puVar1,param_2,param_1);
  *puVar1 = &processed_var_7592_ptr;
  return puVar1;
}
uint64_t *
function_17cb20(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &processed_var_7592_ptr;
  UIComponent_Manager();
  if ((param_2 & 1) != 0) {
    free(param_1,0x70,param_3,param_4,uVar1);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_17cb70(uint64_t param_1,uint64_t param_2)
void function_17cb70(uint64_t param_1,uint64_t param_2)
{
  int32_t uVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  uint64_t *puVar4;
  void *plocal_var_40;
  int32_t *plocal_var_38;
  int32_t local_var_30;
  uint64_t local_var_28;
  puVar2 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xa8,8,3,0xfffffffffffffffe);
  puVar4 = puVar2;
  SystemCore_SyncController(puVar2,param_2,param_1);
  *puVar4 = &processed_var_7224_ptr;
  *(int32_t *)(puVar4 + 0x14) = 0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0;
  *(int8_t *)((int64_t)puVar4 + 0xa4) = 0;
  plocal_var_40 = &system_data_buffer_ptr;
  local_var_28 = 0;
  plocal_var_38 = (int32_t *)0x0;
  local_var_30 = 0;
  puVar3 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  plocal_var_38 = puVar3;
  uVar1 = CoreEngineSystemCleanup(puVar3);
  local_var_28 = CONCAT44(local_var_28._4_4_,uVar1);
  *puVar3 = 0x776f6853;
  *(int8_t *)(puVar3 + 1) = 0;
  local_var_30 = 4;
  SystemNetwork_Processor(puVar2,&plocal_var_40,(int64_t)puVar2 + 0xa4,3);
  plocal_var_40 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar3);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_17ccd0(uint64_t param_1)
void function_17ccd0(uint64_t param_1)
{
  int8_t stack_array_118 [32];
  int32_t local_var_f8;
  uint64_t local_var_f0;
  void **applocal_var_e8 [2];
  void *plocal_var_d8;
  int8_t *plocal_var_d0;
  int32_t local_var_c8;
  int8_t stack_array_c0 [72];
  void *aplocal_var_78 [11];
  int32_t local_var_20;
  uint64_t local_var_18;
  local_var_f0 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_118;
  local_var_f8 = 0;
  plocal_var_d8 = &memory_allocator_3480_ptr;
  plocal_var_d0 = stack_array_c0;
  stack_array_c0[0] = 0;
  local_var_c8 = 4;
  strcpy_s(stack_array_c0,0x40,&system_data_9828);
  SystemCommunicationProcessor(aplocal_var_78,&plocal_var_d8);
  local_var_20 = 3;
  local_var_f8 = 1;
  MathOptimizationEngine0(param_1,applocal_var_e8,aplocal_var_78);
  local_var_f8 = 0;
  applocal_var_e8[0] = aplocal_var_78;
  aplocal_var_78[0] = &system_state_ptr;
  plocal_var_d8 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_118);
}
uint64_t *
function_17cde0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &processed_var_7224_ptr;
  UIComponent_Manager();
  if ((param_2 & 1) != 0) {
    free(param_1,0xa8,param_3,param_4,uVar1);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_17ce30(uint64_t param_1,uint64_t param_2)
void function_17ce30(uint64_t param_1,uint64_t param_2)
{
  int64_t *plVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  void *plocal_var_208;
  uint64_t *plocal_var_200;
  int32_t local_var_1f8;
  uint64_t local_var_1f0;
  uint64_t local_var_48;
  puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x230,0x10,3);
  local_var_48 = 0xfffffffffffffffe;
  puVar4 = puVar3;
  SystemCore_SyncController(puVar3,param_2,param_1);
  *puVar4 = &memory_allocator_3352_ptr;
  function_094c20(puVar4 + 0xe);
  puVar3[0x36] = 0;
  puVar3[0x43] = 0;
  puVar3[0x44] = 0;
  plVar1 = (int64_t *)puVar3[0x36];
  puVar3[0x36] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  puVar3[0x37] = 0x404e000000000000;
  *(int32_t *)(puVar3 + 0x38) = 0x100;
  *(int32_t *)(puVar3 + 0x39) = 0x100;
  *(int32_t *)((int64_t)puVar3 + 0x1c4) = 0x100;
  puVar3[0x3a] = 0x3f847ae147ae147b;
  puVar3[0x3b] = 0x408f400000000000;
  puVar3[0x3f] = 0;
  puVar3[0x40] = 0;
  puVar3[0x41] = 0;
  *(int16_t *)(puVar3 + 0x42) = 0;
  *(int32_t *)(puVar3 + 0x3c) = 0x3f800000;
  *(int32_t *)((int64_t)puVar3 + 0x1e4) = 0;
  *(int32_t *)(puVar3 + 0x3d) = 0x3f800000;
  *(int32_t *)((int64_t)puVar3 + 0x1ec) = 0x3f800000;
  *(int8_t *)(puVar3 + 0x3e) = 0;
  plocal_var_208 = &system_data_buffer_ptr;
  local_var_1f0 = 0;
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f8 = 0;
  puVar4 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar4 = 0;
  plocal_var_200 = puVar4;
  uVar2 = CoreEngineSystemCleanup(puVar4);
  local_var_1f0 = CONCAT44(local_var_1f0._4_4_,uVar2);
  *puVar4 = 0x7267654428564f46;
  *(int32_t *)(puVar4 + 1) = 0x29736565;
  *(int8_t *)((int64_t)puVar4 + 0xc) = 0;
  local_var_1f8 = 0xc;
  SystemNetwork_Processor(puVar3,&plocal_var_208,puVar3 + 0x37,1);
  plocal_var_208 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar4);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_17ce80(uint64_t param_1)
void function_17ce80(uint64_t param_1)
{
  int8_t stack_array_608 [32];
  int32_t local_var_5e8;
  void **applocal_var_5e0 [2];
  uint64_t local_var_5d0;
  void *aplocal_var_5c8 [11];
  int32_t local_var_570;
  void *plocal_var_568;
  int8_t *plocal_var_560;
  int32_t local_var_558;
  int8_t stack_array_550 [72];
  void *plocal_var_508;
  int8_t *plocal_var_500;
  int32_t local_var_4f8;
  int8_t stack_array_4f0 [72];
  void *plocal_var_4a8;
  int8_t *plocal_var_4a0;
  int32_t local_var_498;
  int8_t stack_array_490 [72];
  void *plocal_var_448;
  int8_t *plocal_var_440;
  int32_t local_var_438;
  int8_t stack_array_430 [72];
  void *plocal_var_3e8;
  int8_t *plocal_var_3e0;
  int32_t local_var_3d8;
  int8_t stack_array_3d0 [72];
  void *plocal_var_388;
  int8_t *plocal_var_380;
  int32_t local_var_378;
  int8_t stack_array_370 [72];
  void *plocal_var_328;
  int8_t *plocal_var_320;
  int32_t local_var_318;
  int8_t stack_array_310 [72];
  void *plocal_var_2c8;
  int8_t *plocal_var_2c0;
  int32_t local_var_2b8;
  int8_t stack_array_2b0 [72];
  void *plocal_var_268;
  int8_t *plocal_var_260;
  int32_t local_var_258;
  int8_t stack_array_250 [72];
  void *plocal_var_208;
  int8_t *plocal_var_200;
  int32_t local_var_1f8;
  int8_t stack_array_1f0 [72];
  void *plocal_var_1a8;
  int8_t *plocal_var_1a0;
  int32_t local_var_198;
  int8_t stack_array_190 [72];
  void *plocal_var_148;
  int8_t *plocal_var_140;
  int32_t local_var_138;
  int8_t stack_array_130 [72];
  void *plocal_var_e8;
  int8_t *plocal_var_e0;
  int32_t local_var_d8;
  int8_t stack_array_d0 [72];
  void *plocal_var_88;
  int8_t *plocal_var_80;
  int32_t local_var_78;
  int8_t stack_array_70 [72];
  uint64_t local_var_28;
  local_var_5d0 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_608;
  local_var_5e8 = 0;
  plocal_var_568 = &memory_allocator_3480_ptr;
  plocal_var_560 = stack_array_550;
  stack_array_550[0] = 0;
  local_var_558 = 0xc;
  strcpy_s(stack_array_550,0x40,&system_data_9848);
  SystemCommunicationProcessor(aplocal_var_5c8,&plocal_var_568);
  local_var_570 = 1;
  local_var_5e8 = 1;
  MathOptimizationEngine0(param_1,applocal_var_5e0,aplocal_var_5c8);
  local_var_5e8 = 0;
  applocal_var_5e0[0] = aplocal_var_5c8;
  aplocal_var_5c8[0] = &system_state_ptr;
  plocal_var_568 = &system_state_ptr;
  plocal_var_508 = &memory_allocator_3480_ptr;
  plocal_var_500 = stack_array_4f0;
  stack_array_4f0[0] = 0;
  local_var_4f8 = 5;
  strcpy_s(stack_array_4f0,0x40,&system_data_9e30);
  SystemCommunicationProcessor(aplocal_var_5c8,&plocal_var_508);
  local_var_570 = 4;
  local_var_5e8 = 2;
  MathOptimizationEngine0(param_1,applocal_var_5e0,aplocal_var_5c8);
  local_var_5e8 = 0;
  applocal_var_5e0[0] = aplocal_var_5c8;
  aplocal_var_5c8[0] = &system_state_ptr;
  plocal_var_508 = &system_state_ptr;
  plocal_var_4a8 = &memory_allocator_3480_ptr;
  plocal_var_4a0 = stack_array_490;
  stack_array_490[0] = 0;
  local_var_498 = 6;
  strcpy_s(stack_array_490,0x40,&system_data_9e38);
  SystemCommunicationProcessor(aplocal_var_5c8,&plocal_var_4a8);
  local_var_570 = 4;
  local_var_5e8 = 4;
  MathOptimizationEngine0(param_1,applocal_var_5e0,aplocal_var_5c8);
  local_var_5e8 = 0;
  applocal_var_5e0[0] = aplocal_var_5c8;
  aplocal_var_5c8[0] = &system_state_ptr;
  plocal_var_4a8 = &system_state_ptr;
  plocal_var_448 = &memory_allocator_3480_ptr;
  plocal_var_440 = stack_array_430;
  stack_array_430[0] = 0;
  local_var_438 = 0xf;
  strcpy_s(stack_array_430,0x40,&system_data_9870);
  SystemCommunicationProcessor(aplocal_var_5c8,&plocal_var_448);
  local_var_570 = 4;
  local_var_5e8 = 8;
  MathOptimizationEngine0(param_1,applocal_var_5e0,aplocal_var_5c8);
  local_var_5e8 = 0;
  applocal_var_5e0[0] = aplocal_var_5c8;
  aplocal_var_5c8[0] = &system_state_ptr;
  plocal_var_448 = &system_state_ptr;
  plocal_var_3e8 = &memory_allocator_3480_ptr;
  plocal_var_3e0 = stack_array_3d0;
  stack_array_3d0[0] = 0;
  local_var_3d8 = 4;
  strcpy_s(stack_array_3d0,0x40,&system_data_9868);
  SystemCommunicationProcessor(aplocal_var_5c8,&plocal_var_3e8);
  local_var_570 = 1;
  local_var_5e8 = 0x10;
  MathOptimizationEngine0(param_1,applocal_var_5e0,aplocal_var_5c8);
  local_var_5e8 = 0;
  applocal_var_5e0[0] = aplocal_var_5c8;
  aplocal_var_5c8[0] = &system_state_ptr;
  plocal_var_3e8 = &system_state_ptr;
  plocal_var_388 = &memory_allocator_3480_ptr;
  plocal_var_380 = stack_array_370;
  stack_array_370[0] = 0;
  local_var_378 = 3;
  strcpy_s(stack_array_370,0x40,&system_data_9890);
  SystemCommunicationProcessor(aplocal_var_5c8,&plocal_var_388);
  local_var_570 = 1;
  local_var_5e8 = 0x20;
  MathOptimizationEngine0(param_1,applocal_var_5e0,aplocal_var_5c8);
  local_var_5e8 = 0;
  applocal_var_5e0[0] = aplocal_var_5c8;
  aplocal_var_5c8[0] = &system_state_ptr;
  plocal_var_388 = &system_state_ptr;
  plocal_var_328 = &memory_allocator_3480_ptr;
  plocal_var_320 = stack_array_310;
  stack_array_310[0] = 0;
  local_var_318 = 0xf;
  strcpy_s(stack_array_310,0x40,&system_data_9880);
  SystemCommunicationProcessor(aplocal_var_5c8,&plocal_var_328);
  local_var_570 = 1;
  local_var_5e8 = 0x40;
  MathOptimizationEngine0(param_1,applocal_var_5e0,aplocal_var_5c8);
  local_var_5e8 = 0;
  applocal_var_5e0[0] = aplocal_var_5c8;
  aplocal_var_5c8[0] = &system_state_ptr;
  plocal_var_328 = &system_state_ptr;
  plocal_var_2c8 = &memory_allocator_3480_ptr;
  plocal_var_2c0 = stack_array_2b0;
  stack_array_2b0[0] = 0;
  local_var_2b8 = 9;
  strcpy_s(stack_array_2b0,0x40,&system_data_98a8);
  SystemCommunicationProcessor(aplocal_var_5c8,&plocal_var_2c8);
  local_var_570 = 1;
  local_var_5e8 = 0x80;
  MathOptimizationEngine0(param_1,applocal_var_5e0,aplocal_var_5c8);
  local_var_5e8 = 0;
  applocal_var_5e0[0] = aplocal_var_5c8;
  aplocal_var_5c8[0] = &system_state_ptr;
  plocal_var_2c8 = &system_state_ptr;
  plocal_var_268 = &memory_allocator_3480_ptr;
  plocal_var_260 = stack_array_250;
  stack_array_250[0] = 0;
  local_var_258 = 0xd;
  strcpy_s(stack_array_250,0x40,&system_data_9898);
  SystemCommunicationProcessor(aplocal_var_5c8,&plocal_var_268);
  local_var_570 = 1;
  local_var_5e8 = 0x100;
  MathOptimizationEngine0(param_1,applocal_var_5e0,aplocal_var_5c8);
  local_var_5e8 = 0;
  applocal_var_5e0[0] = aplocal_var_5c8;
  aplocal_var_5c8[0] = &system_state_ptr;
  plocal_var_268 = &system_state_ptr;
  plocal_var_208 = &memory_allocator_3480_ptr;
  plocal_var_200 = stack_array_1f0;
  stack_array_1f0[0] = 0;
  local_var_1f8 = 0x10;
  strcpy_s(stack_array_1f0,0x40,&system_data_98c8);
  SystemCommunicationProcessor(aplocal_var_5c8,&plocal_var_208);
  local_var_570 = 0xc;
  local_var_5e8 = 0x200;
  MathOptimizationEngine0(param_1,applocal_var_5e0,aplocal_var_5c8);
  local_var_5e8 = 0;
  applocal_var_5e0[0] = aplocal_var_5c8;
  aplocal_var_5c8[0] = &system_state_ptr;
  plocal_var_208 = &system_state_ptr;
  plocal_var_1a8 = &memory_allocator_3480_ptr;
  plocal_var_1a0 = stack_array_190;
  stack_array_190[0] = 0;
  local_var_198 = 0xd;
  strcpy_s(stack_array_190,0x40,&system_data_98b8);
  SystemCommunicationProcessor(aplocal_var_5c8,&plocal_var_1a8);
  local_var_570 = 3;
  local_var_5e8 = 0x400;
  MathOptimizationEngine0(param_1,applocal_var_5e0,aplocal_var_5c8);
  local_var_5e8 = 0;
  applocal_var_5e0[0] = aplocal_var_5c8;
  aplocal_var_5c8[0] = &system_state_ptr;
  plocal_var_1a8 = &system_state_ptr;
  plocal_var_148 = &memory_allocator_3480_ptr;
  plocal_var_140 = stack_array_130;
  stack_array_130[0] = 0;
  local_var_138 = 0x18;
  strcpy_s(stack_array_130,0x40,&system_data_98f0);
  SystemCommunicationProcessor(aplocal_var_5c8,&plocal_var_148);
  local_var_570 = 0xb;
  local_var_5e8 = 0x800;
  MathOptimizationEngine0(param_1,applocal_var_5e0,aplocal_var_5c8);
  local_var_5e8 = 0;
  applocal_var_5e0[0] = aplocal_var_5c8;
  aplocal_var_5c8[0] = &system_state_ptr;
  plocal_var_148 = &system_state_ptr;
  plocal_var_e8 = &memory_allocator_3480_ptr;
  plocal_var_e0 = stack_array_d0;
  stack_array_d0[0] = 0;
  local_var_d8 = 0xc;
  strcpy_s(stack_array_d0,0x40,&system_data_98e0);
  SystemCommunicationProcessor(aplocal_var_5c8,&plocal_var_e8);
  local_var_570 = 0xb;
  local_var_5e8 = 0x1000;
  MathOptimizationEngine0(param_1,applocal_var_5e0,aplocal_var_5c8);
  local_var_5e8 = 0;
  applocal_var_5e0[0] = aplocal_var_5c8;
  aplocal_var_5c8[0] = &system_state_ptr;
  plocal_var_e8 = &system_state_ptr;
  plocal_var_88 = &memory_allocator_3480_ptr;
  plocal_var_80 = stack_array_70;
  stack_array_70[0] = 0;
  local_var_78 = 10;
  strcpy_s(stack_array_70,0x40,&system_data_9928);
  SystemCommunicationProcessor(aplocal_var_5c8,&plocal_var_88);
  local_var_570 = 0xb;
  local_var_5e8 = 0x2000;
  MathOptimizationEngine0(param_1,applocal_var_5e0,aplocal_var_5c8);
  local_var_5e8 = 0;
  applocal_var_5e0[0] = aplocal_var_5c8;
  aplocal_var_5c8[0] = &system_state_ptr;
  plocal_var_88 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_608);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_17d800(uint64_t param_1,uint64_t param_2)
void function_17d800(uint64_t param_1,uint64_t param_2)
{
  int32_t uVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  uint64_t *puVar4;
  void *plocal_var_40;
  int32_t *plocal_var_38;
  int32_t local_var_30;
  uint64_t local_var_28;
  puVar2 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x88,8,3,0xfffffffffffffffe);
  puVar4 = puVar2;
  SystemCore_SyncController(puVar2,param_2,param_1);
  *puVar4 = &processed_var_8888_ptr;
  puVar4[0xe] = param_2;
  puVar4[0xf] = 0;
  *(int32_t *)(puVar4 + 0x10) = 0;
  *(int8_t *)((int64_t)puVar4 + 0x84) = 0;
  plocal_var_40 = &system_data_buffer_ptr;
  local_var_28 = 0;
  plocal_var_38 = (int32_t *)0x0;
  local_var_30 = 0;
  puVar3 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  plocal_var_38 = puVar3;
  uVar1 = CoreEngineSystemCleanup(puVar3);
  local_var_28 = CONCAT44(local_var_28._4_4_,uVar1);
  *puVar3 = 0x64676152;
  puVar3[1] = 0x206c6c6f;
  puVar3[2] = 0x62616e45;
  puVar3[3] = 0x64656c;
  local_var_30 = 0xf;
  SystemNetwork_Processor(puVar2,&plocal_var_40,(int64_t)puVar2 + 0x84,3);
  plocal_var_40 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar3);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_17d940(uint64_t param_1,uint64_t param_2)
void function_17d940(uint64_t param_1,uint64_t param_2)
{
  int64_t *plVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  void *plocal_var_98;
  uint64_t *plocal_var_90;
  int32_t local_var_88;
  uint64_t local_var_80;
  puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xa0,8,3);
  uVar5 = 0xfffffffffffffffe;
  puVar4 = puVar3;
  SystemCore_SyncController(puVar3,param_2,param_1);
  *puVar4 = &processed_var_9296_ptr;
  plVar1 = puVar4 + 0xe;
  *plVar1 = (int64_t)&system_state_ptr;
  puVar4[0xf] = 0;
  *(int32_t *)(puVar4 + 0x10) = 0;
  *plVar1 = (int64_t)&system_data_buffer_ptr;
  puVar4[0x11] = 0;
  puVar4[0xf] = 0;
  *(int32_t *)(puVar4 + 0x10) = 0;
  puVar4[0x12] = 0;
  plVar6 = plVar1;
  (**(code **)(*plVar1 + 0x10))(plVar1,&system_buffer_ptr);
  plocal_var_98 = &system_data_buffer_ptr;
  local_var_80 = 0;
  plocal_var_90 = (uint64_t *)0x0;
  local_var_88 = 0;
  puVar4 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar4 = 0;
  plocal_var_90 = puVar4;
  uVar2 = CoreEngineSystemCleanup(puVar4);
  local_var_80 = CONCAT44(local_var_80._4_4_,uVar2);
  *puVar4 = 0x6d614e2068746150;
  *(int16_t *)(puVar4 + 1) = 0x65;
  local_var_88 = 9;
  SystemNetwork_Processor(puVar3,&plocal_var_98,plVar1,0,uVar5,plVar6);
  plocal_var_98 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar4);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * function_17d990(uint64_t param_1,uint64_t param_2)
{
  uint64_t *puVar1;
  puVar1 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x78,8,3,0xfffffffffffffffe);
  SystemCore_SyncController(puVar1,param_2,param_1);
  *puVar1 = &processed_var_9680_ptr;
  *(int32_t *)((int64_t)puVar1 + 0x74) = 0xdeadbeaf;
  *(int8_t *)(puVar1 + 0xe) = 0;
  return puVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_17da00(uint64_t param_1,uint64_t param_2)
void function_17da00(uint64_t param_1,uint64_t param_2)
{
  int32_t uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  void *plocal_var_b8;
  uint64_t *plocal_var_b0;
  int32_t local_var_a8;
  uint64_t local_var_a0;
  uint64_t local_var_38;
  uint64_t local_var_30;
  local_var_30 = 0x18017da2a;
  puVar2 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xa8,8,3);
  local_var_38 = 0xfffffffffffffffe;
  puVar3 = puVar2;
  SystemCore_SyncController(puVar2,param_2,param_1);
  *puVar3 = &ui_system_data_128_ptr;
  *(int32_t *)(puVar2 + 0x14) = 0x3f800000;
  puVar2[0xe] = 0x4044000000000000;
  puVar2[0xf] = 0x4010000000000000;
  *(int32_t *)(puVar2 + 0x12) = 0;
  *(int32_t *)((int64_t)puVar2 + 0x94) = 0;
  *(int32_t *)(puVar2 + 0x13) = 0;
  *(int32_t *)((int64_t)puVar2 + 0x9c) = 0;
  *(int32_t *)(puVar2 + 0x14) = 0x3f800000;
  puVar2[0x10] = 0x4024000000000000;
  puVar2[0x11] = 0x3fd0000000000000;
  plocal_var_b8 = &system_data_buffer_ptr;
  local_var_a0 = 0;
  plocal_var_b0 = (uint64_t *)0x0;
  local_var_a8 = 0;
  puVar3 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  plocal_var_b0 = puVar3;
  uVar1 = CoreEngineSystemCleanup(puVar3);
  local_var_a0 = CONCAT44(local_var_a0._4_4_,uVar1);
  *puVar3 = 0x6f6d412065766f4d;
  *(int32_t *)(puVar3 + 1) = 0x746e75;
  local_var_a8 = 0xb;
  SystemNetwork_Processor(puVar2,&plocal_var_b8,puVar2 + 0xe,1);
  plocal_var_b8 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar3);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_17da50(uint64_t param_1,uint64_t param_2)
void function_17da50(uint64_t param_1,uint64_t param_2)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int32_t uVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  void *plocal_var_48;
  uint64_t *plocal_var_40;
  int32_t local_var_38;
  uint64_t local_var_30;
  uVar6 = 0xfffffffffffffffe;
  puVar4 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x98,8,3,0xfffffffffffffffe);
  puVar5 = puVar4;
  SystemCore_SyncController(puVar4,param_2,param_1);
  *puVar5 = &processed_var_648_ptr;
  plVar1 = puVar5 + 0xe;
  *plVar1 = (int64_t)&system_state_ptr;
  puVar5[0xf] = 0;
  *(int32_t *)(puVar5 + 0x10) = 0;
  *plVar1 = (int64_t)&system_data_buffer_ptr;
  puVar5[0x11] = 0;
  puVar5[0xf] = 0;
  *(int32_t *)(puVar5 + 0x10) = 0;
  puVar5[0x12] = 0;
  plVar7 = plVar1;
  (**(code **)(*plVar1 + 0x10))(plVar1,0);
  plVar2 = (int64_t *)puVar4[0x12];
  puVar4[0x12] = 0;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plocal_var_48 = &system_data_buffer_ptr;
  local_var_30 = 0;
  plocal_var_40 = (uint64_t *)0x0;
  local_var_38 = 0;
  puVar5 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar5 = 0;
  plocal_var_40 = puVar5;
  uVar3 = CoreEngineSystemCleanup(puVar5);
  local_var_30 = CONCAT44(local_var_30._4_4_,uVar3);
  *puVar5 = 0x6570795474736554;
  *(int8_t *)(puVar5 + 1) = 0;
  local_var_38 = 8;
  SystemNetwork_Processor(puVar4,&plocal_var_48,plVar1,9,uVar6,plVar7);
  plocal_var_48 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar5);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_17dbd0(uint64_t param_1,uint64_t param_2)
void function_17dbd0(uint64_t param_1,uint64_t param_2)
{
  int32_t uVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  uint64_t *puVar4;
  void *plocal_var_40;
  int32_t *plocal_var_38;
  int32_t local_var_30;
  uint64_t local_var_28;
  puVar2 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x78,8,3,0xfffffffffffffffe);
  puVar4 = puVar2;
  SystemCore_SyncController(puVar2,param_2,param_1);
  *puVar4 = &ui_system_data_1024_ptr;
  *(int8_t *)(puVar4 + 0xe) = 0;
  plocal_var_40 = &system_data_buffer_ptr;
  local_var_28 = 0;
  plocal_var_38 = (int32_t *)0x0;
  local_var_30 = 0;
  puVar3 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x12,0x13);
  *(int8_t *)puVar3 = 0;
  plocal_var_38 = puVar3;
  uVar1 = CoreEngineSystemCleanup(puVar3);
  local_var_28 = CONCAT44(local_var_28._4_4_,uVar1);
  *puVar3 = 0x65736552;
  puVar3[1] = 0x76452074;
  puVar3[2] = 0x20797265;
  puVar3[3] = 0x6d617246;
  *(int16_t *)(puVar3 + 4) = 0x65;
  local_var_30 = 0x11;
  SystemNetwork_Processor(puVar2,&plocal_var_40,puVar2 + 0xe,3);
  plocal_var_40 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar3);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_17dd10(uint64_t param_1,uint64_t param_2)
void function_17dd10(uint64_t param_1,uint64_t param_2)
{
  int32_t uVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  uint64_t *puVar4;
  void *plocal_var_138;
  int32_t *plocal_var_130;
  int32_t local_var_128;
  uint64_t local_var_120;
  uint64_t local_var_38;
  uint64_t local_var_30;
  local_var_30 = 0x18017dd3a;
  puVar2 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xb8,8,3);
  local_var_38 = 0xfffffffffffffffe;
  puVar4 = puVar2;
  SystemCore_SyncController(puVar2,param_2,param_1);
  *puVar4 = &rendering_main_control_ptr;
  puVar4[0x13] = 0;
  puVar4[0x14] = 0;
  puVar4[0x15] = 0;
  *(int32_t *)(puVar4 + 0x16) = 3;
  plocal_var_138 = &system_data_buffer_ptr;
  local_var_120 = 0;
  plocal_var_130 = (int32_t *)0x0;
  local_var_128 = 0;
  puVar3 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x18,0x13);
  *(int8_t *)puVar3 = 0;
  plocal_var_130 = puVar3;
  uVar1 = CoreEngineSystemCleanup(puVar3);
  local_var_120 = CONCAT44(local_var_120._4_4_,uVar1);
  *puVar3 = 0x6e756f42;
  puVar3[1] = 0x676e6964;
  puVar3[2] = 0x786f4220;
  puVar3[3] = 0x6e6f4320;
  *(uint64_t *)(puVar3 + 4) = 0x746e6961727473;
  local_var_128 = 0x17;
  SystemNetwork_Processor(puVar2,&plocal_var_138,(int64_t)puVar2 + 0x74,2);
  plocal_var_138 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar3);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address