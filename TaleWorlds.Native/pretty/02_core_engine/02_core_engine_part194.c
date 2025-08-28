#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part194.c - 2 个函数

// 函数: void FUN_180176de0(void)
void FUN_180176de0(void)

{
  undefined8 *******pppppppuVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined *puVar11;
  undefined8 *******pppppppuVar12;
  longlong *plVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined *puVar16;
  longlong lVar17;
  undefined8 ******ppppppuVar18;
  int iVar19;
  longlong lVar20;
  uint *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  bool bVar26;
  undefined1 auStack_3b8 [32];
  undefined *puStack_398;
  undefined1 *puStack_390;
  undefined4 uStack_388;
  ulonglong uStack_380;
  uint uStack_378;
  int iStack_374;
  int iStack_370;
  longlong lStack_368;
  undefined8 ******ppppppuStack_360;
  undefined8 ******ppppppuStack_358;
  undefined8 ******ppppppuStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined4 uStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined4 uStack_320;
  ulonglong uStack_318;
  longlong lStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
  undefined4 uStack_2f0;
  undefined *puStack_2e8;
  longlong lStack_2e0;
  undefined4 uStack_2d0;
  longlong lStack_2c8;
  ulonglong uStack_2c0;
  longlong lStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined1 *puStack_288;
  undefined4 uStack_280;
  undefined1 auStack_278 [16];
  undefined8 uStack_268;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong uStack_38;
  
  uStack_298 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_3b8;
  uStack_378 = 0;
  lStack_310 = _DAT_180c8a9d0;
  *(undefined8 *)(_DAT_180c8a9d0 + 0xf0) = 0;
  uStack_338 = 3;
  ppppppuStack_360 = &ppppppuStack_360;
  ppppppuStack_358 = &ppppppuStack_360;
  ppppppuStack_350 = (undefined8 *******)0x0;
  uStack_348 = 0;
  uStack_340 = 0;
  lStack_2b8 = *_DAT_180c86870;
  iStack_370 = 0;
  lVar20 = *(longlong *)(lStack_2b8 + 0x8a8);
  if (*(longlong *)(lStack_2b8 + 0x8b0) - lVar20 >> 5 != 0) {
    lStack_368 = 0;
    do {
      lVar10 = lStack_368;
      iVar8 = iStack_370;
      puVar16 = *(undefined **)(lStack_368 * 0x20 + 8 + lVar20);
      puVar11 = &DAT_18098bc73;
      if (puVar16 != (undefined *)0x0) {
        puVar11 = puVar16;
      }
      puStack_398 = &UNK_180a3c3e0;
      uStack_380 = 0;
      puStack_390 = (undefined1 *)0x0;
      uStack_388 = 0;
      if (puVar11 != (undefined *)0x0) {
        lVar20 = -1;
        do {
          lVar17 = lVar20;
          lVar20 = lVar17 + 1;
        } while (puVar11[lVar20] != '\0');
        if ((int)lVar20 != 0) {
          iVar19 = (int)lVar17 + 2;
          iVar8 = iVar19;
          if (iVar19 < 0x10) {
            iVar8 = 0x10;
          }
          puVar9 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar8,0x13);
          *puVar9 = 0;
          puStack_390 = puVar9;
          uVar7 = FUN_18064e990(puVar9);
          uStack_380 = CONCAT44(uStack_380._4_4_,uVar7);
                    // WARNING: Subroutine does not return
          memcpy(puVar9,puVar11,iVar19);
        }
      }
      uStack_388 = 0;
      FUN_180175f80(&UNK_180a3c3e0,&puStack_2e8,&puStack_398);
      puStack_390 = (undefined1 *)0x0;
      uStack_380 = uStack_380 & 0xffffffff00000000;
      puStack_398 = &UNK_18098bcb0;
      puStack_308 = (undefined8 *)0x0;
      puStack_300 = (undefined8 *)0x0;
      uStack_2f8 = 0;
      uStack_2f0 = 3;
      puStack_290 = &UNK_1809fdc18;
      puStack_288 = auStack_278;
      auStack_278[0] = 0;
      uStack_280 = 4;
      strcpy_s(auStack_278,0x10,&UNK_180a092c4);
      FUN_18062cb00(&puStack_2e8,&puStack_308,&puStack_290);
      puStack_290 = &UNK_18098bcb0;
      iStack_374 = 0;
      lStack_2c8 = 0;
      uStack_2c0 = (longlong)puStack_300 - (longlong)puStack_308 >> 5;
      puVar2 = puStack_308;
      puVar3 = puStack_308;
      puVar4 = puStack_300;
      if (uStack_2c0 != 0) {
        do {
          lVar20 = lStack_2c8;
          puVar2 = puStack_308;
          iVar8 = iStack_374;
          puVar16 = &DAT_18098bc73;
          if ((undefined *)puStack_308[lStack_2c8 * 4 + 1] != (undefined *)0x0) {
            puVar16 = (undefined *)puStack_308[lStack_2c8 * 4 + 1];
          }
          lVar10 = strrchr(puVar16,0x2f);
          if (lVar10 == 0) {
            puVar16 = &DAT_18098bc73;
            if ((undefined *)puVar2[lVar20 * 4 + 1] != (undefined *)0x0) {
              puVar16 = (undefined *)puVar2[lVar20 * 4 + 1];
            }
          }
          else {
            puVar16 = (undefined *)(lVar10 + 1);
          }
          puVar11 = (undefined *)strchr(puVar16,0x2e);
          if (puVar11 == (undefined *)0x0) {
            puVar11 = &DAT_18098bc73;
            if ((undefined *)puVar2[lVar20 * 4 + 1] != (undefined *)0x0) {
              puVar11 = (undefined *)puVar2[lVar20 * 4 + 1];
            }
            puVar11 = puVar11 + *(int *)(puVar2 + lVar20 * 4 + 2);
          }
          if ((longlong)puVar11 - (longlong)puVar16 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(&uStack_268,puVar16,(longlong)puVar11 - (longlong)puVar16);
          }
                    // WARNING: Ignoring partial resolution of indirect
          uStack_268._0_1_ = 0;
          uVar15 = 0;
          uVar7 = 0;
          puStack_330 = &UNK_180a3c3e0;
          uStack_318 = 0;
          puStack_328 = (undefined *)0x0;
          uStack_320 = 0;
          lVar10 = -1;
          do {
            lVar17 = lVar10;
            lVar10 = lVar17 + 1;
          } while (*(char *)((longlong)&uStack_268 + lVar17 + 1) != '\0');
          if ((int)(lVar17 + 1) != 0) {
            iVar19 = (int)lVar17 + 2;
            iVar8 = iVar19;
            if (iVar19 < 0x10) {
              iVar8 = 0x10;
            }
            puStack_328 = (undefined *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar8,0x13);
            *puStack_328 = 0;
            uVar22 = (ulonglong)puStack_328 & 0xffffffffffc00000;
            if (uVar22 != 0) {
              lVar20 = ((longlong)puStack_328 - uVar22 >> 0x10) * 0x50 + 0x80 + uVar22;
              puVar21 = (uint *)(lVar20 - (ulonglong)*(uint *)(lVar20 + 4));
              if ((*(byte *)((longlong)puVar21 + 0xe) & 2) == 0) {
                uVar15 = puVar21[7];
                if (0x3ffffff < uVar15) {
                  uVar15 = *puVar21 << 0x10;
                }
              }
              else {
                uVar15 = puVar21[7];
                if (uVar15 < 0x4000000) {
                  uVar23 = (ulonglong)uVar15;
                }
                else {
                  uVar23 = (ulonglong)*puVar21 << 0x10;
                }
                if (0x3ffffff < uVar15) {
                  uVar15 = *puVar21 << 0x10;
                }
                uVar15 = uVar15 - (int)(((longlong)puStack_328 -
                                        (((longlong)((longlong)puVar21 + (-0x80 - uVar22)) / 0x50) *
                                         0x10000 + uVar22)) % uVar23);
              }
            }
            uStack_318 = CONCAT44(uStack_318._4_4_,uVar15);
                    // WARNING: Subroutine does not return
            memcpy(puStack_328,&uStack_268,iVar19);
          }
          uStack_320 = 0;
          pppppppuVar12 = &ppppppuStack_360;
          for (pppppppuVar1 = (undefined8 *******)ppppppuStack_350;
              pppppppuVar1 != (undefined8 *******)0x0;
              pppppppuVar1 = (undefined8 *******)pppppppuVar1[1]) {
            pppppppuVar12 = pppppppuVar1;
          }
          if ((pppppppuVar12 == &ppppppuStack_360) ||
             (lVar10 = lVar20, *(int *)(pppppppuVar12 + 6) != 0)) {
            if ((pppppppuVar12 != (undefined8 *******)ppppppuStack_360) &&
               (pppppppuVar12 != &ppppppuStack_360)) {
              func_0x00018066bd70(pppppppuVar12);
            }
            bVar26 = true;
            pppppppuVar12 = &ppppppuStack_360;
            pppppppuVar1 = (undefined8 *******)ppppppuStack_350;
            while (pppppppuVar1 != (undefined8 *******)0x0) {
              bVar26 = *(int *)(pppppppuVar1 + 6) != 0;
              pppppppuVar12 = pppppppuVar1;
              if (bVar26) {
                pppppppuVar1 = (undefined8 *******)pppppppuVar1[1];
              }
              else {
                pppppppuVar1 = (undefined8 *******)*pppppppuVar1;
              }
            }
            lVar10 = lStack_2c8;
            iVar8 = iStack_374;
            if (bVar26) {
              if (pppppppuVar12 == (undefined8 *******)ppppppuStack_358) {
                if ((pppppppuVar12 != &ppppppuStack_360) && (*(int *)(pppppppuVar12 + 6) == 0)) {
                  uVar7 = 1;
                }
                lVar20 = FUN_18062b420(_DAT_180c8ed18,0x60,(undefined1)uStack_338);
                puStack_2b0 = (undefined8 *)(lVar20 + 0x20);
                *puStack_2b0 = &UNK_18098bcb0;
                *(undefined8 *)(lVar20 + 0x28) = 0;
                *(undefined4 *)(lVar20 + 0x30) = 0;
                *puStack_2b0 = &UNK_180a3c3e0;
                *(undefined8 *)(lVar20 + 0x38) = 0;
                *(undefined8 *)(lVar20 + 0x28) = 0;
                *(undefined4 *)(lVar20 + 0x30) = 0;
                puStack_2a8 = puStack_2b0;
                FUN_1806277c0(puStack_2b0,0);
                puStack_2a0 = (undefined8 *)(lVar20 + 0x40);
                *puStack_2a0 = &UNK_18098bcb0;
                *(undefined8 *)(lVar20 + 0x48) = 0;
                *(undefined4 *)(lVar20 + 0x50) = 0;
                *puStack_2a0 = &UNK_180a3c3e0;
                *(undefined8 *)(lVar20 + 0x58) = 0;
                *(undefined8 *)(lVar20 + 0x48) = 0;
                *(undefined4 *)(lVar20 + 0x50) = 0;
                    // WARNING: Subroutine does not return
                FUN_18066bdc0(lVar20,pppppppuVar12,&ppppppuStack_360,uVar7);
              }
              pppppppuVar12 = (undefined8 *******)func_0x00018066b9a0(pppppppuVar12);
              lVar10 = lStack_2c8;
              iVar8 = iStack_374;
            }
          }
          uVar15 = *(uint *)(puVar2 + lVar20 * 4 + 2);
          uVar22 = (ulonglong)uVar15;
          if (puVar2[lVar20 * 4 + 1] != 0) {
            FUN_1806277c0(pppppppuVar12 + 8,uVar22);
          }
          if (uVar15 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(pppppppuVar12[9],puVar2[lVar20 * 4 + 1],uVar22);
          }
          *(undefined4 *)(pppppppuVar12 + 10) = 0;
          if (pppppppuVar12[9] != (undefined8 ******)0x0) {
            *(undefined1 *)(uVar22 + (longlong)pppppppuVar12[9]) = 0;
          }
          *(undefined4 *)((longlong)pppppppuVar12 + 0x5c) =
               *(undefined4 *)((longlong)puVar2 + lVar20 * 0x20 + 0x1c);
          puStack_328 = (undefined *)0x0;
          uStack_318 = uStack_318 & 0xffffffff00000000;
          puStack_330 = &UNK_18098bcb0;
          iStack_374 = iVar8 + 1;
          lStack_2c8 = lVar10 + 1;
          puVar2 = puStack_308;
          puVar3 = puStack_308;
          puVar4 = puStack_300;
          iVar8 = iStack_370;
          lVar10 = lStack_368;
        } while ((ulonglong)(longlong)iStack_374 < uStack_2c0);
      }
      for (; puVar6 = puStack_300, puVar5 = puStack_308, puVar2 != puStack_300; puVar2 = puVar2 + 4)
      {
        puStack_308 = puVar3;
        puStack_300 = puVar4;
        (**(code **)*puVar2)(puVar2,0);
        puVar3 = puStack_308;
        puVar4 = puStack_300;
        puStack_300 = puVar6;
        puStack_308 = puVar5;
      }
      if (puStack_308 != (undefined8 *)0x0) {
        puStack_308 = puVar3;
        puStack_300 = puVar4;
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar5);
      }
      puStack_2e8 = &UNK_180a3c3e0;
      if (lStack_2e0 != 0) {
        puStack_308 = puVar3;
        puStack_300 = puVar4;
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_2e0 = 0;
      uStack_2d0 = 0;
      puStack_2e8 = &UNK_18098bcb0;
      iStack_370 = iVar8 + 1;
      lStack_368 = lVar10 + 1;
      lVar20 = *(longlong *)(lStack_2b8 + 0x8a8);
      puStack_308 = puVar3;
      puStack_300 = puVar4;
    } while ((ulonglong)(longlong)iStack_370 <
             (ulonglong)(*(longlong *)(lStack_2b8 + 0x8b0) - lVar20 >> 5));
  }
  uStack_48 = 0x3f8000003f800000;
  uStack_40 = 0x3f000000;
  uStack_3c = 0;
  if ((undefined8 *******)ppppppuStack_358 != &ppppppuStack_360) {
    lVar20 = lStack_310 + 0x150;
    pppppppuVar12 = (undefined8 *******)ppppppuStack_358;
    lVar10 = lStack_310;
    lStack_368 = lVar20;
    do {
      plVar13 = (longlong *)FUN_180058080(lVar20,&puStack_2a0,pppppppuVar12 + 4);
      if (*plVar13 != lVar20) {
        bVar26 = false;
        uVar23 = 0;
        lVar17 = *(longlong *)(lVar10 + 0xc0);
        uVar22 = uVar23;
        if (*(longlong *)(lVar10 + 200) - lVar17 >> 3 != 0) {
          do {
            lVar20 = *(longlong *)(lVar17 + uVar23);
            puStack_398 = &UNK_180a3c3e0;
            uStack_380 = 0;
            puStack_390 = (undefined1 *)0x0;
            uStack_388 = 0;
            if (*(int *)(lVar20 + 0xb8) != 0) {
              iVar8 = *(int *)(lVar20 + 0xb8) + 1;
              if (iVar8 < 0x10) {
                iVar8 = 0x10;
              }
              puStack_390 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar8,0x13);
              *puStack_390 = 0;
              uVar24 = (ulonglong)puStack_390 & 0xffffffffffc00000;
              if (uVar24 == 0) {
                uVar15 = 0;
              }
              else {
                lVar10 = ((longlong)puStack_390 - uVar24 >> 0x10) * 0x50 + 0x80 + uVar24;
                puVar21 = (uint *)(lVar10 - (ulonglong)*(uint *)(lVar10 + 4));
                if ((*(byte *)((longlong)puVar21 + 0xe) & 2) == 0) {
                  uVar15 = puVar21[7];
                  if (0x3ffffff < uVar15) {
                    uVar15 = *puVar21 << 0x10;
                  }
                }
                else {
                  uVar15 = puVar21[7];
                  if (uVar15 < 0x4000000) {
                    uVar25 = (ulonglong)uVar15;
                  }
                  else {
                    uVar25 = (ulonglong)*puVar21 << 0x10;
                  }
                  if (0x3ffffff < uVar15) {
                    uVar15 = *puVar21 << 0x10;
                  }
                  uVar15 = uVar15 - (int)(((longlong)puStack_390 -
                                          (((longlong)((longlong)puVar21 + (-0x80 - uVar24)) / 0x50)
                                           * 0x10000 + uVar24)) % uVar25);
                }
              }
              uStack_380 = CONCAT44(uStack_380._4_4_,uVar15);
              if (*(int *)(lVar20 + 0xb8) != 0) {
                    // WARNING: Subroutine does not return
                memcpy(puStack_390,*(undefined8 *)(lVar20 + 0xb0),*(int *)(lVar20 + 0xb8) + 1);
              }
            }
            if (*(longlong *)(lVar20 + 0xb0) != 0) {
              uStack_388 = 0;
              if (puStack_390 != (undefined1 *)0x0) {
                *puStack_390 = 0;
              }
              uStack_380 = uStack_380 & 0xffffffff;
            }
            uStack_378 = uStack_378 & 0xfffffffd;
            puStack_398 = &UNK_180a3c3e0;
            if (puStack_390 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(puStack_390);
            }
            puStack_390 = (undefined1 *)0x0;
            uStack_380 = uStack_380 & 0xffffffff00000000;
            puStack_398 = &UNK_18098bcb0;
            lVar10 = lStack_310;
            lVar20 = lStack_368;
            if (*(int *)(pppppppuVar12 + 6) == 0) {
              bVar26 = true;
              break;
            }
            uVar15 = (int)uVar22 + 1;
            uVar22 = (ulonglong)uVar15;
            uVar23 = uVar23 + 8;
            lVar17 = *(longlong *)(lStack_310 + 0xc0);
          } while ((ulonglong)(longlong)(int)uVar15 <
                   (ulonglong)(*(longlong *)(lStack_310 + 200) - lVar17 >> 3));
        }
        if (!bVar26) {
          uVar14 = FUN_180624440(&uStack_268,pppppppuVar12 + 8);
          FUN_1806279c0(&puStack_330,uVar14);
          uStack_268 = &UNK_18098bcb0;
          ppppppuVar18 = (undefined8 ******)&DAT_18098bc73;
          if (pppppppuVar12[5] != (undefined8 ******)0x0) {
            ppppppuVar18 = pppppppuVar12[5];
          }
          FUN_180627910(&puStack_308,ppppppuVar18);
          puVar16 = &DAT_18098bc73;
          if (puStack_328 != (undefined *)0x0) {
            puVar16 = puStack_328;
          }
          FUN_180627910(&puStack_2e8,puVar16);
          FUN_1801762b0(lVar10,&puStack_2e8,&puStack_308,&uStack_48);
          puStack_2e8 = &UNK_180a3c3e0;
          if (lStack_2e0 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lStack_2e0 = 0;
          uStack_2d0 = 0;
          puStack_2e8 = &UNK_18098bcb0;
          puStack_308 = (undefined8 *)&UNK_180a3c3e0;
          if (puStack_300 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          puStack_300 = (undefined8 *)0x0;
          uStack_2f0 = 0;
          puStack_308 = (undefined8 *)&UNK_18098bcb0;
          puStack_330 = &UNK_180a3c3e0;
          if (puStack_328 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          puStack_328 = (undefined *)0x0;
          uStack_318 = uStack_318 & 0xffffffff00000000;
          puStack_330 = &UNK_18098bcb0;
        }
      }
      pppppppuVar12 = (undefined8 *******)func_0x00018066bd70(pppppppuVar12);
    } while (pppppppuVar12 != &ppppppuStack_360);
  }
  FUN_180058020(&ppppppuStack_360);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_3b8);
}



longlong FUN_180177c00(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  char *pcVar5;
  longlong *plVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined *puStack_48;
  char *pcStack_40;
  int iStack_38;
  ulonglong uStack_30;
  
  uVar9 = 0xfffffffffffffffe;
  plVar6 = *(longlong **)(param_1 + 0xc0);
  plVar3 = *(longlong **)(param_1 + 200);
  do {
    if (plVar6 == plVar3) {
      return 0;
    }
    uVar8 = 0;
    lVar4 = *plVar6;
    puStack_48 = &UNK_180a3c3e0;
    uStack_30 = 0;
    pcStack_40 = (char *)0x0;
    iStack_38 = 0;
    FUN_1806277c0(&puStack_48,*(undefined4 *)(lVar4 + 0xb8));
    if (*(int *)(lVar4 + 0xb8) != 0) {
                    // WARNING: Subroutine does not return
      memcpy(pcStack_40,*(undefined8 *)(lVar4 + 0xb0),*(int *)(lVar4 + 0xb8) + 1,param_4,uVar8,uVar9
            );
    }
    if (*(longlong *)(lVar4 + 0xb0) != 0) {
      iStack_38 = 0;
      if (pcStack_40 != (char *)0x0) {
        *pcStack_40 = '\0';
      }
      uStack_30 = uStack_30 & 0xffffffff;
    }
    if (iStack_38 == *(int *)(param_2 + 0x10)) {
      if (iStack_38 == 0) {
LAB_180177d1e:
        if (*(int *)(param_2 + 0x10) != 0) goto LAB_180177d26;
        bVar7 = true;
      }
      else {
        pcVar5 = pcStack_40;
        do {
          cVar1 = *pcVar5;
          cVar2 = pcVar5[*(longlong *)(param_2 + 8) - (longlong)pcStack_40];
          if (cVar1 != cVar2) break;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        bVar7 = cVar1 == cVar2;
      }
    }
    else {
      if (iStack_38 == 0) goto LAB_180177d1e;
LAB_180177d26:
      bVar7 = false;
    }
    puStack_48 = &UNK_180a3c3e0;
    if (pcStack_40 != (char *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (bVar7) {
      return lVar4;
    }
    plVar6 = plVar6 + 1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180177da0(undefined8 param_1,longlong param_2)
void FUN_180177da0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  uint uVar10;
  undefined *puVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined1 auStack_8c8 [32];
  undefined *puStack_8a8;
  undefined1 *puStack_8a0;
  undefined4 uStack_898;
  ulonglong uStack_890;
  longlong *plStack_888;
  undefined **ppuStack_880;
  undefined *puStack_878;
  longlong lStack_870;
  undefined4 uStack_860;
  longlong lStack_858;
  undefined8 uStack_850;
  longlong lStack_848;
  undefined1 auStack_838 [2048];
  ulonglong uStack_38;
  
  uStack_850 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_8c8;
  plVar17 = *(longlong **)(_DAT_180c8a9d0 + 0xc0);
  plVar12 = *(longlong **)(_DAT_180c8a9d0 + 200);
  plStack_888 = plVar12;
  if (plVar17 != plVar12) {
    do {
      lVar13 = *plVar17;
      lVar14 = lVar13 + 8;
      lStack_848 = lVar14;
      iVar5 = _Mtx_lock(lVar14);
      if (iVar5 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar5);
      }
      lVar6 = FUN_1802e5300(lVar13,param_2);
      if (lVar6 == 0) {
        puVar11 = &DAT_18098bc73;
        if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
          puVar11 = *(undefined **)(param_2 + 8);
        }
        mbstowcs(auStack_838,puVar11,(longlong)(*(int *)(param_2 + 0x10) + 1));
        lVar7 = (**(code **)(**(longlong **)(lVar13 + 0x148) + 0x10))
                          (*(longlong **)(lVar13 + 0x148),auStack_838);
        if ((lVar7 == 0) &&
           (lVar7 = (**(code **)(**(longlong **)(lVar13 + 0x148) + 0x10))
                              (*(longlong **)(lVar13 + 0x148),&UNK_180a193d8), lVar7 == 0)) {
          lVar7 = (**(code **)(**(longlong **)(lVar13 + 0x148) + 8))
                            (*(longlong **)(lVar13 + 0x148),0);
        }
        lVar6 = FUN_18062b1e0(_DAT_180c8ed18,0x30,8,3);
        *(longlong *)(lVar6 + 0x20) = lVar7;
        *(longlong *)(lVar6 + 0x28) = lVar13;
        puStack_8a8 = &UNK_180a3c3e0;
        uStack_890 = 0;
        puStack_8a0 = (undefined1 *)0x0;
        uStack_898 = 0;
        FUN_1806277c0(&puStack_8a8,*(undefined4 *)(param_2 + 0x10));
        if (0 < *(int *)(param_2 + 0x10)) {
          puVar11 = &DAT_18098bc73;
          if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
            puVar11 = *(undefined **)(param_2 + 8);
          }
                    // WARNING: Subroutine does not return
          memcpy(puStack_8a0,puVar11,(longlong)(*(int *)(param_2 + 0x10) + 1));
        }
        if ((*(longlong *)(param_2 + 8) != 0) && (uStack_898 = 0, puStack_8a0 != (undefined1 *)0x0))
        {
          *puStack_8a0 = 0;
        }
        lVar7 = FUN_1802e5300(lVar13,&puStack_8a8);
        if (lVar7 == 0) {
          FUN_180627ae0(&puStack_878,&puStack_8a8);
          puVar1 = (undefined8 *)(lVar13 + 0x150);
          lStack_858 = lVar6;
          lVar7 = FUN_18062b420(_DAT_180c8ed18,0x48,*(undefined1 *)(lVar13 + 0x178));
          ppuStack_880 = (undefined **)(lVar7 + 0x20);
          FUN_180627ae0(ppuStack_880,&puStack_878);
          *(longlong *)(lVar7 + 0x40) = lStack_858;
          bVar3 = true;
          puVar4 = puVar1;
          puVar8 = *(undefined8 **)(lVar13 + 0x160);
          while (puVar8 != (undefined8 *)0x0) {
            puVar4 = puVar8;
            if (*(int *)(puVar8 + 6) == 0) {
              bVar3 = false;
LAB_180178010:
              puVar8 = (undefined8 *)*puVar8;
            }
            else {
              if (*(int *)(lVar7 + 0x30) == 0) {
                bVar3 = true;
              }
              else {
                pbVar9 = (byte *)puVar8[5];
                lVar16 = *(longlong *)(lVar7 + 0x28) - (longlong)pbVar9;
                do {
                  bVar2 = *pbVar9;
                  uVar10 = (uint)pbVar9[lVar16];
                  if (bVar2 != uVar10) break;
                  pbVar9 = pbVar9 + 1;
                } while (uVar10 != 0);
                bVar3 = 0 < (int)(bVar2 - uVar10);
              }
              if (!bVar3) goto LAB_180178010;
              puVar8 = (undefined8 *)puVar8[1];
            }
          }
          puVar8 = puVar4;
          if (bVar3) {
            if (puVar4 != *(undefined8 **)(lVar13 + 0x158)) {
              puVar8 = (undefined8 *)func_0x00018066b9a0(puVar4);
              goto LAB_180178030;
            }
          }
          else {
LAB_180178030:
            if (*(int *)(lVar7 + 0x30) == 0) {
LAB_180178104:
              FUN_18008ea80();
              ppuStack_880 = &puStack_878;
              puStack_878 = &UNK_180a3c3e0;
              if (lStack_870 != 0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              lStack_870 = 0;
              uStack_860 = 0;
              puStack_878 = &UNK_18098bcb0;
              goto LAB_180178154;
            }
            if (*(int *)(puVar8 + 6) != 0) {
              pbVar9 = *(byte **)(lVar7 + 0x28);
              lVar13 = puVar8[5] - (longlong)pbVar9;
              do {
                bVar2 = *pbVar9;
                uVar10 = (uint)pbVar9[lVar13];
                if (bVar2 != uVar10) break;
                pbVar9 = pbVar9 + 1;
              } while (uVar10 != 0);
              if ((int)(bVar2 - uVar10) < 1) goto LAB_180178104;
            }
          }
          if (puVar4 == puVar1) goto LAB_1801780ed;
          if (*(int *)(puVar4 + 6) == 0) goto LAB_1801780a7;
          if (*(int *)(lVar7 + 0x30) == 0) goto LAB_1801780ed;
          pbVar9 = (byte *)puVar4[5];
          lVar14 = *(longlong *)(lVar7 + 0x28) - (longlong)pbVar9;
          goto LAB_180178090;
        }
LAB_180178154:
        puStack_8a8 = &UNK_180a3c3e0;
        if (puStack_8a0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_8a0 = (undefined1 *)0x0;
        uStack_890 = uStack_890 & 0xffffffff00000000;
        puStack_8a8 = &UNK_18098bcb0;
        iVar5 = _Mtx_unlock(lVar14);
        plVar12 = plStack_888;
        if (iVar5 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar5);
          plVar12 = plStack_888;
        }
      }
      else {
        iVar5 = _Mtx_unlock(lVar14);
        if (iVar5 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar5);
        }
      }
    } while ((lVar6 == 0) && (plVar17 = plVar17 + 1, plVar17 != plVar12));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_8c8);
  while (pbVar9 = pbVar9 + 1, uVar10 != 0) {
LAB_180178090:
    bVar2 = *pbVar9;
    uVar10 = (uint)pbVar9[lVar14];
    if (bVar2 != uVar10) break;
  }
  if ((int)(bVar2 - uVar10) < 1) {
LAB_1801780a7:
    uVar15 = 1;
  }
  else {
LAB_1801780ed:
    uVar15 = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar7,puVar4,puVar1,uVar15);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



