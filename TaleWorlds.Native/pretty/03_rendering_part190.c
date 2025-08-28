#include "TaleWorlds.Native.Split.h"

// 03_rendering_part190.c - 2 个函数

// 函数: void FUN_18037ad00(longlong param_1)
void FUN_18037ad00(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = FUN_180244ff0();
  lVar1 = *(longlong *)(param_1 + 0x9650);
  if ((*(int *)(param_1 + 0x124e8) == 0) && (*(int *)(param_1 + 0x124ec) == 0)) {
    FUN_18037a770(uVar2,*(undefined8 *)(lVar1 + 0x10));
    lVar3 = FUN_180275820(*(undefined8 *)(lVar1 + 0x20));
    FUN_18022cd30(*(undefined8 *)(lVar3 + 0x1b8),2,uVar2);
    **(undefined4 **)(lVar1 + 8) = 1;
    return;
  }
  **(undefined4 **)(lVar1 + 8) = 2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_18037ad90(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = *param_2;
  lVar3 = (longlong)(param_2[2] - param_2[1]) >> 5;
  uVar1 = *(uint *)(param_2 + 4);
  *(uint *)(param_1 + 4) = uVar1;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_18062b420(_DAT_180c8ed18,lVar3 << 5,uVar1 & 0xff,param_4,0xfffffffffffffffe);
  }
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar3 * 0x20 + lVar2;
  lVar3 = param_1[1];
  lVar2 = param_2[1];
  if (lVar2 != param_2[2]) {
                    // WARNING: Subroutine does not return
    memmove(lVar3,lVar2,param_2[2] - lVar2);
  }
  param_1[2] = lVar3;
  return param_1;
}





// 函数: void FUN_18037ae40(longlong param_1,longlong *param_2)
void FUN_18037ae40(longlong param_1,longlong *param_2)

{
  FUN_18037fb10(param_1 + 0x21e0,*(undefined8 *)(param_1 + 0x21e8),*param_2,param_2[1]);
  *(int *)(param_1 + 0x2368) = *(int *)(param_1 + 0x2368) + (int)(param_2[1] - *param_2 >> 3);
  return;
}



// WARNING: Removing unreachable block (ram,0x00018037b2d6)
// WARNING: Removing unreachable block (ram,0x00018037b2a9)
// WARNING: Removing unreachable block (ram,0x00018037b579)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



