#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part190.c - 2 个函数
// 函数: void function_37ad00(int64_t param_1)
void function_37ad00(int64_t param_1)
{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uVar2 = SystemOptimizer();
  lVar1 = *(int64_t *)(param_1 + 0x9650);
  if ((*(int *)(param_1 + 0x124e8) == 0) && (*(int *)(param_1 + 0x124ec) == 0)) {
    function_37a770(uVar2,*(uint64_t *)(lVar1 + 0x10));
    lVar3 = function_275820(*(uint64_t *)(lVar1 + 0x20));
    function_22cd30(*(uint64_t *)(lVar3 + 0x1b8),2,uVar2);
    **(int32_t **)(lVar1 + 8) = 1;
    return;
  }
  **(int32_t **)(lVar1 + 8) = 2;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
function_37ad90(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  *param_1 = *param_2;
  lVar3 = (int64_t)(param_2[2] - param_2[1]) >> 5;
  uVar1 = *(uint *)(param_2 + 4);
  *(uint *)(param_1 + 4) = uVar1;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar3 << 5,uVar1 & 0xff,param_4,0xfffffffffffffffe);
  }
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar3 * 0x20 + lVar2;
  lVar3 = param_1[1];
  lVar2 = param_2[1];
  if (lVar2 != param_2[2]) {
// WARNING: Subroutine does not return
    memmove(lVar3,lVar2,param_2[2] - lVar2);
  }
  param_1[2] = lVar3;
  return param_1;
}
// 函数: void function_37ae40(int64_t param_1,int64_t *param_2)
void function_37ae40(int64_t param_1,int64_t *param_2)
{
  function_37fb10(param_1 + 0x21e0,*(uint64_t *)(param_1 + 0x21e8),*param_2,param_2[1]);
  *(int *)(param_1 + 0x2368) = *(int *)(param_1 + 0x2368) + (int)(param_2[1] - *param_2 >> 3);
  return;
}
// WARNING: Removing unreachable block (ram,0x00018037b2d6)
// WARNING: Removing unreachable block (ram,0x00018037b2a9)
// WARNING: Removing unreachable block (ram,0x00018037b579)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address