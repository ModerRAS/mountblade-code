#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part195_sub002.c - 1 个函数

// 函数: void FUN_180179e40(undefined8 *param_1,undefined8 param_2,longlong *param_3)
void FUN_180179e40(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
                    // WARNING: Subroutine does not return
  memcpy(*(undefined8 *)(*param_3 + 0x18),*param_1,param_1[2]);
}



undefined8 * FUN_180179ec0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_180a09578;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}






