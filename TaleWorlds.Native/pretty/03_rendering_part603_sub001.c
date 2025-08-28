#include "TaleWorlds.Native.Split.h"
// 03_rendering_part603_sub001.c - 5 个函数
#include "TaleWorlds.Native.Split.h"
// 03_rendering_part603.c - 5 个函数
// 函数: void NetworkSystem_99f78(uint64_t param_1,float param_2,int64_t param_3,float param_4,
void NetworkSystem_99f78(uint64_t param_1,float param_2,int64_t param_3,float param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                  float param_9,uint64_t param_10,uint64_t param_11,uint64_t param_12,
                  uint64_t param_13)
{
  float *pfVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  bool bVar5;
  int64_t lVar6;
  uint64_t *unaff_RBP;
  float *pfVar7;
  int iVar8;
  float *in_R9;
  char cVar9;
  uint64_t uVar10;
  float *unaff_R12;
  int64_t unaff_R13;
  float *unaff_R14;
  float fVar11;
  float fVar12;
  float in_XMM2_Da;
  float fVar13;
  float fVar14;
  int8_t auVar15 [16];
  float fVar16;
  float fVar17;
  float in_XMM4_Da;
  float fVar18;
  float fVar19;
  float unaff_XMM6_Da;
  uint unaff_XMM7_Da;
  float fVar20;
  float fVar21;
  float fVar22;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float fStack000000000000004c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  float fStack000000000000007c;
  if (in_XMM2_Da <= unaff_XMM6_Da) {
    unaff_XMM6_Da = in_XMM2_Da;
  }
  cVar9 = '\0';
  uVar10 = 1;
  bVar5 = false;
  param_11._4_4_ = param_2 - unaff_XMM6_Da;
  lVar6 = 0;
  fVar20 = (float)((uint)unaff_XMM14_Da ^ unaff_XMM7_Da);
  fVar21 = (float)((uint)unaff_XMM12_Da ^ unaff_XMM7_Da);
  iVar8 = 0;
  fVar22 = (float)((uint)unaff_XMM13_Da ^ unaff_XMM7_Da);
  pfVar7 = unaff_R12;
  do {
    iVar8 = iVar8 + 1;
    fStack000000000000007c = *pfVar7;
    fStack0000000000000078 = pfVar7[1];
    param_11._0_4_ = pfVar7[2];
    fVar12 = pfVar7[3];
    *(float *)(unaff_RBP + -6) = fStack000000000000007c;
    *(float *)((int64_t)unaff_RBP + -0x2c) = fStack0000000000000078;
    *(float *)(unaff_RBP + -5) = (float)param_11;
    *(float *)((int64_t)unaff_RBP + -0x24) = fVar12;
    pfVar1 = (float *)(param_3 +
                      (int64_t)
                      (2 - (iVar8 + (iVar8 / 3 + (iVar8 >> 0x1f) +
                                    (int)(((int64_t)iVar8 / 3 + ((int64_t)iVar8 >> 0x3f) &
                                          0xffffffffU) >> 0x1f)) * -3)) * 0x10);
    fVar12 = pfVar1[1];
    fVar13 = pfVar1[2];
    fVar14 = pfVar1[3];
    fVar11 = *pfVar1 - fStack000000000000007c;
    *(float *)(unaff_RBP + -8) = *pfVar1;
    *(float *)((int64_t)unaff_RBP + -0x3c) = fVar12;
    *(float *)(unaff_RBP + -7) = fVar13;
    *(float *)((int64_t)unaff_RBP + -0x34) = fVar14;
    *(float *)(unaff_RBP + -0xe) = fVar12 - fStack0000000000000078;
    *(float *)((int64_t)unaff_RBP + -0x6c) = fVar12;
    *(float *)(unaff_RBP + -0xd) = fVar12;
    *(float *)((int64_t)unaff_RBP + -100) = fVar12;
    *(float *)(unaff_RBP + -10) = fVar13 - (float)param_11;
    *(float *)((int64_t)unaff_RBP + -0x4c) = fVar13;
    *(float *)(unaff_RBP + -9) = fVar13;
    *(float *)((int64_t)unaff_RBP + -0x44) = fVar13;
    fStack0000000000000070 = param_4 - fStack000000000000007c;
    fStack000000000000004c = unaff_XMM15_Da - fStack0000000000000078;
    fStack0000000000000074 = in_XMM4_Da - (float)param_11;
    fStack000000000000007c = *unaff_R14 - fStack000000000000007c;
    fStack0000000000000078 = param_8._4_4_ - fStack0000000000000078;
    param_11._0_4_ = unaff_R14[2] - (float)param_11;
    fVar18 = unaff_XMM12_Da * *(float *)(unaff_RBP + -10) -
             unaff_XMM13_Da * *(float *)(unaff_RBP + -0xe);
    fVar12 = unaff_XMM13_Da * fVar11 - unaff_XMM14_Da * *(float *)(unaff_RBP + -10);
    fVar13 = unaff_XMM14_Da * *(float *)(unaff_RBP + -0xe) - unaff_XMM12_Da * fVar11;
    fVar14 = fVar12 * fVar12 + fVar18 * fVar18 + fVar13 * fVar13;
    if (fVar14 <= 0.0) {
      uVar10 = 0;
      cVar9 = '\x01';
    }
    else {
      fVar16 = 1.0 / SQRT(fVar14);
      fVar14 = fVar16 * fVar13 * fStack0000000000000074;
      fVar19 = fVar16 * fVar12 * fStack000000000000004c + fVar16 * fVar18 * fStack0000000000000070 +
               fVar14;
      fVar12 = fVar16 * fVar12 * fStack0000000000000078 + fVar16 * fVar18 * fStack000000000000007c +
               fVar16 * fVar13 * (float)param_11;
      if ((fVar19 <= 0.0) || (fVar12 <= 0.0)) {
        if ((*(float *)(unaff_RBP + -0x10) <= fVar19) || (*(float *)(unaff_RBP + -0x10) <= fVar12))
        {
          in_R9 = (float *)unaff_RBP[0x21];
          param_5 = &param_12;
          UtilitiesSystem_457f0(in_R9,fVar14,unaff_RBP + -6,unaff_RBP + -8,unaff_RBP + -0xc);
          fVar13 = *(float *)((int64_t)unaff_RBP + -0x5c) - param_12._4_4_;
          fVar14 = *(float *)(unaff_RBP + -0xc) - (float)param_12;
          fVar17 = *(float *)(unaff_RBP + -0xb) - (float)param_13;
          fVar18 = fVar13 * fVar13 + fVar14 * fVar14 + fVar17 * fVar17;
          fVar16 = *(float *)(unaff_RBP + -0xe) * *(float *)(unaff_RBP + -0xe) + fVar11 * fVar11 +
                   *(float *)(unaff_RBP + -10) * *(float *)(unaff_RBP + -10);
          auVar15 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
          fVar19 = auVar15._0_4_;
          fVar12 = *(float *)(unaff_RBP + -0xe);
          fVar16 = fVar19 * 0.5 * (3.0 - fVar16 * fVar19 * fVar19);
          *(float *)(unaff_RBP + -0xe) = fVar12 * fVar16;
          *(int32_t *)((int64_t)unaff_RBP + -0x6c) =
               *(int32_t *)((int64_t)unaff_RBP + -0x6c);
          *(int32_t *)(unaff_RBP + -0xd) = *(int32_t *)(unaff_RBP + -0xd);
          *(int32_t *)((int64_t)unaff_RBP + -100) = *(int32_t *)((int64_t)unaff_RBP + -100);
          if ((fVar12 * fVar16 * fVar17 - fVar13 * fVar16 * *(float *)(unaff_RBP + -10)) *
              unaff_XMM14_Da +
              (fVar16 * *(float *)(unaff_RBP + -10) * fVar14 - fVar16 * fVar11 * fVar17) *
              unaff_XMM12_Da +
              (fVar16 * fVar11 * fVar13 - *(float *)(unaff_RBP + -0xe) * fVar14) * unaff_XMM13_Da <
              0.0) {
            cVar9 = '\x01';
            fVar12 = in_R9[8] - SQRT(fVar18);
            if (0.0 <= fVar12) {
              param_6 = CONCAT44(param_12._4_4_,(float)param_12);
              param_7 = CONCAT44(param_13._4_4_,(float)param_13);
              if (0.01 < SQRT(fVar18)) {
                auVar15 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
                fVar20 = auVar15._0_4_;
                fVar22 = fVar20 * 0.5 * (3.0 - fVar18 * fVar20 * fVar20);
                fVar21 = (float)((uint)(fVar13 * fVar22) ^ unaff_XMM7_Da);
                fVar20 = (float)((uint)(fVar22 * fVar14) ^ unaff_XMM7_Da);
                fVar22 = (float)((uint)(fVar17 * fVar22) ^ unaff_XMM7_Da);
              }
              bVar5 = true;
              param_11._4_4_ = fVar12;
            }
            else {
              uVar10 = 0;
            }
          }
          param_3 = unaff_RBP[0x20];
        }
        else {
          uVar10 = 0;
          cVar9 = '\x01';
        }
      }
      param_4 = *(float *)(unaff_RBP + 0x23);
      in_XMM4_Da = param_9;
    }
    lVar6 = lVar6 + 1;
    pfVar7 = pfVar7 + -4;
  } while ((cVar9 == '\0') && (lVar6 < 3));
  if ((char)uVar10 == '\0') {
    return;
  }
  iVar8 = *(int *)(unaff_R13 + 0x40);
  if (1 < iVar8) {
    return;
  }
  if (bVar5) {
    fVar12 = param_6._4_4_;
    param_4 = (float)param_6;
    fVar13 = (float)param_7;
LAB_18059a673:
    fVar14 = *(float *)(unaff_RBP + 0x23);
  }
  else {
    fVar13 = *(float *)((int64_t)unaff_RBP + -0x7c);
    fVar12 = unaff_XMM15_Da;
    if (0.0 <= fVar13) {
      if (0.0 < param_10._4_4_) {
        if (param_10._4_4_ <= fVar13) goto NetworkSystem_9a4b2;
        goto LAB_18059a3ee;
      }
      if (fVar13 < 0.0) goto LAB_18059a4dd;
    }
    else {
LAB_18059a4dd:
      if (param_10._4_4_ < 0.0) {
        if (fVar13 <= param_10._4_4_) {
NetworkSystem_9a4b2:
          param_4 = *unaff_R14;
          in_XMM4_Da = unaff_R14[2];
          fVar12 = unaff_R14[1];
          fVar13 = param_10._4_4_;
        }
LAB_18059a3ee:
        fVar12 = fVar12 - unaff_XMM12_Da * fVar13;
        param_4 = param_4 - unaff_XMM14_Da * fVar13;
        fVar13 = in_XMM4_Da - unaff_XMM13_Da * fVar13;
        param_6 = CONCAT44(fVar12,param_4);
        param_7 = CONCAT44(0x7f7fffff,fVar13);
        goto LAB_18059a673;
      }
    }
    fVar18 = unaff_R14[1] - unaff_XMM15_Da;
    fVar16 = unaff_R14[2] - in_R9[2];
    fVar12 = *unaff_R14;
    param_4 = fVar12 - param_4;
    fVar13 = fVar18 * fVar18 + param_4 * param_4 + fVar16 * fVar16;
    auVar15 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
    fVar14 = auVar15._0_4_;
    fVar11 = fVar14 * 0.5 * (3.0 - fVar13 * fVar14 * fVar14);
    fVar14 = *in_R9;
    *(float *)(unaff_RBP + 0x20) = fVar11 * fVar18;
    *(float *)(unaff_RBP + 0x23) = fVar11 * param_4;
    fVar13 = fVar11 * fVar18 * unaff_XMM12_Da + fVar11 * param_4 * unaff_XMM14_Da +
             fVar11 * fVar16 * unaff_XMM13_Da;
    if (fVar13 == 0.0) {
      param_4 = (fVar12 + fVar14) * 0.5;
      fVar12 = (unaff_XMM15_Da + unaff_R14[1]) * 0.5;
      fVar13 = (in_R9[2] + unaff_R14[2]) * 0.5;
    }
    else {
      fVar13 = ((unaff_R12[1] - unaff_XMM15_Da) * unaff_XMM12_Da +
                (*unaff_R12 - fVar14) * unaff_XMM14_Da + (unaff_R12[2] - in_R9[2]) * unaff_XMM13_Da)
               / fVar13;
      param_4 = fVar13 * *(float *)(unaff_RBP + 0x23) + fVar14;
      fVar12 = fVar13 * *(float *)(unaff_RBP + 0x20) + unaff_XMM15_Da;
      fVar13 = fVar13 * fVar11 * fVar16 + in_R9[2];
    }
    param_6 = CONCAT44(fVar12,param_4);
    param_7 = CONCAT44(0x7f7fffff,fVar13);
  }
  if ((((unaff_XMM15_Da - fVar12) * fVar21 + (fVar14 - param_4) * fVar20 +
        (in_R9[2] - fVar13) * fVar22 < 0.0) ||
      ((unaff_R14[1] - fVar12) * fVar21 + (*unaff_R14 - param_4) * fVar20 +
       (unaff_R14[2] - fVar13) * fVar22 < 0.0)) && (iVar8 < 1)) {
    lVar6 = (int64_t)iVar8 * 0x40;
    *(uint64_t *)((int64_t)unaff_RBP + -0xc) = 0;
    *(uint64_t *)(lVar6 + unaff_R13) = 0;
    ((uint64_t *)(lVar6 + unaff_R13))[1] = 0;
    *(float *)((int64_t)unaff_RBP + 0xc) = -fVar20;
    *(float *)(unaff_RBP + 2) = -fVar21;
    *(float *)((int64_t)unaff_RBP + 0x14) = -fVar22;
    *(int32_t *)(unaff_RBP + 3) = 0x7f7fffff;
    *(uint64_t *)((int64_t)unaff_RBP + -4) = param_6;
    *(uint64_t *)((int64_t)unaff_RBP + 4) = param_7;
    fVar20 = *(float *)((int64_t)unaff_RBP + -0xc);
    fVar21 = *(float *)(unaff_RBP + -1);
    fVar22 = *(float *)((int64_t)unaff_RBP + -4);
    uVar10 = unaff_RBP[2];
    uVar3 = unaff_RBP[3];
    pfVar7 = (float *)(lVar6 + 0x10 + unaff_R13);
    *pfVar7 = param_11._4_4_;
    pfVar7[1] = fVar20;
    pfVar7[2] = fVar21;
    pfVar7[3] = fVar22;
    uVar4 = unaff_RBP[1];
    puVar2 = (uint64_t *)(lVar6 + 0x20 + unaff_R13);
    *puVar2 = *unaff_RBP;
    puVar2[1] = uVar4;
    puVar2 = (uint64_t *)(lVar6 + 0x30 + unaff_R13);
    *puVar2 = uVar10;
    puVar2[1] = uVar3;
    *(int *)(unaff_R13 + 0x40) = *(int *)(unaff_R13 + 0x40) + 1;
  }
  return;
}
// 函数: void NetworkSystem_9a395(void)
void NetworkSystem_9a395(void)
{
  int32_t *puVar1;
  uint64_t *puVar2;
  float fVar3;
  int iVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t lVar11;
  uint64_t *unaff_RBP;
  float *in_R9;
  float *unaff_R12;
  int64_t unaff_R13;
  float *unaff_R14;
  char unaff_R15B;
  int8_t auVar12 [16];
  float in_XMM3_Da;
  float fVar13;
  float in_XMM4_Da;
  float fVar14;
  float fVar15;
  float unaff_XMM6_Da;
  float fVar16;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float fVar17;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  int32_t local_buffer_3c;
  uint64_t local_buffer_58;
  iVar4 = *(int *)(unaff_R13 + 0x40);
  if (1 < iVar4) {
    return;
  }
  if (unaff_R15B == '\0') {
    fStack0000000000000038 = *(float *)((int64_t)unaff_RBP + -0x7c);
    if (unaff_XMM8_Da <= fStack0000000000000038) {
      if (unaff_XMM8_Da < unaff_XMM6_Da) {
        if (fStack0000000000000038 < unaff_XMM6_Da) goto LAB_18059a3d5;
NetworkSystem_9a4b2:
        in_XMM3_Da = *unaff_R14;
        fStack0000000000000034 = unaff_R14[1];
        in_XMM4_Da = unaff_R14[2];
        fStack0000000000000030 = unaff_XMM14_Da * unaff_XMM6_Da;
        fVar17 = unaff_XMM12_Da * unaff_XMM6_Da;
        fStack0000000000000038 = unaff_XMM13_Da * unaff_XMM6_Da;
        goto LAB_18059a3ee;
      }
      if (fStack0000000000000038 < unaff_XMM8_Da) goto LAB_18059a4dd;
    }
    else {
LAB_18059a4dd:
      if (unaff_XMM6_Da < unaff_XMM8_Da) {
        if (fStack0000000000000038 <= unaff_XMM6_Da) goto NetworkSystem_9a4b2;
LAB_18059a3d5:
        fStack0000000000000030 = unaff_XMM14_Da * fStack0000000000000038;
        fVar17 = unaff_XMM12_Da * fStack0000000000000038;
        fStack0000000000000038 = unaff_XMM13_Da * fStack0000000000000038;
        fStack0000000000000034 = unaff_XMM15_Da;
LAB_18059a3ee:
        local_buffer_3c = 0x7f7fffff;
        fStack0000000000000034 = fStack0000000000000034 - fVar17;
        fStack0000000000000030 = in_XMM3_Da - fStack0000000000000030;
        fStack0000000000000038 = in_XMM4_Da - fStack0000000000000038;
        goto LAB_18059a673;
      }
    }
    fVar14 = unaff_R14[1] - unaff_XMM15_Da;
    fVar16 = unaff_R14[2] - in_R9[2];
    fVar3 = *unaff_R14;
    local_buffer_3c = 0x7f7fffff;
    in_XMM3_Da = fVar3 - in_XMM3_Da;
    fVar17 = fVar14 * fVar14 + in_XMM3_Da * in_XMM3_Da + fVar16 * fVar16;
    auVar12 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
    fVar15 = auVar12._0_4_;
    fVar13 = fVar15 * 0.5 * (3.0 - fVar17 * fVar15 * fVar15);
    fVar17 = *in_R9;
    *(float *)(unaff_RBP + 0x20) = fVar13 * fVar14;
    *(float *)(unaff_RBP + 0x23) = fVar13 * in_XMM3_Da;
    fVar15 = fVar13 * fVar14 * unaff_XMM12_Da + fVar13 * in_XMM3_Da * unaff_XMM14_Da +
             fVar13 * fVar16 * unaff_XMM13_Da;
    if (fVar15 == unaff_XMM8_Da) {
      fStack0000000000000030 = (fVar3 + fVar17) * 0.5;
      fStack0000000000000034 = (unaff_XMM15_Da + unaff_R14[1]) * 0.5;
      fStack0000000000000038 = (in_R9[2] + unaff_R14[2]) * 0.5;
    }
    else {
      fVar15 = ((unaff_R12[1] - unaff_XMM15_Da) * unaff_XMM12_Da +
                (*unaff_R12 - fVar17) * unaff_XMM14_Da + (unaff_R12[2] - in_R9[2]) * unaff_XMM13_Da)
               / fVar15;
      fStack0000000000000030 = fVar15 * *(float *)(unaff_RBP + 0x23) + fVar17;
      fStack0000000000000034 = fVar15 * *(float *)(unaff_RBP + 0x20) + unaff_XMM15_Da;
      fStack0000000000000038 = fVar15 * fVar13 * fVar16 + in_R9[2];
    }
  }
  else {
LAB_18059a673:
    fVar17 = *(float *)(unaff_RBP + 0x23);
  }
  if ((((unaff_XMM15_Da - fStack0000000000000034) * unaff_XMM10_Da +
        (fVar17 - fStack0000000000000030) * unaff_XMM9_Da +
        (in_R9[2] - fStack0000000000000038) * unaff_XMM11_Da < unaff_XMM8_Da) ||
      ((unaff_R14[1] - fStack0000000000000034) * unaff_XMM10_Da +
       (*unaff_R14 - fStack0000000000000030) * unaff_XMM9_Da +
       (unaff_R14[2] - fStack0000000000000038) * unaff_XMM11_Da < unaff_XMM8_Da)) && (iVar4 < 1)) {
    lVar11 = (int64_t)iVar4 * 0x40;
    *(uint64_t *)((int64_t)unaff_RBP + -0xc) = 0;
    *(uint64_t *)(lVar11 + unaff_R13) = 0;
    ((uint64_t *)(lVar11 + unaff_R13))[1] = 0;
    *(float *)((int64_t)unaff_RBP + 0xc) = -unaff_XMM9_Da;
    *(float *)(unaff_RBP + 2) = -unaff_XMM10_Da;
    *(float *)((int64_t)unaff_RBP + 0x14) = -unaff_XMM11_Da;
    *(int32_t *)(unaff_RBP + 3) = 0x7f7fffff;
    *(uint64_t *)((int64_t)unaff_RBP + -4) =
         CONCAT44(fStack0000000000000034,fStack0000000000000030);
    *(uint64_t *)((int64_t)unaff_RBP + 4) =
         CONCAT44(local_buffer_3c,fStack0000000000000038);
    uVar5 = *(int32_t *)((int64_t)unaff_RBP + -0xc);
    uVar6 = *(int32_t *)(unaff_RBP + -1);
    uVar7 = *(int32_t *)((int64_t)unaff_RBP + -4);
    uVar8 = unaff_RBP[2];
    uVar9 = unaff_RBP[3];
    puVar1 = (int32_t *)(lVar11 + 0x10 + unaff_R13);
    *puVar1 = local_buffer_58._4_4_;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    uVar10 = unaff_RBP[1];
    puVar2 = (uint64_t *)(lVar11 + 0x20 + unaff_R13);
    *puVar2 = *unaff_RBP;
    puVar2[1] = uVar10;
    puVar2 = (uint64_t *)(lVar11 + 0x30 + unaff_R13);
    *puVar2 = uVar8;
    puVar2[1] = uVar9;
    *(int *)(unaff_R13 + 0x40) = *(int *)(unaff_R13 + 0x40) + 1;
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x00018059a3ab)
// WARNING: Removing unreachable block (ram,0x00018059a3ba)
// WARNING: Removing unreachable block (ram,0x00018059a4d7)
// WARNING: Removing unreachable block (ram,0x00018059a3c4)
// WARNING: Removing unreachable block (ram,0x00018059a4dd)
// WARNING: Removing unreachable block (ram,0x00018059a4e3)
// WARNING: Removing unreachable block (ram,0x00018059a4b2)
// WARNING: Removing unreachable block (ram,0x00018059a4f0)
// WARNING: Removing unreachable block (ram,0x00018059a3d5)
// WARNING: Removing unreachable block (ram,0x00018059a3ee)
// WARNING: Removing unreachable block (ram,0x00018059a4f5)
// WARNING: Removing unreachable block (ram,0x00018059a5f8)
// WARNING: Removing unreachable block (ram,0x00018059a5b3)
// WARNING: Removing unreachable block (ram,0x00018059a5e1)
// 函数: void NetworkSystem_9a420(uint64_t param_1,float param_2,uint64_t param_3,int64_t param_4)
void NetworkSystem_9a420(uint64_t param_1,float param_2,uint64_t param_3,int64_t param_4)
{
  uint64_t *puVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t unaff_RBX;
  uint64_t *unaff_RBP;
  float *pfVar7;
  float *unaff_RSI;
  int unaff_EDI;
  char in_R10B;
  uint64_t in_R11;
  int64_t unaff_R13;
  float *unaff_R14;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int8_t auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  uint unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  uint64_t *plocal_buffer_28;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float local_buffer_58;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  int32_t local_buffer_6c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  float fStack000000000000007c;
  do {
    _fStack0000000000000030 = CONCAT44(fStack0000000000000064,fStack0000000000000060);
    _fStack0000000000000038 = CONCAT44(local_buffer_6c,fStack0000000000000068);
    fStack000000000000005c = param_2;
    if (0.01 < in_XMM5_Da) {
      auVar12 = rsqrtss(ZEXT416((uint)local_buffer_58),ZEXT416((uint)local_buffer_58));
      fVar14 = auVar12._0_4_;
      fVar14 = fVar14 * 0.5 * (3.0 - local_buffer_58 * fVar14 * fVar14);
      unaff_XMM10_Da = (float)((uint)(fStack000000000000004c * fVar14) ^ unaff_XMM7_Da);
      unaff_XMM9_Da = (float)((uint)(fVar14 * fStack0000000000000044) ^ unaff_XMM7_Da);
      unaff_XMM11_Da = (float)((uint)(fStack0000000000000040 * fVar14) ^ unaff_XMM7_Da);
    }
    while( true ) {
      do {
        while( true ) {
          do {
            pfVar7 = unaff_RSI;
            while( true ) {
              unaff_EDI = unaff_EDI + 1;
              unaff_RBX = unaff_RBX + 1;
              unaff_RSI = pfVar7 + -4;
              if ((in_R10B != '\0') || (2 < unaff_RBX)) {
                if ((char)in_R11 != '\0') {
                  iVar2 = *(int *)(unaff_R13 + 0x40);
                  if (iVar2 < 2) {
                    if ((((unaff_XMM15_Da - fStack0000000000000034) * unaff_XMM10_Da +
                          (*(float *)(unaff_RBP + 0x23) - fStack0000000000000030) * unaff_XMM9_Da +
                          (*(float *)(param_4 + 8) - fStack0000000000000038) * unaff_XMM11_Da <
                          unaff_XMM8_Da) ||
                        ((unaff_R14[1] - fStack0000000000000034) * unaff_XMM10_Da +
                         (*unaff_R14 - fStack0000000000000030) * unaff_XMM9_Da +
                         (unaff_R14[2] - fStack0000000000000038) * unaff_XMM11_Da < unaff_XMM8_Da))
                       && (iVar2 < 1)) {
                      lVar6 = (int64_t)iVar2 * 0x40;
                      *(uint64_t *)((int64_t)unaff_RBP + -0xc) = 0;
                      *(uint64_t *)(lVar6 + unaff_R13) = 0;
                      ((uint64_t *)(lVar6 + unaff_R13))[1] = 0;
                      *(float *)((int64_t)unaff_RBP + 0xc) = -unaff_XMM9_Da;
                      *(float *)(unaff_RBP + 2) = -unaff_XMM10_Da;
                      *(float *)((int64_t)unaff_RBP + 0x14) = -unaff_XMM11_Da;
                      *(int32_t *)(unaff_RBP + 3) = 0x7f7fffff;
                      *(uint64_t *)((int64_t)unaff_RBP + -4) = _fStack0000000000000030;
                      *(uint64_t *)((int64_t)unaff_RBP + 4) = _fStack0000000000000038;
                      fVar14 = *(float *)((int64_t)unaff_RBP + -0xc);
                      fVar11 = *(float *)(unaff_RBP + -1);
                      fVar8 = *(float *)((int64_t)unaff_RBP + -4);
                      uVar3 = unaff_RBP[2];
                      uVar4 = unaff_RBP[3];
                      pfVar7 = (float *)(lVar6 + 0x10 + unaff_R13);
                      *pfVar7 = fStack000000000000005c;
                      pfVar7[1] = fVar14;
                      pfVar7[2] = fVar11;
                      pfVar7[3] = fVar8;
                      uVar5 = unaff_RBP[1];
                      puVar1 = (uint64_t *)(lVar6 + 0x20 + unaff_R13);
                      *puVar1 = *unaff_RBP;
                      puVar1[1] = uVar5;
                      puVar1 = (uint64_t *)(lVar6 + 0x30 + unaff_R13);
                      *puVar1 = uVar3;
                      puVar1[1] = uVar4;
                      *(int *)(unaff_R13 + 0x40) = *(int *)(unaff_R13 + 0x40) + 1;
                    }
                  }
                }
                return;
              }
              fStack000000000000007c = *unaff_RSI;
              fVar14 = pfVar7[-3];
              fVar11 = pfVar7[-2];
              fVar8 = pfVar7[-1];
              *(float *)(unaff_RBP + -6) = fStack000000000000007c;
              *(float *)((int64_t)unaff_RBP + -0x2c) = fVar14;
              *(float *)(unaff_RBP + -5) = fVar11;
              *(float *)((int64_t)unaff_RBP + -0x24) = fVar8;
              pfVar7 = (float *)(unaff_RBP[0x20] +
                                (int64_t)
                                (2 - (unaff_EDI +
                                     (unaff_EDI / 3 + (unaff_EDI >> 0x1f) +
                                     (int)(((int64_t)unaff_EDI / 3 + ((int64_t)unaff_EDI >> 0x3f)
                                           & 0xffffffffU) >> 0x1f)) * -3)) * 0x10);
              fVar8 = pfVar7[1];
              fVar9 = pfVar7[2];
              fVar10 = pfVar7[3];
              fStack0000000000000050 = *pfVar7 - fStack000000000000007c;
              *(float *)(unaff_RBP + -8) = *pfVar7;
              *(float *)((int64_t)unaff_RBP + -0x3c) = fVar8;
              *(float *)(unaff_RBP + -7) = fVar9;
              *(float *)((int64_t)unaff_RBP + -0x34) = fVar10;
              *(float *)(unaff_RBP + -0xe) = fVar8 - fVar14;
              *(float *)((int64_t)unaff_RBP + -0x6c) = fVar8;
              *(float *)(unaff_RBP + -0xd) = fVar8;
              *(float *)((int64_t)unaff_RBP + -100) = fVar8;
              *(float *)(unaff_RBP + -10) = fVar9 - fVar11;
              *(float *)((int64_t)unaff_RBP + -0x4c) = fVar9;
              *(float *)(unaff_RBP + -9) = fVar9;
              *(float *)((int64_t)unaff_RBP + -0x44) = fVar9;
              fStack0000000000000070 = *(float *)(unaff_RBP + 0x23) - fStack000000000000007c;
              fStack0000000000000074 = fStack0000000000000048 - fVar11;
              fStack000000000000007c = *unaff_R14 - fStack000000000000007c;
              fStack0000000000000078 = unaff_XMM6_Da - fVar14;
              fVar15 = unaff_XMM12_Da * *(float *)(unaff_RBP + -10) -
                       unaff_XMM13_Da * *(float *)(unaff_RBP + -0xe);
              fVar8 = unaff_XMM13_Da * fStack0000000000000050 -
                      unaff_XMM14_Da * *(float *)(unaff_RBP + -10);
              fVar9 = unaff_XMM14_Da * *(float *)(unaff_RBP + -0xe) -
                      unaff_XMM12_Da * fStack0000000000000050;
              fVar10 = fVar8 * fVar8 + fVar15 * fVar15 + fVar9 * fVar9;
              if (unaff_XMM8_Da < fVar10) break;
              in_R11 = 0;
              in_R10B = '\x01';
              pfVar7 = unaff_RSI;
            }
            fVar13 = 1.0 / SQRT(fVar10);
            fVar10 = fVar13 * fVar9 * fStack0000000000000074;
            fVar16 = fVar13 * fVar8 * (unaff_XMM15_Da - fVar14) +
                     fVar13 * fVar15 * fStack0000000000000070 + fVar10;
            fVar14 = fVar13 * fVar8 * fStack0000000000000078 +
                     fVar13 * fVar15 * fStack000000000000007c +
                     fVar13 * fVar9 * (unaff_R14[2] - fVar11);
          } while ((unaff_XMM8_Da < fVar16) && (unaff_XMM8_Da < fVar14));
          if ((*(float *)(unaff_RBP + -0x10) <= fVar16) || (*(float *)(unaff_RBP + -0x10) <= fVar14)
             ) break;
          in_R11 = 0;
          in_R10B = '\x01';
        }
        param_4 = unaff_RBP[0x21];
        plocal_buffer_28 = (uint64_t *)&local_buffer_00000060;
        UtilitiesSystem_457f0(param_4,fVar10,unaff_RBP + -6,unaff_RBP + -8,unaff_RBP + -0xc);
        fStack000000000000004c = *(float *)((int64_t)unaff_RBP + -0x5c) - fStack0000000000000064;
        fStack0000000000000044 = *(float *)(unaff_RBP + -0xc) - fStack0000000000000060;
        fStack0000000000000040 = *(float *)(unaff_RBP + -0xb) - fStack0000000000000068;
        local_buffer_58 =
             fStack000000000000004c * fStack000000000000004c +
             fStack0000000000000044 * fStack0000000000000044 +
             fStack0000000000000040 * fStack0000000000000040;
        in_XMM5_Da = SQRT(local_buffer_58);
        fVar11 = *(float *)(unaff_RBP + -0xe) * *(float *)(unaff_RBP + -0xe) +
                 fStack0000000000000050 * fStack0000000000000050 +
                 *(float *)(unaff_RBP + -10) * *(float *)(unaff_RBP + -10);
        auVar12 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
        fVar8 = auVar12._0_4_;
        fVar14 = *(float *)(unaff_RBP + -0xe);
        fVar11 = fVar8 * 0.5 * (3.0 - fVar11 * fVar8 * fVar8);
        *(float *)(unaff_RBP + -0xe) = fVar14 * fVar11;
        *(int32_t *)((int64_t)unaff_RBP + -0x6c) = *(int32_t *)((int64_t)unaff_RBP + -0x6c);
        *(int32_t *)(unaff_RBP + -0xd) = *(int32_t *)(unaff_RBP + -0xd);
        *(int32_t *)((int64_t)unaff_RBP + -100) = *(int32_t *)((int64_t)unaff_RBP + -100);
      } while (unaff_XMM8_Da <=
               (fVar14 * fVar11 * fStack0000000000000040 -
               fStack000000000000004c * fVar11 * *(float *)(unaff_RBP + -10)) * unaff_XMM14_Da +
               (fVar11 * *(float *)(unaff_RBP + -10) * fStack0000000000000044 -
               fVar11 * fStack0000000000000050 * fStack0000000000000040) * unaff_XMM12_Da +
               (fVar11 * fStack0000000000000050 * fStack000000000000004c -
               *(float *)(unaff_RBP + -0xe) * fStack0000000000000044) * unaff_XMM13_Da);
      in_R10B = '\x01';
      param_2 = *(float *)(param_4 + 0x20) - in_XMM5_Da;
      if (unaff_XMM8_Da <= param_2) break;
      in_R11 = 0;
    }
  } while( true );
}
// 函数: void NetworkSystem_9a4b2(void)
void NetworkSystem_9a4b2(void)
{
  int32_t *puVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t in_RAX;
  int64_t lVar9;
  uint64_t *unaff_RBP;
  int64_t in_R9;
  int64_t unaff_R13;
  float *unaff_R14;
  float fVar10;
  float fVar11;
  float unaff_XMM6_Da;
  float fVar12;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  uint64_t local_var_38;
  uint64_t local_buffer_58;
  fVar10 = unaff_R14[1] - unaff_XMM12_Da * unaff_XMM6_Da;
  fVar12 = *unaff_R14 - unaff_XMM14_Da * unaff_XMM6_Da;
  fVar11 = unaff_R14[2] - unaff_XMM13_Da * unaff_XMM6_Da;
  if ((((unaff_XMM15_Da - fVar10) * unaff_XMM10_Da +
        (*(float *)(unaff_RBP + 0x23) - fVar12) * unaff_XMM9_Da +
        (*(float *)(in_R9 + 8) - fVar11) * unaff_XMM11_Da < unaff_XMM8_Da) ||
      ((unaff_R14[1] - fVar10) * unaff_XMM10_Da + (*unaff_R14 - fVar12) * unaff_XMM9_Da +
       (unaff_R14[2] - fVar11) * unaff_XMM11_Da < unaff_XMM8_Da)) && ((int)in_RAX < 1)) {
    lVar9 = in_RAX * 0x40;
    *(uint64_t *)((int64_t)unaff_RBP + -0xc) = 0;
    *(uint64_t *)(lVar9 + unaff_R13) = 0;
    ((uint64_t *)(lVar9 + unaff_R13))[1] = 0;
    *(float *)((int64_t)unaff_RBP + 0xc) = -unaff_XMM9_Da;
    *(float *)(unaff_RBP + 2) = -unaff_XMM10_Da;
    *(float *)((int64_t)unaff_RBP + 0x14) = -unaff_XMM11_Da;
    *(int32_t *)(unaff_RBP + 3) = 0x7f7fffff;
    *(uint64_t *)((int64_t)unaff_RBP + -4) = CONCAT44(fVar10,fVar12);
    *(uint64_t *)((int64_t)unaff_RBP + 4) = CONCAT44(local_var_38._4_4_,fVar11);
    uVar3 = *(int32_t *)((int64_t)unaff_RBP + -0xc);
    uVar4 = *(int32_t *)(unaff_RBP + -1);
    uVar5 = *(int32_t *)((int64_t)unaff_RBP + -4);
    uVar6 = unaff_RBP[2];
    uVar7 = unaff_RBP[3];
    puVar1 = (int32_t *)(lVar9 + 0x10 + unaff_R13);
    *puVar1 = local_buffer_58._4_4_;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    uVar8 = unaff_RBP[1];
    puVar2 = (uint64_t *)(lVar9 + 0x20 + unaff_R13);
    *puVar2 = *unaff_RBP;
    puVar2[1] = uVar8;
    puVar2 = (uint64_t *)(lVar9 + 0x30 + unaff_R13);
    *puVar2 = uVar6;
    puVar2[1] = uVar7;
    *(int *)(unaff_R13 + 0x40) = *(int *)(unaff_R13 + 0x40) + 1;
  }
  return;
}