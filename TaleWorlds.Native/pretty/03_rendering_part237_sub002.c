#include "TaleWorlds.Native.Split.h"

// 03_rendering_part237_sub002.c - 1 个函数

// 函数: void FUN_18039f8a0(longlong param_1,undefined1 param_2)
void FUN_18039f8a0(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = *(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) >> 3;
  if ((int)uVar2 != 0) {
    lVar3 = 0;
    uVar2 = uVar2 & 0xffffffff;
    do {
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x30));
      (**(code **)(*plVar1 + 0xe0))(plVar1,param_2);
      lVar3 = lVar3 + 8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}






