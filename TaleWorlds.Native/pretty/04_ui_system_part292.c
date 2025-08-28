#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part292.c - 2 个函数

// 函数: void FUN_18082d350(int8_t (*param_1) [32],uint *param_2,float *param_3,float *param_4,
void FUN_18082d350(int8_t (*param_1) [32],uint *param_2,float *param_3,float *param_4,
                  float *param_5,float *param_6,float *param_7,uint param_8,uint param_9,
                  uint param_10,uint param_11)

{
  float *pfVar1;
  float fVar2;
  int8_t auVar3 [32];
  int8_t auVar4 [16];
  int8_t auVar5 [32];
  int8_t auVar6 [32];
  int8_t auVar7 [32];
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int8_t in_ZMM0 [64];
  int8_t auVar11 [64];
  int8_t auVar12 [64];
  int8_t auVar13 [32];
  int8_t auVar14 [32];
  int8_t in_ZMM2 [64];
  int8_t auVar15 [64];
  int8_t auVar17 [32];
  int8_t in_ZMM4 [64];
  int8_t auVar18 [64];
  int8_t auVar16 [64];
  
  auVar7 = _DAT_180980640;
  iVar8 = (int)param_8 >> 3;
  if (iVar8 != 0) {
    in_ZMM4 = ZEXT3264(_DAT_180980640);
    do {
      auVar14 = vpermps_avx2(auVar7,*(int8_t (*) [32])(param_5 + -8));
      auVar13 = vpermps_avx2(auVar7,*(int8_t (*) [32])(param_4 + -8));
      auVar3 = vunpcklps_avx(auVar13,auVar14);
      param_4 = param_4 + -8;
      param_5 = param_5 + -8;
      auVar14 = vunpckhps_avx(auVar13,auVar14);
      in_ZMM2 = ZEXT3264(auVar14);
      auVar13 = vperm2f128_avx(auVar3,auVar14,0x20);
      in_ZMM0 = ZEXT3264(auVar13);
      *param_1 = auVar13;
      auVar14 = vperm2f128_avx(auVar3,auVar14,0x31);
      param_1[1] = auVar14;
      param_1 = param_1 + 2;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  auVar7 = _DAT_180980640;
  for (param_8 = param_8 & 7; _DAT_180980640 = auVar7, param_8 != 0; param_8 = param_8 - 1) {
    pfVar1 = param_4 + -1;
                    // WARNING: Read-only address (ram,0x000180980640) is written
    param_4 = param_4 + -1;
    param_5 = param_5 + -1;
    *(float *)*param_1 = *pfVar1;
    *(float *)(*param_1 + 4) = *param_5;
    param_1 = (int8_t (*) [32])(*param_1 + 8);
    auVar7 = _DAT_180980640;
  }
                    // WARNING: Read-only address (ram,0x000180980640) is written
  for (iVar8 = (int)param_9 >> 3; iVar8 != 0; iVar8 = iVar8 + -1) {
    auVar11._0_4_ = (float)param_2[-8] * param_4[-8];
    auVar11._4_4_ = (float)param_2[-7] * param_4[-7];
    auVar11._8_4_ = (float)param_2[-6] * param_4[-6];
    auVar11._12_4_ = (float)param_2[-5] * param_4[-5];
    auVar11._16_4_ = (float)param_2[-4] * param_4[-4];
    auVar11._20_4_ = (float)param_2[-3] * param_4[-3];
    auVar11._28_36_ = in_ZMM0._28_36_;
    auVar11._24_4_ = (float)param_2[-2] * param_4[-2];
    auVar14 = vpermps_avx2(auVar7,auVar11._0_32_);
    fVar2 = in_ZMM0._28_4_;
    auVar17._0_4_ = auVar14._0_4_ + *param_3 * *param_6;
    auVar17._4_4_ = auVar14._4_4_ + param_3[1] * param_6[1];
    auVar17._8_4_ = auVar14._8_4_ + param_3[2] * param_6[2];
    auVar17._12_4_ = auVar14._12_4_ + param_3[3] * param_6[3];
    auVar17._16_4_ = auVar14._16_4_ + param_3[4] * param_6[4];
    auVar17._20_4_ = auVar14._20_4_ + param_3[5] * param_6[5];
    auVar17._24_4_ = auVar14._24_4_ + param_3[6] * param_6[6];
    auVar17._28_4_ = auVar14._28_4_ + fVar2;
    in_ZMM4 = ZEXT3264(auVar17);
    auVar14._4_4_ = (float)param_2[-7] * param_5[-7];
    auVar14._0_4_ = (float)param_2[-8] * param_5[-8];
    auVar14._8_4_ = (float)param_2[-6] * param_5[-6];
    auVar14._12_4_ = (float)param_2[-5] * param_5[-5];
    auVar14._16_4_ = (float)param_2[-4] * param_5[-4];
    auVar14._20_4_ = (float)param_2[-3] * param_5[-3];
    auVar14._24_4_ = (float)param_2[-2] * param_5[-2];
    auVar14._28_4_ = fVar2;
    auVar14 = vpermps_avx2(auVar7,auVar14);
    auVar13._0_4_ = auVar14._0_4_ + *param_3 * *param_7;
    auVar13._4_4_ = auVar14._4_4_ + param_3[1] * param_7[1];
    auVar13._8_4_ = auVar14._8_4_ + param_3[2] * param_7[2];
    auVar13._12_4_ = auVar14._12_4_ + param_3[3] * param_7[3];
    auVar13._16_4_ = auVar14._16_4_ + param_3[4] * param_7[4];
    auVar13._20_4_ = auVar14._20_4_ + param_3[5] * param_7[5];
    auVar13._24_4_ = auVar14._24_4_ + param_3[6] * param_7[6];
    auVar13._28_4_ = auVar14._28_4_ + fVar2;
    in_ZMM2 = ZEXT3264(auVar13);
    param_2 = param_2 + -8;
    param_4 = param_4 + -8;
    param_5 = param_5 + -8;
    param_6 = param_6 + 8;
    auVar3 = vunpcklps_avx(auVar17,auVar13);
    auVar14 = vunpckhps_avx(auVar17,auVar13);
    auVar13 = vperm2f128_avx(auVar3,auVar14,0x20);
    in_ZMM0 = ZEXT3264(auVar13);
    *param_1 = auVar13;
    auVar14 = vperm2f128_avx(auVar3,auVar14,0x31);
    param_1[1] = auVar14;
    param_1 = param_1 + 2;
    param_7 = param_7 + 8;
    param_3 = param_3 + 8;
  }
  auVar7 = _DAT_180980640;
  for (param_9 = param_9 & 7; _DAT_180980640 = auVar7, param_9 != 0; param_9 = param_9 - 1) {
    auVar4 = vfmadd132ss_fma(ZEXT416((uint)param_4[-1]),ZEXT416((uint)(*param_6 * *param_3)),
                             ZEXT416(param_2[-1]));
    *(int *)*param_1 = auVar4._0_4_;
    in_ZMM0 = ZEXT464((uint)param_5[-1]);
    fVar2 = param_5[-1] * (float)param_2[-1];
    in_ZMM2 = ZEXT464((uint)fVar2);
    auVar4 = vfmadd132ss_fma(ZEXT416((uint)*param_3),ZEXT416((uint)fVar2),ZEXT416((uint)*param_7));
    param_2 = param_2 + -1;
    param_4 = param_4 + -1;
    param_5 = param_5 + -1;
    param_6 = param_6 + 1;
    *(int *)(*param_1 + 4) = auVar4._0_4_;
    param_1 = (int8_t (*) [32])(*param_1 + 8);
    param_7 = param_7 + 1;
    param_3 = param_3 + 1;
    auVar7 = _DAT_180980640;
  }
  for (iVar8 = (int)param_10 >> 3; iVar8 != 0; iVar8 = iVar8 + -1) {
    auVar3 = vpermps_avx2(auVar7,*(int8_t (*) [32])(param_2 + -8));
    auVar12._0_4_ = auVar3._0_4_ * *param_4;
    auVar12._4_4_ = auVar3._4_4_ * param_4[1];
    auVar12._8_4_ = auVar3._8_4_ * param_4[2];
    auVar12._12_4_ = auVar3._12_4_ * param_4[3];
    auVar12._16_4_ = auVar3._16_4_ * param_4[4];
    auVar12._20_4_ = auVar3._20_4_ * param_4[5];
    auVar12._28_36_ = in_ZMM0._28_36_;
    auVar12._24_4_ = auVar3._24_4_ * param_4[6];
    auVar14 = vpermps_avx2(auVar7,*(int8_t (*) [32])(param_6 + -8));
    auVar15._0_4_ = auVar14._0_4_ * *param_3;
    auVar15._4_4_ = auVar14._4_4_ * param_3[1];
    auVar15._8_4_ = auVar14._8_4_ * param_3[2];
    auVar15._12_4_ = auVar14._12_4_ * param_3[3];
    auVar15._16_4_ = auVar14._16_4_ * param_3[4];
    auVar15._20_4_ = auVar14._20_4_ * param_3[5];
    auVar15._28_36_ = in_ZMM2._28_36_;
    auVar15._24_4_ = auVar14._24_4_ * param_3[6];
    auVar13 = vpermps_avx2(auVar7,*(int8_t (*) [32])(param_7 + -8));
    auVar14 = vsubps_avx(auVar12._0_32_,auVar15._0_32_);
    in_ZMM4 = ZEXT3264(auVar14);
    auVar5._4_4_ = auVar13._4_4_ * param_3[1];
    auVar5._0_4_ = auVar13._0_4_ * *param_3;
    auVar5._8_4_ = auVar13._8_4_ * param_3[2];
    auVar5._12_4_ = auVar13._12_4_ * param_3[3];
    auVar5._16_4_ = auVar13._16_4_ * param_3[4];
    auVar5._20_4_ = auVar13._20_4_ * param_3[5];
    auVar5._24_4_ = auVar13._24_4_ * param_3[6];
    auVar5._28_4_ = in_ZMM2._28_4_;
    auVar6._4_4_ = auVar3._4_4_ * param_5[1];
    auVar6._0_4_ = auVar3._0_4_ * *param_5;
    auVar6._8_4_ = auVar3._8_4_ * param_5[2];
    auVar6._12_4_ = auVar3._12_4_ * param_5[3];
    auVar6._16_4_ = auVar3._16_4_ * param_5[4];
    auVar6._20_4_ = auVar3._20_4_ * param_5[5];
    auVar6._24_4_ = auVar3._24_4_ * param_5[6];
    auVar6._28_4_ = in_ZMM0._28_4_;
    auVar3 = vsubps_avx(auVar6,auVar5);
    param_2 = param_2 + -8;
    param_6 = param_6 + -8;
    param_7 = param_7 + -8;
    param_4 = param_4 + 8;
    auVar13 = vunpcklps_avx(auVar14,auVar3);
    auVar14 = vunpckhps_avx(auVar14,auVar3);
    in_ZMM2 = ZEXT3264(auVar14);
    auVar3 = vperm2f128_avx(auVar13,auVar14,0x20);
    in_ZMM0 = ZEXT3264(auVar3);
    *param_1 = auVar3;
    auVar14 = vperm2f128_avx(auVar13,auVar14,0x31);
    param_1[1] = auVar14;
    param_1 = param_1 + 2;
    param_5 = param_5 + 8;
    param_3 = param_3 + 8;
  }
  param_10 = param_10 & 7;
  if (param_10 != 0) {
    lVar9 = (longlong)param_4 - (longlong)param_3;
    lVar10 = (longlong)param_5 - (longlong)param_3;
    do {
      pfVar1 = param_6 + -1;
      param_6 = param_6 + -1;
      param_2 = param_2 + -1;
      auVar4 = vfmsub132ss_fma(ZEXT416(*param_2),ZEXT416((uint)(*pfVar1 * *param_3)),
                               ZEXT416(*(uint *)(lVar9 + (longlong)param_3)));
      *(int *)*param_1 = auVar4._0_4_;
      in_ZMM2 = ZEXT464((uint)(param_7[-1] * *param_3));
      auVar4 = vfmsub132ss_fma(ZEXT416(*param_2),ZEXT416((uint)(param_7[-1] * *param_3)),
                               ZEXT416(*(uint *)(lVar10 + (longlong)param_3)));
      param_7 = param_7 + -1;
      param_3 = param_3 + 1;
      *(int *)(*param_1 + 4) = auVar4._0_4_;
      param_1 = (int8_t (*) [32])(*param_1 + 8);
      param_10 = param_10 - 1;
    } while (param_10 != 0);
  }
  auVar7 = _DAT_180980640;
  for (iVar8 = (int)param_11 >> 3; iVar8 != 0; iVar8 = iVar8 + -1) {
    auVar14 = vpermps_avx2(auVar7,*(int8_t (*) [32])(param_6 + -8));
    auVar18._0_4_ = auVar14._0_4_ * -1.0;
    auVar18._4_4_ = auVar14._4_4_ * -1.0;
    auVar18._8_4_ = auVar14._8_4_ * -1.0;
    auVar18._12_4_ = auVar14._12_4_ * -1.0;
    auVar18._16_4_ = auVar14._16_4_ * -1.0;
    auVar18._20_4_ = auVar14._20_4_ * -1.0;
    auVar18._28_36_ = in_ZMM4._28_36_;
    auVar18._24_4_ = auVar14._24_4_ * -1.0;
    auVar13 = auVar18._0_32_;
    in_ZMM4 = ZEXT3264(auVar13);
    auVar14 = vpermps_avx2(auVar7,*(int8_t (*) [32])(param_7 + -8));
    auVar16._0_4_ = auVar14._0_4_ * -1.0;
    auVar16._4_4_ = auVar14._4_4_ * -1.0;
    auVar16._8_4_ = auVar14._8_4_ * -1.0;
    auVar16._12_4_ = auVar14._12_4_ * -1.0;
    auVar16._16_4_ = auVar14._16_4_ * -1.0;
    auVar16._20_4_ = auVar14._20_4_ * -1.0;
    auVar16._28_36_ = in_ZMM2._28_36_;
    auVar16._24_4_ = auVar14._24_4_ * -1.0;
    auVar14 = auVar16._0_32_;
    in_ZMM2 = ZEXT3264(auVar14);
    param_6 = param_6 + -8;
    param_7 = param_7 + -8;
    auVar3 = vunpcklps_avx(auVar13,auVar14);
    auVar14 = vunpckhps_avx(auVar13,auVar14);
    auVar13 = vperm2f128_avx(auVar3,auVar14,0x20);
    *param_1 = auVar13;
    auVar14 = vperm2f128_avx(auVar3,auVar14,0x31);
    param_1[1] = auVar14;
    param_1 = param_1 + 2;
  }
  param_11 = param_11 & 7;
  if (param_11 != 0) {
    lVar9 = (longlong)param_6 - (longlong)param_7;
    do {
      param_7 = param_7 + -1;
      *(uint *)*param_1 = *(uint *)(lVar9 + (longlong)param_7) ^ 0x80000000;
      *(float *)(*param_1 + 4) = -*param_7;
      param_11 = param_11 - 1;
      param_1 = (int8_t (*) [32])(*param_1 + 8);
    } while (param_11 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18082d365(int8_t (*param_1) [32],uint param_2,float *param_3,float *param_4)
void FUN_18082d365(int8_t (*param_1) [32],uint param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  int8_t auVar3 [32];
  int8_t auVar4 [16];
  int8_t auVar5 [32];
  int8_t auVar6 [32];
  int8_t auVar7 [32];
  int in_EAX;
  int iVar8;
  longlong lVar9;
  float *in_R10;
  longlong lVar10;
  uint *in_R11;
  int8_t in_ZMM0 [64];
  int8_t auVar11 [64];
  int8_t auVar12 [64];
  int8_t auVar13 [32];
  int8_t auVar14 [32];
  int8_t in_ZMM2 [64];
  int8_t auVar15 [64];
  int8_t auVar17 [32];
  int8_t in_ZMM4 [64];
  int8_t auVar18 [64];
  float *in_stack_00000048;
  float *in_stack_00000050;
  uint in_stack_00000060;
  uint in_stack_00000068;
  uint in_stack_00000070;
  int8_t auVar16 [64];
  
  auVar7 = _DAT_180980640;
  if (in_EAX != 0) {
    in_ZMM4 = ZEXT3264(_DAT_180980640);
    do {
      auVar14 = vpermps_avx2(auVar7,*(int8_t (*) [32])(in_R10 + -8));
      auVar13 = vpermps_avx2(auVar7,*(int8_t (*) [32])(param_4 + -8));
      auVar3 = vunpcklps_avx(auVar13,auVar14);
      param_4 = param_4 + -8;
      in_R10 = in_R10 + -8;
      auVar14 = vunpckhps_avx(auVar13,auVar14);
      in_ZMM2 = ZEXT3264(auVar14);
      auVar13 = vperm2f128_avx(auVar3,auVar14,0x20);
      in_ZMM0 = ZEXT3264(auVar13);
      *param_1 = auVar13;
      auVar14 = vperm2f128_avx(auVar3,auVar14,0x31);
      param_1[1] = auVar14;
      param_1 = param_1 + 2;
      in_EAX = in_EAX + -1;
    } while (in_EAX != 0);
  }
  auVar7 = _DAT_180980640;
  for (param_2 = param_2 & 7; _DAT_180980640 = auVar7, param_2 != 0; param_2 = param_2 - 1) {
    pfVar1 = param_4 + -1;
                    // WARNING: Read-only address (ram,0x000180980640) is written
    param_4 = param_4 + -1;
    in_R10 = in_R10 + -1;
    *(float *)*param_1 = *pfVar1;
    *(float *)(*param_1 + 4) = *in_R10;
    param_1 = (int8_t (*) [32])(*param_1 + 8);
    auVar7 = _DAT_180980640;
  }
                    // WARNING: Read-only address (ram,0x000180980640) is written
  for (iVar8 = (int)in_stack_00000060 >> 3; iVar8 != 0; iVar8 = iVar8 + -1) {
    auVar11._0_4_ = (float)in_R11[-8] * param_4[-8];
    auVar11._4_4_ = (float)in_R11[-7] * param_4[-7];
    auVar11._8_4_ = (float)in_R11[-6] * param_4[-6];
    auVar11._12_4_ = (float)in_R11[-5] * param_4[-5];
    auVar11._16_4_ = (float)in_R11[-4] * param_4[-4];
    auVar11._20_4_ = (float)in_R11[-3] * param_4[-3];
    auVar11._28_36_ = in_ZMM0._28_36_;
    auVar11._24_4_ = (float)in_R11[-2] * param_4[-2];
    auVar14 = vpermps_avx2(auVar7,auVar11._0_32_);
    fVar2 = in_ZMM0._28_4_;
    auVar17._0_4_ = auVar14._0_4_ + *param_3 * *in_stack_00000048;
    auVar17._4_4_ = auVar14._4_4_ + param_3[1] * in_stack_00000048[1];
    auVar17._8_4_ = auVar14._8_4_ + param_3[2] * in_stack_00000048[2];
    auVar17._12_4_ = auVar14._12_4_ + param_3[3] * in_stack_00000048[3];
    auVar17._16_4_ = auVar14._16_4_ + param_3[4] * in_stack_00000048[4];
    auVar17._20_4_ = auVar14._20_4_ + param_3[5] * in_stack_00000048[5];
    auVar17._24_4_ = auVar14._24_4_ + param_3[6] * in_stack_00000048[6];
    auVar17._28_4_ = auVar14._28_4_ + fVar2;
    in_ZMM4 = ZEXT3264(auVar17);
    auVar14._4_4_ = (float)in_R11[-7] * in_R10[-7];
    auVar14._0_4_ = (float)in_R11[-8] * in_R10[-8];
    auVar14._8_4_ = (float)in_R11[-6] * in_R10[-6];
    auVar14._12_4_ = (float)in_R11[-5] * in_R10[-5];
    auVar14._16_4_ = (float)in_R11[-4] * in_R10[-4];
    auVar14._20_4_ = (float)in_R11[-3] * in_R10[-3];
    auVar14._24_4_ = (float)in_R11[-2] * in_R10[-2];
    auVar14._28_4_ = fVar2;
    auVar14 = vpermps_avx2(auVar7,auVar14);
    auVar13._0_4_ = auVar14._0_4_ + *param_3 * *in_stack_00000050;
    auVar13._4_4_ = auVar14._4_4_ + param_3[1] * in_stack_00000050[1];
    auVar13._8_4_ = auVar14._8_4_ + param_3[2] * in_stack_00000050[2];
    auVar13._12_4_ = auVar14._12_4_ + param_3[3] * in_stack_00000050[3];
    auVar13._16_4_ = auVar14._16_4_ + param_3[4] * in_stack_00000050[4];
    auVar13._20_4_ = auVar14._20_4_ + param_3[5] * in_stack_00000050[5];
    auVar13._24_4_ = auVar14._24_4_ + param_3[6] * in_stack_00000050[6];
    auVar13._28_4_ = auVar14._28_4_ + fVar2;
    in_ZMM2 = ZEXT3264(auVar13);
    in_R11 = in_R11 + -8;
    param_4 = param_4 + -8;
    in_R10 = in_R10 + -8;
    in_stack_00000048 = in_stack_00000048 + 8;
    auVar3 = vunpcklps_avx(auVar17,auVar13);
    auVar14 = vunpckhps_avx(auVar17,auVar13);
    auVar13 = vperm2f128_avx(auVar3,auVar14,0x20);
    in_ZMM0 = ZEXT3264(auVar13);
    *param_1 = auVar13;
    auVar14 = vperm2f128_avx(auVar3,auVar14,0x31);
    param_1[1] = auVar14;
    param_1 = param_1 + 2;
    in_stack_00000050 = in_stack_00000050 + 8;
    param_3 = param_3 + 8;
  }
  auVar7 = _DAT_180980640;
  for (in_stack_00000060 = in_stack_00000060 & 7; _DAT_180980640 = auVar7, in_stack_00000060 != 0;
      in_stack_00000060 = in_stack_00000060 - 1) {
    auVar4 = vfmadd132ss_fma(ZEXT416((uint)param_4[-1]),
                             ZEXT416((uint)(*in_stack_00000048 * *param_3)),ZEXT416(in_R11[-1]));
    *(int *)*param_1 = auVar4._0_4_;
    in_ZMM0 = ZEXT464((uint)in_R10[-1]);
    fVar2 = in_R10[-1] * (float)in_R11[-1];
    in_ZMM2 = ZEXT464((uint)fVar2);
    auVar4 = vfmadd132ss_fma(ZEXT416((uint)*param_3),ZEXT416((uint)fVar2),
                             ZEXT416((uint)*in_stack_00000050));
    in_R11 = in_R11 + -1;
    param_4 = param_4 + -1;
    in_R10 = in_R10 + -1;
    in_stack_00000048 = in_stack_00000048 + 1;
    *(int *)(*param_1 + 4) = auVar4._0_4_;
    param_1 = (int8_t (*) [32])(*param_1 + 8);
    in_stack_00000050 = in_stack_00000050 + 1;
    param_3 = param_3 + 1;
    auVar7 = _DAT_180980640;
  }
  for (iVar8 = (int)in_stack_00000068 >> 3; iVar8 != 0; iVar8 = iVar8 + -1) {
    auVar3 = vpermps_avx2(auVar7,*(int8_t (*) [32])(in_R11 + -8));
    auVar12._0_4_ = auVar3._0_4_ * *param_4;
    auVar12._4_4_ = auVar3._4_4_ * param_4[1];
    auVar12._8_4_ = auVar3._8_4_ * param_4[2];
    auVar12._12_4_ = auVar3._12_4_ * param_4[3];
    auVar12._16_4_ = auVar3._16_4_ * param_4[4];
    auVar12._20_4_ = auVar3._20_4_ * param_4[5];
    auVar12._28_36_ = in_ZMM0._28_36_;
    auVar12._24_4_ = auVar3._24_4_ * param_4[6];
    auVar14 = vpermps_avx2(auVar7,*(int8_t (*) [32])(in_stack_00000048 + -8));
    auVar15._0_4_ = auVar14._0_4_ * *param_3;
    auVar15._4_4_ = auVar14._4_4_ * param_3[1];
    auVar15._8_4_ = auVar14._8_4_ * param_3[2];
    auVar15._12_4_ = auVar14._12_4_ * param_3[3];
    auVar15._16_4_ = auVar14._16_4_ * param_3[4];
    auVar15._20_4_ = auVar14._20_4_ * param_3[5];
    auVar15._28_36_ = in_ZMM2._28_36_;
    auVar15._24_4_ = auVar14._24_4_ * param_3[6];
    auVar13 = vpermps_avx2(auVar7,*(int8_t (*) [32])(in_stack_00000050 + -8));
    auVar14 = vsubps_avx(auVar12._0_32_,auVar15._0_32_);
    in_ZMM4 = ZEXT3264(auVar14);
    auVar5._4_4_ = auVar13._4_4_ * param_3[1];
    auVar5._0_4_ = auVar13._0_4_ * *param_3;
    auVar5._8_4_ = auVar13._8_4_ * param_3[2];
    auVar5._12_4_ = auVar13._12_4_ * param_3[3];
    auVar5._16_4_ = auVar13._16_4_ * param_3[4];
    auVar5._20_4_ = auVar13._20_4_ * param_3[5];
    auVar5._24_4_ = auVar13._24_4_ * param_3[6];
    auVar5._28_4_ = in_ZMM2._28_4_;
    auVar6._4_4_ = auVar3._4_4_ * in_R10[1];
    auVar6._0_4_ = auVar3._0_4_ * *in_R10;
    auVar6._8_4_ = auVar3._8_4_ * in_R10[2];
    auVar6._12_4_ = auVar3._12_4_ * in_R10[3];
    auVar6._16_4_ = auVar3._16_4_ * in_R10[4];
    auVar6._20_4_ = auVar3._20_4_ * in_R10[5];
    auVar6._24_4_ = auVar3._24_4_ * in_R10[6];
    auVar6._28_4_ = in_ZMM0._28_4_;
    auVar3 = vsubps_avx(auVar6,auVar5);
    in_R11 = in_R11 + -8;
    in_stack_00000048 = in_stack_00000048 + -8;
    in_stack_00000050 = in_stack_00000050 + -8;
    param_4 = param_4 + 8;
    auVar13 = vunpcklps_avx(auVar14,auVar3);
    auVar14 = vunpckhps_avx(auVar14,auVar3);
    in_ZMM2 = ZEXT3264(auVar14);
    auVar3 = vperm2f128_avx(auVar13,auVar14,0x20);
    in_ZMM0 = ZEXT3264(auVar3);
    *param_1 = auVar3;
    auVar14 = vperm2f128_avx(auVar13,auVar14,0x31);
    param_1[1] = auVar14;
    param_1 = param_1 + 2;
    in_R10 = in_R10 + 8;
    param_3 = param_3 + 8;
  }
  in_stack_00000068 = in_stack_00000068 & 7;
  if (in_stack_00000068 != 0) {
    lVar9 = (longlong)param_4 - (longlong)param_3;
    lVar10 = (longlong)in_R10 - (longlong)param_3;
    do {
      pfVar1 = in_stack_00000048 + -1;
      in_stack_00000048 = in_stack_00000048 + -1;
      in_R11 = in_R11 + -1;
      auVar4 = vfmsub132ss_fma(ZEXT416(*in_R11),ZEXT416((uint)(*pfVar1 * *param_3)),
                               ZEXT416(*(uint *)(lVar9 + (longlong)param_3)));
      *(int *)*param_1 = auVar4._0_4_;
      in_ZMM2 = ZEXT464((uint)(in_stack_00000050[-1] * *param_3));
      auVar4 = vfmsub132ss_fma(ZEXT416(*in_R11),ZEXT416((uint)(in_stack_00000050[-1] * *param_3)),
                               ZEXT416(*(uint *)(lVar10 + (longlong)param_3)));
      in_stack_00000050 = in_stack_00000050 + -1;
      param_3 = param_3 + 1;
      *(int *)(*param_1 + 4) = auVar4._0_4_;
      param_1 = (int8_t (*) [32])(*param_1 + 8);
      in_stack_00000068 = in_stack_00000068 - 1;
    } while (in_stack_00000068 != 0);
  }
  auVar7 = _DAT_180980640;
  for (iVar8 = (int)in_stack_00000070 >> 3; iVar8 != 0; iVar8 = iVar8 + -1) {
    auVar14 = vpermps_avx2(auVar7,*(int8_t (*) [32])(in_stack_00000048 + -8));
    auVar18._0_4_ = auVar14._0_4_ * -1.0;
    auVar18._4_4_ = auVar14._4_4_ * -1.0;
    auVar18._8_4_ = auVar14._8_4_ * -1.0;
    auVar18._12_4_ = auVar14._12_4_ * -1.0;
    auVar18._16_4_ = auVar14._16_4_ * -1.0;
    auVar18._20_4_ = auVar14._20_4_ * -1.0;
    auVar18._28_36_ = in_ZMM4._28_36_;
    auVar18._24_4_ = auVar14._24_4_ * -1.0;
    auVar13 = auVar18._0_32_;
    in_ZMM4 = ZEXT3264(auVar13);
    auVar14 = vpermps_avx2(auVar7,*(int8_t (*) [32])(in_stack_00000050 + -8));
    auVar16._0_4_ = auVar14._0_4_ * -1.0;
    auVar16._4_4_ = auVar14._4_4_ * -1.0;
    auVar16._8_4_ = auVar14._8_4_ * -1.0;
    auVar16._12_4_ = auVar14._12_4_ * -1.0;
    auVar16._16_4_ = auVar14._16_4_ * -1.0;
    auVar16._20_4_ = auVar14._20_4_ * -1.0;
    auVar16._28_36_ = in_ZMM2._28_36_;
    auVar16._24_4_ = auVar14._24_4_ * -1.0;
    auVar14 = auVar16._0_32_;
    in_ZMM2 = ZEXT3264(auVar14);
    in_stack_00000048 = in_stack_00000048 + -8;
    in_stack_00000050 = in_stack_00000050 + -8;
    auVar3 = vunpcklps_avx(auVar13,auVar14);
    auVar14 = vunpckhps_avx(auVar13,auVar14);
    auVar13 = vperm2f128_avx(auVar3,auVar14,0x20);
    *param_1 = auVar13;
    auVar14 = vperm2f128_avx(auVar3,auVar14,0x31);
    param_1[1] = auVar14;
    param_1 = param_1 + 2;
  }
  in_stack_00000070 = in_stack_00000070 & 7;
  if (in_stack_00000070 != 0) {
    lVar9 = (longlong)in_stack_00000048 - (longlong)in_stack_00000050;
    do {
      in_stack_00000050 = in_stack_00000050 + -1;
      *(uint *)*param_1 = *(uint *)(lVar9 + (longlong)in_stack_00000050) ^ 0x80000000;
      *(float *)(*param_1 + 4) = -*in_stack_00000050;
      in_stack_00000070 = in_stack_00000070 - 1;
      param_1 = (int8_t (*) [32])(*param_1 + 8);
    } while (in_stack_00000070 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



