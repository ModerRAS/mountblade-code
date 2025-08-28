#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part291.c - 4 个函数

// 函数: void FUN_18082cb48(uint64_t param_1,int param_2,int param_3,int64_t param_4)
void FUN_18082cb48(uint64_t param_1,int param_2,int param_3,int64_t param_4)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  int8_t auVar7 [32];
  int8_t auVar8 [32];
  int8_t auVar9 [32];
  int8_t auVar10 [32];
  int8_t auVar11 [32];
  int8_t auVar12 [32];
  int8_t auVar13 [16];
  int8_t auVar14 [32];
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int in_EAX;
  int iVar23;
  int iVar24;
  int64_t lVar25;
  float *pfVar26;
  uint *puVar27;
  float *unaff_RBX;
  int64_t unaff_RDI;
  int iVar28;
  int iVar29;
  float *in_R10;
  float *in_R11;
  int iVar30;
  int iVar31;
  int iVar32;
  int64_t unaff_R14;
  int iVar33;
  int8_t in_ZMM4 [64];
  int8_t auVar34 [64];
  int8_t in_ZMM5 [64];
  int8_t auVar35 [64];
  int8_t in_ZMM6 [64];
  int8_t auVar36 [64];
  int8_t in_ZMM7 [64];
  int8_t auVar37 [64];
  int8_t in_ZMM8 [64];
  int8_t auVar38 [64];
  int8_t in_ZMM9 [64];
  int8_t auVar39 [64];
  int8_t auVar40 [32];
  int8_t in_ZMM10 [64];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  int64_t in_stack_00000150;
  float *in_stack_00000168;
  int in_stack_00000170;
  int in_stack_00000180;
  uint in_stack_00000198;
  uint in_stack_000001a0;
  
  do {
    auVar40 = in_ZMM10._0_32_;
    auVar10 = vpermps_avx2(auVar40,*(int8_t (*) [32])(unaff_RDI + -0x20));
    fVar5 = *unaff_RBX;
    fVar17 = unaff_RBX[1];
    fVar18 = unaff_RBX[2];
    fVar19 = unaff_RBX[3];
    fVar20 = unaff_RBX[4];
    fVar21 = unaff_RBX[5];
    fVar22 = unaff_RBX[6];
    unaff_RDI = unaff_RDI + -0x20;
    in_R10 = in_R10 + -8;
    if (in_EAX >> 2 != 0) {
      lVar25 = (int64_t)param_2;
      iVar33 = 0x800;
      iVar31 = 0x400;
      iVar15 = param_2 * 2;
      iVar24 = param_2 * 3;
      iVar28 = param_2 * 4;
      iVar4 = param_2 * 5;
      iVar16 = param_2 * 6;
      iVar23 = param_2 * 7;
      iVar30 = 0;
      iVar32 = in_EAX >> 2;
      do {
        pfVar26 = (float *)(param_4 + (int64_t)(iVar31 + -0x400) * 4);
        fVar41 = auVar10._0_4_;
        auVar36._0_4_ = fVar41 * *pfVar26;
        fVar42 = auVar10._4_4_;
        auVar36._4_4_ = fVar42 * pfVar26[1];
        fVar43 = auVar10._8_4_;
        auVar36._8_4_ = fVar43 * pfVar26[2];
        fVar44 = auVar10._12_4_;
        auVar36._12_4_ = fVar44 * pfVar26[3];
        fVar45 = auVar10._16_4_;
        auVar36._16_4_ = fVar45 * pfVar26[4];
        fVar46 = auVar10._20_4_;
        auVar36._20_4_ = fVar46 * pfVar26[5];
        auVar36._28_36_ = in_ZMM6._28_36_;
        fVar47 = auVar10._24_4_;
        auVar36._24_4_ = fVar47 * pfVar26[6];
        in_ZMM6 = ZEXT3264(auVar36._0_32_);
        pfVar2 = (float *)(param_4 + (int64_t)(iVar31 + -0x200) * 4);
        pfVar3 = (float *)(param_4 + (int64_t)iVar31 * 4);
        auVar38._0_4_ = fVar41 * *pfVar3;
        auVar38._4_4_ = fVar42 * pfVar3[1];
        auVar38._8_4_ = fVar43 * pfVar3[2];
        auVar38._12_4_ = fVar44 * pfVar3[3];
        auVar38._16_4_ = fVar45 * pfVar3[4];
        auVar38._20_4_ = fVar46 * pfVar3[5];
        auVar38._28_36_ = in_ZMM8._28_36_;
        auVar38._24_4_ = fVar47 * pfVar3[6];
        in_ZMM8 = ZEXT3264(auVar38._0_32_);
        auVar37._0_4_ = fVar41 * *pfVar2;
        auVar37._4_4_ = fVar42 * pfVar2[1];
        auVar37._8_4_ = fVar43 * pfVar2[2];
        auVar37._12_4_ = fVar44 * pfVar2[3];
        auVar37._16_4_ = fVar45 * pfVar2[4];
        auVar37._20_4_ = fVar46 * pfVar2[5];
        auVar37._28_36_ = in_ZMM7._28_36_;
        auVar37._24_4_ = fVar47 * pfVar2[6];
        in_ZMM7 = ZEXT3264(auVar37._0_32_);
        iVar29 = iVar31 + 0x200;
        iVar31 = iVar31 + 0x800;
        pfVar2 = (float *)(param_4 + (int64_t)iVar29 * 4);
        auVar39._0_4_ = fVar41 * *pfVar2;
        auVar39._4_4_ = fVar42 * pfVar2[1];
        auVar39._8_4_ = fVar43 * pfVar2[2];
        auVar39._12_4_ = fVar44 * pfVar2[3];
        auVar39._16_4_ = fVar45 * pfVar2[4];
        auVar39._20_4_ = fVar46 * pfVar2[5];
        auVar39._28_36_ = in_ZMM9._28_36_;
        auVar39._24_4_ = fVar47 * pfVar2[6];
        in_ZMM9 = ZEXT3264(auVar39._0_32_);
        auVar11 = vpermps_avx2(auVar40,*(int8_t (*) [32])(in_R10 + (iVar33 + -0x800)));
        auVar35._0_4_ = auVar11._0_4_ * fVar5;
        auVar35._4_4_ = auVar11._4_4_ * fVar17;
        auVar35._8_4_ = auVar11._8_4_ * fVar18;
        auVar35._12_4_ = auVar11._12_4_ * fVar19;
        auVar35._16_4_ = auVar11._16_4_ * fVar20;
        auVar35._20_4_ = auVar11._20_4_ * fVar21;
        auVar35._28_36_ = in_ZMM5._28_36_;
        auVar35._24_4_ = auVar11._24_4_ * fVar22;
        auVar11 = vpermps_avx2(auVar40,*(int8_t (*) [32])(in_R10 + (iVar33 + -0x400)));
        auVar14._4_4_ = auVar11._4_4_ * fVar17;
        auVar14._0_4_ = auVar11._0_4_ * fVar5;
        auVar14._8_4_ = auVar11._8_4_ * fVar18;
        auVar14._12_4_ = auVar11._12_4_ * fVar19;
        auVar14._16_4_ = auVar11._16_4_ * fVar20;
        auVar14._20_4_ = auVar11._20_4_ * fVar21;
        auVar14._24_4_ = auVar11._24_4_ * fVar22;
        auVar14._28_4_ = pfVar26[7];
        auVar11 = vpermps_avx2(auVar40,*(int8_t (*) [32])(in_R10 + iVar33));
        auVar12._4_4_ = auVar11._4_4_ * fVar17;
        auVar12._0_4_ = auVar11._0_4_ * fVar5;
        auVar12._8_4_ = auVar11._8_4_ * fVar18;
        auVar12._12_4_ = auVar11._12_4_ * fVar19;
        auVar12._16_4_ = auVar11._16_4_ * fVar20;
        auVar12._20_4_ = auVar11._20_4_ * fVar21;
        auVar12._24_4_ = auVar11._24_4_ * fVar22;
        auVar12._28_4_ = SUB324(*(int8_t (*) [32])(in_R10 + iVar33),0x1c);
        auVar7 = vsubps_avx(auVar36._0_32_,auVar35._0_32_);
        auVar8 = vsubps_avx(auVar38._0_32_,auVar12);
        iVar29 = iVar33 + 0x400;
        iVar33 = iVar33 + 0x1000;
        auVar12 = vpermps_avx2(auVar40,*(int8_t (*) [32])(in_R10 + iVar29));
        auVar9._4_4_ = auVar12._4_4_ * fVar17;
        auVar9._0_4_ = auVar12._0_4_ * fVar5;
        auVar9._8_4_ = auVar12._8_4_ * fVar18;
        auVar9._12_4_ = auVar12._12_4_ * fVar19;
        auVar9._16_4_ = auVar12._16_4_ * fVar20;
        auVar9._20_4_ = auVar12._20_4_ * fVar21;
        auVar9._24_4_ = auVar12._24_4_ * fVar22;
        auVar9._28_4_ = auVar11._28_4_;
        auVar9 = vsubps_avx(auVar39._0_32_,auVar9);
        auVar12 = vsubps_avx(auVar37._0_32_,auVar14);
        auVar11 = vshufps_avx(auVar7,auVar12,0x44);
        auVar7 = vshufps_avx(auVar7,auVar12,0xee);
        in_ZMM4 = ZEXT3264(auVar7);
        auVar12 = vshufps_avx(auVar8,auVar9,0xee);
        auVar8 = vshufps_avx(auVar8,auVar9,0x44);
        auVar9 = vshufps_avx(auVar11,auVar8,0x88);
        auVar11 = vshufps_avx(auVar11,auVar8,0xdd);
        in_ZMM5 = ZEXT3264(auVar11);
        auVar8 = vshufps_avx(auVar7,auVar12,0x88);
        *(int8_t (*) [16])(in_R11 + iVar30) = auVar9._0_16_;
        *(int8_t (*) [16])(in_R11 + lVar25 + iVar30) = auVar11._0_16_;
        *(int8_t (*) [16])(in_R11 + (int64_t)iVar15 + (int64_t)iVar30) = auVar8._0_16_;
        auVar7 = vshufps_avx(auVar7,auVar12,0xdd);
        *(int8_t (*) [16])(in_R11 + (int64_t)iVar24 + (int64_t)iVar30) = auVar7._0_16_;
        *(int8_t (*) [16])(in_R11 + (int64_t)iVar28 + (int64_t)iVar30) = auVar9._16_16_;
        *(int8_t (*) [16])(in_R11 + (int64_t)iVar4 + (int64_t)iVar30) = auVar11._16_16_;
        *(int8_t (*) [16])(in_R11 + (int64_t)iVar16 + (int64_t)iVar30) = auVar8._16_16_;
        *(int8_t (*) [16])(in_R11 + (int64_t)iVar23 + (int64_t)iVar30) = auVar7._16_16_;
        iVar32 = iVar32 + -1;
        unaff_RBX = in_stack_00000168;
        param_2 = in_stack_00000180;
        iVar30 = iVar30 + 4;
        param_3 = in_stack_00000170;
      } while (iVar32 != 0);
    }
    unaff_RBX = unaff_RBX + 8;
    in_R11 = in_R11 + unaff_R14;
    param_4 = param_4 + 0x20;
    param_3 = param_3 + -1;
    in_stack_00000168 = unaff_RBX;
    in_stack_00000170 = param_3;
  } while (param_3 != 0);
  in_stack_00000198 = in_stack_00000198 & 7;
  if (in_stack_00000198 != 0) {
    lVar25 = unaff_RDI - (int64_t)in_R10;
    param_4 = param_4 - (int64_t)unaff_RBX;
    pfVar26 = in_R10;
    do {
      fVar5 = *unaff_RBX;
      in_R10 = pfVar26 + -1;
      uVar6 = *(uint *)((int64_t)pfVar26 + lVar25 + -4);
      if (param_2 != 0) {
        puVar27 = (uint *)(param_4 + (int64_t)unaff_RBX);
        pfVar26 = in_R10;
        iVar28 = param_2;
        do {
          auVar13 = vfmsub213ss_fma(ZEXT416(*puVar27),ZEXT416(uVar6),
                                    ZEXT416((uint)(fVar5 * *pfVar26)));
          *in_R11 = auVar13._0_4_;
          in_R11 = in_R11 + 1;
          puVar27 = puVar27 + 0x200;
          pfVar26 = pfVar26 + 0x400;
          iVar28 = iVar28 + -1;
        } while (iVar28 != 0);
      }
      unaff_RBX = unaff_RBX + 1;
      in_stack_00000198 = in_stack_00000198 - 1;
      pfVar26 = in_R10;
    } while (in_stack_00000198 != 0);
  }
  iVar28 = (int)in_stack_000001a0 >> 3;
  if (iVar28 != 0) {
    iVar24 = param_2 >> 2;
    do {
      in_R10 = in_R10 + -8;
      if (iVar24 != 0) {
        iVar32 = param_2 * 2;
        lVar25 = (int64_t)param_2;
        iVar29 = 0x800;
        iVar15 = param_2 * 3;
        iVar4 = param_2 * 4;
        iVar16 = param_2 * 5;
        iVar30 = param_2 * 6;
        iVar33 = param_2 * 7;
        iVar31 = 0;
        iVar23 = iVar24;
        do {
          pfVar26 = in_R10 + (iVar29 + -0x800);
          auVar40._4_4_ = pfVar26[1] * -1.0;
          auVar40._0_4_ = *pfVar26 * -1.0;
          auVar40._8_4_ = pfVar26[2] * -1.0;
          auVar40._12_4_ = pfVar26[3] * -1.0;
          auVar40._16_4_ = pfVar26[4] * -1.0;
          auVar40._20_4_ = pfVar26[5] * -1.0;
          auVar40._24_4_ = pfVar26[6] * -1.0;
          auVar40._28_4_ = pfVar26[7];
          pfVar26 = in_R10 + (iVar29 + -0x400);
          pfVar2 = in_R10 + iVar29;
          auVar34._0_4_ = *pfVar2 * -1.0;
          auVar34._4_4_ = pfVar2[1] * -1.0;
          auVar34._8_4_ = pfVar2[2] * -1.0;
          auVar34._12_4_ = pfVar2[3] * -1.0;
          auVar34._16_4_ = pfVar2[4] * -1.0;
          auVar34._20_4_ = pfVar2[5] * -1.0;
          auVar34._28_36_ = in_ZMM4._28_36_;
          auVar34._24_4_ = pfVar2[6] * -1.0;
          iVar1 = iVar29 + 0x400;
          iVar29 = iVar29 + 0x1000;
          auVar11._4_4_ = pfVar26[1] * -1.0;
          auVar11._0_4_ = *pfVar26 * -1.0;
          auVar11._8_4_ = pfVar26[2] * -1.0;
          auVar11._12_4_ = pfVar26[3] * -1.0;
          auVar11._16_4_ = pfVar26[4] * -1.0;
          auVar11._20_4_ = pfVar26[5] * -1.0;
          auVar11._24_4_ = pfVar26[6] * -1.0;
          auVar11._28_4_ = pfVar26[7];
          auVar10 = vshufps_avx(auVar40,auVar11,0x44);
          auVar40 = vshufps_avx(auVar40,auVar11,0xee);
          pfVar26 = in_R10 + iVar1;
          auVar8._4_4_ = pfVar26[1] * -1.0;
          auVar8._0_4_ = *pfVar26 * -1.0;
          auVar8._8_4_ = pfVar26[2] * -1.0;
          auVar8._12_4_ = pfVar26[3] * -1.0;
          auVar8._16_4_ = pfVar26[4] * -1.0;
          auVar8._20_4_ = pfVar26[5] * -1.0;
          auVar8._24_4_ = pfVar26[6] * -1.0;
          auVar8._28_4_ = pfVar2[7];
          auVar11 = vshufps_avx(auVar34._0_32_,auVar8,0x44);
          auVar7 = vshufps_avx(auVar10,auVar11,0x88);
          auVar10 = vshufps_avx(auVar10,auVar11,0xdd);
          auVar11 = vshufps_avx(auVar34._0_32_,auVar8,0xee);
          auVar12 = vshufps_avx(auVar40,auVar11,0xdd);
          *(int8_t (*) [16])(in_R11 + iVar31) = auVar12._16_16_;
          auVar40 = vshufps_avx(auVar40,auVar11,0x88);
          in_ZMM4 = ZEXT3264(auVar40);
          *(int8_t (*) [16])(in_R11 + lVar25 + iVar31) = auVar40._16_16_;
          *(int8_t (*) [16])(in_R11 + (int64_t)iVar32 + (int64_t)iVar31) = auVar10._16_16_;
          *(int8_t (*) [16])(in_R11 + (int64_t)iVar15 + (int64_t)iVar31) = auVar7._16_16_;
          *(int8_t (*) [16])(in_R11 + (int64_t)iVar31 + (int64_t)iVar4) = auVar12._0_16_;
          *(int8_t (*) [16])(in_R11 + (int64_t)iVar16 + (int64_t)iVar31) = auVar40._0_16_;
          *(int8_t (*) [16])(in_R11 + (int64_t)iVar30 + (int64_t)iVar31) = auVar10._0_16_;
          *(int8_t (*) [16])(in_R11 + (int64_t)iVar33 + (int64_t)iVar31) = auVar7._0_16_;
          iVar23 = iVar23 + -1;
          param_2 = in_stack_00000180;
          iVar31 = iVar31 + 4;
        } while (iVar23 != 0);
      }
      in_R11 = in_R11 + in_stack_00000150;
      iVar28 = iVar28 + -1;
    } while (iVar28 != 0);
  }
  in_stack_000001a0 = in_stack_000001a0 & 7;
  if (in_stack_000001a0 != 0) {
    do {
      in_R10 = in_R10 + -1;
      pfVar26 = in_R10;
      for (iVar28 = param_2; iVar28 != 0; iVar28 = iVar28 + -1) {
        *in_R11 = -*pfVar26;
        in_R11 = in_R11 + 1;
        pfVar26 = pfVar26 + 0x400;
      }
      in_stack_000001a0 = in_stack_000001a0 - 1;
    } while (in_stack_000001a0 != 0);
    return;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018082cfee)
// WARNING: Removing unreachable block (ram,0x00018082d01e)
// WARNING: Removing unreachable block (ram,0x00018082cffe)
// WARNING: Removing unreachable block (ram,0x00018082d00e)



// 函数: void FUN_18082cdff(uint64_t param_1,int param_2,uint64_t param_3,int64_t param_4)
void FUN_18082cdff(uint64_t param_1,int param_2,uint64_t param_3,int64_t param_4)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  int8_t auVar6 [32];
  int8_t auVar7 [32];
  int8_t auVar8 [32];
  int8_t auVar9 [32];
  int8_t auVar10 [32];
  int8_t auVar11 [16];
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float *pfVar18;
  uint *puVar19;
  int iVar20;
  float *unaff_RBX;
  uint unaff_ESI;
  uint uVar21;
  int64_t unaff_RDI;
  int64_t lVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  float *in_R10;
  float *in_R11;
  int8_t in_ZMM4 [64];
  int8_t auVar26 [64];
  int64_t in_stack_00000150;
  int in_stack_00000180;
  uint in_stack_000001a0;
  
  uVar21 = unaff_ESI & 7;
  if (uVar21 != 0) {
    lVar22 = unaff_RDI - (int64_t)in_R10;
    param_4 = param_4 - (int64_t)unaff_RBX;
    pfVar18 = in_R10;
    do {
      fVar4 = *unaff_RBX;
      in_R10 = pfVar18 + -1;
      uVar5 = *(uint *)((int64_t)pfVar18 + lVar22 + -4);
      if (param_2 != 0) {
        puVar19 = (uint *)(param_4 + (int64_t)unaff_RBX);
        pfVar18 = in_R10;
        iVar23 = param_2;
        do {
          auVar11 = vfmsub213ss_fma(ZEXT416(*puVar19),ZEXT416(uVar5),
                                    ZEXT416((uint)(fVar4 * *pfVar18)));
          *in_R11 = auVar11._0_4_;
          in_R11 = in_R11 + 1;
          puVar19 = puVar19 + 0x200;
          pfVar18 = pfVar18 + 0x400;
          iVar23 = iVar23 + -1;
        } while (iVar23 != 0);
      }
      unaff_RBX = unaff_RBX + 1;
      uVar21 = uVar21 - 1;
      pfVar18 = in_R10;
    } while (uVar21 != 0);
  }
  iVar23 = (int)in_stack_000001a0 >> 3;
  if (iVar23 != 0) {
    iVar16 = param_2 >> 2;
    do {
      in_R10 = in_R10 + -8;
      if (iVar16 != 0) {
        iVar14 = param_2 * 2;
        lVar22 = (int64_t)param_2;
        iVar24 = 0x800;
        iVar12 = param_2 * 3;
        iVar3 = param_2 * 4;
        iVar13 = param_2 * 5;
        iVar15 = param_2 * 6;
        iVar17 = param_2 * 7;
        iVar20 = 0;
        iVar25 = iVar16;
        do {
          pfVar18 = in_R10 + (iVar24 + -0x800);
          auVar7._4_4_ = pfVar18[1] * -1.0;
          auVar7._0_4_ = *pfVar18 * -1.0;
          auVar7._8_4_ = pfVar18[2] * -1.0;
          auVar7._12_4_ = pfVar18[3] * -1.0;
          auVar7._16_4_ = pfVar18[4] * -1.0;
          auVar7._20_4_ = pfVar18[5] * -1.0;
          auVar7._24_4_ = pfVar18[6] * -1.0;
          auVar7._28_4_ = pfVar18[7];
          pfVar18 = in_R10 + (iVar24 + -0x400);
          pfVar2 = in_R10 + iVar24;
          auVar26._0_4_ = *pfVar2 * -1.0;
          auVar26._4_4_ = pfVar2[1] * -1.0;
          auVar26._8_4_ = pfVar2[2] * -1.0;
          auVar26._12_4_ = pfVar2[3] * -1.0;
          auVar26._16_4_ = pfVar2[4] * -1.0;
          auVar26._20_4_ = pfVar2[5] * -1.0;
          auVar26._28_36_ = in_ZMM4._28_36_;
          auVar26._24_4_ = pfVar2[6] * -1.0;
          iVar1 = iVar24 + 0x400;
          iVar24 = iVar24 + 0x1000;
          auVar8._4_4_ = pfVar18[1] * -1.0;
          auVar8._0_4_ = *pfVar18 * -1.0;
          auVar8._8_4_ = pfVar18[2] * -1.0;
          auVar8._12_4_ = pfVar18[3] * -1.0;
          auVar8._16_4_ = pfVar18[4] * -1.0;
          auVar8._20_4_ = pfVar18[5] * -1.0;
          auVar8._24_4_ = pfVar18[6] * -1.0;
          auVar8._28_4_ = pfVar18[7];
          auVar6 = vshufps_avx(auVar7,auVar8,0x44);
          auVar7 = vshufps_avx(auVar7,auVar8,0xee);
          pfVar18 = in_R10 + iVar1;
          auVar10._4_4_ = pfVar18[1] * -1.0;
          auVar10._0_4_ = *pfVar18 * -1.0;
          auVar10._8_4_ = pfVar18[2] * -1.0;
          auVar10._12_4_ = pfVar18[3] * -1.0;
          auVar10._16_4_ = pfVar18[4] * -1.0;
          auVar10._20_4_ = pfVar18[5] * -1.0;
          auVar10._24_4_ = pfVar18[6] * -1.0;
          auVar10._28_4_ = pfVar2[7];
          auVar8 = vshufps_avx(auVar26._0_32_,auVar10,0x44);
          auVar9 = vshufps_avx(auVar6,auVar8,0x88);
          auVar6 = vshufps_avx(auVar6,auVar8,0xdd);
          auVar8 = vshufps_avx(auVar26._0_32_,auVar10,0xee);
          auVar10 = vshufps_avx(auVar7,auVar8,0xdd);
          *(int8_t (*) [16])(in_R11 + iVar20) = auVar10._16_16_;
          auVar7 = vshufps_avx(auVar7,auVar8,0x88);
          in_ZMM4 = ZEXT3264(auVar7);
          *(int8_t (*) [16])(in_R11 + lVar22 + iVar20) = auVar7._16_16_;
          *(int8_t (*) [16])(in_R11 + (int64_t)iVar14 + (int64_t)iVar20) = auVar6._16_16_;
          *(int8_t (*) [16])(in_R11 + (int64_t)iVar12 + (int64_t)iVar20) = auVar9._16_16_;
          *(int8_t (*) [16])(in_R11 + (int64_t)iVar20 + (int64_t)iVar3) = auVar10._0_16_;
          *(int8_t (*) [16])(in_R11 + (int64_t)iVar13 + (int64_t)iVar20) = auVar7._0_16_;
          *(int8_t (*) [16])(in_R11 + (int64_t)iVar15 + (int64_t)iVar20) = auVar6._0_16_;
          *(int8_t (*) [16])(in_R11 + (int64_t)iVar17 + (int64_t)iVar20) = auVar9._0_16_;
          iVar25 = iVar25 + -1;
          param_2 = in_stack_00000180;
          iVar20 = iVar20 + 4;
        } while (iVar25 != 0);
      }
      in_R11 = in_R11 + in_stack_00000150;
      iVar23 = iVar23 + -1;
    } while (iVar23 != 0);
  }
  in_stack_000001a0 = in_stack_000001a0 & 7;
  if (in_stack_000001a0 != 0) {
    do {
      in_R10 = in_R10 + -1;
      pfVar18 = in_R10;
      for (iVar23 = param_2; iVar23 != 0; iVar23 = iVar23 + -1) {
        *in_R11 = -*pfVar18;
        in_R11 = in_R11 + 1;
        pfVar18 = pfVar18 + 0x400;
      }
      in_stack_000001a0 = in_stack_000001a0 - 1;
    } while (in_stack_000001a0 != 0);
    return;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018082cfee)
// WARNING: Removing unreachable block (ram,0x00018082d01e)
// WARNING: Removing unreachable block (ram,0x00018082cffe)
// WARNING: Removing unreachable block (ram,0x00018082d00e)



// 函数: void FUN_18082ce28(uint64_t param_1,int param_2,uint64_t param_3,int64_t param_4)
void FUN_18082ce28(uint64_t param_1,int param_2,uint64_t param_3,int64_t param_4)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  int8_t auVar6 [32];
  int8_t auVar7 [32];
  int8_t auVar8 [32];
  int8_t auVar9 [32];
  int8_t auVar10 [32];
  int8_t auVar11 [16];
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float *pfVar18;
  uint *puVar19;
  int iVar20;
  float *unaff_RBX;
  int unaff_ESI;
  int64_t unaff_RDI;
  int iVar21;
  int iVar22;
  int iVar23;
  float *in_R10;
  float *pfVar24;
  float *in_R11;
  int64_t lVar25;
  int8_t in_ZMM4 [64];
  int8_t auVar26 [64];
  int64_t in_stack_00000150;
  int in_stack_00000180;
  uint in_stack_000001a0;
  
  param_4 = param_4 - (int64_t)unaff_RBX;
  pfVar18 = in_R10;
  do {
    fVar4 = *unaff_RBX;
    pfVar24 = pfVar18 + -1;
    uVar5 = *(uint *)((int64_t)pfVar18 + (unaff_RDI - (int64_t)in_R10) + -4);
    if (param_2 != 0) {
      puVar19 = (uint *)(param_4 + (int64_t)unaff_RBX);
      pfVar18 = pfVar24;
      iVar21 = param_2;
      do {
        auVar11 = vfmsub213ss_fma(ZEXT416(*puVar19),ZEXT416(uVar5),ZEXT416((uint)(fVar4 * *pfVar18))
                                 );
        *in_R11 = auVar11._0_4_;
        in_R11 = in_R11 + 1;
        puVar19 = puVar19 + 0x200;
        pfVar18 = pfVar18 + 0x400;
        iVar21 = iVar21 + -1;
      } while (iVar21 != 0);
    }
    unaff_RBX = unaff_RBX + 1;
    unaff_ESI = unaff_ESI + -1;
    pfVar18 = pfVar24;
  } while (unaff_ESI != 0);
  iVar21 = (int)in_stack_000001a0 >> 3;
  if (iVar21 != 0) {
    iVar16 = param_2 >> 2;
    do {
      pfVar24 = pfVar24 + -8;
      if (iVar16 != 0) {
        iVar14 = param_2 * 2;
        lVar25 = (int64_t)param_2;
        iVar22 = 0x800;
        iVar12 = param_2 * 3;
        iVar3 = param_2 * 4;
        iVar13 = param_2 * 5;
        iVar15 = param_2 * 6;
        iVar17 = param_2 * 7;
        iVar20 = 0;
        iVar23 = iVar16;
        do {
          pfVar18 = pfVar24 + (iVar22 + -0x800);
          auVar7._4_4_ = pfVar18[1] * -1.0;
          auVar7._0_4_ = *pfVar18 * -1.0;
          auVar7._8_4_ = pfVar18[2] * -1.0;
          auVar7._12_4_ = pfVar18[3] * -1.0;
          auVar7._16_4_ = pfVar18[4] * -1.0;
          auVar7._20_4_ = pfVar18[5] * -1.0;
          auVar7._24_4_ = pfVar18[6] * -1.0;
          auVar7._28_4_ = pfVar18[7];
          pfVar18 = pfVar24 + (iVar22 + -0x400);
          pfVar2 = pfVar24 + iVar22;
          auVar26._0_4_ = *pfVar2 * -1.0;
          auVar26._4_4_ = pfVar2[1] * -1.0;
          auVar26._8_4_ = pfVar2[2] * -1.0;
          auVar26._12_4_ = pfVar2[3] * -1.0;
          auVar26._16_4_ = pfVar2[4] * -1.0;
          auVar26._20_4_ = pfVar2[5] * -1.0;
          auVar26._28_36_ = in_ZMM4._28_36_;
          auVar26._24_4_ = pfVar2[6] * -1.0;
          iVar1 = iVar22 + 0x400;
          iVar22 = iVar22 + 0x1000;
          auVar8._4_4_ = pfVar18[1] * -1.0;
          auVar8._0_4_ = *pfVar18 * -1.0;
          auVar8._8_4_ = pfVar18[2] * -1.0;
          auVar8._12_4_ = pfVar18[3] * -1.0;
          auVar8._16_4_ = pfVar18[4] * -1.0;
          auVar8._20_4_ = pfVar18[5] * -1.0;
          auVar8._24_4_ = pfVar18[6] * -1.0;
          auVar8._28_4_ = pfVar18[7];
          auVar6 = vshufps_avx(auVar7,auVar8,0x44);
          auVar7 = vshufps_avx(auVar7,auVar8,0xee);
          pfVar18 = pfVar24 + iVar1;
          auVar10._4_4_ = pfVar18[1] * -1.0;
          auVar10._0_4_ = *pfVar18 * -1.0;
          auVar10._8_4_ = pfVar18[2] * -1.0;
          auVar10._12_4_ = pfVar18[3] * -1.0;
          auVar10._16_4_ = pfVar18[4] * -1.0;
          auVar10._20_4_ = pfVar18[5] * -1.0;
          auVar10._24_4_ = pfVar18[6] * -1.0;
          auVar10._28_4_ = pfVar2[7];
          auVar8 = vshufps_avx(auVar26._0_32_,auVar10,0x44);
          auVar9 = vshufps_avx(auVar6,auVar8,0x88);
          auVar6 = vshufps_avx(auVar6,auVar8,0xdd);
          auVar8 = vshufps_avx(auVar26._0_32_,auVar10,0xee);
          auVar10 = vshufps_avx(auVar7,auVar8,0xdd);
          *(int8_t (*) [16])(in_R11 + iVar20) = auVar10._16_16_;
          auVar7 = vshufps_avx(auVar7,auVar8,0x88);
          in_ZMM4 = ZEXT3264(auVar7);
          *(int8_t (*) [16])(in_R11 + lVar25 + iVar20) = auVar7._16_16_;
          *(int8_t (*) [16])(in_R11 + (int64_t)iVar14 + (int64_t)iVar20) = auVar6._16_16_;
          *(int8_t (*) [16])(in_R11 + (int64_t)iVar12 + (int64_t)iVar20) = auVar9._16_16_;
          *(int8_t (*) [16])(in_R11 + (int64_t)iVar20 + (int64_t)iVar3) = auVar10._0_16_;
          *(int8_t (*) [16])(in_R11 + (int64_t)iVar13 + (int64_t)iVar20) = auVar7._0_16_;
          *(int8_t (*) [16])(in_R11 + (int64_t)iVar15 + (int64_t)iVar20) = auVar6._0_16_;
          *(int8_t (*) [16])(in_R11 + (int64_t)iVar17 + (int64_t)iVar20) = auVar9._0_16_;
          iVar23 = iVar23 + -1;
          param_2 = in_stack_00000180;
          iVar20 = iVar20 + 4;
        } while (iVar23 != 0);
      }
      in_R11 = in_R11 + in_stack_00000150;
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
  }
  in_stack_000001a0 = in_stack_000001a0 & 7;
  if (in_stack_000001a0 != 0) {
    do {
      pfVar24 = pfVar24 + -1;
      pfVar18 = pfVar24;
      for (iVar21 = param_2; iVar21 != 0; iVar21 = iVar21 + -1) {
        *in_R11 = -*pfVar18;
        in_R11 = in_R11 + 1;
        pfVar18 = pfVar18 + 0x400;
      }
      in_stack_000001a0 = in_stack_000001a0 - 1;
    } while (in_stack_000001a0 != 0);
    return;
  }
  return;
}





// 函数: void FUN_18082d0a6(uint64_t param_1,int param_2)
void FUN_18082d0a6(uint64_t param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int unaff_EDI;
  uint *in_R10;
  uint *in_R11;
  
  do {
    in_R10 = in_R10 + -1;
    puVar1 = in_R10;
    iVar2 = param_2;
    if (param_2 != 0) {
      do {
        *in_R11 = *puVar1 ^ 0x80000000;
        in_R11 = in_R11 + 1;
        iVar2 = iVar2 + -1;
        puVar1 = puVar1 + 0x400;
      } while (iVar2 != 0);
    }
    unaff_EDI = unaff_EDI + -1;
  } while (unaff_EDI != 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



