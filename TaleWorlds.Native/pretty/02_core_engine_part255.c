#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part255.c - 2 个函数
// 函数: void function_21fbb0(int64_t param_1)
void function_21fbb0(int64_t param_1)
{
  uint64_t uVar1;
  uint64_t *puVar2;
  int8_t stack_array_168 [32];
  int32_t local_var_148;
  int32_t local_var_140;
  int32_t local_var_138;
  int32_t local_var_130;
  int32_t local_var_128;
  uint64_t local_var_120;
  int8_t local_var_118;
  int32_t local_var_110;
  int64_t *plStack_108;
  int64_t *plStack_100;
  int64_t *plStack_f8;
  uint64_t local_var_f0;
  void *plocal_var_e8;
  int8_t *plocal_var_e0;
  int32_t local_var_d8;
  int8_t stack_array_d0 [72];
  void *plocal_var_88;
  int8_t *plocal_var_80;
  int32_t local_var_78;
  int8_t stack_array_70 [72];
  uint64_t local_var_28;
  local_var_f0 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  plocal_var_e8 = &memory_allocator_3480_ptr;
  plocal_var_e0 = stack_array_d0;
  stack_array_d0[0] = 0;
  local_var_d8 = 9;
  strcpy_s(stack_array_d0,0x40,&processed_var_4328_ptr);
  local_var_110 = 1;
  local_var_118 = 0;
  local_var_120 = 0;
  local_var_128 = 1;
  local_var_130 = 0x6d0;
  local_var_138 = 0;
  local_var_140 = 3;
  local_var_148 = 0x220;
  puVar2 = (uint64_t *)SystemCore_ConfigManager();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_100 = *(int64_t **)(param_1 + 0x1c70);
  *(uint64_t *)(param_1 + 0x1c70) = uVar1;
  if (plStack_100 != (int64_t *)0x0) {
    (**(code **)(*plStack_100 + 0x38))();
  }
  if (plStack_f8 != (int64_t *)0x0) {
    (**(code **)(*plStack_f8 + 0x38))();
  }
  plocal_var_e8 = &system_state_ptr;
  plocal_var_88 = &memory_allocator_3480_ptr;
  plocal_var_80 = stack_array_70;
  stack_array_70[0] = 0;
  local_var_78 = 0xd;
  strcpy_s(stack_array_70,0x40,&processed_var_4400_ptr);
  local_var_110 = 1;
  local_var_118 = 0;
  local_var_120 = 0;
  local_var_128 = 1;
  local_var_130 = 0x210;
  local_var_138 = 0;
  local_var_140 = 3;
  local_var_148 = 0x220;
  puVar2 = (uint64_t *)SystemCore_ConfigManager();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_100 = *(int64_t **)(param_1 + 0x1cb8);
  *(uint64_t *)(param_1 + 0x1cb8) = uVar1;
  if (plStack_100 != (int64_t *)0x0) {
    (**(code **)(*plStack_100 + 0x38))();
  }
  if (plStack_108 != (int64_t *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  plocal_var_88 = &system_state_ptr;
  plocal_var_e8 = &memory_allocator_3480_ptr;
  plocal_var_e0 = stack_array_d0;
  stack_array_d0[0] = 0;
  local_var_d8 = 0x14;
  strcpy_s(stack_array_d0,0x40,&processed_var_4416_ptr);
  local_var_110 = 1;
  local_var_118 = 0;
  local_var_120 = 0;
  local_var_128 = 1;
  local_var_130 = 0x1000;
  local_var_138 = 0;
  local_var_140 = 3;
  local_var_148 = 0x220;
  puVar2 = (uint64_t *)SystemCore_ConfigManager();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_f8 = *(int64_t **)(param_1 + 0x1c78);
  *(uint64_t *)(param_1 + 0x1c78) = uVar1;
  if (plStack_f8 != (int64_t *)0x0) {
    (**(code **)(*plStack_f8 + 0x38))();
  }
  if (plStack_100 != (int64_t *)0x0) {
    (**(code **)(*plStack_100 + 0x38))();
  }
  plocal_var_e8 = &system_state_ptr;
  plocal_var_88 = &memory_allocator_3480_ptr;
  plocal_var_80 = stack_array_70;
  stack_array_70[0] = 0;
  local_var_78 = 0x1c;
  strcpy_s(stack_array_70,0x40,&processed_var_4344_ptr);
  local_var_110 = 1;
  local_var_118 = 0;
  local_var_120 = 0;
  local_var_128 = 1;
  local_var_130 = 0x140;
  local_var_138 = 0;
  local_var_140 = 3;
  local_var_148 = 0x220;
  puVar2 = (uint64_t *)SystemCore_ConfigManager();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_108 = *(int64_t **)(param_1 + 0x1cb0);
  *(uint64_t *)(param_1 + 0x1cb0) = uVar1;
  if (plStack_108 != (int64_t *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  if (plStack_f8 != (int64_t *)0x0) {
    (**(code **)(*plStack_f8 + 0x38))();
  }
  plocal_var_88 = &system_state_ptr;
  plocal_var_e8 = &memory_allocator_3480_ptr;
  plocal_var_e0 = stack_array_d0;
  stack_array_d0[0] = 0;
  local_var_d8 = 0x10;
  strcpy_s(stack_array_d0,0x40,&processed_var_4376_ptr);
  local_var_110 = 1;
  local_var_118 = 0;
  local_var_120 = 0;
  local_var_128 = 1;
  local_var_130 = 0x200;
  local_var_138 = 0;
  local_var_140 = 3;
  local_var_148 = 0x220;
  puVar2 = (uint64_t *)SystemCore_ConfigManager();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_108 = *(int64_t **)(param_1 + 0x1c80);
  *(uint64_t *)(param_1 + 0x1c80) = uVar1;
  if (plStack_108 != (int64_t *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  if (plStack_100 != (int64_t *)0x0) {
    (**(code **)(*plStack_100 + 0x38))();
  }
  plocal_var_e8 = &system_state_ptr;
  plocal_var_88 = &memory_allocator_3480_ptr;
  plocal_var_80 = stack_array_70;
  stack_array_70[0] = 0;
  local_var_78 = 10;
  strcpy_s(stack_array_70,0x40,&processed_var_4472_ptr);
  local_var_110 = 1;
  local_var_118 = 0;
  local_var_120 = 0;
  local_var_128 = 1;
  local_var_130 = 0x230;
  local_var_138 = 0;
  local_var_140 = 3;
  local_var_148 = 0x220;
  puVar2 = (uint64_t *)SystemCore_ConfigManager();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_108 = *(int64_t **)(param_1 + 0x1c88);
  *(uint64_t *)(param_1 + 0x1c88) = uVar1;
  if (plStack_108 != (int64_t *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  if (plStack_f8 != (int64_t *)0x0) {
    (**(code **)(*plStack_f8 + 0x38))();
  }
  plocal_var_88 = &system_state_ptr;
  plocal_var_e8 = &memory_allocator_3480_ptr;
  plocal_var_e0 = stack_array_d0;
  stack_array_d0[0] = 0;
  local_var_d8 = 0xf;
  strcpy_s(stack_array_d0,0x40,&processed_var_4488_ptr);
  local_var_110 = 1;
  local_var_118 = 0;
  local_var_120 = 0;
  local_var_128 = 1;
  local_var_130 = 0x8000;
  local_var_138 = 0;
  local_var_140 = 3;
  local_var_148 = 0x220;
  puVar2 = (uint64_t *)SystemCore_ConfigManager();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_108 = *(int64_t **)(param_1 + 0x1c90);
  *(uint64_t *)(param_1 + 0x1c90) = uVar1;
  if (plStack_108 != (int64_t *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  if (plStack_100 != (int64_t *)0x0) {
    (**(code **)(*plStack_100 + 0x38))();
  }
  plocal_var_e8 = &system_state_ptr;
  plocal_var_88 = &memory_allocator_3480_ptr;
  plocal_var_80 = stack_array_70;
  stack_array_70[0] = 0;
  local_var_78 = 0xb;
  strcpy_s(stack_array_70,0x40,&processed_var_4440_ptr);
  local_var_110 = 1;
  local_var_118 = 0;
  local_var_120 = 0;
  local_var_128 = 1;
  local_var_130 = 0x70;
  local_var_138 = 0;
  local_var_140 = 3;
  local_var_148 = 0x220;
  puVar2 = (uint64_t *)SystemCore_ConfigManager();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_108 = *(int64_t **)(param_1 + 0x1ca0);
  *(uint64_t *)(param_1 + 0x1ca0) = uVar1;
  if (plStack_108 != (int64_t *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  if (plStack_f8 != (int64_t *)0x0) {
    (**(code **)(*plStack_f8 + 0x38))();
  }
  plocal_var_88 = &system_state_ptr;
  plocal_var_e8 = &memory_allocator_3480_ptr;
  plocal_var_e0 = stack_array_d0;
  stack_array_d0[0] = 0;
  local_var_d8 = 0xe;
  strcpy_s(stack_array_d0,0x40,&processed_var_4456_ptr);
  local_var_110 = 1;
  local_var_118 = 0;
  local_var_120 = 0;
  local_var_128 = 1;
  local_var_130 = 0x6000;
  local_var_138 = 0;
  local_var_140 = 3;
  local_var_148 = 0x220;
  puVar2 = (uint64_t *)SystemCore_ConfigManager();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_108 = *(int64_t **)(param_1 + 0x1c98);
  *(uint64_t *)(param_1 + 0x1c98) = uVar1;
  if (plStack_108 != (int64_t *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  if (plStack_100 != (int64_t *)0x0) {
    (**(code **)(*plStack_100 + 0x38))();
  }
  plocal_var_e8 = &system_state_ptr;
  plocal_var_88 = &memory_allocator_3480_ptr;
  plocal_var_80 = stack_array_70;
  stack_array_70[0] = 0;
  local_var_78 = 9;
  strcpy_s(stack_array_70,0x40,&processed_var_4560_ptr);
  local_var_110 = 1;
  local_var_118 = 0;
  local_var_120 = 0;
  local_var_128 = 1;
  local_var_130 = 0x80;
  local_var_138 = 0;
  local_var_140 = 3;
  local_var_148 = 0x220;
  puVar2 = (uint64_t *)SystemCore_ConfigManager();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_108 = *(int64_t **)(param_1 + 0x1ca8);
  *(uint64_t *)(param_1 + 0x1ca8) = uVar1;
  if (plStack_108 != (int64_t *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  if (plStack_f8 != (int64_t *)0x0) {
    (**(code **)(*plStack_f8 + 0x38))();
  }
  plocal_var_88 = &system_state_ptr;
  plocal_var_e8 = &memory_allocator_3480_ptr;
  plocal_var_e0 = stack_array_d0;
  stack_array_d0[0] = 0;
  local_var_d8 = 0x16;
  strcpy_s(stack_array_d0,0x40,&processed_var_4576_ptr);
  local_var_110 = 1;
  local_var_118 = 0;
  local_var_120 = 0;
  local_var_128 = 1;
  local_var_130 = 0x30;
  local_var_138 = 0;
  local_var_140 = 3;
  local_var_148 = 0x220;
  puVar2 = (uint64_t *)SystemCore_ConfigManager();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_108 = *(int64_t **)(param_1 + 0x1cc8);
  *(uint64_t *)(param_1 + 0x1cc8) = uVar1;
  if (plStack_108 != (int64_t *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  if (plStack_100 != (int64_t *)0x0) {
    (**(code **)(*plStack_100 + 0x38))();
  }
  plocal_var_e8 = &system_state_ptr;
  plocal_var_88 = &memory_allocator_3480_ptr;
  plocal_var_80 = stack_array_70;
  stack_array_70[0] = 0;
  local_var_78 = 0x14;
  strcpy_s(stack_array_70,0x40,&processed_var_4504_ptr);
  local_var_110 = 1;
  local_var_118 = 0;
  local_var_120 = 0;
  local_var_128 = 1;
  local_var_130 = 0xe0;
  local_var_138 = 0;
  local_var_140 = 3;
  local_var_148 = 0x220;
  puVar2 = (uint64_t *)SystemCore_ConfigManager();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_108 = *(int64_t **)(param_1 + 0x1cc0);
  *(uint64_t *)(param_1 + 0x1cc0) = uVar1;
  if (plStack_108 != (int64_t *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  if (plStack_f8 != (int64_t *)0x0) {
    (**(code **)(*plStack_f8 + 0x38))();
  }
  plocal_var_88 = &system_state_ptr;
  plocal_var_e8 = &memory_allocator_3480_ptr;
  plocal_var_e0 = stack_array_d0;
  stack_array_d0[0] = 0;
  local_var_d8 = 0x1a;
  strcpy_s(stack_array_d0,0x40,&processed_var_4528_ptr);
  local_var_110 = 1;
  local_var_118 = 0;
  local_var_120 = 0;
  local_var_128 = 1;
  local_var_130 = 0x1a00;
  local_var_138 = 0;
  local_var_140 = 3;
  local_var_148 = 0x220;
  puVar2 = (uint64_t *)SystemCore_ConfigManager();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_108 = *(int64_t **)(param_1 + 0x1cd0);
  *(uint64_t *)(param_1 + 0x1cd0) = uVar1;
  if (plStack_108 != (int64_t *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  if (plStack_100 != (int64_t *)0x0) {
    (**(code **)(*plStack_100 + 0x38))();
  }
  plocal_var_e8 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_168);
}
// 函数: void SystemCore_Loader(void)
void SystemCore_Loader(void)
{
// WARNING: Subroutine does not return
  SystemEventProcessor();
}