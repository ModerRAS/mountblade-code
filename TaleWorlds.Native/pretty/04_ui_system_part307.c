#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part307.c - 6 个函数

// 函数: void FUN_180837990(float *param_1,uint param_2,longlong param_3,longlong *param_4,longlong *param_5)
void FUN_180837990(float *param_1,uint param_2,longlong param_3,longlong *param_4,longlong *param_5)

{
  int32_t uVar1;
  longlong lVar2;
  longlong lVar3;
  int8_t auVar4 [32];
  int8_t auVar5 [32];
  int8_t auVar6 [32];
  int8_t auVar7 [32];
  int8_t auVar8 [32];
  int8_t auVar9 [16];
  int8_t auVar10 [32];
  int8_t auVar11 [32];
  int8_t auVar12 [32];
  int8_t auVar13 [32];
  int8_t auVar14 [32];
  float fVar15;
  int8_t *puVar16;
  int iVar17;
  int8_t auVar18 [16];
  int8_t auVar19 [32];
  int8_t auVar20 [32];
  int8_t auVar21 [32];
  int8_t auVar22 [32];
  int8_t auVar23 [64];
  int8_t auVar24 [64];
  int8_t auVar25 [64];
  int8_t auStack_148 [8];
  int8_t auStack_140 [32];
  int8_t auStack_108 [8];
  longlong lStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  ulonglong uStack_e0;
  
  puVar16 = auStack_108;
  uStack_e0 = _DAT_180bf00a8 ^ (ulonglong)auStack_108;
  iVar17 = (int)param_2 >> 2;
  if (iVar17 != 0) {
    lVar3 = *param_5;
    lVar2 = *param_4;
    auVar19._8_8_ = lVar2;
    auVar19._0_8_ = lVar2;
    auVar19._16_8_ = lVar2;
    auVar19._24_8_ = lVar2;
    lStack_100 = lVar3 * 4;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = lVar3 * 2;
    auVar18 = vpinsrq_avx(auVar18,lVar3 * 3,1);
    auVar9 = vpinsrq_avx((int8_t  [16])0x0,lVar3,1);
    auVar20._16_16_ = auVar18;
    auVar20._0_16_ = auVar9;
    auVar20 = vpaddq_avx2(auVar20,auVar19);
    puVar16 = auStack_148;
    auVar23 = ZEXT3264(_DAT_180980c00);
    auVar24 = ZEXT3264(_DAT_180a40840);
    auVar25 = ZEXT3264(_DAT_180980ca0);
    do {
      auStack_140 = auVar20;
      auVar20 = vpermd_avx2(auVar23._0_32_,auStack_140);
      auVar19 = vpermd_avx2(SUB6432(ZEXT1664((int8_t  [16])0x0),0),auStack_140);
      auVar19 = vpsrld_avx2(auVar19,1);
      auVar4 = vcvtdq2ps_avx(auVar19);
      auVar22 = vpermd_avx2(auVar24._0_32_,auStack_140);
      auVar20 = vpsrld_avx2(auVar20,1);
      auVar5 = vcvtdq2ps_avx(auVar20);
      auVar19 = *(int8_t (*) [32])(param_3 + (ulonglong)(uint)(auStack_140._4_4_ << 3) * 2);
      auVar20 = vpsrld_avx2(auVar22,1);
      auVar6 = vcvtdq2ps_avx(auVar20);
      auVar22 = *(int8_t (*) [32])(param_3 + (ulonglong)(uint)(auStack_140._12_4_ << 3) * 2);
      auVar21 = vpermd_avx2(auVar25._0_32_,auStack_140);
      auVar10._8_8_ = lStack_100;
      auVar10._0_8_ = lStack_100;
      auVar10._16_8_ = lStack_100;
      auVar10._24_8_ = lStack_100;
      auVar20 = vpaddq_avx2(auStack_140,auVar10);
      auVar21 = vpsrld_avx2(auVar21,1);
      auVar21 = vcvtdq2ps_avx(auVar21);
      auVar10 = vpmovsxwd_avx2(auVar19._0_16_);
      auVar10 = vcvtdq2ps_avx(auVar10);
      auVar19 = vpmovsxwd_avx2(auVar19._16_16_);
      auVar7 = vcvtdq2ps_avx(auVar19);
      auVar19 = *(int8_t (*) [32])(param_3 + (ulonglong)(uint)(auStack_140._20_4_ << 3) * 2);
      auVar11 = vpmovsxwd_avx2(auVar22._0_16_);
      auVar11 = vcvtdq2ps_avx(auVar11);
      auVar22 = vpmovsxwd_avx2(auVar22._16_16_);
      auVar22 = vcvtdq2ps_avx(auVar22);
      auVar12 = vpmovsxwd_avx2(auVar19._0_16_);
      auVar12 = vcvtdq2ps_avx(auVar12);
      auVar19 = vpmovsxwd_avx2(auVar19._16_16_);
      auVar8 = vcvtdq2ps_avx(auVar19);
      auVar19 = *(int8_t (*) [32])(param_3 + (ulonglong)(uint)(auStack_140._28_4_ << 3) * 2);
      auVar13 = vpmovsxwd_avx2(auVar19._0_16_);
      auVar13 = vcvtdq2ps_avx(auVar13);
      auVar14 = vpmovsxwd_avx2(auVar19._16_16_);
      auVar19 = vcvtdq2ps_avx(auVar14);
      auVar7 = vsubps_avx(auVar7,auVar10);
      fVar15 = auVar14._28_4_;
      auVar22 = vsubps_avx(auVar22,auVar11);
      auVar8 = vsubps_avx(auVar8,auVar12);
      auVar19 = vsubps_avx(auVar19,auVar13);
      *param_1 = (auVar7._0_4_ * auVar4._0_4_ * 4.656613e-10 + auVar10._0_4_) * 3.0517578e-05;
      param_1[1] = (auVar7._4_4_ * auVar4._4_4_ * 4.656613e-10 + auVar10._4_4_) * 3.0517578e-05;
      param_1[2] = (auVar7._8_4_ * auVar4._8_4_ * 4.656613e-10 + auVar10._8_4_) * 3.0517578e-05;
      param_1[3] = (auVar7._12_4_ * auVar4._12_4_ * 4.656613e-10 + auVar10._12_4_) * 3.0517578e-05;
      param_1[4] = (auVar7._16_4_ * auVar4._16_4_ * 4.656613e-10 + auVar10._16_4_) * 3.0517578e-05;
      param_1[5] = (auVar7._20_4_ * auVar4._20_4_ * 4.656613e-10 + auVar10._20_4_) * 3.0517578e-05;
      param_1[6] = (auVar7._24_4_ * auVar4._24_4_ * 4.656613e-10 + auVar10._24_4_) * 3.0517578e-05;
      param_1[7] = auVar19._28_4_;
      param_1[8] = (auVar22._0_4_ * auVar5._0_4_ * 4.656613e-10 + auVar11._0_4_) * 3.0517578e-05;
      param_1[9] = (auVar22._4_4_ * auVar5._4_4_ * 4.656613e-10 + auVar11._4_4_) * 3.0517578e-05;
      param_1[10] = (auVar22._8_4_ * auVar5._8_4_ * 4.656613e-10 + auVar11._8_4_) * 3.0517578e-05;
      param_1[0xb] = (auVar22._12_4_ * auVar5._12_4_ * 4.656613e-10 + auVar11._12_4_) *
                     3.0517578e-05;
      param_1[0xc] = (auVar22._16_4_ * auVar5._16_4_ * 4.656613e-10 + auVar11._16_4_) *
                     3.0517578e-05;
      param_1[0xd] = (auVar22._20_4_ * auVar5._20_4_ * 4.656613e-10 + auVar11._20_4_) *
                     3.0517578e-05;
      param_1[0xe] = (auVar22._24_4_ * auVar5._24_4_ * 4.656613e-10 + auVar11._24_4_) *
                     3.0517578e-05;
      param_1[0xf] = fVar15;
      auVar23 = ZEXT3264(_DAT_180980c00);
      param_1[0x10] = (auVar8._0_4_ * auVar6._0_4_ * 4.656613e-10 + auVar12._0_4_) * 3.0517578e-05;
      param_1[0x11] = (auVar8._4_4_ * auVar6._4_4_ * 4.656613e-10 + auVar12._4_4_) * 3.0517578e-05;
      param_1[0x12] = (auVar8._8_4_ * auVar6._8_4_ * 4.656613e-10 + auVar12._8_4_) * 3.0517578e-05;
      param_1[0x13] =
           (auVar8._12_4_ * auVar6._12_4_ * 4.656613e-10 + auVar12._12_4_) * 3.0517578e-05;
      param_1[0x14] =
           (auVar8._16_4_ * auVar6._16_4_ * 4.656613e-10 + auVar12._16_4_) * 3.0517578e-05;
      param_1[0x15] =
           (auVar8._20_4_ * auVar6._20_4_ * 4.656613e-10 + auVar12._20_4_) * 3.0517578e-05;
      param_1[0x16] =
           (auVar8._24_4_ * auVar6._24_4_ * 4.656613e-10 + auVar12._24_4_) * 3.0517578e-05;
      param_1[0x17] = fVar15 + auVar12._28_4_;
      auVar24 = ZEXT3264(_DAT_180a40840);
      param_1[0x18] = (auVar19._0_4_ * auVar21._0_4_ * 4.656613e-10 + auVar13._0_4_) * 3.0517578e-05
      ;
      param_1[0x19] = (auVar19._4_4_ * auVar21._4_4_ * 4.656613e-10 + auVar13._4_4_) * 3.0517578e-05
      ;
      param_1[0x1a] = (auVar19._8_4_ * auVar21._8_4_ * 4.656613e-10 + auVar13._8_4_) * 3.0517578e-05
      ;
      param_1[0x1b] =
           (auVar19._12_4_ * auVar21._12_4_ * 4.656613e-10 + auVar13._12_4_) * 3.0517578e-05;
      param_1[0x1c] =
           (auVar19._16_4_ * auVar21._16_4_ * 4.656613e-10 + auVar13._16_4_) * 3.0517578e-05;
      param_1[0x1d] =
           (auVar19._20_4_ * auVar21._20_4_ * 4.656613e-10 + auVar13._20_4_) * 3.0517578e-05;
      param_1[0x1e] =
           (auVar19._24_4_ * auVar21._24_4_ * 4.656613e-10 + auVar13._24_4_) * 3.0517578e-05;
      param_1[0x1f] = fVar15 + auVar11._28_4_;
      param_1 = param_1 + 0x20;
      iVar17 = iVar17 + -1;
      auVar25 = ZEXT3264(_DAT_180980ca0);
    } while (iVar17 != 0);
    *param_4 = auVar20._0_8_;
    lStack_f8 = lStack_100;
    lStack_f0 = lStack_100;
    lStack_e8 = lStack_100;
  }
  for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
    auVar20 = *(int8_t (*) [32])
               (param_3 + (ulonglong)(uint)(*(int *)((longlong)param_4 + 4) << 3) * 2);
    auVar19 = vpmovsxwd_avx2(auVar20._0_16_);
    auVar19 = vcvtdq2ps_avx(auVar19);
    auVar20 = vpmovsxwd_avx2(auVar20._16_16_);
    uVar1 = (int32_t)*param_4;
    auVar22._4_4_ = uVar1;
    auVar22._0_4_ = uVar1;
    auVar22._8_4_ = uVar1;
    auVar22._12_4_ = uVar1;
    auVar22._16_4_ = uVar1;
    auVar22._20_4_ = uVar1;
    auVar22._24_4_ = uVar1;
    auVar22._28_4_ = uVar1;
    auVar20 = vcvtdq2ps_avx(auVar20);
    auVar22 = vpsrld_avx2(auVar22,1);
    auVar22 = vcvtdq2ps_avx(auVar22);
    auVar20 = vsubps_avx(auVar20,auVar19);
    *param_1 = (auVar20._0_4_ * auVar22._0_4_ * 4.656613e-10 + auVar19._0_4_) * 3.0517578e-05;
    param_1[1] = (auVar20._4_4_ * auVar22._4_4_ * 4.656613e-10 + auVar19._4_4_) * 3.0517578e-05;
    param_1[2] = (auVar20._8_4_ * auVar22._8_4_ * 4.656613e-10 + auVar19._8_4_) * 3.0517578e-05;
    param_1[3] = (auVar20._12_4_ * auVar22._12_4_ * 4.656613e-10 + auVar19._12_4_) * 3.0517578e-05;
    param_1[4] = (auVar20._16_4_ * auVar22._16_4_ * 4.656613e-10 + auVar19._16_4_) * 3.0517578e-05;
    param_1[5] = (auVar20._20_4_ * auVar22._20_4_ * 4.656613e-10 + auVar19._20_4_) * 3.0517578e-05;
    param_1[6] = (auVar20._24_4_ * auVar22._24_4_ * 4.656613e-10 + auVar19._24_4_) * 3.0517578e-05;
    param_1[7] = auVar22._28_4_;
    *param_4 = *param_4 + *param_5;
    param_1 = param_1 + 8;
  }
                    // WARNING: Subroutine does not return
  *(uint64_t *)(puVar16 + -8) = 0x180837cc0;
  FUN_1808fc050(uStack_e0 ^ (ulonglong)auStack_108);
}



// WARNING: Removing unreachable block (ram,0x000180837fdf)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180837d30(float *param_1,uint param_2,longlong param_3,uint *param_4,longlong *param_5)
void FUN_180837d30(float *param_1,uint param_2,longlong param_3,uint *param_4,longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  int8_t auVar5 [32];
  int8_t auVar6 [32];
  ulonglong uVar7;
  int8_t auVar8 [32];
  int8_t auVar9 [32];
  int iVar10;
  int32_t uVar11;
  int iVar12;
  int iVar13;
  int8_t auVar14 [16];
  int8_t auVar15 [16];
  int8_t auVar16 [32];
  int8_t auVar17 [32];
  int8_t auVar18 [32];
  int8_t auVar19 [32];
  int8_t auVar20 [16];
  int8_t auVar21 [32];
  int8_t auVar22 [32];
  int8_t auVar23 [32];
  int8_t auVar24 [32];
  
  uVar7 = (ulonglong)param_1 & 0x1f;
  auVar8 = _DAT_180980cc0;
  auVar9 = _DAT_180980c40;
                    // WARNING: Read-only address (ram,0x000180980c40) is written
                    // WARNING: Read-only address (ram,0x000180980cc0) is written
  for (; (_DAT_180980c40 = auVar9, _DAT_180980cc0 = auVar8, uVar7 != 0 && (param_2 != 0));
      param_2 = param_2 - 1) {
    fVar4 = (float)(int)*(short *)(param_3 + (ulonglong)param_4[1] * 2) * 3.0517578e-05;
    *param_1 = ((float)(int)*(short *)(param_3 + (ulonglong)(param_4[1] + 1) * 2) * 3.0517578e-05 -
               fVar4) * (float)(*param_4 >> 1) * 4.656613e-10 + fVar4;
    param_1 = param_1 + 1;
    *(longlong *)param_4 = *(longlong *)param_4 + *param_5;
    uVar7 = (ulonglong)param_1 & 0x1f;
    auVar8 = _DAT_180980cc0;
    auVar9 = _DAT_180980c40;
  }
  iVar13 = (int)param_2 >> 3;
  if (iVar13 != 0) {
    lVar2 = *param_5;
    lVar3 = *(longlong *)param_4;
    iVar12 = (int)lVar2;
    auVar15 = vpinsrd_avx((int8_t  [16])0x0,iVar12,1);
    lVar1 = lVar2 * 8;
    iVar10 = iVar12 * 8;
    auVar14 = vpinsrd_avx(ZEXT416((uint)(iVar12 * 4)),iVar12 * 5,1);
    uVar11 = (int32_t)lVar3;
    auVar15 = vpinsrd_avx(auVar15,iVar12 * 2,2);
    auVar15 = vpinsrd_avx(auVar15,iVar12 * 3,3);
    auVar21._8_8_ = lVar3;
    auVar21._0_8_ = lVar3;
    auVar21._16_8_ = lVar3;
    auVar21._24_8_ = lVar3;
    auVar14 = vpinsrd_avx(auVar14,iVar12 * 6,2);
    auVar14 = vpinsrd_avx(auVar14,iVar12 * 7,3);
    auVar16._16_16_ = auVar14;
    auVar16._0_16_ = auVar15;
    auVar15 = vpinsrq_avx((int8_t  [16])0x0,lVar2,1);
    auVar19._4_4_ = uVar11;
    auVar19._0_4_ = uVar11;
    auVar19._8_4_ = uVar11;
    auVar19._12_4_ = uVar11;
    auVar19._16_4_ = uVar11;
    auVar19._20_4_ = uVar11;
    auVar19._24_4_ = uVar11;
    auVar19._28_4_ = uVar11;
    auVar16 = vpaddd_avx2(auVar16,auVar19);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = lVar2 * 2;
    auVar14 = vpinsrq_avx(auVar14,lVar2 * 3,1);
    auVar17._16_16_ = auVar14;
    auVar17._0_16_ = auVar15;
    auVar17 = vpaddq_avx2(auVar17,auVar21);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = lVar2 * 6;
    auVar15 = vpinsrq_avx(auVar15,lVar2 * 7,1);
    auVar20._8_8_ = 0;
    auVar20._0_8_ = lVar2 * 4;
    auVar14 = vpinsrq_avx(auVar20,lVar2 * 5,1);
    auVar18._16_16_ = auVar15;
    auVar18._0_16_ = auVar14;
    auVar18 = vpaddq_avx2(auVar18,auVar21);
    auVar23._8_8_ = lVar1;
    auVar23._0_8_ = lVar1;
    auVar23._16_8_ = lVar1;
    auVar23._24_8_ = lVar1;
    auVar24._4_4_ = iVar10;
    auVar24._0_4_ = iVar10;
    auVar24._8_4_ = iVar10;
    auVar24._12_4_ = iVar10;
    auVar24._16_4_ = iVar10;
    auVar24._20_4_ = iVar10;
    auVar24._24_4_ = iVar10;
    auVar24._28_4_ = iVar10;
    do {
      auVar19 = vpermd_avx2(auVar8,auVar18);
      auVar6 = vpermd_avx2(auVar9,auVar17);
      vpblendd_avx2(auVar6,auVar19,0xf0);
      auVar19 = vpcmpeqb_avx2(auVar6,auVar6);
      auVar22 = vpsrld_avx2(auVar16,1);
      auVar16 = vpaddd_avx2(auVar16,auVar24);
      auVar21 = vpgatherdd(auVar21,auVar19);
      auVar19 = vpslld_avx2(auVar21,0x10);
      auVar19 = vpsrad_avx2(auVar19,0x10);
      auVar21 = vpsrad_avx2(auVar21,0x10);
      auVar19 = vcvtdq2ps_avx(auVar19);
      auVar6 = vcvtdq2ps_avx(auVar21);
      auVar22 = vcvtdq2ps_avx(auVar22);
      auVar5 = vsubps_avx(auVar6,auVar19);
      auVar21._0_4_ = auVar5._0_4_ * auVar22._0_4_ * 4.656613e-10 + auVar19._0_4_;
      auVar21._4_4_ = auVar5._4_4_ * auVar22._4_4_ * 4.656613e-10 + auVar19._4_4_;
      auVar21._8_4_ = auVar5._8_4_ * auVar22._8_4_ * 4.656613e-10 + auVar19._8_4_;
      auVar21._12_4_ = auVar5._12_4_ * auVar22._12_4_ * 4.656613e-10 + auVar19._12_4_;
      auVar21._16_4_ = auVar5._16_4_ * auVar22._16_4_ * 4.656613e-10 + auVar19._16_4_;
      auVar21._20_4_ = auVar5._20_4_ * auVar22._20_4_ * 4.656613e-10 + auVar19._20_4_;
      auVar21._24_4_ = auVar5._24_4_ * auVar22._24_4_ * 4.656613e-10 + auVar19._24_4_;
      auVar21._28_4_ = auVar6._28_4_ + auVar19._28_4_;
      *param_1 = auVar21._0_4_ * 3.0517578e-05;
      param_1[1] = auVar21._4_4_ * 3.0517578e-05;
      param_1[2] = auVar21._8_4_ * 3.0517578e-05;
      param_1[3] = auVar21._12_4_ * 3.0517578e-05;
      param_1[4] = auVar21._16_4_ * 3.0517578e-05;
      param_1[5] = auVar21._20_4_ * 3.0517578e-05;
      param_1[6] = auVar21._24_4_ * 3.0517578e-05;
      param_1[7] = auVar22._28_4_;
      param_1 = param_1 + 8;
      auVar17 = vpaddq_avx2(auVar17,auVar23);
      auVar18 = vpaddq_avx2(auVar18,auVar23);
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
    *(longlong *)param_4 = auVar17._0_8_;
  }
  for (param_2 = param_2 & 7; param_2 != 0; param_2 = param_2 - 1) {
                    // WARNING: Read-only address (ram,0x000180980c40) is written
                    // WARNING: Read-only address (ram,0x000180980cc0) is written
    fVar4 = (float)(int)*(short *)(param_3 + (ulonglong)param_4[1] * 2) * 3.0517578e-05;
    *param_1 = ((float)(int)*(short *)(param_3 + (ulonglong)(param_4[1] + 1) * 2) * 3.0517578e-05 -
               fVar4) * (float)(*param_4 >> 1) * 4.656613e-10 + fVar4;
    *(longlong *)param_4 = *(longlong *)param_4 + *param_5;
    param_1 = param_1 + 1;
  }
                    // WARNING: Read-only address (ram,0x000180980c40) is written
                    // WARNING: Read-only address (ram,0x000180980cc0) is written
  return;
}



// WARNING: Removing unreachable block (ram,0x000180837fdf)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180837d61(float *param_1,uint64_t param_2,longlong param_3,uint *param_4)
void FUN_180837d61(float *param_1,uint64_t param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  int8_t auVar5 [32];
  int8_t auVar6 [32];
  ulonglong uVar7;
  int8_t auVar8 [32];
  int8_t auVar9 [32];
  int iVar10;
  longlong in_RAX;
  int32_t uVar11;
  uint unaff_ESI;
  uint uVar12;
  uint *unaff_RDI;
  int iVar13;
  longlong *unaff_R12;
  longlong unaff_R14;
  int iVar14;
  uint64_t unaff_R15;
  int8_t auVar15 [16];
  int8_t auVar16 [16];
  int8_t auVar17 [32];
  int8_t auVar18 [32];
  int8_t auVar19 [32];
  int8_t auVar20 [32];
  int8_t auVar21 [16];
  int8_t auVar22 [32];
  int8_t auVar23 [32];
  int8_t auVar24 [32];
  int8_t auVar25 [32];
  
  *(uint64_t *)(in_RAX + 8) = unaff_R15;
  uVar7 = (ulonglong)param_1 & 0x1f;
  auVar8 = _DAT_180980c40;
  auVar9 = _DAT_180980cc0;
                    // WARNING: Read-only address (ram,0x000180980c40) is written
                    // WARNING: Read-only address (ram,0x000180980cc0) is written
  for (; (_DAT_180980c40 = auVar8, _DAT_180980cc0 = auVar9, uVar7 != 0 && (unaff_ESI != 0));
      unaff_ESI = unaff_ESI - 1) {
    fVar4 = (float)(int)*(short *)(param_3 + (ulonglong)param_4[1] * 2) * 3.0517578e-05;
    *param_1 = ((float)(int)*(short *)(param_3 + (ulonglong)(param_4[1] + 1) * 2) * 3.0517578e-05 -
               fVar4) * (float)(*param_4 >> 1) * 4.656613e-10 + fVar4;
    param_1 = param_1 + 1;
    *(longlong *)param_4 = *(longlong *)param_4 + *unaff_R12;
    uVar7 = (ulonglong)param_1 & 0x1f;
    auVar8 = _DAT_180980c40;
    auVar9 = _DAT_180980cc0;
  }
  iVar14 = (int)unaff_ESI >> 3;
  if (iVar14 != 0) {
    lVar2 = *unaff_R12;
    lVar3 = *(longlong *)param_4;
    iVar13 = (int)lVar2;
    auVar16 = vpinsrd_avx((int8_t  [16])0x0,iVar13,1);
    lVar1 = lVar2 * 8;
    iVar10 = iVar13 * 8;
    auVar15 = vpinsrd_avx(ZEXT416((uint)(iVar13 * 4)),iVar13 * 5,1);
    uVar11 = (int32_t)lVar3;
    auVar16 = vpinsrd_avx(auVar16,iVar13 * 2,2);
    auVar16 = vpinsrd_avx(auVar16,iVar13 * 3,3);
    auVar22._8_8_ = lVar3;
    auVar22._0_8_ = lVar3;
    auVar22._16_8_ = lVar3;
    auVar22._24_8_ = lVar3;
    auVar15 = vpinsrd_avx(auVar15,iVar13 * 6,2);
    auVar15 = vpinsrd_avx(auVar15,iVar13 * 7,3);
    auVar17._16_16_ = auVar15;
    auVar17._0_16_ = auVar16;
    auVar16 = vpinsrq_avx((int8_t  [16])0x0,lVar2,1);
    auVar20._4_4_ = uVar11;
    auVar20._0_4_ = uVar11;
    auVar20._8_4_ = uVar11;
    auVar20._12_4_ = uVar11;
    auVar20._16_4_ = uVar11;
    auVar20._20_4_ = uVar11;
    auVar20._24_4_ = uVar11;
    auVar20._28_4_ = uVar11;
    auVar17 = vpaddd_avx2(auVar17,auVar20);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = lVar2 * 2;
    auVar15 = vpinsrq_avx(auVar15,lVar2 * 3,1);
    auVar18._16_16_ = auVar15;
    auVar18._0_16_ = auVar16;
    auVar18 = vpaddq_avx2(auVar18,auVar22);
    auVar16._8_8_ = 0;
    auVar16._0_8_ = lVar2 * 6;
    auVar16 = vpinsrq_avx(auVar16,lVar2 * 7,1);
    auVar21._8_8_ = 0;
    auVar21._0_8_ = lVar2 * 4;
    auVar15 = vpinsrq_avx(auVar21,lVar2 * 5,1);
    auVar19._16_16_ = auVar16;
    auVar19._0_16_ = auVar15;
    auVar19 = vpaddq_avx2(auVar19,auVar22);
    auVar24._8_8_ = lVar1;
    auVar24._0_8_ = lVar1;
    auVar24._16_8_ = lVar1;
    auVar24._24_8_ = lVar1;
    auVar25._4_4_ = iVar10;
    auVar25._0_4_ = iVar10;
    auVar25._8_4_ = iVar10;
    auVar25._12_4_ = iVar10;
    auVar25._16_4_ = iVar10;
    auVar25._20_4_ = iVar10;
    auVar25._24_4_ = iVar10;
    auVar25._28_4_ = iVar10;
    do {
      auVar20 = vpermd_avx2(auVar9,auVar19);
      auVar6 = vpermd_avx2(auVar8,auVar18);
      vpblendd_avx2(auVar6,auVar20,0xf0);
      auVar20 = vpcmpeqb_avx2(auVar6,auVar6);
      auVar23 = vpsrld_avx2(auVar17,1);
      auVar17 = vpaddd_avx2(auVar17,auVar25);
      auVar22 = vpgatherdd(auVar22,auVar20);
      auVar20 = vpslld_avx2(auVar22,0x10);
      auVar20 = vpsrad_avx2(auVar20,0x10);
      auVar22 = vpsrad_avx2(auVar22,0x10);
      auVar20 = vcvtdq2ps_avx(auVar20);
      auVar6 = vcvtdq2ps_avx(auVar22);
      auVar23 = vcvtdq2ps_avx(auVar23);
      auVar5 = vsubps_avx(auVar6,auVar20);
      auVar22._0_4_ = auVar5._0_4_ * auVar23._0_4_ * 4.656613e-10 + auVar20._0_4_;
      auVar22._4_4_ = auVar5._4_4_ * auVar23._4_4_ * 4.656613e-10 + auVar20._4_4_;
      auVar22._8_4_ = auVar5._8_4_ * auVar23._8_4_ * 4.656613e-10 + auVar20._8_4_;
      auVar22._12_4_ = auVar5._12_4_ * auVar23._12_4_ * 4.656613e-10 + auVar20._12_4_;
      auVar22._16_4_ = auVar5._16_4_ * auVar23._16_4_ * 4.656613e-10 + auVar20._16_4_;
      auVar22._20_4_ = auVar5._20_4_ * auVar23._20_4_ * 4.656613e-10 + auVar20._20_4_;
      auVar22._24_4_ = auVar5._24_4_ * auVar23._24_4_ * 4.656613e-10 + auVar20._24_4_;
      auVar22._28_4_ = auVar6._28_4_ + auVar20._28_4_;
      *param_1 = auVar22._0_4_ * 3.0517578e-05;
      param_1[1] = auVar22._4_4_ * 3.0517578e-05;
      param_1[2] = auVar22._8_4_ * 3.0517578e-05;
      param_1[3] = auVar22._12_4_ * 3.0517578e-05;
      param_1[4] = auVar22._16_4_ * 3.0517578e-05;
      param_1[5] = auVar22._20_4_ * 3.0517578e-05;
      param_1[6] = auVar22._24_4_ * 3.0517578e-05;
      param_1[7] = auVar23._28_4_;
      param_1 = param_1 + 8;
      auVar18 = vpaddq_avx2(auVar18,auVar24);
      auVar19 = vpaddq_avx2(auVar19,auVar24);
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    *(longlong *)unaff_RDI = auVar18._0_8_;
  }
  for (uVar12 = unaff_ESI & 7; uVar12 != 0; uVar12 = uVar12 - 1) {
                    // WARNING: Read-only address (ram,0x000180980c40) is written
                    // WARNING: Read-only address (ram,0x000180980cc0) is written
    fVar4 = (float)(int)*(short *)(unaff_R14 + (ulonglong)unaff_RDI[1] * 2) * 3.0517578e-05;
    *param_1 = ((float)(int)*(short *)(unaff_R14 + (ulonglong)(unaff_RDI[1] + 1) * 2) *
                3.0517578e-05 - fVar4) * (float)(*unaff_RDI >> 1) * 4.656613e-10 + fVar4;
    *(longlong *)unaff_RDI = *(longlong *)unaff_RDI + *unaff_R12;
    param_1 = param_1 + 1;
  }
                    // WARNING: Read-only address (ram,0x000180980c40) is written
                    // WARNING: Read-only address (ram,0x000180980cc0) is written
  return;
}



// WARNING: Removing unreachable block (ram,0x000180837fdf)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180837e0a(uint64_t param_1)
void FUN_180837e0a(uint64_t param_1)

{
  longlong lVar1;
  float fVar2;
  int8_t auVar3 [32];
  int8_t auVar4 [32];
  int iVar5;
  int8_t auVar6 [32];
  int iVar7;
  int32_t uVar8;
  float *unaff_RBX;
  uint unaff_ESI;
  uint uVar9;
  uint *unaff_RDI;
  longlong in_R11;
  longlong *unaff_R12;
  longlong unaff_R14;
  int unaff_R15D;
  int8_t auVar10 [16];
  int8_t auVar11 [16];
  int8_t auVar12 [32];
  int8_t auVar13 [32];
  int8_t auVar14 [32];
  int8_t auVar15 [32];
  int8_t auVar16 [16];
  int8_t in_ZMM1 [64];
  int8_t auVar17 [32];
  int8_t auVar18 [32];
  float unaff_XMM6_Da;
  int8_t in_ZMM7 [64];
  int8_t auVar19 [32];
  int8_t auVar20 [32];
  
  auVar6 = _DAT_180980c40;
  lVar1 = in_R11 * 8;
  iVar5 = (int)in_R11;
  iVar7 = iVar5 * 8;
  auVar11 = vpinsrd_avx(ZEXT416((uint)(iVar5 * 4)),iVar5 * 5,1);
  uVar8 = (int32_t)param_1;
  auVar10 = vpinsrd_avx(in_ZMM1._0_16_,iVar5 * 2,2);
  auVar10 = vpinsrd_avx(auVar10,iVar5 * 3,3);
  auVar17._8_8_ = param_1;
  auVar17._0_8_ = param_1;
  auVar17._16_8_ = param_1;
  auVar17._24_8_ = param_1;
  auVar11 = vpinsrd_avx(auVar11,iVar5 * 6,2);
  auVar11 = vpinsrd_avx(auVar11,iVar5 * 7,3);
  auVar12._16_16_ = auVar11;
  auVar12._0_16_ = auVar10;
  auVar11 = vpinsrq_avx((int8_t  [16])0x0,in_R11,1);
  auVar15._4_4_ = uVar8;
  auVar15._0_4_ = uVar8;
  auVar15._8_4_ = uVar8;
  auVar15._12_4_ = uVar8;
  auVar15._16_4_ = uVar8;
  auVar15._20_4_ = uVar8;
  auVar15._24_4_ = uVar8;
  auVar15._28_4_ = uVar8;
  auVar12 = vpaddd_avx2(auVar12,auVar15);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = in_R11 * 2;
  auVar10 = vpinsrq_avx(auVar10,in_R11 * 3,1);
  auVar13._16_16_ = auVar10;
  auVar13._0_16_ = auVar11;
  auVar13 = vpaddq_avx2(auVar13,auVar17);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = in_R11 * 6;
  auVar11 = vpinsrq_avx(auVar11,in_R11 * 7,1);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = in_R11 * 4;
  auVar10 = vpinsrq_avx(auVar16,in_R11 * 5,1);
  auVar14._16_16_ = auVar11;
  auVar14._0_16_ = auVar10;
  auVar14 = vpaddq_avx2(auVar14,auVar17);
  auVar19._8_8_ = lVar1;
  auVar19._0_8_ = lVar1;
  auVar19._16_8_ = lVar1;
  auVar19._24_8_ = lVar1;
  auVar20._4_4_ = iVar7;
  auVar20._0_4_ = iVar7;
  auVar20._8_4_ = iVar7;
  auVar20._12_4_ = iVar7;
  auVar20._16_4_ = iVar7;
  auVar20._20_4_ = iVar7;
  auVar20._24_4_ = iVar7;
  auVar20._28_4_ = iVar7;
  do {
    auVar15 = vpermd_avx2(in_ZMM7._0_32_,auVar14);
    auVar4 = vpermd_avx2(auVar6,auVar13);
    vpblendd_avx2(auVar4,auVar15,0xf0);
    auVar15 = vpcmpeqb_avx2(auVar4,auVar4);
    auVar18 = vpsrld_avx2(auVar12,1);
    auVar12 = vpaddd_avx2(auVar12,auVar20);
    auVar17 = vpgatherdd(auVar17,auVar15);
    auVar15 = vpslld_avx2(auVar17,0x10);
    auVar15 = vpsrad_avx2(auVar15,0x10);
    auVar17 = vpsrad_avx2(auVar17,0x10);
    auVar15 = vcvtdq2ps_avx(auVar15);
    auVar4 = vcvtdq2ps_avx(auVar17);
    auVar18 = vcvtdq2ps_avx(auVar18);
    auVar3 = vsubps_avx(auVar4,auVar15);
    auVar17._0_4_ = auVar3._0_4_ * auVar18._0_4_ * 4.656613e-10 + auVar15._0_4_;
    auVar17._4_4_ = auVar3._4_4_ * auVar18._4_4_ * 4.656613e-10 + auVar15._4_4_;
    auVar17._8_4_ = auVar3._8_4_ * auVar18._8_4_ * 4.656613e-10 + auVar15._8_4_;
    auVar17._12_4_ = auVar3._12_4_ * auVar18._12_4_ * 4.656613e-10 + auVar15._12_4_;
    auVar17._16_4_ = auVar3._16_4_ * auVar18._16_4_ * 4.656613e-10 + auVar15._16_4_;
    auVar17._20_4_ = auVar3._20_4_ * auVar18._20_4_ * 4.656613e-10 + auVar15._20_4_;
    auVar17._24_4_ = auVar3._24_4_ * auVar18._24_4_ * 4.656613e-10 + auVar15._24_4_;
    auVar17._28_4_ = auVar4._28_4_ + auVar15._28_4_;
    *unaff_RBX = auVar17._0_4_ * 3.0517578e-05;
    unaff_RBX[1] = auVar17._4_4_ * 3.0517578e-05;
    unaff_RBX[2] = auVar17._8_4_ * 3.0517578e-05;
    unaff_RBX[3] = auVar17._12_4_ * 3.0517578e-05;
    unaff_RBX[4] = auVar17._16_4_ * 3.0517578e-05;
    unaff_RBX[5] = auVar17._20_4_ * 3.0517578e-05;
    unaff_RBX[6] = auVar17._24_4_ * 3.0517578e-05;
    unaff_RBX[7] = auVar18._28_4_;
    unaff_RBX = unaff_RBX + 8;
    auVar13 = vpaddq_avx2(auVar13,auVar19);
    auVar14 = vpaddq_avx2(auVar14,auVar19);
    unaff_R15D = unaff_R15D + -1;
  } while (unaff_R15D != 0);
  *(longlong *)unaff_RDI = auVar13._0_8_;
  for (uVar9 = unaff_ESI & 7; uVar9 != 0; uVar9 = uVar9 - 1) {
                    // WARNING: Read-only address (ram,0x000180980c40) is written
    fVar2 = (float)(int)*(short *)(unaff_R14 + (ulonglong)unaff_RDI[1] * 2) * unaff_XMM6_Da;
    *unaff_RBX = ((float)(int)*(short *)(unaff_R14 + (ulonglong)(unaff_RDI[1] + 1) * 2) *
                  unaff_XMM6_Da - fVar2) * (float)(*unaff_RDI >> 1) * 4.656613e-10 + fVar2;
    *(longlong *)unaff_RDI = *(longlong *)unaff_RDI + *unaff_R12;
    unaff_RBX = unaff_RBX + 1;
  }
                    // WARNING: Read-only address (ram,0x000180980c40) is written
  return;
}





// 函数: void FUN_180837fef(void)
void FUN_180837fef(void)

{
  float fVar1;
  float *unaff_RBX;
  uint unaff_ESI;
  uint uVar2;
  uint *unaff_RDI;
  longlong *unaff_R12;
  longlong unaff_R14;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  
  for (uVar2 = unaff_ESI & 7; uVar2 != 0; uVar2 = uVar2 - 1) {
    fVar1 = (float)(int)*(short *)(unaff_R14 + (ulonglong)unaff_RDI[1] * 2) * unaff_XMM6_Da;
    *unaff_RBX = ((float)(int)*(short *)(unaff_R14 + (ulonglong)(unaff_RDI[1] + 1) * 2) *
                  unaff_XMM6_Da - fVar1) * (float)(*unaff_RDI >> 1) * unaff_XMM7_Da + fVar1;
    *(longlong *)unaff_RDI = *(longlong *)unaff_RDI + *unaff_R12;
    unaff_RBX = unaff_RBX + 1;
  }
  return;
}





// 函数: void FUN_180838000(void)
void FUN_180838000(void)

{
  float fVar1;
  float *unaff_RBX;
  int unaff_ESI;
  uint *unaff_RDI;
  longlong *unaff_R12;
  longlong unaff_R14;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  
  do {
    fVar1 = (float)(int)*(short *)(unaff_R14 + (ulonglong)unaff_RDI[1] * 2) * unaff_XMM6_Da;
    *unaff_RBX = ((float)(int)*(short *)(unaff_R14 + (ulonglong)(unaff_RDI[1] + 1) * 2) *
                  unaff_XMM6_Da - fVar1) * (float)(*unaff_RDI >> 1) * unaff_XMM7_Da + fVar1;
    *(longlong *)unaff_RDI = *(longlong *)unaff_RDI + *unaff_R12;
    unaff_ESI = unaff_ESI + -1;
    unaff_RBX = unaff_RBX + 1;
  } while (unaff_ESI != 0);
  return;
}



// WARNING: Removing unreachable block (ram,0x000180838385)
// WARNING: Removing unreachable block (ram,0x00018083836b)
// WARNING: Removing unreachable block (ram,0x000180838344)
// WARNING: Removing unreachable block (ram,0x00018083837a)
// WARNING: Removing unreachable block (ram,0x0001808383db)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



