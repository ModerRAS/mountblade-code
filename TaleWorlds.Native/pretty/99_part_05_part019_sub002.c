#include "TaleWorlds.Native.Split.h"
// 99_part_05_part019_sub002.c - 1 个函数
// 函数: void function_2e4ca0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_2e4ca0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int iVar1;
  uint64_t uVar2;
  uVar2 = 0xfffffffffffffffe;
  iVar1 = _Mtx_lock(param_1 + 0x58);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  (**(code **)(**(int64_t **)(param_1 + 0x148) + 0xc0))
            (*(int64_t **)(param_1 + 0x148),param_1 + 200,param_3,param_4,uVar2);
  iVar1 = _Mtx_unlock(param_1 + 0x58);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address