#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// $fun 的语义化别名
#define $alias_name $fun
// 99_part_02_part042.c - 4 个函数
// 函数: void function_1b2460(int64_t param_1)
void function_1b2460(int64_t param_1)
{
  float fVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint64_t stack_special_x_8;
  int64_t *plStackX_10;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  int32_t local_var_13c;
  uint64_t local_var_138;
  uint64_t local_var_130;
  int32_t local_var_124;
  uint64_t local_var_118;
  uint64_t local_var_110;
  uint64_t local_var_108;
  int32_t local_var_100;
  uint64_t local_var_f8;
  uint64_t local_var_f0;
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  int32_t local_var_d8;
  uint64_t local_var_d0;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  int32_t local_var_b8;
  uint64_t local_var_b0;
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  int32_t local_var_98;
  uint64_t local_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  local_var_78 = 0xfffffffffffffffe;
  function_198890(param_1,&stack_special_x_8,0);
  function_170ac0(stack_special_x_8,&processed_var_5392_ptr);
  local_var_118 = 0;
  local_var_110 = 0;
  local_var_108 = 0;
  local_var_100 = 6;
  local_var_f0 = 0;
  local_var_e8 = 0;
  local_var_e0 = 0;
  local_var_d8 = 6;
  local_var_d0 = 0;
  local_var_c8 = 0;
  local_var_c0 = 0;
  local_var_b8 = 6;
  plStackX_10 = &local_var_b0;
  local_var_b0 = 0;
  local_var_a8 = 0;
  local_var_a0 = 0;
  local_var_98 = 6;
  local_var_f8 = *(uint64_t *)(system_system_data_memory + 0x28);
  local_var_88 = *(uint64_t *)(param_1 + 0x454);
  local_var_80 = *(uint64_t *)(param_1 + 0x45c);
  fVar5 = *(float *)(param_1 + 0x46c) + 2.0;
  fVar7 = *(float *)(param_1 + 0x464);
  if (*(float *)(param_1 + 0x464) <= 10.0) {
    fVar7 = 10.0;
  }
  fVar6 = *(float *)(param_1 + 0x468);
  if (*(float *)(param_1 + 0x468) <= 10.0) {
    fVar6 = 10.0;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  local_var_124 = 0xffffffff;
  fVar1 = (float)local_var_88;
  fStack_148 = (float)local_var_88;
  uVar3 = (int32_t)local_var_80;
  fStack_140 = (float)(int32_t)local_var_80;
  local_var_13c = 0x7f7fffff;
  fStack_144 = fVar6;
  AudioMixer(&local_var_f0,&fStack_148);
  fStack_148 = fVar1;
  local_var_13c = 0x7f7fffff;
  fStack_144 = fVar6;
  fStack_140 = fVar5;
  AudioMixer(&local_var_f0,&fStack_148);
  fStack_148 = fVar1;
  uVar2 = local_var_88._4_4_;
  fStack_144 = (float)local_var_88._4_4_;
  local_var_13c = 0x7f7fffff;
  fStack_140 = fVar5;
  AudioMixer(&local_var_f0,&fStack_148);
  local_var_138 = 3;
  local_var_130 = 0x200000001;
  function_086270(&local_var_b0,&local_var_138);
  fStack_148 = fVar1;
  fStack_144 = (float)uVar2;
  fStack_140 = (float)uVar3;
  local_var_13c = 0x7f7fffff;
  AudioMixer(&local_var_f0,&fStack_148);
  fStack_148 = fVar1;
  fStack_140 = (float)uVar3;
  local_var_13c = 0x7f7fffff;
  fStack_144 = fVar6;
  AudioMixer(&local_var_f0,&fStack_148);
  fStack_148 = fVar1;
  fStack_144 = (float)uVar2;
  local_var_13c = 0x7f7fffff;
  fStack_140 = fVar5;
  AudioMixer(&local_var_f0,&fStack_148);
  local_var_138 = CONCAT44(3,(int32_t)local_var_138);
  local_var_130 = 0x500000004;
  function_086270(&local_var_b0,&local_var_138);
  fStack_140 = (float)uVar3;
  local_var_13c = 0x7f7fffff;
  fStack_148 = fVar7;
  fStack_144 = fVar6;
  AudioMixer(&local_var_f0,&fStack_148);
  local_var_13c = 0x7f7fffff;
  fStack_148 = fVar7;
  fStack_144 = fVar6;
  fStack_140 = fVar5;
  AudioMixer(&local_var_f0,&fStack_148);
  fStack_148 = fVar1;
  local_var_13c = 0x7f7fffff;
  fStack_144 = fVar6;
  fStack_140 = fVar5;
  AudioMixer(&local_var_f0,&fStack_148);
  local_var_138 = CONCAT44(6,(int32_t)local_var_138);
  local_var_130 = 0x800000007;
  function_086270(&local_var_b0,&local_var_138);
  fStack_148 = fVar1;
  fStack_140 = (float)uVar3;
  local_var_13c = 0x7f7fffff;
  fStack_144 = fVar6;
  AudioMixer(&local_var_f0,&fStack_148);
  fStack_140 = (float)uVar3;
  local_var_13c = 0x7f7fffff;
  fStack_148 = fVar7;
  fStack_144 = fVar6;
  AudioMixer(&local_var_f0,&fStack_148);
  fStack_148 = fVar1;
  local_var_13c = 0x7f7fffff;
  fStack_144 = fVar6;
  fStack_140 = fVar5;
  AudioMixer(&local_var_f0,&fStack_148);
  local_var_138 = CONCAT44(9,(int32_t)local_var_138);
  local_var_130 = 0xb0000000a;
  function_086270(&local_var_b0,&local_var_138);
  fStack_144 = (float)uVar2;
  fStack_140 = (float)uVar3;
  local_var_13c = 0x7f7fffff;
  fStack_148 = fVar7;
  AudioMixer(&local_var_f0,&fStack_148);
  fStack_144 = (float)uVar2;
  local_var_13c = 0x7f7fffff;
  fStack_148 = fVar7;
  fStack_140 = fVar5;
  AudioMixer(&local_var_f0,&fStack_148);
  local_var_13c = 0x7f7fffff;
  fStack_148 = fVar7;
  fStack_144 = fVar6;
  fStack_140 = fVar5;
  AudioMixer(&local_var_f0,&fStack_148);
  local_var_138 = CONCAT44(0xc,(int32_t)local_var_138);
  local_var_130 = 0xe0000000d;
  function_086270(&local_var_b0,&local_var_138);
  fStack_140 = (float)uVar3;
  local_var_13c = 0x7f7fffff;
  fStack_148 = fVar7;
  fStack_144 = fVar6;
  AudioMixer(&local_var_f0,&fStack_148);
  fStack_144 = (float)uVar2;
  fStack_140 = (float)uVar3;
  local_var_13c = 0x7f7fffff;
  fStack_148 = fVar7;
  AudioMixer(&local_var_f0,&fStack_148);
  local_var_13c = 0x7f7fffff;
  fStack_148 = fVar7;
  fStack_144 = fVar6;
  fStack_140 = fVar5;
  AudioMixer(&local_var_f0,&fStack_148);
  local_var_138 = CONCAT44(0xf,(int32_t)local_var_138);
  local_var_130 = 0x1100000010;
  function_086270(&local_var_b0,&local_var_138);
  fStack_148 = fVar1;
  fStack_144 = (float)uVar2;
  fStack_140 = (float)uVar3;
  local_var_13c = 0x7f7fffff;
  AudioMixer(&local_var_f0,&fStack_148);
  fStack_148 = fVar1;
  fStack_144 = (float)uVar2;
  local_var_13c = 0x7f7fffff;
  fStack_140 = fVar5;
  AudioMixer(&local_var_f0,&fStack_148);
  fStack_144 = (float)uVar2;
  local_var_13c = 0x7f7fffff;
  fStack_148 = fVar7;
  fStack_140 = fVar5;
  AudioMixer(&local_var_f0,&fStack_148);
  local_var_138 = CONCAT44(0x12,(int32_t)local_var_138);
  local_var_130 = 0x1400000013;
  function_086270(&local_var_b0,&local_var_138);
  fStack_144 = (float)uVar2;
  fStack_140 = (float)uVar3;
  local_var_13c = 0x7f7fffff;
  fStack_148 = fVar7;
  AudioMixer(&local_var_f0,&fStack_148);
  fStack_148 = fVar1;
  fStack_144 = (float)uVar2;
  fStack_140 = (float)uVar3;
  local_var_13c = 0x7f7fffff;
  AudioMixer(&local_var_f0,&fStack_148);
  fStack_144 = (float)uVar2;
  local_var_13c = 0x7f7fffff;
  fStack_148 = fVar7;
  fStack_140 = fVar5;
  AudioMixer(&local_var_f0,&fStack_148);
  local_var_138 = CONCAT44(0x15,(int32_t)local_var_138);
  local_var_130 = 0x1700000016;
  function_086270(&local_var_b0,&local_var_138);
  uVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x140,0x10,3);
  plStackX_10 = (int64_t *)function_14a1b0(uVar4);
  if (plStackX_10 != (int64_t *)0x0) {
    (**(code **)(*plStackX_10 + 0x28))(plStackX_10);
  }
  uVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x130,8,6);
// WARNING: Subroutine does not return
  memset(uVar4,0,0x130);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1b2c30(int64_t param_1)
void function_1b2c30(int64_t param_1)
{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int32_t uVar5;
  int32_t *puVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t lVar9;
  int64_t lVar10;
  int8_t stack_array_e8 [32];
  void *plocal_var_c8;
  int8_t *plocal_var_c0;
  int32_t local_var_b8;
  uint64_t local_var_b0;
  void *plocal_var_a8;
  int32_t *plocal_var_a0;
  int32_t local_var_98;
  uint64_t local_var_90;
  uint64_t local_var_88;
  void *plocal_var_80;
  uint64_t *plocal_var_78;
  int32_t local_var_70;
  uint64_t local_var_68;
  void *plocal_var_58;
  int8_t *plocal_var_50;
  int32_t local_var_48;
  int8_t stack_array_40 [16];
  uint64_t local_var_30;
  local_var_88 = 0xfffffffffffffffe;
  local_var_30 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_e8;
  if (*(int64_t *)(param_1 + 0x60b80) != 0) {
    lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x60b80) + 0x70);
    lVar7 = lVar1 + 0x368;
    function_1bdf70(lVar7,*(uint64_t *)(lVar1 + 0x378));
    *(int64_t *)lVar7 = lVar7;
    *(int64_t *)(lVar1 + 0x370) = lVar7;
    *(uint64_t *)(lVar1 + 0x378) = 0;
    *(int8_t *)(lVar1 + 0x380) = 0;
    *(uint64_t *)(lVar1 + 0x388) = 0;
    lVar7 = *(int64_t *)(lVar1 + 0x318);
    if (lVar7 != 0) {
      *(int64_t *)lVar7 = lVar7;
      *(int64_t *)(lVar7 + 8) = lVar7;
      *(uint64_t *)(lVar7 + 0x10) = 0;
      *(int8_t *)(lVar7 + 0x18) = 0;
      *(uint64_t *)(lVar7 + 0x20) = 0;
    }
    CoreEngine_0572D0(lVar1 + 0x328);
    lVar7 = lVar1 + 0x10;
    lVar9 = 6;
    do {
      function_1de530(lVar7);
      lVar7 = lVar7 + 0x70;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    plVar2 = *(int64_t **)(*(int64_t *)(param_1 + 0x60b80) + 0x40);
    lVar7 = *plVar2;
    plVar8 = plVar2;
    if (lVar7 == 0) {
      plVar8 = plVar2 + 1;
      lVar7 = *plVar8;
      while (lVar7 == 0) {
        plVar8 = plVar8 + 1;
        lVar7 = *plVar8;
      }
    }
    lVar9 = plVar2[*(int64_t *)(*(int64_t *)(param_1 + 0x60b80) + 0x48)];
    while (lVar7 != lVar9) {
      lVar3 = *(int64_t *)(lVar7 + 8);
      lVar10 = lVar3 + 0x5f8;
      puVar4 = *(uint64_t **)(lVar3 + 0x608);
      if (puVar4 != (uint64_t *)0x0) {
        SystemCache_Manager(lVar10,*puVar4);
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(puVar4);
      }
      *(int64_t *)lVar10 = lVar10;
      *(int64_t *)(lVar3 + 0x600) = lVar10;
      *(uint64_t *)(lVar3 + 0x608) = 0;
      *(int8_t *)(lVar3 + 0x610) = 0;
      *(uint64_t *)(lVar3 + 0x618) = 0;
      lVar7 = *(int64_t *)(lVar7 + 0x10);
      while (lVar7 == 0) {
        plVar8 = plVar8 + 1;
        lVar7 = *plVar8;
      }
    }
    plocal_var_c8 = &system_data_buffer_ptr;
    local_var_b0 = 0;
    plocal_var_c0 = (int8_t *)0x0;
    local_var_b8 = 0;
    CoreEngineDataBufferProcessor(&plocal_var_c8,*(int32_t *)(lVar1 + 0x2e0));
    if (*(int *)(lVar1 + 0x2e0) != 0) {
// WARNING: Subroutine does not return
      memcpy(plocal_var_c0,*(uint64_t *)(lVar1 + 0x2d8),*(int *)(lVar1 + 0x2e0) + 1);
    }
    if (*(int64_t *)(lVar1 + 0x2d8) != 0) {
      local_var_b8 = 0;
      if (plocal_var_c0 != (int8_t *)0x0) {
        *plocal_var_c0 = 0;
      }
      local_var_b0 = local_var_b0 & 0xffffffff;
    }
    plocal_var_80 = &system_data_buffer_ptr;
    local_var_68 = 0;
    plocal_var_78 = (uint64_t *)0x0;
    local_var_70 = 0;
    puVar6 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar6 = 0;
    plocal_var_78 = (uint64_t *)puVar6;
    uVar5 = CoreEngineSystemCleanup(puVar6);
    *puVar6 = 0x6361732e;
    *(int16_t *)(puVar6 + 1) = 0x78;
    local_var_70 = 5;
    local_var_68._0_4_ = uVar5;
    UISystem_EventDispatcher(&plocal_var_c8,&plocal_var_80);
    plocal_var_80 = &system_data_buffer_ptr;
    if (plocal_var_78 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_78 = (uint64_t *)0x0;
    local_var_68 = (uint64_t)local_var_68._4_4_ << 0x20;
    plocal_var_80 = &system_state_ptr;
    plocal_var_a8 = &system_data_buffer_ptr;
    local_var_90 = 0;
    plocal_var_a0 = (int32_t *)0x0;
    local_var_98 = 0;
    puVar6 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar6 = 0;
    plocal_var_a0 = puVar6;
    uVar5 = CoreEngineSystemCleanup(puVar6);
    *puVar6 = 0x7478742e;
    *(int8_t *)(puVar6 + 1) = 0;
    local_var_98 = 4;
    local_var_90._0_4_ = uVar5;
    UISystem_EventDispatcher(&plocal_var_c8,&plocal_var_a8);
    plocal_var_a8 = &system_data_buffer_ptr;
    if (plocal_var_a0 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_a0 = (int32_t *)0x0;
    local_var_90 = (uint64_t)local_var_90._4_4_ << 0x20;
    plocal_var_a8 = &system_state_ptr;
    plocal_var_80 = &system_config_ptr;
    plocal_var_78 = &local_var_68;
    local_var_68 = local_var_68 & 0xffffffffffffff00;
    local_var_70 = 5;
    strcpy_s(&local_var_68,0x10,&system_data_be54);
    UISystem_EventDispatcher(&plocal_var_c8,&plocal_var_80);
    plocal_var_80 = &system_state_ptr;
    plocal_var_58 = &system_config_ptr;
    plocal_var_50 = stack_array_40;
    stack_array_40[0] = 0;
    local_var_48 = 4;
    strcpy_s(stack_array_40,0x10,&system_data_b88c);
    UISystem_EventDispatcher(&plocal_var_c8,&plocal_var_58);
    plocal_var_58 = &system_state_ptr;
    plocal_var_c8 = &system_data_buffer_ptr;
    if (plocal_var_c0 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_c0 = (int8_t *)0x0;
    local_var_b0 = local_var_b0 & 0xffffffff00000000;
    plocal_var_c8 = &system_state_ptr;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_30 ^ (uint64_t)stack_array_e8);
}
// 函数: void function_1b3050(int64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4)
void function_1b3050(int64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4)
{
  float fVar1;
  float fVar2;
  float fVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  char cVar7;
  int64_t *plVar8;
  int32_t uVar9;
  int64_t lVar10;
  int32_t local_var_80;
  int32_t local_var_7c;
  int32_t local_var_78;
  int32_t local_var_74;
  uint64_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  uint64_t local_var_30;
  lVar10 = *(int64_t *)(param_1 + 0x81f8);
  if (((lVar10 != 0) &&
      ((*(int64_t *)(lVar10 + 0xf8) - (int64_t)*(int64_t **)(lVar10 + 0xf0) & 0xfffffffffffffff8U
       ) == 8)) && (plVar8 = (int64_t *)**(int64_t **)(lVar10 + 0xf0), plVar8 != (int64_t *)0x0))
  {
    (**(code **)(*plVar8 + 0x28))(plVar8,param_2,param_3,param_4,0xfffffffffffffffe);
    fVar1 = *(float *)(param_1 + 0x30b0);
    local_var_68 = 0x3f800000;
    local_var_60 = 0;
    local_var_58 = 0x3f80000000000000;
    local_var_50 = 0;
    local_var_48 = 0;
    local_var_40 = 0x3f800000;
    local_var_38 = 0;
    local_var_30 = 0x3f80000000000000;
    function_085c10(&local_var_68,3.1415927 - (fVar1 + *(float *)(param_1 + 0x3f50)) * 0.017453292);
    fVar2 = *(float *)(param_1 + 0x32ec);
    fVar3 = *(float *)(param_1 + 0x32e8);
    local_var_68 = CONCAT44(local_var_68._4_4_ * fVar3,(float)local_var_68 * fVar3);
    local_var_60 = CONCAT44(local_var_60._4_4_,(float)local_var_60 * fVar3);
    local_var_58 = CONCAT44(local_var_58._4_4_ * fVar3,(float)local_var_58 * fVar3);
    local_var_50 = CONCAT44(local_var_50._4_4_,(float)local_var_50 * fVar3);
    local_var_48 = CONCAT44(local_var_48._4_4_ * fVar2,(float)local_var_48 * fVar2);
    local_var_40 = CONCAT44(local_var_40._4_4_,(float)local_var_40 * fVar2);
    (**(code **)(*plVar8 + 0x148))(plVar8,&local_var_68);
    lVar10 = (**(code **)(*plVar8 + 0x178))(plVar8);
    uVar9 = *(int32_t *)(*(int64_t *)(lVar10 + 0x1b8) + 0x28c);
    uVar4 = *(int32_t *)(param_1 + 0x30cc);
    uVar5 = *(int32_t *)(param_1 + 0x30d0);
    fVar2 = *(float *)(param_1 + 0x3f50);
    uVar6 = *(int32_t *)(param_1 + 0x30d8);
    cVar7 = *(char *)(param_1 + 0x331d);
    *(int32_t *)(lVar10 + 0x2a8) = *(int32_t *)(*(int64_t *)(lVar10 + 0x1b8) + 0x288);
    *(int32_t *)(lVar10 + 0x2ac) = uVar9;
    *(int32_t *)(lVar10 + 0x2b0) = uVar4;
    *(int32_t *)(lVar10 + 0x2b4) = uVar5;
    *(float *)(lVar10 + 0x2b8) = fVar1 + fVar2;
    *(int32_t *)(lVar10 + 700) = uVar6;
    *(int32_t *)(lVar10 + 0x2c0) = 0;
    *(float *)(lVar10 + 0x2c4) = (float)(cVar7 != '\0');
    local_var_80 = 0x47c35000;
    local_var_7c = 0x47c35000;
    local_var_78 = 0x47c35000;
    local_var_74 = 0x7f7fffff;
    function_2f1610(*(uint64_t *)(param_1 + 0x81f8),&local_var_80);
    local_var_80 = 0xc7c35000;
    local_var_7c = 0xc7c35000;
    local_var_78 = 0xc7c35000;
    local_var_74 = 0x7f7fffff;
    function_2f1610(*(uint64_t *)(param_1 + 0x81f8),&local_var_80);
    (**(code **)(*plVar8 + 0x38))(plVar8);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1b32d0(int64_t param_1)
void function_1b32d0(int64_t param_1)
{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t **pplVar4;
  int64_t lVar5;
  int64_t *plVar6;
  uint64_t *puVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int iVar11;
  int32_t uVar13;
  int8_t stack_array_178 [32];
  int64_t *plStack_158;
  int32_t local_var_150;
  int64_t *plStack_148;
  int64_t **pplStack_140;
  int64_t *plStack_138;
  int64_t *plStack_130;
  int64_t *plStack_128;
  int64_t *plStack_120;
  int64_t *plStack_118;
  uint64_t local_var_110;
  int64_t *plStack_108;
  void *plocal_var_f8;
  int8_t *plocal_var_f0;
  int32_t local_var_e8;
  int32_t local_var_e4;
  int8_t stack_array_e0 [8];
  uint64_t local_var_d8;
  int64_t *plStack_d0;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  int32_t local_var_b8;
  uint64_t local_var_b0;
  void *plocal_var_98;
  int8_t *plocal_var_90;
  int32_t local_var_88;
  int8_t stack_array_80 [72];
  uint64_t local_var_38;
  uint64_t uVar12;
  local_var_110 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  uVar9 = 0;
  local_var_150 = 0;
  if ((*(char *)(param_1 + 0x27b8) != '\0') && (*(int64_t *)(param_1 + 0x81f8) == 0)) {
    function_198890(param_1,&plStack_130,1);
    function_170ac0(plStack_130,&processed_var_5416_ptr);
    *(int8_t *)((int64_t)plStack_130 + 0x2e4) = 0;
    plVar8 = plStack_130;
    uVar12 = uVar9;
    if (plStack_130[0x39] - plStack_130[0x38] >> 3 != 0) {
      do {
        iVar11 = (int)uVar12;
        function_2e8580(*(uint64_t *)(uVar9 + plVar8[0x38]),0,1);
        uVar9 = uVar9 + 8;
        uVar12 = (uint64_t)(iVar11 + 1U);
      } while ((uint64_t)(int64_t)(int)(iVar11 + 1U) <
               (uint64_t)(plVar8[0x39] - plVar8[0x38] >> 3));
    }
    plVar8 = plStack_130;
    uVar1 = *(uint *)((int64_t)plStack_130 + 0x2ac);
    *(uint *)((int64_t)plStack_130 + 0x2ac) = uVar1 | 0x1220000;
    function_2ee810(plStack_130,uVar1);
    uVar13 = function_2ee990(plVar8,uVar1);
    uVar1 = *(uint *)((int64_t)plStack_130 + 0x2c4);
    if ((uVar1 & 4) == 0) {
      *(uint *)((int64_t)plStack_130 + 0x2c4) = uVar1 | 4;
      if (((plStack_130[4] != 0) && (*(char *)(plStack_130[4] + 0x60cb0) == '\0')) &&
         ((uVar1 & 2) != 0)) {
        uVar13 = RenderingSystem_UpdateCamera(plStack_130,0);
      }
    }
    lVar5 = system_system_data_memory;
    if (*(int64_t *)(system_system_data_memory + 0x338) == 0) {
      puVar7 = (uint64_t *)function_094e80(uVar13,&plStack_128,&processed_var_436_ptr);
      uVar10 = *puVar7;
      *puVar7 = 0;
      plStack_138 = *(int64_t **)(lVar5 + 0x338);
      *(uint64_t *)(lVar5 + 0x338) = uVar10;
      if (plStack_138 != (int64_t *)0x0) {
        (**(code **)(*plStack_138 + 0x38))();
      }
      if (plStack_128 != (int64_t *)0x0) {
        (**(code **)(*plStack_128 + 0x38))();
      }
      plVar8 = (int64_t *)function_0befa0(lVar5,&plStack_138);
      lVar2 = *(int64_t *)(lVar5 + 0x338);
      lVar3 = *plVar8;
      if (plStack_138 != (int64_t *)0x0) {
        (**(code **)(*plStack_138 + 0x38))();
      }
      if (lVar2 == lVar3) {
        SystemDataInitializer(&memory_allocator_368_ptr);
        puVar7 = (uint64_t *)function_0bf4f0(lVar5,&plStack_148);
        uVar10 = *puVar7;
        *puVar7 = 0;
        plStack_158 = *(int64_t **)(lVar5 + 0x338);
        *(uint64_t *)(lVar5 + 0x338) = uVar10;
        if (plStack_158 != (int64_t *)0x0) {
          (**(code **)(*plStack_158 + 0x38))();
        }
        if (plStack_148 != (int64_t *)0x0) {
          (**(code **)(*plStack_148 + 0x38))();
        }
        *(int8_t *)(*(int64_t *)(lVar5 + 0x338) + 0xff) = 0;
      }
    }
    pplVar4 = *(int64_t ***)(lVar5 + 0x338);
    pplStack_140 = pplVar4;
    if (pplVar4 != (int64_t **)0x0) {
      (*(code *)(*pplVar4)[5])(pplVar4);
    }
    local_var_150 = 1;
    SystemCore_BufferManager(pplVar4,&plStack_120);
    local_var_150 = 0;
    if (pplVar4 != (int64_t **)0x0) {
      (*(code *)(*pplVar4)[7])(pplVar4);
    }
    plocal_var_f8 = (void *)0x0;
    plocal_var_f0 = (int8_t *)0xffffffff00000000;
    local_var_e8 = CONCAT13(local_var_e8._3_1_,1);
    local_var_e4 = 0xffffffff;
    stack_array_e0[0] = 1;
    local_var_d8 = 0;
    pplStack_140 = &plStack_d0;
    plStack_d0 = (int64_t *)0x0;
    local_var_c8 = 0;
    local_var_c0 = 0;
    local_var_b8 = 3;
    local_var_b0 = 0;
    function_076c50(plStack_120,&plocal_var_f8);
    plVar8 = plStack_130;
    pplStack_140 = &plStack_138;
    plStack_138 = plStack_120;
    if (plStack_120 != (int64_t *)0x0) {
      (**(code **)(*plStack_120 + 0x28))();
    }
    function_0ee700(plVar8,&plStack_138,1);
    plStack_128 = plStack_130;
    if (plStack_130 != (int64_t *)0x0) {
      (**(code **)(*plStack_130 + 0x28))();
    }
    plVar8 = plStack_128;
    pplStack_140 = &plStack_128;
    plStack_148 = plStack_128;
    if (plStack_128 != (int64_t *)0x0) {
      (**(code **)(*plStack_128 + 0x28))(plStack_128);
    }
    plStack_148 = *(int64_t **)(param_1 + 0x81f8);
    *(int64_t **)(param_1 + 0x81f8) = plVar8;
    if (plStack_148 != (int64_t *)0x0) {
      (**(code **)(*plStack_148 + 0x38))();
    }
    if (plStack_128 != (int64_t *)0x0) {
      (**(code **)(*plStack_128 + 0x38))();
    }
    pplStack_140 = &plStack_d0;
    if (plStack_d0 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    if (plStack_120 != (int64_t *)0x0) {
      (**(code **)(*plStack_120 + 0x38))();
    }
    if (plStack_130 != (int64_t *)0x0) {
      (**(code **)(*plStack_130 + 0x38))();
    }
  }
  lVar5 = *(int64_t *)(param_1 + 0x81f8);
  if ((lVar5 != 0) &&
     ((*(int64_t *)(lVar5 + 0xf8) - (int64_t)*(int64_t **)(lVar5 + 0xf0) & 0xfffffffffffffff8U)
      == 8)) {
    plVar8 = (int64_t *)**(int64_t **)(lVar5 + 0xf0);
    plStack_108 = plVar8;
    if (plVar8 != (int64_t *)0x0) {
      (**(code **)(*plVar8 + 0x28))(plVar8);
      plStack_158 = (int64_t *)0x0;
      plocal_var_98 = &memory_allocator_3480_ptr;
      plocal_var_90 = stack_array_80;
      stack_array_80[0] = 0;
      local_var_88 = 6;
      strcpy_s(stack_array_80,0x40,&processed_var_436_ptr);
      puVar7 = (uint64_t *)SystemCore_PerformanceMonitor(system_resource_state,&pplStack_140,&plocal_var_98,1);
      puVar7 = (uint64_t *)function_22cb40(*puVar7,&plStack_118);
      plVar6 = (int64_t *)*puVar7;
      *puVar7 = 0;
      plStack_148 = plStack_158;
      if (plStack_158 != (int64_t *)0x0) {
        lVar5 = *plStack_158;
        plStack_158 = plVar6;
        (**(code **)(lVar5 + 0x38))();
        plVar6 = plStack_158;
      }
      plStack_158 = plVar6;
      if (plStack_118 != (int64_t *)0x0) {
        (**(code **)(*plStack_118 + 0x38))();
      }
      if (pplStack_140 != (int64_t **)0x0) {
        (*(code *)(*pplStack_140)[7])();
      }
      plocal_var_98 = &system_state_ptr;
      if (plStack_158 == (int64_t *)0x0) {
        puVar7 = (uint64_t *)function_0be9a0(system_system_data_memory,&plStack_120,0);
        local_var_150 = 4;
        puVar7 = (uint64_t *)function_22cb40(*puVar7,&plStack_138);
        plVar6 = (int64_t *)*puVar7;
        *puVar7 = 0;
        plStack_148 = plStack_158;
        if (plStack_158 != (int64_t *)0x0) {
          lVar5 = *plStack_158;
          plStack_158 = plVar6;
          (**(code **)(lVar5 + 0x38))();
          plVar6 = plStack_158;
        }
        plStack_158 = plVar6;
        if (plStack_138 != (int64_t *)0x0) {
          (**(code **)(*plStack_138 + 0x38))();
        }
        local_var_150 = 0;
        if (plStack_120 != (int64_t *)0x0) {
          (**(code **)(*plStack_120 + 0x38))();
        }
      }
      if (*(int64_t *)(param_1 + 0x3080) != 0) {
        if (*(int *)(param_1 + 0x3320) == 2) {
          uVar10 = 5;
        }
        else {
          uVar10 = 0;
        }
        function_22cd30(plStack_158,uVar10);
      }
      if (*(int64_t *)(param_1 + 0x30a8) != 0) {
        function_22cd30(plStack_158,4);
      }
      iVar11 = *(int *)(param_1 + 0x3320);
      if (iVar11 == 1) {
        lVar5 = plStack_158[0x3c];
        plocal_var_f8 = &memory_allocator_3480_ptr;
        plocal_var_f0 = stack_array_e0;
        stack_array_e0[0] = 0;
        local_var_e8 = 0x10;
        strcpy_s(stack_array_e0,0x40,&system_data_be60);
        uVar9 = SystemCore_LoggingSystem0(lVar5,&plocal_var_f8,1);
        plVar6 = plStack_158;
        plocal_var_f8 = &system_state_ptr;
        plStack_158[0x28] = plStack_158[0x28] | uVar9;
        function_22dd60(plStack_158);
        *(int16_t *)(plVar6 + 0x78) = 0xffff;
        iVar11 = *(int *)(param_1 + 0x3320);
      }
      if (iVar11 == 2) {
        lVar5 = plStack_158[0x3c];
        plocal_var_f8 = &memory_allocator_3480_ptr;
        plocal_var_f0 = stack_array_e0;
        stack_array_e0[0] = 0;
        local_var_e8 = 0xb;
        strcpy_s(stack_array_e0,0x40,&system_data_be88);
        uVar9 = SystemCore_LoggingSystem0(lVar5,&plocal_var_f8,1);
        plVar6 = plStack_158;
        plocal_var_f8 = &system_state_ptr;
        plStack_158[0x28] = plStack_158[0x28] | uVar9;
        function_22dd60(plStack_158);
        *(int16_t *)(plVar6 + 0x78) = 0xffff;
      }
      plVar6 = plStack_158;
      plocal_var_f8 = &memory_allocator_3480_ptr;
      plocal_var_f0 = stack_array_e0;
      stack_array_e0[0] = 0;
      local_var_e8 = 9;
      strcpy_s(stack_array_e0,0x40,&processed_var_5464_ptr);
      puVar7 = (uint64_t *)SystemCore_GarbageCollector(system_resource_state,&plStack_148,&plocal_var_f8,1);
      function_22cd30(plVar6,8,*puVar7);
      if (plStack_148 != (int64_t *)0x0) {
        (**(code **)(*plStack_148 + 0x38))();
      }
      plocal_var_f8 = &system_state_ptr;
      (**(code **)(*plVar8 + 0x118))(plVar8,&plStack_158);
      function_1b3050(param_1);
      if ((*(int64_t *)(param_1 + 0x81f8) != 0) && (system_data_2847 == '\0')) {
        plocal_var_f8 = (void *)0x0;
        plocal_var_f0 = (int8_t *)0xffffffff00000000;
        local_var_e8 = CONCAT13(local_var_e8._3_1_,1);
        local_var_e4 = 0xffffffff;
        stack_array_e0[0] = 1;
        local_var_d8 = 0;
        pplStack_140 = &plStack_d0;
        plStack_d0 = (int64_t *)0x0;
        local_var_c8 = 0;
        local_var_c0 = 0;
        local_var_b8 = 3;
        local_var_b0 = 0;
        function_2e7bc0(*(uint64_t *)(param_1 + 0x81f8),&plocal_var_f8);
        pplStack_140 = &plStack_d0;
        if (plStack_d0 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
      }
      if (plStack_158 != (int64_t *)0x0) {
        (**(code **)(*plStack_158 + 0x38))();
      }
    }
    if (plVar8 != (int64_t *)0x0) {
      (**(code **)(*plVar8 + 0x38))(plVar8);
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_178);
}
uint64_t function_1b3ad0(int64_t param_1,int64_t param_2)
{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  byte *pbVar5;
  int iVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int iVar9;
  int64_t lVar10;
  function_3986d0(param_1 + 0x607e0);
  lVar4 = *(int64_t *)(param_1 + 0x60858);
  iVar9 = 0;
  uVar7 = *(int64_t *)(param_1 + 0x60860) - lVar4 >> 3;
  if (uVar7 != 0) {
    iVar2 = *(int *)(param_2 + 0x10);
    lVar10 = 0;
    do {
      iVar3 = *(int *)(*(int64_t *)(lVar10 + lVar4) + 0x298);
      iVar6 = iVar2;
      if (iVar3 == iVar2) {
        if (iVar3 != 0) {
          pbVar5 = *(byte **)(*(int64_t *)(lVar10 + lVar4) + 0x290);
          lVar8 = *(int64_t *)(param_2 + 8) - (int64_t)pbVar5;
          do {
            pbVar1 = pbVar5 + lVar8;
            iVar6 = (uint)*pbVar5 - (uint)*pbVar1;
            if (iVar6 != 0) break;
            pbVar5 = pbVar5 + 1;
          } while (*pbVar1 != 0);
        }
LAB_1801b3b5f:
        if (iVar6 == 0) {
          return *(uint64_t *)(lVar4 + (int64_t)iVar9 * 8);
        }
      }
      else if (iVar3 == 0) goto LAB_1801b3b5f;
      iVar9 = iVar9 + 1;
      lVar10 = lVar10 + 8;
    } while ((uint64_t)(int64_t)iVar9 < uVar7);
  }
  return 0;
}
uint64_t function_1b3ba0(int64_t param_1,int64_t param_2)
{
  byte *pbVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int64_t lVar6;
  char *pcVar7;
  byte *pbVar8;
  uint uVar9;
  int64_t lVar10;
  int iVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t *plVar14;
  int iVar15;
  uint64_t uVar16;
  bool bVar17;
  function_3986d0(param_1 + 0x607e0);
  lVar6 = *(int64_t *)(param_1 + 0x60858);
  iVar11 = 0;
  uVar16 = *(int64_t *)(param_1 + 0x60860) - lVar6 >> 3;
  if (uVar16 != 0) {
    lVar12 = 0;
    do {
      lVar13 = *(int64_t *)(lVar12 + lVar6);
      uVar4 = *(uint *)(lVar13 + 0x298);
      if (uVar4 < 0x15) {
LAB_1801b3ce4:
        uVar9 = *(uint *)(param_2 + 0x10);
        if (uVar4 == uVar9) {
          if (uVar4 != 0) {
            pbVar8 = *(byte **)(lVar13 + 0x290);
            lVar13 = *(int64_t *)(param_2 + 8) - (int64_t)pbVar8;
            do {
              pbVar1 = pbVar8 + lVar13;
              uVar9 = (uint)*pbVar8 - (uint)*pbVar1;
              if (uVar9 != 0) break;
              pbVar8 = pbVar8 + 1;
            } while (*pbVar1 != 0);
          }
        }
        else if (uVar4 != 0) goto LAB_1801b3d20;
        if (uVar9 == 0) {
          return *(uint64_t *)(lVar6 + (int64_t)iVar11 * 8);
        }
      }
      else {
        lVar10 = 0;
        do {
          if (*(char *)(*(int64_t *)(lVar13 + 0x290) + lVar10) != (&processed_var_5496_ptr)[lVar10])
          goto LAB_1801b3ce4;
          lVar10 = lVar10 + 1;
        } while (lVar10 < 0x15);
        iVar15 = 0;
        if (*(int64_t *)(lVar13 + 0x1c8) - *(int64_t *)(lVar13 + 0x1c0) >> 3 != 0) {
          plVar14 = *(int64_t **)(lVar13 + 0x1c0);
          do {
            iVar5 = *(int *)(*plVar14 + 0x298);
            if (iVar5 == *(int *)(param_2 + 0x10)) {
              if (iVar5 == 0) {
LAB_1801b3cae:
                if (*(int *)(param_2 + 0x10) == 0) goto LAB_1801b3d53;
                goto LAB_1801b3cb7;
              }
              pcVar7 = *(char **)(*plVar14 + 0x290);
              lVar10 = *(int64_t *)(param_2 + 8) - (int64_t)pcVar7;
              do {
                cVar2 = *pcVar7;
                cVar3 = pcVar7[lVar10];
                if (cVar2 != cVar3) break;
                pcVar7 = pcVar7 + 1;
              } while (cVar3 != '\0');
              bVar17 = cVar2 == cVar3;
            }
            else {
              if (iVar5 == 0) goto LAB_1801b3cae;
LAB_1801b3cb7:
              bVar17 = false;
            }
            if (bVar17) {
LAB_1801b3d53:
              return *(uint64_t *)
                      (*(int64_t *)(*(int64_t *)(lVar6 + (int64_t)iVar11 * 8) + 0x1c0) +
                      (int64_t)iVar15 * 8);
            }
            iVar15 = iVar15 + 1;
            plVar14 = plVar14 + 1;
          } while ((uint64_t)(int64_t)iVar15 <
                   (uint64_t)(*(int64_t *)(lVar13 + 0x1c8) - *(int64_t *)(lVar13 + 0x1c0) >> 3));
        }
      }
LAB_1801b3d20:
      iVar11 = iVar11 + 1;
      lVar12 = lVar12 + 8;
    } while ((uint64_t)(int64_t)iVar11 < uVar16);
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address