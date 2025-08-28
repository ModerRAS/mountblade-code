#include "TaleWorlds.Native.Split.h"

// 99_part_01_part048.c - 1 个函数

// 函数: void FUN_1800d4270(undefined8 *param_1,undefined8 *param_2,char param_3)
void FUN_1800d4270(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int *piVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 *puStackX_8;
  undefined8 *puStackX_10;
  undefined8 uStack_a40;
  uint uStack_a2c;
  undefined8 *puStack_a28;
  undefined8 *puStack_a20;
  undefined8 *puStack_a18;
  undefined8 *puStack_a10;
  undefined8 *puStack_a08;
  undefined8 *puStack_a00;
  undefined8 *puStack_9f8;
  undefined8 *puStack_9f0;
  undefined8 *puStack_9e8;
  undefined8 *puStack_9e0;
  undefined8 *puStack_9d8;
  undefined8 *puStack_9d0;
  longlong alStack_9c8 [3];
  undefined4 uStack_9b0;
  longlong alStack_9a8 [3];
  undefined4 uStack_990;
  longlong alStack_988 [3];
  undefined4 uStack_970;
  longlong alStack_968 [3];
  undefined4 uStack_950;
  longlong alStack_948 [3];
  undefined4 uStack_930;
  longlong alStack_928 [3];
  undefined4 uStack_910;
  longlong alStack_908 [3];
  undefined4 uStack_8f0;
  longlong alStack_8e8 [3];
  undefined4 uStack_8d0;
  longlong alStack_8c8 [3];
  undefined4 uStack_8b0;
  longlong alStack_8a8 [3];
  undefined4 uStack_890;
  longlong alStack_888 [3];
  undefined4 uStack_870;
  longlong alStack_868 [3];
  undefined4 uStack_850;
  longlong alStack_848 [3];
  undefined4 uStack_830;
  longlong alStack_828 [3];
  undefined4 uStack_810;
  longlong alStack_808 [3];
  undefined4 uStack_7f0;
  longlong alStack_7e8 [3];
  undefined4 uStack_7d0;
  longlong alStack_7c8 [3];
  undefined4 uStack_7b0;
  longlong alStack_7a8 [3];
  undefined4 uStack_790;
  longlong alStack_788 [3];
  undefined4 uStack_770;
  longlong alStack_768 [3];
  undefined4 uStack_750;
  longlong alStack_748 [3];
  undefined4 uStack_730;
  longlong alStack_728 [3];
  undefined4 uStack_710;
  longlong alStack_708 [3];
  undefined4 uStack_6f0;
  longlong alStack_6e8 [3];
  undefined4 uStack_6d0;
  longlong alStack_6c8 [3];
  undefined4 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined *puStack_698;
  code *pcStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined *puStack_678;
  code *pcStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined *puStack_658;
  code *pcStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined *puStack_638;
  code *pcStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined *puStack_618;
  code *pcStack_610;
  longlong alStack_608 [3];
  undefined4 uStack_5f0;
  longlong alStack_5e8 [3];
  undefined4 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined *puStack_5b8;
  code *pcStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined *puStack_598;
  code *pcStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined *puStack_578;
  code *pcStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined *puStack_558;
  code *pcStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined *puStack_538;
  code *pcStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined *puStack_518;
  code *pcStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined *puStack_4f8;
  code *pcStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined *puStack_4d8;
  code *pcStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined *puStack_4b8;
  code *pcStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined4 uStack_490;
  undefined8 uStack_488;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined8 uStack_478;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined8 uStack_468;
  undefined4 uStack_460;
  undefined8 uStack_458;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined8 uStack_448;
  undefined4 uStack_440;
  undefined8 uStack_438;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined8 uStack_428;
  undefined4 uStack_420;
  undefined8 uStack_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined8 uStack_408;
  undefined4 uStack_400;
  undefined8 uStack_3f8;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined8 uStack_3e8;
  undefined4 uStack_3e0;
  undefined8 uStack_3d8;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 uStack_3c8;
  undefined4 uStack_3c0;
  undefined8 uStack_3b8;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined8 uStack_3a8;
  undefined4 uStack_3a0;
  undefined8 uStack_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 uStack_388;
  undefined4 uStack_380;
  int *piStack_378;
  undefined8 uStack_370;
  int *piStack_368;
  longlong lStack_360;
  undefined8 uStack_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  int *piStack_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  int *piStack_338;
  longlong lStack_330;
  int *piStack_328;
  undefined8 uStack_320;
  int *piStack_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  int *piStack_308;
  undefined8 uStack_300;
  int *piStack_2f8;
  longlong lStack_2f0;
  undefined8 uStack_2e8;
  undefined4 uStack_2e0;
  undefined8 uStack_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 uStack_2c8;
  undefined4 uStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 uStack_2a8;
  undefined4 uStack_2a0;
  undefined8 uStack_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 uStack_288;
  undefined4 uStack_280;
  undefined8 uStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined8 uStack_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  int *piStack_1a8;
  longlong lStack_1a0;
  int *piStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  int *piStack_178;
  undefined8 uStack_170;
  int *piStack_168;
  longlong lStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 uStack_80;
  int *piStack_78;
  undefined8 uStack_70;
  int *piStack_68;
  longlong lStack_60;
  
  lVar8 = _DAT_180c86890;
  uStack_4a8 = 0xfffffffffffffffe;
  puVar1 = param_2 + 0x4ff;
  puStackX_8 = param_1;
  if (param_3 == '\0') {
    FUN_1800e4da0(_DAT_180c86890,param_2,puVar1);
    puVar2 = param_2 + 0x4da;
    FUN_1800e4da0(lVar8);
    puVar3 = param_2 + 0x4b5;
    FUN_1800e4da0(lVar8);
    FUN_1800e4da0(lVar8);
    FUN_1800e4da0(lVar8);
    FUN_1800e4da0(lVar8);
    FUN_1800e4da0(lVar8);
    FUN_1800e4da0(lVar8);
    FUN_1800e4da0(lVar8);
    FUN_1800e4da0(lVar8);
    FUN_1800e4da0(lVar8);
    FUN_1800e4da0(lVar8);
    FUN_1800e4f90(lVar8);
    FUN_1800e4ee0(lVar8);
    FUN_1800e4ee0(lVar8);
    alStack_6e8[0] = 0;
    alStack_6e8[1] = 0;
    alStack_6e8[2] = 0;
    uStack_6d0 = 0x25;
    alStack_6c8[0] = 0;
    alStack_6c8[1] = 0;
    alStack_6c8[2] = 0;
    uStack_6b0 = 0x25;
    alStack_5e8[0] = 0;
    alStack_5e8[1] = 0;
    alStack_5e8[2] = 0;
    uStack_5d0 = 0x25;
    alStack_788[0] = 0;
    alStack_788[1] = 0;
    alStack_788[2] = 0;
    uStack_770 = 0x25;
    alStack_768[0] = 0;
    alStack_768[1] = 0;
    alStack_768[2] = 0;
    uStack_750 = 0x25;
    alStack_748[0] = 0;
    alStack_748[1] = 0;
    alStack_748[2] = 0;
    uStack_730 = 0x25;
    alStack_728[0] = 0;
    alStack_728[1] = 0;
    alStack_728[2] = 0;
    uStack_710 = 0x25;
    alStack_608[0] = 0;
    alStack_608[1] = 0;
    alStack_608[2] = 0;
    uStack_5f0 = 0x25;
    alStack_708[0] = 0;
    alStack_708[1] = 0;
    alStack_708[2] = 0;
    uStack_6f0 = 0x25;
    alStack_808[0] = 0;
    alStack_808[1] = 0;
    alStack_808[2] = 0;
    uStack_7f0 = 0x25;
    alStack_7e8[0] = 0;
    alStack_7e8[1] = 0;
    alStack_7e8[2] = 0;
    uStack_7d0 = 0x25;
    alStack_7c8[0] = 0;
    alStack_7c8[1] = 0;
    alStack_7c8[2] = 0;
    uStack_7b0 = 0x25;
    alStack_7a8[0] = 0;
    alStack_7a8[1] = 0;
    alStack_7a8[2] = 0;
    uStack_790 = 0x25;
    FUN_1800d40d0(puVar1,alStack_6e8);
    FUN_1800d40d0(puVar2,alStack_6c8);
    FUN_1800d40d0(puVar3,alStack_788);
    puVar4 = param_2 + 0x524;
    FUN_1800d40d0(puVar4,alStack_768);
    FUN_1800d40d0(param_2 + 0x46b,alStack_5e8);
    FUN_1800d40d0(param_2 + 0x3b2,alStack_748);
    FUN_1800d40d0(param_2 + 0x3d7,alStack_728);
    FUN_1800d40d0(param_2 + 0x56e,alStack_608);
    FUN_1800d40d0(param_2 + 0x446,alStack_708);
    FUN_1800d40d0(param_2 + 0x490,alStack_808);
    FUN_1800d40d0(param_2 + 0x549,alStack_7e8);
    FUN_1800d40d0(param_2 + 0x3fc,alStack_7c8);
    uVar14 = FUN_1800d40d0(param_2 + 0x421,alStack_7a8);
    uStack_4a0 = 0;
    if ((*(byte *)((longlong)param_2 + 4) & 4) == 0) {
      uStack_230 = *(undefined4 *)puVar1;
      uStack_22c = uStack_a40._4_4_;
      uStack_240 = 0;
      uStack_238 = puVar1;
      uStack_248 = puVar1;
      FUN_1800e98d0(&uStack_248,&uStack_238);
      uStack_250 = *(undefined4 *)puVar2;
      uStack_24c = uStack_a40._4_4_;
      uStack_260 = 0;
      uStack_258 = puVar2;
      uStack_268 = puVar2;
      FUN_1800e98d0(&uStack_268,&uStack_258);
      uStack_270 = *(undefined4 *)puVar3;
      uStack_26c = uStack_a40._4_4_;
      uStack_280 = 0;
      uStack_278 = puVar3;
      uStack_288 = puVar3;
      FUN_1800e98d0(&uStack_288,&uStack_278);
      uStack_290 = *(undefined4 *)puVar4;
      uStack_28c = uStack_a40._4_4_;
      uStack_2a0 = 0;
      uStack_298 = puVar4;
      uStack_2a8 = puVar4;
      FUN_1800e98d0(&uStack_2a8,&uStack_298);
      uStack_2b8 = param_2 + 0x3b2;
      uStack_2b0 = *(undefined4 *)uStack_2b8;
      uStack_2ac = uStack_a40._4_4_;
      uStack_2c0 = 0;
      uStack_2c8 = uStack_2b8;
      FUN_1800e98d0(&uStack_2c8,&uStack_2b8);
      uStack_2d8 = param_2 + 0x3d7;
      uStack_2d0 = *(undefined4 *)uStack_2d8;
      uStack_2cc = uStack_a40._4_4_;
      uStack_2e0 = 0;
      uStack_2e8 = uStack_2d8;
      FUN_1800e98d0(&uStack_2e8,&uStack_2d8);
      uStack_158 = param_2 + 0x56e;
      uStack_150 = *(undefined4 *)uStack_158;
      uStack_14c = uStack_a40._4_4_;
      uStack_140 = 0;
      uStack_148 = uStack_158;
      FUN_1800e98d0(&uStack_148,&uStack_158);
      uStack_138 = param_2 + 0x446;
      uStack_130 = *(undefined4 *)uStack_138;
      uStack_12c = uStack_a40._4_4_;
      uStack_120 = 0;
      uStack_128 = uStack_138;
      FUN_1800e98d0(&uStack_128,&uStack_138);
      uStack_118 = param_2 + 0x490;
      uStack_110 = *(undefined4 *)uStack_118;
      uStack_10c = uStack_a40._4_4_;
      uStack_100 = 0;
      uStack_108 = uStack_118;
      FUN_1800e98d0(&uStack_108,&uStack_118);
      uStack_f8 = param_2 + 0x46b;
      uStack_f0 = *(undefined4 *)uStack_f8;
      uStack_ec = uStack_a40._4_4_;
      uStack_e0 = 0;
      uStack_e8 = uStack_f8;
      FUN_1800e98d0(&uStack_e8,&uStack_f8);
      uStack_d8 = param_2 + 0x549;
      uStack_d0 = *(undefined4 *)uStack_d8;
      uStack_cc = uStack_a40._4_4_;
      uStack_c0 = 0;
      uStack_c8 = uStack_d8;
      FUN_1800e98d0(&uStack_c8,&uStack_d8);
      uStack_b8 = param_2 + 0x3fc;
      uStack_b0 = *(undefined4 *)uStack_b8;
      uStack_ac = uStack_a40._4_4_;
      uStack_a0 = 0;
      uStack_a8 = uStack_b8;
      FUN_1800e98d0(&uStack_a8,&uStack_b8);
      uStack_98 = param_2 + 0x421;
      uStack_90 = *(undefined4 *)uStack_98;
      uStack_a40 = (undefined8 **)CONCAT44(uStack_a40._4_4_,uStack_90);
      uStack_8c = uStack_a40._4_4_;
      uStack_80 = 0;
      uStack_88 = uStack_98;
      uVar14 = FUN_1800e98d0(&uStack_88,&uStack_98);
    }
    uVar14 = FUN_1800e5110(uVar14,param_2,alStack_6e8);
    uVar14 = FUN_1800e5110(uVar14,param_2,alStack_6c8);
    uVar14 = FUN_1800e5110(uVar14,param_2,alStack_788);
    uVar14 = FUN_1800e5110(uVar14,param_2,alStack_768);
    uVar14 = FUN_1800e5110(uVar14,param_2,alStack_748);
    uVar14 = FUN_1800e5110(uVar14,param_2,alStack_728);
    uVar14 = FUN_1800e5110(uVar14,param_2,alStack_708);
    uVar14 = FUN_1800e5110(uVar14,param_2,alStack_808);
    uVar14 = FUN_1800e5110(uVar14,param_2,alStack_7e8);
    uVar14 = FUN_1800e5110(uVar14,param_2,alStack_7c8);
    FUN_1800e5110(uVar14,param_2,alStack_7a8);
    if (alStack_7a8[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (alStack_7c8[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (alStack_7e8[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (alStack_808[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (alStack_708[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (alStack_608[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (alStack_728[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (alStack_748[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (alStack_768[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (alStack_788[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (alStack_5e8[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lVar11 = alStack_6e8[0];
    if (alStack_6c8[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    FUN_1800e4da0(_DAT_180c86890,param_2,puVar1);
    puVar2 = param_2 + 0x4b5;
    FUN_1800e4da0(lVar8);
    uStack_490 = *(undefined4 *)puVar1;
    iVar10 = 0;
    uStack_480 = 0;
    uStack_47c = uStack_a40._4_4_;
    uStack_498 = puVar1;
    uStack_488 = puVar1;
    FUN_1800e98d0(&uStack_488,&uStack_498);
    uStack_478 = param_2 + 0x4da;
    uStack_470 = *(undefined4 *)uStack_478;
    uStack_46c = uStack_a40._4_4_;
    uStack_460 = 0;
    uStack_468 = uStack_478;
    FUN_1800e98d0(&uStack_468,&uStack_478);
    uStack_450 = *(undefined4 *)puVar2;
    uStack_44c = uStack_a40._4_4_;
    uStack_440 = 0;
    uStack_458 = puVar2;
    uStack_448 = puVar2;
    FUN_1800e98d0(&uStack_448,&uStack_458);
    uStack_438 = param_2 + 0x524;
    uStack_430 = *(undefined4 *)uStack_438;
    uStack_42c = uStack_a40._4_4_;
    uStack_420 = 0;
    uStack_428 = uStack_438;
    FUN_1800e98d0(&uStack_428,&uStack_438);
    uStack_418 = param_2 + 0x3b2;
    uStack_410 = *(undefined4 *)uStack_418;
    uStack_40c = uStack_a40._4_4_;
    uStack_400 = 0;
    uStack_408 = uStack_418;
    FUN_1800e98d0(&uStack_408,&uStack_418);
    uStack_3f8 = param_2 + 0x46b;
    uStack_3f0 = *(undefined4 *)uStack_3f8;
    uStack_3ec = uStack_a40._4_4_;
    uStack_3e0 = 0;
    uStack_3e8 = uStack_3f8;
    FUN_1800e98d0(&uStack_3e8,&uStack_3f8);
    uStack_3d8 = param_2 + 0x38d;
    uStack_3d0 = *(undefined4 *)uStack_3d8;
    uStack_3cc = uStack_a40._4_4_;
    uStack_3c0 = 0;
    uStack_3c8 = uStack_3d8;
    FUN_1800e98d0(&uStack_3c8,&uStack_3d8);
    uStack_3b8 = param_2 + 0x3d7;
    uStack_3b0 = *(undefined4 *)uStack_3b8;
    uStack_3ac = uStack_a40._4_4_;
    uStack_3a0 = 0;
    uStack_3a8 = uStack_3b8;
    FUN_1800e98d0(&uStack_3a8,&uStack_3b8);
    uStack_398 = param_2 + 0x56e;
    uStack_390 = *(undefined4 *)uStack_398;
    uStack_38c = uStack_a40._4_4_;
    uStack_380 = 0;
    uStack_388 = uStack_398;
    FUN_1800e98d0(&uStack_388,&uStack_398);
    piVar12 = (int *)(param_2 + 0x3fc);
    iVar13 = *piVar12;
    uStack_a40 = (undefined8 **)CONCAT44(uStack_a40._4_4_,iVar13);
    uVar7 = uStack_a40;
    iVar9 = iVar13;
    if (iVar13 != 0) {
      for (; iVar9 != 0; iVar9 = iVar9 >> 1) {
        iVar10 = iVar10 + 1;
      }
      uStack_370 = uStack_a40;
      lVar11 = (ulonglong)uStack_a2c << 0x20;
      piStack_378 = piVar12;
      piStack_368 = piVar12;
      lStack_360 = lVar11;
      FUN_1800eae10(&piStack_368,&piStack_378,(longlong)(iVar10 + -1) * 2);
      if (iVar13 < 0x1d) {
        uStack_190 = uStack_a40;
        piStack_1a8 = piVar12;
        lStack_1a0 = lVar11;
        piStack_198 = piVar12;
        FUN_1800e9df0(&piStack_1a8,&piStack_198);
      }
      else {
        uStack_350 = 0x1c;
        uStack_34c = uStack_a40._4_4_;
        piStack_168 = piVar12;
        lStack_160 = lVar11;
        uStack_358 = piVar12;
        FUN_1800e9df0(&piStack_168,&uStack_358);
        uStack_a40 = (undefined8 **)CONCAT44(uStack_a40._4_4_,0x1c);
        uStack_170 = uVar7;
        uStack_180 = 0x1c;
        uStack_17c = uStack_a40._4_4_;
        piStack_178 = piVar12;
        uStack_188 = piVar12;
        FUN_1800e9fd0(&uStack_188,&piStack_178);
      }
    }
    puVar1 = param_2 + 0x421;
    uStack_1b0 = *(undefined4 *)puVar1;
    uStack_1ac = uStack_a40._4_4_;
    uStack_1c0 = 0;
    uStack_1b8 = puVar1;
    uStack_1c8 = puVar1;
    FUN_1800e98d0(&uStack_1c8,&uStack_1b8);
    puVar2 = param_2 + 0x446;
    uStack_1d0 = *(undefined4 *)puVar2;
    uStack_1cc = uStack_a40._4_4_;
    uStack_1e0 = 0;
    uStack_1d8 = puVar2;
    uStack_1e8 = puVar2;
    FUN_1800e98d0(&uStack_1e8,&uStack_1d8);
    puVar3 = param_2 + 0x490;
    uStack_1f0 = *(undefined4 *)puVar3;
    uStack_1ec = uStack_a40._4_4_;
    uStack_200 = 0;
    uStack_1f8 = puVar3;
    uStack_208 = puVar3;
    FUN_1800e98d0(&uStack_208,&uStack_1f8);
    puVar4 = param_2 + 0x549;
    uStack_210 = *(undefined4 *)puVar4;
    uStack_20c = uStack_a40._4_4_;
    uStack_220 = 0;
    uStack_218 = puVar4;
    uStack_228 = puVar4;
    FUN_1800e98d0(&uStack_228,&uStack_218);
    FUN_1800e4da0(lVar8);
    FUN_1800e4da0(lVar8);
    FUN_1800e4da0(lVar8);
    FUN_1800e4da0(lVar8);
    FUN_1800e4da0(lVar8);
    FUN_1800e4da0(lVar8);
    FUN_1800e4da0(lVar8);
    FUN_1800e4da0(lVar8);
    FUN_1800e4da0(lVar8);
    FUN_1800e4da0(lVar8);
    FUN_1800e4da0(lVar8);
    FUN_1800e4f90(lVar8);
    FUN_1800e4ee0(lVar8);
    FUN_1800e4ee0(lVar8);
    alStack_9c8[0] = 0;
    alStack_9c8[1] = 0;
    alStack_9c8[2] = 0;
    uStack_9b0 = 0x25;
    alStack_9a8[0] = 0;
    alStack_9a8[1] = 0;
    alStack_9a8[2] = 0;
    uStack_990 = 0x25;
    alStack_988[0] = 0;
    alStack_988[1] = 0;
    alStack_988[2] = 0;
    uStack_970 = 0x25;
    alStack_968[0] = 0;
    alStack_968[1] = 0;
    alStack_968[2] = 0;
    uStack_950 = 0x25;
    alStack_948[0] = 0;
    alStack_948[1] = 0;
    alStack_948[2] = 0;
    uStack_930 = 0x25;
    alStack_928[0] = 0;
    alStack_928[1] = 0;
    alStack_928[2] = 0;
    uStack_910 = 0x25;
    alStack_908[0] = 0;
    alStack_908[1] = 0;
    alStack_908[2] = 0;
    uStack_8f0 = 0x25;
    alStack_8e8[0] = 0;
    alStack_8e8[1] = 0;
    alStack_8e8[2] = 0;
    uStack_8d0 = 0x25;
    alStack_8c8[0] = 0;
    alStack_8c8[1] = 0;
    alStack_8c8[2] = 0;
    uStack_8b0 = 0x25;
    alStack_8a8[0] = 0;
    alStack_8a8[1] = 0;
    alStack_8a8[2] = 0;
    uStack_890 = 0x25;
    alStack_888[0] = 0;
    alStack_888[1] = 0;
    alStack_888[2] = 0;
    uStack_870 = 0x25;
    alStack_868[0] = 0;
    alStack_868[1] = 0;
    alStack_868[2] = 0;
    uStack_850 = 0x25;
    alStack_848[0] = 0;
    alStack_848[1] = 0;
    alStack_848[2] = 0;
    uStack_830 = 0x25;
    alStack_828[0] = 0;
    alStack_828[1] = 0;
    alStack_828[2] = 0;
    uStack_810 = 0x25;
    FUN_1800d40d0(param_2 + 0x4ff,alStack_9c8);
    FUN_1800d40d0(param_2 + 0x4da,alStack_9a8);
    FUN_1800d40d0(param_2 + 0x4b5,alStack_988);
    FUN_1800d40d0(param_2 + 0x524,alStack_948);
    FUN_1800d40d0(param_2 + 0x3b2,alStack_928);
    FUN_1800d40d0(param_2 + 0x38d,alStack_908);
    FUN_1800d40d0(param_2 + 0x3d7,alStack_8e8);
    FUN_1800d40d0(param_2 + 0x56e,alStack_8c8);
    FUN_1800d40d0(puVar2,alStack_868);
    FUN_1800d40d0(puVar3,alStack_848);
    FUN_1800d40d0(puVar4,alStack_828);
    FUN_1800d40d0(param_2 + 0x46b,alStack_968);
    FUN_1800d40d0(param_2 + 0x3fc,alStack_8a8);
    FUN_1800d40d0(puVar1,alStack_888);
    FUN_1800e5180();
    FUN_1800e5180();
    FUN_1800e5180();
    FUN_1800e5180();
    FUN_1800e5180();
    FUN_1800e5180();
    FUN_1800e5180();
    FUN_1800e5180();
    FUN_1800e5180();
    FUN_1800e5180();
    FUN_1800e5180();
    FUN_1800e5180();
    puStackX_10 = &uStack_5c8;
    uStack_5c8 = alStack_9c8;
    uStack_5c0 = &puStackX_8;
    puStack_5b8 = &UNK_1800ea740;
    pcStack_5b0 = FUN_1800ea6f0;
    puStackX_8 = param_2;
    FUN_1800e8d00();
    puStackX_8 = &uStack_5a8;
    uStack_5a8 = alStack_9a8;
    uStack_5a0 = &puStackX_10;
    puStack_598 = &UNK_1800ea740;
    pcStack_590 = FUN_1800ea6f0;
    puStackX_10 = param_2;
    FUN_1800e8d00();
    puStackX_8 = &uStack_588;
    uStack_588 = alStack_988;
    uStack_580 = &puStack_9d0;
    puStack_578 = &UNK_1800ea740;
    pcStack_570 = FUN_1800ea6f0;
    puStack_9d0 = param_2;
    FUN_1800e8d00();
    puStackX_8 = &uStack_568;
    uStack_568 = alStack_948;
    uStack_560 = &puStack_a28;
    puStack_558 = &UNK_1800ea740;
    pcStack_550 = FUN_1800ea6f0;
    puStack_a28 = param_2;
    FUN_1800e8d00();
    puStackX_8 = &uStack_548;
    uStack_548 = alStack_928;
    uStack_540 = &puStack_a20;
    puStack_538 = &UNK_1800ea740;
    pcStack_530 = FUN_1800ea6f0;
    puStack_a20 = param_2;
    FUN_1800e8d00();
    puStackX_8 = &uStack_528;
    uStack_528 = alStack_908;
    uStack_520 = &puStack_a18;
    puStack_518 = &UNK_1800ea740;
    pcStack_510 = FUN_1800ea6f0;
    puStack_a18 = param_2;
    FUN_1800e8d00();
    puStackX_8 = &uStack_508;
    uStack_508 = alStack_8e8;
    uStack_500 = &puStack_a10;
    puStack_4f8 = &UNK_1800ea740;
    pcStack_4f0 = FUN_1800ea6f0;
    puStack_a10 = param_2;
    FUN_1800e8d00();
    puStackX_8 = &uStack_4e8;
    uStack_4e8 = alStack_8c8;
    uStack_4e0 = &puStack_a08;
    puStack_4d8 = &UNK_1800ea740;
    pcStack_4d0 = FUN_1800ea6f0;
    puStack_a08 = param_2;
    FUN_1800e8d00();
    puStackX_8 = &uStack_4c8;
    uStack_4c8 = alStack_868;
    uStack_4c0 = &puStack_a00;
    puStack_4b8 = &UNK_1800ea740;
    pcStack_4b0 = FUN_1800ea6f0;
    puStack_a00 = param_2;
    FUN_1800e8d00();
    puStackX_8 = &uStack_6a8;
    uStack_6a8 = alStack_848;
    uStack_6a0 = &puStack_9f8;
    puStack_698 = &UNK_1800ea740;
    pcStack_690 = FUN_1800ea6f0;
    puStack_9f8 = param_2;
    FUN_1800e8d00();
    puStackX_8 = &uStack_688;
    uStack_688 = alStack_828;
    uStack_680 = &puStack_9f0;
    puStack_678 = &UNK_1800ea740;
    pcStack_670 = FUN_1800ea6f0;
    puStack_9f0 = param_2;
    FUN_1800e8d00();
    puStackX_8 = &uStack_668;
    uStack_668 = alStack_968;
    uStack_660 = &puStack_9e8;
    puStack_658 = &UNK_1800ea740;
    pcStack_650 = FUN_1800ea6f0;
    puStack_9e8 = param_2;
    FUN_1800e8d00();
    puStackX_8 = &uStack_648;
    uStack_648 = alStack_8a8;
    uStack_640 = &puStack_9e0;
    puStack_638 = &UNK_1800ea740;
    pcStack_630 = FUN_1800ea6f0;
    puStack_9e0 = param_2;
    FUN_1800e8d00();
    puStackX_8 = &uStack_628;
    uStack_628 = alStack_888;
    uStack_a40 = &puStack_9d8;
    puStack_618 = &UNK_1800ea740;
    pcStack_610 = FUN_1800ea6f0;
    puStack_9d8 = param_2;
    uStack_620 = uStack_a40;
    FUN_1800e8d00();
    if (param_2[0x69c] != 0) {
      FUN_1802dd2b0(param_2[0x69c],param_2);
    }
    if (param_2[0x69b] != 0) {
      FUN_1802dd2b0(param_2[0x69b],param_2);
    }
    if (alStack_828[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (alStack_848[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (alStack_868[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (alStack_888[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (alStack_8a8[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (alStack_8c8[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (alStack_8e8[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (alStack_908[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (alStack_928[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (alStack_948[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (alStack_968[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (alStack_988[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lVar11 = alStack_9c8[0];
    if (alStack_9a8[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  iVar13 = 0;
  if (lVar11 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (*(char *)((longlong)param_2 + 0x11c36) != '\0') {
    uVar7 = param_2[0x2551];
    *(undefined8 *)(lVar8 + 0x3cb8) = param_2[0x2550];
    *(undefined8 *)(lVar8 + 0x3cc0) = uVar7;
    uVar7 = param_2[0x2553];
    *(undefined8 *)(lVar8 + 0x3cc8) = param_2[0x2552];
    *(undefined8 *)(lVar8 + 0x3cd0) = uVar7;
    uVar7 = param_2[0x2555];
    *(undefined8 *)(lVar8 + 0x3cd8) = param_2[0x2554];
    *(undefined8 *)(lVar8 + 0x3ce0) = uVar7;
    uVar7 = param_2[0x2557];
    *(undefined8 *)(lVar8 + 0x3ce8) = param_2[0x2556];
    *(undefined8 *)(lVar8 + 0x3cf0) = uVar7;
    uVar7 = param_2[0x2579];
    *(undefined8 *)(lVar8 + 0x3cf8) = param_2[0x2578];
    *(undefined8 *)(lVar8 + 0x3d00) = uVar7;
    uVar7 = param_2[0x257b];
    *(undefined8 *)(lVar8 + 0x3d08) = param_2[0x257a];
    *(undefined8 *)(lVar8 + 0x3d10) = uVar7;
    uVar14 = *(undefined4 *)((longlong)param_2 + 0x12be4);
    uVar5 = *(undefined4 *)(param_2 + 0x257d);
    uVar6 = *(undefined4 *)((longlong)param_2 + 0x12bec);
    *(undefined4 *)(lVar8 + 0x3d18) = *(undefined4 *)(param_2 + 0x257c);
    *(undefined4 *)(lVar8 + 0x3d1c) = uVar14;
    *(undefined4 *)(lVar8 + 0x3d20) = uVar5;
    *(undefined4 *)(lVar8 + 0x3d24) = uVar6;
    uVar7 = param_2[0x257f];
    *(undefined8 *)(lVar8 + 0x3d28) = param_2[0x257e];
    *(undefined8 *)(lVar8 + 0x3d30) = uVar7;
  }
  piVar12 = (int *)(param_2 + 0x64c);
  if (*piVar12 != 0) {
    iVar10 = *piVar12;
    uStack_a40 = (undefined8 **)CONCAT44(uStack_a40._4_4_,iVar10);
    iVar9 = iVar10;
    if (iVar10 != 0) {
      for (; iVar9 != 0; iVar9 = iVar9 >> 1) {
        iVar13 = iVar13 + 1;
      }
      uStack_70 = uStack_a40;
      lVar8 = (ulonglong)uStack_a2c << 0x20;
      piStack_78 = piVar12;
      piStack_68 = piVar12;
      lStack_60 = lVar8;
      FUN_1800eb050(&piStack_68,&piStack_78,(longlong)(iVar13 + -1) * 2);
      if (iVar10 < 0x1d) {
        uStack_300 = uStack_a40;
        piStack_308 = piVar12;
        piStack_2f8 = piVar12;
        lStack_2f0 = lVar8;
        FUN_1800ea190(&piStack_2f8,&piStack_308);
      }
      else {
        uStack_340 = 0x1c;
        uStack_33c = uStack_a40._4_4_;
        piStack_338 = piVar12;
        lStack_330 = lVar8;
        piStack_348 = piVar12;
        FUN_1800ea190(&piStack_338,&piStack_348);
        uStack_320 = uStack_a40;
        uStack_310 = 0x1c;
        uStack_30c = uStack_a40._4_4_;
        piStack_328 = piVar12;
        piStack_318 = piVar12;
        FUN_1800ea310(&piStack_318,&piStack_328);
      }
    }
  }
  return;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




