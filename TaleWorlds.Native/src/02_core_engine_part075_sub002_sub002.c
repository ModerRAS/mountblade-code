#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part075_sub002_sub002.c - 1 个函数

// 函数: void FUN_180108190(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180108190(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStackX_8;
  undefined1 auStack_50 [16];
  code *pcStack_40;
  undefined *puStack_38;
  
  pcStack_40 = (code *)&UNK_18010c5b0;
  puStack_38 = &UNK_18010c300;
  *(undefined4 *)(param_1 + 0x198) = 0;
  puVar1 = (undefined1 *)(param_1 + 0x1a0);
  if (puVar1 != auStack_50) {
    if (*(code **)(param_1 + 0x1b0) != (code *)0x0) {
      (**(code **)(param_1 + 0x1b0))(puVar1,0,0,param_4,0xfffffffffffffffe);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(puVar1,auStack_50,1);
    }
    *(code **)(param_1 + 0x1b0) = pcStack_40;
    *(undefined **)(param_1 + 0x1b8) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(auStack_50,0,0);
  }
  (**(code **)(*(longlong *)(param_1 + 0x158) + 0x10))(param_1 + 0x158,&UNK_180a05d50);
  uStackX_8._0_4_ = 0;
  uVar5 = 0;
  if ((*(longlong *)(param_1 + 0x1b0) != 0) &&
     (cVar4 = (**(code **)(param_1 + 0x1b8))(&uStackX_8), uVar5 = (undefined4)uStackX_8,
     cVar4 == '\0')) {
    if (DAT_180c82860 == '\0') {
      puVar7 = &DAT_18098bc73;
      if (*(undefined **)(param_1 + 0x160) != (undefined *)0x0) {
        puVar7 = *(undefined **)(param_1 + 0x160);
      }
      FUN_180626f80(&UNK_18098bc00,puVar7);
    }
    uVar5 = *(undefined4 *)(param_1 + 0x198);
  }
  *(undefined4 *)(param_1 + 0x150) = uVar5;
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8._4_4_ << 0x20);
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    cVar4 = (**(code **)(param_1 + 0x1b8))(&uStackX_8,puVar1);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar7 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x160) != (undefined *)0x0) {
          puVar7 = *(undefined **)(param_1 + 0x160);
        }
        FUN_180626f80(&UNK_18098bc00,puVar7);
      }
      uVar5 = *(undefined4 *)(param_1 + 0x198);
    }
    else {
      uVar5 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 0x154) = uVar5;
  uStackX_8 = (undefined8 *)(param_1 + 0x150);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&UNK_18010c590;
  puStack_38 = &UNK_18010c300;
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  puVar1 = (undefined1 *)(param_1 + 0x2f0);
  if (puVar1 != auStack_50) {
    if (*(code **)(param_1 + 0x300) != (code *)0x0) {
      (**(code **)(param_1 + 0x300))(puVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(puVar1,auStack_50,1);
    }
    *(code **)(param_1 + 0x300) = pcStack_40;
    *(undefined **)(param_1 + 0x308) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(auStack_50,0,0);
  }
  (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x10))(param_1 + 0x2a8,&UNK_180a05d38);
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    cVar4 = (**(code **)(param_1 + 0x308))(&uStackX_8);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar7 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x2b0) != (undefined *)0x0) {
          puVar7 = *(undefined **)(param_1 + 0x2b0);
        }
        FUN_180626f80(&UNK_18098bc00,puVar7);
      }
      uVar5 = *(undefined4 *)(param_1 + 0x2e8);
    }
    else {
      uVar5 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 0x2a0) = uVar5;
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    cVar4 = (**(code **)(param_1 + 0x308))(&uStackX_8,puVar1);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar7 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x2b0) != (undefined *)0x0) {
          puVar7 = *(undefined **)(param_1 + 0x2b0);
        }
        FUN_180626f80(&UNK_18098bc00,puVar7);
      }
      uVar5 = *(undefined4 *)(param_1 + 0x2e8);
    }
    else {
      uVar5 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 0x2a4) = uVar5;
  uStackX_8 = (undefined8 *)(param_1 + 0x2a0);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&UNK_18010c570;
  puStack_38 = &UNK_18010c300;
  *(undefined4 *)(param_1 + 0x208) = 0;
  puVar1 = (undefined1 *)(param_1 + 0x210);
  if (puVar1 != auStack_50) {
    if (*(code **)(param_1 + 0x220) != (code *)0x0) {
      (**(code **)(param_1 + 0x220))(puVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(puVar1,auStack_50,1);
    }
    *(code **)(param_1 + 0x220) = pcStack_40;
    *(undefined **)(param_1 + 0x228) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(auStack_50,0,0);
  }
  (**(code **)(*(longlong *)(param_1 + 0x1c8) + 0x10))(param_1 + 0x1c8,&UNK_180a05d78);
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x220) != 0) {
    cVar4 = (**(code **)(param_1 + 0x228))(&uStackX_8);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar7 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x1d0) != (undefined *)0x0) {
          puVar7 = *(undefined **)(param_1 + 0x1d0);
        }
        FUN_180626f80(&UNK_18098bc00,puVar7);
      }
      uVar5 = *(undefined4 *)(param_1 + 0x208);
    }
    else {
      uVar5 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 0x1c0) = uVar5;
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x220) != 0) {
    cVar4 = (**(code **)(param_1 + 0x228))(&uStackX_8,puVar1);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar7 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x1d0) != (undefined *)0x0) {
          puVar7 = *(undefined **)(param_1 + 0x1d0);
        }
        FUN_180626f80(&UNK_18098bc00,puVar7);
      }
      uVar5 = *(undefined4 *)(param_1 + 0x208);
    }
    else {
      uVar5 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 0x1c4) = uVar5;
  uStackX_8 = (undefined8 *)(param_1 + 0x1c0);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&UNK_18010c550;
  puStack_38 = &UNK_18010c300;
  *(undefined4 *)(param_1 + 0x278) = 0;
  puVar1 = (undefined1 *)(param_1 + 0x280);
  if (puVar1 != auStack_50) {
    if (*(code **)(param_1 + 0x290) != (code *)0x0) {
      (**(code **)(param_1 + 0x290))(puVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(puVar1,auStack_50,1);
    }
    *(code **)(param_1 + 0x290) = pcStack_40;
    *(undefined **)(param_1 + 0x298) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(auStack_50,0,0);
  }
  (**(code **)(*(longlong *)(param_1 + 0x238) + 0x10))(param_1 + 0x238,&UNK_180a05d60);
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x290) != 0) {
    cVar4 = (**(code **)(param_1 + 0x298))(&uStackX_8);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar7 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x240) != (undefined *)0x0) {
          puVar7 = *(undefined **)(param_1 + 0x240);
        }
        FUN_180626f80(&UNK_18098bc00,puVar7);
      }
      uVar5 = *(undefined4 *)(param_1 + 0x278);
    }
    else {
      uVar5 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 0x230) = uVar5;
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x290) != 0) {
    cVar4 = (**(code **)(param_1 + 0x298))(&uStackX_8,puVar1);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar7 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x240) != (undefined *)0x0) {
          puVar7 = *(undefined **)(param_1 + 0x240);
        }
        FUN_180626f80(&UNK_18098bc00,puVar7);
      }
      uVar5 = *(undefined4 *)(param_1 + 0x278);
    }
    else {
      uVar5 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 0x234) = uVar5;
  uStackX_8 = (undefined8 *)(param_1 + 0x230);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&UNK_18010c530;
  puStack_38 = &UNK_18010c300;
  *(undefined4 *)(param_1 + 0x358) = 0;
  puVar1 = (undefined1 *)(param_1 + 0x360);
  if (puVar1 != auStack_50) {
    if (*(code **)(param_1 + 0x370) != (code *)0x0) {
      (**(code **)(param_1 + 0x370))(puVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(puVar1,auStack_50,1);
    }
    *(code **)(param_1 + 0x370) = pcStack_40;
    *(undefined **)(param_1 + 0x378) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(auStack_50,0,0);
  }
  (**(code **)(*(longlong *)(param_1 + 0x318) + 0x10))(param_1 + 0x318,&UNK_180a05da0);
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x370) != 0) {
    cVar4 = (**(code **)(param_1 + 0x378))(&uStackX_8);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar7 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 800) != (undefined *)0x0) {
          puVar7 = *(undefined **)(param_1 + 800);
        }
        FUN_180626f80(&UNK_18098bc00,puVar7);
      }
      uVar5 = *(undefined4 *)(param_1 + 0x358);
    }
    else {
      uVar5 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 0x310) = uVar5;
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x370) != 0) {
    cVar4 = (**(code **)(param_1 + 0x378))(&uStackX_8,puVar1);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar7 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 800) != (undefined *)0x0) {
          puVar7 = *(undefined **)(param_1 + 800);
        }
        FUN_180626f80(&UNK_18098bc00,puVar7);
      }
      uVar5 = *(undefined4 *)(param_1 + 0x358);
    }
    else {
      uVar5 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 0x314) = uVar5;
  uStackX_8 = (undefined8 *)(param_1 + 0x310);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&UNK_18010c510;
  puStack_38 = &UNK_18010c300;
  *(undefined4 *)(param_1 + 0x3c8) = 0;
  puVar1 = (undefined1 *)(param_1 + 0x3d0);
  if (puVar1 != auStack_50) {
    if (*(code **)(param_1 + 0x3e0) != (code *)0x0) {
      (**(code **)(param_1 + 0x3e0))(puVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(puVar1,auStack_50,1);
    }
    *(code **)(param_1 + 0x3e0) = pcStack_40;
    *(undefined **)(param_1 + 1000) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(auStack_50,0,0);
  }
  (**(code **)(*(longlong *)(param_1 + 0x388) + 0x10))(param_1 + 0x388,&UNK_180a05d90);
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    cVar4 = (**(code **)(param_1 + 1000))(&uStackX_8);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar7 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x390) != (undefined *)0x0) {
          puVar7 = *(undefined **)(param_1 + 0x390);
        }
        FUN_180626f80(&UNK_18098bc00,puVar7);
      }
      uVar5 = *(undefined4 *)(param_1 + 0x3c8);
    }
    else {
      uVar5 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 0x380) = uVar5;
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    cVar4 = (**(code **)(param_1 + 1000))(&uStackX_8,puVar1);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar7 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x390) != (undefined *)0x0) {
          puVar7 = *(undefined **)(param_1 + 0x390);
        }
        FUN_180626f80(&UNK_18098bc00,puVar7);
      }
      uVar5 = *(undefined4 *)(param_1 + 0x3c8);
    }
    else {
      uVar5 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 900) = uVar5;
  uStackX_8 = (undefined8 *)(param_1 + 0x380);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&UNK_18010c4f0;
  puStack_38 = &UNK_18010c300;
  *(undefined4 *)(param_1 + 0x438) = 0;
  puVar1 = (undefined1 *)(param_1 + 0x440);
  if (puVar1 != auStack_50) {
    if (*(code **)(param_1 + 0x450) != (code *)0x0) {
      (**(code **)(param_1 + 0x450))(puVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(puVar1,auStack_50,1);
    }
    *(code **)(param_1 + 0x450) = pcStack_40;
    *(undefined **)(param_1 + 0x458) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(auStack_50,0,0);
  }
  (**(code **)(*(longlong *)(param_1 + 0x3f8) + 0x10))(param_1 + 0x3f8,&UNK_180a05dd8);
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x450) != 0) {
    cVar4 = (**(code **)(param_1 + 0x458))(&uStackX_8);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar7 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x400) != (undefined *)0x0) {
          puVar7 = *(undefined **)(param_1 + 0x400);
        }
        FUN_180626f80(&UNK_18098bc00,puVar7);
      }
      uVar5 = *(undefined4 *)(param_1 + 0x438);
    }
    else {
      uVar5 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 0x3f0) = uVar5;
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x450) != 0) {
    cVar4 = (**(code **)(param_1 + 0x458))(&uStackX_8,puVar1);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar7 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x400) != (undefined *)0x0) {
          puVar7 = *(undefined **)(param_1 + 0x400);
        }
        FUN_180626f80(&UNK_18098bc00,puVar7);
      }
      uVar5 = *(undefined4 *)(param_1 + 0x438);
    }
    else {
      uVar5 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 0x3f4) = uVar5;
  uStackX_8 = (undefined8 *)(param_1 + 0x3f0);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&UNK_18010c4d0;
  puStack_38 = &UNK_18010c300;
  *(undefined4 *)(param_1 + 0x4a8) = 0;
  puVar1 = (undefined1 *)(param_1 + 0x4b0);
  if (puVar1 != auStack_50) {
    if (*(code **)(param_1 + 0x4c0) != (code *)0x0) {
      (**(code **)(param_1 + 0x4c0))(puVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(puVar1,auStack_50,1);
    }
    *(code **)(param_1 + 0x4c0) = pcStack_40;
    *(undefined **)(param_1 + 0x4c8) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(auStack_50,0,0);
  }
  (**(code **)(*(longlong *)(param_1 + 0x468) + 0x10))(param_1 + 0x468,&UNK_180a05db8);
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x4c0) != 0) {
    cVar4 = (**(code **)(param_1 + 0x4c8))(&uStackX_8);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar7 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x470) != (undefined *)0x0) {
          puVar7 = *(undefined **)(param_1 + 0x470);
        }
        FUN_180626f80(&UNK_18098bc00,puVar7);
      }
      uVar5 = *(undefined4 *)(param_1 + 0x4a8);
    }
    else {
      uVar5 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 0x460) = uVar5;
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x4c0) != 0) {
    cVar4 = (**(code **)(param_1 + 0x4c8))(&uStackX_8,puVar1);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar7 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x470) != (undefined *)0x0) {
          puVar7 = *(undefined **)(param_1 + 0x470);
        }
        FUN_180626f80(&UNK_18098bc00,puVar7);
      }
      uVar5 = *(undefined4 *)(param_1 + 0x4a8);
    }
    else {
      uVar5 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 0x464) = uVar5;
  uStackX_8 = (undefined8 *)(param_1 + 0x460);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&UNK_18010c4b0;
  puStack_38 = &UNK_18010c300;
  *(undefined4 *)(param_1 + 0x128) = 1;
  puVar1 = (undefined1 *)(param_1 + 0x130);
  if (puVar1 != auStack_50) {
    if (*(code **)(param_1 + 0x140) != (code *)0x0) {
      (**(code **)(param_1 + 0x140))(puVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(puVar1,auStack_50,1);
    }
    *(code **)(param_1 + 0x140) = pcStack_40;
    *(undefined **)(param_1 + 0x148) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(auStack_50,0,0);
  }
  (**(code **)(*(longlong *)(param_1 + 0xe8) + 0x10))(param_1 + 0xe8,&UNK_180a05e08);
  uStackX_8._0_4_ = 1;
  uVar5 = 1;
  if ((*(longlong *)(param_1 + 0x140) != 0) &&
     (cVar4 = (**(code **)(param_1 + 0x148))(&uStackX_8), uVar5 = (undefined4)uStackX_8,
     cVar4 == '\0')) {
    if (DAT_180c82860 == '\0') {
      puVar7 = &DAT_18098bc73;
      if (*(undefined **)(param_1 + 0xf0) != (undefined *)0x0) {
        puVar7 = *(undefined **)(param_1 + 0xf0);
      }
      FUN_180626f80(&UNK_18098bc00,puVar7);
    }
    uVar5 = *(undefined4 *)(param_1 + 0x128);
  }
  *(undefined4 *)(param_1 + 0xe0) = uVar5;
  uStackX_8 = (undefined8 *)CONCAT44(uStackX_8._4_4_,1);
  uVar5 = 1;
  if (*(longlong *)(param_1 + 0x140) != 0) {
    cVar4 = (**(code **)(param_1 + 0x148))(&uStackX_8,puVar1);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar7 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0xf0) != (undefined *)0x0) {
          puVar7 = *(undefined **)(param_1 + 0xf0);
        }
        FUN_180626f80(&UNK_18098bc00,puVar7);
      }
      uVar5 = *(undefined4 *)(param_1 + 0x128);
    }
    else {
      uVar5 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 0xe4) = uVar5;
  uStackX_8 = (undefined8 *)(param_1 + 0xe0);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&UNK_18010c490;
  puStack_38 = &UNK_18010c300;
  *(undefined4 *)(param_1 + 0x518) = 0;
  puVar1 = (undefined1 *)(param_1 + 0x520);
  if (puVar1 != auStack_50) {
    if (*(code **)(param_1 + 0x530) != (code *)0x0) {
      (**(code **)(param_1 + 0x530))(puVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(puVar1,auStack_50,1);
    }
    *(code **)(param_1 + 0x530) = pcStack_40;
    *(undefined **)(param_1 + 0x538) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(auStack_50,0,0);
  }
  (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x10))(param_1 + 0x4d8,&UNK_180a05df0);
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x530) != 0) {
    cVar4 = (**(code **)(param_1 + 0x538))(&uStackX_8);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar7 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x4e0) != (undefined *)0x0) {
          puVar7 = *(undefined **)(param_1 + 0x4e0);
        }
        FUN_180626f80(&UNK_18098bc00,puVar7);
      }
      uVar5 = *(undefined4 *)(param_1 + 0x518);
    }
    else {
      uVar5 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 0x4d0) = uVar5;
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x530) != 0) {
    cVar4 = (**(code **)(param_1 + 0x538))(&uStackX_8,puVar1);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar7 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x4e0) != (undefined *)0x0) {
          puVar7 = *(undefined **)(param_1 + 0x4e0);
        }
        FUN_180626f80(&UNK_18098bc00,puVar7);
      }
      uVar5 = *(undefined4 *)(param_1 + 0x518);
    }
    else {
      uVar5 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 0x4d4) = uVar5;
  uStackX_8 = (undefined8 *)(param_1 + 0x4d0);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&UNK_18010c470;
  puStack_38 = &UNK_18010c300;
  *(undefined4 *)(param_1 + 0x588) = 0;
  puVar1 = (undefined1 *)(param_1 + 0x590);
  if (puVar1 != auStack_50) {
    if (*(code **)(param_1 + 0x5a0) != (code *)0x0) {
      (**(code **)(param_1 + 0x5a0))(puVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(puVar1,auStack_50,1);
    }
    *(code **)(param_1 + 0x5a0) = pcStack_40;
    *(undefined **)(param_1 + 0x5a8) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(auStack_50,0,0);
  }
  (**(code **)(*(longlong *)(param_1 + 0x548) + 0x10))(param_1 + 0x548,&UNK_180a05e48);
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x5a0) != 0) {
    cVar4 = (**(code **)(param_1 + 0x5a8))(&uStackX_8);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar7 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x550) != (undefined *)0x0) {
          puVar7 = *(undefined **)(param_1 + 0x550);
        }
        FUN_180626f80(&UNK_18098bc00,puVar7);
      }
      uVar5 = *(undefined4 *)(param_1 + 0x588);
    }
    else {
      uVar5 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 0x540) = uVar5;
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x5a0) != 0) {
    cVar4 = (**(code **)(param_1 + 0x5a8))(&uStackX_8,puVar1);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar7 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x550) != (undefined *)0x0) {
          puVar7 = *(undefined **)(param_1 + 0x550);
        }
        FUN_180626f80(&UNK_18098bc00,puVar7);
      }
      uVar5 = *(undefined4 *)(param_1 + 0x588);
    }
    else {
      uVar5 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 0x544) = uVar5;
  uStackX_8 = (undefined8 *)(param_1 + 0x540);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&UNK_18010c450;
  puStack_38 = &UNK_18010c300;
  *(undefined4 *)(param_1 + 0x5f8) = 0;
  puVar1 = (undefined1 *)(param_1 + 0x600);
  if (puVar1 != auStack_50) {
    if (*(code **)(param_1 + 0x610) != (code *)0x0) {
      (**(code **)(param_1 + 0x610))(puVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(puVar1,auStack_50,1);
    }
    *(code **)(param_1 + 0x610) = pcStack_40;
    *(undefined **)(param_1 + 0x618) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(auStack_50,0,0);
  }
  (**(code **)(*(longlong *)(param_1 + 0x5b8) + 0x10))(param_1 + 0x5b8,&UNK_180a05e28);
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x610) != 0) {
    cVar4 = (**(code **)(param_1 + 0x618))(&uStackX_8);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar7 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x5c0) != (undefined *)0x0) {
          puVar7 = *(undefined **)(param_1 + 0x5c0);
        }
        FUN_180626f80(&UNK_18098bc00,puVar7);
      }
      uVar5 = *(undefined4 *)(param_1 + 0x5f8);
    }
    else {
      uVar5 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 0x5b0) = uVar5;
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x610) != 0) {
    cVar4 = (**(code **)(param_1 + 0x618))(&uStackX_8,puVar1);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar7 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x5c0) != (undefined *)0x0) {
          puVar7 = *(undefined **)(param_1 + 0x5c0);
        }
        FUN_180626f80(&UNK_18098bc00,puVar7);
      }
      uVar5 = *(undefined4 *)(param_1 + 0x5f8);
    }
    else {
      uVar5 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 0x5b4) = uVar5;
  uStackX_8 = (undefined8 *)(param_1 + 0x5b0);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  (**(code **)(*(longlong *)(param_1 + 0x9b0) + 0x10))(param_1 + 0x9b0,&UNK_180a02940);
  uStackX_8 = (undefined8 *)0xffffffff00000000;
  uVar6 = 0xffffffff00000000;
  if ((*(longlong *)(param_1 + 0xa08) != 0) &&
     (cVar4 = (**(code **)(param_1 + 0xa10))(&uStackX_8), uVar6 = uStackX_8, cVar4 == '\0')) {
    if (DAT_180c82860 == '\0') {
      puVar7 = &DAT_18098bc73;
      if (*(undefined **)(param_1 + 0x9b8) != (undefined *)0x0) {
        puVar7 = *(undefined **)(param_1 + 0x9b8);
      }
      FUN_180626f80(&UNK_18098bc00,puVar7);
    }
    uVar6 = *(undefined8 *)(param_1 + 0x9f0);
  }
  *(undefined8 *)(param_1 + 0x9a0) = uVar6;
  uStackX_8 = (undefined8 *)0xffffffff00000000;
  uVar6 = 0xffffffff00000000;
  if ((*(longlong *)(param_1 + 0xa08) == 0) ||
     (cVar4 = (**(code **)(param_1 + 0xa10))(&uStackX_8), uVar6 = uStackX_8, cVar4 != '\0')) {
    *(undefined8 *)(param_1 + 0x9a8) = uVar6;
  }
  else {
    if (DAT_180c82860 == '\0') {
      puVar7 = &DAT_18098bc73;
      if (*(undefined **)(param_1 + 0x9b8) != (undefined *)0x0) {
        puVar7 = *(undefined **)(param_1 + 0x9b8);
      }
      FUN_180626f80(&UNK_18098bc00,puVar7);
    }
    *(undefined8 *)(param_1 + 0x9a8) = *(undefined8 *)(param_1 + 0x9f0);
  }
  uStackX_8 = (undefined8 *)(param_1 + 0x9a0);
  FUN_18005ea90(param_1 + 0x68,&uStackX_8);
  (**(code **)(*(longlong *)(param_1 + 0xa28) + 0x10))(param_1 + 0xa28,&UNK_180a02928);
  uStackX_8 = (undefined8 *)0x0;
  uVar6 = 0;
  if ((*(longlong *)(param_1 + 0xa80) != 0) &&
     (cVar4 = (**(code **)(param_1 + 0xa88))(&uStackX_8), uVar6 = uStackX_8, cVar4 == '\0')) {
    if (DAT_180c82860 == '\0') {
      puVar7 = &DAT_18098bc73;
      if (*(undefined **)(param_1 + 0xa30) != (undefined *)0x0) {
        puVar7 = *(undefined **)(param_1 + 0xa30);
      }
      FUN_180626f80(&UNK_18098bc00,puVar7);
    }
    uVar6 = *(undefined8 *)(param_1 + 0xa68);
  }
  *(undefined8 *)(param_1 + 0xa18) = uVar6;
  uStackX_8 = (undefined8 *)0x0;
  uVar6 = 0;
  if ((*(longlong *)(param_1 + 0xa80) != 0) &&
     (cVar4 = (**(code **)(param_1 + 0xa88))(&uStackX_8), uVar6 = uStackX_8, cVar4 == '\0')) {
    if (DAT_180c82860 == '\0') {
      puVar7 = &DAT_18098bc73;
      if (*(undefined **)(param_1 + 0xa30) != (undefined *)0x0) {
        puVar7 = *(undefined **)(param_1 + 0xa30);
      }
      FUN_180626f80(&UNK_18098bc00,puVar7);
    }
    uVar6 = *(undefined8 *)(param_1 + 0xa68);
  }
  *(undefined8 *)(param_1 + 0xa20) = uVar6;
  uStackX_8 = (undefined8 *)(param_1 + 0xa18);
  FUN_18005ea90(param_1 + 0x68,&uStackX_8);
  pcStack_40 = (code *)&UNK_18010c430;
  puStack_38 = &UNK_18010c300;
  *(undefined4 *)(param_1 + 0x668) = 0;
  puVar1 = (undefined1 *)(param_1 + 0x670);
  if (puVar1 != auStack_50) {
    if (*(code **)(param_1 + 0x680) != (code *)0x0) {
      (**(code **)(param_1 + 0x680))(puVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(puVar1,auStack_50,1);
    }
    *(code **)(param_1 + 0x680) = pcStack_40;
    *(undefined **)(param_1 + 0x688) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(auStack_50,0,0);
  }
  (**(code **)(*(longlong *)(param_1 + 0x628) + 0x10))(param_1 + 0x628,&UNK_180a05e80);
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x680) != 0) {
    cVar4 = (**(code **)(param_1 + 0x688))(&uStackX_8);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar7 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x630) != (undefined *)0x0) {
          puVar7 = *(undefined **)(param_1 + 0x630);
        }
        FUN_180626f80(&UNK_18098bc00,puVar7);
      }
      uVar5 = *(undefined4 *)(param_1 + 0x668);
    }
    else {
      uVar5 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 0x620) = uVar5;
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x680) != 0) {
    cVar4 = (**(code **)(param_1 + 0x688))(&uStackX_8,puVar1);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar7 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x630) != (undefined *)0x0) {
          puVar7 = *(undefined **)(param_1 + 0x630);
        }
        FUN_180626f80(&UNK_18098bc00,puVar7);
      }
      uVar5 = *(undefined4 *)(param_1 + 0x668);
    }
    else {
      uVar5 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 0x624) = uVar5;
  uStackX_8 = (undefined8 *)(param_1 + 0x620);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&UNK_18010c410;
  puStack_38 = &UNK_18010c300;
  *(undefined4 *)(param_1 + 0x6d8) = 0;
  puVar1 = (undefined1 *)(param_1 + 0x6e0);
  if (puVar1 != auStack_50) {
    if (*(code **)(param_1 + 0x6f0) != (code *)0x0) {
      (**(code **)(param_1 + 0x6f0))(puVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(puVar1,auStack_50,1);
    }
    *(code **)(param_1 + 0x6f0) = pcStack_40;
    *(undefined **)(param_1 + 0x6f8) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(auStack_50,0,0);
  }
  (**(code **)(*(longlong *)(param_1 + 0x698) + 0x10))(param_1 + 0x698,&UNK_180a05e68);
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    cVar4 = (**(code **)(param_1 + 0x6f8))(&uStackX_8);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar7 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x6a0) != (undefined *)0x0) {
          puVar7 = *(undefined **)(param_1 + 0x6a0);
        }
        FUN_180626f80(&UNK_18098bc00,puVar7);
      }
      uVar5 = *(undefined4 *)(param_1 + 0x6d8);
    }
    else {
      uVar5 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 0x690) = uVar5;
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    cVar4 = (**(code **)(param_1 + 0x6f8))(&uStackX_8,puVar1);
    if (cVar4 == '\0') {
      if (DAT_180c82860 == '\0') {
        puVar7 = &DAT_18098bc73;
        if (*(undefined **)(param_1 + 0x6a0) != (undefined *)0x0) {
          puVar7 = *(undefined **)(param_1 + 0x6a0);
        }
        FUN_180626f80(&UNK_18098bc00,puVar7);
      }
      uVar5 = *(undefined4 *)(param_1 + 0x6d8);
    }
    else {
      uVar5 = (undefined4)uStackX_8;
    }
  }
  *(undefined4 *)(param_1 + 0x694) = uVar5;
  uStackX_8 = (undefined8 *)(param_1 + 0x690);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&UNK_18010c3f0;
  puStack_38 = &UNK_18010c300;
  *(undefined4 *)(param_1 + 0x748) = 0;
  puVar1 = (undefined1 *)(param_1 + 0x750);
  if (puVar1 != auStack_50) {
    if (*(code **)(param_1 + 0x760) != (code *)0x0) {
      (**(code **)(param_1 + 0x760))(puVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(puVar1,auStack_50,1);
    }
    *(code **)(param_1 + 0x760) = pcStack_40;
    *(undefined **)(param_1 + 0x768) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(auStack_50,0,0);
  }
  uVar2 = param_1 + 0x700;
  (**(code **)(*(longlong *)(param_1 + 0x708) + 0x10))((longlong *)(param_1 + 0x708),&UNK_180a05eb0)
  ;
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  FUN_180046240(uVar2,&uStackX_8);
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  FUN_1800b0710(uVar2,&uStackX_8);
  uStackX_8 = (undefined8 *)uVar2;
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  uVar2 = param_1 + 0x770;
  (**(code **)(*(longlong *)(param_1 + 0x778) + 0x10))((longlong *)(param_1 + 0x778),&UNK_180a05e98)
  ;
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  FUN_180046240(uVar2,&uStackX_8);
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  FUN_1800b0710(uVar2,&uStackX_8);
  uStackX_8 = (undefined8 *)uVar2;
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  uVar2 = param_1 + 0x7e0;
  (**(code **)(*(longlong *)(param_1 + 0x7e8) + 0x10))((longlong *)(param_1 + 0x7e8),&UNK_180a05ee8)
  ;
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  FUN_180046240(uVar2,&uStackX_8);
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  FUN_1800b0710(uVar2,&uStackX_8);
  uStackX_8 = (undefined8 *)uVar2;
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  uVar2 = param_1 + 0x850;
  (**(code **)(*(longlong *)(param_1 + 0x858) + 0x10))((longlong *)(param_1 + 0x858),&UNK_180a05ec8)
  ;
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  FUN_180046240(uVar2,&uStackX_8);
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  FUN_1800b0710(uVar2,&uStackX_8);
  uStackX_8 = (undefined8 *)uVar2;
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  uVar2 = param_1 + 0x8c0;
  (**(code **)(*(longlong *)(param_1 + 0x8c8) + 0x10))((longlong *)(param_1 + 0x8c8),&UNK_180a05f10)
  ;
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  FUN_180046240(uVar2,&uStackX_8);
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  FUN_1800b0710(uVar2,&uStackX_8);
  uStackX_8 = (undefined8 *)uVar2;
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  lVar3 = param_1 + 0x930;
  (**(code **)(*(longlong *)(param_1 + 0x938) + 0x10))((longlong *)(param_1 + 0x938),&UNK_180a05f00)
  ;
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  FUN_180046240(lVar3,&uStackX_8);
  uStackX_8 = (undefined8 *)((ulonglong)uStackX_8 & 0xffffffff00000000);
  FUN_1800b0710(lVar3,&uStackX_8);
  uStackX_8 = (undefined8 *)lVar3;
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  *(undefined4 *)(param_1 + 0x88) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





