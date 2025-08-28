#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part181.c - 1 个函数
// 函数: void function_3769d0(int64_t param_1)
void function_3769d0(int64_t param_1)
{
  int64_t lVar1;
  int aiStackX_8 [2];
  int32_t astack_special_x_10 [2];
  int32_t **ppstack_special_x_18;
  uint64_t uVar2;
  int32_t local_var_40;
  int32_t local_var_3c;
  int32_t *aplocal_var_28 [2];
  code *pcStack_18;
  code *pcStack_10;
  uVar2 = 0xfffffffffffffffe;
  astack_special_x_10[0] = 0;
  aiStackX_8[0] = *(int *)(*(int64_t *)(param_1 + 0x2148) + 0x3054);
  ppstack_special_x_18 = aplocal_var_28;
  pcStack_18 = function_380430;
  pcStack_10 = function_3802e0;
  aplocal_var_28[0] = (int32_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,system_allocation_flags);
  local_var_40 = (int32_t)param_1;
  local_var_3c = (int32_t)((uint64_t)param_1 >> 0x20);
  *aplocal_var_28[0] = local_var_40;
  aplocal_var_28[0][1] = local_var_3c;
  *(int **)(aplocal_var_28[0] + 2) = aiStackX_8;
  *(int32_t **)(aplocal_var_28[0] + 4) = astack_special_x_10;
  lVar1 = ((int64_t)aiStackX_8[0] + 0x10b) * 0x20;
  SystemCore_DataTransformer(local_var_40,0,*(int64_t *)(lVar1 + 8 + param_1) - *(int64_t *)(lVar1 + param_1) >> 3
                ,0x10,0xffffffffffffffff,aplocal_var_28,uVar2);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address