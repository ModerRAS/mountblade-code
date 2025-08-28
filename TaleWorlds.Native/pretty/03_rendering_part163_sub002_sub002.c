#include "TaleWorlds.Native.Split.h"

// 03_rendering_part163_sub002_sub002.c - 1 个函数

// 函数: void FUN_18036b380(longlong *******param_1)
void FUN_18036b380(longlong *******param_1)

{
  longlong ******pppppplVar1;
  int *piVar2;
  int32_t *puVar3;
  int32_t uVar4;
  longlong ****pppplVar5;
  longlong ******pppppplVar6;
  float fVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  char cVar12;
  uint64_t uVar13;
  longlong ******pppppplVar14;
  longlong *******ppppppplVar15;
  longlong *******ppppppplVar16;
  uint64_t *puVar17;
  longlong *******ppppppplVar18;
  longlong *******ppppppplVar19;
  float *pfVar20;
  longlong *****ppppplVar21;
  longlong *****ppppplVar22;
  int iVar23;
  longlong lVar24;
  uint uVar25;
  longlong lVar26;
  int iVar27;
  ulonglong uVar28;
  longlong *plVar29;
  longlong *plVar30;
  longlong *******ppppppplVar31;
  int iVar32;
  int iVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  int8_t auStack_4f8 [48];
  longlong *******ppppppplStack_4c8;
  longlong *******ppppppplStack_4c0;
  uint uStack_4b8;
  longlong *******ppppppplStack_4b0;
  int iStack_4a8;
  int iStack_4a4;
  longlong *plStack_4a0;
  longlong *******ppppppplStack_498;
  uint64_t uStack_488;
  uint64_t uStack_480;
  uint uStack_478;
  int32_t uStack_474;
  uint64_t uStack_468;
  float fStack_460;
  int32_t uStack_45c;
  uint64_t uStack_458;
  uint64_t uStack_450;
  uint uStack_448;
  int32_t uStack_444;
  longlong *******ppppppplStack_438;
  uint64_t *puStack_428;
  uint64_t *puStack_420;
  uint64_t *puStack_418;
  int32_t uStack_410;
  uint64_t uStack_408;
  uint64_t *puStack_400;
  uint64_t *puStack_3f8;
  uint64_t *puStack_3f0;
  int32_t uStack_3e8;
  uint64_t uStack_3e0;
  uint64_t uStack_3d8;
  uint64_t uStack_3d0;
  int32_t uStack_3c8;
  longlong *****ppppplStack_3c0;
  longlong *****ppppplStack_3b8;
  longlong *****ppppplStack_3b0;
  int32_t uStack_3a8;
  ulonglong uStack_398;
  longlong *plStack_390;
  float fStack_388;
  float fStack_384;
  float fStack_380;
  int32_t uStack_37c;
  float fStack_378;
  float fStack_374;
  float fStack_370;
  int32_t uStack_36c;
  longlong *******ppppppplStack_368;
  longlong *******ppppppplStack_358;
  uint64_t uStack_350;
  longlong *******ppppppplStack_340;
  longlong ****pppplStack_338;
  float fStack_330;
  float fStack_32c;
  float fStack_328;
  int32_t uStack_324;
  uint64_t uStack_320;
  uint64_t uStack_318;
  float fStack_310;
  uint64_t uStack_308;
  uint64_t uStack_300;
  int32_t uStack_2f8;
  int32_t uStack_2f4;
  int32_t uStack_2f0;
  int32_t uStack_2ec;
  uint64_t uStack_2e8;
  uint64_t uStack_2e0;
  float fStack_2d8;
  uint64_t uStack_2d0;
  longlong *******appppppplStack_2c8 [7];
  int32_t uStack_290;
  int iStack_268;
  int iStack_264;
  int iStack_260;
  int iStack_25c;
  int32_t uStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  uint64_t uStack_228;
  uint64_t uStack_220;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  int32_t uStack_1f8;
  int32_t uStack_1f4;
  int32_t uStack_1f0;
  int32_t uStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  int32_t uStack_1d8;
  int32_t uStack_1d4;
  int32_t uStack_1d0;
  int32_t uStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  int32_t uStack_1b8;
  int32_t uStack_1b4;
  int32_t uStack_1b0;
  int32_t uStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  int32_t uStack_198;
  int32_t uStack_194;
  int32_t uStack_190;
  int32_t uStack_18c;
  int8_t auStack_188 [80];
  void *puStack_138;
  int8_t *puStack_130;
  int32_t uStack_128;
  int8_t auStack_120 [72];
  ulonglong uStack_d8;
  
  uStack_2d0 = 0xfffffffffffffffe;
  uStack_d8 = _DAT_180bf00a8 ^ (ulonglong)auStack_4f8;
  ppppppplVar31 = (longlong *******)0x0;
  ppppppplStack_4b0 = param_1;
  if (param_1[0x1c] == (longlong ******)0x0) {
    uVar13 = FUN_18062b1e0(_DAT_180c8ed18,0x3d0,8,0x16);
    pppppplVar14 = (longlong ******)FUN_180275090(uVar13);
    if (pppppplVar14 != (longlong ******)0x0) {
      ppppppplStack_4c0 = (longlong *******)pppppplVar14;
      (*(code *)(*pppppplVar14)[5])(pppppplVar14);
    }
    ppppppplStack_4c0 = (longlong *******)param_1[0x1c];
    param_1[0x1c] = pppppplVar14;
    if (ppppppplStack_4c0 != (longlong *******)0x0) {
      (*(code *)(*ppppppplStack_4c0)[7])();
    }
    pppppplVar14 = param_1[0x1d];
    ppppppplStack_368 = (longlong *******)&ppppppplStack_4c8;
    ppppppplStack_4c8 = (longlong *******)param_1[0x1c];
    if (ppppppplStack_4c8 != (longlong *******)0x0) {
      (*(code *)(*ppppppplStack_4c8)[5])();
    }
    ppppppplStack_498 = (longlong *******)&ppppppplStack_4c8;
    FUN_1802edcd0(pppppplVar14,ppppppplStack_4c8,1);
    if (ppppppplStack_4c8 != (longlong *******)0x0) {
      (*(code *)(*ppppppplStack_4c8)[7])();
    }
  }
  uVar25 = (int)((longlong)param_1[0x1b][0x1b] - (longlong)param_1[0x1b][0x1a] >> 3) - 1;
  uStack_398 = (ulonglong)uVar25;
  if (0 < (int)uVar25) {
    uVar13 = FUN_18062b1e0(_DAT_180c8ed18,0x140,0x10,3);
    ppppppplVar15 = (longlong *******)FUN_18014a1b0(uVar13);
    ppppppplStack_368 = ppppppplVar15;
    if (ppppppplVar15 != (longlong *******)0x0) {
      (*(code *)(*ppppppplVar15)[5])(ppppppplVar15);
    }
    FUN_1802f5e40(appppppplStack_2c8);
    if (ppppppplVar15 != (longlong *******)0x0) {
      ppppppplStack_4c0 = ppppppplVar15;
      (*(code *)(*ppppppplVar15)[5])(ppppppplVar15);
    }
    ppppppplStack_4c0 = appppppplStack_2c8[0];
    if (appppppplStack_2c8[0] != (longlong *******)0x0) {
      pppppplVar14 = *appppppplStack_2c8[0];
      appppppplStack_2c8[0] = ppppppplVar15;
      (*(code *)pppppplVar14[7])();
      ppppppplVar15 = appppppplStack_2c8[0];
    }
    appppppplStack_2c8[0] = ppppppplVar15;
    puStack_428 = (uint64_t *)0x0;
    puStack_420 = (uint64_t *)0x0;
    puStack_418 = (uint64_t *)0x0;
    uStack_410 = 6;
    puStack_400 = (uint64_t *)0x0;
    puStack_3f8 = (uint64_t *)0x0;
    puStack_3f0 = (uint64_t *)0x0;
    uStack_3e8 = 6;
    uStack_3e0 = 0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3c8 = 6;
    ppppppplStack_498 = (longlong *******)&ppppplStack_3c0;
    ppppplStack_3c0 = (longlong *****)0x0;
    ppppplStack_3b8 = (longlong *****)0x0;
    ppppplStack_3b0 = (longlong *****)0x0;
    uStack_3a8 = 6;
    uStack_408 = *(uint64_t *)(_DAT_180c8aa00 + 0x28);
    ppppppplStack_4c8 = (longlong *******)0x0;
    ppppppplStack_438 = (longlong *******)0x0;
    ppppppplStack_4c0 = (longlong *******)0x0;
    ppppppplStack_358 = (longlong *******)0x0;
    ppppppplVar15 = ppppppplVar31;
    ppppppplVar16 = ppppppplVar31;
    ppppppplVar18 = ppppppplVar31;
    if (system_data_aa6b != '\0') {
      pppppplVar14 = (longlong ******)FUN_180275820(param_1[0x13]);
      ppppppplStack_498 = (longlong *******)pppppplVar14;
      if (pppppplVar14 != (longlong ******)0x0) {
        (*(code *)(*pppppplVar14)[5])(pppppplVar14);
      }
      ppppppplVar16 = (longlong *******)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
      *ppppppplVar16 = pppppplVar14;
      *(int32_t *)(ppppppplVar16 + 1) = 0;
      ppppppplStack_4c8 = ppppppplVar16;
      FUN_18007f770(ppppppplVar16);
      uVar13 = FUN_180275820(param_1[0x13]);
      puVar17 = (uint64_t *)FUN_1800763c0(uVar13,&uStack_468);
      ppppppplVar15 = (longlong *******)*puVar17;
      *puVar17 = 0;
      ppppppplStack_438 = (longlong *******)0x0;
      ppppppplStack_4c0 = ppppppplVar15;
      ppppppplStack_358 = ppppppplVar15;
      if (uStack_468 != (longlong *******)0x0) {
        (*(code *)(*uStack_468)[7])();
      }
      ppppppplVar18 = (longlong *******)FUN_18062b1e0(_DAT_180c8ed18,0x38,8,3);
      *ppppppplVar18 = (longlong ******)0x0;
      ppppppplVar18[1] = (longlong ******)0x0;
      uStack_468 = ppppppplVar18 + 2;
      ppppppplVar18[5] = (longlong ******)0x0;
      ppppppplVar18[3] = (longlong ******)0x0;
      *(int8_t *)uStack_468 = 0;
      uStack_488 = ppppppplVar18;
      ppppppplStack_438 = ppppppplVar18;
      FUN_18022f2e0(ppppppplVar18,ppppppplVar15,0);
      FUN_180230250(ppppppplVar18);
      if (pppppplVar14 != (longlong ******)0x0) {
        (*(code *)(*pppppplVar14)[7])(pppppplVar14);
      }
      uVar25 = (uint)uStack_398;
    }
    FUN_18062b1e0(_DAT_180c8ed18,0x3d0,8,0x16);
    ppppppplVar19 = (longlong *******)FUN_180275090();
    ppppppplStack_498 = ppppppplVar19;
    if (ppppppplVar19 != (longlong *******)0x0) {
      (*(code *)(*ppppppplVar19)[5])();
    }
    uStack_4b8 = 0;
    iStack_4a4 = 0;
    iStack_4a8 = 0;
    puStack_138 = &UNK_1809fcc58;
    puStack_130 = auStack_120;
    auStack_120[0] = 0;
    uStack_128 = 10;
    uVar13 = strcpy_s(auStack_120,0x40,&UNK_180a20f40);
    FUN_1800b3430(uVar13,&plStack_390,&puStack_138,1);
    puStack_138 = &UNK_18098bcb0;
    uStack_458 = (longlong ****)0x3f8000003f800000;
    uStack_450 = (longlong ****)0x3f800000;
    FUN_18014cb90();
    FUN_18014ccf0();
    if (0 < (int)uVar25) {
      do {
        if (system_data_aa6b != '\0') {
          uStack_1d8 = 0;
          uStack_1d4 = 0;
          uStack_1d0 = 0;
          uStack_1cc = 0x3f800000;
          fVar35 = *(float *)((longlong)param_1 + 0xa4);
          if (fVar35 <= 0.01) {
            fVar35 = 0.01;
          }
          iVar32 = 1;
          if (*(char *)(param_1 + 0x15) != '\0') {
            iVar32 = -1;
          }
          fVar34 = (float)iVar32;
          fVar42 = fVar34 * 1.0 + 0.0 + 0.0;
          fVar43 = fVar34 * 0.0 + 0.0 + 0.0;
          fVar44 = fVar34 * 0.0 + 0.0 + 0.0;
          fVar34 = fVar34 * 0.0 + 0.0 + 0.0;
          uStack_1f8 = 0;
          uStack_1f4 = 0x3f800000;
          uStack_1f0 = 0;
          uStack_1ec = 0;
          fVar45 = fVar35 * 0.0 + 0.0;
          fVar46 = fVar35 * 0.0 + 0.0;
          fVar47 = fVar35 * 1.0 + 0.0;
          fVar35 = fVar35 * 0.0 + 0.0;
          pppplVar5 = (*param_1[0x13])[0x33];
          fStack_208 = fVar42;
          fStack_204 = fVar43;
          fStack_200 = fVar44;
          fStack_1fc = fVar34;
          fStack_1e8 = fVar45;
          fStack_1e4 = fVar46;
          fStack_1e0 = fVar47;
          fStack_1dc = fVar35;
          if (pppplVar5 == (longlong ****)&UNK_18027d990) {
            puVar17 = (uint64_t *)((longlong)param_1[0x13] + 0x214);
          }
          else {
            puVar17 = (uint64_t *)(*(code *)pppplVar5)();
          }
          uStack_308 = *puVar17;
          uStack_300 = puVar17[1];
          uStack_2f8 = *(int32_t *)(puVar17 + 2);
          uStack_2f4 = *(int32_t *)((longlong)puVar17 + 0x14);
          uStack_2f0 = *(int32_t *)(puVar17 + 3);
          uStack_2ec = *(int32_t *)((longlong)puVar17 + 0x1c);
          uStack_2e8 = puVar17[4];
          uStack_2e0 = puVar17[5];
          fStack_2d8 = *(float *)(puVar17 + 6);
          pfVar20 = (float *)FUN_18063aab0(&uStack_308,&ppppppplStack_340,&fStack_208);
          uVar25 = uStack_4b8;
          fVar36 = *pfVar20;
          fVar37 = pfVar20[4];
          uStack_2e8 = *(uint64_t *)(pfVar20 + 8);
          uStack_2e0 = *(uint64_t *)(pfVar20 + 10);
          fStack_2d8 = pfVar20[0xc];
          pppppplVar14 = ppppppplVar16[2];
          ppppppplVar31 = (longlong *******)(pppppplVar14 + 2);
          iVar32 = 0;
          uStack_468 = ppppppplVar31;
          if (0 < *(int *)ppppppplVar31) {
            lVar26 = 0;
            do {
              pfVar20 = (float *)((longlong)pppppplVar14[3] + lVar26);
              fVar39 = *pfVar20;
              fVar41 = pfVar20[1];
              fVar7 = pfVar20[2];
              fVar38 = fVar39 * fVar43 + fVar41 * 1.0 + fVar7 * fVar46 + 0.0;
              fVar40 = fVar39 * fVar44 + fVar41 * 0.0 + fVar7 * fVar47 + 0.0;
              pfVar20 = (float *)FUN_180466610(param_1[0x1b],auStack_188,
                                               ((fVar39 * fVar42 + fVar41 * 0.0 + fVar7 * fVar45 +
                                                0.0) - fVar36) * (1.0 / (fVar37 - fVar36)),uVar25);
              uStack_458 = (longlong ****)
                           CONCAT44(pfVar20[1] * 0.0 + fVar38 * pfVar20[5] + fVar40 * pfVar20[9] +
                                    pfVar20[0xd],
                                    *pfVar20 * 0.0 + fVar38 * pfVar20[4] + fVar40 * pfVar20[8] +
                                    pfVar20[0xc]);
              uStack_450 = (longlong ****)
                           CONCAT44(pfVar20[3] * 0.0 + fVar38 * pfVar20[7] + fVar40 * pfVar20[0xb] +
                                    pfVar20[0xf],
                                    pfVar20[2] * 0.0 + fVar38 * pfVar20[6] + fVar40 * pfVar20[10] +
                                    pfVar20[0xe]);
              FUN_180235000(ppppppplVar18,&uStack_458);
              iVar32 = iVar32 + 1;
              lVar26 = lVar26 + 0x10;
            } while (iVar32 < *(int *)ppppppplVar31);
            pppppplVar14 = ppppppplStack_4c8[2];
          }
          iVar23 = iStack_4a8;
          pppppplVar1 = pppppplVar14 + 0xc;
          iVar33 = 0;
          iVar32 = *(int *)pppppplVar1;
          if (0 < iVar32) {
            lVar26 = 0;
            do {
              ppppplVar22 = pppppplVar14[0xd];
              piVar2 = (int *)((longlong)ppppplVar22 + lVar26);
              iStack_264 = piVar2[1];
              iStack_260 = piVar2[2];
              iStack_25c = piVar2[3];
              puVar17 = (uint64_t *)((longlong)ppppplVar22 + lVar26 + 0x10);
              uVar8 = *puVar17;
              uVar9 = puVar17[1];
              puVar17 = (uint64_t *)((longlong)ppppplVar22 + lVar26 + 0x20);
              uVar10 = *puVar17;
              uVar11 = puVar17[1];
              puVar3 = (int32_t *)((longlong)ppppplVar22 + lVar26 + 0x30);
              uStack_238 = *puVar3;
              fVar36 = (float)puVar3[1];
              fVar37 = (float)puVar3[2];
              fVar39 = (float)puVar3[3];
              puVar17 = (uint64_t *)((longlong)ppppplVar22 + lVar26 + 0x40);
              uStack_220 = puVar17[1];
              uVar13 = *(uint64_t *)((longlong)ppppplVar22 + lVar26 + 0x50);
              uVar4 = *(int32_t *)((longlong)ppppplVar22 + lVar26 + 0x58);
              fStack_234 = fVar36 * fVar42 + fVar37 * 0.0 + fVar39 * fVar45;
              fStack_230 = fVar36 * fVar43 + fVar37 * 1.0 + fVar39 * fVar46;
              fStack_22c = fVar36 * fVar44 + fVar37 * 0.0 + fVar39 * fVar47;
              uStack_228 = CONCAT44((int)((ulonglong)*puVar17 >> 0x20),
                                    fVar36 * fVar34 + fVar37 * 0.0 + fVar39 * fVar35);
              iStack_268 = *piVar2 + iVar23;
              pppppplVar6 = ppppppplVar18[1];
              iVar32 = *(int *)(pppppplVar6 + 0xc);
              iVar27 = *(int *)((longlong)pppppplVar6 + 100);
              if (iVar27 <= iVar32) {
                if (iVar27 < 2) {
                  *(int32_t *)((longlong)pppppplVar6 + 100) = 8;
                }
                else {
                  *(int *)((longlong)pppppplVar6 + 100) = (iVar27 >> 1) + iVar27;
                }
                FUN_180086010(pppppplVar6 + 0xc);
                iVar32 = *(int *)(pppppplVar6 + 0xc);
              }
              lVar24 = (longlong)iVar32 * 0x5c;
              ppppplVar22 = pppppplVar6[0xd];
              *(uint64_t *)(lVar24 + (longlong)ppppplVar22) = CONCAT44(iStack_264,iStack_268);
              ((uint64_t *)(lVar24 + (longlong)ppppplVar22))[1] = CONCAT44(iStack_25c,iStack_260);
              puVar17 = (uint64_t *)(lVar24 + 0x10 + (longlong)ppppplVar22);
              *puVar17 = uVar8;
              puVar17[1] = uVar9;
              puVar17 = (uint64_t *)(lVar24 + 0x20 + (longlong)ppppplVar22);
              *puVar17 = uVar10;
              puVar17[1] = uVar11;
              puVar17 = (uint64_t *)(lVar24 + 0x30 + (longlong)ppppplVar22);
              *puVar17 = CONCAT44(fStack_234,uStack_238);
              puVar17[1] = CONCAT44(fStack_22c,fStack_230);
              puVar17 = (uint64_t *)(lVar24 + 0x40 + (longlong)ppppplVar22);
              *puVar17 = uStack_228;
              puVar17[1] = uStack_220;
              *(uint64_t *)(lVar24 + 0x50 + (longlong)ppppplVar22) = uVar13;
              *(int32_t *)(lVar24 + 0x58 + (longlong)ppppplVar22) = uVar4;
              *(int *)(pppppplVar6 + 0xc) = *(int *)(pppppplVar6 + 0xc) + 1;
              *(int8_t *)(ppppppplVar18 + 6) = 1;
              iVar33 = iVar33 + 1;
              lVar26 = lVar26 + 0x5c;
              iVar32 = *(int *)pppppplVar1;
            } while (iVar33 < iVar32);
            pppppplVar14 = ppppppplStack_4c8[2];
            ppppppplVar31 = uStack_468;
          }
          iVar23 = iStack_4a4;
          iVar33 = 0;
          if (0 < *(int *)(pppppplVar14 + 0x11)) {
            lVar26 = 0;
            do {
              uVar13 = *(uint64_t *)((longlong)pppppplVar14[0x12] + lVar26);
              uStack_350._0_4_ = (int)uVar13;
              iVar32 = (int)uStack_350 + iVar23;
              uStack_350._4_4_ = (int)((ulonglong)uVar13 >> 0x20);
              iVar27 = uStack_350._4_4_ + iVar23;
              uStack_350 = uVar13;
              FUN_180235410(ppppppplVar18,iVar32,iVar27,
                            *(int *)((longlong)pppppplVar14[0x12] + lVar26 + 8) + iVar23);
              iVar33 = iVar33 + 1;
              lVar26 = lVar26 + 0xc;
            } while (iVar33 < *(int *)(pppppplVar14 + 0x11));
            iVar32 = *(int *)pppppplVar1;
          }
          iStack_4a8 = iStack_4a8 + *(int *)ppppppplVar31;
          iStack_4a4 = iVar23 + iVar32;
          ppppppplVar31 = (longlong *******)(ulonglong)uStack_4b8;
          param_1 = ppppppplStack_4b0;
        }
        FUN_18014acf0();
        uStack_488 = (longlong *******)0x7f7fffff7f7fffff;
        uStack_480 = (longlong ****)0x7f7fffff7f7fffff;
        uStack_468._0_4_ = -3.4028235e+38;
        fVar35 = (float)uStack_468;
        uStack_468._0_4_ = -3.4028235e+38;
        uStack_468._4_4_ = -3.4028235e+38;
        fStack_460 = -3.4028235e+38;
        uStack_45c = 0x7f7fffff;
        iVar32 = 0;
        plVar30 = (longlong *)(plStack_4a0[0x17] + 0x40);
        lVar26 = *(longlong *)(*plVar30 + 0x28);
        uVar28 = *(longlong *)(*plVar30 + 0x30) - lVar26 >> 4;
        if (uVar28 != 0) {
          lVar24 = 0;
          do {
            pfVar20 = (float *)(lVar26 + lVar24);
            fStack_378 = *pfVar20;
            fStack_374 = pfVar20[1];
            uStack_458 = *(longlong *****)pfVar20;
            fStack_370 = pfVar20[2];
            uStack_450 = *(longlong *****)(pfVar20 + 2);
            fStack_388 = fStack_378;
            if ((float)uStack_488 < fStack_378) {
              fStack_388 = (float)uStack_488;
            }
            fStack_384 = fStack_374;
            if (uStack_488._4_4_ < fStack_374) {
              fStack_384 = uStack_488._4_4_;
            }
            fStack_380 = fStack_370;
            if ((float)uStack_480 < fStack_370) {
              fStack_380 = (float)uStack_480;
            }
            uStack_488 = (longlong *******)CONCAT44(fStack_384,fStack_388);
            uStack_480 = (longlong ****)CONCAT44(uStack_37c,fStack_380);
            if (fStack_378 < (float)uStack_468) {
              fStack_378 = (float)uStack_468;
            }
            if (fStack_374 < uStack_468._4_4_) {
              fStack_374 = uStack_468._4_4_;
            }
            if (fStack_370 < fStack_460) {
              fStack_370 = fStack_460;
            }
            fStack_460 = fStack_370;
            uStack_468._0_4_ = fStack_378;
            uStack_468._4_4_ = fStack_374;
            uStack_45c = uStack_36c;
            iVar32 = iVar32 + 1;
            lVar24 = lVar24 + 0x10;
            fVar35 = (float)uStack_468;
          } while ((ulonglong)(longlong)iVar32 < uVar28);
        }
        uStack_468._0_4_ = fVar35;
        ppppppplStack_340 = uStack_488;
        pppplStack_338 = uStack_480;
        plVar29 = plStack_4a0;
        fStack_330 = (float)uStack_468;
        fStack_32c = uStack_468._4_4_;
        fStack_328 = fStack_460;
        uStack_324 = uStack_45c;
        FUN_1800b9f60(&ppppppplStack_340);
        uStack_198 = 0;
        uStack_194 = 0;
        uStack_190 = 0;
        uStack_18c = 0x3f800000;
        fVar35 = *(float *)((longlong)param_1 + 0xa4);
        if (fVar35 <= 0.01) {
          fVar35 = 0.01;
        }
        iVar32 = 1;
        if (*(char *)(param_1 + 0x15) != '\0') {
          iVar32 = -1;
        }
        fVar34 = (float)iVar32;
        fStack_1c8 = fVar34 * 1.0 + 0.0 + 0.0;
        fStack_1c4 = fVar34 * 0.0 + 0.0 + 0.0;
        fStack_1c0 = fVar34 * 0.0 + 0.0 + 0.0;
        fStack_1bc = fVar34 * 0.0 + 0.0 + 0.0;
        uStack_1b8 = 0;
        uStack_1b4 = 0x3f800000;
        uStack_1b0 = 0;
        uStack_1ac = 0;
        fStack_1a8 = fVar35 * 0.0 + 0.0;
        fStack_1a4 = fVar35 * 0.0 + 0.0;
        fStack_1a0 = fVar35 * 1.0 + 0.0;
        fStack_19c = fVar35 * 0.0 + 0.0;
        pfVar20 = (float *)FUN_18063aab0(&ppppppplStack_340,auStack_188,&fStack_1c8);
        fVar34 = *pfVar20;
        fVar42 = pfVar20[4];
        uStack_320 = *(uint64_t *)(pfVar20 + 8);
        uStack_318 = *(uint64_t *)(pfVar20 + 10);
        fStack_310 = pfVar20[0xc];
        ppppppplVar15 = (longlong *******)((longlong)puStack_3f8 - (longlong)puStack_400 >> 4);
        iVar32 = 0;
        uStack_468 = ppppppplVar15;
        if (*(longlong *)(*plVar30 + 0x30) - *(longlong *)(*plVar30 + 0x28) >> 4 != 0) {
          lVar26 = 0;
          do {
            pfVar20 = (float *)(lVar26 + *(longlong *)(*plVar30 + 0x28));
            fVar43 = *pfVar20;
            fVar44 = pfVar20[1];
            fVar45 = pfVar20[2];
            fVar39 = fVar43 * 0.0 + fVar44 * 1.0 + fVar45 * (fVar35 * 0.0 + 0.0) + 0.0;
            fVar41 = fVar43 * 0.0 + fVar44 * 0.0 + fVar45 * (fVar35 * 1.0 + 0.0) + 0.0;
            pfVar20 = (float *)FUN_180466610(param_1[0x1b],&puStack_138,
                                             ((fVar43 * 1.0 + fVar44 * 0.0 +
                                               fVar45 * (fVar35 * 0.0 + 0.0) + 0.0) - fVar34) /
                                             (fVar42 - fVar34),ppppppplVar31);
            fVar43 = pfVar20[3];
            fVar44 = pfVar20[7];
            fVar45 = pfVar20[0xb];
            fVar46 = pfVar20[0xf];
            fVar47 = *pfVar20 * 0.0 + fVar39 * pfVar20[4] + fVar41 * pfVar20[8] + pfVar20[0xc];
            fVar36 = pfVar20[1] * 0.0 + fVar39 * pfVar20[5] + fVar41 * pfVar20[9] + pfVar20[0xd];
            fVar37 = pfVar20[2] * 0.0 + fVar39 * pfVar20[6] + fVar41 * pfVar20[10] + pfVar20[0xe];
            uStack_458 = (longlong ****)CONCAT44(fVar36,fVar47);
            uStack_450 = (longlong ****)CONCAT44(uStack_450._4_4_,fVar37);
            pfVar20 = (float *)(*(longlong *)(*(longlong *)(plStack_4a0[0x17] + 0x40) + 0x28) +
                               lVar26);
            *pfVar20 = fVar47;
            pfVar20[1] = fVar36;
            pfVar20[2] = fVar37;
            pfVar20[3] = fVar43 * 0.0 + fVar39 * fVar44 + fVar41 * fVar45 + fVar46;
            iVar32 = iVar32 + 1;
            lVar26 = lVar26 + 0x10;
            plVar30 = (longlong *)(plStack_4a0[0x17] + 0x40);
            plVar29 = plStack_4a0;
          } while ((ulonglong)(longlong)iVar32 <
                   (ulonglong)(*(longlong *)(*plVar30 + 0x30) - *(longlong *)(*plVar30 + 0x28) >> 4)
                  );
        }
        iVar32 = 0;
        plVar30 = (longlong *)(plVar29[0x17] + 0x40);
        if (*(longlong *)(*plVar30 + 0x30) - *(longlong *)(*plVar30 + 0x28) >> 4 != 0) {
          lVar26 = 0;
          do {
            uStack_488 = *(longlong ********)(*plVar30 + 0x28);
            if (puStack_3f8 < puStack_3f0) {
              uVar13 = ((uint64_t *)(lVar26 + (longlong)uStack_488))[1];
              *puStack_3f8 = *(uint64_t *)(lVar26 + (longlong)uStack_488);
              puStack_3f8[1] = uVar13;
              puVar17 = puStack_3f8;
            }
            else {
              lVar24 = (longlong)puStack_3f8 - (longlong)puStack_400 >> 4;
              if (lVar24 == 0) {
                lVar24 = 1;
LAB_18036c07e:
                puVar17 = (uint64_t *)
                          FUN_18062b420(_DAT_180c8ed18,lVar24 << 4,(int8_t)uStack_3e8);
              }
              else {
                lVar24 = lVar24 * 2;
                if (lVar24 != 0) goto LAB_18036c07e;
                puVar17 = (uint64_t *)0x0;
              }
              if (puStack_400 != puStack_3f8) {
                    // WARNING: Subroutine does not return
                memmove(puVar17,puStack_400,(longlong)puStack_3f8 - (longlong)puStack_400);
              }
              uVar13 = ((uint64_t *)(lVar26 + (longlong)uStack_488))[1];
              *puVar17 = *(uint64_t *)(lVar26 + (longlong)uStack_488);
              puVar17[1] = uVar13;
              if (puStack_400 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              puStack_3f0 = puVar17 + lVar24 * 2;
              puStack_400 = puVar17;
            }
            puStack_3f8 = puVar17 + 2;
            iVar32 = iVar32 + 1;
            lVar26 = lVar26 + 0x10;
            plVar30 = (longlong *)(plStack_4a0[0x17] + 0x40);
            ppppppplVar15 = uStack_468;
          } while ((ulonglong)(longlong)iVar32 <
                   (ulonglong)(*(longlong *)(*plVar30 + 0x30) - *(longlong *)(*plVar30 + 0x28) >> 4)
                  );
        }
        uVar13 = *(uint64_t *)(_DAT_180c8aa00 + 0x28);
        if (puStack_420 < puStack_418) {
          *puStack_420 = uVar13;
          puVar17 = puStack_420;
        }
        else {
          lVar26 = (longlong)puStack_420 - (longlong)puStack_428 >> 3;
          if (lVar26 == 0) {
            lVar26 = 1;
LAB_18036c17c:
            puVar17 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,lVar26 * 8,(int8_t)uStack_410);
          }
          else {
            lVar26 = lVar26 * 2;
            if (lVar26 != 0) goto LAB_18036c17c;
            puVar17 = (uint64_t *)0x0;
          }
          if (puStack_428 != puStack_420) {
                    // WARNING: Subroutine does not return
            memmove(puVar17,puStack_428,(longlong)puStack_420 - (longlong)puStack_428);
          }
          *puVar17 = uVar13;
          if (puStack_428 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          puStack_418 = puVar17 + lVar26;
          puStack_428 = puVar17;
        }
        ppppppplVar31 = ppppppplStack_4b0;
        puStack_420 = puVar17 + 1;
        iVar32 = 0;
        plVar30 = (longlong *)(plStack_4a0[0x17] + 0x40);
        if ((*(longlong *)(*plVar30 + 0x70) - *(longlong *)(*plVar30 + 0x68)) / 0x18 != 0) {
          lVar26 = 0;
          do {
            uStack_474 = 0;
            lVar24 = *(longlong *)(*plVar30 + 0x68);
            iVar23 = (int)ppppppplVar15;
            iVar27 = *(int *)(lVar26 + 4 + lVar24) + iVar23;
            uStack_488 = (longlong *******)CONCAT44(iVar27,3);
            iVar33 = *(int *)(lVar26 + 8 + lVar24) + iVar23;
            iVar23 = *(int *)(lVar26 + 0xc + lVar24) + iVar23;
            uStack_480 = (longlong ****)CONCAT44(iVar23,iVar33);
            uStack_444 = 0;
            uStack_458 = (longlong ****)CONCAT44(iVar27,3);
            uStack_450 = (longlong ****)CONCAT44(iVar33,iVar23);
            if (*(char *)(ppppppplVar31 + 0x15) == '\0') {
              if (ppppplStack_3b8 < ppppplStack_3b0) {
                *ppppplStack_3b8 = (longlong ****)uStack_488;
                ppppplStack_3b8[1] = uStack_480;
                ppppplStack_3b8[2] = (longlong ****)(ulonglong)uStack_478;
                ppppplStack_3b8 = ppppplStack_3b8 + 3;
                goto LAB_18036c470;
              }
              lVar24 = ((longlong)ppppplStack_3b8 - (longlong)ppppplStack_3c0) / 0x18;
              if (lVar24 == 0) {
                lVar24 = 1;
LAB_18036c3f5:
                ppppplVar22 = (longlong *****)
                              FUN_18062b420(_DAT_180c8ed18,lVar24 * 0x18,(int8_t)uStack_3a8);
              }
              else {
                lVar24 = lVar24 * 2;
                if (lVar24 != 0) goto LAB_18036c3f5;
                ppppplVar22 = (longlong *****)0x0;
              }
              ppppplVar21 = (longlong *****)
                            FUN_180082a50(ppppplStack_3c0,ppppplStack_3b8,ppppplVar22);
              *ppppplVar21 = (longlong ****)uStack_488;
              ppppplVar21[1] = uStack_480;
              ppppplVar21[2] = (longlong ****)CONCAT44(uStack_474,uStack_478);
              ppppppplVar15 = uStack_468;
joined_r0x00018036c444:
              uStack_468 = ppppppplVar15;
              if (ppppplStack_3c0 != (longlong *****)0x0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              ppppplStack_3b0 = ppppplVar22 + lVar24 * 3;
              ppppplStack_3c0 = ppppplVar22;
              ppppplStack_3b8 = ppppplVar21 + 3;
            }
            else {
              if (ppppplStack_3b0 <= ppppplStack_3b8) {
                lVar24 = ((longlong)ppppplStack_3b8 - (longlong)ppppplStack_3c0) / 0x18;
                if (lVar24 == 0) {
                  lVar24 = 1;
LAB_18036c2fc:
                  ppppplVar21 = (longlong *****)
                                FUN_18062b420(_DAT_180c8ed18,lVar24 * 0x18,(int8_t)uStack_3a8);
                }
                else {
                  lVar24 = lVar24 * 2;
                  if (lVar24 != 0) goto LAB_18036c2fc;
                  ppppplVar21 = (longlong *****)0x0;
                }
                if (ppppplStack_3c0 != ppppplStack_3b8) {
                    // WARNING: Subroutine does not return
                  memmove(ppppplVar21,ppppplStack_3c0,
                          (longlong)ppppplStack_3b8 - (longlong)ppppplStack_3c0);
                }
                *ppppplVar21 = uStack_458;
                ppppplVar21[1] = uStack_450;
                ppppplVar21[2] = (longlong ****)CONCAT44(uStack_444,uStack_448);
                ppppplVar22 = ppppplVar21;
                ppppppplVar15 = uStack_468;
                goto joined_r0x00018036c444;
              }
              *ppppplStack_3b8 = uStack_458;
              ppppplStack_3b8[1] = uStack_450;
              ppppplStack_3b8[2] = (longlong ****)(ulonglong)uStack_448;
              ppppplStack_3b8 = ppppplStack_3b8 + 3;
            }
LAB_18036c470:
            iVar32 = iVar32 + 1;
            lVar26 = lVar26 + 0x18;
            plVar30 = (longlong *)(plStack_4a0[0x17] + 0x40);
          } while ((ulonglong)(longlong)iVar32 <
                   (ulonglong)
                   ((*(longlong *)(*plVar30 + 0x70) - *(longlong *)(*plVar30 + 0x68)) / 0x18));
        }
        if (plStack_4a0 != (longlong *)0x0) {
          (**(code **)(*plStack_4a0 + 0x38))();
        }
        uStack_4b8 = uStack_4b8 + 1;
        ppppppplVar31 = (longlong *******)(ulonglong)uStack_4b8;
        ppppppplVar15 = ppppppplStack_4c0;
        ppppppplVar16 = ppppppplStack_4c8;
        ppppppplVar18 = ppppppplStack_438;
        ppppppplVar19 = ppppppplStack_498;
        param_1 = ppppppplStack_4b0;
      } while ((int)uStack_4b8 < (int)uStack_398);
    }
    FUN_18014c430(&puStack_428);
    if (system_data_aa6b != '\0') {
      FUN_180075b70(ppppppplVar15);
      cVar12 = FUN_180084fa0(ppppppplVar15 + 0x24);
      func_0x0001800773c0(ppppppplVar15,cVar12 != '\0');
      uStack_488 = (longlong *******)&ppppppplStack_4c0;
      ppppppplStack_4c0 = ppppppplVar15;
      if (ppppppplVar15 != (longlong *******)0x0) {
        (*(code *)(*ppppppplVar15)[5])(ppppppplVar15);
      }
      FUN_180275cf0(ppppppplVar19,0,&ppppppplStack_4c0,1);
      ppppppplVar16 = ppppppplStack_438;
      ppppppplVar31 = ppppppplStack_4c8;
      if (ppppppplStack_4c8 != (longlong *******)0x0) {
        FUN_18007f840(ppppppplStack_4c8);
                    // WARNING: Subroutine does not return
        FUN_18064e900(ppppppplVar31);
      }
      if (ppppppplStack_438 != (longlong *******)0x0) {
        FUN_18022f410(ppppppplStack_438);
                    // WARNING: Subroutine does not return
        FUN_18064e900(ppppppplVar16);
      }
      FUN_180276f30(ppppppplVar19,(longlong)ppppppplVar19 + 0x214,1);
    }
    FUN_1802e9fa0(param_1[0x1d],1,1);
    if (*(char *)(param_1 + 0x1e) != '\0') {
      pppppplVar14 = param_1[0x1d];
      uStack_488 = (longlong *******)&ppppppplStack_4b0;
      ppppppplStack_4b0 = ppppppplVar19;
      if (ppppppplVar19 != (longlong *******)0x0) {
        (*(code *)(*ppppppplVar19)[5])(ppppppplVar19);
      }
      ppppppplStack_4c0 = (longlong *******)&ppppppplStack_4b0;
      FUN_1802edcd0(pppppplVar14,ppppppplStack_4b0,1);
      if (ppppppplStack_4b0 != (longlong *******)0x0) {
        (*(code *)(*ppppppplStack_4b0)[7])();
      }
    }
    FUN_1802eec60(param_1[0x1d]);
    FUN_1802e7dc0(param_1[0x1d]);
    ppppppplVar31 = ppppppplStack_368;
    if (ppppppplStack_368[0x17] == (longlong ******)0x0) {
      uVar13 = FUN_18062b1e0(_DAT_180c8ed18,0x130,8,6);
                    // WARNING: Subroutine does not return
      memset(uVar13,0,0x130);
    }
    FUN_1801b9c70(ppppppplStack_368[0x17] + 8,&puStack_428);
    iVar32 = *(int *)(param_1 + 0x18);
    if ((iVar32 == 10) && (iVar23 = strcmp(param_1[0x17],&system_data_0f30), iVar23 == 0)) {
      uStack_290 = 0x200;
    }
    else if ((iVar32 == 0xb) && (iVar23 = strcmp(param_1[0x17],&system_data_0f20), iVar23 == 0)) {
      uStack_290 = 0x200200;
    }
    else if ((iVar32 == 0xe) && (iVar23 = strcmp(param_1[0x17],&system_data_0e58), iVar23 == 0)) {
      uStack_290 = 0x200300;
    }
    else if ((iVar32 == 0x16) && (iVar32 = strcmp(param_1[0x17],&system_data_0f08), iVar32 == 0)) {
      uStack_290 = 0x400200;
    }
    FUN_1802eced0(param_1[0x1d],appppppplStack_2c8);
    if (plStack_390 != (longlong *)0x0) {
      (**(code **)(*plStack_390 + 0x38))();
    }
    if (ppppppplVar19 != (longlong *******)0x0) {
      (*(code *)(*ppppppplVar19)[7])(ppppppplVar19);
    }
    if (ppppppplVar15 != (longlong *******)0x0) {
      (*(code *)(*ppppppplVar15)[7])(ppppppplVar15);
    }
    FUN_18014c7d0(&puStack_428);
    FUN_1802e6f20(appppppplStack_2c8);
    (*(code *)(*ppppppplVar31)[7])(ppppppplVar31);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_d8 ^ (ulonglong)auStack_4f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





