#include "TaleWorlds.Native.Split.h"

// 03_rendering_part337.c - 11 个函数

// 函数: void FUN_1804485c0(longlong *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4,
void FUN_1804485c0(longlong *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  longlong *plStackX_8;
  longlong *plStack_b8;
  longlong *plStack_b0;
  longlong alStack_a8 [3];
  longlong *plStack_90;
  char cStack_88;
  char cStack_87;
  char cStack_86;
  longlong *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  longlong *plStack_48;
  
  uStack_50 = 0xfffffffffffffffe;
  plStack_48 = param_1;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x28))();
    plStackX_8 = (longlong *)CONCAT44(plStackX_8._4_4_,param_8);
    uStack_68 = param_7;
    uStack_70 = param_6;
    uStack_78 = param_5;
    plStack_80 = param_1;
    (**(code **)(*param_1 + 0x28))();
    plStack_b8 = (longlong *)0x0;
    plStack_b0 = (longlong *)0x0;
    plStack_80 = alStack_a8;
    plStack_90 = (longlong *)0x0;
    alStack_a8[1] = 0;
    alStack_a8[0]._0_1_ = 0;
    FUN_18022f2e0(&plStack_b8,param_1,0);
    (**(code **)(*param_1 + 0x38))(param_1);
    plVar1 = plStack_b0;
    iVar4 = (int)plStack_b0[2];
    plStack_80 = (longlong *)CONCAT44(plStack_80._4_4_,iVar4);
    iVar12 = iVar4 + 1;
    iVar5 = *(int *)((longlong)plStack_b0 + 0x14);
    if (iVar5 < iVar12) {
      if (iVar5 < 2) {
        *(undefined4 *)((longlong)plStack_b0 + 0x14) = 8;
      }
      else {
        *(int *)((longlong)plStack_b0 + 0x14) = (iVar5 >> 1) + iVar5;
      }
      FUN_1800846d0(plStack_b0 + 2);
    }
    *(int *)(plVar1 + 2) = iVar12;
    uVar8 = param_2[1];
    uVar9 = param_2[2];
    uVar10 = param_2[3];
    puVar2 = (undefined4 *)(plStack_b0[3] + (longlong)iVar4 * 0x10);
    *puVar2 = *param_2;
    puVar2[1] = uVar8;
    puVar2[2] = uVar9;
    puVar2[3] = uVar10;
    plVar1 = plStack_b0 + 7;
    if ((int)*plVar1 != 0) {
      iVar5 = *(int *)((longlong)plStack_b0 + 0x3c);
      if (iVar5 < iVar12) {
        if (iVar5 < 2) {
          *(undefined4 *)((longlong)plStack_b0 + 0x3c) = 8;
        }
        else {
          *(int *)((longlong)plStack_b0 + 0x3c) = (iVar5 >> 1) + iVar5;
        }
        FUN_1800846d0(plVar1);
      }
      *(int *)plVar1 = iVar12;
      uVar8 = param_2[1];
      uVar9 = param_2[2];
      uVar10 = param_2[3];
      puVar2 = (undefined4 *)(plStack_b0[8] + (longlong)iVar4 * 0x10);
      *puVar2 = *param_2;
      puVar2[1] = uVar8;
      puVar2[2] = uVar9;
      puVar2[3] = uVar10;
    }
    cStack_88 = 1;
    cStack_86 = 1;
    plVar1 = plStack_b0 + 2;
    iVar4 = (int)*plVar1;
    iVar12 = iVar4 + 1;
    iVar5 = *(int *)((longlong)plStack_b0 + 0x14);
    if (iVar5 < iVar12) {
      if (iVar5 < 2) {
        *(undefined4 *)((longlong)plStack_b0 + 0x14) = 8;
      }
      else {
        *(int *)((longlong)plStack_b0 + 0x14) = (iVar5 >> 1) + iVar5;
      }
      FUN_1800846d0(plVar1);
    }
    *(int *)plVar1 = iVar12;
    uVar8 = param_3[1];
    uVar9 = param_3[2];
    uVar10 = param_3[3];
    puVar2 = (undefined4 *)(plStack_b0[3] + (longlong)iVar4 * 0x10);
    *puVar2 = *param_3;
    puVar2[1] = uVar8;
    puVar2[2] = uVar9;
    puVar2[3] = uVar10;
    plVar1 = plStack_b0 + 7;
    if ((int)*plVar1 != 0) {
      iVar5 = *(int *)((longlong)plStack_b0 + 0x3c);
      if (iVar5 < iVar12) {
        if (iVar5 < 2) {
          *(undefined4 *)((longlong)plStack_b0 + 0x3c) = 8;
        }
        else {
          *(int *)((longlong)plStack_b0 + 0x3c) = (iVar5 >> 1) + iVar5;
        }
        FUN_1800846d0(plVar1);
      }
      *(int *)plVar1 = iVar12;
      uVar8 = param_3[1];
      uVar9 = param_3[2];
      uVar10 = param_3[3];
      puVar2 = (undefined4 *)(plStack_b0[8] + (longlong)iVar4 * 0x10);
      *puVar2 = *param_3;
      puVar2[1] = uVar8;
      puVar2[2] = uVar9;
      puVar2[3] = uVar10;
    }
    cStack_88 = 1;
    cStack_86 = 1;
    plVar1 = plStack_b0 + 2;
    iVar5 = (int)*plVar1;
    iVar11 = iVar5 + 1;
    iVar12 = *(int *)((longlong)plStack_b0 + 0x14);
    if (iVar12 < iVar11) {
      if (iVar12 < 2) {
        *(undefined4 *)((longlong)plStack_b0 + 0x14) = 8;
      }
      else {
        *(int *)((longlong)plStack_b0 + 0x14) = (iVar12 >> 1) + iVar12;
      }
      FUN_1800846d0(plVar1);
    }
    plVar7 = plStack_b0;
    *(int *)plVar1 = iVar11;
    uVar8 = *(undefined4 *)((longlong)param_4 + 4);
    uVar9 = *(undefined4 *)(param_4 + 1);
    uVar10 = *(undefined4 *)((longlong)param_4 + 0xc);
    puVar2 = (undefined4 *)(plStack_b0[3] + (longlong)iVar5 * 0x10);
    *puVar2 = *(undefined4 *)param_4;
    puVar2[1] = uVar8;
    puVar2[2] = uVar9;
    puVar2[3] = uVar10;
    if ((int)plStack_b0[7] != 0) {
      iVar12 = *(int *)((longlong)plStack_b0 + 0x3c);
      if (iVar12 < iVar11) {
        if (iVar12 < 2) {
          *(undefined4 *)((longlong)plStack_b0 + 0x3c) = 8;
        }
        else {
          *(int *)((longlong)plStack_b0 + 0x3c) = (iVar12 >> 1) + iVar12;
        }
        FUN_1800846d0(plStack_b0 + 7);
      }
      *(int *)(plVar7 + 7) = iVar11;
      uVar6 = param_4[1];
      puVar3 = (undefined8 *)(plStack_b0[8] + (longlong)iVar5 * 0x10);
      *puVar3 = *param_4;
      puVar3[1] = uVar6;
    }
    cStack_88 = '\x01';
    cStack_86 = '\x01';
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0x3f800000;
    uStack_54 = 0x7f7fffff;
    uVar8 = FUN_1802350e0(&plStack_b8,(ulonglong)plStack_80 & 0xffffffff,&uStack_78,&plStackX_8,
                          &uStack_60);
    uVar9 = FUN_1802350e0(&plStack_b8,iVar4,&uStack_70,&plStackX_8,&uStack_60);
    uVar10 = FUN_1802350e0(&plStack_b8,iVar5,&uStack_68,&plStackX_8,&uStack_60);
    FUN_180235410(&plStack_b8,uVar8,uVar9,uVar10);
    if ((plStack_b8 != (longlong *)0x0) && (plStack_b0 != (longlong *)0x0)) {
      if (cStack_86 != '\0') {
        FUN_180075b70();
      }
      FUN_18007f6a0(alStack_a8);
      if (cStack_88 != '\0') {
        FUN_180079520(plStack_b8);
      }
      if (cStack_87 != '\0') {
        FUN_180079520(plStack_b8);
      }
      plVar1 = plStack_b0;
      plStackX_8 = plStack_b0;
      plStack_b0 = (longlong *)0x0;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
    }
    plStackX_8 = alStack_a8;
    FUN_18007f6a0(alStack_a8);
    if (plStack_90 != (longlong *)0x0) {
      (**(code **)(*plStack_90 + 0x38))();
    }
    if (plStack_b0 != (longlong *)0x0) {
      (**(code **)(*plStack_b0 + 0x38))();
    }
    if (plStack_b8 != (longlong *)0x0) {
      (**(code **)(*plStack_b8 + 0x38))();
    }
  }
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  return;
}





// 函数: void FUN_1804489a0(longlong *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4,
void FUN_1804489a0(longlong *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  longlong *plStackX_8;
  longlong *plStack_b8;
  longlong *plStack_b0;
  longlong alStack_a8 [3];
  longlong *plStack_90;
  char cStack_88;
  char cStack_87;
  char cStack_86;
  longlong *plStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  longlong *plStack_40;
  
  uStack_48 = 0xfffffffffffffffe;
  plStack_40 = param_1;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x28))();
    uStack_74 = param_10;
    uStack_78 = param_9;
    plStackX_8 = (longlong *)CONCAT44(plStackX_8._4_4_,param_8);
    uStack_60 = param_7;
    uStack_68 = param_6;
    uStack_70 = param_5;
    plStack_80 = param_1;
    (**(code **)(*param_1 + 0x28))();
    plStack_b8 = (longlong *)0x0;
    plStack_b0 = (longlong *)0x0;
    plStack_80 = alStack_a8;
    plStack_90 = (longlong *)0x0;
    alStack_a8[1] = 0;
    alStack_a8[0]._0_1_ = 0;
    FUN_18022f2e0(&plStack_b8,param_1,0);
    (**(code **)(*param_1 + 0x38))(param_1);
    plVar1 = plStack_b0;
    iVar4 = (int)plStack_b0[2];
    plStack_80 = (longlong *)CONCAT44(plStack_80._4_4_,iVar4);
    iVar12 = iVar4 + 1;
    iVar5 = *(int *)((longlong)plStack_b0 + 0x14);
    if (iVar5 < iVar12) {
      if (iVar5 < 2) {
        *(undefined4 *)((longlong)plStack_b0 + 0x14) = 8;
      }
      else {
        *(int *)((longlong)plStack_b0 + 0x14) = (iVar5 >> 1) + iVar5;
      }
      FUN_1800846d0(plStack_b0 + 2);
    }
    *(int *)(plVar1 + 2) = iVar12;
    uVar8 = param_2[1];
    uVar9 = param_2[2];
    uVar10 = param_2[3];
    puVar2 = (undefined4 *)(plStack_b0[3] + (longlong)iVar4 * 0x10);
    *puVar2 = *param_2;
    puVar2[1] = uVar8;
    puVar2[2] = uVar9;
    puVar2[3] = uVar10;
    plVar1 = plStack_b0 + 7;
    if ((int)*plVar1 != 0) {
      iVar5 = *(int *)((longlong)plStack_b0 + 0x3c);
      if (iVar5 < iVar12) {
        if (iVar5 < 2) {
          *(undefined4 *)((longlong)plStack_b0 + 0x3c) = 8;
        }
        else {
          *(int *)((longlong)plStack_b0 + 0x3c) = (iVar5 >> 1) + iVar5;
        }
        FUN_1800846d0(plVar1);
      }
      *(int *)plVar1 = iVar12;
      uVar8 = param_2[1];
      uVar9 = param_2[2];
      uVar10 = param_2[3];
      puVar2 = (undefined4 *)(plStack_b0[8] + (longlong)iVar4 * 0x10);
      *puVar2 = *param_2;
      puVar2[1] = uVar8;
      puVar2[2] = uVar9;
      puVar2[3] = uVar10;
    }
    cStack_88 = 1;
    cStack_86 = 1;
    plVar1 = plStack_b0 + 2;
    iVar4 = (int)*plVar1;
    iVar12 = iVar4 + 1;
    iVar5 = *(int *)((longlong)plStack_b0 + 0x14);
    if (iVar5 < iVar12) {
      if (iVar5 < 2) {
        *(undefined4 *)((longlong)plStack_b0 + 0x14) = 8;
      }
      else {
        *(int *)((longlong)plStack_b0 + 0x14) = (iVar5 >> 1) + iVar5;
      }
      FUN_1800846d0(plVar1);
    }
    *(int *)plVar1 = iVar12;
    uVar8 = param_3[1];
    uVar9 = param_3[2];
    uVar10 = param_3[3];
    puVar2 = (undefined4 *)(plStack_b0[3] + (longlong)iVar4 * 0x10);
    *puVar2 = *param_3;
    puVar2[1] = uVar8;
    puVar2[2] = uVar9;
    puVar2[3] = uVar10;
    plVar1 = plStack_b0 + 7;
    if ((int)*plVar1 != 0) {
      iVar5 = *(int *)((longlong)plStack_b0 + 0x3c);
      if (iVar5 < iVar12) {
        if (iVar5 < 2) {
          *(undefined4 *)((longlong)plStack_b0 + 0x3c) = 8;
        }
        else {
          *(int *)((longlong)plStack_b0 + 0x3c) = (iVar5 >> 1) + iVar5;
        }
        FUN_1800846d0(plVar1);
      }
      *(int *)plVar1 = iVar12;
      uVar8 = param_3[1];
      uVar9 = param_3[2];
      uVar10 = param_3[3];
      puVar2 = (undefined4 *)(plStack_b0[8] + (longlong)iVar4 * 0x10);
      *puVar2 = *param_3;
      puVar2[1] = uVar8;
      puVar2[2] = uVar9;
      puVar2[3] = uVar10;
    }
    cStack_88 = 1;
    cStack_86 = 1;
    plVar1 = plStack_b0 + 2;
    iVar5 = (int)*plVar1;
    iVar11 = iVar5 + 1;
    iVar12 = *(int *)((longlong)plStack_b0 + 0x14);
    if (iVar12 < iVar11) {
      if (iVar12 < 2) {
        *(undefined4 *)((longlong)plStack_b0 + 0x14) = 8;
      }
      else {
        *(int *)((longlong)plStack_b0 + 0x14) = (iVar12 >> 1) + iVar12;
      }
      FUN_1800846d0(plVar1);
    }
    plVar7 = plStack_b0;
    *(int *)plVar1 = iVar11;
    uVar8 = *(undefined4 *)((longlong)param_4 + 4);
    uVar9 = *(undefined4 *)(param_4 + 1);
    uVar10 = *(undefined4 *)((longlong)param_4 + 0xc);
    puVar2 = (undefined4 *)(plStack_b0[3] + (longlong)iVar5 * 0x10);
    *puVar2 = *(undefined4 *)param_4;
    puVar2[1] = uVar8;
    puVar2[2] = uVar9;
    puVar2[3] = uVar10;
    if ((int)plStack_b0[7] != 0) {
      iVar12 = *(int *)((longlong)plStack_b0 + 0x3c);
      if (iVar12 < iVar11) {
        if (iVar12 < 2) {
          *(undefined4 *)((longlong)plStack_b0 + 0x3c) = 8;
        }
        else {
          *(int *)((longlong)plStack_b0 + 0x3c) = (iVar12 >> 1) + iVar12;
        }
        FUN_1800846d0(plStack_b0 + 7);
      }
      *(int *)(plVar7 + 7) = iVar11;
      uVar6 = param_4[1];
      puVar3 = (undefined8 *)(plStack_b0[8] + (longlong)iVar5 * 0x10);
      *puVar3 = *param_4;
      puVar3[1] = uVar6;
    }
    cStack_88 = '\x01';
    cStack_86 = '\x01';
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0x3f800000;
    uStack_4c = 0x7f7fffff;
    uVar8 = FUN_1802350e0(&plStack_b8,(ulonglong)plStack_80 & 0xffffffff,&uStack_70,&plStackX_8,
                          &uStack_58);
    uVar9 = FUN_1802350e0(&plStack_b8,iVar4,&uStack_68,&uStack_78,&uStack_58);
    uVar10 = FUN_1802350e0(&plStack_b8,iVar5,&uStack_60,&uStack_74,&uStack_58);
    FUN_180235410(&plStack_b8,uVar8,uVar9,uVar10);
    if ((plStack_b8 != (longlong *)0x0) && (plStack_b0 != (longlong *)0x0)) {
      if (cStack_86 != '\0') {
        FUN_180075b70();
      }
      FUN_18007f6a0(alStack_a8);
      if (cStack_88 != '\0') {
        FUN_180079520(plStack_b8);
      }
      if (cStack_87 != '\0') {
        FUN_180079520(plStack_b8);
      }
      plVar1 = plStack_b0;
      plStackX_8 = plStack_b0;
      plStack_b0 = (longlong *)0x0;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
    }
    plStackX_8 = alStack_a8;
    FUN_18007f6a0(alStack_a8);
    if (plStack_90 != (longlong *)0x0) {
      (**(code **)(*plStack_90 + 0x38))();
    }
    if (plStack_b0 != (longlong *)0x0) {
      (**(code **)(*plStack_b0 + 0x38))();
    }
    if (plStack_b8 != (longlong *)0x0) {
      (**(code **)(*plStack_b8 + 0x38))();
    }
  }
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  return;
}





// 函数: void FUN_180448d90(longlong *param_1)
void FUN_180448d90(longlong *param_1)

{
  if ((param_1 != (longlong *)0x0) &&
     ((**(code **)(*param_1 + 0x28))(), *(char *)((longlong)param_1 + 0xfb) != '\x01')) {
    *(undefined1 *)((longlong)param_1 + 0xfb) = 1;
    FUN_180079520(param_1);
  }
  if (param_1 == (longlong *)0x0) {
    return;
  }
                    // WARNING: Could not recover jumptable at 0x000180448de1. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x38))(param_1);
  return;
}





// 函数: void FUN_180448df0(longlong *param_1)
void FUN_180448df0(longlong *param_1)

{
  if ((param_1 != (longlong *)0x0) &&
     ((**(code **)(*param_1 + 0x28))(), *(char *)((longlong)param_1 + 0xfa) != '\x01')) {
    *(undefined1 *)((longlong)param_1 + 0xfa) = 1;
    FUN_180079520(param_1);
  }
  if (param_1 == (longlong *)0x0) {
    return;
  }
                    // WARNING: Could not recover jumptable at 0x000180448e41. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x38))(param_1);
  return;
}





// 函数: void FUN_180448e50(longlong *param_1)
void FUN_180448e50(longlong *param_1)

{
  if (param_1 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*param_1 + 0x28))();
  FUN_180075b70(param_1);
                    // WARNING: Could not recover jumptable at 0x000180448e91. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x38))(param_1);
  return;
}



undefined1 FUN_180448ea0(longlong *param_1)

{
  undefined1 uVar1;
  
  if (param_1 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x28))();
    uVar1 = *(undefined1 *)((longlong)param_1 + 0xf7);
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  return uVar1;
}





// 函数: void FUN_180448f00(longlong *param_1,undefined1 param_2)
void FUN_180448f00(longlong *param_1,undefined1 param_2)

{
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x28))();
    *(undefined1 *)((longlong)param_1 + 0xf7) = param_2;
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  return;
}



undefined4 FUN_180448f50(longlong *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x28))();
    uVar1 = (undefined4)param_1[0x4e];
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  return uVar1;
}





// 函数: void FUN_180448fb0(longlong *param_1,undefined4 param_2)
void FUN_180448fb0(longlong *param_1,undefined4 param_2)

{
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x28))();
    *(undefined4 *)(param_1 + 0x4e) = param_2;
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  return;
}



undefined4 FUN_180449000(longlong *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x28))();
  }
  uVar2 = 0;
  if (param_1 != (longlong *)0x0) {
    plVar1 = param_1;
    if ((*(byte *)((longlong)param_1 + 0xfd) & 0x20) == 0) {
      plVar1 = (longlong *)func_0x000180085de0(param_1[0x36]);
    }
    uVar2 = (undefined4)plVar1[0x40];
  }
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  return uVar2;
}





// 函数: void FUN_180449070(longlong *param_1,int param_2,undefined4 param_3)
void FUN_180449070(longlong *param_1,int param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plStack_50;
  longlong *plStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  longlong *plStack_28;
  char cStack_20;
  char cStack_1f;
  char cStack_1e;
  
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x28))();
    plStack_50 = (longlong *)0x0;
    plStack_48 = (longlong *)0x0;
    plStack_28 = (longlong *)0x0;
    uStack_38 = 0;
    auStack_40[0] = 0;
    FUN_18022f2e0(&plStack_50,param_1,0);
    *(undefined4 *)((longlong)param_2 * 0x5c + 0x54 + plStack_48[0xd]) = param_3;
    cStack_20 = '\x01';
    if ((plStack_50 != (longlong *)0x0) && (plStack_48 != (longlong *)0x0)) {
      if (cStack_1e != '\0') {
        FUN_180075b70();
      }
      FUN_18007f6a0(auStack_40);
      if (cStack_20 != '\0') {
        FUN_180079520(plStack_50);
      }
      if (cStack_1f != '\0') {
        FUN_180079520(plStack_50);
      }
      plVar1 = plStack_48;
      plStack_48 = (longlong *)0x0;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
    }
    FUN_18007f6a0(auStack_40);
    if (plStack_28 != (longlong *)0x0) {
      (**(code **)(*plStack_28 + 0x38))();
    }
    if (plStack_48 != (longlong *)0x0) {
      (**(code **)(*plStack_48 + 0x38))();
    }
    if (plStack_50 != (longlong *)0x0) {
      (**(code **)(*plStack_50 + 0x38))();
    }
  }
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  return;
}



undefined4 FUN_1804491c0(longlong *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x28))();
    uVar1 = *(undefined4 *)((longlong)param_2 * 0x5c + 0x54 + *(longlong *)(param_1[0x42] + 0x68));
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  return uVar1;
}





// 函数: void FUN_180449230(longlong *param_1)
void FUN_180449230(longlong *param_1)

{
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined2 uStack_48;
  undefined1 uStack_46;
  undefined4 uStack_44;
  undefined1 uStack_40;
  undefined8 uStack_38;
  longlong lStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined8 uStack_10;
  
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x28))();
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_4c = 0xffffffff;
    uStack_48 = 1;
    uStack_46 = 0;
    uStack_44 = 0xffffffff;
    uStack_40 = 1;
    uStack_38 = 0;
    lStack_30 = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_18 = 3;
    uStack_10 = 0;
    FUN_180076c50(param_1,&uStack_58);
    if (lStack_30 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 *
FUN_180449300(undefined4 *param_1,int param_2,undefined4 *param_3,uint param_4,undefined4 *param_5,
             int param_6,longlong param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  int iVar13;
  undefined4 auStackX_10 [2];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_7c;
  longlong *plStack_78;
  longlong *plStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  longlong *plStack_50;
  char cStack_48;
  char cStack_47;
  char cStack_46;
  
  uVar12 = (ulonglong)param_4;
  lVar10 = (longlong)param_2;
  uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0x300,0x10,3);
  plVar9 = (longlong *)FUN_180075030(uVar8,1);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9);
  }
  (**(code **)(plVar9[2] + 0x10))(plVar9 + 2,&UNK_180a2a4d0);
  plStack_78 = (longlong *)0x0;
  plStack_70 = (longlong *)0x0;
  plStack_50 = (longlong *)0x0;
  uStack_60 = 0;
  auStack_68[0] = 0;
  FUN_18022f2e0(&plStack_78,plVar9,0);
  if (*(int *)((longlong)plStack_70 + 0x14) < param_2) {
    iVar1 = *(int *)((longlong)plStack_70 + 0x14);
    if (iVar1 < param_2) {
      if (param_2 == 0) {
        if (iVar1 < 2) {
          *(undefined4 *)((longlong)plStack_70 + 0x14) = 8;
        }
        else {
          *(int *)((longlong)plStack_70 + 0x14) = (iVar1 >> 1) + iVar1;
        }
      }
      else {
        *(int *)((longlong)plStack_70 + 0x14) = param_2;
      }
      FUN_1800846d0();
    }
    if (((int)plStack_70[7] != 0) &&
       (iVar1 = *(int *)((longlong)plStack_70 + 0x3c), iVar1 < param_2)) {
      if (param_2 == 0) {
        if (iVar1 < 2) {
          *(undefined4 *)((longlong)plStack_70 + 0x3c) = 8;
        }
        else {
          *(int *)((longlong)plStack_70 + 0x3c) = (iVar1 >> 1) + iVar1;
        }
      }
      else {
        *(int *)((longlong)plStack_70 + 0x3c) = param_2;
      }
      FUN_1800846d0();
    }
  }
  if (0 < param_2) {
    do {
      plVar5 = plStack_70;
      uVar7 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uStack_7c = param_3[3];
      iVar1 = (int)plStack_70[2];
      iVar13 = iVar1 + 1;
      iVar2 = *(int *)((longlong)plStack_70 + 0x14);
      if (iVar2 < iVar13) {
        if (iVar2 < 2) {
          *(undefined4 *)((longlong)plStack_70 + 0x14) = 8;
        }
        else {
          *(int *)((longlong)plStack_70 + 0x14) = (iVar2 >> 1) + iVar2;
        }
        FUN_1800846d0(plStack_70 + 2);
      }
      plVar6 = plStack_70;
      *(int *)(plVar5 + 2) = iVar13;
      puVar11 = (undefined4 *)(plStack_70[3] + (longlong)iVar1 * 0x10);
      *puVar11 = uVar7;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uStack_7c;
      if ((int)plStack_70[7] != 0) {
        iVar2 = *(int *)((longlong)plStack_70 + 0x3c);
        if (iVar2 < iVar13) {
          if (iVar2 < 2) {
            *(undefined4 *)((longlong)plStack_70 + 0x3c) = 8;
          }
          else {
            *(int *)((longlong)plStack_70 + 0x3c) = (iVar2 >> 1) + iVar2;
          }
          FUN_1800846d0(plStack_70 + 7);
        }
        *(int *)(plVar6 + 7) = iVar13;
        puVar11 = (undefined4 *)(plStack_70[8] + (longlong)iVar1 * 0x10);
        *puVar11 = uVar7;
        puVar11[1] = uVar3;
        puVar11[2] = uVar4;
        puVar11[3] = uStack_7c;
      }
      cStack_48 = '\x01';
      cStack_46 = '\x01';
      param_3 = param_3 + 4;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if ((*(int *)((longlong)plStack_70 + 100) < (int)param_4) &&
     (iVar1 = *(int *)((longlong)plStack_70 + 100), iVar1 < (int)param_4)) {
    if (param_4 == 0) {
      if (iVar1 < 2) {
        *(undefined4 *)((longlong)plStack_70 + 100) = 8;
        FUN_180086010();
      }
      else {
        *(int *)((longlong)plStack_70 + 100) = (iVar1 >> 1) + iVar1;
        FUN_180086010();
      }
      goto LAB_18044958b;
    }
    *(uint *)((longlong)plStack_70 + 100) = param_4;
    FUN_180086010();
  }
  if (0 < (int)param_4) {
    puVar11 = param_5 + 1;
    do {
      auStackX_10[0] = param_5[7];
      FUN_180235270(&plStack_78,*param_5,puVar11,&DAT_1809ff0c8,auStackX_10,puVar11 + 2);
      puVar11 = puVar11 + 8;
      param_5 = param_5 + 8;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
LAB_18044958b:
  lVar10 = (longlong)param_6;
  if ((*(int *)((longlong)plStack_70 + 0x8c) < param_6) &&
     (iVar1 = *(int *)((longlong)plStack_70 + 0x8c), iVar1 < param_6)) {
    if (param_6 == 0) {
      if (iVar1 < 2) {
        *(undefined4 *)((longlong)plStack_70 + 0x8c) = 8;
      }
      else {
        *(int *)((longlong)plStack_70 + 0x8c) = (iVar1 >> 1) + iVar1;
      }
    }
    else {
      *(int *)((longlong)plStack_70 + 0x8c) = param_6;
    }
    FUN_180085f20();
  }
  if (0 < param_6) {
    puVar11 = (undefined4 *)(param_7 + 4);
    do {
      FUN_180235410(&plStack_78,puVar11[-1],*puVar11,puVar11[1]);
      puVar11 = puVar11 + 3;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  uVar7 = (**(code **)(*plVar9 + 8))(plVar9);
  (**(code **)(*plVar9 + 0x28))(plVar9);
  uStack_88 = SUB84(plVar9,0);
  uStack_84 = (undefined4)((ulonglong)plVar9 >> 0x20);
  *param_1 = uStack_88;
  param_1[1] = uStack_84;
  param_1[2] = uVar7;
  param_1[3] = uStack_7c;
  if ((plStack_78 != (longlong *)0x0) && (plStack_70 != (longlong *)0x0)) {
    if (cStack_46 != '\0') {
      FUN_180075b70();
    }
    FUN_18007f6a0(auStack_68);
    if (cStack_48 != '\0') {
      FUN_180079520(plStack_78);
    }
    if (cStack_47 != '\0') {
      FUN_180079520(plStack_78);
    }
    plVar5 = plStack_70;
    plStack_70 = (longlong *)0x0;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x38))();
    }
  }
  FUN_18007f6a0(auStack_68);
  if (plStack_50 != (longlong *)0x0) {
    (**(code **)(*plStack_50 + 0x38))();
  }
  if (plStack_70 != (longlong *)0x0) {
    (**(code **)(*plStack_70 + 0x38))();
  }
  if (plStack_78 != (longlong *)0x0) {
    (**(code **)(*plStack_78 + 0x38))();
  }
  (**(code **)(*plVar9 + 0x38))(plVar9);
  return param_1;
}





// 函数: void FUN_1804496f0(longlong *param_1,undefined4 *param_2,byte param_3,char param_4)
void FUN_1804496f0(longlong *param_1,undefined4 *param_2,byte param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x28))();
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *(undefined4 *)(param_1 + 0x34) = *param_2;
    *(undefined4 *)((longlong)param_1 + 0x1a4) = uVar1;
    *(undefined4 *)(param_1 + 0x35) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x1ac) = uVar3;
    cVar4 = (param_3 ^ 1) + 1;
    if (param_4 != '\0') {
      cVar4 = '\x03';
    }
    *(char *)(param_1 + 0x1f) = cVar4;
  }
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  return;
}





// 函数: void FUN_180449780(longlong *param_1)
void FUN_180449780(longlong *param_1)

{
  if (param_1 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*param_1 + 0x28))();
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x7f7fffff;
                    // WARNING: Could not recover jumptable at 0x0001804497cd. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x38))(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_180449850(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x38,8,3,0xfffffffffffffffe);
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x28))();
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[5] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  FUN_18022f2e0(puVar1,param_1,0);
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  return puVar1;
}





