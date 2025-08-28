/* 函数别名定义: DataEncryptionHandler */
#define DataEncryptionHandler DataEncryptionHandler
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part070_sub002_sub002.c - 1 个函数
// 函数: void function_1017d0(uint64_t param_1,char param_2)
void function_1017d0(uint64_t param_1,char param_2)
{
  int64_t lVar1;
  uint64_t uVar2;
  void *puVar3;
  uint64_t uVar4;
  int iVar5;
  char cVar6;
  int32_t uVar7;
  uint64_t *puVar8;
  int32_t *puVar9;
  int iVar10;
  uint64_t uVar11;
  uint uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  int64_t lVar15;
  uint64_t uVar16;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int8_t stack_array_248 [32];
  void *plocal_var_228;
  uint64_t *plocal_var_220;
  uint64_t local_var_218;
  uint64_t local_var_210;
  void *plocal_var_208;
  uint64_t *plocal_var_200;
  int32_t local_var_1f8;
  uint64_t local_var_1f0;
  uint64_t local_var_1e8;
  char cStack_1e0;
  uint64_t local_var_1d8;
  uint64_t local_var_1d0;
  uint64_t local_var_1c8;
  int32_t local_var_1c0;
  uint64_t local_var_1b8;
  uint64_t local_var_1b0;
  uint64_t local_var_1a8;
  int32_t local_var_1a0;
  uint64_t local_var_198;
  uint64_t local_var_190;
  uint64_t local_var_188;
  int32_t local_var_180;
  uint64_t local_var_178;
  uint64_t local_var_170;
  uint64_t local_var_168;
  int32_t local_var_160;
  uint64_t local_var_158;
  uint64_t local_var_150;
  uint64_t local_var_148;
  int32_t local_var_140;
  uint64_t local_var_138;
  uint64_t local_var_130;
  uint64_t local_var_128;
  int32_t local_var_120;
  uint64_t local_var_118;
  uint64_t local_var_110;
  uint64_t local_var_108;
  int32_t local_var_100;
  uint64_t local_var_f8;
  void *aplocal_var_e8 [19];
  int iStack_50;
  uint64_t local_var_38;
  uVar2 = SYSTEM_STATE_MANAGER;
  local_var_f8 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_248;
  lVar15 = (int64_t)*(int *)(system_message_buffer + 0x1d40) * 0xd0 +
           *(int64_t *)(system_message_buffer + 0x1d20);
  lVar1 = lVar15 + 0x10;
  uVar16 = *(uint64_t *)(lVar15 + 0xb0) >> 0x14;
  local_var_1d8 = 0;
  local_var_1d0 = 0;
  uVar14 = 0;
  local_var_1c8 = 0;
  local_var_1c0 = 3;
  plocal_var_228 = &system_data_buffer_ptr;
  local_var_210 = 0;
  plocal_var_220 = (uint64_t *)0x0;
  local_var_218 = local_var_218 & 0xffffffff00000000;
  cStack_1e0 = param_2;
  puVar8 = (uint64_t *)
           CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,CONCAT71((int7)((uint64_t)lVar15 >> 8),0x13));
  *(int8_t *)puVar8 = 0;
  plocal_var_220 = puVar8;
  uVar7 = CoreEngineSystemCleanup(puVar8);
  *puVar8 = 0x3039303320787472;
  *(int8_t *)(puVar8 + 1) = 0;
  local_var_218._0_4_ = 8;
  local_var_210._0_4_ = uVar7;
  DataEncryptionHandler0(&local_var_1d8,&plocal_var_228);
  plocal_var_228 = &system_data_buffer_ptr;
  if (plocal_var_220 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_220 = (uint64_t *)0x0;
  local_var_210 = (uint64_t)local_var_210._4_4_ << 0x20;
  plocal_var_228 = &system_state_ptr;
  plocal_var_208 = &system_data_buffer_ptr;
  local_var_1f0 = 0;
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f8 = 0;
  puVar8 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar8 = 0;
  plocal_var_200 = puVar8;
  uVar7 = CoreEngineSystemCleanup(puVar8);
  *puVar8 = 0x3038303320787472;
  *(int8_t *)(puVar8 + 1) = 0;
  local_var_1f8 = 8;
  local_var_1f0._0_4_ = uVar7;
  DataEncryptionHandler0(&local_var_1d8,&plocal_var_208);
  plocal_var_208 = &system_data_buffer_ptr;
  if (plocal_var_200 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f0 = (uint64_t)local_var_1f0._4_4_ << 0x20;
  plocal_var_208 = &system_state_ptr;
  plocal_var_228 = &system_data_buffer_ptr;
  local_var_210 = 0;
  plocal_var_220 = (uint64_t *)0x0;
  local_var_218 = (uint64_t)local_var_218._4_4_ << 0x20;
  puVar8 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar8 = 0;
  plocal_var_220 = puVar8;
  uVar7 = CoreEngineSystemCleanup(puVar8);
  *puVar8 = 0x3037303320787472;
  *(int8_t *)(puVar8 + 1) = 0;
  local_var_218._0_4_ = 8;
  local_var_210._0_4_ = uVar7;
  DataEncryptionHandler0(&local_var_1d8,&plocal_var_228);
  plocal_var_228 = &system_data_buffer_ptr;
  if (plocal_var_220 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_220 = (uint64_t *)0x0;
  local_var_210 = (uint64_t)local_var_210._4_4_ << 0x20;
  plocal_var_228 = &system_state_ptr;
  plocal_var_208 = &system_data_buffer_ptr;
  local_var_1f0 = 0;
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f8 = 0;
  puVar8 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar8 = 0;
  plocal_var_200 = puVar8;
  uVar7 = CoreEngineSystemCleanup(puVar8);
  *puVar8 = 0x3036303320787472;
  *(int32_t *)(puVar8 + 1) = 0x697420;
  local_var_1f8 = 0xb;
  local_var_1f0._0_4_ = uVar7;
  DataEncryptionHandler0(&local_var_1d8,&plocal_var_208);
  plocal_var_208 = &system_data_buffer_ptr;
  if (plocal_var_200 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f0 = (uint64_t)local_var_1f0._4_4_ << 0x20;
  plocal_var_208 = &system_state_ptr;
  plocal_var_228 = &system_data_buffer_ptr;
  local_var_210 = 0;
  plocal_var_220 = (uint64_t *)0x0;
  local_var_218 = (uint64_t)local_var_218._4_4_ << 0x20;
  puVar8 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar8 = 0;
  plocal_var_220 = puVar8;
  uVar7 = CoreEngineSystemCleanup(puVar8);
  *puVar8 = 0x3036303320787472;
  *(int8_t *)(puVar8 + 1) = 0;
  local_var_218._0_4_ = 8;
  local_var_210._0_4_ = uVar7;
  DataEncryptionHandler0(&local_var_1d8,&plocal_var_228);
  plocal_var_228 = &system_data_buffer_ptr;
  if (plocal_var_220 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_220 = (uint64_t *)0x0;
  local_var_210 = (uint64_t)local_var_210._4_4_ << 0x20;
  plocal_var_228 = &system_state_ptr;
  plocal_var_208 = &system_data_buffer_ptr;
  local_var_1f0 = 0;
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f8 = 0;
  puVar8 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar8 = 0;
  plocal_var_200 = puVar8;
  uVar7 = CoreEngineSystemCleanup(puVar8);
  *puVar8 = 0x3038303220787472;
  *(int32_t *)(puVar8 + 1) = 0x697420;
  local_var_1f8 = 0xb;
  local_var_1f0._0_4_ = uVar7;
  DataEncryptionHandler0(&local_var_1d8,&plocal_var_208);
  plocal_var_208 = &system_data_buffer_ptr;
  if (plocal_var_200 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f0 = (uint64_t)local_var_1f0._4_4_ << 0x20;
  plocal_var_208 = &system_state_ptr;
  plocal_var_228 = &system_data_buffer_ptr;
  local_var_210 = 0;
  plocal_var_220 = (uint64_t *)0x0;
  local_var_218 = (uint64_t)local_var_218._4_4_ << 0x20;
  puVar8 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar8 = 0;
  plocal_var_220 = puVar8;
  uVar7 = CoreEngineSystemCleanup(puVar8);
  *puVar8 = 0x3038303220787472;
  *(int8_t *)(puVar8 + 1) = 0;
  local_var_218._0_4_ = 8;
  local_var_210._0_4_ = uVar7;
  DataEncryptionHandler0(&local_var_1d8,&plocal_var_228);
  plocal_var_228 = &system_data_buffer_ptr;
  if (plocal_var_220 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_220 = (uint64_t *)0x0;
  local_var_210 = (uint64_t)local_var_210._4_4_ << 0x20;
  plocal_var_228 = &system_state_ptr;
  plocal_var_208 = &system_data_buffer_ptr;
  local_var_1f0 = 0;
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f8 = 0;
  puVar8 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar8 = 0;
  plocal_var_200 = puVar8;
  uVar7 = CoreEngineSystemCleanup(puVar8);
  *puVar8 = 0x3038303120787467;
  *(int32_t *)(puVar8 + 1) = 0x697420;
  local_var_1f8 = 0xb;
  local_var_1f0._0_4_ = uVar7;
  DataEncryptionHandler0(&local_var_1d8,&plocal_var_208);
  plocal_var_208 = &system_data_buffer_ptr;
  if (plocal_var_200 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f0 = (uint64_t)local_var_1f0._4_4_ << 0x20;
  plocal_var_208 = &system_state_ptr;
  plocal_var_228 = &system_data_buffer_ptr;
  local_var_210 = 0;
  plocal_var_220 = (uint64_t *)0x0;
  local_var_218 = (uint64_t)local_var_218._4_4_ << 0x20;
  puVar8 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar8 = 0;
  plocal_var_220 = puVar8;
  uVar7 = CoreEngineSystemCleanup(puVar8);
  *puVar8 = 0x3037303220787472;
  *(int8_t *)(puVar8 + 1) = 0;
  local_var_218._0_4_ = 8;
  local_var_210._0_4_ = uVar7;
  DataEncryptionHandler0(&local_var_1d8,&plocal_var_228);
  plocal_var_228 = &system_data_buffer_ptr;
  if (plocal_var_220 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_220 = (uint64_t *)0x0;
  local_var_210 = (uint64_t)local_var_210._4_4_ << 0x20;
  plocal_var_228 = &system_state_ptr;
  plocal_var_208 = &system_data_buffer_ptr;
  local_var_1f0 = 0;
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f8 = 0;
  puVar8 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar8 = 0;
  plocal_var_200 = puVar8;
  uVar7 = CoreEngineSystemCleanup(puVar8);
  *puVar8 = 0x2030303936207872;
  *(int16_t *)(puVar8 + 1) = 0x7478;
  *(int8_t *)((int64_t)puVar8 + 10) = 0;
  local_var_1f8 = 10;
  local_var_1f0._0_4_ = uVar7;
  DataEncryptionHandler0(&local_var_1d8,&plocal_var_208);
  plocal_var_208 = &system_data_buffer_ptr;
  if (plocal_var_200 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f0 = (uint64_t)local_var_1f0._4_4_ << 0x20;
  plocal_var_208 = &system_state_ptr;
  plocal_var_228 = &system_data_buffer_ptr;
  local_var_210 = 0;
  plocal_var_220 = (uint64_t *)0x0;
  local_var_218 = (uint64_t)local_var_218._4_4_ << 0x20;
  puVar8 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar8 = 0;
  plocal_var_220 = puVar8;
  uVar7 = CoreEngineSystemCleanup(puVar8);
  *puVar8 = 0x2030303836207872;
  *(int16_t *)(puVar8 + 1) = 0x7478;
  *(int8_t *)((int64_t)puVar8 + 10) = 0;
  local_var_218._0_4_ = 10;
  local_var_210._0_4_ = uVar7;
  DataEncryptionHandler0(&local_var_1d8,&plocal_var_228);
  plocal_var_228 = &system_data_buffer_ptr;
  if (plocal_var_220 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_220 = (uint64_t *)0x0;
  local_var_210 = (uint64_t)local_var_210._4_4_ << 0x20;
  plocal_var_228 = &system_state_ptr;
  plocal_var_208 = &system_data_buffer_ptr;
  local_var_1f0 = 0;
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f8 = 0;
  puVar8 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar8 = 0;
  plocal_var_200 = puVar8;
  uVar7 = CoreEngineSystemCleanup(puVar8);
  *puVar8 = 0x30303836207872;
  local_var_1f8 = 7;
  local_var_1f0._0_4_ = uVar7;
  DataEncryptionHandler0(&local_var_1d8,&plocal_var_208);
  plocal_var_208 = &system_data_buffer_ptr;
  if (plocal_var_200 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f0 = (uint64_t)local_var_1f0._4_4_ << 0x20;
  plocal_var_208 = &system_state_ptr;
  plocal_var_228 = &system_data_buffer_ptr;
  local_var_210 = 0;
  plocal_var_220 = (uint64_t *)0x0;
  local_var_218 = (uint64_t)local_var_218._4_4_ << 0x20;
  puVar8 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar8 = 0;
  plocal_var_220 = puVar8;
  uVar7 = CoreEngineSystemCleanup(puVar8);
  *puVar8 = 0x76206e6f65646172;
  *(int16_t *)(puVar8 + 1) = 0x6969;
  *(int8_t *)((int64_t)puVar8 + 10) = 0;
  local_var_218._0_4_ = 10;
  local_var_210._0_4_ = uVar7;
  DataEncryptionHandler0(&local_var_1d8,&plocal_var_228);
  plocal_var_228 = &system_data_buffer_ptr;
  if (plocal_var_220 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_220 = (uint64_t *)0x0;
  local_var_210 = (uint64_t)local_var_210._4_4_ << 0x20;
  plocal_var_228 = &system_state_ptr;
  local_var_138 = 0;
  local_var_130 = 0;
  local_var_128 = 0;
  local_var_120 = 3;
  plocal_var_208 = &system_data_buffer_ptr;
  local_var_1f0 = 0;
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f8 = 0;
  puVar8 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar8 = 0;
  plocal_var_200 = puVar8;
  uVar7 = CoreEngineSystemCleanup(puVar8);
  *puVar8 = 0x30303735207872;
  local_var_1f8 = 7;
  local_var_1f0._0_4_ = uVar7;
  DataEncryptionHandler0(&local_var_138,&plocal_var_208);
  plocal_var_208 = &system_data_buffer_ptr;
  if (plocal_var_200 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f0 = (uint64_t)local_var_1f0._4_4_ << 0x20;
  plocal_var_208 = &system_state_ptr;
  plocal_var_228 = &system_data_buffer_ptr;
  local_var_210 = 0;
  plocal_var_220 = (uint64_t *)0x0;
  local_var_218 = (uint64_t)local_var_218._4_4_ << 0x20;
  puVar8 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar8 = 0;
  plocal_var_220 = puVar8;
  uVar7 = CoreEngineSystemCleanup(puVar8);
  *puVar8 = 0x3036303220787472;
  *(int8_t *)(puVar8 + 1) = 0;
  local_var_218._0_4_ = 8;
  local_var_210._0_4_ = uVar7;
  DataEncryptionHandler0(&local_var_1d8,&plocal_var_228);
  plocal_var_228 = &system_data_buffer_ptr;
  if (plocal_var_220 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_220 = (uint64_t *)0x0;
  local_var_210 = (uint64_t)local_var_210._4_4_ << 0x20;
  plocal_var_228 = &system_state_ptr;
  plocal_var_208 = &system_data_buffer_ptr;
  local_var_1f0 = 0;
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f8 = 0;
  puVar8 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar8 = 0;
  plocal_var_200 = puVar8;
  uVar7 = CoreEngineSystemCleanup(puVar8);
  *puVar8 = 0x3038303120787467;
  *(int8_t *)(puVar8 + 1) = 0;
  local_var_1f8 = 8;
  local_var_1f0._0_4_ = uVar7;
  DataEncryptionHandler0(&local_var_1d8,&plocal_var_208);
  plocal_var_208 = &system_data_buffer_ptr;
  if (plocal_var_200 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f0 = (uint64_t)local_var_1f0._4_4_ << 0x20;
  plocal_var_208 = &system_state_ptr;
  plocal_var_228 = &system_data_buffer_ptr;
  local_var_210 = 0;
  plocal_var_220 = (uint64_t *)0x0;
  local_var_218 = (uint64_t)local_var_218._4_4_ << 0x20;
  puVar8 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar8 = 0;
  plocal_var_220 = puVar8;
  uVar7 = CoreEngineSystemCleanup(puVar8);
  *puVar8 = 0x3037303120787467;
  *(int32_t *)(puVar8 + 1) = 0x697420;
  local_var_218._0_4_ = 0xb;
  local_var_210._0_4_ = uVar7;
  DataEncryptionHandler0(&local_var_138,&plocal_var_228);
  plocal_var_228 = &system_data_buffer_ptr;
  if (plocal_var_220 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_220 = (uint64_t *)0x0;
  local_var_210 = (uint64_t)local_var_210._4_4_ << 0x20;
  plocal_var_228 = &system_state_ptr;
  plocal_var_208 = &system_data_buffer_ptr;
  local_var_1f0 = 0;
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f8 = 0;
  puVar8 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar8 = 0;
  plocal_var_200 = puVar8;
  uVar7 = CoreEngineSystemCleanup(puVar8);
  *puVar8 = 0x3037303120787467;
  *(int8_t *)(puVar8 + 1) = 0;
  local_var_1f8 = 8;
  local_var_1f0._0_4_ = uVar7;
  DataEncryptionHandler0(&local_var_138,&plocal_var_208);
  plocal_var_208 = &system_data_buffer_ptr;
  if (plocal_var_200 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f0 = (uint64_t)local_var_1f0._4_4_ << 0x20;
  plocal_var_208 = &system_state_ptr;
  plocal_var_228 = &system_data_buffer_ptr;
  local_var_210 = 0;
  plocal_var_220 = (uint64_t *)0x0;
  local_var_218 = (uint64_t)local_var_218._4_4_ << 0x20;
  puVar8 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar8 = 0;
  plocal_var_220 = puVar8;
  uVar7 = CoreEngineSystemCleanup(puVar8);
  *puVar8 = 0x3036363120787467;
  *(int8_t *)(puVar8 + 1) = 0;
  local_var_218._0_4_ = 8;
  local_var_210._0_4_ = uVar7;
  DataEncryptionHandler0(&local_var_138,&plocal_var_228);
  plocal_var_228 = &system_data_buffer_ptr;
  if (plocal_var_220 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_220 = (uint64_t *)0x0;
  local_var_210 = (uint64_t)local_var_210._4_4_ << 0x20;
  plocal_var_228 = &system_state_ptr;
  plocal_var_208 = &system_data_buffer_ptr;
  local_var_1f0 = 0;
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f8 = 0;
  puVar8 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar8 = 0;
  plocal_var_200 = puVar8;
  uVar7 = CoreEngineSystemCleanup(puVar8);
  *puVar8 = 0x34362061676576;
  local_var_1f8 = 7;
  local_var_1f0._0_4_ = uVar7;
  DataEncryptionHandler0(&local_var_1d8,&plocal_var_208);
  plocal_var_208 = &system_data_buffer_ptr;
  if (plocal_var_200 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f0 = (uint64_t)local_var_1f0._4_4_ << 0x20;
  plocal_var_208 = &system_state_ptr;
  plocal_var_228 = &system_data_buffer_ptr;
  local_var_210 = 0;
  plocal_var_220 = (uint64_t *)0x0;
  local_var_218 = (uint64_t)local_var_218._4_4_ << 0x20;
  puVar8 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar8 = 0;
  plocal_var_220 = puVar8;
  uVar7 = CoreEngineSystemCleanup(puVar8);
  *puVar8 = 0x36352061676576;
  local_var_218._0_4_ = 7;
  local_var_210._0_4_ = uVar7;
  DataEncryptionHandler0(&local_var_138,&plocal_var_228);
  plocal_var_228 = &system_data_buffer_ptr;
  if (plocal_var_220 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_220 = (uint64_t *)0x0;
  local_var_210 = (uint64_t)local_var_210._4_4_ << 0x20;
  plocal_var_228 = &system_state_ptr;
  local_var_1b8 = 0;
  local_var_1b0 = 0;
  local_var_1a8 = 0;
  local_var_1a0 = 3;
  plocal_var_208 = &system_data_buffer_ptr;
  local_var_1f0 = 0;
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f8 = 0;
  puVar8 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar8 = 0;
  plocal_var_200 = puVar8;
  uVar7 = CoreEngineSystemCleanup(puVar8);
  *puVar8 = 0x3036363120787467;
  *(int8_t *)(puVar8 + 1) = 0;
  local_var_1f8 = 8;
  local_var_1f0._0_4_ = uVar7;
  DataEncryptionHandler0(&local_var_1b8,&plocal_var_208);
  plocal_var_208 = &system_data_buffer_ptr;
  if (plocal_var_200 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f0 = (uint64_t)local_var_1f0._4_4_ << 0x20;
  plocal_var_208 = &system_state_ptr;
  plocal_var_228 = &system_data_buffer_ptr;
  local_var_210 = 0;
  plocal_var_220 = (uint64_t *)0x0;
  local_var_218 = (uint64_t)local_var_218._4_4_ << 0x20;
  puVar8 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar8 = 0;
  plocal_var_220 = puVar8;
  uVar7 = CoreEngineSystemCleanup(puVar8);
  *puVar8 = 0x3036303120787467;
  *(int8_t *)(puVar8 + 1) = 0;
  local_var_218._0_4_ = 8;
  local_var_210._0_4_ = uVar7;
  DataEncryptionHandler0(&local_var_1b8,&plocal_var_228);
  plocal_var_228 = &system_data_buffer_ptr;
  if (plocal_var_220 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_220 = (uint64_t *)0x0;
  local_var_210 = (uint64_t)local_var_210._4_4_ << 0x20;
  plocal_var_228 = &system_state_ptr;
  plocal_var_208 = &system_data_buffer_ptr;
  local_var_1f0 = 0;
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f8 = 0;
  puVar8 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar8 = 0;
  plocal_var_200 = puVar8;
  uVar7 = CoreEngineSystemCleanup(puVar8);
  *puVar8 = 0x30383920787467;
  local_var_1f8 = 7;
  local_var_1f0._0_4_ = uVar7;
  DataEncryptionHandler0(&local_var_1b8,&plocal_var_208);
  plocal_var_208 = &system_data_buffer_ptr;
  if (plocal_var_200 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f0 = (uint64_t)local_var_1f0._4_4_ << 0x20;
  plocal_var_208 = &system_state_ptr;
  plocal_var_228 = &system_data_buffer_ptr;
  local_var_210 = 0;
  plocal_var_220 = (uint64_t *)0x0;
  local_var_218 = (uint64_t)local_var_218._4_4_ << 0x20;
  puVar8 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar8 = 0;
  plocal_var_220 = puVar8;
  uVar7 = CoreEngineSystemCleanup(puVar8);
  *puVar8 = 0x2030383920787467;
  *(int16_t *)(puVar8 + 1) = 0x6974;
  *(int8_t *)((int64_t)puVar8 + 10) = 0;
  local_var_218._0_4_ = 10;
  local_var_210._0_4_ = uVar7;
  DataEncryptionHandler0(&local_var_1b8,&plocal_var_228);
  plocal_var_228 = &system_data_buffer_ptr;
  if (plocal_var_220 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_220 = (uint64_t *)0x0;
  local_var_210 = (uint64_t)local_var_210._4_4_ << 0x20;
  plocal_var_228 = &system_state_ptr;
  plocal_var_208 = &system_data_buffer_ptr;
  local_var_1f0 = 0;
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f8 = 0;
  puVar9 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar9 = 0;
  plocal_var_200 = (uint64_t *)puVar9;
  uVar7 = CoreEngineSystemCleanup(puVar9);
  *puVar9 = 0x35207872;
  *(int16_t *)(puVar9 + 1) = 0x3038;
  *(int8_t *)((int64_t)puVar9 + 6) = 0;
  local_var_1f8 = 6;
  local_var_1f0._0_4_ = uVar7;
  DataEncryptionHandler0(&local_var_1b8,&plocal_var_208);
  plocal_var_208 = &system_data_buffer_ptr;
  if (plocal_var_200 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f0 = (uint64_t)local_var_1f0._4_4_ << 0x20;
  plocal_var_208 = &system_state_ptr;
  plocal_var_228 = &system_data_buffer_ptr;
  local_var_210 = 0;
  plocal_var_220 = (uint64_t *)0x0;
  local_var_218 = (uint64_t)local_var_218._4_4_ << 0x20;
  puVar9 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar9 = 0;
  plocal_var_220 = (uint64_t *)puVar9;
  uVar7 = CoreEngineSystemCleanup(puVar9);
  *puVar9 = 0x34207872;
  *(int16_t *)(puVar9 + 1) = 0x3038;
  *(int8_t *)((int64_t)puVar9 + 6) = 0;
  local_var_218._0_4_ = 6;
  local_var_210._0_4_ = uVar7;
  DataEncryptionHandler0(&local_var_1b8,&plocal_var_228);
  plocal_var_228 = &system_data_buffer_ptr;
  if (plocal_var_220 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_220 = (uint64_t *)0x0;
  local_var_210 = (uint64_t)local_var_210._4_4_ << 0x20;
  plocal_var_228 = &system_state_ptr;
  plocal_var_208 = &system_data_buffer_ptr;
  local_var_1f0 = 0;
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f8 = 0;
  puVar8 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar8 = 0;
  plocal_var_200 = puVar8;
  uVar7 = CoreEngineSystemCleanup(puVar8);
  *puVar8 = 0x58303933203972;
  local_var_1f8 = 7;
  local_var_1f0._0_4_ = uVar7;
  DataEncryptionHandler0(&local_var_1b8,&plocal_var_208);
  plocal_var_208 = &system_data_buffer_ptr;
  if (plocal_var_200 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f0 = (uint64_t)local_var_1f0._4_4_ << 0x20;
  plocal_var_208 = &system_state_ptr;
  local_var_158 = 0;
  local_var_150 = 0;
  local_var_148 = 0;
  local_var_140 = 3;
  plocal_var_228 = &system_data_buffer_ptr;
  local_var_210 = 0;
  plocal_var_220 = (uint64_t *)0x0;
  local_var_218 = (uint64_t)local_var_218._4_4_ << 0x20;
  puVar8 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar8 = 0;
  plocal_var_220 = puVar8;
  uVar7 = CoreEngineSystemCleanup(puVar8);
  *puVar8 = 0x3035303120787467;
  *(int32_t *)(puVar8 + 1) = 0x697420;
  local_var_218._0_4_ = 0xb;
  local_var_210._0_4_ = uVar7;
  DataEncryptionHandler0(&local_var_158,&plocal_var_228);
  plocal_var_228 = &system_data_buffer_ptr;
  if (plocal_var_220 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_220 = (uint64_t *)0x0;
  local_var_210 = (uint64_t)local_var_210._4_4_ << 0x20;
  plocal_var_228 = &system_state_ptr;
  plocal_var_208 = &system_data_buffer_ptr;
  local_var_1f0 = 0;
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f8 = 0;
  puVar8 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar8 = 0;
  plocal_var_200 = puVar8;
  uVar7 = CoreEngineSystemCleanup(puVar8);
  *puVar8 = 0x30373920787467;
  local_var_1f8 = 7;
  local_var_1f0._0_4_ = uVar7;
  DataEncryptionHandler0(&local_var_158,&plocal_var_208);
  plocal_var_208 = &system_data_buffer_ptr;
  if (plocal_var_200 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f0 = (uint64_t)local_var_1f0._4_4_ << 0x20;
  plocal_var_208 = &system_state_ptr;
  plocal_var_228 = &system_data_buffer_ptr;
  local_var_210 = 0;
  plocal_var_220 = (uint64_t *)0x0;
  local_var_218 = (uint64_t)local_var_218._4_4_ << 0x20;
  puVar9 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar9 = 0;
  plocal_var_220 = (uint64_t *)puVar9;
  uVar7 = CoreEngineSystemCleanup(puVar9);
  *puVar9 = 0x35207872;
  *(int16_t *)(puVar9 + 1) = 0x3037;
  *(int8_t *)((int64_t)puVar9 + 6) = 0;
  local_var_218._0_4_ = 6;
  local_var_210._0_4_ = uVar7;
  DataEncryptionHandler0(&local_var_158,&plocal_var_228);
  plocal_var_228 = &system_data_buffer_ptr;
  if (plocal_var_220 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_220 = (uint64_t *)0x0;
  local_var_210 = (uint64_t)local_var_210._4_4_ << 0x20;
  plocal_var_228 = &system_state_ptr;
  plocal_var_208 = &system_data_buffer_ptr;
  local_var_1f0 = 0;
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f8 = 0;
  puVar9 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar9 = 0;
  plocal_var_200 = (uint64_t *)puVar9;
  uVar7 = CoreEngineSystemCleanup(puVar9);
  *puVar9 = 0x34207872;
  *(int16_t *)(puVar9 + 1) = 0x3037;
  *(int8_t *)((int64_t)puVar9 + 6) = 0;
  local_var_1f8 = 6;
  local_var_1f0._0_4_ = uVar7;
  DataEncryptionHandler0(&local_var_158,&plocal_var_208);
  plocal_var_208 = &system_data_buffer_ptr;
  if (plocal_var_200 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f0 = (uint64_t)local_var_1f0._4_4_ << 0x20;
  plocal_var_208 = &system_state_ptr;
  plocal_var_228 = &system_data_buffer_ptr;
  local_var_210 = 0;
  plocal_var_220 = (uint64_t *)0x0;
  local_var_218 = (uint64_t)local_var_218._4_4_ << 0x20;
  CoreEngineDataBufferProcessor(&plocal_var_228,6);
  *(int32_t *)plocal_var_220 = 0x33203972;
  *(int16_t *)((int64_t)plocal_var_220 + 4) = 0x3038;
  *(int8_t *)((int64_t)plocal_var_220 + 6) = 0;
  local_var_218._0_4_ = 6;
  DataEncryptionHandler0(&local_var_158,&plocal_var_228);
  plocal_var_228 = &system_data_buffer_ptr;
  if (plocal_var_220 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_220 = (uint64_t *)0x0;
  local_var_210 = local_var_210 & 0xffffffff00000000;
  plocal_var_228 = &system_state_ptr;
  local_var_178 = 0;
  local_var_170 = 0;
  local_var_168 = 0;
  local_var_160 = 3;
  plocal_var_208 = &system_data_buffer_ptr;
  local_var_1f0 = 0;
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f8 = 0;
  CoreEngineDataBufferProcessor(&plocal_var_208,8);
  *plocal_var_200 = 0x3035303120787467;
  *(int8_t *)(plocal_var_200 + 1) = 0;
  local_var_1f8 = 8;
  DataEncryptionHandler0(&local_var_178,&plocal_var_208);
  plocal_var_208 = &system_data_buffer_ptr;
  if (plocal_var_200 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f0 = local_var_1f0 & 0xffffffff00000000;
  plocal_var_208 = &system_state_ptr;
  plocal_var_228 = &system_data_buffer_ptr;
  local_var_210 = 0;
  plocal_var_220 = (uint64_t *)0x0;
  local_var_218 = (uint64_t)local_var_218._4_4_ << 0x20;
  CoreEngineDataBufferProcessor(&plocal_var_228,7);
  *plocal_var_220 = 0x58303833203972;
  local_var_218._0_4_ = 7;
  DataEncryptionHandler0(&local_var_178,&plocal_var_228);
  plocal_var_228 = &system_data_buffer_ptr;
  if (plocal_var_220 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_220 = (uint64_t *)0x0;
  local_var_210 = local_var_210 & 0xffffffff00000000;
  plocal_var_228 = &system_state_ptr;
  plocal_var_208 = &system_data_buffer_ptr;
  local_var_1f0 = 0;
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f8 = 0;
  CoreEngineDataBufferProcessor(&plocal_var_208,7);
  *plocal_var_200 = 0x30363920787467;
  local_var_1f8 = 7;
  DataEncryptionHandler0(&local_var_178,&plocal_var_208);
  plocal_var_208 = &system_data_buffer_ptr;
  if (plocal_var_200 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f0 = local_var_1f0 & 0xffffffff00000000;
  plocal_var_208 = &system_state_ptr;
  plocal_var_228 = &system_data_buffer_ptr;
  local_var_210 = 0;
  plocal_var_220 = (uint64_t *)0x0;
  local_var_218 = (uint64_t)local_var_218._4_4_ << 0x20;
  CoreEngineDataBufferProcessor(&plocal_var_228,7);
  *plocal_var_220 = 0x30353920787467;
  local_var_218._0_4_ = 7;
  DataEncryptionHandler0(&local_var_178,&plocal_var_228);
  plocal_var_228 = &system_data_buffer_ptr;
  if (plocal_var_220 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_220 = (uint64_t *)0x0;
  local_var_210 = local_var_210 & 0xffffffff00000000;
  plocal_var_228 = &system_state_ptr;
  plocal_var_208 = &system_data_buffer_ptr;
  local_var_1f0 = 0;
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f8 = 0;
  CoreEngineDataBufferProcessor(&plocal_var_208,6);
  *(int32_t *)plocal_var_200 = 0x35207872;
  *(int16_t *)((int64_t)plocal_var_200 + 4) = 0x3036;
  *(int8_t *)((int64_t)plocal_var_200 + 6) = 0;
  local_var_1f8 = 6;
  DataEncryptionHandler0(&local_var_178,&plocal_var_208);
  plocal_var_208 = &system_data_buffer_ptr;
  if (plocal_var_200 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f0 = local_var_1f0 & 0xffffffff00000000;
  plocal_var_208 = &system_state_ptr;
  plocal_var_228 = &system_data_buffer_ptr;
  local_var_210 = 0;
  plocal_var_220 = (uint64_t *)0x0;
  local_var_218 = (uint64_t)local_var_218._4_4_ << 0x20;
  CoreEngineDataBufferProcessor(&plocal_var_228,6);
  *(int32_t *)plocal_var_220 = 0x34207872;
  *(int16_t *)((int64_t)plocal_var_220 + 4) = 0x3036;
  *(int8_t *)((int64_t)plocal_var_220 + 6) = 0;
  local_var_218._0_4_ = 6;
  DataEncryptionHandler0(&local_var_178,&plocal_var_228);
  plocal_var_228 = &system_data_buffer_ptr;
  if (plocal_var_220 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_220 = (uint64_t *)0x0;
  local_var_210 = local_var_210 & 0xffffffff00000000;
  plocal_var_228 = &system_state_ptr;
  local_var_198 = 0;
  local_var_190 = 0;
  local_var_188 = 0;
  local_var_180 = 3;
  plocal_var_208 = &system_data_buffer_ptr;
  local_var_1f0 = 0;
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f8 = 0;
  CoreEngineDataBufferProcessor(&plocal_var_208,8);
  *plocal_var_200 = 0x3033303120787467;
  *(int8_t *)(plocal_var_200 + 1) = 0;
  local_var_1f8 = 8;
  DataEncryptionHandler0(&local_var_198,&plocal_var_208);
  plocal_var_208 = &system_data_buffer_ptr;
  if (plocal_var_200 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f0 = local_var_1f0 & 0xffffffff00000000;
  plocal_var_208 = &system_state_ptr;
  plocal_var_228 = &system_data_buffer_ptr;
  local_var_210 = 0;
  plocal_var_220 = (uint64_t *)0x0;
  local_var_218 = (uint64_t)local_var_218._4_4_ << 0x20;
  CoreEngineDataBufferProcessor(&plocal_var_228,0xf);
  *(int32_t *)plocal_var_220 = 0x61676556;
  *(int32_t *)((int64_t)plocal_var_220 + 4) = 0x47203820;
  *(int32_t *)((int64_t)plocal_var_220 + 8) = 0x68706172;
  *(int32_t *)((int64_t)plocal_var_220 + 0xc) = 0x736369;
  local_var_218._0_4_ = 0xf;
  DataEncryptionHandler0(&local_var_198,&plocal_var_228);
  plocal_var_228 = &system_data_buffer_ptr;
  if (plocal_var_220 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_220 = (uint64_t *)0x0;
  local_var_210 = local_var_210 & 0xffffffff00000000;
  plocal_var_228 = &system_state_ptr;
  plocal_var_208 = &system_data_buffer_ptr;
  local_var_1f0 = 0;
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f8 = 0;
  CoreEngineDataBufferProcessor(&plocal_var_208,10);
  *plocal_var_200 = 0x2030353720787467;
  *(int16_t *)(plocal_var_200 + 1) = 0x6974;
  *(int8_t *)((int64_t)plocal_var_200 + 10) = 0;
  local_var_1f8 = 10;
  DataEncryptionHandler0(&local_var_198,&plocal_var_208);
  plocal_var_208 = &system_data_buffer_ptr;
  if (plocal_var_200 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f0 = local_var_1f0 & 0xffffffff00000000;
  plocal_var_208 = &system_state_ptr;
  plocal_var_228 = &system_data_buffer_ptr;
  local_var_210 = 0;
  plocal_var_220 = (uint64_t *)0x0;
  local_var_218 = (uint64_t)local_var_218._4_4_ << 0x20;
  CoreEngineDataBufferProcessor(&plocal_var_228,7);
  *plocal_var_220 = 0x30363720787467;
  local_var_218._0_4_ = 7;
  DataEncryptionHandler0(&local_var_198,&plocal_var_228);
  plocal_var_228 = &system_data_buffer_ptr;
  if (plocal_var_220 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_220 = (uint64_t *)0x0;
  local_var_210 = local_var_210 & 0xffffffff00000000;
  plocal_var_228 = &system_state_ptr;
  plocal_var_208 = &system_data_buffer_ptr;
  local_var_1f0 = 0;
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f8 = 0;
  CoreEngineDataBufferProcessor(&plocal_var_208,7);
  *plocal_var_200 = 0x30363620787467;
  local_var_1f8 = 7;
  DataEncryptionHandler0(&local_var_198,&plocal_var_208);
  plocal_var_208 = &system_data_buffer_ptr;
  if (plocal_var_200 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f0 = local_var_1f0 & 0xffffffff00000000;
  plocal_var_208 = &system_state_ptr;
  plocal_var_228 = &system_data_buffer_ptr;
  local_var_210 = 0;
  plocal_var_220 = (uint64_t *)0x0;
  local_var_218 = (uint64_t)local_var_218._4_4_ << 0x20;
  CoreEngineDataBufferProcessor(&plocal_var_228,8);
  *plocal_var_220 = 0x6d30363920787467;
  *(int8_t *)(plocal_var_220 + 1) = 0;
  local_var_218._0_4_ = 8;
  DataEncryptionHandler0(&local_var_198,&plocal_var_228);
  plocal_var_228 = &system_data_buffer_ptr;
  if (plocal_var_220 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_220 = (uint64_t *)0x0;
  local_var_210 = local_var_210 & 0xffffffff00000000;
  plocal_var_228 = &system_state_ptr;
  local_var_118 = 0;
  local_var_110 = 0;
  local_var_108 = 0;
  local_var_100 = 3;
  plocal_var_208 = &system_data_buffer_ptr;
  local_var_1f0 = 0;
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f8 = 0;
  CoreEngineDataBufferProcessor(&plocal_var_208,5);
  *(int32_t *)plocal_var_200 = 0x65746e69;
  *(int16_t *)((int64_t)plocal_var_200 + 4) = 0x6c;
  local_var_1f8 = 5;
  DataEncryptionHandler0(&local_var_118,&plocal_var_208);
  plocal_var_208 = &system_data_buffer_ptr;
  if (plocal_var_200 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f0 = local_var_1f0 & 0xffffffff00000000;
  plocal_var_208 = &system_state_ptr;
  plocal_var_228 = &system_data_buffer_ptr;
  local_var_210 = 0;
  plocal_var_220 = (uint64_t *)0x0;
  local_var_218 = (uint64_t)local_var_218._4_4_ << 0x20;
  CoreEngineDataBufferProcessor(&plocal_var_228,9);
  *plocal_var_220 = 0x72206e6f65646172;
  *(int16_t *)(plocal_var_220 + 1) = 0x37;
  local_var_218 = CONCAT44(local_var_218._4_4_,9);
  DataEncryptionHandler0(&local_var_118,&plocal_var_228);
  plocal_var_228 = &system_data_buffer_ptr;
  if (plocal_var_220 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_220 = (uint64_t *)0x0;
  local_var_210 = local_var_210 & 0xffffffff00000000;
  plocal_var_228 = &system_state_ptr;
  plocal_var_208 = &system_data_buffer_ptr;
  local_var_1f0 = 0;
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f8 = 0;
  CoreEngineDataBufferProcessor(&plocal_var_208,8);
  *plocal_var_200 = 0x6d30353920787467;
  *(int8_t *)(plocal_var_200 + 1) = 0;
  local_var_1f8 = 8;
  DataEncryptionHandler0(&local_var_118,&plocal_var_208);
  plocal_var_208 = &system_data_buffer_ptr;
  if (plocal_var_200 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f0 = local_var_1f0 & 0xffffffff00000000;
  plocal_var_208 = &system_state_ptr;
  plocal_var_228 = (void *)0x0;
  plocal_var_220 = (uint64_t *)0x0;
  local_var_218 = 0;
  local_var_210 = CONCAT44(local_var_210._4_4_,3);
  local_var_1e8 = (void **)0x87000000f00;
  SystemInitializer(&plocal_var_228,&local_var_1e8);
  local_var_1e8 = (void **)0x70800000c80;
  SystemInitializer(&plocal_var_228,&local_var_1e8);
  local_var_1e8 = (void **)0x5a000000a00;
  SystemInitializer(&plocal_var_228,&local_var_1e8);
  local_var_1e8 = (void **)0x43800000780;
  SystemInitializer(&plocal_var_228,&local_var_1e8);
  local_var_1e8 = (void **)0x38400000640;
  SystemInitializer(&plocal_var_228,&local_var_1e8);
  local_var_1e8 = (void **)0x2d000000500;
  uVar7 = SystemInitializer(&plocal_var_228,&local_var_1e8);
  cVar6 = function_103800(uVar7,&local_var_1d8,lVar1);
  uVar12 = 4;
  uVar13 = uVar14;
  if (cVar6 == '\0') {
    cVar6 = function_103800(extraout_XMM0_Da,&local_var_138,lVar1);
    if (cVar6 == '\0') {
      cVar6 = function_103800(extraout_XMM0_Da_00,&local_var_1b8,lVar1);
      if (cVar6 == '\0') {
        cVar6 = function_103800(extraout_XMM0_Da_01,&local_var_158,lVar1);
        if (cVar6 == '\0') {
          cVar6 = function_103800(extraout_XMM0_Da_02,&local_var_178,lVar1);
          uVar12 = 2;
          if (cVar6 == '\0') {
            cVar6 = function_103800(extraout_XMM0_Da_03,&local_var_198,lVar1);
            uVar13 = 3;
            if (cVar6 == '\0') {
              cVar6 = function_103800(extraout_XMM0_Da_04,&local_var_118,lVar1);
              if (cVar6 == '\0') goto LAB_1801035ea;
              uVar13 = 5;
            }
            uVar12 = 1;
          }
          else {
            uVar13 = 3;
          }
        }
        else {
          uVar13 = 3;
          uVar12 = 3;
        }
      }
      else {
        uVar13 = 3;
      }
    }
    else {
      uVar13 = 2;
    }
  }
LAB_1801035ea:
  function_171f10(*(uint64_t *)(system_main_module_state + 8),&local_var_1e8);
  uVar4 = (uint64_t)local_var_1e8;
  puVar3 = plocal_var_228;
  iVar5 = local_var_1e8._4_4_;
  iVar10 = local_var_1e8._4_4_ * (int)local_var_1e8;
  if (iVar10 < *(int *)(plocal_var_228 + uVar13 * 8 + 4) * *(int *)(plocal_var_228 + uVar13 * 8)) {
    uVar12 = uVar12 + 1;
  }
  else if (*(int *)(plocal_var_228 + uVar13 * 8 + 4) * *(int *)(plocal_var_228 + uVar13 * 8) < iVar10) {
    uVar12 = uVar12 - 1;
  }
  if (-1 < (int)uVar12) {
    if (4 < (int)uVar12) {
      uVar12 = 4;
    }
    uVar14 = (uint64_t)uVar12;
  }
  function_05ca20(SYSTEM_STATE_MANAGER,1);
  function_06b4c0(SYSTEM_STATE_MANAGER,uVar4 & 0xffffffff);
  uVar7 = function_06b440(SYSTEM_STATE_MANAGER,iVar5);
  function_100ff0(uVar7,uVar14);
  if (uVar16 < 0x708) {
    function_10e330(SYSTEM_STATE_MANAGER,0);
    function_10d570(SYSTEM_STATE_MANAGER,0);
    function_10d5f0(SYSTEM_STATE_MANAGER,1);
  }
  else if (uVar16 < 0xaf0) {
    function_10e330(SYSTEM_STATE_MANAGER,0);
    function_10d570(SYSTEM_STATE_MANAGER,1);
    function_10d5f0(SYSTEM_STATE_MANAGER,2);
  }
  else if (uVar16 < 0xed8) {
    function_10e330(SYSTEM_STATE_MANAGER,1);
    function_10d570(SYSTEM_STATE_MANAGER,2);
  }
  else {
    uVar11 = 2;
    if (0x16a7 < uVar16) {
      uVar11 = 3;
    }
    function_10e330(SYSTEM_STATE_MANAGER,uVar11);
  }
  function_623de0(aplocal_var_e8);
  if (iStack_50 < 4) {
    uVar11 = 0;
  }
  else if (iStack_50 < 5) {
    uVar11 = 1;
  }
  else {
    uVar11 = 2;
    if (8 < iStack_50) {
      uVar11 = 3;
    }
  }
  uVar7 = function_10cff0(uVar2,uVar11);
  if (cStack_1e0 != '\0') {
    function_103970(uVar7,1);
  }
  local_var_1e8 = aplocal_var_e8;
  aplocal_var_e8[0] = &system_state_ptr;
  if (puVar3 == (void *)0x0) {
    DataSerializationEngine(&local_var_118);
    DataSerializationEngine(&local_var_198);
    DataSerializationEngine(&local_var_178);
    DataSerializationEngine(&local_var_158);
    DataSerializationEngine(&local_var_1b8);
    DataSerializationEngine(&local_var_138);
    DataSerializationEngine(&local_var_1d8);
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_248);
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar3);
}
uint64_t function_103800(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  char cVar1;
  void *puVar2;
  void *puVar3;
  void *puVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int iVar7;
  uint uVar8;
  int64_t lVar9;
  void *plocal_var_30;
  void *plocal_var_28;
  uint local_var_20;
  SystemCore_EncryptionEngine0(&plocal_var_30,param_3,param_3,param_4,0xfffffffffffffffe);
  uVar8 = 0;
  if (local_var_20 != 0) {
    lVar9 = 0;
    do {
      cVar1 = plocal_var_28[lVar9];
      if ((byte)(cVar1 + 0xbfU) < 0x1a) {
        plocal_var_28[lVar9] = cVar1 + ' ';
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 1;
    } while (uVar8 < local_var_20);
  }
  iVar7 = 0;
  lVar9 = *param_2;
  if (param_2[1] - lVar9 >> 5 != 0) {
    lVar5 = 0;
    do {
      puVar3 = &system_buffer_ptr;
      if (plocal_var_28 != (void *)0x0) {
        puVar3 = plocal_var_28;
      }
      puVar4 = *(void **)(lVar5 + 8 + lVar9);
      puVar2 = &system_buffer_ptr;
      if (puVar4 != (void *)0x0) {
        puVar2 = puVar4;
      }
      lVar9 = strstr(puVar2,puVar3);
      if (lVar9 != 0) {
LAB_180103916:
        uVar6 = 1;
        goto LAB_18010391c;
      }
      puVar3 = *(void **)(lVar5 + 8 + *param_2);
      puVar4 = &system_buffer_ptr;
      if (puVar3 != (void *)0x0) {
        puVar4 = puVar3;
      }
      puVar3 = &system_buffer_ptr;
      if (plocal_var_28 != (void *)0x0) {
        puVar3 = plocal_var_28;
      }
      lVar9 = strstr(puVar3,puVar4);
      if (lVar9 != 0) goto LAB_180103916;
      iVar7 = iVar7 + 1;
      lVar5 = lVar5 + 0x20;
      lVar9 = *param_2;
    } while ((uint64_t)(int64_t)iVar7 < (uint64_t)(param_2[1] - lVar9 >> 5));
  }
  uVar6 = 0;
LAB_18010391c:
  plocal_var_30 = &system_data_buffer_ptr;
  if (plocal_var_28 == (void *)0x0) {
    return uVar6;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address