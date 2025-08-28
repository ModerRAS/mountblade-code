#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part074.c - 1 个函数

// 函数: void FUN_180107770(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180107770(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 uStackX_8;
  undefined1 auStack_60 [16];
  code *pcStack_50;
  undefined *puStack_48;
  
  pcStack_50 = (code *)&UNK_18010c610;
  puStack_48 = &UNK_18010c300;
  *(undefined4 *)(param_1 + 0x128) = 0;
  puVar1 = (undefined1 *)(param_1 + 0x130);
  if (puVar1 != auStack_60) {
    if (*(code **)(param_1 + 0x140) != (code *)0x0) {
      (**(code **)(param_1 + 0x140))(puVar1,0,0,param_4,0xfffffffffffffffe);
    }
    if (pcStack_50 != (code *)0x0) {
      (*pcStack_50)(puVar1,auStack_60,1);
    }
    *(code **)(param_1 + 0x140) = pcStack_50;
    *(undefined **)(param_1 + 0x148) = puStack_48;
  }
  if (pcStack_50 != (code *)0x0) {
    (*pcStack_50)(auStack_60,0,0);
  }
  (**(code **)(*(longlong *)(param_1 + 0xe8) + 0x10))(param_1 + 0xe8,&UNK_180a05c20);
  uStackX_8._0_4_ = 0;
  uVar7 = 0;
  if ((*(longlong *)(param_1 + 0x140) != 0) &&
     (cVar4 = (**(code **)(param_1 + 0x148))(&uStackX_8), uVar7 = (undefined4)uStackX_8,
     cVar4 == '\0')) {
    if (DAT_180c82860 == '\0') {
      puVar6 = &DAT_18098bc73;
      if (*(undefined **)(param_1 + 0xf0) != (undefined *)0x0) {
        puVar6 = *(undefined **)(param_1 + 0xf0);
      }
      FUN_180626f80(&UNK_18098bc00,puVar6);
    }
    uVar7 = *(undefined4 *)(param_1 + 0x128);
  }
  *(undefined4 *)(param_1 + 0xe0) = uVar7;
  uStackX_8 = (undefined4 *)((ulonglong)uStackX_8._4_4_ << 0x20);
  uVar7 = 0;
  if (*(longlong *)(param_1 + 0x140) != 0) {
    cVar4 = (**(code **)(param_1 + 0x148))(&uStackX_8,puVar1);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar6 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0xf0) != (undefined *)0x0) {
          puVar6 = *(undefined **)(param_1 + 0xf0);
        }
        FUN_180626f80(&UNK_18098bc00,puVar6);
      }
      uVar7 = *(undefined4 *)(param_1 + 0x128);
    }
    else {
      uVar7 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 0xe4) = uVar7;
  uStackX_8 = (undefined4 *)(param_1 + 0xe0);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  pcStack_50 = (code *)&UNK_18010c5f0;
  puStack_48 = &UNK_18010c300;
  *(undefined4 *)(param_1 + 0x198) = 1;
  puVar1 = (undefined1 *)(param_1 + 0x1a0);
  if (puVar1 != auStack_60) {
    if (*(code **)(param_1 + 0x1b0) != (code *)0x0) {
      (**(code **)(param_1 + 0x1b0))(puVar1,0,0);
    }
    if (pcStack_50 != (code *)0x0) {
      (*pcStack_50)(puVar1,auStack_60,1);
    }
    *(code **)(param_1 + 0x1b0) = pcStack_50;
    *(undefined **)(param_1 + 0x1b8) = puStack_48;
  }
  if (pcStack_50 != (code *)0x0) {
    (*pcStack_50)(auStack_60,0,0);
  }
  (**(code **)(*(longlong *)(param_1 + 0x158) + 0x10))(param_1 + 0x158,&UNK_180a05c00);
  uStackX_8._0_4_ = 1;
  uVar7 = 1;
  if ((*(longlong *)(param_1 + 0x1b0) != 0) &&
     (cVar4 = (**(code **)(param_1 + 0x1b8))(&uStackX_8), uVar7 = (undefined4)uStackX_8,
     cVar4 == '\0')) {
    if (DAT_180c82860 == '\0') {
      puVar6 = &DAT_18098bc73;
      if (*(undefined **)(param_1 + 0x160) != (undefined *)0x0) {
        puVar6 = *(undefined **)(param_1 + 0x160);
      }
      FUN_180626f80(&UNK_18098bc00,puVar6);
    }
    uVar7 = *(undefined4 *)(param_1 + 0x198);
  }
  *(undefined4 *)(param_1 + 0x150) = uVar7;
  uStackX_8 = (undefined4 *)CONCAT44(uStackX_8._4_4_,1);
  uVar7 = 1;
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    cVar4 = (**(code **)(param_1 + 0x1b8))(&uStackX_8,puVar1);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar6 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x160) != (undefined *)0x0) {
          puVar6 = *(undefined **)(param_1 + 0x160);
        }
        FUN_180626f80(&UNK_18098bc00,puVar6);
      }
      uVar7 = *(undefined4 *)(param_1 + 0x198);
    }
    else {
      uVar7 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 0x154) = uVar7;
  uStackX_8 = (undefined4 *)(param_1 + 0x150);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  (**(code **)(*(longlong *)(param_1 + 0x3f8) + 0x10))(param_1 + 0x3f8,&UNK_180a05c60);
  uStackX_8 = (undefined4 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  uVar7 = 0;
  if (*(longlong *)(param_1 + 0x450) != 0) {
    cVar4 = (**(code **)(param_1 + 0x458))(&uStackX_8);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar6 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x400) != (undefined *)0x0) {
          puVar6 = *(undefined **)(param_1 + 0x400);
        }
        FUN_180626f80(&UNK_18098bc00,puVar6);
      }
      uVar7 = *(undefined4 *)(param_1 + 0x438);
    }
    else {
      uVar7 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 0x3f0) = uVar7;
  uStackX_8 = (undefined4 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  uVar7 = 0;
  if (*(longlong *)(param_1 + 0x450) != 0) {
    cVar4 = (**(code **)(param_1 + 0x458))(&uStackX_8);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar6 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x400) != (undefined *)0x0) {
          puVar6 = *(undefined **)(param_1 + 0x400);
        }
        FUN_180626f80(&UNK_18098bc00,puVar6);
      }
      uVar7 = *(undefined4 *)(param_1 + 0x438);
    }
    else {
      uVar7 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 0x3f4) = uVar7;
  uStackX_8 = (undefined4 *)(param_1 + 0x3f0);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  pcStack_50 = (code *)&UNK_18010c5d0;
  puStack_48 = &UNK_18010c300;
  *(undefined4 *)(param_1 + 0x208) = 1;
  puVar1 = (undefined1 *)(param_1 + 0x210);
  if (puVar1 != auStack_60) {
    if (*(code **)(param_1 + 0x220) != (code *)0x0) {
      (**(code **)(param_1 + 0x220))(puVar1,0,0);
    }
    if (pcStack_50 != (code *)0x0) {
      (*pcStack_50)(puVar1,auStack_60,1);
    }
    *(code **)(param_1 + 0x220) = pcStack_50;
    *(undefined **)(param_1 + 0x228) = puStack_48;
  }
  if (pcStack_50 != (code *)0x0) {
    (*pcStack_50)(auStack_60,0,0);
  }
  (**(code **)(*(longlong *)(param_1 + 0x1c8) + 0x10))(param_1 + 0x1c8,&UNK_180a05c40);
  uStackX_8._0_4_ = 1;
  uVar7 = 1;
  if ((*(longlong *)(param_1 + 0x220) != 0) &&
     (cVar4 = (**(code **)(param_1 + 0x228))(&uStackX_8), uVar7 = (undefined4)uStackX_8,
     cVar4 == '\0')) {
    if (DAT_180c82860 == '\0') {
      puVar6 = &DAT_18098bc73;
      if (*(undefined **)(param_1 + 0x1d0) != (undefined *)0x0) {
        puVar6 = *(undefined **)(param_1 + 0x1d0);
      }
      FUN_180626f80(&UNK_18098bc00,puVar6);
    }
    uVar7 = *(undefined4 *)(param_1 + 0x208);
  }
  *(undefined4 *)(param_1 + 0x1c0) = uVar7;
  uStackX_8 = (undefined4 *)CONCAT44(uStackX_8._4_4_,1);
  uVar7 = 1;
  if (*(longlong *)(param_1 + 0x220) != 0) {
    cVar4 = (**(code **)(param_1 + 0x228))(&uStackX_8,puVar1);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar6 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x1d0) != (undefined *)0x0) {
          puVar6 = *(undefined **)(param_1 + 0x1d0);
        }
        FUN_180626f80(&UNK_18098bc00,puVar6);
      }
      uVar7 = *(undefined4 *)(param_1 + 0x208);
    }
    else {
      uVar7 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 0x1c4) = uVar7;
  uStackX_8 = (undefined4 *)(param_1 + 0x1c0);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  (**(code **)(*(longlong *)(param_1 + 0x318) + 0x10))(param_1 + 0x318,&UNK_180a05ca8);
  puVar2 = (undefined4 *)(param_1 + 0x310);
  uStackX_8._0_4_ = 0x3f800000;
  uVar7 = 0x3f800000;
  if ((*(longlong *)(param_1 + 0x370) == 0) ||
     (cVar4 = (**(code **)(param_1 + 0x378))(&uStackX_8), uVar7 = (undefined4)uStackX_8,
     cVar4 != '\0')) {
    *puVar2 = uVar7;
  }
  else {
    if (DAT_180c82860 == '\0') {
      puVar6 = &DAT_18098bc73;
      if (*(undefined **)(param_1 + 800) != (undefined *)0x0) {
        puVar6 = *(undefined **)(param_1 + 800);
      }
      FUN_180626f80(&UNK_18098bc00,puVar6);
    }
    *puVar2 = *(undefined4 *)(param_1 + 0x358);
  }
  uStackX_8 = (undefined4 *)CONCAT44(uStackX_8._4_4_,0x3f800000);
  uVar7 = 0x3f800000;
  if (*(longlong *)(param_1 + 0x370) == 0) {
LAB_180107d75:
    *(undefined4 *)(param_1 + 0x314) = uVar7;
  }
  else {
    cVar4 = (**(code **)(param_1 + 0x378))(&uStackX_8);
    if (cVar4 != '\0') {
      uVar7 = (undefined4)uStackX_8;
      goto LAB_180107d75;
    }
    if (DAT_180c82860 == '\0') {
      puVar6 = &DAT_18098bc73;
      if (*(undefined **)(param_1 + 800) != (undefined *)0x0) {
        puVar6 = *(undefined **)(param_1 + 800);
      }
      FUN_180626f80(&UNK_18098bc00,puVar6);
    }
    *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_1 + 0x358);
  }
  uStackX_8 = puVar2;
  FUN_18005ea90(param_1 + 0x28,&uStackX_8);
  (**(code **)(*(longlong *)(param_1 + 0x238) + 0x10))(param_1 + 0x238,&UNK_180a05c88);
  uStackX_8 = (undefined4 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  uVar7 = 0;
  if (*(longlong *)(param_1 + 0x290) != 0) {
    cVar4 = (**(code **)(param_1 + 0x298))(&uStackX_8);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar6 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x240) != (undefined *)0x0) {
          puVar6 = *(undefined **)(param_1 + 0x240);
        }
        FUN_180626f80(&UNK_18098bc00,puVar6);
      }
      uVar7 = *(undefined4 *)(param_1 + 0x278);
    }
    else {
      uVar7 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 0x230) = uVar7;
  uStackX_8 = (undefined4 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  uVar7 = 0;
  if (*(longlong *)(param_1 + 0x290) != 0) {
    cVar4 = (**(code **)(param_1 + 0x298))(&uStackX_8);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar6 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x240) != (undefined *)0x0) {
          puVar6 = *(undefined **)(param_1 + 0x240);
        }
        FUN_180626f80(&UNK_18098bc00,puVar6);
      }
      uVar7 = *(undefined4 *)(param_1 + 0x278);
    }
    else {
      uVar7 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 0x234) = uVar7;
  uStackX_8 = (undefined4 *)(param_1 + 0x230);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x10))(param_1 + 0x2a8,&UNK_180a05ce0);
  uStackX_8._0_4_ = 1;
  uVar7 = 1;
  if ((*(longlong *)(param_1 + 0x300) != 0) &&
     (cVar4 = (**(code **)(param_1 + 0x308))(&uStackX_8), uVar7 = (undefined4)uStackX_8,
     cVar4 == '\0')) {
    if (DAT_180c82860 == '\0') {
      puVar6 = &DAT_18098bc73;
      if (*(undefined **)(param_1 + 0x2b0) != (undefined *)0x0) {
        puVar6 = *(undefined **)(param_1 + 0x2b0);
      }
      FUN_180626f80(&UNK_18098bc00,puVar6);
    }
    uVar7 = *(undefined4 *)(param_1 + 0x2e8);
  }
  *(undefined4 *)(param_1 + 0x2a0) = uVar7;
  uStackX_8 = (undefined4 *)CONCAT44(uStackX_8._4_4_,1);
  uVar7 = 1;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    cVar4 = (**(code **)(param_1 + 0x308))(&uStackX_8);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar6 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x2b0) != (undefined *)0x0) {
          puVar6 = *(undefined **)(param_1 + 0x2b0);
        }
        FUN_180626f80(&UNK_18098bc00,puVar6);
      }
      uVar7 = *(undefined4 *)(param_1 + 0x2e8);
    }
    else {
      uVar7 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 0x2a4) = uVar7;
  uStackX_8 = (undefined4 *)(param_1 + 0x2a0);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  (**(code **)(*(longlong *)(param_1 + 0x528) + 0x10))(param_1 + 0x528,&UNK_180a05cc0);
  uStackX_8 = (undefined4 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  uVar7 = 0;
  if (*(longlong *)(param_1 + 0x580) != 0) {
    cVar4 = (**(code **)(param_1 + 0x588))(&uStackX_8);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar6 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x530) != (undefined *)0x0) {
          puVar6 = *(undefined **)(param_1 + 0x530);
        }
        FUN_180626f80(&UNK_18098bc00,puVar6);
      }
      uVar7 = *(undefined4 *)(param_1 + 0x568);
    }
    else {
      uVar7 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 0x520) = uVar7;
  uStackX_8 = (undefined4 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  uVar7 = 0;
  if (*(longlong *)(param_1 + 0x580) == 0) {
LAB_180107fff:
    *(undefined4 *)(param_1 + 0x524) = uVar7;
  }
  else {
    cVar4 = (**(code **)(param_1 + 0x588))(&uStackX_8);
    if (cVar4 != '\0') {
      uVar7 = (undefined4)uStackX_8;
      goto LAB_180107fff;
    }
    if (DAT_180c82860 == '\0') {
      puVar6 = &DAT_18098bc73;
      if (*(undefined **)(param_1 + 0x530) != (undefined *)0x0) {
        puVar6 = *(undefined **)(param_1 + 0x530);
      }
      FUN_180626f80(&UNK_18098bc00,puVar6);
    }
    *(undefined4 *)(param_1 + 0x524) = *(undefined4 *)(param_1 + 0x568);
  }
  uStackX_8 = (undefined4 *)(param_1 + 0x520);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  (**(code **)(*(longlong *)(param_1 + 0x388) + 0x10))(param_1 + 0x388,&UNK_180a05d18);
  puVar2 = (undefined4 *)(param_1 + 0x380);
  uStackX_8._0_4_ = 0x40000000;
  uVar7 = 0x40000000;
  if ((*(longlong *)(param_1 + 0x3e0) == 0) ||
     (cVar4 = (**(code **)(param_1 + 1000))(&uStackX_8), uVar7 = (undefined4)uStackX_8,
     cVar4 != '\0')) {
    *puVar2 = uVar7;
  }
  else {
    if (DAT_180c82860 == '\0') {
      puVar6 = &DAT_18098bc73;
      if (*(undefined **)(param_1 + 0x390) != (undefined *)0x0) {
        puVar6 = *(undefined **)(param_1 + 0x390);
      }
      FUN_180626f80(&UNK_18098bc00,puVar6);
    }
    *puVar2 = *(undefined4 *)(param_1 + 0x3c8);
  }
  uStackX_8 = (undefined4 *)CONCAT44(uStackX_8._4_4_,0x40000000);
  uVar7 = 0x40000000;
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    cVar4 = (**(code **)(param_1 + 1000))(&uStackX_8);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar6 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x390) != (undefined *)0x0) {
          puVar6 = *(undefined **)(param_1 + 0x390);
        }
        FUN_180626f80(&UNK_18098bc00,puVar6);
      }
      *(undefined4 *)(param_1 + 900) = *(undefined4 *)(param_1 + 0x3c8);
      goto LAB_1801080f5;
    }
    uVar7 = (undefined4)uStackX_8;
  }
  *(undefined4 *)(param_1 + 900) = uVar7;
LAB_1801080f5:
  uStackX_8 = puVar2;
  FUN_18005ea90(param_1 + 0x28,&uStackX_8);
  lVar3 = param_1 + 0x460;
  (**(code **)(*(longlong *)(param_1 + 0x4a0) + 0x10))((longlong *)(param_1 + 0x4a0),&UNK_180a05d08)
  ;
  uVar5 = FUN_180628ca0();
  FUN_18005c8a0(lVar3,uVar5);
  uVar5 = FUN_180628ca0();
  FUN_1800b0680(lVar3,uVar5);
  uStackX_8 = (undefined4 *)lVar3;
  FUN_18005ea90(param_1 + 0x48,&uStackX_8);
  *(undefined4 *)(param_1 + 0x88) = 1;
  return;
}





