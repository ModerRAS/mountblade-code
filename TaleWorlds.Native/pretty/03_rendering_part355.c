#include "TaleWorlds.Native.Split.h"

// 03_rendering_part355.c - 2 个函数

// 函数: void FUN_18045db70(undefined8 param_1)
void FUN_18045db70(undefined8 param_1)

{
  byte bVar1;
  undefined8 *******pppppppuVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined8 *******pppppppuVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  undefined *puVar17;
  byte *pbVar18;
  undefined8 ******ppppppuVar19;
  int iVar20;
  longlong lVar21;
  uint *puVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined8 uVar28;
  bool bVar29;
  undefined4 extraout_XMM0_Da;
  char acStackX_10 [8];
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
  undefined8 uStack_30;
  
  lVar21 = _DAT_180c8a9d0 + 0x150;
  uStack_30 = 0x18045dbab;
  lVar14 = FUN_18062b420(_DAT_180c8ed18,0x40,*(undefined1 *)(_DAT_180c8a9d0 + 0x178));
  uStack_30 = 0x18045dbba;
  FUN_180627910(lVar14 + 0x20,param_1);
  uStack_30 = 0x18045dbcb;
  lVar15 = FUN_1800590b0(lVar21,acStackX_10,lVar14 + 0x20);
  if (acStackX_10[0] == '\0') {
    uStack_30 = 0x18045dc2f;
    FUN_18005d1f0(extraout_XMM0_Da,lVar14);
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
    lVar14 = *(longlong *)(lStack_2b8 + 0x8a8);
    if (*(longlong *)(lStack_2b8 + 0x8b0) - lVar14 >> 5 != 0) {
      lStack_368 = 0;
      do {
        lVar15 = lStack_368;
        iVar9 = iStack_370;
        puVar17 = *(undefined **)(lStack_368 * 0x20 + 8 + lVar14);
        puVar11 = &DAT_18098bc73;
        if (puVar17 != (undefined *)0x0) {
          puVar11 = puVar17;
        }
        puStack_398 = &UNK_180a3c3e0;
        uStack_380 = 0;
        puStack_390 = (undefined1 *)0x0;
        uStack_388 = 0;
        if (puVar11 != (undefined *)0x0) {
          lVar14 = -1;
          do {
            lVar21 = lVar14;
            lVar14 = lVar21 + 1;
          } while (puVar11[lVar14] != '\0');
          if ((int)lVar14 != 0) {
            iVar20 = (int)lVar21 + 2;
            iVar9 = iVar20;
            if (iVar20 < 0x10) {
              iVar9 = 0x10;
            }
            puVar10 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar9,0x13);
            *puVar10 = 0;
            puStack_390 = puVar10;
            uVar8 = FUN_18064e990(puVar10);
            uStack_380 = CONCAT44(uStack_380._4_4_,uVar8);
                    // WARNING: Subroutine does not return
            memcpy(puVar10,puVar11,iVar20);
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
        puVar3 = puStack_308;
        puVar4 = puStack_308;
        puVar5 = puStack_300;
        if (uStack_2c0 != 0) {
          do {
            lVar14 = lStack_2c8;
            puVar3 = puStack_308;
            iVar9 = iStack_374;
            puVar17 = &DAT_18098bc73;
            if ((undefined *)puStack_308[lStack_2c8 * 4 + 1] != (undefined *)0x0) {
              puVar17 = (undefined *)puStack_308[lStack_2c8 * 4 + 1];
            }
            lVar15 = strrchr(puVar17,0x2f);
            if (lVar15 == 0) {
              puVar17 = &DAT_18098bc73;
              if ((undefined *)puVar3[lVar14 * 4 + 1] != (undefined *)0x0) {
                puVar17 = (undefined *)puVar3[lVar14 * 4 + 1];
              }
            }
            else {
              puVar17 = (undefined *)(lVar15 + 1);
            }
            puVar11 = (undefined *)strchr(puVar17,0x2e);
            if (puVar11 == (undefined *)0x0) {
              puVar11 = &DAT_18098bc73;
              if ((undefined *)puVar3[lVar14 * 4 + 1] != (undefined *)0x0) {
                puVar11 = (undefined *)puVar3[lVar14 * 4 + 1];
              }
              puVar11 = puVar11 + *(int *)(puVar3 + lVar14 * 4 + 2);
            }
            if ((longlong)puVar11 - (longlong)puVar17 != 0) {
                    // WARNING: Subroutine does not return
              memcpy(&uStack_268,puVar17,(longlong)puVar11 - (longlong)puVar17);
            }
                    // WARNING: Ignoring partial resolution of indirect
            uStack_268._0_1_ = 0;
            uVar16 = 0;
            uVar8 = 0;
            puStack_330 = &UNK_180a3c3e0;
            uStack_318 = 0;
            puStack_328 = (undefined *)0x0;
            uStack_320 = 0;
            lVar15 = -1;
            do {
              lVar21 = lVar15;
              lVar15 = lVar21 + 1;
            } while (*(char *)((longlong)&uStack_268 + lVar21 + 1) != '\0');
            if ((int)(lVar21 + 1) != 0) {
              iVar20 = (int)lVar21 + 2;
              iVar9 = iVar20;
              if (iVar20 < 0x10) {
                iVar9 = 0x10;
              }
              puStack_328 = (undefined *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar9,0x13);
              *puStack_328 = 0;
              uVar24 = (ulonglong)puStack_328 & 0xffffffffffc00000;
              if (uVar24 != 0) {
                lVar14 = ((longlong)puStack_328 - uVar24 >> 0x10) * 0x50 + 0x80 + uVar24;
                puVar22 = (uint *)(lVar14 - (ulonglong)*(uint *)(lVar14 + 4));
                if ((*(byte *)((longlong)puVar22 + 0xe) & 2) == 0) {
                  uVar16 = puVar22[7];
                  if (0x3ffffff < uVar16) {
                    uVar16 = *puVar22 << 0x10;
                  }
                }
                else {
                  uVar16 = puVar22[7];
                  if (uVar16 < 0x4000000) {
                    uVar25 = (ulonglong)uVar16;
                  }
                  else {
                    uVar25 = (ulonglong)*puVar22 << 0x10;
                  }
                  if (0x3ffffff < uVar16) {
                    uVar16 = *puVar22 << 0x10;
                  }
                  uVar16 = uVar16 - (int)(((longlong)puStack_328 -
                                          (((longlong)((longlong)puVar22 + (-0x80 - uVar24)) / 0x50)
                                           * 0x10000 + uVar24)) % uVar25);
                }
              }
              uStack_318 = CONCAT44(uStack_318._4_4_,uVar16);
                    // WARNING: Subroutine does not return
              memcpy(puStack_328,&uStack_268,iVar20);
            }
            uStack_320 = 0;
            pppppppuVar12 = &ppppppuStack_360;
            for (pppppppuVar2 = (undefined8 *******)ppppppuStack_350;
                pppppppuVar2 != (undefined8 *******)0x0;
                pppppppuVar2 = (undefined8 *******)pppppppuVar2[1]) {
              pppppppuVar12 = pppppppuVar2;
            }
            if ((pppppppuVar12 == &ppppppuStack_360) ||
               (lVar15 = lVar14, *(int *)(pppppppuVar12 + 6) != 0)) {
              if ((pppppppuVar12 != (undefined8 *******)ppppppuStack_360) &&
                 (pppppppuVar12 != &ppppppuStack_360)) {
                func_0x00018066bd70(pppppppuVar12);
              }
              bVar29 = true;
              pppppppuVar12 = &ppppppuStack_360;
              pppppppuVar2 = (undefined8 *******)ppppppuStack_350;
              while (pppppppuVar2 != (undefined8 *******)0x0) {
                bVar29 = *(int *)(pppppppuVar2 + 6) != 0;
                pppppppuVar12 = pppppppuVar2;
                if (bVar29) {
                  pppppppuVar2 = (undefined8 *******)pppppppuVar2[1];
                }
                else {
                  pppppppuVar2 = (undefined8 *******)*pppppppuVar2;
                }
              }
              lVar15 = lStack_2c8;
              iVar9 = iStack_374;
              if (bVar29) {
                if (pppppppuVar12 == (undefined8 *******)ppppppuStack_358) {
                  if ((pppppppuVar12 != &ppppppuStack_360) && (*(int *)(pppppppuVar12 + 6) == 0)) {
                    uVar8 = 1;
                  }
                  lVar14 = FUN_18062b420(_DAT_180c8ed18,0x60,(undefined1)uStack_338);
                  puStack_2b0 = (undefined8 *)(lVar14 + 0x20);
                  *puStack_2b0 = &UNK_18098bcb0;
                  *(undefined8 *)(lVar14 + 0x28) = 0;
                  *(undefined4 *)(lVar14 + 0x30) = 0;
                  *puStack_2b0 = &UNK_180a3c3e0;
                  *(undefined8 *)(lVar14 + 0x38) = 0;
                  *(undefined8 *)(lVar14 + 0x28) = 0;
                  *(undefined4 *)(lVar14 + 0x30) = 0;
                  puStack_2a8 = puStack_2b0;
                  FUN_1806277c0(puStack_2b0,0);
                  puStack_2a0 = (undefined8 *)(lVar14 + 0x40);
                  *puStack_2a0 = &UNK_18098bcb0;
                  *(undefined8 *)(lVar14 + 0x48) = 0;
                  *(undefined4 *)(lVar14 + 0x50) = 0;
                  *puStack_2a0 = &UNK_180a3c3e0;
                  *(undefined8 *)(lVar14 + 0x58) = 0;
                  *(undefined8 *)(lVar14 + 0x48) = 0;
                  *(undefined4 *)(lVar14 + 0x50) = 0;
                    // WARNING: Subroutine does not return
                  FUN_18066bdc0(lVar14,pppppppuVar12,&ppppppuStack_360,uVar8);
                }
                pppppppuVar12 = (undefined8 *******)func_0x00018066b9a0(pppppppuVar12);
                lVar15 = lStack_2c8;
                iVar9 = iStack_374;
              }
            }
            uVar16 = *(uint *)(puVar3 + lVar14 * 4 + 2);
            uVar24 = (ulonglong)uVar16;
            if (puVar3[lVar14 * 4 + 1] != 0) {
              FUN_1806277c0(pppppppuVar12 + 8,uVar24);
            }
            if (uVar16 != 0) {
                    // WARNING: Subroutine does not return
              memcpy(pppppppuVar12[9],puVar3[lVar14 * 4 + 1],uVar24);
            }
            *(undefined4 *)(pppppppuVar12 + 10) = 0;
            if (pppppppuVar12[9] != (undefined8 ******)0x0) {
              *(undefined1 *)(uVar24 + (longlong)pppppppuVar12[9]) = 0;
            }
            *(undefined4 *)((longlong)pppppppuVar12 + 0x5c) =
                 *(undefined4 *)((longlong)puVar3 + lVar14 * 0x20 + 0x1c);
            puStack_328 = (undefined *)0x0;
            uStack_318 = uStack_318 & 0xffffffff00000000;
            puStack_330 = &UNK_18098bcb0;
            iStack_374 = iVar9 + 1;
            lStack_2c8 = lVar15 + 1;
            puVar3 = puStack_308;
            puVar4 = puStack_308;
            puVar5 = puStack_300;
            iVar9 = iStack_370;
            lVar15 = lStack_368;
          } while ((ulonglong)(longlong)iStack_374 < uStack_2c0);
        }
        for (; puVar7 = puStack_300, puVar6 = puStack_308, puVar3 != puStack_300;
            puVar3 = puVar3 + 4) {
          puStack_308 = puVar4;
          puStack_300 = puVar5;
          (**(code **)*puVar3)(puVar3,0);
          puVar4 = puStack_308;
          puVar5 = puStack_300;
          puStack_300 = puVar7;
          puStack_308 = puVar6;
        }
        if (puStack_308 != (undefined8 *)0x0) {
          puStack_308 = puVar4;
          puStack_300 = puVar5;
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar6);
        }
        puStack_2e8 = &UNK_180a3c3e0;
        if (lStack_2e0 != 0) {
          puStack_308 = puVar4;
          puStack_300 = puVar5;
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_2e0 = 0;
        uStack_2d0 = 0;
        puStack_2e8 = &UNK_18098bcb0;
        iStack_370 = iVar9 + 1;
        lStack_368 = lVar15 + 1;
        lVar14 = *(longlong *)(lStack_2b8 + 0x8a8);
        puStack_308 = puVar4;
        puStack_300 = puVar5;
      } while ((ulonglong)(longlong)iStack_370 <
               (ulonglong)(*(longlong *)(lStack_2b8 + 0x8b0) - lVar14 >> 5));
    }
    uStack_48 = 0x3f8000003f800000;
    uStack_40 = 0x3f000000;
    uStack_3c = 0;
    if ((undefined8 *******)ppppppuStack_358 != &ppppppuStack_360) {
      lVar14 = lStack_310 + 0x150;
      pppppppuVar12 = (undefined8 *******)ppppppuStack_358;
      lVar15 = lStack_310;
      lStack_368 = lVar14;
      do {
        plVar13 = (longlong *)FUN_180058080(lVar14,&puStack_2a0,pppppppuVar12 + 4);
        if (*plVar13 != lVar14) {
          bVar29 = false;
          uVar25 = 0;
          lVar21 = *(longlong *)(lVar15 + 0xc0);
          uVar24 = uVar25;
          if (*(longlong *)(lVar15 + 200) - lVar21 >> 3 != 0) {
            do {
              lVar14 = *(longlong *)(lVar21 + uVar25);
              puStack_398 = &UNK_180a3c3e0;
              uStack_380 = 0;
              puStack_390 = (undefined1 *)0x0;
              uStack_388 = 0;
              if (*(int *)(lVar14 + 0xb8) != 0) {
                iVar9 = *(int *)(lVar14 + 0xb8) + 1;
                if (iVar9 < 0x10) {
                  iVar9 = 0x10;
                }
                puStack_390 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar9,0x13);
                *puStack_390 = 0;
                uVar26 = (ulonglong)puStack_390 & 0xffffffffffc00000;
                if (uVar26 == 0) {
                  uVar16 = 0;
                }
                else {
                  lVar15 = ((longlong)puStack_390 - uVar26 >> 0x10) * 0x50 + 0x80 + uVar26;
                  puVar22 = (uint *)(lVar15 - (ulonglong)*(uint *)(lVar15 + 4));
                  if ((*(byte *)((longlong)puVar22 + 0xe) & 2) == 0) {
                    uVar16 = puVar22[7];
                    if (0x3ffffff < uVar16) {
                      uVar16 = *puVar22 << 0x10;
                    }
                  }
                  else {
                    uVar16 = puVar22[7];
                    if (uVar16 < 0x4000000) {
                      uVar27 = (ulonglong)uVar16;
                    }
                    else {
                      uVar27 = (ulonglong)*puVar22 << 0x10;
                    }
                    if (0x3ffffff < uVar16) {
                      uVar16 = *puVar22 << 0x10;
                    }
                    uVar16 = uVar16 - (int)(((longlong)puStack_390 -
                                            (((longlong)((longlong)puVar22 + (-0x80 - uVar26)) /
                                             0x50) * 0x10000 + uVar26)) % uVar27);
                  }
                }
                uStack_380 = CONCAT44(uStack_380._4_4_,uVar16);
                if (*(int *)(lVar14 + 0xb8) != 0) {
                    // WARNING: Subroutine does not return
                  memcpy(puStack_390,*(undefined8 *)(lVar14 + 0xb0),*(int *)(lVar14 + 0xb8) + 1);
                }
              }
              if (*(longlong *)(lVar14 + 0xb0) != 0) {
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
              lVar15 = lStack_310;
              lVar14 = lStack_368;
              if (*(int *)(pppppppuVar12 + 6) == 0) {
                bVar29 = true;
                break;
              }
              uVar16 = (int)uVar24 + 1;
              uVar24 = (ulonglong)uVar16;
              uVar25 = uVar25 + 8;
              lVar21 = *(longlong *)(lStack_310 + 0xc0);
            } while ((ulonglong)(longlong)(int)uVar16 <
                     (ulonglong)(*(longlong *)(lStack_310 + 200) - lVar21 >> 3));
          }
          if (!bVar29) {
            uVar28 = FUN_180624440(&uStack_268,pppppppuVar12 + 8);
            FUN_1806279c0(&puStack_330,uVar28);
            uStack_268 = &UNK_18098bcb0;
            ppppppuVar19 = (undefined8 ******)&DAT_18098bc73;
            if (pppppppuVar12[5] != (undefined8 ******)0x0) {
              ppppppuVar19 = pppppppuVar12[5];
            }
            FUN_180627910(&puStack_308,ppppppuVar19);
            puVar17 = &DAT_18098bc73;
            if (puStack_328 != (undefined *)0x0) {
              puVar17 = puStack_328;
            }
            FUN_180627910(&puStack_2e8,puVar17);
            FUN_1801762b0(lVar15,&puStack_2e8,&puStack_308,&uStack_48);
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
  if (lVar15 != lVar21) {
    if (*(int *)(lVar15 + 0x30) == 0) {
LAB_18045dc08:
      uVar28 = 1;
      goto LAB_18045dc13;
    }
    if (*(int *)(lVar14 + 0x30) != 0) {
      pbVar18 = *(byte **)(lVar15 + 0x28);
      lVar23 = *(longlong *)(lVar14 + 0x28) - (longlong)pbVar18;
      do {
        bVar1 = *pbVar18;
        uVar16 = (uint)pbVar18[lVar23];
        if (bVar1 != uVar16) break;
        pbVar18 = pbVar18 + 1;
      } while (uVar16 != 0);
      if ((int)(bVar1 - uVar16) < 1) goto LAB_18045dc08;
    }
  }
  uVar28 = 0;
LAB_18045dc13:
                    // WARNING: Subroutine does not return
  uStack_30 = 0x18045dc21;
  FUN_18066bdc0(lVar14,lVar15,lVar21,uVar28);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4
FUN_18045dcc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined *puStack_30;
  longlong lStack_28;
  undefined4 uStack_20;
  undefined8 uStack_18;
  
  puStack_30 = &UNK_180a3c3e0;
  uStack_18 = 0;
  lStack_28 = 0;
  uStack_20 = 0;
  FUN_180053200(param_1,&puStack_30,param_3,param_4,0xfffffffffffffffe);
  uVar1 = (**(code **)(*_DAT_180c8f008 + 0x70))(_DAT_180c8f008,&puStack_30);
  puStack_30 = &UNK_180a3c3e0;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_18045dfd0(longlong param_1,int param_2,int param_3,longlong param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  float *pfVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  undefined4 uStack_b8;
  ulonglong uStack_b0;
  longlong alStack_a8 [2];
  undefined2 uStack_98;
  undefined1 uStack_96;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined1 uStack_42;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  lVar5 = 0;
  alStack_a8[0] = 0;
  alStack_a8[1] = 0;
  uStack_98 = 0;
  uStack_96 = 3;
  uStack_42 = 0;
  uStack_94 = 0;
  uStack_8c = 0;
  uStack_84 = 0;
  uStack_7c = 0;
  uStack_74 = 0;
  uStack_6c = 0;
  uStack_64 = 0;
  uStack_5c = 0;
  _uStack_4c = CONCAT22((short)param_3,(short)param_2);
  uStack_54 = 7;
  uStack_48 = 1;
  uStack_46 = 1;
  uStack_44 = 0x102;
  FUN_1802a1bc0(alStack_a8);
  lVar7 = (longlong)(param_2 * param_3);
  if (3 < lVar7) {
    puVar3 = (undefined1 *)(alStack_a8[0] + 2);
    lVar8 = param_4 - alStack_a8[0];
    lVar9 = (lVar7 - 4U >> 2) + 1;
    lVar5 = lVar9 * 4;
    do {
      fVar10 = *(float *)(puVar3 + lVar8 + -2) * 255.0;
      if (255.0 <= fVar10) {
        fVar10 = 255.0;
      }
      puVar3[-2] = (char)(int)fVar10;
      fVar10 = *(float *)(puVar3 + lVar8 + -2) * 255.0;
      if (255.0 <= fVar10) {
        fVar10 = 255.0;
      }
      puVar3[-1] = (char)(int)fVar10;
      fVar10 = *(float *)(puVar3 + lVar8 + -2) * 255.0;
      if (255.0 <= fVar10) {
        fVar10 = 255.0;
      }
      *puVar3 = (char)(int)fVar10;
      puVar3[1] = 0xff;
      fVar10 = *(float *)(puVar3 + lVar8 + 2) * 255.0;
      if (255.0 <= fVar10) {
        fVar10 = 255.0;
      }
      puVar3[2] = (char)(int)fVar10;
      fVar10 = *(float *)(puVar3 + lVar8 + 2) * 255.0;
      if (255.0 <= fVar10) {
        fVar10 = 255.0;
      }
      puVar3[3] = (char)(int)fVar10;
      fVar10 = *(float *)(puVar3 + lVar8 + 2) * 255.0;
      if (255.0 <= fVar10) {
        fVar10 = 255.0;
      }
      puVar3[4] = (char)(int)fVar10;
      puVar3[5] = 0xff;
      fVar10 = *(float *)(puVar3 + lVar8 + 6) * 255.0;
      if (255.0 <= fVar10) {
        fVar10 = 255.0;
      }
      puVar3[6] = (char)(int)fVar10;
      fVar10 = *(float *)(puVar3 + lVar8 + 6) * 255.0;
      if (255.0 <= fVar10) {
        fVar10 = 255.0;
      }
      puVar3[7] = (char)(int)fVar10;
      fVar10 = *(float *)(puVar3 + lVar8 + 6) * 255.0;
      if (255.0 <= fVar10) {
        fVar10 = 255.0;
      }
      puVar3[8] = (char)(int)fVar10;
      puVar3[9] = 0xff;
      fVar10 = *(float *)(puVar3 + lVar8 + 10) * 255.0;
      if (255.0 <= fVar10) {
        fVar10 = 255.0;
      }
      puVar3[10] = (char)(int)fVar10;
      fVar10 = *(float *)(puVar3 + lVar8 + 10) * 255.0;
      if (255.0 <= fVar10) {
        fVar10 = 255.0;
      }
      puVar3[0xb] = (char)(int)fVar10;
      fVar10 = *(float *)(puVar3 + lVar8 + 10) * 255.0;
      if (255.0 <= fVar10) {
        fVar10 = 255.0;
      }
      puVar3[0xc] = (char)(int)fVar10;
      puVar3[0xd] = 0xff;
      puVar3 = puVar3 + 0x10;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  if (lVar5 < lVar7) {
    pfVar4 = (float *)(param_4 + lVar5 * 4);
    param_4 = alStack_a8[0] - param_4;
    lVar7 = lVar7 - lVar5;
    do {
      fVar10 = *pfVar4 * 255.0;
      if (255.0 <= fVar10) {
        fVar10 = 255.0;
      }
      *(char *)(param_4 + (longlong)pfVar4) = (char)(int)fVar10;
      fVar10 = *pfVar4 * 255.0;
      if (255.0 <= fVar10) {
        fVar10 = 255.0;
      }
      *(char *)(param_4 + 1 + (longlong)pfVar4) = (char)(int)fVar10;
      fVar10 = *pfVar4 * 255.0;
      if (255.0 <= fVar10) {
        fVar10 = 255.0;
      }
      *(char *)(param_4 + 2 + (longlong)pfVar4) = (char)(int)fVar10;
      *(undefined1 *)(param_4 + 3 + (longlong)pfVar4) = 0xff;
      pfVar4 = pfVar4 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  puStack_c8 = &UNK_180a3c3e0;
  uStack_b0 = 0;
  puStack_c0 = (undefined1 *)0x0;
  uStack_b8 = 0;
  if (param_1 != 0) {
    lVar5 = -1;
    do {
      lVar8 = lVar5;
      lVar5 = lVar8 + 1;
    } while (*(char *)(param_1 + lVar5) != '\0');
    if ((int)lVar5 != 0) {
      iVar6 = (int)lVar8 + 2;
      iVar1 = iVar6;
      if (iVar6 < 0x10) {
        iVar1 = 0x10;
      }
      puVar3 = (undefined1 *)
               FUN_18062b420(_DAT_180c8ed18,(longlong)iVar1,
                             CONCAT71((int7)((ulonglong)lVar7 >> 8),0x13));
      *puVar3 = 0;
      puStack_c0 = puVar3;
      uVar2 = FUN_18064e990(puVar3);
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar2);
                    // WARNING: Subroutine does not return
      memcpy(puVar3,param_1,iVar6);
    }
  }
  uStack_b8 = 0;
  FUN_1802a8080(&puStack_c8,alStack_a8,3);
  puStack_c8 = &UNK_180a3c3e0;
  if (puStack_c0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_c0 = (undefined1 *)0x0;
  uStack_b0 = uStack_b0 & 0xffffffff00000000;
  puStack_c8 = &UNK_18098bcb0;
  if (((uStack_98._1_1_ == '\0') && ((char)uStack_98 == '\0')) && (alStack_a8[0] != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045e350(longlong param_1)
void FUN_18045e350(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plStackX_10;
  longlong *plStackX_18;
  longlong **pplStackX_20;
  undefined8 uVar3;
  longlong alStack_30 [2];
  undefined *puStack_20;
  undefined *puStack_18;
  
  uVar3 = 0xfffffffffffffffe;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
               0x48) < _DAT_180d49d08) && (FUN_1808fcb90(), _DAT_180d49d08 == -1)) {
    _DAT_180d49bf0 = &UNK_1809feda8;
    _DAT_180d49bf8 = &DAT_180d49c08;
    _DAT_180d49c00 = 0;


