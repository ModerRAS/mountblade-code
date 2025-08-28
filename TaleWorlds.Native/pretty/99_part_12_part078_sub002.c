#include "TaleWorlds.Native.Split.h"

// 99_part_12_part078_sub002.c - 1 个函数

// 函数: void FUN_1808a0552(undefined4 param_1)
void FUN_1808a0552(undefined4 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  int in_EAX;
  int iVar3;
  undefined4 *puVar4;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 uStack0000000000000098;
  
  if (in_EAX == 0) {
    puVar4 = *(undefined4 **)(unaff_RBP + 0x20);
    uStack0000000000000098 = unaff_ESI;
    while( true ) {
      if ((puVar4 < *(undefined4 **)(unaff_RBP + 0x20)) ||
         (*(undefined4 **)(unaff_RBP + 0x20) + (longlong)*(int *)(unaff_RBP + 0x28) * 2 <= puVar4))
      {
                    // WARNING: Subroutine does not return
        FUN_1808de000(param_1,&stack0x00000040);
      }
      iVar3 = FUN_1808ddf00(param_1,uStack0000000000000098);
      if ((iVar3 != 0) || (*(int *)(unaff_RDI[1] + 0x18) != 0)) break;
      lVar1 = *unaff_RDI;
      in_stack_00000030._4_4_ = *puVar4;
      puVar2 = *(undefined8 **)(lVar1 + 8);
      iVar3 = (**(code **)*puVar2)(puVar2,(longlong)&stack0x00000030 + 4,4);
      if (iVar3 != 0) {
        return;
      }
      puVar2 = *(undefined8 **)(lVar1 + 8);
      in_stack_00000038 = puVar4[1];
      iVar3 = (**(code **)*puVar2)(puVar2,&stack0x00000038,4);
      if (iVar3 != 0) {
        return;
      }
      iVar3 = FUN_1808de160(extraout_XMM0_Da,&stack0x00000098);
      if (iVar3 != 0) {
        return;
      }
      puVar4 = puVar4 + 2;
      param_1 = extraout_XMM0_Da_00;
    }
  }
  return;
}







