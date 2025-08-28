#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 03_rendering_part622_sub001.c - 8 个函数
// 03_rendering_part622.c - 8 个函数
// 函数: void function_6121d0(void)
void function_6121d0(void)
{
  int8_t stack_array_238 [32];
  int8_t stack_array_218 [512];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_238;
  if (((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) {
    *(int8_t *)(render_system_memory + 0x670) = 1;
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_238);
  }
  SystemCore_CacheManager(stack_array_218,0x200,&ui_system_data_1952_ptr,&processed_var_8432_ptr);
  function_61c7a0(stack_array_218);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_238);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_612270(void)
void function_612270(void)
{
  int8_t stack_array_268 [32];
  int64_t alStack_248 [3];
  int32_t local_var_230;
  uint64_t local_var_228;
  int8_t stack_array_218 [512];
  uint64_t local_var_18;
  local_var_228 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_268;
  if (((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) {
    alStack_248[0] = 0;
    alStack_248[1] = 0;
    alStack_248[2] = 0;
    local_var_230 = 3;
    function_5f83e0(0x180c92c58,alStack_248,&system_data_2cf8);
    if (alStack_248[0] != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    function_567bb0(render_system_memory,&system_data_2cf8,0x180c92c58);
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_268);
  }
  SystemCore_CacheManager(stack_array_218,0x200,&ui_system_data_1952_ptr,&processed_var_8352_ptr);
  function_61c7a0(stack_array_218);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_268);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_612360(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_612360(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int8_t stack_array_80 [32];
  int8_t stack_array_60 [32];
  int8_t stack_array_40 [40];
  uVar1 = render_system_memory;
  uVar2 = CoreMemoryPoolValidator(stack_array_80,param_4);
  uVar3 = CoreMemoryPoolValidator(stack_array_60,param_3);
  uVar4 = CoreMemoryPoolValidator(stack_array_40,param_2);
  function_567fd0(uVar1,uVar4,uVar3,uVar2,param_1);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_612410(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_612410(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int8_t stack_array_30 [40];
  uVar1 = render_system_memory;
  uVar3 = 0xfffffffffffffffe;
  uVar2 = CoreMemoryPoolValidator(stack_array_30);
  function_568ac0(uVar1,uVar2,param_3,param_4,uVar3);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t function_612460(uint64_t param_1)
{
  int32_t uVar1;
  int8_t astack_special_x_10 [8];
  void *plocal_var_c8;
  int64_t lStack_c0;
  int32_t local_var_b8;
  uint64_t local_var_b0;
  void *plocal_var_a8;
  int64_t lStack_a0;
  int32_t local_var_98;
  uint64_t local_var_90;
  void *plocal_var_88;
  int64_t lStack_80;
  int32_t local_var_78;
  uint64_t local_var_70;
  void *plocal_var_68;
  int64_t lStack_60;
  int32_t local_var_58;
  uint64_t local_var_50;
  void *plocal_var_48;
  int64_t lStack_40;
  uint64_t local_var_28;
  local_var_28 = 0xfffffffffffffffe;
  function_0bc000(&plocal_var_48,param_1);
  plocal_var_c8 = &system_data_buffer_ptr;
  local_var_b0 = 0;
  lStack_c0 = 0;
  local_var_b8 = 0;
  plocal_var_68 = &system_data_buffer_ptr;
  local_var_50 = 0;
  lStack_60 = 0;
  local_var_58 = 0;
  plocal_var_88 = &system_data_buffer_ptr;
  local_var_70 = 0;
  lStack_80 = 0;
  local_var_78 = 0;
  plocal_var_a8 = &system_data_buffer_ptr;
  local_var_90 = 0;
  lStack_a0 = 0;
  local_var_98 = 0;
  function_3211e0(&plocal_var_48,&plocal_var_c8,&plocal_var_68,&plocal_var_88,&plocal_var_a8,astack_special_x_10);
  uVar1 = (**(code **)(*system_cache_buffer + 0x70))(system_cache_buffer,&plocal_var_c8);
  plocal_var_a8 = &system_data_buffer_ptr;
  if (lStack_a0 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_a0 = 0;
  local_var_90 = local_var_90 & 0xffffffff00000000;
  plocal_var_a8 = &system_state_ptr;
  plocal_var_88 = &system_data_buffer_ptr;
  if (lStack_80 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_80 = 0;
  local_var_70 = local_var_70 & 0xffffffff00000000;
  plocal_var_88 = &system_state_ptr;
  plocal_var_68 = &system_data_buffer_ptr;
  if (lStack_60 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_60 = 0;
  local_var_50 = local_var_50 & 0xffffffff00000000;
  plocal_var_68 = &system_state_ptr;
  plocal_var_c8 = &system_data_buffer_ptr;
  if (lStack_c0 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_c0 = 0;
  local_var_b0 = local_var_b0 & 0xffffffff00000000;
  plocal_var_c8 = &system_state_ptr;
  plocal_var_48 = &system_data_buffer_ptr;
  if (lStack_40 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return uVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t function_6125f0(uint64_t param_1)
{
  int32_t uVar1;
  int8_t astack_special_x_10 [8];
  void *plocal_var_c8;
  int64_t lStack_c0;
  int32_t local_var_b8;
  uint64_t local_var_b0;
  void *plocal_var_a8;
  int64_t lStack_a0;
  int32_t local_var_98;
  uint64_t local_var_90;
  void *plocal_var_88;
  int64_t lStack_80;
  int32_t local_var_78;
  uint64_t local_var_70;
  void *plocal_var_68;
  int64_t lStack_60;
  int32_t local_var_58;
  uint64_t local_var_50;
  void *plocal_var_48;
  int64_t lStack_40;
  uint64_t local_var_28;
  local_var_28 = 0xfffffffffffffffe;
  function_0bc000(&plocal_var_48,param_1);
  plocal_var_68 = &system_data_buffer_ptr;
  local_var_50 = 0;
  lStack_60 = 0;
  local_var_58 = 0;
  plocal_var_c8 = &system_data_buffer_ptr;
  local_var_b0 = 0;
  lStack_c0 = 0;
  local_var_b8 = 0;
  plocal_var_88 = &system_data_buffer_ptr;
  local_var_70 = 0;
  lStack_80 = 0;
  local_var_78 = 0;
  plocal_var_a8 = &system_data_buffer_ptr;
  local_var_90 = 0;
  lStack_a0 = 0;
  local_var_98 = 0;
  function_3211e0(&plocal_var_48,&plocal_var_68,&plocal_var_c8,&plocal_var_88,&plocal_var_a8,astack_special_x_10);
  uVar1 = (**(code **)(*system_cache_buffer + 0x70))(system_cache_buffer,&plocal_var_c8);
  plocal_var_a8 = &system_data_buffer_ptr;
  if (lStack_a0 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_a0 = 0;
  local_var_90 = local_var_90 & 0xffffffff00000000;
  plocal_var_a8 = &system_state_ptr;
  plocal_var_88 = &system_data_buffer_ptr;
  if (lStack_80 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_80 = 0;
  local_var_70 = local_var_70 & 0xffffffff00000000;
  plocal_var_88 = &system_state_ptr;
  plocal_var_c8 = &system_data_buffer_ptr;
  if (lStack_c0 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_c0 = 0;
  local_var_b0 = local_var_b0 & 0xffffffff00000000;
  plocal_var_c8 = &system_state_ptr;
  plocal_var_68 = &system_data_buffer_ptr;
  if (lStack_60 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_60 = 0;
  local_var_50 = local_var_50 & 0xffffffff00000000;
  plocal_var_68 = &system_state_ptr;
  plocal_var_48 = &system_data_buffer_ptr;
  if (lStack_40 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return uVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t function_612780(uint64_t param_1)
{
  int32_t uVar1;
  int8_t astack_special_x_10 [8];
  void *plocal_var_f8;
  int64_t lStack_f0;
  int32_t local_var_e8;
  uint64_t local_var_e0;
  void *plocal_var_d8;
  int64_t lStack_d0;
  int32_t local_var_c8;
  uint64_t local_var_c0;
  void *plocal_var_b8;
  int64_t lStack_b0;
  int32_t local_var_a8;
  uint64_t local_var_a0;
  void *plocal_var_98;
  int64_t lStack_90;
  int32_t local_var_88;
  uint64_t local_var_80;
  void *plocal_var_78;
  int64_t lStack_70;
  int32_t local_var_60;
  uint64_t local_var_58;
  int8_t stack_array_50 [56];
  local_var_58 = 0xfffffffffffffffe;
  function_1ec5c0(stack_array_50,&processed_var_8792_ptr);
  function_0bc000(&plocal_var_78,param_1);
  plocal_var_98 = &system_data_buffer_ptr;
  local_var_80 = 0;
  lStack_90 = 0;
  local_var_88 = 0;
  plocal_var_b8 = &system_data_buffer_ptr;
  local_var_a0 = 0;
  lStack_b0 = 0;
  local_var_a8 = 0;
  plocal_var_f8 = &system_data_buffer_ptr;
  local_var_e0 = 0;
  lStack_f0 = 0;
  local_var_e8 = 0;
  plocal_var_d8 = &system_data_buffer_ptr;
  local_var_c0 = 0;
  lStack_d0 = 0;
  local_var_c8 = 0;
  function_3211e0(&plocal_var_78,&plocal_var_98,&plocal_var_b8,&plocal_var_f8,&plocal_var_d8,astack_special_x_10);
  uVar1 = (**(code **)(*system_cache_buffer + 0x70))(system_cache_buffer,&plocal_var_f8);
  plocal_var_d8 = &system_data_buffer_ptr;
  if (lStack_d0 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_d0 = 0;
  local_var_c0 = local_var_c0 & 0xffffffff00000000;
  plocal_var_d8 = &system_state_ptr;
  plocal_var_f8 = &system_data_buffer_ptr;
  if (lStack_f0 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_f0 = 0;
  local_var_e0 = local_var_e0 & 0xffffffff00000000;
  plocal_var_f8 = &system_state_ptr;
  plocal_var_b8 = &system_data_buffer_ptr;
  if (lStack_b0 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_b0 = 0;
  local_var_a0 = local_var_a0 & 0xffffffff00000000;
  plocal_var_b8 = &system_state_ptr;
  plocal_var_98 = &system_data_buffer_ptr;
  if (lStack_90 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_90 = 0;
  local_var_80 = local_var_80 & 0xffffffff00000000;
  plocal_var_98 = &system_state_ptr;
  plocal_var_78 = &system_data_buffer_ptr;
  if (lStack_70 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_70 = 0;
  local_var_60 = 0;
  plocal_var_78 = &system_state_ptr;
  function_1ec3f0(stack_array_50);
  return uVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t function_612950(uint64_t param_1)
{
  int32_t uVar1;
  int8_t astack_special_x_10 [8];
  void *plocal_var_c8;
  int64_t lStack_c0;
  int32_t local_var_b8;
  uint64_t local_var_b0;
  void *plocal_var_a8;
  int64_t lStack_a0;
  int32_t local_var_98;
  uint64_t local_var_90;
  void *plocal_var_88;
  int64_t lStack_80;
  int32_t local_var_78;
  uint64_t local_var_70;
  void *plocal_var_68;
  int64_t lStack_60;
  int32_t local_var_58;
  uint64_t local_var_50;
  void *plocal_var_48;
  int64_t lStack_40;
  uint64_t local_var_28;
  local_var_28 = 0xfffffffffffffffe;
  function_0bc000(&plocal_var_48,param_1);
  plocal_var_68 = &system_data_buffer_ptr;
  local_var_50 = 0;
  lStack_60 = 0;
  local_var_58 = 0;
  plocal_var_88 = &system_data_buffer_ptr;
  local_var_70 = 0;
  lStack_80 = 0;
  local_var_78 = 0;
  plocal_var_a8 = &system_data_buffer_ptr;
  local_var_90 = 0;
  lStack_a0 = 0;
  local_var_98 = 0;
  plocal_var_c8 = &system_data_buffer_ptr;
  local_var_b0 = 0;
  lStack_c0 = 0;
  local_var_b8 = 0;
  function_3211e0(&plocal_var_48,&plocal_var_68,&plocal_var_88,&plocal_var_a8,&plocal_var_c8,astack_special_x_10);
  uVar1 = (**(code **)(*system_cache_buffer + 0x70))(system_cache_buffer,&plocal_var_c8);
  plocal_var_c8 = &system_data_buffer_ptr;
  if (lStack_c0 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_c0 = 0;
  local_var_b0 = local_var_b0 & 0xffffffff00000000;
  plocal_var_c8 = &system_state_ptr;
  plocal_var_a8 = &system_data_buffer_ptr;
  if (lStack_a0 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_a0 = 0;
  local_var_90 = local_var_90 & 0xffffffff00000000;
  plocal_var_a8 = &system_state_ptr;
  plocal_var_88 = &system_data_buffer_ptr;
  if (lStack_80 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_80 = 0;
  local_var_70 = local_var_70 & 0xffffffff00000000;
  plocal_var_88 = &system_state_ptr;
  plocal_var_68 = &system_data_buffer_ptr;
  if (lStack_60 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_60 = 0;
  local_var_50 = local_var_50 & 0xffffffff00000000;
  plocal_var_68 = &system_state_ptr;
  plocal_var_48 = &system_data_buffer_ptr;
  if (lStack_40 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return uVar1;
}
int32_t function_612ae0(uint64_t param_1)
{
  int32_t astack_special_x_10 [2];
  void *plocal_var_b8;
  int64_t lStack_b0;
  int32_t local_var_a8;
  uint64_t local_var_a0;
  void *plocal_var_98;
  int64_t lStack_90;
  int32_t local_var_88;
  uint64_t local_var_80;
  void *plocal_var_78;
  int64_t lStack_70;
  int32_t local_var_68;
  uint64_t local_var_60;
  void *plocal_var_58;
  int64_t lStack_50;
  int32_t local_var_48;
  uint64_t local_var_40;
  void *plocal_var_38;
  int64_t lStack_30;
  uint64_t local_var_18;
  local_var_18 = 0xfffffffffffffffe;
  function_0bc000(&plocal_var_38,param_1);
  plocal_var_58 = &system_data_buffer_ptr;
  local_var_40 = 0;
  lStack_50 = 0;
  local_var_48 = 0;
  plocal_var_78 = &system_data_buffer_ptr;
  local_var_60 = 0;
  lStack_70 = 0;
  local_var_68 = 0;
  plocal_var_98 = &system_data_buffer_ptr;
  local_var_80 = 0;
  lStack_90 = 0;
  local_var_88 = 0;
  plocal_var_b8 = &system_data_buffer_ptr;
  local_var_a0 = 0;
  lStack_b0 = 0;
  local_var_a8 = 0;
  function_3211e0(&plocal_var_38,&plocal_var_58,&plocal_var_78,&plocal_var_98,&plocal_var_b8,astack_special_x_10);
  plocal_var_b8 = &system_data_buffer_ptr;
  if (lStack_b0 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_b0 = 0;
  local_var_a0 = local_var_a0 & 0xffffffff00000000;
  plocal_var_b8 = &system_state_ptr;
  plocal_var_98 = &system_data_buffer_ptr;
  if (lStack_90 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_90 = 0;
  local_var_80 = local_var_80 & 0xffffffff00000000;
  plocal_var_98 = &system_state_ptr;
  plocal_var_78 = &system_data_buffer_ptr;
  if (lStack_70 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_70 = 0;
  local_var_60 = local_var_60 & 0xffffffff00000000;
  plocal_var_78 = &system_state_ptr;
  plocal_var_58 = &system_data_buffer_ptr;
  if (lStack_50 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_50 = 0;
  local_var_40 = local_var_40 & 0xffffffff00000000;
  plocal_var_58 = &system_state_ptr;
  plocal_var_38 = &system_data_buffer_ptr;
  if (lStack_30 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return astack_special_x_10[0];
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t * function_612c60(int param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int64_t *plStackX_10;
  int8_t stack_array_40 [56];
  function_1ec5c0(stack_array_40,&processed_var_8760_ptr,param_3,param_4,0xfffffffffffffffe);
  function_535720(&system_data_6070,&plStackX_10);
  if ((param_1 != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x30))(param_1);
  }
  plVar1 = plStackX_10;
  if (((int)plStackX_10[0x131b25] != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x18))();
  }
  *(int *)(plVar1 + 0x131b25) = param_1;
  if (plStackX_10 != (int64_t *)0x0) {
    (**(code **)(*plStackX_10 + 0x38))();
  }
  function_1ec3f0(stack_array_40);
  return plStackX_10;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_612d20(uint64_t param_1,int32_t param_2)
void function_612d20(uint64_t param_1,int32_t param_2)
{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int32_t local_var_48;
  int32_t local_var_44;
  int32_t local_var_38;
  int32_t local_var_34;
  int32_t local_var_30;
  void *plocal_var_28;
  void *plocal_var_20;
  if (render_system_data_memory != 0) {
    uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3,0xfffffffffffffffe);
    local_var_48 = (int32_t)param_1;
    local_var_44 = (int32_t)((uint64_t)param_1 >> 0x20);
    plocal_var_28 = &processed_var_7664_ptr;
    plocal_var_20 = &processed_var_7632_ptr;
    local_var_38 = local_var_48;
    local_var_34 = local_var_44;
    local_var_30 = param_2;
    plVar4 = (int64_t *)SystemCore_ErrorHandler(uVar3,&local_var_38);
    lVar2 = render_system_data_memory;
    if (plVar4 != (int64_t *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    plVar1 = *(int64_t **)(lVar2 + 0x228);
    *(int64_t **)(lVar2 + 0x228) = plVar4;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int function_612e30(int64_t param_1,uint param_2,float *param_3,float param_4)
{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  int iVar5;
  int64_t *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int64_t *plStack_80;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_68;
  int iStack_64;
  uint64_t local_var_60;
  float fStack_58;
  uint64_t local_var_50;
  local_var_50 = 0xfffffffffffffffe;
  lVar4 = 0;
  if (-1 < (int)param_2) {
    local_var_60 = 0;
    plStack_80 = (int64_t *)0x0;
    fVar10 = param_4 * param_4;
    function_4ff330(param_1 + 0x98d230,param_3,param_4,&plStack_80,0);
    if (plStack_80 != (int64_t *)0x0) {
      plVar6 = plStack_80;
      iVar3 = iStack_78;
      iVar5 = iStack_74;
LAB_180612ed0:
      lVar1 = *plVar6;
      if ((((-1 < *(int *)(lVar1 + 0x980)) &&
           (((&processed_var_6480_ptr)[param_2 & 7] &
            *(byte *)((int64_t)
                      ((*(int *)(param_1 + 0x87b770) >> 3) * *(int *)(lVar1 + 0x980) +
                      ((int)param_2 >> 3)) + *(int64_t *)(param_1 + 0x87b768))) != 0)) &&
          ((*(uint *)(lVar1 + 0x56c) & 0x800) != 0)) && (*(int *)(lVar1 + 0x568) == 1)) {
        lVar2 = *(int64_t *)(lVar1 + 0x20);
        fVar8 = param_3[1] - *(float *)(lVar2 + 0x10);
        fVar9 = *param_3 - *(float *)(lVar2 + 0xc);
        fVar7 = param_3[2] - *(float *)(lVar2 + 0x14);
        fVar7 = fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7;
        if (fVar7 <= fVar10) {
          lVar4 = lVar1;
          fVar10 = fVar7;
        }
      }
      plVar6 = (int64_t *)plVar6[3];
      while (plVar6 == (int64_t *)0x0) {
        if (iVar3 == iStack_68) {
          if (iVar5 == iStack_64) break;
          iStack_74 = iVar5 + 1;
          iVar3 = iStack_70;
          iVar5 = iStack_74;
        }
        else {
          iVar3 = iVar3 + 1;
        }
        iStack_78 = iVar3;
        plVar6 = *(int64_t **)
                  ((int64_t)(iStack_74 * *(int *)(param_1 + 0x98d238) + iVar3) * 9 +
                  *(int64_t *)(param_1 + 0x98d248));
      }
      do {
        if ((plVar6 == (int64_t *)0x0) ||
           (fVar7 = local_var_60._4_4_ - *(float *)((int64_t)plVar6 + 0xc),
           ((float)local_var_60 - *(float *)(plVar6 + 1)) * ((float)local_var_60 - *(float *)(plVar6 + 1))
           + fVar7 * fVar7 <= fStack_58)) goto LAB_18061304d;
        plVar6 = (int64_t *)plVar6[3];
        while (plVar6 == (int64_t *)0x0) {
          if (iVar3 == iStack_68) {
            if (iVar5 == iStack_64) break;
            iStack_74 = iVar5 + 1;
            iVar3 = iStack_70;
            iVar5 = iStack_74;
          }
          else {
            iVar3 = iVar3 + 1;
          }
          iStack_78 = iVar3;
          plVar6 = *(int64_t **)
                    ((int64_t)(iStack_74 * *(int *)(param_1 + 0x98d238) + iVar3) * 9 +
                    *(int64_t *)(param_1 + 0x98d248));
        }
      } while( true );
    }
  }
  return 0;
LAB_18061304d:
  if (plVar6 == (int64_t *)0x0) {
    if (lVar4 == 0) {
      return 0;
    }
    iVar3 = *(int *)(lVar4 + 0x18);
    if ((iVar3 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x30))(iVar3);
    }
    if (iVar3 != 0) {
      if (system_cache_buffer != 0) {
        (**(code **)(system_cache_buffer + 0x18))(iVar3);
        return iVar3;
      }
      return iVar3;
    }
    return 0;
  }
  goto LAB_180612ed0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int function_6130d0(int64_t param_1,uint param_2,float *param_3,float param_4)
{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  int iVar5;
  int64_t *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int64_t *plStack_80;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_68;
  int iStack_64;
  uint64_t local_var_60;
  float fStack_58;
  uint64_t local_var_50;
  local_var_50 = 0xfffffffffffffffe;
  lVar4 = 0;
  if (-1 < (int)param_2) {
    local_var_60 = 0;
    plStack_80 = (int64_t *)0x0;
    fVar10 = param_4 * param_4;
    function_4ff330(param_1 + 0x98d230,param_3,param_4,&plStack_80,0);
    if (plStack_80 != (int64_t *)0x0) {
      plVar6 = plStack_80;
      iVar3 = iStack_78;
      iVar5 = iStack_74;
LAB_180613170:
      lVar1 = *plVar6;
      if ((((-1 < *(int *)(lVar1 + 0x980)) &&
           (((&processed_var_6480_ptr)[param_2 & 7] &
            *(byte *)((int64_t)
                      ((*(int *)(param_1 + 0x87b770) >> 3) * *(int *)(lVar1 + 0x980) +
                      ((int)param_2 >> 3)) + *(int64_t *)(param_1 + 0x87b768))) == 0)) &&
          ((*(uint *)(lVar1 + 0x56c) & 0x800) != 0)) && (*(int *)(lVar1 + 0x568) == 1)) {
        lVar2 = *(int64_t *)(lVar1 + 0x20);
        fVar8 = param_3[1] - *(float *)(lVar2 + 0x10);
        fVar9 = *param_3 - *(float *)(lVar2 + 0xc);
        fVar7 = param_3[2] - *(float *)(lVar2 + 0x14);
        fVar7 = fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7;
        if (fVar7 <= fVar10) {
          lVar4 = lVar1;
          fVar10 = fVar7;
        }
      }
      plVar6 = (int64_t *)plVar6[3];
      while (plVar6 == (int64_t *)0x0) {
        if (iVar3 == iStack_68) {
          if (iVar5 == iStack_64) break;
          iStack_74 = iVar5 + 1;
          iVar3 = iStack_70;
          iVar5 = iStack_74;
        }
        else {
          iVar3 = iVar3 + 1;
        }
        iStack_78 = iVar3;
        plVar6 = *(int64_t **)
                  ((int64_t)(iStack_74 * *(int *)(param_1 + 0x98d238) + iVar3) * 9 +
                  *(int64_t *)(param_1 + 0x98d248));
      }
      do {
        if ((plVar6 == (int64_t *)0x0) ||
           (fVar7 = local_var_60._4_4_ - *(float *)((int64_t)plVar6 + 0xc),
           ((float)local_var_60 - *(float *)(plVar6 + 1)) * ((float)local_var_60 - *(float *)(plVar6 + 1))
           + fVar7 * fVar7 <= fStack_58)) goto LAB_1806132ed;
        plVar6 = (int64_t *)plVar6[3];
        while (plVar6 == (int64_t *)0x0) {
          if (iVar3 == iStack_68) {
            if (iVar5 == iStack_64) break;
            iStack_74 = iVar5 + 1;
            iVar3 = iStack_70;
            iVar5 = iStack_74;
          }
          else {
            iVar3 = iVar3 + 1;
          }
          iStack_78 = iVar3;
          plVar6 = *(int64_t **)
                    ((int64_t)(iStack_74 * *(int *)(param_1 + 0x98d238) + iVar3) * 9 +
                    *(int64_t *)(param_1 + 0x98d248));
        }
      } while( true );
    }
  }
  return 0;
LAB_1806132ed:
  if (plVar6 == (int64_t *)0x0) {
    if (lVar4 == 0) {
      return 0;
    }
    iVar3 = *(int *)(lVar4 + 0x18);
    if ((iVar3 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x30))(iVar3);
    }
    if (iVar3 != 0) {
      if (system_cache_buffer != 0) {
        (**(code **)(system_cache_buffer + 0x18))(iVar3);
        return iVar3;
      }
      return iVar3;
    }
    return 0;
  }
  goto LAB_180613170;
}
// 函数: void function_6133b0(uint64_t param_1,int32_t *param_2)
void function_6133b0(uint64_t param_1,int32_t *param_2)
{
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  local_var_18 = *param_2;
  local_var_14 = param_2[1];
  local_var_10 = param_2[2];
  local_var_c = param_2[3];
  function_4f8e40(local_var_18,&local_var_18);
  return;
}
// 函数: void function_6133d0(int64_t param_1,uint param_2,uint64_t param_3,float param_4,int *param_5,
void function_6133d0(int64_t param_1,uint param_2,uint64_t param_3,float param_4,int *param_5,
                  int *param_6)
{
  int64_t lVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fStackX_8;
  float fStackX_c;
  uint64_t local_var_98;
  int64_t *plStack_90;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_78;
  int iStack_74;
  uint64_t local_var_70;
  float fStack_68;
  if (-1 < (int)param_2) {
    *param_6 = 0;
    *param_5 = 0;
    local_var_70 = 0;
    plStack_90 = (int64_t *)0x0;
    local_var_98 = param_3;
    function_4ff330(param_1 + 0x98d230,&local_var_98,param_4,&plStack_90);
    if (plStack_90 != (int64_t *)0x0) {
      fStackX_c = (float)((uint64_t)param_3 >> 0x20);
      fStackX_8 = (float)param_3;
      iVar2 = iStack_84;
LAB_1806134a0:
      lVar1 = *plStack_90;
      if ((((-1 < *(int *)(lVar1 + 0x980)) && ((*(uint *)(lVar1 + 0x56c) & 0x800) != 0)) &&
          (*(int *)(lVar1 + 0x568) == 1)) &&
         (fVar3 = fStackX_8 - *(float *)(*(int64_t *)(lVar1 + 0x20) + 0xc),
         fVar4 = fStackX_c - *(float *)(*(int64_t *)(lVar1 + 0x20) + 0x10),
         fVar3 * fVar3 + fVar4 * fVar4 <= param_4 * param_4)) {
        if (((&processed_var_6480_ptr)[param_2 & 7] &
            *(byte *)((int64_t)
                      ((*(int *)(param_1 + 0x87b770) >> 3) * *(int *)(lVar1 + 0x980) +
                      ((int)param_2 >> 3)) + *(int64_t *)(param_1 + 0x87b768))) == 0) {
          *param_5 = *param_5 + 1;
        }
        else {
          *param_6 = *param_6 + 1;
        }
      }
      plStack_90 = (int64_t *)plStack_90[3];
      while (plStack_90 == (int64_t *)0x0) {
        if (iStack_88 == iStack_78) {
          if (iVar2 == iStack_74) break;
          iVar2 = iVar2 + 1;
          iStack_88 = iStack_80;
          iStack_84 = iVar2;
        }
        else {
          iStack_88 = iStack_88 + 1;
        }
        plStack_90 = *(int64_t **)
                      ((int64_t)(iStack_84 * *(int *)(param_1 + 0x98d238) + iStack_88) * 9 +
                      *(int64_t *)(param_1 + 0x98d248));
      }
      do {
        if ((plStack_90 == (int64_t *)0x0) ||
           (fVar3 = local_var_70._4_4_ - *(float *)((int64_t)plStack_90 + 0xc),
           ((float)local_var_70 - *(float *)(plStack_90 + 1)) *
           ((float)local_var_70 - *(float *)(plStack_90 + 1)) + fVar3 * fVar3 <= fStack_68))
        goto LAB_1806135fd;
        plStack_90 = (int64_t *)plStack_90[3];
        while (plStack_90 == (int64_t *)0x0) {
          if (iStack_88 == iStack_78) {
            if (iVar2 == iStack_74) break;
            iVar2 = iVar2 + 1;
            iStack_88 = iStack_80;
            iStack_84 = iVar2;
          }
          else {
            iStack_88 = iStack_88 + 1;
          }
          plStack_90 = *(int64_t **)
                        ((int64_t)(iStack_84 * *(int *)(param_1 + 0x98d238) + iStack_88) * 9 +
                        *(int64_t *)(param_1 + 0x98d248));
        }
      } while( true );
    }
  }
  return;
LAB_1806135fd:
  if (plStack_90 == (int64_t *)0x0) {
    return;
  }
  goto LAB_1806134a0;
}