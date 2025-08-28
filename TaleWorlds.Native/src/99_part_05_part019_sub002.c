#include "TaleWorlds.Native.Split.h"

// 99_part_05_part019_sub002.c - 1 个函数

// 函数: void FUN_1802e4ca0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1802e4ca0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  iVar1 = _Mtx_lock(param_1 + 0x58);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x148) + 0xc0))
            (*(longlong **)(param_1 + 0x148),param_1 + 200,param_3,param_4,uVar2);
  iVar1 = _Mtx_unlock(param_1 + 0x58);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





