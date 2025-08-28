#include "TaleWorlds.Native.Split.h"

// 99_part_13_part021.c - 4 个函数

// 函数: void FUN_1808b2530(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
void FUN_1808b2530(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_c8 [32];
  longlong *plStack_a8;
  longlong lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [40];
  ulonglong uStack_50;
  
  uStack_50 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  uStack_80 = param_5;
  iVar2 = *(int *)(param_1[4] + 0x40);
  lStack_98 = param_4;
  uStack_90 = param_2;
  lVar3 = (**(code **)*param_2)(param_2);
  plVar13 = *(longlong **)(lVar3 + 0x20);
  plVar4 = (longlong *)(lVar3 + 0x20);
  if (plVar13 != plVar4) {
    while ((int)plVar13[8] != iVar2) {
      if ((plVar13 == plVar4) || (plVar13 = (longlong *)*plVar13, plVar13 == plVar4))
      goto LAB_1808b25af;
    }
    if (plVar13 != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[4];
      plVar8 = (longlong *)0x0;
      if (plVar4 == plVar13) goto LAB_1808b2880;
      plVar1 = param_1 + 7;
      param_1[4] = (longlong)plVar13;
      plVar14 = (longlong *)(*plVar1 + -8);
      if (*plVar1 == 0) {
        plVar14 = plVar8;
      }
      plVar12 = plVar8;
      if (plVar14 != (longlong *)0x0) {
        plVar12 = plVar14 + 1;
      }
      if (plVar12 == plVar1) goto LAB_1808b26f1;
      goto LAB_1808b2611;
    }
  }
  goto LAB_1808b25af;
LAB_1808b2611:
  do {
    plVar14 = plVar12 + -1;
    if (plVar12 == (longlong *)0x0) {
      plVar14 = plVar8;
    }
    lVar3 = (**(code **)*plVar14)(plVar14);
    if (0 < (int)plVar13[3]) {
      plVar11 = plVar8;
      do {
        iVar2 = (int)plVar11;
        if ((*(longlong *)(plVar13[2] + (longlong)iVar2 * 0x10) == *(longlong *)(lVar3 + 0x10)) &&
           (*(longlong *)(plVar13[2] + 8 + (longlong)iVar2 * 0x10) == *(longlong *)(lVar3 + 0x18)))
        {
          iVar2 = (**(code **)(*plVar14 + 0x20))(plVar14,param_3);
          if (iVar2 != 0) goto LAB_1808b25af;
          param_4 = lStack_98;
          if (plVar12 == plVar1) goto LAB_1808b26f1;
          plVar14 = (longlong *)(*plVar12 + -8);
          if (*plVar12 == 0) {
            plVar14 = plVar8;
          }
          plVar12 = plVar8;
          if (plVar14 != (longlong *)0x0) {
            plVar12 = plVar14 + 1;
          }
          goto LAB_1808b26e3;
        }
        plVar11 = (longlong *)(ulonglong)(iVar2 + 1U);
      } while ((int)(iVar2 + 1U) < (int)plVar13[3]);
    }
    if (plVar12 == plVar1) goto LAB_1808b25af;
    lVar3 = *plVar12;
    plVar11 = (longlong *)(lVar3 + -8);
    if (lVar3 == 0) {
      plVar11 = plVar8;
    }
    plVar5 = plVar8;
    if (plVar11 != (longlong *)0x0) {
      plVar5 = plVar11 + 1;
    }
    *(longlong *)plVar12[1] = lVar3;
    *(longlong *)(*plVar12 + 8) = plVar12[1];
    plVar12[1] = (longlong)plVar12;
    *plVar12 = (longlong)plVar12;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    plVar12 = plVar5;
LAB_1808b26e3:
    param_4 = lStack_98;
  } while (plVar12 != plVar1);
LAB_1808b26f1:
  for (plVar14 = (longlong *)plVar13[2];
      ((longlong *)plVar13[2] <= plVar14 &&
      (plVar14 < (longlong *)plVar13[2] + (longlong)(int)plVar13[3] * 2)); plVar14 = plVar14 + 2) {
    if (0 < (int)plVar4[3]) {
      plVar12 = plVar8;
      do {
        iVar2 = (int)plVar12;
        if ((*(longlong *)(plVar4[2] + (longlong)iVar2 * 0x10) == *plVar14) &&
           (*(longlong *)(plVar4[2] + 8 + (longlong)iVar2 * 0x10) == plVar14[1]))
        goto LAB_1808b27f7;
        plVar12 = (longlong *)(ulonglong)(iVar2 + 1U);
      } while ((int)(iVar2 + 1U) < (int)plVar4[3]);
    }
    plStack_a8 = &lStack_98;
    lStack_98 = 0;
    iVar2 = FUN_1808b74d0(param_4,plVar14,plVar13,uStack_80);
    if (iVar2 != 0) goto LAB_1808b25af;
    plVar12 = (longlong *)(lStack_98 + 0x30);
    if (lStack_98 == 0) {
      plVar12 = plVar8;
    }
    plVar11 = plVar12 + 1;
    if (plVar12 == (longlong *)0x0) {
      plVar11 = plVar8;
    }
    if (plVar11 == (longlong *)0x0) goto LAB_1808b25af;
    plVar5 = (longlong *)*plVar11;
    plVar10 = plVar8;
    if (plVar5 != plVar11) {
      do {
        plVar5 = (longlong *)*plVar5;
        uVar9 = (int)plVar10 + 1;
        plVar10 = (longlong *)(ulonglong)uVar9;
      } while (plVar5 != plVar11);
      if (uVar9 != 0) goto LAB_1808b25af;
    }
    plVar11[1] = param_1[8];
    *plVar11 = (longlong)plVar1;
    param_1[8] = (longlong)plVar11;
    *(longlong **)plVar11[1] = plVar11;
    (**(code **)(*plVar12 + 0x10))(plVar12,param_1);
    iVar2 = FUN_1808b3060(param_1,0);
    if (iVar2 != 0) goto LAB_1808b25af;
LAB_1808b27f7:
  }
  if (*(int *)(param_1[4] + 0x28) == 0) {
    if (param_1[9] != 0) {
      *(longlong *)param_1[1] = *param_1;
      *(longlong *)(*param_1 + 8) = param_1[1];
      param_1[1] = (longlong)param_1;
      *param_1 = (longlong)param_1;
      FUN_1808b22c0();
      param_1[9] = 0;
    }
  }
  else if (param_1[9] == 0) {
    lVar3 = plVar13[8];
    lStack_98 = 0;
    uVar6 = (**(code **)*uStack_90)();
    iVar2 = thunk_FUN_1808b86e0(param_4,uVar6,(int)lVar3,&lStack_98);
    if ((iVar2 != 0) || (iVar2 = FUN_1808b3850(param_1,lStack_98), iVar2 != 0)) goto LAB_1808b25af;
  }
LAB_1808b2880:
  lVar3 = param_1[6];
  if (lVar3 == 0) {
    puVar7 = (undefined4 *)FUN_180847820();
    uVar15 = *puVar7;
    uVar16 = puVar7[1];
    uVar17 = puVar7[2];
    uVar18 = puVar7[3];
  }
  else {
    uVar15 = *(undefined4 *)(lVar3 + 0x10);
    uVar16 = *(undefined4 *)(lVar3 + 0x14);
    uVar17 = *(undefined4 *)(lVar3 + 0x18);
    uVar18 = *(undefined4 *)(lVar3 + 0x1c);
  }
  lVar3 = param_1[4];
  uStack_90 = (undefined8 *)CONCAT44(uVar16,uVar15);
  uStack_88 = CONCAT44(uVar18,uVar17);
  if ((uStack_90 == *(undefined8 **)(lVar3 + 0x30)) && (uStack_88 == *(longlong *)(lVar3 + 0x38))) {
    if (param_1[6] == 0) goto LAB_1808b25af;
    lVar3 = param_1[6] + 0x10;
    plVar8 = (longlong *)(**(code **)(*(longlong *)*param_3 + 0x260))((longlong *)*param_3,lVar3,1);
    if (plVar8 == (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18084b240(lVar3,auStack_78);
    }
  }
  else if (((*(int *)(lVar3 + 0x30) != 0) ||
           (((*(int *)(lVar3 + 0x34) != 0 || (*(int *)(lVar3 + 0x38) != 0)) ||
            (*(int *)(lVar3 + 0x3c) != 0)))) &&
          (plVar8 = (longlong *)
                    (**(code **)(*(longlong *)*param_3 + 0x260))
                              ((longlong *)*param_3,lVar3 + 0x30,1), plVar8 == (longlong *)0x0)) {
                    // WARNING: Subroutine does not return
    FUN_18084b240(lVar3 + 0x30,auStack_78);
  }
  param_1[6] = (longlong)plVar8;
LAB_1808b25af:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_50 ^ (ulonglong)auStack_c8);
}



undefined8 FUN_1808b2950(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  undefined8 uStackX_8;
  
  uVar12 = 0;
  uVar14 = uVar12;
  if (0 < (int)param_1[3]) {
    do {
      lVar7 = *(longlong *)(uVar14 + param_1[2]);
      iVar3 = *(int *)(*(longlong *)(lVar7 + 0x20) + 0x40);
      lVar4 = (**(code **)*param_1)(param_1);
      plVar11 = *(longlong **)(lVar4 + 0x20);
      plVar5 = (longlong *)(lVar4 + 0x20);
      if (plVar11 != plVar5) {
        while ((int)plVar11[8] != iVar3) {
          if ((plVar11 == plVar5) || (plVar11 = (longlong *)*plVar11, plVar11 == plVar5))
          goto LAB_1808b29bf;
        }
        if (plVar11 != (longlong *)0x0) {
          uVar6 = (**(code **)(*param_1 + 0x38))(param_1);
          uVar8 = (**(code **)(*param_1 + 0x30))(param_1);
          uVar6 = FUN_1808b2530(lVar7,param_1,param_2,uVar8,uVar6);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
          uVar12 = (ulonglong)((int)uVar12 + 1);
          uVar14 = uVar14 + 8;
          goto LAB_1808b2aa8;
        }
      }
LAB_1808b29bf:
      plVar5 = (longlong *)param_1[2];
      plVar11 = plVar5;
      while( true ) {
        if ((plVar11 < plVar5) || (iVar3 = (int)param_1[3], plVar5 + iVar3 <= plVar11))
        goto LAB_1808b2aa8;
        lVar4 = *plVar11;
        if (*(int *)(*(longlong *)(lVar4 + 0x20) + 0x40) ==
            *(int *)(*(longlong *)(lVar7 + 0x20) + 0x40)) break;
        plVar11 = plVar11 + 1;
      }
      iVar9 = (int)((longlong)plVar11 - (longlong)plVar5 >> 3);
      if ((iVar9 < 0) || (iVar3 <= iVar9)) {
        return 0x1c;
      }
      iVar13 = (iVar3 - iVar9) + -1;
      if (0 < iVar13) {
                    // WARNING: Subroutine does not return
        memmove(plVar5 + iVar9,plVar5 + iVar9 + 1,(longlong)iVar13 << 3);
      }
      *(int *)(param_1 + 3) = iVar3 + -1;
      uVar6 = (**(code **)(*param_1 + 0x30))(param_1);
      uVar6 = FUN_1808b8520(uVar6,lVar4);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
LAB_1808b2aa8:
    } while ((int)uVar12 < (int)param_1[3]);
  }
  uVar6 = (**(code **)*param_1)(param_1);
  cVar2 = func_0x0001808c5870(param_2,uVar6);
  if (cVar2 != '\0') {
    lVar7 = (**(code **)*param_1)(param_1);
    for (puVar1 = *(undefined8 **)(lVar7 + 0x20); puVar1 != (undefined8 *)(lVar7 + 0x20);
        puVar1 = (undefined8 *)*puVar1) {
      plVar5 = (longlong *)param_1[2];
      plVar11 = plVar5;
      while( true ) {
        if ((plVar11 < plVar5) || (plVar5 + (int)param_1[3] <= plVar11)) goto LAB_1808b2b4b;
        if (*(int *)(*(longlong *)(*plVar11 + 0x20) + 0x40) == *(int *)(puVar1 + 8)) break;
        plVar11 = plVar11 + 1;
      }
      if (*plVar11 != 0) goto LAB_1808b2c12;
LAB_1808b2b4b:
      uStackX_8 = 0;
      uVar6 = (**(code **)(*param_1 + 0x38))(param_1);
      uVar8 = (**(code **)(*param_1 + 0x30))(param_1);
      uVar8 = FUN_1808b7c00(uVar8,puVar1,param_1,uVar6,&uStackX_8);
      uVar6 = uStackX_8;
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      uVar10 = (int)*(uint *)((longlong)param_1 + 0x1c) >> 0x1f;
      iVar3 = (*(uint *)((longlong)param_1 + 0x1c) ^ uVar10) - uVar10;
      iVar9 = (int)param_1[3] + 1;
      if (iVar3 < iVar9) {
        iVar13 = (int)((float)iVar3 * 1.5);
        iVar3 = iVar9;
        if (iVar9 <= iVar13) {
          iVar3 = iVar13;
        }
        if (iVar3 < 8) {
          iVar13 = 8;
        }
        else if (iVar13 < iVar9) {
          iVar13 = iVar9;
        }
        uVar8 = FUN_180747f10(param_1 + 2,iVar13);
        if ((int)uVar8 != 0) {
          return uVar8;
        }
      }
      *(undefined8 *)(param_1[2] + (longlong)(int)param_1[3] * 8) = uVar6;
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      uVar8 = FUN_1808b3060(uVar6,0);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      uVar6 = FUN_1808d8e90(param_1[1],uVar6);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
LAB_1808b2c12:
      if (puVar1 == (undefined8 *)(lVar7 + 0x20)) {
        return 0;
      }
    }
  }
  return 0;
}



undefined8 FUN_1808b2ab8(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 *in_RAX;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 unaff_RBX;
  longlong *unaff_RSI;
  longlong *plVar10;
  undefined8 extraout_XMM0_Qa;
  
  uVar5 = (*(code *)*in_RAX)();
  cVar3 = func_0x0001808c5870(extraout_XMM0_Qa,uVar5);
  if (cVar3 != '\0') {
    lVar6 = (**(code **)*unaff_RSI)();
    for (puVar1 = *(undefined8 **)(lVar6 + 0x20); puVar1 != (undefined8 *)(lVar6 + 0x20);
        puVar1 = (undefined8 *)*puVar1) {
      plVar2 = (longlong *)unaff_RSI[2];
      plVar10 = plVar2;
      while( true ) {
        if ((plVar10 < plVar2) || (plVar2 + (int)unaff_RSI[3] <= plVar10)) goto LAB_1808b2b4b;
        if (*(int *)(*(longlong *)(*plVar10 + 0x20) + 0x40) == *(int *)(puVar1 + 8)) break;
        plVar10 = plVar10 + 1;
      }
      if (*plVar10 != 0) goto LAB_1808b2c12;
LAB_1808b2b4b:
      (**(code **)(*unaff_RSI + 0x38))();
      uVar5 = (**(code **)(*unaff_RSI + 0x30))();
      uVar5 = FUN_1808b7c00(uVar5,puVar1);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      uVar8 = (int)*(uint *)((longlong)unaff_RSI + 0x1c) >> 0x1f;
      iVar4 = (*(uint *)((longlong)unaff_RSI + 0x1c) ^ uVar8) - uVar8;
      iVar7 = (int)unaff_RSI[3] + 1;
      if (iVar4 < iVar7) {
        iVar9 = (int)((float)iVar4 * 1.5);
        iVar4 = iVar7;
        if (iVar7 <= iVar9) {
          iVar4 = iVar9;
        }
        if (iVar4 < 8) {
          iVar9 = 8;
        }
        else if (iVar9 < iVar7) {
          iVar9 = iVar7;
        }
        uVar5 = FUN_180747f10(unaff_RSI + 2,iVar9);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
      }
      *(undefined8 *)(unaff_RSI[2] + (longlong)(int)unaff_RSI[3] * 8) = unaff_RBX;
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + 1;
      uVar5 = FUN_1808b3060(unaff_RBX);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      uVar5 = FUN_1808d8e90(unaff_RSI[1],unaff_RBX);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
LAB_1808b2c12:
      if (puVar1 == (undefined8 *)(lVar6 + 0x20)) {
        return 0;
      }
    }
  }
  return 0;
}



undefined8 FUN_1808b2b38(void)

{
  return 0x1c;
}



undefined8 FUN_1808b2b42(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 unaff_RBX;
  longlong *unaff_RBP;
  longlong *unaff_RSI;
  longlong *plVar7;
  longlong *unaff_R15;
  float unaff_XMM6_Da;
  
code_r0x0001808b2b42:
  if (param_1 != 0) goto LAB_1808b2c12;
  do {
    (**(code **)(*unaff_RSI + 0x38))();
    uVar3 = (**(code **)(*unaff_RSI + 0x30))();
    uVar3 = FUN_1808b7c00(uVar3,unaff_R15);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar5 = (int)*(uint *)((longlong)unaff_RSI + 0x1c) >> 0x1f;
    iVar2 = (*(uint *)((longlong)unaff_RSI + 0x1c) ^ uVar5) - uVar5;
    iVar4 = (int)unaff_RSI[3] + 1;
    if (iVar2 < iVar4) {
      iVar6 = (int)((float)iVar2 * unaff_XMM6_Da);
      iVar2 = iVar4;
      if (iVar4 <= iVar6) {
        iVar2 = iVar6;
      }
      if (iVar2 < 8) {
        iVar6 = 8;
      }
      else if (iVar6 < iVar4) {
        iVar6 = iVar4;
      }
      uVar3 = FUN_180747f10(unaff_RSI + 2,iVar6);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    *(undefined8 *)(unaff_RSI[2] + (longlong)(int)unaff_RSI[3] * 8) = unaff_RBX;
    *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + 1;
    uVar3 = FUN_1808b3060(unaff_RBX);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = FUN_1808d8e90(unaff_RSI[1],unaff_RBX);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
LAB_1808b2c12:
    if ((unaff_R15 == unaff_RBP) || (unaff_R15 = (longlong *)*unaff_R15, unaff_R15 == unaff_RBP)) {
      return 0;
    }
    plVar1 = (longlong *)unaff_RSI[2];
    for (plVar7 = plVar1; (plVar1 <= plVar7 && (plVar7 < plVar1 + (int)unaff_RSI[3]));
        plVar7 = plVar7 + 1) {
      param_1 = *plVar7;
      if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x40) == *(int *)(unaff_R15 + 8))
      goto code_r0x0001808b2b42;
    }
  } while( true );
}






// 函数: void FUN_1808b2c2a(void)
void FUN_1808b2c2a(void)

{
  return;
}



undefined8 FUN_1808b2c50(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar4 = (longlong *)(param_1 + 0x38);
  if (((longlong *)*plVar4 != plVar4) || (*(longlong **)(param_1 + 0x40) != plVar4)) {
    return 1;
  }
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    plVar5 = (longlong *)0x0;
    plVar4 = (longlong *)(*(longlong *)(lVar1 + 0x10) + -8);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      plVar4 = plVar5;
    }
    plVar2 = plVar5;
    if (plVar4 != (longlong *)0x0) {
      plVar2 = plVar4 + 1;
    }
    while (plVar2 != (longlong *)(lVar1 + 0x10)) {
      plVar4 = plVar2 + -1;
      if (plVar2 == (longlong *)0x0) {
        plVar4 = plVar5;
      }
      cVar3 = (**(code **)(*plVar4 + 8))();
      if (cVar3 != '\0') {
        return 1;
      }
      if (plVar2 == (longlong *)(lVar1 + 0x10)) {
        return 0;
      }
      plVar4 = (longlong *)(*plVar2 + -8);
      if (*plVar2 == 0) {
        plVar4 = plVar5;
      }
      plVar2 = plVar5;
      if (plVar4 != (longlong *)0x0) {
        plVar2 = plVar4 + 1;
      }
    }
  }
  return 0;
}






// 函数: void FUN_1808b2d20(longlong param_1)
void FUN_1808b2d20(longlong param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x5c) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x54);
    if (*(longlong *)(param_1 + 0x30) != 0) {
      uVar1 = func_0x0001808c6500();
      *(undefined4 *)(param_1 + 0x58) = uVar1;
    }
  }
  return;
}



undefined8 FUN_1808b2d60(undefined4 *param_1,float param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  
  switch(*param_1) {
  case 0:
    fVar2 = *param_3;
    if (param_2 <= *param_3) {
      fVar2 = param_2;
    }
    *param_3 = fVar2;
    return 0;
  case 1:
    fVar2 = *param_3;
    if (*param_3 <= param_2) {
      fVar2 = param_2;
    }
    *param_3 = fVar2;
    return 0;
  case 2:
    break;
  case 3:
    *param_3 = param_2 + *param_3;
    return 0;
  case 4:
    param_2 = param_2 * *param_3;
  case 5:
    *param_3 = param_2;
    return 0;
  default:
    return 0x1c;
  }
  iVar1 = param_1[1];
  if (iVar1 != 1) {
    if (*(longlong *)(param_1 + 0xc) == 0) {
      fVar2 = 0.0;
    }
    else {
      fVar2 = (float)func_0x0001808c6500(*(longlong *)(param_1 + 0xc),0);
      iVar1 = param_1[1];
    }
    param_2 = param_2 - fVar2;
  }
  if ((iVar1 == 1) && ((*param_3 == -3.4028235e+38 || (param_2 <= -80.0)))) {
    *param_3 = -3.4028235e+38;
    return 0;
  }
  *param_3 = *param_3 + param_2;
  return 0;
}



undefined8 FUN_1808b2f30(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 auStackX_8 [2];
  
  plVar1 = (longlong *)param_1[2];
  plVar5 = plVar1;
  while( true ) {
    if ((plVar5 < plVar1) || (plVar1 + (int)param_1[3] <= plVar5)) goto LAB_1808b2faa;
    lVar2 = *plVar5;
    if (*(int *)(*(longlong *)(lVar2 + 0x20) + 0x40) == param_2) break;
    plVar5 = plVar5 + 1;
  }
  if (lVar2 != 0) {
    uVar4 = FUN_1808b3060(lVar2,0);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uVar4 = FUN_1808d8e90(param_1[1],lVar2);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    goto FUN_1808b2ff2;
  }
LAB_1808b2faa:
  auStackX_8[0] = 0;
  uVar4 = (**(code **)*param_1)();
  iVar3 = FUN_1808b05f0(uVar4,param_2,auStackX_8);
  uVar6 = 0;
  if (iVar3 == 0) {
    uVar6 = auStackX_8[0];
  }
  uVar4 = (**(code **)(*param_1 + 8))(param_1,param_2,uVar6,0);
  if ((int)uVar4 == 0) {
FUN_1808b2ff2:
    uVar4 = 0;
  }
  return uVar4;
}



undefined8 FUN_1808b2fad(void)

{
  undefined8 *in_RAX;
  undefined8 uVar1;
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  undefined4 uStack0000000000000040;
  
  uStack0000000000000040 = 0;
  uVar1 = (*(code *)*in_RAX)();
  FUN_1808b05f0(uVar1,unaff_ESI,&stack0x00000040);
  uVar1 = (**(code **)(*unaff_RDI + 8))();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 FUN_1808b2ff2(void)

{
  return 0;
}



undefined8 FUN_1808b3010(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  while( true ) {
    if (puVar1 == (undefined8 *)(param_1 + 0x20)) {
      return 0;
    }
    uVar2 = FUN_1808b3060(puVar1,param_2);
    if ((int)uVar2 != 0) break;
    if (puVar1 == (undefined8 *)(param_1 + 0x20)) {
      return 0;
    }
    puVar1 = (undefined8 *)*puVar1;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808b3060(longlong param_1,undefined8 param_2)
void FUN_1808b3060(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined1 auStack_138 [32];
  uint uStack_118;
  undefined8 uStack_110;
  longlong lStack_108;
  uint uStack_100;
  uint uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  float fStack_e0;
  float fStack_dc;
  int iStack_d8;
  longlong lStack_d0;
  ulonglong uStack_c8;
  
  uStack_c8 = _DAT_180bf00a8 ^ (ulonglong)auStack_138;
  uStack_110 = param_2;
  lStack_108 = param_1;
  if ((*(byte *)(param_1 + 0x5c) & 1) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x30);
    uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x20) + 0x4a);
    uVar12 = (uint)uVar2;
    uStack_118 = uVar12;
    uStack_f8 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))
                          (*(longlong **)(param_1 + 0x28),
                           *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x40));
    plVar11 = (longlong *)0x0;
    uVar17 = 0;
    uVar3 = *(ushort *)(*(longlong *)(param_1 + 0x20) + 0x48);
    uStack_100 = (uint)uVar3;
    uStack_f4 = 0;
    fStack_e0 = 0.0;
    fStack_dc = 1.0;
    iStack_d8 = 0;
    if ((uVar2 == 0) || (uVar2 == 1)) {
      uStack_f0 = 0;
      uStack_e8 = 0;
      switch(uVar3) {
      case 0:
        uVar17 = 0x7f7fffff;
        uStack_f4 = 0x7f7fffff;
        break;
      case 1:
        uStack_f4 = 0xff7fffff;
        uVar17 = 0xff7fffff;
        break;
      case 4:
        uStack_f4 = 0x3f800000;
        uVar17 = 0x3f800000;
      }
    }
    uStack_fc = uVar12;
    lStack_d0 = lVar4;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      iVar8 = FUN_1808b35b0(*(longlong *)(param_1 + 0x48),&uStack_100);
      if (iVar8 != 0) goto LAB_1808b342e;
      uStack_118 = uStack_fc;
      uVar17 = uStack_f4;
    }
    lVar4 = lStack_d0;
    uVar6 = uStack_100;
    uVar12 = uStack_118;
    plVar1 = (longlong *)(param_1 + 0x38);
    plVar10 = (longlong *)(*(longlong *)(param_1 + 0x38) + -8);
    if (*(longlong *)(param_1 + 0x38) == 0) {
      plVar10 = plVar11;
    }
    plVar5 = plVar11;
    fVar16 = fStack_e0;
    fVar18 = fStack_dc;
    if (plVar10 != (longlong *)0x0) {
      plVar5 = plVar10 + 1;
    }
    while (plVar5 != plVar1) {
      plVar10 = plVar5 + -1;
      if (plVar5 == (longlong *)0x0) {
        plVar10 = plVar11;
      }
      fVar13 = (float)(**(code **)(*plVar10 + 8))(plVar10);
      if (uVar12 == 0) {
        lVar9 = (**(code **)*plVar10)(plVar10);
        iVar8 = *(int *)(lVar9 + 0x48);
        if (lVar4 == 0) {
          fVar14 = 100.0;
        }
        else {
          fVar14 = (float)func_0x0001808c64d0(lVar4);
        }
        fVar13 = fVar13 * fVar14 * 0.01;
        if ((iVar8 == 0) && (uVar6 == 4)) {
          fVar18 = fVar18 * fVar13;
        }
        else {
LAB_1808b32c9:
          fVar16 = fVar16 + fVar13;
          fStack_e0 = fVar16;
        }
      }
      else if (uVar12 == 1) {
        if (lVar4 != 0) {
          fVar13 = (float)func_0x0001808c6590(lVar4,fVar13);
        }
        if ((fVar16 != -3.4028235e+38) && (-80.0 < fVar13)) goto LAB_1808b32c9;
        fVar16 = -3.4028235e+38;
        fStack_e0 = fVar16;
      }
      param_2 = uStack_110;
      param_1 = lStack_108;
      if (plVar5 == plVar1) break;
      plVar10 = (longlong *)(*plVar5 + -8);
      if (*plVar5 == 0) {
        plVar10 = plVar11;
      }
      plVar5 = plVar11;
      if (plVar10 != (longlong *)0x0) {
        plVar5 = plVar10 + 1;
      }
    }
    fStack_dc = fVar18;
    iVar8 = iStack_d8;
    fVar18 = fStack_dc;
    uVar12 = uStack_118;
    fVar13 = (float)FUN_1808b3770(&uStack_100,uVar17,iStack_d8);
    do {
      fVar14 = *(float *)((longlong)&uStack_e8 + (longlong)plVar11 * 4);
      if (fVar14 != 0.0) {
        fVar15 = (float)FUN_1808b3770(&uStack_100,
                                      *(undefined4 *)((longlong)&uStack_f0 + (longlong)plVar11 * 4),
                                      iVar8 + 1);
        fVar13 = fVar13 + (fVar15 - fVar13) * fVar14;
      }
      plVar11 = (longlong *)((longlong)plVar11 + 1);
    } while ((longlong)plVar11 < 2);
    if (uVar12 == 1) {
      if (-80.0 < fVar13) {
        if ((fVar13 == -3.4028235e+38) || (fVar16 <= -80.0)) {
          fVar13 = -3.4028235e+38;
        }
        else {
          fVar13 = fVar13 + fVar16;
        }
      }
    }
    else {
      fVar13 = (fVar16 + fVar13) * fVar18;
      if ((uVar12 == 0) && (lVar4 != 0)) {
        fVar13 = (float)func_0x0001808c6590(lVar4,fVar13);
      }
    }
    if ((fVar13 != *(float *)(param_1 + 0x54)) ||
       (cVar7 = FUN_1808b3900(param_1,param_2), cVar7 != '\0')) {
      *(float *)(param_1 + 0x54) = fVar13;
      if ((*(uint *)(param_1 + 0x5c) >> 3 & 1) == 0) {
        FUN_1808b20c0(param_1,fVar13,param_2);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))
                  (*(longlong **)(param_1 + 0x28),param_1);
      }
    }
  }
LAB_1808b342e:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_c8 ^ (ulonglong)auStack_138);
}






