#include "TaleWorlds.Native.Split.h"

// 99_part_01_part058.c - 1 个函数

// 函数: void FUN_1800dec06(undefined8 param_1,longlong param_2,char param_3,undefined8 param_4,
void FUN_1800dec06(undefined8 param_1,longlong param_2,char param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,float param_14,undefined4 param_15,float param_16)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong in_RAX;
  longlong lVar8;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined8 unaff_R12;
  longlong unaff_R14;
  undefined8 unaff_R15;
  bool in_ZF;
  undefined4 uVar9;
  float fVar10;
  ulonglong extraout_XMM0_Qa;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float unaff_XMM6_Da;
  float fVar22;
  float fVar23;
  float fVar24;
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
  undefined4 unaff_XMM13_Da;
  float fVar25;
  undefined4 unaff_XMM13_Db;
  undefined4 unaff_XMM13_Dc;
  undefined4 unaff_XMM13_Dd;
  undefined4 unaff_XMM14_Da;
  undefined4 unaff_XMM14_Db;
  undefined4 unaff_XMM14_Dc;
  undefined4 unaff_XMM14_Dd;
  undefined4 unaff_XMM15_Da;
  undefined4 unaff_XMM15_Db;
  undefined4 unaff_XMM15_Dc;
  undefined4 unaff_XMM15_Dd;
  float fStack000000000000007c;
  float fStack0000000000000084;
  undefined8 extraout_XMM0_Qb;
  
  *(undefined8 *)(in_RAX + 8) = unaff_R12;
  *(undefined8 *)(in_RAX + 0x20) = unaff_R15;
  *(undefined4 *)(in_RAX + -0x78) = unaff_XMM10_Da;
  *(undefined4 *)(in_RAX + -0x74) = unaff_XMM10_Db;
  *(undefined4 *)(in_RAX + -0x70) = unaff_XMM10_Dc;
  *(undefined4 *)(in_RAX + -0x6c) = unaff_XMM10_Dd;
  *(undefined4 *)(in_RAX + -0x88) = unaff_XMM11_Da;
  *(undefined4 *)(in_RAX + -0x84) = unaff_XMM11_Db;
  *(undefined4 *)(in_RAX + -0x80) = unaff_XMM11_Dc;
  *(undefined4 *)(in_RAX + -0x7c) = unaff_XMM11_Dd;
  *(undefined4 *)(in_RAX + -0x98) = unaff_XMM12_Da;
  *(undefined4 *)(in_RAX + -0x94) = unaff_XMM12_Db;
  *(undefined4 *)(in_RAX + -0x90) = unaff_XMM12_Dc;
  *(undefined4 *)(in_RAX + -0x8c) = unaff_XMM12_Dd;
  *(undefined4 *)(in_RAX + -0xa8) = unaff_XMM13_Da;
  *(undefined4 *)(in_RAX + -0xa4) = unaff_XMM13_Db;
  *(undefined4 *)(in_RAX + -0xa0) = unaff_XMM13_Dc;
  *(undefined4 *)(in_RAX + -0x9c) = unaff_XMM13_Dd;
  *(undefined4 *)(in_RAX + -0xb8) = unaff_XMM14_Da;
  *(undefined4 *)(in_RAX + -0xb4) = unaff_XMM14_Db;
  *(undefined4 *)(in_RAX + -0xb0) = unaff_XMM14_Dc;
  *(undefined4 *)(in_RAX + -0xac) = unaff_XMM14_Dd;
  *(undefined4 *)(in_RAX + -200) = unaff_XMM15_Da;
  *(undefined4 *)(in_RAX + -0xc4) = unaff_XMM15_Db;
  *(undefined4 *)(in_RAX + -0xc0) = unaff_XMM15_Dc;
  *(undefined4 *)(in_RAX + -0xbc) = unaff_XMM15_Dd;
  lVar2 = *(longlong *)(unaff_RBX + 0x1cd8);
  fVar14 = unaff_XMM6_Da;
  if (in_ZF) {
    fVar14 = *(float *)(unaff_R14 + 0x1880);
  }
  *(float *)(lVar2 + 0x1520) = fVar14;
  *(float *)(lVar2 + 0x1524) = unaff_XMM6_Da / fVar14;
  uVar9 = 0;
  if ((*(byte *)(param_2 + 4) & 0x40) == 0) {
    fVar14 = *(float *)(unaff_R14 + 0x2060);
  }
  else {
    fVar14 = 0.0;
  }
  *(float *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1d54) = fVar14 * 0.01;
  if ((*(byte *)(param_2 + 4) & 0x40) == 0) {
    fVar14 = *(float *)(unaff_R14 + 0x1110);
  }
  else {
    fVar14 = 50.0;
  }
  *(float *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1528) = fVar14 * 0.005 - 0.25;
  if ((*(byte *)(param_2 + 4) & 0x40) == 0) {
    fVar14 = *(float *)(unaff_R14 + 0x1180);
    if (0.0 <= fVar14) goto LAB_1800dece7;
    fVar14 = 0.0;
  }
  else {
    fVar14 = 0.0;
LAB_1800dece7:
    if (unaff_XMM6_Da <= fVar14) {
      fVar14 = unaff_XMM6_Da;
    }
  }
  *(float *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x17a0) = fVar14;
  fVar14 = unaff_XMM6_Da;
  if (((*(byte *)(param_2 + 4) & 0x40) != 0) ||
     (fVar14 = *(float *)(unaff_R14 + 0x11f0), 0.0 <= *(float *)(unaff_R14 + 0x11f0))) {
    if (unaff_XMM6_Da <= fVar14) {
      fVar14 = unaff_XMM6_Da;
    }
  }
  else {
    fVar14 = 0.0;
  }
  *(float *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x17a4) = fVar14;
  lVar2 = *(longlong *)(unaff_RBX + 0x1cd8);
  if ((*(byte *)(param_2 + 4) & 0x40) == 0) {
    uVar9 = *(undefined4 *)(unaff_R14 + 0x1260);
  }
  uVar9 = powf(param_1,uVar9);
  *(undefined4 *)(lVar2 + 0x17b8) = uVar9;
  lVar2 = *(longlong *)(unaff_RSI + 0x11d00);
  *(float *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1be0) =
       0.5 / (float)(int)*(float *)(unaff_RSI + 0x11c20);
  *(float *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1be4) =
       0.5 / (float)(int)*(float *)(unaff_RSI + 0x11c24);
  *(float *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1be8) =
       unaff_XMM6_Da / (float)*(int *)(unaff_RSI + 0x3588);
  *(float *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1bec) =
       unaff_XMM6_Da / (float)*(int *)(unaff_RSI + 0x358c);
  auVar12._0_8_ = tanf(*(float *)(unaff_RSI + 0x14c) * 0.5);
  auVar12._8_8_ = extraout_XMM0_Qb;
  auVar13._4_12_ = auVar12._4_12_;
  auVar13._0_4_ = (float)auVar12._0_8_ / *(float *)(unaff_RSI + 0x150);
  fVar14 = (float)atanf(auVar13._0_8_);
  *(float *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1c68) = fVar14 + fVar14;
  FUN_180094120((float *)(unaff_RSI + 0x12bc0),&param_6);
  *(undefined1 (*) [16])(unaff_RBP + -0x70) = ZEXT416((uint)(float)param_6);
  *(undefined1 (*) [16])(unaff_RBP + -0x60) =
       ZEXT416((uint)((float)param_6 * -1.0 + (float)param_8 * -1.0 + (float)param_10 +
                     (float)param_12));
  fStack000000000000007c =
       param_6._4_4_ * -1.0 + param_8._4_4_ * -1.0 + param_10._4_4_ + param_12._4_4_;
  param_16 = (float)param_7 * -1.0 + (float)param_9 * -1.0 + (float)param_11 + (float)param_13;
  param_15 = *(undefined4 *)(unaff_RBP + -0x60);
  param_14 = param_7._4_4_ * -1.0 + param_9._4_4_ * -1.0 + param_11._4_4_ + param_13._4_4_;
  *(undefined1 (*) [16])(unaff_RBP + -0x40) =
       ZEXT416((uint)((float)param_8 + (float)param_6 * -1.0 + (float)param_10 + (float)param_12));
  fVar18 = param_9._4_4_ + param_7._4_4_ * -1.0 + param_11._4_4_ + param_13._4_4_;
  *(undefined4 *)(unaff_RBP + -0x20) = *(undefined4 *)(unaff_RBP + -0x40);
  *(float *)(unaff_RBP + -0x1c) =
       param_8._4_4_ + param_6._4_4_ * -1.0 + param_10._4_4_ + param_12._4_4_;
  *(float *)(unaff_RBP + -0x18) =
       (float)param_9 + (float)param_7 * -1.0 + (float)param_11 + (float)param_13;
  *(float *)(unaff_RBP + -0x14) = fVar18;
  *(undefined1 (*) [16])(unaff_RBP + -0x50) =
       ZEXT416((uint)(*(float *)(unaff_RBP + -0x70) + (float)param_8 * -1.0 + (float)param_10 +
                     (float)param_12));
  fVar19 = param_7._4_4_ + param_9._4_4_ * -1.0 + param_11._4_4_ + param_13._4_4_;
  *(undefined4 *)(unaff_RBP + -0x30) = *(undefined4 *)(unaff_RBP + -0x50);
  *(float *)(unaff_RBP + -0x2c) =
       param_6._4_4_ + param_8._4_4_ * -1.0 + param_10._4_4_ + param_12._4_4_;
  *(float *)(unaff_RBP + -0x28) =
       (float)param_7 + (float)param_9 * -1.0 + (float)param_11 + (float)param_13;
  *(float *)(unaff_RBP + -0x24) = fVar19;
  fVar22 = *(float *)(unaff_RBP + -0x70) + (float)param_8 + (float)param_10 + (float)param_12;
  fVar14 = *(float *)(unaff_RBP + -0x50);
  fVar15 = 1.0 / param_14;
  param_5._4_4_ = param_7._4_4_ + param_9._4_4_ + param_11._4_4_ + param_13._4_4_;
  fVar18 = 1.0 / fVar18;
  fVar10 = 1.0 / param_5._4_4_;
  fVar19 = 1.0 / fVar19;
  fVar20 = fVar10 * fVar22;
  fVar1 = *(float *)(unaff_RBP + -0x2c);
  fVar17 = *(float *)(unaff_RBP + -0x28);
  fVar21 = (param_6._4_4_ + param_8._4_4_ + param_10._4_4_ + param_12._4_4_) * fVar10;
  fVar24 = (*(float *)(unaff_RBP + -0x60) * fVar15 + fVar20) * 0.5;
  fVar10 = ((float)param_7 + (float)param_9 + (float)param_11 + (float)param_13) * fVar10;
  fVar25 = (fStack000000000000007c * fVar15 + fVar21) * 0.5;
  fVar16 = (*(float *)(unaff_RBP + -0x1c) * fVar18 + fVar21) * 0.5;
  fVar23 = (param_16 * fVar15 + fVar10) * 0.5;
  fVar15 = (fVar18 * *(float *)(unaff_RBP + -0x40) + fVar20) * 0.5;
  uVar11 = (ulonglong)(uint)fVar15;
  plVar3 = *(longlong **)(unaff_RSI + 0x3580);
  fVar18 = (*(float *)(unaff_RBP + -0x18) * fVar18 + fVar10) * 0.5;
  fStack0000000000000084 = param_14;
  if (plVar3 != (longlong *)0x0) {
    if (*(code **)(*plVar3 + 0xb8) == (code *)&UNK_1802426a0) {
      lVar8 = plVar3[0xda];
    }
    else {
      lVar8 = (**(code **)(*plVar3 + 0xb8))(plVar3,fVar16,fVar18,fVar20,fVar22);
      unaff_RBX = _DAT_180c86938;
      unaff_R14 = _DAT_180c86920;
      uVar11 = extraout_XMM0_Qa;
    }
    if (lVar8 != 0) {
      pcVar4 = *(code **)(**(longlong **)(unaff_RSI + 0x3580) + 0xb8);
      if (pcVar4 != (code *)&UNK_1802426a0) {
        uVar11 = (*pcVar4)();
        unaff_RBX = _DAT_180c86938;
        unaff_R14 = _DAT_180c86920;
      }
      *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1d5c) = 0x41f00000;
      pcVar4 = *(code **)(**(longlong **)(unaff_RSI + 0x3580) + 0xb8);
      if (pcVar4 == (code *)&UNK_1802426a0) {
        lVar8 = (*(longlong **)(unaff_RSI + 0x3580))[0xda];
      }
      else {
        lVar8 = (*pcVar4)(uVar11);
        unaff_RBX = _DAT_180c86938;
        unaff_R14 = _DAT_180c86920;
      }
      uVar6 = *(undefined8 *)(lVar8 + 0x3f44);
      lVar5 = *(longlong *)(unaff_RBX + 0x1cd8);
      *(undefined8 *)(lVar5 + 0x1d70) = *(undefined8 *)(lVar8 + 0x3f3c);
      *(undefined8 *)(lVar5 + 0x1d78) = uVar6;
      pcVar4 = *(code **)(**(longlong **)(unaff_RSI + 0x3580) + 0xb8);
      if (pcVar4 == (code *)&UNK_1802426a0) {
        lVar8 = (*(longlong **)(unaff_RSI + 0x3580))[0xda];
      }
      else {
        lVar8 = (*pcVar4)();
        unaff_RBX = _DAT_180c86938;
        unaff_R14 = _DAT_180c86920;
      }
      *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1d7c) = *(undefined4 *)(lVar8 + 0x3f38);
      goto LAB_1800df320;
    }
  }
  *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1d5c) = 0x43960000;
  lVar8 = *(longlong *)(unaff_RBX + 0x1cd8);
  *(undefined8 *)(lVar8 + 0x1d70) = 0;
  *(undefined8 *)(lVar8 + 0x1d78) = 0;
LAB_1800df320:
  lVar8 = *(longlong *)(unaff_RBX + 0x1cd8);
  *(float *)(lVar8 + 0x1c30) = (fVar14 * fVar19 + fVar20) * 0.5 - fVar24;
  *(float *)(lVar8 + 0x1c34) = (fVar1 * fVar19 + fVar21) * 0.5 - fVar25;
  *(float *)(lVar8 + 0x1c38) = (fVar17 * fVar19 + fVar10) * 0.5 - fVar23;
  *(undefined4 *)(lVar8 + 0x1c3c) = 0x7f7fffff;
  lVar8 = *(longlong *)(unaff_RBX + 0x1cd8);
  param_5._4_4_ = 3.4028235e+38;
  *(float *)(lVar8 + 0x1c40) = fVar24 - fVar15;
  *(float *)(lVar8 + 0x1c44) = fVar25 - fVar16;
  *(float *)(lVar8 + 0x1c48) = fVar23 - fVar18;
  *(undefined4 *)(lVar8 + 0x1c4c) = 0x7f7fffff;
  if (param_3 != '\0') {
    lVar8 = *(longlong *)(unaff_RBX + 0x1cd8);
    fVar14 = *(float *)(lVar8 + 0x1120);
    fVar1 = *(float *)(lVar8 + 0x1124);
    fVar17 = *(float *)(lVar8 + 0x1128);
    fVar23 = *(float *)(unaff_RSI + 0x120) - fVar14 * 1e+07;
    fVar24 = *(float *)(unaff_RSI + 0x124) - fVar1 * 1e+07;
    fVar25 = *(float *)(unaff_RSI + 0x128) - fVar17 * 1e+07;
    fVar10 = *(float *)(unaff_RSI + 0x12bd4);
    fVar15 = *(float *)(unaff_RSI + 0x12bc4);
    fVar16 = *(float *)(unaff_RSI + 0x12be4);
    fVar18 = *(float *)(unaff_RSI + 0x114);
    fVar19 = *(float *)(unaff_RSI + 0x118);
    fVar22 = 1.0 / (fVar24 * *(float *)(unaff_RSI + 0x12bdc) +
                    fVar23 * *(float *)(unaff_RSI + 0x12bcc) +
                    fVar25 * *(float *)(unaff_RSI + 0x12bec) + *(float *)(unaff_RSI + 0x12bfc));
    fVar20 = *(float *)(unaff_RSI + 0x12bf4);
    fVar21 = *(float *)(unaff_RSI + 0x110);
    *(float *)(lVar8 + 0x1c08) =
         ((fVar24 * *(float *)(unaff_RSI + 0x12bd0) + fVar23 * *(float *)(unaff_RSI + 0x12bc0) +
           fVar25 * *(float *)(unaff_RSI + 0x12be0) + *(float *)(unaff_RSI + 0x12bf0)) * fVar22 +
         1.0) * 0.5;
    *(float *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1c0c) =
         0.5 - (fVar24 * fVar10 + fVar23 * fVar15 + fVar25 * fVar16 + fVar20) * fVar22 * 0.5;
    *(float *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1c04) =
         -(fVar21 * fVar14 + fVar18 * fVar1 + fVar19 * fVar17);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1c00) = *(undefined4 *)(lVar2 + 0x1dc);
  }
  if (lVar2 != 0) {
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1c6c) = *(undefined4 *)(lVar2 + 0x180);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1bfc) = *(undefined4 *)(lVar2 + 0x1d8);
    lVar8 = *(longlong *)(unaff_RBX + 0x1cd8);
    *(undefined4 *)(lVar8 + 0x1c10) = *(undefined4 *)(lVar2 + 0x1e8);
    fVar14 = *(float *)(unaff_R14 + 0x1260);
    fVar1 = *(float *)(lVar2 + 0x1ec);
    if (fVar14 <= 0.0) {
      fVar17 = fVar1;
      if ((fVar14 < 0.0) && (fVar17 = *(float *)(lVar2 + 0x1f0) + fVar14, fVar1 <= fVar17)) {
        fVar17 = fVar1;
      }
    }
    else {
      fVar17 = fVar1 + fVar14;
    }
    uVar9 = powf(lVar8,fVar17);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1c18) = uVar9;
    uVar9 = powf();
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1c1c) = uVar9;
    uVar9 = powf();
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1d58) = uVar9;
    uVar9 = powf();
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1c14) = uVar9;
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1c20) = *(undefined4 *)(lVar2 + 0x1f8);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1c24) = *(undefined4 *)(lVar2 + 0x1fc);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1c28) = *(undefined4 *)(lVar2 + 0x200);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1ce8) = *(undefined4 *)(lVar2 + 0x208);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1cec) = *(undefined4 *)(lVar2 + 0x20c);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1d34) = *(undefined4 *)(lVar2 + 0x210);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1d30) = *(undefined4 *)(lVar2 + 0x218);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1d2c) = *(undefined4 *)(lVar2 + 0x214);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1d18) = *(undefined4 *)(lVar2 + 0x21c);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1d1c) = *(undefined4 *)(lVar2 + 0x220);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1d20) = *(undefined4 *)(lVar2 + 0x224);
    *(float *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1d24) = (float)*(int *)(lVar2 + 0x228);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1d28) = *(undefined4 *)(lVar2 + 0x22c);
    *(float *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1d14) = (float)*(int *)(lVar2 + 0x230);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1d10) = *(undefined4 *)(lVar2 + 0x234);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1cf0) = *(undefined4 *)(lVar2 + 0x288);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1cfc) = *(undefined4 *)(lVar2 + 0x28c);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1ce0) = *(undefined4 *)(unaff_RSI + 0x180)
    ;
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1ce4) = *(undefined4 *)(lVar2 + 0x294);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1cf4) = *(undefined4 *)(lVar2 + 0x290);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1cf8) = *(undefined4 *)(lVar2 + 0x298);
    lVar8 = *(longlong *)(unaff_RBX + 0x1cd8);
    uVar6 = *(undefined8 *)(lVar2 + 0x2a4);
    *(undefined8 *)(lVar8 + 0x1d00) = *(undefined8 *)(lVar2 + 0x29c);
    *(undefined8 *)(lVar8 + 0x1d08) = uVar6;
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1d38) = *(undefined4 *)(lVar2 + 0x2ac);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1d3c) = *(undefined4 *)(lVar2 + 0x2b0);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1d50) = *(undefined4 *)(lVar2 + 0x2b4);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1d40) = *(undefined4 *)(lVar2 + 0x2b8);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1d44) = *(undefined4 *)(lVar2 + 700);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1d48) = *(undefined4 *)(lVar2 + 0x2c0);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1d4c) = *(undefined4 *)(lVar2 + 0x2c4);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1c60) = *(undefined4 *)(lVar2 + 0x2c8);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1c64) = *(undefined4 *)(lVar2 + 0x2cc);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1c8c) = *(undefined4 *)(lVar2 + 0x204);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1d88) = *(undefined4 *)(lVar2 + 0x98);
    uVar7 = *(uint *)(unaff_RSI + 0x12450) & 0x800000ff;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xffffff00) + 1;
    }
    *(float *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1d84) = (float)(int)uVar7;
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x1cd8) + 0x1d8c) =
         *(undefined4 *)(unaff_RSI + 0x11cec);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




