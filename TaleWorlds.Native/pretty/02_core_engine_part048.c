#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part048.c - 2 个函数

// 函数: void FUN_1800896b0(void)
void FUN_1800896b0(void)

{
  undefined1 uVar1;
  byte bVar2;
  bool bVar3;
  undefined1 *puVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined **ppuVar10;
  longlong lVar11;
  byte *pbVar12;
  char *pcVar13;
  undefined *puVar14;
  undefined *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  longlong *plVar19;
  undefined1 *puVar20;
  longlong lVar21;
  uint *puVar22;
  undefined1 *puVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  uint uVar26;
  ulonglong uVar27;
  longlong lVar28;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_418 [32];
  undefined *puStack_3f8;
  char acStack_3e8 [4];
  uint uStack_3e4;
  undefined **ppuStack_3e0;
  undefined *puStack_3d8;
  longlong lStack_3d0;
  uint uStack_3c8;
  ulonglong uStack_3c0;
  longlong lStack_3b8;
  undefined *puStack_3b0;
  undefined1 *puStack_3a8;
  undefined4 uStack_3a0;
  ulonglong uStack_398;
  undefined *puStack_390;
  undefined1 *puStack_388;
  undefined4 uStack_380;
  ulonglong uStack_378;
  undefined *puStack_370;
  undefined1 *puStack_368;
  undefined4 uStack_360;
  ulonglong uStack_358;
  undefined *puStack_350;
  undefined1 *puStack_348;
  int iStack_340;
  ulonglong uStack_338;
  undefined *puStack_330;
  longlong lStack_328;
  undefined4 uStack_320;
  ulonglong uStack_318;
  longlong lStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined4 uStack_2f8;
  ulonglong uStack_2f0;
  undefined *puStack_2e8;
  undefined1 *puStack_2e0;
  undefined4 uStack_2d8;
  undefined8 uStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined4 uStack_2b8;
  ulonglong uStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  ulonglong uStack_290;
  longlong lStack_288;
  undefined **ppuStack_278;
  longlong *plStack_270;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined1 uStack_25c;
  undefined *apuStack_258 [2];
  code *pcStack_248;
  code *pcStack_240;
  undefined1 auStack_238 [16];
  code *pcStack_228;
  code *pcStack_220;
  undefined1 auStack_218 [16];
  code *pcStack_208;
  code *pcStack_200;
  longlong lStack_1f8;
  longlong lStack_1f0;
  longlong lStack_1e8;
  longlong lStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined8 uStack_1c8;
  undefined **ppuStack_1c0;
  undefined1 auStack_1b8 [16];
  undefined *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined4 uStack_198;
  undefined1 auStack_190 [16];
  undefined *apuStack_180 [5];
  undefined *puStack_158;
  undefined *puStack_150;
  int iStack_148;
  ulonglong uStack_38;
  
  uStack_1c8 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_418;
  uVar27 = 0;
  uStack_3e4 = 0;
  lStack_310 = _DAT_180c868a8;
  iVar7 = (int)((*(longlong *)(_DAT_180c868a8 + 0x10) - *(longlong *)(_DAT_180c868a8 + 8)) / 0x60);
  if (0 < iVar7) {
    plVar19 = (longlong *)(*(longlong *)(_DAT_180c868a8 + 8) + 8);
    uVar17 = uVar27;
    uVar24 = uVar27;
    do {
      iVar18 = (int)uVar24;
      if ((int)plVar19[1] == 6) {
        uVar24 = uVar27;
        while (uVar8 = uVar24 + 1, *(char *)(*plVar19 + uVar24) == (&DAT_1809fd128)[uVar24]) {
          uVar24 = uVar8;
          if (uVar8 == 7) {
            if (iVar18 == -1) goto LAB_18008984e;
            lStack_1f0 = (longlong)
                         (int)(*(longlong *)(_DAT_180c868a8 + 0x30) -
                               *(longlong *)(_DAT_180c868a8 + 0x28) >> 5);
            if (lStack_1f0 < 1) goto LAB_180089861;
            lStack_288 = 0;
            lStack_3b8 = (longlong)iVar18 * 0x60;
            lVar16 = _DAT_180c868a8;
            goto LAB_1800897d5;
          }
        }
      }
      uVar24 = (ulonglong)(iVar18 + 1);
      uVar17 = uVar17 + 1;
      plVar19 = plVar19 + 0xc;
    } while ((longlong)uVar17 < (longlong)iVar7);
  }
LAB_18008984e:
                    // WARNING: Subroutine does not return
  FUN_180062300(_DAT_180c86928,&UNK_180a00648);
LAB_1800897d5:
  lVar11 = lStack_3b8;
  uVar26 = 0;
  lVar28 = lStack_288 * 0x20 + *(longlong *)(lVar16 + 0x28);
  puVar14 = &DAT_18098bc73;
  if (_DAT_180bf6688 != (undefined *)0x0) {
    puVar14 = _DAT_180bf6688;
  }
  lVar9 = -1;
  do {
    lVar9 = lVar9 + 1;
  } while (puVar14[lVar9] != '\0');
  if (*(int *)(lVar28 + 0x10) < (int)lVar9) {
LAB_180089891:
    bVar3 = false;
  }
  else {
    pcVar13 = (char *)((longlong)(*(int *)(lVar28 + 0x10) - (int)lVar9) + *(longlong *)(lVar28 + 8))
    ;
    lVar9 = (longlong)puVar14 - (longlong)pcVar13;
    do {
      cVar6 = *pcVar13;
      cVar5 = pcVar13[lVar9];
      if (cVar6 != cVar5) break;
      pcVar13 = pcVar13 + 1;
    } while (cVar5 != '\0');
    if (cVar6 != cVar5) goto LAB_180089891;
    bVar3 = true;
  }
  if (bVar3) {
    iVar7 = *(int *)(lStack_3b8 + 0x5c + *(longlong *)(lVar16 + 8));
    uVar17 = (ulonglong)iVar7;
    cVar6 = *(char *)(uVar17 + *(longlong *)(*_DAT_180c86870 + 0x8c8));
    if (cVar6 == '\0') {
      puStack_1a8 = &UNK_1809fdc18;
      puStack_1a0 = auStack_190;
      auStack_190[0] = 0;
      uStack_198 = 0;
      strcpy_s(auStack_190,0x10,&DAT_18098bc73);
      ppuVar10 = &puStack_1a8;
      uVar26 = (uint)uVar27 | 2;
    }
    else {
      ppuVar10 = (undefined **)FUN_180624030(apuStack_180);
      uVar26 = (uint)uVar27 | 1;
    }
    puStack_350 = &UNK_180a3c3e0;
    uStack_338 = 0;
    puStack_348 = (undefined1 *)0x0;
    iStack_340 = 0;
    uStack_3e4 = uVar26;
    FUN_1806277c0(&puStack_350);
    puVar4 = puStack_348;
    if (0 < *(int *)(ppuVar10 + 2)) {
      puVar14 = &DAT_18098bc73;
      if (ppuVar10[1] != (undefined *)0x0) {
        puVar14 = ppuVar10[1];
      }
                    // WARNING: Subroutine does not return
      memcpy(puStack_348,puVar14,(longlong)(*(int *)(ppuVar10 + 2) + 1));
    }
    if ((ppuVar10[1] != (undefined *)0x0) && (iStack_340 = 0, puStack_348 != (undefined1 *)0x0)) {
      *puStack_348 = 0;
    }
    iVar18 = iStack_340;
    if ((uVar26 & 2) != 0) {
      uVar26 = uVar26 & 0xfffffffd;
      puStack_1a8 = &UNK_18098bcb0;
      uStack_3e4 = uVar26;
    }
    if ((uVar26 & 1) != 0) {
      uVar26 = uVar26 & 0xfffffffe;
      apuStack_180[0] = &UNK_18098bcb0;
      uStack_3e4 = uVar26;
    }
    uVar27 = (ulonglong)uVar26;
    puStack_308 = &UNK_180a3c3e0;
    uStack_2f0 = 0;
    puStack_300 = (undefined *)0x0;
    uStack_2f8 = 0;
    if ((iVar7 < 0) ||
       (lVar16 = *(longlong *)(*_DAT_180c86870 + 0x888),
       (ulonglong)(*(longlong *)(*_DAT_180c86870 + 0x890) - lVar16 >> 5) <= uVar17)) {
      lVar16 = FUN_180628ca0();
    }
    else {
      lVar16 = uVar17 * 0x20 + lVar16;
    }
    puStack_3b0 = &UNK_180a3c3e0;
    uStack_398 = 0;
    puStack_3a8 = (undefined1 *)0x0;
    uStack_3a0 = 0;
    FUN_1806277c0(&puStack_3b0,*(undefined4 *)(lVar16 + 0x10));
    lVar11 = lStack_310;
    puVar23 = puStack_3a8;
    if (*(int *)(lVar16 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puStack_3a8,*(undefined8 *)(lVar16 + 8),*(int *)(lVar16 + 0x10) + 1);
    }
    if (*(longlong *)(lVar16 + 8) != 0) {
      uStack_3a0 = 0;
      if (puStack_3a8 != (undefined1 *)0x0) {
        *puStack_3a8 = 0;
      }
      uStack_398 = uStack_398 & 0xffffffff;
    }
    puStack_3f8 = &DAT_18098bc73;
    if (*(undefined **)(lVar28 + 8) != (undefined *)0x0) {
      puStack_3f8 = *(undefined **)(lVar28 + 8);
    }
    puVar14 = *(undefined **)(lStack_3b8 + 0x28 + *(longlong *)(lStack_310 + 8));
    puVar15 = &DAT_18098bc73;
    if (puVar14 != (undefined *)0x0) {
      puVar15 = puVar14;
    }
    puVar20 = &DAT_18098bc73;
    if (puStack_3a8 != (undefined1 *)0x0) {
      puVar20 = puStack_3a8;
    }
    FUN_180628040(&puStack_308,&UNK_180a00680,puVar20,puVar15);
    cVar5 = FUN_180624af0(&puStack_308);
    lVar16 = lStack_3b8;
    if (cVar5 != '\0') {
      puStack_3d8 = &UNK_180a3c3e0;
      uStack_3c0 = 0;
      lStack_3d0 = 0;
      uStack_3c8 = 0;
      puVar14 = *(undefined **)(lStack_3b8 + 0x28 + *(longlong *)(lVar11 + 8));
      puVar15 = &DAT_18098bc73;
      if (puVar14 != (undefined *)0x0) {
        puVar15 = puVar14;
      }
      puVar20 = &DAT_18098bc73;
      if (puVar23 != (undefined1 *)0x0) {
        puVar20 = puVar23;
      }
      FUN_180628040(&puStack_3d8,&UNK_180a0055c,puVar20,puVar15);
      if (cVar6 != '\0') {
        puStack_2a8 = &UNK_180a3c3e0;
        uStack_290 = 0;
        uStack_2a0 = 0;
        uStack_298 = 0;
        if (((0 < (int)uStack_3c8) && (0 < iVar18)) &&
           (lVar11 = strstr(lStack_3d0,puVar4), lVar11 != 0)) {
          iVar7 = (int)lVar11 - (int)lStack_3d0;
          if (uStack_3c8 < (uint)(iVar18 + iVar7)) {
            iVar18 = uStack_3c8 - iVar7;
          }
          uVar26 = iVar18 + iVar7;
          if (uVar26 < uStack_3c8) {
            lVar11 = (longlong)(int)uVar26;
            do {
              *(undefined1 *)((lVar11 - iVar18) + lStack_3d0) = *(undefined1 *)(lVar11 + lStack_3d0)
              ;
              uVar26 = uVar26 + 1;
              lVar11 = lVar11 + 1;
            } while (uVar26 < uStack_3c8);
          }
          uStack_3c8 = uStack_3c8 - iVar18;
          *(undefined1 *)((ulonglong)uStack_3c8 + lStack_3d0) = 0;
        }
        uStack_2a0 = 0;
        uStack_290 = uStack_290 & 0xffffffff00000000;
        puStack_2a8 = &UNK_18098bcb0;
      }
      FUN_180627560(&puStack_158,lVar28);
      lVar11 = lStack_310;
      puStack_2c8 = &UNK_180a3c3e0;
      uStack_2b0 = 0;
      puStack_2c0 = (undefined *)0x0;
      uStack_2b8 = 0;
      uVar1 = *(undefined1 *)(lVar16 + 0x58 + *(longlong *)(lStack_310 + 8));
      ppuStack_1c0 = &puStack_2e8;
      puStack_2e8 = &UNK_180a3c3e0;
      uStack_2d0 = 0;
      puStack_2e0 = (undefined1 *)0x0;
      uStack_2d8 = 0;
      FUN_1806277c0(&puStack_2e8,iStack_148);
      if (0 < iStack_148) {
        puVar14 = &DAT_18098bc73;
        if (puStack_150 != (undefined *)0x0) {
          puVar14 = puStack_150;
        }
                    // WARNING: Subroutine does not return
        memcpy(puStack_2e0,puVar14,(longlong)(iStack_148 + 1));
      }
      if ((puStack_150 != (undefined *)0x0) && (uStack_2d8 = 0, puStack_2e0 != (undefined1 *)0x0)) {
        *puStack_2e0 = 0;
      }
      ppuStack_3e0 = &puStack_370;
      puStack_370 = &UNK_180a3c3e0;
      uStack_358 = 0;
      puStack_368 = (undefined1 *)0x0;
      uStack_360 = 0;
      FUN_1806277c0(&puStack_370,uStack_3c8);
      if (uStack_3c8 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_368,lStack_3d0,uStack_3c8 + 1);
      }
      if (lStack_3d0 != 0) {
        uStack_360 = 0;
        if (puStack_368 != (undefined1 *)0x0) {
          *puStack_368 = 0;
        }
        uStack_358 = uStack_358 & 0xffffffff;
      }
      puStack_3f8 = (undefined *)CONCAT71(puStack_3f8._1_7_,uVar1);
      cVar6 = FUN_180087700(&lStack_1f8,&puStack_370,&puStack_2e8,&puStack_2c8);
      lVar16 = lStack_1f8;
      if (cVar6 == '\0') {
        puVar14 = &DAT_18098bc73;
        if (puStack_2c0 != (undefined *)0x0) {
          puVar14 = puStack_2c0;
        }
        puVar15 = &DAT_18098bc73;
        if (puStack_300 != (undefined *)0x0) {
          puVar15 = puStack_300;
        }
        FUN_180626f80(&UNK_180a00688,puVar15,puVar14);
      }
      else {
        *(undefined4 *)(lStack_1f8 + 4) =
             *(undefined4 *)(lStack_3b8 + 0x5c + *(longlong *)(lVar11 + 8));
        FUN_18008b440(lVar11,lStack_1f8);
        FUN_180057b00(lVar11 + 0x48,auStack_1b8,lVar16 + 0x58);
      }
      puStack_2c8 = &UNK_180a3c3e0;
      if (puStack_2c0 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_2c0 = (undefined *)0x0;
      uStack_2b0 = uStack_2b0 & 0xffffffff00000000;
      puStack_2c8 = &UNK_18098bcb0;
      puStack_158 = &UNK_18098bcb0;
      puStack_3d8 = &UNK_180a3c3e0;
      if (lStack_3d0 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_3d0 = 0;
      uStack_3c0 = uStack_3c0 & 0xffffffff00000000;
      puStack_3d8 = &UNK_18098bcb0;
    }
    puStack_3b0 = &UNK_180a3c3e0;
    if (puVar23 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar23);
    }
    puStack_3a8 = (undefined1 *)0x0;
    uStack_398 = uStack_398 & 0xffffffff00000000;
    puStack_3b0 = &UNK_18098bcb0;
    puStack_308 = &UNK_180a3c3e0;
    if (puStack_300 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_300 = (undefined *)0x0;
    uStack_2f0 = uStack_2f0 & 0xffffffff00000000;
    puStack_308 = &UNK_18098bcb0;
    puStack_350 = &UNK_180a3c3e0;
    if (puVar4 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar4);
    }
    puStack_348 = (undefined1 *)0x0;
    uStack_338 = uStack_338 & 0xffffffff00000000;
    puStack_350 = &UNK_18098bcb0;
    lVar16 = lStack_310;
  }
  else {
    iVar7 = *(int *)(lStack_3b8 + 0x5c + *(longlong *)(lVar16 + 8));
    if ((iVar7 < 0) ||
       (lVar9 = *(longlong *)(*_DAT_180c86870 + 0x888),
       (ulonglong)(*(longlong *)(*_DAT_180c86870 + 0x890) - lVar9 >> 5) <=
       (ulonglong)(longlong)iVar7)) {
      lVar9 = FUN_180628ca0();
    }
    else {
      lVar9 = (longlong)iVar7 * 0x20 + lVar9;
    }
    puStack_390 = &UNK_180a3c3e0;
    uStack_378 = 0;
    puStack_388 = (undefined1 *)0x0;
    uStack_380 = 0;
    if (*(int *)(lVar9 + 0x10) != 0) {
      iVar7 = *(int *)(lVar9 + 0x10) + 1;
      if (iVar7 < 0x10) {
        iVar7 = 0x10;
      }
      puStack_388 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar7,0x13);
      *puStack_388 = 0;
      uVar17 = (ulonglong)puStack_388 & 0xffffffffffc00000;
      if (uVar17 != 0) {
        lVar21 = ((longlong)puStack_388 - uVar17 >> 0x10) * 0x50 + 0x80 + uVar17;
        puVar22 = (uint *)(lVar21 - (ulonglong)*(uint *)(lVar21 + 4));
        if ((*(byte *)((longlong)puVar22 + 0xe) & 2) == 0) {
          uVar26 = puVar22[7];
          if (0x3ffffff < uVar26) {
            uVar26 = *puVar22 << 0x10;
          }
        }
        else {
          uVar26 = puVar22[7];
          if (uVar26 < 0x4000000) {
            uVar24 = (ulonglong)uVar26;
          }
          else {
            uVar24 = (ulonglong)*puVar22 << 0x10;
          }
          if (0x3ffffff < uVar26) {
            uVar26 = *puVar22 << 0x10;
          }
          uVar26 = uVar26 - (int)(((longlong)puStack_388 -
                                  (((longlong)((longlong)puVar22 + (-0x80 - uVar17)) / 0x50) *
                                   0x10000 + uVar17)) % uVar24);
        }
      }
      uStack_378 = CONCAT44(uStack_378._4_4_,uVar26);
      if (*(int *)(lVar9 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_388,*(undefined8 *)(lVar9 + 8),*(int *)(lVar9 + 0x10) + 1);
      }
    }
    puVar4 = puStack_388;
    if (*(longlong *)(lVar9 + 8) != 0) {
      uStack_380 = 0;
      if (puStack_388 != (undefined1 *)0x0) {
        *puStack_388 = 0;
      }
      uStack_378 = uStack_378 & 0xffffffff;
    }
    puStack_330 = &UNK_180a3c3e0;
    uStack_318 = 0;
    lStack_328 = 0;
    uStack_320 = 0;
    puStack_3f8 = &DAT_18098bc73;
    if (*(undefined **)(lVar28 + 8) != (undefined *)0x0) {
      puStack_3f8 = *(undefined **)(lVar28 + 8);
    }
    puVar14 = *(undefined **)(lVar11 + 0x28 + *(longlong *)(lVar16 + 8));
    puVar15 = &DAT_18098bc73;
    if (puVar14 != (undefined *)0x0) {
      puVar15 = puVar14;
    }
    puVar23 = &DAT_18098bc73;
    if (puStack_388 != (undefined1 *)0x0) {
      puVar23 = puStack_388;
    }
    FUN_180628040(&puStack_330,&UNK_180a00680,puVar23,puVar15);
    cVar6 = FUN_180624a00(&puStack_330);
    if (cVar6 != '\0') {
      ppuStack_278 = &puStack_330;
      plStack_270 = &lStack_1e8;
      ppuStack_3e0 = (undefined **)auStack_218;
      uStack_1d0 = 3;
      uStack_1d8 = 0;
      lStack_1e0 = 0;
      lStack_1e8 = 0;
      pcStack_220 = _guard_check_icall;
      pcStack_228 = (code *)0x0;
      pcStack_240 = _guard_check_icall;
      pcStack_248 = (code *)0x0;
      pcStack_208 = (code *)0x0;
      pcStack_200 = _guard_check_icall;
      uStack_268 = 0;
      uStack_260 = *(undefined4 *)(*(longlong *)(lVar16 + 8) + 0x5c + lVar11);
      uStack_25c = *(undefined1 *)(*(longlong *)(lVar16 + 8) + 0x58 + lVar11);
      FUN_18008a620(&ppuStack_278);
      if (lStack_1e0 - lStack_1e8 >> 3 != 0) {
        lVar11 = lVar16 + 0x48;
        lVar28 = FUN_18062b420(_DAT_180c8ed18,0x40,*(undefined1 *)(lVar16 + 0x70));
        FUN_180627ae0(lVar28 + 0x20,&puStack_330);
        lVar9 = FUN_1800590b0(lVar11,acStack_3e8,lVar28 + 0x20);
        if (acStack_3e8[0] != '\0') {
          if (lVar9 == lVar11) goto LAB_18008a32f;
          if (*(int *)(lVar9 + 0x30) == 0) goto LAB_18008a327;
          if (*(int *)(lVar28 + 0x30) == 0) goto LAB_18008a32f;
          pbVar12 = *(byte **)(lVar9 + 0x28);
          lVar16 = *(longlong *)(lVar28 + 0x28) - (longlong)pbVar12;
          goto LAB_18008a310;
        }
        FUN_18005d1f0(extraout_XMM0_Da,lVar28);
        FUN_18008b690(lVar16,&lStack_1e8);
      }
      ppuStack_3e0 = (undefined **)auStack_218;
      if (pcStack_208 != (code *)0x0) {
        (*pcStack_208)(auStack_218,0,0);
      }
      ppuStack_3e0 = (undefined **)auStack_238;
      if (pcStack_228 != (code *)0x0) {
        (*pcStack_228)(auStack_238,0,0);
      }
      ppuStack_3e0 = apuStack_258;
      if (pcStack_248 != (code *)0x0) {
        (*pcStack_248)(apuStack_258,0,0);
      }
      if (lStack_1e8 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
    puStack_330 = &UNK_180a3c3e0;
    if (lStack_328 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_328 = 0;
    uStack_318 = uStack_318 & 0xffffffff00000000;
    puStack_330 = &UNK_18098bcb0;
    puStack_390 = &UNK_180a3c3e0;
    if (puVar4 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar4);
    }
    puStack_388 = (undefined1 *)0x0;
    uStack_378 = uStack_378 & 0xffffffff00000000;
    puStack_390 = &UNK_18098bcb0;
  }
  lStack_288 = lStack_288 + 1;
  if (lStack_1f0 <= lStack_288) {
LAB_180089861:
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_418);
  }
  goto LAB_1800897d5;
  while (pbVar12 = pbVar12 + 1, uVar26 != 0) {
LAB_18008a310:
    bVar2 = *pbVar12;
    uVar26 = (uint)pbVar12[lVar16];
    if (bVar2 != uVar26) break;
  }
  if ((int)(bVar2 - uVar26) < 1) {
LAB_18008a327:
    uVar25 = 1;
  }
  else {
LAB_18008a32f:
    uVar25 = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar28,lVar9,lVar11,uVar25);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18008a480(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)
void FUN_18008a480(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined *puStack_40;
  undefined1 *puStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = _DAT_180c868a8;
  puVar3 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
    puVar3 = *(undefined **)(param_2 + 8);
  }
  lVar2 = strstr(puVar3,&DAT_1809fe2c8,param_3,param_4,0xfffffffffffffffe);
  if (lVar2 == 0) {
    puStack_40 = &UNK_180a3c3e0;
    uStack_28 = 0;
    puStack_38 = (undefined1 *)0x0;
    uStack_30 = 0;
    FUN_1806277c0(&puStack_40,*(undefined4 *)(param_2 + 0x10));
    if (0 < *(int *)(param_2 + 0x10)) {
      puVar3 = &DAT_18098bc73;
      if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
        puVar3 = *(undefined **)(param_2 + 8);
      }
                    // WARNING: Subroutine does not return
      memcpy(puStack_38,puVar3,(longlong)(*(int *)(param_2 + 0x10) + 1));
    }
    if ((*(longlong *)(param_2 + 8) != 0) && (uStack_30 = 0, puStack_38 != (undefined1 *)0x0)) {
      *puStack_38 = 0;
    }
    FUN_180066df0(lVar1 + 0x28,&puStack_40);
    puStack_40 = &UNK_180a3c3e0;
    if (puStack_38 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    FUN_180626f80(&UNK_180a006b0);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018008afd2)
// WARNING: Removing unreachable block (ram,0x00018008aff5)
// WARNING: Removing unreachable block (ram,0x00018008b034)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



