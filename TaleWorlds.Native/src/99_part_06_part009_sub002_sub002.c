#include "TaleWorlds.Native.Split.h"

// 99_part_06_part009_sub002_sub002.c - 1 个函数

// 函数: void FUN_1803aad40(longlong param_1,longlong param_2,char param_3)
void FUN_1803aad40(longlong param_1,longlong param_2,char param_3)

{
  byte *pbVar1;
  int iVar2;
  longlong ***ppplVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  byte *pbVar10;
  longlong ***ppplVar11;
  undefined *puVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined1 auStack_5d8 [32];
  longlong ***ppplStack_5b8;
  undefined1 *puStack_5b0;
  uint uStack_5a8;
  undefined8 uStack_5a0;
  undefined *puStack_598;
  undefined1 *puStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  uint uStack_578;
  longlong ***ppplStack_570;
  longlong ***ppplStack_568;
  char cStack_560;
  longlong ****pppplStack_558;
  longlong ***ppplStack_550;
  longlong **pplStack_548;
  longlong ****pppplStack_540;
  longlong ***appplStack_538 [2];
  code *pcStack_528;
  undefined *puStack_520;
  undefined8 uStack_518;
  longlong ***ppplStack_510;
  longlong ***ppplStack_508;
  undefined *puStack_4f8;
  undefined1 *puStack_4f0;
  undefined4 uStack_4e8;
  undefined1 auStack_4e0 [136];
  undefined *puStack_458;
  byte *pbStack_450;
  int iStack_448;
  byte abStack_440 [72];
  undefined *puStack_3f8;
  undefined *puStack_3f0;
  int iStack_3e8;
  undefined *puStack_398;
  undefined *puStack_390;
  int iStack_388;
  undefined *puStack_338;
  byte *pbStack_330;
  int iStack_328;
  undefined *puStack_2d8;
  byte *pbStack_2d0;
  int iStack_2c8;
  undefined *puStack_278;
  longlong lStack_270;
  int iStack_268;
  undefined *puStack_218;
  longlong lStack_210;
  int iStack_208;
  undefined *puStack_1b8;
  longlong lStack_1b0;
  int iStack_1a8;
  undefined *apuStack_158 [12];
  undefined *apuStack_f8 [20];
  ulonglong uStack_58;
  
  uStack_518 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_5d8;
  uStack_578 = 0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  uStack_5a0 = 0;
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a8 = 0;
  cStack_560 = param_3;
  FUN_1806277c0(&ppplStack_5b8,_DAT_180bf9220);
  if (0 < _DAT_180bf9220) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf9218 != (undefined *)0x0) {
      puVar12 = _DAT_180bf9218;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_5b0,puVar12,(longlong)(_DAT_180bf9220 + 1));
  }
  if ((_DAT_180bf9218 != (undefined *)0x0) && (uStack_5a8 = 0, puStack_5b0 != (undefined1 *)0x0)) {
    *puStack_5b0 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&ppplStack_5b8,uVar15);
  *(undefined4 *)(param_2 + 0x98) = uVar15;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffffe;
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  if (puStack_5b0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a0 = uStack_5a0 & 0xffffffff00000000;
  ppplStack_5b8 = (longlong ***)&UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  puStack_598 = &UNK_180a3c3e0;
  uStack_580 = (code *)0x0;
  puStack_590 = (undefined1 *)0x0;
  uStack_588 = (code *)((ulonglong)uStack_588._4_4_ << 0x20);
  FUN_1806277c0(&puStack_598,_DAT_180bf9460);
  if (0 < _DAT_180bf9460) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf9458 != (undefined *)0x0) {
      puVar12 = _DAT_180bf9458;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_590,puVar12,(longlong)(_DAT_180bf9460 + 1));
  }
  if ((_DAT_180bf9458 != (undefined *)0x0) &&
     (uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000),
     puStack_590 != (undefined1 *)0x0)) {
    *puStack_590 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&puStack_598,uVar15);
  *(undefined4 *)(param_2 + 0x9c) = uVar15;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffff9;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  puStack_598 = &UNK_180a3c3e0;
  if (puStack_590 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_590 = (undefined1 *)0x0;
  uStack_580 = (code *)((ulonglong)uStack_580 & 0xffffffff00000000);
  puStack_598 = &UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  uStack_5a0 = 0;
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a8 = 0;
  FUN_1806277c0(&ppplStack_5b8,_DAT_180bf9400);
  if (0 < _DAT_180bf9400) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf93f8 != (undefined *)0x0) {
      puVar12 = _DAT_180bf93f8;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_5b0,puVar12,(longlong)(_DAT_180bf9400 + 1));
  }
  if ((_DAT_180bf93f8 != (undefined *)0x0) && (uStack_5a8 = 0, puStack_5b0 != (undefined1 *)0x0)) {
    *puStack_5b0 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&ppplStack_5b8,uVar15);
  *(undefined4 *)(param_2 + 0x1dc) = uVar15;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffffb;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  if (puStack_5b0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a0 = uStack_5a0 & 0xffffffff00000000;
  ppplStack_5b8 = (longlong ***)&UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  puStack_598 = &UNK_180a3c3e0;
  uStack_580 = (code *)0x0;
  puStack_590 = (undefined1 *)0x0;
  uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000);
  FUN_1806277c0(&puStack_598,_DAT_180bf94c0);
  if (0 < _DAT_180bf94c0) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf94b8 != (undefined *)0x0) {
      puVar12 = _DAT_180bf94b8;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_590,puVar12,(longlong)(_DAT_180bf94c0 + 1));
  }
  if ((_DAT_180bf94b8 != (undefined *)0x0) &&
     (uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000),
     puStack_590 != (undefined1 *)0x0)) {
    *puStack_590 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&puStack_598,uVar15);
  *(undefined4 *)(param_2 + 0xa0) = uVar15;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffff9;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  puStack_598 = &UNK_180a3c3e0;
  if (puStack_590 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_590 = (undefined1 *)0x0;
  uStack_580 = (code *)((ulonglong)uStack_580 & 0xffffffff00000000);
  puStack_598 = &UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  uStack_5a0 = 0;
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a8 = 0;
  FUN_1806277c0(&ppplStack_5b8,_DAT_180bf91c0);
  if (0 < _DAT_180bf91c0) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf91b8 != (undefined *)0x0) {
      puVar12 = _DAT_180bf91b8;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_5b0,puVar12,(longlong)(_DAT_180bf91c0 + 1));
  }
  if ((_DAT_180bf91b8 != (undefined *)0x0) && (uStack_5a8 = 0, puStack_5b0 != (undefined1 *)0x0)) {
    *puStack_5b0 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&ppplStack_5b8,uVar15);
  *(undefined4 *)(param_2 + 0xac) = uVar15;
  *(undefined4 *)(param_2 + 0x310) = uVar15;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffff8;
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  if (puStack_5b0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a0 = uStack_5a0 & 0xffffffff00000000;
  ppplStack_5b8 = (longlong ***)&UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  puStack_598 = &UNK_180a3c3e0;
  uStack_580 = (code *)0x0;
  puStack_590 = (undefined1 *)0x0;
  uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000);
  FUN_1806277c0(&puStack_598,_DAT_180bf93a0);
  if (0 < _DAT_180bf93a0) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf9398 != (undefined *)0x0) {
      puVar12 = _DAT_180bf9398;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_590,puVar12,(longlong)(_DAT_180bf93a0 + 1));
  }
  if ((_DAT_180bf9398 != (undefined *)0x0) &&
     (uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000),
     puStack_590 != (undefined1 *)0x0)) {
    *puStack_590 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&puStack_598,uVar15);
  *(undefined4 *)(param_2 + 0xb0) = uVar15;
  *(undefined4 *)(param_2 + 0x310) = uVar15;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffffb;
  puStack_598 = &UNK_180a3c3e0;
  if (puStack_590 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_590 = (undefined1 *)0x0;
  uStack_580 = (code *)((ulonglong)uStack_580 & 0xffffffff00000000);
  puStack_598 = &UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  uStack_5a0 = 0;
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a8 = 0;
  FUN_1806277c0(&ppplStack_5b8,_DAT_180bf92e0);
  if (0 < _DAT_180bf92e0) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf92d8 != (undefined *)0x0) {
      puVar12 = _DAT_180bf92d8;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_5b0,puVar12,(longlong)(_DAT_180bf92e0 + 1));
  }
  if ((_DAT_180bf92d8 != (undefined *)0x0) && (uStack_5a8 = 0, puStack_5b0 != (undefined1 *)0x0)) {
    *puStack_5b0 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&ppplStack_5b8,uVar15);
  *(undefined4 *)(param_2 + 0xb4) = uVar15;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffffa;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  if (puStack_5b0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a0 = uStack_5a0 & 0xffffffff00000000;
  ppplStack_5b8 = (longlong ***)&UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  puStack_598 = &UNK_180a3c3e0;
  uStack_580 = (code *)0x0;
  puStack_590 = (undefined1 *)0x0;
  uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000);
  FUN_1806277c0(&puStack_598,_DAT_180bf9520);
  if (0 < _DAT_180bf9520) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf9518 != (undefined *)0x0) {
      puVar12 = _DAT_180bf9518;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_590,puVar12,(longlong)(_DAT_180bf9520 + 1));
  }
  if ((_DAT_180bf9518 != (undefined *)0x0) &&
     (uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000),
     puStack_590 != (undefined1 *)0x0)) {
    *puStack_590 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&puStack_598,uVar15);
  *(undefined4 *)(param_2 + 0xbc) = uVar15;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffffa;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  puStack_598 = &UNK_180a3c3e0;
  if (puStack_590 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_590 = (undefined1 *)0x0;
  uStack_580 = (code *)((ulonglong)uStack_580 & 0xffffffff00000000);
  puStack_598 = &UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  uStack_5a0 = 0;
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a8 = 0;
  FUN_1806277c0(&ppplStack_5b8,_DAT_180bf9340);
  if (0 < _DAT_180bf9340) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf9338 != (undefined *)0x0) {
      puVar12 = _DAT_180bf9338;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_5b0,puVar12,(longlong)(_DAT_180bf9340 + 1));
  }
  if ((_DAT_180bf9338 != (undefined *)0x0) && (uStack_5a8 = 0, puStack_5b0 != (undefined1 *)0x0)) {
    *puStack_5b0 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&ppplStack_5b8,uVar15);
  *(undefined4 *)(param_2 + 0xc0) = uVar15;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  if (puStack_5b0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a0 = uStack_5a0 & 0xffffffff00000000;
  ppplStack_5b8 = (longlong ***)&UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  puStack_598 = &UNK_180a3c3e0;
  uStack_580 = (code *)0x0;
  puStack_590 = (undefined1 *)0x0;
  uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000);
  FUN_1806277c0(&puStack_598,_DAT_180bf9580);
  if (0 < _DAT_180bf9580) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf9578 != (undefined *)0x0) {
      puVar12 = _DAT_180bf9578;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_590,puVar12,(longlong)(_DAT_180bf9580 + 1));
  }
  if ((_DAT_180bf9578 != (undefined *)0x0) &&
     (uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000),
     puStack_590 != (undefined1 *)0x0)) {
    *puStack_590 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&puStack_598,uVar15);
  *(undefined4 *)(param_2 + 0xa4) = uVar15;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffff9;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  puStack_598 = &UNK_180a3c3e0;
  if (puStack_590 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_590 = (undefined1 *)0x0;
  uStack_580 = (code *)((ulonglong)uStack_580 & 0xffffffff00000000);
  puStack_598 = &UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  uStack_5a0 = 0;
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a8 = 0;
  FUN_1806277c0(&ppplStack_5b8,_DAT_180bf95e0);
  if (0 < _DAT_180bf95e0) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf95d8 != (undefined *)0x0) {
      puVar12 = _DAT_180bf95d8;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_5b0,puVar12,(longlong)(_DAT_180bf95e0 + 1));
  }
  if ((_DAT_180bf95d8 != (undefined *)0x0) && (uStack_5a8 = 0, puStack_5b0 != (undefined1 *)0x0)) {
    *puStack_5b0 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&ppplStack_5b8,uVar15);
  *(undefined4 *)(param_2 + 0xa8) = uVar15;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffff9;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  if (puStack_5b0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a0 = uStack_5a0 & 0xffffffff00000000;
  ppplStack_5b8 = (longlong ***)&UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  puStack_598 = &UNK_180a3c3e0;
  uStack_580 = (code *)0x0;
  puStack_590 = (undefined1 *)0x0;
  uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000);
  FUN_1806277c0(&puStack_598,_DAT_180bf96a0);
  if (0 < _DAT_180bf96a0) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf9698 != (undefined *)0x0) {
      puVar12 = _DAT_180bf9698;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_590,puVar12,(longlong)(_DAT_180bf96a0 + 1));
  }
  if ((_DAT_180bf9698 != (undefined *)0x0) &&
     (uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000),
     puStack_590 != (undefined1 *)0x0)) {
    *puStack_590 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&puStack_598,uVar15);
  *(undefined4 *)(param_2 + 0x114) = uVar15;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffffb;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  puStack_598 = &UNK_180a3c3e0;
  if (puStack_590 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_590 = (undefined1 *)0x0;
  uStack_580 = (code *)((ulonglong)uStack_580 & 0xffffffff00000000);
  puStack_598 = &UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  uStack_5a0 = 0;
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a8 = 0;
  FUN_1806277c0(&ppplStack_5b8,_DAT_180bf9700);
  if (0 < _DAT_180bf9700) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf96f8 != (undefined *)0x0) {
      puVar12 = _DAT_180bf96f8;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_5b0,puVar12,(longlong)(_DAT_180bf9700 + 1));
  }
  if ((_DAT_180bf96f8 != (undefined *)0x0) && (uStack_5a8 = 0, puStack_5b0 != (undefined1 *)0x0)) {
    *puStack_5b0 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&ppplStack_5b8,uVar15);
  *(undefined4 *)(param_2 + 0x118) = uVar15;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffffb;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  if (puStack_5b0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a0 = uStack_5a0 & 0xffffffff00000000;
  ppplStack_5b8 = (longlong ***)&UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  puStack_598 = &UNK_180a3c3e0;
  uStack_580 = (code *)0x0;
  puStack_590 = (undefined1 *)0x0;
  uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000);
  FUN_1806277c0(&puStack_598,_DAT_180bf9760);
  if (0 < _DAT_180bf9760) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf9758 != (undefined *)0x0) {
      puVar12 = _DAT_180bf9758;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_590,puVar12,(longlong)(_DAT_180bf9760 + 1));
  }
  if ((_DAT_180bf9758 != (undefined *)0x0) &&
     (uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000),
     puStack_590 != (undefined1 *)0x0)) {
    *puStack_590 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&puStack_598,uVar15);
  *(undefined4 *)(param_2 + 0x2e0) = uVar15;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffffb;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  puStack_598 = &UNK_180a3c3e0;
  if (puStack_590 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_590 = (undefined1 *)0x0;
  uStack_580 = (code *)((ulonglong)uStack_580 & 0xffffffff00000000);
  puStack_598 = &UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  uStack_5a0 = 0;
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a8 = 0;
  FUN_1806277c0(&ppplStack_5b8,_DAT_180bf97c0);
  if (0 < _DAT_180bf97c0) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf97b8 != (undefined *)0x0) {
      puVar12 = _DAT_180bf97b8;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_5b0,puVar12,(longlong)(_DAT_180bf97c0 + 1));
  }
  if ((_DAT_180bf97b8 != (undefined *)0x0) && (uStack_5a8 = 0, puStack_5b0 != (undefined1 *)0x0)) {
    *puStack_5b0 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&ppplStack_5b8,uVar15);
  *(undefined4 *)(param_2 + 0x2e4) = uVar15;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffffb;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  if (puStack_5b0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a0 = uStack_5a0 & 0xffffffff00000000;
  ppplStack_5b8 = (longlong ***)&UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  puStack_598 = &UNK_180a3c3e0;
  uStack_580 = (code *)0x0;
  puStack_590 = (undefined1 *)0x0;
  uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000);
  FUN_1806277c0(&puStack_598,_DAT_180bf9820);
  if (0 < _DAT_180bf9820) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf9818 != (undefined *)0x0) {
      puVar12 = _DAT_180bf9818;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_590,puVar12,(longlong)(_DAT_180bf9820 + 1));
  }
  if ((_DAT_180bf9818 != (undefined *)0x0) &&
     (uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000),
     puStack_590 != (undefined1 *)0x0)) {
    *puStack_590 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&puStack_598,uVar15);
  *(undefined4 *)(param_2 + 0x2e8) = uVar15;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffffb;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  puStack_598 = &UNK_180a3c3e0;
  if (puStack_590 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_590 = (undefined1 *)0x0;
  uStack_580 = (code *)((ulonglong)uStack_580 & 0xffffffff00000000);
  puStack_598 = &UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  uStack_5a0 = 0;
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a8 = 0;
  FUN_1806277c0(&ppplStack_5b8,_DAT_180bf9880);
  if (0 < _DAT_180bf9880) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf9878 != (undefined *)0x0) {
      puVar12 = _DAT_180bf9878;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_5b0,puVar12,(longlong)(_DAT_180bf9880 + 1));
  }
  if ((_DAT_180bf9878 != (undefined *)0x0) && (uStack_5a8 = 0, puStack_5b0 != (undefined1 *)0x0)) {
    *puStack_5b0 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&ppplStack_5b8,uVar15);
  *(undefined4 *)(param_2 + 0x2d4) = uVar15;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffffb;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  if (puStack_5b0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a0 = uStack_5a0 & 0xffffffff00000000;
  ppplStack_5b8 = (longlong ***)&UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  puStack_598 = &UNK_180a3c3e0;
  uStack_580 = (code *)0x0;
  puStack_590 = (undefined1 *)0x0;
  uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000);
  FUN_1806277c0(&puStack_598,_DAT_180bf98e0);
  if (0 < _DAT_180bf98e0) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf98d8 != (undefined *)0x0) {
      puVar12 = _DAT_180bf98d8;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_590,puVar12,(longlong)(_DAT_180bf98e0 + 1));
  }
  if ((_DAT_180bf98d8 != (undefined *)0x0) &&
     (uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000),
     puStack_590 != (undefined1 *)0x0)) {
    *puStack_590 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&puStack_598,uVar15);
  *(undefined4 *)(param_2 + 0x2d0) = uVar15;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffffb;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  puStack_598 = &UNK_180a3c3e0;
  if (puStack_590 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_590 = (undefined1 *)0x0;
  uStack_580 = (code *)((ulonglong)uStack_580 & 0xffffffff00000000);
  puStack_598 = &UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  uStack_5a0 = 0;
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a8 = 0;
  FUN_1806277c0(&ppplStack_5b8,_DAT_180bf9940);
  if (0 < _DAT_180bf9940) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf9938 != (undefined *)0x0) {
      puVar12 = _DAT_180bf9938;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_5b0,puVar12,(longlong)(_DAT_180bf9940 + 1));
  }
  if ((_DAT_180bf9938 != (undefined *)0x0) && (uStack_5a8 = 0, puStack_5b0 != (undefined1 *)0x0)) {
    *puStack_5b0 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&ppplStack_5b8,uVar15);
  *(undefined4 *)(param_2 + 0x2d8) = uVar15;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffffb;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  if (puStack_5b0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a0 = uStack_5a0 & 0xffffffff00000000;
  ppplStack_5b8 = (longlong ***)&UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  puStack_598 = &UNK_180a3c3e0;
  uStack_580 = (code *)0x0;
  puStack_590 = (undefined1 *)0x0;
  uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000);
  FUN_1806277c0(&puStack_598,_DAT_180bf99a0);
  if (0 < _DAT_180bf99a0) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf9998 != (undefined *)0x0) {
      puVar12 = _DAT_180bf9998;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_590,puVar12,(longlong)(_DAT_180bf99a0 + 1));
  }
  if ((_DAT_180bf9998 != (undefined *)0x0) &&
     (uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000),
     puStack_590 != (undefined1 *)0x0)) {
    *puStack_590 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&puStack_598,uVar15);
  *(undefined4 *)(param_2 + 0x1d4) = uVar15;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffffb;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  puStack_598 = &UNK_180a3c3e0;
  if (puStack_590 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_590 = (undefined1 *)0x0;
  uStack_580 = (code *)((ulonglong)uStack_580 & 0xffffffff00000000);
  puStack_598 = &UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  uStack_5a0 = 0;
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a8 = 0;
  FUN_1806277c0(&ppplStack_5b8,_DAT_180bf9a00);
  if (0 < _DAT_180bf9a00) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf99f8 != (undefined *)0x0) {
      puVar12 = _DAT_180bf99f8;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_5b0,puVar12,(longlong)(_DAT_180bf9a00 + 1));
  }
  if ((_DAT_180bf99f8 != (undefined *)0x0) && (uStack_5a8 = 0, puStack_5b0 != (undefined1 *)0x0)) {
    *puStack_5b0 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&ppplStack_5b8,uVar15);
  *(undefined4 *)(param_2 + 0x1d0) = uVar15;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffffb;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  if (puStack_5b0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a0 = uStack_5a0 & 0xffffffff00000000;
  ppplStack_5b8 = (longlong ***)&UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  puStack_598 = &UNK_180a3c3e0;
  uStack_580 = (code *)0x0;
  puStack_590 = (undefined1 *)0x0;
  uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000);
  FUN_1806277c0(&puStack_598,_DAT_180bf9a60);
  if (0 < _DAT_180bf9a60) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf9a58 != (undefined *)0x0) {
      puVar12 = _DAT_180bf9a58;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_590,puVar12,(longlong)(_DAT_180bf9a60 + 1));
  }
  if ((_DAT_180bf9a58 != (undefined *)0x0) &&
     (uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000),
     puStack_590 != (undefined1 *)0x0)) {
    *puStack_590 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&puStack_598,uVar15);
  *(undefined4 *)(param_2 + 0x1e0) = uVar15;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffffb;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  puStack_598 = &UNK_180a3c3e0;
  if (puStack_590 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_590 = (undefined1 *)0x0;
  uStack_580 = (code *)((ulonglong)uStack_580 & 0xffffffff00000000);
  puStack_598 = &UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  uStack_5a0 = 0;
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a8 = 0;
  FUN_1806277c0(&ppplStack_5b8,_DAT_180bf9ac0);
  if (0 < _DAT_180bf9ac0) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf9ab8 != (undefined *)0x0) {
      puVar12 = _DAT_180bf9ab8;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_5b0,puVar12,(longlong)(_DAT_180bf9ac0 + 1));
  }
  if ((_DAT_180bf9ab8 != (undefined *)0x0) && (uStack_5a8 = 0, puStack_5b0 != (undefined1 *)0x0)) {
    *puStack_5b0 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&ppplStack_5b8,uVar15);
  *(undefined4 *)(param_2 + 0x1e4) = uVar15;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffffb;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  if (puStack_5b0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a0 = uStack_5a0 & 0xffffffff00000000;
  ppplStack_5b8 = (longlong ***)&UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  puStack_598 = &UNK_180a3c3e0;
  uStack_580 = (code *)0x0;
  puStack_590 = (undefined1 *)0x0;
  uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000);
  FUN_1806277c0(&puStack_598,_DAT_180bf9b80);
  if (0 < _DAT_180bf9b80) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf9b78 != (undefined *)0x0) {
      puVar12 = _DAT_180bf9b78;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_590,puVar12,(longlong)(_DAT_180bf9b80 + 1));
  }
  if ((_DAT_180bf9b78 != (undefined *)0x0) &&
     (uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000),
     puStack_590 != (undefined1 *)0x0)) {
    *puStack_590 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&puStack_598,uVar15);
  *(undefined4 *)(param_2 + 0x2ec) = uVar15;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  puStack_598 = &UNK_180a3c3e0;
  if (puStack_590 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_590 = (undefined1 *)0x0;
  uStack_580 = (code *)((ulonglong)uStack_580 & 0xffffffff00000000);
  puStack_598 = &UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  uStack_5a0 = 0;
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a8 = 0;
  FUN_1806277c0(&ppplStack_5b8,_DAT_180bf9be0);
  if (0 < _DAT_180bf9be0) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf9bd8 != (undefined *)0x0) {
      puVar12 = _DAT_180bf9bd8;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_5b0,puVar12,(longlong)(_DAT_180bf9be0 + 1));
  }
  if ((_DAT_180bf9bd8 != (undefined *)0x0) && (uStack_5a8 = 0, puStack_5b0 != (undefined1 *)0x0)) {
    *puStack_5b0 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&ppplStack_5b8,uVar15);
  *(undefined4 *)(param_2 + 0x2f0) = uVar15;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  if (puStack_5b0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a0 = uStack_5a0 & 0xffffffff00000000;
  ppplStack_5b8 = (longlong ***)&UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  puStack_598 = &UNK_180a3c3e0;
  uStack_580 = (code *)0x0;
  puStack_590 = (undefined1 *)0x0;
  uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000);
  FUN_1806277c0(&puStack_598,_DAT_180bf9c40);
  if (0 < _DAT_180bf9c40) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf9c38 != (undefined *)0x0) {
      puVar12 = _DAT_180bf9c38;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_590,puVar12,(longlong)(_DAT_180bf9c40 + 1));
  }
  if ((_DAT_180bf9c38 != (undefined *)0x0) &&
     (uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000),
     puStack_590 != (undefined1 *)0x0)) {
    *puStack_590 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&puStack_598,uVar15);
  *(undefined4 *)(param_2 + 0x2f4) = uVar15;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  puStack_598 = &UNK_180a3c3e0;
  if (puStack_590 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_590 = (undefined1 *)0x0;
  uStack_580 = (code *)((ulonglong)uStack_580 & 0xffffffff00000000);
  puStack_598 = &UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  uStack_5a0 = 0;
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a8 = 0;
  FUN_1806277c0(&ppplStack_5b8,_DAT_180bf9ca0);
  if (0 < _DAT_180bf9ca0) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf9c98 != (undefined *)0x0) {
      puVar12 = _DAT_180bf9c98;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_5b0,puVar12,(longlong)(_DAT_180bf9ca0 + 1));
  }
  if ((_DAT_180bf9c98 != (undefined *)0x0) && (uStack_5a8 = 0, puStack_5b0 != (undefined1 *)0x0)) {
    *puStack_5b0 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&ppplStack_5b8,uVar15);
  *(undefined4 *)(param_2 + 0x2f8) = uVar15;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  if (puStack_5b0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a0 = uStack_5a0 & 0xffffffff00000000;
  ppplStack_5b8 = (longlong ***)&UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  puStack_598 = &UNK_180a3c3e0;
  uStack_580 = (code *)0x0;
  puStack_590 = (undefined1 *)0x0;
  uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000);
  FUN_1806277c0(&puStack_598,_DAT_180bf9d00);
  if (0 < _DAT_180bf9d00) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf9cf8 != (undefined *)0x0) {
      puVar12 = _DAT_180bf9cf8;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_590,puVar12,(longlong)(_DAT_180bf9d00 + 1));
  }
  if ((_DAT_180bf9cf8 != (undefined *)0x0) &&
     (uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000),
     puStack_590 != (undefined1 *)0x0)) {
    *puStack_590 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&puStack_598,uVar15);
  *(undefined4 *)(param_2 + 0x2fc) = uVar15;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  puStack_598 = &UNK_180a3c3e0;
  if (puStack_590 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_590 = (undefined1 *)0x0;
  uStack_580 = (code *)((ulonglong)uStack_580 & 0xffffffff00000000);
  puStack_598 = &UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  uStack_5a0 = 0;
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a8 = 0;
  FUN_1806277c0(&ppplStack_5b8,_DAT_180bf9d60);
  if (0 < _DAT_180bf9d60) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf9d58 != (undefined *)0x0) {
      puVar12 = _DAT_180bf9d58;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_5b0,puVar12,(longlong)(_DAT_180bf9d60 + 1));
  }
  if ((_DAT_180bf9d58 != (undefined *)0x0) && (uStack_5a8 = 0, puStack_5b0 != (undefined1 *)0x0)) {
    *puStack_5b0 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&ppplStack_5b8,uVar15);
  *(undefined4 *)(param_2 + 0x300) = uVar15;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  if (puStack_5b0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a0 = uStack_5a0 & 0xffffffff00000000;
  ppplStack_5b8 = (longlong ***)&UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  puStack_598 = &UNK_180a3c3e0;
  uStack_580 = (code *)0x0;
  puStack_590 = (undefined1 *)0x0;
  uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000);
  FUN_1806277c0(&puStack_598,_DAT_180bf9dc0);
  if (0 < _DAT_180bf9dc0) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf9db8 != (undefined *)0x0) {
      puVar12 = _DAT_180bf9db8;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_590,puVar12,(longlong)(_DAT_180bf9dc0 + 1));
  }
  if ((_DAT_180bf9db8 != (undefined *)0x0) &&
     (uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000),
     puStack_590 != (undefined1 *)0x0)) {
    *puStack_590 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&puStack_598,uVar15);
  *(undefined4 *)(param_2 + 0x1d8) = uVar15;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffffb;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  puStack_598 = &UNK_180a3c3e0;
  if (puStack_590 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_590 = (undefined1 *)0x0;
  uStack_580 = (code *)((ulonglong)uStack_580 & 0xffffffff00000000);
  puStack_598 = &UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  uStack_5a0 = 0;
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a8 = 0;
  FUN_1806277c0(&ppplStack_5b8,_DAT_180bf9e20);
  if (0 < _DAT_180bf9e20) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf9e18 != (undefined *)0x0) {
      puVar12 = _DAT_180bf9e18;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_5b0,puVar12,(longlong)(_DAT_180bf9e20 + 1));
  }
  if ((_DAT_180bf9e18 != (undefined *)0x0) && (uStack_5a8 = 0, puStack_5b0 != (undefined1 *)0x0)) {
    *puStack_5b0 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&ppplStack_5b8,uVar15);
  *(undefined4 *)(param_2 + 0x1ec) = uVar15;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffffb;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  if (puStack_5b0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a0 = uStack_5a0 & 0xffffffff00000000;
  ppplStack_5b8 = (longlong ***)&UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  puStack_598 = &UNK_180a3c3e0;
  uStack_580 = (code *)0x0;
  puStack_590 = (undefined1 *)0x0;
  uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000);
  FUN_1806277c0(&puStack_598,_DAT_180bf9e80);
  if (0 < _DAT_180bf9e80) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf9e78 != (undefined *)0x0) {
      puVar12 = _DAT_180bf9e78;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_590,puVar12,(longlong)(_DAT_180bf9e80 + 1));
  }
  if ((_DAT_180bf9e78 != (undefined *)0x0) &&
     (uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000),
     puStack_590 != (undefined1 *)0x0)) {
    *puStack_590 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&puStack_598,uVar15);
  *(undefined4 *)(param_2 + 0x1f0) = uVar15;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffffb;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  puStack_598 = &UNK_180a3c3e0;
  if (puStack_590 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_590 = (undefined1 *)0x0;
  uStack_580 = (code *)((ulonglong)uStack_580 & 0xffffffff00000000);
  puStack_598 = &UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  uStack_5a0 = 0;
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a8 = 0;
  FUN_1806277c0(&ppplStack_5b8,_DAT_180bf9ee0);
  if (0 < _DAT_180bf9ee0) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf9ed8 != (undefined *)0x0) {
      puVar12 = _DAT_180bf9ed8;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_5b0,puVar12,(longlong)(_DAT_180bf9ee0 + 1));
  }
  if ((_DAT_180bf9ed8 != (undefined *)0x0) && (uStack_5a8 = 0, puStack_5b0 != (undefined1 *)0x0)) {
    *puStack_5b0 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&ppplStack_5b8,uVar15);
  *(undefined4 *)(param_2 + 500) = uVar15;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffffb;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  if (puStack_5b0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a0 = uStack_5a0 & 0xffffffff00000000;
  ppplStack_5b8 = (longlong ***)&UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  puStack_598 = &UNK_180a3c3e0;
  uStack_580 = (code *)0x0;
  puStack_590 = (undefined1 *)0x0;
  uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000);
  FUN_1806277c0(&puStack_598,_DAT_180bf9f40);
  if (0 < _DAT_180bf9f40) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf9f38 != (undefined *)0x0) {
      puVar12 = _DAT_180bf9f38;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_590,puVar12,(longlong)(_DAT_180bf9f40 + 1));
  }
  if ((_DAT_180bf9f38 != (undefined *)0x0) &&
     (uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000),
     puStack_590 != (undefined1 *)0x0)) {
    *puStack_590 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&puStack_598,uVar15);
  *(undefined4 *)(param_2 + 0x1e8) = uVar15;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffffb;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  puStack_598 = &UNK_180a3c3e0;
  if (puStack_590 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_590 = (undefined1 *)0x0;
  uStack_580 = (code *)((ulonglong)uStack_580 & 0xffffffff00000000);
  puStack_598 = &UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  uStack_5a0 = 0;
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a8 = 0;
  FUN_1806277c0(&ppplStack_5b8,_DAT_180bf9fa0);
  if (0 < _DAT_180bf9fa0) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf9f98 != (undefined *)0x0) {
      puVar12 = _DAT_180bf9f98;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_5b0,puVar12,(longlong)(_DAT_180bf9fa0 + 1));
  }
  if ((_DAT_180bf9f98 != (undefined *)0x0) && (uStack_5a8 = 0, puStack_5b0 != (undefined1 *)0x0)) {
    *puStack_5b0 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&ppplStack_5b8,uVar15);
  *(undefined4 *)(param_2 + 0x1f8) = uVar15;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffffb;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  if (puStack_5b0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a0 = uStack_5a0 & 0xffffffff00000000;
  ppplStack_5b8 = (longlong ***)&UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  puStack_598 = &UNK_180a3c3e0;
  uStack_580 = (code *)0x0;
  puStack_590 = (undefined1 *)0x0;
  uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000);
  FUN_1806277c0(&puStack_598,_DAT_180bfa000);
  if (0 < _DAT_180bfa000) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf9ff8 != (undefined *)0x0) {
      puVar12 = _DAT_180bf9ff8;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_590,puVar12,(longlong)(_DAT_180bfa000 + 1));
  }
  if ((_DAT_180bf9ff8 != (undefined *)0x0) &&
     (uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000),
     puStack_590 != (undefined1 *)0x0)) {
    *puStack_590 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&puStack_598,uVar15);
  *(undefined4 *)(param_2 + 0x1fc) = uVar15;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffffb;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  puStack_598 = &UNK_180a3c3e0;
  if (puStack_590 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_590 = (undefined1 *)0x0;
  uStack_580 = (code *)((ulonglong)uStack_580 & 0xffffffff00000000);
  puStack_598 = &UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  uStack_5a0 = 0;
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a8 = 0;
  FUN_1806277c0(&ppplStack_5b8,_DAT_180bfa060);
  if (0 < _DAT_180bfa060) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bfa058 != (undefined *)0x0) {
      puVar12 = _DAT_180bfa058;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_5b0,puVar12,(longlong)(_DAT_180bfa060 + 1));
  }
  if ((_DAT_180bfa058 != (undefined *)0x0) && (uStack_5a8 = 0, puStack_5b0 != (undefined1 *)0x0)) {
    *puStack_5b0 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&ppplStack_5b8,uVar15);
  *(undefined4 *)(param_2 + 0x200) = uVar15;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffffb;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  if (puStack_5b0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a0 = uStack_5a0 & 0xffffffff00000000;
  ppplStack_5b8 = (longlong ***)&UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  puStack_598 = &UNK_180a3c3e0;
  uStack_580 = (code *)0x0;
  puStack_590 = (undefined1 *)0x0;
  uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000);
  FUN_1806277c0(&puStack_598,_DAT_180bfa0c0);
  if (0 < _DAT_180bfa0c0) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bfa0b8 != (undefined *)0x0) {
      puVar12 = _DAT_180bfa0b8;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_590,puVar12,(longlong)(_DAT_180bfa0c0 + 1));
  }
  if ((_DAT_180bfa0b8 != (undefined *)0x0) &&
     (uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000),
     puStack_590 != (undefined1 *)0x0)) {
    *puStack_590 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&puStack_598,uVar15);
  *(undefined4 *)(param_2 + 0x204) = uVar15;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffffb;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  puStack_598 = &UNK_180a3c3e0;
  if (puStack_590 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_590 = (undefined1 *)0x0;
  uStack_580 = (code *)((ulonglong)uStack_580 & 0xffffffff00000000);
  puStack_598 = &UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  uStack_5a0 = 0;
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a8 = 0;
  FUN_1806277c0(&ppplStack_5b8,_DAT_180bfa2a0);
  if (0 < _DAT_180bfa2a0) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bfa298 != (undefined *)0x0) {
      puVar12 = _DAT_180bfa298;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_5b0,puVar12,(longlong)(_DAT_180bfa2a0 + 1));
  }
  if ((_DAT_180bfa298 != (undefined *)0x0) && (uStack_5a8 = 0, puStack_5b0 != (undefined1 *)0x0)) {
    *puStack_5b0 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&ppplStack_5b8,uVar15);
  *(undefined4 *)(param_2 + 0x1b8) = uVar15;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffffb;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  if (puStack_5b0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a0 = uStack_5a0 & 0xffffffff00000000;
  ppplStack_5b8 = (longlong ***)&UNK_18098bcb0;
  uVar9 = *(undefined8 *)(param_1 + 0xe20);
  uVar15 = *(undefined4 *)(param_1 + 0xe1c);
  puStack_598 = &UNK_180a3c3e0;
  uStack_580 = (code *)0x0;
  puStack_590 = (undefined1 *)0x0;
  uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000);
  FUN_1806277c0(&puStack_598,_DAT_180bf9b20);
  if (0 < _DAT_180bf9b20) {
    puVar12 = &DAT_18098bc73;
    if (_DAT_180bf9b18 != (undefined *)0x0) {
      puVar12 = _DAT_180bf9b18;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_590,puVar12,(longlong)(_DAT_180bf9b20 + 1));
  }
  if ((_DAT_180bf9b18 != (undefined *)0x0) &&
     (uStack_588 = (code *)((ulonglong)uStack_588 & 0xffffffff00000000),
     puStack_590 != (undefined1 *)0x0)) {
    *puStack_590 = 0;
  }
  uVar15 = FUN_180418550(uVar9,&puStack_598,uVar15);
  *(undefined4 *)(param_2 + 0x2dc) = uVar15;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffffb;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  puStack_598 = &UNK_180a3c3e0;
  if (puStack_590 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_590 = (undefined1 *)0x0;
  uStack_580 = (code *)((ulonglong)uStack_580 & 0xffffffff00000000);
  puStack_598 = &UNK_18098bcb0;
  fVar16 = 0.004166667;
  puVar6 = (undefined4 *)
           func_0x0001802bfbb0(param_1 + 8,&ppplStack_5b8,*(float *)(param_1 + 0xe1c) * 0.004166667)
  ;
  uVar15 = puVar6[1];
  uVar4 = puVar6[2];
  uVar5 = puVar6[3];
  *(undefined4 *)(param_2 + 0xc4) = *puVar6;
  *(undefined4 *)(param_2 + 200) = uVar15;
  *(undefined4 *)(param_2 + 0xcc) = uVar4;
  *(undefined4 *)(param_2 + 0xd0) = uVar5;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  iVar2 = *(int *)(param_2 + 0x340);
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffffb;
  uVar14 = *(uint *)(param_2 + 0x30c);
  puVar6 = (undefined4 *)
           func_0x0001802bfbb0(param_1 + 0x368,&ppplStack_5b8,*(float *)(param_1 + 0xe1c) * fVar16);
  uVar15 = puVar6[1];
  uVar4 = puVar6[2];
  uVar5 = puVar6[3];
  *(undefined4 *)(param_2 + 0xf4) = *puVar6;
  *(undefined4 *)(param_2 + 0xf8) = uVar15;
  *(undefined4 *)(param_2 + 0xfc) = uVar4;
  *(undefined4 *)(param_2 + 0x100) = uVar5;
  uVar14 = uVar14 & 0xfffffffb;
  *(uint *)(param_2 + 0x30c) = uVar14;
  *(int *)(param_2 + 0x340) = iVar2 + 1;
  puVar6 = (undefined4 *)
           func_0x0001802bfbb0(param_1 + 0x6c8,&ppplStack_5b8,*(float *)(param_1 + 0xe1c) * fVar16);
  uVar15 = puVar6[1];
  uVar4 = puVar6[2];
  uVar5 = puVar6[3];
  *(undefined4 *)(param_2 + 0xe4) = *puVar6;
  *(undefined4 *)(param_2 + 0xe8) = uVar15;
  *(undefined4 *)(param_2 + 0xec) = uVar4;
  *(undefined4 *)(param_2 + 0xf0) = uVar5;
  *(uint *)(param_2 + 0x30c) = uVar14;
  *(int *)(param_2 + 0x340) = iVar2 + 2;
  puVar6 = (undefined4 *)
           func_0x0001802bfbb0(param_1 + 0xa28,&ppplStack_5b8,*(float *)(param_1 + 0xe1c) * fVar16);
  uVar15 = puVar6[1];
  uVar4 = puVar6[2];
  uVar5 = puVar6[3];
  *(undefined4 *)(param_2 + 0x1c0) = *puVar6;
  *(undefined4 *)(param_2 + 0x1c4) = uVar15;
  *(undefined4 *)(param_2 + 0x1c8) = uVar4;
  *(undefined4 *)(param_2 + 0x1cc) = uVar5;
  *(uint *)(param_2 + 0x30c) = uVar14;
  *(int *)(param_2 + 0x340) = iVar2 + 3;
  FUN_180417a90(param_1 + 0xd88,&puStack_398,*(undefined4 *)(param_1 + 0xe1c));
  FUN_180417a90(param_1 + 0xdb8,&puStack_3f8,*(undefined4 *)(param_1 + 0xe1c));
  FUN_180417a90(param_1 + 0xde8,apuStack_158,*(undefined4 *)(param_1 + 0xe1c));
  ppplVar3 = *(longlong ****)(param_2 + 0x68);
  ppplStack_510 = ppplVar3;
  if (ppplVar3 != (longlong ***)0x0) {
    (*(code *)(*ppplVar3)[5])(ppplVar3);
  }
  FUN_1800b08e0(_DAT_180c86930,&ppplStack_550,&puStack_398,1);
  ppplStack_570 = ppplStack_550;
  if (ppplStack_550 != (longlong ***)0x0) {
    (*(code *)(*ppplStack_550)[5])();
  }
  ppplVar11 = ppplStack_570;
  pppplStack_558 = &ppplStack_570;
  ppplStack_568 = ppplStack_570;
  if (ppplStack_570 != (longlong ***)0x0) {
    (*(code *)(*ppplStack_570)[5])(ppplStack_570);
  }
  ppplStack_568 = *(longlong ****)(param_2 + 0x68);
  *(longlong ****)(param_2 + 0x68) = ppplVar11;
  if (ppplStack_568 != (longlong ***)0x0) {
    (*(code *)(*ppplStack_568)[7])();
  }
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffff7;
  if (ppplStack_570 != (longlong ***)0x0) {
    (*(code *)(*ppplStack_570)[7])();
  }
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  uStack_5a0 = 0;
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a8 = 0;
  FUN_1806277c0(&ppplStack_5b8,iStack_388);
  if (0 < iStack_388) {
    puVar12 = &DAT_18098bc73;
    if (puStack_390 != (undefined *)0x0) {
      puVar12 = puStack_390;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_5b0,puVar12,(longlong)(iStack_388 + 1));
  }
  if ((puStack_390 != (undefined *)0x0) && (uStack_5a8 = 0, puStack_5b0 != (undefined1 *)0x0)) {
    *puStack_5b0 = 0;
  }
  uVar14 = uStack_5a8;
  uVar13 = (ulonglong)uStack_5a8;
  if (puStack_5b0 != (undefined1 *)0x0) {
    FUN_1806277c0(param_2 + 0x48,uVar13);
  }
  if (uVar14 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(*(undefined8 *)(param_2 + 0x50),puStack_5b0,uVar13);
  }
  *(undefined4 *)(param_2 + 0x58) = 0;
  if (*(longlong *)(param_2 + 0x50) != 0) {
    *(undefined1 *)(uVar13 + *(longlong *)(param_2 + 0x50)) = 0;
  }
  *(uint *)(param_2 + 100) = uStack_5a0._4_4_;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffff7;
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  if (puStack_5b0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puStack_5b0,puStack_5b0);
  }
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a0 = (ulonglong)uStack_5a0._4_4_ << 0x20;
  ppplStack_5b8 = (longlong ***)&UNK_18098bcb0;
  FUN_1800b08e0(_DAT_180c86930,&pplStack_548,&puStack_3f8,1);
  pppplStack_558 = &ppplStack_570;
  ppplStack_570 = (longlong ***)pplStack_548;
  if ((longlong ***)pplStack_548 != (longlong ***)0x0) {
    (*(code *)(*pplStack_548)[5])();
  }
  FUN_1803aef00(param_2,&ppplStack_570);
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  uStack_5a0 = 0;
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a8 = 0;
  FUN_1806277c0(&ppplStack_5b8,iStack_3e8);
  if (0 < iStack_3e8) {
    puVar12 = &DAT_18098bc73;
    if (puStack_3f0 != (undefined *)0x0) {
      puVar12 = puStack_3f0;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_5b0,puVar12,(longlong)(iStack_3e8 + 1));
  }
  if ((puStack_3f0 != (undefined *)0x0) && (uStack_5a8 = 0, puStack_5b0 != (undefined1 *)0x0)) {
    *puStack_5b0 = 0;
  }
  uVar14 = uStack_5a8;
  uVar13 = (ulonglong)uStack_5a8;
  if (puStack_5b0 != (undefined1 *)0x0) {
    FUN_1806277c0(param_2 + 0x130,uVar13);
  }
  if (uVar14 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(*(undefined8 *)(param_2 + 0x138),puStack_5b0,uVar13);
  }
  *(undefined4 *)(param_2 + 0x140) = 0;
  if (*(longlong *)(param_2 + 0x138) != 0) {
    *(undefined1 *)(uVar13 + *(longlong *)(param_2 + 0x138)) = 0;
  }
  *(uint *)(param_2 + 0x14c) = uStack_5a0._4_4_;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  ppplStack_5b8 = (longlong ***)&UNK_180a3c3e0;
  if (puStack_5b0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puStack_5b0,puStack_5b0);
  }
  puStack_5b0 = (undefined1 *)0x0;
  uStack_5a0 = (ulonglong)uStack_5a0._4_4_ << 0x20;
  ppplStack_5b8 = (longlong ***)&UNK_18098bcb0;
  FUN_1806279c0(&puStack_598,apuStack_158);
  iVar2 = (int)uStack_588;
  uVar13 = (ulonglong)uStack_588 & 0xffffffff;
  if (puStack_590 != (undefined1 *)0x0) {
    FUN_1806277c0(param_2 + 0x70,uVar13);
  }
  if (iVar2 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(*(undefined8 *)(param_2 + 0x78),puStack_590,uVar13);
  }
  *(undefined4 *)(param_2 + 0x80) = 0;
  if (*(longlong *)(param_2 + 0x78) != 0) {
    *(undefined1 *)(uVar13 + *(longlong *)(param_2 + 0x78)) = 0;
  }
  *(uint *)(param_2 + 0x8c) = uStack_580._4_4_;
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffff7;
  puStack_598 = &UNK_180a3c3e0;
  if (puStack_590 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puStack_590,puStack_590);
  }
  puStack_590 = (undefined1 *)0x0;
  uStack_580 = (code *)((ulonglong)uStack_580._4_4_ << 0x20);
  puStack_598 = &UNK_18098bcb0;
  puVar7 = (undefined8 *)FUN_1800b08e0(_DAT_180c86930,&ppplStack_570,apuStack_158,0);
  ppplVar11 = (longlong ***)*puVar7;
  if (ppplStack_570 != (longlong ***)0x0) {
    (*(code *)(*ppplStack_570)[7])();
  }
  if (ppplVar11 == (longlong ***)0x0) {
    puStack_458 = &UNK_1809fcc58;
    pbStack_450 = abStack_440;
    abStack_440[0] = 0;
    iStack_448 = 9;
    strcpy_s(abStack_440,0x40,&UNK_180a037b0);
    puVar7 = (undefined8 *)FUN_1800b08e0(_DAT_180c86930,&ppplStack_568,&puStack_458,0);
    ppplVar11 = (longlong ***)*puVar7;
    if (ppplStack_568 != (longlong ***)0x0) {
      (*(code *)(*ppplStack_568)[7])();
    }
    puStack_458 = &UNK_18098bcb0;
  }
  ppplStack_568 = ppplVar11;
  if (ppplVar11 != (longlong ***)0x0) {
    (*(code *)(*ppplVar11)[5])(ppplVar11);
  }
  pppplStack_558 = &ppplStack_568;
  FUN_180080810(param_2 + 0x90,&ppplStack_568);
  *(int *)(param_2 + 0x340) = *(int *)(param_2 + 0x340) + 1;
  *(uint *)(param_2 + 0x30c) = *(uint *)(param_2 + 0x30c) & 0xfffffff7;
  if (ppplStack_568 != (longlong ***)0x0) {
    (*(code *)(*ppplStack_568)[7])();
  }
  if (cStack_560 == '\0') goto LAB_1803adc30;
  FUN_180417b70(param_1 + 0xd88,&puStack_2d8,*(undefined4 *)(param_1 + 0xe1c));
  if (*(longlong *)(param_1 + 0xe30) == 0) {
    puStack_4f8 = &UNK_1809fcc28;
    puStack_4f0 = auStack_4e0;
    auStack_4e0[0] = 0;
    uStack_4e8 = 0;
    strcpy_s(auStack_4e0,0x80,&DAT_18098bc73);
    ppuVar8 = &puStack_4f8;
    uVar14 = 2;
  }
  else {
    ppuVar8 = (undefined **)FUN_180049b30(apuStack_f8,*(longlong *)(param_1 + 0xe30) + 0x10);
    uVar14 = 1;
  }
  uStack_578 = uVar14;
  FUN_1800b8300(&puStack_1b8,ppuVar8);
  if ((uVar14 & 2) != 0) {
    uVar14 = uVar14 & 0xfffffffd;
    puStack_4f8 = &UNK_18098bcb0;
    uStack_578 = uVar14;
  }
  if ((uVar14 & 1) != 0) {
    uVar14 = uVar14 & 0xfffffffe;
    apuStack_f8[0] = &UNK_18098bcb0;
    uStack_578 = uVar14;
  }
  if (iStack_2c8 == iStack_1a8) {
    if (iStack_2c8 != 0) {
      lStack_1b0 = lStack_1b0 - (longlong)pbStack_2d0;
      do {
        pbVar10 = pbStack_2d0 + lStack_1b0;
        iStack_1a8 = (uint)*pbStack_2d0 - (uint)*pbVar10;
        if (iStack_1a8 != 0) break;
        pbStack_2d0 = pbStack_2d0 + 1;
      } while (*pbVar10 != 0);
    }
LAB_1803ad811:
    if (iStack_1a8 != 0) goto LAB_1803ad817;
  }
  else {
    if (iStack_2c8 == 0) goto LAB_1803ad811;
LAB_1803ad817:
    uVar9 = FUN_1800b08e0(_DAT_180c86930,&ppplStack_570,&puStack_2d8,0);
    FUN_180060b80(param_1 + 0xe30,uVar9);
    if (ppplStack_570 != (longlong ***)0x0) {
      (*(code *)(*ppplStack_570)[7])();
    }
    if (*(longlong *)(param_1 + 0xe30) != 0) {
      puStack_598 = (undefined *)0x0;
      puStack_590 = (undefined1 *)0x0;
      uStack_588 = (code *)0x0;
      uStack_580 = _guard_check_icall;
      FUN_18023c450(*(undefined8 *)(param_1 + 0xe30),0,0xffffffff,&puStack_598);
      if (uStack_588 != (code *)0x0) {
        (*uStack_588)(&puStack_598,0,0);
      }
    }
  }
  FUN_180417b70(param_1 + 0xdb8,&puStack_338,*(undefined4 *)(param_1 + 0xe1c));
  if (*(longlong *)(param_1 + 0xe28) == 0) {
    puStack_4f8 = &UNK_1809fcc28;
    puStack_4f0 = auStack_4e0;
    auStack_4e0[0] = 0;
    uStack_4e8 = 0;
    strcpy_s(auStack_4e0,0x80,&DAT_18098bc73);
    ppuVar8 = &puStack_4f8;
    uVar14 = uVar14 | 8;
  }
  else {
    ppuVar8 = (undefined **)FUN_180049b30(apuStack_f8,*(longlong *)(param_1 + 0xe28) + 0x10);
    uVar14 = uVar14 | 4;
  }
  uStack_578 = uVar14;
  FUN_1800b8300(&puStack_218,ppuVar8);
  if ((uVar14 & 8) != 0) {
    uVar14 = uVar14 & 0xfffffff7;
    puStack_4f8 = &UNK_18098bcb0;
    uStack_578 = uVar14;
  }
  if ((uVar14 & 4) != 0) {
    uVar14 = uVar14 & 0xfffffffb;
    apuStack_f8[0] = &UNK_18098bcb0;
    uStack_578 = uVar14;
  }
  if (iStack_328 == iStack_208) {
    if (iStack_328 != 0) {
      lStack_210 = lStack_210 - (longlong)pbStack_330;
      do {
        pbVar10 = pbStack_330 + lStack_210;
        iStack_208 = (uint)*pbStack_330 - (uint)*pbVar10;
        if (iStack_208 != 0) break;
        pbStack_330 = pbStack_330 + 1;
      } while (*pbVar10 != 0);
    }
LAB_1803ad9bd:
    if (iStack_208 != 0) goto LAB_1803ad9c3;
  }
  else {
    if (iStack_328 == 0) goto LAB_1803ad9bd;
LAB_1803ad9c3:
    uVar9 = FUN_1800b08e0(_DAT_180c86930,&ppplStack_570,&puStack_338,0);
    FUN_180060b80(param_1 + 0xe28,uVar9);
    if (ppplStack_570 != (longlong ***)0x0) {
      (*(code *)(*ppplStack_570)[7])();
    }
    if (*(longlong *)(param_1 + 0xe28) != 0) {
      puStack_598 = (undefined *)0x0;
      puStack_590 = (undefined1 *)0x0;
      uStack_588 = (code *)0x0;
      uStack_580 = _guard_check_icall;
      FUN_18023c450(*(undefined8 *)(param_1 + 0xe28),0,0xffffffff,&puStack_598);
      if (uStack_588 != (code *)0x0) {
        (*uStack_588)(&puStack_598,0,0);
      }
    }
  }
  FUN_180417b70(param_1 + 0xde8,&puStack_458,*(undefined4 *)(param_1 + 0xe1c));
  if (*(longlong *)(param_1 + 0xe38) == 0) {
    puStack_4f8 = &UNK_1809fcc28;
    puStack_4f0 = auStack_4e0;
    auStack_4e0[0] = 0;
    uStack_4e8 = 0;
    strcpy_s(auStack_4e0,0x80,&DAT_18098bc73);
    ppuVar8 = &puStack_4f8;
    uVar14 = uVar14 | 0x20;
  }
  else {
    ppuVar8 = (undefined **)FUN_180049b30(apuStack_f8,*(longlong *)(param_1 + 0xe38) + 0x10);
    uVar14 = uVar14 | 0x10;
  }
  uStack_578 = uVar14;
  FUN_1800b8300(&puStack_278,ppuVar8);
  if ((uVar14 & 0x20) != 0) {
    uVar14 = uVar14 & 0xffffffdf;
    puStack_4f8 = &UNK_18098bcb0;
    uStack_578 = uVar14;
  }
  if ((uVar14 & 0x10) != 0) {
    uStack_578 = uVar14 & 0xffffffef;
    apuStack_f8[0] = &UNK_18098bcb0;
  }
  if (iStack_448 == iStack_268) {
    if (iStack_448 != 0) {
      pbVar10 = pbStack_450;
      do {
        pbVar1 = pbVar10 + (lStack_270 - (longlong)pbStack_450);
        iStack_268 = (uint)*pbVar10 - (uint)*pbVar1;
        if (iStack_268 != 0) break;
        pbVar10 = pbVar10 + 1;
      } while (*pbVar1 != 0);
    }
LAB_1803adb5d:
    if (iStack_268 != 0) goto LAB_1803adb63;
  }
  else {
    if (iStack_448 == 0) goto LAB_1803adb5d;
LAB_1803adb63:
    uVar9 = FUN_1800b08e0(_DAT_180c86930,&pppplStack_558,&puStack_458,0);
    FUN_180060b80(param_1 + 0xe38,uVar9);
    if (pppplStack_558 != (longlong ****)0x0) {
      (*(code *)(*pppplStack_558)[7])();
    }
    if (*(longlong *)(param_1 + 0xe38) != 0) {
      puStack_598 = (undefined *)0x0;
      puStack_590 = (undefined1 *)0x0;
      uStack_588 = (code *)0x0;
      uStack_580 = _guard_check_icall;
      FUN_18023c450(*(undefined8 *)(param_1 + 0xe38),0,0xffffffff,&puStack_598);
      if (uStack_588 != (code *)0x0) {
        (*uStack_588)(&puStack_598,0,0);
      }
    }
  }
  puStack_278 = &UNK_18098bcb0;
  puStack_458 = &UNK_18098bcb0;
  puStack_218 = &UNK_18098bcb0;
  puStack_338 = &UNK_18098bcb0;
  puStack_1b8 = &UNK_18098bcb0;
  puStack_2d8 = &UNK_18098bcb0;
LAB_1803adc30:
  if (((ppplVar3 != (longlong ***)0x0) && (ppplVar3 != ppplStack_550)) &&
     (ppplVar3 != *(longlong ****)(param_1 + 0xe30))) {
    uVar9 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
    pppplStack_558 = appplStack_538;
    ppplStack_568 = (longlong ***)&ppplStack_570;
    ppplStack_570 = ppplVar3;
    (*(code *)(*ppplVar3)[5])(ppplVar3);
    ppplStack_508 = (longlong ***)&ppplStack_570;
    pppplStack_540 = &ppplStack_568;
    ppplStack_5b8 = (longlong ***)appplStack_538;
    puStack_520 = &UNK_1803aebf0;
    pcStack_528 = FUN_1803aec00;
    appplStack_538[0] = ppplStack_570;
    ppplStack_568 = (longlong ***)0x0;
    ppplStack_570 = (longlong ***)0x0;
    ppplVar11 = (longlong ***)FUN_18006b640(uVar9,appplStack_538);
    ppplStack_5b8 = ppplVar11;
    if (ppplVar11 != (longlong ***)0x0) {
      (*(code *)(*ppplVar11)[5])(ppplVar11);
    }
    uVar9 = _DAT_180c82868;
    pppplStack_540 = &ppplStack_568;
    ppplStack_568 = ppplVar11;
    if (ppplVar11 != (longlong ***)0x0) {
      (*(code *)(*ppplVar11)[5])(ppplVar11);
    }
    FUN_18005e300(uVar9,&ppplStack_568);
    if (ppplVar11 != (longlong ***)0x0) {
      (*(code *)(*ppplVar11)[7])(ppplVar11);
    }
  }
  if ((longlong ***)pplStack_548 != (longlong ***)0x0) {
    (*(code *)(*pplStack_548)[7])();
  }
  if (ppplStack_550 != (longlong ***)0x0) {
    (*(code *)(*ppplStack_550)[7])();
  }
  if (ppplVar3 != (longlong ***)0x0) {
    (*(code *)(*ppplVar3)[7])(ppplVar3);
  }
  apuStack_158[0] = &UNK_18098bcb0;
  puStack_3f8 = &UNK_18098bcb0;
  puStack_398 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_5d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address






