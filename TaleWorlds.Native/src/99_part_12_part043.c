#include "TaleWorlds.Native.Split.h"

// 99_part_12_part043.c - 1 个函数

// 函数: void FUN_1807e78c0(float *param_1,float *param_2,longlong param_3,uint param_4,uint param_5,
void FUN_1807e78c0(float *param_1,float *param_2,longlong param_3,uint param_4,uint param_5,
                  uint *param_6,uint *param_7,uint param_8,float param_9,float param_10,
                  float param_11,int param_12,uint param_13)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  undefined2 uVar11;
  short sVar12;
  uint uVar13;
  short *psVar14;
  undefined2 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  short *psVar25;
  float *pfVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  
  uVar19 = (ulonglong)(int)param_13;
  if (param_13 == 1) {
    if (param_12 != 0) {
      do {
        uVar13 = param_8;
        if (param_4 + param_12 < param_8) {
          uVar13 = param_4 + param_12;
        }
        uVar9 = param_8;
        if (param_5 + param_12 < param_8) {
          uVar9 = param_5 + param_12;
        }
        iVar10 = uVar9 - param_5;
        if ((int)(uVar13 - param_4) < (int)(uVar9 - param_5)) {
          iVar10 = uVar13 - param_4;
        }
        psVar14 = (short *)(param_3 + (ulonglong)param_4 * 2);
        iVar27 = 0;
        puVar15 = (undefined2 *)(param_3 + (ulonglong)param_5 * 2);
        if (3 < iVar10) {
          uVar13 = (iVar10 - 4U >> 2) + 1;
          uVar19 = (ulonglong)uVar13;
          iVar27 = uVar13 * 4;
          do {
            fVar28 = (float)(int)*psVar14 * 3.051851e-05 * param_11 + *param_2;
            *param_1 = (float)(int)*psVar14 * 3.051851e-05 * param_9 + *param_2 * param_10;
            if (fVar28 <= 1.0) {
              if (-1.0 <= fVar28) {
                uVar11 = (undefined2)(int)(fVar28 * 32767.0);
              }
              else {
                uVar11 = 0x8000;
              }
            }
            else {
              uVar11 = 0x7fff;
            }
            *puVar15 = uVar11;
            fVar28 = (float)(int)psVar14[1] * 3.051851e-05 * param_11 + param_2[1];
            param_1[1] = (float)(int)psVar14[1] * 3.051851e-05 * param_9 + param_2[1] * param_10;
            if (fVar28 <= 1.0) {
              if (-1.0 <= fVar28) {
                uVar11 = (undefined2)(int)(fVar28 * 32767.0);
              }
              else {
                uVar11 = 0x8000;
              }
            }
            else {
              uVar11 = 0x7fff;
            }
            puVar15[1] = uVar11;
            fVar28 = (float)(int)psVar14[2] * 3.051851e-05 * param_11 + param_2[2];
            param_1[2] = (float)(int)psVar14[2] * 3.051851e-05 * param_9 + param_2[2] * param_10;
            if (fVar28 <= 1.0) {
              if (-1.0 <= fVar28) {
                uVar11 = (undefined2)(int)(fVar28 * 32767.0);
              }
              else {
                uVar11 = 0x8000;
              }
            }
            else {
              uVar11 = 0x7fff;
            }
            puVar15[2] = uVar11;
            fVar28 = (float)(int)psVar14[3] * 3.051851e-05 * param_11 + param_2[3];
            param_1[3] = (float)(int)psVar14[3] * 3.051851e-05 * param_9 + param_2[3] * param_10;
            if (fVar28 <= 1.0) {
              if (-1.0 <= fVar28) {
                uVar11 = (undefined2)(int)(fVar28 * 32767.0);
              }
              else {
                uVar11 = 0x8000;
              }
            }
            else {
              uVar11 = 0x7fff;
            }
            puVar15[3] = uVar11;
            psVar14 = psVar14 + 4;
            puVar15 = puVar15 + 4;
            param_1 = param_1 + 4;
            param_2 = param_2 + 4;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        if (iVar27 < iVar10) {
          lVar23 = (longlong)puVar15 - (longlong)psVar14;
          uVar19 = (ulonglong)(uint)(iVar10 - iVar27);
          do {
            fVar28 = (float)(int)*psVar14 * 3.051851e-05 * param_11 + *param_2;
            *param_1 = (float)(int)*psVar14 * 3.051851e-05 * param_9 + *param_2 * param_10;
            if (fVar28 <= 1.0) {
              if (-1.0 <= fVar28) {
                uVar11 = (undefined2)(int)(fVar28 * 32767.0);
              }
              else {
                uVar11 = 0x8000;
              }
            }
            else {
              uVar11 = 0x7fff;
            }
            *(undefined2 *)(lVar23 + (longlong)psVar14) = uVar11;
            param_1 = param_1 + 1;
            psVar14 = psVar14 + 1;
            param_2 = param_2 + 1;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        for (param_4 = param_4 + iVar10; (int)param_4 < 0; param_4 = param_4 + param_8) {
        }
        for (; (int)param_8 <= (int)param_4; param_4 = param_4 - param_8) {
        }
        for (param_5 = param_5 + iVar10; (int)param_5 < 0; param_5 = param_5 + param_8) {
        }
        for (; (int)param_8 <= (int)param_5; param_5 = param_5 - param_8) {
        }
        param_12 = param_12 - iVar10;
      } while (param_12 != 0);
    }
  }
  else if (param_13 == 2) {
    if (param_12 != 0) {
      do {
        uVar13 = param_8;
        if (param_4 + param_12 < param_8) {
          uVar13 = param_4 + param_12;
        }
        uVar9 = param_8;
        if (param_5 + param_12 < param_8) {
          uVar9 = param_5 + param_12;
        }
        psVar14 = (short *)(param_3 + (ulonglong)(param_4 * 2) * 2);
        puVar15 = (undefined2 *)(param_3 + (ulonglong)(param_5 * 2) * 2);
        iVar10 = uVar9 - param_5;
        if ((int)(uVar13 - param_4) < (int)(uVar9 - param_5)) {
          iVar10 = uVar13 - param_4;
        }
        iVar27 = 0;
        if (3 < iVar10) {
          uVar13 = (iVar10 - 4U >> 2) + 1;
          uVar19 = (ulonglong)uVar13;
          iVar27 = uVar13 * 4;
          do {
            fVar28 = param_2[1];
            sVar12 = psVar14[1];
            fVar32 = (float)(int)*psVar14 * 3.051851e-05 * param_11 + *param_2;
            fVar30 = (float)(int)sVar12 * 3.051851e-05 * param_11 + fVar28;
            *param_1 = (float)(int)*psVar14 * 3.051851e-05 * param_9 + *param_2 * param_10;
            param_1[1] = (float)(int)sVar12 * 3.051851e-05 * param_9 + fVar28 * param_10;
            if (fVar32 <= 1.0) {
              if (-1.0 <= fVar32) {
                uVar11 = (undefined2)(int)(fVar32 * 32767.0);
              }
              else {
                uVar11 = 0x8000;
              }
            }
            else {
              uVar11 = 0x7fff;
            }
            *puVar15 = uVar11;
            if (fVar30 <= 1.0) {
              if (-1.0 <= fVar30) {
                uVar11 = (undefined2)(int)(fVar30 * 32767.0);
              }
              else {
                uVar11 = 0x8000;
              }
            }
            else {
              uVar11 = 0x7fff;
            }
            puVar15[1] = uVar11;
            fVar28 = param_2[3];
            sVar12 = psVar14[3];
            fVar32 = (float)(int)psVar14[2] * 3.051851e-05 * param_11 + param_2[2];
            fVar30 = (float)(int)sVar12 * 3.051851e-05 * param_11 + fVar28;
            param_1[2] = (float)(int)psVar14[2] * 3.051851e-05 * param_9 + param_2[2] * param_10;
            param_1[3] = (float)(int)sVar12 * 3.051851e-05 * param_9 + fVar28 * param_10;
            if (fVar32 <= 1.0) {
              if (-1.0 <= fVar32) {
                uVar11 = (undefined2)(int)(fVar32 * 32767.0);
              }
              else {
                uVar11 = 0x8000;
              }
            }
            else {
              uVar11 = 0x7fff;
            }
            puVar15[2] = uVar11;
            if (fVar30 <= 1.0) {
              if (-1.0 <= fVar30) {
                uVar11 = (undefined2)(int)(fVar30 * 32767.0);
              }
              else {
                uVar11 = 0x8000;
              }
            }
            else {
              uVar11 = 0x7fff;
            }
            puVar15[3] = uVar11;
            fVar28 = param_2[5];
            sVar12 = psVar14[5];
            fVar32 = (float)(int)psVar14[4] * 3.051851e-05 * param_11 + param_2[4];
            fVar30 = (float)(int)sVar12 * 3.051851e-05 * param_11 + fVar28;
            param_1[4] = (float)(int)psVar14[4] * 3.051851e-05 * param_9 + param_2[4] * param_10;
            param_1[5] = (float)(int)sVar12 * 3.051851e-05 * param_9 + fVar28 * param_10;
            if (fVar32 <= 1.0) {
              if (-1.0 <= fVar32) {
                uVar11 = (undefined2)(int)(fVar32 * 32767.0);
              }
              else {
                uVar11 = 0x8000;
              }
            }
            else {
              uVar11 = 0x7fff;
            }
            puVar15[4] = uVar11;
            if (fVar30 <= 1.0) {
              if (-1.0 <= fVar30) {
                uVar11 = (undefined2)(int)(fVar30 * 32767.0);
              }
              else {
                uVar11 = 0x8000;
              }
            }
            else {
              uVar11 = 0x7fff;
            }
            puVar15[5] = uVar11;
            fVar28 = param_2[7];
            sVar12 = psVar14[7];
            fVar32 = (float)(int)psVar14[6] * 3.051851e-05 * param_11 + param_2[6];
            fVar30 = (float)(int)sVar12 * 3.051851e-05 * param_11 + fVar28;
            param_1[6] = (float)(int)psVar14[6] * 3.051851e-05 * param_9 + param_2[6] * param_10;
            param_1[7] = (float)(int)sVar12 * 3.051851e-05 * param_9 + fVar28 * param_10;
            if (fVar32 <= 1.0) {
              if (-1.0 <= fVar32) {
                uVar11 = (undefined2)(int)(fVar32 * 32767.0);
              }
              else {
                uVar11 = 0x8000;
              }
            }
            else {
              uVar11 = 0x7fff;
            }
            puVar15[6] = uVar11;
            if (fVar30 <= 1.0) {
              if (-1.0 <= fVar30) {
                uVar11 = (undefined2)(int)(fVar30 * 32767.0);
              }
              else {
                uVar11 = 0x8000;
              }
            }
            else {
              uVar11 = 0x7fff;
            }
            puVar15[7] = uVar11;
            param_1 = param_1 + 8;
            puVar15 = puVar15 + 8;
            param_2 = param_2 + 8;
            psVar14 = psVar14 + 8;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        if (iVar27 < iVar10) {
          uVar19 = (ulonglong)(uint)(iVar10 - iVar27);
          do {
            fVar28 = param_2[1];
            sVar12 = psVar14[1];
            fVar32 = (float)(int)*psVar14 * 3.051851e-05 * param_11 + *param_2;
            fVar30 = (float)(int)sVar12 * 3.051851e-05 * param_11 + fVar28;
            *param_1 = (float)(int)*psVar14 * 3.051851e-05 * param_9 + *param_2 * param_10;
            param_1[1] = (float)(int)sVar12 * 3.051851e-05 * param_9 + fVar28 * param_10;
            if (fVar32 <= 1.0) {
              if (-1.0 <= fVar32) {
                uVar11 = (undefined2)(int)(fVar32 * 32767.0);
              }
              else {
                uVar11 = 0x8000;
              }
            }
            else {
              uVar11 = 0x7fff;
            }
            *puVar15 = uVar11;
            if (fVar30 <= 1.0) {
              if (-1.0 <= fVar30) {
                uVar11 = (undefined2)(int)(fVar30 * 32767.0);
              }
              else {
                uVar11 = 0x8000;
              }
            }
            else {
              uVar11 = 0x7fff;
            }
            puVar15[1] = uVar11;
            param_1 = param_1 + 2;
            puVar15 = puVar15 + 2;
            param_2 = param_2 + 2;
            psVar14 = psVar14 + 2;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        for (param_4 = param_4 + iVar10; (int)param_4 < 0; param_4 = param_4 + param_8) {
        }
        for (; (int)param_8 <= (int)param_4; param_4 = param_4 - param_8) {
        }
        for (param_5 = param_5 + iVar10; (int)param_5 < 0; param_5 = param_5 + param_8) {
        }
        for (; (int)param_8 <= (int)param_5; param_5 = param_5 - param_8) {
        }
        param_12 = param_12 - iVar10;
      } while (param_12 != 0);
    }
  }
  else if (param_13 == 6) {
    if (param_12 != 0) {
      do {
        uVar13 = param_8;
        if (param_4 + param_12 < param_8) {
          uVar13 = param_4 + param_12;
        }
        uVar9 = param_8;
        if (param_5 + param_12 < param_8) {
          uVar9 = param_5 + param_12;
        }
        uVar1 = uVar9 - param_5;
        if ((int)(uVar13 - param_4) < (int)(uVar9 - param_5)) {
          uVar1 = uVar13 - param_4;
        }
        uVar13 = param_4 * 6;
        psVar14 = (short *)(param_3 + (ulonglong)uVar13 * 2);
        if (0 < (int)uVar1) {
          lVar23 = (ulonglong)uVar13 - (ulonglong)(param_5 * 6);
          uVar19 = (ulonglong)uVar1;
          psVar25 = psVar14 + ((ulonglong)(param_5 * 6) - (ulonglong)uVar13) + 2;
          do {
            sVar12 = *psVar14;
            fVar28 = *param_2;
            fVar30 = param_2[1];
            fVar32 = param_2[2];
            fVar33 = param_2[3];
            fVar34 = param_2[4];
            fVar35 = param_2[5];
            sVar2 = psVar25[lVar23 + -1];
            sVar3 = psVar25[lVar23];
            sVar4 = psVar25[lVar23 + 1];
            sVar5 = psVar25[lVar23 + 2];
            sVar6 = psVar25[lVar23 + 3];
            *param_1 = (float)(int)sVar12 * 3.051851e-05 * param_9 + fVar28 * param_10;
            param_1[1] = (float)(int)sVar2 * 3.051851e-05 * param_9 + fVar30 * param_10;
            param_1[2] = (float)(int)sVar3 * 3.051851e-05 * param_9 + fVar32 * param_10;
            param_1[3] = (float)(int)sVar4 * 3.051851e-05 * param_9 + fVar33 * param_10;
            param_1[4] = (float)(int)sVar5 * 3.051851e-05 * param_9 + fVar34 * param_10;
            param_1[5] = (float)(int)sVar6 * 3.051851e-05 * param_9 + fVar35 * param_10;
            fVar28 = (float)(int)sVar12 * 3.051851e-05 * param_11 + fVar28;
            fVar30 = (float)(int)sVar2 * 3.051851e-05 * param_11 + fVar30;
            fVar32 = (float)(int)sVar3 * 3.051851e-05 * param_11 + fVar32;
            fVar33 = (float)(int)sVar4 * 3.051851e-05 * param_11 + fVar33;
            fVar34 = (float)(int)sVar5 * 3.051851e-05 * param_11 + fVar34;
            fVar35 = (float)(int)sVar6 * 3.051851e-05 * param_11 + fVar35;
            if (fVar28 <= 1.0) {
              if (-1.0 <= fVar28) {
                sVar12 = (short)(int)(fVar28 * 32767.0);
              }
              else {
                sVar12 = -0x8000;
              }
            }
            else {
              sVar12 = 0x7fff;
            }
            psVar25[-2] = sVar12;
            if (fVar30 <= 1.0) {
              if (-1.0 <= fVar30) {
                sVar12 = (short)(int)(fVar30 * 32767.0);
              }
              else {
                sVar12 = -0x8000;
              }
            }
            else {
              sVar12 = 0x7fff;
            }
            psVar25[-1] = sVar12;
            if (fVar32 <= 1.0) {
              if (-1.0 <= fVar32) {
                sVar12 = (short)(int)(fVar32 * 32767.0);
              }
              else {
                sVar12 = -0x8000;
              }
            }
            else {
              sVar12 = 0x7fff;
            }
            *psVar25 = sVar12;
            if (fVar33 <= 1.0) {
              if (-1.0 <= fVar33) {
                sVar12 = (short)(int)(fVar33 * 32767.0);
              }
              else {
                sVar12 = -0x8000;
              }
            }
            else {
              sVar12 = 0x7fff;
            }
            psVar25[1] = sVar12;
            if (fVar34 <= 1.0) {
              if (-1.0 <= fVar34) {
                sVar12 = (short)(int)(fVar34 * 32767.0);
              }
              else {
                sVar12 = -0x8000;
              }
            }
            else {
              sVar12 = 0x7fff;
            }
            psVar25[2] = sVar12;
            if (fVar35 <= 1.0) {
              if (-1.0 <= fVar35) {
                sVar12 = (short)(int)(fVar35 * 32767.0);
              }
              else {
                sVar12 = -0x8000;
              }
            }
            else {
              sVar12 = 0x7fff;
            }
            param_2 = param_2 + 6;
            psVar25[3] = sVar12;
            param_1 = param_1 + 6;
            psVar25 = psVar25 + 6;
            psVar14 = psVar14 + 6;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        for (param_4 = param_4 + uVar1; (int)param_4 < 0; param_4 = param_4 + param_8) {
        }
        for (; (int)param_8 <= (int)param_4; param_4 = param_4 - param_8) {
        }
        for (param_5 = param_5 + uVar1; (int)param_5 < 0; param_5 = param_5 + param_8) {
        }
        for (; (int)param_8 <= (int)param_5; param_5 = param_5 - param_8) {
        }
        param_12 = param_12 - uVar1;
      } while (param_12 != 0);
    }
  }
  else if (param_13 == 8) {
    if (param_12 != 0) {
      do {
        uVar13 = param_8;
        if (param_4 + param_12 < param_8) {
          uVar13 = param_4 + param_12;
        }
        uVar9 = param_8;
        if (param_5 + param_12 < param_8) {
          uVar9 = param_5 + param_12;
        }
        uVar1 = param_4 * 8;
        psVar14 = (short *)(param_3 + (ulonglong)uVar1 * 2);
        uVar18 = uVar9 - param_5;
        if ((int)(uVar13 - param_4) < (int)(uVar9 - param_5)) {
          uVar18 = uVar13 - param_4;
        }
        if (0 < (int)uVar18) {
          psVar25 = psVar14 + ((ulonglong)(param_5 * 8) - (ulonglong)uVar1) + 2;
          lVar23 = (ulonglong)uVar1 - (ulonglong)(param_5 * 8);
          uVar19 = (ulonglong)uVar18;
          do {
            sVar12 = *psVar14;
            fVar28 = *param_2;
            fVar30 = param_2[1];
            fVar32 = param_2[2];
            fVar33 = param_2[3];
            fVar34 = param_2[4];
            fVar35 = param_2[5];
            fVar29 = param_2[6];
            fVar31 = param_2[7];
            sVar2 = psVar25[lVar23 + -1];
            sVar3 = psVar25[lVar23];
            sVar4 = psVar25[lVar23 + 1];
            sVar5 = psVar25[lVar23 + 2];
            sVar6 = psVar25[lVar23 + 3];
            sVar7 = psVar25[lVar23 + 4];
            sVar8 = psVar25[lVar23 + 5];
            *param_1 = (float)(int)sVar12 * 3.051851e-05 * param_9 + fVar28 * param_10;
            param_1[1] = (float)(int)sVar2 * 3.051851e-05 * param_9 + fVar30 * param_10;
            param_1[2] = (float)(int)sVar3 * 3.051851e-05 * param_9 + fVar32 * param_10;
            param_1[3] = (float)(int)sVar4 * 3.051851e-05 * param_9 + fVar33 * param_10;
            param_1[4] = (float)(int)sVar5 * 3.051851e-05 * param_9 + fVar34 * param_10;
            param_1[5] = (float)(int)sVar6 * 3.051851e-05 * param_9 + fVar35 * param_10;
            param_1[6] = (float)(int)sVar7 * 3.051851e-05 * param_9 + fVar29 * param_10;
            fVar30 = (float)(int)sVar2 * 3.051851e-05 * param_11 + fVar30;
            fVar32 = (float)(int)sVar3 * 3.051851e-05 * param_11 + fVar32;
            param_1[7] = (float)(int)sVar8 * 3.051851e-05 * param_9 + fVar31 * param_10;
            fVar33 = (float)(int)sVar4 * 3.051851e-05 * param_11 + fVar33;
            fVar28 = (float)(int)sVar12 * 3.051851e-05 * param_11 + fVar28;
            fVar34 = (float)(int)sVar5 * 3.051851e-05 * param_11 + fVar34;
            fVar29 = (float)(int)sVar7 * 3.051851e-05 * param_11 + fVar29;
            fVar35 = (float)(int)sVar6 * 3.051851e-05 * param_11 + fVar35;
            fVar31 = (float)(int)sVar8 * 3.051851e-05 * param_11 + fVar31;
            if (fVar28 <= 1.0) {
              if (-1.0 <= fVar28) {
                sVar12 = (short)(int)(fVar28 * 32767.0);
              }
              else {
                sVar12 = -0x8000;
              }
            }
            else {
              sVar12 = 0x7fff;
            }
            psVar25[-2] = sVar12;
            if (fVar30 <= 1.0) {
              if (-1.0 <= fVar30) {
                sVar12 = (short)(int)(fVar30 * 32767.0);
              }
              else {
                sVar12 = -0x8000;
              }
            }
            else {
              sVar12 = 0x7fff;
            }
            psVar25[-1] = sVar12;
            if (fVar32 <= 1.0) {
              if (-1.0 <= fVar32) {
                sVar12 = (short)(int)(fVar32 * 32767.0);
              }
              else {
                sVar12 = -0x8000;
              }
            }
            else {
              sVar12 = 0x7fff;
            }
            *psVar25 = sVar12;
            if (fVar33 <= 1.0) {
              if (-1.0 <= fVar33) {
                sVar12 = (short)(int)(fVar33 * 32767.0);
              }
              else {
                sVar12 = -0x8000;
              }
            }
            else {
              sVar12 = 0x7fff;
            }
            psVar25[1] = sVar12;
            if (fVar34 <= 1.0) {
              if (-1.0 <= fVar34) {
                sVar12 = (short)(int)(fVar34 * 32767.0);
              }
              else {
                sVar12 = -0x8000;
              }
            }
            else {
              sVar12 = 0x7fff;
            }
            psVar25[2] = sVar12;
            if (fVar35 <= 1.0) {
              if (-1.0 <= fVar35) {
                sVar12 = (short)(int)(fVar35 * 32767.0);
              }
              else {
                sVar12 = -0x8000;
              }
            }
            else {
              sVar12 = 0x7fff;
            }
            psVar25[3] = sVar12;
            if (fVar29 <= 1.0) {
              if (-1.0 <= fVar29) {
                sVar12 = (short)(int)(fVar29 * 32767.0);
              }
              else {
                sVar12 = -0x8000;
              }
            }
            else {
              sVar12 = 0x7fff;
            }
            psVar25[4] = sVar12;
            if (fVar31 <= 1.0) {
              if (-1.0 <= fVar31) {
                sVar12 = (short)(int)(fVar31 * 32767.0);
              }
              else {
                sVar12 = -0x8000;
              }
            }
            else {
              sVar12 = 0x7fff;
            }
            param_2 = param_2 + 8;
            psVar25[5] = sVar12;
            param_1 = param_1 + 8;
            psVar25 = psVar25 + 8;
            psVar14 = psVar14 + 8;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        for (param_4 = param_4 + uVar18; (int)param_4 < 0; param_4 = param_4 + param_8) {
        }
        for (; (int)param_8 <= (int)param_4; param_4 = param_4 - param_8) {
        }
        for (param_5 = param_5 + uVar18; (int)param_5 < 0; param_5 = param_5 + param_8) {
        }
        for (; (int)param_8 <= (int)param_5; param_5 = param_5 - param_8) {
        }
        param_12 = param_12 - uVar18;
      } while (param_12 != 0);
    }
  }
  else {
    uVar22 = uVar19;
    if (param_12 != 0) {
      do {
        uVar13 = param_8;
        if (param_4 + param_12 < param_8) {
          uVar13 = param_4 + param_12;
        }
        uVar9 = param_8;
        if (param_5 + param_12 < param_8) {
          uVar9 = param_5 + param_12;
        }
        uVar1 = uVar9 - param_5;
        if ((int)(uVar13 - param_4) < (int)(uVar9 - param_5)) {
          uVar1 = uVar13 - param_4;
        }
        lVar23 = param_3 + (ulonglong)(param_5 * (int)uVar22) * 2;
        if (0 < (int)uVar1) {
          uVar16 = (ulonglong)uVar1;
          lVar24 = (param_3 + (ulonglong)(param_4 * (int)uVar22) * 2) - lVar23;
          do {
            lVar21 = 0;
            if (3 < (longlong)uVar19) {
              lVar20 = (longlong)param_2 - (longlong)param_1;
              lVar17 = (uVar19 - 4 >> 2) + 1;
              puVar15 = (undefined2 *)(lVar23 + 2);
              pfVar26 = param_1 + 1;
              lVar21 = lVar17 * 4;
              do {
                fVar28 = *(float *)((longlong)pfVar26 + lVar20 + -4);
                fVar30 = (float)(int)*(short *)((longlong)puVar15 + lVar24 + -2) * 3.051851e-05;
                fVar32 = fVar30 * param_11 + fVar28;
                pfVar26[-1] = fVar30 * param_9 + fVar28 * param_10;
                if (fVar32 <= 1.0) {
                  if (-1.0 <= fVar32) {
                    uVar11 = (undefined2)(int)(fVar32 * 32767.0);
                  }
                  else {
                    uVar11 = 0x8000;
                  }
                }
                else {
                  uVar11 = 0x7fff;
                }
                puVar15[-1] = uVar11;
                fVar28 = (float)(int)*(short *)((longlong)puVar15 + lVar24) * 3.051851e-05;
                fVar30 = fVar28 * param_11 + *(float *)(lVar20 + (longlong)pfVar26);
                *pfVar26 = fVar28 * param_9 + *(float *)(lVar20 + (longlong)pfVar26) * param_10;
                if (fVar30 <= 1.0) {
                  if (-1.0 <= fVar30) {
                    uVar11 = (undefined2)(int)(fVar30 * 32767.0);
                  }
                  else {
                    uVar11 = 0x8000;
                  }
                }
                else {
                  uVar11 = 0x7fff;
                }
                *puVar15 = uVar11;
                fVar28 = *(float *)(lVar20 + 4 + (longlong)pfVar26);
                fVar30 = (float)(int)*(short *)((longlong)puVar15 + lVar24 + 2) * 3.051851e-05;
                fVar32 = fVar30 * param_11 + fVar28;
                pfVar26[1] = fVar30 * param_9 + fVar28 * param_10;
                if (fVar32 <= 1.0) {
                  if (-1.0 <= fVar32) {
                    uVar11 = (undefined2)(int)(fVar32 * 32767.0);
                  }
                  else {
                    uVar11 = 0x8000;
                  }
                }
                else {
                  uVar11 = 0x7fff;
                }
                puVar15[1] = uVar11;
                fVar28 = *(float *)(lVar20 + 8 + (longlong)pfVar26);
                fVar30 = (float)(int)*(short *)((longlong)puVar15 + lVar24 + 4) * 3.051851e-05;
                fVar32 = fVar30 * param_11 + fVar28;
                pfVar26[2] = fVar30 * param_9 + fVar28 * param_10;
                if (fVar32 <= 1.0) {
                  if (-1.0 <= fVar32) {
                    uVar11 = (undefined2)(int)(fVar32 * 32767.0);
                  }
                  else {
                    uVar11 = 0x8000;
                  }
                }
                else {
                  uVar11 = 0x7fff;
                }
                puVar15[2] = uVar11;
                pfVar26 = pfVar26 + 4;
                puVar15 = puVar15 + 4;
                lVar17 = lVar17 + -1;
              } while (lVar17 != 0);
            }
            if (lVar21 < (longlong)uVar19) {
              puVar15 = (undefined2 *)(lVar23 + lVar21 * 2);
              pfVar26 = param_1 + lVar21;
              lVar21 = uVar19 - lVar21;
              do {
                fVar28 = *(float *)((longlong)pfVar26 + ((longlong)param_2 - (longlong)param_1));
                fVar30 = (float)(int)*(short *)(lVar24 + (longlong)puVar15) * 3.051851e-05;
                fVar32 = fVar30 * param_11 + fVar28;
                *pfVar26 = fVar30 * param_9 + fVar28 * param_10;
                if (fVar32 <= 1.0) {
                  if (-1.0 <= fVar32) {
                    uVar11 = (undefined2)(int)(fVar32 * 32767.0);
                  }
                  else {
                    uVar11 = 0x8000;
                  }
                }
                else {
                  uVar11 = 0x7fff;
                }
                *puVar15 = uVar11;
                pfVar26 = pfVar26 + 1;
                puVar15 = puVar15 + 1;
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
            }
            param_2 = param_2 + uVar19;
            lVar23 = lVar23 + uVar19 * 2;
            param_1 = param_1 + uVar19;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
          uVar22 = (ulonglong)param_13;
        }
        for (param_4 = param_4 + uVar1; (int)param_4 < 0; param_4 = param_4 + param_8) {
        }
        for (; (int)param_8 <= (int)param_4; param_4 = param_4 - param_8) {
        }
        for (param_5 = param_5 + uVar1; (int)param_5 < 0; param_5 = param_5 + param_8) {
        }
        for (; (int)param_8 <= (int)param_5; param_5 = param_5 - param_8) {
        }
        param_12 = param_12 - uVar1;
      } while (param_12 != 0);
    }
  }
  *param_6 = param_4;
  *param_7 = param_5;
  return;
}






