#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part382_sub001.c - 4 个函数

#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part382.c - 4 个函数


// 函数: void FUN_180874760(longlong *param_1)
void FUN_180874760(longlong *param_1)

{
  uint *puVar1;
  longlong lVar2;
  uint64_t *puVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int *piVar9;
  
  lVar2 = param_1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar6 = 0;
  if (*(int *)((longlong)param_1 + 0x24) == 0) {
    lVar7 = param_1[5];
    if (lVar7 != 0) {
      FUN_180768360(lVar7);
    }
    iVar4 = FUN_180744cc0(param_1);
    if ((iVar4 == 0) && (iVar4 = FUN_1808744f0(param_1 + 2), iVar4 == 0)) {
      *(int32_t *)(param_1 + 4) = 0xffffffff;
      *(int32_t *)((longlong)param_1 + 0x24) = 0;
    }
    if (lVar7 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar7);
    }
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar2);
    }
    return;
  }
  iVar4 = (int)param_1[1];
  if (iVar4 != 0) {
    piVar9 = (int *)*param_1;
    uVar8 = uVar6;
    do {
      if (*piVar9 != -1) {
        iVar5 = ((int *)*param_1)[(int)uVar8];
        goto LAB_1808747d2;
      }
      uVar8 = (ulonglong)((int)uVar8 + 1);
      uVar6 = uVar6 + 1;
      piVar9 = piVar9 + 1;
    } while (uVar6 != (longlong)iVar4);
  }
  iVar5 = -1;
LAB_1808747d2:
  lVar2 = param_1[2];
  puVar3 = *(uint64_t **)((longlong)iVar5 * 0x20 + 0x18 + lVar2);
  puVar1 = (uint *)((longlong)iVar5 * 0x20 + lVar2);
  if ((*(int *)((longlong)param_1 + 0x24) != 0) && (iVar4 != 0)) {
    lVar7 = (longlong)(int)((puVar1[3] ^ puVar1[1] ^ *puVar1 ^ puVar1[2]) & iVar4 - 1U);
    piVar9 = (int *)(*param_1 + lVar7 * 4);
    iVar4 = *(int *)(*param_1 + lVar7 * 4);
    while (iVar4 != -1) {
      lVar7 = (longlong)iVar4 * 0x20;
      if ((*(longlong *)(lVar7 + lVar2) == *(longlong *)puVar1) &&
         (*(longlong *)(lVar7 + 8 + lVar2) == *(longlong *)(puVar1 + 2))) {
        iVar4 = *piVar9;
        lVar7 = (longlong)iVar4 * 0x20;
        *(uint64_t *)(lVar7 + 0x18 + lVar2) = 0;
        *piVar9 = *(int *)(lVar7 + 0x10 + lVar2);
        *(int *)(lVar7 + 0x10 + lVar2) = (int)param_1[4];
        *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + -1;
        *(int *)(param_1 + 4) = iVar4;
        break;
      }
      piVar9 = (int *)(lVar2 + 0x10 + lVar7);
      iVar4 = *piVar9;
    }
  }
  (**(code **)*puVar3)(puVar3,0);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar3,&unknown_var_2080_ptr,0x62,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180874940(longlong *param_1)

{
  uint *puVar1;
  uint64_t *puVar2;
  int iVar3;
  longlong lVar4;
  uint64_t uVar5;
  longlong lVar6;
  int *piVar7;
  longlong lStack_30;
  int aiStack_28 [4];
  
  lVar6 = param_1[5];
  if (lVar6 != 0) {
    FUN_180768360(lVar6);
  }
  iVar3 = *(int *)((longlong)param_1 + 0x24);
  if (iVar3 == 0) {
    lVar4 = param_1[5];
    if (lVar4 != 0) {
      FUN_180768360(lVar4);
    }
    uVar5 = FUN_180744cc0(param_1);
    if (((int)uVar5 == 0) && (uVar5 = FUN_1808744f0(param_1 + 2), (int)uVar5 == 0)) {
      *(int32_t *)(param_1 + 4) = 0xffffffff;
      *(int32_t *)((longlong)param_1 + 0x24) = 0;
    }
    if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar4);
    }
    if (lVar6 == 0) {
      return uVar5;
    }
    if (lVar6 != 0) {
      lStack_30 = 0x180768417;
      LeaveCriticalSection();
      return 0;
    }
    return 0x1c;
  }
  lStack_30 = -1;
  aiStack_28[0] = -1;
  FUN_1808741f0(param_1,&lStack_30,aiStack_28);
  puVar2 = *(uint64_t **)((longlong)aiStack_28[0] * 0x20 + 0x18 + param_1[2]);
  puVar1 = (uint *)((longlong)aiStack_28[0] * 0x20 + param_1[2]);
  lStack_30 = *(longlong *)(puVar1 + 2);
  if ((iVar3 != 0) && ((int)param_1[1] != 0)) {
    lVar6 = (longlong)(int)((puVar1[3] ^ puVar1[1] ^ *puVar1 ^ puVar1[2]) & (int)param_1[1] - 1U);
    piVar7 = (int *)(*param_1 + lVar6 * 4);
    iVar3 = *(int *)(*param_1 + lVar6 * 4);
    if (iVar3 != -1) {
      lVar6 = param_1[2];
      do {
        lVar4 = (longlong)iVar3 * 0x20;
        if ((*(longlong *)(lVar4 + lVar6) == *(longlong *)puVar1) &&
           (*(longlong *)(lVar4 + 8 + lVar6) == lStack_30)) {
          iVar3 = *piVar7;
          lVar4 = (longlong)iVar3 * 0x20;
          *(uint64_t *)(lVar4 + 0x18 + lVar6) = 0;
          *piVar7 = *(int *)(lVar4 + 0x10 + lVar6);
          *(int *)(lVar4 + 0x10 + lVar6) = (int)param_1[4];
          *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + -1;
          *(int *)(param_1 + 4) = iVar3;
          break;
        }
        piVar7 = (int *)(lVar6 + 0x10 + lVar4);
        iVar3 = *piVar7;
      } while (iVar3 != -1);
    }
  }
  (**(code **)*puVar2)(puVar2,0);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2,&unknown_var_2080_ptr,0x62,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18087494c(longlong *param_1)

{
  uint *puVar1;
  uint64_t *puVar2;
  int iVar3;
  longlong in_RAX;
  longlong lVar4;
  uint64_t uVar5;
  longlong lVar6;
  int *piVar7;
  uint64_t unaff_RBX;
  longlong unaff_RBP;
  uint64_t unaff_RDI;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  longlong in_stack_00000038;
  int in_stack_00000040;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x10) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x18) = unaff_R15;
  if (unaff_RBP != 0) {
    FUN_180768360();
  }
  iVar3 = *(int *)((longlong)param_1 + 0x24);
  if (iVar3 == 0) {
    lVar6 = param_1[5];
    if (lVar6 != 0) {
      FUN_180768360(lVar6);
    }
    uVar5 = FUN_180744cc0(param_1);
    if (((int)uVar5 == 0) && (uVar5 = FUN_1808744f0(param_1 + 2), (int)uVar5 == 0)) {
      *(int32_t *)(param_1 + 4) = 0xffffffff;
      *(int32_t *)((longlong)param_1 + 0x24) = 0;
    }
    if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar6);
    }
    if (unaff_RBP == 0) {
      return uVar5;
    }
    if (unaff_RBP != 0) {
      in_stack_00000038 = 0x180768417;
      LeaveCriticalSection();
      return 0;
    }
    return 0x1c;
  }
  in_stack_00000038 = 0xffffffffffffffff;
  in_stack_00000040 = -1;
  FUN_1808741f0(param_1,&stack0x00000038,&stack0x00000040);
  puVar2 = *(uint64_t **)((longlong)in_stack_00000040 * 0x20 + 0x18 + param_1[2]);
  puVar1 = (uint *)((longlong)in_stack_00000040 * 0x20 + param_1[2]);
  in_stack_00000038 = *(longlong *)(puVar1 + 2);
  if ((iVar3 != 0) && ((int)param_1[1] != 0)) {
    lVar6 = (longlong)(int)((puVar1[3] ^ puVar1[1] ^ *puVar1 ^ puVar1[2]) & (int)param_1[1] - 1U);
    piVar7 = (int *)(*param_1 + lVar6 * 4);
    iVar3 = *(int *)(*param_1 + lVar6 * 4);
    if (iVar3 != -1) {
      lVar6 = param_1[2];
      do {
        lVar4 = (longlong)iVar3 * 0x20;
        if ((*(longlong *)(lVar4 + lVar6) == *(longlong *)puVar1) &&
           (*(longlong *)(lVar4 + 8 + lVar6) == in_stack_00000038)) {
          iVar3 = *piVar7;
          lVar4 = (longlong)iVar3 * 0x20;
          *(uint64_t *)(lVar4 + 0x18 + lVar6) = 0;
          *piVar7 = *(int *)(lVar4 + 0x10 + lVar6);
          *(int *)(lVar4 + 0x10 + lVar6) = (int)param_1[4];
          *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + -1;
          *(int *)(param_1 + 4) = iVar3;
          break;
        }
        piVar7 = (int *)(lVar6 + 0x10 + lVar4);
        iVar3 = *piVar7;
      } while (iVar3 != -1);
    }
  }
  (**(code **)*puVar2)(puVar2,0);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2,&unknown_var_2080_ptr,0x62,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180874980(int32_t param_1)
void FUN_180874980(int32_t param_1)

{
  uint *puVar1;
  uint64_t *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  longlong *unaff_RBX;
  int unaff_EDI;
  uint64_t unaff_R15;
  longlong lStack0000000000000038;
  int iStack0000000000000040;
  
  lStack0000000000000038 = 0xffffffffffffffff;
  iStack0000000000000040 = -1;
  FUN_1808741f0(param_1,&stack0x00000038,&stack0x00000040);
  puVar2 = *(uint64_t **)((longlong)iStack0000000000000040 * 0x20 + 0x18 + unaff_RBX[2]);
  puVar1 = (uint *)((longlong)iStack0000000000000040 * 0x20 + unaff_RBX[2]);
  lStack0000000000000038 = *(longlong *)(puVar1 + 2);
  if ((unaff_EDI != 0) && ((int)unaff_RBX[1] != 0)) {
    lVar5 = (longlong)(int)((puVar1[3] ^ puVar1[1] ^ *puVar1 ^ puVar1[2]) & (int)unaff_RBX[1] - 1U);
    piVar6 = (int *)(*unaff_RBX + lVar5 * 4);
    iVar3 = *(int *)(*unaff_RBX + lVar5 * 4);
    if (iVar3 != -1) {
      lVar5 = unaff_RBX[2];
      do {
        lVar4 = (longlong)iVar3 * 0x20;
        if ((*(longlong *)(lVar4 + lVar5) == *(longlong *)puVar1) &&
           (*(longlong *)(lVar4 + 8 + lVar5) == lStack0000000000000038)) {
          iVar3 = *piVar6;
          lVar4 = (longlong)iVar3 * 0x20;
          *(uint64_t *)(lVar4 + 0x18 + lVar5) = unaff_R15;
          *piVar6 = *(int *)(lVar4 + 0x10 + lVar5);
          *(int *)(lVar4 + 0x10 + lVar5) = (int)unaff_RBX[4];
          *(int *)((longlong)unaff_RBX + 0x24) = *(int *)((longlong)unaff_RBX + 0x24) + -1;
          *(int *)(unaff_RBX + 4) = iVar3;
          break;
        }
        piVar6 = (int *)(lVar5 + 0x10 + lVar4);
        iVar3 = *piVar6;
      } while (iVar3 != -1);
    }
  }
  (**(code **)*puVar2)(puVar2,0);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2,&unknown_var_2080_ptr,0x62,1);
}



uint64_t FUN_180874aba(void)

{
  longlong lVar1;
  uint64_t uVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  char unaff_R14B;
  int32_t unaff_R15D;
  
  lVar1 = *(longlong *)(unaff_RBX + 0x28);
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  uVar2 = FUN_180744cc0();
  if ((int)uVar2 == 0) {
    uVar2 = FUN_1808744f0(unaff_RBX + 0x10);
    if ((int)uVar2 == 0) {
      *(int32_t *)(unaff_RBX + 0x20) = 0xffffffff;
      *(int32_t *)(unaff_RBX + 0x24) = unaff_R15D;
    }
  }
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  if (unaff_R14B == '\0') {
    return uVar2;
  }
  if (unaff_RBP == 0) {
    return 0x1c;
  }
  LeaveCriticalSection();
  return 0;
}






// 函数: void FUN_180874afe(void)
void FUN_180874afe(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



int32_t FUN_180874b18(void)

{
  longlong unaff_RBP;
  uint64_t uStack0000000000000038;
  
  if (unaff_RBP == 0) {
    return 0x1c;
  }
  uStack0000000000000038 = 0x180768417;
  LeaveCriticalSection();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180874b30(longlong param_1)

{
  uint uVar1;
  uint64_t *puVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  uint64_t uVar6;
  uint64_t uStack_20;
  int aiStack_18 [4];
  
  if ((*(longlong *)(param_1 + 0x98) != 0) && (*(longlong *)(param_1 + 0xb0) != 0)) {
    uVar6 = FUN_18088e8b0();
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    puVar2 = *(uint64_t **)(param_1 + 0xb0);
    if (puVar2 != (uint64_t *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2,&unknown_var_5856_ptr,0x3bd,1);
    }
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    uVar6 = FUN_18088d850();
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    lVar3 = *(longlong *)(param_1 + 0x98);
    if (lVar3 != 0) {
      FUN_18088ce50(lVar3);
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar3,&unknown_var_5856_ptr,0x3c3,1);
    }
  }
  if (*(longlong *)(param_1 + 0xac8) != 0) {
    uVar6 = FUN_1808dfd20();
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    lVar3 = *(longlong *)(param_1 + 0xac8);
    if (lVar3 != 0) {
      *(void **)(lVar3 + 0x50) = &unknown_var_8408_ptr;
      FUN_180872540(lVar3 + 0x30);
      FUN_180872540(lVar3 + 0x10);
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar3,&unknown_var_5856_ptr,0x3ca,1);
    }
  }
  if ((((*(longlong **)(param_1 + 0x88) == (longlong *)0x0) ||
       (uVar6 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x28))(), (int)uVar6 == 0)) &&
      ((cVar5 = func_0x0001808664e0(*(uint64_t *)(param_1 + 0x80),param_1), cVar5 == '\0' ||
       (uVar6 = func_0x000180867370(*(uint64_t *)(param_1 + 0x80),param_1), (int)uVar6 == 0)))) &&
     (uVar6 = FUN_1808e2920(*(uint64_t *)(param_1 + 0xac0)), (int)uVar6 == 0)) {
    *(uint64_t *)(param_1 + 0xac0) = 0;
    lVar3 = *(longlong *)(param_1 + 0x8c0);
    if (lVar3 != 0) {
      FUN_180768360(lVar3);
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar3);
    }
    do {
      lVar3 = *(longlong *)(param_1 + 0x8c0);
      if (lVar3 != 0) {
        FUN_180768360(lVar3);
      }
      if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar3);
      }
      if (*(int *)(param_1 + 0x8bc) == 0) {
        uVar6 = FUN_1808bcf40(*(uint64_t *)(param_1 + 0x90));
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        lVar3 = *(longlong *)(param_1 + 0x90);
        if (lVar3 != 0) {
          FUN_1808bbb80(lVar3);
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar3,&unknown_var_5856_ptr,0x3f4,1);
        }
        if (*(longlong *)(param_1 + 0x8c8) != 0) {
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(param_1 + 0x8c8),
                        &unknown_var_5856_ptr,0x3f5,1);
        }
        if (*(longlong *)(param_1 + 0x8d0) != 0) {
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(param_1 + 0x8d0),
                        &unknown_var_5856_ptr,0x3f6,1);
        }
        if (*(longlong *)(param_1 + 0x8d8) != 0) {
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(param_1 + 0x8d8),
                        &unknown_var_5856_ptr,0x3f7,1);
        }
        if (*(longlong *)(param_1 + 0x8e0) != 0) {
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(param_1 + 0x8e0),
                        &unknown_var_5856_ptr,0x3f8,1);
        }
        if (*(longlong *)(param_1 + 0x8e8) != 0) {
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(param_1 + 0x8e8),
                        &unknown_var_5856_ptr,0x3f9,1);
        }
        if (*(longlong *)(param_1 + 0x8f0) != 0) {
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(param_1 + 0x8f0),
                        &unknown_var_5856_ptr,0x3fa,1);
        }
        if (*(longlong *)(param_1 + 0x8f8) != 0) {
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(param_1 + 0x8f8),
                        &unknown_var_5856_ptr,0x3fb,1);
        }
        if (*(longlong *)(param_1 + 0x900) != 0) {
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(param_1 + 0x900),
                        &unknown_var_5856_ptr,0x3fc,1);
        }
        if (*(longlong *)(param_1 + 0x908) != 0) {
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(param_1 + 0x908),
                        &unknown_var_5856_ptr,0x3fd,1);
        }
        if (*(longlong *)(param_1 + 0x910) != 0) {
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(param_1 + 0x910),
                        &unknown_var_5856_ptr,0x3fe,1);
        }
        if (*(longlong *)(param_1 + 0x918) != 0) {
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(param_1 + 0x918),
                        &unknown_var_5856_ptr,0x3ff,1);
        }
        if (*(longlong *)(param_1 + 0xa60) != 0) {
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(param_1 + 0xa60),
                        &unknown_var_5856_ptr,0x400,1);
        }
        if (*(longlong *)(param_1 + 0xa68) != 0) {
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(param_1 + 0xa68),
                        &unknown_var_5856_ptr,0x401,1);
        }
        if (*(longlong *)(param_1 + 0xa78) == 0) {
          if (*(longlong *)(param_1 + 0xa80) != 0) {
                    // WARNING: Subroutine does not return
            FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(param_1 + 0xa80),
                          &unknown_var_5856_ptr,0x403,1);
          }
          if (*(longlong *)(param_1 + 0xa88) != 0) {
                    // WARNING: Subroutine does not return
            FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(param_1 + 0xa88),
                          &unknown_var_5856_ptr,0x404,1);
          }
          if (*(longlong *)(param_1 + 0xa90) != 0) {
                    // WARNING: Subroutine does not return
            FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(param_1 + 0xa90),
                          &unknown_var_5856_ptr,0x405,1);
          }
          if (*(longlong *)(param_1 + 0xa98) != 0) {
                    // WARNING: Subroutine does not return
            FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(param_1 + 0xa98),
                          &unknown_var_5856_ptr,0x406,1);
          }
          if (*(longlong *)(param_1 + 0xa70) != 0) {
                    // WARNING: Subroutine does not return
            FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(param_1 + 0xa70),
                          &unknown_var_5856_ptr,0x407,1);
          }
          if (*(longlong *)(param_1 + 0xaa0) != 0) {
                    // WARNING: Subroutine does not return
            FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(param_1 + 0xaa0),
                          &unknown_var_5856_ptr,0x408,1);
          }
          puVar2 = *(uint64_t **)(param_1 + 800);
          if (puVar2 != (uint64_t *)0x0) {
            (**(code **)*puVar2)(puVar2,0);
                    // WARNING: Subroutine does not return
            FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar2,&unknown_var_5856_ptr,0x409,1);
          }
          if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x80) + 0x10))();
            *(uint64_t *)(param_1 + 0x80) = 0;
          }
          if (*(longlong *)(param_1 + 0xb8) != 0) {
            uVar6 = FUN_1808e5eb0();
            if ((int)uVar6 != 0) {
              return uVar6;
            }
            *(uint64_t *)(param_1 + 0xb8) = 0;
          }
          plVar4 = *(longlong **)(param_1 + 0xa8);
          if (plVar4 == (longlong *)0x0) {
            *(uint64_t *)(param_1 + 0xa8) = 0;
            if (*(longlong *)(param_1 + 0x78) != 0) {
              FUN_18073b520();
              *(uint64_t *)(param_1 + 0x78) = 0;
            }
            uVar1 = *(uint *)(param_1 + 0x18);
            if (uVar1 != 0xffffffff) {
              if ((7 < uVar1) || (*(longlong *)((longlong)(int)uVar1 * 8 + 0x180c4eab0) != param_1))
              {
                return 0x1c;
              }
              uVar6 = FUN_18088c410();
              if ((int)uVar6 != 0) {
                return uVar6;
              }
              *(uint64_t *)((longlong)*(int *)(param_1 + 0x18) * 8 + 0x180c4eab0) = 0;
              *(int32_t *)(param_1 + 0x18) = 0xffffffff;
            }
            if (*(longlong *)(param_1 + 0xa0) != 0) {
              uVar6 = FUN_180768380(*(longlong *)(param_1 + 0xa0),0);
              if ((int)uVar6 != 0) {
                return uVar6;
              }
              *(uint64_t *)(param_1 + 0xa0) = 0;
            }
            func_0x00018088a120(param_1);
            if (*(longlong *)(param_1 + 0x2d8) == 0) {
              return 0;
            }
                    // WARNING: Subroutine does not return
            FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(param_1 + 0x2d8),
                          &unknown_var_5856_ptr,0x432,1);
          }
          (**(code **)(*plVar4 + 0x60))(plVar4,0);
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar4,&unknown_var_5856_ptr,0x417,1);
        }
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(param_1 + 0xa78),
                      &unknown_var_5856_ptr,0x402,1);
      }
      uStack_20 = 0xffffffffffffffff;
      aiStack_18[0] = -1;
      FUN_1808741f0(param_1 + 0x898,&uStack_20,aiStack_18);
      uVar6 = FUN_18088aca0(param_1,*(uint64_t *)
                                     ((longlong)aiStack_18[0] * 0x20 +
                                      *(longlong *)(param_1 + 0x8a8) + 0x18));
    } while ((int)uVar6 == 0);
  }
  return uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180874ce3(void)

{
  uint uVar1;
  longlong lVar2;
  uint64_t *puVar3;
  longlong *plVar4;
  uint64_t uVar5;
  longlong unaff_RBX;
  longlong unaff_RDI;
  uint64_t unaff_R14;
  uint64_t in_stack_00000038;
  int32_t in_stack_00000040;
  
  if (unaff_RDI != 0) {
    FUN_180768360();
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  while( true ) {
    lVar2 = *(longlong *)(unaff_RBX + 0x8c0);
    if (lVar2 != 0) {
      FUN_180768360(lVar2);
    }
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar2);
    }
    if (*(int *)(unaff_RBX + 0x8bc) == 0) break;
    in_stack_00000038 = 0xffffffffffffffff;
    in_stack_00000040 = 0xffffffff;
    FUN_1808741f0(unaff_RBX + 0x898,&stack0x00000038,&stack0x00000040);
    uVar5 = FUN_18088aca0();
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  uVar5 = FUN_1808bcf40(*(uint64_t *)(unaff_RBX + 0x90));
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  lVar2 = *(longlong *)(unaff_RBX + 0x90);
  if (lVar2 != 0) {
    FUN_1808bbb80(lVar2);
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar2,&unknown_var_5856_ptr,0x3f4,1);
  }
  if (*(longlong *)(unaff_RBX + 0x8c8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(unaff_RBX + 0x8c8),
                  &unknown_var_5856_ptr,0x3f5,1);
  }
  if (*(longlong *)(unaff_RBX + 0x8d0) != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(unaff_RBX + 0x8d0),
                  &unknown_var_5856_ptr,0x3f6,1);
  }
  if (*(longlong *)(unaff_RBX + 0x8d8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(unaff_RBX + 0x8d8),
                  &unknown_var_5856_ptr,0x3f7,1);
  }
  if (*(longlong *)(unaff_RBX + 0x8e0) != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(unaff_RBX + 0x8e0),
                  &unknown_var_5856_ptr,0x3f8,1);
  }
  if (*(longlong *)(unaff_RBX + 0x8e8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(unaff_RBX + 0x8e8),
                  &unknown_var_5856_ptr,0x3f9,1);
  }
  if (*(longlong *)(unaff_RBX + 0x8f0) != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(unaff_RBX + 0x8f0),
                  &unknown_var_5856_ptr,0x3fa,1);
  }
  if (*(longlong *)(unaff_RBX + 0x8f8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(unaff_RBX + 0x8f8),
                  &unknown_var_5856_ptr,0x3fb,1);
  }
  if (*(longlong *)(unaff_RBX + 0x900) != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(unaff_RBX + 0x900),
                  &unknown_var_5856_ptr,0x3fc,1);
  }
  if (*(longlong *)(unaff_RBX + 0x908) != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(unaff_RBX + 0x908),
                  &unknown_var_5856_ptr,0x3fd,1);
  }
  if (*(longlong *)(unaff_RBX + 0x910) != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(unaff_RBX + 0x910),
                  &unknown_var_5856_ptr,0x3fe,1);
  }
  if (*(longlong *)(unaff_RBX + 0x918) != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(unaff_RBX + 0x918),
                  &unknown_var_5856_ptr,0x3ff,1);
  }
  if (*(longlong *)(unaff_RBX + 0xa60) == 0) {
    if (*(longlong *)(unaff_RBX + 0xa68) != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(unaff_RBX + 0xa68),
                    &unknown_var_5856_ptr,0x401,1);
    }
    if (*(longlong *)(unaff_RBX + 0xa78) != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(unaff_RBX + 0xa78),
                    &unknown_var_5856_ptr,0x402,1);
    }
    if (*(longlong *)(unaff_RBX + 0xa80) != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(unaff_RBX + 0xa80),
                    &unknown_var_5856_ptr,0x403,1);
    }
    if (*(longlong *)(unaff_RBX + 0xa88) != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(unaff_RBX + 0xa88),
                    &unknown_var_5856_ptr,0x404,1);
    }
    if (*(longlong *)(unaff_RBX + 0xa90) != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(unaff_RBX + 0xa90),
                    &unknown_var_5856_ptr,0x405,1);
    }
    if (*(longlong *)(unaff_RBX + 0xa98) != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(unaff_RBX + 0xa98),
                    &unknown_var_5856_ptr,0x406,1);
    }
    if (*(longlong *)(unaff_RBX + 0xa70) != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(unaff_RBX + 0xa70),
                    &unknown_var_5856_ptr,0x407,1);
    }
    if (*(longlong *)(unaff_RBX + 0xaa0) == 0) {
      puVar3 = *(uint64_t **)(unaff_RBX + 800);
      if (puVar3 != (uint64_t *)0x0) {
        (**(code **)*puVar3)(puVar3,0);
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar3,&unknown_var_5856_ptr,0x409,1);
      }
      if (*(longlong **)(unaff_RBX + 0x80) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(unaff_RBX + 0x80) + 0x10))();
        *(uint64_t *)(unaff_RBX + 0x80) = unaff_R14;
      }
      if (*(longlong *)(unaff_RBX + 0xb8) != 0) {
        uVar5 = FUN_1808e5eb0();
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        *(uint64_t *)(unaff_RBX + 0xb8) = unaff_R14;
      }
      plVar4 = *(longlong **)(unaff_RBX + 0xa8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x60))(plVar4,0);
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar4,&unknown_var_5856_ptr,0x417,1);
      }
      *(uint64_t *)(unaff_RBX + 0xa8) = unaff_R14;
      if (*(longlong *)(unaff_RBX + 0x78) != 0) {
        FUN_18073b520();
        *(uint64_t *)(unaff_RBX + 0x78) = unaff_R14;
      }
      uVar1 = *(uint *)(unaff_RBX + 0x18);
      if (uVar1 != 0xffffffff) {
        if ((7 < uVar1) || (*(longlong *)((longlong)(int)uVar1 * 8 + 0x180c4eab0) != unaff_RBX)) {
          return 0x1c;
        }
        uVar5 = FUN_18088c410();
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        *(uint64_t *)((longlong)*(int *)(unaff_RBX + 0x18) * 8 + 0x180c4eab0) = unaff_R14;
        *(int32_t *)(unaff_RBX + 0x18) = 0xffffffff;
      }
      if (*(longlong *)(unaff_RBX + 0xa0) != 0) {
        uVar5 = FUN_180768380(*(longlong *)(unaff_RBX + 0xa0),0);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        *(uint64_t *)(unaff_RBX + 0xa0) = unaff_R14;
      }
      func_0x00018088a120();
      if (*(longlong *)(unaff_RBX + 0x2d8) == 0) {
        return 0;
      }
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(unaff_RBX + 0x2d8),
                    &unknown_var_5856_ptr,0x432,1);
    }
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(unaff_RBX + 0xaa0),
                  &unknown_var_5856_ptr,0x408,1);
  }
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(unaff_RBX + 0xa60),
                &unknown_var_5856_ptr,0x400,1);
}






