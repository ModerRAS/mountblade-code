#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part288.c - 1 个函数

// 函数: void FUN_18082c579(uint64_t param_1,int param_2,uint64_t param_3,float *param_4)
void FUN_18082c579(uint64_t param_1,int param_2,uint64_t param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  int8_t auVar6 [32];
  int8_t auVar7 [32];
  int8_t auVar8 [32];
  int8_t auVar9 [32];
  int8_t auVar10 [32];
  int8_t auVar11 [32];
  int8_t auVar12 [16];
  int8_t auVar13 [32];
  int8_t auVar14 [32];
  int8_t auVar15 [32];
  int8_t auVar16 [32];
  int8_t auVar17 [32];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int in_EAX;
  int iVar24;
  int iVar25;
  longlong lVar26;
  float *pfVar27;
  uint *puVar28;
  float *unaff_RBX;
  uint unaff_ESI;
  int iVar29;
  uint uVar30;
  longlong unaff_RDI;
  int iVar31;
  int iVar32;
  float *in_R10;
  float *in_R11;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  longlong lVar40;
  int8_t auVar41 [32];
  int8_t auVar42 [32];
  int8_t auVar43 [32];
  int8_t in_ZMM4 [64];
  int8_t auVar44 [64];
  int8_t auVar45 [32];
  int8_t in_ZMM5 [64];
  int8_t auVar46 [64];
  int8_t in_ZMM6 [64];
  int8_t auVar47 [64];
  int8_t in_ZMM7 [64];
  int8_t auVar48 [64];
  int8_t in_ZMM8 [64];
  int8_t auVar49 [64];
  float fVar50;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  int8_t in_ZMM9 [64];
  int8_t auVar51 [64];
  float *in_stack_00000080;
  longlong in_stack_00000160;
  float *in_stack_00000168;
  int in_stack_00000180;
  uint in_stack_00000188;
  uint in_stack_00000190;
  uint in_stack_00000198;
  uint in_stack_000001a0;
  
  iVar35 = param_2 * 8;
  iVar24 = in_EAX >> 3;
  if (iVar24 != 0) {
    iVar31 = param_2 >> 2;
    do {
      param_4 = param_4 + -8;
      if (iVar31 != 0) {
        iVar38 = param_2 * 2;
        lVar40 = (longlong)param_2;
        iVar32 = 0x400;
        iVar33 = param_2 * 3;
        iVar37 = param_2 * 4;
        iVar34 = param_2 * 5;
        iVar1 = param_2 * 6;
        iVar25 = param_2 * 7;
        iVar36 = 0;
        iVar29 = iVar31;
        do {
          lVar26 = (longlong)iVar32;
          auVar6 = vshufps_avx(*(int8_t (*) [32])(param_4 + (iVar32 + -0x400)),
                               *(int8_t (*) [32])(param_4 + (iVar32 + -0x200)),0x44);
          auVar7 = vshufps_avx(*(int8_t (*) [32])(param_4 + (iVar32 + -0x400)),
                               *(int8_t (*) [32])(param_4 + (iVar32 + -0x200)),0xee);
          in_ZMM4 = ZEXT3264(auVar7);
          iVar39 = iVar32 + 0x200;
          iVar32 = iVar32 + 0x800;
          auVar8 = vshufps_avx(*(int8_t (*) [32])(param_4 + lVar26),
                               *(int8_t (*) [32])(param_4 + iVar39),0x44);
          auVar9 = vshufps_avx(*(int8_t (*) [32])(param_4 + lVar26),
                               *(int8_t (*) [32])(param_4 + iVar39),0xee);
          auVar10 = vshufps_avx(auVar6,auVar8,0x88);
          in_ZMM6 = ZEXT3264(auVar10);
          auVar6 = vshufps_avx(auVar6,auVar8,0xdd);
          auVar8 = vshufps_avx(auVar7,auVar9,0xdd);
          *(int8_t (*) [16])(in_R11 + iVar36) = auVar8._16_16_;
          auVar7 = vshufps_avx(auVar7,auVar9,0x88);
          in_ZMM5 = ZEXT3264(auVar7);
          *(int8_t (*) [16])(in_R11 + lVar40 + iVar36) = auVar7._16_16_;
          *(int8_t (*) [16])(in_R11 + (longlong)iVar38 + (longlong)iVar36) = auVar6._16_16_;
          *(int8_t (*) [16])(in_R11 + (longlong)iVar36 + (longlong)iVar33) = auVar10._16_16_;
          *(int8_t (*) [16])(in_R11 + (longlong)iVar37 + (longlong)iVar36) = auVar8._0_16_;
          *(int8_t (*) [16])(in_R11 + (longlong)iVar34 + (longlong)iVar36) = auVar7._0_16_;
          *(int8_t (*) [16])(in_R11 + (longlong)iVar1 + (longlong)iVar36) = auVar6._0_16_;
          *(int8_t (*) [16])(in_R11 + (longlong)iVar25 + (longlong)iVar36) = auVar10._0_16_;
          iVar29 = iVar29 + -1;
          iVar36 = iVar36 + 4;
          param_2 = in_stack_00000180;
        } while (iVar29 != 0);
      }
      in_R11 = in_R11 + iVar35;
      iVar24 = iVar24 + -1;
    } while (iVar24 != 0);
    iVar35 = param_2 * 8;
    unaff_RBX = in_stack_00000168;
    unaff_RDI = in_stack_00000160;
    in_R10 = in_stack_00000080;
    unaff_ESI = in_stack_00000188;
  }
  for (uVar30 = unaff_ESI & 7; uVar30 != 0; uVar30 = uVar30 - 1) {
                    // WARNING: Read-only address (ram,0x000180980640) is written
    param_4 = param_4 + -1;
    pfVar27 = param_4;
    for (iVar24 = param_2; iVar24 != 0; iVar24 = iVar24 + -1) {
      fVar5 = *pfVar27;
      pfVar27 = pfVar27 + 0x200;
      *in_R11 = fVar5;
      in_R11 = in_R11 + 1;
    }
  }
  iVar31 = param_2 >> 2;
  auVar6 = _DAT_180980640;
                    // WARNING: Read-only address (ram,0x000180980640) is written
  for (iVar24 = (int)in_stack_00000190 >> 3; iVar24 != 0; iVar24 = iVar24 + -1) {
    auVar7 = *(int8_t (*) [32])(unaff_RDI + -0x20);
    in_ZMM9 = ZEXT3264(auVar7);
    fVar5 = *unaff_RBX;
    fVar18 = unaff_RBX[1];
    fVar19 = unaff_RBX[2];
    fVar20 = unaff_RBX[3];
    fVar21 = unaff_RBX[4];
    fVar22 = unaff_RBX[5];
    fVar23 = unaff_RBX[6];
    unaff_RDI = unaff_RDI + -0x20;
    param_4 = param_4 + -8;
    _DAT_180980640 = auVar6;
    if (iVar31 != 0) {
      iVar38 = 0x800;
      iVar34 = 0x400;
      iVar37 = iVar31;
      iVar33 = 0;
      do {
        pfVar27 = param_4 + (iVar34 + -0x400);
        fVar50 = auVar7._0_4_;
        fVar52 = auVar7._4_4_;
        auVar8._4_4_ = fVar52 * pfVar27[1];
        auVar8._0_4_ = fVar50 * *pfVar27;
        fVar53 = auVar7._8_4_;
        auVar8._8_4_ = fVar53 * pfVar27[2];
        fVar54 = auVar7._12_4_;
        auVar8._12_4_ = fVar54 * pfVar27[3];
        fVar55 = auVar7._16_4_;
        auVar8._16_4_ = fVar55 * pfVar27[4];
        fVar56 = auVar7._20_4_;
        auVar8._20_4_ = fVar56 * pfVar27[5];
        fVar57 = auVar7._24_4_;
        auVar8._24_4_ = fVar57 * pfVar27[6];
        auVar8._28_4_ = pfVar27[7];
        auVar8 = vpermps_avx2(auVar6,auVar8);
        pfVar3 = param_4 + (iVar34 + -0x200);
        auVar9._4_4_ = fVar52 * pfVar3[1];
        auVar9._0_4_ = fVar50 * *pfVar3;
        auVar9._8_4_ = fVar53 * pfVar3[2];
        auVar9._12_4_ = fVar54 * pfVar3[3];
        auVar9._16_4_ = fVar55 * pfVar3[4];
        auVar9._20_4_ = fVar56 * pfVar3[5];
        auVar9._24_4_ = fVar57 * pfVar3[6];
        auVar9._28_4_ = pfVar3[7];
        auVar9 = vpermps_avx2(auVar6,auVar9);
        in_ZMM8 = ZEXT3264(auVar9);
        pfVar4 = param_4 + iVar34;
        auVar10._4_4_ = fVar52 * pfVar4[1];
        auVar10._0_4_ = fVar50 * *pfVar4;
        auVar10._8_4_ = fVar53 * pfVar4[2];
        auVar10._12_4_ = fVar54 * pfVar4[3];
        auVar10._16_4_ = fVar55 * pfVar4[4];
        auVar10._20_4_ = fVar56 * pfVar4[5];
        auVar10._24_4_ = fVar57 * pfVar4[6];
        auVar10._28_4_ = pfVar27[7];
        auVar10 = vpermps_avx2(auVar6,auVar10);
        in_ZMM7 = ZEXT3264(auVar10);
        iVar1 = iVar34 + 0x200;
        iVar34 = iVar34 + 0x800;
        pfVar27 = param_4 + iVar1;
        auVar11._4_4_ = fVar52 * pfVar27[1];
        auVar11._0_4_ = fVar50 * *pfVar27;
        auVar11._8_4_ = fVar53 * pfVar27[2];
        auVar11._12_4_ = fVar54 * pfVar27[3];
        auVar11._16_4_ = fVar55 * pfVar27[4];
        auVar11._20_4_ = fVar56 * pfVar27[5];
        auVar11._24_4_ = fVar57 * pfVar27[6];
        auVar11._28_4_ = pfVar3[7];
        auVar11 = vpermps_avx2(auVar6,auVar11);
        in_ZMM6 = ZEXT3264(auVar11);
        pfVar27 = in_R10 + (iVar38 + -0x800);
        auVar45._0_4_ = fVar5 * *pfVar27 + auVar8._0_4_;
        auVar45._4_4_ = fVar18 * pfVar27[1] + auVar8._4_4_;
        auVar45._8_4_ = fVar19 * pfVar27[2] + auVar8._8_4_;
        auVar45._12_4_ = fVar20 * pfVar27[3] + auVar8._12_4_;
        auVar45._16_4_ = fVar21 * pfVar27[4] + auVar8._16_4_;
        auVar45._20_4_ = fVar22 * pfVar27[5] + auVar8._20_4_;
        auVar45._24_4_ = fVar23 * pfVar27[6] + auVar8._24_4_;
        auVar45._28_4_ = pfVar27[7] + auVar8._28_4_;
        pfVar27 = in_R10 + (iVar38 + -0x400);
        pfVar3 = in_R10 + iVar38;
        auVar41._0_4_ = fVar5 * *pfVar27 + auVar9._0_4_;
        auVar41._4_4_ = fVar18 * pfVar27[1] + auVar9._4_4_;
        auVar41._8_4_ = fVar19 * pfVar27[2] + auVar9._8_4_;
        auVar41._12_4_ = fVar20 * pfVar27[3] + auVar9._12_4_;
        auVar41._16_4_ = fVar21 * pfVar27[4] + auVar9._16_4_;
        auVar41._20_4_ = fVar22 * pfVar27[5] + auVar9._20_4_;
        auVar41._24_4_ = fVar23 * pfVar27[6] + auVar9._24_4_;
        auVar41._28_4_ = pfVar27[7] + auVar9._28_4_;
        iVar1 = iVar38 + 0x400;
        iVar38 = iVar38 + 0x1000;
        auVar43._0_4_ = fVar5 * *pfVar3 + auVar10._0_4_;
        auVar43._4_4_ = fVar18 * pfVar3[1] + auVar10._4_4_;
        auVar43._8_4_ = fVar19 * pfVar3[2] + auVar10._8_4_;
        auVar43._12_4_ = fVar20 * pfVar3[3] + auVar10._12_4_;
        auVar43._16_4_ = fVar21 * pfVar3[4] + auVar10._16_4_;
        auVar43._20_4_ = fVar22 * pfVar3[5] + auVar10._20_4_;
        auVar43._24_4_ = fVar23 * pfVar3[6] + auVar10._24_4_;
        auVar43._28_4_ = pfVar3[7] + auVar10._28_4_;
        auVar8 = vshufps_avx(auVar45,auVar41,0x44);
        pfVar27 = in_R10 + iVar1;
        auVar42._0_4_ = fVar5 * *pfVar27 + auVar11._0_4_;
        auVar42._4_4_ = fVar18 * pfVar27[1] + auVar11._4_4_;
        auVar42._8_4_ = fVar19 * pfVar27[2] + auVar11._8_4_;
        auVar42._12_4_ = fVar20 * pfVar27[3] + auVar11._12_4_;
        auVar42._16_4_ = fVar21 * pfVar27[4] + auVar11._16_4_;
        auVar42._20_4_ = fVar22 * pfVar27[5] + auVar11._20_4_;
        auVar42._24_4_ = fVar23 * pfVar27[6] + auVar11._24_4_;
        auVar42._28_4_ = in_ZMM4._28_4_ + auVar11._28_4_;
        auVar9 = vshufps_avx(auVar45,auVar41,0xee);
        in_ZMM4 = ZEXT3264(auVar9);
        auVar10 = vshufps_avx(auVar43,auVar42,0x44);
        auVar11 = vshufps_avx(auVar8,auVar10,0x88);
        in_ZMM5 = ZEXT3264(auVar11);
        auVar41 = vshufps_avx(auVar43,auVar42,0xee);
        auVar8 = vshufps_avx(auVar8,auVar10,0xdd);
        auVar10 = vshufps_avx(auVar9,auVar41,0x88);
        *(int8_t (*) [16])(in_R11 + iVar33) = auVar11._0_16_;
        *(int8_t (*) [16])(in_R11 + (longlong)param_2 + (longlong)iVar33) = auVar8._0_16_;
        *(int8_t (*) [16])(in_R11 + (longlong)(param_2 * 2) + (longlong)iVar33) = auVar10._0_16_
        ;
        auVar9 = vshufps_avx(auVar9,auVar41,0xdd);
        *(int8_t (*) [16])(in_R11 + (longlong)(param_2 * 3) + (longlong)iVar33) = auVar9._0_16_;
        *(int8_t (*) [16])(in_R11 + (longlong)(param_2 * 4) + (longlong)iVar33) =
             auVar11._16_16_;
        *(int8_t (*) [16])(in_R11 + (longlong)(param_2 * 5) + (longlong)iVar33) = auVar8._16_16_
        ;
        *(int8_t (*) [16])(in_R11 + (longlong)(param_2 * 6) + (longlong)iVar33) =
             auVar10._16_16_;
        *(int8_t (*) [16])(in_R11 + (longlong)(param_2 * 7) + (longlong)iVar33) = auVar9._16_16_
        ;
        iVar37 = iVar37 + -1;
        unaff_RBX = in_stack_00000168;
        iVar33 = iVar33 + 4;
      } while (iVar37 != 0);
    }
    unaff_RBX = unaff_RBX + 8;
    in_R11 = in_R11 + iVar35;
    in_R10 = in_R10 + 8;
    in_stack_00000168 = unaff_RBX;
    auVar6 = _DAT_180980640;
  }
  for (in_stack_00000190 = in_stack_00000190 & 7; _DAT_180980640 = auVar6, in_stack_00000190 != 0;
      in_stack_00000190 = in_stack_00000190 - 1) {
    uVar30 = *(uint *)(unaff_RDI + -4);
    fVar5 = *unaff_RBX;
    in_ZMM4 = ZEXT464((uint)fVar5);
    unaff_RDI = unaff_RDI + -4;
    param_4 = param_4 + -1;
    pfVar3 = param_4;
    pfVar27 = in_R10;
    for (iVar24 = param_2; iVar24 != 0; iVar24 = iVar24 + -1) {
      auVar12 = vfmadd132ss_fma(ZEXT416(uVar30),ZEXT416((uint)(fVar5 * *pfVar27)),
                                ZEXT416((uint)*pfVar3));
      *in_R11 = auVar12._0_4_;
      in_R11 = in_R11 + 1;
      pfVar27 = pfVar27 + 0x400;
      pfVar3 = pfVar3 + 0x200;
    }
    in_R10 = in_R10 + 1;
    unaff_RBX = unaff_RBX + 1;
    auVar6 = _DAT_180980640;
    in_stack_00000168 = unaff_RBX;
  }
  for (iVar24 = (int)in_stack_00000198 >> 3; iVar24 != 0; iVar24 = iVar24 + -1) {
    auVar7 = vpermps_avx2(auVar6,*(int8_t (*) [32])(unaff_RDI + -0x20));
    fVar5 = *unaff_RBX;
    fVar18 = unaff_RBX[1];
    fVar19 = unaff_RBX[2];
    fVar20 = unaff_RBX[3];
    fVar21 = unaff_RBX[4];
    fVar22 = unaff_RBX[5];
    fVar23 = unaff_RBX[6];
    unaff_RDI = unaff_RDI + -0x20;
    in_R10 = in_R10 + -8;
    if (iVar31 != 0) {
      lVar40 = (longlong)param_2;
      iVar39 = 0x800;
      iVar32 = 0x400;
      iVar38 = param_2 * 2;
      iVar33 = param_2 * 3;
      iVar37 = param_2 * 4;
      iVar34 = param_2 * 5;
      iVar1 = param_2 * 6;
      iVar25 = param_2 * 7;
      iVar36 = 0;
      iVar29 = iVar31;
      do {
        pfVar27 = param_4 + (iVar32 + -0x400);
        fVar50 = auVar7._0_4_;
        auVar47._0_4_ = fVar50 * *pfVar27;
        fVar52 = auVar7._4_4_;
        auVar47._4_4_ = fVar52 * pfVar27[1];
        fVar53 = auVar7._8_4_;
        auVar47._8_4_ = fVar53 * pfVar27[2];
        fVar54 = auVar7._12_4_;
        auVar47._12_4_ = fVar54 * pfVar27[3];
        fVar55 = auVar7._16_4_;
        auVar47._16_4_ = fVar55 * pfVar27[4];
        fVar56 = auVar7._20_4_;
        auVar47._20_4_ = fVar56 * pfVar27[5];
        auVar47._28_36_ = in_ZMM6._28_36_;
        fVar57 = auVar7._24_4_;
        auVar47._24_4_ = fVar57 * pfVar27[6];
        in_ZMM6 = ZEXT3264(auVar47._0_32_);
        pfVar3 = param_4 + (iVar32 + -0x200);
        pfVar4 = param_4 + iVar32;
        auVar49._0_4_ = fVar50 * *pfVar4;
        auVar49._4_4_ = fVar52 * pfVar4[1];
        auVar49._8_4_ = fVar53 * pfVar4[2];
        auVar49._12_4_ = fVar54 * pfVar4[3];
        auVar49._16_4_ = fVar55 * pfVar4[4];
        auVar49._20_4_ = fVar56 * pfVar4[5];
        auVar49._28_36_ = in_ZMM8._28_36_;
        auVar49._24_4_ = fVar57 * pfVar4[6];
        in_ZMM8 = ZEXT3264(auVar49._0_32_);
        auVar48._0_4_ = fVar50 * *pfVar3;
        auVar48._4_4_ = fVar52 * pfVar3[1];
        auVar48._8_4_ = fVar53 * pfVar3[2];
        auVar48._12_4_ = fVar54 * pfVar3[3];
        auVar48._16_4_ = fVar55 * pfVar3[4];
        auVar48._20_4_ = fVar56 * pfVar3[5];
        auVar48._28_36_ = in_ZMM7._28_36_;
        auVar48._24_4_ = fVar57 * pfVar3[6];
        in_ZMM7 = ZEXT3264(auVar48._0_32_);
        iVar2 = iVar32 + 0x200;
        iVar32 = iVar32 + 0x800;
        pfVar3 = param_4 + iVar2;
        auVar51._0_4_ = fVar50 * *pfVar3;
        auVar51._4_4_ = fVar52 * pfVar3[1];
        auVar51._8_4_ = fVar53 * pfVar3[2];
        auVar51._12_4_ = fVar54 * pfVar3[3];
        auVar51._16_4_ = fVar55 * pfVar3[4];
        auVar51._20_4_ = fVar56 * pfVar3[5];
        auVar51._28_36_ = in_ZMM9._28_36_;
        auVar51._24_4_ = fVar57 * pfVar3[6];
        in_ZMM9 = ZEXT3264(auVar51._0_32_);
        auVar8 = vpermps_avx2(auVar6,*(int8_t (*) [32])(in_R10 + (iVar39 + -0x800)));
        auVar46._0_4_ = auVar8._0_4_ * fVar5;
        auVar46._4_4_ = auVar8._4_4_ * fVar18;
        auVar46._8_4_ = auVar8._8_4_ * fVar19;
        auVar46._12_4_ = auVar8._12_4_ * fVar20;
        auVar46._16_4_ = auVar8._16_4_ * fVar21;
        auVar46._20_4_ = auVar8._20_4_ * fVar22;
        auVar46._28_36_ = in_ZMM5._28_36_;
        auVar46._24_4_ = auVar8._24_4_ * fVar23;
        auVar8 = vpermps_avx2(auVar6,*(int8_t (*) [32])(in_R10 + (iVar39 + -0x400)));
        auVar13._4_4_ = auVar8._4_4_ * fVar18;
        auVar13._0_4_ = auVar8._0_4_ * fVar5;
        auVar13._8_4_ = auVar8._8_4_ * fVar19;
        auVar13._12_4_ = auVar8._12_4_ * fVar20;
        auVar13._16_4_ = auVar8._16_4_ * fVar21;
        auVar13._20_4_ = auVar8._20_4_ * fVar22;
        auVar13._24_4_ = auVar8._24_4_ * fVar23;
        auVar13._28_4_ = pfVar27[7];
        auVar8 = vpermps_avx2(auVar6,*(int8_t (*) [32])(in_R10 + iVar39));
        auVar14._4_4_ = auVar8._4_4_ * fVar18;
        auVar14._0_4_ = auVar8._0_4_ * fVar5;
        auVar14._8_4_ = auVar8._8_4_ * fVar19;
        auVar14._12_4_ = auVar8._12_4_ * fVar20;
        auVar14._16_4_ = auVar8._16_4_ * fVar21;
        auVar14._20_4_ = auVar8._20_4_ * fVar22;
        auVar14._24_4_ = auVar8._24_4_ * fVar23;
        auVar14._28_4_ = SUB324(*(int8_t (*) [32])(in_R10 + iVar39),0x1c);
        auVar9 = vsubps_avx(auVar47._0_32_,auVar46._0_32_);
        auVar11 = vsubps_avx(auVar49._0_32_,auVar14);
        iVar2 = iVar39 + 0x400;
        iVar39 = iVar39 + 0x1000;
        auVar10 = vpermps_avx2(auVar6,*(int8_t (*) [32])(in_R10 + iVar2));
        auVar15._4_4_ = auVar10._4_4_ * fVar18;
        auVar15._0_4_ = auVar10._0_4_ * fVar5;
        auVar15._8_4_ = auVar10._8_4_ * fVar19;
        auVar15._12_4_ = auVar10._12_4_ * fVar20;
        auVar15._16_4_ = auVar10._16_4_ * fVar21;
        auVar15._20_4_ = auVar10._20_4_ * fVar22;
        auVar15._24_4_ = auVar10._24_4_ * fVar23;
        auVar15._28_4_ = auVar8._28_4_;
        auVar41 = vsubps_avx(auVar51._0_32_,auVar15);
        auVar10 = vsubps_avx(auVar48._0_32_,auVar13);
        auVar8 = vshufps_avx(auVar9,auVar10,0x44);
        auVar9 = vshufps_avx(auVar9,auVar10,0xee);
        in_ZMM4 = ZEXT3264(auVar9);
        auVar10 = vshufps_avx(auVar11,auVar41,0xee);
        auVar11 = vshufps_avx(auVar11,auVar41,0x44);
        auVar41 = vshufps_avx(auVar8,auVar11,0x88);
        auVar8 = vshufps_avx(auVar8,auVar11,0xdd);
        in_ZMM5 = ZEXT3264(auVar8);
        auVar11 = vshufps_avx(auVar9,auVar10,0x88);
        *(int8_t (*) [16])(in_R11 + iVar36) = auVar41._0_16_;
        *(int8_t (*) [16])(in_R11 + lVar40 + iVar36) = auVar8._0_16_;
        *(int8_t (*) [16])(in_R11 + (longlong)iVar38 + (longlong)iVar36) = auVar11._0_16_;
        auVar9 = vshufps_avx(auVar9,auVar10,0xdd);
        *(int8_t (*) [16])(in_R11 + (longlong)iVar33 + (longlong)iVar36) = auVar9._0_16_;
        *(int8_t (*) [16])(in_R11 + (longlong)iVar37 + (longlong)iVar36) = auVar41._16_16_;
        *(int8_t (*) [16])(in_R11 + (longlong)iVar34 + (longlong)iVar36) = auVar8._16_16_;
        *(int8_t (*) [16])(in_R11 + (longlong)iVar1 + (longlong)iVar36) = auVar11._16_16_;
        *(int8_t (*) [16])(in_R11 + (longlong)iVar25 + (longlong)iVar36) = auVar9._16_16_;
        iVar29 = iVar29 + -1;
        unaff_RBX = in_stack_00000168;
        param_2 = in_stack_00000180;
        iVar36 = iVar36 + 4;
      } while (iVar29 != 0);
    }
    unaff_RBX = unaff_RBX + 8;
    in_R11 = in_R11 + iVar35;
    param_4 = param_4 + 8;
    in_stack_00000168 = unaff_RBX;
  }
  in_stack_00000198 = in_stack_00000198 & 7;
  if (in_stack_00000198 != 0) {
    lVar40 = unaff_RDI - (longlong)in_R10;
    lVar26 = (longlong)param_4 - (longlong)unaff_RBX;
    pfVar27 = in_R10;
    do {
      fVar5 = *unaff_RBX;
      in_R10 = pfVar27 + -1;
      uVar30 = *(uint *)((longlong)pfVar27 + lVar40 + -4);
      if (param_2 != 0) {
        puVar28 = (uint *)(lVar26 + (longlong)unaff_RBX);
        pfVar27 = in_R10;
        iVar24 = param_2;
        do {
          auVar12 = vfmsub213ss_fma(ZEXT416(*puVar28),ZEXT416(uVar30),
                                    ZEXT416((uint)(fVar5 * *pfVar27)));
          *in_R11 = auVar12._0_4_;
          in_R11 = in_R11 + 1;
          puVar28 = puVar28 + 0x200;
          pfVar27 = pfVar27 + 0x400;
          iVar24 = iVar24 + -1;
        } while (iVar24 != 0);
      }
      unaff_RBX = unaff_RBX + 1;
      in_stack_00000198 = in_stack_00000198 - 1;
      pfVar27 = in_R10;
    } while (in_stack_00000198 != 0);
  }
  iVar24 = (int)in_stack_000001a0 >> 3;
  if (iVar24 != 0) {
    iVar31 = param_2 >> 2;
    do {
      in_R10 = in_R10 + -8;
      if (iVar31 != 0) {
        iVar38 = param_2 * 2;
        lVar40 = (longlong)param_2;
        iVar32 = 0x800;
        iVar33 = param_2 * 3;
        iVar37 = param_2 * 4;
        iVar34 = param_2 * 5;
        iVar1 = param_2 * 6;
        iVar25 = param_2 * 7;
        iVar36 = 0;
        iVar29 = iVar31;
        do {
          pfVar27 = in_R10 + (iVar32 + -0x800);
          auVar7._4_4_ = pfVar27[1] * -1.0;
          auVar7._0_4_ = *pfVar27 * -1.0;
          auVar7._8_4_ = pfVar27[2] * -1.0;
          auVar7._12_4_ = pfVar27[3] * -1.0;
          auVar7._16_4_ = pfVar27[4] * -1.0;
          auVar7._20_4_ = pfVar27[5] * -1.0;
          auVar7._24_4_ = pfVar27[6] * -1.0;
          auVar7._28_4_ = pfVar27[7];
          pfVar27 = in_R10 + (iVar32 + -0x400);
          pfVar3 = in_R10 + iVar32;
          auVar44._0_4_ = *pfVar3 * -1.0;
          auVar44._4_4_ = pfVar3[1] * -1.0;
          auVar44._8_4_ = pfVar3[2] * -1.0;
          auVar44._12_4_ = pfVar3[3] * -1.0;
          auVar44._16_4_ = pfVar3[4] * -1.0;
          auVar44._20_4_ = pfVar3[5] * -1.0;
          auVar44._28_36_ = in_ZMM4._28_36_;
          auVar44._24_4_ = pfVar3[6] * -1.0;
          iVar39 = iVar32 + 0x400;
          iVar32 = iVar32 + 0x1000;
          auVar16._4_4_ = pfVar27[1] * -1.0;
          auVar16._0_4_ = *pfVar27 * -1.0;
          auVar16._8_4_ = pfVar27[2] * -1.0;
          auVar16._12_4_ = pfVar27[3] * -1.0;
          auVar16._16_4_ = pfVar27[4] * -1.0;
          auVar16._20_4_ = pfVar27[5] * -1.0;
          auVar16._24_4_ = pfVar27[6] * -1.0;
          auVar16._28_4_ = pfVar27[7];
          auVar6 = vshufps_avx(auVar7,auVar16,0x44);
          auVar7 = vshufps_avx(auVar7,auVar16,0xee);
          pfVar27 = in_R10 + iVar39;
          auVar17._4_4_ = pfVar27[1] * -1.0;
          auVar17._0_4_ = *pfVar27 * -1.0;
          auVar17._8_4_ = pfVar27[2] * -1.0;
          auVar17._12_4_ = pfVar27[3] * -1.0;
          auVar17._16_4_ = pfVar27[4] * -1.0;
          auVar17._20_4_ = pfVar27[5] * -1.0;
          auVar17._24_4_ = pfVar27[6] * -1.0;
          auVar17._28_4_ = pfVar3[7];
          auVar8 = vshufps_avx(auVar44._0_32_,auVar17,0x44);
          auVar9 = vshufps_avx(auVar6,auVar8,0x88);
          auVar6 = vshufps_avx(auVar6,auVar8,0xdd);
          auVar8 = vshufps_avx(auVar44._0_32_,auVar17,0xee);
          auVar10 = vshufps_avx(auVar7,auVar8,0xdd);
          *(int8_t (*) [16])(in_R11 + iVar36) = auVar10._16_16_;
          auVar7 = vshufps_avx(auVar7,auVar8,0x88);
          in_ZMM4 = ZEXT3264(auVar7);
          *(int8_t (*) [16])(in_R11 + lVar40 + iVar36) = auVar7._16_16_;
          *(int8_t (*) [16])(in_R11 + (longlong)iVar38 + (longlong)iVar36) = auVar6._16_16_;
          *(int8_t (*) [16])(in_R11 + (longlong)iVar33 + (longlong)iVar36) = auVar9._16_16_;
          *(int8_t (*) [16])(in_R11 + (longlong)iVar36 + (longlong)iVar37) = auVar10._0_16_;
          *(int8_t (*) [16])(in_R11 + (longlong)iVar34 + (longlong)iVar36) = auVar7._0_16_;
          *(int8_t (*) [16])(in_R11 + (longlong)iVar1 + (longlong)iVar36) = auVar6._0_16_;
          *(int8_t (*) [16])(in_R11 + (longlong)iVar25 + (longlong)iVar36) = auVar9._0_16_;
          iVar29 = iVar29 + -1;
          param_2 = in_stack_00000180;
          iVar36 = iVar36 + 4;
        } while (iVar29 != 0);
      }
      in_R11 = in_R11 + iVar35;
      iVar24 = iVar24 + -1;
    } while (iVar24 != 0);
  }
  in_stack_000001a0 = in_stack_000001a0 & 7;
  if (in_stack_000001a0 != 0) {
    do {
      in_R10 = in_R10 + -1;
      pfVar27 = in_R10;
      for (iVar35 = param_2; iVar35 != 0; iVar35 = iVar35 + -1) {
        *in_R11 = -*pfVar27;
        in_R11 = in_R11 + 1;
        pfVar27 = pfVar27 + 0x400;
      }
      in_stack_000001a0 = in_stack_000001a0 - 1;
    } while (in_stack_000001a0 != 0);
    return;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018082cd15)
// WARNING: Removing unreachable block (ram,0x00018082cd09)
// WARNING: Removing unreachable block (ram,0x00018082c9e7)
// WARNING: Removing unreachable block (ram,0x00018082c9c7)
// WARNING: Removing unreachable block (ram,0x00018082c9d3)
// WARNING: Removing unreachable block (ram,0x00018082cd29)
// WARNING: Removing unreachable block (ram,0x00018082cfee)
// WARNING: Removing unreachable block (ram,0x00018082d01e)
// WARNING: Removing unreachable block (ram,0x00018082cd3e)
// WARNING: Removing unreachable block (ram,0x00018082c9fc)
// WARNING: Removing unreachable block (ram,0x00018082cffe)
// WARNING: Removing unreachable block (ram,0x00018082d00e)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



