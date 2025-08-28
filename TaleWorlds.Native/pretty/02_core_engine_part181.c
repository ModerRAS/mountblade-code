#include "ultra_high_freq_fun_definitions.h"
/* 函数别名定义: DataEncryptionHandler */
#define DataEncryptionHandler DataEncryptionHandler
/* 函数别名定义: DataStructureManager */
#define DataStructureManager DataStructureManager
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part181.c - 2 个函数
// 函数: void function_166dd0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4)
void function_166dd0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4)
{
  uint64_t *puVar1;
  int32_t *puVar2;
  uint uVar3;
  void *puVar4;
  int8_t stack_array_3d8 [32];
  void **pplocal_var_3b8;
  int32_t local_var_3b0;
  void *plocal_var_3a8;
  byte *pbStack_3a0;
  int iStack_398;
  int32_t local_var_390;
  void *plocal_var_388;
  void *plocal_var_380;
  int32_t local_var_370;
  void *plocal_var_368;
  void *plocal_var_360;
  int32_t local_var_358;
  int32_t local_var_350;
  void *plocal_var_348;
  void *plocal_var_340;
  int32_t local_var_330;
  uint64_t local_var_328;
  uint64_t local_var_320;
  uint64_t local_var_318;
  uint64_t local_var_310;
  uint64_t local_var_308;
  uint64_t local_var_300;
  uint64_t local_var_2f8;
  uint64_t local_var_2f0;
  uint64_t local_var_2e8;
  uint64_t local_var_2e0;
  uint64_t local_var_2d8;
  uint64_t local_var_2d0;
  uint64_t local_var_2c8;
  uint64_t local_var_2c0;
  uint64_t local_var_2b8;
  uint64_t local_var_2b0;
  uint64_t local_var_2a8;
  uint64_t local_var_2a0;
  uint64_t local_var_298;
  uint64_t *plocal_var_290;
  void *plocal_var_288;
  int8_t *plocal_var_280;
  int32_t local_var_278;
  int8_t stack_array_270 [64];
  void *plocal_var_230;
  int8_t *plocal_var_228;
  int32_t local_var_220;
  int8_t stack_array_218 [64];
  void *plocal_var_1d8;
  int8_t *plocal_var_1d0;
  int32_t local_var_1c8;
  int8_t stack_array_1c0 [64];
  int8_t local_var_180;
  void *plocal_var_178;
  int8_t *plocal_var_170;
  int32_t local_var_168;
  int8_t stack_array_160 [72];
  int8_t stack_array_118 [176];
  int8_t stack_array_68 [48];
  uint64_t local_var_38;
  local_var_298 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_3d8;
  local_var_3b0 = 0;
  plocal_var_290 = param_2;
  if ((param_4[1] - *param_4 & 0xffffffffffffffe0U) == 0x80) {
    CoreEngineDataTransformer(&plocal_var_368);
    CoreEngineDataTransformer(&plocal_var_388,*param_4 + 0x20);
    CoreEngineDataTransformer(&plocal_var_348,*param_4 + 0x40);
    CoreEngineDataTransformer(&plocal_var_3a8,*param_4 + 0x60);
    plocal_var_288 = &memory_allocator_3480_ptr;
    plocal_var_280 = stack_array_270;
    local_var_278 = 0;
    stack_array_270[0] = 0;
    plocal_var_230 = &memory_allocator_3480_ptr;
    plocal_var_228 = stack_array_218;
    local_var_220 = 0;
    stack_array_218[0] = 0;
    pplocal_var_3b8 = &plocal_var_1d8;
    plocal_var_1d8 = &memory_allocator_3480_ptr;
    plocal_var_1d0 = stack_array_1c0;
    local_var_1c8 = 0;
    stack_array_1c0[0] = 0;
    puVar4 = &system_buffer_ptr;
    if (plocal_var_380 != (void *)0x0) {
      puVar4 = plocal_var_380;
    }
    DataStructureManager0(&plocal_var_288,puVar4);
    puVar4 = &system_buffer_ptr;
    if (plocal_var_340 != (void *)0x0) {
      puVar4 = plocal_var_340;
    }
    (**(code **)(plocal_var_230 + 0x10))(&plocal_var_230,puVar4);
    puVar4 = &system_buffer_ptr;
    if (plocal_var_380 != (void *)0x0) {
      puVar4 = plocal_var_380;
    }
    (**(code **)(plocal_var_1d8 + 0x10))(&plocal_var_1d8,puVar4);
    if (iStack_398 == 1) {
      uVar3 = *pbStack_3a0 - 0x31;
      if (uVar3 == 0) {
        uVar3 = (uint)pbStack_3a0[1];
      }
      local_var_180 = uVar3 == 0;
    }
    else {
      local_var_180 = false;
    }
    function_2c2c40(stack_array_118);
    function_2c4c30(stack_array_118);
    plocal_var_178 = &memory_allocator_3480_ptr;
    plocal_var_170 = stack_array_160;
    stack_array_160[0] = 0;
    local_var_168 = local_var_358;
    puVar4 = &system_buffer_ptr;
    if (plocal_var_360 != (void *)0x0) {
      puVar4 = plocal_var_360;
    }
    strcpy_s(stack_array_160,0x40,puVar4);
    function_2c5470(stack_array_118,&plocal_var_178,&plocal_var_288);
    plocal_var_178 = &system_state_ptr;
    *param_2 = &system_state_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &system_data_buffer_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    CoreEngineDataBufferProcessor(param_2,5);
    puVar2 = (int32_t *)param_2[1];
    *puVar2 = 0x656e6f44;
    *(int16_t *)(puVar2 + 1) = 0x2e;
    *(int32_t *)(param_2 + 2) = 5;
    local_var_3b0 = 1;
    local_var_2d0 = 0;
    local_var_2c8 = 0;
    local_var_2c0 = 0;
    local_var_2b8 = 0;
    local_var_2b0 = 0;
    local_var_2a8 = 0;
    local_var_2a0 = 0;
    local_var_328 = 0;
    local_var_320 = 0;
    local_var_318 = 0;
    local_var_310 = 0;
    local_var_308 = 0;
    local_var_300 = 0;
    local_var_2f8 = 0;
    local_var_2f0 = 0;
    local_var_2e8 = 0;
    local_var_2e0 = 0;
    local_var_2d8 = 0;
    function_2479e0(stack_array_118,&local_var_328);
    function_246690(&local_var_328);
    pplocal_var_3b8 = (void **)stack_array_68;
    function_2c6e70(stack_array_68);
    function_246690(stack_array_118);
    plocal_var_1d8 = &system_state_ptr;
    plocal_var_230 = &system_state_ptr;
    pplocal_var_3b8 = &plocal_var_288;
    plocal_var_288 = &system_state_ptr;
    plocal_var_3a8 = &system_data_buffer_ptr;
    if (pbStack_3a0 != (byte *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    pbStack_3a0 = (byte *)0x0;
    local_var_390 = 0;
    plocal_var_3a8 = &system_state_ptr;
    plocal_var_348 = &system_data_buffer_ptr;
    if (plocal_var_340 != (void *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_340 = (void *)0x0;
    local_var_330 = 0;
    plocal_var_348 = &system_state_ptr;
    plocal_var_388 = &system_data_buffer_ptr;
    if (plocal_var_380 != (void *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_380 = (void *)0x0;
    local_var_370 = 0;
    plocal_var_388 = &system_state_ptr;
    plocal_var_368 = &system_data_buffer_ptr;
    if (plocal_var_360 != (void *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_360 = (void *)0x0;
    local_var_350 = 0;
    plocal_var_368 = &system_state_ptr;
  }
  else {
    *param_2 = &system_state_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &system_data_buffer_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    CoreEngineDataBufferProcessor(param_2,0x62);
    puVar1 = (uint64_t *)param_2[1];
    *puVar1 = 0x636572726f636e49;
    puVar1[1] = 0x7265626d756e2074;
    puVar1[2] = 0x7567726120666f20;
    puVar1[3] = 0x550a2173746e656d;
    puVar1[4] = 0x4d3c203a65676173;
    puVar1[5] = 0x6d614e656c75646f;
    puVar1[6] = 0x666572503c203e65;
    puVar1[7] = 0x3e656d614e206261;
    *(int32_t *)(puVar1 + 8) = 0x614d3c20;
    *(int32_t *)((int64_t)puVar1 + 0x44) = 0x72696574;
    *(int32_t *)(puVar1 + 9) = 0x4e206c61;
    *(int32_t *)((int64_t)puVar1 + 0x4c) = 0x3e656d61;
    puVar1[10] = 0x6f6c472073493c20;
    puVar1[0xb] = 0x302f3128206c6162;
    *(int16_t *)(puVar1 + 0xc) = 0x3e29;
    *(int8_t *)((int64_t)puVar1 + 0x62) = 0;
    *(int32_t *)(param_2 + 2) = 0x62;
    local_var_3b0 = 1;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_3d8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
function_1672e0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4)
{
  uint64_t *puVar1;
  int32_t uVar2;
  int32_t *puVar3;
  uint64_t *puVar4;
  void *plocal_var_88;
  uint64_t *plocal_var_80;
  int32_t local_var_78;
  uint64_t local_var_70;
  void *plocal_var_68;
  uint64_t *plocal_var_60;
  int32_t local_var_58;
  uint64_t local_var_50;
  uint64_t *plocal_var_48;
  uint64_t *plocal_var_40;
  uint64_t local_var_38;
  int32_t local_var_30;
  if (param_4[1] - *param_4 >> 5 != 0) {
    plocal_var_48 = (uint64_t *)0x0;
    plocal_var_40 = (uint64_t *)0x0;
    local_var_38 = 0;
    local_var_30 = 3;
    plocal_var_88 = &system_data_buffer_ptr;
    local_var_70 = 0;
    plocal_var_80 = (uint64_t *)0x0;
    local_var_78 = 0;
    puVar3 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13,param_4,0,0xfffffffffffffffe);
    *(int8_t *)puVar3 = 0;
    plocal_var_80 = (uint64_t *)puVar3;
    uVar2 = CoreEngineSystemCleanup(puVar3);
    *puVar3 = 0x65736162;
    *(int8_t *)(puVar3 + 1) = 0;
    local_var_78 = 4;
    local_var_70._0_4_ = uVar2;
    DataEncryptionHandler0(&plocal_var_48,&plocal_var_88);
    plocal_var_88 = &system_data_buffer_ptr;
    if (plocal_var_80 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_80 = (uint64_t *)0x0;
    local_var_70 = (uint64_t)local_var_70._4_4_ << 0x20;
    plocal_var_88 = &system_state_ptr;
    plocal_var_68 = &system_data_buffer_ptr;
    local_var_50 = 0;
    plocal_var_60 = (uint64_t *)0x0;
    local_var_58 = 0;
    puVar4 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar4 = 0;
    plocal_var_60 = puVar4;
    uVar2 = CoreEngineSystemCleanup(puVar4);
    *puVar4 = 0x315f6c6576656c;
    local_var_58 = 7;
    local_var_50._0_4_ = uVar2;
    DataEncryptionHandler0(&plocal_var_48,&plocal_var_68);
    plocal_var_68 = &system_data_buffer_ptr;
    if (plocal_var_60 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_60 = (uint64_t *)0x0;
    local_var_50 = (uint64_t)local_var_50._4_4_ << 0x20;
    plocal_var_68 = &system_state_ptr;
    plocal_var_88 = &system_data_buffer_ptr;
    local_var_70 = 0;
    plocal_var_80 = (uint64_t *)0x0;
    local_var_78 = 0;
    puVar4 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar4 = 0;
    plocal_var_80 = puVar4;
    uVar2 = CoreEngineSystemCleanup(puVar4);
    *puVar4 = 0x325f6c6576656c;
    local_var_78 = 7;
    local_var_70._0_4_ = uVar2;
    DataEncryptionHandler0(&plocal_var_48,&plocal_var_88);
    plocal_var_88 = &system_data_buffer_ptr;
    if (plocal_var_80 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_80 = (uint64_t *)0x0;
    local_var_70 = (uint64_t)local_var_70._4_4_ << 0x20;
    plocal_var_88 = &system_state_ptr;
    plocal_var_68 = &system_data_buffer_ptr;
    local_var_50 = 0;
    plocal_var_60 = (uint64_t *)0x0;
    local_var_58 = 0;
    puVar4 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar4 = 0;
    plocal_var_60 = puVar4;
    uVar2 = CoreEngineSystemCleanup(puVar4);
    *puVar4 = 0x335f6c6576656c;
    local_var_58 = 7;
    local_var_50._0_4_ = uVar2;
    DataEncryptionHandler0(&plocal_var_48,&plocal_var_68);
    plocal_var_68 = &system_data_buffer_ptr;
    if (plocal_var_60 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_60 = (uint64_t *)0x0;
    local_var_50 = (uint64_t)local_var_50._4_4_ << 0x20;
    plocal_var_68 = &system_state_ptr;
    plocal_var_88 = &system_data_buffer_ptr;
    local_var_70 = 0;
    plocal_var_80 = (uint64_t *)0x0;
    local_var_78 = 0;
    puVar4 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar4 = 0;
    plocal_var_80 = puVar4;
    uVar2 = CoreEngineSystemCleanup(puVar4);
    *puVar4 = 0x6e61696c69766963;
    *(int8_t *)(puVar4 + 1) = 0;
    local_var_78 = 8;
    local_var_70._0_4_ = uVar2;
    DataEncryptionHandler0(&plocal_var_48,&plocal_var_88);
    plocal_var_88 = &system_data_buffer_ptr;
    if (plocal_var_80 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_80 = (uint64_t *)0x0;
    local_var_70 = (uint64_t)local_var_70._4_4_ << 0x20;
    plocal_var_88 = &system_state_ptr;
    function_20ccb0(0,*param_4,*param_4 + 0x20,&plocal_var_48);
    puVar1 = plocal_var_40;
    for (puVar4 = plocal_var_48; puVar4 != puVar1; puVar4 = puVar4 + 4) {
      (**(code **)*puVar4)(puVar4,0);
    }
    if (plocal_var_48 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(plocal_var_48);
    }
  }
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &system_data_buffer_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  CoreEngineDataBufferProcessor(param_2,0x27);
  puVar4 = (uint64_t *)param_2[1];
  *puVar4 = 0x6f66207475706e49;
  puVar4[1] = 0x6d3c203a74616d72;
  puVar4[2] = 0x616e5f656c75646f;
  puVar4[3] = 0x6c69663c203e656d;
  puVar4[4] = 0x3e656d616e5f65;
  *(int32_t *)(param_2 + 2) = 0x27;
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1676b0(uint64_t param_1,uint64_t param_2,int64_t *param_3)
void function_1676b0(uint64_t param_1,uint64_t param_2,int64_t *param_3)
{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  int32_t *puVar6;
  uint64_t uVar7;
  int32_t uVar8;
  uint64_t uVar9;
  void *puVar10;
  int8_t stack_array_568 [32];
  int16_t *plocal_var_548;
  int32_t local_var_540;
  int32_t local_var_538;
  void *plocal_var_530;
  void *plocal_var_528;
  uint local_var_520;
  uint64_t local_var_518;
  void *plocal_var_510;
  int64_t lStack_508;
  uint local_var_500;
  uint64_t local_var_4f8;
  void *plocal_var_4f0;
  int64_t lStack_4e8;
  int16_t *plocal_var_4e0;
  uint64_t local_var_4d8;
  int16_t local_var_4d0;
  int32_t local_var_4cc;
  uint64_t local_var_4c8;
  uint64_t local_var_4c0;
  void *plocal_var_4b8;
  int64_t lStack_4b0;
  int32_t local_var_4a0;
  uint64_t local_var_498;
  void *aplocal_var_488 [68];
  int16_t stack_array_268 [280];
  uint64_t local_var_38;
  local_var_498 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_568;
  local_var_538 = 0;
  if (param_3[1] - *param_3 >> 5 != 0) {
    lVar5 = function_0baa80(&plocal_var_4f0);
    plocal_var_530 = &system_data_buffer_ptr;
    local_var_518 = 0;
    plocal_var_528 = (void *)0x0;
    local_var_520 = 0;
    local_var_538 = 1;
    uVar1 = *(uint *)(lVar5 + 0x10);
    uVar9 = (uint64_t)uVar1;
    if (*(int64_t *)(lVar5 + 8) != 0) {
      CoreEngineDataBufferProcessor(&plocal_var_530,uVar9);
    }
    if (uVar1 != 0) {
// WARNING: Subroutine does not return
      memcpy(plocal_var_528,*(uint64_t *)(lVar5 + 8),uVar9);
    }
    if (plocal_var_528 != (void *)0x0) {
      *(int8_t *)(uVar9 + (int64_t)plocal_var_528) = 0;
    }
    local_var_518 = CONCAT44(*(int32_t *)(lVar5 + 0x1c),(int32_t)local_var_518);
    local_var_520 = uVar1;
    CoreEngineDataBufferProcessor(&plocal_var_530,0xf);
    puVar6 = (int32_t *)((uint64_t)local_var_520 + (int64_t)plocal_var_528);
    *puVar6 = 0x72726554;
    puVar6[1] = 0x536e6961;
    puVar6[2] = 0x65646168;
    puVar6[3] = 0x2f7372;
    local_var_520 = 0xf;
    lVar5 = UtilitiesSystem_FileHandler(&plocal_var_530,&plocal_var_4b8,*param_3);
    plocal_var_510 = &system_data_buffer_ptr;
    local_var_4f8 = 0;
    lStack_508 = 0;
    local_var_500 = 0;
    local_var_538 = 3;
    uVar1 = *(uint *)(lVar5 + 0x10);
    uVar9 = (uint64_t)uVar1;
    if (*(int64_t *)(lVar5 + 8) != 0) {
      CoreEngineDataBufferProcessor(&plocal_var_510,uVar9);
    }
    if (uVar1 != 0) {
// WARNING: Subroutine does not return
      memcpy(lStack_508,*(uint64_t *)(lVar5 + 8),uVar9);
    }
    if (lStack_508 != 0) {
      *(int8_t *)(uVar9 + lStack_508) = 0;
    }
    local_var_4f8 = CONCAT44(*(int32_t *)(lVar5 + 0x1c),(int32_t)local_var_4f8);
    uVar8 = 1;
    local_var_500 = uVar1;
    CoreEngineDataBufferProcessor(&plocal_var_510,1);
    *(int16_t *)((uint64_t)local_var_500 + lStack_508) = 0x2f;
    plocal_var_4b8 = &system_data_buffer_ptr;
    local_var_500 = uVar8;
    if (lStack_4b0 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_4b0 = 0;
    local_var_4a0 = 0;
    plocal_var_4b8 = &system_state_ptr;
    local_var_538 = 2;
    plocal_var_530 = &system_data_buffer_ptr;
    if (plocal_var_528 != (void *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_528 = (void *)0x0;
    local_var_518 = local_var_518 & 0xffffffff00000000;
    plocal_var_530 = &system_state_ptr;
    plocal_var_4f0 = &system_data_buffer_ptr;
    if (lStack_4e8 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_4e8 = 0;
    local_var_4d8 = (uint64_t)local_var_4d8._4_4_ << 0x20;
    plocal_var_4f0 = &system_state_ptr;
    cVar3 = UltraHighFreq_LogManager1(&plocal_var_510);
    if (cVar3 != '\0') {
      uVar7 = SystemCore_EncryptionEngine(aplocal_var_488,&plocal_var_510);
      SystemCore_EncryptionEngine0(&plocal_var_530,uVar7);
      aplocal_var_488[0] = &system_state_ptr;
      puVar10 = &system_buffer_ptr;
      if (plocal_var_528 != (void *)0x0) {
        puVar10 = plocal_var_528;
      }
      local_var_540 = 0x118;
      plocal_var_548 = stack_array_268;
      iVar4 = MultiByteToWideChar(0xfde9,0,puVar10,0xffffffff);
      if (0x22f < (uint64_t)((int64_t)iVar4 * 2)) {
LAB_180167a3b:
        UltraHighFreq_ThreadManager1();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      stack_array_268[iVar4] = 0;
      if (0x22f < (uint64_t)((int64_t)(iVar4 + 1) * 2)) {
        UltraHighFreq_ThreadManager1();
        goto LAB_180167a3b;
      }
      stack_array_268[iVar4 + 1] = 0;
      plocal_var_4f0 = (void *)0x0;
      lStack_4e8 = CONCAT44(lStack_4e8._4_4_,3);
      plocal_var_4e0 = stack_array_268;
      local_var_4d8 = 0;
      local_var_4d0 = 0x14;
      local_var_4cc = 0;
      local_var_4c0 = 0;
      local_var_4c8 = 0;
      SHFileOperationW(&plocal_var_4f0);
      plocal_var_530 = &system_data_buffer_ptr;
      if (plocal_var_528 != (void *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      plocal_var_528 = (void *)0x0;
      local_var_518 = local_var_518 & 0xffffffff00000000;
      plocal_var_530 = &system_state_ptr;
    }
    local_var_538 = 0;
    plocal_var_510 = &system_data_buffer_ptr;
    if (lStack_508 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_508 = 0;
    local_var_4f8 = local_var_4f8 & 0xffffffff00000000;
    plocal_var_510 = &system_state_ptr;
  }
  local_var_538 = 0;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_568);
}