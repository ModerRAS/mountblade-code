#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part009_sub001_sub002.c - 1 个函数

// 函数: void FUN_180045f60(longlong param_1,uint64_t param_2,int param_3)
void FUN_180045f60(longlong param_1,uint64_t param_2,int param_3)

{
  if (param_3 + 1 < 0x400) {
                    // WARNING: Subroutine does not return
    memcpy(*(int8_t **)(param_1 + 8),param_2,(longlong)param_3);
  }
  **(int8_t **)(param_1 + 8) = 0;
  *(int32_t *)(param_1 + 0x10) = 0;
  return;
}







