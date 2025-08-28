#include "TaleWorlds.Native.Split.h"

// 03_rendering_part567.c - 1 个函数

// 函数: void FUN_18057a953(uint64_t param_1,longlong param_2)
void FUN_18057a953(uint64_t param_1,longlong param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  float *pfVar13;
  longlong lVar14;
  longlong unaff_RBX;
  float *unaff_RBP;
  char unaff_R13B;
  longlong unaff_R14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int8_t auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  int32_t uStack000000000000003c;
  float in_stack_00000040;
  int in_stack_00000048;
  float in_stack_00000050;
  float in_stack_00000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  float fStack000000000000006c;
  float in_stack_00000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  float fStack000000000000007c;
  
  *(int8_t *)(unaff_RBX + 0x108) = 0;
  lVar14 = *(longlong *)(param_2 + 0x10);
  pfVar13 = (float *)(lVar14 + 0x70);
  fVar15 = *(float *)(lVar14 + 0x78) * *(float *)(lVar14 + 0x78);
  pfVar12 = (float *)FUN_180535610(pfVar13,fVar15,
                                   SQRT(*pfVar13 * *pfVar13 +
                                        *(float *)(lVar14 + 0x74) * *(float *)(lVar14 + 0x74) +
                                        fVar15));
  uVar5 = *(uint64_t *)(pfVar13 + 0xc);
  uVar6 = *(uint64_t *)(pfVar13 + 0xe);
  in_stack_00000040 = pfVar12[4];
  fStack0000000000000074 = pfVar12[5];
  in_stack_00000078 = pfVar12[6];
  fStack000000000000007c = pfVar12[7];
  fVar17 = pfVar12[8];
  fVar23 = pfVar12[9];
  fVar31 = pfVar12[10];
  fVar25 = pfVar12[0xb];
  in_stack_00000060 = *pfVar12;
  fStack0000000000000064 = pfVar12[1];
  in_stack_00000068 = pfVar12[2];
  fStack000000000000006c = pfVar12[3];
  *(uint64_t *)(unaff_RBP + -0x1c) = uVar5;
  *(uint64_t *)(unaff_RBP + -0x1a) = uVar6;
  *(uint64_t *)(unaff_RBP + -0x10) = uVar5;
  *(uint64_t *)(unaff_RBP + -0xe) = uVar6;
  unaff_RBP[-0x20] = fVar17;
  unaff_RBP[-0x1f] = fVar23;
  unaff_RBP[-0x1e] = fVar31;
  unaff_RBP[-0x1d] = fVar25;
  fVar15 = unaff_RBP[-0x1f];
  fVar27 = unaff_RBP[-0x20];
  fVar20 = in_stack_00000040 * in_stack_00000040 + fStack0000000000000074 * fStack0000000000000074 +
           in_stack_00000078 * in_stack_00000078;
  unaff_RBP[-8] = in_stack_00000060;
  unaff_RBP[-7] = fStack0000000000000064;
  unaff_RBP[-6] = in_stack_00000068;
  unaff_RBP[-5] = fStack000000000000006c;
  unaff_RBP[-0x14] = fVar17;
  unaff_RBP[-0x13] = fVar23;
  unaff_RBP[-0x12] = fVar31;
  unaff_RBP[-0x11] = fVar25;
  if ((fVar20 <= 0.98010004) || (1.0201 <= fVar20)) {
LAB_18057aad4:
    fVar25 = unaff_RBP[-0x1d];
    auVar19 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
    fVar17 = auVar19._0_4_;
    fVar23 = fVar17 * 0.5 * (3.0 - fVar20 * fVar17 * fVar17);
    in_stack_00000040 = in_stack_00000040 * fVar23;
    fVar17 = fVar27 * fVar27 + fVar15 * fVar15 + fVar31 * fVar31;
    fStack0000000000000074 = fStack0000000000000074 * fVar23;
    in_stack_00000078 = in_stack_00000078 * fVar23;
    auVar19 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
    fVar23 = auVar19._0_4_;
    fVar28 = unaff_RBP[-8];
    fVar29 = unaff_RBP[-7];
    fVar30 = unaff_RBP[-6];
    fVar22 = unaff_RBP[-5];
    fVar20 = fVar23 * 0.5 * (3.0 - fVar17 * fVar23 * fVar23);
    fVar17 = fVar27 * fVar20;
    fVar23 = fVar15 * fVar20;
    fVar31 = fVar31 * fVar20;
    unaff_RBP[-0x14] = fVar17;
    unaff_RBP[-0x13] = fVar23;
    unaff_RBP[-0x12] = fVar31;
    unaff_RBP[-0x11] = fVar25;
    unaff_RBP[-0x20] = fVar17;
    unaff_RBP[-0x1f] = fVar23;
    unaff_RBP[-0x1e] = fVar31;
    unaff_RBP[-0x1d] = fVar25;
    fVar15 = fVar23;
    fVar27 = fVar17;
  }
  else {
    fVar16 = fVar27 * fVar27 + fVar15 * fVar15 + fVar31 * fVar31;
    if ((fVar16 <= 0.98010004) ||
       (fVar28 = in_stack_00000060, fVar29 = fStack0000000000000064, fVar30 = in_stack_00000068,
       fVar22 = fStack000000000000006c, 1.0201 <= fVar16)) goto LAB_18057aad4;
  }
  in_stack_00000070 = in_stack_00000040;
  if (*(float *)(unaff_RBX + 0x68) == -1e+30) {
    uVar5 = *(uint64_t *)(pfVar13 + 0xc);
    uVar6 = *(uint64_t *)(pfVar13 + 0xe);
    *(float *)(unaff_RBX + 0x98) = fVar28;
    *(float *)(unaff_RBX + 0x9c) = fVar29;
    *(float *)(unaff_RBX + 0xa0) = fVar30;
    *(float *)(unaff_RBX + 0xa4) = fVar22;
    *(float *)(unaff_RBX + 200) = fVar28;
    *(float *)(unaff_RBX + 0xcc) = fVar29;
    *(float *)(unaff_RBX + 0xd0) = fVar30;
    *(float *)(unaff_RBX + 0xd4) = fVar22;
    *(float *)(unaff_RBX + 0xa8) = in_stack_00000040;
    *(float *)(unaff_RBX + 0xac) = fStack0000000000000074;
    *(float *)(unaff_RBX + 0xb0) = in_stack_00000078;
    *(float *)(unaff_RBX + 0xb4) = fStack000000000000007c;
    *(float *)(unaff_RBX + 0xd8) = in_stack_00000040;
    *(float *)(unaff_RBX + 0xdc) = fStack0000000000000074;
    *(float *)(unaff_RBX + 0xe0) = in_stack_00000078;
    *(float *)(unaff_RBX + 0xe4) = fStack000000000000007c;
    *(uint64_t *)(unaff_RBX + 0x68) = uVar5;
    *(uint64_t *)(unaff_RBX + 0x70) = uVar6;
    *(float *)(unaff_RBX + 0xb8) = fVar17;
    *(float *)(unaff_RBX + 0xbc) = fVar23;
    *(float *)(unaff_RBX + 0xc0) = fVar31;
    *(float *)(unaff_RBX + 0xc4) = fVar25;
    *(float *)(unaff_RBX + 0xe8) = fVar17;
    *(float *)(unaff_RBX + 0xec) = fVar23;
    *(float *)(unaff_RBX + 0xf0) = fVar31;
    *(float *)(unaff_RBX + 0xf4) = fVar25;
    fVar20 = fVar31;
    goto LAB_18057b795;
  }
  if (*(int *)(unaff_RBX + 0x104) == 0) {
    fStack0000000000000030 = *(float *)(unaff_RBX + 200);
    fStack0000000000000034 = *(float *)(unaff_RBX + 0xcc);
    fStack0000000000000038 = *(float *)(unaff_RBX + 0xd0);
    uStack000000000000003c = *(int32_t *)(unaff_RBX + 0xd4);
  }
  else if (*(int *)(unaff_RBX + 0x104) == 1) {
    fStack0000000000000030 = *(float *)(unaff_RBX + 0xd8);
    fStack0000000000000034 = *(float *)(unaff_RBX + 0xdc);
    fStack0000000000000038 = *(float *)(unaff_RBX + 0xe0);
    uStack000000000000003c = *(int32_t *)(unaff_RBX + 0xe4);
  }
  else {
    fStack0000000000000030 = *(float *)(unaff_RBX + 0xe8);
    fStack0000000000000034 = *(float *)(unaff_RBX + 0xec);
    fStack0000000000000038 = *(float *)(unaff_RBX + 0xf0);
    uStack000000000000003c = *(int32_t *)(unaff_RBX + 0xf4);
  }
  FUN_1801c1720(unaff_RBX + 0x98,unaff_RBP + -0x14);
  FUN_1801c1720(&stack0x00000060,unaff_RBP + -0x10);
  fVar15 = unaff_RBP[-0xe] - unaff_RBP[-0x12];
  if (fVar15 <= 3.1415927) {
    if (fVar15 < -3.1415927) {
      fVar15 = fVar15 + 6.2831855;
    }
  }
  else {
    fVar15 = fVar15 + -6.2831855;
  }
  fVar27 = *(float *)(unaff_RBX + 0xf8);
  lVar14 = *(longlong *)(*(longlong *)(unaff_R14 + 0x10) + 0x168);
  fVar25 = unaff_RBP[-0x1c] - *(float *)(lVar14 + 0xa0);
  fVar16 = unaff_RBP[-0x1b] - *(float *)(lVar14 + 0xa4);
  fVar17 = *(float *)(unaff_RBX + 0x68);
  fStack0000000000000038 =
       (fStack0000000000000038 * fVar27 + *(float *)(unaff_RBX + 0x70)) - unaff_RBP[-0x1a];
  fVar23 = fVar25 * fVar25 + fVar16 * fVar16;
  iVar1 = *(int *)(unaff_RBX + 0x104);
  fVar23 = (float)(fVar23 <= 1.1754944e-38) * 1.1754944e-38 + fVar23;
  auVar19 = rsqrtss(ZEXT416((uint)fVar23),ZEXT416((uint)fVar23));
  fVar31 = auVar19._0_4_;
  fVar20 = fVar31 * 0.5 * (3.0 - fVar23 * fVar31 * fVar31);
  fVar23 = *(float *)(unaff_RBX + 0xfc);
  fVar31 = *(float *)(unaff_RBX + 0x6c);
  uVar5 = *(uint64_t *)(unaff_RBX + 0xe0);
  uVar6 = *(uint64_t *)(unaff_RBX + 200);
  uVar7 = *(uint64_t *)(unaff_RBX + 0xd0);
  *(uint64_t *)(unaff_RBP + 0x10) = *(uint64_t *)(unaff_RBX + 0xd8);
  *(uint64_t *)(unaff_RBP + 0x12) = uVar5;
  fStack0000000000000030 =
       (fStack0000000000000030 * fVar27 + fVar17 +
       fVar20 * fVar25 * ABS(fVar15) * 0.2 * fVar23 * (1.0 / fVar27)) - unaff_RBP[-0x1c];
  fStack0000000000000034 =
       (fStack0000000000000034 * fVar27 + fVar31 +
       fVar20 * fVar16 * ABS(fVar15) * 0.2 * fVar23 * (1.0 / fVar27)) - unaff_RBP[-0x1b];
  *(uint64_t *)(unaff_RBP + 0xc) = uVar6;
  *(uint64_t *)(unaff_RBP + 0xe) = uVar7;
  fVar15 = *(float *)(unaff_RBX + 0xec);
  fVar27 = *(float *)(unaff_RBX + 0xf0);
  fVar17 = *(float *)(unaff_RBX + 0xf4);
  uStack000000000000003c = 0x7f7fffff;
  unaff_RBP[0x14] = *(float *)(unaff_RBX + 0xe8);
  unaff_RBP[0x15] = fVar15;
  unaff_RBP[0x16] = fVar27;
  unaff_RBP[0x17] = fVar17;
  if (iVar1 == 0) {
    unaff_RBP[0xc] = fStack0000000000000030;
    unaff_RBP[0xd] = fStack0000000000000034;
    unaff_RBP[0xe] = fStack0000000000000038;
    unaff_RBP[0xf] = 3.4028235e+38;
    fVar15 = fStack0000000000000030 * fStack0000000000000030 +
             fStack0000000000000034 * fStack0000000000000034 +
             fStack0000000000000038 * fStack0000000000000038;
    if (fVar15 <= 1e-09) {
      fVar15 = 0.0;
      fVar17 = 0.0;
      fVar27 = 1.0;
    }
    else {
      fVar15 = 1.0 / SQRT(fVar15);
      fVar17 = fStack0000000000000030 * fVar15;
      fVar27 = unaff_RBP[0xd] * fVar15;
      fVar15 = unaff_RBP[0xe] * fVar15;
    }
    fStack0000000000000030 = unaff_RBP[0x15] * fVar15 - unaff_RBP[0x16] * fVar27;
    unaff_RBP[0xe] = fVar15;
    unaff_RBP[0xd] = fVar27;
    fStack0000000000000034 = unaff_RBP[0x16] * fVar17 - unaff_RBP[0x14] * fVar15;
    unaff_RBP[0xc] = fVar17;
    fStack0000000000000038 = unaff_RBP[0x14] * fVar27 - unaff_RBP[0x15] * fVar17;
    uStack000000000000003c = 0x7f7fffff;
    unaff_RBP[0x10] = fStack0000000000000030;
    unaff_RBP[0x11] = fStack0000000000000034;
    unaff_RBP[0x12] = fStack0000000000000038;
    unaff_RBP[0x13] = 3.4028235e+38;
    if (1e-07 <= fStack0000000000000034 * fStack0000000000000034 +
                 fStack0000000000000030 * fStack0000000000000030 +
                 fStack0000000000000038 * fStack0000000000000038) {
      func_0x00018023a1e0(unaff_RBP + 0x10);
      fStack0000000000000034 = unaff_RBP[0x10] * unaff_RBP[0xe] - unaff_RBP[0x12] * unaff_RBP[0xc];
      fStack0000000000000030 = unaff_RBP[0x12] * unaff_RBP[0xd] - unaff_RBP[0x11] * unaff_RBP[0xe];
      fStack0000000000000038 = unaff_RBP[0x11] * unaff_RBP[0xc] - unaff_RBP[0x10] * unaff_RBP[0xd];
      unaff_RBP[0x14] = fStack0000000000000030;
      unaff_RBP[0x15] = fStack0000000000000034;
      unaff_RBP[0x16] = fStack0000000000000038;
      unaff_RBP[0x17] = 3.4028235e+38;
      fVar27 = fStack0000000000000034 * fStack0000000000000034 +
               fStack0000000000000030 * fStack0000000000000030 +
               fStack0000000000000038 * fStack0000000000000038;
      auVar19 = rsqrtss(ZEXT416((uint)fVar27),ZEXT416((uint)fVar27));
      fVar15 = auVar19._0_4_;
      fVar15 = fVar15 * 0.5 * (3.0 - fVar27 * fVar15 * fVar15);
      unaff_RBP[0x15] = unaff_RBP[0x15] * fVar15;
      unaff_RBP[0x14] = fVar15 * fStack0000000000000030;
      unaff_RBP[0x16] = unaff_RBP[0x16] * fVar15;
    }
    else {
      fStack0000000000000030 =
           *(float *)(unaff_RBX + 0xe0) * fVar27 - *(float *)(unaff_RBX + 0xdc) * fVar15;
      fStack0000000000000034 =
           *(float *)(unaff_RBX + 0xd8) * fVar15 - *(float *)(unaff_RBX + 0xe0) * fVar17;
      fStack0000000000000038 =
           *(float *)(unaff_RBX + 0xdc) * fVar17 - *(float *)(unaff_RBX + 0xd8) * fVar27;
      uStack000000000000003c = 0x7f7fffff;
      unaff_RBP[0x14] = fStack0000000000000030;
      unaff_RBP[0x15] = fStack0000000000000034;
      unaff_RBP[0x16] = fStack0000000000000038;
      unaff_RBP[0x17] = 3.4028235e+38;
      func_0x00018023a1e0(unaff_RBP + 0x14);
      fStack0000000000000030 = unaff_RBP[0x15] * unaff_RBP[0xe] - unaff_RBP[0x16] * unaff_RBP[0xd];
      fStack0000000000000038 = unaff_RBP[0x14] * unaff_RBP[0xd] - unaff_RBP[0x15] * unaff_RBP[0xc];
      fStack0000000000000034 = unaff_RBP[0x16] * unaff_RBP[0xc] - unaff_RBP[0x14] * unaff_RBP[0xe];
      unaff_RBP[0x10] = fStack0000000000000030;
      unaff_RBP[0x11] = fStack0000000000000034;
      unaff_RBP[0x12] = fStack0000000000000038;
      unaff_RBP[0x13] = 3.4028235e+38;
      fVar15 = fStack0000000000000030 * fStack0000000000000030 +
               fStack0000000000000034 * fStack0000000000000034 +
               fStack0000000000000038 * fStack0000000000000038;
      auVar19 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
      fVar27 = auVar19._0_4_;
      fVar15 = fVar27 * 0.5 * (3.0 - fVar15 * fVar27 * fVar27);
      unaff_RBP[0x10] = fStack0000000000000030 * fVar15;
      unaff_RBP[0x11] = unaff_RBP[0x11] * fVar15;
      unaff_RBP[0x12] = unaff_RBP[0x12] * fVar15;
    }
  }
  else if (iVar1 == 1) {
    unaff_RBP[0x10] = fStack0000000000000030;
    unaff_RBP[0x11] = fStack0000000000000034;
    unaff_RBP[0x12] = fStack0000000000000038;
    unaff_RBP[0x13] = 3.4028235e+38;
    func_0x00018023a1e0(unaff_RBP + 0x10);
    fVar15 = unaff_RBP[0x12];
    fVar27 = unaff_RBP[0x11];
    fVar17 = unaff_RBP[0x10];
    fStack0000000000000030 = fVar15 * unaff_RBP[0xd] - fVar27 * unaff_RBP[0xe];
    fStack0000000000000034 = fVar17 * unaff_RBP[0xe] - fVar15 * unaff_RBP[0xc];
    fStack0000000000000038 = fVar27 * unaff_RBP[0xc] - fVar17 * unaff_RBP[0xd];
    uStack000000000000003c = 0x7f7fffff;
    unaff_RBP[0x14] = fStack0000000000000030;
    unaff_RBP[0x15] = fStack0000000000000034;
    unaff_RBP[0x16] = fStack0000000000000038;
    unaff_RBP[0x17] = 3.4028235e+38;
    if (1e-07 <= fStack0000000000000030 * fStack0000000000000030 +
                 fStack0000000000000034 * fStack0000000000000034 +
                 fStack0000000000000038 * fStack0000000000000038) {
      func_0x00018023a1e0(unaff_RBP + 0x14);
      fStack0000000000000030 = unaff_RBP[0x11] * unaff_RBP[0x16] - unaff_RBP[0x12] * unaff_RBP[0x15]
      ;
      fStack0000000000000034 = unaff_RBP[0x12] * unaff_RBP[0x14] - unaff_RBP[0x10] * unaff_RBP[0x16]
      ;
      fStack0000000000000038 = unaff_RBP[0x10] * unaff_RBP[0x15] - unaff_RBP[0x11] * unaff_RBP[0x14]
      ;
      unaff_RBP[0xc] = fStack0000000000000030;
      unaff_RBP[0xd] = fStack0000000000000034;
      unaff_RBP[0xe] = fStack0000000000000038;
      unaff_RBP[0xf] = 3.4028235e+38;
      fVar15 = fStack0000000000000034 * fStack0000000000000034 +
               fStack0000000000000030 * fStack0000000000000030 +
               fStack0000000000000038 * fStack0000000000000038;
LAB_18057b6d9:
      auVar19 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
      fVar27 = auVar19._0_4_;
      fVar15 = fVar27 * 0.5 * (3.0 - fVar15 * fVar27 * fVar27);
      unaff_RBP[0xd] = unaff_RBP[0xd] * fVar15;
      unaff_RBP[0xc] = fVar15 * fStack0000000000000030;
      unaff_RBP[0xe] = unaff_RBP[0xe] * fVar15;
    }
    else {
      fStack0000000000000030 =
           *(float *)(unaff_RBX + 0xf0) * fVar27 - *(float *)(unaff_RBX + 0xec) * fVar15;
      fStack0000000000000034 =
           *(float *)(unaff_RBX + 0xe8) * fVar15 - *(float *)(unaff_RBX + 0xf0) * fVar17;
      fStack0000000000000038 =
           *(float *)(unaff_RBX + 0xec) * fVar17 - *(float *)(unaff_RBX + 0xe8) * fVar27;
      uStack000000000000003c = 0x7f7fffff;
      unaff_RBP[0xc] = fStack0000000000000030;
      unaff_RBP[0xd] = fStack0000000000000034;
      unaff_RBP[0xe] = fStack0000000000000038;
      unaff_RBP[0xf] = 3.4028235e+38;
      func_0x00018023a1e0(unaff_RBP + 0xc);
      fStack0000000000000034 = unaff_RBP[0x10] * unaff_RBP[0xe] - unaff_RBP[0x12] * unaff_RBP[0xc];
      fStack0000000000000030 = unaff_RBP[0x12] * unaff_RBP[0xd] - unaff_RBP[0x11] * unaff_RBP[0xe];
      fStack0000000000000038 = unaff_RBP[0x11] * unaff_RBP[0xc] - unaff_RBP[0x10] * unaff_RBP[0xd];
      unaff_RBP[0x14] = fStack0000000000000030;
      unaff_RBP[0x15] = fStack0000000000000034;
      unaff_RBP[0x16] = fStack0000000000000038;
      unaff_RBP[0x17] = 3.4028235e+38;
      fVar27 = fStack0000000000000034 * fStack0000000000000034 +
               fStack0000000000000030 * fStack0000000000000030 +
               fStack0000000000000038 * fStack0000000000000038;
      auVar19 = rsqrtss(ZEXT416((uint)fVar27),ZEXT416((uint)fVar27));
      fVar15 = auVar19._0_4_;
      fVar15 = fVar15 * 0.5 * (3.0 - fVar27 * fVar15 * fVar15);
      unaff_RBP[0x15] = unaff_RBP[0x15] * fVar15;
      unaff_RBP[0x14] = fVar15 * fStack0000000000000030;
      unaff_RBP[0x16] = unaff_RBP[0x16] * fVar15;
    }
  }
  else {
    unaff_RBP[0x14] = fStack0000000000000030;
    unaff_RBP[0x15] = fStack0000000000000034;
    unaff_RBP[0x16] = fStack0000000000000038;
    unaff_RBP[0x17] = 3.4028235e+38;
    func_0x00018023a1e0(unaff_RBP + 0x14);
    fVar15 = unaff_RBP[0x15];
    fVar27 = unaff_RBP[0x16];
    fVar17 = unaff_RBP[0x14];
    fStack0000000000000030 = fVar15 * unaff_RBP[0xe] - fVar27 * unaff_RBP[0xd];
    fStack0000000000000034 = fVar27 * unaff_RBP[0xc] - fVar17 * unaff_RBP[0xe];
    fStack0000000000000038 = fVar17 * unaff_RBP[0xd] - fVar15 * unaff_RBP[0xc];
    uStack000000000000003c = 0x7f7fffff;
    unaff_RBP[0x10] = fStack0000000000000030;
    unaff_RBP[0x11] = fStack0000000000000034;
    unaff_RBP[0x12] = fStack0000000000000038;
    unaff_RBP[0x13] = 3.4028235e+38;
    if (1e-07 <= fStack0000000000000030 * fStack0000000000000030 +
                 fStack0000000000000034 * fStack0000000000000034 +
                 fStack0000000000000038 * fStack0000000000000038) {
      func_0x00018023a1e0(unaff_RBP + 0x10);
      fStack0000000000000030 = unaff_RBP[0x11] * unaff_RBP[0x16] - unaff_RBP[0x12] * unaff_RBP[0x15]
      ;
      fStack0000000000000038 = unaff_RBP[0x10] * unaff_RBP[0x15] - unaff_RBP[0x11] * unaff_RBP[0x14]
      ;
      fStack0000000000000034 = unaff_RBP[0x12] * unaff_RBP[0x14] - unaff_RBP[0x10] * unaff_RBP[0x16]
      ;
      unaff_RBP[0xc] = fStack0000000000000030;
      unaff_RBP[0xd] = fStack0000000000000034;
      unaff_RBP[0xe] = fStack0000000000000038;
      unaff_RBP[0xf] = 3.4028235e+38;
      fVar15 = fStack0000000000000030 * fStack0000000000000030 +
               fStack0000000000000034 * fStack0000000000000034 +
               fStack0000000000000038 * fStack0000000000000038;
      goto LAB_18057b6d9;
    }
    fStack0000000000000030 =
         *(float *)(unaff_RBX + 0xdc) * fVar27 - *(float *)(unaff_RBX + 0xe0) * fVar15;
    fStack0000000000000038 =
         *(float *)(unaff_RBX + 0xd8) * fVar15 - *(float *)(unaff_RBX + 0xdc) * fVar17;
    fStack0000000000000034 =
         *(float *)(unaff_RBX + 0xe0) * fVar17 - *(float *)(unaff_RBX + 0xd8) * fVar27;
    uStack000000000000003c = 0x7f7fffff;
    unaff_RBP[0xc] = fStack0000000000000030;
    unaff_RBP[0xd] = fStack0000000000000034;
    unaff_RBP[0xe] = fStack0000000000000038;
    unaff_RBP[0xf] = 3.4028235e+38;
    func_0x00018023a1e0(unaff_RBP + 0xc);
    fStack0000000000000030 = unaff_RBP[0x15] * unaff_RBP[0xe] - unaff_RBP[0x16] * unaff_RBP[0xd];
    fStack0000000000000038 = unaff_RBP[0x14] * unaff_RBP[0xd] - unaff_RBP[0x15] * unaff_RBP[0xc];
    fStack0000000000000034 = unaff_RBP[0x16] * unaff_RBP[0xc] - unaff_RBP[0x14] * unaff_RBP[0xe];
    unaff_RBP[0x10] = fStack0000000000000030;
    unaff_RBP[0x11] = fStack0000000000000034;
    unaff_RBP[0x12] = fStack0000000000000038;
    unaff_RBP[0x13] = 3.4028235e+38;
    fVar15 = fStack0000000000000030 * fStack0000000000000030 +
             fStack0000000000000034 * fStack0000000000000034 +
             fStack0000000000000038 * fStack0000000000000038;
    auVar19 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
    fVar27 = auVar19._0_4_;
    fVar15 = fVar27 * 0.5 * (3.0 - fVar15 * fVar27 * fVar27);
    unaff_RBP[0x10] = fStack0000000000000030 * fVar15;
    unaff_RBP[0x11] = unaff_RBP[0x11] * fVar15;
    unaff_RBP[0x12] = unaff_RBP[0x12] * fVar15;
  }
  uStack000000000000003c = 0x7f7fffff;
  uVar5 = *(uint64_t *)(unaff_RBP + 0xe);
  uVar6 = *(uint64_t *)(unaff_RBP + 0x10);
  uVar7 = *(uint64_t *)(unaff_RBP + 0x12);
  fVar17 = unaff_RBP[-0x20];
  fVar23 = unaff_RBP[-0x1f];
  fVar31 = unaff_RBP[-0x1e];
  fVar25 = unaff_RBP[-0x1d];
  fVar20 = unaff_RBP[-0x1e];
  fVar15 = unaff_RBP[-0x1f];
  fVar27 = unaff_RBP[-0x20];
  *(uint64_t *)(unaff_RBX + 200) = *(uint64_t *)(unaff_RBP + 0xc);
  *(uint64_t *)(unaff_RBX + 0xd0) = uVar5;
  uVar5 = *(uint64_t *)(unaff_RBP + 0x14);
  uVar8 = *(uint64_t *)(unaff_RBP + 0x16);
  *(uint64_t *)(unaff_RBX + 0xd8) = uVar6;
  *(uint64_t *)(unaff_RBX + 0xe0) = uVar7;
  *(uint64_t *)(unaff_RBX + 0xe8) = uVar5;
  *(uint64_t *)(unaff_RBX + 0xf0) = uVar8;
  *(uint64_t *)(unaff_RBP + -0x10) = *(uint64_t *)(unaff_RBP + -0x1c);
  *(uint64_t *)(unaff_RBP + -0xe) = *(uint64_t *)(unaff_RBP + -0x1a);
  unaff_RBP[-0x14] = fVar17;
  unaff_RBP[-0x13] = fVar23;
  unaff_RBP[-0x12] = fVar31;
  unaff_RBP[-0x11] = fVar25;
  unaff_RBP[-8] = in_stack_00000060;
  unaff_RBP[-7] = fStack0000000000000064;
  unaff_RBP[-6] = in_stack_00000068;
  unaff_RBP[-5] = fStack000000000000006c;
  fVar28 = in_stack_00000060;
  fVar29 = fStack0000000000000064;
  fVar30 = in_stack_00000068;
LAB_18057b795:
  fVar11 = in_stack_00000078;
  fVar10 = fStack0000000000000074;
  fVar9 = in_stack_00000070;
  fVar16 = *(float *)(unaff_RBX + 0xe8);
  fVar22 = *(float *)(unaff_RBX + 0xec);
  fVar18 = *(float *)(unaff_RBX + 0xf0);
  fVar21 = *(float *)(unaff_RBX + 0xf4);
  fVar24 = *(float *)(unaff_RBX + 0xd8);
  fVar26 = *(float *)(unaff_RBX + 0xdc);
  fVar32 = *(float *)(unaff_RBX + 0xe0);
  fVar2 = *(float *)(unaff_RBX + 200);
  fVar3 = *(float *)(unaff_RBX + 0xcc);
  fVar4 = *(float *)(unaff_RBX + 0xd0);
  unaff_RBP[0xc] = fVar29 * fVar3 + fVar28 * fVar2 + fVar30 * fVar4;
  unaff_RBP[0xd] = fVar29 * fVar26 + fVar28 * fVar24 + fVar30 * fVar32;
  unaff_RBP[0xe] = fVar29 * fVar22 + fVar28 * fVar16 + fVar30 * fVar18;
  unaff_RBP[0xf] = fVar29 * fVar21 + fVar28 * fVar21 + fVar30 * fVar21;
  unaff_RBP[0x10] =
       fStack0000000000000074 * fVar3 + in_stack_00000070 * fVar2 + in_stack_00000078 * fVar4;
  unaff_RBP[0x11] =
       fStack0000000000000074 * fVar26 + in_stack_00000070 * fVar24 + in_stack_00000078 * fVar32;
  unaff_RBP[0x12] =
       fStack0000000000000074 * fVar22 + in_stack_00000070 * fVar16 + in_stack_00000078 * fVar18;
  unaff_RBP[0x13] =
       fStack0000000000000074 * fVar21 + in_stack_00000070 * fVar21 + in_stack_00000078 * fVar21;
  unaff_RBP[0x14] = fVar27 * fVar2 + fVar15 * fVar3 + fVar20 * fVar4;
  unaff_RBP[0x15] = fVar27 * fVar24 + fVar15 * fVar26 + fVar20 * fVar32;
  unaff_RBP[0x16] = fVar27 * fVar16 + fVar15 * fVar22 + fVar20 * fVar18;
  unaff_RBP[0x17] = fVar27 * fVar21 + fVar15 * fVar21 + fVar20 * fVar21;
  FUN_1801c1720(unaff_RBP + 0xc,&stack0x00000030);
  fVar15 = *(float *)(unaff_R14 + 0x38);
  lVar14 = ((longlong)unaff_R13B + -1) * 0x1b0;
  *(longlong *)(unaff_RBP + -0xc) = lVar14;
  fVar32 = fStack0000000000000030 * 100.0 * fVar15 + *(float *)(unaff_RBX + 0x58);
  fVar24 = fStack0000000000000034 * 100.0 * fVar15 + *(float *)(unaff_RBX + 0x5c);
  fVar21 = fStack0000000000000038 * 100.0 * fVar15 + *(float *)(unaff_RBX + 0x60);
  *(float *)(unaff_RBX + 0x58) = fVar32;
  *(float *)(unaff_RBX + 0x5c) = fVar24;
  *(float *)(unaff_RBX + 0x60) = fVar21;
  in_stack_00000048 =
       *(int *)(lVar14 + 0x110 + *(longlong *)(*(longlong *)(unaff_R14 + 0x208) + 0x140));
  fVar27 = *(float *)(unaff_RBX + 0x58);
  fVar20 = *(float *)(unaff_RBX + 0x5c);
  fVar16 = *(float *)(unaff_RBX + 0x60);
  lVar14 = (longlong)in_stack_00000048 * 0x60 +
           *(longlong *)(*(longlong *)(unaff_R14 + 0x208) + 0x158);
  fVar18 = 1.0 - (*(float *)(lVar14 + 0x40) + *(float *)(lVar14 + 0x3c));
  fVar26 = fVar20 * fVar20 + fVar27 * fVar27 + fVar16 * fVar16;
  unaff_RBP[0xc] = 1.1754944e-38;
  unaff_RBP[0xd] = 0.0;
  unaff_RBP[0xe] = 0.0;
  unaff_RBP[0xf] = 0.0;
  fVar22 = fVar26;
  if (fVar26 <= 1.1754944e-38) {
    fVar22 = 1.1754944e-38;
  }
  fVar21 = SQRT(fVar32 * fVar32 + fVar24 * fVar24 + fVar21 * fVar21) * 17.5 * fVar18 * fVar15;
  fVar18 = fVar18 * 1.25 * fVar15;
  if (fVar21 <= fVar18) {
    fVar21 = fVar18;
  }
  auVar19 = rsqrtss(ZEXT416((uint)fVar22),ZEXT416((uint)fVar22));
  fVar18 = auVar19._0_4_;
  fVar22 = fVar18 * 0.5 * (3.0 - fVar22 * fVar18 * fVar18);
  if (fVar21 <= fVar22 * fVar26) {
    *(float *)(unaff_RBX + 0x58) = fVar32 - fVar21 * fVar27 * fVar22;
    *(float *)(unaff_RBX + 0x5c) = *(float *)(unaff_RBX + 0x5c) - fVar21 * fVar20 * fVar22;
    in_stack_00000040 = *(float *)(unaff_RBX + 0x60) - fVar21 * fVar16 * fVar22;
    *(float *)(unaff_RBX + 0x60) = in_stack_00000040;
  }
  else {
    *(uint64_t *)(unaff_RBX + 0x58) = 0;
    in_stack_00000040 = 0.0;
    *(uint64_t *)(unaff_RBX + 0x60) = 0;
  }
  fVar27 = *(float *)(unaff_RBX + 0xcc);
  fVar20 = *(float *)(unaff_RBX + 0xd0);
  fVar16 = *(float *)(unaff_RBX + 0xdc);
  fVar22 = *(float *)(unaff_RBX + 200);
  fVar18 = *(float *)(unaff_RBX + 0xd8);
  fVar21 = *(float *)(unaff_RBX + 0xe0);
  fVar24 = *(float *)(unaff_RBX + 0xe8);
  *unaff_RBP = fVar27 * fVar29 + fVar22 * fVar28 + fVar20 * fVar30;
  unaff_RBP[1] = fVar27 * fVar10 + fVar22 * fVar9 + fVar20 * fVar11;
  unaff_RBP[2] = fVar27 * fVar23 + fVar22 * fVar17 + fVar20 * fVar31;
  unaff_RBP[3] = fVar27 * fVar25 + fVar22 * fVar25 + fVar20 * fVar25;
  fVar27 = *(float *)(unaff_RBX + 0xec);
  fVar20 = *(float *)(unaff_RBX + 0xf0);
  unaff_RBP[4] = fVar16 * fVar29 + fVar18 * fVar28 + fVar21 * fVar30;
  unaff_RBP[5] = fVar16 * fVar10 + fVar18 * fVar9 + fVar21 * fVar11;
  unaff_RBP[6] = fVar16 * fVar23 + fVar18 * fVar17 + fVar21 * fVar31;
  unaff_RBP[7] = fVar16 * fVar25 + fVar18 * fVar25 + fVar21 * fVar25;
  unaff_RBP[8] = fVar27 * fVar29 + fVar24 * fVar28 + fVar20 * fVar30;
  unaff_RBP[9] = fVar27 * fVar10 + fVar24 * fVar9 + fVar20 * fVar11;
  unaff_RBP[10] = fVar27 * fVar23 + fVar24 * fVar17 + fVar20 * fVar31;
  unaff_RBP[0xb] = fVar27 * fVar25 + fVar24 * fVar25 + fVar20 * fVar25;
  in_stack_00000050 = fVar15;
  FUN_18063b470(&stack0x00000030);
                    // WARNING: Subroutine does not return
  FUN_1808fd400(fVar15 * *(float *)(unaff_RBX + 0x58) * 0.5);
}





