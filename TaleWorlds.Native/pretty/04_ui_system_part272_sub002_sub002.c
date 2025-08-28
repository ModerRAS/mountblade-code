#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part272_sub002_sub002.c - 1 个函数

// 函数: void FUN_18081f420(float *param_1,uint param_2,longlong param_3,int param_4,ulonglong *param_5,
void FUN_18081f420(float *param_1,uint param_2,longlong param_3,int param_4,ulonglong *param_5,
                  longlong *param_6,int param_7)

{
  char cVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  
  lVar16 = (longlong)param_7;
  iVar15 = (int)param_2 >> 2;
  if (param_4 == 1) {
    if (param_7 == 1) {
      for (; iVar15 != 0; iVar15 = iVar15 + -1) {
        uVar17 = *param_5;
        uVar10 = *(uint *)((longlong)param_5 + 4);
        uVar18 = *param_5 + *param_6;
        cVar1 = *(char *)((ulonglong)uVar10 + param_3);
        cVar2 = *(char *)((ulonglong)(uVar10 + 1) + param_3);
        fVar25 = (float)(int)*(char *)(param_3 + -1 + (ulonglong)uVar10) * 0.0078125;
        cVar3 = *(char *)((ulonglong)(uVar10 + 2) + param_3);
        *param_5 = uVar18;
        fVar29 = (float)(int)cVar1 * 0.0078125;
        fVar20 = (float)(int)cVar2 * 0.0078125;
        fVar33 = (float)(uint)uVar17 * 2.3283064e-10;
        fVar39 = (float)(int)cVar3 * 0.00390625;
        iVar7 = (int)(uVar18 >> 0x20);
        fVar26 = (float)(int)*(char *)(param_3 + -1 + (uVar18 >> 0x20)) * 0.0078125;
        fVar30 = (float)(int)*(char *)((uVar18 >> 0x20) + param_3) * 0.0078125;
        fVar38 = (float)(int)*(char *)((ulonglong)(iVar7 + 1) + param_3) * 0.0078125;
        fVar21 = (float)(uVar18 & 0xffffffff) * 2.3283064e-10;
        fVar22 = (float)(int)*(char *)((ulonglong)(iVar7 + 2) + param_3) * 0.00390625;
        uVar18 = *param_6 + uVar18;
        *param_5 = uVar18;
        uVar17 = *param_6 + uVar18;
        cVar1 = *(char *)((uVar18 >> 0x20) + param_3);
        iVar7 = (int)(uVar18 >> 0x20);
        cVar2 = *(char *)((ulonglong)(iVar7 + 1) + param_3);
        fVar27 = (float)(int)*(char *)(((uVar18 >> 0x20) - 1) + param_3) * 0.0078125;
        cVar3 = *(char *)((ulonglong)(iVar7 + 2) + param_3);
        *param_5 = uVar17;
        fVar31 = (float)(int)cVar1 * 0.0078125;
        fVar34 = (float)(uVar18 & 0xffffffff) * 2.3283064e-10;
        fVar23 = (float)(int)cVar3 * 0.00390625;
        fVar24 = (float)(int)cVar2 * 0.0078125;
        fVar36 = (float)(uVar17 & 0xffffffff) * 2.3283064e-10;
        iVar7 = (int)(uVar17 >> 0x20);
        fVar32 = (float)(int)*(char *)(((uVar17 >> 0x20) - 1) + param_3) * 0.0078125;
        fVar35 = (float)(int)*(char *)((uVar17 >> 0x20) + param_3) * 0.0078125;
        fVar28 = (float)(int)*(char *)((ulonglong)(iVar7 + 1) + param_3) * 0.0078125;
        cVar1 = *(char *)((ulonglong)(iVar7 + 2) + param_3);
        *param_5 = *param_6 + uVar17;
        param_1[2] = ((((fVar24 + fVar24 + fVar27) - (fVar31 * 2.5 + fVar23)) +
                      (((fVar31 - fVar24) * 3.0 - fVar27) * 0.5 + fVar23) * fVar34) * fVar34 +
                     (fVar24 - fVar27) * 0.5) * fVar34 + fVar31;
        fVar23 = (float)(int)cVar1 * 0.00390625;
        *param_1 = ((((fVar20 + fVar20 + fVar25) - (fVar29 * 2.5 + fVar39)) +
                    (((fVar29 - fVar20) * 3.0 - fVar25) * 0.5 + fVar39) * fVar33) * fVar33 +
                   (fVar20 - fVar25) * 0.5) * fVar33 + fVar29;
        param_1[1] = ((((fVar38 + fVar38 + fVar26) - (fVar30 * 2.5 + fVar22)) +
                      (((fVar30 - fVar38) * 3.0 - fVar26) * 0.5 + fVar22) * fVar21) * fVar21 +
                     (fVar38 - fVar26) * 0.5) * fVar21 + fVar30;
        param_1[3] = ((((fVar28 + fVar28 + fVar32) - (fVar35 * 2.5 + fVar23)) +
                      (((fVar35 - fVar28) * 3.0 - fVar32) * 0.5 + fVar23) * fVar36) * fVar36 +
                     (fVar28 - fVar32) * 0.5) * fVar36 + fVar35;
        param_1 = param_1 + 4;
      }
      for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
        uVar10 = *(uint *)((longlong)param_5 + 4);
        fVar23 = (float)(int)*(char *)(param_3 + -1 + (ulonglong)uVar10) * 0.0078125;
        fVar20 = (float)(int)*(char *)((ulonglong)uVar10 + param_3) * 0.0078125;
        fVar22 = (float)(int)*(char *)((ulonglong)(uVar10 + 1) + param_3) * 0.0078125;
        fVar38 = (float)(uint)*param_5 * 2.3283064e-10;
        fVar39 = (float)(int)*(char *)((ulonglong)(uVar10 + 2) + param_3) * 0.00390625;
        *param_1 = ((((fVar22 + fVar22 + fVar23) - (fVar20 * 2.5 + fVar39)) +
                    (((fVar20 - fVar22) * 3.0 - fVar23) * 0.5 + fVar39) * fVar38) * fVar38 +
                   (fVar22 - fVar23) * 0.5) * fVar38 + fVar20;
        param_1 = param_1 + 1;
        *param_5 = *param_5 + *param_6;
      }
    }
    else if (param_2 != 0) {
      uVar17 = (ulonglong)(uint)*param_5;
      do {
        iVar15 = 0;
        lVar19 = 0;
        fVar39 = (float)(uVar17 & 0xffffffff) * 2.3283064e-10;
        if (3 < lVar16) {
          do {
            uVar10 = *(uint *)((longlong)param_5 + 4);
            fVar38 = (float)(int)*(char *)(((ulonglong)uVar10 - 1) * lVar16 + lVar19 + param_3) *
                     0.0078125;
            fVar20 = (float)(int)*(char *)((ulonglong)(uVar10 * param_7 + iVar15) + param_3) *
                     0.0078125;
            fVar23 = (float)(int)*(char *)((ulonglong)((uVar10 + 1) * param_7 + iVar15) + param_3) *
                     0.0078125;
            fVar22 = (float)(int)*(char *)((ulonglong)((uVar10 + 2) * param_7 + iVar15) + param_3) *
                     0.00390625;
            *param_1 = ((((fVar23 + fVar23 + fVar38) - (fVar20 * 2.5 + fVar22)) +
                        (((fVar20 - fVar23) * 3.0 - fVar38) * 0.5 + fVar22) * fVar39) * fVar39 +
                       (fVar23 - fVar38) * 0.5) * fVar39 + fVar20;
            uVar10 = *(uint *)((longlong)param_5 + 4);
            fVar20 = (float)(int)*(char *)(((ulonglong)uVar10 - 1) * lVar16 + lVar19 + 1 + param_3)
                     * 0.0078125;
            fVar38 = (float)(int)*(char *)((ulonglong)(uVar10 * param_7 + 1 + iVar15) + param_3) *
                     0.0078125;
            fVar23 = (float)(int)*(char *)((ulonglong)((uVar10 + 1) * param_7 + 1 + iVar15) +
                                          param_3) * 0.0078125;
            fVar22 = (float)(int)*(char *)((ulonglong)((uVar10 + 2) * param_7 + 1 + iVar15) +
                                          param_3) * 0.00390625;
            param_1[1] = ((((fVar23 + fVar23 + fVar20) - (fVar38 * 2.5 + fVar22)) +
                          (((fVar38 - fVar23) * 3.0 - fVar20) * 0.5 + fVar22) * fVar39) * fVar39 +
                         (fVar23 - fVar20) * 0.5) * fVar39 + fVar38;
            uVar10 = *(uint *)((longlong)param_5 + 4);
            fVar20 = (float)(int)*(char *)(((ulonglong)uVar10 - 1) * lVar16 + lVar19 + 2 + param_3)
                     * 0.0078125;
            fVar38 = (float)(int)*(char *)((ulonglong)(uVar10 * param_7 + 2 + iVar15) + param_3) *
                     0.0078125;
            fVar23 = (float)(int)*(char *)((ulonglong)((uVar10 + 1) * param_7 + 2 + iVar15) +
                                          param_3) * 0.0078125;
            fVar22 = (float)(int)*(char *)((ulonglong)((uVar10 + 2) * param_7 + 2 + iVar15) +
                                          param_3) * 0.00390625;
            param_1[2] = ((((fVar23 + fVar23 + fVar20) - (fVar38 * 2.5 + fVar22)) +
                          (((fVar38 - fVar23) * 3.0 - fVar20) * 0.5 + fVar22) * fVar39) * fVar39 +
                         (fVar23 - fVar20) * 0.5) * fVar39 + fVar38;
            uVar10 = *(uint *)((longlong)param_5 + 4);
            lVar14 = ((ulonglong)uVar10 - 1) * lVar16 + lVar19;
            lVar19 = lVar19 + 4;
            fVar20 = (float)(int)*(char *)(lVar14 + 3 + param_3) * 0.0078125;
            fVar38 = (float)(int)*(char *)((ulonglong)(uVar10 * param_7 + 3 + iVar15) + param_3) *
                     0.0078125;
            fVar23 = (float)(int)*(char *)((ulonglong)((uVar10 + 1) * param_7 + 3 + iVar15) +
                                          param_3) * 0.0078125;
            uVar10 = (uVar10 + 2) * param_7 + 3 + iVar15;
            iVar15 = iVar15 + 4;
            fVar22 = (float)(int)*(char *)((ulonglong)uVar10 + param_3) * 0.00390625;
            param_1[3] = ((((fVar23 + fVar23 + fVar20) - (fVar38 * 2.5 + fVar22)) +
                          (((fVar38 - fVar23) * 3.0 - fVar20) * 0.5 + fVar22) * fVar39) * fVar39 +
                         (fVar23 - fVar20) * 0.5) * fVar39 + fVar38;
            param_1 = param_1 + 4;
          } while (lVar19 < lVar16 + -3);
        }
        for (; lVar19 < lVar16; lVar19 = lVar19 + 1) {
          uVar10 = *(uint *)((longlong)param_5 + 4);
          fVar38 = (float)(int)*(char *)(((ulonglong)uVar10 - 1) * lVar16 + lVar19 + param_3) *
                   0.0078125;
          uVar11 = (uVar10 + 1) * param_7 + iVar15;
          fVar20 = (float)(int)*(char *)((ulonglong)(uVar10 * param_7 + iVar15) + param_3) *
                   0.0078125;
          uVar10 = (uVar10 + 2) * param_7 + iVar15;
          iVar15 = iVar15 + 1;
          fVar23 = (float)(int)*(char *)((ulonglong)uVar11 + param_3) * 0.0078125;
          fVar22 = (float)(int)*(char *)((ulonglong)uVar10 + param_3) * 0.00390625;
          *param_1 = ((((fVar23 + fVar23 + fVar38) - (fVar20 * 2.5 + fVar22)) +
                      (((fVar20 - fVar23) * 3.0 - fVar38) * 0.5 + fVar22) * fVar39) * fVar39 +
                     (fVar23 - fVar38) * 0.5) * fVar39 + fVar20;
          param_1 = param_1 + 1;
        }
        *param_5 = *param_5 + *param_6;
        uVar17 = *param_5;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
  }
  else if (param_4 == 2) {
    if (param_7 == 1) {
      for (; iVar15 != 0; iVar15 = iVar15 + -1) {
        uVar17 = *param_5;
        uVar10 = *(uint *)((longlong)param_5 + 4);
        uVar18 = *param_5 + *param_6;
        sVar4 = *(short *)(param_3 + (ulonglong)uVar10 * 2);
        sVar5 = *(short *)(param_3 + (ulonglong)(uVar10 + 1) * 2);
        fVar25 = (float)(int)*(short *)(param_3 + -2 + (ulonglong)uVar10 * 2) * 3.0517578e-05;
        sVar6 = *(short *)(param_3 + (ulonglong)(uVar10 + 2) * 2);
        *param_5 = uVar18;
        fVar29 = (float)(int)sVar4 * 3.0517578e-05;
        fVar20 = (float)(int)sVar5 * 3.0517578e-05;
        fVar33 = (float)(uint)uVar17 * 2.3283064e-10;
        fVar39 = (float)(int)sVar6 * 1.5258789e-05;
        iVar7 = (int)(uVar18 >> 0x20);
        fVar26 = (float)(int)*(short *)(param_3 + -2 + (uVar18 >> 0x20) * 2) * 3.0517578e-05;
        fVar30 = (float)(int)*(short *)(param_3 + (uVar18 >> 0x20) * 2) * 3.0517578e-05;
        fVar38 = (float)(int)*(short *)(param_3 + (ulonglong)(iVar7 + 1) * 2) * 3.0517578e-05;
        fVar21 = (float)(uVar18 & 0xffffffff) * 2.3283064e-10;
        fVar22 = (float)(int)*(short *)(param_3 + (ulonglong)(iVar7 + 2) * 2) * 1.5258789e-05;
        uVar18 = uVar18 + *param_6;
        *param_5 = uVar18;
        uVar17 = uVar18 + *param_6;
        sVar4 = *(short *)(param_3 + (uVar18 >> 0x20) * 2);
        iVar7 = (int)(uVar18 >> 0x20);
        sVar5 = *(short *)(param_3 + (ulonglong)(iVar7 + 1) * 2);
        fVar27 = (float)(int)*(short *)(param_3 + -2 + (uVar18 >> 0x20) * 2) * 3.0517578e-05;
        sVar6 = *(short *)(param_3 + (ulonglong)(iVar7 + 2) * 2);
        *param_5 = uVar17;
        fVar31 = (float)(int)sVar4 * 3.0517578e-05;
        fVar34 = (float)(uVar18 & 0xffffffff) * 2.3283064e-10;
        fVar23 = (float)(int)sVar6 * 1.5258789e-05;
        fVar24 = (float)(int)sVar5 * 3.0517578e-05;
        fVar36 = (float)(uVar17 & 0xffffffff) * 2.3283064e-10;
        iVar7 = (int)(uVar17 >> 0x20);
        fVar32 = (float)(int)*(short *)(param_3 + -2 + (uVar17 >> 0x20) * 2) * 3.0517578e-05;
        sVar4 = *(short *)(param_3 + (ulonglong)(iVar7 + 2) * 2);
        fVar35 = (float)(int)*(short *)(param_3 + (uVar17 >> 0x20) * 2) * 3.0517578e-05;
        fVar28 = (float)(int)*(short *)(param_3 + (ulonglong)(iVar7 + 1) * 2) * 3.0517578e-05;
        *param_5 = *param_6 + uVar17;
        param_1[2] = ((((fVar24 + fVar24 + fVar27) - (fVar31 * 2.5 + fVar23)) +
                      (((fVar31 - fVar24) * 3.0 - fVar27) * 0.5 + fVar23) * fVar34) * fVar34 +
                     (fVar24 - fVar27) * 0.5) * fVar34 + fVar31;
        fVar23 = (float)(int)sVar4 * 1.5258789e-05;
        *param_1 = ((((fVar20 + fVar20 + fVar25) - (fVar29 * 2.5 + fVar39)) +
                    (((fVar29 - fVar20) * 3.0 - fVar25) * 0.5 + fVar39) * fVar33) * fVar33 +
                   (fVar20 - fVar25) * 0.5) * fVar33 + fVar29;
        param_1[1] = ((((fVar38 + fVar38 + fVar26) - (fVar30 * 2.5 + fVar22)) +
                      (((fVar30 - fVar38) * 3.0 - fVar26) * 0.5 + fVar22) * fVar21) * fVar21 +
                     (fVar38 - fVar26) * 0.5) * fVar21 + fVar30;
        param_1[3] = ((((fVar28 + fVar28 + fVar32) - (fVar35 * 2.5 + fVar23)) +
                      (((fVar35 - fVar28) * 3.0 - fVar32) * 0.5 + fVar23) * fVar36) * fVar36 +
                     (fVar28 - fVar32) * 0.5) * fVar36 + fVar35;
        param_1 = param_1 + 4;
      }
      for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
        uVar10 = *(uint *)((longlong)param_5 + 4);
        fVar23 = (float)(int)*(short *)(param_3 + -2 + (ulonglong)uVar10 * 2) * 3.0517578e-05;
        fVar20 = (float)(int)*(short *)(param_3 + (ulonglong)uVar10 * 2) * 3.0517578e-05;
        fVar22 = (float)(int)*(short *)(param_3 + (ulonglong)(uVar10 + 1) * 2) * 3.0517578e-05;
        fVar38 = (float)(uint)*param_5 * 2.3283064e-10;
        fVar39 = (float)(int)*(short *)(param_3 + (ulonglong)(uVar10 + 2) * 2) * 1.5258789e-05;
        *param_1 = ((((fVar22 + fVar22 + fVar23) - (fVar20 * 2.5 + fVar39)) +
                    (((fVar20 - fVar22) * 3.0 - fVar23) * 0.5 + fVar39) * fVar38) * fVar38 +
                   (fVar22 - fVar23) * 0.5) * fVar38 + fVar20;
        param_1 = param_1 + 1;
        *param_5 = *param_5 + *param_6;
      }
    }
    else if (param_2 != 0) {
      uVar17 = (ulonglong)(uint)*param_5;
      do {
        iVar15 = 0;
        lVar19 = 0;
        fVar39 = (float)(uVar17 & 0xffffffff) * 2.3283064e-10;
        if (3 < lVar16) {
          do {
            uVar10 = *(uint *)((longlong)param_5 + 4);
            fVar38 = (float)(int)*(short *)(param_3 +
                                           (((ulonglong)uVar10 - 1) * lVar16 + lVar19) * 2) *
                     3.0517578e-05;
            fVar20 = (float)(int)*(short *)(param_3 + (ulonglong)(uVar10 * param_7 + iVar15) * 2) *
                     3.0517578e-05;
            fVar23 = (float)(int)*(short *)(param_3 +
                                           (ulonglong)((uVar10 + 1) * param_7 + iVar15) * 2) *
                     3.0517578e-05;
            fVar22 = (float)(int)*(short *)(param_3 +
                                           (ulonglong)((uVar10 + 2) * param_7 + iVar15) * 2) *
                     1.5258789e-05;
            *param_1 = ((((fVar23 + fVar23 + fVar38) - (fVar20 * 2.5 + fVar22)) +
                        (((fVar20 - fVar23) * 3.0 - fVar38) * 0.5 + fVar22) * fVar39) * fVar39 +
                       (fVar23 - fVar38) * 0.5) * fVar39 + fVar20;
            uVar10 = *(uint *)((longlong)param_5 + 4);
            fVar20 = (float)(int)*(short *)(param_3 + 2 +
                                           (((ulonglong)uVar10 - 1) * lVar16 + lVar19) * 2) *
                     3.0517578e-05;
            fVar38 = (float)(int)*(short *)(param_3 + (ulonglong)(uVar10 * param_7 + 1 + iVar15) * 2
                                           ) * 3.0517578e-05;
            fVar23 = (float)(int)*(short *)(param_3 +
                                           (ulonglong)((uVar10 + 1) * param_7 + 1 + iVar15) * 2) *
                     3.0517578e-05;
            fVar22 = (float)(int)*(short *)(param_3 +
                                           (ulonglong)((uVar10 + 2) * param_7 + 1 + iVar15) * 2) *
                     1.5258789e-05;
            param_1[1] = ((((fVar23 + fVar23 + fVar20) - (fVar38 * 2.5 + fVar22)) +
                          (((fVar38 - fVar23) * 3.0 - fVar20) * 0.5 + fVar22) * fVar39) * fVar39 +
                         (fVar23 - fVar20) * 0.5) * fVar39 + fVar38;
            uVar10 = *(uint *)((longlong)param_5 + 4);
            fVar20 = (float)(int)*(short *)(param_3 + 4 +
                                           (((ulonglong)uVar10 - 1) * lVar16 + lVar19) * 2) *
                     3.0517578e-05;
            fVar38 = (float)(int)*(short *)(param_3 + (ulonglong)(uVar10 * param_7 + 2 + iVar15) * 2
                                           ) * 3.0517578e-05;
            fVar23 = (float)(int)*(short *)(param_3 +
                                           (ulonglong)((uVar10 + 1) * param_7 + 2 + iVar15) * 2) *
                     3.0517578e-05;
            fVar22 = (float)(int)*(short *)(param_3 +
                                           (ulonglong)((uVar10 + 2) * param_7 + 2 + iVar15) * 2) *
                     1.5258789e-05;
            param_1[2] = ((((fVar23 + fVar23 + fVar20) - (fVar38 * 2.5 + fVar22)) +
                          (((fVar38 - fVar23) * 3.0 - fVar20) * 0.5 + fVar22) * fVar39) * fVar39 +
                         (fVar23 - fVar20) * 0.5) * fVar39 + fVar38;
            uVar10 = *(uint *)((longlong)param_5 + 4);
            lVar14 = ((ulonglong)uVar10 - 1) * lVar16 + lVar19;
            lVar19 = lVar19 + 4;
            fVar20 = (float)(int)*(short *)(param_3 + 6 + lVar14 * 2) * 3.0517578e-05;
            fVar38 = (float)(int)*(short *)(param_3 + (ulonglong)(uVar10 * param_7 + 3 + iVar15) * 2
                                           ) * 3.0517578e-05;
            fVar23 = (float)(int)*(short *)(param_3 +
                                           (ulonglong)((uVar10 + 1) * param_7 + 3 + iVar15) * 2) *
                     3.0517578e-05;
            uVar10 = (uVar10 + 2) * param_7 + 3 + iVar15;
            iVar15 = iVar15 + 4;
            fVar22 = (float)(int)*(short *)(param_3 + (ulonglong)uVar10 * 2) * 1.5258789e-05;
            param_1[3] = ((((fVar23 + fVar23 + fVar20) - (fVar38 * 2.5 + fVar22)) +
                          (((fVar38 - fVar23) * 3.0 - fVar20) * 0.5 + fVar22) * fVar39) * fVar39 +
                         (fVar23 - fVar20) * 0.5) * fVar39 + fVar38;
            param_1 = param_1 + 4;
          } while (lVar19 < lVar16 + -3);
        }
        for (; lVar19 < lVar16; lVar19 = lVar19 + 1) {
          uVar10 = *(uint *)((longlong)param_5 + 4);
          fVar38 = (float)(int)*(short *)(param_3 + (((ulonglong)uVar10 - 1) * lVar16 + lVar19) * 2)
                   * 3.0517578e-05;
          uVar11 = (uVar10 + 1) * param_7 + iVar15;
          fVar20 = (float)(int)*(short *)(param_3 + (ulonglong)(uVar10 * param_7 + iVar15) * 2) *
                   3.0517578e-05;
          uVar10 = (uVar10 + 2) * param_7 + iVar15;
          iVar15 = iVar15 + 1;
          fVar23 = (float)(int)*(short *)(param_3 + (ulonglong)uVar11 * 2) * 3.0517578e-05;
          fVar22 = (float)(int)*(short *)(param_3 + (ulonglong)uVar10 * 2) * 1.5258789e-05;
          *param_1 = ((((fVar23 + fVar23 + fVar38) - (fVar20 * 2.5 + fVar22)) +
                      (((fVar20 - fVar23) * 3.0 - fVar38) * 0.5 + fVar22) * fVar39) * fVar39 +
                     (fVar23 - fVar38) * 0.5) * fVar39 + fVar20;
          param_1 = param_1 + 1;
        }
        *param_5 = *param_5 + *param_6;
        uVar17 = *param_5;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
  }
  else if (param_4 == 3) {
    if (param_2 != 0) {
      if (param_7 == 1) {
        do {
          uVar10 = *(uint *)((longlong)param_5 + 4);
          uVar17 = (ulonglong)uVar10;
          lVar16 = param_3 + uVar17 * 2;
          fVar38 = (float)(uint)*param_5 * 2.3283064e-10;
          fVar20 = (float)((int)((uint)CONCAT21(CONCAT11(*(int8_t *)((uVar17 - 1) + lVar16),
                                                         *(int8_t *)((uVar17 - 2) + lVar16)),
                                                *(int8_t *)((uVar17 - 3) + lVar16)) << 8) >> 8)
                   * 1.1920929e-07;
          fVar23 = (float)((int)((uint)CONCAT21(CONCAT11(*(int8_t *)(uVar17 + 2 + lVar16),
                                                         *(int8_t *)(uVar17 + 1 + lVar16)),
                                                *(int8_t *)(uVar17 + lVar16)) << 8) >> 8) *
                   1.1920929e-07;
          fVar22 = (float)((int)((uint)*(uint3 *)((ulonglong)(uVar10 + 1) +
                                                 param_3 + (ulonglong)(uVar10 + 1) * 2) << 8) >> 8)
                   * 1.1920929e-07;
          fVar39 = (float)((int)((uint)*(uint3 *)((ulonglong)(uVar10 + 2) +
                                                 param_3 + (ulonglong)(uVar10 + 2) * 2) << 8) >> 8)
                   * 5.9604645e-08;
          *param_1 = ((((fVar22 + fVar22 + fVar20) - (fVar23 * 2.5 + fVar39)) +
                      (((fVar23 - fVar22) * 3.0 - fVar20) * 0.5 + fVar39) * fVar38) * fVar38 +
                     (fVar22 - fVar20) * 0.5) * fVar38 + fVar23;
          param_1 = param_1 + 1;
          *param_5 = *param_5 + *param_6;
          param_2 = param_2 - 1;
        } while (param_2 != 0);
      }
      else {
        uVar17 = (ulonglong)(uint)*param_5;
        do {
          iVar15 = 0;
          lVar19 = 0;
          fVar39 = (float)(uVar17 & 0xffffffff) * 2.3283064e-10;
          if (0 < param_7) {
            do {
              uVar10 = *(uint *)((longlong)param_5 + 4);
              uVar11 = uVar10 * param_7 + iVar15;
              uVar12 = (uVar10 + 1) * param_7 + iVar15;
              uVar13 = (uVar10 + 2) * param_7 + iVar15;
              fVar38 = (float)((int)((uint)*(uint3 *)(param_3 +
                                                     (((ulonglong)uVar10 - 1) * lVar16 + lVar19) * 3
                                                     ) << 8) >> 8) * 1.1920929e-07;
              fVar20 = (float)((int)((uint)*(uint3 *)((ulonglong)uVar11 +
                                                     param_3 + (ulonglong)uVar11 * 2) << 8) >> 8) *
                       1.1920929e-07;
              fVar23 = (float)((int)((uint)*(uint3 *)((ulonglong)uVar12 +
                                                     param_3 + (ulonglong)uVar12 * 2) << 8) >> 8) *
                       1.1920929e-07;
              fVar22 = (float)((int)((uint)*(uint3 *)((ulonglong)uVar13 +
                                                     param_3 + (ulonglong)uVar13 * 2) << 8) >> 8) *
                       5.9604645e-08;
              iVar15 = iVar15 + 1;
              lVar19 = lVar19 + 1;
              *param_1 = ((((fVar23 + fVar23 + fVar38) - (fVar20 * 2.5 + fVar22)) +
                          (((fVar20 - fVar23) * 3.0 - fVar38) * 0.5 + fVar22) * fVar39) * fVar39 +
                         (fVar23 - fVar38) * 0.5) * fVar39 + fVar20;
              param_1 = param_1 + 1;
            } while (lVar19 < lVar16);
          }
          *param_5 = *param_5 + *param_6;
          uVar17 = *param_5;
          param_2 = param_2 - 1;
        } while (param_2 != 0);
      }
    }
  }
  else if (param_4 == 4) {
    if (param_7 == 1) {
      for (; iVar15 != 0; iVar15 = iVar15 + -1) {
        uVar17 = *param_5;
        uVar10 = *(uint *)((longlong)param_5 + 4);
        uVar18 = *param_5 + *param_6;
        iVar7 = *(int *)(param_3 + (ulonglong)uVar10 * 4);
        iVar8 = *(int *)(param_3 + -4 + (ulonglong)uVar10 * 4);
        fVar38 = (float)*(int *)(param_3 + (ulonglong)(uVar10 + 1) * 4) * 4.656613e-10;
        iVar9 = *(int *)(param_3 + (ulonglong)(uVar10 + 2) * 4);
        *param_5 = uVar18;
        fVar30 = (float)iVar7 * 4.656613e-10;
        fVar26 = (float)iVar8 * 4.656613e-10;
        fVar21 = (float)(uint)uVar17 * 2.3283064e-10;
        fVar39 = (float)iVar9 * 2.3283064e-10;
        fVar27 = (float)*(int *)(param_3 + -4 + (uVar18 >> 0x20) * 4) * 4.656613e-10;
        iVar7 = (int)(uVar18 >> 0x20);
        fVar34 = (float)(uVar18 & 0xffffffff) * 2.3283064e-10;
        fVar24 = (float)*(int *)(param_3 + (ulonglong)(iVar7 + 1) * 4) * 4.656613e-10;
        fVar31 = (float)*(int *)(param_3 + (uVar18 >> 0x20) * 4) * 4.656613e-10;
        fVar22 = (float)*(int *)(param_3 + (ulonglong)(iVar7 + 2) * 4) * 2.3283064e-10;
        uVar18 = uVar18 + *param_6;
        *param_5 = uVar18;
        uVar17 = uVar18 + *param_6;
        iVar8 = (int)(uVar18 >> 0x20);
        iVar7 = *(int *)(param_3 + (ulonglong)(iVar8 + 2) * 4);
        fVar25 = (float)*(int *)(param_3 + (ulonglong)(iVar8 + 1) * 4) * 4.656613e-10;
        fVar28 = (float)*(int *)(param_3 + -4 + (uVar18 >> 0x20) * 4) * 4.656613e-10;
        iVar8 = *(int *)(param_3 + (uVar18 >> 0x20) * 4);
        *param_5 = uVar17;
        fVar35 = (float)(uVar18 & 0xffffffff) * 2.3283064e-10;
        fVar32 = (float)iVar8 * 4.656613e-10;
        fVar23 = (float)iVar7 * 2.3283064e-10;
        iVar9 = (int)(uVar17 >> 0x20);
        fVar37 = (float)(uVar17 & 0xffffffff) * 2.3283064e-10;
        fVar29 = (float)*(int *)(param_3 + (ulonglong)(iVar9 + 1) * 4) * 4.656613e-10;
        iVar7 = *(int *)(param_3 + (uVar17 >> 0x20) * 4);
        iVar8 = *(int *)(param_3 + -4 + (uVar17 >> 0x20) * 4);
        iVar9 = *(int *)(param_3 + (ulonglong)(iVar9 + 2) * 4);
        *param_5 = *param_6 + uVar17;
        fVar36 = (float)iVar7 * 4.656613e-10;
        fVar20 = (float)iVar9 * 2.3283064e-10;
        fVar33 = (float)iVar8 * 4.656613e-10;
        *param_1 = ((((fVar38 + fVar38 + fVar26) - (fVar30 * 2.5 + fVar39)) +
                    (((fVar30 - fVar38) * 3.0 - fVar26) * 0.5 + fVar39) * fVar21) * fVar21 +
                   (fVar38 - fVar26) * 0.5) * fVar21 + fVar30;
        param_1[1] = ((((fVar24 + fVar24 + fVar27) - (fVar31 * 2.5 + fVar22)) +
                      (((fVar31 - fVar24) * 3.0 - fVar27) * 0.5 + fVar22) * fVar34) * fVar34 +
                     (fVar24 - fVar27) * 0.5) * fVar34 + fVar31;
        param_1[2] = ((((fVar25 + fVar25 + fVar28) - (fVar32 * 2.5 + fVar23)) +
                      (((fVar32 - fVar25) * 3.0 - fVar28) * 0.5 + fVar23) * fVar35) * fVar35 +
                     (fVar25 - fVar28) * 0.5) * fVar35 + fVar32;
        param_1[3] = ((((fVar29 + fVar29 + fVar33) - (fVar36 * 2.5 + fVar20)) +
                      (((fVar36 - fVar29) * 3.0 - fVar33) * 0.5 + fVar20) * fVar37) * fVar37 +
                     (fVar29 - fVar33) * 0.5) * fVar37 + fVar36;
        param_1 = param_1 + 4;
      }
      for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
        uVar10 = *(uint *)((longlong)param_5 + 4);
        fVar22 = (float)*(int *)(param_3 + (ulonglong)(uVar10 + 1) * 4) * 4.656613e-10;
        fVar20 = (float)*(int *)(param_3 + (ulonglong)uVar10 * 4) * 4.656613e-10;
        fVar23 = (float)*(int *)(param_3 + -4 + (ulonglong)uVar10 * 4) * 4.656613e-10;
        fVar38 = (float)(uint)*param_5 * 2.3283064e-10;
        fVar39 = (float)*(int *)(param_3 + (ulonglong)(uVar10 + 2) * 4) * 2.3283064e-10;
        *param_1 = ((((fVar22 + fVar22 + fVar23) - (fVar20 * 2.5 + fVar39)) +
                    (((fVar20 - fVar22) * 3.0 - fVar23) * 0.5 + fVar39) * fVar38) * fVar38 +
                   (fVar22 - fVar23) * 0.5) * fVar38 + fVar20;
        param_1 = param_1 + 1;
        *param_5 = *param_5 + *param_6;
      }
    }
    else if (param_2 != 0) {
      uVar17 = (ulonglong)(uint)*param_5;
      do {
        iVar15 = 0;
        lVar19 = 0;
        fVar39 = (float)(uVar17 & 0xffffffff) * 2.3283064e-10;
        if (3 < lVar16) {
          do {
            uVar10 = *(uint *)((longlong)param_5 + 4);
            fVar20 = (float)*(int *)(param_3 + (((ulonglong)uVar10 - 1) * lVar16 + lVar19) * 4) *
                     4.656613e-10;
            fVar38 = (float)*(int *)(param_3 + (ulonglong)(uVar10 * param_7 + iVar15) * 4) *
                     4.656613e-10;
            fVar23 = (float)*(int *)(param_3 + (ulonglong)((uVar10 + 1) * param_7 + iVar15) * 4) *
                     4.656613e-10;
            fVar22 = (float)*(int *)(param_3 + (ulonglong)((uVar10 + 2) * param_7 + iVar15) * 4) *
                     2.3283064e-10;
            *param_1 = ((((fVar23 + fVar23 + fVar20) - (fVar38 * 2.5 + fVar22)) +
                        (((fVar38 - fVar23) * 3.0 - fVar20) * 0.5 + fVar22) * fVar39) * fVar39 +
                       (fVar23 - fVar20) * 0.5) * fVar39 + fVar38;
            uVar10 = *(uint *)((longlong)param_5 + 4);
            fVar20 = (float)*(int *)(param_3 + 4 + (((ulonglong)uVar10 - 1) * lVar16 + lVar19) * 4)
                     * 4.656613e-10;
            fVar38 = (float)*(int *)(param_3 + (ulonglong)(uVar10 * param_7 + 1 + iVar15) * 4) *
                     4.656613e-10;
            fVar23 = (float)*(int *)(param_3 + (ulonglong)((uVar10 + 1) * param_7 + 1 + iVar15) * 4)
                     * 4.656613e-10;
            fVar22 = (float)*(int *)(param_3 + (ulonglong)((uVar10 + 2) * param_7 + 1 + iVar15) * 4)
                     * 2.3283064e-10;
            param_1[1] = ((((fVar23 + fVar23 + fVar20) - (fVar38 * 2.5 + fVar22)) +
                          (((fVar38 - fVar23) * 3.0 - fVar20) * 0.5 + fVar22) * fVar39) * fVar39 +
                         (fVar23 - fVar20) * 0.5) * fVar39 + fVar38;
            uVar10 = *(uint *)((longlong)param_5 + 4);
            fVar20 = (float)*(int *)(param_3 + 8 + (((ulonglong)uVar10 - 1) * lVar16 + lVar19) * 4)
                     * 4.656613e-10;
            fVar38 = (float)*(int *)(param_3 + (ulonglong)(uVar10 * param_7 + 2 + iVar15) * 4) *
                     4.656613e-10;
            fVar23 = (float)*(int *)(param_3 + (ulonglong)((uVar10 + 1) * param_7 + 2 + iVar15) * 4)
                     * 4.656613e-10;
            fVar22 = (float)*(int *)(param_3 + (ulonglong)((uVar10 + 2) * param_7 + 2 + iVar15) * 4)
                     * 2.3283064e-10;
            param_1[2] = ((((fVar23 + fVar23 + fVar20) - (fVar38 * 2.5 + fVar22)) +
                          (((fVar38 - fVar23) * 3.0 - fVar20) * 0.5 + fVar22) * fVar39) * fVar39 +
                         (fVar23 - fVar20) * 0.5) * fVar39 + fVar38;
            uVar10 = *(uint *)((longlong)param_5 + 4);
            fVar20 = (float)*(int *)(param_3 + 0xc + (((ulonglong)uVar10 - 1) * lVar16 + lVar19) * 4
                                    ) * 4.656613e-10;
            fVar38 = (float)*(int *)(param_3 + (ulonglong)(uVar10 * param_7 + 3 + iVar15) * 4) *
                     4.656613e-10;
            lVar19 = lVar19 + 4;
            fVar23 = (float)*(int *)(param_3 + (ulonglong)((uVar10 + 1) * param_7 + 3 + iVar15) * 4)
                     * 4.656613e-10;
            uVar10 = (uVar10 + 2) * param_7 + 3 + iVar15;
            iVar15 = iVar15 + 4;
            fVar22 = (float)*(int *)(param_3 + (ulonglong)uVar10 * 4) * 2.3283064e-10;
            param_1[3] = ((((fVar23 + fVar23 + fVar20) - (fVar38 * 2.5 + fVar22)) +
                          (((fVar38 - fVar23) * 3.0 - fVar20) * 0.5 + fVar22) * fVar39) * fVar39 +
                         (fVar23 - fVar20) * 0.5) * fVar39 + fVar38;
            param_1 = param_1 + 4;
          } while (lVar19 < lVar16 + -3);
        }
        for (; lVar19 < lVar16; lVar19 = lVar19 + 1) {
          uVar10 = *(uint *)((longlong)param_5 + 4);
          fVar20 = (float)*(int *)(param_3 + (((ulonglong)uVar10 - 1) * lVar16 + lVar19) * 4) *
                   4.656613e-10;
          fVar38 = (float)*(int *)(param_3 + (ulonglong)(uVar10 * param_7 + iVar15) * 4) *
                   4.656613e-10;
          fVar23 = (float)*(int *)(param_3 + (ulonglong)((uVar10 + 1) * param_7 + iVar15) * 4) *
                   4.656613e-10;
          uVar10 = (uVar10 + 2) * param_7 + iVar15;
          iVar15 = iVar15 + 1;
          fVar22 = (float)*(int *)(param_3 + (ulonglong)uVar10 * 4) * 2.3283064e-10;
          *param_1 = ((((fVar23 + fVar23 + fVar20) - (fVar38 * 2.5 + fVar22)) +
                      (((fVar38 - fVar23) * 3.0 - fVar20) * 0.5 + fVar22) * fVar39) * fVar39 +
                     (fVar23 - fVar20) * 0.5) * fVar39 + fVar38;
          param_1 = param_1 + 1;
        }
        *param_5 = *param_5 + *param_6;
        uVar17 = *param_5;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
  }
  else if (param_4 == 5) {
    if (param_7 == 1) {
      for (; iVar15 != 0; iVar15 = iVar15 + -1) {
        uVar10 = *(uint *)((longlong)param_5 + 4);
        uVar17 = *param_5 + *param_6;
        fVar39 = *(float *)(param_3 + (ulonglong)uVar10 * 4);
        fVar22 = *(float *)(param_3 + (ulonglong)(uVar10 + 1) * 4);
        fVar23 = *(float *)(param_3 + -4 + (ulonglong)uVar10 * 4);
        fVar34 = (float)(uint)*param_5 * 2.3283064e-10;
        fVar20 = *(float *)(param_3 + (ulonglong)(uVar10 + 2) * 4);
        *param_5 = uVar17;
        fVar20 = fVar20 * 0.5;
        uVar18 = *param_6 + uVar17;
        fVar38 = *(float *)(param_3 + -4 + (uVar17 >> 0x20) * 4);
        iVar7 = (int)(uVar17 >> 0x20);
        fVar24 = *(float *)(param_3 + (ulonglong)(iVar7 + 1) * 4);
        fVar25 = *(float *)(param_3 + (uVar17 >> 0x20) * 4);
        fVar35 = (float)(uVar17 & 0xffffffff) * 2.3283064e-10;
        fVar21 = *(float *)(param_3 + (ulonglong)(iVar7 + 2) * 4) * 0.5;
        *param_5 = uVar18;
        fVar36 = (float)(uVar18 & 0xffffffff) * 2.3283064e-10;
        fVar26 = *(float *)(param_3 + -4 + (uVar18 >> 0x20) * 4);
        fVar27 = *(float *)(param_3 + (uVar18 >> 0x20) * 4);
        iVar7 = (int)(uVar18 >> 0x20);
        fVar28 = *(float *)(param_3 + (ulonglong)(iVar7 + 1) * 4);
        fVar29 = *(float *)(param_3 + (ulonglong)(iVar7 + 2) * 4);
        uVar18 = *param_6 + uVar18;
        *param_5 = uVar18;
        iVar7 = (int)(uVar18 >> 0x20);
        fVar37 = (float)(uVar18 & 0xffffffff) * 2.3283064e-10;
        fVar30 = *(float *)(param_3 + -4 + (uVar18 >> 0x20) * 4);
        fVar31 = *(float *)(param_3 + (uVar18 >> 0x20) * 4);
        fVar32 = *(float *)(param_3 + (ulonglong)(iVar7 + 1) * 4);
        fVar33 = *(float *)(param_3 + (ulonglong)(iVar7 + 2) * 4);
        *param_5 = *param_6 + uVar18;
        *param_1 = ((((fVar22 + fVar22 + fVar23) - (fVar39 * 2.5 + fVar20)) +
                    (((fVar39 - fVar22) * 3.0 - fVar23) * 0.5 + fVar20) * fVar34) * fVar34 +
                   (fVar22 - fVar23) * 0.5) * fVar34 + fVar39;
        param_1[1] = ((((fVar24 + fVar24 + fVar38) - (fVar25 * 2.5 + fVar21)) +
                      (((fVar25 - fVar24) * 3.0 - fVar38) * 0.5 + fVar21) * fVar35) * fVar35 +
                     (fVar24 - fVar38) * 0.5) * fVar35 + fVar25;
        param_1[2] = ((((fVar28 + fVar28 + fVar26) - (fVar29 * 0.5 + fVar27 * 2.5)) +
                      (((fVar27 - fVar28) * 3.0 - fVar26) + fVar29) * 0.5 * fVar36) * fVar36 +
                     (fVar28 - fVar26) * 0.5) * fVar36 + fVar27;
        param_1[3] = ((((fVar32 + fVar32 + fVar30) - (fVar33 * 0.5 + fVar31 * 2.5)) +
                      (((fVar31 - fVar32) * 3.0 - fVar30) + fVar33) * 0.5 * fVar37) * fVar37 +
                     (fVar32 - fVar30) * 0.5) * fVar37 + fVar31;
        param_1 = param_1 + 4;
      }
      for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
        uVar10 = *(uint *)((longlong)param_5 + 4);
        fVar39 = *(float *)(param_3 + (ulonglong)uVar10 * 4);
        fVar22 = *(float *)(param_3 + (ulonglong)(uVar10 + 1) * 4);
        fVar23 = *(float *)(param_3 + -4 + (ulonglong)uVar10 * 4);
        fVar38 = (float)(uint)*param_5 * 2.3283064e-10;
        fVar20 = *(float *)(param_3 + (ulonglong)(uVar10 + 2) * 4) * 0.5;
        *param_1 = ((((fVar22 + fVar22 + fVar23) - (fVar39 * 2.5 + fVar20)) +
                    (((fVar39 - fVar22) * 3.0 - fVar23) * 0.5 + fVar20) * fVar38) * fVar38 +
                   (fVar22 - fVar23) * 0.5) * fVar38 + fVar39;
        param_1 = param_1 + 1;
        *param_5 = *param_5 + *param_6;
      }
    }
    else if (param_2 != 0) {
      uVar17 = (ulonglong)(uint)*param_5;
      do {
        iVar15 = 0;
        lVar19 = 0;
        fVar39 = (float)(uVar17 & 0xffffffff) * 2.3283064e-10;
        if (3 < lVar16) {
          do {
            uVar10 = *(uint *)((longlong)param_5 + 4);
            fVar22 = *(float *)(param_3 + (((ulonglong)uVar10 - 1) * lVar16 + lVar19) * 4);
            fVar23 = *(float *)(param_3 + (ulonglong)(uVar10 * param_7 + iVar15) * 4);
            fVar20 = *(float *)(param_3 + (ulonglong)((uVar10 + 1) * param_7 + iVar15) * 4);
            fVar38 = *(float *)(param_3 + (ulonglong)((uVar10 + 2) * param_7 + iVar15) * 4) * 0.5;
            *param_1 = ((((fVar20 + fVar20 + fVar22) - (fVar23 * 2.5 + fVar38)) +
                        (((fVar23 - fVar20) * 3.0 - fVar22) * 0.5 + fVar38) * fVar39) * fVar39 +
                       (fVar20 - fVar22) * 0.5) * fVar39 + fVar23;
            uVar10 = *(uint *)((longlong)param_5 + 4);
            fVar22 = *(float *)(param_3 + 4 + (((ulonglong)uVar10 - 1) * lVar16 + lVar19) * 4);
            fVar23 = *(float *)(param_3 + (ulonglong)(uVar10 * param_7 + 1 + iVar15) * 4);
            fVar20 = *(float *)(param_3 + (ulonglong)((uVar10 + 1) * param_7 + 1 + iVar15) * 4);
            fVar38 = *(float *)(param_3 + (ulonglong)((uVar10 + 2) * param_7 + 1 + iVar15) * 4) *
                     0.5;
            param_1[1] = ((((fVar20 + fVar20 + fVar22) - (fVar23 * 2.5 + fVar38)) +
                          (((fVar23 - fVar20) * 3.0 - fVar22) * 0.5 + fVar38) * fVar39) * fVar39 +
                         (fVar20 - fVar22) * 0.5) * fVar39 + fVar23;
            uVar10 = *(uint *)((longlong)param_5 + 4);
            fVar22 = *(float *)(param_3 + 8 + (((ulonglong)uVar10 - 1) * lVar16 + lVar19) * 4);
            fVar23 = *(float *)(param_3 + (ulonglong)(uVar10 * param_7 + 2 + iVar15) * 4);
            fVar20 = *(float *)(param_3 + (ulonglong)((uVar10 + 1) * param_7 + 2 + iVar15) * 4);
            fVar38 = *(float *)(param_3 + (ulonglong)((uVar10 + 2) * param_7 + 2 + iVar15) * 4) *
                     0.5;
            param_1[2] = ((((fVar20 + fVar20 + fVar22) - (fVar23 * 2.5 + fVar38)) +
                          (((fVar23 - fVar20) * 3.0 - fVar22) * 0.5 + fVar38) * fVar39) * fVar39 +
                         (fVar20 - fVar22) * 0.5) * fVar39 + fVar23;
            uVar10 = *(uint *)((longlong)param_5 + 4);
            fVar22 = *(float *)(param_3 + 0xc + (((ulonglong)uVar10 - 1) * lVar16 + lVar19) * 4);
            fVar23 = *(float *)(param_3 + (ulonglong)(uVar10 * param_7 + 3 + iVar15) * 4);
            fVar20 = *(float *)(param_3 + (ulonglong)((uVar10 + 1) * param_7 + 3 + iVar15) * 4);
            fVar38 = *(float *)(param_3 + (ulonglong)((uVar10 + 2) * param_7 + 3 + iVar15) * 4);
            iVar15 = iVar15 + 4;
            lVar19 = lVar19 + 4;
            param_1[3] = ((((fVar20 + fVar20 + fVar22) - (fVar38 * 0.5 + fVar23 * 2.5)) +
                          (((fVar23 - fVar20) * 3.0 - fVar22) + fVar38) * 0.5 * fVar39) * fVar39 +
                         (fVar20 - fVar22) * 0.5) * fVar39 + fVar23;
            param_1 = param_1 + 4;
          } while (lVar19 < lVar16 + -3);
        }
        for (; lVar19 < lVar16; lVar19 = lVar19 + 1) {
          uVar10 = *(uint *)((longlong)param_5 + 4);
          fVar22 = *(float *)(param_3 + (((ulonglong)uVar10 - 1) * lVar16 + lVar19) * 4);
          fVar23 = *(float *)(param_3 + (ulonglong)(uVar10 * param_7 + iVar15) * 4);
          fVar20 = *(float *)(param_3 + (ulonglong)((uVar10 + 1) * param_7 + iVar15) * 4);
          uVar10 = (uVar10 + 2) * param_7 + iVar15;
          iVar15 = iVar15 + 1;
          fVar38 = *(float *)(param_3 + (ulonglong)uVar10 * 4) * 0.5;
          *param_1 = ((((fVar20 + fVar20 + fVar22) - (fVar23 * 2.5 + fVar38)) +
                      (((fVar23 - fVar20) * 3.0 - fVar22) * 0.5 + fVar38) * fVar39) * fVar39 +
                     (fVar20 - fVar22) * 0.5) * fVar39 + fVar23;
          param_1 = param_1 + 1;
        }
        *param_5 = *param_5 + *param_6;
        uVar17 = *param_5;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
  }
  return;
}







