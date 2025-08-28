#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part405.c - 9 个函数

// 函数: void FUN_18088f6f7(void)
void FUN_18088f6f7(void)

{
  return;
}



undefined8 FUN_18088f710(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  char cVar5;
  ulonglong uVar6;
  byte *pbVar7;
  bool bVar8;
  byte *pbVar9;
  
  pbVar7 = (byte *)*param_1;
  while( true ) {
    bVar1 = *pbVar7;
    uVar6 = (ulonglong)bVar1;
    if ((0x20 < bVar1) || ((0x100002600U >> (uVar6 & 0x3f) & 1) == 0)) break;
    pbVar7 = pbVar7 + 1;
  }
  if (bVar1 == 0) {
    return 0x13;
  }
  iVar3 = 0;
  bVar8 = false;
  pbVar9 = (byte *)0x0;
  pbVar4 = pbVar7;
  bVar2 = false;
LAB_18088f755:
  cVar5 = (char)uVar6;
  if (cVar5 == ',') {
    if ((iVar3 == 0) && (!bVar2)) {
LAB_18088f7e1:
      *pbVar4 = 0;
      pbVar4 = pbVar4 + 1;
LAB_18088f7e7:
      if ((*pbVar7 == 0x7b) && (pbVar9 != (byte *)0x0)) {
        pbVar7 = pbVar7 + 1;
        *pbVar9 = 0;
      }
      *param_1 = pbVar4;
      *param_2 = pbVar7;
      return 0;
    }
  }
  else {
    if ((cVar5 == '\n') || (cVar5 == '\r')) {
      if (iVar3 != 0) {
        return 0x13;
      }
      if (bVar2) {
        return 0x13;
      }
      goto LAB_18088f7e1;
    }
    if (cVar5 == '\0') {
      if (iVar3 != 0) {
        return 0x13;
      }
      if (bVar2) {
        return 0x13;
      }
      goto LAB_18088f7e7;
    }
  }
  if (cVar5 == '\"') {
    uVar6 = (ulonglong)pbVar4[1];
    bVar8 = bVar8 == false;
    pbVar4 = pbVar4 + 1;
    bVar2 = bVar8;
    goto LAB_18088f755;
  }
  if (!bVar2) {
    if (*pbVar4 == 0x7b) {
      uVar6 = (ulonglong)pbVar4[1];
      iVar3 = iVar3 + 1;
      pbVar4 = pbVar4 + 1;
      goto LAB_18088f755;
    }
    if (*pbVar4 != 0x7d) goto LAB_18088f7b5;
    pbVar9 = pbVar4;
    if (iVar3 == 0) goto LAB_18088f7e7;
    iVar3 = iVar3 + -1;
  }
LAB_18088f7b5:
  uVar6 = (ulonglong)pbVar4[1];
  pbVar4 = pbVar4 + 1;
  goto LAB_18088f755;
}



longlong * FUN_18088f810(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lStackX_18;
  
  plVar8 = (longlong *)func_0x00018088c530(param_1,&lStackX_18);
  if ((int)plVar8 == 0) {
    lVar1 = *(longlong *)(param_2 + 0x90);
    lVar2 = *(longlong *)(lVar1 + 0x130);
    lVar11 = *(longlong *)(lStackX_18 + 0x10);
    uVar3 = *(uint *)(lVar11 + 0x10);
    uVar4 = *(uint *)(lVar11 + 0x14);
    lVar7 = *(longlong *)(lVar11 + 0x10);
    uVar5 = *(uint *)(lVar11 + 0x18);
    uVar6 = *(uint *)(lVar11 + 0x1c);
    lVar11 = *(longlong *)(lVar11 + 0x18);
    if (lVar2 != 0) {
      FUN_180768360(lVar2);
    }
    plVar8 = (longlong *)0x0;
    if (((*(int *)(lVar1 + 0x15c) != 0) && (*(int *)(lVar1 + 0x140) != 0)) &&
       (iVar12 = *(int *)(*(longlong *)(lVar1 + 0x138) +
                         (longlong)
                         (int)((uVar3 ^ uVar4 ^ uVar5 ^ uVar6) & *(int *)(lVar1 + 0x140) - 1U) * 4),
       iVar12 != -1)) {
      do {
        plVar9 = (longlong *)((longlong)iVar12 * 0x20 + *(longlong *)(lVar1 + 0x148));
        if ((*plVar9 == lVar7) && (plVar9[1] == lVar11)) {
          plVar9 = (longlong *)plVar9[3];
          if (plVar9 != (longlong *)0x0) goto LAB_18088f951;
          break;
        }
        iVar12 = (int)plVar9[2];
      } while (iVar12 != -1);
    }
    plVar9 = plVar8;
    if (((*(int *)(lVar1 + 300) != 0) && (*(int *)(lVar1 + 0x110) != 0)) &&
       (iVar12 = *(int *)(*(longlong *)(lVar1 + 0x108) +
                         (longlong)
                         (int)((uVar3 ^ uVar4 ^ uVar5 ^ uVar6) & *(int *)(lVar1 + 0x110) - 1U) * 4),
       iVar12 != -1)) {
      do {
        plVar10 = (longlong *)((longlong)iVar12 * 0x20 + *(longlong *)(lVar1 + 0x118));
        if ((*plVar10 == lVar7) && (plVar10[1] == lVar11)) {
          plVar9 = (longlong *)plVar10[3];
          break;
        }
        iVar12 = (int)plVar10[2];
      } while (iVar12 != -1);
    }
    if (plVar9 == (longlong *)0x0) {
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
    }
    else {
LAB_18088f951:
      plVar10 = plVar8;
      if (((*(int *)((longlong)plVar9 + 0x24) != 0) && ((int)plVar9[1] != 0)) &&
         (iVar12 = *(int *)(*plVar9 + -4 + (longlong)(int)plVar9[1] * 4), iVar12 != -1)) {
        lVar1 = plVar9[2];
        do {
          lVar11 = (longlong)iVar12;
          if (*(int *)(lVar1 + lVar11 * 0x10) == -1) {
            plVar10 = *(longlong **)(lVar1 + 8 + lVar11 * 0x10);
            break;
          }
          iVar12 = *(int *)(lVar1 + 4 + lVar11 * 0x10);
        } while (iVar12 != -1);
      }
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (plVar10 != (longlong *)0x0) {
        if (*(longlong **)(lStackX_18 + 8) == (longlong *)0x0) {
          if (plVar10[9] == 0) {
            FUN_18088c9b0(lStackX_18,plVar10);
            plVar10[9] = lStackX_18;
            return (longlong *)0x0;
          }
        }
        else if ((plVar10[9] == lStackX_18) && (*(longlong **)(lStackX_18 + 8) == plVar10)) {
          return (longlong *)0x0;
        }
        plVar8 = (longlong *)0x1c;
        FUN_18088c8a0(lStackX_18);
      }
    }
  }
  return plVar8;
}



longlong * FUN_18088f832(void)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong unaff_RBX;
  longlong *plVar9;
  uint uStack0000000000000028;
  uint uStack000000000000002c;
  longlong in_stack_00000050;
  
  lVar1 = *(longlong *)(unaff_RBX + 0x130);
  lVar2 = *(longlong *)(in_stack_00000050 + 0x10);
  uVar3 = *(uint *)(lVar2 + 0x10);
  uVar4 = *(uint *)(lVar2 + 0x14);
  lVar7 = *(longlong *)(lVar2 + 0x10);
  uStack0000000000000028 = *(uint *)(lVar2 + 0x18);
  uStack000000000000002c = *(uint *)(lVar2 + 0x1c);
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  plVar9 = (longlong *)0x0;
  if (((*(int *)(unaff_RBX + 0x15c) != 0) && (*(int *)(unaff_RBX + 0x140) != 0)) &&
     (iVar8 = *(int *)(*(longlong *)(unaff_RBX + 0x138) +
                      (longlong)
                      (int)((uVar3 ^ uVar4 ^ uStack0000000000000028 ^ uStack000000000000002c) &
                           *(int *)(unaff_RBX + 0x140) - 1U) * 4), iVar8 != -1)) {
    do {
      plVar5 = (longlong *)((longlong)iVar8 * 0x20 + *(longlong *)(unaff_RBX + 0x148));
      if ((*plVar5 == lVar7) &&
         (plVar5[1] == CONCAT44(uStack000000000000002c,uStack0000000000000028))) {
        plVar5 = (longlong *)plVar5[3];
        if (plVar5 != (longlong *)0x0) goto LAB_18088f951;
        break;
      }
      iVar8 = (int)plVar5[2];
    } while (iVar8 != -1);
  }
  plVar5 = plVar9;
  if (((*(int *)(unaff_RBX + 300) != 0) && (*(int *)(unaff_RBX + 0x110) != 0)) &&
     (iVar8 = *(int *)(*(longlong *)(unaff_RBX + 0x108) +
                      (longlong)
                      (int)((uVar3 ^ uVar4 ^ uStack0000000000000028 ^ uStack000000000000002c) &
                           *(int *)(unaff_RBX + 0x110) - 1U) * 4), iVar8 != -1)) {
    do {
      plVar6 = (longlong *)((longlong)iVar8 * 0x20 + *(longlong *)(unaff_RBX + 0x118));
      if ((*plVar6 == lVar7) &&
         (plVar6[1] == CONCAT44(uStack000000000000002c,uStack0000000000000028))) {
        plVar5 = (longlong *)plVar6[3];
        break;
      }
      iVar8 = (int)plVar6[2];
    } while (iVar8 != -1);
  }
  if (plVar5 == (longlong *)0x0) {
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar1);
    }
  }
  else {
LAB_18088f951:
    plVar6 = plVar9;
    if (((*(int *)((longlong)plVar5 + 0x24) != 0) && ((int)plVar5[1] != 0)) &&
       (iVar8 = *(int *)(*plVar5 + -4 + (longlong)(int)plVar5[1] * 4), iVar8 != -1)) {
      lVar2 = plVar5[2];
      do {
        lVar7 = (longlong)iVar8;
        if (*(int *)(lVar2 + lVar7 * 0x10) == -1) {
          plVar6 = *(longlong **)(lVar2 + 8 + lVar7 * 0x10);
          break;
        }
        iVar8 = *(int *)(lVar2 + 4 + lVar7 * 0x10);
      } while (iVar8 != -1);
    }
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar1);
    }
    if (plVar6 != (longlong *)0x0) {
      if (*(longlong **)(in_stack_00000050 + 8) == (longlong *)0x0) {
        if (plVar6[9] == 0) {
          FUN_18088c9b0(in_stack_00000050,plVar6);
          plVar6[9] = in_stack_00000050;
          return (longlong *)0x0;
        }
      }
      else if ((plVar6[9] == in_stack_00000050) && (*(longlong **)(in_stack_00000050 + 8) == plVar6)
              ) {
        return (longlong *)0x0;
      }
      plVar9 = (longlong *)0x1c;
      FUN_18088c8a0(in_stack_00000050);
    }
  }
  return plVar9;
}





// 函数: void FUN_18088f9ec(void)
void FUN_18088f9ec(void)

{
  return;
}



longlong FUN_18088fa00(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lStackX_18;
  
  lVar3 = func_0x00018088c530(param_1,&lStackX_18);
  if ((int)lVar3 == 0) {
    lVar3 = *(longlong *)(param_2 + 0x90);
    lVar1 = *(longlong *)(lVar3 + 0x200);
    lVar7 = *(longlong *)(lStackX_18 + 0x10);
    if (lVar1 != 0) {
      FUN_180768360(lVar1);
    }
    plVar4 = (longlong *)func_0x000180851be0(lVar3 + 0x208,lVar7 + 0x10);
    if (plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)func_0x000180851be0(lVar3 + 0x1d8,lVar7 + 0x10);
    }
    lVar3 = 0;
    if (plVar4 == (longlong *)0x0) {
      if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar1);
      }
    }
    else {
      lVar7 = lVar3;
      if (((*(int *)((longlong)plVar4 + 0x24) != 0) && ((int)plVar4[1] != 0)) &&
         (iVar6 = *(int *)(*plVar4 + -4 + (longlong)(int)plVar4[1] * 4), iVar6 != -1)) {
        lVar2 = plVar4[2];
        do {
          lVar5 = (longlong)iVar6;
          if (*(int *)(lVar2 + lVar5 * 0x10) == -1) {
            lVar7 = *(longlong *)(lVar2 + 8 + lVar5 * 0x10);
            break;
          }
          iVar6 = *(int *)(lVar2 + 4 + lVar5 * 0x10);
        } while (iVar6 != -1);
      }
      if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar1);
      }
      if (lVar7 != 0) {
        if (*(longlong *)(lStackX_18 + 8) == 0) {
          if (*(longlong *)(lVar7 + 0x60) == 0) {
            *(longlong *)(lStackX_18 + 8) = lVar7;
            *(longlong *)(lVar7 + 0x60) = lStackX_18;
            return 0;
          }
        }
        else if ((*(longlong *)(lVar7 + 0x60) == lStackX_18) &&
                (*(longlong *)(lStackX_18 + 8) == lVar7)) {
          return 0;
        }
        lVar3 = 0x1c;
        FUN_18088cae0(lStackX_18);
      }
    }
  }
  return lVar3;
}



longlong FUN_18088fa22(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong unaff_RBX;
  longlong lVar6;
  longlong lVar7;
  longlong in_stack_00000040;
  
  lVar1 = *(longlong *)(unaff_RBX + 0x200);
  lVar7 = *(longlong *)(in_stack_00000040 + 0x10);
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  plVar3 = (longlong *)func_0x000180851be0(unaff_RBX + 0x208,lVar7 + 0x10);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)func_0x000180851be0(unaff_RBX + 0x1d8,lVar7 + 0x10);
  }
  lVar7 = 0;
  if (plVar3 == (longlong *)0x0) {
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar1);
    }
  }
  else {
    lVar6 = lVar7;
    if (((*(int *)((longlong)plVar3 + 0x24) != 0) && ((int)plVar3[1] != 0)) &&
       (iVar5 = *(int *)(*plVar3 + -4 + (longlong)(int)plVar3[1] * 4), iVar5 != -1)) {
      lVar2 = plVar3[2];
      do {
        lVar4 = (longlong)iVar5;
        if (*(int *)(lVar2 + lVar4 * 0x10) == -1) {
          lVar6 = *(longlong *)(lVar2 + 8 + lVar4 * 0x10);
          break;
        }
        iVar5 = *(int *)(lVar2 + 4 + lVar4 * 0x10);
      } while (iVar5 != -1);
    }
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar1);
    }
    if (lVar6 != 0) {
      if (*(longlong *)(in_stack_00000040 + 8) == 0) {
        if (*(longlong *)(lVar6 + 0x60) == 0) {
          *(longlong *)(in_stack_00000040 + 8) = lVar6;
          *(longlong *)(lVar6 + 0x60) = in_stack_00000040;
          return 0;
        }
      }
      else if ((*(longlong *)(lVar6 + 0x60) == in_stack_00000040) &&
              (*(longlong *)(in_stack_00000040 + 8) == lVar6)) {
        return 0;
      }
      lVar7 = 0x1c;
      FUN_18088cae0(in_stack_00000040);
    }
  }
  return lVar7;
}





// 函数: void FUN_18088fb33(void)
void FUN_18088fb33(void)

{
  return;
}



int FUN_18088fb40(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + 1;
  *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + 1;
  *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + 1;
  *(int *)(param_1 + 0x548) = *(int *)(param_1 + 0x548) + 1;
  bVar1 = false;
  bVar4 = false;
  bVar6 = false;
  bVar5 = false;
  iVar2 = FUN_1808b6e80(param_1 + 0x3c8,param_2,*(undefined4 *)(param_1 + 0x548),param_3);
  if (iVar2 == 0) {
    iVar3 = 0x1c;
    iVar2 = iVar3;
    if (0 < *(int *)(param_1 + 0x98)) {
      if ((*(int *)(param_1 + 0x98) != 1) || (iVar2 = FUN_1808501b0(param_1 + 0x38), iVar2 == 0)) {
        iVar2 = 0;
        *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -1;
      }
      bVar4 = iVar2 == 0;
    }
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    if (iVar2 == 0) {
      iVar2 = iVar3;
      if (0 < *(int *)(param_1 + 0x168)) {
        if ((*(int *)(param_1 + 0x168) != 1) || (iVar2 = FUN_18084f7f0(param_1 + 0x108), iVar2 == 0)
           ) {
          iVar2 = 0;
          *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + -1;
        }
        bVar5 = iVar2 == 0;
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      if (iVar2 == 0) {
        iVar2 = iVar3;
        if (0 < *(int *)(param_1 + 0x1d0)) {
          if ((*(int *)(param_1 + 0x1d0) != 1) ||
             (iVar2 = FUN_18084fcd0(param_1 + 0x170), iVar2 == 0)) {
            iVar2 = 0;
            *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + -1;
          }
          bVar6 = iVar2 == 0;
        }
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        if (iVar2 == 0) {
          if (0 < *(int *)(param_1 + 0x238)) {
            if ((*(int *)(param_1 + 0x238) != 1) ||
               (iVar3 = FUN_180850690(param_1 + 0x1d8), iVar3 == 0)) {
              *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + -1;
              iVar3 = 0;
            }
            bVar1 = false;
            if (iVar3 == 0) {
              bVar1 = true;
            }
          }
          iVar2 = iVar3;
          if (iVar3 == 0) {
            iVar2 = 0;
          }
          if ((iVar2 == 0) && ((iVar2 = FUN_1808bd690(param_1), iVar2 == 0 || (iVar2 == 0)))) {
            iVar2 = 0;
          }
        }
      }
    }
  }
  if (!bVar1) {
    *(undefined4 *)(param_1 + 0x238) = 0;
    FUN_18084f560(param_1 + 0x208);
  }
  if (!bVar5) {
    *(undefined4 *)(param_1 + 0x168) = 0;
    FUN_18084f040(param_1 + 0x138);
  }
  if (!bVar6) {
    *(undefined4 *)(param_1 + 0x1d0) = 0;
    FUN_18084f040(param_1 + 0x1a0);
  }
  if (!bVar4) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    FUN_18084f2d0(param_1 + 0x68);
  }
  return iVar2;
}



int FUN_18088fb47(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + 1;
  *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + 1;
  *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + 1;
  *(int *)(param_1 + 0x548) = *(int *)(param_1 + 0x548) + 1;
  bVar1 = false;
  bVar4 = false;
  bVar6 = false;
  bVar5 = false;
  iVar2 = FUN_1808b6e80(param_1 + 0x3c8,param_2,*(undefined4 *)(param_1 + 0x548),param_3);
  if (iVar2 == 0) {
    iVar3 = 0x1c;
    iVar2 = iVar3;
    if (0 < *(int *)(param_1 + 0x98)) {
      if ((*(int *)(param_1 + 0x98) != 1) || (iVar2 = FUN_1808501b0(param_1 + 0x38), iVar2 == 0)) {
        iVar2 = 0;
        *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -1;
      }
      bVar4 = iVar2 == 0;
    }
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    if (iVar2 == 0) {
      iVar2 = iVar3;
      if (0 < *(int *)(param_1 + 0x168)) {
        if ((*(int *)(param_1 + 0x168) != 1) || (iVar2 = FUN_18084f7f0(param_1 + 0x108), iVar2 == 0)
           ) {
          iVar2 = 0;
          *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + -1;
        }
        bVar5 = iVar2 == 0;
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      if (iVar2 == 0) {
        iVar2 = iVar3;
        if (0 < *(int *)(param_1 + 0x1d0)) {
          if ((*(int *)(param_1 + 0x1d0) != 1) ||
             (iVar2 = FUN_18084fcd0(param_1 + 0x170), iVar2 == 0)) {
            iVar2 = 0;
            *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + -1;
          }
          bVar6 = iVar2 == 0;
        }
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        if (iVar2 == 0) {
          if (0 < *(int *)(param_1 + 0x238)) {
            if ((*(int *)(param_1 + 0x238) != 1) ||
               (iVar3 = FUN_180850690(param_1 + 0x1d8), iVar3 == 0)) {
              *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + -1;
              iVar3 = 0;
            }
            bVar1 = false;
            if (iVar3 == 0) {
              bVar1 = true;
            }
          }
          iVar2 = iVar3;
          if (iVar3 == 0) {
            iVar2 = 0;
          }
          if ((iVar2 == 0) && ((iVar2 = FUN_1808bd690(param_1), iVar2 == 0 || (iVar2 == 0)))) {
            iVar2 = 0;
          }
        }
      }
    }
  }
  if (!bVar1) {
    *(undefined4 *)(param_1 + 0x238) = 0;
    FUN_18084f560(param_1 + 0x208);
  }
  if (!bVar5) {
    *(undefined4 *)(param_1 + 0x168) = 0;
    FUN_18084f040(param_1 + 0x138);
  }
  if (!bVar6) {
    *(undefined4 *)(param_1 + 0x1d0) = 0;
    FUN_18084f040(param_1 + 0x1a0);
  }
  if (!bVar4) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    FUN_18084f2d0(param_1 + 0x68);
  }
  return iVar2;
}



int FUN_18088fb75(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  longlong unaff_RBP;
  longlong unaff_RSI;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  bVar1 = false;
  bVar4 = false;
  bVar6 = false;
  bVar5 = false;
  iVar2 = FUN_1808b6e80(param_1 + 0x3c8,param_2,*(undefined4 *)(param_1 + 0x548));
  if (iVar2 == 0) {
    iVar3 = 0x1c;
    iVar2 = iVar3;
    if (0 < *(int *)(unaff_RSI + 0x60)) {
      if ((*(int *)(unaff_RSI + 0x60) != 1) || (iVar2 = FUN_1808501b0(), iVar2 == 0)) {
        iVar2 = 0;
        *(int *)(unaff_RSI + 0x60) = *(int *)(unaff_RSI + 0x60) + -1;
      }
      bVar4 = iVar2 == 0;
    }
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    if (iVar2 == 0) {
      iVar2 = iVar3;
      if (0 < *(int *)(param_1 + 0x168)) {
        if ((*(int *)(param_1 + 0x168) != 1) || (iVar2 = FUN_18084f7f0(param_1 + 0x108), iVar2 == 0)
           ) {
          iVar2 = 0;
          *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + -1;
        }
        bVar5 = iVar2 == 0;
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      if (iVar2 == 0) {
        iVar2 = iVar3;
        if (0 < *(int *)(unaff_RBP + 0x60)) {
          if ((*(int *)(unaff_RBP + 0x60) != 1) || (iVar2 = FUN_18084fcd0(), iVar2 == 0)) {
            iVar2 = 0;
            *(int *)(unaff_RBP + 0x60) = *(int *)(unaff_RBP + 0x60) + -1;
          }
          bVar6 = iVar2 == 0;
        }
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        if (iVar2 == 0) {
          if (0 < *(int *)(param_1 + 0x238)) {
            if ((*(int *)(param_1 + 0x238) != 1) ||
               (iVar3 = FUN_180850690(param_1 + 0x1d8), iVar3 == 0)) {
              *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + -1;
              iVar3 = 0;
            }
            bVar1 = false;
            if (iVar3 == 0) {
              bVar1 = true;
            }
          }
          iVar2 = iVar3;
          if (iVar3 == 0) {
            iVar2 = 0;
          }
          if ((iVar2 == 0) && ((iVar2 = FUN_1808bd690(param_1), iVar2 == 0 || (iVar2 == 0)))) {
            iVar2 = 0;
          }
        }
      }
    }
  }
  if (!bVar1) {
    *(undefined4 *)(param_1 + 0x238) = 0;
    FUN_18084f560(param_1 + 0x208);
  }
  if (!bVar5) {
    *(undefined4 *)(param_1 + 0x168) = 0;
    FUN_18084f040(param_1 + 0x138);
  }
  if (!bVar6) {
    *(undefined4 *)(unaff_RBP + 0x60) = 0;
    FUN_18084f040(unaff_RBP + 0x30);
  }
  if (!bVar4) {
    *(undefined4 *)(unaff_RSI + 0x60) = 0;
    FUN_18084f2d0(unaff_RSI + 0x30);
  }
  return iVar2;
}



undefined4 FUN_18088fd22(undefined8 param_1,undefined4 param_2)

{
  undefined4 unaff_EBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_R14;
  longlong unaff_R15;
  undefined1 uStackX_20;
  char in_stack_00000070;
  char in_stack_00000088;
  
  *(undefined4 *)(unaff_R14 + 0x60) = param_2;
  FUN_18084f560(unaff_R14 + 0x30);
  if (in_stack_00000070 == '\0') {
    *(undefined4 *)(unaff_R15 + 0x60) = 0;
    FUN_18084f040(unaff_R15 + 0x30);
  }
  if (in_stack_00000088 == '\0') {
    *(undefined4 *)(unaff_RBP + 0x60) = 0;
    FUN_18084f040(unaff_RBP + 0x30);
  }
  if (uStackX_20 == '\0') {
    *(undefined4 *)(unaff_RSI + 0x60) = 0;
    FUN_18084f2d0(unaff_RSI + 0x30);
  }
  return unaff_EBX;
}



undefined4 FUN_18088fd3d(undefined8 param_1,undefined4 param_2)

{
  undefined4 unaff_EBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_R15;
  undefined1 uStackX_20;
  char in_stack_00000088;
  
  *(undefined4 *)(unaff_R15 + 0x60) = param_2;
  FUN_18084f040(unaff_R15 + 0x30);
  if (in_stack_00000088 == '\0') {
    *(undefined4 *)(unaff_RBP + 0x60) = 0;
    FUN_18084f040(unaff_RBP + 0x30);
  }
  if (uStackX_20 == '\0') {
    *(undefined4 *)(unaff_RSI + 0x60) = 0;
    FUN_18084f2d0(unaff_RSI + 0x30);
  }
  return unaff_EBX;
}



undefined4 FUN_18088fd59(void)

{
  undefined4 unaff_EBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined1 uStackX_20;
  
  *(undefined4 *)(unaff_RBP + 0x60) = 0;
  FUN_18084f040(unaff_RBP + 0x30);
  if (uStackX_20 == '\0') {
    *(undefined4 *)(unaff_RSI + 0x60) = 0;
    FUN_18084f2d0(unaff_RSI + 0x30);
  }
  return unaff_EBX;
}



undefined4 FUN_18088fd75(void)

{
  undefined4 unaff_EBX;
  longlong unaff_RSI;
  
  *(undefined4 *)(unaff_RSI + 0x60) = 0;
  FUN_18084f2d0(unaff_RSI + 0x30);
  return unaff_EBX;
}



undefined8 FUN_18088fdb0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lStackX_8;
  
  uVar3 = func_0x00018088c530(*(undefined4 *)(param_1 + 0x10),&lStackX_8);
  lVar1 = lStackX_8;
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  if (*(int *)(lStackX_8 + 0x34) != 0) {
    return 0x2e;
  }
  lStackX_8 = 0;
  iVar2 = FUN_18088c740(&lStackX_8,param_2);
  if (iVar2 == 0) {
    iVar2 = FUN_1808dec80(lVar1,param_2);
    if (iVar2 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18088c790(&lStackX_8);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_18088c790(&lStackX_8);
}



undefined8 FUN_18088fdce(void)

{
  longlong lVar1;
  int in_EAX;
  int iVar2;
  longlong in_stack_00000030;
  
  lVar1 = in_stack_00000030;
  if (*(int *)(in_stack_00000030 + 0x34) != in_EAX) {
    return 0x2e;
  }
  in_stack_00000030 = 0;
  iVar2 = FUN_18088c740(&stack0x00000030);
  if (iVar2 == 0) {
    iVar2 = FUN_1808dec80(lVar1);
    if (iVar2 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18088c790(&stack0x00000030);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_18088c790(&stack0x00000030);
}





// 函数: void FUN_18088fded(void)
void FUN_18088fded(void)

{
  int iVar1;
  undefined8 uStack0000000000000030;
  
  uStack0000000000000030 = 0;
  iVar1 = FUN_18088c740(&stack0x00000030);
  if (iVar1 == 0) {
    iVar1 = FUN_1808dec80();
    if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18088c790(&stack0x00000030);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_18088c790(&stack0x00000030);
}





// 函数: void FUN_18088fe3b(void)
void FUN_18088fe3b(void)

{
                    // WARNING: Subroutine does not return
  FUN_18088c790(&stack0x00000030);
}





// 函数: void FUN_18088fe51(void)
void FUN_18088fe51(void)

{
  return;
}



undefined8 FUN_18088fe60(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong alStackX_8 [4];
  undefined8 uStack_18;
  longlong lStack_10;
  
  uVar3 = func_0x00018088c530(*(undefined4 *)(param_1 + 0x10),alStackX_8);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  lStack_10 = *(longlong *)(alStackX_8[0] + 0x18);
  if (lStack_10 == 0) {
    return 0x1c;
  }
  lVar2 = *(longlong *)(lStack_10 + 0x2e8);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x38);
    if ((uVar1 >> 1 & 1) != 0) {
      return 0;
    }
    if (((uVar1 & 1) != 0) ||
       ((*(longlong *)(param_2 + 0x90) != 0 &&
        (*(char *)(*(longlong *)(param_2 + 0x90) + 0x780) != '\0')))) {
      *(uint *)(lVar2 + 0x38) = uVar1 | 2;
      uStack_18 = 0;
      uVar3 = FUN_1808e03a0(*(undefined8 *)(param_2 + 0xac8),&uStack_18,~(byte)(uVar1 | 2) & 1);
      if ((int)uVar3 == 0) {
        return 0;
      }
      return uVar3;
    }
  }
  uVar3 = FUN_18088ad30(param_2);
  if ((int)uVar3 == 0) {
    return 0;
  }
  return uVar3;
}



undefined8 FUN_18088fea0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lStackX_8;
  
  uVar3 = func_0x00018088c530(*(undefined4 *)(param_1 + 0x10),&lStackX_8);
  lVar1 = lStackX_8;
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  if (*(int *)(lStackX_8 + 0x34) != 0) {
    return 0x2e;
  }
  lStackX_8 = 0;
  iVar2 = FUN_18088c740(&lStackX_8,param_2);
  if (iVar2 == 0) {
    iVar2 = FUN_1808de9b0(lVar1);
    if (iVar2 == 0) {
      iVar2 = FUN_18088ac50(param_2);
      if (iVar2 == 0) {
                    // WARNING: Subroutine does not return
        FUN_18088c790(&lStackX_8);
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_18088c790(&lStackX_8);
}



undefined8 FUN_18088febe(void)

{
  longlong lVar1;
  int in_EAX;
  int iVar2;
  longlong in_stack_00000030;
  
  lVar1 = in_stack_00000030;
  if (*(int *)(in_stack_00000030 + 0x34) != in_EAX) {
    return 0x2e;
  }
  in_stack_00000030 = 0;
  iVar2 = FUN_18088c740(&stack0x00000030);
  if (iVar2 == 0) {
    iVar2 = FUN_1808de9b0(lVar1);
    if (iVar2 == 0) {
      iVar2 = FUN_18088ac50();
      if (iVar2 == 0) {
                    // WARNING: Subroutine does not return
        FUN_18088c790(&stack0x00000030);
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_18088c790(&stack0x00000030);
}





// 函数: void FUN_18088fedd(void)
void FUN_18088fedd(void)

{
  int iVar1;
  undefined8 uStack0000000000000030;
  
  uStack0000000000000030 = 0;
  iVar1 = FUN_18088c740(&stack0x00000030);
  if (iVar1 == 0) {
    iVar1 = FUN_1808de9b0();
    if (iVar1 == 0) {
      iVar1 = FUN_18088ac50();
      if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
        FUN_18088c790(&stack0x00000030);
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_18088c790(&stack0x00000030);
}





// 函数: void FUN_18088ff36(void)
void FUN_18088ff36(void)

{
                    // WARNING: Subroutine does not return
  FUN_18088c790(&stack0x00000030);
}





// 函数: void FUN_18088ff4c(void)
void FUN_18088ff4c(void)

{
  return;
}



undefined8 FUN_18088ff60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lStackX_8;
  longlong alStackX_18 [2];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar2 = func_0x00018088c530(*(undefined4 *)(param_1 + 0x10),alStackX_18);
  if ((int)uVar2 == 0) {
    lStackX_8 = 0;
    lVar1 = *(longlong *)(alStackX_18[0] + 0x10);
    uStack_18 = *(undefined4 *)(lVar1 + 0x10);
    uStack_14 = *(undefined4 *)(lVar1 + 0x14);
    uStack_10 = *(undefined4 *)(lVar1 + 0x18);
    uStack_c = *(undefined4 *)(lVar1 + 0x1c);
    uVar2 = FUN_1808bc010(*(undefined8 *)(param_2 + 0x90),&uStack_18,0,&lStackX_8);
    if ((int)uVar2 == 0) {
      if ((*(longlong *)(lStackX_8 + 0x48) == alStackX_18[0]) &&
         (*(longlong *)(alStackX_18[0] + 8) == lStackX_8)) {
        return 0;
      }
      uVar2 = 0x1c;
    }
  }
  return uVar2;
}



undefined8
FUN_18088ff94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  longlong in_stack_00000040;
  longlong in_stack_00000050;
  
  lVar1 = *(longlong *)(in_stack_00000050 + 0x10);
  uStack0000000000000028 = *(undefined4 *)(lVar1 + 0x18);
  uStack000000000000002c = *(undefined4 *)(lVar1 + 0x1c);
  uVar2 = FUN_1808bc010(*(undefined4 *)(lVar1 + 0x10),param_2,0,param_4,
                        *(undefined4 *)(lVar1 + 0x10));
  if ((int)uVar2 == 0) {
    if ((*(longlong *)(in_stack_00000040 + 0x48) == in_stack_00000050) &&
       (*(longlong *)(in_stack_00000050 + 8) == in_stack_00000040)) {
      return 0;
    }
    uVar2 = 0x1c;
  }
  return uVar2;
}



undefined8 FUN_18088ffd5(void)

{
  return 0x1c;
}





