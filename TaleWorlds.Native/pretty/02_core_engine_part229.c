#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part229.c - 1 个函数

// 函数: void FUN_18019fc10(longlong param_1,float *param_2,float *param_3,int param_4,longlong *param_5,
void FUN_18019fc10(longlong param_1,float *param_2,float *param_3,int param_4,longlong *param_5,
                  int32_t param_6)

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
  float fVar11;
  int iVar12;
  int32_t uVar13;
  longlong lVar14;
  float *pfVar15;
  longlong lVar16;
  uint *puVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  longlong lVar22;
  char cVar23;
  ulonglong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  int8_t auStack_498 [32];
  char *pcStack_478;
  int iStack_470;
  longlong lStack_468;
  char cStack_460;
  int8_t *puStack_458;
  int iStack_448;
  int8_t uStack_444;
  char acStack_443 [3];
  int iStack_440;
  longlong lStack_438;
  longlong lStack_430;
  uint64_t uStack_428;
  float fStack_420;
  float fStack_41c;
  uint64_t uStack_418;
  float fStack_410;
  float fStack_40c;
  float fStack_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float fStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  int32_t uStack_3ec;
  float fStack_3e8;
  float fStack_3e4;
  float fStack_3e0;
  int32_t uStack_3dc;
  float fStack_3d8;
  float fStack_3d4;
  float fStack_3d0;
  int32_t uStack_3cc;
  float fStack_3c8;
  float fStack_3c4;
  float fStack_3c0;
  int32_t uStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  int32_t uStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  int32_t uStack_39c;
  float fStack_398;
  float fStack_394;
  float fStack_390;
  int32_t uStack_38c;
  float fStack_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float fStack_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  float fStack_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  float fStack_320;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_308;
  int32_t uStack_304;
  int32_t uStack_300;
  int32_t uStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  longlong *plStack_2e8;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  int32_t uStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  int32_t uStack_2b4;
  int32_t uStack_2b0;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  int32_t uStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  uint64_t uStack_288;
  uint64_t uStack_280;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  uint uStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  int32_t uStack_24c;
  float fStack_248;
  int32_t uStack_244;
  int32_t uStack_240;
  int32_t uStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  int32_t uStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  int32_t uStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  int32_t uStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  int8_t auStack_1b8 [16];
  int8_t auStack_1a8 [16];
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  int32_t uStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  int32_t uStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  int32_t uStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  uint uStack_11c;
  uint64_t uStack_118;
  uint64_t uStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  uint uStack_fc;
  ulonglong uStack_f8;
  ulonglong uVar21;
  
  uStack_f8 = _DAT_180bf00a8 ^ (ulonglong)auStack_498;
  plStack_2e8 = param_5;
  lVar14 = *param_5;
  uStack_444 = 0;
  iStack_440 = 0;
  iStack_448 = param_4;
  lStack_438 = param_1;
  if (param_5[1] - lVar14 >> 3 != 0) {
    uStack_428 = 0;
    do {
      lVar14 = *(longlong *)(lVar14 + uStack_428);
      uStack_418 = *(longlong *)(lVar14 + 0x260);
      lVar16 = uStack_428;
      if (*(longlong *)(lVar14 + 0x20) != 0) {
        iVar19 = iStack_448;
        if ((uStack_418 != 0) && (*(char *)(*(longlong *)(uStack_418 + 0x208) + 0x1b0) == '\x02')) {
          pfVar15 = *(float **)(lVar14 + 0x28);
          fVar25 = *param_2;
          if ((*pfVar15 <= fVar25) &&
             ((((fVar25 < pfVar15[4] || fVar25 == pfVar15[4] &&
                (fVar25 = param_2[1], pfVar15[1] <= fVar25)) &&
               (fVar25 < pfVar15[5] || fVar25 == pfVar15[5])) &&
              ((fVar25 = param_2[2], pfVar15[2] <= fVar25 &&
               (fVar25 < pfVar15[6] || fVar25 == pfVar15[6])))))) {
            cVar23 = '\0';
            lVar16 = lStack_438;
            if ('\0' < *(char *)(uStack_418 + 0x20)) {
              do {
                lVar18 = (longlong)cVar23 * 0x100 + *(longlong *)(uStack_418 + 0x18);
                iVar19 = 0;
                if (*(longlong *)(lVar18 + 0xb8) - *(longlong *)(lVar18 + 0xb0) >> 3 != 0) {
                  lStack_430 = lVar16 + 0x3fb8;
                  lVar22 = 0;
                  iVar12 = param_4;
                  do {
                    iStack_470 = iVar12;
                    puStack_458 = &uStack_444;
                    plVar3 = *(longlong **)(lVar22 + *(longlong *)(lVar18 + 0xb0));
                    pcStack_478 = (char *)CONCAT44(pcStack_478._4_4_,0x10);
                    lStack_468 = lVar14;
                    cStack_460 = cVar23;
                    (**(code **)(*plVar3 + 0x208))(plVar3,lStack_430,param_2,param_3);
                    lVar22 = lVar22 + 8;
                    iVar19 = iVar19 + 1;
                    lVar16 = lStack_438;
                    iVar12 = iStack_448;
                    param_4 = iStack_448;
                  } while ((ulonglong)(longlong)iVar19 <
                           (ulonglong)
                           (*(longlong *)(lVar18 + 0xb8) - *(longlong *)(lVar18 + 0xb0) >> 3));
                }
                cVar23 = cVar23 + '\x01';
              } while (cVar23 < *(char *)(uStack_418 + 0x20));
            }
            iVar19 = iStack_448;
            lVar16 = *(longlong *)(lVar14 + 0xf0);
            if (*(longlong *)(lVar14 + 0xf8) - lVar16 >> 3 != 0) {
              uVar21 = 0;
              uVar24 = uVar21;
              do {
                plVar3 = *(longlong **)(lVar16 + uVar24);
                iVar12 = (**(code **)(*plVar3 + 0x98))(plVar3);
                if ((iVar12 == 0) && ((int)plVar3[0x42] != 0)) {
                  if (*(code **)(*plVar3 + 0x158) == (code *)&UNK_18027d980) {
                    pfVar15 = (float *)(plVar3 + 0x66);
                  }
                  else {
                    pfVar15 = (float *)(**(code **)(*plVar3 + 0x158))(plVar3);
                  }
                  fVar29 = *(float *)(lVar14 + 0x80);
                  fVar30 = *(float *)(lVar14 + 0x84);
                  fVar31 = *(float *)(lVar14 + 0x88);
                  fVar32 = *(float *)(lVar14 + 0x8c);
                  fVar4 = *(float *)(lVar14 + 0x90);
                  fVar5 = *(float *)(lVar14 + 0x94);
                  fVar6 = *(float *)(lVar14 + 0x98);
                  fVar7 = *(float *)(lVar14 + 0x9c);
                  fVar8 = *(float *)(lVar14 + 0x70);
                  fVar9 = *(float *)(lVar14 + 0x74);
                  fVar10 = *(float *)(lVar14 + 0x78);
                  fVar11 = *(float *)(lVar14 + 0x7c);
                  fVar25 = pfVar15[1];
                  fVar26 = *pfVar15;
                  fVar27 = pfVar15[2];
                  fVar28 = pfVar15[5];
                  fVar1 = pfVar15[9];
                  fVar33 = pfVar15[0xd];
                  fVar2 = pfVar15[4];
                  fStack_198 = fVar25 * fVar29 + fVar26 * fVar8 + fVar27 * fVar4;
                  fStack_194 = fVar25 * fVar30 + fVar26 * fVar9 + fVar27 * fVar5;
                  fStack_190 = fVar25 * fVar31 + fVar26 * fVar10 + fVar27 * fVar6;
                  fStack_18c = fVar25 * fVar32 + fVar26 * fVar11 + fVar27 * fVar7;
                  fVar25 = pfVar15[6];
                  fVar26 = pfVar15[8];
                  fStack_188 = fVar28 * fVar29 + fVar2 * fVar8 + fVar25 * fVar4;
                  fStack_184 = fVar28 * fVar30 + fVar2 * fVar9 + fVar25 * fVar5;
                  fStack_180 = fVar28 * fVar31 + fVar2 * fVar10 + fVar25 * fVar6;
                  fStack_17c = fVar28 * fVar32 + fVar2 * fVar11 + fVar25 * fVar7;
                  fVar25 = pfVar15[10];
                  fVar27 = pfVar15[0xc];
                  fStack_178 = fVar1 * fVar29 + fVar26 * fVar8 + fVar25 * fVar4;
                  fStack_174 = fVar1 * fVar30 + fVar26 * fVar9 + fVar25 * fVar5;
                  fStack_170 = fVar1 * fVar31 + fVar26 * fVar10 + fVar25 * fVar6;
                  fStack_16c = fVar1 * fVar32 + fVar26 * fVar11 + fVar25 * fVar7;
                  fVar25 = pfVar15[0xe];
                  fStack_168 = fVar33 * fVar29 + fVar27 * fVar8 + fVar25 * fVar4 +
                               *(float *)(lVar14 + 0xa0);
                  fStack_164 = fVar33 * fVar30 + fVar27 * fVar9 + fVar25 * fVar5 +
                               *(float *)(lVar14 + 0xa4);
                  fStack_160 = fVar33 * fVar31 + fVar27 * fVar10 + fVar25 * fVar6 +
                               *(float *)(lVar14 + 0xa8);
                  fStack_15c = fVar33 * fVar32 + fVar27 * fVar11 + fVar25 * fVar7 +
                               *(float *)(lVar14 + 0xac);
                  fVar28 = *param_2 - fStack_168;
                  fVar25 = param_2[1] - fStack_164;
                  fVar27 = param_2[2] - fStack_160;
                  fVar26 = *param_3 - fStack_168;
                  fStack_348 = fVar28 * fStack_198 + fVar25 * fStack_194 + fVar27 * fStack_190;
                  fStack_344 = fVar28 * fStack_188 + fVar25 * fStack_184 + fVar27 * fStack_180;
                  fStack_340 = fVar28 * fStack_178 + fVar25 * fStack_174 + fVar27 * fStack_170;
                  fStack_33c = fVar28 * fStack_16c + fVar25 * fStack_16c + fVar27 * fStack_16c;
                  fVar27 = param_3[1] - fStack_164;
                  lVar16 = *(longlong *)(lVar14 + 0x20);
                  fVar25 = param_3[2] - fStack_160;
                  fStack_2e0 = fVar27 * fStack_194 + fVar26 * fStack_198 + fVar25 * fStack_190;
                  fStack_2dc = fVar27 * fStack_184 + fVar26 * fStack_188 + fVar25 * fStack_180;
                  fStack_2d8 = fVar27 * fStack_174 + fVar26 * fStack_178 + fVar25 * fStack_170;
                  fStack_2d4 = fVar27 * fStack_16c + fVar26 * fStack_16c + fVar25 * fStack_16c;
                  if ((int)plVar3[99] == -1) {
                    *(int32_t *)((longlong)plVar3 + 0x314) = 0x10;
                    uVar13 = FUN_1801b9a40(lVar16 + 0x51d0,0x10);
                    *(int32_t *)(plVar3 + 99) = uVar13;
                    LOCK();
                    *(int32_t *)(plVar3 + 0x62) = 0;
                    UNLOCK();
                    lVar16 = *(longlong *)(lVar14 + 0x20);
                  }
                  fStack_32c = (float)iVar19;
                  fStack_3f8 = fStack_348;
                  fStack_3f4 = fStack_344;
                  fStack_3f0 = fStack_340;
                  uStack_3ec = 0x3e800000;
                  fStack_2a8 = fStack_348;
                  fStack_2a4 = fStack_344;
                  fStack_2a0 = fStack_340;
                  uStack_29c = 0x3e800000;
                  fStack_338 = fStack_2e0;
                  fStack_334 = fStack_2dc;
                  fStack_330 = fStack_2d8;
                  fStack_298 = fStack_2e0;
                  fStack_294 = fStack_2dc;
                  fStack_290 = fStack_2d8;
                  fStack_28c = fStack_32c;
                  FUN_18020a7b0(plVar3 + 0x61,lVar16 + 0x3fb8,&fStack_2a8);
                }
                lVar16 = *(longlong *)(lVar14 + 0xf0);
                uVar20 = (int)uVar21 + 1;
                uVar21 = (ulonglong)uVar20;
                uVar24 = uVar24 + 8;
              } while ((ulonglong)(longlong)(int)uVar20 <
                       (ulonglong)(*(longlong *)(lVar14 + 0xf8) - lVar16 >> 3));
            }
          }
        }
        lVar18 = uStack_418;
        lVar16 = uStack_428;
        fStack_3d0 = param_2[2] + param_3[2] * 0.2;
        uStack_2b0 = 0x3d4ccccd;
        fStack_3e8 = *param_2 - *param_3 * 0.2;
        fStack_3e0 = param_2[2] - param_3[2] * 0.2;
        fStack_3d8 = *param_2 + *param_3 * 0.2;
        fStack_3d4 = param_2[1] + param_3[1] * 0.2;
        fStack_3e4 = param_2[1] - param_3[1] * 0.2;
        uStack_3dc = 0x7f7fffff;
        uStack_3cc = 0x7f7fffff;
        uStack_2b4 = 0x7f7fffff;
        uStack_2c4 = 0x7f7fffff;
        fStack_2d0 = fStack_3e8;
        fStack_2cc = fStack_3e4;
        fStack_2c8 = fStack_3e0;
        fStack_2c0 = fStack_3d8;
        fStack_2bc = fStack_3d4;
        fStack_2b8 = fStack_3d0;
        param_4 = iStack_448;
        if (uStack_418 != 0) {
          pcStack_478 = acStack_443;
          cVar23 = FUN_1802edfe0(lVar14,&fStack_2d0,&fStack_328,auStack_1b8);
          param_4 = iStack_448;
          if (cVar23 != '\0') {
            lVar22 = (longlong)acStack_443[0];
            puVar17 = (uint *)(lVar22 * 0x100 + *(longlong *)(lVar18 + 0x18));
            do {
              LOCK();
              uVar20 = *puVar17;
              *puVar17 = *puVar17 | 1;
              UNLOCK();
            } while ((uVar20 & 1) != 0);
            uStack_288 = *(uint64_t *)(puVar17 + 1);
            uStack_280 = *(uint64_t *)(puVar17 + 3);
            fVar25 = (float)puVar17[5];
            fVar26 = (float)puVar17[6];
            fVar27 = (float)puVar17[7];
            uVar20 = puVar17[8];
            *puVar17 = 0;
            fStack_278 = fVar25;
            fStack_274 = fVar26;
            fStack_270 = fVar27;
            uStack_26c = uVar20;
            uStack_118 = uStack_288;
            uStack_110 = uStack_280;
            fStack_108 = fVar25;
            fStack_104 = fVar26;
            fStack_100 = fVar27;
            uStack_fc = uVar20;
            FUN_18063b5f0(&fStack_228,&uStack_288);
            fVar28 = *(float *)(lVar14 + 0x70);
            fVar1 = *(float *)(lVar14 + 0x74);
            fVar33 = *(float *)(lVar14 + 0x78);
            fVar2 = *(float *)(lVar14 + 0x7c);
            fVar29 = *(float *)(lVar14 + 0x80);
            fVar30 = *(float *)(lVar14 + 0x84);
            fVar31 = *(float *)(lVar14 + 0x88);
            fVar32 = *(float *)(lVar14 + 0x8c);
            fVar4 = *(float *)(lVar14 + 0x90);
            fVar5 = *(float *)(lVar14 + 0x94);
            fVar6 = *(float *)(lVar14 + 0x98);
            fVar7 = *(float *)(lVar14 + 0x9c);
            fStack_158 = fStack_228;
            fStack_154 = fStack_224;
            fStack_150 = fStack_220;
            uStack_14c = uStack_21c;
            fStack_148 = fStack_218;
            fStack_144 = fStack_214;
            fStack_140 = fStack_210;
            uStack_13c = uStack_20c;
            fStack_138 = fStack_208;
            fStack_134 = fStack_204;
            fStack_130 = fStack_200;
            uStack_12c = uStack_1fc;
            fStack_3c8 = fStack_228 * fVar28 + fStack_224 * fVar29 + fStack_220 * fVar4;
            fStack_3c4 = fStack_228 * fVar1 + fStack_224 * fVar30 + fStack_220 * fVar5;
            fStack_3c0 = fStack_228 * fVar33 + fStack_224 * fVar31 + fStack_220 * fVar6;
            fStack_1ec = fStack_228 * fVar2 + fStack_224 * fVar32 + fStack_220 * fVar7;
            fStack_3b8 = fStack_218 * fVar28 + fStack_214 * fVar29 + fStack_210 * fVar4;
            fStack_3b4 = fStack_218 * fVar1 + fStack_214 * fVar30 + fStack_210 * fVar5;
            fStack_3b0 = fStack_218 * fVar33 + fStack_214 * fVar31 + fStack_210 * fVar6;
            fStack_1dc = fStack_218 * fVar2 + fStack_214 * fVar32 + fStack_210 * fVar7;
            fStack_3a8 = fStack_208 * fVar28 + fStack_204 * fVar29 + fStack_200 * fVar4;
            fStack_3a4 = fStack_208 * fVar1 + fStack_204 * fVar30 + fStack_200 * fVar5;
            fStack_3a0 = fStack_208 * fVar33 + fStack_204 * fVar31 + fStack_200 * fVar6;
            fStack_1cc = fStack_208 * fVar2 + fStack_204 * fVar32 + fStack_200 * fVar7;
            fStack_398 = fVar25 * fVar28 + fVar26 * fVar29 + fVar27 * fVar4 +
                         *(float *)(lVar14 + 0xa0);
            fStack_394 = fVar25 * fVar1 + fVar26 * fVar30 + fVar27 * fVar5 +
                         *(float *)(lVar14 + 0xa4);
            fStack_390 = fVar25 * fVar33 + fVar26 * fVar31 + fVar27 * fVar6 +
                         *(float *)(lVar14 + 0xa8);
            fStack_1bc = fVar25 * fVar2 + fVar26 * fVar32 + fVar27 * fVar7 +
                         *(float *)(lVar14 + 0xac);
            uStack_3bc = 0;
            uStack_3ac = 0;
            uStack_39c = 0;
            uStack_38c = 0x3f800000;
            fStack_1f8 = fStack_3c8;
            fStack_1f4 = fStack_3c4;
            fStack_1f0 = fStack_3c0;
            fStack_1e8 = fStack_3b8;
            fStack_1e4 = fStack_3b4;
            fStack_1e0 = fStack_3b0;
            fStack_1d8 = fStack_3a8;
            fStack_1d4 = fStack_3a4;
            fStack_1d0 = fStack_3a0;
            fStack_1c8 = fStack_398;
            fStack_1c4 = fStack_394;
            fStack_1c0 = fStack_390;
            fStack_128 = fVar25;
            fStack_124 = fVar26;
            fStack_120 = fVar27;
            uStack_11c = uVar20;
            FUN_180084760(&fStack_3c8,&fStack_388);
            fStack_408 = fStack_328 * fStack_388 + fStack_324 * fStack_378 + fStack_320 * fStack_368
                         + fStack_358;
            fStack_404 = fStack_328 * fStack_384 + fStack_324 * fStack_374 + fStack_320 * fStack_364
                         + fStack_354;
            fStack_400 = fStack_328 * fStack_380 + fStack_324 * fStack_370 + fStack_320 * fStack_360
                         + fStack_350;
            fStack_3fc = fStack_328 * fStack_37c + fStack_324 * fStack_36c + fStack_320 * fStack_35c
                         + fStack_34c;
            FUN_1801c1140(&fStack_1f8,&fStack_318,param_3);
            lVar14 = lVar22 * 0x1b0 + *(longlong *)(*(longlong *)(lVar18 + 0x208) + 0x140);
            fVar25 = *(float *)(lVar14 + 0x30);
            fVar26 = *(float *)(lVar14 + 0x34);
            fVar27 = *(float *)(lVar14 + 0x38);
            uStack_24c = *(int32_t *)(lVar14 + 0x3c);
            fVar28 = *(float *)(lVar14 + 0x40);
            fVar1 = *(float *)(lVar14 + 0x44);
            fVar33 = *(float *)(lVar14 + 0x48);
            fVar2 = *(float *)(lVar14 + 0x4c);
            fStack_268 = fVar28;
            fStack_264 = fVar1;
            fStack_260 = fVar33;
            fStack_25c = fVar2;
            fStack_258 = fVar25;
            fStack_254 = fVar26;
            fStack_250 = fVar27;
            pfVar15 = (float *)FUN_1801c0fb0(&fStack_268,auStack_1a8,&fStack_408);
            lVar14 = lStack_438;
            fVar25 = fVar25 + *pfVar15;
            uStack_418 = CONCAT44(fVar26,fVar26 + pfVar15[1]);
            fVar30 = fStack_310 * fVar33 - fStack_314 * fVar2;
            uStack_428 = CONCAT44(fVar27,fVar27 + pfVar15[2]);
            fVar30 = fVar30 + fVar30;
            fVar32 = fStack_318 * fVar2 - fStack_310 * fVar1;
            fVar29 = fStack_314 * fVar1 - fStack_318 * fVar33;
            fVar32 = fVar32 + fVar32;
            fVar29 = fVar29 + fVar29;
            fVar31 = fVar30 * fVar28 + fStack_318 + (fVar29 * fVar33 - fVar32 * fVar2);
            fVar33 = (fVar32 * fVar1 - fVar30 * fVar33) + fVar29 * fVar28 + fStack_310;
            fVar28 = (fVar30 * fVar2 - fVar29 * fVar1) + fVar32 * fVar28 + fStack_314;
            fStack_420 = fVar27;
            fStack_41c = fVar27;
            fStack_410 = fVar26;
            fStack_40c = fVar26;
            if (*(int *)(lVar18 + 0x170) == -1) {
              *(int32_t *)(lVar18 + 0x16c) = 0x10;
              uVar13 = FUN_1801b9a40(lStack_438 + 0x51d0,0x10);
              *(int32_t *)(lVar18 + 0x170) = uVar13;
              LOCK();
              *(int32_t *)(lVar18 + 0x168) = 0;
              UNLOCK();
            }
            fStack_2ec = (float)iVar19;
            uStack_304 = (int32_t)uStack_418;
            uStack_300 = (int32_t)uStack_428;
            uStack_2fc = param_6;
            uStack_244 = (int32_t)uStack_418;
            uStack_240 = (int32_t)uStack_428;
            uStack_23c = param_6;
            fStack_308 = fVar25;
            fStack_2f8 = fVar31;
            fStack_2f4 = fVar28;
            fStack_2f0 = fVar33;
            fStack_248 = fVar25;
            fStack_238 = fVar31;
            fStack_234 = fVar28;
            fStack_230 = fVar33;
            fStack_22c = fStack_2ec;
            FUN_18020a7b0(lVar18 + 0x160,lVar14 + 0x3fb8,&fStack_248);
            param_4 = iStack_448;
          }
        }
      }
      uStack_428 = lVar16 + 8;
      iStack_440 = iStack_440 + 1;
      lVar14 = *plStack_2e8;
    } while ((ulonglong)(longlong)iStack_440 < (ulonglong)(plStack_2e8[1] - lVar14 >> 3));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_f8 ^ (ulonglong)auStack_498);
}





