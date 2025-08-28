#include "TaleWorlds.Native.Split.h"

// 03_rendering_part650.c - 11 个函数

// 函数: void FUN_180636f00(longlong *param_1,undefined8 *param_2)
void FUN_180636f00(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  
  puVar10 = (undefined8 *)param_1[1];
  if (puVar10 < (undefined8 *)param_1[2]) {
    param_1[1] = (longlong)(puVar10 + 6);
    puVar10[4] = 0xffffffffffffffff;
    uVar5 = param_2[1];
    *puVar10 = *param_2;
    puVar10[1] = uVar5;
    uVar5 = param_2[3];
    puVar10[2] = param_2[2];
    puVar10[3] = uVar5;
    *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((longlong)puVar10 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
    *(undefined4 *)((longlong)puVar10 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    *(undefined4 *)(puVar10 + 5) = *(undefined4 *)(param_2 + 5);
    return;
  }
  puVar8 = (undefined8 *)*param_1;
  lVar9 = ((longlong)puVar10 - (longlong)puVar8) / 0x30;
  if (lVar9 == 0) {
    lVar9 = 1;
  }
  else {
    lVar9 = lVar9 * 2;
    if (lVar9 == 0) {
      puVar6 = (undefined8 *)0x0;
      goto LAB_180636fc6;
    }
  }
  puVar6 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar9 * 0x30,(char)param_1[3]);
  puVar10 = (undefined8 *)param_1[1];
  puVar8 = (undefined8 *)*param_1;
LAB_180636fc6:
  puVar7 = puVar6;
  if (puVar8 != puVar10) {
    lVar11 = (longlong)puVar6 - (longlong)puVar8;
    puVar8 = puVar8 + 4;
    do {
      *(undefined8 *)((longlong)puVar8 + lVar11) = 0xffffffffffffffff;
      uVar5 = puVar8[-3];
      *puVar7 = puVar8[-4];
      puVar7[1] = uVar5;
      puVar7 = puVar7 + 6;
      uVar5 = puVar8[-1];
      puVar1 = (undefined8 *)((longlong)puVar8 + lVar11 + -0x10);
      *puVar1 = puVar8[-2];
      puVar1[1] = uVar5;
      *(undefined4 *)((longlong)puVar8 + lVar11) = *(undefined4 *)puVar8;
      *(undefined4 *)((longlong)puVar8 + lVar11 + 4) = *(undefined4 *)((longlong)puVar8 + 4);
      *(undefined4 *)((longlong)puVar8 + lVar11 + 0xc) = *(undefined4 *)((longlong)puVar8 + 0xc);
      *(undefined4 *)((longlong)puVar8 + lVar11 + 8) = *(undefined4 *)(puVar8 + 1);
      puVar1 = puVar8 + 2;
      puVar8 = puVar8 + 6;
    } while (puVar1 != puVar10);
  }
  puVar7[4] = 0xffffffffffffffff;
  uVar5 = param_2[1];
  *puVar7 = *param_2;
  puVar7[1] = uVar5;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 3);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)puVar7 + 0x14) = uVar2;
  *(undefined4 *)(puVar7 + 3) = uVar3;
  *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar4;
  *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)puVar7 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)((longlong)puVar7 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(puVar7 + 5) = *(undefined4 *)(param_2 + 5);
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = (longlong)puVar6;
  param_1[1] = (longlong)(puVar7 + 6);
  param_1[2] = (longlong)(puVar6 + lVar9 * 6);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806370a0(ulonglong *param_1,undefined8 *param_2)
void FUN_1806370a0(ulonglong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)param_1[1];
  if (puVar9 < (undefined8 *)param_1[2]) {
    param_1[1] = (longlong)puVar9 + 0x44;
    uVar4 = param_2[1];
    *puVar9 = *param_2;
    puVar9[1] = uVar4;
    uVar4 = param_2[3];
    puVar9[2] = param_2[2];
    puVar9[3] = uVar4;
    uVar4 = param_2[5];
    puVar9[4] = param_2[4];
    puVar9[5] = uVar4;
    uVar4 = param_2[7];
    puVar9[6] = param_2[6];
    puVar9[7] = uVar4;
    *(undefined4 *)(puVar9 + 8) = *(undefined4 *)(param_2 + 8);
    return;
  }
  puVar5 = (undefined8 *)*param_1;
  lVar8 = ((longlong)puVar9 - (longlong)puVar5) / 0x44;
  if (lVar8 == 0) {
    lVar8 = 1;
  }
  else {
    lVar8 = lVar8 * 2;
    if (lVar8 == 0) {
      puVar6 = (undefined8 *)0x0;
      puVar7 = puVar6;
      goto joined_r0x00018063715d;
    }
  }
  puVar6 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar8 * 0x44,(char)param_1[3]);
  puVar9 = (undefined8 *)param_1[1];
  puVar5 = (undefined8 *)*param_1;
  puVar7 = puVar6;
joined_r0x00018063715d:
  for (; puVar5 != puVar9; puVar5 = (undefined8 *)((longlong)puVar5 + 0x44)) {
    uVar4 = puVar5[1];
    *puVar6 = *puVar5;
    puVar6[1] = uVar4;
    uVar4 = puVar5[3];
    puVar6[2] = puVar5[2];
    puVar6[3] = uVar4;
    uVar4 = puVar5[5];
    puVar6[4] = puVar5[4];
    puVar6[5] = uVar4;
    uVar4 = puVar5[7];
    puVar6[6] = puVar5[6];
    puVar6[7] = uVar4;
    *(undefined4 *)(puVar6 + 8) = *(undefined4 *)(puVar5 + 8);
    puVar6 = (undefined8 *)((longlong)puVar6 + 0x44);
  }
  uVar4 = param_2[1];
  *puVar6 = *param_2;
  puVar6[1] = uVar4;
  uVar4 = param_2[3];
  puVar6[2] = param_2[2];
  puVar6[3] = uVar4;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 5);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)puVar6 + 0x24) = uVar1;
  *(undefined4 *)(puVar6 + 5) = uVar2;
  *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar3;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 7);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(puVar6 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)puVar6 + 0x34) = uVar1;
  *(undefined4 *)(puVar6 + 7) = uVar2;
  *(undefined4 *)((longlong)puVar6 + 0x3c) = uVar3;
  *(undefined4 *)(puVar6 + 8) = *(undefined4 *)(param_2 + 8);
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = (ulonglong)puVar7;
  param_1[2] = lVar8 * 0x44 + (longlong)puVar7;
  param_1[1] = (longlong)puVar6 + 0x44;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806371f0(ulonglong *param_1,undefined8 *param_2)
void FUN_1806371f0(ulonglong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)param_1[1];
  if (puVar9 < (undefined8 *)param_1[2]) {
    param_1[1] = (longlong)puVar9 + 0x14;
    uVar4 = param_2[1];
    *puVar9 = *param_2;
    puVar9[1] = uVar4;
    *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(param_2 + 2);
    return;
  }
  puVar5 = (undefined8 *)*param_1;
  lVar8 = ((longlong)puVar9 - (longlong)puVar5) / 0x14;
  if (lVar8 == 0) {
    lVar8 = 1;
  }
  else {
    lVar8 = lVar8 * 2;
    if (lVar8 == 0) {
      puVar6 = (undefined8 *)0x0;
      puVar7 = puVar6;
      goto joined_r0x000180637296;
    }
  }
  puVar6 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar8 * 0x14,(char)param_1[3]);
  puVar9 = (undefined8 *)param_1[1];
  puVar5 = (undefined8 *)*param_1;
  puVar7 = puVar6;
joined_r0x000180637296:
  for (; puVar5 != puVar9; puVar5 = (undefined8 *)((longlong)puVar5 + 0x14)) {
    uVar4 = puVar5[1];
    *puVar6 = *puVar5;
    puVar6[1] = uVar4;
    *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar5 + 2);
    puVar6 = (undefined8 *)((longlong)puVar6 + 0x14);
  }
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)puVar6 = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)puVar6 + 4) = uVar1;
  *(undefined4 *)(puVar6 + 1) = uVar2;
  *(undefined4 *)((longlong)puVar6 + 0xc) = uVar3;
  *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(param_2 + 2);
  if (*param_1 == 0) {
    *param_1 = (ulonglong)puVar7;
    param_1[2] = (ulonglong)((longlong)puVar7 + lVar8 * 0x14);
    param_1[1] = (ulonglong)((longlong)puVar6 + 0x14);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180637300(longlong *param_1,undefined1 *param_2)
void FUN_180637300(longlong *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  lVar11 = param_1[1];
  lVar10 = *param_1;
  lVar12 = (lVar11 - lVar10) / 0x50;
  puVar6 = (undefined1 *)0x0;
  if (lVar12 == 0) {
    lVar12 = 1;
  }
  else {
    lVar12 = lVar12 * 2;
    if (lVar12 == 0) goto LAB_18063738b;
  }
  puVar6 = (undefined1 *)
           FUN_18062b420(_DAT_180c8ed18,lVar12 * 0x50,(char)param_1[3],lVar10,0xfffffffffffffffe);
  lVar11 = param_1[1];
  lVar10 = *param_1;
LAB_18063738b:
  puVar8 = puVar6;
  if (lVar10 != lVar11) {
    lVar10 = lVar10 - (longlong)puVar6;
    puVar9 = (undefined8 *)(puVar6 + 0x20);
    do {
      *puVar8 = *(undefined1 *)(lVar10 + -0x20 + (longlong)puVar9);
      puVar1 = (undefined8 *)(lVar10 + -0x1c + (longlong)puVar9);
      uVar5 = puVar1[1];
      *(undefined8 *)((longlong)puVar9 + -0x1c) = *puVar1;
      *(undefined8 *)((longlong)puVar9 + -0x14) = uVar5;
      puVar9[-1] = &UNK_18098bcb0;
      *puVar9 = 0;
      *(undefined4 *)(puVar9 + 1) = 0;
      puVar9[-1] = &UNK_180a3c3e0;
      puVar9[2] = 0;
      *puVar9 = 0;
      *(undefined4 *)(puVar9 + 1) = 0;
      *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(lVar10 + 8 + (longlong)puVar9);
      *puVar9 = *(undefined8 *)(lVar10 + (longlong)puVar9);
      *(undefined4 *)((longlong)puVar9 + 0x14) = *(undefined4 *)(lVar10 + 0x14 + (longlong)puVar9);
      *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(lVar10 + 0x10 + (longlong)puVar9);
      *(undefined4 *)(lVar10 + 8 + (longlong)puVar9) = 0;
      *(undefined8 *)(lVar10 + (longlong)puVar9) = 0;
      *(undefined8 *)(lVar10 + 0x10 + (longlong)puVar9) = 0;
      *(undefined4 *)(puVar9 + 3) = *(undefined4 *)(lVar10 + 0x18 + (longlong)puVar9);
      *(undefined8 *)((longlong)puVar9 + 0x1c) = *(undefined8 *)(lVar10 + 0x1c + (longlong)puVar9);
      *(undefined4 *)((longlong)puVar9 + 0x24) = *(undefined4 *)(lVar10 + 0x24 + (longlong)puVar9);
      *(undefined4 *)(puVar9 + 5) = *(undefined4 *)(lVar10 + 0x28 + (longlong)puVar9);
      puVar8 = puVar8 + 0x50;
      lVar7 = (longlong)puVar9 + lVar10 + 0x30;
      puVar9 = puVar9 + 10;
    } while (lVar7 != lVar11);
  }
  *puVar8 = *param_2;
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(puVar8 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(puVar8 + 8) = uVar2;
  *(undefined4 *)(puVar8 + 0xc) = uVar3;
  *(undefined4 *)(puVar8 + 0x10) = uVar4;
  *(undefined **)(puVar8 + 0x18) = &UNK_18098bcb0;
  *(undefined8 *)(puVar8 + 0x20) = 0;
  *(undefined4 *)(puVar8 + 0x28) = 0;
  *(undefined **)(puVar8 + 0x18) = &UNK_180a3c3e0;
  *(undefined8 *)(puVar8 + 0x30) = 0;
  *(undefined8 *)(puVar8 + 0x20) = 0;
  *(undefined4 *)(puVar8 + 0x28) = 0;
  *(undefined4 *)(puVar8 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)(puVar8 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(puVar8 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(puVar8 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(puVar8 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined8 *)(puVar8 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
  *(undefined4 *)(puVar8 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(puVar8 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  lVar11 = param_1[1];
  lVar10 = *param_1;
  if (lVar10 != lVar11) {
    do {
      *(undefined8 *)(lVar10 + 0x18) = &UNK_180a3c3e0;
      if (*(longlong *)(lVar10 + 0x20) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(undefined8 *)(lVar10 + 0x20) = 0;
      *(undefined4 *)(lVar10 + 0x30) = 0;
      *(undefined8 *)(lVar10 + 0x18) = &UNK_18098bcb0;
      lVar10 = lVar10 + 0x50;
    } while (lVar10 != lVar11);
    lVar10 = *param_1;
  }
  if (lVar10 == 0) {
    *param_1 = (longlong)puVar6;
    param_1[1] = (longlong)(puVar8 + 0x50);
    param_1[2] = (longlong)(puVar6 + lVar12 * 0x50);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar10);
}



undefined8 *
FUN_180637560(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_180a30778;
  param_1[1] = &UNK_18098bcb0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[1] = &UNK_180a3c3e0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[7] = &UNK_18098bcb0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[7] = &UNK_180a3c3e0;
  param_1[10] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  *param_1 = &UNK_180a3ce28;
  _Mtx_init_in_situ(param_1 + 0xb,0x102,param_3,param_4,0xfffffffffffffffe);
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  return param_1;
}



undefined8 FUN_180637620(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  _Mtx_destroy_in_situ();
  FUN_1805065c0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xa8,param_3,param_4,uVar1);
  }
  return param_1;
}



longlong FUN_1806376e0(longlong param_1)

{
  int iVar1;
  
  iVar1 = _Mtx_lock(param_1 + 0x58);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  iVar1 = _Mtx_unlock(param_1 + 0x58);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return param_1;
}



longlong * FUN_180637740(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  iVar1 = _Mtx_lock(param_1 + 0xb);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  FUN_1806281a0(param_1 + 7,param_2,param_3,param_4,uVar2);
  if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
    (**(code **)(*param_1 + 0x118))(param_1);
  }
  iVar1 = _Mtx_unlock(param_1 + 0xb);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return param_1;
}



longlong * FUN_1806377d0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  iVar1 = _Mtx_lock(param_1 + 0xb);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  if (0 < *(int *)(param_2 + 0x10)) {
    FUN_1806277c0(param_1 + 7,(int)param_1[9] + *(int *)(param_2 + 0x10));
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_1 + 9) + param_1[8],*(undefined8 *)(param_2 + 8),
           (longlong)(*(int *)(param_2 + 0x10) + 1),param_4,uVar2);
  }
  if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
    (**(code **)(*param_1 + 0x118))(param_1);
  }
  iVar1 = _Mtx_unlock(param_1 + 0xb);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180637890(longlong *param_1,undefined1 param_2)
void FUN_180637890(longlong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined8 uStack_b8;
  longlong *plStack_b0;
  char acStack_a8 [128];
  ulonglong uStack_28;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  plVar1 = param_1 + 0xb;
  plStack_b0 = plVar1;
  iVar3 = _Mtx_lock(plVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  FUN_180060680(acStack_a8,&UNK_1809fd0a0,param_2);
  lVar2 = -1;
  do {
    lVar4 = lVar2;
    lVar2 = lVar4 + 1;
  } while (acStack_a8[lVar4 + 1] != '\0');
  iVar3 = (int)(lVar4 + 1);
  if (0 < iVar3) {
    FUN_1806277c0(param_1 + 7,(int)param_1[9] + iVar3);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_1 + 9) + param_1[8],acStack_a8,(longlong)((int)lVar4 + 2));
  }
  if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
    (**(code **)(*param_1 + 0x118))(param_1);
  }
  iVar3 = _Mtx_unlock(plVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806379a0(longlong *param_1,undefined2 param_2)
void FUN_1806379a0(longlong *param_1,undefined2 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined8 uStack_b8;
  longlong *plStack_b0;
  char acStack_a8 [128];
  ulonglong uStack_28;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  plVar1 = param_1 + 0xb;
  plStack_b0 = plVar1;
  iVar3 = _Mtx_lock(plVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  FUN_180060680(acStack_a8,&UNK_1809fd0a0,param_2);
  lVar2 = -1;
  do {
    lVar4 = lVar2;
    lVar2 = lVar4 + 1;
  } while (acStack_a8[lVar4 + 1] != '\0');
  iVar3 = (int)(lVar4 + 1);
  if (0 < iVar3) {
    FUN_1806277c0(param_1 + 7,(int)param_1[9] + iVar3);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_1 + 9) + param_1[8],acStack_a8,(longlong)((int)lVar4 + 2));
  }
  if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
    (**(code **)(*param_1 + 0x118))(param_1);
  }
  iVar3 = _Mtx_unlock(plVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180637ab0(longlong *param_1,short param_2)
void FUN_180637ab0(longlong *param_1,short param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined8 uStack_b8;
  longlong *plStack_b0;
  char acStack_a8 [128];
  ulonglong uStack_28;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  plVar1 = param_1 + 0xb;
  plStack_b0 = plVar1;
  iVar3 = _Mtx_lock(plVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  FUN_180060680(acStack_a8,&UNK_1809fd0a0,(int)param_2);
  lVar2 = -1;
  do {
    lVar4 = lVar2;
    lVar2 = lVar4 + 1;
  } while (acStack_a8[lVar4 + 1] != '\0');
  iVar3 = (int)(lVar4 + 1);
  if (0 < iVar3) {
    FUN_1806277c0(param_1 + 7,(int)param_1[9] + iVar3);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_1 + 9) + param_1[8],acStack_a8,(longlong)((int)lVar4 + 2));
  }
  if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
    (**(code **)(*param_1 + 0x118))(param_1);
  }
  iVar3 = _Mtx_unlock(plVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180637bc0(longlong *param_1,undefined4 param_2)
void FUN_180637bc0(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined8 uStack_b8;
  longlong *plStack_b0;
  char acStack_a8 [128];
  ulonglong uStack_28;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  plVar1 = param_1 + 0xb;
  plStack_b0 = plVar1;
  iVar3 = _Mtx_lock(plVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  FUN_180060680(acStack_a8,&UNK_1809fd0a0,param_2);
  lVar2 = -1;
  do {
    lVar4 = lVar2;
    lVar2 = lVar4 + 1;
  } while (acStack_a8[lVar4 + 1] != '\0');
  iVar3 = (int)(lVar4 + 1);
  if (0 < iVar3) {
    FUN_1806277c0(param_1 + 7,(int)param_1[9] + iVar3);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_1 + 9) + param_1[8],acStack_a8,(longlong)((int)lVar4 + 2));
  }
  if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
    (**(code **)(*param_1 + 0x118))(param_1);
  }
  iVar3 = _Mtx_unlock(plVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180637cd0(longlong *param_1,ulonglong param_2)
void FUN_180637cd0(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  int *piVar7;
  longlong lVar8;
  undefined1 auStack_108 [32];
  undefined *puStack_e8;
  longlong lStack_e0;
  uint uStack_d8;
  ulonglong uStack_d0;
  undefined8 uStack_c8;
  longlong *plStack_c0;
  int aiStack_b8 [32];
  ulonglong uStack_38;
  
  uStack_c8 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_108;
  plVar1 = param_1 + 0xb;
  plStack_c0 = plVar1;
  iVar2 = _Mtx_lock(plVar1);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  puStack_e8 = &UNK_180a3c3e0;
  uStack_d0 = 0;
  lStack_e0 = 0;
  uStack_d8 = 0;
  uVar3 = (param_2 ^ (longlong)param_2 >> 0x3f) - ((longlong)param_2 >> 0x3f);
  if (uVar3 == 0) {
    aiStack_b8[0] = 0;
  }
  uVar6 = (ulonglong)(uVar3 == 0);
  uVar5 = (uint)(uVar3 == 0);
  if (uVar3 != 0) {
    piVar7 = aiStack_b8 + uVar6;
    do {
      uVar4 = uVar3 / 10;
      *piVar7 = (int)uVar3 + (int)uVar4 * -10;
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      piVar7 = piVar7 + 1;
      uVar3 = uVar4;
    } while (uVar4 != 0);
  }
  if ((longlong)param_2 < 0) {
    FUN_1806277c0(&puStack_e8,1);
    *(undefined1 *)((ulonglong)uStack_d8 + lStack_e0) = 0x2d;
    *(undefined1 *)((ulonglong)(uStack_d8 + 1) + lStack_e0) = 0;
    uStack_d8 = uStack_d8 + 1;
  }
  lVar8 = (longlong)(int)uVar5;
  if (0 < (int)uVar5) {
    piVar7 = aiStack_b8 + lVar8 + -1;
    do {
      iVar2 = *piVar7;
      FUN_1806277c0(&puStack_e8,uStack_d8 + 1);
      *(char *)((ulonglong)uStack_d8 + lStack_e0) = (char)iVar2 + '0';
      *(undefined1 *)((ulonglong)(uStack_d8 + 1) + lStack_e0) = 0;
      uStack_d8 = uStack_d8 + 1;
      piVar7 = piVar7 + -1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  (**(code **)(*param_1 + 0x78))(param_1,&puStack_e8);
  if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
    (**(code **)(*param_1 + 0x118))(param_1);
  }
  puStack_e8 = &UNK_180a3c3e0;
  if (lStack_e0 == 0) {
    lStack_e0 = 0;
    uStack_d0 = uStack_d0 & 0xffffffff00000000;
    puStack_e8 = &UNK_18098bcb0;
    iVar2 = _Mtx_unlock(plVar1);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_108);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180637ee0(longlong *param_1,ulonglong param_2)
void FUN_180637ee0(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int *piVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_108 [32];
  undefined *puStack_e8;
  longlong lStack_e0;
  uint uStack_d8;
  ulonglong uStack_d0;
  undefined8 uStack_c8;
  longlong *plStack_c0;
  int aiStack_b8 [32];
  ulonglong uStack_38;
  
  uStack_c8 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_108;
  plVar1 = param_1 + 0xb;
  plStack_c0 = plVar1;
  iVar2 = _Mtx_lock(plVar1);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  puStack_e8 = &UNK_180a3c3e0;
  uStack_d0 = 0;
  lStack_e0 = 0;
  uStack_d8 = 0;
  bVar8 = param_2 == 0;
  if (bVar8) {
    aiStack_b8[0] = 0;
  }
  uVar4 = (ulonglong)bVar8;
  uVar3 = (uint)bVar8;
  if (!bVar8) {
    piVar6 = aiStack_b8 + uVar4;
    do {
      uVar5 = param_2 / 10;
      *piVar6 = (int)param_2 + (int)uVar5 * -10;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      piVar6 = piVar6 + 1;
      param_2 = uVar5;
    } while (uVar5 != 0);
  }
  lVar7 = (longlong)(int)uVar3;
  if (0 < (int)uVar3) {
    piVar6 = aiStack_b8 + lVar7 + -1;
    do {
      iVar2 = *piVar6;
      FUN_1806277c0(&puStack_e8,uStack_d8 + 1);
      *(char *)((ulonglong)uStack_d8 + lStack_e0) = (char)iVar2 + '0';
      *(undefined1 *)((ulonglong)(uStack_d8 + 1) + lStack_e0) = 0;
      uStack_d8 = uStack_d8 + 1;
      piVar6 = piVar6 + -1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  (**(code **)(*param_1 + 0x78))(param_1,&puStack_e8);
  if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
    (**(code **)(*param_1 + 0x118))(param_1);
  }
  puStack_e8 = &UNK_180a3c3e0;
  if (lStack_e0 == 0) {
    lStack_e0 = 0;
    uStack_d0 = uStack_d0 & 0xffffffff00000000;
    puStack_e8 = &UNK_18098bcb0;
    iVar2 = _Mtx_unlock(plVar1);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_108);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



longlong * FUN_1806380b0(longlong *param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined2 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  iVar1 = _Mtx_lock(param_1 + 0xb);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  iVar1 = (int)param_1[9];
  if (param_2 == '\0') {
    FUN_1806277c0(param_1 + 7,iVar1 + 2,param_3,param_4,uVar3);
    puVar2 = (undefined2 *)((ulonglong)*(uint *)(param_1 + 9) + param_1[8]);
    *puVar2 = 0x2030;
  }
  else {
    FUN_1806277c0(param_1 + 7,iVar1 + 2,param_3,param_4,uVar3);
    puVar2 = (undefined2 *)((ulonglong)*(uint *)(param_1 + 9) + param_1[8]);
    *puVar2 = 0x2031;
  }
  *(undefined1 *)(puVar2 + 1) = 0;
  *(int *)(param_1 + 9) = iVar1 + 2;
  if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
    (**(code **)(*param_1 + 0x118))(param_1);
  }
  iVar1 = _Mtx_unlock(param_1 + 0xb);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806381a0(longlong *param_1,float param_2)
void FUN_1806381a0(longlong *param_1,float param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_e8 [32];
  undefined8 uStack_c8;
  longlong *plStack_c0;
  char acStack_b8 [128];
  ulonglong uStack_38;
  
  uStack_c8 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_e8;
  plVar1 = param_1 + 0xb;
  plStack_c0 = plVar1;
  iVar3 = _Mtx_lock(plVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  FUN_180626eb0(acStack_b8,0x80,&UNK_180a3cdf8,(double)param_2);
  lVar2 = -1;
  do {
    lVar4 = lVar2;
    lVar2 = lVar4 + 1;
  } while (acStack_b8[lVar4 + 1] != '\0');
  iVar3 = (int)(lVar4 + 1);
  if (0 < iVar3) {
    FUN_1806277c0(param_1 + 7,(int)param_1[9] + iVar3);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_1 + 9) + param_1[8],acStack_b8,(longlong)((int)lVar4 + 2));
  }
  if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
    (**(code **)(*param_1 + 0x118))(param_1);
  }
  iVar3 = _Mtx_unlock(plVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



