#include "TaleWorlds.Native.Split.h"

// 99_part_04_part007_sub002.c - 1 个函数

// 函数: void FUN_18025d270(longlong param_1,undefined8 param_2,undefined8 param_3)
void FUN_18025d270(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_28 = *puVar1;
  *(undefined4 **)(param_1 + 8) = puVar1 + 1;
  uStack_24 = puVar1[1];
  *(undefined4 **)(param_1 + 8) = puVar1 + 2;
  uStack_20 = puVar1[2];
  *(undefined4 **)(param_1 + 8) = puVar1 + 3;
  uStack_1c = puVar1[3];
  puVar2 = puVar1 + 4;
  *(undefined4 **)(param_1 + 8) = puVar2;
  uStack_18 = *puVar2;
  *(undefined4 **)(param_1 + 8) = puVar1 + 5;
  FUN_180257480(puVar2,param_1,&uStack_14);
  uStack_10 = **(undefined8 **)(param_1 + 8);
  *(undefined8 **)(param_1 + 8) = *(undefined8 **)(param_1 + 8) + 1;
  FUN_18025d310(&uStack_28,param_3);
  return;
}







