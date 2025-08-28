/* 函数别名定义: MemoryPoolManager */
#define MemoryPoolManager MemoryPoolManager


#include "TaleWorlds.Native.Split.h"

// 99_part_10_part052.c - 1 个函数

// 函数: void FUN_1806c9800(int64_t param_1,int64_t param_2)
void FUN_1806c9800(int64_t param_1,int64_t param_2)

{
  int *piVar1;
  int8_t auStack_110 [232];
  
  MemoryPoolManager0(param_2,*(uint64_t *)(param_1 + 0x208));
  piVar1 = *(int **)(param_2 + 0x58);
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
                    // WARNING: Subroutine does not return
  memset(auStack_110,0,0xe0);
}






