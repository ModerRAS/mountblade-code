#include "TaleWorlds.Native.Split.h"

// 99_part_10_part050.c - 4 个函数

// 函数: void FUN_1806c7280(longlong param_1,longlong param_2,undefined4 param_3)
void FUN_1806c7280(longlong param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 auStackX_8 [16];
  undefined4 uStackX_18;
  undefined1 auStack_260 [568];
  
  uStackX_18 = param_3;
  FUN_1806c21d0(param_2,param_3,param_1 + 0x1d8,&DAT_180be0560,auStackX_8);
  FUN_1806d7000(param_2,*(undefined8 *)(param_1 + 600));
  piVar1 = *(int **)(param_2 + 0x58);
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
                    // WARNING: Subroutine does not return
  memset(auStack_260,0,0xc0);
}






// 函数: void FUN_1806c7299(longlong param_1,longlong param_2,undefined4 param_3)
void FUN_1806c7299(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong in_RAX;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_R13;
  
  *(undefined8 *)(in_RAX + 0x20) = unaff_RBX;
  *(undefined8 *)(in_RAX + -0x20) = unaff_RSI;
  *(undefined8 *)(in_RAX + -0x28) = unaff_R13;
  FUN_1806c21d0(param_2,param_3,param_1 + 0x1d8,&DAT_180be0560,unaff_RBP + 0x230);
  uVar3 = *(undefined4 *)(param_1 + 0x26c);
  uVar4 = *(undefined4 *)(param_1 + 0x270);
  uVar5 = *(undefined4 *)(param_1 + 0x274);
  uVar1 = *(undefined8 *)(param_1 + 600);
  *(undefined4 *)(unaff_RBP + -0x48) = *(undefined4 *)(param_1 + 0x268);
  *(undefined4 *)(unaff_RBP + -0x44) = uVar3;
  *(undefined4 *)(unaff_RBP + -0x40) = uVar4;
  *(undefined4 *)(unaff_RBP + -0x3c) = uVar5;
  FUN_1806d7000(param_2,uVar1);
  piVar2 = *(int **)(param_2 + 0x58);
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
                    // WARNING: Subroutine does not return
  memset(unaff_RBP + -0x38,0,0xc0);
}






// 函数: void FUN_1806c72a4(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4)
void FUN_1806c72a4(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong in_RAX;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_R13;
  
  *(undefined8 *)(in_RAX + -0x20) = unaff_RSI;
  *(undefined8 *)(in_RAX + -0x28) = unaff_R13;
  FUN_1806c21d0(param_2,param_3,param_1 + 0x1d8,param_4,unaff_RBP + 0x230);
  uVar3 = *(undefined4 *)(param_1 + 0x26c);
  uVar4 = *(undefined4 *)(param_1 + 0x270);
  uVar5 = *(undefined4 *)(param_1 + 0x274);
  uVar1 = *(undefined8 *)(param_1 + 600);
  *(undefined4 *)(unaff_RBP + -0x48) = *(undefined4 *)(param_1 + 0x268);
  *(undefined4 *)(unaff_RBP + -0x44) = uVar3;
  *(undefined4 *)(unaff_RBP + -0x40) = uVar4;
  *(undefined4 *)(unaff_RBP + -0x3c) = uVar5;
  FUN_1806d7000(param_2,uVar1);
  piVar2 = *(int **)(param_2 + 0x58);
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
                    // WARNING: Subroutine does not return
  memset(unaff_RBP + -0x38,0,0xc0);
}






// 函数: void FUN_1806c7795(void)
void FUN_1806c7795(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined8 *unaff_RBP;
  undefined8 *unaff_R12;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined4 uStack000000000000007c;
  
  puVar9 = (undefined4 *)(*(code *)unaff_RBP[-9])();
  uVar7 = unaff_R12[2];
  uVar8 = unaff_R12[3];
  uVar2 = *unaff_R12;
  uVar1 = unaff_R12[4];
  in_stack_00000070 = *puVar9;
  uVar3 = unaff_R12[1];
  uVar4 = unaff_R12[5];
  uVar5 = unaff_R12[7];
  uVar6 = unaff_R12[8];
  uStack0000000000000074 = puVar9[1];
  in_stack_00000078 = puVar9[2];
  uStack000000000000007c = puVar9[3];
  *(undefined4 *)(unaff_RBP + -0x10) = puVar9[4];
  *(undefined4 *)((longlong)unaff_RBP + -0x7c) = puVar9[5];
  *(undefined4 *)(unaff_RBP + -0xf) = puVar9[6];
  *(undefined4 *)((longlong)unaff_RBP + -0x74) = puVar9[7];
  *(undefined4 *)(unaff_RBP + -0xe) = puVar9[8];
  unaff_RBP[-1] = &stack0x00000070;
  *(undefined1 *)(unaff_RBP + 0x46) = 0;
  unaff_RBP[4] = 0;
  unaff_RBP[5] = 0;
  unaff_RBP[-7] = uVar2;
  unaff_RBP[-6] = uVar3;
  unaff_RBP[-5] = uVar7;
  unaff_RBP[-4] = uVar8;
  unaff_RBP[-2] = uVar4;
  unaff_RBP[-3] = uVar1;
  *unaff_RBP = uVar5;
  unaff_RBP[1] = uVar6;
  *(undefined1 *)(unaff_RBP + 2) = 1;
  unaff_RBP[3] = unaff_RBP + 0x46;
  FUN_1806c8d40(unaff_RBP + 0x15,unaff_RBP + -7,0);
  unaff_RBP[-7] = uVar2;
  unaff_RBP[-1] = &stack0x00000070;
  unaff_RBP[-6] = uVar3;
  unaff_RBP[3] = unaff_RBP + 0x46;
  unaff_RBP[-3] = uVar1;
  unaff_RBP[-2] = uVar4;
  unaff_RBP[-5] = uVar7;
  unaff_RBP[-4] = uVar8;
  *unaff_RBP = uVar5;
  unaff_RBP[1] = uVar6;
  *(undefined1 *)(unaff_RBP + 2) = 1;
  unaff_RBP[4] = 0;
  unaff_RBP[5] = 0;
  FUN_1806c9010(unaff_RBP + 0x15,unaff_RBP + -7,0);
  if (*(char *)(unaff_RBP + 0x46) != '\0') {
    *(undefined1 *)unaff_R12[10] = 1;
  }
  in_stack_00000040 = CONCAT44(uStack0000000000000074,in_stack_00000070);
  in_stack_00000048 = CONCAT44(uStack000000000000007c,in_stack_00000078);
  in_stack_00000050 = unaff_RBP[-0x10];
  in_stack_00000058 = unaff_RBP[-0xf];
  in_stack_00000060 = *(undefined4 *)(unaff_RBP + -0xe);
  (*(code *)unaff_RBP[-8])(unaff_R12[6],&stack0x00000040);
  FUN_1806d6f60();
                    // WARNING: Subroutine does not return
  memset(unaff_RBP + -7,0,0x80);
}






