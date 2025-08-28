#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part076.c - 1 个函数

// 函数: void FUN_180109920(longlong param_1)
void FUN_180109920(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined1 auStack_118 [32];
  undefined4 auStack_f8 [2];
  undefined4 auStack_f0 [2];
  uint uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  undefined4 uStack_c8;
  undefined1 auStack_c0 [32];
  undefined *puStack_a0;
  undefined1 *puStack_98;
  undefined4 uStack_90;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  undefined1 *puStack_60;
  undefined4 uStack_58;
  undefined1 auStack_50 [32];
  ulonglong uStack_30;
  
  uStack_e0 = 0xfffffffffffffffe;
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_118;
  uStack_e8 = 0;
  auStack_f0[0] = 0;
  uVar2 = 0;
  if ((*(longlong *)(param_1 + 0x370) != 0) &&
     (cVar1 = (**(code **)(param_1 + 0x378))(auStack_f0), uVar2 = auStack_f0[0], cVar1 == '\0')) {
    if (DAT_180c82860 == '\0') {
      puVar3 = &DAT_18098bc73;
      if (*(undefined **)(param_1 + 800) != (undefined *)0x0) {
        puVar3 = *(undefined **)(param_1 + 800);
      }
      FUN_180626f80(&UNK_18098bc00,puVar3);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x358);
  }
  *(undefined4 *)(param_1 + 0x310) = uVar2;
  puStack_d8 = &UNK_18098bc80;
  puStack_d0 = auStack_c0;
  auStack_c0[0] = 0;
  uStack_c8 = 0xb;
  strcpy_s(auStack_c0,0x20,&UNK_180a05528);
  cVar1 = FUN_180051f00(_DAT_180c86870,&puStack_d8);
  puStack_d8 = &UNK_18098bcb0;
  if (cVar1 != '\0') {
    auStack_f0[0] = 1;
    uVar2 = 1;
    if ((*(longlong *)(param_1 + 0x680) != 0) &&
       (cVar1 = (**(code **)(param_1 + 0x688))(auStack_f0), uVar2 = auStack_f0[0], cVar1 == '\0')) {
      if (DAT_180c82860 == '\0') {
        puVar3 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x630) != (undefined *)0x0) {
          puVar3 = *(undefined **)(param_1 + 0x630);
        }
        FUN_180626f80(&UNK_18098bc00,puVar3);
      }
      uVar2 = *(undefined4 *)(param_1 + 0x668);
    }
    *(undefined4 *)(param_1 + 0x620) = uVar2;
    auStack_f8[0] = 1;
    uVar2 = 1;
    if ((*(longlong *)(param_1 + 0x450) != 0) &&
       (cVar1 = (**(code **)(param_1 + 0x458))(auStack_f8), uVar2 = auStack_f8[0], cVar1 == '\0')) {
      if (DAT_180c82860 == '\0') {
        puVar3 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x400) != (undefined *)0x0) {
          puVar3 = *(undefined **)(param_1 + 0x400);
        }
        FUN_180626f80(&UNK_18098bc00,puVar3);
      }
      uVar2 = *(undefined4 *)(param_1 + 0x438);
    }
    *(undefined4 *)(param_1 + 0x3f0) = uVar2;
  }
  puStack_68 = &UNK_18098bc80;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 8;
  strcpy_s(auStack_50,0x20,&UNK_1809fd150);
  uVar4 = 1;
  uStack_e8 = 1;
  cVar1 = FUN_180051f00(_DAT_180c86870,&puStack_68);
  if (cVar1 == '\0') {
    puStack_a0 = &UNK_18098bc80;
    puStack_98 = auStack_88;
    auStack_88[0] = 0;
    uStack_90 = 0x14;
    strcpy_s(auStack_88,0x20,&UNK_1809fd220);
    uVar4 = 3;
    uStack_e8 = 3;
    cVar1 = FUN_180051f00(_DAT_180c86870,&puStack_a0);
    if (cVar1 == '\0') goto LAB_180109ba3;
  }
  cVar1 = '\x01';
LAB_180109ba3:
  if ((uVar4 & 2) != 0) {
    uStack_e8 = uVar4 & 0xfffffffd;
    puStack_a0 = &UNK_18098bcb0;
    uVar4 = uStack_e8;
  }
  if ((uVar4 & 1) != 0) {
    uStack_e8 = uVar4 & 0xfffffffe;
    puStack_68 = &UNK_18098bcb0;
  }
  if (cVar1 != '\0') {
    auStack_f8[0] = 0;
    uVar2 = 0;
    if ((*(longlong *)(param_1 + 0x680) != 0) &&
       (cVar1 = (**(code **)(param_1 + 0x688))(auStack_f8), uVar2 = auStack_f8[0], cVar1 == '\0')) {
      if (DAT_180c82860 == '\0') {
        puVar3 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x630) != (undefined *)0x0) {
          puVar3 = *(undefined **)(param_1 + 0x630);
        }
        FUN_180626f80(&UNK_18098bc00,puVar3);
      }
      uVar2 = *(undefined4 *)(param_1 + 0x668);
    }
    *(undefined4 *)(param_1 + 0x620) = uVar2;
    auStack_f8[0] = 1;
    uVar2 = 1;
    if ((*(longlong *)(param_1 + 0x450) == 0) ||
       (cVar1 = (**(code **)(param_1 + 0x458))(auStack_f8), uVar2 = auStack_f8[0], cVar1 != '\0')) {
      *(undefined4 *)(param_1 + 0x3f0) = uVar2;
    }
    else {
      if (DAT_180c82860 == '\0') {
        puVar3 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x400) != (undefined *)0x0) {
          puVar3 = *(undefined **)(param_1 + 0x400);
        }
        FUN_180626f80(&UNK_18098bc00,puVar3);
      }
      *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_1 + 0x438);
    }
  }
  auStack_f8[0] = 0;
  if ((*(longlong *)(param_1 + 0x680) == 0) ||
     (cVar1 = (**(code **)(param_1 + 0x688))(auStack_f8), cVar1 != '\0')) {
    *(undefined4 *)(param_1 + 0x620) = auStack_f8[0];
  }
  else {
    if (DAT_180c82860 == '\0') {
      puVar3 = &DAT_18098bc73;
      if (*(undefined **)(param_1 + 0x630) != (undefined *)0x0) {
        puVar3 = *(undefined **)(param_1 + 0x630);
      }
      FUN_180626f80(&UNK_18098bc00,puVar3);
    }
    *(undefined4 *)(param_1 + 0x620) = *(undefined4 *)(param_1 + 0x668);
  }
  FUN_1800b0380(param_1);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_118);
}





