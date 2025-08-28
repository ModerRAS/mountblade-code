#include "TaleWorlds.Native.Split.h"

// 03_rendering_part159_sub002_sub002.c - 1 个函数

// 函数: void FUN_180366df0(longlong param_1)
void FUN_180366df0(longlong param_1)

{
  short *psVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 **ppuVar4;
  undefined8 *******pppppppuVar5;
  undefined8 ****ppppuVar6;
  ulonglong *puVar7;
  char cVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 ****ppppuVar14;
  uint *puVar15;
  undefined8 ***pppuVar16;
  undefined8 *puVar17;
  undefined8 *****pppppuVar18;
  undefined *puVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  longlong lVar22;
  undefined8 ******ppppppuVar23;
  undefined *puVar24;
  undefined8 *puVar25;
  undefined8 **ppuVar26;
  longlong lVar27;
  longlong *plVar28;
  ulonglong *puVar29;
  int iVar30;
  undefined8 uVar31;
  undefined8 ***pppuVar32;
  undefined8 ***pppuVar33;
  ulonglong uVar34;
  undefined1 uVar35;
  uint uVar36;
  uint uVar37;
  ulonglong uVar38;
  bool bVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined1 auStack_498 [32];
  undefined4 uStack_478;
  char cStack_468;
  uint uStack_464;
  undefined1 uStack_460;
  undefined8 *puStack_458;
  undefined8 *puStack_450;
  undefined8 ****ppppuStack_448;
  undefined8 *puStack_440;
  undefined8 *puStack_438;
  undefined8 *puStack_430;
  undefined4 uStack_428;
  longlong *plStack_420;
  longlong *plStack_418;
  int iStack_410;
  longlong *plStack_408;
  longlong lStack_400;
  undefined8 ******ppppppuStack_3f8;
  undefined8 ****ppppuStack_3f0;
  undefined1 auStack_3e8 [8];
  longlong *plStack_3e0;
  ulonglong uStack_3d8;
  longlong lStack_3d0;
  undefined4 uStack_3c8;
  undefined8 uStack_3c4;
  undefined4 uStack_3bc;
  longlong lStack_3b8;
  longlong lStack_3b0;
  longlong lStack_3a8;
  undefined4 uStack_3a0;
  undefined8 ****ppppuStack_398;
  undefined *puStack_390;
  undefined1 *puStack_388;
  undefined4 uStack_380;
  ulonglong uStack_378;
  undefined8 *******pppppppuStack_370;
  undefined8 *******pppppppuStack_368;
  undefined8 *******pppppppuStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined4 uStack_348;
  longlong *plStack_340;
  longlong *plStack_338;
  undefined8 *******pppppppuStack_330;
  longlong *plStack_328;
  longlong *plStack_320;
  longlong *plStack_318;
  undefined4 uStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined4 uStack_2f0;
  char cStack_2e8;
  uint uStack_2e4;
  undefined8 **ppuStack_2e0;
  undefined8 **ppuStack_2d8;
  undefined8 ****ppppuStack_2d0;
  undefined8 uStack_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  uint *puStack_2b8;
  longlong *plStack_2b0;
  undefined1 uStack_2a8;
  uint uStack_2a0;
  undefined8 uStack_298;
  longlong *plStack_290;
  longlong *plStack_288;
  undefined8 **ppuStack_280;
  undefined8 **ppuStack_278;
  longlong *plStack_270;
  ulonglong *puStack_268;
  ulonglong *puStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  undefined8 **ppuStack_248;
  undefined8 **ppuStack_240;
  undefined8 **ppuStack_238;
  undefined8 **ppuStack_230;
  undefined8 **ppuStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  uint uStack_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  uint uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 **ppuStack_1c0;
  undefined8 uStack_1b8;
  undefined8 ****ppppuStack_1b0;
  undefined8 ****ppppuStack_1a8;
  undefined8 ******ppppppuStack_1a0;
  undefined8 ******ppppppuStack_198;
  undefined1 auStack_190 [16];
  undefined *puStack_180;
  undefined *puStack_178;
  undefined4 uStack_170;
  undefined auStack_168 [16];
  undefined *puStack_158;
  undefined *puStack_150;
  undefined4 uStack_148;
  undefined auStack_140 [16];
  undefined *puStack_130;
  undefined *puStack_128;
  undefined4 uStack_120;
  undefined auStack_118 [16];
  undefined *puStack_108;
  undefined *puStack_100;
  undefined4 uStack_f8;
  undefined auStack_f0 [24];
  undefined *puStack_d8;
  undefined *puStack_d0;
  int iStack_c8;
  undefined auStack_c0 [72];
  ulonglong uStack_78;
  
  uStack_1b8 = 0xfffffffffffffffe;
  uStack_78 = _DAT_180bf00a8 ^ (ulonglong)auStack_498;
  uVar36 = 0;
  uStack_464 = 0;
  puStack_268 = (ulonglong *)0x0;
  puStack_260 = (ulonglong *)0x0;
  uStack_258 = 0;
  uStack_250 = 3;
  lStack_400 = param_1;
  FUN_1801af140(*(undefined8 *)(param_1 + 0xa0));
  puVar7 = puStack_260;
  uStack_348 = 3;
  pppppppuStack_370 = &pppppppuStack_370;
  pppppppuStack_368 = &pppppppuStack_370;
  pppppppuStack_360 = (undefined8 *******)0x0;
  uStack_358 = 0;
  uStack_350 = 0;
  puVar29 = puStack_268;
  do {
    if (puVar29 == puVar7) {
      uStack_298 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 600);
      puStack_308 = (undefined8 *)0x0;
      puStack_300 = (undefined8 *)0x0;
      puStack_2f8 = (undefined8 *)0x0;
      uStack_2f0 = 3;
      puVar10 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x2000,3);
      puVar17 = puVar10 + 0x400;
      lStack_3b8 = 0;
      lStack_3b0 = 0;
      lStack_3a8 = 0;
      uStack_3a0 = 3;
      puStack_450 = puVar10;
      puStack_308 = puVar10;
      puStack_300 = puVar10;
      puStack_2f8 = puVar17;
      lVar22 = FUN_18062b420(_DAT_180c8ed18,0x2000,3);
      if (lStack_3b8 != lStack_3b0) {
                    // WARNING: Subroutine does not return
        memmove(lVar22,lStack_3b8,lStack_3b0 - lStack_3b8);
      }
      if (lStack_3b8 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lStack_3b8);
      }
      lStack_3a8 = lVar22 + 0x2000;
      plStack_328 = (longlong *)0x0;
      plStack_320 = (longlong *)0x0;
      plStack_318 = (longlong *)0x0;
      uStack_310 = 3;
      lStack_3b8 = lVar22;
      lStack_3b0 = lVar22;
      plVar11 = (longlong *)FUN_18062b420(_DAT_180c8ed18,0x2000,3);
      plStack_338 = plVar11 + 0x400;
      puStack_440 = (undefined8 *)0x0;
      puStack_438 = (undefined8 *)0x0;
      puStack_430 = (undefined8 *)0x0;
      uStack_428 = 3;
      plStack_418 = plVar11;
      plStack_408 = plVar11;
      plStack_328 = plVar11;
      plStack_320 = plVar11;
      plStack_318 = plStack_338;
      puVar12 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x2000,3);
      if (puStack_440 != puStack_438) {
                    // WARNING: Subroutine does not return
        memmove(puVar12,puStack_440,(longlong)puStack_438 - (longlong)puStack_440);
      }
      if (puStack_440 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puStack_440);
      }
      puStack_430 = puVar12 + 0x400;
      pppppppuStack_330 = pppppppuStack_368;
      puStack_440 = puVar12;
      puStack_438 = puVar12;
      if ((undefined8 ********)pppppppuStack_368 != &pppppppuStack_370) {
        puVar12 = puStack_450;
        uVar40 = (undefined4)uStack_2c8;
        uVar41 = uStack_2c8._4_4_;
        uVar42 = uStack_2c0;
        uVar43 = uStack_2bc;
        do {
          ppppppuVar23 = pppppppuStack_330[4];
          uVar34 = 0;
          pppppuVar18 = ppppppuVar23[0x38];
          puVar10 = puStack_450;
          puStack_458 = puVar12;
          ppppppuStack_3f8 = ppppppuVar23;
          puStack_300 = puVar12;
          if ((longlong)ppppppuVar23[0x39] - (longlong)pppppuVar18 >> 3 != 0) {
            do {
              puVar21 = puStack_300;
              ppppuStack_3f0 = pppppuVar18[uVar34];
              if (puStack_300 < puVar17) {
                *puStack_300 = ppppuStack_3f0;
                puVar12 = puVar10;
              }
              else {
                lVar27 = (longlong)puStack_300 - (longlong)puVar10;
                lVar22 = lVar27 >> 3;
                if (lVar22 == 0) {
                  lVar22 = 1;
LAB_1803672a8:
                  puVar12 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar22 * 8,3);
                }
                else {
                  lVar22 = lVar22 * 2;
                  if (lVar22 != 0) goto LAB_1803672a8;
                  puVar12 = (undefined8 *)0x0;
                }
                if (puVar10 != puVar21) {
                    // WARNING: Subroutine does not return
                  memmove(puVar12,puVar10,lVar27);
                }
                *puVar12 = ppppuStack_3f0;
                if (puVar10 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900(puVar10);
                }
                puVar17 = puVar12 + lVar22;
                ppppppuVar23 = ppppppuStack_3f8;
                puStack_308 = puVar12;
                puStack_2f8 = puVar17;
                puStack_300 = puVar12;
              }
              puStack_300 = puStack_300 + 1;
              uVar34 = uVar34 + 1;
              pppppuVar18 = ppppppuVar23[0x38];
              plVar11 = plStack_418;
              puVar10 = puVar12;
              uVar36 = uStack_464;
            } while (uVar34 < (ulonglong)((longlong)ppppppuVar23[0x39] - (longlong)pppppuVar18 >> 3)
                    );
          }
          puStack_450 = puVar10;
          plVar28 = plStack_408;
          puVar10 = puStack_300;
          puStack_458 = puStack_300;
          if (puVar12 != puStack_300) {
            do {
              puVar17 = (undefined8 *)*puVar12;
              uStack_3c8 = 0x3f800000;
              uStack_3bc = 3;
              uStack_3d8 = 1;
              plStack_3e0 = (longlong *)&DAT_180be0000;
              lStack_3d0 = 0;
              uStack_3c4 = 0x40000000;
              puStack_108 = &UNK_1809fdc18;
              puStack_100 = auStack_f0;
              auStack_f0[0] = 0;
              uStack_f8 = 4;
              puStack_458 = puVar17;
              strcpy_s(auStack_f0,0x10,&UNK_180a0c280);
              uVar37 = uVar36 | 1;
              puVar24 = &DAT_18098bc73;
              if (puStack_100 != (undefined *)0x0) {
                puVar24 = puStack_100;
              }
              puVar19 = &DAT_18098bc73;
              if ((undefined *)puVar17[0x1b] != (undefined *)0x0) {
                puVar19 = (undefined *)puVar17[0x1b];
              }
              uStack_464 = uVar37;
              lVar22 = strstr(puVar19,puVar24);
              if (lVar22 == 0) {
                puStack_130 = &UNK_1809fdc18;
                puStack_128 = auStack_118;
                auStack_118[0] = 0;
                uStack_120 = 7;
                strcpy_s(auStack_118,0x10,&UNK_180a205b0);
                uVar37 = uVar36 | 3;
                puVar24 = &DAT_18098bc73;
                if (puStack_128 != (undefined *)0x0) {
                  puVar24 = puStack_128;
                }
                puVar19 = &DAT_18098bc73;
                if ((undefined *)puVar17[0x1b] != (undefined *)0x0) {
                  puVar19 = (undefined *)puVar17[0x1b];
                }
                uStack_464 = uVar37;
                lVar22 = strstr(puVar19,puVar24);
                if (lVar22 != 0) goto LAB_18036764f;
                puStack_158 = &UNK_1809fdc18;
                puStack_150 = auStack_140;
                auStack_140[0] = 0;
                uStack_148 = 6;
                strcpy_s(auStack_140,0x10,&UNK_180a205f0);
                uVar37 = uVar36 | 7;
                puVar24 = &DAT_18098bc73;
                if (puStack_150 != (undefined *)0x0) {
                  puVar24 = puStack_150;
                }
                puVar19 = &DAT_18098bc73;
                if ((undefined *)puVar17[0x1b] != (undefined *)0x0) {
                  puVar19 = (undefined *)puVar17[0x1b];
                }
                uStack_464 = uVar37;
                lVar22 = strstr(puVar19,puVar24);
                if (lVar22 != 0) goto LAB_18036764f;
                puStack_180 = &UNK_1809fdc18;
                puStack_178 = auStack_168;
                auStack_168[0] = 0;
                uStack_170 = 7;
                strcpy_s(auStack_168,0x10,&UNK_180a205e8);
                uVar37 = uVar36 | 0xf;
                puVar24 = &DAT_18098bc73;
                if (puStack_178 != (undefined *)0x0) {
                  puVar24 = puStack_178;
                }
                puVar19 = &DAT_18098bc73;
                if ((undefined *)puVar17[0x1b] != (undefined *)0x0) {
                  puVar19 = (undefined *)puVar17[0x1b];
                }
                uStack_464 = uVar37;
                lVar22 = strstr(puVar19,puVar24);
                if (lVar22 != 0) goto LAB_18036764f;
              }
              else {
LAB_18036764f:
                lVar22 = 1;
              }
              if ((uVar37 & 8) != 0) {
                uStack_464 = uVar37 & 0xfffffff7;
                puStack_180 = &UNK_18098bcb0;
                uVar37 = uStack_464;
              }
              if ((uVar37 & 4) != 0) {
                uStack_464 = uVar37 & 0xfffffffb;
                puStack_158 = &UNK_18098bcb0;
                uVar37 = uStack_464;
              }
              if ((uVar37 & 2) != 0) {
                uStack_464 = uVar37 & 0xfffffffd;
                puStack_130 = &UNK_18098bcb0;
                uVar37 = uStack_464;
              }
              uVar36 = uVar37;
              if ((uVar37 & 1) != 0) {
                uStack_464 = uVar37 & 0xfffffffe;
                puStack_108 = &UNK_18098bcb0;
                uVar36 = uStack_464;
              }
              if ((char)lVar22 == '\0') {
                FUN_180368c20(auStack_3e8);
                puStack_450 = puVar12;
              }
              else {
                lStack_3b0 = lStack_3b8;
                FUN_1802e8c60(puVar17,&lStack_3b8);
                cStack_468 = '\0';
                puStack_d8 = &UNK_1809fcc58;
                puStack_d0 = auStack_c0;
                auStack_c0[0] = 0;
                iStack_c8 = 0x13;
                strcpy_s(auStack_c0,0x40);
                puStack_390 = &UNK_180a3c3e0;
                uStack_378 = 0;
                puStack_388 = (undefined1 *)0x0;
                uStack_380 = 0;
                FUN_1806277c0(&puStack_390,iStack_c8);
                if (0 < iStack_c8) {
                  puVar24 = &DAT_18098bc73;
                  if (puStack_d0 != (undefined *)0x0) {
                    puVar24 = puStack_d0;
                  }
                    // WARNING: Subroutine does not return
                  memcpy(puStack_388,puVar24,(longlong)(iStack_c8 + 1));
                }
                if ((puStack_d0 != (undefined *)0x0) &&
                   (uStack_380 = 0, puStack_388 != (undefined1 *)0x0)) {
                  *puStack_388 = 0;
                }
                lVar22 = FUN_1802f17b0(puVar17,&puStack_390);
                puStack_390 = &UNK_180a3c3e0;
                if (puStack_388 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                puStack_388 = (undefined1 *)0x0;
                uStack_378 = uStack_378 & 0xffffffff00000000;
                puStack_390 = &UNK_18098bcb0;
                puStack_d8 = &UNK_18098bcb0;
                if ((lVar22 != 0) && (*(char *)(lVar22 + 0xa8) != '\0')) {
                  cStack_468 = '\x01';
                  uVar40 = *(undefined4 *)(lVar22 + 0x98);
                  uVar41 = *(undefined4 *)(lVar22 + 0x9c);
                  uVar42 = *(undefined4 *)(lVar22 + 0xa0);
                  uVar43 = *(undefined4 *)(lVar22 + 0xa4);
                }
                iStack_410 = 0;
                ppppppuStack_3f8 = (undefined8 ******)0x0;
                if (lStack_3b0 - lStack_3b8 >> 3 != 0) {
                  do {
                    ppppppuVar23 = ppppppuStack_3f8;
                    plVar11 = *(longlong **)(lStack_3b8 + (longlong)ppppppuStack_3f8 * 8);
                    plStack_420 = plVar11;
                    plStack_270 = plVar11;
                    if ((*(byte *)((longlong)plVar11 + 0x2c4) & 2) == 0) {
                      cVar8 = FUN_180366b10(plVar11);
                      if ((cVar8 == '\0') && (plVar11[0x22] == 0)) {
                        uVar36 = *(uint *)(plVar11 + 0x59);
                        for (lVar22 = plVar11[0x2d]; uVar34 = (ulonglong)uVar36, lVar22 != 0;
                            lVar22 = *(longlong *)(lVar22 + 0x168)) {
                          uVar36 = uVar36 & *(uint *)(lVar22 + 0x2c8);
                        }
                        for (puVar15 = (uint *)plStack_3e0[uVar34 % (uStack_3d8 & 0xffffffff)];
                            puVar15 != (uint *)0x0; puVar15 = *(uint **)(puVar15 + 6)) {
                          if (uVar36 == *puVar15) goto LAB_1803678fd;
                        }
                        puVar15 = (uint *)plStack_3e0[uStack_3d8];
LAB_1803678fd:
                        plStack_340 = (longlong *)0x0;
                        ppppuStack_3f0 = (undefined8 ****)0x0;
                        uStack_2a0 = uVar36;
                        FUN_1802f21b0(plVar11,uVar34);
                        plVar13 = (longlong *)FUN_1803a0010(uStack_298,plVar11);
                        plStack_408 = plVar13;
                        if ((plVar13[3] != 0) ||
                           (puVar17 = puStack_458,
                           (plVar11[0x1f] - plVar11[0x1e] & 0xfffffffffffffff8U) != 0)) {
                          FUN_1802f0510(plVar11,0);
                          if (puVar15 == (uint *)plStack_3e0[uStack_3d8]) {
                            ppppuVar14 = (undefined8 ****)FUN_18062b1e0(_DAT_180c8ed18,0x98,8);
                            *ppppuVar14 = (undefined8 ***)&UNK_180a21690;
                            *ppppuVar14 = (undefined8 ***)&UNK_180a21720;
                            *(undefined4 *)(ppppuVar14 + 1) = 0;
                            *ppppuVar14 = (undefined8 ***)&UNK_180a14860;
                            *(undefined4 *)(ppppuVar14 + 2) = 4;
                            ppppuVar14[3] = (undefined8 ***)0x0;
                            ppppuVar14[4] = (undefined8 ***)0x0;
                            *(undefined4 *)(ppppuVar14 + 1) = 0;
                            ppppuVar14[5] = (undefined8 ***)0x0;
                            *ppppuVar14 = (undefined8 ***)&UNK_180a20758;
                            ppppuStack_1b0 = ppppuVar14 + 6;
                            *ppppuStack_1b0 = (undefined8 ***)0x0;
                            ppppuVar14[7] = (undefined8 ***)0x0;
                            ppppuVar14[8] = (undefined8 ***)0x0;
                            *(undefined4 *)(ppppuVar14 + 9) = 3;
                            *(undefined4 *)(ppppuVar14 + 0x10) = 0;
                            ppppuVar14[10] = (undefined8 ***)0x0;
                            ppppuVar14[0xb] = (undefined8 ***)0x0;
                            ppppuVar14[0xc] = (undefined8 ***)0x0;
                            ppppuVar14[0xd] = (undefined8 ***)0x0;
                            ppppuVar14[0xe] = (undefined8 ***)0x0;
                            ppppuVar14[0xf] = (undefined8 ***)0x0;
                            *(undefined1 *)((longlong)ppppuVar14 + 0x84) = 0;
                            *(undefined4 *)(ppppuVar14 + 0x11) = 0x3f800000;
                            *(undefined4 *)((longlong)ppppuVar14 + 0x8c) = 0x3f800000;
                            *(undefined4 *)(ppppuVar14 + 0x12) = 0x3f800000;
                            *(undefined4 *)((longlong)ppppuVar14 + 0x94) = 0x7f7fffff;
                            ppppuStack_448 = ppppuVar14;
                            ppppuStack_2d0 = ppppuVar14;
                            ppppuStack_1a8 = ppppuVar14;
                            (*(code *)(*ppppuVar14)[5])(ppppuVar14);
                            if (cStack_468 != '\0') {
                              *(undefined1 *)((longlong)ppppuVar14 + 0x84) = 1;
                              *(undefined4 *)(ppppuVar14 + 0x11) = uVar40;
                              *(undefined4 *)((longlong)ppppuVar14 + 0x8c) = uVar41;
                              *(undefined4 *)(ppppuVar14 + 0x12) = uVar42;
                              *(undefined4 *)((longlong)ppppuVar14 + 0x94) = uVar43;
                            }
                            plStack_288 = plVar11;
                            (**(code **)(*plVar11 + 0x28))(plVar11);
                            plStack_288 = (longlong *)0x0;
                            ppppuStack_398 = ppppuVar14;
                            plStack_340 = plVar11;
                            ppppuStack_2d0 = &ppppuStack_398;
                            (*(code *)(*ppppuVar14)[5])(ppppuVar14);
                            ppppuStack_3f0 = &ppppuStack_398;
                            FUN_1802edcd0(plVar11);
                            if (ppppuStack_398 != (undefined8 ****)0x0) {
                              (*(code *)(*ppppuStack_398)[7])();
                            }
                            uStack_1f8._0_4_ = (uint)plVar11;
                            uStack_1f8._4_4_ = (uint)((ulonglong)plVar11 >> 0x20);
                            uStack_1f0._0_4_ = SUB84(ppppuVar14,0);
                            uStack_1f0._4_4_ = (undefined4)((ulonglong)ppppuVar14 >> 0x20);
                            uStack_1e0 = (uint)uStack_1f8;
                            uStack_1dc = uStack_1f8._4_4_;
                            uStack_1d8 = (undefined4)uStack_1f0;
                            uStack_1d4 = uStack_1f0._4_4_;
                            uVar38 = uVar34 % (uStack_3d8 & 0xffffffff);
                            plVar20 = plStack_3e0 + uVar38;
                            for (puVar15 = (uint *)*plVar20; ppppuStack_3f0 = ppppuVar14,
                                uStack_1f8 = plVar11, uStack_1f0 = ppppuVar14, uStack_1e8 = uVar36,
                                puVar15 != (uint *)0x0; puVar15 = *(uint **)(puVar15 + 6)) {
                              if (uVar36 == *puVar15) {
                                uStack_2a8 = 0;
                                puStack_2b8 = puVar15;
                                goto LAB_180367be6;
                              }
                            }
                            puVar15 = (uint *)FUN_18062b420(_DAT_180c8ed18,0x20,
                                                            (undefined1)uStack_3bc);
                            *puVar15 = uStack_1e8;
                            puVar15[1] = uStack_1e4;
                            puVar15[2] = uStack_1e0;
                            puVar15[3] = uStack_1dc;
                            *(ulonglong *)(puVar15 + 4) = CONCAT44(uStack_1d4,uStack_1d8);
                            puVar15[6] = 0;
                            puVar15[7] = 0;
                            uStack_478 = 1;
                            FUN_18066c220(&uStack_3c8);
                            if (cStack_2e8 != '\0') {
                              uVar38 = uVar34 % (ulonglong)uStack_2e4;
                              FUN_180368e80(auStack_3e8,uStack_2e4);
                            }
                            *(longlong *)(puVar15 + 6) = plStack_3e0[uVar38];
                            plStack_3e0[uVar38] = (longlong)puVar15;
                            lStack_3d0 = lStack_3d0 + 1;
                            plVar20 = plStack_3e0 + uVar38;
                            uStack_2a8 = 1;
                            ppppuVar14 = ppppuStack_448;
                            puStack_2b8 = puVar15;
LAB_180367be6:
                            plStack_2b0 = plVar20;
                            (*(code *)(*ppppuVar14)[7])(ppppuVar14);
                            plVar20 = plVar11;
                            plVar11 = plStack_420;
                          }
                          else {
                            plVar20 = *(longlong **)(puVar15 + 2);
                            if (plVar20 != (longlong *)0x0) {
                              plStack_290 = plVar20;
                              (**(code **)(*plVar20 + 0x28))(plVar20);
                            }
                            plStack_290 = (longlong *)0x0;
                            ppppuVar14 = *(undefined8 *****)(puVar15 + 4);
                            ppppuStack_448 = ppppuVar14;
                            ppppuStack_3f0 = ppppuVar14;
                            plStack_340 = plVar20;
                          }
                          plVar2 = (longlong *)plVar13[1];
                          lVar22 = *plVar2;
                          plVar13 = plVar2;
                          if (lVar22 == 0) {
                            plVar13 = plVar2 + 1;
                            lVar22 = *plVar13;
                            while (lVar22 == 0) {
                              plVar13 = plVar13 + 1;
                              lVar22 = *plVar13;
                            }
                          }
                          if (lVar22 != plVar2[plStack_408[2]]) {
                            do {
                              lVar27 = lStack_400;
                              plVar28 = (longlong *)**(undefined8 **)(lVar22 + 8);
                              uVar35 = (*(float *)((longlong)plVar11 + 0x74) *
                                        *(float *)(plVar11 + 0x11) -
                                       *(float *)(plVar11 + 0xf) *
                                       *(float *)((longlong)plVar11 + 0x84)) *
                                       *(float *)(plVar11 + 0x12) +
                                       (*(float *)(plVar11 + 0xf) * *(float *)(plVar11 + 0x10) -
                                       *(float *)(plVar11 + 0xe) * *(float *)(plVar11 + 0x11)) *
                                       *(float *)((longlong)plVar11 + 0x94) +
                                       (*(float *)(plVar11 + 0xe) *
                                        *(float *)((longlong)plVar11 + 0x84) -
                                       *(float *)((longlong)plVar11 + 0x74) *
                                       *(float *)(plVar11 + 0x10)) * *(float *)(plVar11 + 0x13) <
                                       0.0;
                              uStack_460 = uVar35;
                              uStack_2c8 = FUN_1803a0500();
                              uStack_2c0 = CONCAT31(uStack_2c0._1_3_,uVar35);
                              ppuStack_2d8 = (undefined8 **)0x0;
                              puVar17 = (undefined8 *)(lVar27 + 0x70);
                              puVar10 = *(undefined8 **)(lVar27 + 0x80);
                              puVar12 = puVar17;
                              if (puVar10 == (undefined8 *)0x0) {
LAB_180367d65:
                                puVar25 = puVar17;
                              }
                              else {
                                do {
                                  if (((ulonglong)puVar10[4] < uStack_2c8) ||
                                     (((ulonglong)puVar10[4] <= uStack_2c8 &&
                                      (*(byte *)(puVar10 + 5) < (byte)uVar35)))) {
                                    bVar39 = true;
                                    puVar21 = (undefined8 *)*puVar10;
                                  }
                                  else {
                                    bVar39 = false;
                                    puVar21 = (undefined8 *)puVar10[1];
                                  }
                                  puVar25 = puVar10;
                                  if (bVar39) {
                                    puVar25 = puVar12;
                                  }
                                  puVar10 = puVar21;
                                  puVar12 = puVar25;
                                } while (puVar21 != (undefined8 *)0x0);
                                if (((puVar25 == puVar17) || (uStack_2c8 < (ulonglong)puVar25[4]))
                                   || ((uStack_2c8 <= (ulonglong)puVar25[4] &&
                                       ((byte)uVar35 < *(byte *)(puVar25 + 5)))))
                                goto LAB_180367d65;
                              }
                              if (puVar25 == puVar17) {
                                (**(code **)(*plVar28 + 0xa8))(plVar28,&ppuStack_2e0);
                                ppuVar26 = ppuStack_2e0;
                                FUN_180279640(ppuStack_2e0,*(undefined8 *)(lVar22 + 8));
                                (*(code *)(*ppuVar26)[0x29])(ppuVar26,&DAT_180a00300);
                                (*(code *)(*ppuVar26)[0x19])(ppuVar26,1);
                                iVar30 = 0;
                                puVar17 = ppuVar26[7];
                                if ((longlong)ppuVar26[8] - (longlong)puVar17 >> 4 != 0) {
                                  lVar27 = 0;
                                  do {
                                    lVar3 = *(longlong *)((longlong)puVar17 + lVar27);
                                    if (*(char *)(lVar3 + 0xf9) == '\0') {
                                      uVar31 = FUN_18062b1e0(_DAT_180c8ed18,0xc0,8,9);
                                      uVar31 = FUN_180084ea0(uVar31);
                                      *(undefined8 *)(lVar3 + 0x1d8) = uVar31;
                                      LOCK();
                                      *(undefined1 *)(lVar3 + 0xf9) = 1;
                                      UNLOCK();
                                    }
                                    iVar30 = iVar30 + 1;
                                    lVar27 = lVar27 + 0x10;
                                    puVar17 = ppuVar26[7];
                                    uVar35 = uStack_460;
                                  } while ((ulonglong)(longlong)iVar30 <
                                           (ulonglong)
                                           ((longlong)ppuVar26[8] - (longlong)puVar17 >> 4));
                                }
                                uStack_1d0 = (undefined4)uStack_2c8;
                                uStack_1cc = uStack_2c8._4_4_;
                                uStack_1c8 = uStack_2c0;
                                uStack_1c4 = uStack_2bc;
                                ppuStack_1c0 = ppuVar26;
                                if (ppuVar26 != (undefined8 **)0x0) {
                                  (*(code *)(*ppuVar26)[5])(ppuVar26);
                                }
                                FUN_180368cc0(lStack_400 + 0x70,auStack_190);
                                ppuStack_280 = ppuVar26;
                                if (ppuVar26 != (undefined8 **)0x0) {
                                  (*(code *)(*ppuVar26)[5])(ppuVar26);
                                }
                                ppuStack_280 = (undefined8 **)0x0;
                                ppuStack_2d8 = ppuVar26;
                                if (ppuStack_1c0 != (undefined8 **)0x0) {
                                  (*(code *)(*ppuStack_1c0)[7])();
                                }
                                ppppuVar14 = ppppuStack_448;
                                plVar11 = plStack_420;
                                if (ppuStack_2e0 != (undefined8 **)0x0) {
                                  (*(code *)(*ppuStack_2e0)[7])();
                                  ppppuVar14 = ppppuStack_448;
                                  plVar11 = plStack_420;
                                }
                              }
                              else {
                                ppuVar26 = (undefined8 **)puVar25[6];
                                if (ppuVar26 != (undefined8 **)0x0) {
                                  ppuStack_278 = ppuVar26;
                                  (*(code *)(*ppuVar26)[5])(ppuVar26);
                                }
                                ppuStack_278 = (undefined8 **)0x0;
                                ppuStack_2d8 = ppuVar26;
                              }
                              ppppuVar6 = ppppuStack_448;
                              ppuStack_240 = (undefined8 **)plVar11[0xe];
                              ppuStack_238 = (undefined8 **)plVar11[0xf];
                              ppuStack_230 = (undefined8 **)plVar11[0x10];
                              ppuStack_228 = (undefined8 **)plVar11[0x11];
                              uStack_220 = (undefined4)plVar11[0x12];
                              uStack_21c = *(undefined4 *)((longlong)plVar11 + 0x94);
                              ppuVar4 = (undefined8 **)plVar11[0x12];
                              uStack_218 = (undefined4)plVar11[0x13];
                              uStack_214 = *(undefined4 *)((longlong)plVar11 + 0x9c);
                              uStack_210 = (undefined4)plVar11[0x14];
                              uStack_20c = *(undefined4 *)((longlong)plVar11 + 0xa4);
                              uStack_208 = (undefined4)plVar11[0x15];
                              uStack_204 = *(undefined4 *)((longlong)plVar11 + 0xac);
                              uStack_200 = CONCAT31(uStack_200._1_3_,uVar35);
                              pppuVar32 = ppppuVar14[7];
                              ppuStack_248 = ppuVar26;
                              if (pppuVar32 < ppppuVar14[8]) {
                                ppppuVar14[7] = pppuVar32 + 10;
                                *pppuVar32 = ppuVar26;
                                pppuVar32[1] = ppuStack_240;
                                pppuVar32[2] = ppuStack_238;
                                pppuVar32[3] = ppuStack_230;
                                pppuVar32[4] = ppuStack_228;
                                pppuVar32[5] = ppuVar4;
                                *(undefined4 *)(pppuVar32 + 6) = uStack_218;
                                *(undefined4 *)((longlong)pppuVar32 + 0x34) = uStack_214;
                                *(undefined4 *)(pppuVar32 + 7) = uStack_210;
                                *(undefined4 *)((longlong)pppuVar32 + 0x3c) = uStack_20c;
                                *(undefined4 *)(pppuVar32 + 8) = uStack_208;
                                *(undefined4 *)((longlong)pppuVar32 + 0x44) = uStack_204;
                                *(undefined4 *)(pppuVar32 + 9) = uStack_200;
                                *(undefined4 *)((longlong)pppuVar32 + 0x4c) = uStack_1fc;
                              }
                              else {
                                pppuVar33 = ppppuVar14[6];
                                lVar27 = ((longlong)pppuVar32 - (longlong)pppuVar33) / 0x50;
                                if (lVar27 == 0) {
                                  lVar27 = 1;
LAB_180367fe6:
                                  pppuVar16 = (undefined8 ***)
                                              FUN_18062b420(_DAT_180c8ed18,lVar27 * 0x50,
                                                            *(undefined1 *)(ppppuStack_448 + 9));
                                  pppuVar32 = ppppuVar6[7];
                                  pppuVar33 = ppppuVar6[6];
                                }
                                else {
                                  lVar27 = lVar27 * 2;
                                  if (lVar27 != 0) goto LAB_180367fe6;
                                  pppuVar16 = (undefined8 ***)0x0;
                                }
                                puVar17 = (undefined8 *)FUN_180368e20(pppuVar33,pppuVar32);
                                *puVar17 = ppuStack_248;
                                puVar17[1] = ppuStack_240;
                                puVar17[2] = ppuStack_238;
                                puVar17[3] = ppuStack_230;
                                puVar17[4] = ppuStack_228;
                                puVar17[5] = CONCAT44(uStack_21c,uStack_220);
                                *(undefined4 *)(puVar17 + 6) = uStack_218;
                                *(undefined4 *)((longlong)puVar17 + 0x34) = uStack_214;
                                *(undefined4 *)(puVar17 + 7) = uStack_210;
                                *(undefined4 *)((longlong)puVar17 + 0x3c) = uStack_20c;
                                *(undefined4 *)(puVar17 + 8) = uStack_208;
                                *(undefined4 *)((longlong)puVar17 + 0x44) = uStack_204;
                                *(undefined4 *)(puVar17 + 9) = uStack_200;
                                *(undefined4 *)((longlong)puVar17 + 0x4c) = uStack_1fc;
                                if (ppppuVar6[6] != (undefined8 ***)0x0) {
                    // WARNING: Subroutine does not return
                                  FUN_18064e900();
                                }
                                ppppuVar6[6] = pppuVar16;
                                ppppuVar6[7] = (undefined8 ***)(puVar17 + 10);
                                ppppuStack_448[8] = pppuVar16 + lVar27 * 10;
                                ppppuVar14 = ppppuStack_448;
                                plVar11 = plStack_420;
                              }
                              if (ppuVar26 != (undefined8 **)0x0) {
                                (*(code *)(*ppuVar26)[7])(ppuVar26);
                              }
                              lVar22 = *(longlong *)(lVar22 + 0x10);
                              while (lVar22 == 0) {
                                plVar13 = plVar13 + 1;
                                lVar22 = *plVar13;
                              }
                            } while (lVar22 != *(longlong *)(plStack_408[1] + plStack_408[2] * 8));
                            plStack_338 = plStack_318;
                            plStack_418 = plStack_328;
                            plStack_420 = plStack_270;
                            plVar20 = plStack_340;
                            plVar28 = plStack_320;
                            plVar11 = plStack_270;
                          }
                          plVar13 = plStack_418;
                          puVar17 = puStack_458;
                          if (plVar11 == plVar20) {
                            if ((undefined8 *)plVar20[0x2d] != puStack_458) {
                              FUN_1802e8a50(puStack_458,plVar20,1,0);
                            }
                            FUN_1803a00c0(*(undefined8 *)(*(longlong *)(lStack_400 + 0xa0) + 600),
                                          plVar20);
                          }
                          else if (plVar28 < plStack_338) {
                            plStack_320 = plVar28 + 1;
                            *plVar28 = (longlong)plVar11;
                            plVar28 = plStack_320;
                          }
                          else {
                            lVar27 = (longlong)plVar28 - (longlong)plStack_418;
                            lVar22 = lVar27 >> 3;
                            if (lVar22 == 0) {
                              lVar22 = 1;
LAB_18036813f:
                              plVar11 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar22 * 8);
                            }
                            else {
                              lVar22 = lVar22 * 2;
                              if (lVar22 != 0) goto LAB_18036813f;
                              plVar11 = (longlong *)0x0;
                            }
                            if (plVar13 != plVar28) {
                    // WARNING: Subroutine does not return
                              memmove(plVar11,plVar13,lVar27);
                            }
                            *plVar11 = (longlong)plStack_420;
                            plVar28 = plVar11 + 1;
                            if (plVar13 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
                              FUN_18064e900(plVar13);
                            }
                            plStack_338 = plVar11 + lVar22;
                            puVar17 = puStack_458;
                            plStack_418 = plVar11;
                            plStack_328 = plVar11;
                            plStack_320 = plVar28;
                            plStack_318 = plStack_338;
                          }
                          ppppppuVar23 = ppppppuStack_3f8;
                          if (plVar20 != (longlong *)0x0) {
                            (**(code **)(*plVar20 + 0x38))(plVar20);
                            ppppppuVar23 = ppppppuStack_3f8;
                          }
                        }
                      }
                      else {
                        cVar8 = FUN_180366900(plVar11);
                        if ((cVar8 != '\0') && ((undefined8 *)plVar11[0x2d] != puVar17)) {
                          FUN_1802e8a50(puVar17,plVar11,1,0);
                        }
                      }
                    }
                    iStack_410 = iStack_410 + 1;
                    ppppppuStack_3f8 = (undefined8 ******)((longlong)ppppppuVar23 + 1);
                    plVar11 = plStack_418;
                    puVar10 = puStack_300;
                    uVar36 = uStack_464;
                  } while ((ulonglong)(longlong)iStack_410 <
                           (ulonglong)(lStack_3b0 - lStack_3b8 >> 3));
                }
                lVar22 = lStack_400;
                iVar30 = (int)((longlong)plVar28 - (longlong)plVar11 >> 3) + -1;
                lVar27 = (longlong)iVar30;
                if (-1 < iVar30) {
                  do {
                    uStack_478 = 0x2a;
                    FUN_180198980(*(undefined8 *)(lVar22 + 0xa0),plVar11[lVar27]);
                    lVar27 = lVar27 + -1;
                    uVar36 = uStack_464;
                  } while (-1 < lVar27);
                }
                lVar22 = *plStack_3e0;
                plVar28 = plStack_3e0;
                if (lVar22 == 0) {
                  plVar28 = plStack_3e0 + 1;
                  lVar22 = *plVar28;
                  while (lVar22 == 0) {
                    plVar28 = plVar28 + 1;
                    lVar22 = *plVar28;
                  }
                  lVar22 = *plVar28;
                }
                if (lVar22 != plStack_3e0[uStack_3d8]) {
                  do {
                    (**(code **)(**(longlong **)(lVar22 + 0x10) + 0x160))();
                    lVar22 = *(longlong *)(lVar22 + 0x18);
                    while (lVar22 == 0) {
                      plVar28 = plVar28 + 1;
                      lVar22 = *plVar28;
                    }
                  } while (lVar22 != plStack_3e0[uStack_3d8]);
                }
                FUN_1802e8c60(puVar17);
                if (puStack_438 < puStack_430) {
                  *puStack_438 = puVar17;
                  plVar28 = plVar11;
                  puVar17 = puStack_438;
                }
                else {
                  lVar22 = (longlong)puStack_438 - (longlong)puStack_440 >> 3;
                  if (lVar22 == 0) {
                    lVar22 = 1;
LAB_180368378:
                    puVar17 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18);
                  }
                  else {
                    lVar22 = lVar22 * 2;
                    if (lVar22 != 0) goto LAB_180368378;
                    puVar17 = (undefined8 *)0x0;
                  }
                  if (puStack_440 != puStack_438) {
                    // WARNING: Subroutine does not return
                    memmove(puVar17,puStack_440,(longlong)puStack_438 - (longlong)puStack_440);
                  }
                  *puVar17 = puStack_458;
                  if (puStack_440 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  puStack_430 = puVar17 + lVar22;
                  plVar28 = plStack_418;
                  puStack_440 = puVar17;
                }
                puStack_438 = puVar17 + 1;
                iVar30 = 0;
                if ((longlong)puStack_438 - (longlong)puStack_440 >> 3 != 0) {
                  lVar22 = 0;
                  do {
                    lVar27 = *(longlong *)((longlong)puStack_440 + lVar22);
                    psVar1 = (short *)(lVar27 + 0x2b0);
                    *psVar1 = *psVar1 + 1;
                    if (*(longlong *)(lVar27 + 0x168) != 0) {
                      func_0x0001802eeba0();
                    }
                    iVar30 = iVar30 + 1;
                    lVar22 = lVar22 + 8;
                  } while ((ulonglong)(longlong)iVar30 <
                           (ulonglong)((longlong)puStack_438 - (longlong)puStack_440 >> 3));
                }
                iVar30 = 0;
                if ((longlong)puStack_438 - (longlong)puStack_440 >> 3 != 0) {
                  lVar22 = 0;
                  do {
                    FUN_1802e7dc0(*(undefined8 *)((longlong)puStack_440 + lVar22));
                    iVar30 = iVar30 + 1;
                    lVar22 = lVar22 + 8;
                  } while ((ulonglong)(longlong)iVar30 <
                           (ulonglong)((longlong)puStack_438 - (longlong)puStack_440 >> 3));
                }
                puStack_438 = puStack_440;
                plStack_320 = plVar28;
                FUN_180368c20(auStack_3e8);
                plVar11 = plVar28;
              }
              puVar12 = puStack_450 + 1;
              puStack_450 = puVar12;
            } while (puVar12 != puVar10);
            puStack_450 = puStack_308;
            puVar17 = puStack_2f8;
            puVar12 = puStack_308;
            plStack_408 = plVar28;
          }
          pppppppuStack_330 = (undefined8 *******)func_0x00018066bd70(pppppppuStack_330);
          puVar10 = puStack_450;
        } while ((undefined8 ********)pppppppuStack_330 != &pppppppuStack_370);
      }
      if (puStack_440 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      if (plVar11 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(plVar11);
      }
      if (lStack_3b8 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      if (puVar10 == (undefined8 *)0x0) {
        FUN_18004b730(&pppppppuStack_370);
        FUN_180057830(&puStack_268);
                    // WARNING: Subroutine does not return
        FUN_1808fc050(uStack_78 ^ (ulonglong)auStack_498);
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar10);
    }
    ppppppuVar23 = (undefined8 ******)*puVar29;
    ppppppuStack_1a0 = ppppppuVar23;
    if (ppppppuVar23 != (undefined8 ******)0x0) {
      (*(code *)(*ppppppuVar23)[5])(ppppppuVar23);
    }
    if (0x15 < *(uint *)(ppppppuVar23 + 0x53)) {
      lVar22 = 0;
      do {
        if ((&UNK_180a20720 + lVar22)[(longlong)(ppppppuVar23[0x52] + -0x301440e4)] !=
            (&UNK_180a20720)[lVar22]) goto LAB_180366fc4;
        lVar22 = lVar22 + 1;
      } while (lVar22 < 0x16);
      ppppppuStack_198 = ppppppuVar23;
      bVar39 = true;
      pppppppuVar5 = &pppppppuStack_370;
      pppppppuVar9 = pppppppuStack_360;
      while (pppppppuVar9 != (undefined8 *******)0x0) {
        bVar39 = ppppppuVar23 < pppppppuVar9[4];
        pppppppuVar5 = pppppppuVar9;
        if (bVar39) {
          pppppppuVar9 = (undefined8 *******)pppppppuVar9[1];
        }
        else {
          pppppppuVar9 = (undefined8 *******)*pppppppuVar9;
        }
      }
      pppppppuVar9 = pppppppuVar5;
      if (bVar39) {
        if (pppppppuVar5 == pppppppuStack_368) goto LAB_180366f7d;
        pppppppuVar9 = (undefined8 *******)func_0x00018066b9a0(pppppppuVar5);
      }
      if (pppppppuVar9[4] < ppppppuVar23) {
LAB_180366f7d:
        lVar22 = FUN_18062b420(_DAT_180c8ed18,0x28,(undefined1)uStack_348);
        *(undefined8 *******)(lVar22 + 0x20) = ppppppuVar23;
        if (((undefined8 ********)pppppppuVar5 == &pppppppuStack_370) ||
           (ppppppuVar23 < pppppppuVar5[4])) {
          uVar31 = 0;
        }
        else {
          uVar31 = 1;
        }
                    // WARNING: Subroutine does not return
        FUN_18066bdc0(lVar22,pppppppuVar5,&pppppppuStack_370,uVar31);
      }
    }
LAB_180366fc4:
    if (ppppppuVar23 != (undefined8 ******)0x0) {
      (*(code *)(*ppppppuVar23)[7])(ppppppuVar23);
    }
    puVar29 = puVar29 + 1;
  } while( true );
}







