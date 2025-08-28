#include "TaleWorlds.Native.Split.h"

// 03_rendering_part568.c - 1 个函数

// 函数: void FUN_18057a9d2(longlong param_1,undefined8 param_2)
void FUN_18057a9d2(longlong param_1,undefined8 param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  longlong lVar13;
  longlong unaff_RBX;
  float *unaff_RBP;
  char unaff_R13B;
  longlong unaff_R14;
  float in_XMM1_Da;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 in_XMM2 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
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
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
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
  
  auVar17._4_12_ = in_XMM2._4_12_;
  auVar17._0_4_ = SQRT(in_XMM2._0_4_ + in_XMM1_Da);
  pfVar12 = (float *)FUN_180535610(param_1,param_2,auVar17._0_8_);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  in_stack_00000040 = pfVar12[4];
  fStack0000000000000074 = pfVar12[5];
  in_stack_00000078 = pfVar12[6];
  fStack000000000000007c = pfVar12[7];
  fVar15 = pfVar12[8];
  fVar21 = pfVar12[9];
  fVar29 = pfVar12[10];
  fVar23 = pfVar12[0xb];
  in_stack_00000060 = *pfVar12;
  fStack0000000000000064 = pfVar12[1];
  in_stack_00000068 = pfVar12[2];
  fStack000000000000006c = pfVar12[3];
  *(undefined8 *)(unaff_RBP + -0x1c) = uVar5;
  *(undefined8 *)(unaff_RBP + -0x1a) = uVar6;
  *(undefined8 *)(unaff_RBP + -0x10) = uVar5;
  *(undefined8 *)(unaff_RBP + -0xe) = uVar6;
  unaff_RBP[-0x20] = fVar15;
  unaff_RBP[-0x1f] = fVar21;
  unaff_RBP[-0x1e] = fVar29;
  unaff_RBP[-0x1d] = fVar23;
  fVar31 = unaff_RBP[-0x1f];
  fVar25 = unaff_RBP[-0x20];
  fVar18 = in_stack_00000040 * in_stack_00000040 + fStack0000000000000074 * fStack0000000000000074 +
           in_stack_00000078 * in_stack_00000078;
  unaff_RBP[-8] = in_stack_00000060;
  unaff_RBP[-7] = fStack0000000000000064;
  unaff_RBP[-6] = in_stack_00000068;
  unaff_RBP[-5] = fStack000000000000006c;
  unaff_RBP[-0x14] = fVar15;
  unaff_RBP[-0x13] = fVar21;
  unaff_RBP[-0x12] = fVar29;
  unaff_RBP[-0x11] = fVar23;
  if ((fVar18 <= 0.98010004) || (1.0201 <= fVar18)) {
LAB_18057aad4:
    fVar23 = unaff_RBP[-0x1d];
    auVar17 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
    fVar15 = auVar17._0_4_;
    fVar21 = fVar15 * 0.5 * (3.0 - fVar18 * fVar15 * fVar15);
    in_stack_00000040 = in_stack_00000040 * fVar21;
    fVar15 = fVar25 * fVar25 + fVar31 * fVar31 + fVar29 * fVar29;
    fStack0000000000000074 = fStack0000000000000074 * fVar21;
    in_stack_00000078 = in_stack_00000078 * fVar21;
    auVar17 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
    fVar21 = auVar17._0_4_;
    fVar26 = unaff_RBP[-8];
    fVar27 = unaff_RBP[-7];
    fVar28 = unaff_RBP[-6];
    fVar20 = unaff_RBP[-5];
    fVar18 = fVar21 * 0.5 * (3.0 - fVar15 * fVar21 * fVar21);
    fVar15 = fVar25 * fVar18;
    fVar21 = fVar31 * fVar18;
    fVar29 = fVar29 * fVar18;
    unaff_RBP[-0x14] = fVar15;
    unaff_RBP[-0x13] = fVar21;
    unaff_RBP[-0x12] = fVar29;
    unaff_RBP[-0x11] = fVar23;
    unaff_RBP[-0x20] = fVar15;
    unaff_RBP[-0x1f] = fVar21;
    unaff_RBP[-0x1e] = fVar29;
    unaff_RBP[-0x1d] = fVar23;
    fVar31 = fVar21;
    fVar25 = fVar15;
  }
  else {
    fVar14 = fVar25 * fVar25 + fVar31 * fVar31 + fVar29 * fVar29;
    if ((fVar14 <= 0.98010004) ||
       (fVar26 = in_stack_00000060, fVar27 = fStack0000000000000064, fVar28 = in_stack_00000068,
       fVar20 = fStack000000000000006c, 1.0201 <= fVar14)) goto LAB_18057aad4;
  }
  in_stack_00000070 = in_stack_00000040;
  if (*(float *)(unaff_RBX + 0x68) == -1e+30) {
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    *(float *)(unaff_RBX + 0x98) = fVar26;
    *(float *)(unaff_RBX + 0x9c) = fVar27;
    *(float *)(unaff_RBX + 0xa0) = fVar28;
    *(float *)(unaff_RBX + 0xa4) = fVar20;
    *(float *)(unaff_RBX + 200) = fVar26;
    *(float *)(unaff_RBX + 0xcc) = fVar27;
    *(float *)(unaff_RBX + 0xd0) = fVar28;
    *(float *)(unaff_RBX + 0xd4) = fVar20;
    *(float *)(unaff_RBX + 0xa8) = in_stack_00000040;
    *(float *)(unaff_RBX + 0xac) = fStack0000000000000074;
    *(float *)(unaff_RBX + 0xb0) = in_stack_00000078;
    *(float *)(unaff_RBX + 0xb4) = fStack000000000000007c;
    *(float *)(unaff_RBX + 0xd8) = in_stack_00000040;
    *(float *)(unaff_RBX + 0xdc) = fStack0000000000000074;
    *(float *)(unaff_RBX + 0xe0) = in_stack_00000078;
    *(float *)(unaff_RBX + 0xe4) = fStack000000000000007c;
    *(undefined8 *)(unaff_RBX + 0x68) = uVar5;
    *(undefined8 *)(unaff_RBX + 0x70) = uVar6;
    *(float *)(unaff_RBX + 0xb8) = fVar15;
    *(float *)(unaff_RBX + 0xbc) = fVar21;
    *(float *)(unaff_RBX + 0xc0) = fVar29;
    *(float *)(unaff_RBX + 0xc4) = fVar23;
    *(float *)(unaff_RBX + 0xe8) = fVar15;
    *(float *)(unaff_RBX + 0xec) = fVar21;
    *(float *)(unaff_RBX + 0xf0) = fVar29;
    *(float *)(unaff_RBX + 0xf4) = fVar23;
    fVar18 = fVar29;
    goto LAB_18057b795;
  }
  if (*(int *)(unaff_RBX + 0x104) == 0) {
    fStack0000000000000030 = *(float *)(unaff_RBX + 200);
    fStack0000000000000034 = *(float *)(unaff_RBX + 0xcc);
    fStack0000000000000038 = *(float *)(unaff_RBX + 0xd0);
    uStack000000000000003c = *(undefined4 *)(unaff_RBX + 0xd4);
  }
  else if (*(int *)(unaff_RBX + 0x104) == 1) {
    fStack0000000000000030 = *(float *)(unaff_RBX + 0xd8);
    fStack0000000000000034 = *(float *)(unaff_RBX + 0xdc);
    fStack0000000000000038 = *(float *)(unaff_RBX + 0xe0);
    uStack000000000000003c = *(undefined4 *)(unaff_RBX + 0xe4);
  }
  else {
    fStack0000000000000030 = *(float *)(unaff_RBX + 0xe8);
    fStack0000000000000034 = *(float *)(unaff_RBX + 0xec);
    fStack0000000000000038 = *(float *)(unaff_RBX + 0xf0);
    uStack000000000000003c = *(undefined4 *)(unaff_RBX + 0xf4);
  }
  FUN_1801c1720(unaff_RBX + 0x98,unaff_RBP + -0x14);
  FUN_1801c1720(&stack0x00000060,unaff_RBP + -0x10);
  fVar31 = unaff_RBP[-0xe] - unaff_RBP[-0x12];
  if (fVar31 <= 3.1415927) {
    if (fVar31 < -3.1415927) {
      fVar31 = fVar31 + 6.2831855;
    }
  }
  else {
    fVar31 = fVar31 + -6.2831855;
  }
  fVar25 = *(float *)(unaff_RBX + 0xf8);
  lVar13 = *(longlong *)(*(longlong *)(unaff_R14 + 0x10) + 0x168);
  fVar23 = unaff_RBP[-0x1c] - *(float *)(lVar13 + 0xa0);
  fVar14 = unaff_RBP[-0x1b] - *(float *)(lVar13 + 0xa4);
  fVar15 = *(float *)(unaff_RBX + 0x68);
  fStack0000000000000038 =
       (fStack0000000000000038 * fVar25 + *(float *)(unaff_RBX + 0x70)) - unaff_RBP[-0x1a];
  fVar21 = fVar23 * fVar23 + fVar14 * fVar14;
  iVar1 = *(int *)(unaff_RBX + 0x104);
  fVar21 = (float)(fVar21 <= 1.1754944e-38) * 1.1754944e-38 + fVar21;
  auVar17 = rsqrtss(ZEXT416((uint)fVar21),ZEXT416((uint)fVar21));
  fVar29 = auVar17._0_4_;
  fVar18 = fVar29 * 0.5 * (3.0 - fVar21 * fVar29 * fVar29);
  fVar21 = *(float *)(unaff_RBX + 0xfc);
  fVar29 = *(float *)(unaff_RBX + 0x6c);
  uVar5 = *(undefined8 *)(unaff_RBX + 0xe0);
  uVar6 = *(undefined8 *)(unaff_RBX + 200);
  uVar7 = *(undefined8 *)(unaff_RBX + 0xd0);
  *(undefined8 *)(unaff_RBP + 0x10) = *(undefined8 *)(unaff_RBX + 0xd8);
  *(undefined8 *)(unaff_RBP + 0x12) = uVar5;
  fStack0000000000000030 =
       (fStack0000000000000030 * fVar25 + fVar15 +
       fVar18 * fVar23 * ABS(fVar31) * 0.2 * fVar21 * (1.0 / fVar25)) - unaff_RBP[-0x1c];
  fStack0000000000000034 =
       (fStack0000000000000034 * fVar25 + fVar29 +
       fVar18 * fVar14 * ABS(fVar31) * 0.2 * fVar21 * (1.0 / fVar25)) - unaff_RBP[-0x1b];
  *(undefined8 *)(unaff_RBP + 0xc) = uVar6;
  *(undefined8 *)(unaff_RBP + 0xe) = uVar7;
  fVar31 = *(float *)(unaff_RBX + 0xec);
  fVar25 = *(float *)(unaff_RBX + 0xf0);
  fVar15 = *(float *)(unaff_RBX + 0xf4);
  uStack000000000000003c = 0x7f7fffff;
  unaff_RBP[0x14] = *(float *)(unaff_RBX + 0xe8);
  unaff_RBP[0x15] = fVar31;
  unaff_RBP[0x16] = fVar25;
  unaff_RBP[0x17] = fVar15;
  if (iVar1 == 0) {
    unaff_RBP[0xc] = fStack0000000000000030;
    unaff_RBP[0xd] = fStack0000000000000034;
    unaff_RBP[0xe] = fStack0000000000000038;
    unaff_RBP[0xf] = 3.4028235e+38;
    fVar31 = fStack0000000000000030 * fStack0000000000000030 +
             fStack0000000000000034 * fStack0000000000000034 +
             fStack0000000000000038 * fStack0000000000000038;
    if (fVar31 <= 1e-09) {
      fVar31 = 0.0;
      fVar15 = 0.0;
      fVar25 = 1.0;
    }
    else {
      fVar31 = 1.0 / SQRT(fVar31);
      fVar15 = fStack0000000000000030 * fVar31;
      fVar25 = unaff_RBP[0xd] * fVar31;
      fVar31 = unaff_RBP[0xe] * fVar31;
    }
    fStack0000000000000030 = unaff_RBP[0x15] * fVar31 - unaff_RBP[0x16] * fVar25;
    unaff_RBP[0xe] = fVar31;
    unaff_RBP[0xd] = fVar25;
    fStack0000000000000034 = unaff_RBP[0x16] * fVar15 - unaff_RBP[0x14] * fVar31;
    unaff_RBP[0xc] = fVar15;
    fStack0000000000000038 = unaff_RBP[0x14] * fVar25 - unaff_RBP[0x15] * fVar15;
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
      fVar25 = fStack0000000000000034 * fStack0000000000000034 +
               fStack0000000000000030 * fStack0000000000000030 +
               fStack0000000000000038 * fStack0000000000000038;
      auVar17 = rsqrtss(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25));
      fVar31 = auVar17._0_4_;
      fVar31 = fVar31 * 0.5 * (3.0 - fVar25 * fVar31 * fVar31);
      unaff_RBP[0x15] = unaff_RBP[0x15] * fVar31;
      unaff_RBP[0x14] = fVar31 * fStack0000000000000030;
      unaff_RBP[0x16] = unaff_RBP[0x16] * fVar31;
    }
    else {
      fStack0000000000000030 =
           *(float *)(unaff_RBX + 0xe0) * fVar25 - *(float *)(unaff_RBX + 0xdc) * fVar31;
      fStack0000000000000034 =
           *(float *)(unaff_RBX + 0xd8) * fVar31 - *(float *)(unaff_RBX + 0xe0) * fVar15;
      fStack0000000000000038 =
           *(float *)(unaff_RBX + 0xdc) * fVar15 - *(float *)(unaff_RBX + 0xd8) * fVar25;
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
      fVar31 = fStack0000000000000030 * fStack0000000000000030 +
               fStack0000000000000034 * fStack0000000000000034 +
               fStack0000000000000038 * fStack0000000000000038;
      auVar17 = rsqrtss(ZEXT416((uint)fVar31),ZEXT416((uint)fVar31));
      fVar25 = auVar17._0_4_;
      fVar31 = fVar25 * 0.5 * (3.0 - fVar31 * fVar25 * fVar25);
      unaff_RBP[0x10] = fStack0000000000000030 * fVar31;
      unaff_RBP[0x11] = unaff_RBP[0x11] * fVar31;
      unaff_RBP[0x12] = unaff_RBP[0x12] * fVar31;
    }
  }
  else if (iVar1 == 1) {
    unaff_RBP[0x10] = fStack0000000000000030;
    unaff_RBP[0x11] = fStack0000000000000034;
    unaff_RBP[0x12] = fStack0000000000000038;
    unaff_RBP[0x13] = 3.4028235e+38;
    func_0x00018023a1e0(unaff_RBP + 0x10);
    fVar31 = unaff_RBP[0x12];
    fVar25 = unaff_RBP[0x11];
    fVar15 = unaff_RBP[0x10];
    fStack0000000000000030 = fVar31 * unaff_RBP[0xd] - fVar25 * unaff_RBP[0xe];
    fStack0000000000000034 = fVar15 * unaff_RBP[0xe] - fVar31 * unaff_RBP[0xc];
    fStack0000000000000038 = fVar25 * unaff_RBP[0xc] - fVar15 * unaff_RBP[0xd];
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
      fVar31 = fStack0000000000000034 * fStack0000000000000034 +
               fStack0000000000000030 * fStack0000000000000030 +
               fStack0000000000000038 * fStack0000000000000038;
LAB_18057b6d9:
      auVar17 = rsqrtss(ZEXT416((uint)fVar31),ZEXT416((uint)fVar31));
      fVar25 = auVar17._0_4_;
      fVar31 = fVar25 * 0.5 * (3.0 - fVar31 * fVar25 * fVar25);
      unaff_RBP[0xd] = unaff_RBP[0xd] * fVar31;
      unaff_RBP[0xc] = fVar31 * fStack0000000000000030;
      unaff_RBP[0xe] = unaff_RBP[0xe] * fVar31;
    }
    else {
      fStack0000000000000030 =
           *(float *)(unaff_RBX + 0xf0) * fVar25 - *(float *)(unaff_RBX + 0xec) * fVar31;
      fStack0000000000000034 =
           *(float *)(unaff_RBX + 0xe8) * fVar31 - *(float *)(unaff_RBX + 0xf0) * fVar15;
      fStack0000000000000038 =
           *(float *)(unaff_RBX + 0xec) * fVar15 - *(float *)(unaff_RBX + 0xe8) * fVar25;
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
      fVar25 = fStack0000000000000034 * fStack0000000000000034 +
               fStack0000000000000030 * fStack0000000000000030 +
               fStack0000000000000038 * fStack0000000000000038;
      auVar17 = rsqrtss(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25));
      fVar31 = auVar17._0_4_;
      fVar31 = fVar31 * 0.5 * (3.0 - fVar25 * fVar31 * fVar31);
      unaff_RBP[0x15] = unaff_RBP[0x15] * fVar31;
      unaff_RBP[0x14] = fVar31 * fStack0000000000000030;
      unaff_RBP[0x16] = unaff_RBP[0x16] * fVar31;
    }
  }
  else {
    unaff_RBP[0x14] = fStack0000000000000030;
    unaff_RBP[0x15] = fStack0000000000000034;
    unaff_RBP[0x16] = fStack0000000000000038;
    unaff_RBP[0x17] = 3.4028235e+38;
    func_0x00018023a1e0(unaff_RBP + 0x14);
    fVar31 = unaff_RBP[0x15];
    fVar25 = unaff_RBP[0x16];
    fVar15 = unaff_RBP[0x14];
    fStack0000000000000030 = fVar31 * unaff_RBP[0xe] - fVar25 * unaff_RBP[0xd];
    fStack0000000000000034 = fVar25 * unaff_RBP[0xc] - fVar15 * unaff_RBP[0xe];
    fStack0000000000000038 = fVar15 * unaff_RBP[0xd] - fVar31 * unaff_RBP[0xc];
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
      fVar31 = fStack0000000000000030 * fStack0000000000000030 +
               fStack0000000000000034 * fStack0000000000000034 +
               fStack0000000000000038 * fStack0000000000000038;
      goto LAB_18057b6d9;
    }
    fStack0000000000000030 =
         *(float *)(unaff_RBX + 0xdc) * fVar25 - *(float *)(unaff_RBX + 0xe0) * fVar31;
    fStack0000000000000038 =
         *(float *)(unaff_RBX + 0xd8) * fVar31 - *(float *)(unaff_RBX + 0xdc) * fVar15;
    fStack0000000000000034 =
         *(float *)(unaff_RBX + 0xe0) * fVar15 - *(float *)(unaff_RBX + 0xd8) * fVar25;
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
    fVar31 = fStack0000000000000030 * fStack0000000000000030 +
             fStack0000000000000034 * fStack0000000000000034 +
             fStack0000000000000038 * fStack0000000000000038;
    auVar17 = rsqrtss(ZEXT416((uint)fVar31),ZEXT416((uint)fVar31));
    fVar25 = auVar17._0_4_;
    fVar31 = fVar25 * 0.5 * (3.0 - fVar31 * fVar25 * fVar25);
    unaff_RBP[0x10] = fStack0000000000000030 * fVar31;
    unaff_RBP[0x11] = unaff_RBP[0x11] * fVar31;
    unaff_RBP[0x12] = unaff_RBP[0x12] * fVar31;
  }
  uStack000000000000003c = 0x7f7fffff;
  uVar5 = *(undefined8 *)(unaff_RBP + 0xe);
  uVar6 = *(undefined8 *)(unaff_RBP + 0x10);
  uVar7 = *(undefined8 *)(unaff_RBP + 0x12);
  fVar15 = unaff_RBP[-0x20];
  fVar21 = unaff_RBP[-0x1f];
  fVar29 = unaff_RBP[-0x1e];
  fVar23 = unaff_RBP[-0x1d];
  fVar18 = unaff_RBP[-0x1e];
  fVar31 = unaff_RBP[-0x1f];
  fVar25 = unaff_RBP[-0x20];
  *(undefined8 *)(unaff_RBX + 200) = *(undefined8 *)(unaff_RBP + 0xc);
  *(undefined8 *)(unaff_RBX + 0xd0) = uVar5;
  uVar5 = *(undefined8 *)(unaff_RBP + 0x14);
  uVar8 = *(undefined8 *)(unaff_RBP + 0x16);
  *(undefined8 *)(unaff_RBX + 0xd8) = uVar6;
  *(undefined8 *)(unaff_RBX + 0xe0) = uVar7;
  *(undefined8 *)(unaff_RBX + 0xe8) = uVar5;
  *(undefined8 *)(unaff_RBX + 0xf0) = uVar8;
  *(undefined8 *)(unaff_RBP + -0x10) = *(undefined8 *)(unaff_RBP + -0x1c);
  *(undefined8 *)(unaff_RBP + -0xe) = *(undefined8 *)(unaff_RBP + -0x1a);
  unaff_RBP[-0x14] = fVar15;
  unaff_RBP[-0x13] = fVar21;
  unaff_RBP[-0x12] = fVar29;
  unaff_RBP[-0x11] = fVar23;
  unaff_RBP[-8] = in_stack_00000060;
  unaff_RBP[-7] = fStack0000000000000064;
  unaff_RBP[-6] = in_stack_00000068;
  unaff_RBP[-5] = fStack000000000000006c;
  fVar26 = in_stack_00000060;
  fVar27 = fStack0000000000000064;
  fVar28 = in_stack_00000068;
LAB_18057b795:
  fVar11 = in_stack_00000078;
  fVar10 = fStack0000000000000074;
  fVar9 = in_stack_00000070;
  fVar14 = *(float *)(unaff_RBX + 0xe8);
  fVar20 = *(float *)(unaff_RBX + 0xec);
  fVar16 = *(float *)(unaff_RBX + 0xf0);
  fVar19 = *(float *)(unaff_RBX + 0xf4);
  fVar22 = *(float *)(unaff_RBX + 0xd8);
  fVar24 = *(float *)(unaff_RBX + 0xdc);
  fVar30 = *(float *)(unaff_RBX + 0xe0);
  fVar2 = *(float *)(unaff_RBX + 200);
  fVar3 = *(float *)(unaff_RBX + 0xcc);
  fVar4 = *(float *)(unaff_RBX + 0xd0);
  unaff_RBP[0xc] = fVar27 * fVar3 + fVar26 * fVar2 + fVar28 * fVar4;
  unaff_RBP[0xd] = fVar27 * fVar24 + fVar26 * fVar22 + fVar28 * fVar30;
  unaff_RBP[0xe] = fVar27 * fVar20 + fVar26 * fVar14 + fVar28 * fVar16;
  unaff_RBP[0xf] = fVar27 * fVar19 + fVar26 * fVar19 + fVar28 * fVar19;
  unaff_RBP[0x10] =
       fStack0000000000000074 * fVar3 + in_stack_00000070 * fVar2 + in_stack_00000078 * fVar4;
  unaff_RBP[0x11] =
       fStack0000000000000074 * fVar24 + in_stack_00000070 * fVar22 + in_stack_00000078 * fVar30;
  unaff_RBP[0x12] =
       fStack0000000000000074 * fVar20 + in_stack_00000070 * fVar14 + in_stack_00000078 * fVar16;
  unaff_RBP[0x13] =
       fStack0000000000000074 * fVar19 + in_stack_00000070 * fVar19 + in_stack_00000078 * fVar19;
  unaff_RBP[0x14] = fVar25 * fVar2 + fVar31 * fVar3 + fVar18 * fVar4;
  unaff_RBP[0x15] = fVar25 * fVar22 + fVar31 * fVar24 + fVar18 * fVar30;
  unaff_RBP[0x16] = fVar25 * fVar14 + fVar31 * fVar20 + fVar18 * fVar16;
  unaff_RBP[0x17] = fVar25 * fVar19 + fVar31 * fVar19 + fVar18 * fVar19;
  FUN_1801c1720(unaff_RBP + 0xc,&stack0x00000030);
  fVar31 = *(float *)(unaff_R14 + 0x38);
  lVar13 = ((longlong)unaff_R13B + -1) * 0x1b0;
  *(longlong *)(unaff_RBP + -0xc) = lVar13;
  fVar30 = fStack0000000000000030 * 100.0 * fVar31 + *(float *)(unaff_RBX + 0x58);
  fVar22 = fStack0000000000000034 * 100.0 * fVar31 + *(float *)(unaff_RBX + 0x5c);
  fVar19 = fStack0000000000000038 * 100.0 * fVar31 + *(float *)(unaff_RBX + 0x60);
  *(float *)(unaff_RBX + 0x58) = fVar30;
  *(float *)(unaff_RBX + 0x5c) = fVar22;
  *(float *)(unaff_RBX + 0x60) = fVar19;
  in_stack_00000048 =
       *(int *)(lVar13 + 0x110 + *(longlong *)(*(longlong *)(unaff_R14 + 0x208) + 0x140));
  fVar25 = *(float *)(unaff_RBX + 0x58);
  fVar18 = *(float *)(unaff_RBX + 0x5c);
  fVar14 = *(float *)(unaff_RBX + 0x60);
  lVar13 = (longlong)in_stack_00000048 * 0x60 +
           *(longlong *)(*(longlong *)(unaff_R14 + 0x208) + 0x158);
  fVar16 = 1.0 - (*(float *)(lVar13 + 0x40) + *(float *)(lVar13 + 0x3c));
  fVar24 = fVar18 * fVar18 + fVar25 * fVar25 + fVar14 * fVar14;
  unaff_RBP[0xc] = 1.1754944e-38;
  unaff_RBP[0xd] = 0.0;
  unaff_RBP[0xe] = 0.0;
  unaff_RBP[0xf] = 0.0;
  fVar20 = fVar24;
  if (fVar24 <= 1.1754944e-38) {
    fVar20 = 1.1754944e-38;
  }
  fVar19 = SQRT(fVar30 * fVar30 + fVar22 * fVar22 + fVar19 * fVar19) * 17.5 * fVar16 * fVar31;
  fVar16 = fVar16 * 1.25 * fVar31;
  if (fVar19 <= fVar16) {
    fVar19 = fVar16;
  }
  auVar17 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
  fVar16 = auVar17._0_4_;
  fVar20 = fVar16 * 0.5 * (3.0 - fVar20 * fVar16 * fVar16);
  if (fVar19 <= fVar20 * fVar24) {
    *(float *)(unaff_RBX + 0x58) = fVar30 - fVar19 * fVar25 * fVar20;
    *(float *)(unaff_RBX + 0x5c) = *(float *)(unaff_RBX + 0x5c) - fVar19 * fVar18 * fVar20;
    in_stack_00000040 = *(float *)(unaff_RBX + 0x60) - fVar19 * fVar14 * fVar20;
    *(float *)(unaff_RBX + 0x60) = in_stack_00000040;
  }
  else {
    *(undefined8 *)(unaff_RBX + 0x58) = 0;
    in_stack_00000040 = 0.0;
    *(undefined8 *)(unaff_RBX + 0x60) = 0;
  }
  fVar25 = *(float *)(unaff_RBX + 0xcc);
  fVar18 = *(float *)(unaff_RBX + 0xd0);
  fVar14 = *(float *)(unaff_RBX + 0xdc);
  fVar20 = *(float *)(unaff_RBX + 200);
  fVar16 = *(float *)(unaff_RBX + 0xd8);
  fVar19 = *(float *)(unaff_RBX + 0xe0);
  fVar22 = *(float *)(unaff_RBX + 0xe8);
  *unaff_RBP = fVar25 * fVar27 + fVar20 * fVar26 + fVar18 * fVar28;
  unaff_RBP[1] = fVar25 * fVar10 + fVar20 * fVar9 + fVar18 * fVar11;
  unaff_RBP[2] = fVar25 * fVar21 + fVar20 * fVar15 + fVar18 * fVar29;
  unaff_RBP[3] = fVar25 * fVar23 + fVar20 * fVar23 + fVar18 * fVar23;
  fVar25 = *(float *)(unaff_RBX + 0xec);
  fVar18 = *(float *)(unaff_RBX + 0xf0);
  unaff_RBP[4] = fVar14 * fVar27 + fVar16 * fVar26 + fVar19 * fVar28;
  unaff_RBP[5] = fVar14 * fVar10 + fVar16 * fVar9 + fVar19 * fVar11;
  unaff_RBP[6] = fVar14 * fVar21 + fVar16 * fVar15 + fVar19 * fVar29;
  unaff_RBP[7] = fVar14 * fVar23 + fVar16 * fVar23 + fVar19 * fVar23;
  unaff_RBP[8] = fVar25 * fVar27 + fVar22 * fVar26 + fVar18 * fVar28;
  unaff_RBP[9] = fVar25 * fVar10 + fVar22 * fVar9 + fVar18 * fVar11;
  unaff_RBP[10] = fVar25 * fVar21 + fVar22 * fVar15 + fVar18 * fVar29;
  unaff_RBP[0xb] = fVar25 * fVar23 + fVar22 * fVar23 + fVar18 * fVar23;
  in_stack_00000050 = fVar31;
  FUN_18063b470(&stack0x00000030);
                    // WARNING: Subroutine does not return
  FUN_1808fd400(fVar31 * *(float *)(unaff_RBX + 0x58) * 0.5);
}





