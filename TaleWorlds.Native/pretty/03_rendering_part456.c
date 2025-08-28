#include "TaleWorlds.Native.Split.h"

// 03_rendering_part456.c - 5 个函数

// 函数: void FUN_180513335(float param_1)
void FUN_180513335(float param_1)

{
  uint64_t *puVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  uint64_t uVar5;
  bool bVar6;
  float *pfVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  uint *puVar10;
  int64_t lVar11;
  int8_t unaff_BL;
  float *unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t lVar12;
  int64_t lVar13;
  char in_R10B;
  int64_t in_R11;
  int64_t lVar14;
  int64_t lVar15;
  int64_t unaff_R14;
  float *unaff_R15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int8_t auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float unaff_XMM6_Da;
  float fVar28;
  float fVar29;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  uint64_t in_stack_00000020;
  int32_t uVar36;
  float fStack0000000000000034;
  float fStack000000000000003c;
  uint64_t in_stack_00000060;
  uint64_t in_stack_00000068;
  float in_stack_00000070;
  float fStack0000000000000074;
  int in_stack_00000078;
  
  uVar36 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
  unaff_RBP[0x14] = param_1;
  unaff_RBP[0x15] = unaff_XMM8_Da + unaff_R15[1];
  fVar26 = unaff_R15[2];
  unaff_RBP[0x17] = 3.4028235e+38;
  unaff_RBP[0x16] = unaff_XMM6_Da + fVar26;
  FUN_180534930();
  fVar26 = *(float *)(*(int64_t *)(unaff_RDI + 0x6d8) + 0x8c0);
  fVar24 = unaff_RBP[-10] - unaff_XMM6_Da / fVar26;
  fVar24 = SQRT(fVar24 * fVar24 -
                (unaff_XMM8_Da * unaff_XMM8_Da + unaff_XMM7_Da * unaff_XMM7_Da) *
                (4.0 / (fVar26 * fVar26)));
  if (fVar24 < unaff_RBP[-10]) {
    lVar11 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x6d8) + 0x8a8);
    unaff_RBP[-10] = fVar24;
    *(float *)(in_R11 + 8) = (fVar26 * fVar24 + *(float *)(lVar11 + 0xa8)) - unaff_R15[2];
  }
  lVar11 = *(int64_t *)(unaff_R14 + 0x140);
  lVar15 = unaff_RSI * 0x1b0;
  lVar13 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x658) + 0x18);
  lVar14 = unaff_RSI * 0x100;
  do {
    LOCK();
    puVar10 = (uint *)(lVar14 + lVar13);
    uVar2 = *puVar10;
    *puVar10 = *puVar10 | 1;
    UNLOCK();
  } while ((uVar2 & 1) != 0);
  pfVar16 = (float *)(lVar14 + 4 + lVar13);
  fVar26 = *pfVar16;
  fVar24 = pfVar16[1];
  fVar27 = pfVar16[2];
  fVar18 = pfVar16[3];
  pfVar16 = (float *)(lVar14 + 0x14 + lVar13);
  fVar17 = *pfVar16;
  fVar19 = pfVar16[1];
  fVar28 = pfVar16[2];
  fVar21 = pfVar16[3];
  unaff_RBP[0x88] = fVar26;
  unaff_RBP[0x89] = fVar24;
  unaff_RBP[0x8a] = fVar27;
  unaff_RBP[0x8b] = fVar18;
  unaff_RBP[0x8c] = fVar17;
  unaff_RBP[0x8d] = fVar19;
  unaff_RBP[0x8e] = fVar28;
  unaff_RBP[0x8f] = fVar21;
  *(int32_t *)(lVar14 + lVar13) = 0;
  lVar13 = *(int64_t *)(unaff_RDI + 0x6d8);
  unaff_RBP[0x54] = fVar26;
  unaff_RBP[0x55] = fVar24;
  unaff_RBP[0x56] = fVar27;
  unaff_RBP[0x57] = fVar18;
  unaff_RBP[0x58] = fVar17;
  unaff_RBP[0x59] = fVar19;
  unaff_RBP[0x5a] = fVar28;
  unaff_RBP[0x5b] = fVar21;
  unaff_RBP[0x2c] = fVar26;
  unaff_RBP[0x2d] = fVar24;
  unaff_RBP[0x2e] = fVar27;
  unaff_RBP[0x2f] = fVar18;
  lVar12 = *(int64_t *)(lVar13 + 0x8a8);
  unaff_RBP[0x30] = fVar17;
  unaff_RBP[0x31] = fVar19;
  unaff_RBP[0x32] = fVar28;
  unaff_RBP[0x33] = fVar21;
  FUN_18063b5f0(unaff_RBP + 0x34,unaff_RBP + 0x2c);
  fVar25 = unaff_RBP[0x3c];
  fVar29 = unaff_RBP[0x3d];
  fVar30 = unaff_RBP[0x38];
  fVar3 = unaff_RBP[0x39];
  unaff_RBP[7] = 3.4028235e+38;
  fVar26 = *(float *)(lVar12 + 0x80);
  fVar24 = *(float *)(lVar12 + 0x70);
  fVar27 = *(float *)(lVar12 + 0x84);
  fVar18 = *(float *)(lVar12 + 0x74);
  fVar35 = *(float *)(lVar12 + 0x98);
  fVar4 = unaff_RBP[0x34];
  fVar20 = unaff_RBP[0x35];
  fVar22 = unaff_RBP[0x36];
  unaff_RBP[3] = 3.4028235e+38;
  unaff_RBP[0x78] = fVar17;
  unaff_RBP[0x79] = fVar19;
  unaff_RBP[0x7a] = fVar28;
  unaff_RBP[0x7b] = fVar21;
  unaff_RBP[0x74] = fVar25;
  unaff_RBP[0x75] = fVar29;
  unaff_RBP[0x76] = unaff_RBP[0x3e];
  unaff_RBP[0x77] = unaff_RBP[0x3f];
  fVar21 = fVar17 * fVar24 + fVar19 * fVar26 + *(float *)(lVar12 + 0xa0);
  fVar28 = fVar28 * fVar35 + *(float *)(lVar12 + 0xa8);
  fVar17 = fVar17 * fVar18 + fVar19 * fVar27 + *(float *)(lVar12 + 0xa4);
  unaff_RBP[0x70] = fVar30;
  unaff_RBP[0x71] = fVar3;
  unaff_RBP[0x72] = unaff_RBP[0x3a];
  unaff_RBP[0x73] = unaff_RBP[0x3b];
  unaff_RBP[0x6c] = fVar4;
  unaff_RBP[0x6d] = fVar20;
  unaff_RBP[0x6e] = fVar22;
  unaff_RBP[0x6f] = unaff_RBP[0x37];
  unaff_RBP[0x24] = fVar21;
  unaff_RBP[0x25] = fVar17;
  unaff_RBP[0x26] = fVar28;
  unaff_RBP[0x27] = 3.4028235e+38;
  unaff_RBP[0x68] = fVar21;
  unaff_RBP[0x69] = fVar17;
  unaff_RBP[0x6a] = fVar28;
  unaff_RBP[0x6b] = 3.4028235e+38;
  fVar31 = fVar35 * unaff_RBP[0x3e];
  fVar33 = fVar25 * fVar24 + fVar29 * fVar26;
  fVar32 = fVar18 * fVar25 + fVar27 * fVar29;
  fVar34 = unaff_RBP[0x3a] * fVar35;
  fVar29 = fVar30 * fVar24 + fVar3 * fVar26;
  fVar25 = fVar30 * fVar18 + fVar27 * fVar3;
  unaff_RBP[-1] = 3.4028235e+38;
  unaff_RBP[0xb] = 3.4028235e+38;
  unaff_RBP[0x13] = 3.4028235e+38;
  unaff_RBP[0xf] = 3.4028235e+38;
  fVar17 = unaff_RBP[3];
  fVar21 = fVar4 * fVar24 + fVar20 * fVar26;
  fVar26 = unaff_RBP[-1];
  fVar18 = fVar4 * fVar18 + fVar20 * fVar27;
  fVar35 = fVar22 * fVar35;
  fVar24 = unaff_RBP[7];
  unaff_RBP[0x5c] = fVar21;
  unaff_RBP[0x5d] = fVar18;
  unaff_RBP[0x5e] = fVar35;
  unaff_RBP[0x5f] = fVar26;
  in_stack_00000060 = CONCAT44(fVar22,fVar35);
  in_stack_00000068 = CONCAT44(fVar22,fVar22);
  fVar19 = 1.0 / *(float *)(lVar13 + 0x8c0);
  unaff_RBP[0x60] = fVar29;
  unaff_RBP[0x61] = fVar25;
  unaff_RBP[0x62] = fVar34;
  unaff_RBP[99] = fVar17;
  unaff_RBP[0x1c] = fVar21;
  unaff_RBP[0x1d] = fVar18;
  unaff_RBP[0x1e] = fVar35;
  unaff_RBP[0x1f] = fVar26;
  unaff_RBP[-4] = fVar21;
  unaff_RBP[-3] = fVar18;
  unaff_RBP[-2] = fVar35;
  unaff_RBP[-1] = fVar26;
  fVar30 = fVar19 * fVar31;
  unaff_RBP[100] = fVar33;
  unaff_RBP[0x65] = fVar32;
  unaff_RBP[0x66] = fVar31;
  unaff_RBP[0x67] = fVar24;
  fStack000000000000003c = fVar19 * fVar33;
  in_stack_00000070 = fVar19 * fVar21;
  fStack0000000000000034 = fVar19 * fVar32;
  fStack0000000000000074 = fVar19 * fVar18;
  fVar26 = unaff_RBP[0xb];
  fVar28 = fVar19 * fVar35;
  unaff_RBP[0x20] = fVar33;
  unaff_RBP[0x21] = fVar32;
  unaff_RBP[0x22] = fVar31;
  unaff_RBP[0x23] = fVar24;
  unaff_RBP[4] = fVar33;
  unaff_RBP[5] = fVar32;
  unaff_RBP[6] = fVar31;
  unaff_RBP[7] = fVar24;
  *unaff_RBP = fVar29;
  unaff_RBP[1] = fVar25;
  unaff_RBP[2] = fVar34;
  unaff_RBP[3] = fVar17;
  in_stack_00000078 = *(int *)(*(int64_t *)(unaff_R14 + 0x140) + 0x110 + lVar15);
  fVar24 = unaff_RBP[0x13];
  fVar27 = unaff_RBP[0xf];
  unaff_RBP[0x10] = fStack000000000000003c;
  unaff_RBP[0x11] = fStack0000000000000034;
  unaff_RBP[0x12] = fVar30;
  unaff_RBP[0x13] = fVar24;
  unaff_RBP[-0x16] = fStack000000000000003c;
  unaff_RBP[-0x15] = fStack0000000000000034;
  unaff_RBP[-0x14] = fVar30;
  unaff_RBP[-0x13] = fVar24;
  unaff_RBP[8] = in_stack_00000070;
  unaff_RBP[9] = fStack0000000000000074;
  unaff_RBP[10] = fVar28;
  unaff_RBP[0xb] = fVar26;
  unaff_RBP[-0x1e] = in_stack_00000070;
  unaff_RBP[-0x1d] = fStack0000000000000074;
  unaff_RBP[-0x1c] = fVar28;
  unaff_RBP[-0x1b] = fVar26;
  unaff_RBP[0xc] = fVar19 * fVar29;
  unaff_RBP[0xd] = fVar19 * fVar25;
  unaff_RBP[0xe] = fVar19 * fVar34;
  unaff_RBP[0xf] = fVar27;
  unaff_RBP[-0x1a] = fVar19 * fVar29;
  unaff_RBP[-0x19] = fVar19 * fVar25;
  unaff_RBP[-0x18] = fVar19 * fVar34;
  unaff_RBP[-0x17] = fVar27;
  if (((in_R10B == '\0') || (in_stack_00000078 < 0)) ||
     (*(char *)(*(int64_t *)(*(int64_t *)(unaff_RBP + -0xe) + 0x18) + 0xa1 + lVar14) != '\0')) {
    pfVar16 = *(float **)(unaff_RBP + -0x20);
    bVar6 = false;
    fStack0000000000000034 = fVar18;
  }
  else {
    fVar26 = *(float *)(lVar15 + 0x160 + lVar11);
    fVar24 = *(float *)(lVar15 + 0x15c + lVar11);
    fVar31 = fVar26 - *(float *)(lVar15 + 0x170 + lVar11);
    fVar27 = *(float *)(lVar15 + 0x164 + lVar11);
    fVar19 = *(float *)(lVar15 + 0x17c + lVar11);
    bVar6 = true;
    fVar20 = fVar24 - *(float *)(lVar15 + 0x16c + lVar11);
    fVar22 = fVar27 - *(float *)(lVar15 + 0x174 + lVar11);
    fVar3 = *unaff_R15;
    fVar4 = unaff_R15[1];
    fVar29 = fVar29 * fVar26 + unaff_RBP[0x1c] * fVar24 + unaff_RBP[0x20] * fVar27 + unaff_RBP[0x24]
    ;
    fVar25 = fVar25 * fVar26 + unaff_RBP[0x1d] * fVar24 + unaff_RBP[0x21] * fVar27 + unaff_RBP[0x25]
    ;
    fVar32 = fVar34 * fVar26 + unaff_RBP[0x1e] * fVar24 + unaff_RBP[0x22] * fVar27 + unaff_RBP[0x26]
    ;
    unaff_RBP[0x40] = fVar29;
    unaff_RBP[0x41] = fVar25;
    unaff_RBP[0x42] = fVar32;
    unaff_RBP[0x43] =
         fVar17 * fVar26 + unaff_RBP[0x1f] * fVar24 + unaff_RBP[0x23] * fVar27 + unaff_RBP[0x27];
    fVar24 = (SQRT(fVar31 * fVar31 + fVar20 * fVar20 + fVar22 * fVar22) + fVar19 + fVar19) *
             *(float *)(lVar13 + 0x8c0);
    fVar26 = ((fVar4 - (fVar25 - fVar19 * fVar18)) * fStack0000000000000074 +
              (fVar3 - (fVar29 - fVar19 * fVar21)) * in_stack_00000070 +
             (unaff_R15[2] - (fVar32 - fVar19 * fVar35)) * fVar28) / fVar24;
    if (0.0 <= fVar26) {
      if (1.0 <= fVar26) {
        fVar26 = 1.0;
      }
    }
    else {
      fVar26 = 0.0;
    }
    pfVar16 = *(float **)(unaff_RBP + -0x20);
    unaff_RBP[-0x1b] = 3.4028235e+38;
    fVar26 = fVar26 * 0.4 + 0.2;
    fVar35 = in_stack_00000070 * fVar24 + fVar26 * *pfVar16;
    fVar27 = fVar24 * fStack0000000000000074 + fVar26 * pfVar16[1];
    fVar18 = fVar24 * fVar28 + fVar26 * pfVar16[2];
    fVar26 = fVar27 * fVar27 + fVar35 * fVar35 + fVar18 * fVar18;
    auVar23 = rsqrtss(ZEXT416((uint)fVar26),ZEXT416((uint)fVar26));
    fVar24 = auVar23._0_4_;
    fVar26 = fVar24 * 0.5 * (3.0 - fVar26 * fVar24 * fVar24);
    fVar35 = fVar26 * fVar35;
    fVar27 = fVar26 * fVar27;
    fVar26 = fVar26 * fVar18;
    unaff_RBP[-0x1e] = fVar35;
    unaff_RBP[-0x1d] = fVar27;
    unaff_RBP[-0x1c] = fVar26;
    if (((fVar35 == 0.0) && (fVar27 == 0.0)) && (fVar26 == 0.0)) {
      unaff_RBP[-0x1e] = in_stack_00000070;
      unaff_RBP[-0x1c] = fVar28;
      unaff_RBP[-0x1d] = fStack0000000000000074;
    }
    else {
      fVar28 = fVar26 * fStack0000000000000034 - fVar27 * fVar30;
      fVar17 = fVar35 * fVar30 - fVar26 * fStack000000000000003c;
      fVar19 = fVar27 * fStack000000000000003c - fVar35 * fStack0000000000000034;
      fVar24 = fVar17 * fVar17 + fVar28 * fVar28 + fVar19 * fVar19;
      auVar23 = rsqrtss(ZEXT416((uint)fVar24),ZEXT416((uint)fVar24));
      fVar18 = auVar23._0_4_;
      fVar24 = fVar18 * 0.5 * (3.0 - fVar24 * fVar18 * fVar18);
      fVar17 = fVar24 * fVar17;
      fVar19 = fVar24 * fVar19;
      fVar24 = fVar24 * fVar28;
      unaff_RBP[-0x1a] = fVar24;
      unaff_RBP[-0x19] = fVar17;
      unaff_RBP[-0x18] = fVar19;
      unaff_RBP[-0x16] = fVar27 * fVar19 - fVar26 * fVar17;
      unaff_RBP[-0x15] = fVar26 * fVar24 - fVar35 * fVar19;
      unaff_RBP[-0x14] = fVar35 * fVar17 - fVar27 * fVar24;
    }
    fVar26 = unaff_RBP[-0xc];
    fVar24 = unaff_RBP[-0xb];
    fVar27 = fVar24 * fVar24 + fVar26 * fVar26 + unaff_RBP[-10] * unaff_RBP[-10];
    auVar23 = rsqrtss(ZEXT416((uint)fVar27),ZEXT416((uint)fVar27));
    fVar18 = auVar23._0_4_;
    fVar27 = fVar18 * 0.5 * (3.0 - fVar27 * fVar18 * fVar18);
    fVar26 = fVar27 * fVar26;
    fVar24 = -(fVar27 * fVar24);
    if (9.999999e-09 < fVar24 * fVar24 + fVar26 * fVar26) {
      fVar35 = fVar24 * fVar24 + fVar26 * fVar26;
      unaff_RBP[-0x10] = 0.0;
      unaff_RBP[-0xf] = 3.4028235e+38;
      auVar23 = rsqrtss(ZEXT416((uint)fVar35),ZEXT416((uint)fVar35));
      fVar27 = auVar23._0_4_;
      fVar17 = fVar27 * 0.5 * (3.0 - fVar35 * fVar27 * fVar27);
      fVar27 = *(float *)(unaff_RDI + 0x524);
      fVar18 = *(float *)(unaff_RDI + 0x534);
      fVar35 = fVar17 * fVar35 * 4.0;
      unaff_RBP[-0x12] =
           fVar17 * fVar26 * *(float *)(unaff_RDI + 0x530) +
           fVar17 * fVar24 * *(float *)(unaff_RDI + 0x520);
      unaff_RBP[-0x11] = fVar17 * fVar26 * fVar18 + fVar17 * fVar24 * fVar27;
      pfVar7 = (float *)FUN_180534b00(unaff_RBP + -0x1e,unaff_RBP + 0x44,unaff_RBP + -0x12,fVar35);
      fVar26 = pfVar7[1];
      fVar24 = pfVar7[2];
      fVar27 = pfVar7[3];
      unaff_RBP[-0x1e] = *pfVar7;
      unaff_RBP[-0x1d] = fVar26;
      unaff_RBP[-0x1c] = fVar24;
      unaff_RBP[-0x1b] = fVar27;
      pfVar7 = (float *)FUN_180534b00(unaff_RBP + -0x1a,unaff_RBP + 0x48,unaff_RBP + -0x12,fVar35);
      fVar26 = pfVar7[1];
      fVar24 = pfVar7[2];
      fVar27 = pfVar7[3];
      unaff_RBP[-0x1a] = *pfVar7;
      unaff_RBP[-0x19] = fVar26;
      unaff_RBP[-0x18] = fVar24;
      unaff_RBP[-0x17] = fVar27;
      pfVar7 = (float *)FUN_180534b00(unaff_RBP + -0x16,unaff_RBP + 0x4c,unaff_RBP + -0x12,fVar35);
      fVar26 = pfVar7[1];
      fVar24 = pfVar7[2];
      fVar27 = pfVar7[3];
      unaff_RBP[-0x16] = *pfVar7;
      unaff_RBP[-0x15] = fVar26;
      unaff_RBP[-0x14] = fVar24;
      unaff_RBP[-0x13] = fVar27;
    }
  }
  *(int8_t *)(*(int64_t *)(unaff_RDI + 0x728) + 0x20) = unaff_BL;
  uVar8 = FUN_180534800(unaff_RDI + 0x520,unaff_RBP + 0x7c,unaff_RBP + -0x1e);
  FUN_18063b470(unaff_RBP + 0x18,uVar8);
  in_stack_00000060 = *(uint64_t *)(unaff_RBP + 0x18);
  in_stack_00000068 = *(uint64_t *)(unaff_RBP + 0x1a);
  if (bVar6) {
    puVar10 = (uint *)((int64_t)*(char *)(lVar15 + 0xf0 + lVar11) * 0x100 +
                      *(int64_t *)(*(int64_t *)(unaff_RBP + -0xe) + 0x18));
    do {
      LOCK();
      uVar2 = *puVar10;
      *puVar10 = *puVar10 | 1;
      UNLOCK();
    } while ((uVar2 & 1) != 0);
    fVar26 = (float)puVar10[1];
    fVar24 = (float)puVar10[2];
    fVar27 = (float)puVar10[3];
    fVar18 = (float)puVar10[4];
    uVar8 = *(uint64_t *)(puVar10 + 5);
    uVar5 = *(uint64_t *)(puVar10 + 7);
    unaff_RBP[0x90] = fVar26;
    unaff_RBP[0x91] = fVar24;
    unaff_RBP[0x92] = fVar27;
    unaff_RBP[0x93] = fVar18;
    *(uint64_t *)(unaff_RBP + 0x94) = uVar8;
    *(uint64_t *)(unaff_RBP + 0x96) = uVar5;
    fVar35 = unaff_RBP[0x18];
    fVar17 = unaff_RBP[0x19];
    fVar19 = unaff_RBP[0x1a];
    fVar28 = unaff_RBP[0x1b];
    pfVar7 = unaff_RBP + 0x28;
    *puVar10 = 0;
    unaff_RBP[0x28] =
         fVar35 * fVar26 * 1.0 + fVar28 * fVar18 * 1.0 + fVar17 * fVar24 + fVar19 * fVar27;
    unaff_RBP[0x29] =
         fVar35 * fVar24 * -1.0 + fVar28 * fVar27 * -1.0 + fVar19 * fVar18 + fVar17 * fVar26;
    unaff_RBP[0x2a] =
         fVar35 * fVar27 * -1.0 + fVar17 * fVar18 * -1.0 + fVar28 * fVar24 + fVar19 * fVar26;
    unaff_RBP[0x2b] =
         fVar35 * fVar18 * -1.0 + fVar19 * fVar24 * -1.0 + fVar17 * fVar27 + fVar28 * fVar26;
    puVar9 = (uint64_t *)
             FUN_18040b910(0x3f99999a,unaff_RBP + 0x50,unaff_BL,in_stack_00000078,pfVar7);
    uVar36 = (int32_t)((uint64_t)pfVar7 >> 0x20);
    uVar8 = puVar9[1];
    puVar1 = (uint64_t *)(*(int64_t *)(unaff_RDI + 0x728) + (unaff_RSI + 0xf) * 0x10);
    *puVar1 = *puVar9;
    puVar1[1] = uVar8;
    lVar11 = *(int64_t *)(unaff_RDI + 0x728);
    pfVar7 = (float *)(lVar11 + (unaff_RSI + 0xf) * 0x10);
    fVar35 = *pfVar7;
    fVar17 = pfVar7[1];
    fVar19 = pfVar7[2];
    fVar28 = pfVar7[3];
    in_stack_00000060 =
         CONCAT44(fVar17 * fVar26 * 1.0 + fVar28 * fVar27 * 1.0 +
                  (fVar35 * fVar24 - fVar19 * fVar18),
                  fVar19 * fVar27 * -1.0 + fVar28 * fVar18 * -1.0 +
                  (fVar35 * fVar26 - fVar17 * fVar24));
    in_stack_00000068 =
         CONCAT44(fVar28 * fVar26 * 1.0 + fVar19 * fVar24 * 1.0 +
                  (fVar35 * fVar18 - fVar17 * fVar27),
                  fVar19 * fVar26 * 1.0 + fVar17 * fVar18 * 1.0 +
                  (fVar35 * fVar27 - fVar28 * fVar24));
  }
  else {
    puVar1 = (uint64_t *)(*(int64_t *)(unaff_RDI + 0x728) + (unaff_RSI + 0xf) * 0x10);
    *puVar1 = 0x3f800000;
    puVar1[1] = 0;
    lVar11 = *(int64_t *)(unaff_RDI + 0x728);
  }
  lVar13 = *(int64_t *)(unaff_RDI + 0x6d8);
  fVar35 = *pfVar16;
  fVar17 = pfVar16[1];
  fVar18 = pfVar16[2];
  unaff_RBP[-5] = 3.4028235e+38;
  lVar13 = *(int64_t *)(lVar13 + 0x8a8);
  fVar26 = *(float *)(lVar13 + 0x98);
  fVar24 = *(float *)(lVar13 + 0x74);
  fVar27 = *(float *)(lVar13 + 0x70);
  lVar14 = *(int64_t *)(&system_error_code + (int64_t)*(int *)(lVar11 + 0x590) * 8);
  fVar19 = fVar27 * *(float *)(lVar13 + 0x84) - fVar24 * *(float *)(lVar13 + 0x80);
  fVar28 = 1.0 / (fVar19 * fVar26);
  unaff_RBP[-8] =
       *(float *)(lVar13 + 0x84) * fVar26 * fVar28 * fVar35 -
       *(float *)(lVar13 + 0x80) * fVar26 * fVar28 * fVar17;
  unaff_RBP[-6] = fVar28 * fVar19 * fVar18;
  fVar18 = unaff_RBP[0xdc];
  unaff_RBP[-7] = fVar27 * fVar26 * fVar28 * fVar17 - fVar24 * fVar26 * fVar28 * fVar35;
  *(int64_t *)(lVar11 + 0x588) = lVar14 - (int64_t)(fVar18 * -100000.0);
  FUN_180575760(*(uint64_t *)(unaff_RDI + 0x590),
                *(int8_t *)(*(int64_t *)(unaff_RDI + 0x728) + 0x20),unaff_RBP + -8,
                &stack0x00000060,CONCAT44(uVar36,0.9 / fVar18));
  lVar11 = *(int64_t *)(unaff_RDI + 0x590);
  fVar26 = unaff_RBP[-8];
  fVar24 = unaff_RBP[-7];
  fVar27 = unaff_RBP[-6];
  fVar18 = unaff_RBP[-5];
  *(code **)(lVar11 + 0x3448) = FUN_180516cb0;
  *(int64_t *)(lVar11 + 0x3440) = unaff_RDI;
  lVar11 = *(int64_t *)(unaff_RDI + 0x728);
  *(float *)(lVar11 + 0x24) = fVar26;
  *(float *)(lVar11 + 0x28) = fVar24;
  *(float *)(lVar11 + 0x2c) = fVar27;
  *(float *)(lVar11 + 0x30) = fVar18;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x98) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180513dfc(void)
void FUN_180513dfc(void)

{
  uint64_t *puVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  float fVar11;
  float fVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  int32_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t *puVar19;
  uint *puVar20;
  int8_t unaff_BL;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t unaff_R12;
  int64_t unaff_R13;
  float *unaff_R15;
  float fVar21;
  float unaff_XMM14_Da;
  float fVar22;
  int32_t uStack0000000000000028;
  float in_stack_00000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  float fStack000000000000006c;
  int32_t in_stack_00000078;
  
  puVar20 = (uint *)((int64_t)*(char *)(unaff_R12 + 0xf0 + unaff_R13) * 0x100 +
                    *(int64_t *)(*(int64_t *)(unaff_RBP + -0x38) + 0x18));
  do {
    LOCK();
    uVar3 = *puVar20;
    *puVar20 = *puVar20 | 1;
    UNLOCK();
  } while ((uVar3 & 1) != 0);
  fVar4 = (float)puVar20[1];
  fVar5 = (float)puVar20[2];
  fVar6 = (float)puVar20[3];
  fVar7 = (float)puVar20[4];
  uVar17 = *(uint64_t *)(puVar20 + 5);
  uVar18 = *(uint64_t *)(puVar20 + 7);
  *(float *)(unaff_RBP + 0x240) = fVar4;
  *(float *)(unaff_RBP + 0x244) = fVar5;
  *(float *)(unaff_RBP + 0x248) = fVar6;
  *(float *)(unaff_RBP + 0x24c) = fVar7;
  *(uint64_t *)(unaff_RBP + 0x250) = uVar17;
  *(uint64_t *)(unaff_RBP + 600) = uVar18;
  fVar11 = *(float *)(unaff_RBP + 0x60);
  fVar12 = *(float *)(unaff_RBP + 100);
  fVar21 = *(float *)(unaff_RBP + 0x68);
  fVar22 = *(float *)(unaff_RBP + 0x6c);
  *puVar20 = 0;
  uStack0000000000000028 = 0x3f99999a;
  *(float *)(unaff_RBP + 0xa0) =
       fVar11 * fVar4 * 1.0 + fVar22 * fVar7 * 1.0 + fVar12 * fVar5 + fVar21 * fVar6;
  *(float *)(unaff_RBP + 0xa4) =
       fVar11 * fVar5 * -1.0 + fVar22 * fVar6 * -1.0 + fVar21 * fVar7 + fVar12 * fVar4;
  *(float *)(unaff_RBP + 0xa8) =
       fVar11 * fVar6 * -1.0 + fVar12 * fVar7 * -1.0 + fVar22 * fVar5 + fVar21 * fVar4;
  *(float *)(unaff_RBP + 0xac) =
       fVar11 * fVar7 * -1.0 + fVar21 * fVar5 * -1.0 + fVar12 * fVar6 + fVar22 * fVar4;
  puVar19 = (uint64_t *)
            FUN_18040b910(0x3f99999a,unaff_RBP + 0x140,unaff_BL,in_stack_00000078,unaff_RBP + 0xa0);
  uVar17 = puVar19[1];
  puVar1 = (uint64_t *)(*(int64_t *)(unaff_RDI + 0x728) + (unaff_RSI + 0xf) * 0x10);
  *puVar1 = *puVar19;
  puVar1[1] = uVar17;
  lVar8 = *(int64_t *)(unaff_RDI + 0x728);
  pfVar2 = (float *)(lVar8 + (unaff_RSI + 0xf) * 0x10);
  fVar11 = *pfVar2;
  fVar12 = pfVar2[1];
  fVar21 = pfVar2[2];
  fVar22 = pfVar2[3];
  fStack0000000000000064 =
       fVar12 * fVar4 * 1.0 + fVar22 * fVar6 * 1.0 + (fVar11 * fVar5 - fVar21 * fVar7);
  in_stack_00000068 =
       fVar21 * fVar4 * 1.0 + fVar12 * fVar7 * 1.0 + (fVar11 * fVar6 - fVar22 * fVar5);
  fStack000000000000006c =
       fVar22 * fVar4 * 1.0 + fVar21 * fVar5 * 1.0 + (fVar11 * fVar7 - fVar12 * fVar6);
  in_stack_00000060 =
       fVar21 * fVar6 * -1.0 + fVar22 * fVar7 * -1.0 + (fVar11 * fVar4 - fVar12 * fVar5);
  lVar9 = *(int64_t *)(unaff_RDI + 0x6d8);
  fVar11 = *unaff_R15;
  fVar12 = unaff_R15[1];
  fVar7 = unaff_R15[2];
  *(int32_t *)(unaff_RBP + -0x14) = 0x7f7fffff;
  lVar9 = *(int64_t *)(lVar9 + 0x8a8);
  fVar4 = *(float *)(lVar9 + 0x98);
  fVar5 = *(float *)(lVar9 + 0x74);
  fVar6 = *(float *)(lVar9 + 0x70);
  lVar10 = *(int64_t *)(&system_error_code + (int64_t)*(int *)(lVar8 + 0x590) * 8);
  fVar21 = fVar6 * *(float *)(lVar9 + 0x84) - fVar5 * *(float *)(lVar9 + 0x80);
  fVar22 = unaff_XMM14_Da / (fVar21 * fVar4);
  *(float *)(unaff_RBP + -0x20) =
       *(float *)(lVar9 + 0x84) * fVar4 * fVar22 * fVar11 -
       *(float *)(lVar9 + 0x80) * fVar4 * fVar22 * fVar12;
  *(float *)(unaff_RBP + -0x18) = fVar22 * fVar21 * fVar7;
  fVar7 = *(float *)(unaff_RBP + 0x370);
  *(float *)(unaff_RBP + -0x1c) = fVar6 * fVar4 * fVar22 * fVar12 - fVar5 * fVar4 * fVar22 * fVar11;
  *(int64_t *)(lVar8 + 0x588) = lVar10 - (int64_t)(fVar7 * -100000.0);
  FUN_180575760(*(uint64_t *)(unaff_RDI + 0x590),
                *(int8_t *)(*(int64_t *)(unaff_RDI + 0x728) + 0x20),unaff_RBP + -0x20,
                &stack0x00000060,0.9 / fVar7);
  lVar8 = *(int64_t *)(unaff_RDI + 0x590);
  uVar13 = *(int32_t *)(unaff_RBP + -0x20);
  uVar14 = *(int32_t *)(unaff_RBP + -0x1c);
  uVar15 = *(int32_t *)(unaff_RBP + -0x18);
  uVar16 = *(int32_t *)(unaff_RBP + -0x14);
  *(code **)(lVar8 + 0x3448) = FUN_180516cb0;
  *(int64_t *)(lVar8 + 0x3440) = unaff_RDI;
  lVar8 = *(int64_t *)(unaff_RDI + 0x728);
  *(int32_t *)(lVar8 + 0x24) = uVar13;
  *(int32_t *)(lVar8 + 0x28) = uVar14;
  *(int32_t *)(lVar8 + 0x2c) = uVar15;
  *(int32_t *)(lVar8 + 0x30) = uVar16;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x260) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_1805140f3(void)
void FUN_1805140f3(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x260) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_1805140fb(void)
void FUN_1805140fb(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x260) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180514120(int64_t param_1,uint64_t param_2)
void FUN_180514120(int64_t param_1,uint64_t param_2)

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
  float *pfVar10;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  lVar1 = *(int64_t *)(param_1 + 0x728);
  pfVar10 = (float *)FUN_18022b050(param_2,&fStack_18,*(int8_t *)(lVar1 + 0x20),
                                   *(uint64_t *)(*(int64_t *)(param_1 + 0x658) + 0x208));
  fVar2 = *pfVar10;
  fVar3 = pfVar10[1];
  fVar4 = pfVar10[2];
  fVar5 = pfVar10[3];
  pfVar10 = (float *)(lVar1 + ((int64_t)*(char *)(lVar1 + 0x20) + 0xf) * 0x10);
  fVar6 = *pfVar10;
  fVar7 = pfVar10[1];
  fVar8 = pfVar10[2];
  fVar9 = pfVar10[3];
  fStack_14 = fVar4 * fVar9 * 1.0 + fVar2 * fVar7 * 1.0 + (fVar6 * fVar3 - fVar5 * fVar8);
  fStack_10 = fVar5 * fVar7 * 1.0 + fVar2 * fVar8 * 1.0 + (fVar6 * fVar4 - fVar3 * fVar9);
  fStack_c = fVar3 * fVar8 * 1.0 + fVar2 * fVar9 * 1.0 + (fVar6 * fVar5 - fVar4 * fVar7);
  fStack_18 = fVar5 * fVar9 * -1.0 + fVar4 * fVar8 * -1.0 + (fVar6 * fVar2 - fVar3 * fVar7);
  FUN_180575760(*(uint64_t *)(param_1 + 0x590),(int64_t)*(char *)(lVar1 + 0x20),lVar1 + 0x24,
                &fStack_18,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



