#include "TaleWorlds.Native.Split.h"

// 99_part_04_part076.c - 4 个函数

// 函数: void FUN_1802cdda0(void **param_1,longlong param_2)
void FUN_1802cdda0(void **param_1,longlong param_2)

{
  void *puVar1;
  int32_t *puVar2;
  longlong lVar3;
  uint64_t *puVar4;
  code *pcVar5;
  char cVar6;
  longlong lVar7;
  uint64_t uVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  void **ppuVar17;
  void **ppuVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  int8_t auStack_4a8 [32];
  uint64_t *puStack_488;
  int32_t **ppuStack_480;
  longlong alStack_478 [2];
  int32_t **ppuStack_468;
  uint uStack_460;
  int32_t uStack_45c;
  uint uStack_458;
  int iStack_454;
  uint64_t uStack_448;
  uint64_t uStack_440;
  longlong *plStack_438;
  longlong *plStack_428;
  uint uStack_420;
  longlong **pplStack_418;
  longlong lStack_410;
  longlong lStack_408;
  longlong *plStack_400;
  void **ppuStack_3f8;
  longlong **pplStack_3f0;
  uint uStack_3e8;
  uint uStack_3e4;
  int32_t uStack_3e0;
  int32_t uStack_3dc;
  int32_t uStack_3d8;
  int32_t uStack_3d4;
  int32_t uStack_3d0;
  int32_t uStack_3cc;
  int32_t uStack_3c8;
  int8_t uStack_3c4;
  uint64_t uStack_3c3;
  int32_t uStack_3b8;
  int8_t uStack_3b4;
  int iStack_3b0;
  int iStack_3ac;
  byte bStack_3a8;
  int32_t uStack_3a4;
  longlong lStack_3a0;
  uint64_t uStack_398;
  int iStack_390;
  longlong *plStack_388;
  void **ppuStack_380;
  longlong *aplStack_378 [2];
  uint64_t uStack_368;
  int32_t uStack_360;
  int16_t uStack_35c;
  uint64_t uStack_358;
  uint64_t uStack_350;
  int32_t uStack_348;
  int8_t uStack_344;
  int32_t uStack_340;
  uint64_t uStack_33c;
  int16_t uStack_334;
  uint64_t uStack_330;
  int32_t uStack_328;
  int *piStack_320;
  int32_t uStack_318;
  int8_t uStack_314;
  uint64_t uStack_300;
  int32_t *apuStack_2f8 [2];
  code *pcStack_2e8;
  void *puStack_2e0;
  int32_t *apuStack_2d8 [2];
  code *pcStack_2c8;
  void *puStack_2c0;
  void **ppuStack_2b8;
  ulonglong uStack_2b0;
  uint64_t uStack_2a8;
  int32_t uStack_2a0;
  int32_t uStack_29c;
  void **ppuStack_298;
  ulonglong uStack_290;
  void **ppuStack_288;
  uint64_t uStack_280;
  uint64_t uStack_278;
  int32_t uStack_270;
  int32_t uStack_26c;
  void **ppuStack_268;
  uint64_t uStack_260;
  void **ppuStack_258;
  ulonglong uStack_250;
  uint64_t uStack_248;
  void **ppuStack_238;
  uint64_t uStack_230;
  void *puStack_228;
  int8_t *puStack_220;
  int32_t uStack_218;
  int8_t auStack_210 [128];
  int32_t uStack_190;
  void *puStack_188;
  longlong *plStack_180;
  int iStack_178;
  void *puStack_148;
  int8_t *puStack_140;
  int32_t uStack_138;
  int8_t auStack_130 [40];
  void *apuStack_108 [20];
  ulonglong uStack_68;
  
  uStack_248 = 0xfffffffffffffffe;
  uStack_68 = _DAT_180bf00a8 ^ (ulonglong)auStack_4a8;
  uVar20 = *(uint *)(param_1 + 0xbd);
  ppuVar17 = param_1 + 0x10c;
  LOCK();
  *(uint *)ppuVar17 = 0;
  UNLOCK();
  alStack_478[0] = param_2;
  ppuStack_3f8 = param_1;
  if (0 < (int)uVar20) {
    uStack_440 = param_2 + 0x30;
    plStack_438 = (longlong *)(param_2 + 0x120);
    ppuStack_468 = apuStack_2f8;
    pcStack_2e8 = FUN_1802d9930;
    puStack_2e0 = &unknown_var_9264_ptr;
    uStack_448 = param_1;
    apuStack_2f8[0] = (int32_t *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,system_allocation_flags);
    *apuStack_2f8[0] = (int32_t)uStack_448;
    apuStack_2f8[0][1] = uStack_448._4_4_;
    apuStack_2f8[0][2] = (int32_t)uStack_440;
    apuStack_2f8[0][3] = uStack_440._4_4_;
    *(longlong **)(apuStack_2f8[0] + 4) = plStack_438;
    ppuStack_480 = apuStack_2f8;
    puStack_488 = (uint64_t *)0xffffffffffffffff;
    FUN_18015b810((int32_t)uStack_448,0,uVar20,0x40);
    if (*(uint *)ppuVar17 != 0) {
      uVar20 = *(uint *)ppuVar17;
      uVar21 = alStack_478[0] + 0x120;
      uVar11 = *(uint *)ppuVar17;
      uStack_440 = uStack_440 & 0xffffffff00000000;
      uVar16 = uStack_440;
      ppuStack_468 = (int32_t **)ppuVar17;
      uStack_460 = uVar11;
      uStack_448 = ppuVar17;
      uStack_420 = uVar20;
      if (uVar11 != 0) {
        iVar10 = 0;
        for (uVar15 = uVar11; uVar15 != 0; uVar15 = (int)uVar15 >> 1) {
          iVar10 = iVar10 + 1;
        }
        uVar8 = CONCAT44(uStack_45c,uVar11);
        uStack_2b0 = uStack_440;
        ppuStack_2b8 = ppuVar17;
        ppuStack_238 = ppuVar17;
        uStack_230 = uVar8;
        FUN_1802d9c00(&ppuStack_2b8,&ppuStack_238,(longlong)(iVar10 + -1) * 2,0);
        if ((int)uVar11 < 0x1d) {
          uStack_250 = uVar16;
          ppuStack_268 = ppuVar17;
          uStack_260 = uVar8;
          ppuStack_258 = ppuVar17;
          FUN_1802d8f30(&ppuStack_258,&ppuStack_268);
        }
        else {
          uStack_460 = 0x1c;
          uStack_2a0 = 0x1c;
          uStack_29c = uStack_45c;
          uStack_290 = uVar16;
          ppuStack_468 = (int32_t **)ppuVar17;
          ppuStack_298 = ppuVar17;
          uStack_2a8 = ppuVar17;
          FUN_1802d8f30(&ppuStack_298,&uStack_2a8);
          uStack_460 = 0x1c;
          uStack_270 = 0x1c;
          uStack_26c = uStack_45c;
          ppuStack_468 = (int32_t **)ppuVar17;
          ppuStack_288 = ppuVar17;
          uStack_280 = uVar8;
          uStack_278 = ppuVar17;
          FUN_1802d9090(&uStack_278,&ppuStack_288);
        }
      }
      iVar10 = *(int *)(_DAT_180c86920 + 0xb60);
      if (iVar10 < 2) {
        lVar7 = FUN_180244ff0(alStack_478[0]);
        uVar15 = (uint)(*(ushort *)(lVar7 + 0x32c) >> 1);
        lVar7 = FUN_180244ff0(alStack_478[0]);
        uVar11 = (uint)(*(ushort *)(lVar7 + 0x32e) >> 1);
        plVar9 = (longlong *)param_1[0x68];
        if (((plVar9 == (longlong *)0x0) || (*(ushort *)((longlong)plVar9 + 0x32c) != uVar15)) ||
           (*(ushort *)((longlong)plVar9 + 0x32e) != uVar11)) {
          uStack_3dc = 1;
          uStack_3d4 = 0;
          uStack_3d0 = 0;
          uStack_3cc = 0;
          uStack_3c8 = 0x3f800000;
          uStack_3c3 = 1;
          uStack_3c4 = 0;
          uStack_3b8 = 0xffffffff;
          uStack_3b4 = 0;
          uStack_3e0 = 1;
          uStack_3d8 = 0x1e;
          puStack_148 = &unknown_var_672_ptr;
          puStack_140 = auStack_130;
          auStack_130[0] = 0;
          uStack_138 = 0x14;
          uStack_3e8 = uVar15;
          uStack_3e4 = uVar11;
          strcpy_s(auStack_130,0x20,&unknown_var_9424_ptr);
          FUN_180049b30(apuStack_108,&puStack_148);
          uVar8 = FUN_1800b1230(_DAT_180c86930,aplStack_378,apuStack_108,&uStack_3e8);
          FUN_180060b80(param_1 + 0x68,uVar8);
          if (aplStack_378[0] != (longlong *)0x0) {
            (**(code **)(*aplStack_378[0] + 0x38))();
          }
          apuStack_108[0] = &unknown_var_720_ptr;
          puStack_148 = &unknown_var_720_ptr;
          *(uint *)(param_1[0x68] + 0x328) = *(uint *)(param_1[0x68] + 0x328) | 0x8000;
          plVar9 = (longlong *)param_1[0x68];
        }
        lVar7 = alStack_478[0];
        if (plVar9 != (longlong *)0x0) {
          plStack_388 = plVar9;
          (**(code **)(*plVar9 + 0x28))(plVar9);
        }
        plStack_388 = *(longlong **)(lVar7 + 0x9698);
        *(longlong **)(lVar7 + 0x9698) = plVar9;
        if (plStack_388 != (longlong *)0x0) {
          (**(code **)(*plStack_388 + 0x38))();
        }
      }
      iVar13 = 0;
      iStack_454 = 0;
      uVar16 = 0;
      if (0 < (int)uVar20) {
        do {
          uVar14 = (ulonglong)(uint)((int)uVar16 + (int)(uVar16 >> 10) * -0x400);
          puVar1 = param_1[(uVar16 >> 10) + 0x10d];
          *(int *)(puVar1 + uVar14 * 0x18 + 0xc) = iVar13;
          iVar13 = iVar13 + *(int *)(puVar1 + uVar14 * 0x18 + 0x10);
          uVar11 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar11;
          iStack_454 = iVar13;
        } while ((int)uVar11 < (int)uVar20);
      }
      iVar13 = iStack_454;
      FUN_1802d2180(param_1,iStack_454);
      FUN_1802cf430(param_1 + 0xb,iVar13,alStack_478[0]);
      ppuStack_468 = apuStack_2d8;
      plStack_438 = alStack_478;
      pcStack_2c8 = FUN_1802d9840;
      puStack_2c0 = &unknown_var_9024_ptr;
      uStack_448 = param_1;
      uStack_440 = uVar21;
      apuStack_2d8[0] = (int32_t *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,system_allocation_flags);
      *apuStack_2d8[0] = (int32_t)uStack_448;
      apuStack_2d8[0][1] = uStack_448._4_4_;
      apuStack_2d8[0][2] = (int32_t)uStack_440;
      apuStack_2d8[0][3] = uStack_440._4_4_;
      *(longlong **)(apuStack_2d8[0] + 4) = plStack_438;
      ppuStack_480 = apuStack_2d8;
      puStack_488 = (uint64_t *)0xffffffffffffffff;
      FUN_18015b810((int32_t)uStack_448,0,uVar20,0x40);
      lVar7 = 0x68;
      ppuVar17 = param_1 + 0x45;
      lVar19 = 6;
      ppuVar18 = ppuVar17;
      do {
        uVar11 = *(uint *)((longlong)(param_1 + 0xb) +
                          lVar7 + (ulonglong)*(uint *)((longlong)param_1 + 0x164) * 0x3c);
        if (*(uint *)ppuVar18 < uVar11) {
          uVar11 = *(uint *)ppuVar18;
        }
        LOCK();
        *(uint *)ppuVar17 = uVar11;
        UNLOCK();
        ppuVar17 = (void **)((longlong)ppuVar17 + 4);
        lVar7 = lVar7 + 8;
        ppuVar18 = (void **)((longlong)ppuVar18 + 4);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar7 = 0;
      lStack_408 = 0;
      iVar12 = -1;
      uStack_448 = (void **)(alStack_478[0] + 0x27f8);
      if (1 < iVar10) {
        uStack_448 = (void **)(alStack_478[0] + 0x26d0);
      }
      uStack_458 = 0;
      if (0 < (int)uVar20) {
        do {
          ppuVar17 = uStack_448;
          uVar20 = uStack_458;
          ppuStack_468 = (int32_t **)
                         (param_1[(ulonglong)(uStack_458 >> 10) + 0x10d] +
                         (ulonglong)(uStack_458 + (uStack_458 >> 10) * -0x400) * 0x18);
          puVar2 = *ppuStack_468;
          cVar6 = FUN_1802b1730(puVar2);
          if (cVar6 != '\0') {
            iVar10 = (int)((*(longlong *)(puVar2 + 0x4e) - *(longlong *)(puVar2 + 0x4c)) / 0xc);
            if (iVar10 < 1) {
              if (puVar2[0x29] == iVar12) {
                *(int *)(lVar7 + 0x318) =
                     *(int *)(lVar7 + 0x318) +
                     (int)((*(longlong *)(puVar2 + 0x18) - *(longlong *)(puVar2 + 0x16)) / 0x70) * 6
                ;
              }
              else {
                lVar19 = *(longlong *)(puVar2 + 0x2a);
                if (*(longlong *)(lVar19 + 0x200) == 0) goto LAB_1802ce536;
                LOCK();
                uVar11 = *(uint *)ppuVar17;
                *(uint *)ppuVar17 = *(uint *)ppuVar17 + 1;
                UNLOCK();
                uVar15 = uVar11 >> 0xb;
                FUN_1800e8060(ppuVar17,(ulonglong)uVar15);
                uVar16 = (ulonglong)(uVar11 + uVar15 * -0x800);
                puVar1 = ppuVar17[(ulonglong)uVar15 + 1];
                uVar8 = *(uint64_t *)(puVar2 + 0x2a);
                *(uint64_t *)(puVar1 + uVar16 * 0x18) = *(uint64_t *)(lVar19 + 0x1f8);
                *(longlong *)(puVar1 + (uVar16 * 6 + 2) * 4) = (longlong)(int)uVar20;
                *(uint64_t *)(puVar1 + (uVar16 * 6 + 4) * 4) = uVar8;
                lVar7 = *(longlong *)(puVar2 + 0x2a);
                iVar12 = puVar2[0x29];
                lStack_408 = lVar7;
              }
            }
            else {
              uVar14 = 0;
              lVar19 = *(longlong *)(puVar2 + 0x4a);
              lStack_410 = (longlong)iVar10;
              param_1 = ppuStack_3f8;
              uVar16 = uVar14;
              uVar21 = uVar14;
              if (0 < iVar10) {
                do {
                  lVar7 = *(longlong *)(puVar2 + 0x4c);
                  iVar10 = *(int *)(uVar16 + lVar7);
                  if (iVar10 < 1) {
                    *(int32_t *)(uVar16 + 4 + lVar7) = 0xffffffff;
                  }
                  else {
                    uStack_368 = 0;
                    uStack_360 = 0xffffffff;
                    uStack_35c = 0xff00;
                    uStack_358 = 0;
                    uStack_350 = 0xffffffffffffffff;
                    uStack_348 = 0xffffffff;
                    uStack_344 = 0xff;
                    uStack_340 = 0xffffffff;
                    uStack_33c = 0;
                    uStack_334 = 0x400;
                    uStack_330 = 0;
                    uStack_328 = 0;
                    uStack_318 = 0;
                    uStack_314 = 0;
                    uStack_300 = 0;
                    piStack_320 = &iStack_3b0;
                    lVar3 = *(longlong *)
                             (*(longlong *)(uVar14 + *(longlong *)(lVar19 + 0x38)) + 0x1b8);
                    bStack_3a8 = *(byte *)(lVar3 + 0x38c);
                    if (bStack_3a8 == 9) {
                      uVar20 = *(uint *)(lVar3 + 0x388);
                      if ((uVar20 >> 0x1e & 1) == 0) {
                        if ((uVar20 >> 0x1c & 1) == 0) {
                          bStack_3a8 = (byte)(uVar20 >> 0x18);
                          if ((int)uVar20 < 0) {
                            if ((uVar20 >> 0x1b & 1) == 0) {
                              bStack_3a8 = bStack_3a8 & 1 | 0xc;
                            }
                            else {
                              bStack_3a8 = bStack_3a8 & 1 | 0xe;
                            }
                          }
                          else if ((uVar20 >> 0x19 & 1) == 0) {
                            bStack_3a8 = bStack_3a8 & 1;
                          }
                          else if ((uVar20 >> 0x1b & 1) == 0) {
                            bStack_3a8 = bStack_3a8 & 1 | 2;
                          }
                          else {
                            bStack_3a8 = ((uVar20 >> 0x18 & 1) != 0) + 7;
                          }
                        }
                        else {
                          bStack_3a8 = 4;
                        }
                      }
                      else {
                        bStack_3a8 = 9;
                      }
                      *(byte *)(lVar3 + 0x38c) = bStack_3a8;
                    }
                    uStack_3a4 = 0xf;
                    lStack_3a0 = *(longlong *)(puVar2 + 0x12);
                    iStack_3ac = *(int *)(uVar16 + 4 + lVar7);
                    iStack_390 = *(int *)((longlong)ppuStack_468 + 0xc) + (int)uVar21;
                    uStack_398 = *(uint64_t *)(lStack_3a0 + 0x10);
                    do {
                      iVar13 = 0x200;
                      if (iVar10 < 0x200) {
                        iVar13 = iVar10;
                      }
                      puStack_488 = &uStack_368;
                      iStack_3b0 = iVar13;
                      FUN_180077750(*(uint64_t *)(uVar14 + *(longlong *)(lVar19 + 0x38)),
                                    alStack_478[0],&system_data_0300,0);
                      iStack_3ac = iStack_3ac + iVar13;
                      iStack_390 = iStack_390 + iVar13;
                      uVar21 = (ulonglong)(uint)((int)uVar21 + iVar13);
                      iVar10 = iVar10 - iVar13;
                    } while (0 < iVar10);
                  }
                  uVar14 = uVar14 + 0x10;
                  lStack_410 = lStack_410 + -1;
                  uVar16 = uVar16 + 0xc;
                } while (lStack_410 != 0);
                lStack_410 = 0;
                lVar7 = lStack_408;
                param_1 = ppuStack_3f8;
                uVar20 = uStack_458;
              }
LAB_1802ce536:
              iVar12 = -1;
            }
          }
          uStack_458 = uVar20 + 1;
          iVar13 = iStack_454;
        } while ((int)uStack_458 < (int)uStack_420);
      }
      FUN_1802d0150(param_1 + 0xb,alStack_478[0],iVar13);
      lVar7 = alStack_478[0];
      plVar9 = (longlong *)param_1[100];
      if (plVar9 != (longlong *)0x0) {
        pplStack_3f0 = (longlong **)plVar9;
        (**(code **)(*plVar9 + 0x28))(plVar9);
      }
      pplStack_3f0 = *(longlong ***)(lVar7 + 0x98b0);
      *(longlong **)(lVar7 + 0x98b0) = plVar9;
      if (pplStack_3f0 != (longlong **)0x0) {
        (**(code **)((longlong)*pplStack_3f0 + 0x38))();
      }
      lVar7 = alStack_478[0];
      plVar9 = (longlong *)param_1[0x67];
      if (plVar9 != (longlong *)0x0) {
        pplStack_418 = (longlong **)plVar9;
        (**(code **)(*plVar9 + 0x28))(plVar9);
      }
      pplStack_418 = *(longlong ***)(lVar7 + 0x98b8);
      *(longlong **)(lVar7 + 0x98b8) = plVar9;
      if (pplStack_418 != (longlong **)0x0) {
        (**(code **)((longlong)*pplStack_418 + 0x38))();
      }
      ppuStack_3f8 = &puStack_228;
      puStack_228 = &unknown_var_3432_ptr;
      puStack_220 = auStack_210;
      uStack_218 = 0;
      auStack_210[0] = 0;
      uStack_190 = 9;
      puStack_188 = param_1[100];
      plStack_180 = (longlong *)param_1[0x62];
      iStack_178 = iVar13 * 0x48;
      if (*(code **)(*plStack_180 + 0x28) == (code *)&unknown_var_3248_ptr) {
        LOCK();
        *(int *)(plStack_180 + 1) = (int)plStack_180[1] + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*plStack_180 + 0x28))();
      }
      uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
      plVar9 = (longlong *)FUN_18005ce30(uVar8,&puStack_228);
      ppuStack_380 = (void **)plVar9;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x28))(plVar9);
      }
      lVar7 = _DAT_180c82868;
      pplStack_418 = &plStack_428;
      plStack_428 = plVar9;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x28))(plVar9);
      }
      pplStack_3f0 = &plStack_428;
      puVar4 = *(uint64_t **)(*(longlong *)(lVar7 + 8) + 8);
      pcVar5 = *(code **)*puVar4;
      pplStack_418 = &plStack_400;
      plStack_400 = plStack_428;
      if (plStack_428 != (longlong *)0x0) {
        (**(code **)(*plStack_428 + 0x28))();
      }
      (*pcVar5)(puVar4,&plStack_400);
      if (plStack_428 != (longlong *)0x0) {
        (**(code **)(*plStack_428 + 0x38))();
      }
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9);
      }
      ppuStack_380 = &puStack_228;
      puStack_228 = &unknown_var_720_ptr;
    }
  }
  puVar1 = param_1[0x62];
  param_1[0x62] = param_1[99];
  param_1[99] = puVar1;
  puVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = puVar1;
  FUN_1802d38a0(param_1,param_1 + 0xbd,param_1 + 0xb);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_68 ^ (ulonglong)auStack_4a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802ce8a0(longlong *param_1,uint param_2,int param_3)
void FUN_1802ce8a0(longlong *param_1,uint param_2,int param_3)

{
  longlong *plVar1;
  float fVar2;
  longlong lVar3;
  float *pfVar4;
  longlong lVar5;
  int iVar6;
  int8_t uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if ((int)param_2 < param_3) {
    uVar14 = (ulonglong)param_2;
    do {
      lVar3 = *(longlong *)
               (*(longlong *)(*param_1 + 0x5f0 + (uVar14 >> 10) * 8) +
               (ulonglong)(uint)((int)uVar14 + (int)(uVar14 >> 10) * -0x400) * 8);
      iVar6 = (int)((*(longlong *)(lVar3 + 0x60) - *(longlong *)(lVar3 + 0x58)) / 0x70);
      if ((iVar6 < 1) || (iVar8 = FUN_18063c230(param_1[1],lVar3 + 0x10), iVar8 == 0)) {
        uVar7 = 0;
      }
      else {
        pfVar4 = (float *)param_1[2];
        fVar18 = *(float *)(lVar3 + 0x30) - *pfVar4;
        fVar17 = *(float *)(lVar3 + 0x34) - pfVar4[1];
        fVar19 = *(float *)(lVar3 + 0x38) - pfVar4[2];
        lVar5 = *param_1;
        puVar12 = (uint *)(lVar5 + 0x860);
        fVar2 = *(float *)(lVar3 + 0x40);
        LOCK();
        uVar13 = *puVar12;
        *puVar12 = *puVar12 + 1;
        UNLOCK();
        uVar9 = uVar13 >> 10;
        uVar15 = (ulonglong)uVar9;
        if (*(longlong *)(lVar5 + 0x868 + (ulonglong)uVar9 * 8) == 0) {
          lVar10 = FUN_18062b420(_DAT_180c8ed18,0x6000,0x25);
          plVar1 = (longlong *)(lVar5 + 0x868 + uVar15 * 8);
          LOCK();
          bVar16 = *plVar1 == 0;
          if (bVar16) {
            *plVar1 = lVar10;
          }
          UNLOCK();
          if (bVar16) {
            iVar11 = uVar9 * 0x400;
            iVar8 = iVar11 + 0x400;
            for (; iVar11 < iVar8; iVar11 = iVar11 + 1) {
            }
            LOCK();
            *(int8_t *)(uVar15 + 0x208 + (longlong)puVar12) = 0;
            UNLOCK();
          }
          else {
            if (lVar10 != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            do {
            } while (*(char *)(uVar15 + 0x208 + (longlong)puVar12) != '\0');
          }
        }
        else {
          do {
          } while (*(char *)(uVar15 + 0x208 + (longlong)puVar12) != '\0');
        }
        lVar5 = *(longlong *)(lVar5 + 0x868 + uVar15 * 8);
        uVar15 = (ulonglong)(uVar13 + uVar9 * -0x400);
        uVar7 = 1;
        *(float *)(lVar5 + 8 + uVar15 * 0x18) =
             SQRT(fVar18 * fVar18 + fVar17 * fVar17 + fVar19 * fVar19) - fVar2;
        *(longlong *)(lVar5 + uVar15 * 0x18) = lVar3;
        *(int32_t *)(lVar5 + 0xc + uVar15 * 0x18) = 0xffffffff;
        *(int *)(lVar5 + 0x10 + uVar15 * 0x18) = iVar6;
      }
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
      *(int8_t *)(lVar3 + 0x78) = uVar7;
    } while ((int)uVar13 < param_3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802ce8b2(longlong *param_1,uint param_2,int param_3)
void FUN_1802ce8b2(longlong *param_1,uint param_2,int param_3)

{
  longlong *plVar1;
  float fVar2;
  longlong lVar3;
  float *pfVar4;
  longlong lVar5;
  int iVar6;
  int8_t uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar14 = (ulonglong)param_2;
  do {
    lVar3 = *(longlong *)
             (*(longlong *)(*param_1 + 0x5f0 + (uVar14 >> 10) * 8) +
             (ulonglong)(uint)((int)uVar14 + (int)(uVar14 >> 10) * -0x400) * 8);
    iVar6 = (int)((*(longlong *)(lVar3 + 0x60) - *(longlong *)(lVar3 + 0x58)) / 0x70);
    if ((iVar6 < 1) || (iVar8 = FUN_18063c230(param_1[1],lVar3 + 0x10), iVar8 == 0)) {
      uVar7 = 0;
    }
    else {
      pfVar4 = (float *)param_1[2];
      fVar18 = *(float *)(lVar3 + 0x30) - *pfVar4;
      fVar17 = *(float *)(lVar3 + 0x34) - pfVar4[1];
      fVar19 = *(float *)(lVar3 + 0x38) - pfVar4[2];
      lVar5 = *param_1;
      puVar12 = (uint *)(lVar5 + 0x860);
      fVar2 = *(float *)(lVar3 + 0x40);
      LOCK();
      uVar13 = *puVar12;
      *puVar12 = *puVar12 + 1;
      UNLOCK();
      uVar9 = uVar13 >> 10;
      uVar15 = (ulonglong)uVar9;
      if (*(longlong *)(lVar5 + 0x868 + (ulonglong)uVar9 * 8) == 0) {
        lVar10 = FUN_18062b420(_DAT_180c8ed18,0x6000,0x25);
        plVar1 = (longlong *)(lVar5 + 0x868 + uVar15 * 8);
        LOCK();
        bVar16 = *plVar1 == 0;
        if (bVar16) {
          *plVar1 = lVar10;
        }
        UNLOCK();
        if (bVar16) {
          iVar11 = uVar9 * 0x400;
          iVar8 = iVar11 + 0x400;
          for (; iVar11 < iVar8; iVar11 = iVar11 + 1) {
          }
          LOCK();
          *(int8_t *)(uVar15 + 0x208 + (longlong)puVar12) = 0;
          UNLOCK();
        }
        else {
          if (lVar10 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          do {
          } while (*(char *)(uVar15 + 0x208 + (longlong)puVar12) != '\0');
        }
      }
      else {
        do {
        } while (*(char *)(uVar15 + 0x208 + (longlong)puVar12) != '\0');
      }
      lVar5 = *(longlong *)(lVar5 + 0x868 + uVar15 * 8);
      uVar15 = (ulonglong)(uVar13 + uVar9 * -0x400);
      uVar7 = 1;
      *(float *)(lVar5 + 8 + uVar15 * 0x18) =
           SQRT(fVar18 * fVar18 + fVar17 * fVar17 + fVar19 * fVar19) - fVar2;
      *(longlong *)(lVar5 + uVar15 * 0x18) = lVar3;
      *(int32_t *)(lVar5 + 0xc + uVar15 * 0x18) = 0xffffffff;
      *(int *)(lVar5 + 0x10 + uVar15 * 0x18) = iVar6;
    }
    uVar13 = (int)uVar14 + 1;
    uVar14 = (ulonglong)uVar13;
    *(int8_t *)(lVar3 + 0x78) = uVar7;
  } while ((int)uVar13 < param_3);
  return;
}






// 函数: void FUN_1802cea9c(void)
void FUN_1802cea9c(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




