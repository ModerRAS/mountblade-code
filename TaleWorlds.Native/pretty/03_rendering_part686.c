/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part686.c - 1 个函数
// 函数: void function_65aad0(int64_t param_1,int64_t param_2,int64_t param_3,float param_4,
void function_65aad0(int64_t param_1,int64_t param_2,int64_t param_3,float param_4,
                  int8_t *param_5,char *param_6)
{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  char cVar5;
  uint64_t uVar6;
  int8_t auVar7 [16];
  int8_t auVar8 [16];
  int8_t auVar9 [16];
  int8_t auVar10 [16];
  uint uVar11;
  int64_t lVar12;
  float *pfVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t lVar16;
  int64_t lVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  int64_t lVar20;
  float *pfVar21;
  int8_t *puVar22;
  float fVar23;
  float fVar24;
  float extraout_XMM0_Da;
  float fVar25;
  float extraout_XMM0_Da_00;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int8_t auVar30 [16];
  int8_t auVar31 [16];
  int8_t auVar32 [16];
  int8_t auVar33 [16];
  int8_t auVar34 [16];
  int8_t auVar35 [16];
  int8_t auVar36 [16];
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
  float fVar48;
  int8_t stack_array_1c8 [32];
  int32_t local_var_1a8;
  int8_t local_var_1a0;
  float fStack_198;
  float fStack_194;
  int64_t lStack_190;
  int64_t lStack_188;
  char *pcStack_180;
  uint64_t local_var_178;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  int64_t lStack_160;
  int64_t lStack_158;
  int64_t lStack_150;
  char *pcStack_148;
  int64_t lStack_140;
  int8_t *plocal_var_138;
  float afStack_130 [15];
  int8_t local_var_f4;
  uint64_t local_var_e8;
  local_var_e8 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1c8;
  fVar39 = *(float *)(param_1 + 0x6150);
  lStack_188 = *(int64_t *)(param_2 + 0x208);
  plocal_var_138 = param_5;
  pcStack_180 = param_6;
  lStack_158 = 2;
  fStack_198 = ((fVar39 * 6.0 - 15.0) * fVar39 + 10.0) * fVar39 * fVar39 * fVar39;
  fVar39 = (1.0 - (fStack_198 + *(float *)(param_1 + 0x6174))) * param_4;
  lStack_190 = param_3;
  fStack_168 = param_4;
  lStack_160 = param_1;
  lStack_150 = param_2;
  if ((0.0 < fVar39) && (lVar12 = (int64_t)*(int *)(param_1 + 0x60), 0 < *(int *)(param_1 + 0x60)))
  {
    pfVar21 = afStack_130;
    lVar20 = 0x12b8;
    lVar16 = -0x2610;
    lVar17 = 2;
    do {
      *pfVar21 = 0.0;
      auVar38 = ZEXT816(0);
      lVar14 = 0;
      if (3 < lVar12) {
        pfVar13 = (float *)(param_1 + 0x271c + lVar20);
        lVar15 = (lVar12 - 4U >> 2) + 1;
        lVar14 = lVar15 * 4;
        do {
          fVar27 = (1.0 - pfVar13[-0x9ac]) * 0.8;
          fVar23 = (1.0 - pfVar13[-0x4d6]) * 0.8;
          if (fVar27 <= 0.0) {
            fVar27 = 0.0;
          }
          if (fVar23 <= 0.0) {
            fVar23 = 0.0;
          }
          pfVar2 = (float *)((int64_t)pfVar13 + lVar16 + -0x1358);
          pfVar1 = (float *)(lVar16 + (int64_t)pfVar13);
          fVar28 = (1.0 - *pfVar13) * 0.8;
          fVar24 = (1.0 - pfVar13[0x4d6]) * 0.8;
          if (fVar28 <= 0.0) {
            fVar28 = 0.0;
          }
          if (fVar24 <= 0.0) {
            fVar24 = 0.0;
          }
          pfVar3 = (float *)((int64_t)pfVar13 + lVar16 + 0x1358);
          pfVar4 = (float *)((int64_t)pfVar13 + lVar16 + 0x26b0);
          pfVar13 = pfVar13 + 0x1358;
          fVar23 = fVar27 * fVar39 * *pfVar2 + auVar38._0_4_ + fVar23 * fVar39 * *pfVar1 +
                   fVar28 * fVar39 * *pfVar3 + fVar24 * fVar39 * *pfVar4;
          auVar38 = ZEXT416((uint)fVar23);
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        *pfVar21 = fVar23;
      }
      if (lVar14 < lVar12) {
        pfVar13 = (float *)(param_1 + 0x6c + lVar14 * 0x1358);
        lVar14 = lVar12 - lVar14;
        do {
          fVar23 = (1.0 - *(float *)(lVar20 + (int64_t)pfVar13)) * 0.8;
          if (fVar23 <= 0.0) {
            fVar23 = 0.0;
          }
          fVar27 = *pfVar13;
          pfVar13 = pfVar13 + 0x4d6;
          auVar38._0_4_ = auVar38._0_4_ + fVar23 * fVar39 * fVar27;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        *pfVar21 = auVar38._0_4_;
      }
      pfVar21 = pfVar21 + 1;
      lVar16 = lVar16 + -100;
      lVar20 = lVar20 + 100;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    pfVar21 = afStack_130;
    lVar12 = (int64_t)param_5 - (int64_t)param_6;
    lVar17 = -0x1334;
    lVar16 = 0x1328;
    lStack_140 = 2;
    pcStack_148 = param_6;
    local_var_178 = lVar12;
    do {
      fVar39 = *pfVar21;
      if (0.0001 < fVar39) {
        lVar20 = (int64_t)*(int *)(param_1 + 0x60);
        fVar23 = 0.0;
        if (0 < lVar20) {
          pfVar13 = (float *)(lVar16 + 0x78 + param_1);
          do {
            if (*(char *)((int64_t)pfVar13 + 6) == '\0') {
              fVar27 = 0.0;
            }
            else {
              fVar27 = *pfVar13 * 0.05;
            }
            fVar24 = pfVar13[-4];
            fVar28 = pfVar13[-1];
            if (fVar27 + fVar24 < fVar28) {
              fVar27 = *pfVar13;
              fVar40 = fVar24;
              if (0.0 < fVar27) {
                fVar40 = fVar24 / fVar27;
              }
              if (*(char *)((int64_t)pfVar13 + 6) == '\0') {
                fVar29 = 0.0;
              }
              else {
                fVar29 = fVar27 * 0.05;
              }
              if (fVar29 + fVar24 < fVar28) {
                fVar28 = fVar28 - fVar24;
              }
              else {
                fVar28 = pfVar13[-2];
              }
              if (0.0 < fVar27) {
                fVar28 = fVar28 / fVar27;
              }
              fVar28 = fVar28 / (1.0 - fVar40);
              if (1.0 <= fVar28) {
                fVar28 = 1.0;
              }
              fVar24 = fVar28 * 50.0 - 10.0;
              fVar27 = 2.0 - ABS((fVar28 + fVar28) - 1.0) * 2.0;
              if (1.0 <= fVar27) {
                fVar27 = 1.0;
              }
              fVar23 = fVar23 + (fVar24 / (ABS(fVar24) + 1.0) -
                                (fVar24 - 30.0) / (ABS(fVar24 - 30.0) + 1.0)) * 0.53333336 * fVar27
                                * *(float *)(lVar17 + (int64_t)pfVar13);
            }
            pfVar13 = pfVar13 + 0x4d6;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
        }
        uVar18 = (uint64_t)pcStack_148[lVar12];
        cVar5 = *pcStack_148;
        lVar12 = uVar18 * 0x1b0;
        pfVar13 = (float *)(*(int64_t *)(lStack_188 + 0x140) + 0x90 + lVar12);
        fVar27 = *pfVar13;
        fVar24 = pfVar13[1];
        fVar28 = pfVar13[2];
        fVar40 = pfVar13[3];
        pfVar13 = (float *)(*(int64_t *)(lStack_188 + 0x140) + 0x40 + lVar12);
        fVar29 = *pfVar13;
        fVar44 = pfVar13[1];
        fVar46 = pfVar13[2];
        fVar48 = pfVar13[3];
        fStack_194 = fVar39;
        pfVar13 = (float *)CoreSystem_AuthenticationHandler0(lStack_190,*(int8_t *)(uVar18 + 0x100 + lStack_188),
                                         lStack_188);
        fVar47 = *pfVar13;
        fVar41 = pfVar13[1];
        fVar25 = pfVar13[2];
        fVar26 = pfVar13[3];
        fVar42 = fVar25 * fVar48 * -1.0 + fVar29 * fVar41 * -1.0 + fVar47 * fVar44 + fVar26 * fVar46
        ;
        fVar43 = fVar26 * fVar44 * -1.0 + fVar29 * fVar25 * -1.0 + fVar47 * fVar46 + fVar41 * fVar48
        ;
        fVar45 = fVar41 * fVar46 * -1.0 + fVar29 * fVar26 * -1.0 + fVar47 * fVar48 + fVar25 * fVar44
        ;
        fVar47 = fVar26 * fVar48 * 1.0 + fVar29 * fVar47 * 1.0 + fVar25 * fVar46 + fVar41 * fVar44;
        fVar29 = fVar47;
        fVar44 = fVar42;
        fVar46 = fVar43;
        fVar48 = fVar45;
        if ((0.001 <= fVar23) &&
           (fVar29 = fVar27, fVar44 = fVar24, fVar46 = fVar28, fVar48 = fVar40, fVar23 <= 0.999)) {
          fVar29 = fVar28 * fVar43;
          fVar44 = fVar40 * fVar45;
          afStack_130[6] = -1.0;
          afStack_130[7] = -1.0;
          afStack_130[8] = -1.0;
          afStack_130[9] = -1.0;
          auVar30._0_4_ = fVar29 + fVar27 * fVar47;
          auVar30._4_4_ = fVar44 + fVar24 * fVar42;
          auVar30._8_4_ = fVar29 + fVar29;
          auVar30._12_4_ = fVar44 + fVar44;
          auVar31._4_12_ = auVar30._4_12_;
          auVar31._0_4_ = auVar30._0_4_ + auVar30._4_4_;
          afStack_130[2] = 1.0;
          afStack_130[3] = 1.0;
          afStack_130[4] = 1.0;
          afStack_130[5] = 1.0;
          uVar11 = movmskps((int)pfVar13,auVar31);
          uVar19 = (uint64_t)(uVar11 & 1);
          pfVar13 = (float *)(uVar19 * 2);
          fVar29 = afStack_130[uVar19 * 4 + 2];
          fVar44 = afStack_130[uVar19 * 4 + 3];
          fVar46 = afStack_130[uVar19 * 4 + 4];
          fVar48 = afStack_130[uVar19 * 4 + 5];
          if (0.9995 < ABS(auVar31._0_4_)) {
            fVar41 = 1.0 - fVar23;
            fVar29 = fVar47 * fVar41 + fVar23 * fVar29 * fVar27;
            fVar44 = fVar42 * fVar41 + fVar23 * fVar44 * fVar24;
            fVar25 = fVar43 * fVar41 + fVar23 * fVar46 * fVar28;
            fVar26 = fVar45 * fVar41 + fVar23 * fVar48 * fVar40;
            fVar27 = fVar26 * fVar26 + fVar29 * fVar29;
            fVar24 = fVar25 * fVar25 + fVar44 * fVar44;
            fVar47 = fVar27 + fVar44 * fVar44 + fVar25 * fVar25;
            fVar41 = fVar24 + fVar29 * fVar29 + fVar26 * fVar26;
            auVar10._4_4_ = fVar27 + fVar24 + 1.1754944e-38;
            auVar10._0_4_ = fVar24 + fVar27 + 1.1754944e-38;
            auVar10._8_4_ = fVar47 + 1.1754944e-38;
            auVar10._12_4_ = fVar41 + 1.1754944e-38;
            auVar38 = rsqrtps(auVar31,auVar10);
            fVar28 = auVar38._0_4_;
            fVar40 = auVar38._4_4_;
            fVar46 = auVar38._8_4_;
            fVar48 = auVar38._12_4_;
            fVar29 = fVar29 * (3.0 - fVar28 * fVar28 * (fVar24 + fVar27)) * fVar28 * 0.5;
            fVar44 = fVar44 * (3.0 - fVar40 * fVar40 * (fVar27 + fVar24)) * fVar40 * 0.5;
            fVar46 = fVar25 * (3.0 - fVar46 * fVar46 * fVar47) * fVar46 * 0.5;
            fVar48 = fVar26 * (3.0 - fVar48 * fVar48 * fVar41) * fVar48 * 0.5;
          }
          else {
            fVar41 = (float)acosf();
            fVar25 = (float)sinf();
            fVar26 = (float)sinf(fVar41 - fVar41 * fVar23);
            fVar26 = fVar26 * (1.0 / fVar25);
            pfVar13 = (float *)sinf(fVar41 * fVar23);
            fVar41 = extraout_XMM0_Da * (1.0 / fVar25);
            fVar29 = fVar26 * fVar47 + fVar41 * fVar29 * fVar27;
            fVar44 = fVar26 * fVar42 + fVar41 * fVar44 * fVar24;
            fVar46 = fVar26 * fVar43 + fVar41 * fVar46 * fVar28;
            fVar48 = fVar26 * fVar45 + fVar41 * fVar48 * fVar40;
          }
        }
        lVar20 = uVar18 + 0x82;
        if (0.001 <= fVar39) {
          if (fVar39 <= 0.999) {
            pfVar1 = (float *)(lStack_190 + lVar20 * 0x10);
            fVar27 = *pfVar1;
            fVar24 = pfVar1[1];
            fVar28 = pfVar1[2];
            fVar40 = pfVar1[3];
            fVar39 = fVar46 * fVar28;
            fVar47 = fVar48 * fVar40;
            afStack_130[6] = -1.0;
            afStack_130[7] = -1.0;
            afStack_130[8] = -1.0;
            afStack_130[9] = -1.0;
            auVar32._0_4_ = fVar39 + fVar29 * fVar27;
            auVar32._4_4_ = fVar47 + fVar44 * fVar24;
            auVar32._8_4_ = fVar39 + fVar39;
            auVar32._12_4_ = fVar47 + fVar47;
            auVar33._4_12_ = auVar32._4_12_;
            auVar33._0_4_ = auVar32._0_4_ + auVar32._4_4_;
            afStack_130[2] = 1.0;
            afStack_130[3] = 1.0;
            afStack_130[4] = 1.0;
            afStack_130[5] = 1.0;
            uVar11 = movmskps((int)pfVar13,auVar33);
            uVar19 = (uint64_t)(uVar11 & 1);
            fVar47 = afStack_130[uVar19 * 4 + 2];
            fVar41 = afStack_130[uVar19 * 4 + 3];
            fVar25 = afStack_130[uVar19 * 4 + 4];
            fVar26 = afStack_130[uVar19 * 4 + 5];
            if (0.9995 < ABS(auVar33._0_4_)) {
              fVar42 = 1.0 - *pfVar21;
              fVar39 = *pfVar21;
              fVar29 = fVar42 * fVar27 + fVar39 * fVar47 * fVar29;
              fVar44 = fVar42 * fVar24 + fVar39 * fVar41 * fVar44;
              fVar46 = fVar42 * fVar28 + fVar39 * fVar25 * fVar46;
              fVar48 = fVar42 * fVar40 + fVar39 * fVar26 * fVar48;
              fVar27 = fVar48 * fVar48 + fVar29 * fVar29;
              fVar24 = fVar46 * fVar46 + fVar44 * fVar44;
              fVar25 = fVar27 + fVar44 * fVar44 + fVar46 * fVar46;
              fVar26 = fVar24 + fVar29 * fVar29 + fVar48 * fVar48;
              auVar9._4_4_ = fVar27 + fVar24 + 1.1754944e-38;
              auVar9._0_4_ = fVar24 + fVar27 + 1.1754944e-38;
              auVar9._8_4_ = fVar25 + 1.1754944e-38;
              auVar9._12_4_ = fVar26 + 1.1754944e-38;
              auVar38 = rsqrtps(auVar33,auVar9);
              fVar28 = auVar38._0_4_;
              fVar40 = auVar38._4_4_;
              fVar47 = auVar38._8_4_;
              fVar41 = auVar38._12_4_;
              fVar29 = fVar29 * (3.0 - fVar28 * fVar28 * (fVar24 + fVar27)) * fVar28 * 0.5;
              fVar44 = fVar44 * (3.0 - fVar40 * fVar40 * (fVar27 + fVar24)) * fVar40 * 0.5;
              fVar46 = fVar46 * (3.0 - fVar47 * fVar47 * fVar25) * fVar47 * 0.5;
              fVar48 = fVar48 * (3.0 - fVar41 * fVar41 * fVar26) * fVar41 * 0.5;
            }
            else {
              fVar42 = (float)acosf();
              fVar43 = (float)sinf();
              fVar39 = *pfVar21;
              fVar45 = (float)sinf(fVar42 - fVar42 * fVar39);
              fVar45 = fVar45 * (1.0 / fVar43);
              fVar39 = (float)sinf(fVar42 * fVar39);
              fVar39 = fVar39 * (1.0 / fVar43);
              fVar29 = fVar45 * fVar27 + fVar39 * fVar47 * fVar29;
              fVar44 = fVar45 * fVar24 + fVar39 * fVar41 * fVar44;
              fVar46 = fVar45 * fVar28 + fVar39 * fVar25 * fVar46;
              fVar48 = fVar45 * fVar40 + fVar39 * fVar26 * fVar48;
              fVar39 = fStack_194;
            }
          }
        }
        else {
          pfVar13 = (float *)(lStack_190 + lVar20 * 0x10);
          fVar29 = *pfVar13;
          fVar44 = pfVar13[1];
          fVar46 = pfVar13[2];
          fVar48 = pfVar13[3];
        }
        lVar14 = lStack_190;
        pfVar13 = (float *)(lStack_190 + lVar20 * 0x10);
        *pfVar13 = fVar29;
        pfVar13[1] = fVar44;
        pfVar13[2] = fVar46;
        pfVar13[3] = fVar48;
        *(uint64_t *)(lStack_190 + 0x800) =
             *(uint64_t *)(lStack_190 + 0x800) |
             *(uint64_t *)(*(int64_t *)(lStack_188 + 0x140) + 0xe8 + lVar12);
        uVar19 = (uint64_t)cVar5;
        *(uint64_t *)(lStack_190 + 0x808) =
             *(uint64_t *)(lStack_190 + 0x808) | 1L << (uVar18 & 0x3f);
        lVar12 = uVar19 * 0x1b0;
        pfVar13 = (float *)(*(int64_t *)(lStack_188 + 0x140) + 0x90 + lVar12);
        fVar27 = *pfVar13;
        fVar24 = pfVar13[1];
        fVar28 = pfVar13[2];
        fVar40 = pfVar13[3];
        pfVar13 = (float *)(*(int64_t *)(lStack_188 + 0x140) + 0x40 + lVar12);
        fVar29 = *pfVar13;
        fVar44 = pfVar13[1];
        fVar46 = pfVar13[2];
        fVar48 = pfVar13[3];
        pfVar13 = (float *)CoreSystem_AuthenticationHandler0(lStack_190,*(int8_t *)(uVar19 + 0x100 + lStack_188),
                                         lStack_188);
        fVar47 = *pfVar13;
        fVar41 = pfVar13[1];
        fVar25 = pfVar13[2];
        fVar26 = pfVar13[3];
        fVar42 = fVar48 * fVar25 * -1.0 + fVar29 * fVar41 * -1.0 + fVar44 * fVar47 + fVar46 * fVar26
        ;
        fVar43 = fVar44 * fVar26 * -1.0 + fVar29 * fVar25 * -1.0 + fVar46 * fVar47 + fVar48 * fVar41
        ;
        fVar45 = fVar46 * fVar41 * -1.0 + fVar29 * fVar26 * -1.0 + fVar48 * fVar47 + fVar44 * fVar25
        ;
        fVar47 = fVar48 * fVar26 * 1.0 + fVar29 * fVar47 * 1.0 + fVar46 * fVar25 + fVar44 * fVar41;
        fVar29 = fVar47;
        fVar44 = fVar42;
        fVar46 = fVar43;
        fVar48 = fVar45;
        if ((0.001 <= fVar23) &&
           (fVar29 = fVar27, fVar44 = fVar24, fVar46 = fVar28, fVar48 = fVar40, fVar23 <= 0.999)) {
          fVar29 = fVar28 * fVar43;
          fVar44 = fVar40 * fVar45;
          afStack_130[6] = -1.0;
          afStack_130[7] = -1.0;
          afStack_130[8] = -1.0;
          afStack_130[9] = -1.0;
          auVar34._0_4_ = fVar29 + fVar27 * fVar47;
          auVar34._4_4_ = fVar44 + fVar24 * fVar42;
          auVar34._8_4_ = fVar29 + fVar29;
          auVar34._12_4_ = fVar44 + fVar44;
          auVar35._4_12_ = auVar34._4_12_;
          auVar35._0_4_ = auVar34._0_4_ + auVar34._4_4_;
          afStack_130[2] = 1.0;
          afStack_130[3] = 1.0;
          afStack_130[4] = 1.0;
          afStack_130[5] = 1.0;
          uVar11 = movmskps((int)pfVar13,auVar35);
          uVar18 = (uint64_t)(uVar11 & 1);
          pfVar13 = (float *)(uVar18 * 2);
          fVar29 = afStack_130[uVar18 * 4 + 2];
          fVar44 = afStack_130[uVar18 * 4 + 3];
          fVar46 = afStack_130[uVar18 * 4 + 4];
          fVar48 = afStack_130[uVar18 * 4 + 5];
          if (0.9995 < ABS(auVar35._0_4_)) {
            fVar41 = 1.0 - fVar23;
            fVar29 = fVar47 * fVar41 + fVar23 * fVar29 * fVar27;
            fVar44 = fVar42 * fVar41 + fVar23 * fVar44 * fVar24;
            fVar25 = fVar43 * fVar41 + fVar23 * fVar46 * fVar28;
            fVar41 = fVar45 * fVar41 + fVar23 * fVar48 * fVar40;
            fVar23 = fVar41 * fVar41 + fVar29 * fVar29;
            fVar27 = fVar25 * fVar25 + fVar44 * fVar44;
            fVar46 = fVar23 + fVar44 * fVar44 + fVar25 * fVar25;
            fVar47 = fVar27 + fVar29 * fVar29 + fVar41 * fVar41;
            auVar8._4_4_ = fVar23 + fVar27 + 1.1754944e-38;
            auVar8._0_4_ = fVar27 + fVar23 + 1.1754944e-38;
            auVar8._8_4_ = fVar46 + 1.1754944e-38;
            auVar8._12_4_ = fVar47 + 1.1754944e-38;
            auVar38 = rsqrtps(auVar35,auVar8);
            fVar24 = auVar38._0_4_;
            fVar28 = auVar38._4_4_;
            fVar40 = auVar38._8_4_;
            fVar48 = auVar38._12_4_;
            fVar29 = fVar29 * (3.0 - fVar24 * fVar24 * (fVar27 + fVar23)) * fVar24 * 0.5;
            fVar44 = fVar44 * (3.0 - fVar28 * fVar28 * (fVar23 + fVar27)) * fVar28 * 0.5;
            fVar46 = fVar25 * (3.0 - fVar40 * fVar40 * fVar46) * fVar40 * 0.5;
            fVar48 = fVar41 * (3.0 - fVar48 * fVar48 * fVar47) * fVar48 * 0.5;
          }
          else {
            fVar41 = (float)acosf();
            fVar25 = (float)sinf();
            fVar26 = (float)sinf(fVar41 - fVar41 * fVar23);
            fVar26 = fVar26 * (1.0 / fVar25);
            pfVar13 = (float *)sinf(fVar41 * fVar23);
            fVar23 = extraout_XMM0_Da_00 * (1.0 / fVar25);
            fVar29 = fVar26 * fVar47 + fVar23 * fVar29 * fVar27;
            fVar44 = fVar26 * fVar42 + fVar23 * fVar44 * fVar24;
            fVar46 = fVar26 * fVar43 + fVar23 * fVar46 * fVar28;
            fVar48 = fVar26 * fVar45 + fVar23 * fVar48 * fVar40;
          }
        }
        lVar20 = uVar19 + 0x82;
        if (0.001 <= fVar39) {
          if (fVar39 <= 0.999) {
            pfVar1 = (float *)(lVar14 + lVar20 * 0x10);
            fVar23 = *pfVar1;
            fVar27 = pfVar1[1];
            fVar24 = pfVar1[2];
            fVar28 = pfVar1[3];
            fVar40 = fVar46 * fVar24;
            fVar47 = fVar48 * fVar28;
            afStack_130[6] = -1.0;
            afStack_130[7] = -1.0;
            afStack_130[8] = -1.0;
            afStack_130[9] = -1.0;
            auVar36._0_4_ = fVar40 + fVar29 * fVar23;
            auVar36._4_4_ = fVar47 + fVar44 * fVar27;
            auVar36._8_4_ = fVar40 + fVar40;
            auVar36._12_4_ = fVar47 + fVar47;
            auVar37._4_12_ = auVar36._4_12_;
            auVar37._0_4_ = auVar36._0_4_ + auVar36._4_4_;
            afStack_130[2] = 1.0;
            afStack_130[3] = 1.0;
            afStack_130[4] = 1.0;
            afStack_130[5] = 1.0;
            uVar11 = movmskps((int)pfVar13,auVar37);
            uVar18 = (uint64_t)(uVar11 & 1);
            fVar40 = afStack_130[uVar18 * 4 + 2];
            fVar47 = afStack_130[uVar18 * 4 + 3];
            fVar41 = afStack_130[uVar18 * 4 + 4];
            fVar25 = afStack_130[uVar18 * 4 + 5];
            if (0.9995 < ABS(auVar37._0_4_)) {
              fVar26 = 1.0 - fVar39;
              fVar29 = fVar26 * fVar23 + fVar39 * fVar40 * fVar29;
              fVar44 = fVar26 * fVar27 + fVar39 * fVar47 * fVar44;
              fVar46 = fVar26 * fVar24 + fVar39 * fVar41 * fVar46;
              fVar48 = fVar26 * fVar28 + fVar39 * fVar25 * fVar48;
              fVar39 = fVar48 * fVar48 + fVar29 * fVar29;
              fVar23 = fVar46 * fVar46 + fVar44 * fVar44;
              fVar47 = fVar39 + fVar44 * fVar44 + fVar46 * fVar46;
              fVar41 = fVar23 + fVar29 * fVar29 + fVar48 * fVar48;
              auVar7._4_4_ = fVar39 + fVar23 + 1.1754944e-38;
              auVar7._0_4_ = fVar23 + fVar39 + 1.1754944e-38;
              auVar7._8_4_ = fVar47 + 1.1754944e-38;
              auVar7._12_4_ = fVar41 + 1.1754944e-38;
              auVar38 = rsqrtps(auVar37,auVar7);
              fVar27 = auVar38._0_4_;
              fVar24 = auVar38._4_4_;
              fVar28 = auVar38._8_4_;
              fVar40 = auVar38._12_4_;
              fVar29 = fVar29 * (3.0 - fVar27 * fVar27 * (fVar23 + fVar39)) * fVar27 * 0.5;
              fVar44 = fVar44 * (3.0 - fVar24 * fVar24 * (fVar39 + fVar23)) * fVar24 * 0.5;
              fVar46 = fVar46 * (3.0 - fVar28 * fVar28 * fVar47) * fVar28 * 0.5;
              fVar48 = fVar48 * (3.0 - fVar40 * fVar40 * fVar41) * fVar40 * 0.5;
            }
            else {
              fVar26 = (float)acosf();
              fVar42 = (float)sinf();
              fVar43 = (float)sinf(fVar26 - fVar26 * fVar39);
              fVar43 = fVar43 * (1.0 / fVar42);
              fVar39 = (float)sinf(fVar26 * fVar39);
              fVar39 = fVar39 * (1.0 / fVar42);
              fVar29 = fVar43 * fVar23 + fVar39 * fVar40 * fVar29;
              fVar44 = fVar43 * fVar27 + fVar39 * fVar47 * fVar44;
              fVar46 = fVar43 * fVar24 + fVar39 * fVar41 * fVar46;
              fVar48 = fVar43 * fVar28 + fVar39 * fVar25 * fVar48;
            }
          }
        }
        else {
          pfVar13 = (float *)(lVar14 + lVar20 * 0x10);
          fVar29 = *pfVar13;
          fVar44 = pfVar13[1];
          fVar46 = pfVar13[2];
          fVar48 = pfVar13[3];
        }
        pfVar13 = (float *)(lVar14 + lVar20 * 0x10);
        *pfVar13 = fVar29;
        pfVar13[1] = fVar44;
        pfVar13[2] = fVar46;
        pfVar13[3] = fVar48;
        *(uint64_t *)(lVar14 + 0x800) =
             *(uint64_t *)(lVar14 + 0x800) |
             *(uint64_t *)(*(int64_t *)(lStack_188 + 0x140) + 0xe8 + lVar12);
        *(uint64_t *)(lVar14 + 0x808) = *(uint64_t *)(lVar14 + 0x808) | 1L << (uVar19 & 0x3f);
        param_1 = lStack_160;
        lVar12 = local_var_178;
      }
      pcStack_148 = pcStack_148 + 1;
      lVar16 = lVar16 + 0x18;
      lVar17 = lVar17 + -0x18;
      pfVar21 = pfVar21 + 1;
      lStack_140 = lStack_140 + -1;
    } while (lStack_140 != 0);
    lStack_140 = 0;
    param_6 = pcStack_180;
  }
  lVar12 = lStack_190;
  lVar17 = -0x1334;
  lVar16 = 2;
  pfVar21 = (float *)(param_1 + 0x13a0);
  fVar23 = 1.0 - fStack_198;
  pcStack_180 = (char *)((int64_t)param_6 - (int64_t)plocal_var_138);
  puVar22 = plocal_var_138;
  fVar39 = fStack_198;
  fStack_194 = fVar23;
  do {
    lVar20 = (int64_t)*(int *)(param_1 + 0x60);
    fVar27 = 0.0;
    pfVar13 = pfVar21;
    if (0 < lVar20) {
      do {
        if (*(char *)((int64_t)pfVar13 + 6) == '\0') {
          fVar24 = 0.0;
        }
        else {
          fVar24 = *pfVar13 * 0.05;
        }
        fVar28 = pfVar13[-4];
        fVar40 = pfVar13[-1];
        if (fVar24 + fVar28 < fVar40) {
          fVar24 = *pfVar13;
          if (*(char *)((int64_t)pfVar13 + 6) == '\0') {
            fVar29 = 0.0;
          }
          else {
            fVar29 = fVar24 * 0.05;
          }
          if (fVar29 + fVar28 < fVar40) {
            fVar40 = fVar40 - fVar28;
          }
          else {
            fVar40 = pfVar13[-2];
          }
          if (0.0 < fVar24) {
            fVar40 = fVar40 / fVar24;
            fVar28 = fVar28 / fVar24;
          }
          fVar24 = fVar40 - (0.9 - fVar28);
          if (fVar24 <= 0.1 - fVar40) {
            fVar24 = 0.1 - fVar40;
          }
          if (fVar24 <= 0.0) {
            fVar24 = 0.0;
          }
          fVar24 = fVar24 * *(float *)(lVar17 + (int64_t)pfVar13) * 10.0;
        }
        else {
          fVar24 = *(float *)(lVar17 + (int64_t)pfVar13);
        }
        fVar27 = fVar24 + fVar27;
        lVar20 = lVar20 + -1;
        pfVar13 = pfVar13 + 0x4d6;
      } while (lVar20 != 0);
    }
    fVar27 = fVar23 * fVar27 + fVar39;
    if (0.0 < fVar27) {
      cVar5 = puVar22[(int64_t)pcStack_180];
      lVar16 = *(int64_t *)(lStack_150 + 0x10);
      afStack_130[6] = 0.0;
      afStack_130[7] = 0.0;
      afStack_130[8] = 1.0;
      afStack_130[9] = 3.4028235e+38;
      local_var_f4 = 0;
      afStack_130[0xe] = 0.0;
      uVar6 = *(uint64_t *)(lVar16 + 0x20);
      afStack_130[10] = 0.0;
      afStack_130[0xb] = 0.0;
      afStack_130[0xc] = 0.0;
      afStack_130[0xd] = 0.0;
      CoreSystem_AuthenticationHandler0(lVar12,cVar5,lStack_188);
      local_var_1a0 = 1;
      local_var_1a8 = 0x51b189;
      pfVar13 = (float *)(lVar12 + ((int64_t)cVar5 + 0x40) * 0x10);
      fVar39 = *pfVar13;
      fVar24 = pfVar13[1];
      fVar28 = pfVar13[2];
      fStack_170 = *(float *)(lVar16 + 0x88) * fVar24 + *(float *)(lVar16 + 0x78) * fVar39 +
                   *(float *)(lVar16 + 0x98) * fVar28 + *(float *)(lVar16 + 0xa8);
      fStack_16c = *(float *)(lVar16 + 0x8c) * fVar24 + *(float *)(lVar16 + 0x7c) * fVar39 +
                   *(float *)(lVar16 + 0x9c) * fVar28 + *(float *)(lVar16 + 0xac);
      local_var_178 = CONCAT44(*(float *)(lVar16 + 0x84) * fVar24 + *(float *)(lVar16 + 0x74) * fVar39
                            + *(float *)(lVar16 + 0x94) * fVar28 + *(float *)(lVar16 + 0xa4),
                            *(float *)(lVar16 + 0x80) * fVar24 + *(float *)(lVar16 + 0x70) * fVar39
                            + *(float *)(lVar16 + 0x90) * fVar28 + *(float *)(lVar16 + 0xa0));
      PhysicsSystem_JointManager(uVar6,&local_var_178);
      fVar28 = -afStack_130[7];
      fVar24 = afStack_130[6] * afStack_130[6] + fVar28 * fVar28;
      lVar16 = lStack_158;
      param_1 = lStack_160;
      fVar39 = fStack_198;
      if (9.999999e-09 < fVar24) {
        auVar38 = rsqrtss(ZEXT416((uint)fVar24),ZEXT416((uint)fVar24));
        fVar39 = auVar38._0_4_;
        fVar39 = fVar39 * 0.5 * (3.0 - fVar24 * fVar39 * fVar39);
        fVar24 = fVar39 * fVar24;
        fVar28 = fVar39 * fVar28;
        fVar39 = fVar39 * afStack_130[6];
        if (0.0 <= fVar24) {
          if (1.0 <= fVar24) {
            fVar24 = 1.0;
          }
        }
        else {
          fVar24 = 0.0;
        }
        fVar24 = (float)asinf(fVar24);
        lVar16 = *(int64_t *)(lStack_150 + 0x10);
        fVar23 = *(float *)(lVar16 + 0x90);
        fVar40 = *(float *)(lVar16 + 0x74) * fVar39 + *(float *)(lVar16 + 0x70) * fVar28 +
                 *(float *)(lVar16 + 0x78) * 0.0;
        fVar29 = *(float *)(lVar16 + 0x84) * fVar39 + *(float *)(lVar16 + 0x80) * fVar28 +
                 *(float *)(lVar16 + 0x88) * 0.0;
        fVar39 = *(float *)(lVar16 + 0x94) * fVar39 + fVar23 * fVar28 +
                 *(float *)(lVar16 + 0x98) * 0.0;
        fVar39 = fVar40 * fVar40 + fVar29 * fVar29 + fVar39 * fVar39;
        if ((fVar39 <= 0.98010004) || (1.0201 <= fVar39)) {
          auVar38 = rsqrtss(ZEXT416((uint)fVar39),ZEXT416((uint)fVar39));
          fVar23 = auVar38._0_4_;
          fVar23 = fVar23 * 0.5 * (3.0 - fVar39 * fVar23 * fVar23);
        }
        if (-0.47123894 <= fVar24) {
          if (0.47123894 <= fVar24) {
            fVar24 = 0.47123894;
          }
        }
        else {
          fVar24 = -0.47123894;
        }
        CoreSystem_AuthenticationHandler0(lVar12,*puVar22,lStack_188,fVar23);
// WARNING: Subroutine does not return
        AdvancedSystemController(fVar24 * fVar27 * fStack_168 * 0.5);
      }
    }
    pfVar21 = pfVar21 + 6;
    lVar17 = lVar17 + -0x18;
    puVar22 = puVar22 + 1;
    lVar16 = lVar16 + -1;
    lStack_158 = lVar16;
  } while (lVar16 != 0);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_e8 ^ (uint64_t)stack_array_1c8);
}