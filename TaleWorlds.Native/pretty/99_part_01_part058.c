#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_01_part058.c - 1 个函数
// 函数: void function_0dec06(uint64_t param_1,int64_t param_2,char param_3,uint64_t param_4,
void function_0dec06(uint64_t param_1,int64_t param_2,char param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                  uint64_t param_9,uint64_t param_10,uint64_t param_11,uint64_t param_12,
                  uint64_t param_13,float param_14,int32_t param_15,float param_16)
{
  float fVar1;
  int64_t lVar2;
  int64_t *plVar3;
  code *pcVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint uVar7;
  int64_t in_RAX;
  int64_t lVar8;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t unaff_R12;
  int64_t unaff_R14;
  uint64_t unaff_R15;
  bool in_ZF;
  int32_t uVar9;
  float fVar10;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar11;
  int8_t auVar12 [16];
  int8_t auVar13 [16];
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
  int32_t unaff_XMM13_Da;
  float fVar25;
  int32_t unaff_XMM13_Db;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM13_Dd;
  int32_t unaff_XMM14_Da;
  int32_t unaff_XMM14_Db;
  int32_t unaff_XMM14_Dc;
  int32_t unaff_XMM14_Dd;
  int32_t unaff_XMM15_Da;
  int32_t unaff_XMM15_Db;
  int32_t unaff_XMM15_Dc;
  int32_t unaff_XMM15_Dd;
  float fStack000000000000007c;
  float fStack0000000000000084;
  uint64_t extraout_XMM0_Qb;
  *(uint64_t *)(in_RAX + 8) = unaff_R12;
  *(uint64_t *)(in_RAX + 0x20) = unaff_R15;
  *(int32_t *)(in_RAX + -0x78) = unaff_XMM10_Da;
  *(int32_t *)(in_RAX + -0x74) = unaff_XMM10_Db;
  *(int32_t *)(in_RAX + -0x70) = unaff_XMM10_Dc;
  *(int32_t *)(in_RAX + -0x6c) = unaff_XMM10_Dd;
  *(int32_t *)(in_RAX + -0x88) = unaff_XMM11_Da;
  *(int32_t *)(in_RAX + -0x84) = unaff_XMM11_Db;
  *(int32_t *)(in_RAX + -0x80) = unaff_XMM11_Dc;
  *(int32_t *)(in_RAX + -0x7c) = unaff_XMM11_Dd;
  *(int32_t *)(in_RAX + -0x98) = unaff_XMM12_Da;
  *(int32_t *)(in_RAX + -0x94) = unaff_XMM12_Db;
  *(int32_t *)(in_RAX + -0x90) = unaff_XMM12_Dc;
  *(int32_t *)(in_RAX + -0x8c) = unaff_XMM12_Dd;
  *(int32_t *)(in_RAX + -0xa8) = unaff_XMM13_Da;
  *(int32_t *)(in_RAX + -0xa4) = unaff_XMM13_Db;
  *(int32_t *)(in_RAX + -0xa0) = unaff_XMM13_Dc;
  *(int32_t *)(in_RAX + -0x9c) = unaff_XMM13_Dd;
  *(int32_t *)(in_RAX + -0xb8) = unaff_XMM14_Da;
  *(int32_t *)(in_RAX + -0xb4) = unaff_XMM14_Db;
  *(int32_t *)(in_RAX + -0xb0) = unaff_XMM14_Dc;
  *(int32_t *)(in_RAX + -0xac) = unaff_XMM14_Dd;
  *(int32_t *)(in_RAX + -200) = unaff_XMM15_Da;
  *(int32_t *)(in_RAX + -0xc4) = unaff_XMM15_Db;
  *(int32_t *)(in_RAX + -0xc0) = unaff_XMM15_Dc;
  *(int32_t *)(in_RAX + -0xbc) = unaff_XMM15_Dd;
  lVar2 = *(int64_t *)(unaff_RBX + 0x1cd8);
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
  *(float *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d54) = fVar14 * 0.01;
  if ((*(byte *)(param_2 + 4) & 0x40) == 0) {
    fVar14 = *(float *)(unaff_R14 + 0x1110);
  }
  else {
    fVar14 = 50.0;
  }
  *(float *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1528) = fVar14 * 0.005 - 0.25;
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
  *(float *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x17a0) = fVar14;
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
  *(float *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x17a4) = fVar14;
  lVar2 = *(int64_t *)(unaff_RBX + 0x1cd8);
  if ((*(byte *)(param_2 + 4) & 0x40) == 0) {
    uVar9 = *(int32_t *)(unaff_R14 + 0x1260);
  }
  uVar9 = powf(param_1,uVar9);
  *(int32_t *)(lVar2 + 0x17b8) = uVar9;
  lVar2 = *(int64_t *)(unaff_RSI + 0x11d00);
  *(float *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1be0) =
       0.5 / (float)(int)*(float *)(unaff_RSI + 0x11c20);
  *(float *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1be4) =
       0.5 / (float)(int)*(float *)(unaff_RSI + 0x11c24);
  *(float *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1be8) =
       unaff_XMM6_Da / (float)*(int *)(unaff_RSI + 0x3588);
  *(float *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1bec) =
       unaff_XMM6_Da / (float)*(int *)(unaff_RSI + 0x358c);
  auVar12._0_8_ = tanf(*(float *)(unaff_RSI + 0x14c) * 0.5);
  auVar12._8_8_ = extraout_XMM0_Qb;
  auVar13._4_12_ = auVar12._4_12_;
  auVar13._0_4_ = (float)auVar12._0_8_ / *(float *)(unaff_RSI + 0x150);
  fVar14 = (float)atanf(auVar13._0_8_);
  *(float *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c68) = fVar14 + fVar14;
  function_094120((float *)(unaff_RSI + 0x12bc0),&param_6);
  *(int8_t (*) [16])(unaff_RBP + -0x70) = ZEXT416((uint)(float)param_6);
  *(int8_t (*) [16])(unaff_RBP + -0x60) =
       ZEXT416((uint)((float)param_6 * -1.0 + (float)param_8 * -1.0 + (float)param_10 +
                     (float)param_12));
  fStack000000000000007c =
       param_6._4_4_ * -1.0 + param_8._4_4_ * -1.0 + param_10._4_4_ + param_12._4_4_;
  param_16 = (float)param_7 * -1.0 + (float)param_9 * -1.0 + (float)param_11 + (float)param_13;
  param_15 = *(int32_t *)(unaff_RBP + -0x60);
  param_14 = param_7._4_4_ * -1.0 + param_9._4_4_ * -1.0 + param_11._4_4_ + param_13._4_4_;
  *(int8_t (*) [16])(unaff_RBP + -0x40) =
       ZEXT416((uint)((float)param_8 + (float)param_6 * -1.0 + (float)param_10 + (float)param_12));
  fVar18 = param_9._4_4_ + param_7._4_4_ * -1.0 + param_11._4_4_ + param_13._4_4_;
  *(int32_t *)(unaff_RBP + -0x20) = *(int32_t *)(unaff_RBP + -0x40);
  *(float *)(unaff_RBP + -0x1c) =
       param_8._4_4_ + param_6._4_4_ * -1.0 + param_10._4_4_ + param_12._4_4_;
  *(float *)(unaff_RBP + -0x18) =
       (float)param_9 + (float)param_7 * -1.0 + (float)param_11 + (float)param_13;
  *(float *)(unaff_RBP + -0x14) = fVar18;
  *(int8_t (*) [16])(unaff_RBP + -0x50) =
       ZEXT416((uint)(*(float *)(unaff_RBP + -0x70) + (float)param_8 * -1.0 + (float)param_10 +
                     (float)param_12));
  fVar19 = param_7._4_4_ + param_9._4_4_ * -1.0 + param_11._4_4_ + param_13._4_4_;
  *(int32_t *)(unaff_RBP + -0x30) = *(int32_t *)(unaff_RBP + -0x50);
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
  uVar11 = (uint64_t)(uint)fVar15;
  plVar3 = *(int64_t **)(unaff_RSI + 0x3580);
  fVar18 = (*(float *)(unaff_RBP + -0x18) * fVar18 + fVar10) * 0.5;
  fStack0000000000000084 = param_14;
  if (plVar3 != (int64_t *)0x0) {
    if (*(code **)(*plVar3 + 0xb8) == (code *)&ui_system_data_128_ptr) {
      lVar8 = plVar3[0xda];
    }
    else {
      lVar8 = (**(code **)(*plVar3 + 0xb8))(plVar3,fVar16,fVar18,fVar20,fVar22);
      unaff_RBX = system_message_buffer;
      unaff_R14 = SYSTEM_STATE_MANAGER;
      uVar11 = extraout_XMM0_Qa;
    }
    if (lVar8 != 0) {
      pcVar4 = *(code **)(**(int64_t **)(unaff_RSI + 0x3580) + 0xb8);
      if (pcVar4 != (code *)&ui_system_data_128_ptr) {
        uVar11 = (*pcVar4)();
        unaff_RBX = system_message_buffer;
        unaff_R14 = SYSTEM_STATE_MANAGER;
      }
      *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d5c) = 0x41f00000;
      pcVar4 = *(code **)(**(int64_t **)(unaff_RSI + 0x3580) + 0xb8);
      if (pcVar4 == (code *)&ui_system_data_128_ptr) {
        lVar8 = (*(int64_t **)(unaff_RSI + 0x3580))[0xda];
      }
      else {
        lVar8 = (*pcVar4)(uVar11);
        unaff_RBX = system_message_buffer;
        unaff_R14 = SYSTEM_STATE_MANAGER;
      }
      uVar6 = *(uint64_t *)(lVar8 + 0x3f44);
      lVar5 = *(int64_t *)(unaff_RBX + 0x1cd8);
      *(uint64_t *)(lVar5 + 0x1d70) = *(uint64_t *)(lVar8 + 0x3f3c);
      *(uint64_t *)(lVar5 + 0x1d78) = uVar6;
      pcVar4 = *(code **)(**(int64_t **)(unaff_RSI + 0x3580) + 0xb8);
      if (pcVar4 == (code *)&ui_system_data_128_ptr) {
        lVar8 = (*(int64_t **)(unaff_RSI + 0x3580))[0xda];
      }
      else {
        lVar8 = (*pcVar4)();
        unaff_RBX = system_message_buffer;
        unaff_R14 = SYSTEM_STATE_MANAGER;
      }
      *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d7c) = *(int32_t *)(lVar8 + 0x3f38);
      goto LAB_1800df320;
    }
  }
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d5c) = 0x43960000;
  lVar8 = *(int64_t *)(unaff_RBX + 0x1cd8);
  *(uint64_t *)(lVar8 + 0x1d70) = 0;
  *(uint64_t *)(lVar8 + 0x1d78) = 0;
LAB_1800df320:
  lVar8 = *(int64_t *)(unaff_RBX + 0x1cd8);
  *(float *)(lVar8 + 0x1c30) = (fVar14 * fVar19 + fVar20) * 0.5 - fVar24;
  *(float *)(lVar8 + 0x1c34) = (fVar1 * fVar19 + fVar21) * 0.5 - fVar25;
  *(float *)(lVar8 + 0x1c38) = (fVar17 * fVar19 + fVar10) * 0.5 - fVar23;
  *(int32_t *)(lVar8 + 0x1c3c) = 0x7f7fffff;
  lVar8 = *(int64_t *)(unaff_RBX + 0x1cd8);
  param_5._4_4_ = 3.4028235e+38;
  *(float *)(lVar8 + 0x1c40) = fVar24 - fVar15;
  *(float *)(lVar8 + 0x1c44) = fVar25 - fVar16;
  *(float *)(lVar8 + 0x1c48) = fVar23 - fVar18;
  *(int32_t *)(lVar8 + 0x1c4c) = 0x7f7fffff;
  if (param_3 != '\0') {
    lVar8 = *(int64_t *)(unaff_RBX + 0x1cd8);
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
    *(float *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c0c) =
         0.5 - (fVar24 * fVar10 + fVar23 * fVar15 + fVar25 * fVar16 + fVar20) * fVar22 * 0.5;
    *(float *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c04) =
         -(fVar21 * fVar14 + fVar18 * fVar1 + fVar19 * fVar17);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c00) = *(int32_t *)(lVar2 + 0x1dc);
  }
  if (lVar2 != 0) {
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c6c) = *(int32_t *)(lVar2 + 0x180);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1bfc) = *(int32_t *)(lVar2 + 0x1d8);
    lVar8 = *(int64_t *)(unaff_RBX + 0x1cd8);
    *(int32_t *)(lVar8 + 0x1c10) = *(int32_t *)(lVar2 + 0x1e8);
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
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c18) = uVar9;
    uVar9 = powf();
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c1c) = uVar9;
    uVar9 = powf();
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d58) = uVar9;
    uVar9 = powf();
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c14) = uVar9;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c20) = *(int32_t *)(lVar2 + 0x1f8);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c24) = *(int32_t *)(lVar2 + 0x1fc);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c28) = *(int32_t *)(lVar2 + 0x200);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1ce8) = *(int32_t *)(lVar2 + 0x208);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1cec) = *(int32_t *)(lVar2 + 0x20c);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d34) = *(int32_t *)(lVar2 + 0x210);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d30) = *(int32_t *)(lVar2 + 0x218);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d2c) = *(int32_t *)(lVar2 + 0x214);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d18) = *(int32_t *)(lVar2 + 0x21c);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d1c) = *(int32_t *)(lVar2 + 0x220);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d20) = *(int32_t *)(lVar2 + 0x224);
    *(float *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d24) = (float)*(int *)(lVar2 + 0x228);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d28) = *(int32_t *)(lVar2 + 0x22c);
    *(float *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d14) = (float)*(int *)(lVar2 + 0x230);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d10) = *(int32_t *)(lVar2 + 0x234);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1cf0) = *(int32_t *)(lVar2 + 0x288);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1cfc) = *(int32_t *)(lVar2 + 0x28c);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1ce0) = *(int32_t *)(unaff_RSI + 0x180)
    ;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1ce4) = *(int32_t *)(lVar2 + 0x294);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1cf4) = *(int32_t *)(lVar2 + 0x290);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1cf8) = *(int32_t *)(lVar2 + 0x298);
    lVar8 = *(int64_t *)(unaff_RBX + 0x1cd8);
    uVar6 = *(uint64_t *)(lVar2 + 0x2a4);
    *(uint64_t *)(lVar8 + 0x1d00) = *(uint64_t *)(lVar2 + 0x29c);
    *(uint64_t *)(lVar8 + 0x1d08) = uVar6;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d38) = *(int32_t *)(lVar2 + 0x2ac);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d3c) = *(int32_t *)(lVar2 + 0x2b0);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d50) = *(int32_t *)(lVar2 + 0x2b4);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d40) = *(int32_t *)(lVar2 + 0x2b8);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d44) = *(int32_t *)(lVar2 + 700);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d48) = *(int32_t *)(lVar2 + 0x2c0);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d4c) = *(int32_t *)(lVar2 + 0x2c4);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c60) = *(int32_t *)(lVar2 + 0x2c8);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c64) = *(int32_t *)(lVar2 + 0x2cc);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c8c) = *(int32_t *)(lVar2 + 0x204);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d88) = *(int32_t *)(lVar2 + 0x98);
    uVar7 = *(uint *)(unaff_RSI + 0x12450) & 0x800000ff;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xffffff00) + 1;
    }
    *(float *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d84) = (float)(int)uVar7;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d8c) =
         *(int32_t *)(unaff_RSI + 0x11cec);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address