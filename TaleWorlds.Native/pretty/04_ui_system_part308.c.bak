#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part308.c - 4 个函数

// 函数: void FUN_180838090(float *param_1,uint param_2,int64_t param_3,uint *param_4,int64_t *param_5)
void FUN_180838090(float *param_1,uint param_2,int64_t param_3,uint *param_4,int64_t *param_5)

{
  int64_t lVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int64_t lVar5;
  int8_t auVar6 [32];
  int8_t auVar7 [32];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int8_t auVar13 [16];
  int8_t auVar14 [32];
  int8_t auVar15 [32];
  int8_t auVar16 [32];
  int8_t auVar17 [32];
  uint64_t uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint64_t *puVar22;
  float *pfVar23;
  int8_t auVar24 [16];
  int8_t auVar25 [32];
  int8_t auVar26 [32];
  int8_t auVar27 [32];
  int8_t auVar28 [32];
  int8_t auVar29 [32];
  int8_t auStack_f8 [24];
  int8_t auStack_e0 [32];
  uint64_t auStack_b8 [22];
  
  puVar22 = auStack_b8;
  auStack_b8[0] = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_b8;
  uVar18 = (uint64_t)param_1 & 0x1f;
  for (; (uVar18 != 0 && (param_2 != 0)); param_2 = param_2 - 1) {
    fVar8 = (float)(*param_4 >> 1) * 4.656613e-10;
    uVar20 = param_4[1] * 4;
    fVar9 = (float)(int)*(short *)(param_3 + (uint64_t)uVar20 * 2) * 3.0517578e-05;
    fVar10 = (float)(int)*(short *)(param_3 + (uint64_t)(uVar20 + 1) * 2) * 3.0517578e-05;
    fVar11 = (float)(int)*(short *)(param_3 + (uint64_t)(uVar20 + 2) * 2) * 3.0517578e-05;
    fVar12 = (float)(int)*(short *)(param_3 + (uint64_t)(uVar20 + 3) * 2) * 3.0517578e-05;
    sVar2 = *(short *)(param_3 + (uint64_t)(uVar20 + 5) * 2);
    sVar3 = *(short *)(param_3 + (uint64_t)(uVar20 + 6) * 2);
    sVar4 = *(short *)(param_3 + (uint64_t)(uVar20 + 7) * 2);
    *param_1 = ((float)(int)*(short *)(param_3 + (uint64_t)(uVar20 + 4) * 2) * 3.0517578e-05 -
               fVar9) * fVar8 + fVar9;
    param_1[1] = ((float)(int)sVar2 * 3.0517578e-05 - fVar10) * fVar8 + fVar10;
    param_1[2] = ((float)(int)sVar3 * 3.0517578e-05 - fVar11) * fVar8 + fVar11;
    param_1[3] = ((float)(int)sVar4 * 3.0517578e-05 - fVar12) * fVar8 + fVar12;
    param_1 = param_1 + 4;
    *(int64_t *)param_4 = *(int64_t *)param_4 + *param_5;
    uVar18 = (uint64_t)param_1 & 0x1f;
  }
  iVar21 = (int)param_2 >> 2;
  if (iVar21 != 0) {
    lVar5 = *param_5;
    uVar20 = *param_4;
    auVar26._4_4_ = uVar20;
    auVar26._0_4_ = uVar20;
    auVar26._8_4_ = uVar20;
    auVar26._12_4_ = uVar20;
    auVar26._16_4_ = uVar20;
    auVar26._20_4_ = uVar20;
    auVar26._24_4_ = uVar20;
    auVar26._28_4_ = uVar20;
    lVar1 = *(int64_t *)param_4;
    auVar27._8_8_ = lVar1;
    auVar27._0_8_ = lVar1;
    auVar27._16_8_ = lVar1;
    auVar27._24_8_ = lVar1;
    lVar1 = lVar5 * 4;
    uVar20 = (uint)lVar5;
    auVar24 = vpinsrd_avx(ZEXT416(uVar20),uVar20,1);
    auVar24 = vpinsrd_avx(auVar24,uVar20,2);
    auVar24 = vpinsrd_avx(auVar24,uVar20,3);
    auVar26 = vpaddd_avx2(ZEXT1632(auVar24) << 0x80,auVar26);
    iVar19 = uVar20 * 2;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = lVar5 * 2;
    auVar24 = vpinsrq_avx(auVar24,lVar5 * 3,1);
    auVar13 = vpinsrq_avx((int8_t  [16])0x0,lVar5,1);
    auVar25._16_16_ = auVar24;
    auVar25._0_16_ = auVar13;
    auVar25 = vpaddq_avx2(auVar25,auVar27);
    auVar29._8_8_ = lVar1;
    auVar29._0_8_ = lVar1;
    auVar29._16_8_ = lVar1;
    auVar29._24_8_ = lVar1;
    auVar28._4_4_ = iVar19;
    auVar28._0_4_ = iVar19;
    auVar28._8_4_ = iVar19;
    auVar28._12_4_ = iVar19;
    auVar28._16_4_ = iVar19;
    auVar28._20_4_ = iVar19;
    auVar28._24_4_ = iVar19;
    auVar28._28_4_ = iVar19;
    puVar22 = (uint64_t *)auStack_f8;
    do {
      auStack_e0 = auVar25;
      auVar25 = vpsrld_avx2(auVar26,1);
      auVar6 = vcvtdq2ps_avx(auVar25);
      auVar26 = vpaddd_avx2(auVar26,auVar28);
      auVar25 = vpsrld_avx2(auVar26,1);
      auVar7 = vcvtdq2ps_avx(auVar25);
      auVar27 = *(int8_t (*) [32])(param_3 + (uint64_t)(uint)(auStack_e0._4_4_ << 2) * 2);
      auVar26 = vpaddd_avx2(auVar26,auVar28);
      auVar25 = vpaddq_avx2(auVar29,auStack_e0);
      auVar16 = vpunpcklqdq_avx2(auVar27,*(int8_t (*) [32])
                                          (param_3 + (uint64_t)(uint)(auStack_e0._12_4_ << 2) * 2))
      ;
      auVar14 = vpunpckhqdq_avx2(auVar27,*(int8_t (*) [32])
                                          (param_3 + (uint64_t)(uint)(auStack_e0._12_4_ << 2) * 2))
      ;
      auVar27 = vpmovsxwd_avx2(auVar16._0_16_);
      auVar16 = vcvtdq2ps_avx(auVar27);
      auVar27 = *(int8_t (*) [32])(param_3 + (uint64_t)(uint)(auStack_e0._20_4_ << 2) * 2);
      auVar17 = vpunpcklqdq_avx2(auVar27,*(int8_t (*) [32])
                                          (param_3 + (uint64_t)(uint)(auStack_e0._28_4_ << 2) * 2))
      ;
      auVar15 = vpunpckhqdq_avx2(auVar27,*(int8_t (*) [32])
                                          (param_3 + (uint64_t)(uint)(auStack_e0._28_4_ << 2) * 2))
      ;
      auVar27 = vpmovsxwd_avx2(auVar14._0_16_);
      auVar27 = vcvtdq2ps_avx(auVar27);
      auVar17 = vpmovsxwd_avx2(auVar17._0_16_);
      auVar14 = vpmovsxwd_avx2(auVar15._0_16_);
      auVar14 = vcvtdq2ps_avx(auVar14);
      auVar15 = vsubps_avx(auVar27,auVar16);
      auVar27 = vcvtdq2ps_avx(auVar17);
      auVar14 = vsubps_avx(auVar14,auVar27);
      *param_1 = (auVar15._0_4_ * auVar6._0_4_ * 4.656613e-10 + auVar16._0_4_) * 3.0517578e-05;
      param_1[1] = (auVar15._4_4_ * auVar6._4_4_ * 4.656613e-10 + auVar16._4_4_) * 3.0517578e-05;
      param_1[2] = (auVar15._8_4_ * auVar6._8_4_ * 4.656613e-10 + auVar16._8_4_) * 3.0517578e-05;
      param_1[3] = (auVar15._12_4_ * auVar6._12_4_ * 4.656613e-10 + auVar16._12_4_) * 3.0517578e-05;
      param_1[4] = (auVar15._16_4_ * auVar6._16_4_ * 4.656613e-10 + auVar16._16_4_) * 3.0517578e-05;
      param_1[5] = (auVar15._20_4_ * auVar6._20_4_ * 4.656613e-10 + auVar16._20_4_) * 3.0517578e-05;
      param_1[6] = (auVar15._24_4_ * auVar6._24_4_ * 4.656613e-10 + auVar16._24_4_) * 3.0517578e-05;
      param_1[7] = auVar14._28_4_;
      auVar6._4_4_ = (auVar14._4_4_ * auVar7._4_4_ * 4.656613e-10 + auVar27._4_4_) * 3.0517578e-05;
      auVar6._0_4_ = (auVar14._0_4_ * auVar7._0_4_ * 4.656613e-10 + auVar27._0_4_) * 3.0517578e-05;
      auVar6._8_4_ = (auVar14._8_4_ * auVar7._8_4_ * 4.656613e-10 + auVar27._8_4_) * 3.0517578e-05;
      auVar6._12_4_ =
           (auVar14._12_4_ * auVar7._12_4_ * 4.656613e-10 + auVar27._12_4_) * 3.0517578e-05;
      auVar6._16_4_ =
           (auVar14._16_4_ * auVar7._16_4_ * 4.656613e-10 + auVar27._16_4_) * 3.0517578e-05;
      auVar6._20_4_ =
           (auVar14._20_4_ * auVar7._20_4_ * 4.656613e-10 + auVar27._20_4_) * 3.0517578e-05;
      auVar6._24_4_ =
           (auVar14._24_4_ * auVar7._24_4_ * 4.656613e-10 + auVar27._24_4_) * 3.0517578e-05;
      auVar6._28_4_ = 0;
      *(int8_t (*) [32])(param_1 + 8) = auVar6;
      param_1 = param_1 + 0x10;
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
    *(int64_t *)param_4 = auVar25._0_8_;
  }
  param_2 = param_2 & 3;
  if (param_2 != 0) {
    pfVar23 = param_1 + 2;
    do {
      fVar8 = (float)(*param_4 >> 1) * 4.656613e-10;
      uVar20 = param_4[1] * 4;
      fVar9 = (float)(int)*(short *)(param_3 + (uint64_t)uVar20 * 2) * 3.0517578e-05;
      fVar10 = (float)(int)*(short *)(param_3 + (uint64_t)(uVar20 + 1) * 2) * 3.0517578e-05;
      fVar11 = (float)(int)*(short *)(param_3 + (uint64_t)(uVar20 + 2) * 2) * 3.0517578e-05;
      fVar12 = (float)(int)*(short *)(param_3 + (uint64_t)(uVar20 + 3) * 2) * 3.0517578e-05;
      sVar2 = *(short *)(param_3 + (uint64_t)(uVar20 + 5) * 2);
      sVar3 = *(short *)(param_3 + (uint64_t)(uVar20 + 6) * 2);
      sVar4 = *(short *)(param_3 + (uint64_t)(uVar20 + 7) * 2);
      pfVar23[-2] = ((float)(int)*(short *)(param_3 + (uint64_t)(uVar20 + 4) * 2) * 3.0517578e-05 -
                    fVar9) * fVar8 + fVar9;
      pfVar23[-1] = ((float)(int)sVar2 * 3.0517578e-05 - fVar10) * fVar8 + fVar10;
      *pfVar23 = ((float)(int)sVar3 * 3.0517578e-05 - fVar11) * fVar8 + fVar11;
      pfVar23[1] = ((float)(int)sVar4 * 3.0517578e-05 - fVar12) * fVar8 + fVar12;
      *(int64_t *)param_4 = *(int64_t *)param_4 + *param_5;
      param_2 = param_2 - 1;
      pfVar23 = pfVar23 + 4;
    } while (param_2 != 0);
  }
                    // WARNING: Subroutine does not return
  *(uint64_t *)((int64_t)puVar22 + -8) = 0x180838538;
  FUN_1808fc050(auStack_b8[0] ^ (uint64_t)auStack_b8);
}



// WARNING: Removing unreachable block (ram,0x0001808387d2)
// WARNING: Removing unreachable block (ram,0x0001808387c3)
// WARNING: Removing unreachable block (ram,0x000180838811)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180838590(float *param_1,uint param_2,int64_t param_3,uint *param_4,int64_t *param_5)
void FUN_180838590(float *param_1,uint param_2,int64_t param_3,uint *param_4,int64_t *param_5)

{
  int64_t lVar1;
  uint uVar2;
  int64_t lVar3;
  short sVar4;
  int64_t lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int8_t auVar9 [16];
  int8_t auVar10 [32];
  uint64_t uVar11;
  int iVar12;
  int iVar13;
  uint64_t *puVar14;
  int iVar15;
  int8_t auVar16 [16];
  int8_t auVar17 [32];
  int8_t auVar18 [32];
  int8_t auVar19 [32];
  int8_t auVar20 [32];
  int8_t auVar21 [32];
  int8_t in_ZMM6 [64];
  int8_t auVar22 [32];
  int8_t auVar23 [32];
  int8_t auStack_e8 [8];
  int8_t auStack_e0 [32];
  uint64_t auStack_a8 [18];
  int8_t auStack_18 [16];
  
  puVar14 = auStack_a8;
  auStack_18 = in_ZMM6._0_16_;
  auStack_a8[0] = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_a8;
  uVar11 = (uint64_t)param_1 & 0x1f;
  for (; (uVar11 != 0 && (param_2 != 0)); param_2 = param_2 - 1) {
    fVar6 = (float)(*param_4 >> 1) * 4.656613e-10;
    uVar2 = param_4[1] * 2;
    fVar7 = (float)(int)*(short *)(param_3 + (uint64_t)uVar2 * 2) * 3.0517578e-05;
    fVar8 = (float)(int)*(short *)(param_3 + (uint64_t)(uVar2 + 1) * 2) * 3.0517578e-05;
    sVar4 = *(short *)(param_3 + (uint64_t)(uVar2 + 3) * 2);
    *param_1 = ((float)(int)*(short *)(param_3 + (uint64_t)(uVar2 + 2) * 2) * 3.0517578e-05 - fVar7
               ) * fVar6 + fVar7;
    param_1[1] = ((float)(int)sVar4 * 3.0517578e-05 - fVar8) * fVar6 + fVar8;
    param_1 = param_1 + 2;
    *(int64_t *)param_4 = *(int64_t *)param_4 + *param_5;
    uVar11 = (uint64_t)param_1 & 0x1f;
  }
  iVar15 = (int)param_2 >> 2;
  if (iVar15 != 0) {
    lVar5 = *param_5;
    uVar2 = *param_4;
    auVar19._4_4_ = uVar2;
    auVar19._0_4_ = uVar2;
    auVar19._8_4_ = uVar2;
    auVar19._12_4_ = uVar2;
    auVar19._16_4_ = uVar2;
    auVar19._20_4_ = uVar2;
    auVar19._24_4_ = uVar2;
    auVar19._28_4_ = uVar2;
    iVar13 = (int)lVar5;
    auVar16 = vpinsrd_avx((int8_t  [16])0x0,iVar13,2);
    auVar16 = vpinsrd_avx(auVar16,iVar13,3);
    lVar1 = lVar5 * 4;
    iVar12 = iVar13 * 4;
    auVar9 = vpinsrd_avx(ZEXT416((uint)(iVar13 * 2)),iVar13 * 2,1);
    auVar9 = vpinsrd_avx(auVar9,iVar13 * 3,2);
    auVar9 = vpinsrd_avx(auVar9,iVar13 * 3,3);
    auVar17._16_16_ = auVar9;
    auVar17._0_16_ = auVar16;
    auVar17 = vpaddd_avx2(auVar17,auVar19);
    lVar3 = *(int64_t *)param_4;
    auVar20._8_8_ = lVar3;
    auVar20._0_8_ = lVar3;
    auVar20._16_8_ = lVar3;
    auVar20._24_8_ = lVar3;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = lVar5 * 2;
    auVar16 = vpinsrq_avx(auVar16,lVar5 * 3,1);
    auVar9 = vpinsrq_avx((int8_t  [16])0x0,lVar5,1);
    auVar18._16_16_ = auVar16;
    auVar18._0_16_ = auVar9;
    auVar18 = vpaddq_avx2(auVar18,auVar20);
    auVar22._8_8_ = lVar1;
    auVar22._0_8_ = lVar1;
    auVar22._16_8_ = lVar1;
    auVar22._24_8_ = lVar1;
    auVar23._4_4_ = iVar12;
    auVar23._0_4_ = iVar12;
    auVar23._8_4_ = iVar12;
    auVar23._12_4_ = iVar12;
    auVar23._16_4_ = iVar12;
    auVar23._20_4_ = iVar12;
    auVar23._24_4_ = iVar12;
    auVar23._28_4_ = iVar12;
    puVar14 = (uint64_t *)auStack_e8;
    do {
      auStack_e0 = auVar18;
      auVar21 = vpsrld_avx2(auVar17,1);
      auVar17 = vpaddd_avx2(auVar17,auVar23);
      auVar18 = vpaddq_avx2(auVar22,auStack_e0);
      auVar19 = vpunpckldq_avx2(*(int8_t (*) [32])
                                 (param_3 + (uint64_t)(uint)(auStack_e0._4_4_ * 2) * 2),
                                *(int8_t (*) [32])
                                 (param_3 + (uint64_t)(uint)(auStack_e0._12_4_ * 2) * 2));
      auVar20 = vpunpckldq_avx2(*(int8_t (*) [32])
                                 (param_3 + (uint64_t)(uint)(auStack_e0._20_4_ * 2) * 2),
                                *(int8_t (*) [32])
                                 (param_3 + (uint64_t)(uint)(auStack_e0._28_4_ * 2) * 2));
      auVar10 = vpunpcklqdq_avx2(auVar19,auVar20);
      auVar20 = vpunpckhqdq_avx2(auVar19,auVar20);
      auVar19 = vpmovsxwd_avx2(auVar10._0_16_);
      auVar19 = vcvtdq2ps_avx(auVar19);
      auVar20 = vpmovsxwd_avx2(auVar20._0_16_);
      auVar20 = vcvtdq2ps_avx(auVar20);
      auVar10 = vcvtdq2ps_avx(auVar21);
      auVar20 = vsubps_avx(auVar20,auVar19);
      *param_1 = (auVar20._0_4_ * auVar10._0_4_ * 4.656613e-10 + auVar19._0_4_) * 3.0517578e-05;
      param_1[1] = (auVar20._4_4_ * auVar10._4_4_ * 4.656613e-10 + auVar19._4_4_) * 3.0517578e-05;
      param_1[2] = (auVar20._8_4_ * auVar10._8_4_ * 4.656613e-10 + auVar19._8_4_) * 3.0517578e-05;
      param_1[3] = (auVar20._12_4_ * auVar10._12_4_ * 4.656613e-10 + auVar19._12_4_) * 3.0517578e-05
      ;
      param_1[4] = (auVar20._16_4_ * auVar10._16_4_ * 4.656613e-10 + auVar19._16_4_) * 3.0517578e-05
      ;
      param_1[5] = (auVar20._20_4_ * auVar10._20_4_ * 4.656613e-10 + auVar19._20_4_) * 3.0517578e-05
      ;
      param_1[6] = (auVar20._24_4_ * auVar10._24_4_ * 4.656613e-10 + auVar19._24_4_) * 3.0517578e-05
      ;
      param_1[7] = auVar10._28_4_;
      param_1 = param_1 + 8;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    *(int64_t *)param_4 = auVar18._0_8_;
  }
  for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
    fVar6 = (float)(*param_4 >> 1) * 4.656613e-10;
    uVar2 = param_4[1] * 2;
    fVar7 = (float)(int)*(short *)(param_3 + (uint64_t)uVar2 * 2) * 3.0517578e-05;
    fVar8 = (float)(int)*(short *)(param_3 + (uint64_t)(uVar2 + 1) * 2) * 3.0517578e-05;
    sVar4 = *(short *)(param_3 + (uint64_t)(uVar2 + 3) * 2);
    *param_1 = ((float)(int)*(short *)(param_3 + (uint64_t)(uVar2 + 2) * 2) * 3.0517578e-05 - fVar7
               ) * fVar6 + fVar7;
    param_1[1] = ((float)(int)sVar4 * 3.0517578e-05 - fVar8) * fVar6 + fVar8;
    *(int64_t *)param_4 = *(int64_t *)param_4 + *param_5;
    param_1 = param_1 + 2;
  }
                    // WARNING: Subroutine does not return
  *(uint64_t *)((int64_t)puVar14 + -8) = 0x1808388e2;
  FUN_1808fc050(auStack_a8[0] ^ (uint64_t)auStack_a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180838930(int8_t (*param_1) [64],uint param_2,int64_t param_3,uint *param_4,
void FUN_180838930(int8_t (*param_1) [64],uint param_2,int64_t param_3,uint *param_4,
                  int64_t *param_5)

{
  float fVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int iVar4;
  int iVar5;
  int64_t unaff_RBX;
  int8_t auVar6 [16];
  int8_t auVar7 [32];
  int8_t auVar8 [64];
  int8_t auVar9 [64];
  int8_t auVar10 [64];
  int8_t auVar11 [64];
  int8_t auVar12 [64];
  int8_t auVar13 [64];
  int8_t auVar14 [64];
  int8_t auVar15 [64];
  int8_t auVar16 [64];
  int8_t auVar17 [64];
  int8_t auVar18 [16];
  int8_t auVar19 [32];
  int8_t auVar20 [32];
  int8_t auVar21 [16];
  int8_t auVar22 [16];
  int8_t auVar23 [16];
  int8_t auVar24 [16];
  int8_t auVar25 [16];
  
  uVar3 = (uint64_t)param_1 & 0x1f;
  while ((uVar3 != 0 && (param_2 != 0))) {
    param_2 = param_2 - 1;
    fVar1 = *(float *)(param_3 + (uint64_t)param_4[1] * 4);
    auVar6 = vfmadd213ss_fma(SUB6416(ZEXT464(0x30000000),0),
                             ZEXT416((uint)((*(float *)(param_3 + (uint64_t)(param_4[1] + 1) * 4) -
                                            fVar1) * (float)(*param_4 >> 1))),ZEXT416((uint)fVar1));
    *(int *)*param_1 = auVar6._0_4_;
    param_1 = (int8_t (*) [64])(*param_1 + 4);
    *(int64_t *)param_4 = *(int64_t *)param_4 + *param_5;
    uVar3 = (uint64_t)param_1 & 0x1f;
  }
  iVar4 = (int)param_2 >> 4;
  if (iVar4 != 0) {
    auVar8 = vpbroadcastq_avx512f();
    iVar5 = (int)*param_5;
    auVar9 = vpbroadcastq_avx512f();
    auVar6 = vpinsrd_avx(ZEXT416((uint)(iVar5 * 8)),iVar5 * 9,1);
    auVar21 = vpinsrd_avx(ZEXT416((uint)(iVar5 * 4)),iVar5 * 5,1);
    auVar10 = vpbroadcastd_avx512f();
    auVar6 = vpinsrd_avx(auVar6,iVar5 * 10,2);
    auVar6 = vpinsrd_avx(auVar6,iVar5 * 0xb,3);
    auVar18 = vpinsrd_avx(ZEXT416((uint)(iVar5 * 0xc)),iVar5 * 0xd,1);
    auVar18 = vpinsrd_avx(auVar18,iVar5 * 0xe,2);
    auVar18 = vpinsrd_avx(auVar18,iVar5 * 0xf,3);
    auVar7._0_16_ = ZEXT116(0) * auVar18 + ZEXT116(1) * auVar6;
    auVar7._16_16_ = ZEXT116(1) * auVar18;
    auVar6 = vpinsrd_avx(auVar21,iVar5 * 6,2);
    auVar6 = vpinsrd_avx(auVar6,iVar5 * 7,3);
    lVar2 = *param_5;
    auVar21 = vpinsrd_avx((int8_t  [16])0x0,(int)*param_5,1);
    auVar21 = vpinsrd_avx(auVar21,iVar5 * 2,2);
    auVar21 = vpinsrd_avx(auVar21,iVar5 * 3,3);
    auVar11 = vinserti64x4_avx512f
                        (ZEXT3264(CONCAT1616(ZEXT116(1) * auVar6,
                                             ZEXT116(0) * auVar6 + ZEXT116(1) * auVar21)),auVar7,1);
    auVar12 = vpbroadcastd_avx512f();
    auVar11 = vpaddd_avx512f(auVar12,auVar11);
    auVar6 = vpinsrq_avx((int8_t  [16])0x0,lVar2,1);
    auVar21._8_8_ = 0;
    auVar21._0_8_ = lVar2 * 2;
    auVar21 = vpinsrq_avx(auVar21,lVar2 * 3,1);
    auVar18._8_8_ = 0;
    auVar18._0_8_ = lVar2 * 6;
    auVar18 = vpinsrq_avx(auVar18,lVar2 * 7,1);
    auVar23._8_8_ = 0;
    auVar23._0_8_ = lVar2 * 4;
    auVar22 = vpinsrq_avx(auVar23,lVar2 * 5,1);
    auVar12 = vbroadcastss_avx512f(ZEXT416(0x30000000));
    auVar19._0_16_ = ZEXT116(0) * auVar18 + ZEXT116(1) * auVar22;
    auVar19._16_16_ = ZEXT116(1) * auVar18;
    auVar13 = vinserti64x4_avx512f
                        (ZEXT3264(CONCAT1616(ZEXT116(1) * auVar21,
                                             ZEXT116(0) * auVar21 + ZEXT116(1) * auVar6)),auVar19,1)
    ;
    auVar13 = vpaddq_avx512f(auVar8,auVar13);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = lVar2 * 0xe;
    auVar6 = vpinsrq_avx(auVar6,lVar2 * 0xf,1);
    auVar22._8_8_ = 0;
    auVar22._0_8_ = lVar2 * 10;
    auVar21 = vpinsrq_avx(auVar22,lVar2 * 0xb,1);
    auVar24._8_8_ = 0;
    auVar24._0_8_ = lVar2 * 0xc;
    auVar18 = vpinsrq_avx(auVar24,lVar2 * 0xd,1);
    auVar25._8_8_ = 0;
    auVar25._0_8_ = lVar2 * 8;
    auVar22 = vpinsrq_avx(auVar25,lVar2 * 9,1);
    auVar20._0_16_ = ZEXT116(0) * auVar6 + ZEXT116(1) * auVar18;
    auVar20._16_16_ = ZEXT116(1) * auVar6;
    auVar14 = vinserti64x4_avx512f
                        (ZEXT3264(CONCAT1616(ZEXT116(1) * auVar21,
                                             ZEXT116(0) * auVar21 + ZEXT116(1) * auVar22)),auVar20,1
                        );
    auVar8 = vpaddq_avx512f(auVar8,auVar14);
    auVar14 = vmovdqu32_avx512f(ui_system_memory_config);
    do {
      auVar15 = vpermd_avx512f(auVar14,auVar8);
      auVar7 = vextracti64x4_avx512f(auVar15,0);
      auVar15 = vpermd_avx512f(auVar14,auVar13);
      vinserti64x4_avx512f(auVar15,auVar7,1);
      auVar15 = vpsrld_avx512f(auVar11,1);
      auVar15 = vcvtdq2ps_avx512f(auVar15);
      auVar16 = vgatherdps_avx512f(*(int32_t *)(param_3 + unaff_RBX * 4));
      auVar15 = vmulps_avx512f(auVar15,auVar12);
      auVar17 = vgatherdps_avx512f(*(int32_t *)(param_3 + 4 + unaff_RBX * 4));
      auVar17 = vsubps_avx512f(auVar17,auVar16);
      auVar15 = vmulps_avx512f(auVar17,auVar15);
      auVar15 = vaddps_avx512f(auVar15,auVar16);
      *param_1 = auVar15;
      param_1 = param_1 + 1;
      auVar11 = vpaddd_avx512f(auVar11,auVar10);
      auVar13 = vpaddq_avx512f(auVar13,auVar9);
      auVar8 = vpaddq_avx512f(auVar8,auVar9);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    auVar6 = vextracti32x4_avx512f(auVar13,0);
    *(int64_t *)param_4 = auVar6._0_8_;
  }
  for (param_2 = param_2 & 0xf; param_2 != 0; param_2 = param_2 - 1) {
    fVar1 = *(float *)(param_3 + (uint64_t)param_4[1] * 4);
    auVar6 = vfmadd213ss_fma(SUB6416(ZEXT464(0x30000000),0),
                             ZEXT416((uint)((*(float *)(param_3 + (uint64_t)(param_4[1] + 1) * 4) -
                                            fVar1) * (float)(*param_4 >> 1))),ZEXT416((uint)fVar1));
    *(int *)*param_1 = auVar6._0_4_;
    *(int64_t *)param_4 = *(int64_t *)param_4 + *param_5;
    param_1 = (int8_t (*) [64])(*param_1 + 4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1808389ec(void)
void FUN_1808389ec(void)

{
  float fVar1;
  int64_t lVar2;
  int iVar3;
  int64_t unaff_RBX;
  int8_t auVar4 [16];
  int8_t auVar5 [32];
  int8_t auVar6 [64];
  int8_t auVar7 [64];
  int8_t auVar8 [64];
  int8_t auVar9 [64];
  int8_t auVar10 [64];
  int8_t auVar11 [64];
  int8_t auVar12 [64];
  int8_t auVar13 [64];
  int8_t auVar14 [64];
  int8_t auVar15 [64];
  int8_t auVar16 [16];
  int8_t auVar17 [32];
  int8_t auVar18 [32];
  int8_t auVar19 [16];
  int8_t auVar20 [16];
  int8_t auVar21 [16];
  int8_t auVar22 [16];
  int8_t auVar23 [16];
  int8_t in_ZMM6 [64];
  int iStackX_8;
  int8_t (*in_stack_000000b0) [64];
  uint in_stack_000000b8;
  int64_t in_stack_000000c0;
  uint *in_stack_000000c8;
  int64_t *in_stack_000000d0;
  
  auVar6 = vpbroadcastq_avx512f();
  iVar3 = (int)*in_stack_000000d0;
  auVar7 = vpbroadcastq_avx512f();
  auVar4 = vpinsrd_avx(ZEXT416((uint)(iVar3 * 8)),iVar3 * 9,1);
  auVar19 = vpinsrd_avx(ZEXT416((uint)(iVar3 * 4)),iVar3 * 5,1);
  auVar8 = vpbroadcastd_avx512f();
  auVar4 = vpinsrd_avx(auVar4,iVar3 * 10,2);
  auVar4 = vpinsrd_avx(auVar4,iVar3 * 0xb,3);
  auVar16 = vpinsrd_avx(ZEXT416((uint)(iVar3 * 0xc)),iVar3 * 0xd,1);
  auVar16 = vpinsrd_avx(auVar16,iVar3 * 0xe,2);
  auVar16 = vpinsrd_avx(auVar16,iVar3 * 0xf,3);
  auVar5._0_16_ = ZEXT116(0) * auVar16 + ZEXT116(1) * auVar4;
  auVar5._16_16_ = ZEXT116(1) * auVar16;
  auVar4 = vpinsrd_avx(auVar19,iVar3 * 6,2);
  auVar4 = vpinsrd_avx(auVar4,iVar3 * 7,3);
  lVar2 = *in_stack_000000d0;
  auVar19 = vpinsrd_avx((int8_t  [16])0x0,(int)*in_stack_000000d0,1);
  auVar19 = vpinsrd_avx(auVar19,iVar3 * 2,2);
  auVar19 = vpinsrd_avx(auVar19,iVar3 * 3,3);
  auVar9 = vinserti64x4_avx512f
                     (ZEXT3264(CONCAT1616(ZEXT116(1) * auVar4,
                                          ZEXT116(0) * auVar4 + ZEXT116(1) * auVar19)),auVar5,1);
  auVar10 = vpbroadcastd_avx512f();
  auVar9 = vpaddd_avx512f(auVar10,auVar9);
  auVar4 = vpinsrq_avx((int8_t  [16])0x0,lVar2,1);
  auVar19._8_8_ = 0;
  auVar19._0_8_ = lVar2 * 2;
  auVar19 = vpinsrq_avx(auVar19,lVar2 * 3,1);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = lVar2 * 6;
  auVar16 = vpinsrq_avx(auVar16,lVar2 * 7,1);
  auVar21._8_8_ = 0;
  auVar21._0_8_ = lVar2 * 4;
  auVar20 = vpinsrq_avx(auVar21,lVar2 * 5,1);
  auVar10 = vbroadcastss_avx512f(ZEXT416(0x30000000));
  auVar17._0_16_ = ZEXT116(0) * auVar16 + ZEXT116(1) * auVar20;
  auVar17._16_16_ = ZEXT116(1) * auVar16;
  auVar11 = vinserti64x4_avx512f
                      (ZEXT3264(CONCAT1616(ZEXT116(1) * auVar19,
                                           ZEXT116(0) * auVar19 + ZEXT116(1) * auVar4)),auVar17,1);
  auVar11 = vpaddq_avx512f(auVar6,auVar11);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = lVar2 * 0xe;
  auVar4 = vpinsrq_avx(auVar4,lVar2 * 0xf,1);
  auVar20._8_8_ = 0;
  auVar20._0_8_ = lVar2 * 10;
  auVar19 = vpinsrq_avx(auVar20,lVar2 * 0xb,1);
  auVar22._8_8_ = 0;
  auVar22._0_8_ = lVar2 * 0xc;
  auVar16 = vpinsrq_avx(auVar22,lVar2 * 0xd,1);
  auVar23._8_8_ = 0;
  auVar23._0_8_ = lVar2 * 8;
  auVar20 = vpinsrq_avx(auVar23,lVar2 * 9,1);
  auVar18._0_16_ = ZEXT116(0) * auVar4 + ZEXT116(1) * auVar16;
  auVar18._16_16_ = ZEXT116(1) * auVar4;
  auVar12 = vinserti64x4_avx512f
                      (ZEXT3264(CONCAT1616(ZEXT116(1) * auVar19,
                                           ZEXT116(0) * auVar19 + ZEXT116(1) * auVar20)),auVar18,1);
  auVar6 = vpaddq_avx512f(auVar6,auVar12);
  auVar12 = vmovdqu32_avx512f(ui_system_memory_config);
  do {
    auVar13 = vpermd_avx512f(auVar12,auVar6);
    auVar5 = vextracti64x4_avx512f(auVar13,0);
    auVar13 = vpermd_avx512f(auVar12,auVar11);
    vinserti64x4_avx512f(auVar13,auVar5,1);
    auVar13 = vpsrld_avx512f(auVar9,1);
    auVar13 = vcvtdq2ps_avx512f(auVar13);
    auVar14 = vgatherdps_avx512f(*(int32_t *)(in_stack_000000c0 + unaff_RBX * 4));
    auVar13 = vmulps_avx512f(auVar13,auVar10);
    auVar15 = vgatherdps_avx512f(*(int32_t *)(in_stack_000000c0 + 4 + unaff_RBX * 4));
    auVar15 = vsubps_avx512f(auVar15,auVar14);
    auVar13 = vmulps_avx512f(auVar15,auVar13);
    auVar13 = vaddps_avx512f(auVar13,auVar14);
    *in_stack_000000b0 = auVar13;
    in_stack_000000b0 = in_stack_000000b0 + 1;
    auVar9 = vpaddd_avx512f(auVar9,auVar8);
    auVar11 = vpaddq_avx512f(auVar11,auVar7);
    auVar6 = vpaddq_avx512f(auVar6,auVar7);
    iStackX_8 = iStackX_8 + -1;
  } while (iStackX_8 != 0);
  auVar4 = vextracti32x4_avx512f(auVar11,0);
  *(int64_t *)in_stack_000000c8 = auVar4._0_8_;
  for (in_stack_000000b8 = in_stack_000000b8 & 0xf; in_stack_000000b8 != 0;
      in_stack_000000b8 = in_stack_000000b8 - 1) {
    fVar1 = *(float *)(in_stack_000000c0 + (uint64_t)in_stack_000000c8[1] * 4);
    auVar4 = vfmadd213ss_fma(in_ZMM6._0_16_,
                             ZEXT416((uint)((*(float *)(in_stack_000000c0 +
                                                       (uint64_t)(in_stack_000000c8[1] + 1) * 4) -
                                            fVar1) * (float)(*in_stack_000000c8 >> 1))),
                             ZEXT416((uint)fVar1));
    *(int *)*in_stack_000000b0 = auVar4._0_4_;
    *(int64_t *)in_stack_000000c8 = *(int64_t *)in_stack_000000c8 + *in_stack_000000d0;
    in_stack_000000b0 = (int8_t (*) [64])(*in_stack_000000b0 + 4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



