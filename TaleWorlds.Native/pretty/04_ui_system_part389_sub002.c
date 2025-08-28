#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part389_sub002.c - 1 个函数

// 函数: void FUN_180879c80(longlong *param_1)
void FUN_180879c80(longlong *param_1)

{
  uint64_t uVar1;
  
  uVar1 = FUN_180847820();
                    // WARNING: Could not recover jumptable at 0x000180879c9f. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x250))(param_1,uVar1,1);
  return;
}






