#include "TaleWorlds.Native.Split.h"

// 03_rendering_part400_sub002_sub002.c - 1 个函数

// 函数: void FUN_18048e4d0(longlong param_1,int8_t (*param_2) [16],float *param_3,int param_4)
void FUN_18048e4d0(longlong param_1,int8_t (*param_2) [16],float *param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int32_t uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  int8_t auVar12 [12];
  int8_t auVar13 [12];
  int iVar14;
  uint uVar15;
  longlong lVar16;
  float *pfVar17;
  int8_t (*pauVar18) [16];
  ulonglong uVar19;
  longlong lVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  int8_t auVar24 [16];
  int8_t auVar25 [16];
  int8_t auVar26 [32];
  int8_t auVar27 [32];
  int8_t auVar28 [32];
  int8_t auVar29 [32];
  int8_t extraout_var [48];
  int8_t auVar30 [64];
  int8_t auVar31 [64];
  int8_t auVar32 [16];
  int8_t auVar33 [32];
  float fVar34;
  int8_t auVar35 [16];
  int8_t auVar36 [16];
  int8_t auVar37 [32];
  int8_t in_ZMM2 [64];
  int8_t auVar38 [48];
  int8_t auVar39 [32];
  int8_t auVar40 [32];
  int8_t auVar41 [32];
  int8_t in_ZMM3 [64];
  int8_t auVar43 [64];
  int8_t auVar44 [64];
  int8_t auVar46 [64];
  int8_t auVar48 [64];
  float fVar50;
  int8_t auVar51 [16];
  float fVar52;
  int8_t auVar53 [16];
  int8_t auVar54 [16];
  int8_t auVar55 [16];
  int8_t auVar56 [16];
  int8_t auVar57 [32];
  float fVar61;
  int8_t auVar58 [16];
  int8_t auVar59 [32];
  int8_t auVar60 [64];
  int8_t auVar62 [16];
  int8_t auVar63 [16];
  int8_t auVar64 [32];
  float fVar67;
  int8_t auVar65 [12];
  float fVar68;
  int8_t auVar66 [32];
  float fVar69;
  float fVar71;
  int8_t auVar70 [12];
  float fVar72;
  int8_t auStack_498 [56];
  int8_t auStack_460 [16];
  int8_t auStack_450 [8];
  uint64_t uStack_448;
  int8_t auStack_440 [16];
  int8_t auStack_430 [16];
  int8_t auStack_420 [16];
  int8_t auStack_410 [16];
  int8_t auStack_400 [16];
  int8_t auStack_3f0 [16];
  int8_t auStack_3e0 [16];
  int8_t auStack_3d0 [16];
  int8_t auStack_3c0 [16];
  int8_t auStack_3b0 [16];
  int8_t auStack_3a0 [16];
  int8_t auStack_390 [16];
  int8_t auStack_380 [8];
  float fStack_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float fStack_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
  int8_t auStack_340 [32];
  float fStack_320;
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  int8_t auStack_300 [32];
  int8_t auStack_2e0 [32];
  int8_t auStack_2c0 [32];
  int8_t auStack_2a0 [32];
  int8_t auStack_280 [32];
  int8_t auStack_260 [32];
  int8_t auStack_240 [4];
  float afStack_23c [6];
  float fStack_224;
  int8_t auStack_220 [4];
  float afStack_21c [6];
  float fStack_204;
  int8_t auStack_200 [4];
  float afStack_1fc [6];
  float fStack_1e4;
  int8_t auStack_1e0 [32];
  int8_t auStack_1c0 [96];
  int8_t auStack_160 [16];
  int8_t auStack_150 [16];
  float afStack_140 [8];
  int8_t auStack_120 [32];
  int8_t auStack_100 [16];
  int8_t auStack_f0 [16];
  ulonglong uStack_e0;
  int8_t auVar42 [64];
  int8_t auVar49 [64];
  int8_t auVar45 [64];
  int8_t auVar47 [64];
  
  uStack_e0 = _DAT_180bf00a8 ^ (ulonglong)auStack_498;
  fVar4 = *param_3;
  lVar23 = (longlong)param_4;
  auVar38 = in_ZMM2._16_48_;
  auVar43._16_48_ = in_ZMM3._16_48_;
  fVar61 = param_3[2];
  fVar50 = fVar4 * param_3[5] - param_3[1] * param_3[4];
  auVar65 = SUB1612(*param_2,0);
  auVar70 = SUB1612(param_2[1],0);
  auVar43._4_4_ = fVar61;
  auVar43._0_4_ = fVar4;
  uStack_448._0_4_ = fVar50;
  fVar5 = param_3[10];
  fVar52 = fVar61 * param_3[4] - fVar4 * param_3[6];
  fVar34 = param_3[1] * param_3[6] - fVar61 * param_3[5];
  auVar12._4_8_ = uStack_448;
  auVar12._0_4_ = fVar52;
  _auStack_450 = auVar12 << 0x20;
  fVar4 = param_3[9];
  uStack_448._4_4_ = 0x7f7fffff;
  auStack_450._0_4_ = fVar34;
  fVar6 = param_3[8];
  auVar43._8_4_ = fVar61;
  auVar43._12_4_ = 0;
  auVar42._8_56_ = auVar43._8_56_;
  auVar42._0_8_ = *(uint64_t *)param_3;
  auVar54._4_4_ = param_3[6];
  auVar54._0_4_ = param_3[6];
  auVar54._8_8_ = 0;
  auVar45._0_16_ = auVar54 << 0x20;
  auVar45._16_48_ = auVar43._16_48_;
  auVar44._8_56_ = auVar45._8_56_;
  auVar44._0_8_ = *(uint64_t *)(param_3 + 4);
  auStack_120._16_16_ = auVar44._0_16_;
  auStack_120._0_16_ = auVar42._0_16_;
  auVar58._4_4_ = param_3[10];
  auVar58._0_4_ = param_3[10];
  auVar58._8_8_ = 0;
  auVar47._0_16_ = auVar58 << 0x20;
  auVar47._16_48_ = auVar43._16_48_;
  auVar46._8_56_ = auVar47._8_56_;
  auVar46._0_8_ = *(uint64_t *)(param_3 + 8);
  auStack_100 = auVar46._0_16_;
  auVar13._4_4_ = param_3[0xe];
  auVar13._0_4_ = param_3[0xe];
  auVar13._8_4_ = 0;
  auVar49._0_12_ = auVar13 << 0x20;
  auVar49._12_4_ = 0x3f800000;
  auVar49._16_48_ = auVar43._16_48_;
  auVar48._8_56_ = auVar49._8_56_;
  auVar48._0_8_ = *(uint64_t *)(param_3 + 0xc);
  auStack_f0 = auVar48._0_16_;
  func_0x000180490630(auStack_120,*(uint64_t *)(param_1 + 0x1e8 + lVar23 * 8),auStack_380);
  fVar61 = auVar65._0_4_;
  fVar67 = auVar65._4_4_;
  fVar68 = auVar65._8_4_;
  fVar69 = auVar70._0_4_;
  fVar71 = auVar70._4_4_;
  fVar72 = auVar70._8_4_;
  afStack_23c[0] = (float)auStack_380._4_4_ * fVar61;
  auStack_240 = (int8_t  [4])((float)auStack_380._0_4_ * fVar61);
  afStack_23c[1] = fStack_378 * fVar61;
  afStack_23c[2] = fStack_374 * fVar61;
  afStack_23c[3] = (float)auStack_380._0_4_ * fVar69;
  afStack_23c[4] = (float)auStack_380._4_4_ * fVar69;
  afStack_23c[5] = fStack_378 * fVar69;
  fStack_224 = fStack_374 * fVar69;
  pauVar18 = (int8_t (*) [16])auStack_1c0;
  lVar16 = 0;
  lVar20 = 2;
  afStack_21c[0] = fStack_36c * fVar67;
  auStack_220 = (int8_t  [4])(fStack_370 * fVar67);
  afStack_21c[1] = fStack_368 * fVar67;
  afStack_21c[2] = fStack_364 * fVar67;
  afStack_21c[3] = fStack_370 * fVar71;
  afStack_21c[4] = fStack_36c * fVar71;
  afStack_21c[5] = fStack_368 * fVar71;
  fStack_204 = fStack_364 * fVar71;
  auVar60._16_48_ = auVar38;
  auVar60._0_16_ = _DAT_180a40780;
  afStack_1fc[0] = fStack_35c * fVar68;
  auStack_200 = (int8_t  [4])(fStack_360 * fVar68);
  afStack_1fc[1] = fStack_358 * fVar68;
  afStack_1fc[2] = fStack_354 * fVar68;
  afStack_1fc[3] = fStack_360 * fVar72;
  afStack_1fc[4] = fStack_35c * fVar72;
  afStack_1fc[5] = fStack_358 * fVar72;
  fStack_1e4 = fStack_354 * fVar72;
  auVar54 = _DAT_180a40490;
  auVar58 = _DAT_180a40740;
  do {
    lVar1 = (ulonglong)*(uint *)(&unknown_var_3920_ptr + lVar16) * 0x10;
    lVar2 = (ulonglong)*(uint *)(&unknown_var_3856_ptr + lVar16) * 0x10;
    lVar3 = (ulonglong)*(uint *)(&unknown_var_3888_ptr + lVar16) * 0x10;
    auVar55._0_4_ =
         *(float *)(auStack_240 + lVar1) + fStack_350 + *(float *)(auStack_220 + lVar2) +
         *(float *)(auStack_200 + lVar3);
    auVar55._4_4_ =
         *(float *)(auStack_240 + lVar1 + 4) + fStack_34c + *(float *)(auStack_220 + lVar2 + 4) +
         *(float *)(auStack_200 + lVar3 + 4);
    auVar55._8_4_ =
         *(float *)(auStack_240 + lVar1 + 8) + fStack_348 + *(float *)(auStack_220 + lVar2 + 8) +
         *(float *)(auStack_200 + lVar3 + 8);
    auVar55._12_4_ =
         *(float *)(auStack_240 + lVar1 + 0xc) + fStack_344 + *(float *)(auStack_220 + lVar2 + 0xc)
         + *(float *)(auStack_200 + lVar3 + 0xc);
    lVar1 = (ulonglong)*(uint *)(&unknown_var_3924_ptr + lVar16) * 0x10;
    fVar61 = *(float *)(auStack_240 + lVar1);
    fVar67 = *(float *)(auStack_240 + lVar1 + 4);
    fVar68 = *(float *)(auStack_240 + lVar1 + 8);
    fVar69 = *(float *)(auStack_240 + lVar1 + 0xc);
    auVar56._4_4_ = auVar55._12_4_;
    auVar56._0_4_ = auVar55._12_4_;
    auVar56._8_4_ = auVar55._12_4_;
    auVar56._12_4_ = auVar55._12_4_;
    auVar56 = divps(auVar55,auVar56);
    lVar1 = (ulonglong)*(uint *)(&unknown_var_3860_ptr + lVar16) * 0x10;
    fVar71 = *(float *)(auStack_220 + lVar1);
    fVar72 = *(float *)(auStack_220 + lVar1 + 4);
    fVar10 = *(float *)(auStack_220 + lVar1 + 8);
    fVar11 = *(float *)(auStack_220 + lVar1 + 0xc);
    uVar22 = *(uint *)(&unknown_var_3892_ptr + lVar16);
    pauVar18[-2] = auVar56;
    auVar62 = minps(auVar54,auVar56);
    lVar1 = (ulonglong)uVar22 * 0x10;
    auVar53._0_4_ = fVar61 + fStack_350 + fVar71 + *(float *)(auStack_200 + lVar1);
    auVar53._4_4_ = fVar67 + fStack_34c + fVar72 + *(float *)(auStack_200 + lVar1 + 4);
    auVar53._8_4_ = fVar68 + fStack_348 + fVar10 + *(float *)(auStack_200 + lVar1 + 8);
    auVar53._12_4_ = fVar69 + fStack_344 + fVar11 + *(float *)(auStack_200 + lVar1 + 0xc);
    auVar58 = maxps(auVar58,auVar56);
    lVar1 = (ulonglong)*(uint *)(&unknown_var_3928_ptr + lVar16) * 0x10;
    fVar61 = *(float *)(auStack_240 + lVar1);
    fVar67 = *(float *)(auStack_240 + lVar1 + 4);
    fVar68 = *(float *)(auStack_240 + lVar1 + 8);
    fVar69 = *(float *)(auStack_240 + lVar1 + 0xc);
    auVar63._4_4_ = auVar53._12_4_;
    auVar63._0_4_ = auVar53._12_4_;
    auVar63._8_4_ = auVar53._12_4_;
    auVar63._12_4_ = auVar53._12_4_;
    auVar54 = divps(auVar53,auVar63);
    lVar1 = (ulonglong)*(uint *)(&unknown_var_3864_ptr + lVar16) * 0x10;
    fVar71 = *(float *)(auStack_220 + lVar1);
    fVar72 = *(float *)(auStack_220 + lVar1 + 4);
    fVar10 = *(float *)(auStack_220 + lVar1 + 8);
    fVar11 = *(float *)(auStack_220 + lVar1 + 0xc);
    uVar22 = *(uint *)(&unknown_var_3896_ptr + lVar16);
    pauVar18[-1] = auVar54;
    auVar56 = minps(auVar62,auVar54);
    lVar1 = (ulonglong)uVar22 * 0x10;
    auVar51._0_4_ = fVar61 + fStack_350 + fVar71 + *(float *)(auStack_200 + lVar1);
    auVar51._4_4_ = fVar67 + fStack_34c + fVar72 + *(float *)(auStack_200 + lVar1 + 4);
    auVar51._8_4_ = fVar68 + fStack_348 + fVar10 + *(float *)(auStack_200 + lVar1 + 8);
    auVar51._12_4_ = fVar69 + fStack_344 + fVar11 + *(float *)(auStack_200 + lVar1 + 0xc);
    auVar58 = maxps(auVar58,auVar54);
    auVar62._4_4_ = auVar51._12_4_;
    auVar62._0_4_ = auVar51._12_4_;
    auVar62._8_4_ = auVar51._12_4_;
    auVar62._12_4_ = auVar51._12_4_;
    auVar54 = divps(auVar51,auVar62);
    lVar1 = (ulonglong)*(uint *)(&unknown_var_3932_ptr + lVar16) * 0x10;
    fVar61 = *(float *)(auStack_240 + lVar1);
    fVar67 = *(float *)(auStack_240 + lVar1 + 4);
    fVar68 = *(float *)(auStack_240 + lVar1 + 8);
    fVar69 = *(float *)(auStack_240 + lVar1 + 0xc);
    uVar22 = *(uint *)(&unknown_var_3868_ptr + lVar16);
    *pauVar18 = auVar54;
    auVar63 = minps(auVar56,auVar54);
    lVar1 = (ulonglong)uVar22 * 0x10;
    uVar22 = *(uint *)(&unknown_var_3900_ptr + lVar16);
    auVar56 = maxps(auVar58,auVar54);
    lVar2 = (ulonglong)uVar22 * 0x10;
    auVar32._0_4_ =
         *(float *)(auStack_200 + lVar2) + fVar61 + fStack_350 + *(float *)(auStack_220 + lVar1);
    auVar32._4_4_ =
         *(float *)(auStack_200 + lVar2 + 4) +
         fVar67 + fStack_34c + *(float *)(auStack_220 + lVar1 + 4);
    auVar32._8_4_ =
         *(float *)(auStack_200 + lVar2 + 8) +
         fVar68 + fStack_348 + *(float *)(auStack_220 + lVar1 + 8);
    auVar32._12_4_ =
         *(float *)(auStack_200 + lVar2 + 0xc) +
         fVar69 + fStack_344 + *(float *)(auStack_220 + lVar1 + 0xc);
    auVar24._4_4_ = auVar32._12_4_;
    auVar24._0_4_ = auVar32._12_4_;
    auVar24._8_4_ = auVar32._12_4_;
    auVar24._12_4_ = auVar32._12_4_;
    auVar58 = divps(auVar32,auVar24);
    pauVar18[1] = auVar58;
    auVar35._0_4_ =
         -(uint)(auVar32._8_4_ <= auVar32._12_4_) &
         -(uint)(auVar51._8_4_ <= auVar51._12_4_) &
         -(uint)(auVar53._8_4_ <= auVar53._12_4_) &
         -(uint)(auVar55._8_4_ <= auVar55._12_4_) & auVar60._0_4_;
    auVar35._4_4_ =
         -(uint)(auVar32._8_4_ <= auVar32._12_4_) &
         -(uint)(auVar51._8_4_ <= auVar51._12_4_) &
         -(uint)(auVar53._8_4_ <= auVar53._12_4_) &
         -(uint)(auVar55._8_4_ <= auVar55._12_4_) & auVar60._4_4_;
    auVar35._8_4_ =
         -(uint)(auVar32._8_4_ <= auVar32._12_4_) &
         -(uint)(auVar51._8_4_ <= auVar51._12_4_) &
         -(uint)(auVar53._8_4_ <= auVar53._12_4_) &
         -(uint)(auVar55._8_4_ <= auVar55._12_4_) & auVar60._8_4_;
    auVar35._12_4_ =
         -(uint)(auVar32._8_4_ <= auVar32._12_4_) &
         -(uint)(auVar51._8_4_ <= auVar51._12_4_) &
         -(uint)(auVar53._8_4_ <= auVar53._12_4_) &
         -(uint)(auVar55._8_4_ <= auVar55._12_4_) & auVar60._12_4_;
    auVar60._0_16_ = auVar35;
    auVar54 = minps(auVar63,auVar58);
    auVar58 = maxps(auVar56,auVar58);
    lVar16 = lVar16 + 0x10;
    pauVar18 = pauVar18 + 4;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  auVar36._4_4_ = movmskps(uVar22 * 2,auVar35);
  if (auVar36._4_4_ == 0xf) {
    auVar58 = minps(auVar58,_DAT_180a403e0);
    auVar54 = maxps(auVar54,_DAT_180a40720);
    fVar61 = auVar58._8_4_;
    auVar25._4_4_ = -(uint)(auVar58._4_4_ < auVar54._4_4_);
    auVar25._0_4_ = -(uint)(auVar58._0_4_ < auVar54._0_4_);
    auVar25._8_4_ = -(uint)(fVar61 < auVar54._8_4_);
    auVar25._12_4_ = -(uint)(auVar58._12_4_ < auVar54._12_4_);
    auVar36._4_4_ = movmskps(0xf,auVar25);
    if (auVar36._4_4_ == 0) {
      auVar56 = ZEXT816(0);
      auVar30._4_4_ = fVar61;
      auVar30._0_4_ = fVar61;
      auVar36._0_4_ = (int)auVar54._0_4_ >> 3;
      auVar36._4_4_ = (int)auVar54._4_4_ >> 3;
      auVar36._8_4_ = (int)auVar58._0_4_ >> 3;
      auVar36._12_4_ = (int)auVar58._4_4_ >> 3;
      auStack_340._0_16_ = auVar36;
      auVar31._0_16_ = auVar36 >> 0x20;
      auVar31._16_48_ = extraout_var;
      if (auVar36._4_4_ <= auVar36._12_4_) {
        iVar21 = auVar36._4_4_ * 0x50;
        do {
          iVar14 = iVar21;
          if (auVar36._0_4_ <= auVar36._8_4_) {
            uVar19 = (ulonglong)((auVar36._8_4_ - auVar36._0_4_) + 1);
            pfVar17 = (float *)(*(longlong *)(param_1 + 600 + lVar23 * 8) + (longlong)iVar21 * 4 +
                               (longlong)auVar36._0_4_ * 4);
            do {
              auVar30._8_4_ = fVar61;
              auVar30._16_48_ = auVar31._16_48_;
              auVar30._12_4_ = fVar61;
              auVar31._4_60_ = auVar30._4_60_;
              auVar31._0_4_ = -(uint)(*pfVar17 <= fVar61);
              auVar56 = auVar56 | auVar31._0_16_;
              uVar19 = uVar19 - 1;
              pfVar17 = pfVar17 + 1;
              iVar14 = auVar36._0_4_;
            } while (uVar19 != 0);
          }
          iVar14 = movmskps(iVar14,auVar56);
          if (iVar14 != 0) {
            MXCSR = MXCSR | 0x8040;
            auStack_450._0_4_ = MXCSR;
            uVar22 = 0;
            do {
              if (fVar52 * fVar4 + fVar34 * fVar6 + fVar50 * fVar5 < 0.0) {
                uVar15 = uVar22 * 3;
                auVar54 = vshufps_avx(*(int8_t (*) [16])
                                       (auStack_1e0 +
                                       (ulonglong)*(uint *)(&unknown_var_3712_ptr + (ulonglong)uVar15 * 4)
                                       * 0x10),*(int8_t (*) [16])
                                                (auStack_1e0 +
                                                (ulonglong)
                                                *(uint *)(&unknown_var_3712_ptr +
                                                         (ulonglong)(uVar15 + 3) * 4) * 0x10),0x44);
                auVar58 = vshufps_avx(*(int8_t (*) [16])
                                       (auStack_1e0 +
                                       (ulonglong)*(uint *)(&unknown_var_3712_ptr + (ulonglong)uVar15 * 4)
                                       * 0x10),*(int8_t (*) [16])
                                                (auStack_1e0 +
                                                (ulonglong)
                                                *(uint *)(&unknown_var_3712_ptr +
                                                         (ulonglong)(uVar15 + 3) * 4) * 0x10),0xee);
                auVar56 = vshufps_avx(*(int8_t (*) [16])
                                       (auStack_1e0 +
                                       (ulonglong)
                                       *(uint *)(&unknown_var_3712_ptr + (ulonglong)((uVar22 + 2) * 3) * 4)
                                       * 0x10),*(int8_t (*) [16])
                                                (auStack_1e0 +
                                                (ulonglong)
                                                *(uint *)(&unknown_var_3712_ptr +
                                                         (ulonglong)((uVar22 + 3) * 3) * 4) * 0x10),
                                      0x44);
                auVar63 = vshufps_avx(*(int8_t (*) [16])
                                       (auStack_1e0 +
                                       (ulonglong)
                                       *(uint *)(&unknown_var_3712_ptr + (ulonglong)((uVar22 + 2) * 3) * 4)
                                       * 0x10),*(int8_t (*) [16])
                                                (auStack_1e0 +
                                                (ulonglong)
                                                *(uint *)(&unknown_var_3712_ptr +
                                                         (ulonglong)((uVar22 + 3) * 3) * 4) * 0x10),
                                      0xee);
                auVar24 = vshufps_avx(auVar54,auVar56,0x88);
                auVar62 = vshufps_avx(auVar54,auVar56,0xdd);
                auStack_160 = vshufps_avx(auVar58,auVar63,0x88);
                auVar54 = vshufps_avx(*(int8_t (*) [16])
                                       (auStack_1e0 +
                                       (ulonglong)
                                       *(uint *)(&unknown_var_3712_ptr + (ulonglong)(uVar15 + 1) * 4) *
                                       0x10),*(int8_t (*) [16])
                                              (auStack_1e0 +
                                              (ulonglong)
                                              *(uint *)(&unknown_var_3712_ptr + (ulonglong)(uVar15 + 4) * 4
                                                       ) * 0x10),0x44);
                auVar58 = vshufps_avx(*(int8_t (*) [16])
                                       (auStack_1e0 +
                                       (ulonglong)
                                       *(uint *)(&unknown_var_3712_ptr + (ulonglong)(uVar15 + 1) * 4) *
                                       0x10),*(int8_t (*) [16])
                                              (auStack_1e0 +
                                              (ulonglong)
                                              *(uint *)(&unknown_var_3712_ptr + (ulonglong)(uVar15 + 4) * 4
                                                       ) * 0x10),0xee);
                auVar56 = vshufps_avx(*(int8_t (*) [16])
                                       (auStack_1e0 +
                                       (ulonglong)
                                       *(uint *)(&unknown_var_3712_ptr + (ulonglong)(uVar15 + 7) * 4) *
                                       0x10),*(int8_t (*) [16])
                                              (auStack_1e0 +
                                              (ulonglong)
                                              *(uint *)(&unknown_var_3712_ptr +
                                                       (ulonglong)(uVar15 + 10) * 4) * 0x10),0x44);
                auVar63 = vshufps_avx(*(int8_t (*) [16])
                                       (auStack_1e0 +
                                       (ulonglong)
                                       *(uint *)(&unknown_var_3712_ptr + (ulonglong)(uVar15 + 7) * 4) *
                                       0x10),*(int8_t (*) [16])
                                              (auStack_1e0 +
                                              (ulonglong)
                                              *(uint *)(&unknown_var_3712_ptr +
                                                       (ulonglong)(uVar15 + 10) * 4) * 0x10),0xee);
                auVar35 = vshufps_avx(auVar54,auVar56,0x88);
                auVar32 = vshufps_avx(auVar54,auVar56,0xdd);
                auVar54 = *(int8_t (*) [16])
                           (auStack_1e0 +
                           (ulonglong)*(uint *)(&unknown_var_3712_ptr + (ulonglong)(uVar15 + 2) * 4) * 0x10
                           );
                auVar63 = vshufps_avx(auVar58,auVar63,0x88);
                auVar58 = *(int8_t (*) [16])
                           (auStack_1e0 +
                           (ulonglong)*(uint *)(&unknown_var_3712_ptr + (ulonglong)(uVar15 + 5) * 4) * 0x10
                           );
                auVar56 = *(int8_t (*) [16])
                           (auStack_1e0 +
                           (ulonglong)*(uint *)(&unknown_var_3712_ptr + (ulonglong)(uVar15 + 8) * 4) * 0x10
                           );
                uVar15 = uVar15 + 0xb;
              }
              else {
                uVar8 = uVar22 * 3;
                uVar15 = (uVar22 + 3) * 3;
                uVar9 = (uVar22 + 2) * 3;
                auVar54 = vshufps_avx(*(int8_t (*) [16])
                                       (auStack_1e0 +
                                       (ulonglong)*(uint *)(&unknown_var_3712_ptr + (ulonglong)uVar8 * 4) *
                                       0x10),*(int8_t (*) [16])
                                              (auStack_1e0 +
                                              (ulonglong)
                                              *(uint *)(&unknown_var_3712_ptr + (ulonglong)(uVar8 + 3) * 4)
                                              * 0x10),0x44);
                auVar58 = vshufps_avx(*(int8_t (*) [16])
                                       (auStack_1e0 +
                                       (ulonglong)*(uint *)(&unknown_var_3712_ptr + (ulonglong)uVar8 * 4) *
                                       0x10),*(int8_t (*) [16])
                                              (auStack_1e0 +
                                              (ulonglong)
                                              *(uint *)(&unknown_var_3712_ptr + (ulonglong)(uVar8 + 3) * 4)
                                              * 0x10),0xee);
                auVar56 = vshufps_avx(*(int8_t (*) [16])
                                       (auStack_1e0 +
                                       (ulonglong)*(uint *)(&unknown_var_3712_ptr + (ulonglong)uVar9 * 4) *
                                       0x10),*(int8_t (*) [16])
                                              (auStack_1e0 +
                                              (ulonglong)
                                              *(uint *)(&unknown_var_3712_ptr + (ulonglong)uVar15 * 4) *
                                              0x10),0x44);
                auVar63 = vshufps_avx(*(int8_t (*) [16])
                                       (auStack_1e0 +
                                       (ulonglong)*(uint *)(&unknown_var_3712_ptr + (ulonglong)uVar9 * 4) *
                                       0x10),*(int8_t (*) [16])
                                              (auStack_1e0 +
                                              (ulonglong)
                                              *(uint *)(&unknown_var_3712_ptr + (ulonglong)uVar15 * 4) *
                                              0x10),0xee);
                auVar24 = vshufps_avx(auVar54,auVar56,0x88);
                auVar62 = vshufps_avx(auVar54,auVar56,0xdd);
                auStack_160 = vshufps_avx(auVar58,auVar63,0x88);
                auVar54 = vshufps_avx(*(int8_t (*) [16])
                                       (auStack_1e0 +
                                       (ulonglong)
                                       *(uint *)(&unknown_var_3712_ptr + (ulonglong)(uVar8 + 2) * 4) * 0x10
                                       ),*(int8_t (*) [16])
                                          (auStack_1e0 +
                                          (ulonglong)
                                          *(uint *)(&unknown_var_3712_ptr + (ulonglong)(uVar8 + 5) * 4) *
                                          0x10),0x44);
                auVar58 = vshufps_avx(*(int8_t (*) [16])
                                       (auStack_1e0 +
                                       (ulonglong)
                                       *(uint *)(&unknown_var_3712_ptr + (ulonglong)(uVar8 + 2) * 4) * 0x10
                                       ),*(int8_t (*) [16])
                                          (auStack_1e0 +
                                          (ulonglong)
                                          *(uint *)(&unknown_var_3712_ptr + (ulonglong)(uVar8 + 5) * 4) *
                                          0x10),0xee);
                auVar56 = vshufps_avx(*(int8_t (*) [16])
                                       (auStack_1e0 +
                                       (ulonglong)
                                       *(uint *)(&unknown_var_3712_ptr + (ulonglong)(uVar9 + 2) * 4) * 0x10
                                       ),*(int8_t (*) [16])
                                          (auStack_1e0 +
                                          (ulonglong)
                                          *(uint *)(&unknown_var_3712_ptr + (ulonglong)(uVar15 + 2) * 4) *
                                          0x10),0x44);
                auVar63 = vshufps_avx(*(int8_t (*) [16])
                                       (auStack_1e0 +
                                       (ulonglong)
                                       *(uint *)(&unknown_var_3712_ptr + (ulonglong)(uVar9 + 2) * 4) * 0x10
                                       ),*(int8_t (*) [16])
                                          (auStack_1e0 +
                                          (ulonglong)
                                          *(uint *)(&unknown_var_3712_ptr + (ulonglong)(uVar15 + 2) * 4) *
                                          0x10),0xee);
                auVar35 = vshufps_avx(auVar54,auVar56,0x88);
                auVar32 = vshufps_avx(auVar54,auVar56,0xdd);
                auVar54 = *(int8_t (*) [16])
                           (auStack_1e0 +
                           (ulonglong)*(uint *)(&unknown_var_3712_ptr + (ulonglong)(uVar8 + 1) * 4) * 0x10)
                ;
                auVar63 = vshufps_avx(auVar58,auVar63,0x88);
                auVar58 = *(int8_t (*) [16])
                           (auStack_1e0 +
                           (ulonglong)*(uint *)(&unknown_var_3712_ptr + (ulonglong)(uVar8 + 4) * 4) * 0x10)
                ;
                auVar56 = *(int8_t (*) [16])
                           (auStack_1e0 +
                           (ulonglong)*(uint *)(&unknown_var_3712_ptr + (ulonglong)(uVar9 + 1) * 4) * 0x10)
                ;
                uVar15 = uVar15 + 1;
              }
              auVar25 = vsubps_avx(auVar63,auStack_160);
              auVar63 = vcvtps2dq_avx(auVar62);
              auVar62 = vshufps_avx(auVar54,auVar58,0x44);
              auVar54 = vshufps_avx(auVar54,auVar58,0xee);
              auVar58 = vshufps_avx(auVar56,*(int8_t (*) [16])
                                             (auStack_1e0 +
                                             (ulonglong)
                                             *(uint *)(&unknown_var_3712_ptr + (ulonglong)uVar15 * 4) *
                                             0x10),0x44);
              auVar51 = vshufps_avx(auVar56,*(int8_t (*) [16])
                                             (auStack_1e0 +
                                             (ulonglong)
                                             *(uint *)(&unknown_var_3712_ptr + (ulonglong)uVar15 * 4) *
                                             0x10),0xee);
              auVar53 = vshufps_avx(auVar62,auVar58,0x88);
              auVar55 = vshufps_avx(auVar62,auVar58,0xdd);
              auVar58 = vcvtps2dq_avx(auVar32);
              auVar56 = vcvtps2dq_avx(auVar24);
              auVar62 = vcvtps2dq_avx(auVar35);
              auVar24 = vcvtps2dq_avx(auVar53);
              auVar32 = vcvtps2dq_avx(auVar55);
              auVar54 = vshufps_avx(auVar54,auVar51,0x88);
              auStack_3c0 = vpsubd_avx(auVar56,auVar24);
              auStack_400 = vpsubd_avx(auVar58,auVar32);
              auVar53 = vsubps_avx(auVar54,auStack_160);
              auVar54 = vpmulld_avx(auVar62,auVar32);
              auStack_3d0 = vpsubd_avx(auVar24,auVar62);
              auStack_3b0 = vpsubd_avx(auVar62,auVar56);
              auVar35 = vpmulld_avx(auVar24,auVar58);
              auStack_3a0 = vpsubd_avx(auVar54,auVar35);
              auVar54 = vpmulld_avx(auVar56,auVar32);
              auStack_3f0 = vpsubd_avx(auVar32,auVar63);
              auVar35 = vpmulld_avx(auVar56,auVar58);
              auStack_3e0 = vpsubd_avx(auVar63,auVar58);
              auVar51 = vpmulld_avx(auVar24,auVar63);
              auStack_390 = vpsubd_avx(auVar51,auVar54);
              auVar54 = vpmulld_avx(auVar62,auVar63);
              auStack_460 = vpsubd_avx(auVar35,auVar54);
              auVar54 = vpmulld_avx(auStack_3b0,auStack_3f0);
              auVar35 = vpmulld_avx(auStack_3c0,auStack_3e0);
              _auStack_450 = vpsubd_avx(auVar54,auVar35);
              auVar54 = vcvtdq2ps_avx(_auStack_450);
              auVar35 = vrcpps_avx(auVar54);
              auVar54 = vpmaxsd_avx(auVar56,auVar62);
              auVar56 = vpminsd_avx(auVar56,auVar62);
              auVar56 = vpminsd_avx(auVar56,auVar24);
              auStack_150._0_4_ = auVar25._0_4_ * auVar35._0_4_;
              auStack_150._4_4_ = auVar25._4_4_ * auVar35._4_4_;
              auStack_150._8_4_ = auVar25._8_4_ * auVar35._8_4_;
              auStack_150._12_4_ = auVar25._12_4_ * auVar35._12_4_;
              auVar54 = vpmaxsd_avx(auVar54,auVar24);
              auStack_430 = vpminsd_avx(auVar54,_DAT_180a3f840);
              afStack_140[0] = auVar53._0_4_ * auVar35._0_4_;
              afStack_140[1] = auVar53._4_4_ * auVar35._4_4_;
              afStack_140[2] = auVar53._8_4_ * auVar35._8_4_;
              afStack_140[3] = auVar53._12_4_ * auVar35._12_4_;
              auVar54 = vpmaxsd_avx(auVar56,ZEXT416(0) << 0x20);
              auStack_440 = vpand_avx(auVar54,_DAT_180a40760);
              auVar54 = vpminsd_avx(auVar63,auVar58);
              auVar56 = vpminsd_avx(auVar54,auVar32);
              auVar54 = vpmaxsd_avx(auVar63,auVar58);
              auVar58 = vpmaxsd_avx(auVar56,ZEXT416(0) << 0x20);
              auVar54 = vpmaxsd_avx(auVar54,auVar32);
              auStack_420 = vpand_avx(auVar58,_DAT_180a40770);
              lVar16 = 0;
              auStack_410 = vpminsd_avx(auVar54,_DAT_180a3f820);
              do {
                if (0 < *(int *)(auStack_450 + lVar16)) {
                  uVar7 = *(int32_t *)(auStack_3d0 + lVar16);
                  auVar39._4_4_ = uVar7;
                  auVar39._0_4_ = uVar7;
                  auVar39._8_4_ = uVar7;
                  auVar39._12_4_ = uVar7;
                  auVar39._16_4_ = uVar7;
                  auVar39._20_4_ = uVar7;
                  auVar39._24_4_ = uVar7;
                  auVar39._28_4_ = uVar7;
                  fStack_320 = *(float *)(auStack_160 + lVar16);
                  uVar7 = *(int32_t *)(auStack_400 + lVar16);
                  auVar37._4_4_ = uVar7;
                  auVar37._0_4_ = uVar7;
                  auVar37._8_4_ = uVar7;
                  auVar37._12_4_ = uVar7;
                  auVar37._16_4_ = uVar7;
                  auVar37._20_4_ = uVar7;
                  auVar37._24_4_ = uVar7;
                  auVar37._28_4_ = uVar7;
                  uVar7 = *(int32_t *)(auStack_3c0 + lVar16);
                  auVar57._4_4_ = uVar7;
                  auVar57._0_4_ = uVar7;
                  auVar57._8_4_ = uVar7;
                  auVar57._12_4_ = uVar7;
                  auVar57._16_4_ = uVar7;
                  auVar57._20_4_ = uVar7;
                  auVar57._24_4_ = uVar7;
                  auVar57._28_4_ = uVar7;
                  uVar7 = *(int32_t *)(auStack_3b0 + lVar16);
                  auVar59._4_4_ = uVar7;
                  auVar59._0_4_ = uVar7;
                  auVar59._8_4_ = uVar7;
                  auVar59._12_4_ = uVar7;
                  auVar59._16_4_ = uVar7;
                  auVar59._20_4_ = uVar7;
                  auVar59._24_4_ = uVar7;
                  auVar59._28_4_ = uVar7;
                  uVar15 = *(uint *)(auStack_420 + lVar16);
                  uVar7 = *(int32_t *)(auStack_3f0 + lVar16);
                  auVar64._4_4_ = uVar7;
                  auVar64._0_4_ = uVar7;
                  auVar64._8_4_ = uVar7;
                  auVar64._12_4_ = uVar7;
                  auVar64._16_4_ = uVar7;
                  auVar64._20_4_ = uVar7;
                  auVar64._24_4_ = uVar7;
                  auVar64._28_4_ = uVar7;
                  uVar7 = *(int32_t *)(auStack_3e0 + lVar16);
                  auVar66._4_4_ = uVar7;
                  auVar66._0_4_ = uVar7;
                  auVar66._8_4_ = uVar7;
                  auVar66._12_4_ = uVar7;
                  auVar66._16_4_ = uVar7;
                  auVar66._20_4_ = uVar7;
                  auVar66._24_4_ = uVar7;
                  auVar66._28_4_ = uVar7;
                  fVar61 = *(float *)(auStack_150 + lVar16);
                  auStack_340._4_4_ = fVar61;
                  auStack_340._0_4_ = fVar61;
                  auStack_340._8_4_ = fVar61;
                  auStack_340._12_4_ = fVar61;
                  auStack_340._16_4_ = fVar61;
                  auStack_340._20_4_ = fVar61;
                  auStack_340._24_4_ = fVar61;
                  auStack_340._28_4_ = fVar61;
                  fVar67 = *(float *)((longlong)afStack_140 + lVar16);
                  auStack_300._4_4_ = fVar67;
                  auStack_300._0_4_ = fVar67;
                  auStack_300._8_4_ = fVar67;
                  auStack_300._12_4_ = fVar67;
                  auStack_300._16_4_ = fVar67;
                  auStack_300._20_4_ = fVar67;
                  auStack_300._24_4_ = fVar67;
                  auStack_300._28_4_ = fVar67;
                  uVar8 = *(uint *)(auStack_440 + lVar16);
                  auStack_2e0 = vpslld_avx2(auVar37,2);
                  auStack_260 = vpslld_avx2(auVar39,1);
                  _auStack_380 = vpslld_avx2(auVar57,1);
                  auStack_120 = vpslld_avx2(auVar59,1);
                  auStack_2c0 = vpslld_avx2(auVar64,2);
                  auStack_2a0 = vpslld_avx2(auVar66,2);
                  auVar54 = vpshufd_avx(ZEXT416(uVar15),0);
                  auVar33._16_16_ = auVar54;
                  auVar33._0_16_ = auVar54;
                  auVar33 = vpaddd_avx2(auVar33,_DAT_180a407e0);
                  auVar29 = vpmulld_avx2(auVar33,auVar39);
                  auVar54 = vpshufd_avx(ZEXT416(uVar8),0);
                  auVar26._16_16_ = auVar54;
                  auVar26._0_16_ = auVar54;
                  auVar26 = vpaddd_avx2(auVar26,_DAT_180a40820);
                  uVar7 = *(int32_t *)(auStack_3a0 + lVar16);
                  auVar27._4_4_ = uVar7;
                  auVar27._0_4_ = uVar7;
                  auVar27._8_4_ = uVar7;
                  auVar27._12_4_ = uVar7;
                  auVar27._16_4_ = uVar7;
                  auVar27._20_4_ = uVar7;
                  auVar27._24_4_ = uVar7;
                  auVar27._28_4_ = uVar7;
                  auVar29 = vpaddd_avx2(auVar27,auVar29);
                  auVar27 = vpmulld_avx2(auVar26,auVar37);
                  _auStack_200 = vpaddd_avx2(auVar29,auVar27);
                  uVar7 = *(int32_t *)(auStack_390 + lVar16);
                  auVar28._4_4_ = uVar7;
                  auVar28._0_4_ = uVar7;
                  auVar28._8_4_ = uVar7;
                  auVar28._12_4_ = uVar7;
                  auVar28._16_4_ = uVar7;
                  auVar28._20_4_ = uVar7;
                  auVar28._24_4_ = uVar7;
                  auVar28._28_4_ = uVar7;
                  auVar29 = vpmulld_avx2(auVar33,auVar57);
                  auVar29 = vpaddd_avx2(auVar28,auVar29);
                  auVar27 = vpmulld_avx2(auVar26,auVar64);
                  _auStack_220 = vpaddd_avx2(auVar29,auVar27);
                  uVar7 = *(int32_t *)(auStack_460 + lVar16);
                  auVar29._4_4_ = uVar7;
                  auVar29._0_4_ = uVar7;
                  auVar29._8_4_ = uVar7;
                  auVar29._12_4_ = uVar7;
                  auVar29._16_4_ = uVar7;
                  auVar29._20_4_ = uVar7;
                  auVar29._24_4_ = uVar7;
                  auVar29._28_4_ = uVar7;
                  auVar33 = vpmulld_avx2(auVar33,auVar59);
                  auVar33 = vpaddd_avx2(auVar29,auVar33);
                  auVar29 = vpmulld_avx2(auVar26,auVar66);
                  _auStack_240 = vpaddd_avx2(auVar33,auVar29);
                  auVar33 = vcvtdq2ps_avx(auStack_2a0);
                  auVar26 = vcvtdq2ps_avx(auStack_2c0);
                  auStack_280._0_4_ = auVar26._0_4_ * fVar61 + auVar33._0_4_ * fVar67;
                  auStack_280._4_4_ = auVar26._4_4_ * fVar61 + auVar33._4_4_ * fVar67;
                  auStack_280._8_4_ = auVar26._8_4_ * fVar61 + auVar33._8_4_ * fVar67;
                  auStack_280._12_4_ = auVar26._12_4_ * fVar61 + auVar33._12_4_ * fVar67;
                  auStack_280._16_4_ = auVar26._16_4_ * fVar61 + auVar33._16_4_ * fVar67;
                  auStack_280._20_4_ = auVar26._20_4_ * fVar61 + auVar33._20_4_ * fVar67;
                  auStack_280._24_4_ = auVar26._24_4_ * fVar61 + auVar33._24_4_ * fVar67;
                  auStack_280._28_4_ = auStack_240._28_4_ + auVar29._28_4_;
                  auVar36._4_4_ = (uVar15 * 0x140 + uVar8) * 2;
                  for (; fStack_31c = fStack_320, fStack_318 = fStack_320, fStack_314 = fStack_320,
                      fStack_310 = fStack_320, fStack_30c = fStack_320, fStack_308 = fStack_320,
                      fStack_304 = fStack_320, (int)uVar15 < *(int *)(auStack_410 + lVar16);
                      uVar15 = uVar15 + 2) {
                    auVar60 = ZEXT1664((int8_t  [16])0x0);
                    auVar29 = auVar60._0_32_;
                    auVar33 = vcvtdq2ps_avx(_auStack_220);
                    auVar26 = vcvtdq2ps_avx(_auStack_240);
                    auVar40._0_4_ = auVar33._0_4_ * fVar61 + fStack_320 + auVar26._0_4_ * fVar67;
                    auVar40._4_4_ = auVar33._4_4_ * fVar61 + fStack_320 + auVar26._4_4_ * fVar67;
                    auVar40._8_4_ = auVar33._8_4_ * fVar61 + fStack_320 + auVar26._8_4_ * fVar67;
                    auVar40._12_4_ = auVar33._12_4_ * fVar61 + fStack_320 + auVar26._12_4_ * fVar67;
                    auVar40._16_4_ = auVar33._16_4_ * fVar61 + fStack_320 + auVar26._16_4_ * fVar67;
                    auVar40._20_4_ = auVar33._20_4_ * fVar61 + fStack_320 + auVar26._20_4_ * fVar67;
                    auVar40._24_4_ = auVar33._24_4_ * fVar61 + fStack_320 + auVar26._24_4_ * fVar67;
                    auVar40._28_4_ = fStack_320 + 0.0 + auVar33._28_4_;
                    if ((int)uVar8 < *(int *)(auStack_430 + lVar16)) {
                      uVar19 = (ulonglong)(((*(int *)(auStack_430 + lVar16) - uVar8) - 1 >> 2) + 1);
                      auVar33 = _auStack_200;
                      auVar26 = _auStack_220;
                      auVar27 = _auStack_240;
                      iVar21 = auVar36._4_4_;
                      do {
                        auVar29 = vpor_avx2(auVar26,auVar33);
                        auVar33 = vpaddd_avx2(auVar33,auStack_2e0);
                        auVar26 = vpaddd_avx2(auVar26,auStack_2c0);
                        lVar20 = (longlong)iVar21;
                        iVar21 = iVar21 + 8;
                        auVar28 = vpor_avx2(auVar29,auVar27);
                        auVar27 = vpaddd_avx2(auVar27,auStack_2a0);
                        auVar29 = vcmpps_avx(auVar40,*(int8_t (*) [32])
                                                      (*(longlong *)(param_1 + 0x1f8 + lVar23 * 8) +
                                                      lVar20 * 4),0x1d);
                        auVar41._0_4_ = auVar40._0_4_ + auStack_280._0_4_;
                        auVar41._4_4_ = auVar40._4_4_ + auStack_280._4_4_;
                        auVar41._8_4_ = auVar40._8_4_ + auStack_280._8_4_;
                        auVar41._12_4_ = auVar40._12_4_ + auStack_280._12_4_;
                        auVar41._16_4_ = auVar40._16_4_ + auStack_280._16_4_;
                        auVar41._20_4_ = auVar40._20_4_ + auStack_280._20_4_;
                        auVar41._24_4_ = auVar40._24_4_ + auStack_280._24_4_;
                        auVar41._28_4_ = auVar40._28_4_ + auStack_280._28_4_;
                        auVar29 = vpandn_avx2(auVar28,auVar29);
                        auVar29 = vpor_avx2(auVar29,auVar60._0_32_);
                        auVar60 = ZEXT3264(auVar29);
                        uVar19 = uVar19 - 1;
                        auVar40 = auVar41;
                      } while (uVar19 != 0);
                    }
                    if ((_DAT_180a40880 & auVar29) != (int8_t  [32])0x0) goto LAB_18048f1aa;
                    _auStack_200 = vpaddd_avx2(_auStack_200,auStack_260);
                    _auStack_220 = vpaddd_avx2(_auStack_220,_auStack_380);
                    _auStack_240 = vpaddd_avx2(_auStack_240,auStack_120);
                    auVar36._4_4_ = auVar36._4_4_ + 0x500;
                  }
                }
                lVar16 = lVar16 + 4;
              } while (lVar16 < 0x10);
              uVar22 = uVar22 + 4;
            } while (uVar22 < 0xc);
            break;
          }
          auVar36._4_4_ = auVar36._4_4_ + 1;
          iVar21 = iVar21 + 0x50;
        } while (auVar36._4_4_ <= auVar36._12_4_);
      }
    }
  }
LAB_18048f1aa:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_e0 ^ (ulonglong)auStack_498);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





