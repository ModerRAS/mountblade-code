#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part452.c - 6 个函数

// 函数: void FUN_180512bea(uint64_t param_1,float *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180512bea(uint64_t param_1,float *param_2,uint64_t param_3,uint64_t param_4)

{
  float *pfVar1;
  int64_t lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int64_t in_RAX;
  int32_t *puVar5;
  uint64_t uVar6;
  float *pfVar7;
  float *pfVar8;
  float *unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t lVar9;
  int64_t lVar10;
  int iVar11;
  int iVar12;
  int64_t in_R11;
  uint64_t unaff_R14;
  float *unaff_R15;
  float extraout_XMM0_Da;
  float fVar13;
  float fVar14;
  uint64_t in_XMM1_Qa;
  float in_XMM1_Dc;
  int8_t auVar15 [16];
  int8_t auVar16 [16];
  int32_t uVar17;
  int32_t in_XMM3_Dc;
  int32_t in_XMM3_Dd;
  float fVar18;
  float fVar19;
  int32_t unaff_XMM6_Da;
  float fVar20;
  float fVar21;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  float fVar22;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  float fVar23;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  float fVar24;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  
  uVar17 = (int32_t)((uint64_t)param_4 >> 0x20);
  fVar13 = (float)((uint64_t)in_XMM1_Qa >> 0x20);
  *(uint64_t *)(in_R11 + 0x10) = unaff_R14;
  *(int32_t *)(in_R11 + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x2c) = unaff_XMM6_Dd;
  fVar19 = *(float *)(in_RAX + 0x9c);
  fVar21 = *(float *)(in_RAX + 0xa0);
  fVar14 = *(float *)(in_RAX + 0xa4);
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM7_Dd;
  fVar22 = *param_2;
  fVar20 = param_2[1];
  fVar23 = param_2[2];
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM8_Dd;
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM9_Dd;
  fVar18 = fVar13 * fVar13 + (float)in_XMM1_Qa * (float)in_XMM1_Qa + in_XMM1_Dc * in_XMM1_Dc;
  auVar15._4_4_ = uVar17;
  auVar15._0_4_ = fVar18;
  auVar15._8_4_ = in_XMM3_Dc;
  auVar15._12_4_ = in_XMM3_Dd;
  auVar16._4_4_ = uVar17;
  auVar16._0_4_ = fVar18;
  auVar16._8_4_ = in_XMM3_Dc;
  auVar16._12_4_ = in_XMM3_Dd;
  auVar16 = rsqrtss(auVar15,auVar16);
  fVar13 = auVar16._0_4_;
  fVar18 = fVar13 * 0.5 * (3.0 - fVar18 * fVar13 * fVar13) * fVar18;
  fVar13 = fVar20 * fVar20 + fVar22 * fVar22 + fVar23 * fVar23;
  auVar16 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
  fVar24 = auVar16._0_4_;
  fVar13 = fVar24 * 0.5 * (3.0 - fVar13 * fVar24 * fVar24);
  fVar20 = fVar20 * fVar13 - *(float *)(in_RAX + 0xd0);
  fVar22 = fVar22 * fVar13 - *(float *)(in_RAX + 0xcc);
  fVar23 = fVar23 * fVar13 - *(float *)(in_RAX + 0xd4);
  pfVar7 = *(float **)(*(int64_t *)(unaff_RDI + 0x40) + 0x88);
  lVar9 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x40) + 0x90);
  *(uint64_t *)(unaff_RBP + 0x67) =
       CONCAT44(*(float *)(in_RAX + 0xb0) * fVar20 + *(float *)(in_RAX + 0xac) * fVar22 +
                *(float *)(in_RAX + 0xb4) * fVar23,
                fVar21 * fVar20 + fVar19 * fVar22 + fVar14 * fVar23);
  fVar19 = *(float *)(unaff_RBP + 0x6b);
  fVar21 = *(float *)(unaff_RBP + 0x67);
  fVar14 = fVar19 * fVar19 + fVar21 * fVar21;
  auVar16 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
  fVar22 = auVar16._0_4_;
  fVar14 = fVar22 * 0.5 * (3.0 - fVar14 * fVar22 * fVar22);
  fVar21 = fVar21 * fVar14;
  fVar19 = fVar19 * fVar14;
  *(float *)(unaff_RBP + 0x67) = fVar21;
  *(float *)(unaff_RBP + 0x6b) = fVar19;
  iVar12 = (int)(lVar9 - (int64_t)pfVar7 >> 3);
  if (0 < iVar12) {
    lVar9 = 0;
    iVar11 = 1;
    pfVar8 = pfVar7;
    do {
      pfVar1 = pfVar7 + (int64_t)(iVar11 % iVar12) * 2;
      if ((0.0 <= fVar19 * *pfVar8 - fVar21 * pfVar8[1]) &&
         (fVar19 * *pfVar1 - fVar21 * pfVar1[1] <= 0.0)) {
        FUN_18038a230(unaff_RBP + 0x7f,pfVar8,pfVar1,unaff_RBP + 0x67);
        fVar19 = SQRT(*(float *)(unaff_RBP + 0x7f) * *(float *)(unaff_RBP + 0x7f) +
                      *(float *)(unaff_RBP + 0x83) * *(float *)(unaff_RBP + 0x83));
        goto LAB_180512e2b;
      }
      iVar11 = iVar11 + 1;
      lVar9 = lVar9 + 1;
      pfVar8 = pfVar8 + 2;
    } while (lVar9 < iVar12);
  }
  fVar19 = 1.0;
LAB_180512e2b:
  if (fVar19 <= fVar18) {
    fVar19 = fVar18;
  }
  fVar21 = unaff_RBX[2];
  fVar13 = 0.0;
  fVar14 = unaff_RBX[1];
  *(int32_t *)(unaff_RBP + -0x4d) = 0x7f7fffff;
  fVar19 = 1.0 / fVar19;
  fVar22 = unaff_R15[2];
  fVar20 = *unaff_R15;
  fVar24 = fVar21 * fVar19 * unaff_R15[1] - fVar14 * fVar19 * fVar22;
  fVar23 = *unaff_RBX;
  fVar14 = fVar14 * fVar19 * fVar20 - fVar23 * fVar19 * unaff_R15[1];
  *(float *)(unaff_RBP + -0x59) = fVar24;
  fVar19 = fVar23 * fVar19 * fVar22 - fVar21 * fVar19 * fVar20;
  *(float *)(unaff_RBP + -0x51) = fVar14;
  *(float *)(unaff_RBP + -0x55) = fVar19;
  if (((fVar24 != 0.0) || (fVar19 != 0.0)) || (fVar14 != 0.0)) {
    fVar13 = fVar19 * fVar19 + fVar24 * fVar24 + fVar14 * fVar14;
    auVar16 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
    fVar21 = auVar16._0_4_;
    fVar21 = fVar21 * 0.5 * (3.0 - fVar13 * fVar21 * fVar21);
    fVar13 = fVar21 * fVar13;
    *(float *)(unaff_RBP + -0x59) = fVar24 * fVar21;
    *(float *)(unaff_RBP + -0x55) = fVar19 * fVar21;
    *(float *)(unaff_RBP + -0x51) = fVar14 * fVar21;
    if (0.0 <= fVar13) {
      if (1.0 <= fVar13) {
        fVar13 = 1.0;
      }
    }
    else {
      fVar13 = 0.0;
    }
    *(uint64_t *)(unaff_RBP + -0x39) = 0x3f800000;
    *(uint64_t *)(unaff_RBP + -0x31) = 0;
    *(uint64_t *)(unaff_RBP + -0x19) = 0;
    *(uint64_t *)(unaff_RBP + -0x11) = 0x3f800000;
    *(int32_t *)(unaff_RBP + -0x29) = 0;
    *(int32_t *)(unaff_RBP + -0x25) = 0x3f800000;
    *(int32_t *)(unaff_RBP + -0x21) = 0;
    *(int32_t *)(unaff_RBP + -0x1d) = 0;
    fVar19 = (float)asinf(fVar13);
    fVar19 = SQRT(fVar19);
    puVar5 = (int32_t *)
             FUN_180534b00(unaff_RBP + -0x39,unaff_RBP + -0x49,unaff_RBP + -0x59,fVar19);
    uVar17 = puVar5[1];
    uVar3 = puVar5[2];
    uVar4 = puVar5[3];
    *(int32_t *)(unaff_RBP + -0x39) = *puVar5;
    *(int32_t *)(unaff_RBP + -0x35) = uVar17;
    *(int32_t *)(unaff_RBP + -0x31) = uVar3;
    *(int32_t *)(unaff_RBP + -0x2d) = uVar4;
    puVar5 = (int32_t *)
             FUN_180534b00(unaff_RBP + -0x29,unaff_RBP + -0x49,unaff_RBP + -0x59,fVar19);
    uVar17 = puVar5[1];
    uVar3 = puVar5[2];
    uVar4 = puVar5[3];
    *(int32_t *)(unaff_RBP + -0x29) = *puVar5;
    *(int32_t *)(unaff_RBP + -0x25) = uVar17;
    *(int32_t *)(unaff_RBP + -0x21) = uVar3;
    *(int32_t *)(unaff_RBP + -0x1d) = uVar4;
    puVar5 = (int32_t *)
             FUN_180534b00(unaff_RBP + -0x19,unaff_RBP + -0x49,unaff_RBP + -0x59,fVar19);
    uVar17 = puVar5[1];
    uVar3 = puVar5[2];
    uVar4 = puVar5[3];
    *(int32_t *)(unaff_RBP + -0x19) = *puVar5;
    *(int32_t *)(unaff_RBP + -0x15) = uVar17;
    *(int32_t *)(unaff_RBP + -0x11) = uVar3;
    *(int32_t *)(unaff_RBP + -0xd) = uVar4;
    FUN_1801c1720(unaff_RBP + -0x39,unaff_RBP + -0x59);
    lVar9 = *(int64_t *)(unaff_RSI + 0x728);
    fVar21 = *(float *)(unaff_RBP + -0x51) * render_system_ui;
    fVar19 = *(float *)(unaff_RBP + -0x59) * render_system_ui;
    *(float *)(lVar9 + 0x558) =
         *(float *)(unaff_RBP + -0x55) * render_system_ui + *(float *)(lVar9 + 0x558);
    *(float *)(lVar9 + 0x55c) = fVar21 + *(float *)(lVar9 + 0x55c);
    *(float *)(lVar9 + 0x554) = fVar19 + *(float *)(lVar9 + 0x554);
  }
  lVar9 = *(int64_t *)(unaff_RSI + 0x658);
  lVar10 = (int64_t)*(char *)(*(int64_t *)(unaff_RDI + 0xf8) + 0x88);
  lVar2 = *(int64_t *)(*(int64_t *)(lVar9 + 0x208) + 0x140);
  iVar12 = *(int *)(lVar10 * 0x1b0 + 0x110 + lVar2);
  while ((iVar12 == -1 && ((char)lVar10 != -1))) {
    lVar10 = (int64_t)*(char *)(lVar10 * 0x100 + 0xa0 + *(int64_t *)(lVar9 + 0x18));
    iVar12 = *(int *)(lVar10 * 0x1b0 + 0x110 + lVar2);
  }
  FUN_180534d00(lVar9,unaff_RBP + -0x39);
  uVar6 = FUN_1801c24a0();
  *(int32_t *)(unaff_RBP + -0x4d) = 0x7f7fffff;
  fVar13 = extraout_XMM0_Da - fVar13;
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  fVar13 = SQRT(fVar13);
  fVar19 = unaff_RBX[1];
  fVar21 = unaff_RBX[2];
  *(float *)(unaff_RBP + -0x59) = fVar13 * *unaff_RBX;
  *(float *)(unaff_RBP + -0x55) = fVar13 * fVar19;
  *(float *)(unaff_RBP + -0x51) = fVar13 * fVar21;
  pfVar7 = (float *)FUN_1801c0fb0(uVar6,unaff_RBP + -0x49,unaff_RBP + -0x59);
  lVar9 = *(int64_t *)(unaff_RSI + 0x728);
  fVar21 = pfVar7[1] * render_system_ui;
  fVar19 = pfVar7[2] * render_system_ui;
  *(float *)(lVar9 + 0x534) = render_system_ui * *pfVar7 + *(float *)(lVar9 + 0x534);
  *(float *)(lVar9 + 0x538) = fVar21 + *(float *)(lVar9 + 0x538);
  *(float *)(lVar9 + 0x53c) = fVar19 + *(float *)(lVar9 + 0x53c);
  *(int64_t *)(*(int64_t *)(unaff_RSI + 0x728) + 0x568) =
       *(int64_t *)
        (&system_error_code + (int64_t)*(int *)(*(int64_t *)(unaff_RSI + 0x728) + 0x570) * 8) + 40000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180512eba(void)
void FUN_180512eba(void)

{
  float fVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t *puVar8;
  uint64_t uVar9;
  float *pfVar10;
  float *unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t lVar11;
  float extraout_XMM0_Da;
  int8_t auVar12 [16];
  int8_t auVar13 [16];
  float fVar14;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  float unaff_XMM7_Da;
  float fVar15;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  
  if ((unaff_XMM6_Da != unaff_XMM8_Da) || (in_XMM5_Da != unaff_XMM8_Da)) {
    fVar14 = unaff_XMM6_Da * unaff_XMM6_Da + unaff_XMM9_Da * unaff_XMM9_Da + in_XMM5_Da * in_XMM5_Da
    ;
    auVar12._4_4_ = unaff_XMM6_Db;
    auVar12._0_4_ = fVar14;
    auVar12._8_4_ = unaff_XMM6_Dc;
    auVar12._12_4_ = unaff_XMM6_Dd;
    auVar13._4_4_ = unaff_XMM6_Db;
    auVar13._0_4_ = fVar14;
    auVar13._8_4_ = unaff_XMM6_Dc;
    auVar13._12_4_ = unaff_XMM6_Dd;
    auVar13 = rsqrtss(auVar12,auVar13);
    fVar15 = auVar13._0_4_;
    fVar15 = fVar15 * 0.5 * (3.0 - fVar14 * fVar15 * fVar15);
    fVar14 = fVar15 * fVar14;
    *(float *)(unaff_RBP + -0x59) = unaff_XMM9_Da * fVar15;
    *(float *)(unaff_RBP + -0x55) = unaff_XMM6_Da * fVar15;
    *(float *)(unaff_RBP + -0x51) = in_XMM5_Da * fVar15;
    unaff_XMM7_Da = unaff_XMM8_Da;
    if ((unaff_XMM8_Da <= fVar14) && (unaff_XMM7_Da = fVar14, 1.0 <= fVar14)) {
      unaff_XMM7_Da = 1.0;
    }
    *(uint64_t *)(unaff_RBP + -0x39) = 0x3f800000;
    *(uint64_t *)(unaff_RBP + -0x31) = 0;
    *(uint64_t *)(unaff_RBP + -0x19) = 0;
    *(uint64_t *)(unaff_RBP + -0x11) = 0x3f800000;
    *(int32_t *)(unaff_RBP + -0x29) = 0;
    *(int32_t *)(unaff_RBP + -0x25) = 0x3f800000;
    *(int32_t *)(unaff_RBP + -0x21) = 0;
    *(int32_t *)(unaff_RBP + -0x1d) = 0;
    fVar15 = (float)asinf(unaff_XMM7_Da);
    fVar15 = SQRT(fVar15);
    puVar8 = (int32_t *)
             FUN_180534b00(unaff_RBP + -0x39,unaff_RBP + -0x49,unaff_RBP + -0x59,fVar15);
    uVar5 = puVar8[1];
    uVar6 = puVar8[2];
    uVar7 = puVar8[3];
    *(int32_t *)(unaff_RBP + -0x39) = *puVar8;
    *(int32_t *)(unaff_RBP + -0x35) = uVar5;
    *(int32_t *)(unaff_RBP + -0x31) = uVar6;
    *(int32_t *)(unaff_RBP + -0x2d) = uVar7;
    puVar8 = (int32_t *)
             FUN_180534b00(unaff_RBP + -0x29,unaff_RBP + -0x49,unaff_RBP + -0x59,fVar15);
    uVar5 = puVar8[1];
    uVar6 = puVar8[2];
    uVar7 = puVar8[3];
    *(int32_t *)(unaff_RBP + -0x29) = *puVar8;
    *(int32_t *)(unaff_RBP + -0x25) = uVar5;
    *(int32_t *)(unaff_RBP + -0x21) = uVar6;
    *(int32_t *)(unaff_RBP + -0x1d) = uVar7;
    puVar8 = (int32_t *)
             FUN_180534b00(unaff_RBP + -0x19,unaff_RBP + -0x49,unaff_RBP + -0x59,fVar15);
    uVar5 = puVar8[1];
    uVar6 = puVar8[2];
    uVar7 = puVar8[3];
    *(int32_t *)(unaff_RBP + -0x19) = *puVar8;
    *(int32_t *)(unaff_RBP + -0x15) = uVar5;
    *(int32_t *)(unaff_RBP + -0x11) = uVar6;
    *(int32_t *)(unaff_RBP + -0xd) = uVar7;
    FUN_1801c1720(unaff_RBP + -0x39,unaff_RBP + -0x59);
    lVar3 = *(int64_t *)(unaff_RSI + 0x728);
    fVar14 = *(float *)(unaff_RBP + -0x51) * render_system_ui;
    fVar15 = *(float *)(unaff_RBP + -0x59) * render_system_ui;
    *(float *)(lVar3 + 0x558) =
         *(float *)(unaff_RBP + -0x55) * render_system_ui + *(float *)(lVar3 + 0x558);
    *(float *)(lVar3 + 0x55c) = fVar14 + *(float *)(lVar3 + 0x55c);
    *(float *)(lVar3 + 0x554) = fVar15 + *(float *)(lVar3 + 0x554);
  }
  lVar3 = *(int64_t *)(unaff_RSI + 0x658);
  lVar11 = (int64_t)*(char *)(*(int64_t *)(unaff_RDI + 0xf8) + 0x88);
  lVar4 = *(int64_t *)(*(int64_t *)(lVar3 + 0x208) + 0x140);
  iVar2 = *(int *)(lVar11 * 0x1b0 + 0x110 + lVar4);
  while ((iVar2 == -1 && ((char)lVar11 != -1))) {
    lVar11 = (int64_t)*(char *)(lVar11 * 0x100 + 0xa0 + *(int64_t *)(lVar3 + 0x18));
    iVar2 = *(int *)(lVar11 * 0x1b0 + 0x110 + lVar4);
  }
  FUN_180534d00(lVar3,unaff_RBP + -0x39);
  uVar9 = FUN_1801c24a0();
  *(int32_t *)(unaff_RBP + -0x4d) = 0x7f7fffff;
  fVar15 = extraout_XMM0_Da - unaff_XMM7_Da;
  if (extraout_XMM0_Da - unaff_XMM7_Da <= unaff_XMM8_Da) {
    fVar15 = unaff_XMM8_Da;
  }
  fVar15 = SQRT(fVar15);
  fVar14 = unaff_RBX[1];
  fVar1 = unaff_RBX[2];
  *(float *)(unaff_RBP + -0x59) = fVar15 * *unaff_RBX;
  *(float *)(unaff_RBP + -0x55) = fVar15 * fVar14;
  *(float *)(unaff_RBP + -0x51) = fVar15 * fVar1;
  pfVar10 = (float *)FUN_1801c0fb0(uVar9,unaff_RBP + -0x49,unaff_RBP + -0x59);
  lVar3 = *(int64_t *)(unaff_RSI + 0x728);
  fVar14 = pfVar10[1] * render_system_ui;
  fVar15 = pfVar10[2] * render_system_ui;
  *(float *)(lVar3 + 0x534) = render_system_ui * *pfVar10 + *(float *)(lVar3 + 0x534);
  *(float *)(lVar3 + 0x538) = fVar14 + *(float *)(lVar3 + 0x538);
  *(float *)(lVar3 + 0x53c) = fVar15 + *(float *)(lVar3 + 0x53c);
  *(int64_t *)(*(int64_t *)(unaff_RSI + 0x728) + 0x568) =
       *(int64_t *)
        (&system_error_code + (int64_t)*(int *)(*(int64_t *)(unaff_RSI + 0x728) + 0x570) * 8) + 40000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180512f48(uint64_t param_1,uint64_t param_2)
void FUN_180512f48(uint64_t param_1,uint64_t param_2)

{
  float fVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t *puVar8;
  uint64_t uVar9;
  float *pfVar10;
  float *unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t lVar11;
  float *unaff_R15;
  float extraout_XMM0_Da;
  int8_t auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float unaff_XMM8_Da;
  float fVar18;
  float unaff_XMM9_Da;
  
  FUN_18038a230(unaff_RBP + 0x7f,param_1,param_2,unaff_RBP + 0x67);
  fVar13 = SQRT(*(float *)(unaff_RBP + 0x7f) * *(float *)(unaff_RBP + 0x7f) +
                *(float *)(unaff_RBP + 0x83) * *(float *)(unaff_RBP + 0x83));
  if (fVar13 <= unaff_XMM9_Da) {
    fVar13 = unaff_XMM9_Da;
  }
  fVar16 = unaff_RBX[2];
  fVar15 = unaff_RBX[1];
  *(int32_t *)(unaff_RBP + -0x4d) = 0x7f7fffff;
  fVar13 = 1.0 / fVar13;
  fVar17 = unaff_R15[2];
  fVar14 = *unaff_R15;
  fVar18 = fVar16 * fVar13 * unaff_R15[1] - fVar15 * fVar13 * fVar17;
  fVar1 = *unaff_RBX;
  fVar15 = fVar15 * fVar13 * fVar14 - fVar1 * fVar13 * unaff_R15[1];
  *(float *)(unaff_RBP + -0x59) = fVar18;
  fVar16 = fVar1 * fVar13 * fVar17 - fVar16 * fVar13 * fVar14;
  *(float *)(unaff_RBP + -0x51) = fVar15;
  *(float *)(unaff_RBP + -0x55) = fVar16;
  fVar13 = unaff_XMM8_Da;
  if (((fVar18 != unaff_XMM8_Da) || (fVar16 != unaff_XMM8_Da)) || (fVar15 != unaff_XMM8_Da)) {
    fVar14 = fVar16 * fVar16 + fVar18 * fVar18 + fVar15 * fVar15;
    auVar12 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
    fVar17 = auVar12._0_4_;
    fVar17 = fVar17 * 0.5 * (3.0 - fVar14 * fVar17 * fVar17);
    fVar14 = fVar17 * fVar14;
    *(float *)(unaff_RBP + -0x59) = fVar18 * fVar17;
    *(float *)(unaff_RBP + -0x55) = fVar16 * fVar17;
    *(float *)(unaff_RBP + -0x51) = fVar15 * fVar17;
    if ((unaff_XMM8_Da <= fVar14) && (fVar13 = fVar14, 1.0 <= fVar14)) {
      fVar13 = 1.0;
    }
    *(uint64_t *)(unaff_RBP + -0x39) = 0x3f800000;
    *(uint64_t *)(unaff_RBP + -0x31) = 0;
    *(uint64_t *)(unaff_RBP + -0x19) = 0;
    *(uint64_t *)(unaff_RBP + -0x11) = 0x3f800000;
    *(int32_t *)(unaff_RBP + -0x29) = 0;
    *(int32_t *)(unaff_RBP + -0x25) = 0x3f800000;
    *(int32_t *)(unaff_RBP + -0x21) = 0;
    *(int32_t *)(unaff_RBP + -0x1d) = 0;
    fVar16 = (float)asinf(fVar13);
    fVar16 = SQRT(fVar16);
    puVar8 = (int32_t *)
             FUN_180534b00(unaff_RBP + -0x39,unaff_RBP + -0x49,unaff_RBP + -0x59,fVar16);
    uVar5 = puVar8[1];
    uVar6 = puVar8[2];
    uVar7 = puVar8[3];
    *(int32_t *)(unaff_RBP + -0x39) = *puVar8;
    *(int32_t *)(unaff_RBP + -0x35) = uVar5;
    *(int32_t *)(unaff_RBP + -0x31) = uVar6;
    *(int32_t *)(unaff_RBP + -0x2d) = uVar7;
    puVar8 = (int32_t *)
             FUN_180534b00(unaff_RBP + -0x29,unaff_RBP + -0x49,unaff_RBP + -0x59,fVar16);
    uVar5 = puVar8[1];
    uVar6 = puVar8[2];
    uVar7 = puVar8[3];
    *(int32_t *)(unaff_RBP + -0x29) = *puVar8;
    *(int32_t *)(unaff_RBP + -0x25) = uVar5;
    *(int32_t *)(unaff_RBP + -0x21) = uVar6;
    *(int32_t *)(unaff_RBP + -0x1d) = uVar7;
    puVar8 = (int32_t *)
             FUN_180534b00(unaff_RBP + -0x19,unaff_RBP + -0x49,unaff_RBP + -0x59,fVar16);
    uVar5 = puVar8[1];
    uVar6 = puVar8[2];
    uVar7 = puVar8[3];
    *(int32_t *)(unaff_RBP + -0x19) = *puVar8;
    *(int32_t *)(unaff_RBP + -0x15) = uVar5;
    *(int32_t *)(unaff_RBP + -0x11) = uVar6;
    *(int32_t *)(unaff_RBP + -0xd) = uVar7;
    FUN_1801c1720(unaff_RBP + -0x39,unaff_RBP + -0x59);
    lVar3 = *(int64_t *)(unaff_RSI + 0x728);
    fVar15 = *(float *)(unaff_RBP + -0x51) * render_system_ui;
    fVar16 = *(float *)(unaff_RBP + -0x59) * render_system_ui;
    *(float *)(lVar3 + 0x558) =
         *(float *)(unaff_RBP + -0x55) * render_system_ui + *(float *)(lVar3 + 0x558);
    *(float *)(lVar3 + 0x55c) = fVar15 + *(float *)(lVar3 + 0x55c);
    *(float *)(lVar3 + 0x554) = fVar16 + *(float *)(lVar3 + 0x554);
  }
  lVar3 = *(int64_t *)(unaff_RSI + 0x658);
  lVar11 = (int64_t)*(char *)(*(int64_t *)(unaff_RDI + 0xf8) + 0x88);
  lVar4 = *(int64_t *)(*(int64_t *)(lVar3 + 0x208) + 0x140);
  iVar2 = *(int *)(lVar11 * 0x1b0 + 0x110 + lVar4);
  while ((iVar2 == -1 && ((char)lVar11 != -1))) {
    lVar11 = (int64_t)*(char *)(lVar11 * 0x100 + 0xa0 + *(int64_t *)(lVar3 + 0x18));
    iVar2 = *(int *)(lVar11 * 0x1b0 + 0x110 + lVar4);
  }
  FUN_180534d00(lVar3,unaff_RBP + -0x39);
  uVar9 = FUN_1801c24a0();
  *(int32_t *)(unaff_RBP + -0x4d) = 0x7f7fffff;
  fVar16 = extraout_XMM0_Da - fVar13;
  if (extraout_XMM0_Da - fVar13 <= unaff_XMM8_Da) {
    fVar16 = unaff_XMM8_Da;
  }
  fVar16 = SQRT(fVar16);
  fVar13 = unaff_RBX[1];
  fVar15 = unaff_RBX[2];
  *(float *)(unaff_RBP + -0x59) = fVar16 * *unaff_RBX;
  *(float *)(unaff_RBP + -0x55) = fVar16 * fVar13;
  *(float *)(unaff_RBP + -0x51) = fVar16 * fVar15;
  pfVar10 = (float *)FUN_1801c0fb0(uVar9,unaff_RBP + -0x49,unaff_RBP + -0x59);
  lVar3 = *(int64_t *)(unaff_RSI + 0x728);
  fVar16 = pfVar10[1] * render_system_ui;
  fVar13 = pfVar10[2] * render_system_ui;
  *(float *)(lVar3 + 0x534) = render_system_ui * *pfVar10 + *(float *)(lVar3 + 0x534);
  *(float *)(lVar3 + 0x538) = fVar16 + *(float *)(lVar3 + 0x538);
  *(float *)(lVar3 + 0x53c) = fVar13 + *(float *)(lVar3 + 0x53c);
  *(int64_t *)(*(int64_t *)(unaff_RSI + 0x728) + 0x568) =
       *(int64_t *)
        (&system_error_code + (int64_t)*(int *)(*(int64_t *)(unaff_RSI + 0x728) + 0x570) * 8) + 40000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180512f80(void)
void FUN_180512f80(void)

{
  float fVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t *puVar8;
  uint64_t uVar9;
  float *pfVar10;
  float *unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t lVar11;
  float fVar12;
  float extraout_XMM0_Da;
  float fVar13;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  
  if (1.0 <= unaff_XMM7_Da) {
    unaff_XMM7_Da = 1.0;
  }
  *(uint64_t *)(unaff_RBP + -0x39) = 0x3f800000;
  *(uint64_t *)(unaff_RBP + -0x31) = 0;
  *(uint64_t *)(unaff_RBP + -0x19) = 0;
  *(uint64_t *)(unaff_RBP + -0x11) = 0x3f800000;
  *(int32_t *)(unaff_RBP + -0x29) = 0;
  *(int32_t *)(unaff_RBP + -0x25) = 0x3f800000;
  *(int32_t *)(unaff_RBP + -0x21) = 0;
  *(int32_t *)(unaff_RBP + -0x1d) = 0;
  fVar12 = (float)asinf(unaff_XMM7_Da);
  fVar12 = SQRT(fVar12);
  puVar8 = (int32_t *)FUN_180534b00(unaff_RBP + -0x39,unaff_RBP + -0x49,unaff_RBP + -0x59,fVar12)
  ;
  uVar5 = puVar8[1];
  uVar6 = puVar8[2];
  uVar7 = puVar8[3];
  *(int32_t *)(unaff_RBP + -0x39) = *puVar8;
  *(int32_t *)(unaff_RBP + -0x35) = uVar5;
  *(int32_t *)(unaff_RBP + -0x31) = uVar6;
  *(int32_t *)(unaff_RBP + -0x2d) = uVar7;
  puVar8 = (int32_t *)FUN_180534b00(unaff_RBP + -0x29,unaff_RBP + -0x49,unaff_RBP + -0x59,fVar12)
  ;
  uVar5 = puVar8[1];
  uVar6 = puVar8[2];
  uVar7 = puVar8[3];
  *(int32_t *)(unaff_RBP + -0x29) = *puVar8;
  *(int32_t *)(unaff_RBP + -0x25) = uVar5;
  *(int32_t *)(unaff_RBP + -0x21) = uVar6;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar7;
  puVar8 = (int32_t *)FUN_180534b00(unaff_RBP + -0x19,unaff_RBP + -0x49,unaff_RBP + -0x59,fVar12)
  ;
  uVar5 = puVar8[1];
  uVar6 = puVar8[2];
  uVar7 = puVar8[3];
  *(int32_t *)(unaff_RBP + -0x19) = *puVar8;
  *(int32_t *)(unaff_RBP + -0x15) = uVar5;
  *(int32_t *)(unaff_RBP + -0x11) = uVar6;
  *(int32_t *)(unaff_RBP + -0xd) = uVar7;
  FUN_1801c1720(unaff_RBP + -0x39,unaff_RBP + -0x59);
  lVar3 = *(int64_t *)(unaff_RSI + 0x728);
  fVar13 = *(float *)(unaff_RBP + -0x51) * render_system_ui;
  fVar12 = *(float *)(unaff_RBP + -0x59) * render_system_ui;
  *(float *)(lVar3 + 0x558) =
       *(float *)(unaff_RBP + -0x55) * render_system_ui + *(float *)(lVar3 + 0x558);
  *(float *)(lVar3 + 0x55c) = fVar13 + *(float *)(lVar3 + 0x55c);
  *(float *)(lVar3 + 0x554) = fVar12 + *(float *)(lVar3 + 0x554);
  lVar3 = *(int64_t *)(unaff_RSI + 0x658);
  lVar11 = (int64_t)*(char *)(*(int64_t *)(unaff_RDI + 0xf8) + 0x88);
  lVar4 = *(int64_t *)(*(int64_t *)(lVar3 + 0x208) + 0x140);
  iVar2 = *(int *)(lVar11 * 0x1b0 + 0x110 + lVar4);
  while ((iVar2 == -1 && ((char)lVar11 != -1))) {
    lVar11 = (int64_t)*(char *)(lVar11 * 0x100 + 0xa0 + *(int64_t *)(lVar3 + 0x18));
    iVar2 = *(int *)(lVar11 * 0x1b0 + 0x110 + lVar4);
  }
  FUN_180534d00(lVar3,unaff_RBP + -0x39);
  uVar9 = FUN_1801c24a0();
  *(int32_t *)(unaff_RBP + -0x4d) = 0x7f7fffff;
  fVar12 = extraout_XMM0_Da - unaff_XMM7_Da;
  if (extraout_XMM0_Da - unaff_XMM7_Da <= unaff_XMM8_Da) {
    fVar12 = unaff_XMM8_Da;
  }
  fVar12 = SQRT(fVar12);
  fVar13 = unaff_RBX[1];
  fVar1 = unaff_RBX[2];
  *(float *)(unaff_RBP + -0x59) = fVar12 * *unaff_RBX;
  *(float *)(unaff_RBP + -0x55) = fVar12 * fVar13;
  *(float *)(unaff_RBP + -0x51) = fVar12 * fVar1;
  pfVar10 = (float *)FUN_1801c0fb0(uVar9,unaff_RBP + -0x49,unaff_RBP + -0x59);
  lVar3 = *(int64_t *)(unaff_RSI + 0x728);
  fVar13 = pfVar10[1] * render_system_ui;
  fVar12 = pfVar10[2] * render_system_ui;
  *(float *)(lVar3 + 0x534) = render_system_ui * *pfVar10 + *(float *)(lVar3 + 0x534);
  *(float *)(lVar3 + 0x538) = fVar13 + *(float *)(lVar3 + 0x538);
  *(float *)(lVar3 + 0x53c) = fVar12 + *(float *)(lVar3 + 0x53c);
  *(int64_t *)(*(int64_t *)(unaff_RSI + 0x728) + 0x568) =
       *(int64_t *)
        (&system_error_code + (int64_t)*(int *)(*(int64_t *)(unaff_RSI + 0x728) + 0x570) * 8) + 40000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805130b0(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)
void FUN_1805130b0(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
  float fVar1;
  int64_t lVar2;
  uint64_t uVar3;
  float *pfVar4;
  float *unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  float extraout_XMM0_Da;
  float fVar5;
  float fVar6;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  
  do {
    if ((char)param_3 == -1) break;
    param_2 = (int64_t)*(char *)(param_2 * 0x100 + 0xa0 + *(int64_t *)(param_1 + 0x18));
    param_3 = param_2;
  } while (*(int *)(param_2 * 0x1b0 + 0x110 + param_4) == -1);
  FUN_180534d00(param_1,unaff_RBP + -0x39);
  uVar3 = FUN_1801c24a0();
  *(int32_t *)(unaff_RBP + -0x4d) = 0x7f7fffff;
  fVar5 = extraout_XMM0_Da - unaff_XMM7_Da;
  if (extraout_XMM0_Da - unaff_XMM7_Da <= unaff_XMM8_Da) {
    fVar5 = unaff_XMM8_Da;
  }
  fVar5 = SQRT(fVar5);
  fVar6 = unaff_RBX[1];
  fVar1 = unaff_RBX[2];
  *(float *)(unaff_RBP + -0x59) = fVar5 * *unaff_RBX;
  *(float *)(unaff_RBP + -0x55) = fVar5 * fVar6;
  *(float *)(unaff_RBP + -0x51) = fVar5 * fVar1;
  pfVar4 = (float *)FUN_1801c0fb0(uVar3,unaff_RBP + -0x49,unaff_RBP + -0x59);
  lVar2 = *(int64_t *)(unaff_RSI + 0x728);
  fVar6 = pfVar4[1] * render_system_ui;
  fVar5 = pfVar4[2] * render_system_ui;
  *(float *)(lVar2 + 0x534) = render_system_ui * *pfVar4 + *(float *)(lVar2 + 0x534);
  *(float *)(lVar2 + 0x538) = fVar6 + *(float *)(lVar2 + 0x538);
  *(float *)(lVar2 + 0x53c) = fVar5 + *(float *)(lVar2 + 0x53c);
  *(int64_t *)(*(int64_t *)(unaff_RSI + 0x728) + 0x568) =
       *(int64_t *)
        (&system_error_code + (int64_t)*(int *)(*(int64_t *)(unaff_RSI + 0x728) + 0x570) * 8) + 40000;
  return;
}





// 函数: void FUN_1805131bc(void)
void FUN_1805131bc(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



