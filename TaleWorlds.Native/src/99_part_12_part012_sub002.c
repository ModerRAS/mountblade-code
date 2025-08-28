#include "TaleWorlds.Native.Split.h"

// 99_part_12_part012_sub002.c - 1 个函数

// 函数: void FUN_1807d2655(void)
void FUN_1807d2655(void)

{
  ulonglong in_stack_00000038;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000038 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1807d2660(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int aiStackX_10 [2];
  
  if (0x8000000 < *(uint *)(param_2 + 0x14)) {
    return 0x1c;
  }
  iVar6 = *(uint *)(param_2 + 0x14) + 0x21;
  if (*(int *)(param_1 + 0x40) < iVar6) {
    if (*(longlong *)(param_1 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_1 + 0x30),
                    &UNK_18097d050,0x289,1);
    }
    lVar3 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),iVar6,&UNK_18097d050,0x28c,0,0,1);
    *(longlong *)(param_1 + 0x30) = lVar3;
    if (lVar3 == 0) {
      return 0x26;
    }
    *(int *)(param_1 + 0x40) = iVar6;
  }
  piVar1 = *(int **)(param_1 + 0x30);
  piVar1[0] = 0;
  piVar1[1] = 0;
  piVar1[2] = 0;
  piVar1[3] = 0;
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar1[6] = 0;
  piVar1[7] = 0;
  *piVar1 = 0x20;
  *(undefined2 *)(piVar1 + 2) = 0x30a;
  piVar1[3] = *(int *)(param_2 + 0xc);
  piVar1[5] = *(int *)(param_2 + 0x10);
  piVar1[6] = *(int *)(param_2 + 0x14);
  piVar1[4] = 3;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  FUN_180768360(uVar2);
  if ((*(int *)(param_1 + 0x9c) != 0) && (*(int *)(param_1 + 0x80) != 0)) {
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x78) +
                    (longlong)(int)(*(int *)(param_1 + 0x80) - 1U & *(uint *)(param_2 + 0xc)) * 4);
    if (iVar6 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x88);
      do {
        lVar4 = (longlong)iVar6;
        if (*(uint *)(lVar3 + lVar4 * 0x10) == *(uint *)(param_2 + 0xc)) {
          lVar3 = *(longlong *)(lVar3 + 8 + lVar4 * 0x10);
          if (((lVar3 != 0) &&
              (iVar6 = FUN_180768620(*(undefined8 *)(lVar3 + 0x10),*(undefined4 *)(param_2 + 0x10)),
              iVar6 == 0)) &&
             (aiStackX_10[0] = iVar6,
             uVar5 = FUN_1807685b0(*(undefined8 *)(lVar3 + 0x10),piVar1 + 8,
                                   *(undefined4 *)(param_2 + 0x14),aiStackX_10),
             (uVar5 & 0xffffffef) == 0)) {
            *piVar1 = *piVar1 + aiStackX_10[0];
            piVar1[7] = aiStackX_10[0];
            piVar1[4] = 0;
          }
          break;
        }
        iVar6 = *(int *)(lVar3 + 4 + lVar4 * 0x10);
      } while (iVar6 != -1);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar2);
}







