#include "TaleWorlds.Native.Split.h"

// 99_part_03_part009.c - 6 个函数

// 函数: void FUN_1801cf2b0(uint64_t param_1,longlong param_2,char param_3,char param_4,char param_5)
void FUN_1801cf2b0(uint64_t param_1,longlong param_2,char param_3,char param_4,char param_5)

{
  int32_t uVar1;
  uint64_t *puVar2;
  void *puStack_70;
  uint64_t *puStack_68;
  int32_t uStack_60;
  ulonglong uStack_58;
  void *puStack_50;
  uint64_t *puStack_48;
  int32_t uStack_40;
  ulonglong uStack_38;
  
  puStack_70 = &UNK_180a3c3e0;
  uStack_58 = 0;
  puStack_68 = (uint64_t *)0x0;
  uStack_60 = 0;
  puVar2 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x16,0x13,param_4,0xfffffffffffffffe);
  *(int8_t *)puVar2 = 0;
  puStack_68 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_58 = CONCAT44(uStack_58._4_4_,uVar1);
  *(int32_t *)puVar2 = 0x5f657375;
  *(int32_t *)((longlong)puVar2 + 4) = 0x74726976;
  *(int32_t *)((longlong)puVar2 + 8) = 0x5f6c6175;
  *(int32_t *)((longlong)puVar2 + 0xc) = 0x74786574;
  *(int32_t *)((longlong)puVar2 + 0x10) = 0x6e697275;
  *(int16_t *)((longlong)puVar2 + 0x14) = 0x67;
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
  if (puVar2 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar2);
  }
  if (param_5 == '\0') {
    if (param_3 != '\0') {
      puStack_70 = &UNK_180a3c3e0;
      uStack_58 = 0;
      puStack_68 = (uint64_t *)0x0;
      uStack_60 = 0;
      puVar2 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x15,0x13);
      *(int8_t *)puVar2 = 0;
      puStack_68 = puVar2;
      uVar1 = FUN_18064e990(puVar2);
      uStack_58 = CONCAT44(uStack_58._4_4_,uVar1);
      *(int32_t *)puVar2 = 0x5f657375;
      *(int32_t *)((longlong)puVar2 + 4) = 0x6c626174;
      *(int32_t *)((longlong)puVar2 + 8) = 0x5f756165;
      *(int32_t *)((longlong)puVar2 + 0xc) = 0x6e656c62;
      *(int32_t *)((longlong)puVar2 + 0x10) = 0x676e6964;
      *(int8_t *)((longlong)puVar2 + 0x14) = 0;
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
      if (puVar2 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar2);
      }
    }
    if (param_4 != '\0') {
      puStack_70 = &UNK_180a3c3e0;
      uStack_58 = 0;
      puStack_68 = (uint64_t *)0x0;
      uStack_60 = 0;
      puVar2 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x26,0x13);
      *(int8_t *)puVar2 = 0;
      puStack_68 = puVar2;
      uVar1 = FUN_18064e990(puVar2);
      uStack_58 = CONCAT44(uStack_58._4_4_,uVar1);
      *(int32_t *)puVar2 = 0x5f657375;
      *(int32_t *)((longlong)puVar2 + 4) = 0x62756f64;
      *(int32_t *)((longlong)puVar2 + 8) = 0x635f656c;
      *(int32_t *)((longlong)puVar2 + 0xc) = 0x726f6c6f;
      *(int32_t *)((longlong)puVar2 + 0x10) = 0x5f70616d;
      *(int32_t *)((longlong)puVar2 + 0x14) = 0x68746977;
      *(int32_t *)((longlong)puVar2 + 0x18) = 0x73616d5f;
      *(int32_t *)((longlong)puVar2 + 0x1c) = 0x65745f6b;
      *(int32_t *)((longlong)puVar2 + 0x20) = 0x72757478;
      *(int16_t *)((longlong)puVar2 + 0x24) = 0x65;
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
      if (puVar2 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar2);
      }
    }
    puStack_70 = &UNK_180a3c3e0;
    uStack_58 = 0;
    puStack_68 = (uint64_t *)0x0;
    uStack_60 = 0;
    puVar2 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x11,0x13);
    *(int8_t *)puVar2 = 0;
    puStack_68 = puVar2;
    uVar1 = FUN_18064e990(puVar2);
    uStack_58 = CONCAT44(uStack_58._4_4_,uVar1);
    *(int32_t *)puVar2 = 0x74726170;
    *(int32_t *)((longlong)puVar2 + 4) = 0x656c6369;
    *(int32_t *)((longlong)puVar2 + 8) = 0x6168735f;
    *(int32_t *)((longlong)puVar2 + 0xc) = 0x676e6964;
    *(int8_t *)((longlong)puVar2 + 0x10) = 0;
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
    if (puVar2 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar2);
    }
    puStack_68 = (uint64_t *)0x0;
    uStack_58 = uStack_58 & 0xffffffff00000000;
    puStack_70 = &UNK_18098bcb0;
    puStack_50 = &UNK_180a3c3e0;
    uStack_38 = 0;
    puStack_48 = (uint64_t *)0x0;
    uStack_40 = 0;
    puVar2 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(int8_t *)puVar2 = 0;
    puStack_48 = puVar2;
    uVar1 = FUN_18064e990(puVar2);
    uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
    *(int32_t *)puVar2 = 0x5f657375;
    *(int32_t *)((longlong)puVar2 + 4) = 0x73736574;
    *(int32_t *)((longlong)puVar2 + 8) = 0x74616c65;
    *(int32_t *)((longlong)puVar2 + 0xc) = 0x6e6f69;
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
    if (puVar2 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar2);
    }
    puStack_48 = (uint64_t *)0x0;
    uStack_38 = uStack_38 & 0xffffffff00000000;
    puStack_50 = &UNK_18098bcb0;
    puStack_70 = &UNK_180a3c3e0;
    uStack_58 = 0;
    puStack_68 = (uint64_t *)0x0;
    uStack_60 = 0;
    puVar2 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(int8_t *)puVar2 = 0;
    puStack_68 = puVar2;
    uVar1 = FUN_18064e990(puVar2);
    uStack_58 = CONCAT44(uStack_58._4_4_,uVar1);
    *puVar2 = 0x6c6175715f776f6c;
    *(int32_t *)(puVar2 + 1) = 0x797469;
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
    if (puVar2 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar2);
    }
    puStack_68 = (uint64_t *)0x0;
    uStack_58 = uStack_58 & 0xffffffff00000000;
    puStack_70 = &UNK_18098bcb0;
    puStack_50 = &UNK_180a3c3e0;
    uStack_38 = 0;
    puStack_48 = (uint64_t *)0x0;
    uStack_40 = 0;
    puVar2 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x11,0x13);
    *(int8_t *)puVar2 = 0;
    puStack_48 = puVar2;
    uVar1 = FUN_18064e990(puVar2);
    uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
    *(int32_t *)puVar2 = 0x5f657375;
    *(int32_t *)((longlong)puVar2 + 4) = 0x6873656d;
    *(int32_t *)((longlong)puVar2 + 8) = 0x6e65625f;
    *(int32_t *)((longlong)puVar2 + 0xc) = 0x676e6964;
    *(int8_t *)((longlong)puVar2 + 0x10) = 0;
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
    if (puVar2 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar2);
    }
    puStack_48 = (uint64_t *)0x0;
    uStack_38 = uStack_38 & 0xffffffff00000000;
    puStack_50 = &UNK_18098bcb0;
    puStack_70 = &UNK_180a3c3e0;
    uStack_58 = 0;
    puStack_68 = (uint64_t *)0x0;
    uStack_60 = 0;
    puVar2 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x1a,0x13);
    *(int8_t *)puVar2 = 0;
    puStack_68 = puVar2;
    uVar1 = FUN_18064e990(puVar2);
    uStack_58 = CONCAT44(uStack_58._4_4_,uVar1);
    *(int32_t *)puVar2 = 0x6d766e65;
    *(int32_t *)((longlong)puVar2 + 4) = 0x725f7061;
    *(int32_t *)((longlong)puVar2 + 8) = 0x65646e65;
    *(int32_t *)((longlong)puVar2 + 0xc) = 0x676e6972;
    *(uint64_t *)((longlong)puVar2 + 0x10) = 0x616e7265746e695f;
    *(int16_t *)((longlong)puVar2 + 0x18) = 0x6c;
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
    if (puVar2 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar2);
    }
    puStack_68 = (uint64_t *)0x0;
    uStack_58 = uStack_58 & 0xffffffff00000000;
    puStack_70 = &UNK_18098bcb0;
    puStack_50 = &UNK_180a3c3e0;
    uStack_38 = 0;
    puStack_48 = (uint64_t *)0x0;
    uStack_40 = 0;
    puVar2 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x14,0x13);
    *(int8_t *)puVar2 = 0;
    puStack_48 = puVar2;
    uVar1 = FUN_18064e990(puVar2);
    uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
    *(int32_t *)puVar2 = 0x74706564;
    *(int32_t *)((longlong)puVar2 + 4) = 0x6e6f5f68;
    *(int32_t *)((longlong)puVar2 + 8) = 0x695f796c;
    *(int32_t *)((longlong)puVar2 + 0xc) = 0x7265746e;
    *(int32_t *)((longlong)puVar2 + 0x10) = 0x6c616e;
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
    if (puVar2 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar2);
    }
    puStack_48 = (uint64_t *)0x0;
    uStack_38 = uStack_38 & 0xffffffff00000000;
    puStack_50 = &UNK_18098bcb0;
    puStack_70 = &UNK_180a3c3e0;
    uStack_58 = 0;
    puStack_68 = (uint64_t *)0x0;
    uStack_60 = 0;
    puVar2 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x11,0x13);
    *(int8_t *)puVar2 = 0;
    puStack_68 = puVar2;
    uVar1 = FUN_18064e990(puVar2);
    uStack_58 = CONCAT44(uStack_58._4_4_,uVar1);
    *(int32_t *)puVar2 = 0x5f657375;
    *(int32_t *)((longlong)puVar2 + 4) = 0x5f303633;
    *(int32_t *)((longlong)puVar2 + 8) = 0x616e6170;
    *(int32_t *)((longlong)puVar2 + 0xc) = 0x616d6f72;
    *(int8_t *)((longlong)puVar2 + 0x10) = 0;
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
    if (puVar2 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar2);
    }
    puStack_68 = (uint64_t *)0x0;
    uStack_58 = uStack_58 & 0xffffffff00000000;
    puStack_70 = &UNK_18098bcb0;
    puStack_50 = &UNK_180a3c3e0;
    uStack_38 = 0;
    puStack_48 = (uint64_t *)0x0;
    uStack_40 = 0;
    puVar2 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(int8_t *)puVar2 = 0;
    puStack_48 = puVar2;
    uVar1 = FUN_18064e990(puVar2);
    uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
    *puVar2 = 0x656275635f657375;
    *(int32_t *)(puVar2 + 1) = 0x70616d;
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
    if (puVar2 != (uint64_t *)0x0) {
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
  int8_t auStack_a8 [32];
  uint64_t uStack_88;
  void *puStack_78;
  int8_t *puStack_70;
  int32_t uStack_68;
  int8_t auStack_60 [72];
  ulonglong uStack_18;
  
  uStack_88 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_a8;
  puStack_78 = &UNK_1809fcc58;
  puStack_70 = auStack_60;
  auStack_60[0] = 0;
  uStack_68 = 0x11;
  strcpy_s(auStack_60,0x40,&UNK_180a0d530);
  FUN_180240430(*(uint64_t *)(param_1 + 0x1e0),&puStack_78,0);
  puStack_78 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801cfb90(longlong param_1)
void FUN_1801cfb90(longlong param_1)

{
  void *puVar1;
  void *puVar2;
  int8_t auStack_a8 [32];
  uint64_t uStack_88;
  void *puStack_78;
  int8_t *puStack_70;
  int32_t uStack_68;
  int8_t auStack_60 [72];
  ulonglong uStack_18;
  
  uStack_88 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_a8;
  puStack_78 = &UNK_1809fcc58;
  puStack_70 = auStack_60;
  auStack_60[0] = 0;
  uStack_68 = 0x11;
  strcpy_s(auStack_60,0x40,&UNK_180a0d530);
  FUN_180240430(*(uint64_t *)(param_1 + 0x1e0),&puStack_78,0);
  puStack_78 = &UNK_18098bcb0;
  puVar1 = *(void **)(*(longlong *)(param_1 + 0x1e0) + 0x18);
  puVar2 = &DAT_18098bc73;
  if (puVar1 != (void *)0x0) {
    puVar2 = puVar1;
  }
  strstr(puVar2,&UNK_180a0d548);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_a8);
}



bool FUN_1801cfcb0(longlong param_1)

{
  void *puVar1;
  longlong lVar2;
  void *puVar3;
  
  puVar1 = *(void **)(*(longlong *)(param_1 + 0x1e0) + 0x18);
  puVar3 = &DAT_18098bc73;
  if (puVar1 != (void *)0x0) {
    puVar3 = puVar1;
  }
  lVar2 = strstr(puVar3,&DAT_180a03870);
  return lVar2 != 0;
}



bool FUN_1801cfcf0(longlong param_1)

{
  void *puVar1;
  longlong lVar2;
  void *puVar3;
  
  puVar1 = *(void **)(*(longlong *)(param_1 + 0x1e0) + 0x18);
  puVar3 = &DAT_18098bc73;
  if (puVar1 != (void *)0x0) {
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
  int8_t auStack_a8 [32];
  uint64_t uStack_88;
  void *puStack_78;
  int8_t *puStack_70;
  int iStack_68;
  int8_t auStack_60 [72];
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
  void *puVar2;
  void *puVar3;
  void *puVar4;
  int8_t auStack_a8 [32];
  uint64_t uStack_88;
  void *puStack_78;
  void *puStack_70;
  int32_t uStack_68;
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
  if (puStack_70 != (void *)0x0) {
    puVar4 = puStack_70;
  }
  puVar2 = *(void **)(lVar1 + 0x18);
  puVar3 = &DAT_18098bc73;
  if (puVar2 != (void *)0x0) {
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
    memcpy(*(uint64_t *)(alStack_28[0] + 0x18),*(uint64_t *)(param_3 + 8),uVar2);
  }
  *(int32_t *)(alStack_28[0] + 0x20) = 0;
  if (*(longlong *)(alStack_28[0] + 0x18) != 0) {
    *(int8_t *)(uVar2 + *(longlong *)(alStack_28[0] + 0x18)) = 0;
  }
  *(int32_t *)(alStack_28[0] + 0x2c) = *(int32_t *)(param_3 + 0x1c);
  return alStack_28[0] + 0x10;
}



uint64_t FUN_1801cff40(longlong param_1,ulonglong *param_2,uint64_t param_3)

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
  void *puVar3;
  int iVar4;
  longlong lVar5;
  uint64_t uVar6;
  longlong lVar7;
  byte *pbVar8;
  uint uVar9;
  ulonglong uVar10;
  void *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  uint64_t in_stack_ffffffffffffff50;
  int32_t uVar16;
  uint64_t in_stack_ffffffffffffff58;
  longlong *plVar17;
  int32_t uVar19;
  uint64_t uVar18;
  void *puStack_88;
  byte *pbStack_80;
  uint uStack_78;
  uint64_t uStack_70;
  void *puStack_68;
  byte *pbStack_60;
  uint uStack_58;
  uint64_t uStack_50;
  void *puStack_48;
  void *puStack_40;
  int32_t uStack_30;
  
  uVar16 = (int32_t)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
  uVar19 = (int32_t)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  puStack_68 = &UNK_180a3c3e0;
  uStack_50 = 0;
  pbStack_60 = (byte *)0x0;
  uStack_58 = 0;
  if (param_2[4] == 0) {
    FUN_180627c50(&puStack_68,&UNK_180a0d608);
    lVar5 = param_2[1];
    plVar17 = param_2;
    lVar7 = FUN_1801d06b0(lVar5,&puStack_48,*param_2 + 0x10,
                          *(int16_t *)((longlong)param_2 + 0x14),(int)param_2[2],lVar5,param_2);
    uVar9 = uStack_58;
    uVar16 = (int32_t)((ulonglong)lVar5 >> 0x20);
    uVar19 = (int32_t)((ulonglong)plVar17 >> 0x20);
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
    uStack_70 = CONCAT44(uStack_50._4_4_,(int32_t)uStack_70);
    if (0 < *(int *)(lVar7 + 0x10)) {
      FUN_1806277c0(&puStack_88,*(int *)(lVar7 + 0x10));
                    // WARNING: Subroutine does not return
      memcpy(pbStack_80 + uStack_78,*(uint64_t *)(lVar7 + 8),
             (longlong)(*(int *)(lVar7 + 0x10) + 1));
    }
    if (pbStack_60 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    pbStack_60 = pbStack_80;
    uStack_50 = CONCAT44(uStack_50._4_4_,(int32_t)uStack_70);
    uStack_78 = 0;
    pbStack_80 = (byte *)0x0;
    uStack_70 = 0;
    puStack_88 = &UNK_18098bcb0;
    puStack_48 = &UNK_180a3c3e0;
    uStack_58 = uVar9;
    if (puStack_40 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    FUN_180627c50(&puStack_68,&UNK_180a0d604);
    lVar5 = FUN_1806279c0(&puStack_48,*param_2 + 0x10);
    uVar6 = FUN_1800ade00(*(int32_t *)((longlong)param_2 + 0xa4));
    FUN_180628040(&puStack_48,&UNK_180a0d5f8,uVar6);
    FUN_180628040(&puStack_48,&UNK_180a0d5fc,*(int16_t *)((longlong)param_2 + 0x14));
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
    uStack_70 = CONCAT44(uStack_50._4_4_,(int32_t)uStack_70);
    if (0 < *(int *)(lVar5 + 0x10)) {
      FUN_1806277c0(&puStack_88,*(int *)(lVar5 + 0x10));
                    // WARNING: Subroutine does not return
      memcpy(pbStack_80 + uStack_78,*(uint64_t *)(lVar5 + 8),
             (longlong)(*(int *)(lVar5 + 0x10) + 1));
    }
    if (pbStack_60 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    pbStack_60 = pbStack_80;
    uStack_50 = CONCAT44(uStack_50._4_4_,(int32_t)uStack_70);
    uStack_78 = 0;
    pbStack_80 = (byte *)0x0;
    uStack_70 = 0;
    puStack_88 = &UNK_18098bcb0;
    puStack_48 = &UNK_180a3c3e0;
    uStack_58 = uVar9;
    if (puStack_40 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  uStack_70 = 0;
  uStack_30 = 0;
  puStack_40 = (void *)0x0;
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
  uVar6 = CONCAT44(uVar16,*(int32_t *)((longlong)param_2 + 0xa4));
  uVar9 = (uint)*(byte *)((longlong)param_2 + 0x14);
  FUN_1802230e0();
  (**(code **)(*param_1 + 8))(param_1,param_2,&puStack_48,&puStack_68,uVar9,uVar6,uVar18,lVar5);
  puVar3 = puStack_40;
  for (puVar11 = puStack_48; puVar11 != puVar3; puVar11 = puVar11 + 0x78) {
    FUN_1800adb30(puVar11);
  }
  if (puStack_48 != (void *)0x0) {
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




