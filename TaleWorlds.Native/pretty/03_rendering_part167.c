#include "TaleWorlds.Native.Split.h"

// 03_rendering_part167.c - 1 个函数

// 函数: void FUN_180372b14(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_180372b14(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,int *param_6,longlong param_7,uint64_t param_8,
                  longlong param_9,int param_10,uint64_t param_11,uint64_t param_12,
                  longlong param_13,int *param_14,longlong param_15)

{
  int8_t auVar1 [16];
  uint uVar2;
  longlong lVar3;
  int *piVar4;
  longlong *plVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  uint64_t uVar18;
  uint64_t *puVar19;
  int8_t (*pauVar20) [16];
  longlong lVar21;
  int *piVar22;
  uint64_t uVar23;
  float *pfVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  int *piVar27;
  longlong unaff_RBP;
  longlong lVar28;
  float *pfVar29;
  int iVar30;
  int iVar31;
  longlong unaff_R12;
  longlong lVar32;
  bool in_ZF;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  int *piStackX_20;
  
  *(uint64_t *)(unaff_RBP + -0x78) = param_3;
  *(uint64_t *)(unaff_RBP + -0x80) = param_2;
  if (in_ZF) {
    iVar30 = (int)((*(longlong *)(param_1 + 0x88) - *(longlong *)(param_1 + 0x80)) / 0x28);
  }
  else {
    iVar30 = *(int *)(param_1 + 0x148);
  }
  lVar32 = (longlong)iVar30;
  if (0 < iVar30) {
    lVar21 = *(longlong *)(unaff_RBP + -0x80);
    lVar28 = 0;
    do {
      fVar35 = *(float *)(lVar21 + 0x215c);
      iVar14 = *(int *)(param_1 + 0x54) + -1;
      iVar30 = (int)(*(float *)(lVar28 + *(longlong *)(param_1 + 0x80)) / fVar35);
      if (iVar30 < 0) {
        iVar30 = 0;
      }
      else if (iVar14 < iVar30) {
        iVar30 = iVar14;
      }
      iVar14 = *(int *)(param_1 + 0x58) + -1;
      iVar15 = (int)(*(float *)(lVar28 + 4 + *(longlong *)(param_1 + 0x80)) / fVar35);
      if (iVar15 < 0) {
        iVar15 = 0;
      }
      else if (iVar14 < iVar15) {
        iVar15 = iVar14;
      }
      lVar3 = *(longlong *)(param_1 + 0x110);
      iVar15 = iVar30 * *(int *)(param_1 + 0x58) + iVar15;
      for (piVar22 = *(int **)(lVar3 + ((ulonglong)(longlong)iVar15 %
                                       (ulonglong)*(uint *)(param_1 + 0x118)) * 8);
          piVar22 != (int *)0x0; piVar22 = *(int **)(piVar22 + 4)) {
        if (iVar15 == *piVar22) {
          lVar17 = *(longlong *)(param_1 + 0x118);
          goto LAB_180372c0c;
        }
      }
      lVar17 = *(longlong *)(param_1 + 0x118);
      piVar22 = *(int **)(lVar3 + lVar17 * 8);
LAB_180372c0c:
      if (piVar22 == *(int **)(lVar3 + lVar17 * 8)) {
        uVar18 = FUN_18062b1e0(_DAT_180c8ed18,0x178,8,3);
        param_6 = (int *)CONCAT44(param_6._4_4_,iVar15);
        param_7 = FUN_180372430(uVar18,*(uint64_t *)(param_1 + 0x68));
        FUN_18037f020(param_1 + 0x108,unaff_RBP + 0x18,&param_6);
      }
      lVar28 = lVar28 + 0x28;
      lVar32 = lVar32 + -1;
    } while (lVar32 != 0);
    unaff_R12 = *(longlong *)(unaff_RBP + -0x78);
  }
  iVar14 = *(int *)(param_1 + 0x54);
  iVar15 = 0;
  iVar30 = *(int *)(param_1 + 0x58);
  if (0 < iVar14 * iVar30) {
    do {
      iVar16 = iVar15 / iVar14;
      iVar14 = iVar15 % iVar14;
      lVar32 = *(longlong *)(param_1 + 0x110);
      iVar31 = iVar30 * iVar14 + iVar16;
      uVar25 = (ulonglong)(longlong)iVar31 % (ulonglong)*(uint *)(param_1 + 0x118);
      piVar22 = *(int **)(lVar32 + uVar25 * 8);
      for (piVar4 = piVar22; piVar4 != (int *)0x0; piVar4 = *(int **)(piVar4 + 4)) {
        if (iVar31 == *piVar4) {
          if (piVar4 != (int *)0x0) {
            lVar21 = *(longlong *)(param_1 + 0x118);
            param_6 = piVar4;
            puVar19 = &param_6;
            param_7 = lVar32 + uVar25 * 8;
            goto LAB_180372cf0;
          }
          break;
        }
      }
      lVar21 = *(longlong *)(param_1 + 0x118);
      param_8 = *(uint64_t *)(lVar32 + lVar21 * 8);
      puVar19 = &param_8;
      param_9 = lVar32 + lVar21 * 8;
LAB_180372cf0:
      piVar4 = *(int **)(lVar32 + lVar21 * 8);
      if ((int *)*puVar19 != piVar4) {
        iVar30 = iVar30 * iVar14 + iVar16;
        for (; (piVar27 = piVar4, piVar22 != (int *)0x0 && (piVar27 = piVar22, iVar30 != *piVar22));
            piVar22 = *(int **)(piVar22 + 4)) {
        }
        if (piVar27 == piVar4) {
          uVar18 = FUN_18062b1e0(_DAT_180c8ed18,0x178,8,CONCAT71((int7)((ulonglong)lVar32 >> 8),3));
          param_10 = iVar30;
          param_11 = FUN_180372430(uVar18,*(uint64_t *)(param_1 + 0x68));
          puVar19 = (uint64_t *)FUN_18037f020(param_1 + 0x108,unaff_RBP + 0x30,&param_10);
          piVar27 = (int *)*puVar19;
        }
        lVar32 = *(longlong *)(piVar27 + 2);
        *(uint64_t *)(lVar32 + 0x18) = 0x4cbebc204cbebc20;
        *(uint64_t *)(lVar32 + 0x20) = 0x7f7fffff4cbebc20;
        *(int32_t *)(lVar32 + 0x48) = 0;
        *(int8_t (*) [16])(lVar32 + 0x38) = _DAT_180a402a0;
        *(int32_t *)(lVar32 + 0x28) = 0xccbebc20;
        *(int32_t *)(lVar32 + 0x2c) = 0xccbebc20;
        *(int32_t *)(lVar32 + 0x30) = 0xccbebc20;
        *(int32_t *)(lVar32 + 0x34) = 0x7f7fffff;
        lVar32 = *(longlong *)(param_1 + 0x110);
        iVar30 = *(int *)(param_1 + 0x58) * iVar14 + iVar16;
        for (piStackX_20 = *(int **)(lVar32 + ((ulonglong)(longlong)iVar30 %
                                              (ulonglong)*(uint *)(param_1 + 0x118)) * 8);
            piStackX_20 != (int *)0x0; piStackX_20 = *(int **)(piStackX_20 + 4)) {
          if (iVar30 == *piStackX_20) goto LAB_180372de8;
        }
        piStackX_20 = *(int **)(lVar32 + *(longlong *)(param_1 + 0x118) * 8);
LAB_180372de8:
        if (piStackX_20 == *(int **)(lVar32 + *(longlong *)(param_1 + 0x118) * 8)) {
          uVar18 = FUN_18062b1e0(_DAT_180c8ed18,0x178,8,3);
          param_12 = CONCAT44(param_12._4_4_,iVar30);
          param_13 = FUN_180372430(uVar18,*(uint64_t *)(param_1 + 0x68));
          pauVar20 = (int8_t (*) [16])FUN_18037f020(param_1 + 0x108,unaff_RBP + 0x48,&param_12);
          piStackX_20 = SUB168(*pauVar20,0);
        }
        *(int32_t *)(*(longlong *)(piStackX_20 + 2) + 0x110) = 0;
        lVar32 = *(longlong *)(param_1 + 0x110);
        iVar16 = *(int *)(param_1 + 0x58) * iVar14 + iVar16;
        for (piStackX_20 = *(int **)(lVar32 + ((ulonglong)(longlong)iVar16 %
                                              (ulonglong)*(uint *)(param_1 + 0x118)) * 8);
            piStackX_20 != (int *)0x0; piStackX_20 = *(int **)(piStackX_20 + 4)) {
          if (iVar16 == *piStackX_20) goto LAB_180372e98;
        }
        piStackX_20 = *(int **)(lVar32 + *(longlong *)(param_1 + 0x118) * 8);
LAB_180372e98:
        if (piStackX_20 == *(int **)(lVar32 + *(longlong *)(param_1 + 0x118) * 8)) {
          uVar18 = FUN_18062b1e0(_DAT_180c8ed18,0x178,8,3);
          param_14 = (int *)CONCAT44(param_14._4_4_,iVar16);
          param_15 = FUN_180372430(uVar18,*(uint64_t *)(param_1 + 0x68));
          pauVar20 = (int8_t (*) [16])FUN_18037f020(param_1 + 0x108,unaff_RBP + 0x60,&param_14);
          piStackX_20 = SUB168(*pauVar20,0);
        }
        *(uint64_t *)(*(longlong *)(piStackX_20 + 2) + 0x108) = 0;
      }
      iVar30 = *(int *)(param_1 + 0x58);
      iVar15 = iVar15 + 1;
      iVar14 = *(int *)(param_1 + 0x54);
    } while (iVar15 < iVar14 * iVar30);
  }
  if (*(char *)(param_1 + 0x141) == '\0') {
    iVar30 = (int)((*(longlong *)(param_1 + 0x88) - *(longlong *)(param_1 + 0x80)) / 0x28);
  }
  else {
    iVar30 = *(int *)(param_1 + 0x148);
  }
  param_6 = (int *)(longlong)iVar30;
  if (0 < iVar30) {
    lVar32 = 0;
    do {
      pfVar29 = (float *)(*(longlong *)(param_1 + 0x80) + lVar32);
      fVar35 = *(float *)(*(longlong *)(unaff_RBP + -0x80) + 0x215c);
      iVar14 = *(int *)(param_1 + 0x54) + -1;
      iVar30 = (int)(*pfVar29 / fVar35);
      if (iVar30 < 0) {
        iVar30 = 0;
      }
      else if (iVar14 < iVar30) {
        iVar30 = iVar14;
      }
      iVar14 = *(int *)(param_1 + 0x58);
      iVar15 = (int)(pfVar29[1] / fVar35);
      if (iVar15 < 0) {
        iVar15 = 0;
      }
      else if (iVar14 + -1 < iVar15) {
        iVar15 = iVar14 + -1;
      }
      if ((uint)(*(longlong *)(unaff_R12 + 0x10) - *(longlong *)(unaff_R12 + 8) >> 3) <=
          (uint)(int)*(char *)(pfVar29 + 8)) {
        *(int8_t *)(pfVar29 + 8) = 0;
        iVar14 = *(int *)(param_1 + 0x58);
      }
      lVar21 = *(longlong *)(param_1 + 0x110);
      iVar14 = iVar14 * iVar30 + iVar15;
      for (piVar22 = *(int **)(lVar21 + ((ulonglong)(longlong)iVar14 %
                                        (ulonglong)*(uint *)(param_1 + 0x118)) * 8);
          piVar22 != (int *)0x0; piVar22 = *(int **)(piVar22 + 4)) {
        if (iVar14 == *piVar22) {
          lVar28 = *(longlong *)(param_1 + 0x118);
          goto LAB_18037309e;
        }
      }
      lVar28 = *(longlong *)(param_1 + 0x118);
      piVar22 = *(int **)(lVar21 + lVar28 * 8);
LAB_18037309e:
      if (piVar22 == *(int **)(lVar21 + lVar28 * 8)) {
        uVar18 = FUN_18062b1e0(_DAT_180c8ed18,0x178,8,3);
        param_14 = (int *)CONCAT44(param_14._4_4_,iVar14);
        param_15 = FUN_180372430(uVar18,*(uint64_t *)(param_1 + 0x68));
        puVar19 = (uint64_t *)FUN_18037f020(param_1 + 0x108,unaff_RBP + -0x30,&param_14);
        piVar22 = (int *)*puVar19;
      }
      FUN_18037d8b0(*(uint64_t *)(piVar22 + 2),pfVar29,unaff_R12);
      plVar5 = *(longlong **)
                (*(longlong *)
                  (*(longlong *)(unaff_R12 + 8) +
                  ((ulonglong)(uint)(int)*(char *)(pfVar29 + 8) %
                  (ulonglong)(*(longlong *)(unaff_R12 + 0x10) - *(longlong *)(unaff_R12 + 8) >> 3))
                  * 8) + 0x28);
      if (plVar5 != (longlong *)0x0) {
        fVar35 = *pfVar29;
        fVar36 = pfVar29[1];
        fVar37 = pfVar29[2];
        if (*(code **)(*plVar5 + 0x198) == (code *)&UNK_18027d990) {
          pfVar24 = (float *)((longlong)plVar5 + 0x214);
        }
        else {
          pfVar24 = (float *)(**(code **)(*plVar5 + 0x198))(plVar5);
        }
        fVar34 = *pfVar24;
        fVar38 = pfVar24[1];
        fVar39 = pfVar24[2];
        fVar7 = pfVar24[3];
        uVar2 = *(uint *)(param_1 + 0x118);
        fVar8 = pfVar24[4];
        fVar9 = pfVar24[5];
        fVar10 = pfVar24[6];
        fVar11 = pfVar24[7];
        iVar14 = *(int *)(param_1 + 0x58);
        fVar33 = pfVar29[6];
        lVar21 = *(longlong *)(param_1 + 0x110);
        *(float *)(unaff_RBP + -0x68) = fVar34;
        *(float *)(unaff_RBP + -100) = fVar38;
        *(float *)(unaff_RBP + -0x60) = fVar39;
        *(float *)(unaff_RBP + -0x5c) = fVar7;
        iVar14 = iVar14 * iVar30 + iVar15;
        *(float *)(unaff_RBP + -0x58) = fVar8;
        *(float *)(unaff_RBP + -0x54) = fVar9;
        *(float *)(unaff_RBP + -0x50) = fVar10;
        *(float *)(unaff_RBP + -0x4c) = fVar11;
        fVar34 = fVar34 * fVar33 + fVar35;
        fVar35 = fVar8 * fVar33 + fVar35;
        fVar38 = *(float *)(unaff_RBP + -100) * fVar33 + fVar36;
        fVar39 = *(float *)(unaff_RBP + -0x60) * fVar33 + fVar37;
        fVar36 = *(float *)(unaff_RBP + -0x54) * fVar33 + fVar36;
        fVar37 = *(float *)(unaff_RBP + -0x50) * fVar33 + fVar37;
        for (piVar22 = *(int **)(lVar21 + ((ulonglong)(longlong)iVar14 % (ulonglong)uVar2) * 8);
            piVar22 != (int *)0x0; piVar22 = *(int **)(piVar22 + 4)) {
          if (iVar14 == *piVar22) {
            lVar28 = *(longlong *)(param_1 + 0x118);
            goto LAB_18037321d;
          }
        }
        lVar28 = *(longlong *)(param_1 + 0x118);
        piVar22 = *(int **)(lVar21 + lVar28 * 8);
LAB_18037321d:
        if (piVar22 == *(int **)(lVar21 + lVar28 * 8)) {
          uVar18 = FUN_18062b1e0(_DAT_180c8ed18,0x178,8,3);
          param_12 = CONCAT44(param_12._4_4_,iVar14);
          param_13 = FUN_180372430(uVar18,*(uint64_t *)(param_1 + 0x68));
          puVar19 = (uint64_t *)FUN_18037f020(param_1 + 0x108,unaff_RBP + -0x18,&param_12);
          piVar22 = (int *)*puVar19;
        }
        lVar21 = *(longlong *)(piVar22 + 2);
        if (fVar34 <= fVar35) {
          if (fVar34 < *(float *)(lVar21 + 0x18)) {
            *(float *)(lVar21 + 0x18) = fVar34;
          }
          if (fVar38 < *(float *)(lVar21 + 0x1c)) {
            *(float *)(lVar21 + 0x1c) = fVar38;
          }
          if (fVar39 < *(float *)(lVar21 + 0x20)) {
            *(float *)(lVar21 + 0x20) = fVar39;
          }
          if (*(float *)(lVar21 + 0x28) <= fVar35 && fVar35 != *(float *)(lVar21 + 0x28)) {
            *(float *)(lVar21 + 0x28) = fVar35;
          }
          if (*(float *)(lVar21 + 0x2c) <= fVar36 && fVar36 != *(float *)(lVar21 + 0x2c)) {
            *(float *)(lVar21 + 0x2c) = fVar36;
          }
          if (*(float *)(lVar21 + 0x30) <= fVar37 && fVar37 != *(float *)(lVar21 + 0x30)) {
            *(float *)(lVar21 + 0x30) = fVar37;
          }
        }
        fVar35 = pfVar29[6];
        if (*(code **)(*plVar5 + 0x198) == (code *)&UNK_18027d990) {
          lVar21 = (longlong)plVar5 + 0x214;
        }
        else {
          lVar21 = (**(code **)(*plVar5 + 0x198))(plVar5);
        }
        fVar35 = fVar35 * *(float *)(lVar21 + 0x30);
        lVar21 = FUN_180372570(param_1,iVar30,iVar15);
        if ((float)*(int *)(lVar21 + 0x110) < fVar35) {
          lVar21 = *(longlong *)(param_1 + 0x110);
          iVar14 = *(int *)(param_1 + 0x58) * iVar30 + iVar15;
          for (piVar22 = *(int **)(lVar21 + ((ulonglong)(longlong)iVar14 %
                                            (ulonglong)*(uint *)(param_1 + 0x118)) * 8);
              piVar22 != (int *)0x0; piVar22 = *(int **)(piVar22 + 4)) {
            if (iVar14 == *piVar22) {
              lVar28 = *(longlong *)(param_1 + 0x118);
              goto LAB_18037336c;
            }
          }
          lVar28 = *(longlong *)(param_1 + 0x118);
          piVar22 = *(int **)(lVar21 + lVar28 * 8);
LAB_18037336c:
          if (piVar22 == *(int **)(lVar21 + lVar28 * 8)) {
            uVar18 = FUN_18062b1e0(_DAT_180c8ed18,0x178,8,3);
            param_10 = iVar14;
            param_11 = FUN_180372430(uVar18,*(uint64_t *)(param_1 + 0x68));
            puVar19 = (uint64_t *)FUN_18037f020(param_1 + 0x108);
            piVar22 = (int *)*puVar19;
          }
          *(int *)(*(longlong *)(piVar22 + 2) + 0x110) = (int)fVar35;
        }
        lVar28 = FUN_180372570(param_1,iVar30,iVar15);
        lVar21 = *(longlong *)(param_1 + 0x110);
        lVar28 = *(longlong *)(lVar28 + 0x108);
        iVar15 = *(int *)(param_1 + 0x58) * iVar30 + iVar15;
        for (piStackX_20 = *(int **)(lVar21 + ((ulonglong)(longlong)iVar15 %
                                              (ulonglong)*(uint *)(param_1 + 0x118)) * 8);
            piStackX_20 != (int *)0x0; piStackX_20 = *(int **)(piStackX_20 + 4)) {
          if (iVar15 == *piStackX_20) goto LAB_180373428;
        }
        piStackX_20 = *(int **)(lVar21 + *(longlong *)(param_1 + 0x118) * 8);
LAB_180373428:
        if (piStackX_20 == *(int **)(lVar21 + *(longlong *)(param_1 + 0x118) * 8)) {
          uVar18 = FUN_18062b1e0(_DAT_180c8ed18,0x178,8,3);
          param_8 = CONCAT44(param_8._4_4_,iVar15);
          param_9 = FUN_180372430(uVar18,*(uint64_t *)(param_1 + 0x68));
          pauVar20 = (int8_t (*) [16])FUN_18037f020(param_1 + 0x108,unaff_RBP + 0x78,&param_8);
          piStackX_20 = SUB168(*pauVar20,0);
        }
        unaff_R12 = *(longlong *)(unaff_RBP + -0x78);
        *(longlong *)(*(longlong *)(piStackX_20 + 2) + 0x108) = lVar28 + 1;
      }
      lVar32 = lVar32 + 0x28;
      param_6 = (int *)((longlong)param_6 + -1);
    } while (param_6 != (int *)0x0);
    iVar14 = *(int *)(param_1 + 0x54);
  }
  iVar30 = *(int *)(param_1 + 0x58);
  iVar15 = 0;
  if (0 < iVar14 * iVar30) {
    do {
      uVar25 = (longlong)iVar15 / (longlong)iVar14;
      uVar6 = (longlong)iVar15 % (longlong)iVar14;
      lVar32 = *(longlong *)(param_1 + 0x110);
      iVar16 = (int)uVar6;
      iVar14 = (int)uVar25;
      iVar31 = iVar30 * iVar16 + iVar14;
      uVar26 = (ulonglong)(longlong)iVar31 % (ulonglong)*(uint *)(param_1 + 0x118);
      piVar22 = *(int **)(lVar32 + uVar26 * 8);
      for (piVar4 = piVar22; piVar4 != (int *)0x0; piVar4 = *(int **)(piVar4 + 4)) {
        if (iVar31 == *piVar4) {
          if (piVar4 != (int *)0x0) {
            lVar21 = *(longlong *)(param_1 + 0x118);
            param_14 = piVar4;
            puVar19 = &param_14;
            param_15 = lVar32 + uVar26 * 8;
            goto LAB_180373580;
          }
          break;
        }
      }
      lVar21 = *(longlong *)(param_1 + 0x118);
      param_12 = *(uint64_t *)(lVar32 + lVar21 * 8);
      puVar19 = &param_12;
      param_13 = lVar32 + lVar21 * 8;
LAB_180373580:
      piVar4 = *(int **)(lVar32 + lVar21 * 8);
      if ((int *)*puVar19 != piVar4) {
        iVar30 = iVar16 * iVar30 + iVar14;
        for (; (piVar27 = piVar4, piVar22 != (int *)0x0 && (piVar27 = piVar22, iVar30 != *piVar22));
            piVar22 = *(int **)(piVar22 + 4)) {
        }
        if (piVar27 == piVar4) {
          uVar18 = FUN_18062b1e0(_DAT_180c8ed18,0x178,8,CONCAT71((int7)((ulonglong)lVar32 >> 8),3));
          param_10 = iVar30;
          param_11 = FUN_180372430(uVar18,*(uint64_t *)(param_1 + 0x68));
          puVar19 = (uint64_t *)FUN_18037f020(param_1 + 0x108);
          piVar27 = (int *)*puVar19;
        }
        lVar32 = *(longlong *)(piVar27 + 2);
        fVar35 = *(float *)(lVar32 + 0x28);
        if (fVar35 < *(float *)(lVar32 + 0x18)) {
          *(int32_t *)(lVar32 + 0x48) = 0;
          *(uint64_t *)(lVar32 + 0x18) = 0;
          *(uint64_t *)(lVar32 + 0x20) = 0;
          *(uint64_t *)(lVar32 + 0x28) = 0;
          *(uint64_t *)(lVar32 + 0x30) = 0;
          *(uint64_t *)(lVar32 + 0x38) = 0;
          *(uint64_t *)(lVar32 + 0x40) = 0;
        }
        else {
          fVar36 = (fVar35 + *(float *)(lVar32 + 0x18)) * 0.5;
          fVar33 = (*(float *)(lVar32 + 0x2c) + *(float *)(lVar32 + 0x1c)) * 0.5;
          fVar38 = (*(float *)(lVar32 + 0x30) + *(float *)(lVar32 + 0x20)) * 0.5;
          *(float *)(lVar32 + 0x38) = fVar36;
          *(float *)(lVar32 + 0x3c) = fVar33;
          *(float *)(lVar32 + 0x40) = fVar38;
          *(int32_t *)(lVar32 + 0x44) = 0x7f7fffff;
          fVar37 = *(float *)(lVar32 + 0x30) - *(float *)(lVar32 + 0x40);
          fVar34 = *(float *)(lVar32 + 0x2c) - *(float *)(lVar32 + 0x3c);
          param_6 = (int *)CONCAT44(fVar33,fVar36);
          param_7 = CONCAT44(0x7f7fffff,fVar38);
          *(float *)(lVar32 + 0x48) =
               SQRT(fVar34 * fVar34 + (fVar35 - fVar36) * (fVar35 - fVar36) + fVar37 * fVar37);
        }
        iVar30 = *(int *)(param_1 + 0x58);
        uVar2 = *(uint *)(param_1 + 0x118);
        lVar32 = *(longlong *)(param_1 + 0x110);
        *(int32_t *)(unaff_RBP + 0x90) = 0;
        *(int32_t *)(unaff_RBP + 0x94) = 0;
        *(int32_t *)(unaff_RBP + 0x98) = 0;
        *(int32_t *)(unaff_RBP + 0x9c) = 0x7f7fffff;
        *(int32_t *)(unaff_RBP + 0xa0) = 0;
        *(int32_t *)(unaff_RBP + 0xa4) = 0;
        *(int32_t *)(unaff_RBP + 0xa8) = 0;
        *(int32_t *)(unaff_RBP + 0xac) = 0x7f7fffff;
        *(int32_t *)(unaff_RBP + 0xb0) = 0;
        *(int32_t *)(unaff_RBP + 0xb4) = 0;
        *(int32_t *)(unaff_RBP + 0xb8) = 0;
        *(int32_t *)(unaff_RBP + 0xbc) = 0x7f7fffff;
        iVar30 = iVar30 * iVar16 + iVar14;
        *(uint64_t *)(unaff_RBP + 0x140) = 0;
        *(uint64_t *)(unaff_RBP + 0xc0) = 0;
        *(uint64_t *)(unaff_RBP + 200) = 0;
        *(uint64_t *)(unaff_RBP + 0xd0) = 0;
        *(uint64_t *)(unaff_RBP + 0xd8) = 0;
        *(uint64_t *)(unaff_RBP + 0xe0) = 0;
        *(uint64_t *)(unaff_RBP + 0xe8) = 0;
        *(uint64_t *)(unaff_RBP + 0xf0) = 0;
        *(uint64_t *)(unaff_RBP + 0xf8) = 0;
        piVar22 = *(int **)(lVar32 + ((ulonglong)(longlong)iVar30 % (ulonglong)uVar2) * 8);
        *(uint64_t *)(unaff_RBP + 0x100) = 0;
        *(uint64_t *)(unaff_RBP + 0x108) = 0;
        *(uint64_t *)(unaff_RBP + 0x110) = 0;
        *(uint64_t *)(unaff_RBP + 0x118) = 0;
        *(uint64_t *)(unaff_RBP + 0x120) = 0;
        *(uint64_t *)(unaff_RBP + 0x128) = 0;
        *(uint64_t *)(unaff_RBP + 0x130) = 0;
        *(uint64_t *)(unaff_RBP + 0x138) = 0;
        for (; piVar22 != (int *)0x0; piVar22 = *(int **)(piVar22 + 4)) {
          if (iVar30 == *piVar22) goto LAB_180373799;
        }
        piVar22 = *(int **)(lVar32 + *(longlong *)(param_1 + 0x118) * 8);
LAB_180373799:
        if (piVar22 == *(int **)(lVar32 + *(longlong *)(param_1 + 0x118) * 8)) {
          uVar18 = FUN_18062b1e0(_DAT_180c8ed18,0,8,3);
          param_8 = CONCAT44(param_8._4_4_,iVar30);
          param_9 = FUN_180372430(uVar18,*(uint64_t *)(param_1 + 0x68));
          puVar19 = (uint64_t *)FUN_18037f020(param_1 + 0x108,unaff_RBP + -0x18,&param_8);
          piVar22 = (int *)*puVar19;
        }
        FUN_18063ad30(unaff_RBP + 0x90,*(longlong *)(piVar22 + 2) + 0x18,&DAT_180a00300);
        lVar21 = FUN_180372570(param_1,uVar6 & 0xffffffff,uVar25 & 0xffffffff);
        uVar2 = *(uint *)(param_1 + 0x118);
        lVar32 = *(longlong *)(param_1 + 0x110);
        iVar14 = *(int *)(param_1 + 0x58) * iVar16 + iVar14;
        *(float *)(unaff_RBP + 0x144) = (float)*(int *)(lVar21 + 0x110);
        for (piVar22 = *(int **)(lVar32 + ((ulonglong)(longlong)iVar14 % (ulonglong)uVar2) * 8);
            piVar22 != (int *)0x0; piVar22 = *(int **)(piVar22 + 4)) {
          if (iVar14 == *piVar22) goto LAB_180373878;
        }
        piVar22 = *(int **)(lVar32 + *(longlong *)(param_1 + 0x118) * 8);
LAB_180373878:
        if (piVar22 == *(int **)(lVar32 + *(longlong *)(param_1 + 0x118) * 8)) {
          uVar23 = FUN_18062b1e0(_DAT_180c8ed18,0x178,8,3);
          uVar18 = *(uint64_t *)(param_1 + 0x68);
          *(int *)(unaff_RBP + -0x78) = iVar14;
          uVar18 = FUN_180372430(uVar23,uVar18);
          *(uint64_t *)(unaff_RBP + -0x70) = uVar18;
          puVar19 = (uint64_t *)FUN_18037f020(param_1 + 0x108,unaff_RBP + -0x30,unaff_RBP + -0x78)
          ;
          piVar22 = (int *)*puVar19;
        }
        lVar32 = *(longlong *)(piVar22 + 2);
        uVar18 = *(uint64_t *)(unaff_RBP + 0x98);
        uVar23 = *(uint64_t *)(unaff_RBP + 0xa0);
        uVar12 = *(uint64_t *)(unaff_RBP + 0xa8);
        *(uint64_t *)(lVar32 + 0x4c) = *(uint64_t *)(unaff_RBP + 0x90);
        *(uint64_t *)(lVar32 + 0x54) = uVar18;
        uVar18 = *(uint64_t *)(unaff_RBP + 0xb0);
        uVar13 = *(uint64_t *)(unaff_RBP + 0xb8);
        *(uint64_t *)(lVar32 + 0x5c) = uVar23;
        *(uint64_t *)(lVar32 + 100) = uVar12;
        uVar23 = *(uint64_t *)(unaff_RBP + 0xc0);
        uVar12 = *(uint64_t *)(unaff_RBP + 200);
        *(uint64_t *)(lVar32 + 0x6c) = uVar18;
        *(uint64_t *)(lVar32 + 0x74) = uVar13;
        uVar18 = *(uint64_t *)(unaff_RBP + 0xd0);
        uVar13 = *(uint64_t *)(unaff_RBP + 0xd8);
        *(uint64_t *)(lVar32 + 0x7c) = uVar23;
        *(uint64_t *)(lVar32 + 0x84) = uVar12;
        uVar23 = *(uint64_t *)(unaff_RBP + 0xe0);
        uVar12 = *(uint64_t *)(unaff_RBP + 0xe8);
        *(uint64_t *)(lVar32 + 0x8c) = uVar18;
        *(uint64_t *)(lVar32 + 0x94) = uVar13;
        uVar18 = *(uint64_t *)(unaff_RBP + 0xf0);
        uVar13 = *(uint64_t *)(unaff_RBP + 0xf8);
        *(uint64_t *)(lVar32 + 0x9c) = uVar23;
        *(uint64_t *)(lVar32 + 0xa4) = uVar12;
        uVar23 = *(uint64_t *)(unaff_RBP + 0x100);
        uVar12 = *(uint64_t *)(unaff_RBP + 0x108);
        *(uint64_t *)(lVar32 + 0xac) = uVar18;
        *(uint64_t *)(lVar32 + 0xb4) = uVar13;
        uVar18 = *(uint64_t *)(unaff_RBP + 0x110);
        uVar13 = *(uint64_t *)(unaff_RBP + 0x118);
        *(uint64_t *)(lVar32 + 0xbc) = uVar23;
        *(uint64_t *)(lVar32 + 0xc4) = uVar12;
        uVar23 = *(uint64_t *)(unaff_RBP + 0x120);
        uVar12 = *(uint64_t *)(unaff_RBP + 0x128);
        *(uint64_t *)(lVar32 + 0xcc) = uVar18;
        *(uint64_t *)(lVar32 + 0xd4) = uVar13;
        auVar1 = *(int8_t (*) [16])(unaff_RBP + 0x130);
        uVar18 = *(uint64_t *)(unaff_RBP + 0x140);
        *(uint64_t *)(lVar32 + 0xdc) = uVar23;
        *(uint64_t *)(lVar32 + 0xe4) = uVar12;
        *(int8_t (*) [16])(lVar32 + 0xec) = auVar1;
        *(uint64_t *)(lVar32 + 0xfc) = uVar18;
      }
      iVar30 = *(int *)(param_1 + 0x58);
      iVar15 = iVar15 + 1;
      iVar14 = *(int *)(param_1 + 0x54);
    } while (iVar15 < iVar14 * iVar30);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x150) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



