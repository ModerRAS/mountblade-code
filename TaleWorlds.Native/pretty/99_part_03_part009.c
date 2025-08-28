#include "TaleWorlds.Native.Split.h"

// 99_part_03_part009.c - 6 个函数

// 函数: void FUN_1801cf2b0(undefined8 param_1,longlong param_2,char param_3,char param_4,char param_5)
void FUN_1801cf2b0(undefined8 param_1,longlong param_2,char param_3,char param_4,char param_5)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined4 uStack_60;
  ulonglong uStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined4 uStack_40;
  ulonglong uStack_38;
  
  puStack_70 = &UNK_180a3c3e0;
  uStack_58 = 0;
  puStack_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x16,0x13,param_4,0xfffffffffffffffe);
  *(undefined1 *)puVar2 = 0;
  puStack_68 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_58 = CONCAT44(uStack_58._4_4_,uVar1);
  *(undefined4 *)puVar2 = 0x5f657375;
  *(undefined4 *)((longlong)puVar2 + 4) = 0x74726976;
  *(undefined4 *)((longlong)puVar2 + 8) = 0x5f6c6175;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0x74786574;
  *(undefined4 *)((longlong)puVar2 + 0x10) = 0x6e697275;
  *(undefined2 *)((longlong)puVar2 + 0x14) = 0x67;
  uStack_60 = 0x15;
  if (*(ulonglong *)(param_2 + 8) < *(ulonglong *)(param_2 + 0x10)) {
    FUN_1801eb800(*(ulonglong *)(param_2 + 8),&puStack_70,0x1800467e0);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x30;
  }
  else {
    FUN_1801e8f50(param_2,&puStack_70);
    puVar2 = puStack_68;
  }
  puStack_70 = &UNK_180a3c3e0;
  if (puVar2 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar2);
  }
  if (param_5 == '\0') {
    if (param_3 != '\0') {
      puStack_70 = &UNK_180a3c3e0;
      uStack_58 = 0;
      puStack_68 = (undefined8 *)0x0;
      uStack_60 = 0;
      puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x15,0x13);
      *(undefined1 *)puVar2 = 0;
      puStack_68 = puVar2;
      uVar1 = FUN_18064e990(puVar2);
      uStack_58 = CONCAT44(uStack_58._4_4_,uVar1);
      *(undefined4 *)puVar2 = 0x5f657375;
      *(undefined4 *)((longlong)puVar2 + 4) = 0x6c626174;
      *(undefined4 *)((longlong)puVar2 + 8) = 0x5f756165;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0x6e656c62;
      *(undefined4 *)((longlong)puVar2 + 0x10) = 0x676e6964;
      *(undefined1 *)((longlong)puVar2 + 0x14) = 0;
      uStack_60 = 0x14;
      if (*(ulonglong *)(param_2 + 8) < *(ulonglong *)(param_2 + 0x10)) {
        FUN_1801eb800(*(ulonglong *)(param_2 + 8),&puStack_70,FUN_1801cfab0);
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x30;
      }
      else {
        FUN_1801e9140(param_2,&puStack_70);
        puVar2 = puStack_68;
      }
      puStack_70 = &UNK_180a3c3e0;
      if (puVar2 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar2);
      }
    }
    if (param_4 != '\0') {
      puStack_70 = &UNK_180a3c3e0;
      uStack_58 = 0;
      puStack_68 = (undefined8 *)0x0;
      uStack_60 = 0;
      puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x26,0x13);
      *(undefined1 *)puVar2 = 0;
      puStack_68 = puVar2;
      uVar1 = FUN_18064e990(puVar2);
      uStack_58 = CONCAT44(uStack_58._4_4_,uVar1);
      *(undefined4 *)puVar2 = 0x5f657375;
      *(undefined4 *)((longlong)puVar2 + 4) = 0x62756f64;
      *(undefined4 *)((longlong)puVar2 + 8) = 0x635f656c;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0x726f6c6f;
      *(undefined4 *)((longlong)puVar2 + 0x10) = 0x5f70616d;
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0x68746977;
      *(undefined4 *)((longlong)puVar2 + 0x18) = 0x73616d5f;
      *(undefined4 *)((longlong)puVar2 + 0x1c) = 0x65745f6b;
      *(undefined4 *)((longlong)puVar2 + 0x20) = 0x72757478;
      *(undefined2 *)((longlong)puVar2 + 0x24) = 0x65;
      uStack_60 = 0x25;
      if (*(ulonglong *)(param_2 + 8) < *(ulonglong *)(param_2 + 0x10)) {
        FUN_1801eb800(*(ulonglong *)(param_2 + 8),&puStack_70,FUN_1801cfb90);
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x30;
      }
      else {
        FUN_1801e9330(param_2,&puStack_70);
        puVar2 = puStack_68;
      }
      puStack_70 = &UNK_180a3c3e0;
      if (puVar2 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar2);
      }
    }
    puStack_70 = &UNK_180a3c3e0;
    uStack_58 = 0;
    puStack_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x11,0x13);
    *(undefined1 *)puVar2 = 0;
    puStack_68 = puVar2;
    uVar1 = FUN_18064e990(puVar2);
    uStack_58 = CONCAT44(uStack_58._4_4_,uVar1);
    *(undefined4 *)puVar2 = 0x74726170;
    *(undefined4 *)((longlong)puVar2 + 4) = 0x656c6369;
    *(undefined4 *)((longlong)puVar2 + 8) = 0x6168735f;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0x676e6964;
    *(undefined1 *)((longlong)puVar2 + 0x10) = 0;
    uStack_60 = 0x10;
    if (*(ulonglong *)(param_2 + 8) < *(ulonglong *)(param_2 + 0x10)) {
      FUN_1801eb800(*(ulonglong *)(param_2 + 8),&puStack_70,FUN_1801cfcb0);
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x30;
    }
    else {
      FUN_1801e9520(param_2,&puStack_70);
      puVar2 = puStack_68;
    }
    puStack_70 = &UNK_180a3c3e0;
    if (puVar2 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar2);
    }
    puStack_68 = (undefined8 *)0x0;
    uStack_58 = uStack_58 & 0xffffffff00000000;
    puStack_70 = &UNK_18098bcb0;
    puStack_50 = &UNK_180a3c3e0;
    uStack_38 = 0;
    puStack_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(undefined1 *)puVar2 = 0;
    puStack_48 = puVar2;
    uVar1 = FUN_18064e990(puVar2);
    uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
    *(undefined4 *)puVar2 = 0x5f657375;
    *(undefined4 *)((longlong)puVar2 + 4) = 0x73736574;
    *(undefined4 *)((longlong)puVar2 + 8) = 0x74616c65;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0x6e6f69;
    uStack_40 = 0xf;
    if (*(ulonglong *)(param_2 + 8) < *(ulonglong *)(param_2 + 0x10)) {
      FUN_1801eb800(*(ulonglong *)(param_2 + 8),&puStack_50,FUN_1801cfcf0);
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x30;
    }
    else {
      FUN_1801e9710(param_2,&puStack_50);
      puVar2 = puStack_48;
    }
    puStack_50 = &UNK_180a3c3e0;
    if (puVar2 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar2);
    }
    puStack_48 = (undefined8 *)0x0;
    uStack_38 = uStack_38 & 0xffffffff00000000;
    puStack_50 = &UNK_18098bcb0;
    puStack_70 = &UNK_180a3c3e0;
    uStack_58 = 0;
    puStack_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(undefined1 *)puVar2 = 0;
    puStack_68 = puVar2;
    uVar1 = FUN_18064e990(puVar2);
    uStack_58 = CONCAT44(uStack_58._4_4_,uVar1);
    *puVar2 = 0x6c6175715f776f6c;
    *(undefined4 *)(puVar2 + 1) = 0x797469;
    uStack_60 = 0xb;
    if (*(ulonglong *)(param_2 + 8) < *(ulonglong *)(param_2 + 0x10)) {
      FUN_1801eb800(*(ulonglong *)(param_2 + 8),&puStack_70,FUN_1801cfcf0);
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x30;
    }
    else {
      FUN_1801e9710(param_2,&puStack_70);
      puVar2 = puStack_68;
    }
    puStack_70 = &UNK_180a3c3e0;
    if (puVar2 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar2);
    }
    puStack_68 = (undefined8 *)0x0;
    uStack_58 = uStack_58 & 0xffffffff00000000;
    puStack_70 = &UNK_18098bcb0;
    puStack_50 = &UNK_180a3c3e0;
    uStack_38 = 0;
    puStack_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x11,0x13);
    *(undefined1 *)puVar2 = 0;
    puStack_48 = puVar2;
    uVar1 = FUN_18064e990(puVar2);
    uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
    *(undefined4 *)puVar2 = 0x5f657375;
    *(undefined4 *)((longlong)puVar2 + 4) = 0x6873656d;
    *(undefined4 *)((longlong)puVar2 + 8) = 0x6e65625f;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0x676e6964;
    *(undefined1 *)((longlong)puVar2 + 0x10) = 0;
    uStack_40 = 0x10;
    if (*(ulonglong *)(param_2 + 8) < *(ulonglong *)(param_2 + 0x10)) {
      FUN_1801eb800(*(ulonglong *)(param_2 + 8),&puStack_50,0x1800467e0);
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x30;
    }
    else {
      FUN_1801e8f50(param_2,&puStack_50);
      puVar2 = puStack_48;
    }
    puStack_50 = &UNK_180a3c3e0;
    if (puVar2 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar2);
    }
    puStack_48 = (undefined8 *)0x0;
    uStack_38 = uStack_38 & 0xffffffff00000000;
    puStack_50 = &UNK_18098bcb0;
    puStack_70 = &UNK_180a3c3e0;
    uStack_58 = 0;
    puStack_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x1a,0x13);
    *(undefined1 *)puVar2 = 0;
    puStack_68 = puVar2;
    uVar1 = FUN_18064e990(puVar2);
    uStack_58 = CONCAT44(uStack_58._4_4_,uVar1);
    *(undefined4 *)puVar2 = 0x6d766e65;
    *(undefined4 *)((longlong)puVar2 + 4) = 0x725f7061;
    *(undefined4 *)((longlong)puVar2 + 8) = 0x65646e65;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0x676e6972;
    *(undefined8 *)((longlong)puVar2 + 0x10) = 0x616e7265746e695f;
    *(undefined2 *)((longlong)puVar2 + 0x18) = 0x6c;
    uStack_60 = 0x19;
    if (*(ulonglong *)(param_2 + 8) < *(ulonglong *)(param_2 + 0x10)) {
      FUN_1801eb800(*(ulonglong *)(param_2 + 8),&puStack_70,FUN_1801cfd30);
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x30;
    }
    else {
      FUN_1801e9900(param_2,&puStack_70);
      puVar2 = puStack_68;
    }
    puStack_70 = &UNK_180a3c3e0;
    if (puVar2 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar2);
    }
    puStack_68 = (undefined8 *)0x0;
    uStack_58 = uStack_58 & 0xffffffff00000000;
    puStack_70 = &UNK_18098bcb0;
    puStack_50 = &UNK_180a3c3e0;
    uStack_38 = 0;
    puStack_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x14,0x13);
    *(undefined1 *)puVar2 = 0;
    puStack_48 = puVar2;
    uVar1 = FUN_18064e990(puVar2);
    uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
    *(undefined4 *)puVar2 = 0x74706564;
    *(undefined4 *)((longlong)puVar2 + 4) = 0x6e6f5f68;
    *(undefined4 *)((longlong)puVar2 + 8) = 0x695f796c;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0x7265746e;
    *(undefined4 *)((longlong)puVar2 + 0x10) = 0x6c616e;
    uStack_40 = 0x13;
    if (*(ulonglong *)(param_2 + 8) < *(ulonglong *)(param_2 + 0x10)) {
      FUN_1801eb800(*(ulonglong *)(param_2 + 8),&puStack_50,FUN_1801cfd30);
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x30;
    }
    else {
      FUN_1801e9900(param_2,&puStack_50);
      puVar2 = puStack_48;
    }
    puStack_50 = &UNK_180a3c3e0;
    if (puVar2 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar2);
    }
    puStack_48 = (undefined8 *)0x0;
    uStack_38 = uStack_38 & 0xffffffff00000000;
    puStack_50 = &UNK_18098bcb0;
    puStack_70 = &UNK_180a3c3e0;
    uStack_58 = 0;
    puStack_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x11,0x13);
    *(undefined1 *)puVar2 = 0;
    puStack_68 = puVar2;
    uVar1 = FUN_18064e990(puVar2);
    uStack_58 = CONCAT44(uStack_58._4_4_,uVar1);
    *(undefined4 *)puVar2 = 0x5f657375;
    *(undefined4 *)((longlong)puVar2 + 4) = 0x5f303633;
    *(undefined4 *)((longlong)puVar2 + 8) = 0x616e6170;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0x616d6f72;
    *(undefined1 *)((longlong)puVar2 + 0x10) = 0;
    uStack_60 = 0x10;
    if (*(ulonglong *)(param_2 + 8) < *(ulonglong *)(param_2 + 0x10)) {
      FUN_1801eb800(*(ulonglong *)(param_2 + 8),&puStack_70,FUN_1801cfe20);
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x30;
    }
    else {
      FUN_1801e9af0(param_2,&puStack_70);
      puVar2 = puStack_68;
    }
    puStack_70 = &UNK_180a3c3e0;
    if (puVar2 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar2);
    }
    puStack_68 = (undefined8 *)0x0;
    uStack_58 = uStack_58 & 0xffffffff00000000;
    puStack_70 = &UNK_18098bcb0;
    puStack_50 = &UNK_180a3c3e0;
    uStack_38 = 0;
    puStack_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(undefined1 *)puVar2 = 0;
    puStack_48 = puVar2;
    uVar1 = FUN_18064e990(puVar2);
    uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
    *puVar2 = 0x656275635f657375;
    *(undefined4 *)(puVar2 + 1) = 0x70616d;
    uStack_40 = 0xb;
    if (*(ulonglong *)(param_2 + 8) < *(ulonglong *)(param_2 + 0x10)) {
      FUN_1801eb800(*(ulonglong *)(param_2 + 8),&puStack_50,FUN_1801cfe20);
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x30;
    }
    else {
      FUN_1801e9af0(param_2,&puStack_50);
      puVar2 = puStack_48;
    }
    puStack_50 = &UNK_180a3c3e0;
    if (puVar2 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar2);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801cfab0(longlong param_1)
void FUN_1801cfab0(longlong param_1)

{
  undefined1 auStack_a8 [32];
  undefined8 uStack_88;
  undefined *puStack_78;
  undefined1 *puStack_70;
  undefined4 uStack_68;
  undefined1 auStack_60 [72];
  ulonglong uStack_18;
  
  uStack_88 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_a8;
  puStack_78 = &UNK_1809fcc58;
  puStack_70 = auStack_60;
  auStack_60[0] = 0;
  uStack_68 = 0x11;
  strcpy_s(auStack_60,0x40,&UNK_180a0d530);
  FUN_180240430(*(undefined8 *)(param_1 + 0x1e0),&puStack_78,0);
  puStack_78 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801cfb90(longlong param_1)
void FUN_1801cfb90(longlong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_a8 [32];
  undefined8 uStack_88;
  undefined *puStack_78;
  undefined1 *puStack_70;
  undefined4 uStack_68;
  undefined1 auStack_60 [72];
  ulonglong uStack_18;
  
  uStack_88 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_a8;
  puStack_78 = &UNK_1809fcc58;
  puStack_70 = auStack_60;
  auStack_60[0] = 0;
  uStack_68 = 0x11;
  strcpy_s(auStack_60,0x40,&UNK_180a0d530);
  FUN_180240430(*(undefined8 *)(param_1 + 0x1e0),&puStack_78,0);
  puStack_78 = &UNK_18098bcb0;
  puVar1 = *(undefined **)(*(longlong *)(param_1 + 0x1e0) + 0x18);
  puVar2 = &DAT_18098bc73;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
  }
  strstr(puVar2,&UNK_180a0d548);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_a8);
}



bool FUN_1801cfcb0(longlong param_1)

{
  undefined *puVar1;
  longlong lVar2;
  undefined *puVar3;
  
  puVar1 = *(undefined **)(*(longlong *)(param_1 + 0x1e0) + 0x18);
  puVar3 = &DAT_18098bc73;
  if (puVar1 != (undefined *)0x0) {
    puVar3 = puVar1;
  }
  lVar2 = strstr(puVar3,&DAT_180a03870);
  return lVar2 != 0;
}



bool FUN_1801cfcf0(longlong param_1)

{
  undefined *puVar1;
  longlong lVar2;
  undefined *puVar3;
  
  puVar1 = *(undefined **)(*(longlong *)(param_1 + 0x1e0) + 0x18);
  puVar3 = &DAT_18098bc73;
  if (puVar1 != (undefined *)0x0) {
    puVar3 = puVar1;
  }
  lVar2 = strstr(puVar3,&UNK_180a0d520);
  return lVar2 != 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801cfd30(longlong param_1)
void FUN_1801cfd30(longlong param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined8 uStack_88;
  undefined *puStack_78;
  undefined1 *puStack_70;
  int iStack_68;
  undefined1 auStack_60 [72];
  ulonglong uStack_18;
  
  uStack_88 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)(param_1 + 0x1e0);
  puStack_78 = &UNK_1809fcc58;
  puStack_70 = auStack_60;
  auStack_60[0] = 0;
  iStack_68 = 0xd;
  strcpy_s(auStack_60,0x40,&UNK_180a0d520);
  iVar2 = *(int *)(lVar4 + 0x20);
  if ((iVar2 == iStack_68) && (iVar2 != 0)) {
    pcVar3 = *(char **)(lVar4 + 0x18);
    lVar4 = (longlong)puStack_70 - (longlong)pcVar3;
    do {
      pcVar1 = pcVar3 + lVar4;
      if (*pcVar3 != *pcVar1) break;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar1 != '\0');
  }
  puStack_78 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801cfe20(longlong param_1)
void FUN_1801cfe20(longlong param_1)

{
  longlong lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_a8 [32];
  undefined8 uStack_88;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined4 uStack_68;
  undefined auStack_60 [72];
  ulonglong uStack_18;
  
  uStack_88 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_1 + 0x1e0);
  puStack_78 = &UNK_1809fcc58;
  puStack_70 = auStack_60;
  auStack_60[0] = 0;
  uStack_68 = 6;
  strcpy_s(auStack_60,0x40,&UNK_180a035a4);
  puVar4 = &DAT_18098bc73;
  if (puStack_70 != (undefined *)0x0) {
    puVar4 = puStack_70;
  }
  puVar2 = *(undefined **)(lVar1 + 0x18);
  puVar3 = &DAT_18098bc73;
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar2;
  }
  strstr(puVar3,puVar4);
  puStack_78 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_a8);
}



longlong FUN_1801cff00(longlong param_1,ulonglong *param_2,longlong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong alStack_28 [4];
  
  FUN_1801e1250(param_1 + 0x148,alStack_28,param_3,param_2,param_2[1] ^ *param_2);
  uVar1 = *(uint *)(param_3 + 0x10);
  uVar2 = (ulonglong)uVar1;
  if (*(longlong *)(param_3 + 8) != 0) {
    FUN_1806277c0(alStack_28[0] + 0x10,uVar2);
  }
  if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(*(undefined8 *)(alStack_28[0] + 0x18),*(undefined8 *)(param_3 + 8),uVar2);
  }
  *(undefined4 *)(alStack_28[0] + 0x20) = 0;
  if (*(longlong *)(alStack_28[0] + 0x18) != 0) {
    *(undefined1 *)(uVar2 + *(longlong *)(alStack_28[0] + 0x18)) = 0;
  }
  *(undefined4 *)(alStack_28[0] + 0x2c) = *(undefined4 *)(param_3 + 0x1c);
  return alStack_28[0] + 0x10;
}



undefined8 FUN_1801cff40(longlong param_1,ulonglong *param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x150);
  for (puVar2 = *(ulonglong **)
                 (lVar1 + ((param_2[1] ^ *param_2) % (ulonglong)*(uint *)(param_1 + 0x158)) * 8);
      puVar2 != (ulonglong *)0x0; puVar2 = (ulonglong *)puVar2[6]) {
    if ((*param_2 == *puVar2) && (param_2[1] == puVar2[1])) goto LAB_1801cff8d;
  }
  puVar2 = (ulonglong *)0x0;
LAB_1801cff8d:
  if (puVar2 == (ulonglong *)0x0) {
    puVar2 = *(ulonglong **)(lVar1 + *(longlong *)(param_1 + 0x158) * 8);
  }
  if (puVar2 == *(ulonglong **)(lVar1 + *(longlong *)(param_1 + 0x158) * 8)) {
    return 0;
  }
  FUN_180627be0(param_3,puVar2 + 2);
  return 1;
}






// 函数: void FUN_1801cffc0(longlong *param_1,longlong *param_2)
void FUN_1801cffc0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  byte *pbVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 in_stack_ffffffffffffff50;
  undefined4 uVar16;
  undefined8 in_stack_ffffffffffffff58;
  longlong *plVar17;
  undefined4 uVar19;
  undefined8 uVar18;
  undefined *puStack_88;
  byte *pbStack_80;
  uint uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  byte *pbStack_60;
  uint uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined4 uStack_30;
  
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  puStack_68 = &UNK_180a3c3e0;
  uStack_50 = 0;
  pbStack_60 = (byte *)0x0;
  uStack_58 = 0;
  if (param_2[4] == 0) {
    FUN_180627c50(&puStack_68,&UNK_180a0d608);
    lVar5 = param_2[1];
    plVar17 = param_2;
    lVar7 = FUN_1801d06b0(lVar5,&puStack_48,*param_2 + 0x10,
                          *(undefined2 *)((longlong)param_2 + 0x14),(int)param_2[2],lVar5,param_2);
    uVar9 = uStack_58;
    uVar16 = (undefined4)((ulonglong)lVar5 >> 0x20);
    uVar19 = (undefined4)((ulonglong)plVar17 >> 0x20);
    puStack_88 = &UNK_180a3c3e0;
    uStack_70 = 0;
    pbStack_80 = (byte *)0x0;
    uStack_78 = 0;
    uVar10 = (ulonglong)uStack_58;
    if (pbStack_60 != (byte *)0x0) {
      FUN_1806277c0(&puStack_88,uVar10);
    }
    if (uVar9 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(pbStack_80,pbStack_60,uVar10);
    }
    uStack_78 = uVar9;
    if (pbStack_80 != (byte *)0x0) {
      pbStack_80[uVar10] = 0;
    }
    uStack_70 = CONCAT44(uStack_50._4_4_,(undefined4)uStack_70);
    if (0 < *(int *)(lVar7 + 0x10)) {
      FUN_1806277c0(&puStack_88,*(int *)(lVar7 + 0x10));
                    // WARNING: Subroutine does not return
      memcpy(pbStack_80 + uStack_78,*(undefined8 *)(lVar7 + 8),
             (longlong)(*(int *)(lVar7 + 0x10) + 1));
    }
    if (pbStack_60 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    pbStack_60 = pbStack_80;
    uStack_50 = CONCAT44(uStack_50._4_4_,(undefined4)uStack_70);
    uStack_78 = 0;
    pbStack_80 = (byte *)0x0;
    uStack_70 = 0;
    puStack_88 = &UNK_18098bcb0;
    puStack_48 = &UNK_180a3c3e0;
    uStack_58 = uVar9;
    if (puStack_40 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    FUN_180627c50(&puStack_68,&UNK_180a0d604);
    lVar5 = FUN_1806279c0(&puStack_48,*param_2 + 0x10);
    uVar6 = FUN_1800ade00(*(undefined4 *)((longlong)param_2 + 0xa4));
    FUN_180628040(&puStack_48,&UNK_180a0d5f8,uVar6);
    FUN_180628040(&puStack_48,&UNK_180a0d5fc,*(undefined2 *)((longlong)param_2 + 0x14));
    FUN_180628040(&puStack_48,&UNK_180a0d5fc,param_2[1]);
    FUN_180628040(&puStack_48,&UNK_180a0d5fc,(int)param_2[2]);
    FUN_180628040(&puStack_48,&UNK_180a0d5fc,(int)param_2[0x14]);
    FUN_180628040(&puStack_48,&UNK_180a0d5fc,param_2[4]);
    uVar9 = uStack_58;
    puStack_88 = &UNK_180a3c3e0;
    uStack_70 = 0;
    pbStack_80 = (byte *)0x0;
    uStack_78 = 0;
    uVar10 = (ulonglong)uStack_58;
    if (pbStack_60 != (byte *)0x0) {
      FUN_1806277c0(&puStack_88,uVar10);
    }
    if (uVar9 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(pbStack_80,pbStack_60,uVar10);
    }
    uStack_78 = uVar9;
    if (pbStack_80 != (byte *)0x0) {
      pbStack_80[uVar10] = 0;
    }
    uStack_70 = CONCAT44(uStack_50._4_4_,(undefined4)uStack_70);
    if (0 < *(int *)(lVar5 + 0x10)) {
      FUN_1806277c0(&puStack_88,*(int *)(lVar5 + 0x10));
                    // WARNING: Subroutine does not return
      memcpy(pbStack_80 + uStack_78,*(undefined8 *)(lVar5 + 8),
             (longlong)(*(int *)(lVar5 + 0x10) + 1));
    }
    if (pbStack_60 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    pbStack_60 = pbStack_80;
    uStack_50 = CONCAT44(uStack_50._4_4_,(undefined4)uStack_70);
    uStack_78 = 0;
    pbStack_80 = (byte *)0x0;
    uStack_70 = 0;
    puStack_88 = &UNK_18098bcb0;
    puStack_48 = &UNK_180a3c3e0;
    uStack_58 = uVar9;
    if (puStack_40 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  uStack_70 = 0;
  uStack_30 = 0;
  puStack_40 = (undefined *)0x0;
  uStack_78 = 0;
  pbStack_80 = (byte *)0x0;
  puStack_88 = &UNK_18098bcb0;
  puStack_48 = &UNK_18098bcb0;
  iVar4 = _Mtx_lock(param_1 + 7);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  plVar17 = param_1 + 1;
  plVar12 = (longlong *)param_1[3];
  plVar15 = plVar17;
  if (plVar12 != (longlong *)0x0) {
    do {
      if (uStack_58 == 0) {
        bVar2 = false;
        plVar13 = (longlong *)plVar12[1];
      }
      else {
        if ((int)plVar12[6] == 0) {
          bVar2 = true;
        }
        else {
          pbVar8 = pbStack_60;
          do {
            uVar9 = (uint)pbVar8[plVar12[5] - (longlong)pbStack_60];
            iVar4 = *pbVar8 - uVar9;
            if (*pbVar8 != uVar9) break;
            pbVar8 = pbVar8 + 1;
          } while (uVar9 != 0);
          bVar2 = 0 < iVar4;
          if (iVar4 < 1) {
            plVar13 = (longlong *)plVar12[1];
            goto LAB_1801d03d7;
          }
        }
        plVar13 = (longlong *)*plVar12;
      }
LAB_1801d03d7:
      plVar14 = plVar12;
      if (bVar2) {
        plVar14 = plVar15;
      }
      plVar12 = plVar13;
      plVar15 = plVar14;
    } while (plVar13 != (longlong *)0x0);
    if (plVar14 != plVar17) {
      if ((int)plVar14[6] == 0) goto LAB_1801d04a3;
      if (uStack_58 != 0) {
        pbVar8 = (byte *)plVar14[5];
        lVar5 = (longlong)pbStack_60 - (longlong)pbVar8;
        do {
          bVar1 = *pbVar8;
          uVar9 = (uint)pbVar8[lVar5];
          if (bVar1 != uVar9) break;
          pbVar8 = pbVar8 + 1;
        } while (uVar9 != 0);
        if ((int)(bVar1 - uVar9) < 1) goto LAB_1801d04a3;
      }
    }
  }
  FUN_180057b00(plVar17,&puStack_88,&puStack_68);
  lVar5 = param_2[1];
  uVar18 = CONCAT44(uVar19,(int)param_2[2]);
  uVar6 = CONCAT44(uVar16,*(undefined4 *)((longlong)param_2 + 0xa4));
  uVar9 = (uint)*(byte *)((longlong)param_2 + 0x14);
  FUN_1802230e0();
  (**(code **)(*param_1 + 8))(param_1,param_2,&puStack_48,&puStack_68,uVar9,uVar6,uVar18,lVar5);
  puVar3 = puStack_40;
  for (puVar11 = puStack_48; puVar11 != puVar3; puVar11 = puVar11 + 0x78) {
    FUN_1800adb30(puVar11);
  }
  if (puStack_48 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
LAB_1801d04a3:
  iVar4 = _Mtx_unlock(param_1 + 7);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  puStack_68 = &UNK_180a3c3e0;
  if (pbStack_60 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




