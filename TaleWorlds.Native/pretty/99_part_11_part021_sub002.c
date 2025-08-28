#include "TaleWorlds.Native.Split.h"

// 99_part_11_part021_sub002.c - 1 个函数

// 函数: void FUN_1806f0db4(void)
void FUN_1806f0db4(void)

{
  uint64_t *unaff_RBX;
  uint unaff_EBP;
  uint uVar1;
  longlong *unaff_R12;
  code *in_stack_00000070;
  
  uVar1 = 0;
  if (unaff_EBP != 0) {
    do {
      (**(code **)*unaff_RBX)();
      (*in_stack_00000070)();
      uVar1 = uVar1 + 1;
    } while (uVar1 < unaff_EBP);
  }
  (**(code **)*unaff_RBX)();
  (**(code **)(*unaff_R12 + 0x10))();
  unaff_RBX[3] = 0;
  return;
}







