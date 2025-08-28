#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part293.c - 7 个函数

// 函数: void FUN_18082d36a(int8_t (*param_1) [32],uint param_2,float *param_3,float *param_4)
void FUN_18082d36a(int8_t (*param_1) [32],uint param_2,float *param_3,float *param_4)

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
  int64_t lVar9;
  float *in_R10;
  int64_t lVar10;
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
  
  auVar7 = ui_system_memory_config;
  if (in_EAX != 0) {
    in_ZMM4 = ZEXT3264(ui_system_memory_config);
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
  auVar7 = ui_system_memory_config;
  for (param_2 = param_2 & 7; ui_system_memory_config = auVar7, param_2 != 0; param_2 = param_2 - 1) {
    pfVar1 = param_4 + -1;
                    // WARNING: Read-only address (ram,0x000180980640) is written
    param_4 = param_4 + -1;
    in_R10 = in_R10 + -1;
    *(float *)*param_1 = *pfVar1;
    *(float *)(*param_1 + 4) = *in_R10;
    param_1 = (int8_t (*) [32])(*param_1 + 8);
    auVar7 = ui_system_memory_config;
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
  auVar7 = ui_system_memory_config;
  for (in_stack_00000060 = in_stack_00000060 & 7; ui_system_memory_config = auVar7, in_stack_00000060 != 0;
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
    auVar7 = ui_system_memory_config;
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
    lVar9 = (int64_t)param_4 - (int64_t)param_3;
    lVar10 = (int64_t)in_R10 - (int64_t)param_3;
    do {
      pfVar1 = in_stack_00000048 + -1;
      in_stack_00000048 = in_stack_00000048 + -1;
      in_R11 = in_R11 + -1;
      auVar4 = vfmsub132ss_fma(ZEXT416(*in_R11),ZEXT416((uint)(*pfVar1 * *param_3)),
                               ZEXT416(*(uint *)(lVar9 + (int64_t)param_3)));
      *(int *)*param_1 = auVar4._0_4_;
      in_ZMM2 = ZEXT464((uint)(in_stack_00000050[-1] * *param_3));
      auVar4 = vfmsub132ss_fma(ZEXT416(*in_R11),ZEXT416((uint)(in_stack_00000050[-1] * *param_3)),
                               ZEXT416(*(uint *)(lVar10 + (int64_t)param_3)));
      in_stack_00000050 = in_stack_00000050 + -1;
      param_3 = param_3 + 1;
      *(int *)(*param_1 + 4) = auVar4._0_4_;
      param_1 = (int8_t (*) [32])(*param_1 + 8);
      in_stack_00000068 = in_stack_00000068 - 1;
    } while (in_stack_00000068 != 0);
  }
  auVar7 = ui_system_memory_config;
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
    lVar9 = (int64_t)in_stack_00000048 - (int64_t)in_stack_00000050;
    do {
      in_stack_00000050 = in_stack_00000050 + -1;
      *(uint *)*param_1 = *(uint *)(lVar9 + (int64_t)in_stack_00000050) ^ 0x80000000;
      *(float *)(*param_1 + 4) = -*in_stack_00000050;
      in_stack_00000070 = in_stack_00000070 - 1;
      param_1 = (int8_t (*) [32])(*param_1 + 8);
    } while (in_stack_00000070 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18082d4de(int8_t (*param_1) [32],int64_t param_2,float *param_3,float *param_4)
void FUN_18082d4de(int8_t (*param_1) [32],int64_t param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  int8_t auVar2 [32];
  int8_t auVar3 [16];
  int8_t auVar4 [32];
  int8_t auVar5 [32];
  uint *in_RAX;
  uint unaff_EBX;
  uint uVar6;
  int unaff_EDI;
  int iVar7;
  int64_t lVar8;
  float *in_R10;
  int64_t lVar9;
  uint *in_R11;
  int8_t in_ZMM0 [64];
  int8_t auVar10 [64];
  int8_t in_ZMM2 [64];
  int8_t auVar12 [64];
  int8_t auVar13 [64];
  int8_t auVar14 [32];
  int8_t in_ZMM4 [64];
  uint in_stack_00000070;
  int8_t auVar11 [32];
  int8_t auVar15 [64];
  
  auVar5 = ui_system_memory_config;
  if (unaff_EDI != 0) {
    do {
      auVar2 = vpermps_avx2(auVar5,*(int8_t (*) [32])(in_R11 + -8));
      auVar10._0_4_ = auVar2._0_4_ * *param_4;
      auVar10._4_4_ = auVar2._4_4_ * param_4[1];
      auVar10._8_4_ = auVar2._8_4_ * param_4[2];
      auVar10._12_4_ = auVar2._12_4_ * param_4[3];
      auVar10._16_4_ = auVar2._16_4_ * param_4[4];
      auVar10._20_4_ = auVar2._20_4_ * param_4[5];
      auVar10._28_36_ = in_ZMM0._28_36_;
      auVar10._24_4_ = auVar2._24_4_ * param_4[6];
      auVar11 = vpermps_avx2(auVar5,*(int8_t (*) [32])(param_2 + -0x20));
      auVar12._0_4_ = auVar11._0_4_ * *param_3;
      auVar12._4_4_ = auVar11._4_4_ * param_3[1];
      auVar12._8_4_ = auVar11._8_4_ * param_3[2];
      auVar12._12_4_ = auVar11._12_4_ * param_3[3];
      auVar12._16_4_ = auVar11._16_4_ * param_3[4];
      auVar12._20_4_ = auVar11._20_4_ * param_3[5];
      auVar12._28_36_ = in_ZMM2._28_36_;
      auVar12._24_4_ = auVar11._24_4_ * param_3[6];
      auVar14 = vpermps_avx2(auVar5,*(int8_t (*) [32])(in_RAX + -8));
      auVar11 = vsubps_avx(auVar10._0_32_,auVar12._0_32_);
      in_ZMM4 = ZEXT3264(auVar11);
      auVar4._4_4_ = auVar14._4_4_ * param_3[1];
      auVar4._0_4_ = auVar14._0_4_ * *param_3;
      auVar4._8_4_ = auVar14._8_4_ * param_3[2];
      auVar4._12_4_ = auVar14._12_4_ * param_3[3];
      auVar4._16_4_ = auVar14._16_4_ * param_3[4];
      auVar4._20_4_ = auVar14._20_4_ * param_3[5];
      auVar4._24_4_ = auVar14._24_4_ * param_3[6];
      auVar4._28_4_ = in_ZMM2._28_4_;
      auVar14._4_4_ = auVar2._4_4_ * in_R10[1];
      auVar14._0_4_ = auVar2._0_4_ * *in_R10;
      auVar14._8_4_ = auVar2._8_4_ * in_R10[2];
      auVar14._12_4_ = auVar2._12_4_ * in_R10[3];
      auVar14._16_4_ = auVar2._16_4_ * in_R10[4];
      auVar14._20_4_ = auVar2._20_4_ * in_R10[5];
      auVar14._24_4_ = auVar2._24_4_ * in_R10[6];
      auVar14._28_4_ = in_ZMM0._28_4_;
      auVar2 = vsubps_avx(auVar14,auVar4);
      in_R11 = in_R11 + -8;
      param_2 = param_2 + -0x20;
      in_RAX = in_RAX + -8;
      param_4 = param_4 + 8;
      auVar14 = vunpcklps_avx(auVar11,auVar2);
      auVar11 = vunpckhps_avx(auVar11,auVar2);
      in_ZMM2 = ZEXT3264(auVar11);
      auVar2 = vperm2f128_avx(auVar14,auVar11,0x20);
      in_ZMM0 = ZEXT3264(auVar2);
      *param_1 = auVar2;
      auVar11 = vperm2f128_avx(auVar14,auVar11,0x31);
      param_1[1] = auVar11;
      param_1 = param_1 + 2;
      in_R10 = in_R10 + 8;
      param_3 = param_3 + 8;
      unaff_EDI = unaff_EDI + -1;
    } while (unaff_EDI != 0);
  }
  uVar6 = unaff_EBX & 7;
  if (uVar6 != 0) {
    lVar8 = (int64_t)param_4 - (int64_t)param_3;
    lVar9 = (int64_t)in_R10 - (int64_t)param_3;
    do {
      pfVar1 = (float *)(param_2 + -4);
      param_2 = param_2 + -4;
      in_R11 = in_R11 + -1;
      auVar3 = vfmsub132ss_fma(ZEXT416(*in_R11),ZEXT416((uint)(*pfVar1 * *param_3)),
                               ZEXT416(*(uint *)(lVar8 + (int64_t)param_3)));
      *(int *)*param_1 = auVar3._0_4_;
      in_ZMM2 = ZEXT464((uint)((float)in_RAX[-1] * *param_3));
      auVar3 = vfmsub132ss_fma(ZEXT416(*in_R11),ZEXT416((uint)((float)in_RAX[-1] * *param_3)),
                               ZEXT416(*(uint *)(lVar9 + (int64_t)param_3)));
      in_RAX = in_RAX + -1;
      param_3 = param_3 + 1;
      *(int *)(*param_1 + 4) = auVar3._0_4_;
      param_1 = (int8_t (*) [32])(*param_1 + 8);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  auVar5 = ui_system_memory_config;
  for (iVar7 = (int)in_stack_00000070 >> 3; iVar7 != 0; iVar7 = iVar7 + -1) {
    auVar11 = vpermps_avx2(auVar5,*(int8_t (*) [32])(param_2 + -0x20));
    auVar15._0_4_ = auVar11._0_4_ * -1.0;
    auVar15._4_4_ = auVar11._4_4_ * -1.0;
    auVar15._8_4_ = auVar11._8_4_ * -1.0;
    auVar15._12_4_ = auVar11._12_4_ * -1.0;
    auVar15._16_4_ = auVar11._16_4_ * -1.0;
    auVar15._20_4_ = auVar11._20_4_ * -1.0;
    auVar15._28_36_ = in_ZMM4._28_36_;
    auVar15._24_4_ = auVar11._24_4_ * -1.0;
    auVar14 = auVar15._0_32_;
    in_ZMM4 = ZEXT3264(auVar14);
    auVar11 = vpermps_avx2(auVar5,*(int8_t (*) [32])(in_RAX + -8));
    auVar13._0_4_ = auVar11._0_4_ * -1.0;
    auVar13._4_4_ = auVar11._4_4_ * -1.0;
    auVar13._8_4_ = auVar11._8_4_ * -1.0;
    auVar13._12_4_ = auVar11._12_4_ * -1.0;
    auVar13._16_4_ = auVar11._16_4_ * -1.0;
    auVar13._20_4_ = auVar11._20_4_ * -1.0;
    auVar13._28_36_ = in_ZMM2._28_36_;
    auVar13._24_4_ = auVar11._24_4_ * -1.0;
    auVar11 = auVar13._0_32_;
    in_ZMM2 = ZEXT3264(auVar11);
    param_2 = param_2 + -0x20;
    in_RAX = in_RAX + -8;
    auVar2 = vunpcklps_avx(auVar14,auVar11);
    auVar11 = vunpckhps_avx(auVar14,auVar11);
    auVar14 = vperm2f128_avx(auVar2,auVar11,0x20);
    *param_1 = auVar14;
    auVar11 = vperm2f128_avx(auVar2,auVar11,0x31);
    param_1[1] = auVar11;
    param_1 = param_1 + 2;
  }
  in_stack_00000070 = in_stack_00000070 & 7;
  if (in_stack_00000070 != 0) {
    param_2 = param_2 - (int64_t)in_RAX;
    do {
      in_RAX = in_RAX + -1;
      *(uint *)*param_1 = *(uint *)(param_2 + (int64_t)in_RAX) ^ 0x80000000;
      *(uint *)(*param_1 + 4) = *in_RAX ^ 0x80000000;
      in_stack_00000070 = in_stack_00000070 - 1;
      param_1 = (int8_t (*) [32])(*param_1 + 8);
    } while (in_stack_00000070 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18082d566(int8_t (*param_1) [32],int64_t param_2,float *param_3,int64_t param_4)
void FUN_18082d566(int8_t (*param_1) [32],int64_t param_2,float *param_3,int64_t param_4)

{
  float *pfVar1;
  int8_t auVar2 [32];
  int8_t auVar3 [16];
  int8_t auVar4 [32];
  uint *in_RAX;
  int unaff_EBX;
  int iVar5;
  int64_t in_R10;
  int64_t lVar6;
  uint *in_R11;
  int8_t auVar8 [64];
  int8_t auVar9 [64];
  int8_t in_ZMM4 [64];
  int8_t auVar11 [64];
  uint in_stack_00000070;
  int8_t auVar7 [32];
  int8_t auVar10 [32];
  
  param_4 = param_4 - (int64_t)param_3;
  lVar6 = in_R10 - (int64_t)param_3;
  do {
    pfVar1 = (float *)(param_2 + -4);
    param_2 = param_2 + -4;
    in_R11 = in_R11 + -1;
    auVar3 = vfmsub132ss_fma(ZEXT416(*in_R11),ZEXT416((uint)(*pfVar1 * *param_3)),
                             ZEXT416(*(uint *)(param_4 + (int64_t)param_3)));
    *(int *)*param_1 = auVar3._0_4_;
    auVar8 = ZEXT464((uint)((float)in_RAX[-1] * *param_3));
    auVar3 = vfmsub132ss_fma(ZEXT416(*in_R11),ZEXT416((uint)((float)in_RAX[-1] * *param_3)),
                             ZEXT416(*(uint *)(lVar6 + (int64_t)param_3)));
    in_RAX = in_RAX + -1;
    param_3 = param_3 + 1;
    *(int *)(*param_1 + 4) = auVar3._0_4_;
    auVar4 = ui_system_memory_config;
    param_1 = (int8_t (*) [32])(*param_1 + 8);
    unaff_EBX = unaff_EBX + -1;
  } while (unaff_EBX != 0);
  for (iVar5 = (int)in_stack_00000070 >> 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    auVar7 = vpermps_avx2(auVar4,*(int8_t (*) [32])(param_2 + -0x20));
    auVar11._0_4_ = auVar7._0_4_ * -1.0;
    auVar11._4_4_ = auVar7._4_4_ * -1.0;
    auVar11._8_4_ = auVar7._8_4_ * -1.0;
    auVar11._12_4_ = auVar7._12_4_ * -1.0;
    auVar11._16_4_ = auVar7._16_4_ * -1.0;
    auVar11._20_4_ = auVar7._20_4_ * -1.0;
    auVar11._28_36_ = in_ZMM4._28_36_;
    auVar11._24_4_ = auVar7._24_4_ * -1.0;
    auVar10 = auVar11._0_32_;
    in_ZMM4 = ZEXT3264(auVar10);
    auVar7 = vpermps_avx2(auVar4,*(int8_t (*) [32])(in_RAX + -8));
    auVar9._0_4_ = auVar7._0_4_ * -1.0;
    auVar9._4_4_ = auVar7._4_4_ * -1.0;
    auVar9._8_4_ = auVar7._8_4_ * -1.0;
    auVar9._12_4_ = auVar7._12_4_ * -1.0;
    auVar9._16_4_ = auVar7._16_4_ * -1.0;
    auVar9._20_4_ = auVar7._20_4_ * -1.0;
    auVar9._28_36_ = auVar8._28_36_;
    auVar9._24_4_ = auVar7._24_4_ * -1.0;
    auVar7 = auVar9._0_32_;
    auVar8 = ZEXT3264(auVar7);
    param_2 = param_2 + -0x20;
    in_RAX = in_RAX + -8;
    auVar2 = vunpcklps_avx(auVar10,auVar7);
    auVar7 = vunpckhps_avx(auVar10,auVar7);
    auVar10 = vperm2f128_avx(auVar2,auVar7,0x20);
    *param_1 = auVar10;
    auVar7 = vperm2f128_avx(auVar2,auVar7,0x31);
    param_1[1] = auVar7;
    param_1 = param_1 + 2;
  }
  in_stack_00000070 = in_stack_00000070 & 7;
  if (in_stack_00000070 != 0) {
    param_2 = param_2 - (int64_t)in_RAX;
    do {
      in_RAX = in_RAX + -1;
      *(uint *)*param_1 = *(uint *)(param_2 + (int64_t)in_RAX) ^ 0x80000000;
      *(uint *)(*param_1 + 4) = *in_RAX ^ 0x80000000;
      in_stack_00000070 = in_stack_00000070 - 1;
      param_1 = (int8_t (*) [32])(*param_1 + 8);
    } while (in_stack_00000070 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18082d5d2(int8_t (*param_1) [32],int64_t param_2,uint param_3,int param_4)
void FUN_18082d5d2(int8_t (*param_1) [32],int64_t param_2,uint param_3,int param_4)

{
  int8_t auVar1 [32];
  int8_t auVar2 [32];
  uint *in_RAX;
  int8_t in_ZMM2 [64];
  int8_t auVar4 [64];
  int8_t in_ZMM4 [64];
  int8_t auVar6 [64];
  int8_t auVar3 [32];
  int8_t auVar5 [32];
  
  auVar2 = ui_system_memory_config;
  do {
    auVar3 = vpermps_avx2(auVar2,*(int8_t (*) [32])(param_2 + -0x20));
    auVar6._0_4_ = auVar3._0_4_ * -1.0;
    auVar6._4_4_ = auVar3._4_4_ * -1.0;
    auVar6._8_4_ = auVar3._8_4_ * -1.0;
    auVar6._12_4_ = auVar3._12_4_ * -1.0;
    auVar6._16_4_ = auVar3._16_4_ * -1.0;
    auVar6._20_4_ = auVar3._20_4_ * -1.0;
    auVar6._28_36_ = in_ZMM4._28_36_;
    auVar6._24_4_ = auVar3._24_4_ * -1.0;
    auVar5 = auVar6._0_32_;
    in_ZMM4 = ZEXT3264(auVar5);
    auVar3 = vpermps_avx2(auVar2,*(int8_t (*) [32])(in_RAX + -8));
    auVar4._0_4_ = auVar3._0_4_ * -1.0;
    auVar4._4_4_ = auVar3._4_4_ * -1.0;
    auVar4._8_4_ = auVar3._8_4_ * -1.0;
    auVar4._12_4_ = auVar3._12_4_ * -1.0;
    auVar4._16_4_ = auVar3._16_4_ * -1.0;
    auVar4._20_4_ = auVar3._20_4_ * -1.0;
    auVar4._28_36_ = in_ZMM2._28_36_;
    auVar4._24_4_ = auVar3._24_4_ * -1.0;
    auVar3 = auVar4._0_32_;
    in_ZMM2 = ZEXT3264(auVar3);
    param_2 = param_2 + -0x20;
    in_RAX = in_RAX + -8;
    auVar1 = vunpcklps_avx(auVar5,auVar3);
    auVar3 = vunpckhps_avx(auVar5,auVar3);
    auVar5 = vperm2f128_avx(auVar1,auVar3,0x20);
    *param_1 = auVar5;
    auVar3 = vperm2f128_avx(auVar1,auVar3,0x31);
    param_1[1] = auVar3;
    param_1 = param_1 + 2;
    param_4 = param_4 + -1;
  } while (param_4 != 0);
  param_3 = param_3 & 7;
  if (param_3 != 0) {
    param_2 = param_2 - (int64_t)in_RAX;
    do {
      in_RAX = in_RAX + -1;
      *(uint *)*param_1 = *(uint *)(param_2 + (int64_t)in_RAX) ^ 0x80000000;
      *(uint *)(*param_1 + 4) = *in_RAX ^ 0x80000000;
      param_3 = param_3 - 1;
      param_1 = (int8_t (*) [32])(*param_1 + 8);
    } while (param_3 != 0);
  }
  return;
}





// 函数: void FUN_18082d63e(uint *param_1,int64_t param_2,int param_3)
void FUN_18082d63e(uint *param_1,int64_t param_2,int param_3)

{
  uint *in_RAX;
  
  param_2 = param_2 - (int64_t)in_RAX;
  do {
    in_RAX = in_RAX + -1;
    *param_1 = *(uint *)(param_2 + (int64_t)in_RAX) ^ 0x80000000;
    param_1[1] = *in_RAX ^ 0x80000000;
    param_3 = param_3 + -1;
    param_1 = param_1 + 2;
  } while (param_3 != 0);
  return;
}



uint FUN_18082d710(int *param_1,uint param_2)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  
  if (0x20 < param_2) {
    return 0xffffffff;
  }
  iVar1 = param_1[1];
  iVar5 = param_2 + iVar1;
  if (param_1[6] + -4 <= *param_1) {
    if (param_1[6] - (iVar5 + 7 >> 3) < *param_1) {
      return 0xffffffff;
    }
    if (iVar5 == 0) {
      return 0;
    }
  }
  pbVar2 = *(byte **)(param_1 + 4);
  bVar3 = (byte)iVar1;
  uVar4 = (uint)(*pbVar2 >> (bVar3 & 0x1f));
  if ((((8 < iVar5) && (uVar4 = uVar4 | (uint)pbVar2[1] << (8 - bVar3 & 0x1f), 0x10 < iVar5)) &&
      (uVar4 = uVar4 | (uint)pbVar2[2] << (0x10 - bVar3 & 0x1f), 0x18 < iVar5)) &&
     ((uVar4 = uVar4 | (uint)pbVar2[3] << (0x18 - bVar3 & 0x1f), 0x20 < iVar5 && (iVar1 != 0)))) {
    uVar4 = uVar4 | (uint)pbVar2[4] << (0x20 - bVar3 & 0x1f);
  }
  return uVar4 & *(uint *)(&processed_var_4080_ptr + (int64_t)(int)param_2 * 4);
}



uint SystemCore_Optimizer(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  
  if (param_2 < 0x21) {
    iVar4 = param_1[1];
    uVar1 = *(uint *)(&processed_var_4080_ptr + (int64_t)(int)param_2 * 4);
    param_2 = param_2 + iVar4;
    iVar2 = *param_1;
    if (param_1[6] + -4 <= iVar2) {
      if (param_1[6] - ((int)(param_2 + 7) >> 3) < iVar2) goto FUN_18082d8f1;
      if (param_2 == 0) {
        return 0;
      }
    }
    pbVar3 = *(byte **)(param_1 + 4);
    bVar5 = (byte)iVar4;
    uVar6 = (uint)(*pbVar3 >> (bVar5 & 0x1f));
    if ((((8 < (int)param_2) &&
         (uVar6 = uVar6 | (uint)pbVar3[1] << (8 - bVar5 & 0x1f), 0x10 < (int)param_2)) &&
        (uVar6 = uVar6 | (uint)pbVar3[2] << (0x10 - bVar5 & 0x1f), 0x18 < (int)param_2)) &&
       ((uVar6 = uVar6 | (uint)pbVar3[3] << (0x18 - bVar5 & 0x1f), 0x20 < (int)param_2 &&
        (iVar4 != 0)))) {
      uVar6 = uVar6 | (uint)pbVar3[4] << (0x20 - bVar5 & 0x1f);
    }
    param_1[1] = param_2 & 7;
    iVar4 = (int)(param_2 + ((int)param_2 >> 0x1f & 7U)) >> 3;
    *(byte **)(param_1 + 4) = pbVar3 + iVar4;
    *param_1 = iVar4 + iVar2;
    return uVar6 & uVar1;
  }
FUN_18082d8f1:
  *param_1 = param_1[6];
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[1] = 1;
  return 0xffffffff;
}



uint FUN_18082d848(uint64_t param_1,byte param_2,uint param_3,int *param_4)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  uint unaff_ESI;
  int unaff_EDI;
  uint uVar4;
  int in_R11D;
  
  pbVar1 = *(byte **)(param_4 + 4);
  uVar4 = (uint)(*pbVar1 >> (param_2 & 0x1f));
  if ((((8 < (int)param_3) &&
       (cVar2 = (char)in_R11D, uVar4 = uVar4 | (uint)pbVar1[1] << (8U - cVar2 & 0x1f),
       0x10 < (int)param_3)) &&
      (uVar4 = uVar4 | (uint)pbVar1[2] << (0x10U - cVar2 & 0x1f), 0x18 < (int)param_3)) &&
     ((uVar4 = uVar4 | (uint)pbVar1[3] << (0x18U - cVar2 & 0x1f), 0x20 < (int)param_3 &&
      (in_R11D != 0)))) {
    uVar4 = uVar4 | (uint)pbVar1[4] << (0x20U - cVar2 & 0x1f);
  }
  param_4[1] = param_3 & 7;
  iVar3 = (int)(param_3 + ((int)param_3 >> 0x1f & 7U)) >> 3;
  *(byte **)(param_4 + 4) = pbVar1 + iVar3;
  *param_4 = iVar3 + unaff_EDI;
  return uVar4 & unaff_ESI;
}



uint64_t FUN_18082d8f1(void)

{
  int32_t *in_R9;
  
  *in_R9 = in_R9[6];
  *(uint64_t *)(in_R9 + 4) = 0;
  in_R9[1] = 1;
  return 0xffffffff;
}





// 函数: void FUN_18082d940(uint64_t param_1,uint64_t *param_2)
void FUN_18082d940(uint64_t param_1,uint64_t *param_2)

{
  if (param_2[3] != 0) {
                    // WARNING: Subroutine does not return
    RenderingSystem_CoreProcessor0();
  }
  if (param_2[4] != 0) {
                    // WARNING: Subroutine does not return
    RenderingSystem_CoreProcessor0(param_1);
  }
  if (param_2[5] != 0) {
                    // WARNING: Subroutine does not return
    RenderingSystem_CoreProcessor0(param_1);
  }
  if (param_2[6] != 0) {
                    // WARNING: Subroutine does not return
    RenderingSystem_CoreProcessor0(param_1);
  }
  if (param_2[7] != 0) {
                    // WARNING: Subroutine does not return
    RenderingSystem_CoreProcessor0(param_1);
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18082d9e0(uint64_t param_1,uint64_t *param_2,int32_t *param_3)
void FUN_18082d9e0(uint64_t param_1,uint64_t *param_2,int32_t *param_3)

{
  int *piVar1;
  uint uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint64_t auStack_48 [2];
  uint64_t uStack_38;
  
  uVar3 = GET_SECURITY_COOKIE();
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_48;
  uVar4 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  uVar2 = param_3[1];
  uVar7 = uVar4;
  uVar8 = uVar4;
  if ((0 < (int)uVar2) && (uVar7 = 0, uVar8 = 0, 7 < uVar2)) {
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar5 = uVar2 & 0x80000007;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
    }
    uVar7 = uVar4;
    do {
      piVar1 = (int *)(*(int64_t *)(param_3 + 2) + uVar4 * 4);
      uVar7 = (uint64_t)((int)uVar7 + 8);
      uVar13 = uVar13 + 1 & -(uint)(0 < *piVar1) | ~-(uint)(0 < *piVar1) & uVar13;
      uVar14 = uVar14 + 1 & -(uint)(0 < piVar1[1]) | ~-(uint)(0 < piVar1[1]) & uVar14;
      uVar15 = uVar15 + 1 & -(uint)(0 < piVar1[2]) | ~-(uint)(0 < piVar1[2]) & uVar15;
      uVar16 = uVar16 + 1 & -(uint)(0 < piVar1[3]) | ~-(uint)(0 < piVar1[3]) & uVar16;
      piVar1 = (int *)(*(int64_t *)(param_3 + 2) + 0x10 + uVar4 * 4);
      uVar4 = uVar4 + 8;
      uVar9 = uVar9 + 1 & -(uint)(0 < *piVar1) | ~-(uint)(0 < *piVar1) & uVar9;
      uVar10 = uVar10 + 1 & -(uint)(0 < piVar1[1]) | ~-(uint)(0 < piVar1[1]) & uVar10;
      uVar11 = uVar11 + 1 & -(uint)(0 < piVar1[2]) | ~-(uint)(0 < piVar1[2]) & uVar11;
      uVar12 = uVar12 + 1 & -(uint)(0 < piVar1[3]) | ~-(uint)(0 < piVar1[3]) & uVar12;
    } while ((int64_t)uVar4 < (int64_t)(int)(uVar2 - uVar5));
    uVar8 = (uint64_t)(uVar9 + uVar13 + uVar11 + uVar15 + uVar10 + uVar14 + uVar12 + uVar16);
  }
  uVar5 = (uint)uVar8;
  lVar6 = (int64_t)(int)uVar7;
  if (lVar6 < (int)uVar2) {
    do {
      uVar5 = (uint)uVar8 + 1;
      if (*(int *)(*(int64_t *)(param_3 + 2) + lVar6 * 4) < 1) {
        uVar5 = (uint)uVar8;
      }
      lVar6 = lVar6 + 1;
      uVar8 = (uint64_t)uVar5;
    } while (lVar6 < (int)uVar2);
  }
  *(uint *)((int64_t)param_2 + 4) = uVar2;
  *(uint *)(param_2 + 1) = uVar5;
  *(int32_t *)param_2 = *param_3;
  if (0 < (int)uVar5) {
    auStack_48[0] = FUN_18082e5c0(param_1,*(uint64_t *)(param_3 + 2),param_3[1],uVar5);
                    // WARNING: Subroutine does not return
    SystemCore_MemoryManager0();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uVar3);
}





