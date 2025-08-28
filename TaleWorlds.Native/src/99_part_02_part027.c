#include "TaleWorlds.Native.Split.h"

// 99_part_02_part027.c - 11 个函数

// 函数: void FUN_1800feaef(void)
void FUN_1800feaef(void)

{
  return;
}






// 函数: void FUN_1800feb10(longlong *param_1)
void FUN_1800feb10(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1800a19c0(param_1 + 2);
  if (lVar1 == 0) {
                    // WARNING: Could not recover jumptable at 0x0001800feb3d. Too many branches
                    // WARNING: Treating indirect jump as call
    _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              ((longlong)*(int *)(*param_1 + 4) + (longlong)param_1,2);
    return;
  }
  return;
}



longlong FUN_1800feb50(longlong param_1,ulonglong param_2)

{
  param_1 = param_1 + -0xb0;
  FUN_1800fd430(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x110);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800feb90(longlong *param_1)
void FUN_1800feb90(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  plVar3 = (longlong *)param_1[1];
  plVar5 = (longlong *)*param_1;
  uVar2 = (longlong)plVar3 - (longlong)plVar5 >> 3;
  if (2 < uVar2) {
    plVar1 = plVar5 + 3;
    if (plVar1 != plVar3) {
      do {
        if ((longlong *)*plVar1 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar1 + 0x38))();
        }
        plVar1 = plVar1 + 1;
      } while (plVar1 != plVar3);
      plVar5 = (longlong *)*param_1;
    }
    param_1[1] = (longlong)(plVar5 + 3);
    return;
  }
  uVar4 = 3 - uVar2;
  if ((ulonglong)(param_1[2] - (longlong)plVar3 >> 3) < uVar4) {
    uVar6 = uVar2 * 2;
    if (uVar2 == 0) {
      uVar6 = 1;
    }
    if (uVar6 < uVar2 + uVar4) {
      uVar6 = uVar2 + uVar4;
    }
    plVar1 = (longlong *)0x0;
    plVar7 = plVar1;
    if (uVar6 != 0) {
      plVar1 = (longlong *)FUN_18062b420(_DAT_180c8ed18,uVar6 * 8,(char)param_1[3]);
      plVar5 = (longlong *)*param_1;
      plVar3 = (longlong *)param_1[1];
      plVar7 = plVar1;
    }
    for (; plVar5 != plVar3; plVar5 = plVar5 + 1) {
      *plVar1 = *plVar5;
      plVar1 = plVar1 + 1;
      *plVar5 = 0;
    }
    uVar2 = uVar4;
    plVar5 = plVar1;
    if (uVar4 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *plVar5 = 0;
        plVar5 = plVar5 + 1;
      }
    }
    plVar5 = (longlong *)param_1[1];
    plVar3 = (longlong *)*param_1;
    if (plVar3 != plVar5) {
      do {
        if ((longlong *)*plVar3 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar3 + 0x38))();
        }
        plVar3 = plVar3 + 1;
      } while (plVar3 != plVar5);
      plVar3 = (longlong *)*param_1;
    }
    if (plVar3 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar3);
    }
    *param_1 = (longlong)plVar7;
    param_1[2] = (longlong)(plVar7 + uVar6);
    param_1[1] = (longlong)(plVar1 + uVar4);
    return;
  }
  uVar2 = uVar4;
  if (uVar4 != 0) {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *plVar3 = 0;
      plVar3 = plVar3 + 1;
    }
    plVar3 = (longlong *)param_1[1];
  }
  param_1[1] = (longlong)(plVar3 + uVar4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800febba(longlong param_1,undefined8 param_2,undefined8 *param_3)
void FUN_1800febba(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong in_RAX;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *unaff_RBX;
  ulonglong uVar4;
  longlong *unaff_RSI;
  undefined8 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  
  uVar4 = 3 - param_1;
  if (uVar4 <= (ulonglong)(in_RAX - (longlong)unaff_RBX >> 3)) {
    uVar7 = uVar4;
    if (uVar4 != 0) {
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        *unaff_RBX = 0;
        unaff_RBX = unaff_RBX + 1;
      }
      unaff_RBX = (undefined8 *)unaff_RSI[1];
    }
    unaff_RSI[1] = (longlong)(unaff_RBX + uVar4);
    return;
  }
  uVar7 = param_1 * 2;
  if (param_1 == 0) {
    uVar7 = 1;
  }
  if (uVar7 < param_1 + uVar4) {
    uVar7 = param_1 + uVar4;
  }
  puVar2 = (undefined8 *)0x0;
  puVar8 = puVar2;
  if (uVar7 != 0) {
    puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,uVar7 * 8,(char)unaff_RSI[3]);
    param_3 = (undefined8 *)*unaff_RSI;
    unaff_RBX = (undefined8 *)unaff_RSI[1];
    puVar8 = puVar2;
  }
  for (; param_3 != unaff_RBX; param_3 = param_3 + 1) {
    *puVar2 = *param_3;
    puVar2 = puVar2 + 1;
    *param_3 = 0;
  }
  uVar3 = uVar4;
  puVar5 = puVar2;
  if (uVar4 != 0) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  plVar1 = (longlong *)unaff_RSI[1];
  plVar6 = (longlong *)*unaff_RSI;
  if (plVar6 != plVar1) {
    do {
      if ((longlong *)*plVar6 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar6 + 0x38))();
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
    plVar6 = (longlong *)*unaff_RSI;
  }
  if (plVar6 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar6);
  }
  *unaff_RSI = (longlong)puVar8;
  unaff_RSI[2] = (longlong)(puVar8 + uVar7);
  unaff_RSI[1] = (longlong)(puVar2 + uVar4);
  return;
}






// 函数: void FUN_1800fecb5(void)
void FUN_1800fecb5(void)

{
  longlong lVar1;
  undefined8 *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  lVar1 = unaff_RBP;
  if (unaff_RBP != 0) {
    for (; lVar1 != 0; lVar1 = lVar1 + -1) {
      *unaff_RBX = 0;
      unaff_RBX = unaff_RBX + 1;
    }
    unaff_RBX = *(undefined8 **)(unaff_RSI + 8);
  }
  *(undefined8 **)(unaff_RSI + 8) = unaff_RBX + unaff_RBP;
  return;
}






// 函数: void FUN_1800fecde(undefined8 param_1,undefined8 param_2,longlong param_3)
void FUN_1800fecde(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *unaff_RBX;
  longlong *unaff_RSI;
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_3 + 0x18);
  if (plVar1 != unaff_RBX) {
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x38))();
      }
      plVar1 = plVar1 + 1;
    } while (plVar1 != unaff_RBX);
    param_3 = *unaff_RSI;
  }
  unaff_RSI[1] = param_3 + 0x18;
  return;
}






// 函数: void FUN_1800fed20(longlong *param_1)
void FUN_1800fed20(longlong *param_1)

{
  longlong lVar1;
  
  for (lVar1 = *param_1; lVar1 != param_1[1]; lVar1 = lVar1 + 0x28) {
    if (*(longlong *)(lVar1 + 8) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800fed40(void)
void FUN_1800fed40(void)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 in_R9;
  undefined8 uVar7;
  int aiStack_40 [2];
  longlong lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  lVar2 = _DAT_180c8a998;
  uVar7 = 0xfffffffffffffffe;
  iVar6 = 1;
  iVar5 = 0;
  do {
    lStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_20 = 3;
    aiStack_40[0] = iVar6;
    if (*(ulonglong *)(lVar2 + 0xa8) < *(ulonglong *)(lVar2 + 0xb0)) {
      *(ulonglong *)(lVar2 + 0xa8) = *(ulonglong *)(lVar2 + 0xa8) + 0x28;
      FUN_1800ff090();
    }
    else {
      FUN_1800ff140(lVar2 + 0xa0,aiStack_40);
    }
    iVar3 = iVar6 * 2;
    if (iVar5 == 0x1f) {
      iVar3 = iVar6;
    }
    iVar6 = iVar3;
    if (lStack_38 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x20);
  if ((ulonglong)(*(longlong *)(lVar2 + 0xd0) - *(longlong *)(lVar2 + 0xc0) >> 3) < 0x1000) {
    lVar4 = FUN_18062b420(_DAT_180c8ed18,0x8000,*(undefined1 *)(lVar2 + 0xd8),in_R9,uVar7);
    lVar1 = *(longlong *)(lVar2 + 0xc0);
    if (lVar1 != *(longlong *)(lVar2 + 200)) {
                    // WARNING: Subroutine does not return
      memmove(lVar4,lVar1,*(longlong *)(lVar2 + 200) - lVar1);
    }
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(longlong *)(lVar2 + 0xc0) = lVar4;
    *(longlong *)(lVar2 + 200) = lVar4;
    *(longlong *)(lVar2 + 0xd0) = lVar4 + 0x8000;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1800feeb0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  lVar2 = _DAT_180c8a998;
  UNLOCK();
  if (iVar3 + -1 != 0) {
    return iVar3 + -1;
  }
  plVar5 = (longlong *)0x0;
  if (*(char *)(param_1 + 0x20) == '\0') {
    if (*(longlong *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  iVar3 = _Mtx_lock(lVar2 + 0x50);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  plVar7 = *(longlong **)(lVar2 + 200);
  if (plVar7 < *(longlong **)(lVar2 + 0xd0)) {
    *(longlong **)(lVar2 + 200) = plVar7 + 1;
    *plVar7 = param_1;
    goto LAB_1800fefef;
  }
  plVar6 = *(longlong **)(lVar2 + 0xc0);
  lVar4 = (longlong)plVar7 - (longlong)plVar6 >> 3;
  if (lVar4 == 0) {
    lVar4 = 1;
LAB_1800fef71:
    plVar5 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar4 * 8,*(undefined1 *)(lVar2 + 0xd8));
    plVar7 = *(longlong **)(lVar2 + 200);
    plVar6 = *(longlong **)(lVar2 + 0xc0);
  }
  else {
    lVar4 = lVar4 * 2;
    if (lVar4 != 0) goto LAB_1800fef71;
  }
  if (plVar6 != plVar7) {
                    // WARNING: Subroutine does not return
    memmove(plVar5,plVar6,(longlong)plVar7 - (longlong)plVar6);
  }
  *plVar5 = param_1;
  if (*(longlong *)(lVar2 + 0xc0) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(longlong **)(lVar2 + 0xc0) = plVar5;
  *(longlong **)(lVar2 + 200) = plVar5 + 1;
  *(longlong **)(lVar2 + 0xd0) = plVar5 + lVar4;
LAB_1800fefef:
  iVar3 = _Mtx_unlock(lVar2 + 0x50);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return 0;
}






// 函数: void FUN_1800ff020(longlong *param_1)
void FUN_1800ff020(longlong *param_1)

{
  longlong lVar1;
  
  for (lVar1 = *param_1; lVar1 != param_1[1]; lVar1 = lVar1 + 0x28) {
    if (*(longlong *)(lVar1 + 8) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 *
FUN_1800ff090(undefined4 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = *param_2;
  lVar3 = *(longlong *)(param_2 + 4) - *(longlong *)(param_2 + 2) >> 3;
  uVar1 = param_2[8];
  param_1[8] = uVar1;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_18062b420(_DAT_180c8ed18,lVar3 * 8,uVar1 & 0xff,param_4,0xfffffffffffffffe);
  }
  *(longlong *)(param_1 + 2) = lVar2;
  *(longlong *)(param_1 + 4) = lVar2;
  *(longlong *)(param_1 + 6) = lVar2 + lVar3 * 8;
  lVar3 = *(longlong *)(param_1 + 2);
  lVar2 = *(longlong *)(param_2 + 2);
  if (lVar2 != *(longlong *)(param_2 + 4)) {
                    // WARNING: Subroutine does not return
    memmove(lVar3,lVar2,*(longlong *)(param_2 + 4) - lVar2);
  }
  *(longlong *)(param_1 + 4) = lVar3;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800ff140(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800ff140(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong lVar10;
  
  puVar9 = (undefined4 *)param_1[1];
  puVar5 = (undefined4 *)*param_1;
  lVar10 = ((longlong)puVar9 - (longlong)puVar5) / 0x28;
  puVar4 = (undefined4 *)0x0;
  if (lVar10 == 0) {
    lVar10 = 1;
  }
  else {
    lVar10 = lVar10 * 2;
    if (lVar10 == 0) goto LAB_1800ff1c3;
  }
  puVar4 = (undefined4 *)
           FUN_18062b420(_DAT_180c8ed18,lVar10 * 0x28,(char)param_1[3],param_4,0xfffffffffffffffe);
  puVar9 = (undefined4 *)param_1[1];
  puVar5 = (undefined4 *)*param_1;
LAB_1800ff1c3:
  puVar7 = puVar4;
  if (puVar5 != puVar9) {
    lVar8 = (longlong)puVar4 - (longlong)puVar5;
    puVar5 = puVar5 + 8;
    do {
      *puVar7 = puVar5[-8];
      puVar6 = (undefined8 *)((longlong)puVar5 + lVar8 + -0x18);
      *puVar6 = 0;
      *(undefined8 *)(lVar8 + -0x10 + (longlong)puVar5) = 0;
      *(undefined8 *)(lVar8 + -8 + (longlong)puVar5) = 0;
      *(undefined4 *)(lVar8 + (longlong)puVar5) = *puVar5;
      uVar3 = *puVar6;
      *puVar6 = *(undefined8 *)(puVar5 + -6);
      *(undefined8 *)(puVar5 + -6) = uVar3;
      uVar3 = *(undefined8 *)(lVar8 + -0x10 + (longlong)puVar5);
      *(undefined8 *)(lVar8 + -0x10 + (longlong)puVar5) = *(undefined8 *)(puVar5 + -4);
      *(undefined8 *)(puVar5 + -4) = uVar3;
      uVar3 = *(undefined8 *)(lVar8 + -8 + (longlong)puVar5);
      *(undefined8 *)(lVar8 + -8 + (longlong)puVar5) = *(undefined8 *)(puVar5 + -2);
      *(undefined8 *)(puVar5 + -2) = uVar3;
      uVar2 = *(undefined4 *)(lVar8 + (longlong)puVar5);
      *(undefined4 *)(lVar8 + (longlong)puVar5) = *puVar5;
      *puVar5 = uVar2;
      puVar7 = puVar7 + 10;
      puVar1 = puVar5 + 2;
      puVar5 = puVar5 + 10;
    } while (puVar1 != puVar9);
  }
  FUN_1800ff090(puVar7,param_2);
  lVar8 = *param_1;
  if (lVar8 != param_1[1]) {
    do {
      if (*(longlong *)(lVar8 + 8) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lVar8 = lVar8 + 0x28;
    } while (lVar8 != param_1[1]);
    lVar8 = *param_1;
  }
  if (lVar8 == 0) {
    *param_1 = (longlong)puVar4;
    param_1[1] = (longlong)(puVar7 + 10);
    param_1[2] = (longlong)(puVar4 + lVar10 * 10);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800ff2e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800ff2e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined *puStack_50;
  undefined4 *puStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  puStack_50 = &UNK_180a3c3e0;
  uStack_38 = 0;
  puStack_48 = (undefined4 *)0x0;
  uStack_40 = 0;
  puVar2 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x13,0x13,param_4,0xfffffffffffffffe);
  *(undefined1 *)puVar2 = 0;
  puStack_48 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
  *puVar2 = 0x69676e45;
  puVar2[1] = 0x4320656e;
  puVar2[2] = 0x69666e6f;
  puVar2[3] = 0x69462067;
  *(undefined2 *)(puVar2 + 4) = 0x656c;
  *(undefined1 *)((longlong)puVar2 + 0x12) = 0;
  uStack_40 = 0x12;
  FUN_1800ae520(param_1,&puStack_50);
  puStack_50 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}



undefined8 FUN_180100b00(undefined8 param_1,ulonglong param_2)

{
  FUN_180100b40();
  if ((param_2 & 1) != 0) {
    free(param_1,0x2650);
  }
  return param_1;
}






