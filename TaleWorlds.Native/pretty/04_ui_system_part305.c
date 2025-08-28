#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part305.c - 6 个函数

// 函数: void FUN_1808366a0(int8_t (*param_1) [32],uint param_2,longlong param_3,longlong *param_4,
void FUN_1808366a0(int8_t (*param_1) [32],uint param_2,longlong param_3,longlong *param_4,
                  longlong *param_5)

{
  float *pfVar1;
  int32_t uVar2;
  longlong lVar3;
  longlong lVar4;
  int8_t auVar5 [16];
  int8_t auVar6 [32];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int8_t auVar15 [32];
  uint uVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  int iVar19;
  int8_t auVar20 [16];
  int8_t auVar21 [32];
  int8_t auVar22 [32];
  int8_t auVar23 [32];
  int8_t auVar24 [32];
  float fVar25;
  int8_t auVar26 [32];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int8_t in_ZMM2 [64];
  int8_t auVar33 [32];
  int8_t auVar34 [32];
  int8_t auVar35 [32];
  int8_t auVar36 [32];
  int8_t auStack_f8 [24];
  int8_t auStack_e0 [32];
  ulonglong auStack_b8 [22];
  
  puVar18 = auStack_b8;
  auStack_b8[0] = _DAT_180bf00a8 ^ (ulonglong)auStack_b8;
  uVar17 = (ulonglong)param_1 & 0x1f;
                    // WARNING: Read-only address (ram,0x000180980c00) is written
                    // WARNING: Read-only address (ram,0x000180980ca0) is written
                    // WARNING: Read-only address (ram,0x000180a40840) is written
  while ((uVar17 != 0 && (param_2 != 0))) {
    param_2 = param_2 - 1;
    uVar2 = (int32_t)*param_4;
    auVar21._4_4_ = uVar2;
    auVar21._0_4_ = uVar2;
    auVar21._8_4_ = uVar2;
    auVar21._12_4_ = uVar2;
    auVar21._16_4_ = uVar2;
    auVar21._20_4_ = uVar2;
    auVar21._24_4_ = uVar2;
    auVar21._28_4_ = uVar2;
    uVar17 = (ulonglong)(uint)(*(int *)((longlong)param_4 + 4) << 3);
    auVar21 = vpsrld_avx2(auVar21,1);
    auVar21 = vcvtdq2ps_avx(auVar21);
    auVar23 = vsubps_avx(*(int8_t (*) [32])(param_3 + 0x20 + uVar17 * 4),
                         *(int8_t (*) [32])(param_3 + uVar17 * 4));
    fVar25 = auVar21._0_4_ * 4.656613e-10 * auVar23._0_4_;
    fVar27 = auVar21._4_4_ * 4.656613e-10 * auVar23._4_4_;
    fVar28 = auVar21._8_4_ * 4.656613e-10 * auVar23._8_4_;
    fVar29 = auVar21._12_4_ * 4.656613e-10 * auVar23._12_4_;
    fVar30 = auVar21._16_4_ * 4.656613e-10 * auVar23._16_4_;
    fVar31 = auVar21._20_4_ * 4.656613e-10 * auVar23._20_4_;
    fVar7 = in_ZMM2._28_4_;
    fVar32 = auVar21._24_4_ * 4.656613e-10 * auVar23._24_4_;
    in_ZMM2 = ZEXT3264(CONCAT428(fVar7,CONCAT424(fVar32,CONCAT420(fVar31,CONCAT416(fVar30,CONCAT412(
                                                  fVar29,CONCAT48(fVar28,CONCAT44(fVar27,fVar25)))))
                                                )));
    pfVar1 = (float *)(param_3 + uVar17 * 4);
    fVar8 = pfVar1[1];
    fVar9 = pfVar1[2];
    fVar10 = pfVar1[3];
    fVar11 = pfVar1[4];
    fVar12 = pfVar1[5];
    fVar13 = pfVar1[6];
    fVar14 = pfVar1[7];
    *(float *)*param_1 = fVar25 + *pfVar1;
    *(float *)(*param_1 + 4) = fVar27 + fVar8;
    *(float *)(*param_1 + 8) = fVar28 + fVar9;
    *(float *)(*param_1 + 0xc) = fVar29 + fVar10;
    *(float *)(*param_1 + 0x10) = fVar30 + fVar11;
    *(float *)(*param_1 + 0x14) = fVar31 + fVar12;
    *(float *)(*param_1 + 0x18) = fVar32 + fVar13;
    *(float *)(*param_1 + 0x1c) = fVar7 + fVar14;
    param_1 = param_1 + 1;
    *param_4 = *param_4 + *param_5;
    uVar17 = (ulonglong)param_1 & 0x1f;
  }
  iVar19 = (int)param_2 >> 2;
  if (iVar19 != 0) {
    lVar4 = *param_5;
    lVar3 = *param_4;
    auVar26._8_8_ = lVar3;
    auVar26._0_8_ = lVar3;
    auVar26._16_8_ = lVar3;
    auVar26._24_8_ = lVar3;
    auVar5 = vpinsrq_avx((int8_t  [16])0x0,lVar4,1);
    lVar3 = lVar4 * 4;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = lVar4 * 2;
    auVar20 = vpinsrq_avx(auVar20,lVar4 * 3,1);
    auVar23._16_16_ = auVar20;
    auVar23._0_16_ = auVar5;
    auVar21 = vpaddq_avx2(auVar23,auVar26);
    auVar36._8_8_ = lVar3;
    auVar36._0_8_ = lVar3;
    auVar36._16_8_ = lVar3;
    auVar36._24_8_ = lVar3;
    puVar18 = (ulonglong *)auStack_f8;
    auVar23 = _DAT_180980c00;
    auVar26 = _DAT_180a40840;
    auVar24 = _DAT_180980ca0;
    do {
      auStack_e0 = auVar21;
      auVar15 = _DAT_180980c00;
      auVar23 = vpermd_avx2(auVar23,auStack_e0);
      auVar21 = vpermd_avx2(SUB6432(ZEXT1664((int8_t  [16])0x0),0),auStack_e0);
      auVar22 = vpsrld_avx2(auVar21,1);
      auVar21 = *(int8_t (*) [32])(param_3 + (ulonglong)(uint)(auStack_e0._4_4_ << 3) * 4);
      auVar22 = vcvtdq2ps_avx(auVar22);
      auVar6 = vpermd_avx2(auVar26,auStack_e0);
      auVar33 = vpermd_avx2(auVar24,auStack_e0);
      auVar23 = vpsrld_avx2(auVar23,1);
      auVar26 = vcvtdq2ps_avx(auVar23);
      auVar23 = vpsrld_avx2(auVar6,1);
      auVar24 = vcvtdq2ps_avx(auVar23);
      auVar23 = vpsrld_avx2(auVar33,1);
      auVar6 = vcvtdq2ps_avx(auVar23);
      auVar33 = vsubps_avx(*(int8_t (*) [32])
                            (param_3 + 0x20 + (ulonglong)(uint)(auStack_e0._4_4_ << 3) * 4),auVar21)
      ;
      fVar7 = auVar6._28_4_;
      auVar23 = *(int8_t (*) [32])(param_3 + (ulonglong)(uint)(auStack_e0._12_4_ << 3) * 4);
      uVar16 = auStack_e0._20_4_ << 3;
      auVar35._0_4_ = auVar33._0_4_ * auVar22._0_4_ * 4.656613e-10 + auVar21._0_4_;
      auVar35._4_4_ = auVar33._4_4_ * auVar22._4_4_ * 4.656613e-10 + auVar21._4_4_;
      auVar35._8_4_ = auVar33._8_4_ * auVar22._8_4_ * 4.656613e-10 + auVar21._8_4_;
      auVar35._12_4_ = auVar33._12_4_ * auVar22._12_4_ * 4.656613e-10 + auVar21._12_4_;
      auVar35._16_4_ = auVar33._16_4_ * auVar22._16_4_ * 4.656613e-10 + auVar21._16_4_;
      auVar35._20_4_ = auVar33._20_4_ * auVar22._20_4_ * 4.656613e-10 + auVar21._20_4_;
      auVar35._24_4_ = auVar33._24_4_ * auVar22._24_4_ * 4.656613e-10 + auVar21._24_4_;
      auVar35._28_4_ = fVar7 + auVar21._28_4_;
      auVar21 = vsubps_avx(*(int8_t (*) [32])
                            (param_3 + 0x20 + (ulonglong)(uint)(auStack_e0._12_4_ << 3) * 4),auVar23
                          );
      auVar22 = vsubps_avx(*(int8_t (*) [32])(param_3 + 0x20 + (ulonglong)uVar16 * 4),
                           *(int8_t (*) [32])(param_3 + (ulonglong)uVar16 * 4));
      auVar34._0_4_ = auVar21._0_4_ * auVar26._0_4_ * 4.656613e-10 + auVar23._0_4_;
      auVar34._4_4_ = auVar21._4_4_ * auVar26._4_4_ * 4.656613e-10 + auVar23._4_4_;
      auVar34._8_4_ = auVar21._8_4_ * auVar26._8_4_ * 4.656613e-10 + auVar23._8_4_;
      auVar34._12_4_ = auVar21._12_4_ * auVar26._12_4_ * 4.656613e-10 + auVar23._12_4_;
      auVar34._16_4_ = auVar21._16_4_ * auVar26._16_4_ * 4.656613e-10 + auVar23._16_4_;
      auVar34._20_4_ = auVar21._20_4_ * auVar26._20_4_ * 4.656613e-10 + auVar23._20_4_;
      auVar34._24_4_ = auVar21._24_4_ * auVar26._24_4_ * 4.656613e-10 + auVar23._24_4_;
      auVar34._28_4_ = fVar7 + auVar23._28_4_;
      uVar17 = (ulonglong)(uint)(auStack_e0._28_4_ << 3);
      pfVar1 = (float *)(param_3 + (ulonglong)uVar16 * 4);
      auVar33._0_4_ = auVar22._0_4_ * auVar24._0_4_ * 4.656613e-10 + *pfVar1;
      auVar33._4_4_ = auVar22._4_4_ * auVar24._4_4_ * 4.656613e-10 + pfVar1[1];
      auVar33._8_4_ = auVar22._8_4_ * auVar24._8_4_ * 4.656613e-10 + pfVar1[2];
      auVar33._12_4_ = auVar22._12_4_ * auVar24._12_4_ * 4.656613e-10 + pfVar1[3];
      auVar33._16_4_ = auVar22._16_4_ * auVar24._16_4_ * 4.656613e-10 + pfVar1[4];
      auVar33._20_4_ = auVar22._20_4_ * auVar24._20_4_ * 4.656613e-10 + pfVar1[5];
      auVar33._24_4_ = auVar22._24_4_ * auVar24._24_4_ * 4.656613e-10 + pfVar1[6];
      auVar33._28_4_ = fVar7 + pfVar1[7];
      auVar21 = vpaddq_avx2(auVar36,auStack_e0);
      auVar23 = vsubps_avx(*(int8_t (*) [32])(param_3 + 0x20 + uVar17 * 4),
                           *(int8_t (*) [32])(param_3 + uVar17 * 4));
      pfVar1 = (float *)(param_3 + uVar17 * 4);
      auVar22._0_4_ = auVar23._0_4_ * auVar6._0_4_ * 4.656613e-10 + *pfVar1;
      auVar22._4_4_ = auVar23._4_4_ * auVar6._4_4_ * 4.656613e-10 + pfVar1[1];
      auVar22._8_4_ = auVar23._8_4_ * auVar6._8_4_ * 4.656613e-10 + pfVar1[2];
      auVar22._12_4_ = auVar23._12_4_ * auVar6._12_4_ * 4.656613e-10 + pfVar1[3];
      auVar22._16_4_ = auVar23._16_4_ * auVar6._16_4_ * 4.656613e-10 + pfVar1[4];
      auVar22._20_4_ = auVar23._20_4_ * auVar6._20_4_ * 4.656613e-10 + pfVar1[5];
      auVar22._24_4_ = auVar23._24_4_ * auVar6._24_4_ * 4.656613e-10 + pfVar1[6];
      auVar22._28_4_ = fVar7 + pfVar1[7];
      in_ZMM2 = ZEXT3264(auVar22);
      auVar23 = vmovntps_avx(auVar35);
      *param_1 = auVar23;
      auVar23 = vmovntps_avx(auVar34);
      param_1[1] = auVar23;
      auVar24 = _DAT_180980ca0;
      auVar23 = vmovntps_avx(auVar33);
      param_1[2] = auVar23;
      auVar26 = _DAT_180a40840;
      auVar23 = vmovntps_avx(auVar22);
      param_1[3] = auVar23;
      param_1 = param_1 + 4;
      iVar19 = iVar19 + -1;
      auVar23 = auVar15;
    } while (iVar19 != 0);
    *param_4 = auVar21._0_8_;
  }
  for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
    uVar2 = (int32_t)*param_4;
    auVar24._4_4_ = uVar2;
    auVar24._0_4_ = uVar2;
    auVar24._8_4_ = uVar2;
    auVar24._12_4_ = uVar2;
    auVar24._16_4_ = uVar2;
    auVar24._20_4_ = uVar2;
    auVar24._24_4_ = uVar2;
    auVar24._28_4_ = uVar2;
    uVar17 = (ulonglong)(uint)(*(int *)((longlong)param_4 + 4) << 3);
    auVar21 = vpsrld_avx2(auVar24,1);
    auVar21 = vcvtdq2ps_avx(auVar21);
    auVar23 = vsubps_avx(*(int8_t (*) [32])(param_3 + 0x20 + uVar17 * 4),
                         *(int8_t (*) [32])(param_3 + uVar17 * 4));
    fVar25 = auVar21._0_4_ * 4.656613e-10 * auVar23._0_4_;
    fVar27 = auVar21._4_4_ * 4.656613e-10 * auVar23._4_4_;
    fVar28 = auVar21._8_4_ * 4.656613e-10 * auVar23._8_4_;
    fVar29 = auVar21._12_4_ * 4.656613e-10 * auVar23._12_4_;
    fVar30 = auVar21._16_4_ * 4.656613e-10 * auVar23._16_4_;
    fVar31 = auVar21._20_4_ * 4.656613e-10 * auVar23._20_4_;
    fVar7 = in_ZMM2._28_4_;
    fVar32 = auVar21._24_4_ * 4.656613e-10 * auVar23._24_4_;
    in_ZMM2 = ZEXT3264(CONCAT428(fVar7,CONCAT424(fVar32,CONCAT420(fVar31,CONCAT416(fVar30,CONCAT412(
                                                  fVar29,CONCAT48(fVar28,CONCAT44(fVar27,fVar25)))))
                                                )));
    pfVar1 = (float *)(param_3 + uVar17 * 4);
    fVar8 = pfVar1[1];
    fVar9 = pfVar1[2];
    fVar10 = pfVar1[3];
    fVar11 = pfVar1[4];
    fVar12 = pfVar1[5];
    fVar13 = pfVar1[6];
    fVar14 = pfVar1[7];
    *(float *)*param_1 = fVar25 + *pfVar1;
    *(float *)(*param_1 + 4) = fVar27 + fVar8;
    *(float *)(*param_1 + 8) = fVar28 + fVar9;
    *(float *)(*param_1 + 0xc) = fVar29 + fVar10;
    *(float *)(*param_1 + 0x10) = fVar30 + fVar11;
    *(float *)(*param_1 + 0x14) = fVar31 + fVar12;
    *(float *)(*param_1 + 0x18) = fVar32 + fVar13;
    *(float *)(*param_1 + 0x1c) = fVar7 + fVar14;
    *param_4 = *param_4 + *param_5;
    param_1 = param_1 + 1;
  }
                    // WARNING: Subroutine does not return
  *(uint64_t *)((longlong)puVar18 + -8) = 0x180836966;
  FUN_1808fc050(auStack_b8[0] ^ (ulonglong)auStack_b8);
}



// WARNING: Removing unreachable block (ram,0x000180836c0f)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1808369c0(int8_t (*param_1) [32],uint param_2,longlong param_3,uint *param_4,
void FUN_1808369c0(int8_t (*param_1) [32],uint param_2,longlong param_3,uint *param_4,
                  longlong *param_5)

{
  longlong lVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  int8_t auVar5 [32];
  ulonglong uVar6;
  int8_t auVar7 [32];
  int iVar8;
  int32_t uVar9;
  int iVar10;
  int iVar11;
  int8_t auVar12 [16];
  int8_t auVar13 [16];
  int8_t auVar14 [32];
  int8_t auVar15 [32];
  int8_t auVar16 [32];
  int8_t auVar17 [16];
  int8_t auVar18 [32];
  int8_t auVar19 [32];
  int8_t auVar20 [32];
  int8_t auVar21 [32];
  int8_t auVar22 [32];
  int8_t auVar23 [32];
  
  uVar6 = (ulonglong)param_1 & 0x1f;
  auVar7 = _DAT_180980c40;
  while ((_DAT_180980c40 = auVar7, uVar6 != 0 && (param_2 != 0))) {
    param_2 = param_2 - 1;
    fVar2 = *(float *)(param_3 + (ulonglong)param_4[1] * 4);
    auVar13 = vfmadd213ss_fma(SUB6416(ZEXT464(0x30000000),0),
                              ZEXT416((uint)((*(float *)(param_3 + (ulonglong)(param_4[1] + 1) * 4)
                                             - fVar2) * (float)(*param_4 >> 1))),
                              ZEXT416((uint)fVar2));
    *(int *)*param_1 = auVar13._0_4_;
    param_1 = (int8_t (*) [32])(*param_1 + 4);
    *(longlong *)param_4 = *(longlong *)param_4 + *param_5;
    uVar6 = (ulonglong)param_1 & 0x1f;
    auVar7 = _DAT_180980c40;
  }
  iVar11 = (int)param_2 >> 3;
  if (iVar11 != 0) {
    lVar3 = *param_5;
    lVar4 = *(longlong *)param_4;
    iVar10 = (int)lVar3;
    auVar13 = vpinsrd_avx((int8_t  [16])0x0,iVar10,1);
    lVar1 = lVar3 * 8;
    auVar12 = vpinsrd_avx(ZEXT416((uint)(iVar10 * 4)),iVar10 * 5,1);
    uVar9 = (int32_t)lVar4;
    iVar8 = iVar10 * 8;
    auVar13 = vpinsrd_avx(auVar13,iVar10 * 2,2);
    auVar13 = vpinsrd_avx(auVar13,iVar10 * 3,3);
    auVar19._8_8_ = lVar4;
    auVar19._0_8_ = lVar4;
    auVar19._16_8_ = lVar4;
    auVar19._24_8_ = lVar4;
    auVar12 = vpinsrd_avx(auVar12,iVar10 * 6,2);
    auVar12 = vpinsrd_avx(auVar12,iVar10 * 7,3);
    auVar14._16_16_ = auVar12;
    auVar14._0_16_ = auVar13;
    auVar13 = vpinsrq_avx((int8_t  [16])0x0,lVar3,1);
    auVar18._4_4_ = uVar9;
    auVar18._0_4_ = uVar9;
    auVar18._8_4_ = uVar9;
    auVar18._12_4_ = uVar9;
    auVar18._16_4_ = uVar9;
    auVar18._20_4_ = uVar9;
    auVar18._24_4_ = uVar9;
    auVar18._28_4_ = uVar9;
    auVar14 = vpaddd_avx2(auVar14,auVar18);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = lVar3 * 2;
    auVar12 = vpinsrq_avx(auVar12,lVar3 * 3,1);
    auVar15._16_16_ = auVar12;
    auVar15._0_16_ = auVar13;
    auVar15 = vpaddq_avx2(auVar15,auVar19);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = lVar3 * 6;
    auVar13 = vpinsrq_avx(auVar13,lVar3 * 7,1);
    auVar17._8_8_ = 0;
    auVar17._0_8_ = lVar3 * 4;
    auVar12 = vpinsrq_avx(auVar17,lVar3 * 5,1);
    auVar16._16_16_ = auVar13;
    auVar16._0_16_ = auVar12;
    auVar16 = vpaddq_avx2(auVar16,auVar19);
    auVar22._8_8_ = lVar1;
    auVar22._0_8_ = lVar1;
    auVar22._16_8_ = lVar1;
    auVar22._24_8_ = lVar1;
    auVar23._4_4_ = iVar8;
    auVar23._0_4_ = iVar8;
    auVar23._8_4_ = iVar8;
    auVar23._12_4_ = iVar8;
    auVar23._16_4_ = iVar8;
    auVar23._20_4_ = iVar8;
    auVar23._24_4_ = iVar8;
    auVar23._28_4_ = iVar8;
    do {
      auVar5 = vpermd_avx2(auVar7,auVar16);
      auVar18 = vpermd_avx2(auVar7,auVar15);
      vperm2i128_avx2(auVar18,auVar5,0x20);
      auVar18 = vpcmpeqb_avx2(auVar18,auVar18);
      auVar21 = vpsrld_avx2(auVar14,1);
      auVar14 = vpaddd_avx2(auVar14,auVar23);
      auVar20 = vgatherdps(auVar19,auVar18);
      auVar18 = vpcmpeqb_avx2((int8_t  [32])0x0,(int8_t  [32])0x0);
      auVar18 = vgatherdps(auVar5,auVar18);
      auVar5 = vsubps_avx(auVar18,auVar20);
      auVar18 = vcvtdq2ps_avx(auVar21);
      auVar19._0_4_ = auVar5._0_4_ * auVar18._0_4_ * 4.656613e-10 + auVar20._0_4_;
      auVar19._4_4_ = auVar5._4_4_ * auVar18._4_4_ * 4.656613e-10 + auVar20._4_4_;
      auVar19._8_4_ = auVar5._8_4_ * auVar18._8_4_ * 4.656613e-10 + auVar20._8_4_;
      auVar19._12_4_ = auVar5._12_4_ * auVar18._12_4_ * 4.656613e-10 + auVar20._12_4_;
      auVar19._16_4_ = auVar5._16_4_ * auVar18._16_4_ * 4.656613e-10 + auVar20._16_4_;
      auVar19._20_4_ = auVar5._20_4_ * auVar18._20_4_ * 4.656613e-10 + auVar20._20_4_;
      auVar19._24_4_ = auVar5._24_4_ * auVar18._24_4_ * 4.656613e-10 + auVar20._24_4_;
      auVar19._28_4_ = auVar5._28_4_ + auVar20._28_4_;
      auVar18 = vmovntps_avx(auVar19);
      *param_1 = auVar18;
      param_1 = param_1 + 1;
      auVar15 = vpaddq_avx2(auVar15,auVar22);
      auVar16 = vpaddq_avx2(auVar16,auVar22);
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    *(longlong *)param_4 = auVar15._0_8_;
  }
  for (param_2 = param_2 & 7; param_2 != 0; param_2 = param_2 - 1) {
                    // WARNING: Read-only address (ram,0x000180980c40) is written
    fVar2 = *(float *)(param_3 + (ulonglong)param_4[1] * 4);
    auVar13 = vfmadd213ss_fma(SUB6416(ZEXT464(0x30000000),0),
                              ZEXT416((uint)((*(float *)(param_3 + (ulonglong)(param_4[1] + 1) * 4)
                                             - fVar2) * (float)(*param_4 >> 1))),
                              ZEXT416((uint)fVar2));
    *(int *)*param_1 = auVar13._0_4_;
    *(longlong *)param_4 = *(longlong *)param_4 + *param_5;
    param_1 = (int8_t (*) [32])(*param_1 + 4);
  }
                    // WARNING: Read-only address (ram,0x000180980c40) is written
  return;
}



// WARNING: Removing unreachable block (ram,0x000180836c0f)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1808369de(int8_t (*param_1) [32],uint param_2,longlong param_3,uint *param_4)
void FUN_1808369de(int8_t (*param_1) [32],uint param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  int8_t auVar5 [32];
  ulonglong uVar6;
  int8_t auVar7 [32];
  int iVar8;
  int32_t uVar9;
  uint *unaff_RDI;
  int iVar10;
  int iVar11;
  longlong *unaff_R15;
  int8_t auVar12 [16];
  int8_t auVar13 [16];
  int8_t auVar14 [32];
  int8_t auVar15 [32];
  int8_t auVar16 [32];
  int8_t auVar17 [16];
  int8_t auVar18 [32];
  int8_t auVar19 [32];
  int8_t auVar20 [32];
  int8_t auVar21 [32];
  int8_t auVar22 [32];
  int8_t auVar23 [32];
  
  uVar6 = (ulonglong)param_1 & 0x1f;
  auVar7 = _DAT_180980c40;
  while ((_DAT_180980c40 = auVar7, uVar6 != 0 && (param_2 != 0))) {
    param_2 = param_2 - 1;
    fVar2 = *(float *)(param_3 + (ulonglong)param_4[1] * 4);
    auVar13 = vfmadd213ss_fma(SUB6416(ZEXT464(0x30000000),0),
                              ZEXT416((uint)((*(float *)(param_3 + (ulonglong)(param_4[1] + 1) * 4)
                                             - fVar2) * (float)(*param_4 >> 1))),
                              ZEXT416((uint)fVar2));
    *(int *)*param_1 = auVar13._0_4_;
    param_1 = (int8_t (*) [32])(*param_1 + 4);
    *(longlong *)param_4 = *(longlong *)param_4 + *unaff_R15;
    uVar6 = (ulonglong)param_1 & 0x1f;
    auVar7 = _DAT_180980c40;
  }
  iVar11 = (int)param_2 >> 3;
  if (iVar11 != 0) {
    lVar3 = *unaff_R15;
    lVar4 = *(longlong *)param_4;
    iVar10 = (int)lVar3;
    auVar13 = vpinsrd_avx((int8_t  [16])0x0,iVar10,1);
    lVar1 = lVar3 * 8;
    auVar12 = vpinsrd_avx(ZEXT416((uint)(iVar10 * 4)),iVar10 * 5,1);
    uVar9 = (int32_t)lVar4;
    iVar8 = iVar10 * 8;
    auVar13 = vpinsrd_avx(auVar13,iVar10 * 2,2);
    auVar13 = vpinsrd_avx(auVar13,iVar10 * 3,3);
    auVar19._8_8_ = lVar4;
    auVar19._0_8_ = lVar4;
    auVar19._16_8_ = lVar4;
    auVar19._24_8_ = lVar4;
    auVar12 = vpinsrd_avx(auVar12,iVar10 * 6,2);
    auVar12 = vpinsrd_avx(auVar12,iVar10 * 7,3);
    auVar14._16_16_ = auVar12;
    auVar14._0_16_ = auVar13;
    auVar13 = vpinsrq_avx((int8_t  [16])0x0,lVar3,1);
    auVar18._4_4_ = uVar9;
    auVar18._0_4_ = uVar9;
    auVar18._8_4_ = uVar9;
    auVar18._12_4_ = uVar9;
    auVar18._16_4_ = uVar9;
    auVar18._20_4_ = uVar9;
    auVar18._24_4_ = uVar9;
    auVar18._28_4_ = uVar9;
    auVar14 = vpaddd_avx2(auVar14,auVar18);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = lVar3 * 2;
    auVar12 = vpinsrq_avx(auVar12,lVar3 * 3,1);
    auVar15._16_16_ = auVar12;
    auVar15._0_16_ = auVar13;
    auVar15 = vpaddq_avx2(auVar15,auVar19);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = lVar3 * 6;
    auVar13 = vpinsrq_avx(auVar13,lVar3 * 7,1);
    auVar17._8_8_ = 0;
    auVar17._0_8_ = lVar3 * 4;
    auVar12 = vpinsrq_avx(auVar17,lVar3 * 5,1);
    auVar16._16_16_ = auVar13;
    auVar16._0_16_ = auVar12;
    auVar16 = vpaddq_avx2(auVar16,auVar19);
    auVar22._8_8_ = lVar1;
    auVar22._0_8_ = lVar1;
    auVar22._16_8_ = lVar1;
    auVar22._24_8_ = lVar1;
    auVar23._4_4_ = iVar8;
    auVar23._0_4_ = iVar8;
    auVar23._8_4_ = iVar8;
    auVar23._12_4_ = iVar8;
    auVar23._16_4_ = iVar8;
    auVar23._20_4_ = iVar8;
    auVar23._24_4_ = iVar8;
    auVar23._28_4_ = iVar8;
    do {
      auVar5 = vpermd_avx2(auVar7,auVar16);
      auVar18 = vpermd_avx2(auVar7,auVar15);
      vperm2i128_avx2(auVar18,auVar5,0x20);
      auVar18 = vpcmpeqb_avx2(auVar18,auVar18);
      auVar21 = vpsrld_avx2(auVar14,1);
      auVar14 = vpaddd_avx2(auVar14,auVar23);
      auVar20 = vgatherdps(auVar19,auVar18);
      auVar18 = vpcmpeqb_avx2((int8_t  [32])0x0,(int8_t  [32])0x0);
      auVar18 = vgatherdps(auVar5,auVar18);
      auVar5 = vsubps_avx(auVar18,auVar20);
      auVar18 = vcvtdq2ps_avx(auVar21);
      auVar19._0_4_ = auVar5._0_4_ * auVar18._0_4_ * 4.656613e-10 + auVar20._0_4_;
      auVar19._4_4_ = auVar5._4_4_ * auVar18._4_4_ * 4.656613e-10 + auVar20._4_4_;
      auVar19._8_4_ = auVar5._8_4_ * auVar18._8_4_ * 4.656613e-10 + auVar20._8_4_;
      auVar19._12_4_ = auVar5._12_4_ * auVar18._12_4_ * 4.656613e-10 + auVar20._12_4_;
      auVar19._16_4_ = auVar5._16_4_ * auVar18._16_4_ * 4.656613e-10 + auVar20._16_4_;
      auVar19._20_4_ = auVar5._20_4_ * auVar18._20_4_ * 4.656613e-10 + auVar20._20_4_;
      auVar19._24_4_ = auVar5._24_4_ * auVar18._24_4_ * 4.656613e-10 + auVar20._24_4_;
      auVar19._28_4_ = auVar5._28_4_ + auVar20._28_4_;
      auVar18 = vmovntps_avx(auVar19);
      *param_1 = auVar18;
      param_1 = param_1 + 1;
      auVar15 = vpaddq_avx2(auVar15,auVar22);
      auVar16 = vpaddq_avx2(auVar16,auVar22);
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    *(longlong *)unaff_RDI = auVar15._0_8_;
  }
  for (param_2 = param_2 & 7; param_2 != 0; param_2 = param_2 - 1) {
                    // WARNING: Read-only address (ram,0x000180980c40) is written
    fVar2 = *(float *)(param_3 + (ulonglong)unaff_RDI[1] * 4);
    auVar13 = vfmadd213ss_fma(SUB6416(ZEXT464(0x30000000),0),
                              ZEXT416((uint)((*(float *)(param_3 + (ulonglong)(unaff_RDI[1] + 1) * 4
                                                        ) - fVar2) * (float)(*unaff_RDI >> 1))),
                              ZEXT416((uint)fVar2));
    *(int *)*param_1 = auVar13._0_4_;
    *(longlong *)unaff_RDI = *(longlong *)unaff_RDI + *unaff_R15;
    param_1 = (int8_t (*) [32])(*param_1 + 4);
  }
                    // WARNING: Read-only address (ram,0x000180980c40) is written
  return;
}



// WARNING: Removing unreachable block (ram,0x000180836c0f)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180836a6a(uint64_t param_1)
void FUN_180836a6a(uint64_t param_1)

{
  longlong lVar1;
  float fVar2;
  int8_t auVar3 [32];
  int iVar4;
  int8_t auVar5 [32];
  int iVar6;
  int32_t uVar7;
  int8_t (*unaff_RBX) [32];
  uint unaff_ESI;
  uint uVar8;
  uint *unaff_RDI;
  longlong in_R11;
  int unaff_R12D;
  longlong unaff_R14;
  longlong *unaff_R15;
  int8_t auVar9 [16];
  int8_t auVar10 [16];
  int8_t auVar11 [32];
  int8_t auVar12 [32];
  int8_t auVar13 [32];
  int8_t auVar14 [16];
  int8_t auVar15 [32];
  int8_t in_ZMM1 [64];
  int8_t auVar16 [32];
  int8_t auVar17 [32];
  int8_t auVar18 [32];
  int8_t in_XMM5 [16];
  int8_t auVar19 [32];
  int8_t auVar20 [32];
  
  auVar5 = _DAT_180980c40;
  lVar1 = in_R11 * 8;
  iVar4 = (int)in_R11;
  auVar10 = vpinsrd_avx(ZEXT416((uint)(iVar4 * 4)),iVar4 * 5,1);
  uVar7 = (int32_t)param_1;
  iVar6 = iVar4 * 8;
  auVar9 = vpinsrd_avx(in_ZMM1._0_16_,iVar4 * 2,2);
  auVar9 = vpinsrd_avx(auVar9,iVar4 * 3,3);
  auVar16._8_8_ = param_1;
  auVar16._0_8_ = param_1;
  auVar16._16_8_ = param_1;
  auVar16._24_8_ = param_1;
  auVar10 = vpinsrd_avx(auVar10,iVar4 * 6,2);
  auVar10 = vpinsrd_avx(auVar10,iVar4 * 7,3);
  auVar11._16_16_ = auVar10;
  auVar11._0_16_ = auVar9;
  auVar10 = vpinsrq_avx((int8_t  [16])0x0,in_R11,1);
  auVar15._4_4_ = uVar7;
  auVar15._0_4_ = uVar7;
  auVar15._8_4_ = uVar7;
  auVar15._12_4_ = uVar7;
  auVar15._16_4_ = uVar7;
  auVar15._20_4_ = uVar7;
  auVar15._24_4_ = uVar7;
  auVar15._28_4_ = uVar7;
  auVar11 = vpaddd_avx2(auVar11,auVar15);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = in_R11 * 2;
  auVar9 = vpinsrq_avx(auVar9,in_R11 * 3,1);
  auVar12._16_16_ = auVar9;
  auVar12._0_16_ = auVar10;
  auVar12 = vpaddq_avx2(auVar12,auVar16);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = in_R11 * 6;
  auVar10 = vpinsrq_avx(auVar10,in_R11 * 7,1);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = in_R11 * 4;
  auVar9 = vpinsrq_avx(auVar14,in_R11 * 5,1);
  auVar13._16_16_ = auVar10;
  auVar13._0_16_ = auVar9;
  auVar13 = vpaddq_avx2(auVar13,auVar16);
  auVar19._8_8_ = lVar1;
  auVar19._0_8_ = lVar1;
  auVar19._16_8_ = lVar1;
  auVar19._24_8_ = lVar1;
  auVar20._4_4_ = iVar6;
  auVar20._0_4_ = iVar6;
  auVar20._8_4_ = iVar6;
  auVar20._12_4_ = iVar6;
  auVar20._16_4_ = iVar6;
  auVar20._20_4_ = iVar6;
  auVar20._24_4_ = iVar6;
  auVar20._28_4_ = iVar6;
  do {
    auVar3 = vpermd_avx2(auVar5,auVar13);
    auVar15 = vpermd_avx2(auVar5,auVar12);
    vperm2i128_avx2(auVar15,auVar3,0x20);
    auVar15 = vpcmpeqb_avx2(auVar15,auVar15);
    auVar18 = vpsrld_avx2(auVar11,1);
    auVar11 = vpaddd_avx2(auVar11,auVar20);
    auVar17 = vgatherdps(auVar16,auVar15);
    auVar15 = vpcmpeqb_avx2((int8_t  [32])0x0,(int8_t  [32])0x0);
    auVar15 = vgatherdps(auVar3,auVar15);
    auVar3 = vsubps_avx(auVar15,auVar17);
    auVar15 = vcvtdq2ps_avx(auVar18);
    auVar16._0_4_ = auVar3._0_4_ * auVar15._0_4_ * 4.656613e-10 + auVar17._0_4_;
    auVar16._4_4_ = auVar3._4_4_ * auVar15._4_4_ * 4.656613e-10 + auVar17._4_4_;
    auVar16._8_4_ = auVar3._8_4_ * auVar15._8_4_ * 4.656613e-10 + auVar17._8_4_;
    auVar16._12_4_ = auVar3._12_4_ * auVar15._12_4_ * 4.656613e-10 + auVar17._12_4_;
    auVar16._16_4_ = auVar3._16_4_ * auVar15._16_4_ * 4.656613e-10 + auVar17._16_4_;
    auVar16._20_4_ = auVar3._20_4_ * auVar15._20_4_ * 4.656613e-10 + auVar17._20_4_;
    auVar16._24_4_ = auVar3._24_4_ * auVar15._24_4_ * 4.656613e-10 + auVar17._24_4_;
    auVar16._28_4_ = auVar3._28_4_ + auVar17._28_4_;
    auVar15 = vmovntps_avx(auVar16);
    *unaff_RBX = auVar15;
    unaff_RBX = unaff_RBX + 1;
    auVar12 = vpaddq_avx2(auVar12,auVar19);
    auVar13 = vpaddq_avx2(auVar13,auVar19);
    unaff_R12D = unaff_R12D + -1;
  } while (unaff_R12D != 0);
  *(longlong *)unaff_RDI = auVar12._0_8_;
  for (uVar8 = unaff_ESI & 7; uVar8 != 0; uVar8 = uVar8 - 1) {
                    // WARNING: Read-only address (ram,0x000180980c40) is written
    fVar2 = *(float *)(unaff_R14 + (ulonglong)unaff_RDI[1] * 4);
    auVar10 = vfmadd213ss_fma(in_XMM5,ZEXT416((uint)((*(float *)(unaff_R14 +
                                                                (ulonglong)(unaff_RDI[1] + 1) * 4) -
                                                     fVar2) * (float)(*unaff_RDI >> 1))),
                              ZEXT416((uint)fVar2));
    *(int *)*unaff_RBX = auVar10._0_4_;
    *(longlong *)unaff_RDI = *(longlong *)unaff_RDI + *unaff_R15;
    unaff_RBX = (int8_t (*) [32])(*unaff_RBX + 4);
  }
                    // WARNING: Read-only address (ram,0x000180980c40) is written
  return;
}





// 函数: void FUN_180836c1f(void)
void FUN_180836c1f(void)

{
  float fVar1;
  int8_t auVar2 [16];
  int32_t *unaff_RBX;
  uint unaff_ESI;
  uint uVar3;
  uint *unaff_RDI;
  longlong unaff_R14;
  longlong *unaff_R15;
  int8_t in_XMM5 [16];
  
  for (uVar3 = unaff_ESI & 7; uVar3 != 0; uVar3 = uVar3 - 1) {
    fVar1 = *(float *)(unaff_R14 + (ulonglong)unaff_RDI[1] * 4);
    auVar2 = vfmadd213ss_fma(in_XMM5,ZEXT416((uint)((*(float *)(unaff_R14 +
                                                               (ulonglong)(unaff_RDI[1] + 1) * 4) -
                                                    fVar1) * (float)(*unaff_RDI >> 1))),
                             ZEXT416((uint)fVar1));
    *unaff_RBX = auVar2._0_4_;
    *(longlong *)unaff_RDI = *(longlong *)unaff_RDI + *unaff_R15;
    unaff_RBX = unaff_RBX + 1;
  }
  return;
}





// 函数: void FUN_180836c30(void)
void FUN_180836c30(void)

{
  float fVar1;
  int8_t auVar2 [16];
  int32_t *unaff_RBX;
  int unaff_ESI;
  uint *unaff_RDI;
  longlong unaff_R14;
  longlong *unaff_R15;
  int8_t in_XMM5 [16];
  
  do {
    fVar1 = *(float *)(unaff_R14 + (ulonglong)unaff_RDI[1] * 4);
    auVar2 = vfmadd213ss_fma(in_XMM5,ZEXT416((uint)((*(float *)(unaff_R14 +
                                                               (ulonglong)(unaff_RDI[1] + 1) * 4) -
                                                    fVar1) * (float)(*unaff_RDI >> 1))),
                             ZEXT416((uint)fVar1));
    *unaff_RBX = auVar2._0_4_;
    *(longlong *)unaff_RDI = *(longlong *)unaff_RDI + *unaff_R15;
    unaff_ESI = unaff_ESI + -1;
    unaff_RBX = unaff_RBX + 1;
  } while (unaff_ESI != 0);
  return;
}



// WARNING: Removing unreachable block (ram,0x000180836f10)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



