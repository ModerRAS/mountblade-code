#include "TaleWorlds.Native.Split.h"

// 99_part_03_part037.c - 6 个函数

// 函数: void FUN_1801f01c0(void)
void FUN_1801f01c0(void)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  undefined4 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_a8;
  undefined1 uStack_98;
  undefined4 uStack_90;
  longlong lStack_88;
  longlong *plStack_80;
  longlong *plStack_78;
  undefined8 uStack_70;
  longlong lStack_68;
  undefined *puStack_60;
  undefined1 *puStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [32];
  ulonglong uStack_28;
  
  lVar2 = _DAT_180c8aa20;
  uStack_70 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_e8;
  lVar4 = _DAT_180c8aa20 + 0x80;
  lStack_68 = lVar4;
  iVar3 = _Mtx_lock(lVar4);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  if (*(char *)(lVar2 + 0xe9) == '\0') {
    iVar3 = _Mtx_unlock(lVar4);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_e8);
  }
  lVar6 = 0;
  for (lVar4 = *(longlong *)(lVar2 + 0x28); lVar4 != lVar2 + 0x20;
      lVar4 = func_0x00018066bd70(lVar4)) {
    if (*(longlong *)(lVar4 + 0x40) != 0) {
      *(int *)(lVar4 + 0x5c) = (int)lVar6;
      lVar6 = lVar6 + *(int *)(lVar4 + 0x50);
    }
  }
  for (lVar4 = *(longlong *)(lVar2 + 0x58); lVar4 != lVar2 + 0x50;
      lVar4 = func_0x00018066bd70(lVar4)) {
    if (*(longlong *)(lVar4 + 0x38) != 0) {
      *(int *)(lVar4 + 0x54) = (int)lVar6;
      lVar6 = lVar6 + *(int *)(lVar4 + 0x48);
    }
  }
  FUN_180081350();
  for (lVar4 = *(longlong *)(lVar2 + 0x28); lVar4 != lVar2 + 0x20;
      lVar4 = func_0x00018066bd70(lVar4,0,iVar3)) {
    iVar3 = *(int *)(lVar4 + 0x50) * 2;
    if (*(longlong *)(lVar4 + 0x40) != 0) {
                    // WARNING: Subroutine does not return
      memcpy(*(longlong *)(lStack_88 + 0x10) + (longlong)*(int *)(lVar4 + 0x5c) * 2,
             *(longlong *)(lVar4 + 0x40),(longlong)iVar3);
    }
  }
  lVar4 = *(longlong *)(lVar2 + 0x58);
  while( true ) {
    if (lVar4 == lVar2 + 0x50) {
      puStack_60 = &UNK_18098bc80;
      puStack_58 = auStack_48;
      auStack_48[0] = 0;
      uStack_50 = 0x11;
      strcpy_s(auStack_48,0x20,&UNK_180a0e150);
      uStack_90 = 1;
      uStack_98 = 0;
      uStack_b0 = 2;
      uStack_b8 = 0x2c;
      uStack_c0 = 0;
      uStack_c8 = 1;
      uStack_a8 = (int)lVar6;
      puVar5 = (undefined8 *)FUN_1800b0a10();
      uVar1 = *puVar5;
      *puVar5 = 0;
      plStack_80 = *(longlong **)(lVar2 + 0xe0);
      *(undefined8 *)(lVar2 + 0xe0) = uVar1;
      if (plStack_80 != (longlong *)0x0) {
        (**(code **)(*plStack_80 + 0x38))();
      }
      if (plStack_78 != (longlong *)0x0) {
        (**(code **)(*plStack_78 + 0x38))();
      }
      puStack_60 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
      FUN_180062300(_DAT_180c86928,&UNK_180a0e120,lVar6);
    }
    iVar3 = *(int *)(lVar4 + 0x48) * 2;
    if (*(longlong *)(lVar4 + 0x38) != 0) break;
    lVar4 = func_0x00018066bd70(lVar4,0,iVar3);
  }
                    // WARNING: Subroutine does not return
  memcpy(*(longlong *)(lStack_88 + 0x10) + (longlong)*(int *)(lVar4 + 0x54) * 2,
         *(longlong *)(lVar4 + 0x38),(longlong)iVar3);
}



undefined8 *
FUN_1801f04c0(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             undefined4 *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  bool bVar13;
  
  plVar8 = (longlong *)*param_1;
  if ((param_4 == plVar8) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (iVar7 = memcmp(plVar8 + 4,param_5,0x10), param_4 = plVar8, iVar7 < 0))
    {
LAB_1801f0551:
      uVar11 = 0;
      goto LAB_1801f0554;
    }
  }
  else {
    plVar8 = (longlong *)func_0x00018066bd70(param_4);
    iVar7 = memcmp(param_4 + 4,param_5,0x10);
    if ((iVar7 < 0) && (iVar7 = memcmp(param_5,plVar8 + 4,0x10), iVar7 < 0)) {
      if (*param_4 == 0) goto LAB_1801f0551;
      uVar11 = 1;
      param_4 = plVar8;
LAB_1801f0554:
      if (param_4 != (longlong *)0x0) {
        FUN_1801f0690(param_1,param_2,param_4,uVar11,param_5);
        return param_2;
      }
    }
  }
  bVar13 = true;
  plVar8 = (longlong *)param_1[2];
  plVar6 = param_1;
  while (plVar8 != (longlong *)0x0) {
    iVar7 = memcmp(param_5,plVar8 + 4,0x10);
    bVar13 = iVar7 < 0;
    plVar6 = plVar8;
    if (bVar13) {
      plVar8 = (longlong *)plVar8[1];
    }
    else {
      plVar8 = (longlong *)*plVar8;
    }
  }
  plVar8 = plVar6;
  if (bVar13) {
    if (plVar6 != (longlong *)param_1[1]) {
      plVar8 = (longlong *)func_0x00018066b9a0(plVar6);
      goto LAB_1801f05c4;
    }
  }
  else {
LAB_1801f05c4:
    iVar7 = memcmp(plVar8 + 4,param_5,0x10);
    if (-1 < iVar7) {
      *param_2 = plVar8;
      return param_2;
    }
  }
  lVar10 = 0;
  if (plVar6 != param_1) {
    iVar7 = memcmp(param_5,plVar6 + 4,0x10);
    lVar12 = 1;
    if (-1 < iVar7) goto LAB_1801f0606;
  }
  lVar12 = lVar10;
LAB_1801f0606:
  plVar2 = (longlong *)param_1[5];
  LOCK();
  plVar8 = plVar2 + 1;
  lVar1 = *plVar8;
  *plVar8 = *plVar8 + 0x70;
  UNLOCK();
  uVar9 = lVar1 + 0xfU & 0xfffffffffffffff0;
  if (uVar9 + 0x60 < (ulonglong)plVar2[3]) {
    lVar10 = *plVar2 + uVar9;
  }
  uVar3 = param_5[1];
  uVar4 = param_5[2];
  uVar5 = param_5[3];
  *(undefined4 *)(lVar10 + 0x20) = *param_5;
  *(undefined4 *)(lVar10 + 0x24) = uVar3;
  *(undefined4 *)(lVar10 + 0x28) = uVar4;
  *(undefined4 *)(lVar10 + 0x2c) = uVar5;
  *(undefined8 *)(lVar10 + 0x30) = 0;
  *(undefined8 *)(lVar10 + 0x38) = 0;
  *(undefined8 *)(lVar10 + 0x40) = 0;
  *(undefined8 *)(lVar10 + 0x48) = 0;
  *(undefined4 *)(lVar10 + 0x50) = 0;
  *(undefined8 *)(lVar10 + 0x54) = 0xffffffffffffffff;
  *(undefined4 *)(lVar10 + 0x5c) = 0xffffffff;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar10,plVar6,param_1,lVar12);
}






// 函数: void FUN_1801f05de(undefined4 param_1)
void FUN_1801f05de(undefined4 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong unaff_RBX;
  undefined4 *unaff_RBP;
  longlong unaff_RSI;
  longlong lVar8;
  
  lVar8 = 0;
  if (unaff_RBX != unaff_RSI) {
    memcmp(param_1,unaff_RBX + 0x20,0x10);
  }
  plVar3 = *(longlong **)(unaff_RSI + 0x28);
  LOCK();
  plVar1 = plVar3 + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + 0x70;
  UNLOCK();
  uVar7 = lVar2 + 0xfU & 0xfffffffffffffff0;
  if (uVar7 + 0x60 < (ulonglong)plVar3[3]) {
    lVar8 = *plVar3 + uVar7;
  }
  uVar4 = unaff_RBP[1];
  uVar5 = unaff_RBP[2];
  uVar6 = unaff_RBP[3];
  *(undefined4 *)(lVar8 + 0x20) = *unaff_RBP;
  *(undefined4 *)(lVar8 + 0x24) = uVar4;
  *(undefined4 *)(lVar8 + 0x28) = uVar5;
  *(undefined4 *)(lVar8 + 0x2c) = uVar6;
  *(undefined8 *)(lVar8 + 0x30) = 0;
  *(undefined8 *)(lVar8 + 0x38) = 0;
  *(undefined8 *)(lVar8 + 0x40) = 0;
  *(undefined8 *)(lVar8 + 0x48) = 0;
  *(undefined4 *)(lVar8 + 0x50) = 0;
  *(undefined8 *)(lVar8 + 0x54) = 0xffffffffffffffff;
  *(undefined4 *)(lVar8 + 0x5c) = 0xffffffff;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar8);
}






// 函数: void FUN_1801f0674(void)
void FUN_1801f0674(void)

{
  undefined8 unaff_RDI;
  undefined8 *unaff_R14;
  
  *unaff_R14 = unaff_RDI;
  return;
}






// 函数: void FUN_1801f0690(longlong param_1,undefined8 param_2,longlong param_3,char param_4,
void FUN_1801f0690(longlong param_1,undefined8 param_2,longlong param_3,char param_4,
                  undefined4 *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar9 = 0;
  if ((param_4 == '\0') && (param_3 != param_1)) {
    iVar7 = memcmp(param_5,param_3 + 0x20,0x10);
    lVar10 = 1;
    if (-1 < iVar7) goto LAB_1801f06de;
  }
  lVar10 = lVar9;
LAB_1801f06de:
  plVar3 = *(longlong **)(param_1 + 0x28);
  LOCK();
  plVar1 = plVar3 + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + 0x70;
  UNLOCK();
  uVar8 = lVar2 + 0xfU & 0xfffffffffffffff0;
  if (uVar8 + 0x60 < (ulonglong)plVar3[3]) {
    lVar9 = *plVar3 + uVar8;
  }
  uVar4 = param_5[1];
  uVar5 = param_5[2];
  uVar6 = param_5[3];
  *(undefined4 *)(lVar9 + 0x20) = *param_5;
  *(undefined4 *)(lVar9 + 0x24) = uVar4;
  *(undefined4 *)(lVar9 + 0x28) = uVar5;
  *(undefined4 *)(lVar9 + 0x2c) = uVar6;
  *(undefined8 *)(lVar9 + 0x30) = 0;
  *(undefined8 *)(lVar9 + 0x38) = 0;
  *(undefined8 *)(lVar9 + 0x40) = 0;
  *(undefined8 *)(lVar9 + 0x48) = 0;
  *(undefined4 *)(lVar9 + 0x50) = 0;
  *(undefined8 *)(lVar9 + 0x54) = 0xffffffffffffffff;
  *(undefined4 *)(lVar9 + 0x5c) = 0xffffffff;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar9,param_3,param_1,lVar10);
}



undefined8 *
FUN_1801f0780(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_180a3c3e0;
  param_2[3] = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  FUN_1806277c0(param_2,0,param_3,param_4,0,0xfffffffffffffffe);
  *(undefined4 *)(param_2 + 2) = 0;
  if ((undefined1 *)param_2[1] != (undefined1 *)0x0) {
    *(undefined1 *)param_2[1] = 0;
  }
  return param_2;
}



longlong FUN_1801f0810(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x28) = 3;
  *(longlong *)param_2 = param_2;
  *(longlong *)(param_2 + 8) = param_2;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined1 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  return param_2;
}



longlong FUN_1801f0860(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x28) = 3;
  *(longlong *)param_2 = param_2;
  *(longlong *)(param_2 + 8) = param_2;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined1 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801f08b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1801f08b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 *puStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  uVar4 = 0xfffffffffffffffe;
  FUN_180057110(param_2);
  puStack_60 = &UNK_180a3c3e0;
  uStack_48 = 0;
  puStack_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  puVar2 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13,param_4,uVar4);
  *(undefined1 *)puVar2 = 0;
  puStack_58 = (undefined8 *)puVar2;
  uVar1 = FUN_18064e990(puVar2);
  *puVar2 = 0x6974614e;
  *(undefined2 *)(puVar2 + 1) = 0x6576;
  *(undefined1 *)((longlong)puVar2 + 6) = 0;
  uStack_50 = 6;
  uStack_48._0_4_ = uVar1;
  FUN_180066df0(param_2,&puStack_60);
  puStack_60 = &UNK_180a3c3e0;
  if (puStack_58 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_58 = (undefined8 *)0x0;
  uStack_48 = (ulonglong)uStack_48._4_4_ << 0x20;
  puStack_60 = &UNK_18098bcb0;
  puStack_40 = &UNK_180a3c3e0;
  uStack_28 = 0;
  puStack_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  puVar3 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13,param_4,uVar4);
  *(undefined1 *)puVar3 = 0;
  puStack_38 = puVar3;
  uVar1 = FUN_18064e990(puVar3);
  *puVar3 = 0x786f62646e6153;
  uStack_30 = 7;
  uStack_28._0_4_ = uVar1;
  FUN_180066df0(param_2,&puStack_40);
  puStack_40 = &UNK_180a3c3e0;
  if (puStack_38 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_38 = (undefined8 *)0x0;
  uStack_28 = (ulonglong)uStack_28._4_4_ << 0x20;
  puStack_40 = &UNK_18098bcb0;
  puStack_60 = &UNK_180a3c3e0;
  uStack_48 = 0;
  puStack_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  puVar3 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar3 = 0;
  puStack_58 = puVar3;
  uVar1 = FUN_18064e990(puVar3);
  *puVar3 = 0x43786f62646e6153;
  *(undefined4 *)(puVar3 + 1) = 0x65726f;
  uStack_50 = 0xb;
  uStack_48._0_4_ = uVar1;
  FUN_180066df0(param_2,&puStack_60);
  puStack_60 = &UNK_180a3c3e0;
  if (puStack_58 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_58 = (undefined8 *)0x0;
  uStack_48 = (ulonglong)uStack_48._4_4_ << 0x20;
  puStack_60 = &UNK_18098bcb0;
  puStack_40 = &UNK_180a3c3e0;
  uStack_28 = 0;
  puStack_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  puVar2 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar2 = 0;
  puStack_38 = (undefined8 *)puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_28 = CONCAT44(uStack_28._4_4_,uVar1);
  *puVar2 = 0x74736554;
  *(undefined1 *)(puVar2 + 1) = 0;
  uStack_30 = 4;
  FUN_180066df0(param_2,&puStack_40);
  puStack_40 = &UNK_180a3c3e0;
  if (puStack_38 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801f0b30(void)
void FUN_1801f0b30(void)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 auStack_e8 [32];
  undefined1 uStack_c8;
  undefined *puStack_b8;
  undefined4 *puStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined *puStack_90;
  undefined1 *puStack_88;
  uint uStack_80;
  uint uStack_78;
  undefined *puStack_70;
  undefined4 *puStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  undefined4 uStack_38;
  undefined1 auStack_30 [16];
  ulonglong uStack_20;
  
  lVar1 = _DAT_180c86950;
  uStack_50 = 0xfffffffffffffffe;
  uStack_20 = _DAT_180bf00a8 ^ (ulonglong)auStack_e8;
  uStack_98 = 0;
  if (*(char *)(_DAT_180c86950 + 0x1609) != '\x01') {
    FUN_1801723a0(*(undefined8 *)(_DAT_180c86870 + 8),*(char *)(_DAT_180c868d0 + 0x2028) != '\0',
                  *(undefined4 *)(_DAT_180c86950 + 0x160c));
    *(undefined1 *)(lVar1 + 0x1609) = 1;
  }
  puStack_b8 = &UNK_180a3c3e0;
  uStack_a0 = 0;
  puStack_b0 = (undefined4 *)0x0;
  uStack_a8 = 0;
  puVar4 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar4 = 0;
  puStack_b0 = puVar4;
  uVar2 = FUN_18064e990(puVar4);
  *puVar4 = 0x61746144;
  puVar4[1] = 0x6e616c2f;
  puVar4[2] = 0x67617567;
  puVar4[3] = 0x2f7365;
  uStack_a8 = 0xf;
  if (uVar2 < 0x12) {
    uStack_c8 = 0x13;
    uStack_a0._0_4_ = uVar2;
    puVar4 = (undefined4 *)FUN_18062b8b0(_DAT_180c8ed18,puVar4,0x12,0x10);
    puStack_b0 = puVar4;
    uVar2 = FUN_18064e990(puVar4);
  }
  *(undefined2 *)((longlong)puVar4 + 0xf) = 0x6e65;
  *(undefined1 *)((longlong)puVar4 + 0x11) = 0;
  uStack_a8 = 0x11;
  uStack_a0._0_4_ = uVar2;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x20,0x13);
    *(undefined1 *)puVar4 = 0;
LAB_1801f0caa:
    puStack_b0 = puVar4;
    uStack_a0._0_4_ = FUN_18064e990(puVar4);
  }
  else if (uVar2 < 0x20) {
    uStack_c8 = 0x13;
    puVar4 = (undefined4 *)FUN_18062b8b0(_DAT_180c8ed18,puVar4,0x20,0x10);
    goto LAB_1801f0caa;
  }
  *(undefined8 *)((longlong)puVar4 + 0x11) = 0x61645f746e6f662f;
  *(undefined4 *)((longlong)puVar4 + 0x19) = 0x782e6174;
  *(undefined2 *)((longlong)puVar4 + 0x1d) = 0x6c6d;
  *(undefined1 *)((longlong)puVar4 + 0x1f) = 0;
  uStack_a8 = 0x1f;
  puStack_48 = &UNK_1809fdc18;
  puStack_40 = auStack_30;
  auStack_30[0] = 0;
  uStack_38 = 6;
  strcpy_s(auStack_30,0x10,&UNK_180a3c07c);
  uStack_98 = 1;
  FUN_1806279c0(&puStack_90,&puStack_48);
  uStack_98 = 0;
  puStack_48 = &UNK_18098bcb0;
  iVar5 = uStack_80 + 0x12;
  if (iVar5 != 0) {
    uVar2 = uStack_80 + 0x13;
    if (puStack_88 == (undefined1 *)0x0) {
      if ((int)uVar2 < 0x10) {
        uVar2 = 0x10;
      }
      puStack_88 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar2,0x13);
      *puStack_88 = 0;
    }
    else {
      if (uVar2 <= uStack_78) goto LAB_1801f0db0;
      uStack_c8 = 0x13;
      puStack_88 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puStack_88,uVar2,0x10);
    }
    uStack_78 = FUN_18064e990(puStack_88);
  }
LAB_1801f0db0:
  puVar4 = (undefined4 *)(puStack_88 + uStack_80);
  *puVar4 = 0x61746144;
  puVar4[1] = 0x6e6f662f;
  puVar4[2] = 0x61645f74;
  puVar4[3] = 0x782e6174;
  *(undefined2 *)(puVar4 + 4) = 0x6c6d;
  *(undefined1 *)((longlong)puVar4 + 0x12) = 0;
  puStack_70 = &UNK_180a3c3e0;
  uStack_58 = 0;
  puStack_68 = (undefined4 *)0x0;
  uStack_60 = 0;
  uStack_80 = iVar5;
  puVar4 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar4 = 0;
  puStack_68 = puVar4;
  uVar3 = FUN_18064e990(puVar4);
  *puVar4 = 0x6974614e;
  *(undefined2 *)(puVar4 + 1) = 0x6576;
  *(undefined1 *)((longlong)puVar4 + 6) = 0;
  uStack_60 = 6;
  uStack_58._0_4_ = uVar3;
  FUN_180180ad0(0,&puStack_70,&puStack_b8,&puStack_90);
  puStack_70 = &UNK_180a3c3e0;
  if (puStack_68 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_68 = (undefined4 *)0x0;
  uStack_58 = (ulonglong)uStack_58._4_4_ << 0x20;
  puStack_70 = &UNK_18098bcb0;
  puStack_90 = &UNK_180a3c3e0;
  if (puStack_88 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_88 = (undefined1 *)0x0;
  uStack_78 = 0;
  puStack_90 = &UNK_18098bcb0;
  puStack_b8 = &UNK_180a3c3e0;
  if (puStack_b0 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_b0 = (undefined4 *)0x0;
  uStack_a0 = (ulonglong)uStack_a0._4_4_ << 0x20;
  puStack_b8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (ulonglong)auStack_e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




