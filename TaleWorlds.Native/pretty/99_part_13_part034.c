#include "TaleWorlds.Native.Split.h"

// 99_part_13_part034.c - 1 个函数

// 函数: void FUN_1808bc8f4(void)
void FUN_1808bc8f4(void)

{
  ulonglong in_stack_00000048;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000048 ^ (ulonglong)&stack0x00000000);
}



int FUN_1808bc920(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint64_t uStackX_8;
  
  lVar1 = *(longlong *)(param_1 + 0x4c0);
  bVar2 = false;
  lVar4 = lVar1;
  if ((*(char *)(param_1 + 0x782) == '\0') && (lVar1 != 0)) {
    func_0x000180743c20(lVar1,2);
    lVar4 = *(longlong *)(param_1 + 0x4c0);
    bVar2 = true;
  }
  uStackX_8 = 0;
  iVar3 = FUN_18073a200(lVar4,&uStackX_8);
  if ((iVar3 == 0) && (iVar3 = FUN_18073c4c0(uStackX_8,param_1 + 0x4c8,0), iVar3 == 0)) {
    iVar7 = 0;
    for (lVar4 = 0;
        ((-1 < lVar4 && (iVar7 < *(int *)(param_1 + 0x53c))) &&
        (*(longlong *)(*(longlong *)(param_1 + 0x530) + lVar4 * 8) == 0)); lVar4 = lVar4 + 1) {
      iVar7 = iVar7 + 1;
    }
    while (((-1 < iVar7 && (iVar7 < *(int *)(param_1 + 0x53c))) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x530) + (longlong)iVar7 * 8) != 0))) {
      iVar6 = 0;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x530) + (longlong)iVar7 * 8);
      for (lVar5 = 0;
          ((-1 < lVar5 && (iVar6 < *(int *)(lVar4 + 0x34))) &&
          (*(longlong *)(*(longlong *)(lVar4 + 0x28) + lVar5 * 8) == 0)); lVar5 = lVar5 + 1) {
        iVar6 = iVar6 + 1;
      }
      while (((-1 < iVar6 && (iVar6 < *(int *)(lVar4 + 0x34))) &&
             (*(longlong *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar6 * 8) != 0))) {
        iVar3 = FUN_18085ef10(*(uint64_t *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar6 * 8));
        if (iVar3 != 0) goto LAB_1808bcab0;
        iVar6 = iVar6 + 1;
        for (lVar5 = (longlong)iVar6;
            ((-1 < lVar5 && (iVar6 < *(int *)(lVar4 + 0x34))) &&
            (*(longlong *)(*(longlong *)(lVar4 + 0x28) + lVar5 * 8) == 0)); lVar5 = lVar5 + 1) {
          iVar6 = iVar6 + 1;
        }
      }
      iVar7 = iVar7 + 1;
      for (lVar4 = (longlong)iVar7;
          ((-1 < lVar4 && (iVar7 < *(int *)(param_1 + 0x53c))) &&
          (*(longlong *)(*(longlong *)(param_1 + 0x530) + lVar4 * 8) == 0)); lVar4 = lVar4 + 1) {
        iVar7 = iVar7 + 1;
      }
    }
    if ((bVar2) && (lVar1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180743d60(lVar1,2);
    }
    iVar3 = 0;
  }
  else {
LAB_1808bcab0:
    if ((bVar2) && (lVar1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180743d60(lVar1,2);
    }
  }
  return iVar3;
}



uint64_t FUN_1808bcb00(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  (**(code **)(*param_2 + 0x38))(param_2,&uStack_18);
  if ((*(int *)(param_1 + 0x264) != 0) && (*(int *)(param_1 + 0x248) != 0)) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x240) +
                    (longlong)
                    (int)((uStack_18 ^ uStack_14 ^ uStack_10 ^ uStack_c) &
                         *(int *)(param_1 + 0x248) - 1U) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x250);
      do {
        lVar1 = (longlong)iVar3 * 0x20;
        if ((*(longlong *)(lVar1 + lVar2) == CONCAT44(uStack_14,uStack_18)) &&
           (*(longlong *)(lVar1 + 8 + lVar2) == CONCAT44(uStack_c,uStack_10))) {
          if (iVar3 == -1) {
            return 0;
          }
          FUN_1808bac50(*(uint64_t *)(lVar2 + 0x18 + (longlong)iVar3 * 0x20),&UNK_180987640,0x5b1)
          ;
          (**(code **)(*param_2 + 0x38))(param_2,&uStack_18);
          if (*(int *)(param_1 + 0x264) == 0) {
            return 0;
          }
          if (*(int *)(param_1 + 0x248) == 0) {
            return 0x1c;
          }
          lVar2 = (longlong)
                  (int)((uStack_18 ^ uStack_14 ^ uStack_10 ^ uStack_c) &
                       *(int *)(param_1 + 0x248) - 1U);
          piVar4 = (int *)(*(longlong *)(param_1 + 0x240) + lVar2 * 4);
          iVar3 = *(int *)(*(longlong *)(param_1 + 0x240) + lVar2 * 4);
          if (iVar3 == -1) {
            return 0;
          }
          lVar2 = *(longlong *)(param_1 + 0x250);
          while ((lVar1 = (longlong)iVar3 * 0x20,
                 *(longlong *)(lVar1 + lVar2) != CONCAT44(uStack_14,uStack_18) ||
                 (*(longlong *)(lVar1 + 8 + lVar2) != CONCAT44(uStack_c,uStack_10)))) {
            piVar4 = (int *)(lVar2 + 0x10 + lVar1);
            iVar3 = *piVar4;
            if (iVar3 == -1) {
              return 0;
            }
          }
          iVar3 = *piVar4;
          lVar1 = (longlong)iVar3 * 0x20;
          *(uint64_t *)(lVar1 + 0x18 + lVar2) = 0;
          *piVar4 = *(int *)(lVar1 + 0x10 + lVar2);
          *(int32_t *)(lVar1 + 0x10 + lVar2) = *(int32_t *)(param_1 + 0x260);
          *(int *)(param_1 + 0x264) = *(int *)(param_1 + 0x264) + -1;
          *(int *)(param_1 + 0x260) = iVar3;
          return 0;
        }
        iVar3 = *(int *)(lVar1 + 0x10 + lVar2);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




