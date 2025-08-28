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



uint64_t FUN_1808a3b80(int64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar1 = SystemThreadProcessor(*param_2,param_1 + 0x40,4);
  if (((((int)uVar1 == 0) && (uVar1 = FUN_1808a75c0(param_2,param_1,0), (int)uVar1 == 0)) &&
      (uVar1 = FUN_1808a5a90(param_2,param_1 + 0x20,0), (int)uVar1 == 0)) &&
     (uVar1 = FUN_1808a5a90(param_2,param_1 + 0x30,0), (int)uVar1 == 0)) {
    *(int32_t *)(param_1 + 0x44) = *(int32_t *)(param_1 + 0x40);
    *(int32_t *)(param_1 + 0x48) = 0;
    if (0x3d < *(uint *)(param_2 + 8)) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar1 = SystemThreadProcessor(*param_2,(int32_t *)(param_1 + 0x44),4);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar1 = SystemThreadProcessor(*param_2,param_1 + 0x48,4);
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
      uVar1 = SystemCore_ConfigManager(param_2,param_1 + 0x70);
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






