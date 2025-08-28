#include "TaleWorlds.Native.Split.h"

// 03_rendering_part182.c - 1 个函数

// 函数: void FUN_180376ab0(uint64_t param_1,longlong param_2,int *param_3,longlong param_4,int param_5)
void FUN_180376ab0(uint64_t param_1,longlong param_2,int *param_3,longlong param_4,int param_5)

{
  longlong *plVar1;
  ushort uVar2;
  uint *puVar3;
  int8_t auVar4 [16];
  int8_t auVar5 [16];
  uint64_t uVar6;
  uint64_t uVar7;
  float fVar8;
  bool bVar9;
  uint64_t uVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  uint **ppuVar14;
  float *pfVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  void *puVar21;
  uint uVar22;
  uint64_t *puVar23;
  int iVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  void *puVar29;
  char cVar30;
  uint uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  int8_t auVar37 [16];
  int8_t auVar38 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  int8_t auStack_3e8 [32];
  float *pfStack_3c8;
  float *pfStack_3c0;
  uint64_t uStack_3b8;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float fStack_398;
  uint64_t uStack_388;
  uint64_t uStack_380;
  uint64_t uStack_378;
  uint64_t uStack_370;
  uint64_t uStack_368;
  uint64_t uStack_360;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  int32_t uStack_34c;
  float fStack_348;
  uint64_t *puStack_340;
  uint64_t uStack_338;
  float fStack_330;
  int32_t uStack_32c;
  longlong lStack_328;
  uint uStack_320;
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  uint uStack_30c;
  longlong lStack_308;
  uint uStack_300;
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  uint uStack_2e0;
  int iStack_2dc;
  float fStack_2d8;
  int iStack_2d4;
  longlong lStack_2d0;
  longlong lStack_2c8;
  int iStack_2c0;
  float fStack_2b8;
  float fStack_2b4;
  uint64_t uStack_2a8;
  float fStack_298;
  float fStack_290;
  float fStack_28c;
  longlong *plStack_288;
  longlong *plStack_280;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  int32_t uStack_268;
  int32_t uStack_264;
  float fStack_260;
  float fStack_25c;
  int32_t uStack_258;
  int32_t uStack_254;
  float fStack_248;
  float fStack_244;
  int32_t uStack_240;
  int32_t uStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  int32_t uStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  int32_t uStack_21c;
  uint64_t *puStack_1d8;
  uint64_t uStack_1d0;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  uint64_t uStack_1b8;
  uint64_t uStack_1b0;
  uint64_t uStack_1a8;
  uint64_t uStack_1a0;
  uint64_t uStack_198;
  uint64_t uStack_190;
  uint *puStack_188;
  longlong lStack_180;
  uint *puStack_178;
  longlong lStack_170;
  int8_t auStack_130 [16];
  int8_t auStack_120 [16];
  int8_t auStack_110 [16];
  int aiStack_100 [6];
  ulonglong uStack_e8;
  
  uStack_e8 = _DAT_180bf00a8 ^ (ulonglong)auStack_3e8;
  lVar18 = *(longlong *)(param_4 + 0x68);
  iVar13 = *param_3;
  iVar24 = *(int *)(lVar18 + 0x3054);
  lStack_308 = param_4;
  if (iVar13 != 0) {
    uStack_1d0 = FUN_1801b4a60(lVar18);
    if (iVar13 < 0) {
      iVar13 = 0;
    }
    else {
      lVar16 = *(longlong *)(_DAT_180c86978 + 0xd0) - *(longlong *)(_DAT_180c86978 + 200) >> 3;
      if (iVar13 == lVar16) {
        iVar13 = (int)lVar16 + -1;
      }
    }
    fStack_348 = 0.0;
    fStack_314 = 0.0;
    lVar16 = *(longlong *)(*(longlong *)(_DAT_180c86978 + 200) + (longlong)iVar13 * 8);
    lStack_2c8 = *(longlong *)(lVar16 + 0x68 + (longlong)iVar24 * 8);
    *(int *)(param_2 + 0x50) = *param_3;
    fVar41 = (float)param_3[1];
    fStack_310 = (float)param_3[3];
    if (0.0 < fVar41) {
      uVar12 = param_3[2] ^ 0x41c64e6dU ^ (param_3[2] ^ 0x41c64e6dU) << 0xd;
      uVar12 = uVar12 ^ uVar12 >> 0x11;
      uVar12 = uVar12 ^ uVar12 << 5;
      fStack_348 = (float)(uVar12 - 1) * 1.1641532e-08 + 50.0;
      if (0.0 < fStack_310) {
        fStack_348 = fStack_310;
      }
      if (0.0 < (float)param_3[4]) {
        fStack_314 = (float)param_3[4];
      }
      uVar12 = uVar12 ^ uVar12 << 0xd;
      uVar12 = uVar12 ^ uVar12 >> 0x11;
      fVar41 = ((float)((uVar12 ^ uVar12 << 5) - 1) * 1.1641532e-10 + 0.5) * fVar41;
    }
    fVar43 = fStack_348;
    plStack_280 = (longlong *)(param_2 + 0x80);
    plVar1 = (longlong *)(param_2 + 0xa8);
    *(longlong *)(param_2 + 0x88) = *plStack_280;
    puVar23 = (uint64_t *)(param_2 + 0xd0);
    *(longlong *)(param_2 + 0xb0) = *plVar1;
    *(uint64_t *)(param_2 + 0xd8) = *puVar23;
    lStack_328 = lVar16;
    plStack_288 = plVar1;
    puStack_1d8 = puVar23;
    FUN_18037ee20();
    if ((*(uint *)(lVar16 + 0x60) & 0x400000) != 0) {
      FUN_18037ee20(plVar1);
      FUN_18014e8b0(puVar23);
    }
    if (0.001 <= fVar41) {
      if (0.0 < (float)param_3[3]) {
        fVar43 = 75.0;
      }
      fStack_3ac = fVar43 / fVar41;
      if ((*(uint *)(lVar16 + 0x60) >> 0x16 & 1) == 0) {
        if (fStack_3ac < 0.5) {
          fStack_3ac = 0.5;
        }
        else if (100.0 <= fStack_3ac) {
          fStack_3ac = 100.0;
        }
      }
      else {
        fVar41 = 2.0;
        if ((2.0 <= fStack_3ac) && (fVar41 = fStack_3ac, 100.0 <= fStack_3ac)) {
          fVar41 = 100.0;
        }
        fStack_3ac = fVar41;
        if ((int)*(uint *)(lVar16 + 0x60) < 0) {
          if (*(int *)(_DAT_180c86920 + 0xe0) == 0) {
            fVar43 = 0.2;
          }
          else {
            fVar43 = 0.08;
          }
          fStack_3ac = fVar41 * ((float)param_3[10] + (float)param_3[6]) * fVar43;
        }
      }
      iVar13 = *(int *)(_DAT_180c86920 + 0xe0);
      aiStack_100[4] = 100;
      aiStack_100[0] = 0;
      aiStack_100[1] = 0x1e;
      aiStack_100[2] = 0x3c;
      aiStack_100[3] = 0x5a;
      if (iVar13 < 0) {
        iVar13 = 0;
      }
      else if (4 < iVar13) {
        iVar13 = 4;
      }
      iStack_2c0 = aiStack_100[iVar13];
      fStack_2ec = *(float *)(lStack_308 + 0x154);
      fStack_2f0 = *(float *)(lStack_308 + 0x158) - fStack_2ec;
      fVar41 = fStack_3ac * 1000.0;
      if (fVar41 <= 0.0) {
        fVar41 = fVar41 - 0.9999999;
      }
      uStack_1b8 = *(uint64_t *)(param_3 + 10);
      uStack_1b0 = *(uint64_t *)(param_3 + 0xc);
      uStack_1a8 = *(uint64_t *)(param_3 + 6);
      uStack_1a0 = *(uint64_t *)(param_3 + 8);
      uVar22 = (int)fVar41 ^ 0x41c64e6dU ^ param_3[2];
      uVar12 = param_3[2] ^ 0x41c64e6d;
      fStack_318 = 1.0 - (float)param_3[5];
      uStack_198 = *(uint64_t *)(param_3 + 0xe);
      uStack_190 = *(uint64_t *)(param_3 + 0x10);
      if (0.0 <= fStack_318) {
        if (1.0 <= fStack_318) {
          fStack_318 = 1.0;
        }
      }
      else {
        fStack_318 = 0.0;
      }
      fVar41 = *(float *)(lVar18 + 0x3004);
      fVar43 = *(float *)(lVar18 + 0x3008);
      fVar36 = fVar41;
      if (0.0 < fVar41) {
        fVar36 = 0.0;
      }
      fVar40 = fVar43;
      if (0.0 < fVar43) {
        fVar40 = 0.0;
      }
      if (fVar41 < 0.0) {
        fVar41 = 0.0;
      }
      fVar32 = fVar43;
      if (fVar43 < 0.0) {
        fVar32 = 0.0;
      }
      fVar33 = *(float *)(lVar18 + 0x300c);
      fVar42 = *(float *)(lVar18 + 0x3010);
      fVar8 = fVar33;
      if (fVar36 < fVar33) {
        fVar8 = fVar36;
      }
      fVar36 = fVar42;
      if (fVar40 < fVar42) {
        fVar36 = fVar40;
      }
      uStack_2a8 = CONCAT44(fVar36,fVar8);
      uVar10 = uStack_2a8;
      fStack_2b8 = fVar33;
      if (fVar33 < fVar41) {
        fStack_2b8 = fVar41;
      }
      fVar41 = fStack_2b8;
      fStack_2b4 = fVar42;
      if (fVar42 < fVar32) {
        fStack_2b4 = fVar32;
      }
      fVar40 = fStack_2b4;
      uVar25 = *(longlong *)(lStack_2c8 + 0x10) - *(longlong *)(lStack_2c8 + 8) >> 3;
      fVar33 = fVar33 - (fVar33 + *(float *)(lVar18 + 0x3004)) * 0.5;
      fVar32 = 0.0;
      fStack_31c = 0.0;
      fVar42 = fVar42 - (fVar43 + fVar42) * 0.5;
      fStack_2e8 = fVar42 * fVar42 + fVar33 * fVar33;
      fVar43 = *(float *)(lVar16 + 100) * 0.5;
      if ((int)uVar25 != 0) {
        uVar17 = 0;
        uVar28 = uVar25 & 0xffffffff;
        do {
          uVar19 = uVar17 % uVar25;
          uVar17 = uVar17 + 1;
          fVar32 = fVar32 + *(float *)(*(longlong *)(*(longlong *)(lStack_2c8 + 8) + uVar19 * 8) +
                                      0x30);
          uVar28 = uVar28 - 1;
          fStack_31c = fVar32;
        } while (uVar28 != 0);
      }
      uVar25 = 0;
      uStack_30c = 0;
      iVar13 = *(int *)(lStack_308 + 0x14) << 3;
      iVar24 = *(int *)(lStack_308 + 0x18) << 3;
      fStack_398 = fVar43;
      iStack_2dc = iVar13;
      iStack_2d4 = iVar24;
      if (0 < *(int *)(lStack_308 + 0x18) << 3) {
        uVar6 = CONCAT44(fStack_2b4,fStack_2b8);
        lVar18 = lStack_308;
        fVar32 = fStack_3ac;
        lStack_2d0 = (longlong)param_5;
        do {
          uVar31 = (uint)uVar25;
          if (0 < iVar13) {
            fVar42 = 1.0 / (float)iVar13;
            uStack_320 = (uint)(uVar25 >> 3);
            fVar44 = (float)(int)(uVar31 + 1) * (1.0 / (float)iVar24);
            fStack_2d8 = (float)(int)uVar31 * (1.0 / (float)iVar24);
            fVar33 = 1.0 / fVar32;
            uVar26 = 0;
            fStack_3b0 = fVar33;
            fStack_3a0 = fVar42;
            fStack_39c = fVar44;
            do {
              fVar32 = *(float *)(lVar18 + 0x24);
              cVar30 = '\0';
              fVar45 = fVar32 * fStack_2d8;
              fVar46 = (float)(int)uVar26 * fVar42 * *(float *)(lVar18 + 0x20);
              uVar31 = *(uint *)(lVar16 + 0x60) & 0x400000;
              if (uVar31 == 0) {
                fVar39 = fVar46 - fVar41;
                fVar33 = fVar45 - fVar40;
                if (fVar39 <= fVar8 - fVar46) {
                  fVar39 = fVar8 - fVar46;
                }
                if (fVar39 <= 0.0) {
                  fVar39 = 0.0;
                }
                if (fVar33 <= fVar36 - fVar45) {
                  fVar33 = fVar36 - fVar45;
                }
                auVar37 = ZEXT416((uint)fVar33);
                if (fVar33 <= 0.0) {
                  auVar37 = ZEXT816(0) << 0x20;
                }
                fVar33 = auVar37._0_4_;
                if (fVar33 <= fVar39) {
                  auVar37._0_4_ = fVar39;
                }
                if (0.0 <= auVar37._0_4_) {
                  auVar4._12_4_ = 0;
                  auVar4._0_12_ = auVar37._4_12_;
                  auVar37 = auVar4 << 0x20;
                }
                fVar39 = SQRT(fVar33 * fVar33 + fVar39 * fVar39) + auVar37._0_4_;
                if (fVar39 <= 0.0) {
                  fVar39 = 0.0;
                }
                fVar33 = fStack_3b0;
                fStack_2fc = fVar36;
                if (fVar43 < fVar39) {
                  cVar30 = '\x01';
                }
              }
              fVar43 = 0.5;
              lVar16 = *(longlong *)(lVar18 + 0x40);
              _uStack_300 = CONCAT44(fStack_2fc,uVar26 + 1);
              uVar27 = uVar26 >> 3;
              uVar25 = (ulonglong)(longlong)(int)(uVar27 * 1000 + uStack_320) %
                       (ulonglong)*(uint *)(lVar18 + 0x48);
              for (puVar3 = *(uint **)(lVar16 + uVar25 * 8); puVar3 != (uint *)0x0;
                  puVar3 = *(uint **)(puVar3 + 4)) {
                if ((uVar27 == *puVar3) && (uStack_320 == puVar3[1])) {
                  lVar20 = *(longlong *)(lVar18 + 0x48);
                  puStack_188 = puVar3;
                  ppuVar14 = &puStack_188;
                  lStack_180 = lVar16 + uVar25 * 8;
                  goto LAB_180377195;
                }
              }
              lVar20 = *(longlong *)(lVar18 + 0x48);
              puStack_178 = *(uint **)(lVar16 + lVar20 * 8);
              ppuVar14 = &puStack_178;
              lStack_170 = lVar16 + lVar20 * 8;
LAB_180377195:
              if (*ppuVar14 == *(uint **)(lVar16 + lVar20 * 8)) {
                puVar23 = (uint64_t *)0x0;
              }
              else {
                puVar23 = *(uint64_t **)(*ppuVar14 + 2);
              }
              fVar47 = (float)(int)(uVar26 + 1) * fVar42 * *(float *)(lVar18 + 0x20) - fVar46;
              fVar39 = fVar33 * fVar47;
              fStack_3a8 = fVar46;
              fStack_3a4 = fVar47;
              puStack_340 = puVar23;
              fStack_2e4 = fVar45;
              if (((uVar31 == 0) && (cVar11 = func_0x0001803723f0(lStack_2c8), cVar11 == '\0')) &&
                 (iStack_2c0 != 100)) {
                fVar39 = fVar39 * (float)iStack_2c0 * 0.01;
              }
              uVar12 = uVar12 ^ uVar12 << 0xd;
              uVar12 = uVar12 ^ uVar12 >> 0x11;
              uVar12 = uVar12 ^ uVar12 << 5;
              uStack_2e0 = uVar12;
              if ((1.0 <= fVar39) || ((float)(uVar12 - 1) * 2.3283064e-10 <= fVar39)) {
                if (fVar39 <= 1.0) {
                  fVar39 = 1.0;
                }
                if ((cVar30 == '\0') && (lVar16 = puVar23[lStack_2d0 + 0xf2], lVar16 != 0)) {
                  fStack_298 = fVar32 * fVar44 - fVar45;
                  uVar2 = *(ushort *)(lVar16 + 0x5c);
                  fStack_2f4 = (float)(int)uStack_320;
                  fStack_2f8 = (float)(int)uVar27;
                  fVar42 = fVar47 * fVar43;
                  fVar32 = *(float *)(lVar18 + 0x1c) * fStack_2f8;
                  fVar44 = fStack_298 * fVar43;
                  fVar33 = fStack_2f4 * *(float *)(lVar18 + 0x1c);
                  if ((void *)*puVar23 == &unknown_var_8576_ptr) {
                    fVar34 = *(float *)(puVar23[2] + 0x1c) /
                             (float)(1 << ((byte)*(int32_t *)(puVar23 + 5) & 0x1f));
                  }
                  else {
                    fVar34 = (float)(**(code **)((void *)*puVar23 + 0x30))(puVar23);
                    fVar43 = 0.5;
                    lVar16 = puVar23[lStack_2d0 + 0xf2];
                  }
                  fVar43 = fVar43 / (float)uVar2;
                  fVar35 = 1.0 / ((float)*(int *)(puVar23 + 0xe) - 1.0);
                  fStack_290 = ((fVar42 + fVar46) - fVar32) * (1.0 / fVar34) * fVar35 + fVar43;
                  fStack_28c = ((fVar44 + fVar45) - fVar33) * (1.0 / fVar34) * fVar35 + fVar43;
                  pfVar15 = (float *)FUN_1802a11e0(lVar16,auStack_130,
                                                   CONCAT44(fStack_28c,fStack_290),0);
                  uVar31 = (uint)(fVar39 * fVar39);
                  fVar33 = fStack_3b0;
                  fVar42 = fStack_3a0;
                  fVar44 = fStack_39c;
                  if (*pfVar15 <= 0.0) {
                    if (0 < (int)uVar31) {
                      uVar25 = (ulonglong)uVar31;
                      do {
                        uVar22 = uVar22 ^ uVar22 << 0xd;
                        uVar22 = uVar22 ^ uVar22 >> 0x11;
                        uVar22 = uVar22 ^ uVar22 << 5;
                        uVar22 = uVar22 ^ uVar22 << 0xd;
                        uVar22 = uVar22 ^ uVar22 >> 0x11;
                        uVar22 = uVar22 ^ uVar22 << 5;
                        uVar22 = uVar22 ^ uVar22 << 0xd;
                        uVar22 = uVar22 ^ uVar22 >> 0x11;
                        uVar22 = uVar22 ^ uVar22 << 5;
                        uVar22 = uVar22 ^ uVar22 << 0xd;
                        uVar22 = uVar22 ^ uVar22 >> 0x11;
                        uVar22 = uVar22 ^ uVar22 << 5;
                        uVar25 = uVar25 - 1;
                      } while (uVar25 != 0);
                    }
                  }
                  else if (0 < (int)uVar31) {
                    uStack_2a8 = (ulonglong)uVar31;
                    uStack_268 = 0;
                    uStack_264 = 0x7f7fffff;
                    do {
                      uVar22 = uVar22 ^ uVar22 << 0xd;
                      uStack_388 = 0x3f800000;
                      uStack_380 = 0;
                      uVar22 = uVar22 ^ uVar22 >> 0x11;
                      uStack_368 = 0;
                      uStack_360 = 0x3f800000;
                      uStack_378 = 0x3f80000000000000;
                      uStack_370 = 0;
                      uVar22 = uVar22 ^ uVar22 << 5;
                      uVar12 = uVar22 ^ uVar22 << 0xd;
                      uVar12 = uVar12 ^ uVar12 >> 0x11;
                      uVar12 = uVar12 ^ uVar12 << 5;
                      fVar45 = (float)(uVar22 - 1) * 2.3283064e-10 * fStack_298 + fVar45;
                      fVar33 = (float)(uVar12 - 1) * 2.3283064e-10 * fVar47 + fVar46;
                      fStack_350 = (float)uStack_268;
                      uStack_34c = uStack_264;
                      fVar32 = *(float *)(lVar18 + 0x1c) * fStack_2f4;
                      fVar43 = *(float *)(lVar18 + 0x1c) * fStack_2f8;
                      fStack_358 = fVar33;
                      fStack_354 = fVar45;
                      fStack_270 = fVar33;
                      fStack_26c = fVar45;
                      if ((void *)*puVar23 == &unknown_var_8576_ptr) {
                        fVar42 = *(float *)(puVar23[2] + 0x1c) /
                                 (float)(1 << ((byte)*(int32_t *)(puVar23 + 5) & 0x1f));
                      }
                      else {
                        fVar42 = (float)(**(code **)((void *)*puVar23 + 0x30))(puVar23);
                      }
                      fStack_274 = 1.0 / ((float)*(int *)(puVar23 + 0xe) - 1.0);
                      fStack_278 = (fVar33 - fVar43) * (1.0 / fVar42) * fStack_274;
                      fStack_274 = (fVar45 - fVar32) * (1.0 / fVar42) * fStack_274;
                      uVar7 = CONCAT44(fStack_274,fStack_278);
                      pfVar15 = (float *)FUN_1802a11e0(puVar23[lStack_2d0 + 0xe2],auStack_120,uVar7,
                                                       1);
                      uVar22 = 0;
                      uVar31 = (uint)(*(longlong *)(lStack_2c8 + 0x10) -
                                      *(longlong *)(lStack_2c8 + 8) >> 3);
                      if (uVar31 != 0) {
                        do {
                          uVar22 = uVar22 + 1;
                        } while (uVar22 < uVar31);
                      }
                      if ((*(uint *)(lStack_328 + 0x60) & 0x400000) == 0) {
                        uStack_3b8 = uVar10;
                        fVar32 = fVar33 - fVar41;
                        fVar43 = fVar8 - fVar33;
                        if (fVar8 - fVar33 <= fVar32) {
                          fVar43 = fVar32;
                        }
                        fVar32 = fVar45 - fVar40;
                        if (fVar43 <= 0.0) {
                          fVar43 = 0.0;
                        }
                        fVar42 = fVar36 - fVar45;
                        if (fVar36 - fVar45 <= fVar32) {
                          fVar42 = fVar32;
                        }
                        auVar38 = ZEXT416((uint)fVar42);
                        if (fVar42 <= 0.0) {
                          auVar38 = ZEXT816(0) << 0x20;
                        }
                        fVar32 = auVar38._0_4_;
                        if (fVar32 <= fVar43) {
                          auVar38._0_4_ = fVar43;
                        }
                        if (0.0 <= auVar38._0_4_) {
                          auVar5._12_4_ = 0;
                          auVar5._0_12_ = auVar38._4_12_;
                          auVar38 = auVar5 << 0x20;
                        }
                        fVar43 = SQRT(fVar32 * fVar32 + fVar43 * fVar43) + auVar38._0_4_;
                        if (fVar43 <= 0.0) {
                          fVar43 = 0.0;
                        }
                        uStack_338 = uVar6;
                        if (fVar43 < fStack_398) goto LAB_180377666;
                        bVar9 = false;
                      }
                      else {
LAB_180377666:
                        bVar9 = true;
                      }
                      if ((fStack_318 < *pfVar15) && (bVar9)) {
                        if (fStack_310 != 0.0) {
                          pfStack_3c0 = &fStack_1c8;
                          pfStack_3c8 = &fStack_260;
                          uStack_258 = 0;
                          uStack_254 = 0x7f7fffff;
                          fStack_260 = fVar33;
                          fStack_25c = fVar45;
                          FUN_18046da60();
                          fVar42 = fStack_1c8 * 0.33 * 6.6666665;
                          fVar32 = fStack_1c4 * 0.33 * 6.6666665;
                          fVar43 = fStack_1c0 * 0.33 * 6.6666665;
                          fVar43 = (fVar42 + fVar42 + fVar32 + fVar32 + fVar43 + fVar43) -
                                   fStack_314;
                          if (0.0 <= fVar43) {
                            if (1.0 <= fVar43) {
                              fVar43 = 1.0;
                            }
                          }
                          else {
                            fVar43 = 0.0;
                          }
                          uVar12 = uVar12 ^ uVar12 << 0xd;
                          uVar12 = uVar12 ^ uVar12 >> 0x11;
                          uVar12 = uVar12 ^ uVar12 << 5;
                          if (fVar43 < (float)(uVar12 - 1) * 2.3283064e-10) goto LAB_18037777e;
                        }
                        pfVar15 = (float *)FUN_1802a11e0(puStack_340[0x103],auStack_110,uVar7,1);
                        fVar41 = fStack_2f0 * *pfVar15 + fStack_2ec;
                        uVar22 = *(uint *)(lStack_328 + 0x60);
                        fStack_350 = fVar41;
                        if ((uVar22 >> 0x11 & 1) == 0) {
                          if (((uVar22 >> 0x19 & 1) != 0) && (puStack_340[0x102] != 0)) {
                            uStack_3b8._0_4_ = uVar22;
                            pfVar15 = (float *)FUN_1802a11e0(puStack_340[0x102],aiStack_100,uVar7,1)
                            ;
                            uStack_240 = 0;
                            uStack_23c = 0x7f7fffff;
                            fStack_248 = *pfVar15 * 2.0 - 1.0;
                            fStack_244 = pfVar15[1] * 2.0 - 1.0;
                            fVar43 = fStack_248 * fStack_248 + fStack_244 * fStack_244;
                            if (0.0 <= fVar43) {
                              fVar36 = fVar43;
                              if (0.999 <= fVar43) {
                                fVar36 = 0.999;
                              }
                            }
                            else {
                              fVar36 = 0.0;
                            }
                            fVar43 = (1.0 - fVar36) + fVar43;
                            auVar37 = rsqrtss(ZEXT416((uint)fVar43),ZEXT416((uint)fVar43));
                            fVar40 = auVar37._0_4_;
                            uStack_32c = 0x7f7fffff;
                            fVar40 = fVar40 * 0.5 * (3.0 - fVar43 * fVar40 * fVar40);
                            fVar42 = fStack_244 * fVar40;
                            fVar32 = fStack_248 * fVar40;
                            fVar40 = SQRT(1.0 - fVar36) * fVar40;
                            uStack_338 = CONCAT44(fVar42,fVar32);
                            fStack_238 = (float)uStack_380 * fVar42 - uStack_388._4_4_ * fVar40;
                            uStack_368 = CONCAT44(fVar42,fVar32);
                            uStack_360 = CONCAT44(0x7f7fffff,fVar40);
                            fStack_230 = uStack_388._4_4_ * fVar32 - (float)uStack_388 * fVar42;
                            uStack_22c = 0x7f7fffff;
                            fStack_234 = (float)uStack_388 * fVar40 - (float)uStack_380 * fVar32;
                            uStack_378 = CONCAT44(fStack_234,fStack_238);
                            uStack_370 = CONCAT44(0x7f7fffff,fStack_230);
                            fVar43 = fStack_234 * fStack_234 + fStack_238 * fStack_238 +
                                     fStack_230 * fStack_230;
                            auVar37 = rsqrtss(ZEXT416((uint)fVar43),ZEXT416((uint)fVar43));
                            fVar36 = auVar37._0_4_;
                            fVar43 = fVar36 * 0.5 * (3.0 - fVar43 * fVar36 * fVar36);
                            uStack_21c = 0x7f7fffff;
                            uVar22 = *(uint *)(lStack_328 + 0x60);
                            fStack_228 = fVar40 * fStack_234 * fVar43 - fVar42 * fStack_230 * fVar43
                            ;
                            fStack_224 = fVar32 * fStack_230 * fVar43 - fVar40 * fStack_238 * fVar43
                            ;
                            fStack_220 = fVar42 * fStack_238 * fVar43 - fVar32 * fStack_234 * fVar43
                            ;
                            uStack_388 = CONCAT44(fStack_224,fStack_228);
                            uStack_380 = CONCAT44(0x7f7fffff,fStack_220);
                            fStack_330 = fVar40;
                            goto LAB_180377829;
                          }
                        }
                        else {
                          uStack_368 = 0;
                          uStack_360 = 0x7f7fffff3f800000;
                        }
                        fVar42 = 0.0;
                        fVar32 = 0.0;
                        fVar40 = 1.0;
LAB_180377829:
                        if ((uVar22 >> 0x15 & 1) != 0) {
                          fStack_350 = fVar41 - ((fStack_354 - fVar45) * fVar42 +
                                                (fStack_358 - fVar33) * fVar32) / fVar40;
                        }
                        uVar12 = uVar12 ^ uVar12 << 0xd;
                        uVar12 = uVar12 ^ uVar12 >> 0x11;
                        uVar12 = (uVar12 ^ uVar12 << 5) - 1;
                        uStack_3b8._0_4_ = uVar22;
                    // WARNING: Subroutine does not return
                        FUN_1808fd400(uVar12,(float)uVar12 * 1.4629181e-09);
                      }
LAB_18037777e:
                      uVar12 = uVar12 ^ uVar12 << 0xd;
                      uVar12 = uVar12 ^ uVar12 >> 0x11;
                      uVar12 = uVar12 ^ uVar12 << 5;
                      uVar12 = uVar12 ^ uVar12 << 0xd;
                      uVar12 = uVar12 ^ uVar12 >> 0x11;
                      uVar22 = uVar12 ^ uVar12 << 5;
                      uStack_2a8 = uStack_2a8 - 1;
                      lVar18 = lStack_308;
                      puVar23 = puStack_340;
                      fVar45 = fStack_2e4;
                    } while (uStack_2a8 != 0);
                    uStack_2a8 = 0;
                    fVar33 = fStack_3b0;
                    fVar42 = fStack_3a0;
                    uVar12 = uStack_2e0;
                    fVar44 = fStack_39c;
                  }
                }
                else if (0 < (int)(fVar39 * fVar39)) {
                  uVar25 = (ulonglong)(uint)(int)(fVar39 * fVar39);
                  do {
                    uVar22 = uVar22 ^ uVar22 << 0xd;
                    uVar22 = uVar22 ^ uVar22 >> 0x11;
                    uVar22 = uVar22 ^ uVar22 << 5;
                    uVar22 = uVar22 ^ uVar22 << 0xd;
                    uVar22 = uVar22 ^ uVar22 >> 0x11;
                    uVar22 = uVar22 ^ uVar22 << 5;
                    uVar22 = uVar22 ^ uVar22 << 0xd;
                    uVar22 = uVar22 ^ uVar22 >> 0x11;
                    uVar22 = uVar22 ^ uVar22 << 5;
                    uVar22 = uVar22 ^ uVar22 << 0xd;
                    uVar22 = uVar22 ^ uVar22 >> 0x11;
                    uVar22 = uVar22 ^ uVar22 << 5;
                    uVar25 = uVar25 - 1;
                  } while (uVar25 != 0);
                }
              }
              else {
                uVar22 = uVar22 ^ uVar22 << 0xd;
                uVar22 = uVar22 ^ uVar22 >> 0x11;
                uVar22 = uVar22 ^ uVar22 << 5;
                uVar22 = uVar22 ^ uVar22 << 0xd;
                uVar22 = uVar22 ^ uVar22 >> 0x11;
                uVar22 = uVar22 ^ uVar22 << 5;
                uVar22 = uVar22 ^ uVar22 << 0xd;
                uVar22 = uVar22 ^ uVar22 >> 0x11;
                uVar22 = uVar22 ^ uVar22 << 5;
                uVar22 = uVar22 ^ uVar22 << 0xd;
                uVar22 = uVar22 ^ uVar22 >> 0x11;
                uVar22 = uVar22 ^ uVar22 << 5;
              }
              lVar16 = lStack_328;
              fVar43 = fStack_398;
              fVar32 = fStack_3ac;
              iVar13 = iStack_2dc;
              iVar24 = iStack_2d4;
              uVar26 = uStack_300;
              uVar31 = uStack_30c;
            } while ((int)uStack_300 < iStack_2dc);
          }
          uStack_30c = uVar31 + 1;
          uVar25 = (ulonglong)uStack_30c;
        } while ((int)uStack_30c < iVar24);
      }
      puVar21 = *(void **)(lVar16 + 0x10);
      puVar29 = &system_buffer_ptr;
      if ((*(uint *)(lVar16 + 0x60) & 0x400000) == 0) {
        if (puVar21 != (void *)0x0) {
          puVar29 = puVar21;
        }
        lVar18 = plStack_280[1] - *plStack_280;
        puVar21 = &unknown_var_3792_ptr;
      }
      else {
        if (puVar21 != (void *)0x0) {
          puVar29 = puVar21;
        }
        lVar18 = plStack_288[1] - *plStack_288;
        puVar21 = &unknown_var_3824_ptr;
      }
                    // WARNING: Subroutine does not return
      FUN_180062300(_DAT_180c86928,puVar21,lVar18 / 0x28,puVar29);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_e8 ^ (ulonglong)auStack_3e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



