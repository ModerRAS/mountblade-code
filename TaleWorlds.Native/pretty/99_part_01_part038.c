#include "TaleWorlds.Native.Split.h"

// 99_part_01_part038.c - 5 个函数

// 函数: void FUN_1800c6910(undefined8 param_1,undefined8 param_2)
void FUN_1800c6910(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  undefined1 auStack_568 [32];
  undefined8 uStack_548;
  undefined1 uStack_538;
  undefined1 uStack_537;
  undefined1 uStack_536;
  undefined1 auStack_535 [5];
  undefined **ppuStack_530;
  longlong lStack_528;
  ulonglong uStack_520;
  ulonglong uStack_518;
  ulonglong uStack_510;
  longlong lStack_508;
  undefined *puStack_500;
  undefined1 *puStack_4f8;
  undefined4 uStack_4f0;
  ulonglong uStack_4e8;
  longlong *plStack_4e0;
  longlong *plStack_4d8;
  longlong *plStack_4d0;
  undefined4 uStack_4c8;
  ulonglong uStack_4c0;
  undefined **ppuStack_4b8;
  longlong lStack_4b0;
  longlong lStack_4a8;
  undefined8 uStack_4a0;
  undefined4 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined *puStack_458;
  undefined1 *puStack_450;
  undefined4 uStack_448;
  undefined1 auStack_440 [72];
  undefined *puStack_3f8;
  undefined1 *puStack_3f0;
  undefined4 uStack_3e8;
  undefined1 auStack_3e0 [72];
  undefined *puStack_398;
  undefined1 *puStack_390;
  undefined4 uStack_388;
  undefined1 auStack_380 [72];
  undefined *puStack_338;
  undefined1 *puStack_330;
  undefined4 uStack_328;
  undefined1 auStack_320 [72];
  undefined *puStack_2d8;
  undefined1 *puStack_2d0;
  undefined4 uStack_2c8;
  undefined1 auStack_2c0 [72];
  undefined *puStack_278;
  undefined1 *puStack_270;
  undefined4 uStack_268;
  undefined1 auStack_260 [72];
  undefined *puStack_218;
  undefined1 *puStack_210;
  undefined4 uStack_208;
  undefined1 auStack_200 [72];
  undefined *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined4 uStack_1a8;
  undefined1 auStack_1a0 [72];
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *apuStack_98 [12];
  ulonglong uStack_38;
  
  uVar16 = _DAT_180c86890;
  uStack_468 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_568;
  uStack_518 = _DAT_180c86890;
  lStack_4b0 = 0;
  lStack_4a8 = 0;
  plVar12 = (longlong *)0x0;
  uStack_4a0 = 0;
  uStack_498 = 3;
  FUN_1800da760(_DAT_180c86890,param_2,&lStack_4b0);
  uVar14 = lStack_4a8 - lStack_4b0 >> 3;
  ppuStack_530 = &puStack_3f8;
  puStack_3f8 = &UNK_1809fcc58;
  puStack_3f0 = auStack_3e0;
  uStack_3e8 = 0;
  auStack_3e0[0] = 0;
  uStack_4c0 = uVar14;
  FUN_180049bf0(&puStack_3f8,&UNK_180a03b98);
  FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_3f8);
  FUN_18029ae20(*(undefined8 *)(_DAT_180c86938 + 0x1cd8));
  FUN_1802c2ac0(&puStack_3f8);
  uStack_490 = 0;
  plVar5 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
  (**(code **)(*plVar5 + 200))(plVar5,0x39,1,&uStack_490);
  uStack_488 = 0;
  plVar5 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
  (**(code **)(*plVar5 + 200))(plVar5,0x3a,1,&uStack_488);
  uStack_480 = 0;
  plVar5 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
  (**(code **)(*plVar5 + 200))(plVar5,0x3b,1,&uStack_480);
  uStack_478 = 0;
  plVar5 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
  (**(code **)(*plVar5 + 200))(plVar5,0x3c,1,&uStack_478);
  uStack_470 = 0;
  plVar5 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
  (**(code **)(*plVar5 + 200))(plVar5,0x3d,1,&uStack_470);
  lStack_508 = 0;
  plVar5 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
  uVar17 = (**(code **)(*plVar5 + 200))(plVar5,0x3e,1,&lStack_508);
  if ((int)uVar14 != 0) {
    uVar15 = uVar14 & 0xffffffff;
    plVar5 = plVar12;
    do {
      lVar8 = *(longlong *)((longlong)plVar5 + lStack_4b0);
      uVar17 = FUN_1800efac0(uVar17,lVar8);
      FUN_1800c9eb0(uVar17,lVar8);
      uVar17 = FUN_1800e5650(uVar16,lVar8);
      if (*(char *)(lVar8 + 0x125b0) != '\0') {
        uVar17 = FUN_1802c3ab0(lVar8 + 0x125b8,lVar8 + 0x12650);
      }
      if (*(char *)(lVar8 + 0x12670) != '\0') {
        uVar17 = FUN_1802c64d0(lVar8 + 0x12678,lVar8 + 0x126b0);
      }
      plVar5 = plVar5 + 1;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  FUN_1800f3de0();
  plStack_4e0 = (longlong *)0x0;
  plStack_4d8 = (longlong *)0x0;
  plStack_4d0 = (longlong *)0x0;
  uStack_4c8 = 3;
  uVar15 = uVar14 & 0xffffffff;
  uStack_510 = uVar15;
  if ((int)uVar14 == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plStack_4e0 = (longlong *)FUN_18062b420(_DAT_180c8ed18,uVar15 * 8,3);
    plVar7 = plStack_4e0 + uVar15;
    lStack_528 = 0;
    uStack_520 = uVar15;
    plVar11 = plStack_4e0;
    plStack_4d8 = plStack_4e0;
    plStack_4d0 = plVar7;
    do {
      plVar3 = plStack_4d8;
      lVar8 = *(longlong *)(lStack_528 + lStack_4b0);
      if (plStack_4d8 < plVar7) {
        *plStack_4d8 = lVar8;
        plVar5 = plVar11;
      }
      else {
        lStack_508 = (longlong)plStack_4d8 - (longlong)plVar11;
        if (lStack_508 >> 3 == 0) {
          lVar6 = 1;
LAB_1800c6c68:
          plVar5 = (longlong *)
                   FUN_18062b420(_DAT_180c8ed18,lVar6 * 8,CONCAT71((int7)(uStack_520 >> 8),3));
        }
        else {
          lVar6 = (lStack_508 >> 3) * 2;
          plVar5 = plVar12;
          if (lVar6 != 0) goto LAB_1800c6c68;
        }
        if (plVar11 != plVar3) {
                    // WARNING: Subroutine does not return
          memmove(plVar5,plVar11,lStack_508);
        }
        *plVar5 = lVar8;
        if (plVar11 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(plVar11);
        }
        plVar7 = plVar5 + lVar6;
        uVar16 = uStack_518;
        plStack_4e0 = plVar5;
        plStack_4d0 = plVar7;
        plStack_4d8 = plVar5;
      }
      plStack_4d8 = plStack_4d8 + 1;
      if (((*(char *)(lVar8 + 0x11c39) == '\0') && (*(char *)(uVar16 + 0x1504) != '\0')) &&
         (*(undefined1 *)(lVar8 + 0x170) = 0, *(char *)(lVar8 + 0x11c35) == '\0')) {
        uVar4 = *(undefined1 *)(lVar8 + 0x170);
        if (*(int *)(lVar8 + 8) == -1) {
          uVar4 = 1;
        }
        *(undefined1 *)(lVar8 + 0x170) = uVar4;
      }
      lStack_528 = lStack_528 + 8;
      uStack_520 = uStack_520 - 1;
      plVar11 = plVar5;
    } while (uStack_520 != 0);
    uStack_520 = 0;
    uVar14 = uStack_4c0;
  }
  uVar15 = uStack_510;
  FUN_1800c5600(uVar16);
  ppuStack_530 = &puStack_338;
  puStack_338 = &UNK_1809fcc58;
  puStack_330 = auStack_320;
  uStack_328 = 0;
  auStack_320[0] = 0;
  FUN_180049bf0(&puStack_338,&UNK_180a03be8);
  FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_338);
  FUN_1802c22a0(&uStack_538,&UNK_180a03be8);
  iVar13 = (int)uVar14;
  plVar7 = plVar12;
  if (iVar13 != 0) {
    do {
      lVar8 = *(longlong *)((longlong)plVar7 + lStack_4b0);
      uStack_518 = uVar15;
      FUN_18024c0f0(lVar8,&puStack_f8);
      puVar9 = &DAT_18098bc73;
      if (puStack_f0 != (undefined *)0x0) {
        puVar9 = puStack_f0;
      }
      FUN_1802c22a0(&uStack_537,&UNK_180a03bdc,puVar9);
      if (((*(int *)(lVar8 + 0x124bc) == 0) && (*(int *)(lVar8 + 0x2920) == 0)) &&
         ((*(int *)(lVar8 + 0x2108) == 0 && (*(int *)(lVar8 + 0x1fe0) == 0)))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (((*(int *)(uVar16 + 0x12d8) == 0x12) || ((*(byte *)(lVar8 + 0x1bd8) & 0x20) == 0)) ||
         (((*(longlong *)(lVar8 + 0x99b8) == 0 ||
           ((*(uint *)(*(longlong *)(lVar8 + 0x99b8) + 0x98) & 0x8000101e) == 0)) &&
          (((*(char *)(lVar8 + 0x124c4) == '\0' && (!bVar1)) && (*(int *)(lVar8 + 0x1bdc) == 0))))))
      {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar6 = FUN_18024c0f0(lVar8,apuStack_98);
        puStack_500 = &UNK_180a3c3e0;
        uStack_4e8 = 0;
        puStack_4f8 = (undefined1 *)0x0;
        uStack_4f0 = 0;
        FUN_1806277c0(&puStack_500,*(undefined4 *)(lVar6 + 0x10));
        puVar2 = puStack_4f8;
        if (0 < *(int *)(lVar6 + 0x10)) {
          puVar9 = &DAT_18098bc73;
          if (*(undefined **)(lVar6 + 8) != (undefined *)0x0) {
            puVar9 = *(undefined **)(lVar6 + 8);
          }
                    // WARNING: Subroutine does not return
          memcpy(puStack_4f8,puVar9,(longlong)(*(int *)(lVar6 + 0x10) + 1));
        }
        if ((*(longlong *)(lVar6 + 8) != 0) && (uStack_4f0 = 0, puStack_4f8 != (undefined1 *)0x0)) {
          *puStack_4f8 = 0;
        }
        apuStack_98[0] = &UNK_18098bcb0;
        puVar10 = &DAT_18098bc73;
        if (puStack_4f8 != (undefined1 *)0x0) {
          puVar10 = puStack_4f8;
        }
        ppuStack_4b8 = &puStack_398;
        puStack_398 = &UNK_1809fcc58;
        puStack_390 = auStack_380;
        uStack_388 = 0;
        auStack_380[0] = 0;
        if (puVar10 != (undefined1 *)0x0) {
          FUN_180049bf0(&puStack_398);
          FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_398);
        }
        FUN_1800cd410(uVar16,lVar8,1);
        puStack_1b8 = &UNK_1809fcc58;
        puStack_1b0 = auStack_1a0;
        auStack_1a0[0] = 0;
        uStack_1a8 = 7;
        strcpy_s(auStack_1a0,0x40,&UNK_180a03bf8);
        puStack_1b8 = &UNK_18098bcb0;
        FUN_1800dd8a0(uVar16,lVar8);
        if (*(longlong *)(lVar8 + 0x1b0) != 0) {
          lVar6 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
          if (((*(longlong *)(lVar6 + 0x8530) != 0) || (*(int *)(lVar6 + 0x88b4) != -1)) ||
             (*(int *)(lVar6 + 0x8ab4) != 0x30)) {
            uStack_520 = 0;
            (**(code **)(**(longlong **)(lVar6 + 0x8400) + 0x40))
                      (*(longlong **)(lVar6 + 0x8400),0x1f,1,&uStack_520);
            (**(code **)(**(longlong **)(lVar6 + 0x8400) + 0x218))
                      (*(longlong **)(lVar6 + 0x8400),0x1f,1,&uStack_520);
            *(undefined8 *)(lVar6 + 0x8530) = 0;
            *(undefined4 *)(lVar6 + 0x88b4) = 0xffffffff;
            *(undefined4 *)(lVar6 + 0x8ab4) = 0x30;
            *(int *)(lVar6 + 0x82b4) = *(int *)(lVar6 + 0x82b4) + 1;
          }
          lVar6 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
          if (((*(longlong *)(lVar6 + 0x8528) != 0) || (*(int *)(lVar6 + 0x88b0) != -1)) ||
             (*(int *)(lVar6 + 0x8ab0) != 0x30)) {
            lStack_528 = 0;
            (**(code **)(**(longlong **)(lVar6 + 0x8400) + 0x40))
                      (*(longlong **)(lVar6 + 0x8400),0x1e,1,&lStack_528);
            (**(code **)(**(longlong **)(lVar6 + 0x8400) + 0x218))
                      (*(longlong **)(lVar6 + 0x8400),0x1e,1,&lStack_528);
            *(undefined8 *)(lVar6 + 0x8528) = 0;
            *(undefined4 *)(lVar6 + 0x88b0) = 0xffffffff;
            *(undefined4 *)(lVar6 + 0x8ab0) = 0x30;
            *(int *)(lVar6 + 0x82b4) = *(int *)(lVar6 + 0x82b4) + 1;
          }
          lVar6 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
          if (((*(longlong *)(lVar6 + 0x8560) != 0) || (*(int *)(lVar6 + 0x88cc) != -1)) ||
             (*(int *)(lVar6 + 0x8acc) != 0x10)) {
            ppuStack_4b8 = (undefined **)0x0;
            (**(code **)(**(longlong **)(lVar6 + 0x8400) + 0x40))
                      (*(longlong **)(lVar6 + 0x8400),0x25,1,&ppuStack_4b8);
            *(undefined8 *)(lVar6 + 0x8560) = 0;
            *(undefined4 *)(lVar6 + 0x88cc) = 0xffffffff;
            *(undefined4 *)(lVar6 + 0x8acc) = 0x10;
            *(int *)(lVar6 + 0x82b4) = *(int *)(lVar6 + 0x82b4) + 1;
          }
          FUN_180247f60(lVar8);
        }
        FUN_1800e3700(uVar16,lVar8);
        FUN_1802c2ac0(&puStack_398);
        puStack_500 = &UNK_180a3c3e0;
        if (puVar2 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar2);
        }
        puStack_4f8 = (undefined1 *)0x0;
        uStack_4e8 = uStack_4e8 & 0xffffffff00000000;
        puStack_500 = &UNK_18098bcb0;
        uVar15 = uStack_518;
      }
      _DAT_180c8695c = _DAT_180c8695c + -1;
      (**(code **)(*_DAT_180c86968 + 0x20))();
      puStack_f8 = &UNK_18098bcb0;
      uVar15 = uVar15 - 1;
      plVar7 = plVar7 + 1;
    } while (uVar15 != 0);
    iVar13 = (int)uStack_4c0;
    uStack_518 = 0;
    uVar15 = uStack_510;
    plVar5 = plStack_4e0;
  }
  _DAT_180c8695c = _DAT_180c8695c + -1;
  (**(code **)(*_DAT_180c86968 + 0x20))();
  FUN_1802c2ac0(&puStack_338);
  lVar8 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  if (((*(longlong *)(lVar8 + 0x84e0) != 0) || (*(int *)(lVar8 + 0x888c) != -1)) ||
     (*(int *)(lVar8 + 0x8a8c) != 0x10)) {
    ppuStack_530 = (undefined **)0x0;
    (**(code **)(**(longlong **)(lVar8 + 0x8400) + 0x40))
              (*(longlong **)(lVar8 + 0x8400),0x15,1,&ppuStack_530);
    *(undefined8 *)(lVar8 + 0x84e0) = 0;
    *(undefined4 *)(lVar8 + 0x888c) = 0xffffffff;
    *(undefined4 *)(lVar8 + 0x8a8c) = 0x10;
    *(int *)(lVar8 + 0x82b4) = *(int *)(lVar8 + 0x82b4) + 1;
  }
  lVar8 = _DAT_180c86938;
  plVar7 = *(longlong **)(_DAT_180c86938 + 0x1cd8);
  plVar11 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x121e0) + 0x1d8);
  if (plVar11 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  else {
    if (_DAT_180c86870 != 0) {
      *(longlong *)(*(longlong *)(_DAT_180c86938 + 0x121e0) + 0x340) =
           (longlong)*(int *)(_DAT_180c86870 + 0x224);
    }
    if (*plVar11 != 0) {
      (**(code **)(*plVar7 + 0x70))(plVar7,*plVar11,1);
      lVar8 = _DAT_180c86938;
    }
  }
  plVar7[0x1077] = (longlong)plVar11;
  *(undefined8 *)(*(longlong *)(lVar8 + 0x1cd8) + 0x83f0) = 0;
  FUN_18029de40(*(undefined8 *)(lVar8 + 0x1cd8),1);
  plVar7 = plVar12;
  if (iVar13 != 0) {
    do {
      lVar8 = *(longlong *)((longlong)plVar7 + lStack_4b0);
      FUN_18024c0f0(lVar8,&puStack_158);
      puVar9 = &DAT_18098bc73;
      if (puStack_150 != (undefined *)0x0) {
        puVar9 = puStack_150;
      }
      uVar17 = FUN_1802c22a0(&uStack_536,&UNK_180a03bdc,puVar9);
      puVar9 = &DAT_18098bc73;
      if (puStack_150 != (undefined *)0x0) {
        puVar9 = puStack_150;
      }
      ppuStack_530 = &puStack_458;
      puStack_458 = &UNK_1809fcc58;
      puStack_450 = auStack_440;
      uStack_448 = 0;
      auStack_440[0] = 0;
      if (puVar9 != (undefined *)0x0) {
        FUN_180049bf0(&puStack_458);
        uVar17 = FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_458);
      }
      if (*(longlong *)(lVar8 + 0x9670) != 0) {
        uVar17 = (**(code **)(lVar8 + 0x9678))(lVar8);
      }
      if (*(char *)(lVar8 + 0x22) == '\0') {
        if ((*(uint *)(lVar8 + 4) & 0x8000000) == 0) {
          FUN_1800cd7d0(uVar16,lVar8);
          if ((*(char *)(lVar8 + 0x9a31) == '\0') || (*(longlong *)(lVar8 + 0x99b8) == 0)) {
            ppuStack_530 = &puStack_2d8;
            puStack_2d8 = &UNK_1809fcc58;
            puStack_2d0 = auStack_2c0;
            uStack_2c8 = 0;
            auStack_2c0[0] = 0;
            FUN_180049bf0(&puStack_2d8,&UNK_180a03c10);
            FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_2d8);
            FUN_1802c22a0(auStack_535,&UNK_180a03c00);
            uStack_548 = *(undefined8 *)(lVar8 + 0x9690);
            FUN_1800d0950(uVar16,lVar8,1);
            uStack_548 = *(undefined8 *)(lVar8 + 0x9690);
            FUN_1800d0950(uVar16,lVar8,0,0);
            uStack_548 = *(undefined8 *)(lVar8 + 0x9690);
            FUN_1800d0950(uVar16,lVar8,1,0);
            _DAT_180c8695c = _DAT_180c8695c + -1;
            (**(code **)(*_DAT_180c86968 + 0x20))();
            FUN_1802c2ac0(&puStack_2d8);
          }
          if ((*(char *)(lVar8 + 0x20) != '\0') || (*(char *)(lVar8 + 0x21) != '\0')) {
            if ((*(char *)((longlong)*(int *)(_DAT_180c86938 + 0x1d40) * 0xd0 + 0xcb +
                          *(longlong *)(_DAT_180c86938 + 0x1d20)) == '\0') &&
               ((lVar6 = FUN_180245280(lVar8), *(longlong *)(lVar6 + 0x1e0) != 0 &&
                (_DAT_180c86870 != 0)))) {
              *(longlong *)(lVar6 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
            }
            FUN_180245280(lVar8);
          }
          if (*(longlong *)(lVar8 + 0x9620) != 0) {
            ppuStack_530 = &puStack_278;
            puStack_278 = &UNK_1809fcc58;
            puStack_270 = auStack_260;
            uStack_268 = 0;
            auStack_260[0] = 0;
            FUN_180049bf0(&puStack_278,&UNK_180a03c28);
            FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_278);
            (**(code **)(lVar8 + 0x9628))(lVar8);
            FUN_1802c2ac0(&puStack_278);
          }
          if (*(longlong *)(lVar8 + 0x9640) != 0) {
            (**(code **)(lVar8 + 0x9648))(lVar8);
          }
          FUN_180245420(lVar8);
          if (*(char *)(_DAT_180c86890 + 0x12e8) != '\0') {
            FUN_180248910(lVar8);
          }
          lVar6 = FUN_180244ff0(lVar8);
          if (lVar6 != 0) {
            FUN_180244ff0(lVar8);
          }
        }
        else if (*(longlong *)(lVar8 + 0x9620) != 0) {
          ppuStack_530 = &puStack_218;
          puStack_218 = &UNK_1809fcc58;
          puStack_210 = auStack_200;
          uStack_208 = 0;
          auStack_200[0] = 0;
          FUN_180049bf0(&puStack_218,&UNK_180a03c28);
          FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_218);
          (**(code **)(lVar8 + 0x9628))(lVar8);
          FUN_1802c2ac0(&puStack_218);
        }
        FUN_1802c2ac0(&puStack_458);
        _DAT_180c8695c = _DAT_180c8695c + -1;
        (**(code **)(*_DAT_180c86968 + 0x20))();
      }
      else {
        FUN_1800e2c60(uVar17,lVar8);
        FUN_1802c2ac0(&puStack_458);
        _DAT_180c8695c = _DAT_180c8695c + -1;
        (**(code **)(*_DAT_180c86968 + 0x20))();
      }
      plVar5 = plStack_4e0;
      puStack_158 = &UNK_18098bcb0;
      uVar15 = uVar15 - 1;
      plVar7 = plVar7 + 1;
      uVar14 = uStack_510;
    } while (uVar15 != 0);
    do {
      lVar8 = *(longlong *)((longlong)plVar12 + lStack_4b0);
      if (*(longlong *)(lVar8 + 0x99f0) != 0) {
        FUN_1800a3f00(_DAT_180c86938);
      }
      FUN_180246810(lVar8);
      plVar12 = plVar12 + 1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  FUN_180206740(_DAT_180c8aa50,0);
  if (plVar5 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar5);
  }
  if (lStack_4b0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_568);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800c78b0(undefined8 param_1,longlong param_2)
void FUN_1800c78b0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined1 auStack_158 [12];
  undefined4 uStack_14c;
  undefined4 uStack_13c;
  undefined4 uStack_12c;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_98 [64];
  undefined1 auStack_58 [64];
  
  lVar4 = _DAT_180c86938;
  if ((*(longlong *)(param_2 + 0x11ee0) == 0) ||
     (*(char *)(*(longlong *)(param_2 + 0x11ee0) + 900) == '\0')) {
    *(undefined4 *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1480) = 0;
    uVar5 = *(undefined8 *)(lVar4 + 0x1cd8);
    uVar6 = FUN_1800be610();
    FUN_18029d150(uVar5,0x15,uVar6,0x30,0xffffffff);
  }
  else {
    FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),0x15,*(undefined8 *)(param_2 + 0x11ee0),
                  0x30,0xffffffff);
    lVar4 = _DAT_180c86938;
    puVar9 = (undefined4 *)(param_2 + 0x12008);
    iVar7 = 0;
    lVar8 = 0;
    *(float *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x15b8) =
         (float)*(ushort *)(*(longlong *)(param_2 + 0x11ee0) + 0x32e);
    *(float *)(*(longlong *)(lVar4 + 0x1cd8) + 0x15b4) =
         1.0 / *(float *)(*(longlong *)(lVar4 + 0x1cd8) + 0x15b8);
    do {
      FUN_180286010(param_2 + 0x11ef0 + (longlong)iVar7 * 0x140,auStack_98,0);
      if (iVar7 == 0) {
        *(undefined4 *)(*(longlong *)(lVar4 + 0x1cd8) + 0x1654) = *puVar9;
      }
      FUN_180287b30(param_2 + 0x11fb0 + (longlong)iVar7 * 0x140,auStack_158);
      uStack_118 = 0x3f000000;
      uStack_110 = 0;
      uStack_108 = 0xbf00000000000000;
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0x3f800000;
      uStack_e8 = 0x3f000000;
      uStack_e4 = 0x3f000000;
      uStack_e0 = 0;
      uStack_dc = 0x3f800000;
      uStack_14c = 0;
      uStack_13c = 0;
      uStack_12c = 0;
      uStack_11c = 0x3f800000;
      uVar5 = FUN_1800946d0(auStack_158,auStack_58,auStack_98);
      FUN_1800946d0(uVar5,&uStack_d8);
      lVar3 = *(longlong *)(lVar4 + 0x1cd8);
      iVar7 = iVar7 + 1;
      puVar9 = puVar9 + 0x50;
      puVar1 = (undefined8 *)(lVar8 + 0x1270 + lVar3);
      *puVar1 = uStack_d8;
      puVar1[1] = uStack_d0;
      puVar1 = (undefined8 *)(lVar8 + 0x1280 + lVar3);
      *puVar1 = uStack_c8;
      puVar1[1] = uStack_c0;
      puVar1 = (undefined8 *)(lVar8 + 0x1290 + lVar3);
      *puVar1 = uStack_b8;
      puVar1[1] = uStack_b0;
      puVar2 = (undefined4 *)(lVar8 + 0x12a0 + lVar3);
      *puVar2 = uStack_a8;
      puVar2[1] = uStack_a4;
      puVar2[2] = uStack_a0;
      puVar2[3] = uStack_9c;
      lVar8 = lVar8 + 0x40;
      *(undefined4 *)(*(longlong *)(lVar4 + 0x1cd8) + 0x1480) = 0x3f800000;
    } while (iVar7 < 4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800c78fc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
void FUN_1800c78fc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong unaff_RBP;
  longlong unaff_RSI;
  int iVar13;
  longlong in_R11;
  undefined8 unaff_R12;
  longlong lVar14;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined4 *puVar15;
  
  *(undefined8 *)(in_R11 + 8) = unaff_R12;
  *(undefined8 *)(in_R11 + 0x10) = unaff_R14;
  uVar12 = *(undefined8 *)(param_1 + 0x1cd8);
  *(undefined8 *)(in_R11 + 0x18) = unaff_R15;
  FUN_18029d150(uVar12,(int)param_4 + -0x1b,param_3,param_4,0xffffffff);
  lVar11 = _DAT_180c86938;
  puVar15 = (undefined4 *)(unaff_RSI + 0x12008);
  iVar13 = 0;
  lVar14 = 0;
  *(float *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x15b8) =
       (float)*(ushort *)(*(longlong *)(unaff_RSI + 0x11ee0) + 0x32e);
  *(float *)(*(longlong *)(lVar11 + 0x1cd8) + 0x15b4) =
       1.0 / *(float *)(*(longlong *)(lVar11 + 0x1cd8) + 0x15b8);
  do {
    FUN_180286010(unaff_RSI + 0x11ef0 + (longlong)iVar13 * 0x140,unaff_RBP + -0x10,0);
    if (iVar13 == 0) {
      *(undefined4 *)(*(longlong *)(lVar11 + 0x1cd8) + 0x1654) = *puVar15;
    }
    FUN_180287b30(unaff_RSI + 0x11fb0 + (longlong)iVar13 * 0x140,&param_6);
    param_14 = 0x3f000000;
    param_15 = 0;
    *(undefined8 *)(unaff_RBP + -0x80) = 0xbf00000000000000;
    *(undefined8 *)(unaff_RBP + -0x78) = 0;
    *(undefined8 *)(unaff_RBP + -0x70) = 0;
    *(undefined8 *)(unaff_RBP + -0x68) = 0x3f800000;
    *(undefined4 *)(unaff_RBP + -0x60) = 0x3f000000;
    *(undefined4 *)(unaff_RBP + -0x5c) = 0x3f000000;
    *(undefined4 *)(unaff_RBP + -0x58) = 0;
    *(undefined4 *)(unaff_RBP + -0x54) = 0x3f800000;
    param_7._4_4_ = 0;
    param_9._4_4_ = 0;
    param_11._4_4_ = 0;
    param_13._4_4_ = 0x3f800000;
    uVar12 = FUN_1800946d0(&param_6,unaff_RBP + 0x30,unaff_RBP + -0x10);
    FUN_1800946d0(uVar12,unaff_RBP + -0x50);
    lVar3 = *(longlong *)(lVar11 + 0x1cd8);
    iVar13 = iVar13 + 1;
    uVar12 = *(undefined8 *)(unaff_RBP + -0x48);
    puVar15 = puVar15 + 0x50;
    uVar8 = *(undefined8 *)(unaff_RBP + -0x40);
    uVar9 = *(undefined8 *)(unaff_RBP + -0x38);
    puVar1 = (undefined8 *)(lVar14 + 0x1270 + lVar3);
    *puVar1 = *(undefined8 *)(unaff_RBP + -0x50);
    puVar1[1] = uVar12;
    uVar12 = *(undefined8 *)(unaff_RBP + -0x30);
    uVar10 = *(undefined8 *)(unaff_RBP + -0x28);
    puVar1 = (undefined8 *)(lVar14 + 0x1280 + lVar3);
    *puVar1 = uVar8;
    puVar1[1] = uVar9;
    uVar4 = *(undefined4 *)(unaff_RBP + -0x20);
    uVar5 = *(undefined4 *)(unaff_RBP + -0x1c);
    uVar6 = *(undefined4 *)(unaff_RBP + -0x18);
    uVar7 = *(undefined4 *)(unaff_RBP + -0x14);
    puVar1 = (undefined8 *)(lVar14 + 0x1290 + lVar3);
    *puVar1 = uVar12;
    puVar1[1] = uVar10;
    puVar2 = (undefined4 *)(lVar14 + 0x12a0 + lVar3);
    *puVar2 = uVar4;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    lVar14 = lVar14 + 0x40;
    *(undefined4 *)(*(longlong *)(lVar11 + 0x1cd8) + 0x1480) = 0x3f800000;
  } while (iVar13 < 4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800c7ab5(void)
void FUN_1800c7ab5(void)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = _DAT_180c86938;
  *(undefined4 *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1480) = 0;
  uVar1 = *(undefined8 *)(lVar2 + 0x1cd8);
  uVar3 = FUN_1800be610();
  FUN_18029d150(uVar1,0x15,uVar3,0x30,0xffffffff);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800c7b10(undefined8 param_1,longlong param_2)
void FUN_1800c7b10(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_148 [12];
  undefined4 uStack_13c;
  undefined4 uStack_12c;
  undefined4 uStack_11c;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [64];
  undefined1 auStack_48 [64];
  
  if ((*(longlong *)(param_2 + 0x11d10) != 0) &&
     (*(char *)(*(longlong *)(param_2 + 0x11d10) + 900) != '\0')) {
    FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),0x14,*(undefined8 *)(param_2 + 0x11d10),
                  0x30,0xffffffff);
    FUN_180286010(param_2 + 0x11d20,auStack_88,0);
    FUN_180287b30(param_2 + 0x11de0,auStack_148);
    uStack_10c = 0x3f800000;
    uStack_f8 = 0xbf00000000000000;
    uStack_f0 = 0;
    uStack_108 = 0x3f000000;
    uStack_100 = 0;
    uStack_d8 = 0x3f000000;
    uStack_d4 = 0x3f000000;
    uStack_d0 = 0;
    uStack_cc = 0x3f800000;
    uStack_13c = 0;
    uStack_12c = 0;
    uStack_11c = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0x3f800000;
    uStack_dc = 0;
    uVar2 = FUN_1800946d0(auStack_148,auStack_48,auStack_88);
    FUN_1800946d0(uVar2,&uStack_c8,&uStack_108);
    lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    *(undefined8 *)(lVar1 + 0x1370) = uStack_c8;
    *(undefined8 *)(lVar1 + 0x1378) = uStack_c0;
    *(undefined8 *)(lVar1 + 0x1380) = uStack_b8;
    *(undefined8 *)(lVar1 + 5000) = uStack_b0;
    *(undefined8 *)(lVar1 + 0x1390) = uStack_a8;
    *(undefined8 *)(lVar1 + 0x1398) = uStack_a0;
    *(undefined8 *)(lVar1 + 0x13a0) = uStack_98;
    *(undefined8 *)(lVar1 + 0x13a8) = uStack_90;
    return;
  }
  uVar2 = *(undefined8 *)(_DAT_180c86938 + 0x1cd8);
  uVar3 = FUN_1800be610();
  FUN_18029d150(uVar2,0x14,uVar3,0x30,0xffffffff);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




