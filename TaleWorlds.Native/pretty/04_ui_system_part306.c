#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part306.c - 3 个函数

// 函数: void FUN_180836c90(float *param_1,uint param_2,int64_t param_3,uint *param_4,int64_t *param_5)
void FUN_180836c90(float *param_1,uint param_2,int64_t param_3,uint *param_4,int64_t *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int64_t lVar7;
  int64_t lVar8;
  int8_t auVar9 [32];
  int8_t auVar10 [32];
  float fVar11;
  int8_t auVar12 [16];
  int8_t auVar13 [32];
  int8_t auVar14 [32];
  int8_t auVar15 [32];
  int8_t auVar16 [32];
  uint64_t uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint64_t *puVar21;
  float *pfVar22;
  int8_t auVar23 [16];
  int8_t auVar24 [32];
  int8_t auVar25 [32];
  int8_t auVar26 [32];
  int8_t auVar27 [32];
  int8_t auVar28 [32];
  int8_t auStack_d8 [24];
  int8_t auStack_c0 [32];
  uint64_t auStack_98 [18];
  
  puVar21 = auStack_98;
  auStack_98[0] = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_98;
  uVar17 = (uint64_t)param_1 & 0x1f;
  while ((uVar17 != 0 && (param_2 != 0))) {
    param_2 = param_2 - 1;
    fVar11 = (float)(*param_4 >> 1) * 4.656613e-10;
    uVar19 = param_4[1] * 4;
    fVar1 = *(float *)(param_3 + (uint64_t)(uVar19 + 1) * 4);
    fVar2 = *(float *)(param_3 + (uint64_t)(uVar19 + 2) * 4);
    fVar3 = *(float *)(param_3 + (uint64_t)(uVar19 + 3) * 4);
    fVar4 = *(float *)(param_3 + (uint64_t)(uVar19 + 5) * 4);
    fVar5 = *(float *)(param_3 + (uint64_t)(uVar19 + 6) * 4);
    fVar6 = *(float *)(param_3 + (uint64_t)(uVar19 + 7) * 4);
    auVar23 = vfmadd213ss_fma(ZEXT416((uint)fVar11),
                              ZEXT416((uint)(*(float *)(param_3 + (uint64_t)(uVar19 + 4) * 4) -
                                            *(float *)(param_3 + (uint64_t)uVar19 * 4))),
                              ZEXT416(*(uint *)(param_3 + (uint64_t)uVar19 * 4)));
    *param_1 = auVar23._0_4_;
    auVar23 = vfmadd213ss_fma(ZEXT416((uint)fVar11),ZEXT416((uint)(fVar4 - fVar1)),
                              ZEXT416((uint)fVar1));
    param_1[1] = auVar23._0_4_;
    auVar23 = vfmadd213ss_fma(ZEXT416((uint)fVar11),ZEXT416((uint)(fVar5 - fVar2)),
                              ZEXT416((uint)fVar2));
    param_1[2] = auVar23._0_4_;
    auVar23 = vfmadd213ss_fma(ZEXT416((uint)fVar11),ZEXT416((uint)(fVar6 - fVar3)),
                              ZEXT416((uint)fVar3));
    param_1[3] = auVar23._0_4_;
    param_1 = param_1 + 4;
    *(int64_t *)param_4 = *(int64_t *)param_4 + *param_5;
    uVar17 = (uint64_t)param_1 & 0x1f;
  }
  iVar20 = (int)param_2 >> 2;
  if (iVar20 != 0) {
    lVar8 = *param_5;
    uVar19 = *param_4;
    auVar25._4_4_ = uVar19;
    auVar25._0_4_ = uVar19;
    auVar25._8_4_ = uVar19;
    auVar25._12_4_ = uVar19;
    auVar25._16_4_ = uVar19;
    auVar25._20_4_ = uVar19;
    auVar25._24_4_ = uVar19;
    auVar25._28_4_ = uVar19;
    lVar7 = *(int64_t *)param_4;
    auVar26._8_8_ = lVar7;
    auVar26._0_8_ = lVar7;
    auVar26._16_8_ = lVar7;
    auVar26._24_8_ = lVar7;
    lVar7 = lVar8 * 4;
    uVar19 = (uint)lVar8;
    auVar23 = vpinsrd_avx(ZEXT416(uVar19),uVar19,1);
    auVar23 = vpinsrd_avx(auVar23,uVar19,2);
    auVar23 = vpinsrd_avx(auVar23,uVar19,3);
    auVar25 = vpaddd_avx2(ZEXT1632(auVar23) << 0x80,auVar25);
    iVar18 = uVar19 * 2;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = lVar8 * 2;
    auVar23 = vpinsrq_avx(auVar23,lVar8 * 3,1);
    auVar12 = vpinsrq_avx((int8_t  [16])0x0,lVar8,1);
    auVar24._16_16_ = auVar23;
    auVar24._0_16_ = auVar12;
    auVar24 = vpaddq_avx2(auVar24,auVar26);
    auVar28._8_8_ = lVar7;
    auVar28._0_8_ = lVar7;
    auVar28._16_8_ = lVar7;
    auVar28._24_8_ = lVar7;
    auVar27._4_4_ = iVar18;
    auVar27._0_4_ = iVar18;
    auVar27._8_4_ = iVar18;
    auVar27._12_4_ = iVar18;
    auVar27._16_4_ = iVar18;
    auVar27._20_4_ = iVar18;
    auVar27._24_4_ = iVar18;
    auVar27._28_4_ = iVar18;
    puVar21 = (uint64_t *)auStack_d8;
    do {
      auStack_c0 = auVar24;
      auVar24 = vpsrld_avx2(auVar25,1);
      auVar9 = vcvtdq2ps_avx(auVar24);
      auVar25 = vpaddd_avx2(auVar25,auVar27);
      auVar24 = vpsrld_avx2(auVar25,1);
      auVar10 = vcvtdq2ps_avx(auVar24);
      auVar26 = *(int8_t (*) [32])(param_3 + (uint64_t)(uint)(auStack_c0._4_4_ << 2) * 4);
      auVar25 = vpaddd_avx2(auVar25,auVar27);
      auVar24 = vpaddq_avx2(auVar28,auStack_c0);
      auVar14 = vperm2f128_avx(auVar26,*(int8_t (*) [32])
                                        (param_3 + (uint64_t)(uint)(auStack_c0._12_4_ << 2) * 4),
                               0x20);
      auVar26 = vperm2f128_avx(auVar26,*(int8_t (*) [32])
                                        (param_3 + (uint64_t)(uint)(auStack_c0._12_4_ << 2) * 4),
                               0x31);
      auVar13 = vsubps_avx(auVar26,auVar14);
      auVar26 = *(int8_t (*) [32])(param_3 + (uint64_t)(uint)(auStack_c0._20_4_ << 2) * 4);
      auVar15 = vperm2f128_avx(auVar26,*(int8_t (*) [32])
                                        (param_3 + (uint64_t)(uint)(auStack_c0._28_4_ << 2) * 4),
                               0x20);
      auVar16 = vperm2f128_avx(auVar26,*(int8_t (*) [32])
                                        (param_3 + (uint64_t)(uint)(auStack_c0._28_4_ << 2) * 4),
                               0x31);
      auVar16 = vsubps_avx(auVar16,auVar15);
      *param_1 = auVar13._0_4_ * auVar9._0_4_ * 4.656613e-10 + auVar14._0_4_;
      param_1[1] = auVar13._4_4_ * auVar9._4_4_ * 4.656613e-10 + auVar14._4_4_;
      param_1[2] = auVar13._8_4_ * auVar9._8_4_ * 4.656613e-10 + auVar14._8_4_;
      param_1[3] = auVar13._12_4_ * auVar9._12_4_ * 4.656613e-10 + auVar14._12_4_;
      param_1[4] = auVar13._16_4_ * auVar9._16_4_ * 4.656613e-10 + auVar14._16_4_;
      param_1[5] = auVar13._20_4_ * auVar9._20_4_ * 4.656613e-10 + auVar14._20_4_;
      param_1[6] = auVar13._24_4_ * auVar9._24_4_ * 4.656613e-10 + auVar14._24_4_;
      param_1[7] = auVar26._28_4_ + auVar14._28_4_;
      param_1[8] = auVar16._0_4_ * auVar10._0_4_ * 4.656613e-10 + auVar15._0_4_;
      param_1[9] = auVar16._4_4_ * auVar10._4_4_ * 4.656613e-10 + auVar15._4_4_;
      param_1[10] = auVar16._8_4_ * auVar10._8_4_ * 4.656613e-10 + auVar15._8_4_;
      param_1[0xb] = auVar16._12_4_ * auVar10._12_4_ * 4.656613e-10 + auVar15._12_4_;
      param_1[0xc] = auVar16._16_4_ * auVar10._16_4_ * 4.656613e-10 + auVar15._16_4_;
      param_1[0xd] = auVar16._20_4_ * auVar10._20_4_ * 4.656613e-10 + auVar15._20_4_;
      param_1[0xe] = auVar16._24_4_ * auVar10._24_4_ * 4.656613e-10 + auVar15._24_4_;
      param_1[0xf] = auVar26._28_4_ + auVar15._28_4_;
      param_1 = param_1 + 0x10;
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
    *(int64_t *)param_4 = auVar24._0_8_;
  }
  param_2 = param_2 & 3;
  if (param_2 != 0) {
    pfVar22 = param_1 + 2;
    do {
      fVar11 = (float)(*param_4 >> 1) * 4.656613e-10;
      uVar19 = param_4[1] * 4;
      fVar1 = *(float *)(param_3 + (uint64_t)(uVar19 + 1) * 4);
      fVar2 = *(float *)(param_3 + (uint64_t)(uVar19 + 2) * 4);
      fVar3 = *(float *)(param_3 + (uint64_t)(uVar19 + 3) * 4);
      fVar4 = *(float *)(param_3 + (uint64_t)(uVar19 + 5) * 4);
      fVar5 = *(float *)(param_3 + (uint64_t)(uVar19 + 6) * 4);
      fVar6 = *(float *)(param_3 + (uint64_t)(uVar19 + 7) * 4);
      auVar23 = vfmadd213ss_fma(ZEXT416((uint)fVar11),
                                ZEXT416((uint)(*(float *)(param_3 + (uint64_t)(uVar19 + 4) * 4) -
                                              *(float *)(param_3 + (uint64_t)uVar19 * 4))),
                                ZEXT416(*(uint *)(param_3 + (uint64_t)uVar19 * 4)));
      pfVar22[-2] = auVar23._0_4_;
      auVar23 = vfmadd213ss_fma(ZEXT416((uint)fVar11),ZEXT416((uint)(fVar4 - fVar1)),
                                ZEXT416((uint)fVar1));
      pfVar22[-1] = auVar23._0_4_;
      auVar23 = vfmadd213ss_fma(ZEXT416((uint)fVar11),ZEXT416((uint)(fVar5 - fVar2)),
                                ZEXT416((uint)fVar2));
      *pfVar22 = auVar23._0_4_;
      auVar23 = vfmadd213ss_fma(ZEXT416((uint)fVar11),ZEXT416((uint)(fVar6 - fVar3)),
                                ZEXT416((uint)fVar3));
      pfVar22[1] = auVar23._0_4_;
      *(int64_t *)param_4 = *(int64_t *)param_4 + *param_5;
      param_2 = param_2 - 1;
      pfVar22 = pfVar22 + 4;
    } while (param_2 != 0);
  }
                    // WARNING: Subroutine does not return
  *(uint64_t *)((int64_t)puVar21 + -8) = 0x180837005;
  FUN_1808fc050(auStack_98[0] ^ (uint64_t)auStack_98);
}



// WARNING: Removing unreachable block (ram,0x00018083721a)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180837050(float *param_1,uint param_2,int64_t param_3,uint *param_4,int64_t *param_5)
void FUN_180837050(float *param_1,uint param_2,int64_t param_3,uint *param_4,int64_t *param_5)

{
  float fVar1;
  float fVar2;
  int64_t lVar3;
  int64_t lVar4;
  int8_t auVar5 [32];
  int8_t auVar6 [32];
  int8_t auVar7 [32];
  int8_t auVar8 [32];
  int8_t auVar9 [32];
  uint64_t uVar10;
  uint uVar11;
  int8_t auVar12 [32];
  uint64_t *puVar13;
  int iVar14;
  int8_t auVar15 [16];
  int8_t auVar16 [32];
  int8_t auVar17 [32];
  int8_t auVar18 [16];
  int8_t auVar19 [32];
  int8_t auStack_b8 [24];
  int8_t auStack_a0 [32];
  uint64_t auStack_78 [14];
  
  puVar13 = auStack_78;
  auStack_78[0] = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_78;
  uVar10 = (uint64_t)param_1 & 0x1f;
  auVar12 = ui_system_memory_config;
                    // WARNING: Read-only address (ram,0x000180980c60) is written
  while ((ui_system_memory_config = auVar12, uVar10 != 0 && (param_2 != 0))) {
    param_2 = param_2 - 1;
    auVar18 = ZEXT416((uint)((float)(*param_4 >> 1) * 4.656613e-10));
    uVar11 = param_4[1] * 2;
    fVar1 = *(float *)(param_3 + (uint64_t)(uVar11 + 1) * 4);
    fVar2 = *(float *)(param_3 + (uint64_t)(uVar11 + 3) * 4);
    auVar15 = vfmadd213ss_fma(auVar18,ZEXT416((uint)(*(float *)(param_3 +
                                                               (uint64_t)(uVar11 + 2) * 4) -
                                                    *(float *)(param_3 + (uint64_t)uVar11 * 4))),
                              ZEXT416(*(uint *)(param_3 + (uint64_t)uVar11 * 4)));
    *param_1 = auVar15._0_4_;
    auVar15 = vfmadd213ss_fma(auVar18,ZEXT416((uint)(fVar2 - fVar1)),ZEXT416((uint)fVar1));
    param_1[1] = auVar15._0_4_;
    param_1 = param_1 + 2;
    *(int64_t *)param_4 = *(int64_t *)param_4 + *param_5;
    uVar10 = (uint64_t)param_1 & 0x1f;
    auVar12 = ui_system_memory_config;
  }
  iVar14 = (int)param_2 >> 2;
  if (iVar14 != 0) {
    lVar4 = *param_5;
    lVar3 = *(int64_t *)param_4;
    auVar17._8_8_ = lVar3;
    auVar17._0_8_ = lVar3;
    auVar17._16_8_ = lVar3;
    auVar17._24_8_ = lVar3;
    lVar3 = lVar4 * 4;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = lVar4 * 2;
    auVar15 = vpinsrq_avx(auVar15,lVar4 * 3,1);
    auVar18 = vpinsrq_avx((int8_t  [16])0x0,lVar4,1);
    auVar16._16_16_ = auVar15;
    auVar16._0_16_ = auVar18;
    auVar16 = vpaddq_avx2(auVar16,auVar17);
    auVar19._8_8_ = lVar3;
    auVar19._0_8_ = lVar3;
    auVar19._16_8_ = lVar3;
    auVar19._24_8_ = lVar3;
    puVar13 = (uint64_t *)auStack_b8;
    do {
      auStack_a0 = auVar16;
      auVar9 = vpermd_avx2(auVar12,auStack_a0);
      auVar16 = vpaddq_avx2(auVar19,auStack_a0);
      auVar17 = *(int8_t (*) [32])(param_3 + (uint64_t)(uint)(auStack_a0._4_4_ * 2) * 4);
      auVar7 = vpunpcklqdq_avx2(auVar17,*(int8_t (*) [32])
                                         (param_3 + (uint64_t)(uint)(auStack_a0._12_4_ * 2) * 4));
      auVar5 = vpunpckhqdq_avx2(auVar17,*(int8_t (*) [32])
                                         (param_3 + (uint64_t)(uint)(auStack_a0._12_4_ * 2) * 4));
      auVar17 = *(int8_t (*) [32])(param_3 + (uint64_t)(uint)(auStack_a0._20_4_ * 2) * 4);
      auVar8 = vpunpcklqdq_avx2(auVar17,*(int8_t (*) [32])
                                         (param_3 + (uint64_t)(uint)(auStack_a0._28_4_ * 2) * 4));
      auVar6 = vpunpckhqdq_avx2(auVar17,*(int8_t (*) [32])
                                         (param_3 + (uint64_t)(uint)(auStack_a0._28_4_ * 2) * 4));
      auVar7 = vperm2f128_avx(auVar7,auVar8,0x20);
      auVar17 = vpsrld_avx2(auVar9,1);
      auVar17 = vcvtdq2ps_avx(auVar17);
      auVar5 = vperm2f128_avx(auVar5,auVar6,0x20);
      auVar5 = vsubps_avx(auVar5,auVar7);
      *param_1 = auVar17._0_4_ * 4.656613e-10 * auVar5._0_4_ + auVar7._0_4_;
      param_1[1] = auVar17._4_4_ * 4.656613e-10 * auVar5._4_4_ + auVar7._4_4_;
      param_1[2] = auVar17._8_4_ * 4.656613e-10 * auVar5._8_4_ + auVar7._8_4_;
      param_1[3] = auVar17._12_4_ * 4.656613e-10 * auVar5._12_4_ + auVar7._12_4_;
      param_1[4] = auVar17._16_4_ * 4.656613e-10 * auVar5._16_4_ + auVar7._16_4_;
      param_1[5] = auVar17._20_4_ * 4.656613e-10 * auVar5._20_4_ + auVar7._20_4_;
      param_1[6] = auVar17._24_4_ * 4.656613e-10 * auVar5._24_4_ + auVar7._24_4_;
      param_1[7] = auVar17._28_4_ + auVar7._28_4_;
      param_1 = param_1 + 8;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    *(int64_t *)param_4 = auVar16._0_8_;
  }
  for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
    auVar18 = ZEXT416((uint)((float)(*param_4 >> 1) * 4.656613e-10));
    uVar11 = param_4[1] * 2;
    fVar1 = *(float *)(param_3 + (uint64_t)(uVar11 + 1) * 4);
    fVar2 = *(float *)(param_3 + (uint64_t)(uVar11 + 3) * 4);
    auVar15 = vfmadd213ss_fma(auVar18,ZEXT416((uint)(*(float *)(param_3 +
                                                               (uint64_t)(uVar11 + 2) * 4) -
                                                    *(float *)(param_3 + (uint64_t)uVar11 * 4))),
                              ZEXT416(*(uint *)(param_3 + (uint64_t)uVar11 * 4)));
    *param_1 = auVar15._0_4_;
    auVar15 = vfmadd213ss_fma(auVar18,ZEXT416((uint)(fVar2 - fVar1)),ZEXT416((uint)fVar1));
    param_1[1] = auVar15._0_4_;
    *(int64_t *)param_4 = *(int64_t *)param_4 + *param_5;
    param_1 = param_1 + 2;
  }
                    // WARNING: Subroutine does not return
  *(uint64_t *)((int64_t)puVar13 + -8) = 0x1808372ac;
  FUN_1808fc050(auStack_78[0] ^ (uint64_t)auStack_78);
}



// WARNING: Removing unreachable block (ram,0x00018083774d)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1808372e0(float *param_1,uint param_2,int64_t param_3,uint *param_4,int64_t *param_5)
void FUN_1808372e0(float *param_1,uint param_2,int64_t param_3,uint *param_4,int64_t *param_5)

{
  int64_t lVar1;
  int8_t auVar2 [16];
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int64_t lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int8_t auVar16 [32];
  int8_t auVar17 [32];
  int8_t auVar18 [32];
  int8_t auVar19 [32];
  int8_t auVar20 [32];
  int8_t auVar21 [32];
  uint64_t uVar22;
  uint uVar23;
  int8_t auVar24 [32];
  int8_t *puVar25;
  int iVar26;
  int8_t auVar27 [16];
  int8_t auVar28 [16];
  int8_t auVar29 [32];
  int8_t auVar30 [32];
  int8_t auVar31 [32];
  int8_t auVar32 [16];
  int8_t auVar33 [16];
  int8_t auVar34 [16];
  int8_t auStack_168 [8];
  int8_t auStack_160 [32];
  int8_t auStack_128 [8];
  int8_t auStack_120 [32];
  int64_t lStack_100;
  int64_t lStack_f8;
  int64_t lStack_f0;
  int64_t lStack_e8;
  uint64_t uStack_e0;
  
  puVar25 = auStack_128;
  uStack_e0 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_128;
  uVar22 = (uint64_t)param_1 & 0x1f;
                    // WARNING: Read-only address (ram,0x000180980be0) is written
                    // WARNING: Read-only address (ram,0x000180980c20) is written
                    // WARNING: Read-only address (ram,0x000180980c80) is written
  for (; (uVar22 != 0 && (param_2 != 0)); param_2 = param_2 - 1) {
    fVar9 = (float)(*param_4 >> 1) * 4.656613e-10;
    uVar23 = param_4[1] * 6;
    fVar10 = (float)(int)*(short *)(param_3 + (uint64_t)uVar23 * 2) * 3.0517578e-05;
    fVar11 = (float)(int)*(short *)(param_3 + (uint64_t)(uVar23 + 1) * 2) * 3.0517578e-05;
    fVar12 = (float)(int)*(short *)(param_3 + (uint64_t)(uVar23 + 2) * 2) * 3.0517578e-05;
    fVar13 = (float)(int)*(short *)(param_3 + (uint64_t)(uVar23 + 3) * 2) * 3.0517578e-05;
    fVar14 = (float)(int)*(short *)(param_3 + (uint64_t)(uVar23 + 4) * 2) * 3.0517578e-05;
    fVar15 = (float)(int)*(short *)(param_3 + (uint64_t)(uVar23 + 5) * 2) * 3.0517578e-05;
    sVar3 = *(short *)(param_3 + (uint64_t)(uVar23 + 7) * 2);
    sVar4 = *(short *)(param_3 + (uint64_t)(uVar23 + 8) * 2);
    sVar5 = *(short *)(param_3 + (uint64_t)(uVar23 + 9) * 2);
    sVar6 = *(short *)(param_3 + (uint64_t)(uVar23 + 10) * 2);
    sVar7 = *(short *)(param_3 + (uint64_t)(uVar23 + 0xb) * 2);
    *param_1 = ((float)(int)*(short *)(param_3 + (uint64_t)(uVar23 + 6) * 2) * 3.0517578e-05 -
               fVar10) * fVar9 + fVar10;
    param_1[1] = ((float)(int)sVar3 * 3.0517578e-05 - fVar11) * fVar9 + fVar11;
    param_1[2] = ((float)(int)sVar4 * 3.0517578e-05 - fVar12) * fVar9 + fVar12;
    param_1[3] = ((float)(int)sVar5 * 3.0517578e-05 - fVar13) * fVar9 + fVar13;
    param_1[4] = ((float)(int)sVar6 * 3.0517578e-05 - fVar14) * fVar9 + fVar14;
    param_1[5] = ((float)(int)sVar7 * 3.0517578e-05 - fVar15) * fVar9 + fVar15;
    *(int64_t *)param_4 = *(int64_t *)param_4 + *param_5;
    param_1 = param_1 + 6;
    uVar22 = (uint64_t)param_1 & 0x1f;
  }
  iVar26 = (int)param_2 >> 2;
  if (iVar26 != 0) {
    lVar8 = *param_5;
    lVar1 = *(int64_t *)param_4;
    auVar30._8_8_ = lVar1;
    auVar30._0_8_ = lVar1;
    auVar30._16_8_ = lVar1;
    auVar30._24_8_ = lVar1;
    lStack_100 = lVar8 * 4;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = lVar8 * 2;
    auVar28 = vpinsrq_avx(auVar28,lVar8 * 3,1);
    auVar33 = vpinsrq_avx((int8_t  [16])0x0,lVar8,1);
    auVar29._16_16_ = auVar28;
    auVar29._0_16_ = auVar33;
    auStack_120 = vpaddq_avx2(auVar29,auVar30);
    puVar25 = auStack_168;
    do {
      auStack_160 = auStack_120;
      auVar30 = vpermd_avx2(ui_system_memory_config,auStack_160);
      auVar29 = vpermd_avx2(ui_system_memory_config,auStack_160);
      auVar29 = vpsrld_avx2(auVar29,1);
      auVar29 = vcvtdq2ps_avx(auVar29);
      auVar31 = vpermd_avx2(ui_system_memory_config,auStack_160);
      auVar30 = vpsrld_avx2(auVar30,1);
      auVar30 = vcvtdq2ps_avx(auVar30);
      auVar31 = vpsrld_avx2(auVar31,1);
      auVar31 = vcvtdq2ps_avx(auVar31);
      auVar28 = *(int8_t (*) [16])(param_3 + (uint64_t)(uint)(auStack_160._12_4_ * 6) * 2);
      auVar33 = *(int8_t (*) [16])
                 (param_3 + 0xc + (uint64_t)(uint)(auStack_160._12_4_ * 6) * 2);
      auVar27 = vpslldq_avx(auVar28,0xc);
      auVar27 = vpblendd_avx2(*(int8_t (*) [16])
                               (param_3 + (uint64_t)(uint)(auStack_160._4_4_ * 6) * 2),auVar27,8);
      auVar16 = vpmovsxwd_avx2(auVar27);
      auVar16 = vcvtdq2ps_avx(auVar16);
      auVar27 = vpslldq_avx(auVar33,0xc);
      auVar32 = vpblendd_avx2(*(int8_t (*) [16])
                               (param_3 + 0xc + (uint64_t)(uint)(auStack_160._4_4_ * 6) * 2),
                              auVar27,8);
      auVar27 = *(int8_t (*) [16])(param_3 + (uint64_t)(uint)(auStack_160._20_4_ * 6) * 2);
      auVar2 = *(int8_t (*) [16])(param_3 + 0xc + (uint64_t)(uint)(auStack_160._20_4_ * 6) * 2)
      ;
      auVar17 = vpmovsxwd_avx2(auVar32);
      auVar28 = vpsrldq_avx(auVar28,4);
      auVar17 = vcvtdq2ps_avx(auVar17);
      auVar34 = vpslldq_avx(auVar2,8);
      auVar32 = vpslldq_avx(auVar27,8);
      auVar28 = vpblendd_avx2(auVar28,auVar32,0xc);
      auVar18 = vpmovsxwd_avx2(auVar28);
      auVar18 = vcvtdq2ps_avx(auVar18);
      auVar28 = vpsrldq_avx(auVar33,4);
      auVar28 = vpblendd_avx2(auVar28,auVar34,0xc);
      auVar19 = vpmovsxwd_avx2(auVar28);
      auVar33 = vpslldq_avx(*(int8_t (*) [16])
                             (param_3 + (uint64_t)(uint)(auStack_160._28_4_ * 6) * 2),4);
      auVar19 = vcvtdq2ps_avx(auVar19);
      auVar28 = vpsrldq_avx(auVar27,8);
      auVar28 = vpblendd_avx2(auVar28,auVar33,0xe);
      auVar20 = vpmovsxwd_avx2(auVar28);
      auVar20 = vcvtdq2ps_avx(auVar20);
      auVar28 = vpsrldq_avx(auVar2,8);
      auVar33 = vpslldq_avx(*(int8_t (*) [16])
                             (param_3 + 0xc + (uint64_t)(uint)(auStack_160._28_4_ * 6) * 2),4);
      auVar28 = vpblendd_avx2(auVar28,auVar33,0xe);
      auVar21 = vpmovsxwd_avx2(auVar28);
      auVar21 = vcvtdq2ps_avx(auVar21);
      auVar17 = vsubps_avx(auVar17,auVar16);
      auVar19 = vsubps_avx(auVar19,auVar18);
      auVar21 = vsubps_avx(auVar21,auVar20);
      auVar24._8_8_ = lStack_100;
      auVar24._0_8_ = lStack_100;
      auVar24._16_8_ = lStack_100;
      auVar24._24_8_ = lStack_100;
      auStack_120 = vpaddq_avx2(auStack_160,auVar24);
      *param_1 = (auVar17._0_4_ * auVar29._0_4_ * 4.656613e-10 + auVar16._0_4_) * 3.0517578e-05;
      param_1[1] = (auVar17._4_4_ * auVar29._4_4_ * 4.656613e-10 + auVar16._4_4_) * 3.0517578e-05;
      param_1[2] = (auVar17._8_4_ * auVar29._8_4_ * 4.656613e-10 + auVar16._8_4_) * 3.0517578e-05;
      param_1[3] = (auVar17._12_4_ * auVar29._12_4_ * 4.656613e-10 + auVar16._12_4_) * 3.0517578e-05
      ;
      param_1[4] = (auVar17._16_4_ * auVar29._16_4_ * 4.656613e-10 + auVar16._16_4_) * 3.0517578e-05
      ;
      param_1[5] = (auVar17._20_4_ * auVar29._20_4_ * 4.656613e-10 + auVar16._20_4_) * 3.0517578e-05
      ;
      param_1[6] = (auVar17._24_4_ * auVar29._24_4_ * 4.656613e-10 + auVar16._24_4_) * 3.0517578e-05
      ;
      param_1[7] = auVar21._28_4_;
      auVar16._4_4_ = (auVar19._4_4_ * auVar30._4_4_ * 4.656613e-10 + auVar18._4_4_) * 3.0517578e-05
      ;
      auVar16._0_4_ = (auVar19._0_4_ * auVar30._0_4_ * 4.656613e-10 + auVar18._0_4_) * 3.0517578e-05
      ;
      auVar16._8_4_ = (auVar19._8_4_ * auVar30._8_4_ * 4.656613e-10 + auVar18._8_4_) * 3.0517578e-05
      ;
      auVar16._12_4_ =
           (auVar19._12_4_ * auVar30._12_4_ * 4.656613e-10 + auVar18._12_4_) * 3.0517578e-05;
      auVar16._16_4_ =
           (auVar19._16_4_ * auVar30._16_4_ * 4.656613e-10 + auVar18._16_4_) * 3.0517578e-05;
      auVar16._20_4_ =
           (auVar19._20_4_ * auVar30._20_4_ * 4.656613e-10 + auVar18._20_4_) * 3.0517578e-05;
      auVar16._24_4_ =
           (auVar19._24_4_ * auVar30._24_4_ * 4.656613e-10 + auVar18._24_4_) * 3.0517578e-05;
      auVar16._28_4_ = 0;
      *(int8_t (*) [32])(param_1 + 8) = auVar16;
      param_1[0x10] = (auVar21._0_4_ * auVar31._0_4_ * 4.656613e-10 + auVar20._0_4_) * 3.0517578e-05
      ;
      param_1[0x11] = (auVar21._4_4_ * auVar31._4_4_ * 4.656613e-10 + auVar20._4_4_) * 3.0517578e-05
      ;
      param_1[0x12] = (auVar21._8_4_ * auVar31._8_4_ * 4.656613e-10 + auVar20._8_4_) * 3.0517578e-05
      ;
      param_1[0x13] =
           (auVar21._12_4_ * auVar31._12_4_ * 4.656613e-10 + auVar20._12_4_) * 3.0517578e-05;
      param_1[0x14] =
           (auVar21._16_4_ * auVar31._16_4_ * 4.656613e-10 + auVar20._16_4_) * 3.0517578e-05;
      param_1[0x15] =
           (auVar21._20_4_ * auVar31._20_4_ * 4.656613e-10 + auVar20._20_4_) * 3.0517578e-05;
      param_1[0x16] =
           (auVar21._24_4_ * auVar31._24_4_ * 4.656613e-10 + auVar20._24_4_) * 3.0517578e-05;
      param_1[0x17] = auVar18._28_4_ + 0.0;
      param_1 = param_1 + 0x18;
      iVar26 = iVar26 + -1;
    } while (iVar26 != 0);
    *(int64_t *)param_4 = auStack_120._0_8_;
    lStack_f8 = lStack_100;
    lStack_f0 = lStack_100;
    lStack_e8 = lStack_100;
  }
  param_2 = param_2 & 3;
  if (param_2 != 0) {
    param_1 = param_1 + 2;
    do {
      fVar9 = (float)(*param_4 >> 1) * 4.656613e-10;
      uVar23 = param_4[1] * 6;
      fVar10 = (float)(int)*(short *)(param_3 + (uint64_t)uVar23 * 2) * 3.0517578e-05;
      fVar11 = (float)(int)*(short *)(param_3 + (uint64_t)(uVar23 + 1) * 2) * 3.0517578e-05;
      fVar12 = (float)(int)*(short *)(param_3 + (uint64_t)(uVar23 + 2) * 2) * 3.0517578e-05;
      fVar13 = (float)(int)*(short *)(param_3 + (uint64_t)(uVar23 + 3) * 2) * 3.0517578e-05;
      fVar14 = (float)(int)*(short *)(param_3 + (uint64_t)(uVar23 + 4) * 2) * 3.0517578e-05;
      fVar15 = (float)(int)*(short *)(param_3 + (uint64_t)(uVar23 + 5) * 2) * 3.0517578e-05;
      sVar3 = *(short *)(param_3 + (uint64_t)(uVar23 + 7) * 2);
      sVar4 = *(short *)(param_3 + (uint64_t)(uVar23 + 8) * 2);
      sVar5 = *(short *)(param_3 + (uint64_t)(uVar23 + 9) * 2);
      sVar6 = *(short *)(param_3 + (uint64_t)(uVar23 + 10) * 2);
      sVar7 = *(short *)(param_3 + (uint64_t)(uVar23 + 0xb) * 2);
      param_1[-2] = ((float)(int)*(short *)(param_3 + (uint64_t)(uVar23 + 6) * 2) * 3.0517578e-05 -
                    fVar10) * fVar9 + fVar10;
      param_1[-1] = ((float)(int)sVar3 * 3.0517578e-05 - fVar11) * fVar9 + fVar11;
      *param_1 = ((float)(int)sVar4 * 3.0517578e-05 - fVar12) * fVar9 + fVar12;
      param_1[1] = ((float)(int)sVar5 * 3.0517578e-05 - fVar13) * fVar9 + fVar13;
      param_1[2] = ((float)(int)sVar6 * 3.0517578e-05 - fVar14) * fVar9 + fVar14;
      param_1[3] = ((float)(int)sVar7 * 3.0517578e-05 - fVar15) * fVar9 + fVar15;
      param_1 = param_1 + 6;
      *(int64_t *)param_4 = *(int64_t *)param_4 + *param_5;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
                    // WARNING: Subroutine does not return
  *(uint64_t *)(puVar25 + -8) = 0x180837925;
  FUN_1808fc050(uStack_e0 ^ (uint64_t)auStack_128);
}



// WARNING: Removing unreachable block (ram,0x000180837b6c)
// WARNING: Removing unreachable block (ram,0x000180837b28)
// WARNING: Removing unreachable block (ram,0x000180837afe)
// WARNING: Removing unreachable block (ram,0x000180837b46)
// WARNING: Removing unreachable block (ram,0x000180837c22)
// WARNING: Removing unreachable block (ram,0x000180837c60)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



