#include "TaleWorlds.Native.Split.h"

// 03_rendering_part407_sub002_sub002.c - 1 个函数

// 函数: void FUN_1804920b0(longlong param_1,float *param_2,int param_3)
void FUN_1804920b0(longlong param_1,float *param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  int iVar26;
  longlong lVar27;
  float *pfVar28;
  int8_t (*pauVar29) [16];
  ulonglong uVar30;
  int iVar31;
  longlong lVar32;
  int iVar33;
  uint uVar34;
  uint uVar35;
  uint uVar42;
  uint uVar43;
  int8_t auVar36 [16];
  int8_t auVar37 [16];
  int8_t auVar38 [16];
  int8_t auVar39 [16];
  uint uVar44;
  int8_t auVar40 [16];
  int8_t auVar41 [16];
  int8_t auVar45 [16];
  int8_t auVar46 [16];
  float fVar50;
  float fVar51;
  int8_t auVar47 [16];
  int8_t auVar48 [16];
  int8_t auVar49 [16];
  float fVar52;
  int8_t auVar53 [16];
  int8_t auVar54 [16];
  int8_t auVar55 [16];
  int8_t auVar56 [16];
  int8_t auVar57 [16];
  int8_t auVar58 [16];
  int8_t auVar59 [16];
  int8_t auVar60 [16];
  int8_t auVar61 [16];
  int8_t auVar62 [16];
  int8_t auVar63 [16];
  int8_t auVar64 [16];
  int8_t auVar65 [16];
  float fVar69;
  int8_t auVar66 [16];
  int8_t auVar67 [16];
  int8_t auVar68 [16];
  int iVar73;
  int iVar74;
  int8_t auVar70 [16];
  int8_t auVar71 [16];
  int8_t auVar72 [16];
  int iVar75;
  uint uVar76;
  uint uVar79;
  int iVar80;
  uint uVar81;
  int iVar82;
  int8_t auVar77 [16];
  uint uVar83;
  int8_t auVar78 [16];
  int iVar84;
  int8_t auVar85 [16];
  int8_t auVar86 [16];
  int8_t auVar87 [16];
  int8_t auVar88 [16];
  int8_t auVar89 [16];
  uint auStack_2e8 [4];
  int8_t auStack_2d8 [16];
  int iStack_2c8;
  int iStack_2c4;
  int iStack_2c0;
  int iStack_2bc;
  int8_t auStack_2b8 [16];
  uint auStack_2a8 [4];
  int8_t auStack_298 [16];
  int8_t auStack_288 [16];
  uint auStack_278 [4];
  int aiStack_268 [4];
  int8_t auStack_258 [16];
  int8_t auStack_248 [16];
  int aiStack_238 [4];
  int8_t auStack_228 [16];
  int8_t auStack_218 [16];
  int aiStack_208 [4];
  int8_t auStack_1f8 [16];
  int8_t auStack_1e8 [16];
  float afStack_1d8 [4];
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float afStack_1b8 [4];
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float afStack_198 [4];
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float afStack_178 [4];
  float afStack_168 [4];
  float afStack_158 [4];
  float afStack_148 [8];
  int8_t auStack_128 [96];
  ulonglong uStack_c8;
  
  uStack_c8 = _DAT_180bf00a8 ^ (ulonglong)auStack_2e8;
  fVar69 = *param_2;
  fVar1 = param_2[1];
  fVar50 = param_2[2];
  fVar51 = param_2[4];
  fVar52 = param_2[5];
  fVar6 = param_2[6];
  pfVar28 = *(float **)(param_1 + 0x1f0 + (longlong)param_3 * 8);
  lVar27 = 0;
  lVar32 = 2;
  fVar7 = pfVar28[0xc];
  fVar8 = pfVar28[0xd];
  fVar9 = pfVar28[0xe];
  fVar10 = pfVar28[0xf];
  afStack_1b8[0] = *pfVar28 * fVar69;
  afStack_1b8[1] = pfVar28[1] * fVar69;
  afStack_1b8[2] = pfVar28[2] * fVar69;
  afStack_1b8[3] = pfVar28[3] * fVar69;
  fStack_1a8 = *pfVar28 * fVar51;
  fStack_1a4 = pfVar28[1] * fVar51;
  fStack_1a0 = pfVar28[2] * fVar51;
  fStack_19c = pfVar28[3] * fVar51;
  pauVar29 = (int8_t (*) [16])auStack_128;
  afStack_1d8[0] = pfVar28[4] * fVar1;
  afStack_1d8[1] = pfVar28[5] * fVar1;
  afStack_1d8[2] = pfVar28[6] * fVar1;
  afStack_1d8[3] = pfVar28[7] * fVar1;
  fStack_1c8 = pfVar28[4] * fVar52;
  fStack_1c4 = pfVar28[5] * fVar52;
  fStack_1c0 = pfVar28[6] * fVar52;
  fStack_1bc = pfVar28[7] * fVar52;
  afStack_198[0] = pfVar28[8] * fVar50;
  afStack_198[1] = pfVar28[9] * fVar50;
  afStack_198[2] = pfVar28[10] * fVar50;
  afStack_198[3] = pfVar28[0xb] * fVar50;
  fStack_188 = pfVar28[8] * fVar6;
  fStack_184 = pfVar28[9] * fVar6;
  fStack_180 = pfVar28[10] * fVar6;
  fStack_17c = pfVar28[0xb] * fVar6;
  auVar60 = _DAT_180a40740;
  auVar66 = _DAT_180a40490;
  auVar53 = _DAT_180a40780;
  do {
    uVar30 = (ulonglong)*(uint *)(&unknown_var_4160_ptr + lVar27);
    uVar15 = (ulonglong)*(uint *)(&unknown_var_4096_ptr + lVar27);
    uVar16 = (ulonglong)*(uint *)(&unknown_var_4128_ptr + lVar27);
    auVar63._0_4_ =
         afStack_1b8[uVar30 * 4] + fVar7 + afStack_1d8[uVar15 * 4] + afStack_198[uVar16 * 4];
    auVar63._4_4_ =
         afStack_1b8[uVar30 * 4 + 1] + fVar8 + afStack_1d8[uVar15 * 4 + 1] +
         afStack_198[uVar16 * 4 + 1];
    auVar63._8_4_ =
         afStack_1b8[uVar30 * 4 + 2] + fVar9 + afStack_1d8[uVar15 * 4 + 2] +
         afStack_198[uVar16 * 4 + 2];
    auVar63._12_4_ =
         afStack_1b8[uVar30 * 4 + 3] + fVar10 + afStack_1d8[uVar15 * 4 + 3] +
         afStack_198[uVar16 * 4 + 3];
    uVar30 = (ulonglong)*(uint *)(&unknown_var_4164_ptr + lVar27);
    fVar69 = afStack_1b8[uVar30 * 4];
    fVar1 = afStack_1b8[uVar30 * 4 + 1];
    fVar50 = afStack_1b8[uVar30 * 4 + 2];
    fVar51 = afStack_1b8[uVar30 * 4 + 3];
    uVar30 = (ulonglong)*(uint *)(&unknown_var_4100_ptr + lVar27);
    auVar64._4_4_ = auVar63._12_4_;
    auVar64._0_4_ = auVar63._12_4_;
    auVar64._8_4_ = auVar63._12_4_;
    auVar64._12_4_ = auVar63._12_4_;
    auVar64 = divps(auVar63,auVar64);
    fVar52 = afStack_1d8[uVar30 * 4];
    fVar6 = afStack_1d8[uVar30 * 4 + 1];
    fVar11 = afStack_1d8[uVar30 * 4 + 2];
    fVar12 = afStack_1d8[uVar30 * 4 + 3];
    uVar30 = (ulonglong)*(uint *)(&unknown_var_4132_ptr + lVar27);
    uVar35 = auVar53._4_4_;
    uVar42 = auVar53._8_4_;
    uVar43 = auVar53._12_4_;
    pauVar29[-2] = auVar64;
    auVar70 = minps(auVar66,auVar64);
    auVar59._0_4_ = fVar69 + fVar7 + fVar52 + afStack_198[uVar30 * 4];
    auVar59._4_4_ = fVar1 + fVar8 + fVar6 + afStack_198[uVar30 * 4 + 1];
    auVar59._8_4_ = fVar50 + fVar9 + fVar11 + afStack_198[uVar30 * 4 + 2];
    auVar59._12_4_ = fVar51 + fVar10 + fVar12 + afStack_198[uVar30 * 4 + 3];
    uVar30 = (ulonglong)*(uint *)(&unknown_var_4168_ptr + lVar27);
    auVar66 = maxps(auVar60,auVar64);
    fVar69 = afStack_1b8[uVar30 * 4];
    fVar1 = afStack_1b8[uVar30 * 4 + 1];
    fVar50 = afStack_1b8[uVar30 * 4 + 2];
    fVar51 = afStack_1b8[uVar30 * 4 + 3];
    uVar30 = (ulonglong)*(uint *)(&unknown_var_4104_ptr + lVar27);
    auVar60._4_4_ = auVar59._12_4_;
    auVar60._0_4_ = auVar59._12_4_;
    auVar60._8_4_ = auVar59._12_4_;
    auVar60._12_4_ = auVar59._12_4_;
    auVar60 = divps(auVar59,auVar60);
    fVar52 = afStack_1d8[uVar30 * 4];
    fVar6 = afStack_1d8[uVar30 * 4 + 1];
    fVar11 = afStack_1d8[uVar30 * 4 + 2];
    fVar12 = afStack_1d8[uVar30 * 4 + 3];
    uVar30 = (ulonglong)*(uint *)(&unknown_var_4136_ptr + lVar27);
    pauVar29[-1] = auVar60;
    auVar70 = minps(auVar70,auVar60);
    auVar56._0_4_ = fVar69 + fVar7 + fVar52 + afStack_198[uVar30 * 4];
    auVar56._4_4_ = fVar1 + fVar8 + fVar6 + afStack_198[uVar30 * 4 + 1];
    auVar56._8_4_ = fVar50 + fVar9 + fVar11 + afStack_198[uVar30 * 4 + 2];
    auVar56._12_4_ = fVar51 + fVar10 + fVar12 + afStack_198[uVar30 * 4 + 3];
    uVar30 = (ulonglong)*(uint *)(&unknown_var_4172_ptr + lVar27);
    auVar64 = maxps(auVar66,auVar60);
    auVar66._4_4_ = auVar56._12_4_;
    auVar66._0_4_ = auVar56._12_4_;
    auVar66._8_4_ = auVar56._12_4_;
    auVar66._12_4_ = auVar56._12_4_;
    auVar60 = divps(auVar56,auVar66);
    fVar69 = afStack_1b8[uVar30 * 4];
    fVar1 = afStack_1b8[uVar30 * 4 + 1];
    fVar50 = afStack_1b8[uVar30 * 4 + 2];
    fVar51 = afStack_1b8[uVar30 * 4 + 3];
    uVar30 = (ulonglong)*(uint *)(&unknown_var_4108_ptr + lVar27);
    *pauVar29 = auVar60;
    auVar66 = minps(auVar70,auVar60);
    uVar34 = *(uint *)(&unknown_var_4140_ptr + lVar27);
    uVar15 = (ulonglong)uVar34;
    auVar64 = maxps(auVar64,auVar60);
    auVar47._0_4_ = afStack_198[uVar15 * 4] + afStack_1d8[uVar30 * 4] + fVar69 + fVar7;
    auVar47._4_4_ = afStack_198[uVar15 * 4 + 1] + afStack_1d8[uVar30 * 4 + 1] + fVar1 + fVar8;
    auVar47._8_4_ = afStack_198[uVar15 * 4 + 2] + afStack_1d8[uVar30 * 4 + 2] + fVar50 + fVar9;
    auVar47._12_4_ = afStack_198[uVar15 * 4 + 3] + afStack_1d8[uVar30 * 4 + 3] + fVar51 + fVar10;
    auVar70._4_4_ = auVar47._12_4_;
    auVar70._0_4_ = auVar47._12_4_;
    auVar70._8_4_ = auVar47._12_4_;
    auVar70._12_4_ = auVar47._12_4_;
    auVar60 = divps(auVar47,auVar70);
    pauVar29[1] = auVar60;
    auVar53._0_4_ =
         -(uint)(auVar47._8_4_ <= auVar47._12_4_) &
         -(uint)(auVar56._8_4_ <= auVar56._12_4_) &
         -(uint)(auVar59._8_4_ <= auVar59._12_4_) &
         -(uint)(auVar63._8_4_ <= auVar63._12_4_) & auVar53._0_4_;
    auVar53._4_4_ =
         -(uint)(auVar47._8_4_ <= auVar47._12_4_) &
         -(uint)(auVar56._8_4_ <= auVar56._12_4_) &
         -(uint)(auVar59._8_4_ <= auVar59._12_4_) &
         -(uint)(auVar63._8_4_ <= auVar63._12_4_) & uVar35;
    auVar53._8_4_ =
         -(uint)(auVar47._8_4_ <= auVar47._12_4_) &
         -(uint)(auVar56._8_4_ <= auVar56._12_4_) &
         -(uint)(auVar59._8_4_ <= auVar59._12_4_) &
         -(uint)(auVar63._8_4_ <= auVar63._12_4_) & uVar42;
    auVar53._12_4_ =
         -(uint)(auVar47._8_4_ <= auVar47._12_4_) &
         -(uint)(auVar56._8_4_ <= auVar56._12_4_) &
         -(uint)(auVar59._8_4_ <= auVar59._12_4_) &
         -(uint)(auVar63._8_4_ <= auVar63._12_4_) & uVar43;
    auVar66 = minps(auVar66,auVar60);
    lVar27 = lVar27 + 0x10;
    pauVar29 = pauVar29 + 4;
    auVar60 = maxps(auVar64,auVar60);
    lVar32 = lVar32 + -1;
  } while (lVar32 != 0);
  iVar13 = movmskps(uVar34 * 2,auVar53);
  if (iVar13 == 0xf) {
    auVar60 = minps(auVar60,_DAT_180a403e0);
    auVar66 = maxps(auVar66,_DAT_180a40720);
    fVar69 = auVar60._8_4_;
    auVar36._4_4_ = -(uint)(auVar60._4_4_ < auVar66._4_4_);
    auVar36._0_4_ = -(uint)(auVar60._0_4_ < auVar66._0_4_);
    auVar36._8_4_ = -(uint)(fVar69 < auVar66._8_4_);
    auVar36._12_4_ = -(uint)(auVar60._12_4_ < auVar66._12_4_);
    iVar13 = movmskps(0xf,auVar36);
    if (iVar13 == 0) {
      auVar53 = ZEXT816(0);
      auVar37._4_4_ = fVar69;
      auVar37._0_4_ = fVar69;
      auStack_2d8._0_4_ = (int)auVar66._0_4_ >> 3;
      auStack_2d8._4_4_ = (int)auVar66._4_4_ >> 3;
      auStack_2d8._8_4_ = (int)auVar60._0_4_ >> 3;
      auStack_2d8._12_4_ = (int)auVar60._4_4_ >> 3;
      if ((int)auStack_2d8._4_4_ <= (int)auStack_2d8._12_4_) {
        iVar33 = auStack_2d8._4_4_ * 0x50;
        iVar13 = auStack_2d8._4_4_;
        do {
          iVar14 = iVar33;
          if ((int)auStack_2d8._0_4_ <= (int)auStack_2d8._8_4_) {
            uVar30 = (ulonglong)((auStack_2d8._8_4_ - auStack_2d8._0_4_) + 1);
            pfVar28 = (float *)(*(longlong *)(param_1 + 0x260) + (longlong)iVar33 * 4 +
                               (longlong)(int)auStack_2d8._0_4_ * 4);
            do {
              auVar37._8_4_ = fVar69;
              auVar37._12_4_ = fVar69;
              auVar38._4_12_ = auVar37._4_12_;
              auVar38._0_4_ = -(uint)(*pfVar28 <= fVar69);
              auVar53 = auVar53 | auVar38;
              uVar30 = uVar30 - 1;
              pfVar28 = pfVar28 + 1;
              iVar14 = auStack_2d8._0_4_;
            } while (uVar30 != 0);
          }
          iVar14 = movmskps(iVar14,auVar53);
          if (iVar14 != 0) {
            MXCSR = MXCSR | 0x8040;
            uVar34 = 0;
            do {
              uVar35 = uVar34 * 3;
              uVar43 = (uVar34 + 3) * 3;
              uVar42 = (uVar34 + 2) * 3;
              uVar30 = (ulonglong)*(uint *)(&unknown_var_3952_ptr + (ulonglong)uVar35 * 4);
              afStack_178[0] = afStack_148[uVar30 * 4 + 2];
              uVar15 = (ulonglong)*(uint *)(&unknown_var_3952_ptr + (ulonglong)(uVar35 + 3) * 4);
              afStack_178[1] = afStack_148[uVar15 * 4 + 2];
              uVar16 = (ulonglong)*(uint *)(&unknown_var_3952_ptr + (ulonglong)uVar42 * 4);
              afStack_178[2] = afStack_148[uVar16 * 4 + 2];
              uVar17 = (ulonglong)*(uint *)(&unknown_var_3952_ptr + (ulonglong)uVar43 * 4);
              afStack_178[3] = afStack_148[uVar17 * 4 + 2];
              uVar18 = (ulonglong)*(uint *)(&unknown_var_3952_ptr + (ulonglong)(uVar35 + 2) * 4);
              uVar19 = (ulonglong)*(uint *)(&unknown_var_3952_ptr + (ulonglong)(uVar35 + 5) * 4);
              auVar77._0_4_ = (int)afStack_148[uVar30 * 4];
              auVar77._4_4_ = (int)afStack_148[uVar15 * 4];
              auVar77._8_4_ = (int)afStack_148[uVar16 * 4];
              auVar77._12_4_ = (int)afStack_148[uVar17 * 4];
              uVar20 = (ulonglong)*(uint *)(&unknown_var_3952_ptr + (ulonglong)(uVar42 + 2) * 4);
              uVar21 = (ulonglong)*(uint *)(&unknown_var_3952_ptr + (ulonglong)(uVar43 + 2) * 4);
              uVar22 = (ulonglong)*(uint *)(&unknown_var_3952_ptr + (ulonglong)(uVar35 + 1) * 4);
              uVar23 = (ulonglong)*(uint *)(&unknown_var_3952_ptr + (ulonglong)(uVar35 + 4) * 4);
              uVar24 = (ulonglong)*(uint *)(&unknown_var_3952_ptr + (ulonglong)(uVar42 + 1) * 4);
              uVar25 = (ulonglong)*(uint *)(&unknown_var_3952_ptr + (ulonglong)(uVar43 + 1) * 4);
              auVar85._0_4_ = (int)afStack_148[uVar22 * 4 + 1];
              auVar85._4_4_ = (int)afStack_148[uVar23 * 4 + 1];
              auVar85._8_4_ = (int)afStack_148[uVar24 * 4 + 1];
              auVar85._12_4_ = (int)afStack_148[uVar25 * 4 + 1];
              lVar27 = 0;
              auVar71._0_4_ = (int)afStack_148[uVar18 * 4];
              auVar71._4_4_ = (int)afStack_148[uVar19 * 4];
              auVar71._8_4_ = (int)afStack_148[uVar20 * 4];
              auVar71._12_4_ = (int)afStack_148[uVar21 * 4];
              auVar88._0_4_ = (int)afStack_148[uVar18 * 4 + 1];
              auVar88._4_4_ = (int)afStack_148[uVar19 * 4 + 1];
              auVar88._8_4_ = (int)afStack_148[uVar20 * 4 + 1];
              auVar88._12_4_ = (int)afStack_148[uVar21 * 4 + 1];
              auVar89._0_4_ = (int)afStack_148[uVar30 * 4 + 1];
              auVar89._4_4_ = (int)afStack_148[uVar15 * 4 + 1];
              auVar89._8_4_ = (int)afStack_148[uVar16 * 4 + 1];
              auVar89._12_4_ = (int)afStack_148[uVar17 * 4 + 1];
              auVar67._0_4_ = (int)afStack_148[uVar22 * 4];
              auVar67._4_4_ = (int)afStack_148[uVar23 * 4];
              auVar67._8_4_ = (int)afStack_148[uVar24 * 4];
              auVar67._12_4_ = (int)afStack_148[uVar25 * 4];
              auStack_228._0_4_ = auVar77._0_4_ - auVar67._0_4_;
              auStack_228._4_4_ = auVar77._4_4_ - auVar67._4_4_;
              auStack_228._8_4_ = auVar77._8_4_ - auVar67._8_4_;
              auStack_228._12_4_ = auVar77._12_4_ - auVar67._12_4_;
              auStack_248._0_4_ = auVar89._0_4_ - auVar88._0_4_;
              auStack_248._4_4_ = auVar89._4_4_ - auVar88._4_4_;
              auStack_248._8_4_ = auVar89._8_4_ - auVar88._8_4_;
              auStack_248._12_4_ = auVar89._12_4_ - auVar88._12_4_;
              aiStack_268[0] = auVar88._0_4_ - auVar85._0_4_;
              aiStack_268[1] = auVar88._4_4_ - auVar85._4_4_;
              aiStack_268[2] = auVar88._8_4_ - auVar85._8_4_;
              aiStack_268[3] = auVar88._12_4_ - auVar85._12_4_;
              auVar53 = pmulld(auVar71,auVar85);
              auVar64 = pmulld(auVar67,auVar89);
              auStack_218._0_4_ = auVar71._0_4_ - auVar77._0_4_;
              auStack_218._4_4_ = auVar71._4_4_ - auVar77._4_4_;
              auStack_218._8_4_ = auVar71._8_4_ - auVar77._8_4_;
              auStack_218._12_4_ = auVar71._12_4_ - auVar77._12_4_;
              aiStack_238[0] = auVar67._0_4_ - auVar71._0_4_;
              aiStack_238[1] = auVar67._4_4_ - auVar71._4_4_;
              aiStack_238[2] = auVar67._8_4_ - auVar71._8_4_;
              aiStack_238[3] = auVar67._12_4_ - auVar71._12_4_;
              auStack_258._0_4_ = auVar85._0_4_ - auVar89._0_4_;
              auStack_258._4_4_ = auVar85._4_4_ - auVar89._4_4_;
              auStack_258._8_4_ = auVar85._8_4_ - auVar89._8_4_;
              auStack_258._12_4_ = auVar85._12_4_ - auVar89._12_4_;
              auVar60 = pmulld(auVar67,auVar88);
              auVar66 = pmulld(auVar77,auVar85);
              auStack_1f8._0_4_ = auVar64._0_4_ - auVar66._0_4_;
              auStack_1f8._4_4_ = auVar64._4_4_ - auVar66._4_4_;
              auStack_1f8._8_4_ = auVar64._8_4_ - auVar66._8_4_;
              auStack_1f8._12_4_ = auVar64._12_4_ - auVar66._12_4_;
              aiStack_208[0] = auVar53._0_4_ - auVar60._0_4_;
              aiStack_208[1] = auVar53._4_4_ - auVar60._4_4_;
              aiStack_208[2] = auVar53._8_4_ - auVar60._8_4_;
              aiStack_208[3] = auVar53._12_4_ - auVar60._12_4_;
              auVar66 = pmulld(auVar77,auVar88);
              auVar60 = pmulld(auVar71,auVar89);
              auStack_1e8._0_4_ = auVar66._0_4_ - auVar60._0_4_;
              auStack_1e8._4_4_ = auVar66._4_4_ - auVar60._4_4_;
              auStack_1e8._8_4_ = auVar66._8_4_ - auVar60._8_4_;
              auStack_1e8._12_4_ = auVar66._12_4_ - auVar60._12_4_;
              auVar60 = pmulld(auStack_218,auStack_258);
              auVar66 = pmulld(auStack_228,auStack_248);
              auStack_2b8._0_4_ = auVar60._0_4_ - auVar66._0_4_;
              auStack_2b8._4_4_ = auVar60._4_4_ - auVar66._4_4_;
              auStack_2b8._8_4_ = auVar60._8_4_ - auVar66._8_4_;
              auStack_2b8._12_4_ = auVar60._12_4_ - auVar66._12_4_;
              auVar39._0_4_ = (float)auStack_2b8._0_4_;
              auVar39._4_4_ = (float)auStack_2b8._4_4_;
              auVar39._8_4_ = (float)auStack_2b8._8_4_;
              auVar39._12_4_ = (float)auStack_2b8._12_4_;
              auVar60 = rcpps(auStack_1e8,auVar39);
              uVar76 = (uint)(auVar77._0_4_ < auVar71._0_4_) * auVar71._0_4_ |
                       (uint)(auVar77._0_4_ >= auVar71._0_4_) * auVar77._0_4_;
              uVar79 = (uint)(auVar77._4_4_ < auVar71._4_4_) * auVar71._4_4_ |
                       (uint)(auVar77._4_4_ >= auVar71._4_4_) * auVar77._4_4_;
              uVar81 = (uint)(auVar77._8_4_ < auVar71._8_4_) * auVar71._8_4_ |
                       (uint)(auVar77._8_4_ >= auVar71._8_4_) * auVar77._8_4_;
              uVar83 = (uint)(auVar77._12_4_ < auVar71._12_4_) * auVar71._12_4_ |
                       (uint)(auVar77._12_4_ >= auVar71._12_4_) * auVar77._12_4_;
              uVar35 = (uint)(auVar71._0_4_ < auVar77._0_4_) * auVar71._0_4_ |
                       (uint)(auVar71._0_4_ >= auVar77._0_4_) * auVar77._0_4_;
              uVar42 = (uint)(auVar71._4_4_ < auVar77._4_4_) * auVar71._4_4_ |
                       (uint)(auVar71._4_4_ >= auVar77._4_4_) * auVar77._4_4_;
              uVar43 = (uint)(auVar71._8_4_ < auVar77._8_4_) * auVar71._8_4_ |
                       (uint)(auVar71._8_4_ >= auVar77._8_4_) * auVar77._8_4_;
              uVar44 = (uint)(auVar71._12_4_ < auVar77._12_4_) * auVar71._12_4_ |
                       (uint)(auVar71._12_4_ >= auVar77._12_4_) * auVar77._12_4_;
              uVar35 = (uint)(auVar67._0_4_ < (int)uVar35) * auVar67._0_4_ |
                       (auVar67._0_4_ >= (int)uVar35) * uVar35;
              uVar42 = (uint)(auVar67._4_4_ < (int)uVar42) * auVar67._4_4_ |
                       (auVar67._4_4_ >= (int)uVar42) * uVar42;
              uVar43 = (uint)(auVar67._8_4_ < (int)uVar43) * auVar67._8_4_ |
                       (auVar67._8_4_ >= (int)uVar43) * uVar43;
              uVar44 = (uint)(auVar67._12_4_ < (int)uVar44) * auVar67._12_4_ |
                       (auVar67._12_4_ >= (int)uVar44) * uVar44;
              uVar76 = (uint)((int)uVar76 < auVar67._0_4_) * auVar67._0_4_ |
                       ((int)uVar76 >= auVar67._0_4_) * uVar76;
              uVar79 = (uint)((int)uVar79 < auVar67._4_4_) * auVar67._4_4_ |
                       ((int)uVar79 >= auVar67._4_4_) * uVar79;
              uVar81 = (uint)((int)uVar81 < auVar67._8_4_) * auVar67._8_4_ |
                       ((int)uVar81 >= auVar67._8_4_) * uVar81;
              uVar83 = (uint)((int)uVar83 < auVar67._12_4_) * auVar67._12_4_ |
                       ((int)uVar83 >= auVar67._12_4_) * uVar83;
              auStack_298._0_4_ =
                   (uint)(0x27f < (int)uVar76) * 0x27f | (0x27f >= (int)uVar76) * uVar76;
              auStack_298._4_4_ =
                   (uint)(0x27f < (int)uVar79) * 0x27f | (0x27f >= (int)uVar79) * uVar79;
              auStack_298._8_4_ =
                   (uint)(0x27f < (int)uVar81) * 0x27f | (0x27f >= (int)uVar81) * uVar81;
              auStack_298._12_4_ =
                   (uint)(0x27f < (int)uVar83) * 0x27f | (0x27f >= (int)uVar83) * uVar83;
              auStack_2a8[0] = (-1 < (int)uVar35) * uVar35 & 0xfffffffe;
              auStack_2a8[1] = (-1 < (int)uVar42) * uVar42 & 0xfffffffe;
              auStack_2a8[2] = (-1 < (int)uVar43) * uVar43 & 0xfffffffe;
              auStack_2a8[3] = (-1 < (int)uVar44) * uVar44 & 0xfffffffe;
              uVar35 = (uint)(auVar88._0_4_ < auVar89._0_4_) * auVar88._0_4_ |
                       (uint)(auVar88._0_4_ >= auVar89._0_4_) * auVar89._0_4_;
              uVar42 = (uint)(auVar88._4_4_ < auVar89._4_4_) * auVar88._4_4_ |
                       (uint)(auVar88._4_4_ >= auVar89._4_4_) * auVar89._4_4_;
              uVar43 = (uint)(auVar88._8_4_ < auVar89._8_4_) * auVar88._8_4_ |
                       (uint)(auVar88._8_4_ >= auVar89._8_4_) * auVar89._8_4_;
              uVar44 = (uint)(auVar88._12_4_ < auVar89._12_4_) * auVar88._12_4_ |
                       (uint)(auVar88._12_4_ >= auVar89._12_4_) * auVar89._12_4_;
              afStack_168[0] = (afStack_148[uVar18 * 4 + 2] - afStack_178[0]) * auVar60._0_4_;
              afStack_168[1] = (afStack_148[uVar19 * 4 + 2] - afStack_178[1]) * auVar60._4_4_;
              afStack_168[2] = (afStack_148[uVar20 * 4 + 2] - afStack_178[2]) * auVar60._8_4_;
              afStack_168[3] = (afStack_148[uVar21 * 4 + 2] - afStack_178[3]) * auVar60._12_4_;
              uVar35 = (uint)(auVar85._0_4_ < (int)uVar35) * auVar85._0_4_ |
                       (auVar85._0_4_ >= (int)uVar35) * uVar35;
              uVar42 = (uint)(auVar85._4_4_ < (int)uVar42) * auVar85._4_4_ |
                       (auVar85._4_4_ >= (int)uVar42) * uVar42;
              uVar43 = (uint)(auVar85._8_4_ < (int)uVar43) * auVar85._8_4_ |
                       (auVar85._8_4_ >= (int)uVar43) * uVar43;
              uVar44 = (uint)(auVar85._12_4_ < (int)uVar44) * auVar85._12_4_ |
                       (auVar85._12_4_ >= (int)uVar44) * uVar44;
              afStack_158[0] = (afStack_148[uVar22 * 4 + 2] - afStack_178[0]) * auVar60._0_4_;
              afStack_158[1] = (afStack_148[uVar23 * 4 + 2] - afStack_178[1]) * auVar60._4_4_;
              afStack_158[2] = (afStack_148[uVar24 * 4 + 2] - afStack_178[2]) * auVar60._8_4_;
              afStack_158[3] = (afStack_148[uVar25 * 4 + 2] - afStack_178[3]) * auVar60._12_4_;
              uVar76 = (uint)(auVar89._0_4_ < auVar88._0_4_) * auVar88._0_4_ |
                       (uint)(auVar89._0_4_ >= auVar88._0_4_) * auVar89._0_4_;
              uVar79 = (uint)(auVar89._4_4_ < auVar88._4_4_) * auVar88._4_4_ |
                       (uint)(auVar89._4_4_ >= auVar88._4_4_) * auVar89._4_4_;
              uVar81 = (uint)(auVar89._8_4_ < auVar88._8_4_) * auVar88._8_4_ |
                       (uint)(auVar89._8_4_ >= auVar88._8_4_) * auVar89._8_4_;
              uVar83 = (uint)(auVar89._12_4_ < auVar88._12_4_) * auVar88._12_4_ |
                       (uint)(auVar89._12_4_ >= auVar88._12_4_) * auVar89._12_4_;
              auVar40._4_4_ = (-1 < (int)uVar42) * uVar42;
              auVar40._0_4_ = (-1 < (int)uVar35) * uVar35;
              auVar40._8_4_ = (-1 < (int)uVar43) * uVar43;
              auVar40._12_4_ = (-1 < (int)uVar44) * uVar44;
              uVar35 = (uint)((int)uVar76 < auVar85._0_4_) * auVar85._0_4_ |
                       ((int)uVar76 >= auVar85._0_4_) * uVar76;
              uVar42 = (uint)((int)uVar79 < auVar85._4_4_) * auVar85._4_4_ |
                       ((int)uVar79 >= auVar85._4_4_) * uVar79;
              uVar43 = (uint)((int)uVar81 < auVar85._8_4_) * auVar85._8_4_ |
                       ((int)uVar81 >= auVar85._8_4_) * uVar81;
              uVar44 = (uint)((int)uVar83 < auVar85._12_4_) * auVar85._12_4_ |
                       ((int)uVar83 >= auVar85._12_4_) * uVar83;
              auStack_288 = auVar40 & _DAT_180a40770;
              auStack_278[0] = (uint)(0x167 < (int)uVar35) * 0x167 | (0x167 >= (int)uVar35) * uVar35
              ;
              auStack_278[1] = (uint)(0x167 < (int)uVar42) * 0x167 | (0x167 >= (int)uVar42) * uVar42
              ;
              auStack_278[2] = (uint)(0x167 < (int)uVar43) * 0x167 | (0x167 >= (int)uVar43) * uVar43
              ;
              auStack_278[3] = (uint)(0x167 < (int)uVar44) * 0x167 | (0x167 >= (int)uVar44) * uVar44
              ;
              do {
                auStack_2e8[0] = MXCSR;
                if (0 < *(int *)(auStack_2b8 + lVar27)) {
                  iVar13 = *(int *)(auStack_288 + lVar27);
                  iVar33 = *(int *)((longlong)auStack_2a8 + lVar27);
                  afStack_1d8[0] = *(float *)((longlong)afStack_178 + lVar27);
                  iVar14 = *(int *)((longlong)aiStack_238 + lVar27);
                  iStack_2bc = *(int *)(auStack_228 + lVar27);
                  iVar2 = *(int *)(auStack_218 + lVar27);
                  iVar3 = *(int *)(auStack_258 + lVar27);
                  iVar4 = *(int *)(auStack_248 + lVar27);
                  iVar73 = *(int *)(auStack_1e8 + lVar27);
                  fVar69 = *(float *)((longlong)afStack_168 + lVar27);
                  fVar1 = *(float *)((longlong)afStack_158 + lVar27);
                  iVar5 = *(int *)((longlong)aiStack_268 + lVar27);
                  iVar74 = *(int *)((longlong)aiStack_208 + lVar27);
                  iVar75 = *(int *)(auStack_1f8 + lVar27);
                  afStack_1d8[1] = afStack_1d8[0];
                  afStack_1d8[2] = afStack_1d8[0];
                  afStack_1d8[3] = afStack_1d8[0];
                  auVar68._4_4_ = iVar4;
                  auVar68._0_4_ = iVar4;
                  auVar68._8_4_ = iVar4;
                  auVar68._12_4_ = iVar4;
                  auVar48._4_4_ = iVar14;
                  auVar48._0_4_ = iVar14;
                  auVar48._8_4_ = iVar14;
                  auVar48._12_4_ = iVar14;
                  afStack_1b8[0] = (float)(iVar14 * 2);
                  afStack_1b8[1] = (float)(iVar14 * 2);
                  afStack_1b8[2] = (float)(iVar14 * 2);
                  afStack_1b8[3] = (float)(iVar14 * 2);
                  iVar31 = (iVar13 * 0x140 + iVar33) * 2;
                  auVar54._4_4_ = iStack_2bc;
                  auVar54._0_4_ = iStack_2bc;
                  auVar54._8_4_ = iStack_2bc;
                  auVar54._12_4_ = iStack_2bc;
                  auVar61._4_4_ = iVar2;
                  auVar61._0_4_ = iVar2;
                  auVar61._8_4_ = iVar2;
                  auVar61._12_4_ = iVar2;
                  iStack_2c8 = iStack_2bc * 2;
                  iStack_2c4 = iStack_2bc * 2;
                  iStack_2c0 = iStack_2bc * 2;
                  iStack_2bc = iStack_2bc * 2;
                  auStack_2d8._4_4_ = iVar2 * 2;
                  auStack_2d8._0_4_ = iVar2 * 2;
                  auStack_2d8._8_4_ = iVar2 * 2;
                  auStack_2d8._12_4_ = iVar2 * 2;
                  auVar65._4_4_ = iVar3;
                  auVar65._0_4_ = iVar3;
                  auVar65._8_4_ = iVar3;
                  auVar65._12_4_ = iVar3;
                  auVar57._4_4_ = iVar5;
                  auVar57._0_4_ = iVar5;
                  auVar57._8_4_ = iVar5;
                  auVar57._12_4_ = iVar5;
                  auVar41._4_4_ = iVar13;
                  auVar41._0_4_ = iVar13;
                  auVar41._8_4_ = iVar13 + 1;
                  auVar41._12_4_ = iVar13 + 1;
                  auVar45._4_4_ = iVar33 + 1;
                  auVar45._0_4_ = iVar33;
                  auVar45._8_4_ = iVar33;
                  auVar45._12_4_ = iVar33 + 1;
                  auVar66 = pmulld(auVar68,auVar45);
                  auVar60 = pmulld(auVar61,auVar41);
                  auVar78._0_4_ = iVar73 + auVar60._0_4_ + auVar66._0_4_;
                  auVar78._4_4_ = iVar73 + auVar60._4_4_ + auVar66._4_4_;
                  auVar78._8_4_ = iVar73 + auVar60._8_4_ + auVar66._8_4_;
                  auVar78._12_4_ = iVar73 + auVar60._12_4_ + auVar66._12_4_;
                  auVar60 = pmulld(auVar48,auVar41);
                  auVar66 = pmulld(auVar54,auVar41);
                  auVar53 = pmulld(auVar57,auVar45);
                  auVar86._0_4_ = iVar74 + auVar60._0_4_ + auVar53._0_4_;
                  auVar86._4_4_ = iVar74 + auVar60._4_4_ + auVar53._4_4_;
                  auVar86._8_4_ = iVar74 + auVar60._8_4_ + auVar53._8_4_;
                  auVar86._12_4_ = iVar74 + auVar60._12_4_ + auVar53._12_4_;
                  auVar60 = pmulld(auVar65,auVar45);
                  auVar72._0_4_ = iVar75 + auVar66._0_4_ + auVar60._0_4_;
                  auVar72._4_4_ = iVar75 + auVar66._4_4_ + auVar60._4_4_;
                  auVar72._8_4_ = iVar75 + auVar66._8_4_ + auVar60._8_4_;
                  auVar72._12_4_ = iVar75 + auVar66._12_4_ + auVar60._12_4_;
                  for (; iVar13 < *(int *)((longlong)auStack_278 + lVar27); iVar13 = iVar13 + 2) {
                    auVar60 = ZEXT816(0);
                    iVar73 = auVar72._4_4_;
                    iVar74 = auVar72._8_4_;
                    iVar75 = auVar72._12_4_;
                    iVar80 = auVar78._4_4_;
                    iVar82 = auVar78._8_4_;
                    iVar84 = auVar78._12_4_;
                    auVar49._0_4_ =
                         (float)auVar72._0_4_ * fVar69 + afStack_1d8[0] +
                         (float)auVar78._0_4_ * fVar1;
                    auVar49._4_4_ = (float)iVar73 * fVar69 + afStack_1d8[0] + (float)iVar80 * fVar1;
                    auVar49._8_4_ = (float)iVar74 * fVar69 + afStack_1d8[0] + (float)iVar82 * fVar1;
                    auVar49._12_4_ = (float)iVar75 * fVar69 + afStack_1d8[0] + (float)iVar84 * fVar1
                    ;
                    if (iVar33 < *(int *)(auStack_298 + lVar27)) {
                      uVar30 = (ulonglong)
                               (((*(int *)(auStack_298 + lVar27) - iVar33) - 1U >> 1) + 1);
                      auVar66 = auVar86;
                      auVar53 = auVar72;
                      auVar64 = auVar78;
                      iVar26 = iVar31;
                      do {
                        lVar32 = (longlong)iVar26;
                        iVar26 = iVar26 + 4;
                        auVar55._0_4_ = auVar66._0_4_ + iVar5 * 2;
                        auVar55._4_4_ = auVar66._4_4_ + iVar5 * 2;
                        auVar55._8_4_ = auVar66._8_4_ + iVar5 * 2;
                        auVar55._12_4_ = auVar66._12_4_ + iVar5 * 2;
                        auVar58._0_4_ = auVar53._0_4_ + iVar3 * 2;
                        auVar58._4_4_ = auVar53._4_4_ + iVar3 * 2;
                        auVar58._8_4_ = auVar53._8_4_ + iVar3 * 2;
                        auVar58._12_4_ = auVar53._12_4_ + iVar3 * 2;
                        auVar62._0_4_ = auVar64._0_4_ + iVar4 * 2;
                        auVar62._4_4_ = auVar64._4_4_ + iVar4 * 2;
                        auVar62._8_4_ = auVar64._8_4_ + iVar4 * 2;
                        auVar62._12_4_ = auVar64._12_4_ + iVar4 * 2;
                        pfVar28 = (float *)(*(longlong *)(param_1 + 0x200 + (longlong)param_3 * 8) +
                                           lVar32 * 4);
                        fVar50 = auVar49._4_4_;
                        fVar51 = auVar49._8_4_;
                        fVar52 = auVar49._12_4_;
                        auVar46._4_4_ = -(uint)(pfVar28[1] <= fVar50);
                        auVar46._0_4_ = -(uint)(*pfVar28 <= auVar49._0_4_);
                        auVar46._8_4_ = -(uint)(pfVar28[2] <= fVar51);
                        auVar46._12_4_ = -(uint)(pfVar28[3] <= fVar52);
                        auVar49._0_4_ =
                             auVar49._0_4_ +
                             (float)(iVar3 * 2) * fVar69 + (float)(iVar4 * 2) * fVar1;
                        auVar49._4_4_ =
                             fVar50 + (float)(iVar3 * 2) * fVar69 + (float)(iVar4 * 2) * fVar1;
                        auVar49._8_4_ =
                             fVar51 + (float)(iVar3 * 2) * fVar69 + (float)(iVar4 * 2) * fVar1;
                        auVar49._12_4_ =
                             fVar52 + (float)(iVar3 * 2) * fVar69 + (float)(iVar4 * 2) * fVar1;
                        auVar60 = ~(auVar53 | auVar66 | auVar64) & auVar46 | auVar60;
                        uVar30 = uVar30 - 1;
                        auVar66 = auVar55;
                        auVar53 = auVar58;
                        auVar64 = auVar62;
                      } while (uVar30 != 0);
                    }
                    if ((_DAT_180a40570 & auVar60) != (int8_t  [16])0x0) goto FUN_180492a44;
                    auVar87._0_4_ = auVar86._0_4_ + iVar14 * 2;
                    auVar87._4_4_ = auVar86._4_4_ + iVar14 * 2;
                    auVar87._8_4_ = auVar86._8_4_ + iVar14 * 2;
                    auVar87._12_4_ = auVar86._12_4_ + iVar14 * 2;
                    auVar72._0_4_ = auVar72._0_4_ + iStack_2c8;
                    auVar72._4_4_ = iVar73 + iStack_2c4;
                    auVar72._8_4_ = iVar74 + iStack_2c0;
                    auVar72._12_4_ = iVar75 + iStack_2bc;
                    iVar31 = iVar31 + 0x500;
                    auVar78._0_4_ = auVar78._0_4_ + iVar2 * 2;
                    auVar78._4_4_ = iVar80 + iVar2 * 2;
                    auVar78._8_4_ = iVar82 + iVar2 * 2;
                    auVar78._12_4_ = iVar84 + iVar2 * 2;
                    auVar86 = auVar87;
                  }
                }
                lVar27 = lVar27 + 4;
              } while (lVar27 < 0x10);
              uVar34 = uVar34 + 4;
            } while (uVar34 < 0xc);
            break;
          }
          iVar13 = iVar13 + 1;
          iVar33 = iVar33 + 0x50;
        } while (iVar13 <= (int)auStack_2d8._12_4_);
      }
    }
  }
FUN_180492a44:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_c8 ^ (ulonglong)auStack_2e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





