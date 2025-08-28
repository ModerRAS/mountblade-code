#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part303.c - 2 个函数

// 函数: void FUN_180834fc0(float *param_1,uint param_2,longlong param_3,uint *param_4,longlong *param_5)
void FUN_180834fc0(float *param_1,uint param_2,longlong param_3,uint *param_4,longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  int8_t auVar3 [12];
  int8_t auVar4 [12];
  int8_t auVar5 [12];
  int8_t auVar6 [12];
  int8_t auVar7 [12];
  int8_t auVar8 [12];
  int8_t auVar9 [12];
  int8_t auVar10 [12];
  int8_t auVar11 [12];
  int8_t auVar12 [12];
  int8_t auVar13 [12];
  int8_t auVar14 [12];
  int iVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  int iVar18;
  uint uVar19;
  uint uVar56;
  uint uVar57;
  int8_t auVar20 [16];
  int8_t auVar23 [16];
  uint uVar58;
  int8_t auVar26 [16];
  int8_t auVar29 [16];
  int8_t auVar32 [16];
  int8_t auVar35 [16];
  int8_t auVar38 [16];
  int8_t auVar41 [16];
  int8_t auVar44 [16];
  int8_t auVar47 [16];
  int8_t auVar50 [16];
  int8_t auVar53 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  int8_t auVar65 [16];
  longlong lVar66;
  int8_t auVar67 [16];
  int iVar68;
  int8_t auStack_c8 [8];
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  ulonglong auStack_98 [18];
  int8_t auVar21 [16];
  int8_t auVar24 [16];
  int8_t auVar27 [16];
  int8_t auVar30 [16];
  int8_t auVar33 [16];
  int8_t auVar36 [16];
  int8_t auVar39 [16];
  int8_t auVar42 [16];
  int8_t auVar45 [16];
  int8_t auVar48 [16];
  int8_t auVar51 [16];
  int8_t auVar54 [16];
  int8_t auVar22 [16];
  int8_t auVar25 [16];
  int8_t auVar28 [16];
  int8_t auVar31 [16];
  int8_t auVar34 [16];
  int8_t auVar37 [16];
  int8_t auVar40 [16];
  int8_t auVar43 [16];
  int8_t auVar46 [16];
  int8_t auVar49 [16];
  int8_t auVar52 [16];
  int8_t auVar55 [16];
  
  puVar17 = auStack_98;
  auStack_98[0] = _DAT_180bf00a8 ^ (ulonglong)auStack_98;
  if ((((ulonglong)param_1 & 0xf) != 0) && (param_2 != 0)) {
    uVar19 = *param_4;
    iVar18 = (int)*param_5;
    uVar56 = uVar19;
    uVar57 = uVar19;
    uVar58 = uVar19;
    do {
      if (param_2 == 0) break;
      param_2 = param_2 - 1;
      auVar65 = *(int8_t (*) [16])(param_3 + (ulonglong)(param_4[1] << 3) * 2);
      auVar67 = *(int8_t (*) [16])(param_3 + 0x10 + (ulonglong)(param_4[1] << 3) * 2);
      auVar22._0_12_ = auVar65._0_12_;
      auVar22._12_2_ = auVar65._6_2_;
      auVar22._14_2_ = auVar65._6_2_;
      auVar21._12_4_ = auVar22._12_4_;
      auVar21._0_10_ = auVar65._0_10_;
      auVar21._10_2_ = auVar65._4_2_;
      auVar20._10_6_ = auVar21._10_6_;
      auVar20._0_8_ = auVar65._0_8_;
      auVar20._8_2_ = auVar65._4_2_;
      auVar3._4_8_ = auVar20._8_8_;
      auVar3._2_2_ = auVar65._2_2_;
      auVar3._0_2_ = auVar65._2_2_;
      fVar59 = (float)(auVar3._0_4_ >> 0x10);
      fVar60 = (float)(auVar20._8_4_ >> 0x10);
      auVar25._0_12_ = auVar67._0_12_;
      auVar25._12_2_ = auVar67._6_2_;
      auVar25._14_2_ = auVar67._6_2_;
      auVar24._12_4_ = auVar25._12_4_;
      auVar24._0_10_ = auVar67._0_10_;
      auVar24._10_2_ = auVar67._4_2_;
      auVar23._10_6_ = auVar24._10_6_;
      auVar23._0_8_ = auVar67._0_8_;
      auVar23._8_2_ = auVar67._4_2_;
      auVar4._4_8_ = auVar23._8_8_;
      auVar4._2_2_ = auVar67._2_2_;
      auVar4._0_2_ = auVar67._2_2_;
      fVar61 = (float)(uVar19 >> 1) * 4.656613e-10;
      fVar62 = (float)(uVar56 >> 1) * 4.656613e-10;
      fVar63 = (float)(uVar57 >> 1) * 4.656613e-10;
      fVar64 = (float)(uVar58 >> 1) * 4.656613e-10;
      *param_1 = (((float)(int)auVar67._0_2_ - (float)(int)auVar65._0_2_) * fVar61 +
                 (float)(int)auVar65._0_2_) * 3.0517578e-05;
      param_1[1] = (((float)(auVar4._0_4_ >> 0x10) - fVar59) * fVar62 + fVar59) * 3.0517578e-05;
      param_1[2] = (((float)(auVar23._8_4_ >> 0x10) - fVar60) * fVar63 + fVar60) * 3.0517578e-05;
      param_1[3] = (((float)(auVar24._12_4_ >> 0x10) - (float)(auVar21._12_4_ >> 0x10)) * fVar64 +
                   (float)(auVar21._12_4_ >> 0x10)) * 3.0517578e-05;
      param_1[4] = (((float)(int)auVar67._8_2_ - (float)(int)auVar65._8_2_) * fVar61 +
                   (float)(int)auVar65._8_2_) * 3.0517578e-05;
      param_1[5] = (((float)(int)auVar67._10_2_ - (float)(int)auVar65._10_2_) * fVar62 +
                   (float)(int)auVar65._10_2_) * 3.0517578e-05;
      param_1[6] = (((float)(int)auVar67._12_2_ - (float)(int)auVar65._12_2_) * fVar63 +
                   (float)(int)auVar65._12_2_) * 3.0517578e-05;
      param_1[7] = (((float)(int)auVar67._14_2_ - (float)(int)auVar65._14_2_) * fVar64 +
                   (float)(int)auVar65._14_2_) * 3.0517578e-05;
      param_1 = param_1 + 8;
      *(longlong *)param_4 = *(longlong *)param_4 + *param_5;
      uVar19 = iVar18 + uVar19;
      uVar56 = iVar18 + uVar56;
      uVar57 = iVar18 + uVar57;
      uVar58 = iVar18 + uVar58;
    } while (((ulonglong)param_1 & 0xf) != 0);
  }
  iVar18 = (int)param_2 >> 2;
  if (iVar18 != 0) {
    lVar66 = *param_5;
    lVar2 = *(longlong *)param_4;
    lVar1 = lVar66 * 4;
    iVar68 = (int)lVar66;
    iVar15 = iVar68 * 4;
    uVar19 = (uint)lVar2;
    uVar56 = iVar68 + uVar19;
    uVar57 = iVar68 * 2 + uVar19;
    uVar58 = iVar68 * 3 + uVar19;
    auVar65._8_8_ = lVar66 + lVar2;
    auVar65._0_8_ = lVar2;
    auVar67._0_8_ = lVar66 * 2 + lVar2;
    auVar67._8_8_ = lVar66 * 3 + lVar2;
    puVar17 = (ulonglong *)auStack_c8;
    do {
      iVar68 = auVar67._12_4_;
      uStack_b8 = CONCAT44(iVar68,auVar67._4_4_);
      uStack_c0 = CONCAT44(auVar65._12_4_,auVar65._4_4_);
      uVar16 = (ulonglong)(uint)(auVar65._4_4_ << 3);
      auVar20 = *(int8_t (*) [16])(param_3 + uVar16 * 2);
      auVar21 = *(int8_t (*) [16])(param_3 + 0x10 + uVar16 * 2);
      auVar28._0_12_ = auVar20._0_12_;
      auVar28._12_2_ = auVar20._6_2_;
      auVar28._14_2_ = auVar20._6_2_;
      auVar27._12_4_ = auVar28._12_4_;
      auVar27._0_10_ = auVar20._0_10_;
      auVar27._10_2_ = auVar20._4_2_;
      auVar26._10_6_ = auVar27._10_6_;
      auVar26._0_8_ = auVar20._0_8_;
      auVar26._8_2_ = auVar20._4_2_;
      auVar5._4_8_ = auVar26._8_8_;
      auVar5._2_2_ = auVar20._2_2_;
      auVar5._0_2_ = auVar20._2_2_;
      fVar59 = (float)(auVar5._0_4_ >> 0x10);
      fVar60 = (float)(auVar26._8_4_ >> 0x10);
      auVar31._0_12_ = auVar21._0_12_;
      auVar31._12_2_ = auVar21._6_2_;
      auVar31._14_2_ = auVar21._6_2_;
      auVar30._12_4_ = auVar31._12_4_;
      auVar30._0_10_ = auVar21._0_10_;
      auVar30._10_2_ = auVar21._4_2_;
      auVar29._10_6_ = auVar30._10_6_;
      auVar29._0_8_ = auVar21._0_8_;
      auVar29._8_2_ = auVar21._4_2_;
      auVar6._4_8_ = auVar29._8_8_;
      auVar6._2_2_ = auVar21._2_2_;
      auVar6._0_2_ = auVar21._2_2_;
      fVar61 = (float)(uVar19 >> 1) * 4.656613e-10;
      fVar62 = (float)(uVar56 >> 1) * 4.656613e-10;
      fVar63 = (float)(uVar57 >> 1) * 4.656613e-10;
      fVar64 = (float)(uVar58 >> 1) * 4.656613e-10;
      *param_1 = (((float)(int)auVar21._0_2_ - (float)(int)auVar20._0_2_) * fVar61 +
                 (float)(int)auVar20._0_2_) * 3.0517578e-05;
      param_1[1] = (((float)(auVar6._0_4_ >> 0x10) - fVar59) * fVar61 + fVar59) * 3.0517578e-05;
      param_1[2] = (((float)(auVar29._8_4_ >> 0x10) - fVar60) * fVar61 + fVar60) * 3.0517578e-05;
      param_1[3] = (((float)(auVar30._12_4_ >> 0x10) - (float)(auVar27._12_4_ >> 0x10)) * fVar61 +
                   (float)(auVar27._12_4_ >> 0x10)) * 3.0517578e-05;
      param_1[4] = (((float)(int)auVar21._8_2_ - (float)(int)auVar20._8_2_) * fVar61 +
                   (float)(int)auVar20._8_2_) * 3.0517578e-05;
      param_1[5] = (((float)(int)auVar21._10_2_ - (float)(int)auVar20._10_2_) * fVar61 +
                   (float)(int)auVar20._10_2_) * 3.0517578e-05;
      param_1[6] = (((float)(int)auVar21._12_2_ - (float)(int)auVar20._12_2_) * fVar61 +
                   (float)(int)auVar20._12_2_) * 3.0517578e-05;
      param_1[7] = (((float)(int)auVar21._14_2_ - (float)(int)auVar20._14_2_) * fVar61 +
                   (float)(int)auVar20._14_2_) * 3.0517578e-05;
      uVar16 = (ulonglong)(uint)(auVar65._12_4_ << 3);
      auVar20 = *(int8_t (*) [16])(param_3 + uVar16 * 2);
      auVar21 = *(int8_t (*) [16])(param_3 + 0x10 + uVar16 * 2);
      auVar34._0_12_ = auVar20._0_12_;
      auVar34._12_2_ = auVar20._6_2_;
      auVar34._14_2_ = auVar20._6_2_;
      auVar33._12_4_ = auVar34._12_4_;
      auVar33._0_10_ = auVar20._0_10_;
      auVar33._10_2_ = auVar20._4_2_;
      auVar32._10_6_ = auVar33._10_6_;
      auVar32._0_8_ = auVar20._0_8_;
      auVar32._8_2_ = auVar20._4_2_;
      auVar7._4_8_ = auVar32._8_8_;
      auVar7._2_2_ = auVar20._2_2_;
      auVar7._0_2_ = auVar20._2_2_;
      fVar59 = (float)(auVar7._0_4_ >> 0x10);
      fVar60 = (float)(auVar32._8_4_ >> 0x10);
      auVar37._0_12_ = auVar21._0_12_;
      auVar37._12_2_ = auVar21._6_2_;
      auVar37._14_2_ = auVar21._6_2_;
      auVar36._12_4_ = auVar37._12_4_;
      auVar36._0_10_ = auVar21._0_10_;
      auVar36._10_2_ = auVar21._4_2_;
      auVar35._10_6_ = auVar36._10_6_;
      auVar35._0_8_ = auVar21._0_8_;
      auVar35._8_2_ = auVar21._4_2_;
      auVar8._4_8_ = auVar35._8_8_;
      auVar8._2_2_ = auVar21._2_2_;
      auVar8._0_2_ = auVar21._2_2_;
      param_1[8] = (((float)(int)auVar21._0_2_ - (float)(int)auVar20._0_2_) * fVar62 +
                   (float)(int)auVar20._0_2_) * 3.0517578e-05;
      param_1[9] = (((float)(auVar8._0_4_ >> 0x10) - fVar59) * fVar62 + fVar59) * 3.0517578e-05;
      param_1[10] = (((float)(auVar35._8_4_ >> 0x10) - fVar60) * fVar62 + fVar60) * 3.0517578e-05;
      param_1[0xb] = (((float)(auVar36._12_4_ >> 0x10) - (float)(auVar33._12_4_ >> 0x10)) * fVar62 +
                     (float)(auVar33._12_4_ >> 0x10)) * 3.0517578e-05;
      param_1[0xc] = (((float)(int)auVar21._8_2_ - (float)(int)auVar20._8_2_) * fVar62 +
                     (float)(int)auVar20._8_2_) * 3.0517578e-05;
      param_1[0xd] = (((float)(int)auVar21._10_2_ - (float)(int)auVar20._10_2_) * fVar62 +
                     (float)(int)auVar20._10_2_) * 3.0517578e-05;
      param_1[0xe] = (((float)(int)auVar21._12_2_ - (float)(int)auVar20._12_2_) * fVar62 +
                     (float)(int)auVar20._12_2_) * 3.0517578e-05;
      param_1[0xf] = (((float)(int)auVar21._14_2_ - (float)(int)auVar20._14_2_) * fVar62 +
                     (float)(int)auVar20._14_2_) * 3.0517578e-05;
      uVar16 = (ulonglong)(uint)(auVar67._4_4_ << 3);
      auVar20 = *(int8_t (*) [16])(param_3 + uVar16 * 2);
      auVar21 = *(int8_t (*) [16])(param_3 + 0x10 + uVar16 * 2);
      auVar40._0_12_ = auVar20._0_12_;
      auVar40._12_2_ = auVar20._6_2_;
      auVar40._14_2_ = auVar20._6_2_;
      auVar39._12_4_ = auVar40._12_4_;
      auVar39._0_10_ = auVar20._0_10_;
      auVar39._10_2_ = auVar20._4_2_;
      auVar38._10_6_ = auVar39._10_6_;
      auVar38._0_8_ = auVar20._0_8_;
      auVar38._8_2_ = auVar20._4_2_;
      auVar9._4_8_ = auVar38._8_8_;
      auVar9._2_2_ = auVar20._2_2_;
      auVar9._0_2_ = auVar20._2_2_;
      fVar59 = (float)(auVar9._0_4_ >> 0x10);
      fVar60 = (float)(auVar38._8_4_ >> 0x10);
      auVar43._0_12_ = auVar21._0_12_;
      auVar43._12_2_ = auVar21._6_2_;
      auVar43._14_2_ = auVar21._6_2_;
      auVar42._12_4_ = auVar43._12_4_;
      auVar42._0_10_ = auVar21._0_10_;
      auVar42._10_2_ = auVar21._4_2_;
      auVar41._10_6_ = auVar42._10_6_;
      auVar41._0_8_ = auVar21._0_8_;
      auVar41._8_2_ = auVar21._4_2_;
      auVar10._4_8_ = auVar41._8_8_;
      auVar10._2_2_ = auVar21._2_2_;
      auVar10._0_2_ = auVar21._2_2_;
      lVar66 = auVar65._8_8_;
      auVar65._0_8_ = auVar65._0_8_ + lVar1;
      auVar65._8_8_ = lVar66 + lVar1;
      lVar66 = auVar67._8_8_;
      auVar67._0_8_ = auVar67._0_8_ + lVar1;
      auVar67._8_8_ = lVar66 + lVar1;
      uVar19 = uVar19 + iVar15;
      uVar56 = uVar56 + iVar15;
      uVar57 = uVar57 + iVar15;
      uVar58 = uVar58 + iVar15;
      param_1[0x10] =
           (((float)(int)auVar21._0_2_ - (float)(int)auVar20._0_2_) * fVar63 +
           (float)(int)auVar20._0_2_) * 3.0517578e-05;
      param_1[0x11] = (((float)(auVar10._0_4_ >> 0x10) - fVar59) * fVar63 + fVar59) * 3.0517578e-05;
      param_1[0x12] = (((float)(auVar41._8_4_ >> 0x10) - fVar60) * fVar63 + fVar60) * 3.0517578e-05;
      param_1[0x13] =
           (((float)(auVar42._12_4_ >> 0x10) - (float)(auVar39._12_4_ >> 0x10)) * fVar63 +
           (float)(auVar39._12_4_ >> 0x10)) * 3.0517578e-05;
      param_1[0x14] =
           (((float)(int)auVar21._8_2_ - (float)(int)auVar20._8_2_) * fVar63 +
           (float)(int)auVar20._8_2_) * 3.0517578e-05;
      param_1[0x15] =
           (((float)(int)auVar21._10_2_ - (float)(int)auVar20._10_2_) * fVar63 +
           (float)(int)auVar20._10_2_) * 3.0517578e-05;
      param_1[0x16] =
           (((float)(int)auVar21._12_2_ - (float)(int)auVar20._12_2_) * fVar63 +
           (float)(int)auVar20._12_2_) * 3.0517578e-05;
      param_1[0x17] =
           (((float)(int)auVar21._14_2_ - (float)(int)auVar20._14_2_) * fVar63 +
           (float)(int)auVar20._14_2_) * 3.0517578e-05;
      uVar16 = (ulonglong)(uint)(iVar68 << 3);
      auVar20 = *(int8_t (*) [16])(param_3 + uVar16 * 2);
      auVar21 = *(int8_t (*) [16])(param_3 + 0x10 + uVar16 * 2);
      auVar46._0_12_ = auVar20._0_12_;
      auVar46._12_2_ = auVar20._6_2_;
      auVar46._14_2_ = auVar20._6_2_;
      auVar45._12_4_ = auVar46._12_4_;
      auVar45._0_10_ = auVar20._0_10_;
      auVar45._10_2_ = auVar20._4_2_;
      auVar44._10_6_ = auVar45._10_6_;
      auVar44._0_8_ = auVar20._0_8_;
      auVar44._8_2_ = auVar20._4_2_;
      auVar11._4_8_ = auVar44._8_8_;
      auVar11._2_2_ = auVar20._2_2_;
      auVar11._0_2_ = auVar20._2_2_;
      fVar59 = (float)(auVar11._0_4_ >> 0x10);
      fVar60 = (float)(auVar44._8_4_ >> 0x10);
      auVar49._0_12_ = auVar21._0_12_;
      auVar49._12_2_ = auVar21._6_2_;
      auVar49._14_2_ = auVar21._6_2_;
      auVar48._12_4_ = auVar49._12_4_;
      auVar48._0_10_ = auVar21._0_10_;
      auVar48._10_2_ = auVar21._4_2_;
      auVar47._10_6_ = auVar48._10_6_;
      auVar47._0_8_ = auVar21._0_8_;
      auVar47._8_2_ = auVar21._4_2_;
      auVar12._4_8_ = auVar47._8_8_;
      auVar12._2_2_ = auVar21._2_2_;
      auVar12._0_2_ = auVar21._2_2_;
      param_1[0x18] =
           (((float)(int)auVar21._0_2_ - (float)(int)auVar20._0_2_) * fVar64 +
           (float)(int)auVar20._0_2_) * 3.0517578e-05;
      param_1[0x19] = (((float)(auVar12._0_4_ >> 0x10) - fVar59) * fVar64 + fVar59) * 3.0517578e-05;
      param_1[0x1a] = (((float)(auVar47._8_4_ >> 0x10) - fVar60) * fVar64 + fVar60) * 3.0517578e-05;
      param_1[0x1b] =
           (((float)(auVar48._12_4_ >> 0x10) - (float)(auVar45._12_4_ >> 0x10)) * fVar64 +
           (float)(auVar45._12_4_ >> 0x10)) * 3.0517578e-05;
      param_1[0x1c] =
           (((float)(int)auVar21._8_2_ - (float)(int)auVar20._8_2_) * fVar64 +
           (float)(int)auVar20._8_2_) * 3.0517578e-05;
      param_1[0x1d] =
           (((float)(int)auVar21._10_2_ - (float)(int)auVar20._10_2_) * fVar64 +
           (float)(int)auVar20._10_2_) * 3.0517578e-05;
      param_1[0x1e] =
           (((float)(int)auVar21._12_2_ - (float)(int)auVar20._12_2_) * fVar64 +
           (float)(int)auVar20._12_2_) * 3.0517578e-05;
      param_1[0x1f] =
           (((float)(int)auVar21._14_2_ - (float)(int)auVar20._14_2_) * fVar64 +
           (float)(int)auVar20._14_2_) * 3.0517578e-05;
      param_1 = param_1 + 0x20;
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
    *(longlong *)param_4 = auVar65._0_8_;
  }
  param_2 = param_2 & 3;
  if (param_2 != 0) {
    uVar19 = *param_4;
    iVar18 = (int)*param_5;
    uVar56 = uVar19;
    uVar57 = uVar19;
    uVar58 = uVar19;
    do {
      auVar65 = *(int8_t (*) [16])(param_3 + (ulonglong)(param_4[1] << 3) * 2);
      auVar67 = *(int8_t (*) [16])(param_3 + 0x10 + (ulonglong)(param_4[1] << 3) * 2);
      auVar52._0_12_ = auVar65._0_12_;
      auVar52._12_2_ = auVar65._6_2_;
      auVar52._14_2_ = auVar65._6_2_;
      auVar51._12_4_ = auVar52._12_4_;
      auVar51._0_10_ = auVar65._0_10_;
      auVar51._10_2_ = auVar65._4_2_;
      auVar50._10_6_ = auVar51._10_6_;
      auVar50._0_8_ = auVar65._0_8_;
      auVar50._8_2_ = auVar65._4_2_;
      auVar13._4_8_ = auVar50._8_8_;
      auVar13._2_2_ = auVar65._2_2_;
      auVar13._0_2_ = auVar65._2_2_;
      fVar59 = (float)(auVar13._0_4_ >> 0x10);
      fVar60 = (float)(auVar50._8_4_ >> 0x10);
      auVar55._0_12_ = auVar67._0_12_;
      auVar55._12_2_ = auVar67._6_2_;
      auVar55._14_2_ = auVar67._6_2_;
      auVar54._12_4_ = auVar55._12_4_;
      auVar54._0_10_ = auVar67._0_10_;
      auVar54._10_2_ = auVar67._4_2_;
      auVar53._10_6_ = auVar54._10_6_;
      auVar53._0_8_ = auVar67._0_8_;
      auVar53._8_2_ = auVar67._4_2_;
      auVar14._4_8_ = auVar53._8_8_;
      auVar14._2_2_ = auVar67._2_2_;
      auVar14._0_2_ = auVar67._2_2_;
      fVar61 = (float)(uVar19 >> 1) * 4.656613e-10;
      fVar62 = (float)(uVar56 >> 1) * 4.656613e-10;
      fVar63 = (float)(uVar57 >> 1) * 4.656613e-10;
      fVar64 = (float)(uVar58 >> 1) * 4.656613e-10;
      *param_1 = (((float)(int)auVar67._0_2_ - (float)(int)auVar65._0_2_) * fVar61 +
                 (float)(int)auVar65._0_2_) * 3.0517578e-05;
      param_1[1] = (((float)(auVar14._0_4_ >> 0x10) - fVar59) * fVar62 + fVar59) * 3.0517578e-05;
      param_1[2] = (((float)(auVar53._8_4_ >> 0x10) - fVar60) * fVar63 + fVar60) * 3.0517578e-05;
      param_1[3] = (((float)(auVar54._12_4_ >> 0x10) - (float)(auVar51._12_4_ >> 0x10)) * fVar64 +
                   (float)(auVar51._12_4_ >> 0x10)) * 3.0517578e-05;
      param_1[4] = (((float)(int)auVar67._8_2_ - (float)(int)auVar65._8_2_) * fVar61 +
                   (float)(int)auVar65._8_2_) * 3.0517578e-05;
      param_1[5] = (((float)(int)auVar67._10_2_ - (float)(int)auVar65._10_2_) * fVar62 +
                   (float)(int)auVar65._10_2_) * 3.0517578e-05;
      param_1[6] = (((float)(int)auVar67._12_2_ - (float)(int)auVar65._12_2_) * fVar63 +
                   (float)(int)auVar65._12_2_) * 3.0517578e-05;
      param_1[7] = (((float)(int)auVar67._14_2_ - (float)(int)auVar65._14_2_) * fVar64 +
                   (float)(int)auVar65._14_2_) * 3.0517578e-05;
      param_1 = param_1 + 8;
      *(longlong *)param_4 = *(longlong *)param_4 + *param_5;
      uVar19 = iVar18 + uVar19;
      uVar56 = iVar18 + uVar56;
      uVar57 = iVar18 + uVar57;
      uVar58 = iVar18 + uVar58;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
                    // WARNING: Subroutine does not return
  *(uint64_t *)((longlong)puVar17 + -8) = 0x1808354b8;
  FUN_1808fc050(auStack_98[0] ^ (ulonglong)auStack_98);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180835500(float *param_1,uint param_2,longlong param_3,uint *param_4,longlong *param_5)
void FUN_180835500(float *param_1,uint param_2,longlong param_3,uint *param_4,longlong *param_5)

{
  int16_t *puVar1;
  int16_t *puVar2;
  longlong lVar3;
  int8_t auVar4 [16];
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  short sVar8;
  int16_t uVar9;
  short sVar10;
  int8_t auVar11 [12];
  int8_t auVar12 [12];
  int8_t auVar13 [12];
  int8_t auVar14 [16];
  int8_t auVar15 [12];
  int iVar16;
  uint uVar17;
  ulonglong *puVar18;
  int iVar19;
  int8_t auVar20 [16];
  int16_t uVar22;
  float fVar26;
  int8_t auVar27 [16];
  int8_t auVar30 [16];
  float fVar31;
  uint uVar33;
  int8_t auVar32 [16];
  uint uVar35;
  longlong lVar34;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar40;
  int8_t auVar39 [16];
  uint uVar41;
  int8_t auStack_b8 [24];
  uint64_t uStack_a0;
  uint64_t uStack_98;
  ulonglong auStack_88 [16];
  int8_t auVar21 [16];
  int8_t auVar23 [16];
  int8_t auVar24 [16];
  int8_t auVar25 [16];
  int8_t auVar28 [16];
  int8_t auVar29 [16];
  
  puVar18 = auStack_88;
  auStack_88[0] = _DAT_180bf00a8 ^ (ulonglong)auStack_88;
  uVar6 = (ulonglong)param_1 & 0xf;
  for (; (uVar6 != 0 && (param_2 != 0)); param_2 = param_2 - 1) {
    fVar26 = (float)(int)*(short *)(param_3 + (ulonglong)param_4[1] * 2) * 3.0517578e-05;
    *param_1 = ((float)(int)*(short *)(param_3 + (ulonglong)(param_4[1] + 1) * 2) * 3.0517578e-05 -
               fVar26) * (float)(*param_4 >> 1) * 4.656613e-10 + fVar26;
    param_1 = param_1 + 1;
    *(longlong *)param_4 = *(longlong *)param_4 + *param_5;
    uVar6 = (ulonglong)param_1 & 0xf;
  }
  iVar19 = (int)param_2 >> 2;
  if (iVar19 != 0) {
    lVar34 = *param_5;
    lVar5 = *(longlong *)param_4;
    lVar3 = lVar34 * 4;
    iVar7 = (int)lVar34;
    iVar16 = iVar7 * 4;
    uVar17 = (uint)lVar5;
    auVar32._8_8_ = lVar34 + lVar5;
    auVar32._0_8_ = lVar5;
    auVar39._0_8_ = lVar34 * 2 + lVar5;
    auVar39._8_8_ = lVar34 * 3 + lVar5;
    puVar18 = (ulonglong *)auStack_b8;
    uVar36 = iVar7 + uVar17;
    uVar37 = iVar7 * 2 + uVar17;
    uVar38 = iVar7 * 3 + uVar17;
    do {
      uVar40 = auVar39._4_4_;
      uVar41 = auVar39._12_4_;
      uStack_98 = CONCAT44(uVar41,uVar40);
      lVar34 = auVar39._8_8_;
      auVar39._0_8_ = auVar39._0_8_ + lVar3;
      auVar39._8_8_ = lVar34 + lVar3;
      uVar33 = auVar32._4_4_;
      uVar35 = auVar32._12_4_;
      uStack_a0 = CONCAT44(uVar35,uVar33);
      lVar34 = auVar32._8_8_;
      auVar32._0_8_ = auVar32._0_8_ + lVar3;
      auVar32._8_8_ = lVar34 + lVar3;
      auVar4 = *(int8_t (*) [16])(param_3 + (ulonglong)uVar33 * 2);
      puVar1 = (int16_t *)(param_3 + (ulonglong)uVar35 * 2);
      sVar8 = puVar1[1];
      auVar29._0_12_ = auVar4._0_12_;
      auVar29._12_2_ = auVar4._6_2_;
      auVar29._14_2_ = puVar1[3];
      auVar28._12_4_ = auVar29._12_4_;
      auVar28._0_10_ = auVar4._0_10_;
      auVar28._10_2_ = puVar1[2];
      auVar27._10_6_ = auVar28._10_6_;
      auVar27._0_8_ = auVar4._0_8_;
      auVar27._8_2_ = auVar4._4_2_;
      auVar11._4_8_ = auVar27._8_8_;
      auVar11._2_2_ = sVar8;
      auVar11._0_2_ = auVar4._2_2_;
      auVar30._0_8_ = auVar11._0_8_ << 0x20;
      auVar27 = *(int8_t (*) [16])(param_3 + (ulonglong)uVar40 * 2);
      puVar2 = (int16_t *)(param_3 + (ulonglong)uVar41 * 2);
      uVar9 = *puVar2;
      sVar10 = puVar2[1];
      auVar25._0_12_ = auVar27._0_12_;
      auVar25._12_2_ = auVar27._6_2_;
      auVar25._14_2_ = puVar2[3];
      auVar24._12_4_ = auVar25._12_4_;
      auVar24._0_10_ = auVar27._0_10_;
      auVar24._10_2_ = puVar2[2];
      auVar23._10_6_ = auVar24._10_6_;
      auVar23._0_8_ = auVar27._0_8_;
      auVar23._8_2_ = auVar27._4_2_;
      auVar12._4_8_ = auVar23._8_8_;
      auVar12._2_2_ = sVar10;
      auVar12._0_2_ = auVar27._2_2_;
      uVar22 = auVar27._0_2_;
      auVar30._8_4_ = auVar11._0_4_;
      auVar30._12_4_ = auVar12._0_4_;
      auVar14._4_8_ = auVar30._8_8_;
      auVar14._0_4_ = CONCAT22(uVar9,uVar22);
      auVar14._12_4_ = 0;
      auVar21._0_12_ = SUB1612(auVar14 << 0x20,0);
      auVar21._12_2_ = uVar9;
      auVar21._14_2_ = uVar9;
      auVar20._12_4_ = auVar21._12_4_;
      auVar20._0_10_ = SUB1610(auVar14 << 0x20,0);
      auVar20._10_2_ = uVar22;
      auVar15._4_2_ = uVar22;
      auVar15._0_4_ = CONCAT22(uVar9,uVar22);
      auVar15._6_6_ = auVar20._10_6_;
      auVar13._4_8_ = auVar15._4_8_;
      auVar13._2_2_ = *puVar1;
      auVar13._0_2_ = *puVar1;
      fVar26 = (float)(auVar13._0_4_ >> 0x10);
      fVar31 = (float)(auVar15._4_4_ >> 0x10);
      *param_1 = (((float)(int)auVar4._2_2_ - (float)(int)auVar4._0_2_) *
                  (float)(uVar17 >> 1) * 4.656613e-10 + (float)(int)auVar4._0_2_) * 3.0517578e-05;
      param_1[1] = (((float)(int)sVar8 - fVar26) * (float)(uVar36 >> 1) * 4.656613e-10 + fVar26) *
                   3.0517578e-05;
      param_1[2] = (((float)(int)auVar27._2_2_ - fVar31) * (float)(uVar37 >> 1) * 4.656613e-10 +
                   fVar31) * 3.0517578e-05;
      param_1[3] = (((float)(int)sVar10 - (float)(auVar20._12_4_ >> 0x10)) *
                    (float)(uVar38 >> 1) * 4.656613e-10 + (float)(auVar20._12_4_ >> 0x10)) *
                   3.0517578e-05;
      param_1 = param_1 + 4;
      iVar19 = iVar19 + -1;
      uVar17 = uVar17 + iVar16;
      uVar36 = uVar36 + iVar16;
      uVar37 = uVar37 + iVar16;
      uVar38 = uVar38 + iVar16;
    } while (iVar19 != 0);
    *(longlong *)param_4 = auVar32._0_8_;
  }
  for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
    fVar26 = (float)(int)*(short *)(param_3 + (ulonglong)param_4[1] * 2) * 3.0517578e-05;
    *param_1 = ((float)(int)*(short *)(param_3 + (ulonglong)(param_4[1] + 1) * 2) * 3.0517578e-05 -
               fVar26) * (float)(*param_4 >> 1) * 4.656613e-10 + fVar26;
    param_1 = param_1 + 1;
    *(longlong *)param_4 = *(longlong *)param_4 + *param_5;
  }
                    // WARNING: Subroutine does not return
  *(uint64_t *)((longlong)puVar18 + -8) = 0x1808357b3;
  FUN_1808fc050(auStack_88[0] ^ (ulonglong)auStack_88);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



