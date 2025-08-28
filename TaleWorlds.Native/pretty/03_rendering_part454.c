#include "TaleWorlds.Native.Split.h"

// 03_rendering_part454.c - 1 个函数

// 函数: void FUN_180513264(uint64_t param_1,int64_t param_2)
void FUN_180513264(uint64_t param_1,int64_t param_2)

{
  uint64_t *puVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  uint64_t uVar6;
  bool bVar7;
  float *pfVar8;
  uint64_t uVar9;
  uint64_t *puVar10;
  uint *puVar11;
  int64_t lVar12;
  char unaff_BL;
  float *unaff_RBP;
  int64_t lVar13;
  int64_t unaff_RDI;
  int64_t lVar14;
  int64_t lVar15;
  char in_R10B;
  float *in_R11;
  int64_t lVar16;
  int64_t lVar17;
  int64_t unaff_R14;
  float *unaff_R15;
  float *pfVar18;
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
  float fVar36;
  float fVar37;
  uint64_t in_stack_00000020;
  int32_t uVar38;
  uint64_t in_stack_00000060;
  uint64_t in_stack_00000068;
  float fStack0000000000000070;
  float fStack0000000000000074;
  int in_stack_00000078;
  
  uVar38 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
  do {
    lVar13 = (int64_t)unaff_BL;
    cVar5 = *(char *)(lVar13 * 0x1b0 + 0x104 + param_2);
    if ((cVar5 != -1) && (3 < (byte)(cVar5 - 4U))) {
      if (-1 < unaff_BL) {
        lVar12 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x6d8) + 0x8a8);
        fVar24 = in_R11[2];
        fVar27 = *in_R11;
        fVar26 = in_R11[1];
        unaff_RBP[0x14] = fVar27 + *unaff_R15;
        unaff_RBP[0x15] = fVar26 + unaff_R15[1];
        fVar20 = unaff_R15[2];
        unaff_RBP[0x17] = 3.4028235e+38;
        unaff_RBP[0x16] = fVar24 + fVar20;
        FUN_180534930(lVar12 + 0x70,unaff_RBP + -0xc,unaff_RBP + 0x14);
        fVar20 = *(float *)(*(int64_t *)(unaff_RDI + 0x6d8) + 0x8c0);
        fVar24 = unaff_RBP[-10] - fVar24 / fVar20;
        fVar24 = SQRT(fVar24 * fVar24 -
                      (fVar26 * fVar26 + fVar27 * fVar27) * (4.0 / (fVar20 * fVar20)));
        if (fVar24 < unaff_RBP[-10]) {
          lVar12 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x6d8) + 0x8a8);
          unaff_RBP[-10] = fVar24;
          in_R11[2] = (fVar20 * fVar24 + *(float *)(lVar12 + 0xa8)) - unaff_R15[2];
        }
        lVar12 = *(int64_t *)(unaff_R14 + 0x140);
        lVar17 = lVar13 * 0x1b0;
        lVar15 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x658) + 0x18);
        lVar16 = lVar13 * 0x100;
        do {
          LOCK();
          puVar11 = (uint *)(lVar16 + lVar15);
          uVar2 = *puVar11;
          *puVar11 = *puVar11 | 1;
          UNLOCK();
        } while ((uVar2 & 1) != 0);
        pfVar18 = (float *)(lVar16 + 4 + lVar15);
        fVar24 = *pfVar18;
        fVar27 = pfVar18[1];
        fVar26 = pfVar18[2];
        fVar20 = pfVar18[3];
        pfVar18 = (float *)(lVar16 + 0x14 + lVar15);
        fVar19 = *pfVar18;
        fVar21 = pfVar18[1];
        fVar28 = pfVar18[2];
        fVar22 = pfVar18[3];
        unaff_RBP[0x88] = fVar24;
        unaff_RBP[0x89] = fVar27;
        unaff_RBP[0x8a] = fVar26;
        unaff_RBP[0x8b] = fVar20;
        unaff_RBP[0x8c] = fVar19;
        unaff_RBP[0x8d] = fVar21;
        unaff_RBP[0x8e] = fVar28;
        unaff_RBP[0x8f] = fVar22;
        *(int32_t *)(lVar16 + lVar15) = 0;
        lVar15 = *(int64_t *)(unaff_RDI + 0x6d8);
        unaff_RBP[0x54] = fVar24;
        unaff_RBP[0x55] = fVar27;
        unaff_RBP[0x56] = fVar26;
        unaff_RBP[0x57] = fVar20;
        unaff_RBP[0x58] = fVar19;
        unaff_RBP[0x59] = fVar21;
        unaff_RBP[0x5a] = fVar28;
        unaff_RBP[0x5b] = fVar22;
        unaff_RBP[0x2c] = fVar24;
        unaff_RBP[0x2d] = fVar27;
        unaff_RBP[0x2e] = fVar26;
        unaff_RBP[0x2f] = fVar20;
        lVar14 = *(int64_t *)(lVar15 + 0x8a8);
        unaff_RBP[0x30] = fVar19;
        unaff_RBP[0x31] = fVar21;
        unaff_RBP[0x32] = fVar28;
        unaff_RBP[0x33] = fVar22;
        FUN_18063b5f0(unaff_RBP + 0x34,unaff_RBP + 0x2c);
        fVar25 = unaff_RBP[0x3c];
        fVar29 = unaff_RBP[0x3d];
        fVar30 = unaff_RBP[0x38];
        fVar31 = unaff_RBP[0x39];
        unaff_RBP[7] = 3.4028235e+38;
        fVar24 = *(float *)(lVar14 + 0x80);
        fVar27 = *(float *)(lVar14 + 0x70);
        fVar26 = *(float *)(lVar14 + 0x84);
        fVar20 = *(float *)(lVar14 + 0x74);
        fVar36 = *(float *)(lVar14 + 0x98);
        fVar37 = unaff_RBP[0x34];
        fVar3 = unaff_RBP[0x35];
        fVar4 = unaff_RBP[0x36];
        unaff_RBP[3] = 3.4028235e+38;
        unaff_RBP[0x78] = fVar19;
        unaff_RBP[0x79] = fVar21;
        unaff_RBP[0x7a] = fVar28;
        unaff_RBP[0x7b] = fVar22;
        unaff_RBP[0x74] = fVar25;
        unaff_RBP[0x75] = fVar29;
        unaff_RBP[0x76] = unaff_RBP[0x3e];
        unaff_RBP[0x77] = unaff_RBP[0x3f];
        fVar22 = fVar19 * fVar27 + fVar21 * fVar24 + *(float *)(lVar14 + 0xa0);
        fVar28 = fVar28 * fVar36 + *(float *)(lVar14 + 0xa8);
        fVar19 = fVar19 * fVar20 + fVar21 * fVar26 + *(float *)(lVar14 + 0xa4);
        unaff_RBP[0x70] = fVar30;
        unaff_RBP[0x71] = fVar31;
        unaff_RBP[0x72] = unaff_RBP[0x3a];
        unaff_RBP[0x73] = unaff_RBP[0x3b];
        unaff_RBP[0x6c] = fVar37;
        unaff_RBP[0x6d] = fVar3;
        unaff_RBP[0x6e] = fVar4;
        unaff_RBP[0x6f] = unaff_RBP[0x37];
        unaff_RBP[0x24] = fVar22;
        unaff_RBP[0x25] = fVar19;
        unaff_RBP[0x26] = fVar28;
        unaff_RBP[0x27] = 3.4028235e+38;
        unaff_RBP[0x68] = fVar22;
        unaff_RBP[0x69] = fVar19;
        unaff_RBP[0x6a] = fVar28;
        unaff_RBP[0x6b] = 3.4028235e+38;
        fVar32 = fVar36 * unaff_RBP[0x3e];
        fVar34 = fVar25 * fVar27 + fVar29 * fVar24;
        fVar33 = fVar20 * fVar25 + fVar26 * fVar29;
        fVar35 = unaff_RBP[0x3a] * fVar36;
        fVar29 = fVar30 * fVar27 + fVar31 * fVar24;
        fVar25 = fVar30 * fVar20 + fVar26 * fVar31;
        unaff_RBP[-1] = 3.4028235e+38;
        unaff_RBP[0xb] = 3.4028235e+38;
        unaff_RBP[0x13] = 3.4028235e+38;
        unaff_RBP[0xf] = 3.4028235e+38;
        fVar19 = unaff_RBP[3];
        fVar22 = fVar37 * fVar27 + fVar3 * fVar24;
        fVar24 = unaff_RBP[-1];
        fVar20 = fVar37 * fVar20 + fVar3 * fVar26;
        fVar36 = fVar4 * fVar36;
        fVar27 = unaff_RBP[7];
        unaff_RBP[0x5c] = fVar22;
        unaff_RBP[0x5d] = fVar20;
        unaff_RBP[0x5e] = fVar36;
        unaff_RBP[0x5f] = fVar24;
        in_stack_00000060 = CONCAT44(fVar4,fVar36);
        in_stack_00000068 = CONCAT44(fVar4,fVar4);
        fVar21 = 1.0 / *(float *)(lVar15 + 0x8c0);
        unaff_RBP[0x60] = fVar29;
        unaff_RBP[0x61] = fVar25;
        unaff_RBP[0x62] = fVar35;
        unaff_RBP[99] = fVar19;
        unaff_RBP[0x1c] = fVar22;
        unaff_RBP[0x1d] = fVar20;
        unaff_RBP[0x1e] = fVar36;
        unaff_RBP[0x1f] = fVar24;
        unaff_RBP[-4] = fVar22;
        unaff_RBP[-3] = fVar20;
        unaff_RBP[-2] = fVar36;
        unaff_RBP[-1] = fVar24;
        fVar30 = fVar21 * fVar32;
        unaff_RBP[100] = fVar34;
        unaff_RBP[0x65] = fVar33;
        unaff_RBP[0x66] = fVar32;
        unaff_RBP[0x67] = fVar27;
        fVar37 = fVar21 * fVar34;
        fStack0000000000000070 = fVar21 * fVar22;
        fVar31 = fVar21 * fVar33;
        fStack0000000000000074 = fVar21 * fVar20;
        fVar24 = unaff_RBP[0xb];
        fVar28 = fVar21 * fVar36;
        unaff_RBP[0x20] = fVar34;
        unaff_RBP[0x21] = fVar33;
        unaff_RBP[0x22] = fVar32;
        unaff_RBP[0x23] = fVar27;
        unaff_RBP[4] = fVar34;
        unaff_RBP[5] = fVar33;
        unaff_RBP[6] = fVar32;
        unaff_RBP[7] = fVar27;
        *unaff_RBP = fVar29;
        unaff_RBP[1] = fVar25;
        unaff_RBP[2] = fVar35;
        unaff_RBP[3] = fVar19;
        in_stack_00000078 = *(int *)(*(int64_t *)(unaff_R14 + 0x140) + 0x110 + lVar17);
        fVar27 = unaff_RBP[0x13];
        fVar26 = unaff_RBP[0xf];
        unaff_RBP[0x10] = fVar37;
        unaff_RBP[0x11] = fVar31;
        unaff_RBP[0x12] = fVar30;
        unaff_RBP[0x13] = fVar27;
        unaff_RBP[-0x16] = fVar37;
        unaff_RBP[-0x15] = fVar31;
        unaff_RBP[-0x14] = fVar30;
        unaff_RBP[-0x13] = fVar27;
        unaff_RBP[8] = fStack0000000000000070;
        unaff_RBP[9] = fStack0000000000000074;
        unaff_RBP[10] = fVar28;
        unaff_RBP[0xb] = fVar24;
        unaff_RBP[-0x1e] = fStack0000000000000070;
        unaff_RBP[-0x1d] = fStack0000000000000074;
        unaff_RBP[-0x1c] = fVar28;
        unaff_RBP[-0x1b] = fVar24;
        unaff_RBP[0xc] = fVar21 * fVar29;
        unaff_RBP[0xd] = fVar21 * fVar25;
        unaff_RBP[0xe] = fVar21 * fVar35;
        unaff_RBP[0xf] = fVar26;
        unaff_RBP[-0x1a] = fVar21 * fVar29;
        unaff_RBP[-0x19] = fVar21 * fVar25;
        unaff_RBP[-0x18] = fVar21 * fVar35;
        unaff_RBP[-0x17] = fVar26;
        if (((in_R10B == '\0') || (in_stack_00000078 < 0)) ||
           (*(char *)(*(int64_t *)(*(int64_t *)(unaff_RBP + -0xe) + 0x18) + 0xa1 + lVar16) != '\0'
           )) {
          pfVar18 = *(float **)(unaff_RBP + -0x20);
          bVar7 = false;
        }
        else {
          fVar24 = *(float *)(lVar17 + 0x160 + lVar12);
          fVar27 = *(float *)(lVar17 + 0x15c + lVar12);
          fVar34 = fVar24 - *(float *)(lVar17 + 0x170 + lVar12);
          fVar26 = *(float *)(lVar17 + 0x164 + lVar12);
          fVar21 = *(float *)(lVar17 + 0x17c + lVar12);
          bVar7 = true;
          fVar32 = fVar27 - *(float *)(lVar17 + 0x16c + lVar12);
          fVar33 = fVar26 - *(float *)(lVar17 + 0x174 + lVar12);
          fVar3 = *unaff_R15;
          fVar4 = unaff_R15[1];
          fVar29 = fVar29 * fVar24 + unaff_RBP[0x1c] * fVar27 + unaff_RBP[0x20] * fVar26 +
                   unaff_RBP[0x24];
          fVar25 = fVar25 * fVar24 + unaff_RBP[0x1d] * fVar27 + unaff_RBP[0x21] * fVar26 +
                   unaff_RBP[0x25];
          fVar35 = fVar35 * fVar24 + unaff_RBP[0x1e] * fVar27 + unaff_RBP[0x22] * fVar26 +
                   unaff_RBP[0x26];
          unaff_RBP[0x40] = fVar29;
          unaff_RBP[0x41] = fVar25;
          unaff_RBP[0x42] = fVar35;
          unaff_RBP[0x43] =
               fVar19 * fVar24 + unaff_RBP[0x1f] * fVar27 + unaff_RBP[0x23] * fVar26 +
               unaff_RBP[0x27];
          fVar27 = (SQRT(fVar34 * fVar34 + fVar32 * fVar32 + fVar33 * fVar33) + fVar21 + fVar21) *
                   *(float *)(lVar15 + 0x8c0);
          fVar24 = ((fVar4 - (fVar25 - fVar21 * fVar20)) * fStack0000000000000074 +
                    (fVar3 - (fVar29 - fVar21 * fVar22)) * fStack0000000000000070 +
                   (unaff_R15[2] - (fVar35 - fVar21 * fVar36)) * fVar28) / fVar27;
          if (0.0 <= fVar24) {
            if (1.0 <= fVar24) {
              fVar24 = 1.0;
            }
          }
          else {
            fVar24 = 0.0;
          }
          pfVar18 = *(float **)(unaff_RBP + -0x20);
          unaff_RBP[-0x1b] = 3.4028235e+38;
          fVar24 = fVar24 * 0.4 + 0.2;
          fVar36 = fStack0000000000000070 * fVar27 + fVar24 * *pfVar18;
          fVar26 = fVar27 * fStack0000000000000074 + fVar24 * pfVar18[1];
          fVar20 = fVar27 * fVar28 + fVar24 * pfVar18[2];
          fVar24 = fVar26 * fVar26 + fVar36 * fVar36 + fVar20 * fVar20;
          auVar23 = rsqrtss(ZEXT416((uint)fVar24),ZEXT416((uint)fVar24));
          fVar27 = auVar23._0_4_;
          fVar24 = fVar27 * 0.5 * (3.0 - fVar24 * fVar27 * fVar27);
          fVar36 = fVar24 * fVar36;
          fVar26 = fVar24 * fVar26;
          fVar24 = fVar24 * fVar20;
          unaff_RBP[-0x1e] = fVar36;
          unaff_RBP[-0x1d] = fVar26;
          unaff_RBP[-0x1c] = fVar24;
          if (((fVar36 == 0.0) && (fVar26 == 0.0)) && (fVar24 == 0.0)) {
            unaff_RBP[-0x1e] = fStack0000000000000070;
            unaff_RBP[-0x1c] = fVar28;
            unaff_RBP[-0x1d] = fStack0000000000000074;
          }
          else {
            fVar28 = fVar24 * fVar31 - fVar26 * fVar30;
            fVar19 = fVar36 * fVar30 - fVar24 * fVar37;
            fVar21 = fVar26 * fVar37 - fVar36 * fVar31;
            fVar27 = fVar19 * fVar19 + fVar28 * fVar28 + fVar21 * fVar21;
            auVar23 = rsqrtss(ZEXT416((uint)fVar27),ZEXT416((uint)fVar27));
            fVar20 = auVar23._0_4_;
            fVar27 = fVar20 * 0.5 * (3.0 - fVar27 * fVar20 * fVar20);
            fVar19 = fVar27 * fVar19;
            fVar21 = fVar27 * fVar21;
            fVar27 = fVar27 * fVar28;
            unaff_RBP[-0x1a] = fVar27;
            unaff_RBP[-0x19] = fVar19;
            unaff_RBP[-0x18] = fVar21;
            unaff_RBP[-0x16] = fVar26 * fVar21 - fVar24 * fVar19;
            unaff_RBP[-0x15] = fVar24 * fVar27 - fVar36 * fVar21;
            unaff_RBP[-0x14] = fVar36 * fVar19 - fVar26 * fVar27;
          }
          fVar24 = unaff_RBP[-0xc];
          fVar27 = unaff_RBP[-0xb];
          fVar26 = fVar27 * fVar27 + fVar24 * fVar24 + unaff_RBP[-10] * unaff_RBP[-10];
          auVar23 = rsqrtss(ZEXT416((uint)fVar26),ZEXT416((uint)fVar26));
          fVar20 = auVar23._0_4_;
          fVar26 = fVar20 * 0.5 * (3.0 - fVar26 * fVar20 * fVar20);
          fVar24 = fVar26 * fVar24;
          fVar27 = -(fVar26 * fVar27);
          if (9.999999e-09 < fVar27 * fVar27 + fVar24 * fVar24) {
            fVar36 = fVar27 * fVar27 + fVar24 * fVar24;
            unaff_RBP[-0x10] = 0.0;
            unaff_RBP[-0xf] = 3.4028235e+38;
            auVar23 = rsqrtss(ZEXT416((uint)fVar36),ZEXT416((uint)fVar36));
            fVar26 = auVar23._0_4_;
            fVar19 = fVar26 * 0.5 * (3.0 - fVar36 * fVar26 * fVar26);
            fVar26 = *(float *)(unaff_RDI + 0x524);
            fVar20 = *(float *)(unaff_RDI + 0x534);
            fVar36 = fVar19 * fVar36 * 4.0;
            unaff_RBP[-0x12] =
                 fVar19 * fVar24 * *(float *)(unaff_RDI + 0x530) +
                 fVar19 * fVar27 * *(float *)(unaff_RDI + 0x520);
            unaff_RBP[-0x11] = fVar19 * fVar24 * fVar20 + fVar19 * fVar27 * fVar26;
            pfVar8 = (float *)FUN_180534b00(unaff_RBP + -0x1e,unaff_RBP + 0x44,unaff_RBP + -0x12,
                                            fVar36);
            fVar24 = pfVar8[1];
            fVar27 = pfVar8[2];
            fVar26 = pfVar8[3];
            unaff_RBP[-0x1e] = *pfVar8;
            unaff_RBP[-0x1d] = fVar24;
            unaff_RBP[-0x1c] = fVar27;
            unaff_RBP[-0x1b] = fVar26;
            pfVar8 = (float *)FUN_180534b00(unaff_RBP + -0x1a,unaff_RBP + 0x48,unaff_RBP + -0x12,
                                            fVar36);
            fVar24 = pfVar8[1];
            fVar27 = pfVar8[2];
            fVar26 = pfVar8[3];
            unaff_RBP[-0x1a] = *pfVar8;
            unaff_RBP[-0x19] = fVar24;
            unaff_RBP[-0x18] = fVar27;
            unaff_RBP[-0x17] = fVar26;
            pfVar8 = (float *)FUN_180534b00(unaff_RBP + -0x16,unaff_RBP + 0x4c,unaff_RBP + -0x12,
                                            fVar36);
            fVar24 = pfVar8[1];
            fVar27 = pfVar8[2];
            fVar26 = pfVar8[3];
            unaff_RBP[-0x16] = *pfVar8;
            unaff_RBP[-0x15] = fVar24;
            unaff_RBP[-0x14] = fVar27;
            unaff_RBP[-0x13] = fVar26;
          }
        }
        *(char *)(*(int64_t *)(unaff_RDI + 0x728) + 0x20) = unaff_BL;
        uVar9 = FUN_180534800(unaff_RDI + 0x520,unaff_RBP + 0x7c,unaff_RBP + -0x1e);
        FUN_18063b470(unaff_RBP + 0x18,uVar9);
        in_stack_00000060 = *(uint64_t *)(unaff_RBP + 0x18);
        in_stack_00000068 = *(uint64_t *)(unaff_RBP + 0x1a);
        if (bVar7) {
          puVar11 = (uint *)((int64_t)*(char *)(lVar17 + 0xf0 + lVar12) * 0x100 +
                            *(int64_t *)(*(int64_t *)(unaff_RBP + -0xe) + 0x18));
          do {
            LOCK();
            uVar2 = *puVar11;
            *puVar11 = *puVar11 | 1;
            UNLOCK();
          } while ((uVar2 & 1) != 0);
          fVar24 = (float)puVar11[1];
          fVar27 = (float)puVar11[2];
          fVar26 = (float)puVar11[3];
          fVar20 = (float)puVar11[4];
          uVar9 = *(uint64_t *)(puVar11 + 5);
          uVar6 = *(uint64_t *)(puVar11 + 7);
          unaff_RBP[0x90] = fVar24;
          unaff_RBP[0x91] = fVar27;
          unaff_RBP[0x92] = fVar26;
          unaff_RBP[0x93] = fVar20;
          *(uint64_t *)(unaff_RBP + 0x94) = uVar9;
          *(uint64_t *)(unaff_RBP + 0x96) = uVar6;
          fVar36 = unaff_RBP[0x18];
          fVar19 = unaff_RBP[0x19];
          fVar21 = unaff_RBP[0x1a];
          fVar28 = unaff_RBP[0x1b];
          pfVar8 = unaff_RBP + 0x28;
          *puVar11 = 0;
          unaff_RBP[0x28] =
               fVar36 * fVar24 * 1.0 + fVar28 * fVar20 * 1.0 + fVar19 * fVar27 + fVar21 * fVar26;
          unaff_RBP[0x29] =
               fVar36 * fVar27 * -1.0 + fVar28 * fVar26 * -1.0 + fVar21 * fVar20 + fVar19 * fVar24;
          unaff_RBP[0x2a] =
               fVar36 * fVar26 * -1.0 + fVar19 * fVar20 * -1.0 + fVar28 * fVar27 + fVar21 * fVar24;
          unaff_RBP[0x2b] =
               fVar36 * fVar20 * -1.0 + fVar21 * fVar27 * -1.0 + fVar19 * fVar26 + fVar28 * fVar24;
          puVar10 = (uint64_t *)
                    FUN_18040b910(0x3f99999a,unaff_RBP + 0x50,unaff_BL,in_stack_00000078,pfVar8);
          uVar38 = (int32_t)((uint64_t)pfVar8 >> 0x20);
          uVar9 = puVar10[1];
          puVar1 = (uint64_t *)(*(int64_t *)(unaff_RDI + 0x728) + (lVar13 + 0xf) * 0x10);
          *puVar1 = *puVar10;
          puVar1[1] = uVar9;
          lVar12 = *(int64_t *)(unaff_RDI + 0x728);
          pfVar8 = (float *)(lVar12 + (lVar13 + 0xf) * 0x10);
          fVar36 = *pfVar8;
          fVar19 = pfVar8[1];
          fVar21 = pfVar8[2];
          fVar28 = pfVar8[3];
          in_stack_00000060 =
               CONCAT44(fVar19 * fVar24 * 1.0 + fVar28 * fVar26 * 1.0 +
                        (fVar36 * fVar27 - fVar21 * fVar20),
                        fVar21 * fVar26 * -1.0 + fVar28 * fVar20 * -1.0 +
                        (fVar36 * fVar24 - fVar19 * fVar27));
          in_stack_00000068 =
               CONCAT44(fVar28 * fVar24 * 1.0 + fVar21 * fVar27 * 1.0 +
                        (fVar36 * fVar20 - fVar19 * fVar26),
                        fVar21 * fVar24 * 1.0 + fVar19 * fVar20 * 1.0 +
                        (fVar36 * fVar26 - fVar28 * fVar27));
        }
        else {
          puVar1 = (uint64_t *)(*(int64_t *)(unaff_RDI + 0x728) + (lVar13 + 0xf) * 0x10);
          *puVar1 = 0x3f800000;
          puVar1[1] = 0;
          lVar12 = *(int64_t *)(unaff_RDI + 0x728);
        }
        lVar13 = *(int64_t *)(unaff_RDI + 0x6d8);
        fVar36 = *pfVar18;
        fVar19 = pfVar18[1];
        fVar20 = pfVar18[2];
        unaff_RBP[-5] = 3.4028235e+38;
        lVar13 = *(int64_t *)(lVar13 + 0x8a8);
        fVar24 = *(float *)(lVar13 + 0x98);
        fVar27 = *(float *)(lVar13 + 0x74);
        fVar26 = *(float *)(lVar13 + 0x70);
        lVar15 = *(int64_t *)(&system_error_code + (int64_t)*(int *)(lVar12 + 0x590) * 8);
        fVar21 = fVar26 * *(float *)(lVar13 + 0x84) - fVar27 * *(float *)(lVar13 + 0x80);
        fVar28 = 1.0 / (fVar21 * fVar24);
        unaff_RBP[-8] =
             *(float *)(lVar13 + 0x84) * fVar24 * fVar28 * fVar36 -
             *(float *)(lVar13 + 0x80) * fVar24 * fVar28 * fVar19;
        unaff_RBP[-6] = fVar28 * fVar21 * fVar20;
        fVar20 = unaff_RBP[0xdc];
        unaff_RBP[-7] = fVar26 * fVar24 * fVar28 * fVar19 - fVar27 * fVar24 * fVar28 * fVar36;
        *(int64_t *)(lVar12 + 0x588) = lVar15 - (int64_t)(fVar20 * -100000.0);
        FUN_180575760(*(uint64_t *)(unaff_RDI + 0x590),
                      *(int8_t *)(*(int64_t *)(unaff_RDI + 0x728) + 0x20),unaff_RBP + -8,
                      &stack0x00000060,CONCAT44(uVar38,0.9 / fVar20));
        lVar13 = *(int64_t *)(unaff_RDI + 0x590);
        fVar24 = unaff_RBP[-8];
        fVar27 = unaff_RBP[-7];
        fVar26 = unaff_RBP[-6];
        fVar20 = unaff_RBP[-5];
        *(code **)(lVar13 + 0x3448) = FUN_180516cb0;
        *(int64_t *)(lVar13 + 0x3440) = unaff_RDI;
        lVar13 = *(int64_t *)(unaff_RDI + 0x728);
        *(float *)(lVar13 + 0x24) = fVar24;
        *(float *)(lVar13 + 0x28) = fVar27;
        *(float *)(lVar13 + 0x2c) = fVar26;
        *(float *)(lVar13 + 0x30) = fVar20;
      }
      break;
    }
    unaff_BL = *(char *)(lVar13 + 0x100 + unaff_R14);
    if ((in_R10B == '\0') ||
       (1 < (byte)(*(char *)((int64_t)unaff_BL * 0x1b0 + 0x104 + param_2) - 4U))) {
      in_R10B = '\0';
    }
    else {
      in_R10B = '\x01';
    }
  } while (-1 < unaff_BL);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x98) ^ (uint64_t)&stack0x00000000);
}





