#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// $fun 的语义化别名
#define $alias_name $fun
// $fun 的语义化别名
#define $alias_name $fun
// 99_part_02_part038.c - 2 个函数
// 函数: void function_1acb30(int64_t param_1,int64_t *param_2,uint64_t param_3,char param_4)
void function_1acb30(int64_t param_1,int64_t *param_2,uint64_t param_3,char param_4)
{
  uint *puVar1;
  float fVar2;
  int32_t uVar3;
  uint64_t uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int64_t lVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  int64_t *plVar11;
  int64_t lVar12;
  int64_t *plVar13;
  int64_t *plVar14;
  uint64_t *puVar15;
  int8_t stack_array_298 [32];
  int8_t local_var_278;
  char cStack_268;
  uint64_t local_var_260;
  int32_t local_var_258;
  void *plocal_var_250;
  uint64_t *plocal_var_248;
  int32_t local_var_240;
  uint64_t local_var_238;
  void *plocal_var_230;
  uint64_t *plocal_var_228;
  int32_t local_var_220;
  uint64_t local_var_218;
  int64_t *aplStack_210 [2];
  int32_t local_var_200;
  int32_t local_var_1fc;
  int32_t local_var_1f8;
  int32_t local_var_1f4;
  int32_t local_var_1f0;
  uint64_t local_var_1ec;
  uint64_t local_var_1e4;
  int8_t local_var_1dc;
  uint64_t local_var_1db;
  int32_t local_var_1d0;
  int8_t local_var_1cc;
  uint64_t local_var_1c8;
  uint64_t local_var_1c0;
  code *pcStack_1b8;
  code *pcStack_1b0;
  int64_t *plStack_1a8;
  int64_t *plStack_1a0;
  int64_t *plStack_198;
  int64_t *plStack_190;
  int64_t *plStack_188;
  int64_t *plStack_180;
  int64_t *plStack_178;
  int64_t *plStack_170;
  int64_t *plStack_168;
  int64_t *plStack_160;
  int64_t *plStack_158;
  int64_t *plStack_150;
  int64_t *plStack_148;
  int64_t *plStack_140;
  int64_t *plStack_138;
  int64_t *plStack_130;
  int64_t *plStack_128;
  int64_t *plStack_120;
  int64_t *plStack_118;
  int64_t *plStack_110;
  int64_t *plStack_108;
  int64_t *plStack_100;
  uint64_t local_var_f8;
  void *plocal_var_e8;
  int8_t *plocal_var_e0;
  int32_t local_var_d8;
  int8_t stack_array_d0 [136];
  uint64_t local_var_48;
  local_var_f8 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_298;
  plVar14 = (int64_t *)0x0;
  local_var_258 = 0;
  cStack_268 = param_4;
  if ((((*(char *)(param_1 + 0x2a63) != '\0') && (*(char *)((int64_t)param_2 + 0x10d) == '\0')) &&
      ((int)param_2[0x22] != 0)) && (lVar8 = SystemOptimizer(param_2[0x23]), lVar8 != 0)) {
    uVar3 = *(int32_t *)(param_2[0x23] + 0x3590);
    local_var_260 = (int64_t *)CONCAT44(local_var_260._4_4_,*(int32_t *)(param_2[0x23] + 0x3594));
    plocal_var_230 = &system_data_buffer_ptr;
    local_var_218 = 0;
    plocal_var_228 = (uint64_t *)0x0;
    local_var_220 = 0;
    puVar9 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar9 = 0;
    plocal_var_228 = puVar9;
    uVar6 = CoreEngineSystemCleanup(puVar9);
    *puVar9 = 0x5f72756f746e6f63;
    *(int32_t *)(puVar9 + 1) = 0x725f6372;
    *(int16_t *)((int64_t)puVar9 + 0xc) = 0x5f74;
    *(int8_t *)((int64_t)puVar9 + 0xe) = 0;
    local_var_220 = 0xe;
    iVar7 = *(int *)(param_1 + 0x4e8);
    local_var_218._0_4_ = uVar6;
    if (0 < iVar7) {
      if ((iVar7 != -0xe) && (uVar6 < iVar7 + 0xfU)) {
        local_var_278 = 0x13;
        puVar9 = (uint64_t *)SystemCore_NetworkHandler(system_memory_pool_ptr,puVar9,iVar7 + 0xfU,0x10);
        plocal_var_228 = puVar9;
        local_var_218._0_4_ = CoreEngineSystemCleanup(puVar9);
        iVar7 = *(int *)(param_1 + 0x4e8);
      }
// WARNING: Subroutine does not return
      memcpy((int8_t *)((int64_t)puVar9 + 0xe),*(uint64_t *)(param_1 + 0x4e0),
             (int64_t)(iVar7 + 1));
    }
    plocal_var_250 = &system_data_buffer_ptr;
    local_var_238 = 0;
    plocal_var_248 = (uint64_t *)0x0;
    local_var_240 = 0;
    puVar10 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar10 = 0;
    plocal_var_248 = puVar10;
    uVar6 = CoreEngineSystemCleanup(puVar10);
    *puVar10 = 0x5f72756f746e6f63;
    *(int32_t *)(puVar10 + 1) = 0x645f6372;
    *(int16_t *)((int64_t)puVar10 + 0xc) = 0x5f73;
    *(int8_t *)((int64_t)puVar10 + 0xe) = 0;
    local_var_240 = 0xe;
    iVar7 = *(int *)(param_1 + 0x4e8);
    local_var_238._0_4_ = uVar6;
    if (0 < iVar7) {
      if ((iVar7 != -0xe) && (uVar6 < iVar7 + 0xfU)) {
        local_var_278 = 0x13;
        puVar10 = (uint64_t *)SystemCore_NetworkHandler(system_memory_pool_ptr,puVar10,iVar7 + 0xfU,0x10);
        plocal_var_248 = puVar10;
        local_var_238._0_4_ = CoreEngineSystemCleanup(puVar10);
        iVar7 = *(int *)(param_1 + 0x4e8);
      }
// WARNING: Subroutine does not return
      memcpy((int8_t *)((int64_t)puVar10 + 0xe),*(uint64_t *)(param_1 + 0x4e0),
             (int64_t)(iVar7 + 1));
    }
    local_var_1f8 = 1;
    local_var_1f4 = 1;
    local_var_1db = 1;
    local_var_1dc = 0;
    local_var_1cc = 0;
    local_var_1fc = (int32_t)local_var_260;
    local_var_1f0 = 7;
    local_var_1ec = 0;
    local_var_1e4 = 0;
    local_var_200 = uVar3;
    if (*(code **)(*param_2 + 0xb8) == (code *)&ui_system_data_128_ptr) {
      lVar8 = param_2[0xda];
    }
    else {
      lVar8 = (**(code **)(*param_2 + 0xb8))(param_2);
    }
    local_var_1d0 = *(int32_t *)(lVar8 + 0xa0);
    plocal_var_e8 = &memory_allocator_3432_ptr;
    plocal_var_e0 = stack_array_d0;
    stack_array_d0[0] = 0;
    local_var_d8 = 0xe;
    puVar15 = (uint64_t *)&system_buffer_ptr;
    if (puVar9 != (uint64_t *)0x0) {
      puVar15 = puVar9;
    }
    strcpy_s(stack_array_d0,0x80,puVar15);
    lVar8 = param_2[0xc6];
    if (((lVar8 == 0) || (cVar5 = SystemFunction_0001800ba3b0(lVar8 + 0x108,&local_var_200), cVar5 == '\0')) ||
       (puVar9 = plocal_var_228, puVar10 = plocal_var_248, *(int *)(lVar8 + 0x380) == 0)) {
      plVar11 = (int64_t *)SystemInitializer(system_resource_state,aplStack_210,&plocal_var_e8,&local_var_200);
      lVar8 = *plVar11;
      *plVar11 = 0;
      local_var_260 = (int64_t *)param_2[0xc6];
      param_2[0xc6] = lVar8;
      if (local_var_260 != (int64_t *)0x0) {
        (**(code **)(*local_var_260 + 0x38))();
      }
      if (aplStack_210[0] != (int64_t *)0x0) {
        (**(code **)(*aplStack_210[0] + 0x38))();
      }
    }
    _Thrd_id();
    plocal_var_e8 = &system_state_ptr;
    plocal_var_250 = &system_data_buffer_ptr;
    if (puVar10 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar10);
    }
    plocal_var_248 = (uint64_t *)0x0;
    local_var_238 = (uint64_t)local_var_238._4_4_ << 0x20;
    plocal_var_250 = &system_state_ptr;
    plocal_var_230 = &system_data_buffer_ptr;
    if (puVar9 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar9);
    }
    plocal_var_228 = (uint64_t *)0x0;
    local_var_218 = (uint64_t)local_var_218._4_4_ << 0x20;
    plocal_var_230 = &system_state_ptr;
    param_4 = cStack_268;
  }
  if (*(int *)(param_1 + 0x36a8) != *(int *)(param_1 + 0x3358)) {
    function_18d8f0(param_1 + 0x3368,param_1 + 0x3018);
  }
  function_1b51a0(param_1);
  if (*(int64_t *)(param_1 + 0x60b80) != 0) {
    function_3b8390();
  }
  *(int64_t *)(param_1 + 14000) = param_1 + 0x3368;
  fVar2 = *(float *)(param_1 + 0x3418);
  *(float *)(param_1 + 0x3e1c) = fVar2 * *(float *)(param_1 + 0x342c);
  *(float *)(param_1 + 0x3e20) = fVar2 * *(float *)(param_1 + 0x3430);
  *(float *)(param_1 + 0x3e24) = fVar2 * *(float *)(param_1 + 0x3434);
  *(int32_t *)(param_1 + 0x3e28) = 0x7f7fffff;
  *(int32_t *)(param_1 + 0x36b8) = *(int32_t *)(param_1 + 0x4b4);
  if (*(int *)(param_1 + 0x498) < 1) {
    plStack_1a0 = *(int64_t **)(param_1 + 0x3878);
    *(uint64_t *)(param_1 + 0x3878) = 0;
    plStack_198 = plStack_1a0;
  }
  else {
    puVar9 = (uint64_t *)SystemCore_GarbageCollector(system_resource_state,&plStack_1a0,param_1 + 0x488,0);
    uVar4 = *puVar9;
    *puVar9 = 0;
    plStack_1a8 = *(int64_t **)(param_1 + 0x3878);
    *(uint64_t *)(param_1 + 0x3878) = uVar4;
    if (plStack_1a8 != (int64_t *)0x0) {
      (**(code **)(*plStack_1a8 + 0x38))();
    }
  }
  if (plStack_1a0 != (int64_t *)0x0) {
    (**(code **)(*plStack_1a0 + 0x38))();
  }
  if (param_4 == '\0') {
    if (((param_2[0xb1] == 0) || (*(char *)(param_2[0xb1] + 0x28b8) == '\0')) &&
       (0 < (int)param_2[0xac])) {
      plVar11 = (int64_t *)param_2[0xae];
    }
    else {
      plVar11 = (int64_t *)function_0bdfe0();
    }
    if (plVar11 != (int64_t *)0x0) {
      plStack_188 = plVar11;
      (**(code **)(*plVar11 + 0x28))(plVar11);
    }
    plVar13 = *(int64_t **)(param_1 + 0x36c0);
    *(int64_t **)(param_1 + 0x36c0) = plVar11;
    plStack_188 = plVar13;
  }
  else {
    plVar13 = *(int64_t **)(param_1 + 0x36c0);
    *(uint64_t *)(param_1 + 0x36c0) = 0;
    plStack_190 = plVar13;
  }
  if (plVar13 != (int64_t *)0x0) {
    (**(code **)(*plVar13 + 0x38))();
  }
  if (((int)param_2[0xac] < 2) || (plVar11 = (int64_t *)param_2[0xaf], plVar11 == (int64_t *)0x0))
  {
    plVar11 = (int64_t *)function_0bdfe0();
  }
  if (plVar11 != (int64_t *)0x0) {
    plStack_180 = plVar11;
    (**(code **)(*plVar11 + 0x28))(plVar11);
  }
  plStack_180 = *(int64_t **)(param_1 + 0x3890);
  *(int64_t **)(param_1 + 0x3890) = plVar11;
  if (plStack_180 != (int64_t *)0x0) {
    (**(code **)(*plStack_180 + 0x38))();
  }
  lVar8 = *(int64_t *)(param_1 + 0x60b80);
  plVar11 = plVar14;
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) == 9)) {
    plVar11 = *(int64_t **)(lVar8 + 0x120);
  }
  if (plVar11 != (int64_t *)0x0) {
    plStack_178 = plVar11;
    (**(code **)(*plVar11 + 0x28))(plVar11);
  }
  plStack_178 = *(int64_t **)(param_1 + 0x3da0);
  *(int64_t **)(param_1 + 0x3da0) = plVar11;
  if (plStack_178 != (int64_t *)0x0) {
    (**(code **)(*plStack_178 + 0x38))();
  }
  lVar8 = *(int64_t *)(param_1 + 0x60b80);
  plVar11 = plVar14;
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) == 9)) {
    plVar11 = *(int64_t **)(lVar8 + 0x130);
  }
  if (plVar11 != (int64_t *)0x0) {
    plStack_170 = plVar11;
    (**(code **)(*plVar11 + 0x28))(plVar11);
  }
  plStack_170 = *(int64_t **)(param_1 + 0x3db0);
  *(int64_t **)(param_1 + 0x3db0) = plVar11;
  if (plStack_170 != (int64_t *)0x0) {
    (**(code **)(*plStack_170 + 0x38))();
  }
  lVar8 = *(int64_t *)(param_1 + 0x60b80);
  plVar11 = plVar14;
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) == 9)) {
    plVar11 = *(int64_t **)(lVar8 + 0x128);
  }
  if (plVar11 != (int64_t *)0x0) {
    plStack_168 = plVar11;
    (**(code **)(*plVar11 + 0x28))(plVar11);
  }
  plStack_168 = *(int64_t **)(param_1 + 0x3da8);
  *(int64_t **)(param_1 + 0x3da8) = plVar11;
  if (plStack_168 != (int64_t *)0x0) {
    (**(code **)(*plStack_168 + 0x38))();
  }
  lVar8 = *(int64_t *)(param_1 + 0x60b80);
  if (lVar8 == 0) {
    plVar11 = (int64_t *)function_0be610();
  }
  else {
    plVar11 = plVar14;
    if (*(int *)(lVar8 + 0x10) == 9) {
      plVar11 = *(int64_t **)(lVar8 + 0x160);
    }
  }
  if (plVar11 != (int64_t *)0x0) {
    plStack_160 = plVar11;
    (**(code **)(*plVar11 + 0x28))(plVar11);
  }
  plStack_160 = *(int64_t **)(param_1 + 0x3db8);
  *(int64_t **)(param_1 + 0x3db8) = plVar11;
  if (plStack_160 != (int64_t *)0x0) {
    (**(code **)(*plStack_160 + 0x38))();
  }
  lVar8 = *(int64_t *)(param_1 + 0x60b80);
  if (lVar8 == 0) {
    plVar11 = (int64_t *)function_0be610();
  }
  else {
    if (*(char *)(*(int64_t *)(lVar8 + 0x68) + 0x28b8) == '\0') {
      if (*(int *)(lVar8 + 0x10) == 9) {
        plVar11 = *(int64_t **)(lVar8 + 0x168);
        goto LAB_1801ad30f;
      }
    }
    else if (*(int *)(lVar8 + 0x10) == 9) {
      plStack_158 = *(int64_t **)(lVar8 + 0x168);
      *(uint64_t *)(lVar8 + 0x168) = 0;
      if (plStack_158 != (int64_t *)0x0) {
        (**(code **)(*plStack_158 + 0x38))();
      }
    }
    plVar11 = (int64_t *)function_0bdfe0();
  }
LAB_1801ad30f:
  if (plVar11 != (int64_t *)0x0) {
    plStack_150 = plVar11;
    (**(code **)(*plVar11 + 0x28))(plVar11);
  }
  plStack_150 = *(int64_t **)(param_1 + 0x3dc0);
  *(int64_t **)(param_1 + 0x3dc0) = plVar11;
  if (plStack_150 != (int64_t *)0x0) {
    (**(code **)(*plStack_150 + 0x38))();
  }
  plStack_148 = *(int64_t **)(param_1 + 0x3dc8);
  *(uint64_t *)(param_1 + 0x3dc8) = 0;
  if (plStack_148 != (int64_t *)0x0) {
    (**(code **)(*plStack_148 + 0x38))();
  }
  if (*(int64_t *)(param_1 + 0x60b80) == 0) {
    plVar11 = (int64_t *)function_0be7e0();
  }
  else {
    plVar11 = *(int64_t **)(*(int64_t *)(param_1 + 0x60b80) + 0x1c8);
  }
  if (plVar11 != (int64_t *)0x0) {
    plStack_140 = plVar11;
    (**(code **)(*plVar11 + 0x28))(plVar11);
  }
  plStack_140 = *(int64_t **)(param_1 + 0x3de0);
  *(int64_t **)(param_1 + 0x3de0) = plVar11;
  if (plStack_140 != (int64_t *)0x0) {
    (**(code **)(*plStack_140 + 0x38))();
  }
  plVar11 = plVar14;
  if (*(int64_t *)(param_1 + 0x60b80) != 0) {
    plVar11 = *(int64_t **)(*(int64_t *)(param_1 + 0x60b80) + 0x1d0);
  }
  if (plVar11 != (int64_t *)0x0) {
    plStack_138 = plVar11;
    (**(code **)(*plVar11 + 0x28))(plVar11);
  }
  plStack_138 = *(int64_t **)(param_1 + 0x3de8);
  *(int64_t **)(param_1 + 0x3de8) = plVar11;
  if (plStack_138 != (int64_t *)0x0) {
    (**(code **)(*plStack_138 + 0x38))();
  }
  plVar11 = plVar14;
  if (*(int64_t *)(param_1 + 0x60b80) != 0) {
    plVar11 = *(int64_t **)(*(int64_t *)(param_1 + 0x60b80) + 0x1d8);
  }
  if (plVar11 != (int64_t *)0x0) {
    plStack_130 = plVar11;
    (**(code **)(*plVar11 + 0x28))(plVar11);
  }
  plStack_130 = *(int64_t **)(param_1 + 0x3df0);
  *(int64_t **)(param_1 + 0x3df0) = plVar11;
  if (plStack_130 != (int64_t *)0x0) {
    (**(code **)(*plStack_130 + 0x38))();
  }
  if (*(int64_t *)(param_1 + 0x60b80) != 0) {
    plVar14 = *(int64_t **)(*(int64_t *)(param_1 + 0x60b80) + 0x1e0);
  }
  if (plVar14 != (int64_t *)0x0) {
    plStack_128 = plVar14;
    (**(code **)(*plVar14 + 0x28))(plVar14);
  }
  plStack_128 = *(int64_t **)(param_1 + 0x3df8);
  *(int64_t **)(param_1 + 0x3df8) = plVar14;
  if (plStack_128 != (int64_t *)0x0) {
    (**(code **)(*plStack_128 + 0x38))();
  }
  plVar14 = (int64_t *)param_2[0xc6];
  if (plVar14 != (int64_t *)0x0) {
    plStack_120 = plVar14;
    (**(code **)(*plVar14 + 0x28))(plVar14);
  }
  plStack_120 = *(int64_t **)(param_1 + 0x3e48);
  *(int64_t **)(param_1 + 0x3e48) = plVar14;
  if (plStack_120 != (int64_t *)0x0) {
    (**(code **)(*plStack_120 + 0x38))();
  }
  *(int *)(param_1 + 0x3870) = (int)param_2[0xb0];
  *(int32_t *)(param_1 + 0x3e44) = *(int32_t *)(param_1 + 0x3ec4);
  *(int32_t *)(param_1 + 0x3e00) = *(int32_t *)(system_main_module_state + 0x224);
  *(int32_t *)(param_1 + 0x3e54) = *(int32_t *)(param_1 + 0x30d4);
  *(int32_t *)(param_1 + 0x3e50) = *(int32_t *)(param_1 + 0x4cc);
  lVar8 = *(int64_t *)(param_1 + 0x328);
  if (lVar8 != 0) {
    lVar12 = *(int64_t *)(lVar8 + 0x1c48);
    if (lVar12 == 0) {
      puVar9 = (uint64_t *)SystemCore_GarbageCollector(system_resource_state,&plStack_110,lVar8 + 0x1c00,1);
      local_var_258 = 2;
      uVar4 = *puVar9;
      *puVar9 = 0;
      plStack_118 = *(int64_t **)(lVar8 + 0x1c48);
      *(uint64_t *)(lVar8 + 0x1c48) = uVar4;
      if (plStack_118 != (int64_t *)0x0) {
        (**(code **)(*plStack_118 + 0x38))();
      }
      local_var_258 = 0;
      if (plStack_110 != (int64_t *)0x0) {
        (**(code **)(*plStack_110 + 0x38))();
      }
      puVar1 = (uint *)(*(int64_t *)(lVar8 + 0x1c48) + 0x328);
      *puVar1 = *puVar1 | 0x20000000;
      lVar12 = *(int64_t *)(lVar8 + 0x1c48);
    }
    if (*(int *)(lVar12 + 0x380) != 2) {
      local_var_1c8 = 0;
      local_var_1c0 = 0;
      pcStack_1b8 = (code *)0x0;
      pcStack_1b0 = _guard_check_icall;
      SystemCore_DecryptionManager(*(uint64_t *)(lVar8 + 0x1c48),0,0,&local_var_1c8);
      if (pcStack_1b8 != (code *)0x0) {
        (*pcStack_1b8)(&local_var_1c8,0,0);
      }
    }
    plVar14 = *(int64_t **)(lVar8 + 0x1c48);
    if (plVar14 != (int64_t *)0x0) {
      plStack_108 = plVar14;
      (**(code **)(*plVar14 + 0x28))(plVar14);
    }
    plStack_108 = *(int64_t **)(param_1 + 0x3dd0);
    *(int64_t **)(param_1 + 0x3dd0) = plVar14;
    if (plStack_108 != (int64_t *)0x0) {
      (**(code **)(*plStack_108 + 0x38))();
    }
    lVar8 = *(int64_t *)(param_1 + 0x328);
    if (((*(float *)(lVar8 + 0x1c3c) == 0.0) && (*(float *)(lVar8 + 0x1c40) == 0.0)) &&
       (lVar12 = *(int64_t *)(lVar8 + 0x1c48), lVar12 != 0)) {
      local_var_260 = (int64_t *)
                   CONCAT44((float)*(ushort *)(lVar12 + 0x32e),(float)*(ushort *)(lVar12 + 0x32c));
      *(int64_t **)(lVar8 + 0x1c3c) = local_var_260;
    }
    *(uint64_t *)(param_1 + 0x3dd8) = *(uint64_t *)(lVar8 + 0x1c3c);
  }
  plVar14 = (int64_t *)param_2[0xc9];
  if (plVar14 != (int64_t *)0x0) {
    plStack_100 = plVar14;
    (**(code **)(*plVar14 + 0x28))(plVar14);
  }
  plStack_100 = *(int64_t **)(param_1 + 0x3880);
  *(int64_t **)(param_1 + 0x3880) = plVar14;
  if (plStack_100 != (int64_t *)0x0) {
    (**(code **)(*plStack_100 + 0x38))();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_298);
}
// WARNING: Removing unreachable block (ram,0x0001801ae05e)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1ad720(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_1ad720(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint uVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  bool bVar4;
  bool bVar5;
  int32_t uVar6;
  void *puVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  int64_t lVar10;
  uint64_t uVar11;
  int64_t *plVar12;
  int32_t *puVar13;
  int64_t *plVar14;
  uint8_t uVar15;
  float fVar16;
  float fVar17;
  int8_t stack_array_128 [48];
  uint64_t local_var_f8;
  int32_t local_var_f0;
  int32_t local_var_ec;
  int64_t *plStack_e8;
  int64_t *plStack_e0;
  int64_t *plStack_d8;
  int32_t local_var_d0;
  int64_t *plStack_c8;
  int64_t *plStack_c0;
  uint64_t local_var_b8;
  uint64_t local_var_a8;
  void **pplocal_var_a0;
  uint64_t local_var_98;
  void *plocal_var_90;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  int32_t local_var_7c;
  float fStack_78;
  float fStack_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  uint64_t local_var_48;
  local_var_b8 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_128;
  bVar4 = false;
  local_var_d0 = 0;
  if (*(int64_t *)(param_1 + 0x60b80) != 0) {
    uVar15 = (uint8_t)((uint64_t)param_4 >> 8);
    if (*(int *)(param_1 + 0x60920) < 1) {
      function_2e9fa0(*(uint64_t *)(param_1 + 0x8208),1,1);
    }
    else {
      function_0c48e0(param_1,&plStack_d8,param_1 + 0x60910);
      local_var_f8 = (int64_t **)CONCAT44(local_var_f8._4_4_,(float)local_var_f8);
      if ((plStack_d8 != (int64_t *)0x0) &&
         (local_var_f8 = (int64_t **)CONCAT44(local_var_f8._4_4_,(float)local_var_f8),
         plStack_d8[8] - plStack_d8[7] >> 4 != 0)) {
        puVar7 = (void *)function_275820();
        uVar8 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,CONCAT71(uVar15,3));
        local_var_f8 = (int64_t **)&local_var_a8;
        local_var_98 = &processed_var_8768_ptr;
        plocal_var_90 = &processed_var_8752_ptr;
        local_var_a8 = puVar7;
        plVar9 = (int64_t *)SystemCore_ErrorHandler(uVar8,&local_var_a8);
        plStack_e8 = plVar9;
        if (plVar9 != (int64_t *)0x0) {
          (**(code **)(*plVar9 + 0x28))(plVar9);
        }
        plVar9[3] = -2;
        uVar8 = system_context_ptr;
        local_var_f8 = &plStack_e0;
        plStack_e0 = plVar9;
        (**(code **)(*plVar9 + 0x28))(plVar9);
        SystemCore_TimerManager(uVar8,&plStack_e0);
        plVar14 = (int64_t *)plStack_d8[7];
        if (plVar14 < (int64_t *)plStack_d8[8]) {
          do {
            *(int32_t *)(*plVar14 + 0x104) = 0;
            plVar14 = plVar14 + 2;
          } while (plVar14 < (int64_t *)plStack_d8[8]);
        }
        SystemCore_UpdateState(plStack_d8,(int64_t)plStack_d8 + 0x214,1);
        function_2e9fa0(*(uint64_t *)(param_1 + 0x8208),1,1);
        uVar8 = *(uint64_t *)(param_1 + 0x8208);
        local_var_f8 = &plStack_e0;
        plStack_e0 = plStack_d8;
        if (plStack_d8 != (int64_t *)0x0) {
          (**(code **)(*plStack_d8 + 0x28))();
        }
        function_0ee890(uVar8,&plStack_e0,1);
        SystemFunction_0001802eeba0(*(uint64_t *)(param_1 + 0x8208));
        lVar10 = *(int64_t *)(param_1 + 0x8208);
        uVar1 = *(uint *)(lVar10 + 0x2ac);
        *(uint *)(lVar10 + 0x2ac) = uVar1 | 0x40000000;
        function_2ee810(lVar10,uVar1);
        function_2ee990(lVar10,uVar1);
        plStack_e0 = (int64_t *)CONCAT44(plStack_e0._4_4_,1);
        (**(code **)(*plStack_d8 + 0x128))(plStack_d8,&plStack_e0);
        (**(code **)(*plVar9 + 0x38))(plVar9);
      }
      if (plStack_d8 != (int64_t *)0x0) {
        (**(code **)(*plStack_d8 + 0x38))();
      }
    }
  }
  if (*(int *)(param_1 + 0x60920) < 1) goto LAB_1801ae165;
  plVar9 = (int64_t *)function_2ed2b0(*(uint64_t *)(param_1 + 0x8208),&plStack_c0,0,0);
  lVar10 = *plVar9;
  if (plStack_c0 != (int64_t *)0x0) {
    (**(code **)(*plStack_c0 + 0x38))();
  }
  if (lVar10 != 0) {
    local_var_7c = 0;
    fStack_80 = *(float *)(param_1 + 0x60930);
    lVar2 = *(int64_t *)(param_1 + 0x60b80);
    fVar17 = (float)*(int *)(lVar2 + 0x18) * *(float *)(lVar2 + 0x1c);
    fVar16 = (float)*(int *)(lVar2 + 0x14) * *(float *)(lVar2 + 0x1c);
    local_var_a8 = (void *)CONCAT44(fVar16 * 0.0,fVar16 * 1.0);
    pplocal_var_a0 = (void **)(uint64_t)(uint)(fVar16 * 0.0);
    local_var_98 = (void *)CONCAT44(fVar17 * 1.0,fVar17 * 0.0);
    plocal_var_90 = (void *)(uint64_t)(uint)(fVar17 * 0.0);
    fStack_88 = fStack_80 * 0.0;
    fStack_84 = fStack_80 * 0.0;
    fStack_80 = fStack_80 * 1.0;
    local_var_f8._4_4_ = fVar17 * 0.5;
    local_var_f8._0_4_ = fVar16 * 0.5;
    local_var_f0 = 0;
    local_var_ec = 0x7f7fffff;
    local_var_70 = 0;
    local_var_6c = 0x7f7fffff;
    fStack_78 = (float)local_var_f8;
    fStack_74 = local_var_f8._4_4_;
    NetworkProtocol_Transmitter(*(uint64_t *)(param_1 + 0x8208),&local_var_a8);
    SystemCore_UpdateState(lVar10,lVar10 + 0x214,1);
  }
  puVar3 = *(uint64_t **)(*(int64_t *)(param_1 + 0x8208) + 0xf0);
  if (*(int64_t *)(*(int64_t *)(param_1 + 0x8208) + 0xf8) - (int64_t)puVar3 >> 3 == 0) {
    lVar10 = 0;
LAB_1801adb86:
    bVar5 = false;
  }
  else {
    lVar10 = (**(code **)(*(int64_t *)*puVar3 + 0x178))();
    bVar4 = false;
    if (lVar10 == 0) goto LAB_1801adb86;
    lVar2 = *(int64_t *)(lVar10 + 0x1b8);
    local_var_a8 = &memory_allocator_3480_ptr;
    pplocal_var_a0 = &plocal_var_90;
    plocal_var_90 = (void *)((uint64_t)plocal_var_90 & 0xffffffffffffff00);
    local_var_98 = (void *)CONCAT44((int)((uint64_t)local_var_98 >> 0x20),0x16);
    strcpy_s(&plocal_var_90,0x40,&processed_var_4184_ptr);
    bVar4 = true;
    local_var_d0 = 1;
    uVar11 = SystemCore_LoggingSystem0(*(uint64_t *)(lVar2 + 0x1e0),&local_var_a8,0);
    if ((*(uint64_t *)(lVar2 + 0x140) & uVar11) == 0) goto LAB_1801adb86;
    bVar5 = true;
  }
  if (bVar4) {
    local_var_d0 = 0;
    local_var_a8 = &system_state_ptr;
  }
  if (bVar5) {
    plVar9 = *(int64_t **)(lVar10 + 0x1b8);
    plStack_c8 = plVar9;
    if (plVar9 != (int64_t *)0x0) {
      (**(code **)(*plVar9 + 0x28))(plVar9);
    }
    plVar12 = (int64_t *)function_22cb40(plVar9,&local_var_f8);
    plVar14 = (int64_t *)*plVar12;
    *plVar12 = 0;
    plStack_e8 = plVar9;
    plStack_c8 = plVar14;
    if (plVar9 != (int64_t *)0x0) {
      (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    if (local_var_f8 != (int64_t **)0x0) {
      (*(code *)(*local_var_f8)[7])();
    }
    UltraHighFreq_SecurityValidator1(lVar10,&plStack_c8);
    plVar9 = (int64_t *)SystemCore_GarbageCollector(system_resource_state,&local_var_f8,param_1 + 0x60938,0);
    lVar10 = *plVar9;
    if (local_var_f8 != (int64_t **)0x0) {
      (*(code *)(*local_var_f8)[7])();
    }
    if (lVar10 != 0) {
      local_var_a8 = &system_data_buffer_ptr;
      plocal_var_90 = (void *)0x0;
      pplocal_var_a0 = (void **)0x0;
      local_var_98 = (void *)((uint64_t)local_var_98 & 0xffffffff00000000);
      puVar13 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x1d,0x13);
      *(int8_t *)puVar13 = 0;
      pplocal_var_a0 = (void **)puVar13;
      uVar6 = CoreEngineSystemCleanup(puVar13);
      plocal_var_90 = (void *)CONCAT44(plocal_var_90._4_4_,uVar6);
      *puVar13 = 0x6574756f;
      puVar13[1] = 0x656d5f72;
      puVar13[2] = 0x645f6873;
      puVar13[3] = 0x75666669;
      *(uint64_t *)(puVar13 + 4) = 0x75747865745f6573;
      puVar13[6] = 0x315f6572;
      *(int8_t *)(puVar13 + 7) = 0;
      local_var_98 = (void *)CONCAT44(local_var_98._4_4_,0x1c);
      function_22d770(plVar14,&local_var_a8,lVar10);
      local_var_a8 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar13);
    }
    plVar9 = (int64_t *)SystemCore_GarbageCollector(system_resource_state,&plStack_e8,param_1 + 0x60958,0);
    lVar10 = *plVar9;
    if (plStack_e8 != (int64_t *)0x0) {
      (**(code **)(*plStack_e8 + 0x38))();
    }
    if (lVar10 != 0) {
      local_var_a8 = &system_data_buffer_ptr;
      plocal_var_90 = (void *)0x0;
      pplocal_var_a0 = (void **)0x0;
      local_var_98 = (void *)((uint64_t)local_var_98 & 0xffffffff00000000);
      puVar13 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x1d,0x13);
      *(int8_t *)puVar13 = 0;
      pplocal_var_a0 = (void **)puVar13;
      uVar6 = CoreEngineSystemCleanup(puVar13);
      plocal_var_90 = (void *)CONCAT44(plocal_var_90._4_4_,uVar6);
      *puVar13 = 0x6574756f;
      puVar13[1] = 0x656d5f72;
      puVar13[2] = 0x645f6873;
      puVar13[3] = 0x75666669;
      *(uint64_t *)(puVar13 + 4) = 0x75747865745f6573;
      puVar13[6] = 0x325f6572;
      *(int8_t *)(puVar13 + 7) = 0;
      local_var_98 = (void *)CONCAT44(local_var_98._4_4_,0x1c);
      function_22d770(plVar14,&local_var_a8,lVar10);
      local_var_a8 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar13);
    }
    plVar9 = (int64_t *)SystemCore_GarbageCollector(system_resource_state,&local_var_f8,param_1 + 0x60978,0);
    lVar10 = *plVar9;
    if (local_var_f8 != (int64_t **)0x0) {
      (*(code *)(*local_var_f8)[7])();
    }
    if (lVar10 != 0) {
      local_var_a8 = &system_data_buffer_ptr;
      plocal_var_90 = (void *)0x0;
      pplocal_var_a0 = (void **)0x0;
      local_var_98 = (void *)((uint64_t)local_var_98 & 0xffffffff00000000);
      puVar13 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x1d,0x13);
      *(int8_t *)puVar13 = 0;
      pplocal_var_a0 = (void **)puVar13;
      uVar6 = CoreEngineSystemCleanup(puVar13);
      plocal_var_90 = (void *)CONCAT44(plocal_var_90._4_4_,uVar6);
      *puVar13 = 0x6574756f;
      puVar13[1] = 0x656d5f72;
      puVar13[2] = 0x645f6873;
      puVar13[3] = 0x75666669;
      *(uint64_t *)(puVar13 + 4) = 0x75747865745f6573;
      puVar13[6] = 0x335f6572;
      *(int8_t *)(puVar13 + 7) = 0;
      local_var_98 = (void *)CONCAT44(local_var_98._4_4_,0x1c);
      function_22d770(plVar14,&local_var_a8,lVar10);
      local_var_a8 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar13);
    }
    plVar9 = (int64_t *)SystemCore_GarbageCollector(system_resource_state,&plStack_e8,param_1 + 0x60998,0);
    lVar10 = *plVar9;
    if (plStack_e8 != (int64_t *)0x0) {
      (**(code **)(*plStack_e8 + 0x38))();
    }
    if (lVar10 != 0) {
      local_var_a8 = &system_data_buffer_ptr;
      plocal_var_90 = (void *)0x0;
      pplocal_var_a0 = (void **)0x0;
      local_var_98 = (void *)((uint64_t)local_var_98 & 0xffffffff00000000);
      puVar13 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x1b,0x13);
      *(int8_t *)puVar13 = 0;
      pplocal_var_a0 = (void **)puVar13;
      uVar6 = CoreEngineSystemCleanup(puVar13);
      plocal_var_90 = (void *)CONCAT44(plocal_var_90._4_4_,uVar6);
      *puVar13 = 0x6574756f;
      puVar13[1] = 0x656d5f72;
      puVar13[2] = 0x615f6873;
      puVar13[3] = 0x6d616572;
      *(uint64_t *)(puVar13 + 4) = 0x75747865745f7061;
      *(int16_t *)(puVar13 + 6) = 0x6572;
      *(int8_t *)((int64_t)puVar13 + 0x1a) = 0;
      local_var_98 = (void *)CONCAT44(local_var_98._4_4_,0x1a);
      function_22d770(plVar14,&local_var_a8,lVar10);
      local_var_a8 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar13);
    }
    plVar9 = (int64_t *)SystemCore_GarbageCollector(system_resource_state,&local_var_f8,param_1 + 0x609b8,0);
    lVar10 = *plVar9;
    if (local_var_f8 != (int64_t **)0x0) {
      (*(code *)(*local_var_f8)[7])();
    }
    if (lVar10 != 0) {
      local_var_a8 = &system_data_buffer_ptr;
      plocal_var_90 = (void *)0x0;
      pplocal_var_a0 = (void **)0x0;
      local_var_98 = (void *)((uint64_t)local_var_98 & 0xffffffff00000000);
      puVar13 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x11,0x13);
      *(int8_t *)puVar13 = 0;
      pplocal_var_a0 = (void **)puVar13;
      uVar6 = CoreEngineSystemCleanup(puVar13);
      plocal_var_90 = (void *)CONCAT44(plocal_var_90._4_4_,uVar6);
      *puVar13 = 0x616c7073;
      puVar13[1] = 0x70616d74;
      puVar13[2] = 0x7865745f;
      puVar13[3] = 0x65727574;
      *(int8_t *)(puVar13 + 4) = 0;
      local_var_98 = (void *)CONCAT44(local_var_98._4_4_,0x10);
      function_22d770(plVar14,&local_var_a8,lVar10);
      local_var_a8 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar13);
    }
    SystemCore_GarbageCollector(system_resource_state,&plStack_e8,param_1 + 0x609d8,0);
    if (plStack_e8 != (int64_t *)0x0) {
      (**(code **)(*plStack_e8 + 0x38))();
    }
    if (plVar14 != (int64_t *)0x0) {
      (**(code **)(*plVar14 + 0x38))(plVar14);
    }
  }
  puVar3 = *(uint64_t **)(*(int64_t *)(param_1 + 0x8208) + 0xf0);
  if (*(int64_t *)(*(int64_t *)(param_1 + 0x8208) + 0xf8) - (int64_t)puVar3 >> 3 != 0) {
    lVar10 = (**(code **)(*(int64_t *)*puVar3 + 0x178))();
    if (lVar10 != 0) {
      lVar2 = *(int64_t *)(lVar10 + 0x1b8);
      local_var_a8 = &memory_allocator_3480_ptr;
      pplocal_var_a0 = &plocal_var_90;
      plocal_var_90 = (void *)((uint64_t)plocal_var_90 & 0xffffffffffffff00);
      local_var_98 = (void *)CONCAT44((int)((uint64_t)local_var_98 >> 0x20),0x16);
      strcpy_s(&plocal_var_90,0x40,&processed_var_4184_ptr);
      uVar11 = SystemCore_LoggingSystem0(*(uint64_t *)(lVar2 + 0x1e0),&local_var_a8,0);
      local_var_a8 = &system_state_ptr;
      if ((uVar11 & *(uint64_t *)(lVar2 + 0x140)) != 0) {
        uVar11 = *(uint64_t *)(param_1 + 0x609f8);
        uVar8 = *(uint64_t *)(param_1 + 0x60a00);
        *(uint64_t *)(lVar10 + 0x2a8) = uVar11;
        *(uint64_t *)(lVar10 + 0x2b0) = uVar8;
        local_var_f8 = (int64_t **)(uVar11 & 0xffffffff);
        local_var_f0 = 0;
        local_var_ec = 0;
        *(int32_t *)(lVar10 + 0x2b8) = *(int32_t *)(param_1 + 0x60a08);
        *(int32_t *)(lVar10 + 700) = 0;
        *(int32_t *)(lVar10 + 0x2c0) = 0;
        *(int32_t *)(lVar10 + 0x2c4) = 0;
      }
    }
  }
LAB_1801ae165:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_128);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address