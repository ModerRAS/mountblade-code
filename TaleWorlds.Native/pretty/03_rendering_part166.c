#include "TaleWorlds.Native.Split.h"

// 03_rendering_part166.c - 1 个函数

// 函数: void FUN_180372ae0(longlong param_1,longlong param_2,longlong param_3)
void FUN_180372ae0(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int8_t auVar4 [16];
  int iVar5;
  int iVar6;
  int iVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  int8_t (*pauVar10) [16];
  longlong lVar11;
  int *piVar12;
  longlong lVar13;
  int **ppiVar14;
  float *pfVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int *piVar18;
  longlong lVar19;
  float *pfVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  int8_t auStack_308 [32];
  int8_t auStack_2e8 [16];
  uint64_t uStack_2d8;
  uint64_t uStack_2d0;
  uint64_t uStack_2c8;
  longlong lStack_2c0;
  int aiStack_2b8 [2];
  uint64_t uStack_2b0;
  int *piStack_2a8;
  longlong lStack_2a0;
  int *piStack_298;
  longlong lStack_290;
  longlong lStack_288;
  longlong lStack_280;
  uint64_t uStack_278;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  int8_t auStack_238 [24];
  int8_t auStack_220 [24];
  int8_t auStack_208 [24];
  int8_t auStack_1f0 [24];
  int8_t auStack_1d8 [24];
  int8_t auStack_1c0 [24];
  int8_t auStack_1a8 [24];
  int8_t auStack_190 [24];
  int32_t uStack_178;
  int32_t uStack_174;
  int32_t uStack_170;
  int32_t uStack_16c;
  int32_t uStack_168;
  int32_t uStack_164;
  int32_t uStack_160;
  int32_t uStack_15c;
  int32_t uStack_158;
  int32_t uStack_154;
  int32_t uStack_150;
  int32_t uStack_14c;
  uint64_t uStack_148;
  uint64_t uStack_140;
  uint64_t uStack_138;
  uint64_t uStack_130;
  uint64_t uStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  ulonglong uStack_b8;
  
  uStack_b8 = _DAT_180bf00a8 ^ (ulonglong)auStack_308;
  if (*(char *)(param_1 + 0x141) == '\0') {
    iVar21 = (int)((*(longlong *)(param_1 + 0x88) - *(longlong *)(param_1 + 0x80)) / 0x28);
  }
  else {
    iVar21 = *(int *)(param_1 + 0x148);
  }
  lVar23 = (longlong)iVar21;
  lStack_288 = param_2;
  lStack_280 = param_3;
  if (0 < iVar21) {
    lVar19 = 0;
    do {
      iVar5 = *(int *)(param_1 + 0x54) + -1;
      iVar21 = (int)(*(float *)(lVar19 + *(longlong *)(param_1 + 0x80)) /
                    *(float *)(param_2 + 0x215c));
      if (iVar21 < 0) {
        iVar21 = 0;
      }
      else if (iVar5 < iVar21) {
        iVar21 = iVar5;
      }
      iVar5 = *(int *)(param_1 + 0x58) + -1;
      iVar6 = (int)(*(float *)(lVar19 + 4 + *(longlong *)(param_1 + 0x80)) /
                   *(float *)(param_2 + 0x215c));
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else if (iVar5 < iVar6) {
        iVar6 = iVar5;
      }
      lVar13 = *(longlong *)(param_1 + 0x110);
      iVar6 = iVar21 * *(int *)(param_1 + 0x58) + iVar6;
      for (piVar12 = *(int **)(lVar13 + ((ulonglong)(longlong)iVar6 %
                                        (ulonglong)*(uint *)(param_1 + 0x118)) * 8);
          piVar12 != (int *)0x0; piVar12 = *(int **)(piVar12 + 4)) {
        if (iVar6 == *piVar12) {
          lVar11 = *(longlong *)(param_1 + 0x118);
          goto LAB_180372c0c;
        }
      }
      lVar11 = *(longlong *)(param_1 + 0x118);
      piVar12 = *(int **)(lVar13 + lVar11 * 8);
LAB_180372c0c:
      if (piVar12 == *(int **)(lVar13 + lVar11 * 8)) {
        uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0x178,8,3);
        uStack_2d8 = (int *)CONCAT44(uStack_2d8._4_4_,iVar6);
        uStack_2d0 = FUN_180372430(uVar8,*(uint64_t *)(param_1 + 0x68));
        FUN_18037f020(param_1 + 0x108,auStack_1f0,&uStack_2d8);
      }
      lVar19 = lVar19 + 0x28;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
  }
  lVar23 = lStack_280;
  iVar5 = *(int *)(param_1 + 0x54);
  iVar6 = 0;
  iVar21 = *(int *)(param_1 + 0x58);
  if (0 < iVar5 * iVar21) {
    do {
      iVar7 = iVar6 / iVar5;
      iVar5 = iVar6 % iVar5;
      lVar19 = *(longlong *)(param_1 + 0x110);
      iVar22 = iVar21 * iVar5 + iVar7;
      uVar16 = (ulonglong)(longlong)iVar22 % (ulonglong)*(uint *)(param_1 + 0x118);
      piVar12 = *(int **)(lVar19 + uVar16 * 8);
      for (piVar1 = piVar12; piVar1 != (int *)0x0; piVar1 = *(int **)(piVar1 + 4)) {
        if (iVar22 == *piVar1) {
          if (piVar1 != (int *)0x0) {
            lVar13 = *(longlong *)(param_1 + 0x118);
            uStack_2d8 = piVar1;
            puVar9 = &uStack_2d8;
            uStack_2d0 = lVar19 + uVar16 * 8;
            goto LAB_180372cf0;
          }
          break;
        }
      }
      lVar13 = *(longlong *)(param_1 + 0x118);
      uStack_2c8 = *(uint64_t *)(lVar19 + lVar13 * 8);
      puVar9 = &uStack_2c8;
      lStack_2c0 = lVar19 + lVar13 * 8;
LAB_180372cf0:
      piVar1 = *(int **)(lVar19 + lVar13 * 8);
      if ((int *)*puVar9 != piVar1) {
        iVar21 = iVar21 * iVar5 + iVar7;
        for (; (piVar18 = piVar1, piVar12 != (int *)0x0 && (piVar18 = piVar12, iVar21 != *piVar12));
            piVar12 = *(int **)(piVar12 + 4)) {
        }
        if (piVar18 == piVar1) {
          uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0x178,8,CONCAT71((int7)((ulonglong)lVar19 >> 8),3));
          aiStack_2b8[0] = iVar21;
          uStack_2b0 = FUN_180372430(uVar8,*(uint64_t *)(param_1 + 0x68));
          pauVar10 = (int8_t (*) [16])FUN_18037f020(param_1 + 0x108,auStack_1d8,aiStack_2b8);
          piVar18 = *(int **)*pauVar10;
          auStack_2e8 = *pauVar10;
        }
        lVar19 = *(longlong *)(piVar18 + 2);
        *(uint64_t *)(lVar19 + 0x18) = 0x4cbebc204cbebc20;
        *(uint64_t *)(lVar19 + 0x20) = 0x7f7fffff4cbebc20;
        *(int32_t *)(lVar19 + 0x48) = 0;
        *(int8_t (*) [16])(lVar19 + 0x38) = _DAT_180a402a0;
        *(int32_t *)(lVar19 + 0x28) = 0xccbebc20;
        *(int32_t *)(lVar19 + 0x2c) = 0xccbebc20;
        *(int32_t *)(lVar19 + 0x30) = 0xccbebc20;
        *(int32_t *)(lVar19 + 0x34) = 0x7f7fffff;
        lVar19 = *(longlong *)(param_1 + 0x110);
        iVar21 = *(int *)(param_1 + 0x58) * iVar5 + iVar7;
        for (piVar12 = *(int **)(lVar19 + ((ulonglong)(longlong)iVar21 %
                                          (ulonglong)*(uint *)(param_1 + 0x118)) * 8);
            piVar12 != (int *)0x0; piVar12 = *(int **)(piVar12 + 4)) {
          if (iVar21 == *piVar12) goto LAB_180372de8;
        }
        piVar12 = *(int **)(lVar19 + *(longlong *)(param_1 + 0x118) * 8);
LAB_180372de8:
        if (piVar12 == *(int **)(lVar19 + *(longlong *)(param_1 + 0x118) * 8)) {
          uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0x178,8,3);
          piStack_2a8 = (int *)CONCAT44(piStack_2a8._4_4_,iVar21);
          lStack_2a0 = FUN_180372430(uVar8,*(uint64_t *)(param_1 + 0x68));
          pauVar10 = (int8_t (*) [16])FUN_18037f020(param_1 + 0x108,auStack_1c0,&piStack_2a8);
          auStack_2e8 = *pauVar10;
          piVar12 = (int *)auStack_2e8._0_8_;
        }
        *(int32_t *)(*(longlong *)(piVar12 + 2) + 0x110) = 0;
        lVar19 = *(longlong *)(param_1 + 0x110);
        iVar7 = *(int *)(param_1 + 0x58) * iVar5 + iVar7;
        for (piVar12 = *(int **)(lVar19 + ((ulonglong)(longlong)iVar7 %
                                          (ulonglong)*(uint *)(param_1 + 0x118)) * 8);
            piVar12 != (int *)0x0; piVar12 = *(int **)(piVar12 + 4)) {
          if (iVar7 == *piVar12) goto LAB_180372e98;
        }
        piVar12 = *(int **)(lVar19 + *(longlong *)(param_1 + 0x118) * 8);
LAB_180372e98:
        if (piVar12 == *(int **)(lVar19 + *(longlong *)(param_1 + 0x118) * 8)) {
          uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0x178,8,3);
          piStack_298 = (int *)CONCAT44(piStack_298._4_4_,iVar7);
          lStack_290 = FUN_180372430(uVar8,*(uint64_t *)(param_1 + 0x68));
          pauVar10 = (int8_t (*) [16])FUN_18037f020(param_1 + 0x108,auStack_1a8,&piStack_298);
          auStack_2e8 = *pauVar10;
          piVar12 = (int *)auStack_2e8._0_8_;
        }
        *(uint64_t *)(*(longlong *)(piVar12 + 2) + 0x108) = 0;
      }
      iVar21 = *(int *)(param_1 + 0x58);
      iVar6 = iVar6 + 1;
      iVar5 = *(int *)(param_1 + 0x54);
    } while (iVar6 < iVar5 * iVar21);
  }
  if (*(char *)(param_1 + 0x141) == '\0') {
    iVar21 = (int)((*(longlong *)(param_1 + 0x88) - *(longlong *)(param_1 + 0x80)) / 0x28);
  }
  else {
    iVar21 = *(int *)(param_1 + 0x148);
  }
  uStack_2d8 = (int *)(longlong)iVar21;
  if (0 < iVar21) {
    lVar19 = 0;
    do {
      pfVar20 = (float *)(*(longlong *)(param_1 + 0x80) + lVar19);
      iVar5 = *(int *)(param_1 + 0x54) + -1;
      iVar21 = (int)(*pfVar20 / *(float *)(lStack_288 + 0x215c));
      if (iVar21 < 0) {
        iVar21 = 0;
      }
      else if (iVar5 < iVar21) {
        iVar21 = iVar5;
      }
      iVar5 = *(int *)(param_1 + 0x58);
      iVar6 = (int)(pfVar20[1] / *(float *)(lStack_288 + 0x215c));
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else if (iVar5 + -1 < iVar6) {
        iVar6 = iVar5 + -1;
      }
      if ((uint)(*(longlong *)(lVar23 + 0x10) - *(longlong *)(lVar23 + 8) >> 3) <=
          (uint)(int)*(char *)(pfVar20 + 8)) {
        *(int8_t *)(pfVar20 + 8) = 0;
        iVar5 = *(int *)(param_1 + 0x58);
      }
      lVar13 = *(longlong *)(param_1 + 0x110);
      iVar5 = iVar5 * iVar21 + iVar6;
      for (piVar12 = *(int **)(lVar13 + ((ulonglong)(longlong)iVar5 %
                                        (ulonglong)*(uint *)(param_1 + 0x118)) * 8);
          piVar12 != (int *)0x0; piVar12 = *(int **)(piVar12 + 4)) {
        if (iVar5 == *piVar12) {
          lVar11 = *(longlong *)(param_1 + 0x118);
          goto LAB_18037309e;
        }
      }
      lVar11 = *(longlong *)(param_1 + 0x118);
      piVar12 = *(int **)(lVar13 + lVar11 * 8);
LAB_18037309e:
      if (piVar12 == *(int **)(lVar13 + lVar11 * 8)) {
        uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0x178,8,3);
        piStack_298 = (int *)CONCAT44(piStack_298._4_4_,iVar5);
        lStack_290 = FUN_180372430(uVar8,*(uint64_t *)(param_1 + 0x68));
        pauVar10 = (int8_t (*) [16])FUN_18037f020(param_1 + 0x108,auStack_238,&piStack_298);
        piVar12 = *(int **)*pauVar10;
        auStack_2e8 = *pauVar10;
      }
      FUN_18037d8b0(*(uint64_t *)(piVar12 + 2),pfVar20,lVar23);
      plVar2 = *(longlong **)
                (*(longlong *)
                  (*(longlong *)(lVar23 + 8) +
                  ((ulonglong)(uint)(int)*(char *)(pfVar20 + 8) %
                  (ulonglong)(*(longlong *)(lVar23 + 0x10) - *(longlong *)(lVar23 + 8) >> 3)) * 8) +
                0x28);
      if (plVar2 != (longlong *)0x0) {
        fVar26 = *pfVar20;
        fVar27 = pfVar20[1];
        fVar28 = pfVar20[2];
        if (*(code **)(*plVar2 + 0x198) == (code *)&unknown_var_2544_ptr) {
          pfVar15 = (float *)((longlong)plVar2 + 0x214);
        }
        else {
          pfVar15 = (float *)(**(code **)(*plVar2 + 0x198))(plVar2);
        }
        fStack_270 = *pfVar15;
        fStack_26c = pfVar15[1];
        fStack_268 = pfVar15[2];
        fStack_264 = pfVar15[3];
        fStack_260 = pfVar15[4];
        fStack_25c = pfVar15[5];
        fStack_258 = pfVar15[6];
        fStack_254 = pfVar15[7];
        fVar24 = pfVar20[6];
        lVar23 = *(longlong *)(param_1 + 0x110);
        iVar5 = *(int *)(param_1 + 0x58) * iVar21 + iVar6;
        fVar25 = fStack_270 * fVar24 + fVar26;
        fVar26 = fStack_260 * fVar24 + fVar26;
        fVar29 = fStack_26c * fVar24 + fVar27;
        fVar30 = fStack_268 * fVar24 + fVar28;
        fVar27 = fStack_25c * fVar24 + fVar27;
        fVar28 = fStack_258 * fVar24 + fVar28;
        for (piVar12 = *(int **)(lVar23 + ((ulonglong)(longlong)iVar5 %
                                          (ulonglong)*(uint *)(param_1 + 0x118)) * 8);
            piVar12 != (int *)0x0; piVar12 = *(int **)(piVar12 + 4)) {
          if (iVar5 == *piVar12) {
            lVar13 = *(longlong *)(param_1 + 0x118);
            goto LAB_18037321d;
          }
        }
        lVar13 = *(longlong *)(param_1 + 0x118);
        piVar12 = *(int **)(lVar23 + lVar13 * 8);
LAB_18037321d:
        if (piVar12 == *(int **)(lVar23 + lVar13 * 8)) {
          uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0x178,8,3);
          piStack_2a8 = (int *)CONCAT44(piStack_2a8._4_4_,iVar5);
          lStack_2a0 = FUN_180372430(uVar8,*(uint64_t *)(param_1 + 0x68));
          pauVar10 = (int8_t (*) [16])FUN_18037f020(param_1 + 0x108,auStack_220,&piStack_2a8);
          piVar12 = *(int **)*pauVar10;
          auStack_2e8 = *pauVar10;
        }
        lVar23 = *(longlong *)(piVar12 + 2);
        if (fVar25 <= fVar26) {
          if (fVar25 < *(float *)(lVar23 + 0x18)) {
            *(float *)(lVar23 + 0x18) = fVar25;
          }
          if (fVar29 < *(float *)(lVar23 + 0x1c)) {
            *(float *)(lVar23 + 0x1c) = fVar29;
          }
          if (fVar30 < *(float *)(lVar23 + 0x20)) {
            *(float *)(lVar23 + 0x20) = fVar30;
          }
          if (*(float *)(lVar23 + 0x28) <= fVar26 && fVar26 != *(float *)(lVar23 + 0x28)) {
            *(float *)(lVar23 + 0x28) = fVar26;
          }
          if (*(float *)(lVar23 + 0x2c) <= fVar27 && fVar27 != *(float *)(lVar23 + 0x2c)) {
            *(float *)(lVar23 + 0x2c) = fVar27;
          }
          if (*(float *)(lVar23 + 0x30) <= fVar28 && fVar28 != *(float *)(lVar23 + 0x30)) {
            *(float *)(lVar23 + 0x30) = fVar28;
          }
        }
        fVar26 = pfVar20[6];
        if (*(code **)(*plVar2 + 0x198) == (code *)&unknown_var_2544_ptr) {
          lVar23 = (longlong)plVar2 + 0x214;
        }
        else {
          lVar23 = (**(code **)(*plVar2 + 0x198))(plVar2);
        }
        fVar26 = fVar26 * *(float *)(lVar23 + 0x30);
        lVar23 = FUN_180372570(param_1,iVar21,iVar6);
        if ((float)*(int *)(lVar23 + 0x110) < fVar26) {
          lVar23 = *(longlong *)(param_1 + 0x110);
          iVar5 = *(int *)(param_1 + 0x58) * iVar21 + iVar6;
          for (piVar12 = *(int **)(lVar23 + ((ulonglong)(longlong)iVar5 %
                                            (ulonglong)*(uint *)(param_1 + 0x118)) * 8);
              piVar12 != (int *)0x0; piVar12 = *(int **)(piVar12 + 4)) {
            if (iVar5 == *piVar12) {
              lVar13 = *(longlong *)(param_1 + 0x118);
              goto LAB_18037336c;
            }
          }
          lVar13 = *(longlong *)(param_1 + 0x118);
          piVar12 = *(int **)(lVar23 + lVar13 * 8);
LAB_18037336c:
          if (piVar12 == *(int **)(lVar23 + lVar13 * 8)) {
            uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0x178,8,3);
            aiStack_2b8[0] = iVar5;
            uStack_2b0 = FUN_180372430(uVar8,*(uint64_t *)(param_1 + 0x68));
            pauVar10 = (int8_t (*) [16])FUN_18037f020(param_1 + 0x108,auStack_208,aiStack_2b8);
            piVar12 = *(int **)*pauVar10;
            auStack_2e8 = *pauVar10;
          }
          *(int *)(*(longlong *)(piVar12 + 2) + 0x110) = (int)fVar26;
        }
        lVar13 = FUN_180372570(param_1,iVar21,iVar6);
        lVar23 = *(longlong *)(param_1 + 0x110);
        lVar13 = *(longlong *)(lVar13 + 0x108);
        iVar6 = *(int *)(param_1 + 0x58) * iVar21 + iVar6;
        for (piVar12 = *(int **)(lVar23 + ((ulonglong)(longlong)iVar6 %
                                          (ulonglong)*(uint *)(param_1 + 0x118)) * 8);
            piVar12 != (int *)0x0; piVar12 = *(int **)(piVar12 + 4)) {
          if (iVar6 == *piVar12) goto LAB_180373428;
        }
        piVar12 = *(int **)(lVar23 + *(longlong *)(param_1 + 0x118) * 8);
LAB_180373428:
        if (piVar12 == *(int **)(lVar23 + *(longlong *)(param_1 + 0x118) * 8)) {
          uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0x178,8,3);
          uStack_2c8 = CONCAT44(uStack_2c8._4_4_,iVar6);
          lStack_2c0 = FUN_180372430(uVar8,*(uint64_t *)(param_1 + 0x68));
          pauVar10 = (int8_t (*) [16])FUN_18037f020(param_1 + 0x108,auStack_190,&uStack_2c8);
          auStack_2e8 = *pauVar10;
          piVar12 = (int *)auStack_2e8._0_8_;
        }
        *(longlong *)(*(longlong *)(piVar12 + 2) + 0x108) = lVar13 + 1;
        lVar23 = lStack_280;
      }
      lVar19 = lVar19 + 0x28;
      uStack_2d8 = (int *)((longlong)uStack_2d8 + -1);
    } while (uStack_2d8 != (int *)0x0);
    iVar5 = *(int *)(param_1 + 0x54);
  }
  iVar21 = *(int *)(param_1 + 0x58);
  iVar6 = 0;
  if (0 < iVar5 * iVar21) {
    do {
      uVar16 = (longlong)iVar6 / (longlong)iVar5;
      uVar3 = (longlong)iVar6 % (longlong)iVar5;
      lVar23 = *(longlong *)(param_1 + 0x110);
      iVar7 = (int)uVar3;
      iVar5 = (int)uVar16;
      iVar22 = iVar21 * iVar7 + iVar5;
      uVar17 = (ulonglong)(longlong)iVar22 % (ulonglong)*(uint *)(param_1 + 0x118);
      piVar12 = *(int **)(lVar23 + uVar17 * 8);
      for (piVar1 = piVar12; piVar1 != (int *)0x0; piVar1 = *(int **)(piVar1 + 4)) {
        if (iVar22 == *piVar1) {
          if (piVar1 != (int *)0x0) {
            lVar19 = *(longlong *)(param_1 + 0x118);
            piStack_298 = piVar1;
            ppiVar14 = &piStack_298;
            lStack_290 = lVar23 + uVar17 * 8;
            goto LAB_180373580;
          }
          break;
        }
      }
      lVar19 = *(longlong *)(param_1 + 0x118);
      piStack_2a8 = *(int **)(lVar23 + lVar19 * 8);
      ppiVar14 = &piStack_2a8;
      lStack_2a0 = lVar23 + lVar19 * 8;
LAB_180373580:
      piVar1 = *(int **)(lVar23 + lVar19 * 8);
      if (*ppiVar14 != piVar1) {
        iVar21 = iVar7 * iVar21 + iVar5;
        for (; (piVar18 = piVar1, piVar12 != (int *)0x0 && (piVar18 = piVar12, iVar21 != *piVar12));
            piVar12 = *(int **)(piVar12 + 4)) {
        }
        if (piVar18 == piVar1) {
          uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0x178,8,CONCAT71((int7)((ulonglong)lVar23 >> 8),3));
          aiStack_2b8[0] = iVar21;
          uStack_2b0 = FUN_180372430(uVar8,*(uint64_t *)(param_1 + 0x68));
          pauVar10 = (int8_t (*) [16])FUN_18037f020(param_1 + 0x108,auStack_208,aiStack_2b8);
          piVar18 = *(int **)*pauVar10;
          auStack_2e8 = *pauVar10;
        }
        lVar23 = *(longlong *)(piVar18 + 2);
        fVar26 = *(float *)(lVar23 + 0x28);
        if (fVar26 < *(float *)(lVar23 + 0x18)) {
          *(int32_t *)(lVar23 + 0x48) = 0;
          *(uint64_t *)(lVar23 + 0x18) = 0;
          *(uint64_t *)(lVar23 + 0x20) = 0;
          *(uint64_t *)(lVar23 + 0x28) = 0;
          *(uint64_t *)(lVar23 + 0x30) = 0;
          *(uint64_t *)(lVar23 + 0x38) = 0;
          *(uint64_t *)(lVar23 + 0x40) = 0;
        }
        else {
          fVar27 = (fVar26 + *(float *)(lVar23 + 0x18)) * 0.5;
          fVar24 = (*(float *)(lVar23 + 0x2c) + *(float *)(lVar23 + 0x1c)) * 0.5;
          fVar29 = (*(float *)(lVar23 + 0x30) + *(float *)(lVar23 + 0x20)) * 0.5;
          *(float *)(lVar23 + 0x38) = fVar27;
          *(float *)(lVar23 + 0x3c) = fVar24;
          *(float *)(lVar23 + 0x40) = fVar29;
          *(int32_t *)(lVar23 + 0x44) = 0x7f7fffff;
          fVar28 = *(float *)(lVar23 + 0x30) - *(float *)(lVar23 + 0x40);
          fVar25 = *(float *)(lVar23 + 0x2c) - *(float *)(lVar23 + 0x3c);
          uStack_2d8 = (int *)CONCAT44(fVar24,fVar27);
          uStack_2d0 = CONCAT44(0x7f7fffff,fVar29);
          *(float *)(lVar23 + 0x48) =
               SQRT(fVar25 * fVar25 + (fVar26 - fVar27) * (fVar26 - fVar27) + fVar28 * fVar28);
        }
        lVar23 = *(longlong *)(param_1 + 0x110);
        uStack_178 = 0;
        uStack_174 = 0;
        uStack_170 = 0;
        uStack_16c = 0x7f7fffff;
        uStack_168 = 0;
        uStack_164 = 0;
        uStack_160 = 0;
        uStack_15c = 0x7f7fffff;
        uStack_158 = 0;
        uStack_154 = 0;
        uStack_150 = 0;
        uStack_14c = 0x7f7fffff;
        iVar21 = *(int *)(param_1 + 0x58) * iVar7 + iVar5;
        uStack_c8 = 0;
        uStack_148 = 0;
        uStack_140 = 0;
        uStack_138 = 0;
        uStack_130 = 0;
        uStack_128 = 0;
        uStack_120 = 0;
        uStack_118 = 0;
        uStack_110 = 0;
        piVar12 = *(int **)(lVar23 + ((ulonglong)(longlong)iVar21 %
                                     (ulonglong)*(uint *)(param_1 + 0x118)) * 8);
        uStack_108 = 0;
        uStack_100 = 0;
        uStack_f8 = 0;
        uStack_f0 = 0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        for (; piVar12 != (int *)0x0; piVar12 = *(int **)(piVar12 + 4)) {
          if (iVar21 == *piVar12) goto LAB_180373799;
        }
        piVar12 = *(int **)(lVar23 + *(longlong *)(param_1 + 0x118) * 8);
LAB_180373799:
        if (piVar12 == *(int **)(lVar23 + *(longlong *)(param_1 + 0x118) * 8)) {
          uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0,8,3);
          uStack_2c8 = CONCAT44(uStack_2c8._4_4_,iVar21);
          lStack_2c0 = FUN_180372430(uVar8,*(uint64_t *)(param_1 + 0x68));
          pauVar10 = (int8_t (*) [16])FUN_18037f020(param_1 + 0x108,auStack_220,&uStack_2c8);
          piVar12 = *(int **)*pauVar10;
          auStack_2e8 = *pauVar10;
        }
        FUN_18063ad30(&uStack_178,*(longlong *)(piVar12 + 2) + 0x18,&system_data_0300);
        lVar19 = FUN_180372570(param_1,uVar3 & 0xffffffff,uVar16 & 0xffffffff);
        lVar23 = *(longlong *)(param_1 + 0x110);
        iVar5 = *(int *)(param_1 + 0x58) * iVar7 + iVar5;
        uStack_c8 = CONCAT44((float)*(int *)(lVar19 + 0x110),(int32_t)uStack_c8);
        for (piVar12 = *(int **)(lVar23 + ((ulonglong)(longlong)iVar5 %
                                          (ulonglong)*(uint *)(param_1 + 0x118)) * 8);
            piVar12 != (int *)0x0; piVar12 = *(int **)(piVar12 + 4)) {
          if (iVar5 == *piVar12) goto LAB_180373878;
        }
        piVar12 = *(int **)(lVar23 + *(longlong *)(param_1 + 0x118) * 8);
LAB_180373878:
        if (piVar12 == *(int **)(lVar23 + *(longlong *)(param_1 + 0x118) * 8)) {
          uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0x178,8,3);
          lStack_280 = CONCAT44(lStack_280._4_4_,iVar5);
          uStack_278 = FUN_180372430(uVar8,*(uint64_t *)(param_1 + 0x68));
          pauVar10 = (int8_t (*) [16])FUN_18037f020(param_1 + 0x108,auStack_238,&lStack_280);
          piVar12 = *(int **)*pauVar10;
          auStack_2e8 = *pauVar10;
        }
        lVar23 = *(longlong *)(piVar12 + 2);
        *(ulonglong *)(lVar23 + 0x4c) = CONCAT44(uStack_174,uStack_178);
        *(ulonglong *)(lVar23 + 0x54) = CONCAT44(uStack_16c,uStack_170);
        *(ulonglong *)(lVar23 + 0x5c) = CONCAT44(uStack_164,uStack_168);
        *(ulonglong *)(lVar23 + 100) = CONCAT44(uStack_15c,uStack_160);
        *(ulonglong *)(lVar23 + 0x6c) = CONCAT44(uStack_154,uStack_158);
        *(ulonglong *)(lVar23 + 0x74) = CONCAT44(uStack_14c,uStack_150);
        *(uint64_t *)(lVar23 + 0x7c) = uStack_148;
        *(uint64_t *)(lVar23 + 0x84) = uStack_140;
        *(uint64_t *)(lVar23 + 0x8c) = uStack_138;
        *(uint64_t *)(lVar23 + 0x94) = uStack_130;
        *(uint64_t *)(lVar23 + 0x9c) = uStack_128;
        *(uint64_t *)(lVar23 + 0xa4) = uStack_120;
        *(uint64_t *)(lVar23 + 0xac) = uStack_118;
        *(uint64_t *)(lVar23 + 0xb4) = uStack_110;
        *(uint64_t *)(lVar23 + 0xbc) = uStack_108;
        *(uint64_t *)(lVar23 + 0xc4) = uStack_100;
        *(uint64_t *)(lVar23 + 0xcc) = uStack_f8;
        *(uint64_t *)(lVar23 + 0xd4) = uStack_f0;
        auVar4._8_8_ = uStack_d0;
        auVar4._0_8_ = uStack_d8;
        *(uint64_t *)(lVar23 + 0xdc) = uStack_e8;
        *(uint64_t *)(lVar23 + 0xe4) = uStack_e0;
        *(int8_t (*) [16])(lVar23 + 0xec) = auVar4;
        *(uint64_t *)(lVar23 + 0xfc) = uStack_c8;
      }
      iVar21 = *(int *)(param_1 + 0x58);
      iVar6 = iVar6 + 1;
      iVar5 = *(int *)(param_1 + 0x54);
    } while (iVar6 < iVar5 * iVar21);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_b8 ^ (ulonglong)auStack_308);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



