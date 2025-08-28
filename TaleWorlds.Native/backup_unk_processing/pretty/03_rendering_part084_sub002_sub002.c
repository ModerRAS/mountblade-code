#include "TaleWorlds.Native.Split.h"

// 03_rendering_part084_sub002_sub002.c - 1 个函数

// 函数: void FUN_180316460(int *param_1,longlong param_2,ulonglong param_3)
void FUN_180316460(int *param_1,longlong param_2,ulonglong param_3)

{
  void **ppuVar1;
  longlong *plVar2;
  int32_t uVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  int32_t uVar8;
  uint uVar9;
  uint64_t uVar10;
  longlong **pplVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint64_t *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong **pplVar17;
  void **ppuVar18;
  void **ppuVar19;
  longlong ***ppplVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  uint unaff_ESI;
  longlong **pplVar24;
  char cVar25;
  void *puVar26;
  int iVar27;
  bool bVar28;
  int32_t extraout_XMM0_Da;
  int8_t auStack_678 [32];
  int32_t uStack_658;
  int32_t uStack_650;
  int32_t uStack_648;
  int32_t uStack_640;
  int32_t uStack_638;
  uint64_t uStack_630;
  int8_t uStack_628;
  int32_t uStack_620;
  int8_t uStack_618;
  uint uStack_614;
  longlong ***ppplStack_610;
  longlong ***ppplStack_608;
  uint uStack_600;
  longlong **pplStack_5f8;
  longlong lStack_5f0;
  uint64_t *puStack_5e8;
  longlong lStack_5e0;
  longlong **pplStack_5d8;
  void **ppuStack_5d0;
  uint64_t uStack_5c8;
  uint64_t uStack_5c0;
  uint64_t uStack_5b8;
  uint64_t uStack_5b0;
  longlong **pplStack_5a8;
  longlong *plStack_5a0;
  longlong **pplStack_598;
  void ***pppuStack_590;
  longlong *plStack_588;
  longlong *plStack_580;
  void *puStack_578;
  uint64_t *puStack_570;
  int32_t uStack_568;
  ulonglong uStack_560;
  void *puStack_558;
  uint64_t *puStack_550;
  int32_t uStack_548;
  ulonglong uStack_540;
  uint64_t uStack_538;
  uint64_t uStack_530;
  longlong *plStack_528;
  void ***pppuStack_520;
  longlong *plStack_518;
  longlong **pplStack_510;
  void **ppuStack_508;
  void **ppuStack_500;
  int *piStack_4f8;
  longlong *plStack_4f0;
  longlong *plStack_4e8;
  longlong *plStack_4e0;
  longlong *plStack_4d8;
  longlong *plStack_4d0;
  longlong *plStack_4c8;
  longlong *plStack_4c0;
  longlong *plStack_4b8;
  int32_t uStack_4b0;
  int32_t uStack_4ac;
  uint64_t uStack_4a8;
  uint64_t uStack_4a0;
  uint uStack_498;
  int32_t uStack_494;
  void **ppuStack_490;
  longlong **pplStack_488;
  longlong *plStack_480;
  void **ppuStack_478;
  longlong *plStack_470;
  longlong **pplStack_468;
  longlong **pplStack_460;
  uint64_t uStack_458;
  void **ppuStack_450;
  void **ppuStack_448;
  longlong *plStack_438;
  longlong *plStack_430;
  int32_t uStack_428;
  int32_t uStack_424;
  int8_t uStack_420;
  uint8_t uStack_41f;
  longlong *plStack_418;
  longlong *plStack_410;
  longlong *plStack_408;
  longlong *plStack_400;
  longlong *plStack_3f8;
  longlong *plStack_3f0;
  longlong *plStack_3e8;
  longlong *plStack_3e0;
  longlong *plStack_3d8;
  longlong *plStack_3d0;
  longlong *plStack_3c8;
  longlong *plStack_3c0;
  longlong *plStack_3b8;
  longlong *plStack_3b0;
  longlong *plStack_3a8;
  int32_t uStack_3a0;
  int32_t uStack_39c;
  longlong *plStack_398;
  longlong *plStack_390;
  int iStack_388;
  uint uStack_384;
  uint uStack_380;
  int iStack_37c;
  uint uStack_378;
  uint uStack_374;
  int32_t uStack_370;
  int32_t uStack_36c;
  int32_t uStack_368;
  int32_t uStack_364;
  int32_t uStack_360;
  int32_t uStack_35c;
  void *puStack_358;
  int8_t *puStack_350;
  int32_t uStack_348;
  int32_t uStack_344;
  int8_t uStack_340;
  uint8_t uStack_33f;
  void *puStack_338;
  void *puStack_330;
  void *puStack_328;
  void *puStack_320;
  void *puStack_318;
  void *puStack_310;
  void *puStack_308;
  void *puStack_300;
  void *puStack_2f8;
  void *puStack_2f0;
  void *puStack_2e8;
  void *puStack_2e0;
  void *puStack_2d8;
  void *puStack_2d0;
  void *puStack_2c8;
  int32_t uStack_2c0;
  int32_t uStack_2bc;
  void *puStack_2b8;
  longlong **pplStack_2b0;
  int iStack_2a8;
  uint uStack_2a4;
  uint uStack_2a0;
  int iStack_29c;
  uint uStack_298;
  uint uStack_294;
  int32_t uStack_290;
  int32_t uStack_28c;
  int32_t uStack_288;
  int32_t uStack_284;
  int32_t uStack_280;
  int32_t uStack_27c;
  void *puStack_278;
  int8_t *puStack_270;
  int32_t uStack_268;
  int8_t auStack_260 [128];
  int32_t uStack_1e0;
  uint64_t uStack_1d8;
  longlong **pplStack_1d0;
  void *puStack_198;
  int8_t *puStack_190;
  int32_t uStack_188;
  int8_t auStack_180 [128];
  int32_t uStack_100;
  uint64_t uStack_f8;
  longlong **pplStack_f0;
  void *puStack_b8;
  int8_t *puStack_b0;
  int32_t uStack_a8;
  int8_t auStack_a0 [32];
  void *puStack_80;
  int8_t *puStack_78;
  int32_t uStack_70;
  int8_t auStack_68 [32];
  ulonglong uStack_48;
  
  uStack_458 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_678;
  uStack_600 = 0;
  lVar23 = *(longlong *)(param_1 + 6) - *(longlong *)(param_1 + 4) >> 3;
  lStack_5f0 = param_2;
  lStack_5e0 = lVar23;
  piStack_4f8 = param_1;
  if ((param_1[0xc] == -1) ||
     (*(char *)(*(longlong *)(*(longlong *)(param_1 + 4) + (longlong)param_1[0xc] * 8) + 0x148) ==
      '\0')) {
    func_0x0001801be740(param_1);
  }
  iVar27 = (int)lVar23;
  if (iVar27 < 1) {
    plVar13 = (longlong *)(param_1 + 0x16);
    plStack_528 = plVar13;
    if (((*plVar13 == 0) || (*(short *)(*plVar13 + 0x332) != 6)) || (param_1[2] != 1)) {
      plVar15 = *(longlong **)(*(longlong *)(param_1 + 0xe) + 0x31c0);
      plStack_5a0 = plVar15;
      if (plVar15 == (longlong *)0x0) {
        plVar15 = (longlong *)FUN_1800bde30();
        uVar8 = extraout_XMM0_Da;
        if (plVar15 != (longlong *)0x0) {
          plStack_4d0 = plVar15;
          uVar8 = (**(code **)(*plVar15 + 0x28))(plVar15);
        }
        plStack_4d0 = (longlong *)0x0;
        plStack_5a0 = plVar15;
      }
      else {
        uVar8 = (**(code **)(*plVar15 + 0x28))(plVar15);
      }
      plVar12 = plStack_5a0;
      if ((int)plVar15[0x70] != 2) {
        uVar3 = *(int32_t *)(param_2 + 0x1bd4);
        plStack_470 = plStack_5a0;
        if (plStack_5a0 != (longlong *)0x0) {
          uVar8 = (**(code **)(*plStack_5a0 + 0x28))(plStack_5a0);
        }
        FUN_1800b4e00(uVar8,plVar12,uVar3);
        param_2 = lStack_5f0;
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x38))(plVar12);
          param_2 = lStack_5f0;
        }
      }
      uVar7 = 0x80;
      iVar27 = -1;
      do {
        iVar22 = iVar27;
        uVar7 = uVar7 >> 1;
        iVar27 = iVar22 + 1;
      } while (uVar7 != 0);
      uVar7 = iVar22 + 2;
      uVar10 = FUN_18062b1e0(_DAT_180c8ed18,0x3b0,0x10,3);
      uVar10 = FUN_18023a2e0(uVar10,0);
      FUN_180056f10(plVar13,uVar10);
      puStack_558 = &UNK_180a3c3e0;
      uStack_540 = 0;
      puStack_550 = (uint64_t *)0x0;
      uStack_548 = 0;
      puStack_550 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
      *(int8_t *)puStack_550 = 0;
      uVar8 = FUN_18064e990(puStack_550);
      uStack_540 = CONCAT44(uStack_540._4_4_,uVar8);
      *puStack_550 = 0x635f6c61626f6c67;
      *(int32_t *)(puStack_550 + 1) = 0x6d656275;
      *(int16_t *)((longlong)puStack_550 + 0xc) = 0x7061;
      *(int8_t *)((longlong)puStack_550 + 0xe) = 0;
      uStack_548 = 0xe;
      puVar26 = &system_buffer_ptr;
      if (*(void **)(param_2 + 0x3528) != (void *)0x0) {
        puVar26 = *(void **)(param_2 + 0x3528);
      }
      FUN_180628040(&puStack_558,&UNK_180a1a8d8,puVar26);
      puVar14 = (uint64_t *)&system_buffer_ptr;
      if (puStack_550 != (uint64_t *)0x0) {
        puVar14 = puStack_550;
      }
      (**(code **)(*(longlong *)(*plVar13 + 0x10) + 0x10))((longlong *)(*plVar13 + 0x10),puVar14);
      *(int32_t *)(*plVar13 + 0x32c) = 0x800080;
      lVar23 = *plVar13;
      *(char *)(lVar23 + 0x335) = (char)uVar7;
      *(uint *)(lVar23 + 0x35c) = uVar7;
      pplVar24 = (longlong **)0x6;
      ppplStack_610 = (longlong ***)0x6;
      *(int16_t *)(*plVar13 + 0x332) = 6;
      *(uint *)(*(longlong *)(param_1 + 0x16) + 0x328) =
           *(uint *)(*(longlong *)(param_1 + 0x16) + 0x328) | 0x2000;
      *(int32_t *)(*(longlong *)(param_1 + 0x16) + 0x324) = 0x1e;
      pplVar11 = (longlong **)FUN_18062b1e0(_DAT_180c8ed18,0x40,8,3);
      pplVar17 = pplVar11 + 1;
      *pplVar17 = (longlong *)0x0;
      pplVar11[2] = (longlong *)0x0;
      pplVar11[3] = (longlong *)0x0;
      *(int32_t *)(pplVar11 + 4) = 3;
      pplVar11[5] = (longlong *)0x0;
      pplVar11[7] = (longlong *)0x0;
      *(int32_t *)(pplVar11 + 6) = 0xffffffff;
      ppplStack_608 = (longlong ***)pplVar17;
      pplStack_598 = pplVar11;
      FUN_18031bd10(pplVar17,6);
      do {
        plVar15 = (longlong *)0x0;
        uStack_4b0 = 0;
        uStack_4a8 = 0;
        uStack_4a0 = 0;
        uStack_498 = uStack_498 & 0xffffff00;
        plVar13 = pplVar11[2];
        if (plVar13 < pplVar11[3]) {
          pplVar11[2] = plVar13 + 4;
          *(int32_t *)plVar13 = 0;
          *(int32_t *)((longlong)plVar13 + 4) = uStack_4ac;
          *(int32_t *)(plVar13 + 1) = 0;
          *(int32_t *)((longlong)plVar13 + 0xc) = 0;
          *(int32_t *)(plVar13 + 2) = 0;
          *(int32_t *)((longlong)plVar13 + 0x14) = 0;
          *(uint *)(plVar13 + 3) = uStack_498;
          *(int32_t *)((longlong)plVar13 + 0x1c) = uStack_494;
          ppplStack_610 = (longlong ***)pplVar24;
        }
        else {
          plVar16 = *pplVar17;
          lVar23 = (longlong)plVar13 - (longlong)plVar16 >> 5;
          if (lVar23 == 0) {
            lVar23 = 1;
LAB_180316e53:
            plVar15 = (longlong *)
                      FUN_18062b420(_DAT_180c8ed18,lVar23 << 5,*(int8_t *)(pplVar11 + 4));
            plVar13 = pplVar11[2];
            plVar16 = *pplVar17;
          }
          else {
            lVar23 = lVar23 * 2;
            if (lVar23 != 0) goto LAB_180316e53;
          }
          lVar21 = (longlong)plVar13 - (longlong)plVar16 >> 5;
          plVar13 = plVar15;
          if (0 < lVar21) {
            do {
              plVar2 = (longlong *)(((longlong)plVar16 - (longlong)plVar15) + (longlong)plVar13);
              lVar5 = plVar2[1];
              *plVar13 = *plVar2;
              plVar13[1] = lVar5;
              plVar2 = (longlong *)
                       (((longlong)plVar16 - (longlong)plVar15) + 0x10 + (longlong)plVar13);
              lVar5 = plVar2[1];
              plVar13[2] = *plVar2;
              plVar13[3] = lVar5;
              lVar21 = lVar21 + -1;
              plVar13 = plVar13 + 4;
            } while (0 < lVar21);
          }
          *(int32_t *)plVar13 = uStack_4b0;
          *(int32_t *)((longlong)plVar13 + 4) = uStack_4ac;
          *(int32_t *)(plVar13 + 1) = (int32_t)uStack_4a8;
          *(int32_t *)((longlong)plVar13 + 0xc) = uStack_4a8._4_4_;
          *(int32_t *)(plVar13 + 2) = (int32_t)uStack_4a0;
          *(int32_t *)((longlong)plVar13 + 0x14) = uStack_4a0._4_4_;
          *(uint *)(plVar13 + 3) = uStack_498;
          *(int32_t *)((longlong)plVar13 + 0x1c) = uStack_494;
          pplStack_5f8 = (longlong **)(plVar13 + 4);
          if (*pplVar17 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *pplVar17 = plVar15;
          pplVar11[2] = (longlong *)pplStack_5f8;
          pplVar11[3] = plVar15 + lVar23 * 4;
        }
        pplVar24 = (longlong **)((longlong)ppplStack_610 + -1);
        ppplStack_610 = (longlong ***)pplVar24;
      } while (pplVar24 != (longlong **)0x0);
      *(int32_t *)((longlong)pplStack_598 + 4) = 1;
      *(int32_t *)pplStack_598 = 0;
      *(int32_t *)(pplStack_598 + 6) = *(int32_t *)(lStack_5f0 + 0x1bd4);
      ppplStack_608 = (longlong ***)&puStack_198;
      puStack_198 = &UNK_1809fcc28;
      puStack_190 = auStack_180;
      uStack_188 = 0;
      auStack_180[0] = 0;
      uStack_100 = 1;
      uStack_f8 = *(uint64_t *)(param_1 + 0x16);
      pplStack_f0 = pplStack_598;
      uVar10 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
      pplVar17 = (longlong **)FUN_18005ce30(uVar10,&puStack_198);
      pplStack_5f8 = pplVar17;
      pplStack_468 = pplVar17;
      if (pplVar17 != (longlong **)0x0) {
        (*(code *)(*pplVar17)[5])(pplVar17);
      }
      lVar23 = _DAT_180c82868;
      ppplStack_608 = &pplStack_598;
      pplStack_598 = pplVar17;
      if (pplVar17 != (longlong **)0x0) {
        (*(code *)(*pplVar17)[5])(pplVar17);
      }
      FUN_18005e370(lVar23,&pplStack_598);
      *param_1 = *param_1 + 1;
      iVar27 = 0;
      do {
        uVar9 = 0;
        if (uVar7 != 0) {
          ppplStack_608 = &pplStack_5d8;
          do {
            ppplStack_610 = (longlong ***)&plStack_438;
            plStack_438 = (longlong *)&UNK_1809fcc28;
            plStack_430 = (longlong *)&uStack_420;
            uStack_428 = 0;
            uStack_420 = 0;
            uStack_3a0 = 5;
            plStack_398 = (longlong *)*plStack_528;
            plStack_390 = plVar12;
            iStack_388 = iVar27;
            uStack_384 = uVar9;
            uStack_380 = uVar7;
            iStack_37c = iVar27;
            uStack_378 = uVar9;
            uStack_374 = uVar7;
            pplVar17 = (longlong **)FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
            *pplVar17 = (longlong *)&UNK_180a21690;
            *pplVar17 = (longlong *)&UNK_180a21720;
            *(int32_t *)(pplVar17 + 1) = 0;
            *pplVar17 = (longlong *)&UNK_18098bdc8;
            LOCK();
            *(int8_t *)(pplVar17 + 2) = 0;
            UNLOCK();
            pplVar17[3] = (longlong *)0xffffffffffffffff;
            *pplVar17 = (longlong *)&UNK_1809fdfd0;
            pplStack_5d8 = pplVar17 + 4;
            *pplStack_5d8 = (longlong *)&UNK_18098bcb0;
            pplVar17[5] = (longlong *)0x0;
            *(int32_t *)(pplVar17 + 6) = 0;
            *pplStack_5d8 = (longlong *)&UNK_1809fcc28;
            pplVar17[5] = (longlong *)(pplVar17 + 7);
            *(int32_t *)(pplVar17 + 6) = 0;
            *(int8_t *)(pplVar17 + 7) = 0;
            *pplStack_5d8 = plStack_438;
            pplVar17[5] = plStack_430;
            pplVar17[6] = (longlong *)CONCAT44(uStack_424,uStack_428);
            pplVar17[7] = (longlong *)CONCAT71(uStack_41f,uStack_420);
            pplVar17[8] = plStack_418;
            pplVar17[9] = plStack_410;
            pplVar17[10] = plStack_408;
            pplVar17[0xb] = plStack_400;
            pplVar17[0xc] = plStack_3f8;
            pplVar17[0xd] = plStack_3f0;
            pplVar17[0xe] = plStack_3e8;
            pplVar17[0xf] = plStack_3e0;
            pplVar17[0x10] = plStack_3d8;
            pplVar17[0x11] = plStack_3d0;
            pplVar17[0x12] = plStack_3c8;
            pplVar17[0x13] = plStack_3c0;
            pplVar17[0x14] = plStack_3b8;
            pplVar17[0x15] = plStack_3b0;
            pplVar17[0x16] = plStack_3a8;
            pplVar17[0x17] = (longlong *)CONCAT44(uStack_39c,uStack_3a0);
            pplVar17[0x18] = plStack_398;
            pplVar17[0x19] = plStack_390;
            pplVar17[0x1a] = (longlong *)CONCAT44(uStack_384,iStack_388);
            pplVar17[0x1b] = (longlong *)CONCAT44(iStack_37c,uStack_380);
            *(uint *)(pplVar17 + 0x1c) = uStack_378;
            *(uint *)((longlong)pplVar17 + 0xe4) = uStack_374;
            *(int32_t *)(pplVar17 + 0x1d) = uStack_370;
            *(int32_t *)((longlong)pplVar17 + 0xec) = uStack_36c;
            *(int32_t *)(pplVar17 + 0x1e) = uStack_368;
            *(int32_t *)((longlong)pplVar17 + 0xf4) = uStack_364;
            *(int32_t *)(pplVar17 + 0x1f) = uStack_360;
            *(int32_t *)((longlong)pplVar17 + 0xfc) = uStack_35c;
            *(int32_t *)(pplVar17 + 0x17) = uStack_3a0;
            ppplStack_610 = (longlong ***)pplVar17;
            pplStack_5a8 = pplStack_5d8;
            pplStack_460 = pplVar17;
            (*(code *)(*pplVar17)[5])(pplVar17);
            lVar23 = _DAT_180c82868;
            ppplStack_610 = &pplStack_5d8;
            pplStack_5d8 = pplVar17;
            (*(code *)(*pplVar17)[5])(pplVar17);
            puVar14 = *(uint64_t **)(*(longlong *)(lVar23 + 8) + 8);
            pcVar4 = *(code **)*puVar14;
            ppplStack_610 = &pplStack_510;
            pplStack_510 = pplStack_5d8;
            if (pplStack_5d8 != (longlong **)0x0) {
              (*(code *)(*pplStack_5d8)[5])();
            }
            (*pcVar4)(puVar14,&pplStack_510);
            if (pplStack_5d8 != (longlong **)0x0) {
              (*(code *)(*pplStack_5d8)[7])();
            }
            (*(code *)(*pplVar17)[7])(pplVar17);
            ppplStack_610 = (longlong ***)&plStack_438;
            plStack_438 = (longlong *)&UNK_18098bcb0;
            uVar9 = uVar9 + 1;
            plVar12 = plStack_5a0;
          } while (uVar9 < uVar7);
        }
        param_1 = piStack_4f8;
        iVar27 = iVar27 + 1;
      } while (iVar27 < 6);
      piStack_4f8[2] = 1;
      if (pplStack_5f8 != (longlong **)0x0) {
        (*(code *)(*pplStack_5f8)[7])();
      }
      ppplStack_608 = (longlong ***)&puStack_198;
      puStack_198 = &UNK_18098bcb0;
      puStack_558 = &UNK_180a3c3e0;
      if (puStack_550 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_550 = (uint64_t *)0x0;
      uStack_540 = uStack_540 & 0xffffffff00000000;
      puStack_558 = &UNK_18098bcb0;
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x38))(plVar12);
      }
    }
    plStack_4c8 = *(longlong **)(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    if (plStack_4c8 != (longlong *)0x0) {
      (**(code **)(*plStack_4c8 + 0x38))();
    }
    plStack_4c0 = *(longlong **)(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    if (plStack_4c0 != (longlong *)0x0) {
      (**(code **)(*plStack_4c0 + 0x38))();
    }
  }
  else {
    uStack_614 = unaff_ESI & 0xffffff00;
    param_3 = param_3 & 0xffffffffffffff00;
    uVar7 = (uint)param_3;
    plVar13 = (longlong *)(param_1 + 0x16);
    bVar6 = false;
    if (((*plVar13 != 0) && ((uint)*(ushort *)(*plVar13 + 0x332) == iVar27 * 6)) &&
       (bVar6 = false, param_1[2] == 2)) {
      bVar6 = true;
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      uStack_614 = (uint)(*(int *)(*(longlong *)(param_1 + 0x10) + 0x3c) == iVar27);
    }
    uVar9 = uStack_614;
    if (*(longlong *)(param_1 + 0x12) != 0) {
      bVar28 = *(int *)(*(longlong *)(param_1 + 0x12) + 0x3c) == iVar27;
      param_3 = (ulonglong)bVar28;
      uVar7 = (uint)bVar28;
    }
    cVar25 = (char)param_3;
    puStack_5e8 = (uint64_t *)CONCAT44(puStack_5e8._4_4_,uVar7);
    plStack_528 = plVar13;
    if (!bVar6) {
      uVar7 = 0x80;
      iVar27 = -1;
      do {
        iVar22 = iVar27;
        uVar7 = uVar7 >> 1;
        iVar27 = iVar22 + 1;
      } while (uVar7 != 0);
      iVar22 = iVar22 + 2;
      uVar10 = FUN_18062b1e0(_DAT_180c8ed18,0x3b0,0x10,3);
      uVar10 = FUN_18023a2e0(uVar10,0);
      FUN_180056f10(plVar13,uVar10);
      puStack_578 = &UNK_180a3c3e0;
      uStack_560 = 0;
      puStack_570 = (uint64_t *)0x0;
      uStack_568 = 0;
      puStack_570 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
      *(int8_t *)puStack_570 = 0;
      uVar8 = FUN_18064e990(puStack_570);
      uStack_560 = CONCAT44(uStack_560._4_4_,uVar8);
      *puStack_570 = 0x5f70616d65627563;
      *(int32_t *)(puStack_570 + 1) = 0x61727261;
      *(int16_t *)((longlong)puStack_570 + 0xc) = 0x79;
      uStack_568 = 0xd;
      puVar26 = &system_buffer_ptr;
      if (*(void **)(lStack_5f0 + 0x3528) != (void *)0x0) {
        puVar26 = *(void **)(lStack_5f0 + 0x3528);
      }
      FUN_180628040(&puStack_578,&UNK_180a1a8d8,puVar26);
      puVar14 = (uint64_t *)&system_buffer_ptr;
      if (puStack_570 != (uint64_t *)0x0) {
        puVar14 = puStack_570;
      }
      (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x16) + 0x10) + 0x10))
                ((longlong *)(*(longlong *)(param_1 + 0x16) + 0x10),puVar14);
      lVar21 = lStack_5e0;
      *(int32_t *)(*(longlong *)(param_1 + 0x16) + 0x32c) = 0x800080;
      lVar23 = *(longlong *)(param_1 + 0x16);
      *(char *)(lVar23 + 0x335) = (char)iVar22;
      *(int *)(lVar23 + 0x35c) = iVar22;
      *(short *)(*(longlong *)(param_1 + 0x16) + 0x332) = (short)lStack_5e0 * 6;
      *(uint *)(*(longlong *)(param_1 + 0x16) + 0x328) =
           *(uint *)(*(longlong *)(param_1 + 0x16) + 0x328) | 0x2000;
      *(int32_t *)(*(longlong *)(param_1 + 0x16) + 0x324) = 0x1e;
      pplVar11 = (longlong **)FUN_18062b1e0(_DAT_180c8ed18,0x40,8,3);
      pplVar17 = pplVar11 + 1;
      *pplVar17 = (longlong *)0x0;
      pplVar11[2] = (longlong *)0x0;
      pplVar11[3] = (longlong *)0x0;
      *(int32_t *)(pplVar11 + 4) = 3;
      pplVar11[5] = (longlong *)0x0;
      pplVar11[7] = (longlong *)0x0;
      *(int32_t *)(pplVar11 + 6) = 0xffffffff;
      uVar7 = (int)lVar21 * 6;
      ppplStack_608 = (longlong ***)pplVar17;
      pplStack_5f8 = pplVar11;
      FUN_18031bd10(pplVar17);
      if (0 < (int)uVar7) {
        ppplStack_610 = (longlong ***)(ulonglong)uVar7;
        do {
          plVar12 = uStack_5c8;
          uStack_5c8 = (longlong *)((ulonglong)uStack_5c8 & 0xffffffff00000000);
          plVar15 = uStack_5c8;
          uStack_5c0 = (longlong *)0x0;
          uStack_5b8 = (code *)0x0;
          uStack_5b0 = (code *)((ulonglong)uStack_5b0 & 0xffffffffffffff00);
          plVar13 = pplVar11[2];
          if (plVar13 < pplVar11[3]) {
            pplVar11[2] = plVar13 + 4;
            uStack_5c8._4_4_ = SUB84(plVar12,4);
            *(int32_t *)plVar13 = 0;
            *(int32_t *)((longlong)plVar13 + 4) = uStack_5c8._4_4_;
            *(int32_t *)(plVar13 + 1) = 0;
            *(int32_t *)((longlong)plVar13 + 0xc) = 0;
            plVar13[2] = 0;
            plVar13[3] = (longlong)uStack_5b0;
            uStack_5c8 = plVar15;
          }
          else {
            plVar15 = *pplVar17;
            lVar23 = (longlong)plVar13 - (longlong)plVar15 >> 5;
            if (lVar23 == 0) {
              lVar23 = 1;
LAB_180316799:
              plVar12 = (longlong *)
                        FUN_18062b420(_DAT_180c8ed18,lVar23 << 5,*(int8_t *)(pplVar11 + 4));
              plVar13 = pplVar11[2];
              plVar15 = *pplVar17;
            }
            else {
              lVar23 = lVar23 * 2;
              if (lVar23 != 0) goto LAB_180316799;
              plVar12 = (longlong *)0x0;
            }
            lVar21 = (longlong)plVar13 - (longlong)plVar15 >> 5;
            plVar13 = plVar12;
            if (0 < lVar21) {
              do {
                plVar16 = (longlong *)((longlong)plVar13 + ((longlong)plVar15 - (longlong)plVar12));
                lVar5 = plVar16[1];
                *plVar13 = *plVar16;
                plVar13[1] = lVar5;
                plVar16 = (longlong *)
                          ((longlong)plVar13 + ((longlong)plVar15 - (longlong)plVar12) + 0x10);
                lVar5 = plVar16[1];
                plVar13[2] = *plVar16;
                plVar13[3] = lVar5;
                lVar21 = lVar21 + -1;
                plVar13 = plVar13 + 4;
              } while (0 < lVar21);
            }
            *(int32_t *)plVar13 = (int32_t)uStack_5c8;
            *(int32_t *)((longlong)plVar13 + 4) = uStack_5c8._4_4_;
            *(int32_t *)(plVar13 + 1) = (int32_t)uStack_5c0;
            *(int32_t *)((longlong)plVar13 + 0xc) = uStack_5c0._4_4_;
            *(int32_t *)(plVar13 + 2) = (int32_t)uStack_5b8;
            *(int32_t *)((longlong)plVar13 + 0x14) = uStack_5b8._4_4_;
            *(int32_t *)(plVar13 + 3) = (int32_t)uStack_5b0;
            *(int32_t *)((longlong)plVar13 + 0x1c) = uStack_5b0._4_4_;
            if (*pplVar17 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            *pplVar17 = plVar12;
            pplVar11[2] = plVar13 + 4;
            pplVar11[3] = plVar12 + lVar23 * 4;
          }
          ppplStack_610 = (longlong ***)((longlong)ppplStack_610 - 1);
        } while (ppplStack_610 != (longlong ***)0x0);
        ppplStack_610 = (longlong ***)0x0;
        uVar9 = uStack_614;
      }
      *(int32_t *)((longlong)pplStack_5f8 + 4) = 1;
      *(int32_t *)pplStack_5f8 = 0;
      *(int32_t *)(pplStack_5f8 + 6) = *(int32_t *)(lStack_5f0 + 0x1bd4);
      ppplStack_608 = (longlong ***)&puStack_278;
      puStack_278 = &UNK_1809fcc28;
      puStack_270 = auStack_260;
      uStack_268 = 0;
      auStack_260[0] = 0;
      uStack_1e0 = 1;
      uStack_1d8 = *(uint64_t *)(param_1 + 0x16);
      pplStack_1d0 = pplStack_5f8;
      uVar10 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
      plVar13 = (longlong *)FUN_18005ce30(uVar10,&puStack_278);
      plStack_480 = plVar13;
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x28))(plVar13);
      }
      lVar23 = _DAT_180c82868;
      ppplStack_608 = (longlong ***)&plStack_518;
      plStack_518 = plVar13;
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x28))(plVar13);
      }
      FUN_18005e370(lVar23,&plStack_518);
      *param_1 = *param_1 + 1;
      param_1[2] = 2;
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x38))(plVar13);
      }
      ppplStack_608 = (longlong ***)&puStack_278;
      puStack_278 = &UNK_18098bcb0;
      puStack_578 = &UNK_180a3c3e0;
      if (puStack_570 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_570 = (uint64_t *)0x0;
      uStack_560 = uStack_560 & 0xffffffff00000000;
      puStack_578 = &UNK_18098bcb0;
      cVar25 = (char)puStack_5e8;
      lVar23 = lStack_5e0;
    }
    if (((char)uVar9 == '\0') || (cVar25 == '\0')) {
      puStack_b8 = &UNK_18098bc80;
      puStack_b0 = auStack_a0;
      auStack_a0[0] = 0;
      uStack_a8 = 0x17;
      uVar8 = strcpy_s(auStack_a0,0x20,&UNK_180a1a8c0);
      lVar21 = lStack_5f0;
      uStack_620 = 4;
      uStack_628 = 1;
      uStack_630 = 0;
      uStack_640 = 0x10;
      uStack_648 = 0x21;
      uStack_650 = 3;
      uStack_658 = 0x21;
      uStack_638 = (int)lVar23;
      puVar14 = (uint64_t *)
                FUN_1800b0a10(uVar8,&plStack_4e8,*(int32_t *)(lStack_5f0 + 0x1bd4),&puStack_b8);
      uVar10 = *puVar14;
      *puVar14 = 0;
      plStack_4f0 = *(longlong **)(param_1 + 0x10);
      *(uint64_t *)(param_1 + 0x10) = uVar10;
      if (plStack_4f0 != (longlong *)0x0) {
        (**(code **)(*plStack_4f0 + 0x38))();
      }
      if (plStack_4e8 != (longlong *)0x0) {
        (**(code **)(*plStack_4e8 + 0x38))();
      }
      puStack_b8 = &UNK_18098bcb0;
      puStack_80 = &UNK_18098bc80;
      puStack_78 = auStack_68;
      auStack_68[0] = 0;
      uStack_70 = 0x1a;
      uVar8 = strcpy_s(auStack_68,0x20,&UNK_180a1a940);
      uStack_620 = 4;
      uStack_628 = 1;
      uStack_630 = 0;
      uStack_640 = 0x60;
      uStack_648 = 0;
      uStack_650 = 3;
      uStack_658 = 0x61;
      uStack_638 = (int)lVar23;
      puVar14 = (uint64_t *)
                FUN_1800b0a10(uVar8,&plStack_4d8,*(int32_t *)(lVar21 + 0x1bd4),&puStack_80);
      uVar10 = *puVar14;
      *puVar14 = 0;
      plStack_4e0 = *(longlong **)(param_1 + 0x12);
      *(uint64_t *)(param_1 + 0x12) = uVar10;
      if (plStack_4e0 != (longlong *)0x0) {
        (**(code **)(*plStack_4e0 + 0x38))();
      }
      if (plStack_4d8 != (longlong *)0x0) {
        (**(code **)(*plStack_4d8 + 0x38))();
      }
      puStack_80 = &UNK_18098bcb0;
      param_1[1] = param_1[1] + 1;
    }
  }
  uStack_618 = 0;
  uStack_614 = 0;
  if (0 < (int)lStack_5e0) {
    pplStack_5f8 = (longlong **)0x0;
    do {
      uVar7 = uStack_614;
      ppuVar19 = *(void ***)((longlong)pplStack_5f8 + *(longlong *)(param_1 + 4));
      iVar27 = *(int *)((longlong)ppuVar19 + 0x4c);
      if ((*(int *)(ppuVar19 + 0x26) != *(int *)(*(longlong *)(param_1 + 0xe) + 0x3358)) &&
         (*(char *)(*(longlong *)(param_1 + 0xe) + 0x331d) != '\0')) {
        iVar27 = 0;
        *(int32_t *)((longlong)ppuVar19 + 0x4c) = 0;
      }
      ppplStack_608 = (longlong ***)ppuVar19;
      FUN_18031a6c0(ppuVar19,lStack_5f0,uStack_614 == param_1[0xc]);
      if ((*(char *)(ppuVar19 + 10) != '\0') || (*(int *)(ppuVar19 + 0xb) != param_1[1])) {
        uStack_618 = 1;
      }
      if (*(int *)((longlong)ppuVar19 + 0x4c) != 0x18) break;
      if (0 < (int)lStack_5e0) {
        ppuVar18 = (void **)func_0x0001801c2440(param_1);
        if ((ppuVar18 == (void **)0x0) ||
           (plVar13 = (longlong *)ppuVar18[8], uVar7 = uStack_614, plVar13 == (longlong *)0x0)) {
          if (((*param_1 != *(int *)((longlong)ppuVar19 + 0x54)) || (iVar27 != 0x18)) &&
             (lVar23 = FUN_180319780(param_1), lVar23 != 0)) {
            uVar9 = 0x80;
            iVar27 = -1;
            do {
              iVar22 = iVar27;
              uVar9 = uVar9 >> 1;
              iVar27 = iVar22 + 1;
            } while (uVar9 != 0);
            uVar9 = iVar22 + 2;
            if (uVar7 == param_1[0xc]) {
              uVar7 = 0;
            }
            else if ((int)uVar7 < param_1[0xc]) {
              uVar7 = uVar7 + 1;
            }
            iVar27 = 0;
            ppplVar20 = (longlong ***)ppuVar19[0x20];
            ppplStack_610 = ppplVar20;
            pplStack_488 = (longlong **)ppplVar20;
            if (ppplVar20 != (longlong ***)0x0) {
              (*(code *)(*ppplVar20)[5])(ppplVar20);
            }
            uStack_600 = uStack_600 & 0xfffffffe;
            if ((ppplVar20 == (longlong ***)0x0) ||
               ((*(code *)(*ppplVar20)[7])(ppplVar20), ppplVar20 == (longlong ***)0x0)) {
              ppplVar20 = (longlong ***)FUN_180319780(param_1);
              ppplStack_610 = ppplVar20;
              FUN_18023a940(ppplVar20);
            }
            iVar22 = uVar7 * 6;
            pplStack_5a8 = (longlong **)CONCAT44(pplStack_5a8._4_4_,iVar22);
            do {
              uVar7 = 0;
              puStack_5e8 = (uint64_t *)CONCAT44(puStack_5e8._4_4_,iVar22 + iVar27);
              if (uVar9 != 0) {
                pppuStack_520 = &ppuStack_5d0;
                iVar22 = iVar22 + iVar27;
                do {
                  pppuStack_590 = (void ***)&puStack_358;
                  puStack_358 = &UNK_1809fcc28;
                  puStack_350 = &uStack_340;
                  uStack_348 = 0;
                  uStack_340 = 0;
                  uStack_2c0 = 5;
                  puStack_2b8 = (void *)*plStack_528;
                  pplStack_2b0 = (longlong **)ppplVar20;
                  iStack_2a8 = iVar27;
                  uStack_2a4 = uVar7;
                  uStack_2a0 = uVar9;
                  iStack_29c = iVar22;
                  uStack_298 = uVar7;
                  uStack_294 = uVar9;
                  ppuVar19 = (void **)FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
                  *ppuVar19 = &UNK_180a21690;
                  *ppuVar19 = &UNK_180a21720;
                  *(int32_t *)(ppuVar19 + 1) = 0;
                  *ppuVar19 = &UNK_18098bdc8;
                  LOCK();
                  *(int8_t *)(ppuVar19 + 2) = 0;
                  UNLOCK();
                  ppuVar19[3] = (void *)0xffffffffffffffff;
                  *ppuVar19 = &UNK_1809fdfd0;
                  ppuStack_5d0 = ppuVar19 + 4;
                  *ppuStack_5d0 = &UNK_18098bcb0;
                  ppuVar19[5] = (void *)0x0;
                  *(int32_t *)(ppuVar19 + 6) = 0;
                  *ppuStack_5d0 = &UNK_1809fcc28;
                  ppuVar19[5] = (void *)(ppuVar19 + 7);
                  *(int32_t *)(ppuVar19 + 6) = 0;
                  *(int8_t *)(ppuVar19 + 7) = 0;
                  *ppuStack_5d0 = puStack_358;
                  ppuVar19[5] = puStack_350;
                  ppuVar19[6] = (void *)CONCAT44(uStack_344,uStack_348);
                  ppuVar19[7] = (void *)CONCAT71(uStack_33f,uStack_340);
                  ppuVar19[8] = puStack_338;
                  ppuVar19[9] = puStack_330;
                  ppuVar19[10] = puStack_328;
                  ppuVar19[0xb] = puStack_320;
                  ppuVar19[0xc] = puStack_318;
                  ppuVar19[0xd] = puStack_310;
                  ppuVar19[0xe] = puStack_308;
                  ppuVar19[0xf] = puStack_300;
                  ppuVar19[0x10] = puStack_2f8;
                  ppuVar19[0x11] = puStack_2f0;
                  ppuVar19[0x12] = puStack_2e8;
                  ppuVar19[0x13] = puStack_2e0;
                  ppuVar19[0x14] = puStack_2d8;
                  ppuVar19[0x15] = puStack_2d0;
                  ppuVar19[0x16] = puStack_2c8;
                  ppuVar19[0x17] = (void *)CONCAT44(uStack_2bc,uStack_2c0);
                  ppuVar19[0x18] = puStack_2b8;
                  ppuVar19[0x19] = (void *)pplStack_2b0;
                  ppuVar19[0x1a] = (void *)CONCAT44(uStack_2a4,iStack_2a8);
                  ppuVar19[0x1b] = (void *)CONCAT44(iStack_29c,uStack_2a0);
                  *(uint *)(ppuVar19 + 0x1c) = uStack_298;
                  *(uint *)((longlong)ppuVar19 + 0xe4) = uStack_294;
                  *(int32_t *)(ppuVar19 + 0x1d) = uStack_290;
                  *(int32_t *)((longlong)ppuVar19 + 0xec) = uStack_28c;
                  *(int32_t *)(ppuVar19 + 0x1e) = uStack_288;
                  *(int32_t *)((longlong)ppuVar19 + 0xf4) = uStack_284;
                  *(int32_t *)(ppuVar19 + 0x1f) = uStack_280;
                  *(int32_t *)((longlong)ppuVar19 + 0xfc) = uStack_27c;
                  *(int32_t *)(ppuVar19 + 0x17) = uStack_2c0;
                  pppuStack_590 = (void ***)ppuVar19;
                  ppuStack_478 = ppuStack_5d0;
                  ppuStack_448 = ppuVar19;
                  (**(code **)(*ppuVar19 + 0x28))(ppuVar19);
                  lVar23 = _DAT_180c82868;
                  pppuStack_590 = &ppuStack_5d0;
                  ppuStack_5d0 = ppuVar19;
                  (**(code **)(*ppuVar19 + 0x28))(ppuVar19);
                  puVar14 = *(uint64_t **)(*(longlong *)(lVar23 + 8) + 8);
                  pcVar4 = *(code **)*puVar14;
                  pppuStack_590 = &ppuStack_500;
                  ppuStack_500 = ppuStack_5d0;
                  if (ppuStack_5d0 != (void **)0x0) {
                    (**(code **)(*ppuStack_5d0 + 0x28))();
                  }
                  (*pcVar4)(puVar14,&ppuStack_500);
                  if (ppuStack_5d0 != (void **)0x0) {
                    (**(code **)(*ppuStack_5d0 + 0x38))();
                  }
                  (**(code **)(*ppuVar19 + 0x38))(ppuVar19);
                  pppuStack_590 = (void ***)&puStack_358;
                  puStack_358 = &UNK_18098bcb0;
                  uVar7 = uVar7 + 1;
                  ppplVar20 = ppplStack_610;
                  iVar22 = (int)puStack_5e8;
                } while (uVar7 < uVar9);
                iVar22 = (int)pplStack_5a8;
              }
              iVar27 = iVar27 + 1;
              ppplVar20 = ppplStack_610;
            } while (iVar27 < 6);
            *(int *)((longlong)ppplStack_608 + 0x54) = *piStack_4f8;
            param_1 = piStack_4f8;
            uVar7 = uStack_614;
          }
        }
        else if (ppuVar18 == ppuVar19) {
          plStack_4b8 = plVar13;
          (**(code **)(*plVar13 + 0x28))(plVar13);
          ppuVar19 = (void **)FUN_18062b1e0(_DAT_180c8ed18,0x40,8,3);
          ppplStack_610 = (longlong ***)&uStack_5c8;
          pplStack_5a8 = &plStack_588;
          ppplStack_608 = (longlong ***)ppuVar19;
          plStack_588 = plVar13;
          (**(code **)(*plVar13 + 0x28))(plVar13);
          plStack_580 = *(longlong **)(param_1 + 0x16);
          if (plStack_580 != (longlong *)0x0) {
            (**(code **)(*plStack_580 + 0x28))();
          }
          uStack_5c0 = plStack_580;
          uStack_5c8 = plStack_588;
          pplStack_5a8 = &plStack_588;
          puStack_5e8 = &uStack_538;
          uStack_530 = 0;
          uStack_538 = 0;
          plStack_580 = (longlong *)0x0;
          plStack_588 = (longlong *)0x0;
          uStack_5b0 = FUN_18031c260;
          uStack_5b8 = FUN_18031c300;
          pppuStack_520 = (void ***)&uStack_5c8;
          *ppuVar19 = &UNK_180a21690;
          *ppuVar19 = &UNK_180a21720;
          *(int32_t *)(ppuVar19 + 1) = 0;
          *ppuVar19 = &UNK_18098bdc8;
          LOCK();
          *(int8_t *)(ppuVar19 + 2) = 0;
          UNLOCK();
          ppuVar19[3] = (void *)0xffffffffffffffff;
          *ppuVar19 = &UNK_1809fdea8;
          ppuVar1 = ppuVar19 + 4;
          ppuVar19[6] = (void *)0x0;
          ppuVar19[7] = _guard_check_icall;
          ppuStack_450 = ppuVar1;
          if (ppuVar1 != (void **)&uStack_5c8) {
            if ((code *)ppuVar19[6] != (code *)0x0) {
              (*(code *)ppuVar19[6])(ppuVar1,0,0);
            }
            if (uStack_5b8 != (code *)0x0) {
              (*uStack_5b8)(ppuVar1,&uStack_5c8,1);
            }
            ppuVar19[6] = uStack_5b8;
            ppuVar19[7] = uStack_5b0;
          }
          if (uStack_5b8 != (code *)0x0) {
            (*uStack_5b8)(&uStack_5c8,0,0);
          }
          ppuStack_490 = ppuVar19;
          (**(code **)(*ppuVar19 + 0x28))(ppuVar19);
          lVar23 = _DAT_180c82868;
          pppuStack_520 = &ppuStack_508;
          ppuStack_508 = ppuVar19;
          (**(code **)(*ppuVar19 + 0x28))(ppuVar19);
          FUN_18005e370(lVar23,&ppuStack_508);
          *(int *)((longlong)ppuVar18 + 0x54) = *param_1;
          (**(code **)(*ppuVar19 + 0x38))(ppuVar19);
          (**(code **)(*plStack_4b8 + 0x38))();
          uVar7 = uStack_614;
        }
      }
      uStack_614 = uVar7 + 1;
      pplStack_5f8 = pplStack_5f8 + 1;
    } while ((int)uStack_614 < (int)lStack_5e0);
  }
  FUN_1803179d0(param_1,uStack_618);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_678);
}







