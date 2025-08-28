#include "TaleWorlds.Native.Split.h"

// 99_part_02_part047_sub002.c - 1 个函数

// 函数: void FUN_1801b96f0(longlong *param_1,float *param_2,float *param_3,undefined4 param_4)
void FUN_1801b96f0(longlong *param_1,float *param_2,float *param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  
  iVar12 = (int)param_1[4];
  iVar11 = (int)(((*param_2 - *(float *)(param_1 + 1)) - 1e-06) / *(float *)(param_1 + 3));
  if (iVar11 < 0) {
    iVar11 = 0;
  }
  else if (iVar12 <= iVar11) {
    iVar11 = iVar12 + -1;
  }
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  iVar5 = (int)(((param_2[1] - *(float *)((longlong)param_1 + 0xc)) - 1e-06) /
               *(float *)((longlong)param_1 + 0x1c));
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else if (iVar2 <= iVar5) {
    iVar5 = iVar2 + -1;
  }
  iVar7 = (int)(((*param_3 - *(float *)(param_1 + 1)) - 1e-06) / *(float *)(param_1 + 3));
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  else if (iVar12 <= iVar7) {
    iVar7 = iVar12 + -1;
  }
  iVar12 = (int)(((param_3[1] - *(float *)((longlong)param_1 + 0xc)) - 1e-06) /
                *(float *)((longlong)param_1 + 0x1c));
  if (iVar12 < 0) {
    iVar12 = 0;
  }
  else if (iVar2 <= iVar12) {
    iVar12 = iVar2 + -1;
  }
  do {
    iVar2 = iVar5;
    if (iVar7 < iVar11) {
      return;
    }
    for (; iVar2 <= iVar12; iVar2 = iVar2 + 1) {
      lVar4 = (longlong)(iVar11 * *(int *)((longlong)param_1 + 0x24) + iVar2);
      lVar1 = *param_1 + lVar4 * 0x28;
      FUN_1801bb0b0(lVar1 + 8,(longlong)*(int *)(*param_1 + lVar4 * 0x28));
      puVar9 = *(undefined4 **)(lVar1 + 0x10);
      if (puVar9 < *(undefined4 **)(lVar1 + 0x18)) {
        *(undefined4 **)(lVar1 + 0x10) = puVar9 + 1;
        *puVar9 = param_4;
      }
      else {
        puVar8 = *(undefined4 **)(lVar1 + 8);
        lVar4 = (longlong)puVar9 - (longlong)puVar8 >> 2;
        if (lVar4 == 0) {
          lVar4 = 1;
LAB_1801b9874:
          plVar3 = *(longlong **)(lVar1 + 0x20);
          uVar6 = (longlong)((int)plVar3[2] + 0xf) & 0xfffffffffffffff0;
          puVar10 = (undefined4 *)(*plVar3 + uVar6);
          *(int *)(plVar3 + 2) = (int)uVar6 + (int)lVar4 * 4;
          puVar9 = *(undefined4 **)(lVar1 + 0x10);
          puVar8 = *(undefined4 **)(lVar1 + 8);
        }
        else {
          lVar4 = lVar4 * 2;
          if (lVar4 != 0) goto LAB_1801b9874;
          puVar10 = (undefined4 *)0x0;
        }
        if (puVar8 != puVar9) {
                    // WARNING: Subroutine does not return
          memmove(puVar10,puVar8,(longlong)puVar9 - (longlong)puVar8);
        }
        *puVar10 = param_4;
        *(undefined4 **)(lVar1 + 0x10) = puVar10 + 1;
        *(undefined4 **)(lVar1 + 0x18) = puVar10 + lVar4;
        *(undefined4 **)(lVar1 + 8) = puVar10;
      }
    }
    iVar11 = iVar11 + 1;
  } while( true );
}







