#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 02_core_engine_part265.c - 7 个函数
// 函数: void function_22c770(int64_t param_1,int64_t param_2)
void function_22c770(int64_t param_1,int64_t param_2)
{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int32_t uVar9;
  int32_t *puVar10;
  uint64_t uVar11;
  int64_t *plVar12;
  void *puVar13;
  int64_t lVar14;
  int64_t lVar15;
  int8_t stack_array_b8 [32];
  void *plocal_var_98;
  int32_t *plocal_var_90;
  int32_t local_var_88;
  uint64_t local_var_80;
  int32_t local_var_78;
  uint64_t local_var_70;
  void *plocal_var_68;
  int8_t *plocal_var_60;
  int32_t local_var_58;
  int8_t stack_array_50 [24];
  uint64_t local_var_38;
  uint64_t local_var_30;
  local_var_38 = 0xfffffffffffffffe;
  *(int32_t *)(param_1 + 0x138) = *(int32_t *)(param_2 + 0x138);
  *(int32_t *)(param_1 + 0x25c) = *(int32_t *)(param_2 + 0x25c);
  *(int32_t *)(param_1 + 0x260) = *(int32_t *)(param_2 + 0x260);
  *(int32_t *)(param_1 + 0x264) = *(int32_t *)(param_2 + 0x264);
  *(int32_t *)(param_1 + 0x268) = *(int32_t *)(param_2 + 0x268);
  *(int32_t *)(param_1 + 0x278) = *(int32_t *)(param_2 + 0x278);
  *(int32_t *)(param_1 + 0x27c) = *(int32_t *)(param_2 + 0x27c);
  *(int32_t *)(param_1 + 0x280) = *(int32_t *)(param_2 + 0x280);
  *(int32_t *)(param_1 + 0x284) = *(int32_t *)(param_2 + 0x284);
  uVar3 = *(uint64_t *)(param_2 + 0x290);
  *(uint64_t *)(param_1 + 0x288) = *(uint64_t *)(param_2 + 0x288);
  *(uint64_t *)(param_1 + 0x290) = uVar3;
  uVar3 = *(uint64_t *)(param_2 + 0x2a0);
  *(uint64_t *)(param_1 + 0x298) = *(uint64_t *)(param_2 + 0x298);
  *(uint64_t *)(param_1 + 0x2a0) = uVar3;
  uVar3 = *(uint64_t *)(param_2 + 0x2b0);
  *(uint64_t *)(param_1 + 0x2a8) = *(uint64_t *)(param_2 + 0x2a8);
  *(uint64_t *)(param_1 + 0x2b0) = uVar3;
  uVar9 = *(int32_t *)(param_2 + 700);
  uVar4 = *(int32_t *)(param_2 + 0x2c0);
  uVar5 = *(int32_t *)(param_2 + 0x2c4);
  *(int32_t *)(param_1 + 0x2b8) = *(int32_t *)(param_2 + 0x2b8);
  *(int32_t *)(param_1 + 700) = uVar9;
  *(int32_t *)(param_1 + 0x2c0) = uVar4;
  *(int32_t *)(param_1 + 0x2c4) = uVar5;
  *(int32_t *)(param_1 + 0x2c8) = *(int32_t *)(param_2 + 0x2c8);
  *(int32_t *)(param_1 + 0x2e0) = *(int32_t *)(param_2 + 0x2e0);
  puVar13 = &system_buffer_ptr;
  if (*(void **)(param_2 + 0x2d8) != (void *)0x0) {
    puVar13 = *(void **)(param_2 + 0x2d8);
  }
  plocal_var_60 = (int8_t *)0x18022c87f;
  strcpy_s(*(uint64_t *)(param_1 + 0x2d8),0x80,puVar13);
  *(int8_t *)(param_1 + 0x13c) = *(int8_t *)(param_2 + 0x13c);
  *(int32_t *)(param_1 + 600) = *(int32_t *)(param_2 + 600);
  plVar12 = *(int64_t **)(param_2 + 0x1e0);
  if (plVar12 != (int64_t *)0x0) {
    plocal_var_60 = (int8_t *)0x18022c8b2;
    (**(code **)(*plVar12 + 0x28))(plVar12);
  }
  plVar1 = *(int64_t **)(param_1 + 0x1e0);
  *(int64_t **)(param_1 + 0x1e0) = plVar12;
  if (plVar1 != (int64_t *)0x0) {
    plocal_var_60 = (int8_t *)0x18022c8d1;
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int32_t *)(param_1 + 0x388) = *(int32_t *)(param_2 + 0x388);
  *(int8_t *)(param_1 + 0x38c) = *(int8_t *)(param_2 + 0x38c);
  *(int32_t *)(param_1 + 0x26c) = *(int32_t *)(param_2 + 0x26c);
  *(int32_t *)(param_1 + 0x270) = *(int32_t *)(param_2 + 0x270);
  *(int32_t *)(param_1 + 0x274) = *(int32_t *)(param_2 + 0x274);
  plVar12 = (int64_t *)(param_1 + 0xb8);
  lVar15 = 0x10;
  lVar14 = 0x10;
  do {
    plVar1 = *(int64_t **)((param_2 - param_1) + (int64_t)plVar12);
    if (plVar1 != (int64_t *)0x0) {
      plocal_var_60 = (int8_t *)0x18022c947;
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plVar2 = (int64_t *)*plVar12;
    *plVar12 = (int64_t)plVar1;
    if (plVar2 != (int64_t *)0x0) {
      plocal_var_60 = (int8_t *)0x18022c95e;
      (**(code **)(*plVar2 + 0x38))();
    }
    plVar12 = plVar12 + 1;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  *(uint64_t *)(param_1 + 0x140) = *(uint64_t *)(param_2 + 0x140);
  plocal_var_60 = (int8_t *)0x18022c97e;
  function_22dd60(param_1);
  *(int16_t *)(param_1 + 0x3c0) = 0xffff;
  *(uint64_t *)(param_1 + 0x390) = *(uint64_t *)(param_2 + 0x390);
  *(uint64_t *)(param_1 + 0x3a8) = *(uint64_t *)(param_2 + 0x3a8);
  *(uint64_t *)(param_1 + 0x3b0) = *(uint64_t *)(param_2 + 0x3b0);
  *(uint64_t *)(param_1 + 0x3b8) = *(uint64_t *)(param_2 + 0x3b8);
  *(uint64_t *)(param_1 + 0x398) = *(uint64_t *)(param_2 + 0x398);
  *(uint64_t *)(param_1 + 0x3a0) = *(uint64_t *)(param_2 + 0x3a0);
  plocal_var_60 = (int8_t *)0x18022c9ee;
  function_22cab0(param_1 + 0x148,param_2 + 0x148);
  *(int8_t *)(param_1 + 0x3d8) = *(int8_t *)(param_2 + 0x3d8);
  plVar12 = (int64_t *)(param_1 + 0x3e0);
  do {
    plVar1 = *(int64_t **)(((param_2 + 0x3d8) - (param_1 + 0x3d8)) + (int64_t)plVar12);
    if (plVar1 != (int64_t *)0x0) {
      plocal_var_60 = (int8_t *)0x18022ca27;
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plVar2 = (int64_t *)*plVar12;
    *plVar12 = (int64_t)plVar1;
    if (plVar2 != (int64_t *)0x0) {
      plocal_var_60 = (int8_t *)0x18022ca3e;
      (**(code **)(*plVar2 + 0x38))();
    }
    plVar12 = plVar12 + 1;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  *(int8_t *)(param_1 + 0x460) = *(int8_t *)(param_2 + 0x460);
  *(uint64_t *)(param_1 + 0x3c8) = *(uint64_t *)(param_2 + 0x3c8);
  *(uint64_t *)(param_1 + 0x3d0) = *(uint64_t *)(param_2 + 0x3d0);
  plocal_var_60 = (int8_t *)0x18022ca86;
  function_22cab0(param_1 + 0x148,param_2 + 0x148);
  local_var_70 = 0xfffffffffffffffe;
  local_var_30 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_b8;
  bVar6 = false;
  local_var_78 = 0;
  *(uint64_t *)(param_1 + 0x1d0) = 0;
  if (core_system_data_config == 0) goto LAB_18022d28d;
  lVar14 = function_178540();
  puVar10 = plocal_var_90;
  if ((lVar14 == 0) || (cVar8 = function_22e5d0(param_1), puVar10 = plocal_var_90, cVar8 == '\0')) {
LAB_18022cf5f:
    bVar7 = false;
  }
  else {
    uVar3 = *(uint64_t *)(param_1 + 0x1e0);
    plocal_var_98 = &system_data_buffer_ptr;
    local_var_80 = 0;
    plocal_var_90 = (int32_t *)0x0;
    local_var_88 = 0;
    puVar10 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x16,0x13);
    *(int8_t *)puVar10 = 0;
    plocal_var_90 = puVar10;
    uVar9 = CoreEngineSystemCleanup(puVar10);
    local_var_80 = CONCAT44(local_var_80._4_4_,uVar9);
    *puVar10 = 0x5f657375;
    puVar10[1] = 0x74726976;
    puVar10[2] = 0x5f6c6175;
    puVar10[3] = 0x74786574;
    puVar10[4] = 0x6e697275;
    *(int16_t *)(puVar10 + 5) = 0x67;
    local_var_88 = 0x15;
    bVar6 = true;
    local_var_78 = 1;
    lVar14 = SystemCore_LoggingSystem0(uVar3,&plocal_var_98,0);
    if (lVar14 == 0) goto LAB_18022cf5f;
    bVar7 = true;
  }
  if (bVar6) {
    local_var_78 = 0;
    plocal_var_98 = &system_data_buffer_ptr;
    if (puVar10 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar10);
    }
    plocal_var_90 = (int32_t *)0x0;
    local_var_80 = local_var_80 & 0xffffffff00000000;
    plocal_var_98 = &system_state_ptr;
  }
  if (bVar7) {
    if (*(int64_t *)(param_1 + 0xa8) != 0) {
      *(int8_t *)(param_1 + 0x158) = 1;
      function_22e7d0(&plocal_var_98,param_1);
      if (*(void **)(param_1 + 0x148) != plocal_var_98) {
        *(int16_t *)(param_1 + 0x158) = 0;
      }
    }
    if (*(char *)(param_1 + 0x158) != '\0') {
      if (*(int64_t *)(param_1 + 0xb8) != 0) {
        *(uint64_t *)(*(int64_t *)(param_1 + 0xb8) + 0x348) = *(uint64_t *)(param_1 + 0x148);
        *(int32_t *)(*(int64_t *)(param_1 + 0xb8) + 0x350) = 0;
      }
      if (*(int64_t *)(param_1 + 200) != 0) {
        *(uint64_t *)(*(int64_t *)(param_1 + 200) + 0x348) = *(uint64_t *)(param_1 + 0x148);
        *(int32_t *)(*(int64_t *)(param_1 + 200) + 0x350) = 1;
      }
      if (*(int64_t *)(param_1 + 0xd8) != 0) {
        *(uint64_t *)(*(int64_t *)(param_1 + 0xd8) + 0x348) = *(uint64_t *)(param_1 + 0x148);
        *(int32_t *)(*(int64_t *)(param_1 + 0xd8) + 0x350) = 2;
      }
      plocal_var_68 = &processed_var_672_ptr;
      plocal_var_60 = stack_array_50;
      stack_array_50[0] = 0;
      local_var_58 = 0x15;
      strcpy_s(stack_array_50,0x20,&system_data_e020);
      uVar11 = SystemCore_LoggingSystem0(*(uint64_t *)(param_1 + 0x1e0),&plocal_var_68,1);
      *(uint64_t *)(param_1 + 0x140) = *(uint64_t *)(param_1 + 0x140) | uVar11;
      function_22dd60(param_1);
      *(int16_t *)(param_1 + 0x3c0) = 0xffff;
      plocal_var_68 = &system_state_ptr;
      *(int32_t *)(param_1 + 0x1d0) = 1;
      uVar3 = *(uint64_t *)(param_1 + 0x1e0);
      plocal_var_98 = &system_data_buffer_ptr;
      local_var_80 = 0;
      plocal_var_90 = (int32_t *)0x0;
      local_var_88 = 0;
      puVar10 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x26,0x13);
      *(int8_t *)puVar10 = 0;
      plocal_var_90 = puVar10;
      uVar9 = CoreEngineSystemCleanup(puVar10);
      local_var_80 = CONCAT44(local_var_80._4_4_,uVar9);
      *puVar10 = 0x5f657375;
      puVar10[1] = 0x62756f64;
      puVar10[2] = 0x635f656c;
      puVar10[3] = 0x726f6c6f;
      puVar10[4] = 0x5f70616d;
      puVar10[5] = 0x68746977;
      puVar10[6] = 0x73616d5f;
      puVar10[7] = 0x65745f6b;
      puVar10[8] = 0x72757478;
      *(int16_t *)(puVar10 + 9) = 0x65;
      local_var_88 = 0x25;
      SystemCore_LoggingSystem0(uVar3,&plocal_var_98,0);
      plocal_var_98 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar10);
    }
    plocal_var_68 = &processed_var_672_ptr;
    plocal_var_60 = stack_array_50;
    stack_array_50[0] = 0;
    local_var_58 = 0x15;
    strcpy_s(stack_array_50,0x20,&system_data_e020);
    uVar11 = SystemCore_LoggingSystem0(*(uint64_t *)(param_1 + 0x1e0),&plocal_var_68,1);
    *(uint64_t *)(param_1 + 0x140) = *(uint64_t *)(param_1 + 0x140) & ~uVar11;
    function_22dd60(param_1);
    plocal_var_68 = &system_state_ptr;
  }
LAB_18022d28d:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_30 ^ (uint64_t)stack_array_b8);
}
uint64_t * function_22cab0(uint64_t *param_1,uint64_t *param_2)
{
  void *puVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  void *puVar4;
  puVar2 = param_1 + 5;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar3 = 2;
  *(int8_t *)(param_1 + 2) = *(int8_t *)(param_2 + 2);
  *(int8_t *)((int64_t)param_1 + 0x11) = *(int8_t *)((int64_t)param_2 + 0x11);
  do {
    *(int32_t *)puVar2 =
         *(int32_t *)(((int64_t)param_2 - (int64_t)param_1) + (int64_t)puVar2);
    puVar1 = *(void **)(((int64_t)param_2 - (int64_t)param_1) + -8 + (int64_t)puVar2);
    puVar4 = &system_buffer_ptr;
    if (puVar1 != (void *)0x0) {
      puVar4 = puVar1;
    }
    strcpy_s(puVar2[-1],0x20,puVar4);
    puVar2 = puVar2 + 7;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_22cb40(int64_t param_1,int64_t *param_2)
void function_22cb40(int64_t param_1,int64_t *param_2)
{
  uint64_t uVar1;
  int64_t *plVar2;
  int32_t *puVar3;
  void *puVar4;
  int8_t stack_array_108 [32];
  int32_t local_var_e8;
  uint64_t local_var_e0;
  int64_t *plStack_d8;
  void *plocal_var_c8;
  void *plocal_var_c0;
  uint local_var_b8;
  uint8_t stack_array_b0 [136];
  uint64_t local_var_28;
  local_var_e0 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_108;
  local_var_e8 = 0;
  plStack_d8 = param_2;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x470,0x10,0x15);
  plVar2 = (int64_t *)function_22b590(uVar1);
  *param_2 = (int64_t)plVar2;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  local_var_e8 = 1;
  plocal_var_c8 = &memory_allocator_3432_ptr;
  plocal_var_c0 = stack_array_b0;
  stack_array_b0[0] = 0;
  local_var_b8 = *(uint *)(param_1 + 0x20);
  puVar4 = &system_buffer_ptr;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    puVar4 = *(void **)(param_1 + 0x18);
  }
  strcpy_s(stack_array_b0,0x80,puVar4);
  if (local_var_b8 + 6 < 0x7f) {
    puVar3 = (int32_t *)(plocal_var_c0 + local_var_b8);
    *puVar3 = 0x706f6328;
    *(int16_t *)(puVar3 + 1) = 0x2979;
    *(int8_t *)((int64_t)puVar3 + 6) = 0;
    local_var_b8 = local_var_b8 + 6;
  }
  *(uint64_t *)(*param_2 + 0xa8) = *(uint64_t *)(param_1 + 0xa8);
  puVar4 = &system_buffer_ptr;
  if (plocal_var_c0 != (void *)0x0) {
    puVar4 = plocal_var_c0;
  }
  (**(code **)(*(int64_t *)(*param_2 + 0x10) + 0x10))((int64_t *)(*param_2 + 0x10),puVar4);
  function_22c770(*param_2,param_1);
  plocal_var_c8 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_108);
}
// 函数: void function_22ccc0(int64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_22ccc0(int64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  code *pcVar1;
  void *puVar2;
  pcVar1 = *(code **)(*(int64_t *)(param_1 + 0x2d0) + 0x10);
  puVar2 = &system_buffer_ptr;
  if ((void *)param_2[1] != (void *)0x0) {
    puVar2 = (void *)param_2[1];
  }
  (*pcVar1)((int64_t *)(param_1 + 0x2d0),puVar2,pcVar1,param_4,0xfffffffffffffffe);
  function_22bf70(param_1,1);
  *param_2 = &system_state_ptr;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_22cd30(int64_t param_1,int param_2,int64_t *param_3)
void function_22cd30(int64_t param_1,int param_2,int64_t *param_3)
{
  int64_t *plVar1;
  uint64_t uVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int32_t uVar6;
  int64_t lVar7;
  int32_t *puVar8;
  uint64_t uVar9;
  int8_t stack_array_b8 [32];
  void *plocal_var_98;
  int32_t *plocal_var_90;
  int32_t local_var_88;
  uint64_t local_var_80;
  int32_t local_var_78;
  uint64_t local_var_70;
  void *plocal_var_68;
  int8_t *plocal_var_60;
  int32_t local_var_58;
  int8_t stack_array_50 [16];
  uint64_t local_var_40;
  uint64_t local_var_30;
  lVar7 = param_1 + (int64_t)param_2 * 8;
  if (param_3 != (int64_t *)0x0) {
    local_var_40 = 0x18022cd69;
    (**(code **)(*param_3 + 0x28))(param_3);
  }
  plVar1 = *(int64_t **)(lVar7 + 0xb8);
  *(int64_t **)(lVar7 + 0xb8) = param_3;
  if (plVar1 != (int64_t *)0x0) {
    local_var_40 = 0x18022cd88;
    (**(code **)(*plVar1 + 0x38))();
  }
  local_var_70 = 0xfffffffffffffffe;
  local_var_30 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_b8;
  bVar3 = false;
  local_var_78 = 0;
  *(uint64_t *)(param_1 + 0x1d0) = 0;
  if (core_system_data_config == 0) goto LAB_18022d28d;
  lVar7 = function_178540();
  puVar8 = plocal_var_90;
  if ((lVar7 == 0) || (cVar5 = function_22e5d0(param_1), puVar8 = plocal_var_90, cVar5 == '\0')) {
LAB_18022cf5f:
    bVar4 = false;
  }
  else {
    uVar2 = *(uint64_t *)(param_1 + 0x1e0);
    plocal_var_98 = &system_data_buffer_ptr;
    local_var_80 = 0;
    plocal_var_90 = (int32_t *)0x0;
    local_var_88 = 0;
    puVar8 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x16,0x13);
    *(int8_t *)puVar8 = 0;
    plocal_var_90 = puVar8;
    uVar6 = CoreEngineSystemCleanup(puVar8);
    local_var_80 = CONCAT44(local_var_80._4_4_,uVar6);
    *puVar8 = 0x5f657375;
    puVar8[1] = 0x74726976;
    puVar8[2] = 0x5f6c6175;
    puVar8[3] = 0x74786574;
    puVar8[4] = 0x6e697275;
    *(int16_t *)(puVar8 + 5) = 0x67;
    local_var_88 = 0x15;
    bVar3 = true;
    local_var_78 = 1;
    lVar7 = SystemCore_LoggingSystem0(uVar2,&plocal_var_98,0);
    if (lVar7 == 0) goto LAB_18022cf5f;
    bVar4 = true;
  }
  if (bVar3) {
    local_var_78 = 0;
    plocal_var_98 = &system_data_buffer_ptr;
    if (puVar8 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar8);
    }
    plocal_var_90 = (int32_t *)0x0;
    local_var_80 = local_var_80 & 0xffffffff00000000;
    plocal_var_98 = &system_state_ptr;
  }
  if (bVar4) {
    if (*(int64_t *)(param_1 + 0xa8) != 0) {
      *(int8_t *)(param_1 + 0x158) = 1;
      function_22e7d0(&plocal_var_98,param_1);
      if (*(void **)(param_1 + 0x148) != plocal_var_98) {
        *(int16_t *)(param_1 + 0x158) = 0;
      }
    }
    if (*(char *)(param_1 + 0x158) != '\0') {
      if (*(int64_t *)(param_1 + 0xb8) != 0) {
        *(uint64_t *)(*(int64_t *)(param_1 + 0xb8) + 0x348) = *(uint64_t *)(param_1 + 0x148);
        *(int32_t *)(*(int64_t *)(param_1 + 0xb8) + 0x350) = 0;
      }
      if (*(int64_t *)(param_1 + 200) != 0) {
        *(uint64_t *)(*(int64_t *)(param_1 + 200) + 0x348) = *(uint64_t *)(param_1 + 0x148);
        *(int32_t *)(*(int64_t *)(param_1 + 200) + 0x350) = 1;
      }
      if (*(int64_t *)(param_1 + 0xd8) != 0) {
        *(uint64_t *)(*(int64_t *)(param_1 + 0xd8) + 0x348) = *(uint64_t *)(param_1 + 0x148);
        *(int32_t *)(*(int64_t *)(param_1 + 0xd8) + 0x350) = 2;
      }
      plocal_var_68 = &processed_var_672_ptr;
      plocal_var_60 = stack_array_50;
      stack_array_50[0] = 0;
      local_var_58 = 0x15;
      strcpy_s(stack_array_50,0x20,&system_data_e020);
      uVar9 = SystemCore_LoggingSystem0(*(uint64_t *)(param_1 + 0x1e0),&plocal_var_68,1);
      *(uint64_t *)(param_1 + 0x140) = *(uint64_t *)(param_1 + 0x140) | uVar9;
      function_22dd60(param_1);
      *(int16_t *)(param_1 + 0x3c0) = 0xffff;
      plocal_var_68 = &system_state_ptr;
      *(int32_t *)(param_1 + 0x1d0) = 1;
      uVar2 = *(uint64_t *)(param_1 + 0x1e0);
      plocal_var_98 = &system_data_buffer_ptr;
      local_var_80 = 0;
      plocal_var_90 = (int32_t *)0x0;
      local_var_88 = 0;
      puVar8 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x26,0x13);
      *(int8_t *)puVar8 = 0;
      plocal_var_90 = puVar8;
      uVar6 = CoreEngineSystemCleanup(puVar8);
      local_var_80 = CONCAT44(local_var_80._4_4_,uVar6);
      *puVar8 = 0x5f657375;
      puVar8[1] = 0x62756f64;
      puVar8[2] = 0x635f656c;
      puVar8[3] = 0x726f6c6f;
      puVar8[4] = 0x5f70616d;
      puVar8[5] = 0x68746977;
      puVar8[6] = 0x73616d5f;
      puVar8[7] = 0x65745f6b;
      puVar8[8] = 0x72757478;
      *(int16_t *)(puVar8 + 9) = 0x65;
      local_var_88 = 0x25;
      SystemCore_LoggingSystem0(uVar2,&plocal_var_98,0);
      plocal_var_98 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar8);
    }
    plocal_var_68 = &processed_var_672_ptr;
    plocal_var_60 = stack_array_50;
    stack_array_50[0] = 0;
    local_var_58 = 0x15;
    strcpy_s(stack_array_50,0x20,&system_data_e020);
    uVar9 = SystemCore_LoggingSystem0(*(uint64_t *)(param_1 + 0x1e0),&plocal_var_68,1);
    *(uint64_t *)(param_1 + 0x140) = *(uint64_t *)(param_1 + 0x140) & ~uVar9;
    function_22dd60(param_1);
    plocal_var_68 = &system_state_ptr;
  }
LAB_18022d28d:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_30 ^ (uint64_t)stack_array_b8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_22ce40(int64_t param_1)
void function_22ce40(int64_t param_1)
{
  uint64_t uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int32_t uVar5;
  int64_t lVar6;
  int32_t *puVar7;
  uint64_t uVar8;
  int8_t stack_array_b8 [32];
  void *plocal_var_98;
  int32_t *plocal_var_90;
  int32_t local_var_88;
  uint64_t local_var_80;
  int32_t local_var_78;
  uint64_t local_var_70;
  void *plocal_var_68;
  int8_t *plocal_var_60;
  int32_t local_var_58;
  int8_t stack_array_50 [32];
  uint64_t local_var_30;
  local_var_70 = 0xfffffffffffffffe;
  local_var_30 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_b8;
  bVar2 = false;
  local_var_78 = 0;
  *(uint64_t *)(param_1 + 0x1d0) = 0;
  if (core_system_data_config == 0) goto LAB_18022d28d;
  lVar6 = function_178540();
  puVar7 = plocal_var_90;
  if ((lVar6 == 0) || (cVar4 = function_22e5d0(param_1), puVar7 = plocal_var_90, cVar4 == '\0')) {
LAB_18022cf5f:
    bVar3 = false;
  }
  else {
    uVar1 = *(uint64_t *)(param_1 + 0x1e0);
    plocal_var_98 = &system_data_buffer_ptr;
    local_var_80 = 0;
    plocal_var_90 = (int32_t *)0x0;
    local_var_88 = 0;
    puVar7 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x16,0x13);
    *(int8_t *)puVar7 = 0;
    plocal_var_90 = puVar7;
    uVar5 = CoreEngineSystemCleanup(puVar7);
    local_var_80 = CONCAT44(local_var_80._4_4_,uVar5);
    *puVar7 = 0x5f657375;
    puVar7[1] = 0x74726976;
    puVar7[2] = 0x5f6c6175;
    puVar7[3] = 0x74786574;
    puVar7[4] = 0x6e697275;
    *(int16_t *)(puVar7 + 5) = 0x67;
    local_var_88 = 0x15;
    bVar2 = true;
    local_var_78 = 1;
    lVar6 = SystemCore_LoggingSystem0(uVar1,&plocal_var_98,0);
    if (lVar6 == 0) goto LAB_18022cf5f;
    bVar3 = true;
  }
  if (bVar2) {
    local_var_78 = 0;
    plocal_var_98 = &system_data_buffer_ptr;
    if (puVar7 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar7);
    }
    plocal_var_90 = (int32_t *)0x0;
    local_var_80 = local_var_80 & 0xffffffff00000000;
    plocal_var_98 = &system_state_ptr;
  }
  if (bVar3) {
    if (*(int64_t *)(param_1 + 0xa8) != 0) {
      *(int8_t *)(param_1 + 0x158) = 1;
      function_22e7d0(&plocal_var_98,param_1);
      if (*(void **)(param_1 + 0x148) != plocal_var_98) {
        *(int16_t *)(param_1 + 0x158) = 0;
      }
    }
    if (*(char *)(param_1 + 0x158) != '\0') {
      if (*(int64_t *)(param_1 + 0xb8) != 0) {
        *(uint64_t *)(*(int64_t *)(param_1 + 0xb8) + 0x348) = *(uint64_t *)(param_1 + 0x148);
        *(int32_t *)(*(int64_t *)(param_1 + 0xb8) + 0x350) = 0;
      }
      if (*(int64_t *)(param_1 + 200) != 0) {
        *(uint64_t *)(*(int64_t *)(param_1 + 200) + 0x348) = *(uint64_t *)(param_1 + 0x148);
        *(int32_t *)(*(int64_t *)(param_1 + 200) + 0x350) = 1;
      }
      if (*(int64_t *)(param_1 + 0xd8) != 0) {
        *(uint64_t *)(*(int64_t *)(param_1 + 0xd8) + 0x348) = *(uint64_t *)(param_1 + 0x148);
        *(int32_t *)(*(int64_t *)(param_1 + 0xd8) + 0x350) = 2;
      }
      plocal_var_68 = &processed_var_672_ptr;
      plocal_var_60 = stack_array_50;
      stack_array_50[0] = 0;
      local_var_58 = 0x15;
      strcpy_s(stack_array_50,0x20,&system_data_e020);
      uVar8 = SystemCore_LoggingSystem0(*(uint64_t *)(param_1 + 0x1e0),&plocal_var_68,1);
      *(uint64_t *)(param_1 + 0x140) = *(uint64_t *)(param_1 + 0x140) | uVar8;
      function_22dd60(param_1);
      *(int16_t *)(param_1 + 0x3c0) = 0xffff;
      plocal_var_68 = &system_state_ptr;
      *(int32_t *)(param_1 + 0x1d0) = 1;
      uVar1 = *(uint64_t *)(param_1 + 0x1e0);
      plocal_var_98 = &system_data_buffer_ptr;
      local_var_80 = 0;
      plocal_var_90 = (int32_t *)0x0;
      local_var_88 = 0;
      puVar7 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x26,0x13);
      *(int8_t *)puVar7 = 0;
      plocal_var_90 = puVar7;
      uVar5 = CoreEngineSystemCleanup(puVar7);
      local_var_80 = CONCAT44(local_var_80._4_4_,uVar5);
      *puVar7 = 0x5f657375;
      puVar7[1] = 0x62756f64;
      puVar7[2] = 0x635f656c;
      puVar7[3] = 0x726f6c6f;
      puVar7[4] = 0x5f70616d;
      puVar7[5] = 0x68746977;
      puVar7[6] = 0x73616d5f;
      puVar7[7] = 0x65745f6b;
      puVar7[8] = 0x72757478;
      *(int16_t *)(puVar7 + 9) = 0x65;
      local_var_88 = 0x25;
      SystemCore_LoggingSystem0(uVar1,&plocal_var_98,0);
      plocal_var_98 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar7);
    }
    plocal_var_68 = &processed_var_672_ptr;
    plocal_var_60 = stack_array_50;
    stack_array_50[0] = 0;
    local_var_58 = 0x15;
    strcpy_s(stack_array_50,0x20,&system_data_e020);
    uVar8 = SystemCore_LoggingSystem0(*(uint64_t *)(param_1 + 0x1e0),&plocal_var_68,1);
    *(uint64_t *)(param_1 + 0x140) = *(uint64_t *)(param_1 + 0x140) & ~uVar8;
    function_22dd60(param_1);
    plocal_var_68 = &system_state_ptr;
  }
LAB_18022d28d:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_30 ^ (uint64_t)stack_array_b8);
}
bool function_22d360(int64_t param_1)
{
  char cVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  byte *pbVar5;
  uint uVar6;
  uint64_t uVar7;
  cVar1 = *(char *)(param_1 + 0x3c1);
  if (cVar1 == -1) {
    lVar3 = param_1;
    cVar1 = SystemFunction_00018022cda0();
    if ((((((cVar1 == '\0') ||
           (lVar3 = *(int64_t *)(lVar3 + 0x1e0), 1 < *(int *)(lVar3 + 0x1c4) - 1U)) ||
          ((*(uint *)(lVar3 + 0x1588) & 0x10000) != 0)) ||
         (((*(uint *)(param_1 + 0x388) >> 0x19 & 1) != 0 || (*(int *)(lVar3 + 0x290) != 0)))) ||
        ((*(char *)(param_1 + 0x13c) != '\x06' && (*(char *)(param_1 + 0x13c) != '\0')))) ||
       ((*(uint64_t *)(param_1 + 0x140) & *(uint64_t *)(param_1 + 0x398)) != 0)) {
LAB_18022d44f:
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
      plVar2 = (int64_t *)function_240a60();
      uVar7 = 0;
      lVar4 = plVar2[1] - *plVar2;
      lVar3 = lVar4 >> 0x3f;
      lVar4 = lVar4 / 0x60 + lVar3;
      if (lVar4 != lVar3) {
        pbVar5 = (byte *)(*plVar2 + 0x58);
        do {
          if (((*(uint64_t *)(param_1 + 0x140) >> (uVar7 & 0x3f) & 1) != 0) && ((*pbVar5 & 2) != 0)
             ) goto LAB_18022d44f;
          uVar6 = (int)uVar7 + 1;
          uVar7 = (uint64_t)uVar6;
          pbVar5 = pbVar5 + 0x60;
        } while ((uint64_t)(int64_t)(int)uVar6 < (uint64_t)(lVar4 - lVar3));
      }
    }
    *(char *)(param_1 + 0x3c1) = cVar1;
  }
  return cVar1 == '\x01';
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint function_22d470(int64_t param_1,int64_t *param_2)
{
  char cVar1;
  int64_t *plVar2;
  uint uVar3;
  uint uVar4;
  int64_t lVar5;
  uint64_t local_var_50;
  uint64_t local_var_48;
  code *pcStack_40;
  code *pcStack_38;
  uVar4 = 0;
  if ((*(byte *)(param_2 + 1) & 1) != 0) {
    function_22f080();
  }
  if (*(char *)(param_1 + 0x460) == '\0') {
    if ((char)param_2[2] != '\0') {
      if (((*(int64_t *)(param_1 + 0x3c8) != 0) &&
          (((core_system_data_config == 0 || (*(char *)(core_system_data_config + 0x1f1) == '\0')) &&
           (*(char *)(param_1 + 0x1d8) == '\0')))) &&
         ((*(int *)(param_1 + 0x1d0) != -1 && (*(int *)(param_1 + 0x1d0) != 0)))) {
        function_2e4c00(*(int64_t *)(param_1 + 0x3c8),0xffffffff);
      }
      if (((*(int64_t *)(param_1 + 0x3d0) != 0) &&
          ((core_system_data_config == 0 || (*(char *)(core_system_data_config + 0x1f1) == '\0')))) &&
         ((*(char *)(param_1 + 0x1d8) == '\0' &&
          ((*(int *)(param_1 + 0x1d4) != -1 && (*(int *)(param_1 + 0x1d4) != 0)))))) {
        function_2e4c00(*(int64_t *)(param_1 + 0x3d0),0xffffffff);
      }
    }
    plVar2 = (int64_t *)(param_1 + 0xb8);
    uVar3 = uVar4;
    do {
      lVar5 = *plVar2;
      if (((lVar5 != 0) &&
          (((cVar1 = SystemFunction_00018022d2c0(param_1,0), cVar1 == '\0' || ((uVar3 & 0xfffffff9) != 0))
           || (uVar3 == 6)))) &&
         ((((cVar1 = SystemFunction_00018022d2c0(param_1,1), cVar1 == '\0' ||
            ((uVar3 - 1 & 0xfffffffd) != 0)) && (*(int *)(lVar5 + 0x380) != 2)) &&
          ((*(int *)(*plVar2 + 0x380) != 3 && (*(int64_t *)(*plVar2 + 0xa8) != 0)))))) {
        uVar4 = uVar4 + 1;
        if (*param_2 != 0) {
          SystemInitializer();
        }
        if ((char)param_2[2] != '\0') {
          local_var_50 = 0;
          local_var_48 = 0;
          pcStack_40 = (code *)0x0;
          pcStack_38 = _guard_check_icall;
          SystemCore_DecryptionManager(*plVar2,0,*(int32_t *)((int64_t)param_2 + 0x14),&local_var_50);
          if (pcStack_40 != (code *)0x0) {
            (*pcStack_40)(&local_var_50,0,0);
          }
        }
      }
      uVar3 = uVar3 + 1;
      plVar2 = plVar2 + 1;
    } while ((int)uVar3 < 0x10);
  }
  else if ((*(byte *)(param_2 + 1) & 1) != 0) {
    plVar2 = (int64_t *)(param_1 + 0x3e0);
    lVar5 = 0x10;
    do {
      if ((((plVar2[-0x65] != 0) && (*plVar2 != 0)) && (*(int *)(*plVar2 + 0x380) != 2)) &&
         (*(int *)(*plVar2 + 0x380) != 3)) {
        uVar4 = uVar4 + 1;
      }
      plVar2 = plVar2 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return uVar4;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_22d6c0(int64_t param_1)
void function_22d6c0(int64_t param_1)
{
  uint64_t uVar1;
  int8_t stack_array_78 [32];
  uint64_t local_var_58;
  void *plocal_var_50;
  int8_t *plocal_var_48;
  int32_t local_var_40;
  int8_t stack_array_38 [32];
  uint64_t local_var_18;
  local_var_58 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_78;
  uVar1 = *(uint64_t *)(param_1 + 0x1e0);
  plocal_var_50 = &processed_var_672_ptr;
  plocal_var_48 = stack_array_38;
  stack_array_38[0] = 0;
  local_var_40 = 0x11;
  strcpy_s(stack_array_38,0x20,&ui_system_data_1280_ptr);
  SystemCore_LoggingSystem0(uVar1,&plocal_var_50,0);
  plocal_var_50 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_78);
}
// 函数: void function_22d770(int64_t param_1,int64_t param_2,uint64_t param_3)
void function_22d770(int64_t param_1,int64_t param_2,uint64_t param_3)
{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  void *puVar6;
  int64_t lVar7;
  void *puVar8;
  uint64_t *puVar9;
  void *puVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uVar11 = 0;
  iVar2 = *(int *)(param_2 + 0x10);
  puVar9 = (uint64_t *)(*(int64_t *)(param_1 + 0x1e0) + 0x1c38);
  uVar12 = uVar11;
  do {
    iVar3 = *(int *)(puVar9 + 1);
    iVar5 = iVar2;
    if (iVar3 == iVar2) {
      if (iVar3 != 0) {
        pbVar4 = (byte *)*puVar9;
        lVar7 = *(int64_t *)(param_2 + 8) - (int64_t)pbVar4;
        do {
          pbVar1 = pbVar4 + lVar7;
          iVar5 = (uint)*pbVar4 - (uint)*pbVar1;
          if (iVar5 != 0) break;
          pbVar4 = pbVar4 + 1;
        } while (*pbVar1 != 0);
      }
LAB_18022d7dd:
      if (iVar5 == 0) {
        if (-1 < (int)uVar12) {
          function_22cd30(param_1,uVar12,param_3);
          return;
        }
        goto LAB_18022d7ef;
      }
    }
    else if (iVar3 == 0) goto LAB_18022d7dd;
    uVar12 = (uint64_t)((int)uVar12 + 1);
    uVar11 = uVar11 + 1;
    puVar9 = puVar9 + 0xb;
    if (0xf < (int64_t)uVar11) {
LAB_18022d7ef:
      puVar8 = *(void **)(*(int64_t *)(param_1 + 0x1e0) + 0x18);
      puVar10 = &system_buffer_ptr;
      if (puVar8 != (void *)0x0) {
        puVar10 = puVar8;
      }
      puVar8 = &system_buffer_ptr;
      if (*(void **)(param_2 + 8) != (void *)0x0) {
        puVar8 = *(void **)(param_2 + 8);
      }
      puVar6 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x18) != (void *)0x0) {
        puVar6 = *(void **)(param_1 + 0x18);
      }
      SystemDataInitializer(&processed_var_7392_ptr,puVar6,puVar8,puVar10);
      return;
    }
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address