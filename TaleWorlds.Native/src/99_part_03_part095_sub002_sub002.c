#include "TaleWorlds.Native.Split.h"

// 99_part_03_part095_sub002_sub002.c - 1 个函数

// 函数: void FUN_1802511f0(longlong *param_1,longlong param_2,longlong *param_3,uint param_4)
void FUN_1802511f0(longlong *param_1,longlong param_2,longlong *param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  char cVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  int **ppiVar15;
  longlong *plVar16;
  longlong *plVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  float *pfVar21;
  undefined1 *puVar22;
  byte bVar23;
  longlong lVar24;
  undefined1 *puVar25;
  longlong *plVar26;
  longlong lVar27;
  int iVar28;
  int iVar29;
  longlong lVar30;
  undefined1 *puVar31;
  undefined8 *puVar32;
  uint uVar33;
  longlong lVar34;
  undefined8 *puVar35;
  ulonglong uVar36;
  longlong *plVar37;
  longlong lVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auStack_6e8 [32];
  int iStack_6c8;
  int iStack_6c4;
  int aiStack_6c0 [2];
  undefined8 *puStack_6b8;
  undefined8 *puStack_6b0;
  undefined8 *puStack_6a8;
  undefined4 uStack_6a0;
  uint uStack_698;
  uint uStack_694;
  int iStack_690;
  uint uStack_68c;
  longlong *plStack_688;
  undefined8 *puStack_680;
  undefined8 *puStack_678;
  longlong *plStack_670;
  int **ppiStack_668;
  undefined8 *puStack_660;
  undefined8 *puStack_658;
  undefined8 *puStack_650;
  undefined4 uStack_648;
  undefined8 uStack_640;
  ulonglong uStack_638;
  undefined4 uStack_630;
  ulonglong uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  float fStack_5f0;
  longlong lStack_5e8;
  undefined8 uStack_5e0;
  longlong *plStack_5d8;
  ulonglong uStack_5d0;
  undefined8 uStack_5c8;
  float fStack_5c0;
  undefined4 uStack_5bc;
  longlong *plStack_5b8;
  longlong *plStack_5b0;
  longlong *plStack_5a8;
  longlong *plStack_5a0;
  longlong *plStack_598;
  undefined4 uStack_590;
  longlong *plStack_588;
  longlong lStack_580;
  float fStack_578;
  float fStack_574;
  longlong *plStack_570;
  float fStack_568;
  float fStack_564;
  longlong lStack_560;
  undefined8 ***pppuStack_558;
  undefined8 ***pppuStack_550;
  undefined8 *puStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined4 uStack_530;
  longlong *plStack_528;
  int *apiStack_500 [2];
  undefined *puStack_4f0;
  undefined *puStack_4e8;
  longlong *plStack_4e0;
  longlong *plStack_4d8;
  undefined8 uStack_4d0;
  float fStack_4c8;
  float fStack_4c4;
  float fStack_4c0;
  float fStack_4bc;
  float fStack_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  float fStack_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float fStack_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined4 uStack_3d0;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  ulonglong uStack_c8;
  
  uStack_4d0 = 0xfffffffffffffffe;
  uStack_c8 = _DAT_180bf00a8 ^ (ulonglong)auStack_6e8;
  uStack_694 = 0;
  *param_1 = param_2;
  fStack_574 = *(float *)(param_2 + 0x3010) + 100.0;
  fStack_578 = *(float *)(param_2 + 0x300c) + 100.0;
  fStack_564 = *(float *)(param_2 + 0x3008) - 100.0;
  fStack_568 = *(float *)(param_2 + 0x3004) - 100.0;
  iStack_6c4 = (int)((fStack_578 - fStack_568) * 0.25);
  iStack_690 = (int)((fStack_574 - fStack_564) * 0.25);
  if (0x80 < iStack_6c4) {
    iStack_6c4 = 0x80;
  }
  if (0x80 < iStack_690) {
    iStack_690 = 0x80;
  }
  uStack_68c = param_4;
  plStack_688 = param_1;
  plStack_670 = param_3;
  lStack_580 = param_2;
  cVar12 = FUN_180054120();
  uStack_628 = 0x40000;
  if (cVar12 != '\0') {
    uStack_628 = 0x400000;
  }
  uStack_640 = 0;
  uStack_5d0 = uStack_628;
  uStack_640 = FUN_18062b420(_DAT_180c8ed18,uStack_628,0x24);
  LOCK();
  uStack_638 = 0;
  UNLOCK();
  uStack_630 = 0;
  uStack_698 = 0;
  uStack_5e0 = *(undefined8 *)(param_2 + 600);
  puStack_6b8 = (undefined8 *)0x0;
  puStack_6b0 = (undefined8 *)0x0;
  puStack_6a8 = (undefined8 *)0x0;
  uStack_6a0 = 3;
  puVar13 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x2000,3);
  if (puStack_6b8 != puStack_6b0) {
                    // WARNING: Subroutine does not return
    memmove(puVar13,puStack_6b8,(longlong)puStack_6b0 - (longlong)puStack_6b8);
  }
  if (puStack_6b8 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puStack_6b8);
  }
  puStack_6a8 = puVar13 + 0x400;
  plStack_5a8 = (longlong *)0x0;
  plStack_5a0 = (longlong *)0x0;
  plStack_598 = (longlong *)0x0;
  uStack_590 = 3;
  puStack_6b8 = puVar13;
  puStack_6b0 = puVar13;
  plVar14 = (longlong *)FUN_18062b420(_DAT_180c8ed18,0x2000);
  plVar17 = plVar14 + 0x400;
  puStack_678 = (undefined8 *)*param_3;
  puStack_680 = (undefined8 *)param_3[1];
  puVar13 = puStack_6b8;
  plVar16 = plVar14;
  plStack_5a8 = plVar14;
  plStack_5a0 = plVar14;
  plStack_598 = plVar17;
  if (puStack_678 != puStack_680) {
    do {
      uVar19 = *puStack_678;
      if (puVar13 < puStack_6a8) {
        *puVar13 = uVar19;
      }
      else {
        puStack_6b0 = puVar13;
        puVar13 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,8);
        if (puStack_6b8 != puStack_6b0) {
                    // WARNING: Subroutine does not return
          memmove(puVar13,puStack_6b8,(longlong)puStack_6b0 - (longlong)puStack_6b8);
        }
        *puVar13 = uVar19;
        if (puStack_6b8 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_6a8 = puVar13 + 1;
        puStack_6b8 = puVar13;
      }
      puStack_6b0 = puVar13 + 1;
      FUN_1802e8c60(uVar19,&puStack_6b8);
      iStack_6c8 = 0;
      puVar13 = puStack_6b8;
      if ((longlong)puStack_6b0 - (longlong)puStack_6b8 >> 3 != 0) {
        lStack_5e8 = 0;
        plVar37 = plVar16;
        do {
          uVar19 = uStack_5e0;
          lVar27 = lStack_5e8;
          iVar28 = iStack_6c8;
          uStack_5c8 = *(longlong *)((longlong)puVar13 + lStack_5e8);
          plVar16 = plVar37;
          if (((*(byte *)(uStack_5c8 + 0x2c4) & 2) == 0) &&
             (ppiVar15 = (int **)FUN_1803a0010(uStack_5e0,uStack_5c8), puVar13 = puStack_6b8,
             ppiStack_668 = ppiVar15, ppiVar15 != (int **)0x0)) {
            plVar3 = (longlong *)ppiVar15[1];
            lVar24 = *plVar3;
            plVar26 = plVar3;
            if (lVar24 == 0) {
              plVar26 = plVar3 + 1;
              lVar24 = *plVar26;
              while (lVar24 == 0) {
                plVar26 = plVar26 + 1;
                lVar24 = *plVar26;
              }
            }
            lVar27 = lStack_5e8;
            iVar28 = iStack_6c8;
            if (lVar24 != plVar3[(longlong)ppiVar15[2]]) {
              do {
                FUN_1803a02b0(uVar19,&plStack_588);
                plVar3 = plStack_588;
                (**(code **)(*plStack_588 + 0xe0))
                          (plStack_588,
                           CONCAT31((uint3)(*(uint *)(uStack_5c8 + 0x2ac) >> 0x1e),
                                    ~(byte)(*(uint *)(uStack_5c8 + 0x2ac) >> 0x16)) & 0xffffff01);
                (**(code **)(*plVar3 + 200))(plVar3,0);
                if (plVar14 < plVar17) {
                  *plVar14 = (longlong)plVar3;
                  plVar16 = plVar37;
                }
                else {
                  plStack_570 = (longlong *)((longlong)plVar14 - (longlong)plVar37);
                  if ((longlong)plStack_570 >> 3 == 0) {
                    lStack_560 = 1;
LAB_180251624:
                    plVar16 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lStack_560 * 8);
                  }
                  else {
                    lStack_560 = ((longlong)plStack_570 >> 3) * 2;
                    if (lStack_560 != 0) goto LAB_180251624;
                    plVar16 = (longlong *)0x0;
                  }
                  if (plVar37 != plVar14) {
                    // WARNING: Subroutine does not return
                    memmove(plVar16,plVar37,plStack_570);
                  }
                  *plVar16 = (longlong)plVar3;
                  if (plVar37 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900(plVar37);
                  }
                  plVar17 = plVar16 + lStack_560;
                  ppiVar15 = ppiStack_668;
                  plStack_5a8 = plVar16;
                  plStack_598 = plVar17;
                  plVar14 = plVar16;
                }
                plVar14 = plVar14 + 1;
                plStack_5a0 = plVar14;
                if (plStack_588 != (longlong *)0x0) {
                  (**(code **)(*plStack_588 + 0x38))();
                }
                lVar24 = *(longlong *)(lVar24 + 0x10);
                while (lVar24 == 0) {
                  plVar26 = plVar26 + 1;
                  lVar24 = *plVar26;
                }
                puVar13 = puStack_6b8;
                lVar27 = lStack_5e8;
                plVar37 = plVar16;
                uVar19 = uStack_5e0;
                iVar28 = iStack_6c8;
              } while (lVar24 != *(longlong *)(ppiVar15[1] + (longlong)ppiVar15[2] * 2));
            }
          }
          iStack_6c8 = iVar28 + 1;
          lStack_5e8 = lVar27 + 8;
          plVar37 = plVar16;
        } while ((ulonglong)(longlong)iStack_6c8 <
                 (ulonglong)((longlong)puStack_6b0 - (longlong)puVar13 >> 3));
      }
      puStack_678 = puStack_678 + 1;
      param_3 = plStack_670;
    } while (puStack_678 != puStack_680);
  }
  uStack_530 = 3;
  pppuStack_558 = &pppuStack_558;
  pppuStack_550 = &pppuStack_558;
  puStack_548 = (undefined8 *)0x0;
  uStack_540 = 0;
  uStack_538 = 0;
  puStack_660 = (undefined8 *)0x0;
  puStack_658 = (undefined8 *)0x0;
  puStack_650 = (undefined8 *)0x0;
  uStack_648 = 3;
  aiStack_6c0[0] = 0;
  iVar28 = 0;
  puVar13 = (undefined8 *)*param_3;
  puVar35 = (undefined8 *)param_3[1];
  puStack_680 = puVar35;
  if (puVar13 != puVar35) {
    puVar20 = (undefined8 *)0x0;
    do {
      uVar19 = *puVar13;
      if (puVar20 < puStack_650) {
        *puVar20 = uVar19;
      }
      else {
        puStack_658 = puVar20;
        puVar20 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,8,(undefined1)uStack_648);
        if (puStack_660 != puStack_658) {
                    // WARNING: Subroutine does not return
          memmove(puVar20,puStack_660,(longlong)puStack_658 - (longlong)puStack_660);
        }
        *puVar20 = uVar19;
        if (puStack_660 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_650 = puVar20 + 1;
        puStack_660 = puVar20;
      }
      puStack_658 = puVar20 + 1;
      FUN_1802e8c60(uVar19,&puStack_660);
      iVar29 = 0;
      puVar20 = puStack_660;
      if ((longlong)puStack_658 - (longlong)puStack_660 >> 3 != 0) {
        lVar27 = 0;
        puVar32 = puStack_658;
        do {
          lVar24 = *(longlong *)((longlong)puVar20 + lVar27);
          if ((((*(uint *)(lVar24 + 0x2ac) & 0x8000) == 0) && (*(longlong *)(lVar24 + 0x110) != 0))
             && ((*(uint *)(lVar24 + 0x148) & 0x20000) == 0)) {
            iVar28 = iVar28 + 1;
            ppiStack_668 = apiStack_500;
            puStack_4f0 = &UNK_180253f90;
            puStack_4e8 = &UNK_18014f180;
            apiStack_500[0] = aiStack_6c0;
            FUN_180149bd0(*(longlong *)(lVar24 + 0x110),apiStack_500);
            puVar20 = puStack_660;
            puVar32 = puStack_658;
          }
          iVar29 = iVar29 + 1;
          lVar27 = lVar27 + 8;
          puVar35 = puStack_680;
        } while ((ulonglong)(longlong)iVar29 <
                 (ulonglong)((longlong)puVar32 - (longlong)puVar20 >> 3));
      }
      puVar13 = puVar13 + 1;
    } while (puVar13 != puVar35);
  }
  while (uVar19 = _DAT_180c82868, iVar28 != aiStack_6c0[0]) {
    lVar27 = FUN_18005e890(_DAT_180c82868);
    if (lVar27 != 0) {
      plVar17 = (longlong *)FUN_18005e890(uVar19);
      (**(code **)(*plVar17 + 0x20))(plVar17,0);
    }
  }
  uVar36 = (longlong)plStack_5a0 - (longlong)plStack_5a8 >> 3;
  do {
    bVar11 = true;
    iVar28 = 0;
    plVar17 = plStack_5a8;
    if (uVar36 == 0) break;
    do {
      if (bVar11) {
        lVar27 = *plVar17;
        iVar29 = 0;
        lVar24 = *(longlong *)(lVar27 + 0x38);
        if (*(longlong *)(lVar27 + 0x40) - lVar24 >> 4 != 0) {
          lVar30 = 0;
          do {
            lVar24 = *(longlong *)(lVar24 + lVar30);
            lVar34 = lVar24;
            if ((*(byte *)(lVar24 + 0xfd) & 0x20) == 0) {
              lVar34 = func_0x000180085de0(*(undefined8 *)(lVar24 + 0x1b0));
            }
            lVar24 = *(longlong *)(lVar24 + 0x1b8);
            bVar23 = *(byte *)(lVar24 + 0x38c);
            if (bVar23 == 9) {
              uVar33 = *(uint *)(lVar24 + 0x388);
              if ((uVar33 >> 0x1e & 1) == 0) {
                if ((uVar33 >> 0x1c & 1) == 0) {
                  bVar23 = (byte)(uVar33 >> 0x18);
                  if ((int)uVar33 < 0) {
                    if ((uVar33 >> 0x1b & 1) == 0) {
                      bVar23 = bVar23 & 1 | 0xc;
                    }
                    else {
                      bVar23 = bVar23 & 1 | 0xe;
                    }
                  }
                  else if ((uVar33 >> 0x19 & 1) == 0) {
                    bVar23 = bVar23 & 1;
                  }
                  else if ((uVar33 >> 0x1b & 1) == 0) {
                    bVar23 = bVar23 & 1 | 2;
                  }
                  else {
                    bVar23 = ((uVar33 >> 0x18 & 1) != 0) + 7;
                  }
                }
                else {
                  bVar23 = 4;
                }
              }
              else {
                bVar23 = 9;
              }
              *(byte *)(lVar24 + 0x38c) = bVar23;
            }
            if ((*(longlong *)(lVar34 + 0x1e0) == 0) ||
               (((uVar18 = (ulonglong)bVar23,
                 *(char *)(*(longlong *)(lVar34 + 0x1e0) + 0x15 + uVar18 * 0x18) != '\x03' &&
                 (*(char *)(*(longlong *)(lVar34 + 0x1e0) + 0x15 + uVar18 * 0x18) != '\x04')) &&
                (*(char *)(*(longlong *)(lVar34 + 0x1e0) + 0x15 + uVar18 * 0x18) != '\x02'))))
            goto LAB_180251aae;
            iVar29 = iVar29 + 1;
            lVar30 = lVar30 + 0x10;
            lVar24 = *(longlong *)(lVar27 + 0x38);
          } while ((ulonglong)(longlong)iVar29 <
                   (ulonglong)(*(longlong *)(lVar27 + 0x40) - lVar24 >> 4));
        }
        bVar11 = true;
      }
      else {
LAB_180251aae:
        bVar11 = false;
      }
      iVar28 = iVar28 + 1;
      plVar17 = plVar17 + 1;
    } while ((ulonglong)(longlong)iVar28 < uVar36);
  } while (!bVar11);
  puVar13 = puStack_548;
  if (puStack_660 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (puStack_548 != (undefined8 *)0x0) {
    FUN_18004b790(&pppuStack_558,*puStack_548);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar13);
  }
  FUN_18024f630(plStack_688,uStack_68c);
  puVar13 = (undefined8 *)*plStack_670;
  ppiVar15 = (int **)plStack_670[1];
  uVar36 = (ulonglong)uStack_698;
  puStack_678 = puVar13;
  ppiStack_668 = ppiVar15;
  if ((int **)puVar13 != ppiVar15) {
    do {
      puVar35 = (undefined8 *)*puVar13;
      LOCK();
      UNLOCK();
      uStack_630 = 0;
      LOCK();
      uStack_638 = 0x180;
      UNLOCK();
      uVar19 = uStack_640;
      if (uStack_628 < 0x179) {
        uVar19 = 0;
      }
      uStack_68c = (uint)uVar36;
      puStack_680 = puVar35;
      puStack_678 = puVar13;
      uVar19 = FUN_1800ee510(uVar19);
      puVar35[5] = uVar19;
      *(byte *)((longlong)puVar35 + 0x2e9) = *(byte *)((longlong)puVar35 + 0x2e9) | 4;
      iVar28 = 0;
      if ((longlong)(puVar35[0x39] - puVar35[0x38]) >> 3 != 0) {
        lVar27 = 0;
        do {
          FUN_180253b30(*(undefined8 *)(lVar27 + puVar35[0x38]));
          iVar28 = iVar28 + 1;
          lVar27 = lVar27 + 8;
        } while ((ulonglong)(longlong)iVar28 <
                 (ulonglong)((longlong)(puVar35[0x39] - puVar35[0x38]) >> 3));
      }
      puStack_6b0 = puStack_6b8;
      if (puStack_6b8 < puStack_6a8) {
        *puStack_6b8 = puVar35;
      }
      else {
        puVar20 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,8);
        if (puStack_6b8 != puStack_6b0) {
                    // WARNING: Subroutine does not return
          memmove(puVar20,puStack_6b8,(longlong)puStack_6b0 - (longlong)puStack_6b8);
        }
        *puVar20 = puVar35;
        if (puStack_6b8 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_6a8 = puVar20 + 1;
        puStack_6b8 = puVar20;
      }
      puStack_6b0 = puStack_6b8 + 1;
      FUN_1802e8c60(puVar35,&puStack_6b8);
      iStack_6c8 = 0;
      plStack_670 = (longlong *)0x0;
      uVar33 = (uint)uVar36;
      if ((longlong)puStack_6b0 - (longlong)puStack_6b8 >> 3 != 0) {
        do {
          iVar28 = iStack_6c8;
          lVar27 = puStack_6b8[(longlong)plStack_670];
          FUN_1802f28f0(lVar27,lStack_580);
          if (*(longlong *)(lVar27 + 0x110) != 0) {
            plVar17 = *(longlong **)(lVar27 + 0x270);
            plStack_4e0 = plVar17;
            if (plVar17 != (longlong *)0x0) {
              (**(code **)(*plVar17 + 0x28))(plVar17);
            }
            plVar14 = *(longlong **)(lVar27 + 0x110);
            plStack_4d8 = plVar14;
            if (plVar14 != (longlong *)0x0) {
              (**(code **)(*plVar14 + 0x28))(plVar14);
            }
            plVar16 = plStack_688;
            plStack_5b8 = plVar17;
            if (plVar17 != (longlong *)0x0) {
              (**(code **)(*plVar17 + 0x28))(plVar17);
            }
            plStack_5b0 = plVar14;
            if (plVar14 != (longlong *)0x0) {
              (**(code **)(*plVar14 + 0x28))(plVar14);
            }
            uVar33 = uStack_694;
            uStack_694 = uStack_694 | 1;
            plVar37 = (longlong *)plVar16[0x41c];
            if (plVar37 < (longlong *)plVar16[0x41d]) {
              plVar16[0x41c] = (longlong)(plVar37 + 2);
              *plVar37 = (longlong)plVar17;
              plStack_5b8 = (longlong *)0x0;
              plVar37[1] = (longlong)plVar14;
              plStack_5b0 = (longlong *)0x0;
              plStack_570 = plVar37;
            }
            else {
              FUN_180253e50(plVar16 + 0x41b,&plStack_5b8);
            }
            plVar16 = plStack_5b8;
            uStack_694 = uVar33 & 0xfffffffe;
            if (plStack_5b0 != (longlong *)0x0) {
              (**(code **)(*plStack_5b0 + 0x38))();
            }
            if (plVar16 != (longlong *)0x0) {
              (**(code **)(*plVar16 + 0x38))(plVar16);
            }
            if (plVar14 != (longlong *)0x0) {
              (**(code **)(*plVar14 + 0x38))(plVar14);
            }
            iVar28 = iStack_6c8;
            if (plVar17 != (longlong *)0x0) {
              (**(code **)(*plVar17 + 0x38))(plVar17);
              iVar28 = iStack_6c8;
            }
          }
          if (*(longlong *)(lVar27 + 0x270) != 0) {
            *(undefined8 *)(*(longlong *)(lVar27 + 0x270) + 0x10) = 0;
          }
          *(undefined1 *)(lVar27 + 0x278) = 0;
          plStack_528 = *(longlong **)(lVar27 + 0x270);
          *(undefined8 *)(lVar27 + 0x270) = 0;
          if (plStack_528 != (longlong *)0x0) {
            (**(code **)(*plStack_528 + 0x38))();
          }
          if (((*(byte *)(lVar27 + 0x2e8) & 0xb) == 0xb) && ((*(byte *)(lVar27 + 0x2c4) & 2) == 0))
          {
            lVar24 = *(longlong *)(lVar27 + 0x168);
            if (lVar24 == 0) {
              *(undefined8 *)(lVar27 + 0x70) = *(undefined8 *)(lVar27 + 0x30);
              *(undefined8 *)(lVar27 + 0x78) = *(undefined8 *)(lVar27 + 0x38);
              *(undefined8 *)(lVar27 + 0x80) = *(undefined8 *)(lVar27 + 0x40);
              *(undefined8 *)(lVar27 + 0x88) = *(undefined8 *)(lVar27 + 0x48);
              *(undefined8 *)(lVar27 + 0x90) = *(undefined8 *)(lVar27 + 0x50);
              *(undefined8 *)(lVar27 + 0x98) = *(undefined8 *)(lVar27 + 0x58);
              *(undefined4 *)(lVar27 + 0xa0) = *(undefined4 *)(lVar27 + 0x60);
              *(undefined4 *)(lVar27 + 0xa4) = *(undefined4 *)(lVar27 + 100);
              *(undefined4 *)(lVar27 + 0xa8) = *(undefined4 *)(lVar27 + 0x68);
              *(undefined4 *)(lVar27 + 0xac) = *(undefined4 *)(lVar27 + 0x6c);
            }
            else {
              fVar39 = *(float *)(lVar24 + 0x70);
              fVar40 = *(float *)(lVar24 + 0x74);
              fVar44 = *(float *)(lVar24 + 0x78);
              fVar1 = *(float *)(lVar24 + 0x7c);
              fVar2 = *(float *)(lVar24 + 0x80);
              fVar4 = *(float *)(lVar24 + 0x84);
              fVar5 = *(float *)(lVar24 + 0x88);
              fVar6 = *(float *)(lVar24 + 0x8c);
              fVar7 = *(float *)(lVar24 + 0x90);
              fVar8 = *(float *)(lVar24 + 0x94);
              fVar9 = *(float *)(lVar24 + 0x98);
              fVar10 = *(float *)(lVar24 + 0x9c);
              fVar41 = *(float *)(lVar27 + 0x34);
              fVar42 = *(float *)(lVar27 + 0x38);
              fVar43 = *(float *)(lVar27 + 0x30);
              fStack_4c8 = fVar43 * fVar39 + fVar41 * fVar2 + fVar42 * fVar7;
              fStack_4c4 = fVar43 * fVar40 + fVar41 * fVar4 + fVar42 * fVar8;
              fStack_4c0 = fVar43 * fVar44 + fVar41 * fVar5 + fVar42 * fVar9;
              fStack_4bc = fVar43 * fVar1 + fVar41 * fVar6 + fVar42 * fVar10;
              fVar41 = *(float *)(lVar27 + 0x44);
              fVar42 = *(float *)(lVar27 + 0x48);
              fVar43 = *(float *)(lVar27 + 0x40);
              fStack_4b8 = fVar43 * fVar39 + fVar41 * fVar2 + fVar42 * fVar7;
              fStack_4b4 = fVar43 * fVar40 + fVar41 * fVar4 + fVar42 * fVar8;
              fStack_4b0 = fVar43 * fVar44 + fVar41 * fVar5 + fVar42 * fVar9;
              fStack_4ac = fVar43 * fVar1 + fVar41 * fVar6 + fVar42 * fVar10;
              fVar41 = *(float *)(lVar27 + 0x54);
              fVar42 = *(float *)(lVar27 + 0x58);
              fVar43 = *(float *)(lVar27 + 0x50);
              fStack_4a8 = fVar43 * fVar39 + fVar41 * fVar2 + fVar42 * fVar7;
              fStack_4a4 = fVar43 * fVar40 + fVar41 * fVar4 + fVar42 * fVar8;
              fStack_4a0 = fVar43 * fVar44 + fVar41 * fVar5 + fVar42 * fVar9;
              fStack_49c = fVar43 * fVar1 + fVar41 * fVar6 + fVar42 * fVar10;
              fVar41 = *(float *)(lVar27 + 100);
              fVar42 = *(float *)(lVar27 + 0x68);
              fVar43 = *(float *)(lVar27 + 0x60);
              fStack_498 = fVar43 * fVar39 + fVar41 * fVar2 + fVar42 * fVar7 +
                           *(float *)(lVar24 + 0xa0);
              fStack_494 = fVar43 * fVar40 + fVar41 * fVar4 + fVar42 * fVar8 +
                           *(float *)(lVar24 + 0xa4);
              fStack_490 = fVar43 * fVar44 + fVar41 * fVar5 + fVar42 * fVar9 +
                           *(float *)(lVar24 + 0xa8);
              fStack_48c = fVar43 * fVar1 + fVar41 * fVar6 + fVar42 * fVar10 +
                           *(float *)(lVar24 + 0xac);
              *(float *)(lVar27 + 0x70) = fStack_4c8;
              *(float *)(lVar27 + 0x74) = fStack_4c4;
              *(float *)(lVar27 + 0x78) = fStack_4c0;
              *(float *)(lVar27 + 0x7c) = fStack_4bc;
              *(float *)(lVar27 + 0x80) = fStack_4b8;
              *(float *)(lVar27 + 0x84) = fStack_4b4;
              *(float *)(lVar27 + 0x88) = fStack_4b0;
              *(float *)(lVar27 + 0x8c) = fStack_4ac;
              *(float *)(lVar27 + 0x90) = fStack_4a8;
              *(float *)(lVar27 + 0x94) = fStack_4a4;
              *(float *)(lVar27 + 0x98) = fStack_4a0;
              *(float *)(lVar27 + 0x9c) = fStack_49c;
              *(float *)(lVar27 + 0xa0) = fStack_498;
              *(float *)(lVar27 + 0xa4) = fStack_494;
              *(float *)(lVar27 + 0xa8) = fStack_490;
              *(float *)(lVar27 + 0xac) = fStack_48c;
            }
            lVar24 = lVar27 + 0x70;
            if (*(short *)(lVar27 + 0x2b0) != *(short *)(lVar27 + 0x2b4)) {
              if (*(char *)(lVar27 + 0x2d8) == '\0') {
                FUN_1802e7e20(lVar27);
              }
              else {
                FUN_18063ad30(*(longlong *)(lVar27 + 0x28),*(longlong *)(lVar27 + 0x28) + 0xf8,
                              lVar24);
              }
              *(undefined2 *)(lVar27 + 0x2b0) = *(undefined2 *)(lVar27 + 0x2b4);
            }
            FUN_18063ad30(*(longlong *)(lVar27 + 0x28),*(longlong *)(lVar27 + 0x28) + 0xf8,lVar24);
            *(undefined2 *)(lVar27 + 0x2b6) = *(undefined2 *)(lVar27 + 0x2b2);
            if (((*(byte *)(lVar27 + 0x2e8) & 0x10) != 0) ||
               ((*(longlong **)(lVar27 + 0x270) != (longlong *)0x0 &&
                (cVar12 = (**(code **)(**(longlong **)(lVar27 + 0x270) + 0x70))(), cVar12 != '\0')))
               ) {
              FUN_1802ec150(lVar27,0);
            }
            uVar19 = uStack_5e0;
            uStack_308 = 0;
            uStack_304 = 0;
            uStack_300 = 0;
            uStack_2fc = 0x7f7fffff;
            uStack_2f8 = 0;
            uStack_2f4 = 0;
            uStack_2f0 = 0;
            uStack_2ec = 0x7f7fffff;
            uStack_2e8 = 0;
            uStack_2e4 = 0;
            uStack_2e0 = 0;
            uStack_2dc = 0x7f7fffff;
            uStack_258 = 0;
            uStack_2d8 = 0;
            uStack_2d0 = 0;
            uStack_2c8 = 0;
            uStack_2c0 = 0;
            uStack_2b8 = 0;
            uStack_2b0 = 0;
            uStack_2a8 = 0;
            uStack_2a0 = 0;
            uStack_298 = 0;
            uStack_290 = 0;
            uStack_288 = 0;
            uStack_280 = 0;
            uStack_278 = 0;
            uStack_270 = 0;
            uStack_268 = 0;
            uStack_260 = 0;
            lVar30 = FUN_1803a0010(uStack_5e0,lVar27);
            if (lVar30 != 0) {
              uStack_620 = 0;
              uStack_618 = 0;
              uStack_610 = 0;
              uStack_608 = 0;
              plVar14 = *(longlong **)(lVar30 + 8);
              lVar34 = *plVar14;
              plVar17 = plVar14;
              if (lVar34 == 0) {
                plVar17 = plVar14 + 1;
                lVar34 = *plVar17;
                while (lVar34 == 0) {
                  plVar17 = plVar17 + 1;
                  lVar34 = *plVar17;
                }
              }
              uStack_608._0_4_ = 0.0;
              uStack_610._4_4_ = 0.0;
              uStack_610._0_4_ = 0.0;
              uStack_618._0_4_ = 0.0;
              uStack_620._4_4_ = 0.0;
              uStack_620._0_4_ = 0.0;
              fVar41 = uStack_610._4_4_;
              fVar42 = (float)uStack_610;
              fVar43 = (float)uStack_608;
              fVar39 = (float)uStack_620;
              fVar40 = (float)uStack_618;
              fVar44 = uStack_620._4_4_;
              if (lVar34 != plVar14[*(longlong *)(lVar30 + 0x10)]) {
                do {
                  FUN_1803a02b0(uVar19,&plStack_5d8,*(undefined8 *)(lVar34 + 8));
                  (**(code **)(*plStack_5d8 + 0xe0))
                            (plStack_5d8,
                             CONCAT31((uint3)(*(uint *)(lVar27 + 0x2ac) >> 0x1e),
                                      ~(byte)(*(uint *)(lVar27 + 0x2ac) >> 0x16)) & 0xffffff01);
                  pfVar21 = (float *)(**(code **)(*plStack_5d8 + 0x198))();
                  fVar1 = *pfVar21;
                  fVar2 = pfVar21[4];
                  if (fVar1 <= fVar2) {
                    if (fVar1 < fVar39) {
                      fVar39 = fVar1;
                    }
                    if (pfVar21[1] < fVar44) {
                      fVar44 = pfVar21[1];
                    }
                    if (pfVar21[2] < fVar40) {
                      fVar40 = pfVar21[2];
                    }
                    if (fVar42 < fVar2) {
                      uStack_610 = CONCAT44(uStack_610._4_4_,fVar2);
                      fVar42 = fVar2;
                    }
                    fVar1 = pfVar21[5];
                    if (fVar41 < fVar1) {
                      uStack_610 = CONCAT44(fVar1,(float)uStack_610);
                      fVar41 = fVar1;
                    }
                    fVar1 = pfVar21[6];
                    if (fVar43 < fVar1) {
                      uStack_608 = CONCAT44(uStack_608._4_4_,fVar1);
                      fVar43 = fVar1;
                    }
                  }
                  if (plStack_5d8 != (longlong *)0x0) {
                    (**(code **)(*plStack_5d8 + 0x38))();
                  }
                  lVar34 = *(longlong *)(lVar34 + 0x10);
                  while (lVar34 == 0) {
                    plVar17 = plVar17 + 1;
                    lVar34 = *plVar17;
                  }
                } while (lVar34 != *(longlong *)
                                    (*(longlong *)(lVar30 + 8) + *(longlong *)(lVar30 + 0x10) * 8));
                uStack_618 = CONCAT44(uStack_618._4_4_,fVar40);
                uStack_620 = CONCAT44(fVar44,fVar39);
              }
              if (fVar42 < fVar39) {
                fStack_5f0 = 0.0;
                uStack_620 = 0;
                uStack_618 = 0;
                uStack_610 = 0;
                uStack_608 = 0;
                uStack_600 = 0;
                uStack_5f8 = 0;
              }
              else {
                fStack_5c0 = (fVar43 + fVar40) * 0.5;
                fVar40 = (fVar41 + fVar44) * 0.5;
                fVar39 = (fVar42 + fVar39) * 0.5;
                uStack_5c8 = CONCAT44(fVar40,fVar39);
                uStack_5bc = 0x7f7fffff;
                uStack_600 = CONCAT44(fVar40,fVar39);
                uStack_5f8 = CONCAT44(0x7f7fffff,fStack_5c0);
                fStack_5f0 = SQRT((fVar41 - fVar40) * (fVar41 - fVar40) +
                                  (fVar42 - fVar39) * (fVar42 - fVar39) +
                                  (fVar43 - fStack_5c0) * (fVar43 - fStack_5c0));
              }
              FUN_18063ad30(&uStack_308,&uStack_620,lVar24);
            }
            plVar17 = plStack_688;
            uStack_250 = 0;
            uStack_488 = CONCAT44(uStack_304,uStack_308);
            uStack_480 = CONCAT44(uStack_2fc,uStack_300);
            uStack_478 = CONCAT44(uStack_2f4,uStack_2f8);
            uStack_470 = CONCAT44(uStack_2ec,uStack_2f0);
            uStack_468 = CONCAT44(uStack_2e4,uStack_2e8);
            uStack_460 = CONCAT44(uStack_2dc,uStack_2e0);
            uStack_458 = uStack_2d8;
            uStack_450 = uStack_2d0;
            uStack_448 = uStack_2c8;
            uStack_440 = uStack_2c0;
            uStack_438 = uStack_2b8;
            uStack_430 = uStack_2b0;
            uStack_428 = uStack_2a8;
            uStack_420 = uStack_2a0;
            uStack_418 = uStack_298;
            uStack_410 = uStack_290;
            uStack_408 = uStack_288;
            uStack_400 = uStack_280;
            uStack_3f8 = (undefined4)uStack_278;
            uStack_3f4 = uStack_278._4_4_;
            uStack_3f0 = (undefined4)uStack_270;
            uStack_3ec = uStack_270._4_4_;
            uStack_3e8 = uStack_268;
            uStack_3e0 = uStack_260;
            uStack_3d8 = uStack_258;
            uStack_3d0 = 0;
            lVar24 = plStack_688[0x14];
            lVar30 = plStack_688[0x13];
            FUN_180253760(plStack_688 + 0x13,&uStack_488);
            plVar17 = plVar17 + 0x1c;
            lVar34 = 0x80;
            do {
              puVar31 = (undefined1 *)*plVar17;
              if (puVar31 < (undefined1 *)plVar17[1]) {
                *plVar17 = (longlong)(puVar31 + 1);
                *puVar31 = 0;
              }
              else {
                puVar25 = (undefined1 *)plVar17[-1];
                if ((longlong)puVar31 - (longlong)puVar25 == 0) {
                  lVar38 = 1;
LAB_180252407:
                  puVar22 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,lVar38,(char)plVar17[2]);
                  puVar31 = (undefined1 *)*plVar17;
                  puVar25 = (undefined1 *)plVar17[-1];
                }
                else {
                  lVar38 = ((longlong)puVar31 - (longlong)puVar25) * 2;
                  if (lVar38 != 0) goto LAB_180252407;
                  puVar22 = (undefined1 *)0x0;
                }
                if (puVar25 != puVar31) {
                    // WARNING: Subroutine does not return
                  memmove(puVar22,puVar25,(longlong)puVar31 - (longlong)puVar25);
                }
                *puVar22 = 0;
                if (plVar17[-1] != 0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                plVar17[-1] = (longlong)puVar22;
                *plVar17 = (longlong)(puVar22 + 1);
                plVar17[1] = (longlong)(puVar22 + lVar38);
              }
              plVar17 = plVar17 + 4;
              lVar34 = lVar34 + -1;
            } while (lVar34 != 0);
            FUN_1802e76f0(lVar27,plStack_688,(lVar24 - lVar30) / 0xbc & 0xffffffff);
            iVar28 = iStack_6c8;
          }
          iStack_6c8 = iVar28 + 1;
          plStack_670 = (longlong *)((longlong)plStack_670 + 1);
          ppiVar15 = ppiStack_668;
          puVar35 = puStack_680;
          puVar13 = puStack_678;
          uVar33 = uStack_68c;
        } while ((ulonglong)(longlong)iStack_6c8 <
                 (ulonglong)((longlong)puStack_6b0 - (longlong)puStack_6b8 >> 3));
      }
      FUN_1802544f0(puVar35[5]);
      puVar35[5] = 0;
      iVar28 = 0;
      if ((longlong)(puVar35[0x39] - puVar35[0x38]) >> 3 != 0) {
        lVar27 = 0;
        do {
          FUN_180254550(*(undefined8 *)(lVar27 + puVar35[0x38]));
          iVar28 = iVar28 + 1;
          lVar27 = lVar27 + 8;
        } while ((ulonglong)(longlong)iVar28 <
                 (ulonglong)((longlong)(puVar35[0x39] - puVar35[0x38]) >> 3));
      }
      uVar36 = uStack_638 & 0xffffffff;
      if ((longlong)uStack_638 <= (longlong)(int)uStack_698) {
        uVar36 = (ulonglong)uVar33;
      }
      uStack_698 = (uint)uVar36;
      puVar13 = puVar13 + 1;
      puStack_678 = puVar13;
    } while ((int **)puVar13 != ppiVar15);
  }
                    // WARNING: Subroutine does not return
  FUN_180062300(_DAT_180c86928,&UNK_180a14808,(double)((float)(int)uStack_698 * 0.0009765625),
                uStack_5d0 >> 10);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address






