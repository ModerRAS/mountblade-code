#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part297_sub002_sub002.c - 1 个函数

// 函数: void FUN_180830670(void)
void FUN_180830670(void)

{
  return;
}



uint64_t FUN_180830680(longlong *param_1,longlong *param_2)

{
  float *pfVar1;
  float fVar2;
  int *piVar3;
  int *piVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  int iVar11;
  int32_t *puVar12;
  float *pfVar13;
  int iVar14;
  longlong lVar15;
  float *pfVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  int iVar26;
  longlong lVar27;
  longlong lVar28;
  int iStackX_20;
  longlong lStack_88;
  
  lVar28 = *param_1;
  piVar3 = (int *)param_1[0xe];
  piVar4 = *(int **)(lVar28 + 0x20);
  iVar14 = piVar4[0x4ca];
  if ((param_2 != (longlong *)0x0) &&
     ((*(int *)((longlong)param_1 + 0x1c) <= (int)param_1[4] || ((int)param_1[4] == -1)))) {
    *(int *)((longlong)param_1 + 0x2c) = (int)param_1[6];
    *(int32_t *)(param_1 + 6) = *(int32_t *)((longlong)param_2 + 0x2c);
    *(int32_t *)((longlong)param_1 + 0x34) = 0xffffffff;
    if ((param_1[9] == -1) || (param_1[9] + 1 != param_2[9])) {
      param_1[8] = -1;
      piVar3[0xc] = -1;
      piVar3[0xd] = -1;
    }
    param_1[9] = param_2[9];
    bVar5 = (byte)iVar14;
    if (*param_2 != 0) {
      bVar10 = bVar5 + 1;
      iVar19 = piVar4[1] >> (bVar10 & 0x1f);
      iVar7 = piVar4[(int)param_1[6]];
      iVar17 = *piVar4;
      param_1[10] = param_1[10] + (longlong)(int)param_2[0xf];
      param_1[0xb] = param_1[0xb] + (longlong)*(int *)((longlong)param_2 + 0x7c);
      param_1[0xc] = param_1[0xc] + (longlong)(int)param_2[0x10];
      param_1[0xd] = param_1[0xd] + (longlong)*(int *)((longlong)param_2 + 0x84);
      iVar17 = iVar17 >> (bVar10 & 0x1f);
      iVar11 = (int)param_1[7];
      iVar26 = iVar19;
      iVar6 = 0;
      if (iVar11 == 0) {
        iVar26 = 0;
        iVar6 = iVar19;
      }
      lVar8 = (longlong)(iVar7 >> (bVar10 & 0x1f));
      lVar24 = (longlong)iVar19;
      iStackX_20 = 0;
      lVar25 = (longlong)iVar17;
      if (0 < *(int *)(lVar28 + 4)) {
        lVar27 = (longlong)iVar6;
        lStack_88 = 0;
        do {
          lVar21 = 0;
          lVar22 = param_1[6];
          if (*(int *)((longlong)param_1 + 0x2c) == 0) {
            lVar9 = func_0x00018081a750(*piVar3 - iVar14);
            lVar15 = *(longlong *)(param_1[1] + lStack_88) + lVar27 * 4;
            if ((int)lVar22 == 0) {
              lVar22 = *(longlong *)(*param_2 + lStack_88);
              if (3 < lVar25) {
                pfVar13 = (float *)(lVar15 + 4);
                lVar18 = lVar22 - lVar15;
                pfVar16 = (float *)(lVar9 + (lVar25 + -2) * 4);
                lVar20 = lVar9 - lVar15;
                lVar23 = (lVar25 - 4U >> 2) + 1;
                lVar21 = lVar23 * 4;
                do {
                  pfVar13[-1] = *(float *)(lVar20 + -4 + (longlong)pfVar13) *
                                *(float *)(lVar18 + -4 + (longlong)pfVar13) +
                                pfVar16[1] * pfVar13[-1];
                  *pfVar13 = *(float *)(lVar20 + (longlong)pfVar13 + (lVar22 - lVar9)) *
                             *(float *)(lVar20 + (longlong)pfVar13) + *pfVar16 * *pfVar13;
                  pfVar13[1] = *(float *)(lVar20 + 4 + (longlong)pfVar13) *
                               *(float *)(lVar18 + 4 + (longlong)pfVar13) + pfVar16[-1] * pfVar13[1]
                  ;
                  pfVar1 = pfVar16 + -2;
                  pfVar16 = pfVar16 + -4;
                  pfVar13[2] = *(float *)(lVar20 + 8 + (longlong)pfVar13) *
                               *(float *)(lVar18 + 8 + (longlong)pfVar13) + *pfVar1 * pfVar13[2];
                  pfVar13 = pfVar13 + 4;
                  lVar23 = lVar23 + -1;
                } while (lVar23 != 0);
              }
              if (lVar21 < lVar25) {
                pfVar13 = (float *)(lVar15 + lVar21 * 4);
                pfVar16 = (float *)(lVar9 + ((lVar25 - lVar21) + -1) * 4);
                lVar21 = lVar25 - lVar21;
                do {
                  fVar2 = *pfVar16;
                  pfVar1 = (float *)((longlong)pfVar13 + (lVar9 - lVar15));
                  pfVar16 = pfVar16 + -1;
                  *pfVar13 = *(float *)((longlong)pfVar1 + (lVar22 - lVar9)) * *pfVar1 +
                             fVar2 * *pfVar13;
                  pfVar13 = pfVar13 + 1;
                  lVar21 = lVar21 + -1;
                } while (lVar21 != 0);
              }
            }
            else {
              lVar22 = 0;
              lVar21 = *(longlong *)(*param_2 + lStack_88) +
                       ((longlong)(iVar19 / 2) - (longlong)(iVar17 / 2)) * 4;
              if (3 < lVar25) {
                pfVar13 = (float *)(lVar15 + 4);
                lVar20 = lVar21 - lVar15;
                pfVar16 = (float *)(lVar9 + (lVar25 + -2) * 4);
                lVar23 = lVar9 - lVar15;
                lVar18 = (lVar25 - 4U >> 2) + 1;
                lVar22 = lVar18 * 4;
                do {
                  pfVar13[-1] = *(float *)(lVar23 + -4 + (longlong)pfVar13) *
                                *(float *)(lVar20 + -4 + (longlong)pfVar13) +
                                pfVar16[1] * pfVar13[-1];
                  *pfVar13 = *(float *)(lVar23 + (longlong)pfVar13 + (lVar21 - lVar9)) *
                             *(float *)(lVar23 + (longlong)pfVar13) + *pfVar16 * *pfVar13;
                  pfVar13[1] = *(float *)(lVar23 + 4 + (longlong)pfVar13) *
                               *(float *)(lVar20 + 4 + (longlong)pfVar13) + pfVar16[-1] * pfVar13[1]
                  ;
                  pfVar1 = pfVar16 + -2;
                  pfVar16 = pfVar16 + -4;
                  pfVar13[2] = *(float *)(lVar23 + 8 + (longlong)pfVar13) *
                               *(float *)(lVar20 + 8 + (longlong)pfVar13) + *pfVar1 * pfVar13[2];
                  pfVar13 = pfVar13 + 4;
                  lVar18 = lVar18 + -1;
                } while (lVar18 != 0);
              }
              if (lVar22 < lVar25) {
                pfVar13 = (float *)(lVar15 + lVar22 * 4);
                pfVar16 = (float *)(lVar9 + ((lVar25 - lVar22) + -1) * 4);
                lVar18 = lVar25 - lVar22;
                do {
                  pfVar1 = (float *)((lVar9 - lVar15) + (longlong)pfVar13);
                  fVar2 = *pfVar16;
                  pfVar16 = pfVar16 + -1;
                  *pfVar13 = *(float *)((lVar21 - lVar9) + (longlong)pfVar1) * *pfVar1 +
                             *pfVar13 * fVar2;
                  pfVar13 = pfVar13 + 1;
                  lVar18 = lVar18 + -1;
                  lVar22 = lVar25;
                } while (lVar18 != 0);
              }
              lVar9 = (longlong)(iVar17 / 2 + iVar19 / 2);
              if (lVar22 < lVar9) {
                if (3 < lVar9 - lVar22) {
                  puVar12 = (int32_t *)(lVar15 + (lVar22 + 1) * 4);
                  lVar18 = lVar21 - lVar15;
                  lVar20 = ((lVar9 - lVar22) - 4U >> 2) + 1;
                  lVar22 = lVar22 + lVar20 * 4;
                  do {
                    puVar12[-1] = *(int32_t *)(lVar18 + -4 + (longlong)puVar12);
                    *puVar12 = *(int32_t *)(lVar18 + (longlong)puVar12);
                    puVar12[1] = *(int32_t *)(lVar18 + 4 + (longlong)puVar12);
                    puVar12[2] = *(int32_t *)(lVar18 + 8 + (longlong)puVar12);
                    puVar12 = puVar12 + 4;
                    lVar20 = lVar20 + -1;
                  } while (lVar20 != 0);
                }
                if (lVar22 < lVar9) {
                  puVar12 = (int32_t *)(lVar15 + lVar22 * 4);
                  lVar9 = lVar9 - lVar22;
                  do {
                    *puVar12 = *(int32_t *)((lVar21 - lVar15) + (longlong)puVar12);
                    puVar12 = puVar12 + 1;
                    lVar9 = lVar9 + -1;
                  } while (lVar9 != 0);
                }
              }
            }
          }
          else if ((int)lVar22 == 0) {
            lVar9 = func_0x00018081a750(*piVar3 - iVar14);
            lVar22 = *(longlong *)(param_1[1] + lStack_88) +
                     (((longlong)(iVar19 / 2) - (longlong)(iVar17 / 2)) + lVar27) * 4;
            lVar15 = *(longlong *)(*param_2 + lStack_88);
            if (3 < lVar25) {
              pfVar13 = (float *)(lVar22 + 4);
              lVar18 = lVar15 - lVar22;
              pfVar16 = (float *)(lVar9 + (lVar25 + -2) * 4);
              lVar20 = lVar9 - lVar22;
              lVar23 = (lVar25 - 4U >> 2) + 1;
              lVar21 = lVar23 * 4;
              do {
                pfVar13[-1] = *(float *)(lVar20 + -4 + (longlong)pfVar13) *
                              *(float *)(lVar18 + -4 + (longlong)pfVar13) + pfVar16[1] * pfVar13[-1]
                ;
                *pfVar13 = *(float *)(lVar20 + (longlong)pfVar13 + (lVar15 - lVar9)) *
                           *(float *)(lVar20 + (longlong)pfVar13) + *pfVar16 * *pfVar13;
                pfVar13[1] = *(float *)(lVar20 + 4 + (longlong)pfVar13) *
                             *(float *)(lVar18 + 4 + (longlong)pfVar13) + pfVar16[-1] * pfVar13[1];
                pfVar1 = pfVar16 + -2;
                pfVar16 = pfVar16 + -4;
                pfVar13[2] = *(float *)(lVar20 + 8 + (longlong)pfVar13) *
                             *(float *)(lVar18 + 8 + (longlong)pfVar13) + *pfVar1 * pfVar13[2];
                pfVar13 = pfVar13 + 4;
                lVar23 = lVar23 + -1;
              } while (lVar23 != 0);
            }
            if (lVar21 < lVar25) {
              pfVar13 = (float *)(lVar22 + lVar21 * 4);
              pfVar16 = (float *)(lVar9 + ((lVar25 - lVar21) + -1) * 4);
              lVar21 = lVar25 - lVar21;
              do {
                fVar2 = *pfVar16;
                pfVar1 = (float *)((longlong)pfVar13 + (lVar9 - lVar22));
                pfVar16 = pfVar16 + -1;
                *pfVar13 = *(float *)((lVar15 - lVar9) + (longlong)pfVar1) * *pfVar1 +
                           fVar2 * *pfVar13;
                pfVar13 = pfVar13 + 1;
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
            }
          }
          else {
            lVar9 = func_0x00018081a750(piVar3[1] - iVar14);
            lVar22 = *(longlong *)(param_1[1] + lStack_88) + lVar27 * 4;
            lVar15 = *(longlong *)(*param_2 + lStack_88);
            if (3 < lVar24) {
              pfVar13 = (float *)(lVar22 + 4);
              lVar18 = lVar15 - lVar22;
              pfVar16 = (float *)(lVar9 + (lVar24 + -2) * 4);
              lVar20 = lVar9 - lVar22;
              lVar23 = (lVar24 - 4U >> 2) + 1;
              lVar21 = lVar23 * 4;
              do {
                pfVar13[-1] = *(float *)((longlong)pfVar13 + lVar20 + -4) *
                              *(float *)((longlong)pfVar13 + lVar18 + -4) + pfVar16[1] * pfVar13[-1]
                ;
                *pfVar13 = *(float *)(lVar20 + (longlong)pfVar13 + (lVar15 - lVar9)) *
                           *(float *)(lVar20 + (longlong)pfVar13) + *pfVar16 * *pfVar13;
                pfVar13[1] = *(float *)(lVar20 + 4 + (longlong)pfVar13) *
                             *(float *)(lVar18 + 4 + (longlong)pfVar13) + pfVar16[-1] * pfVar13[1];
                pfVar1 = pfVar16 + -2;
                pfVar16 = pfVar16 + -4;
                pfVar13[2] = *(float *)(lVar20 + 8 + (longlong)pfVar13) *
                             *(float *)(lVar18 + 8 + (longlong)pfVar13) + *pfVar1 * pfVar13[2];
                pfVar13 = pfVar13 + 4;
                lVar23 = lVar23 + -1;
              } while (lVar23 != 0);
            }
            if (lVar21 < lVar24) {
              pfVar13 = (float *)(lVar22 + lVar21 * 4);
              pfVar16 = (float *)(lVar9 + ((lVar24 - lVar21) + -1) * 4);
              lVar21 = lVar24 - lVar21;
              do {
                pfVar1 = (float *)((lVar9 - lVar22) + (longlong)pfVar13);
                fVar2 = *pfVar16;
                pfVar16 = pfVar16 + -1;
                *pfVar13 = *(float *)((lVar15 - lVar9) + (longlong)pfVar1) * *pfVar1 +
                           *pfVar13 * fVar2;
                pfVar13 = pfVar13 + 1;
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
            }
          }
          lVar15 = 0;
          lVar21 = *(longlong *)(param_1[1] + lStack_88) + (longlong)iVar26 * 4;
          lVar22 = *(longlong *)(*param_2 + lStack_88) + lVar8 * 4;
          if (3 < lVar8) {
            lVar9 = lVar22 - lVar21;
            lVar18 = (lVar8 - 4U >> 2) + 1;
            puVar12 = (int32_t *)(lVar21 + 4);
            lVar15 = lVar18 * 4;
            do {
              puVar12[-1] = *(int32_t *)(lVar9 + -4 + (longlong)puVar12);
              *puVar12 = *(int32_t *)(lVar9 + (longlong)puVar12);
              puVar12[1] = *(int32_t *)(lVar9 + 4 + (longlong)puVar12);
              puVar12[2] = *(int32_t *)(lVar9 + 8 + (longlong)puVar12);
              puVar12 = puVar12 + 4;
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
          }
          if (lVar15 < lVar8) {
            puVar12 = (int32_t *)(lVar21 + lVar15 * 4);
            lVar15 = lVar8 - lVar15;
            do {
              *puVar12 = *(int32_t *)((longlong)puVar12 + (lVar22 - lVar21));
              puVar12 = puVar12 + 1;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
          }
          lStack_88 = lStack_88 + 8;
          iStackX_20 = iStackX_20 + 1;
        } while (iStackX_20 < *(int *)(lVar28 + 4));
        iVar11 = (int)param_1[7];
      }
      iVar14 = 0;
      if (iVar11 == 0) {
        iVar14 = iVar19;
      }
      *(int *)(param_1 + 7) = iVar14;
      if ((int)param_1[4] == -1) {
        *(int *)(param_1 + 4) = iVar26;
        *(int *)((longlong)param_1 + 0x1c) = iVar26;
      }
      else {
        *(int *)(param_1 + 4) = iVar6;
        *(int *)((longlong)param_1 + 0x1c) =
             (((int)((piVar4[*(int *)((longlong)param_1 + 0x2c)] >> 0x1f & 3U) +
                    piVar4[*(int *)((longlong)param_1 + 0x2c)]) >> 2) +
              ((int)(piVar4[(int)param_1[6]] + (piVar4[(int)param_1[6]] >> 0x1f & 3U)) >> 2) >>
             (bVar5 & 0x1f)) + iVar6;
      }
    }
    lVar28 = 0;
    if (*(longlong *)(piVar3 + 0xc) != -1) {
      lVar28 = (longlong)
               (((int)((piVar4[*(int *)((longlong)param_1 + 0x2c)] >> 0x1f & 3U) +
                      piVar4[*(int *)((longlong)param_1 + 0x2c)]) >> 2) +
               ((int)(piVar4[(int)param_1[6]] + (piVar4[(int)param_1[6]] >> 0x1f & 3U)) >> 2)) +
               *(longlong *)(piVar3 + 0xc);
    }
    *(longlong *)(piVar3 + 0xc) = lVar28;
    if (param_1[8] == -1) {
      lVar28 = param_2[8];
      if (lVar28 != -1) {
        param_1[8] = lVar28;
        if (lVar28 < *(longlong *)(piVar3 + 0xc)) {
          iVar14 = *(int *)((longlong)param_1 + 0x1c);
          iVar7 = (int)(*(longlong *)(piVar3 + 0xc) - lVar28 >> (bVar5 & 0x3f));
          if (*(int *)((longlong)param_2 + 0x3c) == 0) {
            *(int *)(param_1 + 4) = (int)param_1[4] + iVar7;
            if (iVar14 < (int)param_1[4]) {
              *(int *)(param_1 + 4) = iVar14;
            }
          }
          else {
            *(int *)((longlong)param_1 + 0x1c) = iVar14 - iVar7;
          }
        }
      }
    }
    else {
      lVar8 = (longlong)
              (((int)((piVar4[*(int *)((longlong)param_1 + 0x2c)] >> 0x1f & 3U) +
                     piVar4[*(int *)((longlong)param_1 + 0x2c)]) >> 2) +
              ((int)(piVar4[(int)param_1[6]] + (piVar4[(int)param_1[6]] >> 0x1f & 3U)) >> 2)) +
              param_1[8];
      param_1[8] = lVar8;
      lVar28 = param_2[8];
      if ((lVar28 != -1) && (lVar8 != lVar28)) {
        if ((lVar28 < lVar8) &&
           ((iVar14 = (int)lVar8 - (int)lVar28, iVar14 != 0 &&
            (*(int *)((longlong)param_2 + 0x3c) != 0)))) {
          *(int *)((longlong)param_1 + 0x1c) =
               *(int *)((longlong)param_1 + 0x1c) - (iVar14 >> (bVar5 & 0x1f));
          lVar28 = param_2[8];
        }
        param_1[8] = lVar28;
      }
    }
    if (*(int *)((longlong)param_2 + 0x3c) != 0) {
      *(int32_t *)(param_1 + 5) = 1;
    }
    return 0;
  }
  return 0xffffff7d;
}



uint64_t FUN_1808306e5(longlong param_1,longlong *param_2,uint64_t param_3,int param_4)

{
  longlong lVar1;
  float *pfVar2;
  float fVar3;
  longlong in_RAX;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  int32_t *puVar7;
  float *pfVar8;
  int iVar9;
  longlong lVar10;
  float *pfVar11;
  longlong unaff_RBX;
  longlong lVar12;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int *in_R10;
  int *in_R11;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  int iStackX_20;
  int iStack0000000000000028;
  longlong lStack0000000000000030;
  longlong lStack0000000000000038;
  int *in_stack_00000040;
  longlong lStack0000000000000048;
  longlong in_stack_00000050;
  longlong lStack0000000000000058;
  int *in_stack_00000060;
  int iStack00000000000000c0;
  longlong *in_stack_000000c8;
  int iStack00000000000000d0;
  int iStack00000000000000d8;
  
  *(int32_t *)(param_1 + 0x34) = 0xffffffff;
  if ((in_RAX == -1) || (in_RAX + 1 != param_2[9])) {
    *(uint64_t *)(param_1 + 0x40) = 0xffffffffffffffff;
    in_R10[0xc] = -1;
    in_R10[0xd] = -1;
  }
  *(longlong *)(param_1 + 0x48) = param_2[9];
  if (*param_2 != 0) {
    bVar5 = (char)param_4 + 1;
    iStack00000000000000c0 = in_R11[1] >> (bVar5 & 0x1f);
    iVar9 = in_R11[*(int *)(unaff_RBX + 0x30)];
    iStack00000000000000d0 = *in_R11;
    *(longlong *)(unaff_RBX + 0x50) =
         *(longlong *)(unaff_RBX + 0x50) + (longlong)(int)unaff_RSI[0xf];
    *(longlong *)(unaff_RBX + 0x58) =
         *(longlong *)(unaff_RBX + 0x58) + (longlong)*(int *)((longlong)unaff_RSI + 0x7c);
    *(longlong *)(unaff_RBX + 0x60) =
         *(longlong *)(unaff_RBX + 0x60) + (longlong)(int)unaff_RSI[0x10];
    *(longlong *)(unaff_RBX + 0x68) =
         *(longlong *)(unaff_RBX + 0x68) + (longlong)*(int *)((longlong)unaff_RSI + 0x84);
    iStack0000000000000028 = 0;
    iStack00000000000000d0 = iStack00000000000000d0 >> (bVar5 & 0x1f);
    iVar6 = *(int *)(unaff_RBX + 0x38);
    iVar19 = iStack00000000000000c0;
    if (iVar6 == 0) {
      iVar19 = 0;
      iStack0000000000000028 = iStack00000000000000c0;
    }
    lStack0000000000000048 = (longlong)(iVar9 >> (bVar5 & 0x1f));
    lVar17 = (longlong)iStack00000000000000c0;
    iStack00000000000000d8 = 0;
    lVar18 = (longlong)iStack00000000000000d0;
    if (0 < *(int *)(unaff_RDI + 4)) {
      lStack0000000000000058 = (longlong)iStack0000000000000028;
      lStack0000000000000030 = 0;
      lStack0000000000000038 = lVar17;
      do {
        lVar1 = lStack0000000000000058;
        lVar12 = lStack0000000000000030;
        lVar15 = 0;
        iVar9 = *(int *)(unaff_RBX + 0x30);
        if (*(int *)(unaff_RBX + 0x2c) == 0) {
          lVar10 = func_0x00018081a750(*in_R10 - param_4);
          lVar1 = *(longlong *)(*(longlong *)(unaff_RBX + 8) + lVar12) + lVar1 * 4;
          if (iVar9 == 0) {
            lVar4 = *(longlong *)(*unaff_RSI + lVar12);
            if (3 < lVar18) {
              pfVar8 = (float *)(lVar1 + 4);
              lVar13 = lVar4 - lVar1;
              pfVar11 = (float *)(lVar10 + (lVar18 + -2) * 4);
              lVar14 = lVar10 - lVar1;
              lVar16 = (lVar18 - 4U >> 2) + 1;
              lVar15 = lVar16 * 4;
              do {
                pfVar8[-1] = *(float *)(lVar14 + -4 + (longlong)pfVar8) *
                             *(float *)(lVar13 + -4 + (longlong)pfVar8) + pfVar11[1] * pfVar8[-1];
                *pfVar8 = *(float *)(lVar14 + (longlong)pfVar8 + (lVar4 - lVar10)) *
                          *(float *)(lVar14 + (longlong)pfVar8) + *pfVar11 * *pfVar8;
                pfVar8[1] = *(float *)(lVar14 + 4 + (longlong)pfVar8) *
                            *(float *)(lVar13 + 4 + (longlong)pfVar8) + pfVar11[-1] * pfVar8[1];
                pfVar2 = pfVar11 + -2;
                pfVar11 = pfVar11 + -4;
                pfVar8[2] = *(float *)(lVar14 + 8 + (longlong)pfVar8) *
                            *(float *)(lVar13 + 8 + (longlong)pfVar8) + *pfVar2 * pfVar8[2];
                pfVar8 = pfVar8 + 4;
                lVar16 = lVar16 + -1;
                lVar12 = lStack0000000000000030;
              } while (lVar16 != 0);
            }
            unaff_RSI = in_stack_000000c8;
            if (lVar15 < lVar18) {
              pfVar8 = (float *)(lVar1 + lVar15 * 4);
              pfVar11 = (float *)(lVar10 + ((lVar18 - lVar15) + -1) * 4);
              lVar15 = lVar18 - lVar15;
              do {
                fVar3 = *pfVar11;
                pfVar2 = (float *)((longlong)pfVar8 + (lVar10 - lVar1));
                pfVar11 = pfVar11 + -1;
                *pfVar8 = *(float *)((longlong)pfVar2 + (lVar4 - lVar10)) * *pfVar2 +
                          fVar3 * *pfVar8;
                pfVar8 = pfVar8 + 1;
                lVar15 = lVar15 + -1;
              } while (lVar15 != 0);
            }
          }
          else {
            lVar4 = 0;
            lVar15 = *(longlong *)(*unaff_RSI + lVar12) +
                     ((longlong)(iStack00000000000000c0 / 2) -
                     (longlong)(iStack00000000000000d0 / 2)) * 4;
            if (3 < lVar18) {
              pfVar8 = (float *)(lVar1 + 4);
              lVar13 = lVar15 - lVar1;
              pfVar11 = (float *)(lVar10 + (lVar18 + -2) * 4);
              lVar14 = lVar10 - lVar1;
              lVar17 = (lVar18 - 4U >> 2) + 1;
              lVar4 = lVar17 * 4;
              do {
                pfVar8[-1] = *(float *)(lVar14 + -4 + (longlong)pfVar8) *
                             *(float *)(lVar13 + -4 + (longlong)pfVar8) + pfVar11[1] * pfVar8[-1];
                *pfVar8 = *(float *)(lVar14 + (longlong)pfVar8 + (lVar15 - lVar10)) *
                          *(float *)(lVar14 + (longlong)pfVar8) + *pfVar11 * *pfVar8;
                pfVar8[1] = *(float *)(lVar14 + 4 + (longlong)pfVar8) *
                            *(float *)(lVar13 + 4 + (longlong)pfVar8) + pfVar11[-1] * pfVar8[1];
                pfVar2 = pfVar11 + -2;
                pfVar11 = pfVar11 + -4;
                pfVar8[2] = *(float *)(lVar14 + 8 + (longlong)pfVar8) *
                            *(float *)(lVar13 + 8 + (longlong)pfVar8) + *pfVar2 * pfVar8[2];
                pfVar8 = pfVar8 + 4;
                lVar17 = lVar17 + -1;
                lVar12 = lStack0000000000000030;
                unaff_RSI = in_stack_000000c8;
              } while (lVar17 != 0);
            }
            if (lVar4 < lVar18) {
              pfVar8 = (float *)(lVar1 + lVar4 * 4);
              pfVar11 = (float *)(lVar10 + ((lVar18 - lVar4) + -1) * 4);
              lVar17 = lVar18 - lVar4;
              do {
                pfVar2 = (float *)((lVar10 - lVar1) + (longlong)pfVar8);
                fVar3 = *pfVar11;
                pfVar11 = pfVar11 + -1;
                *pfVar8 = *(float *)((lVar15 - lVar10) + (longlong)pfVar2) * *pfVar2 +
                          *pfVar8 * fVar3;
                pfVar8 = pfVar8 + 1;
                lVar17 = lVar17 + -1;
                lVar4 = lVar18;
              } while (lVar17 != 0);
            }
            lVar10 = (longlong)(iStack00000000000000d0 / 2 + iStack00000000000000c0 / 2);
            lVar17 = lStack0000000000000038;
            if (lVar4 < lVar10) {
              if (3 < lVar10 - lVar4) {
                puVar7 = (int32_t *)(lVar1 + (lVar4 + 1) * 4);
                lVar13 = lVar15 - lVar1;
                lVar14 = ((lVar10 - lVar4) - 4U >> 2) + 1;
                lVar4 = lVar4 + lVar14 * 4;
                do {
                  puVar7[-1] = *(int32_t *)(lVar13 + -4 + (longlong)puVar7);
                  *puVar7 = *(int32_t *)(lVar13 + (longlong)puVar7);
                  puVar7[1] = *(int32_t *)(lVar13 + 4 + (longlong)puVar7);
                  puVar7[2] = *(int32_t *)(lVar13 + 8 + (longlong)puVar7);
                  puVar7 = puVar7 + 4;
                  lVar14 = lVar14 + -1;
                } while (lVar14 != 0);
              }
              if (lVar4 < lVar10) {
                puVar7 = (int32_t *)(lVar1 + lVar4 * 4);
                lVar10 = lVar10 - lVar4;
                do {
                  *puVar7 = *(int32_t *)((lVar15 - lVar1) + (longlong)puVar7);
                  puVar7 = puVar7 + 1;
                  lVar10 = lVar10 + -1;
                } while (lVar10 != 0);
              }
            }
          }
        }
        else if (iVar9 == 0) {
          lVar4 = func_0x00018081a750(*in_R10 - param_4);
          lVar1 = *(longlong *)(*(longlong *)(unaff_RBX + 8) + lVar12) +
                  (((longlong)(iStack00000000000000c0 / 2) - (longlong)(iStack00000000000000d0 / 2))
                  + lVar1) * 4;
          lVar10 = *(longlong *)(*unaff_RSI + lVar12);
          if (3 < lVar18) {
            pfVar8 = (float *)(lVar1 + 4);
            lVar13 = lVar10 - lVar1;
            pfVar11 = (float *)(lVar4 + (lVar18 + -2) * 4);
            lVar14 = lVar4 - lVar1;
            lVar16 = (lVar18 - 4U >> 2) + 1;
            lVar15 = lVar16 * 4;
            do {
              pfVar8[-1] = *(float *)(lVar14 + -4 + (longlong)pfVar8) *
                           *(float *)(lVar13 + -4 + (longlong)pfVar8) + pfVar11[1] * pfVar8[-1];
              *pfVar8 = *(float *)(lVar14 + (longlong)pfVar8 + (lVar10 - lVar4)) *
                        *(float *)(lVar14 + (longlong)pfVar8) + *pfVar11 * *pfVar8;
              pfVar8[1] = *(float *)(lVar14 + 4 + (longlong)pfVar8) *
                          *(float *)(lVar13 + 4 + (longlong)pfVar8) + pfVar11[-1] * pfVar8[1];
              pfVar2 = pfVar11 + -2;
              pfVar11 = pfVar11 + -4;
              pfVar8[2] = *(float *)(lVar14 + 8 + (longlong)pfVar8) *
                          *(float *)(lVar13 + 8 + (longlong)pfVar8) + *pfVar2 * pfVar8[2];
              pfVar8 = pfVar8 + 4;
              lVar16 = lVar16 + -1;
              lVar12 = lStack0000000000000030;
            } while (lVar16 != 0);
          }
          unaff_RSI = in_stack_000000c8;
          if (lVar15 < lVar18) {
            pfVar8 = (float *)(lVar1 + lVar15 * 4);
            pfVar11 = (float *)(lVar4 + ((lVar18 - lVar15) + -1) * 4);
            lVar15 = lVar18 - lVar15;
            do {
              fVar3 = *pfVar11;
              pfVar2 = (float *)((longlong)pfVar8 + (lVar4 - lVar1));
              pfVar11 = pfVar11 + -1;
              *pfVar8 = *(float *)((lVar10 - lVar4) + (longlong)pfVar2) * *pfVar2 + fVar3 * *pfVar8;
              pfVar8 = pfVar8 + 1;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
          }
        }
        else {
          lVar4 = func_0x00018081a750(in_R10[1] - param_4);
          lVar1 = *(longlong *)(*(longlong *)(unaff_RBX + 8) + lVar12) + lVar1 * 4;
          lVar10 = *(longlong *)(*unaff_RSI + lVar12);
          if (3 < lVar17) {
            pfVar8 = (float *)(lVar1 + 4);
            lVar13 = lVar10 - lVar1;
            pfVar11 = (float *)(lVar4 + (lVar17 + -2) * 4);
            lVar14 = lVar4 - lVar1;
            lVar16 = (lVar17 - 4U >> 2) + 1;
            lVar15 = lVar16 * 4;
            do {
              pfVar8[-1] = *(float *)((longlong)pfVar8 + lVar14 + -4) *
                           *(float *)((longlong)pfVar8 + lVar13 + -4) + pfVar11[1] * pfVar8[-1];
              *pfVar8 = *(float *)(lVar14 + (longlong)pfVar8 + (lVar10 - lVar4)) *
                        *(float *)(lVar14 + (longlong)pfVar8) + *pfVar11 * *pfVar8;
              pfVar8[1] = *(float *)(lVar14 + 4 + (longlong)pfVar8) *
                          *(float *)(lVar13 + 4 + (longlong)pfVar8) + pfVar11[-1] * pfVar8[1];
              pfVar2 = pfVar11 + -2;
              pfVar11 = pfVar11 + -4;
              pfVar8[2] = *(float *)(lVar14 + 8 + (longlong)pfVar8) *
                          *(float *)(lVar13 + 8 + (longlong)pfVar8) + *pfVar2 * pfVar8[2];
              pfVar8 = pfVar8 + 4;
              lVar16 = lVar16 + -1;
              lVar12 = lStack0000000000000030;
            } while (lVar16 != 0);
          }
          unaff_RSI = in_stack_000000c8;
          if (lVar15 < lVar17) {
            pfVar8 = (float *)(lVar1 + lVar15 * 4);
            pfVar11 = (float *)(lVar4 + ((lVar17 - lVar15) + -1) * 4);
            lVar15 = lVar17 - lVar15;
            do {
              pfVar2 = (float *)((lVar4 - lVar1) + (longlong)pfVar8);
              fVar3 = *pfVar11;
              pfVar11 = pfVar11 + -1;
              *pfVar8 = *(float *)((lVar10 - lVar4) + (longlong)pfVar2) * *pfVar2 + *pfVar8 * fVar3;
              pfVar8 = pfVar8 + 1;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
          }
        }
        lVar10 = 0;
        lVar15 = *(longlong *)(*(longlong *)(unaff_RBX + 8) + lVar12) + (longlong)iVar19 * 4;
        lVar1 = *(longlong *)(*unaff_RSI + lVar12) + lStack0000000000000048 * 4;
        if (3 < lStack0000000000000048) {
          lVar4 = lVar1 - lVar15;
          lVar13 = (lStack0000000000000048 - 4U >> 2) + 1;
          puVar7 = (int32_t *)(lVar15 + 4);
          lVar10 = lVar13 * 4;
          do {
            puVar7[-1] = *(int32_t *)(lVar4 + -4 + (longlong)puVar7);
            *puVar7 = *(int32_t *)(lVar4 + (longlong)puVar7);
            puVar7[1] = *(int32_t *)(lVar4 + 4 + (longlong)puVar7);
            puVar7[2] = *(int32_t *)(lVar4 + 8 + (longlong)puVar7);
            puVar7 = puVar7 + 4;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        if (lVar10 < lStack0000000000000048) {
          puVar7 = (int32_t *)(lVar15 + lVar10 * 4);
          lVar10 = lStack0000000000000048 - lVar10;
          do {
            *puVar7 = *(int32_t *)((longlong)puVar7 + (lVar1 - lVar15));
            puVar7 = puVar7 + 1;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        lStack0000000000000030 = lVar12 + 8;
        iStack00000000000000d8 = iStack00000000000000d8 + 1;
        in_R10 = in_stack_00000040;
        param_4 = iStackX_20;
      } while (iStack00000000000000d8 < *(int *)(in_stack_00000050 + 4));
      iVar6 = *(int *)(unaff_RBX + 0x38);
      in_R11 = in_stack_00000060;
    }
    iVar9 = 0;
    if (iVar6 == 0) {
      iVar9 = iStack00000000000000c0;
    }
    *(int *)(unaff_RBX + 0x38) = iVar9;
    if (*(int *)(unaff_RBX + 0x20) == -1) {
      *(int *)(unaff_RBX + 0x20) = iVar19;
      *(int *)(unaff_RBX + 0x1c) = iVar19;
    }
    else {
      *(int *)(unaff_RBX + 0x20) = iStack0000000000000028;
      *(int *)(unaff_RBX + 0x1c) =
           (((int)((in_R11[*(int *)(unaff_RBX + 0x2c)] >> 0x1f & 3U) +
                  in_R11[*(int *)(unaff_RBX + 0x2c)]) >> 2) +
            ((int)(in_R11[*(int *)(unaff_RBX + 0x30)] +
                  (in_R11[*(int *)(unaff_RBX + 0x30)] >> 0x1f & 3U)) >> 2) >> ((byte)param_4 & 0x1f)
           ) + iStack0000000000000028;
    }
  }
  lVar17 = 0;
  if (*(longlong *)(in_R10 + 0xc) != -1) {
    lVar17 = (longlong)
             (((int)((in_R11[*(int *)(unaff_RBX + 0x2c)] >> 0x1f & 3U) +
                    in_R11[*(int *)(unaff_RBX + 0x2c)]) >> 2) +
             ((int)(in_R11[*(int *)(unaff_RBX + 0x30)] +
                   (in_R11[*(int *)(unaff_RBX + 0x30)] >> 0x1f & 3U)) >> 2)) +
             *(longlong *)(in_R10 + 0xc);
  }
  *(longlong *)(in_R10 + 0xc) = lVar17;
  if (*(longlong *)(unaff_RBX + 0x40) == -1) {
    lVar17 = unaff_RSI[8];
    if (lVar17 != -1) {
      *(longlong *)(unaff_RBX + 0x40) = lVar17;
      if (lVar17 < *(longlong *)(in_R10 + 0xc)) {
        iVar9 = *(int *)(unaff_RBX + 0x1c);
        iVar6 = (int)(*(longlong *)(in_R10 + 0xc) - lVar17 >> ((byte)param_4 & 0x3f));
        if (*(int *)((longlong)unaff_RSI + 0x3c) == 0) {
          *(int *)(unaff_RBX + 0x20) = *(int *)(unaff_RBX + 0x20) + iVar6;
          if (iVar9 < *(int *)(unaff_RBX + 0x20)) {
            *(int *)(unaff_RBX + 0x20) = iVar9;
          }
        }
        else {
          *(int *)(unaff_RBX + 0x1c) = iVar9 - iVar6;
        }
      }
    }
  }
  else {
    lVar18 = (longlong)
             (((int)((in_R11[*(int *)(unaff_RBX + 0x2c)] >> 0x1f & 3U) +
                    in_R11[*(int *)(unaff_RBX + 0x2c)]) >> 2) +
             ((int)(in_R11[*(int *)(unaff_RBX + 0x30)] +
                   (in_R11[*(int *)(unaff_RBX + 0x30)] >> 0x1f & 3U)) >> 2)) +
             *(longlong *)(unaff_RBX + 0x40);
    *(longlong *)(unaff_RBX + 0x40) = lVar18;
    lVar17 = unaff_RSI[8];
    if ((lVar17 != -1) && (lVar18 != lVar17)) {
      if ((lVar17 < lVar18) &&
         ((iVar9 = (int)lVar18 - (int)lVar17, iVar9 != 0 &&
          (*(int *)((longlong)unaff_RSI + 0x3c) != 0)))) {
        *(int *)(unaff_RBX + 0x1c) = *(int *)(unaff_RBX + 0x1c) - (iVar9 >> ((byte)param_4 & 0x1f));
        lVar17 = unaff_RSI[8];
      }
      *(longlong *)(unaff_RBX + 0x40) = lVar17;
    }
  }
  if (*(int *)((longlong)unaff_RSI + 0x3c) != 0) {
    *(int32_t *)(unaff_RBX + 0x28) = 1;
  }
  return 0;
}



uint64_t FUN_180830733(byte param_1,uint64_t param_2,ulonglong param_3,int param_4)

{
  longlong lVar1;
  float *pfVar2;
  float fVar3;
  byte bVar4;
  longlong in_RAX;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int32_t *puVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  longlong unaff_RBX;
  ulonglong uVar12;
  longlong *unaff_RSI;
  ulonglong uVar13;
  longlong unaff_RDI;
  longlong lVar14;
  longlong lVar15;
  int *in_R10;
  ulonglong uVar16;
  int *in_R11;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong unaff_R15;
  int iStackX_20;
  uint uStack0000000000000028;
  longlong lStack0000000000000038;
  int *in_stack_00000040;
  longlong lStack0000000000000048;
  longlong in_stack_00000050;
  longlong lStack0000000000000058;
  int *in_stack_00000060;
  uint uStack00000000000000c0;
  longlong *in_stack_000000c8;
  int iStack00000000000000d0;
  uint uStack00000000000000d8;
  
  iVar10 = in_R11[in_RAX];
  iStack00000000000000d0 = *in_R11;
  *(longlong *)(unaff_RBX + 0x50) = *(longlong *)(unaff_RBX + 0x50) + (longlong)(int)unaff_RSI[0xf];
  *(longlong *)(unaff_RBX + 0x58) =
       *(longlong *)(unaff_RBX + 0x58) + (longlong)*(int *)((longlong)unaff_RSI + 0x7c);
  *(longlong *)(unaff_RBX + 0x60) = *(longlong *)(unaff_RBX + 0x60) + (longlong)(int)unaff_RSI[0x10]
  ;
  *(longlong *)(unaff_RBX + 0x68) =
       *(longlong *)(unaff_RBX + 0x68) + (longlong)*(int *)((longlong)unaff_RSI + 0x84);
  uStack00000000000000d8 = (uint)unaff_R15;
  iStack00000000000000d0 = iStack00000000000000d0 >> (param_1 & 0x1f);
  iVar7 = *(int *)(unaff_RBX + 0x38);
  uStack00000000000000c0 = (uint)param_3;
  uVar20 = uStack00000000000000c0;
  uStack0000000000000028 = uStack00000000000000d8;
  if (iVar7 == 0) {
    uVar20 = uStack00000000000000d8;
    uStack0000000000000028 = uStack00000000000000c0;
  }
  lStack0000000000000048 = (longlong)(iVar10 >> (param_1 & 0x1f));
  lVar18 = (longlong)(int)uStack00000000000000c0;
  lVar19 = (longlong)iStack00000000000000d0;
  if ((int)uStack00000000000000d8 < *(int *)(unaff_RDI + 4)) {
    lStack0000000000000058 = (longlong)(int)uStack0000000000000028;
    uVar12 = unaff_R15 & 0xffffffff;
    uVar16 = unaff_R15;
    lStack0000000000000038 = lVar18;
    do {
      lVar1 = lStack0000000000000058;
      iVar10 = *(int *)(unaff_RBX + 0x30);
      if (*(int *)(unaff_RBX + 0x2c) == 0) {
        lVar6 = func_0x00018081a750(*in_R10 - param_4);
        lVar1 = *(longlong *)(*(longlong *)(unaff_RBX + 8) + uVar12) + lVar1 * 4;
        if (iVar10 == 0) {
          lVar5 = *(longlong *)(*unaff_RSI + uVar12);
          uVar13 = unaff_R15;
          if (3 < lVar19) {
            pfVar9 = (float *)(lVar1 + 4);
            lVar14 = lVar5 - lVar1;
            pfVar11 = (float *)(lVar6 + (lVar19 + -2) * 4);
            lVar15 = lVar6 - lVar1;
            lVar17 = (lVar19 - 4U >> 2) + 1;
            uVar13 = lVar17 * 4;
            do {
              pfVar9[-1] = *(float *)(lVar15 + -4 + (longlong)pfVar9) *
                           *(float *)(lVar14 + -4 + (longlong)pfVar9) + pfVar11[1] * pfVar9[-1];
              *pfVar9 = *(float *)(lVar15 + (longlong)pfVar9 + (lVar5 - lVar6)) *
                        *(float *)(lVar15 + (longlong)pfVar9) + *pfVar11 * *pfVar9;
              pfVar9[1] = *(float *)(lVar15 + 4 + (longlong)pfVar9) *
                          *(float *)(lVar14 + 4 + (longlong)pfVar9) + pfVar11[-1] * pfVar9[1];
              pfVar2 = pfVar11 + -2;
              pfVar11 = pfVar11 + -4;
              pfVar9[2] = *(float *)(lVar15 + 8 + (longlong)pfVar9) *
                          *(float *)(lVar14 + 8 + (longlong)pfVar9) + *pfVar2 * pfVar9[2];
              pfVar9 = pfVar9 + 4;
              lVar17 = lVar17 + -1;
              uVar12 = uVar16;
            } while (lVar17 != 0);
          }
          unaff_RSI = in_stack_000000c8;
          if ((longlong)uVar13 < lVar19) {
            pfVar9 = (float *)(lVar1 + uVar13 * 4);
            pfVar11 = (float *)(lVar6 + ((lVar19 - uVar13) + -1) * 4);
            lVar14 = lVar19 - uVar13;
            do {
              fVar3 = *pfVar11;
              pfVar2 = (float *)((longlong)pfVar9 + (lVar6 - lVar1));
              pfVar11 = pfVar11 + -1;
              *pfVar9 = *(float *)((longlong)pfVar2 + (lVar5 - lVar6)) * *pfVar2 + fVar3 * *pfVar9;
              pfVar9 = pfVar9 + 1;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
          }
        }
        else {
          lVar5 = 0;
          lVar18 = *(longlong *)(*unaff_RSI + uVar12) +
                   ((longlong)((int)uStack00000000000000c0 / 2) -
                   (longlong)(iStack00000000000000d0 / 2)) * 4;
          if (3 < lVar19) {
            pfVar9 = (float *)(lVar1 + 4);
            lVar15 = lVar18 - lVar1;
            pfVar11 = (float *)(lVar6 + (lVar19 + -2) * 4);
            lVar17 = lVar6 - lVar1;
            lVar14 = (lVar19 - 4U >> 2) + 1;
            lVar5 = lVar14 * 4;
            do {
              pfVar9[-1] = *(float *)(lVar17 + -4 + (longlong)pfVar9) *
                           *(float *)(lVar15 + -4 + (longlong)pfVar9) + pfVar11[1] * pfVar9[-1];
              *pfVar9 = *(float *)(lVar17 + (longlong)pfVar9 + (lVar18 - lVar6)) *
                        *(float *)(lVar17 + (longlong)pfVar9) + *pfVar11 * *pfVar9;
              pfVar9[1] = *(float *)(lVar17 + 4 + (longlong)pfVar9) *
                          *(float *)(lVar15 + 4 + (longlong)pfVar9) + pfVar11[-1] * pfVar9[1];
              pfVar2 = pfVar11 + -2;
              pfVar11 = pfVar11 + -4;
              pfVar9[2] = *(float *)(lVar17 + 8 + (longlong)pfVar9) *
                          *(float *)(lVar15 + 8 + (longlong)pfVar9) + *pfVar2 * pfVar9[2];
              pfVar9 = pfVar9 + 4;
              lVar14 = lVar14 + -1;
              uVar12 = uVar16;
              unaff_RSI = in_stack_000000c8;
            } while (lVar14 != 0);
          }
          if (lVar5 < lVar19) {
            pfVar9 = (float *)(lVar1 + lVar5 * 4);
            pfVar11 = (float *)(lVar6 + ((lVar19 - lVar5) + -1) * 4);
            lVar14 = lVar19 - lVar5;
            do {
              pfVar2 = (float *)((lVar6 - lVar1) + (longlong)pfVar9);
              fVar3 = *pfVar11;
              pfVar11 = pfVar11 + -1;
              *pfVar9 = *(float *)((lVar18 - lVar6) + (longlong)pfVar2) * *pfVar2 + *pfVar9 * fVar3;
              pfVar9 = pfVar9 + 1;
              lVar14 = lVar14 + -1;
              lVar5 = lVar19;
            } while (lVar14 != 0);
          }
          lVar6 = (longlong)(iStack00000000000000d0 / 2 + (int)uStack00000000000000c0 / 2);
          if (lVar5 < lVar6) {
            if (3 < lVar6 - lVar5) {
              puVar8 = (int32_t *)(lVar1 + (lVar5 + 1) * 4);
              lVar14 = lVar18 - lVar1;
              lVar15 = ((lVar6 - lVar5) - 4U >> 2) + 1;
              lVar5 = lVar5 + lVar15 * 4;
              do {
                puVar8[-1] = *(int32_t *)(lVar14 + -4 + (longlong)puVar8);
                *puVar8 = *(int32_t *)(lVar14 + (longlong)puVar8);
                puVar8[1] = *(int32_t *)(lVar14 + 4 + (longlong)puVar8);
                puVar8[2] = *(int32_t *)(lVar14 + 8 + (longlong)puVar8);
                puVar8 = puVar8 + 4;
                lVar15 = lVar15 + -1;
              } while (lVar15 != 0);
            }
            if (lVar5 < lVar6) {
              puVar8 = (int32_t *)(lVar1 + lVar5 * 4);
              lVar6 = lVar6 - lVar5;
              do {
                *puVar8 = *(int32_t *)((lVar18 - lVar1) + (longlong)puVar8);
                puVar8 = puVar8 + 1;
                lVar6 = lVar6 + -1;
              } while (lVar6 != 0);
            }
          }
          unaff_R15 = 0;
          lVar18 = lStack0000000000000038;
        }
      }
      else if (iVar10 == 0) {
        lVar5 = func_0x00018081a750(*in_R10 - param_4);
        lVar1 = *(longlong *)(*(longlong *)(unaff_RBX + 8) + uVar12) +
                (((longlong)((int)uStack00000000000000c0 / 2) -
                 (longlong)(iStack00000000000000d0 / 2)) + lVar1) * 4;
        lVar6 = *(longlong *)(*unaff_RSI + uVar12);
        uVar13 = unaff_R15;
        if (3 < lVar19) {
          pfVar9 = (float *)(lVar1 + 4);
          lVar14 = lVar6 - lVar1;
          pfVar11 = (float *)(lVar5 + (lVar19 + -2) * 4);
          lVar15 = lVar5 - lVar1;
          lVar17 = (lVar19 - 4U >> 2) + 1;
          uVar13 = lVar17 * 4;
          do {
            pfVar9[-1] = *(float *)(lVar15 + -4 + (longlong)pfVar9) *
                         *(float *)(lVar14 + -4 + (longlong)pfVar9) + pfVar11[1] * pfVar9[-1];
            *pfVar9 = *(float *)(lVar15 + (longlong)pfVar9 + (lVar6 - lVar5)) *
                      *(float *)(lVar15 + (longlong)pfVar9) + *pfVar11 * *pfVar9;
            pfVar9[1] = *(float *)(lVar15 + 4 + (longlong)pfVar9) *
                        *(float *)(lVar14 + 4 + (longlong)pfVar9) + pfVar11[-1] * pfVar9[1];
            pfVar2 = pfVar11 + -2;
            pfVar11 = pfVar11 + -4;
            pfVar9[2] = *(float *)(lVar15 + 8 + (longlong)pfVar9) *
                        *(float *)(lVar14 + 8 + (longlong)pfVar9) + *pfVar2 * pfVar9[2];
            pfVar9 = pfVar9 + 4;
            lVar17 = lVar17 + -1;
            uVar12 = uVar16;
          } while (lVar17 != 0);
        }
        unaff_RSI = in_stack_000000c8;
        if ((longlong)uVar13 < lVar19) {
          pfVar9 = (float *)(lVar1 + uVar13 * 4);
          pfVar11 = (float *)(lVar5 + ((lVar19 - uVar13) + -1) * 4);
          lVar14 = lVar19 - uVar13;
          do {
            fVar3 = *pfVar11;
            pfVar2 = (float *)((longlong)pfVar9 + (lVar5 - lVar1));
            pfVar11 = pfVar11 + -1;
            *pfVar9 = *(float *)((lVar6 - lVar5) + (longlong)pfVar2) * *pfVar2 + fVar3 * *pfVar9;
            pfVar9 = pfVar9 + 1;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
      }
      else {
        lVar5 = func_0x00018081a750(in_R10[1] - param_4);
        lVar1 = *(longlong *)(*(longlong *)(unaff_RBX + 8) + uVar12) + lVar1 * 4;
        lVar6 = *(longlong *)(*unaff_RSI + uVar12);
        uVar13 = unaff_R15;
        if (3 < lVar18) {
          pfVar9 = (float *)(lVar1 + 4);
          lVar14 = lVar6 - lVar1;
          pfVar11 = (float *)(lVar5 + (lVar18 + -2) * 4);
          lVar15 = lVar5 - lVar1;
          lVar17 = (lVar18 - 4U >> 2) + 1;
          uVar13 = lVar17 * 4;
          do {
            pfVar9[-1] = *(float *)((longlong)pfVar9 + lVar15 + -4) *
                         *(float *)((longlong)pfVar9 + lVar14 + -4) + pfVar11[1] * pfVar9[-1];
            *pfVar9 = *(float *)(lVar15 + (longlong)pfVar9 + (lVar6 - lVar5)) *
                      *(float *)(lVar15 + (longlong)pfVar9) + *pfVar11 * *pfVar9;
            pfVar9[1] = *(float *)(lVar15 + 4 + (longlong)pfVar9) *
                        *(float *)(lVar14 + 4 + (longlong)pfVar9) + pfVar11[-1] * pfVar9[1];
            pfVar2 = pfVar11 + -2;
            pfVar11 = pfVar11 + -4;
            pfVar9[2] = *(float *)(lVar15 + 8 + (longlong)pfVar9) *
                        *(float *)(lVar14 + 8 + (longlong)pfVar9) + *pfVar2 * pfVar9[2];
            pfVar9 = pfVar9 + 4;
            lVar17 = lVar17 + -1;
            uVar12 = uVar16;
          } while (lVar17 != 0);
        }
        unaff_RSI = in_stack_000000c8;
        if ((longlong)uVar13 < lVar18) {
          pfVar9 = (float *)(lVar1 + uVar13 * 4);
          pfVar11 = (float *)(lVar5 + ((lVar18 - uVar13) + -1) * 4);
          lVar14 = lVar18 - uVar13;
          do {
            pfVar2 = (float *)((lVar5 - lVar1) + (longlong)pfVar9);
            fVar3 = *pfVar11;
            pfVar11 = pfVar11 + -1;
            *pfVar9 = *(float *)((lVar6 - lVar5) + (longlong)pfVar2) * *pfVar2 + *pfVar9 * fVar3;
            pfVar9 = pfVar9 + 1;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
      }
      lVar1 = *(longlong *)(*(longlong *)(unaff_RBX + 8) + uVar12) + (longlong)(int)uVar20 * 4;
      lVar6 = *(longlong *)(*unaff_RSI + uVar12) + lStack0000000000000048 * 4;
      uVar16 = unaff_R15;
      if (3 < lStack0000000000000048) {
        lVar5 = lVar6 - lVar1;
        lVar14 = (lStack0000000000000048 - 4U >> 2) + 1;
        puVar8 = (int32_t *)(lVar1 + 4);
        uVar16 = lVar14 * 4;
        do {
          puVar8[-1] = *(int32_t *)(lVar5 + -4 + (longlong)puVar8);
          *puVar8 = *(int32_t *)(lVar5 + (longlong)puVar8);
          puVar8[1] = *(int32_t *)(lVar5 + 4 + (longlong)puVar8);
          puVar8[2] = *(int32_t *)(lVar5 + 8 + (longlong)puVar8);
          puVar8 = puVar8 + 4;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      if ((longlong)uVar16 < lStack0000000000000048) {
        puVar8 = (int32_t *)(lVar1 + uVar16 * 4);
        lVar5 = lStack0000000000000048 - uVar16;
        do {
          *puVar8 = *(int32_t *)((longlong)puVar8 + (lVar6 - lVar1));
          puVar8 = puVar8 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      uVar12 = uVar12 + 8;
      uStack00000000000000d8 = uStack00000000000000d8 + 1;
      in_R10 = in_stack_00000040;
      uVar16 = uVar12;
      param_4 = iStackX_20;
    } while ((int)uStack00000000000000d8 < *(int *)(in_stack_00000050 + 4));
    iVar7 = *(int *)(unaff_RBX + 0x38);
    param_3 = (ulonglong)uStack00000000000000c0;
    in_R11 = in_stack_00000060;
  }
  uVar12 = unaff_R15;
  if (iVar7 == 0) {
    uVar12 = param_3;
  }
  *(int *)(unaff_RBX + 0x38) = (int)uVar12;
  bVar4 = (byte)param_4;
  if (*(int *)(unaff_RBX + 0x20) == -1) {
    *(uint *)(unaff_RBX + 0x20) = uVar20;
    *(uint *)(unaff_RBX + 0x1c) = uVar20;
  }
  else {
    *(uint *)(unaff_RBX + 0x20) = uStack0000000000000028;
    *(uint *)(unaff_RBX + 0x1c) =
         (((int)((in_R11[*(int *)(unaff_RBX + 0x2c)] >> 0x1f & 3U) +
                in_R11[*(int *)(unaff_RBX + 0x2c)]) >> 2) +
          ((int)(in_R11[*(int *)(unaff_RBX + 0x30)] +
                (in_R11[*(int *)(unaff_RBX + 0x30)] >> 0x1f & 3U)) >> 2) >> (bVar4 & 0x1f)) +
         uStack0000000000000028;
  }
  if (*(longlong *)(in_R10 + 0xc) != -1) {
    unaff_R15 = (longlong)
                (((int)((in_R11[*(int *)(unaff_RBX + 0x2c)] >> 0x1f & 3U) +
                       in_R11[*(int *)(unaff_RBX + 0x2c)]) >> 2) +
                ((int)(in_R11[*(int *)(unaff_RBX + 0x30)] +
                      (in_R11[*(int *)(unaff_RBX + 0x30)] >> 0x1f & 3U)) >> 2)) +
                *(longlong *)(in_R10 + 0xc);
  }
  *(ulonglong *)(in_R10 + 0xc) = unaff_R15;
  if (*(longlong *)(unaff_RBX + 0x40) == -1) {
    lVar18 = unaff_RSI[8];
    if (lVar18 != -1) {
      *(longlong *)(unaff_RBX + 0x40) = lVar18;
      if (lVar18 < *(longlong *)(in_R10 + 0xc)) {
        iVar10 = *(int *)(unaff_RBX + 0x1c);
        iVar7 = (int)(*(longlong *)(in_R10 + 0xc) - lVar18 >> (bVar4 & 0x3f));
        if (*(int *)((longlong)unaff_RSI + 0x3c) == 0) {
          *(int *)(unaff_RBX + 0x20) = *(int *)(unaff_RBX + 0x20) + iVar7;
          if (iVar10 < *(int *)(unaff_RBX + 0x20)) {
            *(int *)(unaff_RBX + 0x20) = iVar10;
          }
        }
        else {
          *(int *)(unaff_RBX + 0x1c) = iVar10 - iVar7;
        }
      }
    }
  }
  else {
    lVar19 = (longlong)
             (((int)((in_R11[*(int *)(unaff_RBX + 0x2c)] >> 0x1f & 3U) +
                    in_R11[*(int *)(unaff_RBX + 0x2c)]) >> 2) +
             ((int)(in_R11[*(int *)(unaff_RBX + 0x30)] +
                   (in_R11[*(int *)(unaff_RBX + 0x30)] >> 0x1f & 3U)) >> 2)) +
             *(longlong *)(unaff_RBX + 0x40);
    *(longlong *)(unaff_RBX + 0x40) = lVar19;
    lVar18 = unaff_RSI[8];
    if ((lVar18 != -1) && (lVar19 != lVar18)) {
      if ((lVar18 < lVar19) &&
         ((iVar10 = (int)lVar19 - (int)lVar18, iVar10 != 0 &&
          (*(int *)((longlong)unaff_RSI + 0x3c) != 0)))) {
        *(int *)(unaff_RBX + 0x1c) = *(int *)(unaff_RBX + 0x1c) - (iVar10 >> (bVar4 & 0x1f));
        lVar18 = unaff_RSI[8];
      }
      *(longlong *)(unaff_RBX + 0x40) = lVar18;
    }
  }
  if (*(int *)((longlong)unaff_RSI + 0x3c) != 0) {
    *(int32_t *)(unaff_RBX + 0x28) = 1;
  }
  return 0;
}



uint64_t FUN_180830e03(void)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong unaff_RBX;
  longlong unaff_RSI;
  byte in_R9B;
  longlong in_R10;
  longlong in_R11;
  int32_t unaff_R14D;
  longlong unaff_R15;
  
  *(int32_t *)(unaff_RBX + 0x20) = unaff_R14D;
  *(int32_t *)(unaff_RBX + 0x1c) = unaff_R14D;
  if (*(longlong *)(in_R10 + 0x30) != -1) {
    iVar3 = *(int *)(in_R11 + (longlong)*(int *)(unaff_RBX + 0x2c) * 4);
    iVar1 = *(int *)(in_R11 + (longlong)*(int *)(unaff_RBX + 0x30) * 4);
    unaff_R15 = (longlong)
                (((int)((iVar3 >> 0x1f & 3U) + iVar3) >> 2) +
                ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2)) + *(longlong *)(in_R10 + 0x30);
  }
  *(longlong *)(in_R10 + 0x30) = unaff_R15;
  if (*(longlong *)(unaff_RBX + 0x40) == -1) {
    lVar2 = *(longlong *)(unaff_RSI + 0x40);
    if (lVar2 != -1) {
      *(longlong *)(unaff_RBX + 0x40) = lVar2;
      if (lVar2 < *(longlong *)(in_R10 + 0x30)) {
        iVar3 = *(int *)(unaff_RBX + 0x1c);
        iVar1 = (int)(*(longlong *)(in_R10 + 0x30) - lVar2 >> (in_R9B & 0x3f));
        if (*(int *)(unaff_RSI + 0x3c) == 0) {
          *(int *)(unaff_RBX + 0x20) = *(int *)(unaff_RBX + 0x20) + iVar1;
          if (iVar3 < *(int *)(unaff_RBX + 0x20)) {
            *(int *)(unaff_RBX + 0x20) = iVar3;
          }
        }
        else {
          *(int *)(unaff_RBX + 0x1c) = iVar3 - iVar1;
        }
      }
    }
  }
  else {
    iVar3 = *(int *)(in_R11 + (longlong)*(int *)(unaff_RBX + 0x2c) * 4);
    iVar1 = *(int *)(in_R11 + (longlong)*(int *)(unaff_RBX + 0x30) * 4);
    lVar4 = (longlong)
            (((int)((iVar3 >> 0x1f & 3U) + iVar3) >> 2) + ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2)
            ) + *(longlong *)(unaff_RBX + 0x40);
    *(longlong *)(unaff_RBX + 0x40) = lVar4;
    lVar2 = *(longlong *)(unaff_RSI + 0x40);
    if ((lVar2 != -1) && (lVar4 != lVar2)) {
      if ((lVar2 < lVar4) &&
         ((iVar3 = (int)lVar4 - (int)lVar2, iVar3 != 0 && (*(int *)(unaff_RSI + 0x3c) != 0)))) {
        *(int *)(unaff_RBX + 0x1c) = *(int *)(unaff_RBX + 0x1c) - (iVar3 >> (in_R9B & 0x1f));
        lVar2 = *(longlong *)(unaff_RSI + 0x40);
      }
      *(longlong *)(unaff_RBX + 0x40) = lVar2;
    }
  }
  if (*(int *)(unaff_RSI + 0x3c) != 0) {
    *(int32_t *)(unaff_RBX + 0x28) = 1;
  }
  return 0;
}



uint64_t
FUN_180830e10(uint64_t param_1,uint64_t param_2,longlong param_3,uint64_t param_4,int param_5,
             longlong param_6,longlong param_7,int *param_8,longlong param_9,longlong param_10,
             longlong param_11,longlong param_12)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  float *pfVar5;
  int32_t *puVar6;
  int iVar7;
  float *pfVar8;
  longlong lVar9;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong in_R10;
  longlong lVar14;
  longlong lVar15;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R14;
  longlong unaff_R15;
  int iStackX_20;
  int iStackX_24;
  int in_stack_000000c0;
  longlong *in_stack_000000c8;
  int in_stack_000000d0;
  int in_stack_000000d8;
  
  do {
    lVar9 = *(longlong *)(in_R10 + unaff_RBP);
    lVar13 = unaff_R15;
    if (3 < unaff_R13) {
      pfVar5 = (float *)(unaff_R14 + 4);
      lVar10 = lVar9 - unaff_R14;
      pfVar8 = (float *)(param_3 + (unaff_R13 + -2) * 4);
      lVar12 = param_3 - unaff_R14;
      lVar15 = (unaff_R13 - 4U >> 2) + 1;
      lVar13 = lVar15 * 4;
      do {
        pfVar5[-1] = *(float *)(lVar12 + -4 + (longlong)pfVar5) *
                     *(float *)(lVar10 + -4 + (longlong)pfVar5) + pfVar8[1] * pfVar5[-1];
        *pfVar5 = *(float *)(lVar12 + (longlong)pfVar5 + (lVar9 - param_3)) *
                  *(float *)(lVar12 + (longlong)pfVar5) + *pfVar8 * *pfVar5;
        pfVar5[1] = *(float *)(lVar12 + 4 + (longlong)pfVar5) *
                    *(float *)(lVar10 + 4 + (longlong)pfVar5) + pfVar8[-1] * pfVar5[1];
        pfVar1 = pfVar8 + -2;
        pfVar8 = pfVar8 + -4;
        pfVar5[2] = *(float *)(lVar12 + 8 + (longlong)pfVar5) *
                    *(float *)(lVar10 + 8 + (longlong)pfVar5) + *pfVar1 * pfVar5[2];
        pfVar5 = pfVar5 + 4;
        lVar15 = lVar15 + -1;
        unaff_RBP = param_6;
      } while (lVar15 != 0);
    }
    if (lVar13 < unaff_R13) {
      pfVar5 = (float *)(unaff_R14 + lVar13 * 4);
      pfVar8 = (float *)(param_3 + ((unaff_R13 - lVar13) + -1) * 4);
      lVar13 = unaff_R13 - lVar13;
      do {
        fVar2 = *pfVar8;
        pfVar1 = (float *)((longlong)pfVar5 + (param_3 - unaff_R14));
        pfVar8 = pfVar8 + -1;
        *pfVar5 = *(float *)((longlong)pfVar1 + (lVar9 - param_3)) * *pfVar1 + fVar2 * *pfVar5;
        pfVar5 = pfVar5 + 1;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    while( true ) {
      while( true ) {
        lVar13 = *(longlong *)(*(longlong *)(unaff_RBX + 8) + unaff_RBP) + (longlong)iStackX_24 * 4;
        lVar9 = *(longlong *)(*in_stack_000000c8 + unaff_RBP) + param_9 * 4;
        lVar10 = unaff_R15;
        if (3 < param_9) {
          lVar12 = lVar9 - lVar13;
          lVar15 = (param_9 - 4U >> 2) + 1;
          puVar6 = (int32_t *)(lVar13 + 4);
          lVar10 = lVar15 * 4;
          do {
            puVar6[-1] = *(int32_t *)(lVar12 + -4 + (longlong)puVar6);
            *puVar6 = *(int32_t *)(lVar12 + (longlong)puVar6);
            puVar6[1] = *(int32_t *)(lVar12 + 4 + (longlong)puVar6);
            puVar6[2] = *(int32_t *)(lVar12 + 8 + (longlong)puVar6);
            puVar6 = puVar6 + 4;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
        if (lVar10 < param_9) {
          puVar6 = (int32_t *)(lVar13 + lVar10 * 4);
          lVar10 = param_9 - lVar10;
          do {
            *puVar6 = *(int32_t *)((longlong)puVar6 + (lVar9 - lVar13));
            puVar6 = puVar6 + 1;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        unaff_RBP = unaff_RBP + 8;
        in_stack_000000d8 = in_stack_000000d8 + 1;
        if (*(int *)(param_10 + 4) <= in_stack_000000d8) {
          iVar7 = (int)unaff_R15;
          if (*(int *)(unaff_RBX + 0x38) == 0) {
            iVar7 = in_stack_000000c0;
          }
          *(int *)(unaff_RBX + 0x38) = iVar7;
          bVar4 = (byte)iStackX_20;
          if (*(int *)(unaff_RBX + 0x20) == -1) {
            *(int *)(unaff_RBX + 0x20) = iStackX_24;
            *(int *)(unaff_RBX + 0x1c) = iStackX_24;
          }
          else {
            *(int *)(unaff_RBX + 0x20) = param_5;
            iVar7 = *(int *)(param_12 + (longlong)*(int *)(unaff_RBX + 0x2c) * 4);
            iVar3 = *(int *)(param_12 + (longlong)*(int *)(unaff_RBX + 0x30) * 4);
            *(int *)(unaff_RBX + 0x1c) =
                 (((int)((iVar7 >> 0x1f & 3U) + iVar7) >> 2) +
                  ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2) >> (bVar4 & 0x1f)) + param_5;
          }
          if (*(longlong *)(param_8 + 0xc) != -1) {
            iVar7 = *(int *)(param_12 + (longlong)*(int *)(unaff_RBX + 0x2c) * 4);
            iVar3 = *(int *)(param_12 + (longlong)*(int *)(unaff_RBX + 0x30) * 4);
            unaff_R15 = (longlong)
                        (((int)((iVar7 >> 0x1f & 3U) + iVar7) >> 2) +
                        ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2)) + *(longlong *)(param_8 + 0xc);
          }
          *(longlong *)(param_8 + 0xc) = unaff_R15;
          if (*(longlong *)(unaff_RBX + 0x40) == -1) {
            lVar13 = in_stack_000000c8[8];
            if (lVar13 != -1) {
              *(longlong *)(unaff_RBX + 0x40) = lVar13;
              if (lVar13 < *(longlong *)(param_8 + 0xc)) {
                iVar7 = *(int *)(unaff_RBX + 0x1c);
                iVar3 = (int)(*(longlong *)(param_8 + 0xc) - lVar13 >> (bVar4 & 0x3f));
                if (*(int *)((longlong)in_stack_000000c8 + 0x3c) == 0) {
                  *(int *)(unaff_RBX + 0x20) = *(int *)(unaff_RBX + 0x20) + iVar3;
                  if (iVar7 < *(int *)(unaff_RBX + 0x20)) {
                    *(int *)(unaff_RBX + 0x20) = iVar7;
                  }
                }
                else {
                  *(int *)(unaff_RBX + 0x1c) = iVar7 - iVar3;
                }
              }
            }
          }
          else {
            iVar7 = *(int *)(param_12 + (longlong)*(int *)(unaff_RBX + 0x2c) * 4);
            iVar3 = *(int *)(param_12 + (longlong)*(int *)(unaff_RBX + 0x30) * 4);
            lVar9 = (longlong)
                    (((int)((iVar7 >> 0x1f & 3U) + iVar7) >> 2) +
                    ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2)) + *(longlong *)(unaff_RBX + 0x40);
            *(longlong *)(unaff_RBX + 0x40) = lVar9;
            lVar13 = in_stack_000000c8[8];
            if ((lVar13 != -1) && (lVar9 != lVar13)) {
              if ((lVar13 < lVar9) &&
                 ((iVar7 = (int)lVar9 - (int)lVar13, iVar7 != 0 &&
                  (*(int *)((longlong)in_stack_000000c8 + 0x3c) != 0)))) {
                *(int *)(unaff_RBX + 0x1c) = *(int *)(unaff_RBX + 0x1c) - (iVar7 >> (bVar4 & 0x1f));
                lVar13 = in_stack_000000c8[8];
              }
              *(longlong *)(unaff_RBX + 0x40) = lVar13;
            }
          }
          if (*(int *)((longlong)in_stack_000000c8 + 0x3c) != 0) {
            *(int32_t *)(unaff_RBX + 0x28) = 1;
          }
          return 0;
        }
        iVar7 = *(int *)(unaff_RBX + 0x30);
        if (*(int *)(unaff_RBX + 0x2c) == 0) break;
        if (iVar7 == 0) {
          lVar12 = func_0x00018081a750(*param_8 - iStackX_20);
          lVar13 = *(longlong *)(*(longlong *)(unaff_RBX + 8) + unaff_RBP) +
                   (((longlong)(in_stack_000000c0 / 2) - (longlong)(in_stack_000000d0 / 2)) +
                   param_11) * 4;
          lVar10 = *(longlong *)(*in_stack_000000c8 + unaff_RBP);
          lVar9 = unaff_R15;
          if (3 < unaff_R13) {
            pfVar5 = (float *)(lVar13 + 4);
            lVar15 = lVar10 - lVar13;
            pfVar8 = (float *)(lVar12 + (unaff_R13 + -2) * 4);
            lVar11 = lVar12 - lVar13;
            lVar14 = (unaff_R13 - 4U >> 2) + 1;
            lVar9 = lVar14 * 4;
            do {
              pfVar5[-1] = *(float *)(lVar11 + -4 + (longlong)pfVar5) *
                           *(float *)(lVar15 + -4 + (longlong)pfVar5) + pfVar8[1] * pfVar5[-1];
              *pfVar5 = *(float *)(lVar11 + (longlong)pfVar5 + (lVar10 - lVar12)) *
                        *(float *)(lVar11 + (longlong)pfVar5) + *pfVar8 * *pfVar5;
              pfVar5[1] = *(float *)(lVar11 + 4 + (longlong)pfVar5) *
                          *(float *)(lVar15 + 4 + (longlong)pfVar5) + pfVar8[-1] * pfVar5[1];
              pfVar1 = pfVar8 + -2;
              pfVar8 = pfVar8 + -4;
              pfVar5[2] = *(float *)(lVar11 + 8 + (longlong)pfVar5) *
                          *(float *)(lVar15 + 8 + (longlong)pfVar5) + *pfVar1 * pfVar5[2];
              pfVar5 = pfVar5 + 4;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
          }
          if (lVar9 < unaff_R13) {
            pfVar5 = (float *)(lVar13 + lVar9 * 4);
            pfVar8 = (float *)(lVar12 + ((unaff_R13 - lVar9) + -1) * 4);
            lVar9 = unaff_R13 - lVar9;
            do {
              fVar2 = *pfVar8;
              pfVar1 = (float *)((longlong)pfVar5 + (lVar12 - lVar13));
              pfVar8 = pfVar8 + -1;
              *pfVar5 = *(float *)((lVar10 - lVar12) + (longlong)pfVar1) * *pfVar1 + fVar2 * *pfVar5
              ;
              pfVar5 = pfVar5 + 1;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
          }
        }
        else {
          lVar12 = func_0x00018081a750(param_8[1] - iStackX_20);
          lVar13 = *(longlong *)(*(longlong *)(unaff_RBX + 8) + unaff_RBP) + param_11 * 4;
          lVar10 = *(longlong *)(*in_stack_000000c8 + unaff_RBP);
          lVar9 = unaff_R15;
          if (3 < unaff_R12) {
            pfVar5 = (float *)(lVar13 + 4);
            lVar15 = lVar10 - lVar13;
            pfVar8 = (float *)(lVar12 + (unaff_R12 + -2) * 4);
            lVar11 = lVar12 - lVar13;
            lVar14 = (unaff_R12 - 4U >> 2) + 1;
            lVar9 = lVar14 * 4;
            do {
              pfVar5[-1] = *(float *)((longlong)pfVar5 + lVar11 + -4) *
                           *(float *)((longlong)pfVar5 + lVar15 + -4) + pfVar8[1] * pfVar5[-1];
              *pfVar5 = *(float *)(lVar11 + (longlong)pfVar5 + (lVar10 - lVar12)) *
                        *(float *)(lVar11 + (longlong)pfVar5) + *pfVar8 * *pfVar5;
              pfVar5[1] = *(float *)(lVar11 + 4 + (longlong)pfVar5) *
                          *(float *)(lVar15 + 4 + (longlong)pfVar5) + pfVar8[-1] * pfVar5[1];
              pfVar1 = pfVar8 + -2;
              pfVar8 = pfVar8 + -4;
              pfVar5[2] = *(float *)(lVar11 + 8 + (longlong)pfVar5) *
                          *(float *)(lVar15 + 8 + (longlong)pfVar5) + *pfVar1 * pfVar5[2];
              pfVar5 = pfVar5 + 4;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
          }
          if (lVar9 < unaff_R12) {
            pfVar5 = (float *)(lVar13 + lVar9 * 4);
            pfVar8 = (float *)(lVar12 + ((unaff_R12 - lVar9) + -1) * 4);
            lVar9 = unaff_R12 - lVar9;
            do {
              pfVar1 = (float *)((lVar12 - lVar13) + (longlong)pfVar5);
              fVar2 = *pfVar8;
              pfVar8 = pfVar8 + -1;
              *pfVar5 = *(float *)((lVar10 - lVar12) + (longlong)pfVar1) * *pfVar1 + *pfVar5 * fVar2
              ;
              pfVar5 = pfVar5 + 1;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
          }
        }
      }
      param_3 = func_0x00018081a750(*param_8 - iStackX_20);
      in_R10 = *in_stack_000000c8;
      unaff_R14 = *(longlong *)(*(longlong *)(unaff_RBX + 8) + unaff_RBP) + param_11 * 4;
      param_6 = unaff_RBP;
      if (iVar7 == 0) break;
      lVar9 = 0;
      lVar13 = *(longlong *)(in_R10 + unaff_RBP) +
               ((longlong)(in_stack_000000c0 / 2) - (longlong)(in_stack_000000d0 / 2)) * 4;
      if (3 < unaff_R13) {
        pfVar5 = (float *)(unaff_R14 + 4);
        lVar12 = lVar13 - unaff_R14;
        pfVar8 = (float *)(param_3 + (unaff_R13 + -2) * 4);
        lVar15 = param_3 - unaff_R14;
        lVar10 = (unaff_R13 - 4U >> 2) + 1;
        lVar9 = lVar10 * 4;
        do {
          pfVar5[-1] = *(float *)(lVar15 + -4 + (longlong)pfVar5) *
                       *(float *)(lVar12 + -4 + (longlong)pfVar5) + pfVar8[1] * pfVar5[-1];
          *pfVar5 = *(float *)(lVar15 + (longlong)pfVar5 + (lVar13 - param_3)) *
                    *(float *)(lVar15 + (longlong)pfVar5) + *pfVar8 * *pfVar5;
          pfVar5[1] = *(float *)(lVar15 + 4 + (longlong)pfVar5) *
                      *(float *)(lVar12 + 4 + (longlong)pfVar5) + pfVar8[-1] * pfVar5[1];
          pfVar1 = pfVar8 + -2;
          pfVar8 = pfVar8 + -4;
          pfVar5[2] = *(float *)(lVar15 + 8 + (longlong)pfVar5) *
                      *(float *)(lVar12 + 8 + (longlong)pfVar5) + *pfVar1 * pfVar5[2];
          pfVar5 = pfVar5 + 4;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      if (lVar9 < unaff_R13) {
        pfVar5 = (float *)(unaff_R14 + lVar9 * 4);
        pfVar8 = (float *)(param_3 + ((unaff_R13 - lVar9) + -1) * 4);
        lVar10 = unaff_R13 - lVar9;
        do {
          pfVar1 = (float *)((param_3 - unaff_R14) + (longlong)pfVar5);
          fVar2 = *pfVar8;
          pfVar8 = pfVar8 + -1;
          *pfVar5 = *(float *)((lVar13 - param_3) + (longlong)pfVar1) * *pfVar1 + *pfVar5 * fVar2;
          pfVar5 = pfVar5 + 1;
          lVar10 = lVar10 + -1;
          lVar9 = unaff_R13;
        } while (lVar10 != 0);
      }
      lVar10 = (longlong)(in_stack_000000d0 / 2 + in_stack_000000c0 / 2);
      if (lVar9 < lVar10) {
        if (3 < lVar10 - lVar9) {
          puVar6 = (int32_t *)(unaff_R14 + (lVar9 + 1) * 4);
          lVar12 = lVar13 - unaff_R14;
          lVar15 = ((lVar10 - lVar9) - 4U >> 2) + 1;
          lVar9 = lVar9 + lVar15 * 4;
          do {
            puVar6[-1] = *(int32_t *)(lVar12 + -4 + (longlong)puVar6);
            *puVar6 = *(int32_t *)(lVar12 + (longlong)puVar6);
            puVar6[1] = *(int32_t *)(lVar12 + 4 + (longlong)puVar6);
            puVar6[2] = *(int32_t *)(lVar12 + 8 + (longlong)puVar6);
            puVar6 = puVar6 + 4;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
        if (lVar9 < lVar10) {
          puVar6 = (int32_t *)(unaff_R14 + lVar9 * 4);
          lVar10 = lVar10 - lVar9;
          do {
            *puVar6 = *(int32_t *)((lVar13 - unaff_R14) + (longlong)puVar6);
            puVar6 = puVar6 + 1;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
      }
      unaff_R15 = 0;
      unaff_R12 = param_7;
    }
  } while( true );
}



uint64_t FUN_180830f45(void)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong unaff_RBX;
  longlong unaff_RSI;
  byte in_R9B;
  longlong in_R10;
  longlong in_R11;
  longlong unaff_R15;
  int in_stack_00000028;
  
  *(int *)(unaff_RBX + 0x20) = in_stack_00000028;
  iVar3 = *(int *)(in_R11 + (longlong)*(int *)(unaff_RBX + 0x2c) * 4);
  iVar1 = *(int *)(in_R11 + (longlong)*(int *)(unaff_RBX + 0x30) * 4);
  *(int *)(unaff_RBX + 0x1c) =
       (((int)((iVar3 >> 0x1f & 3U) + iVar3) >> 2) + ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2) >>
       (in_R9B & 0x1f)) + in_stack_00000028;
  if (*(longlong *)(in_R10 + 0x30) != -1) {
    iVar3 = *(int *)(in_R11 + (longlong)*(int *)(unaff_RBX + 0x2c) * 4);
    iVar1 = *(int *)(in_R11 + (longlong)*(int *)(unaff_RBX + 0x30) * 4);
    unaff_R15 = (longlong)
                (((int)((iVar3 >> 0x1f & 3U) + iVar3) >> 2) +
                ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2)) + *(longlong *)(in_R10 + 0x30);
  }
  *(longlong *)(in_R10 + 0x30) = unaff_R15;
  if (*(longlong *)(unaff_RBX + 0x40) == -1) {
    lVar2 = *(longlong *)(unaff_RSI + 0x40);
    if (lVar2 != -1) {
      *(longlong *)(unaff_RBX + 0x40) = lVar2;
      if (lVar2 < *(longlong *)(in_R10 + 0x30)) {
        iVar3 = *(int *)(unaff_RBX + 0x1c);
        iVar1 = (int)(*(longlong *)(in_R10 + 0x30) - lVar2 >> (in_R9B & 0x3f));
        if (*(int *)(unaff_RSI + 0x3c) == 0) {
          *(int *)(unaff_RBX + 0x20) = *(int *)(unaff_RBX + 0x20) + iVar1;
          if (iVar3 < *(int *)(unaff_RBX + 0x20)) {
            *(int *)(unaff_RBX + 0x20) = iVar3;
          }
        }
        else {
          *(int *)(unaff_RBX + 0x1c) = iVar3 - iVar1;
        }
      }
    }
  }
  else {
    iVar3 = *(int *)(in_R11 + (longlong)*(int *)(unaff_RBX + 0x2c) * 4);
    iVar1 = *(int *)(in_R11 + (longlong)*(int *)(unaff_RBX + 0x30) * 4);
    lVar4 = (longlong)
            (((int)((iVar3 >> 0x1f & 3U) + iVar3) >> 2) + ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2)
            ) + *(longlong *)(unaff_RBX + 0x40);
    *(longlong *)(unaff_RBX + 0x40) = lVar4;
    lVar2 = *(longlong *)(unaff_RSI + 0x40);
    if ((lVar2 != -1) && (lVar4 != lVar2)) {
      if ((lVar2 < lVar4) &&
         ((iVar3 = (int)lVar4 - (int)lVar2, iVar3 != 0 && (*(int *)(unaff_RSI + 0x3c) != 0)))) {
        *(int *)(unaff_RBX + 0x1c) = *(int *)(unaff_RBX + 0x1c) - (iVar3 >> (in_R9B & 0x1f));
        lVar2 = *(longlong *)(unaff_RSI + 0x40);
      }
      *(longlong *)(unaff_RBX + 0x40) = lVar2;
    }
  }
  if (*(int *)(unaff_RSI + 0x3c) != 0) {
    *(int32_t *)(unaff_RBX + 0x28) = 1;
  }
  return 0;
}



uint64_t FUN_180830f89(void)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong unaff_RBX;
  longlong unaff_RSI;
  byte in_R9B;
  longlong in_R10;
  longlong in_R11;
  longlong unaff_R15;
  
  if (*(longlong *)(in_R10 + 0x30) != -1) {
    iVar3 = *(int *)(in_R11 + (longlong)*(int *)(unaff_RBX + 0x2c) * 4);
    iVar1 = *(int *)(in_R11 + (longlong)*(int *)(unaff_RBX + 0x30) * 4);
    unaff_R15 = (longlong)
                (((int)((iVar3 >> 0x1f & 3U) + iVar3) >> 2) +
                ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2)) + *(longlong *)(in_R10 + 0x30);
  }
  *(longlong *)(in_R10 + 0x30) = unaff_R15;
  if (*(longlong *)(unaff_RBX + 0x40) == -1) {
    lVar2 = *(longlong *)(unaff_RSI + 0x40);
    if (lVar2 != -1) {
      *(longlong *)(unaff_RBX + 0x40) = lVar2;
      if (lVar2 < *(longlong *)(in_R10 + 0x30)) {
        iVar3 = *(int *)(unaff_RBX + 0x1c);
        iVar1 = (int)(*(longlong *)(in_R10 + 0x30) - lVar2 >> (in_R9B & 0x3f));
        if (*(int *)(unaff_RSI + 0x3c) == 0) {
          *(int *)(unaff_RBX + 0x20) = *(int *)(unaff_RBX + 0x20) + iVar1;
          if (iVar3 < *(int *)(unaff_RBX + 0x20)) {
            *(int *)(unaff_RBX + 0x20) = iVar3;
          }
        }
        else {
          *(int *)(unaff_RBX + 0x1c) = iVar3 - iVar1;
        }
      }
    }
  }
  else {
    iVar3 = *(int *)(in_R11 + (longlong)*(int *)(unaff_RBX + 0x2c) * 4);
    iVar1 = *(int *)(in_R11 + (longlong)*(int *)(unaff_RBX + 0x30) * 4);
    lVar4 = (longlong)
            (((int)((iVar3 >> 0x1f & 3U) + iVar3) >> 2) + ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2)
            ) + *(longlong *)(unaff_RBX + 0x40);
    *(longlong *)(unaff_RBX + 0x40) = lVar4;
    lVar2 = *(longlong *)(unaff_RSI + 0x40);
    if ((lVar2 != -1) && (lVar4 != lVar2)) {
      if ((lVar2 < lVar4) &&
         ((iVar3 = (int)lVar4 - (int)lVar2, iVar3 != 0 && (*(int *)(unaff_RSI + 0x3c) != 0)))) {
        *(int *)(unaff_RBX + 0x1c) = *(int *)(unaff_RBX + 0x1c) - (iVar3 >> (in_R9B & 0x1f));
        lVar2 = *(longlong *)(unaff_RSI + 0x40);
      }
      *(longlong *)(unaff_RBX + 0x40) = lVar2;
    }
  }
  if (*(int *)(unaff_RSI + 0x3c) != 0) {
    *(int32_t *)(unaff_RBX + 0x28) = 1;
  }
  return 0;
}



uint64_t FUN_180830fd1(void)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong unaff_RBX;
  longlong unaff_RSI;
  byte in_R9B;
  longlong in_R10;
  
  lVar2 = *(longlong *)(unaff_RSI + 0x40);
  if (lVar2 != -1) {
    *(longlong *)(unaff_RBX + 0x40) = lVar2;
    if (lVar2 < *(longlong *)(in_R10 + 0x30)) {
      iVar1 = *(int *)(unaff_RBX + 0x1c);
      iVar3 = (int)(*(longlong *)(in_R10 + 0x30) - lVar2 >> (in_R9B & 0x3f));
      if (*(int *)(unaff_RSI + 0x3c) == 0) {
        *(int *)(unaff_RBX + 0x20) = *(int *)(unaff_RBX + 0x20) + iVar3;
        if (iVar1 < *(int *)(unaff_RBX + 0x20)) {
          *(int *)(unaff_RBX + 0x20) = iVar1;
        }
      }
      else {
        *(int *)(unaff_RBX + 0x1c) = iVar1 - iVar3;
      }
    }
  }
  if (*(int *)(unaff_RSI + 0x3c) != 0) {
    *(int32_t *)(unaff_RBX + 0x28) = 1;
  }
  return 0;
}



int FUN_1808310a0(uint64_t param_1,longlong *param_2)

{
  int32_t uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  
  iVar4 = FUN_1808313c0();
  if (iVar4 != 0) {
    FUN_180830440(param_1,param_2);
    return iVar4;
  }
  if (((param_2[0xe] != 0) && (*param_2 != 0)) &&
     (lVar2 = *(longlong *)(*param_2 + 0x20), lVar2 != 0)) {
    uVar1 = *(int32_t *)(lVar2 + 0x1328);
    iVar4 = *(int *)(lVar2 + 4);
    *(int32_t *)(param_2 + 4) = 0xffffffff;
    param_2[8] = -1;
    bVar3 = (byte)uVar1;
    param_2[9] = -1;
    iVar4 = iVar4 >> (bVar3 + 1 & 0x1f);
    *(int *)(param_2 + 7) = iVar4;
    *(int *)((longlong)param_2 + 0x1c) = iVar4 >> (bVar3 & 0x1f);
    *(int32_t *)(param_2 + 5) = 0;
    *(uint64_t *)(param_2[0xe] + 0x30) = 0xffffffffffffffff;
  }
  return 0;
}



int FUN_180831150(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if ((-1 < (int)param_1[4]) && ((int)param_1[4] < *(int *)((longlong)param_1 + 0x1c))) {
    if (param_2 != (longlong *)0x0) {
      lVar1 = *param_1;
      iVar3 = 0;
      if (0 < *(int *)(lVar1 + 4)) {
        lVar2 = 0;
        do {
          iVar3 = iVar3 + 1;
          *(longlong *)(lVar2 + param_1[2]) =
               *(longlong *)(param_1[1] + -8 + lVar2 + 8) + (longlong)(int)param_1[4] * 4;
          lVar2 = lVar2 + 8;
        } while (iVar3 < *(int *)(lVar1 + 4));
      }
      *param_2 = param_1[2];
    }
    return *(int *)((longlong)param_1 + 0x1c) - (int)param_1[4];
  }
  return 0;
}



longlong FUN_180831260(uint64_t param_1,longlong param_2,int param_3)

{
  uint64_t *puVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_2 + 0x60);
  uVar4 = param_3 + 7U & 0xfffffff8;
  if (*(int *)(param_2 + 100) < (int)(iVar3 + uVar4)) {
    if (*(longlong *)(param_2 + 0x58) != 0) {
      puVar1 = (uint64_t *)FUN_1807c4200(param_1,0x10);
      if (puVar1 == (uint64_t *)0x0) {
        return 0;
      }
      *(int *)(param_2 + 0x68) = *(int *)(param_2 + 0x68) + *(int *)(param_2 + 0x60);
      puVar1[1] = *(uint64_t *)(param_2 + 0x70);
      *puVar1 = *(uint64_t *)(param_2 + 0x58);
      *(uint64_t **)(param_2 + 0x70) = puVar1;
    }
    *(uint *)(param_2 + 100) = uVar4;
    lVar2 = FUN_1807c4200(param_1);
    *(longlong *)(param_2 + 0x58) = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    iVar3 = 0;
  }
  *(uint *)(param_2 + 0x60) = iVar3 + uVar4;
  return (longlong)iVar3 + *(longlong *)(param_2 + 0x58);
}



uint64_t FUN_180831300(uint64_t param_1,longlong param_2)

{
  longlong lVar1;
  uint64_t uVar2;
  
  uVar2 = 0;
  if (*(uint64_t **)(param_2 + 0x70) != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_1807c41d0(param_1,**(uint64_t **)(param_2 + 0x70));
  }
  if (*(int *)(param_2 + 0x68) != 0) {
    lVar1 = FUN_1807c4260(param_1,*(uint64_t *)(param_2 + 0x58),
                          *(int *)(param_2 + 100) + *(int *)(param_2 + 0x68));
    *(longlong *)(param_2 + 0x58) = lVar1;
    *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + *(int *)(param_2 + 0x68);
    *(int32_t *)(param_2 + 0x68) = 0;
    uVar2 = 0xffffff75;
    if (lVar1 != 0) {
      uVar2 = 0;
    }
  }
  *(int32_t *)(param_2 + 0x60) = 0;
  *(uint64_t *)(param_2 + 0x70) = 0;
  return uVar2;
}



ulonglong FUN_180831311(uint64_t param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong unaff_R15;
  
  uVar2 = unaff_R15 & 0xffffffff;
  if (*(uint64_t **)(param_2 + 0x70) != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_1807c41d0(param_1,**(uint64_t **)(param_2 + 0x70));
  }
  if (*(int *)(param_2 + 0x68) != 0) {
    lVar1 = FUN_1807c4260(param_1,*(uint64_t *)(param_2 + 0x58),
                          *(int *)(param_2 + 100) + *(int *)(param_2 + 0x68));
    *(longlong *)(param_2 + 0x58) = lVar1;
    *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + *(int *)(param_2 + 0x68);
    *(int *)(param_2 + 0x68) = (int)unaff_R15;
    uVar2 = 0xffffff75;
    if (lVar1 != 0) {
      uVar2 = unaff_R15 & 0xffffffff;
    }
  }
  *(int *)(param_2 + 0x60) = (int)unaff_R15;
  *(ulonglong *)(param_2 + 0x70) = unaff_R15;
  return uVar2;
}







