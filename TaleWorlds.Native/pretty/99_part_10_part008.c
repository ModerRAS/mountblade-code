#include "TaleWorlds.Native.Split.h"

// 99_part_10_part008.c - 1 个函数

// 函数: void FUN_1806a7860(longlong *param_1,longlong *param_2)
void FUN_1806a7860(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  undefined8 uStackX_10;
  uint auStackX_18 [2];
  uint auStackX_20 [2];
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined1 auStack_5f0 [8];
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined *puStack_5c8;
  undefined *puStack_5c0;
  undefined *puStack_5b8;
  undefined4 uStack_5b0;
  undefined *puStack_5a8;
  undefined *puStack_5a0;
  undefined4 uStack_598;
  undefined *puStack_590;
  undefined *puStack_588;
  undefined4 uStack_580;
  uint auStack_57c [3];
  undefined *puStack_570;
  undefined *puStack_568;
  undefined *puStack_560;
  undefined4 uStack_558;
  undefined *puStack_550;
  undefined *puStack_548;
  undefined4 uStack_540;
  undefined *puStack_538;
  undefined *puStack_530;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined8 uStack_520;
  undefined *puStack_518;
  undefined *puStack_510;
  undefined *puStack_508;
  undefined4 uStack_500;
  undefined *puStack_4f8;
  undefined *puStack_4f0;
  undefined4 uStack_4e8;
  undefined *puStack_4e0;
  undefined *puStack_4d8;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined8 uStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined *puStack_4b0;
  undefined4 uStack_4a8;
  undefined *puStack_4a0;
  undefined *puStack_498;
  undefined4 uStack_490;
  undefined *puStack_488;
  undefined *puStack_480;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined8 uStack_470;
  undefined *puStack_468;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined4 uStack_450;
  undefined *puStack_448;
  undefined *puStack_440;
  undefined4 uStack_438;
  undefined *puStack_430;
  undefined *puStack_428;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined8 uStack_418;
  undefined *puStack_410;
  undefined *puStack_408;
  undefined *puStack_400;
  undefined4 uStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined4 uStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined8 uStack_3c0;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined4 uStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined4 uStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined8 uStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined4 uStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined4 uStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined8 uStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined4 uStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined4 uStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 uStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined4 uStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined4 uStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined4 uStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined4 uStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined4 uStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined4 uStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined4 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined4 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined4 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined4 uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined4 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined4 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined4 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined4 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  
  uStackX_10._0_4_ = 4;
  plStackX_8 = param_1;
  (**(code **)(*param_2 + 8))(param_2,auStack_5f0,&uStackX_10);
  uStackX_10._0_4_ = 4;
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x1d,&uStackX_10);
  FUN_1806a85d0(param_1[0x13],param_2);
  uStackX_10 = CONCAT44(uStackX_10._4_4_,4);
  uStack_618 = param_1;
  uStack_610 = param_2;
  (**(code **)(*param_2 + 8))(param_2,auStackX_18,&uStackX_10);
  puVar5 = (undefined8 *)0x0;
  uStackX_10 = 0;
  FUN_1806b0eb0(param_1 + 0x11,auStackX_18[0],&uStackX_10);
  puVar4 = puVar5;
  plVar9 = param_1;
  if ((int)param_1[0x12] != 0) {
    do {
      lVar1 = param_1[0x11];
      uStackX_10 = CONCAT44(uStackX_10._4_4_,4);
      (**(code **)(*param_2 + 8))(param_2,auStackX_20,&uStackX_10);
      if (auStackX_20[0] == 0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        puVar2 = (undefined8 *)
                 (**(code **)(*_DAT_180be0050 + 8))
                           (_DAT_180be0050,0x68,&UNK_18094b120,&UNK_18094b020,0x568);
        if (puVar2 == (undefined8 *)0x0) {
          FUN_1806a8c20(0,&uStack_618);
          puVar2 = puVar5;
        }
        else {
          puVar2[1] = &DAT_18098bc73;
          puVar2[2] = &DAT_18098bc73;
          *(undefined4 *)(puVar2 + 3) = 0xffffffff;
          puVar2[4] = &DAT_18098bc73;
          puVar2[5] = &DAT_18098bc73;
          *(undefined4 *)(puVar2 + 6) = 0xffffffff;
          puVar2[7] = &DAT_18098bc73;
          puVar2[8] = &DAT_18098bc73;
          *(undefined4 *)(puVar2 + 9) = 0;
          *(undefined4 *)((longlong)puVar2 + 0x4c) = 0xffffffff;
          puVar2[10] = 0;
          *puVar2 = &UNK_18094aee8;
          puVar2[0xb] = 0;
          puVar2[0xc] = 0;
          FUN_1806a8c20(puVar2,&uStack_618);
        }
      }
      uVar6 = (int)puVar4 + 1;
      *(undefined8 **)(lVar1 + (longlong)puVar4 * 8) = puVar2;
      puVar4 = (undefined8 *)(ulonglong)uVar6;
      plVar9 = plStackX_8;
    } while (uVar6 < *(uint *)(param_1 + 0x12));
  }
  uStackX_10 = CONCAT44(uStackX_10._4_4_,4);
  (**(code **)(*param_2 + 8))(param_2,&uStack_5f8,&uStackX_10);
  uStackX_10 = 0;
  FUN_1806b0dd0(plVar9 + 0xf,uStack_5f8,&uStackX_10);
  puVar4 = puVar5;
  plVar10 = plVar9;
  if ((int)plVar9[0x10] != 0) {
    do {
      lVar1 = plVar9[0xf];
      uStackX_10 = CONCAT44(uStackX_10._4_4_,4);
      (**(code **)(*param_2 + 8))(param_2,auStackX_20,&uStackX_10);
      if (auStackX_20[0] == 0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        puVar2 = (undefined8 *)
                 (**(code **)(*_DAT_180be0050 + 8))
                           (_DAT_180be0050,0xa0,&UNK_18094b120,&UNK_18094b020,0x568);
        if (puVar2 == (undefined8 *)0x0) {
          FUN_1806a89c0(0,&uStack_618);
          puVar2 = puVar5;
        }
        else {
          puVar2[1] = &DAT_18098bc73;
          puVar2[2] = &DAT_18098bc73;
          puVar2[3] = 0xffffffffffffffff;
          puVar2[4] = 0xffffffffffffffff;
          puVar2[5] = 0;
          *(undefined4 *)(puVar2 + 6) = 0;
          puVar2[7] = 0;
          puVar2[8] = 0;
          puVar2[9] = 0;
          *(undefined4 *)(puVar2 + 10) = 0;
          puVar2[0xb] = 0;
          puVar2[0xc] = 0;
          *(undefined2 *)(puVar2 + 0xd) = 0;
          *puVar2 = &UNK_18094aef0;
          puVar2[0xe] = 0;
          puVar2[0xf] = 0;
          puVar2[0x10] = 0;
          puVar2[0x11] = 0;
          puVar2[0x12] = 0;
          puVar2[0x13] = 0;
          FUN_1806a89c0(puVar2,&uStack_618);
        }
      }
      uVar6 = (int)puVar4 + 1;
      *(undefined8 **)(lVar1 + (longlong)puVar4 * 8) = puVar2;
      puVar4 = (undefined8 *)(ulonglong)uVar6;
      plVar10 = plStackX_8;
    } while (uVar6 < *(uint *)(plVar9 + 0x10));
  }
  uStackX_10 = CONCAT44(uStackX_10._4_4_,4);
  plVar9 = plVar10 + 0x1b;
  (**(code **)(*param_2 + 8))(param_2,&uStack_5f4,&uStackX_10);
  uStackX_10 = 0;
  FUN_1806b0f90(plVar9,uStack_5f4,&uStackX_10);
  puVar4 = puVar5;
  plVar11 = plVar10;
  if ((int)plVar10[0x1c] != 0) {
    do {
      lVar1 = *plVar9;
      uStackX_10 = CONCAT44(uStackX_10._4_4_,4);
      (**(code **)(*param_2 + 8))(param_2,auStackX_20,&uStackX_10);
      if (auStackX_20[0] == 0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        puVar2 = (undefined8 *)
                 (**(code **)(*_DAT_180be0050 + 8))
                           (_DAT_180be0050,0x90,&UNK_18094b120,&UNK_18094b020,0x568);
        if (puVar2 == (undefined8 *)0x0) {
          FUN_1806a8e00(0,&uStack_618);
          puVar2 = puVar5;
        }
        else {
          puVar2[1] = &DAT_18098bc73;
          puVar2[2] = &DAT_18098bc73;
          *(undefined4 *)(puVar2 + 3) = 0xffffffff;
          puVar2[4] = &DAT_18098bc73;
          puVar2[5] = &DAT_18098bc73;
          *(undefined4 *)(puVar2 + 6) = 0xffffffff;
          puVar2[7] = 0;
          puVar2[8] = 0;
          *(undefined4 *)(puVar2 + 9) = 0;
          puVar2[10] = 0;
          puVar2[0xb] = 0;
          *puVar2 = &UNK_18094af30;
          puVar2[0xc] = 0;
          puVar2[0xd] = 0;
          puVar2[0xe] = 0;
          puVar2[0xf] = 0;
          puVar2[0x10] = 0;
          puVar2[0x11] = 0;
          FUN_1806a8e00(puVar2,&uStack_618);
        }
      }
      uVar6 = (int)puVar4 + 1;
      *(undefined8 **)(lVar1 + (longlong)puVar4 * 8) = puVar2;
      puVar4 = (undefined8 *)(ulonglong)uVar6;
      plVar11 = plStackX_8;
    } while (uVar6 < *(uint *)(plVar10 + 0x1c));
  }
  if ((*(int *)((longlong)plVar11 + 0x2c) != 0) && (*(int *)((longlong)plVar11 + 0x3c) != 0)) {
                    // WARNING: Subroutine does not return
    memset(plVar11[4],0xffffffff,*(int *)((longlong)plVar11 + 0x2c) * 4);
  }
  if ((*(int *)((longlong)plVar11 + 100) != 0) && (*(int *)((longlong)plVar11 + 0x74) != 0)) {
                    // WARNING: Subroutine does not return
    memset(plVar11[0xb],0xffffffff,*(int *)((longlong)plVar11 + 100) * 4);
  }
  if ((*(int *)((longlong)plVar11 + 0xc4) != 0) && (*(int *)((longlong)plVar11 + 0xd4) != 0)) {
                    // WARNING: Subroutine does not return
    memset(plVar11[0x17],0xffffffff,*(int *)((longlong)plVar11 + 0xc4) * 4);
  }
  auStackX_18[0] = 0;
  puVar4 = puVar5;
  if ((int)plVar11[0x10] != 0) {
    do {
      lVar1 = *(longlong *)(plVar11[0xf] + (longlong)puVar4 * 8);
      if (lVar1 != 0) {
        uStack_618._0_4_ = *(undefined4 *)(lVar1 + 8);
        uStack_618._4_4_ = *(undefined4 *)(lVar1 + 0xc);
        uStack_610._0_4_ = *(undefined4 *)(lVar1 + 0x10);
        uStack_610._4_4_ = *(undefined4 *)(lVar1 + 0x14);
        puVar3 = (undefined4 *)FUN_1806ab040(plVar11 + 1,&uStack_618,&plStackX_8);
        if ((char)plStackX_8 == '\0') {
          *puVar3 = (undefined4)uStack_618;
          puVar3[1] = uStack_618._4_4_;
          puVar3[2] = (undefined4)uStack_610;
          puVar3[3] = uStack_610._4_4_;
          *(longlong *)(puVar3 + 4) = lVar1;
        }
        auStackX_20[0] = (**(code **)(*plVar11 + 0x80))(plVar11,*(undefined4 *)(lVar1 + 0x18));
        puStack_5c8 = &UNK_18094a9a8;
        puStack_5c0 = &DAT_18098bc73;
        puStack_5b8 = &DAT_18098bc73;
        puStack_5a8 = &DAT_18098bc73;
        puStack_5a0 = &DAT_18098bc73;
        puStack_590 = &DAT_18098bc73;
        puStack_588 = &DAT_18098bc73;
        puStack_568 = &DAT_18098bc73;
        puStack_560 = &DAT_18098bc73;
        puStack_550 = &DAT_18098bc73;
        puStack_548 = &DAT_18098bc73;
        puStack_538 = &DAT_18098bc73;
        puStack_530 = &DAT_18098bc73;
        puStack_510 = &DAT_18098bc73;
        puStack_508 = &DAT_18098bc73;
        puStack_4f8 = &DAT_18098bc73;
        puStack_4f0 = &DAT_18098bc73;
        puStack_4e0 = &DAT_18098bc73;
        puStack_4d8 = &DAT_18098bc73;
        puStack_4b8 = &DAT_18098bc73;
        puStack_4b0 = &DAT_18098bc73;
        puStack_4a0 = &DAT_18098bc73;
        puStack_498 = &DAT_18098bc73;
        puStack_488 = &DAT_18098bc73;
        puStack_480 = &DAT_18098bc73;
        puStack_460 = &DAT_18098bc73;
        puStack_458 = &DAT_18098bc73;
        puStack_448 = &DAT_18098bc73;
        puStack_440 = &DAT_18098bc73;
        puStack_430 = &DAT_18098bc73;
        puStack_428 = &DAT_18098bc73;
        puStack_408 = &DAT_18098bc73;
        puStack_400 = &DAT_18098bc73;
        puStack_3f0 = &DAT_18098bc73;
        puStack_3e8 = &DAT_18098bc73;
        puStack_3d8 = &DAT_18098bc73;
        puStack_3d0 = &DAT_18098bc73;
        puStack_3b0 = &DAT_18098bc73;
        puStack_3a8 = &DAT_18098bc73;
        uStack_5b0 = 0xffffffff;
        uStack_598 = 0xffffffff;
        uStack_580 = 0;
        auStack_57c[0] = 0xffffffff;
        auStack_57c[1] = 0;
        auStack_57c[2] = 0;
        puStack_570 = &UNK_18094a9a8;
        uStack_558 = 0xffffffff;
        uStack_540 = 0xffffffff;
        uStack_528 = 0;
        uStack_524 = 0xffffffff;
        uStack_520 = 0;
        puStack_518 = &UNK_18094a9a8;
        uStack_500 = 0xffffffff;
        uStack_4e8 = 0xffffffff;
        uStack_4d0 = 0;
        uStack_4cc = 0xffffffff;
        uStack_4c8 = 0;
        puStack_4c0 = &UNK_18094a9a8;
        uStack_4a8 = 0xffffffff;
        uStack_490 = 0xffffffff;
        uStack_478 = 0;
        uStack_474 = 0xffffffff;
        uStack_470 = 0;
        puStack_468 = &UNK_18094a9a8;
        uStack_450 = 0xffffffff;
        uStack_438 = 0xffffffff;
        uStack_420 = 0;
        uStack_41c = 0xffffffff;
        uStack_418 = 0;
        puStack_410 = &UNK_18094a9a8;
        uStack_3f8 = 0xffffffff;
        uStack_3e0 = 0xffffffff;
        uStack_3c8 = 0;
        uStack_3c4 = 0xffffffff;
        uStack_3c0 = 0;
        puStack_3b8 = &UNK_18094a9a8;
        uStack_3a0 = 0xffffffff;
        puStack_398 = &DAT_18098bc73;
        puStack_390 = &DAT_18098bc73;
        uStack_388 = 0xffffffff;
        puStack_380 = &DAT_18098bc73;
        puStack_378 = &DAT_18098bc73;
        uStack_370 = 0;
        uStack_36c = 0xffffffff;
        uStack_368 = 0;
        puStack_360 = &UNK_18094a9a8;
        puStack_358 = &DAT_18098bc73;
        puStack_350 = &DAT_18098bc73;
        uStack_348 = 0xffffffff;
        puStack_340 = &DAT_18098bc73;
        puStack_338 = &DAT_18098bc73;
        uStack_330 = 0xffffffff;
        puStack_328 = &DAT_18098bc73;
        puStack_320 = &DAT_18098bc73;
        uStack_318 = 0;
        uStack_314 = 0xffffffff;
        uStack_310 = 0;
        puStack_308 = &UNK_18094a9a8;
        puStack_300 = &DAT_18098bc73;
        puStack_2f8 = &DAT_18098bc73;
        uStack_2f0 = 0xffffffff;
        puStack_2e8 = &DAT_18098bc73;
        puStack_2e0 = &DAT_18098bc73;
        uStack_2d8 = 0xffffffff;
        puStack_2d0 = &DAT_18098bc73;
        puStack_2c8 = &DAT_18098bc73;
        uStack_2c0 = 0;
        uStack_2bc = 0xffffffff;
        uStack_2b8 = 0;
        puStack_2b0 = &UNK_18094a9a8;
        puStack_2a8 = &DAT_18098bc73;
        puStack_2a0 = &DAT_18098bc73;
        uStack_298 = 0xffffffff;
        puStack_290 = &DAT_18098bc73;
        puStack_288 = &DAT_18098bc73;
        uStack_280 = 0xffffffff;
        puStack_278 = &DAT_18098bc73;
        puStack_270 = &DAT_18098bc73;
        uStack_268 = 0;
        uStack_264 = 0xffffffff;
        uStack_260 = 0;
        puStack_258 = &UNK_18094a9a8;
        puStack_250 = &DAT_18098bc73;
        puStack_248 = &DAT_18098bc73;
        uStack_240 = 0xffffffff;
        puStack_238 = &DAT_18098bc73;
        puStack_230 = &DAT_18098bc73;
        uStack_228 = 0xffffffff;
        puStack_220 = &DAT_18098bc73;
        puStack_218 = &DAT_18098bc73;
        uStack_210 = 0;
        uStack_20c = 0xffffffff;
        uStack_208 = 0;
        puStack_200 = &UNK_18094a9a8;
        puStack_1f8 = &DAT_18098bc73;
        puStack_1f0 = &DAT_18098bc73;
        uStack_1e8 = 0xffffffff;
        puStack_1e0 = &DAT_18098bc73;
        puStack_1d8 = &DAT_18098bc73;
        uStack_1d0 = 0xffffffff;
        puStack_1c8 = &DAT_18098bc73;
        puStack_1c0 = &DAT_18098bc73;
        uStack_1b8 = 0;
        uStack_1b4 = 0xffffffff;
        uStack_1b0 = 0;
        puStack_1a8 = &UNK_18094a9a8;
        puStack_1a0 = &DAT_18098bc73;
        puStack_198 = &DAT_18098bc73;
        uStack_190 = 0xffffffff;
        puStack_188 = &DAT_18098bc73;
        puStack_180 = &DAT_18098bc73;
        uStack_178 = 0xffffffff;
        puStack_170 = &DAT_18098bc73;
        puStack_168 = &DAT_18098bc73;
        uStack_160 = 0;
        uStack_15c = 0xffffffff;
        uStack_158 = 0;
        puStack_150 = &UNK_18094a9a8;
        puStack_148 = &DAT_18098bc73;
        puStack_140 = &DAT_18098bc73;
        uStack_138 = 0xffffffff;
        puStack_130 = &DAT_18098bc73;
        puStack_128 = &DAT_18098bc73;
        uStack_120 = 0xffffffff;
        puStack_118 = &DAT_18098bc73;
        puStack_110 = &DAT_18098bc73;
        uStack_108 = 0;
        uStack_104 = 0xffffffff;
        uStack_100 = 0;
        puStack_f8 = &UNK_18094a9a8;
        puStack_f0 = &DAT_18098bc73;
        puStack_e8 = &DAT_18098bc73;
        uStack_e0 = 0xffffffff;
        puStack_d8 = &DAT_18098bc73;
        puStack_d0 = &DAT_18098bc73;
        uStack_c8 = 0xffffffff;
        puStack_c0 = &DAT_18098bc73;
        puStack_b8 = &DAT_18098bc73;
        uStack_b0 = 0;
        uStack_ac = 0xffffffff;
        uStack_a8 = 0;
        puStack_a0 = &UNK_18094a9a8;
        puStack_98 = &DAT_18098bc73;
        puStack_90 = &DAT_18098bc73;
        uStack_88 = 0xffffffff;
        puStack_80 = &DAT_18098bc73;
        puStack_78 = &DAT_18098bc73;
        uStack_70 = 0xffffffff;
        puStack_68 = &DAT_18098bc73;
        puStack_60 = &DAT_18098bc73;
        uStack_58 = 0;
        uStack_54 = 0xffffffff;
        uStack_50 = 0;
        puVar4 = puVar5;
        if (auStackX_20[0] != 0) {
          do {
            uVar6 = (**(code **)(*plVar11 + 0x88))
                              (plVar11,*(undefined4 *)(lVar1 + 0x18),&puStack_5c8,0x10,(int)puVar4);
            uVar8 = (int)puVar4 + uVar6;
            puVar4 = (undefined8 *)(ulonglong)uVar8;
            if (uVar6 != 0) {
              puVar7 = auStack_57c;
              uVar12 = (ulonglong)uVar6;
              do {
                uVar6 = *puVar7;
                puVar2 = puVar5;
                if ((-1 < (int)uVar6) && (uVar6 < *(uint *)(plVar11 + 0x12))) {
                  puVar2 = *(undefined8 **)(plVar11[0x11] + (ulonglong)uVar6 * 8);
                }
                if (puVar2 != (undefined8 *)0x0) {
                  uStack_5e8 = *(undefined8 *)(lVar1 + 8);
                  uStack_5e0 = *(undefined8 *)(lVar1 + 0x10);
                  uStack_608 = puVar2[4];
                  uStack_5d8 = uStack_608;
                  puVar3 = (undefined4 *)FUN_1806aae60(plVar11 + 8,&uStack_5e8,&uStackX_10);
                  if ((char)uStackX_10 == '\0') {
                    *puVar3 = (undefined4)uStack_5e8;
                    puVar3[1] = uStack_5e8._4_4_;
                    puVar3[2] = (undefined4)uStack_5e0;
                    puVar3[3] = uStack_5e0._4_4_;
                    *(undefined8 **)(puVar3 + 6) = puVar2;
                    *(undefined8 *)(puVar3 + 4) = uStack_5d8;
                  }
                }
                puVar7 = puVar7 + 0x16;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
          } while (uVar8 < auStackX_20[0]);
        }
      }
      auStackX_18[0] = auStackX_18[0] + 1;
      puVar4 = (undefined8 *)(ulonglong)auStackX_18[0];
    } while (auStackX_18[0] < *(uint *)(plVar11 + 0x10));
    plVar9 = plVar11 + 0x1b;
  }
  if ((int)plVar11[0x1c] != 0) {
    do {
      lVar1 = *(longlong *)(*plVar9 + (longlong)puVar5 * 8);
      uStack_618 = *(longlong **)(lVar1 + 0x20);
      uStack_610 = *(longlong **)(lVar1 + 0x28);
      puVar4 = (undefined8 *)FUN_1806ab040(plVar11 + 0x14,&uStack_618,&plStackX_8);
      if ((char)plStackX_8 == '\0') {
        *puVar4 = uStack_618;
        puVar4[1] = uStack_610;
        puVar4[2] = lVar1;
      }
      uVar6 = (int)puVar5 + 1;
      puVar5 = (undefined8 *)(ulonglong)uVar6;
    } while (uVar6 < *(uint *)(plVar11 + 0x1c));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




