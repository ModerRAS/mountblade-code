#include "TaleWorlds.Native.Split.h"

// 99_part_04_part079.c - 5 个函数

// 函数: void FUN_1802d0150(longlong param_1,longlong param_2,uint param_3)
void FUN_1802d0150(longlong param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  uint uVar2;
  code *pcVar3;
  longlong **pplVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  ulonglong *puVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  int iVar23;
  int iVar24;
  ulonglong *puVar25;
  uint uVar26;
  uint *puVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  undefined1 auStack_468 [32];
  undefined4 uStack_448;
  undefined4 uStack_440;
  undefined4 uStack_438;
  undefined4 uStack_430;
  int iStack_428;
  undefined8 uStack_420;
  undefined1 uStack_418;
  undefined4 uStack_410;
  uint uStack_408;
  int iStack_404;
  ulonglong uStack_400;
  longlong lStack_3f8;
  longlong *plStack_3f0;
  uint uStack_3e8;
  uint uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined8 uStack_3d4;
  undefined8 uStack_3cc;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  longlong *plStack_3b8;
  undefined4 uStack_3b0;
  undefined1 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined8 uStack_39c;
  undefined8 uStack_394;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  longlong *plStack_380;
  undefined4 uStack_378;
  undefined1 uStack_374;
  uint *puStack_370;
  longlong *plStack_368;
  longlong *plStack_360;
  undefined **ppuStack_358;
  longlong **pplStack_350;
  longlong **pplStack_348;
  longlong *plStack_340;
  longlong *plStack_338;
  longlong *plStack_330;
  longlong *plStack_328;
  longlong *plStack_320;
  longlong *plStack_318;
  longlong *plStack_310;
  longlong *plStack_308;
  longlong *plStack_300;
  longlong lStack_2f8;
  ulonglong uStack_2f0;
  undefined8 uStack_2e8;
  longlong *plStack_2e0;
  longlong *plStack_2d8;
  longlong *plStack_2d0;
  undefined **ppuStack_2c8;
  undefined8 uStack_2c0;
  longlong *plStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  undefined1 *puStack_2a0;
  undefined4 uStack_298;
  undefined1 auStack_290 [128];
  undefined4 uStack_210;
  longlong lStack_208;
  longlong *plStack_200;
  int iStack_1f8;
  undefined *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined4 uStack_1b8;
  undefined1 auStack_1b0 [40];
  undefined *puStack_188;
  undefined1 *puStack_180;
  undefined4 uStack_178;
  undefined1 auStack_170 [136];
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [136];
  ulonglong uStack_48;
  
  uStack_2b0 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_468;
  uStack_3e4 = param_3;
  lStack_2f8 = param_2;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uStack_3d8 = 1;
    uStack_3cc = 0;
    uStack_3c4 = 0;
    uStack_2e8 = 0;
    plStack_3b8 = (longlong *)0x0;
    uStack_3ac = 0;
    lVar16 = (ulonglong)*(uint *)(param_1 + 0x10c) * 0x3c;
    _uStack_3e0 = CONCAT44(*(undefined4 *)(lVar16 + 0x5c + param_1),
                           *(undefined4 *)(lVar16 + 0x58 + param_1));
    uStack_3d4 = 0x2600000001;
    uStack_3c0 = 0x1000001;
    uStack_3b0 = *(undefined4 *)(param_2 + 0x1bd4);
    puStack_188 = &UNK_1809fcc28;
    puStack_180 = auStack_170;
    auStack_170[0] = 0;
    uStack_178 = 0x16;
    strcpy_s(auStack_170,0x80,&UNK_180a13030);
    puVar6 = (undefined8 *)FUN_1800b2450();
    uVar13 = *puVar6;
    *puVar6 = 0;
    plStack_2e0 = *(longlong **)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = uVar13;
    if (plStack_2e0 != (longlong *)0x0) {
      (**(code **)(*plStack_2e0 + 0x38))();
    }
    if (plStack_2d0 != (longlong *)0x0) {
      (**(code **)(*plStack_2d0 + 0x38))();
    }
    puStack_188 = &UNK_18098bcb0;
    if (plStack_3b8 != (longlong *)0x0) {
      (**(code **)(*plStack_3b8 + 0x38))();
    }
  }
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uStack_3a0 = 1;
    uStack_394 = 0;
    uStack_38c = 0;
    uStack_2c0 = 0;
    plStack_380 = (longlong *)0x0;
    uStack_374 = 0;
    lVar16 = (ulonglong)*(uint *)(param_1 + 0x10c) * 0x3c;
    _uStack_3a8 = CONCAT44(*(undefined4 *)(lVar16 + 0x5c + param_1),
                           *(undefined4 *)(lVar16 + 0x58 + param_1));
    uStack_39c = 0xb00000001;
    uStack_388 = 0x1000001;
    uStack_378 = *(undefined4 *)(param_2 + 0x1bd4);
    puStack_e8 = &UNK_1809fcc28;
    puStack_e0 = auStack_d0;
    auStack_d0[0] = 0;
    uStack_d8 = 0x1e;
    strcpy_s(auStack_d0,0x80,&UNK_180a19188);
    puVar6 = (undefined8 *)FUN_1800b2450();
    uVar13 = *puVar6;
    *puVar6 = 0;
    plStack_2b8 = *(longlong **)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = uVar13;
    if (plStack_2b8 != (longlong *)0x0) {
      (**(code **)(*plStack_2b8 + 0x38))();
    }
    if (plStack_340 != (longlong *)0x0) {
      (**(code **)(*plStack_340 + 0x38))();
    }
    puStack_e8 = &UNK_18098bcb0;
    if (plStack_380 != (longlong *)0x0) {
      (**(code **)(*plStack_380 + 0x38))();
    }
  }
  plVar14 = *(longlong **)(param_1 + 0x48);
  if (plVar14 != (longlong *)0x0) {
    plStack_338 = plVar14;
    (**(code **)(*plVar14 + 0x28))(plVar14);
  }
  plStack_338 = *(longlong **)(param_2 + 0x9700);
  *(longlong **)(param_2 + 0x9700) = plVar14;
  if (plStack_338 != (longlong *)0x0) {
    (**(code **)(*plStack_338 + 0x38))();
  }
  plVar14 = *(longlong **)(param_1 + 0x50);
  if (plVar14 != (longlong *)0x0) {
    plStack_330 = plVar14;
    (**(code **)(*plVar14 + 0x28))(plVar14);
  }
  plStack_330 = *(longlong **)(param_2 + 0x9708);
  *(longlong **)(param_2 + 0x9708) = plVar14;
  if (plStack_330 != (longlong *)0x0) {
    (**(code **)(*plStack_330 + 0x38))();
  }
  plVar14 = (longlong *)(param_1 + 0x40);
  pplStack_350 = (longlong **)plVar14;
  if (*plVar14 != 0) {
    plStack_368 = (longlong *)(param_1 + 0x30);
    lVar16 = *plStack_368;
    if ((lVar16 != 0) && (param_3 <= (uint)((ulonglong)(longlong)*(int *)(lVar16 + 0x1c) >> 2)))
    goto LAB_1802d0648;
  }
  plVar7 = (longlong *)FUN_180081220();
  plVar1 = (longlong *)(param_1 + 0x30);
  lVar16 = *plVar7;
  *plVar7 = 0;
  plStack_328 = (longlong *)*plVar1;
  *plVar1 = lVar16;
  plStack_368 = plVar1;
  if (plStack_328 != (longlong *)0x0) {
    (**(code **)(*plStack_328 + 0x38))();
  }
  if (plStack_320 != (longlong *)0x0) {
    (**(code **)(*plStack_320 + 0x38))();
  }
  puVar6 = (undefined8 *)FUN_180081220();
  uVar13 = *puVar6;
  *puVar6 = 0;
  plStack_318 = *(longlong **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar13;
  if (plStack_318 != (longlong *)0x0) {
    (**(code **)(*plStack_318 + 0x38))();
  }
  if (plStack_310 != (longlong *)0x0) {
    (**(code **)(*plStack_310 + 0x38))();
  }
  puStack_1c8 = &UNK_18098bc80;
  puStack_1c0 = auStack_1b0;
  auStack_1b0[0] = 0;
  uStack_1b8 = 0x18;
  strcpy_s(auStack_1b0,0x20,&UNK_180a19168);
  uStack_410 = 1;
  uStack_418 = 1;
  uStack_420 = 0;
  uStack_430 = 4;
  uStack_438 = 5;
  uStack_440 = 3;
  uStack_448 = 0x21;
  iStack_428 = (((int)(((int)param_3 >> 0x1f & 0xfffU) + param_3) >> 0xc) + 1) * 0x1000;
  plVar7 = (longlong *)FUN_1800b0a10();
  lVar16 = *plVar7;
  *plVar7 = 0;
  plStack_308 = (longlong *)*plVar14;
  *plVar14 = lVar16;
  if (plStack_308 != (longlong *)0x0) {
    (**(code **)(*plStack_308 + 0x38))();
  }
  if (plStack_300 != (longlong *)0x0) {
    (**(code **)(*plStack_300 + 0x38))();
  }
  puStack_1c8 = &UNK_18098bcb0;
  lVar16 = *plVar1;
LAB_1802d0648:
  lStack_3f8 = *(longlong *)(lVar16 + 0x10);
  iStack_404 = 0;
  puVar27 = (uint *)(param_2 + 0x9878);
  puVar25 = (ulonglong *)(param_1 + 0x1e8);
  ppuStack_358 = (undefined **)((param_1 - param_2) + -0x96a8);
  do {
    uVar29 = 0xffffffffffffffff;
    puVar25[1] = *puVar25;
    uStack_400 = puVar25[-0x1b];
    uVar2 = *(uint *)((longlong)ppuStack_358 + (longlong)puVar27);
    uStack_2f0 = (ulonglong)uVar2;
    puVar18 = (ulonglong *)puVar25[-0x1b];
    uVar28 = (ulonglong)uVar2;
    puVar19 = puVar18 + uStack_2f0;
    uStack_408 = uVar2;
    puStack_370 = puVar27;
    if (puVar18 != puVar19) {
      iVar15 = 0;
      for (uVar8 = uVar28; uVar8 != 0; uVar8 = (longlong)uVar8 >> 1) {
        iVar15 = iVar15 + 1;
      }
      FUN_1802d9ff0(puVar18,puVar19,(longlong)(iVar15 + -1) * 2);
      puVar11 = puVar18;
      if (uVar28 < 0x1d) {
        while (puVar11 = puVar11 + 1, puVar11 != puVar19) {
          uVar8 = *puVar11;
          puVar10 = puVar11;
          puVar9 = puVar11;
          while (puVar9 != puVar18) {
            puVar9 = puVar9 + -1;
            if (*puVar9 <= uVar8) break;
            *puVar10 = *puVar9;
            puVar10 = puVar10 + -1;
          }
          *puVar10 = uVar8;
        }
      }
      else {
        puVar11 = puVar18 + 0x1c;
        puVar10 = puVar18;
        if (puVar18 != puVar11) {
          while (puVar10 = puVar10 + 1, puVar10 != puVar11) {
            uVar8 = *puVar10;
            puVar9 = puVar10;
            puVar17 = puVar10;
            while (puVar9 != puVar18) {
              puVar9 = puVar9 + -1;
              if (*puVar9 <= uVar8) break;
              *puVar17 = *puVar9;
              puVar17 = puVar17 + -1;
            }
            *puVar17 = uVar8;
          }
        }
        for (; puVar11 != puVar19; puVar11 = puVar11 + 1) {
          uVar8 = *puVar11;
          uVar20 = puVar11[-1];
          puVar10 = puVar11 + -1;
          puVar18 = puVar11;
          while (puVar9 = puVar10, uVar8 < uVar20) {
            *puVar18 = uVar20;
            puVar10 = puVar9 + -1;
            uVar20 = *puVar10;
            puVar18 = puVar9;
          }
          *puVar18 = uVar8;
        }
      }
    }
    *puVar27 = uVar2;
    uVar26 = 0;
    uStack_3e8 = 0;
    uVar8 = uStack_400;
    lVar16 = lStack_3f8;
    uVar5 = uStack_3e8;
    if (uVar2 != 0) {
      do {
        uVar20 = *(ulonglong *)(uVar8 + (longlong)(int)uVar26 * 8) & 0xffff000000000000;
        pplStack_348 = (longlong **)uVar20;
        if (uVar20 != uVar29) {
          puVar19 = (ulonglong *)puVar25[1];
          uVar29 = uVar20;
          if (puVar19 < (ulonglong *)puVar25[2]) {
            *puVar19 = uVar20;
            *(uint *)(puVar19 + 1) = uVar26;
            *(undefined4 *)((longlong)puVar19 + 0xc) = 0;
            puVar25[1] = puVar25[1] + 0x10;
            lVar16 = lStack_3f8;
          }
          else {
            puVar18 = (ulonglong *)*puVar25;
            lVar16 = (longlong)puVar19 - (longlong)puVar18 >> 4;
            if (lVar16 == 0) {
              lVar16 = 1;
LAB_1802d0862:
              puVar11 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18,lVar16 << 4,(char)puVar25[3]);
              puVar19 = (ulonglong *)puVar25[1];
              puVar18 = (ulonglong *)*puVar25;
            }
            else {
              lVar16 = lVar16 * 2;
              if (lVar16 != 0) goto LAB_1802d0862;
              puVar11 = (ulonglong *)0x0;
            }
            if (puVar18 != puVar19) {
                    // WARNING: Subroutine does not return
              memmove(puVar11,puVar18,(longlong)puVar19 - (longlong)puVar18);
            }
            *puVar11 = uVar20;
            *(uint *)(puVar11 + 1) = uVar26;
            *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
            if (*puVar25 != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            *puVar25 = (ulonglong)puVar11;
            puVar25[1] = (ulonglong)(puVar11 + 2);
            puVar25[2] = (ulonglong)(puVar11 + lVar16 * 2);
            uVar28 = (ulonglong)uStack_408;
            uVar8 = uStack_400;
            lVar16 = lStack_3f8;
          }
        }
        *(undefined4 *)(lVar16 + (longlong)(int)uVar26 * 4) =
             *(undefined4 *)(uVar8 + (longlong)(int)uVar26 * 8);
        uVar26 = uVar26 + 1;
        uVar5 = uVar26;
      } while (uVar26 < (uint)uVar28);
    }
    uStack_3e8 = uVar5;
    lVar16 = *(longlong *)(param_2 + 0x9898);
    lVar22 = *(longlong *)(param_2 + 0x9890);
    uVar28 = lVar16 - lVar22 >> 4;
    uStack_400 = (longlong)(puVar25[1] - *puVar25) >> 4;
    uVar29 = (ulonglong)((int)uStack_400 + (int)uVar28);
    if (uVar28 < uVar29) {
      uVar8 = uVar29 - uVar28;
      if ((ulonglong)(*(longlong *)(param_2 + 0x98a0) - lVar16 >> 4) < uVar8) {
        uVar20 = uVar28 * 2;
        if (uVar28 == 0) {
          uVar20 = 1;
        }
        if (uVar20 < uVar29) {
          uVar20 = uVar29;
        }
        if (uVar20 == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = FUN_18062b420(_DAT_180c8ed18,uVar20 << 4,*(undefined1 *)(param_2 + 0x98a8));
          lVar16 = *(longlong *)(param_2 + 0x9898);
          lVar22 = *(longlong *)(param_2 + 0x9890);
        }
        if (lVar22 != lVar16) {
                    // WARNING: Subroutine does not return
          memmove(lVar12,lVar22,lVar16 - lVar22);
        }
        if (uVar8 != 0) {
                    // WARNING: Subroutine does not return
          memset(lVar12,0,uVar8 * 0x10);
        }
        if (*(longlong *)(lStack_2f8 + 0x9890) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(longlong *)(lStack_2f8 + 0x9890) = lVar12;
        *(longlong *)(lStack_2f8 + 0x9898) = lVar12;
        *(ulonglong *)(lStack_2f8 + 0x98a0) = uVar20 * 0x10 + lVar12;
        param_2 = lStack_2f8;
      }
      else {
        if (uVar8 != 0) {
                    // WARNING: Subroutine does not return
          memset(lVar16,0,uVar8 * 0x10);
        }
        *(longlong *)(param_2 + 0x9898) = lVar16;
      }
    }
    else {
      *(ulonglong *)(param_2 + 0x9898) = uVar29 * 0x10 + lVar22;
    }
    pplVar4 = pplStack_350;
    iVar24 = 0;
    iVar23 = 0;
    iVar15 = (int)uStack_400;
    lVar16 = (longlong)iVar15;
    if (0 < iVar15) {
      lVar22 = 0;
      do {
        if (iVar23 == iVar15 + -1) {
          iVar21 = uStack_408 - iVar24;
        }
        else {
          iVar21 = *(int *)(lVar22 + 0x18 + *puVar25) - *(int *)(lVar22 + 8 + *puVar25);
        }
        lVar12 = lVar22 + (longlong)(int)uVar28 * 0x10;
        *(char *)(lVar12 + *(longlong *)(param_2 + 0x9890)) = (char)iStack_404;
        *(int *)(lVar12 + 8 + *(longlong *)(param_2 + 0x9890)) = iVar21;
        *(undefined4 *)(lVar12 + 4 + *(longlong *)(param_2 + 0x9890)) =
             *(undefined4 *)(lVar22 + 8 + *puVar25);
        *(int *)(lVar12 + 0xc + *(longlong *)(param_2 + 0x9890)) =
             (int)((ulonglong)*(undefined8 *)(lVar22 + *puVar25) >> 0x20);
        iVar24 = iVar24 + iVar21;
        iVar23 = iVar23 + 1;
        lVar22 = lVar22 + 0x10;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    lStack_3f8 = lStack_3f8 + uStack_2f0 * 4;
    iStack_404 = iStack_404 + 1;
    puVar27 = puStack_370 + 1;
    puVar25 = puVar25 + 4;
    if (5 < iStack_404) {
      ppuStack_358 = &puStack_2a8;
      puStack_2a8 = &UNK_1809fcc28;
      puStack_2a0 = auStack_290;
      uStack_298 = 0;
      auStack_290[0] = 0;
      uStack_210 = 9;
      lStack_208 = (longlong)*pplStack_350;
      plStack_200 = (longlong *)*plStack_368;
      iStack_1f8 = uStack_3e4 * 4;
      puStack_370 = puVar27;
      if (*(code **)(*plStack_200 + 0x28) == (code *)&UNK_180084660) {
        LOCK();
        *(int *)(plStack_200 + 1) = (int)plStack_200[1] + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*plStack_200 + 0x28))();
      }
      uVar13 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
      plVar14 = (longlong *)FUN_18005ce30(uVar13,&puStack_2a8);
      ppuStack_2c8 = (undefined **)plVar14;
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 0x28))(plVar14);
      }
      lVar16 = _DAT_180c82868;
      pplStack_348 = &plStack_3f0;
      plStack_3f0 = plVar14;
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 0x28))(plVar14);
      }
      pplStack_350 = &plStack_3f0;
      puVar6 = *(undefined8 **)(*(longlong *)(lVar16 + 8) + 8);
      pcVar3 = *(code **)*puVar6;
      pplStack_348 = &plStack_360;
      plStack_360 = plStack_3f0;
      if (plStack_3f0 != (longlong *)0x0) {
        (**(code **)(*plStack_3f0 + 0x28))();
      }
      (*pcVar3)(puVar6,&plStack_360);
      if (plStack_3f0 != (longlong *)0x0) {
        (**(code **)(*plStack_3f0 + 0x38))();
      }
      plVar1 = *pplVar4;
      if (plVar1 != (longlong *)0x0) {
        plStack_2d8 = plVar1;
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      plStack_2d8 = *(longlong **)(param_2 + 0x9870);
      *(longlong **)(param_2 + 0x9870) = plVar1;
      if (plStack_2d8 != (longlong *)0x0) {
        (**(code **)(*plStack_2d8 + 0x38))();
      }
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 0x38))(plVar14);
      }
      ppuStack_2c8 = &puStack_2a8;
      puStack_2a8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_468);
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802d0d30(undefined8 param_1,longlong param_2)
void FUN_1802d0d30(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_138 [32];
  undefined4 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_108;
  undefined8 auStack_100 [3];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  int iStack_d8;
  int iStack_d4;
  undefined8 uStack_d0;
  int iStack_c8;
  int iStack_c4;
  undefined *puStack_c0;
  undefined1 *puStack_b8;
  undefined4 uStack_b0;
  undefined1 auStack_a8 [16];
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong uStack_68;
  
  uStack_e8 = 0xfffffffffffffffe;
  uStack_68 = _DAT_180bf00a8 ^ (ulonglong)auStack_138;
  if (0 < *(int *)(param_2 + 0x27f8)) {
    uVar1 = *(undefined8 *)(param_2 + 0x99c0);
    uVar9 = 0;
    puStack_c0 = &UNK_1809fdc18;
    puStack_b8 = auStack_a8;
    auStack_a8[0] = 0;
    uStack_b0 = 0xb;
    strcpy_s(auStack_a8,0x10,&UNK_180a046d0);
    lVar6 = FUN_1802c90a0(uVar1,&puStack_c0);
    puStack_c0 = &UNK_18098bcb0;
    uStack_118 = 0xffffffff;
    FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),0x10,*(undefined8 *)(lVar6 + 0x428));
    uVar1 = *(undefined8 *)(_DAT_180c86938 + 0x1cd8);
    lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x9698) + 0x1d8);
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else if (_DAT_180c86870 != 0) {
      *(longlong *)(*(longlong *)(param_2 + 0x9698) + 0x340) =
           (longlong)*(int *)(_DAT_180c86870 + 0x224);
    }
    FUN_18029ad30(uVar1,0,lVar6);
    lVar6 = _DAT_180c86938;
    *(undefined8 *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x83f0) = 0;
    uStack_110 = 0;
    uStack_118 = 0;
    FUN_18029c8a0(*(undefined8 *)(lVar6 + 0x1cd8),1,0xff000000,0);
    FUN_18029de40(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),1);
    fVar11 = (float)((int)*(float *)(param_2 + 0x11c20) / 2);
    fVar10 = (float)((int)*(float *)(param_2 + 0x11c24) / 2);
    fStack_98 = (float)(int)*(float *)(param_2 + 0x11c18);
    fStack_94 = (float)(int)*(float *)(param_2 + 0x11c1c);
    lVar6 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    uStack_88 = 0;
    uStack_84 = 0x3f800000;
    plVar2 = *(longlong **)(lVar6 + 0x8400);
    fStack_90 = fVar11;
    fStack_8c = fVar10;
    (**(code **)(*plVar2 + 0x160))(plVar2,1,&fStack_98);
    uStack_e0 = 0;
    plVar2 = *(longlong **)(lVar6 + 0x8400);
    iStack_d8 = (int)fVar11;
    iStack_d4 = (int)fVar10;
    (**(code **)(*plVar2 + 0x168))(plVar2,1,&uStack_e0);
    lVar4 = _DAT_180c86938;
    lVar6 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    uVar1 = *(undefined8 *)(lVar6 + 0x1510);
    uVar5 = *(undefined8 *)(lVar6 + 0x1518);
    *(float *)(lVar6 + 0x1510) = (1.0 / fVar11) * 0.5;
    *(float *)(lVar6 + 0x1514) = (1.0 / fVar10) * 0.5;
    *(float *)(lVar6 + 0x1518) = 1.0 / fVar11;
    *(float *)(lVar6 + 0x151c) = 1.0 / fVar10;
    lVar6 = *(longlong *)(lVar4 + 0x1cd8);
    FUN_18029fc10(lVar6,*(undefined8 *)(lVar4 + 0x1c70),lVar6 + 0x1100,0x6d0);
    while (lVar6 = _DAT_180c86938, uVar8 = (uint)uVar9,
          (ulonglong)(longlong)(int)uVar8 < (ulonglong)*(uint *)(param_2 + 0x27f8)) {
      uVar9 = uVar9 >> 0xb;
      uVar7 = (ulonglong)(uVar8 & 0x7ff);
      uVar3 = *(undefined8 *)(*(longlong *)(param_2 + 0x2800 + uVar9 * 8) + 0x10 + uVar7 * 0x18);
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(param_2 + 0x2800 + uVar9 * 8) + 0x10 + uVar7 * 0x18) + 0xc4) = 1
      ;
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(param_2 + 0x2800 + uVar9 * 8) + 0x10 + uVar7 * 0x18) + 0xa4) =
           *(undefined4 *)(*(longlong *)(param_2 + 0x9698) + 0x324);
      FUN_1800e8640(param_1,uVar3);
      uVar9 = (ulonglong)(uVar8 + 1);
    }
    lVar4 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    *(undefined8 *)(lVar4 + 0x1510) = uVar1;
    *(undefined8 *)(lVar4 + 0x1518) = uVar5;
    lVar4 = *(longlong *)(lVar6 + 0x1cd8);
    FUN_18029fc10(lVar4,*(undefined8 *)(lVar6 + 0x1c70),lVar4 + 0x1100,0x6d0);
    lVar6 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    if (((*(longlong *)(lVar6 + 0x84b8) != 0) || (*(int *)(lVar6 + 0x8878) != -1)) ||
       (*(int *)(lVar6 + 0x8a78) != 0x10)) {
      uStack_108 = 0;
      (**(code **)(**(longlong **)(lVar6 + 0x8400) + 0x40))
                (*(longlong **)(lVar6 + 0x8400),0x10,1,&uStack_108);
      *(undefined8 *)(lVar6 + 0x84b8) = 0;
      *(undefined4 *)(lVar6 + 0x8878) = 0xffffffff;
      *(undefined4 *)(lVar6 + 0x8a78) = 0x10;
      *(int *)(lVar6 + 0x82b4) = *(int *)(lVar6 + 0x82b4) + 1;
    }
    lVar6 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    if (((*(longlong *)(lVar6 + 0x8540) != 0) || (*(int *)(lVar6 + 0x88bc) != -1)) ||
       (*(int *)(lVar6 + 0x8abc) != 0x10)) {
      auStack_100[0] = 0;
      (**(code **)(**(longlong **)(lVar6 + 0x8400) + 0x40))
                (*(longlong **)(lVar6 + 0x8400),0x21,1,auStack_100);
      *(undefined8 *)(lVar6 + 0x8540) = 0;
      *(undefined4 *)(lVar6 + 0x88bc) = 0xffffffff;
      *(undefined4 *)(lVar6 + 0x8abc) = 0x10;
      *(int *)(lVar6 + 0x82b4) = *(int *)(lVar6 + 0x82b4) + 1;
    }
    fVar10 = *(float *)(param_2 + 0x11c24);
    fVar11 = *(float *)(param_2 + 0x11c20);
    lVar6 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    uStack_80 = *(undefined8 *)(param_2 + 0x11c18);
    uStack_78 = *(undefined8 *)(param_2 + 0x11c20);
    uStack_70 = *(undefined4 *)(param_2 + 0x11c28);
    uStack_6c = *(undefined4 *)(param_2 + 0x11c2c);
    plVar2 = *(longlong **)(lVar6 + 0x8400);
    (**(code **)(*plVar2 + 0x160))(plVar2,1,&uStack_80);
    uStack_d0 = 0;
    plVar2 = *(longlong **)(lVar6 + 0x8400);
    iStack_c8 = (int)fVar11;
    iStack_c4 = (int)fVar10;
    (**(code **)(*plVar2 + 0x168))(plVar2,1,&uStack_d0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_68 ^ (ulonglong)auStack_138);
}






// 函数: void FUN_1802d1370(longlong *param_1,uint param_2,int param_3)
void FUN_1802d1370(longlong *param_1,uint param_2,int param_3)

{
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  if ((int)param_2 < param_3) {
    uVar3 = (ulonglong)param_2;
    do {
      uVar4 = (ulonglong)((uint)uVar3 & 0x3ff);
      uVar2 = *(uint *)(*(longlong *)
                         (*(longlong *)
                           (*(longlong *)(*param_1 + 0x5f0 + (uVar3 >> 10) * 8) + uVar4 * 8) + 0x48)
                       + 0x68);
      uVar5 = uVar2 >> 0x11;
      uVar2 = uVar2 >> 0xc;
      uVar1 = *(undefined8 *)(*(longlong *)(*param_1 + 0x5f0 + (uVar3 >> 10) * 8) + uVar4 * 8);
      if (*(char *)param_1[1] == '\0') {
        if ((uVar5 & 1) == 0) {
          if ((uVar2 & 1) == 0) {
            FUN_1802b7360(uVar1,*(undefined4 *)param_1[2]);
          }
          else {
            FUN_1802b7360(uVar1,*(undefined4 *)param_1[2]);
          }
        }
        else if ((uVar2 & 1) == 0) {
          FUN_1802bcd60();
        }
        else {
          FUN_1802bba20();
        }
      }
      else if ((uVar5 & 1) == 0) {
        if ((uVar2 & 1) == 0) {
          FUN_1802b7d60();
        }
        else {
          FUN_1802b7d60();
        }
      }
      else if ((uVar2 & 1) == 0) {
        FUN_1802ba410();
      }
      else {
        FUN_1802b8cb0();
      }
      uVar2 = (uint)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while ((int)uVar2 < param_3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802d1460(undefined4 *param_1,undefined8 param_2)
void FUN_1802d1460(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined1 auStack_c8 [32];
  code *pcStack_a8;
  undefined4 uStack_a0;
  undefined4 *puStack_98;
  undefined8 uStack_90;
  undefined4 *puStack_88;
  undefined4 *puStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  ulonglong uStack_30;
  
  uStack_90 = 0xfffffffffffffffe;
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  puVar1 = param_1 + 8;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0x12] = 3;
  *(undefined4 **)puVar1 = puVar1;
  *(undefined4 **)(param_1 + 10) = puVar1;
  uVar5 = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 1) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 3) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 5) = 0xffffffffffffffff;
  *param_1 = 0;
  puVar1 = param_1 + 0x16;
  pcStack_a8 = FUN_180045af0;
  puStack_98 = puVar1;
  puStack_88 = param_1;
  puStack_80 = param_1;
  FUN_1808fc838(param_1 + 0x22,8,2,&SUB_18005d5f0);
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  puVar4 = param_1 + 0x2c;
  lVar3 = 3;
  do {
    func_0x000180074f10(puVar4);
    puVar4 = puVar4 + 0xf;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  pcStack_a8 = FUN_180046860;
  FUN_1808fc838(param_1 + 0x5a,0x20,6,FUN_180056de0);
  pcStack_a8 = FUN_180046860;
  FUN_1808fc838(param_1 + 0x90,0x20,6,FUN_180056de0);
  uStack_78 = 0x40;
  uStack_70 = 0x80;
  uStack_6c = 0x200;
  uStack_68 = 0x340;
  uStack_64 = 0x200;
  uStack_60 = 0x40;
  uStack_58 = 0x80;
  uStack_54 = 0x200;
  uStack_50 = 0x540;
  uStack_48 = 0x40;
  uStack_40 = 0x3c0;
  uStack_3c = 0x400;
  uStack_34 = 0;
  uStack_a0 = 5;
  func_0x0001802d1250(puVar1,2,&uStack_78,0x1000);
  uStack_a0 = 4;
  func_0x0001802d1250(puVar1,1,&uStack_60,0x800);
  uStack_a0 = 3;
  func_0x0001802d1250(puVar1,0,&uStack_48);
  FUN_1801be9f0(puVar1,*(undefined4 *)(_DAT_180c86920 + 0xb60));
  pcStack_a8 = FUN_180045af0;
  FUN_1808fc838(param_1 + 0xc4,8,2,&SUB_18005d5f0);
  *(undefined8 *)(param_1 + 200) = 0;
  pcStack_a8 = FUN_180045af0;
  FUN_1808fc838(param_1 + 0xca,8,2,&SUB_18005d5f0);
  *(undefined8 *)(param_1 + 0xce) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd2) = 0;
  *(undefined8 *)(param_1 + 0xd4) = 0;
  *(undefined8 *)(param_1 + 0xd6) = 0;
  param_1[0xd8] = 3;
  *(undefined8 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe2) = 0;
  *(undefined8 *)(param_1 + 0xe4) = 0;
  param_1[0xe6] = 3;
  LOCK();
  param_1[0xe8] = 0;
  UNLOCK();
  uVar2 = uVar5;
  do {
    *(undefined8 *)(param_1 + (longlong)(int)uVar2 * 2 + 0xea) = 0;
    LOCK();
    *(undefined1 *)((longlong)param_1 + (longlong)(int)uVar2 + 0x5a8) = 1;
    UNLOCK();
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x40);
  LOCK();
  param_1[0x17a] = 0;
  UNLOCK();
  uVar2 = uVar5;
  do {
    *(undefined8 *)(param_1 + (longlong)(int)uVar2 * 2 + 0x17c) = 0;
    LOCK();
    *(undefined1 *)((longlong)param_1 + (longlong)(int)uVar2 + 0x7f0) = 1;
    UNLOCK();
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x40);
  puVar1 = param_1 + 0x20c;
  *(undefined8 *)(param_1 + 0x212) = 0;
  param_1[0x216] = 3;
  *(undefined4 **)puVar1 = puVar1;
  *(undefined4 **)(param_1 + 0x20e) = puVar1;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined1 *)(param_1 + 0x212) = 0;
  *(undefined8 *)(param_1 + 0x214) = 0;
  LOCK();
  param_1[0x218] = 0;
  UNLOCK();
  do {
    *(undefined8 *)(param_1 + (longlong)(int)uVar5 * 2 + 0x21a) = 0;
    LOCK();
    *(undefined1 *)((longlong)param_1 + (longlong)(int)uVar5 + 0xa68) = 1;
    UNLOCK();
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x40);
  puStack_98 = param_1 + 0x2aa;
  _Mtx_init_in_situ(puStack_98,2);
  *(undefined8 *)(param_1 + 0x2be) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c2) = 0;
  param_1[0x2c4] = 3;
  *(undefined8 *)(param_1 + 0x2c6) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x2ca) = 0;
  param_1[0x2cc] = 3;
  puStack_98 = param_1 + 0x2d0;
  *(undefined8 *)(param_1 + 0x2d4) = 0;
  *(undefined **)(param_1 + 0x2d6) = &UNK_1802d3ae0;
  *(undefined8 *)(param_1 + 0xc2) = param_2;
  param_1[0xc1] = 0;
  param_1[0xda] = 0;
  *(undefined1 *)(param_1 + 0x2ce) = 1;
  if (*(code **)(param_1 + 0x2d4) != (code *)0x0) {
    (**(code **)(param_1 + 0x2d4))(puStack_98,0,0);
  }
  *(undefined8 *)(param_1 + 0x2d4) = 0;
  *(undefined **)(param_1 + 0x2d6) = &UNK_1802d3ae0;
  *(undefined1 *)(param_1 + 0xde) = 0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_c8);
}






// 函数: void FUN_1802d18a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1802d18a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180058370(param_1 + 0x20,*(undefined8 *)(param_1 + 0x30),param_3,param_4,0xfffffffffffffffe);
  return;
}






