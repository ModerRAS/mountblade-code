/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part560.c - 1 个函数

// 函数: void FUN_180577e50(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,
void FUN_180577e50(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,int64_t param_8,
                  int64_t param_9,float param_10,uint64_t param_11,char param_12)

{
  char cVar1;
  int iVar2;
  int8_t auVar3 [16];
  bool bVar4;
  uint64_t uVar5;
  byte bVar6;
  int8_t uVar7;
  int64_t lVar8;
  int32_t *puVar9;
  uint64_t uVar10;
  uint64_t *puVar11;
  float *pfVar12;
  int64_t lVar13;
  int32_t *puVar14;
  char cVar15;
  char cVar16;
  int64_t lVar17;
  int64_t lVar18;
  int64_t lVar19;
  int8_t *puVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  int32_t uVar31;
  float fVar32;
  float fVar33;
  int8_t auVar34 [16];
  int8_t auVar35 [16];
  int32_t uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  int8_t auStack_268 [32];
  float *pfStack_248;
  float *pfStack_240;
  int iStack_238;
  int32_t *puStack_230;
  float fStack_228;
  float fStack_220;
  int8_t uStack_218;
  int32_t *puStack_210;
  float fStack_208;
  float fStack_200;
  int8_t uStack_1f8;
  int8_t uStack_1f0;
  int8_t uStack_1e8;
  int8_t uStack_1e0;
  uint64_t *puStack_1d8;
  float fStack_1c8;
  int32_t uStack_1c4;
  int64_t lStack_1c0;
  uint64_t uStack_1b8;
  float fStack_1b0;
  float fStack_1ac;
  uint64_t uStack_1a8;
  int64_t lStack_1a0;
  int64_t lStack_198;
  float fStack_190;
  uint64_t uStack_188;
  uint64_t uStack_180;
  uint64_t uStack_178;
  uint64_t uStack_170;
  uint64_t uStack_168;
  uint64_t uStack_160;
  uint64_t uStack_158;
  int32_t uStack_148;
  int32_t uStack_144;
  int32_t uStack_140;
  int32_t uStack_13c;
  int32_t uStack_138;
  int32_t uStack_134;
  int32_t uStack_130;
  int32_t uStack_12c;
  float afStack_128 [13];
  int8_t uStack_f4;
  uint64_t uStack_e8;
  
  puVar14 = &uStack_148;
  uStack_e8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_268;
  fVar30 = *(float *)(param_2 + 0x38);
  uStack_168 = param_5;
  uStack_158 = param_7;
  uStack_160 = param_11;
  pfStack_248 = (float *)CONCAT44(pfStack_248._4_4_,0x3f800000);
  fStack_1c8 = fVar30;
  lStack_1a0 = param_4;
  lStack_198 = param_3;
  fVar21 = (float)FUN_18058c9d0(param_1,0x10,param_3,
                                *(int32_t *)(param_9 + (int64_t)*(char *)(param_1 + 0xe1) * 4));
  uStack_1c4 = fVar21;
  fVar22 = (float)func_0x000180534e60(param_1,1);
  fVar23 = (float)func_0x000180534e60(param_1,0);
  bVar6 = 0;
  if (0.0 < fVar23) {
    if (*(int64_t *)(param_1 + 0x2460) != 0) {
      bVar6 = (byte)((*(uint64_t *)(param_1 + 0x2470) |
                     *(uint64_t *)(*(int64_t *)(param_1 + 0x2460) + 0x1d0)) >> 0x24);
    }
    if ((bVar6 & 3) == 2) {
      fVar22 = 1.0 - fVar23;
    }
  }
  fVar24 = (float)FUN_18058cbf0(param_1);
  fVar23 = *(float *)(param_1 + 0x25ac);
  fVar26 = *(float *)(param_1 + 0x2434);
  fVar32 = fVar24;
  if (fVar24 <= fVar22) {
    fVar32 = fVar22;
  }
  uStack_1a8 = CONCAT44(uStack_1a8._4_4_,fVar26);
  fVar30 = fVar30 * 3.0;
  if (fVar32 <= fVar23) {
    fVar23 = fVar23 - fVar30;
    if (fVar23 <= fVar32) {
      fVar23 = fVar32;
    }
  }
  else {
    fVar23 = fVar23 + fVar30;
    if (fVar32 <= fVar23) {
      fVar23 = fVar32;
    }
  }
  fVar30 = fVar26;
  if (fVar26 <= fVar21) {
    fVar30 = fVar21;
  }
  if (fVar30 <= fVar32) {
    fVar30 = fVar32;
  }
  if (fVar23 <= fVar30) {
    fVar30 = fVar23;
  }
  *(float *)(param_1 + 0x25ac) = fVar30;
  fVar30 = ((fVar30 * 6.0 - 15.0) * fVar30 + 10.0) * fVar30 * fVar30 * fVar30;
  if (fVar30 <= 0.0) {
    *(byte *)(param_1 + 0x3424) = *(byte *)(param_1 + 0x3424) & 0xfc;
    *(int32_t *)(param_1 + 0x2568) = 0;
    *(int32_t *)(param_1 + 0x256c) = 0x3f800000;
    *(int32_t *)(param_1 + 0x2570) = 0;
    *(int32_t *)(param_1 + 0x2574) = 0x7f7fffff;
    *(int32_t *)(param_1 + 0x2588) = 0;
    *(int32_t *)(param_1 + 0x258c) = 0x3f800000;
    *(int32_t *)(param_1 + 0x2590) = 0;
    *(int32_t *)(param_1 + 0x2594) = 0x7f7fffff;
    fVar22 = *(float *)(param_1 + 0x70);
    if ((fVar22 <= 1e-05) || (*(int64_t *)(param_1 + 0x2500) != 0)) {
      fVar22 = 0.0;
    }
    else {
      fVar23 = *(float *)(param_1 + 0x6c);
      fVar26 = *(float *)(param_1 + 100);
      fVar24 = fVar23 * *(float *)(param_1 + 0x60);
      fVar32 = fVar26 * *(float *)(param_1 + 0x68);
      fVar23 = (float)atan2f((fVar24 - fVar32) + (fVar24 - fVar32),
                             1.0 - ((fVar26 + fVar26) * fVar26 + (fVar23 + fVar23) * fVar23));
      fVar22 = fVar23 * fVar22 * 0.7;
    }
    lVar19 = *(int64_t *)(param_2 + 0x10);
    lStack_1c0 = *(int64_t *)(param_2 + 0x208);
    pfVar12 = (float *)(lVar19 + 0x70);
    uStack_188 = pfVar12;
    fVar23 = (float)FUN_18058ce10(param_1,*(int32_t *)(param_1 + 0x1284));
    uStack_1b8 = 0;
    fStack_1b0 = 1.0;
    fStack_1ac = 3.4028235e+38;
    if ((0.0 < fVar23) &&
       (lVar13 = *(int64_t *)(*(int64_t *)(param_2 + 0x10) + 0x20), lVar13 != 0)) {
      pfStack_240 = (float *)CONCAT71(pfStack_240._1_7_,1);
      uStack_f4 = 0;
      afStack_128[0xc] = 0.0;
      pfStack_248 = (float *)CONCAT44(pfStack_248._4_4_,0x51b189);
      afStack_128[8] = 0.0;
      afStack_128[9] = 0.0;
      afStack_128[10] = 0.0;
      afStack_128[0xb] = 0.0;
      afStack_128[4] = 0.0;
      afStack_128[5] = 0.0;
      afStack_128[6] = 1.0;
      afStack_128[7] = 3.4028235e+38;
      PhysicsSystem_JointManager(lVar13,lVar19 + 0xa0);
      fVar26 = *(float *)(lVar19 + 0xa8) - afStack_128[0xc];
      fVar32 = SQRT(*(float *)(lVar19 + 0x80) * *(float *)(lVar19 + 0x80) +
                    *(float *)(lVar19 + 0x84) * *(float *)(lVar19 + 0x84) +
                    *(float *)(lVar19 + 0x88) * *(float *)(lVar19 + 0x88)) * 0.3;
      if (fVar26 < fVar32) {
        fVar24 = *(float *)(lVar19 + 0x9c);
        fVar37 = *(float *)(lVar19 + 0x74) * afStack_128[5] + *pfVar12 * afStack_128[4] +
                 *(float *)(lVar19 + 0x78) * afStack_128[6];
        fVar39 = *(float *)(lVar19 + 0x84) * afStack_128[5] +
                 *(float *)(lVar19 + 0x80) * afStack_128[4] +
                 *(float *)(lVar19 + 0x88) * afStack_128[6];
        fVar40 = *(float *)(lVar19 + 0x94) * afStack_128[5] +
                 *(float *)(lVar19 + 0x90) * afStack_128[4] +
                 *(float *)(lVar19 + 0x98) * afStack_128[6];
        fVar33 = fVar39 * fVar39 + fVar37 * fVar37 + fVar40 * fVar40;
        auVar34 = rsqrtss(ZEXT416((uint)fVar33),ZEXT416((uint)fVar33));
        fVar38 = auVar34._0_4_;
        fVar33 = fVar38 * 0.5 * (3.0 - fVar33 * fVar38 * fVar38);
        fVar26 = 1.0 - fVar26 / fVar32;
        if (0.0 <= fVar26) {
          if (1.0 <= fVar26) {
            fVar26 = 1.0;
          }
        }
        else {
          fVar26 = 0.0;
        }
        fVar26 = fVar26 * fVar23;
        fStack_1b0 = (fVar33 * fVar40 - 1.0) * fVar26 + 1.0;
        fStack_1ac = ((fVar24 * afStack_128[5] + fVar24 * afStack_128[4] + fVar24 * afStack_128[6])
                     - 3.4028235e+38) * fVar26 + 3.4028235e+38;
        uStack_1b8 = CONCAT44(fVar26 * fVar33 * fVar39,fVar26 * fVar33 * fVar37);
      }
    }
    puStack_1d8 = &uStack_1b8;
    fVar23 = *(float *)(param_1 + 0xa0);
    pfStack_240 = (float *)(param_1 + 0x80);
    uStack_1e0 = *(int8_t *)(param_1 + 0xe0);
    uStack_1e8 = *(int8_t *)(param_1 + 0xdf);
    uStack_1f0 = *(int8_t *)(param_1 + 0xe3);
    uStack_1f8 = *(int8_t *)(param_1 + 0xe2);
    uStack_218 = *(int8_t *)(param_1 + 0xde);
    fStack_200 = 1.1 / (fVar21 + 0.1);
    fStack_208 = fVar23 * fVar30;
    fStack_220 = 1.1 / (1.1 - (float)uStack_1a8);
    if (fStack_220 <= fStack_200) {
      fStack_220 = fStack_200;
    }
    iStack_238 = CONCAT31(iStack_238._1_3_,*(int8_t *)(param_1 + 0xe1));
    pfStack_248 = (float *)CONCAT44(pfStack_248._4_4_,*(int32_t *)(param_1 + 0x74));
    puStack_230 = (int32_t *)(param_1 + 0x2588);
    fStack_228 = fVar30;
    puStack_210 = (int32_t *)(param_1 + 0x2568);
    fStack_190 = fVar23;
    FUN_1806603d0(param_1 + 0xa218,param_3,param_2,fVar22);
    lVar19 = 2;
    if (*(int64_t *)(lStack_1a0 + 0x808) != 0) {
      lVar13 = (int64_t)*(char *)(param_1 + 0x25e8);
      puVar9 = puVar14;
      uStack_1b8 = lVar13;
      if ((*(char *)(param_1 + 0x261c) < '\0') && (cVar16 = '\0', lVar18 = 0, 0 < lVar13)) {
        do {
          bVar6 = *(byte *)(lVar18 + 0x25e1 + param_1);
          if ((*(uint64_t *)(lStack_1a0 + 0x810) >> ((uint64_t)bVar6 & 0x3f) & 1) != 0) {
            lVar8 = *(int64_t *)(param_2 + 0x208);
            cVar15 = '\0';
            lVar17 = (int64_t)(char)bVar6 * 0x1b0;
            if ('\0' < *(char *)(*(int64_t *)(lVar8 + 0x140) + 0xf1 + lVar17)) {
              do {
                cVar1 = *(char *)((int64_t)cVar15 +
                                 *(int64_t *)(*(int64_t *)(lVar8 + 0x140) + 0xf8 + lVar17));
                lVar8 = 0;
                do {
                  if (cVar1 == *(char *)(param_1 + 0x25e1 + lVar8)) goto LAB_1805788ef;
                  lVar8 = lVar8 + 1;
                } while (lVar8 < lVar13);
                lVar8 = (int64_t)cVar16;
                cVar16 = cVar16 + '\x01';
                *(char *)(lVar8 + 0x261c + param_1) = cVar1;
LAB_1805788ef:
                lVar8 = *(int64_t *)(param_2 + 0x208);
                cVar15 = cVar15 + '\x01';
              } while (cVar15 < *(char *)(*(int64_t *)(lVar8 + 0x140) + 0xf1 + lVar17));
            }
          }
          lVar18 = lVar18 + 1;
          param_3 = lStack_198;
        } while (lVar18 < lVar13);
      }
      do {
        func_0x000180074f10(puVar9);
        lVar19 = lVar19 + -1;
        puVar9 = puVar9 + 4;
      } while (lVar19 != 0);
      if (0 < lVar13) {
        lStack_198 = 0;
        do {
          bVar6 = *(byte *)(param_1 + 0x25e1 + lStack_198);
          if ((*(uint64_t *)(lStack_1a0 + 0x810) >> ((uint64_t)bVar6 & 0x3f) & 1) != 0) {
            cVar16 = '\0';
            uStack_1a8 = (uint64_t)(char)bVar6;
            lVar18 = uStack_1a8 * 0x1b0;
            lVar19 = *(int64_t *)(*(int64_t *)(param_2 + 0x208) + 0x140);
            if ('\0' < *(char *)(lVar19 + 0xf1 + lVar18)) {
              do {
                cVar15 = *(char *)((int64_t)cVar16 + *(int64_t *)(lVar19 + 0xf8 + lVar18));
                if (cVar15 == *(char *)(param_1 + 0x261c)) {
                  puVar9 = (int32_t *)
                           CoreSystem_AuthenticationHandler0(param_3,cVar15,*(uint64_t *)(param_2 + 0x208));
                  uStack_148 = *puVar9;
                  uStack_144 = puVar9[1];
                  uStack_140 = puVar9[2];
                  uStack_13c = puVar9[3];
                }
                else if (cVar15 == *(char *)(param_1 + 0x261d)) {
                  puVar9 = (int32_t *)
                           CoreSystem_AuthenticationHandler0(param_3,cVar15,*(uint64_t *)(param_2 + 0x208));
                  uStack_138 = *puVar9;
                  uStack_134 = puVar9[1];
                  uStack_130 = puVar9[2];
                  uStack_12c = puVar9[3];
                }
                cVar16 = cVar16 + '\x01';
                lVar13 = uStack_1b8;
              } while (cVar16 < *(char *)(lVar19 + 0xf1 + lVar18));
            }
            lVar19 = (uStack_1a8 + 0x82) * 0x10;
            pfVar12 = (float *)(lVar19 + param_3);
            fVar30 = *pfVar12;
            fVar21 = pfVar12[1];
            fVar22 = pfVar12[2];
            fVar23 = pfVar12[3];
            pfVar12 = (float *)(lVar19 + lStack_1a0);
            fVar26 = *pfVar12;
            fVar32 = pfVar12[1];
            fVar24 = pfVar12[2];
            fVar33 = pfVar12[3];
            fVar38 = fVar22 * fVar33 * 1.0 + fVar30 * fVar32 * 1.0 +
                     (fVar26 * fVar21 - fVar23 * fVar24);
            fVar37 = fVar23 * fVar32 * 1.0 + fVar30 * fVar24 * 1.0 +
                     (fVar26 * fVar22 - fVar21 * fVar33);
            fVar39 = fVar21 * fVar24 * 1.0 + fVar30 * fVar33 * 1.0 +
                     (fVar26 * fVar23 - fVar22 * fVar32);
            fVar40 = fVar23 * fVar33 * -1.0 + fVar22 * fVar24 * -1.0 +
                     (fVar26 * fVar30 - fVar21 * fVar32);
            fVar26 = fVar30;
            fVar32 = fVar21;
            fVar24 = fVar22;
            fVar33 = fVar23;
            if ((0.001 <= param_10) &&
               (fVar26 = fVar40, fVar32 = fVar38, fVar24 = fVar37, fVar33 = fVar39,
               param_10 <= 0.999)) {
              fVar26 = fVar22 * fVar37;
              fVar32 = fVar23 * fVar39;
              afStack_128[4] = -1.0;
              afStack_128[5] = -1.0;
              afStack_128[6] = -1.0;
              afStack_128[7] = -1.0;
              auVar34._0_4_ = fVar26 + fVar30 * fVar40;
              auVar34._4_4_ = fVar32 + fVar21 * fVar38;
              auVar34._8_4_ = fVar26 + fVar26;
              auVar34._12_4_ = fVar32 + fVar32;
              auVar35._4_12_ = auVar34._4_12_;
              auVar35._0_4_ = auVar34._0_4_ + auVar34._4_4_;
              afStack_128[0] = 1.0;
              afStack_128[1] = 1.0;
              afStack_128[2] = 1.0;
              afStack_128[3] = 1.0;
              uVar25 = movmskps((int)lStack_1a0,auVar35);
              uVar10 = (uint64_t)(uVar25 & 1);
              fVar26 = afStack_128[uVar10 * 4];
              fVar32 = afStack_128[uVar10 * 4 + 1];
              fVar24 = afStack_128[uVar10 * 4 + 2];
              fVar33 = afStack_128[uVar10 * 4 + 3];
              if (0.9995 < ABS(auVar35._0_4_)) {
                fVar27 = 1.0 - param_10;
                fVar26 = fVar27 * fVar30 + param_10 * fVar26 * fVar40;
                fVar32 = fVar27 * fVar21 + param_10 * fVar32 * fVar38;
                fVar40 = fVar27 * fVar22 + param_10 * fVar24 * fVar37;
                fVar39 = fVar27 * fVar23 + param_10 * fVar33 * fVar39;
                fVar30 = fVar39 * fVar39 + fVar26 * fVar26;
                fVar21 = fVar40 * fVar40 + fVar32 * fVar32;
                fVar38 = fVar30 + fVar32 * fVar32 + fVar40 * fVar40;
                fVar37 = fVar21 + fVar26 * fVar26 + fVar39 * fVar39;
                auVar3._4_4_ = fVar30 + fVar21 + 1.1754944e-38;
                auVar3._0_4_ = fVar21 + fVar30 + 1.1754944e-38;
                auVar3._8_4_ = fVar38 + 1.1754944e-38;
                auVar3._12_4_ = fVar37 + 1.1754944e-38;
                auVar34 = rsqrtps(auVar35,auVar3);
                fVar22 = auVar34._0_4_;
                fVar23 = auVar34._4_4_;
                fVar24 = auVar34._8_4_;
                fVar33 = auVar34._12_4_;
                fVar26 = fVar26 * (3.0 - fVar22 * fVar22 * (fVar21 + fVar30)) * fVar22 * 0.5;
                fVar32 = fVar32 * (3.0 - fVar23 * fVar23 * (fVar30 + fVar21)) * fVar23 * 0.5;
                fVar24 = fVar40 * (3.0 - fVar24 * fVar24 * fVar38) * fVar24 * 0.5;
                fVar33 = fVar39 * (3.0 - fVar33 * fVar33 * fVar37) * fVar33 * 0.5;
              }
              else {
                fVar27 = (float)acosf();
                fVar28 = (float)sinf();
                fVar29 = (float)sinf(fVar27 - fVar27 * param_10);
                fVar29 = fVar29 * (1.0 / fVar28);
                fVar27 = (float)sinf(fVar27 * param_10);
                fVar27 = fVar27 * (1.0 / fVar28);
                fVar26 = fVar29 * fVar30 + fVar27 * fVar26 * fVar40;
                fVar32 = fVar29 * fVar21 + fVar27 * fVar32 * fVar38;
                fVar24 = fVar29 * fVar22 + fVar27 * fVar24 * fVar37;
                fVar33 = fVar29 * fVar23 + fVar27 * fVar33 * fVar39;
              }
            }
            pfVar12 = (float *)(lVar19 + param_3);
            *pfVar12 = fVar26;
            pfVar12[1] = fVar32;
            pfVar12[2] = fVar24;
            pfVar12[3] = fVar33;
            *(uint64_t *)(param_3 + 0x800) =
                 *(uint64_t *)(param_3 + 0x800) |
                 *(uint64_t *)(*(int64_t *)(lStack_1c0 + 0x140) + 0xe8 + lVar18);
            *(uint64_t *)(param_3 + 0x808) =
                 *(uint64_t *)(param_3 + 0x808) | 1L << (uStack_1a8 & 0x3f);
          }
          lStack_198 = lStack_198 + 1;
          fVar23 = fStack_190;
          fVar21 = uStack_1c4;
        } while (lStack_198 < lVar13);
      }
      lVar19 = 2;
      puVar20 = (int8_t *)(param_1 + 0x261c);
      do {
        FUN_18022b240(param_3,*puVar20,puVar14,*(uint64_t *)(param_2 + 0x208));
        puVar14 = puVar14 + 4;
        puVar20 = puVar20 + 1;
        lVar19 = lVar19 + -1;
        pfVar12 = uStack_188;
      } while (lVar19 != 0);
    }
    lVar13 = 0;
    lVar19 = 2;
    if ((*(int64_t *)(param_1 + 0x3440) != 0) || (*(int64_t *)(param_1 + 0x3448) != 0)) {
      (**(code **)(param_1 + 0x3448))(*(int64_t *)(param_1 + 0x3440),fStack_1c8,param_3,uStack_168)
      ;
    }
    if (*(float *)(param_1 + 0xa0) * *(float *)(param_1 + 0xa9e0) <= 0.0) {
      *(float *)(param_1 + 0xa9c8) = pfVar12[0xe];
      *(float *)(param_1 + 0xabb8) = pfVar12[0xe];
      *(int32_t *)(param_2 + 0x180) = 0;
      *(float *)(param_1 + 0x2610) = pfVar12[0xe];
    }
    else {
      pfStack_240 = (float *)CONCAT71(pfStack_240._1_7_,*(int8_t *)(param_1 + 0xa8));
      pfStack_248 = (float *)CONCAT44(pfStack_248._4_4_,*(float *)(param_1 + 0xa0));
      FUN_1805735c0(param_1,param_3,param_2,uStack_160);
    }
    if (param_12 != '\0') {
      puVar11 = &uStack_188;
      do {
        func_0x000180074f10(puVar11);
        lVar18 = lStack_1c0;
        puVar11 = puVar11 + 2;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      fVar30 = *(float *)(param_1 + 0xa4);
      if (((fVar30 <= 0.0) || (*(float *)(param_1 + 42000) <= 0.0)) ||
         ((*(uint64_t *)(lStack_1c0 + 0x150) >> ((uint64_t)*(byte *)(param_1 + 0xa2e4) & 0x3f) & 1
          ) == 0)) {
        bVar4 = false;
        uVar5 = uStack_158;
      }
      else {
        bVar4 = true;
        puVar11 = (uint64_t *)CoreSystem_AuthenticationHandler0(param_3,*(int8_t *)(param_1 + 0x2603),lStack_1c0);
        uStack_188 = (float *)*puVar11;
        uStack_180 = puVar11[1];
        puVar11 = (uint64_t *)CoreSystem_AuthenticationHandler0(param_3,*(int8_t *)(param_1 + 0x2604),lVar18);
        uStack_178 = *puVar11;
        uStack_170 = puVar11[1];
        uVar5 = uStack_158;
      }
      do {
        lVar19 = lVar13 * 0x1f0;
        iVar2 = *(int *)(lVar19 + 0xa400 + param_1);
        fVar22 = fVar30;
        if ((iVar2 != 0) && (fVar22 = fVar23, iVar2 != 1)) {
          fVar22 = 1.0;
        }
        if ((0.0 < fVar22 * *(float *)(lVar19 + 42000 + param_1)) &&
           (lVar19 = param_1 + 0xa240 + lVar19, -1 < *(char *)(lVar19 + 0xa4))) {
          fVar26 = *(float *)(lVar19 + 0x1d0);
          fVar22 = ((fVar26 * 6.0 - 15.0) * fVar26 + 10.0) * fVar26 * fVar26 * fVar26 * fVar22;
          if (*(char *)(lVar19 + 0xa6) < '\x04') {
            pfStack_248 = (float *)CONCAT44(pfStack_248._4_4_,fVar22);
            FUN_180662320(lVar19,param_3,pfVar12);
          }
          else {
            iStack_238 = (*(int64_t *)(param_2 + 0x28) != 0) - 1;
            if ((*(char *)(lVar19 + 0x1e0) == '\0') && (*(float *)(lVar19 + 0x1d4) == 0.0)) {
              uVar7 = 1;
            }
            else {
              uVar7 = 0;
            }
            fStack_220 = (float)CONCAT31(fStack_220._1_3_,uVar7);
            puStack_230 = (int32_t *)CONCAT44(puStack_230._4_4_,*(int32_t *)(param_2 + 0x38));
            pfStack_248 = pfVar12;
            pfStack_240 = *(float **)(param_2 + 0x208);
            fStack_228 = fVar22;
            if (lVar13 == 0) {
              FUN_180663300();
            }
            else {
              FUN_180665580(lVar19,param_3,fVar22,uVar5);
            }
          }
        }
        lVar19 = lStack_1c0;
        lVar13 = lVar13 + 1;
      } while (lVar13 < 5);
      if (0.0 < fVar30) {
        if (bVar4) {
          FUN_18022b240(param_3,*(int8_t *)(param_1 + 0x2603),&uStack_188,lStack_1c0);
          FUN_18022b240(param_3,*(int8_t *)(param_1 + 0x2604),&uStack_178,lVar19);
        }
        if (((*(int64_t *)(param_1 + 0x2500) == 0) && (0.0 < *(float *)(param_1 + 0xa9e0))) &&
           (cVar16 = *(char *)(param_1 + 0x2603),
           0.0 < (1.0 - *(float *)(param_8 + (int64_t)cVar16 * 4)) * fVar30 *
                 (1.0 - *(float *)(param_9 + (int64_t)cVar16 * 4)))) {
          fStack_1c8 = (float)CONCAT22(fStack_1c8._2_2_,*(int16_t *)(param_1 + 0x2605));
          pfStack_240 = &fStack_1c8;
          pfStack_248 = (float *)&uStack_1c4;
          uStack_1c4 = (float)CONCAT31(CONCAT21(uStack_1c4._2_2_,*(int8_t *)(param_1 + 0x2604)),
                                       cVar16);
          FUN_18065aad0(param_1 + 0x3460,param_2,param_3);
        }
      }
    }
    if ((*(int64_t *)(param_1 + 0xabf0) != 0) && (*(char *)(param_1 + 0x25c0) != '\0')) {
      if (fVar21 <= 0.0) {
        *(int8_t *)(*(int64_t *)(param_1 + 0xabf0) + 0x48) = 0;
      }
      if ((render_system_memory == 0) || (*(char *)(render_system_memory + 0x87b718) == '\0')) {
        FUN_1805ee510(*(uint64_t *)(param_1 + 0xabf0),param_2,*(int8_t *)(param_1 + 0xde));
      }
    }
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_e8 ^ (uint64_t)auStack_268);
  }
  uStack_188 = *(float **)(param_1 + 0x2578);
  uStack_180 = *(uint64_t *)(param_1 + 0x2580);
  if (0.0 < fVar24) {
    uVar36 = (int32_t)uStack_180;
LAB_1805780a1:
    uVar25 = (uint)uStack_188;
    uVar31 = uStack_188._4_4_;
  }
  else {
    if (0.0 < fVar22) {
      uStack_188 = *(float **)(param_1 + 0x2598);
      uStack_180 = *(uint64_t *)(param_1 + 0x25a0);
      uVar36 = *(int32_t *)(param_1 + 0x25a0);
      goto LAB_1805780a1;
    }
    uVar25 = 0;
    uVar31 = 0x3f800000;
    uVar36 = 0;
  }
  fVar30 = (float)atan2f(uVar25 ^ 0x80000000,uVar31);
  fVar21 = (float)asinf(uVar36);
  if (((uStack_1c4 == 0.0) || (uStack_1c4 == 1.0)) && ((fVar26 == 0.0 || (fVar26 == 1.0)))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  fVar22 = (float)atan2f(*(uint *)(param_1 + 0x2568) ^ 0x80000000,*(int32_t *)(param_1 + 0x256c))
  ;
  fVar23 = (float)asinf(*(int32_t *)(param_1 + 0x2570));
  bVar6 = *(byte *)(param_1 + 0x3424);
  fVar21 = (fVar21 - fVar23) * (fVar21 - fVar23) + (fVar30 - fVar22) * (fVar30 - fVar22);
  if (((bVar6 & 4) == 0) || (bVar4)) {
    fVar23 = 4.3500004;
  }
  else {
    fVar23 = 21.75;
  }
  fVar23 = fVar23 * fStack_1c8;
  if (((bVar6 & 1) == 0) && (fVar21 <= fVar23 * fVar23)) goto LAB_180578237;
  fVar26 = 5.0;
  fVar21 = SQRT(fVar21);
  if ((bVar6 & 4) == 0) {
    if (bVar4) goto LAB_1805781ca;
  }
  else if (bVar4) {
LAB_1805781ca:
    fVar26 = 2.5;
  }
  else {
    fVar26 = 1.0;
  }
  if (0.01 <= fVar21) {
    fVar32 = fVar21;
    if (0.7 <= fVar21) {
      fVar32 = 0.7;
    }
  }
  else {
    fVar32 = 0.01;
  }
  fVar26 = fVar32 * fVar23 * fVar26;
  if (fVar26 < fVar21) {
    *(byte *)(param_1 + 0x3424) = bVar6 | 1;
    fVar21 = (float)exp2f((-1.0 / fVar21) * fVar26);
    fVar30 = (fVar22 - fVar30) * fVar21 + fVar30;
  }
  else {
    *(byte *)(param_1 + 0x3424) = bVar6 & 0xfe;
  }
LAB_180578237:
                    // WARNING: Subroutine does not return
  AdvancedSystemController(fVar30);
}



char FUN_180579040(int64_t *param_1,int *param_2)

{
  int iVar1;
  uint64_t uVar2;
  int64_t lVar3;
  char cVar4;
  int64_t lVar5;
  uint64_t uVar6;
  
  cVar4 = FUN_18058a190();
  if (((cVar4 != '\0') && (param_2[1] != -1)) && (param_1[0x157e] != 0)) {
    lVar5 = (**(code **)(*param_1 + 0x128))(param_1,*param_2);
    if (lVar5 != 0) {
      uVar2 = *(uint64_t *)(lVar5 + 0x1d0);
      lVar3 = param_1[0x157e];
      iVar1 = *(int *)(lVar5 + 0x1f8);
      if ((*(char *)((int64_t)param_2 + 0x2b) != '\0') || (*(int *)(lVar3 + 0x1110) != iVar1)) {
        *(int *)(lVar3 + 0x1110) = iVar1;
        *(byte *)(lVar3 + 0x1116) = (byte)(uVar2 >> 0x26) & 1;
        if (iVar1 != -1) {
          *(int32_t *)(lVar3 + 0x1118) = 0xffffffff;
        }
      }
      lVar3 = param_1[0x157e];
      uVar6 = FUN_180403b90(lVar5);
      FUN_1805ef510(lVar3,2 - (uint)(*param_2 != 0),uVar6);
    }
  }
  return cVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



