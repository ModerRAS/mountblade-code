#include "TaleWorlds.Native.Split.h"

// 03_rendering_part455.c - 1 个函数

// 函数: void FUN_1805132db(void)
void FUN_1805132db(void)

{
  uint64_t *puVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  uint64_t uVar5;
  bool bVar6;
  int64_t in_RAX;
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
  float *in_R11;
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
  float fVar28;
  float fVar29;
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
  lVar11 = *(int64_t *)(in_RAX + 0x8a8);
  fVar24 = in_R11[2];
  fVar27 = *in_R11;
  fVar26 = in_R11[1];
  unaff_RBP[0x14] = fVar27 + *unaff_R15;
  unaff_RBP[0x15] = fVar26 + unaff_R15[1];
  fVar18 = unaff_R15[2];
  unaff_RBP[0x17] = 3.4028235e+38;
  unaff_RBP[0x16] = fVar24 + fVar18;
  FUN_180534930(lVar11 + 0x70,unaff_RBP + -0xc);
  fVar18 = *(float *)(*(int64_t *)(unaff_RDI + 0x6d8) + 0x8c0);
  fVar24 = unaff_RBP[-10] - fVar24 / fVar18;
  fVar24 = SQRT(fVar24 * fVar24 - (fVar26 * fVar26 + fVar27 * fVar27) * (4.0 / (fVar18 * fVar18)));
  if (fVar24 < unaff_RBP[-10]) {
    lVar11 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x6d8) + 0x8a8);
    unaff_RBP[-10] = fVar24;
    in_R11[2] = (fVar18 * fVar24 + *(float *)(lVar11 + 0xa8)) - unaff_R15[2];
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
  fVar24 = *pfVar16;
  fVar27 = pfVar16[1];
  fVar26 = pfVar16[2];
  fVar18 = pfVar16[3];
  pfVar16 = (float *)(lVar14 + 0x14 + lVar13);
  fVar17 = *pfVar16;
  fVar19 = pfVar16[1];
  fVar28 = pfVar16[2];
  fVar21 = pfVar16[3];
  unaff_RBP[0x88] = fVar24;
  unaff_RBP[0x89] = fVar27;
  unaff_RBP[0x8a] = fVar26;
  unaff_RBP[0x8b] = fVar18;
  unaff_RBP[0x8c] = fVar17;
  unaff_RBP[0x8d] = fVar19;
  unaff_RBP[0x8e] = fVar28;
  unaff_RBP[0x8f] = fVar21;
  *(int32_t *)(lVar14 + lVar13) = 0;
  lVar13 = *(int64_t *)(unaff_RDI + 0x6d8);
  unaff_RBP[0x54] = fVar24;
  unaff_RBP[0x55] = fVar27;
  unaff_RBP[0x56] = fVar26;
  unaff_RBP[0x57] = fVar18;
  unaff_RBP[0x58] = fVar17;
  unaff_RBP[0x59] = fVar19;
  unaff_RBP[0x5a] = fVar28;
  unaff_RBP[0x5b] = fVar21;
  unaff_RBP[0x2c] = fVar24;
  unaff_RBP[0x2d] = fVar27;
  unaff_RBP[0x2e] = fVar26;
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
  fVar24 = *(float *)(lVar12 + 0x80);
  fVar27 = *(float *)(lVar12 + 0x70);
  fVar26 = *(float *)(lVar12 + 0x84);
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
  fVar21 = fVar17 * fVar27 + fVar19 * fVar24 + *(float *)(lVar12 + 0xa0);
  fVar28 = fVar28 * fVar35 + *(float *)(lVar12 + 0xa8);
  fVar17 = fVar17 * fVar18 + fVar19 * fVar26 + *(float *)(lVar12 + 0xa4);
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
  fVar33 = fVar25 * fVar27 + fVar29 * fVar24;
  fVar32 = fVar18 * fVar25 + fVar26 * fVar29;
  fVar34 = unaff_RBP[0x3a] * fVar35;
  fVar29 = fVar30 * fVar27 + fVar3 * fVar24;
  fVar25 = fVar30 * fVar18 + fVar26 * fVar3;
  unaff_RBP[-1] = 3.4028235e+38;
  unaff_RBP[0xb] = 3.4028235e+38;
  unaff_RBP[0x13] = 3.4028235e+38;
  unaff_RBP[0xf] = 3.4028235e+38;
  fVar17 = unaff_RBP[3];
  fVar21 = fVar4 * fVar27 + fVar20 * fVar24;
  fVar24 = unaff_RBP[-1];
  fVar18 = fVar4 * fVar18 + fVar20 * fVar26;
  fVar35 = fVar22 * fVar35;
  fVar27 = unaff_RBP[7];
  unaff_RBP[0x5c] = fVar21;
  unaff_RBP[0x5d] = fVar18;
  unaff_RBP[0x5e] = fVar35;
  unaff_RBP[0x5f] = fVar24;
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
  unaff_RBP[0x1f] = fVar24;
  unaff_RBP[-4] = fVar21;
  unaff_RBP[-3] = fVar18;
  unaff_RBP[-2] = fVar35;
  unaff_RBP[-1] = fVar24;
  fVar30 = fVar19 * fVar31;
  unaff_RBP[100] = fVar33;
  unaff_RBP[0x65] = fVar32;
  unaff_RBP[0x66] = fVar31;
  unaff_RBP[0x67] = fVar27;
  fStack000000000000003c = fVar19 * fVar33;
  in_stack_00000070 = fVar19 * fVar21;
  fStack0000000000000034 = fVar19 * fVar32;
  fStack0000000000000074 = fVar19 * fVar18;
  fVar24 = unaff_RBP[0xb];
  fVar28 = fVar19 * fVar35;
  unaff_RBP[0x20] = fVar33;
  unaff_RBP[0x21] = fVar32;
  unaff_RBP[0x22] = fVar31;
  unaff_RBP[0x23] = fVar27;
  unaff_RBP[4] = fVar33;
  unaff_RBP[5] = fVar32;
  unaff_RBP[6] = fVar31;
  unaff_RBP[7] = fVar27;
  *unaff_RBP = fVar29;
  unaff_RBP[1] = fVar25;
  unaff_RBP[2] = fVar34;
  unaff_RBP[3] = fVar17;
  in_stack_00000078 = *(int *)(*(int64_t *)(unaff_R14 + 0x140) + 0x110 + lVar15);
  fVar27 = unaff_RBP[0x13];
  fVar26 = unaff_RBP[0xf];
  unaff_RBP[0x10] = fStack000000000000003c;
  unaff_RBP[0x11] = fStack0000000000000034;
  unaff_RBP[0x12] = fVar30;
  unaff_RBP[0x13] = fVar27;
  unaff_RBP[-0x16] = fStack000000000000003c;
  unaff_RBP[-0x15] = fStack0000000000000034;
  unaff_RBP[-0x14] = fVar30;
  unaff_RBP[-0x13] = fVar27;
  unaff_RBP[8] = in_stack_00000070;
  unaff_RBP[9] = fStack0000000000000074;
  unaff_RBP[10] = fVar28;
  unaff_RBP[0xb] = fVar24;
  unaff_RBP[-0x1e] = in_stack_00000070;
  unaff_RBP[-0x1d] = fStack0000000000000074;
  unaff_RBP[-0x1c] = fVar28;
  unaff_RBP[-0x1b] = fVar24;
  unaff_RBP[0xc] = fVar19 * fVar29;
  unaff_RBP[0xd] = fVar19 * fVar25;
  unaff_RBP[0xe] = fVar19 * fVar34;
  unaff_RBP[0xf] = fVar26;
  unaff_RBP[-0x1a] = fVar19 * fVar29;
  unaff_RBP[-0x19] = fVar19 * fVar25;
  unaff_RBP[-0x18] = fVar19 * fVar34;
  unaff_RBP[-0x17] = fVar26;
  if (((in_R10B == '\0') || (in_stack_00000078 < 0)) ||
     (*(char *)(*(int64_t *)(*(int64_t *)(unaff_RBP + -0xe) + 0x18) + 0xa1 + lVar14) != '\0')) {
    pfVar16 = *(float **)(unaff_RBP + -0x20);
    bVar6 = false;
    fStack0000000000000034 = fVar18;
  }
  else {
    fVar24 = *(float *)(lVar15 + 0x160 + lVar11);
    fVar27 = *(float *)(lVar15 + 0x15c + lVar11);
    fVar31 = fVar24 - *(float *)(lVar15 + 0x170 + lVar11);
    fVar26 = *(float *)(lVar15 + 0x164 + lVar11);
    fVar19 = *(float *)(lVar15 + 0x17c + lVar11);
    bVar6 = true;
    fVar20 = fVar27 - *(float *)(lVar15 + 0x16c + lVar11);
    fVar22 = fVar26 - *(float *)(lVar15 + 0x174 + lVar11);
    fVar3 = *unaff_R15;
    fVar4 = unaff_R15[1];
    fVar29 = fVar29 * fVar24 + unaff_RBP[0x1c] * fVar27 + unaff_RBP[0x20] * fVar26 + unaff_RBP[0x24]
    ;
    fVar25 = fVar25 * fVar24 + unaff_RBP[0x1d] * fVar27 + unaff_RBP[0x21] * fVar26 + unaff_RBP[0x25]
    ;
    fVar32 = fVar34 * fVar24 + unaff_RBP[0x1e] * fVar27 + unaff_RBP[0x22] * fVar26 + unaff_RBP[0x26]
    ;
    unaff_RBP[0x40] = fVar29;
    unaff_RBP[0x41] = fVar25;
    unaff_RBP[0x42] = fVar32;
    unaff_RBP[0x43] =
         fVar17 * fVar24 + unaff_RBP[0x1f] * fVar27 + unaff_RBP[0x23] * fVar26 + unaff_RBP[0x27];
    fVar27 = (SQRT(fVar31 * fVar31 + fVar20 * fVar20 + fVar22 * fVar22) + fVar19 + fVar19) *
             *(float *)(lVar13 + 0x8c0);
    fVar24 = ((fVar4 - (fVar25 - fVar19 * fVar18)) * fStack0000000000000074 +
              (fVar3 - (fVar29 - fVar19 * fVar21)) * in_stack_00000070 +
             (unaff_R15[2] - (fVar32 - fVar19 * fVar35)) * fVar28) / fVar27;
    if (0.0 <= fVar24) {
      if (1.0 <= fVar24) {
        fVar24 = 1.0;
      }
    }
    else {
      fVar24 = 0.0;
    }
    pfVar16 = *(float **)(unaff_RBP + -0x20);
    unaff_RBP[-0x1b] = 3.4028235e+38;
    fVar24 = fVar24 * 0.4 + 0.2;
    fVar35 = in_stack_00000070 * fVar27 + fVar24 * *pfVar16;
    fVar26 = fVar27 * fStack0000000000000074 + fVar24 * pfVar16[1];
    fVar18 = fVar27 * fVar28 + fVar24 * pfVar16[2];
    fVar24 = fVar26 * fVar26 + fVar35 * fVar35 + fVar18 * fVar18;
    auVar23 = rsqrtss(ZEXT416((uint)fVar24),ZEXT416((uint)fVar24));
    fVar27 = auVar23._0_4_;
    fVar24 = fVar27 * 0.5 * (3.0 - fVar24 * fVar27 * fVar27);
    fVar35 = fVar24 * fVar35;
    fVar26 = fVar24 * fVar26;
    fVar24 = fVar24 * fVar18;
    unaff_RBP[-0x1e] = fVar35;
    unaff_RBP[-0x1d] = fVar26;
    unaff_RBP[-0x1c] = fVar24;
    if (((fVar35 == 0.0) && (fVar26 == 0.0)) && (fVar24 == 0.0)) {
      unaff_RBP[-0x1e] = in_stack_00000070;
      unaff_RBP[-0x1c] = fVar28;
      unaff_RBP[-0x1d] = fStack0000000000000074;
    }
    else {
      fVar28 = fVar24 * fStack0000000000000034 - fVar26 * fVar30;
      fVar17 = fVar35 * fVar30 - fVar24 * fStack000000000000003c;
      fVar19 = fVar26 * fStack000000000000003c - fVar35 * fStack0000000000000034;
      fVar27 = fVar17 * fVar17 + fVar28 * fVar28 + fVar19 * fVar19;
      auVar23 = rsqrtss(ZEXT416((uint)fVar27),ZEXT416((uint)fVar27));
      fVar18 = auVar23._0_4_;
      fVar27 = fVar18 * 0.5 * (3.0 - fVar27 * fVar18 * fVar18);
      fVar17 = fVar27 * fVar17;
      fVar19 = fVar27 * fVar19;
      fVar27 = fVar27 * fVar28;
      unaff_RBP[-0x1a] = fVar27;
      unaff_RBP[-0x19] = fVar17;
      unaff_RBP[-0x18] = fVar19;
      unaff_RBP[-0x16] = fVar26 * fVar19 - fVar24 * fVar17;
      unaff_RBP[-0x15] = fVar24 * fVar27 - fVar35 * fVar19;
      unaff_RBP[-0x14] = fVar35 * fVar17 - fVar26 * fVar27;
    }
    fVar24 = unaff_RBP[-0xc];
    fVar27 = unaff_RBP[-0xb];
    fVar26 = fVar27 * fVar27 + fVar24 * fVar24 + unaff_RBP[-10] * unaff_RBP[-10];
    auVar23 = rsqrtss(ZEXT416((uint)fVar26),ZEXT416((uint)fVar26));
    fVar18 = auVar23._0_4_;
    fVar26 = fVar18 * 0.5 * (3.0 - fVar26 * fVar18 * fVar18);
    fVar24 = fVar26 * fVar24;
    fVar27 = -(fVar26 * fVar27);
    if (9.999999e-09 < fVar27 * fVar27 + fVar24 * fVar24) {
      fVar35 = fVar27 * fVar27 + fVar24 * fVar24;
      unaff_RBP[-0x10] = 0.0;
      unaff_RBP[-0xf] = 3.4028235e+38;
      auVar23 = rsqrtss(ZEXT416((uint)fVar35),ZEXT416((uint)fVar35));
      fVar26 = auVar23._0_4_;
      fVar17 = fVar26 * 0.5 * (3.0 - fVar35 * fVar26 * fVar26);
      fVar26 = *(float *)(unaff_RDI + 0x524);
      fVar18 = *(float *)(unaff_RDI + 0x534);
      fVar35 = fVar17 * fVar35 * 4.0;
      unaff_RBP[-0x12] =
           fVar17 * fVar24 * *(float *)(unaff_RDI + 0x530) +
           fVar17 * fVar27 * *(float *)(unaff_RDI + 0x520);
      unaff_RBP[-0x11] = fVar17 * fVar24 * fVar18 + fVar17 * fVar27 * fVar26;
      pfVar7 = (float *)FUN_180534b00(unaff_RBP + -0x1e,unaff_RBP + 0x44,unaff_RBP + -0x12,fVar35);
      fVar24 = pfVar7[1];
      fVar27 = pfVar7[2];
      fVar26 = pfVar7[3];
      unaff_RBP[-0x1e] = *pfVar7;
      unaff_RBP[-0x1d] = fVar24;
      unaff_RBP[-0x1c] = fVar27;
      unaff_RBP[-0x1b] = fVar26;
      pfVar7 = (float *)FUN_180534b00(unaff_RBP + -0x1a,unaff_RBP + 0x48,unaff_RBP + -0x12,fVar35);
      fVar24 = pfVar7[1];
      fVar27 = pfVar7[2];
      fVar26 = pfVar7[3];
      unaff_RBP[-0x1a] = *pfVar7;
      unaff_RBP[-0x19] = fVar24;
      unaff_RBP[-0x18] = fVar27;
      unaff_RBP[-0x17] = fVar26;
      pfVar7 = (float *)FUN_180534b00(unaff_RBP + -0x16,unaff_RBP + 0x4c,unaff_RBP + -0x12,fVar35);
      fVar24 = pfVar7[1];
      fVar27 = pfVar7[2];
      fVar26 = pfVar7[3];
      unaff_RBP[-0x16] = *pfVar7;
      unaff_RBP[-0x15] = fVar24;
      unaff_RBP[-0x14] = fVar27;
      unaff_RBP[-0x13] = fVar26;
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
    fVar24 = (float)puVar10[1];
    fVar27 = (float)puVar10[2];
    fVar26 = (float)puVar10[3];
    fVar18 = (float)puVar10[4];
    uVar8 = *(uint64_t *)(puVar10 + 5);
    uVar5 = *(uint64_t *)(puVar10 + 7);
    unaff_RBP[0x90] = fVar24;
    unaff_RBP[0x91] = fVar27;
    unaff_RBP[0x92] = fVar26;
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
         fVar35 * fVar24 * 1.0 + fVar28 * fVar18 * 1.0 + fVar17 * fVar27 + fVar19 * fVar26;
    unaff_RBP[0x29] =
         fVar35 * fVar27 * -1.0 + fVar28 * fVar26 * -1.0 + fVar19 * fVar18 + fVar17 * fVar24;
    unaff_RBP[0x2a] =
         fVar35 * fVar26 * -1.0 + fVar17 * fVar18 * -1.0 + fVar28 * fVar27 + fVar19 * fVar24;
    unaff_RBP[0x2b] =
         fVar35 * fVar18 * -1.0 + fVar19 * fVar27 * -1.0 + fVar17 * fVar26 + fVar28 * fVar24;
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
         CONCAT44(fVar17 * fVar24 * 1.0 + fVar28 * fVar26 * 1.0 +
                  (fVar35 * fVar27 - fVar19 * fVar18),
                  fVar19 * fVar26 * -1.0 + fVar28 * fVar18 * -1.0 +
                  (fVar35 * fVar24 - fVar17 * fVar27));
    in_stack_00000068 =
         CONCAT44(fVar28 * fVar24 * 1.0 + fVar19 * fVar27 * 1.0 +
                  (fVar35 * fVar18 - fVar17 * fVar26),
                  fVar19 * fVar24 * 1.0 + fVar17 * fVar18 * 1.0 +
                  (fVar35 * fVar26 - fVar28 * fVar27));
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
  fVar24 = *(float *)(lVar13 + 0x98);
  fVar27 = *(float *)(lVar13 + 0x74);
  fVar26 = *(float *)(lVar13 + 0x70);
  lVar14 = *(int64_t *)(&system_error_code + (int64_t)*(int *)(lVar11 + 0x590) * 8);
  fVar19 = fVar26 * *(float *)(lVar13 + 0x84) - fVar27 * *(float *)(lVar13 + 0x80);
  fVar28 = 1.0 / (fVar19 * fVar24);
  unaff_RBP[-8] =
       *(float *)(lVar13 + 0x84) * fVar24 * fVar28 * fVar35 -
       *(float *)(lVar13 + 0x80) * fVar24 * fVar28 * fVar17;
  unaff_RBP[-6] = fVar28 * fVar19 * fVar18;
  fVar18 = unaff_RBP[0xdc];
  unaff_RBP[-7] = fVar26 * fVar24 * fVar28 * fVar17 - fVar27 * fVar24 * fVar28 * fVar35;
  *(int64_t *)(lVar11 + 0x588) = lVar14 - (int64_t)(fVar18 * -100000.0);
  FUN_180575760(*(uint64_t *)(unaff_RDI + 0x590),
                *(int8_t *)(*(int64_t *)(unaff_RDI + 0x728) + 0x20),unaff_RBP + -8,
                &stack0x00000060,CONCAT44(uVar36,0.9 / fVar18));
  lVar11 = *(int64_t *)(unaff_RDI + 0x590);
  fVar24 = unaff_RBP[-8];
  fVar27 = unaff_RBP[-7];
  fVar26 = unaff_RBP[-6];
  fVar18 = unaff_RBP[-5];
  *(code **)(lVar11 + 0x3448) = FUN_180516cb0;
  *(int64_t *)(lVar11 + 0x3440) = unaff_RDI;
  lVar11 = *(int64_t *)(unaff_RDI + 0x728);
  *(float *)(lVar11 + 0x24) = fVar24;
  *(float *)(lVar11 + 0x28) = fVar27;
  *(float *)(lVar11 + 0x2c) = fVar26;
  *(float *)(lVar11 + 0x30) = fVar18;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x98) ^ (uint64_t)&stack0x00000000);
}





