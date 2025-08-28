#include "TaleWorlds.Native.Split.h"
// 99_part_04_part007_sub002.c - 1 个函数
// 函数: void UltraHighFreq_NetworkHandler1(int64_t param_1,uint64_t param_2,uint64_t param_3)
void UltraHighFreq_NetworkHandler1(int64_t param_1,uint64_t param_2,uint64_t param_3)
{
  int32_t *puVar1;
  int32_t *puVar2;
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  int32_t local_var_1c;
  int32_t local_var_18;
  int32_t local_var_14;
  uint64_t local_var_10;
  puVar1 = *(int32_t **)(param_1 + 8);
  local_var_14 = 0;
  local_var_10 = 0;
  local_var_28 = *puVar1;
  *(int32_t **)(param_1 + 8) = puVar1 + 1;
  local_var_24 = puVar1[1];
  *(int32_t **)(param_1 + 8) = puVar1 + 2;
  local_var_20 = puVar1[2];
  *(int32_t **)(param_1 + 8) = puVar1 + 3;
  local_var_1c = puVar1[3];
  puVar2 = puVar1 + 4;
  *(int32_t **)(param_1 + 8) = puVar2;
  local_var_18 = *puVar2;
  *(int32_t **)(param_1 + 8) = puVar1 + 5;
  function_257480(puVar2,param_1,&local_var_14);
  local_var_10 = **(uint64_t **)(param_1 + 8);
  *(uint64_t **)(param_1 + 8) = *(uint64_t **)(param_1 + 8) + 1;
  function_25d310(&local_var_28,param_3);
  return;
}