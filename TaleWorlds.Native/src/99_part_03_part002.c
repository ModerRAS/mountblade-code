#include "TaleWorlds.Native.Split.h"

// 99_part_03_part002.c - 5 个函数

// 函数: void FUN_1801c5940(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
void FUN_1801c5940(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puStack_78;
  longlong lStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined *puStack_48;
  longlong lStack_40;
  undefined4 uStack_38;
  ulonglong uStack_30;
  
  lVar2 = _DAT_180c8aa08;
  puStack_78 = &UNK_180a3c3e0;
  uStack_60 = 0;
  lStack_70 = 0;
  uStack_68 = 0;
  puStack_48 = &UNK_180a3c3e0;
  uStack_30 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  puVar4 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
    puVar4 = *(undefined **)(param_2 + 8);
  }
  FUN_180627c50(&puStack_78,puVar4,FUN_180627c50,param_4,0xfffffffffffffffe);
  puVar4 = &DAT_18098bc73;
  if (*(undefined **)(param_5 + 8) != (undefined *)0x0) {
    puVar4 = *(undefined **)(param_5 + 8);
  }
  uStack_58 = param_3;
  uStack_50 = param_4;
  (**(code **)(puStack_48 + 0x10))(&puStack_48,puVar4);
  iVar3 = _Mtx_lock(lVar2 + 1000);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  uVar1 = *(ulonglong *)(lVar2 + 0x350);
  if (uVar1 < *(ulonglong *)(lVar2 + 0x358)) {
    *(ulonglong *)(lVar2 + 0x350) = uVar1 + 0x50;
    FUN_180627ae0(uVar1);
    *(undefined8 *)(uVar1 + 0x20) = uStack_58;
    *(undefined4 *)(uVar1 + 0x28) = uStack_50;
    FUN_180627ae0(uVar1 + 0x30,&puStack_48);
  }
  else {
    FUN_1801e8960(lVar2 + 0x348,&puStack_78);
  }
  iVar3 = _Mtx_unlock(lVar2 + 1000);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  puStack_48 = &UNK_180a3c3e0;
  if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_40 = 0;
  uStack_30 = uStack_30 & 0xffffffff00000000;
  puStack_48 = &UNK_18098bcb0;
  puStack_78 = &UNK_180a3c3e0;
  if (lStack_70 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}






// 函数: void FUN_1801c5b20(undefined8 *param_1)
void FUN_1801c5b20(undefined8 *param_1)

{
  param_1[6] = &UNK_180a3c3e0;
  if (param_1[7] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[6] = &UNK_18098bcb0;
  *param_1 = &UNK_180a3c3e0;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &UNK_18098bcb0;
  return;
}



undefined * FUN_1801c5bb0(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(int *)(param_2 + 0x10) == 7) &&
     (iVar1 = _stricmp(*(undefined8 *)(param_2 + 8),&UNK_180a0ce90), iVar1 == 0)) {
    return &UNK_180a0cfdc;
  }
  if ((*(int *)(param_2 + 0x10) == 8) &&
     (iVar1 = _stricmp(*(undefined8 *)(param_2 + 8),&UNK_180a0ce70), iVar1 == 0)) {
    return &UNK_180a0cfe8;
  }
  if ((*(int *)(param_2 + 0x10) == 5) &&
     (iVar1 = _stricmp(*(undefined8 *)(param_2 + 8),&UNK_180a0ce64), iVar1 == 0)) {
    return &UNK_180a0cfd4;
  }
  if ((*(int *)(param_2 + 0x10) == 8) &&
     (iVar1 = _stricmp(*(undefined8 *)(param_2 + 8),&UNK_180a0cf50), iVar1 == 0)) {
    return &UNK_180a0cfd8;
  }
  if (((*(int *)(param_2 + 0x10) == 5) &&
      (iVar1 = _stricmp(*(undefined8 *)(param_2 + 8),&UNK_180a0d000), iVar1 == 0)) &&
     (*(int *)(param_3 + 0x10) == 4)) {
    lVar2 = 0;
    while (lVar3 = lVar2 + 1,
          *(char *)(*(longlong *)(param_3 + 8) + lVar2) == (&UNK_180a0d008)[lVar2]) {
      lVar2 = lVar3;
      if (lVar3 == 5) {
        return &UNK_180a0cff0;
      }
    }
    lVar2 = 0;
    while (lVar3 = lVar2 + 1,
          *(char *)(*(longlong *)(param_3 + 8) + lVar2) == (&UNK_180a0cff8)[lVar2]) {
      lVar2 = lVar3;
      if (lVar3 == 5) {
        return &UNK_180a0d040;
      }
    }
  }
  return (undefined *)0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801c5d30(undefined8 param_1,longlong *param_2,undefined4 param_3)
void FUN_1801c5d30(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lStack_20;
  uint uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar1 = _DAT_180c8aa08;
  lStack_20 = *param_2;
  uStack_18 = *(uint *)(param_2 + 1);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_10 = (undefined4)param_2[2];
  lVar4 = _DAT_180c8aa08 + 1000;
  uStack_c = param_3;
  iVar2 = _Mtx_lock(lVar4);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  FUN_180086270(lVar1 + 0x368,&lStack_20);
  iVar2 = _Mtx_unlock(lVar4);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar4 = *(longlong *)(lVar1 + 0x50) + 0x360;
  uStack_18 = uStack_18 & 0xffffff00;
  lStack_20 = lVar4;
  AcquireSRWLockExclusive(lVar4);
  uStack_18 = CONCAT31(uStack_18._1_3_,1);
  puVar3 = (undefined4 *)FUN_1801e6800(*(undefined8 *)(*(longlong *)(lVar1 + 0x50) + 0x318),param_2)
  ;
  *puVar3 = param_3;
                    // WARNING: Could not recover jumptable at 0x0001808ffbd8. Too many branches
                    // WARNING: Treating indirect jump as call
  ReleaseSRWLockExclusive(lVar4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801c5e10(undefined8 param_1,longlong *param_2,undefined4 param_3,longlong *param_4)
void FUN_1801c5e10(undefined8 param_1,longlong *param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lStack_30;
  uint uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar1 = _DAT_180c8aa08;
  lStack_30 = *param_2;
  uStack_28 = *(uint *)(param_2 + 1);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_20 = (undefined4)param_2[2];
  lVar5 = _DAT_180c8aa08 + 1000;
  uStack_1c = param_3;
  iVar2 = _Mtx_lock(lVar5);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  uVar3 = FUN_18009b5a0(_DAT_180c8aa08 + 0x388,*param_4 + 0x2b0);
  FUN_180086270(uVar3,&lStack_30);
  iVar2 = _Mtx_unlock(lVar5);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar5 = *(longlong *)(lVar1 + 0x50) + 0x360;
  uStack_28 = uStack_28 & 0xffffff00;
  lStack_30 = lVar5;
  AcquireSRWLockExclusive(lVar5);
  uStack_28 = CONCAT31(uStack_28._1_3_,1);
  puVar4 = (undefined4 *)FUN_1801e6a50(*(undefined8 *)(*param_4 + 800),param_2);
  *puVar4 = param_3;
  ReleaseSRWLockExclusive(lVar5);
  if ((longlong *)*param_4 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_4 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801c5f20(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)
void FUN_1801c5f20(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined4 uStack_2c;
  
  lVar15 = _DAT_180c8aa08;
  uVar13 = (undefined4)param_3;
  uVar6 = *param_2;
  uVar7 = param_2[1];
  uVar2 = *(undefined4 *)(param_2 + 2);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 3);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar1 = _DAT_180c8aa08 + 1000;
  iVar8 = _Mtx_lock(lVar1,param_2,param_3,param_4,0xfffffffffffffffe);
  if (iVar8 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar8);
  }
  puVar9 = (ulonglong *)FUN_18009b5a0(lVar15 + 0x3b8,param_4 + 0x2b0);
  puVar12 = (undefined8 *)puVar9[1];
  if (puVar12 < (undefined8 *)puVar9[2]) {
    puVar9[1] = (ulonglong)(puVar12 + 5);
    *puVar12 = uVar6;
    puVar12[1] = uVar7;
    *(undefined4 *)(puVar12 + 2) = uVar2;
    *(undefined4 *)((longlong)puVar12 + 0x14) = uVar3;
    *(undefined4 *)(puVar12 + 3) = uVar4;
    *(undefined4 *)((longlong)puVar12 + 0x1c) = uVar5;
    puVar12[4] = CONCAT44(uStack_2c,uVar13);
    goto LAB_1801c60af;
  }
  puVar14 = (undefined8 *)*puVar9;
  lVar15 = ((longlong)puVar12 - (longlong)puVar14) / 0x28;
  if (lVar15 == 0) {
    lVar15 = 1;
LAB_1801c600b:
    puVar10 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar15 * 0x28,(char)puVar9[3]);
    puVar12 = (undefined8 *)puVar9[1];
    puVar14 = (undefined8 *)*puVar9;
  }
  else {
    lVar15 = lVar15 * 2;
    if (lVar15 != 0) goto LAB_1801c600b;
    puVar10 = (undefined8 *)0x0;
  }
  if (puVar14 != puVar12) {
                    // WARNING: Subroutine does not return
    memmove(puVar10,puVar14,(longlong)puVar12 - (longlong)puVar14);
  }
  *puVar10 = uVar6;
  puVar10[1] = uVar7;
  *(undefined4 *)(puVar10 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar10 + 0x14) = uVar3;
  *(undefined4 *)(puVar10 + 3) = uVar4;
  *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar5;
  puVar10[4] = CONCAT44(uStack_2c,uVar13);
  if (*puVar9 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *puVar9 = (ulonglong)puVar10;
  puVar9[1] = (ulonglong)(puVar10 + 5);
  puVar9[2] = (ulonglong)(puVar10 + lVar15 * 5);
LAB_1801c60af:
  iVar8 = _Mtx_unlock(lVar1);
  if (iVar8 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar8);
  }
  AcquireSRWLockExclusive(param_4 + 0x360);
  puVar11 = (undefined4 *)FUN_1801e0ea0(param_4 + 0x328,param_2);
  *puVar11 = uVar13;
                    // WARNING: Could not recover jumptable at 0x0001808ffbd8. Too many branches
                    // WARNING: Treating indirect jump as call
  ReleaseSRWLockExclusive(param_4 + 0x360);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




