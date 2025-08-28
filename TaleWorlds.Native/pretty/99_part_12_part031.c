#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_12_part031.c - 4 个函数

// 函数: void FUN_1807df670(longlong param_1,float *param_2,uint param_3,longlong param_4,uint param_5,
void FUN_1807df670(longlong param_1,float *param_2,uint param_3,longlong param_4,uint param_5,
                  int param_6,int param_7)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  uint uVar10;
  float *pfVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float *pfVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong uVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  if (0 < (int)param_3) {
    lVar15 = (longlong)(int)param_5;
    lVar13 = -0x18 - param_1;
    pfVar16 = (float *)(param_1 + 0x1c);
    uVar19 = (ulonglong)param_3;
    if (param_7 == 0) {
      do {
        lVar20 = (longlong)param_6;
        if (0 < lVar20) {
          pfVar18 = (float *)(param_4 + 0x18);
          lVar17 = 0;
          lVar14 = (-0x18 - param_4) + (longlong)pfVar16;
          do {
            fVar21 = 0.0;
            switch(param_5) {
            case 8:
              fVar21 = pfVar18[1] * *pfVar16;
            case 7:
              fVar21 = fVar21 + pfVar16[-1] * *pfVar18;
            case 6:
              fVar21 = fVar21 + pfVar18[-1] * pfVar16[-2];
            case 5:
              fVar21 = fVar21 + pfVar18[-2] * pfVar16[-3];
            case 4:
              fVar21 = fVar21 + pfVar18[-3] * pfVar16[-4];
            case 3:
              fVar21 = fVar21 + pfVar18[-4] * pfVar16[-5];
            case 2:
              fVar21 = fVar21 + pfVar18[-5] * pfVar16[-6];
            case 1:
              fVar21 = fVar21 + pfVar18[-6] * pfVar16[-7];
              break;
            default:
              lVar12 = 0;
              if ((0 < (int)param_5) && (7 < param_5)) {
                fVar21 = 0.0;
                fVar22 = 0.0;
                fVar23 = 0.0;
                fVar24 = 0.0;
                fVar25 = 0.0;
                fVar26 = 0.0;
                fVar27 = 0.0;
                fVar28 = 0.0;
                uVar10 = param_5 & 0x80000007;
                if ((int)uVar10 < 0) {
                  uVar10 = (uVar10 - 1 | 0xfffffff8) + 1;
                }
                pfVar11 = pfVar18 + -2;
                do {
                  lVar12 = lVar12 + 8;
                  pfVar2 = (float *)(lVar14 + -0x14 + (longlong)pfVar11);
                  fVar6 = *pfVar11;
                  pfVar7 = pfVar11 + 1;
                  pfVar8 = pfVar11 + 2;
                  pfVar1 = pfVar11 + 3;
                  fVar21 = fVar21 + *pfVar2 * pfVar11[-4];
                  fVar22 = fVar22 + pfVar2[1] * pfVar11[-3];
                  fVar23 = fVar23 + pfVar2[2] * pfVar11[-2];
                  fVar24 = fVar24 + pfVar2[3] * pfVar11[-1];
                  pfVar2 = (float *)(lVar14 + -4 + (longlong)pfVar11);
                  pfVar11 = pfVar11 + 8;
                  fVar25 = fVar25 + *pfVar2 * fVar6;
                  fVar26 = fVar26 + pfVar2[1] * *pfVar7;
                  fVar27 = fVar27 + pfVar2[2] * *pfVar8;
                  fVar28 = fVar28 + pfVar2[3] * *pfVar1;
                } while (lVar12 < (int)(param_5 - uVar10));
                fVar21 = fVar23 + fVar27 + fVar21 + fVar25 + fVar24 + fVar28 + fVar22 + fVar26;
              }
              if (lVar12 < lVar15) {
                if (3 < lVar15 - lVar12) {
                  pfVar11 = (float *)((lVar17 + lVar12) * 4 + param_4);
                  lVar9 = ((lVar15 - lVar12) - 4U >> 2) + 1;
                  lVar12 = lVar12 + lVar9 * 4;
                  do {
                    pfVar3 = (float *)((longlong)pfVar11 + lVar14 + -4);
                    fVar22 = *pfVar11;
                    pfVar1 = (float *)((longlong)pfVar11 + lVar14);
                    pfVar2 = pfVar11 + 1;
                    pfVar4 = (float *)(lVar14 + 8 + (longlong)pfVar11);
                    pfVar7 = pfVar11 + 3;
                    pfVar5 = (float *)(lVar14 + 4 + (longlong)pfVar11);
                    pfVar8 = pfVar11 + 2;
                    pfVar11 = pfVar11 + 4;
                    fVar21 = *pfVar1 * *pfVar2 + *pfVar3 * fVar22 + fVar21 + *pfVar5 * *pfVar8 +
                             *pfVar4 * *pfVar7;
                    lVar9 = lVar9 + -1;
                  } while (lVar9 != 0);
                }
                if (lVar12 < lVar15) {
                  pfVar11 = pfVar16 + lVar12 + -7;
                  lVar12 = lVar15 - lVar12;
                  do {
                    lVar9 = (longlong)pfVar18 + (longlong)pfVar11;
                    fVar22 = *pfVar11;
                    pfVar11 = pfVar11 + 1;
                    fVar21 = fVar21 + *(float *)(lVar9 + lVar13) * fVar22;
                    lVar12 = lVar12 + -1;
                  } while (lVar12 != 0);
                }
              }
            }
            lVar17 = lVar17 + 0x20;
            pfVar18 = pfVar18 + 0x20;
            lVar14 = lVar14 + -0x80;
            *param_2 = *param_2 + fVar21;
            param_2 = param_2 + 1;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
        }
        pfVar16 = pfVar16 + lVar15;
        lVar13 = lVar13 + lVar15 * -4;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    else {
      do {
        lVar20 = (longlong)param_6;
        if (0 < lVar20) {
          lVar14 = 0;
          lVar17 = (-0x18 - param_4) + (longlong)pfVar16;
          pfVar18 = (float *)(param_4 + 0x18);
          do {
            fVar21 = 0.0;
            switch(param_5) {
            case 8:
              fVar21 = pfVar18[1] * *pfVar16;
            case 7:
              fVar21 = fVar21 + pfVar16[-1] * *pfVar18;
            case 6:
              fVar21 = fVar21 + pfVar16[-2] * pfVar18[-1];
            case 5:
              fVar21 = fVar21 + pfVar16[-3] * pfVar18[-2];
            case 4:
              fVar21 = fVar21 + pfVar16[-4] * pfVar18[-3];
            case 3:
              fVar21 = fVar21 + pfVar16[-5] * pfVar18[-4];
            case 2:
              fVar21 = fVar21 + pfVar16[-6] * pfVar18[-5];
            case 1:
              fVar21 = fVar21 + pfVar16[-7] * pfVar18[-6];
              break;
            default:
              lVar12 = 0;
              if ((0 < (int)param_5) && (fVar21 = 0.0, 7 < param_5)) {
                fVar21 = 0.0;
                fVar22 = 0.0;
                fVar23 = 0.0;
                fVar24 = 0.0;
                fVar25 = 0.0;
                fVar26 = 0.0;
                fVar27 = 0.0;
                fVar28 = 0.0;
                uVar10 = param_5 & 0x80000007;
                if ((int)uVar10 < 0) {
                  uVar10 = (uVar10 - 1 | 0xfffffff8) + 1;
                }
                pfVar11 = pfVar18 + -2;
                do {
                  lVar12 = lVar12 + 8;
                  pfVar2 = (float *)(lVar17 + -0x14 + (longlong)pfVar11);
                  fVar6 = *pfVar11;
                  pfVar7 = pfVar11 + 1;
                  pfVar8 = pfVar11 + 2;
                  pfVar1 = pfVar11 + 3;
                  fVar21 = fVar21 + *pfVar2 * pfVar11[-4];
                  fVar22 = fVar22 + pfVar2[1] * pfVar11[-3];
                  fVar23 = fVar23 + pfVar2[2] * pfVar11[-2];
                  fVar24 = fVar24 + pfVar2[3] * pfVar11[-1];
                  pfVar2 = (float *)(lVar17 + -4 + (longlong)pfVar11);
                  pfVar11 = pfVar11 + 8;
                  fVar25 = fVar25 + *pfVar2 * fVar6;
                  fVar26 = fVar26 + pfVar2[1] * *pfVar7;
                  fVar27 = fVar27 + pfVar2[2] * *pfVar8;
                  fVar28 = fVar28 + pfVar2[3] * *pfVar1;
                } while (lVar12 < (int)(param_5 - uVar10));
                fVar21 = fVar23 + fVar27 + fVar21 + fVar25 + fVar24 + fVar28 + fVar22 + fVar26;
              }
              if (lVar12 < lVar15) {
                if (3 < lVar15 - lVar12) {
                  pfVar11 = (float *)(param_4 + (lVar12 + lVar14) * 4);
                  lVar9 = ((lVar15 - lVar12) - 4U >> 2) + 1;
                  lVar12 = lVar12 + lVar9 * 4;
                  do {
                    pfVar3 = (float *)((longlong)pfVar11 + lVar17 + -4);
                    fVar22 = *pfVar11;
                    pfVar1 = (float *)((longlong)pfVar11 + lVar17);
                    pfVar2 = pfVar11 + 1;
                    pfVar4 = (float *)((longlong)pfVar11 + lVar17 + 8);
                    pfVar7 = pfVar11 + 3;
                    pfVar5 = (float *)((longlong)pfVar11 + lVar17 + 4);
                    pfVar8 = pfVar11 + 2;
                    pfVar11 = pfVar11 + 4;
                    fVar21 = *pfVar1 * *pfVar2 + *pfVar3 * fVar22 + fVar21 + *pfVar5 * *pfVar8 +
                             *pfVar4 * *pfVar7;
                    lVar9 = lVar9 + -1;
                  } while (lVar9 != 0);
                }
                if (lVar12 < lVar15) {
                  pfVar11 = pfVar16 + lVar12 + -7;
                  lVar12 = lVar15 - lVar12;
                  do {
                    pfVar2 = (float *)(lVar13 + (longlong)pfVar18 + (longlong)pfVar11);
                    fVar22 = *pfVar11;
                    pfVar11 = pfVar11 + 1;
                    fVar21 = fVar21 + *pfVar2 * fVar22;
                    lVar12 = lVar12 + -1;
                  } while (lVar12 != 0);
                }
              }
            }
            *param_2 = fVar21;
            lVar14 = lVar14 + 0x20;
            param_2 = param_2 + 1;
            pfVar18 = pfVar18 + 0x20;
            lVar17 = lVar17 + -0x80;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
        }
        pfVar16 = pfVar16 + lVar15;
        lVar13 = lVar13 + lVar15 * -4;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  return;
}






// 函数: void FUN_1807df69b(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4)
void FUN_1807df69b(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  uint uVar10;
  float *pfVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  longlong unaff_RSI;
  float *pfVar16;
  longlong lVar17;
  float *pfVar18;
  float *unaff_R12;
  longlong unaff_R15;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  longlong in_stack_00000068;
  int in_stack_00000078;
  int in_stack_00000080;
  
  lVar12 = param_2 - param_4;
  param_2 = param_2 - param_1;
  pfVar16 = (float *)(param_1 + 0x1c);
  param_3 = param_3 & 0xffffffff;
  uVar15 = (uint)unaff_RSI;
  if (in_stack_00000080 == 0) {
    do {
      if (0 < unaff_R15) {
        pfVar18 = (float *)(param_4 + 0x18);
        lVar17 = 0;
        lVar14 = lVar12 + (longlong)pfVar16;
        do {
          fVar19 = 0.0;
          switch(uVar15) {
          case 8:
            fVar19 = pfVar18[1] * *pfVar16;
          case 7:
            fVar19 = fVar19 + pfVar16[-1] * *pfVar18;
          case 6:
            fVar19 = fVar19 + pfVar18[-1] * pfVar16[-2];
          case 5:
            fVar19 = fVar19 + pfVar18[-2] * pfVar16[-3];
          case 4:
            fVar19 = fVar19 + pfVar18[-3] * pfVar16[-4];
          case 3:
            fVar19 = fVar19 + pfVar18[-4] * pfVar16[-5];
          case 2:
            fVar19 = fVar19 + pfVar18[-5] * pfVar16[-6];
          case 1:
            fVar19 = fVar19 + pfVar18[-6] * pfVar16[-7];
            break;
          default:
            lVar13 = 0;
            if ((0 < (int)uVar15) && (7 < uVar15)) {
              fVar19 = 0.0;
              fVar20 = 0.0;
              fVar21 = 0.0;
              fVar22 = 0.0;
              fVar23 = 0.0;
              fVar24 = 0.0;
              fVar25 = 0.0;
              fVar26 = 0.0;
              uVar10 = uVar15 & 0x80000007;
              if ((int)uVar10 < 0) {
                uVar10 = (uVar10 - 1 | 0xfffffff8) + 1;
              }
              pfVar11 = pfVar18 + -2;
              do {
                lVar13 = lVar13 + 8;
                pfVar2 = (float *)(lVar14 + -0x14 + (longlong)pfVar11);
                fVar6 = *pfVar11;
                pfVar7 = pfVar11 + 1;
                pfVar8 = pfVar11 + 2;
                pfVar1 = pfVar11 + 3;
                fVar19 = fVar19 + *pfVar2 * pfVar11[-4];
                fVar20 = fVar20 + pfVar2[1] * pfVar11[-3];
                fVar21 = fVar21 + pfVar2[2] * pfVar11[-2];
                fVar22 = fVar22 + pfVar2[3] * pfVar11[-1];
                pfVar2 = (float *)(lVar14 + -4 + (longlong)pfVar11);
                pfVar11 = pfVar11 + 8;
                fVar23 = fVar23 + *pfVar2 * fVar6;
                fVar24 = fVar24 + pfVar2[1] * *pfVar7;
                fVar25 = fVar25 + pfVar2[2] * *pfVar8;
                fVar26 = fVar26 + pfVar2[3] * *pfVar1;
              } while (lVar13 < (int)(uVar15 - uVar10));
              fVar19 = fVar21 + fVar25 + fVar19 + fVar23 + fVar22 + fVar26 + fVar20 + fVar24;
            }
            if (lVar13 < unaff_RSI) {
              if (3 < unaff_RSI - lVar13) {
                pfVar11 = (float *)((lVar17 + lVar13) * 4 + in_stack_00000068);
                lVar9 = ((unaff_RSI - lVar13) - 4U >> 2) + 1;
                lVar13 = lVar13 + lVar9 * 4;
                do {
                  pfVar3 = (float *)((longlong)pfVar11 + lVar14 + -4);
                  fVar20 = *pfVar11;
                  pfVar1 = (float *)((longlong)pfVar11 + lVar14);
                  pfVar2 = pfVar11 + 1;
                  pfVar4 = (float *)(lVar14 + 8 + (longlong)pfVar11);
                  pfVar7 = pfVar11 + 3;
                  pfVar5 = (float *)(lVar14 + 4 + (longlong)pfVar11);
                  pfVar8 = pfVar11 + 2;
                  pfVar11 = pfVar11 + 4;
                  fVar19 = *pfVar1 * *pfVar2 + *pfVar3 * fVar20 + fVar19 + *pfVar5 * *pfVar8 +
                           *pfVar4 * *pfVar7;
                  lVar9 = lVar9 + -1;
                } while (lVar9 != 0);
              }
              if (lVar13 < unaff_RSI) {
                pfVar11 = pfVar16 + lVar13 + -7;
                lVar13 = unaff_RSI - lVar13;
                do {
                  lVar9 = (longlong)pfVar18 + (longlong)pfVar11;
                  fVar20 = *pfVar11;
                  pfVar11 = pfVar11 + 1;
                  fVar19 = fVar19 + *(float *)(lVar9 + param_2) * fVar20;
                  lVar13 = lVar13 + -1;
                } while (lVar13 != 0);
              }
            }
          }
          lVar17 = lVar17 + 0x20;
          pfVar18 = pfVar18 + 0x20;
          lVar14 = lVar14 + -0x80;
          *unaff_R12 = *unaff_R12 + fVar19;
          unaff_R12 = unaff_R12 + 1;
          unaff_R15 = unaff_R15 + -1;
        } while (unaff_R15 != 0);
        unaff_R15 = (longlong)in_stack_00000078;
        param_4 = in_stack_00000068;
      }
      pfVar16 = pfVar16 + unaff_RSI;
      param_2 = param_2 + unaff_RSI * -4;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  else {
    do {
      if (0 < unaff_R15) {
        lVar14 = 0;
        lVar17 = lVar12 + (longlong)pfVar16;
        pfVar18 = (float *)(in_stack_00000068 + 0x18);
        do {
          fVar19 = 0.0;
          switch(uVar15) {
          case 8:
            fVar19 = pfVar18[1] * *pfVar16;
          case 7:
            fVar19 = fVar19 + pfVar16[-1] * *pfVar18;
          case 6:
            fVar19 = fVar19 + pfVar16[-2] * pfVar18[-1];
          case 5:
            fVar19 = fVar19 + pfVar16[-3] * pfVar18[-2];
          case 4:
            fVar19 = fVar19 + pfVar16[-4] * pfVar18[-3];
          case 3:
            fVar19 = fVar19 + pfVar16[-5] * pfVar18[-4];
          case 2:
            fVar19 = fVar19 + pfVar16[-6] * pfVar18[-5];
          case 1:
            fVar19 = fVar19 + pfVar16[-7] * pfVar18[-6];
            break;
          default:
            lVar13 = 0;
            if ((0 < (int)uVar15) && (fVar19 = 0.0, 7 < uVar15)) {
              fVar19 = 0.0;
              fVar20 = 0.0;
              fVar21 = 0.0;
              fVar22 = 0.0;
              fVar23 = 0.0;
              fVar24 = 0.0;
              fVar25 = 0.0;
              fVar26 = 0.0;
              uVar10 = uVar15 & 0x80000007;
              if ((int)uVar10 < 0) {
                uVar10 = (uVar10 - 1 | 0xfffffff8) + 1;
              }
              pfVar11 = pfVar18 + -2;
              do {
                lVar13 = lVar13 + 8;
                pfVar2 = (float *)(lVar17 + -0x14 + (longlong)pfVar11);
                fVar6 = *pfVar11;
                pfVar7 = pfVar11 + 1;
                pfVar8 = pfVar11 + 2;
                pfVar1 = pfVar11 + 3;
                fVar19 = fVar19 + *pfVar2 * pfVar11[-4];
                fVar20 = fVar20 + pfVar2[1] * pfVar11[-3];
                fVar21 = fVar21 + pfVar2[2] * pfVar11[-2];
                fVar22 = fVar22 + pfVar2[3] * pfVar11[-1];
                pfVar2 = (float *)(lVar17 + -4 + (longlong)pfVar11);
                pfVar11 = pfVar11 + 8;
                fVar23 = fVar23 + *pfVar2 * fVar6;
                fVar24 = fVar24 + pfVar2[1] * *pfVar7;
                fVar25 = fVar25 + pfVar2[2] * *pfVar8;
                fVar26 = fVar26 + pfVar2[3] * *pfVar1;
              } while (lVar13 < (int)(uVar15 - uVar10));
              fVar19 = fVar21 + fVar25 + fVar19 + fVar23 + fVar22 + fVar26 + fVar20 + fVar24;
            }
            if (lVar13 < unaff_RSI) {
              if (3 < unaff_RSI - lVar13) {
                pfVar11 = (float *)(in_stack_00000068 + (lVar13 + lVar14) * 4);
                lVar9 = ((unaff_RSI - lVar13) - 4U >> 2) + 1;
                lVar13 = lVar13 + lVar9 * 4;
                do {
                  pfVar3 = (float *)((longlong)pfVar11 + lVar17 + -4);
                  fVar20 = *pfVar11;
                  pfVar1 = (float *)((longlong)pfVar11 + lVar17);
                  pfVar2 = pfVar11 + 1;
                  pfVar4 = (float *)((longlong)pfVar11 + lVar17 + 8);
                  pfVar7 = pfVar11 + 3;
                  pfVar5 = (float *)((longlong)pfVar11 + lVar17 + 4);
                  pfVar8 = pfVar11 + 2;
                  pfVar11 = pfVar11 + 4;
                  fVar19 = *pfVar1 * *pfVar2 + *pfVar3 * fVar20 + fVar19 + *pfVar5 * *pfVar8 +
                           *pfVar4 * *pfVar7;
                  lVar9 = lVar9 + -1;
                } while (lVar9 != 0);
              }
              if (lVar13 < unaff_RSI) {
                pfVar11 = pfVar16 + lVar13 + -7;
                lVar13 = unaff_RSI - lVar13;
                do {
                  pfVar2 = (float *)(param_2 + (longlong)pfVar18 + (longlong)pfVar11);
                  fVar20 = *pfVar11;
                  pfVar11 = pfVar11 + 1;
                  fVar19 = fVar19 + *pfVar2 * fVar20;
                  lVar13 = lVar13 + -1;
                } while (lVar13 != 0);
              }
            }
          }
          *unaff_R12 = fVar19;
          lVar14 = lVar14 + 0x20;
          unaff_R12 = unaff_R12 + 1;
          pfVar18 = pfVar18 + 0x20;
          lVar17 = lVar17 + -0x80;
          unaff_R15 = unaff_R15 + -1;
        } while (unaff_R15 != 0);
        unaff_R15 = (longlong)in_stack_00000078;
      }
      pfVar16 = pfVar16 + unaff_RSI;
      param_2 = param_2 + unaff_RSI * -4;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}






// 函数: void FUN_1807dfb97(void)
void FUN_1807dfb97(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807dfbe0(float *param_1,float *param_2,uint param_3,longlong param_4,uint64_t param_5,
void FUN_1807dfbe0(float *param_1,float *param_2,uint param_3,longlong param_4,uint64_t param_5,
                  int param_6,int param_7)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  float *pfVar11;
  float *pfVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  float afStack_c0 [34];
  ulonglong auStack_38 [4];
  
  auStack_38[0] = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_38;
  iVar15 = 0;
  bVar2 = true;
  if (3 < param_6) {
    pfVar11 = afStack_c0 + 2;
    uVar10 = (param_6 - 4U >> 2) + 1;
    pfVar12 = (float *)(param_4 + 0x108);
    uVar14 = (ulonglong)uVar10;
    iVar15 = uVar10 * 4;
    do {
      fVar1 = pfVar12[-0x42];
      pfVar11[-2] = fVar1;
      if (fVar1 != 1.0) {
        bVar2 = false;
      }
      fVar1 = pfVar12[-0x21];
      pfVar11[-1] = fVar1;
      if (fVar1 != 1.0) {
        bVar2 = false;
      }
      fVar1 = *pfVar12;
      *pfVar11 = fVar1;
      if (fVar1 != 1.0) {
        bVar2 = false;
      }
      fVar1 = pfVar12[0x21];
      pfVar11[1] = fVar1;
      if (fVar1 != 1.0) {
        bVar2 = false;
      }
      pfVar12 = pfVar12 + 0x84;
      pfVar11 = pfVar11 + 4;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  if (iVar15 < param_6) {
    pfVar11 = afStack_c0 + iVar15;
    pfVar12 = (float *)((longlong)iVar15 * 0x84 + param_4);
    uVar14 = (ulonglong)(uint)(param_6 - iVar15);
    do {
      fVar1 = *pfVar12;
      *pfVar11 = fVar1;
      if (fVar1 != 1.0) {
        bVar2 = false;
      }
      pfVar12 = pfVar12 + 0x21;
      pfVar11 = pfVar11 + 1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  if (param_7 != 0) {
                    // WARNING: Subroutine does not return
    memset(param_2,0,(ulonglong)(param_3 * param_6) << 2);
  }
  uVar10 = param_3 >> 2;
  if (bVar2) {
    if (uVar10 != 0) {
      pfVar11 = param_2 + 8;
      do {
        fVar1 = param_1[1];
        fVar3 = param_1[2];
        fVar4 = param_1[3];
        fVar5 = param_1[8];
        fVar6 = param_1[9];
        fVar7 = param_1[10];
        fVar8 = param_1[0xb];
        *param_2 = *param_1 + *param_2;
        param_2[1] = fVar1 + param_2[1];
        param_2[2] = fVar3 + param_2[2];
        param_2[3] = fVar4 + param_2[3];
        param_2 = param_2 + 0x18;
        fVar1 = param_1[5];
        fVar3 = param_1[6];
        fVar4 = param_1[7];
        pfVar11[-4] = param_1[4] + pfVar11[-4];
        pfVar11[-3] = fVar1 + pfVar11[-3];
        pfVar11[-2] = fVar3 + pfVar11[-2];
        pfVar11[-1] = fVar4 + pfVar11[-1];
        fVar1 = param_1[0xc];
        fVar3 = param_1[0xd];
        fVar4 = param_1[0xe];
        fVar9 = param_1[0xf];
        *pfVar11 = fVar5 + *pfVar11;
        pfVar11[1] = fVar6 + pfVar11[1];
        pfVar11[2] = fVar7 + pfVar11[2];
        pfVar11[3] = fVar8 + pfVar11[3];
        pfVar11[4] = fVar1 + pfVar11[4];
        pfVar11[5] = fVar3 + pfVar11[5];
        pfVar11[6] = fVar4 + pfVar11[6];
        pfVar11[7] = fVar9 + pfVar11[7];
        fVar1 = param_1[0x11];
        fVar3 = param_1[0x12];
        fVar4 = param_1[0x13];
        pfVar11[8] = param_1[0x10] + pfVar11[8];
        pfVar11[9] = fVar1 + pfVar11[9];
        pfVar11[10] = fVar3 + pfVar11[10];
        pfVar11[0xb] = fVar4 + pfVar11[0xb];
        pfVar12 = param_1 + 0x14;
        fVar1 = param_1[0x15];
        fVar3 = param_1[0x16];
        fVar4 = param_1[0x17];
        param_1 = param_1 + 0x18;
        pfVar11[0xc] = *pfVar12 + pfVar11[0xc];
        pfVar11[0xd] = fVar1 + pfVar11[0xd];
        pfVar11[0xe] = fVar3 + pfVar11[0xe];
        pfVar11[0xf] = fVar4 + pfVar11[0xf];
        pfVar11 = pfVar11 + 0x18;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    uVar10 = param_3 & 3;
    if ((param_3 & 3) != 0) {
      lVar13 = (longlong)param_1 - (longlong)param_2;
      do {
        pfVar11 = (float *)(lVar13 + 0x10 + (longlong)param_2);
        fVar1 = *pfVar11;
        fVar3 = pfVar11[1];
        pfVar11 = (float *)(lVar13 + (longlong)param_2);
        fVar4 = pfVar11[1];
        fVar5 = pfVar11[2];
        fVar6 = pfVar11[3];
        *param_2 = *pfVar11 + *param_2;
        param_2[1] = fVar4 + param_2[1];
        param_2[2] = fVar5 + param_2[2];
        param_2[3] = fVar6 + param_2[3];
        *(ulonglong *)(param_2 + 4) = CONCAT44(fVar3 + param_2[5],fVar1 + param_2[4]);
        param_2 = param_2 + 6;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  else {
    if (uVar10 != 0) {
      pfVar11 = param_2 + 8;
      do {
        fVar1 = param_1[1];
        fVar3 = param_1[2];
        fVar4 = param_1[3];
        fVar5 = param_1[8];
        fVar6 = param_1[9];
        fVar7 = param_1[10];
        fVar8 = param_1[0xb];
        *param_2 = *param_1 * afStack_c0[0] + *param_2;
        param_2[1] = fVar1 * afStack_c0[1] + param_2[1];
        param_2[2] = fVar3 * afStack_c0[2] + param_2[2];
        param_2[3] = fVar4 * afStack_c0[3] + param_2[3];
        param_2 = param_2 + 0x18;
        fVar1 = param_1[5];
        fVar3 = param_1[6];
        fVar4 = param_1[7];
        pfVar11[-4] = param_1[4] * afStack_c0[4] + pfVar11[-4];
        pfVar11[-3] = fVar1 * afStack_c0[5] + pfVar11[-3];
        pfVar11[-2] = fVar3 * afStack_c0[0] + pfVar11[-2];
        pfVar11[-1] = fVar4 * afStack_c0[1] + pfVar11[-1];
        fVar1 = param_1[0xc];
        fVar3 = param_1[0xd];
        fVar4 = param_1[0xe];
        fVar9 = param_1[0xf];
        *pfVar11 = fVar5 * afStack_c0[2] + *pfVar11;
        pfVar11[1] = fVar6 * afStack_c0[3] + pfVar11[1];
        pfVar11[2] = fVar7 * afStack_c0[4] + pfVar11[2];
        pfVar11[3] = fVar8 * afStack_c0[5] + pfVar11[3];
        pfVar11[4] = fVar1 * afStack_c0[0] + pfVar11[4];
        pfVar11[5] = fVar3 * afStack_c0[1] + pfVar11[5];
        pfVar11[6] = fVar4 * afStack_c0[2] + pfVar11[6];
        pfVar11[7] = fVar9 * afStack_c0[3] + pfVar11[7];
        fVar1 = param_1[0x11];
        fVar3 = param_1[0x12];
        fVar4 = param_1[0x13];
        pfVar11[8] = param_1[0x10] * afStack_c0[4] + pfVar11[8];
        pfVar11[9] = fVar1 * afStack_c0[5] + pfVar11[9];
        pfVar11[10] = fVar3 * afStack_c0[0] + pfVar11[10];
        pfVar11[0xb] = fVar4 * afStack_c0[1] + pfVar11[0xb];
        pfVar12 = param_1 + 0x14;
        fVar1 = param_1[0x15];
        fVar3 = param_1[0x16];
        fVar4 = param_1[0x17];
        param_1 = param_1 + 0x18;
        pfVar11[0xc] = *pfVar12 * afStack_c0[2] + pfVar11[0xc];
        pfVar11[0xd] = fVar1 * afStack_c0[3] + pfVar11[0xd];
        pfVar11[0xe] = fVar3 * afStack_c0[4] + pfVar11[0xe];
        pfVar11[0xf] = fVar4 * afStack_c0[5] + pfVar11[0xf];
        pfVar11 = pfVar11 + 0x18;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
      fVar1 = param_1[4];
      fVar3 = param_1[5];
      fVar4 = *param_1;
      fVar5 = param_1[1];
      fVar6 = param_1[2];
      fVar7 = param_1[3];
      param_1 = param_1 + 6;
      *param_2 = fVar4 * afStack_c0[0] + *param_2;
      param_2[1] = fVar5 * afStack_c0[1] + param_2[1];
      param_2[2] = fVar6 * afStack_c0[2] + param_2[2];
      param_2[3] = fVar7 * afStack_c0[3] + param_2[3];
      *(ulonglong *)(param_2 + 4) =
           CONCAT44(fVar3 * afStack_c0[5] + param_2[5],fVar1 * afStack_c0[4] + param_2[4]);
      param_2 = param_2 + 6;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(auStack_38[0] ^ (ulonglong)auStack_38);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




