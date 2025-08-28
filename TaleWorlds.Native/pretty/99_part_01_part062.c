#include "TaleWorlds.Native.Split.h"

// 99_part_01_part062.c - 2 个函数

// 函数: void FUN_1800dfc20(undefined8 param_1,longlong param_2,uint param_3)
void FUN_1800dfc20(undefined8 param_1,longlong param_2,uint param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_3b8 [32];
  char acStack_398 [8];
  undefined **ppuStack_390;
  ulonglong uStack_388;
  uint uStack_380;
  undefined2 uStack_37c;
  undefined2 uStack_37a;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  uint uStack_360;
  longlong *plStack_358;
  undefined *puStack_350;
  longlong lStack_348;
  undefined4 uStack_340;
  ulonglong uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  longlong *plStack_320;
  ulonglong uStack_318;
  undefined **ppuStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  uint *puStack_2e0;
  undefined8 uStack_2d8;
  uint auStack_2d0 [2];
  longlong *plStack_2c8;
  undefined *puStack_2c0;
  longlong lStack_2b8;
  undefined4 uStack_2b0;
  ulonglong uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  longlong *plStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined4 uStack_278;
  undefined4 uStack_274;
  uint uStack_270;
  undefined8 uStack_26c;
  undefined8 uStack_264;
  undefined8 uStack_25c;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined *puStack_248;
  undefined1 *puStack_240;
  undefined4 uStack_238;
  undefined1 auStack_230 [32];
  undefined *puStack_210;
  undefined1 *puStack_208;
  undefined4 uStack_200;
  undefined1 auStack_1f8 [32];
  undefined *puStack_1d8;
  undefined1 *puStack_1d0;
  undefined4 uStack_1c8;
  undefined1 auStack_1c0 [32];
  undefined *puStack_1a0;
  undefined1 *puStack_198;
  undefined4 uStack_190;
  undefined1 auStack_188 [32];
  undefined *puStack_168;
  undefined1 *puStack_160;
  undefined4 uStack_158;
  undefined1 auStack_150 [32];
  undefined *puStack_130;
  undefined1 *puStack_128;
  undefined4 uStack_120;
  undefined1 auStack_118 [32];
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  undefined4 uStack_e8;
  undefined1 auStack_e0 [72];
  undefined *apuStack_98 [12];
  ulonglong uStack_38;
  
  uStack_2f0 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_3b8;
  FUN_18024c0f0(param_2,apuStack_98);
  ppuStack_310 = &puStack_f8;
  puStack_f8 = &UNK_1809fcc58;
  puStack_f0 = auStack_e0;
  uStack_e8 = 0;
  auStack_e0[0] = 0;
  FUN_180049bf0(&puStack_f8,&UNK_180a04388);
  FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_f8);
  uVar9 = FUN_1802c22a0(acStack_398,&UNK_180a04388);
  uVar9 = FUN_1800d7010(uVar9,param_2,0,0);
  FUN_1800debc0(uVar9,param_2,0);
  lVar6 = _DAT_180c86938;
  *(float *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1be0) =
       0.5 / (float)(int)*(float *)(param_2 + 0x11c20);
  *(float *)(*(longlong *)(lVar6 + 0x1cd8) + 0x1be4) =
       0.5 / (float)(int)*(float *)(param_2 + 0x11c24);
  *(float *)(*(longlong *)(lVar6 + 0x1cd8) + 0x1be8) = 1.0 / (float)*(int *)(param_2 + 0x3588);
  *(float *)(*(longlong *)(lVar6 + 0x1cd8) + 0x1bec) = 1.0 / (float)*(int *)(param_2 + 0x358c);
  puVar2 = (undefined *)FUN_1800bff50();
  param_3 = param_3 & *(uint *)(puVar2 + 0x1610);
  FUN_18029fc10(*(longlong *)(_DAT_180c86938 + 0x1cd8),*(undefined8 *)(_DAT_180c86938 + 0x1c88),
                *(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1be0,0x230);
  puStack_248 = &UNK_18098bc80;
  puStack_240 = auStack_230;
  auStack_230[0] = 0;
  uStack_238 = 8;
  strcpy_s(auStack_230,0x20,&UNK_180a043c8);
  uStack_308 = FUN_180240430(puVar2,&puStack_248,1);
  puStack_248 = &UNK_18098bcb0;
  puStack_210 = &UNK_18098bc80;
  puStack_208 = auStack_1f8;
  auStack_1f8[0] = 0;
  uStack_200 = 8;
  strcpy_s(auStack_1f8,0x20,&UNK_180a043b8);
  uStack_300 = FUN_180240430(puVar2,&puStack_210,1);
  puStack_210 = &UNK_18098bcb0;
  puStack_1d8 = &UNK_18098bc80;
  puStack_1d0 = auStack_1c0;
  auStack_1c0[0] = 0;
  uStack_1c8 = 0xb;
  strcpy_s(auStack_1c0,0x20,&UNK_180a043e8);
  uStack_318 = FUN_180240430(puVar2,&puStack_1d8,1);
  puStack_1d8 = &UNK_18098bcb0;
  puStack_1a0 = &UNK_18098bc80;
  puStack_198 = auStack_188;
  auStack_188[0] = 0;
  uStack_190 = 0xb;
  strcpy_s(auStack_188,0x20,&UNK_180a043d8);
  uVar3 = FUN_180240430(puVar2,&puStack_1a0,1);
  puStack_1a0 = &UNK_18098bcb0;
  puStack_168 = &UNK_18098bc80;
  puStack_160 = auStack_150;
  auStack_150[0] = 0;
  uStack_158 = 0x12;
  strcpy_s(auStack_150,0x20,&UNK_180a04408);
  uVar4 = FUN_180240430(puVar2,&puStack_168,1);
  puStack_168 = &UNK_18098bcb0;
  puStack_130 = &UNK_18098bc80;
  puStack_128 = auStack_118;
  auStack_118[0] = 0;
  uStack_120 = 10;
  strcpy_s(auStack_118,0x20,&DAT_180a043f8);
  uVar5 = FUN_180240430(puVar2,&puStack_130,1);
  puStack_130 = &UNK_18098bcb0;
  puStack_288 = &UNK_18098bc80;
  uStack_280 = &uStack_270;
  uStack_270 = uStack_270 & 0xffffff00;
  uStack_278 = 0x12;
  strcpy_s(&uStack_270,0x20,&DAT_180a04438);
  ppuStack_310 = (undefined **)FUN_180240430(puVar2,&puStack_288,1);
  puStack_288 = &UNK_18098bcb0;
  puStack_2e8 = &UNK_18098bc80;
  puStack_2e0 = auStack_2d0;
  auStack_2d0[0] = auStack_2d0[0] & 0xffffff00;
  uStack_2d8 = CONCAT44(uStack_2d8._4_4_,0x13);
  strcpy_s(auStack_2d0,0x20,&DAT_180a04420);
  uStack_2f8 = FUN_180240430(puVar2,&puStack_2e8,1);
  puStack_2e8 = &UNK_18098bcb0;
  uStack_278 = 0x10000ff;
  uStack_26c = 0;
  uStack_264 = 0;
  uStack_25c = 0;
  uStack_254 = 0;
  uStack_250 = 0x400;
  uStack_274 = 0x4000300;
  uStack_280 = (uint *)CONCAT17(uStack_280._7_1_,0x200060101);
  FUN_18029d000(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),4);
  uStack_24c = 1;
  lVar6 = FUN_180244ff0(param_2);
  uStack_26c = CONCAT44(uStack_26c._4_4_,*(undefined4 *)(lVar6 + 0x324));
  lVar6 = FUN_180245280(param_2);
  uStack_270 = *(uint *)(lVar6 + 0x324);
  uStack_37c = 4;
  plStack_358 = (longlong *)0x0;
  puStack_350 = &UNK_180a3c3e0;
  uStack_338 = 0;
  lStack_348 = 0;
  uStack_340 = 0;
  plStack_320 = (longlong *)0x0;
  uStack_368 = CONCAT26(uStack_37a,CONCAT24(4,param_3));
  uStack_360 = 2;
  uStack_330 = 0;
  uStack_328 = 0;
  uVar9 = *(undefined8 *)(puVar2 + 0x15b8);
  ppuStack_390 = &puStack_2e8;
  auStack_2d0[0] = 2;
  plStack_2c8 = (longlong *)0x0;
  uStack_388 = uVar3;
  uStack_380 = param_3;
  puStack_378 = puVar2;
  uStack_370 = uVar3;
  puStack_2e8 = puVar2;
  puStack_2e0 = (uint *)uVar3;
  uStack_2d8 = uStack_368;
  FUN_180627ae0(&puStack_2c0,&puStack_350);
  uStack_2a0 = uStack_330;
  uStack_298 = uStack_328;
  plStack_290 = plStack_320;
  if (plStack_320 != (longlong *)0x0) {
    (**(code **)(*plStack_320 + 0x28))();
  }
  puVar7 = (undefined *)FUN_180299eb0(uVar9,param_2,&puStack_2e8,acStack_398);
  if (acStack_398[0] == '\0') {
    uStack_280 = (uint *)CONCAT17(1,(undefined7)uStack_280);
    puStack_288 = puVar7;
    FUN_18029cdd0(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),&puStack_288);
    lVar6 = _DAT_180c86938;
    lVar8 = strnlen(&UNK_180a04470,0x3f);
    strncpy(lVar6 + 0x1ce0,&UNK_180a04470,lVar8);
    *(undefined1 *)(lVar8 + 0x1ce0 + lVar6) = 0;
    FUN_18029e110(*(undefined8 *)(_DAT_180c86938 + 0x1cd8));
  }
  uStack_388 = uStack_318;
  uStack_37c = 4;
  plStack_2c8 = (longlong *)0x0;
  ppuStack_390 = &puStack_2c0;
  puStack_2c0 = &UNK_180a3c3e0;
  uStack_2a8 = 0;
  lStack_2b8 = 0;
  uStack_2b0 = 0;
  plStack_290 = (longlong *)0x0;
  uStack_2d8 = CONCAT26(uStack_37a,CONCAT24(4,param_3));
  puStack_2e0 = (uint *)uStack_318;
  auStack_2d0[0] = 2;
  uStack_2a0 = 0;
  uStack_298 = 0;
  uStack_380 = param_3;
  puStack_2e8 = puVar2;
  FUN_1800e10e0(&puStack_378,&puStack_2e8);
  if (plStack_290 != (longlong *)0x0) {
    (**(code **)(*plStack_290 + 0x38))();
  }
  ppuStack_390 = &puStack_2c0;
  puStack_2c0 = &UNK_180a3c3e0;
  if (lStack_2b8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_2b8 = 0;
  uStack_2a8 = uStack_2a8 & 0xffffffff00000000;
  puStack_2c0 = &UNK_18098bcb0;
  if (plStack_2c8 != (longlong *)0x0) {
    (**(code **)(*plStack_2c8 + 0x38))();
  }
  uVar9 = *(undefined8 *)(puVar2 + 0x15b8);
  ppuStack_390 = &puStack_2e8;
  puStack_2e8 = puStack_378;
  puStack_2e0 = (uint *)uStack_370;
  uStack_2d8 = uStack_368;
  auStack_2d0[0] = uStack_360;
  plStack_2c8 = plStack_358;
  if (plStack_358 != (longlong *)0x0) {
    (**(code **)(*plStack_358 + 0x28))();
  }
  FUN_180627ae0(&puStack_2c0,&puStack_350);
  uStack_2a0 = uStack_330;
  uStack_298 = uStack_328;
  plStack_290 = plStack_320;
  if (plStack_320 != (longlong *)0x0) {
    (**(code **)(*plStack_320 + 0x28))();
  }
  puVar7 = (undefined *)FUN_180299eb0(uVar9,param_2,&puStack_2e8,acStack_398);
  if (acStack_398[0] == '\0') {
    uStack_280 = (uint *)CONCAT17(2,(undefined7)uStack_280);
    puStack_288 = puVar7;
    FUN_18029cdd0(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),&puStack_288);
    lVar6 = _DAT_180c86938;
    lVar8 = strnlen(&UNK_180a04450,0x3f);
    strncpy(lVar6 + 0x1ce0,&UNK_180a04450,lVar8);
    *(undefined1 *)(lVar8 + 0x1ce0 + lVar6) = 0;
    FUN_18029e110(*(undefined8 *)(_DAT_180c86938 + 0x1cd8));
  }
  uStack_388 = uStack_308;
  uStack_37c = 4;
  plStack_2c8 = (longlong *)0x0;
  ppuStack_390 = &puStack_2c0;
  puStack_2c0 = &UNK_180a3c3e0;
  uStack_2a8 = 0;
  lStack_2b8 = 0;
  uStack_2b0 = 0;
  plStack_290 = (longlong *)0x0;
  uStack_2d8 = CONCAT26(uStack_37a,CONCAT24(4,param_3));
  puStack_2e0 = (uint *)uStack_308;
  auStack_2d0[0] = 2;
  uStack_2a0 = 0;
  uStack_298 = 0;
  uStack_380 = param_3;
  puStack_2e8 = puVar2;
  FUN_1800e10e0(&puStack_378,&puStack_2e8);
  if (plStack_290 != (longlong *)0x0) {
    (**(code **)(*plStack_290 + 0x38))();
  }
  ppuStack_390 = &puStack_2c0;
  puStack_2c0 = &UNK_180a3c3e0;
  if (lStack_2b8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_2b8 = 0;
  uStack_2a8 = uStack_2a8 & 0xffffffff00000000;
  puStack_2c0 = &UNK_18098bcb0;
  if (plStack_2c8 != (longlong *)0x0) {
    (**(code **)(*plStack_2c8 + 0x38))();
  }
  uVar9 = *(undefined8 *)(puVar2 + 0x15b8);
  ppuStack_390 = &puStack_2e8;
  puStack_2e8 = puStack_378;
  puStack_2e0 = (uint *)uStack_370;
  uStack_2d8 = uStack_368;
  auStack_2d0[0] = uStack_360;
  plStack_2c8 = plStack_358;
  if (plStack_358 != (longlong *)0x0) {
    (**(code **)(*plStack_358 + 0x28))();
  }
  FUN_180627ae0(&puStack_2c0,&puStack_350);
  uStack_2a0 = uStack_330;
  uStack_298 = uStack_328;
  plStack_290 = plStack_320;
  if (plStack_320 != (longlong *)0x0) {
    (**(code **)(*plStack_320 + 0x28))();
  }
  puVar7 = (undefined *)FUN_180299eb0(uVar9,param_2,&puStack_2e8,acStack_398);
  if (acStack_398[0] == '\0') {
    uStack_280 = (uint *)CONCAT17(6,(undefined7)uStack_280);
    puStack_288 = puVar7;
    FUN_18029cdd0(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),&puStack_288);
    lVar6 = _DAT_180c86938;
    lVar8 = strnlen(&UNK_180a044a8,0x3f);
    strncpy(lVar6 + 0x1ce0,&UNK_180a044a8,lVar8);
    *(undefined1 *)(lVar8 + 0x1ce0 + lVar6) = 0;
    FUN_18029e110(*(undefined8 *)(_DAT_180c86938 + 0x1cd8));
  }
  uStack_388 = uStack_300;
  uStack_37c = 4;
  plStack_2c8 = (longlong *)0x0;
  ppuStack_390 = &puStack_2c0;
  puStack_2c0 = &UNK_180a3c3e0;
  uStack_2a8 = 0;
  lStack_2b8 = 0;
  uStack_2b0 = 0;
  plStack_290 = (longlong *)0x0;
  uStack_2d8 = CONCAT26(uStack_37a,CONCAT24(4,param_3));
  puStack_2e0 = (uint *)uStack_300;
  auStack_2d0[0] = 2;
  uStack_2a0 = 0;
  uStack_298 = 0;
  uStack_380 = param_3;
  puStack_2e8 = puVar2;
  FUN_1800e10e0(&puStack_378,&puStack_2e8);
  if (plStack_290 != (longlong *)0x0) {
    (**(code **)(*plStack_290 + 0x38))();
  }
  ppuStack_390 = &puStack_2c0;
  puStack_2c0 = &UNK_180a3c3e0;
  if (lStack_2b8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_2b8 = 0;
  uStack_2a8 = uStack_2a8 & 0xffffffff00000000;
  puStack_2c0 = &UNK_18098bcb0;
  if (plStack_2c8 != (longlong *)0x0) {
    (**(code **)(*plStack_2c8 + 0x38))();
  }
  uVar9 = *(undefined8 *)(puVar2 + 0x15b8);
  ppuStack_390 = &puStack_2e8;
  puStack_2e8 = puStack_378;
  puStack_2e0 = (uint *)uStack_370;
  uStack_2d8 = uStack_368;
  auStack_2d0[0] = uStack_360;
  plStack_2c8 = plStack_358;
  if (plStack_358 != (longlong *)0x0) {
    (**(code **)(*plStack_358 + 0x28))();
  }
  FUN_180627ae0(&puStack_2c0,&puStack_350);
  uStack_2a0 = uStack_330;
  uStack_298 = uStack_328;
  plStack_290 = plStack_320;
  if (plStack_320 != (longlong *)0x0) {
    (**(code **)(*plStack_320 + 0x28))();
  }
  puVar7 = (undefined *)FUN_180299eb0(uVar9,param_2,&puStack_2e8,acStack_398);
  if (acStack_398[0] == '\0') {
    uStack_280 = (uint *)CONCAT17(8,(undefined7)uStack_280);
    puStack_288 = puVar7;
    FUN_18029cdd0(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),&puStack_288);
    lVar6 = _DAT_180c86938;
    lVar8 = strnlen(&UNK_180a04490,0x3f);
    strncpy(lVar6 + 0x1ce0,&UNK_180a04490,lVar8);
    *(undefined1 *)(lVar8 + 0x1ce0 + lVar6) = 0;
    FUN_18029e110(*(undefined8 *)(_DAT_180c86938 + 0x1cd8));
  }
  uStack_37c = 4;
  plStack_2c8 = (longlong *)0x0;
  ppuStack_390 = &puStack_2c0;
  puStack_2c0 = &UNK_180a3c3e0;
  uStack_2a8 = 0;
  lStack_2b8 = 0;
  uStack_2b0 = 0;
  plStack_290 = (longlong *)0x0;
  uStack_2d8 = CONCAT26(uStack_37a,CONCAT24(4,param_3));
  auStack_2d0[0] = 2;
  uStack_2a0 = 0;
  uStack_298 = 0;
  uStack_388 = uVar4;
  uStack_380 = param_3;
  puStack_2e8 = puVar2;
  puStack_2e0 = (uint *)uVar4;
  FUN_1800e10e0(&puStack_378,&puStack_2e8);
  if (plStack_290 != (longlong *)0x0) {
    (**(code **)(*plStack_290 + 0x38))();
  }
  ppuStack_390 = &puStack_2c0;
  puStack_2c0 = &UNK_180a3c3e0;
  if (lStack_2b8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_2b8 = 0;
  uStack_2a8 = uStack_2a8 & 0xffffffff00000000;
  puStack_2c0 = &UNK_18098bcb0;
  if (plStack_2c8 != (longlong *)0x0) {
    (**(code **)(*plStack_2c8 + 0x38))();
  }
  uVar9 = *(undefined8 *)(puVar2 + 0x15b8);
  ppuStack_390 = &puStack_2e8;
  puStack_2e8 = puStack_378;
  puStack_2e0 = (uint *)uStack_370;
  uStack_2d8 = uStack_368;
  auStack_2d0[0] = uStack_360;
  plStack_2c8 = plStack_358;
  if (plStack_358 != (longlong *)0x0) {
    (**(code **)(*plStack_358 + 0x28))();
  }
  FUN_180627ae0(&puStack_2c0,&puStack_350);
  uStack_2a0 = uStack_330;
  uStack_298 = uStack_328;
  plStack_290 = plStack_320;
  if (plStack_320 != (longlong *)0x0) {
    (**(code **)(*plStack_320 + 0x28))();
  }
  puVar7 = (undefined *)FUN_180299eb0(uVar9,param_2,&puStack_2e8,acStack_398);
  if (acStack_398[0] == '\0') {
    uStack_280 = (uint *)CONCAT17(7,(undefined7)uStack_280);
    puStack_288 = puVar7;
    FUN_18029cdd0(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),&puStack_288);
    lVar6 = _DAT_180c86938;
    lVar8 = strnlen(&UNK_180a044d8,0x3f);
    strncpy(lVar6 + 0x1ce0,&UNK_180a044d8,lVar8);
    *(undefined1 *)(lVar8 + 0x1ce0 + lVar6) = 0;
    FUN_18029e110(*(undefined8 *)(_DAT_180c86938 + 0x1cd8));
  }
  uStack_37c = 4;
  plStack_2c8 = (longlong *)0x0;
  ppuStack_390 = &puStack_2c0;
  puStack_2c0 = &UNK_180a3c3e0;
  uStack_2a8 = 0;
  lStack_2b8 = 0;
  uStack_2b0 = 0;
  plStack_290 = (longlong *)0x0;
  uStack_2d8 = CONCAT26(uStack_37a,CONCAT24(4,param_3));
  auStack_2d0[0] = 2;
  uStack_2a0 = 0;
  uStack_298 = 0;
  uStack_388 = uVar4;
  uStack_380 = param_3;
  puStack_2e8 = puVar2;
  puStack_2e0 = (uint *)uVar4;
  FUN_1800e10e0(&puStack_378,&puStack_2e8);
  if (plStack_290 != (longlong *)0x0) {
    (**(code **)(*plStack_290 + 0x38))();
  }
  ppuStack_390 = &puStack_2c0;
  puStack_2c0 = &UNK_180a3c3e0;
  if (lStack_2b8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_2b8 = 0;
  uStack_2a8 = uStack_2a8 & 0xffffffff00000000;
  puStack_2c0 = &UNK_18098bcb0;
  if (plStack_2c8 != (longlong *)0x0) {
    (**(code **)(*plStack_2c8 + 0x38))();
  }
  uVar9 = *(undefined8 *)(puVar2 + 0x15b8);
  ppuStack_390 = &puStack_2e8;
  puStack_2e8 = puStack_378;
  puStack_2e0 = (uint *)uStack_370;
  uStack_2d8 = uStack_368;
  auStack_2d0[0] = uStack_360;
  plStack_2c8 = plStack_358;
  if (plStack_358 != (longlong *)0x0) {
    (**(code **)(*plStack_358 + 0x28))();
  }
  FUN_180627ae0(&puStack_2c0,&puStack_350);
  uStack_2a0 = uStack_330;
  uStack_298 = uStack_328;
  plStack_290 = plStack_320;
  if (plStack_320 != (longlong *)0x0) {
    (**(code **)(*plStack_320 + 0x28))();
  }
  puVar7 = (undefined *)FUN_180299eb0(uVar9,param_2,&puStack_2e8,acStack_398);
  if (acStack_398[0] == '\0') {
    uStack_280 = (uint *)CONCAT17(9,(undefined7)uStack_280);
    puStack_288 = puVar7;
    FUN_18029cdd0(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),&puStack_288);
    FUN_18029e110(*(undefined8 *)(_DAT_180c86938 + 0x1cd8));
  }
  uStack_388 = uVar5 | uStack_318;
  uStack_37c = 4;
  plStack_2c8 = (longlong *)0x0;
  ppuStack_390 = &puStack_2c0;
  puStack_2c0 = &UNK_180a3c3e0;
  uStack_2a8 = 0;
  lStack_2b8 = 0;
  uStack_2b0 = 0;
  plStack_290 = (longlong *)0x0;
  uStack_2d8 = CONCAT26(uStack_37a,CONCAT24(4,param_3));
  auStack_2d0[0] = 2;
  uStack_2a0 = 0;
  uStack_298 = 0;
  uStack_380 = param_3;
  puStack_2e8 = puVar2;
  puStack_2e0 = (uint *)uStack_388;
  FUN_1800e10e0(&puStack_378,&puStack_2e8);
  if (plStack_290 != (longlong *)0x0) {
    (**(code **)(*plStack_290 + 0x38))();
  }
  ppuStack_390 = &puStack_2c0;
  puStack_2c0 = &UNK_180a3c3e0;
  if (lStack_2b8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_2b8 = 0;
  uStack_2a8 = uStack_2a8 & 0xffffffff00000000;
  puStack_2c0 = &UNK_18098bcb0;
  if (plStack_2c8 != (longlong *)0x0) {
    (**(code **)(*plStack_2c8 + 0x38))();
  }
  uVar9 = *(undefined8 *)(puVar2 + 0x15b8);
  ppuStack_390 = &puStack_2e8;
  puStack_2e8 = puStack_378;
  puStack_2e0 = (uint *)uStack_370;
  uStack_2d8 = uStack_368;
  auStack_2d0[0] = uStack_360;
  plStack_2c8 = plStack_358;
  if (plStack_358 != (longlong *)0x0) {
    (**(code **)(*plStack_358 + 0x28))();
  }
  FUN_180627ae0(&puStack_2c0,&puStack_350);
  uStack_2a0 = uStack_330;
  uStack_298 = uStack_328;
  plStack_290 = plStack_320;
  if (plStack_320 != (longlong *)0x0) {
    (**(code **)(*plStack_320 + 0x28))();
  }
  puVar7 = (undefined *)FUN_180299eb0(uVar9,param_2,&puStack_2e8,acStack_398);
  if (acStack_398[0] == '\0') {
    uStack_280 = (uint *)CONCAT17(3,(undefined7)uStack_280);
    puStack_288 = puVar7;
    FUN_18029cdd0(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),&puStack_288);
    lVar6 = _DAT_180c86938;
    lVar8 = strnlen(&UNK_180a044c0,0x3f);
    strncpy(lVar6 + 0x1ce0,&UNK_180a044c0,lVar8);
    *(undefined1 *)(lVar8 + 0x1ce0 + lVar6) = 0;
    FUN_18029e110(*(undefined8 *)(_DAT_180c86938 + 0x1cd8));
  }
  if ((*(longlong *)(param_2 + 0x99b8) == 0) ||
     (iVar1 = (int)uStack_2f8, (*(uint *)(*(longlong *)(param_2 + 0x99b8) + 0x98) & 0x2000) == 0)) {
    iVar1 = (int)ppuStack_310;
  }
  uStack_388 = (ulonglong)iVar1;
  uStack_37c = 4;
  plStack_2c8 = (longlong *)0x0;
  ppuStack_390 = &puStack_2c0;
  puStack_2c0 = &UNK_180a3c3e0;
  uStack_2a8 = 0;
  lStack_2b8 = 0;
  uStack_2b0 = 0;
  plStack_290 = (longlong *)0x0;
  uStack_2d8 = CONCAT26(uStack_37a,CONCAT24(4,param_3));
  auStack_2d0[0] = 2;
  uStack_2a0 = 0;
  uStack_298 = 0;
  uStack_380 = param_3;
  puStack_2e8 = puVar2;
  puStack_2e0 = (uint *)uStack_388;
  FUN_1800e10e0(&puStack_378,&puStack_2e8);
  if (plStack_290 != (longlong *)0x0) {
    (**(code **)(*plStack_290 + 0x38))();
  }
  ppuStack_390 = &puStack_2c0;
  puStack_2c0 = &UNK_180a3c3e0;
  if (lStack_2b8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_2b8 = 0;
  uStack_2a8 = uStack_2a8 & 0xffffffff00000000;
  puStack_2c0 = &UNK_18098bcb0;
  if (plStack_2c8 != (longlong *)0x0) {
    (**(code **)(*plStack_2c8 + 0x38))();
  }
  uVar9 = *(undefined8 *)(puVar2 + 0x15b8);
  ppuStack_390 = &puStack_2e8;
  puStack_2e8 = puStack_378;
  puStack_2e0 = (uint *)uStack_370;
  uStack_2d8 = uStack_368;
  auStack_2d0[0] = uStack_360;
  plStack_2c8 = plStack_358;
  if (plStack_358 != (longlong *)0x0) {
    (**(code **)(*plStack_358 + 0x28))();
  }
  FUN_180627ae0(&puStack_2c0,&puStack_350);
  uStack_2a0 = uStack_330;
  uStack_298 = uStack_328;
  plStack_290 = plStack_320;
  if (plStack_320 != (longlong *)0x0) {
    (**(code **)(*plStack_320 + 0x28))();
  }
  puVar2 = (undefined *)FUN_180299eb0(uVar9,param_2,&puStack_2e8,acStack_398);
  uVar9 = extraout_XMM0_Qa;
  if (acStack_398[0] == '\0') {
    uStack_280 = (uint *)CONCAT17(5,(undefined7)uStack_280);
    puStack_288 = puVar2;
    FUN_18029cdd0(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),&puStack_288);
    lVar6 = _DAT_180c86938;
    lVar8 = strnlen(&UNK_180a04510,0x3f);
    strncpy(lVar6 + 0x1ce0,&UNK_180a04510,lVar8);
    *(undefined1 *)(lVar8 + 0x1ce0 + lVar6) = 0;
    uVar9 = FUN_18029e110(*(undefined8 *)(_DAT_180c86938 + 0x1cd8));
  }
  FUN_1800d7470(uVar9,param_2);
  *(undefined1 *)(param_2 + 0x124c6) = 1;
  if (plStack_320 != (longlong *)0x0) {
    (**(code **)(*plStack_320 + 0x38))();
  }
  ppuStack_390 = &puStack_350;
  puStack_350 = &UNK_180a3c3e0;
  if (lStack_348 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_348 = 0;
  uStack_338 = uStack_338 & 0xffffffff00000000;
  puStack_350 = &UNK_18098bcb0;
  if (plStack_358 != (longlong *)0x0) {
    (**(code **)(*plStack_358 + 0x38))();
  }
  _DAT_180c8695c = _DAT_180c8695c + -1;
  (**(code **)(*_DAT_180c86968 + 0x20))();
  FUN_1802c2ac0(&puStack_f8);
  apuStack_98[0] = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_3b8);
}



undefined8 *
FUN_1800e10e0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  *param_1 = *param_2;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 2);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 2) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  uVar1 = param_2[4];
  param_2[4] = 0;
  plVar2 = (longlong *)param_1[4];
  param_1[4] = uVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  FUN_18005d190(param_1 + 5,param_2 + 5,param_3,param_4,uVar6);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x4c);
  uVar4 = *(undefined4 *)(param_2 + 10);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar3;
  *(undefined4 *)(param_1 + 10) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar5;
  uVar1 = param_2[0xb];
  param_2[0xb] = 0;
  plVar2 = (longlong *)param_1[0xb];
  param_1[0xb] = uVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800e1190(undefined8 param_1,longlong param_2)
void FUN_1800e1190(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  undefined1 auStackX_10 [8];
  undefined8 uVar13;
  
  lVar6 = _DAT_180c86938;
  uVar13 = 0xfffffffffffffffe;
  plVar3 = *(longlong **)(_DAT_180c86938 + 0x1cd8);
  plVar9 = *(longlong **)(*(longlong *)(param_2 + 0x12498) + 0x1d8);
  plVar10 = (longlong *)0x0;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    if (_DAT_180c86870 != 0) {
      *(longlong *)(*(longlong *)(param_2 + 0x12498) + 0x340) =
           (longlong)*(int *)(_DAT_180c86870 + 0x224);
    }
    if (*plVar9 != 0) {
      (**(code **)(*plVar3 + 0x70))(plVar3,*plVar9,1);
      lVar6 = _DAT_180c86938;
    }
  }
  plVar3[0x1077] = (longlong)plVar9;
  plVar3 = *(longlong **)(lVar6 + 0x1cd8);
  lVar6 = FUN_180245280(param_2);
  plVar9 = plVar10;
  if (*(longlong *)(lVar6 + 0x1e0) != 0) {
    if (_DAT_180c86870 != 0) {
      *(longlong *)(lVar6 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
    }
    plVar9 = (longlong *)(*(longlong *)(lVar6 + 0x1e0) + 0x10);
    if ((plVar9 != (longlong *)0x0) && (*plVar9 != 0)) {
      (**(code **)(*plVar3 + 0x70))(plVar3,*plVar9,4);
    }
  }
  plVar3[0x107e] = (longlong)plVar9;
  FUN_18029de40(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),1);
  FUN_18029c8a0(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),1,0,0x3f800000,0,0,uVar13);
  FUN_1802c22a0(auStackX_10,&UNK_180a044f8);
  while (iVar11 = (int)plVar10, (ulonglong)(longlong)iVar11 < (ulonglong)*(uint *)(param_2 + 0x2480)
        ) {
    lVar6 = *(longlong *)
             (*(longlong *)(param_2 + 0x2488 + ((ulonglong)plVar10 >> 0xb) * 8) + 0x10 +
             (ulonglong)(uint)(iVar11 + (int)((ulonglong)plVar10 >> 0xb) * -0x800) * 0x18);
    cVar5 = *(char *)(lVar6 + 0x330);
    if (cVar5 != '\x03') {
      uVar1 = *(undefined1 *)(lVar6 + 0xc0);
      uVar13 = *(undefined8 *)(lVar6 + 0x90);
      uVar2 = *(undefined2 *)(lVar6 + 0x98);
      uVar4 = *(undefined8 *)(lVar6 + 0x88);
      if (cVar5 == '\x02') {
        *(undefined2 *)(lVar6 + 0x90) = 0x100;
        cVar5 = func_0x00018024c040(param_2);
        *(char *)(lVar6 + 0x92) = (cVar5 == '\0') + '\x03';
      }
      else if (cVar5 == '\x01') {
        *(undefined2 *)(lVar6 + 0x90) = 0x100;
        *(undefined1 *)(lVar6 + 0x92) = 7;
      }
      *(undefined1 *)(lVar6 + 0xc0) = 0;
      *(undefined4 *)(lVar6 + 0xc4) = 1;
      *(undefined4 *)(lVar6 + 0xa4) = *(undefined4 *)(*(longlong *)(param_2 + 0x12498) + 0x324);
      lVar7 = FUN_180245280(param_2);
      *(undefined4 *)(lVar6 + 0xa0) = *(undefined4 *)(lVar7 + 0x324);
      FUN_1800e8640(param_1,lVar6);
      *(undefined1 *)(lVar6 + 0xc0) = uVar1;
      *(undefined8 *)(lVar6 + 0x90) = uVar13;
      *(undefined2 *)(lVar6 + 0x98) = uVar2;
      *(undefined8 *)(lVar6 + 0x88) = uVar4;
    }
    plVar10 = (longlong *)(ulonglong)(iVar11 + 1);
  }
  for (uVar12 = 0; (ulonglong)(longlong)(int)uVar12 < (ulonglong)*(uint *)(param_2 + 0x2480);
      uVar12 = uVar12 + 1) {
    lVar6 = (ulonglong)(uVar12 & 0x7ff) * 0x18;
    lVar7 = *(longlong *)
             (*(longlong *)(param_2 + 0x2488 + (ulonglong)(uVar12 >> 0xb) * 8) + 0x10 + lVar6);
    if ((byte)(*(char *)(lVar7 + 0x330) - 2U) < 2) {
      uVar1 = *(undefined1 *)(lVar7 + 0xc0);
      uVar13 = *(undefined8 *)(lVar7 + 0x90);
      uVar2 = *(undefined2 *)(lVar7 + 0x98);
      uVar4 = *(undefined8 *)(lVar7 + 0x88);
      iVar11 = *(int *)(_DAT_180c8a9c8 + 0xa10);
      *(undefined2 *)(lVar7 + 0x90) = 0x100;
      if (iVar11 == 0) {
        *(undefined1 *)(lVar7 + 0x92) = 3;
      }
      else {
        *(undefined1 *)(lVar7 + 0x92) = 6;
      }
      *(undefined1 *)(lVar7 + 0xc0) = 0;
      *(undefined4 *)(lVar7 + 0x21c) = 1;
      *(undefined4 *)(lVar7 + 0xc4) = 1;
      *(undefined4 *)(lVar7 + 0xa4) = *(undefined4 *)(*(longlong *)(param_2 + 0x12498) + 0x324);
      lVar8 = FUN_180245280(param_2);
      *(undefined4 *)(lVar7 + 0xa0) = *(undefined4 *)(lVar8 + 0x324);
      FUN_1800e8640(param_1,*(undefined8 *)
                             (*(longlong *)(param_2 + 0x2488 + (ulonglong)(uVar12 >> 0xb) * 8) +
                              0x10 + lVar6));
      *(undefined1 *)(lVar7 + 0xc0) = uVar1;
      *(undefined8 *)(lVar7 + 0x90) = uVar13;
      *(undefined2 *)(lVar7 + 0x98) = uVar2;
      *(undefined8 *)(lVar7 + 0x88) = uVar4;
      *(undefined4 *)(lVar7 + 0x21c) = 0;
    }
  }
  _DAT_180c8695c = _DAT_180c8695c + -1;
                    // WARNING: Could not recover jumptable at 0x0001800e152a. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*_DAT_180c86968 + 0x20))();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




