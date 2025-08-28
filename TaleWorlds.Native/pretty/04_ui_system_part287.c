#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part287.c - 1 个函数

// 函数: void FUN_18082c450(longlong param_1,float *param_2,longlong param_3,float *param_4,int param_5,
void FUN_18082c450(longlong param_1,float *param_2,longlong param_3,float *param_4,int param_5,
                  int param_6,uint param_7,uint param_8,uint param_9,uint param_10,uint param_11)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  int8_t auVar4 [32];
  int8_t auVar5 [32];
  int8_t auVar6 [32];
  int8_t auVar7 [32];
  int8_t auVar8 [32];
  int8_t auVar9 [32];
  int8_t auVar10 [16];
  int8_t auVar11 [32];
  int8_t auVar12 [32];
  int8_t auVar13 [32];
  int8_t auVar14 [32];
  int8_t auVar15 [32];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int iVar22;
  longlong lVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  uint *puVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  float *pfVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int8_t auVar37 [32];
  int8_t auVar38 [32];
  int8_t auVar39 [32];
  int8_t in_ZMM4 [64];
  int8_t auVar40 [64];
  int8_t auVar41 [32];
  int8_t in_ZMM5 [64];
  int8_t auVar42 [64];
  int8_t in_ZMM6 [64];
  int8_t auVar43 [64];
  int8_t in_ZMM7 [64];
  int8_t auVar44 [64];
  int8_t in_ZMM8 [64];
  int8_t auVar45 [64];
  float fVar46;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  int8_t in_ZMM9 [64];
  int8_t auVar47 [64];
  
  pfVar25 = (float *)(*(longlong *)(param_1 + 0x10) + (longlong)param_5 * 4);
  pfVar33 = (float *)(*(longlong *)(param_1 + 8) + (longlong)param_6 * 4);
  if (param_7 == 1) {
    func_0x00018082d150(param_2,param_3,param_4,pfVar25,pfVar33,param_8,param_9,param_10,param_11);
    return;
  }
  if (param_7 == 2) {
    FUN_18082d350(param_2,param_3,param_4,pfVar25,pfVar25 + 0x200,pfVar33,pfVar33 + 0x400,param_8,
                  param_9,param_10,param_11);
    return;
  }
  if (((param_7 & 3) == 0) && ((((byte)pfVar33 | (byte)pfVar25) & 0x1f) == 0)) {
    iVar22 = (int)param_8 >> 3;
    iVar29 = (int)param_7 >> 2;
    if (iVar22 != 0) {
      do {
        pfVar25 = pfVar25 + -8;
        if (iVar29 != 0) {
          iVar30 = 0x400;
          iVar35 = 0;
          iVar28 = iVar29;
          do {
            lVar23 = (longlong)iVar30;
            auVar4 = vshufps_avx(*(int8_t (*) [32])(pfVar25 + (iVar30 + -0x400)),
                                 *(int8_t (*) [32])(pfVar25 + (iVar30 + -0x200)),0x44);
            auVar5 = vshufps_avx(*(int8_t (*) [32])(pfVar25 + (iVar30 + -0x400)),
                                 *(int8_t (*) [32])(pfVar25 + (iVar30 + -0x200)),0xee);
            in_ZMM4 = ZEXT3264(auVar5);
            iVar34 = iVar30 + 0x200;
            iVar30 = iVar30 + 0x800;
            auVar6 = vshufps_avx(*(int8_t (*) [32])(pfVar25 + lVar23),
                                 *(int8_t (*) [32])(pfVar25 + iVar34),0x44);
            auVar7 = vshufps_avx(*(int8_t (*) [32])(pfVar25 + lVar23),
                                 *(int8_t (*) [32])(pfVar25 + iVar34),0xee);
            auVar8 = vshufps_avx(auVar4,auVar6,0x88);
            in_ZMM6 = ZEXT3264(auVar8);
            auVar4 = vshufps_avx(auVar4,auVar6,0xdd);
            auVar6 = vshufps_avx(auVar5,auVar7,0xdd);
            *(int8_t (*) [16])(param_2 + iVar35) = auVar6._16_16_;
            auVar5 = vshufps_avx(auVar5,auVar7,0x88);
            in_ZMM5 = ZEXT3264(auVar5);
            *(int8_t (*) [16])(param_2 + (longlong)(int)param_7 + (longlong)iVar35) =
                 auVar5._16_16_;
            *(int8_t (*) [16])(param_2 + (longlong)(int)(param_7 * 2) + (longlong)iVar35) =
                 auVar4._16_16_;
            *(int8_t (*) [16])(param_2 + (longlong)iVar35 + (longlong)(int)(param_7 * 3)) =
                 auVar8._16_16_;
            *(int8_t (*) [16])(param_2 + (longlong)(int)(param_7 * 4) + (longlong)iVar35) =
                 auVar6._0_16_;
            *(int8_t (*) [16])(param_2 + (longlong)(int)(param_7 * 5) + (longlong)iVar35) =
                 auVar5._0_16_;
            *(int8_t (*) [16])(param_2 + (longlong)(int)(param_7 * 6) + (longlong)iVar35) =
                 auVar4._0_16_;
            *(int8_t (*) [16])(param_2 + (longlong)(int)(param_7 * 7) + (longlong)iVar35) =
                 auVar8._0_16_;
            iVar28 = iVar28 + -1;
            iVar35 = iVar35 + 4;
          } while (iVar28 != 0);
        }
        param_2 = param_2 + (int)(param_7 * 8);
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
    }
    iVar22 = param_7 * 8;
    for (param_8 = param_8 & 7; param_8 != 0; param_8 = param_8 - 1) {
                    // WARNING: Read-only address (ram,0x000180980640) is written
      pfVar25 = pfVar25 + -1;
      pfVar24 = pfVar25;
      uVar31 = param_7;
      if (param_7 != 0) {
        do {
          *param_2 = *pfVar24;
          param_2 = param_2 + 1;
          uVar31 = uVar31 - 1;
          pfVar24 = pfVar24 + 0x200;
        } while (uVar31 != 0);
      }
    }
    auVar4 = _DAT_180980640;
                    // WARNING: Read-only address (ram,0x000180980640) is written
    for (iVar28 = (int)param_9 >> 3; iVar28 != 0; iVar28 = iVar28 + -1) {
      auVar5 = *(int8_t (*) [32])(param_3 + -0x20);
      in_ZMM9 = ZEXT3264(auVar5);
      fVar3 = *param_4;
      fVar16 = param_4[1];
      fVar17 = param_4[2];
      fVar18 = param_4[3];
      fVar19 = param_4[4];
      fVar20 = param_4[5];
      fVar21 = param_4[6];
      param_3 = param_3 + -0x20;
      pfVar25 = pfVar25 + -8;
      _DAT_180980640 = auVar4;
      if (iVar29 != 0) {
        iVar36 = 0x800;
        iVar34 = 0x400;
        iVar35 = iVar29;
        iVar30 = 0;
        do {
          pfVar24 = pfVar25 + (iVar34 + -0x400);
          fVar46 = auVar5._0_4_;
          fVar48 = auVar5._4_4_;
          auVar6._4_4_ = fVar48 * pfVar24[1];
          auVar6._0_4_ = fVar46 * *pfVar24;
          fVar49 = auVar5._8_4_;
          auVar6._8_4_ = fVar49 * pfVar24[2];
          fVar50 = auVar5._12_4_;
          auVar6._12_4_ = fVar50 * pfVar24[3];
          fVar51 = auVar5._16_4_;
          auVar6._16_4_ = fVar51 * pfVar24[4];
          fVar52 = auVar5._20_4_;
          auVar6._20_4_ = fVar52 * pfVar24[5];
          fVar53 = auVar5._24_4_;
          auVar6._24_4_ = fVar53 * pfVar24[6];
          auVar6._28_4_ = pfVar24[7];
          auVar6 = vpermps_avx2(auVar4,auVar6);
          pfVar26 = pfVar25 + (iVar34 + -0x200);
          auVar7._4_4_ = fVar48 * pfVar26[1];
          auVar7._0_4_ = fVar46 * *pfVar26;
          auVar7._8_4_ = fVar49 * pfVar26[2];
          auVar7._12_4_ = fVar50 * pfVar26[3];
          auVar7._16_4_ = fVar51 * pfVar26[4];
          auVar7._20_4_ = fVar52 * pfVar26[5];
          auVar7._24_4_ = fVar53 * pfVar26[6];
          auVar7._28_4_ = pfVar26[7];
          auVar7 = vpermps_avx2(auVar4,auVar7);
          in_ZMM8 = ZEXT3264(auVar7);
          pfVar2 = pfVar25 + iVar34;
          auVar8._4_4_ = fVar48 * pfVar2[1];
          auVar8._0_4_ = fVar46 * *pfVar2;
          auVar8._8_4_ = fVar49 * pfVar2[2];
          auVar8._12_4_ = fVar50 * pfVar2[3];
          auVar8._16_4_ = fVar51 * pfVar2[4];
          auVar8._20_4_ = fVar52 * pfVar2[5];
          auVar8._24_4_ = fVar53 * pfVar2[6];
          auVar8._28_4_ = pfVar24[7];
          auVar8 = vpermps_avx2(auVar4,auVar8);
          in_ZMM7 = ZEXT3264(auVar8);
          iVar1 = iVar34 + 0x200;
          iVar34 = iVar34 + 0x800;
          pfVar24 = pfVar25 + iVar1;
          auVar9._4_4_ = fVar48 * pfVar24[1];
          auVar9._0_4_ = fVar46 * *pfVar24;
          auVar9._8_4_ = fVar49 * pfVar24[2];
          auVar9._12_4_ = fVar50 * pfVar24[3];
          auVar9._16_4_ = fVar51 * pfVar24[4];
          auVar9._20_4_ = fVar52 * pfVar24[5];
          auVar9._24_4_ = fVar53 * pfVar24[6];
          auVar9._28_4_ = pfVar26[7];
          auVar9 = vpermps_avx2(auVar4,auVar9);
          in_ZMM6 = ZEXT3264(auVar9);
          pfVar24 = pfVar33 + (iVar36 + -0x800);
          auVar41._0_4_ = fVar3 * *pfVar24 + auVar6._0_4_;
          auVar41._4_4_ = fVar16 * pfVar24[1] + auVar6._4_4_;
          auVar41._8_4_ = fVar17 * pfVar24[2] + auVar6._8_4_;
          auVar41._12_4_ = fVar18 * pfVar24[3] + auVar6._12_4_;
          auVar41._16_4_ = fVar19 * pfVar24[4] + auVar6._16_4_;
          auVar41._20_4_ = fVar20 * pfVar24[5] + auVar6._20_4_;
          auVar41._24_4_ = fVar21 * pfVar24[6] + auVar6._24_4_;
          auVar41._28_4_ = pfVar24[7] + auVar6._28_4_;
          pfVar24 = pfVar33 + (iVar36 + -0x400);
          pfVar26 = pfVar33 + iVar36;
          auVar37._0_4_ = fVar3 * *pfVar24 + auVar7._0_4_;
          auVar37._4_4_ = fVar16 * pfVar24[1] + auVar7._4_4_;
          auVar37._8_4_ = fVar17 * pfVar24[2] + auVar7._8_4_;
          auVar37._12_4_ = fVar18 * pfVar24[3] + auVar7._12_4_;
          auVar37._16_4_ = fVar19 * pfVar24[4] + auVar7._16_4_;
          auVar37._20_4_ = fVar20 * pfVar24[5] + auVar7._20_4_;
          auVar37._24_4_ = fVar21 * pfVar24[6] + auVar7._24_4_;
          auVar37._28_4_ = pfVar24[7] + auVar7._28_4_;
          iVar1 = iVar36 + 0x400;
          iVar36 = iVar36 + 0x1000;
          auVar39._0_4_ = fVar3 * *pfVar26 + auVar8._0_4_;
          auVar39._4_4_ = fVar16 * pfVar26[1] + auVar8._4_4_;
          auVar39._8_4_ = fVar17 * pfVar26[2] + auVar8._8_4_;
          auVar39._12_4_ = fVar18 * pfVar26[3] + auVar8._12_4_;
          auVar39._16_4_ = fVar19 * pfVar26[4] + auVar8._16_4_;
          auVar39._20_4_ = fVar20 * pfVar26[5] + auVar8._20_4_;
          auVar39._24_4_ = fVar21 * pfVar26[6] + auVar8._24_4_;
          auVar39._28_4_ = pfVar26[7] + auVar8._28_4_;
          auVar6 = vshufps_avx(auVar41,auVar37,0x44);
          pfVar24 = pfVar33 + iVar1;
          auVar38._0_4_ = fVar3 * *pfVar24 + auVar9._0_4_;
          auVar38._4_4_ = fVar16 * pfVar24[1] + auVar9._4_4_;
          auVar38._8_4_ = fVar17 * pfVar24[2] + auVar9._8_4_;
          auVar38._12_4_ = fVar18 * pfVar24[3] + auVar9._12_4_;
          auVar38._16_4_ = fVar19 * pfVar24[4] + auVar9._16_4_;
          auVar38._20_4_ = fVar20 * pfVar24[5] + auVar9._20_4_;
          auVar38._24_4_ = fVar21 * pfVar24[6] + auVar9._24_4_;
          auVar38._28_4_ = in_ZMM4._28_4_ + auVar9._28_4_;
          auVar7 = vshufps_avx(auVar41,auVar37,0xee);
          in_ZMM4 = ZEXT3264(auVar7);
          auVar8 = vshufps_avx(auVar39,auVar38,0x44);
          auVar9 = vshufps_avx(auVar6,auVar8,0x88);
          in_ZMM5 = ZEXT3264(auVar9);
          auVar37 = vshufps_avx(auVar39,auVar38,0xee);
          auVar6 = vshufps_avx(auVar6,auVar8,0xdd);
          auVar8 = vshufps_avx(auVar7,auVar37,0x88);
          *(int8_t (*) [16])(param_2 + iVar30) = auVar9._0_16_;
          *(int8_t (*) [16])(param_2 + (longlong)(int)param_7 + (longlong)iVar30) =
               auVar6._0_16_;
          *(int8_t (*) [16])(param_2 + (longlong)(int)(param_7 * 2) + (longlong)iVar30) =
               auVar8._0_16_;
          auVar7 = vshufps_avx(auVar7,auVar37,0xdd);
          *(int8_t (*) [16])(param_2 + (longlong)(int)(param_7 * 3) + (longlong)iVar30) =
               auVar7._0_16_;
          *(int8_t (*) [16])(param_2 + (longlong)(int)(param_7 * 4) + (longlong)iVar30) =
               auVar9._16_16_;
          *(int8_t (*) [16])(param_2 + (longlong)(int)(param_7 * 5) + (longlong)iVar30) =
               auVar6._16_16_;
          *(int8_t (*) [16])(param_2 + (longlong)(int)(param_7 * 6) + (longlong)iVar30) =
               auVar8._16_16_;
          *(int8_t (*) [16])(param_2 + (longlong)(int)(param_7 * 7) + (longlong)iVar30) =
               auVar7._16_16_;
          iVar35 = iVar35 + -1;
          iVar30 = iVar30 + 4;
        } while (iVar35 != 0);
      }
      param_4 = param_4 + 8;
      param_2 = param_2 + iVar22;
      pfVar33 = pfVar33 + 8;
      auVar4 = _DAT_180980640;
    }
    for (param_9 = param_9 & 7; _DAT_180980640 = auVar4, param_9 != 0; param_9 = param_9 - 1) {
      uVar31 = *(uint *)(param_3 + -4);
      fVar3 = *param_4;
      in_ZMM4 = ZEXT464((uint)fVar3);
      param_3 = param_3 + -4;
      pfVar25 = pfVar25 + -1;
      pfVar24 = pfVar25;
      pfVar26 = pfVar33;
      uVar32 = param_7;
      if (param_7 != 0) {
        do {
          auVar10 = vfmadd132ss_fma(ZEXT416(uVar31),ZEXT416((uint)(fVar3 * *pfVar26)),
                                    ZEXT416((uint)*pfVar24));
          *param_2 = auVar10._0_4_;
          param_2 = param_2 + 1;
          uVar32 = uVar32 - 1;
          pfVar24 = pfVar24 + 0x200;
          pfVar26 = pfVar26 + 0x400;
        } while (uVar32 != 0);
      }
      pfVar33 = pfVar33 + 1;
      param_4 = param_4 + 1;
      auVar4 = _DAT_180980640;
    }
    for (iVar28 = (int)param_10 >> 3; iVar28 != 0; iVar28 = iVar28 + -1) {
      auVar5 = vpermps_avx2(auVar4,*(int8_t (*) [32])(param_3 + -0x20));
      fVar3 = *param_4;
      fVar16 = param_4[1];
      fVar17 = param_4[2];
      fVar18 = param_4[3];
      fVar19 = param_4[4];
      fVar20 = param_4[5];
      fVar21 = param_4[6];
      param_3 = param_3 + -0x20;
      pfVar33 = pfVar33 + -8;
      if (iVar29 != 0) {
        iVar36 = 0x800;
        iVar34 = 0x400;
        iVar30 = 0;
        iVar35 = iVar29;
        do {
          pfVar24 = pfVar25 + (iVar34 + -0x400);
          fVar46 = auVar5._0_4_;
          auVar43._0_4_ = fVar46 * *pfVar24;
          fVar48 = auVar5._4_4_;
          auVar43._4_4_ = fVar48 * pfVar24[1];
          fVar49 = auVar5._8_4_;
          auVar43._8_4_ = fVar49 * pfVar24[2];
          fVar50 = auVar5._12_4_;
          auVar43._12_4_ = fVar50 * pfVar24[3];
          fVar51 = auVar5._16_4_;
          auVar43._16_4_ = fVar51 * pfVar24[4];
          fVar52 = auVar5._20_4_;
          auVar43._20_4_ = fVar52 * pfVar24[5];
          auVar43._28_36_ = in_ZMM6._28_36_;
          fVar53 = auVar5._24_4_;
          auVar43._24_4_ = fVar53 * pfVar24[6];
          in_ZMM6 = ZEXT3264(auVar43._0_32_);
          pfVar26 = pfVar25 + (iVar34 + -0x200);
          pfVar2 = pfVar25 + iVar34;
          auVar45._0_4_ = fVar46 * *pfVar2;
          auVar45._4_4_ = fVar48 * pfVar2[1];
          auVar45._8_4_ = fVar49 * pfVar2[2];
          auVar45._12_4_ = fVar50 * pfVar2[3];
          auVar45._16_4_ = fVar51 * pfVar2[4];
          auVar45._20_4_ = fVar52 * pfVar2[5];
          auVar45._28_36_ = in_ZMM8._28_36_;
          auVar45._24_4_ = fVar53 * pfVar2[6];
          in_ZMM8 = ZEXT3264(auVar45._0_32_);
          auVar44._0_4_ = fVar46 * *pfVar26;
          auVar44._4_4_ = fVar48 * pfVar26[1];
          auVar44._8_4_ = fVar49 * pfVar26[2];
          auVar44._12_4_ = fVar50 * pfVar26[3];
          auVar44._16_4_ = fVar51 * pfVar26[4];
          auVar44._20_4_ = fVar52 * pfVar26[5];
          auVar44._28_36_ = in_ZMM7._28_36_;
          auVar44._24_4_ = fVar53 * pfVar26[6];
          in_ZMM7 = ZEXT3264(auVar44._0_32_);
          iVar1 = iVar34 + 0x200;
          iVar34 = iVar34 + 0x800;
          pfVar26 = pfVar25 + iVar1;
          auVar47._0_4_ = fVar46 * *pfVar26;
          auVar47._4_4_ = fVar48 * pfVar26[1];
          auVar47._8_4_ = fVar49 * pfVar26[2];
          auVar47._12_4_ = fVar50 * pfVar26[3];
          auVar47._16_4_ = fVar51 * pfVar26[4];
          auVar47._20_4_ = fVar52 * pfVar26[5];
          auVar47._28_36_ = in_ZMM9._28_36_;
          auVar47._24_4_ = fVar53 * pfVar26[6];
          in_ZMM9 = ZEXT3264(auVar47._0_32_);
          auVar6 = vpermps_avx2(auVar4,*(int8_t (*) [32])(pfVar33 + (iVar36 + -0x800)));
          auVar42._0_4_ = auVar6._0_4_ * fVar3;
          auVar42._4_4_ = auVar6._4_4_ * fVar16;
          auVar42._8_4_ = auVar6._8_4_ * fVar17;
          auVar42._12_4_ = auVar6._12_4_ * fVar18;
          auVar42._16_4_ = auVar6._16_4_ * fVar19;
          auVar42._20_4_ = auVar6._20_4_ * fVar20;
          auVar42._28_36_ = in_ZMM5._28_36_;
          auVar42._24_4_ = auVar6._24_4_ * fVar21;
          auVar6 = vpermps_avx2(auVar4,*(int8_t (*) [32])(pfVar33 + (iVar36 + -0x400)));
          auVar11._4_4_ = auVar6._4_4_ * fVar16;
          auVar11._0_4_ = auVar6._0_4_ * fVar3;
          auVar11._8_4_ = auVar6._8_4_ * fVar17;
          auVar11._12_4_ = auVar6._12_4_ * fVar18;
          auVar11._16_4_ = auVar6._16_4_ * fVar19;
          auVar11._20_4_ = auVar6._20_4_ * fVar20;
          auVar11._24_4_ = auVar6._24_4_ * fVar21;
          auVar11._28_4_ = pfVar24[7];
          auVar6 = vpermps_avx2(auVar4,*(int8_t (*) [32])(pfVar33 + iVar36));
          auVar12._4_4_ = auVar6._4_4_ * fVar16;
          auVar12._0_4_ = auVar6._0_4_ * fVar3;
          auVar12._8_4_ = auVar6._8_4_ * fVar17;
          auVar12._12_4_ = auVar6._12_4_ * fVar18;
          auVar12._16_4_ = auVar6._16_4_ * fVar19;
          auVar12._20_4_ = auVar6._20_4_ * fVar20;
          auVar12._24_4_ = auVar6._24_4_ * fVar21;
          auVar12._28_4_ = SUB324(*(int8_t (*) [32])(pfVar33 + iVar36),0x1c);
          auVar7 = vsubps_avx(auVar43._0_32_,auVar42._0_32_);
          auVar9 = vsubps_avx(auVar45._0_32_,auVar12);
          iVar1 = iVar36 + 0x400;
          iVar36 = iVar36 + 0x1000;
          auVar8 = vpermps_avx2(auVar4,*(int8_t (*) [32])(pfVar33 + iVar1));
          auVar13._4_4_ = auVar8._4_4_ * fVar16;
          auVar13._0_4_ = auVar8._0_4_ * fVar3;
          auVar13._8_4_ = auVar8._8_4_ * fVar17;
          auVar13._12_4_ = auVar8._12_4_ * fVar18;
          auVar13._16_4_ = auVar8._16_4_ * fVar19;
          auVar13._20_4_ = auVar8._20_4_ * fVar20;
          auVar13._24_4_ = auVar8._24_4_ * fVar21;
          auVar13._28_4_ = auVar6._28_4_;
          auVar37 = vsubps_avx(auVar47._0_32_,auVar13);
          auVar8 = vsubps_avx(auVar44._0_32_,auVar11);
          auVar6 = vshufps_avx(auVar7,auVar8,0x44);
          auVar7 = vshufps_avx(auVar7,auVar8,0xee);
          in_ZMM4 = ZEXT3264(auVar7);
          auVar8 = vshufps_avx(auVar9,auVar37,0xee);
          auVar9 = vshufps_avx(auVar9,auVar37,0x44);
          auVar37 = vshufps_avx(auVar6,auVar9,0x88);
          auVar6 = vshufps_avx(auVar6,auVar9,0xdd);
          in_ZMM5 = ZEXT3264(auVar6);
          auVar9 = vshufps_avx(auVar7,auVar8,0x88);
          *(int8_t (*) [16])(param_2 + iVar30) = auVar37._0_16_;
          *(int8_t (*) [16])(param_2 + (longlong)(int)param_7 + (longlong)iVar30) =
               auVar6._0_16_;
          *(int8_t (*) [16])(param_2 + (longlong)(int)(param_7 * 2) + (longlong)iVar30) =
               auVar9._0_16_;
          auVar7 = vshufps_avx(auVar7,auVar8,0xdd);
          *(int8_t (*) [16])(param_2 + (longlong)(int)(param_7 * 3) + (longlong)iVar30) =
               auVar7._0_16_;
          *(int8_t (*) [16])(param_2 + (longlong)(int)(param_7 * 4) + (longlong)iVar30) =
               auVar37._16_16_;
          *(int8_t (*) [16])(param_2 + (longlong)(int)(param_7 * 5) + (longlong)iVar30) =
               auVar6._16_16_;
          *(int8_t (*) [16])(param_2 + (longlong)(int)(param_7 * 6) + (longlong)iVar30) =
               auVar9._16_16_;
          *(int8_t (*) [16])(param_2 + (longlong)(int)(param_7 * 7) + (longlong)iVar30) =
               auVar7._16_16_;
          iVar35 = iVar35 + -1;
          iVar30 = iVar30 + 4;
        } while (iVar35 != 0);
      }
      param_4 = param_4 + 8;
      param_2 = param_2 + iVar22;
      pfVar25 = pfVar25 + 8;
    }
    param_10 = param_10 & 7;
    if (param_10 != 0) {
      param_3 = param_3 - (longlong)pfVar33;
      lVar23 = (longlong)pfVar25 - (longlong)param_4;
      pfVar25 = pfVar33;
      do {
        fVar3 = *param_4;
        pfVar33 = pfVar25 + -1;
        uVar31 = *(uint *)((longlong)pfVar25 + param_3 + -4);
        if (param_7 != 0) {
          puVar27 = (uint *)(lVar23 + (longlong)param_4);
          pfVar25 = pfVar33;
          uVar32 = param_7;
          do {
            auVar10 = vfmsub213ss_fma(ZEXT416(*puVar27),ZEXT416(uVar31),
                                      ZEXT416((uint)(fVar3 * *pfVar25)));
            *param_2 = auVar10._0_4_;
            param_2 = param_2 + 1;
            puVar27 = puVar27 + 0x200;
            pfVar25 = pfVar25 + 0x400;
            uVar32 = uVar32 - 1;
          } while (uVar32 != 0);
        }
        param_4 = param_4 + 1;
        param_10 = param_10 - 1;
        pfVar25 = pfVar33;
      } while (param_10 != 0);
    }
    for (iVar28 = (int)param_11 >> 3; iVar28 != 0; iVar28 = iVar28 + -1) {
      pfVar33 = pfVar33 + -8;
      if (iVar29 != 0) {
        iVar34 = 0x800;
        iVar30 = 0;
        iVar35 = iVar29;
        do {
          pfVar25 = pfVar33 + (iVar34 + -0x800);
          auVar5._4_4_ = pfVar25[1] * -1.0;
          auVar5._0_4_ = *pfVar25 * -1.0;
          auVar5._8_4_ = pfVar25[2] * -1.0;
          auVar5._12_4_ = pfVar25[3] * -1.0;
          auVar5._16_4_ = pfVar25[4] * -1.0;
          auVar5._20_4_ = pfVar25[5] * -1.0;
          auVar5._24_4_ = pfVar25[6] * -1.0;
          auVar5._28_4_ = pfVar25[7];
          pfVar25 = pfVar33 + (iVar34 + -0x400);
          pfVar24 = pfVar33 + iVar34;
          auVar40._0_4_ = *pfVar24 * -1.0;
          auVar40._4_4_ = pfVar24[1] * -1.0;
          auVar40._8_4_ = pfVar24[2] * -1.0;
          auVar40._12_4_ = pfVar24[3] * -1.0;
          auVar40._16_4_ = pfVar24[4] * -1.0;
          auVar40._20_4_ = pfVar24[5] * -1.0;
          auVar40._28_36_ = in_ZMM4._28_36_;
          auVar40._24_4_ = pfVar24[6] * -1.0;
          iVar36 = iVar34 + 0x400;
          iVar34 = iVar34 + 0x1000;
          auVar14._4_4_ = pfVar25[1] * -1.0;
          auVar14._0_4_ = *pfVar25 * -1.0;
          auVar14._8_4_ = pfVar25[2] * -1.0;
          auVar14._12_4_ = pfVar25[3] * -1.0;
          auVar14._16_4_ = pfVar25[4] * -1.0;
          auVar14._20_4_ = pfVar25[5] * -1.0;
          auVar14._24_4_ = pfVar25[6] * -1.0;
          auVar14._28_4_ = pfVar25[7];
          auVar4 = vshufps_avx(auVar5,auVar14,0x44);
          auVar5 = vshufps_avx(auVar5,auVar14,0xee);
          pfVar25 = pfVar33 + iVar36;
          auVar15._4_4_ = pfVar25[1] * -1.0;
          auVar15._0_4_ = *pfVar25 * -1.0;
          auVar15._8_4_ = pfVar25[2] * -1.0;
          auVar15._12_4_ = pfVar25[3] * -1.0;
          auVar15._16_4_ = pfVar25[4] * -1.0;
          auVar15._20_4_ = pfVar25[5] * -1.0;
          auVar15._24_4_ = pfVar25[6] * -1.0;
          auVar15._28_4_ = pfVar24[7];
          auVar6 = vshufps_avx(auVar40._0_32_,auVar15,0x44);
          auVar7 = vshufps_avx(auVar4,auVar6,0x88);
          auVar4 = vshufps_avx(auVar4,auVar6,0xdd);
          auVar6 = vshufps_avx(auVar40._0_32_,auVar15,0xee);
          auVar8 = vshufps_avx(auVar5,auVar6,0xdd);
          *(int8_t (*) [16])(param_2 + iVar30) = auVar8._16_16_;
          auVar5 = vshufps_avx(auVar5,auVar6,0x88);
          in_ZMM4 = ZEXT3264(auVar5);
          *(int8_t (*) [16])(param_2 + (longlong)(int)param_7 + (longlong)iVar30) =
               auVar5._16_16_;
          *(int8_t (*) [16])(param_2 + (longlong)(int)(param_7 * 2) + (longlong)iVar30) =
               auVar4._16_16_;
          *(int8_t (*) [16])(param_2 + (longlong)(int)(param_7 * 3) + (longlong)iVar30) =
               auVar7._16_16_;
          *(int8_t (*) [16])(param_2 + (longlong)iVar30 + (longlong)(int)(param_7 * 4)) =
               auVar8._0_16_;
          *(int8_t (*) [16])(param_2 + (longlong)(int)(param_7 * 5) + (longlong)iVar30) =
               auVar5._0_16_;
          *(int8_t (*) [16])(param_2 + (longlong)(int)(param_7 * 6) + (longlong)iVar30) =
               auVar4._0_16_;
          *(int8_t (*) [16])(param_2 + (longlong)(int)(param_7 * 7) + (longlong)iVar30) =
               auVar7._0_16_;
          iVar35 = iVar35 + -1;
          iVar30 = iVar30 + 4;
        } while (iVar35 != 0);
      }
      param_2 = param_2 + iVar22;
    }
    param_11 = param_11 & 7;
    if (param_11 != 0) {
      do {
        pfVar33 = pfVar33 + -1;
        pfVar25 = pfVar33;
        uVar31 = param_7;
        if (param_7 != 0) {
          do {
            *param_2 = -*pfVar25;
            param_2 = param_2 + 1;
            uVar31 = uVar31 - 1;
            pfVar25 = pfVar25 + 0x400;
          } while (uVar31 != 0);
        }
        param_11 = param_11 - 1;
      } while (param_11 != 0);
      return;
    }
  }
  else {
    FUN_18082b380(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                  param_11);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018082cd15)
// WARNING: Removing unreachable block (ram,0x00018082cd09)
// WARNING: Removing unreachable block (ram,0x00018082c9e7)
// WARNING: Removing unreachable block (ram,0x00018082c6fd)
// WARNING: Removing unreachable block (ram,0x00018082c9c7)
// WARNING: Removing unreachable block (ram,0x00018082c9d3)
// WARNING: Removing unreachable block (ram,0x00018082cd29)
// WARNING: Removing unreachable block (ram,0x00018082cfee)
// WARNING: Removing unreachable block (ram,0x00018082d01e)
// WARNING: Removing unreachable block (ram,0x00018082cd3e)
// WARNING: Removing unreachable block (ram,0x00018082c71d)
// WARNING: Removing unreachable block (ram,0x00018082c70d)
// WARNING: Removing unreachable block (ram,0x00018082c72d)
// WARNING: Removing unreachable block (ram,0x00018082c9fc)
// WARNING: Removing unreachable block (ram,0x00018082cffe)
// WARNING: Removing unreachable block (ram,0x00018082d00e)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



