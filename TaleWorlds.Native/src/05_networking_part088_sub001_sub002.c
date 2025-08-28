#include "TaleWorlds.Native.Split.h"

// 05_networking_part088_sub001_sub002.c - 1 个函数

// 函数: void FUN_180892011(void)
void FUN_180892011(void)

{
  int iVar1;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined8 in_stack_00000030;
  
  iVar1 = func_0x0001808c8710(in_stack_00000030);
  if (iVar1 < 1) {
    iVar1 = func_0x0001808c8700(in_stack_00000030);
    *(uint *)(unaff_RSI + 0x18) = (uint)(iVar1 < 1);
  }
  else {
    iVar1 = func_0x0001808c8700(in_stack_00000030);
    if (iVar1 < 1) {
      *(undefined4 *)(unaff_RSI + 0x18) = 2;
    }
    else {
      iVar1 = FUN_1808c7f30(in_stack_00000030,unaff_RSI + 0x18);
      if (iVar1 != 0) {
        return;
      }
    }
  }
  FUN_18088d7c0(*(undefined8 *)(unaff_RBP + 0x98));
  return;
}







