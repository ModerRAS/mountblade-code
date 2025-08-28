#include "TaleWorlds.Native.Split.h"

// 03_rendering_part372.c - 4 个函数

// 函数: void FUN_18046e620(longlong param_1,uint param_2)
void FUN_18046e620(longlong param_1,uint param_2)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
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
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  uint uVar30;
  ulonglong uVar31;
  int8_t auVar32 [16];
  int8_t auVar33 [16];
  
  uVar28 = (ulonglong)param_2;
  uVar29 = 0;
  if (*(int *)(param_1 + 0x238 + uVar28 * 4) != 0) {
    do {
      lVar6 = *(longlong *)
               (*(longlong *)(param_1 + 0x60) +
               (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x228 + uVar28 * 8) + uVar29 * 4) * 8);
      iVar5 = *(int *)(lVar6 + 0x68);
      if (((*(char *)(uVar28 + 0x90 + lVar6) != '\0') && (*(char *)(uVar28 + 0x92 + lVar6) == '\0'))
         && (uVar25 = 0, *(int *)(lVar6 + 8) != 0)) {
        do {
          pfVar7 = *(float **)(lVar6 + 0x58 + uVar28 * 8);
          lVar26 = (ulonglong)uVar25 * 0x38 + *(longlong *)(lVar6 + 0xb0);
          fVar9 = *pfVar7;
          fVar10 = pfVar7[1];
          fVar11 = pfVar7[2];
          fVar12 = pfVar7[3];
          fVar13 = pfVar7[4];
          fVar14 = pfVar7[5];
          fVar15 = pfVar7[6];
          fVar16 = pfVar7[7];
          fVar17 = pfVar7[8];
          fVar18 = pfVar7[9];
          fVar19 = pfVar7[10];
          fVar20 = pfVar7[0xb];
          fVar21 = pfVar7[0xc];
          fVar22 = pfVar7[0xd];
          fVar23 = pfVar7[0xe];
          fVar24 = pfVar7[0xf];
          lVar27 = 0;
          lVar8 = *(longlong *)(*(longlong *)(lVar26 + 0x10) + 0x28);
          uVar31 = 0;
          do {
            uVar30 = (int)uVar31 + 1;
            fVar2 = *(float *)(lVar8 + uVar31 * 0x10);
            fVar3 = *(float *)(lVar8 + 4 + uVar31 * 0x10);
            fVar4 = *(float *)(lVar8 + 8 + uVar31 * 0x10);
            auVar32._0_4_ = fVar2 * fVar9 + fVar21 + fVar3 * fVar13 + fVar4 * fVar17;
            auVar32._4_4_ = fVar2 * fVar10 + fVar22 + fVar3 * fVar14 + fVar4 * fVar18;
            auVar32._8_4_ = fVar2 * fVar11 + fVar23 + fVar3 * fVar15 + fVar4 * fVar19;
            auVar32._12_4_ = fVar2 * fVar12 + fVar24 + fVar3 * fVar16 + fVar4 * fVar20;
            auVar33._4_4_ = auVar32._12_4_;
            auVar33._0_4_ = auVar32._12_4_;
            auVar33._8_4_ = auVar32._12_4_;
            auVar33._12_4_ = auVar32._12_4_;
            auVar33 = divps(auVar32,auVar33);
            puVar1 = (uint *)(lVar27 + *(longlong *)(lVar26 + uVar28 * 8 + 0x28));
            *puVar1 = -(uint)(auVar32._8_4_ <= auVar32._12_4_) & auVar33._0_4_;
            puVar1[1] = -(uint)(auVar32._8_4_ <= auVar32._12_4_) & auVar33._4_4_;
            puVar1[2] = -(uint)(auVar32._8_4_ <= auVar32._12_4_) & auVar33._8_4_;
            puVar1[3] = -(uint)(auVar32._8_4_ <= auVar32._12_4_) & auVar33._12_4_;
            lVar27 = lVar27 + 0x10;
            uVar31 = (ulonglong)uVar30;
          } while (uVar30 <= iVar5 - 1U);
          uVar25 = uVar25 + 1;
        } while (uVar25 < *(uint *)(lVar6 + 8));
      }
      uVar25 = (int)uVar29 + 1;
      uVar29 = (ulonglong)uVar25;
    } while (uVar25 < *(uint *)(param_1 + 0x238 + uVar28 * 4));
  }
  return;
}





// 函数: void FUN_18046e643(void)
void FUN_18046e643(void)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
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
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  longlong unaff_RBP;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  uint uVar28;
  ulonglong uVar29;
  int8_t auVar30 [16];
  int8_t auVar31 [16];
  
  do {
    lVar6 = *(longlong *)
             (*(longlong *)(unaff_RBP + 0x60) +
             (ulonglong)*(uint *)(*(longlong *)(unaff_RBP + 0x228 + unaff_RSI * 8) + unaff_RDI * 4)
             * 8);
    iVar5 = *(int *)(lVar6 + 0x68);
    if (((*(char *)(unaff_RSI + 0x90 + lVar6) != '\0') &&
        (*(char *)(unaff_RSI + 0x92 + lVar6) == '\0')) && (uVar25 = 0, *(int *)(lVar6 + 8) != 0)) {
      do {
        pfVar7 = *(float **)(lVar6 + 0x58 + unaff_RSI * 8);
        lVar26 = (ulonglong)uVar25 * 0x38 + *(longlong *)(lVar6 + 0xb0);
        fVar9 = *pfVar7;
        fVar10 = pfVar7[1];
        fVar11 = pfVar7[2];
        fVar12 = pfVar7[3];
        fVar13 = pfVar7[4];
        fVar14 = pfVar7[5];
        fVar15 = pfVar7[6];
        fVar16 = pfVar7[7];
        fVar17 = pfVar7[8];
        fVar18 = pfVar7[9];
        fVar19 = pfVar7[10];
        fVar20 = pfVar7[0xb];
        fVar21 = pfVar7[0xc];
        fVar22 = pfVar7[0xd];
        fVar23 = pfVar7[0xe];
        fVar24 = pfVar7[0xf];
        lVar27 = 0;
        lVar8 = *(longlong *)(*(longlong *)(lVar26 + 0x10) + 0x28);
        uVar29 = 0;
        do {
          uVar28 = (int)uVar29 + 1;
          fVar2 = *(float *)(lVar8 + uVar29 * 0x10);
          fVar3 = *(float *)(lVar8 + 4 + uVar29 * 0x10);
          fVar4 = *(float *)(lVar8 + 8 + uVar29 * 0x10);
          auVar30._0_4_ = fVar2 * fVar9 + fVar21 + fVar3 * fVar13 + fVar4 * fVar17;
          auVar30._4_4_ = fVar2 * fVar10 + fVar22 + fVar3 * fVar14 + fVar4 * fVar18;
          auVar30._8_4_ = fVar2 * fVar11 + fVar23 + fVar3 * fVar15 + fVar4 * fVar19;
          auVar30._12_4_ = fVar2 * fVar12 + fVar24 + fVar3 * fVar16 + fVar4 * fVar20;
          auVar31._4_4_ = auVar30._12_4_;
          auVar31._0_4_ = auVar30._12_4_;
          auVar31._8_4_ = auVar30._12_4_;
          auVar31._12_4_ = auVar30._12_4_;
          auVar31 = divps(auVar30,auVar31);
          puVar1 = (uint *)(lVar27 + *(longlong *)(lVar26 + unaff_RSI * 8 + 0x28));
          *puVar1 = -(uint)(auVar30._8_4_ <= auVar30._12_4_) & auVar31._0_4_;
          puVar1[1] = -(uint)(auVar30._8_4_ <= auVar30._12_4_) & auVar31._4_4_;
          puVar1[2] = -(uint)(auVar30._8_4_ <= auVar30._12_4_) & auVar31._8_4_;
          puVar1[3] = -(uint)(auVar30._8_4_ <= auVar30._12_4_) & auVar31._12_4_;
          lVar27 = lVar27 + 0x10;
          uVar29 = (ulonglong)uVar28;
        } while (uVar28 <= iVar5 - 1U);
        uVar25 = uVar25 + 1;
      } while (uVar25 < *(uint *)(lVar6 + 8));
    }
    uVar25 = (int)unaff_RDI + 1;
    unaff_RDI = (ulonglong)uVar25;
  } while (uVar25 < *(uint *)(unaff_RBP + 0x238 + unaff_RSI * 4));
  return;
}





// 函数: void FUN_18046e768(void)
void FUN_18046e768(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18046e780(longlong param_1,uint param_2,uint param_3)
void FUN_18046e780(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  int32_t uVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  char cVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  int8_t auVar19 [16];
  int8_t auVar20 [16];
  int8_t auVar21 [32];
  int8_t auVar22 [64];
  float fVar23;
  float fVar24;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  int8_t auVar25 [16];
  int8_t auVar26 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  int8_t auVar27 [32];
  int8_t auVar28 [32];
  int8_t auVar29 [32];
  float fVar42;
  int8_t auVar43 [16];
  int iVar50;
  int8_t auVar44 [32];
  int8_t auVar45 [32];
  int iVar48;
  int iVar49;
  int8_t auVar47 [64];
  int8_t auVar51 [32];
  int8_t auVar52 [32];
  int8_t auVar53 [32];
  int8_t auVar54 [32];
  int8_t auVar55 [32];
  int8_t auVar56 [32];
  int8_t auVar57 [32];
  int8_t auVar58 [32];
  int8_t auVar59 [32];
  int8_t auVar60 [32];
  int8_t auVar61 [32];
  int8_t auVar62 [32];
  int8_t auVar63 [32];
  int8_t auStack_5b8 [32];
  int iStack_598;
  uint uStack_590;
  char cStack_580;
  int8_t auStack_560 [32];
  int8_t uStack_53c;
  uint uStack_538;
  uint uStack_534;
  uint uStack_530;
  uint uStack_52c;
  uint uStack_528;
  uint uStack_524;
  int iStack_520;
  int iStack_4e0;
  uint uStack_4dc;
  longlong lStack_4d8;
  ulonglong uStack_4d0;
  int8_t auStack_4c0 [32];
  int8_t auStack_4a0 [32];
  int8_t auStack_480 [32];
  float fStack_460;
  float fStack_45c;
  float fStack_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float fStack_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  float fStack_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float fStack_428;
  float fStack_424;
  int8_t auStack_420 [32];
  int8_t auStack_400 [32];
  int8_t auStack_3e0 [32];
  int8_t auStack_3c0 [32];
  int8_t auStack_3a0 [32];
  int8_t auStack_380 [32];
  int8_t auStack_360 [32];
  int8_t auStack_340 [32];
  int8_t auStack_320 [32];
  int8_t auStack_300 [32];
  int8_t auStack_2e0 [32];
  int8_t auStack_2c0 [32];
  int8_t auStack_2a0 [32];
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  int8_t auStack_260 [32];
  int8_t auStack_240 [32];
  int8_t auStack_220 [32];
  int8_t auStack_200 [32];
  uint64_t uStack_1e0;
  uint64_t uStack_1d8;
  uint64_t uStack_1d0;
  uint64_t uStack_1c8;
  int8_t auStack_1c0 [32];
  int8_t auStack_1a0 [32];
  int8_t auStack_180 [32];
  int8_t auStack_160 [32];
  int8_t auStack_140 [32];
  int8_t auStack_120 [32];
  ulonglong uStack_100;
  int8_t auVar46 [32];
  
  uStack_100 = _DAT_180bf00a8 ^ (ulonglong)auStack_5b8;
  uStack_4d0 = (ulonglong)param_3;
  lVar5 = *(longlong *)(param_1 + 0x1f8 + uStack_4d0 * 8);
  uStack_530 = MXCSR;
  MXCSR = MXCSR | 0x8040;
  uVar6 = param_2 / 8;
  uStack_524 = param_2 % 8;
  uStack_528 = uStack_524 * 0x50;
  uStack_538 = 0x27f;
  if (uStack_528 + 0x4f < 0x27f) {
    uStack_538 = uStack_528 + 0x4f;
  }
  uStack_52c = uVar6 * 0x60;
  iStack_4e0 = 0x167;
  if ((int)(uStack_52c + 0x5f) < 0x167) {
    iStack_4e0 = uStack_52c + 0x5f;
  }
  iStack_598 = iStack_4e0 + 1;
  iStack_520 = iStack_598;
  uStack_4dc = param_3;
  lStack_4d8 = param_1;
  if ((int)uStack_52c < iStack_598) {
    uStack_534 = param_2;
                    // WARNING: Subroutine does not return
    memset(lVar5 + (longlong)(int)((uVar6 * 0x7800 + uStack_528) * 2) * 4,0,
           (longlong)(int)(uStack_538 + uStack_524 * -0x50 + 1) << 3);
  }
  uStack_524 = uStack_524 + uVar6 * 8;
  auVar47 = ZEXT3264(auStack_1c0);
  uStack_534 = uStack_524 * 0x4000;
  uVar11 = 0;
  cVar15 = '\x01';
  uStack_1e0 = 0x1800000000;
  uStack_1d8 = 0x4800000030;
  auVar22 = ZEXT3264(auStack_180);
  uVar6 = *(uint *)(*(longlong *)(param_1 + 0x218 + uStack_4d0 * 8) + (ulonglong)uStack_524 * 4);
  uStack_1d0 = 0x7800000060;
  uStack_1c8 = 0xa800000090;
  cStack_580 = '\x01';
  lVar1 = param_1 + (uStack_4d0 * 0x20 + (ulonglong)param_2) * 4;
  *(uint *)(lVar1 + 0xa8) = uVar6;
  auStack_480 = auStack_180;
  auStack_4a0 = auStack_1a0;
  auStack_420 = auStack_1c0;
  do {
    uVar12 = 0;
    auVar19 = auVar22._0_16_;
    auVar21 = ZEXT1632(auVar19);
    auVar20 = auVar47._0_16_;
    auVar44 = ZEXT1632(auVar20);
    while (uVar6 == 0) {
      uVar11 = uVar11 + 1;
      if (uVar11 != 0) goto LAB_18046ebfe;
      uVar6 = *(uint *)(*(longlong *)(param_1 + 0x218 + uStack_4d0 * 8) + (ulonglong)uStack_524 * 4)
      ;
      piVar14 = (int *)(lVar1 + 0xa8);
      *piVar14 = *piVar14 + uVar6;
    }
    if (uVar6 < 8) {
      uVar17 = 0;
      auStack_4c0 = _DAT_180a407a0;
      uVar12 = uVar6;
      if (uVar6 != 0) {
        auVar21 = ZEXT1632(auVar19);
        auVar44 = ZEXT1632(auVar20);
        if ((0xf < uVar6) && (1 < _DAT_180bf00b0)) {
          uVar13 = 8;
          auVar22 = ZEXT1664(auVar19);
          auVar44 = ZEXT1632(_DAT_180a3f750);
          do {
            iVar8 = uVar13 - 4;
            iVar16 = (int)uVar17;
            iVar7 = (int)DAT_180a3f750;
            auVar19._0_4_ = iVar16 + iVar7;
            iVar48 = DAT_180a3f750._4_4_;
            auVar19._4_4_ = iVar16 + iVar48;
            iVar49 = DAT_180a3f750._8_4_;
            auVar19._8_4_ = iVar16 + iVar49;
            iVar50 = DAT_180a3f750._12_4_;
            auVar19._12_4_ = iVar16 + iVar50;
            auVar19 = pmulld(auVar19,_DAT_180a3f790);
            *(int8_t (*) [16])(auStack_4c0 + uVar17 * 4) = auVar19;
            uVar17 = (ulonglong)(iVar16 + 0x10U);
            auVar25._0_4_ = iVar8 + iVar7;
            auVar25._4_4_ = iVar8 + iVar48;
            auVar25._8_4_ = iVar8 + iVar49;
            auVar25._12_4_ = iVar8 + iVar50;
            auVar19 = pmulld(auVar25,_DAT_180a3f790);
            *(int8_t (*) [16])(auStack_4c0 + (ulonglong)(uVar13 - 4) * 4) = auVar19;
            auVar20._0_4_ = uVar13 + iVar7;
            auVar20._4_4_ = uVar13 + iVar48;
            auVar20._8_4_ = uVar13 + iVar49;
            auVar20._12_4_ = uVar13 + iVar50;
            auVar22._0_16_ = pmulld(auVar20,_DAT_180a3f790);
            auVar21 = auVar22._0_32_;
            *(int8_t (*) [16])(auStack_4c0 + (ulonglong)uVar13 * 4) = auVar22._0_16_;
            uVar4 = uVar13 + 4;
            uVar13 = uVar13 + 0x10;
            auVar26._0_4_ = uVar4 + iVar7;
            auVar26._4_4_ = uVar4 + iVar48;
            auVar26._8_4_ = uVar4 + iVar49;
            auVar26._12_4_ = uVar4 + iVar50;
            auVar19 = pmulld(auVar26,_DAT_180a3f790);
            *(int8_t (*) [16])(auStack_4c0 + (ulonglong)uVar4 * 4) = auVar19;
          } while (iVar16 + 0x10U < uVar6 - (uVar6 & 0xf));
        }
        uVar13 = (uint)uVar17;
        if (uVar13 < uVar6) {
          iVar8 = uVar13 * 0x18;
          uVar10 = (ulonglong)(uVar6 - uVar13);
          piVar14 = (int *)(auStack_4c0 + uVar17 * 4);
          auVar21 = ZEXT1632(auVar21._0_16_);
          auVar44 = ZEXT1632(auVar44._0_16_);
          do {
            *piVar14 = iVar8;
            piVar14 = piVar14 + 1;
            iVar8 = iVar8 + 0x18;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
      }
    }
    else {
      auStack_4c0._8_8_ = uStack_1d8;
      auStack_4c0._0_8_ = uStack_1e0;
      auStack_4c0._16_8_ = uStack_1d0;
      auStack_4c0._24_8_ = uStack_1c8;
      auVar21 = ZEXT1632(auVar19);
      auVar44 = ZEXT1632(auVar20);
      uVar12 = 8;
    }
    auVar21 = vpcmpeqb_avx2(auVar21,auVar21);
    uVar6 = uVar6 - uVar12;
    cVar15 = '\0';
    cStack_580 = '\0';
    auStack_420 = vpgatherdd(auVar44,auVar21);
    auVar44 = vpcmpeqb_avx2((int8_t  [32])0x0,(int8_t  [32])0x0);
    auStack_1c0 = auStack_420;
    auVar21 = vpaddd_avx2(_DAT_180a40840,auStack_4c0);
    auStack_4a0 = vpgatherdd(auStack_420,auVar44);
    auStack_1a0 = auStack_4a0;
    auVar45 = vpcmpeqb_avx2((int8_t  [32])0x0,(int8_t  [32])0x0);
    auVar44 = vpaddd_avx2(auVar21,_DAT_180a40840);
    auStack_480 = vpgatherdd(auVar21,auVar45);
    auVar45 = vpcmpeqb_avx2((int8_t  [32])0x0,(int8_t  [32])0x0);
    auVar21 = vpaddd_avx2(_DAT_180a40840,auVar44);
    auStack_180 = auStack_480;
    auStack_4c0 = vpaddd_avx2(auVar21,_DAT_180a40840);
    auStack_160 = vpgatherdd(auStack_480,auVar45);
    auVar21 = vpcmpeqb_avx2((int8_t  [32])0x0,(int8_t  [32])0x0);
    auStack_140 = vpgatherdd(auStack_160,auVar21);
    vpaddd_avx2(_DAT_180a40840,auStack_4c0);
    auVar21 = vpcmpeqb_avx2((int8_t  [32])0x0,(int8_t  [32])0x0);
    auStack_120 = vpgatherdd(auStack_140,auVar21);
LAB_18046ebfe:
    uStack_53c = 0xf < uVar11;
    if (cVar15 != '\0') break;
    auVar59 = vpsrad_avx2(auStack_420,0x10);
    auVar21 = vpslld_avx2(auStack_420,0x10);
    auStack_240 = vpsrad_avx2(auVar21,0x10);
    auVar56 = vpsrad_avx2(auStack_4a0,0x10);
    auVar21 = vpslld_avx2(auStack_4a0,0x10);
    auStack_220 = vpsrad_avx2(auVar21,0x10);
    auVar54 = vpsrad_avx2(auStack_480,0x10);
    auVar21 = vpslld_avx2(auStack_480,0x10);
    auStack_200 = vpsrad_avx2(auVar21,0x10);
    auStack_3a0 = vpsubd_avx2(auVar56,auVar54);
    auStack_360 = vpsubd_avx2(auVar59,auVar56);
    auStack_340 = vpsubd_avx2(auStack_200,auStack_220);
    auStack_380 = vpsubd_avx2(auVar54,auVar59);
    auStack_300 = vpsubd_avx2(auStack_220,auStack_240);
    auStack_320 = vpsubd_avx2(auStack_240,auStack_200);
    auVar21 = vpmulld_avx2(auStack_220,auVar54);
    auVar44 = vpmulld_avx2(auStack_240,auVar54);
    auVar45 = vpmulld_avx2(auStack_200,auVar56);
    auStack_2e0 = vpsubd_avx2(auVar21,auVar45);
    auVar21 = vpmulld_avx2(auStack_200,auVar59);
    auStack_2c0 = vpsubd_avx2(auVar21,auVar44);
    auVar21 = vpmulld_avx2(auStack_220,auVar59);
    auVar44 = vpmulld_avx2(auStack_240,auVar56);
    auStack_2a0 = vpsubd_avx2(auVar44,auVar21);
    auVar19 = vpshufd_avx(ZEXT416(uStack_528),0);
    auVar44._16_16_ = auVar19;
    auVar44._0_16_ = auVar19;
    auVar21 = vpminsd_avx2(auStack_220,auStack_240);
    auVar21 = vpminsd_avx2(auStack_200,auVar21);
    auVar21 = vpmaxsd_avx2(auVar21,auVar44);
    auVar45._4_4_ = uStack_538;
    auVar45._0_4_ = uStack_538;
    auVar45._8_4_ = uStack_538;
    auVar45._12_4_ = uStack_538;
    auVar45._16_4_ = uStack_538;
    auVar45._20_4_ = uStack_538;
    auVar45._24_4_ = uStack_538;
    auVar45._28_4_ = uStack_538;
    auStack_260 = vpand_avx2(auVar21,_DAT_180a408a0);
    auVar21 = vpmaxsd_avx2(auStack_220,auStack_240);
    auVar21 = vpmaxsd_avx2(auStack_200,auVar21);
    auVar21 = vpaddd_avx2(auVar21,_DAT_180a40800);
    auStack_400 = vpminsd_avx2(auVar45,auVar21);
    auVar19 = vpshufd_avx(ZEXT416(uStack_52c),0);
    auVar21 = vpminsd_avx2(auVar56,auVar59);
    auVar21 = vpminsd_avx2(auVar21,auVar54);
    auVar58._16_16_ = auVar19;
    auVar58._0_16_ = auVar19;
    auVar21 = vpmaxsd_avx2(auVar21,auVar58);
    auVar43._4_4_ = (float)iStack_4e0;
    auVar43._0_4_ = (float)iStack_4e0;
    auVar43._8_4_ = (float)iStack_4e0;
    auVar43._12_4_ = (float)iStack_4e0;
    auVar46._16_4_ = iStack_4e0;
    auVar46._0_16_ = auVar43;
    auVar46._20_4_ = iStack_4e0;
    auVar46._24_4_ = iStack_4e0;
    auVar46._28_4_ = iStack_4e0;
    auStack_3e0 = vpand_avx2(auVar21,_DAT_180a408c0);
    auVar21 = vpmaxsd_avx2(auVar56,auVar59);
    auVar21 = vpmaxsd_avx2(auVar21,auVar54);
    auVar21 = vpaddd_avx2(auVar21,_DAT_180a40800);
    auVar19 = auVar21._0_16_;
    lVar18 = 0;
    auStack_3c0 = vpminsd_avx2(auVar46,auVar21);
    if (0 < (int)uVar12) {
      do {
        uVar13 = *(uint *)(auStack_3e0 + lVar18 * 4);
        uVar2 = *(int32_t *)(auStack_360 + lVar18 * 4);
        auVar56._4_4_ = uVar2;
        auVar56._0_4_ = uVar2;
        auVar56._8_4_ = uVar2;
        auVar56._12_4_ = uVar2;
        auVar56._16_4_ = uVar2;
        auVar56._20_4_ = uVar2;
        auVar56._24_4_ = uVar2;
        auVar56._28_4_ = uVar2;
        uVar2 = *(int32_t *)(auStack_3a0 + lVar18 * 4);
        auVar53._4_4_ = uVar2;
        auVar53._0_4_ = uVar2;
        auVar53._8_4_ = uVar2;
        auVar53._12_4_ = uVar2;
        auVar53._16_4_ = uVar2;
        auVar53._20_4_ = uVar2;
        auVar53._24_4_ = uVar2;
        auVar53._28_4_ = uVar2;
        uVar2 = *(int32_t *)(auStack_380 + lVar18 * 4);
        auVar59._4_4_ = uVar2;
        auVar59._0_4_ = uVar2;
        auVar59._8_4_ = uVar2;
        auVar59._12_4_ = uVar2;
        auVar59._16_4_ = uVar2;
        auVar59._20_4_ = uVar2;
        auVar59._24_4_ = uVar2;
        auVar59._28_4_ = uVar2;
        uVar2 = *(int32_t *)(auStack_300 + lVar18 * 4);
        auVar55._4_4_ = uVar2;
        auVar55._0_4_ = uVar2;
        auVar55._8_4_ = uVar2;
        auVar55._12_4_ = uVar2;
        auVar55._16_4_ = uVar2;
        auVar55._20_4_ = uVar2;
        auVar55._24_4_ = uVar2;
        auVar55._28_4_ = uVar2;
        fStack_280 = *(float *)(auStack_160 + lVar18 * 4);
        uVar4 = *(uint *)(auStack_260 + lVar18 * 4);
        uVar2 = *(int32_t *)(auStack_340 + lVar18 * 4);
        auVar60._4_4_ = uVar2;
        auVar60._0_4_ = uVar2;
        auVar60._8_4_ = uVar2;
        auVar60._12_4_ = uVar2;
        auVar60._16_4_ = uVar2;
        auVar60._20_4_ = uVar2;
        auVar60._24_4_ = uVar2;
        auVar60._28_4_ = uVar2;
        uVar2 = *(int32_t *)(auStack_320 + lVar18 * 4);
        auVar57._4_4_ = uVar2;
        auVar57._0_4_ = uVar2;
        auVar57._8_4_ = uVar2;
        auVar57._12_4_ = uVar2;
        auVar57._16_4_ = uVar2;
        auVar57._20_4_ = uVar2;
        auVar57._24_4_ = uVar2;
        auVar57._28_4_ = uVar2;
        iVar8 = *(int *)(auStack_400 + lVar18 * 4);
        fStack_27c = fStack_280;
        fStack_278 = fStack_280;
        fStack_274 = fStack_280;
        fStack_270 = fStack_280;
        fStack_26c = fStack_280;
        fStack_268 = fStack_280;
        fStack_264 = fStack_280;
        fStack_440 = *(float *)(auStack_140 + lVar18 * 4);
        fStack_460 = *(float *)(auStack_120 + lVar18 * 4);
        auVar62 = vpslld_avx2(auVar56,2);
        auVar61 = vpslld_avx2(auVar59,2);
        auVar19 = vpshufd_avx(ZEXT416(uVar4),0);
        auVar54._16_16_ = auVar19;
        auVar54._0_16_ = auVar19;
        auVar21 = vpaddd_avx2(auVar54,_DAT_180a40820);
        auVar56 = vpmulld_avx2(auVar21,auVar56);
        auVar54 = vpmulld_avx2(auVar21,auVar59);
        auVar59 = vpmulld_avx2(auVar21,auVar53);
        uVar2 = *(int32_t *)(auStack_2e0 + lVar18 * 4);
        auVar27._4_4_ = uVar2;
        auVar27._0_4_ = uVar2;
        auVar27._8_4_ = uVar2;
        auVar27._12_4_ = uVar2;
        auVar27._16_4_ = uVar2;
        auVar27._20_4_ = uVar2;
        auVar27._24_4_ = uVar2;
        auVar27._28_4_ = uVar2;
        auVar19 = vpshufd_avx(ZEXT416(uVar13),0);
        auVar63._16_16_ = auVar19;
        auVar63._0_16_ = auVar19;
        auVar21 = vpaddd_avx2(auVar63,_DAT_180a407e0);
        auVar44 = vpmulld_avx2(auVar21,auVar60);
        auVar63 = vpslld_avx2(auVar53,2);
        auVar58 = vpaddd_avx2(auVar44,auVar27);
        uVar2 = *(int32_t *)(auStack_2c0 + lVar18 * 4);
        auVar28._4_4_ = uVar2;
        auVar28._0_4_ = uVar2;
        auVar28._8_4_ = uVar2;
        auVar28._12_4_ = uVar2;
        auVar28._16_4_ = uVar2;
        auVar28._20_4_ = uVar2;
        auVar28._24_4_ = uVar2;
        auVar28._28_4_ = uVar2;
        auVar44 = vpmulld_avx2(auVar21,auVar57);
        auVar45 = vpaddd_avx2(auVar44,auVar28);
        fVar3 = *(float *)(auStack_2a0 + lVar18 * 4);
        auVar29._4_4_ = fVar3;
        auVar29._0_4_ = fVar3;
        auVar29._8_4_ = fVar3;
        auVar29._12_4_ = fVar3;
        auVar29._16_4_ = fVar3;
        auVar29._20_4_ = fVar3;
        auVar29._24_4_ = fVar3;
        auVar29._28_4_ = fVar3;
        auVar21 = vpmulld_avx2(auVar21,auVar55);
        auVar46 = vpaddd_avx2(auVar21,auVar29);
        auStack_560 = vpslld_avx2(auVar55,1);
        auVar44 = vcvtdq2ps_avx(auVar61);
        auVar54 = vpaddd_avx2(auVar45,auVar54);
        auVar56 = vpaddd_avx2(auVar46,auVar56);
        auVar43._0_4_ = auVar44._0_4_ * fStack_440;
        auVar43._4_4_ = auVar44._4_4_ * fStack_440;
        auVar43._8_4_ = auVar44._8_4_ * fStack_440;
        auVar43._12_4_ = auVar44._12_4_ * fStack_440;
        auVar45 = vcvtdq2ps_avx(auVar62);
        auVar19 = auVar45._0_16_;
        fVar23 = auVar45._0_4_ * fStack_460;
        fVar30 = auVar45._4_4_ * fStack_460;
        auVar21._4_4_ = fVar30;
        auVar21._0_4_ = fVar23;
        fVar32 = auVar45._8_4_ * fStack_460;
        auVar21._8_4_ = fVar32;
        fVar34 = auVar45._12_4_ * fStack_460;
        auVar21._12_4_ = fVar34;
        fVar36 = auVar45._16_4_ * fStack_460;
        auVar21._16_4_ = fVar36;
        fVar38 = auVar45._20_4_ * fStack_460;
        auVar21._20_4_ = fVar38;
        fVar40 = auVar45._24_4_ * fStack_460;
        auVar21._24_4_ = fVar40;
        auVar21._28_4_ = fVar3;
        iVar16 = (uVar13 * 0x140 + uVar4) * 2;
        fVar23 = fVar23 + auVar43._0_4_;
        fVar30 = fVar30 + auVar43._4_4_;
        fVar32 = fVar32 + auVar43._8_4_;
        fVar34 = fVar34 + auVar43._12_4_;
        auVar45 = vpaddd_avx2(auVar58,auVar59);
        auVar59 = vpslld_avx2(auVar60,1);
        auVar58 = vpslld_avx2(auVar57,1);
        if ((int)uVar13 < *(int *)(auStack_3c0 + lVar18 * 4)) {
          uVar17 = (ulonglong)(((*(int *)(auStack_3c0 + lVar18 * 4) - uVar13) - 1 >> 1) + 1);
          do {
            auVar27 = vcvtdq2ps_avx(auVar54);
            auVar43._0_4_ = fStack_440 * auVar27._0_4_ + fStack_280;
            auVar43._4_4_ = fStack_440 * auVar27._4_4_ + fStack_280;
            auVar43._8_4_ = fStack_440 * auVar27._8_4_ + fStack_280;
            auVar43._12_4_ = fStack_440 * auVar27._12_4_ + fStack_280;
            fVar42 = auVar21._28_4_;
            auVar28 = vcvtdq2ps_avx(auVar56);
            fVar24 = auVar28._0_4_ * fStack_460;
            fVar31 = auVar28._4_4_ * fStack_460;
            auVar21._4_4_ = fVar31;
            auVar21._0_4_ = fVar24;
            fVar33 = auVar28._8_4_ * fStack_460;
            auVar21._8_4_ = fVar33;
            fVar35 = auVar28._12_4_ * fStack_460;
            auVar21._12_4_ = fVar35;
            fVar37 = auVar28._16_4_ * fStack_460;
            auVar21._16_4_ = fVar37;
            fVar39 = auVar28._20_4_ * fStack_460;
            auVar21._20_4_ = fVar39;
            fVar41 = auVar28._24_4_ * fStack_460;
            auVar21._24_4_ = fVar41;
            auVar21._28_4_ = fVar42;
            auVar51._0_4_ = fVar24 + auVar43._0_4_;
            auVar51._4_4_ = fVar31 + auVar43._4_4_;
            auVar51._8_4_ = fVar33 + auVar43._8_4_;
            auVar51._12_4_ = fVar35 + auVar43._12_4_;
            auVar51._16_4_ = fVar37 + fStack_440 * auVar27._16_4_ + fStack_280;
            auVar51._20_4_ = fVar39 + fStack_440 * auVar27._20_4_ + fStack_280;
            auVar51._24_4_ = fVar41 + fStack_440 * auVar27._24_4_ + fStack_280;
            auVar51._28_4_ = fVar42 + fVar42 + fStack_280;
            if ((int)uVar4 < iVar8) {
              uVar10 = (ulonglong)(((iVar8 - uVar4) - 1 >> 2) + 1);
              iVar7 = iVar16;
              auVar27 = auVar45;
              auVar29 = auVar54;
              auVar28 = auVar56;
              do {
                auVar21 = vpor_avx2(auVar29,auVar27);
                lVar9 = (longlong)iVar7;
                iVar7 = iVar7 + 8;
                auVar55 = vpor_avx2(auVar21,auVar28);
                auVar43 = auVar55._0_16_;
                auVar27 = vpaddd_avx2(auVar27,auVar63);
                auVar29 = vpaddd_avx2(auVar29,auVar61);
                auVar21 = *(int8_t (*) [32])(lVar5 + lVar9 * 4);
                auVar53 = vmaxps_avx(auVar51,auVar21);
                auVar21 = vblendvps_avx(auVar53,auVar21,auVar55);
                *(int8_t (*) [32])(lVar5 + lVar9 * 4) = auVar21;
                auVar28 = vpaddd_avx2(auVar28,auVar62);
                auVar52._0_4_ = auVar51._0_4_ + fVar23;
                auVar52._4_4_ = auVar51._4_4_ + fVar30;
                auVar52._8_4_ = auVar51._8_4_ + fVar32;
                auVar52._12_4_ = auVar51._12_4_ + fVar34;
                auVar52._16_4_ = auVar51._16_4_ + fVar36 + auVar44._16_4_ * fStack_440;
                auVar52._20_4_ = auVar51._20_4_ + fVar38 + auVar44._20_4_ * fStack_440;
                auVar52._24_4_ = auVar51._24_4_ + fVar40 + auVar44._24_4_ * fStack_440;
                auVar52._28_4_ = auVar51._28_4_ + fVar3 + auVar46._28_4_;
                uVar10 = uVar10 - 1;
                auVar51 = auVar52;
              } while (uVar10 != 0);
            }
            auVar19 = auStack_560._0_16_;
            iVar16 = iVar16 + 0x500;
            auVar45 = vpaddd_avx2(auVar59,auVar45);
            auVar54 = vpaddd_avx2(auVar58,auVar54);
            auVar56 = vpaddd_avx2(auStack_560,auVar56);
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
        lVar18 = lVar18 + 1;
        fStack_45c = fStack_460;
        fStack_458 = fStack_460;
        fStack_454 = fStack_460;
        fStack_450 = fStack_460;
        fStack_44c = fStack_460;
        fStack_448 = fStack_460;
        fStack_444 = fStack_460;
        fStack_43c = fStack_440;
        fStack_438 = fStack_440;
        fStack_434 = fStack_440;
        fStack_430 = fStack_440;
        fStack_42c = fStack_440;
        fStack_428 = fStack_440;
        fStack_424 = fStack_440;
        cVar15 = cStack_580;
      } while (lVar18 < (int)uVar12);
    }
    auVar22 = ZEXT1664(auVar19);
    auVar47 = ZEXT1664(auVar43);
  } while (!(bool)uStack_53c);
  uStack_590 = param_3;
  FUN_18048ff50(param_1,uStack_528,uStack_52c,uStack_538 + 1);
  MXCSR = uStack_530;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_100 ^ (ulonglong)auStack_5b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



