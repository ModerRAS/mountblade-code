#include "TaleWorlds.Native.Split.h"
// 99_part_11_part021_sub002.c - 1 个函数
// 函数: void UtilitiesSystem_f0db4(void)
void UtilitiesSystem_f0db4(void)
{
  uint64_t *unaff_RBX;
  uint unaff_EBP;
  uint uVar1;
  int64_t *unaff_R12;
  code *local_var_70;
  uVar1 = 0;
  if (unaff_EBP != 0) {
    do {
      (**(code **)*unaff_RBX)();
      (*local_var_70)();
      uVar1 = uVar1 + 1;
    } while (uVar1 < unaff_EBP);
  }
  (**(code **)*unaff_RBX)();
  (**(code **)(*unaff_R12 + 0x10))();
  unaff_RBX[3] = 0;
  return;
}