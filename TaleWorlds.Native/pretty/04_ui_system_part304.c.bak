#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part304.c - 3 个函数

// 函数: void FUN_180835800(float *param_1,uint param_2,int64_t param_3,uint *param_4,int64_t *param_5)
void FUN_180835800(float *param_1,uint param_2,int64_t param_3,uint *param_4,int64_t *param_5)

{
  int64_t lVar1;
  int8_t auVar2 [16];
  short sVar3;
  short sVar4;
  short sVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int8_t auVar8 [12];
  int8_t auVar9 [12];
  int8_t auVar10 [12];
  int8_t auVar11 [12];
  int iVar12;
  uint uVar13;
  uint64_t *puVar14;
  int iVar15;
  int8_t auVar16 [16];
  int8_t auVar19 [16];
  int8_t auVar22 [16];
  int8_t auVar25 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  float fVar34;
  int iVar36;
  int8_t auVar35 [16];
  int iVar38;
  int64_t lVar37;
  float fVar39;
  int iVar41;
  int8_t auVar40 [16];
  int iVar42;
  float fVar43;
  int8_t auStack_c8 [8];
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t auStack_98 [18];
  int8_t auVar17 [16];
  int8_t auVar20 [16];
  int8_t auVar23 [16];
  int8_t auVar26 [16];
  int8_t auVar18 [16];
  int8_t auVar21 [16];
  int8_t auVar24 [16];
  int8_t auVar27 [16];
  
  puVar14 = auStack_98;
  auStack_98[0] = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_98;
  uVar7 = (uint64_t)param_1 & 0xf;
  for (; (uVar7 != 0 && (param_2 != 0)); param_2 = param_2 - 1) {
    uVar13 = param_4[1] * 4;
    fVar43 = (float)(*param_4 >> 1) * 4.656613e-10;
    fVar28 = (float)(int)*(short *)(param_3 + (uint64_t)uVar13 * 2) * 3.0517578e-05;
    fVar30 = (float)(int)*(short *)(param_3 + (uint64_t)(uVar13 + 1) * 2) * 3.0517578e-05;
    sVar3 = *(short *)(param_3 + (uint64_t)(uVar13 + 6) * 2);
    sVar4 = *(short *)(param_3 + (uint64_t)(uVar13 + 7) * 2);
    sVar5 = *(short *)(param_3 + (uint64_t)(uVar13 + 4) * 2);
    fVar34 = (float)(int)*(short *)(param_3 + (uint64_t)(uVar13 + 2) * 2) * 3.0517578e-05;
    fVar39 = (float)(int)*(short *)(param_3 + (uint64_t)(uVar13 + 3) * 2) * 3.0517578e-05;
    param_1[1] = ((float)(int)*(short *)(param_3 + (uint64_t)(uVar13 + 5) * 2) * 3.0517578e-05 -
                 fVar30) * fVar43 + fVar30;
    param_1[2] = ((float)(int)sVar3 * 3.0517578e-05 - fVar34) * fVar43 + fVar34;
    *param_1 = ((float)(int)sVar5 * 3.0517578e-05 - fVar28) * fVar43 + fVar28;
    param_1[3] = ((float)(int)sVar4 * 3.0517578e-05 - fVar39) * fVar43 + fVar39;
    param_1 = param_1 + 4;
    *(int64_t *)param_4 = *(int64_t *)param_4 + *param_5;
    uVar7 = (uint64_t)param_1 & 0xf;
  }
  iVar15 = (int)param_2 >> 2;
  if (iVar15 != 0) {
    lVar37 = *param_5;
    lVar6 = *(int64_t *)param_4;
    lVar1 = lVar37 * 4;
    iVar36 = (int)lVar37;
    iVar12 = iVar36 * 4;
    uVar13 = (uint)lVar6;
    auVar35._8_8_ = lVar37 + lVar6;
    auVar35._0_8_ = lVar6;
    auVar40._0_8_ = lVar37 * 2 + lVar6;
    auVar40._8_8_ = lVar37 * 3 + lVar6;
    puVar14 = (uint64_t *)auStack_c8;
    uVar31 = iVar36 + uVar13;
    uVar32 = iVar36 * 2 + uVar13;
    uVar33 = iVar36 * 3 + uVar13;
    do {
      iVar41 = auVar40._4_4_;
      iVar42 = auVar40._12_4_;
      uStack_b8 = CONCAT44(iVar42,iVar41);
      lVar37 = auVar40._8_8_;
      auVar40._0_8_ = auVar40._0_8_ + lVar1;
      auVar40._8_8_ = lVar37 + lVar1;
      iVar36 = auVar35._4_4_;
      iVar38 = auVar35._12_4_;
      uStack_c0 = CONCAT44(iVar38,iVar36);
      lVar37 = auVar35._8_8_;
      auVar35._0_8_ = auVar35._0_8_ + lVar1;
      auVar35._8_8_ = lVar37 + lVar1;
      auVar2 = *(int8_t (*) [16])(param_3 + (uint64_t)(uint)(iVar36 << 2) * 2);
      fVar34 = (float)(uVar13 >> 1) * 4.656613e-10;
      fVar39 = (float)(uVar31 >> 1) * 4.656613e-10;
      fVar43 = (float)(uVar32 >> 1) * 4.656613e-10;
      fVar29 = (float)(uVar33 >> 1) * 4.656613e-10;
      auVar18._0_12_ = auVar2._0_12_;
      auVar18._12_2_ = auVar2._6_2_;
      auVar18._14_2_ = auVar2._6_2_;
      auVar17._12_4_ = auVar18._12_4_;
      auVar17._0_10_ = auVar2._0_10_;
      auVar17._10_2_ = auVar2._4_2_;
      auVar16._10_6_ = auVar17._10_6_;
      auVar16._0_8_ = auVar2._0_8_;
      auVar16._8_2_ = auVar2._4_2_;
      auVar8._4_8_ = auVar16._8_8_;
      auVar8._2_2_ = auVar2._2_2_;
      auVar8._0_2_ = auVar2._2_2_;
      fVar28 = (float)(auVar8._0_4_ >> 0x10);
      fVar30 = (float)(auVar16._8_4_ >> 0x10);
      *param_1 = (((float)(int)auVar2._8_2_ - (float)(int)auVar2._0_2_) * fVar34 +
                 (float)(int)auVar2._0_2_) * 3.0517578e-05;
      param_1[1] = (((float)(int)auVar2._10_2_ - fVar28) * fVar34 + fVar28) * 3.0517578e-05;
      param_1[2] = (((float)(int)auVar2._12_2_ - fVar30) * fVar34 + fVar30) * 3.0517578e-05;
      param_1[3] = (((float)(int)auVar2._14_2_ - (float)(auVar17._12_4_ >> 0x10)) * fVar34 +
                   (float)(auVar17._12_4_ >> 0x10)) * 3.0517578e-05;
      auVar2 = *(int8_t (*) [16])(param_3 + (uint64_t)(uint)(iVar38 << 2) * 2);
      auVar21._0_12_ = auVar2._0_12_;
      auVar21._12_2_ = auVar2._6_2_;
      auVar21._14_2_ = auVar2._6_2_;
      auVar20._12_4_ = auVar21._12_4_;
      auVar20._0_10_ = auVar2._0_10_;
      auVar20._10_2_ = auVar2._4_2_;
      auVar19._10_6_ = auVar20._10_6_;
      auVar19._0_8_ = auVar2._0_8_;
      auVar19._8_2_ = auVar2._4_2_;
      auVar9._4_8_ = auVar19._8_8_;
      auVar9._2_2_ = auVar2._2_2_;
      auVar9._0_2_ = auVar2._2_2_;
      fVar28 = (float)(auVar9._0_4_ >> 0x10);
      fVar30 = (float)(auVar19._8_4_ >> 0x10);
      param_1[4] = (((float)(int)auVar2._8_2_ - (float)(int)auVar2._0_2_) * fVar39 +
                   (float)(int)auVar2._0_2_) * 3.0517578e-05;
      param_1[5] = (((float)(int)auVar2._10_2_ - fVar28) * fVar39 + fVar28) * 3.0517578e-05;
      param_1[6] = (((float)(int)auVar2._12_2_ - fVar30) * fVar39 + fVar30) * 3.0517578e-05;
      param_1[7] = (((float)(int)auVar2._14_2_ - (float)(auVar20._12_4_ >> 0x10)) * fVar39 +
                   (float)(auVar20._12_4_ >> 0x10)) * 3.0517578e-05;
      auVar2 = *(int8_t (*) [16])(param_3 + (uint64_t)(uint)(iVar41 << 2) * 2);
      auVar24._0_12_ = auVar2._0_12_;
      auVar24._12_2_ = auVar2._6_2_;
      auVar24._14_2_ = auVar2._6_2_;
      auVar23._12_4_ = auVar24._12_4_;
      auVar23._0_10_ = auVar2._0_10_;
      auVar23._10_2_ = auVar2._4_2_;
      auVar22._10_6_ = auVar23._10_6_;
      auVar22._0_8_ = auVar2._0_8_;
      auVar22._8_2_ = auVar2._4_2_;
      auVar10._4_8_ = auVar22._8_8_;
      auVar10._2_2_ = auVar2._2_2_;
      auVar10._0_2_ = auVar2._2_2_;
      fVar28 = (float)(auVar10._0_4_ >> 0x10);
      fVar30 = (float)(auVar22._8_4_ >> 0x10);
      param_1[8] = (((float)(int)auVar2._8_2_ - (float)(int)auVar2._0_2_) * fVar43 +
                   (float)(int)auVar2._0_2_) * 3.0517578e-05;
      param_1[9] = (((float)(int)auVar2._10_2_ - fVar28) * fVar43 + fVar28) * 3.0517578e-05;
      param_1[10] = (((float)(int)auVar2._12_2_ - fVar30) * fVar43 + fVar30) * 3.0517578e-05;
      param_1[0xb] = (((float)(int)auVar2._14_2_ - (float)(auVar23._12_4_ >> 0x10)) * fVar43 +
                     (float)(auVar23._12_4_ >> 0x10)) * 3.0517578e-05;
      auVar2 = *(int8_t (*) [16])(param_3 + (uint64_t)(uint)(iVar42 << 2) * 2);
      auVar27._0_12_ = auVar2._0_12_;
      auVar27._12_2_ = auVar2._6_2_;
      auVar27._14_2_ = auVar2._6_2_;
      auVar26._12_4_ = auVar27._12_4_;
      auVar26._0_10_ = auVar2._0_10_;
      auVar26._10_2_ = auVar2._4_2_;
      auVar25._10_6_ = auVar26._10_6_;
      auVar25._0_8_ = auVar2._0_8_;
      auVar25._8_2_ = auVar2._4_2_;
      auVar11._4_8_ = auVar25._8_8_;
      auVar11._2_2_ = auVar2._2_2_;
      auVar11._0_2_ = auVar2._2_2_;
      fVar28 = (float)(auVar11._0_4_ >> 0x10);
      fVar30 = (float)(auVar25._8_4_ >> 0x10);
      param_1[0xc] = (((float)(int)auVar2._8_2_ - (float)(int)auVar2._0_2_) * fVar29 +
                     (float)(int)auVar2._0_2_) * 3.0517578e-05;
      param_1[0xd] = (((float)(int)auVar2._10_2_ - fVar28) * fVar29 + fVar28) * 3.0517578e-05;
      param_1[0xe] = (((float)(int)auVar2._12_2_ - fVar30) * fVar29 + fVar30) * 3.0517578e-05;
      param_1[0xf] = (((float)(int)auVar2._14_2_ - (float)(auVar26._12_4_ >> 0x10)) * fVar29 +
                     (float)(auVar26._12_4_ >> 0x10)) * 3.0517578e-05;
      param_1 = param_1 + 0x10;
      iVar15 = iVar15 + -1;
      uVar13 = uVar13 + iVar12;
      uVar31 = uVar31 + iVar12;
      uVar32 = uVar32 + iVar12;
      uVar33 = uVar33 + iVar12;
    } while (iVar15 != 0);
    *(int64_t *)param_4 = auVar35._0_8_;
  }
  param_2 = param_2 & 3;
  if (param_2 != 0) {
    param_1 = param_1 + 2;
    do {
      uVar13 = param_4[1] * 4;
      fVar43 = (float)(*param_4 >> 1) * 4.656613e-10;
      fVar28 = (float)(int)*(short *)(param_3 + (uint64_t)uVar13 * 2) * 3.0517578e-05;
      fVar30 = (float)(int)*(short *)(param_3 + (uint64_t)(uVar13 + 1) * 2) * 3.0517578e-05;
      sVar3 = *(short *)(param_3 + (uint64_t)(uVar13 + 6) * 2);
      sVar4 = *(short *)(param_3 + (uint64_t)(uVar13 + 7) * 2);
      sVar5 = *(short *)(param_3 + (uint64_t)(uVar13 + 4) * 2);
      fVar34 = (float)(int)*(short *)(param_3 + (uint64_t)(uVar13 + 2) * 2) * 3.0517578e-05;
      fVar39 = (float)(int)*(short *)(param_3 + (uint64_t)(uVar13 + 3) * 2) * 3.0517578e-05;
      param_1[-1] = ((float)(int)*(short *)(param_3 + (uint64_t)(uVar13 + 5) * 2) * 3.0517578e-05 -
                    fVar30) * fVar43 + fVar30;
      *param_1 = ((float)(int)sVar3 * 3.0517578e-05 - fVar34) * fVar43 + fVar34;
      param_1[-2] = ((float)(int)sVar5 * 3.0517578e-05 - fVar28) * fVar43 + fVar28;
      param_1[1] = ((float)(int)sVar4 * 3.0517578e-05 - fVar39) * fVar43 + fVar39;
      param_1 = param_1 + 4;
      *(int64_t *)param_4 = *(int64_t *)param_4 + *param_5;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
                    // WARNING: Subroutine does not return
  *(uint64_t *)((int64_t)puVar14 + -8) = 0x180835ce5;
  FUN_1808fc050(auStack_98[0] ^ (uint64_t)auStack_98);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180835d30(float *param_1,uint param_2,int64_t param_3,uint *param_4,int64_t *param_5)
void FUN_180835d30(float *param_1,uint param_2,int64_t param_3,uint *param_4,int64_t *param_5)

{
  int64_t lVar1;
  int8_t auVar2 [16];
  int8_t auVar3 [16];
  int8_t auVar4 [16];
  short sVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int8_t auVar8 [12];
  int8_t auVar9 [12];
  int8_t auVar10 [16];
  int8_t auVar11 [16];
  int8_t auVar12 [12];
  int8_t auVar13 [12];
  int iVar14;
  uint uVar15;
  uint64_t *puVar16;
  int iVar17;
  int8_t auVar18 [16];
  int8_t auVar20 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int8_t auVar26 [16];
  int8_t auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  int iVar33;
  int8_t auVar32 [16];
  int iVar35;
  int64_t lVar34;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  int iVar40;
  int8_t auVar39 [16];
  int iVar41;
  int8_t auStack_e8 [8];
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t auStack_b8 [22];
  int8_t auVar19 [16];
  int8_t auVar21 [16];
  
  puVar16 = auStack_b8;
  auStack_b8[0] = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_b8;
  uVar7 = (uint64_t)param_1 & 0xf;
  for (; (uVar7 != 0 && (param_2 != 0)); param_2 = param_2 - 1) {
    uVar15 = param_4[1] * 2;
    fVar25 = (float)(*param_4 >> 1) * 4.656613e-10;
    sVar5 = *(short *)(param_3 + (uint64_t)(uVar15 + 3) * 2);
    fVar22 = (float)(int)*(short *)(param_3 + (uint64_t)uVar15 * 2) * 3.0517578e-05;
    fVar23 = (float)(int)*(short *)(param_3 + (uint64_t)(uVar15 + 1) * 2) * 3.0517578e-05;
    *param_1 = ((float)(int)*(short *)(param_3 + (uint64_t)(uVar15 + 2) * 2) * 3.0517578e-05 -
               fVar22) * fVar25 + fVar22;
    param_1[1] = ((float)(int)sVar5 * 3.0517578e-05 - fVar23) * fVar25 + fVar23;
    param_1 = param_1 + 2;
    *(int64_t *)param_4 = *(int64_t *)param_4 + *param_5;
    uVar7 = (uint64_t)param_1 & 0xf;
  }
  iVar17 = (int)param_2 >> 2;
  if (iVar17 != 0) {
    lVar34 = *param_5;
    lVar6 = *(int64_t *)param_4;
    lVar1 = lVar34 * 4;
    iVar33 = (int)lVar34;
    iVar14 = iVar33 * 4;
    uVar15 = (uint)lVar6;
    auVar32._8_8_ = lVar34 + lVar6;
    auVar32._0_8_ = lVar6;
    auVar39._0_8_ = lVar34 * 2 + lVar6;
    auVar39._8_8_ = lVar34 * 3 + lVar6;
    puVar16 = (uint64_t *)auStack_e8;
    uVar36 = iVar33 + uVar15;
    uVar37 = iVar33 * 2 + uVar15;
    uVar38 = iVar33 * 3 + uVar15;
    do {
      iVar40 = auVar39._4_4_;
      iVar41 = auVar39._12_4_;
      uStack_d8 = CONCAT44(iVar41,iVar40);
      lVar34 = auVar39._8_8_;
      auVar39._0_8_ = auVar39._0_8_ + lVar1;
      auVar39._8_8_ = lVar34 + lVar1;
      iVar33 = auVar32._4_4_;
      iVar35 = auVar32._12_4_;
      uStack_e0 = CONCAT44(iVar35,iVar33);
      lVar34 = auVar32._8_8_;
      auVar32._0_8_ = auVar32._0_8_ + lVar1;
      auVar32._8_8_ = lVar34 + lVar1;
      auVar2 = *(int8_t (*) [16])(param_3 + (uint64_t)(uint)(iVar33 * 2) * 2);
      fVar28 = (float)(uVar15 >> 1) * 4.656613e-10;
      fVar29 = (float)(uVar36 >> 1) * 4.656613e-10;
      fVar30 = (float)(uVar37 >> 1) * 4.656613e-10;
      fVar31 = (float)(uVar38 >> 1) * 4.656613e-10;
      auVar3 = *(int8_t (*) [16])(param_3 + (uint64_t)(uint)(iVar35 * 2) * 2);
      auVar26._0_8_ = auVar2._0_8_;
      auVar26._8_4_ = auVar2._4_4_;
      auVar26._12_4_ = auVar3._4_4_;
      auVar10._4_8_ = auVar26._8_8_;
      auVar10._0_4_ = auVar3._0_4_;
      auVar10._12_4_ = 0;
      auVar26 = *(int8_t (*) [16])(param_3 + (uint64_t)(uint)(iVar40 * 2) * 2);
      auVar4 = *(int8_t (*) [16])(param_3 + (uint64_t)(uint)(iVar41 * 2) * 2);
      auVar27._0_8_ = auVar26._0_8_;
      auVar27._8_4_ = auVar26._4_4_;
      auVar27._12_4_ = auVar4._4_4_;
      auVar11._4_8_ = auVar27._8_8_;
      auVar11._0_4_ = auVar4._0_4_;
      auVar11._12_4_ = 0;
      auVar19._0_12_ = SUB1612(auVar10 << 0x20,0);
      auVar19._12_2_ = auVar3._2_2_;
      auVar19._14_2_ = auVar3._2_2_;
      auVar18._12_4_ = auVar19._12_4_;
      auVar18._0_10_ = SUB1610(auVar10 << 0x20,0);
      auVar18._10_2_ = auVar3._0_2_;
      auVar12._4_2_ = auVar3._0_2_;
      auVar12._0_4_ = auVar3._0_4_;
      auVar12._6_6_ = auVar18._10_6_;
      auVar8._4_8_ = auVar12._4_8_;
      auVar8._2_2_ = auVar2._2_2_;
      auVar8._0_2_ = auVar2._2_2_;
      auVar21._0_12_ = SUB1612(auVar11 << 0x20,0);
      auVar21._12_2_ = auVar4._2_2_;
      auVar21._14_2_ = auVar4._2_2_;
      auVar20._12_4_ = auVar21._12_4_;
      auVar20._0_10_ = SUB1610(auVar11 << 0x20,0);
      auVar20._10_2_ = auVar4._0_2_;
      auVar13._4_2_ = auVar4._0_2_;
      auVar13._0_4_ = auVar4._0_4_;
      auVar13._6_6_ = auVar20._10_6_;
      auVar9._4_8_ = auVar13._4_8_;
      auVar9._2_2_ = auVar26._2_2_;
      auVar9._0_2_ = auVar26._2_2_;
      fVar22 = (float)(auVar8._0_4_ >> 0x10);
      fVar23 = (float)(auVar12._4_4_ >> 0x10);
      fVar25 = (float)(auVar9._0_4_ >> 0x10);
      fVar24 = (float)(auVar13._4_4_ >> 0x10);
      *param_1 = (((float)(int)auVar2._4_2_ - (float)(int)auVar2._0_2_) * fVar28 +
                 (float)(int)auVar2._0_2_) * 3.0517578e-05;
      param_1[1] = (((float)(int)auVar2._6_2_ - fVar22) * fVar28 + fVar22) * 3.0517578e-05;
      param_1[2] = (((float)(int)auVar3._4_2_ - fVar23) * fVar29 + fVar23) * 3.0517578e-05;
      param_1[3] = (((float)(int)auVar3._6_2_ - (float)(auVar18._12_4_ >> 0x10)) * fVar29 +
                   (float)(auVar18._12_4_ >> 0x10)) * 3.0517578e-05;
      param_1[4] = (((float)(int)auVar26._4_2_ - (float)(int)auVar26._0_2_) * fVar30 +
                   (float)(int)auVar26._0_2_) * 3.0517578e-05;
      param_1[5] = (((float)(int)auVar26._6_2_ - fVar25) * fVar30 + fVar25) * 3.0517578e-05;
      param_1[6] = (((float)(int)auVar4._4_2_ - fVar24) * fVar31 + fVar24) * 3.0517578e-05;
      param_1[7] = (((float)(int)auVar4._6_2_ - (float)(auVar20._12_4_ >> 0x10)) * fVar31 +
                   (float)(auVar20._12_4_ >> 0x10)) * 3.0517578e-05;
      param_1 = param_1 + 8;
      iVar17 = iVar17 + -1;
      uVar15 = uVar15 + iVar14;
      uVar36 = uVar36 + iVar14;
      uVar37 = uVar37 + iVar14;
      uVar38 = uVar38 + iVar14;
    } while (iVar17 != 0);
    *(int64_t *)param_4 = auVar32._0_8_;
  }
  for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
    uVar15 = param_4[1] * 2;
    fVar25 = (float)(*param_4 >> 1) * 4.656613e-10;
    sVar5 = *(short *)(param_3 + (uint64_t)(uVar15 + 3) * 2);
    fVar22 = (float)(int)*(short *)(param_3 + (uint64_t)uVar15 * 2) * 3.0517578e-05;
    fVar23 = (float)(int)*(short *)(param_3 + (uint64_t)(uVar15 + 1) * 2) * 3.0517578e-05;
    *param_1 = ((float)(int)*(short *)(param_3 + (uint64_t)(uVar15 + 2) * 2) * 3.0517578e-05 -
               fVar22) * fVar25 + fVar22;
    param_1[1] = ((float)(int)sVar5 * 3.0517578e-05 - fVar23) * fVar25 + fVar23;
    param_1 = param_1 + 2;
    *(int64_t *)param_4 = *(int64_t *)param_4 + *param_5;
  }
                    // WARNING: Subroutine does not return
  *(uint64_t *)((int64_t)puVar16 + -8) = 0x1808360b4;
  FUN_1808fc050(auStack_b8[0] ^ (uint64_t)auStack_b8);
}



// WARNING: Removing unreachable block (ram,0x0001808364dc)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180836110(int8_t (*param_1) [32],uint param_2,int64_t param_3,uint *param_4,
void FUN_180836110(int8_t (*param_1) [32],uint param_2,int64_t param_3,uint *param_4,
                  int64_t *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int64_t lVar11;
  int8_t auVar12 [16];
  int8_t auVar13 [16];
  int8_t auVar14 [16];
  int8_t auVar15 [16];
  int8_t auVar16 [16];
  int64_t lVar17;
  float fVar18;
  int8_t auVar19 [16];
  int8_t auVar20 [16];
  int8_t auVar21 [16];
  int8_t auVar22 [16];
  int8_t auVar23 [32];
  uint uVar24;
  uint64_t uVar25;
  uint64_t uVar26;
  int8_t *puVar27;
  uint64_t uVar28;
  int32_t *puVar29;
  int iVar30;
  int8_t auVar31 [16];
  int8_t auVar32 [32];
  int8_t auVar33 [32];
  int8_t auVar34 [32];
  int8_t auVar35 [32];
  int8_t auVar36 [32];
  int8_t auVar37 [32];
  int8_t auVar38 [32];
  int8_t auVar39 [32];
  int8_t auVar40 [32];
  int8_t auVar41 [32];
  int8_t auVar42 [32];
  int8_t auVar43 [16];
  int8_t auStack_188 [8];
  int8_t auStack_180 [32];
  int8_t auStack_148 [8];
  int8_t auStack_140 [32];
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  int32_t uStack_104;
  int64_t lStack_100;
  int64_t lStack_f8;
  int64_t lStack_f0;
  int64_t lStack_e8;
  uint64_t uStack_e0;
  
  puVar27 = auStack_148;
  uStack_e0 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_148;
  uVar25 = (uint64_t)param_1 & 0x1f;
  while ((uVar25 != 0 && (param_2 != 0))) {
    param_2 = param_2 - 1;
    fVar18 = (float)(*param_4 >> 1) * 4.656613e-10;
    uVar24 = param_4[1] * 6;
    fVar1 = *(float *)(param_3 + (uint64_t)(uVar24 + 1) * 4);
    fVar2 = *(float *)(param_3 + (uint64_t)(uVar24 + 2) * 4);
    fVar3 = *(float *)(param_3 + (uint64_t)(uVar24 + 3) * 4);
    fVar4 = *(float *)(param_3 + (uint64_t)(uVar24 + 4) * 4);
    fVar5 = *(float *)(param_3 + (uint64_t)(uVar24 + 5) * 4);
    fVar6 = *(float *)(param_3 + (uint64_t)(uVar24 + 7) * 4);
    fVar7 = *(float *)(param_3 + (uint64_t)(uVar24 + 8) * 4);
    fVar8 = *(float *)(param_3 + (uint64_t)(uVar24 + 9) * 4);
    fVar9 = *(float *)(param_3 + (uint64_t)(uVar24 + 10) * 4);
    fVar10 = *(float *)(param_3 + (uint64_t)(uVar24 + 0xb) * 4);
    auVar31 = vfmadd213ss_fma(ZEXT416((uint)fVar18),
                              ZEXT416((uint)(*(float *)(param_3 + (uint64_t)(uVar24 + 6) * 4) -
                                            *(float *)(param_3 + (uint64_t)uVar24 * 4))),
                              ZEXT416(*(uint *)(param_3 + (uint64_t)uVar24 * 4)));
    *(int *)*param_1 = auVar31._0_4_;
    auVar31 = vfmadd213ss_fma(ZEXT416((uint)fVar18),ZEXT416((uint)(fVar6 - fVar1)),
                              ZEXT416((uint)fVar1));
    *(int *)(*param_1 + 4) = auVar31._0_4_;
    auVar43 = ZEXT416((uint)fVar18);
    auVar31 = vfmadd213ss_fma(auVar43,ZEXT416((uint)(fVar7 - fVar2)),ZEXT416((uint)fVar2));
    *(int *)(*param_1 + 8) = auVar31._0_4_;
    auVar31 = vfmadd213ss_fma(auVar43,ZEXT416((uint)(fVar8 - fVar3)),ZEXT416((uint)fVar3));
    *(int *)(*param_1 + 0xc) = auVar31._0_4_;
    auVar31 = vfmadd213ss_fma(auVar43,ZEXT416((uint)(fVar9 - fVar4)),ZEXT416((uint)fVar4));
    *(int *)(*param_1 + 0x10) = auVar31._0_4_;
    auVar31 = vfmadd213ss_fma(auVar43,ZEXT416((uint)(fVar10 - fVar5)),ZEXT416((uint)fVar5));
    *(int *)(*param_1 + 0x14) = auVar31._0_4_;
    param_1 = (int8_t (*) [32])(*param_1 + 0x18);
    *(int64_t *)param_4 = *(int64_t *)param_4 + *param_5;
    uVar25 = (uint64_t)param_1 & 0x1f;
  }
  iVar30 = (int)param_2 >> 2;
  if (iVar30 != 0) {
    lVar17 = *param_5;
    lVar11 = *(int64_t *)param_4;
    auVar33._8_8_ = lVar11;
    auVar33._0_8_ = lVar11;
    auVar33._16_8_ = lVar11;
    auVar33._24_8_ = lVar11;
    lStack_100 = lVar17 * 4;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = lVar17 * 2;
    auVar31 = vpinsrq_avx(auVar31,lVar17 * 3,1);
    auVar43 = vpinsrq_avx((int8_t  [16])0x0,lVar17,1);
    auVar32._16_16_ = auVar31;
    auVar32._0_16_ = auVar43;
    auStack_140 = vpaddq_avx2(auVar32,auVar33);
    puVar27 = auStack_188;
    auVar32 = ui_system_memory_config;
    auVar33 = ui_system_memory_config;
    auVar23 = ui_system_memory_config;
    do {
      auStack_180 = auStack_140;
      auVar33 = vpermd_avx2(auVar33,auStack_180);
      auVar32 = vpermd_avx2(auVar32,auStack_180);
      auVar23 = vpermd_avx2(auVar23,auStack_180);
      uVar25 = (uint64_t)(uint)(auStack_180._4_4_ * 6);
      auVar31 = *(int8_t (*) [16])(param_3 + 0x20 + uVar25 * 4);
      auVar43 = *(int8_t (*) [16])(param_3 + 0x10 + uVar25 * 4);
      auVar32 = vpsrld_avx2(auVar32,1);
      auVar32 = vcvtdq2ps_avx(auVar32);
      auVar12 = *(int8_t (*) [16])(param_3 + (uint64_t)(uint)(auStack_180._12_4_ * 6) * 4);
      auVar33 = vpsrld_avx2(auVar33,1);
      auVar33 = vcvtdq2ps_avx(auVar33);
      uVar28 = (uint64_t)(uint)(auStack_180._12_4_ * 6);
      uVar26 = (uint64_t)(uint)(auStack_180._20_4_ * 6);
      auVar13 = *(int8_t (*) [16])(param_3 + 0x10 + uVar26 * 4);
      auVar14 = *(int8_t (*) [16])(param_3 + 0x20 + uVar26 * 4);
      auVar34 = vpsrld_avx2(auVar23,1);
      auVar19 = vshufps_avx(auVar31,*(int8_t (*) [16])(param_3 + 0x10 + uVar28 * 4),0xee);
      auVar23 = vcvtdq2ps_avx(auVar34);
      fStack_120 = auVar23._0_4_ * 4.656613e-10;
      fStack_11c = auVar23._4_4_ * 4.656613e-10;
      fStack_118 = auVar23._8_4_ * 4.656613e-10;
      fStack_114 = auVar23._12_4_ * 4.656613e-10;
      fStack_110 = auVar23._16_4_ * 4.656613e-10;
      fStack_10c = auVar23._20_4_ * 4.656613e-10;
      uStack_104 = auVar34._28_4_;
      fStack_108 = auVar23._24_4_ * 4.656613e-10;
      auVar15 = *(int8_t (*) [16])(param_3 + uVar25 * 4);
      uVar25 = (uint64_t)(uint)(auStack_180._28_4_ * 6);
      auVar20 = vshufps_avx(auVar43,auVar12,0x44);
      auVar40._16_16_ = auVar20;
      auVar40._0_16_ = auVar15;
      auVar21 = vshufps_avx(auVar12,*(int8_t (*) [16])(param_3 + 0x10 + uVar28 * 4),0x4e);
      auVar12 = *(int8_t (*) [16])(param_3 + uVar26 * 4);
      auVar41._16_16_ = auVar12;
      auVar41._0_16_ = auVar21;
      auVar16 = *(int8_t (*) [16])(param_3 + uVar25 * 4);
      auVar22 = vshufps_avx(auVar16,*(int8_t (*) [16])(param_3 + 0x10 + uVar25 * 4),0x4e);
      auVar16 = vshufps_avx(auVar13,auVar16,0x44);
      auVar42._16_16_ = auVar22;
      auVar42._0_16_ = auVar16;
      auVar31 = vshufps_avx(auVar43,auVar31,0x4e);
      auVar38._16_16_ = auVar19;
      auVar38._0_16_ = auVar31;
      auVar23 = vsubps_avx(auVar38,auVar40);
      auVar31 = vshufps_avx(auVar13,auVar14,0x4e);
      auVar36._16_16_ = auVar31;
      auVar36._0_16_ = *(int8_t (*) [16])(param_3 + 0x20 + uVar28 * 4);
      auVar31 = vshufps_avx(auVar14,*(int8_t (*) [16])(param_3 + 0x10 + uVar25 * 4),0xee);
      auVar34._16_16_ = *(int8_t (*) [16])(param_3 + 0x20 + uVar25 * 4);
      auVar34._0_16_ = auVar31;
      auVar39._0_4_ = auVar23._0_4_ * auVar32._0_4_ * 4.656613e-10 + auVar15._0_4_;
      auVar39._4_4_ = auVar23._4_4_ * auVar32._4_4_ * 4.656613e-10 + auVar15._4_4_;
      auVar39._8_4_ = auVar23._8_4_ * auVar32._8_4_ * 4.656613e-10 + auVar15._8_4_;
      auVar39._12_4_ = auVar23._12_4_ * auVar32._12_4_ * 4.656613e-10 + auVar15._12_4_;
      auVar39._16_4_ = auVar23._16_4_ * auVar32._16_4_ * 4.656613e-10 + auVar20._0_4_;
      auVar39._20_4_ = auVar23._20_4_ * auVar32._20_4_ * 4.656613e-10 + auVar20._4_4_;
      auVar39._24_4_ = auVar23._24_4_ * auVar32._24_4_ * 4.656613e-10 + auVar20._8_4_;
      auVar39._28_4_ = auVar20._12_4_ + 0.0;
      auVar32 = vmovntps_avx(auVar39);
      *param_1 = auVar32;
      auVar32 = ui_system_memory_config;
      auVar23._8_8_ = lStack_100;
      auVar23._0_8_ = lStack_100;
      auVar23._16_8_ = lStack_100;
      auVar23._24_8_ = lStack_100;
      auStack_140 = vpaddq_avx2(auStack_180,auVar23);
      auVar23 = vsubps_avx(auVar36,auVar41);
      auVar37._0_4_ = auVar23._0_4_ * auVar33._0_4_ * 4.656613e-10 + auVar21._0_4_;
      auVar37._4_4_ = auVar23._4_4_ * auVar33._4_4_ * 4.656613e-10 + auVar21._4_4_;
      auVar37._8_4_ = auVar23._8_4_ * auVar33._8_4_ * 4.656613e-10 + auVar21._8_4_;
      auVar37._12_4_ = auVar23._12_4_ * auVar33._12_4_ * 4.656613e-10 + auVar21._12_4_;
      auVar37._16_4_ = auVar23._16_4_ * auVar33._16_4_ * 4.656613e-10 + auVar12._0_4_;
      auVar37._20_4_ = auVar23._20_4_ * auVar33._20_4_ * 4.656613e-10 + auVar12._4_4_;
      auVar37._24_4_ = auVar23._24_4_ * auVar33._24_4_ * 4.656613e-10 + auVar12._8_4_;
      auVar37._28_4_ = auVar12._12_4_ + 0.0;
      auVar34 = vsubps_avx(auVar34,auVar42);
      auVar33 = vmovntps_avx(auVar37);
      param_1[1] = auVar33;
      auVar23 = ui_system_memory_config;
      auVar33 = ui_system_memory_config;
      auVar35._0_4_ = auVar34._0_4_ * fStack_120 + auVar16._0_4_;
      auVar35._4_4_ = auVar34._4_4_ * fStack_11c + auVar16._4_4_;
      auVar35._8_4_ = auVar34._8_4_ * fStack_118 + auVar16._8_4_;
      auVar35._12_4_ = auVar34._12_4_ * fStack_114 + auVar16._12_4_;
      auVar35._16_4_ = auVar34._16_4_ * fStack_110 + auVar22._0_4_;
      auVar35._20_4_ = auVar34._20_4_ * fStack_10c + auVar22._4_4_;
      auVar35._24_4_ = auVar34._24_4_ * fStack_108 + auVar22._8_4_;
      auVar35._28_4_ = auVar22._12_4_ + 0.0;
      auVar34 = vmovntps_avx(auVar35);
      param_1[2] = auVar34;
      param_1 = param_1 + 3;
      iVar30 = iVar30 + -1;
    } while (iVar30 != 0);
    *(int64_t *)param_4 = auStack_140._0_8_;
    lStack_f8 = lStack_100;
    lStack_f0 = lStack_100;
    lStack_e8 = lStack_100;
  }
  param_2 = param_2 & 3;
  if (param_2 != 0) {
    puVar29 = (int32_t *)(*param_1 + 8);
    do {
      fVar18 = (float)(*param_4 >> 1) * 4.656613e-10;
      uVar24 = param_4[1] * 6;
      fVar1 = *(float *)(param_3 + (uint64_t)(uVar24 + 1) * 4);
      fVar2 = *(float *)(param_3 + (uint64_t)(uVar24 + 2) * 4);
      fVar3 = *(float *)(param_3 + (uint64_t)(uVar24 + 3) * 4);
      fVar4 = *(float *)(param_3 + (uint64_t)(uVar24 + 4) * 4);
      fVar5 = *(float *)(param_3 + (uint64_t)(uVar24 + 5) * 4);
      fVar6 = *(float *)(param_3 + (uint64_t)(uVar24 + 7) * 4);
      fVar7 = *(float *)(param_3 + (uint64_t)(uVar24 + 8) * 4);
      fVar8 = *(float *)(param_3 + (uint64_t)(uVar24 + 9) * 4);
      fVar9 = *(float *)(param_3 + (uint64_t)(uVar24 + 10) * 4);
      fVar10 = *(float *)(param_3 + (uint64_t)(uVar24 + 0xb) * 4);
      auVar31 = vfmadd213ss_fma(ZEXT416((uint)fVar18),
                                ZEXT416((uint)(*(float *)(param_3 + (uint64_t)(uVar24 + 6) * 4) -
                                              *(float *)(param_3 + (uint64_t)uVar24 * 4))),
                                ZEXT416(*(uint *)(param_3 + (uint64_t)uVar24 * 4)));
      *(int *)*(int8_t (*) [32])(puVar29 + -2) = auVar31._0_4_;
      auVar31 = vfmadd213ss_fma(ZEXT416((uint)fVar18),ZEXT416((uint)(fVar6 - fVar1)),
                                ZEXT416((uint)fVar1));
      puVar29[-1] = auVar31._0_4_;
      auVar43 = ZEXT416((uint)fVar18);
      auVar31 = vfmadd213ss_fma(auVar43,ZEXT416((uint)(fVar7 - fVar2)),ZEXT416((uint)fVar2));
      *puVar29 = auVar31._0_4_;
      auVar31 = vfmadd213ss_fma(auVar43,ZEXT416((uint)(fVar8 - fVar3)),ZEXT416((uint)fVar3));
      puVar29[1] = auVar31._0_4_;
      auVar31 = vfmadd213ss_fma(auVar43,ZEXT416((uint)(fVar9 - fVar4)),ZEXT416((uint)fVar4));
      puVar29[2] = auVar31._0_4_;
      auVar31 = vfmadd213ss_fma(auVar43,ZEXT416((uint)(fVar10 - fVar5)),ZEXT416((uint)fVar5));
      puVar29[3] = auVar31._0_4_;
      *(int64_t *)param_4 = *(int64_t *)param_4 + *param_5;
      param_2 = param_2 - 1;
      puVar29 = puVar29 + 6;
    } while (param_2 != 0);
  }
                    // WARNING: Subroutine does not return
  *(uint64_t *)(puVar27 + -8) = 0x180836613;
  FUN_1808fc050(uStack_e0 ^ (uint64_t)auStack_148);
}



// WARNING: Removing unreachable block (ram,0x0001808368f5)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



