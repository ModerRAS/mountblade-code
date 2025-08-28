#include "TaleWorlds.Native.Split.h"

// 99_part_03_part044.c - 2 个函数

// 函数: void FUN_1801f7d20(longlong param_1,longlong param_2,uint *param_3,ulonglong *param_4,uint param_5)
void FUN_1801f7d20(longlong param_1,longlong param_2,uint *param_3,ulonglong *param_4,uint param_5)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 auStack_b08 [32];
  uint uStack_ae8;
  uint uStack_ae4;
  uint uStack_ae0;
  uint uStack_adc;
  uint uStack_ad8;
  uint uStack_ad4;
  undefined8 uStack_ad0;
  undefined *puStack_ac8;
  undefined1 *puStack_ac0;
  undefined4 uStack_ab8;
  undefined1 auStack_ab0 [72];
  undefined *puStack_a68;
  undefined1 *puStack_a60;
  undefined4 uStack_a58;
  undefined1 auStack_a50 [72];
  undefined *puStack_a08;
  undefined1 *puStack_a00;
  undefined4 uStack_9f8;
  undefined1 auStack_9f0 [72];
  undefined *puStack_9a8;
  undefined1 *puStack_9a0;
  undefined4 uStack_998;
  undefined1 auStack_990 [72];
  undefined *puStack_948;
  undefined1 *puStack_940;
  undefined4 uStack_938;
  undefined1 auStack_930 [72];
  undefined *puStack_8e8;
  undefined1 *puStack_8e0;
  undefined4 uStack_8d8;
  undefined1 auStack_8d0 [72];
  undefined *puStack_888;
  undefined1 *puStack_880;
  undefined4 uStack_878;
  undefined1 auStack_870 [72];
  undefined *puStack_828;
  undefined1 *puStack_820;
  undefined4 uStack_818;
  undefined1 auStack_810 [72];
  undefined *puStack_7c8;
  undefined1 *puStack_7c0;
  undefined4 uStack_7b8;
  undefined1 auStack_7b0 [72];
  undefined *puStack_768;
  undefined1 *puStack_760;
  undefined4 uStack_758;
  undefined1 auStack_750 [72];
  undefined *puStack_708;
  undefined1 *puStack_700;
  undefined4 uStack_6f8;
  undefined1 auStack_6f0 [72];
  undefined *puStack_6a8;
  undefined1 *puStack_6a0;
  undefined4 uStack_698;
  undefined1 auStack_690 [72];
  undefined *puStack_648;
  undefined1 *puStack_640;
  undefined4 uStack_638;
  undefined1 auStack_630 [72];
  undefined *puStack_5e8;
  undefined1 *puStack_5e0;
  undefined4 uStack_5d8;
  undefined1 auStack_5d0 [72];
  undefined *puStack_588;
  undefined1 *puStack_580;
  undefined4 uStack_578;
  undefined1 auStack_570 [72];
  undefined *puStack_528;
  undefined1 *puStack_520;
  undefined4 uStack_518;
  undefined1 auStack_510 [72];
  undefined *puStack_4c8;
  undefined1 *puStack_4c0;
  undefined4 uStack_4b8;
  undefined1 auStack_4b0 [72];
  undefined *puStack_468;
  undefined1 *puStack_460;
  undefined4 uStack_458;
  undefined1 auStack_450 [72];
  undefined *puStack_408;
  undefined1 *puStack_400;
  undefined4 uStack_3f8;
  undefined1 auStack_3f0 [72];
  undefined *puStack_3a8;
  undefined1 *puStack_3a0;
  undefined4 uStack_398;
  undefined1 auStack_390 [72];
  undefined *puStack_348;
  undefined1 *puStack_340;
  undefined4 uStack_338;
  undefined1 auStack_330 [72];
  undefined *puStack_2e8;
  undefined1 *puStack_2e0;
  undefined4 uStack_2d8;
  undefined1 auStack_2d0 [72];
  undefined *puStack_288;
  undefined1 *puStack_280;
  undefined4 uStack_278;
  undefined1 auStack_270 [72];
  undefined *puStack_228;
  undefined1 *puStack_220;
  undefined4 uStack_218;
  undefined1 auStack_210 [72];
  undefined *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined4 uStack_1b8;
  undefined1 auStack_1b0 [72];
  undefined *puStack_168;
  undefined1 *puStack_160;
  undefined4 uStack_158;
  undefined1 auStack_150 [72];
  undefined *puStack_108;
  undefined1 *puStack_100;
  undefined4 uStack_f8;
  undefined1 auStack_f0 [72];
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  undefined4 uStack_98;
  undefined1 auStack_90 [72];
  ulonglong uStack_48;
  
  uStack_ad0 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_b08;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + 0x9a34);
    if (iVar2 == 2) {
      *param_3 = *param_3 | 0x400;
      iVar2 = *(int *)(param_2 + 0x9a34);
    }
    uVar4 = *param_3;
    if (iVar2 == 0) {
      uVar4 = uVar4 | 0x200;
      *param_3 = uVar4;
    }
    if (((((*(byte *)(param_2 + 0x1bd8) & 0x20) != 0) || ((*(byte *)(param_2 + 0x1bd9) & 2) != 0))
        && (*(int *)(_DAT_180c8a9c8 + 0xa10) != 0)) && (*(char *)(param_2 + 0x130) != '\0')) {
      *param_3 = uVar4 | 0x200000;
    }
  }
  if ((param_5 & 1) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puStack_ac8 = &UNK_1809fcc58;
    puStack_ac0 = auStack_ab0;
    auStack_ab0[0] = 0;
    uStack_ab8 = 7;
    strcpy_s(auStack_ab0,0x40,&UNK_180a0d780);
    uVar3 = FUN_180240430(uVar1,&puStack_ac8,0);
    *param_4 = *param_4 | uVar3;
    puStack_ac8 = &UNK_18098bcb0;
  }
  if ((param_5 & 8) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puStack_a68 = &UNK_1809fcc58;
    puStack_a60 = auStack_a50;
    auStack_a50[0] = 0;
    uStack_a58 = 7;
    strcpy_s(auStack_a50,0x40,&UNK_180a0d740);
    uVar3 = FUN_180240430(uVar1,&puStack_a68,0);
    *param_4 = *param_4 | uVar3;
    puStack_a68 = &UNK_18098bcb0;
  }
  if ((param_5 & 4) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puStack_a08 = &UNK_1809fcc58;
    puStack_a00 = auStack_9f0;
    auStack_9f0[0] = 0;
    uStack_9f8 = 0xe;
    strcpy_s(auStack_9f0,0x40,&UNK_180a0d730);
    uVar3 = FUN_180240430(uVar1,&puStack_a08,0);
    *param_4 = *param_4 | uVar3;
    puStack_a08 = &UNK_18098bcb0;
  }
  if ((param_5 >> 0xc & 1) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puStack_9a8 = &UNK_1809fcc58;
    puStack_9a0 = auStack_990;
    auStack_990[0] = 0;
    uStack_998 = 7;
    strcpy_s(auStack_990,0x40,&UNK_180a0cc08);
    uVar3 = FUN_180240430(uVar1,&puStack_9a8,0);
    *param_4 = *param_4 | uVar3;
    puStack_9a8 = &UNK_18098bcb0;
  }
  if ((param_5 & 2) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puStack_948 = &UNK_1809fcc58;
    puStack_940 = auStack_930;
    auStack_930[0] = 0;
    uStack_938 = 0xd;
    strcpy_s(auStack_930,0x40,&UNK_180a0d710);
    uVar3 = FUN_180240430(uVar1,&puStack_948,0);
    *param_4 = *param_4 | uVar3;
    puStack_948 = &UNK_18098bcb0;
  }
  uStack_ae8 = param_5 & 0x8000;
  if (uStack_ae8 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puStack_8e8 = &UNK_1809fcc58;
    puStack_8e0 = auStack_8d0;
    auStack_8d0[0] = 0;
    uStack_8d8 = 0xf;
    strcpy_s(auStack_8d0,0x40,&UNK_180a0d750);
    uVar3 = FUN_180240430(uVar1,&puStack_8e8,0);
    *param_4 = *param_4 | uVar3;
    puStack_8e8 = &UNK_18098bcb0;
  }
  uStack_ae4 = param_5 & 0x40000;
  if (uStack_ae4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puStack_888 = &UNK_1809fcc58;
    puStack_880 = auStack_870;
    auStack_870[0] = 0;
    uStack_878 = 0xb;
    strcpy_s(auStack_870,0x40,&UNK_180a0d800);
    uVar3 = FUN_180240430(uVar1,&puStack_888,0);
    *param_4 = *param_4 | uVar3;
    puStack_888 = &UNK_18098bcb0;
  }
  if ((param_5 & 0x4000) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puStack_828 = &UNK_1809fcc58;
    puStack_820 = auStack_810;
    auStack_810[0] = 0;
    uStack_818 = 0xb;
    strcpy_s(auStack_810,0x40,&UNK_180a0d720);
    uVar3 = FUN_180240430(uVar1,&puStack_828,0);
    *param_4 = *param_4 | uVar3;
    puStack_828 = &UNK_18098bcb0;
  }
  uStack_ad8 = param_5 & 0x20000;
  if (uStack_ad8 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puStack_7c8 = &UNK_1809fcc58;
    puStack_7c0 = auStack_7b0;
    auStack_7b0[0] = 0;
    uStack_7b8 = 0xc;
    strcpy_s(auStack_7b0,0x40,&UNK_180a0d760);
    uVar3 = FUN_180240430(uVar1,&puStack_7c8,0);
    *param_4 = *param_4 | uVar3;
    puStack_7c8 = &UNK_18098bcb0;
  }
  uStack_ad4 = param_5 & 0x80000;
  if (uStack_ad4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puStack_768 = &UNK_1809fcc58;
    puStack_760 = auStack_750;
    auStack_750[0] = 0;
    uStack_758 = 9;
    strcpy_s(auStack_750,0x40,&UNK_180a0d770);
    uVar3 = FUN_180240430(uVar1,&puStack_768,0);
    *param_4 = *param_4 | uVar3;
    puStack_768 = &UNK_18098bcb0;
  }
  uStack_ae0 = param_5 & 0x10000;
  if (uStack_ae0 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puStack_708 = &UNK_1809fcc58;
    puStack_700 = auStack_6f0;
    auStack_6f0[0] = 0;
    uStack_6f8 = 0x18;
    strcpy_s(auStack_6f0,0x40,&UNK_180a0d7a0);
    uVar3 = FUN_180240430(uVar1,&puStack_708,0);
    *param_4 = *param_4 | uVar3;
    puStack_708 = &UNK_18098bcb0;
  }
  uStack_adc = param_5 & 0x10000000;
  if (uStack_adc != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puStack_6a8 = &UNK_1809fcc58;
    puStack_6a0 = auStack_690;
    auStack_690[0] = 0;
    uStack_698 = 0x14;
    strcpy_s(auStack_690,0x40,&UNK_180a0d7c0);
    uVar3 = FUN_180240430(uVar1,&puStack_6a8,0);
    *param_4 = *param_4 | uVar3;
    puStack_6a8 = &UNK_18098bcb0;
  }
  if ((param_5 >> 0x14 & 1) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puStack_648 = &UNK_1809fcc58;
    puStack_640 = auStack_630;
    auStack_630[0] = 0;
    uStack_638 = 8;
    strcpy_s(auStack_630,0x40,&UNK_180a0ec30);
    uVar3 = FUN_180240430(uVar1,&puStack_648,0);
    *param_4 = *param_4 | uVar3;
    puStack_648 = &UNK_18098bcb0;
  }
  if (param_2 != 0) {
    if ((*(longlong *)(param_2 + 0x12498) != 0) && (*(int *)(param_2 + 0x2480) != 0)) {
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      puStack_5e8 = &UNK_1809fcc58;
      puStack_5e0 = auStack_5d0;
      auStack_5d0[0] = 0;
      uStack_5d8 = 0xb;
      strcpy_s(auStack_5d0,0x40,&UNK_180a0d6d8);
      uVar3 = FUN_180240430(uVar1,&puStack_5e8,0);
      *param_4 = *param_4 | uVar3;
      puStack_5e8 = &UNK_18098bcb0;
    }
    if (((*(char *)(param_2 + 0x11cf4) != '\0') && (*(longlong *)(param_2 + 0x11d00) != 0)) &&
       ((*(longlong *)(param_2 + 0x11ec8) != 0 ||
        (*(longlong *)(*(longlong *)(param_2 + 0x11d00) + 0x150) != 0)))) {
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      puStack_588 = &UNK_1809fcc58;
      puStack_580 = auStack_570;
      auStack_570[0] = 0;
      uStack_578 = 0x10;
      strcpy_s(auStack_570,0x40,&UNK_180a0d6f8);
      uVar3 = FUN_180240430(uVar1,&puStack_588,0);
      *param_4 = *param_4 | uVar3;
      puStack_588 = &UNK_18098bcb0;
    }
    if (*(char *)(param_2 + 0x12c09) != '\0') {
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      puStack_528 = &UNK_1809fcc58;
      puStack_520 = auStack_510;
      auStack_510[0] = 0;
      uStack_518 = 0xd;
      strcpy_s(auStack_510,0x40,&UNK_180a0d6c8);
      uVar3 = FUN_180240430(uVar1,&puStack_528,0);
      *param_4 = *param_4 | uVar3;
      puStack_528 = &UNK_18098bcb0;
    }
  }
  if (*(char *)(_DAT_180c86890 + 0x12f8) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puStack_4c8 = &UNK_1809fcc58;
    puStack_4c0 = auStack_4b0;
    auStack_4b0[0] = 0;
    uStack_4b8 = 0x14;
    strcpy_s(auStack_4b0,0x40,&UNK_180a0ebe8);
    uVar3 = FUN_180240430(uVar1,&puStack_4c8,0);
    *param_4 = *param_4 | uVar3;
    puStack_4c8 = &UNK_18098bcb0;
  }
  if ((param_5 & 0x4000) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puStack_468 = &UNK_1809fcc58;
    puStack_460 = auStack_450;
    auStack_450[0] = 0;
    uStack_458 = 0xb;
    strcpy_s(auStack_450,0x40,&UNK_180a0d720);
    uVar3 = FUN_180240430(uVar1,&puStack_468,0);
    *param_4 = *param_4 | uVar3;
    puStack_468 = &UNK_18098bcb0;
  }
  if (uStack_ae8 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puStack_408 = &UNK_1809fcc58;
    puStack_400 = auStack_3f0;
    auStack_3f0[0] = 0;
    uStack_3f8 = 0xf;
    strcpy_s(auStack_3f0,0x40,&UNK_180a0d750);
    uVar3 = FUN_180240430(uVar1,&puStack_408,0);
    *param_4 = *param_4 | uVar3;
    puStack_408 = &UNK_18098bcb0;
  }
  if (uStack_ae4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puStack_3a8 = &UNK_1809fcc58;
    puStack_3a0 = auStack_390;
    auStack_390[0] = 0;
    uStack_398 = 0xb;
    strcpy_s(auStack_390,0x40,&UNK_180a0d800);
    uVar3 = FUN_180240430(uVar1,&puStack_3a8,0);
    *param_4 = *param_4 | uVar3;
    puStack_3a8 = &UNK_18098bcb0;
  }
  if (uStack_ae0 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puStack_348 = &UNK_1809fcc58;
    puStack_340 = auStack_330;
    auStack_330[0] = 0;
    uStack_338 = 0x18;
    strcpy_s(auStack_330,0x40,&UNK_180a0d7a0);
    uVar3 = FUN_180240430(uVar1,&puStack_348,0);
    *param_4 = *param_4 | uVar3;
    puStack_348 = &UNK_18098bcb0;
  }
  if (uStack_adc != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puStack_2e8 = &UNK_1809fcc58;
    puStack_2e0 = auStack_2d0;
    auStack_2d0[0] = 0;
    uStack_2d8 = 0x14;
    strcpy_s(auStack_2d0,0x40,&UNK_180a0d7c0);
    uVar3 = FUN_180240430(uVar1,&puStack_2e8,0);
    *param_4 = *param_4 | uVar3;
    puStack_2e8 = &UNK_18098bcb0;
  }
  if (uStack_ad8 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puStack_288 = &UNK_1809fcc58;
    puStack_280 = auStack_270;
    auStack_270[0] = 0;
    uStack_278 = 0xc;
    strcpy_s(auStack_270,0x40,&UNK_180a0d760);
    uVar3 = FUN_180240430(uVar1,&puStack_288,0);
    *param_4 = *param_4 | uVar3;
    puStack_288 = &UNK_18098bcb0;
  }
  if (uStack_ad4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puStack_228 = &UNK_1809fcc58;
    puStack_220 = auStack_210;
    auStack_210[0] = 0;
    uStack_218 = 9;
    strcpy_s(auStack_210,0x40,&UNK_180a0d770);
    uVar3 = FUN_180240430(uVar1,&puStack_228,0);
    *param_4 = *param_4 | uVar3;
    puStack_228 = &UNK_18098bcb0;
  }
  if ((param_5 & 0x20) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puStack_1c8 = &UNK_1809fcc58;
    puStack_1c0 = auStack_1b0;
    auStack_1b0[0] = 0;
    uStack_1b8 = 7;
    strcpy_s(auStack_1b0,0x40,&UNK_180a0d748);
    uVar3 = FUN_180240430(uVar1,&puStack_1c8,0);
    *param_4 = *param_4 | uVar3;
    puStack_1c8 = &UNK_18098bcb0;
  }
  if ((param_5 >> 0x15 & 1) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puStack_168 = &UNK_1809fcc58;
    puStack_160 = auStack_150;
    auStack_150[0] = 0;
    uStack_158 = 0xc;
    strcpy_s(auStack_150,0x40,&UNK_180a0ec00);
    uVar3 = FUN_180240430(uVar1,&puStack_168,0);
    *param_4 = *param_4 | uVar3;
    puStack_168 = &UNK_18098bcb0;
  }
  if ((param_5 & 0x780) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puStack_108 = &UNK_1809fcc58;
    puStack_100 = auStack_f0;
    auStack_f0[0] = 0;
    uStack_f8 = 10;
    strcpy_s(auStack_f0,0x40,&UNK_180a0d810);
    uVar3 = FUN_180240430(uVar1,&puStack_108,0);
    *param_4 = *param_4 | uVar3;
    puStack_108 = &UNK_18098bcb0;
  }
  if (((param_2 != 0) && (*(longlong *)(param_2 + 0x99b8) != 0)) &&
     (0.0 < *(float *)(*(longlong *)(param_2 + 0x99b8) + 0x40))) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puStack_a8 = &UNK_1809fcc58;
    puStack_a0 = auStack_90;
    auStack_90[0] = 0;
    uStack_98 = 0x10;
    strcpy_s(auStack_90,0x40,&UNK_180a0d7d8);
    uVar3 = FUN_180240430(uVar1,&puStack_a8,0);
    *param_4 = *param_4 | uVar3;
    puStack_a8 = &UNK_18098bcb0;
  }
  *param_3 = *param_3 & *(uint *)(*(longlong *)(param_1 + 0x30) + 0x1610);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_b08);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1801f8e50(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x450,8,3);
  uVar1 = FUN_1801fa180(uVar1);
  FUN_1801f8ea0(uVar1,param_1);
  return uVar1;
}



longlong FUN_1801f8ea0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  undefined *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  FUN_180627be0(param_1 + 0x10,param_2 + 0x10,param_3,param_4,0xfffffffffffffffe);
  plVar9 = *(longlong **)(param_2 + 0x30);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9);
  }
  plVar1 = *(longlong **)(param_1 + 0x30);
  *(longlong **)(param_1 + 0x30) = plVar9;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined1 *)(param_1 + 0x4c) = *(undefined1 *)(param_2 + 0x4c);
  *(undefined1 *)(param_1 + 0x4d) = *(undefined1 *)(param_2 + 0x4d);
  *(undefined1 *)(param_1 + 0x4e) = *(undefined1 *)(param_2 + 0x4e);
  *(undefined1 *)(param_1 + 0x4f) = *(undefined1 *)(param_2 + 0x4f);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  uVar7 = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0x100) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x110) = uVar7;
  uVar4 = *(undefined4 *)(param_2 + 0x11c);
  uVar5 = *(undefined4 *)(param_2 + 0x120);
  uVar6 = *(undefined4 *)(param_2 + 0x124);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x11c) = uVar4;
  *(undefined4 *)(param_1 + 0x120) = uVar5;
  *(undefined4 *)(param_1 + 0x124) = uVar6;
  uVar7 = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x130) = uVar7;
  plVar9 = (longlong *)(param_1 + 0x138);
  lVar11 = param_2 - param_1;
  lVar12 = 0x10;
  do {
    plVar1 = *(longlong **)(lVar11 + (longlong)plVar9);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plVar2 = (longlong *)*plVar9;
    *plVar9 = (longlong)plVar1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    plVar9 = plVar9 + 1;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x1b8);
  *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_2 + 0x1bc);
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0x1c0);
  *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_2 + 0x1c4);
  puVar8 = (undefined4 *)(param_1 + 0x1d8);
  lVar13 = 4;
  lVar12 = 4;
  do {
    *puVar8 = *(undefined4 *)((longlong)puVar8 + lVar11);
    puVar3 = *(undefined **)(lVar11 + -8 + (longlong)puVar8);
    puVar10 = &DAT_18098bc73;
    if (puVar3 != (undefined *)0x0) {
      puVar10 = puVar3;
    }
    strcpy_s(*(undefined8 *)(puVar8 + -2),0x80,puVar10);
    puVar8 = puVar8 + 0x26;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  plVar9 = (longlong *)(param_1 + 0x428);
  do {
    plVar1 = *(longlong **)((longlong)plVar9 + lVar11);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plVar2 = (longlong *)*plVar9;
    *plVar9 = (longlong)plVar1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    plVar9 = plVar9 + 1;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  plVar9 = *(longlong **)(param_2 + 0x448);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9);
  }
  plVar1 = *(longlong **)(param_1 + 0x448);
  *(longlong **)(param_1 + 0x448) = plVar9;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801f9270(longlong param_1,longlong param_2)
void FUN_1801f9270(longlong param_1,longlong param_2)

{
  double *pdVar1;
  char cVar2;
  double dStack_18;
  double dStack_10;
  
  if ((*(char *)(param_1 + 0x38) != '\0') && (*(longlong *)(param_1 + 0x40) != 0)) {
    cVar2 = (**(code **)(**(longlong **)(param_2 + 0x3580) + 0x78))();
    if (cVar2 != '\0') {
      dStack_18 = 1.0;
      dStack_10 = 1.0;
      if ((*(char *)(*(longlong *)(param_1 + 0x40) + 0xd9) != '\0') &&
         (*(int *)(_DAT_180c86920 + 0x540) - 1U < 4)) {
        pdVar1 = (double *)
                 ((longlong)*(int *)(_DAT_180c86920 + 0x540) * 0x10 + -8 +
                 *(longlong *)(param_1 + 0x40));
        dStack_18 = *pdVar1;
        dStack_10 = pdVar1[1];
      }
      goto LAB_1801f92e9;
    }
  }
  dStack_18 = 1.0;
  dStack_10 = 1.0;
LAB_1801f92e9:
  cVar2 = *(char *)(param_1 + 0x4c);
  dStack_18 = (double)*(float *)(param_1 + 8) * dStack_18;
  if (cVar2 == '\0') {
    dStack_18 = (double)round();
    cVar2 = *(char *)(param_1 + 0x4c);
  }
  *(double *)(param_1 + 0x58) = dStack_18;
  dStack_10 = (double)*(float *)(param_1 + 0xc) * dStack_10;
  if (cVar2 == '\0') {
    dStack_10 = (double)round();
  }
  *(double *)(param_1 + 0x60) = dStack_10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




