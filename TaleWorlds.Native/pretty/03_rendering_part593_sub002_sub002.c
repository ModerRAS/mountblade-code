#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part593_sub002_sub002.c - 1 个函数

// 函数: void FUN_180592060(int64_t param_1,float param_2,int64_t param_3,int64_t param_4)
void FUN_180592060(int64_t param_1,float param_2,int64_t param_3,int64_t param_4)

{
  float *pfVar1;
  int32_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  bool bVar7;
  int8_t uVar8;
  byte bVar9;
  char cVar10;
  char cVar11;
  int64_t lVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  int64_t lVar15;
  float *pfVar16;
  uint64_t *puVar17;
  uint uVar18;
  uint64_t uVar19;
  bool bVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  int32_t uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  int8_t auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  uint64_t uStackX_8;
  char cStackX_10;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  uint64_t uStack_1d8;
  uint64_t uStack_1d0;
  uint64_t uStack_1c8;
  float fStack_1c0;
  int32_t uStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  int32_t uStack_1ac;
  uint64_t uStack_1a8;
  uint64_t uStack_1a0;
  uint64_t uStack_198;
  uint64_t uStack_190;
  uint64_t uStack_188;
  uint64_t uStack_180;
  uint64_t uStack_178;
  int64_t lStack_170;
  uint64_t uStack_168;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  int32_t uStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  int32_t uStack_128;
  int32_t uStack_124;
  int32_t uStack_120;
  int32_t uStack_11c;
  uint64_t uStack_118;
  uint64_t uStack_110;
  int64_t lStack_108;
  int32_t uStack_100;
  int32_t uStack_fc;
  char cStack_f8;
  char cStack_f7;
  
  lVar15 = *(int64_t *)(param_3 + 0x18);
  bVar9 = *(byte *)(param_1 + 0x40) & 3;
  if (*(char *)(param_4 + 0x9b) == '\0') {
    if (bVar9 != 0) {
      *(int32_t *)(param_1 + 0xe8) = 0;
    }
  }
  else if (((bVar9 == 1) || (0.0 < *(float *)(param_1 + 0x154))) &&
          ((*(float *)(param_1 + 0xe0) != 0.0 ||
           ((*(float *)(param_1 + 0xe4) != 0.0 || (*(float *)(param_1 + 0xe8) != 0.0)))))) {
    fVar22 = *(float *)(param_4 + 0x11c);
    fVar27 = *(float *)(param_4 + 0x120);
    fVar26 = fVar22 * *(float *)(param_1 + 0xe4) +
             *(float *)(param_4 + 0x118) * *(float *)(param_1 + 0xe0) +
             fVar27 * *(float *)(param_1 + 0xe8);
    *(float *)(param_1 + 0xe0) = *(float *)(param_4 + 0x118) * fVar26;
    *(float *)(param_1 + 0xe4) = fVar22 * fVar26;
    *(float *)(param_1 + 0xe8) = fVar27 * fVar26;
    *(int32_t *)(param_1 + 0xec) = 0x7f7fffff;
  }
  lStack_170 = *(int64_t *)(param_1 + 0xc0);
  uStack_168 = *(uint64_t *)(param_1 + 200);
  pfVar1 = (float *)(param_1 + 0x168);
  fStack_158 = *(float *)(param_1 + 0xc);
  fStack_154 = *(float *)(param_1 + 0x10);
  fStack_150 = *(float *)(param_1 + 0x14);
  uStack_14c = *(int32_t *)(param_1 + 0x18);
  uVar3 = *(uint64_t *)(param_1 + 0xa0);
  uVar4 = *(uint64_t *)(param_1 + 0xa8);
  uVar5 = *(uint64_t *)(param_1 + 0xb0);
  uVar6 = *(uint64_t *)(param_1 + 0xb8);
  uStack_1c8 = *(uint64_t *)(param_1 + 0xd0);
  fVar29 = *(float *)(param_1 + 0xe4) * 0.99;
  fVar30 = *(float *)(param_1 + 0xe8) * 0.99;
  fVar31 = *(float *)(param_1 + 0xe0) * 0.99;
  fVar27 = fVar29 + *(float *)(param_1 + 0x10);
  fVar26 = fVar30 + *(float *)(param_1 + 0x14);
  fVar22 = fVar31 + *(float *)(param_1 + 0xc);
  *(float *)(param_1 + 0x10) = fVar27;
  *(float *)(param_1 + 0x14) = fVar26;
  *(float *)(param_1 + 0xc) = fVar22;
  fVar22 = *pfVar1 + fVar22;
  fVar27 = fVar27 + *(float *)(param_1 + 0x16c);
  fVar26 = fVar26 + *(float *)(param_1 + 0x170);
  uStack_1d8 = CONCAT44(fVar27,fVar22);
  uStack_1d0 = CONCAT44(0x7f7fffff,fVar26);
  uVar19 = uStack_1d8;
  if ((*(int *)(param_4 + 0x28) != 0) &&
     (fVar25 = *(float *)(param_4 + 0x3c) - fVar22, fVar23 = *(float *)(param_4 + 0x40) - fVar27,
     fVar23 * fVar23 + fVar25 * fVar25 < 1.0000001e-06)) {
    uVar19 = *(uint64_t *)(param_4 + 0x3c);
    uStack_1d8._4_4_ = (float)((uint64_t)uVar19 >> 0x20);
    uStack_1d8._0_4_ = (float)uVar19;
    fVar22 = (float)uStack_1d8;
    fVar27 = uStack_1d8._4_4_;
  }
  uStack_1d8 = uVar19;
  if ((((fVar31 == 0.0) && (fVar29 == 0.0)) && (fVar30 == 0.0)) ||
     (0.0 < (fVar27 - fStack_154) * *(float *)(param_1 + 0x16c) + (fVar22 - fStack_158) * *pfVar1 +
            (fVar26 - fStack_150) * *(float *)(param_1 + 0x170))) {
    bVar21 = false;
  }
  else {
    bVar21 = true;
  }
  uStackX_20 = lVar15;
  fStack_148 = fStack_150;
  fStack_144 = fStack_150;
  fStack_140 = fStack_150;
  fStack_13c = fStack_150;
  fStack_138 = fStack_154;
  fStack_134 = fStack_154;
  fStack_130 = fStack_154;
  fStack_12c = fStack_154;
  func_0x0001801be8d0(&uStack_1a8);
  bVar20 = *(int *)(param_4 + 0x194) != 1;
  uStackX_8 = CONCAT71(uStackX_8._1_7_,bVar20);
  if (((*(uint *)(param_4 + 0x24) >> 8 & 1) == 0) || (bVar21)) {
    cVar11 = '\0';
  }
  else {
    cVar11 = '\x01';
  }
  cStackX_10 = cVar11;
  FUN_180593b40(param_1,lVar15,&uStack_1a8,&uStack_1d8,bVar20,cVar11);
  uVar14 = *(uint64_t *)(param_4 + 0x68);
  fVar22 = (float)uStack_1d0 - (float)uStack_178;
  uVar13 = *(uint64_t *)(param_4 + 0x60);
  uVar24 = *(int32_t *)(param_1 + 0x1c8);
  uVar2 = *(int32_t *)(param_1 + 0x1d0);
  uStackX_18 = (uint64_t)(uint)uStackX_18._4_4_ << 0x20;
  fStack_1b8 = *pfVar1;
  fStack_1b4 = *(float *)(param_1 + 0x16c);
  fStack_1b0 = *(float *)(param_1 + 0x170);
  uStack_1ac = *(int32_t *)(param_1 + 0x174);
  FUN_1801c24a0();
  uStack_118 = CONCAT44(fStack_1b4,fStack_1b8);
  uStack_110 = CONCAT44(uStack_1ac,fStack_1b0);
  bVar9 = *(byte *)(param_1 + 0x40) & 3;
  cStack_f7 = '\0';
  uStack_128 = (float)uStack_1d8;
  uStack_124 = uStack_1d8._4_4_;
  uStack_120 = (float)uStack_1d0;
  uStack_11c = uStack_1d0._4_4_;
  lStack_108 = lVar15;
  uStack_100 = uVar2;
  uStack_fc = uVar24;
  if (bVar9 == 1) {
    if (((uVar14 | uVar13) >> 9 & 1) != 0) goto LAB_1805929c8;
    if (*(char *)(param_4 + 0x9b) == '\0') {
      lVar12 = 0;
      if (uStack_178._4_1_ == '\x02') {
        uVar18 = *(uint *)(uStack_188 + 0x18);
      }
      else {
        uVar18 = 0;
      }
      if ((uVar18 & 0x40) != 0) {
        if (uStack_188 != 0) {
          lVar12 = *(int64_t *)(uStack_188 + 0x10);
        }
        if (((*(float *)(lVar12 + 0x88) <= 0.0 && *(float *)(lVar12 + 0x88) != 0.0) &&
            (0.2 < (float)uStack_190)) && (cVar11 != '\0')) {
          *(float *)(param_1 + 0xc) = (float)uStack_1d8;
          *(float *)(param_1 + 0x10) = uStack_1d8._4_4_;
          *(float *)(param_1 + 0x14) = (float)uStack_1d0;
          *(int32_t *)(param_1 + 0x18) = uStack_1d0._4_4_;
          *(uint64_t *)(param_1 + 0x1c) = 0;
          if (*(char *)(param_4 + 0x9b) != '\0') goto LAB_180592490;
        }
      }
    }
    else {
LAB_180592490:
      lVar12 = 0;
      if (uStack_178._4_1_ == '\x02') {
        uVar18 = *(uint *)(uStack_188 + 0x18);
      }
      else {
        uVar18 = 0;
      }
      if ((uVar18 & 0x40) != 0) {
        if (uStack_188 != 0) {
          lVar12 = *(int64_t *)(uStack_188 + 0x10);
        }
        if ((*(float *)(lVar12 + 0x88) <= 0.0 && *(float *)(lVar12 + 0x88) != 0.0) &&
           (0.2 < (float)uStack_190)) {
          if ((fVar22 <= 1.0) ||
             (((system_status_flag == 1 || (system_status_flag == 4)) && (*(int *)(param_4 + 0x178) != 2))))
          {
            uStack_1d0 = CONCAT44(uStack_1d0._4_4_,(float)uStack_178);
            if ((-0.01 < *(float *)(param_1 + 0x170)) && (*(float *)(param_1 + 0x170) < 0.01)) {
              *(float *)(param_1 + 0x14) = (float)uStack_178;
            }
          }
          else {
            *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) | 4;
          }
          goto LAB_1805929c8;
        }
      }
    }
    bVar21 = true;
    bVar20 = false;
    cVar10 = uStack_178._4_1_;
    if ((*(int *)(param_4 + 0x78) == 0x32) &&
       ((*(uint64_t *)(param_4 + 0x60) & 0x400001000000) == 0x400001000000)) {
      cVar10 = func_0x00018057c520(&uStack_1a8,cVar11);
      bVar21 = cVar10 == '\0';
      cVar10 = uStack_178._4_1_;
    }
    uVar14 = 0;
    uVar18 = 0;
    bVar7 = false;
    if (*(int *)(param_4 + 0x194) == 1) {
      bVar7 = bVar21;
    }
    if (bVar7) {
      if (*(char *)(param_4 + 0x9a) == '\0') {
LAB_1805925de:
        bVar20 = false;
      }
      else {
        uVar13 = uVar14;
        if (cVar10 == '\x02') {
          uVar13 = (uint64_t)*(uint *)(uStack_188 + 0x18);
        }
        if ((uVar13 & 0x40) == 0) goto LAB_1805925de;
        if (uStack_188 != 0) {
          uVar14 = *(uint64_t *)(uStack_188 + 0x10);
        }
        if ((0.0 < *(float *)(uVar14 + 0x88) || *(float *)(uVar14 + 0x88) == 0.0) ||
           ((float)uStack_190 <= 0.2)) goto LAB_1805925de;
        bVar20 = true;
      }
      if (system_data_ec8b != '\0') {
        if ((*(int *)(param_4 + 0x178) == 1) &&
           ((*(char *)(param_4 + 0x99) == '\0' || (*(int *)(param_4 + 0x17c) == 1)))) {
          bVar21 = true;
        }
        else {
          bVar21 = false;
        }
        if ((!bVar20) && (bVar21)) {
          if (*(char *)(param_1 + 0xd4) == '\x02') {
            uVar18 = *(uint *)(*(int64_t *)(param_1 + 0xc0) + 0x18);
          }
          bVar20 = false;
          if ((uVar18 & 0x40) == 0) {
            if ((float)uStack_178 < *(float *)(uStackX_20 + 0x3ec4) - 1.5) {
LAB_180592690:
              bVar20 = true;
            }
            else if ((*(char *)(param_4 + 0x98) == '\0') &&
                    ((*(uint *)(param_4 + 0x24) & 0x800) != 0)) {
              if (cStack_f7 == '\0') {
                FUN_180599c20(&uStack_128);
                cVar10 = uStack_178._4_1_;
              }
              bVar20 = false;
              if (cStack_f8 != '\0') goto LAB_180592690;
            }
          }
        }
      }
    }
    lVar15 = uStackX_20;
    if (fVar22 <= 0.5) {
      if ((-1.5 <= fVar22) || (cVar10 == '\x01')) {
        cVar10 = func_0x00018057c520(&uStack_1a8,cVar11);
        fVar27 = render_system_config;
        fVar26 = (float)uStack_190;
        if (cVar10 == '\0') {
          if (uStack_178._4_1_ == '\x02') {
            uVar18 = *(uint *)(uStack_188 + 0x18);
          }
          else {
            uVar18 = 0;
          }
          if ((((uVar18 & 0x40) != 0) || (render_system_config <= (float)uStack_190)) ||
             ((float)uStack_178 < fStack_148 - 0.01)) {
            cVar10 = '\0';
          }
          else {
            cVar10 = '\x01';
          }
        }
        if (((-1.5 <= fVar22) && (cVar10 != '\0')) &&
           ((fVar22 < param_2 * -3.0 || (param_2 * 3.0 < fVar22)))) {
          fVar29 = fVar22 - *(float *)(param_1 + 0xe8) * 0.99;
          if ((0.94 < (float)uStack_190) || (0.0 <= fVar29)) {
            *(float *)(param_1 + 0x108) = fVar29 + *(float *)(param_1 + 0x108);
          }
          else {
            uStack_1bc = 0x7f7fffff;
            fStack_1c0 = param_2 * *(float *)(param_1 + 0x2c);
            uStack_1c8 = CONCAT44(param_2 * *(float *)(param_1 + 0x28),
                                  param_2 * *(float *)(param_1 + 0x24));
            fVar30 = (float)FUN_1801c24a0(&uStack_1c8);
            func_0x000180085850(&uStack_198,&lStack_170,&uStack_1c8);
            lVar15 = func_0x000180085850(&lStack_170,&fStack_1b8,&uStack_198);
            fVar29 = *(float *)(lVar15 + 8) * fVar30 + fVar29;
            if (-0.35000002 <= fVar29) {
              if (fVar29 < -0.05) {
                fVar30 = ABS(*(float *)(param_1 + 0x70) - (float)uStack_190);
                if (0.5 < fVar30) goto LAB_180592916;
                if (0.1 < fVar30) {
                  fVar30 = (fVar30 - 0.1) * 2.5;
                  if (fVar30 <= 0.1) {
                    fVar30 = 0.1;
                  }
                  *(float *)(param_1 + 0x108) = fVar30 * fVar29 + *(float *)(param_1 + 0x108);
                }
              }
            }
            else {
LAB_180592916:
              *(float *)(param_1 + 0x108) = fVar29 + *(float *)(param_1 + 0x108);
            }
          }
        }
        fVar29 = *(float *)(param_1 + 0x170);
        cVar11 = cStackX_10;
        lVar15 = uStackX_20;
        if (cVar10 == '\0') {
          if ((-0.01 < fVar29) && (fVar29 < 0.01)) {
            *(float *)(param_1 + 0x14) = (float)uStack_1d0;
          }
          if ((!bVar20) && (fVar26 < fVar27)) {
            uStack_1c8 = CONCAT44((int32_t)uStack_198,uStack_198._4_4_) ^ 0x8000000000000000;
            fStack_1c0 = 0.0;
            uStack_1bc = 0x7f7fffff;
            func_0x000180085850(&uStack_198,&fStack_1b8,&uStack_1c8);
            lVar15 = uStackX_20;
            cVar11 = cStackX_10;
            fVar27 = *(float *)(param_1 + 0x10);
            fVar26 = fStack_1b8 * fStack_1b8 + fStack_1b4 * fStack_1b4;
            auVar28 = rsqrtss(ZEXT416((uint)fVar26),ZEXT416((uint)fVar26));
            fVar29 = auVar28._0_4_;
            fVar30 = fVar29 * 0.5 * (3.0 - fVar26 * fVar29 * fVar29);
            fVar31 = fVar30 * fStack_1b4;
            fVar26 = *(float *)(param_1 + 0xc);
            fVar30 = fVar30 * fStack_1b8;
            fVar29 = ((float)uStack_1d8 - fVar26) * fVar30;
            fVar23 = (uStack_1d8._4_4_ - fVar27) * fVar31 + fVar29;
            if (0.0 <= fVar23) {
              if (fVar23 == 0.0) {
                fVar29 = fVar30 * param_2 + fVar26;
                uStack_1d8 = CONCAT44(fVar31 * param_2 + fVar27,fVar29);
                uStack_1d0 = CONCAT44(0x7f7fffff,*(int32_t *)(param_1 + 0x14));
              }
            }
            else {
              fVar29 = (((float)uStack_1d8 - fVar26) - fVar30 * fVar23) + fVar30 * param_2 * 0.045 +
                       fVar26;
              uStack_1d8 = CONCAT44(((uStack_1d8._4_4_ - fVar27) - fVar31 * fVar23) +
                                    fVar31 * param_2 * 0.045 + fVar27,fVar29);
              uStack_1d0 = CONCAT44(0x7f7fffff,*(int32_t *)(param_1 + 0x14));
            }
            uVar8 = (int8_t)uStackX_8;
            FUN_180593b40(fVar29,uStackX_20,&uStack_1a8,&uStack_1d8,(int8_t)uStackX_8,cStackX_10
                         );
            uStackX_8 = *(uint64_t *)(param_1 + 0x60);
            FUN_180506a80(&uStackX_8,*(int32_t *)(param_1 + 0x34));
            if (fVar23 < 0.0) {
LAB_180592e60:
              if ((float)uStack_178 <= (float)uStack_1d0) {
                uStack_1d0 = CONCAT44(uStack_1d0._4_4_,(float)uStack_178);
                *(float *)(param_1 + 0x14) = (float)uStack_178;
                fVar22 = (float)uStack_178;
              }
              else {
                uStack_1d8 = CONCAT44(fVar31 * param_2 + *(float *)(param_1 + 0x10),
                                      fVar30 * param_2 + *(float *)(param_1 + 0xc));
                uStack_1d0 = CONCAT44(0x7f7fffff,*(int32_t *)(param_1 + 0x14));
                FUN_180593b40(param_1,lVar15,&uStack_1a8,&uStack_1d8,uVar8,cVar11);
                fVar22 = *(float *)(param_1 + 0x14);
              }
              bVar21 = fVar22 - (float)uStack_178 == param_2 * 3.0;
              bVar20 = fVar22 - (float)uStack_178 < param_2 * 3.0;
            }
            else {
              if ((float)uStackX_8 * fVar30 + uStackX_8._4_4_ * fVar31 < 0.0) goto LAB_180592e60;
              bVar21 = fVar22 == 0.5;
              bVar20 = fVar22 < 0.5;
            }
            if (!bVar20 && !bVar21) {
              func_0x0001805998b0(param_1);
              *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x10000;
            }
          }
        }
        else {
          uStack_1d0 = CONCAT44(uStack_1d0._4_4_,(float)uStack_178);
          *(float *)(param_1 + 0x14) = (float)uStack_178 - fVar29;
        }
      }
      else {
        uStack_1d8 = *(uint64_t *)(param_1 + 0xc);
        uStack_1d0 = *(uint64_t *)(param_1 + 0x14);
        uStack_1a8 = *(uint64_t *)(param_1 + 0xa0);
        uStack_1a0 = *(uint64_t *)(param_1 + 0xa8);
        uStack_198 = *(uint64_t *)(param_1 + 0xb0);
        uStack_190 = *(uint64_t *)(param_1 + 0xb8);
        uStack_188 = *(int64_t *)(param_1 + 0xc0);
        uStack_180 = *(uint64_t *)(param_1 + 200);
        uStack_178 = *(uint64_t *)(param_1 + 0xd0);
      }
    }
    else if (bVar20) {
      *(float *)(param_1 + 0xc) = fStack_158;
      *(float *)(param_1 + 0x10) = fStack_154;
      *(float *)(param_1 + 0x14) = fStack_150;
      *(int32_t *)(param_1 + 0x18) = uStack_14c;
      uStack_1d8 = CONCAT44(fStack_154,fStack_158);
      uStack_1d0 = CONCAT44(uStack_14c,fStack_150);
      if (*(char *)(param_1 + 0xd4) == '\x02') {
        uVar18 = *(uint *)(*(int64_t *)(param_1 + 0xc0) + 0x18);
      }
      else {
        uVar18 = 0;
      }
      if ((uVar18 & 0x51b189) != 0) {
        *(uint64_t *)(param_1 + 0xa0) = uVar3;
        *(uint64_t *)(param_1 + 0xa8) = uVar4;
        *(uint64_t *)(param_1 + 0xb0) = uVar5;
        *(uint64_t *)(param_1 + 0xb8) = uVar6;
        *(int64_t *)(param_1 + 0xc0) = lStack_170;
        *(uint64_t *)(param_1 + 200) = uStack_168;
        *(uint64_t *)(param_1 + 0xd0) = uStack_1c8;
        uStack_188 = lStack_170;
        uStack_180 = uStack_168;
        uStack_178 = uStack_1c8;
        uStack_1a8 = uVar3;
        uStack_1a0 = uVar4;
        uStack_198 = uVar5;
        uStack_190 = uVar6;
      }
      *(uint64_t *)(param_1 + 0xe0) = 0;
      *(uint64_t *)(param_1 + 0xe8) = 0;
      pfVar1[0] = 0.0;
      pfVar1[1] = 0.0;
      *(uint64_t *)(param_1 + 0x170) = 0;
      *(uint64_t *)(param_1 + 0x60) = 0;
      *(uint64_t *)(param_1 + 0x1c) = 0;
      FUN_1805989b0(&system_data_f0c8,param_2 + param_2,*(uint *)(param_4 + 0x24) >> 0xb & 0xffffff01,
                    param_1 + 8);
      lVar15 = uStackX_20;
    }
    else {
      *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) | 4;
    }
  }
  else if (bVar9 == 0) {
    fVar27 = 0.0;
    if (((*(uint *)(param_4 + 0x24) & 0x800) == 0) && (*(int *)(param_4 + 0x78) == 0x18)) {
      fVar26 = *(float *)(param_4 + 0x88);
      if (0.6 < fVar26) {
        if (fVar26 < 0.8) {
          fVar27 = (fVar26 - 0.6) * 5.0 - 1.0;
        }
      }
      else {
        fVar27 = -1.0;
      }
    }
    fVar27 = fVar27 * *(float *)(param_4 + 0x15c);
    if (*(float *)(param_1 + 0x154) <= 0.0) {
      if (fVar27 <= fVar22) goto LAB_18059328c;
    }
    else if (fVar27 <= fVar22) {
LAB_18059328c:
      if (((0.0 < *(float *)(param_1 + 0x170) || *(float *)(param_1 + 0x170) == 0.0) ||
          (*(float *)(param_1 + 0xe8) <= 0.0)) ||
         (cVar10 = func_0x00018057c520(&uStack_1a8,cVar11), cVar10 != '\0')) goto LAB_1805929c8;
      uStack_1c8 = CONCAT44((int32_t)uStack_198,uStack_198._4_4_) ^ 0x8000000000000000;
      fStack_1c0 = 0.0;
      uStack_1bc = 0x7f7fffff;
      func_0x000180085850(&uStack_198,&fStack_1b8,&uStack_1c8);
      fVar22 = fStack_1b8 * fStack_1b8 + fStack_1b4 * fStack_1b4 + fStack_1b0 * fStack_1b0;
      auVar28 = rsqrtss(ZEXT416((uint)fVar22),ZEXT416((uint)fVar22));
      fVar27 = auVar28._0_4_;
      fVar26 = fVar27 * 0.5 * (3.0 - fVar22 * fVar27 * fVar27);
      fVar22 = fVar26 * fStack_1b0;
      fVar27 = fVar26 * fStack_1b8;
      fVar26 = fVar26 * fStack_1b4;
      fVar30 = (float)uStack_1d8 - *(float *)(param_1 + 0xc);
      fVar31 = uStack_1d8._4_4_ - *(float *)(param_1 + 0x10);
      fVar29 = fVar31 * fVar26 + fVar30 * fVar27 +
               ((float)uStack_1d0 - *(float *)(param_1 + 0x14)) * fVar22;
      if (0.0 <= fVar29) {
        if ((-0.0001 < fVar29) && (fVar29 < 0.0001)) {
          fVar27 = fVar27 * param_2;
          fVar26 = fVar26 * param_2;
          fVar22 = fVar22 * param_2;
          goto LAB_18059348c;
        }
      }
      else {
        fVar27 = (fVar30 - fVar29 * fVar27) + fVar27 * param_2 * 0.045;
        fVar26 = (fVar31 - fVar29 * fVar26) + fVar26 * param_2 * 0.045;
        fVar22 = fVar22 * param_2 * 0.045 - fVar29 * fVar22;
LAB_18059348c:
        uStack_1d8 = CONCAT44(fVar26 + *(float *)(param_1 + 0x10),fVar27 + *(float *)(param_1 + 0xc)
                             );
        uStack_1d0 = CONCAT44(0x7f7fffff,fVar22 + *(float *)(param_1 + 0x14));
      }
      FUN_180593b40(param_1,lVar15,&uStack_1a8,&uStack_1d8,bVar20,cVar11);
    }
    else {
      cVar10 = func_0x00018057c520(&uStack_1a8,cVar11);
      if ((*(int *)(param_4 + 0x194) == 1) ||
         ((cVar10 != '\0' && ((*(char *)(param_4 + 0x9a) == '\0' || (uStack_178._4_1_ == '\x01')))))
         ) {
        if (0.0 <= fVar22) {
LAB_180593191:
          uVar19 = 1;
        }
        else {
          if (uStack_178._4_1_ == '\x02') {
            uVar18 = *(uint *)(uStack_188 + 0x18);
          }
          else {
            uVar18 = 0;
          }
          if ((uVar18 & 0x40) != 0) goto LAB_180593191;
          uVar19 = 0;
        }
        cVar10 = func_0x0001805998d0(param_1,uVar19);
        if ((cVar10 != '\0') && ((*(uint *)(param_4 + 0x24) & 0x800) != 0)) {
          uStack_1d8 = *(uint64_t *)(param_1 + 0xc);
          uStack_1d0 = *(uint64_t *)(param_1 + 0x14);
          pfVar1[0] = 0.0;
          pfVar1[1] = 0.0;
          uStack_1a8 = *(uint64_t *)(param_1 + 0xa0);
          uStack_1a0 = *(uint64_t *)(param_1 + 0xa8);
          *(uint64_t *)(param_1 + 0xe0) = 0;
          uStack_198 = *(uint64_t *)(param_1 + 0xb0);
          uStack_190 = *(uint64_t *)(param_1 + 0xb8);
          *(uint64_t *)(param_1 + 0x24) = 0;
          *(uint64_t *)(param_1 + 0x60) = 0;
          uStack_188 = *(int64_t *)(param_1 + 0xc0);
          uStack_180 = *(uint64_t *)(param_1 + 200);
          *(uint64_t *)(param_1 + 0x1c) = 0;
          uStack_178 = *(uint64_t *)(param_1 + 0xd0);
        }
      }
      else {
        uStack_1c8 = CONCAT44((int32_t)uStack_198,uStack_198._4_4_) ^ 0x8000000000000000;
        uStackX_8 = 0;
        fStack_1c0 = 0.0;
        uStack_1bc = 0x7f7fffff;
        func_0x000180085850(&uStack_198,&fStack_1b8,&uStack_1c8);
        uStackX_8 = CONCAT44(fStack_1b4,fStack_1b8);
        FUN_1801be430(&uStackX_8);
        if ((*(char *)(param_4 + 0x9b) == '\0') || (*(int *)(param_4 + 0x194) == 1)) {
          fVar26 = uStack_1d8._4_4_;
          fVar27 = (float)uStack_1d8;
        }
        else {
          pfVar16 = (float *)FUN_180599870(param_1,&uStackX_20);
          if (*(float *)(param_4 + 0x184) <= 0.0 && *(float *)(param_4 + 0x184) != 0.0) {
            fVar27 = -1.0;
          }
          else {
            fVar27 = 1.0;
          }
          uStackX_18 = CONCAT44(fStack_1b4 - fVar27 * *pfVar16,fVar27 * pfVar16[1] + fStack_1b8);
          FUN_1801be430(&uStackX_18);
          fVar27 = (float)uStack_1d8 + (float)uStackX_18 * param_2;
          fVar26 = uStack_1d8._4_4_ + uStackX_18._4_4_ * param_2;
          uStack_1d8 = CONCAT44(fVar26,fVar27);
        }
        if ((fVar26 - *(float *)(param_1 + 0x10)) * uStackX_8._4_4_ +
            (fVar27 - *(float *)(param_1 + 0xc)) * (float)uStackX_8 < 0.0) {
          uStack_1d8 = CONCAT44(fVar26 + uStackX_8._4_4_ * param_2,
                                fVar27 + (float)uStackX_8 * param_2);
        }
        FUN_180593b40(param_1,lVar15,&uStack_1a8,&uStack_1d8,bVar20,cVar11);
      }
      uStack_1d0 = CONCAT44(uStack_1d0._4_4_,(float)uStack_178);
      *(float *)(param_1 + 0x14) = (float)uStack_178;
      if (ABS(fVar22) < param_2 * 3.0) {
        *(float *)(param_1 + 0x108) = fVar22 + *(float *)(param_1 + 0x108);
      }
      if ((*(float *)(lVar15 + 0x3ec4) <= (float)uStack_178) &&
         (*(float *)(param_1 + 0x2c) <= -1.0 && *(float *)(param_1 + 0x2c) != -1.0)) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x800000;
      }
      uStackX_18 = CONCAT44(uStackX_18._4_4_,*(int32_t *)(param_1 + 0x2c));
    }
  }
LAB_1805929c8:
  fVar27 = (float)uStack_1d8 - *(float *)(param_1 + 0xc);
  fVar22 = uStack_1d8._4_4_ - *(float *)(param_1 + 0x10);
  fStack_1c0 = (float)uStack_1d0 - *(float *)(param_1 + 0x14);
  *pfVar1 = fVar27;
  *(float *)(param_1 + 0x16c) = fVar22;
  *(float *)(param_1 + 0x170) = fStack_1c0;
  *(int32_t *)(param_1 + 0x174) = 0x7f7fffff;
  uStack_1c8 = CONCAT44(fVar22,fVar27);
  uStack_1bc = 0x7f7fffff;
  fVar27 = fVar27 - *(float *)(param_4 + 0x184);
  *pfVar1 = fVar27;
  fVar22 = *(float *)(param_1 + 0x16c) - *(float *)(param_4 + 0x188);
  *(float *)(param_1 + 0x16c) = fVar22;
  fVar26 = *(float *)(param_1 + 0x170) - *(float *)(param_4 + 0x18c);
  *(float *)(param_1 + 0x170) = fVar26;
  lVar12 = uStackX_18;
  if (0.0 < param_2) {
    fVar29 = *(float *)(param_1 + 0xe4);
    fVar25 = 0.0;
    fVar30 = *(float *)(param_1 + 0xe0);
    fVar31 = *(float *)(param_1 + 0xe8);
    fVar23 = fVar30 * fVar30 + fVar29 * fVar29 + fVar31 * fVar31;
    if ((1.0000001e-06 < fVar23) && (fVar29 * fVar22 + fVar30 * fVar27 + fVar31 * fVar26 < 0.0)) {
      FUN_1801503e0(pfVar1,&fStack_1b8);
      fVar26 = fStack_1b4 * *(float *)(param_1 + 0xe4) + fStack_1b8 * *(float *)(param_1 + 0xe0) +
               fStack_1b0 * *(float *)(param_1 + 0xe8);
      if ((*(uint *)(param_4 + 0x24) & 1) == 0) {
        fVar29 = 10.0;
      }
      else {
        fVar29 = 30.0;
        fVar22 = *(float *)(param_1 + 0xe0);
        fVar27 = *(float *)(param_1 + 0xe4);
        fVar30 = *(float *)(param_1 + 0xe8);
        fVar31 = fVar27 * fVar27 + fVar22 * fVar22 + fVar30 * fVar30;
        auVar28 = rsqrtss(ZEXT416((uint)fVar31),ZEXT416((uint)fVar31));
        fVar25 = auVar28._0_4_;
        fVar31 = fVar25 * 0.5 * (3.0 - fVar31 * fVar25 * fVar25);
        fVar25 = -(fVar22 * fVar31 * fStack_1b8 + fVar27 * fVar31 * fStack_1b4 +
                  fVar30 * fVar31 * fStack_1b0);
        if (((*(uint *)(param_4 + 0x24) & 4) == 0) || ((*(uint *)(param_1 + 8) >> 8 & 1) == 0)) {
          fVar25 = 0.0;
        }
      }
      fVar29 = fVar29 * param_2;
      if (0.0 <= fVar29) {
        if (1.0 <= fVar29) {
          fVar29 = 1.0;
        }
      }
      else {
        fVar29 = 0.0;
      }
      fVar22 = *(float *)(param_1 + 0x16c);
      fVar27 = *pfVar1;
      fVar30 = fVar29 * fStack_1b8 * fVar26;
      fVar29 = fVar29 * fStack_1b4 * fVar26;
      if (fVar22 * fVar29 + fVar27 * fVar30 <= 0.0) {
        if (fVar29 * fVar29 + fVar30 * fVar30 <=
            fVar27 * fVar27 + fVar22 * fVar22 +
            *(float *)(param_1 + 0x170) * *(float *)(param_1 + 0x170)) {
          fVar27 = fVar27 + fVar30;
          fVar22 = fVar29 + *(float *)(param_1 + 0x16c);
          *pfVar1 = fVar27;
        }
        else {
          uStackX_20 = *(int64_t *)(param_1 + 0xe0);
          FUN_180310ad0(&uStackX_20);
          fVar22 = uStackX_20._4_4_ * *(float *)(param_1 + 0x16c) + (float)uStackX_20 * *pfVar1;
          fVar27 = *pfVar1 - (float)uStackX_20 * fVar22;
          fVar22 = *(float *)(param_1 + 0x16c) - uStackX_20._4_4_ * fVar22;
          *pfVar1 = fVar27;
        }
        *(float *)(param_1 + 0x16c) = fVar22;
      }
    }
    fVar26 = 1.0 / param_2;
    *(float *)(param_1 + 0x24) = fVar26 * fVar27;
    *(float *)(param_1 + 0x28) = fVar22 * fVar26;
    *(float *)(param_1 + 0x2c) = fVar26 * *(float *)(param_1 + 0x170);
    *(int32_t *)(param_1 + 0x30) = 0x7f7fffff;
    if (((1.0000001e-06 < fVar23) && (0.1 < *(float *)(param_1 + 0xe8))) &&
       (*(float *)(param_1 + 0x2c) <= -7.0 && *(float *)(param_1 + 0x2c) != -7.0)) {
      *(int32_t *)(param_1 + 0x2c) = 0xc0e00000;
      *(float *)(param_1 + 0x170) = param_2 * -7.0;
    }
    if ((((float)uStackX_18 < -1.0) &&
        (*(float *)(param_1 + 0x204) <= -1.0 && *(float *)(param_1 + 0x204) != -1.0)) &&
       ((system_status_flag != 1 && (system_status_flag != 4)))) {
      *(float *)(param_1 + 0xd8) = -(float)uStackX_18;
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x800000;
    }
    fVar22 = *(float *)(param_1 + 0x24);
    if (fVar22 * fVar22 + *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28) +
        *(float *)(param_1 + 0x2c) * *(float *)(param_1 + 0x2c) < param_2 * 0.010000001 * param_2) {
      fVar22 = 0.0;
      pfVar1[0] = 0.0;
      pfVar1[1] = 0.0;
      *(uint64_t *)(param_1 + 0x170) = 0;
      *(uint64_t *)(param_1 + 0x24) = 0;
      *(uint64_t *)(param_1 + 0x2c) = 0;
    }
    if (0.15 <= param_2) {
      fVar27 = 1.0;
    }
    else {
      fVar27 = param_2 * 6.6;
    }
    fVar29 = 1.0 - fVar27;
    fVar30 = fVar22 * fVar27 + fVar29 * *(float *)(param_1 + 0x1fc);
    fVar22 = fVar27 * *(float *)(param_1 + 0x28) + fVar29 * *(float *)(param_1 + 0x200);
    fStack_1c0 = fVar29 * *(float *)(param_1 + 0x204) + fVar27 * *(float *)(param_1 + 0x2c);
    uStack_1c8 = CONCAT44(fVar22,fVar30);
    uStack_1bc = 0x7f7fffff;
    *(float *)(param_1 + 0x1fc) = fVar30;
    *(float *)(param_1 + 0x200) = fVar22;
    *(float *)(param_1 + 0x204) = fStack_1c0;
    *(int32_t *)(param_1 + 0x208) = 0x7f7fffff;
    if (((1.0000001e-06 < fVar23) && ((*(byte *)(param_1 + 0x40) & 3) == 0)) &&
       ((0.0 < *(float *)(param_1 + 0x154) &&
        ((((-0.11 <= *(float *)(param_1 + 0x2c) && (*(float *)(param_1 + 0x2c) < 0.11)) &&
          (-0.11 <= *(float *)(param_1 + 0x204))) && (*(float *)(param_1 + 0x204) < 0.11)))))) {
      cVar11 = func_0x00018057c520(&uStack_1a8,cVar11);
      if (cVar11 != '\0') {
        func_0x0001805998d0(param_1,1);
      }
    }
    uStackX_8 = CONCAT44(fVar26 * *(float *)(param_1 + 0x16c),fVar26 * *pfVar1);
    FUN_180506a80(&uStackX_8,*(uint *)(param_1 + 0x34) ^ 0x80000000);
    if (((*pfVar1 != 0.0) || (*(float *)(param_1 + 0x16c) != 0.0)) ||
       (lVar12 = uStackX_18, *(float *)(param_1 + 0x170) != 0.0)) {
      lVar12 = *(int64_t *)(param_1 + 0x1c);
      uStackX_18._4_4_ = (float)((uint64_t)lVar12 >> 0x20);
      if ((uStackX_18._4_4_ - 0.1 <= uStackX_8._4_4_) && (uStackX_8._4_4_ <= uStackX_18._4_4_ + 0.1)
         ) {
        uStackX_18._0_4_ = (float)lVar12;
        if (((float)uStackX_18 - 0.1 <= (float)uStackX_8) &&
           ((float)uStackX_8 <= (float)uStackX_18 + 0.1)) goto LAB_18059394d;
      }
      fVar22 = (uStackX_18._4_4_ - uStackX_8._4_4_) + *(float *)(param_1 + 0x160);
      *(float *)(param_1 + 0x160) = fVar22;
      if (((*(byte *)(param_4 + 0x24) & 4) != 0) &&
         ((((6.5 < uStackX_18._4_4_ && (0.45 <= fVar25)) ||
           ((3.5 < uStackX_18._4_4_ && ((uStackX_8._4_4_ < 3.0 && (7.0 < fVar22)))))) &&
          (((*(uint *)(param_1 + 8) >> 8 & 1) != 0 &&
           ((system_status_flag != 1 && (system_status_flag != 4)))))))) {
        uStackX_8 = 0;
        *(int32_t *)(param_1 + 0x160) = 0;
        if ((uStackX_18._4_4_ < 9.5) || (fVar25 < 0.9)) {
          *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x400000;
        }
        else {
          *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x20000000;
        }
      }
      *(uint64_t *)(param_1 + 0x1c) = uStackX_8;
    }
  }
LAB_18059394d:
  uStackX_18 = lVar12;
  *(uint64_t *)(param_1 + 0xe0) = 0;
  *(uint64_t *)(param_1 + 0xe8) = 0;
  puVar17 = (uint64_t *)FUN_1801b4fa0(lVar15,&lStack_170,&uStack_1d8);
  fVar26 = fStack_138;
  fVar27 = fStack_158;
  uVar24 = *(int32_t *)((int64_t)puVar17 + 4);
  uStack_1d8 = *puVar17;
  fVar22 = *(float *)(puVar17 + 1);
  uVar2 = *(int32_t *)((int64_t)puVar17 + 0xc);
  uStack_1d0 = puVar17[1];
  if ((-9000.0 < fVar22) && (fVar22 < 9000.0)) {
    *(int32_t *)(param_1 + 0xc) = *(int32_t *)puVar17;
    *(int32_t *)(param_1 + 0x10) = uVar24;
    *(float *)(param_1 + 0x14) = fVar22;
    *(int32_t *)(param_1 + 0x18) = uVar2;
    *(uint64_t *)(param_1 + 0xa0) = uStack_1a8;
    *(uint64_t *)(param_1 + 0xa8) = uStack_1a0;
    *(uint64_t *)(param_1 + 0xb0) = uStack_198;
    *(uint64_t *)(param_1 + 0xb8) = uStack_190;
    *(int32_t *)(param_1 + 0xc0) = (int32_t)uStack_188;
    *(int32_t *)(param_1 + 0xc4) = uStack_188._4_4_;
    *(int32_t *)(param_1 + 200) = (int32_t)uStack_180;
    *(int32_t *)(param_1 + 0xcc) = uStack_180._4_4_;
    *(uint64_t *)(param_1 + 0xd0) = uStack_178;
  }
  if (0.0 < param_2) {
    fVar22 = 1.0 / param_2;
    uStack_1bc = 0x7f7fffff;
    *(float *)(param_1 + 0x20c) = (*(float *)(param_1 + 0xc) - fStack_158) * fVar22;
    *(float *)(param_1 + 0x210) = (*(float *)(param_1 + 0x10) - fStack_138) * fVar22;
    *(float *)(param_1 + 0x214) = (*(float *)(param_1 + 0x14) - fStack_148) * fVar22;
    *(int32_t *)(param_1 + 0x218) = 0x7f7fffff;
    uVar24 = func_0x000180084f70();
    *(int32_t *)(param_1 + 0x234) = uVar24;
    uStackX_8 = CONCAT44((*(float *)(param_1 + 0x10) - fVar26) * fVar22,
                         (*(float *)(param_1 + 0xc) - fVar27) * fVar22);
    *(uint64_t *)(param_1 + 0x21c) = uStackX_8;
    *(float *)(param_1 + 0x238) =
         SQRT(*(float *)(param_1 + 0x21c) * *(float *)(param_1 + 0x21c) +
              *(float *)(param_1 + 0x220) * *(float *)(param_1 + 0x220));
  }
  if (0.15 <= param_2) {
    param_2 = 1.0;
  }
  else {
    param_2 = param_2 * 6.6;
  }
  puVar17 = (uint64_t *)func_0x0001802bf4a0(&fStack_138,param_1 + 0x224,param_1 + 0x20c,param_2);
  uVar19 = puVar17[1];
  *(uint64_t *)(param_1 + 0x224) = *puVar17;
  *(uint64_t *)(param_1 + 0x22c) = uVar19;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffd;
  return;
}



int8_t
FUN_180593b40(int64_t param_1,uint64_t param_2,uint64_t *param_3,float *param_4,byte param_5,
             int8_t param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  int iVar9;
  
  iVar9 = 0;
  *(int8_t *)((int64_t)param_3 + 0x34) = 0;
  *(int32_t *)(param_3 + 2) = 0;
  *(int32_t *)((int64_t)param_3 + 0x14) = 0;
  *(int32_t *)(param_3 + 3) = 0x3f800000;
  *(int32_t *)((int64_t)param_3 + 0x1c) = 0x7f7fffff;
  *(int32_t *)(param_3 + 6) = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  do {
    FUN_1801aa0f0(param_2,param_4,0,param_3,(uint)param_5 << 6 | 0x51b189,param_6);
    if (*(char *)((int64_t)param_3 + 0x34) == '\0') {
      fVar1 = *(float *)(param_1 + 0x10);
      fVar2 = *(float *)(param_1 + 0x14);
      fVar3 = *(float *)(param_1 + 0x10);
      fVar4 = *(float *)(param_1 + 0x14);
      *param_4 = (*param_4 - *(float *)(param_1 + 0xc)) * 0.95 + *(float *)(param_1 + 0xc);
      param_4[1] = (param_4[1] - fVar1) * 0.95 + fVar3;
      param_4[2] = (param_4[2] - fVar2) * 0.95 + fVar4;
      param_4[3] = 3.4028235e+38;
    }
    iVar9 = iVar9 + 1;
    if (10 < iVar9) {
      param_4[2] = 1000.0;
    }
    if (0x1e < iVar9) {
      if (*(char *)((int64_t)param_3 + 0x34) != '\0') {
        return 1;
      }
      FUN_1806272a0(&rendering_buffer_2472_ptr);
      uVar8 = *(uint64_t *)(param_1 + 0xa8);
      *param_3 = *(uint64_t *)(param_1 + 0xa0);
      param_3[1] = uVar8;
      uVar8 = *(uint64_t *)(param_1 + 0xb8);
      param_3[2] = *(uint64_t *)(param_1 + 0xb0);
      param_3[3] = uVar8;
      uVar5 = *(int32_t *)(param_1 + 0xc4);
      uVar6 = *(int32_t *)(param_1 + 200);
      uVar7 = *(int32_t *)(param_1 + 0xcc);
      *(int32_t *)(param_3 + 4) = *(int32_t *)(param_1 + 0xc0);
      *(int32_t *)((int64_t)param_3 + 0x24) = uVar5;
      *(int32_t *)(param_3 + 5) = uVar6;
      *(int32_t *)((int64_t)param_3 + 0x2c) = uVar7;
      param_3[6] = *(uint64_t *)(param_1 + 0xd0);
      if (*(char *)((int64_t)param_3 + 0x34) == '\0') {
        return 0;
      }
    }
    if (*(char *)((int64_t)param_3 + 0x34) != '\0') {
      return 1;
    }
  } while( true );
}







