#include "TaleWorlds.Native.Split.h"

// 99_part_12_part044.c - 1 个函数

// 函数: void FUN_1807e7bf6(void)
void FUN_1807e7bf6(void)

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
  undefined2 uVar10;
  short sVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined2 *puVar14;
  ulonglong uVar15;
  float *unaff_RBX;
  int iVar16;
  longlong lVar17;
  short *psVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  ulonglong unaff_RSI;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  short *psVar25;
  float *pfVar26;
  int in_R9D;
  int in_R10D;
  float *in_R11;
  longlong unaff_R12;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  longlong in_stack_00000100;
  int *in_stack_00000118;
  int *in_stack_00000120;
  uint in_stack_00000128;
  float in_stack_00000130;
  float in_stack_00000138;
  float in_stack_00000140;
  int in_stack_00000148;
  uint in_stack_00000150;
  
  iVar20 = (int)unaff_RSI;
  if (iVar20 == 2) {
    if (in_stack_00000148 != 0) {
      do {
        uVar12 = in_stack_00000128;
        if ((uint)(in_R9D + in_stack_00000148) < in_stack_00000128) {
          uVar12 = in_R9D + in_stack_00000148;
        }
        uVar9 = in_stack_00000128;
        if ((uint)(in_R10D + in_stack_00000148) < in_stack_00000128) {
          uVar9 = in_R10D + in_stack_00000148;
        }
        psVar18 = (short *)(unaff_R12 + (ulonglong)(uint)(in_R9D * 2) * 2);
        puVar14 = (undefined2 *)(unaff_R12 + (ulonglong)(uint)(in_R10D * 2) * 2);
        iVar20 = uVar9 - in_R10D;
        if ((int)(uVar12 - in_R9D) < (int)(uVar9 - in_R10D)) {
          iVar20 = uVar12 - in_R9D;
        }
        iVar16 = 0;
        if (3 < iVar20) {
          uVar12 = (iVar20 - 4U >> 2) + 1;
          uVar13 = (ulonglong)uVar12;
          iVar16 = uVar12 * 4;
          do {
            fVar33 = unaff_RBX[1];
            sVar11 = psVar18[1];
            fVar30 = (float)(int)*psVar18 * 3.051851e-05 * in_stack_00000140 + *unaff_RBX;
            fVar28 = (float)(int)sVar11 * 3.051851e-05 * in_stack_00000140 + fVar33;
            *in_R11 = (float)(int)*psVar18 * 3.051851e-05 * in_stack_00000130 +
                      *unaff_RBX * in_stack_00000138;
            in_R11[1] = (float)(int)sVar11 * 3.051851e-05 * in_stack_00000130 +
                        fVar33 * in_stack_00000138;
            if (fVar30 <= 1.0) {
              if (-1.0 <= fVar30) {
                uVar10 = (undefined2)(int)(fVar30 * 32767.0);
              }
              else {
                uVar10 = 0x8000;
              }
            }
            else {
              uVar10 = 0x7fff;
            }
            *puVar14 = uVar10;
            if (fVar28 <= 1.0) {
              if (-1.0 <= fVar28) {
                uVar10 = (undefined2)(int)(fVar28 * 32767.0);
              }
              else {
                uVar10 = 0x8000;
              }
            }
            else {
              uVar10 = 0x7fff;
            }
            puVar14[1] = uVar10;
            fVar33 = unaff_RBX[3];
            sVar11 = psVar18[3];
            fVar30 = (float)(int)psVar18[2] * 3.051851e-05 * in_stack_00000140 + unaff_RBX[2];
            fVar28 = (float)(int)sVar11 * 3.051851e-05 * in_stack_00000140 + fVar33;
            in_R11[2] = (float)(int)psVar18[2] * 3.051851e-05 * in_stack_00000130 +
                        unaff_RBX[2] * in_stack_00000138;
            in_R11[3] = (float)(int)sVar11 * 3.051851e-05 * in_stack_00000130 +
                        fVar33 * in_stack_00000138;
            if (fVar30 <= 1.0) {
              if (-1.0 <= fVar30) {
                uVar10 = (undefined2)(int)(fVar30 * 32767.0);
              }
              else {
                uVar10 = 0x8000;
              }
            }
            else {
              uVar10 = 0x7fff;
            }
            puVar14[2] = uVar10;
            if (fVar28 <= 1.0) {
              if (-1.0 <= fVar28) {
                uVar10 = (undefined2)(int)(fVar28 * 32767.0);
              }
              else {
                uVar10 = 0x8000;
              }
            }
            else {
              uVar10 = 0x7fff;
            }
            puVar14[3] = uVar10;
            fVar33 = unaff_RBX[5];
            sVar11 = psVar18[5];
            fVar30 = (float)(int)psVar18[4] * 3.051851e-05 * in_stack_00000140 + unaff_RBX[4];
            fVar28 = (float)(int)sVar11 * 3.051851e-05 * in_stack_00000140 + fVar33;
            in_R11[4] = (float)(int)psVar18[4] * 3.051851e-05 * in_stack_00000130 +
                        unaff_RBX[4] * in_stack_00000138;
            in_R11[5] = (float)(int)sVar11 * 3.051851e-05 * in_stack_00000130 +
                        fVar33 * in_stack_00000138;
            if (fVar30 <= 1.0) {
              if (-1.0 <= fVar30) {
                uVar10 = (undefined2)(int)(fVar30 * 32767.0);
              }
              else {
                uVar10 = 0x8000;
              }
            }
            else {
              uVar10 = 0x7fff;
            }
            puVar14[4] = uVar10;
            if (fVar28 <= 1.0) {
              if (-1.0 <= fVar28) {
                uVar10 = (undefined2)(int)(fVar28 * 32767.0);
              }
              else {
                uVar10 = 0x8000;
              }
            }
            else {
              uVar10 = 0x7fff;
            }
            puVar14[5] = uVar10;
            fVar33 = unaff_RBX[7];
            sVar11 = psVar18[7];
            fVar30 = (float)(int)psVar18[6] * 3.051851e-05 * in_stack_00000140 + unaff_RBX[6];
            fVar28 = (float)(int)sVar11 * 3.051851e-05 * in_stack_00000140 + fVar33;
            in_R11[6] = (float)(int)psVar18[6] * 3.051851e-05 * in_stack_00000130 +
                        unaff_RBX[6] * in_stack_00000138;
            in_R11[7] = (float)(int)sVar11 * 3.051851e-05 * in_stack_00000130 +
                        fVar33 * in_stack_00000138;
            if (fVar30 <= 1.0) {
              if (-1.0 <= fVar30) {
                uVar10 = (undefined2)(int)(fVar30 * 32767.0);
              }
              else {
                uVar10 = 0x8000;
              }
            }
            else {
              uVar10 = 0x7fff;
            }
            puVar14[6] = uVar10;
            if (fVar28 <= 1.0) {
              if (-1.0 <= fVar28) {
                uVar10 = (undefined2)(int)(fVar28 * 32767.0);
              }
              else {
                uVar10 = 0x8000;
              }
            }
            else {
              uVar10 = 0x7fff;
            }
            puVar14[7] = uVar10;
            in_R11 = in_R11 + 8;
            puVar14 = puVar14 + 8;
            unaff_RBX = unaff_RBX + 8;
            psVar18 = psVar18 + 8;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        if (iVar16 < iVar20) {
          uVar13 = (ulonglong)(uint)(iVar20 - iVar16);
          do {
            fVar33 = unaff_RBX[1];
            sVar11 = psVar18[1];
            fVar30 = (float)(int)*psVar18 * 3.051851e-05 * in_stack_00000140 + *unaff_RBX;
            fVar28 = (float)(int)sVar11 * 3.051851e-05 * in_stack_00000140 + fVar33;
            *in_R11 = (float)(int)*psVar18 * 3.051851e-05 * in_stack_00000130 +
                      *unaff_RBX * in_stack_00000138;
            in_R11[1] = (float)(int)sVar11 * 3.051851e-05 * in_stack_00000130 +
                        fVar33 * in_stack_00000138;
            if (fVar30 <= 1.0) {
              if (-1.0 <= fVar30) {
                uVar10 = (undefined2)(int)(fVar30 * 32767.0);
              }
              else {
                uVar10 = 0x8000;
              }
            }
            else {
              uVar10 = 0x7fff;
            }
            *puVar14 = uVar10;
            if (fVar28 <= 1.0) {
              if (-1.0 <= fVar28) {
                uVar10 = (undefined2)(int)(fVar28 * 32767.0);
              }
              else {
                uVar10 = 0x8000;
              }
            }
            else {
              uVar10 = 0x7fff;
            }
            puVar14[1] = uVar10;
            in_R11 = in_R11 + 2;
            puVar14 = puVar14 + 2;
            unaff_RBX = unaff_RBX + 2;
            psVar18 = psVar18 + 2;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        for (in_R9D = in_R9D + iVar20; in_R9D < 0; in_R9D = in_R9D + in_stack_00000128) {
        }
        for (; (int)in_stack_00000128 <= in_R9D; in_R9D = in_R9D - in_stack_00000128) {
        }
        for (in_R10D = in_R10D + iVar20; in_R10D < 0; in_R10D = in_R10D + in_stack_00000128) {
        }
        for (; (int)in_stack_00000128 <= in_R10D; in_R10D = in_R10D - in_stack_00000128) {
        }
        in_stack_00000148 = in_stack_00000148 - iVar20;
      } while (in_stack_00000148 != 0);
    }
  }
  else if (iVar20 == 6) {
    if (in_stack_00000148 != 0) {
      do {
        uVar12 = in_stack_00000128;
        if ((uint)(in_R9D + in_stack_00000148) < in_stack_00000128) {
          uVar12 = in_R9D + in_stack_00000148;
        }
        uVar9 = in_stack_00000128;
        if ((uint)(in_R10D + in_stack_00000148) < in_stack_00000128) {
          uVar9 = in_R10D + in_stack_00000148;
        }
        uVar1 = uVar9 - in_R10D;
        if ((int)(uVar12 - in_R9D) < (int)(uVar9 - in_R10D)) {
          uVar1 = uVar12 - in_R9D;
        }
        uVar12 = in_R9D * 6;
        psVar18 = (short *)(unaff_R12 + (ulonglong)uVar12 * 2);
        if (0 < (int)uVar1) {
          lVar17 = (ulonglong)uVar12 - (ulonglong)(uint)(in_R10D * 6);
          uVar13 = (ulonglong)uVar1;
          psVar25 = psVar18 + ((ulonglong)(uint)(in_R10D * 6) - (ulonglong)uVar12) + 2;
          do {
            sVar11 = *psVar18;
            fVar33 = *unaff_RBX;
            fVar28 = unaff_RBX[1];
            fVar30 = unaff_RBX[2];
            fVar31 = unaff_RBX[3];
            fVar32 = unaff_RBX[4];
            fVar34 = unaff_RBX[5];
            sVar2 = psVar25[lVar17 + -1];
            sVar3 = psVar25[lVar17];
            sVar4 = psVar25[lVar17 + 1];
            sVar5 = psVar25[lVar17 + 2];
            sVar6 = psVar25[lVar17 + 3];
            *in_R11 = (float)(int)sVar11 * 3.051851e-05 * in_stack_00000130 +
                      fVar33 * in_stack_00000138;
            in_R11[1] = (float)(int)sVar2 * 3.051851e-05 * in_stack_00000130 +
                        fVar28 * in_stack_00000138;
            in_R11[2] = (float)(int)sVar3 * 3.051851e-05 * in_stack_00000130 +
                        fVar30 * in_stack_00000138;
            in_R11[3] = (float)(int)sVar4 * 3.051851e-05 * in_stack_00000130 +
                        fVar31 * in_stack_00000138;
            in_R11[4] = (float)(int)sVar5 * 3.051851e-05 * in_stack_00000130 +
                        fVar32 * in_stack_00000138;
            in_R11[5] = (float)(int)sVar6 * 3.051851e-05 * in_stack_00000130 +
                        fVar34 * in_stack_00000138;
            fVar33 = (float)(int)sVar11 * 3.051851e-05 * in_stack_00000140 + fVar33;
            fVar28 = (float)(int)sVar2 * 3.051851e-05 * in_stack_00000140 + fVar28;
            fVar30 = (float)(int)sVar3 * 3.051851e-05 * in_stack_00000140 + fVar30;
            fVar31 = (float)(int)sVar4 * 3.051851e-05 * in_stack_00000140 + fVar31;
            fVar32 = (float)(int)sVar5 * 3.051851e-05 * in_stack_00000140 + fVar32;
            fVar34 = (float)(int)sVar6 * 3.051851e-05 * in_stack_00000140 + fVar34;
            if (fVar33 <= 1.0) {
              if (-1.0 <= fVar33) {
                sVar11 = (short)(int)(fVar33 * 32767.0);
              }
              else {
                sVar11 = -0x8000;
              }
            }
            else {
              sVar11 = 0x7fff;
            }
            psVar25[-2] = sVar11;
            if (fVar28 <= 1.0) {
              if (-1.0 <= fVar28) {
                sVar11 = (short)(int)(fVar28 * 32767.0);
              }
              else {
                sVar11 = -0x8000;
              }
            }
            else {
              sVar11 = 0x7fff;
            }
            psVar25[-1] = sVar11;
            if (fVar30 <= 1.0) {
              if (-1.0 <= fVar30) {
                sVar11 = (short)(int)(fVar30 * 32767.0);
              }
              else {
                sVar11 = -0x8000;
              }
            }
            else {
              sVar11 = 0x7fff;
            }
            *psVar25 = sVar11;
            if (fVar31 <= 1.0) {
              if (-1.0 <= fVar31) {
                sVar11 = (short)(int)(fVar31 * 32767.0);
              }
              else {
                sVar11 = -0x8000;
              }
            }
            else {
              sVar11 = 0x7fff;
            }
            psVar25[1] = sVar11;
            if (fVar32 <= 1.0) {
              if (-1.0 <= fVar32) {
                sVar11 = (short)(int)(fVar32 * 32767.0);
              }
              else {
                sVar11 = -0x8000;
              }
            }
            else {
              sVar11 = 0x7fff;
            }
            psVar25[2] = sVar11;
            if (fVar34 <= 1.0) {
              if (-1.0 <= fVar34) {
                sVar11 = (short)(int)(fVar34 * 32767.0);
              }
              else {
                sVar11 = -0x8000;
              }
            }
            else {
              sVar11 = 0x7fff;
            }
            unaff_RBX = unaff_RBX + 6;
            psVar25[3] = sVar11;
            in_R11 = in_R11 + 6;
            psVar25 = psVar25 + 6;
            psVar18 = psVar18 + 6;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        for (in_R9D = in_R9D + uVar1; in_R9D < 0; in_R9D = in_R9D + in_stack_00000128) {
        }
        for (; (int)in_stack_00000128 <= in_R9D; in_R9D = in_R9D - in_stack_00000128) {
        }
        for (in_R10D = in_R10D + uVar1; in_R10D < 0; in_R10D = in_R10D + in_stack_00000128) {
        }
        for (; (int)in_stack_00000128 <= in_R10D; in_R10D = in_R10D - in_stack_00000128) {
        }
        in_stack_00000148 = in_stack_00000148 - uVar1;
      } while (in_stack_00000148 != 0);
    }
  }
  else if (iVar20 == 8) {
    if (in_stack_00000148 != 0) {
      do {
        uVar12 = in_stack_00000128;
        if ((uint)(in_R9D + in_stack_00000148) < in_stack_00000128) {
          uVar12 = in_R9D + in_stack_00000148;
        }
        uVar9 = in_stack_00000128;
        if ((uint)(in_R10D + in_stack_00000148) < in_stack_00000128) {
          uVar9 = in_R10D + in_stack_00000148;
        }
        uVar1 = in_R9D * 8;
        psVar18 = (short *)(unaff_R12 + (ulonglong)uVar1 * 2);
        uVar21 = uVar9 - in_R10D;
        if ((int)(uVar12 - in_R9D) < (int)(uVar9 - in_R10D)) {
          uVar21 = uVar12 - in_R9D;
        }
        if (0 < (int)uVar21) {
          psVar25 = psVar18 + ((ulonglong)(uint)(in_R10D * 8) - (ulonglong)uVar1) + 2;
          lVar17 = (ulonglong)uVar1 - (ulonglong)(uint)(in_R10D * 8);
          uVar13 = (ulonglong)uVar21;
          do {
            sVar11 = *psVar18;
            fVar33 = *unaff_RBX;
            fVar28 = unaff_RBX[1];
            fVar30 = unaff_RBX[2];
            fVar31 = unaff_RBX[3];
            fVar32 = unaff_RBX[4];
            fVar34 = unaff_RBX[5];
            fVar27 = unaff_RBX[6];
            fVar29 = unaff_RBX[7];
            sVar2 = psVar25[lVar17 + -1];
            sVar3 = psVar25[lVar17];
            sVar4 = psVar25[lVar17 + 1];
            sVar5 = psVar25[lVar17 + 2];
            sVar6 = psVar25[lVar17 + 3];
            sVar7 = psVar25[lVar17 + 4];
            sVar8 = psVar25[lVar17 + 5];
            *in_R11 = (float)(int)sVar11 * 3.051851e-05 * in_stack_00000130 +
                      fVar33 * in_stack_00000138;
            in_R11[1] = (float)(int)sVar2 * 3.051851e-05 * in_stack_00000130 +
                        fVar28 * in_stack_00000138;
            in_R11[2] = (float)(int)sVar3 * 3.051851e-05 * in_stack_00000130 +
                        fVar30 * in_stack_00000138;
            in_R11[3] = (float)(int)sVar4 * 3.051851e-05 * in_stack_00000130 +
                        fVar31 * in_stack_00000138;
            in_R11[4] = (float)(int)sVar5 * 3.051851e-05 * in_stack_00000130 +
                        fVar32 * in_stack_00000138;
            in_R11[5] = (float)(int)sVar6 * 3.051851e-05 * in_stack_00000130 +
                        fVar34 * in_stack_00000138;
            in_R11[6] = (float)(int)sVar7 * 3.051851e-05 * in_stack_00000130 +
                        fVar27 * in_stack_00000138;
            fVar28 = (float)(int)sVar2 * 3.051851e-05 * in_stack_00000140 + fVar28;
            fVar30 = (float)(int)sVar3 * 3.051851e-05 * in_stack_00000140 + fVar30;
            in_R11[7] = (float)(int)sVar8 * 3.051851e-05 * in_stack_00000130 +
                        fVar29 * in_stack_00000138;
            fVar31 = (float)(int)sVar4 * 3.051851e-05 * in_stack_00000140 + fVar31;
            fVar33 = (float)(int)sVar11 * 3.051851e-05 * in_stack_00000140 + fVar33;
            fVar32 = (float)(int)sVar5 * 3.051851e-05 * in_stack_00000140 + fVar32;
            fVar27 = (float)(int)sVar7 * 3.051851e-05 * in_stack_00000140 + fVar27;
            fVar34 = (float)(int)sVar6 * 3.051851e-05 * in_stack_00000140 + fVar34;
            fVar29 = (float)(int)sVar8 * 3.051851e-05 * in_stack_00000140 + fVar29;
            if (fVar33 <= 1.0) {
              if (-1.0 <= fVar33) {
                sVar11 = (short)(int)(fVar33 * 32767.0);
              }
              else {
                sVar11 = -0x8000;
              }
            }
            else {
              sVar11 = 0x7fff;
            }
            psVar25[-2] = sVar11;
            if (fVar28 <= 1.0) {
              if (-1.0 <= fVar28) {
                sVar11 = (short)(int)(fVar28 * 32767.0);
              }
              else {
                sVar11 = -0x8000;
              }
            }
            else {
              sVar11 = 0x7fff;
            }
            psVar25[-1] = sVar11;
            if (fVar30 <= 1.0) {
              if (-1.0 <= fVar30) {
                sVar11 = (short)(int)(fVar30 * 32767.0);
              }
              else {
                sVar11 = -0x8000;
              }
            }
            else {
              sVar11 = 0x7fff;
            }
            *psVar25 = sVar11;
            if (fVar31 <= 1.0) {
              if (-1.0 <= fVar31) {
                sVar11 = (short)(int)(fVar31 * 32767.0);
              }
              else {
                sVar11 = -0x8000;
              }
            }
            else {
              sVar11 = 0x7fff;
            }
            psVar25[1] = sVar11;
            if (fVar32 <= 1.0) {
              if (-1.0 <= fVar32) {
                sVar11 = (short)(int)(fVar32 * 32767.0);
              }
              else {
                sVar11 = -0x8000;
              }
            }
            else {
              sVar11 = 0x7fff;
            }
            psVar25[2] = sVar11;
            if (fVar34 <= 1.0) {
              if (-1.0 <= fVar34) {
                sVar11 = (short)(int)(fVar34 * 32767.0);
              }
              else {
                sVar11 = -0x8000;
              }
            }
            else {
              sVar11 = 0x7fff;
            }
            psVar25[3] = sVar11;
            if (fVar27 <= 1.0) {
              if (-1.0 <= fVar27) {
                sVar11 = (short)(int)(fVar27 * 32767.0);
              }
              else {
                sVar11 = -0x8000;
              }
            }
            else {
              sVar11 = 0x7fff;
            }
            psVar25[4] = sVar11;
            if (fVar29 <= 1.0) {
              if (-1.0 <= fVar29) {
                sVar11 = (short)(int)(fVar29 * 32767.0);
              }
              else {
                sVar11 = -0x8000;
              }
            }
            else {
              sVar11 = 0x7fff;
            }
            unaff_RBX = unaff_RBX + 8;
            psVar25[5] = sVar11;
            in_R11 = in_R11 + 8;
            psVar25 = psVar25 + 8;
            psVar18 = psVar18 + 8;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        for (in_R9D = in_R9D + uVar21; in_R9D < 0; in_R9D = in_R9D + in_stack_00000128) {
        }
        for (; (int)in_stack_00000128 <= in_R9D; in_R9D = in_R9D - in_stack_00000128) {
        }
        for (in_R10D = in_R10D + uVar21; in_R10D < 0; in_R10D = in_R10D + in_stack_00000128) {
        }
        for (; (int)in_stack_00000128 <= in_R10D; in_R10D = in_R10D - in_stack_00000128) {
        }
        in_stack_00000148 = in_stack_00000148 - uVar21;
      } while (in_stack_00000148 != 0);
    }
  }
  else {
    uVar13 = unaff_RSI;
    if (in_stack_00000148 != 0) {
      do {
        uVar12 = in_stack_00000128;
        if ((uint)(in_R9D + in_stack_00000148) < in_stack_00000128) {
          uVar12 = in_R9D + in_stack_00000148;
        }
        uVar9 = in_stack_00000128;
        if ((uint)(in_R10D + in_stack_00000148) < in_stack_00000128) {
          uVar9 = in_R10D + in_stack_00000148;
        }
        uVar1 = uVar9 - in_R10D;
        if ((int)(uVar12 - in_R9D) < (int)(uVar9 - in_R10D)) {
          uVar1 = uVar12 - in_R9D;
        }
        lVar17 = unaff_R12 + (ulonglong)(uint)(in_R10D * (int)uVar13) * 2;
        if (0 < (int)uVar1) {
          uVar15 = (ulonglong)uVar1;
          lVar24 = (unaff_R12 + (ulonglong)(uint)(in_R9D * (int)uVar13) * 2) - lVar17;
          do {
            lVar23 = 0;
            if (3 < (longlong)unaff_RSI) {
              lVar22 = (longlong)unaff_RBX - (longlong)in_R11;
              lVar19 = (unaff_RSI - 4 >> 2) + 1;
              puVar14 = (undefined2 *)(lVar17 + 2);
              pfVar26 = in_R11 + 1;
              lVar23 = lVar19 * 4;
              do {
                fVar33 = *(float *)((longlong)pfVar26 + lVar22 + -4);
                fVar28 = (float)(int)*(short *)((longlong)puVar14 + lVar24 + -2) * 3.051851e-05;
                fVar30 = fVar28 * in_stack_00000140 + fVar33;
                pfVar26[-1] = fVar28 * in_stack_00000130 + fVar33 * in_stack_00000138;
                if (fVar30 <= 1.0) {
                  if (-1.0 <= fVar30) {
                    uVar10 = (undefined2)(int)(fVar30 * 32767.0);
                  }
                  else {
                    uVar10 = 0x8000;
                  }
                }
                else {
                  uVar10 = 0x7fff;
                }
                puVar14[-1] = uVar10;
                fVar33 = (float)(int)*(short *)((longlong)puVar14 + lVar24) * 3.051851e-05;
                fVar28 = fVar33 * in_stack_00000140 + *(float *)(lVar22 + (longlong)pfVar26);
                *pfVar26 = fVar33 * in_stack_00000130 +
                           *(float *)(lVar22 + (longlong)pfVar26) * in_stack_00000138;
                if (fVar28 <= 1.0) {
                  if (-1.0 <= fVar28) {
                    uVar10 = (undefined2)(int)(fVar28 * 32767.0);
                  }
                  else {
                    uVar10 = 0x8000;
                  }
                }
                else {
                  uVar10 = 0x7fff;
                }
                *puVar14 = uVar10;
                fVar33 = *(float *)(lVar22 + 4 + (longlong)pfVar26);
                fVar28 = (float)(int)*(short *)((longlong)puVar14 + lVar24 + 2) * 3.051851e-05;
                fVar30 = fVar28 * in_stack_00000140 + fVar33;
                pfVar26[1] = fVar28 * in_stack_00000130 + fVar33 * in_stack_00000138;
                if (fVar30 <= 1.0) {
                  if (-1.0 <= fVar30) {
                    uVar10 = (undefined2)(int)(fVar30 * 32767.0);
                  }
                  else {
                    uVar10 = 0x8000;
                  }
                }
                else {
                  uVar10 = 0x7fff;
                }
                puVar14[1] = uVar10;
                fVar33 = *(float *)(lVar22 + 8 + (longlong)pfVar26);
                fVar28 = (float)(int)*(short *)((longlong)puVar14 + lVar24 + 4) * 3.051851e-05;
                fVar30 = fVar28 * in_stack_00000140 + fVar33;
                pfVar26[2] = fVar28 * in_stack_00000130 + fVar33 * in_stack_00000138;
                if (fVar30 <= 1.0) {
                  if (-1.0 <= fVar30) {
                    uVar10 = (undefined2)(int)(fVar30 * 32767.0);
                  }
                  else {
                    uVar10 = 0x8000;
                  }
                }
                else {
                  uVar10 = 0x7fff;
                }
                puVar14[2] = uVar10;
                pfVar26 = pfVar26 + 4;
                puVar14 = puVar14 + 4;
                lVar19 = lVar19 + -1;
              } while (lVar19 != 0);
            }
            if (lVar23 < (longlong)unaff_RSI) {
              puVar14 = (undefined2 *)(lVar17 + lVar23 * 2);
              pfVar26 = in_R11 + lVar23;
              lVar23 = unaff_RSI - lVar23;
              do {
                fVar33 = *(float *)((longlong)pfVar26 + ((longlong)unaff_RBX - (longlong)in_R11));
                fVar28 = (float)(int)*(short *)(lVar24 + (longlong)puVar14) * 3.051851e-05;
                fVar30 = fVar28 * in_stack_00000140 + fVar33;
                *pfVar26 = fVar28 * in_stack_00000130 + fVar33 * in_stack_00000138;
                if (fVar30 <= 1.0) {
                  if (-1.0 <= fVar30) {
                    uVar10 = (undefined2)(int)(fVar30 * 32767.0);
                  }
                  else {
                    uVar10 = 0x8000;
                  }
                }
                else {
                  uVar10 = 0x7fff;
                }
                *puVar14 = uVar10;
                pfVar26 = pfVar26 + 1;
                puVar14 = puVar14 + 1;
                lVar23 = lVar23 + -1;
              } while (lVar23 != 0);
            }
            unaff_RBX = unaff_RBX + unaff_RSI;
            lVar17 = lVar17 + unaff_RSI * 2;
            in_R11 = in_R11 + unaff_RSI;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
          uVar13 = (ulonglong)in_stack_00000150;
        }
        for (in_R9D = in_R9D + uVar1; in_R9D < 0; in_R9D = in_R9D + in_stack_00000128) {
        }
        for (; (int)in_stack_00000128 <= in_R9D; in_R9D = in_R9D - in_stack_00000128) {
        }
        for (in_R10D = in_R10D + uVar1; in_R10D < 0; in_R10D = in_R10D + in_stack_00000128) {
        }
        for (; (int)in_stack_00000128 <= in_R10D; in_R10D = in_R10D - in_stack_00000128) {
        }
        in_stack_00000148 = in_stack_00000148 - uVar1;
        unaff_R12 = in_stack_00000100;
      } while (in_stack_00000148 != 0);
    }
  }
  *in_stack_00000118 = in_R9D;
  *in_stack_00000120 = in_R10D;
  return;
}






