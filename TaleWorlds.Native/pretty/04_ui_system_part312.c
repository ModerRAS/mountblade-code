#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part312.c - 4 个函数

// 函数: void FUN_18083a510(float *param_1)
void FUN_18083a510(float *param_1)

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
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar9 = *param_1 - param_1[0x10];
  fVar10 = param_1[1] - param_1[0x11];
  fVar11 = param_1[2] - param_1[0x12];
  fVar12 = param_1[3] - param_1[0x13];
  fVar1 = param_1[6];
  param_1[0x10] = param_1[0x10] + *param_1;
  param_1[0x11] = param_1[0x11] + param_1[1];
  param_1[0x12] = param_1[0x12] + param_1[2];
  param_1[0x13] = param_1[0x13] + param_1[3];
  fVar3 = param_1[0x16];
  fVar4 = param_1[0x17];
  fVar13 = param_1[4] - param_1[0x14];
  fVar14 = param_1[5] - param_1[0x15];
  param_1[0x14] = param_1[0x14] + param_1[4];
  param_1[0x15] = param_1[0x15] + param_1[5];
  param_1[0x16] = param_1[0x16] + fVar1;
  param_1[0x17] = param_1[0x17] + param_1[7];
  fVar15 = param_1[8] - param_1[0x18];
  fVar17 = param_1[9] - param_1[0x19];
  fVar19 = param_1[10] - param_1[0x1a];
  fVar21 = param_1[0xb] - param_1[0x1b];
  param_1[0x18] = param_1[0x18] + param_1[8];
  param_1[0x19] = param_1[0x19] + param_1[9];
  param_1[0x1a] = param_1[0x1a] + param_1[10];
  param_1[0x1b] = param_1[0x1b] + param_1[0xb];
  fVar5 = param_1[0x1e];
  fVar2 = param_1[0x1f];
  fVar23 = param_1[0xc] - param_1[0x1c];
  fVar24 = param_1[0xd] - param_1[0x1d];
  param_1[0x1c] = param_1[0x1c] + param_1[0xc];
  param_1[0x1d] = param_1[0x1d] + param_1[0xd];
  param_1[0x1e] = param_1[0x1e] + param_1[0xe];
  param_1[0x1f] = param_1[0x1f] + param_1[0xf];
  *param_1 = (fVar9 * 0.0 + fVar10) * 0.38268343 + fVar9 * 0.9238795;
  param_1[1] = (fVar9 * 0.0 + fVar10) * 0.9238795 + fVar9 * -0.38268343;
  param_1[2] = (fVar11 * 1.0 + fVar12) * 0.70710677 + fVar9 * 0.0;
  param_1[3] = (fVar12 * -1.0 + fVar11) * -0.70710677 + fVar9 * 0.0;
  param_1[4] = fVar14 * 0.9238795 + fVar13 * 0.38268343;
  param_1[5] = fVar14 * 0.38268343 + fVar13 * -0.9238795;
  param_1[6] = (param_1[7] - fVar4) * 1.0 + fVar13 * 0.0;
  param_1[7] = (fVar1 - fVar3) * -1.0 + fVar13 * 0.0;
  param_1[8] = (fVar15 * 0.0 + fVar15) * -0.38268343 + fVar17 * 0.9238795;
  param_1[9] = (fVar17 * 0.0 + fVar17) * -0.38268343 + fVar15 * -0.9238795;
  param_1[10] = (fVar21 * -1.0 + fVar19) * -0.70710677 + fVar19 * 0.0;
  param_1[0xb] = (fVar19 * 1.0 + fVar21) * -0.70710677 + fVar21 * 0.0;
  param_1[0xc] = fVar23 * -0.9238795 + fVar24 * 0.38268343;
  param_1[0xd] = fVar23 * -0.38268343 + fVar24 * -0.9238795;
  param_1[0xe] = (param_1[0xe] - fVar5) * -1.0 + fVar23 * 0.0;
  param_1[0xf] = (param_1[0xf] - fVar2) * -1.0 + fVar23 * 0.0;
  fVar1 = param_1[8];
  fVar3 = param_1[9];
  fVar4 = param_1[10];
  fVar5 = param_1[0xb];
  fVar2 = *param_1;
  fVar9 = param_1[1];
  fVar10 = param_1[2];
  fVar11 = param_1[3];
  fVar12 = param_1[0xc] - param_1[4];
  fVar13 = param_1[0xd] - param_1[5];
  fVar14 = param_1[0xe] - param_1[6];
  fVar15 = param_1[0xf] - param_1[7];
  fVar17 = param_1[0xc] + param_1[4];
  fVar19 = param_1[0xd] + param_1[5];
  fVar21 = param_1[0xe] + param_1[6];
  fVar23 = param_1[0xf] + param_1[7];
  fVar24 = ((fVar3 - fVar9) * -1.0 + (fVar2 - fVar1)) * 0.70710677;
  fVar6 = ((fVar1 - fVar2) * 1.0 + (fVar9 - fVar3)) * 0.70710677;
  fVar7 = ((fVar4 - fVar10) * 0.0 + (fVar10 - fVar4)) * -1.0;
  fVar8 = ((fVar5 - fVar11) * 0.0 + (fVar11 - fVar5)) * 1.0;
  fVar16 = fVar17 + fVar1 + fVar2;
  fVar18 = fVar19 + fVar3 + fVar9;
  fVar20 = fVar21 + fVar4 + fVar10;
  fVar22 = fVar23 + fVar5 + fVar11;
  fVar17 = fVar17 - (fVar1 + fVar2);
  fVar19 = fVar19 - (fVar3 + fVar9);
  fVar21 = fVar21 - (fVar4 + fVar10);
  fVar23 = fVar23 - (fVar5 + fVar11);
  fVar1 = (fVar13 * -1.0 + fVar12) * 0.70710677;
  fVar3 = (fVar12 * 1.0 + fVar13) * 0.70710677;
  fVar4 = (fVar14 * 0.0 + fVar14) * 1.0;
  fVar5 = (fVar15 * 0.0 + fVar15) * 1.0;
  fVar2 = fVar1 + fVar24;
  fVar9 = fVar3 + fVar6;
  fVar10 = fVar4 + fVar8;
  fVar11 = fVar5 + fVar7;
  fVar1 = fVar1 - fVar24;
  fVar3 = fVar3 - fVar6;
  fVar4 = fVar4 - fVar8;
  fVar5 = fVar5 - fVar7;
  *param_1 = fVar3 * 1.0 + fVar4;
  param_1[1] = fVar1 * -1.0 + fVar5;
  param_1[2] = fVar3 * -1.0 + fVar4;
  param_1[3] = fVar1 * 1.0 + fVar5;
  param_1[4] = fVar2 * -1.0 + fVar10;
  param_1[5] = fVar9 * -1.0 + fVar11;
  param_1[6] = fVar2 * 1.0 + fVar10;
  param_1[7] = fVar9 * 1.0 + fVar11;
  param_1[8] = fVar19 * 1.0 + fVar21;
  param_1[9] = fVar17 * -1.0 + fVar23;
  param_1[10] = fVar19 * -1.0 + fVar21;
  param_1[0xb] = fVar17 * 1.0 + fVar23;
  param_1[0xc] = fVar16 * -1.0 + fVar20;
  param_1[0xd] = fVar18 * -1.0 + fVar22;
  param_1[0xe] = fVar16 * 1.0 + fVar20;
  param_1[0xf] = fVar18 * 1.0 + fVar22;
  fVar1 = param_1[0x10];
  fVar3 = param_1[0x11];
  fVar4 = param_1[0x12];
  fVar5 = param_1[0x13];
  fVar2 = param_1[0x18];
  fVar9 = param_1[0x19];
  fVar10 = param_1[0x1a];
  fVar11 = param_1[0x1b];
  fVar12 = param_1[0x1c] - param_1[0x14];
  fVar13 = param_1[0x1d] - param_1[0x15];
  fVar14 = param_1[0x1e] - param_1[0x16];
  fVar15 = param_1[0x1f] - param_1[0x17];
  fVar17 = param_1[0x1c] + param_1[0x14];
  fVar19 = param_1[0x1d] + param_1[0x15];
  fVar21 = param_1[0x1e] + param_1[0x16];
  fVar23 = param_1[0x1f] + param_1[0x17];
  fVar24 = (fVar13 * -1.0 + fVar12) * 0.70710677;
  fVar6 = (fVar12 * 1.0 + fVar13) * 0.70710677;
  fVar7 = (fVar14 * 0.0 + fVar14) * 1.0;
  fVar8 = (fVar15 * 0.0 + fVar15) * 1.0;
  fVar16 = ((fVar9 - fVar3) * -1.0 + (fVar1 - fVar2)) * 0.70710677;
  fVar18 = ((fVar2 - fVar1) * 1.0 + (fVar3 - fVar9)) * 0.70710677;
  fVar20 = ((fVar10 - fVar4) * 0.0 + (fVar4 - fVar10)) * -1.0;
  fVar22 = ((fVar11 - fVar5) * 0.0 + (fVar5 - fVar11)) * 1.0;
  fVar12 = fVar24 - fVar16;
  fVar13 = fVar6 - fVar18;
  fVar14 = fVar7 - fVar22;
  fVar15 = fVar8 - fVar20;
  fVar24 = fVar24 + fVar16;
  fVar6 = fVar6 + fVar18;
  fVar7 = fVar7 + fVar22;
  fVar8 = fVar8 + fVar20;
  fVar16 = fVar17 + fVar2 + fVar1;
  fVar18 = fVar19 + fVar9 + fVar3;
  fVar20 = fVar21 + fVar10 + fVar4;
  fVar22 = fVar23 + fVar11 + fVar5;
  fVar17 = fVar17 - (fVar2 + fVar1);
  fVar19 = fVar19 - (fVar9 + fVar3);
  fVar21 = fVar21 - (fVar10 + fVar4);
  fVar23 = fVar23 - (fVar11 + fVar5);
  param_1[0x10] = fVar13 * 1.0 + fVar14;
  param_1[0x11] = fVar12 * -1.0 + fVar15;
  param_1[0x12] = fVar13 * -1.0 + fVar14;
  param_1[0x13] = fVar12 * 1.0 + fVar15;
  param_1[0x14] = fVar24 * -1.0 + fVar7;
  param_1[0x15] = fVar6 * -1.0 + fVar8;
  param_1[0x16] = fVar24 * 1.0 + fVar7;
  param_1[0x17] = fVar6 * 1.0 + fVar8;
  param_1[0x18] = fVar19 * 1.0 + fVar21;
  param_1[0x19] = fVar17 * -1.0 + fVar23;
  param_1[0x1a] = fVar19 * -1.0 + fVar21;
  param_1[0x1b] = fVar17 * 1.0 + fVar23;
  param_1[0x1c] = fVar16 * -1.0 + fVar20;
  param_1[0x1d] = fVar18 * -1.0 + fVar22;
  param_1[0x1e] = fVar16 * 1.0 + fVar20;
  param_1[0x1f] = fVar18 * 1.0 + fVar22;
  return;
}





// 函数: void FUN_18083a850(int64_t param_1,float *param_2,int param_3,int param_4)
void FUN_18083a850(int64_t param_1,float *param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  int64_t lVar12;
  int64_t lVar13;
  float *pfVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  lVar12 = (int64_t)(param_4 * 2);
  lVar13 = (int64_t)param_3 >> 1;
  pfVar10 = param_2 + lVar13 + -8;
  pfVar11 = (float *)(lVar12 * 4 + param_1);
  pfVar15 = pfVar10 + 4;
  pfVar14 = pfVar10 + (param_3 - lVar13);
  do {
    fVar1 = pfVar10[1];
    fVar2 = pfVar10[2];
    fVar3 = pfVar10[3];
    fVar4 = *pfVar15;
    fVar5 = pfVar15[1];
    fVar6 = pfVar15[2];
    fVar7 = pfVar15[3];
    pfVar9 = pfVar11 + -lVar12;
    fVar16 = *pfVar14 - *pfVar10;
    fVar17 = pfVar14[1] - fVar1;
    fVar18 = pfVar14[2] - fVar2;
    fVar19 = pfVar14[3] - fVar3;
    fVar20 = pfVar14[4] - fVar4;
    fVar21 = pfVar14[5] - fVar5;
    fVar22 = pfVar14[6] - fVar6;
    fVar23 = pfVar14[7] - fVar7;
    *pfVar14 = *pfVar10 + *pfVar14;
    pfVar14[1] = fVar1 + pfVar14[1];
    pfVar14[2] = fVar2 + pfVar14[2];
    pfVar14[3] = fVar3 + pfVar14[3];
    pfVar14[4] = fVar4 + pfVar14[4];
    pfVar14[5] = fVar5 + pfVar14[5];
    pfVar14[6] = fVar6 + pfVar14[6];
    pfVar14[7] = fVar7 + pfVar14[7];
    pfVar14 = pfVar14 + -8;
    fVar5 = pfVar11[param_4 * 3 - lVar12];
    fVar6 = (pfVar11 + (param_4 * 3 - lVar12))[1];
    fVar1 = *pfVar11;
    fVar3 = pfVar11[1];
    fVar7 = pfVar11[param_4 - lVar12];
    fVar8 = (pfVar11 + (param_4 - lVar12))[1];
    pfVar11 = pfVar11 + param_4 * 4;
    fVar2 = *pfVar9;
    fVar4 = pfVar9[1];
    *pfVar10 = fVar16 * fVar5 * 1.0 + fVar17 * fVar6;
    pfVar10[1] = fVar16 * fVar6 * -1.0 + fVar17 * fVar5;
    pfVar10[2] = fVar18 * fVar1 * 1.0 + fVar19 * fVar3;
    pfVar10[3] = fVar18 * fVar3 * -1.0 + fVar19 * fVar1;
    pfVar10 = pfVar10 + -8;
    *pfVar15 = fVar20 * fVar7 * 1.0 + fVar21 * fVar8;
    pfVar15[1] = fVar20 * fVar8 * -1.0 + fVar21 * fVar7;
    pfVar15[2] = fVar22 * fVar2 * 1.0 + fVar23 * fVar4;
    pfVar15[3] = fVar22 * fVar4 * -1.0 + fVar23 * fVar2;
    pfVar15 = pfVar15 + -8;
  } while (param_2 <= pfVar10);
  return;
}





// 函数: void FUN_18083a990(int8_t (*param_1) [32],int8_t (*param_2) [32],int param_3)
void FUN_18083a990(int8_t (*param_1) [32],int8_t (*param_2) [32],int param_3)

{
  int8_t auVar1 [32];
  int8_t auVar2 [32];
  int8_t auVar3 [32];
  int8_t auVar4 [32];
  int8_t auVar5 [32];
  int8_t auVar6 [32];
  
  for (param_3 = param_3 >> 3; param_3 != 0; param_3 = param_3 + -1) {
    auVar1 = *param_2;
    auVar2 = *param_1;
    auVar6 = vcmpps_avx(auVar1,ZEXT1632(ZEXT816(0) << 0x40),0xe);
    auVar3 = vandnps_avx(auVar6,auVar1);
    auVar1 = vandps_avx(auVar6,auVar1);
    auVar4 = vcmpps_avx(auVar2,ZEXT1632(ZEXT816(0) << 0x40),0xe);
    auVar6 = vandnps_avx(auVar4,auVar1);
    auVar5._0_4_ = auVar6._0_4_ + auVar2._0_4_;
    auVar5._4_4_ = auVar6._4_4_ + auVar2._4_4_;
    auVar5._8_4_ = auVar6._8_4_ + auVar2._8_4_;
    auVar5._12_4_ = auVar6._12_4_ + auVar2._12_4_;
    auVar5._16_4_ = auVar6._16_4_ + auVar2._16_4_;
    auVar5._20_4_ = auVar6._20_4_ + auVar2._20_4_;
    auVar5._24_4_ = auVar6._24_4_ + auVar2._24_4_;
    auVar5._28_4_ = auVar6._28_4_ + auVar2._28_4_;
    auVar1 = vandps_avx(auVar1,auVar4);
    auVar1 = vsubps_avx(auVar5,auVar1);
    *param_2 = auVar1;
    auVar1 = vandps_avx(auVar3,auVar4);
    auVar6._0_4_ = auVar1._0_4_ + auVar2._0_4_;
    auVar6._4_4_ = auVar1._4_4_ + auVar2._4_4_;
    auVar6._8_4_ = auVar1._8_4_ + auVar2._8_4_;
    auVar6._12_4_ = auVar1._12_4_ + auVar2._12_4_;
    auVar6._16_4_ = auVar1._16_4_ + auVar2._16_4_;
    auVar6._20_4_ = auVar1._20_4_ + auVar2._20_4_;
    auVar6._24_4_ = auVar1._24_4_ + auVar2._24_4_;
    auVar6._28_4_ = auVar1._28_4_ + auVar2._28_4_;
    auVar1 = vandnps_avx(auVar4,auVar3);
    auVar1 = vsubps_avx(auVar6,auVar1);
    *param_1 = auVar1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}





// 函数: void FUN_18083a9a6(int8_t (*param_1) [32],int8_t (*param_2) [32],int param_3)
void FUN_18083a9a6(int8_t (*param_1) [32],int8_t (*param_2) [32],int param_3)

{
  int8_t auVar1 [32];
  int8_t auVar2 [32];
  int8_t auVar3 [32];
  int8_t auVar4 [32];
  int8_t auVar5 [32];
  int8_t auVar6 [32];
  int8_t in_ZMM7 [64];
  
  do {
    auVar1 = *param_2;
    auVar2 = *param_1;
    auVar6 = vcmpps_avx(auVar1,in_ZMM7._0_32_,0xe);
    auVar3 = vandnps_avx(auVar6,auVar1);
    auVar1 = vandps_avx(auVar6,auVar1);
    auVar4 = vcmpps_avx(auVar2,in_ZMM7._0_32_,0xe);
    auVar6 = vandnps_avx(auVar4,auVar1);
    auVar5._0_4_ = auVar6._0_4_ + auVar2._0_4_;
    auVar5._4_4_ = auVar6._4_4_ + auVar2._4_4_;
    auVar5._8_4_ = auVar6._8_4_ + auVar2._8_4_;
    auVar5._12_4_ = auVar6._12_4_ + auVar2._12_4_;
    auVar5._16_4_ = auVar6._16_4_ + auVar2._16_4_;
    auVar5._20_4_ = auVar6._20_4_ + auVar2._20_4_;
    auVar5._24_4_ = auVar6._24_4_ + auVar2._24_4_;
    auVar5._28_4_ = auVar6._28_4_ + auVar2._28_4_;
    auVar1 = vandps_avx(auVar1,auVar4);
    auVar1 = vsubps_avx(auVar5,auVar1);
    *param_2 = auVar1;
    auVar1 = vandps_avx(auVar3,auVar4);
    auVar6._0_4_ = auVar1._0_4_ + auVar2._0_4_;
    auVar6._4_4_ = auVar1._4_4_ + auVar2._4_4_;
    auVar6._8_4_ = auVar1._8_4_ + auVar2._8_4_;
    auVar6._12_4_ = auVar1._12_4_ + auVar2._12_4_;
    auVar6._16_4_ = auVar1._16_4_ + auVar2._16_4_;
    auVar6._20_4_ = auVar1._20_4_ + auVar2._20_4_;
    auVar6._24_4_ = auVar1._24_4_ + auVar2._24_4_;
    auVar6._28_4_ = auVar1._28_4_ + auVar2._28_4_;
    auVar1 = vandnps_avx(auVar4,auVar3);
    auVar1 = vsubps_avx(auVar6,auVar1);
    *param_1 = auVar1;
    param_3 = param_3 + -1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (param_3 != 0);
  return;
}





