#include "TaleWorlds.Native.Split.h"

// 99_part_04_part007_sub002.c - 1 个函数

// 函数: void FUN_18025d270(longlong param_1,uint64_t param_2,uint64_t param_3)
void FUN_18025d270(longlong param_1,uint64_t param_2,uint64_t param_3)

{
  int32_t *puVar1;
  int32_t *puVar2;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  uint64_t uStack_10;
  
  puVar1 = *(int32_t **)(param_1 + 8);
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_28 = *puVar1;
  *(int32_t **)(param_1 + 8) = puVar1 + 1;
  uStack_24 = puVar1[1];
  *(int32_t **)(param_1 + 8) = puVar1 + 2;
  uStack_20 = puVar1[2];
  *(int32_t **)(param_1 + 8) = puVar1 + 3;
  uStack_1c = puVar1[3];
  puVar2 = puVar1 + 4;
  *(int32_t **)(param_1 + 8) = puVar2;
  uStack_18 = *puVar2;
  *(int32_t **)(param_1 + 8) = puVar1 + 5;
  FUN_180257480(puVar2,param_1,&uStack_14);
  uStack_10 = **(uint64_t **)(param_1 + 8);
  *(uint64_t **)(param_1 + 8) = *(uint64_t **)(param_1 + 8) + 1;
  FUN_18025d310(&uStack_28,param_3);
  return;
}







