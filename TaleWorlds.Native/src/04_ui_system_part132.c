#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part132.c - 6 个函数

// 函数: void FUN_180745ce1(void)
void FUN_180745ce1(void)

{
  return;
}





// 函数: void FUN_180745cff(void)
void FUN_180745cff(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong unaff_RSI;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(*(longlong *)(unaff_RSI + 0x108) + 0x10);
  uVar2 = *(undefined8 *)(lVar1 + 0x168);
  FUN_180768360(uVar2);
  *(longlong *)(*(longlong *)(unaff_RSI + 0x108) + 0x28) = unaff_RSI;
  lVar3 = *(longlong *)(unaff_RSI + 0x108);
  plVar4 = (longlong *)(lVar3 + 0x18);
  *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar1 + 0x158);
  *plVar4 = lVar1 + 0x150;
  *(longlong **)(lVar1 + 0x158) = plVar4;
  **(undefined8 **)(lVar3 + 0x20) = plVar4;
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar2);
}



undefined8 FUN_180745e75(void)

{
  return 0x1f;
}





// 函数: void FUN_180745e80(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)
void FUN_180745e80(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),param_2,1,param_3,param_4);
  return;
}





// 函数: void FUN_180745ed0(longlong param_1,int *param_2)
void FUN_180745ed0(longlong param_1,int *param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x170) + 0x10))();
  if (param_2 != (int *)0x0) {
    *param_2 = *param_2 - *(int *)(param_1 + 0x110);
  }
  return;
}





// 函数: void FUN_180745f10(longlong param_1,int *param_2)
void FUN_180745f10(longlong param_1,int *param_2)

{
  func_0x00018076a7d0(*(undefined8 *)(param_1 + 0x170));
  if (param_2 != (int *)0x0) {
    *param_2 = *param_2 - *(int *)(param_1 + 0x110);
  }
  return;
}



undefined8 FUN_180745f70(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((param_2 == 0) || (*(short *)(param_2 + 0x1fc) == -1)) {
    uVar1 = 0x1f;
  }
  else {
    uVar1 = FUN_180753170(param_2);
    if ((int)uVar1 == 0) {
      *(undefined1 *)(param_2 + 0x1fe) = 0;
      *(undefined2 *)(param_2 + 0x1fc) = 0xffff;
      return 0;
    }
  }
  return uVar1;
}



undefined8 FUN_1807460d0(longlong param_1,int *param_2)

{
  int iVar1;
  
  if ((((param_2 != (int *)0x0) && (iVar1 = *param_2, iVar1 - 0x31U < 0x38)) &&
      (((longlong)iVar1 & 3U) == 0)) && ((uint)param_2[8] < 0x21)) {
                    // WARNING: Subroutine does not return
    memcpy(param_2,param_1 + 0x11608,(longlong)iVar1);
  }
  return 0x1f;
}





// 函数: void FUN_18074610a(void)
void FUN_18074610a(void)

{
                    // WARNING: Subroutine does not return
  memcpy();
}



undefined8 FUN_180746135(void)

{
  longlong lVar1;
  longlong unaff_RBP;
  longlong unaff_RDI;
  longlong unaff_R14;
  
  if (0 < (int)unaff_RBP) {
    lVar1 = 0;
    do {
      *(undefined4 *)(*(longlong *)(unaff_RDI + 0x30) + lVar1 * 4) =
           *(undefined4 *)(unaff_R14 + 0x123b0 + lVar1 * 4);
      lVar1 = lVar1 + 1;
    } while (lVar1 < unaff_RBP);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



