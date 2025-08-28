#include "TaleWorlds.Native.Split.h"

// 99_part_12_part021.c - 8 个函数

// 函数: void FUN_1807d8a30(float *param_1,uint param_2,int param_3,float *param_4,float *param_5)
void FUN_1807d8a30(float *param_1,uint param_2,int param_3,float *param_4,float *param_5)

{
  float *pfVar1;
  int iVar2;
  longlong lVar3;
  float *pfVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fStackX_18;
  float fStack_d8;
  float fStack_d4;
  float afStack_d0 [7];
  float fStack_b4;
  
  iVar2 = (int)param_2 >> 2;
  if (param_3 == 1) {
    fVar12 = *param_4;
    fVar19 = *param_5;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      fVar13 = ABS(*param_1);
      fVar15 = fVar13;
      if (fVar13 <= fVar12) {
        fVar15 = fVar12;
      }
      fVar18 = ABS(param_1[1]);
      fVar12 = fVar18;
      if (fVar18 <= fVar15) {
        fVar12 = fVar15;
      }
      fVar14 = ABS(param_1[2]);
      fVar15 = fVar14;
      if (fVar14 <= fVar12) {
        fVar15 = fVar12;
      }
      fVar8 = ABS(param_1[3]);
      param_1 = param_1 + 4;
      fVar12 = fVar8;
      if (fVar8 <= fVar15) {
        fVar12 = fVar15;
      }
      fVar19 = fVar19 + fVar13 * fVar13 + fVar18 * fVar18 + fVar14 * fVar14 + fVar8 * fVar8;
    }
    for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
      fVar15 = *param_1;
      param_1 = param_1 + 1;
      fVar15 = ABS(fVar15);
      fVar13 = fVar15;
      if (fVar15 <= fVar12) {
        fVar13 = fVar12;
      }
      fVar19 = fVar19 + fVar15 * fVar15;
      fVar12 = fVar13;
    }
    *param_5 = fVar19;
    *param_4 = fVar12;
    return;
  }
  if (param_3 == 2) {
    fVar12 = *param_4;
    fVar19 = param_4[1];
    fVar15 = *param_5;
    fVar13 = param_5[1];
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      fVar14 = ABS(*param_1);
      fVar8 = ABS(param_1[1]);
      fVar18 = fVar14;
      if (fVar14 <= fVar12) {
        fVar18 = fVar12;
      }
      fVar9 = ABS(param_1[2]);
      fVar12 = fVar8;
      if (fVar8 <= fVar19) {
        fVar12 = fVar19;
      }
      fVar19 = fVar9;
      if (fVar9 <= fVar18) {
        fVar19 = fVar18;
      }
      fVar16 = ABS(param_1[3]);
      fVar10 = ABS(param_1[4]);
      fVar18 = fVar16;
      if (fVar16 <= fVar12) {
        fVar18 = fVar12;
      }
      fVar21 = fVar10;
      if (fVar10 <= fVar19) {
        fVar21 = fVar19;
      }
      fVar17 = ABS(param_1[5]);
      fVar11 = ABS(param_1[6]);
      fVar22 = fVar17;
      if (fVar17 <= fVar18) {
        fVar22 = fVar18;
      }
      fVar12 = fVar11;
      if (fVar11 <= fVar21) {
        fVar12 = fVar21;
      }
      fVar18 = ABS(param_1[7]);
      param_1 = param_1 + 8;
      fVar19 = fVar18;
      if (fVar18 <= fVar22) {
        fVar19 = fVar22;
      }
      fVar15 = fVar15 + fVar14 * fVar14 + fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11;
      fVar13 = fVar13 + fVar8 * fVar8 + fVar16 * fVar16 + fVar17 * fVar17 + fVar18 * fVar18;
    }
    for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
      fVar14 = ABS(*param_1);
      fVar8 = ABS(param_1[1]);
      param_1 = param_1 + 2;
      fVar18 = fVar14;
      if (fVar14 <= fVar12) {
        fVar18 = fVar12;
      }
      fVar9 = fVar8;
      if (fVar8 <= fVar19) {
        fVar9 = fVar19;
      }
      fVar15 = fVar15 + fVar14 * fVar14;
      fVar13 = fVar13 + fVar8 * fVar8;
      fVar12 = fVar18;
      fVar19 = fVar9;
    }
    *param_4 = fVar12;
    param_4[1] = fVar19;
    *param_5 = fVar15;
    param_5[1] = fVar13;
  }
  else if (param_3 == 6) {
    if (param_2 != 0) {
      param_1 = param_1 + 2;
      fVar12 = param_4[5];
      fVar19 = param_5[1];
      fVar15 = param_5[2];
      fVar13 = param_5[3];
      fVar18 = param_5[4];
      fVar14 = param_5[5];
      fVar8 = param_4[1];
      fStackX_18 = param_4[2];
      fStack_d8 = param_4[3];
      fStack_d4 = param_4[4];
      do {
        fVar10 = ABS(param_1[-2]);
        fVar9 = fVar10;
        if (fVar10 <= *param_4) {
          fVar9 = *param_4;
        }
        fVar16 = param_1[1];
        fVar17 = ABS(param_1[-1]);
        fVar21 = param_1[2];
        fVar22 = param_1[3];
        fVar11 = fVar17;
        if (fVar17 <= fVar8) {
          fVar11 = fVar8;
        }
        fVar20 = ABS(*param_1);
        param_1 = param_1 + 6;
        *param_4 = fVar9;
        fVar16 = ABS(fVar16);
        fVar21 = ABS(fVar21);
        fVar19 = fVar19 + fVar17 * fVar17;
        fVar22 = ABS(fVar22);
        if (fVar12 <= fVar22) {
          fVar12 = fVar22;
        }
        fVar15 = fVar15 + fVar20 * fVar20;
        fVar13 = fVar13 + fVar16 * fVar16;
        if (fVar20 <= fStackX_18) {
          fVar20 = fStackX_18;
        }
        fVar14 = fVar14 + fVar22 * fVar22;
        if (fVar16 <= fStack_d8) {
          fVar16 = fStack_d8;
        }
        *param_5 = fVar10 * fVar10 + *param_5;
        fVar18 = fVar18 + fVar21 * fVar21;
        if (fVar21 <= fStack_d4) {
          fVar21 = fStack_d4;
        }
        param_2 = param_2 - 1;
        fVar8 = fVar11;
        fStackX_18 = fVar20;
        fStack_d8 = fVar16;
        fStack_d4 = fVar21;
      } while (param_2 != 0);
      param_4[2] = fVar20;
      param_4[1] = fVar11;
      param_5[2] = fVar15;
      param_5[3] = fVar13;
      param_5[4] = fVar18;
      param_5[5] = fVar14;
      param_4[4] = fVar21;
      param_5[1] = fVar19;
      param_4[3] = fVar16;
      param_4[5] = fVar12;
    }
  }
  else if (param_3 == 8) {
    if (param_2 != 0) {
      fVar12 = param_4[7];
      lVar3 = 0;
      fVar19 = param_4[6];
      fVar15 = param_4[5];
      fVar13 = param_4[4];
      fVar18 = param_4[3];
      fVar14 = param_4[2];
      fVar8 = param_4[1];
      fVar9 = *param_4;
      do {
        do {
          pfVar4 = param_1 + lVar3;
          fVar10 = pfVar4[1];
          fVar16 = pfVar4[2];
          fVar21 = pfVar4[3];
          afStack_d0[lVar3] = ABS(*pfVar4);
          afStack_d0[lVar3 + 1] = ABS(fVar10);
          afStack_d0[lVar3 + 2] = ABS(fVar16);
          afStack_d0[lVar3 + 3] = ABS(fVar21);
          lVar3 = lVar3 + 4;
        } while (lVar3 < 8);
        fVar10 = afStack_d0[0];
        if (afStack_d0[0] <= fVar9) {
          fVar10 = fVar9;
        }
        fVar16 = afStack_d0[1];
        if (afStack_d0[1] <= fVar8) {
          fVar16 = fVar8;
        }
        lVar3 = 2;
        fVar21 = afStack_d0[2];
        if (afStack_d0[2] <= fVar14) {
          fVar21 = fVar14;
        }
        fVar22 = afStack_d0[3];
        if (afStack_d0[3] <= fVar18) {
          fVar22 = fVar18;
        }
        fVar11 = afStack_d0[4];
        if (afStack_d0[4] <= fVar13) {
          fVar11 = fVar13;
        }
        fVar17 = afStack_d0[5];
        if (afStack_d0[5] <= fVar15) {
          fVar17 = fVar15;
        }
        fVar20 = afStack_d0[6];
        if (afStack_d0[6] <= fVar19) {
          fVar20 = fVar19;
        }
        pfVar4 = param_5;
        fVar19 = fStack_b4;
        if (fStack_b4 <= fVar12) {
          fVar19 = fVar12;
        }
        do {
          fVar12 = fVar19;
          pfVar1 = (float *)(((longlong)afStack_d0 - (longlong)param_5) + (longlong)pfVar4);
          fVar19 = pfVar1[1];
          fVar15 = pfVar1[2];
          fVar13 = pfVar1[3];
          *pfVar4 = *pfVar1 * *pfVar1 + *pfVar4;
          pfVar4[1] = fVar19 * fVar19 + pfVar4[1];
          pfVar4[2] = fVar15 * fVar15 + pfVar4[2];
          pfVar4[3] = fVar13 * fVar13 + pfVar4[3];
          lVar3 = lVar3 + -1;
          pfVar4 = pfVar4 + 4;
          fVar19 = fVar12;
        } while (lVar3 != 0);
        param_1 = param_1 + 8;
        param_2 = param_2 - 1;
        lVar3 = 0;
        fVar19 = fVar20;
        fVar15 = fVar17;
        fVar13 = fVar11;
        fVar18 = fVar22;
        fVar14 = fVar21;
        fVar8 = fVar16;
        fVar9 = fVar10;
      } while (param_2 != 0);
      *param_4 = fVar10;
      param_4[1] = fVar16;
      param_4[2] = fVar21;
      param_4[3] = fVar22;
      param_4[4] = fVar11;
      param_4[5] = fVar17;
      param_4[6] = fVar20;
      param_4[7] = fVar12;
    }
  }
  else {
    uVar6 = 0;
    uVar7 = 0;
    for (iVar2 = param_2 * param_3; iVar2 != 0; iVar2 = iVar2 + -1) {
      uVar5 = (ulonglong)uVar7;
      uVar7 = uVar7 + 1;
      fVar19 = ABS(param_1[uVar5]);
      fVar12 = fVar19;
      if (fVar19 <= param_4[uVar6]) {
        fVar12 = param_4[uVar6];
      }
      fVar15 = param_5[uVar6];
      param_4[uVar6] = fVar12;
      param_5[uVar6] = fVar19 * fVar19 + fVar15;
      uVar6 = uVar6 + 1 & (int)((uVar6 + 1) - param_3) >> 0x1f;
    }
  }
  return;
}






// 函数: void FUN_1807d8b2d(float *param_1,uint param_2,undefined8 param_3,float *param_4)
void FUN_1807d8b2d(float *param_1,uint param_2,undefined8 param_3,float *param_4)

{
  float *pfVar1;
  int iVar2;
  longlong lVar3;
  float *pfVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int in_R11D;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float afStackX_8 [7];
  float fStackX_24;
  float fStack00000000000000f0;
  float *in_stack_00000100;
  
  if (in_R11D == 2) {
    fVar13 = *param_4;
    fVar24 = param_4[1];
    fVar22 = *in_stack_00000100;
    fVar23 = in_stack_00000100[1];
    for (iVar2 = (int)param_2 >> 2; iVar2 != 0; iVar2 = iVar2 + -1) {
      fVar8 = ABS(*param_1);
      fVar14 = ABS(param_1[1]);
      fVar17 = fVar8;
      if (fVar8 <= fVar13) {
        fVar17 = fVar13;
      }
      fVar9 = ABS(param_1[2]);
      fVar13 = fVar14;
      if (fVar14 <= fVar24) {
        fVar13 = fVar24;
      }
      fVar24 = fVar9;
      if (fVar9 <= fVar17) {
        fVar24 = fVar17;
      }
      fVar15 = ABS(param_1[3]);
      fVar10 = ABS(param_1[4]);
      fVar17 = fVar15;
      if (fVar15 <= fVar13) {
        fVar17 = fVar13;
      }
      fVar18 = fVar10;
      if (fVar10 <= fVar24) {
        fVar18 = fVar24;
      }
      fVar16 = ABS(param_1[5]);
      fVar11 = ABS(param_1[6]);
      fVar21 = fVar16;
      if (fVar16 <= fVar17) {
        fVar21 = fVar17;
      }
      fVar13 = fVar11;
      if (fVar11 <= fVar18) {
        fVar13 = fVar18;
      }
      fVar17 = ABS(param_1[7]);
      param_1 = param_1 + 8;
      fVar24 = fVar17;
      if (fVar17 <= fVar21) {
        fVar24 = fVar21;
      }
      fVar22 = fVar22 + fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11;
      fVar23 = fVar23 + fVar14 * fVar14 + fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17;
    }
    for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
      fVar8 = ABS(*param_1);
      fVar14 = ABS(param_1[1]);
      param_1 = param_1 + 2;
      fVar17 = fVar8;
      if (fVar8 <= fVar13) {
        fVar17 = fVar13;
      }
      fVar9 = fVar14;
      if (fVar14 <= fVar24) {
        fVar9 = fVar24;
      }
      fVar22 = fVar22 + fVar8 * fVar8;
      fVar23 = fVar23 + fVar14 * fVar14;
      fVar13 = fVar17;
      fVar24 = fVar9;
    }
    *param_4 = fVar13;
    param_4[1] = fVar24;
    *in_stack_00000100 = fVar22;
    in_stack_00000100[1] = fVar23;
  }
  else if (in_R11D == 6) {
    if (param_2 != 0) {
      param_1 = param_1 + 2;
      fVar13 = param_4[5];
      fVar24 = in_stack_00000100[1];
      fVar22 = in_stack_00000100[2];
      fVar23 = in_stack_00000100[3];
      fVar17 = in_stack_00000100[4];
      fVar8 = in_stack_00000100[5];
      fVar14 = param_4[1];
      fVar9 = param_4[3];
      fVar10 = param_4[4];
      fStack00000000000000f0 = param_4[2];
      do {
        fVar18 = ABS(param_1[-2]);
        fVar15 = fVar18;
        if (fVar18 <= *param_4) {
          fVar15 = *param_4;
        }
        fVar21 = param_1[1];
        fVar19 = ABS(param_1[-1]);
        fVar11 = param_1[2];
        fVar16 = param_1[3];
        fVar12 = fVar19;
        if (fVar19 <= fVar14) {
          fVar12 = fVar14;
        }
        fVar20 = ABS(*param_1);
        param_1 = param_1 + 6;
        *param_4 = fVar15;
        fVar21 = ABS(fVar21);
        fVar11 = ABS(fVar11);
        fVar24 = fVar24 + fVar19 * fVar19;
        fVar16 = ABS(fVar16);
        if (fVar13 <= fVar16) {
          fVar13 = fVar16;
        }
        fVar22 = fVar22 + fVar20 * fVar20;
        fVar23 = fVar23 + fVar21 * fVar21;
        if (fVar20 <= fStack00000000000000f0) {
          fVar20 = fStack00000000000000f0;
        }
        fVar8 = fVar8 + fVar16 * fVar16;
        if (fVar21 <= fVar9) {
          fVar21 = fVar9;
        }
        *in_stack_00000100 = fVar18 * fVar18 + *in_stack_00000100;
        fVar17 = fVar17 + fVar11 * fVar11;
        if (fVar11 <= fVar10) {
          fVar11 = fVar10;
        }
        param_2 = param_2 - 1;
        fVar14 = fVar12;
        fVar9 = fVar21;
        fVar10 = fVar11;
        fStack00000000000000f0 = fVar20;
      } while (param_2 != 0);
      param_4[2] = fVar20;
      param_4[1] = fVar12;
      in_stack_00000100[2] = fVar22;
      in_stack_00000100[3] = fVar23;
      in_stack_00000100[4] = fVar17;
      in_stack_00000100[5] = fVar8;
      param_4[4] = fVar11;
      in_stack_00000100[1] = fVar24;
      param_4[3] = fVar21;
      param_4[5] = fVar13;
    }
  }
  else if (in_R11D == 8) {
    if (param_2 != 0) {
      fVar13 = param_4[7];
      lVar3 = 0;
      fVar24 = param_4[6];
      fVar22 = param_4[5];
      fVar23 = param_4[4];
      fVar17 = param_4[3];
      fVar8 = param_4[2];
      fVar14 = param_4[1];
      fVar9 = *param_4;
      do {
        do {
          pfVar4 = param_1 + lVar3;
          fVar10 = pfVar4[1];
          fVar15 = pfVar4[2];
          fVar18 = pfVar4[3];
          afStackX_8[lVar3] = ABS(*pfVar4);
          afStackX_8[lVar3 + 1] = ABS(fVar10);
          afStackX_8[lVar3 + 2] = ABS(fVar15);
          afStackX_8[lVar3 + 3] = ABS(fVar18);
          lVar3 = lVar3 + 4;
        } while (lVar3 < 8);
        fVar10 = afStackX_8[0];
        if (afStackX_8[0] <= fVar9) {
          fVar10 = fVar9;
        }
        fVar15 = afStackX_8[1];
        if (afStackX_8[1] <= fVar14) {
          fVar15 = fVar14;
        }
        lVar3 = 2;
        fVar18 = afStackX_8[2];
        if (afStackX_8[2] <= fVar8) {
          fVar18 = fVar8;
        }
        fVar21 = afStackX_8[3];
        if (afStackX_8[3] <= fVar17) {
          fVar21 = fVar17;
        }
        fVar11 = afStackX_8[4];
        if (afStackX_8[4] <= fVar23) {
          fVar11 = fVar23;
        }
        fVar16 = afStackX_8[5];
        if (afStackX_8[5] <= fVar22) {
          fVar16 = fVar22;
        }
        fVar12 = afStackX_8[6];
        if (afStackX_8[6] <= fVar24) {
          fVar12 = fVar24;
        }
        pfVar4 = in_stack_00000100;
        fVar24 = fStackX_24;
        if (fStackX_24 <= fVar13) {
          fVar24 = fVar13;
        }
        do {
          fVar13 = fVar24;
          pfVar1 = (float *)(((longlong)afStackX_8 - (longlong)in_stack_00000100) + (longlong)pfVar4
                            );
          fVar24 = pfVar1[1];
          fVar22 = pfVar1[2];
          fVar23 = pfVar1[3];
          *pfVar4 = *pfVar1 * *pfVar1 + *pfVar4;
          pfVar4[1] = fVar24 * fVar24 + pfVar4[1];
          pfVar4[2] = fVar22 * fVar22 + pfVar4[2];
          pfVar4[3] = fVar23 * fVar23 + pfVar4[3];
          lVar3 = lVar3 + -1;
          pfVar4 = pfVar4 + 4;
          fVar24 = fVar13;
        } while (lVar3 != 0);
        param_1 = param_1 + 8;
        param_2 = param_2 - 1;
        lVar3 = 0;
        fVar24 = fVar12;
        fVar22 = fVar16;
        fVar23 = fVar11;
        fVar17 = fVar21;
        fVar8 = fVar18;
        fVar14 = fVar15;
        fVar9 = fVar10;
      } while (param_2 != 0);
      *param_4 = fVar10;
      param_4[1] = fVar15;
      param_4[2] = fVar18;
      param_4[3] = fVar21;
      param_4[4] = fVar11;
      param_4[5] = fVar16;
      param_4[6] = fVar12;
      param_4[7] = fVar13;
    }
  }
  else {
    uVar6 = 0;
    uVar7 = 0;
    for (iVar2 = param_2 * in_R11D; iVar2 != 0; iVar2 = iVar2 + -1) {
      uVar5 = (ulonglong)uVar7;
      uVar7 = uVar7 + 1;
      fVar24 = ABS(param_1[uVar5]);
      fVar13 = fVar24;
      if (fVar24 <= param_4[uVar6]) {
        fVar13 = param_4[uVar6];
      }
      fVar22 = in_stack_00000100[uVar6];
      param_4[uVar6] = fVar13;
      in_stack_00000100[uVar6] = fVar24 * fVar24 + fVar22;
      uVar6 = uVar6 + 1 & (int)((uVar6 + 1) - in_R11D) >> 0x1f;
    }
  }
  return;
}






// 函数: void FUN_1807d8cb9(longlong param_1,int param_2,undefined8 param_3,float *param_4)
void FUN_1807d8cb9(longlong param_1,int param_2,undefined8 param_3,float *param_4)

{
  float *pfVar1;
  longlong lVar2;
  ulonglong uVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  int in_R11D;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float afStackX_8 [7];
  float fStackX_24;
  float fStack00000000000000f0;
  float *in_stack_00000100;
  
  if (in_R11D == 6) {
    if (param_2 != 0) {
      pfVar4 = (float *)(param_1 + 8);
      fVar10 = param_4[5];
      fVar17 = in_stack_00000100[1];
      fVar18 = in_stack_00000100[2];
      fVar19 = in_stack_00000100[3];
      fVar20 = in_stack_00000100[4];
      fVar21 = in_stack_00000100[5];
      fVar22 = param_4[1];
      fVar23 = param_4[3];
      fVar8 = param_4[4];
      fStack00000000000000f0 = param_4[2];
      do {
        fVar11 = ABS(pfVar4[-2]);
        fVar7 = fVar11;
        if (fVar11 <= *param_4) {
          fVar7 = *param_4;
        }
        fVar14 = pfVar4[1];
        fVar12 = ABS(pfVar4[-1]);
        fVar15 = pfVar4[2];
        fVar16 = pfVar4[3];
        fVar9 = fVar12;
        if (fVar12 <= fVar22) {
          fVar9 = fVar22;
        }
        fVar13 = ABS(*pfVar4);
        pfVar4 = pfVar4 + 6;
        *param_4 = fVar7;
        fVar14 = ABS(fVar14);
        fVar15 = ABS(fVar15);
        fVar17 = fVar17 + fVar12 * fVar12;
        fVar16 = ABS(fVar16);
        if (fVar10 <= fVar16) {
          fVar10 = fVar16;
        }
        fVar18 = fVar18 + fVar13 * fVar13;
        fVar19 = fVar19 + fVar14 * fVar14;
        if (fVar13 <= fStack00000000000000f0) {
          fVar13 = fStack00000000000000f0;
        }
        fVar21 = fVar21 + fVar16 * fVar16;
        if (fVar14 <= fVar23) {
          fVar14 = fVar23;
        }
        *in_stack_00000100 = fVar11 * fVar11 + *in_stack_00000100;
        fVar20 = fVar20 + fVar15 * fVar15;
        if (fVar15 <= fVar8) {
          fVar15 = fVar8;
        }
        param_2 = param_2 + -1;
        fVar22 = fVar9;
        fVar23 = fVar14;
        fVar8 = fVar15;
        fStack00000000000000f0 = fVar13;
      } while (param_2 != 0);
      param_4[2] = fVar13;
      param_4[1] = fVar9;
      in_stack_00000100[2] = fVar18;
      in_stack_00000100[3] = fVar19;
      in_stack_00000100[4] = fVar20;
      in_stack_00000100[5] = fVar21;
      param_4[4] = fVar15;
      in_stack_00000100[1] = fVar17;
      param_4[3] = fVar14;
      param_4[5] = fVar10;
    }
  }
  else if (in_R11D == 8) {
    if (param_2 != 0) {
      fVar10 = param_4[7];
      lVar2 = 0;
      fVar17 = param_4[6];
      fVar18 = param_4[5];
      fVar19 = param_4[4];
      fVar20 = param_4[3];
      fVar21 = param_4[2];
      fVar22 = param_4[1];
      fVar23 = *param_4;
      do {
        do {
          pfVar4 = (float *)(param_1 + lVar2 * 4);
          fVar8 = pfVar4[1];
          fVar7 = pfVar4[2];
          fVar11 = pfVar4[3];
          afStackX_8[lVar2] = ABS(*pfVar4);
          afStackX_8[lVar2 + 1] = ABS(fVar8);
          afStackX_8[lVar2 + 2] = ABS(fVar7);
          afStackX_8[lVar2 + 3] = ABS(fVar11);
          lVar2 = lVar2 + 4;
        } while (lVar2 < 8);
        fVar8 = afStackX_8[0];
        if (afStackX_8[0] <= fVar23) {
          fVar8 = fVar23;
        }
        fVar7 = afStackX_8[1];
        if (afStackX_8[1] <= fVar22) {
          fVar7 = fVar22;
        }
        lVar2 = 2;
        fVar11 = afStackX_8[2];
        if (afStackX_8[2] <= fVar21) {
          fVar11 = fVar21;
        }
        fVar14 = afStackX_8[3];
        if (afStackX_8[3] <= fVar20) {
          fVar14 = fVar20;
        }
        fVar15 = afStackX_8[4];
        if (afStackX_8[4] <= fVar19) {
          fVar15 = fVar19;
        }
        fVar16 = afStackX_8[5];
        if (afStackX_8[5] <= fVar18) {
          fVar16 = fVar18;
        }
        fVar9 = afStackX_8[6];
        if (afStackX_8[6] <= fVar17) {
          fVar9 = fVar17;
        }
        pfVar4 = in_stack_00000100;
        fVar17 = fStackX_24;
        if (fStackX_24 <= fVar10) {
          fVar17 = fVar10;
        }
        do {
          fVar10 = fVar17;
          pfVar1 = (float *)(((longlong)afStackX_8 - (longlong)in_stack_00000100) + (longlong)pfVar4
                            );
          fVar17 = pfVar1[1];
          fVar18 = pfVar1[2];
          fVar19 = pfVar1[3];
          *pfVar4 = *pfVar1 * *pfVar1 + *pfVar4;
          pfVar4[1] = fVar17 * fVar17 + pfVar4[1];
          pfVar4[2] = fVar18 * fVar18 + pfVar4[2];
          pfVar4[3] = fVar19 * fVar19 + pfVar4[3];
          lVar2 = lVar2 + -1;
          pfVar4 = pfVar4 + 4;
          fVar17 = fVar10;
        } while (lVar2 != 0);
        param_1 = param_1 + 0x20;
        param_2 = param_2 + -1;
        lVar2 = 0;
        fVar17 = fVar9;
        fVar18 = fVar16;
        fVar19 = fVar15;
        fVar20 = fVar14;
        fVar21 = fVar11;
        fVar22 = fVar7;
        fVar23 = fVar8;
      } while (param_2 != 0);
      *param_4 = fVar8;
      param_4[1] = fVar7;
      param_4[2] = fVar11;
      param_4[3] = fVar14;
      param_4[4] = fVar15;
      param_4[5] = fVar16;
      param_4[6] = fVar9;
      param_4[7] = fVar10;
    }
  }
  else {
    uVar5 = 0;
    uVar6 = 0;
    for (param_2 = param_2 * in_R11D; param_2 != 0; param_2 = param_2 + -1) {
      uVar3 = (ulonglong)uVar6;
      uVar6 = uVar6 + 1;
      fVar17 = ABS(*(float *)(param_1 + uVar3 * 4));
      fVar10 = fVar17;
      if (fVar17 <= param_4[uVar5]) {
        fVar10 = param_4[uVar5];
      }
      fVar18 = in_stack_00000100[uVar5];
      param_4[uVar5] = fVar10;
      in_stack_00000100[uVar5] = fVar17 * fVar17 + fVar18;
      uVar5 = uVar5 + 1 & (int)((uVar5 + 1) - in_R11D) >> 0x1f;
    }
  }
  return;
}






// 函数: void FUN_1807d8cfb(float param_1,int param_2,undefined8 param_3,float *param_4)
void FUN_1807d8cfb(float param_1,int param_2,undefined8 param_3,float *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float *in_RAX;
  uint *in_RCX;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_XMM8_Da;
  uint unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStack00000000000000f0;
  
  fVar11 = in_RAX[2];
  fVar12 = in_RAX[3];
  fVar13 = in_RAX[4];
  fVar14 = in_RAX[5];
  fVar10 = param_4[1];
  fVar15 = param_4[3];
  fVar16 = param_4[4];
  fStack00000000000000f0 = param_1;
  do {
    fVar5 = (float)(in_RCX[-2] & unaff_XMM9_Da);
    fVar9 = fVar5;
    if (fVar5 <= *param_4) {
      fVar9 = *param_4;
    }
    uVar1 = in_RCX[1];
    fVar6 = (float)(in_RCX[-1] & unaff_XMM9_Da);
    uVar2 = in_RCX[2];
    uVar3 = in_RCX[3];
    fVar4 = fVar6;
    if (fVar6 <= fVar10) {
      fVar4 = fVar10;
    }
    fVar7 = (float)(*in_RCX & unaff_XMM9_Da);
    in_RCX = in_RCX + 6;
    *param_4 = fVar9;
    fVar8 = (float)(uVar1 & unaff_XMM9_Da);
    fVar9 = (float)(uVar2 & unaff_XMM9_Da);
    unaff_XMM10_Da = unaff_XMM10_Da + fVar6 * fVar6;
    fVar10 = (float)(uVar3 & unaff_XMM9_Da);
    if (unaff_XMM8_Da <= fVar10) {
      unaff_XMM8_Da = fVar10;
    }
    fVar11 = fVar11 + fVar7 * fVar7;
    fVar12 = fVar12 + fVar8 * fVar8;
    if (fVar7 <= fStack00000000000000f0) {
      fVar7 = fStack00000000000000f0;
    }
    fVar14 = fVar14 + fVar10 * fVar10;
    if (fVar8 <= fVar15) {
      fVar8 = fVar15;
    }
    *in_RAX = fVar5 * fVar5 + *in_RAX;
    fVar13 = fVar13 + fVar9 * fVar9;
    if (fVar9 <= fVar16) {
      fVar9 = fVar16;
    }
    param_2 = param_2 + -1;
    fVar10 = fVar4;
    fVar15 = fVar8;
    fVar16 = fVar9;
    fStack00000000000000f0 = fVar7;
  } while (param_2 != 0);
  param_4[2] = fVar7;
  param_4[1] = fVar4;
  in_RAX[2] = fVar11;
  in_RAX[3] = fVar12;
  in_RAX[4] = fVar13;
  in_RAX[5] = fVar14;
  param_4[4] = fVar9;
  in_RAX[1] = unaff_XMM10_Da;
  param_4[3] = fVar8;
  param_4[5] = unaff_XMM8_Da;
  return;
}






// 函数: void FUN_1807d8e9d(longlong param_1,int param_2,undefined8 param_3,float *param_4)
void FUN_1807d8e9d(longlong param_1,int param_2,undefined8 param_3,float *param_4)

{
  float *pfVar1;
  longlong lVar2;
  float *pfVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int in_R11D;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float afStackX_8 [7];
  float fStackX_24;
  float *in_stack_00000100;
  
  if (in_R11D == 8) {
    if (param_2 != 0) {
      fVar11 = param_4[7];
      lVar2 = 0;
      fVar15 = param_4[6];
      fVar21 = param_4[5];
      fVar20 = param_4[4];
      fVar19 = param_4[3];
      fVar18 = param_4[2];
      fVar17 = param_4[1];
      fVar16 = *param_4;
      do {
        do {
          pfVar3 = (float *)(param_1 + lVar2 * 4);
          fVar7 = pfVar3[1];
          fVar12 = pfVar3[2];
          fVar8 = pfVar3[3];
          afStackX_8[lVar2] = ABS(*pfVar3);
          afStackX_8[lVar2 + 1] = ABS(fVar7);
          afStackX_8[lVar2 + 2] = ABS(fVar12);
          afStackX_8[lVar2 + 3] = ABS(fVar8);
          lVar2 = lVar2 + 4;
        } while (lVar2 < 8);
        fVar7 = afStackX_8[0];
        if (afStackX_8[0] <= fVar16) {
          fVar7 = fVar16;
        }
        fVar12 = afStackX_8[1];
        if (afStackX_8[1] <= fVar17) {
          fVar12 = fVar17;
        }
        lVar2 = 2;
        fVar8 = afStackX_8[2];
        if (afStackX_8[2] <= fVar18) {
          fVar8 = fVar18;
        }
        fVar13 = afStackX_8[3];
        if (afStackX_8[3] <= fVar19) {
          fVar13 = fVar19;
        }
        fVar9 = afStackX_8[4];
        if (afStackX_8[4] <= fVar20) {
          fVar9 = fVar20;
        }
        fVar14 = afStackX_8[5];
        if (afStackX_8[5] <= fVar21) {
          fVar14 = fVar21;
        }
        fVar10 = afStackX_8[6];
        if (afStackX_8[6] <= fVar15) {
          fVar10 = fVar15;
        }
        pfVar3 = in_stack_00000100;
        fVar15 = fStackX_24;
        if (fStackX_24 <= fVar11) {
          fVar15 = fVar11;
        }
        do {
          fVar11 = fVar15;
          pfVar1 = (float *)(((longlong)afStackX_8 - (longlong)in_stack_00000100) + (longlong)pfVar3
                            );
          fVar15 = pfVar1[1];
          fVar21 = pfVar1[2];
          fVar20 = pfVar1[3];
          *pfVar3 = *pfVar1 * *pfVar1 + *pfVar3;
          pfVar3[1] = fVar15 * fVar15 + pfVar3[1];
          pfVar3[2] = fVar21 * fVar21 + pfVar3[2];
          pfVar3[3] = fVar20 * fVar20 + pfVar3[3];
          lVar2 = lVar2 + -1;
          pfVar3 = pfVar3 + 4;
          fVar15 = fVar11;
        } while (lVar2 != 0);
        param_1 = param_1 + 0x20;
        param_2 = param_2 + -1;
        lVar2 = 0;
        fVar15 = fVar10;
        fVar21 = fVar14;
        fVar20 = fVar9;
        fVar19 = fVar13;
        fVar18 = fVar8;
        fVar17 = fVar12;
        fVar16 = fVar7;
      } while (param_2 != 0);
      *param_4 = fVar7;
      param_4[1] = fVar12;
      param_4[2] = fVar8;
      param_4[3] = fVar13;
      param_4[4] = fVar9;
      param_4[5] = fVar14;
      param_4[6] = fVar10;
      param_4[7] = fVar11;
    }
  }
  else {
    uVar5 = 0;
    uVar6 = 0;
    for (param_2 = param_2 * in_R11D; param_2 != 0; param_2 = param_2 + -1) {
      uVar4 = (ulonglong)uVar6;
      uVar6 = uVar6 + 1;
      fVar15 = ABS(*(float *)(param_1 + uVar4 * 4));
      fVar11 = fVar15;
      if (fVar15 <= param_4[uVar5]) {
        fVar11 = param_4[uVar5];
      }
      fVar21 = in_stack_00000100[uVar5];
      param_4[uVar5] = fVar11;
      in_stack_00000100[uVar5] = fVar15 * fVar15 + fVar21;
      uVar5 = uVar5 + 1 & (int)((uVar5 + 1) - in_R11D) >> 0x1f;
    }
  }
  return;
}






// 函数: void FUN_1807d906a(void)
void FUN_1807d906a(void)

{
  return;
}






// 函数: void FUN_1807d9073(void)
void FUN_1807d9073(void)

{
  return;
}






// 函数: void FUN_1807d90a0(void)
void FUN_1807d90a0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}






