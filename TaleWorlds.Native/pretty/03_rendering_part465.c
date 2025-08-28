#include "TaleWorlds.Native.Split.h"

// 03_rendering_part465.c - 9 个函数

// 函数: void FUN_18051847b(undefined8 param_1,undefined8 param_2,char param_3)
void FUN_18051847b(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  int iVar12;
  float *pfVar13;
  longlong unaff_RBP;
  char unaff_SIL;
  longlong unaff_RDI;
  float *unaff_R14;
  longlong unaff_R15;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float extraout_XMM0_Da;
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float unaff_XMM6_Da;
  float unaff_XMM6_Db;
  float unaff_XMM6_Dc;
  float fVar33;
  float unaff_XMM6_Dd;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  
  pfVar13 = unaff_R14;
  if (unaff_SIL != param_3) {
    pfVar13 = unaff_R14 + 8;
  }
  fVar22 = pfVar13[4];
  fVar24 = pfVar13[5];
  fVar27 = pfVar13[6];
  fVar20 = *pfVar13;
  fVar21 = pfVar13[1];
  fVar23 = pfVar13[2];
  fVar30 = pfVar13[3];
  lVar3 = *(longlong *)(*(longlong *)(unaff_RDI + 0x6d8) + 0x8a8);
  *(undefined4 *)(unaff_RBP + -0x44) = 0x7f7fffff;
  cVar2 = *(char *)(*(longlong *)(*(longlong *)(lVar3 + 0x260) + 0x210) + 0xe1);
  if (cVar2 != param_3) {
    unaff_R14 = unaff_R14 + 8;
  }
  fVar32 = unaff_R14[5];
  _fStack0000000000000070 = *(undefined8 *)(unaff_R14 + 4);
  fVar25 = unaff_R14[6];
  _fStack0000000000000078 = *(undefined8 *)(unaff_R14 + 6);
  fVar7 = *unaff_R14;
  fVar8 = unaff_R14[1];
  fVar9 = unaff_R14[2];
  fVar10 = unaff_R14[3];
  *(float *)(unaff_RBP + -0x50) = fVar22 - unaff_R14[4];
  *(float *)(unaff_RBP + -0x4c) = fVar24 - fVar32;
  *(float *)(unaff_RBP + -0x48) = fVar27 - fVar25;
  fStack0000000000000060 = fVar7;
  fStack0000000000000064 = fVar8;
  fStack0000000000000068 = fVar9;
  fStack000000000000006c = fVar10;
  uVar14 = FUN_180285b40(&stack0x00000060,unaff_RBP + -0x60,unaff_RBP + -0x50);
  pfVar13 = (float *)FUN_18022a890(uVar14,cVar2,
                                   *(undefined8 *)(*(longlong *)(unaff_RDI + 0x658) + 0x208));
  fVar22 = *pfVar13;
  fVar24 = pfVar13[1];
  fVar27 = pfVar13[2];
  fVar32 = pfVar13[3];
  fVar25 = fVar23 * unaff_XMM6_Dc;
  fVar26 = fVar30 * unaff_XMM6_Dd;
  *(undefined8 *)(unaff_RBP + -0x30) = 0x3f8000003f800000;
  *(undefined8 *)(unaff_RBP + -0x28) = 0x3f8000003f800000;
  puVar1 = (undefined8 *)(unaff_R15 + ((longlong)cVar2 + 0x40) * 0x10);
  _fStack0000000000000070 = *puVar1;
  _fStack0000000000000078 = puVar1[1];
  *(undefined8 *)(unaff_RBP + -0x20) = 0xbf800000bf800000;
  *(undefined8 *)(unaff_RBP + -0x18) = 0xbf800000bf800000;
  auVar29._0_4_ = fVar25 + fVar20 * unaff_XMM6_Da;
  auVar29._4_4_ = fVar26 + fVar21 * unaff_XMM6_Db;
  auVar29._8_4_ = fVar25 + fVar25;
  auVar29._12_4_ = fVar26 + fVar26;
  auVar28._4_12_ = auVar29._4_12_;
  auVar28._0_4_ = auVar29._0_4_ + auVar29._4_4_;
  uVar11 = movmskps((int)((longlong)cVar2 + 0x40) * 2,auVar28);
  iVar12 = (uVar11 & 1) * 2;
  pfVar13 = (float *)(unaff_RBP + -0x30 + (ulonglong)(uVar11 & 1) * 0x10);
  fVar25 = *pfVar13;
  fVar26 = pfVar13[1];
  fVar19 = pfVar13[2];
  fVar31 = pfVar13[3];
  if (0.9995 < ABS(auVar28._0_4_)) {
    fVar15 = fVar25 * unaff_XMM6_Da * 0.5 + fVar20 * 0.5;
    fVar16 = fVar26 * unaff_XMM6_Db * 0.5 + fVar21 * 0.5;
    fVar33 = fVar19 * unaff_XMM6_Dc * 0.5 + fVar23 * 0.5;
    fVar17 = fVar31 * unaff_XMM6_Dd * 0.5 + fVar30 * 0.5;
    fVar20 = fVar17 * fVar17 + fVar15 * fVar15;
    fVar21 = fVar33 * fVar33 + fVar16 * fVar16;
    fVar19 = fVar20 + fVar16 * fVar16 + fVar33 * fVar33;
    fVar31 = fVar21 + fVar15 * fVar15 + fVar17 * fVar17;
    auVar5._4_4_ = fVar20 + fVar21 + 1.1754944e-38;
    auVar5._0_4_ = fVar21 + fVar20 + 1.1754944e-38;
    auVar5._8_4_ = fVar19 + 1.1754944e-38;
    auVar5._12_4_ = fVar31 + 1.1754944e-38;
    auVar28 = rsqrtps(auVar28,auVar5);
    fVar23 = auVar28._0_4_;
    fVar30 = auVar28._4_4_;
    fVar25 = auVar28._8_4_;
    fVar26 = auVar28._12_4_;
    fVar15 = fVar15 * (3.0 - fVar23 * fVar23 * (fVar21 + fVar20)) * fVar23 * 0.5;
    fVar16 = fVar16 * (3.0 - fVar30 * fVar30 * (fVar20 + fVar21)) * fVar30 * 0.5;
    fVar33 = fVar33 * (3.0 - fVar25 * fVar25 * fVar19) * fVar25 * 0.5;
    fVar17 = fVar17 * (3.0 - fVar26 * fVar26 * fVar31) * fVar26 * 0.5;
  }
  else {
    fVar15 = (float)acosf();
    fVar16 = (float)sinf();
    fVar17 = (float)sinf(fVar15 - fVar15 * 0.5);
    fVar17 = fVar17 * (1.0 / fVar16);
    iVar12 = sinf(fVar15 * 0.5);
    fVar18 = extraout_XMM0_Da * (1.0 / fVar16);
    fVar15 = fVar17 * fVar20 + fVar18 * fVar25 * unaff_XMM6_Da;
    fVar16 = fVar17 * fVar21 + fVar18 * fVar26 * unaff_XMM6_Db;
    fVar33 = fVar17 * fVar23 + fVar18 * fVar19 * unaff_XMM6_Dc;
    fVar17 = fVar17 * fVar30 + fVar18 * fVar31 * unaff_XMM6_Dd;
  }
  fVar20 = fVar27 * fVar9;
  fVar21 = fVar32 * fVar10;
  *(undefined8 *)(unaff_RBP + -0x50) = 0x3f8000003f800000;
  *(undefined8 *)(unaff_RBP + -0x48) = 0x3f8000003f800000;
  *(undefined8 *)(unaff_RBP + -0x40) = 0xbf800000bf800000;
  *(undefined8 *)(unaff_RBP + -0x38) = 0xbf800000bf800000;
  fVar23 = fVar21 + fVar24 * fVar8;
  *(float *)(unaff_RBP + -0x30) = fVar15;
  *(float *)(unaff_RBP + -0x2c) = fVar16;
  *(float *)(unaff_RBP + -0x28) = fVar33;
  *(float *)(unaff_RBP + -0x24) = fVar17;
  fVar25 = fVar20 + fVar22 * fVar7 + fVar23;
  auVar6._4_4_ = fVar23;
  auVar6._0_4_ = fVar25;
  auVar6._8_4_ = fVar20 + fVar20;
  auVar6._12_4_ = fVar21 + fVar21;
  uVar11 = movmskps(iVar12,auVar6);
  pfVar13 = (float *)(unaff_RBP + -0x50 + (ulonglong)(uVar11 & 1) * 0x10);
  fVar20 = *pfVar13;
  fVar21 = pfVar13[1];
  fVar23 = pfVar13[2];
  fVar30 = pfVar13[3];
  if (0.9995 < ABS(fVar25)) {
    fStack0000000000000060 = fVar20 * fVar7 * 0.4 + fVar22 * 0.6;
    fStack0000000000000064 = fVar21 * fVar8 * 0.4 + fVar24 * 0.6;
    fStack0000000000000068 = fVar23 * fVar9 * 0.4 + fVar27 * 0.6;
    fStack000000000000006c = fVar30 * fVar10 * 0.4 + fVar32 * 0.6;
    fVar22 = fStack000000000000006c * fStack000000000000006c +
             fStack0000000000000060 * fStack0000000000000060;
    fVar24 = fStack0000000000000068 * fStack0000000000000068 +
             fStack0000000000000064 * fStack0000000000000064;
    fVar30 = fVar22 + fStack0000000000000064 * fStack0000000000000064 +
                      fStack0000000000000068 * fStack0000000000000068;
    fVar32 = fVar24 + fStack0000000000000060 * fStack0000000000000060 +
                      fStack000000000000006c * fStack000000000000006c;
    auVar4._4_4_ = fVar22 + fVar24 + 1.1754944e-38;
    auVar4._0_4_ = fVar24 + fVar22 + 1.1754944e-38;
    auVar4._8_4_ = fVar30 + 1.1754944e-38;
    auVar4._12_4_ = fVar32 + 1.1754944e-38;
    auVar29 = rsqrtps(auVar28,auVar4);
    fVar27 = auVar29._0_4_;
    fVar20 = auVar29._4_4_;
    fVar21 = auVar29._8_4_;
    fVar23 = auVar29._12_4_;
    fStack0000000000000060 =
         fStack0000000000000060 * (3.0 - fVar27 * fVar27 * (fVar24 + fVar22)) * fVar27 * 0.5;
    fStack0000000000000064 =
         fStack0000000000000064 * (3.0 - fVar20 * fVar20 * (fVar22 + fVar24)) * fVar20 * 0.5;
    fStack0000000000000068 =
         fStack0000000000000068 * (3.0 - fVar21 * fVar21 * fVar30) * fVar21 * 0.5;
    fStack000000000000006c =
         fStack000000000000006c * (3.0 - fVar23 * fVar23 * fVar32) * fVar23 * 0.5;
  }
  else {
    fVar25 = (float)acosf();
    fVar26 = (float)sinf();
    fVar19 = (float)sinf(fVar25 - fVar25 * 0.4);
    fVar19 = fVar19 * (1.0 / fVar26);
    fVar25 = (float)sinf(fVar25 * 0.4);
    fVar25 = fVar25 * (1.0 / fVar26);
    fStack0000000000000060 = fVar19 * fVar22 + fVar25 * fVar20 * fVar7;
    fStack0000000000000064 = fVar19 * fVar24 + fVar25 * fVar21 * fVar8;
    fStack0000000000000068 = fVar19 * fVar27 + fVar25 * fVar23 * fVar9;
    fStack000000000000006c = fVar19 * fVar32 + fVar25 * fVar30 * fVar10;
  }
  pfVar13 = (float *)FUN_1801c0fb0(&stack0x00000060,unaff_RBP + -0x50,unaff_RBP + -0x60);
  fVar22 = pfVar13[1];
  fVar24 = pfVar13[2];
  lVar3 = *(longlong *)(unaff_RDI + 0x590);
  *(float *)(unaff_RBP + -0x50) =
       (fStack0000000000000070 + *pfVar13) - *(float *)(unaff_RBP + -0x70);
  *(float *)(unaff_RBP + -0x4c) = (fStack0000000000000074 + fVar22) - *(float *)(unaff_RBP + -0x6c);
  *(float *)(unaff_RBP + -0x48) = (fStack0000000000000078 + fVar24) - *(float *)(unaff_RBP + -0x68);
  *(undefined4 *)(unaff_RBP + -0x44) = 0x7f7fffff;
  FUN_180575540(lVar3,2,unaff_SIL,*(undefined1 *)(lVar3 + 0x2600),unaff_RBP + -0x50);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x10) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18051860f(void)
void FUN_18051860f(void)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  uint uVar4;
  float *pfVar5;
  longlong unaff_RBP;
  undefined1 unaff_SIL;
  longlong unaff_RDI;
  float fVar6;
  float fVar7;
  float fVar8;
  float extraout_XMM0_Da;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 in_XMM2 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM10_Db;
  float unaff_XMM10_Dc;
  float unaff_XMM10_Dd;
  float unaff_XMM11_Da;
  float unaff_XMM11_Db;
  float unaff_XMM11_Dc;
  float unaff_XMM11_Dd;
  float unaff_XMM12_Da;
  float unaff_XMM12_Db;
  float unaff_XMM12_Dc;
  float unaff_XMM12_Dd;
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
  float in_stack_00000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  
  fVar6 = (float)acosf();
  fVar7 = (float)sinf();
  fVar8 = (float)sinf(fVar6 - fVar6 * 0.5);
  fVar8 = fVar8 * (unaff_XMM9_Da / fVar7);
  uVar3 = sinf(fVar6 * 0.5);
  fVar6 = extraout_XMM0_Da * (unaff_XMM9_Da / fVar7);
  fVar7 = unaff_XMM11_Dc * unaff_XMM12_Dc;
  fVar10 = unaff_XMM11_Dd * unaff_XMM12_Dd;
  *(undefined4 *)(unaff_RBP + -0x50) = unaff_XMM14_Da;
  *(undefined4 *)(unaff_RBP + -0x4c) = unaff_XMM14_Db;
  *(undefined4 *)(unaff_RBP + -0x48) = unaff_XMM14_Dc;
  *(undefined4 *)(unaff_RBP + -0x44) = unaff_XMM14_Dd;
  *(undefined4 *)(unaff_RBP + -0x40) = unaff_XMM15_Da;
  *(undefined4 *)(unaff_RBP + -0x3c) = unaff_XMM15_Db;
  *(undefined4 *)(unaff_RBP + -0x38) = unaff_XMM15_Dc;
  *(undefined4 *)(unaff_RBP + -0x34) = unaff_XMM15_Dd;
  fVar12 = fVar10 + unaff_XMM11_Db * unaff_XMM12_Db;
  *(float *)(unaff_RBP + -0x30) = fVar8 * unaff_XMM10_Da + fVar6 * unaff_XMM13_Da;
  *(float *)(unaff_RBP + -0x2c) = fVar8 * unaff_XMM10_Db + fVar6 * unaff_XMM13_Db;
  *(float *)(unaff_RBP + -0x28) = fVar8 * unaff_XMM10_Dc + fVar6 * unaff_XMM13_Dc;
  *(float *)(unaff_RBP + -0x24) = fVar8 * unaff_XMM10_Dd + fVar6 * unaff_XMM13_Dd;
  fVar11 = fVar7 + unaff_XMM11_Da * unaff_XMM12_Da + fVar12;
  auVar13._4_4_ = fVar12;
  auVar13._0_4_ = fVar11;
  auVar13._8_4_ = fVar7 + fVar7;
  auVar13._12_4_ = fVar10 + fVar10;
  uVar4 = movmskps(uVar3,auVar13);
  pfVar5 = (float *)(unaff_RBP + -0x50 + (ulonglong)(uVar4 & 1) * 0x10);
  fVar6 = *pfVar5;
  fVar7 = pfVar5[1];
  fVar8 = pfVar5[2];
  fVar10 = pfVar5[3];
  if (0.9995 < ABS(fVar11)) {
    in_stack_00000060 = fVar6 * unaff_XMM12_Da * 0.4 + unaff_XMM11_Da * 0.6;
    fStack0000000000000064 = fVar7 * unaff_XMM12_Db * 0.4 + unaff_XMM11_Db * 0.6;
    in_stack_00000068 = fVar8 * unaff_XMM12_Dc * 0.4 + unaff_XMM11_Dc * 0.6;
    fStack000000000000006c = fVar10 * unaff_XMM12_Dd * 0.4 + unaff_XMM11_Dd * 0.6;
    fVar6 = fStack000000000000006c * fStack000000000000006c + in_stack_00000060 * in_stack_00000060;
    fVar7 = in_stack_00000068 * in_stack_00000068 + fStack0000000000000064 * fStack0000000000000064;
    fVar9 = fVar6 + fStack0000000000000064 * fStack0000000000000064 +
                    in_stack_00000068 * in_stack_00000068;
    fVar14 = fVar7 + in_stack_00000060 * in_stack_00000060 +
                     fStack000000000000006c * fStack000000000000006c;
    auVar2._4_4_ = fVar6 + fVar7 + 1.1754944e-38;
    auVar2._0_4_ = fVar7 + fVar6 + 1.1754944e-38;
    auVar2._8_4_ = fVar9 + 1.1754944e-38;
    auVar2._12_4_ = fVar14 + 1.1754944e-38;
    auVar13 = rsqrtps(in_XMM2,auVar2);
    fVar8 = auVar13._0_4_;
    fVar10 = auVar13._4_4_;
    fVar11 = auVar13._8_4_;
    fVar12 = auVar13._12_4_;
    in_stack_00000060 = in_stack_00000060 * (3.0 - fVar8 * fVar8 * (fVar7 + fVar6)) * fVar8 * 0.5;
    fStack0000000000000064 =
         fStack0000000000000064 * (3.0 - fVar10 * fVar10 * (fVar6 + fVar7)) * fVar10 * 0.5;
    in_stack_00000068 = in_stack_00000068 * (3.0 - fVar11 * fVar11 * fVar9) * fVar11 * 0.5;
    fStack000000000000006c =
         fStack000000000000006c * (3.0 - fVar12 * fVar12 * fVar14) * fVar12 * 0.5;
  }
  else {
    fVar11 = (float)acosf();
    fVar12 = (float)sinf();
    fVar9 = (float)sinf(fVar11 - fVar11 * 0.4);
    fVar9 = fVar9 * (unaff_XMM9_Da / fVar12);
    fVar11 = (float)sinf(fVar11 * 0.4);
    fVar11 = fVar11 * (unaff_XMM9_Da / fVar12);
    in_stack_00000060 = fVar9 * unaff_XMM11_Da + fVar11 * fVar6 * unaff_XMM12_Da;
    fStack0000000000000064 = fVar9 * unaff_XMM11_Db + fVar11 * fVar7 * unaff_XMM12_Db;
    in_stack_00000068 = fVar9 * unaff_XMM11_Dc + fVar11 * fVar8 * unaff_XMM12_Dc;
    fStack000000000000006c = fVar9 * unaff_XMM11_Dd + fVar11 * fVar10 * unaff_XMM12_Dd;
  }
  pfVar5 = (float *)FUN_1801c0fb0(&stack0x00000060,unaff_RBP + -0x50,unaff_RBP + -0x60);
  fVar6 = pfVar5[1];
  fVar7 = pfVar5[2];
  lVar1 = *(longlong *)(unaff_RDI + 0x590);
  *(float *)(unaff_RBP + -0x50) = (fStack0000000000000070 + *pfVar5) - *(float *)(unaff_RBP + -0x70)
  ;
  *(float *)(unaff_RBP + -0x4c) = (fStack0000000000000074 + fVar6) - *(float *)(unaff_RBP + -0x6c);
  *(float *)(unaff_RBP + -0x48) = (in_stack_00000078 + fVar7) - *(float *)(unaff_RBP + -0x68);
  *(undefined4 *)(unaff_RBP + -0x44) = 0x7f7fffff;
  FUN_180575540(lVar1,2,unaff_SIL,*(undefined1 *)(lVar1 + 0x2600),unaff_RBP + -0x50);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x10) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180518748(void)
void FUN_180518748(void)

{
  longlong lVar1;
  float *pfVar2;
  longlong unaff_RBP;
  undefined1 unaff_SIL;
  longlong unaff_RDI;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_XMM8_Da;
  float unaff_XMM8_Db;
  float unaff_XMM8_Dc;
  float unaff_XMM8_Dd;
  float unaff_XMM9_Da;
  float unaff_XMM11_Da;
  float unaff_XMM11_Db;
  float unaff_XMM11_Dc;
  float unaff_XMM11_Dd;
  float in_stack_00000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  
  fVar3 = (float)acosf();
  fVar4 = (float)sinf();
  fVar5 = (float)sinf(fVar3 - fVar3 * 0.4);
  fVar5 = fVar5 * (unaff_XMM9_Da / fVar4);
  fVar3 = (float)sinf(fVar3 * 0.4);
  fVar3 = fVar3 * (unaff_XMM9_Da / fVar4);
  in_stack_00000060 = fVar5 * unaff_XMM11_Da + fVar3 * unaff_XMM8_Da;
  fStack0000000000000064 = fVar5 * unaff_XMM11_Db + fVar3 * unaff_XMM8_Db;
  in_stack_00000068 = fVar5 * unaff_XMM11_Dc + fVar3 * unaff_XMM8_Dc;
  fStack000000000000006c = fVar5 * unaff_XMM11_Dd + fVar3 * unaff_XMM8_Dd;
  pfVar2 = (float *)FUN_1801c0fb0(&stack0x00000060,unaff_RBP + -0x50,unaff_RBP + -0x60);
  fVar3 = pfVar2[1];
  fVar4 = pfVar2[2];
  lVar1 = *(longlong *)(unaff_RDI + 0x590);
  *(float *)(unaff_RBP + -0x50) = (fStack0000000000000070 + *pfVar2) - *(float *)(unaff_RBP + -0x70)
  ;
  *(float *)(unaff_RBP + -0x4c) = (fStack0000000000000074 + fVar3) - *(float *)(unaff_RBP + -0x6c);
  *(float *)(unaff_RBP + -0x48) = (in_stack_00000078 + fVar4) - *(float *)(unaff_RBP + -0x68);
  *(undefined4 *)(unaff_RBP + -0x44) = 0x7f7fffff;
  FUN_180575540(lVar1,2,unaff_SIL,*(undefined1 *)(lVar1 + 0x2600),unaff_RBP + -0x50);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x10) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18051888a(longlong param_1)
void FUN_18051888a(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong unaff_RBP;
  undefined1 unaff_SIL;
  longlong unaff_RDI;
  longlong lStack0000000000000028;
  undefined4 uStack0000000000000030;
  undefined1 uStack0000000000000038;
  undefined1 uStack0000000000000048;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  
  uVar5 = *(undefined8 *)(param_1 + 0xa638);
  uVar1 = *(undefined4 *)(param_1 + 0xa640);
  uVar2 = *(undefined4 *)(param_1 + 0xa644);
  uVar3 = *(undefined4 *)(param_1 + 0xa648);
  uVar4 = *(undefined4 *)(param_1 + 0xa64c);
  *(undefined8 *)(unaff_RBP + -0x50) = *(undefined8 *)(param_1 + 0xa630);
  *(undefined8 *)(unaff_RBP + -0x48) = uVar5;
  *(undefined4 *)(unaff_RBP + -0x30) = uVar1;
  *(undefined4 *)(unaff_RBP + -0x2c) = uVar2;
  *(undefined4 *)(unaff_RBP + -0x28) = uVar3;
  *(undefined4 *)(unaff_RBP + -0x24) = uVar4;
  uStack0000000000000058 = *(undefined8 *)(unaff_RDI + 0x658);
  lStack0000000000000028 = unaff_RBP + -0x30;
  uStack0000000000000050 = 2;
  uStack0000000000000048 = 1;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0x40400000;
  FUN_180575540(0x40400000,2,unaff_SIL,*(undefined1 *)(param_1 + 0x2600),unaff_RBP + -0x50);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x10) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180518970(longlong param_1,longlong param_2)
void FUN_180518970(longlong param_1,longlong param_2)

{
  float *pfVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  cVar2 = *(char *)(*(longlong *)
                     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x8a8) + 0x260) +
                     0x210) + 0xe3);
  FUN_18022a890(param_2,cVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x658) + 0x208));
  fVar17 = (float)_DAT_180c8ed38;
  pfVar1 = (float *)(param_2 + ((longlong)cVar2 + 0x40) * 0x10);
  fVar15 = *pfVar1;
  fVar6 = pfVar1[1];
  fVar7 = pfVar1[2];
  fVar8 = pfVar1[3];
  lVar10 = *(longlong *)(param_1 + 0x728);
  fVar16 = fVar17 * 1e-05 - *(float *)(lVar10 + 0x564);
  fVar14 = (*(float *)(lVar10 + 0x4f4) - fVar15) * 0.4;
  fVar13 = (*(float *)(lVar10 + 0x4f8) - fVar6) * 0.4;
  fVar12 = (*(float *)(lVar10 + 0x4fc) - fVar7) * 0.4;
  *(float *)(lVar10 + 0x504) = fVar14 + *(float *)(lVar10 + 0x504);
  *(float *)(lVar10 + 0x508) = fVar13 + *(float *)(lVar10 + 0x508);
  *(float *)(lVar10 + 0x50c) = fVar12 + *(float *)(lVar10 + 0x50c);
  lVar10 = *(longlong *)(param_1 + 0x728);
  *(float *)(lVar10 + 0x51c) = fVar12 + *(float *)(lVar10 + 0x51c);
  *(float *)(lVar10 + 0x518) = fVar13 + *(float *)(lVar10 + 0x518);
  *(float *)(lVar10 + 0x514) = fVar14 + *(float *)(lVar10 + 0x514);
  lVar10 = *(longlong *)(param_1 + 0x728);
  *(float *)(lVar10 + 0x4f4) = fVar15;
  *(float *)(lVar10 + 0x4f8) = fVar6;
  *(float *)(lVar10 + 0x4fc) = fVar7;
  *(float *)(lVar10 + 0x500) = fVar8;
  lVar10 = *(longlong *)(param_1 + 0x728);
  *(float *)(lVar10 + 0x524) =
       *(float *)(lVar10 + 0x524) - fVar16 * *(float *)(lVar10 + 0x504) * 400.0;
  *(float *)(lVar10 + 0x528) =
       *(float *)(lVar10 + 0x528) - *(float *)(lVar10 + 0x508) * fVar16 * 400.0;
  *(float *)(lVar10 + 0x52c) =
       *(float *)(lVar10 + 0x52c) - *(float *)(lVar10 + 0x50c) * fVar16 * 400.0;
  lVar10 = *(longlong *)(param_1 + 0x728);
  *(float *)(lVar10 + 0x534) =
       *(float *)(lVar10 + 0x534) - fVar16 * *(float *)(lVar10 + 0x514) * 400.0;
  fVar15 = 1.0 - fVar16 * 20.0;
  *(float *)(lVar10 + 0x538) =
       *(float *)(lVar10 + 0x538) - *(float *)(lVar10 + 0x518) * fVar16 * 400.0;
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  *(float *)(lVar10 + 0x53c) =
       *(float *)(lVar10 + 0x53c) - *(float *)(lVar10 + 0x51c) * fVar16 * 400.0;
  lVar10 = *(longlong *)(param_1 + 0x728);
  *(float *)(lVar10 + 0x524) = fVar15 * *(float *)(lVar10 + 0x524);
  *(float *)(lVar10 + 0x528) = fVar15 * *(float *)(lVar10 + 0x528);
  *(float *)(lVar10 + 0x52c) = fVar15 * *(float *)(lVar10 + 0x52c);
  lVar10 = *(longlong *)(param_1 + 0x728);
  *(float *)(lVar10 + 0x538) = fVar15 * *(float *)(lVar10 + 0x538);
  *(float *)(lVar10 + 0x534) = fVar15 * *(float *)(lVar10 + 0x534);
  *(float *)(lVar10 + 0x53c) = fVar15 * *(float *)(lVar10 + 0x53c);
  lVar10 = *(longlong *)(param_1 + 0x728);
  *(float *)(lVar10 + 0x508) = fVar16 * *(float *)(lVar10 + 0x528) + *(float *)(lVar10 + 0x508);
  *(float *)(lVar10 + 0x50c) = fVar16 * *(float *)(lVar10 + 0x52c) + *(float *)(lVar10 + 0x50c);
  *(float *)(lVar10 + 0x504) = fVar16 * *(float *)(lVar10 + 0x524) + *(float *)(lVar10 + 0x504);
  lVar10 = *(longlong *)(param_1 + 0x728);
  *(float *)(lVar10 + 0x518) = fVar16 * *(float *)(lVar10 + 0x538) + *(float *)(lVar10 + 0x518);
  *(float *)(lVar10 + 0x51c) = fVar16 * *(float *)(lVar10 + 0x53c) + *(float *)(lVar10 + 0x51c);
  *(float *)(lVar10 + 0x514) = fVar16 * *(float *)(lVar10 + 0x534) + *(float *)(lVar10 + 0x514);
  lVar10 = *(longlong *)(param_1 + 0x728);
  *(float *)(lVar10 + 0x554) =
       *(float *)(lVar10 + 0x554) - fVar16 * *(float *)(lVar10 + 0x544) * 400.0;
  *(float *)(lVar10 + 0x558) =
       *(float *)(lVar10 + 0x558) - fVar16 * *(float *)(lVar10 + 0x548) * 400.0;
  *(float *)(lVar10 + 0x55c) =
       *(float *)(lVar10 + 0x55c) - fVar16 * *(float *)(lVar10 + 0x54c) * 400.0;
  lVar10 = *(longlong *)(param_1 + 0x728);
  *(float *)(lVar10 + 0x554) = fVar15 * *(float *)(lVar10 + 0x554);
  *(float *)(lVar10 + 0x558) = fVar15 * *(float *)(lVar10 + 0x558);
  *(float *)(lVar10 + 0x55c) = fVar15 * *(float *)(lVar10 + 0x55c);
  lVar10 = *(longlong *)(param_1 + 0x728);
  *(float *)(lVar10 + 0x54c) = fVar16 * *(float *)(lVar10 + 0x55c) + *(float *)(lVar10 + 0x54c);
  *(float *)(lVar10 + 0x544) = fVar16 * *(float *)(lVar10 + 0x554) + *(float *)(lVar10 + 0x544);
  *(float *)(lVar10 + 0x548) = fVar16 * *(float *)(lVar10 + 0x558) + *(float *)(lVar10 + 0x548);
  *(float *)(*(longlong *)(param_1 + 0x728) + 0x564) = fVar17 * 1e-05;
  lVar10 = *(longlong *)(param_1 + 0x728);
  bVar11 = (byte)*(undefined2 *)(lVar10 + 0x5aa);
  if (((*(byte *)(lVar10 + 0x5ac) | bVar11) & 1) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x590);
    FUN_180575540(lVar5,1,*(undefined1 *)(lVar5 + 0x25f9),*(undefined1 *)(lVar5 + 0x2600),
                  lVar10 + 0x504,&DAT_180a13a10,0x40400000,
                  (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(lVar10 + 0x570) * 8) -
                         *(longlong *)(lVar10 + 0x568)) * 1e-05 < 0.0,~bVar11 & 1,0,0,
                  *(undefined8 *)(param_1 + 0x658));
    lVar10 = *(longlong *)(param_1 + 0x728);
  }
  bVar11 = (byte)*(undefined2 *)(lVar10 + 0x5aa);
  if (((*(byte *)(lVar10 + 0x5ac) | bVar11) & 2) != 0) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x9f0);
    if (lVar5 == 0) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x9e8);
      if ((lVar5 != 0) &&
         (lVar9 = *(longlong *)(param_1 + 0x590),
         *(char *)(*(longlong *)(lVar5 + 0xf8) + 0x88) == *(char *)(lVar9 + 0x25fc))) {
        FUN_180575540(lVar9,2,*(undefined1 *)(lVar9 + 0x25fa),*(undefined1 *)(lVar9 + 0x2600),
                      lVar10 + 0x514,&DAT_180a13a10,0x40400000,
                      (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(lVar10 + 0x570) * 8)
                             - *(longlong *)(lVar10 + 0x568)) * 1e-05 < 0.0,~(bVar11 >> 1) & 1,0,0,
                      *(undefined8 *)(param_1 + 0x658));
      }
    }
    else if ((0 < *(int *)(lVar5 + 0x30)) &&
            (((*(uint *)((longlong)*(int *)(lVar5 + 0xf0) * 0xa0 + 0x50 +
                        *(longlong *)(lVar5 + 0xd0)) >> 9 & 1) == 0 || (0 < *(short *)(lVar5 + 8))))
            ) {
      cVar2 = *(char *)(*(longlong *)(lVar5 + 0xf8) + 0x88);
      lVar9 = (longlong)cVar2;
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x658) + 0x208);
      lVar5 = *(longlong *)(lVar10 + 0x140);
      iVar4 = *(int *)(lVar9 * 0x1b0 + 0x110 + lVar5);
      while (iVar4 == -1) {
        if ((char)lVar9 == -1) {
          return;
        }
        cVar2 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x658) + 0x18) + 0xa0 +
                         lVar9 * 0x100);
        lVar9 = (longlong)cVar2;
        iVar4 = *(int *)(lVar9 * 0x1b0 + 0x110 + lVar5);
      }
      if (cVar2 != -1) {
        for (cVar3 = cVar2;
            (cVar3 != '\0' && (cVar3 != *(char *)(*(longlong *)(param_1 + 0x590) + 0x25ff)));
            cVar3 = *(char *)((longlong)cVar3 + 0x100 + lVar10)) {
        }
        FUN_18022a890(param_2,cVar2);
                    // WARNING: Subroutine does not return
        FUN_1808fd400(*(float *)(*(longlong *)(param_1 + 0x728) + 0x54c) * 0.5);
      }
    }
  }
  return;
}





// 函数: void FUN_180518f29(undefined4 param_1,longlong param_2)
void FUN_180518f29(undefined4 param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong in_RAX;
  longlong unaff_RBP;
  longlong lVar5;
  
  cVar1 = *(char *)(in_RAX + 0x88);
  lVar5 = (longlong)cVar1;
  lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0x140);
  iVar3 = *(int *)(lVar5 * 0x1b0 + 0x110 + lVar4);
  while (iVar3 == -1) {
    if ((char)lVar5 == -1) {
      return;
    }
    cVar1 = *(char *)(*(longlong *)(param_2 + 0x18) + 0xa0 + lVar5 * 0x100);
    lVar5 = (longlong)cVar1;
    iVar3 = *(int *)(lVar5 * 0x1b0 + 0x110 + lVar4);
  }
  if (cVar1 == -1) {
    return;
  }
  for (cVar2 = cVar1;
      (cVar2 != '\0' && (cVar2 != *(char *)(*(longlong *)(unaff_RBP + 0x590) + 0x25ff)));
      cVar2 = *(char *)((longlong)cVar2 + 0x100 + *(longlong *)(param_2 + 0x208))) {
  }
  FUN_18022a890(param_1,cVar1);
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(float *)(*(longlong *)(unaff_RBP + 0x728) + 0x54c) * 0.5);
}





// 函数: void FUN_180518fa5(undefined4 param_1,undefined8 param_2,longlong param_3)
void FUN_180518fa5(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  longlong in_RAX;
  char in_CL;
  longlong unaff_RBP;
  char unaff_DIL;
  
  if (unaff_DIL != '\0') {
    do {
      if (in_CL == *(char *)(in_RAX + 0x25ff)) break;
      in_CL = *(char *)((longlong)in_CL + 0x100 + param_3);
    } while (in_CL != '\0');
  }
  FUN_18022a890(param_1,unaff_DIL);
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(float *)(*(longlong *)(unaff_RBP + 0x728) + 0x54c) * 0.5);
}





// 函数: void FUN_180519261(void)
void FUN_180519261(void)

{
  return;
}





// 函数: void FUN_180519269(void)
void FUN_180519269(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



