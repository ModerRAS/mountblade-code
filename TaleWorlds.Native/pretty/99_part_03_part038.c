/* 函数别名定义: DataEncryptionHandler */
#define DataEncryptionHandler DataEncryptionHandler
/* 函数别名定义: MemoryDebugger */
#define MemoryDebugger MemoryDebugger
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_03_part038.c - 3 个函数
// 函数: void function_1f0ed0(int64_t param_1,int32_t param_2)
void function_1f0ed0(int64_t param_1,int32_t param_2)
{
  uint uVar1;
  code *pcVar2;
  int32_t uVar3;
  int32_t uVar4;
  int64_t lVar5;
  void **ppuVar6;
  uint64_t *puVar7;
  int32_t uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint64_t uVar13;
  int64_t *plVar14;
  int32_t *puVar15;
  int8_t *puVar16;
  int8_t *puVar17;
  uint64_t *puVar18;
  uint64_t *puVar19;
  int32_t *puVar20;
  uint64_t *puVar21;
  uint uVar22;
  int64_t lVar23;
  uint64_t uVar24;
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
  uint64_t local_var_40;
  uint64_t local_var_38;
  plVar14 = system_main_module_state;
  if (*(char *)(param_1 + 8) != '\0') {
    if ((*(int64_t *)(param_1 + 0x20) != 0) &&
       (*(char *)(*(int64_t *)(param_1 + 0x20) + 0x820) != '\0')) {
      local_var_40 = 0x1801f0f36;
      uVar8 = function_093a20();
      local_var_40 = 0x1801f0f43;
      Function_87262e95(uVar8,0xbf800000);
      pcVar2 = *(code **)(**(int64_t **)(param_1 + 0x20) + 0xb8);
      if (pcVar2 == (code *)&ui_system_data_128_ptr) {
        lVar23 = (*(int64_t **)(param_1 + 0x20))[0xda];
      }
      else {
        local_var_40 = 0x1801f0f7f;
        lVar23 = (*pcVar2)();
      }
      local_var_40 = 0x1801f0f72;
      function_199500(lVar23,param_2,1);
    }
    return;
  }
  lVar23 = system_main_module_state[7];
  *(char *)(param_1 + 8) = (char)lVar23;
  lVar5 = system_system_data_memory;
  if ((char)lVar23 == '\0') {
    return;
  }
  *(int8_t *)((int64_t)plVar14 + 0x1ef) = 1;
  if (*(char *)(lVar5 + 0x21) == '\0') {
    return;
  }
  local_var_188 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2f8;
  puVar16 = (int8_t *)0x0;
  uVar12 = 0;
  local_var_2c8 = 0;
  pplocal_var_208 = (void **)param_1;
  uVar13 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x880,0x10,0x1f);
  plVar14 = (int64_t *)function_301040(uVar13);
  if (plVar14 != (int64_t *)0x0) {
    pplocal_var_230 = (void **)plVar14;
    (**(code **)(*plVar14 + 0x28))(plVar14);
  }
  pplocal_var_230 = *(void ***)(param_1 + 0x20);
  *(int64_t **)(param_1 + 0x20) = plVar14;
  if (pplocal_var_230 != (void **)0x0) {
    (**(code **)((int64_t)*pplocal_var_230 + 0x38))();
  }
  plocal_var_228 = &system_data_buffer_ptr;
  local_var_210 = 0;
  plocal_var_220 = (int32_t *)0x0;
  local_var_218 = 0;
  puVar15 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x1e,0x13);
  *(int8_t *)puVar15 = 0;
  plocal_var_220 = puVar15;
  uVar8 = CoreEngineSystemCleanup(puVar15);
  local_var_210 = CONCAT44(local_var_210._4_4_,uVar8);
  *puVar15 = 0x5f33626d;
  puVar15[1] = 0x66726570;
  puVar15[2] = 0x616d726f;
  puVar15[3] = 0x5f65636e;
  *(uint64_t *)(puVar15 + 4) = 0x745f74726f706572;
  puVar15[6] = 0x5f6e776f;
  *(int16_t *)(puVar15 + 7) = 0x31;
  local_var_218 = 0x1d;
  lVar23 = *system_main_module_state;
  iVar9 = function_1426a0(lVar23,&plocal_var_228);
  if (iVar9 < 0) {
LAB_1801f1465:
    lVar23 = MemoryDebugger0();
  }
  else {
    if ((uint64_t)(*(int64_t *)(lVar23 + 0x890) - *(int64_t *)(lVar23 + 0x888) >> 5) <=
        (uint64_t)(int64_t)iVar9) goto LAB_1801f1465;
    lVar23 = (int64_t)iVar9 * 0x20 + *(int64_t *)(lVar23 + 0x888);
  }
  plocal_var_2a0 = &system_data_buffer_ptr;
  local_var_288 = 0;
  plocal_var_298 = (uint64_t *)0x0;
  local_var_290 = 0;
  local_var_2c8 = 1;
  uVar1 = *(uint *)(lVar23 + 0x10);
  uVar24 = (uint64_t)uVar1;
  uVar10 = 0;
  if (*(int64_t *)(lVar23 + 8) == 0) {
LAB_1801f14e3:
    uVar12 = uVar10;
    if (uVar1 != 0) {
// WARNING: Subroutine does not return
      memcpy(puVar16,*(uint64_t *)(lVar23 + 8),uVar24);
    }
  }
  else if (uVar1 != 0) {
    iVar9 = uVar1 + 1;
    if (iVar9 < 0x10) {
      iVar9 = 0x10;
    }
    puVar16 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar9,0x13);
    *puVar16 = 0;
    plocal_var_298 = (uint64_t *)puVar16;
    uVar10 = CoreEngineSystemCleanup(puVar16);
    local_var_288 = CONCAT44(local_var_288._4_4_,uVar10);
    goto LAB_1801f14e3;
  }
  if (puVar16 != (int8_t *)0x0) {
    puVar16[uVar24] = 0;
  }
  uVar10 = *(uint *)(lVar23 + 0x1c);
  local_var_288 = CONCAT44(uVar10,(int32_t)local_var_288);
  uVar22 = uVar1 + 9;
  if (uVar22 != 0) {
    uVar11 = uVar1 + 10;
    local_var_290 = uVar1;
    if (puVar16 == (int8_t *)0x0) {
      if ((int)uVar11 < 0x10) {
        uVar11 = 0x10;
      }
      puVar16 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar11,0x13);
      *puVar16 = 0;
    }
    else {
      if (uVar11 <= uVar12) goto LAB_1801f157c;
      local_var_2d8 = CONCAT31(local_var_2d8._1_3_,0x13);
      puVar16 = (int8_t *)DataValidator(system_memory_pool_ptr,puVar16,uVar11,0x10);
    }
    plocal_var_298 = (uint64_t *)puVar16;
    uVar8 = CoreEngineSystemCleanup(puVar16);
    local_var_288 = CONCAT44(local_var_288._4_4_,uVar8);
  }
LAB_1801f157c:
  *(uint64_t *)(puVar16 + uVar24) = 0x6a624f656e656353;
  *(int16_t *)(puVar16 + uVar24 + 8) = 0x2f;
  puVar17 = (int8_t *)0x0;
  uVar11 = 0;
  plocal_var_2c0 = &system_data_buffer_ptr;
  local_var_2a8 = 0;
  plocal_var_2b8 = (int32_t *)0x0;
  local_var_2b0 = 0;
  local_var_2c8 = 3;
  uVar12 = 0;
  local_var_290 = uVar22;
  if (puVar16 == (int8_t *)0x0) {
LAB_1801f161f:
    uVar11 = uVar12;
    if (uVar22 != 0) {
// WARNING: Subroutine does not return
      memcpy(puVar17,puVar16,uVar22);
    }
  }
  else if (uVar22 != 0) {
    iVar9 = uVar1 + 10;
    if (iVar9 < 0x10) {
      iVar9 = 0x10;
    }
    puVar17 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar9,0x13);
    *puVar17 = 0;
    plocal_var_2b8 = (int32_t *)puVar17;
    uVar12 = CoreEngineSystemCleanup(puVar17);
    local_var_2a8 = CONCAT44(local_var_2a8._4_4_,uVar12);
    goto LAB_1801f161f;
  }
  if (puVar17 != (int8_t *)0x0) {
    puVar17[uVar22] = 0;
  }
  local_var_2a8._4_4_ = uVar10;
  if (uVar1 + 0x26 != 0) {
    uVar12 = uVar1 + 0x27;
    local_var_2b0 = uVar22;
    if (puVar17 == (int8_t *)0x0) {
      if ((int)uVar12 < 0x10) {
        uVar12 = 0x10;
      }
      puVar17 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar12,0x13);
      *puVar17 = 0;
    }
    else {
      if (uVar12 <= uVar11) goto LAB_1801f16b2;
      local_var_2d8 = CONCAT31(local_var_2d8._1_3_,0x13);
      puVar17 = (int8_t *)DataValidator(system_memory_pool_ptr,puVar17,uVar12,0x10);
    }
    plocal_var_2b8 = (int32_t *)puVar17;
    local_var_2a8._0_4_ = CoreEngineSystemCleanup(puVar17);
  }
LAB_1801f16b2:
  puVar20 = (int32_t *)(puVar17 + uVar22);
  uVar8 = puVar15[1];
  uVar3 = puVar15[2];
  uVar4 = puVar15[3];
  *puVar20 = *puVar15;
  puVar20[1] = uVar8;
  puVar20[2] = uVar3;
  puVar20[3] = uVar4;
  *(uint64_t *)(puVar20 + 4) = *(uint64_t *)(puVar15 + 4);
  puVar20[6] = puVar15[6];
  *(int16_t *)(puVar20 + 7) = *(int16_t *)(puVar15 + 7);
  local_var_2b0 = uVar1 + 0x26;
  UtilitiesSystem_CacheManager(&plocal_var_2c0,&plocal_var_200,&system_data_d7c8);
  local_var_2c8 = 1;
  plocal_var_2c0 = &system_data_buffer_ptr;
  if (puVar17 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar17);
  }
  plocal_var_2b8 = (int32_t *)0x0;
  local_var_2a8 = (uint64_t)local_var_2a8._4_4_ << 0x20;
  plocal_var_2c0 = &system_state_ptr;
  local_var_2c8 = 0;
  plocal_var_2a0 = &system_data_buffer_ptr;
  if (puVar16 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar16);
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
  uVar8 = puVar15[1];
  uVar3 = puVar15[2];
  uVar4 = puVar15[3];
  *plocal_var_258 = *puVar15;
  plocal_var_258[1] = uVar8;
  plocal_var_258[2] = uVar3;
  plocal_var_258[3] = uVar4;
  *(uint64_t *)(plocal_var_258 + 4) = *(uint64_t *)(puVar15 + 4);
  plocal_var_258[6] = puVar15[6];
  *(int8_t *)(plocal_var_258 + 7) = *(int8_t *)(puVar15 + 7);
  local_var_250 = 0x1d;
  if (plocal_var_258 != (int32_t *)0x0) {
    *(int8_t *)((int64_t)plocal_var_258 + 0x1d) = 0;
  }
  local_var_244 = 0;
  local_var_240 = 0;
  local_var_23c = CONCAT31(local_var_23c._1_3_,1);
  uVar13 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x60d30,0x10,0x1f);
  plVar14 = (int64_t *)function_1954d0(uVar13,&plocal_var_260);
  pplocal_var_230 = (void **)plVar14;
  if (plVar14 != (int64_t *)0x0) {
    (**(code **)(*plVar14 + 0x28))(plVar14);
  }
  function_3898a0(plVar14 + 0x534);
  *(int8_t *)(plVar14 + 0x54c) = 1;
  plocal_var_2a0 = &system_data_buffer_ptr;
  local_var_288 = 0;
  plocal_var_298 = (uint64_t *)0x0;
  local_var_290 = 0;
  puVar20 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar20 = 0;
  plocal_var_298 = (uint64_t *)puVar20;
  uVar8 = CoreEngineSystemCleanup(puVar20);
  *puVar20 = 0x65736162;
  *(int8_t *)(puVar20 + 1) = 0;
  local_var_290 = 4;
  local_var_288._0_4_ = uVar8;
  DataEncryptionHandler0(plVar14 + 0xc0e2,&plocal_var_2a0);
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
  puVar20 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar20 = 0;
  plocal_var_2b8 = puVar20;
  uVar8 = CoreEngineSystemCleanup(puVar20);
  *puVar20 = 0x67656973;
  *(int16_t *)(puVar20 + 1) = 0x65;
  local_var_2b0 = 5;
  local_var_2a8._0_4_ = uVar8;
  DataEncryptionHandler0(plVar14 + 0xc0e2,&plocal_var_2c0);
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
  puVar18 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar18 = 0;
  plocal_var_298 = puVar18;
  uVar8 = CoreEngineSystemCleanup(puVar18);
  *puVar18 = 0x335f6c6576656c;
  local_var_290 = 7;
  local_var_288._0_4_ = uVar8;
  DataEncryptionHandler0(plVar14 + 0xc0e2,&plocal_var_2a0);
  plocal_var_2a0 = &system_data_buffer_ptr;
  if (plocal_var_298 == (uint64_t *)0x0) {
    plocal_var_298 = (uint64_t *)0x0;
    local_var_288 = (uint64_t)local_var_288._4_4_ << 0x20;
    plocal_var_2a0 = &system_state_ptr;
    *(int32_t *)(plVar14 + 0xc060) = 0;
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
    function_1a6440(plVar14,system_system_data_memory,&plocal_var_200,&local_var_1d8);
    function_19e260(plVar14);
    function_094c20(stack_array_178);
    lVar23 = function_1ae3a0(plVar14);
    if (lVar23 == 0) {
      puVar18 = (uint64_t *)function_1ac640(plVar14,&plocal_var_2a0);
      local_var_b8 = *puVar18;
      local_var_b0 = puVar18[1];
      local_var_a8 = puVar18[2];
      local_var_a0 = puVar18[3];
      local_var_98 = *(int32_t *)(puVar18 + 4);
      local_var_94 = *(int32_t *)((int64_t)puVar18 + 0x24);
      local_var_90 = *(int32_t *)(puVar18 + 5);
      local_var_8c = *(int32_t *)((int64_t)puVar18 + 0x2c);
      local_var_88 = *(int32_t *)(puVar18 + 6);
      local_var_84 = *(int32_t *)((int64_t)puVar18 + 0x34);
      local_var_80 = *(int32_t *)(puVar18 + 7);
      local_var_7c = *(int32_t *)((int64_t)puVar18 + 0x3c);
    }
    else {
      local_var_b8 = *(uint64_t *)(lVar23 + 0x70);
      local_var_b0 = *(uint64_t *)(lVar23 + 0x78);
      local_var_a8 = *(uint64_t *)(lVar23 + 0x80);
      local_var_a0 = *(uint64_t *)(lVar23 + 0x88);
      local_var_98 = *(int32_t *)(lVar23 + 0x90);
      local_var_94 = *(int32_t *)(lVar23 + 0x94);
      local_var_90 = *(int32_t *)(lVar23 + 0x98);
      local_var_8c = *(int32_t *)(lVar23 + 0x9c);
      local_var_88 = *(int32_t *)(lVar23 + 0xa0);
      local_var_84 = *(int32_t *)(lVar23 + 0xa4);
      local_var_80 = *(int32_t *)(lVar23 + 0xa8);
      local_var_7c = *(int32_t *)(lVar23 + 0xac);
    }
    function_2864f0(stack_array_178);
    local_var_2d8 = 0x44af0000;
    function_286e40(stack_array_178,0x3fd8f49c,0x3fe38e39,0x3e99999a);
    ppuVar6 = pplocal_var_208;
    lVar23 = 2;
    puVar18 = (uint64_t *)(*(int64_t *)((int64_t)pplocal_var_208 + 0x20) + 0x6e0);
    puVar7 = stack_array_178;
    do {
      puVar21 = puVar7;
      puVar19 = puVar18;
      uVar13 = puVar21[1];
      *puVar19 = *puVar21;
      puVar19[1] = uVar13;
      uVar13 = puVar21[3];
      puVar19[2] = puVar21[2];
      puVar19[3] = uVar13;
      uVar13 = puVar21[5];
      puVar19[4] = puVar21[4];
      puVar19[5] = uVar13;
      uVar13 = puVar21[7];
      puVar19[6] = puVar21[6];
      puVar19[7] = uVar13;
      uVar13 = puVar21[9];
      puVar19[8] = puVar21[8];
      puVar19[9] = uVar13;
      uVar13 = puVar21[0xb];
      puVar19[10] = puVar21[10];
      puVar19[0xb] = uVar13;
      uVar13 = puVar21[0xd];
      puVar19[0xc] = puVar21[0xc];
      puVar19[0xd] = uVar13;
      uVar13 = puVar21[0xf];
      puVar19[0xe] = puVar21[0xe];
      puVar19[0xf] = uVar13;
      lVar23 = lVar23 + -1;
      puVar18 = puVar19 + 0x10;
      puVar7 = puVar21 + 0x10;
    } while (lVar23 != 0);
    uVar13 = puVar21[0x11];
    puVar19[0x10] = puVar21[0x10];
    puVar19[0x11] = uVar13;
    uVar13 = puVar21[0x13];
    puVar19[0x12] = puVar21[0x12];
    puVar19[0x13] = uVar13;
    uVar8 = *(int32_t *)((int64_t)puVar21 + 0xa4);
    uVar3 = *(int32_t *)(puVar21 + 0x15);
    uVar4 = *(int32_t *)((int64_t)puVar21 + 0xac);
    *(int32_t *)(puVar19 + 0x14) = *(int32_t *)(puVar21 + 0x14);
    *(int32_t *)((int64_t)puVar19 + 0xa4) = uVar8;
    *(int32_t *)(puVar19 + 0x15) = uVar3;
    *(int32_t *)((int64_t)puVar19 + 0xac) = uVar4;
    uVar8 = *(int32_t *)((int64_t)puVar21 + 0xb4);
    uVar3 = *(int32_t *)(puVar21 + 0x17);
    uVar4 = *(int32_t *)((int64_t)puVar21 + 0xbc);
    *(int32_t *)(puVar19 + 0x16) = *(int32_t *)(puVar21 + 0x16);
    *(int32_t *)((int64_t)puVar19 + 0xb4) = uVar8;
    *(int32_t *)(puVar19 + 0x17) = uVar3;
    *(int32_t *)((int64_t)puVar19 + 0xbc) = uVar4;
    function_301f30(*(uint64_t *)((int64_t)pplocal_var_208 + 0x20),plVar14);
    *(int8_t *)(*(int64_t *)((int64_t)ppuVar6 + 0x20) + 0x823) = 1;
    function_2e1590(*(int64_t *)((int64_t)ppuVar6 + 0x20) + 0x560,plVar14);
    (**(code **)(*plVar14 + 0x38))(plVar14);
    pplocal_var_208 = &plocal_var_260;
    plocal_var_260 = &system_data_buffer_ptr;
    if (plocal_var_258 == (int32_t *)0x0) {
      plocal_var_258 = (int32_t *)0x0;
      local_var_248 = 0;
      plocal_var_260 = &system_state_ptr;
      plocal_var_200 = &system_data_buffer_ptr;
      if (lStack_1f8 == 0) {
        lStack_1f8 = 0;
        local_var_1e8 = 0;
        plocal_var_200 = &system_state_ptr;
        plocal_var_228 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(puVar15);
      }
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1f0f90(uint64_t param_1,int64_t param_2)
void function_1f0f90(uint64_t param_1,int64_t param_2)
{
  uint uVar1;
  uint uVar2;
  int8_t stack_array_98 [32];
  int32_t local_var_78;
  void *plocal_var_70;
  int64_t lStack_68;
  uint local_var_60;
  int32_t local_var_58;
  int32_t local_var_54;
  uint64_t local_var_50;
  void *plocal_var_48;
  int8_t *plocal_var_40;
  int32_t local_var_38;
  int8_t stack_array_30 [16];
  uint64_t local_var_20;
  local_var_50 = 0xfffffffffffffffe;
  local_var_20 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_98;
  local_var_78 = 0;
  (**(code **)(*(int64_t *)(param_2 + 0x80) + 0x10))((int64_t *)(param_2 + 0x80),&system_data_d128);
  plocal_var_48 = &system_config_ptr;
  plocal_var_40 = stack_array_30;
  stack_array_30[0] = 0;
  local_var_38 = 6;
  strcpy_s(stack_array_30,0x10,&rendering_buffer_2588_ptr);
  local_var_78 = 1;
  SystemCore_EncryptionEngine0(&plocal_var_70,&plocal_var_48);
  uVar2 = local_var_60;
  local_var_78 = 0;
  plocal_var_48 = &system_state_ptr;
  uVar1 = local_var_60 + 8;
  CoreEngineDataBufferProcessor(&plocal_var_70,uVar1);
  *(uint64_t *)((uint64_t)local_var_60 + lStack_68) = 0x2f73656c75646f4d;
  *(int8_t *)((uint64_t *)((uint64_t)local_var_60 + lStack_68) + 1) = 0;
  local_var_60 = uVar1;
  if (0 < *(int *)(param_2 + 0x90)) {
    CoreEngineDataBufferProcessor(&plocal_var_70,uVar1 + *(int *)(param_2 + 0x90));
// WARNING: Subroutine does not return
    memcpy((uint64_t)local_var_60 + lStack_68,*(uint64_t *)(param_2 + 0x88),
           (int64_t)(*(int *)(param_2 + 0x90) + 1));
  }
  uVar2 = uVar2 + 9;
  CoreEngineDataBufferProcessor(&plocal_var_70,(uint64_t)uVar2);
  *(int16_t *)((uint64_t)local_var_60 + lStack_68) = 0x2f;
  local_var_60 = uVar2;
  if (lStack_68 != 0) {
    CoreEngineDataBufferProcessor(param_2 + 0xa0,uVar2);
  }
  if (uVar2 != 0) {
// WARNING: Subroutine does not return
    memcpy(*(uint64_t *)(param_2 + 0xa8),lStack_68,uVar2);
  }
  *(int32_t *)(param_2 + 0xb0) = 0;
  if (*(int64_t *)(param_2 + 0xa8) != 0) {
    *(int8_t *)((uint64_t)uVar2 + *(int64_t *)(param_2 + 0xa8)) = 0;
  }
  *(int32_t *)(param_2 + 0xbc) = local_var_54;
  *(int8_t *)(param_2 + 0x7c) = 0;
  *(int32_t *)(param_2 + 0x78) = 1;
  plocal_var_70 = &system_data_buffer_ptr;
  if (lStack_68 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_68 = 0;
  local_var_58 = 0;
  plocal_var_70 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_20 ^ (uint64_t)stack_array_98,0);
}
// 函数: void function_1f11a0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_1f11a0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  void *plocal_var_30;
  int32_t *plocal_var_28;
  int32_t local_var_20;
  uint64_t local_var_18;
  plocal_var_30 = &system_data_buffer_ptr;
  local_var_18 = 0;
  plocal_var_28 = (int32_t *)0x0;
  local_var_20 = 0;
  CoreEngineDataBufferProcessor(&plocal_var_30,0x22,param_3,param_4,0xfffffffffffffffe);
  *plocal_var_28 = 0x74696465;
  plocal_var_28[1] = 0x735f726f;
  plocal_var_28[2] = 0x70697263;
  plocal_var_28[3] = 0x6f635f74;
  plocal_var_28[4] = 0x6e6f706d;
  plocal_var_28[5] = 0x5f746e65;
  plocal_var_28[6] = 0x69666564;
  plocal_var_28[7] = 0x6974696e;
  *(int16_t *)(plocal_var_28 + 8) = 0x6e6f;
  *(int8_t *)((int64_t)plocal_var_28 + 0x22) = 0;
  local_var_20 = 0x22;
  function_354b70(&plocal_var_30,function_3f5b70,_guard_check_icall);
  return;
}
uint64_t *
function_1f1250(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &system_data_buffer_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  CoreEngineDataBufferProcessor(param_2,0x22,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (uint64_t *)param_2[1];
  *puVar1 = 0x735f726f74696465;
  puVar1[1] = 0x6f635f7470697263;
  puVar1[2] = 0x5f746e656e6f706d;
  puVar1[3] = 0x6974696e69666564;
  *(int16_t *)(puVar1 + 4) = 0x6e6f;
  *(int8_t *)((int64_t)puVar1 + 0x22) = 0;
  *(int32_t *)(param_2 + 2) = 0x22;
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address