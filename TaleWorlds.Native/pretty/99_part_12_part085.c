#include "TaleWorlds.Native.Split.h"

// 99_part_12_part085.c - 2 个函数

// 函数: void FUN_1808a3b54(void)
void FUN_1808a3b54(void)

{
  return;
}






// 函数: void FUN_1808a3b6c(void)
void FUN_1808a3b6c(void)

{
  return;
}



undefined8 FUN_1808a3b80(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar1 = FUN_1808aed00(*param_2,param_1 + 0x40,4);
  if (((((int)uVar1 == 0) && (uVar1 = FUN_1808a75c0(param_2,param_1,0), (int)uVar1 == 0)) &&
      (uVar1 = FUN_1808a5a90(param_2,param_1 + 0x20,0), (int)uVar1 == 0)) &&
     (uVar1 = FUN_1808a5a90(param_2,param_1 + 0x30,0), (int)uVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (0x3d < *(uint *)(param_2 + 8)) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar1 = FUN_1808aed00(*param_2,(undefined4 *)(param_1 + 0x44),4);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar1 = FUN_1808aed00(*param_2,param_1 + 0x48,4);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      uVar1 = FUN_1808a75c0(param_2,param_1 + 0x50,0);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      uVar1 = FUN_1808a75c0(param_2,param_1 + 0x60,0);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      uVar1 = FUN_180899360(param_2,param_1 + 0x70);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
    if ((0x7d < *(uint *)(param_2 + 8)) &&
       (uVar1 = FUN_1808a75c0(param_2,param_1 + 0x10,0), (int)uVar1 != 0)) {
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}






