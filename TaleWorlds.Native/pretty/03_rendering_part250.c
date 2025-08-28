#include "TaleWorlds.Native.Split.h"

// 03_rendering_part250.c - 1 个函数

// 函数: void FUN_18040b995(longlong param_1,longlong param_2,char param_3,int param_4,undefined8 param_5,
void FUN_18040b995(longlong param_1,longlong param_2,char param_3,int param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 *puVar3;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  float *pfVar4;
  float *unaff_RDI;
  longlong in_R11;
  undefined8 unaff_R13;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  undefined4 unaff_XMM6_Da;
  float fVar17;
  undefined4 unaff_XMM6_Db;
  float fVar18;
  undefined4 unaff_XMM6_Dc;
  float fVar19;
  undefined4 unaff_XMM6_Dd;
  float fVar20;
  undefined4 unaff_XMM7_Da;
  float fVar21;
  float fVar22;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined4 unaff_XMM8_Da;
  float fVar23;
  float fVar24;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined4 unaff_XMM9_Da;
  float fVar25;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM10_Db;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM10_Dd;
  undefined4 unaff_XMM11_Da;
  undefined4 unaff_XMM11_Db;
  undefined4 unaff_XMM11_Dc;
  undefined4 unaff_XMM11_Dd;
  undefined4 unaff_XMM12_Da;
  undefined4 unaff_XMM12_Db;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM12_Dd;
  float unaff_XMM13_Da;
  float unaff_XMM13_Db;
  float unaff_XMM13_Dc;
  float unaff_XMM13_Dd;
  undefined4 unaff_XMM14_Da;
  undefined4 unaff_XMM14_Db;
  undefined4 unaff_XMM14_Dc;
  undefined4 unaff_XMM14_Dd;
  undefined4 unaff_XMM15_Da;
  undefined4 unaff_XMM15_Db;
  undefined4 unaff_XMM15_Dc;
  undefined4 unaff_XMM15_Dd;
  undefined8 uVar26;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  undefined4 uStack000000000000005c;
  float in_stack_00000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  undefined1 auStack0000000000000070 [16];
  
  *(undefined8 *)(in_R11 + 8) = unaff_RBX;
  *(undefined8 *)(in_R11 + 0x18) = unaff_RSI;
  *(undefined8 *)(in_R11 + -0x18) = unaff_R13;
  *(undefined4 *)(in_R11 + -0x38) = unaff_XMM6_Da;
  *(undefined4 *)(in_R11 + -0x34) = unaff_XMM6_Db;
  *(undefined4 *)(in_R11 + -0x30) = unaff_XMM6_Dc;
  *(undefined4 *)(in_R11 + -0x2c) = unaff_XMM6_Dd;
  *(undefined4 *)(in_R11 + -0x48) = unaff_XMM7_Da;
  *(undefined4 *)(in_R11 + -0x44) = unaff_XMM7_Db;
  *(undefined4 *)(in_R11 + -0x40) = unaff_XMM7_Dc;
  *(undefined4 *)(in_R11 + -0x3c) = unaff_XMM7_Dd;
  *(undefined4 *)(in_R11 + -0x58) = unaff_XMM8_Da;
  *(undefined4 *)(in_R11 + -0x54) = unaff_XMM8_Db;
  *(undefined4 *)(in_R11 + -0x50) = unaff_XMM8_Dc;
  *(undefined4 *)(in_R11 + -0x4c) = unaff_XMM8_Dd;
  *(undefined4 *)(in_R11 + -0x68) = unaff_XMM9_Da;
  *(undefined4 *)(in_R11 + -100) = unaff_XMM9_Db;
  *(undefined4 *)(in_R11 + -0x60) = unaff_XMM9_Dc;
  *(undefined4 *)(in_R11 + -0x5c) = unaff_XMM9_Dd;
  *(undefined4 *)(in_R11 + -0x78) = unaff_XMM10_Da;
  *(undefined4 *)(in_R11 + -0x74) = unaff_XMM10_Db;
  *(undefined4 *)(in_R11 + -0x70) = unaff_XMM10_Dc;
  *(undefined4 *)(in_R11 + -0x6c) = unaff_XMM10_Dd;
  *(undefined4 *)(in_R11 + -0x88) = unaff_XMM11_Da;
  *(undefined4 *)(in_R11 + -0x84) = unaff_XMM11_Db;
  *(undefined4 *)(in_R11 + -0x80) = unaff_XMM11_Dc;
  *(undefined4 *)(in_R11 + -0x7c) = unaff_XMM11_Dd;
  *(undefined4 *)(in_R11 + -0x98) = unaff_XMM12_Da;
  *(undefined4 *)(in_R11 + -0x94) = unaff_XMM12_Db;
  *(undefined4 *)(in_R11 + -0x90) = unaff_XMM12_Dc;
  *(undefined4 *)(in_R11 + -0x8c) = unaff_XMM12_Dd;
  *(undefined4 *)(in_R11 + -0xb8) = unaff_XMM14_Da;
  *(undefined4 *)(in_R11 + -0xb4) = unaff_XMM14_Db;
  *(undefined4 *)(in_R11 + -0xb0) = unaff_XMM14_Dc;
  *(undefined4 *)(in_R11 + -0xac) = unaff_XMM14_Dd;
  lVar5 = (longlong)param_4 * 0x60 + *(longlong *)(param_1 + 0x158);
  fVar17 = *(float *)(lVar5 + 0x10);
  fVar18 = *(float *)(lVar5 + 0x14);
  fVar19 = *(float *)(lVar5 + 0x18);
  fVar20 = *(float *)(lVar5 + 0x1c);
  *(undefined4 *)(in_R11 + -200) = unaff_XMM15_Da;
  *(undefined4 *)(in_R11 + -0xc4) = unaff_XMM15_Db;
  *(undefined4 *)(in_R11 + -0xc0) = unaff_XMM15_Dc;
  *(undefined4 *)(in_R11 + -0xbc) = unaff_XMM15_Dd;
  iVar2 = *(int *)(lVar5 + 0x30);
  uStack000000000000003c = (undefined4)((ulonglong)param_6 >> 0x20);
  _param_6 = ZEXT812(0);
  pfVar6 = (float *)((longlong)param_3 * 0x1b0 + 0x90 + *(longlong *)(param_2 + 0x140));
  auVar10._0_4_ = *pfVar6;
  fVar21 = pfVar6[1];
  fVar23 = pfVar6[2];
  fVar15 = pfVar6[3];
  *(undefined4 *)((longlong)&param_6 + (longlong)iVar2 * 4) = 0x3f800000;
  *(float *)(unaff_RBP + -0x60) = unaff_XMM13_Da;
  *(float *)(unaff_RBP + -0x5c) = unaff_XMM13_Da;
  *(float *)(unaff_RBP + -0x58) = unaff_XMM13_Da;
  *(float *)(unaff_RBP + -0x54) = unaff_XMM13_Da;
  *(float *)(unaff_RBP + -0x70) = unaff_XMM13_Dd;
  *(float *)(unaff_RBP + -0x6c) = unaff_XMM13_Db;
  *(float *)(unaff_RBP + -0x68) = unaff_XMM13_Dc;
  *(float *)(unaff_RBP + -100) = unaff_XMM13_Dd;
  fStack0000000000000044 =
       fVar23 * fVar20 * 1.0 + auVar10._0_4_ * fVar18 * 1.0 + (fVar17 * fVar21 - fVar15 * fVar19);
  fStack0000000000000048 =
       fVar15 * fVar18 * 1.0 + auVar10._0_4_ * fVar19 * 1.0 + (fVar17 * fVar23 - fVar21 * fVar20);
  fStack000000000000004c =
       fVar21 * fVar19 * 1.0 + auVar10._0_4_ * fVar20 * 1.0 + (fVar17 * fVar15 - fVar23 * fVar18);
  fStack0000000000000040 =
       fVar15 * fVar20 * -1.0 + fVar23 * fVar19 * -1.0 + (fVar17 * auVar10._0_4_ - fVar21 * fVar18);
  *(float *)(unaff_RBP + -0x50) = unaff_XMM13_Db;
  *(float *)(unaff_RBP + -0x4c) = unaff_XMM13_Dc;
  *(float *)(unaff_RBP + -0x48) = unaff_XMM13_Dd;
  *(float *)(unaff_RBP + -0x44) = unaff_XMM13_Dc;
  *(float *)(unaff_RBP + -0x80) = fStack0000000000000040;
  *(float *)(unaff_RBP + -0x7c) = fStack0000000000000044;
  *(float *)(unaff_RBP + -0x78) = fStack0000000000000048;
  *(float *)(unaff_RBP + -0x74) = fStack000000000000004c;
  fVar17 = fStack0000000000000048 * unaff_XMM13_Dd * -1.0 +
           unaff_XMM13_Da * fStack0000000000000044 * -1.0 +
           fStack0000000000000040 * unaff_XMM13_Db + fStack000000000000004c * unaff_XMM13_Dc;
  fVar18 = fStack000000000000004c * unaff_XMM13_Db * -1.0 +
           unaff_XMM13_Da * fStack0000000000000048 * -1.0 +
           fStack0000000000000040 * unaff_XMM13_Dc + fStack0000000000000044 * unaff_XMM13_Dd;
  fVar19 = fStack0000000000000044 * unaff_XMM13_Dc * -1.0 +
           unaff_XMM13_Da * fStack000000000000004c * -1.0 +
           fStack0000000000000040 * unaff_XMM13_Dd + fStack0000000000000048 * unaff_XMM13_Db;
  fVar20 = fStack000000000000004c * unaff_XMM13_Dd * 1.0 +
           unaff_XMM13_Da * fStack0000000000000040 * 1.0 +
           fStack0000000000000048 * unaff_XMM13_Dc + fStack0000000000000044 * unaff_XMM13_Db;
  if (iVar2 == 0) {
    auVar10._0_4_ = fVar17 * fVar19 - fVar20 * fVar18;
    auVar10._0_4_ = auVar10._0_4_ + auVar10._0_4_;
    fVar23 = 1.0 - (fVar18 * fVar18 + fVar18 * fVar18 + fVar19 * fVar19 + fVar19 * fVar19);
    fVar21 = fVar17 * fVar18 + fVar17 * fVar18 + fVar19 * fVar20 + fVar19 * fVar20;
  }
  else if (iVar2 == 1) {
    fVar23 = fVar17 * fVar18 - fVar19 * fVar20;
    fVar23 = fVar23 + fVar23;
    auVar10._0_4_ = fVar19 * fVar18 + fVar19 * fVar18 + fVar17 * fVar20 + fVar17 * fVar20;
    fVar21 = 1.0 - (fVar17 * fVar17 + fVar17 * fVar17 + fVar19 * fVar19 + fVar19 * fVar19);
  }
  else {
    fVar21 = fVar19 * fVar18 - fVar17 * fVar20;
    fVar21 = fVar21 + fVar21;
    fVar23 = fVar20 * fVar18 + fVar20 * fVar18 + fVar17 * fVar19 + fVar17 * fVar19;
    auVar10._0_4_ = 1.0 - (fVar17 * fVar17 + fVar17 * fVar17 + fVar18 * fVar18 + fVar18 * fVar18);
  }
  param_5 = CONCAT44(0x7f7fffff,auVar10._0_4_);
  uStack000000000000005c = 0x7f7fffff;
  fVar16 = fStack0000000000000038 * fVar21 - auVar10._0_4_ * param_6._4_4_;
  fVar25 = auVar10._0_4_ * (float)param_6 - fStack0000000000000038 * fVar23;
  fVar24 = fVar23 * param_6._4_4_ - fVar21 * (float)param_6;
  fVar15 = fVar25 * fVar25 + fVar16 * fVar16 + fVar24 * fVar24;
  auStack0000000000000070._0_12_ = ZEXT812(0x800000);
  auStack0000000000000070._12_4_ = 0;
  auVar10._0_4_ = fVar15;
  if (fVar15 <= 1.1754944e-38) {
    auVar10._0_4_ = 1.1754944e-38;
  }
  auVar9 = rsqrtss(ZEXT416((uint)auVar10._0_4_),ZEXT416((uint)auVar10._0_4_));
  fVar22 = auVar9._0_4_;
  auVar10._0_4_ = auVar10._0_4_ * fVar22 * fVar22;
  auVar14._4_12_ = DAT_180a401f0._4_12_;
  auVar14._0_4_ = (float)DAT_180a401f0 - auVar10._0_4_;
  fVar22 = fVar22 * 0.5 * auVar14._0_4_;
  fVar25 = fVar22 * fVar25;
  fVar15 = fVar22 * fVar15;
  fVar24 = fVar22 * fVar24;
  fVar22 = fVar22 * fVar16;
  if (0.0 <= fVar15) {
    if (1.0 <= fVar15) {
      fVar15 = 1.0;
    }
  }
  else {
    fVar15 = 0.0;
  }
  fStack0000000000000050 = fVar22;
  fStack0000000000000054 = fVar25;
  fStack0000000000000058 = fVar24;
  fVar23 = (float)asinf(fVar15,auVar14._0_8_,auVar9._0_8_,auVar10._0_4_,CONCAT44(fVar21,fVar23));
  fVar21 = *(float *)(&stack0x00000020 + (longlong)iVar2 * 4);
  auVar10._0_4_ = *(float *)(&stack0x00000020 + (longlong)iVar2 * 4);
  *(float *)(unaff_RBP + 0xa8) = fVar23;
  if (auVar10._0_4_ <= 0.0 && fVar21 != 0.0) {
    fVar23 = 3.1415927 - fVar23;
    *(float *)(unaff_RBP + 0xa8) = fVar23;
  }
  param_5 = CONCAT44(fVar19,fVar18);
  if (((1e-05 < fVar23) &&
      (auVar10._0_4_ = fVar25 * fVar25 + fVar22 * fVar22 + fVar24 * fVar24,
      0.98010004 < auVar10._0_4_)) && (auVar10._0_4_ < 1.0201)) {
                    // WARNING: Subroutine does not return
    FUN_1808fd400(fVar23 * 0.5);
  }
  _param_6 = ZEXT812(0);
  if (iVar2 == 0) {
    pfVar6 = &stack0x00000058;
    pfVar7 = &stack0x00000054;
    pfVar4 = (float *)&stack0x00000024;
    puVar3 = (undefined8 *)((longlong)&param_6 + 4);
    fVar21 = fVar17 * fVar18 - fVar19 * fVar20;
    fVar21 = fVar21 + fVar21;
    auVar10._0_4_ = fVar19 * fVar18 + fVar19 * fVar18 + fVar17 * fVar20 + fVar17 * fVar20;
    fVar20 = 1.0 - (fVar19 * fVar19 + fVar19 * fVar19 + fVar17 * fVar17 + fVar17 * fVar17);
  }
  else if (iVar2 == 1) {
    pfVar6 = &stack0x00000050;
    pfVar7 = &stack0x00000058;
    pfVar4 = (float *)&param_5;
    puVar3 = (undefined8 *)&stack0x00000038;
    fVar21 = fVar20 * fVar18 + fVar20 * fVar18 + fVar19 * fVar17 + fVar19 * fVar17;
    fVar20 = fVar19 * fVar18 - fVar17 * fVar20;
    fVar20 = fVar20 + fVar20;
    auVar10._0_4_ = 1.0 - (fVar18 * fVar18 + fVar18 * fVar18 + fVar17 * fVar17 + fVar17 * fVar17);
  }
  else {
    pfVar6 = &stack0x00000054;
    pfVar7 = &stack0x00000050;
    pfVar4 = (float *)&stack0x00000020;
    puVar3 = &param_6;
    auVar10._0_4_ = fVar19 * fVar17 - fVar20 * fVar18;
    fVar20 = fVar19 * fVar20 + fVar19 * fVar20 + fVar17 * fVar18 + fVar17 * fVar18;
    auVar10._0_4_ = auVar10._0_4_ + auVar10._0_4_;
    fVar21 = 1.0 - (fVar18 * fVar18 + fVar18 * fVar18 + fVar19 * fVar19 + fVar19 * fVar19);
  }
  *(undefined4 *)puVar3 = 0x3f800000;
  fVar19 = fStack0000000000000038 * fVar20 - auVar10._0_4_ * param_6._4_4_;
  param_5 = CONCAT44(0x7f7fffff,auVar10._0_4_);
  fVar23 = fVar21 * param_6._4_4_ - fVar20 * (float)param_6;
  fStack0000000000000064 = auVar10._0_4_ * (float)param_6 - fStack0000000000000038 * fVar21;
  fVar18 = fVar19 * fVar19 + fStack0000000000000064 * fStack0000000000000064 + fVar23 * fVar23;
  fVar17 = fVar18;
  if (fVar18 <= (float)auStack0000000000000070._0_4_) {
    fVar17 = (float)auStack0000000000000070._0_4_;
  }
  auVar10 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
  fVar17 = fVar17 * auVar10._0_4_ * auVar10._0_4_;
  fVar15 = auVar10._0_4_ * 0.5 * (3.0 - fVar17);
  auVar11._4_4_ = 0x3f000000;
  auVar11._0_4_ = fVar15;
  auVar11._8_4_ = 0x3f000000;
  auVar11._12_4_ = 0x3f000000;
  auVar9._4_4_ = 0x3f000000;
  auVar9._0_4_ = fVar15;
  auVar9._8_4_ = 0x3f000000;
  auVar9._12_4_ = 0x3f000000;
  fStack0000000000000064 = fVar15 * fStack0000000000000064;
  auVar10._4_12_ = auVar9._4_12_;
  auVar10._0_4_ = fVar15 * fVar23;
  auVar12._4_12_ = auVar11._4_12_;
  auVar12._0_4_ = fVar15 * fVar19;
  fVar15 = fVar15 * fVar18;
  *(float *)(unaff_RBP + 0x98) = fStack0000000000000064;
  *(float *)(unaff_RBP + 0xb0) = auVar10._0_4_;
  if (0.0 <= fVar15) {
    if (1.0 <= fVar15) {
      fVar15 = 1.0;
    }
  }
  else {
    fVar15 = 0.0;
  }
  in_stack_00000060 = auVar12._0_4_;
  in_stack_00000068 = auVar10._0_4_;
  fVar17 = (float)asinf(fVar15,auVar10._0_8_,auVar12._0_8_,fVar17,CONCAT44(fVar20,fVar21));
  if (0.0 < *pfVar4 || *pfVar4 == 0.0) {
    auVar10._0_4_ = *(float *)(unaff_RBP + 0xb0);
  }
  else {
    fVar17 = 3.1415927 - fVar17;
  }
  uVar26 = *(undefined8 *)(unaff_RBP + -0x80);
  param_5 = *(undefined8 *)(unaff_RBP + -0x78);
  fVar18 = -0.5;
  if (1e-05 < fVar17) {
    if (iVar2 == 0) {
      iVar2 = 1;
      if (auVar12._0_4_ < 0.0) {
        iVar2 = -1;
      }
                    // WARNING: Subroutine does not return
      FUN_1808fd400((float)iVar2 * fVar17 * -0.5);
    }
    if (iVar2 != 1) {
      if (auVar10._0_4_ < 0.0) {
        fVar18 = 0.5;
      }
      else {
        fVar18 = -0.5;
      }
                    // WARNING: Subroutine does not return
      FUN_1808fd400(fVar18 * fVar17);
    }
    FUN_18040f4d0(&stack0x00000020);
  }
  fVar19 = (float)uVar26;
  fVar20 = (float)((ulonglong)uVar26 >> 0x20);
  auVar13._4_4_ =
       (float)param_5 * *(float *)(unaff_RBP + -0x70) * -1.0 +
       *(float *)(unaff_RBP + -0x60) * fVar20 * -1.0 +
       param_5._4_4_ * unaff_XMM13_Dc + fVar19 * *(float *)(unaff_RBP + -0x50);
  auVar13._0_4_ =
       param_5._4_4_ * *(float *)(unaff_RBP + -100) * 1.0 +
       *(float *)(unaff_RBP + -0x54) * fVar19 * 1.0 +
       fVar20 * unaff_XMM13_Db + (float)param_5 * *(float *)(unaff_RBP + -0x44);
  auVar13._8_4_ =
       param_5._4_4_ * *(float *)(unaff_RBP + -0x6c) * -1.0 +
       *(float *)(unaff_RBP + -0x5c) * (float)param_5 * -1.0 +
       fVar20 * unaff_XMM13_Dd + fVar19 * *(float *)(unaff_RBP + -0x4c);
  auVar13._12_4_ =
       fVar20 * *(float *)(unaff_RBP + -0x68) * -1.0 +
       *(float *)(unaff_RBP + -0x58) * param_5._4_4_ * -1.0 +
       (float)param_5 * unaff_XMM13_Db + fVar19 * *(float *)(unaff_RBP + -0x48);
  _param_6 = auVar13;
  FUN_18063b720(&stack0x00000050,unaff_RBP + 0xa8,&param_6);
  fVar21 = fStack0000000000000058;
  auVar10._0_4_ = fStack0000000000000054;
  fVar20 = fStack0000000000000050;
  fVar19 = *(float *)(unaff_RBP + 0xa8);
  if (1e-05 < fVar19) {
    fVar23 = fStack0000000000000054 * fStack0000000000000054 +
             fStack0000000000000050 * fStack0000000000000050 +
             fStack0000000000000058 * fStack0000000000000058;
    auVar13 = ZEXT416((uint)fVar23);
    if ((0.98010004 < fVar23) && (fVar23 < 1.0201)) {
      if (3.1415927 < fVar19) {
        uStack000000000000005c = 0x7f7fffff;
        fStack0000000000000050 = -fStack0000000000000050;
        fStack0000000000000054 = -fStack0000000000000054;
        fStack0000000000000058 = -fStack0000000000000058;
      }
      fVar17 = *pfVar7;
      fVar18 = -*pfVar6;
      if (((fVar18 != 0.0) || (fVar17 != 0.0)) &&
         ((fVar17 = fVar17 * fVar17 + fVar18 * fVar18, fVar17 <= 0.98010004 || (1.0201 <= fVar17))))
      {
        auVar10 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
        fVar19 = auVar10._0_4_;
        fVar18 = fVar19 * 0.5 * (3.0 - fVar17 * fVar19 * fVar19) * fVar18;
      }
      uVar8 = atan2f(-fVar18);
                    // WARNING: Subroutine does not return
      FUN_1808fd400(uVar8);
    }
  }
  fVar23 = *(float *)(unaff_RBP + 0xb8) * *(float *)(lVar5 + 0x34);
  fVar15 = *(float *)(unaff_RBP + 0xb8) * *(float *)(lVar5 + 0x38);
  if ((fVar17 < fVar23) || (fVar15 <= fVar17)) {
    if ((fVar23 <= fVar17) && (fVar23 = fVar15, fVar17 <= fVar15)) {
      fVar23 = fVar17;
    }
    if (iVar2 == 0) {
      if (in_stack_00000060 < 0.0) {
        fVar18 = 0.5;
      }
                    // WARNING: Subroutine does not return
      FUN_1808fd400(fVar18 * fVar23);
    }
    if (iVar2 != 1) {
      if (in_stack_00000068 < 0.0) {
        fVar18 = 0.5;
      }
                    // WARNING: Subroutine does not return
      FUN_1808fd400(fVar18 * fVar23);
    }
    FUN_18040f4d0(&stack0x00000040);
    if (1e-05 < fVar19) {
      fVar17 = auVar10._0_4_ * auVar10._0_4_ + fVar20 * fVar20 + fVar21 * fVar21;
      auVar13 = ZEXT416((uint)fVar17);
      if ((0.98010004 < fVar17) && (fVar17 < 1.0201)) {
                    // WARNING: Subroutine does not return
        FUN_1808fd400(fVar19 * 0.5);
      }
    }
    fVar17 = fStack000000000000004c * fStack000000000000004c +
             fStack0000000000000040 * fStack0000000000000040;
    fVar18 = fStack0000000000000048 * fStack0000000000000048 +
             fStack0000000000000044 * fStack0000000000000044;
    fVar23 = fVar17 + fStack0000000000000044 * fStack0000000000000044 +
                      fStack0000000000000048 * fStack0000000000000048;
    fVar15 = fVar18 + fStack0000000000000040 * fStack0000000000000040 +
                      fStack000000000000004c * fStack000000000000004c;
    auVar1._4_4_ = fVar17 + fVar18 + 1.1754944e-38;
    auVar1._0_4_ = fVar18 + fVar17 + 1.1754944e-38;
    auVar1._8_4_ = fVar23 + 1.1754944e-38;
    auVar1._12_4_ = fVar15 + 1.1754944e-38;
    auVar14 = rsqrtps(auVar13,auVar1);
    fVar19 = auVar14._0_4_;
    fVar20 = auVar14._4_4_;
    auVar10._0_4_ = auVar14._8_4_;
    fVar21 = auVar14._12_4_;
    *unaff_RDI = (3.0 - fVar19 * fVar19 * (fVar18 + fVar17)) * fVar19 * 0.5 * fStack0000000000000040
    ;
    unaff_RDI[1] = (3.0 - fVar20 * fVar20 * (fVar17 + fVar18)) * fVar20 * 0.5 *
                   fStack0000000000000044;
    unaff_RDI[2] = (3.0 - auVar10._0_4_ * auVar10._0_4_ * fVar23) * auVar10._0_4_ * 0.5 *
                   fStack0000000000000048;
    unaff_RDI[3] = (3.0 - fVar21 * fVar21 * fVar15) * fVar21 * 0.5 * fStack000000000000004c;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



