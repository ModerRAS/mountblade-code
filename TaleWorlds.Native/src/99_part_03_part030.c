#include "TaleWorlds.Native.Split.h"

// 99_part_03_part030.c - 10 个函数

// 函数: void FUN_1801e8ce0(undefined8 *param_1,undefined8 param_2,int *param_3)
void FUN_1801e8ce0(undefined8 *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  lVar4 = FUN_18062b420(_DAT_180c8ed18,0x30,*(undefined1 *)(param_1 + 5));
  iVar1 = *param_3;
  bVar2 = true;
  *(int *)(lVar4 + 0x20) = iVar1;
  *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(param_3 + 2);
  puVar5 = (undefined8 *)param_1[2];
  puVar3 = param_1;
  while (puVar5 != (undefined8 *)0x0) {
    bVar2 = iVar1 < *(int *)(puVar5 + 4);
    puVar3 = puVar5;
    if (iVar1 < *(int *)(puVar5 + 4)) {
      puVar5 = (undefined8 *)puVar5[1];
    }
    else {
      puVar5 = (undefined8 *)*puVar5;
    }
  }
  puVar5 = puVar3;
  if (bVar2) {
    if (puVar3 == (undefined8 *)param_1[1]) goto LAB_1801e8d7c;
    puVar5 = (undefined8 *)func_0x00018066b9a0(puVar3);
  }
  if (*(int *)(lVar4 + 0x20) <= *(int *)(puVar5 + 4)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar4);
  }
LAB_1801e8d7c:
  if ((puVar3 == param_1) || (*(int *)(lVar4 + 0x20) < *(int *)(puVar3 + 4))) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4,puVar3,param_1,uVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1801e8de0(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  bool bVar7;
  undefined8 uVar8;
  ushort uStack_38;
  
  uVar2 = param_3[1];
  uVar3 = *(ulonglong *)(param_3 + 2);
  bVar7 = true;
  uStack_38 = (ushort)*param_3;
  puVar5 = (undefined8 *)param_1[2];
  puVar4 = param_1;
  while (puVar5 != (undefined8 *)0x0) {
    uVar1 = *(ushort *)(puVar5 + 4);
    puVar4 = puVar5;
    if ((uStack_38 < uVar1) ||
       ((uStack_38 <= uVar1 &&
        ((uVar2 < *(uint *)((longlong)puVar5 + 0x24) ||
         (((uStack_38 <= uVar1 && (uVar2 <= *(uint *)((longlong)puVar5 + 0x24))) &&
          (uVar3 < (ulonglong)puVar5[5])))))))) {
      bVar7 = true;
      puVar5 = (undefined8 *)puVar5[1];
    }
    else {
      bVar7 = false;
      puVar5 = (undefined8 *)*puVar5;
    }
  }
  puVar5 = puVar4;
  if (bVar7) {
    if (puVar4 == (undefined8 *)param_1[1]) goto LAB_1801e8eaa;
    puVar5 = (undefined8 *)func_0x00018066b9a0(puVar4);
  }
  uVar1 = *(ushort *)(puVar5 + 4);
  if ((uStack_38 <= uVar1) &&
     ((uStack_38 < uVar1 ||
      ((uVar2 <= *(uint *)((longlong)puVar5 + 0x24) &&
       (((uStack_38 < uVar1 || (uVar2 < *(uint *)((longlong)puVar5 + 0x24))) ||
        (uVar3 <= (ulonglong)puVar5[5])))))))) {
    *param_2 = puVar5;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
LAB_1801e8eaa:
  lVar6 = FUN_18062b420(_DAT_180c8ed18,0x30,*(undefined1 *)(param_1 + 5));
  *(undefined2 *)(lVar6 + 0x20) = *(undefined2 *)param_3;
  *(undefined4 *)(lVar6 + 0x24) = param_3[1];
  *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(param_3 + 2);
  if (((puVar4 == param_1) || (uVar1 = *(ushort *)(puVar4 + 4), uStack_38 < uVar1)) ||
     ((uStack_38 <= uVar1 &&
      ((uVar2 < *(uint *)((longlong)puVar4 + 0x24) ||
       (((uStack_38 <= uVar1 && (uVar2 <= *(uint *)((longlong)puVar4 + 0x24))) &&
        (uVar3 < (ulonglong)puVar4[5])))))))) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar6,puVar4,param_1,uVar8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801e8f50(undefined8 *param_1,undefined8 param_2)
void FUN_1801e8f50(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*param_1;
  lVar6 = ((longlong)puVar7 - (longlong)puVar3) / 0x30;
  puVar2 = (undefined8 *)0x0;
  if (lVar6 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = lVar6 * 2;
    if (lVar6 == 0) goto LAB_1801e8fdf;
  }
  puVar2 = (undefined8 *)
           FUN_18062b420(_DAT_180c8ed18,lVar6 * 0x30,*(undefined1 *)(param_1 + 3),puVar3,
                         0xfffffffffffffffe);
  puVar7 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*param_1;
LAB_1801e8fdf:
  puVar5 = puVar2;
  if (puVar3 != puVar7) {
    lVar4 = (longlong)puVar2 - (longlong)puVar3;
    puVar3 = puVar3 + 1;
    do {
      *puVar5 = &UNK_18098bcb0;
      *(undefined8 *)(lVar4 + (longlong)puVar3) = 0;
      *(undefined4 *)(lVar4 + 8 + (longlong)puVar3) = 0;
      *puVar5 = &UNK_180a3c3e0;
      *(undefined8 *)(lVar4 + 0x10 + (longlong)puVar3) = 0;
      *(undefined8 *)(lVar4 + (longlong)puVar3) = 0;
      *(undefined4 *)(lVar4 + 8 + (longlong)puVar3) = 0;
      *(undefined4 *)(lVar4 + 8 + (longlong)puVar3) = *(undefined4 *)(puVar3 + 1);
      *(undefined8 *)(lVar4 + (longlong)puVar3) = *puVar3;
      *(undefined4 *)(lVar4 + 0x14 + (longlong)puVar3) = *(undefined4 *)((longlong)puVar3 + 0x14);
      *(undefined4 *)(lVar4 + 0x10 + (longlong)puVar3) = *(undefined4 *)(puVar3 + 2);
      *(undefined4 *)(puVar3 + 1) = 0;
      *puVar3 = 0;
      puVar3[2] = 0;
      *(undefined8 *)(lVar4 + 0x18 + (longlong)puVar3) = puVar3[3];
      *(undefined1 *)(lVar4 + 0x20 + (longlong)puVar3) = *(undefined1 *)(puVar3 + 4);
      puVar5 = puVar5 + 6;
      puVar1 = puVar3 + 5;
      puVar3 = puVar3 + 6;
    } while (puVar1 != puVar7);
  }
  FUN_1801eb800(puVar5,param_2,0x1800467e0);
  puVar7 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != puVar7) {
    do {
      *puVar3 = &UNK_180a3c3e0;
      if (puVar3[1] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 3) = 0;
      *puVar3 = &UNK_18098bcb0;
      puVar3 = puVar3 + 6;
    } while (puVar3 != puVar7);
    puVar3 = (undefined8 *)*param_1;
  }
  if (puVar3 == (undefined8 *)0x0) {
    *param_1 = puVar2;
    param_1[1] = puVar5 + 6;
    param_1[2] = puVar2 + lVar6 * 6;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801e9140(undefined8 *param_1,undefined8 param_2)
void FUN_1801e9140(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*param_1;
  lVar6 = ((longlong)puVar7 - (longlong)puVar3) / 0x30;
  puVar2 = (undefined8 *)0x0;
  if (lVar6 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = lVar6 * 2;
    if (lVar6 == 0) goto LAB_1801e91cf;
  }
  puVar2 = (undefined8 *)
           FUN_18062b420(_DAT_180c8ed18,lVar6 * 0x30,*(undefined1 *)(param_1 + 3),puVar3,
                         0xfffffffffffffffe);
  puVar7 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*param_1;
LAB_1801e91cf:
  puVar5 = puVar2;
  if (puVar3 != puVar7) {
    lVar4 = (longlong)puVar2 - (longlong)puVar3;
    puVar3 = puVar3 + 1;
    do {
      *puVar5 = &UNK_18098bcb0;
      *(undefined8 *)(lVar4 + (longlong)puVar3) = 0;
      *(undefined4 *)(lVar4 + 8 + (longlong)puVar3) = 0;
      *puVar5 = &UNK_180a3c3e0;
      *(undefined8 *)(lVar4 + 0x10 + (longlong)puVar3) = 0;
      *(undefined8 *)(lVar4 + (longlong)puVar3) = 0;
      *(undefined4 *)(lVar4 + 8 + (longlong)puVar3) = 0;
      *(undefined4 *)(lVar4 + 8 + (longlong)puVar3) = *(undefined4 *)(puVar3 + 1);
      *(undefined8 *)(lVar4 + (longlong)puVar3) = *puVar3;
      *(undefined4 *)(lVar4 + 0x14 + (longlong)puVar3) = *(undefined4 *)((longlong)puVar3 + 0x14);
      *(undefined4 *)(lVar4 + 0x10 + (longlong)puVar3) = *(undefined4 *)(puVar3 + 2);
      *(undefined4 *)(puVar3 + 1) = 0;
      *puVar3 = 0;
      puVar3[2] = 0;
      *(undefined8 *)(lVar4 + 0x18 + (longlong)puVar3) = puVar3[3];
      *(undefined1 *)(lVar4 + 0x20 + (longlong)puVar3) = *(undefined1 *)(puVar3 + 4);
      puVar5 = puVar5 + 6;
      puVar1 = puVar3 + 5;
      puVar3 = puVar3 + 6;
    } while (puVar1 != puVar7);
  }
  FUN_1801eb800(puVar5,param_2,FUN_1801cfab0);
  puVar7 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != puVar7) {
    do {
      *puVar3 = &UNK_180a3c3e0;
      if (puVar3[1] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 3) = 0;
      *puVar3 = &UNK_18098bcb0;
      puVar3 = puVar3 + 6;
    } while (puVar3 != puVar7);
    puVar3 = (undefined8 *)*param_1;
  }
  if (puVar3 == (undefined8 *)0x0) {
    *param_1 = puVar2;
    param_1[1] = puVar5 + 6;
    param_1[2] = puVar2 + lVar6 * 6;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801e9330(undefined8 *param_1,undefined8 param_2)
void FUN_1801e9330(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*param_1;
  lVar6 = ((longlong)puVar7 - (longlong)puVar3) / 0x30;
  puVar2 = (undefined8 *)0x0;
  if (lVar6 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = lVar6 * 2;
    if (lVar6 == 0) goto LAB_1801e93bf;
  }
  puVar2 = (undefined8 *)
           FUN_18062b420(_DAT_180c8ed18,lVar6 * 0x30,*(undefined1 *)(param_1 + 3),puVar3,
                         0xfffffffffffffffe);
  puVar7 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*param_1;
LAB_1801e93bf:
  puVar5 = puVar2;
  if (puVar3 != puVar7) {
    lVar4 = (longlong)puVar2 - (longlong)puVar3;
    puVar3 = puVar3 + 1;
    do {
      *puVar5 = &UNK_18098bcb0;
      *(undefined8 *)(lVar4 + (longlong)puVar3) = 0;
      *(undefined4 *)(lVar4 + 8 + (longlong)puVar3) = 0;
      *puVar5 = &UNK_180a3c3e0;
      *(undefined8 *)(lVar4 + 0x10 + (longlong)puVar3) = 0;
      *(undefined8 *)(lVar4 + (longlong)puVar3) = 0;
      *(undefined4 *)(lVar4 + 8 + (longlong)puVar3) = 0;
      *(undefined4 *)(lVar4 + 8 + (longlong)puVar3) = *(undefined4 *)(puVar3 + 1);
      *(undefined8 *)(lVar4 + (longlong)puVar3) = *puVar3;
      *(undefined4 *)(lVar4 + 0x14 + (longlong)puVar3) = *(undefined4 *)((longlong)puVar3 + 0x14);
      *(undefined4 *)(lVar4 + 0x10 + (longlong)puVar3) = *(undefined4 *)(puVar3 + 2);
      *(undefined4 *)(puVar3 + 1) = 0;
      *puVar3 = 0;
      puVar3[2] = 0;
      *(undefined8 *)(lVar4 + 0x18 + (longlong)puVar3) = puVar3[3];
      *(undefined1 *)(lVar4 + 0x20 + (longlong)puVar3) = *(undefined1 *)(puVar3 + 4);
      puVar5 = puVar5 + 6;
      puVar1 = puVar3 + 5;
      puVar3 = puVar3 + 6;
    } while (puVar1 != puVar7);
  }
  FUN_1801eb800(puVar5,param_2,FUN_1801cfb90);
  puVar7 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != puVar7) {
    do {
      *puVar3 = &UNK_180a3c3e0;
      if (puVar3[1] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 3) = 0;
      *puVar3 = &UNK_18098bcb0;
      puVar3 = puVar3 + 6;
    } while (puVar3 != puVar7);
    puVar3 = (undefined8 *)*param_1;
  }
  if (puVar3 == (undefined8 *)0x0) {
    *param_1 = puVar2;
    param_1[1] = puVar5 + 6;
    param_1[2] = puVar2 + lVar6 * 6;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801e9520(undefined8 *param_1,undefined8 param_2)
void FUN_1801e9520(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*param_1;
  lVar6 = ((longlong)puVar7 - (longlong)puVar3) / 0x30;
  puVar2 = (undefined8 *)0x0;
  if (lVar6 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = lVar6 * 2;
    if (lVar6 == 0) goto LAB_1801e95af;
  }
  puVar2 = (undefined8 *)
           FUN_18062b420(_DAT_180c8ed18,lVar6 * 0x30,*(undefined1 *)(param_1 + 3),puVar3,
                         0xfffffffffffffffe);
  puVar7 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*param_1;
LAB_1801e95af:
  puVar5 = puVar2;
  if (puVar3 != puVar7) {
    lVar4 = (longlong)puVar2 - (longlong)puVar3;
    puVar3 = puVar3 + 1;
    do {
      *puVar5 = &UNK_18098bcb0;
      *(undefined8 *)(lVar4 + (longlong)puVar3) = 0;
      *(undefined4 *)(lVar4 + 8 + (longlong)puVar3) = 0;
      *puVar5 = &UNK_180a3c3e0;
      *(undefined8 *)(lVar4 + 0x10 + (longlong)puVar3) = 0;
      *(undefined8 *)(lVar4 + (longlong)puVar3) = 0;
      *(undefined4 *)(lVar4 + 8 + (longlong)puVar3) = 0;
      *(undefined4 *)(lVar4 + 8 + (longlong)puVar3) = *(undefined4 *)(puVar3 + 1);
      *(undefined8 *)(lVar4 + (longlong)puVar3) = *puVar3;
      *(undefined4 *)(lVar4 + 0x14 + (longlong)puVar3) = *(undefined4 *)((longlong)puVar3 + 0x14);
      *(undefined4 *)(lVar4 + 0x10 + (longlong)puVar3) = *(undefined4 *)(puVar3 + 2);
      *(undefined4 *)(puVar3 + 1) = 0;
      *puVar3 = 0;
      puVar3[2] = 0;
      *(undefined8 *)(lVar4 + 0x18 + (longlong)puVar3) = puVar3[3];
      *(undefined1 *)(lVar4 + 0x20 + (longlong)puVar3) = *(undefined1 *)(puVar3 + 4);
      puVar5 = puVar5 + 6;
      puVar1 = puVar3 + 5;
      puVar3 = puVar3 + 6;
    } while (puVar1 != puVar7);
  }
  FUN_1801eb800(puVar5,param_2,FUN_1801cfcb0);
  puVar7 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != puVar7) {
    do {
      *puVar3 = &UNK_180a3c3e0;
      if (puVar3[1] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 3) = 0;
      *puVar3 = &UNK_18098bcb0;
      puVar3 = puVar3 + 6;
    } while (puVar3 != puVar7);
    puVar3 = (undefined8 *)*param_1;
  }
  if (puVar3 == (undefined8 *)0x0) {
    *param_1 = puVar2;
    param_1[1] = puVar5 + 6;
    param_1[2] = puVar2 + lVar6 * 6;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801e9710(undefined8 *param_1,undefined8 param_2)
void FUN_1801e9710(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*param_1;
  lVar6 = ((longlong)puVar7 - (longlong)puVar3) / 0x30;
  puVar2 = (undefined8 *)0x0;
  if (lVar6 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = lVar6 * 2;
    if (lVar6 == 0) goto LAB_1801e979f;
  }
  puVar2 = (undefined8 *)
           FUN_18062b420(_DAT_180c8ed18,lVar6 * 0x30,*(undefined1 *)(param_1 + 3),puVar3,
                         0xfffffffffffffffe);
  puVar7 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*param_1;
LAB_1801e979f:
  puVar5 = puVar2;
  if (puVar3 != puVar7) {
    lVar4 = (longlong)puVar2 - (longlong)puVar3;
    puVar3 = puVar3 + 1;
    do {
      *puVar5 = &UNK_18098bcb0;
      *(undefined8 *)(lVar4 + (longlong)puVar3) = 0;
      *(undefined4 *)(lVar4 + 8 + (longlong)puVar3) = 0;
      *puVar5 = &UNK_180a3c3e0;
      *(undefined8 *)(lVar4 + 0x10 + (longlong)puVar3) = 0;
      *(undefined8 *)(lVar4 + (longlong)puVar3) = 0;
      *(undefined4 *)(lVar4 + 8 + (longlong)puVar3) = 0;
      *(undefined4 *)(lVar4 + 8 + (longlong)puVar3) = *(undefined4 *)(puVar3 + 1);
      *(undefined8 *)(lVar4 + (longlong)puVar3) = *puVar3;
      *(undefined4 *)(lVar4 + 0x14 + (longlong)puVar3) = *(undefined4 *)((longlong)puVar3 + 0x14);
      *(undefined4 *)(lVar4 + 0x10 + (longlong)puVar3) = *(undefined4 *)(puVar3 + 2);
      *(undefined4 *)(puVar3 + 1) = 0;
      *puVar3 = 0;
      puVar3[2] = 0;
      *(undefined8 *)(lVar4 + 0x18 + (longlong)puVar3) = puVar3[3];
      *(undefined1 *)(lVar4 + 0x20 + (longlong)puVar3) = *(undefined1 *)(puVar3 + 4);
      puVar5 = puVar5 + 6;
      puVar1 = puVar3 + 5;
      puVar3 = puVar3 + 6;
    } while (puVar1 != puVar7);
  }
  FUN_1801eb800(puVar5,param_2,FUN_1801cfcf0);
  puVar7 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != puVar7) {
    do {
      *puVar3 = &UNK_180a3c3e0;
      if (puVar3[1] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 3) = 0;
      *puVar3 = &UNK_18098bcb0;
      puVar3 = puVar3 + 6;
    } while (puVar3 != puVar7);
    puVar3 = (undefined8 *)*param_1;
  }
  if (puVar3 == (undefined8 *)0x0) {
    *param_1 = puVar2;
    param_1[1] = puVar5 + 6;
    param_1[2] = puVar2 + lVar6 * 6;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801e9900(undefined8 *param_1,undefined8 param_2)
void FUN_1801e9900(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*param_1;
  lVar6 = ((longlong)puVar7 - (longlong)puVar3) / 0x30;
  puVar2 = (undefined8 *)0x0;
  if (lVar6 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = lVar6 * 2;
    if (lVar6 == 0) goto LAB_1801e998f;
  }
  puVar2 = (undefined8 *)
           FUN_18062b420(_DAT_180c8ed18,lVar6 * 0x30,*(undefined1 *)(param_1 + 3),puVar3,
                         0xfffffffffffffffe);
  puVar7 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*param_1;
LAB_1801e998f:
  puVar5 = puVar2;
  if (puVar3 != puVar7) {
    lVar4 = (longlong)puVar2 - (longlong)puVar3;
    puVar3 = puVar3 + 1;
    do {
      *puVar5 = &UNK_18098bcb0;
      *(undefined8 *)(lVar4 + (longlong)puVar3) = 0;
      *(undefined4 *)(lVar4 + 8 + (longlong)puVar3) = 0;
      *puVar5 = &UNK_180a3c3e0;
      *(undefined8 *)(lVar4 + 0x10 + (longlong)puVar3) = 0;
      *(undefined8 *)(lVar4 + (longlong)puVar3) = 0;
      *(undefined4 *)(lVar4 + 8 + (longlong)puVar3) = 0;
      *(undefined4 *)(lVar4 + 8 + (longlong)puVar3) = *(undefined4 *)(puVar3 + 1);
      *(undefined8 *)(lVar4 + (longlong)puVar3) = *puVar3;
      *(undefined4 *)(lVar4 + 0x14 + (longlong)puVar3) = *(undefined4 *)((longlong)puVar3 + 0x14);
      *(undefined4 *)(lVar4 + 0x10 + (longlong)puVar3) = *(undefined4 *)(puVar3 + 2);
      *(undefined4 *)(puVar3 + 1) = 0;
      *puVar3 = 0;
      puVar3[2] = 0;
      *(undefined8 *)(lVar4 + 0x18 + (longlong)puVar3) = puVar3[3];
      *(undefined1 *)(lVar4 + 0x20 + (longlong)puVar3) = *(undefined1 *)(puVar3 + 4);
      puVar5 = puVar5 + 6;
      puVar1 = puVar3 + 5;
      puVar3 = puVar3 + 6;
    } while (puVar1 != puVar7);
  }
  FUN_1801eb800(puVar5,param_2,FUN_1801cfd30);
  puVar7 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != puVar7) {
    do {
      *puVar3 = &UNK_180a3c3e0;
      if (puVar3[1] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 3) = 0;
      *puVar3 = &UNK_18098bcb0;
      puVar3 = puVar3 + 6;
    } while (puVar3 != puVar7);
    puVar3 = (undefined8 *)*param_1;
  }
  if (puVar3 == (undefined8 *)0x0) {
    *param_1 = puVar2;
    param_1[1] = puVar5 + 6;
    param_1[2] = puVar2 + lVar6 * 6;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801e9af0(undefined8 *param_1,undefined8 param_2)
void FUN_1801e9af0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*param_1;
  lVar6 = ((longlong)puVar7 - (longlong)puVar3) / 0x30;
  puVar2 = (undefined8 *)0x0;
  if (lVar6 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = lVar6 * 2;
    if (lVar6 == 0) goto LAB_1801e9b7f;
  }
  puVar2 = (undefined8 *)
           FUN_18062b420(_DAT_180c8ed18,lVar6 * 0x30,*(undefined1 *)(param_1 + 3),puVar3,
                         0xfffffffffffffffe);
  puVar7 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*param_1;
LAB_1801e9b7f:
  puVar5 = puVar2;
  if (puVar3 != puVar7) {
    lVar4 = (longlong)puVar2 - (longlong)puVar3;
    puVar3 = puVar3 + 1;
    do {
      *puVar5 = &UNK_18098bcb0;
      *(undefined8 *)(lVar4 + (longlong)puVar3) = 0;
      *(undefined4 *)(lVar4 + 8 + (longlong)puVar3) = 0;
      *puVar5 = &UNK_180a3c3e0;
      *(undefined8 *)(lVar4 + 0x10 + (longlong)puVar3) = 0;
      *(undefined8 *)(lVar4 + (longlong)puVar3) = 0;
      *(undefined4 *)(lVar4 + 8 + (longlong)puVar3) = 0;
      *(undefined4 *)(lVar4 + 8 + (longlong)puVar3) = *(undefined4 *)(puVar3 + 1);
      *(undefined8 *)(lVar4 + (longlong)puVar3) = *puVar3;
      *(undefined4 *)(lVar4 + 0x14 + (longlong)puVar3) = *(undefined4 *)((longlong)puVar3 + 0x14);
      *(undefined4 *)(lVar4 + 0x10 + (longlong)puVar3) = *(undefined4 *)(puVar3 + 2);
      *(undefined4 *)(puVar3 + 1) = 0;
      *puVar3 = 0;
      puVar3[2] = 0;
      *(undefined8 *)(lVar4 + 0x18 + (longlong)puVar3) = puVar3[3];
      *(undefined1 *)(lVar4 + 0x20 + (longlong)puVar3) = *(undefined1 *)(puVar3 + 4);
      puVar5 = puVar5 + 6;
      puVar1 = puVar3 + 5;
      puVar3 = puVar3 + 6;
    } while (puVar1 != puVar7);
  }
  FUN_1801eb800(puVar5,param_2,FUN_1801cfe20);
  puVar7 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != puVar7) {
    do {
      *puVar3 = &UNK_180a3c3e0;
      if (puVar3[1] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 3) = 0;
      *puVar3 = &UNK_18098bcb0;
      puVar3 = puVar3 + 6;
    } while (puVar3 != puVar7);
    puVar3 = (undefined8 *)*param_1;
  }
  if (puVar3 == (undefined8 *)0x0) {
    *param_1 = puVar2;
    param_1[1] = puVar5 + 6;
    param_1[2] = puVar2 + lVar6 * 6;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801e9ce0(longlong param_1,undefined8 param_2,longlong param_3,char param_4,
void FUN_1801e9ce0(longlong param_1,undefined8 param_2,longlong param_3,char param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  undefined4 *puStack_48;
  undefined4 *puStack_40;
  undefined4 *puStack_38;
  undefined4 *puStack_30;
  undefined4 *puStack_28;
  undefined4 *puStack_20;
  
  if ((param_4 == '\0') && (param_3 != param_1)) {
    lStack_50 = param_3 + 0x20;
    puStack_20 = param_5;
    lStack_78 = param_3 + 0x3c;
    lStack_70 = param_3 + 0x38;
    lStack_68 = param_3 + 0x30;
    lStack_60 = param_3 + 0x28;
    lStack_58 = param_3 + 0x34;
    puStack_48 = param_5 + 7;
    puStack_40 = param_5 + 6;
    puStack_38 = param_5 + 4;
    puStack_30 = param_5 + 2;
    puStack_28 = param_5 + 5;
    cVar5 = func_0x0001801eb6f0(&puStack_48,&lStack_78);
    if (cVar5 == '\0') {
      uVar7 = 1;
      goto LAB_1801e9d8e;
    }
  }
  uVar7 = 0;
LAB_1801e9d8e:
  lVar6 = FUN_18062b420(_DAT_180c8ed18,0x48,*(undefined1 *)(param_1 + 0x28));
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(undefined4 *)(lVar6 + 0x20) = *param_5;
  *(undefined4 *)(lVar6 + 0x24) = uVar1;
  *(undefined4 *)(lVar6 + 0x28) = uVar2;
  *(undefined4 *)(lVar6 + 0x2c) = uVar3;
  uVar1 = param_5[4];
  uVar2 = param_5[5];
  uVar3 = param_5[6];
  uVar4 = param_5[7];
  *(undefined4 *)(lVar6 + 0x40) = 0;
  *(undefined4 *)(lVar6 + 0x30) = uVar1;
  *(undefined4 *)(lVar6 + 0x34) = uVar2;
  *(undefined4 *)(lVar6 + 0x38) = uVar3;
  *(undefined4 *)(lVar6 + 0x3c) = uVar4;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar6,param_3,param_1,uVar7);
}



longlong * FUN_1801e9e00(longlong *param_1,longlong *param_2,undefined1 *param_3,longlong param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong *plStack_50;
  longlong *plStack_48;
  longlong *plStack_40;
  longlong lStack_38;
  longlong *plStack_30;
  
  plVar2 = (longlong *)*param_1;
  if ((param_2 == plVar2) || (param_2 == param_1)) {
    if (param_1[4] != 0) {
      lStack_60 = (longlong)(plVar2 + 4);
      lStack_58 = param_4 + 0x1c;
      lStack_78 = (longlong)(plVar2 + 6);
      plStack_50 = (longlong *)(param_4 + 0x18);
      lStack_70 = (longlong)(plVar2 + 5);
      plStack_48 = (longlong *)(param_4 + 0x10);
      lStack_68 = (longlong)plVar2 + 0x34;
      plStack_40 = (longlong *)(param_4 + 8);
      lStack_38 = param_4 + 0x14;
      lStack_88 = (longlong)plVar2 + 0x3c;
      lStack_80 = (longlong)(plVar2 + 7);
      param_2 = plVar2;
      plStack_30 = (longlong *)param_4;
      cVar1 = func_0x0001801eb6f0(&lStack_88,&lStack_58);
      if (cVar1 != '\0') goto LAB_1801e9faa;
    }
  }
  else {
    plVar2 = (longlong *)func_0x00018066bd70(param_2);
    plStack_30 = param_2 + 4;
    lStack_58 = (longlong)param_2 + 0x3c;
    lVar3 = param_4 + 0x1c;
    plStack_50 = param_2 + 7;
    plStack_48 = param_2 + 6;
    plStack_40 = param_2 + 5;
    lStack_38 = (longlong)param_2 + 0x34;
    lStack_88 = lVar3;
    lStack_80 = param_4 + 0x18;
    lStack_78 = param_4 + 0x10;
    lStack_70 = param_4 + 8;
    lStack_68 = param_4 + 0x14;
    lStack_60 = param_4;
    cVar1 = func_0x0001801eb6f0(&lStack_58,&lStack_88);
    if (cVar1 != '\0') {
      plStack_30 = plVar2 + 4;
      lStack_58 = (longlong)plVar2 + 0x3c;
      plStack_50 = plVar2 + 7;
      plStack_48 = plVar2 + 6;
      plStack_40 = plVar2 + 5;
      lStack_38 = (longlong)plVar2 + 0x34;
      lStack_88 = lVar3;
      lStack_80 = param_4 + 0x18;
      lStack_78 = param_4 + 0x10;
      lStack_70 = param_4 + 8;
      lStack_68 = param_4 + 0x14;
      lStack_60 = param_4;
      cVar1 = func_0x0001801eb6f0(&lStack_88,&lStack_58);
      if (cVar1 != '\0') {
        if (*param_2 != 0) {
          *param_3 = 1;
          return plVar2;
        }
        goto LAB_1801e9faa;
      }
    }
  }
  param_2 = (longlong *)0x0;
LAB_1801e9faa:
  *param_3 = 0;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801e9fd0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
void FUN_1801e9fd0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  int *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if ((((char)param_4 == '\0') && (param_3 != param_1)) && (*(int *)(param_3 + 0x20) <= *param_5)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  lVar1 = FUN_18062b420(_DAT_180c8ed18,0x48,*(undefined1 *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  *(int *)(lVar1 + 0x20) = *param_5;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined4 *)(lVar1 + 0x40) = 3;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1,param_3,param_1,uVar2);
}






