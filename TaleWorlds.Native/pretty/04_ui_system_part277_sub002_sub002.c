#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part277_sub002_sub002.c - 1 个函数

// 函数: void FUN_1808242d2(uint64_t param_1,uint64_t param_2,int param_3,int param_4)
void FUN_1808242d2(uint64_t param_1,uint64_t param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int8_t auVar3 [16];
  int8_t auVar4 [16];
  int in_EAX;
  int unaff_EBX;
  int unaff_EDI;
  int16_t *in_R10;
  uint *in_R11;
  int unaff_R12D;
  int unaff_R13D;
  int unaff_R14D;
  int unaff_R15D;
  int8_t auVar5 [32];
  int8_t auVar6 [32];
  int8_t auVar7 [32];
  int8_t auVar8 [32];
  int8_t auVar9 [32];
  int8_t auVar10 [32];
  int8_t auVar11 [32];
  int8_t in_ZMM0 [64];
  int8_t auVar13 [36];
  int8_t auVar12 [64];
  int8_t auVar14 [28];
  float unaff_XMM9_Da;
  float unaff_XMM9_Db;
  float unaff_XMM9_Dc;
  float unaff_XMM9_Dd;
  float in_YMM9_H;
  float in_register_00001454;
  float in_register_00001458;
  
  auVar13 = in_ZMM0._28_36_;
  if (param_3 - in_EAX != 0) {
    iVar1 = (param_3 - in_EAX) + -1;
    auVar14 = ZEXT828(0) << 0x40;
    auVar5 = ZEXT832(0) << 0x40;
    switch(iVar1) {
    case 6:
      uVar2 = in_R11[unaff_EDI];
      auVar5._4_4_ = uVar2;
      auVar5._0_4_ = uVar2;
      auVar5._8_4_ = uVar2;
      auVar5._12_4_ = uVar2;
      auVar5._16_4_ = uVar2;
      auVar5._20_4_ = uVar2;
      auVar5._24_4_ = uVar2;
      auVar5._28_4_ = uVar2;
      auVar5 = vblendps_avx(ZEXT1632(ZEXT816(0) << 0x40),auVar5,0x40);
    case 5:
      uVar2 = in_R11[unaff_R14D];
      auVar6._4_4_ = uVar2;
      auVar6._0_4_ = uVar2;
      auVar6._8_4_ = uVar2;
      auVar6._12_4_ = uVar2;
      auVar6._16_4_ = uVar2;
      auVar6._20_4_ = uVar2;
      auVar6._24_4_ = uVar2;
      auVar6._28_4_ = uVar2;
      auVar5 = vblendps_avx(auVar5,auVar6,0x20);
    case 4:
      uVar2 = in_R11[unaff_R15D];
      auVar7._4_4_ = uVar2;
      auVar7._0_4_ = uVar2;
      auVar7._8_4_ = uVar2;
      auVar7._12_4_ = uVar2;
      auVar7._16_4_ = uVar2;
      auVar7._20_4_ = uVar2;
      auVar7._24_4_ = uVar2;
      auVar7._28_4_ = uVar2;
      auVar5 = vblendps_avx(auVar5,auVar7,0x10);
    case 3:
      uVar2 = in_R11[unaff_R12D];
      auVar8._4_4_ = uVar2;
      auVar8._0_4_ = uVar2;
      auVar8._8_4_ = uVar2;
      auVar8._12_4_ = uVar2;
      auVar8._16_4_ = uVar2;
      auVar8._20_4_ = uVar2;
      auVar8._24_4_ = uVar2;
      auVar8._28_4_ = uVar2;
      auVar5 = vblendps_avx(auVar5,auVar8,8);
    case 2:
      uVar2 = in_R11[unaff_R13D];
      auVar9._4_4_ = uVar2;
      auVar9._0_4_ = uVar2;
      auVar9._8_4_ = uVar2;
      auVar9._12_4_ = uVar2;
      auVar9._16_4_ = uVar2;
      auVar9._20_4_ = uVar2;
      auVar9._24_4_ = uVar2;
      auVar9._28_4_ = uVar2;
      auVar5 = vblendps_avx(auVar5,auVar9,4);
    case 1:
      uVar2 = in_R11[unaff_EBX];
      auVar10._4_4_ = uVar2;
      auVar10._0_4_ = uVar2;
      auVar10._8_4_ = uVar2;
      auVar10._12_4_ = uVar2;
      auVar10._16_4_ = uVar2;
      auVar10._20_4_ = uVar2;
      auVar10._24_4_ = uVar2;
      auVar10._28_4_ = uVar2;
      auVar5 = vblendps_avx(auVar5,auVar10,2);
    case 0:
      uVar2 = *in_R11;
      auVar11._4_4_ = uVar2;
      auVar11._0_4_ = uVar2;
      auVar11._8_4_ = uVar2;
      auVar11._12_4_ = uVar2;
      auVar11._16_4_ = uVar2;
      auVar11._20_4_ = uVar2;
      auVar11._24_4_ = uVar2;
      auVar11._28_4_ = uVar2;
      auVar13 = ZEXT436(uVar2);
      auVar5 = vblendps_avx(auVar5,auVar11,1);
      auVar14 = auVar5._0_28_;
    }
    auVar12._0_4_ = auVar14._0_4_ * unaff_XMM9_Da;
    auVar12._4_4_ = auVar14._4_4_ * unaff_XMM9_Db;
    auVar12._8_4_ = auVar14._8_4_ * unaff_XMM9_Dc;
    auVar12._12_4_ = auVar14._12_4_ * unaff_XMM9_Dd;
    auVar12._16_4_ = auVar14._16_4_ * in_YMM9_H;
    auVar12._20_4_ = auVar14._20_4_ * in_register_00001454;
    auVar12._24_4_ = auVar14._24_4_ * in_register_00001458;
    auVar12._28_36_ = auVar13;
    auVar5 = vcvtps2dq_avx(auVar12._0_32_);
    auVar3 = vpackssdw_avx(auVar5._0_16_,auVar5._0_16_);
    auVar4 = vpackssdw_avx(auVar5._16_16_,auVar5._16_16_);
    switch(iVar1) {
    case 6:
      in_R10[param_4 * 6] = auVar4._4_2_;
    case 5:
      in_R10[param_4 * 5] = auVar4._2_2_;
    case 4:
      in_R10[param_4 * 4] = auVar4._0_2_;
    case 3:
      in_R10[param_4 * 3] = auVar3._6_2_;
    case 2:
      in_R10[param_4 * 2] = auVar3._4_2_;
    case 1:
      in_R10[param_4] = auVar3._2_2_;
    case 0:
      *in_R10 = auVar3._0_2_;
    }
  }
  return;
}



uint64_t FUN_180824470(int64_t param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int8_t auVar5 [32];
  int8_t auVar6 [32];
  int8_t auVar7 [32];
  int8_t auVar8 [32];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  int64_t lVar14;
  int64_t lVar15;
  uint *puVar16;
  uint64_t uVar17;
  float *pfVar18;
  int8_t (*pauVar19) [32];
  int64_t lVar20;
  uint *puVar21;
  int iVar22;
  int64_t lVar23;
  int iVar24;
  float *pfVar25;
  int8_t (*pauVar26) [32];
  float *pfVar27;
  int iVar28;
  float *pfVar29;
  int64_t lVar30;
  int iVar31;
  int iVar32;
  int8_t auVar33 [16];
  int8_t in_ZMM3 [64];
  int8_t auVar34 [64];
  
  iVar24 = 0;
  iVar31 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      iVar28 = *(int *)(param_1 + 0x10);
      lVar30 = *(int64_t *)(param_1 + 0x60);
      lVar15 = *(int64_t *)(param_1 + 0x70);
      pfVar25 = *(float **)(param_1 + 0x78);
      iVar22 = ((*(int *)(param_1 + 0x18) + iVar31 + *(int *)(param_1 + 0x54)) %
               *(int *)(param_1 + 0x20)) * (iVar28 + 1);
      iVar32 = (iVar28 + 1) * iVar31;
      pauVar19 = (int8_t (*) [32])(lVar30 + (int64_t)iVar22 * 8);
      pauVar26 = (int8_t (*) [32])(lVar15 + (int64_t)iVar32 * 8);
      iVar13 = iVar28 >> 2;
      if (iVar13 != 0) {
        do {
          auVar5 = *pauVar19;
          pauVar19 = pauVar19 + 1;
          auVar6 = *pauVar26;
          pauVar26 = pauVar26 + 1;
          auVar7 = vshufps_avx(auVar5,auVar5,0xf5);
          auVar8 = vshufps_avx(auVar6,auVar6,0xb1);
          auVar34._0_4_ = auVar7._0_4_ * auVar8._0_4_;
          auVar34._4_4_ = auVar7._4_4_ * auVar8._4_4_;
          auVar34._8_4_ = auVar7._8_4_ * auVar8._8_4_;
          auVar34._12_4_ = auVar7._12_4_ * auVar8._12_4_;
          auVar34._16_4_ = auVar7._16_4_ * auVar8._16_4_;
          auVar34._20_4_ = auVar7._20_4_ * auVar8._20_4_;
          auVar34._28_36_ = in_ZMM3._28_36_;
          auVar34._24_4_ = auVar7._24_4_ * auVar8._24_4_;
          in_ZMM3 = ZEXT3264(auVar34._0_32_);
          auVar5 = vshufps_avx(auVar5,auVar5,0xa0);
          auVar7._4_4_ = auVar5._4_4_ * auVar6._4_4_;
          auVar7._0_4_ = auVar5._0_4_ * auVar6._0_4_;
          auVar7._8_4_ = auVar5._8_4_ * auVar6._8_4_;
          auVar7._12_4_ = auVar5._12_4_ * auVar6._12_4_;
          auVar7._16_4_ = auVar5._16_4_ * auVar6._16_4_;
          auVar7._20_4_ = auVar5._20_4_ * auVar6._20_4_;
          auVar7._24_4_ = auVar5._24_4_ * auVar6._24_4_;
          auVar7._28_4_ = auVar6._28_4_;
          auVar5 = vaddsubps_avx(auVar7,auVar34._0_32_);
          *pfVar25 = auVar5._0_4_ + *pfVar25;
          pfVar25[1] = auVar5._4_4_ + pfVar25[1];
          pfVar25[2] = auVar5._8_4_ + pfVar25[2];
          pfVar25[3] = auVar5._12_4_ + pfVar25[3];
          pfVar25[4] = auVar5._16_4_ + pfVar25[4];
          pfVar25[5] = auVar5._20_4_ + pfVar25[5];
          pfVar25[6] = auVar5._24_4_ + pfVar25[6];
          pfVar25[7] = auVar5._28_4_ + pfVar25[7];
          iVar13 = iVar13 + -1;
          pfVar25 = pfVar25 + 8;
        } while (iVar13 != 0);
        iVar28 = *(int *)(param_1 + 0x10);
        lVar30 = *(int64_t *)(param_1 + 0x60);
        lVar15 = *(int64_t *)(param_1 + 0x70);
        pfVar25 = *(float **)(param_1 + 0x78);
      }
      iVar31 = iVar31 + 1;
      lVar23 = (int64_t)(iVar28 + iVar22);
      lVar20 = (int64_t)(iVar28 + iVar32);
      lVar14 = (int64_t)iVar28;
      fVar1 = *(float *)(lVar30 + 4 + lVar23 * 8);
      in_ZMM3 = ZEXT464((uint)fVar1);
      fVar2 = *(float *)(lVar15 + lVar20 * 8);
      fVar3 = *(float *)(lVar15 + 4 + lVar20 * 8);
      fVar4 = *(float *)(lVar30 + lVar23 * 8);
      pfVar25[lVar14 * 2] = (fVar4 * fVar2 - fVar1 * fVar3) + pfVar25[lVar14 * 2];
      pfVar25[lVar14 * 2 + 1] = fVar1 * fVar2 + fVar4 * fVar3 + pfVar25[lVar14 * 2 + 1];
    } while (iVar31 < *(int *)(param_1 + 0x14));
  }
  lVar30 = *(int64_t *)(param_1 + 0x78);
  lVar15 = (int64_t)*(int *)(param_1 + 0x24);
  iVar31 = *(int *)(param_1 + 0x10);
  puVar21 = (uint *)(lVar15 * 8 + -0xc + lVar30);
  *puVar21 = *(uint *)(lVar30 + 0x14) ^ 0x80000000;
  *(uint *)(lVar30 + -0x14 + lVar15 * 8) = *(uint *)(lVar30 + 0x1c) ^ 0x80000000;
  *(uint *)(lVar30 + -0x1c + lVar15 * 8) = *(uint *)(lVar30 + 0x24) ^ 0x80000000;
  iVar31 = (iVar31 >> 2) + -1;
  if (iVar31 != 0) {
    puVar16 = (uint *)(lVar30 + 0x34);
    do {
      puVar21[-6] = puVar16[-2] ^ 0x80000000;
      puVar21[-8] = *puVar16 ^ 0x80000000;
      puVar21[-10] = puVar16[2] ^ 0x80000000;
      puVar21[-0xc] = puVar16[4] ^ 0x80000000;
      iVar31 = iVar31 + -1;
      puVar16 = puVar16 + 8;
      puVar21 = puVar21 + -8;
    } while (iVar31 != 0);
  }
  uVar17 = FUN_180789a00(*(uint64_t *)(param_1 + 0x48),*(uint64_t *)(param_1 + 0x78),
                         *(uint64_t *)(param_1 + 0x80),0,1);
  if ((int)uVar17 == 0) {
    pfVar25 = *(float **)(param_1 + 0x80);
    pfVar29 = (float *)(*(int64_t *)(param_1 + 0x38) + (int64_t)*(int *)(param_1 + 0x5c) * 4);
    pfVar18 = *(float **)(param_1 + 0x40);
    pfVar27 = pfVar25 + *(int *)(param_1 + 0x10);
    auVar33 = ZEXT416((uint)(1.0 / (float)*(int *)(param_1 + 0x24)));
    auVar33 = vshufps_avx(auVar33,auVar33,0);
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        fVar1 = *pfVar18;
        fVar2 = pfVar18[1];
        fVar3 = pfVar18[2];
        fVar4 = pfVar18[3];
        fVar9 = *pfVar25;
        fVar10 = pfVar25[1];
        fVar11 = pfVar25[2];
        fVar12 = pfVar25[3];
        uVar17 = *(uint64_t *)(pfVar27 + 2);
        *(uint64_t *)pfVar18 = *(uint64_t *)pfVar27;
        *(uint64_t *)(pfVar18 + 2) = uVar17;
        *pfVar29 = (fVar1 + fVar9) * auVar33._0_4_;
        pfVar29[1] = (fVar2 + fVar10) * auVar33._4_4_;
        pfVar29[2] = (fVar3 + fVar11) * auVar33._8_4_;
        pfVar29[3] = (fVar4 + fVar12) * auVar33._12_4_;
        iVar24 = iVar24 + 4;
        pfVar25 = pfVar25 + 4;
        pfVar27 = pfVar27 + 4;
        pfVar29 = pfVar29 + 4;
        pfVar18 = pfVar18 + 4;
      } while (iVar24 < *(int *)(param_1 + 0x10));
    }
    uVar17 = 0;
  }
  return uVar17;
}



uint64_t FUN_18082447c(int64_t param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int8_t auVar5 [32];
  int8_t auVar6 [32];
  int8_t auVar7 [32];
  int8_t auVar8 [32];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  int64_t lVar14;
  int64_t lVar15;
  uint *puVar16;
  uint64_t uVar17;
  float *pfVar18;
  int8_t (*pauVar19) [32];
  int64_t lVar20;
  uint *puVar21;
  int iVar22;
  int64_t lVar23;
  int unaff_EDI;
  float *pfVar24;
  int8_t (*pauVar25) [32];
  float *pfVar26;
  int iVar27;
  float *pfVar28;
  int64_t lVar29;
  int iVar30;
  int iVar31;
  int8_t auVar32 [16];
  int8_t in_ZMM3 [64];
  int8_t auVar33 [64];
  
  iVar30 = unaff_EDI;
  if (unaff_EDI < *(int *)(param_1 + 0x14)) {
    do {
      iVar27 = *(int *)(param_1 + 0x10);
      lVar29 = *(int64_t *)(param_1 + 0x60);
      lVar15 = *(int64_t *)(param_1 + 0x70);
      pfVar24 = *(float **)(param_1 + 0x78);
      iVar22 = ((*(int *)(param_1 + 0x18) + iVar30 + *(int *)(param_1 + 0x54)) %
               *(int *)(param_1 + 0x20)) * (iVar27 + 1);
      iVar31 = (iVar27 + 1) * iVar30;
      pauVar19 = (int8_t (*) [32])(lVar29 + (int64_t)iVar22 * 8);
      pauVar25 = (int8_t (*) [32])(lVar15 + (int64_t)iVar31 * 8);
      iVar13 = iVar27 >> 2;
      if (iVar13 != 0) {
        do {
          auVar5 = *pauVar19;
          pauVar19 = pauVar19 + 1;
          auVar6 = *pauVar25;
          pauVar25 = pauVar25 + 1;
          auVar7 = vshufps_avx(auVar5,auVar5,0xf5);
          auVar8 = vshufps_avx(auVar6,auVar6,0xb1);
          auVar33._0_4_ = auVar7._0_4_ * auVar8._0_4_;
          auVar33._4_4_ = auVar7._4_4_ * auVar8._4_4_;
          auVar33._8_4_ = auVar7._8_4_ * auVar8._8_4_;
          auVar33._12_4_ = auVar7._12_4_ * auVar8._12_4_;
          auVar33._16_4_ = auVar7._16_4_ * auVar8._16_4_;
          auVar33._20_4_ = auVar7._20_4_ * auVar8._20_4_;
          auVar33._28_36_ = in_ZMM3._28_36_;
          auVar33._24_4_ = auVar7._24_4_ * auVar8._24_4_;
          in_ZMM3 = ZEXT3264(auVar33._0_32_);
          auVar5 = vshufps_avx(auVar5,auVar5,0xa0);
          auVar7._4_4_ = auVar5._4_4_ * auVar6._4_4_;
          auVar7._0_4_ = auVar5._0_4_ * auVar6._0_4_;
          auVar7._8_4_ = auVar5._8_4_ * auVar6._8_4_;
          auVar7._12_4_ = auVar5._12_4_ * auVar6._12_4_;
          auVar7._16_4_ = auVar5._16_4_ * auVar6._16_4_;
          auVar7._20_4_ = auVar5._20_4_ * auVar6._20_4_;
          auVar7._24_4_ = auVar5._24_4_ * auVar6._24_4_;
          auVar7._28_4_ = auVar6._28_4_;
          auVar5 = vaddsubps_avx(auVar7,auVar33._0_32_);
          *pfVar24 = auVar5._0_4_ + *pfVar24;
          pfVar24[1] = auVar5._4_4_ + pfVar24[1];
          pfVar24[2] = auVar5._8_4_ + pfVar24[2];
          pfVar24[3] = auVar5._12_4_ + pfVar24[3];
          pfVar24[4] = auVar5._16_4_ + pfVar24[4];
          pfVar24[5] = auVar5._20_4_ + pfVar24[5];
          pfVar24[6] = auVar5._24_4_ + pfVar24[6];
          pfVar24[7] = auVar5._28_4_ + pfVar24[7];
          iVar13 = iVar13 + -1;
          pfVar24 = pfVar24 + 8;
        } while (iVar13 != 0);
        iVar27 = *(int *)(param_1 + 0x10);
        lVar29 = *(int64_t *)(param_1 + 0x60);
        lVar15 = *(int64_t *)(param_1 + 0x70);
        pfVar24 = *(float **)(param_1 + 0x78);
      }
      iVar30 = iVar30 + 1;
      lVar23 = (int64_t)(iVar27 + iVar22);
      lVar20 = (int64_t)(iVar27 + iVar31);
      lVar14 = (int64_t)iVar27;
      fVar1 = *(float *)(lVar29 + 4 + lVar23 * 8);
      in_ZMM3 = ZEXT464((uint)fVar1);
      fVar2 = *(float *)(lVar15 + lVar20 * 8);
      fVar3 = *(float *)(lVar15 + 4 + lVar20 * 8);
      fVar4 = *(float *)(lVar29 + lVar23 * 8);
      pfVar24[lVar14 * 2] = (fVar4 * fVar2 - fVar1 * fVar3) + pfVar24[lVar14 * 2];
      pfVar24[lVar14 * 2 + 1] = fVar1 * fVar2 + fVar4 * fVar3 + pfVar24[lVar14 * 2 + 1];
    } while (iVar30 < *(int *)(param_1 + 0x14));
  }
  lVar29 = *(int64_t *)(param_1 + 0x78);
  lVar15 = (int64_t)*(int *)(param_1 + 0x24);
  iVar30 = *(int *)(param_1 + 0x10);
  puVar21 = (uint *)(lVar15 * 8 + -0xc + lVar29);
  *puVar21 = *(uint *)(lVar29 + 0x14) ^ 0x80000000;
  *(uint *)(lVar29 + -0x14 + lVar15 * 8) = *(uint *)(lVar29 + 0x1c) ^ 0x80000000;
  *(uint *)(lVar29 + -0x1c + lVar15 * 8) = *(uint *)(lVar29 + 0x24) ^ 0x80000000;
  iVar30 = (iVar30 >> 2) + -1;
  if (iVar30 != 0) {
    puVar16 = (uint *)(lVar29 + 0x34);
    do {
      puVar21[-6] = puVar16[-2] ^ 0x80000000;
      puVar21[-8] = *puVar16 ^ 0x80000000;
      puVar21[-10] = puVar16[2] ^ 0x80000000;
      puVar21[-0xc] = puVar16[4] ^ 0x80000000;
      iVar30 = iVar30 + -1;
      puVar16 = puVar16 + 8;
      puVar21 = puVar21 + -8;
    } while (iVar30 != 0);
  }
  uVar17 = FUN_180789a00(*(uint64_t *)(param_1 + 0x48),*(uint64_t *)(param_1 + 0x78),
                         *(uint64_t *)(param_1 + 0x80),0,1);
  if ((int)uVar17 == 0) {
    pfVar24 = *(float **)(param_1 + 0x80);
    pfVar28 = (float *)(*(int64_t *)(param_1 + 0x38) + (int64_t)*(int *)(param_1 + 0x5c) * 4);
    pfVar18 = *(float **)(param_1 + 0x40);
    pfVar26 = pfVar24 + *(int *)(param_1 + 0x10);
    auVar32 = ZEXT416((uint)(1.0 / (float)*(int *)(param_1 + 0x24)));
    auVar32 = vshufps_avx(auVar32,auVar32,0);
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        fVar1 = *pfVar18;
        fVar2 = pfVar18[1];
        fVar3 = pfVar18[2];
        fVar4 = pfVar18[3];
        fVar9 = *pfVar24;
        fVar10 = pfVar24[1];
        fVar11 = pfVar24[2];
        fVar12 = pfVar24[3];
        uVar17 = *(uint64_t *)(pfVar26 + 2);
        *(uint64_t *)pfVar18 = *(uint64_t *)pfVar26;
        *(uint64_t *)(pfVar18 + 2) = uVar17;
        *pfVar28 = (fVar1 + fVar9) * auVar32._0_4_;
        pfVar28[1] = (fVar2 + fVar10) * auVar32._4_4_;
        pfVar28[2] = (fVar3 + fVar11) * auVar32._8_4_;
        pfVar28[3] = (fVar4 + fVar12) * auVar32._12_4_;
        unaff_EDI = unaff_EDI + 4;
        pfVar24 = pfVar24 + 4;
        pfVar26 = pfVar26 + 4;
        pfVar28 = pfVar28 + 4;
        pfVar18 = pfVar18 + 4;
      } while (unaff_EDI < *(int *)(param_1 + 0x10));
    }
    uVar17 = 0;
  }
  return uVar17;
}



uint64_t FUN_180824490(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int8_t auVar5 [32];
  int8_t auVar6 [32];
  int8_t auVar7 [32];
  int8_t auVar8 [32];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  int64_t lVar14;
  int64_t lVar15;
  uint *puVar16;
  uint64_t uVar17;
  float *pfVar18;
  int8_t (*pauVar19) [32];
  int64_t lVar20;
  uint *puVar21;
  int iVar22;
  int iVar23;
  int64_t lVar24;
  int64_t unaff_RBX;
  int unaff_EDI;
  float *pfVar25;
  int8_t (*pauVar26) [32];
  float *pfVar27;
  float *pfVar28;
  int64_t lVar29;
  int unaff_R14D;
  int iVar30;
  int8_t auVar31 [16];
  int8_t in_ZMM3 [64];
  int8_t auVar32 [64];
  
  do {
    iVar23 = *(int *)(unaff_RBX + 0x10);
    lVar29 = *(int64_t *)(unaff_RBX + 0x60);
    lVar15 = *(int64_t *)(unaff_RBX + 0x70);
    pfVar25 = *(float **)(unaff_RBX + 0x78);
    iVar22 = ((*(int *)(unaff_RBX + 0x18) + unaff_R14D + *(int *)(unaff_RBX + 0x54)) %
             *(int *)(unaff_RBX + 0x20)) * (iVar23 + 1);
    iVar30 = (iVar23 + 1) * unaff_R14D;
    pauVar19 = (int8_t (*) [32])(lVar29 + (int64_t)iVar22 * 8);
    pauVar26 = (int8_t (*) [32])(lVar15 + (int64_t)iVar30 * 8);
    iVar13 = iVar23 >> 2;
    if (iVar13 != 0) {
      do {
        auVar5 = *pauVar19;
        pauVar19 = pauVar19 + 1;
        auVar6 = *pauVar26;
        pauVar26 = pauVar26 + 1;
        auVar7 = vshufps_avx(auVar5,auVar5,0xf5);
        auVar8 = vshufps_avx(auVar6,auVar6,0xb1);
        auVar32._0_4_ = auVar7._0_4_ * auVar8._0_4_;
        auVar32._4_4_ = auVar7._4_4_ * auVar8._4_4_;
        auVar32._8_4_ = auVar7._8_4_ * auVar8._8_4_;
        auVar32._12_4_ = auVar7._12_4_ * auVar8._12_4_;
        auVar32._16_4_ = auVar7._16_4_ * auVar8._16_4_;
        auVar32._20_4_ = auVar7._20_4_ * auVar8._20_4_;
        auVar32._28_36_ = in_ZMM3._28_36_;
        auVar32._24_4_ = auVar7._24_4_ * auVar8._24_4_;
        in_ZMM3 = ZEXT3264(auVar32._0_32_);
        auVar5 = vshufps_avx(auVar5,auVar5,0xa0);
        auVar7._4_4_ = auVar5._4_4_ * auVar6._4_4_;
        auVar7._0_4_ = auVar5._0_4_ * auVar6._0_4_;
        auVar7._8_4_ = auVar5._8_4_ * auVar6._8_4_;
        auVar7._12_4_ = auVar5._12_4_ * auVar6._12_4_;
        auVar7._16_4_ = auVar5._16_4_ * auVar6._16_4_;
        auVar7._20_4_ = auVar5._20_4_ * auVar6._20_4_;
        auVar7._24_4_ = auVar5._24_4_ * auVar6._24_4_;
        auVar7._28_4_ = auVar6._28_4_;
        auVar5 = vaddsubps_avx(auVar7,auVar32._0_32_);
        *pfVar25 = auVar5._0_4_ + *pfVar25;
        pfVar25[1] = auVar5._4_4_ + pfVar25[1];
        pfVar25[2] = auVar5._8_4_ + pfVar25[2];
        pfVar25[3] = auVar5._12_4_ + pfVar25[3];
        pfVar25[4] = auVar5._16_4_ + pfVar25[4];
        pfVar25[5] = auVar5._20_4_ + pfVar25[5];
        pfVar25[6] = auVar5._24_4_ + pfVar25[6];
        pfVar25[7] = auVar5._28_4_ + pfVar25[7];
        iVar13 = iVar13 + -1;
        pfVar25 = pfVar25 + 8;
      } while (iVar13 != 0);
      iVar23 = *(int *)(unaff_RBX + 0x10);
      lVar29 = *(int64_t *)(unaff_RBX + 0x60);
      lVar15 = *(int64_t *)(unaff_RBX + 0x70);
      pfVar25 = *(float **)(unaff_RBX + 0x78);
    }
    unaff_R14D = unaff_R14D + 1;
    lVar24 = (int64_t)(iVar23 + iVar22);
    lVar20 = (int64_t)(iVar23 + iVar30);
    lVar14 = (int64_t)iVar23;
    fVar1 = *(float *)(lVar29 + 4 + lVar24 * 8);
    in_ZMM3 = ZEXT464((uint)fVar1);
    fVar2 = *(float *)(lVar15 + lVar20 * 8);
    fVar3 = *(float *)(lVar15 + 4 + lVar20 * 8);
    fVar4 = *(float *)(lVar29 + lVar24 * 8);
    pfVar25[lVar14 * 2] = (fVar4 * fVar2 - fVar1 * fVar3) + pfVar25[lVar14 * 2];
    pfVar25[lVar14 * 2 + 1] = fVar1 * fVar2 + fVar4 * fVar3 + pfVar25[lVar14 * 2 + 1];
  } while (unaff_R14D < *(int *)(unaff_RBX + 0x14));
  lVar29 = *(int64_t *)(unaff_RBX + 0x78);
  lVar15 = (int64_t)*(int *)(unaff_RBX + 0x24);
  iVar23 = *(int *)(unaff_RBX + 0x10);
  puVar21 = (uint *)(lVar15 * 8 + -0xc + lVar29);
  *puVar21 = *(uint *)(lVar29 + 0x14) ^ 0x80000000;
  *(uint *)(lVar29 + -0x14 + lVar15 * 8) = *(uint *)(lVar29 + 0x1c) ^ 0x80000000;
  *(uint *)(lVar29 + -0x1c + lVar15 * 8) = *(uint *)(lVar29 + 0x24) ^ 0x80000000;
  iVar23 = (iVar23 >> 2) + -1;
  if (iVar23 != 0) {
    puVar16 = (uint *)(lVar29 + 0x34);
    do {
      puVar21[-6] = puVar16[-2] ^ 0x80000000;
      puVar21[-8] = *puVar16 ^ 0x80000000;
      puVar21[-10] = puVar16[2] ^ 0x80000000;
      puVar21[-0xc] = puVar16[4] ^ 0x80000000;
      iVar23 = iVar23 + -1;
      puVar16 = puVar16 + 8;
      puVar21 = puVar21 + -8;
    } while (iVar23 != 0);
  }
  uVar17 = FUN_180789a00(*(uint64_t *)(unaff_RBX + 0x48),*(uint64_t *)(unaff_RBX + 0x78),
                         *(uint64_t *)(unaff_RBX + 0x80),0,1);
  if ((int)uVar17 == 0) {
    pfVar25 = *(float **)(unaff_RBX + 0x80);
    pfVar28 = (float *)(*(int64_t *)(unaff_RBX + 0x38) + (int64_t)*(int *)(unaff_RBX + 0x5c) * 4);
    pfVar18 = *(float **)(unaff_RBX + 0x40);
    pfVar27 = pfVar25 + *(int *)(unaff_RBX + 0x10);
    auVar31 = ZEXT416((uint)(1.0 / (float)*(int *)(unaff_RBX + 0x24)));
    auVar31 = vshufps_avx(auVar31,auVar31,0);
    if (0 < *(int *)(unaff_RBX + 0x10)) {
      do {
        fVar1 = *pfVar18;
        fVar2 = pfVar18[1];
        fVar3 = pfVar18[2];
        fVar4 = pfVar18[3];
        fVar9 = *pfVar25;
        fVar10 = pfVar25[1];
        fVar11 = pfVar25[2];
        fVar12 = pfVar25[3];
        uVar17 = *(uint64_t *)(pfVar27 + 2);
        *(uint64_t *)pfVar18 = *(uint64_t *)pfVar27;
        *(uint64_t *)(pfVar18 + 2) = uVar17;
        *pfVar28 = (fVar1 + fVar9) * auVar31._0_4_;
        pfVar28[1] = (fVar2 + fVar10) * auVar31._4_4_;
        pfVar28[2] = (fVar3 + fVar11) * auVar31._8_4_;
        pfVar28[3] = (fVar4 + fVar12) * auVar31._12_4_;
        unaff_EDI = unaff_EDI + 4;
        pfVar25 = pfVar25 + 4;
        pfVar27 = pfVar27 + 4;
        pfVar28 = pfVar28 + 4;
        pfVar18 = pfVar18 + 4;
      } while (unaff_EDI < *(int *)(unaff_RBX + 0x10));
    }
    uVar17 = 0;
  }
  return uVar17;
}



uint64_t FUN_1808245aa(void)

{
  int64_t lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int64_t lVar10;
  uint *puVar11;
  uint64_t uVar12;
  float *pfVar13;
  uint *puVar14;
  int iVar15;
  int64_t unaff_RBX;
  int unaff_EDI;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  int8_t auVar19 [16];
  
  lVar1 = *(int64_t *)(unaff_RBX + 0x78);
  lVar10 = (int64_t)*(int *)(unaff_RBX + 0x24);
  iVar15 = *(int *)(unaff_RBX + 0x10);
  puVar14 = (uint *)(lVar10 * 8 + -0xc + lVar1);
  *puVar14 = *(uint *)(lVar1 + 0x14) ^ 0x80000000;
  *(uint *)(lVar1 + -0x14 + lVar10 * 8) = *(uint *)(lVar1 + 0x1c) ^ 0x80000000;
  *(uint *)(lVar1 + -0x1c + lVar10 * 8) = *(uint *)(lVar1 + 0x24) ^ 0x80000000;
  iVar15 = (iVar15 >> 2) + -1;
  if (iVar15 != 0) {
    puVar11 = (uint *)(lVar1 + 0x34);
    do {
      puVar14[-6] = puVar11[-2] ^ 0x80000000;
      puVar14[-8] = *puVar11 ^ 0x80000000;
      puVar14[-10] = puVar11[2] ^ 0x80000000;
      puVar14[-0xc] = puVar11[4] ^ 0x80000000;
      iVar15 = iVar15 + -1;
      puVar11 = puVar11 + 8;
      puVar14 = puVar14 + -8;
    } while (iVar15 != 0);
  }
  uVar12 = FUN_180789a00(*(uint64_t *)(unaff_RBX + 0x48),*(uint64_t *)(unaff_RBX + 0x78),
                         *(uint64_t *)(unaff_RBX + 0x80),0,1);
  if ((int)uVar12 == 0) {
    pfVar16 = *(float **)(unaff_RBX + 0x80);
    pfVar18 = (float *)(*(int64_t *)(unaff_RBX + 0x38) + (int64_t)*(int *)(unaff_RBX + 0x5c) * 4);
    pfVar13 = *(float **)(unaff_RBX + 0x40);
    pfVar17 = pfVar16 + *(int *)(unaff_RBX + 0x10);
    auVar19 = ZEXT416((uint)(1.0 / (float)*(int *)(unaff_RBX + 0x24)));
    auVar19 = vshufps_avx(auVar19,auVar19,0);
    if (0 < *(int *)(unaff_RBX + 0x10)) {
      do {
        fVar2 = *pfVar13;
        fVar3 = pfVar13[1];
        fVar4 = pfVar13[2];
        fVar5 = pfVar13[3];
        fVar6 = *pfVar16;
        fVar7 = pfVar16[1];
        fVar8 = pfVar16[2];
        fVar9 = pfVar16[3];
        uVar12 = *(uint64_t *)(pfVar17 + 2);
        *(uint64_t *)pfVar13 = *(uint64_t *)pfVar17;
        *(uint64_t *)(pfVar13 + 2) = uVar12;
        *pfVar18 = (fVar2 + fVar6) * auVar19._0_4_;
        pfVar18[1] = (fVar3 + fVar7) * auVar19._4_4_;
        pfVar18[2] = (fVar4 + fVar8) * auVar19._8_4_;
        pfVar18[3] = (fVar5 + fVar9) * auVar19._12_4_;
        unaff_EDI = unaff_EDI + 4;
        pfVar16 = pfVar16 + 4;
        pfVar17 = pfVar17 + 4;
        pfVar18 = pfVar18 + 4;
        pfVar13 = pfVar13 + 4;
      } while (unaff_EDI < *(int *)(unaff_RBX + 0x10));
    }
    uVar12 = 0;
  }
  return uVar12;
}



uint64_t FUN_180824605(uint *param_1,int param_2,int64_t param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint *puVar9;
  uint64_t uVar10;
  float *pfVar11;
  int64_t unaff_RBX;
  int unaff_EDI;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  int8_t auVar15 [16];
  
  puVar9 = (uint *)(param_3 + 0x34);
  do {
    param_1[-6] = puVar9[-2] ^ param_4;
    param_1[-8] = *puVar9 ^ param_4;
    param_1[-10] = puVar9[2] ^ param_4;
    param_1[-0xc] = puVar9[4] ^ param_4;
    param_2 = param_2 + -1;
    puVar9 = puVar9 + 8;
    param_1 = param_1 + -8;
  } while (param_2 != 0);
  uVar10 = FUN_180789a00(*(uint64_t *)(unaff_RBX + 0x48),*(uint64_t *)(unaff_RBX + 0x78),
                         *(uint64_t *)(unaff_RBX + 0x80),0,1);
  if ((int)uVar10 == 0) {
    pfVar12 = *(float **)(unaff_RBX + 0x80);
    pfVar14 = (float *)(*(int64_t *)(unaff_RBX + 0x38) + (int64_t)*(int *)(unaff_RBX + 0x5c) * 4);
    pfVar11 = *(float **)(unaff_RBX + 0x40);
    pfVar13 = pfVar12 + *(int *)(unaff_RBX + 0x10);
    auVar15 = ZEXT416((uint)(1.0 / (float)*(int *)(unaff_RBX + 0x24)));
    auVar15 = vshufps_avx(auVar15,auVar15,0);
    if (0 < *(int *)(unaff_RBX + 0x10)) {
      do {
        fVar1 = *pfVar11;
        fVar2 = pfVar11[1];
        fVar3 = pfVar11[2];
        fVar4 = pfVar11[3];
        fVar5 = *pfVar12;
        fVar6 = pfVar12[1];
        fVar7 = pfVar12[2];
        fVar8 = pfVar12[3];
        uVar10 = *(uint64_t *)(pfVar13 + 2);
        *(uint64_t *)pfVar11 = *(uint64_t *)pfVar13;
        *(uint64_t *)(pfVar11 + 2) = uVar10;
        *pfVar14 = (fVar1 + fVar5) * auVar15._0_4_;
        pfVar14[1] = (fVar2 + fVar6) * auVar15._4_4_;
        pfVar14[2] = (fVar3 + fVar7) * auVar15._8_4_;
        pfVar14[3] = (fVar4 + fVar8) * auVar15._12_4_;
        unaff_EDI = unaff_EDI + 4;
        pfVar12 = pfVar12 + 4;
        pfVar13 = pfVar13 + 4;
        pfVar14 = pfVar14 + 4;
        pfVar11 = pfVar11 + 4;
      } while (unaff_EDI < *(int *)(unaff_RBX + 0x10));
    }
    uVar10 = 0;
  }
  return uVar10;
}



uint64_t FUN_180824700(int64_t param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
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
  float fVar18;
  float fVar19;
  int iVar20;
  int64_t lVar21;
  int64_t lVar22;
  uint *puVar23;
  uint64_t uVar24;
  float *pfVar25;
  int iVar26;
  int64_t lVar27;
  uint *puVar28;
  int iVar29;
  int64_t lVar30;
  float *pfVar31;
  int iVar32;
  int iVar33;
  float *pfVar34;
  int iVar35;
  float *pfVar36;
  int64_t lVar37;
  float fVar38;
  
  iVar32 = 0;
  iVar33 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      iVar35 = *(int *)(param_1 + 0x10);
      lVar37 = *(int64_t *)(param_1 + 0x60);
      lVar22 = *(int64_t *)(param_1 + 0x70);
      pfVar34 = *(float **)(param_1 + 0x78);
      iVar29 = ((*(int *)(param_1 + 0x18) + iVar33 + *(int *)(param_1 + 0x54)) %
               *(int *)(param_1 + 0x20)) * (iVar35 + 1);
      iVar26 = (iVar35 + 1) * iVar33;
      pfVar31 = (float *)(lVar37 + (int64_t)iVar29 * 8);
      pfVar36 = (float *)(lVar22 + (int64_t)iVar26 * 8);
      iVar20 = iVar35 >> 2;
      if (iVar20 != 0) {
        pfVar25 = pfVar34 + 4;
        do {
          fVar38 = *pfVar31;
          fVar1 = pfVar31[1];
          fVar2 = pfVar31[2];
          fVar3 = pfVar31[3];
          fVar4 = pfVar31[4];
          fVar5 = pfVar31[5];
          fVar6 = pfVar31[6];
          fVar7 = pfVar31[7];
          pfVar31 = pfVar31 + 8;
          fVar8 = *pfVar36;
          fVar9 = pfVar36[1];
          fVar10 = pfVar36[2];
          fVar11 = pfVar36[3];
          fVar12 = pfVar36[4];
          fVar13 = pfVar36[5];
          fVar14 = pfVar36[6];
          fVar15 = pfVar36[7];
          pfVar36 = pfVar36 + 8;
          fVar16 = *pfVar25;
          fVar17 = pfVar25[1];
          fVar18 = pfVar25[2];
          fVar19 = pfVar25[3];
          *pfVar34 = *pfVar34 + (fVar38 * fVar8 - fVar9 * fVar1);
          pfVar34[1] = pfVar34[1] + fVar38 * fVar9 + fVar8 * fVar1;
          pfVar34[2] = pfVar34[2] + (fVar2 * fVar10 - fVar11 * fVar3);
          pfVar34[3] = pfVar34[3] + fVar2 * fVar11 + fVar10 * fVar3;
          pfVar34 = pfVar34 + 8;
          *pfVar25 = fVar16 + (fVar4 * fVar12 - fVar13 * fVar5);
          pfVar25[1] = fVar17 + fVar4 * fVar13 + fVar12 * fVar5;
          pfVar25[2] = fVar18 + (fVar6 * fVar14 - fVar15 * fVar7);
          pfVar25[3] = fVar19 + fVar6 * fVar15 + fVar14 * fVar7;
          pfVar25 = pfVar25 + 8;
          iVar20 = iVar20 + -1;
        } while (iVar20 != 0);
        iVar35 = *(int *)(param_1 + 0x10);
        lVar37 = *(int64_t *)(param_1 + 0x60);
        lVar22 = *(int64_t *)(param_1 + 0x70);
        pfVar34 = *(float **)(param_1 + 0x78);
      }
      iVar33 = iVar33 + 1;
      lVar30 = (int64_t)(iVar35 + iVar29);
      lVar27 = (int64_t)(iVar35 + iVar26);
      lVar21 = (int64_t)iVar35;
      fVar38 = *(float *)(lVar37 + 4 + lVar30 * 8);
      fVar1 = *(float *)(lVar37 + lVar30 * 8);
      fVar2 = *(float *)(lVar22 + lVar27 * 8);
      fVar3 = *(float *)(lVar22 + 4 + lVar27 * 8);
      fVar4 = pfVar34[lVar21 * 2 + 1];
      pfVar34[lVar21 * 2] = (fVar1 * fVar2 - fVar38 * fVar3) + pfVar34[lVar21 * 2];
      pfVar34[lVar21 * 2 + 1] = fVar1 * fVar3 + fVar38 * fVar2 + fVar4;
    } while (iVar33 < *(int *)(param_1 + 0x14));
  }
  lVar37 = *(int64_t *)(param_1 + 0x78);
  lVar22 = (int64_t)*(int *)(param_1 + 0x24);
  iVar33 = *(int *)(param_1 + 0x10);
  puVar28 = (uint *)(lVar22 * 8 + -0xc + lVar37);
  *puVar28 = *(uint *)(lVar37 + 0x14) ^ 0x80000000;
  *(uint *)(lVar37 + -0x14 + lVar22 * 8) = *(uint *)(lVar37 + 0x1c) ^ 0x80000000;
  *(uint *)(lVar37 + -0x1c + lVar22 * 8) = *(uint *)(lVar37 + 0x24) ^ 0x80000000;
  iVar33 = (iVar33 >> 2) + -1;
  if (iVar33 != 0) {
    puVar23 = (uint *)(lVar37 + 0x34);
    do {
      puVar28[-6] = puVar23[-2] ^ 0x80000000;
      puVar28[-8] = *puVar23 ^ 0x80000000;
      puVar28[-10] = puVar23[2] ^ 0x80000000;
      puVar28[-0xc] = puVar23[4] ^ 0x80000000;
      iVar33 = iVar33 + -1;
      puVar23 = puVar23 + 8;
      puVar28 = puVar28 + -8;
    } while (iVar33 != 0);
  }
  uVar24 = FUN_180789a00(*(uint64_t *)(param_1 + 0x48),*(uint64_t *)(param_1 + 0x78),
                         *(uint64_t *)(param_1 + 0x80),0,1);
  if ((int)uVar24 == 0) {
    pfVar34 = *(float **)(param_1 + 0x80);
    pfVar31 = (float *)(*(int64_t *)(param_1 + 0x38) + (int64_t)*(int *)(param_1 + 0x5c) * 4);
    pfVar25 = *(float **)(param_1 + 0x40);
    pfVar36 = pfVar34 + *(int *)(param_1 + 0x10);
    fVar38 = 1.0 / (float)*(int *)(param_1 + 0x24);
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        fVar1 = *pfVar25;
        fVar2 = pfVar25[1];
        fVar3 = pfVar25[2];
        fVar4 = pfVar25[3];
        iVar32 = iVar32 + 4;
        fVar5 = *pfVar34;
        fVar6 = pfVar34[1];
        fVar7 = pfVar34[2];
        fVar8 = pfVar34[3];
        uVar24 = *(uint64_t *)(pfVar36 + 2);
        pfVar34 = pfVar34 + 4;
        *(uint64_t *)pfVar25 = *(uint64_t *)pfVar36;
        *(uint64_t *)(pfVar25 + 2) = uVar24;
        pfVar36 = pfVar36 + 4;
        pfVar25 = pfVar25 + 4;
        *pfVar31 = (fVar1 + fVar5) * fVar38;
        pfVar31[1] = (fVar2 + fVar6) * fVar38;
        pfVar31[2] = (fVar3 + fVar7) * fVar38;
        pfVar31[3] = (fVar4 + fVar8) * fVar38;
        pfVar31 = pfVar31 + 4;
      } while (iVar32 < *(int *)(param_1 + 0x10));
    }
    uVar24 = 0;
  }
  return uVar24;
}



uint64_t FUN_18082470c(int64_t param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
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
  float fVar18;
  float fVar19;
  int iVar20;
  int64_t lVar21;
  int64_t lVar22;
  uint *puVar23;
  uint64_t uVar24;
  float *pfVar25;
  int iVar26;
  int64_t lVar27;
  uint *puVar28;
  int iVar29;
  int64_t lVar30;
  float *pfVar31;
  int unaff_ESI;
  int iVar32;
  float *pfVar33;
  int iVar34;
  float *pfVar35;
  int64_t lVar36;
  float fVar37;
  
  iVar32 = unaff_ESI;
  if (unaff_ESI < *(int *)(param_1 + 0x14)) {
    do {
      iVar34 = *(int *)(param_1 + 0x10);
      lVar36 = *(int64_t *)(param_1 + 0x60);
      lVar22 = *(int64_t *)(param_1 + 0x70);
      pfVar33 = *(float **)(param_1 + 0x78);
      iVar29 = ((*(int *)(param_1 + 0x18) + iVar32 + *(int *)(param_1 + 0x54)) %
               *(int *)(param_1 + 0x20)) * (iVar34 + 1);
      iVar26 = (iVar34 + 1) * iVar32;
      pfVar31 = (float *)(lVar36 + (int64_t)iVar29 * 8);
      pfVar35 = (float *)(lVar22 + (int64_t)iVar26 * 8);
      iVar20 = iVar34 >> 2;
      if (iVar20 != 0) {
        pfVar25 = pfVar33 + 4;
        do {
          fVar37 = *pfVar31;
          fVar1 = pfVar31[1];
          fVar2 = pfVar31[2];
          fVar3 = pfVar31[3];
          fVar4 = pfVar31[4];
          fVar5 = pfVar31[5];
          fVar6 = pfVar31[6];
          fVar7 = pfVar31[7];
          pfVar31 = pfVar31 + 8;
          fVar8 = *pfVar35;
          fVar9 = pfVar35[1];
          fVar10 = pfVar35[2];
          fVar11 = pfVar35[3];
          fVar12 = pfVar35[4];
          fVar13 = pfVar35[5];
          fVar14 = pfVar35[6];
          fVar15 = pfVar35[7];
          pfVar35 = pfVar35 + 8;
          fVar16 = *pfVar25;
          fVar17 = pfVar25[1];
          fVar18 = pfVar25[2];
          fVar19 = pfVar25[3];
          *pfVar33 = *pfVar33 + (fVar37 * fVar8 - fVar9 * fVar1);
          pfVar33[1] = pfVar33[1] + fVar37 * fVar9 + fVar8 * fVar1;
          pfVar33[2] = pfVar33[2] + (fVar2 * fVar10 - fVar11 * fVar3);
          pfVar33[3] = pfVar33[3] + fVar2 * fVar11 + fVar10 * fVar3;
          pfVar33 = pfVar33 + 8;
          *pfVar25 = fVar16 + (fVar4 * fVar12 - fVar13 * fVar5);
          pfVar25[1] = fVar17 + fVar4 * fVar13 + fVar12 * fVar5;
          pfVar25[2] = fVar18 + (fVar6 * fVar14 - fVar15 * fVar7);
          pfVar25[3] = fVar19 + fVar6 * fVar15 + fVar14 * fVar7;
          pfVar25 = pfVar25 + 8;
          iVar20 = iVar20 + -1;
        } while (iVar20 != 0);
        iVar34 = *(int *)(param_1 + 0x10);
        lVar36 = *(int64_t *)(param_1 + 0x60);
        lVar22 = *(int64_t *)(param_1 + 0x70);
        pfVar33 = *(float **)(param_1 + 0x78);
      }
      iVar32 = iVar32 + 1;
      lVar30 = (int64_t)(iVar34 + iVar29);
      lVar27 = (int64_t)(iVar34 + iVar26);
      lVar21 = (int64_t)iVar34;
      fVar37 = *(float *)(lVar36 + 4 + lVar30 * 8);
      fVar1 = *(float *)(lVar36 + lVar30 * 8);
      fVar2 = *(float *)(lVar22 + lVar27 * 8);
      fVar3 = *(float *)(lVar22 + 4 + lVar27 * 8);
      fVar4 = pfVar33[lVar21 * 2 + 1];
      pfVar33[lVar21 * 2] = (fVar1 * fVar2 - fVar37 * fVar3) + pfVar33[lVar21 * 2];
      pfVar33[lVar21 * 2 + 1] = fVar1 * fVar3 + fVar37 * fVar2 + fVar4;
    } while (iVar32 < *(int *)(param_1 + 0x14));
  }
  lVar36 = *(int64_t *)(param_1 + 0x78);
  lVar22 = (int64_t)*(int *)(param_1 + 0x24);
  iVar32 = *(int *)(param_1 + 0x10);
  puVar28 = (uint *)(lVar22 * 8 + -0xc + lVar36);
  *puVar28 = *(uint *)(lVar36 + 0x14) ^ 0x80000000;
  *(uint *)(lVar36 + -0x14 + lVar22 * 8) = *(uint *)(lVar36 + 0x1c) ^ 0x80000000;
  *(uint *)(lVar36 + -0x1c + lVar22 * 8) = *(uint *)(lVar36 + 0x24) ^ 0x80000000;
  iVar32 = (iVar32 >> 2) + -1;
  if (iVar32 != 0) {
    puVar23 = (uint *)(lVar36 + 0x34);
    do {
      puVar28[-6] = puVar23[-2] ^ 0x80000000;
      puVar28[-8] = *puVar23 ^ 0x80000000;
      puVar28[-10] = puVar23[2] ^ 0x80000000;
      puVar28[-0xc] = puVar23[4] ^ 0x80000000;
      iVar32 = iVar32 + -1;
      puVar23 = puVar23 + 8;
      puVar28 = puVar28 + -8;
    } while (iVar32 != 0);
  }
  uVar24 = FUN_180789a00(*(uint64_t *)(param_1 + 0x48),*(uint64_t *)(param_1 + 0x78),
                         *(uint64_t *)(param_1 + 0x80),0,1);
  if ((int)uVar24 == 0) {
    pfVar33 = *(float **)(param_1 + 0x80);
    pfVar31 = (float *)(*(int64_t *)(param_1 + 0x38) + (int64_t)*(int *)(param_1 + 0x5c) * 4);
    pfVar25 = *(float **)(param_1 + 0x40);
    pfVar35 = pfVar33 + *(int *)(param_1 + 0x10);
    fVar37 = 1.0 / (float)*(int *)(param_1 + 0x24);
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        fVar1 = *pfVar25;
        fVar2 = pfVar25[1];
        fVar3 = pfVar25[2];
        fVar4 = pfVar25[3];
        unaff_ESI = unaff_ESI + 4;
        fVar5 = *pfVar33;
        fVar6 = pfVar33[1];
        fVar7 = pfVar33[2];
        fVar8 = pfVar33[3];
        uVar24 = *(uint64_t *)(pfVar35 + 2);
        pfVar33 = pfVar33 + 4;
        *(uint64_t *)pfVar25 = *(uint64_t *)pfVar35;
        *(uint64_t *)(pfVar25 + 2) = uVar24;
        pfVar35 = pfVar35 + 4;
        pfVar25 = pfVar25 + 4;
        *pfVar31 = (fVar1 + fVar5) * fVar37;
        pfVar31[1] = (fVar2 + fVar6) * fVar37;
        pfVar31[2] = (fVar3 + fVar7) * fVar37;
        pfVar31[3] = (fVar4 + fVar8) * fVar37;
        pfVar31 = pfVar31 + 4;
      } while (unaff_ESI < *(int *)(param_1 + 0x10));
    }
    uVar24 = 0;
  }
  return uVar24;
}



uint64_t FUN_18082471f(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
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
  float fVar18;
  float fVar19;
  int iVar20;
  int64_t lVar21;
  int64_t lVar22;
  uint *puVar23;
  uint64_t uVar24;
  float *pfVar25;
  int iVar26;
  int64_t lVar27;
  uint *puVar28;
  int iVar29;
  int iVar30;
  int64_t lVar31;
  int64_t unaff_RBX;
  float *pfVar32;
  int unaff_ESI;
  int unaff_EDI;
  float *pfVar33;
  float *pfVar34;
  int64_t lVar35;
  float fVar36;
  
  do {
    iVar30 = *(int *)(unaff_RBX + 0x10);
    lVar35 = *(int64_t *)(unaff_RBX + 0x60);
    lVar22 = *(int64_t *)(unaff_RBX + 0x70);
    pfVar33 = *(float **)(unaff_RBX + 0x78);
    iVar29 = ((*(int *)(unaff_RBX + 0x18) + unaff_EDI + *(int *)(unaff_RBX + 0x54)) %
             *(int *)(unaff_RBX + 0x20)) * (iVar30 + 1);
    iVar26 = (iVar30 + 1) * unaff_EDI;
    pfVar32 = (float *)(lVar35 + (int64_t)iVar29 * 8);
    pfVar34 = (float *)(lVar22 + (int64_t)iVar26 * 8);
    iVar20 = iVar30 >> 2;
    if (iVar20 != 0) {
      pfVar25 = pfVar33 + 4;
      do {
        fVar36 = *pfVar32;
        fVar1 = pfVar32[1];
        fVar2 = pfVar32[2];
        fVar3 = pfVar32[3];
        fVar4 = pfVar32[4];
        fVar5 = pfVar32[5];
        fVar6 = pfVar32[6];
        fVar7 = pfVar32[7];
        pfVar32 = pfVar32 + 8;
        fVar8 = *pfVar34;
        fVar9 = pfVar34[1];
        fVar10 = pfVar34[2];
        fVar11 = pfVar34[3];
        fVar12 = pfVar34[4];
        fVar13 = pfVar34[5];
        fVar14 = pfVar34[6];
        fVar15 = pfVar34[7];
        pfVar34 = pfVar34 + 8;
        fVar16 = *pfVar25;
        fVar17 = pfVar25[1];
        fVar18 = pfVar25[2];
        fVar19 = pfVar25[3];
        *pfVar33 = *pfVar33 + (fVar36 * fVar8 - fVar9 * fVar1);
        pfVar33[1] = pfVar33[1] + fVar36 * fVar9 + fVar8 * fVar1;
        pfVar33[2] = pfVar33[2] + (fVar2 * fVar10 - fVar11 * fVar3);
        pfVar33[3] = pfVar33[3] + fVar2 * fVar11 + fVar10 * fVar3;
        pfVar33 = pfVar33 + 8;
        *pfVar25 = fVar16 + (fVar4 * fVar12 - fVar13 * fVar5);
        pfVar25[1] = fVar17 + fVar4 * fVar13 + fVar12 * fVar5;
        pfVar25[2] = fVar18 + (fVar6 * fVar14 - fVar15 * fVar7);
        pfVar25[3] = fVar19 + fVar6 * fVar15 + fVar14 * fVar7;
        pfVar25 = pfVar25 + 8;
        iVar20 = iVar20 + -1;
      } while (iVar20 != 0);
      iVar30 = *(int *)(unaff_RBX + 0x10);
      lVar35 = *(int64_t *)(unaff_RBX + 0x60);
      lVar22 = *(int64_t *)(unaff_RBX + 0x70);
      pfVar33 = *(float **)(unaff_RBX + 0x78);
    }
    unaff_EDI = unaff_EDI + 1;
    lVar31 = (int64_t)(iVar30 + iVar29);
    lVar27 = (int64_t)(iVar30 + iVar26);
    lVar21 = (int64_t)iVar30;
    fVar36 = *(float *)(lVar35 + 4 + lVar31 * 8);
    fVar1 = *(float *)(lVar35 + lVar31 * 8);
    fVar2 = *(float *)(lVar22 + lVar27 * 8);
    fVar3 = *(float *)(lVar22 + 4 + lVar27 * 8);
    fVar4 = pfVar33[lVar21 * 2 + 1];
    pfVar33[lVar21 * 2] = (fVar1 * fVar2 - fVar36 * fVar3) + pfVar33[lVar21 * 2];
    pfVar33[lVar21 * 2 + 1] = fVar1 * fVar3 + fVar36 * fVar2 + fVar4;
  } while (unaff_EDI < *(int *)(unaff_RBX + 0x14));
  lVar35 = *(int64_t *)(unaff_RBX + 0x78);
  lVar22 = (int64_t)*(int *)(unaff_RBX + 0x24);
  iVar30 = *(int *)(unaff_RBX + 0x10);
  puVar28 = (uint *)(lVar22 * 8 + -0xc + lVar35);
  *puVar28 = *(uint *)(lVar35 + 0x14) ^ 0x80000000;
  *(uint *)(lVar35 + -0x14 + lVar22 * 8) = *(uint *)(lVar35 + 0x1c) ^ 0x80000000;
  *(uint *)(lVar35 + -0x1c + lVar22 * 8) = *(uint *)(lVar35 + 0x24) ^ 0x80000000;
  iVar30 = (iVar30 >> 2) + -1;
  if (iVar30 != 0) {
    puVar23 = (uint *)(lVar35 + 0x34);
    do {
      puVar28[-6] = puVar23[-2] ^ 0x80000000;
      puVar28[-8] = *puVar23 ^ 0x80000000;
      puVar28[-10] = puVar23[2] ^ 0x80000000;
      puVar28[-0xc] = puVar23[4] ^ 0x80000000;
      iVar30 = iVar30 + -1;
      puVar23 = puVar23 + 8;
      puVar28 = puVar28 + -8;
    } while (iVar30 != 0);
  }
  uVar24 = FUN_180789a00(*(uint64_t *)(unaff_RBX + 0x48),*(uint64_t *)(unaff_RBX + 0x78),
                         *(uint64_t *)(unaff_RBX + 0x80),0,1);
  if ((int)uVar24 == 0) {
    pfVar33 = *(float **)(unaff_RBX + 0x80);
    pfVar32 = (float *)(*(int64_t *)(unaff_RBX + 0x38) + (int64_t)*(int *)(unaff_RBX + 0x5c) * 4);
    pfVar25 = *(float **)(unaff_RBX + 0x40);
    pfVar34 = pfVar33 + *(int *)(unaff_RBX + 0x10);
    fVar36 = 1.0 / (float)*(int *)(unaff_RBX + 0x24);
    if (0 < *(int *)(unaff_RBX + 0x10)) {
      do {
        fVar1 = *pfVar25;
        fVar2 = pfVar25[1];
        fVar3 = pfVar25[2];
        fVar4 = pfVar25[3];
        unaff_ESI = unaff_ESI + 4;
        fVar5 = *pfVar33;
        fVar6 = pfVar33[1];
        fVar7 = pfVar33[2];
        fVar8 = pfVar33[3];
        uVar24 = *(uint64_t *)(pfVar34 + 2);
        pfVar33 = pfVar33 + 4;
        *(uint64_t *)pfVar25 = *(uint64_t *)pfVar34;
        *(uint64_t *)(pfVar25 + 2) = uVar24;
        pfVar34 = pfVar34 + 4;
        pfVar25 = pfVar25 + 4;
        *pfVar32 = (fVar1 + fVar5) * fVar36;
        pfVar32[1] = (fVar2 + fVar6) * fVar36;
        pfVar32[2] = (fVar3 + fVar7) * fVar36;
        pfVar32[3] = (fVar4 + fVar8) * fVar36;
        pfVar32 = pfVar32 + 4;
      } while (unaff_ESI < *(int *)(unaff_RBX + 0x10));
    }
    uVar24 = 0;
  }
  return uVar24;
}



uint64_t FUN_18082487b(void)

{
  int64_t lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int64_t lVar10;
  uint *puVar11;
  uint64_t uVar12;
  float *pfVar13;
  uint *puVar14;
  int iVar15;
  int64_t unaff_RBX;
  int unaff_ESI;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float fVar19;
  
  lVar1 = *(int64_t *)(unaff_RBX + 0x78);
  lVar10 = (int64_t)*(int *)(unaff_RBX + 0x24);
  iVar15 = *(int *)(unaff_RBX + 0x10);
  puVar14 = (uint *)(lVar10 * 8 + -0xc + lVar1);
  *puVar14 = *(uint *)(lVar1 + 0x14) ^ 0x80000000;
  *(uint *)(lVar1 + -0x14 + lVar10 * 8) = *(uint *)(lVar1 + 0x1c) ^ 0x80000000;
  *(uint *)(lVar1 + -0x1c + lVar10 * 8) = *(uint *)(lVar1 + 0x24) ^ 0x80000000;
  iVar15 = (iVar15 >> 2) + -1;
  if (iVar15 != 0) {
    puVar11 = (uint *)(lVar1 + 0x34);
    do {
      puVar14[-6] = puVar11[-2] ^ 0x80000000;
      puVar14[-8] = *puVar11 ^ 0x80000000;
      puVar14[-10] = puVar11[2] ^ 0x80000000;
      puVar14[-0xc] = puVar11[4] ^ 0x80000000;
      iVar15 = iVar15 + -1;
      puVar11 = puVar11 + 8;
      puVar14 = puVar14 + -8;
    } while (iVar15 != 0);
  }
  uVar12 = FUN_180789a00(*(uint64_t *)(unaff_RBX + 0x48),*(uint64_t *)(unaff_RBX + 0x78),
                         *(uint64_t *)(unaff_RBX + 0x80),0,1);
  if ((int)uVar12 == 0) {
    pfVar16 = *(float **)(unaff_RBX + 0x80);
    pfVar18 = (float *)(*(int64_t *)(unaff_RBX + 0x38) + (int64_t)*(int *)(unaff_RBX + 0x5c) * 4);
    pfVar13 = *(float **)(unaff_RBX + 0x40);
    pfVar17 = pfVar16 + *(int *)(unaff_RBX + 0x10);
    fVar19 = 1.0 / (float)*(int *)(unaff_RBX + 0x24);
    if (0 < *(int *)(unaff_RBX + 0x10)) {
      do {
        fVar2 = *pfVar13;
        fVar3 = pfVar13[1];
        fVar4 = pfVar13[2];
        fVar5 = pfVar13[3];
        unaff_ESI = unaff_ESI + 4;
        fVar6 = *pfVar16;
        fVar7 = pfVar16[1];
        fVar8 = pfVar16[2];
        fVar9 = pfVar16[3];
        uVar12 = *(uint64_t *)(pfVar17 + 2);
        pfVar16 = pfVar16 + 4;
        *(uint64_t *)pfVar13 = *(uint64_t *)pfVar17;
        *(uint64_t *)(pfVar13 + 2) = uVar12;
        pfVar17 = pfVar17 + 4;
        pfVar13 = pfVar13 + 4;
        *pfVar18 = (fVar2 + fVar6) * fVar19;
        pfVar18[1] = (fVar3 + fVar7) * fVar19;
        pfVar18[2] = (fVar4 + fVar8) * fVar19;
        pfVar18[3] = (fVar5 + fVar9) * fVar19;
        pfVar18 = pfVar18 + 4;
      } while (unaff_ESI < *(int *)(unaff_RBX + 0x10));
    }
    uVar12 = 0;
  }
  return uVar12;
}



uint64_t FUN_1808248d3(uint *param_1,int param_2,int64_t param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint *puVar9;
  uint64_t uVar10;
  float *pfVar11;
  int64_t unaff_RBX;
  int unaff_ESI;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  uint in_XMM2_Da;
  float fVar15;
  
  puVar9 = (uint *)(param_3 + 0x34);
  do {
    param_1[-6] = puVar9[-2] ^ in_XMM2_Da;
    param_1[-8] = *puVar9 ^ in_XMM2_Da;
    param_1[-10] = puVar9[2] ^ in_XMM2_Da;
    param_1[-0xc] = puVar9[4] ^ in_XMM2_Da;
    param_2 = param_2 + -1;
    puVar9 = puVar9 + 8;
    param_1 = param_1 + -8;
  } while (param_2 != 0);
  uVar10 = FUN_180789a00(*(uint64_t *)(unaff_RBX + 0x48),*(uint64_t *)(unaff_RBX + 0x78),
                         *(uint64_t *)(unaff_RBX + 0x80),0,1);
  if ((int)uVar10 == 0) {
    pfVar12 = *(float **)(unaff_RBX + 0x80);
    pfVar14 = (float *)(*(int64_t *)(unaff_RBX + 0x38) + (int64_t)*(int *)(unaff_RBX + 0x5c) * 4);
    pfVar11 = *(float **)(unaff_RBX + 0x40);
    pfVar13 = pfVar12 + *(int *)(unaff_RBX + 0x10);
    fVar15 = 1.0 / (float)*(int *)(unaff_RBX + 0x24);
    if (0 < *(int *)(unaff_RBX + 0x10)) {
      do {
        fVar1 = *pfVar11;
        fVar2 = pfVar11[1];
        fVar3 = pfVar11[2];
        fVar4 = pfVar11[3];
        unaff_ESI = unaff_ESI + 4;
        fVar5 = *pfVar12;
        fVar6 = pfVar12[1];
        fVar7 = pfVar12[2];
        fVar8 = pfVar12[3];
        uVar10 = *(uint64_t *)(pfVar13 + 2);
        pfVar12 = pfVar12 + 4;
        *(uint64_t *)pfVar11 = *(uint64_t *)pfVar13;
        *(uint64_t *)(pfVar11 + 2) = uVar10;
        pfVar13 = pfVar13 + 4;
        pfVar11 = pfVar11 + 4;
        *pfVar14 = (fVar1 + fVar5) * fVar15;
        pfVar14[1] = (fVar2 + fVar6) * fVar15;
        pfVar14[2] = (fVar3 + fVar7) * fVar15;
        pfVar14[3] = (fVar4 + fVar8) * fVar15;
        pfVar14 = pfVar14 + 4;
      } while (unaff_ESI < *(int *)(unaff_RBX + 0x10));
    }
    uVar10 = 0;
  }
  return uVar10;
}







