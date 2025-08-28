#include "TaleWorlds.Native.Split.h"

// 05_networking_part082.c - 5 个函数

// 函数: void FUN_18088b503(void)
void FUN_18088b503(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x180) ^ (ulonglong)&stack0x00000000);
}



uint64_t FUN_18088b520(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int *piVar8;
  longlong *plVar9;
  
  plVar9 = (longlong *)0x0;
  plVar4 = plVar9;
  while ((iVar7 = (int)plVar4, plVar4 = plVar9, -1 < iVar7 && (iVar7 < *(int *)(param_2 + 200)))) {
    lVar6 = *(longlong *)(*(longlong *)(param_2 + 0xc0) + (longlong)iVar7 * 8);
    plVar4 = (longlong *)(param_1 + 0xb00);
    if (param_1 == -0xad8) {
      plVar4 = plVar9;
    }
    if (((plVar4 == (longlong *)0x0) || (*(int *)((longlong)plVar4 + 0x24) == 0)) ||
       ((int)plVar4[1] == 0)) {
LAB_18088b629:
      plVar4 = (longlong *)(ulonglong)(iVar7 + 1);
    }
    else {
      lVar5 = (longlong)
              (int)((*(uint *)(lVar6 + 0x1c) ^ *(uint *)(lVar6 + 0x18) ^ *(uint *)(lVar6 + 0x14) ^
                    *(uint *)(lVar6 + 0x10)) & (int)plVar4[1] - 1U);
      piVar8 = (int *)(*plVar4 + lVar5 * 4);
      iVar2 = *(int *)(*plVar4 + lVar5 * 4);
      if (iVar2 == -1) goto LAB_18088b629;
      lVar5 = plVar4[2];
      do {
        lVar3 = (longlong)iVar2;
        if ((*(longlong *)(lVar5 + lVar3 * 0x18) == *(longlong *)(lVar6 + 0x10)) &&
           (*(longlong *)(lVar5 + 8 + lVar3 * 0x18) == *(longlong *)(lVar6 + 0x18))) {
          iVar2 = *piVar8;
          lVar6 = (longlong)iVar2;
          *(int8_t *)(lVar5 + 0x14 + lVar6 * 0x18) = 0;
          *piVar8 = *(int *)(lVar5 + 0x10 + lVar6 * 0x18);
          *(int *)(lVar5 + 0x10 + lVar6 * 0x18) = (int)plVar4[4];
          *(int *)((longlong)plVar4 + 0x24) = *(int *)((longlong)plVar4 + 0x24) + -1;
          *(int *)(plVar4 + 4) = iVar2;
          goto LAB_18088b629;
        }
        iVar2 = *(int *)(lVar5 + 0x10 + lVar3 * 0x18);
        piVar8 = (int *)(lVar5 + 0x10 + lVar3 * 0x18);
      } while (iVar2 != -1);
      plVar4 = (longlong *)(ulonglong)(iVar7 + 1);
    }
  }
  while ((iVar7 = (int)plVar4, plVar4 = plVar9, -1 < iVar7 && (iVar7 < *(int *)(param_2 + 0x1a8))))
  {
    lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x1a0) + (longlong)iVar7 * 8);
    if ((((longlong *)(param_1 + 0xad8) == (longlong *)0x0) || (*(int *)(param_1 + 0xafc) == 0)) ||
       (*(int *)(param_1 + 0xae0) == 0)) {
LAB_18088b709:
      plVar4 = (longlong *)(ulonglong)(iVar7 + 1);
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0xad8);
      lVar3 = (longlong)
              (int)((*(uint *)(lVar6 + 0x1c) ^ *(uint *)(lVar6 + 0x18) ^ *(uint *)(lVar6 + 0x14) ^
                    *(uint *)(lVar6 + 0x10)) & *(int *)(param_1 + 0xae0) - 1U);
      piVar8 = (int *)(lVar5 + lVar3 * 4);
      iVar2 = *(int *)(lVar5 + lVar3 * 4);
      if (iVar2 == -1) goto LAB_18088b709;
      lVar5 = *(longlong *)(param_1 + 0xae8);
      do {
        lVar3 = (longlong)iVar2;
        if ((*(longlong *)(lVar5 + lVar3 * 0x18) == *(longlong *)(lVar6 + 0x10)) &&
           (*(longlong *)(lVar5 + 8 + lVar3 * 0x18) == *(longlong *)(lVar6 + 0x18))) {
          iVar2 = *piVar8;
          lVar6 = (longlong)iVar2;
          *(int8_t *)(lVar5 + 0x14 + lVar6 * 0x18) = 0;
          *piVar8 = *(int *)(lVar5 + 0x10 + lVar6 * 0x18);
          *(int32_t *)(lVar5 + 0x10 + lVar6 * 0x18) = *(int32_t *)(param_1 + 0xaf8);
          *(int *)(param_1 + 0xafc) = *(int *)(param_1 + 0xafc) + -1;
          *(int *)(param_1 + 0xaf8) = iVar2;
          goto LAB_18088b709;
        }
        iVar2 = *(int *)(lVar5 + 0x10 + lVar3 * 0x18);
        piVar8 = (int *)(lVar5 + 0x10 + lVar3 * 0x18);
      } while (iVar2 != -1);
      plVar4 = (longlong *)(ulonglong)(iVar7 + 1);
    }
  }
  while ((iVar7 = (int)plVar4, plVar4 = plVar9, -1 < iVar7 && (iVar7 < *(int *)(param_2 + 0x1f8))))
  {
    lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x1f0) + (longlong)iVar7 * 8);
    plVar4 = (longlong *)(param_1 + 0xb28);
    if (param_1 == -0xad8) {
      plVar4 = plVar9;
    }
    if (((plVar4 == (longlong *)0x0) || (*(int *)((longlong)plVar4 + 0x24) == 0)) ||
       ((int)plVar4[1] == 0)) {
LAB_18088b7e9:
      plVar4 = (longlong *)(ulonglong)(iVar7 + 1);
    }
    else {
      lVar5 = (longlong)
              (int)((*(uint *)(lVar6 + 0x1c) ^ *(uint *)(lVar6 + 0x18) ^ *(uint *)(lVar6 + 0x14) ^
                    *(uint *)(lVar6 + 0x10)) & (int)plVar4[1] - 1U);
      piVar8 = (int *)(*plVar4 + lVar5 * 4);
      iVar2 = *(int *)(*plVar4 + lVar5 * 4);
      if (iVar2 == -1) goto LAB_18088b7e9;
      lVar5 = plVar4[2];
      do {
        lVar3 = (longlong)iVar2;
        if ((*(longlong *)(lVar5 + lVar3 * 0x18) == *(longlong *)(lVar6 + 0x10)) &&
           (*(longlong *)(lVar5 + 8 + lVar3 * 0x18) == *(longlong *)(lVar6 + 0x18))) {
          iVar2 = *piVar8;
          lVar6 = (longlong)iVar2;
          *(int8_t *)(lVar5 + 0x14 + lVar6 * 0x18) = 0;
          *piVar8 = *(int *)(lVar5 + 0x10 + lVar6 * 0x18);
          *(int *)(lVar5 + 0x10 + lVar6 * 0x18) = (int)plVar4[4];
          *(int *)((longlong)plVar4 + 0x24) = *(int *)((longlong)plVar4 + 0x24) + -1;
          *(int *)(plVar4 + 4) = iVar2;
          goto LAB_18088b7e9;
        }
        iVar2 = *(int *)(lVar5 + 0x10 + lVar3 * 0x18);
        piVar8 = (int *)(lVar5 + 0x10 + lVar3 * 0x18);
      } while (iVar2 != -1);
      plVar4 = (longlong *)(ulonglong)(iVar7 + 1);
    }
  }
  while ((iVar7 = (int)plVar4, plVar4 = plVar9, -1 < iVar7 && (iVar7 < *(int *)(param_2 + 0x38)))) {
    lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)iVar7 * 8);
    plVar4 = (longlong *)(param_1 + 0xb50);
    if (param_1 == -0xad8) {
      plVar4 = plVar9;
    }
    if (((plVar4 == (longlong *)0x0) || (*(int *)((longlong)plVar4 + 0x24) == 0)) ||
       ((int)plVar4[1] == 0)) {
LAB_18088b8c9:
      plVar4 = (longlong *)(ulonglong)(iVar7 + 1);
    }
    else {
      lVar5 = (longlong)
              (int)((*(uint *)(lVar6 + 0x1c) ^ *(uint *)(lVar6 + 0x18) ^ *(uint *)(lVar6 + 0x14) ^
                    *(uint *)(lVar6 + 0x10)) & (int)plVar4[1] - 1U);
      piVar8 = (int *)(*plVar4 + lVar5 * 4);
      iVar2 = *(int *)(*plVar4 + lVar5 * 4);
      if (iVar2 == -1) goto LAB_18088b8c9;
      lVar5 = plVar4[2];
      do {
        lVar3 = (longlong)iVar2;
        if ((*(longlong *)(lVar5 + lVar3 * 0x18) == *(longlong *)(lVar6 + 0x10)) &&
           (*(longlong *)(lVar5 + 8 + lVar3 * 0x18) == *(longlong *)(lVar6 + 0x18))) {
          iVar2 = *piVar8;
          lVar6 = (longlong)iVar2;
          *(int8_t *)(lVar5 + 0x14 + lVar6 * 0x18) = 0;
          *piVar8 = *(int *)(lVar5 + 0x10 + lVar6 * 0x18);
          *(int *)(lVar5 + 0x10 + lVar6 * 0x18) = (int)plVar4[4];
          *(int *)((longlong)plVar4 + 0x24) = *(int *)((longlong)plVar4 + 0x24) + -1;
          *(int *)(plVar4 + 4) = iVar2;
          goto LAB_18088b8c9;
        }
        iVar2 = *(int *)(lVar5 + 0x10 + lVar3 * 0x18);
        piVar8 = (int *)(lVar5 + 0x10 + lVar3 * 0x18);
      } while (iVar2 != -1);
      plVar4 = (longlong *)(ulonglong)(iVar7 + 1);
    }
  }
  while ((iVar7 = (int)plVar4, plVar4 = plVar9, -1 < iVar7 && (iVar7 < *(int *)(param_2 + 0x48)))) {
    lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x40) + (longlong)iVar7 * 8);
    plVar4 = (longlong *)(param_1 + 0xb78);
    if (param_1 == -0xad8) {
      plVar4 = plVar9;
    }
    if (((plVar4 == (longlong *)0x0) || (*(int *)((longlong)plVar4 + 0x24) == 0)) ||
       ((int)plVar4[1] == 0)) {
LAB_18088b9a9:
      plVar4 = (longlong *)(ulonglong)(iVar7 + 1);
    }
    else {
      lVar5 = (longlong)
              (int)((*(uint *)(lVar6 + 0x1c) ^ *(uint *)(lVar6 + 0x18) ^ *(uint *)(lVar6 + 0x14) ^
                    *(uint *)(lVar6 + 0x10)) & (int)plVar4[1] - 1U);
      piVar8 = (int *)(*plVar4 + lVar5 * 4);
      iVar2 = *(int *)(*plVar4 + lVar5 * 4);
      if (iVar2 == -1) goto LAB_18088b9a9;
      lVar5 = plVar4[2];
      do {
        lVar3 = (longlong)iVar2;
        if ((*(longlong *)(lVar5 + lVar3 * 0x18) == *(longlong *)(lVar6 + 0x10)) &&
           (*(longlong *)(lVar5 + 8 + lVar3 * 0x18) == *(longlong *)(lVar6 + 0x18))) {
          iVar2 = *piVar8;
          lVar6 = (longlong)iVar2;
          *(int8_t *)(lVar5 + 0x14 + lVar6 * 0x18) = 0;
          *piVar8 = *(int *)(lVar5 + 0x10 + lVar6 * 0x18);
          *(int *)(lVar5 + 0x10 + lVar6 * 0x18) = (int)plVar4[4];
          *(int *)((longlong)plVar4 + 0x24) = *(int *)((longlong)plVar4 + 0x24) + -1;
          *(int *)(plVar4 + 4) = iVar2;
          goto LAB_18088b9a9;
        }
        iVar2 = *(int *)(lVar5 + 0x10 + lVar3 * 0x18);
        piVar8 = (int *)(lVar5 + 0x10 + lVar3 * 0x18);
      } while (iVar2 != -1);
      plVar4 = (longlong *)(ulonglong)(iVar7 + 1);
    }
  }
  while ((iVar7 = (int)plVar4, plVar4 = plVar9, -1 < iVar7 && (iVar7 < *(int *)(param_2 + 0x58)))) {
    lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x50) + (longlong)iVar7 * 8);
    plVar4 = (longlong *)(param_1 + 0xba0);
    if (param_1 == -0xad8) {
      plVar4 = plVar9;
    }
    if (((plVar4 == (longlong *)0x0) || (*(int *)((longlong)plVar4 + 0x24) == 0)) ||
       ((int)plVar4[1] == 0)) {
LAB_18088ba89:
      plVar4 = (longlong *)(ulonglong)(iVar7 + 1);
    }
    else {
      lVar5 = (longlong)
              (int)((*(uint *)(lVar6 + 0x1c) ^ *(uint *)(lVar6 + 0x18) ^ *(uint *)(lVar6 + 0x14) ^
                    *(uint *)(lVar6 + 0x10)) & (int)plVar4[1] - 1U);
      piVar8 = (int *)(*plVar4 + lVar5 * 4);
      iVar2 = *(int *)(*plVar4 + lVar5 * 4);
      if (iVar2 == -1) goto LAB_18088ba89;
      lVar5 = plVar4[2];
      do {
        lVar3 = (longlong)iVar2;
        if ((*(longlong *)(lVar5 + lVar3 * 0x18) == *(longlong *)(lVar6 + 0x10)) &&
           (*(longlong *)(lVar5 + 8 + lVar3 * 0x18) == *(longlong *)(lVar6 + 0x18))) {
          iVar2 = *piVar8;
          lVar6 = (longlong)iVar2;
          *(int8_t *)(lVar5 + 0x14 + lVar6 * 0x18) = 0;
          *piVar8 = *(int *)(lVar5 + 0x10 + lVar6 * 0x18);
          *(int *)(lVar5 + 0x10 + lVar6 * 0x18) = (int)plVar4[4];
          *(int *)((longlong)plVar4 + 0x24) = *(int *)((longlong)plVar4 + 0x24) + -1;
          *(int *)(plVar4 + 4) = iVar2;
          goto LAB_18088ba89;
        }
        iVar2 = *(int *)(lVar5 + 0x10 + lVar3 * 0x18);
        piVar8 = (int *)(lVar5 + 0x10 + lVar3 * 0x18);
      } while (iVar2 != -1);
      plVar4 = (longlong *)(ulonglong)(iVar7 + 1);
    }
  }
  while ((iVar7 = (int)plVar4, plVar4 = plVar9, -1 < iVar7 && (iVar7 < *(int *)(param_2 + 0x68)))) {
    lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x60) + (longlong)iVar7 * 8);
    plVar4 = (longlong *)(param_1 + 0xbc8);
    if (param_1 == -0xad8) {
      plVar4 = plVar9;
    }
    if (((plVar4 == (longlong *)0x0) || (*(int *)((longlong)plVar4 + 0x24) == 0)) ||
       ((int)plVar4[1] == 0)) {
LAB_18088bb69:
      plVar4 = (longlong *)(ulonglong)(iVar7 + 1);
    }
    else {
      lVar5 = (longlong)
              (int)((*(uint *)(lVar6 + 0x1c) ^ *(uint *)(lVar6 + 0x18) ^ *(uint *)(lVar6 + 0x14) ^
                    *(uint *)(lVar6 + 0x10)) & (int)plVar4[1] - 1U);
      piVar8 = (int *)(*plVar4 + lVar5 * 4);
      iVar2 = *(int *)(*plVar4 + lVar5 * 4);
      if (iVar2 == -1) goto LAB_18088bb69;
      lVar5 = plVar4[2];
      do {
        lVar3 = (longlong)iVar2;
        if ((*(longlong *)(lVar5 + lVar3 * 0x18) == *(longlong *)(lVar6 + 0x10)) &&
           (*(longlong *)(lVar5 + 8 + lVar3 * 0x18) == *(longlong *)(lVar6 + 0x18))) {
          iVar2 = *piVar8;
          lVar6 = (longlong)iVar2;
          *(int8_t *)(lVar5 + 0x14 + lVar6 * 0x18) = 0;
          *piVar8 = *(int *)(lVar5 + 0x10 + lVar6 * 0x18);
          *(int *)(lVar5 + 0x10 + lVar6 * 0x18) = (int)plVar4[4];
          *(int *)((longlong)plVar4 + 0x24) = *(int *)((longlong)plVar4 + 0x24) + -1;
          *(int *)(plVar4 + 4) = iVar2;
          goto LAB_18088bb69;
        }
        iVar2 = *(int *)(lVar5 + 0x10 + lVar3 * 0x18);
        piVar8 = (int *)(lVar5 + 0x10 + lVar3 * 0x18);
      } while (iVar2 != -1);
      plVar4 = (longlong *)(ulonglong)(iVar7 + 1);
    }
  }
  while ((iVar7 = (int)plVar4, plVar4 = plVar9, -1 < iVar7 && (iVar7 < *(int *)(param_2 + 0x78)))) {
    lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x70) + (longlong)iVar7 * 8);
    plVar4 = (longlong *)func_0x00018086dc30(param_1 + 0xad8);
    if (((plVar4 == (longlong *)0x0) || (iVar2 = *(int *)((longlong)plVar4 + 0x24), iVar2 == 0)) ||
       ((int)plVar4[1] == 0)) {
LAB_18088bc4c:
      plVar4 = (longlong *)(ulonglong)(iVar7 + 1);
    }
    else {
      lVar5 = (longlong)
              (int)((*(uint *)(lVar6 + 0x1c) ^ *(uint *)(lVar6 + 0x18) ^ *(uint *)(lVar6 + 0x14) ^
                    *(uint *)(lVar6 + 0x10)) & (int)plVar4[1] - 1U);
      piVar8 = (int *)(*plVar4 + lVar5 * 4);
      iVar1 = *(int *)(*plVar4 + lVar5 * 4);
      if (iVar1 == -1) goto LAB_18088bc4c;
      lVar5 = plVar4[2];
      do {
        lVar3 = (longlong)iVar1;
        if ((*(longlong *)(lVar5 + lVar3 * 0x18) == *(longlong *)(lVar6 + 0x10)) &&
           (*(longlong *)(lVar5 + 8 + lVar3 * 0x18) == *(longlong *)(lVar6 + 0x18))) {
          iVar1 = *piVar8;
          lVar6 = (longlong)iVar1;
          *(int8_t *)(lVar5 + 0x14 + lVar6 * 0x18) = 0;
          *piVar8 = *(int *)(lVar5 + 0x10 + lVar6 * 0x18);
          *(int *)(lVar5 + 0x10 + lVar6 * 0x18) = (int)plVar4[4];
          *(int *)((longlong)plVar4 + 0x24) = iVar2 + -1;
          *(int *)(plVar4 + 4) = iVar1;
          goto LAB_18088bc4c;
        }
        iVar1 = *(int *)(lVar5 + 0x10 + lVar3 * 0x18);
        piVar8 = (int *)(lVar5 + 0x10 + lVar3 * 0x18);
      } while (iVar1 != -1);
      plVar4 = (longlong *)(ulonglong)(iVar7 + 1);
    }
  }
  while ((iVar7 = (int)plVar4, plVar4 = plVar9, -1 < iVar7 && (iVar7 < *(int *)(param_2 + 0xe8)))) {
    lVar6 = *(longlong *)(*(longlong *)(param_2 + 0xe0) + (longlong)iVar7 * 8);
    plVar4 = (longlong *)(param_1 + 0xbf0);
    if (param_1 == -0xad8) {
      plVar4 = plVar9;
    }
    if (((plVar4 == (longlong *)0x0) || (*(int *)((longlong)plVar4 + 0x24) == 0)) ||
       ((int)plVar4[1] == 0)) {
LAB_18088bd29:
      plVar4 = (longlong *)(ulonglong)(iVar7 + 1);
    }
    else {
      lVar5 = (longlong)
              (int)((*(uint *)(lVar6 + 0x1c) ^ *(uint *)(lVar6 + 0x18) ^ *(uint *)(lVar6 + 0x14) ^
                    *(uint *)(lVar6 + 0x10)) & (int)plVar4[1] - 1U);
      piVar8 = (int *)(*plVar4 + lVar5 * 4);
      iVar2 = *(int *)(*plVar4 + lVar5 * 4);
      if (iVar2 == -1) goto LAB_18088bd29;
      lVar5 = plVar4[2];
      do {
        lVar3 = (longlong)iVar2;
        if ((*(longlong *)(lVar5 + lVar3 * 0x18) == *(longlong *)(lVar6 + 0x10)) &&
           (*(longlong *)(lVar5 + 8 + lVar3 * 0x18) == *(longlong *)(lVar6 + 0x18))) {
          iVar2 = *piVar8;
          lVar6 = (longlong)iVar2;
          *(int8_t *)(lVar5 + 0x14 + lVar6 * 0x18) = 0;
          *piVar8 = *(int *)(lVar5 + 0x10 + lVar6 * 0x18);
          *(int *)(lVar5 + 0x10 + lVar6 * 0x18) = (int)plVar4[4];
          *(int *)((longlong)plVar4 + 0x24) = *(int *)((longlong)plVar4 + 0x24) + -1;
          *(int *)(plVar4 + 4) = iVar2;
          goto LAB_18088bd29;
        }
        iVar2 = *(int *)(lVar5 + 0x10 + lVar3 * 0x18);
        piVar8 = (int *)(lVar5 + 0x10 + lVar3 * 0x18);
      } while (iVar2 != -1);
      plVar4 = (longlong *)(ulonglong)(iVar7 + 1);
    }
  }
  do {
    while( true ) {
      iVar7 = (int)plVar4;
      if ((iVar7 < 0) || (*(int *)(param_2 + 0x1c8) <= iVar7)) {
        return 0;
      }
      lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x1c0) + (longlong)iVar7 * 8);
      plVar4 = (longlong *)(param_1 + 0xc18);
      if (param_1 == -0xad8) {
        plVar4 = plVar9;
      }
      if (((plVar4 != (longlong *)0x0) && (*(int *)((longlong)plVar4 + 0x24) != 0)) &&
         ((int)plVar4[1] != 0)) break;
LAB_18088be19:
      plVar4 = (longlong *)(ulonglong)(iVar7 + 1);
    }
    lVar5 = (longlong)
            (int)((*(uint *)(lVar6 + 0x1c) ^ *(uint *)(lVar6 + 0x18) ^ *(uint *)(lVar6 + 0x14) ^
                  *(uint *)(lVar6 + 0x10)) & (int)plVar4[1] - 1U);
    piVar8 = (int *)(*plVar4 + lVar5 * 4);
    iVar2 = *(int *)(*plVar4 + lVar5 * 4);
    if (iVar2 == -1) goto LAB_18088be19;
    lVar5 = plVar4[2];
    do {
      lVar3 = (longlong)iVar2;
      if ((*(longlong *)(lVar5 + lVar3 * 0x18) == *(longlong *)(lVar6 + 0x10)) &&
         (*(longlong *)(lVar5 + 8 + lVar3 * 0x18) == *(longlong *)(lVar6 + 0x18))) {
        iVar2 = *piVar8;
        lVar6 = (longlong)iVar2;
        *(int8_t *)(lVar5 + 0x14 + lVar6 * 0x18) = 0;
        *piVar8 = *(int *)(lVar5 + 0x10 + lVar6 * 0x18);
        *(int *)(lVar5 + 0x10 + lVar6 * 0x18) = (int)plVar4[4];
        *(int *)((longlong)plVar4 + 0x24) = *(int *)((longlong)plVar4 + 0x24) + -1;
        *(int *)(plVar4 + 4) = iVar2;
        goto LAB_18088be19;
      }
      iVar2 = *(int *)(lVar5 + 0x10 + lVar3 * 0x18);
      piVar8 = (int *)(lVar5 + 0x10 + lVar3 * 0x18);
    } while (iVar2 != -1);
    plVar4 = (longlong *)(ulonglong)(iVar7 + 1);
  } while( true );
}





// 函数: void FUN_18088bf80(longlong param_1,uint64_t param_2,uint64_t param_3)
void FUN_18088bf80(longlong param_1,uint64_t param_2,uint64_t param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar5 = *(int *)(param_1 + 0x10) + (int)param_3;
  if (*(int *)(lVar1 + 8) < iVar5) {
    uVar4 = (int)*(uint *)(lVar1 + 0xc) >> 0x1f;
    iVar3 = (*(uint *)(lVar1 + 0xc) ^ uVar4) - uVar4;
    if (iVar3 < iVar5) {
      iVar3 = (int)((float)iVar3 * 1.5);
      if (iVar5 <= iVar3) {
        iVar5 = iVar3;
      }
      if (iVar5 < 0x40) {
        iVar5 = 0x40;
      }
      iVar5 = FUN_180849030(lVar1,iVar5);
      if (iVar5 != 0) {
        return;
      }
    }
    plVar2 = *(longlong **)(param_1 + 8);
    uVar4 = (int)*(uint *)((longlong)plVar2 + 0xc) >> 0x1f;
    iVar5 = (int)plVar2[1];
    iVar3 = (*(uint *)((longlong)plVar2 + 0xc) ^ uVar4) - uVar4;
    if (iVar5 < iVar3) {
                    // WARNING: Subroutine does not return
      memset((longlong)iVar5 + *plVar2,0,(longlong)(iVar3 - iVar5));
    }
    *(int *)(plVar2 + 1) = iVar3;
  }
                    // WARNING: Subroutine does not return
  memcpy(**(longlong **)(param_1 + 8) + *(longlong *)(param_1 + 0x10),param_2,param_3);
}





// 函数: void FUN_18088bfed(void)
void FUN_18088bfed(void)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  longlong unaff_RBX;
  int iVar4;
  
  plVar2 = *(longlong **)(unaff_RBX + 8);
  uVar3 = (int)*(uint *)((longlong)plVar2 + 0xc) >> 0x1f;
  iVar1 = (int)plVar2[1];
  iVar4 = (*(uint *)((longlong)plVar2 + 0xc) ^ uVar3) - uVar3;
  if (iVar1 < iVar4) {
                    // WARNING: Subroutine does not return
    memset((longlong)iVar1 + *plVar2,0,(longlong)(iVar4 - iVar1));
  }
  *(int *)(plVar2 + 1) = iVar4;
                    // WARNING: Subroutine does not return
  memcpy(**(longlong **)(unaff_RBX + 8) + *(longlong *)(unaff_RBX + 0x10));
}





// 函数: void FUN_18088c02e(void)
void FUN_18088c02e(void)

{
  longlong unaff_RBX;
  
                    // WARNING: Subroutine does not return
  memcpy(**(longlong **)(unaff_RBX + 8) + *(longlong *)(unaff_RBX + 0x10));
}



uint64_t FUN_18088c060(uint param_1,uint *param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint64_t uVar7;
  uint uVar8;
  
  if (param_2 == (uint *)0x0) {
    return 0x1f;
  }
  if (*param_2 == 0) {
    lVar1 = (longlong)(int)param_1 * 0x28;
    puVar2 = (ulonglong *)(lVar1 + 0x180c4eb10);
    if (0 < *(int *)((longlong)(int)param_1 * 0x28 + 0x180c4eb2c)) {
      if ((*(uint *)(lVar1 + 0x180c4eb20) <= *(int *)(lVar1 + 0x180c4eb24) + 0x400U) &&
         (uVar7 = FUN_18088c290(puVar2), (int)uVar7 != 0)) {
        return uVar7;
      }
      uVar3 = *puVar2;
      if ((uVar3 & 1) != 0) {
        uVar6 = (uint)(uVar3 >> 6) & 0x3fff;
        uVar8 = (uint)(uVar3 >> 1) & 0x1f;
        lVar4 = *(longlong *)((longlong)(int)(uVar8 + param_1 * 0x20) * 8 + 0x180c4ec50);
        uVar3 = *(ulonglong *)(lVar4 + -8 + (ulonglong)uVar6 * 8);
        if ((uVar3 & 1) != 0) {
          if ((uVar3 >> 6 & 0x3fff) != 0) {
            *(int *)(lVar1 + 0x180c4eb24) = *(int *)(lVar1 + 0x180c4eb24) + 1;
            *puVar2 = (ulonglong)
                      (((uint)(uVar3 >> 1) & 0x1f) * 2 | ((uint)(uVar3 >> 6) & 0x3fff) << 6) | 1;
            uVar5 = *(uint *)(lVar1 + 0x180c4eb24);
            if (*(uint *)(lVar1 + 0x180c4eb24) <= *(uint *)(lVar1 + 0x180c4eb28)) {
              uVar5 = *(uint *)(lVar1 + 0x180c4eb28);
            }
            *(uint *)(lVar1 + 0x180c4eb28) = uVar5;
            *param_2 = ((uVar6 - 1) * 8 | param_1) << 5 | (int)(uVar3 >> 0x14) << 0x15 | uVar8;
            *(uint **)(lVar4 + (ulonglong)uVar6 * 8 + -8) = param_2;
            return 0;
          }
        }
      }
    }
  }
  return 0x1c;
}



uint64_t FUN_18088c1b0(longlong param_1,ulonglong *param_2,uint param_3,int param_4,int param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar1 = *(ulonglong *)(param_1 + 8);
  if ((uVar1 & 1) == 0) {
    return 0x1c;
  }
  uVar4 = (param_4 + 1) * 0x40;
  *param_2 = (ulonglong)(uint)(param_5 << 0x14) | 1;
  *(ulonglong *)(param_1 + 8) = (ulonglong)((param_5 << 0x13 | param_3) * 2 | uVar4) | 1;
  if ((uVar1 >> 6 & 0x3fff) != 0) {
    lVar2 = *(longlong *)
             ((longlong)(int)(*(int *)(param_1 + 0x20) * 0x20 + ((uint)(uVar1 >> 1) & 0x1f)) * 8 +
             0x180c4ec50);
    lVar3 = (longlong)(int)((uint)(uVar1 >> 6) & 0x3fff);
    uVar1 = *(ulonglong *)(lVar2 + -8 + lVar3 * 8);
    if ((uVar1 & 1) == 0) {
      return 0x1c;
    }
    if ((uVar1 >> 6 & 0x3fff) != 0) {
      return 0x1c;
    }
    *(ulonglong *)(lVar2 + lVar3 * 8 + -8) =
         (ulonglong)((((uint)(uVar1 >> 0x14) & 0x7ff) << 0x13 | param_3) * 2 | uVar4) | 1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18088c290(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint64_t uVar4;
  int iVar5;
  
  uVar2 = *(uint *)(param_1 + 0x1c);
  if ((int)uVar2 < 0x20) {
    *(uint *)(param_1 + 0x1c) = uVar2 + 1;
    lVar1 = (ulonglong)(*(int *)(param_1 + 0x20) << 5 | uVar2) * 8;
    if (*(longlong *)(lVar1 + 0x180c4ec50) != 0) {
      return 0x1c;
    }
    iVar5 = 0;
    lVar3 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x10000,&UNK_180985f90,0xbb,0,0,1)
    ;
    *(longlong *)(lVar1 + 0x180c4ec50) = lVar3;
    if (lVar3 != 0) {
      do {
        uVar4 = FUN_18088c1b0(param_1,lVar3 + (longlong)iVar5 * 8,uVar2,iVar5,1);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x2000);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 0x2000;
      return uVar4;
    }
  }
  return 0x26;
}



uint64_t FUN_18088c380(uint param_1,int param_2)

{
  longlong lVar1;
  uint64_t uVar2;
  
  if (7 < param_1) {
    return 0x26;
  }
  lVar1 = (longlong)(int)param_1 * 0x28;
  if (*(int *)((longlong)(int)param_1 * 0x28 + 0x180c4eb2c) == 0) {
    *(uint *)(lVar1 + 0x180c4eb30) = param_1;
    *(uint64_t *)(lVar1 + 0x180c4eb24) = 0;
    *(int32_t *)(lVar1 + 0x180c4eb20) = 0;
    *(int32_t *)(lVar1 + 0x180c4eb2c) = 0;
    *(uint64_t *)(lVar1 + 0x180c4eb10) = 0x41;
    *(uint64_t *)(lVar1 + 0x180c4eb18) = 1;
    while( true ) {
      uVar2 = FUN_18088c290((uint64_t *)(lVar1 + 0x180c4eb10));
      if ((int)uVar2 != 0) break;
      param_2 = param_2 + -0x10000;
      if (param_2 < 1) {
        return uVar2;
      }
    }
  }
  else {
    uVar2 = 0x1c;
  }
  return uVar2;
}



uint64_t FUN_18088c390(int32_t param_1)

{
  longlong lVar1;
  longlong in_RAX;
  uint64_t uVar2;
  int unaff_EBX;
  
  lVar1 = in_RAX * 0x28;
  if (*(int *)(in_RAX * 0x28 + 0x180c4eb2c) == 0) {
    *(int32_t *)(lVar1 + 0x180c4eb30) = param_1;
    *(uint64_t *)(lVar1 + 0x180c4eb24) = 0;
    *(int32_t *)(lVar1 + 0x180c4eb20) = 0;
    *(int32_t *)(lVar1 + 0x180c4eb2c) = 0;
    *(uint64_t *)(lVar1 + 0x180c4eb10) = 0x41;
    *(uint64_t *)(lVar1 + 0x180c4eb18) = 1;
    while( true ) {
      uVar2 = FUN_18088c290((uint64_t *)(lVar1 + 0x180c4eb10));
      if ((int)uVar2 != 0) break;
      unaff_EBX = unaff_EBX + -0x10000;
      if (unaff_EBX < 1) {
        return uVar2;
      }
    }
  }
  else {
    uVar2 = 0x1c;
  }
  return uVar2;
}





// 函数: void FUN_18088c3bc(int32_t param_1)
void FUN_18088c3bc(int32_t param_1)

{
  int iVar1;
  int unaff_EBX;
  uint64_t *unaff_RDI;
  
  *(int32_t *)(unaff_RDI + 4) = param_1;
  *(uint64_t *)((longlong)unaff_RDI + 0x14) = 0;
  *(int32_t *)(unaff_RDI + 2) = 0;
  *(int32_t *)((longlong)unaff_RDI + 0x1c) = 0;
  *unaff_RDI = 0x41;
  unaff_RDI[1] = 1;
  do {
    iVar1 = FUN_18088c290();
    if (iVar1 != 0) {
      return;
    }
    unaff_EBX = unaff_EBX + -0x10000;
  } while (0 < unaff_EBX);
  return;
}



uint64_t FUN_18088c401(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18088c410(uint param_1)

{
  longlong lVar1;
  
  if ((param_1 < 8) && (lVar1 = (longlong)(int)param_1 * 0x28, *(int *)(lVar1 + 0x180c4eb24) == 0))
  {
    if (0 < *(int *)(lVar1 + 0x180c4eb2c)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),
                    *(uint64_t *)
                     ((longlong)(*(int *)(lVar1 + 0x180c4eb30) << 5) * 8 + 0x180c4ec50),
                    &UNK_180985f90,0xec,1);
    }
    *(uint64_t *)(lVar1 + 0x180c4eb24) = 0;
    *(int32_t *)(lVar1 + 0x180c4eb20) = 0;
    *(int32_t *)(lVar1 + 0x180c4eb2c) = 0;
    return 0;
  }
  return 0x1c;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18088c449(void)

{
  longlong unaff_RSI;
  longlong unaff_R14;
  
  if (0 < *(int *)(unaff_RSI + 0xc4eb2c + unaff_R14)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),
                  *(uint64_t *)
                   (unaff_R14 + 0xc4ec50 +
                   (longlong)(*(int *)(unaff_RSI + 0xc4eb30 + unaff_R14) << 5) * 8),&UNK_180985f90,
                  0xec,1);
  }
  *(uint64_t *)(unaff_RSI + 0xc4eb24 + unaff_R14) = 0;
  *(int32_t *)(unaff_RSI + 0xc4eb20 + unaff_R14) = 0;
  *(int32_t *)(unaff_RSI + 0xc4eb2c + unaff_R14) = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



