#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part262.c - 2 个函数

// 函数: void FUN_180817d10(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
void FUN_180817d10(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  if ((param_2 != 0) && (*(code **)(param_6 + 8) != (code *)0x0)) {
    (**(code **)(param_6 + 8))(param_2,0,1);
  }
                    // WARNING: Subroutine does not return
  memset(param_3 + 8,0,0x328);
}



ulonglong FUN_180817f70(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 auStackX_10 [2];
  undefined8 auStackX_18 [2];
  
  if (*(int *)(param_2 + 0x10) != 1) {
    return 0xffffff7d;
  }
  *(undefined4 *)(param_2 + 0x10) = 2;
  if (*(int *)(param_2 + 1) == 0) {
    *(undefined4 *)(param_2 + 0x10) = 3;
    return 0;
  }
  lVar6 = -1;
  uVar1 = *(undefined4 *)(param_2 + 0x3f);
  uVar2 = *(undefined8 *)param_2[10];
  auStackX_18[0] = 0xffffffffffffffff;
  auStackX_10[0] = uVar1;
  lVar5 = FUN_18081a430(param_1,param_2,param_2[0xd]);
  if (((code *)param_2[99] != (code *)0x0) && (param_2[0x65] != 0)) {
    (*(code *)param_2[99])(*param_2,0,2);
    iVar3 = (*(code *)param_2[0x65])(*param_2);
    lVar6 = (longlong)iVar3;
  }
  param_2[3] = lVar6;
  param_2[2] = lVar6;
  if (param_2[3] == -1) {
    uVar7 = 0xffffff7d;
  }
  else {
    uVar7 = FUN_18081a260(param_1,param_2,param_2[0xb] + 8,*(undefined4 *)(param_2[0xb] + 4),
                          auStackX_10,auStackX_18);
    if (-1 < (longlong)uVar7) {
      iVar3 = FUN_180819460(param_1,param_2,0,uVar2,param_2[2],auStackX_18[0],auStackX_10[0],
                            param_2[0xb] + 8,*(undefined4 *)(param_2[0xb] + 4),0);
      if (iVar3 < 0) {
        uVar7 = 0xffffff80;
        goto LAB_180818104;
      }
      *(undefined8 *)param_2[9] = 0;
      *(undefined4 *)param_2[0xb] = uVar1;
      *(undefined8 *)param_2[10] = uVar2;
      *(longlong *)param_2[0xc] = lVar5;
      *(longlong *)(param_2[0xc] + 8) = *(longlong *)(param_2[0xc] + 8) - lVar5;
      uVar4 = FUN_180818c50(param_1,param_2,uVar2);
      uVar7 = (ulonglong)uVar4;
    }
    if ((int)uVar7 == 0) goto LAB_180818116;
  }
LAB_180818104:
  *param_2 = 0;
  FUN_180817b30(param_1,param_2);
LAB_180818116:
  return uVar7 & 0xffffffff;
}



ulonglong FUN_180817fb7(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *in_RAX;
  longlong lVar5;
  undefined8 *unaff_RBX;
  longlong unaff_RDI;
  ulonglong uVar6;
  undefined4 uStack0000000000000088;
  
  uVar1 = *(undefined4 *)(param_2 + 0x1f8);
  uVar2 = *in_RAX;
  uStack0000000000000088 = uVar1;
  lVar5 = FUN_18081a430();
  if (((code *)unaff_RBX[99] != (code *)0x0) && (unaff_RBX[0x65] != 0)) {
    (*(code *)unaff_RBX[99])(*unaff_RBX,0,(int)unaff_RDI + 3);
    iVar3 = (*(code *)unaff_RBX[0x65])(*unaff_RBX);
    unaff_RDI = (longlong)iVar3;
  }
  unaff_RBX[3] = unaff_RDI;
  unaff_RBX[2] = unaff_RDI;
  if (unaff_RBX[3] == -1) {
    uVar6 = 0xffffff7d;
  }
  else {
    uVar6 = FUN_18081a260();
    if (-1 < (longlong)uVar6) {
      iVar3 = FUN_180819460();
      if (iVar3 < 0) {
        uVar6 = 0xffffff80;
        goto LAB_180818104;
      }
      *(undefined8 *)unaff_RBX[9] = 0;
      *(undefined4 *)unaff_RBX[0xb] = uVar1;
      *(undefined8 *)unaff_RBX[10] = uVar2;
      *(longlong *)unaff_RBX[0xc] = lVar5;
      *(longlong *)(unaff_RBX[0xc] + 8) = *(longlong *)(unaff_RBX[0xc] + 8) - lVar5;
      uVar4 = FUN_180818c50();
      uVar6 = (ulonglong)uVar4;
    }
    if ((int)uVar6 == 0) goto LAB_180818116;
  }
LAB_180818104:
  *unaff_RBX = 0;
  FUN_180817b30();
LAB_180818116:
  return uVar6 & 0xffffffff;
}



undefined8 FUN_180818132(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x80) = 3;
  return 0;
}





// 函数: void FUN_180818150(undefined8 param_1,undefined8 param_2,undefined8 param_3)
void FUN_180818150(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_180817d10();
  if (iVar1 == 0) {
    FUN_180817f70(param_1,param_3);
  }
  return;
}



undefined8 FUN_1808181b0(undefined8 param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int *piVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [24];
  longlong lStack_40;
  
  uVar12 = 0;
  uVar6 = FUN_1808184f0();
  if (((int)uVar6 < 0) || (uVar6 = FUN_18081a600(param_1,param_2), uVar10 = uVar12, (int)uVar6 != 0)
     ) {
    return uVar6;
  }
  do {
    while (iVar2 = func_0x00018082fa00(param_2 + 0x98,auStack_58), 0 < iVar2) {
      uVar3 = FUN_1808317a0(*(longlong *)(param_2 + 0x68) +
                            (longlong)*(int *)(param_2 + 0x88) * 0x28,auStack_58);
      if ((int)uVar3 < 0) {
        func_0x00018082f9e0(param_2 + 0x98,0);
      }
      else {
        if ((int)uVar10 != 0) {
          *(longlong *)(param_2 + 0x78) =
               *(longlong *)(param_2 + 0x78) + ((longlong)(int)(uVar3 + (int)uVar10) >> 2);
        }
        iVar2 = func_0x00018080b410(*(undefined8 *)(param_2 + 0x68),1);
        if (param_3 <= ((longlong)(int)(iVar2 + uVar3) >> 2) + *(longlong *)(param_2 + 0x78)) {
LAB_18081843e:
          lVar11 = *(longlong *)(param_2 + 0x78);
          *(undefined8 *)(param_2 + 0x8c) = 0;
          while (lVar11 < param_3) {
            lVar11 = param_3 - lVar11;
            iVar2 = FUN_180831150(param_2 + 0x210,0);
            if (lVar11 < iVar2) {
              iVar2 = (int)lVar11;
            }
            func_0x0001808311d0(param_2 + 0x210);
            *(longlong *)(param_2 + 0x78) = *(longlong *)(param_2 + 0x78) + (longlong)iVar2;
            if ((iVar2 < lVar11) && (iVar2 = FUN_180819980(param_1,param_2,0,1,1), iVar2 < 1)) {
              uVar6 = FUN_180818bd0(param_2);
              *(undefined8 *)(param_2 + 0x78) = uVar6;
            }
            lVar11 = *(longlong *)(param_2 + 0x78);
          }
          return 0;
        }
        func_0x00018082f9e0(param_2 + 0x98,0);
        uVar6 = FUN_1808319c0(param_1,param_2 + 0x288);
        if ((int)uVar6 < 0) {
          return uVar6;
        }
        FUN_180830680(param_2 + 0x210,param_2 + 0x288);
        if (-1 < lStack_40) {
          uVar1 = *(uint *)(param_2 + 0x88);
          uVar8 = (ulonglong)uVar1;
          uVar10 = lStack_40 -
                   *(longlong *)(*(longlong *)(param_2 + 0x60) + (longlong)(int)(uVar1 * 2) * 8);
          *(ulonglong *)(param_2 + 0x78) = uVar10;
          if ((longlong)uVar10 < 0) {
            *(undefined8 *)(param_2 + 0x78) = 0;
            uVar10 = uVar12;
          }
          if (0 < (int)uVar1) {
            plVar7 = (longlong *)(*(longlong *)(param_2 + 0x60) + 8);
            do {
              uVar10 = uVar10 + *plVar7;
              plVar7 = plVar7 + 2;
              *(ulonglong *)(param_2 + 0x78) = uVar10;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
        }
        uVar10 = (ulonglong)uVar3;
      }
    }
    if ((((iVar2 + 0x80000000U & 0x80000000) == 0) && (iVar2 != -3)) ||
       (lVar11 = FUN_18081a120(param_1,param_2,auStack_78,0xffffffffffffffff), lVar11 < 0))
    goto LAB_18081843e;
    iVar2 = func_0x00018082f7f0(auStack_78);
    if (iVar2 == 0) {
      if (*(int *)(param_2 + 0x80) < 3) goto LAB_1808183a8;
      goto LAB_180818425;
    }
    FUN_180830440(param_1,param_2 + 0x210);
    FUN_180830310(param_1,param_2 + 0x288);
    *(undefined4 *)(param_2 + 0x80) = 2;
LAB_1808183a8:
    iVar4 = func_0x00018082f880(auStack_78);
    iVar2 = *(int *)(param_2 + 0x40);
    uVar8 = uVar12;
    if (0 < iVar2) {
      piVar9 = *(int **)(param_2 + 0x58);
      do {
        if (*piVar9 == iVar4) break;
        uVar3 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar3;
        piVar9 = piVar9 + 1;
      } while ((int)uVar3 < iVar2);
    }
    if ((int)uVar8 != iVar2) {
      *(int *)(param_2 + 0x88) = (int)uVar8;
      *(undefined4 *)(param_2 + 0x80) = 3;
      uVar5 = func_0x00018082f880(auStack_78);
      *(undefined4 *)(param_2 + 0x84) = uVar5;
      func_0x00018082fe60(param_2 + 0x98,iVar4);
      uVar6 = FUN_18081a600(param_1,param_2);
      uVar10 = uVar12;
      if ((int)uVar6 != 0) {
        return uVar6;
      }
LAB_180818425:
      FUN_18082fa20(param_1,param_2 + 0x98,auStack_78);
    }
  } while( true );
}



undefined8 FUN_1808181ef(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  int *piVar8;
  uint uVar9;
  ulonglong uVar10;
  uint unaff_EBP;
  longlong unaff_RSI;
  longlong lVar11;
  longlong unaff_R12;
  ulonglong unaff_R13;
  longlong in_stack_00000068;
  
  do {
    while (iVar2 = func_0x00018082fa00(unaff_RSI + 0x98,&stack0x00000050), 0 < iVar2) {
      uVar3 = FUN_1808317a0(*(longlong *)(unaff_RSI + 0x68) +
                            (longlong)*(int *)(unaff_RSI + 0x88) * 0x28,&stack0x00000050);
      if ((int)uVar3 < 0) {
        func_0x00018082f9e0(unaff_RSI + 0x98,0);
      }
      else {
        if (unaff_EBP != 0) {
          *(longlong *)(unaff_RSI + 0x78) =
               *(longlong *)(unaff_RSI + 0x78) + ((longlong)(int)(uVar3 + unaff_EBP) >> 2);
        }
        iVar2 = func_0x00018080b410(*(undefined8 *)(unaff_RSI + 0x68),1);
        if (unaff_R12 <= ((longlong)(int)(iVar2 + uVar3) >> 2) + *(longlong *)(unaff_RSI + 0x78)) {
LAB_18081843e:
          lVar11 = *(longlong *)(unaff_RSI + 0x78);
          *(ulonglong *)(unaff_RSI + 0x8c) = unaff_R13;
          while (lVar11 < unaff_R12) {
            lVar11 = unaff_R12 - lVar11;
            iVar2 = FUN_180831150(unaff_RSI + 0x210,0);
            if (lVar11 < iVar2) {
              iVar2 = (int)lVar11;
            }
            func_0x0001808311d0(unaff_RSI + 0x210);
            *(longlong *)(unaff_RSI + 0x78) = *(longlong *)(unaff_RSI + 0x78) + (longlong)iVar2;
            if ((iVar2 < lVar11) && (iVar2 = FUN_180819980(), iVar2 < 1)) {
              uVar5 = FUN_180818bd0();
              *(undefined8 *)(unaff_RSI + 0x78) = uVar5;
            }
            lVar11 = *(longlong *)(unaff_RSI + 0x78);
          }
          return 0;
        }
        func_0x00018082f9e0(unaff_RSI + 0x98,0);
        uVar5 = FUN_1808319c0();
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        FUN_180830680(unaff_RSI + 0x210,unaff_RSI + 0x288);
        unaff_EBP = uVar3;
        if (-1 < in_stack_00000068) {
          uVar3 = *(uint *)(unaff_RSI + 0x88);
          uVar7 = (ulonglong)uVar3;
          uVar10 = in_stack_00000068 -
                   *(longlong *)(*(longlong *)(unaff_RSI + 0x60) + (longlong)(int)(uVar3 * 2) * 8);
          *(ulonglong *)(unaff_RSI + 0x78) = uVar10;
          if ((longlong)uVar10 < 0) {
            *(ulonglong *)(unaff_RSI + 0x78) = unaff_R13;
            uVar10 = unaff_R13;
          }
          if (0 < (int)uVar3) {
            plVar6 = (longlong *)(*(longlong *)(unaff_RSI + 0x60) + 8);
            do {
              uVar10 = uVar10 + *plVar6;
              plVar6 = plVar6 + 2;
              *(ulonglong *)(unaff_RSI + 0x78) = uVar10;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
        }
      }
    }
    if ((((iVar2 + 0x80000000U & 0x80000000) == 0) && (iVar2 != -3)) ||
       (lVar11 = FUN_18081a120(), lVar11 < 0)) goto LAB_18081843e;
    iVar2 = func_0x00018082f7f0(&stack0x00000030);
    if (iVar2 == 0) {
      uVar3 = unaff_EBP;
      if (*(int *)(unaff_RSI + 0x80) < 3) goto LAB_1808183a8;
      goto LAB_180818425;
    }
    FUN_180830440();
    FUN_180830310();
    *(undefined4 *)(unaff_RSI + 0x80) = 2;
LAB_1808183a8:
    iVar2 = func_0x00018082f880(&stack0x00000030);
    uVar1 = *(uint *)(unaff_RSI + 0x40);
    uVar3 = (uint)unaff_R13;
    uVar10 = unaff_R13 & 0xffffffff;
    uVar9 = uVar3;
    if (0 < (int)uVar1) {
      piVar8 = *(int **)(unaff_RSI + 0x58);
      do {
        uVar9 = (uint)uVar10;
        if (*piVar8 == iVar2) break;
        uVar9 = uVar9 + 1;
        uVar10 = (ulonglong)uVar9;
        piVar8 = piVar8 + 1;
      } while ((int)uVar9 < (int)uVar1);
    }
    if (uVar9 != uVar1) {
      *(uint *)(unaff_RSI + 0x88) = uVar9;
      *(undefined4 *)(unaff_RSI + 0x80) = 3;
      uVar4 = func_0x00018082f880(&stack0x00000030);
      *(undefined4 *)(unaff_RSI + 0x84) = uVar4;
      func_0x00018082fe60(unaff_RSI + 0x98,iVar2);
      uVar5 = FUN_18081a600();
      if ((int)uVar5 != 0) {
        return uVar5;
      }
LAB_180818425:
      FUN_18082fa20();
      unaff_EBP = uVar3;
    }
  } while( true );
}





