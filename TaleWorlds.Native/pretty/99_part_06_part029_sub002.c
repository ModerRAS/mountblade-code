#include "TaleWorlds.Native.Split.h"

// 99_part_06_part029_sub002.c - 1 个函数

// 函数: void FUN_1803c19c1(undefined8 param_1,undefined8 param_2,undefined8 param_3)
void FUN_1803c19c1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RBX;
  longlong in_stack_00000080;
  
  if ((*(longlong *)(unaff_RBX + 0x30) != 0) || (*(longlong *)(unaff_RBX + 0x40) != 0)) {
    if (*(longlong *)(in_stack_00000080 + 0x30) != 0) {
      *(undefined8 *)(unaff_RBX + 0x50) = *(undefined8 *)(in_stack_00000080 + 0x38);
      *(longlong *)(*(longlong *)(in_stack_00000080 + 0x38) + 0x58) = unaff_RBX;
      *(longlong *)(in_stack_00000080 + 0x38) = unaff_RBX;
      *(longlong *)(unaff_RBX + 0x20) = in_stack_00000080;
      *(undefined8 *)(unaff_RBX + 0x58) = param_3;
      return;
    }
    *(undefined8 *)(unaff_RBX + 0x50) = param_3;
    *(longlong *)(in_stack_00000080 + 0x30) = unaff_RBX;
    *(longlong *)(in_stack_00000080 + 0x38) = unaff_RBX;
    *(longlong *)(unaff_RBX + 0x20) = in_stack_00000080;
    *(undefined8 *)(unaff_RBX + 0x58) = param_3;
  }
  return;
}







