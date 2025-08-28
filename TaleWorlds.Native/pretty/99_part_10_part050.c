#include "TaleWorlds.Native.Split.h"

// 99_part_10_part050.c - 4 个函数

// 函数: void FUN_1806c7280(int64_t param_1,int64_t param_2,int32_t param_3)
void FUN_1806c7280(int64_t param_1,int64_t param_2,int32_t param_3)

{
  int *piVar1;
  int8_t auStackX_8 [16];
  int32_t uStackX_18;
  int8_t auStack_260 [568];
  
  uStackX_18 = param_3;
  FUN_1806c21d0(param_2,param_3,param_1 + 0x1d8,&system_data_0560,auStackX_8);
  FUN_1806d7000(param_2,*(uint64_t *)(param_1 + 600));
  piVar1 = *(int **)(param_2 + 0x58);
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
                    // WARNING: Subroutine does not return
  memset(auStack_260,0,0xc0);
}






// 函数: void FUN_1806c7299(int64_t param_1,int64_t param_2,int32_t param_3)
void FUN_1806c7299(int64_t param_1,int64_t param_2,int32_t param_3)

{
  uint64_t uVar1;
  int *piVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int64_t in_RAX;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_R13;
  
  *(uint64_t *)(in_RAX + 0x20) = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x20) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R13;
  FUN_1806c21d0(param_2,param_3,param_1 + 0x1d8,&system_data_0560,unaff_RBP + 0x230);
  uVar3 = *(int32_t *)(param_1 + 0x26c);
  uVar4 = *(int32_t *)(param_1 + 0x270);
  uVar5 = *(int32_t *)(param_1 + 0x274);
  uVar1 = *(uint64_t *)(param_1 + 600);
  *(int32_t *)(unaff_RBP + -0x48) = *(int32_t *)(param_1 + 0x268);
  *(int32_t *)(unaff_RBP + -0x44) = uVar3;
  *(int32_t *)(unaff_RBP + -0x40) = uVar4;
  *(int32_t *)(unaff_RBP + -0x3c) = uVar5;
  FUN_1806d7000(param_2,uVar1);
  piVar2 = *(int **)(param_2 + 0x58);
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
                    // WARNING: Subroutine does not return
  memset(unaff_RBP + -0x38,0,0xc0);
}






// 函数: void FUN_1806c72a4(int64_t param_1,int64_t param_2,int32_t param_3,uint64_t param_4)
void FUN_1806c72a4(int64_t param_1,int64_t param_2,int32_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  int *piVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int64_t in_RAX;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_R13;
  
  *(uint64_t *)(in_RAX + -0x20) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R13;
  FUN_1806c21d0(param_2,param_3,param_1 + 0x1d8,param_4,unaff_RBP + 0x230);
  uVar3 = *(int32_t *)(param_1 + 0x26c);
  uVar4 = *(int32_t *)(param_1 + 0x270);
  uVar5 = *(int32_t *)(param_1 + 0x274);
  uVar1 = *(uint64_t *)(param_1 + 600);
  *(int32_t *)(unaff_RBP + -0x48) = *(int32_t *)(param_1 + 0x268);
  *(int32_t *)(unaff_RBP + -0x44) = uVar3;
  *(int32_t *)(unaff_RBP + -0x40) = uVar4;
  *(int32_t *)(unaff_RBP + -0x3c) = uVar5;
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
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int32_t *puVar9;
  uint64_t *unaff_RBP;
  uint64_t *unaff_R12;
  uint64_t in_stack_00000040;
  uint64_t in_stack_00000048;
  uint64_t in_stack_00000050;
  uint64_t in_stack_00000058;
  int32_t in_stack_00000060;
  int32_t in_stack_00000070;
  int32_t uStack0000000000000074;
  int32_t in_stack_00000078;
  int32_t uStack000000000000007c;
  
  puVar9 = (int32_t *)(*(code *)unaff_RBP[-9])();
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
  *(int32_t *)(unaff_RBP + -0x10) = puVar9[4];
  *(int32_t *)((int64_t)unaff_RBP + -0x7c) = puVar9[5];
  *(int32_t *)(unaff_RBP + -0xf) = puVar9[6];
  *(int32_t *)((int64_t)unaff_RBP + -0x74) = puVar9[7];
  *(int32_t *)(unaff_RBP + -0xe) = puVar9[8];
  unaff_RBP[-1] = &stack0x00000070;
  *(int8_t *)(unaff_RBP + 0x46) = 0;
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
  *(int8_t *)(unaff_RBP + 2) = 1;
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
  *(int8_t *)(unaff_RBP + 2) = 1;
  unaff_RBP[4] = 0;
  unaff_RBP[5] = 0;
  FUN_1806c9010(unaff_RBP + 0x15,unaff_RBP + -7,0);
  if (*(char *)(unaff_RBP + 0x46) != '\0') {
    *(int8_t *)unaff_R12[10] = 1;
  }
  in_stack_00000040 = CONCAT44(uStack0000000000000074,in_stack_00000070);
  in_stack_00000048 = CONCAT44(uStack000000000000007c,in_stack_00000078);
  in_stack_00000050 = unaff_RBP[-0x10];
  in_stack_00000058 = unaff_RBP[-0xf];
  in_stack_00000060 = *(int32_t *)(unaff_RBP + -0xe);
  (*(code *)unaff_RBP[-8])(unaff_R12[6],&stack0x00000040);
  FUN_1806d6f60();
                    // WARNING: Subroutine does not return
  memset(unaff_RBP + -7,0,0x80);
}






