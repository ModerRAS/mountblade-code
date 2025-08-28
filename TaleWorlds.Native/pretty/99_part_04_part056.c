#include "TaleWorlds.Native.Split.h"

// 99_part_04_part056.c - 2 个函数

// 函数: void FUN_1802b80b6(void)
void FUN_1802b80b6(void)

{
  int *piVar1;
  int32_t uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int64_t lVar10;
  uint64_t uVar11;
  float *pfVar12;
  int64_t lVar13;
  int64_t lVar14;
  float *unaff_RBP;
  int64_t unaff_RSI;
  int64_t lVar15;
  int64_t unaff_RDI;
  uint64_t uVar16;
  int iVar17;
  int64_t lVar18;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t *unaff_R15;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint64_t uVar24;
  float fVar25;
  int32_t in_XMM3_Da;
  float fVar26;
  float fVar27;
  float in_XMM5_Da;
  float fVar28;
  float fVar29;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float fVar30;
  float unaff_XMM11_Da;
  float fVar31;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float fVar32;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float fStackX_20;
  uint64_t uStack0000000000000028;
  float fStack0000000000000030;
  int32_t uStack0000000000000034;
  float fStack0000000000000038;
  float in_stack_00000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  int32_t uStack000000000000004c;
  int in_stack_00000050;
  uint64_t in_stack_00000058;
  int32_t uStack0000000000000060;
  float fStack0000000000000064;
  uint64_t in_stack_00000068;
  float in_stack_00000070;
  float in_stack_00000078;
  
  lVar14 = unaff_R12 * 0x70;
  do {
    lVar15 = *unaff_R15;
    uVar2 = *(int32_t *)(unaff_RSI + 0x24 + lVar15);
    *(int32_t *)(unaff_RSI + 0x5c + lVar15) = in_XMM3_Da;
    lVar18 = *(int64_t *)(unaff_RDI + 0x48);
    fVar19 = (float)func_0x0001802b6b90(lVar18 + 0xa68,uVar2);
    fStackX_20 = unaff_XMM15_Da + unaff_XMM12_Da;
    fVar28 = unaff_XMM13_Da +
             in_XMM5_Da * fVar19 * *(float *)(unaff_RSI + 0x40 + lVar15) + unaff_XMM10_Da;
    fVar23 = *(float *)(unaff_RSI + 0xc + lVar15);
    fVar22 = *(float *)(unaff_RSI + 0x1c + lVar15);
    fVar30 = unaff_XMM9_Da * fVar19 * *(float *)(unaff_RSI + 0x40 + lVar15) + unaff_XMM14_Da +
             unaff_XMM6_Da;
    fStack0000000000000038 = fVar28;
    fVar19 = (float)func_0x0001802b6b90(lVar18 + 0x340,uVar2);
    fVar19 = fVar19 * *(float *)(unaff_RSI + 0x48 + lVar15);
    if (unaff_XMM7_Da <= fVar19) {
      fVar19 = unaff_XMM7_Da;
    }
    fVar20 = (float)func_0x0001802b6b90(lVar18 + 0x3f8);
    fVar20 = fVar20 * *(float *)(lVar18 + 0x3f4);
    lVar10 = *(int64_t *)(lVar18 + 0x100);
    fVar31 = *(float *)(unaff_RSI + 4 + lVar15);
    fVar3 = *(float *)(unaff_RSI + 8 + lVar15);
    fVar4 = *(float *)(unaff_RSI + lVar15);
    fVar20 = fVar20 * fVar20;
    fVar20 = fVar20 * fVar20;
    fVar26 = fVar19 * fVar19 * fVar19 * fVar19;
    fVar19 = *(float *)(unaff_RSI + 0x10 + lVar15);
    fVar32 = unaff_XMM7_Da - fVar26 * fVar26;
    fVar26 = *(float *)(unaff_RSI + 0x14 + lVar15);
    fVar5 = *(float *)(unaff_RSI + 0x18 + lVar15);
    fVar27 = fVar3;
    fVar21 = fVar31;
    fVar6 = fVar4;
    if (lVar10 != 0) {
      fVar6 = *(float *)(lVar18 + 0xcc);
      fVar21 = (float)func_0x0001802b6b90(lVar18 + 0x118);
      fVar21 = fVar21 * *(float *)(unaff_RSI + 0x4c + lVar15);
      fVar27 = 1.0 - fVar6;
      iVar17 = *(int *)(lVar10 + 0xc0);
      iVar8 = *(int *)(lVar10 + 0xbc);
      iVar9 = *(int *)(lVar10 + 0xb8);
      lVar13 = (int64_t)
               (((((iVar17 + (int)((float)iVar17 *
                                  ((fVar3 - *(float *)(unaff_RDI + 0xe8)) *
                                   *(float *)(lVar18 + 0xe0) + *(float *)(lVar18 + 0xf0))) % iVar17)
                  % iVar17) * iVar8 +
                 (iVar8 + (int)((float)iVar8 *
                               ((fVar31 - *(float *)(unaff_RDI + 0xe4)) * *(float *)(lVar18 + 0xdc)
                               + *(float *)(lVar18 + 0xec))) % iVar8) % iVar8) * iVar9 +
                (iVar9 + (int)((float)iVar9 *
                              ((fVar4 - *(float *)(unaff_RDI + 0xe0)) * *(float *)(lVar18 + 0xd8) +
                              *(float *)(lVar18 + 0xe8))) % iVar9) % iVar9) * 3);
      lVar18 = *(int64_t *)(lVar10 + 0xb0);
      fVar29 = fVar21 * *(float *)(lVar18 + 8 + lVar13 * 4);
      fVar25 = fVar21 * *(float *)(lVar18 + lVar13 * 4);
      fVar21 = fVar21 * *(float *)(lVar18 + 4 + lVar13 * 4);
      fVar30 = fVar25 * fVar27 + fVar30;
      fStack0000000000000038 = fVar21 * fVar27 + fVar28;
      fStackX_20 = fVar29 * fVar27 + fStackX_20;
      fVar27 = ((fVar3 - fVar29 * in_stack_00000058._4_4_ * fVar32) - fVar3) * fVar6 + fVar3;
      fVar21 = ((fVar31 - fVar21 * in_stack_00000058._4_4_ * fVar32) - fVar31) * fVar6 + fVar31;
      unaff_XMM6_Da = in_stack_00000078;
      fVar6 = ((fVar4 - fVar25 * in_stack_00000058._4_4_ * fVar32) - fVar4) * fVar6 + fVar4;
    }
    *(float *)(unaff_RSI + 0x10 + lVar15) = fVar6;
    *(float *)(unaff_RSI + 0x14 + lVar15) = fVar21;
    *(float *)(unaff_RSI + 0x18 + lVar15) = fVar27;
    fVar30 = (fVar4 - fVar19) * fVar32 + fVar4 + fStack0000000000000064 * fVar30;
    *(float *)(unaff_RSI + lVar15) = fVar30;
    *(float *)(unaff_RSI + 4 + lVar15) =
         (fVar31 - fVar26) * fVar32 + fVar31 + fStack0000000000000064 * fStack0000000000000038;
    *(float *)(unaff_RSI + 8 + lVar15) =
         (fVar3 - fVar5) * fVar32 + fVar3 + fStack0000000000000064 * fStackX_20;
    fVar19 = *(float *)(unaff_RSI + 0xc + lVar15);
    *(float *)(unaff_RSI + 0x1c + lVar15) = fVar19;
    *(float *)(unaff_RSI + 0xc + lVar15) =
         (unaff_XMM7_Da - fVar20 * fVar20) * (fVar23 - fVar22) + fVar19;
    lVar18 = *(int64_t *)(unaff_RDI + 0x48);
    fVar22 = (float)func_0x0001802b6b90(lVar18 + 0x618,*(int32_t *)(unaff_RSI + 0x24 + lVar15));
    fVar23 = *(float *)(unaff_RSI + 0x28 + lVar15);
    if (*(int *)(lVar18 + 0x6c) == 0) {
      fVar22 = fVar22 * fVar23;
    }
    else {
      fVar22 = fVar22 + fVar23;
    }
    *(float *)(unaff_RSI + 0x2c + lVar15) = fVar22;
    *(float *)(unaff_RSI + 0x24 + lVar15) =
         in_stack_00000058._4_4_ / *(float *)(unaff_RSI + 0x20 + lVar15) +
         *(float *)(unaff_RSI + 0x24 + lVar15);
    fVar23 = *(float *)(unaff_RDI + 0x10);
    if (fVar30 <= *(float *)(unaff_RDI + 0x10)) {
      fVar23 = fVar30;
    }
    unaff_XMM7_Da = 1.0;
    *(float *)(unaff_RDI + 0x10) = fVar23;
    fVar23 = *(float *)(unaff_RSI + 4 + lVar15);
    if (*(float *)(unaff_RDI + 0x14) <= fVar23) {
      fVar23 = *(float *)(unaff_RDI + 0x14);
    }
    *(float *)(unaff_RDI + 0x14) = fVar23;
    fVar23 = *(float *)(unaff_RSI + 8 + lVar15);
    fVar22 = *(float *)(unaff_RDI + 0x18);
    if (fVar23 <= *(float *)(unaff_RDI + 0x18)) {
      fVar22 = fVar23;
    }
    *(float *)(unaff_RDI + 0x18) = fVar22;
    fVar23 = *(float *)(unaff_RSI + lVar15);
    if (*(float *)(unaff_RSI + lVar15) <= *(float *)(unaff_RDI + 0x20)) {
      fVar23 = *(float *)(unaff_RDI + 0x20);
    }
    *(float *)(unaff_RDI + 0x20) = fVar23;
    fVar23 = *(float *)(unaff_RSI + 4 + lVar15);
    if (fVar23 <= *(float *)(unaff_RDI + 0x24)) {
      fVar23 = *(float *)(unaff_RDI + 0x24);
    }
    *(float *)(unaff_RDI + 0x24) = fVar23;
    fVar23 = *(float *)(unaff_RSI + 8 + lVar15);
    fVar22 = *(float *)(unaff_RDI + 0x28);
    if (*(float *)(unaff_RDI + 0x28) <= fVar23) {
      fVar22 = fVar23;
    }
    *(float *)(unaff_RDI + 0x28) = fVar22;
    fVar23 = *(float *)(unaff_RSI + 0x2c + lVar15);
    if (fVar23 <= unaff_XMM11_Da) {
      fVar23 = unaff_XMM11_Da;
    }
    unaff_XMM11_Da = fVar23;
    if (1.0 < *(float *)(unaff_RSI + 0x24 + lVar15)) {
      sVar7 = *(short *)(unaff_RSI + 0x30 + lVar15);
      if (sVar7 != -1) {
        piVar1 = (int *)(*(int64_t *)(unaff_RDI + 0x130) + (int64_t)sVar7 * 0xc);
        *piVar1 = *piVar1 + -1;
      }
      in_stack_00000040 = (float)((int)in_stack_00000040 + -1);
      unaff_R12 = unaff_R12 + -1;
      lVar15 = lVar14 + -0x70;
      if (*(int64_t *)(unaff_RDI + 0xf0) != 0) {
        FUN_1802b0ad0(*(int64_t *)(unaff_RDI + 0xf0),
                      (int64_t)in_stack_00000050 * 0x70 + *unaff_R15);
        lVar18 = *(int64_t *)(unaff_RDI + 0xf0);
        lVar13 = *(int64_t *)(lVar18 + 0x38) - *(int64_t *)(lVar18 + 0x30);
        lVar10 = lVar13 >> 0x3f;
        if (lVar13 / 0x88 + lVar10 != lVar10) {
          FUN_1802b09d0(lVar18,*(int32_t *)(unaff_RSI + 0x58 + *unaff_R15));
        }
      }
      lVar18 = *unaff_R15;
      *(int32_t *)(unaff_RSI + lVar18) = *(int32_t *)(lVar15 + lVar18);
      *(int32_t *)(unaff_RSI + 4 + lVar18) = *(int32_t *)(lVar14 + -0x6c + lVar18);
      *(int32_t *)(unaff_RSI + 8 + lVar18) = *(int32_t *)(lVar14 + -0x68 + lVar18);
      *(int32_t *)(unaff_RSI + 0xc + lVar18) = *(int32_t *)(lVar14 + -100 + lVar18);
      *(int32_t *)(unaff_RSI + 0x10 + lVar18) = *(int32_t *)(lVar14 + -0x60 + lVar18);
      *(int32_t *)(unaff_RSI + 0x14 + lVar18) = *(int32_t *)(lVar14 + -0x5c + lVar18);
      *(int32_t *)(unaff_RSI + 0x18 + lVar18) = *(int32_t *)(lVar14 + -0x58 + lVar18);
      *(int32_t *)(unaff_RSI + 0x1c + lVar18) = *(int32_t *)(lVar14 + -0x54 + lVar18);
      *(int32_t *)(unaff_RSI + 0x20 + lVar18) = *(int32_t *)(lVar14 + -0x50 + lVar18);
      *(int32_t *)(unaff_RSI + 0x24 + lVar18) = *(int32_t *)(lVar14 + -0x4c + lVar18);
      *(int32_t *)(unaff_RSI + 0x28 + lVar18) = *(int32_t *)(lVar14 + -0x48 + lVar18);
      *(int32_t *)(unaff_RSI + 0x2c + lVar18) = *(int32_t *)(lVar14 + -0x44 + lVar18);
      *(int16_t *)(unaff_RSI + 0x30 + lVar18) = *(int16_t *)(lVar14 + -0x40 + lVar18);
      *(int16_t *)(unaff_RSI + 0x32 + lVar18) = *(int16_t *)(lVar14 + -0x3e + lVar18);
      *(int32_t *)(unaff_RSI + 0x34 + lVar18) = *(int32_t *)(lVar14 + -0x3c + lVar18);
      *(int32_t *)(unaff_RSI + 0x38 + lVar18) = *(int32_t *)(lVar14 + -0x38 + lVar18);
      *(int32_t *)(unaff_RSI + 0x3c + lVar18) = *(int32_t *)(lVar14 + -0x34 + lVar18);
      *(int32_t *)(unaff_RSI + 0x40 + lVar18) = *(int32_t *)(lVar14 + -0x30 + lVar18);
      *(int32_t *)(unaff_RSI + 0x44 + lVar18) = *(int32_t *)(lVar14 + -0x2c + lVar18);
      *(int32_t *)(unaff_RSI + 0x48 + lVar18) = *(int32_t *)(lVar14 + -0x28 + lVar18);
      *(int32_t *)(unaff_RSI + 0x4c + lVar18) = *(int32_t *)(lVar14 + -0x24 + lVar18);
      *(int16_t *)(unaff_RSI + 0x50 + lVar18) = *(int16_t *)(lVar14 + -0x20 + lVar18);
      *(int16_t *)(unaff_RSI + 0x52 + lVar18) = *(int16_t *)(lVar14 + -0x1e + lVar18);
      *(int8_t *)(unaff_RSI + 0x54 + lVar18) = *(int8_t *)(lVar14 + -0x1c + lVar18);
      *(int8_t *)(unaff_RSI + 0x55 + lVar18) = *(int8_t *)(lVar14 + -0x1b + lVar18);
      *(int8_t *)(unaff_RSI + 0x56 + lVar18) = *(int8_t *)(lVar14 + -0x1a + lVar18);
      *(int8_t *)(unaff_RSI + 0x57 + lVar18) = *(int8_t *)(lVar14 + -0x19 + lVar18);
      *(int32_t *)(unaff_RSI + 0x58 + lVar18) = *(int32_t *)(lVar14 + -0x18 + lVar18);
      *(int32_t *)(unaff_RSI + 0x5c + lVar18) = *(int32_t *)(lVar14 + -0x14 + lVar18);
      *(int32_t *)(unaff_RSI + 0x60 + lVar18) = *(int32_t *)(lVar14 + -0x10 + lVar18);
      *(int32_t *)(unaff_RSI + 100 + lVar18) = *(int32_t *)(lVar14 + -0xc + lVar18);
      *(int32_t *)(unaff_RSI + 0x68 + lVar18) = *(int32_t *)(lVar14 + -8 + lVar18);
      *(int32_t *)(unaff_RSI + 0x6c + lVar18) = *(int32_t *)(lVar14 + -4 + lVar18);
    }
    else {
      in_stack_00000050 = in_stack_00000050 + 1;
      unaff_R13 = unaff_R13 + 1;
      unaff_RSI = unaff_RSI + 0x70;
      lVar15 = lVar14;
    }
    iVar17 = (int)in_stack_00000040;
    unaff_XMM12_Da = unaff_RBP[-0x1c];
    unaff_XMM10_Da = unaff_RBP[-0x18];
    unaff_XMM13_Da = unaff_RBP[-0x14];
    unaff_XMM15_Da = unaff_RBP[-0x10];
    lVar14 = lVar15;
    in_XMM3_Da = uStack0000000000000060;
    in_XMM5_Da = in_stack_00000068._4_4_;
    unaff_XMM9_Da = in_stack_00000070;
  } while (unaff_R13 < unaff_R12);
  fVar31 = unaff_XMM11_Da * 0.5;
  fVar23 = *(float *)(unaff_RDI + 0x10) - fVar31;
  fVar22 = *(float *)(unaff_RDI + 0x14) - fVar31;
  fVar19 = *(float *)(unaff_RDI + 0x18) - fVar31;
  *(float *)(unaff_RDI + 0x10) = fVar23;
  *(float *)(unaff_RDI + 0x14) = fVar22;
  *(float *)(unaff_RDI + 0x18) = fVar19;
  fVar30 = fVar31 + *(float *)(unaff_RDI + 0x20);
  fVar28 = fVar31 + *(float *)(unaff_RDI + 0x24);
  fVar31 = fVar31 + *(float *)(unaff_RDI + 0x28);
  *(float *)(unaff_RDI + 0x20) = fVar30;
  *(float *)(unaff_RDI + 0x24) = fVar28;
  *(float *)(unaff_RDI + 0x28) = fVar31;
  if (*(char *)(unaff_RDI + 0xa1) != '\0') {
    unaff_RBP[-0xc] = fVar23;
    pfVar12 = unaff_RBP + -6;
    unaff_RBP[-4] = fVar23;
    lVar14 = 4;
    unaff_RBP[4] = fVar23;
    unaff_RBP[0xc] = fVar23;
    *(uint64_t *)(unaff_RDI + 0x10) = 0x4cbebc204cbebc20;
    *(uint64_t *)(unaff_RDI + 0x18) = 0x7f7fffff4cbebc20;
    *(int32_t *)(unaff_RDI + 0x40) = 0;
    unaff_RBP[-0xb] = fVar22;
    unaff_RBP[5] = fVar22;
    unaff_RBP[9] = fVar22;
    unaff_RBP[0x11] = fVar22;
    *(uint64_t *)(unaff_RDI + 0x30) = 0;
    *(uint64_t *)(unaff_RDI + 0x38) = 0x7f7fffff00000000;
    unaff_RBP[-10] = fVar19;
    unaff_RBP[-8] = fVar30;
    unaff_RBP[-7] = fVar28;
    unaff_RBP[-6] = fVar31;
    unaff_RBP[-3] = fVar28;
    unaff_RBP[-2] = fVar19;
    *unaff_RBP = fVar30;
    unaff_RBP[1] = fVar28;
    unaff_RBP[2] = fVar19;
    unaff_RBP[6] = fVar31;
    unaff_RBP[8] = fVar30;
    unaff_RBP[10] = fVar31;
    unaff_RBP[0xd] = fVar28;
    unaff_RBP[0xe] = fVar31;
    unaff_RBP[0x10] = fVar30;
    unaff_RBP[0x12] = fVar19;
    *(uint64_t *)(unaff_RDI + 0x20) = 0xccbebc20ccbebc20;
    *(uint64_t *)(unaff_RDI + 0x28) = 0x7f7fffffccbebc20;
    do {
      fVar23 = pfVar12[-6];
      fVar28 = *(float *)(unaff_RDI + 0xb4);
      fVar31 = *(float *)(unaff_RDI + 0xb8);
      fVar3 = *(float *)(unaff_RDI + 0xbc);
      fVar4 = *(float *)(unaff_RDI + 0xc4);
      fVar26 = *(float *)(unaff_RDI + 200);
      fVar5 = *(float *)(unaff_RDI + 0xcc);
      fVar22 = pfVar12[-5];
      fVar19 = pfVar12[-4];
      fVar6 = *(float *)(unaff_RDI + 0xd4);
      fVar27 = *(float *)(unaff_RDI + 0xd8);
      fVar21 = *(float *)(unaff_RDI + 0xdc);
      fVar20 = *(float *)(unaff_RDI + 0xe4);
      fVar32 = *(float *)(unaff_RDI + 0xe8);
      fVar25 = *(float *)(unaff_RDI + 0xec);
      fVar29 = *(float *)(unaff_RDI + 0xb0) * fVar23 + *(float *)(unaff_RDI + 0xc0) * fVar22 +
               *(float *)(unaff_RDI + 0xd0) * fVar19 + *(float *)(unaff_RDI + 0xe0);
      fVar30 = *(float *)(unaff_RDI + 0x20);
      pfVar12[-6] = fVar29;
      pfVar12[-5] = fVar28 * fVar23 + fVar4 * fVar22 + fVar6 * fVar19 + fVar20;
      pfVar12[-4] = fVar31 * fVar23 + fVar26 * fVar22 + fVar27 * fVar19 + fVar32;
      pfVar12[-3] = fVar3 * fVar23 + fVar5 * fVar22 + fVar21 * fVar19 + fVar25;
      in_stack_00000040 = fVar29;
      if (fVar29 < fVar30) {
        in_stack_00000040 = fVar30;
      }
      fVar23 = pfVar12[-5];
      fStack0000000000000044 = fVar23;
      if (fVar23 < *(float *)(unaff_RDI + 0x24)) {
        fStack0000000000000044 = *(float *)(unaff_RDI + 0x24);
      }
      fStack0000000000000030 = pfVar12[-4];
      fStack0000000000000048 = fStack0000000000000030;
      if (fStack0000000000000030 < *(float *)(unaff_RDI + 0x28)) {
        fStack0000000000000048 = *(float *)(unaff_RDI + 0x28);
      }
      *(uint64_t *)(unaff_RDI + 0x20) = CONCAT44(fStack0000000000000044,in_stack_00000040);
      *(uint64_t *)(unaff_RDI + 0x28) = CONCAT44(uStack000000000000004c,fStack0000000000000048);
      if (*(float *)(unaff_RDI + 0x10) < fVar29) {
        fVar29 = *(float *)(unaff_RDI + 0x10);
      }
      if (*(float *)(unaff_RDI + 0x14) < fVar23) {
        fVar23 = *(float *)(unaff_RDI + 0x14);
      }
      uStack0000000000000028 = CONCAT44(fVar23,fVar29);
      if (*(float *)(unaff_RDI + 0x18) < fStack0000000000000030) {
        fStack0000000000000030 = *(float *)(unaff_RDI + 0x18);
      }
      *(uint64_t *)(unaff_RDI + 0x10) = uStack0000000000000028;
      *(uint64_t *)(unaff_RDI + 0x18) = CONCAT44(uStack0000000000000034,fStack0000000000000030);
      fVar23 = pfVar12[-2];
      fVar28 = *(float *)(unaff_RDI + 0xb4);
      fVar31 = *(float *)(unaff_RDI + 0xb8);
      fVar3 = *(float *)(unaff_RDI + 0xbc);
      fVar4 = *(float *)(unaff_RDI + 0xc4);
      fVar26 = *(float *)(unaff_RDI + 200);
      fVar5 = *(float *)(unaff_RDI + 0xcc);
      fVar22 = pfVar12[-1];
      fVar19 = *pfVar12;
      fVar6 = *(float *)(unaff_RDI + 0xd4);
      fVar27 = *(float *)(unaff_RDI + 0xd8);
      fVar21 = *(float *)(unaff_RDI + 0xdc);
      fVar20 = *(float *)(unaff_RDI + 0xe4);
      fVar32 = *(float *)(unaff_RDI + 0xe8);
      fVar25 = *(float *)(unaff_RDI + 0xec);
      fVar29 = *(float *)(unaff_RDI + 0xb0) * fVar23 + *(float *)(unaff_RDI + 0xc0) * fVar22 +
               *(float *)(unaff_RDI + 0xd0) * fVar19 + *(float *)(unaff_RDI + 0xe0);
      fVar30 = *(float *)(unaff_RDI + 0x20);
      pfVar12[-2] = fVar29;
      pfVar12[-1] = fVar28 * fVar23 + fVar4 * fVar22 + fVar6 * fVar19 + fVar20;
      *pfVar12 = fVar31 * fVar23 + fVar26 * fVar22 + fVar27 * fVar19 + fVar32;
      pfVar12[1] = fVar3 * fVar23 + fVar5 * fVar22 + fVar21 * fVar19 + fVar25;
      in_stack_00000040 = fVar29;
      if (fVar29 < fVar30) {
        in_stack_00000040 = fVar30;
      }
      fVar23 = pfVar12[-1];
      fStack0000000000000044 = fVar23;
      if (fVar23 < *(float *)(unaff_RDI + 0x24)) {
        fStack0000000000000044 = *(float *)(unaff_RDI + 0x24);
      }
      fStack0000000000000030 = *pfVar12;
      fStack0000000000000048 = fStack0000000000000030;
      if (fStack0000000000000030 < *(float *)(unaff_RDI + 0x28)) {
        fStack0000000000000048 = *(float *)(unaff_RDI + 0x28);
      }
      *(uint64_t *)(unaff_RDI + 0x20) = CONCAT44(fStack0000000000000044,in_stack_00000040);
      *(uint64_t *)(unaff_RDI + 0x28) = CONCAT44(uStack000000000000004c,fStack0000000000000048);
      if (*(float *)(unaff_RDI + 0x10) < fVar29) {
        fVar29 = *(float *)(unaff_RDI + 0x10);
      }
      if (*(float *)(unaff_RDI + 0x14) < fVar23) {
        fVar23 = *(float *)(unaff_RDI + 0x14);
      }
      uStack0000000000000028 = CONCAT44(fVar23,fVar29);
      if (*(float *)(unaff_RDI + 0x18) < fStack0000000000000030) {
        fStack0000000000000030 = *(float *)(unaff_RDI + 0x18);
      }
      pfVar12 = pfVar12 + 8;
      *(uint64_t *)(unaff_RDI + 0x10) = uStack0000000000000028;
      *(uint64_t *)(unaff_RDI + 0x18) = CONCAT44(uStack0000000000000034,fStack0000000000000030);
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  uVar24 = FUN_1800b9f60(unaff_RDI + 0x10);
  uVar16 = (uint64_t)iVar17;
  uVar11 = (unaff_R15[1] - *unaff_R15) / 0x70;
  if (uVar11 < uVar16) {
    FUN_1802beaf0(uVar24,uVar16 - uVar11);
  }
  else {
    unaff_R15[1] = uVar16 * 0x70 + *unaff_R15;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x14) ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1802b874f(uint64_t param_1,uint64_t param_2,char param_3,uint64_t param_4,
void FUN_1802b874f(uint64_t param_1,uint64_t param_2,char param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                  uint64_t param_9)

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
  float *pfVar11;
  int64_t lVar12;
  uint64_t uVar13;
  float *unaff_RBP;
  int32_t unaff_ESI;
  int64_t unaff_RDI;
  uint64_t uVar14;
  int in_R10D;
  int64_t unaff_R13;
  int64_t *unaff_R15;
  float fVar15;
  int32_t uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float unaff_XMM11_Da;
  float fVar21;
  
  fVar21 = unaff_XMM11_Da * 0.5;
  fVar15 = *(float *)(unaff_RDI + 0x10) - fVar21;
  fVar17 = *(float *)(unaff_RDI + 0x14) - fVar21;
  fVar18 = *(float *)(unaff_RDI + 0x18) - fVar21;
  *(float *)(unaff_RDI + 0x10) = fVar15;
  *(float *)(unaff_RDI + 0x14) = fVar17;
  *(float *)(unaff_RDI + 0x18) = fVar18;
  fVar19 = fVar21 + *(float *)(unaff_RDI + 0x20);
  fVar20 = fVar21 + *(float *)(unaff_RDI + 0x24);
  fVar21 = fVar21 + *(float *)(unaff_RDI + 0x28);
  *(float *)(unaff_RDI + 0x20) = fVar19;
  *(float *)(unaff_RDI + 0x24) = fVar20;
  *(float *)(unaff_RDI + 0x28) = fVar21;
  if (param_3 != '\0') {
    unaff_RBP[-0xc] = fVar15;
    pfVar11 = unaff_RBP + -6;
    unaff_RBP[-4] = fVar15;
    lVar12 = 4;
    unaff_RBP[4] = fVar15;
    unaff_RBP[0xc] = fVar15;
    *(uint64_t *)(unaff_RDI + 0x10) = 0x4cbebc204cbebc20;
    *(uint64_t *)(unaff_RDI + 0x18) = 0x7f7fffff4cbebc20;
    *(int32_t *)(unaff_RDI + 0x40) = unaff_ESI;
    unaff_RBP[-0xb] = fVar17;
    unaff_RBP[5] = fVar17;
    unaff_RBP[9] = fVar17;
    unaff_RBP[0x11] = fVar17;
    *(uint64_t *)(unaff_RDI + 0x30) = 0;
    *(uint64_t *)(unaff_RDI + 0x38) = 0x7f7fffff00000000;
    unaff_RBP[-10] = fVar18;
    unaff_RBP[-8] = fVar19;
    unaff_RBP[-7] = fVar20;
    unaff_RBP[-6] = fVar21;
    unaff_RBP[-3] = fVar20;
    unaff_RBP[-2] = fVar18;
    *unaff_RBP = fVar19;
    unaff_RBP[1] = fVar20;
    unaff_RBP[2] = fVar18;
    unaff_RBP[6] = fVar21;
    unaff_RBP[8] = fVar19;
    unaff_RBP[10] = fVar21;
    unaff_RBP[0xd] = fVar20;
    unaff_RBP[0xe] = fVar21;
    unaff_RBP[0x10] = fVar19;
    unaff_RBP[0x12] = fVar18;
    *(uint64_t *)(unaff_RDI + 0x20) = 0xccbebc20ccbebc20;
    *(uint64_t *)(unaff_RDI + 0x28) = 0x7f7fffffccbebc20;
    do {
      fVar15 = pfVar11[-6];
      fVar20 = *(float *)(unaff_RDI + 0xb4);
      fVar21 = *(float *)(unaff_RDI + 0xb8);
      fVar1 = *(float *)(unaff_RDI + 0xbc);
      fVar2 = *(float *)(unaff_RDI + 0xc4);
      fVar3 = *(float *)(unaff_RDI + 200);
      fVar4 = *(float *)(unaff_RDI + 0xcc);
      fVar17 = pfVar11[-5];
      fVar18 = pfVar11[-4];
      fVar5 = *(float *)(unaff_RDI + 0xd4);
      fVar6 = *(float *)(unaff_RDI + 0xd8);
      fVar7 = *(float *)(unaff_RDI + 0xdc);
      fVar8 = *(float *)(unaff_RDI + 0xe4);
      fVar9 = *(float *)(unaff_RDI + 0xe8);
      fVar10 = *(float *)(unaff_RDI + 0xec);
      param_5._0_4_ =
           *(float *)(unaff_RDI + 0xb0) * fVar15 + *(float *)(unaff_RDI + 0xc0) * fVar17 +
           *(float *)(unaff_RDI + 0xd0) * fVar18 + *(float *)(unaff_RDI + 0xe0);
      fVar19 = *(float *)(unaff_RDI + 0x20);
      pfVar11[-6] = (float)param_5;
      pfVar11[-5] = fVar20 * fVar15 + fVar2 * fVar17 + fVar5 * fVar18 + fVar8;
      pfVar11[-4] = fVar21 * fVar15 + fVar3 * fVar17 + fVar6 * fVar18 + fVar9;
      pfVar11[-3] = fVar1 * fVar15 + fVar4 * fVar17 + fVar7 * fVar18 + fVar10;
      param_8._0_4_ = (float)param_5;
      if ((float)param_5 < fVar19) {
        param_8._0_4_ = fVar19;
      }
      param_5._4_4_ = pfVar11[-5];
      param_8._4_4_ = param_5._4_4_;
      if (param_5._4_4_ < *(float *)(unaff_RDI + 0x24)) {
        param_8._4_4_ = *(float *)(unaff_RDI + 0x24);
      }
      param_6._0_4_ = pfVar11[-4];
      param_9._0_4_ = (float)param_6;
      if ((float)param_6 < *(float *)(unaff_RDI + 0x28)) {
        param_9._0_4_ = *(float *)(unaff_RDI + 0x28);
      }
      *(uint64_t *)(unaff_RDI + 0x20) = CONCAT44(param_8._4_4_,(float)param_8);
      *(uint64_t *)(unaff_RDI + 0x28) = CONCAT44(param_9._4_4_,(float)param_9);
      if (*(float *)(unaff_RDI + 0x10) < (float)param_5) {
        param_5._0_4_ = *(float *)(unaff_RDI + 0x10);
      }
      if (*(float *)(unaff_RDI + 0x14) < param_5._4_4_) {
        param_5._4_4_ = *(float *)(unaff_RDI + 0x14);
      }
      if (*(float *)(unaff_RDI + 0x18) < (float)param_6) {
        param_6._0_4_ = *(float *)(unaff_RDI + 0x18);
      }
      *(uint64_t *)(unaff_RDI + 0x10) = CONCAT44(param_5._4_4_,(float)param_5);
      *(uint64_t *)(unaff_RDI + 0x18) = CONCAT44(param_6._4_4_,(float)param_6);
      fVar15 = pfVar11[-2];
      fVar20 = *(float *)(unaff_RDI + 0xb4);
      fVar21 = *(float *)(unaff_RDI + 0xb8);
      fVar1 = *(float *)(unaff_RDI + 0xbc);
      fVar2 = *(float *)(unaff_RDI + 0xc4);
      fVar3 = *(float *)(unaff_RDI + 200);
      fVar4 = *(float *)(unaff_RDI + 0xcc);
      fVar17 = pfVar11[-1];
      fVar18 = *pfVar11;
      fVar5 = *(float *)(unaff_RDI + 0xd4);
      fVar6 = *(float *)(unaff_RDI + 0xd8);
      fVar7 = *(float *)(unaff_RDI + 0xdc);
      fVar8 = *(float *)(unaff_RDI + 0xe4);
      fVar9 = *(float *)(unaff_RDI + 0xe8);
      fVar10 = *(float *)(unaff_RDI + 0xec);
      param_5._0_4_ =
           *(float *)(unaff_RDI + 0xb0) * fVar15 + *(float *)(unaff_RDI + 0xc0) * fVar17 +
           *(float *)(unaff_RDI + 0xd0) * fVar18 + *(float *)(unaff_RDI + 0xe0);
      fVar19 = *(float *)(unaff_RDI + 0x20);
      pfVar11[-2] = (float)param_5;
      pfVar11[-1] = fVar20 * fVar15 + fVar2 * fVar17 + fVar5 * fVar18 + fVar8;
      *pfVar11 = fVar21 * fVar15 + fVar3 * fVar17 + fVar6 * fVar18 + fVar9;
      pfVar11[1] = fVar1 * fVar15 + fVar4 * fVar17 + fVar7 * fVar18 + fVar10;
      param_8._0_4_ = (float)param_5;
      if ((float)param_5 < fVar19) {
        param_8._0_4_ = fVar19;
      }
      param_5._4_4_ = pfVar11[-1];
      param_8._4_4_ = param_5._4_4_;
      if (param_5._4_4_ < *(float *)(unaff_RDI + 0x24)) {
        param_8._4_4_ = *(float *)(unaff_RDI + 0x24);
      }
      param_6._0_4_ = *pfVar11;
      param_9._0_4_ = (float)param_6;
      if ((float)param_6 < *(float *)(unaff_RDI + 0x28)) {
        param_9._0_4_ = *(float *)(unaff_RDI + 0x28);
      }
      *(uint64_t *)(unaff_RDI + 0x20) = CONCAT44(param_8._4_4_,(float)param_8);
      *(uint64_t *)(unaff_RDI + 0x28) = CONCAT44(param_9._4_4_,(float)param_9);
      if (*(float *)(unaff_RDI + 0x10) < (float)param_5) {
        param_5._0_4_ = *(float *)(unaff_RDI + 0x10);
      }
      if (*(float *)(unaff_RDI + 0x14) < param_5._4_4_) {
        param_5._4_4_ = *(float *)(unaff_RDI + 0x14);
      }
      if (*(float *)(unaff_RDI + 0x18) < (float)param_6) {
        param_6._0_4_ = *(float *)(unaff_RDI + 0x18);
      }
      pfVar11 = pfVar11 + 8;
      *(float *)(unaff_RDI + 0x10) = (float)param_5;
      *(float *)(unaff_RDI + 0x14) = param_5._4_4_;
      *(float *)(unaff_RDI + 0x18) = (float)param_6;
      *(int32_t *)(unaff_RDI + 0x1c) = param_6._4_4_;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  uVar16 = FUN_1800b9f60(unaff_RDI + 0x10);
  lVar12 = SUB168(SEXT816(unaff_R13) * SEXT816(unaff_R15[1] - *unaff_R15),8);
  uVar14 = (uint64_t)in_R10D;
  uVar13 = (lVar12 >> 5) - (lVar12 >> 0x3f);
  if (uVar13 < uVar14) {
    FUN_1802beaf0(uVar16,uVar14 - uVar13);
  }
  else {
    unaff_R15[1] = uVar14 * 0x70 + *unaff_R15;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x14) ^ (uint64_t)&stack0x00000000);
}






