#include "TaleWorlds.Native.Split.h"

// 99_part_07_part066_sub002_sub002.c - 1 个函数

// 函数: void FUN_1804d7780(int64_t param_1,uint param_2,int param_3)
void FUN_1804d7780(int64_t param_1,uint param_2,int param_3)

{
  float *pfVar1;
  uint64_t *puVar2;
  float fVar3;
  char cVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  float *pfVar19;
  int64_t lVar20;
  int64_t lVar21;
  int64_t lVar22;
  int64_t lVar23;
  int64_t lVar24;
  int iVar25;
  int64_t lVar26;
  uint64_t uVar27;
  uint64_t uVar28;
  int64_t lVar29;
  int64_t lVar30;
  int64_t lVar31;
  int64_t lVar32;
  int64_t lVar33;
  uint uVar34;
  int64_t lVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  int64_t lStack_358;
  uint64_t uStack_338;
  int iStack_330;
  int16_t uStack_32c;
  uint64_t uStack_328;
  uint64_t uStack_320;
  int32_t uStack_318;
  int8_t uStack_314;
  int32_t uStack_310;
  uint64_t uStack_30c;
  int16_t uStack_304;
  uint64_t uStack_300;
  int32_t uStack_2f8;
  uint64_t uStack_2f0;
  int32_t uStack_2e8;
  int8_t uStack_2e4;
  uint64_t uStack_2d0;
  uint64_t uStack_2c8;
  int iStack_2c0;
  int16_t uStack_2bc;
  uint64_t uStack_2b8;
  uint64_t uStack_2b0;
  int32_t uStack_2a8;
  int8_t uStack_2a4;
  int32_t uStack_2a0;
  uint64_t uStack_29c;
  int16_t uStack_294;
  uint64_t uStack_290;
  int32_t uStack_288;
  uint64_t uStack_280;
  int32_t uStack_278;
  int8_t uStack_274;
  uint64_t uStack_260;
  uint64_t uStack_258;
  int iStack_250;
  int8_t uStack_24c;
  int8_t uStack_24b;
  int64_t lStack_248;
  uint64_t uStack_240;
  int32_t uStack_238;
  int8_t uStack_234;
  int32_t uStack_230;
  uint64_t uStack_22c;
  int16_t uStack_224;
  uint64_t uStack_220;
  int32_t uStack_218;
  uint64_t uStack_210;
  int32_t uStack_208;
  int8_t uStack_204;
  uint64_t uStack_1f0;
  int32_t uStack_1e8;
  int32_t uStack_1e4;
  int iStack_1e0;
  int8_t uStack_1dc;
  int8_t uStack_1db;
  int64_t lStack_1d8;
  uint64_t uStack_1d0;
  int32_t uStack_1c8;
  int8_t uStack_1c4;
  int32_t uStack_1c0;
  int32_t uStack_1bc;
  int32_t uStack_1b8;
  int16_t uStack_1b4;
  uint64_t uStack_1b0;
  int32_t uStack_1a8;
  uint64_t uStack_1a0;
  int32_t uStack_198;
  int8_t uStack_194;
  uint64_t uStack_180;
  uint64_t uStack_178;
  uint64_t uStack_170;
  uint64_t uStack_168;
  uint64_t uStack_160;
  uint64_t uStack_158;
  uint64_t uStack_150;
  uint64_t uStack_148;
  uint64_t uStack_140;
  uint64_t uStack_138;
  uint64_t uStack_130;
  uint64_t uStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  if (param_2 != 0xffffffff) {
    iVar25 = *(int *)(param_1 + 0xa8);
    uStack_240 = 0xffffffffffffffff;
    uStack_238 = 0xffffffff;
    lVar30 = ((int64_t)param_3 + 2) * 0x58;
    lVar31 = *(int64_t *)(*(int64_t *)(param_1 + 11000) + (int64_t)((int)param_2 >> 10) * 8) +
             (int64_t)(int)(*(uint *)(param_1 + 0x2b18) & param_2) * 0xd8;
    uStack_234 = 0xff;
    uStack_230 = 0xffffffff;
    uStack_224 = 0x400;
    uVar34 = *(uint *)(lVar31 + 0x2c + (int64_t)param_3 * 4);
    lVar35 = (int64_t)(int)(*(uint *)(lVar30 + 0x50 + param_1) & uVar34) * 0x68;
    lVar30 = *(int64_t *)
              (*(int64_t *)(lVar30 + 0x30 + param_1) + (int64_t)((int)uVar34 >> 10) * 8);
    iVar18 = param_3 - iVar25;
    if (iVar18 < 0) {
      iVar18 = 0;
    }
    lVar20 = ((int64_t)iVar18 + 2) * 0x58;
    uVar5 = *(uint *)(lVar31 + 0x24);
    lVar26 = 0;
    lVar29 = (int64_t)(int)(*(uint *)(lVar20 + 0x50 + param_1) & uVar34) * 0x68;
    lVar21 = (int64_t)(int)(*(uint *)(param_1 + 0x3c0) & uVar5);
    uStack_258 = 0;
    lVar31 = *(int64_t *)
              (*(int64_t *)(lVar20 + 0x30 + param_1) + (int64_t)((int)uVar34 >> 10) * 8);
    lVar20 = *(int64_t *)(*(int64_t *)(param_1 + 0x3a0) + (int64_t)((int)uVar5 >> 10) * 8);
    uStack_24c = 0;
    lStack_248 = 0;
    iVar18 = (int)((*(int64_t *)(lVar35 + 0x30 + lVar30) - *(int64_t *)(lVar35 + 0x28 + lVar30)) /
                  0x68);
    uStack_22c = 0;
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_204 = 0;
    uStack_1f0 = 0;
    lStack_358 = (int64_t)iVar18;
    if (0 < iVar18) {
      do {
        lVar33 = *(int64_t *)(lVar35 + 0x28 + lVar30);
        uVar34 = *(uint *)(*(int64_t *)
                            (*(int64_t *)(param_1 + 11000) +
                            (int64_t)((int)*(uint *)(lVar26 + lVar33) >> 10) * 8) + 0x1c +
                          (int64_t)(int)(*(uint *)(param_1 + 0x2b18) & *(uint *)(lVar26 + lVar33))
                          * 0xd8);
        uStack_208 = *(int32_t *)
                      (*(int64_t *)
                        (*(int64_t *)(param_1 + 0x698) + (int64_t)((int)uVar34 >> 10) * 8) + 0x28
                      + (int64_t)(int)(uVar34 & *(uint *)(param_1 + 0x6b8)) * 0x30);
        uStack_24b = *(int8_t *)(lVar26 + 5 + lVar33);
        if (*(int *)(lVar26 + 0x18 + lVar33) == 0) {
          lStack_248 = *(int64_t *)(lVar26 + 0x10 + lVar33);
          uStack_22c = CONCAT44(uStack_22c._4_4_,*(int32_t *)(lStack_248 + 0x310));
          uStack_230 = *(int32_t *)(lStack_248 + 0x318);
        }
        iStack_250 = param_3;
        pfVar19 = (float *)(**(code **)(**(int64_t **)(lVar26 + 0x10 + lVar33) + 0x158))();
        pfVar1 = (float *)(lVar26 + 0x1c + lVar33);
        fVar40 = *pfVar1;
        fVar3 = pfVar1[1];
        fVar6 = pfVar1[2];
        fVar7 = pfVar1[3];
        lVar24 = *(int64_t *)(param_1 + 8);
        uVar28 = 0;
        pfVar1 = (float *)(lVar26 + 0x2c + lVar33);
        fVar8 = *pfVar1;
        fVar9 = pfVar1[1];
        fVar10 = pfVar1[2];
        fVar11 = pfVar1[3];
        fVar37 = pfVar19[1];
        fVar39 = *pfVar19;
        pfVar1 = (float *)(lVar26 + 0x3c + lVar33);
        fVar12 = *pfVar1;
        fVar13 = pfVar1[1];
        fVar14 = pfVar1[2];
        fVar15 = pfVar1[3];
        fVar36 = pfVar19[2];
        fVar38 = pfVar19[5];
        fVar41 = pfVar19[4];
        fStack_f8 = fVar37 * fVar8 + fVar39 * fVar40 + fVar36 * fVar12;
        fStack_f4 = fVar37 * fVar9 + fVar39 * fVar3 + fVar36 * fVar13;
        fStack_f0 = fVar37 * fVar10 + fVar39 * fVar6 + fVar36 * fVar14;
        fStack_ec = fVar37 * fVar11 + fVar39 * fVar7 + fVar36 * fVar15;
        fVar37 = pfVar19[6];
        fVar39 = pfVar19[8];
        fVar36 = pfVar19[9];
        fStack_e8 = fVar38 * fVar8 + fVar41 * fVar40 + fVar37 * fVar12;
        fStack_e4 = fVar38 * fVar9 + fVar41 * fVar3 + fVar37 * fVar13;
        fStack_e0 = fVar38 * fVar10 + fVar41 * fVar6 + fVar37 * fVar14;
        fStack_dc = fVar38 * fVar11 + fVar41 * fVar7 + fVar37 * fVar15;
        fVar37 = pfVar19[10];
        fVar38 = pfVar19[0xd];
        fVar41 = pfVar19[0xc];
        fStack_d8 = fVar36 * fVar8 + fVar39 * fVar40 + fVar37 * fVar12;
        fStack_d4 = fVar36 * fVar9 + fVar39 * fVar3 + fVar37 * fVar13;
        fStack_d0 = fVar36 * fVar10 + fVar39 * fVar6 + fVar37 * fVar14;
        fStack_cc = fVar36 * fVar11 + fVar39 * fVar7 + fVar37 * fVar15;
        fVar37 = pfVar19[0xe];
        pfVar1 = (float *)(lVar26 + 0x4c + lVar33);
        fStack_c8 = fVar38 * fVar8 + fVar41 * fVar40 + fVar37 * fVar12 + *pfVar1;
        fStack_c4 = fVar38 * fVar9 + fVar41 * fVar3 + fVar37 * fVar13 + pfVar1[1];
        fStack_c0 = fVar38 * fVar10 + fVar41 * fVar6 + fVar37 * fVar14 + pfVar1[2];
        fStack_bc = fVar38 * fVar11 + fVar41 * fVar7 + fVar37 * fVar15 + pfVar1[3];
        uVar27 = uVar28;
        if (*(int64_t *)(param_1 + 0x10) - lVar24 >> 3 != 0) {
          do {
            lVar24 = *(int64_t *)(lVar24 + uVar27);
            if ((((*(int *)(lVar24 + 0x178) < 2) && ((*(uint *)(lVar24 + 4) & 0x1000000) == 0)) &&
                ((lStack_248 == 0 ||
                 (((lVar32 = *(int64_t *)(lVar24 + 0x28), lVar32 == 0 ||
                   (fVar37 = *(float *)(lVar26 + 0x5c + lVar33), fVar37 == 3.4028235e+38)) ||
                  (fVar41 = fStack_c4 - *(float *)(lVar32 + 0x124),
                  fVar36 = fStack_c8 - *(float *)(lVar32 + 0x120),
                  fVar38 = fStack_c0 - *(float *)(lVar32 + 0x128),
                  fVar39 = *(float *)(lVar26 + 0x60 + lVar33),
                  (fVar41 * fVar41 + fVar36 * fVar36 + fVar38 * fVar38) - fVar39 * fVar39 <=
                  fVar37 * fVar37)))))) &&
               (((*(ushort *)(lVar20 + 8 + lVar21 * 0xc) & 1 << ((byte)uVar28 & 0x1f)) != 0 &&
                ((fVar37 = *(float *)(lVar24 + 0x174) * 0.2, fVar37 <= 0.0 ||
                 (pfVar1 = (float *)(lVar26 + 100 + lVar33), fVar37 < *pfVar1 || fVar37 == *pfVar1))
                )))) {
              SystemHealthMonitor(*(uint64_t *)(lVar26 + 8 + lVar33),lVar24,&fStack_f8,0,&uStack_258);
            }
            lVar24 = *(int64_t *)(param_1 + 8);
            uVar34 = (int)uVar28 + 1;
            uVar28 = (uint64_t)uVar34;
            uVar27 = uVar27 + 8;
          } while ((uint64_t)(int64_t)(int)uVar34 <
                   (uint64_t)(*(int64_t *)(param_1 + 0x10) - lVar24 >> 3));
        }
        lVar26 = lVar26 + 0x68;
        lStack_358 = lStack_358 + -1;
      } while (lStack_358 != 0);
      iVar25 = *(int *)(param_1 + 0xa8);
    }
    lVar26 = 0;
    if (iVar25 == 1) {
      uStack_338 = 0;
      iVar25 = (int)((*(int64_t *)(lVar29 + 0x10 + lVar31) - *(int64_t *)(lVar29 + 8 + lVar31)) /
                    0x68);
      iStack_330 = -1;
      uStack_32c = 0xff00;
      lStack_358 = (int64_t)iVar25;
      uStack_328 = 0;
      uStack_320 = 0xffffffffffffffff;
      uStack_318 = 0xffffffff;
      uStack_314 = 0xff;
      uStack_310 = 0xffffffff;
      uStack_30c = 0;
      uStack_304 = 0x400;
      uStack_300 = 0;
      uStack_2f8 = 0;
      uStack_2f0 = 0;
      uStack_2e8 = 0;
      uStack_2e4 = 0;
      uStack_2d0 = 0;
      if (0 < iVar25) {
        do {
          lVar33 = *(int64_t *)(lVar29 + 8 + lVar31);
          if (*(char *)(*(int64_t *)(lVar26 + 0x48 + lVar33) + 0xf5) != '\0') {
            uVar34 = *(uint *)(lVar26 + 0x60 + lVar33);
            lVar32 = (int64_t)(int)(*(uint *)(param_1 + 0x2b18) & uVar34) * 0xd8;
            lVar24 = *(int64_t *)
                      (*(int64_t *)(param_1 + 11000) + (int64_t)((int)uVar34 >> 10) * 8);
            uVar34 = *(uint *)(lVar24 + 0x1c + lVar32);
            lVar22 = (int64_t)(int)(*(uint *)(param_1 + 0x6b8) & uVar34);
            uVar5 = *(uint *)(lVar24 + 0x18 + lVar32);
            uVar27 = 0;
            lVar23 = (int64_t)(int)(*(uint *)(param_1 + 0x4a8) & uVar5);
            uStack_338 = uStack_338 & 0xffffffff00000000;
            lVar24 = *(int64_t *)
                      (*(int64_t *)(param_1 + 0x698) + (int64_t)((int)uVar34 >> 10) * 8);
            uStack_2e8 = *(int32_t *)(lVar24 + 0x28 + lVar22 * 0x30);
            lVar32 = *(int64_t *)
                      (*(int64_t *)(param_1 + 0x488) + (int64_t)((int)uVar5 >> 10) * 8);
            uStack_320 = CONCAT44(*(int32_t *)(lVar24 + 0x18 + lVar22 * 0x30),
                                  *(int32_t *)(lVar24 + 0x1c + lVar22 * 0x30));
            uStack_318 = *(int32_t *)(lVar24 + 0x14 + lVar22 * 0x30);
            uStack_314 = *(int8_t *)(lVar24 + 0x10 + lVar22 * 0x30);
            uStack_30c = CONCAT44(uStack_30c._4_4_,*(int32_t *)(lVar24 + 0x20 + lVar22 * 0x30));
            uStack_310 = *(int32_t *)(lVar24 + 0x24 + lVar22 * 0x30);
            cVar4 = *(char *)(lVar26 + 0x50 + lVar33);
            uStack_32c = CONCAT11(cVar4,1);
            if (cVar4 == -1) {
              uStack_328 = 0;
            }
            else {
              uStack_328 = *(uint64_t *)(lVar26 + 0x40 + lVar33);
            }
            if (*(char *)(lVar26 + 100 + lVar33) == '\0') {
              pfVar1 = (float *)(lVar32 + 8 + lVar23 * 0x48);
              fVar6 = *pfVar1;
              fVar7 = pfVar1[1];
              fVar8 = pfVar1[2];
              fVar9 = pfVar1[3];
              pfVar1 = (float *)(lVar32 + 0x18 + lVar23 * 0x48);
              fVar10 = *pfVar1;
              fVar11 = pfVar1[1];
              fVar12 = pfVar1[2];
              fVar13 = pfVar1[3];
              pfVar1 = (float *)(lVar32 + 0x28 + lVar23 * 0x48);
              fVar14 = *pfVar1;
              fVar15 = pfVar1[1];
              fVar16 = pfVar1[2];
              fVar17 = pfVar1[3];
              fVar37 = *(float *)(lVar26 + 4 + lVar33);
              fVar39 = *(float *)(lVar26 + lVar33);
              fVar36 = *(float *)(lVar26 + 8 + lVar33);
              fVar38 = *(float *)(lVar26 + 0x14 + lVar33);
              fVar41 = *(float *)(lVar26 + 0x10 + lVar33);
              fVar40 = *(float *)(lVar26 + 0x18 + lVar33);
              fVar3 = *(float *)(lVar26 + 0x20 + lVar33);
              uStack_178 = CONCAT44(fVar37 * fVar11 + fVar39 * fVar7 + fVar36 * fVar15,
                                    fVar37 * fVar10 + fVar39 * fVar6 + fVar36 * fVar14);
              uStack_170 = CONCAT44(fVar37 * fVar13 + fVar39 * fVar9 + fVar36 * fVar17,
                                    fVar37 * fVar12 + fVar39 * fVar8 + fVar36 * fVar16);
              fVar37 = *(float *)(lVar26 + 0x24 + lVar33);
              fVar39 = *(float *)(lVar26 + 0x28 + lVar33);
              uStack_168 = CONCAT44(fVar38 * fVar11 + fVar41 * fVar7 + fVar40 * fVar15,
                                    fVar38 * fVar10 + fVar41 * fVar6 + fVar40 * fVar14);
              uStack_160 = CONCAT44(fVar38 * fVar13 + fVar41 * fVar9 + fVar40 * fVar17,
                                    fVar38 * fVar12 + fVar41 * fVar8 + fVar40 * fVar16);
              fVar36 = *(float *)(lVar26 + 0x34 + lVar33);
              fVar38 = *(float *)(lVar26 + 0x30 + lVar33);
              fVar41 = *(float *)(lVar26 + 0x38 + lVar33);
              pfVar1 = (float *)(lVar32 + 0x38 + lVar23 * 0x48);
              uStack_158 = CONCAT44(fVar37 * fVar11 + fVar3 * fVar7 + fVar39 * fVar15,
                                    fVar37 * fVar10 + fVar3 * fVar6 + fVar39 * fVar14);
              uStack_150 = CONCAT44(fVar37 * fVar13 + fVar3 * fVar9 + fVar39 * fVar17,
                                    fVar37 * fVar12 + fVar3 * fVar8 + fVar39 * fVar16);
              uStack_148 = CONCAT44(fVar36 * fVar11 + fVar38 * fVar7 + fVar41 * fVar15 + pfVar1[1],
                                    fVar36 * fVar10 + fVar38 * fVar6 + fVar41 * fVar14 + *pfVar1);
              uStack_140 = CONCAT44(fVar36 * fVar13 + fVar38 * fVar9 + fVar41 * fVar17 + pfVar1[3],
                                    fVar36 * fVar12 + fVar38 * fVar8 + fVar41 * fVar16 + pfVar1[2]);
            }
            else {
              puVar2 = (uint64_t *)(lVar32 + 8 + lVar23 * 0x48);
              uStack_178 = *puVar2;
              uStack_170 = puVar2[1];
              puVar2 = (uint64_t *)(lVar32 + 0x18 + lVar23 * 0x48);
              uStack_168 = *puVar2;
              uStack_160 = puVar2[1];
              puVar2 = (uint64_t *)(lVar32 + 0x28 + lVar23 * 0x48);
              uStack_158 = *puVar2;
              uStack_150 = puVar2[1];
              puVar2 = (uint64_t *)(lVar32 + 0x38 + lVar23 * 0x48);
              uStack_148 = *puVar2;
              uStack_140 = puVar2[1];
            }
            fVar37 = *(float *)(lVar32 + 0xc + lVar23 * 0x48);
            fVar39 = *(float *)(lVar32 + 0x10 + lVar23 * 0x48);
            fVar36 = *(float *)(lVar32 + 8 + lVar23 * 0x48);
            fVar38 = *(float *)(lVar32 + 0x18 + lVar23 * 0x48);
            fVar41 = *(float *)(lVar32 + 0x28 + lVar23 * 0x48);
            fVar40 = *(float *)(lVar32 + 0x1c + lVar23 * 0x48);
            fVar36 = fVar36 * fVar36 + fVar37 * fVar37 + fVar39 * fVar39;
            fVar37 = *(float *)(lVar32 + 0x20 + lVar23 * 0x48);
            fVar39 = *(float *)(lVar32 + 0x2c + lVar23 * 0x48);
            fVar38 = fVar38 * fVar38 + fVar40 * fVar40 + fVar37 * fVar37;
            fVar37 = *(float *)(lVar32 + 0x30 + lVar23 * 0x48);
            fVar37 = fVar41 * fVar41 + fVar39 * fVar39 + fVar37 * fVar37;
            if (fVar36 <= fVar38) {
              if (fVar37 <= fVar38) {
                fVar37 = fVar38;
              }
            }
            else if (fVar37 <= fVar36) {
              fVar37 = fVar36;
            }
            lVar24 = *(int64_t *)(param_1 + 8);
            uVar28 = uVar27;
            iStack_330 = param_3;
            if (*(int64_t *)(param_1 + 0x10) - lVar24 >> 3 != 0) {
              do {
                lVar24 = *(int64_t *)(lVar24 + uVar28);
                if (*(int *)(lVar24 + 0x178) < 2) {
                  lVar32 = *(int64_t *)(lVar24 + 0x28);
                  if ((lVar32 != 0) &&
                     (fVar39 = *(float *)(lVar26 + 0x54 + lVar33), fVar39 != 3.4028235e+38)) {
                    fVar41 = uStack_148._4_4_ - *(float *)(lVar32 + 0x124);
                    fVar40 = (float)uStack_148 - *(float *)(lVar32 + 0x120);
                    fVar38 = (float)uStack_140 - *(float *)(lVar32 + 0x128);
                    fVar36 = *(float *)(lVar26 + 0x58 + lVar33);
                    if (fVar39 * fVar39 <
                        (fVar40 * fVar40 + fVar41 * fVar41 + fVar38 * fVar38) - fVar36 * fVar36)
                    goto LAB_1804d8069;
                  }
                  if (((*(ushort *)(lVar20 + 8 + lVar21 * 0xc) & 1 << ((byte)uVar27 & 0x1f)) != 0)
                     && ((fVar39 = *(float *)(lVar24 + 0x174) * 0.2, fVar39 <= 0.0 ||
                         (fVar39 <= fVar37 * *(float *)(lVar26 + 0x5c + lVar33))))) {
                    SystemHealthMonitor(*(uint64_t *)(lVar26 + 0x48 + lVar33),lVar24,&uStack_178,0,
                                  &uStack_338);
                  }
                }
LAB_1804d8069:
                lVar24 = *(int64_t *)(param_1 + 8);
                uVar34 = (int)uVar27 + 1;
                uVar27 = (uint64_t)uVar34;
                uVar28 = uVar28 + 8;
              } while ((uint64_t)(int64_t)(int)uVar34 <
                       (uint64_t)(*(int64_t *)(param_1 + 0x10) - lVar24 >> 3));
            }
          }
          lVar26 = lVar26 + 0x68;
          lStack_358 = lStack_358 + -1;
        } while (lStack_358 != 0);
      }
    }
    lVar31 = 0;
    uStack_2c8 = 0;
    iStack_2c0 = -1;
    uStack_2bc = 0xff00;
    uStack_2b8 = 0;
    iVar25 = (int)((*(int64_t *)(lVar35 + 0x10 + lVar30) - *(int64_t *)(lVar35 + 8 + lVar30)) /
                  0x68);
    uStack_2b0 = 0xffffffffffffffff;
    uStack_2a8 = 0xffffffff;
    lStack_358 = (int64_t)iVar25;
    uStack_2a4 = 0xff;
    uStack_2a0 = 0xffffffff;
    uStack_29c = 0;
    uStack_294 = 0x400;
    uStack_290 = 0;
    uStack_288 = 0;
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_274 = 0;
    uStack_260 = 0;
    if (0 < iVar25) {
      do {
        lVar26 = *(int64_t *)(lVar35 + 8 + lVar30);
        if ((*(int *)(param_1 + 0xa8) != 1) ||
           (*(char *)(*(int64_t *)(lVar31 + 0x48 + lVar26) + 0xf5) != -1)) {
          uVar34 = *(uint *)(lVar31 + 0x60 + lVar26);
          lVar33 = (int64_t)(int)(uVar34 & *(uint *)(param_1 + 0x2b18)) * 0xd8;
          lVar29 = *(int64_t *)(*(int64_t *)(param_1 + 11000) + (int64_t)((int)uVar34 >> 10) * 8)
          ;
          uVar34 = *(uint *)(lVar29 + 0x1c + lVar33);
          lVar24 = (int64_t)(int)(*(uint *)(param_1 + 0x6b8) & uVar34);
          uVar5 = *(uint *)(lVar29 + 0x18 + lVar33);
          uVar27 = 0;
          lVar32 = (int64_t)(int)(*(uint *)(param_1 + 0x4a8) & uVar5);
          uStack_2c8 = uStack_2c8 & 0xffffffff00000000;
          lVar29 = *(int64_t *)(*(int64_t *)(param_1 + 0x698) + (int64_t)((int)uVar34 >> 10) * 8)
          ;
          uStack_278 = *(int32_t *)(lVar29 + 0x28 + lVar24 * 0x30);
          lVar33 = *(int64_t *)(*(int64_t *)(param_1 + 0x488) + (int64_t)((int)uVar5 >> 10) * 8);
          uStack_2b0 = CONCAT44(*(int32_t *)(lVar29 + 0x18 + lVar24 * 0x30),
                                *(int32_t *)(lVar29 + 0x1c + lVar24 * 0x30));
          uStack_2a8 = *(int32_t *)(lVar29 + 0x14 + lVar24 * 0x30);
          uStack_2a4 = *(int8_t *)(lVar29 + 0x10 + lVar24 * 0x30);
          uStack_29c = CONCAT44(uStack_29c._4_4_,*(int32_t *)(lVar29 + 0x20 + lVar24 * 0x30));
          uStack_2a0 = *(int32_t *)(lVar29 + 0x24 + lVar24 * 0x30);
          cVar4 = *(char *)(lVar31 + 0x50 + lVar26);
          uStack_2bc = CONCAT11(cVar4,1);
          if (cVar4 == -1) {
            uStack_2b8 = 0;
          }
          else {
            uStack_2b8 = *(uint64_t *)(lVar31 + 0x40 + lVar26);
          }
          if (*(char *)(lVar31 + 100 + lVar26) == '\0') {
            pfVar1 = (float *)(lVar33 + 8 + lVar32 * 0x48);
            fVar6 = *pfVar1;
            fVar7 = pfVar1[1];
            fVar8 = pfVar1[2];
            fVar9 = pfVar1[3];
            pfVar1 = (float *)(lVar33 + 0x18 + lVar32 * 0x48);
            fVar10 = *pfVar1;
            fVar11 = pfVar1[1];
            fVar12 = pfVar1[2];
            fVar13 = pfVar1[3];
            pfVar1 = (float *)(lVar33 + 0x28 + lVar32 * 0x48);
            fVar14 = *pfVar1;
            fVar15 = pfVar1[1];
            fVar16 = pfVar1[2];
            fVar17 = pfVar1[3];
            fVar37 = *(float *)(lVar31 + 4 + lVar26);
            fVar39 = *(float *)(lVar31 + lVar26);
            fVar36 = *(float *)(lVar31 + 8 + lVar26);
            fVar38 = *(float *)(lVar31 + 0x14 + lVar26);
            fVar41 = *(float *)(lVar31 + 0x10 + lVar26);
            fVar40 = *(float *)(lVar31 + 0x18 + lVar26);
            fVar3 = *(float *)(lVar31 + 0x20 + lVar26);
            uStack_138 = CONCAT44(fVar37 * fVar11 + fVar39 * fVar7 + fVar36 * fVar15,
                                  fVar37 * fVar10 + fVar39 * fVar6 + fVar36 * fVar14);
            uStack_130 = CONCAT44(fVar37 * fVar13 + fVar39 * fVar9 + fVar36 * fVar17,
                                  fVar37 * fVar12 + fVar39 * fVar8 + fVar36 * fVar16);
            fVar37 = *(float *)(lVar31 + 0x24 + lVar26);
            fVar39 = *(float *)(lVar31 + 0x28 + lVar26);
            uStack_128 = CONCAT44(fVar38 * fVar11 + fVar41 * fVar7 + fVar40 * fVar15,
                                  fVar38 * fVar10 + fVar41 * fVar6 + fVar40 * fVar14);
            uStack_120 = CONCAT44(fVar38 * fVar13 + fVar41 * fVar9 + fVar40 * fVar17,
                                  fVar38 * fVar12 + fVar41 * fVar8 + fVar40 * fVar16);
            fVar36 = *(float *)(lVar31 + 0x34 + lVar26);
            fVar38 = *(float *)(lVar31 + 0x30 + lVar26);
            fVar41 = *(float *)(lVar31 + 0x38 + lVar26);
            pfVar1 = (float *)(lVar33 + 0x38 + lVar32 * 0x48);
            uStack_118 = CONCAT44(fVar37 * fVar11 + fVar3 * fVar7 + fVar39 * fVar15,
                                  fVar37 * fVar10 + fVar3 * fVar6 + fVar39 * fVar14);
            uStack_110 = CONCAT44(fVar37 * fVar13 + fVar3 * fVar9 + fVar39 * fVar17,
                                  fVar37 * fVar12 + fVar3 * fVar8 + fVar39 * fVar16);
            uStack_108 = CONCAT44(fVar36 * fVar11 + fVar38 * fVar7 + fVar41 * fVar15 + pfVar1[1],
                                  fVar36 * fVar10 + fVar38 * fVar6 + fVar41 * fVar14 + *pfVar1);
            uStack_100 = CONCAT44(fVar36 * fVar13 + fVar38 * fVar9 + fVar41 * fVar17 + pfVar1[3],
                                  fVar36 * fVar12 + fVar38 * fVar8 + fVar41 * fVar16 + pfVar1[2]);
          }
          else {
            puVar2 = (uint64_t *)(lVar33 + 8 + lVar32 * 0x48);
            uStack_138 = *puVar2;
            uStack_130 = puVar2[1];
            puVar2 = (uint64_t *)(lVar33 + 0x18 + lVar32 * 0x48);
            uStack_128 = *puVar2;
            uStack_120 = puVar2[1];
            puVar2 = (uint64_t *)(lVar33 + 0x28 + lVar32 * 0x48);
            uStack_118 = *puVar2;
            uStack_110 = puVar2[1];
            puVar2 = (uint64_t *)(lVar33 + 0x38 + lVar32 * 0x48);
            uStack_108 = *puVar2;
            uStack_100 = puVar2[1];
          }
          fVar37 = *(float *)(lVar33 + 0xc + lVar32 * 0x48);
          fVar39 = *(float *)(lVar33 + 0x10 + lVar32 * 0x48);
          fVar36 = *(float *)(lVar33 + 8 + lVar32 * 0x48);
          fVar38 = *(float *)(lVar33 + 0x18 + lVar32 * 0x48);
          fVar41 = *(float *)(lVar33 + 0x28 + lVar32 * 0x48);
          fVar40 = *(float *)(lVar33 + 0x1c + lVar32 * 0x48);
          fVar36 = fVar36 * fVar36 + fVar37 * fVar37 + fVar39 * fVar39;
          fVar37 = *(float *)(lVar33 + 0x20 + lVar32 * 0x48);
          fVar39 = *(float *)(lVar33 + 0x2c + lVar32 * 0x48);
          fVar38 = fVar38 * fVar38 + fVar40 * fVar40 + fVar37 * fVar37;
          fVar37 = *(float *)(lVar33 + 0x30 + lVar32 * 0x48);
          fVar37 = fVar41 * fVar41 + fVar39 * fVar39 + fVar37 * fVar37;
          if (fVar36 <= fVar38) {
            if (fVar37 <= fVar38) {
              fVar37 = fVar38;
            }
          }
          else if (fVar37 <= fVar36) {
            fVar37 = fVar36;
          }
          lVar29 = *(int64_t *)(param_1 + 8);
          uVar28 = uVar27;
          iStack_2c0 = param_3;
          if (*(int64_t *)(param_1 + 0x10) - lVar29 >> 3 != 0) {
            do {
              lVar29 = *(int64_t *)(lVar29 + uVar28);
              if (*(int *)(lVar29 + 0x178) < 2) {
                lVar33 = *(int64_t *)(lVar29 + 0x28);
                if ((lVar33 != 0) &&
                   (fVar39 = *(float *)(lVar31 + 0x54 + lVar26), fVar39 != 3.4028235e+38)) {
                  fVar41 = uStack_108._4_4_ - *(float *)(lVar33 + 0x124);
                  fVar40 = (float)uStack_108 - *(float *)(lVar33 + 0x120);
                  fVar38 = (float)uStack_100 - *(float *)(lVar33 + 0x128);
                  fVar36 = *(float *)(lVar31 + 0x58 + lVar26);
                  if (fVar39 * fVar39 <
                      (fVar40 * fVar40 + fVar41 * fVar41 + fVar38 * fVar38) - fVar36 * fVar36)
                  goto LAB_1804d84f8;
                }
                if (((*(ushort *)(lVar20 + 8 + lVar21 * 0xc) & 1 << ((byte)uVar27 & 0x1f)) != 0) &&
                   ((fVar39 = *(float *)(lVar29 + 0x174) * 0.2, fVar39 <= 0.0 ||
                    (fVar39 <= fVar37 * *(float *)(lVar31 + 0x5c + lVar26))))) {
                  SystemHealthMonitor(*(uint64_t *)(lVar31 + 0x48 + lVar26),lVar29,&uStack_138,0,
                                &uStack_2c8);
                }
              }
LAB_1804d84f8:
              lVar29 = *(int64_t *)(param_1 + 8);
              uVar34 = (int)uVar27 + 1;
              uVar27 = (uint64_t)uVar34;
              uVar28 = uVar28 + 8;
            } while ((uint64_t)(int64_t)(int)uVar34 <
                     (uint64_t)(*(int64_t *)(param_1 + 0x10) - lVar29 >> 3));
          }
        }
        lVar31 = lVar31 + 0x68;
        lStack_358 = lStack_358 + -1;
      } while (lStack_358 != 0);
    }
    lVar31 = 0;
    uStack_1e4 = 0;
    iVar25 = (int)((*(int64_t *)(lVar35 + 0x50 + lVar30) - *(int64_t *)(lVar35 + 0x48 + lVar30)) /
                  0x30);
    uStack_1db = 0xff;
    lStack_358 = (int64_t)iVar25;
    uStack_1d0 = 0xffffffffffffffff;
    uStack_1c8 = 0xffffffff;
    uStack_1c4 = 0xff;
    uStack_1b8 = 0;
    uStack_1b4 = 0x400;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_194 = 0;
    uStack_180 = 0;
    if (0 < iVar25) {
      do {
        lVar26 = *(int64_t *)(lVar35 + 0x48 + lVar30);
        uStack_1dc = 0;
        uVar34 = *(uint *)(*(int64_t *)
                            (*(int64_t *)(param_1 + 11000) +
                            (int64_t)((int)*(uint *)(lVar31 + lVar26) >> 10) * 8) + 0x18 +
                          (int64_t)(int)(*(uint *)(param_1 + 0x2b18) & *(uint *)(lVar31 + lVar26))
                          * 0xd8);
        lVar33 = (int64_t)(int)(*(uint *)(param_1 + 0x4a8) & uVar34);
        lStack_1d8 = *(int64_t *)(lVar31 + 8 + lVar26);
        lVar29 = *(int64_t *)(*(int64_t *)(param_1 + 0x488) + (int64_t)((int)uVar34 >> 10) * 8);
        uStack_1bc = *(int32_t *)(lStack_1d8 + 0x310);
        uStack_1e8 = 0;
        uStack_1c0 = *(int32_t *)(lStack_1d8 + 0x318);
        iStack_1e0 = param_3;
        pfVar19 = (float *)(**(code **)(**(int64_t **)(lVar31 + 0x10 + lVar26) + 0x158))();
        pfVar1 = (float *)(lVar29 + 0x28 + lVar33 * 0x48);
        fVar3 = *pfVar1;
        fVar6 = pfVar1[1];
        fVar7 = pfVar1[2];
        fVar8 = pfVar1[3];
        pfVar1 = (float *)(lVar29 + 8 + lVar33 * 0x48);
        fVar9 = *pfVar1;
        fVar10 = pfVar1[1];
        fVar11 = pfVar1[2];
        fVar12 = pfVar1[3];
        pfVar1 = (float *)(lVar29 + 0x18 + lVar33 * 0x48);
        fVar13 = *pfVar1;
        fVar14 = pfVar1[1];
        fVar15 = pfVar1[2];
        fVar16 = pfVar1[3];
        fVar37 = pfVar19[1];
        fVar39 = *pfVar19;
        fVar36 = pfVar19[2];
        fVar38 = pfVar19[5];
        fVar41 = pfVar19[4];
        fStack_b8 = fVar37 * fVar13 + fVar39 * fVar9 + fVar36 * fVar3;
        fStack_b4 = fVar37 * fVar14 + fVar39 * fVar10 + fVar36 * fVar6;
        fStack_b0 = fVar37 * fVar15 + fVar39 * fVar11 + fVar36 * fVar7;
        fStack_ac = fVar37 * fVar16 + fVar39 * fVar12 + fVar36 * fVar8;
        fVar37 = pfVar19[6];
        fVar39 = pfVar19[8];
        fStack_a8 = fVar38 * fVar13 + fVar41 * fVar9 + fVar37 * fVar3;
        fStack_a4 = fVar38 * fVar14 + fVar41 * fVar10 + fVar37 * fVar6;
        fStack_a0 = fVar38 * fVar15 + fVar41 * fVar11 + fVar37 * fVar7;
        fStack_9c = fVar38 * fVar16 + fVar41 * fVar12 + fVar37 * fVar8;
        fVar37 = pfVar19[9];
        fVar36 = pfVar19[10];
        fVar38 = pfVar19[0xd];
        fVar41 = pfVar19[0xc];
        fStack_98 = fVar37 * fVar13 + fVar39 * fVar9 + fVar36 * fVar3;
        fStack_94 = fVar37 * fVar14 + fVar39 * fVar10 + fVar36 * fVar6;
        fStack_90 = fVar37 * fVar15 + fVar39 * fVar11 + fVar36 * fVar7;
        fStack_8c = fVar37 * fVar16 + fVar39 * fVar12 + fVar36 * fVar8;
        fVar37 = pfVar19[0xe];
        pfVar1 = (float *)(lVar29 + 0x38 + lVar33 * 0x48);
        fVar39 = *(float *)(lVar29 + 0x28 + lVar33 * 0x48);
        fVar36 = *(float *)(lVar29 + 0x10 + lVar33 * 0x48);
        fVar40 = *(float *)(lVar29 + 8 + lVar33 * 0x48);
        fStack_88 = fVar38 * fVar13 + fVar41 * fVar9 + fVar37 * fVar3 + *pfVar1;
        fStack_84 = fVar38 * fVar14 + fVar41 * fVar10 + fVar37 * fVar6 + pfVar1[1];
        fStack_80 = fVar38 * fVar15 + fVar41 * fVar11 + fVar37 * fVar7 + pfVar1[2];
        fStack_7c = fVar38 * fVar16 + fVar41 * fVar12 + fVar37 * fVar8 + pfVar1[3];
        fVar37 = *(float *)(lVar29 + 0xc + lVar33 * 0x48);
        fVar38 = *(float *)(lVar29 + 0x18 + lVar33 * 0x48);
        fVar41 = *(float *)(lVar29 + 0x1c + lVar33 * 0x48);
        fVar40 = fVar40 * fVar40 + fVar37 * fVar37 + fVar36 * fVar36;
        fVar37 = *(float *)(lVar29 + 0x20 + lVar33 * 0x48);
        fVar36 = *(float *)(lVar29 + 0x2c + lVar33 * 0x48);
        fVar38 = fVar38 * fVar38 + fVar41 * fVar41 + fVar37 * fVar37;
        fVar37 = *(float *)(lVar29 + 0x30 + lVar33 * 0x48);
        fVar37 = fVar39 * fVar39 + fVar36 * fVar36 + fVar37 * fVar37;
        if (fVar40 <= fVar38) {
          if (fVar37 <= fVar38) {
            fVar37 = fVar38;
          }
        }
        else if (fVar37 <= fVar40) {
          fVar37 = fVar40;
        }
        lVar29 = *(int64_t *)(param_1 + 8);
        uVar28 = 0;
        uVar27 = uVar28;
        if (*(int64_t *)(param_1 + 0x10) - lVar29 >> 3 != 0) {
          do {
            lVar29 = *(int64_t *)(lVar29 + uVar27);
            if (((*(int *)(lVar29 + 0x178) < 2) &&
                ((((lVar33 = *(int64_t *)(lVar29 + 0x28), lVar33 == 0 ||
                   (fVar39 = *(float *)(lVar31 + 0x20 + lVar26), fVar39 == 3.4028235e+38)) ||
                  (fVar41 = fStack_84 - *(float *)(lVar33 + 0x124),
                  fVar40 = fStack_88 - *(float *)(lVar33 + 0x120),
                  fVar38 = fStack_80 - *(float *)(lVar33 + 0x128),
                  fVar36 = *(float *)(lVar31 + 0x24 + lVar26),
                  (fVar40 * fVar40 + fVar41 * fVar41 + fVar38 * fVar38) - fVar36 * fVar36 <=
                  fVar39 * fVar39)) &&
                 ((*(ushort *)(lVar20 + 8 + lVar21 * 0xc) & 1 << ((byte)uVar28 & 0x1f)) != 0)))) &&
               ((fVar39 = *(float *)(lVar29 + 0x174) * 0.2, fVar39 <= 0.0 ||
                (fVar39 <= fVar37 * *(float *)(lVar31 + 0x28 + lVar26))))) {
              SystemHealthMonitor(*(uint64_t *)(lVar31 + 0x18 + lVar26),lVar29,&fStack_b8,0,&uStack_1e8)
              ;
            }
            lVar29 = *(int64_t *)(param_1 + 8);
            uVar34 = (int)uVar28 + 1;
            uVar28 = (uint64_t)uVar34;
            uVar27 = uVar27 + 8;
          } while ((uint64_t)(int64_t)(int)uVar34 <
                   (uint64_t)(*(int64_t *)(param_1 + 0x10) - lVar29 >> 3));
        }
        lVar31 = lVar31 + 0x30;
        lStack_358 = lStack_358 + -1;
      } while (lStack_358 != 0);
    }
  }
  return;
}








