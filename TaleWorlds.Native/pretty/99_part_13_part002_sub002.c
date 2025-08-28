#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part002_sub002.c - 1 个函数

// 函数: void FUN_1808a736f(void)
void FUN_1808a736f(void)

{
  int64_t *unaff_RBX;
  
  FUN_1808b0fb0(unaff_RBX + 3,0);
  *(int64_t *)unaff_RBX[1] = *unaff_RBX;
  *(int64_t *)(*unaff_RBX + 8) = unaff_RBX[1];
  unaff_RBX[1] = (int64_t)unaff_RBX;
  *unaff_RBX = (int64_t)unaff_RBX;
  *(int64_t **)unaff_RBX[1] = unaff_RBX;
  *(int64_t *)(*unaff_RBX + 8) = unaff_RBX[1];
  unaff_RBX[1] = (int64_t)unaff_RBX;
  *unaff_RBX = (int64_t)unaff_RBX;
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}



uint64_t FUN_1808a7460(int64_t *param_1,uint64_t *param_2,uint param_3)

{
  uint64_t *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint64_t uVar5;
  uint auStackX_8 [2];
  uint auStackX_10 [2];
  uint auStackX_18 [2];
  
  iVar2 = 0;
  for (puVar1 = (uint64_t *)*param_2; puVar1 != param_2; puVar1 = (uint64_t *)*puVar1) {
    iVar2 = iVar2 + 1;
  }
  uVar3 = iVar2 * 2 | param_3;
  if (uVar3 < 0x8000) {
    auStackX_18[0] = CONCAT22(auStackX_18[0]._2_2_,(short)uVar3);
    puVar4 = auStackX_18;
    uVar5 = 2;
  }
  else {
    puVar4 = auStackX_10;
    uVar5 = 4;
    auStackX_10[0] = (uVar3 & 0xffffc000 | 0x4000) * 2 | uVar3 & 0x7fff;
  }
  uVar5 = (**(code **)**(uint64_t **)(*param_1 + 8))(*(uint64_t **)(*param_1 + 8),puVar4,uVar5);
  if ((int)uVar5 == 0) {
    puVar1 = (uint64_t *)*param_2;
    auStackX_8[0] = 0;
    for (; puVar1 != param_2; puVar1 = (uint64_t *)*puVar1) {
      uVar5 = FUN_1808ddf00(param_1,auStackX_8[0]);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      if (*(int *)(param_1[1] + 0x18) == 0) {
        auStackX_18[0] = *(uint *)(puVar1 + 2);
        uVar5 = (**(code **)**(uint64_t **)(*param_1 + 8))
                          (*(uint64_t **)(*param_1 + 8),auStackX_18,4);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        if (*(int *)(param_1[1] + 0x18) != 0) {
          uVar5 = 0x1c;
          goto LAB_1808a756a;
        }
        uVar5 = FUN_18089a880(*param_1,puVar1 + 3);
        if ((int)uVar5 != 0) goto LAB_1808a756a;
      }
      else {
        uVar5 = 0x1c;
LAB_1808a756a:
        if ((int)uVar5 != 0) {
          return uVar5;
        }
      }
      uVar5 = FUN_1808de160(param_1,auStackX_8);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      auStackX_8[0] = auStackX_8[0] & -param_3;
      if (puVar1 == param_2) break;
    }
    uVar5 = 0;
  }
  return uVar5;
}



uint64_t FUN_1808a74e4(void)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint unaff_EBX;
  int64_t *unaff_RSI;
  uint64_t *unaff_R14;
  int unaff_R15D;
  uint uStack0000000000000050;
  int32_t in_stack_00000060;
  
  puVar1 = (uint64_t *)*unaff_R14;
  uStack0000000000000050 = unaff_EBX;
  do {
    if (puVar1 == unaff_R14) {
      return 0;
    }
    uVar2 = FUN_1808ddf00();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (*(int *)(unaff_RSI[1] + 0x18) == 0) {
      in_stack_00000060 = *(int32_t *)(puVar1 + 2);
      uVar2 = (**(code **)**(uint64_t **)(*unaff_RSI + 8))
                        (*(uint64_t **)(*unaff_RSI + 8),&stack0x00000060,4);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (*(int *)(unaff_RSI[1] + 0x18) != 0) {
        uVar2 = 0x1c;
        goto LAB_1808a756a;
      }
      uVar2 = FUN_18089a880(*unaff_RSI,puVar1 + 3);
      if ((int)uVar2 != 0) goto LAB_1808a756a;
    }
    else {
      uVar2 = 0x1c;
LAB_1808a756a:
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    uVar2 = FUN_1808de160();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uStack0000000000000050 = uStack0000000000000050 & -unaff_R15D;
    if (puVar1 == unaff_R14) {
      return 0;
    }
    puVar1 = (uint64_t *)*puVar1;
  } while( true );
}







