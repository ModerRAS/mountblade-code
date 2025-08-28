#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part274.c - 2 个函数

// 函数: void FUN_180821bb0(float *param_1,int param_2,longlong param_3,int param_4,ulonglong *param_5,
void FUN_180821bb0(float *param_1,int param_2,longlong param_3,int param_4,ulonglong *param_5,
                  longlong *param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iStackX_10;
  
  lVar7 = (longlong)param_7;
  if (param_4 == 1) {
    if (param_2 != 0) {
      if (param_7 == 1) {
        do {
          uVar1 = *(uint *)((longlong)param_5 + 4);
          uVar6 = (ulonglong)uVar1;
          fVar12 = (float)(int)*(char *)((uVar6 - 2) + param_3) * 0.0078125;
          fVar15 = (float)(int)*(char *)(uVar6 + param_3) * 0.0078125;
          fVar13 = (float)(int)*(char *)((ulonglong)(uVar1 + 1) + param_3) * 0.0078125;
          fVar11 = (float)(int)*(char *)((ulonglong)(uVar1 + 2) + param_3) * 0.0078125;
          fVar14 = (float)(int)*(char *)((uVar6 - 1) + param_3) * 0.0078125;
          fVar17 = (float)(int)*(char *)((ulonglong)(uVar1 + 3) + param_3) * 0.0078125;
          fVar16 = (float)(uint)*param_5 * 2.3283064e-10;
          *param_1 = ((((((((fVar15 * 126.0 - fVar13 * 124.0) + fVar11 * 61.0) - fVar14 * 64.0) -
                         fVar17 * 12.0) + fVar12 * 13.0 +
                        ((fVar14 - fVar11) * 25.0 + (fVar13 - fVar15) * 50.0 +
                        (fVar17 - fVar12) * 5.0) * fVar16) * fVar16 +
                       ((((fVar13 * 66.0 - fVar15 * 70.0) - fVar11 * 33.0) + fVar14 * 39.0 +
                        fVar17 * 7.0) - fVar12 * 9.0)) * fVar16 +
                      ((((fVar13 + fVar14) * 16.0 - fVar12) - fVar15 * 30.0) - fVar11)) * fVar16 +
                     (fVar13 - fVar14) * 16.0 + (fVar12 - fVar11) + (fVar12 - fVar11)) * fVar16 *
                     0.041666668 + fVar15;
          param_1 = param_1 + 1;
          *param_5 = *param_5 + *param_6;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
      else {
        uVar6 = (ulonglong)(uint)*param_5;
        do {
          iVar8 = 0;
          lVar10 = 0;
          fVar17 = (float)(uVar6 & 0xffffffff) * 2.3283064e-10;
          if (0 < param_7) {
            do {
              uVar1 = *(uint *)((longlong)param_5 + 4);
              fVar14 = (float)(int)*(char *)(((ulonglong)uVar1 - 2) * lVar7 + lVar10 + param_3) *
                       0.0078125;
              fVar15 = (float)(int)*(char *)(((ulonglong)uVar1 - 1) * lVar7 + lVar10 + param_3) *
                       0.0078125;
              fVar16 = (float)(int)*(char *)((ulonglong)(uVar1 * param_7 + iVar8) + param_3) *
                       0.0078125;
              fVar13 = (float)(int)*(char *)((ulonglong)((uVar1 + 1) * param_7 + iVar8) + param_3) *
                       0.0078125;
              fVar12 = (float)(int)*(char *)((ulonglong)((uVar1 + 2) * param_7 + iVar8) + param_3) *
                       0.0078125;
              fVar11 = (float)(int)*(char *)((ulonglong)((uVar1 + 3) * param_7 + iVar8) + param_3) *
                       0.0078125;
              iVar8 = iVar8 + 1;
              lVar10 = lVar10 + 1;
              *param_1 = ((((((((fVar16 * 126.0 - fVar13 * 124.0) + fVar12 * 61.0) - fVar15 * 64.0)
                             - fVar11 * 12.0) + fVar14 * 13.0 +
                            ((fVar15 - fVar12) * 25.0 + (fVar13 - fVar16) * 50.0 +
                            (fVar11 - fVar14) * 5.0) * fVar17) * fVar17 +
                           ((((fVar13 * 66.0 - fVar16 * 70.0) - fVar12 * 33.0) + fVar15 * 39.0 +
                            fVar11 * 7.0) - fVar14 * 9.0)) * fVar17 +
                          ((((fVar13 + fVar15) * 16.0 - fVar14) - fVar16 * 30.0) - fVar12)) * fVar17
                         + (fVar13 - fVar15) * 16.0 + (fVar14 - fVar12) + (fVar14 - fVar12)) *
                         fVar17 * 0.041666668 + fVar16;
              param_1 = param_1 + 1;
            } while (lVar10 < lVar7);
          }
          *param_5 = *param_5 + *param_6;
          uVar6 = *param_5;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
    }
  }
  else if (param_4 == 2) {
    if (param_2 != 0) {
      if (param_7 == 1) {
        do {
          uVar1 = *(uint *)((longlong)param_5 + 4);
          uVar6 = (ulonglong)uVar1;
          fVar12 = (float)(int)*(short *)(param_3 + -4 + uVar6 * 2) * 3.0517578e-05;
          fVar15 = (float)(int)*(short *)(param_3 + uVar6 * 2) * 3.0517578e-05;
          fVar13 = (float)(int)*(short *)(param_3 + (ulonglong)(uVar1 + 1) * 2) * 3.0517578e-05;
          fVar11 = (float)(int)*(short *)(param_3 + (ulonglong)(uVar1 + 2) * 2) * 3.0517578e-05;
          fVar14 = (float)(int)*(short *)(param_3 + -2 + uVar6 * 2) * 3.0517578e-05;
          fVar17 = (float)(int)*(short *)(param_3 + (ulonglong)(uVar1 + 3) * 2) * 3.0517578e-05;
          fVar16 = (float)(uint)*param_5 * 2.3283064e-10;
          *param_1 = ((((((((fVar15 * 126.0 - fVar13 * 124.0) + fVar11 * 61.0) - fVar14 * 64.0) -
                         fVar17 * 12.0) + fVar12 * 13.0 +
                        ((fVar14 - fVar11) * 25.0 + (fVar13 - fVar15) * 50.0 +
                        (fVar17 - fVar12) * 5.0) * fVar16) * fVar16 +
                       ((((fVar13 * 66.0 - fVar15 * 70.0) - fVar11 * 33.0) + fVar14 * 39.0 +
                        fVar17 * 7.0) - fVar12 * 9.0)) * fVar16 +
                      ((((fVar13 + fVar14) * 16.0 - fVar12) - fVar15 * 30.0) - fVar11)) * fVar16 +
                     (fVar13 - fVar14) * 16.0 + (fVar12 - fVar11) + (fVar12 - fVar11)) * fVar16 *
                     0.041666668 + fVar15;
          param_1 = param_1 + 1;
          *param_5 = *param_5 + *param_6;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
      else {
        uVar6 = (ulonglong)(uint)*param_5;
        do {
          iVar8 = 0;
          lVar10 = 0;
          fVar17 = (float)(uVar6 & 0xffffffff) * 2.3283064e-10;
          if (0 < param_7) {
            do {
              uVar1 = *(uint *)((longlong)param_5 + 4);
              fVar14 = (float)(int)*(short *)(param_3 +
                                             (((ulonglong)uVar1 - 2) * lVar7 + lVar10) * 2) *
                       3.0517578e-05;
              fVar15 = (float)(int)*(short *)(param_3 +
                                             (((ulonglong)uVar1 - 1) * lVar7 + lVar10) * 2) *
                       3.0517578e-05;
              fVar16 = (float)(int)*(short *)(param_3 + (ulonglong)(uVar1 * param_7 + iVar8) * 2) *
                       3.0517578e-05;
              fVar13 = (float)(int)*(short *)(param_3 +
                                             (ulonglong)((uVar1 + 1) * param_7 + iVar8) * 2) *
                       3.0517578e-05;
              fVar12 = (float)(int)*(short *)(param_3 +
                                             (ulonglong)((uVar1 + 2) * param_7 + iVar8) * 2) *
                       3.0517578e-05;
              fVar11 = (float)(int)*(short *)(param_3 +
                                             (ulonglong)((uVar1 + 3) * param_7 + iVar8) * 2) *
                       3.0517578e-05;
              iVar8 = iVar8 + 1;
              lVar10 = lVar10 + 1;
              *param_1 = ((((((((fVar16 * 126.0 - fVar13 * 124.0) + fVar12 * 61.0) - fVar15 * 64.0)
                             - fVar11 * 12.0) + fVar14 * 13.0 +
                            ((fVar15 - fVar12) * 25.0 + (fVar13 - fVar16) * 50.0 +
                            (fVar11 - fVar14) * 5.0) * fVar17) * fVar17 +
                           ((((fVar13 * 66.0 - fVar16 * 70.0) - fVar12 * 33.0) + fVar15 * 39.0 +
                            fVar11 * 7.0) - fVar14 * 9.0)) * fVar17 +
                          ((((fVar13 + fVar15) * 16.0 - fVar14) - fVar16 * 30.0) - fVar12)) * fVar17
                         + (fVar13 - fVar15) * 16.0 + (fVar14 - fVar12) + (fVar14 - fVar12)) *
                         fVar17 * 0.041666668 + fVar16;
              param_1 = param_1 + 1;
            } while (lVar10 < lVar7);
          }
          *param_5 = *param_5 + *param_6;
          uVar6 = *param_5;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
    }
  }
  else if (param_4 == 3) {
    if (param_2 != 0) {
      if (param_7 == 1) {
        do {
          uVar1 = *(uint *)((longlong)param_5 + 4);
          uVar6 = (ulonglong)uVar1;
          lVar7 = param_3 + uVar6 * 2;
          fVar16 = (float)(uint)*param_5 * 2.3283064e-10;
          fVar15 = (float)((int)((uint)*(uint3 *)(param_3 + (uVar6 - 2) * 3) << 8) >> 8) *
                   1.1920929e-07;
          fVar14 = (float)((int)((uint)CONCAT21(CONCAT11(*(undefined1 *)((uVar6 - 1) + lVar7),
                                                         *(undefined1 *)((uVar6 - 2) + lVar7)),
                                                *(undefined1 *)((uVar6 - 3) + lVar7)) << 8) >> 8) *
                   1.1920929e-07;
          fVar13 = (float)((int)((uint)CONCAT21(CONCAT11(*(undefined1 *)(uVar6 + 2 + lVar7),
                                                         *(undefined1 *)(uVar6 + 1 + lVar7)),
                                                *(undefined1 *)(uVar6 + lVar7)) << 8) >> 8) *
                   1.1920929e-07;
          fVar12 = (float)((int)((uint)*(uint3 *)((ulonglong)(uVar1 + 1) +
                                                 param_3 + (ulonglong)(uVar1 + 1) * 2) << 8) >> 8) *
                   1.1920929e-07;
          fVar11 = (float)((int)((uint)*(uint3 *)((ulonglong)(uVar1 + 2) +
                                                 param_3 + (ulonglong)(uVar1 + 2) * 2) << 8) >> 8) *
                   1.1920929e-07;
          fVar17 = (float)((int)((uint)*(uint3 *)((ulonglong)(uVar1 + 3) +
                                                 param_3 + (ulonglong)(uVar1 + 3) * 2) << 8) >> 8) *
                   1.1920929e-07;
          *param_1 = ((((((((fVar13 * 126.0 - fVar12 * 124.0) + fVar11 * 61.0) - fVar14 * 64.0) -
                         fVar17 * 12.0) + fVar15 * 13.0 +
                        ((fVar14 - fVar11) * 25.0 + (fVar12 - fVar13) * 50.0 +
                        (fVar17 - fVar15) * 5.0) * fVar16) * fVar16 +
                       ((((fVar12 * 66.0 - fVar13 * 70.0) - fVar11 * 33.0) + fVar14 * 39.0 +
                        fVar17 * 7.0) - fVar15 * 9.0)) * fVar16 +
                      ((((fVar12 + fVar14) * 16.0 - fVar15) - fVar13 * 30.0) - fVar11)) * fVar16 +
                     (fVar12 - fVar14) * 16.0 + (fVar15 - fVar11) + (fVar15 - fVar11)) * fVar16 *
                     0.041666668 + fVar13;
          param_1 = param_1 + 1;
          *param_5 = *param_5 + *param_6;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
      else {
        uVar6 = (ulonglong)(uint)*param_5;
        iStackX_10 = param_2;
        do {
          iVar8 = 0;
          lVar10 = 0;
          fVar17 = (float)(uVar6 & 0xffffffff) * 2.3283064e-10;
          if (0 < param_7) {
            do {
              uVar1 = *(uint *)((longlong)param_5 + 4);
              lVar9 = ((ulonglong)uVar1 - 1) * lVar7 + lVar10;
              uVar2 = uVar1 * param_7 + iVar8;
              uVar3 = (uVar1 + 1) * param_7 + iVar8;
              uVar4 = (uVar1 + 2) * param_7 + iVar8;
              uVar5 = (uVar1 + 3) * param_7 + iVar8;
              fVar16 = (float)((int)((uint)*(uint3 *)(param_3 +
                                                     (((ulonglong)uVar1 - 2) * lVar7 + lVar10) * 3)
                                    << 8) >> 8) * 1.1920929e-07;
              fVar15 = (float)((int)((uint)*(uint3 *)(lVar9 + param_3 + lVar9 * 2) << 8) >> 8) *
                       1.1920929e-07;
              fVar14 = (float)((int)((uint)*(uint3 *)((ulonglong)uVar2 +
                                                     param_3 + (ulonglong)uVar2 * 2) << 8) >> 8) *
                       1.1920929e-07;
              fVar13 = (float)((int)((uint)*(uint3 *)((ulonglong)uVar3 +
                                                     param_3 + (ulonglong)uVar3 * 2) << 8) >> 8) *
                       1.1920929e-07;
              fVar12 = (float)((int)((uint)*(uint3 *)((ulonglong)uVar4 +
                                                     param_3 + (ulonglong)uVar4 * 2) << 8) >> 8) *
                       1.1920929e-07;
              fVar11 = (float)((int)((uint)*(uint3 *)((ulonglong)uVar5 +
                                                     param_3 + (ulonglong)uVar5 * 2) << 8) >> 8) *
                       1.1920929e-07;
              iVar8 = iVar8 + 1;
              lVar10 = lVar10 + 1;
              *param_1 = ((((((((fVar14 * 126.0 - fVar13 * 124.0) + fVar12 * 61.0) - fVar15 * 64.0)
                             - fVar11 * 12.0) + fVar16 * 13.0 +
                            ((fVar15 - fVar12) * 25.0 + (fVar13 - fVar14) * 50.0 +
                            (fVar11 - fVar16) * 5.0) * fVar17) * fVar17 +
                           ((((fVar13 * 66.0 - fVar14 * 70.0) - fVar12 * 33.0) + fVar15 * 39.0 +
                            fVar11 * 7.0) - fVar16 * 9.0)) * fVar17 +
                          ((((fVar13 + fVar15) * 16.0 - fVar16) - fVar14 * 30.0) - fVar12)) * fVar17
                         + (fVar13 - fVar15) * 16.0 + (fVar16 - fVar12) + (fVar16 - fVar12)) *
                         fVar17 * 0.041666668 + fVar14;
              param_1 = param_1 + 1;
            } while (lVar10 < lVar7);
          }
          *param_5 = *param_5 + *param_6;
          uVar6 = *param_5;
          iStackX_10 = iStackX_10 + -1;
        } while (iStackX_10 != 0);
      }
    }
  }
  else if (param_4 == 4) {
    if (param_2 != 0) {
      if (param_7 == 1) {
        do {
          uVar1 = *(uint *)((longlong)param_5 + 4);
          uVar6 = (ulonglong)uVar1;
          fVar12 = (float)*(int *)(param_3 + -8 + uVar6 * 4) * 4.656613e-10;
          fVar13 = (float)*(int *)(param_3 + -4 + uVar6 * 4) * 4.656613e-10;
          fVar15 = (float)*(int *)(param_3 + uVar6 * 4) * 4.656613e-10;
          fVar14 = (float)*(int *)(param_3 + (ulonglong)(uVar1 + 1) * 4) * 4.656613e-10;
          fVar11 = (float)*(int *)(param_3 + (ulonglong)(uVar1 + 2) * 4) * 4.656613e-10;
          fVar17 = (float)*(int *)(param_3 + (ulonglong)(uVar1 + 3) * 4) * 4.656613e-10;
          fVar16 = (float)(uint)*param_5 * 2.3283064e-10;
          *param_1 = ((((((((fVar15 * 126.0 - fVar14 * 124.0) + fVar11 * 61.0) - fVar13 * 64.0) -
                         fVar17 * 12.0) + fVar12 * 13.0 +
                        ((fVar13 - fVar11) * 25.0 + (fVar14 - fVar15) * 50.0 +
                        (fVar17 - fVar12) * 5.0) * fVar16) * fVar16 +
                       ((((fVar14 * 66.0 - fVar15 * 70.0) - fVar11 * 33.0) + fVar13 * 39.0 +
                        fVar17 * 7.0) - fVar12 * 9.0)) * fVar16 +
                      ((((fVar14 + fVar13) * 16.0 - fVar12) - fVar15 * 30.0) - fVar11)) * fVar16 +
                     (fVar14 - fVar13) * 16.0 + (fVar12 - fVar11) + (fVar12 - fVar11)) * fVar16 *
                     0.041666668 + fVar15;
          param_1 = param_1 + 1;
          *param_5 = *param_5 + *param_6;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
      else {
        uVar6 = (ulonglong)(uint)*param_5;
        do {
          iVar8 = 0;
          lVar10 = 0;
          fVar17 = (float)(uVar6 & 0xffffffff) * 2.3283064e-10;
          if (0 < param_7) {
            do {
              uVar1 = *(uint *)((longlong)param_5 + 4);
              fVar14 = (float)*(int *)(param_3 + (((ulonglong)uVar1 - 2) * lVar7 + lVar10) * 4) *
                       4.656613e-10;
              fVar15 = (float)*(int *)(param_3 + (((ulonglong)uVar1 - 1) * lVar7 + lVar10) * 4) *
                       4.656613e-10;
              fVar16 = (float)*(int *)(param_3 + (ulonglong)(uVar1 * param_7 + iVar8) * 4) *
                       4.656613e-10;
              fVar13 = (float)*(int *)(param_3 + (ulonglong)((uVar1 + 1) * param_7 + iVar8) * 4) *
                       4.656613e-10;
              fVar12 = (float)*(int *)(param_3 + (ulonglong)((uVar1 + 2) * param_7 + iVar8) * 4) *
                       4.656613e-10;
              fVar11 = (float)*(int *)(param_3 + (ulonglong)((uVar1 + 3) * param_7 + iVar8) * 4) *
                       4.656613e-10;
              iVar8 = iVar8 + 1;
              lVar10 = lVar10 + 1;
              *param_1 = ((((((((fVar16 * 126.0 - fVar13 * 124.0) + fVar12 * 61.0) - fVar15 * 64.0)
                             - fVar11 * 12.0) + fVar14 * 13.0 +
                            ((fVar15 - fVar12) * 25.0 + (fVar13 - fVar16) * 50.0 +
                            (fVar11 - fVar14) * 5.0) * fVar17) * fVar17 +
                           ((((fVar13 * 66.0 - fVar16 * 70.0) - fVar12 * 33.0) + fVar15 * 39.0 +
                            fVar11 * 7.0) - fVar14 * 9.0)) * fVar17 +
                          ((((fVar13 + fVar15) * 16.0 - fVar14) - fVar16 * 30.0) - fVar12)) * fVar17
                         + (fVar13 - fVar15) * 16.0 + (fVar14 - fVar12) + (fVar14 - fVar12)) *
                         fVar17 * 0.041666668 + fVar16;
              param_1 = param_1 + 1;
            } while (lVar10 < lVar7);
          }
          *param_5 = *param_5 + *param_6;
          uVar6 = *param_5;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
    }
  }
  else if ((param_4 == 5) && (param_2 != 0)) {
    if (param_7 == 1) {
      do {
        uVar1 = *(uint *)((longlong)param_5 + 4);
        uVar6 = (ulonglong)uVar1;
        fVar17 = *(float *)(param_3 + -4 + uVar6 * 4);
        fVar11 = *(float *)(param_3 + -8 + uVar6 * 4);
        fVar12 = *(float *)(param_3 + uVar6 * 4);
        fVar13 = *(float *)(param_3 + (ulonglong)(uVar1 + 1) * 4);
        fVar14 = *(float *)(param_3 + (ulonglong)(uVar1 + 2) * 4);
        fVar16 = (float)(uint)*param_5 * 2.3283064e-10;
        fVar15 = *(float *)(param_3 + (ulonglong)(uVar1 + 3) * 4);
        *param_1 = ((((((((fVar12 * 126.0 - fVar13 * 124.0) + fVar14 * 61.0) - fVar17 * 64.0) -
                       fVar15 * 12.0) + fVar11 * 13.0 +
                      ((fVar17 - fVar14) * 25.0 + (fVar13 - fVar12) * 50.0 + (fVar15 - fVar11) * 5.0
                      ) * fVar16) * fVar16 +
                     ((((fVar13 * 66.0 - fVar12 * 70.0) - fVar14 * 33.0) + fVar17 * 39.0 +
                      fVar15 * 7.0) - fVar11 * 9.0)) * fVar16 +
                    ((((fVar13 + fVar17) * 16.0 - fVar11) - fVar12 * 30.0) - fVar14)) * fVar16 +
                   (fVar13 - fVar17) * 16.0 + (fVar11 - fVar14) + (fVar11 - fVar14)) * fVar16 *
                   0.041666668 + fVar12;
        param_1 = param_1 + 1;
        *param_5 = *param_5 + *param_6;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    else {
      uVar6 = (ulonglong)(uint)*param_5;
      do {
        iVar8 = 0;
        lVar10 = 0;
        fVar17 = (float)(uVar6 & 0xffffffff) * 2.3283064e-10;
        if (3 < lVar7) {
          do {
            uVar1 = *(uint *)((longlong)param_5 + 4);
            fVar11 = *(float *)(param_3 + (((ulonglong)uVar1 - 2) * lVar7 + lVar10) * 4);
            fVar12 = *(float *)(param_3 + (((ulonglong)uVar1 - 1) * lVar7 + lVar10) * 4);
            fVar13 = *(float *)(param_3 + (ulonglong)(uVar1 * param_7 + iVar8) * 4);
            fVar14 = *(float *)(param_3 + (ulonglong)((uVar1 + 1) * param_7 + iVar8) * 4);
            fVar15 = *(float *)(param_3 + (ulonglong)((uVar1 + 2) * param_7 + iVar8) * 4);
            fVar16 = *(float *)(param_3 + (ulonglong)((uVar1 + 3) * param_7 + iVar8) * 4);
            *param_1 = ((((((((fVar13 * 126.0 - fVar14 * 124.0) + fVar15 * 61.0) - fVar12 * 64.0) -
                           fVar16 * 12.0) + fVar11 * 13.0 +
                          ((fVar12 - fVar15) * 25.0 + (fVar14 - fVar13) * 50.0 +
                          (fVar16 - fVar11) * 5.0) * fVar17) * fVar17 +
                         ((((fVar14 * 66.0 - fVar13 * 70.0) - fVar15 * 33.0) + fVar12 * 39.0 +
                          fVar16 * 7.0) - fVar11 * 9.0)) * fVar17 +
                        ((((fVar14 + fVar12) * 16.0 - fVar11) - fVar13 * 30.0) - fVar15)) * fVar17 +
                       (fVar14 - fVar12) * 16.0 + (fVar11 - fVar15) + (fVar11 - fVar15)) *
                       fVar17 * 0.041666668 + fVar13;
            uVar1 = *(uint *)((longlong)param_5 + 4);
            fVar11 = *(float *)(param_3 + 4 + (((ulonglong)uVar1 - 2) * lVar7 + lVar10) * 4);
            fVar12 = *(float *)(param_3 + 4 + (((ulonglong)uVar1 - 1) * lVar7 + lVar10) * 4);
            fVar13 = *(float *)(param_3 + (ulonglong)(uVar1 * param_7 + 1 + iVar8) * 4);
            fVar14 = *(float *)(param_3 + (ulonglong)((uVar1 + 1) * param_7 + 1 + iVar8) * 4);
            fVar15 = *(float *)(param_3 + (ulonglong)((uVar1 + 2) * param_7 + 1 + iVar8) * 4);
            fVar16 = *(float *)(param_3 + (ulonglong)((uVar1 + 3) * param_7 + 1 + iVar8) * 4);
            param_1[1] = ((((((((fVar13 * 126.0 - fVar14 * 124.0) + fVar15 * 61.0) - fVar12 * 64.0)
                             - fVar16 * 12.0) + fVar11 * 13.0 +
                            ((fVar12 - fVar15) * 25.0 + (fVar14 - fVar13) * 50.0 +
                            (fVar16 - fVar11) * 5.0) * fVar17) * fVar17 +
                           ((((fVar14 * 66.0 - fVar13 * 70.0) - fVar15 * 33.0) + fVar12 * 39.0 +
                            fVar16 * 7.0) - fVar11 * 9.0)) * fVar17 +
                          ((((fVar14 + fVar12) * 16.0 - fVar11) - fVar13 * 30.0) - fVar15)) * fVar17
                         + (fVar14 - fVar12) * 16.0 + (fVar11 - fVar15) + (fVar11 - fVar15)) *
                         fVar17 * 0.041666668 + fVar13;
            uVar1 = *(uint *)((longlong)param_5 + 4);
            fVar11 = *(float *)(param_3 + 8 + (((ulonglong)uVar1 - 2) * lVar7 + lVar10) * 4);
            fVar12 = *(float *)(param_3 + 8 + (((ulonglong)uVar1 - 1) * lVar7 + lVar10) * 4);
            fVar13 = *(float *)(param_3 + (ulonglong)(uVar1 * param_7 + 2 + iVar8) * 4);
            fVar14 = *(float *)(param_3 + (ulonglong)((uVar1 + 1) * param_7 + 2 + iVar8) * 4);
            fVar15 = *(float *)(param_3 + (ulonglong)((uVar1 + 2) * param_7 + 2 + iVar8) * 4);
            fVar16 = *(float *)(param_3 + (ulonglong)((uVar1 + 3) * param_7 + 2 + iVar8) * 4);
            param_1[2] = ((((((((fVar13 * 126.0 - fVar14 * 124.0) + fVar15 * 61.0) - fVar12 * 64.0)
                             - fVar16 * 12.0) + fVar11 * 13.0 +
                            ((fVar12 - fVar15) * 25.0 + (fVar14 - fVar13) * 50.0 +
                            (fVar16 - fVar11) * 5.0) * fVar17) * fVar17 +
                           ((((fVar14 * 66.0 - fVar13 * 70.0) - fVar15 * 33.0) + fVar12 * 39.0 +
                            fVar16 * 7.0) - fVar11 * 9.0)) * fVar17 +
                          ((((fVar14 + fVar12) * 16.0 - fVar11) - fVar13 * 30.0) - fVar15)) * fVar17
                         + (fVar14 - fVar12) * 16.0 + (fVar11 - fVar15) + (fVar11 - fVar15)) *
                         fVar17 * 0.041666668 + fVar13;
            uVar1 = *(uint *)((longlong)param_5 + 4);
            fVar11 = *(float *)(param_3 + 0xc + (((ulonglong)uVar1 - 2) * lVar7 + lVar10) * 4);
            fVar12 = *(float *)(param_3 + 0xc + (((ulonglong)uVar1 - 1) * lVar7 + lVar10) * 4);
            fVar13 = *(float *)(param_3 + (ulonglong)(uVar1 * param_7 + 3 + iVar8) * 4);
            fVar14 = *(float *)(param_3 + (ulonglong)((uVar1 + 1) * param_7 + 3 + iVar8) * 4);
            fVar15 = *(float *)(param_3 + (ulonglong)((uVar1 + 2) * param_7 + 3 + iVar8) * 4);
            fVar16 = *(float *)(param_3 + (ulonglong)((uVar1 + 3) * param_7 + 3 + iVar8) * 4);
            iVar8 = iVar8 + 4;
            lVar10 = lVar10 + 4;
            param_1[3] = ((((((((fVar13 * 126.0 - fVar14 * 124.0) + fVar15 * 61.0) - fVar12 * 64.0)
                             - fVar16 * 12.0) + fVar11 * 13.0 +
                            ((fVar12 - fVar15) * 25.0 + (fVar14 - fVar13) * 50.0 +
                            (fVar16 - fVar11) * 5.0) * fVar17) * fVar17 +
                           ((((fVar14 * 66.0 - fVar13 * 70.0) - fVar15 * 33.0) + fVar12 * 39.0 +
                            fVar16 * 7.0) - fVar11 * 9.0)) * fVar17 +
                          ((((fVar14 + fVar12) * 16.0 - fVar11) - fVar13 * 30.0) - fVar15)) * fVar17
                         + (fVar14 - fVar12) * 16.0 + (fVar11 - fVar15) + (fVar11 - fVar15)) *
                         fVar17 * 0.041666668 + fVar13;
            param_1 = param_1 + 4;
          } while (lVar10 < lVar7 + -3);
        }
        for (; lVar10 < lVar7; lVar10 = lVar10 + 1) {
          uVar1 = *(uint *)((longlong)param_5 + 4);
          fVar11 = *(float *)(param_3 + (((ulonglong)uVar1 - 2) * lVar7 + lVar10) * 4);
          fVar12 = *(float *)(param_3 + (((ulonglong)uVar1 - 1) * lVar7 + lVar10) * 4);
          fVar13 = *(float *)(param_3 + (ulonglong)(uVar1 * param_7 + iVar8) * 4);
          fVar14 = *(float *)(param_3 + (ulonglong)((uVar1 + 1) * param_7 + iVar8) * 4);
          fVar15 = *(float *)(param_3 + (ulonglong)((uVar1 + 2) * param_7 + iVar8) * 4);
          fVar16 = *(float *)(param_3 + (ulonglong)((uVar1 + 3) * param_7 + iVar8) * 4);
          iVar8 = iVar8 + 1;
          *param_1 = ((((((((fVar13 * 126.0 - fVar14 * 124.0) + fVar15 * 61.0) - fVar12 * 64.0) -
                         fVar16 * 12.0) + fVar11 * 13.0 +
                        ((fVar12 - fVar15) * 25.0 + (fVar14 - fVar13) * 50.0 +
                        (fVar16 - fVar11) * 5.0) * fVar17) * fVar17 +
                       ((((fVar14 * 66.0 - fVar13 * 70.0) - fVar15 * 33.0) + fVar12 * 39.0 +
                        fVar16 * 7.0) - fVar11 * 9.0)) * fVar17 +
                      ((((fVar14 + fVar12) * 16.0 - fVar11) - fVar13 * 30.0) - fVar15)) * fVar17 +
                     (fVar14 - fVar12) * 16.0 + (fVar11 - fVar15) + (fVar11 - fVar15)) * fVar17 *
                     0.041666668 + fVar13;
          param_1 = param_1 + 1;
        }
        *param_5 = *param_5 + *param_6;
        uVar6 = *param_5;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  return;
}





// 函数: void FUN_180822f91(ulonglong *param_1)
void FUN_180822f91(ulonglong *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  float *unaff_RBP;
  int unaff_ESI;
  longlong unaff_RDI;
  int iVar7;
  longlong lVar8;
  longlong unaff_R14;
  int unaff_R15D;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  int in_stack_000000e8;
  ulonglong *in_stack_00000100;
  longlong *in_stack_00000108;
  
  uVar6 = (ulonglong)(uint)*param_1;
  do {
    iVar7 = 0;
    lVar8 = 0;
    fVar15 = (float)(uVar6 & 0xffffffff) * 2.3283064e-10;
    if (0 < unaff_ESI) {
      do {
        uVar1 = *(uint *)((longlong)in_stack_00000100 + 4);
        uVar2 = uVar1 * unaff_ESI + iVar7;
        uVar3 = (uVar1 + 1) * unaff_ESI + iVar7;
        uVar4 = (uVar1 + 2) * unaff_ESI + iVar7;
        uVar5 = (uVar1 + 3) * unaff_ESI + iVar7;
        fVar14 = (float)((int)((uint)*(uint3 *)(unaff_RDI +
                                               (((ulonglong)uVar1 - 2) * unaff_R14 + lVar8) * 3) <<
                              8) >> 8) * unaff_XMM12_Da;
        fVar13 = (float)((int)((uint)*(uint3 *)(unaff_RDI +
                                               (((ulonglong)uVar1 - 1) * unaff_R14 + lVar8) * 3) <<
                              8) >> 8) * unaff_XMM12_Da;
        fVar12 = (float)((int)((uint)*(uint3 *)((ulonglong)uVar2 + unaff_RDI + (ulonglong)uVar2 * 2)
                              << 8) >> 8) * unaff_XMM12_Da;
        fVar11 = (float)((int)((uint)*(uint3 *)((ulonglong)uVar3 + unaff_RDI + (ulonglong)uVar3 * 2)
                              << 8) >> 8) * unaff_XMM12_Da;
        fVar10 = (float)((int)((uint)*(uint3 *)((ulonglong)uVar4 + unaff_RDI + (ulonglong)uVar4 * 2)
                              << 8) >> 8) * unaff_XMM12_Da;
        fVar9 = (float)((int)((uint)*(uint3 *)((ulonglong)uVar5 + unaff_RDI + (ulonglong)uVar5 * 2)
                             << 8) >> 8) * unaff_XMM12_Da;
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + 1;
        *unaff_RBP = ((((((((fVar12 * unaff_XMM14_Da - fVar11 * unaff_XMM15_Da) + fVar10 * 61.0) -
                          fVar13 * 64.0) - fVar9 * 12.0) + fVar14 * 13.0 +
                        ((fVar13 - fVar10) * 25.0 + (fVar11 - fVar12) * 50.0 +
                        (fVar9 - fVar14) * 5.0) * fVar15) * fVar15 +
                       ((((fVar11 * 66.0 - fVar12 * 70.0) - fVar10 * 33.0) + fVar13 * 39.0 +
                        fVar9 * 7.0) - fVar14 * 9.0)) * fVar15 +
                      ((((fVar11 + fVar13) * unaff_XMM13_Da - fVar14) - fVar12 * 30.0) - fVar10)) *
                      fVar15 + (fVar11 - fVar13) * unaff_XMM13_Da +
                               (fVar14 - fVar10) + (fVar14 - fVar10)) * fVar15 * 0.041666668 +
                     fVar12;
        unaff_RBP = unaff_RBP + 1;
        param_1 = in_stack_00000100;
        unaff_R15D = in_stack_000000e8;
      } while (lVar8 < unaff_R14);
    }
    *param_1 = *param_1 + *in_stack_00000108;
    uVar6 = *param_1;
    unaff_R15D = unaff_R15D + -1;
    in_stack_000000e8 = unaff_R15D;
  } while (unaff_R15D != 0);
  return;
}





