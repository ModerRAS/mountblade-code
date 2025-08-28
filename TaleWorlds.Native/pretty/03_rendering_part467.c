#include "TaleWorlds.Native.Split.h"

// 03_rendering_part467.c - 1 个函数

// 函数: void FUN_1805194e2(int32_t param_1)
void FUN_1805194e2(int32_t param_1)

{
  float *pfVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  uint64_t uVar5;
  int8_t auVar6 [16];
  int8_t auVar7 [16];
  uint uVar8;
  longlong in_RAX;
  float *pfVar9;
  ulonglong in_RCX;
  longlong lVar10;
  longlong lVar11;
  float *unaff_RBP;
  longlong unaff_RSI;
  char cVar12;
  char cVar13;
  longlong lVar14;
  longlong unaff_R12;
  longlong unaff_R14;
  longlong unaff_R15;
  float fVar15;
  float fVar16;
  float fVar21;
  int8_t auVar17 [16];
  float fVar22;
  int8_t auVar18 [16];
  int8_t auVar19 [16];
  int8_t auVar20 [16];
  float fVar23;
  float unaff_XMM6_Da;
  float fVar24;
  float fVar25;
  float fVar26;
  float unaff_XMM9_Da;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float unaff_XMM11_Da;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  char cStack0000000000000061;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  float fStack000000000000007c;
  
  lVar4 = *(longlong *)(in_RAX + 0x208);
  lVar14 = *(longlong *)(unaff_R15 + 0x590);
  cVar2 = *(char *)(lVar14 + 0x25fc);
  cStack0000000000000061 = cVar2;
  if ((in_RCX & 0x28) == 0) {
    FUN_18022a890(param_1,cVar2,lVar4);
    pfVar9 = (float *)(unaff_R14 + ((longlong)cVar2 + 0x40) * 0x10);
    fVar23 = pfVar9[1];
    fVar35 = pfVar9[2];
    fVar25 = pfVar9[3];
    unaff_RBP[-0x1c] = *pfVar9;
    unaff_RBP[-0x1b] = fVar23;
    unaff_RBP[-0x1a] = fVar35;
    unaff_RBP[-0x19] = fVar25;
    fVar23 = unaff_RBP[-0x1b];
    fVar25 = unaff_RBP[-0x1c];
    unaff_RBP[0xc] = fVar35;
  }
  else {
    cVar2 = *(char *)(lVar14 + 0x25fa);
    cVar12 = '\0';
    cVar3 = *(char *)(lVar14 + 0x2600);
    fVar35 = 1.0;
    fVar27 = 0.0;
    fVar30 = 0.0;
    fVar33 = 0.0;
    fVar23 = 0.0;
    unaff_RBP[-0x18] = 1.0;
    unaff_RBP[-0x17] = 0.0;
    unaff_RBP[-0x16] = 0.0;
    unaff_RBP[-0x15] = 0.0;
    unaff_RBP[-0x14] = 0.0;
    unaff_RBP[-0x13] = 0.0;
    unaff_RBP[-0x12] = 0.0;
    unaff_RBP[-0x11] = 1.0;
    cVar13 = cVar2;
    while (-1 < cVar13) {
      if (cVar3 <= cVar12) {
        if (-1 < cVar13) {
          pfVar9 = (float *)FUN_18022a890(fVar23,cVar13,lVar4);
          fVar26 = *pfVar9;
          fVar39 = pfVar9[1];
          fVar38 = pfVar9[2];
          fVar16 = pfVar9[3];
          unaff_RBP[0x14] = fVar26;
          unaff_RBP[0x15] = fVar39;
          unaff_RBP[0x16] = fVar38;
          unaff_RBP[0x17] = fVar16;
          pfVar9 = (float *)(unaff_R14 + ((longlong)cVar13 + 0x40) * 0x10);
          fVar15 = *pfVar9;
          fVar23 = pfVar9[1];
          fVar21 = pfVar9[2];
          fVar25 = pfVar9[3];
          unaff_RBP[0x18] = fVar15;
          unaff_RBP[0x19] = fVar23;
          unaff_RBP[0x1a] = fVar21;
          unaff_RBP[0x1b] = fVar25;
          pfVar9 = (float *)FUN_1801c0fb0(unaff_RBP + 0x14,unaff_RBP + -0xc,unaff_RBP + -0x14);
          fVar15 = fVar15 + *pfVar9;
          fStack0000000000000074 = fVar23 + pfVar9[1];
          fStack000000000000007c = 3.4028235e+38;
          fVar21 = fVar21 + pfVar9[2];
          unaff_RBP[-0x14] = fVar15;
          unaff_RBP[-0x13] = fStack0000000000000074;
          unaff_RBP[-0x12] = fVar21;
          unaff_RBP[-0x11] = 3.4028235e+38;
          fVar23 = unaff_RBP[-0x13];
          fVar25 = unaff_RBP[-0x14];
          unaff_RBP[-0x18] =
               fVar16 * fVar33 * -1.0 + fVar38 * fVar30 * -1.0 + (fVar35 * fVar26 - fVar39 * fVar27)
          ;
          unaff_RBP[-0x17] =
               fVar38 * fVar33 * 1.0 + fVar26 * fVar27 * 1.0 + (fVar35 * fVar39 - fVar16 * fVar30);
          unaff_RBP[-0x16] =
               fVar16 * fVar27 * 1.0 + fVar26 * fVar30 * 1.0 + (fVar35 * fVar38 - fVar39 * fVar33);
          unaff_RBP[-0x15] =
               fVar39 * fVar30 * 1.0 + fVar26 * fVar33 * 1.0 + (fVar35 * fVar16 - fVar38 * fVar27);
          fVar35 = fVar21;
          fStack0000000000000070 = fVar15;
          fStack0000000000000078 = fVar21;
          goto LAB_180519855;
        }
        break;
      }
      lVar10 = (longlong)cVar13;
      lVar11 = lVar10 + 0x82;
      lVar14 = lVar10 + 0xf;
      if (unaff_XMM9_Da <= unaff_XMM11_Da) {
        if (unaff_XMM11_Da <= unaff_XMM6_Da) {
          pfVar9 = (float *)(unaff_RSI + lVar14 * 0x10);
          fVar23 = *pfVar9;
          fVar25 = pfVar9[1];
          fVar26 = pfVar9[2];
          fVar39 = pfVar9[3];
          pfVar9 = (float *)(unaff_R14 + lVar11 * 0x10);
          fVar38 = *pfVar9;
          fVar16 = pfVar9[1];
          fVar15 = pfVar9[2] * fVar26;
          fVar21 = pfVar9[3] * fVar39;
          unaff_RBP[0x18] = -1.0;
          unaff_RBP[0x19] = -1.0;
          unaff_RBP[0x1a] = -1.0;
          unaff_RBP[0x1b] = -1.0;
          auVar20._0_4_ = fVar15 + fVar38 * fVar23;
          auVar20._4_4_ = fVar21 + fVar16 * fVar25;
          auVar20._8_4_ = fVar15 + fVar15;
          auVar20._12_4_ = fVar21 + fVar21;
          auVar17._4_12_ = auVar20._4_12_;
          auVar17._0_4_ = auVar20._0_4_ + auVar20._4_4_;
          unaff_RBP[0x14] = 1.0;
          unaff_RBP[0x15] = 1.0;
          unaff_RBP[0x16] = 1.0;
          unaff_RBP[0x17] = 1.0;
          uVar8 = movmskps((int)lVar14 * 2,auVar17);
          pfVar9 = unaff_RBP + (ulonglong)(uVar8 & 1) * 4 + 0x14;
          fVar38 = *pfVar9;
          fVar16 = pfVar9[1];
          fVar15 = pfVar9[2];
          fVar21 = pfVar9[3];
          pfVar9 = (float *)(unaff_R14 + lVar11 * 0x10);
          fVar22 = *pfVar9;
          fVar29 = pfVar9[1];
          fVar32 = pfVar9[2];
          fVar34 = pfVar9[3];
          if (0.9995 < ABS(auVar17._0_4_)) {
            fVar24 = unaff_XMM13_Da - unaff_XMM11_Da;
            fVar38 = fVar24 * fVar23 + unaff_XMM11_Da * fVar38 * fVar22;
            fVar25 = fVar24 * fVar25 + unaff_XMM11_Da * fVar16 * fVar29;
            fVar26 = fVar24 * fVar26 + unaff_XMM11_Da * fVar15 * fVar32;
            fVar39 = fVar24 * fVar39 + unaff_XMM11_Da * fVar21 * fVar34;
            fVar23 = fVar39 * fVar39 + fVar38 * fVar38;
            fVar16 = fVar26 * fVar26 + fVar25 * fVar25;
            fVar32 = fVar23 + fVar25 * fVar25 + fVar26 * fVar26;
            fVar34 = fVar16 + fVar38 * fVar38 + fVar39 * fVar39;
            auVar7._4_4_ = fVar23 + fVar16 + 1.1754944e-38;
            auVar7._0_4_ = fVar16 + fVar23 + 1.1754944e-38;
            auVar7._8_4_ = fVar32 + 1.1754944e-38;
            auVar7._12_4_ = fVar34 + 1.1754944e-38;
            auVar20 = rsqrtps(auVar17,auVar7);
            fVar15 = auVar20._0_4_;
            fVar21 = auVar20._4_4_;
            fVar22 = auVar20._8_4_;
            fVar29 = auVar20._12_4_;
            fVar38 = fVar38 * (3.0 - fVar15 * fVar15 * (fVar16 + fVar23)) * fVar15 * 0.5;
            fVar25 = fVar25 * (3.0 - fVar21 * fVar21 * (fVar23 + fVar16)) * fVar21 * 0.5;
            fVar26 = fVar26 * (3.0 - fVar22 * fVar22 * fVar32) * fVar22 * 0.5;
            fVar39 = fVar39 * (3.0 - fVar29 * fVar29 * fVar34) * fVar29 * 0.5;
          }
          else {
            fVar24 = (float)acosf();
            fVar28 = (float)sinf();
            fVar31 = (float)sinf(fVar24 - fVar24 * unaff_XMM11_Da);
            fVar31 = fVar31 * (unaff_XMM13_Da / fVar28);
            fVar24 = (float)sinf(fVar24 * unaff_XMM11_Da);
            fVar24 = fVar24 * (unaff_XMM13_Da / fVar28);
            fVar38 = fVar31 * fVar23 + fVar24 * fVar38 * fVar22;
            fVar25 = fVar31 * fVar25 + fVar24 * fVar16 * fVar29;
            fVar26 = fVar31 * fVar26 + fVar24 * fVar15 * fVar32;
            fVar39 = fVar31 * fVar39 + fVar24 * fVar21 * fVar34;
          }
        }
        else {
          pfVar9 = (float *)(unaff_R14 + lVar11 * 0x10);
          fVar38 = *pfVar9;
          fVar25 = pfVar9[1];
          fVar26 = pfVar9[2];
          fVar39 = pfVar9[3];
        }
      }
      else {
        pfVar9 = (float *)(unaff_RSI + lVar14 * 0x10);
        fVar38 = *pfVar9;
        fVar25 = pfVar9[1];
        fVar26 = pfVar9[2];
        fVar39 = pfVar9[3];
      }
      unaff_RBP[4] = fVar38;
      unaff_RBP[5] = fVar25;
      unaff_RBP[6] = fVar26;
      unaff_RBP[7] = fVar39;
      lVar14 = lVar10 * 0x1b0 + *(longlong *)(lVar4 + 0x140);
      fVar23 = *(float *)(lVar14 + 0x80);
      fVar16 = *(float *)(lVar14 + 0x84);
      fVar15 = *(float *)(lVar14 + 0x88);
      fVar21 = *(float *)(lVar14 + 0x8c);
      unaff_RBP[8] = fVar23;
      unaff_RBP[9] = fVar16;
      unaff_RBP[10] = fVar15;
      unaff_RBP[0xb] = fVar21;
      pfVar9 = (float *)FUN_1801c0fb0(unaff_RBP + 4,unaff_RBP + -0xc,unaff_RBP + -0x14);
      cVar13 = *(char *)(lVar14 + 0xf0);
      fVar23 = fVar23 + *pfVar9;
      fStack0000000000000074 = fVar16 + pfVar9[1];
      fVar29 = fVar39 * fVar27;
      fVar32 = fVar25 * fVar30;
      fVar34 = fVar39 * fVar33;
      cVar12 = cVar12 + '\x01';
      fVar16 = fVar26 * fVar30;
      fVar21 = fVar26 * fVar27;
      fVar22 = fVar25 * fVar27;
      unaff_XMM9_Da = 0.001;
      fStack0000000000000078 = fVar15 + pfVar9[2];
      fStack000000000000007c = 3.4028235e+38;
      fVar27 = fVar26 * fVar33 * 1.0 + fVar38 * fVar27 * 1.0 + (fVar35 * fVar25 - fVar39 * fVar30);
      fVar30 = fVar29 * 1.0 + fVar38 * fVar30 * 1.0 + (fVar35 * fVar26 - fVar25 * fVar33);
      fVar33 = fVar32 * 1.0 + fVar38 * fVar33 * 1.0 + (fVar35 * fVar39 - fVar21);
      fVar35 = fVar34 * -1.0 + fVar16 * -1.0 + (fVar35 * fVar38 - fVar22);
      unaff_XMM6_Da = 0.999;
      unaff_RBP[-0x18] = fVar35;
      unaff_RBP[-0x17] = fVar27;
      unaff_RBP[-0x16] = fVar30;
      unaff_RBP[-0x15] = fVar33;
      unaff_RBP[-0x14] = fVar23;
      unaff_RBP[-0x13] = fStack0000000000000074;
      unaff_RBP[-0x12] = fStack0000000000000078;
      unaff_RBP[-0x11] = 3.4028235e+38;
      fStack0000000000000070 = fVar23;
    }
    fVar25 = unaff_RBP[-0x14] + (*(float *)(unaff_R14 + 0x1020) - *(float *)(unaff_R14 + 0x1030));
    fVar15 = *(float *)(unaff_R14 + 0x1028) - *(float *)(unaff_R14 + 0x1038);
    fVar23 = unaff_RBP[-0x13] + (*(float *)(unaff_R14 + 0x1024) - *(float *)(unaff_R14 + 0x1034));
    unaff_RBP[-0x14] = fVar25;
    fVar21 = unaff_RBP[-0x12] + fVar15;
    unaff_RBP[-0x13] = fVar23;
    unaff_RBP[-0x12] = fVar21;
    fVar35 = 0.0;
LAB_180519855:
    uVar5 = *(uint64_t *)(unaff_R15 + 0x590);
    FUN_18022a890(fVar15,cVar2,lVar4);
    fStack000000000000007c = 3.4028235e+38;
    pfVar9 = (float *)(unaff_R14 + ((longlong)cVar2 + 0x40) * 0x10);
    fStack0000000000000070 = fVar25 - *pfVar9;
    fStack0000000000000074 = fVar23 - pfVar9[1];
    fStack0000000000000078 = fVar21 - pfVar9[2];
    FUN_180575540(uVar5,2,cVar2,cVar3,&stack0x00000070);
    pfVar9 = (float *)FUN_1801c0fb0(unaff_RBP + -0x18,unaff_RBP + -0xc,
                                    *(longlong *)(lVar4 + 0x140) +
                                    (longlong)cStack0000000000000061 * 0x1b0 + 0x80);
    fVar25 = fVar25 + *pfVar9;
    fVar23 = fVar23 + pfVar9[1];
    unaff_RBP[0xc] = fVar21 + pfVar9[2];
    unaff_RBP[0xd] = fVar35;
    unaff_RBP[0xe] = fVar35;
    unaff_RBP[0xf] = fVar35;
    unaff_XMM6_Da = 0.999;
  }
  unaff_RBP[-0xf] = fVar25;
  unaff_RBP[-0xe] = fVar23;
  if (((uint)unaff_RBP[-0x20] & 0x14) != 0) {
    lVar14 = *(longlong *)(unaff_R15 + 0x590);
    cVar13 = '\0';
    fVar25 = 1.0;
    fVar35 = 0.0;
    fVar27 = 0.0;
    fVar30 = 0.0;
    fVar23 = 0.0;
    unaff_RBP[-0x18] = 1.0;
    unaff_RBP[-0x17] = 0.0;
    unaff_RBP[-0x16] = 0.0;
    unaff_RBP[-0x15] = 0.0;
    cVar2 = *(char *)(lVar14 + 0x25f9);
    cVar3 = *(char *)(lVar14 + 0x2600);
    unaff_RBP[-0x14] = 0.0;
    unaff_RBP[-0x13] = 0.0;
    unaff_RBP[-0x12] = 0.0;
    unaff_RBP[-0x11] = 1.0;
    cStack0000000000000061 = cVar2;
    while (-1 < cVar2) {
      if (cVar3 <= cVar13) {
        if (-1 < cVar2) {
          pfVar9 = (float *)FUN_18022a890(fVar23,cVar2,lVar4);
          fVar33 = *pfVar9;
          fVar26 = pfVar9[1];
          fVar39 = pfVar9[2];
          fVar38 = pfVar9[3];
          unaff_RBP[0x14] = fVar33;
          unaff_RBP[0x15] = fVar26;
          unaff_RBP[0x16] = fVar39;
          unaff_RBP[0x17] = fVar38;
          pfVar9 = (float *)(unaff_R14 + ((longlong)cVar2 + 0x40) * 0x10);
          fVar16 = *pfVar9;
          fVar15 = pfVar9[1];
          fVar21 = pfVar9[2];
          fVar23 = pfVar9[3];
          unaff_RBP[0x18] = fVar16;
          unaff_RBP[0x19] = fVar15;
          unaff_RBP[0x1a] = fVar21;
          unaff_RBP[0x1b] = fVar23;
          pfVar9 = (float *)FUN_1801c0fb0(unaff_RBP + 0x14,unaff_RBP + -0xc,unaff_RBP + -0x14);
          fVar23 = pfVar9[1];
          fVar21 = fVar21 + pfVar9[2];
          unaff_RBP[-0x14] = fVar16 + *pfVar9;
          unaff_RBP[-0x13] = fVar15 + fVar23;
          unaff_RBP[-0x12] = fVar21;
          unaff_RBP[-0x11] = 3.4028235e+38;
          unaff_RBP[-0x10] = unaff_RBP[-0x13];
          unaff_RBP[-0x20] = unaff_RBP[-0x14];
          unaff_RBP[-0x18] =
               fVar38 * fVar30 * -1.0 + fVar39 * fVar27 * -1.0 + (fVar25 * fVar33 - fVar26 * fVar35)
          ;
          unaff_RBP[-0x17] =
               fVar39 * fVar30 * 1.0 + fVar33 * fVar35 * 1.0 + (fVar25 * fVar26 - fVar38 * fVar27);
          unaff_RBP[-0x16] =
               fVar38 * fVar35 * 1.0 + fVar33 * fVar27 * 1.0 + (fVar25 * fVar39 - fVar26 * fVar30);
          unaff_RBP[-0x15] =
               fVar26 * fVar27 * 1.0 + fVar33 * fVar30 * 1.0 + (fVar25 * fVar38 - fVar39 * fVar35);
          fVar23 = fVar21;
          goto LAB_180519e0e;
        }
        break;
      }
      lVar11 = (longlong)cVar2;
      lVar14 = lVar11 + 0x82;
      pfVar9 = (float *)((lVar11 + 0xf) * 0x10 + *(longlong *)(unaff_R15 + 0x728));
      if (unaff_XMM9_Da <= unaff_XMM12_Da) {
        if (unaff_XMM12_Da <= unaff_XMM6_Da) {
          fVar23 = *pfVar9;
          fVar33 = pfVar9[1];
          fVar26 = pfVar9[2];
          fVar39 = pfVar9[3];
          pfVar1 = (float *)(unaff_R14 + lVar14 * 0x10);
          fVar38 = *pfVar1;
          fVar16 = pfVar1[1];
          fVar15 = fVar26 * pfVar1[2];
          fVar21 = fVar39 * pfVar1[3];
          unaff_RBP[0x18] = -1.0;
          unaff_RBP[0x19] = -1.0;
          unaff_RBP[0x1a] = -1.0;
          unaff_RBP[0x1b] = -1.0;
          auVar18._0_4_ = fVar15 + fVar23 * fVar38;
          auVar18._4_4_ = fVar21 + fVar33 * fVar16;
          auVar18._8_4_ = fVar15 + fVar15;
          auVar18._12_4_ = fVar21 + fVar21;
          auVar19._4_12_ = auVar18._4_12_;
          auVar19._0_4_ = auVar18._0_4_ + auVar18._4_4_;
          unaff_RBP[0x14] = 1.0;
          unaff_RBP[0x15] = 1.0;
          unaff_RBP[0x16] = 1.0;
          unaff_RBP[0x17] = 1.0;
          uVar8 = movmskps((int)pfVar9,auVar19);
          pfVar9 = unaff_RBP + (ulonglong)(uVar8 & 1) * 4 + 0x14;
          fVar38 = *pfVar9;
          fVar16 = pfVar9[1];
          fVar15 = pfVar9[2];
          fVar21 = pfVar9[3];
          pfVar9 = (float *)(unaff_R14 + lVar14 * 0x10);
          fVar22 = *pfVar9;
          fVar29 = pfVar9[1];
          fVar32 = pfVar9[2];
          fVar34 = pfVar9[3];
          if (0.9995 < ABS(auVar19._0_4_)) {
            fVar24 = unaff_XMM13_Da - unaff_XMM12_Da;
            fVar38 = fVar24 * fVar23 + unaff_XMM12_Da * fVar38 * fVar22;
            fVar33 = fVar24 * fVar33 + unaff_XMM12_Da * fVar16 * fVar29;
            fVar26 = fVar24 * fVar26 + unaff_XMM12_Da * fVar15 * fVar32;
            fVar39 = fVar24 * fVar39 + unaff_XMM12_Da * fVar21 * fVar34;
            fVar23 = fVar39 * fVar39 + fVar38 * fVar38;
            fVar16 = fVar26 * fVar26 + fVar33 * fVar33;
            fVar32 = fVar23 + fVar33 * fVar33 + fVar26 * fVar26;
            fVar34 = fVar16 + fVar38 * fVar38 + fVar39 * fVar39;
            auVar6._4_4_ = fVar23 + fVar16 + 1.1754944e-38;
            auVar6._0_4_ = fVar16 + fVar23 + 1.1754944e-38;
            auVar6._8_4_ = fVar32 + 1.1754944e-38;
            auVar6._12_4_ = fVar34 + 1.1754944e-38;
            auVar20 = rsqrtps(auVar19,auVar6);
            fVar15 = auVar20._0_4_;
            fVar21 = auVar20._4_4_;
            fVar22 = auVar20._8_4_;
            fVar29 = auVar20._12_4_;
            fVar38 = fVar38 * (3.0 - fVar15 * fVar15 * (fVar16 + fVar23)) * fVar15 * 0.5;
            fVar33 = fVar33 * (3.0 - fVar21 * fVar21 * (fVar23 + fVar16)) * fVar21 * 0.5;
            fVar26 = fVar26 * (3.0 - fVar22 * fVar22 * fVar32) * fVar22 * 0.5;
            fVar39 = fVar39 * (3.0 - fVar29 * fVar29 * fVar34) * fVar29 * 0.5;
          }
          else {
            fVar24 = (float)acosf();
            fVar28 = (float)sinf();
            fVar31 = (float)sinf(fVar24 - fVar24 * unaff_XMM12_Da);
            fVar31 = fVar31 * (unaff_XMM13_Da / fVar28);
            fVar24 = (float)sinf(fVar24 * unaff_XMM12_Da);
            fVar24 = fVar24 * (unaff_XMM13_Da / fVar28);
            fVar38 = fVar31 * fVar23 + fVar24 * fVar38 * fVar22;
            fVar33 = fVar31 * fVar33 + fVar24 * fVar16 * fVar29;
            fVar26 = fVar31 * fVar26 + fVar24 * fVar15 * fVar32;
            fVar39 = fVar31 * fVar39 + fVar24 * fVar21 * fVar34;
          }
        }
        else {
          pfVar9 = (float *)(unaff_R14 + lVar14 * 0x10);
          fVar38 = *pfVar9;
          fVar33 = pfVar9[1];
          fVar26 = pfVar9[2];
          fVar39 = pfVar9[3];
        }
      }
      else {
        fVar38 = *pfVar9;
        fVar33 = pfVar9[1];
        fVar26 = pfVar9[2];
        fVar39 = pfVar9[3];
      }
      unaff_RBP[4] = fVar38;
      unaff_RBP[5] = fVar33;
      unaff_RBP[6] = fVar26;
      unaff_RBP[7] = fVar39;
      lVar14 = lVar11 * 0x1b0 + *(longlong *)(lVar4 + 0x140);
      fVar23 = *(float *)(lVar14 + 0x80);
      fVar16 = *(float *)(lVar14 + 0x84);
      fVar15 = *(float *)(lVar14 + 0x88);
      fVar21 = *(float *)(lVar14 + 0x8c);
      unaff_RBP[8] = fVar23;
      unaff_RBP[9] = fVar16;
      unaff_RBP[10] = fVar15;
      unaff_RBP[0xb] = fVar21;
      pfVar9 = (float *)FUN_1801c0fb0(unaff_RBP + 4,unaff_RBP + -0xc,unaff_RBP + -0x14);
      cVar2 = *(char *)(lVar14 + 0xf0);
      fVar23 = fVar23 + *pfVar9;
      fStack0000000000000074 = fVar16 + pfVar9[1];
      fVar29 = fVar39 * fVar35;
      fVar32 = fVar33 * fVar27;
      fVar34 = fVar39 * fVar30;
      cVar13 = cVar13 + '\x01';
      fVar16 = fVar26 * fVar27;
      fVar21 = fVar26 * fVar35;
      fVar22 = fVar33 * fVar35;
      unaff_XMM9_Da = 0.001;
      fStack0000000000000078 = fVar15 + pfVar9[2];
      fStack000000000000007c = 3.4028235e+38;
      fVar35 = fVar26 * fVar30 * 1.0 + fVar38 * fVar35 * 1.0 + (fVar25 * fVar33 - fVar39 * fVar27);
      fVar27 = fVar29 * 1.0 + fVar38 * fVar27 * 1.0 + (fVar25 * fVar26 - fVar33 * fVar30);
      fVar30 = fVar32 * 1.0 + fVar38 * fVar30 * 1.0 + (fVar25 * fVar39 - fVar21);
      fVar25 = fVar34 * -1.0 + fVar16 * -1.0 + (fVar25 * fVar38 - fVar22);
      unaff_XMM6_Da = 0.999;
      unaff_RBP[-0x18] = fVar25;
      unaff_RBP[-0x17] = fVar35;
      unaff_RBP[-0x16] = fVar27;
      unaff_RBP[-0x15] = fVar30;
      unaff_RBP[-0x14] = fVar23;
      unaff_RBP[-0x13] = fStack0000000000000074;
      unaff_RBP[-0x12] = fStack0000000000000078;
      unaff_RBP[-0x11] = 3.4028235e+38;
      fStack0000000000000070 = fVar23;
    }
    fVar27 = unaff_RBP[-0x14] + (*(float *)(unaff_R14 + 0x1020) - *(float *)(unaff_R14 + 0x1030));
    fVar23 = *(float *)(unaff_R14 + 0x1028);
    fVar25 = *(float *)(unaff_R14 + 0x1038);
    fVar35 = unaff_RBP[-0x13] + (*(float *)(unaff_R14 + 0x1024) - *(float *)(unaff_R14 + 0x1034));
    unaff_RBP[-0x20] = fVar27;
    fVar21 = unaff_RBP[-0x12] + (fVar23 - fVar25);
    unaff_RBP[-0x14] = fVar27;
    unaff_RBP[-0x10] = fVar35;
    unaff_RBP[-0x13] = fVar35;
    unaff_RBP[-0x12] = fVar21;
    fVar23 = 0.0;
LAB_180519e0e:
    lVar14 = *(longlong *)(unaff_R15 + 0x8f8);
    fStack0000000000000070 = unaff_RBP[-0x18];
    fStack0000000000000074 = unaff_RBP[-0x17];
    fStack0000000000000078 = unaff_RBP[-0x16];
    fStack000000000000007c = unaff_RBP[-0x15];
    unaff_RBP[0x10] = fVar21;
    unaff_RBP[0x11] = fVar23;
    unaff_RBP[0x12] = fVar23;
    unaff_RBP[0x13] = fVar23;
    if ((*(longlong *)(lVar14 + 0x9f0) == 0) && (unaff_R12 != 0)) {
      lVar14 = (longlong)*(int *)(unaff_R12 + 0xf0) * 0xa0;
      if (((*(byte *)(lVar14 + 0x50 + *(longlong *)(unaff_R12 + 0xd0)) & 0x40) != 0) &&
         (*(char *)((longlong)*(int *)(lVar14 + 100 + *(longlong *)(unaff_R12 + 0xd0)) * 0x170 +
                    0x135 + _DAT_180c95ff0) != '\0')) {
        lVar11 = (longlong)*(char *)(*(longlong *)(unaff_R15 + 0x590) + 0x25fb);
        FUN_18063b5f0(unaff_RBP + -8,(lVar11 + 0x82) * 0x10 + unaff_R14);
        lVar14 = *(longlong *)(unaff_R15 + 0x728);
        unaff_RBP[-0x19] = 3.4028235e+38;
        fVar23 = *(float *)(lVar14 + 0xe4);
        fVar25 = *(float *)(lVar14 + 0xd4);
        unaff_RBP[-0x1c] = *(float *)(lVar14 + 0xe0) - *(float *)(lVar14 + 0xd0);
        fVar35 = *(float *)(lVar14 + 0xe8);
        fVar27 = *(float *)(lVar14 + 0xd8);
        unaff_RBP[-0x1b] = fVar23 - fVar25;
        unaff_RBP[-0x1a] = fVar35 - fVar27;
        pfVar9 = (float *)FUN_180285b40(lVar14 + 0xc0,unaff_RBP + -0xc,unaff_RBP + -0x1c);
        fVar23 = *pfVar9;
        fVar25 = pfVar9[1];
        fVar35 = pfVar9[2];
        fVar27 = fVar23 * fVar23 + fVar25 * fVar25 + fVar35 * fVar35;
        auVar20 = rsqrtss(ZEXT416((uint)fVar27),ZEXT416((uint)fVar27));
        fVar30 = auVar20._0_4_;
        fVar27 = fVar30 * 0.5 * (3.0 - fVar27 * fVar30 * fVar30);
        fVar23 = fVar23 * fVar27;
        fVar35 = fVar35 * fVar27;
        fVar25 = fVar25 * fVar27;
        fVar27 = fVar23 * fVar23 + fVar35 * fVar35;
        auVar20 = rsqrtss(ZEXT416((uint)fVar27),ZEXT416((uint)fVar27));
        fVar30 = auVar20._0_4_;
        unaff_RBP[0x15] = 0.0;
        fVar27 = fVar30 * 0.5 * (3.0 - fVar27 * fVar30 * fVar30);
        fVar29 = fVar35 * fVar27;
        fVar32 = -(fVar23 * fVar27);
        fVar36 = fVar25 * fVar32;
        fVar27 = unaff_RBP[-8];
        fVar30 = unaff_RBP[-7];
        fVar33 = unaff_RBP[-6];
        fVar26 = unaff_RBP[-4];
        fVar39 = unaff_RBP[-3];
        fVar38 = unaff_RBP[-2];
        fVar16 = *unaff_RBP;
        fVar15 = unaff_RBP[1];
        fVar22 = unaff_RBP[2];
        fVar34 = fVar35 * fVar29 - fVar32 * fVar23;
        fVar24 = -(fVar25 * fVar29);
        fVar28 = fVar29 * fVar27 + fVar26 * 0.0 + fVar32 * fVar16;
        fVar31 = fVar29 * fVar30 + fVar39 * 0.0 + fVar32 * fVar15;
        fVar29 = fVar29 * fVar33 + fVar38 * 0.0 + fVar32 * fVar22;
        fVar32 = fVar36 * fVar27 + fVar34 * fVar26 + fVar24 * fVar16;
        fVar37 = fVar36 * fVar30 + fVar34 * fVar39 + fVar24 * fVar15;
        fVar34 = fVar36 * fVar33 + fVar34 * fVar38 + fVar24 * fVar22;
        fVar24 = fVar25 * fVar26 + fVar23 * fVar27 + fVar35 * fVar16;
        fVar36 = fVar25 * fVar39 + fVar23 * fVar30 + fVar35 * fVar15;
        fVar22 = fVar25 * fVar38 + fVar23 * fVar33 + fVar35 * fVar22;
        pfVar9 = (float *)FUN_1801c0fb0(unaff_RBP + -0x18,unaff_RBP + -0xc,
                                        *(longlong *)(lVar4 + 0x140) + lVar11 * 0x1b0 + 0x80);
        fVar23 = unaff_RBP[-0x20];
        fVar25 = unaff_RBP[-0x10];
        fVar35 = *pfVar9;
        fVar27 = pfVar9[1];
        fVar30 = pfVar9[2];
        FUN_18063b5f0(unaff_RBP + -8,&stack0x00000070);
        fVar33 = unaff_RBP[-8];
        fVar26 = unaff_RBP[-7];
        fVar39 = unaff_RBP[-6];
        unaff_RBP[0x14] = fVar31;
        unaff_RBP[0x15] = fVar31;
        unaff_RBP[0x16] = fVar31;
        unaff_RBP[0x17] = fVar31;
        unaff_RBP[-0xc] = fVar28;
        unaff_RBP[-0xb] = fVar28;
        unaff_RBP[-10] = fVar28;
        unaff_RBP[-9] = fVar28;
        unaff_RBP[4] = fVar37;
        unaff_RBP[5] = fVar37;
        unaff_RBP[6] = fVar37;
        unaff_RBP[7] = fVar37;
        unaff_RBP[-0x18] = fVar32;
        unaff_RBP[-0x17] = fVar32;
        unaff_RBP[-0x16] = fVar32;
        unaff_RBP[-0x15] = fVar32;
        unaff_RBP[-0x19] = 3.4028235e+38;
        fVar27 = unaff_RBP[-0xe] - (fVar25 + fVar27);
        unaff_RBP[-8] = fVar31 * unaff_RBP[-4] + fVar28 * fVar33 + fVar29 * *unaff_RBP;
        unaff_RBP[-7] = fVar31 * unaff_RBP[-3] + fVar28 * fVar26 + fVar29 * unaff_RBP[1];
        unaff_RBP[-6] = fVar31 * unaff_RBP[-2] + fVar28 * fVar39 + fVar29 * unaff_RBP[2];
        unaff_RBP[-5] = fVar31 * unaff_RBP[-1] + fVar28 * unaff_RBP[-5] + fVar29 * unaff_RBP[3];
        unaff_RBP[-5] = 3.4028235e+38;
        fVar25 = unaff_RBP[0xc] - (fVar21 + fVar30);
        fVar21 = unaff_RBP[-0xf] - (fVar23 + fVar35);
        fVar30 = fVar37 * unaff_RBP[-4] + fVar32 * fVar33 + fVar34 * *unaff_RBP;
        fVar38 = fVar37 * unaff_RBP[-3] + fVar32 * fVar26 + fVar34 * unaff_RBP[1];
        fVar39 = fVar37 * unaff_RBP[-2] + fVar32 * fVar39 + fVar34 * unaff_RBP[2];
        *unaff_RBP = fVar21;
        unaff_RBP[1] = fVar27;
        unaff_RBP[2] = fVar25;
        unaff_RBP[3] = unaff_RBP[-0x19];
        fVar35 = fVar27 * fVar27 + fVar21 * fVar21 + fVar25 * fVar25;
        unaff_RBP[-0x1c] = fVar21;
        unaff_RBP[-0x1b] = fVar27;
        unaff_RBP[-0x1a] = fVar25;
        unaff_RBP[-0x19] = unaff_RBP[-0x19];
        auVar20 = rsqrtss(ZEXT416((uint)fVar35),ZEXT416((uint)fVar35));
        fVar23 = auVar20._0_4_;
        fVar23 = fVar23 * 0.5 * (3.0 - fVar35 * fVar23 * fVar23);
        fVar26 = unaff_RBP[1] * fVar23;
        fVar27 = unaff_RBP[2] * fVar23;
        fVar21 = fVar21 * fVar23;
        fVar33 = fVar38 * fVar27 - fVar39 * fVar26;
        *unaff_RBP = fVar21;
        fVar16 = fVar39 * fVar21 - fVar30 * fVar27;
        unaff_RBP[1] = fVar26;
        unaff_RBP[2] = fVar27;
        fVar15 = fVar30 * fVar26 - fVar38 * fVar21;
        unaff_RBP[-0x19] = 3.4028235e+38;
        fVar25 = fVar16 * fVar16 + fVar33 * fVar33 + fVar15 * fVar15;
        auVar20 = rsqrtss(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25));
        fVar35 = auVar20._0_4_;
        fVar23 = unaff_RBP[-0x19];
        fVar25 = fVar35 * 0.5 * (3.0 - fVar25 * fVar35 * fVar35);
        fVar16 = fVar16 * fVar25;
        fVar15 = fVar15 * fVar25;
        fVar33 = fVar33 * fVar25;
        fVar38 = fVar26 * fVar15 - fVar27 * fVar16;
        unaff_RBP[-8] = fVar33;
        fVar39 = fVar33 * fVar27 - fVar21 * fVar15;
        fVar25 = *unaff_RBP;
        fVar35 = unaff_RBP[1];
        fVar27 = unaff_RBP[2];
        fVar30 = unaff_RBP[3];
        fVar21 = fVar21 * fVar16 - fVar33 * fVar26;
        fVar33 = unaff_RBP[-8];
        fVar26 = unaff_RBP[-5];
        unaff_RBP[-0x1c] = fVar38;
        unaff_RBP[-0x1b] = fVar39;
        unaff_RBP[-0x1a] = fVar21;
        unaff_RBP[-0x19] = fVar23;
        unaff_RBP[-4] = unaff_RBP[4] * fVar38 + unaff_RBP[0x14] * fVar33 + fVar36 * fVar25;
        unaff_RBP[-3] = unaff_RBP[5] * fVar39 + unaff_RBP[0x15] * fVar16 + fVar36 * fVar35;
        unaff_RBP[-2] = unaff_RBP[6] * fVar21 + unaff_RBP[0x16] * fVar15 + fVar36 * fVar27;
        unaff_RBP[-1] = unaff_RBP[7] * fVar23 + unaff_RBP[0x17] * fVar26 + fVar36 * fVar30;
        *unaff_RBP = fVar34 * fVar38 + fVar29 * fVar33 + fVar22 * fVar25;
        unaff_RBP[1] = fVar34 * fVar39 + fVar29 * fVar16 + fVar22 * fVar35;
        unaff_RBP[2] = fVar34 * fVar21 + fVar29 * fVar15 + fVar22 * fVar27;
        unaff_RBP[3] = fVar34 * fVar23 + fVar29 * fVar26 + fVar22 * fVar30;
        unaff_RBP[-8] = unaff_RBP[-0x18] * fVar38 + unaff_RBP[-0xc] * fVar33 + fVar24 * fVar25;
        unaff_RBP[-7] = unaff_RBP[-0x17] * fVar39 + unaff_RBP[-0xb] * fVar16 + fVar24 * fVar35;
        unaff_RBP[-6] = unaff_RBP[-0x16] * fVar21 + unaff_RBP[-10] * fVar15 + fVar24 * fVar27;
        unaff_RBP[-5] = unaff_RBP[-0x15] * fVar23 + unaff_RBP[-9] * fVar26 + fVar24 * fVar30;
        fStack0000000000000070 = fVar34;
        fStack0000000000000074 = fVar34;
        fStack0000000000000078 = fVar34;
        fStack000000000000007c = fVar34;
        FUN_18063b470(unaff_RBP + -0xc,unaff_RBP + -8);
        fStack0000000000000070 = unaff_RBP[-0xc];
        fStack0000000000000074 = unaff_RBP[-0xb];
        fStack0000000000000078 = unaff_RBP[-10];
        fStack000000000000007c = unaff_RBP[-9];
      }
    }
    cVar2 = cStack0000000000000061;
    uVar5 = *(uint64_t *)(unaff_R15 + 0x590);
    lVar14 = (longlong)cStack0000000000000061;
    FUN_18022a890(fStack0000000000000070,cStack0000000000000061,lVar4);
    pfVar9 = (float *)(unaff_R14 + (lVar14 + 0x40) * 0x10);
    fVar23 = *pfVar9;
    fVar25 = pfVar9[1];
    fVar35 = pfVar9[2];
    unaff_RBP[-0x19] = 3.4028235e+38;
    unaff_RBP[-0x1c] = unaff_RBP[-0x20] - fVar23;
    unaff_RBP[-0x1b] = unaff_RBP[-0x10] - fVar25;
    unaff_RBP[-0x1a] = unaff_RBP[0x10] - fVar35;
    FUN_180575540(uVar5,1,cVar2,cVar3,unaff_RBP + -0x1c);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x20) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



