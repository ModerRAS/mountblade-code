#include "TaleWorlds.Native.Split.h"

// 99_part_13_part043.c - 1 个函数

// 函数: void FUN_1808c0f50(longlong param_1,longlong param_2)
void FUN_1808c0f50(longlong param_1,longlong param_2)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = *(undefined4 *)(param_2 + 0x10);
  uStack_14 = *(undefined4 *)(param_2 + 0x14);
  uStack_10 = *(undefined4 *)(param_2 + 0x18);
  uStack_c = *(undefined4 *)(param_2 + 0x1c);
  FUN_180851740(param_1 + 0x368,&uStack_18);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808c0f90(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined8 uStack_40;
  int aiStack_38 [4];
  
  lVar8 = *(longlong *)(param_1 + 200);
  lVar5 = 0;
  if (lVar8 != 0) {
    FUN_180768360(lVar8);
    lVar5 = lVar8;
  }
  plVar4 = (longlong *)func_0x000180851be0(param_1 + 0xd0,param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)func_0x000180851be0(param_1 + 0xa0,param_2 + 0x10);
  }
  if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar5);
  }
  if (plVar4 == (longlong *)0x0) {
    return 0;
  }
  plVar1 = (longlong *)(param_1 + 0x28);
  lVar8 = *(longlong *)(param_1 + 0x28) + -0x18;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar8 = 0;
  }
  if (lVar8 == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = (longlong *)(lVar8 + 0x18);
  }
  while (plVar2 != plVar1) {
    plVar10 = (longlong *)0x0;
    plVar11 = plVar2 + -3;
    if (plVar2 == (longlong *)0x0) {
      plVar11 = plVar10;
    }
    if (*(longlong *)(plVar11[7] + 0x18) == param_2) {
      if (plVar2 == plVar1) {
        return 0x1c;
      }
      lVar8 = *plVar2;
      plVar9 = (longlong *)(lVar8 + -0x18);
      if (lVar8 == 0) {
        plVar9 = plVar10;
      }
      if (plVar9 != (longlong *)0x0) {
        plVar10 = plVar9 + 3;
      }
      *(longlong *)plVar2[1] = lVar8;
      *(longlong *)(*plVar2 + 8) = plVar2[1];
      plVar2[1] = (longlong)plVar2;
      *plVar2 = (longlong)plVar2;
      iVar3 = FUN_1808d7110(plVar11,param_1);
      plVar2 = plVar10;
      if (iVar3 == 0) {
        FUN_1808bec80(param_1 + 0x408,plVar11);
      }
    }
    else {
      if (plVar2 == plVar1) break;
      plVar11 = (longlong *)(*plVar2 + -0x18);
      if (*plVar2 == 0) {
        plVar11 = plVar10;
      }
      plVar2 = plVar10;
      if (plVar11 != (longlong *)0x0) {
        plVar2 = plVar11 + 3;
      }
    }
  }
  uStack_40 = 0xffffffffffffffff;
  aiStack_38[0] = -1;
  FUN_1807d1650(plVar4,&uStack_40,aiStack_38);
  if (aiStack_38[0] != -1) {
    iVar3 = aiStack_38[0];
    iVar7 = (int)uStack_40;
    do {
      lVar8 = *(longlong *)(plVar4[2] + 8 + (longlong)iVar3 * 0x10);
      if ((iVar3 == -1) || (iVar3 = *(int *)(plVar4[2] + 4 + (longlong)iVar3 * 0x10), iVar3 == -1))
      {
        iVar3 = iVar7 + 1;
        bVar12 = iVar7 != -1;
        iVar7 = 0;
        if (bVar12) {
          iVar7 = iVar3;
        }
        if (iVar7 != (int)plVar4[1]) {
          lVar5 = (longlong)iVar7;
          do {
            if (*(int *)(*plVar4 + lVar5 * 4) != -1) {
              iVar3 = *(int *)(*plVar4 + (longlong)iVar7 * 4);
              goto LAB_1808c116b;
            }
            iVar7 = iVar7 + 1;
            lVar5 = lVar5 + 1;
          } while (lVar5 != (int)plVar4[1]);
        }
        iVar7 = -1;
        iVar3 = -1;
      }
LAB_1808c116b:
      if (*(int *)(lVar8 + 0x30) == -1) {
        uVar6 = FUN_180867810(*(undefined8 *)(param_1 + 0x7c0),lVar8);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        plVar1 = (longlong *)(lVar8 + 8);
        **(longlong **)(lVar8 + 0x10) = *plVar1;
        *(undefined8 *)(*plVar1 + 8) = *(undefined8 *)(lVar8 + 0x10);
        *(longlong **)(lVar8 + 0x10) = plVar1;
        *plVar1 = (longlong)plVar1;
      }
      uVar6 = FUN_1808be9f0(param_1 + 0x430,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    } while (iVar3 != -1);
  }
  iVar3 = FUN_180744cc0(plVar4);
  if ((iVar3 == 0) && (iVar3 = FUN_180744e20(plVar4 + 2), iVar3 == 0)) {
    *(undefined4 *)(plVar4 + 4) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 0x24) = 0;
  }
  FUN_180744e20(plVar4 + 2);
  FUN_180744cc0(plVar4);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar4,&UNK_180987640,0x5f2,1);
}



undefined8 FUN_1808c12d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if ((*(byte *)(param_2 + 0x68) & 1) != 0) {
    plVar6 = (longlong *)(param_1 + 0x28);
    plVar7 = (longlong *)0x0;
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x28) + -0x18);
    if (*(longlong *)(param_1 + 0x28) == 0) {
      plVar5 = plVar7;
    }
    plVar3 = plVar5 + 3;
    if (plVar5 == (longlong *)0x0) {
      plVar3 = plVar7;
    }
    if (plVar3 != plVar6) {
      while( true ) {
        plVar5 = plVar3 + 3;
        if (plVar3 == (longlong *)0x0) {
          plVar5 = (longlong *)0x30;
        }
        if (*plVar5 == param_2) break;
        if (plVar3 == plVar6) {
          return 0;
        }
        plVar5 = (longlong *)(*plVar3 + -0x18);
        if (*plVar3 == 0) {
          plVar5 = plVar7;
        }
        plVar3 = plVar7;
        if (plVar5 != (longlong *)0x0) {
          plVar3 = plVar5 + 3;
        }
        if (plVar3 == plVar6) {
          return 0;
        }
      }
      if (plVar3 != plVar6) {
        plVar6 = plVar3 + -3;
        if (plVar3 == (longlong *)0x0) {
          plVar6 = plVar7;
        }
        *(longlong *)plVar3[1] = *plVar3;
        *(longlong *)(*plVar3 + 8) = plVar3[1];
        plVar3[1] = (longlong)plVar3;
        *plVar3 = (longlong)plVar3;
        lVar1 = plVar6[7];
        iVar2 = FUN_1808d7110(plVar6,param_1);
        if (iVar2 == 0) {
          FUN_1808bec80(param_1 + 0x408,plVar6);
        }
        if (((*(byte *)(*(longlong *)(lVar1 + 0x18) + 0x34) & 1) == 0) &&
           (uVar4 = func_0x0001808b8390(param_1 + 0x290,lVar1), (int)uVar4 != 0)) {
          return uVar4;
        }
      }
    }
  }
  return 0;
}



undefined8 FUN_1808c1376(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *in_RAX;
  undefined8 uVar3;
  longlong *plVar4;
  longlong unaff_RSI;
  longlong *in_R10;
  bool in_ZF;
  
  plVar4 = in_RAX + -3;
  if (in_ZF) {
    plVar4 = in_R10;
  }
  *param_2 = param_1;
  *(longlong *)(*in_RAX + 8) = in_RAX[1];
  in_RAX[1] = (longlong)in_RAX;
  *in_RAX = (longlong)in_RAX;
  lVar1 = plVar4[7];
  iVar2 = FUN_1808d7110(plVar4);
  if (iVar2 == 0) {
    FUN_1808bec80(unaff_RSI + 0x408,plVar4);
  }
  if (((*(byte *)(*(longlong *)(lVar1 + 0x18) + 0x34) & 1) == 0) &&
     (uVar3 = func_0x0001808b8390(unaff_RSI + 0x290,lVar1), (int)uVar3 != 0)) {
    return uVar3;
  }
  return 0;
}



undefined8 FUN_1808c13c9(void)

{
  undefined8 uVar1;
  longlong unaff_RSI;
  
  uVar1 = func_0x0001808b8390(unaff_RSI + 0x290);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808c1410(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  lVar3 = (*(code *)**(undefined8 **)(param_2 + 8))(param_2 + 8);
  lVar6 = *(longlong *)(param_1 + 0x50);
  if (lVar6 != lVar3) {
    return 0x1c;
  }
  if ((*(int *)(lVar6 + 0xe8) - 2U < 3) &&
     (iVar5 = *(int *)(lVar6 + 0xd8), iVar1 = FUN_1808bd910(), iVar5 <= iVar1)) {
    iVar8 = 0;
    iVar1 = 0;
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x50) + 0xd8);
    for (lVar6 = 0;
        ((-1 < lVar6 && (iVar1 < *(int *)(param_1 + 0x34))) &&
        (*(longlong *)(*(longlong *)(param_1 + 0x28) + lVar6 * 8) == 0)); lVar6 = lVar6 + 1) {
      iVar1 = iVar1 + 1;
    }
    while (((-1 < iVar1 && (iVar1 < *(int *)(param_1 + 0x34))) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 8) != 0))) {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 8);
      if (lVar6 == 0) {
        return 0x1c;
      }
      if (((*(int *)(lVar6 + 0x2e4) - 1U < 4) && (iVar8 = iVar8 + 1, iVar5 + -1 < iVar8)) &&
         (uVar4 = FUN_180863820(lVar6,1), (int)uVar4 != 0)) {
        return uVar4;
      }
      iVar1 = iVar1 + 1;
      for (lVar6 = (longlong)iVar1;
          ((-1 < lVar6 && (iVar1 < *(int *)(param_1 + 0x34))) &&
          (*(longlong *)(*(longlong *)(param_1 + 0x28) + lVar6 * 8) == 0)); lVar6 = lVar6 + 1) {
        iVar1 = iVar1 + 1;
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x34);
  iVar8 = *(int *)(param_1 + 0x30);
  iVar5 = iVar1 + 1;
  if (*(int *)(param_1 + 0x38) < iVar5) {
    iVar7 = (int)((float)*(int *)(param_1 + 0x38) * 1.5);
    iVar2 = iVar5;
    if (iVar5 <= iVar7) {
      iVar2 = iVar7;
    }
    iVar9 = 8;
    if ((7 < iVar2) && (iVar9 = iVar7, iVar7 < iVar5)) {
      iVar9 = iVar5;
    }
    if (iVar9 < iVar1) {
      return 0x1c;
    }
    lVar6 = 0;
    if (iVar9 != 0) {
      if ((0x3ffffffe < iVar9 * 8 - 1U) ||
         (lVar6 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),iVar9 * 8,&UNK_180957f70,
                                0xf4,0,0,1), lVar6 == 0)) {
        return 0x26;
      }
      iVar1 = *(int *)(param_1 + 0x34);
    }
    if (0 < iVar1) {
                    // WARNING: Subroutine does not return
      memcpy(lVar6,*(undefined8 *)(param_1 + 0x28),(longlong)iVar1 << 3);
    }
    if ((0 < *(int *)(param_1 + 0x38)) && (*(longlong *)(param_1 + 0x28) != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_1 + 0x28),
                    &UNK_180957f70,0x100,1);
    }
    *(longlong *)(param_1 + 0x28) = lVar6;
    *(int *)(param_1 + 0x38) = iVar9;
  }
  *(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x34) * 8) = param_2;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  if (iVar8 == 0) {
    iVar5 = *(int *)(param_3 + 0x53c) + 1;
    if (*(int *)(param_3 + 0x540) < iVar5) {
      iVar8 = (int)((float)*(int *)(param_3 + 0x540) * 1.5);
      iVar1 = iVar5;
      if (iVar5 <= iVar8) {
        iVar1 = iVar8;
      }
      iVar2 = 8;
      if ((7 < iVar1) && (iVar2 = iVar8, iVar8 < iVar5)) {
        iVar2 = iVar5;
      }
      uVar4 = FUN_1808c17c0((longlong *)(param_3 + 0x530),iVar2);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
    *(longlong *)(*(longlong *)(param_3 + 0x530) + (longlong)*(int *)(param_3 + 0x53c) * 8) =
         param_1;
    *(int *)(param_3 + 0x53c) = *(int *)(param_3 + 0x53c) + 1;
    *(int *)(param_3 + 0x538) = *(int *)(param_3 + 0x538) + 1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808c144c(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong unaff_RSI;
  int iVar8;
  longlong in_R9;
  longlong unaff_R13;
  undefined8 unaff_R15;
  
  if ((in_EAX - 2U < 3) && (iVar4 = *(int *)(in_R9 + 0xd8), iVar1 = FUN_1808bd910(), iVar4 <= iVar1)
     ) {
    iVar7 = 0;
    iVar1 = 0;
    iVar4 = *(int *)(*(longlong *)(unaff_RSI + 0x50) + 0xd8);
    for (lVar5 = 0;
        ((-1 < lVar5 && (iVar1 < *(int *)(unaff_RSI + 0x34))) &&
        (*(longlong *)(*(longlong *)(unaff_RSI + 0x28) + lVar5 * 8) == 0)); lVar5 = lVar5 + 1) {
      iVar1 = iVar1 + 1;
    }
    while (((-1 < iVar1 && (iVar1 < *(int *)(unaff_RSI + 0x34))) &&
           (*(longlong *)(*(longlong *)(unaff_RSI + 0x28) + (longlong)iVar1 * 8) != 0))) {
      lVar5 = *(longlong *)(*(longlong *)(unaff_RSI + 0x28) + (longlong)iVar1 * 8);
      if (lVar5 == 0) {
        return 0x1c;
      }
      if (((*(int *)(lVar5 + 0x2e4) - 1U < 4) && (iVar7 = iVar7 + 1, iVar4 + -1 < iVar7)) &&
         (uVar3 = FUN_180863820(lVar5,1), (int)uVar3 != 0)) {
        return uVar3;
      }
      iVar1 = iVar1 + 1;
      for (lVar5 = (longlong)iVar1;
          ((-1 < lVar5 && (iVar1 < *(int *)(unaff_RSI + 0x34))) &&
          (*(longlong *)(*(longlong *)(unaff_RSI + 0x28) + lVar5 * 8) == 0)); lVar5 = lVar5 + 1) {
        iVar1 = iVar1 + 1;
      }
    }
  }
  iVar1 = *(int *)(unaff_RSI + 0x34);
  iVar7 = *(int *)(unaff_RSI + 0x30);
  iVar4 = iVar1 + 1;
  if (*(int *)(unaff_RSI + 0x38) < iVar4) {
    iVar6 = (int)((float)*(int *)(unaff_RSI + 0x38) * 1.5);
    iVar2 = iVar4;
    if (iVar4 <= iVar6) {
      iVar2 = iVar6;
    }
    iVar8 = 8;
    if ((7 < iVar2) && (iVar8 = iVar6, iVar6 < iVar4)) {
      iVar8 = iVar4;
    }
    if (iVar8 < iVar1) {
      return 0x1c;
    }
    lVar5 = 0;
    if (iVar8 != 0) {
      if ((0x3ffffffe < iVar8 * 8 - 1U) ||
         (lVar5 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),iVar8 * 8,&UNK_180957f70,
                                0xf4,0), lVar5 == 0)) {
        return 0x26;
      }
      iVar1 = *(int *)(unaff_RSI + 0x34);
    }
    if (0 < iVar1) {
                    // WARNING: Subroutine does not return
      memcpy(lVar5,*(undefined8 *)(unaff_RSI + 0x28),(longlong)iVar1 << 3);
    }
    if ((0 < *(int *)(unaff_RSI + 0x38)) && (*(longlong *)(unaff_RSI + 0x28) != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(unaff_RSI + 0x28),
                    &UNK_180957f70,0x100,1);
    }
    *(longlong *)(unaff_RSI + 0x28) = lVar5;
    *(int *)(unaff_RSI + 0x38) = iVar8;
  }
  *(undefined8 *)(*(longlong *)(unaff_RSI + 0x28) + (longlong)*(int *)(unaff_RSI + 0x34) * 8) =
       unaff_R15;
  *(int *)(unaff_RSI + 0x34) = *(int *)(unaff_RSI + 0x34) + 1;
  *(int *)(unaff_RSI + 0x30) = *(int *)(unaff_RSI + 0x30) + 1;
  if (iVar7 == 0) {
    iVar4 = *(int *)(unaff_R13 + 0x53c) + 1;
    if (*(int *)(unaff_R13 + 0x540) < iVar4) {
      iVar7 = (int)((float)*(int *)(unaff_R13 + 0x540) * 1.5);
      iVar1 = iVar4;
      if (iVar4 <= iVar7) {
        iVar1 = iVar7;
      }
      iVar2 = 8;
      if ((7 < iVar1) && (iVar2 = iVar7, iVar7 < iVar4)) {
        iVar2 = iVar4;
      }
      uVar3 = FUN_1808c17c0((longlong *)(unaff_R13 + 0x530),iVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    *(longlong *)(*(longlong *)(unaff_R13 + 0x530) + (longlong)*(int *)(unaff_R13 + 0x53c) * 8) =
         unaff_RSI;
    *(int *)(unaff_R13 + 0x53c) = *(int *)(unaff_R13 + 0x53c) + 1;
    *(int *)(unaff_R13 + 0x538) = *(int *)(unaff_R13 + 0x538) + 1;
  }
  return 0;
}



undefined8 FUN_1808c16ae(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808c17c0(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if (param_2 < iVar1) {
    return 0x1c;
  }
  lVar2 = 0;
  if (param_2 != 0) {
    if (param_2 * 8 - 1U < 0x3fffffff) {
      lVar2 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2 * 8,&UNK_180957f70,0xf4,
                            0,0,1);
      if (lVar2 != 0) {
        iVar1 = *(int *)((longlong)param_1 + 0xc);
        goto LAB_1808c183f;
      }
    }
    return 0x26;
  }
LAB_1808c183f:
  if (0 < iVar1) {
                    // WARNING: Subroutine does not return
    memcpy(lVar2,*param_1,(longlong)iVar1 << 3);
  }
  if ((0 < (int)param_1[2]) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
  }
  *param_1 = lVar2;
  *(int *)(param_1 + 2) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808c17e6(undefined8 param_1,int param_2)

{
  int in_EAX;
  longlong lVar1;
  longlong *unaff_RBX;
  int unaff_EDI;
  
  lVar1 = 0;
  if (unaff_EDI == 0) {
LAB_1808c183f:
    if (0 < in_EAX) {
                    // WARNING: Subroutine does not return
      memcpy(lVar1,*unaff_RBX,(longlong)in_EAX << 3);
    }
    if ((0 < (int)unaff_RBX[2]) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*unaff_RBX,&UNK_180957f70,0x100,1);
    }
    *unaff_RBX = lVar1;
    *(int *)(unaff_RBX + 2) = unaff_EDI;
    return 0;
  }
  if (param_2 * 8 - 1U < 0x3fffffff) {
    lVar1 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2 * 8,&UNK_180957f70,0xf4,0)
    ;
    if (lVar1 != 0) {
      in_EAX = *(int *)((longlong)unaff_RBX + 0xc);
      goto LAB_1808c183f;
    }
  }
  return 0x26;
}



undefined8 FUN_1808c18a0(void)

{
  return 0x26;
}



undefined8 FUN_1808c18c0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = (**(code **)*param_2)(param_2);
  plVar1 = param_2 + 4;
  if (*(short *)(lVar3 + 0xc) == 0) {
    if (plVar1 == (longlong *)0x0) {
      return 0x1c;
    }
    plVar4 = (longlong *)*plVar1;
    if (plVar4 != plVar1) {
      iVar2 = 0;
      do {
        plVar4 = (longlong *)*plVar4;
        iVar2 = iVar2 + 1;
      } while (plVar4 != plVar1);
      if (iVar2 != 0) {
        return 0x1c;
      }
    }
    param_1 = param_1 + 0x510;
  }
  else {
    lVar3 = (**(code **)*param_2)(param_2);
    if (plVar1 == (longlong *)0x0) {
      return 0x1c;
    }
    plVar4 = (longlong *)*plVar1;
    if ((*(byte *)(lVar3 + 0xc4) & 1) == 0) {
      if (plVar4 != plVar1) {
        iVar2 = 0;
        do {
          plVar4 = (longlong *)*plVar4;
          iVar2 = iVar2 + 1;
        } while (plVar4 != plVar1);
        if (iVar2 != 0) {
          return 0x1c;
        }
      }
      param_1 = param_1 + 0x520;
    }
    else {
      if (plVar4 != plVar1) {
        iVar2 = 0;
        do {
          plVar4 = (longlong *)*plVar4;
          iVar2 = iVar2 + 1;
        } while (plVar4 != plVar1);
        if (iVar2 != 0) {
          return 0x1c;
        }
      }
      param_1 = param_1 + 0x500;
    }
  }
  param_2[5] = *(undefined8 *)(param_1 + 8);
  *plVar1 = param_1;
  *(longlong **)(param_1 + 8) = plVar1;
  *(longlong **)param_2[5] = plVar1;
  return 0;
}



undefined8 FUN_1808c19d0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  char acStackX_18 [16];
  
  if (param_2 == 0) {
    return 0x1f;
  }
  if (*(int *)(param_2 + 0xe4) == -1) {
    uVar2 = FUN_180853000(param_2,acStackX_18);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar3 = func_0x000180851460(param_2);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if ((char)uVar2 == (char)uVar3) {
      if (acStackX_18[0] == (char)uVar3) {
        plVar9 = (longlong *)(param_1 + 0x4d8);
        uVar6 = 0;
        iVar5 = *(int *)(param_1 + 0x4e4);
        if (0 < iVar5) {
          plVar4 = (longlong *)*plVar9;
          uVar8 = uVar6;
          do {
            if (*plVar4 == param_2) {
              if (-1 < (int)uVar8) {
                return 0;
              }
              break;
            }
            uVar8 = (ulonglong)((int)uVar8 + 1);
            uVar6 = uVar6 + 1;
            plVar4 = plVar4 + 1;
          } while ((longlong)uVar6 < (longlong)iVar5);
        }
        iVar5 = iVar5 + 1;
        if (*(int *)(param_1 + 0x4e8) < iVar5) {
          iVar7 = (int)((float)*(int *)(param_1 + 0x4e8) * 1.5);
          iVar1 = iVar5;
          if (iVar5 <= iVar7) {
            iVar1 = iVar7;
          }
          if (iVar1 < 8) {
            iVar7 = 8;
          }
          else if (iVar7 < iVar5) {
            iVar7 = iVar5;
          }
          iVar5 = FUN_1808c17c0(plVar9,iVar7);
          if (iVar5 != 0) {
            return 0;
          }
        }
        *(longlong *)(*plVar9 + (longlong)*(int *)(param_1 + 0x4e4) * 8) = param_2;
        *(int *)(param_1 + 0x4e4) = *(int *)(param_1 + 0x4e4) + 1;
        *(int *)(param_1 + 0x4e0) = *(int *)(param_1 + 0x4e0) + 1;
      }
      else {
        uVar2 = FUN_180851490(param_1 + 0x368,param_2);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
      }
    }
  }
  return 0;
}



undefined8 FUN_1808c1af0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  char acStackX_20 [8];
  
  lVar2 = *(longlong *)(param_1 + 0x7a0);
  if (lVar2 == 0) {
    return 0;
  }
  if (*(int *)(lVar2 + 0xe4) == -1) {
    uVar3 = FUN_180853000(lVar2,acStackX_20);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar4 = func_0x000180851460();
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    if ((char)uVar3 == (char)uVar4) {
      if (acStackX_20[0] == (char)uVar4) {
        iVar8 = 0;
        plVar1 = (longlong *)(param_1 + 0x4d8);
        iVar6 = *(int *)(param_1 + 0x4e4);
        if (0 < iVar6) {
          plVar5 = (longlong *)*plVar1;
          lVar7 = 0;
          do {
            if (*plVar5 == lVar2) {
              if (-1 < iVar8) goto FUN_1808c1c07;
              break;
            }
            iVar8 = iVar8 + 1;
            lVar7 = lVar7 + 1;
            plVar5 = plVar5 + 1;
          } while (lVar7 < iVar6);
        }
        iVar6 = iVar6 + 1;
        if (*(int *)(param_1 + 0x4e8) < iVar6) {
          iVar9 = (int)((float)*(int *)(param_1 + 0x4e8) * 1.5);
          iVar8 = iVar6;
          if (iVar6 <= iVar9) {
            iVar8 = iVar9;
          }
          if (iVar8 < 8) {
            iVar9 = 8;
          }
          else if (iVar9 < iVar6) {
            iVar9 = iVar6;
          }
          iVar6 = FUN_1808c17c0(plVar1,iVar9);
          if (iVar6 != 0) goto FUN_1808c1c07;
        }
        *(longlong *)(*plVar1 + (longlong)*(int *)(param_1 + 0x4e4) * 8) = lVar2;
        *(int *)(param_1 + 0x4e4) = *(int *)(param_1 + 0x4e4) + 1;
        *(int *)(param_1 + 0x4e0) = *(int *)(param_1 + 0x4e0) + 1;
      }
      else {
        uVar3 = FUN_180851490(param_1 + 0x368,lVar2);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
      }
    }
  }
FUN_1808c1c07:
  *(undefined8 *)(param_1 + 0x7a0) = 0;
  return 0;
}



undefined8 FUN_1808c1b7a(void)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong unaff_RBX;
  longlong unaff_RSI;
  
  iVar5 = 0;
  plVar1 = (longlong *)(unaff_RSI + 0x4d8);
  iVar3 = *(int *)(unaff_RSI + 0x4e4);
  if (0 < iVar3) {
    plVar2 = (longlong *)*plVar1;
    lVar4 = 0;
    do {
      if (*plVar2 == unaff_RBX) {
        if (-1 < iVar5) goto LAB_1808c1c02;
        break;
      }
      iVar5 = iVar5 + 1;
      lVar4 = lVar4 + 1;
      plVar2 = plVar2 + 1;
    } while (lVar4 < iVar3);
  }
  iVar3 = iVar3 + 1;
  if (*(int *)(unaff_RSI + 0x4e8) < iVar3) {
    iVar6 = (int)((float)*(int *)(unaff_RSI + 0x4e8) * 1.5);
    iVar5 = iVar3;
    if (iVar3 <= iVar6) {
      iVar5 = iVar6;
    }
    if (iVar5 < 8) {
      iVar6 = 8;
    }
    else if (iVar6 < iVar3) {
      iVar6 = iVar3;
    }
    iVar3 = FUN_1808c17c0(plVar1,iVar6);
    if (iVar3 != 0) goto LAB_1808c1c02;
  }
  *(longlong *)(*plVar1 + (longlong)*(int *)(unaff_RSI + 0x4e4) * 8) = unaff_RBX;
  *(int *)(unaff_RSI + 0x4e4) = *(int *)(unaff_RSI + 0x4e4) + 1;
  *(int *)(unaff_RSI + 0x4e0) = *(int *)(unaff_RSI + 0x4e0) + 1;
LAB_1808c1c02:
  *(undefined8 *)(unaff_RSI + 0x7a0) = 0;
  return 0;
}



undefined8 FUN_1808c1c07(void)

{
  longlong unaff_RSI;
  
  *(undefined8 *)(unaff_RSI + 0x7a0) = 0;
  return 0;
}



undefined8 FUN_1808c1c20(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char acStackX_10 [24];
  
  if (param_2 == 0) {
    return 0x1f;
  }
  acStackX_10[0] = '\0';
  uVar1 = func_0x0001808c36e0(param_2,acStackX_10);
  if ((int)uVar1 == 0) {
    if ((acStackX_10[0] == (char)uVar1) &&
       (uVar1 = FUN_1808c3700(param_1 + 0x3a8,param_2), (int)uVar1 != 0)) {
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



int FUN_1808c1c80(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  bool bVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    FUN_180768360(lVar1);
  }
  lVar4 = *(longlong *)(param_2 + 0x18);
  plVar3 = (longlong *)func_0x000180851be0(param_1 + 0x30,lVar4 + 0x10);
  bVar8 = plVar3 == (longlong *)0x0;
  if (bVar8) {
    plVar3 = (longlong *)func_0x000180851be0(param_1,lVar4 + 0x10);
  }
  if (plVar3 == (longlong *)0x0) {
    iVar2 = 0x1f;
    goto LAB_1808c1dad;
  }
  iVar5 = *(int *)((longlong)plVar3 + 0x24);
  if (iVar5 != 0) {
    if ((int)plVar3[1] == 0) {
      iVar2 = 0x1c;
      goto LAB_1808c1dad;
    }
    lVar4 = (longlong)(int)((int)plVar3[1] - 1U & *(uint *)(param_2 + 0x30));
    piVar7 = (int *)(*plVar3 + lVar4 * 4);
    iVar2 = *(int *)(*plVar3 + lVar4 * 4);
    if (iVar2 != -1) {
      lVar4 = plVar3[2];
      do {
        if (*(uint *)(lVar4 + (longlong)iVar2 * 0x10) == *(uint *)(param_2 + 0x30)) {
          iVar2 = *piVar7;
          lVar6 = (longlong)iVar2;
          *(undefined8 *)(lVar4 + 8 + lVar6 * 0x10) = 0;
          *piVar7 = *(int *)(lVar4 + 4 + lVar6 * 0x10);
          *(int *)(lVar4 + 4 + lVar6 * 0x10) = (int)plVar3[4];
          *(int *)((longlong)plVar3 + 0x24) = *(int *)((longlong)plVar3 + 0x24) + -1;
          *(int *)(plVar3 + 4) = iVar2;
          iVar5 = *(int *)((longlong)plVar3 + 0x24);
          break;
        }
        piVar7 = (int *)((longlong)iVar2 * 0x10 + 4 + lVar4);
        iVar2 = *piVar7;
      } while (iVar2 != -1);
    }
    iVar2 = 0;
    if (iVar5 != 0) goto LAB_1808c1dad;
  }
  if (bVar8) {
    iVar2 = FUN_180853840(param_1,plVar3 + 5);
  }
  else {
    iVar2 = FUN_180853840(param_1 + 0x30,plVar3 + 5);
  }
  if (iVar2 == 0) {
    FUN_1808babd0(plVar3,&UNK_180984cd0,0xe1);
    iVar2 = 0;
  }
LAB_1808c1dad:
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return iVar2;
}






