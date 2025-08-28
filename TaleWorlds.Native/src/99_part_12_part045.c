#include "TaleWorlds.Native.Split.h"

// 99_part_12_part045.c - 5 个函数

// 函数: void FUN_1807e80e6(void)
void FUN_1807e80e6(void)

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
  uint uVar10;
  short sVar11;
  undefined2 uVar12;
  ulonglong uVar13;
  undefined2 *puVar14;
  ulonglong uVar15;
  float *unaff_RBX;
  longlong lVar16;
  short *psVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong unaff_RSI;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  short *psVar23;
  float *pfVar24;
  int in_R9D;
  int in_R10D;
  float *in_R11;
  longlong unaff_R12;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  longlong in_stack_00000100;
  int *in_stack_00000118;
  int *in_stack_00000120;
  uint in_stack_00000128;
  float in_stack_00000130;
  float in_stack_00000138;
  float in_stack_00000140;
  int in_stack_00000148;
  uint in_stack_00000150;
  
  if ((int)unaff_RSI == 6) {
    if (in_stack_00000148 != 0) {
      do {
        uVar9 = in_stack_00000128;
        if ((uint)(in_R9D + in_stack_00000148) < in_stack_00000128) {
          uVar9 = in_R9D + in_stack_00000148;
        }
        uVar10 = in_stack_00000128;
        if ((uint)(in_R10D + in_stack_00000148) < in_stack_00000128) {
          uVar10 = in_R10D + in_stack_00000148;
        }
        uVar1 = uVar10 - in_R10D;
        if ((int)(uVar9 - in_R9D) < (int)(uVar10 - in_R10D)) {
          uVar1 = uVar9 - in_R9D;
        }
        uVar9 = in_R9D * 6;
        psVar17 = (short *)(unaff_R12 + (ulonglong)uVar9 * 2);
        if (0 < (int)uVar1) {
          lVar16 = (ulonglong)uVar9 - (ulonglong)(uint)(in_R10D * 6);
          uVar13 = (ulonglong)uVar1;
          psVar23 = psVar17 + ((ulonglong)(uint)(in_R10D * 6) - (ulonglong)uVar9) + 2;
          do {
            sVar11 = *psVar17;
            fVar31 = *unaff_RBX;
            fVar27 = unaff_RBX[1];
            fVar28 = unaff_RBX[2];
            fVar29 = unaff_RBX[3];
            fVar30 = unaff_RBX[4];
            fVar32 = unaff_RBX[5];
            sVar2 = psVar23[lVar16 + -1];
            sVar3 = psVar23[lVar16];
            sVar4 = psVar23[lVar16 + 1];
            sVar5 = psVar23[lVar16 + 2];
            sVar6 = psVar23[lVar16 + 3];
            *in_R11 = (float)(int)sVar11 * 3.051851e-05 * in_stack_00000130 +
                      fVar31 * in_stack_00000138;
            in_R11[1] = (float)(int)sVar2 * 3.051851e-05 * in_stack_00000130 +
                        fVar27 * in_stack_00000138;
            in_R11[2] = (float)(int)sVar3 * 3.051851e-05 * in_stack_00000130 +
                        fVar28 * in_stack_00000138;
            in_R11[3] = (float)(int)sVar4 * 3.051851e-05 * in_stack_00000130 +
                        fVar29 * in_stack_00000138;
            in_R11[4] = (float)(int)sVar5 * 3.051851e-05 * in_stack_00000130 +
                        fVar30 * in_stack_00000138;
            in_R11[5] = (float)(int)sVar6 * 3.051851e-05 * in_stack_00000130 +
                        fVar32 * in_stack_00000138;
            fVar31 = (float)(int)sVar11 * 3.051851e-05 * in_stack_00000140 + fVar31;
            fVar27 = (float)(int)sVar2 * 3.051851e-05 * in_stack_00000140 + fVar27;
            fVar28 = (float)(int)sVar3 * 3.051851e-05 * in_stack_00000140 + fVar28;
            fVar29 = (float)(int)sVar4 * 3.051851e-05 * in_stack_00000140 + fVar29;
            fVar30 = (float)(int)sVar5 * 3.051851e-05 * in_stack_00000140 + fVar30;
            fVar32 = (float)(int)sVar6 * 3.051851e-05 * in_stack_00000140 + fVar32;
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
            psVar23[-2] = sVar11;
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
            psVar23[-1] = sVar11;
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
            *psVar23 = sVar11;
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
            psVar23[1] = sVar11;
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
            psVar23[2] = sVar11;
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
            unaff_RBX = unaff_RBX + 6;
            psVar23[3] = sVar11;
            in_R11 = in_R11 + 6;
            psVar23 = psVar23 + 6;
            psVar17 = psVar17 + 6;
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
  else if ((int)unaff_RSI == 8) {
    if (in_stack_00000148 != 0) {
      do {
        uVar9 = in_stack_00000128;
        if ((uint)(in_R9D + in_stack_00000148) < in_stack_00000128) {
          uVar9 = in_R9D + in_stack_00000148;
        }
        uVar10 = in_stack_00000128;
        if ((uint)(in_R10D + in_stack_00000148) < in_stack_00000128) {
          uVar10 = in_R10D + in_stack_00000148;
        }
        uVar1 = in_R9D * 8;
        psVar17 = (short *)(unaff_R12 + (ulonglong)uVar1 * 2);
        uVar19 = uVar10 - in_R10D;
        if ((int)(uVar9 - in_R9D) < (int)(uVar10 - in_R10D)) {
          uVar19 = uVar9 - in_R9D;
        }
        if (0 < (int)uVar19) {
          psVar23 = psVar17 + ((ulonglong)(uint)(in_R10D * 8) - (ulonglong)uVar1) + 2;
          lVar16 = (ulonglong)uVar1 - (ulonglong)(uint)(in_R10D * 8);
          uVar13 = (ulonglong)uVar19;
          do {
            sVar11 = *psVar17;
            fVar31 = *unaff_RBX;
            fVar27 = unaff_RBX[1];
            fVar28 = unaff_RBX[2];
            fVar29 = unaff_RBX[3];
            fVar30 = unaff_RBX[4];
            fVar32 = unaff_RBX[5];
            fVar25 = unaff_RBX[6];
            fVar26 = unaff_RBX[7];
            sVar2 = psVar23[lVar16 + -1];
            sVar3 = psVar23[lVar16];
            sVar4 = psVar23[lVar16 + 1];
            sVar5 = psVar23[lVar16 + 2];
            sVar6 = psVar23[lVar16 + 3];
            sVar7 = psVar23[lVar16 + 4];
            sVar8 = psVar23[lVar16 + 5];
            *in_R11 = (float)(int)sVar11 * 3.051851e-05 * in_stack_00000130 +
                      fVar31 * in_stack_00000138;
            in_R11[1] = (float)(int)sVar2 * 3.051851e-05 * in_stack_00000130 +
                        fVar27 * in_stack_00000138;
            in_R11[2] = (float)(int)sVar3 * 3.051851e-05 * in_stack_00000130 +
                        fVar28 * in_stack_00000138;
            in_R11[3] = (float)(int)sVar4 * 3.051851e-05 * in_stack_00000130 +
                        fVar29 * in_stack_00000138;
            in_R11[4] = (float)(int)sVar5 * 3.051851e-05 * in_stack_00000130 +
                        fVar30 * in_stack_00000138;
            in_R11[5] = (float)(int)sVar6 * 3.051851e-05 * in_stack_00000130 +
                        fVar32 * in_stack_00000138;
            in_R11[6] = (float)(int)sVar7 * 3.051851e-05 * in_stack_00000130 +
                        fVar25 * in_stack_00000138;
            fVar27 = (float)(int)sVar2 * 3.051851e-05 * in_stack_00000140 + fVar27;
            fVar28 = (float)(int)sVar3 * 3.051851e-05 * in_stack_00000140 + fVar28;
            in_R11[7] = (float)(int)sVar8 * 3.051851e-05 * in_stack_00000130 +
                        fVar26 * in_stack_00000138;
            fVar29 = (float)(int)sVar4 * 3.051851e-05 * in_stack_00000140 + fVar29;
            fVar31 = (float)(int)sVar11 * 3.051851e-05 * in_stack_00000140 + fVar31;
            fVar30 = (float)(int)sVar5 * 3.051851e-05 * in_stack_00000140 + fVar30;
            fVar25 = (float)(int)sVar7 * 3.051851e-05 * in_stack_00000140 + fVar25;
            fVar32 = (float)(int)sVar6 * 3.051851e-05 * in_stack_00000140 + fVar32;
            fVar26 = (float)(int)sVar8 * 3.051851e-05 * in_stack_00000140 + fVar26;
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
            psVar23[-2] = sVar11;
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
            psVar23[-1] = sVar11;
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
            *psVar23 = sVar11;
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
            psVar23[1] = sVar11;
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
            psVar23[2] = sVar11;
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
            psVar23[3] = sVar11;
            if (fVar25 <= 1.0) {
              if (-1.0 <= fVar25) {
                sVar11 = (short)(int)(fVar25 * 32767.0);
              }
              else {
                sVar11 = -0x8000;
              }
            }
            else {
              sVar11 = 0x7fff;
            }
            psVar23[4] = sVar11;
            if (fVar26 <= 1.0) {
              if (-1.0 <= fVar26) {
                sVar11 = (short)(int)(fVar26 * 32767.0);
              }
              else {
                sVar11 = -0x8000;
              }
            }
            else {
              sVar11 = 0x7fff;
            }
            unaff_RBX = unaff_RBX + 8;
            psVar23[5] = sVar11;
            in_R11 = in_R11 + 8;
            psVar23 = psVar23 + 8;
            psVar17 = psVar17 + 8;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        for (in_R9D = in_R9D + uVar19; in_R9D < 0; in_R9D = in_R9D + in_stack_00000128) {
        }
        for (; (int)in_stack_00000128 <= in_R9D; in_R9D = in_R9D - in_stack_00000128) {
        }
        for (in_R10D = in_R10D + uVar19; in_R10D < 0; in_R10D = in_R10D + in_stack_00000128) {
        }
        for (; (int)in_stack_00000128 <= in_R10D; in_R10D = in_R10D - in_stack_00000128) {
        }
        in_stack_00000148 = in_stack_00000148 - uVar19;
      } while (in_stack_00000148 != 0);
    }
  }
  else {
    uVar13 = unaff_RSI;
    if (in_stack_00000148 != 0) {
      do {
        uVar9 = in_stack_00000128;
        if ((uint)(in_R9D + in_stack_00000148) < in_stack_00000128) {
          uVar9 = in_R9D + in_stack_00000148;
        }
        uVar10 = in_stack_00000128;
        if ((uint)(in_R10D + in_stack_00000148) < in_stack_00000128) {
          uVar10 = in_R10D + in_stack_00000148;
        }
        uVar1 = uVar10 - in_R10D;
        if ((int)(uVar9 - in_R9D) < (int)(uVar10 - in_R10D)) {
          uVar1 = uVar9 - in_R9D;
        }
        lVar16 = unaff_R12 + (ulonglong)(uint)(in_R10D * (int)uVar13) * 2;
        if (0 < (int)uVar1) {
          uVar15 = (ulonglong)uVar1;
          lVar22 = (unaff_R12 + (ulonglong)(uint)(in_R9D * (int)uVar13) * 2) - lVar16;
          do {
            lVar21 = 0;
            if (3 < (longlong)unaff_RSI) {
              lVar20 = (longlong)unaff_RBX - (longlong)in_R11;
              lVar18 = (unaff_RSI - 4 >> 2) + 1;
              puVar14 = (undefined2 *)(lVar16 + 2);
              pfVar24 = in_R11 + 1;
              lVar21 = lVar18 * 4;
              do {
                fVar31 = *(float *)((longlong)pfVar24 + lVar20 + -4);
                fVar27 = (float)(int)*(short *)((longlong)puVar14 + lVar22 + -2) * 3.051851e-05;
                fVar28 = fVar27 * in_stack_00000140 + fVar31;
                pfVar24[-1] = fVar27 * in_stack_00000130 + fVar31 * in_stack_00000138;
                if (fVar28 <= 1.0) {
                  if (-1.0 <= fVar28) {
                    uVar12 = (undefined2)(int)(fVar28 * 32767.0);
                  }
                  else {
                    uVar12 = 0x8000;
                  }
                }
                else {
                  uVar12 = 0x7fff;
                }
                puVar14[-1] = uVar12;
                fVar31 = (float)(int)*(short *)((longlong)puVar14 + lVar22) * 3.051851e-05;
                fVar27 = fVar31 * in_stack_00000140 + *(float *)(lVar20 + (longlong)pfVar24);
                *pfVar24 = fVar31 * in_stack_00000130 +
                           *(float *)(lVar20 + (longlong)pfVar24) * in_stack_00000138;
                if (fVar27 <= 1.0) {
                  if (-1.0 <= fVar27) {
                    uVar12 = (undefined2)(int)(fVar27 * 32767.0);
                  }
                  else {
                    uVar12 = 0x8000;
                  }
                }
                else {
                  uVar12 = 0x7fff;
                }
                *puVar14 = uVar12;
                fVar31 = *(float *)(lVar20 + 4 + (longlong)pfVar24);
                fVar27 = (float)(int)*(short *)((longlong)puVar14 + lVar22 + 2) * 3.051851e-05;
                fVar28 = fVar27 * in_stack_00000140 + fVar31;
                pfVar24[1] = fVar27 * in_stack_00000130 + fVar31 * in_stack_00000138;
                if (fVar28 <= 1.0) {
                  if (-1.0 <= fVar28) {
                    uVar12 = (undefined2)(int)(fVar28 * 32767.0);
                  }
                  else {
                    uVar12 = 0x8000;
                  }
                }
                else {
                  uVar12 = 0x7fff;
                }
                puVar14[1] = uVar12;
                fVar31 = *(float *)(lVar20 + 8 + (longlong)pfVar24);
                fVar27 = (float)(int)*(short *)((longlong)puVar14 + lVar22 + 4) * 3.051851e-05;
                fVar28 = fVar27 * in_stack_00000140 + fVar31;
                pfVar24[2] = fVar27 * in_stack_00000130 + fVar31 * in_stack_00000138;
                if (fVar28 <= 1.0) {
                  if (-1.0 <= fVar28) {
                    uVar12 = (undefined2)(int)(fVar28 * 32767.0);
                  }
                  else {
                    uVar12 = 0x8000;
                  }
                }
                else {
                  uVar12 = 0x7fff;
                }
                puVar14[2] = uVar12;
                pfVar24 = pfVar24 + 4;
                puVar14 = puVar14 + 4;
                lVar18 = lVar18 + -1;
              } while (lVar18 != 0);
            }
            if (lVar21 < (longlong)unaff_RSI) {
              puVar14 = (undefined2 *)(lVar16 + lVar21 * 2);
              pfVar24 = in_R11 + lVar21;
              lVar21 = unaff_RSI - lVar21;
              do {
                fVar31 = *(float *)((longlong)pfVar24 + ((longlong)unaff_RBX - (longlong)in_R11));
                fVar27 = (float)(int)*(short *)(lVar22 + (longlong)puVar14) * 3.051851e-05;
                fVar28 = fVar27 * in_stack_00000140 + fVar31;
                *pfVar24 = fVar27 * in_stack_00000130 + fVar31 * in_stack_00000138;
                if (fVar28 <= 1.0) {
                  if (-1.0 <= fVar28) {
                    uVar12 = (undefined2)(int)(fVar28 * 32767.0);
                  }
                  else {
                    uVar12 = 0x8000;
                  }
                }
                else {
                  uVar12 = 0x7fff;
                }
                *puVar14 = uVar12;
                pfVar24 = pfVar24 + 1;
                puVar14 = puVar14 + 1;
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
            }
            unaff_RBX = unaff_RBX + unaff_RSI;
            lVar16 = lVar16 + unaff_RSI * 2;
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






// 函数: void FUN_1807e89a5(void)
void FUN_1807e89a5(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  longlong unaff_RBX;
  int unaff_EBP;
  longlong lVar7;
  ulonglong unaff_RSI;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  float *pfVar12;
  int in_R9D;
  int in_R10D;
  longlong in_R11;
  longlong unaff_R12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  longlong in_stack_00000100;
  int *in_stack_00000118;
  int *in_stack_00000120;
  uint in_stack_00000128;
  float in_stack_00000130;
  float in_stack_00000138;
  float in_stack_00000140;
  int in_stack_00000148;
  uint in_stack_00000150;
  
  uVar10 = unaff_RSI;
  if (unaff_EBP != 0) {
    do {
      uVar1 = in_stack_00000128;
      if ((uint)(in_R9D + unaff_EBP) < in_stack_00000128) {
        uVar1 = in_R9D + unaff_EBP;
      }
      uVar2 = in_stack_00000128;
      if ((uint)(in_R10D + unaff_EBP) < in_stack_00000128) {
        uVar2 = in_R10D + unaff_EBP;
      }
      uVar3 = uVar2 - in_R10D;
      if ((int)(uVar1 - in_R9D) < (int)(uVar2 - in_R10D)) {
        uVar3 = uVar1 - in_R9D;
      }
      lVar13 = unaff_R12 + (ulonglong)(uint)(in_R10D * (int)uVar10) * 2;
      if (0 < (int)uVar3) {
        uVar6 = (ulonglong)uVar3;
        lVar11 = (unaff_R12 + (ulonglong)(uint)(in_R9D * (int)uVar10) * 2) - lVar13;
        do {
          lVar9 = 0;
          if (3 < (longlong)unaff_RSI) {
            lVar8 = unaff_RBX - in_R11;
            lVar7 = (unaff_RSI - 4 >> 2) + 1;
            puVar5 = (undefined2 *)(lVar13 + 2);
            pfVar12 = (float *)(in_R11 + 4);
            lVar9 = lVar7 * 4;
            do {
              fVar16 = *(float *)((longlong)pfVar12 + lVar8 + -4);
              fVar14 = (float)(int)*(short *)((longlong)puVar5 + lVar11 + -2) * 3.051851e-05;
              fVar15 = fVar14 * in_stack_00000140 + fVar16;
              pfVar12[-1] = fVar14 * in_stack_00000130 + fVar16 * in_stack_00000138;
              if (fVar15 <= 1.0) {
                if (-1.0 <= fVar15) {
                  uVar4 = (undefined2)(int)(fVar15 * 32767.0);
                }
                else {
                  uVar4 = 0x8000;
                }
              }
              else {
                uVar4 = 0x7fff;
              }
              puVar5[-1] = uVar4;
              fVar16 = (float)(int)*(short *)((longlong)puVar5 + lVar11) * 3.051851e-05;
              fVar14 = fVar16 * in_stack_00000140 + *(float *)(lVar8 + (longlong)pfVar12);
              *pfVar12 = fVar16 * in_stack_00000130 +
                         *(float *)(lVar8 + (longlong)pfVar12) * in_stack_00000138;
              if (fVar14 <= 1.0) {
                if (-1.0 <= fVar14) {
                  uVar4 = (undefined2)(int)(fVar14 * 32767.0);
                }
                else {
                  uVar4 = 0x8000;
                }
              }
              else {
                uVar4 = 0x7fff;
              }
              *puVar5 = uVar4;
              fVar16 = *(float *)(lVar8 + 4 + (longlong)pfVar12);
              fVar14 = (float)(int)*(short *)((longlong)puVar5 + lVar11 + 2) * 3.051851e-05;
              fVar15 = fVar14 * in_stack_00000140 + fVar16;
              pfVar12[1] = fVar14 * in_stack_00000130 + fVar16 * in_stack_00000138;
              if (fVar15 <= 1.0) {
                if (-1.0 <= fVar15) {
                  uVar4 = (undefined2)(int)(fVar15 * 32767.0);
                }
                else {
                  uVar4 = 0x8000;
                }
              }
              else {
                uVar4 = 0x7fff;
              }
              puVar5[1] = uVar4;
              fVar16 = *(float *)(lVar8 + 8 + (longlong)pfVar12);
              fVar14 = (float)(int)*(short *)((longlong)puVar5 + lVar11 + 4) * 3.051851e-05;
              fVar15 = fVar14 * in_stack_00000140 + fVar16;
              pfVar12[2] = fVar14 * in_stack_00000130 + fVar16 * in_stack_00000138;
              if (fVar15 <= 1.0) {
                if (-1.0 <= fVar15) {
                  uVar4 = (undefined2)(int)(fVar15 * 32767.0);
                }
                else {
                  uVar4 = 0x8000;
                }
              }
              else {
                uVar4 = 0x7fff;
              }
              puVar5[2] = uVar4;
              pfVar12 = pfVar12 + 4;
              puVar5 = puVar5 + 4;
              lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
          }
          if (lVar9 < (longlong)unaff_RSI) {
            puVar5 = (undefined2 *)(lVar13 + lVar9 * 2);
            pfVar12 = (float *)(in_R11 + lVar9 * 4);
            lVar9 = unaff_RSI - lVar9;
            do {
              fVar16 = *(float *)((longlong)pfVar12 + (unaff_RBX - in_R11));
              fVar14 = (float)(int)*(short *)(lVar11 + (longlong)puVar5) * 3.051851e-05;
              fVar15 = fVar14 * in_stack_00000140 + fVar16;
              *pfVar12 = fVar14 * in_stack_00000130 + fVar16 * in_stack_00000138;
              if (fVar15 <= 1.0) {
                if (-1.0 <= fVar15) {
                  uVar4 = (undefined2)(int)(fVar15 * 32767.0);
                }
                else {
                  uVar4 = 0x8000;
                }
              }
              else {
                uVar4 = 0x7fff;
              }
              *puVar5 = uVar4;
              pfVar12 = pfVar12 + 1;
              puVar5 = puVar5 + 1;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
          }
          unaff_RBX = unaff_RBX + unaff_RSI * 4;
          lVar13 = lVar13 + unaff_RSI * 2;
          in_R11 = in_R11 + unaff_RSI * 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        uVar10 = (ulonglong)in_stack_00000150;
        unaff_EBP = in_stack_00000148;
      }
      for (in_R9D = in_R9D + uVar3; in_R9D < 0; in_R9D = in_R9D + in_stack_00000128) {
      }
      for (; (int)in_stack_00000128 <= in_R9D; in_R9D = in_R9D - in_stack_00000128) {
      }
      for (in_R10D = in_R10D + uVar3; in_R10D < 0; in_R10D = in_R10D + in_stack_00000128) {
      }
      for (; (int)in_stack_00000128 <= in_R10D; in_R10D = in_R10D - in_stack_00000128) {
      }
      unaff_EBP = unaff_EBP - uVar3;
      unaff_R12 = in_stack_00000100;
      in_stack_00000148 = unaff_EBP;
    } while (unaff_EBP != 0);
  }
  *in_stack_00000118 = in_R9D;
  *in_stack_00000120 = in_R10D;
  return;
}






// 函数: void FUN_1807e8d48(void)
void FUN_1807e8d48(void)

{
  undefined4 in_R9D;
  undefined4 in_R10D;
  undefined4 *in_stack_00000118;
  undefined4 *in_stack_00000120;
  
  *in_stack_00000118 = in_R9D;
  *in_stack_00000120 = in_R10D;
  return;
}






// 函数: void FUN_1807e8d54(void)
void FUN_1807e8d54(void)

{
  undefined4 in_R9D;
  undefined4 in_R10D;
  undefined4 *in_stack_00000118;
  undefined4 *in_stack_00000120;
  
  *in_stack_00000118 = in_R9D;
  *in_stack_00000120 = in_R10D;
  return;
}






// 函数: void FUN_1807e8d66(void)
void FUN_1807e8d66(void)

{
  undefined4 in_R9D;
  undefined4 in_R10D;
  undefined4 *in_stack_00000118;
  undefined4 *in_stack_00000120;
  
  *in_stack_00000118 = in_R9D;
  *in_stack_00000120 = in_R10D;
  return;
}






