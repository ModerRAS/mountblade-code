#include "TaleWorlds.Native.Split.h"

// 03_rendering_part251.c - 2 个函数

// 函数: void FUN_18040b99d(int64_t param_1,int64_t param_2,char param_3,int param_4,uint64_t param_5,
void FUN_18040b99d(int64_t param_1,int64_t param_2,char param_3,int param_4,uint64_t param_5,
                  uint64_t param_6)

{
  int8_t auVar1 [16];
  int iVar2;
  uint64_t *puVar3;
  int64_t unaff_RBP;
  float *pfVar4;
  float *unaff_RDI;
  int64_t in_R11;
  uint64_t unaff_R13;
  int64_t lVar5;
  float *pfVar6;
  float *pfVar7;
  int32_t uVar8;
  int8_t auVar9 [16];
  int8_t auVar10 [16];
  int8_t auVar11 [16];
  int8_t auVar12 [16];
  int8_t auVar13 [16];
  int8_t auVar14 [16];
  float fVar15;
  float fVar16;
  int32_t unaff_XMM6_Da;
  float fVar17;
  int32_t unaff_XMM6_Db;
  float fVar18;
  int32_t unaff_XMM6_Dc;
  float fVar19;
  int32_t unaff_XMM6_Dd;
  float fVar20;
  int32_t unaff_XMM7_Da;
  float fVar21;
  float fVar22;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  float fVar23;
  float fVar24;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  float fVar25;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  int32_t unaff_XMM12_Da;
  int32_t unaff_XMM12_Db;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM12_Dd;
  float unaff_XMM13_Da;
  float unaff_XMM13_Db;
  float unaff_XMM13_Dc;
  float unaff_XMM13_Dd;
  int32_t unaff_XMM14_Da;
  int32_t unaff_XMM14_Db;
  int32_t unaff_XMM14_Dc;
  int32_t unaff_XMM14_Dd;
  int32_t unaff_XMM15_Da;
  int32_t unaff_XMM15_Db;
  int32_t unaff_XMM15_Dc;
  int32_t unaff_XMM15_Dd;
  uint64_t uVar26;
  float fStack0000000000000038;
  int32_t uStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  int32_t uStack000000000000005c;
  float in_stack_00000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  int8_t auStack0000000000000070 [16];
  
  *(uint64_t *)(in_R11 + -0x18) = unaff_R13;
  *(int32_t *)(in_R11 + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x2c) = unaff_XMM6_Dd;
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM7_Dd;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM8_Dd;
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM9_Dd;
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM10_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM10_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM10_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM10_Dd;
  *(int32_t *)(in_R11 + -0x88) = unaff_XMM11_Da;
  *(int32_t *)(in_R11 + -0x84) = unaff_XMM11_Db;
  *(int32_t *)(in_R11 + -0x80) = unaff_XMM11_Dc;
  *(int32_t *)(in_R11 + -0x7c) = unaff_XMM11_Dd;
  *(int32_t *)(in_R11 + -0x98) = unaff_XMM12_Da;
  *(int32_t *)(in_R11 + -0x94) = unaff_XMM12_Db;
  *(int32_t *)(in_R11 + -0x90) = unaff_XMM12_Dc;
  *(int32_t *)(in_R11 + -0x8c) = unaff_XMM12_Dd;
  *(int32_t *)(in_R11 + -0xb8) = unaff_XMM14_Da;
  *(int32_t *)(in_R11 + -0xb4) = unaff_XMM14_Db;
  *(int32_t *)(in_R11 + -0xb0) = unaff_XMM14_Dc;
  *(int32_t *)(in_R11 + -0xac) = unaff_XMM14_Dd;
  lVar5 = (int64_t)param_4 * 0x60 + *(int64_t *)(param_1 + 0x158);
  fVar17 = *(float *)(lVar5 + 0x10);
  fVar18 = *(float *)(lVar5 + 0x14);
  fVar19 = *(float *)(lVar5 + 0x18);
  fVar20 = *(float *)(lVar5 + 0x1c);
  *(int32_t *)(in_R11 + -200) = unaff_XMM15_Da;
  *(int32_t *)(in_R11 + -0xc4) = unaff_XMM15_Db;
  *(int32_t *)(in_R11 + -0xc0) = unaff_XMM15_Dc;
  *(int32_t *)(in_R11 + -0xbc) = unaff_XMM15_Dd;
  iVar2 = *(int *)(lVar5 + 0x30);
  uStack000000000000003c = (int32_t)((uint64_t)param_6 >> 0x20);
  _param_6 = ZEXT812(0);
  pfVar6 = (float *)((int64_t)param_3 * 0x1b0 + 0x90 + *(int64_t *)(param_2 + 0x140));
  auVar10._0_4_ = *pfVar6;
  fVar21 = pfVar6[1];
  fVar23 = pfVar6[2];
  fVar15 = pfVar6[3];
  *(int32_t *)((int64_t)&param_6 + (int64_t)iVar2 * 4) = 0x3f800000;
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
  auVar14._4_12_ = system_data_01f0._4_12_;
  auVar14._0_4_ = (float)system_data_01f0 - auVar10._0_4_;
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
  fVar21 = *(float *)(&stack0x00000020 + (int64_t)iVar2 * 4);
  auVar10._0_4_ = *(float *)(&stack0x00000020 + (int64_t)iVar2 * 4);
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
    AdvancedSystemController(fVar23 * 0.5);
  }
  _param_6 = ZEXT812(0);
  if (iVar2 == 0) {
    pfVar6 = &stack0x00000058;
    pfVar7 = &stack0x00000054;
    pfVar4 = (float *)&stack0x00000024;
    puVar3 = (uint64_t *)((int64_t)&param_6 + 4);
    fVar21 = fVar17 * fVar18 - fVar19 * fVar20;
    fVar21 = fVar21 + fVar21;
    auVar10._0_4_ = fVar19 * fVar18 + fVar19 * fVar18 + fVar17 * fVar20 + fVar17 * fVar20;
    fVar20 = 1.0 - (fVar19 * fVar19 + fVar19 * fVar19 + fVar17 * fVar17 + fVar17 * fVar17);
  }
  else if (iVar2 == 1) {
    pfVar6 = &stack0x00000050;
    pfVar7 = &stack0x00000058;
    pfVar4 = (float *)&param_5;
    puVar3 = (uint64_t *)&stack0x00000038;
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
  *(int32_t *)puVar3 = 0x3f800000;
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
  uVar26 = *(uint64_t *)(unaff_RBP + -0x80);
  param_5 = *(uint64_t *)(unaff_RBP + -0x78);
  fVar18 = -0.5;
  if (1e-05 < fVar17) {
    if (iVar2 == 0) {
      iVar2 = 1;
      if (auVar12._0_4_ < 0.0) {
        iVar2 = -1;
      }
                    // WARNING: Subroutine does not return
      AdvancedSystemController((float)iVar2 * fVar17 * -0.5);
    }
    if (iVar2 != 1) {
      if (auVar10._0_4_ < 0.0) {
        fVar18 = 0.5;
      }
      else {
        fVar18 = -0.5;
      }
                    // WARNING: Subroutine does not return
      AdvancedSystemController(fVar18 * fVar17);
    }
    FUN_18040f4d0(&stack0x00000020);
  }
  fVar19 = (float)uVar26;
  fVar20 = (float)((uint64_t)uVar26 >> 0x20);
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
      AdvancedSystemController(uVar8);
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
      AdvancedSystemController(fVar18 * fVar23);
    }
    if (iVar2 != 1) {
      if (in_stack_00000068 < 0.0) {
        fVar18 = 0.5;
      }
                    // WARNING: Subroutine does not return
      AdvancedSystemController(fVar18 * fVar23);
    }
    FUN_18040f4d0(&stack0x00000040);
    if (1e-05 < fVar19) {
      fVar17 = auVar10._0_4_ * auVar10._0_4_ + fVar20 * fVar20 + fVar21 * fVar21;
      auVar13 = ZEXT416((uint)fVar17);
      if ((0.98010004 < fVar17) && (fVar17 < 1.0201)) {
                    // WARNING: Subroutine does not return
        AdvancedSystemController(fVar19 * 0.5);
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





// 函数: void FUN_18040bec0(void)
void FUN_18040bec0(void)

{
  int8_t auVar1 [16];
  int iVar2;
  uint64_t *puVar3;
  int unaff_EBX;
  int64_t unaff_RBP;
  float *pfVar4;
  float *unaff_RDI;
  int64_t unaff_R13;
  float *pfVar5;
  float *pfVar6;
  int32_t uVar7;
  int8_t auVar8 [16];
  int8_t auVar9 [16];
  int8_t auVar10 [16];
  int8_t auVar11 [16];
  float fVar12;
  int8_t auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM13_Da;
  float unaff_XMM13_Db;
  float unaff_XMM13_Dc;
  float unaff_XMM13_Dd;
  float unaff_XMM15_Da;
  uint64_t in_stack_00000020;
  uint64_t uVar20;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  int32_t uStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  int32_t uStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float in_stack_00000070;
  
  uStack000000000000003c = (int32_t)((uint64_t)_fStack0000000000000030 >> 0x20);
  _fStack0000000000000030 = ZEXT812(0);
  fVar18 = (float)in_stack_00000020;
  fVar12 = (float)((uint64_t)in_stack_00000020 >> 0x20);
  if (unaff_EBX == 0) {
    pfVar5 = &stack0x00000058;
    pfVar6 = (float *)((int64_t)&stack0x00000050 + 4);
    pfVar4 = (float *)&stack0x00000024;
    puVar3 = (uint64_t *)((int64_t)&stack0x00000030 + 4);
    fVar17 = fVar12 * fStack0000000000000028 - fStack000000000000002c * fVar18;
    fVar17 = fVar17 + fVar17;
    fVar16 = fStack000000000000002c * fStack0000000000000028 +
             fStack000000000000002c * fStack0000000000000028 + fVar12 * fVar18 + fVar12 * fVar18;
    fVar18 = unaff_XMM10_Da -
             (fStack000000000000002c * fStack000000000000002c +
              fStack000000000000002c * fStack000000000000002c + fVar12 * fVar12 + fVar12 * fVar12);
  }
  else if (unaff_EBX == 1) {
    pfVar5 = &stack0x00000050;
    pfVar6 = &stack0x00000058;
    pfVar4 = &stack0x00000028;
    puVar3 = (uint64_t *)&stack0x00000038;
    fVar17 = fVar18 * fStack0000000000000028 + fVar18 * fStack0000000000000028 +
             fStack000000000000002c * fVar12 + fStack000000000000002c * fVar12;
    fVar18 = fStack000000000000002c * fStack0000000000000028 - fVar12 * fVar18;
    fVar18 = fVar18 + fVar18;
    fVar16 = unaff_XMM10_Da -
             (fStack0000000000000028 * fStack0000000000000028 +
              fStack0000000000000028 * fStack0000000000000028 + fVar12 * fVar12 + fVar12 * fVar12);
  }
  else {
    pfVar5 = (float *)((int64_t)&stack0x00000050 + 4);
    pfVar6 = &stack0x00000050;
    pfVar4 = (float *)&stack0x00000020;
    puVar3 = (uint64_t *)&stack0x00000030;
    fVar16 = fStack000000000000002c * fVar12 - fVar18 * fStack0000000000000028;
    fVar18 = fStack000000000000002c * fVar18 + fStack000000000000002c * fVar18 +
             fVar12 * fStack0000000000000028 + fVar12 * fStack0000000000000028;
    fVar16 = fVar16 + fVar16;
    fVar17 = unaff_XMM10_Da -
             (fStack0000000000000028 * fStack0000000000000028 +
              fStack0000000000000028 * fStack0000000000000028 +
             fStack000000000000002c * fStack000000000000002c +
             fStack000000000000002c * fStack000000000000002c);
  }
  *(int32_t *)puVar3 = 0x3f800000;
  fVar15 = fStack0000000000000038 * fVar18 - fVar16 * fStack0000000000000034;
  _fStack0000000000000028 = CONCAT44(0x7f7fffff,fVar16);
  auVar13._0_4_ = fVar17 * fStack0000000000000034 - fVar18 * fStack0000000000000030;
  fStack0000000000000064 = fVar16 * fStack0000000000000030 - fStack0000000000000038 * fVar17;
  fVar16 = fVar15 * fVar15 + fStack0000000000000064 * fStack0000000000000064 +
           auVar13._0_4_ * auVar13._0_4_;
  fVar12 = fVar16;
  if (fVar16 <= in_stack_00000070) {
    fVar12 = in_stack_00000070;
  }
  auVar8 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
  fVar19 = auVar8._0_4_;
  fVar12 = fVar12 * fVar19 * fVar19;
  fVar19 = fVar19 * 0.5 * (3.0 - fVar12);
  auVar9._4_4_ = 0x3f000000;
  auVar9._0_4_ = fVar19;
  auVar9._8_4_ = 0x3f000000;
  auVar9._12_4_ = 0x3f000000;
  auVar8._4_4_ = 0x3f000000;
  auVar8._0_4_ = fVar19;
  auVar8._8_4_ = 0x3f000000;
  auVar8._12_4_ = 0x3f000000;
  fStack0000000000000064 = fVar19 * fStack0000000000000064;
  auVar13._4_12_ = auVar8._4_12_;
  auVar13._0_4_ = fVar19 * auVar13._0_4_;
  auVar10._4_12_ = auVar9._4_12_;
  auVar10._0_4_ = fVar19 * fVar15;
  fVar19 = fVar19 * fVar16;
  *(float *)(unaff_RBP + 0x98) = fStack0000000000000064;
  *(float *)(unaff_RBP + 0xb0) = auVar13._0_4_;
  if (unaff_XMM11_Da <= fVar19) {
    if (unaff_XMM10_Da <= fVar19) {
      fVar19 = unaff_XMM10_Da;
    }
  }
  else {
    fVar19 = 0.0;
  }
  fStack0000000000000060 = auVar10._0_4_;
  fStack0000000000000068 = auVar13._0_4_;
  fVar18 = (float)asinf(fVar19,auVar13._0_8_,auVar10._0_8_,fVar12,CONCAT44(fVar18,fVar17));
  if (unaff_XMM11_Da < *pfVar4 || unaff_XMM11_Da == *pfVar4) {
    auVar13._0_4_ = *(float *)(unaff_RBP + 0xb0);
  }
  else {
    fVar18 = unaff_XMM15_Da - fVar18;
  }
  uVar20 = *(uint64_t *)(unaff_RBP + -0x80);
  _fStack0000000000000028 = *(uint64_t *)(unaff_RBP + -0x78);
  fVar12 = -0.5;
  if (1e-05 < fVar18) {
    if (unaff_EBX == 0) {
      iVar2 = 1;
      if (auVar10._0_4_ < unaff_XMM11_Da) {
        iVar2 = -1;
      }
                    // WARNING: Subroutine does not return
      AdvancedSystemController((float)iVar2 * fVar18 * -0.5);
    }
    if (unaff_EBX != 1) {
      if (auVar13._0_4_ < unaff_XMM11_Da) {
        fVar12 = 0.5;
      }
      else {
        fVar12 = -0.5;
      }
                    // WARNING: Subroutine does not return
      AdvancedSystemController(fVar12 * fVar18);
    }
    FUN_18040f4d0(&stack0x00000020);
  }
  fVar16 = (float)uVar20;
  fVar17 = (float)((uint64_t)uVar20 >> 0x20);
  auVar11._4_4_ =
       fStack0000000000000028 * *(float *)(unaff_RBP + -0x70) * -1.0 +
       *(float *)(unaff_RBP + -0x60) * fVar17 * -1.0 +
       fStack000000000000002c * unaff_XMM13_Da + fVar16 * *(float *)(unaff_RBP + -0x50);
  auVar11._0_4_ =
       fStack000000000000002c * *(float *)(unaff_RBP + -100) * 1.0 +
       *(float *)(unaff_RBP + -0x54) * fVar16 * 1.0 +
       fVar17 * unaff_XMM13_Dd + fStack0000000000000028 * *(float *)(unaff_RBP + -0x44);
  auVar11._8_4_ =
       fStack000000000000002c * *(float *)(unaff_RBP + -0x6c) * -1.0 +
       *(float *)(unaff_RBP + -0x5c) * fStack0000000000000028 * -1.0 +
       fVar17 * unaff_XMM13_Db + fVar16 * *(float *)(unaff_RBP + -0x4c);
  auVar11._12_4_ =
       fVar17 * *(float *)(unaff_RBP + -0x68) * -1.0 +
       *(float *)(unaff_RBP + -0x58) * fStack000000000000002c * -1.0 +
       fStack0000000000000028 * unaff_XMM13_Dc + fVar16 * *(float *)(unaff_RBP + -0x48);
  _fStack0000000000000030 = auVar11;
  FUN_18063b720(&stack0x00000050,unaff_RBP + 0xa8,&stack0x00000030);
  fVar15 = fStack0000000000000058;
  fVar17 = fStack0000000000000050;
  fVar16 = *(float *)(unaff_RBP + 0xa8);
  if (1e-05 < fVar16) {
    auVar13._0_4_ =
         fStack0000000000000054 * fStack0000000000000054 +
         fStack0000000000000050 * fStack0000000000000050 +
         fStack0000000000000058 * fStack0000000000000058;
    auVar11 = ZEXT416((uint)auVar13._0_4_);
    if ((0.98010004 < auVar13._0_4_) && (auVar13._0_4_ < 1.0201)) {
      if (3.1415927 < fVar16) {
        uStack000000000000005c = 0x7f7fffff;
        fStack0000000000000050 = -fStack0000000000000050;
        fStack0000000000000054 = -fStack0000000000000054;
        fStack0000000000000058 = -fStack0000000000000058;
      }
      fVar18 = *pfVar6;
      fVar12 = -*pfVar5;
      if (((fVar12 != unaff_XMM11_Da) || (fVar18 != unaff_XMM11_Da)) &&
         ((fVar18 = fVar18 * fVar18 + fVar12 * fVar12, fVar18 <= 0.98010004 || (1.0201 <= fVar18))))
      {
        auVar13 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
        fVar16 = auVar13._0_4_;
        fVar12 = fVar16 * 0.5 * (3.0 - fVar18 * fVar16 * fVar16) * fVar12;
      }
      uVar7 = atan2f(-fVar12);
                    // WARNING: Subroutine does not return
      AdvancedSystemController(uVar7);
    }
  }
  auVar13._0_4_ = *(float *)(unaff_RBP + 0xb8) * *(float *)(unaff_R13 + 0x34);
  fVar19 = *(float *)(unaff_RBP + 0xb8) * *(float *)(unaff_R13 + 0x38);
  if ((fVar18 < auVar13._0_4_) || (fVar19 <= fVar18)) {
    if ((auVar13._0_4_ <= fVar18) && (auVar13._0_4_ = fVar19, fVar18 <= fVar19)) {
      auVar13._0_4_ = fVar18;
    }
    if (unaff_EBX == 0) {
      if (fStack0000000000000060 < unaff_XMM11_Da) {
        fVar12 = 0.5;
      }
                    // WARNING: Subroutine does not return
      AdvancedSystemController(fVar12 * auVar13._0_4_);
    }
    if (unaff_EBX != 1) {
      if (fStack0000000000000068 < unaff_XMM11_Da) {
        fVar12 = 0.5;
      }
                    // WARNING: Subroutine does not return
      AdvancedSystemController(fVar12 * auVar13._0_4_);
    }
    FUN_18040f4d0(&stack0x00000040);
    if (1e-05 < fVar16) {
      fVar18 = fStack0000000000000054 * fStack0000000000000054 + fVar17 * fVar17 + fVar15 * fVar15;
      auVar11 = ZEXT416((uint)fVar18);
      if ((0.98010004 < fVar18) && (fVar18 < 1.0201)) {
                    // WARNING: Subroutine does not return
        AdvancedSystemController(fVar16 * 0.5);
      }
    }
    fVar18 = fStack000000000000004c * fStack000000000000004c +
             fStack0000000000000040 * fStack0000000000000040;
    fVar12 = fStack0000000000000048 * fStack0000000000000048 +
             fStack0000000000000044 * fStack0000000000000044;
    fVar19 = fVar18 + fStack0000000000000044 * fStack0000000000000044 +
                      fStack0000000000000048 * fStack0000000000000048;
    fVar14 = fVar12 + fStack0000000000000040 * fStack0000000000000040 +
                      fStack000000000000004c * fStack000000000000004c;
    auVar1._4_4_ = fVar18 + fVar12 + 1.1754944e-38;
    auVar1._0_4_ = fVar12 + fVar18 + 1.1754944e-38;
    auVar1._8_4_ = fVar19 + 1.1754944e-38;
    auVar1._12_4_ = fVar14 + 1.1754944e-38;
    auVar13 = rsqrtps(auVar11,auVar1);
    fVar16 = auVar13._0_4_;
    fVar17 = auVar13._4_4_;
    fVar15 = auVar13._8_4_;
    auVar13._0_4_ = auVar13._12_4_;
    *unaff_RDI = (3.0 - fVar16 * fVar16 * (fVar12 + fVar18)) * fVar16 * 0.5 * fStack0000000000000040
    ;
    unaff_RDI[1] = (3.0 - fVar17 * fVar17 * (fVar18 + fVar12)) * fVar17 * 0.5 *
                   fStack0000000000000044;
    unaff_RDI[2] = (3.0 - fVar15 * fVar15 * fVar19) * fVar15 * 0.5 * fStack0000000000000048;
    unaff_RDI[3] = (3.0 - auVar13._0_4_ * auVar13._0_4_ * fVar14) * auVar13._0_4_ * 0.5 *
                   fStack000000000000004c;
  }
  return;
}





