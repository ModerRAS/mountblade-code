#include "ultra_high_freq_fun_definitions.h"
/* 函数别名定义: DataStructureManager */
#define DataStructureManager DataStructureManager
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_01_part062.c - 2 个函数
// 函数: void GenericFunction_1800dfc20(uint64_t param_1,int64_t param_2,uint param_3)
void GenericFunction_1800dfc20(uint64_t param_1,int64_t param_2,uint param_3)
{
  int iVar1;
  void *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  void *puVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t extraout_XMM0_Qa;
  int8_t stack_array_3b8 [32];
  char acStack_398 [8];
  void **pplocal_var_390;
  uint64_t local_var_388;
  uint local_var_380;
  int16_t local_var_37c;
  int16_t local_var_37a;
  void *plocal_var_378;
  uint64_t local_var_370;
  uint64_t local_var_368;
  uint local_var_360;
  int64_t *plStack_358;
  void *plocal_var_350;
  int64_t lStack_348;
  int32_t local_var_340;
  uint64_t local_var_338;
  uint64_t local_var_330;
  uint64_t local_var_328;
  int64_t *plStack_320;
  uint64_t local_var_318;
  void **pplocal_var_310;
  uint64_t local_var_308;
  uint64_t local_var_300;
  uint64_t local_var_2f8;
  uint64_t local_var_2f0;
  void *plocal_var_2e8;
  uint *plocal_var_2e0;
  uint64_t local_var_2d8;
  uint stack_array_2d0 [2];
  int64_t *plStack_2c8;
  void *plocal_var_2c0;
  int64_t lStack_2b8;
  int32_t local_var_2b0;
  uint64_t local_var_2a8;
  uint64_t local_var_2a0;
  uint64_t local_var_298;
  int64_t *plStack_290;
  void *plocal_var_288;
  uint64_t local_var_280;
  int32_t local_var_278;
  int32_t local_var_274;
  uint local_var_270;
  uint64_t local_var_26c;
  uint64_t local_var_264;
  uint64_t local_var_25c;
  int32_t local_var_254;
  int32_t local_var_250;
  int32_t local_var_24c;
  void *plocal_var_248;
  int8_t *plocal_var_240;
  int32_t local_var_238;
  int8_t stack_array_230 [32];
  void *plocal_var_210;
  int8_t *plocal_var_208;
  int32_t local_var_200;
  int8_t stack_array_1f8 [32];
  void *plocal_var_1d8;
  int8_t *plocal_var_1d0;
  int32_t local_var_1c8;
  int8_t stack_array_1c0 [32];
  void *plocal_var_1a0;
  int8_t *plocal_var_198;
  int32_t local_var_190;
  int8_t stack_array_188 [32];
  void *plocal_var_168;
  int8_t *plocal_var_160;
  int32_t local_var_158;
  int8_t stack_array_150 [32];
  void *plocal_var_130;
  int8_t *plocal_var_128;
  int32_t local_var_120;
  int8_t stack_array_118 [32];
  void *plocal_var_f8;
  int8_t *plocal_var_f0;
  int32_t local_var_e8;
  int8_t stack_array_e0 [72];
  void *aplocal_var_98 [12];
  uint64_t local_var_38;
  local_var_2f0 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_3b8;
  DataStructure_4c0f0(param_2,aplocal_var_98);
  pplocal_var_310 = &plocal_var_f8;
  plocal_var_f8 = &memory_allocator_3480_ptr;
  plocal_var_f0 = stack_array_e0;
  local_var_e8 = 0;
  stack_array_e0[0] = 0;
  DataStructureManager0(&plocal_var_f8,&memory_allocator_3992_ptr);
  SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&plocal_var_f8);
  uVar9 = SystemData_Processor(acStack_398,&memory_allocator_3992_ptr);
  uVar9 = GenericFunction_1800d7010(uVar9,param_2,0,0);
  GenericFunction_1800debc0(uVar9,param_2,0);
  lVar6 = system_message_buffer;
  *(float *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1be0) =
       0.5 / (float)(int)*(float *)(param_2 + 0x11c20);
  *(float *)(*(int64_t *)(lVar6 + 0x1cd8) + 0x1be4) =
       0.5 / (float)(int)*(float *)(param_2 + 0x11c24);
  *(float *)(*(int64_t *)(lVar6 + 0x1cd8) + 0x1be8) = 1.0 / (float)*(int *)(param_2 + 0x3588);
  *(float *)(*(int64_t *)(lVar6 + 0x1cd8) + 0x1bec) = 1.0 / (float)*(int *)(param_2 + 0x358c);
  puVar2 = (void *)GenericFunction_1800bff50();
  param_3 = param_3 & *(uint *)(puVar2 + 0x1610);
  UltraHighFreq_DatabaseHandler1(*(int64_t *)(system_message_buffer + 0x1cd8),*(uint64_t *)(system_message_buffer + 0x1c88),
                *(int64_t *)(system_message_buffer + 0x1cd8) + 0x1be0,0x230);
  plocal_var_248 = &processed_var_672_ptr;
  plocal_var_240 = stack_array_230;
  stack_array_230[0] = 0;
  local_var_238 = 8;
  strcpy_s(stack_array_230,0x20,&processed_var_4056_ptr);
  local_var_308 = SystemCore_LoggingSystem0(puVar2,&plocal_var_248,1);
  plocal_var_248 = &system_state_ptr;
  plocal_var_210 = &processed_var_672_ptr;
  plocal_var_208 = stack_array_1f8;
  stack_array_1f8[0] = 0;
  local_var_200 = 8;
  strcpy_s(stack_array_1f8,0x20,&processed_var_4040_ptr);
  local_var_300 = SystemCore_LoggingSystem0(puVar2,&plocal_var_210,1);
  plocal_var_210 = &system_state_ptr;
  plocal_var_1d8 = &processed_var_672_ptr;
  plocal_var_1d0 = stack_array_1c0;
  stack_array_1c0[0] = 0;
  local_var_1c8 = 0xb;
  strcpy_s(stack_array_1c0,0x20,&processed_var_4088_ptr);
  local_var_318 = SystemCore_LoggingSystem0(puVar2,&plocal_var_1d8,1);
  plocal_var_1d8 = &system_state_ptr;
  plocal_var_1a0 = &processed_var_672_ptr;
  plocal_var_198 = stack_array_188;
  stack_array_188[0] = 0;
  local_var_190 = 0xb;
  strcpy_s(stack_array_188,0x20,&processed_var_4072_ptr);
  uVar3 = SystemCore_LoggingSystem0(puVar2,&plocal_var_1a0,1);
  plocal_var_1a0 = &system_state_ptr;
  plocal_var_168 = &processed_var_672_ptr;
  plocal_var_160 = stack_array_150;
  stack_array_150[0] = 0;
  local_var_158 = 0x12;
  strcpy_s(stack_array_150,0x20,&processed_var_4120_ptr);
  uVar4 = SystemCore_LoggingSystem0(puVar2,&plocal_var_168,1);
  plocal_var_168 = &system_state_ptr;
  plocal_var_130 = &processed_var_672_ptr;
  plocal_var_128 = stack_array_118;
  stack_array_118[0] = 0;
  local_var_120 = 10;
  strcpy_s(stack_array_118,0x20,&system_data_43f8);
  uVar5 = SystemCore_LoggingSystem0(puVar2,&plocal_var_130,1);
  plocal_var_130 = &system_state_ptr;
  plocal_var_288 = &processed_var_672_ptr;
  local_var_280 = &local_var_270;
  local_var_270 = local_var_270 & 0xffffff00;
  local_var_278 = 0x12;
  strcpy_s(&local_var_270,0x20,&system_data_4438);
  pplocal_var_310 = (void **)SystemCore_LoggingSystem0(puVar2,&plocal_var_288,1);
  plocal_var_288 = &system_state_ptr;
  plocal_var_2e8 = &processed_var_672_ptr;
  plocal_var_2e0 = stack_array_2d0;
  stack_array_2d0[0] = stack_array_2d0[0] & 0xffffff00;
  local_var_2d8 = CONCAT44(local_var_2d8._4_4_,0x13);
  strcpy_s(stack_array_2d0,0x20,&system_data_4420);
  local_var_2f8 = SystemCore_LoggingSystem0(puVar2,&plocal_var_2e8,1);
  plocal_var_2e8 = &system_state_ptr;
  local_var_278 = 0x10000ff;
  local_var_26c = 0;
  local_var_264 = 0;
  local_var_25c = 0;
  local_var_254 = 0;
  local_var_250 = 0x400;
  local_var_274 = 0x4000300;
  local_var_280 = (uint *)CONCAT17(local_var_280._7_1_,0x200060101);
  DataStructure_9d000(*(uint64_t *)(system_message_buffer + 0x1cd8),4);
  local_var_24c = 1;
  lVar6 = SystemOptimizer(param_2);
  local_var_26c = CONCAT44(local_var_26c._4_4_,*(int32_t *)(lVar6 + 0x324));
  lVar6 = SystemLog_Manager(param_2);
  local_var_270 = *(uint *)(lVar6 + 0x324);
  local_var_37c = 4;
  plStack_358 = (int64_t *)0x0;
  plocal_var_350 = &system_data_buffer_ptr;
  local_var_338 = 0;
  lStack_348 = 0;
  local_var_340 = 0;
  plStack_320 = (int64_t *)0x0;
  local_var_368 = CONCAT26(local_var_37a,CONCAT24(4,param_3));
  local_var_360 = 2;
  local_var_330 = 0;
  local_var_328 = 0;
  uVar9 = *(uint64_t *)(puVar2 + 0x15b8);
  pplocal_var_390 = &plocal_var_2e8;
  stack_array_2d0[0] = 2;
  plStack_2c8 = (int64_t *)0x0;
  local_var_388 = uVar3;
  local_var_380 = param_3;
  plocal_var_378 = puVar2;
  local_var_370 = uVar3;
  plocal_var_2e8 = puVar2;
  plocal_var_2e0 = (uint *)uVar3;
  local_var_2d8 = local_var_368;
  CoreEngineDataTransformer(&plocal_var_2c0,&plocal_var_350);
  local_var_2a0 = local_var_330;
  local_var_298 = local_var_328;
  plStack_290 = plStack_320;
  if (plStack_320 != (int64_t *)0x0) {
    (**(code **)(*plStack_320 + 0x28))();
  }
  puVar7 = (void *)UIRenderingEngine(uVar9,param_2,&plocal_var_2e8,acStack_398);
  if (acStack_398[0] == '\0') {
    local_var_280 = (uint *)CONCAT17(1,(uint8_t)local_var_280);
    plocal_var_288 = puVar7;
    InputSystem_Handler(*(uint64_t *)(system_message_buffer + 0x1cd8),&plocal_var_288);
    lVar6 = system_message_buffer;
    lVar8 = strnlen(&processed_var_4224_ptr,0x3f);
    strncpy(lVar6 + 0x1ce0,&processed_var_4224_ptr,lVar8);
    *(int8_t *)(lVar8 + 0x1ce0 + lVar6) = 0;
    DataStructure_9e110(*(uint64_t *)(system_message_buffer + 0x1cd8));
  }
  local_var_388 = local_var_318;
  local_var_37c = 4;
  plStack_2c8 = (int64_t *)0x0;
  pplocal_var_390 = &plocal_var_2c0;
  plocal_var_2c0 = &system_data_buffer_ptr;
  local_var_2a8 = 0;
  lStack_2b8 = 0;
  local_var_2b0 = 0;
  plStack_290 = (int64_t *)0x0;
  local_var_2d8 = CONCAT26(local_var_37a,CONCAT24(4,param_3));
  plocal_var_2e0 = (uint *)local_var_318;
  stack_array_2d0[0] = 2;
  local_var_2a0 = 0;
  local_var_298 = 0;
  local_var_380 = param_3;
  plocal_var_2e8 = puVar2;
  GenericFunction_1800e10e0(&plocal_var_378,&plocal_var_2e8);
  if (plStack_290 != (int64_t *)0x0) {
    (**(code **)(*plStack_290 + 0x38))();
  }
  pplocal_var_390 = &plocal_var_2c0;
  plocal_var_2c0 = &system_data_buffer_ptr;
  if (lStack_2b8 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_2b8 = 0;
  local_var_2a8 = local_var_2a8 & 0xffffffff00000000;
  plocal_var_2c0 = &system_state_ptr;
  if (plStack_2c8 != (int64_t *)0x0) {
    (**(code **)(*plStack_2c8 + 0x38))();
  }
  uVar9 = *(uint64_t *)(puVar2 + 0x15b8);
  pplocal_var_390 = &plocal_var_2e8;
  plocal_var_2e8 = plocal_var_378;
  plocal_var_2e0 = (uint *)local_var_370;
  local_var_2d8 = local_var_368;
  stack_array_2d0[0] = local_var_360;
  plStack_2c8 = plStack_358;
  if (plStack_358 != (int64_t *)0x0) {
    (**(code **)(*plStack_358 + 0x28))();
  }
  CoreEngineDataTransformer(&plocal_var_2c0,&plocal_var_350);
  local_var_2a0 = local_var_330;
  local_var_298 = local_var_328;
  plStack_290 = plStack_320;
  if (plStack_320 != (int64_t *)0x0) {
    (**(code **)(*plStack_320 + 0x28))();
  }
  puVar7 = (void *)UIRenderingEngine(uVar9,param_2,&plocal_var_2e8,acStack_398);
  if (acStack_398[0] == '\0') {
    local_var_280 = (uint *)CONCAT17(2,(uint8_t)local_var_280);
    plocal_var_288 = puVar7;
    InputSystem_Handler(*(uint64_t *)(system_message_buffer + 0x1cd8),&plocal_var_288);
    lVar6 = system_message_buffer;
    lVar8 = strnlen(&system_handler3_ptr,0x3f);
    strncpy(lVar6 + 0x1ce0,&system_handler3_ptr,lVar8);
    *(int8_t *)(lVar8 + 0x1ce0 + lVar6) = 0;
    DataStructure_9e110(*(uint64_t *)(system_message_buffer + 0x1cd8));
  }
  local_var_388 = local_var_308;
  local_var_37c = 4;
  plStack_2c8 = (int64_t *)0x0;
  pplocal_var_390 = &plocal_var_2c0;
  plocal_var_2c0 = &system_data_buffer_ptr;
  local_var_2a8 = 0;
  lStack_2b8 = 0;
  local_var_2b0 = 0;
  plStack_290 = (int64_t *)0x0;
  local_var_2d8 = CONCAT26(local_var_37a,CONCAT24(4,param_3));
  plocal_var_2e0 = (uint *)local_var_308;
  stack_array_2d0[0] = 2;
  local_var_2a0 = 0;
  local_var_298 = 0;
  local_var_380 = param_3;
  plocal_var_2e8 = puVar2;
  GenericFunction_1800e10e0(&plocal_var_378,&plocal_var_2e8);
  if (plStack_290 != (int64_t *)0x0) {
    (**(code **)(*plStack_290 + 0x38))();
  }
  pplocal_var_390 = &plocal_var_2c0;
  plocal_var_2c0 = &system_data_buffer_ptr;
  if (lStack_2b8 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_2b8 = 0;
  local_var_2a8 = local_var_2a8 & 0xffffffff00000000;
  plocal_var_2c0 = &system_state_ptr;
  if (plStack_2c8 != (int64_t *)0x0) {
    (**(code **)(*plStack_2c8 + 0x38))();
  }
  uVar9 = *(uint64_t *)(puVar2 + 0x15b8);
  pplocal_var_390 = &plocal_var_2e8;
  plocal_var_2e8 = plocal_var_378;
  plocal_var_2e0 = (uint *)local_var_370;
  local_var_2d8 = local_var_368;
  stack_array_2d0[0] = local_var_360;
  plStack_2c8 = plStack_358;
  if (plStack_358 != (int64_t *)0x0) {
    (**(code **)(*plStack_358 + 0x28))();
  }
  CoreEngineDataTransformer(&plocal_var_2c0,&plocal_var_350);
  local_var_2a0 = local_var_330;
  local_var_298 = local_var_328;
  plStack_290 = plStack_320;
  if (plStack_320 != (int64_t *)0x0) {
    (**(code **)(*plStack_320 + 0x28))();
  }
  puVar7 = (void *)UIRenderingEngine(uVar9,param_2,&plocal_var_2e8,acStack_398);
  if (acStack_398[0] == '\0') {
    local_var_280 = (uint *)CONCAT17(6,(uint8_t)local_var_280);
    plocal_var_288 = puVar7;
    InputSystem_Handler(*(uint64_t *)(system_message_buffer + 0x1cd8),&plocal_var_288);
    lVar6 = system_message_buffer;
    lVar8 = strnlen(&processed_var_4280_ptr,0x3f);
    strncpy(lVar6 + 0x1ce0,&processed_var_4280_ptr,lVar8);
    *(int8_t *)(lVar8 + 0x1ce0 + lVar6) = 0;
    DataStructure_9e110(*(uint64_t *)(system_message_buffer + 0x1cd8));
  }
  local_var_388 = local_var_300;
  local_var_37c = 4;
  plStack_2c8 = (int64_t *)0x0;
  pplocal_var_390 = &plocal_var_2c0;
  plocal_var_2c0 = &system_data_buffer_ptr;
  local_var_2a8 = 0;
  lStack_2b8 = 0;
  local_var_2b0 = 0;
  plStack_290 = (int64_t *)0x0;
  local_var_2d8 = CONCAT26(local_var_37a,CONCAT24(4,param_3));
  plocal_var_2e0 = (uint *)local_var_300;
  stack_array_2d0[0] = 2;
  local_var_2a0 = 0;
  local_var_298 = 0;
  local_var_380 = param_3;
  plocal_var_2e8 = puVar2;
  GenericFunction_1800e10e0(&plocal_var_378,&plocal_var_2e8);
  if (plStack_290 != (int64_t *)0x0) {
    (**(code **)(*plStack_290 + 0x38))();
  }
  pplocal_var_390 = &plocal_var_2c0;
  plocal_var_2c0 = &system_data_buffer_ptr;
  if (lStack_2b8 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_2b8 = 0;
  local_var_2a8 = local_var_2a8 & 0xffffffff00000000;
  plocal_var_2c0 = &system_state_ptr;
  if (plStack_2c8 != (int64_t *)0x0) {
    (**(code **)(*plStack_2c8 + 0x38))();
  }
  uVar9 = *(uint64_t *)(puVar2 + 0x15b8);
  pplocal_var_390 = &plocal_var_2e8;
  plocal_var_2e8 = plocal_var_378;
  plocal_var_2e0 = (uint *)local_var_370;
  local_var_2d8 = local_var_368;
  stack_array_2d0[0] = local_var_360;
  plStack_2c8 = plStack_358;
  if (plStack_358 != (int64_t *)0x0) {
    (**(code **)(*plStack_358 + 0x28))();
  }
  CoreEngineDataTransformer(&plocal_var_2c0,&plocal_var_350);
  local_var_2a0 = local_var_330;
  local_var_298 = local_var_328;
  plStack_290 = plStack_320;
  if (plStack_320 != (int64_t *)0x0) {
    (**(code **)(*plStack_320 + 0x28))();
  }
  puVar7 = (void *)UIRenderingEngine(uVar9,param_2,&plocal_var_2e8,acStack_398);
  if (acStack_398[0] == '\0') {
    local_var_280 = (uint *)CONCAT17(8,(uint8_t)local_var_280);
    plocal_var_288 = puVar7;
    InputSystem_Handler(*(uint64_t *)(system_message_buffer + 0x1cd8),&plocal_var_288);
    lVar6 = system_message_buffer;
    lVar8 = strnlen(&processed_var_4256_ptr,0x3f);
    strncpy(lVar6 + 0x1ce0,&processed_var_4256_ptr,lVar8);
    *(int8_t *)(lVar8 + 0x1ce0 + lVar6) = 0;
    DataStructure_9e110(*(uint64_t *)(system_message_buffer + 0x1cd8));
  }
  local_var_37c = 4;
  plStack_2c8 = (int64_t *)0x0;
  pplocal_var_390 = &plocal_var_2c0;
  plocal_var_2c0 = &system_data_buffer_ptr;
  local_var_2a8 = 0;
  lStack_2b8 = 0;
  local_var_2b0 = 0;
  plStack_290 = (int64_t *)0x0;
  local_var_2d8 = CONCAT26(local_var_37a,CONCAT24(4,param_3));
  stack_array_2d0[0] = 2;
  local_var_2a0 = 0;
  local_var_298 = 0;
  local_var_388 = uVar4;
  local_var_380 = param_3;
  plocal_var_2e8 = puVar2;
  plocal_var_2e0 = (uint *)uVar4;
  GenericFunction_1800e10e0(&plocal_var_378,&plocal_var_2e8);
  if (plStack_290 != (int64_t *)0x0) {
    (**(code **)(*plStack_290 + 0x38))();
  }
  pplocal_var_390 = &plocal_var_2c0;
  plocal_var_2c0 = &system_data_buffer_ptr;
  if (lStack_2b8 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_2b8 = 0;
  local_var_2a8 = local_var_2a8 & 0xffffffff00000000;
  plocal_var_2c0 = &system_state_ptr;
  if (plStack_2c8 != (int64_t *)0x0) {
    (**(code **)(*plStack_2c8 + 0x38))();
  }
  uVar9 = *(uint64_t *)(puVar2 + 0x15b8);
  pplocal_var_390 = &plocal_var_2e8;
  plocal_var_2e8 = plocal_var_378;
  plocal_var_2e0 = (uint *)local_var_370;
  local_var_2d8 = local_var_368;
  stack_array_2d0[0] = local_var_360;
  plStack_2c8 = plStack_358;
  if (plStack_358 != (int64_t *)0x0) {
    (**(code **)(*plStack_358 + 0x28))();
  }
  CoreEngineDataTransformer(&plocal_var_2c0,&plocal_var_350);
  local_var_2a0 = local_var_330;
  local_var_298 = local_var_328;
  plStack_290 = plStack_320;
  if (plStack_320 != (int64_t *)0x0) {
    (**(code **)(*plStack_320 + 0x28))();
  }
  puVar7 = (void *)UIRenderingEngine(uVar9,param_2,&plocal_var_2e8,acStack_398);
  if (acStack_398[0] == '\0') {
    local_var_280 = (uint *)CONCAT17(7,(uint8_t)local_var_280);
    plocal_var_288 = puVar7;
    InputSystem_Handler(*(uint64_t *)(system_message_buffer + 0x1cd8),&plocal_var_288);
    lVar6 = system_message_buffer;
    lVar8 = strnlen(&processed_var_4328_ptr,0x3f);
    strncpy(lVar6 + 0x1ce0,&processed_var_4328_ptr,lVar8);
    *(int8_t *)(lVar8 + 0x1ce0 + lVar6) = 0;
    DataStructure_9e110(*(uint64_t *)(system_message_buffer + 0x1cd8));
  }
  local_var_37c = 4;
  plStack_2c8 = (int64_t *)0x0;
  pplocal_var_390 = &plocal_var_2c0;
  plocal_var_2c0 = &system_data_buffer_ptr;
  local_var_2a8 = 0;
  lStack_2b8 = 0;
  local_var_2b0 = 0;
  plStack_290 = (int64_t *)0x0;
  local_var_2d8 = CONCAT26(local_var_37a,CONCAT24(4,param_3));
  stack_array_2d0[0] = 2;
  local_var_2a0 = 0;
  local_var_298 = 0;
  local_var_388 = uVar4;
  local_var_380 = param_3;
  plocal_var_2e8 = puVar2;
  plocal_var_2e0 = (uint *)uVar4;
  GenericFunction_1800e10e0(&plocal_var_378,&plocal_var_2e8);
  if (plStack_290 != (int64_t *)0x0) {
    (**(code **)(*plStack_290 + 0x38))();
  }
  pplocal_var_390 = &plocal_var_2c0;
  plocal_var_2c0 = &system_data_buffer_ptr;
  if (lStack_2b8 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_2b8 = 0;
  local_var_2a8 = local_var_2a8 & 0xffffffff00000000;
  plocal_var_2c0 = &system_state_ptr;
  if (plStack_2c8 != (int64_t *)0x0) {
    (**(code **)(*plStack_2c8 + 0x38))();
  }
  uVar9 = *(uint64_t *)(puVar2 + 0x15b8);
  pplocal_var_390 = &plocal_var_2e8;
  plocal_var_2e8 = plocal_var_378;
  plocal_var_2e0 = (uint *)local_var_370;
  local_var_2d8 = local_var_368;
  stack_array_2d0[0] = local_var_360;
  plStack_2c8 = plStack_358;
  if (plStack_358 != (int64_t *)0x0) {
    (**(code **)(*plStack_358 + 0x28))();
  }
  CoreEngineDataTransformer(&plocal_var_2c0,&plocal_var_350);
  local_var_2a0 = local_var_330;
  local_var_298 = local_var_328;
  plStack_290 = plStack_320;
  if (plStack_320 != (int64_t *)0x0) {
    (**(code **)(*plStack_320 + 0x28))();
  }
  puVar7 = (void *)UIRenderingEngine(uVar9,param_2,&plocal_var_2e8,acStack_398);
  if (acStack_398[0] == '\0') {
    local_var_280 = (uint *)CONCAT17(9,(uint8_t)local_var_280);
    plocal_var_288 = puVar7;
    InputSystem_Handler(*(uint64_t *)(system_message_buffer + 0x1cd8),&plocal_var_288);
    DataStructure_9e110(*(uint64_t *)(system_message_buffer + 0x1cd8));
  }
  local_var_388 = uVar5 | local_var_318;
  local_var_37c = 4;
  plStack_2c8 = (int64_t *)0x0;
  pplocal_var_390 = &plocal_var_2c0;
  plocal_var_2c0 = &system_data_buffer_ptr;
  local_var_2a8 = 0;
  lStack_2b8 = 0;
  local_var_2b0 = 0;
  plStack_290 = (int64_t *)0x0;
  local_var_2d8 = CONCAT26(local_var_37a,CONCAT24(4,param_3));
  stack_array_2d0[0] = 2;
  local_var_2a0 = 0;
  local_var_298 = 0;
  local_var_380 = param_3;
  plocal_var_2e8 = puVar2;
  plocal_var_2e0 = (uint *)local_var_388;
  GenericFunction_1800e10e0(&plocal_var_378,&plocal_var_2e8);
  if (plStack_290 != (int64_t *)0x0) {
    (**(code **)(*plStack_290 + 0x38))();
  }
  pplocal_var_390 = &plocal_var_2c0;
  plocal_var_2c0 = &system_data_buffer_ptr;
  if (lStack_2b8 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_2b8 = 0;
  local_var_2a8 = local_var_2a8 & 0xffffffff00000000;
  plocal_var_2c0 = &system_state_ptr;
  if (plStack_2c8 != (int64_t *)0x0) {
    (**(code **)(*plStack_2c8 + 0x38))();
  }
  uVar9 = *(uint64_t *)(puVar2 + 0x15b8);
  pplocal_var_390 = &plocal_var_2e8;
  plocal_var_2e8 = plocal_var_378;
  plocal_var_2e0 = (uint *)local_var_370;
  local_var_2d8 = local_var_368;
  stack_array_2d0[0] = local_var_360;
  plStack_2c8 = plStack_358;
  if (plStack_358 != (int64_t *)0x0) {
    (**(code **)(*plStack_358 + 0x28))();
  }
  CoreEngineDataTransformer(&plocal_var_2c0,&plocal_var_350);
  local_var_2a0 = local_var_330;
  local_var_298 = local_var_328;
  plStack_290 = plStack_320;
  if (plStack_320 != (int64_t *)0x0) {
    (**(code **)(*plStack_320 + 0x28))();
  }
  puVar7 = (void *)UIRenderingEngine(uVar9,param_2,&plocal_var_2e8,acStack_398);
  if (acStack_398[0] == '\0') {
    local_var_280 = (uint *)CONCAT17(3,(uint8_t)local_var_280);
    plocal_var_288 = puVar7;
    InputSystem_Handler(*(uint64_t *)(system_message_buffer + 0x1cd8),&plocal_var_288);
    lVar6 = system_message_buffer;
    lVar8 = strnlen(&processed_var_4304_ptr,0x3f);
    strncpy(lVar6 + 0x1ce0,&processed_var_4304_ptr,lVar8);
    *(int8_t *)(lVar8 + 0x1ce0 + lVar6) = 0;
    DataStructure_9e110(*(uint64_t *)(system_message_buffer + 0x1cd8));
  }
  if ((*(int64_t *)(param_2 + 0x99b8) == 0) ||
     (iVar1 = (int)local_var_2f8, (*(uint *)(*(int64_t *)(param_2 + 0x99b8) + 0x98) & 0x2000) == 0)) {
    iVar1 = (int)pplocal_var_310;
  }
  local_var_388 = (uint64_t)iVar1;
  local_var_37c = 4;
  plStack_2c8 = (int64_t *)0x0;
  pplocal_var_390 = &plocal_var_2c0;
  plocal_var_2c0 = &system_data_buffer_ptr;
  local_var_2a8 = 0;
  lStack_2b8 = 0;
  local_var_2b0 = 0;
  plStack_290 = (int64_t *)0x0;
  local_var_2d8 = CONCAT26(local_var_37a,CONCAT24(4,param_3));
  stack_array_2d0[0] = 2;
  local_var_2a0 = 0;
  local_var_298 = 0;
  local_var_380 = param_3;
  plocal_var_2e8 = puVar2;
  plocal_var_2e0 = (uint *)local_var_388;
  GenericFunction_1800e10e0(&plocal_var_378,&plocal_var_2e8);
  if (plStack_290 != (int64_t *)0x0) {
    (**(code **)(*plStack_290 + 0x38))();
  }
  pplocal_var_390 = &plocal_var_2c0;
  plocal_var_2c0 = &system_data_buffer_ptr;
  if (lStack_2b8 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_2b8 = 0;
  local_var_2a8 = local_var_2a8 & 0xffffffff00000000;
  plocal_var_2c0 = &system_state_ptr;
  if (plStack_2c8 != (int64_t *)0x0) {
    (**(code **)(*plStack_2c8 + 0x38))();
  }
  uVar9 = *(uint64_t *)(puVar2 + 0x15b8);
  pplocal_var_390 = &plocal_var_2e8;
  plocal_var_2e8 = plocal_var_378;
  plocal_var_2e0 = (uint *)local_var_370;
  local_var_2d8 = local_var_368;
  stack_array_2d0[0] = local_var_360;
  plStack_2c8 = plStack_358;
  if (plStack_358 != (int64_t *)0x0) {
    (**(code **)(*plStack_358 + 0x28))();
  }
  CoreEngineDataTransformer(&plocal_var_2c0,&plocal_var_350);
  local_var_2a0 = local_var_330;
  local_var_298 = local_var_328;
  plStack_290 = plStack_320;
  if (plStack_320 != (int64_t *)0x0) {
    (**(code **)(*plStack_320 + 0x28))();
  }
  puVar2 = (void *)UIRenderingEngine(uVar9,param_2,&plocal_var_2e8,acStack_398);
  uVar9 = extraout_XMM0_Qa;
  if (acStack_398[0] == '\0') {
    local_var_280 = (uint *)CONCAT17(5,(uint8_t)local_var_280);
    plocal_var_288 = puVar2;
    InputSystem_Handler(*(uint64_t *)(system_message_buffer + 0x1cd8),&plocal_var_288);
    lVar6 = system_message_buffer;
    lVar8 = strnlen(&processed_var_4384_ptr,0x3f);
    strncpy(lVar6 + 0x1ce0,&processed_var_4384_ptr,lVar8);
    *(int8_t *)(lVar8 + 0x1ce0 + lVar6) = 0;
    uVar9 = DataStructure_9e110(*(uint64_t *)(system_message_buffer + 0x1cd8));
  }
  GenericFunction_1800d7470(uVar9,param_2);
  *(int8_t *)(param_2 + 0x124c6) = 1;
  if (plStack_320 != (int64_t *)0x0) {
    (**(code **)(*plStack_320 + 0x38))();
  }
  pplocal_var_390 = &plocal_var_350;
  plocal_var_350 = &system_data_buffer_ptr;
  if (lStack_348 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_348 = 0;
  local_var_338 = local_var_338 & 0xffffffff00000000;
  plocal_var_350 = &system_state_ptr;
  if (plStack_358 != (int64_t *)0x0) {
    (**(code **)(*plStack_358 + 0x38))();
  }
  system_system_data_memory = system_system_data_memory + -1;
  (**(code **)(*system_system_data_memory + 0x20))();
  SystemCore_Synchronizer(&plocal_var_f8);
  aplocal_var_98[0] = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_3b8);
}
uint64_t *
GenericFunction_1800e10e0(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  int64_t *plVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uVar6 = 0xfffffffffffffffe;
  *param_1 = *param_2;
  uVar3 = *(int32_t *)((int64_t)param_2 + 0xc);
  uVar4 = *(int32_t *)(param_2 + 2);
  uVar5 = *(int32_t *)((int64_t)param_2 + 0x14);
  *(int32_t *)(param_1 + 1) = *(int32_t *)(param_2 + 1);
  *(int32_t *)((int64_t)param_1 + 0xc) = uVar3;
  *(int32_t *)(param_1 + 2) = uVar4;
  *(int32_t *)((int64_t)param_1 + 0x14) = uVar5;
  *(int32_t *)(param_1 + 3) = *(int32_t *)(param_2 + 3);
  uVar1 = param_2[4];
  param_2[4] = 0;
  plVar2 = (int64_t *)param_1[4];
  param_1[4] = uVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  SystemScheduler(param_1 + 5,param_2 + 5,param_3,param_4,uVar6);
  uVar3 = *(int32_t *)((int64_t)param_2 + 0x4c);
  uVar4 = *(int32_t *)(param_2 + 10);
  uVar5 = *(int32_t *)((int64_t)param_2 + 0x54);
  *(int32_t *)(param_1 + 9) = *(int32_t *)(param_2 + 9);
  *(int32_t *)((int64_t)param_1 + 0x4c) = uVar3;
  *(int32_t *)(param_1 + 10) = uVar4;
  *(int32_t *)((int64_t)param_1 + 0x54) = uVar5;
  uVar1 = param_2[0xb];
  param_2[0xb] = 0;
  plVar2 = (int64_t *)param_1[0xb];
  param_1[0xb] = uVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1800e1190(uint64_t param_1,int64_t param_2)
void GenericFunction_1800e1190(uint64_t param_1,int64_t param_2)
{
  int8_t uVar1;
  int16_t uVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  char cVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int iVar11;
  uint uVar12;
  int8_t astack_special_x_10 [8];
  uint64_t uVar13;
  lVar6 = system_message_buffer;
  uVar13 = 0xfffffffffffffffe;
  plVar3 = *(int64_t **)(system_message_buffer + 0x1cd8);
  plVar9 = *(int64_t **)(*(int64_t *)(param_2 + 0x12498) + 0x1d8);
  plVar10 = (int64_t *)0x0;
  if (plVar9 == (int64_t *)0x0) {
    plVar9 = (int64_t *)0x0;
  }
  else {
    if (system_main_module_state != 0) {
      *(int64_t *)(*(int64_t *)(param_2 + 0x12498) + 0x340) =
           (int64_t)*(int *)(system_main_module_state + 0x224);
    }
    if (*plVar9 != 0) {
      (**(code **)(*plVar3 + 0x70))(plVar3,*plVar9,1);
      lVar6 = system_message_buffer;
    }
  }
  plVar3[0x1077] = (int64_t)plVar9;
  plVar3 = *(int64_t **)(lVar6 + 0x1cd8);
  lVar6 = SystemLog_Manager(param_2);
  plVar9 = plVar10;
  if (*(int64_t *)(lVar6 + 0x1e0) != 0) {
    if (system_main_module_state != 0) {
      *(int64_t *)(lVar6 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    }
    plVar9 = (int64_t *)(*(int64_t *)(lVar6 + 0x1e0) + 0x10);
    if ((plVar9 != (int64_t *)0x0) && (*plVar9 != 0)) {
      (**(code **)(*plVar3 + 0x70))(plVar3,*plVar9,4);
    }
  }
  plVar3[0x107e] = (int64_t)plVar9;
  SystemCore_ProcessorEx(*(uint64_t *)(system_message_buffer + 0x1cd8),1);
  UtilitiesSystem_MathCalculator(*(uint64_t *)(system_message_buffer + 0x1cd8),1,0,0x3f800000,0,0,uVar13);
  SystemData_Processor(astack_special_x_10,&processed_var_4360_ptr);
  while (iVar11 = (int)plVar10, (uint64_t)(int64_t)iVar11 < (uint64_t)*(uint *)(param_2 + 0x2480)
        ) {
    lVar6 = *(int64_t *)
             (*(int64_t *)(param_2 + 0x2488 + ((uint64_t)plVar10 >> 0xb) * 8) + 0x10 +
             (uint64_t)(uint)(iVar11 + (int)((uint64_t)plVar10 >> 0xb) * -0x800) * 0x18);
    cVar5 = *(char *)(lVar6 + 0x330);
    if (cVar5 != '\x03') {
      uVar1 = *(int8_t *)(lVar6 + 0xc0);
      uVar13 = *(uint64_t *)(lVar6 + 0x90);
      uVar2 = *(int16_t *)(lVar6 + 0x98);
      uVar4 = *(uint64_t *)(lVar6 + 0x88);
      if (cVar5 == '\x02') {
        *(int16_t *)(lVar6 + 0x90) = 0x100;
        cVar5 = Function_02b4707c(param_2);
        *(char *)(lVar6 + 0x92) = (cVar5 == '\0') + '\x03';
      }
      else if (cVar5 == '\x01') {
        *(int16_t *)(lVar6 + 0x90) = 0x100;
        *(int8_t *)(lVar6 + 0x92) = 7;
      }
      *(int8_t *)(lVar6 + 0xc0) = 0;
      *(int32_t *)(lVar6 + 0xc4) = 1;
      *(int32_t *)(lVar6 + 0xa4) = *(int32_t *)(*(int64_t *)(param_2 + 0x12498) + 0x324);
      lVar7 = SystemLog_Manager(param_2);
      *(int32_t *)(lVar6 + 0xa0) = *(int32_t *)(lVar7 + 0x324);
      CoreEngine_0E8640(param_1,lVar6);
      *(int8_t *)(lVar6 + 0xc0) = uVar1;
      *(uint64_t *)(lVar6 + 0x90) = uVar13;
      *(int16_t *)(lVar6 + 0x98) = uVar2;
      *(uint64_t *)(lVar6 + 0x88) = uVar4;
    }
    plVar10 = (int64_t *)(uint64_t)(iVar11 + 1);
  }
  for (uVar12 = 0; (uint64_t)(int64_t)(int)uVar12 < (uint64_t)*(uint *)(param_2 + 0x2480);
      uVar12 = uVar12 + 1) {
    lVar6 = (uint64_t)(uVar12 & 0x7ff) * 0x18;
    lVar7 = *(int64_t *)
             (*(int64_t *)(param_2 + 0x2488 + (uint64_t)(uVar12 >> 0xb) * 8) + 0x10 + lVar6);
    if ((byte)(*(char *)(lVar7 + 0x330) - 2U) < 2) {
      uVar1 = *(int8_t *)(lVar7 + 0xc0);
      uVar13 = *(uint64_t *)(lVar7 + 0x90);
      uVar2 = *(int16_t *)(lVar7 + 0x98);
      uVar4 = *(uint64_t *)(lVar7 + 0x88);
      iVar11 = *(int *)(system_system_data_memory + 0xa10);
      *(int16_t *)(lVar7 + 0x90) = 0x100;
      if (iVar11 == 0) {
        *(int8_t *)(lVar7 + 0x92) = 3;
      }
      else {
        *(int8_t *)(lVar7 + 0x92) = 6;
      }
      *(int8_t *)(lVar7 + 0xc0) = 0;
      *(int32_t *)(lVar7 + 0x21c) = 1;
      *(int32_t *)(lVar7 + 0xc4) = 1;
      *(int32_t *)(lVar7 + 0xa4) = *(int32_t *)(*(int64_t *)(param_2 + 0x12498) + 0x324);
      lVar8 = SystemLog_Manager(param_2);
      *(int32_t *)(lVar7 + 0xa0) = *(int32_t *)(lVar8 + 0x324);
      CoreEngine_0E8640(param_1,*(uint64_t *)
                             (*(int64_t *)(param_2 + 0x2488 + (uint64_t)(uVar12 >> 0xb) * 8) +
                              0x10 + lVar6));
      *(int8_t *)(lVar7 + 0xc0) = uVar1;
      *(uint64_t *)(lVar7 + 0x90) = uVar13;
      *(int16_t *)(lVar7 + 0x98) = uVar2;
      *(uint64_t *)(lVar7 + 0x88) = uVar4;
      *(int32_t *)(lVar7 + 0x21c) = 0;
    }
  }
  system_system_data_memory = system_system_data_memory + -1;
// WARNING: Could not recover jumptable at 0x0001800e152a. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*system_system_data_memory + 0x20))();
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address