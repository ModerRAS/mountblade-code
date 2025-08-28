/* SystemScheduler - RenderingSystem_ResourceBinder */
#define RenderingSystem_ResourceBinder SystemScheduler
/* 函数别名定义: MemoryDebugger */
#define MemoryDebugger MemoryDebugger
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_07_part017.c - 4 个函数
// 函数: void UISystem_ab140(void)
void UISystem_ab140(void)
{
  void *puVar1;
  int32_t uVar2;
  int iVar3;
  uint uVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  void **ppuVar7;
  int64_t lVar8;
  int32_t *puVar9;
  int8_t *puVar10;
  int64_t *plVar11;
  uint uVar12;
  uint64_t uVar13;
  void *puVar14;
  uint64_t uVar15;
  int8_t stack_array_3b8 [32];
  int32_t local_var_398;
  void *plocal_var_388;
  int8_t *plocal_var_380;
  uint local_var_378;
  uint local_var_370;
  void *plocal_var_368;
  int8_t *plocal_var_360;
  uint local_var_358;
  uint64_t local_var_350;
  int32_t local_var_348;
  int32_t local_var_344;
  int8_t local_var_340;
  int32_t local_var_33c;
  void **pplocal_var_338;
  int32_t local_var_330;
  int32_t local_var_32c;
  int64_t *plStack_320;
  int64_t *plStack_318;
  void *plocal_var_310;
  int64_t lStack_308;
  int32_t local_var_2f8;
  void *plocal_var_2f0;
  int64_t lStack_2e8;
  int32_t local_var_2d8;
  void **pplocal_var_2c8;
  int32_t local_var_2c0;
  int32_t local_var_2bc;
  uint64_t local_var_2b8;
  uint64_t local_var_2b0;
  uint64_t local_var_2a8;
  uint64_t local_var_2a0;
  uint64_t local_var_298;
  uint64_t local_var_290;
  uint64_t local_var_288;
  uint64_t local_var_280;
  int16_t local_var_278;
  int8_t local_var_276;
  int32_t local_var_275;
  int16_t local_var_271;
  uint64_t local_var_268;
  void *plocal_var_258;
  int8_t *plocal_var_250;
  int32_t local_var_248;
  int8_t stack_array_240 [136];
  void *plocal_var_1b8;
  uint64_t *plocal_var_1b0;
  uint stack_array_1a8 [4];
  void *plocal_var_198;
  int32_t *plocal_var_190;
  int32_t local_var_188;
  uint64_t local_var_180;
  void *plocal_var_178;
  int32_t *plocal_var_170;
  int32_t local_var_168;
  uint64_t local_var_160;
  void *plocal_var_158;
  int32_t *plocal_var_150;
  int32_t local_var_148;
  uint64_t local_var_140;
  void *plocal_var_138;
  uint64_t *plocal_var_130;
  int32_t local_var_128;
  uint64_t local_var_120;
  void *plocal_var_118;
  uint64_t *plocal_var_110;
  int aiStack_108 [4];
  void *plocal_var_f8;
  uint64_t local_var_f0;
  int32_t local_var_e8;
  uint64_t local_var_e0;
  void *plocal_var_d8;
  uint64_t local_var_d0;
  int32_t local_var_c8;
  uint64_t local_var_c0;
  void *plocal_var_b8;
  uint64_t local_var_b0;
  int32_t local_var_a8;
  uint64_t local_var_a0;
  void *plocal_var_98;
  uint64_t local_var_90;
  int32_t local_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  local_var_268 = 0xfffffffffffffffe;
  local_var_78 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_3b8;
  uVar13 = 0;
  plocal_var_1b8 = &system_data_buffer_ptr;
  stack_array_1a8[2] = 0;
  stack_array_1a8[3] = 0;
  plocal_var_1b0 = (uint64_t *)0x0;
  stack_array_1a8[0] = 0;
  plocal_var_1b0 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)plocal_var_1b0 = 0;
  uVar2 = CoreEngineSystemCleanup(plocal_var_1b0);
  stack_array_1a8[2] = uVar2;
  *plocal_var_1b0 = 0x646c6f735f6e6373;
  *(int32_t *)(plocal_var_1b0 + 1) = 0x726569;
  stack_array_1a8[0] = 0xb;
  plocal_var_198 = &system_data_buffer_ptr;
  local_var_180 = 0;
  plocal_var_190 = (int32_t *)0x0;
  local_var_188 = 0;
  plocal_var_190 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x11,0x13);
  *(int8_t *)plocal_var_190 = 0;
  uVar2 = CoreEngineSystemCleanup(plocal_var_190);
  local_var_180 = CONCAT44(local_var_180._4_4_,uVar2);
  *plocal_var_190 = 0x5f6e6373;
  plocal_var_190[1] = 0x6d657469;
  plocal_var_190[2] = 0x6261745f;
  plocal_var_190[3] = 0x7561656c;
  *(int8_t *)(plocal_var_190 + 4) = 0;
  local_var_188 = 0x10;
  plocal_var_178 = &system_data_buffer_ptr;
  local_var_160 = 0;
  plocal_var_170 = (int32_t *)0x0;
  local_var_168 = 0;
  plocal_var_170 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x11,0x13);
  *(int8_t *)plocal_var_170 = 0;
  uVar2 = CoreEngineSystemCleanup(plocal_var_170);
  local_var_160 = CONCAT44(local_var_160._4_4_,uVar2);
  *plocal_var_170 = 0x5f6e6373;
  plocal_var_170[1] = 0x6d657469;
  plocal_var_170[2] = 0x6261745f;
  plocal_var_170[3] = 0x7561656c;
  *(int8_t *)(plocal_var_170 + 4) = 0;
  local_var_168 = 0x10;
  plocal_var_158 = &system_data_buffer_ptr;
  local_var_140 = 0;
  plocal_var_150 = (int32_t *)0x0;
  local_var_148 = 0;
  plocal_var_150 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x11,0x13);
  *(int8_t *)plocal_var_150 = 0;
  uVar2 = CoreEngineSystemCleanup(plocal_var_150);
  local_var_140 = CONCAT44(local_var_140._4_4_,uVar2);
  *plocal_var_150 = 0x5f6e6373;
  plocal_var_150[1] = 0x6d657469;
  plocal_var_150[2] = 0x6261745f;
  plocal_var_150[3] = 0x7561656c;
  *(int8_t *)(plocal_var_150 + 4) = 0;
  local_var_148 = 0x10;
  plocal_var_138 = &system_data_buffer_ptr;
  local_var_120 = 0;
  plocal_var_130 = (uint64_t *)0x0;
  local_var_128 = 0;
  plocal_var_130 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)plocal_var_130 = 0;
  uVar2 = CoreEngineSystemCleanup(plocal_var_130);
  local_var_120 = CONCAT44(local_var_120._4_4_,uVar2);
  *plocal_var_130 = 0x646c6f735f6e6373;
  *(int32_t *)(plocal_var_130 + 1) = 0x726569;
  local_var_128 = 0xb;
  plocal_var_118 = &system_data_buffer_ptr;
  aiStack_108[2] = 0;
  aiStack_108[3] = 0;
  plocal_var_110 = (uint64_t *)0x0;
  aiStack_108[0] = 0;
  plocal_var_110 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)plocal_var_110 = 0;
  uVar2 = CoreEngineSystemCleanup(plocal_var_110);
  aiStack_108[2] = uVar2;
  *plocal_var_110 = 0x6574636172616843;
  *(int32_t *)(plocal_var_110 + 1) = 0x2f7372;
  aiStack_108[0] = 0xb;
  plocal_var_f8 = &system_data_buffer_ptr;
  local_var_e0 = 0;
  local_var_f0 = 0;
  local_var_e8 = 0;
  plocal_var_d8 = &system_data_buffer_ptr;
  local_var_c0 = 0;
  local_var_d0 = 0;
  local_var_c8 = 0;
  plocal_var_b8 = &system_data_buffer_ptr;
  local_var_a0 = 0;
  local_var_b0 = 0;
  local_var_a8 = 0;
  plocal_var_98 = &system_data_buffer_ptr;
  local_var_80 = 0;
  local_var_90 = 0;
  local_var_88 = 0;
  plVar11 = (int64_t *)&system_data_6220;
  uVar15 = uVar13;
  do {
    plocal_var_258 = &memory_allocator_3432_ptr;
    plocal_var_250 = stack_array_240;
    stack_array_240[0] = 0;
    puVar1 = *(void **)((int64_t)stack_array_1a8 + (uVar13 - 8));
    local_var_248 = *(int32_t *)((int64_t)stack_array_1a8 + uVar13);
    puVar14 = &system_buffer_ptr;
    if (puVar1 != (void *)0x0) {
      puVar14 = puVar1;
    }
    strcpy_s(stack_array_240,0x80,puVar14);
    GenericFunction_18019e140(&plocal_var_2f0,&plocal_var_258);
    plocal_var_258 = &system_state_ptr;
    lVar8 = *system_main_module_state;
    iVar3 = GenericFunction_1801426a0(lVar8,(int64_t)&plocal_var_1b8 + uVar13);
    if (iVar3 < 0) {
LAB_1804ab686:
      lVar8 = MemoryDebugger0();
    }
    else {
      if ((uint64_t)(*(int64_t *)(lVar8 + 0x890) - *(int64_t *)(lVar8 + 0x888) >> 5) <=
          (uint64_t)(int64_t)iVar3) goto LAB_1804ab686;
      lVar8 = (int64_t)iVar3 * 0x20 + *(int64_t *)(lVar8 + 0x888);
    }
    UtilitiesSystem_FileHandler(lVar8,&plocal_var_310,&plocal_var_2f0);
    pplocal_var_338 = &plocal_var_368;
    plocal_var_368 = &system_data_buffer_ptr;
    local_var_350 = 0;
    plocal_var_360 = (int8_t *)0x0;
    local_var_358 = 0;
    local_var_344 = 0x100;
    local_var_340 = 0;
    local_var_33c = 0;
    uVar12 = *(uint *)((int64_t)stack_array_1a8 + uVar13);
    if (*(int64_t *)((int64_t)stack_array_1a8 + (uVar13 - 8)) == 0) {
LAB_1804ab729:
      if (uVar12 != 0) {
// WARNING: Subroutine does not return
        memcpy(plocal_var_360,*(uint64_t *)((int64_t)stack_array_1a8 + (uVar13 - 8)),(uint64_t)uVar12);
      }
    }
    else if (uVar12 != 0) {
      iVar3 = uVar12 + 1;
      if (iVar3 < 0x10) {
        iVar3 = 0x10;
      }
      plocal_var_360 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar3,0x13);
      *plocal_var_360 = 0;
      uVar2 = CoreEngineSystemCleanup(plocal_var_360);
      local_var_350 = CONCAT44(local_var_350._4_4_,uVar2);
      goto LAB_1804ab729;
    }
    if (plocal_var_360 != (int8_t *)0x0) {
      plocal_var_360[uVar12] = 0;
    }
    local_var_350 = CONCAT44(*(int32_t *)((int64_t)stack_array_1a8 + uVar13 + 0xc),
                          (int32_t)local_var_350);
    local_var_348 = 0;
    local_var_344 = 0x1000000;
    local_var_340 = 1;
    local_var_358 = uVar12;
    uVar5 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x60d30,0x10,0x1f);
    plVar6 = (int64_t *)function_1954d0(uVar5,&plocal_var_368);
    if (plVar6 != (int64_t *)0x0) {
      plStack_320 = plVar6;
      (**(code **)(*plVar6 + 0x28))(plVar6);
    }
    plStack_320 = (int64_t *)plVar11[5];
    plVar11[5] = (int64_t)plVar6;
    if (plStack_320 != (int64_t *)0x0) {
      (**(code **)(*plStack_320 + 0x38))();
    }
    local_var_2b8 = 0x3f800000;
    local_var_2b0 = 0;
    local_var_2a8 = 0x3f80000000000000;
    local_var_2a0 = 0;
    local_var_298 = 0;
    local_var_290 = 0x3f800000;
    local_var_288 = 0;
    local_var_280 = 0x3f80000000000000;
    local_var_275 = 0x1010101;
    local_var_271 = 0;
    local_var_278 = 0;
    local_var_276 = 0;
    local_var_398 = 0xffffffff;
    GenericFunction_1801a6440(plVar11[5],system_system_data_memory,&plocal_var_310,&local_var_2b8);
    function_19e260(plVar11[5]);
    iVar3 = *(int *)(plVar11[5] + 0x27c0);
    if (iVar3 < 8) {
      iVar3 = 8;
    }
    *(int *)(plVar11[5] + 0x27c0) = iVar3;
    *(int8_t *)(plVar11[5] + 0x60b90) = 1;
    *(int8_t *)(plVar11[5] + 0x60b91) = 1;
    *(int8_t *)(plVar11[5] + 0x28b8) = 1;
    *(int8_t *)(plVar11[5] + 0x250) = 0;
    ppuVar7 = (void **)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3090,8,3);
    *ppuVar7 = &ui_system_data_1920_ptr;
    ppuVar7[1] = (void *)0x0;
    pplocal_var_338 = ppuVar7;
    UISystem_d9b70(ppuVar7 + 2);
    UISystem_ca350(ppuVar7 + 0x5a6,0x40);
    plVar11[10] = (int64_t)ppuVar7;
    lVar8 = plVar11[5];
    plVar6 = *(int64_t **)(lVar8 + 0x3c0);
    if (plVar6 != (int64_t *)0x0) {
      (**(code **)(*plVar6 + 8))(plVar6,0);
    }
    *(void ***)(lVar8 + 0x3c0) = ppuVar7;
    (**(code **)(*ppuVar7 + 8))(ppuVar7,lVar8);
    ppuVar7 = (void **)plVar11[5];
    if (ppuVar7 == (void **)0x0) {
      local_var_330 = 0xffffffff;
    }
    else {
      local_var_330 = (**(code **)(*ppuVar7 + 8))(ppuVar7);
    }
    local_var_32c = local_var_2bc;
    pplocal_var_338 = ppuVar7;
    pplocal_var_2c8 = ppuVar7;
    local_var_2c0 = local_var_330;
    (**(code **)(system_system_data_memory + 0xe8))(&pplocal_var_338,uVar15);
    GenericFunction_1800ba9c0(&plocal_var_388);
    uVar12 = local_var_378 + 0x13;
    if (uVar12 != 0) {
      uVar4 = local_var_378 + 0x14;
      if (plocal_var_380 == (int8_t *)0x0) {
        if ((int)uVar4 < 0x10) {
          uVar4 = 0x10;
        }
        plocal_var_380 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar4,0x13);
        *plocal_var_380 = 0;
      }
      else {
        if (uVar4 <= local_var_370) goto LAB_1804ab990;
        local_var_398 = CONCAT31(local_var_398._1_3_,0x13);
        plocal_var_380 = (int8_t *)DataValidator(system_memory_pool_ptr,plocal_var_380,uVar4,0x10);
      }
      local_var_370 = CoreEngineSystemCleanup(plocal_var_380);
    }
LAB_1804ab990:
    puVar9 = (int32_t *)(plocal_var_380 + local_var_378);
    *puVar9 = 0x6e65472f;
    puVar9[1] = 0x74617265;
    puVar9[2] = 0x65546465;
    puVar9[3] = 0x72757478;
    puVar9[4] = 0x2f7365;
    local_var_378 = uVar12;
    if (0 < *(int *)((int64_t)aiStack_108 + uVar13)) {
      iVar3 = uVar12 + *(int *)((int64_t)aiStack_108 + uVar13);
      if (iVar3 != 0) {
        uVar12 = iVar3 + 1;
        if (plocal_var_380 == (int8_t *)0x0) {
          if ((int)uVar12 < 0x10) {
            uVar12 = 0x10;
          }
          plocal_var_380 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar12,0x13);
          *plocal_var_380 = 0;
        }
        else {
          if (uVar12 <= local_var_370) goto LAB_1804aba26;
          local_var_398 = CONCAT31(local_var_398._1_3_,0x13);
          plocal_var_380 = (int8_t *)DataValidator(system_memory_pool_ptr,plocal_var_380,uVar12,0x10);
        }
        local_var_370 = CoreEngineSystemCleanup(plocal_var_380);
      }
LAB_1804aba26:
// WARNING: Subroutine does not return
      memcpy(plocal_var_380 + local_var_378,*(uint64_t *)((int64_t)aiStack_108 + (uVar13 - 8)),
             (int64_t)(*(int *)((int64_t)aiStack_108 + uVar13) + 1));
    }
    uVar5 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x880,0x10,0x1f);
    plVar6 = (int64_t *)RenderingSystem_01040(uVar5);
    if (plVar6 != (int64_t *)0x0) {
      plStack_318 = plVar6;
      (**(code **)(*plVar6 + 0x28))(plVar6);
    }
    plStack_318 = (int64_t *)*plVar11;
    *plVar11 = (int64_t)plVar6;
    if (plStack_318 != (int64_t *)0x0) {
      (**(code **)(*plStack_318 + 0x38))();
    }
    plVar6 = (int64_t *)*plVar11;
    *(int8_t *)((int64_t)plVar6 + 0xdd) = 0;
    (**(code **)(*plVar6 + 0xc0))();
    RenderingSystem_01f30(*plVar11,plVar11[5]);
    RenderingSystem_033b0(*plVar11,0);
    *(int8_t *)(*plVar11 + 0xe8) = 1;
    *(int32_t *)(*plVar11 + 200) = 3;
    *(int8_t *)(*plVar11 + 0xe9) = 1;
    *(int8_t *)(*plVar11 + 0xea) = 1;
    puVar10 = &system_buffer_ptr;
    if (plocal_var_380 != (int8_t *)0x0) {
      puVar10 = plocal_var_380;
    }
    (**(code **)(*(int64_t *)(*plVar11 + 0xa8) + 0x10))((int64_t *)(*plVar11 + 0xa8),puVar10);
    *(int8_t *)(*plVar11 + 0x826) = 1;
    *(int32_t *)(*plVar11 + 0xd0) = 0;
    *(int8_t *)(*plVar11 + 0x823) = 1;
    RenderingSystem_03b70(*plVar11,0x7fffe9eb,0);
    lVar8 = *plVar11;
    *(int8_t *)(lVar8 + 0x824) = 1;
    if (*(int64_t *)(lVar8 + 0x588) != *(int64_t *)(lVar8 + 0x6d0)) {
      DataStructure_e1590(lVar8 + 0x560);
    }
    *(int8_t *)(*plVar11 + 0x6c2) = 1;
    plocal_var_388 = &system_data_buffer_ptr;
    if (plocal_var_380 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_380 = (int8_t *)0x0;
    local_var_370 = 0;
    plocal_var_388 = &system_state_ptr;
    pplocal_var_338 = &plocal_var_368;
    plocal_var_368 = &system_data_buffer_ptr;
    if (plocal_var_360 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_360 = (int8_t *)0x0;
    local_var_350 = local_var_350 & 0xffffffff00000000;
    plocal_var_368 = &system_state_ptr;
    plocal_var_310 = &system_data_buffer_ptr;
    if (lStack_308 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_308 = 0;
    local_var_2f8 = 0;
    plocal_var_310 = &system_state_ptr;
    plocal_var_2f0 = &system_data_buffer_ptr;
    if (lStack_2e8 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_2e8 = 0;
    local_var_2d8 = 0;
    plocal_var_2f0 = &system_state_ptr;
    uVar12 = (int)uVar15 + 1;
    uVar15 = (uint64_t)uVar12;
    uVar13 = uVar13 + 0x20;
    plVar11 = plVar11 + 1;
    if (4 < (int)uVar12) {
      SystemDataValidator(&plocal_var_118,0x20,5,SystemValidator);
      SystemDataValidator(&plocal_var_1b8,0x20,5,SystemValidator);
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_78 ^ (uint64_t)stack_array_3b8);
    }
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_abca0(int64_t **param_1)
void UISystem_abca0(int64_t **param_1)
{
  int32_t uVar1;
  int64_t **pplVar2;
  int64_t **pplVar3;
  int64_t lVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t lVar7;
  void *puVar8;
  int64_t lVar9;
  int64_t *plVar10;
  uint64_t uVar11;
  int64_t *plVar12;
  uint64_t uVar13;
  uint uVar14;
  int64_t *plVar15;
  int32_t uVar16;
  int64_t **pplStackX_8;
  int64_t *plStackX_10;
  int64_t ***ppplStackX_18;
  int64_t ***ppplStackX_20;
  int64_t *plStack_140;
  int64_t *plStack_138;
  void *plocal_var_130;
  int32_t local_var_128;
  int64_t *plStack_120;
  int64_t **pplStack_118;
  int iStack_110;
  uint64_t local_var_108;
  int32_t local_var_100;
  int32_t local_var_fc;
  int16_t local_var_f8;
  int8_t local_var_f6;
  int32_t local_var_f4;
  int8_t local_var_f0;
  uint64_t local_var_e8;
  int64_t *plStack_e0;
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  int32_t local_var_c8;
  uint64_t local_var_c0;
  uint64_t local_var_b8;
  int32_t local_var_b0;
  int32_t local_var_ac;
  int16_t local_var_a8;
  int8_t local_var_a6;
  int32_t local_var_a4;
  int8_t local_var_a0;
  uint64_t local_var_98;
  int64_t *plStack_90;
  uint64_t local_var_88;
  uint64_t local_var_80;
  int32_t local_var_78;
  uint64_t local_var_70;
  uint64_t local_var_68;
  int64_t **pplStack_60;
  int64_t ****pppplStack_58;
  local_var_68 = 0xfffffffffffffffe;
  if (system_system_memory != 0) {
    uVar11 = 0;
    uVar13 = uVar11;
    pplStackX_8 = param_1;
    lVar9 = system_system_memory;
    lVar7 = system_system_memory;
    if (system_system_memory - system_system_memory >> 6 != 0) {
      do {
        lVar9 = system_system_memory;
        uVar1 = *(int32_t *)(uVar11 + system_system_memory);
        uVar16 = CoreEngineDataTransformer(&plStack_140,system_system_memory + 8 + uVar11);
        plStack_120 = *(int64_t **)(uVar11 + 0x28 + lVar9);
        if (plStack_120 != (int64_t *)0x0) {
          uVar16 = (**(code **)(*plStack_120 + 0x28))();
        }
        pplStack_118 = *(int64_t ***)(uVar11 + 0x30 + lVar9);
        if (pplStack_118 != (int64_t **)0x0) {
          uVar16 = (*(code *)(*pplStack_118)[5])();
        }
        iStack_110 = *(int *)(uVar11 + 0x38 + lVar9);
        lVar9 = (int64_t)iStack_110;
        ppplStackX_20 = &pplStackX_8;
        pplStackX_8 = pplStack_118;
        if (pplStack_118 != (int64_t **)0x0) {
          uVar16 = (*(code *)(*pplStack_118)[5])();
        }
        pplStack_60 = &plStackX_10;
        plStackX_10 = plStack_120;
        if (plStack_120 != (int64_t *)0x0) {
          uVar16 = (**(code **)(*plStack_120 + 0x28))();
        }
        pppplStack_58 = &ppplStackX_18;
        ppplStackX_18 = *(int64_t ****)(lVar9 * 8 + 0x180c96248);
        if (ppplStackX_18 != (int64_t ***)0x0) {
          uVar16 = (*(code *)(*ppplStackX_18)[5])();
        }
        UISystem_acad0(uVar16,uVar1,&ppplStackX_18,&plStackX_10,&pplStackX_8,&plStack_140,iStack_110)
        ;
        if (pplStack_118 != (int64_t **)0x0) {
          (*(code *)(*pplStack_118)[7])();
        }
        if (plStack_120 != (int64_t *)0x0) {
          (**(code **)(*plStack_120 + 0x38))();
        }
        pplStackX_8 = &plStack_140;
        plStack_140 = (int64_t *)&system_data_buffer_ptr;
        if (plStack_138 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        plStack_138 = (int64_t *)0x0;
        local_var_128 = 0;
        plStack_140 = (int64_t *)&system_state_ptr;
        uVar14 = (int)uVar13 + 1;
        uVar11 = uVar11 + 0x40;
        uVar13 = (uint64_t)uVar14;
        lVar9 = system_system_memory;
        lVar7 = system_system_memory;
      } while ((uint64_t)(int64_t)(int)uVar14 < (uint64_t)(system_system_memory - system_system_memory >> 6))
      ;
    }
    for (; lVar4 = system_system_memory, lVar9 != system_system_memory; lVar9 = lVar9 + 0x40) {
      system_system_memory = lVar7;
      UISystem_ac4d0(lVar9);
      lVar7 = system_system_memory;
      system_system_memory = lVar4;
    }
    plVar12 = (int64_t *)0x180c96298;
    lVar9 = 5;
    system_system_memory = system_system_memory;
    do {
      pplVar2 = (int64_t **)*plVar12;
      if (pplVar2 != (int64_t **)0x0) {
        lVar7 = plVar12[-10];
        ppplStackX_18 = &pplStackX_8;
        pplStackX_8 = pplVar2;
        (*(code *)(*pplVar2)[5])();
        ppplStackX_20 = &pplStackX_8;
        CoreEngine_198980(lVar7,pplStackX_8);
        if (pplStackX_8 != (int64_t **)0x0) {
          (*(code *)(*pplStackX_8)[7])();
        }
        plStackX_10 = (int64_t *)*plVar12;
        *plVar12 = 0;
        if (plStackX_10 != (int64_t *)0x0) {
          (**(code **)(*plStackX_10 + 0x38))();
        }
      }
      plVar10 = (int64_t *)plVar12[-0xf];
      *(int8_t *)((int64_t)plVar10 + 0xdd) = 0;
      (**(code **)(*plVar10 + 0xc0))();
      plVar12 = plVar12 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    ppplStackX_18 = (int64_t ***)0x180c962c0;
    iVar5 = _Mtx_lock(0x180c962c0);
    if (iVar5 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar5);
    }
    plVar12 = system_system_memory;
    if (((int64_t)system_system_memory - (int64_t)system_system_memory) / 0x38 != 0) {
      pplVar2 = (int64_t **)*system_system_memory;
      if (pplVar2 != (int64_t **)0x0) {
        (*(code *)(*pplVar2)[5])();
      }
      plStack_140 = (int64_t *)plVar12[1];
      if (plStack_140 != (int64_t *)0x0) {
        (**(code **)(*plStack_140 + 0x28))();
      }
      CoreEngineDataTransformer(&plStack_138,plVar12 + 2);
      pplStack_118 = (int64_t **)CONCAT44(pplStack_118._4_4_,(int)plVar12[6]);
      lVar9 = (int64_t)(int)plVar12[6];
      local_var_b8 = 0;
      local_var_b0 = 0;
      local_var_ac = 0xffffffff;
      local_var_a8 = 1;
      local_var_a6 = 0;
      local_var_a4 = 0xffffffff;
      local_var_a0 = 1;
      local_var_98 = 0;
      plStack_90 = (int64_t *)0x0;
      local_var_88 = 0;
      local_var_80 = 0;
      local_var_78 = 3;
      local_var_70 = 0;
      local_var_108 = 0;
      local_var_100 = 0;
      local_var_fc = 0xffffffff;
      local_var_f8 = 1;
      local_var_f6 = 0;
      local_var_f4 = 0xffffffff;
      local_var_f0 = 1;
      local_var_e8 = 0;
      pplStackX_8 = &plStack_e0;
      plStack_e0 = (int64_t *)0x0;
      local_var_d8 = 0;
      local_var_d0 = 0;
      local_var_c8 = 3;
      local_var_c0 = 0;
      iVar5 = GenericFunction_1801a3620(*(uint64_t *)(lVar9 * 8 + 0x180c96248),&local_var_b8);
      if ((iVar5 == 0) && (iVar5 = DataStructure_e7bc0(pplVar2,&local_var_108), iVar5 == 0)) {
        lVar7 = 2;
        plVar12 = plStack_140 + 2;
        plVar10 = (int64_t *)(*(int64_t *)(&system_data_6220 + lVar9 * 8) + 0x6e0);
        do {
          plVar6 = plVar10;
          plVar15 = plVar12;
          lVar4 = plVar15[1];
          *plVar6 = *plVar15;
          plVar6[1] = lVar4;
          lVar4 = plVar15[3];
          plVar6[2] = plVar15[2];
          plVar6[3] = lVar4;
          lVar4 = plVar15[5];
          plVar6[4] = plVar15[4];
          plVar6[5] = lVar4;
          lVar4 = plVar15[7];
          plVar6[6] = plVar15[6];
          plVar6[7] = lVar4;
          lVar4 = plVar15[9];
          plVar6[8] = plVar15[8];
          plVar6[9] = lVar4;
          lVar4 = plVar15[0xb];
          plVar6[10] = plVar15[10];
          plVar6[0xb] = lVar4;
          lVar4 = plVar15[0xd];
          plVar6[0xc] = plVar15[0xc];
          plVar6[0xd] = lVar4;
          lVar4 = plVar15[0xf];
          plVar6[0xe] = plVar15[0xe];
          plVar6[0xf] = lVar4;
          lVar7 = lVar7 + -1;
          plVar12 = plVar15 + 0x10;
          plVar10 = plVar6 + 0x10;
        } while (lVar7 != 0);
        lVar7 = plVar15[0x11];
        plVar6[0x10] = plVar15[0x10];
        plVar6[0x11] = lVar7;
        lVar7 = plVar15[0x13];
        plVar6[0x12] = plVar15[0x12];
        plVar6[0x13] = lVar7;
        uVar1 = *(int32_t *)((int64_t)plVar15 + 0xa4);
        lVar7 = plVar15[0x15];
        uVar16 = *(int32_t *)((int64_t)plVar15 + 0xac);
        *(int *)(plVar6 + 0x14) = (int)plVar15[0x14];
        *(int32_t *)((int64_t)plVar6 + 0xa4) = uVar1;
        *(int *)(plVar6 + 0x15) = (int)lVar7;
        *(int32_t *)((int64_t)plVar6 + 0xac) = uVar16;
        uVar1 = *(int32_t *)((int64_t)plVar15 + 0xb4);
        lVar7 = plVar15[0x17];
        uVar16 = *(int32_t *)((int64_t)plVar15 + 0xbc);
        *(int *)(plVar6 + 0x16) = (int)plVar15[0x16];
        *(int32_t *)((int64_t)plVar6 + 0xb4) = uVar1;
        *(int *)(plVar6 + 0x17) = (int)lVar7;
        *(int32_t *)((int64_t)plVar6 + 0xbc) = uVar16;
        *(int8_t *)(*(int64_t *)(&system_data_6220 + lVar9 * 8) + 0xdd) = 1;
        RenderingSystem_UpdateCamera(pplVar2,1);
        puVar8 = &system_buffer_ptr;
        if (plocal_var_130 != (void *)0x0) {
          puVar8 = plocal_var_130;
        }
        (**(code **)(*(int64_t *)(*(int64_t *)(&system_data_6220 + lVar9 * 8) + 0x88) + 0x10))
                  ((int64_t *)(*(int64_t *)(&system_data_6220 + lVar9 * 8) + 0x88),puVar8);
        if (pplVar2 != (int64_t **)0x0) {
          pplStackX_8 = pplVar2;
          (*(code *)(*pplVar2)[5])(pplVar2);
        }
        pplStackX_8 = *(int64_t ***)(lVar9 * 8 + 0x180c96298);
        *(int64_t ***)(lVar9 * 8 + 0x180c96298) = pplVar2;
        if (pplStackX_8 != (int64_t **)0x0) {
          (*(code *)(*pplStackX_8)[7])();
        }
        plVar12 = system_system_memory;
        lVar9 = ((int64_t)system_system_memory - (int64_t)system_system_memory) / 0x38;
        pplVar3 = (int64_t **)system_system_memory[lVar9 * 7 + -7];
        if (pplVar3 != (int64_t **)0x0) {
          pplStackX_8 = pplVar3;
          (*(code *)(*pplVar3)[5])(pplVar3);
        }
        pplStackX_8 = (int64_t **)*plVar12;
        *plVar12 = (int64_t)pplVar3;
        if (pplStackX_8 != (int64_t **)0x0) {
          (*(code *)(*pplStackX_8)[7])();
        }
        pplVar3 = (int64_t **)plVar12[lVar9 * 7 + -6];
        if (pplVar3 != (int64_t **)0x0) {
          pplStackX_8 = pplVar3;
          (*(code *)(*pplVar3)[5])(pplVar3);
        }
        pplStackX_8 = (int64_t **)plVar12[1];
        plVar12[1] = (int64_t)pplVar3;
        if (pplStackX_8 != (int64_t **)0x0) {
          (*(code *)(*pplStackX_8)[7])();
        }
        uVar14 = *(uint *)(plVar12 + lVar9 * 7 + -3);
        uVar13 = (uint64_t)uVar14;
        if (plVar12[lVar9 * 7 + -4] != 0) {
          CoreEngineDataBufferProcessor(plVar12 + 2,uVar13);
        }
        if (uVar14 != 0) {
// WARNING: Subroutine does not return
          memcpy(plVar12[3],plVar12[lVar9 * 7 + -4],uVar13);
        }
        *(int32_t *)(plVar12 + 4) = 0;
        if (plVar12[3] != 0) {
          *(int8_t *)(uVar13 + plVar12[3]) = 0;
        }
        *(int32_t *)((int64_t)plVar12 + 0x2c) =
             *(int32_t *)((int64_t)plVar12 + lVar9 * 0x38 + -0xc);
        *(int *)(plVar12 + 6) = (int)plVar12[lVar9 * 7 + -1];
        plVar12 = system_system_memory +
                  (((int64_t)system_system_memory - (int64_t)system_system_memory) / 0x38) * 7;
        if ((plVar12 < system_system_memory) &&
           (lVar9 = ((int64_t)system_system_memory - (int64_t)plVar12) / 0x38, 0 < lVar9)) {
          plVar10 = plVar12 + -6;
          plVar15 = plVar12 + 2;
          do {
            lVar7 = *plVar12;
            *plVar12 = 0;
            pplStackX_8 = (int64_t **)plVar10[-1];
            plVar10[-1] = lVar7;
            if (pplStackX_8 != (int64_t **)0x0) {
              (*(code *)(*pplStackX_8)[7])();
            }
            lVar7 = plVar12[1];
            plVar12[1] = 0;
            plStackX_10 = (int64_t *)*plVar10;
            *plVar10 = lVar7;
            if (plStackX_10 != (int64_t *)0x0) {
              (**(code **)(*plStackX_10 + 0x38))();
            }
            RenderingSystem_ResourceBinder(plVar10 + 1,plVar15);
            *(int *)(plVar10 + 5) = (int)plVar12[6];
            lVar9 = lVar9 + -1;
            plVar10 = plVar10 + 7;
            plVar12 = plVar12 + 7;
            plVar15 = plVar15 + 7;
          } while (0 < lVar9);
        }
        system_system_memory = system_system_memory + -7;
        UISystem_ac5c0(system_system_memory);
      }
      pplStackX_8 = &plStack_e0;
      if (plStack_e0 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      pplStackX_8 = &plStack_90;
      if (plStack_90 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      pplStackX_8 = &plStack_138;
      plStack_138 = (int64_t *)&system_data_buffer_ptr;
      if (plocal_var_130 != (void *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      plocal_var_130 = (void *)0x0;
      plStack_120 = (int64_t *)((uint64_t)plStack_120 & 0xffffffff00000000);
      plStack_138 = (int64_t *)&system_state_ptr;
      if (plStack_140 != (int64_t *)0x0) {
        (**(code **)(*plStack_140 + 0x38))();
      }
      if (pplVar2 != (int64_t **)0x0) {
        (*(code *)(*pplVar2)[7])();
      }
    }
    iVar5 = _Mtx_unlock(0x180c962c0);
    if (iVar5 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar5);
    }
  }
  return;
}
int32_t *
UISystem_ac460(int32_t *param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  *param_1 = *param_2;
  CoreEngineDataTransformer(param_1 + 2,param_2 + 2,param_3,param_4,0xfffffffffffffffe);
  plVar1 = *(int64_t **)(param_2 + 10);
  *(int64_t **)(param_1 + 10) = plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  plVar1 = *(int64_t **)(param_2 + 0xc);
  *(int64_t **)(param_1 + 0xc) = plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  param_1[0xe] = param_2[0xe];
  return param_1;
}
// 函数: void UISystem_ac4d0(int64_t param_1)
void UISystem_ac4d0(int64_t param_1)
{
  if (*(int64_t **)(param_1 + 0x30) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x30) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x28) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x28) + 0x38))();
  }
  *(uint64_t *)(param_1 + 8) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x10) != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int32_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)(param_1 + 8) = &system_state_ptr;
  return;
}
int64_t * UISystem_ac550(int64_t *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  uint64_t uVar2;
  uVar2 = 0xfffffffffffffffe;
  plVar1 = (int64_t *)*param_2;
  *param_1 = (int64_t)plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  plVar1 = (int64_t *)param_2[1];
  param_1[1] = (int64_t)plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  CoreEngineDataTransformer(param_1 + 2,param_2 + 2,param_3,param_4,uVar2);
  *(int *)(param_1 + 6) = (int)param_2[6];
  return param_1;
}
// 函数: void UISystem_ac5c0(int64_t *param_1)
void UISystem_ac5c0(int64_t *param_1)
{
  param_1[2] = (int64_t)&system_data_buffer_ptr;
  if (param_1[3] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[3] = 0;
  *(int32_t *)(param_1 + 5) = 0;
  param_1[2] = (int64_t)&system_state_ptr;
  if ((int64_t *)param_1[1] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[1] + 0x38))();
  }
  if ((int64_t *)*param_1 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_1 + 0x38))();
  }
  return;
}