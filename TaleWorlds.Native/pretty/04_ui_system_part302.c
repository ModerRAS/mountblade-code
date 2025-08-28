#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part302.c - 1 个函数

// 函数: void FUN_180834880(float *param_1,uint param_2,int64_t param_3,uint *param_4,int64_t *param_5)
void FUN_180834880(float *param_1,uint param_2,int64_t param_3,uint *param_4,int64_t *param_5)

{
  int64_t lVar1;
  int8_t auVar2 [16];
  int8_t auVar3 [16];
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  int64_t lVar10;
  int iVar11;
  int8_t auVar12 [12];
  int8_t auVar13 [12];
  int8_t auVar14 [12];
  int8_t auVar15 [12];
  int8_t auVar16 [12];
  int8_t auVar17 [12];
  int8_t auVar18 [12];
  int8_t auVar19 [12];
  uint64_t uVar20;
  int *piVar21;
  int iVar22;
  int8_t auVar23 [16];
  int8_t auVar26 [16];
  int8_t auVar29 [16];
  int8_t auVar32 [16];
  int8_t auVar35 [16];
  int8_t auVar38 [16];
  float fVar41;
  int8_t auVar42 [16];
  int8_t auVar45 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  int8_t auVar58 [16];
  int64_t lVar59;
  float fVar60;
  int8_t auVar61 [16];
  int8_t auStack_f8 [24];
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  uint64_t uStack_b8;
  int8_t auVar24 [16];
  int8_t auVar27 [16];
  int8_t auVar30 [16];
  int8_t auVar33 [16];
  int8_t auVar25 [16];
  int8_t auVar28 [16];
  int8_t auVar31 [16];
  int8_t auVar34 [16];
  int8_t auVar36 [16];
  int8_t auVar39 [16];
  int8_t auVar37 [16];
  int8_t auVar40 [16];
  int8_t auVar43 [16];
  int8_t auVar46 [16];
  int8_t auVar44 [16];
  int8_t auVar47 [16];
  
  piVar21 = &iStack_c8;
  uStack_b8 = GET_SECURITY_COOKIE() ^ (uint64_t)&iStack_c8;
  uVar20 = (uint64_t)param_1 & 0xf;
  for (; (uVar20 != 0 && (param_2 != 0)); param_2 = param_2 - 1) {
    uVar54 = param_4[1] * 6;
    fVar60 = (float)(*param_4 >> 1) * 4.656613e-10;
    fVar41 = (float)(int)*(short *)(param_3 + (uint64_t)uVar54 * 2) * 3.0517578e-05;
    fVar48 = (float)(int)*(short *)(param_3 + (uint64_t)(uVar54 + 1) * 2) * 3.0517578e-05;
    sVar4 = *(short *)(param_3 + (uint64_t)(uVar54 + 5) * 2);
    fVar49 = (float)(int)*(short *)(param_3 + (uint64_t)(uVar54 + 2) * 2) * 3.0517578e-05;
    fVar50 = (float)(int)*(short *)(param_3 + (uint64_t)(uVar54 + 3) * 2) * 3.0517578e-05;
    sVar5 = *(short *)(param_3 + (uint64_t)(uVar54 + 8) * 2);
    sVar6 = *(short *)(param_3 + (uint64_t)(uVar54 + 9) * 2);
    sVar7 = *(short *)(param_3 + (uint64_t)(uVar54 + 10) * 2);
    sVar8 = *(short *)(param_3 + (uint64_t)(uVar54 + 0xb) * 2);
    fVar53 = (float)(int)*(short *)(param_3 + (uint64_t)(uVar54 + 4) * 2) * 3.0517578e-05;
    sVar9 = *(short *)(param_3 + (uint64_t)(uVar54 + 6) * 2);
    param_1[1] = ((float)(int)*(short *)(param_3 + (uint64_t)(uVar54 + 7) * 2) * 3.0517578e-05 -
                 fVar48) * fVar60 + fVar48;
    fVar48 = (float)(int)sVar4 * 3.0517578e-05;
    param_1[2] = ((float)(int)sVar5 * 3.0517578e-05 - fVar49) * fVar60 + fVar49;
    *param_1 = ((float)(int)sVar9 * 3.0517578e-05 - fVar41) * fVar60 + fVar41;
    param_1[3] = ((float)(int)sVar6 * 3.0517578e-05 - fVar50) * fVar60 + fVar50;
    param_1[4] = ((float)(int)sVar7 * 3.0517578e-05 - fVar53) * fVar60 + fVar53;
    param_1[5] = ((float)(int)sVar8 * 3.0517578e-05 - fVar48) * fVar60 + fVar48;
    param_1 = param_1 + 6;
    *(int64_t *)param_4 = *(int64_t *)param_4 + *param_5;
    uVar20 = (uint64_t)param_1 & 0xf;
  }
  iVar22 = (int)param_2 >> 2;
  if (iVar22 != 0) {
    lVar59 = *param_5;
    lVar10 = *(int64_t *)param_4;
    lVar1 = lVar59 * 4;
    iVar11 = (int)lVar59;
    iStack_c8 = iVar11 * 4;
    uVar54 = (uint)lVar10;
    uVar55 = iVar11 + uVar54;
    uVar56 = iVar11 * 2 + uVar54;
    uVar57 = iVar11 * 3 + uVar54;
    auVar58._8_8_ = lVar59 + lVar10;
    auVar58._0_8_ = lVar10;
    auVar61._0_8_ = lVar59 * 2 + lVar10;
    auVar61._8_8_ = lVar59 * 3 + lVar10;
    piVar21 = (int *)auStack_f8;
    do {
      uStack_d8 = CONCAT44(auVar61._12_4_,auVar61._4_4_);
      uStack_e0 = CONCAT44(auVar58._12_4_,auVar58._4_4_);
      uVar20 = (uint64_t)(uint)(auVar58._4_4_ * 6);
      fVar53 = (float)(uVar54 >> 1) * 4.656613e-10;
      fVar60 = (float)(uVar55 >> 1) * 4.656613e-10;
      fVar51 = (float)(uVar56 >> 1) * 4.656613e-10;
      fVar52 = (float)(uVar57 >> 1) * 4.656613e-10;
      auVar2 = *(int8_t (*) [16])(param_3 + uVar20 * 2);
      auVar3 = *(int8_t (*) [16])(param_3 + 0x10 + uVar20 * 2);
      uVar20 = (uint64_t)(uint)(auVar58._12_4_ * 6);
      auVar25._0_12_ = auVar2._0_12_;
      auVar25._12_2_ = auVar2._6_2_;
      auVar25._14_2_ = auVar2._6_2_;
      auVar24._12_4_ = auVar25._12_4_;
      auVar24._0_10_ = auVar2._0_10_;
      auVar24._10_2_ = auVar2._4_2_;
      auVar23._10_6_ = auVar24._10_6_;
      auVar23._0_8_ = auVar2._0_8_;
      auVar23._8_2_ = auVar2._4_2_;
      auVar12._4_8_ = auVar23._8_8_;
      auVar12._2_2_ = auVar2._2_2_;
      auVar12._0_2_ = auVar2._2_2_;
      fVar41 = (float)(auVar12._0_4_ >> 0x10);
      fVar48 = (float)(auVar23._8_4_ >> 0x10);
      auVar23 = *(int8_t (*) [16])(param_3 + 0x10 + uVar20 * 2);
      auVar25 = *(int8_t (*) [16])(param_3 + uVar20 * 2);
      auVar37._0_12_ = auVar3._0_12_;
      auVar37._12_2_ = auVar3._6_2_;
      auVar37._14_2_ = auVar3._6_2_;
      auVar36._12_4_ = auVar37._12_4_;
      auVar36._0_10_ = auVar3._0_10_;
      auVar36._10_2_ = auVar3._4_2_;
      auVar35._10_6_ = auVar36._10_6_;
      auVar35._0_8_ = auVar3._0_8_;
      auVar35._8_2_ = auVar3._4_2_;
      auVar13._4_8_ = auVar35._8_8_;
      auVar13._2_2_ = auVar3._2_2_;
      auVar13._0_2_ = auVar3._2_2_;
      auVar28._0_12_ = auVar25._0_12_;
      auVar28._12_2_ = auVar25._6_2_;
      auVar28._14_2_ = auVar25._6_2_;
      auVar27._12_4_ = auVar28._12_4_;
      auVar27._0_10_ = auVar25._0_10_;
      auVar27._10_2_ = auVar25._4_2_;
      auVar26._10_6_ = auVar27._10_6_;
      auVar26._0_8_ = auVar25._0_8_;
      auVar26._8_2_ = auVar25._4_2_;
      auVar14._4_8_ = auVar26._8_8_;
      auVar14._2_2_ = auVar25._2_2_;
      auVar14._0_2_ = auVar25._2_2_;
      fVar49 = (float)(auVar14._0_4_ >> 0x10);
      fVar50 = (float)(auVar26._8_4_ >> 0x10);
      auVar44._0_12_ = auVar23._0_12_;
      auVar44._12_2_ = auVar23._6_2_;
      auVar44._14_2_ = auVar23._6_2_;
      auVar43._12_4_ = auVar44._12_4_;
      auVar43._0_10_ = auVar23._0_10_;
      auVar43._10_2_ = auVar23._4_2_;
      auVar42._10_6_ = auVar43._10_6_;
      auVar42._0_8_ = auVar23._0_8_;
      auVar42._8_2_ = auVar23._4_2_;
      auVar15._4_8_ = auVar42._8_8_;
      auVar15._2_2_ = auVar23._2_2_;
      auVar15._0_2_ = auVar23._2_2_;
      *param_1 = (((float)(int)auVar2._12_2_ - (float)(int)auVar2._0_2_) * fVar53 +
                 (float)(int)auVar2._0_2_) * 3.0517578e-05;
      param_1[1] = (((float)(int)auVar2._14_2_ - fVar41) * fVar53 + fVar41) * 3.0517578e-05;
      param_1[2] = (((float)(int)auVar3._0_2_ - fVar48) * fVar53 + fVar48) * 3.0517578e-05;
      param_1[3] = (((float)(auVar13._0_4_ >> 0x10) - (float)(auVar24._12_4_ >> 0x10)) * fVar53 +
                   (float)(auVar24._12_4_ >> 0x10)) * 3.0517578e-05;
      param_1[4] = (((float)(auVar35._8_4_ >> 0x10) - (float)(int)auVar2._8_2_) * fVar53 +
                   (float)(int)auVar2._8_2_) * 3.0517578e-05;
      param_1[5] = (((float)(auVar36._12_4_ >> 0x10) - (float)(int)auVar2._10_2_) * fVar53 +
                   (float)(int)auVar2._10_2_) * 3.0517578e-05;
      param_1[6] = (((float)(int)auVar25._12_2_ - (float)(int)auVar25._0_2_) * fVar60 +
                   (float)(int)auVar25._0_2_) * 3.0517578e-05;
      param_1[7] = (((float)(int)auVar25._14_2_ - fVar49) * fVar60 + fVar49) * 3.0517578e-05;
      param_1[8] = (((float)(int)auVar23._0_2_ - fVar50) * fVar60 + fVar50) * 3.0517578e-05;
      param_1[9] = (((float)(auVar15._0_4_ >> 0x10) - (float)(auVar27._12_4_ >> 0x10)) * fVar60 +
                   (float)(auVar27._12_4_ >> 0x10)) * 3.0517578e-05;
      param_1[10] = (((float)(auVar42._8_4_ >> 0x10) - (float)(int)auVar25._8_2_) * fVar60 +
                    (float)(int)auVar25._8_2_) * 3.0517578e-05;
      param_1[0xb] = (((float)(auVar43._12_4_ >> 0x10) - (float)(int)auVar25._10_2_) * fVar60 +
                     (float)(int)auVar25._10_2_) * 3.0517578e-05;
      uVar20 = (uint64_t)(uint)(auVar61._4_4_ * 6);
      auVar2 = *(int8_t (*) [16])(param_3 + uVar20 * 2);
      auVar3 = *(int8_t (*) [16])(param_3 + 0x10 + uVar20 * 2);
      auVar31._0_12_ = auVar2._0_12_;
      auVar31._12_2_ = auVar2._6_2_;
      auVar31._14_2_ = auVar2._6_2_;
      auVar30._12_4_ = auVar31._12_4_;
      auVar30._0_10_ = auVar2._0_10_;
      auVar30._10_2_ = auVar2._4_2_;
      auVar29._10_6_ = auVar30._10_6_;
      auVar29._0_8_ = auVar2._0_8_;
      auVar29._8_2_ = auVar2._4_2_;
      auVar16._4_8_ = auVar29._8_8_;
      auVar16._2_2_ = auVar2._2_2_;
      auVar16._0_2_ = auVar2._2_2_;
      auVar40._0_12_ = auVar3._0_12_;
      auVar40._12_2_ = auVar3._6_2_;
      auVar40._14_2_ = auVar3._6_2_;
      auVar39._12_4_ = auVar40._12_4_;
      auVar39._0_10_ = auVar3._0_10_;
      auVar39._10_2_ = auVar3._4_2_;
      auVar38._10_6_ = auVar39._10_6_;
      auVar38._0_8_ = auVar3._0_8_;
      auVar38._8_2_ = auVar3._4_2_;
      auVar17._4_8_ = auVar38._8_8_;
      auVar17._2_2_ = auVar3._2_2_;
      auVar17._0_2_ = auVar3._2_2_;
      fVar41 = (float)(auVar16._0_4_ >> 0x10);
      fVar48 = (float)(auVar29._8_4_ >> 0x10);
      uVar20 = (uint64_t)(uint)(auVar61._12_4_ * 6);
      lVar59 = auVar58._8_8_;
      auVar58._0_8_ = auVar58._0_8_ + lVar1;
      auVar58._8_8_ = lVar59 + lVar1;
      lVar59 = auVar61._8_8_;
      auVar61._0_8_ = auVar61._0_8_ + lVar1;
      auVar61._8_8_ = lVar59 + lVar1;
      uVar54 = uVar54 + iStack_c8;
      uVar55 = uVar55 + iStack_c8;
      uVar56 = uVar56 + iStack_c8;
      uVar57 = uVar57 + iStack_c8;
      auVar23 = *(int8_t (*) [16])(param_3 + uVar20 * 2);
      auVar25 = *(int8_t (*) [16])(param_3 + 0x10 + uVar20 * 2);
      auVar34._0_12_ = auVar23._0_12_;
      auVar34._12_2_ = auVar23._6_2_;
      auVar34._14_2_ = auVar23._6_2_;
      auVar33._12_4_ = auVar34._12_4_;
      auVar33._0_10_ = auVar23._0_10_;
      auVar33._10_2_ = auVar23._4_2_;
      auVar32._10_6_ = auVar33._10_6_;
      auVar32._0_8_ = auVar23._0_8_;
      auVar32._8_2_ = auVar23._4_2_;
      auVar18._4_8_ = auVar32._8_8_;
      auVar18._2_2_ = auVar23._2_2_;
      auVar18._0_2_ = auVar23._2_2_;
      fVar49 = (float)(auVar18._0_4_ >> 0x10);
      fVar50 = (float)(auVar32._8_4_ >> 0x10);
      auVar47._0_12_ = auVar25._0_12_;
      auVar47._12_2_ = auVar25._6_2_;
      auVar47._14_2_ = auVar25._6_2_;
      auVar46._12_4_ = auVar47._12_4_;
      auVar46._0_10_ = auVar25._0_10_;
      auVar46._10_2_ = auVar25._4_2_;
      auVar45._10_6_ = auVar46._10_6_;
      auVar45._0_8_ = auVar25._0_8_;
      auVar45._8_2_ = auVar25._4_2_;
      auVar19._4_8_ = auVar45._8_8_;
      auVar19._2_2_ = auVar25._2_2_;
      auVar19._0_2_ = auVar25._2_2_;
      param_1[0xc] = (((float)(int)auVar2._12_2_ - (float)(int)auVar2._0_2_) * fVar51 +
                     (float)(int)auVar2._0_2_) * 3.0517578e-05;
      param_1[0xd] = (((float)(int)auVar2._14_2_ - fVar41) * fVar51 + fVar41) * 3.0517578e-05;
      param_1[0xe] = (((float)(int)auVar3._0_2_ - fVar48) * fVar51 + fVar48) * 3.0517578e-05;
      param_1[0xf] = (((float)(auVar17._0_4_ >> 0x10) - (float)(auVar30._12_4_ >> 0x10)) * fVar51 +
                     (float)(auVar30._12_4_ >> 0x10)) * 3.0517578e-05;
      param_1[0x10] =
           (((float)(auVar38._8_4_ >> 0x10) - (float)(int)auVar2._8_2_) * fVar51 +
           (float)(int)auVar2._8_2_) * 3.0517578e-05;
      param_1[0x11] =
           (((float)(auVar39._12_4_ >> 0x10) - (float)(int)auVar2._10_2_) * fVar51 +
           (float)(int)auVar2._10_2_) * 3.0517578e-05;
      param_1[0x12] =
           (((float)(int)auVar23._12_2_ - (float)(int)auVar23._0_2_) * fVar52 +
           (float)(int)auVar23._0_2_) * 3.0517578e-05;
      param_1[0x13] = (((float)(int)auVar23._14_2_ - fVar49) * fVar52 + fVar49) * 3.0517578e-05;
      param_1[0x14] = (((float)(int)auVar25._0_2_ - fVar50) * fVar52 + fVar50) * 3.0517578e-05;
      param_1[0x15] =
           (((float)(auVar19._0_4_ >> 0x10) - (float)(auVar33._12_4_ >> 0x10)) * fVar52 +
           (float)(auVar33._12_4_ >> 0x10)) * 3.0517578e-05;
      param_1[0x16] =
           (((float)(auVar45._8_4_ >> 0x10) - (float)(int)auVar23._8_2_) * fVar52 +
           (float)(int)auVar23._8_2_) * 3.0517578e-05;
      param_1[0x17] =
           (((float)(auVar46._12_4_ >> 0x10) - (float)(int)auVar23._10_2_) * fVar52 +
           (float)(int)auVar23._10_2_) * 3.0517578e-05;
      param_1 = param_1 + 0x18;
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
    *(int64_t *)param_4 = auVar58._0_8_;
    iStack_c4 = iStack_c8;
    iStack_c0 = iStack_c8;
    iStack_bc = iStack_c8;
  }
  param_2 = param_2 & 3;
  if (param_2 != 0) {
    param_1 = param_1 + 2;
    do {
      uVar54 = param_4[1] * 6;
      fVar60 = (float)(*param_4 >> 1) * 4.656613e-10;
      fVar41 = (float)(int)*(short *)(param_3 + (uint64_t)uVar54 * 2) * 3.0517578e-05;
      fVar48 = (float)(int)*(short *)(param_3 + (uint64_t)(uVar54 + 1) * 2) * 3.0517578e-05;
      sVar4 = *(short *)(param_3 + (uint64_t)(uVar54 + 5) * 2);
      fVar49 = (float)(int)*(short *)(param_3 + (uint64_t)(uVar54 + 2) * 2) * 3.0517578e-05;
      fVar50 = (float)(int)*(short *)(param_3 + (uint64_t)(uVar54 + 3) * 2) * 3.0517578e-05;
      sVar5 = *(short *)(param_3 + (uint64_t)(uVar54 + 8) * 2);
      sVar6 = *(short *)(param_3 + (uint64_t)(uVar54 + 9) * 2);
      sVar7 = *(short *)(param_3 + (uint64_t)(uVar54 + 10) * 2);
      sVar8 = *(short *)(param_3 + (uint64_t)(uVar54 + 0xb) * 2);
      fVar53 = (float)(int)*(short *)(param_3 + (uint64_t)(uVar54 + 4) * 2) * 3.0517578e-05;
      sVar9 = *(short *)(param_3 + (uint64_t)(uVar54 + 6) * 2);
      param_1[-1] = ((float)(int)*(short *)(param_3 + (uint64_t)(uVar54 + 7) * 2) * 3.0517578e-05 -
                    fVar48) * fVar60 + fVar48;
      fVar48 = (float)(int)sVar4 * 3.0517578e-05;
      *param_1 = ((float)(int)sVar5 * 3.0517578e-05 - fVar49) * fVar60 + fVar49;
      param_1[-2] = ((float)(int)sVar9 * 3.0517578e-05 - fVar41) * fVar60 + fVar41;
      param_1[1] = ((float)(int)sVar6 * 3.0517578e-05 - fVar50) * fVar60 + fVar50;
      param_1[2] = ((float)(int)sVar7 * 3.0517578e-05 - fVar53) * fVar60 + fVar53;
      param_1[3] = ((float)(int)sVar8 * 3.0517578e-05 - fVar48) * fVar60 + fVar48;
      param_1 = param_1 + 6;
      *(int64_t *)param_4 = *(int64_t *)param_4 + *param_5;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
                    // WARNING: Subroutine does not return
  *(uint64_t *)((int64_t)piVar21 + -8) = 0x180834f5a;
  SystemSecurityChecker(uStack_b8 ^ (uint64_t)&iStack_c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



