#include "TaleWorlds.Native.Split.h"
// 99_part_06_part008.c - 3 个函数
// 函数: void function_3aa060(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_3aa060(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  function_3aeb70(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}
// 函数: void function_3aa090(uint64_t *param_1)
void function_3aa090(uint64_t *param_1)
{
  int64_t *plVar1;
  *param_1 = &memory_allocator_376_ptr;
  function_419360(param_1[0x1c4]);
  function_33b330(param_1[0x1c4]);
  param_1[0x1c4] = 0;
  plVar1 = (int64_t *)param_1[0x1c5];
  param_1[0x1c5] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (int64_t *)param_1[0x1c6];
  param_1[0x1c6] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (int64_t *)param_1[0x1c7];
  param_1[0x1c7] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  UtilitiesSystem_Processor();
  UtilitiesSystem_Processor();
  if ((int64_t *)param_1[0x1c7] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x1c7] + 0x38))();
  }
  if ((int64_t *)param_1[0x1c6] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x1c6] + 0x38))();
  }
  if ((int64_t *)param_1[0x1c5] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x1c5] + 0x38))();
  }
  function_3aeb70(param_1 + 0x1bd,param_1[0x1bf]);
  function_3aeb70(param_1 + 0x1b7,param_1[0x1b9]);
  function_3aeb70(param_1 + 0x1b1,param_1[0x1b3]);
  if (param_1[0x1ad] != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  if (param_1[0x1a9] != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  if (param_1[0x141] != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  if (param_1[0x13d] != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  if (param_1[0xd5] != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  if (param_1[0xd1] != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  if (param_1[0x69] != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  if (param_1[0x65] != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return;
}
// 函数: void function_3aa2e0(void)
void function_3aa2e0(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// WARNING: Removing unreachable block (ram,0x0001803adcef)
// WARNING: Removing unreachable block (ram,0x0001803add00)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address