#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part032.c - 6 个函数

// 函数: void FUN_1808babd0(longlong param_1,uint64_t param_2,int32_t param_3)
void FUN_1808babd0(longlong param_1,uint64_t param_2,int32_t param_3)

{
  int iVar1;
  
  iVar1 = FUN_180744cc0();
  if (iVar1 == 0) {
    iVar1 = FUN_180744e20(param_1 + 0x10);
    if (iVar1 == 0) {
      *(int32_t *)(param_1 + 0x20) = 0xffffffff;
      *(int32_t *)(param_1 + 0x24) = 0;
    }
  }
  FUN_180744e20(param_1 + 0x10);
  FUN_180744cc0(param_1);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,param_2,param_3,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808bac50(longlong param_1,uint64_t param_2,int32_t param_3)
void FUN_1808bac50(longlong param_1,uint64_t param_2,int32_t param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int32_t *puVar4;
  
  uVar3 = *(uint *)(param_1 + 0x14);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if (0 < *(int *)(param_1 + 0x10)) goto LAB_1808bad0c;
    if ((0 < (int)uVar3) && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(param_1 + 8),
                    &unknown_var_8432_ptr,0x100,1);
    }
    *(uint64_t *)(param_1 + 8) = 0;
    uVar3 = 0;
    *(int32_t *)(param_1 + 0x14) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < 0) {
    puVar4 = (int32_t *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 4);
    lVar2 = (longlong)-iVar1;
    if (iVar1 < 0) {
      for (; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      uVar3 = *(uint *)(param_1 + 0x14);
    }
  }
  *(int32_t *)(param_1 + 0x10) = 0;
  if (0 < (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) {
    FUN_180861ef0(param_1 + 8,0);
  }
LAB_1808bad0c:
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,param_2,param_3,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808bb660(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  uint uVar5;
  
  lVar1 = param_1[5];
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  FUN_18084f040(param_1 + 6);
  FUN_18084f040(param_1);
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  FUN_18084f040(param_1 + 6);
  iVar3 = FUN_180744cc0(param_1 + 6);
  if ((iVar3 == 0) && (iVar3 = FUN_1808744f0(param_1 + 8), iVar3 == 0)) {
    *(int32_t *)(param_1 + 10) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x54) = 0;
  }
  FUN_1808744f0(param_1 + 8);
  FUN_180744cc0(param_1 + 6);
  FUN_18084f040(param_1);
  iVar3 = FUN_180744cc0(param_1);
  if ((iVar3 == 0) && (iVar3 = FUN_1808744f0(param_1 + 2), iVar3 == 0)) {
    *(int32_t *)(param_1 + 4) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x24) = 0;
  }
  FUN_1808744f0(param_1 + 2);
  uVar5 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return 0x1c;
    }
    if ((0 < (int)uVar5) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    uVar5 = 0;
    *(int32_t *)((longlong)param_1 + 0xc) = 0;
  }
  *(int32_t *)(param_1 + 1) = 0;
  uVar2 = -uVar5;
  if (-1 < (int)uVar5) {
    uVar2 = uVar5;
  }
  if ((0 < (int)uVar2) && (uVar4 = FUN_180747e10(param_1,0), (int)uVar4 != 0)) {
    return uVar4;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808bb730(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  uint uVar5;
  
  lVar1 = param_1[5];
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  FUN_18084f2d0(param_1 + 6);
  FUN_18084f2d0(param_1);
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  FUN_18084f2d0(param_1 + 6);
  iVar3 = FUN_180744cc0(param_1 + 6);
  if ((iVar3 == 0) && (iVar3 = FUN_1808744f0(param_1 + 8), iVar3 == 0)) {
    *(int32_t *)(param_1 + 10) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x54) = 0;
  }
  FUN_1808744f0(param_1 + 8);
  FUN_180744cc0(param_1 + 6);
  FUN_18084f2d0(param_1);
  iVar3 = FUN_180744cc0(param_1);
  if ((iVar3 == 0) && (iVar3 = FUN_1808744f0(param_1 + 2), iVar3 == 0)) {
    *(int32_t *)(param_1 + 4) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x24) = 0;
  }
  FUN_1808744f0(param_1 + 2);
  uVar5 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return 0x1c;
    }
    if ((0 < (int)uVar5) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    uVar5 = 0;
    *(int32_t *)((longlong)param_1 + 0xc) = 0;
  }
  *(int32_t *)(param_1 + 1) = 0;
  uVar2 = -uVar5;
  if (-1 < (int)uVar5) {
    uVar2 = uVar5;
  }
  if ((0 < (int)uVar2) && (uVar4 = FUN_180747e10(param_1,0), (int)uVar4 != 0)) {
    return uVar4;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808bb800(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  uint uVar5;
  
  lVar1 = param_1[5];
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  FUN_1808bcca0(param_1 + 6);
  FUN_1808bcca0(param_1);
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  FUN_1808bcca0(param_1 + 6);
  iVar3 = FUN_180744cc0(param_1 + 6);
  if ((iVar3 == 0) && (iVar3 = FUN_1808744f0(param_1 + 8), iVar3 == 0)) {
    *(int32_t *)(param_1 + 10) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x54) = 0;
  }
  FUN_1808744f0(param_1 + 8);
  FUN_180744cc0(param_1 + 6);
  FUN_1808bcca0(param_1);
  iVar3 = FUN_180744cc0(param_1);
  if ((iVar3 == 0) && (iVar3 = FUN_1808744f0(param_1 + 2), iVar3 == 0)) {
    *(int32_t *)(param_1 + 4) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x24) = 0;
  }
  FUN_1808744f0(param_1 + 2);
  uVar5 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return 0x1c;
    }
    if ((0 < (int)uVar5) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    uVar5 = 0;
    *(int32_t *)((longlong)param_1 + 0xc) = 0;
  }
  *(int32_t *)(param_1 + 1) = 0;
  uVar2 = -uVar5;
  if (-1 < (int)uVar5) {
    uVar2 = uVar5;
  }
  if ((0 < (int)uVar2) && (uVar4 = FUN_180747e10(param_1,0), (int)uVar4 != 0)) {
    return uVar4;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808bb8d0(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  uint uVar5;
  
  lVar1 = param_1[5];
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  FUN_18084f560(param_1 + 6);
  FUN_18084f560(param_1);
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  FUN_18084f560(param_1 + 6);
  iVar3 = FUN_180744cc0(param_1 + 6);
  if ((iVar3 == 0) && (iVar3 = FUN_1808744f0(param_1 + 8), iVar3 == 0)) {
    *(int32_t *)(param_1 + 10) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x54) = 0;
  }
  FUN_1808744f0(param_1 + 8);
  FUN_180744cc0(param_1 + 6);
  FUN_18084f560(param_1);
  iVar3 = FUN_180744cc0(param_1);
  if ((iVar3 == 0) && (iVar3 = FUN_1808744f0(param_1 + 2), iVar3 == 0)) {
    *(int32_t *)(param_1 + 4) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x24) = 0;
  }
  FUN_1808744f0(param_1 + 2);
  uVar5 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return 0x1c;
    }
    if ((0 < (int)uVar5) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    uVar5 = 0;
    *(int32_t *)((longlong)param_1 + 0xc) = 0;
  }
  *(int32_t *)(param_1 + 1) = 0;
  uVar2 = -uVar5;
  if (-1 < (int)uVar5) {
    uVar2 = uVar5;
  }
  if ((0 < (int)uVar2) && (uVar4 = FUN_180747e10(param_1,0), (int)uVar4 != 0)) {
    return uVar4;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808bb9a0(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  uint uVar4;
  
  iVar2 = FUN_180744cc0();
  if ((iVar2 == 0) && (iVar2 = FUN_180744e20(param_1 + 2), iVar2 == 0)) {
    *(int32_t *)(param_1 + 4) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x24) = 0;
  }
  FUN_180744e20(param_1 + 2);
  uVar4 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return 0x1c;
    }
    if ((0 < (int)uVar4) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    uVar4 = 0;
    *(int32_t *)((longlong)param_1 + 0xc) = 0;
  }
  *(int32_t *)(param_1 + 1) = 0;
  uVar1 = -uVar4;
  if (-1 < (int)uVar4) {
    uVar1 = uVar4;
  }
  if ((0 < (int)uVar1) && (uVar3 = FUN_180747e10(param_1,0), (int)uVar3 != 0)) {
    return uVar3;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808bb9e0(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  longlong lVar5;
  uint uVar6;
  uint64_t uStack_30;
  int aiStack_28 [4];
  
  uStack_30 = 0xffffffffffffffff;
  aiStack_28[0] = -1;
  FUN_1807d1650(param_1,&uStack_30,aiStack_28);
  if (aiStack_28[0] == -1) {
    if (param_1[5] != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1[5],&unknown_var_8432_ptr,0x100,1);
    }
    param_1[6] = 0;
    *(int32_t *)(param_1 + 7) = 0;
    iVar3 = FUN_180744cc0(param_1);
    if ((iVar3 == 0) && (iVar3 = FUN_180744e20(param_1 + 2), iVar3 == 0)) {
      *(int32_t *)(param_1 + 4) = 0xffffffff;
      *(int32_t *)((longlong)param_1 + 0x24) = 0;
    }
    FUN_180744e20(param_1 + 2);
    uVar6 = *(uint *)((longlong)param_1 + 0xc);
    if ((int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f)) < 0) {
      if (0 < (int)param_1[1]) {
        return 0x1c;
      }
      if ((0 < (int)uVar6) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100);
      }
      *param_1 = 0;
      uVar6 = 0;
      *(int32_t *)((longlong)param_1 + 0xc) = 0;
    }
    *(int32_t *)(param_1 + 1) = 0;
    uVar2 = -uVar6;
    if (-1 < (int)uVar6) {
      uVar2 = uVar6;
    }
    if (((int)uVar2 < 1) || (uVar4 = FUN_180747e10(param_1,0), (int)uVar4 == 0)) {
      uVar4 = 0;
    }
    return uVar4;
  }
  lVar1 = *(longlong *)(param_1[2] + 8 + (longlong)aiStack_28[0] * 0x10);
  if ((aiStack_28[0] == -1) || (*(int *)(param_1[2] + 4 + (longlong)aiStack_28[0] * 0x10) == -1)) {
    iVar3 = 0;
    if ((int)uStack_30 != -1) {
      iVar3 = (int)uStack_30 + 1;
    }
    if (iVar3 != (int)param_1[1]) {
      lVar5 = (longlong)iVar3;
      do {
        if (*(int *)(*param_1 + lVar5 * 4) != -1) break;
        lVar5 = lVar5 + 1;
      } while (lVar5 != (int)param_1[1]);
    }
  }
  (**(code **)(*(longlong *)(lVar1 + 8) + 0x28))(lVar1 + 8,0);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&unknown_var_2688_ptr,0x159,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808bb9ee(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  longlong in_RAX;
  longlong lVar5;
  uint uVar6;
  uint64_t unaff_RDI;
  longlong *in_stack_00000030;
  int in_stack_00000038;
  int in_stack_00000040;
  
  *(uint64_t *)(in_RAX + 0x18) = unaff_RDI;
  *(longlong **)(in_RAX + -0x38) = param_1;
  *(uint64_t *)(in_RAX + -0x30) = 0xffffffffffffffff;
  *(int32_t *)(in_RAX + -0x28) = 0xffffffff;
  FUN_1807d1650(param_1,in_RAX + -0x30);
  if (in_stack_00000040 == -1) {
    if (param_1[5] != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1[5],&unknown_var_8432_ptr,0x100,1);
    }
    param_1[6] = 0;
    *(int32_t *)(param_1 + 7) = 0;
    iVar3 = FUN_180744cc0(param_1);
    if ((iVar3 == 0) && (iVar3 = FUN_180744e20(param_1 + 2), iVar3 == 0)) {
      *(int32_t *)(param_1 + 4) = 0xffffffff;
      *(int32_t *)((longlong)param_1 + 0x24) = 0;
    }
    FUN_180744e20(param_1 + 2);
    uVar6 = *(uint *)((longlong)param_1 + 0xc);
    if ((int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f)) < 0) {
      if (0 < (int)param_1[1]) {
        return 0x1c;
      }
      if ((0 < (int)uVar6) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100);
      }
      *param_1 = 0;
      uVar6 = 0;
      *(int32_t *)((longlong)param_1 + 0xc) = 0;
    }
    *(int32_t *)(param_1 + 1) = 0;
    uVar2 = -uVar6;
    if (-1 < (int)uVar6) {
      uVar2 = uVar6;
    }
    if (((int)uVar2 < 1) || (uVar4 = FUN_180747e10(param_1,0), (int)uVar4 == 0)) {
      uVar4 = 0;
    }
    return uVar4;
  }
  lVar1 = *(longlong *)(in_stack_00000030[2] + 8 + (longlong)in_stack_00000040 * 0x10);
  if ((in_stack_00000040 == -1) ||
     (*(int *)(in_stack_00000030[2] + 4 + (longlong)in_stack_00000040 * 0x10) == -1)) {
    iVar3 = 0;
    if (in_stack_00000038 != -1) {
      iVar3 = in_stack_00000038 + 1;
    }
    if (iVar3 != (int)in_stack_00000030[1]) {
      lVar5 = (longlong)iVar3;
      do {
        if (*(int *)(*in_stack_00000030 + lVar5 * 4) != -1) break;
        lVar5 = lVar5 + 1;
      } while (lVar5 != (int)in_stack_00000030[1]);
    }
  }
  (**(code **)(*(longlong *)(lVar1 + 8) + 0x28))(lVar1 + 8,0);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&unknown_var_2688_ptr,0x159,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808bba21(void)
void FUN_1808bba21(void)

{
  longlong lVar1;
  longlong lVar2;
  int unaff_EDI;
  int unaff_R15D;
  longlong *in_stack_00000030;
  int in_stack_00000038;
  
  lVar1 = *(longlong *)(in_stack_00000030[2] + 8 + (longlong)unaff_EDI * 0x10);
  if ((unaff_EDI == -1) || (*(int *)(in_stack_00000030[2] + 4 + (longlong)unaff_EDI * 0x10) == -1))
  {
    if (in_stack_00000038 != -1) {
      unaff_R15D = in_stack_00000038 + 1;
    }
    if (unaff_R15D != (int)in_stack_00000030[1]) {
      lVar2 = (longlong)unaff_R15D;
      do {
        if (*(int *)(*in_stack_00000030 + lVar2 * 4) != -1) break;
        lVar2 = lVar2 + 1;
      } while (lVar2 != (int)in_stack_00000030[1]);
    }
  }
  (**(code **)(*(longlong *)(lVar1 + 8) + 0x28))(lVar1 + 8,0);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&unknown_var_2688_ptr,0x159,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808bbae8(void)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  uint uVar4;
  longlong *unaff_RSI;
  longlong unaff_R15;
  
  if (unaff_RSI[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),unaff_RSI[5],&unknown_var_8432_ptr,0x100,1);
  }
  unaff_RSI[6] = unaff_R15;
  *(int *)(unaff_RSI + 7) = (int)unaff_R15;
  iVar2 = FUN_180744cc0();
  if ((iVar2 == 0) && (iVar2 = FUN_180744e20(unaff_RSI + 2), iVar2 == 0)) {
    *(int32_t *)(unaff_RSI + 4) = 0xffffffff;
    *(int *)((longlong)unaff_RSI + 0x24) = (int)unaff_R15;
  }
  FUN_180744e20(unaff_RSI + 2);
  uVar4 = *(uint *)((longlong)unaff_RSI + 0xc);
  if ((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) < 0) {
    if (0 < (int)unaff_RSI[1]) {
      return 0x1c;
    }
    if ((0 < (int)uVar4) && (*unaff_RSI != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RSI,&unknown_var_8432_ptr,0x100);
    }
    *unaff_RSI = 0;
    uVar4 = 0;
    *(int32_t *)((longlong)unaff_RSI + 0xc) = 0;
  }
  *(int32_t *)(unaff_RSI + 1) = 0;
  uVar1 = -uVar4;
  if (-1 < (int)uVar4) {
    uVar1 = uVar4;
  }
  if ((0 < (int)uVar1) && (uVar3 = FUN_180747e10(), (int)uVar3 != 0)) {
    return uVar3;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808bbaf9(uint64_t param_1,uint64_t param_2)
void FUN_1808bbaf9(uint64_t param_1,uint64_t param_2)

{
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&unknown_var_8432_ptr,0x100,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808bbb66(void)
void FUN_1808bbb66(void)

{
  longlong unaff_RBP;
  
  (**(code **)(*(longlong *)(unaff_RBP + 8) + 0x28))(unaff_RBP + 8,0);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808bbb80(uint64_t *param_1)
void FUN_1808bbb80(uint64_t *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  
  *param_1 = &unknown_var_2560_ptr;
  FUN_1808bcf40();
  FUN_18085dbf0(param_1 + 0xf5);
  plVar8 = (longlong *)0x0;
  lVar9 = param_1[0xa6];
  if (lVar9 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar9,&unknown_var_8432_ptr,0x100,1);
  }
  param_1[0xa7] = 0;
  lVar9 = 3;
  *(int32_t *)(param_1 + 0xa8) = 0;
  plVar3 = param_1 + 0xa6;
  do {
    lVar7 = plVar3[-2];
    plVar2 = plVar3 + -2;
    lVar9 = lVar9 + -1;
    plVar5 = (longlong *)(lVar7 + -0x20);
    if (lVar7 == 0) {
      plVar5 = plVar8;
    }
    plVar4 = plVar8;
    if (plVar5 != (longlong *)0x0) {
      plVar4 = plVar5 + 4;
    }
    if (plVar4 != plVar2) {
      do {
        if (plVar4 == plVar2) break;
        lVar7 = *plVar4;
        plVar5 = (longlong *)(lVar7 + -0x20);
        if (lVar7 == 0) {
          plVar5 = plVar8;
        }
        plVar6 = plVar8;
        if (plVar5 != (longlong *)0x0) {
          plVar6 = plVar5 + 4;
        }
        *(longlong *)plVar4[1] = lVar7;
        *(longlong *)(*plVar4 + 8) = plVar4[1];
        plVar4[1] = (longlong)plVar4;
        *plVar4 = (longlong)plVar4;
        plVar4 = plVar6;
      } while (plVar6 != plVar2);
      lVar7 = *plVar2;
    }
    *(longlong *)plVar3[-1] = lVar7;
    *(longlong *)(*plVar2 + 8) = plVar3[-1];
    plVar3[-1] = (longlong)plVar2;
    *plVar2 = (longlong)plVar2;
    *(longlong **)plVar3[-1] = plVar2;
    *(longlong *)(*plVar2 + 8) = plVar3[-1];
    plVar3[-1] = (longlong)plVar2;
    *plVar2 = (longlong)plVar2;
    plVar3 = plVar2;
  } while (lVar9 != 0);
  if (param_1[0x9b] != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1[0x9b],&unknown_var_8432_ptr,0x100,1);
  }
  param_1[0x9c] = 0;
  *(int32_t *)(param_1 + 0x9d) = 0;
  func_0x00018085deb0(param_1 + 0x95);
  FUN_1808bceb0(param_1 + 0x90);
  FUN_1807d3160(param_1 + 0x90);
  FUN_1808bceb0(param_1 + 0x8b);
  FUN_1807d3160(param_1 + 0x8b);
  FUN_1808bceb0(param_1 + 0x86);
  FUN_1807d3160(param_1 + 0x86);
  FUN_1808bceb0(param_1 + 0x81);
  FUN_1807d3160(param_1 + 0x81);
  FUN_1808bceb0(param_1 + 0x7c);
  FUN_1807d3160(param_1 + 0x7c);
  func_0x00018085deb0(param_1 + 0x6b);
  FUN_1808d7a10(param_1 + 0x59);
  func_0x0001808b6360(param_1 + 0x57);
  iVar1 = FUN_180744cc0(param_1 + 0x4d);
  if ((iVar1 == 0) && (iVar1 = FUN_1808555a0(param_1 + 0x4f), iVar1 == 0)) {
    *(int32_t *)(param_1 + 0x51) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x28c) = 0;
  }
  FUN_1808555a0(param_1 + 0x4f);
  FUN_180744cc0(param_1 + 0x4d);
  iVar1 = FUN_180744cc0(param_1 + 0x48);
  if ((iVar1 == 0) && (iVar1 = FUN_1808744f0(param_1 + 0x4a), iVar1 == 0)) {
    *(int32_t *)(param_1 + 0x4c) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x264) = 0;
  }
  FUN_1808744f0(param_1 + 0x4a);
  FUN_180744cc0(param_1 + 0x48);
  FUN_1808bb8d0(param_1 + 0x3b);
  FUN_1808bb660(param_1 + 0x2e);
  FUN_1808bb660(param_1 + 0x21);
  FUN_1808bb800(param_1 + 0x14);
  FUN_1808bb730(param_1 + 7);
  func_0x00018085df50(param_1 + 5);
  func_0x00018085deb0(param_1 + 3);
  plVar8 = param_1 + 1;
  plVar5 = (longlong *)0x0;
  lVar9 = *plVar8;
  plVar3 = (longlong *)(lVar9 + -0x60);
  if (lVar9 == 0) {
    plVar3 = plVar5;
  }
  plVar2 = plVar5;
  if (plVar3 != (longlong *)0x0) {
    plVar2 = plVar3 + 0xc;
  }
  if (plVar2 != plVar8) {
    do {
      if (plVar2 == plVar8) break;
      lVar9 = *plVar2;
      plVar3 = (longlong *)(lVar9 + -0x60);
      if (lVar9 == 0) {
        plVar3 = plVar5;
      }
      plVar4 = plVar5;
      if (plVar3 != (longlong *)0x0) {
        plVar4 = plVar3 + 0xc;
      }
      *(longlong *)plVar2[1] = lVar9;
      *(longlong *)(*plVar2 + 8) = plVar2[1];
      plVar2[1] = (longlong)plVar2;
      *plVar2 = (longlong)plVar2;
      plVar2 = plVar4;
    } while (plVar4 != plVar8);
    lVar9 = *plVar8;
  }
  *(longlong *)param_1[2] = lVar9;
  *(uint64_t *)(*plVar8 + 8) = param_1[2];
  param_1[2] = plVar8;
  *plVar8 = (longlong)plVar8;
  *(longlong **)param_1[2] = plVar8;
  *(uint64_t *)(*plVar8 + 8) = param_1[2];
  param_1[2] = plVar8;
  *plVar8 = (longlong)plVar8;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808bbe80(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  uint uVar5;
  uint64_t uStack_30;
  int aiStack_28 [4];
  
  uStack_30 = 0xffffffffffffffff;
  aiStack_28[0] = -1;
  FUN_1807d1650(param_1,&uStack_30,aiStack_28);
  if (aiStack_28[0] != -1) {
    plVar1 = *(longlong **)(param_1[2] + 8 + (longlong)aiStack_28[0] * 0x10);
    if (plVar1[0xc] != 0) {
      FUN_18088cae0();
    }
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar1,&unknown_var_2688_ptr,0x1ee,1);
  }
  iVar3 = FUN_180744cc0(param_1);
  if ((iVar3 == 0) && (iVar3 = FUN_180744e20(param_1 + 2), iVar3 == 0)) {
    *(int32_t *)(param_1 + 4) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x24) = 0;
  }
  iVar3 = FUN_180744cc0(param_1);
  if ((iVar3 == 0) && (iVar3 = FUN_180744e20(param_1 + 2), iVar3 == 0)) {
    *(int32_t *)(param_1 + 4) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x24) = 0;
  }
  FUN_180744e20(param_1 + 2);
  uVar5 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return 0x1c;
    }
    if ((0 < (int)uVar5) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100);
    }
    *param_1 = 0;
    uVar5 = 0;
    *(int32_t *)((longlong)param_1 + 0xc) = 0;
  }
  *(int32_t *)(param_1 + 1) = 0;
  uVar2 = -uVar5;
  if (-1 < (int)uVar5) {
    uVar2 = uVar5;
  }
  if ((0 < (int)uVar2) && (uVar4 = FUN_180747e10(param_1,0), (int)uVar4 != 0)) {
    return uVar4;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808bbe8c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  longlong in_RAX;
  uint uVar5;
  uint64_t unaff_RDI;
  longlong in_stack_00000030;
  int in_stack_00000040;
  
  *(uint64_t *)(in_RAX + 0x18) = unaff_RDI;
  *(longlong **)(in_RAX + -0x38) = param_1;
  *(uint64_t *)(in_RAX + -0x30) = 0xffffffffffffffff;
  *(int32_t *)(in_RAX + -0x28) = 0xffffffff;
  FUN_1807d1650(param_1,in_RAX + -0x30);
  if (in_stack_00000040 != -1) {
    plVar1 = *(longlong **)
              (*(longlong *)(in_stack_00000030 + 0x10) + 8 + (longlong)in_stack_00000040 * 0x10);
    if (plVar1[0xc] != 0) {
      FUN_18088cae0();
    }
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar1,&unknown_var_2688_ptr,0x1ee,1);
  }
  iVar3 = FUN_180744cc0(param_1);
  if ((iVar3 == 0) && (iVar3 = FUN_180744e20(param_1 + 2), iVar3 == 0)) {
    *(int32_t *)(param_1 + 4) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x24) = 0;
  }
  iVar3 = FUN_180744cc0(param_1);
  if ((iVar3 == 0) && (iVar3 = FUN_180744e20(param_1 + 2), iVar3 == 0)) {
    *(int32_t *)(param_1 + 4) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x24) = 0;
  }
  FUN_180744e20(param_1 + 2);
  uVar5 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return 0x1c;
    }
    if ((0 < (int)uVar5) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100);
    }
    *param_1 = 0;
    uVar5 = 0;
    *(int32_t *)((longlong)param_1 + 0xc) = 0;
  }
  *(int32_t *)(param_1 + 1) = 0;
  uVar2 = -uVar5;
  if (-1 < (int)uVar5) {
    uVar2 = uVar5;
  }
  if ((0 < (int)uVar2) && (uVar4 = FUN_180747e10(param_1,0), (int)uVar4 != 0)) {
    return uVar4;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




