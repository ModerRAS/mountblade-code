#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part569.c - 8 个函数

// 函数: void FUN_18057be32(void)
void FUN_18057be32(void)

{
  float *pfVar1;
  int32_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int8_t auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  short sVar15;
  int32_t uVar16;
  uint uVar17;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t uVar18;
  int64_t unaff_RDI;
  int32_t *puVar19;
  uint64_t uVar20;
  float *unaff_R12;
  int64_t unaff_R13;
  int64_t unaff_R14;
  byte unaff_R15B;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar27;
  int8_t auVar25 [16];
  int8_t auVar26 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM11_Da;
  float fVar31;
  float unaff_XMM11_Db;
  float fVar32;
  float unaff_XMM11_Dc;
  float fVar33;
  float unaff_XMM11_Dd;
  float fVar34;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM15_Da;
  float unaff_XMM15_Db;
  float unaff_XMM15_Dc;
  float unaff_XMM15_Dd;
  float fStack0000000000000050;
  float fStack0000000000000054;
  
  sVar15 = _fdtest(&stack0x00000040);
  if (sVar15 != 2) {
    *(float *)(unaff_RBP + -0x60) = unaff_XMM13_Da;
    sVar15 = _fdtest(unaff_RBP + -0x60);
    if (sVar15 != 2) {
      fVar28 = unaff_XMM7_Da * unaff_XMM7_Da + unaff_XMM6_Da * unaff_XMM6_Da +
               unaff_XMM13_Da * unaff_XMM13_Da;
      fVar24 = fVar28;
      if (fVar28 <= *(float *)(unaff_RBP + 0x30)) {
        fVar24 = *(float *)(unaff_RBP + 0x30);
      }
      auVar25 = rsqrtss(ZEXT416((uint)fVar24),ZEXT416((uint)fVar24));
      fVar30 = auVar25._0_4_;
      fVar30 = fVar30 * 0.5 * (3.0 - fVar24 * fVar30 * fVar30);
      fVar24 = 1000.0 / *(float *)(unaff_RBX + 0xf8);
      fVar28 = fVar30 * fVar28;
      if (0.1 <= fVar28) {
        fVar28 = 0.1;
      }
      *(float *)(unaff_RBX + 0x58) =
           unaff_XMM6_Da * fVar30 * fVar28 * fVar24 * fStack0000000000000050 +
           *(float *)(unaff_RBX + 0x58);
      *(float *)(unaff_RBX + 0x5c) =
           fVar30 * unaff_XMM7_Da * fVar28 * fVar24 * fStack0000000000000050 +
           *(float *)(unaff_RBX + 0x5c);
      *(float *)(unaff_RBX + 0x60) =
           unaff_XMM13_Da * fVar30 * fVar28 * fVar24 * fStack0000000000000050 +
           *(float *)(unaff_RBX + 0x60);
    }
  }
  uVar16 = FUN_18063b5f0(unaff_RBP + 0x30,&stack0x00000030);
  fVar32 = *(float *)(unaff_RBP + -0x20);
  fVar33 = *(float *)(unaff_RBP + -0x1c);
  fVar34 = *(float *)(unaff_RBP + -0x18);
  fVar6 = *(float *)(unaff_RBP + -0x14);
  fVar7 = *(float *)(unaff_RBP + -0x50);
  fVar8 = *(float *)(unaff_RBP + -0x4c);
  fVar9 = *(float *)(unaff_RBP + -0x48);
  fVar10 = *(float *)(unaff_RBP + -0x44);
  fVar24 = *(float *)(unaff_RBP + 0x34);
  fVar28 = *(float *)(unaff_RBP + 0x30);
  fVar30 = *(float *)(unaff_RBP + 0x38);
  fVar27 = *(float *)(unaff_RBP + 0x44);
  fVar21 = *(float *)(unaff_RBP + 0x54);
  fVar22 = *(float *)(unaff_RBP + 0x40);
  fVar23 = *(float *)(unaff_RBP + 0x48);
  fVar29 = *(float *)(unaff_RBP + 0x50);
  *unaff_R12 = fVar32;
  unaff_R12[1] = fVar33;
  unaff_R12[2] = fVar34;
  unaff_R12[3] = fVar6;
  unaff_R12[4] = unaff_XMM15_Da;
  unaff_R12[5] = unaff_XMM15_Db;
  unaff_R12[6] = unaff_XMM15_Dc;
  unaff_R12[7] = unaff_XMM15_Dd;
  fVar31 = *(float *)(unaff_RBP + 0x58);
  *(float *)(unaff_RBX + 200) = fVar24 * unaff_XMM15_Da + fVar28 * fVar32 + fVar30 * fVar7;
  *(float *)(unaff_RBX + 0xcc) = fVar24 * unaff_XMM15_Db + fVar28 * fVar33 + fVar30 * fVar8;
  *(float *)(unaff_RBX + 0xd0) = fVar24 * unaff_XMM15_Dc + fVar28 * fVar34 + fVar30 * fVar9;
  *(float *)(unaff_RBX + 0xd4) = fVar24 * unaff_XMM15_Dd + fVar28 * fVar6 + fVar30 * fVar10;
  uVar11 = *(int32_t *)(unaff_RBP + -0x40);
  uVar12 = *(int32_t *)(unaff_RBP + -0x3c);
  uVar13 = *(int32_t *)(unaff_RBP + -0x38);
  uVar14 = *(int32_t *)(unaff_RBP + -0x34);
  *(float *)(unaff_RBX + 0xd8) = fVar27 * unaff_XMM15_Da + fVar22 * fVar32 + fVar23 * fVar7;
  *(float *)(unaff_RBX + 0xdc) = fVar27 * unaff_XMM15_Db + fVar22 * fVar33 + fVar23 * fVar8;
  *(float *)(unaff_RBX + 0xe0) = fVar27 * unaff_XMM15_Dc + fVar22 * fVar34 + fVar23 * fVar9;
  *(float *)(unaff_RBX + 0xe4) = fVar27 * unaff_XMM15_Dd + fVar22 * fVar6 + fVar23 * fVar10;
  unaff_R12[8] = fVar7;
  unaff_R12[9] = fVar8;
  unaff_R12[10] = fVar9;
  unaff_R12[0xb] = fVar10;
  *(int32_t *)(unaff_RBX + 0x68) = uVar11;
  *(int32_t *)(unaff_RBX + 0x6c) = uVar12;
  *(int32_t *)(unaff_RBX + 0x70) = uVar13;
  *(int32_t *)(unaff_RBX + 0x74) = uVar14;
  *(float *)(unaff_RBX + 0xe8) = fVar21 * unaff_XMM15_Da + fVar29 * fVar32 + fVar31 * fVar7;
  *(float *)(unaff_RBX + 0xec) = fVar21 * unaff_XMM15_Db + fVar29 * fVar33 + fVar31 * fVar8;
  *(float *)(unaff_RBX + 0xf0) = fVar21 * unaff_XMM15_Dc + fVar29 * fVar34 + fVar31 * fVar9;
  *(float *)(unaff_RBX + 0xf4) = fVar21 * unaff_XMM15_Dd + fVar29 * fVar6 + fVar31 * fVar10;
  if (fStack0000000000000054 < unaff_XMM12_Da) {
    if (0.001 <= fStack0000000000000054) {
      if (fStack0000000000000054 <= 0.999) {
        fVar24 = unaff_XMM11_Dc * 0.0;
        fVar28 = unaff_XMM11_Dd * 0.0;
        *(int32_t *)(unaff_RBP + 0x40) = 0xbf800000;
        *(int32_t *)(unaff_RBP + 0x44) = 0xbf800000;
        *(int32_t *)(unaff_RBP + 0x48) = 0xbf800000;
        *(int32_t *)(unaff_RBP + 0x4c) = 0xbf800000;
        auVar25._0_4_ = fVar24 + unaff_XMM11_Da * 1.0;
        auVar25._4_4_ = fVar28 + unaff_XMM11_Db * 0.0;
        auVar25._8_4_ = fVar24 + fVar24;
        auVar25._12_4_ = fVar28 + fVar28;
        auVar26._4_12_ = auVar25._4_12_;
        auVar26._0_4_ = auVar25._0_4_ + auVar25._4_4_;
        *(uint64_t *)(unaff_RBP + 0x30) = 0x3f8000003f800000;
        *(uint64_t *)(unaff_RBP + 0x38) = 0x3f8000003f800000;
        uVar17 = movmskps(uVar16,auVar26);
        pfVar1 = (float *)(unaff_RBP + 0x30 + (uint64_t)(uVar17 & 1) * 0x10);
        fVar24 = *pfVar1;
        fVar28 = pfVar1[1];
        fVar30 = pfVar1[2];
        fVar27 = pfVar1[3];
        if (0.9995 < ABS(auVar26._0_4_)) {
          fVar21 = unaff_XMM12_Da - fStack0000000000000054;
          fVar31 = fVar21 * 1.0 + fStack0000000000000054 * fVar24 * unaff_XMM11_Da;
          fVar32 = fVar21 * 0.0 + fStack0000000000000054 * fVar28 * unaff_XMM11_Db;
          fVar33 = fVar21 * 0.0 + fStack0000000000000054 * fVar30 * unaff_XMM11_Dc;
          fVar34 = fVar21 * 0.0 + fStack0000000000000054 * fVar27 * unaff_XMM11_Dd;
          fVar24 = fVar34 * fVar34 + fVar31 * fVar31;
          fVar28 = fVar33 * fVar33 + fVar32 * fVar32;
          fVar23 = fVar24 + fVar32 * fVar32 + fVar33 * fVar33;
          fVar29 = fVar28 + fVar31 * fVar31 + fVar34 * fVar34;
          auVar5._4_4_ = fVar24 + fVar28 + 1.1754944e-38;
          auVar5._0_4_ = fVar28 + fVar24 + 1.1754944e-38;
          auVar5._8_4_ = fVar23 + 1.1754944e-38;
          auVar5._12_4_ = fVar29 + 1.1754944e-38;
          auVar25 = rsqrtps(auVar26,auVar5);
          fVar30 = auVar25._0_4_;
          fVar27 = auVar25._4_4_;
          fVar21 = auVar25._8_4_;
          fVar22 = auVar25._12_4_;
          unaff_XMM11_Da = fVar31 * (3.0 - fVar30 * fVar30 * (fVar28 + fVar24)) * fVar30 * 0.5;
          unaff_XMM11_Db = fVar32 * (3.0 - fVar27 * fVar27 * (fVar24 + fVar28)) * fVar27 * 0.5;
          unaff_XMM11_Dc = fVar33 * (3.0 - fVar21 * fVar21 * fVar23) * fVar21 * 0.5;
          unaff_XMM11_Dd = fVar34 * (3.0 - fVar22 * fVar22 * fVar29) * fVar22 * 0.5;
        }
        else {
          fVar21 = (float)acosf();
          fVar22 = (float)sinf();
          fVar23 = (float)sinf(fVar21 - fVar21 * fStack0000000000000054);
          fVar23 = fVar23 * (unaff_XMM12_Da / fVar22);
          fVar21 = (float)sinf(fVar21 * fStack0000000000000054);
          fVar21 = fVar21 * (unaff_XMM12_Da / fVar22);
          unaff_XMM11_Da = fVar23 * 1.0 + fVar21 * fVar24 * unaff_XMM11_Da;
          unaff_XMM11_Db = fVar23 * 0.0 + fVar21 * fVar28 * unaff_XMM11_Db;
          unaff_XMM11_Dc = fVar23 * 0.0 + fVar21 * fVar30 * unaff_XMM11_Dc;
          unaff_XMM11_Dd = fVar23 * 0.0 + fVar21 * fVar27 * unaff_XMM11_Dd;
        }
      }
    }
    else {
      unaff_XMM11_Da = 1.0;
      unaff_XMM11_Db = 0.0;
      unaff_XMM11_Dc = 0.0;
      unaff_XMM11_Dd = 0.0;
    }
  }
  if ('\0' < (char)unaff_R15B) {
    uVar20 = (uint64_t)unaff_R15B;
    uVar18 = unaff_RSI;
    puVar19 = (int32_t *)(unaff_RDI + 0x820);
    do {
      unaff_RSI = unaff_RSI + 0x1b0;
      puVar2 = (int32_t *)(*(int64_t *)(unaff_R14 + 0x140) + -0x120 + unaff_RSI);
      uVar11 = puVar2[1];
      uVar12 = puVar2[2];
      uVar13 = puVar2[3];
      *puVar19 = *puVar2;
      puVar19[1] = uVar11;
      puVar19[2] = uVar12;
      puVar19[3] = uVar13;
      *(uint64_t *)(unaff_RDI + 0x800) =
           *(uint64_t *)(unaff_RDI + 0x800) |
           *(uint64_t *)(*(int64_t *)(unaff_R14 + 0x140) + -200 + unaff_RSI);
      uVar4 = uVar18 & 0x3f;
      uVar18 = uVar18 + 1;
      *(uint64_t *)(unaff_RDI + 0x808) = *(uint64_t *)(unaff_RDI + 0x808) | 1L << uVar4;
      uVar20 = uVar20 - 1;
      puVar19 = puVar19 + 4;
    } while (uVar20 != 0);
  }
  lVar3 = *(int64_t *)(unaff_RBP + -0x30);
  pfVar1 = (float *)(unaff_RDI + (unaff_R13 + 0x82) * 0x10);
  *pfVar1 = unaff_XMM11_Da;
  pfVar1[1] = unaff_XMM11_Db;
  pfVar1[2] = unaff_XMM11_Dc;
  pfVar1[3] = unaff_XMM11_Dd;
  *(uint64_t *)(unaff_RDI + 0x800) =
       *(uint64_t *)(unaff_RDI + 0x800) |
       *(uint64_t *)(lVar3 + 0xe8 + *(int64_t *)(unaff_R14 + 0x140));
  *(uint64_t *)(unaff_RDI + 0x808) =
       *(uint64_t *)(unaff_RDI + 0x808) | 1L << ((int64_t)(char)unaff_R15B & 0x3fU);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x60) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18057c02d(void)
void FUN_18057c02d(void)

{
  float *pfVar1;
  int32_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int8_t auVar5 [16];
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t in_EAX;
  uint uVar9;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t uVar10;
  int64_t unaff_RDI;
  int32_t *puVar11;
  uint64_t uVar12;
  int64_t unaff_R13;
  int64_t unaff_R14;
  byte unaff_R15B;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar21;
  int8_t auVar19 [16];
  int8_t auVar20 [16];
  float fVar22;
  float unaff_XMM8_Da;
  float unaff_XMM11_Da;
  float fVar23;
  float unaff_XMM11_Db;
  float fVar24;
  float unaff_XMM11_Dc;
  float fVar25;
  float unaff_XMM11_Dd;
  float fVar26;
  float unaff_XMM12_Da;
  
  if (0.001 <= unaff_XMM8_Da) {
    if (unaff_XMM8_Da <= 0.999) {
      fVar16 = unaff_XMM11_Dc * 0.0;
      fVar17 = unaff_XMM11_Dd * 0.0;
      *(int32_t *)(unaff_RBP + 0x40) = 0xbf800000;
      *(int32_t *)(unaff_RBP + 0x44) = 0xbf800000;
      *(int32_t *)(unaff_RBP + 0x48) = 0xbf800000;
      *(int32_t *)(unaff_RBP + 0x4c) = 0xbf800000;
      auVar20._0_4_ = fVar16 + unaff_XMM11_Da * 1.0;
      auVar20._4_4_ = fVar17 + unaff_XMM11_Db * 0.0;
      auVar20._8_4_ = fVar16 + fVar16;
      auVar20._12_4_ = fVar17 + fVar17;
      auVar19._4_12_ = auVar20._4_12_;
      auVar19._0_4_ = auVar20._0_4_ + auVar20._4_4_;
      *(uint64_t *)(unaff_RBP + 0x30) = 0x3f8000003f800000;
      *(uint64_t *)(unaff_RBP + 0x38) = 0x3f8000003f800000;
      uVar9 = movmskps(in_EAX,auVar19);
      pfVar1 = (float *)(unaff_RBP + 0x30 + (uint64_t)(uVar9 & 1) * 0x10);
      fVar16 = *pfVar1;
      fVar17 = pfVar1[1];
      fVar18 = pfVar1[2];
      fVar21 = pfVar1[3];
      if (0.9995 < ABS(auVar19._0_4_)) {
        fVar13 = unaff_XMM12_Da - unaff_XMM8_Da;
        fVar23 = fVar13 * 1.0 + unaff_XMM8_Da * fVar16 * unaff_XMM11_Da;
        fVar24 = fVar13 * 0.0 + unaff_XMM8_Da * fVar17 * unaff_XMM11_Db;
        fVar25 = fVar13 * 0.0 + unaff_XMM8_Da * fVar18 * unaff_XMM11_Dc;
        fVar26 = fVar13 * 0.0 + unaff_XMM8_Da * fVar21 * unaff_XMM11_Dd;
        fVar16 = fVar26 * fVar26 + fVar23 * fVar23;
        fVar17 = fVar25 * fVar25 + fVar24 * fVar24;
        fVar15 = fVar16 + fVar24 * fVar24 + fVar25 * fVar25;
        fVar22 = fVar17 + fVar23 * fVar23 + fVar26 * fVar26;
        auVar5._4_4_ = fVar16 + fVar17 + 1.1754944e-38;
        auVar5._0_4_ = fVar17 + fVar16 + 1.1754944e-38;
        auVar5._8_4_ = fVar15 + 1.1754944e-38;
        auVar5._12_4_ = fVar22 + 1.1754944e-38;
        auVar20 = rsqrtps(auVar19,auVar5);
        fVar18 = auVar20._0_4_;
        fVar21 = auVar20._4_4_;
        fVar13 = auVar20._8_4_;
        fVar14 = auVar20._12_4_;
        unaff_XMM11_Da = fVar23 * (3.0 - fVar18 * fVar18 * (fVar17 + fVar16)) * fVar18 * 0.5;
        unaff_XMM11_Db = fVar24 * (3.0 - fVar21 * fVar21 * (fVar16 + fVar17)) * fVar21 * 0.5;
        unaff_XMM11_Dc = fVar25 * (3.0 - fVar13 * fVar13 * fVar15) * fVar13 * 0.5;
        unaff_XMM11_Dd = fVar26 * (3.0 - fVar14 * fVar14 * fVar22) * fVar14 * 0.5;
      }
      else {
        fVar13 = (float)acosf();
        fVar14 = (float)sinf();
        fVar15 = (float)sinf(fVar13 - fVar13 * unaff_XMM8_Da);
        fVar15 = fVar15 * (unaff_XMM12_Da / fVar14);
        fVar13 = (float)sinf(fVar13 * unaff_XMM8_Da);
        fVar13 = fVar13 * (unaff_XMM12_Da / fVar14);
        unaff_XMM11_Da = fVar15 * 1.0 + fVar13 * fVar16 * unaff_XMM11_Da;
        unaff_XMM11_Db = fVar15 * 0.0 + fVar13 * fVar17 * unaff_XMM11_Db;
        unaff_XMM11_Dc = fVar15 * 0.0 + fVar13 * fVar18 * unaff_XMM11_Dc;
        unaff_XMM11_Dd = fVar15 * 0.0 + fVar13 * fVar21 * unaff_XMM11_Dd;
      }
    }
  }
  else {
    unaff_XMM11_Da = 1.0;
    unaff_XMM11_Db = 0.0;
    unaff_XMM11_Dc = 0.0;
    unaff_XMM11_Dd = 0.0;
  }
  if ('\0' < (char)unaff_R15B) {
    uVar12 = (uint64_t)unaff_R15B;
    uVar10 = unaff_RSI;
    puVar11 = (int32_t *)(unaff_RDI + 0x820);
    do {
      unaff_RSI = unaff_RSI + 0x1b0;
      puVar2 = (int32_t *)(*(int64_t *)(unaff_R14 + 0x140) + -0x120 + unaff_RSI);
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      *puVar11 = *puVar2;
      puVar11[1] = uVar6;
      puVar11[2] = uVar7;
      puVar11[3] = uVar8;
      *(uint64_t *)(unaff_RDI + 0x800) =
           *(uint64_t *)(unaff_RDI + 0x800) |
           *(uint64_t *)(*(int64_t *)(unaff_R14 + 0x140) + -200 + unaff_RSI);
      uVar4 = uVar10 & 0x3f;
      uVar10 = uVar10 + 1;
      *(uint64_t *)(unaff_RDI + 0x808) = *(uint64_t *)(unaff_RDI + 0x808) | 1L << uVar4;
      uVar12 = uVar12 - 1;
      puVar11 = puVar11 + 4;
    } while (uVar12 != 0);
  }
  lVar3 = *(int64_t *)(unaff_RBP + -0x30);
  pfVar1 = (float *)(unaff_RDI + (unaff_R13 + 0x82) * 0x10);
  *pfVar1 = unaff_XMM11_Da;
  pfVar1[1] = unaff_XMM11_Db;
  pfVar1[2] = unaff_XMM11_Dc;
  pfVar1[3] = unaff_XMM11_Dd;
  *(uint64_t *)(unaff_RDI + 0x800) =
       *(uint64_t *)(unaff_RDI + 0x800) |
       *(uint64_t *)(lVar3 + 0xe8 + *(int64_t *)(unaff_R14 + 0x140));
  *(uint64_t *)(unaff_RDI + 0x808) =
       *(uint64_t *)(unaff_RDI + 0x808) | 1L << ((int64_t)(char)unaff_R15B & 0x3fU);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x60) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18057c1b0(void)
void FUN_18057c1b0(void)

{
  int32_t *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t uVar7;
  int64_t unaff_RDI;
  int32_t *puVar8;
  uint64_t uVar9;
  int64_t unaff_R13;
  int64_t unaff_R14;
  byte unaff_R15B;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  
  uVar9 = (uint64_t)unaff_R15B;
  uVar7 = unaff_RSI;
  puVar8 = (int32_t *)(unaff_RDI + 0x820);
  do {
    unaff_RSI = unaff_RSI + 0x1b0;
    puVar1 = (int32_t *)(*(int64_t *)(unaff_R14 + 0x140) + -0x120 + unaff_RSI);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    *puVar8 = *puVar1;
    puVar8[1] = uVar4;
    puVar8[2] = uVar5;
    puVar8[3] = uVar6;
    *(uint64_t *)(unaff_RDI + 0x800) =
         *(uint64_t *)(unaff_RDI + 0x800) |
         *(uint64_t *)(*(int64_t *)(unaff_R14 + 0x140) + -200 + unaff_RSI);
    uVar3 = uVar7 & 0x3f;
    uVar7 = uVar7 + 1;
    *(uint64_t *)(unaff_RDI + 0x808) = *(uint64_t *)(unaff_RDI + 0x808) | 1L << uVar3;
    uVar9 = uVar9 - 1;
    puVar8 = puVar8 + 4;
  } while (uVar9 != 0);
  lVar2 = *(int64_t *)(unaff_RBP + -0x30);
  puVar8 = (int32_t *)(unaff_RDI + (unaff_R13 + 0x82) * 0x10);
  *puVar8 = unaff_XMM11_Da;
  puVar8[1] = unaff_XMM11_Db;
  puVar8[2] = unaff_XMM11_Dc;
  puVar8[3] = unaff_XMM11_Dd;
  *(uint64_t *)(unaff_RDI + 0x800) =
       *(uint64_t *)(unaff_RDI + 0x800) |
       *(uint64_t *)(lVar2 + 0xe8 + *(int64_t *)(unaff_R14 + 0x140));
  *(uint64_t *)(unaff_RDI + 0x808) =
       *(uint64_t *)(unaff_RDI + 0x808) | 1L << ((int64_t)(char)unaff_R15B & 0x3fU);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x60) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18057c25f(uint64_t param_1,int64_t param_2,int64_t param_3)
void FUN_18057c25f(uint64_t param_1,int64_t param_2,int64_t param_3)

{
  int32_t *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t uVar8;
  int64_t unaff_RDI;
  int32_t *puVar9;
  uint64_t uVar10;
  char unaff_R15B;
  
  *(int8_t *)(unaff_RBX + 0x108) = 1;
  *(int32_t *)(unaff_RBX + 0x68) = 0xf149f2ca;
  *(int32_t *)(unaff_RBX + 0x6c) = 0xf149f2ca;
  *(int32_t *)(unaff_RBX + 0x70) = 0xf149f2ca;
  *(int32_t *)(unaff_RBX + 0x74) = 0x7f7fffff;
  lVar2 = *(int64_t *)(param_2 + 0x208);
  if (-1 < unaff_R15B) {
    uVar8 = 0;
    uVar10 = (uint64_t)(byte)(unaff_R15B + 1);
    uVar7 = uVar8;
    puVar9 = (int32_t *)(param_3 + 0x820);
    do {
      puVar1 = (int32_t *)(uVar7 + 0x90 + *(int64_t *)(lVar2 + 0x140));
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *puVar9 = *puVar1;
      puVar9[1] = uVar4;
      puVar9[2] = uVar5;
      puVar9[3] = uVar6;
      *(uint64_t *)(unaff_RDI + 0x800) =
           *(uint64_t *)(unaff_RDI + 0x800) |
           *(uint64_t *)(uVar7 + 0xe8 + *(int64_t *)(lVar2 + 0x140));
      uVar3 = uVar8 & 0x3f;
      uVar8 = uVar8 + 1;
      *(uint64_t *)(unaff_RDI + 0x808) = *(uint64_t *)(unaff_RDI + 0x808) | 1L << uVar3;
      uVar10 = uVar10 - 1;
      uVar7 = uVar7 + 0x1b0;
      puVar9 = puVar9 + 4;
    } while (uVar10 != 0);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x60) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18057c310(int64_t param_1)
void FUN_18057c310(int64_t param_1)

{
  void *puVar1;
  int64_t *plVar2;
  void *puVar3;
  int32_t *puVar4;
  int iVar5;
  int iVar6;
  
  FUN_18065cc10(param_1 + 0x3460);
  plVar2 = (int64_t *)(**(code **)(*render_system_data_config + 0x70))(render_system_data_config,&unknown_var_1920_ptr);
  plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x28))(plVar2,*(int32_t *)(param_1 + 0x1284));
  (**(code **)(*plVar2 + 0x70))(plVar2,&system_data_fd38);
  iVar5 = 0;
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x100)) {
    puVar4 = (int32_t *)(param_1 + 0x134);
    do {
      plVar2 = (int64_t *)(**(code **)(*render_system_data_config + 0x70))(render_system_data_config,&unknown_var_7100_ptr);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x50))(plVar2,iVar6);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,&system_data_f674);
      if (*(int64_t *)(puVar4 + -0xb) == 0) {
        puVar3 = &system_data_b57c;
      }
      else {
        puVar1 = *(void **)(*(int64_t *)(puVar4 + -0xb) + 0x18);
        puVar3 = &system_buffer_ptr;
        if (puVar1 != (void *)0x0) {
          puVar3 = puVar1;
        }
      }
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,puVar3);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,&unknown_var_1984_ptr);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x28))(plVar2,puVar4[-9]);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,&unknown_var_1976_ptr);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x28))(plVar2,*puVar4);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,&unknown_var_2024_ptr);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x28))(plVar2,puVar4[-8]);
      (**(code **)(*plVar2 + 0x70))(plVar2,&system_data_fd38);
      iVar6 = iVar6 + 1;
      puVar4 = puVar4 + 0x12;
    } while (iVar6 < *(int *)(param_1 + 0x100));
  }
  plVar2 = (int64_t *)(**(code **)(*render_system_data_config + 0x70))(render_system_data_config,&unknown_var_2000_ptr);
  plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x28))(plVar2,*(int32_t *)(param_1 + 0x2434));
  (**(code **)(*plVar2 + 0x70))(plVar2,&system_data_fd38);
  if (0 < *(int *)(param_1 + 0x12b0)) {
    puVar4 = (int32_t *)(param_1 + 0x12e4);
    do {
      plVar2 = (int64_t *)(**(code **)(*render_system_data_config + 0x70))(render_system_data_config,&unknown_var_7100_ptr);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x50))(plVar2,iVar5);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,&system_data_f674);
      if (*(int64_t *)(puVar4 + -0xb) == 0) {
        puVar3 = &system_data_b57c;
      }
      else {
        puVar1 = *(void **)(*(int64_t *)(puVar4 + -0xb) + 0x18);
        puVar3 = &system_buffer_ptr;
        if (puVar1 != (void *)0x0) {
          puVar3 = puVar1;
        }
      }
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,puVar3);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,&unknown_var_1984_ptr);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x28))(plVar2,puVar4[-9]);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,&unknown_var_1976_ptr);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x28))(plVar2,*puVar4);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,&unknown_var_2024_ptr);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x28))(plVar2,puVar4[-8]);
      (**(code **)(*plVar2 + 0x70))(plVar2,&system_data_fd38);
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 0x12;
    } while (iVar5 < *(int *)(param_1 + 0x12b0));
  }
  return;
}





// 函数: void FUN_18057c3b0(int64_t param_1,int param_2,int64_t param_3,uint64_t param_4,
void FUN_18057c3b0(int64_t param_1,int param_2,int64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6)

{
  int32_t uVar1;
  
  *(int8_t *)(param_3 + 0x1041) = *(int8_t *)(param_1 + 0x25fb);
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 2;
  }
  FUN_180433100(param_1 + 0xf0 + (int64_t)param_2 * 0x11b0,param_3,param_4,param_5,param_6,uVar1,0)
  ;
  return;
}





// 函数: void FUN_18057c420(void)
void FUN_18057c420(void)

{
  FUN_180577110(0,0,0,0,0x3f800000,0);
  return;
}



float * FUN_18057c450(float *param_1,float *param_2,float *param_3)

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
  
  fVar4 = param_1[8];
  fVar5 = param_1[9];
  fVar6 = param_1[10];
  fVar7 = param_1[0xb];
  fVar8 = param_1[4];
  fVar9 = param_1[5];
  fVar10 = param_1[6];
  fVar1 = param_3[1];
  fVar11 = *param_1;
  fVar12 = param_1[1];
  fVar13 = param_1[2];
  fVar2 = *param_3;
  fVar3 = param_3[2];
  *param_2 = fVar1 * fVar12 + fVar2 * fVar11 + fVar3 * fVar13;
  param_2[1] = fVar1 * fVar9 + fVar2 * fVar8 + fVar3 * fVar10;
  param_2[2] = fVar1 * fVar5 + fVar2 * fVar4 + fVar3 * fVar6;
  param_2[3] = fVar1 * fVar7 + fVar2 * fVar7 + fVar3 * fVar7;
  fVar1 = param_3[5];
  fVar2 = param_3[4];
  fVar3 = param_3[6];
  param_2[4] = fVar1 * fVar12 + fVar2 * fVar11 + fVar3 * fVar13;
  param_2[5] = fVar1 * fVar9 + fVar2 * fVar8 + fVar3 * fVar10;
  param_2[6] = fVar1 * fVar5 + fVar2 * fVar4 + fVar3 * fVar6;
  param_2[7] = fVar1 * fVar7 + fVar2 * fVar7 + fVar3 * fVar7;
  fVar1 = param_3[9];
  fVar2 = param_3[8];
  fVar3 = param_3[10];
  param_2[8] = fVar1 * fVar12 + fVar2 * fVar11 + fVar3 * fVar13;
  param_2[9] = fVar1 * fVar9 + fVar2 * fVar8 + fVar3 * fVar10;
  param_2[10] = fVar1 * fVar5 + fVar2 * fVar4 + fVar3 * fVar6;
  param_2[0xb] = fVar1 * fVar7 + fVar2 * fVar7 + fVar3 * fVar7;
  return param_2;
}





// 函数: void FUN_18057c630(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18057c630(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t unaff_RDI;
  
  FUN_180431730(param_1 + 0xf0);
  FUN_180431680(param_1 + 0xf0,param_2,0);
  FUN_180431730(param_1 + 0x12a0);
                    // WARNING: Subroutine does not return
  memset(param_1 + 0x13e0,0,0x1050,param_4,unaff_RDI);
}



int64_t FUN_18057c690(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  lVar1 = param_1 + 0x10;
  lVar3 = 0x12;
  do {
    func_0x0001804aabb0(lVar1);
    lVar1 = lVar1 + 0x104;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  lVar3 = 2;
  lVar1 = param_1 + 0x1260;
  lVar2 = 2;
  do {
    func_0x000180669980(lVar1);
    lVar1 = lVar1 + 100;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  lVar1 = param_1 + 0x1328;
  do {
    func_0x000180669830(lVar1);
    lVar1 = lVar1 + 0x18;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  func_0x000180668820(param_1);
  return param_1;
}



uint64_t * FUN_18057c730(uint64_t *param_1)

{
  FUN_1805887f0();
  *param_1 = &unknown_var_952_ptr;
  param_1[0x4aa] = 0;
  param_1[0x4af] = 0;
  param_1[0x4b0] = 0xffffffffffffffff;
  *(int16_t *)(param_1 + 0x4b1) = 0xffff;
  param_1[0x4b2] = 0;
  param_1[0x4b3] = 0;
  param_1[0x4a9] = 0;
  *(int32_t *)(param_1 + 0x4a8) = 0;
  param_1[0x4ab] = 0;
  param_1[0x4ac] = 0;
  param_1[0x4ad] = 0;
  param_1[0x4ae] = 0;
  return param_1;
}



uint64_t * FUN_18057c7c0(uint64_t *param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  
  *param_1 = &unknown_var_952_ptr;
  puVar1 = (uint64_t *)param_1[0x4b2];
  if (puVar1 != (uint64_t *)0x0) {
    lVar3 = __RTCastToVoid(puVar1);
    (**(code **)*puVar1)(puVar1,0);
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(lVar3);
    }
  }
  param_1[0x4b2] = 0;
  plVar2 = (int64_t *)param_1[0x4b3];
  if (plVar2 != (int64_t *)0x0) {
    lVar3 = __RTCastToVoid(plVar2);
    (**(code **)(*plVar2 + 0x20))(plVar2,0);
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(lVar3);
    }
  }
  param_1[0x4b3] = 0;
  if ((int64_t *)param_1[0x4aa] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x4aa] + 0x38))();
  }
  FUN_180588910(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x25a0);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



