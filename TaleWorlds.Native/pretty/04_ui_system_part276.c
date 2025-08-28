#include "TaleWorlds.Native.Split.h"
// 04_ui_system_part276.c - 1 个函数
// 函数: void NetworkProtocol_240c2(int param_1,uint64_t param_2,uint64_t param_3,int param_4)
void NetworkProtocol_240c2(int param_1,uint64_t param_2,uint64_t param_3,int param_4)
{
  uint uVar1;
  int8_t auVar2 [16];
  int8_t auVar3 [16];
  int8_t auVar4 [32];
  int8_t auVar5 [12];
  int in_EAX;
  uint uVar6;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int unaff_EDI;
  uint64_t uVar7;
  int16_t *in_R10;
  uint *in_R11;
  int unaff_R12D;
  int unaff_R13D;
  int unaff_R14D;
  int unaff_R15D;
  int8_t auVar8 [32];
  int8_t auVar9 [32];
  int8_t auVar10 [32];
  int8_t auVar11 [32];
  int8_t auVar12 [32];
  int8_t auVar13 [32];
  int8_t auVar14 [32];
  int8_t auVar15 [32];
  int8_t auVar17 [36];
  int8_t auVar16 [64];
  int8_t auVar18 [28];
  int8_t auVar19 [32];
  int8_t auVar20 [32];
  int8_t auVar21 [32];
  int8_t auVar22 [32];
  int8_t auVar23 [32];
  int8_t auVar24 [32];
  int8_t auVar25 [32];
  float unaff_XMM9_Da;
  float unaff_XMM9_Db;
  float unaff_XMM9_Dc;
  float unaff_XMM9_Dd;
  float in_YMM9_H;
  float in_register_00001454;
  float in_register_00001458;
  int unaff_retaddr;
  int local_var_f0;
  int local_var_f8;
  int local_var_100;
  uVar6 = (param_1 - 1U >> 3) + 1;
  uVar7 = (uint64_t)uVar6;
  do {
    uVar1 = in_R11[unaff_R13D];
    auVar20._4_4_ = uVar1;
    auVar20._0_4_ = uVar1;
    auVar20._8_4_ = uVar1;
    auVar20._12_4_ = uVar1;
    auVar20._16_4_ = uVar1;
    auVar20._20_4_ = uVar1;
    auVar20._24_4_ = uVar1;
    auVar20._28_4_ = uVar1;
    uVar1 = *in_R11;
    auVar8._4_4_ = uVar1;
    auVar8._0_4_ = uVar1;
    auVar8._8_4_ = uVar1;
    auVar8._12_4_ = uVar1;
    auVar8._16_4_ = uVar1;
    auVar8._20_4_ = uVar1;
    auVar8._24_4_ = uVar1;
    auVar8._28_4_ = uVar1;
    uVar1 = in_R11[unaff_R12D];
    auVar21._4_4_ = uVar1;
    auVar21._0_4_ = uVar1;
    auVar21._8_4_ = uVar1;
    auVar21._12_4_ = uVar1;
    auVar21._16_4_ = uVar1;
    auVar21._20_4_ = uVar1;
    auVar21._24_4_ = uVar1;
    auVar21._28_4_ = uVar1;
    uVar1 = in_R11[unaff_R15D];
    auVar22._4_4_ = uVar1;
    auVar22._0_4_ = uVar1;
    auVar22._8_4_ = uVar1;
    auVar22._12_4_ = uVar1;
    auVar22._16_4_ = uVar1;
    auVar22._20_4_ = uVar1;
    auVar22._24_4_ = uVar1;
    auVar22._28_4_ = uVar1;
    uVar1 = in_R11[unaff_R14D];
    auVar23._4_4_ = uVar1;
    auVar23._0_4_ = uVar1;
    auVar23._8_4_ = uVar1;
    auVar23._12_4_ = uVar1;
    auVar23._16_4_ = uVar1;
    auVar23._20_4_ = uVar1;
    auVar23._24_4_ = uVar1;
    auVar23._28_4_ = uVar1;
    uVar1 = in_R11[unaff_EDI];
    auVar24._4_4_ = uVar1;
    auVar24._0_4_ = uVar1;
    auVar24._8_4_ = uVar1;
    auVar24._12_4_ = uVar1;
    auVar24._16_4_ = uVar1;
    auVar24._20_4_ = uVar1;
    auVar24._24_4_ = uVar1;
    auVar24._28_4_ = uVar1;
    uVar1 = in_R11[in_EAX];
    auVar25._4_4_ = uVar1;
    auVar25._0_4_ = uVar1;
    auVar25._8_4_ = uVar1;
    auVar25._12_4_ = uVar1;
    auVar25._16_4_ = uVar1;
    auVar25._20_4_ = uVar1;
    auVar25._24_4_ = uVar1;
    auVar25._28_4_ = uVar1;
    auVar8 = vblendps_avx(ZEXT1632(ZEXT816(0) << 0x40),auVar8,1);
    uVar1 = in_R11[unaff_RBX];
    auVar19._4_4_ = uVar1;
    auVar19._0_4_ = uVar1;
    auVar19._8_4_ = uVar1;
    auVar19._12_4_ = uVar1;
    auVar19._16_4_ = uVar1;
    auVar19._20_4_ = uVar1;
    auVar19._24_4_ = uVar1;
    auVar19._28_4_ = uVar1;
    auVar8 = vblendps_avx(auVar8,auVar19,2);
    auVar8 = vblendps_avx(auVar8,auVar20,4);
    auVar8 = vblendps_avx(auVar8,auVar21,8);
    auVar8 = vblendps_avx(auVar8,auVar22,0x10);
    auVar19 = vblendps_avx(auVar8,auVar23,0x20);
    auVar19 = vblendps_avx(auVar19,auVar24,0x40);
    auVar19 = vblendps_avx(auVar19,auVar25,0x80);
    auVar4._4_4_ = auVar19._4_4_ * unaff_XMM9_Db;
    auVar4._0_4_ = auVar19._0_4_ * unaff_XMM9_Da;
    auVar4._8_4_ = auVar19._8_4_ * unaff_XMM9_Dc;
    auVar4._12_4_ = auVar19._12_4_ * unaff_XMM9_Dd;
    auVar4._16_4_ = auVar19._16_4_ * in_YMM9_H;
    auVar4._20_4_ = auVar19._20_4_ * in_register_00001454;
    auVar4._24_4_ = auVar19._24_4_ * in_register_00001458;
    auVar4._28_4_ = auVar8._28_4_;
    auVar8 = vcvtps2dq_avx(auVar4);
    auVar2 = vpackssdw_avx(auVar8._0_16_,auVar8._0_16_);
    auVar17 = (int8_t  [36])0x0;
    *in_R10 = auVar2._0_2_;
    in_R11 = in_R11 + (int)unaff_RBX * 8;
    in_R10[unaff_RSI] = auVar2._2_2_;
    in_R10[unaff_RSI * 2] = auVar2._4_2_;
    in_R10[unaff_RSI * 3] = auVar2._6_2_;
    auVar2 = vpackssdw_avx(auVar8._16_16_,auVar8._16_16_);
    in_R10[unaff_RSI * 4] = auVar2._0_2_;
    in_R10[unaff_RSI * 5] = auVar2._2_2_;
    in_R10[unaff_RSI * 6] = auVar2._4_2_;
    in_R10[unaff_RSI * 7] = auVar2._6_2_;
    in_R10 = in_R10 + param_4 * 8;
    uVar7 = uVar7 - 1;
  } while (uVar7 != 0);
  local_var_f0 = local_var_f0 + uVar6 * -8;
  if (local_var_f0 != 0) {
    local_var_f0 = local_var_f0 + -1;
    auVar5 = ZEXT812(0);
    auVar18 = ZEXT1228(auVar5) << 0x20;
    auVar8 = ZEXT1232(auVar5) << 0x20;
    switch(local_var_f0) {
    case 6:
      uVar6 = in_R11[unaff_retaddr];
      auVar9._4_4_ = uVar6;
      auVar9._0_4_ = uVar6;
      auVar9._8_4_ = uVar6;
      auVar9._12_4_ = uVar6;
      auVar9._16_4_ = uVar6;
      auVar9._20_4_ = uVar6;
      auVar9._24_4_ = uVar6;
      auVar9._28_4_ = uVar6;
      auVar8 = vblendps_avx(ZEXT1232(auVar5) << 0x20,auVar9,0x40);
    case 5:
      uVar6 = in_R11[local_var_100 * 5];
      auVar10._4_4_ = uVar6;
      auVar10._0_4_ = uVar6;
      auVar10._8_4_ = uVar6;
      auVar10._12_4_ = uVar6;
      auVar10._16_4_ = uVar6;
      auVar10._20_4_ = uVar6;
      auVar10._24_4_ = uVar6;
      auVar10._28_4_ = uVar6;
      auVar8 = vblendps_avx(auVar8,auVar10,0x20);
    case 4:
      uVar6 = in_R11[local_var_100 * 4];
      auVar11._4_4_ = uVar6;
      auVar11._0_4_ = uVar6;
      auVar11._8_4_ = uVar6;
      auVar11._12_4_ = uVar6;
      auVar11._16_4_ = uVar6;
      auVar11._20_4_ = uVar6;
      auVar11._24_4_ = uVar6;
      auVar11._28_4_ = uVar6;
      auVar8 = vblendps_avx(auVar8,auVar11,0x10);
    case 3:
      uVar6 = in_R11[local_var_100 * 3];
      auVar12._4_4_ = uVar6;
      auVar12._0_4_ = uVar6;
      auVar12._8_4_ = uVar6;
      auVar12._12_4_ = uVar6;
      auVar12._16_4_ = uVar6;
      auVar12._20_4_ = uVar6;
      auVar12._24_4_ = uVar6;
      auVar12._28_4_ = uVar6;
      auVar8 = vblendps_avx(auVar8,auVar12,8);
    case 2:
      uVar6 = in_R11[local_var_100 * 2];
      auVar13._4_4_ = uVar6;
      auVar13._0_4_ = uVar6;
      auVar13._8_4_ = uVar6;
      auVar13._12_4_ = uVar6;
      auVar13._16_4_ = uVar6;
      auVar13._20_4_ = uVar6;
      auVar13._24_4_ = uVar6;
      auVar13._28_4_ = uVar6;
      auVar8 = vblendps_avx(auVar8,auVar13,4);
    case 1:
      uVar6 = in_R11[local_var_100];
      auVar14._4_4_ = uVar6;
      auVar14._0_4_ = uVar6;
      auVar14._8_4_ = uVar6;
      auVar14._12_4_ = uVar6;
      auVar14._16_4_ = uVar6;
      auVar14._20_4_ = uVar6;
      auVar14._24_4_ = uVar6;
      auVar14._28_4_ = uVar6;
      auVar8 = vblendps_avx(auVar8,auVar14,2);
    case 0:
      uVar6 = *in_R11;
      auVar15._4_4_ = uVar6;
      auVar15._0_4_ = uVar6;
      auVar15._8_4_ = uVar6;
      auVar15._12_4_ = uVar6;
      auVar15._16_4_ = uVar6;
      auVar15._20_4_ = uVar6;
      auVar15._24_4_ = uVar6;
      auVar15._28_4_ = uVar6;
      auVar17 = ZEXT436(uVar6);
      auVar8 = vblendps_avx(auVar8,auVar15,1);
      auVar18 = auVar8._0_28_;
    }
    auVar16._0_4_ = auVar18._0_4_ * unaff_XMM9_Da;
    auVar16._4_4_ = auVar18._4_4_ * unaff_XMM9_Db;
    auVar16._8_4_ = auVar18._8_4_ * unaff_XMM9_Dc;
    auVar16._12_4_ = auVar18._12_4_ * unaff_XMM9_Dd;
    auVar16._16_4_ = auVar18._16_4_ * in_YMM9_H;
    auVar16._20_4_ = auVar18._20_4_ * in_register_00001454;
    auVar16._24_4_ = auVar18._24_4_ * in_register_00001458;
    auVar16._28_36_ = auVar17;
    auVar8 = vcvtps2dq_avx(auVar16._0_32_);
    auVar2 = vpackssdw_avx(auVar8._0_16_,auVar8._0_16_);
    auVar3 = vpackssdw_avx(auVar8._16_16_,auVar8._16_16_);
    switch(local_var_f0) {
    case 6:
      in_R10[local_var_f8 * 6] = auVar3._4_2_;
    case 5:
      in_R10[local_var_f8 * 5] = auVar3._2_2_;
    case 4:
      in_R10[local_var_f8 * 4] = auVar3._0_2_;
    case 3:
      in_R10[local_var_f8 * 3] = auVar2._6_2_;
    case 2:
      in_R10[local_var_f8 * 2] = auVar2._4_2_;
    case 1:
      in_R10[local_var_f8] = auVar2._2_2_;
    case 0:
      *in_R10 = auVar2._0_2_;
    }
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x00018082436c)