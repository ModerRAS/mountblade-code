// $fun 的语义化别名
#define $alias_name $fun
/* SystemCore_EventHandler - RenderingSystem_DataBlockCopier */
#define RenderingSystem_DataBlockCopier SystemCore_EventHandler
/* 函数别名定义: MathOptimizationEngine */
#define MathOptimizationEngine MathOptimizationEngine
/* 函数别名定义: DataDeserializer */
#define DataDeserializer DataDeserializer
// 03_rendering_part153.c - 16 个函数
// 函数: void function_360210(int64_t param_1,int64_t param_2,uint64_t param_3,int64_t *param_4)
void function_360210(int64_t param_1,int64_t param_2,uint64_t param_3,int64_t *param_4)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint64_t *puVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  lVar1 = *(int64_t *)param_4[1];
  lVar2 = *param_4;
  uVar5 = *(int32_t *)(lVar1 + 0x2e8);
  uVar6 = *(int32_t *)(lVar1 + 0x2ec);
  uVar7 = *(int32_t *)(lVar1 + 0x2f0);
  uVar8 = *(int32_t *)(lVar1 + 0x2f4);
  uVar9 = *(int32_t *)(lVar1 + 0x2f8);
  uVar10 = *(int32_t *)(lVar1 + 0x2fc);
  uVar11 = *(int32_t *)(lVar1 + 0x300);
  uVar12 = *(int32_t *)(lVar1 + 0x304);
  uVar13 = *(int32_t *)(lVar1 + 0x308);
  uVar14 = *(int32_t *)(lVar1 + 0x30c);
  uVar15 = *(int32_t *)(lVar1 + 0x310);
  uVar16 = *(uint64_t *)(lVar1 + 0x314);
  uVar17 = *(uint64_t *)(lVar1 + 0x31c);
  uVar18 = *(uint64_t *)(lVar1 + 0x324);
  uVar19 = *(uint64_t *)(lVar1 + 0x32c);
  uVar20 = *(uint64_t *)(lVar1 + 0x334);
  *(int32_t *)(lVar2 + 0x14) = *(int32_t *)(lVar1 + 0x2e4);
  *(int32_t *)(lVar2 + 0x18) = uVar5;
  *(int32_t *)(lVar2 + 0x1c) = uVar6;
  *(int32_t *)(lVar2 + 0x20) = uVar7;
  *(int32_t *)(lVar2 + 0x24) = uVar8;
  *(int32_t *)(lVar2 + 0x28) = uVar9;
  *(int32_t *)(lVar2 + 0x2c) = uVar10;
  *(int32_t *)(lVar2 + 0x30) = uVar11;
  *(int32_t *)(lVar2 + 0x34) = uVar12;
  *(int32_t *)(lVar2 + 0x38) = uVar13;
  *(int32_t *)(lVar2 + 0x3c) = uVar14;
  *(int32_t *)(lVar2 + 0x40) = uVar15;
  *(uint64_t *)(lVar2 + 0x44) = uVar16;
  *(uint64_t *)(lVar2 + 0x4c) = uVar17;
  *(uint64_t *)(lVar2 + 0x54) = uVar18;
  *(uint64_t *)(lVar2 + 0x5c) = uVar19;
  *(uint64_t *)(lVar2 + 100) = uVar20;
  plVar3 = (int64_t *)*param_4;
  lVar2 = *(int64_t *)(param_1 + 8);
  if ((((char)plVar3[2] == '\0') && (*(char *)((int64_t)plVar3 + 0x11) == '\0')) && (*plVar3 != 0))
  {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(int16_t *)(plVar3 + 2) = 1;
  *plVar3 = lVar2;
  plVar3[1] = param_2;
  puVar4 = (uint64_t *)*param_4;
  if ((*(char *)((int64_t)puVar4 + 0x66) == '\0') && (*(char *)(puVar4 + 2) != '\0')) {
    uVar20 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,puVar4[1],CONCAT71((int7)((uint64_t)lVar1 >> 8),3));
// WARNING: Subroutine does not return
    memcpy(uVar20,*puVar4,puVar4[1]);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3603d0(uint64_t *param_1)
void function_3603d0(uint64_t *param_1)
{
  int32_t uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  void *plocal_var_1c8;
  uint64_t *plocal_var_1c0;
  int32_t local_var_1b8;
  uint64_t local_var_1b0;
  uint64_t local_var_48;
  local_var_48 = 0xfffffffffffffffe;
  puVar3 = param_1;
  SystemCore_SyncController();
  *puVar3 = &processed_var_6104_ptr;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  *(int32_t *)(puVar3 + 0x13) = 3;
  puVar3[0x14] = 0;
  puVar3[0x15] = 0;
  puVar3[0x16] = 0;
  *(int32_t *)(puVar3 + 0x17) = 3;
  puVar3[0x18] = &system_state_ptr;
  puVar3[0x19] = 0;
  *(int32_t *)(puVar3 + 0x1a) = 0;
  puVar3[0x18] = &system_data_buffer_ptr;
  puVar3[0x1b] = 0;
  puVar3[0x19] = 0;
  *(int32_t *)(puVar3 + 0x1a) = 0;
  param_1[0x1d] = &system_state_ptr;
  param_1[0x1e] = 0;
  *(int32_t *)(param_1 + 0x1f) = 0;
  param_1[0x1d] = &system_data_buffer_ptr;
  param_1[0x20] = 0;
  param_1[0x1e] = 0;
  *(int32_t *)(param_1 + 0x1f) = 0;
  puVar3 = param_1 + 0x22;
  *puVar3 = &system_state_ptr;
  param_1[0x23] = 0;
  *(int32_t *)(param_1 + 0x24) = 0;
  *puVar3 = &system_data_buffer_ptr;
  param_1[0x25] = 0;
  param_1[0x23] = 0;
  *(int32_t *)(param_1 + 0x24) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(int32_t *)(param_1 + 0x2f) = 3;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(int32_t *)(param_1 + 0x36) = 3;
  *(int32_t *)(param_1 + 0x27) = 0;
  *(int32_t *)(param_1 + 0x37) = 1;
  plocal_var_1c8 = &system_data_buffer_ptr;
  local_var_1b0 = 0;
  plocal_var_1c0 = (uint64_t *)0x0;
  local_var_1b8 = 0;
  puVar2 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar2 = 0;
  plocal_var_1c0 = puVar2;
  uVar1 = CoreEngineSystemCleanup(puVar2);
  local_var_1b0 = CONCAT44(local_var_1b0._4_4_,uVar1);
  *puVar2 = 0x6d614e2068746150;
  *(int16_t *)(puVar2 + 1) = 0x65;
  local_var_1b8 = 9;
  SystemNetwork_Processor(param_1,&plocal_var_1c8,puVar3,0);
  plocal_var_1c8 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar2);
}
uint64_t function_360c70(uint64_t param_1,uint64_t param_2)
{
  function_360cb0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x1c0);
  }
  return param_1;
}
// 函数: void function_360cb0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_360cb0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  if (param_1[0x33] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  function_361700();
  param_1[0x22] = &system_data_buffer_ptr;
  if (param_1[0x23] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x23] = 0;
  *(int32_t *)(param_1 + 0x25) = 0;
  param_1[0x22] = &system_state_ptr;
  param_1[0x1d] = &system_data_buffer_ptr;
  if (param_1[0x1e] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x1e] = 0;
  *(int32_t *)(param_1 + 0x20) = 0;
  param_1[0x1d] = &system_state_ptr;
  param_1[0x18] = &system_data_buffer_ptr;
  if (param_1[0x19] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x19] = 0;
  *(int32_t *)(param_1 + 0x1b) = 0;
  param_1[0x18] = &system_state_ptr;
  if (param_1[0x14] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (param_1[0x10] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if ((int64_t *)param_1[0xf] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0xf] + 0x38))();
  }
  if ((int64_t *)param_1[0xe] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0xe] + 0x38))();
  }
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &processed_var_4544_ptr;
  function_080df0();
  *param_1 = &processed_var_4912_ptr;
  function_2f5b10(param_1 + 4,param_1[6],param_3,param_4,uVar1);
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  return;
}
// 函数: void function_360e00(int64_t *param_1)
void function_360e00(int64_t *param_1)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  puVar1 = (uint64_t *)param_1[1];
  puVar2 = (uint64_t *)*param_1;
  while( true ) {
    if (puVar2 == puVar1) {
      if (*param_1 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      return;
    }
    puVar2[5] = &system_data_buffer_ptr;
    if (puVar2[6] != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    puVar2[6] = 0;
    *(int32_t *)(puVar2 + 8) = 0;
    puVar2[5] = &system_state_ptr;
    *puVar2 = &system_data_buffer_ptr;
    if (puVar2[1] != 0) break;
    puVar2[1] = 0;
    *(int32_t *)(puVar2 + 3) = 0;
    *puVar2 = &system_state_ptr;
    puVar2 = puVar2 + 10;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_360e20(uint64_t param_1)
void function_360e20(uint64_t param_1)
{
  int8_t stack_array_888 [32];
  int32_t local_var_868;
  void **applocal_var_860 [2];
  uint64_t local_var_850;
  void *aplocal_var_848 [19];
  int32_t local_var_7b0;
  void *plocal_var_7a8;
  int8_t *plocal_var_7a0;
  int32_t local_var_798;
  int8_t stack_array_790 [136];
  void *plocal_var_708;
  int8_t *plocal_var_700;
  int32_t local_var_6f8;
  int8_t stack_array_6f0 [136];
  void *plocal_var_668;
  int8_t *plocal_var_660;
  int32_t local_var_658;
  int8_t stack_array_650 [136];
  void *plocal_var_5c8;
  int8_t *plocal_var_5c0;
  int32_t local_var_5b8;
  int8_t stack_array_5b0 [136];
  void *plocal_var_528;
  int8_t *plocal_var_520;
  int32_t local_var_518;
  int8_t stack_array_510 [136];
  void *plocal_var_488;
  int8_t *plocal_var_480;
  int32_t local_var_478;
  int8_t stack_array_470 [136];
  void *plocal_var_3e8;
  int8_t *plocal_var_3e0;
  int32_t local_var_3d8;
  int8_t stack_array_3d0 [136];
  void *plocal_var_348;
  int8_t *plocal_var_340;
  int32_t local_var_338;
  int8_t stack_array_330 [136];
  void *plocal_var_2a8;
  int8_t *plocal_var_2a0;
  int32_t local_var_298;
  int8_t stack_array_290 [136];
  void *plocal_var_208;
  int8_t *plocal_var_200;
  int32_t local_var_1f8;
  int8_t stack_array_1f0 [136];
  void *plocal_var_168;
  int8_t *plocal_var_160;
  int32_t local_var_158;
  int8_t stack_array_150 [136];
  void *plocal_var_c8;
  int8_t *plocal_var_c0;
  int32_t local_var_b8;
  int8_t stack_array_b0 [136];
  uint64_t local_var_28;
  local_var_850 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_888;
  local_var_868 = 0;
  plocal_var_7a8 = &memory_allocator_3432_ptr;
  plocal_var_7a0 = stack_array_790;
  stack_array_790[0] = 0;
  local_var_798 = 9;
  strcpy_s(stack_array_790,0x80,&system_data_d578);
  RenderingSystem_DataBlockCopier(aplocal_var_848,&plocal_var_7a8);
  local_var_7b0 = 0;
  local_var_868 = 1;
  function_3617c0(param_1,applocal_var_860,aplocal_var_848);
  local_var_868 = 0;
  applocal_var_860[0] = aplocal_var_848;
  aplocal_var_848[0] = &system_state_ptr;
  plocal_var_7a8 = &system_state_ptr;
  plocal_var_708 = &memory_allocator_3432_ptr;
  plocal_var_700 = stack_array_6f0;
  stack_array_6f0[0] = 0;
  local_var_6f8 = 0xe;
  strcpy_s(stack_array_6f0,0x80,&system_data_ef48);
  RenderingSystem_DataBlockCopier(aplocal_var_848,&plocal_var_708);
  local_var_7b0 = 10;
  local_var_868 = 2;
  function_3617c0(param_1,applocal_var_860,aplocal_var_848);
  local_var_868 = 0;
  applocal_var_860[0] = aplocal_var_848;
  aplocal_var_848[0] = &system_state_ptr;
  plocal_var_708 = &system_state_ptr;
  plocal_var_668 = &memory_allocator_3432_ptr;
  plocal_var_660 = stack_array_650;
  stack_array_650[0] = 0;
  local_var_658 = 5;
  strcpy_s(stack_array_650,0x80,&system_data_9e30);
  RenderingSystem_DataBlockCopier(aplocal_var_848,&plocal_var_668);
  local_var_7b0 = 2;
  local_var_868 = 4;
  function_3617c0(param_1,applocal_var_860,aplocal_var_848);
  local_var_868 = 0;
  applocal_var_860[0] = aplocal_var_848;
  aplocal_var_848[0] = &system_state_ptr;
  plocal_var_668 = &system_state_ptr;
  plocal_var_5c8 = &memory_allocator_3432_ptr;
  plocal_var_5c0 = stack_array_5b0;
  stack_array_5b0[0] = 0;
  local_var_5b8 = 6;
  strcpy_s(stack_array_5b0,0x80,&system_data_9e38);
  RenderingSystem_DataBlockCopier(aplocal_var_848,&plocal_var_5c8);
  local_var_7b0 = 2;
  local_var_868 = 8;
  function_3617c0(param_1,applocal_var_860,aplocal_var_848);
  local_var_868 = 0;
  applocal_var_860[0] = aplocal_var_848;
  aplocal_var_848[0] = &system_state_ptr;
  plocal_var_5c8 = &system_state_ptr;
  plocal_var_528 = &memory_allocator_3432_ptr;
  plocal_var_520 = stack_array_510;
  stack_array_510[0] = 0;
  local_var_518 = 3;
  strcpy_s(stack_array_510,0x80,&system_data_f8f0);
  RenderingSystem_DataBlockCopier(aplocal_var_848,&plocal_var_528);
  local_var_7b0 = 2;
  local_var_868 = 0x10;
  function_3617c0(param_1,applocal_var_860,aplocal_var_848);
  local_var_868 = 0;
  applocal_var_860[0] = aplocal_var_848;
  aplocal_var_848[0] = &system_state_ptr;
  plocal_var_528 = &system_state_ptr;
  plocal_var_488 = &memory_allocator_3432_ptr;
  plocal_var_480 = stack_array_470;
  stack_array_470[0] = 0;
  local_var_478 = 0xd;
  strcpy_s(stack_array_470,0x80,&system_data_f930);
  RenderingSystem_DataBlockCopier(aplocal_var_848,&plocal_var_488);
  local_var_7b0 = 2;
  local_var_868 = 0x20;
  function_3617c0(param_1,applocal_var_860,aplocal_var_848);
  local_var_868 = 0;
  applocal_var_860[0] = aplocal_var_848;
  aplocal_var_848[0] = &system_state_ptr;
  plocal_var_488 = &system_state_ptr;
  plocal_var_3e8 = &memory_allocator_3432_ptr;
  plocal_var_3e0 = stack_array_3d0;
  stack_array_3d0[0] = 0;
  local_var_3d8 = 0xb;
  strcpy_s(stack_array_3d0,0x80,&system_data_f920);
  RenderingSystem_DataBlockCopier(aplocal_var_848,&plocal_var_3e8);
  local_var_7b0 = 2;
  local_var_868 = 0x40;
  function_3617c0(param_1,applocal_var_860,aplocal_var_848);
  local_var_868 = 0;
  applocal_var_860[0] = aplocal_var_848;
  aplocal_var_848[0] = &system_state_ptr;
  plocal_var_3e8 = &system_state_ptr;
  plocal_var_348 = &memory_allocator_3432_ptr;
  plocal_var_340 = stack_array_330;
  stack_array_330[0] = 0;
  local_var_338 = 0xc;
  strcpy_s(stack_array_330,0x80,&system_data_f910);
  RenderingSystem_DataBlockCopier(aplocal_var_848,&plocal_var_348);
  local_var_7b0 = 2;
  local_var_868 = 0x80;
  function_3617c0(param_1,applocal_var_860,aplocal_var_848);
  local_var_868 = 0;
  applocal_var_860[0] = aplocal_var_848;
  aplocal_var_848[0] = &system_state_ptr;
  plocal_var_348 = &system_state_ptr;
  plocal_var_2a8 = &memory_allocator_3432_ptr;
  plocal_var_2a0 = stack_array_290;
  stack_array_290[0] = 0;
  local_var_298 = 0x14;
  strcpy_s(stack_array_290,0x80,&system_data_f8f8);
  RenderingSystem_DataBlockCopier(aplocal_var_848,&plocal_var_2a8);
  local_var_7b0 = 0;
  local_var_868 = 0x100;
  function_3617c0(param_1,applocal_var_860,aplocal_var_848);
  local_var_868 = 0;
  applocal_var_860[0] = aplocal_var_848;
  aplocal_var_848[0] = &system_state_ptr;
  plocal_var_2a8 = &system_state_ptr;
  plocal_var_208 = &memory_allocator_3432_ptr;
  plocal_var_200 = stack_array_1f0;
  stack_array_1f0[0] = 0;
  local_var_1f8 = 0xf;
  strcpy_s(stack_array_1f0,0x80,&system_data_f960);
  RenderingSystem_DataBlockCopier(aplocal_var_848,&plocal_var_208);
  local_var_7b0 = 0;
  local_var_868 = 0x200;
  function_3617c0(param_1,applocal_var_860,aplocal_var_848);
  local_var_868 = 0;
  applocal_var_860[0] = aplocal_var_848;
  aplocal_var_848[0] = &system_state_ptr;
  plocal_var_208 = &system_state_ptr;
  plocal_var_168 = &memory_allocator_3432_ptr;
  plocal_var_160 = stack_array_150;
  stack_array_150[0] = 0;
  local_var_158 = 0xf;
  strcpy_s(stack_array_150,0x80,&system_data_f950);
  RenderingSystem_DataBlockCopier(aplocal_var_848,&plocal_var_168);
  local_var_7b0 = 4;
  local_var_868 = 0x400;
  function_3617c0(param_1,applocal_var_860,aplocal_var_848);
  local_var_868 = 0;
  applocal_var_860[0] = aplocal_var_848;
  aplocal_var_848[0] = &system_state_ptr;
  plocal_var_168 = &system_state_ptr;
  plocal_var_c8 = &memory_allocator_3432_ptr;
  plocal_var_c0 = stack_array_b0;
  stack_array_b0[0] = 0;
  local_var_b8 = 0xf;
  strcpy_s(stack_array_b0,0x80,&system_data_f940);
  RenderingSystem_DataBlockCopier(aplocal_var_848,&plocal_var_c8);
  local_var_7b0 = 2;
  local_var_868 = 0x800;
  function_3617c0(param_1,applocal_var_860,aplocal_var_848);
  local_var_868 = 0;
  applocal_var_860[0] = aplocal_var_848;
  aplocal_var_848[0] = &system_state_ptr;
  plocal_var_c8 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_888);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_361690(uint64_t param_1,uint64_t param_2)
void function_361690(uint64_t param_1,uint64_t param_2)
{
  int32_t uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  void *plocal_var_1c8;
  uint64_t *plocal_var_1c0;
  int32_t local_var_1b8;
  uint64_t local_var_1b0;
  uint64_t local_var_48;
  puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x1c0,8,3);
  local_var_48 = 0xfffffffffffffffe;
  puVar4 = puVar3;
  SystemCore_SyncController(puVar3,param_2,param_1);
  *puVar4 = &processed_var_6104_ptr;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  *(int32_t *)(puVar4 + 0x13) = 3;
  puVar4[0x14] = 0;
  puVar4[0x15] = 0;
  puVar4[0x16] = 0;
  *(int32_t *)(puVar4 + 0x17) = 3;
  puVar4[0x18] = &system_state_ptr;
  puVar4[0x19] = 0;
  *(int32_t *)(puVar4 + 0x1a) = 0;
  puVar4[0x18] = &system_data_buffer_ptr;
  puVar4[0x1b] = 0;
  puVar4[0x19] = 0;
  *(int32_t *)(puVar4 + 0x1a) = 0;
  puVar3[0x1d] = &system_state_ptr;
  puVar3[0x1e] = 0;
  *(int32_t *)(puVar3 + 0x1f) = 0;
  puVar3[0x1d] = &system_data_buffer_ptr;
  puVar3[0x20] = 0;
  puVar3[0x1e] = 0;
  *(int32_t *)(puVar3 + 0x1f) = 0;
  puVar4 = puVar3 + 0x22;
  *puVar4 = &system_state_ptr;
  puVar3[0x23] = 0;
  *(int32_t *)(puVar3 + 0x24) = 0;
  *puVar4 = &system_data_buffer_ptr;
  puVar3[0x25] = 0;
  puVar3[0x23] = 0;
  *(int32_t *)(puVar3 + 0x24) = 0;
  puVar3[0x2c] = 0;
  puVar3[0x2d] = 0;
  puVar3[0x2e] = 0;
  *(int32_t *)(puVar3 + 0x2f) = 3;
  puVar3[0x33] = 0;
  puVar3[0x34] = 0;
  puVar3[0x35] = 0;
  *(int32_t *)(puVar3 + 0x36) = 3;
  *(int32_t *)(puVar3 + 0x27) = 0;
  *(int32_t *)(puVar3 + 0x37) = 1;
  plocal_var_1c8 = &system_data_buffer_ptr;
  local_var_1b0 = 0;
  plocal_var_1c0 = (uint64_t *)0x0;
  local_var_1b8 = 0;
  puVar2 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar2 = 0;
  plocal_var_1c0 = puVar2;
  uVar1 = CoreEngineSystemCleanup(puVar2);
  local_var_1b0 = CONCAT44(local_var_1b0._4_4_,uVar1);
  *puVar2 = 0x6d614e2068746150;
  *(int16_t *)(puVar2 + 1) = 0x65;
  local_var_1b8 = 9;
  SystemNetwork_Processor(puVar3,&plocal_var_1c8,puVar4,0);
  plocal_var_1c8 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar2);
}
// 函数: void function_3616e0(uint64_t *param_1)
void function_3616e0(uint64_t *param_1)
{
  if ((void *)*param_1 != &processed_var_6104_ptr) {
    (**(code **)((void *)*param_1 + 0x70))();
  }
  return;
}
// 函数: void function_361700(int64_t *param_1)
void function_361700(int64_t *param_1)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  puVar1 = (uint64_t *)param_1[1];
  puVar2 = (uint64_t *)*param_1;
  while( true ) {
    if (puVar2 == puVar1) {
      if (*param_1 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      return;
    }
    puVar2[5] = &system_data_buffer_ptr;
    if (puVar2[6] != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    puVar2[6] = 0;
    *(int32_t *)(puVar2 + 8) = 0;
    puVar2[5] = &system_state_ptr;
    *puVar2 = &system_data_buffer_ptr;
    if (puVar2[1] != 0) break;
    puVar2[1] = 0;
    *(int32_t *)(puVar2 + 3) = 0;
    *puVar2 = &system_state_ptr;
    puVar2 = puVar2 + 10;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t * function_3617c0(int64_t param_1,int64_t *param_2,int64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  byte bVar2;
  uint uVar3;
  int64_t lVar4;
  int64_t lVar5;
  byte *pbVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t *pstack_special_x_8;
  int64_t lStackX_10;
  lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0xc0,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  puVar1 = (uint64_t *)(lVar4 + 0x20);
  pstack_special_x_8 = puVar1;
  RenderingSystem_DataBlockCopier(puVar1,param_3);
  *(int32_t *)(lVar4 + 0xb8) = *(int32_t *)(param_3 + 0x98);
  lStackX_10 = lVar4;
  lVar5 = SystemCore_SecurityValidator(param_1,&pstack_special_x_8,puVar1);
  if ((char)pstack_special_x_8 == '\0') {
    *puVar1 = &system_state_ptr;
    if (lVar4 != 0) {
      pstack_special_x_8 = puVar1;
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar4);
    }
    *param_2 = lVar5;
    *(int8_t *)(param_2 + 1) = 0;
    return param_2;
  }
  if (lVar5 != param_1) {
    if (*(int *)(lVar5 + 0x30) == 0) {
LAB_180361877:
      uVar8 = 1;
      goto LAB_180361882;
    }
    if (*(int *)(lVar4 + 0x30) != 0) {
      pbVar6 = *(byte **)(lVar5 + 0x28);
      lVar7 = *(int64_t *)(lVar4 + 0x28) - (int64_t)pbVar6;
      do {
        bVar2 = *pbVar6;
        uVar3 = (uint)pbVar6[lVar7];
        if (bVar2 != uVar3) break;
        pbVar6 = pbVar6 + 1;
      } while (uVar3 != 0);
      if ((int)(bVar2 - uVar3) < 1) goto LAB_180361877;
    }
  }
  uVar8 = 0;
LAB_180361882:
// WARNING: Subroutine does not return
  SystemNetworkHandler(lVar4,lVar5,param_1,uVar8);
}
int64_t function_3618e0(int64_t param_1,uint64_t param_2)
{
  *(uint64_t *)(param_1 + 0x70) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x78) != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x78) = 0;
  *(int32_t *)(param_1 + 0x88) = 0;
  *(uint64_t *)(param_1 + 0x70) = &system_state_ptr;
  UIComponent_Manager(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x90);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_361970(uint64_t param_1,uint64_t param_2)
void function_361970(uint64_t param_1,uint64_t param_2)
{
  uint64_t *puVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  int32_t *puVar4;
  uint64_t *puVar5;
  void *plocal_var_50;
  int32_t *plocal_var_48;
  int32_t local_var_40;
  uint64_t local_var_38;
  puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x90,8,3,0xfffffffffffffffe);
  puVar5 = puVar3;
  SystemCore_SyncController(puVar3,param_2,param_1);
  *puVar5 = &processed_var_6472_ptr;
  puVar1 = puVar5 + 0xe;
  *puVar1 = &system_state_ptr;
  puVar5[0xf] = 0;
  *(int32_t *)(puVar5 + 0x10) = 0;
  *puVar1 = &system_data_buffer_ptr;
  puVar5[0x11] = 0;
  puVar5[0xf] = 0;
  *(int32_t *)(puVar5 + 0x10) = 0;
  plocal_var_50 = &system_data_buffer_ptr;
  local_var_38 = 0;
  plocal_var_48 = (int32_t *)0x0;
  local_var_40 = 0;
  puVar4 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar4 = 0;
  plocal_var_48 = puVar4;
  uVar2 = CoreEngineSystemCleanup(puVar4);
  local_var_38 = CONCAT44(local_var_38._4_4_,uVar2);
  *puVar4 = 0x74786554;
  *(int8_t *)(puVar4 + 1) = 0;
  local_var_40 = 4;
  SystemNetwork_Processor(puVar3,&plocal_var_50,puVar1,0);
  plocal_var_50 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar4);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_361ac0(int64_t param_1)
void function_361ac0(int64_t param_1)
{
  if ((*(byte *)(*(int64_t *)(param_1 + 0x18) + 0x2e8) & 0xb) == 0xb) {
    function_632d00(render_system_data_memory,*(int64_t *)(param_1 + 0x18) + 0xa0,param_1 + 0x70,0xff00ffff,0,0)
    ;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_361b10(uint64_t param_1)
void function_361b10(uint64_t param_1)
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
  strcpy_s(stack_array_c0,0x40,&system_data_64c8);
  DataDeserializer0(aplocal_var_78,&plocal_var_d8);
  local_var_20 = 0;
  local_var_f8 = 1;
  MathOptimizationEngine0(param_1,applocal_var_e8,aplocal_var_78);
  local_var_f8 = 0;
  applocal_var_e8[0] = aplocal_var_78;
  aplocal_var_78[0] = &system_state_ptr;
  plocal_var_d8 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_118);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_361c20(uint64_t *param_1)
void function_361c20(uint64_t *param_1)
{
  uint64_t *puVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  void *plocal_var_70;
  uint64_t *plocal_var_68;
  int32_t local_var_60;
  uint64_t local_var_58;
  uVar4 = 0xfffffffffffffffe;
  puVar3 = param_1;
  SystemCore_SyncController();
  *puVar3 = &processed_var_6864_ptr;
  puVar1 = puVar3 + 0xe;
  *puVar1 = &system_state_ptr;
  puVar3[0xf] = 0;
  *(int32_t *)(puVar3 + 0x10) = 0;
  *puVar1 = &system_data_buffer_ptr;
  puVar3[0x11] = 0;
  puVar3[0xf] = 0;
  *(int32_t *)(puVar3 + 0x10) = 0;
  plocal_var_70 = &system_data_buffer_ptr;
  local_var_58 = 0;
  plocal_var_68 = (uint64_t *)0x0;
  local_var_60 = 0;
  puVar3 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  plocal_var_68 = puVar3;
  uVar2 = CoreEngineSystemCleanup(puVar3);
  local_var_58 = CONCAT44(local_var_58._4_4_,uVar2);
  *puVar3 = 0x6f697463656c6553;
  *(int32_t *)(puVar3 + 1) = 0x6553206e;
  *(int16_t *)((int64_t)puVar3 + 0xc) = 0x74;
  local_var_60 = 0xd;
  SystemNetwork_Processor(param_1,&plocal_var_70,puVar1,0,uVar4);
  plocal_var_70 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar3);
}
int64_t function_361dd0(int64_t param_1,uint64_t param_2)
{
  *(uint64_t *)(param_1 + 0x70) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x78) != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x78) = 0;
  *(int32_t *)(param_1 + 0x88) = 0;
  *(uint64_t *)(param_1 + 0x70) = &system_state_ptr;
  UIComponent_Manager(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x98);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_361e60(uint64_t param_1,uint64_t param_2)
void function_361e60(uint64_t param_1,uint64_t param_2)
{
  uint64_t *puVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  void *plocal_var_70;
  uint64_t *plocal_var_68;
  int32_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_30;
  local_var_30 = 0x180361e8a;
  puVar4 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x98,8,3);
  uVar5 = 0xfffffffffffffffe;
  puVar3 = puVar4;
  SystemCore_SyncController(puVar4,param_2,param_1);
  *puVar3 = &processed_var_6864_ptr;
  puVar1 = puVar3 + 0xe;
  *puVar1 = &system_state_ptr;
  puVar3[0xf] = 0;
  *(int32_t *)(puVar3 + 0x10) = 0;
  *puVar1 = &system_data_buffer_ptr;
  puVar3[0x11] = 0;
  puVar3[0xf] = 0;
  *(int32_t *)(puVar3 + 0x10) = 0;
  plocal_var_70 = &system_data_buffer_ptr;
  local_var_58 = 0;
  plocal_var_68 = (uint64_t *)0x0;
  local_var_60 = 0;
  puVar3 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  plocal_var_68 = puVar3;
  uVar2 = CoreEngineSystemCleanup(puVar3);
  local_var_58 = CONCAT44(local_var_58._4_4_,uVar2);
  *puVar3 = 0x6f697463656c6553;
  *(int32_t *)(puVar3 + 1) = 0x6553206e;
  *(int16_t *)((int64_t)puVar3 + 0xc) = 0x74;
  local_var_60 = 0xd;
  SystemNetwork_Processor(puVar4,&plocal_var_70,puVar1,0,uVar5);
  plocal_var_70 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar3);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_361eb0(uint64_t param_1)
void function_361eb0(uint64_t param_1)
{
  int8_t stack_array_188 [32];
  int32_t local_var_168;
  void **applocal_var_160 [2];
  uint64_t local_var_150;
  void *plocal_var_148;
  int8_t *plocal_var_140;
  int32_t local_var_138;
  int8_t stack_array_130 [72];
  void *plocal_var_e8;
  int8_t *plocal_var_e0;
  int32_t local_var_d8;
  int8_t stack_array_d0 [72];
  void *aplocal_var_88 [11];
  int32_t local_var_30;
  uint64_t local_var_28;
  local_var_150 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  local_var_168 = 0;
  plocal_var_148 = &memory_allocator_3480_ptr;
  plocal_var_140 = stack_array_130;
  stack_array_130[0] = 0;
  local_var_138 = 0xd;
  strcpy_s(stack_array_130,0x40,&system_data_fc58);
  DataDeserializer0(aplocal_var_88,&plocal_var_148);
  local_var_30 = 0;
  local_var_168 = 1;
  MathOptimizationEngine0(param_1,applocal_var_160,aplocal_var_88);
  local_var_168 = 0;
  aplocal_var_88[0] = &system_state_ptr;
  plocal_var_148 = &system_state_ptr;
  plocal_var_e8 = &memory_allocator_3480_ptr;
  plocal_var_e0 = stack_array_d0;
  stack_array_d0[0] = 0;
  local_var_d8 = 5;
  applocal_var_160[0] = aplocal_var_88;
  strcpy_s(stack_array_d0,0x40,&system_data_fc50);
  DataDeserializer0(aplocal_var_88,&plocal_var_e8);
  local_var_30 = 0xb;
  local_var_168 = 2;
  MathOptimizationEngine0(param_1,applocal_var_160,aplocal_var_88);
  local_var_168 = 0;
  aplocal_var_88[0] = &system_state_ptr;
  plocal_var_e8 = &system_state_ptr;
  applocal_var_160[0] = aplocal_var_88;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_188);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_362040(uint64_t *param_1)
void function_362040(uint64_t *param_1)
{
  int32_t uVar1;
  int32_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  void *plocal_var_90;
  int32_t *plocal_var_88;
  int32_t local_var_80;
  uint64_t local_var_78;
  uVar4 = 0xfffffffffffffffe;
  puVar3 = param_1;
  SystemCore_SyncController();
  *puVar3 = &processed_var_7272_ptr;
  *(int16_t *)(puVar3 + 0xe) = 0x101;
  plocal_var_90 = &system_data_buffer_ptr;
  local_var_78 = 0;
  plocal_var_88 = (int32_t *)0x0;
  local_var_80 = 0;
  puVar2 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x17,0x13);
  *(int8_t *)puVar2 = 0;
  plocal_var_88 = puVar2;
  uVar1 = CoreEngineSystemCleanup(puVar2);
  local_var_78 = CONCAT44(local_var_78._4_4_,uVar1);
  *puVar2 = 0x70616e53;
  puVar2[1] = 0x72655420;
  puVar2[2] = 0x6e696172;
  puVar2[3] = 0x206f7420;
  puVar2[4] = 0x69746e45;
  *(int16_t *)(puVar2 + 5) = 0x7974;
  *(int8_t *)((int64_t)puVar2 + 0x16) = 0;
  local_var_80 = 0x16;
  SystemNetwork_Processor(param_1,&plocal_var_90,0,0xb,uVar4);
  plocal_var_90 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar2);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_362280(uint64_t param_1,uint64_t param_2)
void function_362280(uint64_t param_1,uint64_t param_2)
{
  int32_t uVar1;
  int32_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  void *plocal_var_90;
  int32_t *plocal_var_88;
  int32_t local_var_80;
  uint64_t local_var_78;
  uint64_t local_var_30;
  local_var_30 = 0x1803622a8;
  puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x78,8,3);
  uVar5 = 0xfffffffffffffffe;
  puVar4 = puVar3;
  SystemCore_SyncController(puVar3,param_2,param_1);
  *puVar4 = &processed_var_7272_ptr;
  *(int16_t *)(puVar4 + 0xe) = 0x101;
  plocal_var_90 = &system_data_buffer_ptr;
  local_var_78 = 0;
  plocal_var_88 = (int32_t *)0x0;
  local_var_80 = 0;
  puVar2 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x17,0x13);
  *(int8_t *)puVar2 = 0;
  plocal_var_88 = puVar2;
  uVar1 = CoreEngineSystemCleanup(puVar2);
  local_var_78 = CONCAT44(local_var_78._4_4_,uVar1);
  *puVar2 = 0x70616e53;
  puVar2[1] = 0x72655420;
  puVar2[2] = 0x6e696172;
  puVar2[3] = 0x206f7420;
  puVar2[4] = 0x69746e45;
  *(int16_t *)(puVar2 + 5) = 0x7974;
  *(int8_t *)((int64_t)puVar2 + 0x16) = 0;
  local_var_80 = 0x16;
  SystemNetwork_Processor(puVar3,&plocal_var_90,0,0xb,uVar5);
  plocal_var_90 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar2);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address