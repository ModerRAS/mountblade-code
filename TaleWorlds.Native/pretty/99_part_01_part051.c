/* 函数别名定义: RenderingEngineCore */
#define RenderingEngineCore RenderingEngineCore
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_01_part051.c - 12 个函数
// 函数: void GenericFunction_1800d7470(uint64_t param_1,int64_t param_2)
void GenericFunction_1800d7470(uint64_t param_1,int64_t param_2)
{
  int iVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  uint64_t stack_special_x_8;
  uint64_t stack_special_x_10;
  uint64_t stack_special_x_18;
  uint64_t stack_special_x_20;
  int8_t stack_array_88 [32];
  int32_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  uint64_t local_var_30;
  uint64_t local_var_28;
  plVar6 = (int64_t *)0x0;
  lVar4 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if (((*(int64_t *)(lVar4 + 0x84b8) != 0) || (*(int *)(lVar4 + 0x8878) != -1)) ||
     (lVar3 = system_message_buffer, stack_special_x_8 = param_1, *(int *)(lVar4 + 0x8a78) != 0x10)) {
    stack_special_x_8 = 0;
    local_var_60 = 0x1800d74cb;
    (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x40))
              (*(int64_t **)(lVar4 + 0x8400),0x10,1,&stack_special_x_8);
    lVar3 = system_message_buffer;
    *(uint64_t *)(lVar4 + 0x84b8) = 0;
    *(int32_t *)(lVar4 + 0x8878) = 0xffffffff;
    *(int32_t *)(lVar4 + 0x8a78) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  lVar4 = *(int64_t *)(lVar3 + 0x1cd8);
  if (((*(int64_t *)(lVar4 + 0x8540) != 0) || (*(int *)(lVar4 + 0x88bc) != -1)) ||
     (*(int *)(lVar4 + 0x8abc) != 0x10)) {
    stack_special_x_10 = 0;
    local_var_60 = 0x1800d7535;
    (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x40))
              (*(int64_t **)(lVar4 + 0x8400),0x21,1,&stack_special_x_10);
    lVar3 = system_message_buffer;
    *(uint64_t *)(lVar4 + 0x8540) = 0;
    *(int32_t *)(lVar4 + 0x88bc) = 0xffffffff;
    *(int32_t *)(lVar4 + 0x8abc) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  lVar4 = *(int64_t *)(lVar3 + 0x1cd8);
  if (((*(int64_t *)(lVar4 + 0x8590) != 0) || (*(int *)(lVar4 + 0x88e4) != -1)) ||
     (*(int *)(lVar4 + 0x8ae4) != 0x10)) {
    stack_special_x_18 = 0;
    local_var_60 = 0x1800d759f;
    (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x40))
              (*(int64_t **)(lVar4 + 0x8400),0x2b,1,&stack_special_x_18);
    lVar3 = system_message_buffer;
    *(uint64_t *)(lVar4 + 0x8590) = 0;
    *(int32_t *)(lVar4 + 0x88e4) = 0xffffffff;
    *(int32_t *)(lVar4 + 0x8ae4) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  lVar4 = *(int64_t *)(lVar3 + 0x1cd8);
  if (((*(int64_t *)(lVar4 + 0x8440) != 0) || (*(int *)(lVar4 + 0x883c) != -1)) ||
     (*(int *)(lVar4 + 0x8a3c) != 0x10)) {
    stack_special_x_20 = 0;
    local_var_60 = 0x1800d7608;
    (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x40))
              (*(int64_t **)(lVar4 + 0x8400),1,1,&stack_special_x_20);
    lVar3 = system_message_buffer;
    *(uint64_t *)(lVar4 + 0x8440) = 0;
    *(int32_t *)(lVar4 + 0x883c) = 0xffffffff;
    *(int32_t *)(lVar4 + 0x8a3c) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  lVar4 = *(int64_t *)(lVar3 + 0x1cd8);
  if (((*(int64_t *)(lVar4 + 0x8458) != 0) || (*(int *)(lVar4 + 0x8848) != -1)) ||
     (*(int *)(lVar4 + 0x8a48) != 0x10)) {
    local_var_38 = 0;
    local_var_60 = 0x1800d7672;
    (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x40))
              (*(int64_t **)(lVar4 + 0x8400),4,1,&local_var_38);
    lVar3 = system_message_buffer;
    *(uint64_t *)(lVar4 + 0x8458) = 0;
    *(int32_t *)(lVar4 + 0x8848) = 0xffffffff;
    *(int32_t *)(lVar4 + 0x8a48) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  lVar4 = *(int64_t *)(lVar3 + 0x1cd8);
  if (((*(int64_t *)(lVar4 + 0x8468) != 0) || (*(int *)(lVar4 + 0x8850) != -1)) ||
     (*(int *)(lVar4 + 0x8a50) != 0x10)) {
    local_var_30 = 0;
    local_var_60 = 0x1800d76dc;
    (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x40))
              (*(int64_t **)(lVar4 + 0x8400),6,1,&local_var_30);
    lVar3 = system_message_buffer;
    *(uint64_t *)(lVar4 + 0x8468) = 0;
    *(int32_t *)(lVar4 + 0x8850) = 0xffffffff;
    *(int32_t *)(lVar4 + 0x8a50) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  plVar2 = *(int64_t **)(lVar3 + 0x1cd8);
  local_var_60 = 0x1800d7713;
  lVar4 = SystemOptimizer(param_2);
  iVar1 = *(int *)(param_2 + 0x3578);
  plVar7 = plVar6;
  if (*(int64_t *)(lVar4 + 0x1d8) != 0) {
    if (system_main_module_state != 0) {
      *(int64_t *)(lVar4 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    }
    plVar7 = (int64_t *)
             ((int64_t)(int)((uint)*(byte *)(lVar4 + 0x335) * iVar1) * 0x10 +
             *(int64_t *)(lVar4 + 0x1d8));
    if ((plVar7 != (int64_t *)0x0) && (*plVar7 != 0)) {
      local_var_60 = 0x1800d776e;
      (**(code **)(*plVar2 + 0x70))(plVar2);
    }
  }
  lVar4 = system_message_buffer;
  plVar2[0x1077] = (int64_t)plVar7;
  plVar2 = *(int64_t **)(lVar4 + 0x1cd8);
  local_var_60 = 0x1800d7790;
  lVar4 = SystemLog_Manager(param_2);
  iVar1 = *(int *)(param_2 + 0x357c);
  if (*(int64_t *)(lVar4 + 0x1e0) != 0) {
    if (system_main_module_state != 0) {
      *(int64_t *)(lVar4 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    }
    plVar6 = (int64_t *)((int64_t)(iVar1 * 2 + 1) * 0x10 + *(int64_t *)(lVar4 + 0x1e0));
    if ((plVar6 != (int64_t *)0x0) && (*plVar6 != 0)) {
      local_var_60 = 0x1800d77e8;
      (**(code **)(*plVar2 + 0x70))(plVar2);
    }
  }
  lVar4 = system_message_buffer;
  plVar2[0x107e] = (int64_t)plVar6;
  lVar4 = *(int64_t *)(lVar4 + 0x1cd8);
  uVar5 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_88;
  lVar3 = *(int64_t *)(lVar4 + 0x83b8);
  bVar9 = lVar3 != *(int64_t *)(lVar4 + 0x8378);
  if (bVar9) {
    *(int64_t *)(lVar4 + 0x8378) = lVar3;
  }
  if (lVar3 == 0) {
    local_var_48 = 0;
  }
  else {
    local_var_48 = *(uint64_t *)(lVar3 + 8);
  }
  lVar3 = *(int64_t *)(lVar4 + 0x83c0);
  bVar10 = lVar3 != *(int64_t *)(lVar4 + 0x8380);
  if (bVar10) {
    *(int64_t *)(lVar4 + 0x8380) = lVar3;
  }
  if (lVar3 == 0) {
    local_var_40 = 0;
  }
  else {
    local_var_40 = *(uint64_t *)(lVar3 + 8);
  }
  lVar3 = *(int64_t *)(lVar4 + 0x83c8);
  bVar11 = lVar3 != *(int64_t *)(lVar4 + 0x8388);
  if (bVar11) {
    *(int64_t *)(lVar4 + 0x8388) = lVar3;
  }
  if (lVar3 == 0) {
    local_var_38 = 0;
  }
  else {
    local_var_38 = *(uint64_t *)(lVar3 + 8);
  }
  lVar3 = *(int64_t *)(lVar4 + 0x83d0);
  bVar12 = lVar3 != *(int64_t *)(lVar4 + 0x8390);
  if (bVar12) {
    *(int64_t *)(lVar4 + 0x8390) = lVar3;
  }
  if (lVar3 == 0) {
    local_var_30 = 0;
  }
  else {
    local_var_30 = *(uint64_t *)(lVar3 + 8);
  }
  lVar3 = *(int64_t *)(lVar4 + 0x83d8);
  bVar13 = lVar3 != *(int64_t *)(lVar4 + 0x8398);
  if (bVar13) {
    *(int64_t *)(lVar4 + 0x8398) = lVar3;
  }
  if (lVar3 == 0) {
    local_var_28 = 0;
  }
  else {
    local_var_28 = *(uint64_t *)(lVar3 + 8);
  }
  lVar3 = *(int64_t *)(lVar4 + 0x83e0);
  bVar14 = lVar3 != *(int64_t *)(lVar4 + 0x83a0);
  if (bVar14) {
    *(int64_t *)(lVar4 + 0x83a0) = lVar3;
  }
  lVar3 = *(int64_t *)(lVar4 + 0x83e8);
  bVar15 = lVar3 != *(int64_t *)(lVar4 + 0x83a8);
  if (bVar15) {
    *(int64_t *)(lVar4 + 0x83a8) = lVar3;
  }
  lVar3 = *(int64_t *)(lVar4 + 0x83f0);
  bVar16 = *(int64_t *)(lVar4 + 0x83b0) != lVar3;
  if (bVar16) {
    *(int64_t *)(lVar4 + 0x83b0) = lVar3;
  }
  if (lVar3 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint64_t *)(lVar3 + 8);
  }
  if ((bVar15 || (bVar14 || (bVar13 || (bVar12 || (bVar11 || (bVar10 || bVar9)))))) || (bVar16)) {
    local_var_50 = 0xffffffffffffffff;
    local_var_58 = 0;
    local_var_60 = CONCAT44(local_var_60._4_4_,0xffffffff);
    local_var_68 = 1;
    (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x110))
              (*(int64_t **)(lVar4 + 0x8400),1,&local_var_48,uVar8);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(uVar5 ^ (uint64_t)stack_array_88);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1800d7810(void)
void GenericFunction_1800d7810(void)
{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int32_t *puVar5;
  int32_t uVar6;
  int8_t stack_array_288 [32];
  int32_t local_var_268;
  int32_t local_var_260;
  int32_t local_var_258;
  int32_t local_var_250;
  int32_t local_var_248;
  uint64_t local_var_240;
  int8_t local_var_238;
  int32_t local_var_230;
  void *plocal_var_228;
  int32_t *plocal_var_220;
  int32_t local_var_218;
  uint64_t local_var_210;
  int64_t *plStack_208;
  int64_t *aplStack_200 [2];
  uint64_t local_var_1f0;
  void *plocal_var_1e8;
  int8_t *plocal_var_1e0;
  int32_t local_var_1d8;
  int8_t stack_array_1d0 [32];
  void *plocal_var_1b0;
  int8_t *plocal_var_1a8;
  int32_t local_var_1a0;
  int8_t stack_array_198 [32];
  void *plocal_var_178;
  int8_t *plocal_var_170;
  int32_t local_var_168;
  int8_t stack_array_160 [32];
  void *plocal_var_140;
  int8_t *plocal_var_138;
  int32_t local_var_130;
  int8_t stack_array_128 [32];
  void *plocal_var_108;
  int8_t *plocal_var_100;
  int32_t local_var_f8;
  int8_t stack_array_f0 [32];
  void *plocal_var_d0;
  int8_t *plocal_var_c8;
  int32_t local_var_c0;
  int8_t stack_array_b8 [32];
  void *plocal_var_98;
  int8_t *plocal_var_90;
  int32_t local_var_88;
  int8_t stack_array_80 [32];
  void *plocal_var_60;
  int8_t *plocal_var_58;
  int32_t local_var_50;
  int8_t stack_array_48 [32];
  uint64_t local_var_28;
  lVar1 = system_parameter_buffer;
  local_var_1f0 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_288;
  *(int *)(system_parameter_buffer + 0x1500) = *(int *)(system_parameter_buffer + 0x1500) + 1;
  plocal_var_1e8 = &processed_var_672_ptr;
  plocal_var_1e0 = stack_array_1d0;
  stack_array_1d0[0] = 0;
  local_var_1d8 = 0xf;
  uVar6 = strcpy_s(stack_array_1d0,0x20,&memory_allocator_3080_ptr);
  local_var_230 = 1;
  local_var_238 = 0;
  local_var_240 = 0;
  local_var_248 = 0x200;
  local_var_250 = 0x50;
  local_var_258 = 0;
  local_var_260 = 3;
  local_var_268 = 0x220;
  puVar2 = (uint64_t *)SystemCore_ConfigManager(uVar6,aplStack_200,0xffffffff,&plocal_var_1e8);
  uVar3 = *puVar2;
  *puVar2 = 0;
  plStack_208 = *(int64_t **)(lVar1 + 0x1588);
  *(uint64_t *)(lVar1 + 0x1588) = uVar3;
  if (plStack_208 != (int64_t *)0x0) {
    (**(code **)(*plStack_208 + 0x38))();
  }
  if (aplStack_200[0] != (int64_t *)0x0) {
    (**(code **)(*aplStack_200[0] + 0x38))();
  }
  plocal_var_1e8 = &system_state_ptr;
  uVar3 = GenericFunction_1800bffe0();
  plocal_var_1b0 = &processed_var_672_ptr;
  plocal_var_1a8 = stack_array_198;
  stack_array_198[0] = 0;
  local_var_1a0 = 0x11;
  strcpy_s(stack_array_198,0x20,&memory_allocator_3056_ptr);
  uVar4 = SystemCore_LoggingSystem0(uVar3,&plocal_var_1b0,1);
  *(uint64_t *)(lVar1 + 0x2340) = uVar4;
  plocal_var_1b0 = &system_state_ptr;
  plocal_var_178 = &processed_var_672_ptr;
  plocal_var_170 = stack_array_160;
  stack_array_160[0] = 0;
  local_var_168 = 0x10;
  strcpy_s(stack_array_160,0x20,&memory_allocator_3120_ptr);
  uVar4 = SystemCore_LoggingSystem0(uVar3,&plocal_var_178,1);
  *(uint64_t *)(lVar1 + 0x2348) = uVar4;
  plocal_var_178 = &system_state_ptr;
  plocal_var_140 = &processed_var_672_ptr;
  plocal_var_138 = stack_array_128;
  stack_array_128[0] = 0;
  local_var_130 = 0x11;
  strcpy_s(stack_array_128,0x20,&memory_allocator_3096_ptr);
  uVar4 = SystemCore_LoggingSystem0(uVar3,&plocal_var_140,1);
  *(uint64_t *)(lVar1 + 0x2350) = uVar4;
  plocal_var_140 = &system_state_ptr;
  plocal_var_108 = &processed_var_672_ptr;
  plocal_var_100 = stack_array_f0;
  stack_array_f0[0] = 0;
  local_var_f8 = 0x10;
  strcpy_s(stack_array_f0,0x20,&memory_allocator_3176_ptr);
  uVar4 = SystemCore_LoggingSystem0(uVar3,&plocal_var_108,1);
  *(uint64_t *)(lVar1 + 0x2358) = uVar4;
  plocal_var_108 = &system_state_ptr;
  plocal_var_d0 = &processed_var_672_ptr;
  plocal_var_c8 = stack_array_b8;
  stack_array_b8[0] = 0;
  local_var_c0 = 0x19;
  strcpy_s(stack_array_b8,0x20,&memory_allocator_3144_ptr);
  uVar4 = SystemCore_LoggingSystem0(uVar3,&plocal_var_d0,1);
  *(uint64_t *)(lVar1 + 0x2360) = uVar4;
  plocal_var_d0 = &system_state_ptr;
  plocal_var_98 = &processed_var_672_ptr;
  plocal_var_90 = stack_array_80;
  stack_array_80[0] = 0;
  local_var_88 = 0xf;
  strcpy_s(stack_array_80,0x20,&memory_allocator_3224_ptr);
  uVar4 = SystemCore_LoggingSystem0(uVar3,&plocal_var_98,1);
  *(uint64_t *)(lVar1 + 0x2368) = uVar4;
  plocal_var_98 = &system_state_ptr;
  plocal_var_60 = &processed_var_672_ptr;
  plocal_var_58 = stack_array_48;
  stack_array_48[0] = 0;
  local_var_50 = 0x10;
  strcpy_s(stack_array_48,0x20,&memory_allocator_3200_ptr);
  uVar3 = SystemCore_LoggingSystem0(uVar3,&plocal_var_60,1);
  *(uint64_t *)(lVar1 + 0x2370) = uVar3;
  plocal_var_60 = &system_state_ptr;
  plocal_var_228 = &system_data_buffer_ptr;
  local_var_210 = 0;
  plocal_var_220 = (int32_t *)0x0;
  local_var_218 = 0;
  puVar5 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x16,0x13);
  *(int8_t *)puVar5 = 0;
  plocal_var_220 = puVar5;
  uVar6 = CoreMemoryPoolCleaner(puVar5);
  local_var_210 = CONCAT44(local_var_210._4_4_,uVar6);
  *puVar5 = 0x5f726270;
  puVar5[1] = 0x64616873;
  puVar5[2] = 0x5f676e69;
  puVar5[3] = 0x64616873;
  puVar5[4] = 0x616d776f;
  *(int16_t *)(puVar5 + 5) = 0x70;
  local_var_218 = 0x15;
  *(int32_t *)(lVar1 + 0x13b0) = 1;
  *(int32_t *)(lVar1 + 0x13c0) = 1;
  puVar2 = (uint64_t *)GenericFunction_1800b4910(system_resource_state,aplStack_200,&plocal_var_228);
  uVar3 = *puVar2;
  *puVar2 = 0;
  plStack_208 = *(int64_t **)(lVar1 + 0x13b8);
  *(uint64_t *)(lVar1 + 0x13b8) = uVar3;
  if (plStack_208 != (int64_t *)0x0) {
    (**(code **)(*plStack_208 + 0x38))();
  }
  if (aplStack_200[0] != (int64_t *)0x0) {
    (**(code **)(*aplStack_200[0] + 0x38))();
  }
  plocal_var_228 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager(puVar5);
}
// WARNING: Removing unreachable block (ram,0x0001800d8456)
// WARNING: Removing unreachable block (ram,0x0001800d8519)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1800d82a0(uint64_t param_1,uint64_t param_2,int64_t param_3)
void GenericFunction_1800d82a0(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  int64_t lVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t stack_special_x_8;
  uint64_t stack_special_x_10;
  stack_special_x_8 = param_1;
  stack_special_x_10 = param_2;
  RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),0x5e,*(uint64_t *)(param_3 + 0x68),1,
                0xffffffff);
  if (*(int64_t *)(param_3 + 0x90) == 0) {
    RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),0x5d,*(uint64_t *)(param_3 + 0x60),0x12
                  ,0xffffffff);
    RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),0x5f,*(uint64_t *)(param_3 + 0xa0),0x10
                  ,0xffffffff);
  }
  if (*(int64_t *)(param_3 + 0x88) != 0) {
    RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),0x11,*(int64_t *)(param_3 + 0x88),0x10,
                  0xffffffff);
    RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),0x12,*(uint64_t *)(param_3 + 0x80),0x10
                  ,0xffffffff);
  }
  uVar5 = 0;
  uVar4 = uVar5;
  uVar2 = uVar5;
  if (*(int64_t *)(param_3 + 0x2d8) - *(int64_t *)(param_3 + 0x2d0) >> 3 != 0) {
    do {
      RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),(int)uVar4 + 0x60,
                    *(uint64_t *)(*(int64_t *)(param_3 + 0x2d0) + uVar2),0x10,0xffffffff);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar3;
      uVar2 = uVar2 + 8;
    } while ((uint64_t)(int64_t)(int)uVar3 <
             (uint64_t)(*(int64_t *)(param_3 + 0x2d8) - *(int64_t *)(param_3 + 0x2d0) >> 3));
  }
  if (*(char *)(param_3 + 0xc0) != '\0') {
    lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
    uVar4 = uVar5;
    if ((((*(int64_t *)(param_3 + 0x78) != 0) && (uVar2 = SystemCore_Scheduler(), uVar2 != 0)) &&
        (uVar4 = uVar2, *(int64_t *)(uVar2 + 8) == 0)) && (*(int64_t *)(uVar2 + 0x10) == 0)) {
      uVar4 = 0;
    }
    if ((((*(uint64_t *)(lVar1 + 0x84a8) != uVar4) || (*(int *)(lVar1 + 0x8870) != -1)) ||
        (*(int *)(lVar1 + 0x8a70) != 0x10)) &&
       (((uVar4 == 0 || (*(int64_t *)(uVar4 + 8) != 0)) || (*(int64_t *)(uVar4 + 0x10) != 0)))) {
      stack_special_x_10 = uVar5;
      if (uVar4 != 0) {
        stack_special_x_10 = *(uint64_t *)(uVar4 + 0x10);
      }
      (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
                (*(int64_t **)(lVar1 + 0x8400),0xe,1,&stack_special_x_10);
      *(uint64_t *)(lVar1 + 0x84a8) = uVar4;
      *(int32_t *)(lVar1 + 0x8870) = 0xffffffff;
      *(int32_t *)(lVar1 + 0x8a70) = 0x10;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
    lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
    uVar4 = uVar5;
    if ((((*(int64_t *)(param_3 + 0x70) != 0) && (uVar2 = SystemCore_Scheduler(), uVar2 != 0)) &&
        (uVar4 = uVar2, *(int64_t *)(uVar2 + 8) == 0)) && (*(int64_t *)(uVar2 + 0x10) == 0)) {
      uVar4 = 0;
    }
    if (((*(uint64_t *)(lVar1 + 0x84b0) != uVar4) || (*(int *)(lVar1 + 0x8874) != -1)) ||
       (*(int *)(lVar1 + 0x8a74) != 0x10)) {
      if (uVar4 != 0) {
        if ((*(int64_t *)(uVar4 + 8) == 0) && (*(int64_t *)(uVar4 + 0x10) == 0))
        goto LAB_1800d85a5;
        if (uVar4 != 0) {
          uVar5 = *(uint64_t *)(uVar4 + 0x10);
        }
      }
      stack_special_x_8 = uVar5;
      (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
                (*(int64_t **)(lVar1 + 0x8400),0xf,1,&stack_special_x_8);
      *(uint64_t *)(lVar1 + 0x84b0) = uVar4;
      *(int32_t *)(lVar1 + 0x8874) = 0xffffffff;
      *(int32_t *)(lVar1 + 0x8a74) = 0x10;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
  }
LAB_1800d85a5:
  if (*(int64_t *)(param_3 + 0x90) != 0) {
    GenericFunction_180178650();
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x0001800d8456)
// WARNING: Removing unreachable block (ram,0x0001800d8519)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1800d82bb(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4)
void GenericFunction_1800d82bb(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t local_buffer_50;
  uint64_t local_var_58;
  RenderingEngineCore0(*(uint64_t *)(param_1 + 0x1cd8),(int)param_4 + 0x5d,
                *(uint64_t *)(param_3 + 0x68),param_4,0xffffffff);
  if (*(int64_t *)(param_3 + 0x90) == 0) {
    RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),0x5d,*(uint64_t *)(param_3 + 0x60),0x12
                  ,0xffffffff);
    RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),0x5f,*(uint64_t *)(param_3 + 0xa0),0x10
                  ,0xffffffff);
  }
  if (*(int64_t *)(param_3 + 0x88) != 0) {
    RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),0x11,*(int64_t *)(param_3 + 0x88),0x10,
                  0xffffffff);
    RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),0x12,*(uint64_t *)(param_3 + 0x80),0x10
                  ,0xffffffff);
  }
  uVar5 = 0;
  uVar4 = uVar5;
  uVar2 = uVar5;
  if (*(int64_t *)(param_3 + 0x2d8) - *(int64_t *)(param_3 + 0x2d0) >> 3 != 0) {
    do {
      RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),(int)uVar4 + 0x60,
                    *(uint64_t *)(*(int64_t *)(param_3 + 0x2d0) + uVar2),0x10,0xffffffff);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar3;
      uVar2 = uVar2 + 8;
    } while ((uint64_t)(int64_t)(int)uVar3 <
             (uint64_t)(*(int64_t *)(param_3 + 0x2d8) - *(int64_t *)(param_3 + 0x2d0) >> 3));
  }
  if (*(char *)(param_3 + 0xc0) != '\0') {
    lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
    uVar4 = uVar5;
    if ((((*(int64_t *)(param_3 + 0x78) != 0) && (uVar2 = SystemCore_Scheduler(), uVar2 != 0)) &&
        (uVar4 = uVar2, *(int64_t *)(uVar2 + 8) == 0)) && (*(int64_t *)(uVar2 + 0x10) == 0)) {
      uVar4 = 0;
    }
    if ((((*(uint64_t *)(lVar1 + 0x84a8) != uVar4) || (*(int *)(lVar1 + 0x8870) != -1)) ||
        (*(int *)(lVar1 + 0x8a70) != 0x10)) &&
       (((uVar4 == 0 || (*(int64_t *)(uVar4 + 8) != 0)) || (*(int64_t *)(uVar4 + 0x10) != 0)))) {
      local_var_58 = uVar5;
      if (uVar4 != 0) {
        local_var_58 = *(uint64_t *)(uVar4 + 0x10);
      }
      (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
                (*(int64_t **)(lVar1 + 0x8400),0xe,1,&local_buffer_00000058);
      *(uint64_t *)(lVar1 + 0x84a8) = uVar4;
      *(int32_t *)(lVar1 + 0x8870) = 0xffffffff;
      *(int32_t *)(lVar1 + 0x8a70) = 0x10;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
    lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
    uVar4 = uVar5;
    if ((((*(int64_t *)(param_3 + 0x70) != 0) && (uVar2 = SystemCore_Scheduler(), uVar2 != 0)) &&
        (uVar4 = uVar2, *(int64_t *)(uVar2 + 8) == 0)) && (*(int64_t *)(uVar2 + 0x10) == 0)) {
      uVar4 = 0;
    }
    if (((*(uint64_t *)(lVar1 + 0x84b0) != uVar4) || (*(int *)(lVar1 + 0x8874) != -1)) ||
       (*(int *)(lVar1 + 0x8a74) != 0x10)) {
      if (uVar4 != 0) {
        if ((*(int64_t *)(uVar4 + 8) == 0) && (*(int64_t *)(uVar4 + 0x10) == 0))
        goto LAB_1800d85a5;
        if (uVar4 != 0) {
          uVar5 = *(uint64_t *)(uVar4 + 0x10);
        }
      }
      local_buffer_50 = uVar5;
      (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
                (*(int64_t **)(lVar1 + 0x8400),0xf,1,&local_buffer_00000050);
      *(uint64_t *)(lVar1 + 0x84b0) = uVar4;
      *(int32_t *)(lVar1 + 0x8874) = 0xffffffff;
      *(int32_t *)(lVar1 + 0x8a74) = 0x10;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
  }
LAB_1800d85a5:
  if (*(int64_t *)(param_3 + 0x90) != 0) {
    GenericFunction_180178650();
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x0001800d8456)
// WARNING: Removing unreachable block (ram,0x0001800d8519)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1800d83ba(void)
void GenericFunction_1800d83ba(void)
{
  int64_t lVar1;
  int64_t in_RAX;
  uint64_t uVar2;
  int unaff_EBX;
  uint64_t uVar3;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  uint64_t local_buffer_50;
  uint64_t local_var_58;
  if (in_RAX != 0) {
    uVar3 = unaff_RSI & 0xffffffff;
    do {
      RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),unaff_EBX + 0x60,
                    *(uint64_t *)(*(int64_t *)(unaff_RDI + 0x2d0) + uVar3),0x10,0xffffffff);
      uVar3 = uVar3 + 8;
      unaff_EBX = unaff_EBX + 1;
    } while ((uint64_t)(int64_t)unaff_EBX <
             (uint64_t)(*(int64_t *)(unaff_RDI + 0x2d8) - *(int64_t *)(unaff_RDI + 0x2d0) >> 3));
  }
  if (*(char *)(unaff_RDI + 0xc0) != (char)unaff_RSI) {
    lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
    uVar3 = unaff_RSI;
    if ((((*(int64_t *)(unaff_RDI + 0x78) != 0) && (uVar2 = SystemCore_Scheduler(), uVar2 != 0)) &&
        (uVar3 = uVar2, *(uint64_t *)(uVar2 + 8) == unaff_RSI)) &&
       (*(uint64_t *)(uVar2 + 0x10) == unaff_RSI)) {
      uVar3 = unaff_RSI;
    }
    if ((((*(uint64_t *)(lVar1 + 0x84a8) != uVar3) || (*(int *)(lVar1 + 0x8870) != -1)) ||
        (*(int *)(lVar1 + 0x8a70) != 0x10)) &&
       (((uVar3 == 0 || (*(uint64_t *)(uVar3 + 8) != unaff_RSI)) ||
        (*(uint64_t *)(uVar3 + 0x10) != unaff_RSI)))) {
      local_var_58 = unaff_RSI;
      if (uVar3 != 0) {
        local_var_58 = *(uint64_t *)(uVar3 + 0x10);
      }
      (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
                (*(int64_t **)(lVar1 + 0x8400),0xe,1,&local_buffer_00000058);
      *(uint64_t *)(lVar1 + 0x84a8) = uVar3;
      *(int32_t *)(lVar1 + 0x8870) = 0xffffffff;
      *(int32_t *)(lVar1 + 0x8a70) = 0x10;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
    lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
    uVar3 = unaff_RSI;
    if ((((*(int64_t *)(unaff_RDI + 0x70) != 0) && (uVar2 = SystemCore_Scheduler(), uVar2 != 0)) &&
        (uVar3 = uVar2, *(uint64_t *)(uVar2 + 8) == unaff_RSI)) &&
       (*(uint64_t *)(uVar2 + 0x10) == unaff_RSI)) {
      uVar3 = unaff_RSI;
    }
    if (((*(uint64_t *)(lVar1 + 0x84b0) != uVar3) || (*(int *)(lVar1 + 0x8874) != -1)) ||
       (*(int *)(lVar1 + 0x8a74) != 0x10)) {
      if (uVar3 != 0) {
        if ((*(uint64_t *)(uVar3 + 8) == unaff_RSI) && (*(uint64_t *)(uVar3 + 0x10) == unaff_RSI))
        goto LAB_1800d85a5;
        if (uVar3 != 0) {
          unaff_RSI = *(uint64_t *)(uVar3 + 0x10);
        }
      }
      local_buffer_50 = unaff_RSI;
      (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
                (*(int64_t **)(lVar1 + 0x8400),0xf,1,&local_buffer_00000050);
      *(uint64_t *)(lVar1 + 0x84b0) = uVar3;
      *(int32_t *)(lVar1 + 0x8874) = 0xffffffff;
      *(int32_t *)(lVar1 + 0x8a74) = 0x10;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
  }
LAB_1800d85a5:
  if (*(int64_t *)(unaff_RDI + 0x90) != 0) {
    GenericFunction_180178650();
  }
  return;
}
// 函数: void GenericFunction_1800d85c5(void)
void GenericFunction_1800d85c5(void)
{
  GenericFunction_180178650();
  return;
}
// 函数: void GenericFunction_1800d8a40(int64_t param_1)
void GenericFunction_1800d8a40(int64_t param_1)
{
  SystemDataValidator(param_1 + 8,0x18,2,GenericFunction_1800e7f20,0xfffffffffffffffe);
  return;
}
// 函数: void GenericFunction_1800d8a80(int64_t param_1)
void GenericFunction_1800d8a80(int64_t param_1)
{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  if (*(int64_t **)(param_1 + 0x78) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x78) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x70) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x70) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x68) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x68) + 0x38))();
  }
  GenericFunction_180080df0();
  if (*(int64_t *)(param_1 + 0x28) != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  puVar2 = *(uint64_t **)(param_1 + 8);
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
  uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(uint64_t *)(lVar3 + 0x20);
      *(uint64_t **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        SystemCore_DebugHandler();
        return;
      }
    }
    else {
      Function_2152bae1(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}
// 函数: void GenericFunction_1800d8b10(uint64_t param_1)
void GenericFunction_1800d8b10(uint64_t param_1)
{
  SystemDataValidator(param_1,0x488,2,GenericFunction_1800e7ca0,0xfffffffffffffffe);
  return;
}
// 函数: void GenericFunction_1800d8b40(uint64_t param_1)
void GenericFunction_1800d8b40(uint64_t param_1)
{
  SystemDataValidator(param_1,0x248,2,GenericFunction_1800e7b80,0xfffffffffffffffe);
  return;
}
// 函数: void GenericFunction_1800d8b70(uint64_t param_1)
void GenericFunction_1800d8b70(uint64_t param_1)
{
  SystemDataValidator(param_1,0x908,2,GenericFunction_1800e7d00,0xfffffffffffffffe);
  return;
}
// 函数: void GenericFunction_1800d8ba0(uint64_t param_1)
void GenericFunction_1800d8ba0(uint64_t param_1)
{
  SystemDataValidator(param_1,0x50,2,GenericFunction_1800e7c40,0xfffffffffffffffe);
  return;
}