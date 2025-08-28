#include "TaleWorlds.Native.Split.h"

// 99_part_04_part045.c - 5 个函数

// 函数: void FUN_1802b13d0(longlong param_1)
void FUN_1802b13d0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    if (*(char *)(param_1 + 1) != '\0') {
      FUN_1802b0770();
      lVar3 = *(longlong *)(param_1 + 0x20);
    }
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined8 *)(lVar3 + 0xf0) = 0;
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    plVar2 = *(longlong **)(param_1 + 0x38);
    plVar4 = *(longlong **)(param_1 + 0x30);
    if (plVar4 != plVar2) {
      do {
        lVar3 = *plVar4;
        if (lVar3 != 0) {
          piVar1 = (int *)(lVar3 + 8);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            *(undefined8 *)(lVar3 + 0xf0) = 0;
          }
        }
        if (plVar4[0xd] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        if (plVar4[9] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        FUN_1802c00d0();
        if (plVar4[1] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        plVar4 = plVar4 + 0x11;
      } while (plVar4 != plVar2);
      plVar4 = *(longlong **)(param_1 + 0x30);
    }
    *(longlong **)(param_1 + 0x38) = plVar4;
  }
  return;
}






// 函数: void FUN_1802b14b0(undefined2 *param_1)
void FUN_1802b14b0(undefined2 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  
  lVar6 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar4 = *(int *)(param_1 + 0x30) << 0xd ^ *(uint *)(param_1 + 0x30);
  uVar4 = uVar4 >> 0x11 ^ uVar4;
  uVar4 = uVar4 << 5 ^ uVar4;
  *(uint *)(param_1 + 0x30) = uVar4;
  fVar8 = (float)(uVar4 - 1) * 2.3283064e-10;
  *(float *)(param_1 + 10) =
       ((fVar8 + fVar8) - 1.0) * *(float *)(*(longlong *)(param_1 + 0xc) + 0x74) +
       *(float *)(*(longlong *)(param_1 + 0xc) + 0x78);
  iVar3 = (int)((*(longlong *)(param_1 + 0x1c) - *(longlong *)(param_1 + 0x18)) / 0x88);
  lVar7 = (longlong)iVar3;
  if (0 < iVar3) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x18);
      lVar2 = *(longlong *)(lVar6 + 0x30 + lVar1);
      lVar5 = *(longlong *)(lVar6 + 0x28 + lVar1);
      if (lVar5 != lVar2) {
        do {
          FUN_1802b13d0(lVar5);
          if (*(longlong *)(lVar5 + 0x68) != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          if (*(longlong **)(lVar5 + 0x58) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(lVar5 + 0x58) + 0x38))();
          }
          FUN_1802bfac0();
          if (*(longlong **)(lVar5 + 0x18) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(lVar5 + 0x18) + 0x38))();
          }
          lVar5 = lVar5 + 0x90;
        } while (lVar5 != lVar2);
        lVar5 = *(longlong *)(lVar6 + 0x28 + lVar1);
      }
      *(longlong *)(lVar6 + 0x30 + lVar1) = lVar5;
      *(undefined8 *)(lVar6 + 0x70 + lVar1) = *(undefined8 *)(lVar6 + 0x68 + lVar1);
      *(undefined8 *)(lVar6 + 0x50 + lVar1) = *(undefined8 *)(lVar6 + 0x48 + lVar1);
      lVar6 = lVar6 + 0x88;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}






// 函数: void FUN_1802b1620(longlong param_1,undefined8 *param_2)
void FUN_1802b1620(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_1800b8500(*(longlong *)(param_1 + 0x20) + 0x150);
  FUN_1802bed10(*(longlong *)(param_1 + 0x20) + 0x150,
                *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x158),*param_2,param_2[1]);
  iVar3 = (int)((*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30)) / 0x88);
  lVar5 = (longlong)iVar3;
  if (0 < iVar3) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar6 + *(longlong *)(param_1 + 0x30));
      plVar2 = *(longlong **)(lVar1 + 0x158);
      plVar4 = *(longlong **)(lVar1 + 0x150);
      if (plVar4 != plVar2) {
        do {
          if ((longlong *)*plVar4 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar4 + 0x38))();
          }
          plVar4 = plVar4 + 1;
        } while (plVar4 != plVar2);
        plVar4 = *(longlong **)(lVar1 + 0x150);
      }
      *(longlong **)(lVar1 + 0x158) = plVar4;
      lVar1 = *(longlong *)(lVar6 + *(longlong *)(param_1 + 0x30));
      FUN_1802bed10(lVar1 + 0x150,*(undefined8 *)(lVar1 + 0x158),*param_2,param_2[1]);
      lVar6 = lVar6 + 0x88;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}






// 函数: void FUN_1802b1689(void)
void FUN_1802b1689(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong unaff_RBP;
  longlong unaff_R12;
  longlong lVar4;
  undefined8 *unaff_R15;
  
  lVar4 = 0;
  do {
    lVar1 = *(longlong *)(lVar4 + *(longlong *)(unaff_RBP + 0x30));
    plVar2 = *(longlong **)(lVar1 + 0x158);
    plVar3 = *(longlong **)(lVar1 + 0x150);
    if (plVar3 != plVar2) {
      do {
        if ((longlong *)*plVar3 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar3 + 0x38))();
        }
        plVar3 = plVar3 + 1;
      } while (plVar3 != plVar2);
      plVar3 = *(longlong **)(lVar1 + 0x150);
    }
    *(longlong **)(lVar1 + 0x158) = plVar3;
    lVar1 = *(longlong *)(lVar4 + *(longlong *)(unaff_RBP + 0x30));
    FUN_1802bed10(lVar1 + 0x150,*(undefined8 *)(lVar1 + 0x158),*unaff_R15,unaff_R15[1]);
    lVar4 = lVar4 + 0x88;
    unaff_R12 = unaff_R12 + -1;
  } while (unaff_R12 != 0);
  return;
}






// 函数: void FUN_1802b1725(void)
void FUN_1802b1725(void)

{
  return;
}



bool FUN_1802b1730(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ushort uStack_68;
  char cStack_66;
  undefined4 uStack_64;
  undefined1 uStack_60;
  undefined8 uStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  
  uVar6 = 0xfffffffffffffffe;
  iVar4 = 0;
  if (*(int *)(param_1 + 0xc) != 1) {
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_6c = 0xffffffff;
    cStack_66 = '\0';
    uStack_64 = 0xffffffff;
    uStack_60 = 1;
    uStack_58 = 0;
    lStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 3;
    uStack_30 = 0;
    uStack_68 = (ushort)(*(int *)(param_1 + 0xc) == -1);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x18);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    uVar5 = 0;
    iVar3 = iVar4;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))(plVar1);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x18);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      iVar3 = (**(code **)(*plVar1 + 0x1a8))(plVar1,&uStack_78,param_3,param_4,2);
      uVar5 = 0;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1);
      }
    }
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10);
    if (lVar2 != 0) {
      if (cStack_66 == '\0') {
        iVar4 = FUN_18022d470(lVar2,&uStack_78,param_3,param_4,uVar5,uVar6);
      }
      iVar3 = iVar3 + iVar4;
    }
    *(uint *)(param_1 + 0xc) = (uint)(iVar3 == 0);
    if (lStack_50 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return *(int *)(param_1 + 0xc) == 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




