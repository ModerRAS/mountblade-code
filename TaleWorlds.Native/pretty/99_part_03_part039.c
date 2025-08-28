/* 函数别名定义: DataEncryptionHandler */
#define DataEncryptionHandler DataEncryptionHandler
/* 函数别名定义: MemoryDebugger */
#define MemoryDebugger MemoryDebugger
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_03_part039.c - 1 个函数
// 函数: void function_1f1300(int64_t param_1)
void function_1f1300(int64_t param_1)
{
  uint uVar1;
  int32_t uVar2;
  int32_t uVar3;
  void **ppuVar4;
  uint64_t *puVar5;
  int32_t uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint64_t uVar11;
  int64_t *plVar12;
  int32_t *puVar13;
  int8_t *puVar14;
  int8_t *puVar15;
  uint64_t *puVar16;
  uint64_t *puVar17;
  int32_t *puVar18;
  uint64_t *puVar19;
  uint uVar20;
  int64_t lVar21;
  uint64_t uVar22;
  int8_t stack_array_2f8 [32];
  int32_t local_var_2d8;
  int32_t local_var_2c8;
  void *plocal_var_2c0;
  int32_t *plocal_var_2b8;
  uint local_var_2b0;
  uint64_t local_var_2a8;
  void *plocal_var_2a0;
  uint64_t *plocal_var_298;
  uint local_var_290;
  uint64_t local_var_288;
  void *plocal_var_260;
  int32_t *plocal_var_258;
  int32_t local_var_250;
  int32_t local_var_248;
  int32_t local_var_244;
  int32_t local_var_240;
  int32_t local_var_23c;
  int8_t local_var_238;
  int32_t local_var_234;
  void **pplocal_var_230;
  void *plocal_var_228;
  int32_t *plocal_var_220;
  int32_t local_var_218;
  uint64_t local_var_210;
  void **pplocal_var_208;
  void *plocal_var_200;
  int64_t lStack_1f8;
  int32_t local_var_1e8;
  int32_t local_var_1d8;
  int32_t local_var_1d4;
  int32_t local_var_1d0;
  int32_t local_var_1cc;
  int32_t local_var_1c8;
  int32_t local_var_1c4;
  int32_t local_var_1c0;
  int32_t local_var_1bc;
  int32_t local_var_1b8;
  int32_t local_var_1b4;
  int32_t local_var_1b0;
  int32_t local_var_1ac;
  int32_t local_var_1a8;
  int32_t local_var_1a4;
  int32_t local_var_1a0;
  int32_t local_var_19c;
  int8_t local_var_198;
  int32_t local_var_197;
  int32_t local_var_193;
  uint64_t local_var_188;
  uint64_t stack_array_178 [24];
  uint64_t local_var_b8;
  uint64_t local_var_b0;
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  int32_t local_var_98;
  int32_t local_var_94;
  int32_t local_var_90;
  int32_t local_var_8c;
  int32_t local_var_88;
  int32_t local_var_84;
  int32_t local_var_80;
  int32_t local_var_7c;
  uint64_t local_var_38;
  local_var_188 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2f8;
  puVar14 = (int8_t *)0x0;
  uVar10 = 0;
  local_var_2c8 = 0;
  pplocal_var_208 = (void **)param_1;
  uVar11 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x880,0x10,0x1f);
  plVar12 = (int64_t *)function_301040(uVar11);
  if (plVar12 != (int64_t *)0x0) {
    pplocal_var_230 = (void **)plVar12;
    (**(code **)(*plVar12 + 0x28))(plVar12);
  }
  pplocal_var_230 = *(void ***)(param_1 + 0x20);
  *(int64_t **)(param_1 + 0x20) = plVar12;
  if (pplocal_var_230 != (void **)0x0) {
    (**(code **)((int64_t)*pplocal_var_230 + 0x38))();
  }
  plocal_var_228 = &system_data_buffer_ptr;
  local_var_210 = 0;
  plocal_var_220 = (int32_t *)0x0;
  local_var_218 = 0;
  puVar13 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x1e,0x13);
  *(int8_t *)puVar13 = 0;
  plocal_var_220 = puVar13;
  uVar6 = CoreEngineSystemCleanup(puVar13);
  local_var_210 = CONCAT44(local_var_210._4_4_,uVar6);
  *puVar13 = 0x5f33626d;
  puVar13[1] = 0x66726570;
  puVar13[2] = 0x616d726f;
  puVar13[3] = 0x5f65636e;
  *(uint64_t *)(puVar13 + 4) = 0x745f74726f706572;
  puVar13[6] = 0x5f6e776f;
  *(int16_t *)(puVar13 + 7) = 0x31;
  local_var_218 = 0x1d;
  lVar21 = *system_main_module_state;
  iVar7 = function_1426a0(lVar21,&plocal_var_228);
  if (iVar7 < 0) {
LAB_1801f1465:
    lVar21 = MemoryDebugger0();
  }
  else {
    if ((uint64_t)(*(int64_t *)(lVar21 + 0x890) - *(int64_t *)(lVar21 + 0x888) >> 5) <=
        (uint64_t)(int64_t)iVar7) goto LAB_1801f1465;
    lVar21 = (int64_t)iVar7 * 0x20 + *(int64_t *)(lVar21 + 0x888);
  }
  plocal_var_2a0 = &system_data_buffer_ptr;
  local_var_288 = 0;
  plocal_var_298 = (uint64_t *)0x0;
  local_var_290 = 0;
  local_var_2c8 = 1;
  uVar1 = *(uint *)(lVar21 + 0x10);
  uVar22 = (uint64_t)uVar1;
  uVar8 = 0;
  if (*(int64_t *)(lVar21 + 8) == 0) {
LAB_1801f14e3:
    uVar10 = uVar8;
    if (uVar1 != 0) {
// WARNING: Subroutine does not return
      memcpy(puVar14,*(uint64_t *)(lVar21 + 8),uVar22);
    }
  }
  else if (uVar1 != 0) {
    iVar7 = uVar1 + 1;
    if (iVar7 < 0x10) {
      iVar7 = 0x10;
    }
    puVar14 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar7,0x13);
    *puVar14 = 0;
    plocal_var_298 = (uint64_t *)puVar14;
    uVar8 = CoreEngineSystemCleanup(puVar14);
    local_var_288 = CONCAT44(local_var_288._4_4_,uVar8);
    goto LAB_1801f14e3;
  }
  if (puVar14 != (int8_t *)0x0) {
    puVar14[uVar22] = 0;
  }
  uVar8 = *(uint *)(lVar21 + 0x1c);
  local_var_288 = CONCAT44(uVar8,(int32_t)local_var_288);
  uVar20 = uVar1 + 9;
  if (uVar20 != 0) {
    uVar9 = uVar1 + 10;
    local_var_290 = uVar1;
    if (puVar14 == (int8_t *)0x0) {
      if ((int)uVar9 < 0x10) {
        uVar9 = 0x10;
      }
      puVar14 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar9,0x13);
      *puVar14 = 0;
    }
    else {
      if (uVar9 <= uVar10) goto LAB_1801f157c;
      local_var_2d8 = CONCAT31(local_var_2d8._1_3_,0x13);
      puVar14 = (int8_t *)DataValidator(system_memory_pool_ptr,puVar14,uVar9,0x10);
    }
    plocal_var_298 = (uint64_t *)puVar14;
    uVar6 = CoreEngineSystemCleanup(puVar14);
    local_var_288 = CONCAT44(local_var_288._4_4_,uVar6);
  }
LAB_1801f157c:
  *(uint64_t *)(puVar14 + uVar22) = 0x6a624f656e656353;
  *(int16_t *)(puVar14 + uVar22 + 8) = 0x2f;
  puVar15 = (int8_t *)0x0;
  uVar9 = 0;
  plocal_var_2c0 = &system_data_buffer_ptr;
  local_var_2a8 = 0;
  plocal_var_2b8 = (int32_t *)0x0;
  local_var_2b0 = 0;
  local_var_2c8 = 3;
  uVar10 = 0;
  local_var_290 = uVar20;
  if (puVar14 == (int8_t *)0x0) {
LAB_1801f161f:
    uVar9 = uVar10;
    if (uVar20 != 0) {
// WARNING: Subroutine does not return
      memcpy(puVar15,puVar14,uVar20);
    }
  }
  else if (uVar20 != 0) {
    iVar7 = uVar1 + 10;
    if (iVar7 < 0x10) {
      iVar7 = 0x10;
    }
    puVar15 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar7,0x13);
    *puVar15 = 0;
    plocal_var_2b8 = (int32_t *)puVar15;
    uVar10 = CoreEngineSystemCleanup(puVar15);
    local_var_2a8 = CONCAT44(local_var_2a8._4_4_,uVar10);
    goto LAB_1801f161f;
  }
  if (puVar15 != (int8_t *)0x0) {
    puVar15[uVar20] = 0;
  }
  local_var_2a8._4_4_ = uVar8;
  if (uVar1 + 0x26 != 0) {
    uVar10 = uVar1 + 0x27;
    local_var_2b0 = uVar20;
    if (puVar15 == (int8_t *)0x0) {
      if ((int)uVar10 < 0x10) {
        uVar10 = 0x10;
      }
      puVar15 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar10,0x13);
      *puVar15 = 0;
    }
    else {
      if (uVar10 <= uVar9) goto LAB_1801f16b2;
      local_var_2d8 = CONCAT31(local_var_2d8._1_3_,0x13);
      puVar15 = (int8_t *)DataValidator(system_memory_pool_ptr,puVar15,uVar10,0x10);
    }
    plocal_var_2b8 = (int32_t *)puVar15;
    local_var_2a8._0_4_ = CoreEngineSystemCleanup(puVar15);
  }
LAB_1801f16b2:
  puVar18 = (int32_t *)(puVar15 + uVar20);
  uVar6 = puVar13[1];
  uVar2 = puVar13[2];
  uVar3 = puVar13[3];
  *puVar18 = *puVar13;
  puVar18[1] = uVar6;
  puVar18[2] = uVar2;
  puVar18[3] = uVar3;
  *(uint64_t *)(puVar18 + 4) = *(uint64_t *)(puVar13 + 4);
  puVar18[6] = puVar13[6];
  *(int16_t *)(puVar18 + 7) = *(int16_t *)(puVar13 + 7);
  local_var_2b0 = uVar1 + 0x26;
  UtilitiesSystem_CacheManager(&plocal_var_2c0,&plocal_var_200,&system_data_d7c8);
  local_var_2c8 = 1;
  plocal_var_2c0 = &system_data_buffer_ptr;
  if (puVar15 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar15);
  }
  plocal_var_2b8 = (int32_t *)0x0;
  local_var_2a8 = (uint64_t)local_var_2a8._4_4_ << 0x20;
  plocal_var_2c0 = &system_state_ptr;
  local_var_2c8 = 0;
  plocal_var_2a0 = &system_data_buffer_ptr;
  if (puVar14 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar14);
  }
  plocal_var_298 = (uint64_t *)0x0;
  local_var_288 = local_var_288 & 0xffffffff00000000;
  plocal_var_2a0 = &system_state_ptr;
  pplocal_var_230 = &plocal_var_260;
  plocal_var_260 = &system_data_buffer_ptr;
  local_var_248 = 0;
  local_var_244 = 0;
  plocal_var_258 = (int32_t *)0x0;
  local_var_250 = 0;
  local_var_23c = 0x100;
  local_var_238 = 0;
  local_var_234 = 0;
  plocal_var_258 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x1e,0x13);
  *(int8_t *)plocal_var_258 = 0;
  local_var_248 = CoreEngineSystemCleanup(plocal_var_258);
  uVar6 = puVar13[1];
  uVar2 = puVar13[2];
  uVar3 = puVar13[3];
  *plocal_var_258 = *puVar13;
  plocal_var_258[1] = uVar6;
  plocal_var_258[2] = uVar2;
  plocal_var_258[3] = uVar3;
  *(uint64_t *)(plocal_var_258 + 4) = *(uint64_t *)(puVar13 + 4);
  plocal_var_258[6] = puVar13[6];
  *(int8_t *)(plocal_var_258 + 7) = *(int8_t *)(puVar13 + 7);
  local_var_250 = 0x1d;
  if (plocal_var_258 != (int32_t *)0x0) {
    *(int8_t *)((int64_t)plocal_var_258 + 0x1d) = 0;
  }
  local_var_244 = 0;
  local_var_240 = 0;
  local_var_23c = CONCAT31(local_var_23c._1_3_,1);
  uVar11 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x60d30,0x10,0x1f);
  plVar12 = (int64_t *)function_1954d0(uVar11,&plocal_var_260);
  pplocal_var_230 = (void **)plVar12;
  if (plVar12 != (int64_t *)0x0) {
    (**(code **)(*plVar12 + 0x28))(plVar12);
  }
  function_3898a0(plVar12 + 0x534);
  *(int8_t *)(plVar12 + 0x54c) = 1;
  plocal_var_2a0 = &system_data_buffer_ptr;
  local_var_288 = 0;
  plocal_var_298 = (uint64_t *)0x0;
  local_var_290 = 0;
  puVar18 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar18 = 0;
  plocal_var_298 = (uint64_t *)puVar18;
  uVar6 = CoreEngineSystemCleanup(puVar18);
  *puVar18 = 0x65736162;
  *(int8_t *)(puVar18 + 1) = 0;
  local_var_290 = 4;
  local_var_288._0_4_ = uVar6;
  DataEncryptionHandler0(plVar12 + 0xc0e2,&plocal_var_2a0);
  plocal_var_2a0 = &system_data_buffer_ptr;
  if (plocal_var_298 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_298 = (uint64_t *)0x0;
  local_var_288 = (uint64_t)local_var_288._4_4_ << 0x20;
  plocal_var_2a0 = &system_state_ptr;
  plocal_var_2c0 = &system_data_buffer_ptr;
  local_var_2a8 = 0;
  plocal_var_2b8 = (int32_t *)0x0;
  local_var_2b0 = 0;
  puVar18 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar18 = 0;
  plocal_var_2b8 = puVar18;
  uVar6 = CoreEngineSystemCleanup(puVar18);
  *puVar18 = 0x67656973;
  *(int16_t *)(puVar18 + 1) = 0x65;
  local_var_2b0 = 5;
  local_var_2a8._0_4_ = uVar6;
  DataEncryptionHandler0(plVar12 + 0xc0e2,&plocal_var_2c0);
  plocal_var_2c0 = &system_data_buffer_ptr;
  if (plocal_var_2b8 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_2b8 = (int32_t *)0x0;
  local_var_2a8 = (uint64_t)local_var_2a8._4_4_ << 0x20;
  plocal_var_2c0 = &system_state_ptr;
  plocal_var_2a0 = &system_data_buffer_ptr;
  local_var_288 = 0;
  plocal_var_298 = (uint64_t *)0x0;
  local_var_290 = 0;
  puVar16 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar16 = 0;
  plocal_var_298 = puVar16;
  uVar6 = CoreEngineSystemCleanup(puVar16);
  *puVar16 = 0x335f6c6576656c;
  local_var_290 = 7;
  local_var_288._0_4_ = uVar6;
  DataEncryptionHandler0(plVar12 + 0xc0e2,&plocal_var_2a0);
  plocal_var_2a0 = &system_data_buffer_ptr;
  if (plocal_var_298 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_298 = (uint64_t *)0x0;
  local_var_288 = (uint64_t)local_var_288._4_4_ << 0x20;
  plocal_var_2a0 = &system_state_ptr;
  *(int32_t *)(plVar12 + 0xc060) = 0;
  local_var_1d8 = 0x3f800000;
  local_var_1d4 = 0;
  local_var_1d0 = 0;
  local_var_1cc = 0;
  local_var_1c8 = 0;
  local_var_1c4 = 0x3f800000;
  local_var_1c0 = 0;
  local_var_1bc = 0;
  local_var_1b8 = 0;
  local_var_1b4 = 0;
  local_var_1b0 = 0x3f800000;
  local_var_1ac = 0;
  local_var_1a8 = 0;
  local_var_1a4 = 0;
  local_var_1a0 = 0;
  local_var_19c = 0x3f800000;
  local_var_197 = 0x1010101;
  local_var_193 = 1;
  local_var_198 = 0;
  local_var_2d8 = 0xffffffff;
  function_1a6440(plVar12,system_system_data_memory,&plocal_var_200,&local_var_1d8);
  function_19e260(plVar12);
  function_094c20(stack_array_178);
  lVar21 = function_1ae3a0(plVar12);
  if (lVar21 == 0) {
    puVar16 = (uint64_t *)function_1ac640(plVar12,&plocal_var_2a0);
    local_var_b8 = *puVar16;
    local_var_b0 = puVar16[1];
    local_var_a8 = puVar16[2];
    local_var_a0 = puVar16[3];
    local_var_98 = *(int32_t *)(puVar16 + 4);
    local_var_94 = *(int32_t *)((int64_t)puVar16 + 0x24);
    local_var_90 = *(int32_t *)(puVar16 + 5);
    local_var_8c = *(int32_t *)((int64_t)puVar16 + 0x2c);
    local_var_88 = *(int32_t *)(puVar16 + 6);
    local_var_84 = *(int32_t *)((int64_t)puVar16 + 0x34);
    local_var_80 = *(int32_t *)(puVar16 + 7);
    local_var_7c = *(int32_t *)((int64_t)puVar16 + 0x3c);
  }
  else {
    local_var_b8 = *(uint64_t *)(lVar21 + 0x70);
    local_var_b0 = *(uint64_t *)(lVar21 + 0x78);
    local_var_a8 = *(uint64_t *)(lVar21 + 0x80);
    local_var_a0 = *(uint64_t *)(lVar21 + 0x88);
    local_var_98 = *(int32_t *)(lVar21 + 0x90);
    local_var_94 = *(int32_t *)(lVar21 + 0x94);
    local_var_90 = *(int32_t *)(lVar21 + 0x98);
    local_var_8c = *(int32_t *)(lVar21 + 0x9c);
    local_var_88 = *(int32_t *)(lVar21 + 0xa0);
    local_var_84 = *(int32_t *)(lVar21 + 0xa4);
    local_var_80 = *(int32_t *)(lVar21 + 0xa8);
    local_var_7c = *(int32_t *)(lVar21 + 0xac);
  }
  function_2864f0(stack_array_178);
  local_var_2d8 = 0x44af0000;
  function_286e40(stack_array_178,0x3fd8f49c,0x3fe38e39,0x3e99999a);
  ppuVar4 = pplocal_var_208;
  lVar21 = 2;
  puVar16 = (uint64_t *)(*(int64_t *)((int64_t)pplocal_var_208 + 0x20) + 0x6e0);
  puVar5 = stack_array_178;
  do {
    puVar19 = puVar5;
    puVar17 = puVar16;
    uVar11 = puVar19[1];
    *puVar17 = *puVar19;
    puVar17[1] = uVar11;
    uVar11 = puVar19[3];
    puVar17[2] = puVar19[2];
    puVar17[3] = uVar11;
    uVar11 = puVar19[5];
    puVar17[4] = puVar19[4];
    puVar17[5] = uVar11;
    uVar11 = puVar19[7];
    puVar17[6] = puVar19[6];
    puVar17[7] = uVar11;
    uVar11 = puVar19[9];
    puVar17[8] = puVar19[8];
    puVar17[9] = uVar11;
    uVar11 = puVar19[0xb];
    puVar17[10] = puVar19[10];
    puVar17[0xb] = uVar11;
    uVar11 = puVar19[0xd];
    puVar17[0xc] = puVar19[0xc];
    puVar17[0xd] = uVar11;
    uVar11 = puVar19[0xf];
    puVar17[0xe] = puVar19[0xe];
    puVar17[0xf] = uVar11;
    lVar21 = lVar21 + -1;
    puVar16 = puVar17 + 0x10;
    puVar5 = puVar19 + 0x10;
  } while (lVar21 != 0);
  uVar11 = puVar19[0x11];
  puVar17[0x10] = puVar19[0x10];
  puVar17[0x11] = uVar11;
  uVar11 = puVar19[0x13];
  puVar17[0x12] = puVar19[0x12];
  puVar17[0x13] = uVar11;
  uVar6 = *(int32_t *)((int64_t)puVar19 + 0xa4);
  uVar2 = *(int32_t *)(puVar19 + 0x15);
  uVar3 = *(int32_t *)((int64_t)puVar19 + 0xac);
  *(int32_t *)(puVar17 + 0x14) = *(int32_t *)(puVar19 + 0x14);
  *(int32_t *)((int64_t)puVar17 + 0xa4) = uVar6;
  *(int32_t *)(puVar17 + 0x15) = uVar2;
  *(int32_t *)((int64_t)puVar17 + 0xac) = uVar3;
  uVar6 = *(int32_t *)((int64_t)puVar19 + 0xb4);
  uVar2 = *(int32_t *)(puVar19 + 0x17);
  uVar3 = *(int32_t *)((int64_t)puVar19 + 0xbc);
  *(int32_t *)(puVar17 + 0x16) = *(int32_t *)(puVar19 + 0x16);
  *(int32_t *)((int64_t)puVar17 + 0xb4) = uVar6;
  *(int32_t *)(puVar17 + 0x17) = uVar2;
  *(int32_t *)((int64_t)puVar17 + 0xbc) = uVar3;
  function_301f30(*(uint64_t *)((int64_t)pplocal_var_208 + 0x20),plVar12);
  *(int8_t *)(*(int64_t *)((int64_t)ppuVar4 + 0x20) + 0x823) = 1;
  function_2e1590(*(int64_t *)((int64_t)ppuVar4 + 0x20) + 0x560,plVar12);
  (**(code **)(*plVar12 + 0x38))(plVar12);
  pplocal_var_208 = &plocal_var_260;
  plocal_var_260 = &system_data_buffer_ptr;
  if (plocal_var_258 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_258 = (int32_t *)0x0;
  local_var_248 = 0;
  plocal_var_260 = &system_state_ptr;
  plocal_var_200 = &system_data_buffer_ptr;
  if (lStack_1f8 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_1f8 = 0;
  local_var_1e8 = 0;
  plocal_var_200 = &system_state_ptr;
  plocal_var_228 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar13);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address