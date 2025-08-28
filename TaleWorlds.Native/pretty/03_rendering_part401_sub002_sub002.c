#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part401_sub002_sub002.c - 1 个函数

// 函数: void FUN_18048f210(int64_t param_1,float *param_2,int param_3)
void FUN_18048f210(int64_t param_1,float *param_2,int param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int32_t uVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
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
  int64_t lVar19;
  float *pfVar20;
  int8_t (*pauVar21) [16];
  uint64_t uVar22;
  int64_t lVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  int64_t lVar27;
  int8_t auVar28 [32];
  int8_t auVar29 [32];
  int8_t auVar30 [32];
  int8_t auVar31 [32];
  int8_t in_ZMM0 [64];
  int8_t auVar32 [64];
  int8_t auVar33 [32];
  int8_t auVar34 [16];
  int8_t auVar35 [16];
  int8_t auVar36 [32];
  int8_t auVar37 [32];
  int8_t auVar38 [32];
  int8_t auVar39 [32];
  int8_t auVar40 [16];
  int8_t auVar41 [16];
  int8_t auVar42 [16];
  int8_t auVar43 [16];
  int8_t auVar44 [16];
  int8_t auVar45 [32];
  int8_t in_ZMM6 [64];
  float fVar49;
  int8_t auVar46 [16];
  int8_t auVar47 [32];
  int8_t auVar48 [64];
  int8_t auVar50 [16];
  int8_t auVar51 [16];
  int8_t auVar52 [32];
  int8_t auVar53 [16];
  int8_t auVar54 [32];
  int8_t in_ZMM9 [64];
  int8_t auVar55 [64];
  int8_t auStack_438 [24];
  uint uStack_420;
  int8_t auStack_410 [16];
  int8_t auStack_400 [16];
  int8_t auStack_3f0 [16];
  int8_t auStack_3e0 [16];
  int8_t auStack_3d0 [16];
  int8_t auStack_3c0 [16];
  int8_t auStack_3b0 [16];
  int8_t auStack_3a0 [16];
  int8_t auStack_390 [16];
  int8_t auStack_380 [16];
  int8_t auStack_370 [16];
  int8_t auStack_360 [16];
  int8_t auStack_350 [16];
  int8_t aauStack_340 [2] [16];
  int8_t auStack_320 [32];
  float fStack_300;
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  int8_t auStack_2e0 [32];
  int8_t auStack_2c0 [32];
  int8_t auStack_2a0 [32];
  int8_t auStack_280 [32];
  int8_t auStack_260 [32];
  int8_t auStack_240 [32];
  int8_t auStack_220 [32];
  int8_t auStack_200 [32];
  int8_t auStack_1e0 [4];
  float afStack_1dc [6];
  float fStack_1c4;
  int8_t auStack_1c0 [4];
  float afStack_1bc [6];
  float fStack_1a4;
  int8_t auStack_1a0 [4];
  float afStack_19c [6];
  float fStack_184;
  int8_t auStack_180 [16];
  int8_t auStack_170 [16];
  int8_t auStack_160 [16];
  int8_t auStack_150 [32];
  int8_t auStack_130 [96];
  uint64_t uStack_d0;
  int8_t auStack_58 [16];
  int8_t auStack_28 [16];
  
  auStack_28 = in_ZMM6._0_16_;
  auStack_58 = in_ZMM9._0_16_;
  uStack_d0 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_438;
  fVar49 = *param_2;
  fVar5 = param_2[1];
  fVar8 = param_2[2];
  lVar27 = (int64_t)param_3;
  fVar9 = param_2[4];
  fVar10 = param_2[5];
  fVar11 = param_2[6];
  pauVar21 = (int8_t (*) [16])auStack_130;
  auVar55._16_48_ = in_ZMM9._16_48_;
  auVar55._0_16_ = render_system_memory;
  pfVar20 = *(float **)(param_1 + 0x1e8 + lVar27 * 8);
  lVar19 = 0;
  fVar12 = pfVar20[0xc];
  fVar13 = pfVar20[0xd];
  fVar14 = pfVar20[0xe];
  fVar15 = pfVar20[0xf];
  lVar23 = 2;
  auVar48._16_48_ = in_ZMM0._16_48_;
  afStack_1dc[0] = pfVar20[1] * fVar49;
  auStack_1e0 = (int8_t  [4])(*pfVar20 * fVar49);
  afStack_1dc[1] = pfVar20[2] * fVar49;
  afStack_1dc[2] = pfVar20[3] * fVar49;
  afStack_1dc[3] = *pfVar20 * fVar9;
  afStack_1dc[4] = pfVar20[1] * fVar9;
  afStack_1dc[5] = pfVar20[2] * fVar9;
  fStack_1c4 = pfVar20[3] * fVar9;
  afStack_1bc[0] = pfVar20[5] * fVar5;
  auStack_1c0 = (int8_t  [4])(pfVar20[4] * fVar5);
  afStack_1bc[1] = pfVar20[6] * fVar5;
  afStack_1bc[2] = pfVar20[7] * fVar5;
  afStack_1bc[3] = pfVar20[4] * fVar10;
  afStack_1bc[4] = pfVar20[5] * fVar10;
  afStack_1bc[5] = pfVar20[6] * fVar10;
  fStack_1a4 = pfVar20[7] * fVar10;
  afStack_19c[0] = pfVar20[9] * fVar8;
  auStack_1a0 = (int8_t  [4])(pfVar20[8] * fVar8);
  afStack_19c[1] = pfVar20[10] * fVar8;
  afStack_19c[2] = pfVar20[0xb] * fVar8;
  afStack_19c[3] = pfVar20[8] * fVar11;
  afStack_19c[4] = pfVar20[9] * fVar11;
  afStack_19c[5] = pfVar20[10] * fVar11;
  fStack_184 = pfVar20[0xb] * fVar11;
  auVar42 = render_system_memory;
  auVar46 = render_system_memory;
  do {
    lVar1 = (uint64_t)*(uint *)(&memory_allocator_3920_ptr + lVar19) * 0x10;
    lVar2 = (uint64_t)*(uint *)(&memory_allocator_3856_ptr + lVar19) * 0x10;
    lVar3 = (uint64_t)*(uint *)(&memory_allocator_3888_ptr + lVar19) * 0x10;
    auVar43._0_4_ =
         *(float *)(auStack_1e0 + lVar1) + fVar12 + *(float *)(auStack_1c0 + lVar2) +
         *(float *)(auStack_1a0 + lVar3);
    auVar43._4_4_ =
         *(float *)(auStack_1e0 + lVar1 + 4) + fVar13 + *(float *)(auStack_1c0 + lVar2 + 4) +
         *(float *)(auStack_1a0 + lVar3 + 4);
    auVar43._8_4_ =
         *(float *)(auStack_1e0 + lVar1 + 8) + fVar14 + *(float *)(auStack_1c0 + lVar2 + 8) +
         *(float *)(auStack_1a0 + lVar3 + 8);
    auVar43._12_4_ =
         *(float *)(auStack_1e0 + lVar1 + 0xc) + fVar15 + *(float *)(auStack_1c0 + lVar2 + 0xc) +
         *(float *)(auStack_1a0 + lVar3 + 0xc);
    lVar1 = (uint64_t)*(uint *)(&memory_allocator_3924_ptr + lVar19) * 0x10;
    fVar49 = *(float *)(auStack_1e0 + lVar1);
    fVar5 = *(float *)(auStack_1e0 + lVar1 + 4);
    fVar8 = *(float *)(auStack_1e0 + lVar1 + 8);
    fVar9 = *(float *)(auStack_1e0 + lVar1 + 0xc);
    auVar44._4_4_ = auVar43._12_4_;
    auVar44._0_4_ = auVar43._12_4_;
    auVar44._8_4_ = auVar43._12_4_;
    auVar44._12_4_ = auVar43._12_4_;
    auVar44 = divps(auVar43,auVar44);
    lVar1 = (uint64_t)*(uint *)(&memory_allocator_3860_ptr + lVar19) * 0x10;
    fVar10 = *(float *)(auStack_1c0 + lVar1);
    fVar11 = *(float *)(auStack_1c0 + lVar1 + 4);
    fVar16 = *(float *)(auStack_1c0 + lVar1 + 8);
    fVar17 = *(float *)(auStack_1c0 + lVar1 + 0xc);
    uVar26 = *(uint *)(&memory_allocator_3892_ptr + lVar19);
    pauVar21[-2] = auVar44;
    auVar50 = minps(auVar42,auVar44);
    lVar1 = (uint64_t)uVar26 * 0x10;
    auVar41._0_4_ = fVar49 + fVar12 + fVar10 + *(float *)(auStack_1a0 + lVar1);
    auVar41._4_4_ = fVar5 + fVar13 + fVar11 + *(float *)(auStack_1a0 + lVar1 + 4);
    auVar41._8_4_ = fVar8 + fVar14 + fVar16 + *(float *)(auStack_1a0 + lVar1 + 8);
    auVar41._12_4_ = fVar9 + fVar15 + fVar17 + *(float *)(auStack_1a0 + lVar1 + 0xc);
    auVar46 = maxps(auVar46,auVar44);
    lVar1 = (uint64_t)*(uint *)(&memory_allocator_3928_ptr + lVar19) * 0x10;
    fVar49 = *(float *)(auStack_1e0 + lVar1);
    fVar5 = *(float *)(auStack_1e0 + lVar1 + 4);
    fVar8 = *(float *)(auStack_1e0 + lVar1 + 8);
    fVar9 = *(float *)(auStack_1e0 + lVar1 + 0xc);
    auVar42._4_4_ = auVar41._12_4_;
    auVar42._0_4_ = auVar41._12_4_;
    auVar42._8_4_ = auVar41._12_4_;
    auVar42._12_4_ = auVar41._12_4_;
    auVar42 = divps(auVar41,auVar42);
    lVar1 = (uint64_t)*(uint *)(&memory_allocator_3864_ptr + lVar19) * 0x10;
    fVar10 = *(float *)(auStack_1c0 + lVar1);
    fVar11 = *(float *)(auStack_1c0 + lVar1 + 4);
    fVar16 = *(float *)(auStack_1c0 + lVar1 + 8);
    fVar17 = *(float *)(auStack_1c0 + lVar1 + 0xc);
    uVar26 = *(uint *)(&memory_allocator_3896_ptr + lVar19);
    pauVar21[-1] = auVar42;
    auVar50 = minps(auVar50,auVar42);
    lVar1 = (uint64_t)uVar26 * 0x10;
    auVar40._0_4_ = fVar49 + fVar12 + fVar10 + *(float *)(auStack_1a0 + lVar1);
    auVar40._4_4_ = fVar5 + fVar13 + fVar11 + *(float *)(auStack_1a0 + lVar1 + 4);
    auVar40._8_4_ = fVar8 + fVar14 + fVar16 + *(float *)(auStack_1a0 + lVar1 + 8);
    auVar40._12_4_ = fVar9 + fVar15 + fVar17 + *(float *)(auStack_1a0 + lVar1 + 0xc);
    auVar44 = maxps(auVar46,auVar42);
    auVar46._4_4_ = auVar40._12_4_;
    auVar46._0_4_ = auVar40._12_4_;
    auVar46._8_4_ = auVar40._12_4_;
    auVar46._12_4_ = auVar40._12_4_;
    auVar42 = divps(auVar40,auVar46);
    lVar1 = (uint64_t)*(uint *)(&memory_allocator_3932_ptr + lVar19) * 0x10;
    fVar49 = *(float *)(auStack_1e0 + lVar1);
    fVar5 = *(float *)(auStack_1e0 + lVar1 + 4);
    fVar8 = *(float *)(auStack_1e0 + lVar1 + 8);
    fVar9 = *(float *)(auStack_1e0 + lVar1 + 0xc);
    uVar26 = *(uint *)(&memory_allocator_3868_ptr + lVar19);
    *pauVar21 = auVar42;
    auVar51 = minps(auVar50,auVar42);
    lVar1 = (uint64_t)uVar26 * 0x10;
    uVar26 = *(uint *)(&memory_allocator_3900_ptr + lVar19);
    auVar44 = maxps(auVar44,auVar42);
    lVar2 = (uint64_t)uVar26 * 0x10;
    auVar34._0_4_ =
         *(float *)(auStack_1a0 + lVar2) + *(float *)(auStack_1c0 + lVar1) + fVar49 + fVar12;
    auVar34._4_4_ =
         *(float *)(auStack_1a0 + lVar2 + 4) + *(float *)(auStack_1c0 + lVar1 + 4) + fVar5 + fVar13;
    auVar34._8_4_ =
         *(float *)(auStack_1a0 + lVar2 + 8) + *(float *)(auStack_1c0 + lVar1 + 8) + fVar8 + fVar14;
    auVar34._12_4_ =
         *(float *)(auStack_1a0 + lVar2 + 0xc) +
         *(float *)(auStack_1c0 + lVar1 + 0xc) + fVar9 + fVar15;
    auVar50._4_4_ = auVar34._12_4_;
    auVar50._0_4_ = auVar34._12_4_;
    auVar50._8_4_ = auVar34._12_4_;
    auVar50._12_4_ = auVar34._12_4_;
    auVar46 = divps(auVar34,auVar50);
    pauVar21[1] = auVar46;
    auVar53._0_4_ =
         -(uint)(auVar34._8_4_ <= auVar34._12_4_) &
         -(uint)(auVar40._8_4_ <= auVar40._12_4_) &
         -(uint)(auVar41._8_4_ <= auVar41._12_4_) &
         -(uint)(auVar43._8_4_ <= auVar43._12_4_) & auVar55._0_4_;
    auVar53._4_4_ =
         -(uint)(auVar34._8_4_ <= auVar34._12_4_) &
         -(uint)(auVar40._8_4_ <= auVar40._12_4_) &
         -(uint)(auVar41._8_4_ <= auVar41._12_4_) &
         -(uint)(auVar43._8_4_ <= auVar43._12_4_) & auVar55._4_4_;
    auVar53._8_4_ =
         -(uint)(auVar34._8_4_ <= auVar34._12_4_) &
         -(uint)(auVar40._8_4_ <= auVar40._12_4_) &
         -(uint)(auVar41._8_4_ <= auVar41._12_4_) &
         -(uint)(auVar43._8_4_ <= auVar43._12_4_) & auVar55._8_4_;
    auVar53._12_4_ =
         -(uint)(auVar34._8_4_ <= auVar34._12_4_) &
         -(uint)(auVar40._8_4_ <= auVar40._12_4_) &
         -(uint)(auVar41._8_4_ <= auVar41._12_4_) &
         -(uint)(auVar43._8_4_ <= auVar43._12_4_) & auVar55._12_4_;
    auVar55._0_16_ = auVar53;
    auVar42 = minps(auVar51,auVar46);
    lVar19 = lVar19 + 0x10;
    pauVar21 = pauVar21 + 4;
    auVar46 = maxps(auVar44,auVar46);
    lVar23 = lVar23 + -1;
  } while (lVar23 != 0);
  auVar35._4_4_ = movmskps(uVar26 * 2,auVar53);
  if (auVar35._4_4_ == 0xf) {
    auVar46 = minps(auVar46,render_system_memory);
    auVar42 = maxps(auVar42,render_system_memory);
    fVar49 = auVar46._8_4_;
    auVar51._4_4_ = -(uint)(auVar46._4_4_ < auVar42._4_4_);
    auVar51._0_4_ = -(uint)(auVar46._0_4_ < auVar42._0_4_);
    auVar51._8_4_ = -(uint)(fVar49 < auVar42._8_4_);
    auVar51._12_4_ = -(uint)(auVar46._12_4_ < auVar42._12_4_);
    auVar35._4_4_ = movmskps(0xf,auVar51);
    if (auVar35._4_4_ == 0) {
      auVar44 = ZEXT816(0);
      auVar32._4_4_ = fVar49;
      auVar32._0_4_ = fVar49;
      auVar35._0_4_ = (int)auVar42._0_4_ >> 3;
      auVar35._4_4_ = (int)auVar42._4_4_ >> 3;
      auVar35._8_4_ = (int)auVar46._0_4_ >> 3;
      auVar35._12_4_ = (int)auVar46._4_4_ >> 3;
      auStack_320._0_16_ = auVar35;
      auVar48._0_16_ = auVar35 >> 0x20;
      if (auVar35._4_4_ <= auVar35._12_4_) {
        iVar24 = auVar35._4_4_ * 0x50;
        do {
          iVar18 = iVar24;
          if (auVar35._0_4_ <= auVar35._8_4_) {
            uVar22 = (uint64_t)((auVar35._8_4_ - auVar35._0_4_) + 1);
            pfVar20 = (float *)(*(int64_t *)(param_1 + 600 + lVar27 * 8) + (int64_t)iVar24 * 4 +
                               (int64_t)auVar35._0_4_ * 4);
            do {
              auVar32._8_4_ = fVar49;
              auVar32._16_48_ = auVar48._16_48_;
              auVar32._12_4_ = fVar49;
              auVar48._4_60_ = auVar32._4_60_;
              auVar48._0_4_ = -(uint)(*pfVar20 <= fVar49);
              auVar44 = auVar44 | auVar48._0_16_;
              uVar22 = uVar22 - 1;
              pfVar20 = pfVar20 + 1;
              iVar18 = auVar35._0_4_;
            } while (uVar22 != 0);
          }
          iVar18 = movmskps(iVar18,auVar44);
          if (iVar18 != 0) {
            MXCSR = MXCSR | 0x8040;
            uVar26 = 0;
            do {
              uVar25 = uVar26 * 3;
              uVar7 = (uVar26 + 3) * 3;
              uVar6 = (uVar26 + 2) * 3;
              auVar42 = vshufps_avx(*(int8_t (*) [16])
                                     (auStack_150 +
                                     (uint64_t)*(uint *)(&memory_allocator_3712_ptr + (uint64_t)uVar25 * 4) *
                                     0x10),*(int8_t (*) [16])
                                            (auStack_150 +
                                            (uint64_t)
                                            *(uint *)(&memory_allocator_3712_ptr + (uint64_t)(uVar25 + 3) * 4)
                                            * 0x10),0x44);
              auVar46 = vshufps_avx(*(int8_t (*) [16])
                                     (auStack_150 +
                                     (uint64_t)*(uint *)(&memory_allocator_3712_ptr + (uint64_t)uVar25 * 4) *
                                     0x10),*(int8_t (*) [16])
                                            (auStack_150 +
                                            (uint64_t)
                                            *(uint *)(&memory_allocator_3712_ptr + (uint64_t)(uVar25 + 3) * 4)
                                            * 0x10),0xee);
              auVar44 = vshufps_avx(*(int8_t (*) [16])
                                     (auStack_150 +
                                     (uint64_t)*(uint *)(&memory_allocator_3712_ptr + (uint64_t)uVar6 * 4) *
                                     0x10),*(int8_t (*) [16])
                                            (auStack_150 +
                                            (uint64_t)
                                            *(uint *)(&memory_allocator_3712_ptr + (uint64_t)uVar7 * 4) * 0x10)
                                    ,0x44);
              auVar50 = vshufps_avx(*(int8_t (*) [16])
                                     (auStack_150 +
                                     (uint64_t)*(uint *)(&memory_allocator_3712_ptr + (uint64_t)uVar6 * 4) *
                                     0x10),*(int8_t (*) [16])
                                            (auStack_150 +
                                            (uint64_t)
                                            *(uint *)(&memory_allocator_3712_ptr + (uint64_t)uVar7 * 4) * 0x10)
                                    ,0xee);
              auVar34 = vshufps_avx(auVar42,auVar44,0x88);
              auVar42 = vshufps_avx(auVar42,auVar44,0xdd);
              auStack_180 = vshufps_avx(auVar46,auVar50,0x88);
              auVar46 = vcvtps2dq_avx(auVar34);
              auVar44 = vshufps_avx(*(int8_t (*) [16])
                                     (auStack_150 +
                                     (uint64_t)
                                     *(uint *)(&memory_allocator_3712_ptr + (uint64_t)(uVar25 + 2) * 4) * 0x10)
                                    ,*(int8_t (*) [16])
                                      (auStack_150 +
                                      (uint64_t)
                                      *(uint *)(&memory_allocator_3712_ptr + (uint64_t)(uVar25 + 5) * 4) * 0x10
                                      ),0x44);
              auVar50 = vshufps_avx(*(int8_t (*) [16])
                                     (auStack_150 +
                                     (uint64_t)
                                     *(uint *)(&memory_allocator_3712_ptr + (uint64_t)(uVar25 + 2) * 4) * 0x10)
                                    ,*(int8_t (*) [16])
                                      (auStack_150 +
                                      (uint64_t)
                                      *(uint *)(&memory_allocator_3712_ptr + (uint64_t)(uVar25 + 5) * 4) * 0x10
                                      ),0xee);
              auVar34 = vshufps_avx(*(int8_t (*) [16])
                                     (auStack_150 +
                                     (uint64_t)
                                     *(uint *)(&memory_allocator_3712_ptr + (uint64_t)(uVar6 + 2) * 4) * 0x10),
                                    *(int8_t (*) [16])
                                     (auStack_150 +
                                     (uint64_t)
                                     *(uint *)(&memory_allocator_3712_ptr + (uint64_t)(uVar7 + 2) * 4) * 0x10),
                                    0x44);
              auVar40 = vshufps_avx(*(int8_t (*) [16])
                                     (auStack_150 +
                                     (uint64_t)
                                     *(uint *)(&memory_allocator_3712_ptr + (uint64_t)(uVar6 + 2) * 4) * 0x10),
                                    *(int8_t (*) [16])
                                     (auStack_150 +
                                     (uint64_t)
                                     *(uint *)(&memory_allocator_3712_ptr + (uint64_t)(uVar7 + 2) * 4) * 0x10),
                                    0xee);
              auVar41 = vshufps_avx(auVar44,auVar34,0x88);
              auVar34 = vshufps_avx(auVar44,auVar34,0xdd);
              auVar43 = vshufps_avx(auVar50,auVar40,0x88);
              auVar44 = vshufps_avx(*(int8_t (*) [16])
                                     (auStack_150 +
                                     (uint64_t)
                                     *(uint *)(&memory_allocator_3712_ptr + (uint64_t)(uVar25 + 1) * 4) * 0x10)
                                    ,*(int8_t (*) [16])
                                      (auStack_150 +
                                      (uint64_t)
                                      *(uint *)(&memory_allocator_3712_ptr + (uint64_t)(uVar25 + 4) * 4) * 0x10
                                      ),0x44);
              auVar50 = vshufps_avx(*(int8_t (*) [16])
                                     (auStack_150 +
                                     (uint64_t)
                                     *(uint *)(&memory_allocator_3712_ptr + (uint64_t)(uVar25 + 1) * 4) * 0x10)
                                    ,*(int8_t (*) [16])
                                      (auStack_150 +
                                      (uint64_t)
                                      *(uint *)(&memory_allocator_3712_ptr + (uint64_t)(uVar25 + 4) * 4) * 0x10
                                      ),0xee);
              auVar40 = vshufps_avx(*(int8_t (*) [16])
                                     (auStack_150 +
                                     (uint64_t)
                                     *(uint *)(&memory_allocator_3712_ptr + (uint64_t)(uVar6 + 1) * 4) * 0x10),
                                    *(int8_t (*) [16])
                                     (auStack_150 +
                                     (uint64_t)
                                     *(uint *)(&memory_allocator_3712_ptr + (uint64_t)(uVar7 + 1) * 4) * 0x10),
                                    0x44);
              auVar51 = vshufps_avx(*(int8_t (*) [16])
                                     (auStack_150 +
                                     (uint64_t)
                                     *(uint *)(&memory_allocator_3712_ptr + (uint64_t)(uVar6 + 1) * 4) * 0x10),
                                    *(int8_t (*) [16])
                                     (auStack_150 +
                                     (uint64_t)
                                     *(uint *)(&memory_allocator_3712_ptr + (uint64_t)(uVar7 + 1) * 4) * 0x10),
                                    0xee);
              auVar53 = vshufps_avx(auVar44,auVar40,0x88);
              auVar44 = vshufps_avx(auVar44,auVar40,0xdd);
              auVar51 = vshufps_avx(auVar50,auVar51,0x88);
              auVar44 = vcvtps2dq_avx(auVar44);
              lVar19 = 0;
              auVar50 = vcvtps2dq_avx(auVar41);
              auVar34 = vcvtps2dq_avx(auVar34);
              auVar40 = vcvtps2dq_avx(auVar42);
              auVar41 = vcvtps2dq_avx(auVar53);
              auVar53 = vsubps_avx(auVar43,auStack_180);
              auStack_370 = vpsubd_avx(auVar46,auVar41);
              auVar35 = vsubps_avx(auVar51,auStack_180);
              auStack_390 = vpsubd_avx(auVar40,auVar34);
              auStack_3b0 = vpsubd_avx(auVar34,auVar44);
              auVar42 = vpmulld_avx(auVar50,auVar44);
              auVar43 = vpmulld_avx(auVar41,auVar40);
              auStack_380 = vpsubd_avx(auVar41,auVar50);
              auStack_360 = vpsubd_avx(auVar50,auVar46);
              auStack_3a0 = vpsubd_avx(auVar44,auVar40);
              auVar51 = vpmulld_avx(auVar41,auVar34);
              auStack_350 = vpsubd_avx(auVar42,auVar51);
              auVar42 = vpmulld_avx(auVar46,auVar44);
              aauStack_340[0] = vpsubd_avx(auVar43,auVar42);
              auVar42 = vpmulld_avx(auVar46,auVar34);
              auVar43 = vpmulld_avx(auVar50,auVar40);
              auStack_410 = vpsubd_avx(auVar42,auVar43);
              auVar42 = vpmulld_avx(auStack_360,auStack_3a0);
              auVar43 = vpmulld_avx(auStack_370,auStack_390);
              auStack_400 = vpsubd_avx(auVar42,auVar43);
              auVar42 = vcvtdq2ps_avx(auStack_400);
              auVar43 = vrcpps_avx(auVar42);
              auVar42 = vpmaxsd_avx(auVar46,auVar50);
              auVar46 = vpminsd_avx(auVar46,auVar50);
              auStack_170._0_4_ = auVar53._0_4_ * auVar43._0_4_;
              auStack_170._4_4_ = auVar53._4_4_ * auVar43._4_4_;
              auStack_170._8_4_ = auVar53._8_4_ * auVar43._8_4_;
              auStack_170._12_4_ = auVar53._12_4_ * auVar43._12_4_;
              auVar46 = vpminsd_avx(auVar46,auVar41);
              auStack_160._0_4_ = auVar35._0_4_ * auVar43._0_4_;
              auStack_160._4_4_ = auVar35._4_4_ * auVar43._4_4_;
              auStack_160._8_4_ = auVar35._8_4_ * auVar43._8_4_;
              auStack_160._12_4_ = auVar35._12_4_ * auVar43._12_4_;
              auVar42 = vpmaxsd_avx(auVar42,auVar41);
              auStack_3e0 = vpminsd_avx(auVar42,render_system_memory);
              auVar42 = vpmaxsd_avx(auVar46,ZEXT816(0) << 0x20);
              auStack_3f0 = vpand_avx(auVar42,render_system_memory);
              auVar42 = vpminsd_avx(auVar40,auVar34);
              auVar46 = vpminsd_avx(auVar42,auVar44);
              auVar42 = vpmaxsd_avx(auVar40,auVar34);
              auVar46 = vpmaxsd_avx(auVar46,ZEXT816(0) << 0x20);
              auVar42 = vpmaxsd_avx(auVar42,auVar44);
              auStack_3d0 = vpand_avx(auVar46,render_system_memory);
              auStack_3c0 = vpminsd_avx(auVar42,render_system_memory);
              do {
                uStack_420 = MXCSR;
                if (0 < *(int *)(auStack_400 + lVar19)) {
                  uVar4 = *(int32_t *)(auStack_380 + lVar19);
                  auVar37._4_4_ = uVar4;
                  auVar37._0_4_ = uVar4;
                  auVar37._8_4_ = uVar4;
                  auVar37._12_4_ = uVar4;
                  auVar37._16_4_ = uVar4;
                  auVar37._20_4_ = uVar4;
                  auVar37._24_4_ = uVar4;
                  auVar37._28_4_ = uVar4;
                  fStack_300 = *(float *)(auStack_180 + lVar19);
                  uVar4 = *(int32_t *)(auStack_3b0 + lVar19);
                  auVar36._4_4_ = uVar4;
                  auVar36._0_4_ = uVar4;
                  auVar36._8_4_ = uVar4;
                  auVar36._12_4_ = uVar4;
                  auVar36._16_4_ = uVar4;
                  auVar36._20_4_ = uVar4;
                  auVar36._24_4_ = uVar4;
                  auVar36._28_4_ = uVar4;
                  uVar4 = *(int32_t *)(auStack_370 + lVar19);
                  auVar45._4_4_ = uVar4;
                  auVar45._0_4_ = uVar4;
                  auVar45._8_4_ = uVar4;
                  auVar45._12_4_ = uVar4;
                  auVar45._16_4_ = uVar4;
                  auVar45._20_4_ = uVar4;
                  auVar45._24_4_ = uVar4;
                  auVar45._28_4_ = uVar4;
                  uVar4 = *(int32_t *)(auStack_360 + lVar19);
                  auVar47._4_4_ = uVar4;
                  auVar47._0_4_ = uVar4;
                  auVar47._8_4_ = uVar4;
                  auVar47._12_4_ = uVar4;
                  auVar47._16_4_ = uVar4;
                  auVar47._20_4_ = uVar4;
                  auVar47._24_4_ = uVar4;
                  auVar47._28_4_ = uVar4;
                  uVar25 = *(uint *)(auStack_3d0 + lVar19);
                  uVar4 = *(int32_t *)(auStack_3a0 + lVar19);
                  auVar52._4_4_ = uVar4;
                  auVar52._0_4_ = uVar4;
                  auVar52._8_4_ = uVar4;
                  auVar52._12_4_ = uVar4;
                  auVar52._16_4_ = uVar4;
                  auVar52._20_4_ = uVar4;
                  auVar52._24_4_ = uVar4;
                  auVar52._28_4_ = uVar4;
                  uVar4 = *(int32_t *)(auStack_390 + lVar19);
                  auVar54._4_4_ = uVar4;
                  auVar54._0_4_ = uVar4;
                  auVar54._8_4_ = uVar4;
                  auVar54._12_4_ = uVar4;
                  auVar54._16_4_ = uVar4;
                  auVar54._20_4_ = uVar4;
                  auVar54._24_4_ = uVar4;
                  auVar54._28_4_ = uVar4;
                  fVar49 = *(float *)(auStack_170 + lVar19);
                  auStack_320._4_4_ = fVar49;
                  auStack_320._0_4_ = fVar49;
                  auStack_320._8_4_ = fVar49;
                  auStack_320._12_4_ = fVar49;
                  auStack_320._16_4_ = fVar49;
                  auStack_320._20_4_ = fVar49;
                  auStack_320._24_4_ = fVar49;
                  auStack_320._28_4_ = fVar49;
                  fVar5 = *(float *)(auStack_160 + lVar19);
                  auStack_2e0._4_4_ = fVar5;
                  auStack_2e0._0_4_ = fVar5;
                  auStack_2e0._8_4_ = fVar5;
                  auStack_2e0._12_4_ = fVar5;
                  auStack_2e0._16_4_ = fVar5;
                  auStack_2e0._20_4_ = fVar5;
                  auStack_2e0._24_4_ = fVar5;
                  auStack_2e0._28_4_ = fVar5;
                  uVar6 = *(uint *)(auStack_3f0 + lVar19);
                  auStack_2c0 = vpslld_avx2(auVar36,2);
                  auStack_240 = vpslld_avx2(auVar37,1);
                  auStack_220 = vpslld_avx2(auVar45,1);
                  auStack_200 = vpslld_avx2(auVar47,1);
                  auStack_2a0 = vpslld_avx2(auVar52,2);
                  auStack_280 = vpslld_avx2(auVar54,2);
                  auVar42 = vpshufd_avx(ZEXT416(uVar25),0);
                  auVar33._16_16_ = auVar42;
                  auVar33._0_16_ = auVar42;
                  auVar33 = vpaddd_avx2(auVar33,render_system_memory);
                  auVar31 = vpmulld_avx2(auVar33,auVar37);
                  auVar42 = vpshufd_avx(ZEXT416(uVar6),0);
                  auVar28._16_16_ = auVar42;
                  auVar28._0_16_ = auVar42;
                  auVar28 = vpaddd_avx2(auVar28,render_system_memory);
                  uVar4 = *(int32_t *)(auStack_350 + lVar19);
                  auVar29._4_4_ = uVar4;
                  auVar29._0_4_ = uVar4;
                  auVar29._8_4_ = uVar4;
                  auVar29._12_4_ = uVar4;
                  auVar29._16_4_ = uVar4;
                  auVar29._20_4_ = uVar4;
                  auVar29._24_4_ = uVar4;
                  auVar29._28_4_ = uVar4;
                  auVar31 = vpaddd_avx2(auVar29,auVar31);
                  auVar29 = vpmulld_avx2(auVar28,auVar36);
                  _auStack_1a0 = vpaddd_avx2(auVar31,auVar29);
                  uVar4 = *(int32_t *)(aauStack_340[0] + lVar19);
                  auVar30._4_4_ = uVar4;
                  auVar30._0_4_ = uVar4;
                  auVar30._8_4_ = uVar4;
                  auVar30._12_4_ = uVar4;
                  auVar30._16_4_ = uVar4;
                  auVar30._20_4_ = uVar4;
                  auVar30._24_4_ = uVar4;
                  auVar30._28_4_ = uVar4;
                  auVar31 = vpmulld_avx2(auVar33,auVar45);
                  auVar31 = vpaddd_avx2(auVar30,auVar31);
                  auVar29 = vpmulld_avx2(auVar28,auVar52);
                  _auStack_1c0 = vpaddd_avx2(auVar31,auVar29);
                  uVar4 = *(int32_t *)(auStack_410 + lVar19);
                  auVar31._4_4_ = uVar4;
                  auVar31._0_4_ = uVar4;
                  auVar31._8_4_ = uVar4;
                  auVar31._12_4_ = uVar4;
                  auVar31._16_4_ = uVar4;
                  auVar31._20_4_ = uVar4;
                  auVar31._24_4_ = uVar4;
                  auVar31._28_4_ = uVar4;
                  auVar33 = vpmulld_avx2(auVar33,auVar47);
                  auVar33 = vpaddd_avx2(auVar31,auVar33);
                  auVar31 = vpmulld_avx2(auVar28,auVar54);
                  _auStack_1e0 = vpaddd_avx2(auVar33,auVar31);
                  auVar33 = vcvtdq2ps_avx(auStack_280);
                  auVar28 = vcvtdq2ps_avx(auStack_2a0);
                  auStack_260._0_4_ = auVar28._0_4_ * fVar49 + auVar33._0_4_ * fVar5;
                  auStack_260._4_4_ = auVar28._4_4_ * fVar49 + auVar33._4_4_ * fVar5;
                  auStack_260._8_4_ = auVar28._8_4_ * fVar49 + auVar33._8_4_ * fVar5;
                  auStack_260._12_4_ = auVar28._12_4_ * fVar49 + auVar33._12_4_ * fVar5;
                  auStack_260._16_4_ = auVar28._16_4_ * fVar49 + auVar33._16_4_ * fVar5;
                  auStack_260._20_4_ = auVar28._20_4_ * fVar49 + auVar33._20_4_ * fVar5;
                  auStack_260._24_4_ = auVar28._24_4_ * fVar49 + auVar33._24_4_ * fVar5;
                  auStack_260._28_4_ = auStack_1e0._28_4_ + auVar31._28_4_;
                  auVar35._4_4_ = (uVar25 * 0x140 + uVar6) * 2;
                  for (; fStack_2fc = fStack_300, fStack_2f8 = fStack_300, fStack_2f4 = fStack_300,
                      fStack_2f0 = fStack_300, fStack_2ec = fStack_300, fStack_2e8 = fStack_300,
                      fStack_2e4 = fStack_300, (int)uVar25 < *(int *)(auStack_3c0 + lVar19);
                      uVar25 = uVar25 + 2) {
                    auVar48 = ZEXT1664((int8_t  [16])0x0);
                    auVar31 = auVar48._0_32_;
                    auVar33 = vcvtdq2ps_avx(_auStack_1c0);
                    auVar28 = vcvtdq2ps_avx(_auStack_1e0);
                    auVar38._0_4_ = auVar33._0_4_ * fVar49 + fStack_300 + auVar28._0_4_ * fVar5;
                    auVar38._4_4_ = auVar33._4_4_ * fVar49 + fStack_300 + auVar28._4_4_ * fVar5;
                    auVar38._8_4_ = auVar33._8_4_ * fVar49 + fStack_300 + auVar28._8_4_ * fVar5;
                    auVar38._12_4_ = auVar33._12_4_ * fVar49 + fStack_300 + auVar28._12_4_ * fVar5;
                    auVar38._16_4_ = auVar33._16_4_ * fVar49 + fStack_300 + auVar28._16_4_ * fVar5;
                    auVar38._20_4_ = auVar33._20_4_ * fVar49 + fStack_300 + auVar28._20_4_ * fVar5;
                    auVar38._24_4_ = auVar33._24_4_ * fVar49 + fStack_300 + auVar28._24_4_ * fVar5;
                    auVar38._28_4_ = fStack_300 + 0.0 + auVar33._28_4_;
                    if ((int)uVar6 < *(int *)(auStack_3e0 + lVar19)) {
                      uVar22 = (uint64_t)(((*(int *)(auStack_3e0 + lVar19) - uVar6) - 1 >> 2) + 1);
                      auVar33 = _auStack_1a0;
                      auVar28 = _auStack_1c0;
                      auVar29 = _auStack_1e0;
                      iVar24 = auVar35._4_4_;
                      do {
                        auVar31 = vpor_avx2(auVar28,auVar33);
                        auVar33 = vpaddd_avx2(auVar33,auStack_2c0);
                        auVar28 = vpaddd_avx2(auVar28,auStack_2a0);
                        lVar23 = (int64_t)iVar24;
                        iVar24 = iVar24 + 8;
                        auVar30 = vpor_avx2(auVar31,auVar29);
                        auVar29 = vpaddd_avx2(auVar29,auStack_280);
                        auVar31 = vcmpps_avx(auVar38,*(int8_t (*) [32])
                                                      (*(int64_t *)(param_1 + 0x1f8 + lVar27 * 8) +
                                                      lVar23 * 4),0x1d);
                        auVar39._0_4_ = auVar38._0_4_ + auStack_260._0_4_;
                        auVar39._4_4_ = auVar38._4_4_ + auStack_260._4_4_;
                        auVar39._8_4_ = auVar38._8_4_ + auStack_260._8_4_;
                        auVar39._12_4_ = auVar38._12_4_ + auStack_260._12_4_;
                        auVar39._16_4_ = auVar38._16_4_ + auStack_260._16_4_;
                        auVar39._20_4_ = auVar38._20_4_ + auStack_260._20_4_;
                        auVar39._24_4_ = auVar38._24_4_ + auStack_260._24_4_;
                        auVar39._28_4_ = auVar38._28_4_ + auStack_260._28_4_;
                        auVar31 = vpandn_avx2(auVar30,auVar31);
                        auVar31 = vpor_avx2(auVar31,auVar48._0_32_);
                        auVar48 = ZEXT3264(auVar31);
                        uVar22 = uVar22 - 1;
                        auVar38 = auVar39;
                      } while (uVar22 != 0);
                    }
                    if ((render_system_memory & auVar31) != (int8_t  [32])0x0) goto LAB_18048fc1a;
                    _auStack_1a0 = vpaddd_avx2(_auStack_1a0,auStack_240);
                    _auStack_1c0 = vpaddd_avx2(_auStack_1c0,auStack_220);
                    _auStack_1e0 = vpaddd_avx2(_auStack_1e0,auStack_200);
                    auVar35._4_4_ = auVar35._4_4_ + 0x500;
                  }
                }
                lVar19 = lVar19 + 4;
              } while (lVar19 < 0x10);
              uVar26 = uVar26 + 4;
            } while (uVar26 < 0xc);
            break;
          }
          auVar35._4_4_ = auVar35._4_4_ + 1;
          iVar24 = iVar24 + 0x50;
        } while (auVar35._4_4_ <= auVar35._12_4_);
      }
    }
  }
LAB_18048fc1a:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_d0 ^ (uint64_t)auStack_438);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





