#include "TaleWorlds.Native.Split.h"

// 99_part_04_part027.c - 3 个函数

// 函数: void FUN_18026f850(float *param_1)
void FUN_18026f850(float *param_1)

{
  float *pfVar1;
  float fVar2;
  uint64_t uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  longlong lVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  float *pfVar18;
  float fVar19;
  float fVar20;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  
  pfVar11 = *(float **)(param_1 + 0xca);
  pfVar1 = param_1 + 200;
  pfVar18 = *(float **)pfVar1;
  if (pfVar18 != pfVar11) {
    lVar10 = ((longlong)pfVar11 - (longlong)pfVar18) / 0x14;
    for (lVar9 = lVar10; lVar9 != 0; lVar9 = lVar9 >> 1) {
    }
    FUN_18026f230(pfVar18,pfVar11);
    if (lVar10 < 0x1d) {
      FUN_18026f390(pfVar18);
    }
    else {
      FUN_18026f390(pfVar18);
      for (pfVar18 = pfVar18 + 0x8c; pfVar18 != pfVar11; pfVar18 = pfVar18 + 5) {
        fVar2 = *pfVar18;
        fVar4 = pfVar18[1];
        fVar5 = pfVar18[2];
        fVar6 = pfVar18[3];
        fVar19 = pfVar18[4];
        fVar20 = pfVar18[-5];
        pfVar13 = pfVar18 + -5;
        pfVar12 = pfVar18;
        while (fVar2 < fVar20) {
          fVar20 = pfVar13[1];
          fVar7 = pfVar13[2];
          fVar8 = pfVar13[3];
          *pfVar12 = *pfVar13;
          pfVar12[1] = fVar20;
          pfVar12[2] = fVar7;
          pfVar12[3] = fVar8;
          pfVar12[4] = pfVar13[4];
          pfVar12 = pfVar12 + -5;
          fVar20 = pfVar13[-5];
          pfVar13 = pfVar13 + -5;
        }
        *pfVar12 = fVar2;
        pfVar12[1] = fVar4;
        pfVar12[2] = fVar5;
        pfVar12[3] = fVar6;
        pfVar12[4] = fVar19;
      }
    }
  }
  pfVar18 = *(float **)(param_1 + 0xd2);
  pfVar11 = *(float **)(param_1 + 0xd0);
  if (pfVar11 != pfVar18) {
    lVar9 = (longlong)pfVar18 - (longlong)pfVar11 >> 3;
    for (lVar10 = lVar9; lVar10 != 0; lVar10 = lVar10 >> 1) {
    }
    FUN_18026f6b0(pfVar11,pfVar18);
    if (lVar9 < 0x1d) {
      func_0x00018026f7f0(pfVar11,pfVar18);
    }
    else {
      pfVar13 = pfVar11 + 0x38;
      func_0x00018026f7f0(pfVar11);
      for (; pfVar13 != pfVar18; pfVar13 = pfVar13 + 2) {
        fVar20 = *pfVar13;
        pfVar11 = pfVar13 + -2;
        fVar19 = pfVar13[1];
        fVar2 = *pfVar11;
        pfVar12 = pfVar13;
        while (fVar20 < fVar2) {
          uVar3 = *(uint64_t *)pfVar11;
          pfVar11 = pfVar11 + -2;
          *(uint64_t *)pfVar12 = uVar3;
          pfVar12 = pfVar12 + -2;
          fVar2 = *pfVar11;
        }
        *pfVar12 = fVar20;
        pfVar12[1] = fVar19;
      }
    }
  }
  iVar17 = 0;
  pfVar18 = param_1;
  do {
    pfVar11 = *(float **)pfVar1;
    fVar20 = (float)iVar17 * 0.020408163;
    if (pfVar11 == *(float **)(param_1 + 0xca)) {
      fStack_88 = 1.0;
      fStack_84 = 1.0;
      fStack_80 = 1.0;
    }
    else {
      lVar9 = (longlong)*(float **)(param_1 + 0xca) - (longlong)pfVar11;
      iVar14 = 0;
      lVar15 = 0;
      lVar10 = lVar9 >> 0x3f;
      lVar9 = lVar9 / 0x14 + lVar10;
      pfVar13 = pfVar11;
      if (lVar9 != lVar10) {
        do {
          if (fVar20 < *pfVar11) {
            if (lVar15 != -1) {
              if (lVar15 == 0) {
                fStack_88 = pfVar13[1];
                fStack_84 = pfVar13[2];
                fStack_80 = pfVar13[3];
              }
              else {
                pfVar11 = pfVar13 + lVar15 * 5 + -5;
                pfVar13 = pfVar13 + lVar15 * 5;
                fVar19 = (fVar20 - *pfVar11) / (*pfVar13 - *pfVar11);
                fStack_88 = (pfVar13[1] - pfVar11[1]) * fVar19 + pfVar11[1];
                fStack_84 = (pfVar13[2] - pfVar11[2]) * fVar19 + pfVar11[2];
                fStack_80 = (pfVar13[3] - pfVar11[3]) * fVar19 + pfVar11[3];
              }
              goto LAB_18026fabc;
            }
            break;
          }
          iVar14 = iVar14 + 1;
          lVar15 = lVar15 + 1;
          pfVar11 = pfVar11 + 5;
          pfVar13 = *(float **)pfVar1;
        } while ((ulonglong)(longlong)iVar14 < (ulonglong)(lVar9 - lVar10));
      }
      lVar10 = *(longlong *)(param_1 + 0xca);
      fStack_88 = *(float *)(lVar10 + -0x10);
      fStack_84 = *(float *)(lVar10 + -0xc);
      fStack_80 = *(float *)(lVar10 + -8);
    }
LAB_18026fabc:
    pfVar11 = *(float **)(param_1 + 0xd0);
    if (pfVar11 == *(float **)(param_1 + 0xd2)) {
      fVar20 = 1.0;
    }
    else {
      iVar14 = 0;
      uVar16 = (longlong)*(float **)(param_1 + 0xd2) - (longlong)pfVar11 >> 3;
      lVar10 = 0;
      pfVar13 = pfVar11;
      if (uVar16 != 0) {
        do {
          if (fVar20 < *pfVar13) {
            if (lVar10 != -1) {
              if (lVar10 == 0) {
                fVar20 = pfVar11[1];
              }
              else {
                fVar20 = ((fVar20 - pfVar11[lVar10 * 2 + -2]) /
                         (pfVar11[lVar10 * 2] - pfVar11[lVar10 * 2 + -2])) *
                         (pfVar11[lVar10 * 2 + 1] - pfVar11[lVar10 * 2 + -1]) +
                         pfVar11[lVar10 * 2 + -1];
              }
              goto LAB_18026fba0;
            }
            break;
          }
          iVar14 = iVar14 + 1;
          lVar10 = lVar10 + 1;
          pfVar13 = pfVar13 + 2;
        } while ((ulonglong)(longlong)iVar14 < uVar16);
      }
      fVar20 = *(float *)(*(longlong *)(param_1 + 0xd2) + -4);
    }
LAB_18026fba0:
    iVar17 = iVar17 + 1;
    *pfVar18 = fStack_88;
    pfVar18[1] = fStack_84;
    pfVar18[2] = fStack_80;
    pfVar18[3] = fVar20;
    pfVar18 = pfVar18 + 4;
    if (0x31 < iVar17) {
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18026fc50(float *param_1,longlong param_2)
void FUN_18026fc50(float *param_1,longlong param_2)

{
  int *piVar1;
  float *pfVar2;
  float fVar3;
  uint64_t uVar4;
  int32_t uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  longlong lVar12;
  float *pfVar13;
  ulonglong uVar14;
  float *pfVar15;
  float *pfVar16;
  int *piVar17;
  int32_t *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  int iVar23;
  ulonglong uVar24;
  float *pfVar25;
  ulonglong uVar26;
  longlong lVar27;
  float fVar28;
  float fVar29;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  pfVar2 = param_1 + 200;
  uVar26 = (ulonglong)**(int **)(param_2 + 8);
  *(int **)(param_2 + 8) = *(int **)(param_2 + 8) + 1;
  uVar14 = (*(longlong *)(param_1 + 0xca) - *(longlong *)pfVar2) / 0x14;
  if (uVar14 < uVar26) {
    FUN_18026ecc0(pfVar2,uVar26 - uVar14);
  }
  else {
    *(ulonglong *)(param_1 + 0xca) = *(longlong *)pfVar2 + uVar26 * 0x14;
  }
  piVar17 = *(int **)(param_2 + 8);
  lVar19 = 0;
  lVar11 = lVar19;
  if (0 < (longlong)uVar26) {
    do {
      iVar23 = *piVar17;
      lVar22 = *(longlong *)pfVar2;
      *(int **)(param_2 + 8) = piVar17 + 1;
      *(int *)(lVar11 + lVar22) = iVar23;
      lVar22 = *(longlong *)pfVar2;
      *(int *)(lVar11 + 4 + lVar22) = piVar17[1];
      *(int *)(lVar11 + 8 + lVar22) = piVar17[2];
      *(int *)(lVar11 + 0xc + lVar22) = piVar17[3];
      piVar1 = piVar17 + 4;
      piVar17 = piVar17 + 5;
      *(int *)(lVar11 + 0x10 + lVar22) = *piVar1;
      *(int **)(param_2 + 8) = piVar17;
      uVar26 = uVar26 - 1;
      lVar11 = lVar11 + 0x14;
    } while (uVar26 != 0);
  }
  uVar26 = (ulonglong)*piVar17;
  *(int **)(param_2 + 8) = piVar17 + 1;
  lVar11 = *(longlong *)(param_1 + 0xd2);
  lVar22 = *(longlong *)(param_1 + 0xd0);
  uVar14 = lVar11 - lVar22 >> 3;
  if (uVar14 < uVar26) {
    uVar20 = uVar26 - uVar14;
    if ((ulonglong)(*(longlong *)(param_1 + 0xd4) - lVar11 >> 3) < uVar20) {
      uVar24 = uVar14 * 2;
      if (uVar14 == 0) {
        uVar24 = 1;
      }
      if (uVar24 < uVar14 + uVar20) {
        uVar24 = uVar14 + uVar20;
      }
      lVar12 = lVar19;
      lVar27 = lVar11;
      if (uVar24 != 0) {
        lVar12 = FUN_18062b420(_DAT_180c8ed18,uVar24 * 8);
        lVar22 = *(longlong *)(param_1 + 0xd0);
        lVar27 = *(longlong *)(param_1 + 0xd2);
      }
      lVar11 = lVar12;
      if (lVar22 != lVar27) {
                    // WARNING: Subroutine does not return
        memmove(lVar11,lVar22,lVar27 - lVar22);
      }
      if (uVar20 != 0) {
                    // WARNING: Subroutine does not return
        memset(lVar11,0,uVar20 * 8);
      }
      if (*(longlong *)(param_1 + 0xd0) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(longlong *)(param_1 + 0xd0) = lVar11;
      *(ulonglong *)(param_1 + 0xd4) = uVar24 * 8 + lVar11;
    }
    else if (uVar20 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar11,0,uVar20 * 8);
    }
  }
  else {
    lVar11 = lVar22 + uVar26 * 8;
  }
  *(longlong *)(param_1 + 0xd2) = lVar11;
  if (3 < (longlong)uVar26) {
    puVar18 = *(int32_t **)(param_2 + 8);
    do {
      uVar5 = *puVar18;
      lVar11 = *(longlong *)(param_1 + 0xd0);
      *(int32_t **)(param_2 + 8) = puVar18 + 1;
      *(int32_t *)(lVar11 + lVar19 * 8) = uVar5;
      uVar5 = puVar18[1];
      lVar11 = *(longlong *)(param_1 + 0xd0);
      *(int32_t **)(param_2 + 8) = puVar18 + 2;
      *(int32_t *)(lVar11 + 4 + lVar19 * 8) = uVar5;
      uVar5 = puVar18[2];
      lVar11 = *(longlong *)(param_1 + 0xd0);
      *(int32_t **)(param_2 + 8) = puVar18 + 3;
      *(int32_t *)(lVar11 + 8 + lVar19 * 8) = uVar5;
      uVar5 = puVar18[3];
      lVar11 = *(longlong *)(param_1 + 0xd0);
      *(int32_t **)(param_2 + 8) = puVar18 + 4;
      *(int32_t *)(lVar11 + 0xc + lVar19 * 8) = uVar5;
      uVar5 = puVar18[4];
      lVar11 = *(longlong *)(param_1 + 0xd0);
      *(int32_t **)(param_2 + 8) = puVar18 + 5;
      *(int32_t *)(lVar11 + 0x10 + lVar19 * 8) = uVar5;
      uVar5 = puVar18[5];
      lVar11 = *(longlong *)(param_1 + 0xd0);
      *(int32_t **)(param_2 + 8) = puVar18 + 6;
      *(int32_t *)(lVar11 + 0x14 + lVar19 * 8) = uVar5;
      uVar5 = puVar18[6];
      lVar11 = *(longlong *)(param_1 + 0xd0);
      *(int32_t **)(param_2 + 8) = puVar18 + 7;
      *(int32_t *)(lVar11 + 0x18 + lVar19 * 8) = uVar5;
      lVar11 = *(longlong *)(param_1 + 0xd0);
      uVar5 = puVar18[7];
      puVar18 = puVar18 + 8;
      *(int32_t **)(param_2 + 8) = puVar18;
      *(int32_t *)(lVar11 + 0x1c + lVar19 * 8) = uVar5;
      lVar19 = lVar19 + 4;
    } while (lVar19 < (longlong)(uVar26 - 3));
  }
  if (lVar19 < (longlong)uVar26) {
    puVar18 = *(int32_t **)(param_2 + 8);
    do {
      uVar5 = *puVar18;
      lVar11 = *(longlong *)(param_1 + 0xd0);
      *(int32_t **)(param_2 + 8) = puVar18 + 1;
      *(int32_t *)(lVar11 + lVar19 * 8) = uVar5;
      lVar11 = *(longlong *)(param_1 + 0xd0);
      uVar5 = puVar18[1];
      puVar18 = puVar18 + 2;
      *(int32_t **)(param_2 + 8) = puVar18;
      *(int32_t *)(lVar11 + 4 + lVar19 * 8) = uVar5;
      lVar19 = lVar19 + 1;
    } while (lVar19 < (longlong)uVar26);
  }
  pfVar13 = *(float **)(param_1 + 0xca);
  pfVar2 = param_1 + 200;
  pfVar25 = *(float **)pfVar2;
  if (pfVar25 != pfVar13) {
    lVar11 = ((longlong)pfVar13 - (longlong)pfVar25) / 0x14;
    for (lVar19 = lVar11; lVar19 != 0; lVar19 = lVar19 >> 1) {
    }
    FUN_18026f230(pfVar25,pfVar13);
    if (lVar11 < 0x1d) {
      FUN_18026f390(pfVar25);
    }
    else {
      FUN_18026f390(pfVar25);
      for (pfVar25 = pfVar25 + 0x8c; pfVar25 != pfVar13; pfVar25 = pfVar25 + 5) {
        fVar3 = *pfVar25;
        fVar6 = pfVar25[1];
        fVar7 = pfVar25[2];
        fVar8 = pfVar25[3];
        fVar28 = pfVar25[4];
        fVar29 = pfVar25[-5];
        pfVar16 = pfVar25 + -5;
        pfVar15 = pfVar25;
        while (fVar3 < fVar29) {
          fVar29 = pfVar16[1];
          fVar9 = pfVar16[2];
          fVar10 = pfVar16[3];
          *pfVar15 = *pfVar16;
          pfVar15[1] = fVar29;
          pfVar15[2] = fVar9;
          pfVar15[3] = fVar10;
          pfVar15[4] = pfVar16[4];
          pfVar15 = pfVar15 + -5;
          fVar29 = pfVar16[-5];
          pfVar16 = pfVar16 + -5;
        }
        *pfVar15 = fVar3;
        pfVar15[1] = fVar6;
        pfVar15[2] = fVar7;
        pfVar15[3] = fVar8;
        pfVar15[4] = fVar28;
      }
    }
  }
  pfVar25 = *(float **)(param_1 + 0xd2);
  pfVar13 = *(float **)(param_1 + 0xd0);
  if (pfVar13 != pfVar25) {
    lVar19 = (longlong)pfVar25 - (longlong)pfVar13 >> 3;
    for (lVar11 = lVar19; lVar11 != 0; lVar11 = lVar11 >> 1) {
    }
    FUN_18026f6b0(pfVar13,pfVar25);
    if (lVar19 < 0x1d) {
      func_0x00018026f7f0(pfVar13,pfVar25);
    }
    else {
      pfVar16 = pfVar13 + 0x38;
      func_0x00018026f7f0(pfVar13);
      for (; pfVar16 != pfVar25; pfVar16 = pfVar16 + 2) {
        fVar29 = *pfVar16;
        pfVar13 = pfVar16 + -2;
        fVar28 = pfVar16[1];
        fVar3 = *pfVar13;
        pfVar15 = pfVar16;
        while (fVar29 < fVar3) {
          uVar4 = *(uint64_t *)pfVar13;
          pfVar13 = pfVar13 + -2;
          *(uint64_t *)pfVar15 = uVar4;
          pfVar15 = pfVar15 + -2;
          fVar3 = *pfVar13;
        }
        *pfVar15 = fVar29;
        pfVar15[1] = fVar28;
      }
    }
  }
  iVar23 = 0;
  pfVar25 = param_1;
  do {
    pfVar13 = *(float **)pfVar2;
    fVar29 = (float)iVar23 * 0.020408163;
    if (pfVar13 == *(float **)(param_1 + 0xca)) {
      fStack_88 = 1.0;
      fStack_84 = 1.0;
      fStack_80 = 1.0;
    }
    else {
      lVar19 = (longlong)*(float **)(param_1 + 0xca) - (longlong)pfVar13;
      iVar21 = 0;
      lVar22 = 0;
      lVar11 = lVar19 >> 0x3f;
      lVar19 = lVar19 / 0x14 + lVar11;
      pfVar16 = pfVar13;
      if (lVar19 != lVar11) {
        do {
          if (fVar29 < *pfVar13) {
            if (lVar22 != -1) {
              if (lVar22 == 0) {
                fStack_88 = pfVar16[1];
                fStack_84 = pfVar16[2];
                fStack_80 = pfVar16[3];
              }
              else {
                pfVar13 = pfVar16 + lVar22 * 5 + -5;
                pfVar16 = pfVar16 + lVar22 * 5;
                fVar28 = (fVar29 - *pfVar13) / (*pfVar16 - *pfVar13);
                fStack_88 = (pfVar16[1] - pfVar13[1]) * fVar28 + pfVar13[1];
                fStack_84 = (pfVar16[2] - pfVar13[2]) * fVar28 + pfVar13[2];
                fStack_80 = (pfVar16[3] - pfVar13[3]) * fVar28 + pfVar13[3];
              }
              goto LAB_18026fabc;
            }
            break;
          }
          iVar21 = iVar21 + 1;
          lVar22 = lVar22 + 1;
          pfVar13 = pfVar13 + 5;
          pfVar16 = *(float **)pfVar2;
        } while ((ulonglong)(longlong)iVar21 < (ulonglong)(lVar19 - lVar11));
      }
      lVar11 = *(longlong *)(param_1 + 0xca);
      fStack_88 = *(float *)(lVar11 + -0x10);
      fStack_84 = *(float *)(lVar11 + -0xc);
      fStack_80 = *(float *)(lVar11 + -8);
    }
LAB_18026fabc:
    pfVar13 = *(float **)(param_1 + 0xd0);
    if (pfVar13 == *(float **)(param_1 + 0xd2)) {
      fVar29 = 1.0;
    }
    else {
      iVar21 = 0;
      uVar14 = (longlong)*(float **)(param_1 + 0xd2) - (longlong)pfVar13 >> 3;
      lVar11 = 0;
      pfVar16 = pfVar13;
      if (uVar14 != 0) {
        do {
          if (fVar29 < *pfVar16) {
            if (lVar11 != -1) {
              if (lVar11 == 0) {
                fVar29 = pfVar13[1];
              }
              else {
                fVar29 = ((fVar29 - pfVar13[lVar11 * 2 + -2]) /
                         (pfVar13[lVar11 * 2] - pfVar13[lVar11 * 2 + -2])) *
                         (pfVar13[lVar11 * 2 + 1] - pfVar13[lVar11 * 2 + -1]) +
                         pfVar13[lVar11 * 2 + -1];
              }
              goto LAB_18026fba0;
            }
            break;
          }
          iVar21 = iVar21 + 1;
          lVar11 = lVar11 + 1;
          pfVar16 = pfVar16 + 2;
        } while ((ulonglong)(longlong)iVar21 < uVar14);
      }
      fVar29 = *(float *)(*(longlong *)(param_1 + 0xd2) + -4);
    }
LAB_18026fba0:
    iVar23 = iVar23 + 1;
    *pfVar25 = fStack_88;
    pfVar25[1] = fStack_84;
    pfVar25[2] = fStack_80;
    pfVar25[3] = fVar29;
    pfVar25 = pfVar25 + 4;
    if (0x31 < iVar23) {
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18026fc70(int32_t param_1,longlong param_2)
void FUN_18026fc70(int32_t param_1,longlong param_2)

{
  int *piVar1;
  float *pfVar2;
  float fVar3;
  uint64_t uVar4;
  int32_t uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  int *in_RAX;
  longlong lVar12;
  float *pfVar13;
  ulonglong uVar14;
  float *pfVar15;
  float *pfVar16;
  int *piVar17;
  int32_t *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  float *unaff_RSI;
  longlong unaff_RDI;
  int iVar21;
  longlong lVar22;
  int iVar23;
  ulonglong uVar24;
  float *pfVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong *unaff_R15;
  float fVar28;
  float fVar29;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  
  uVar26 = (ulonglong)*in_RAX;
  *(int **)(param_2 + 8) = in_RAX + 1;
  uVar14 = (unaff_R15[1] - *unaff_R15) / 0x14;
  if (uVar14 < uVar26) {
    FUN_18026ecc0(param_1,uVar26 - uVar14);
  }
  else {
    unaff_R15[1] = *unaff_R15 + uVar26 * 0x14;
  }
  piVar17 = *(int **)(unaff_RDI + 8);
  lVar19 = 0;
  lVar11 = lVar19;
  if (0 < (longlong)uVar26) {
    do {
      iVar23 = *piVar17;
      lVar22 = *unaff_R15;
      *(int **)(unaff_RDI + 8) = piVar17 + 1;
      *(int *)(lVar11 + lVar22) = iVar23;
      lVar22 = *unaff_R15;
      *(int *)(lVar11 + 4 + lVar22) = piVar17[1];
      *(int *)(lVar11 + 8 + lVar22) = piVar17[2];
      *(int *)(lVar11 + 0xc + lVar22) = piVar17[3];
      piVar1 = piVar17 + 4;
      piVar17 = piVar17 + 5;
      *(int *)(lVar11 + 0x10 + lVar22) = *piVar1;
      *(int **)(unaff_RDI + 8) = piVar17;
      uVar26 = uVar26 - 1;
      lVar11 = lVar11 + 0x14;
    } while (uVar26 != 0);
  }
  uVar26 = (ulonglong)*piVar17;
  *(int **)(unaff_RDI + 8) = piVar17 + 1;
  lVar11 = *(longlong *)(unaff_RSI + 0xd2);
  lVar22 = *(longlong *)(unaff_RSI + 0xd0);
  uVar14 = lVar11 - lVar22 >> 3;
  if (uVar14 < uVar26) {
    uVar20 = uVar26 - uVar14;
    if ((ulonglong)(*(longlong *)(unaff_RSI + 0xd4) - lVar11 >> 3) < uVar20) {
      uVar24 = uVar14 * 2;
      if (uVar14 == 0) {
        uVar24 = 1;
      }
      if (uVar24 < uVar14 + uVar20) {
        uVar24 = uVar14 + uVar20;
      }
      lVar12 = lVar19;
      lVar27 = lVar11;
      if (uVar24 != 0) {
        lVar12 = FUN_18062b420(_DAT_180c8ed18,uVar24 * 8);
        lVar22 = *(longlong *)(unaff_RSI + 0xd0);
        lVar27 = *(longlong *)(unaff_RSI + 0xd2);
      }
      lVar11 = lVar12;
      if (lVar22 != lVar27) {
                    // WARNING: Subroutine does not return
        memmove(lVar11,lVar22,lVar27 - lVar22);
      }
      if (uVar20 != 0) {
                    // WARNING: Subroutine does not return
        memset(lVar11,0,uVar20 * 8);
      }
      if (*(longlong *)(unaff_RSI + 0xd0) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(longlong *)(unaff_RSI + 0xd0) = lVar11;
      *(ulonglong *)(unaff_RSI + 0xd4) = uVar24 * 8 + lVar11;
    }
    else if (uVar20 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar11,0,uVar20 * 8);
    }
  }
  else {
    lVar11 = lVar22 + uVar26 * 8;
  }
  *(longlong *)(unaff_RSI + 0xd2) = lVar11;
  if (3 < (longlong)uVar26) {
    puVar18 = *(int32_t **)(unaff_RDI + 8);
    do {
      uVar5 = *puVar18;
      lVar11 = *(longlong *)(unaff_RSI + 0xd0);
      *(int32_t **)(unaff_RDI + 8) = puVar18 + 1;
      *(int32_t *)(lVar11 + lVar19 * 8) = uVar5;
      uVar5 = puVar18[1];
      lVar11 = *(longlong *)(unaff_RSI + 0xd0);
      *(int32_t **)(unaff_RDI + 8) = puVar18 + 2;
      *(int32_t *)(lVar11 + 4 + lVar19 * 8) = uVar5;
      uVar5 = puVar18[2];
      lVar11 = *(longlong *)(unaff_RSI + 0xd0);
      *(int32_t **)(unaff_RDI + 8) = puVar18 + 3;
      *(int32_t *)(lVar11 + 8 + lVar19 * 8) = uVar5;
      uVar5 = puVar18[3];
      lVar11 = *(longlong *)(unaff_RSI + 0xd0);
      *(int32_t **)(unaff_RDI + 8) = puVar18 + 4;
      *(int32_t *)(lVar11 + 0xc + lVar19 * 8) = uVar5;
      uVar5 = puVar18[4];
      lVar11 = *(longlong *)(unaff_RSI + 0xd0);
      *(int32_t **)(unaff_RDI + 8) = puVar18 + 5;
      *(int32_t *)(lVar11 + 0x10 + lVar19 * 8) = uVar5;
      uVar5 = puVar18[5];
      lVar11 = *(longlong *)(unaff_RSI + 0xd0);
      *(int32_t **)(unaff_RDI + 8) = puVar18 + 6;
      *(int32_t *)(lVar11 + 0x14 + lVar19 * 8) = uVar5;
      uVar5 = puVar18[6];
      lVar11 = *(longlong *)(unaff_RSI + 0xd0);
      *(int32_t **)(unaff_RDI + 8) = puVar18 + 7;
      *(int32_t *)(lVar11 + 0x18 + lVar19 * 8) = uVar5;
      lVar11 = *(longlong *)(unaff_RSI + 0xd0);
      uVar5 = puVar18[7];
      puVar18 = puVar18 + 8;
      *(int32_t **)(unaff_RDI + 8) = puVar18;
      *(int32_t *)(lVar11 + 0x1c + lVar19 * 8) = uVar5;
      lVar19 = lVar19 + 4;
    } while (lVar19 < (longlong)(uVar26 - 3));
  }
  if (lVar19 < (longlong)uVar26) {
    puVar18 = *(int32_t **)(unaff_RDI + 8);
    do {
      uVar5 = *puVar18;
      lVar11 = *(longlong *)(unaff_RSI + 0xd0);
      *(int32_t **)(unaff_RDI + 8) = puVar18 + 1;
      *(int32_t *)(lVar11 + lVar19 * 8) = uVar5;
      lVar11 = *(longlong *)(unaff_RSI + 0xd0);
      uVar5 = puVar18[1];
      puVar18 = puVar18 + 2;
      *(int32_t **)(unaff_RDI + 8) = puVar18;
      *(int32_t *)(lVar11 + 4 + lVar19 * 8) = uVar5;
      lVar19 = lVar19 + 1;
    } while (lVar19 < (longlong)uVar26);
  }
  pfVar13 = *(float **)(unaff_RSI + 0xca);
  pfVar2 = unaff_RSI + 200;
  pfVar25 = *(float **)pfVar2;
  if (pfVar25 != pfVar13) {
    lVar11 = ((longlong)pfVar13 - (longlong)pfVar25) / 0x14;
    for (lVar19 = lVar11; lVar19 != 0; lVar19 = lVar19 >> 1) {
    }
    FUN_18026f230(pfVar25,pfVar13);
    if (lVar11 < 0x1d) {
      FUN_18026f390(pfVar25);
    }
    else {
      FUN_18026f390(pfVar25);
      for (pfVar25 = pfVar25 + 0x8c; pfVar25 != pfVar13; pfVar25 = pfVar25 + 5) {
        fVar3 = *pfVar25;
        fVar6 = pfVar25[1];
        fVar7 = pfVar25[2];
        fVar8 = pfVar25[3];
        fVar28 = pfVar25[4];
        fVar29 = pfVar25[-5];
        pfVar16 = pfVar25 + -5;
        pfVar15 = pfVar25;
        while (fVar3 < fVar29) {
          fVar29 = pfVar16[1];
          fVar9 = pfVar16[2];
          fVar10 = pfVar16[3];
          *pfVar15 = *pfVar16;
          pfVar15[1] = fVar29;
          pfVar15[2] = fVar9;
          pfVar15[3] = fVar10;
          pfVar15[4] = pfVar16[4];
          pfVar15 = pfVar15 + -5;
          fVar29 = pfVar16[-5];
          pfVar16 = pfVar16 + -5;
        }
        *pfVar15 = fVar3;
        pfVar15[1] = fVar6;
        pfVar15[2] = fVar7;
        pfVar15[3] = fVar8;
        pfVar15[4] = fVar28;
      }
    }
  }
  pfVar25 = *(float **)(unaff_RSI + 0xd2);
  pfVar13 = *(float **)(unaff_RSI + 0xd0);
  if (pfVar13 != pfVar25) {
    lVar19 = (longlong)pfVar25 - (longlong)pfVar13 >> 3;
    for (lVar11 = lVar19; lVar11 != 0; lVar11 = lVar11 >> 1) {
    }
    FUN_18026f6b0(pfVar13,pfVar25);
    if (lVar19 < 0x1d) {
      func_0x00018026f7f0(pfVar13,pfVar25);
    }
    else {
      pfVar16 = pfVar13 + 0x38;
      func_0x00018026f7f0(pfVar13);
      for (; pfVar16 != pfVar25; pfVar16 = pfVar16 + 2) {
        fVar29 = *pfVar16;
        pfVar13 = pfVar16 + -2;
        fVar28 = pfVar16[1];
        fVar3 = *pfVar13;
        pfVar15 = pfVar16;
        while (fVar29 < fVar3) {
          uVar4 = *(uint64_t *)pfVar13;
          pfVar13 = pfVar13 + -2;
          *(uint64_t *)pfVar15 = uVar4;
          pfVar15 = pfVar15 + -2;
          fVar3 = *pfVar13;
        }
        *pfVar15 = fVar29;
        pfVar15[1] = fVar28;
      }
    }
  }
  iVar23 = 0;
  pfVar25 = unaff_RSI;
  do {
    pfVar13 = *(float **)pfVar2;
    fVar29 = (float)iVar23 * 0.020408163;
    if (pfVar13 == *(float **)(unaff_RSI + 0xca)) {
      fStack_40 = 1.0;
      fStack_3c = 1.0;
      fStack_38 = 1.0;
    }
    else {
      lVar19 = (longlong)*(float **)(unaff_RSI + 0xca) - (longlong)pfVar13;
      iVar21 = 0;
      lVar22 = 0;
      lVar11 = lVar19 >> 0x3f;
      lVar19 = lVar19 / 0x14 + lVar11;
      pfVar16 = pfVar13;
      if (lVar19 != lVar11) {
        do {
          if (fVar29 < *pfVar13) {
            if (lVar22 != -1) {
              if (lVar22 == 0) {
                fStack_40 = pfVar16[1];
                fStack_3c = pfVar16[2];
                fStack_38 = pfVar16[3];
              }
              else {
                pfVar13 = pfVar16 + lVar22 * 5 + -5;
                pfVar16 = pfVar16 + lVar22 * 5;
                fVar28 = (fVar29 - *pfVar13) / (*pfVar16 - *pfVar13);
                fStack_40 = (pfVar16[1] - pfVar13[1]) * fVar28 + pfVar13[1];
                fStack_3c = (pfVar16[2] - pfVar13[2]) * fVar28 + pfVar13[2];
                fStack_38 = (pfVar16[3] - pfVar13[3]) * fVar28 + pfVar13[3];
              }
              goto LAB_18026fabc;
            }
            break;
          }
          iVar21 = iVar21 + 1;
          lVar22 = lVar22 + 1;
          pfVar13 = pfVar13 + 5;
          pfVar16 = *(float **)pfVar2;
        } while ((ulonglong)(longlong)iVar21 < (ulonglong)(lVar19 - lVar11));
      }
      lVar11 = *(longlong *)(unaff_RSI + 0xca);
      fStack_40 = *(float *)(lVar11 + -0x10);
      fStack_3c = *(float *)(lVar11 + -0xc);
      fStack_38 = *(float *)(lVar11 + -8);
    }
LAB_18026fabc:
    pfVar13 = *(float **)(unaff_RSI + 0xd0);
    if (pfVar13 == *(float **)(unaff_RSI + 0xd2)) {
      fVar29 = 1.0;
    }
    else {
      iVar21 = 0;
      uVar14 = (longlong)*(float **)(unaff_RSI + 0xd2) - (longlong)pfVar13 >> 3;
      lVar11 = 0;
      pfVar16 = pfVar13;
      if (uVar14 != 0) {
        do {
          if (fVar29 < *pfVar16) {
            if (lVar11 != -1) {
              if (lVar11 == 0) {
                fVar29 = pfVar13[1];
              }
              else {
                fVar29 = ((fVar29 - pfVar13[lVar11 * 2 + -2]) /
                         (pfVar13[lVar11 * 2] - pfVar13[lVar11 * 2 + -2])) *
                         (pfVar13[lVar11 * 2 + 1] - pfVar13[lVar11 * 2 + -1]) +
                         pfVar13[lVar11 * 2 + -1];
              }
              goto LAB_18026fba0;
            }
            break;
          }
          iVar21 = iVar21 + 1;
          lVar11 = lVar11 + 1;
          pfVar16 = pfVar16 + 2;
        } while ((ulonglong)(longlong)iVar21 < uVar14);
      }
      fVar29 = *(float *)(*(longlong *)(unaff_RSI + 0xd2) + -4);
    }
LAB_18026fba0:
    iVar23 = iVar23 + 1;
    *pfVar25 = fStack_40;
    pfVar25[1] = fStack_3c;
    pfVar25[2] = fStack_38;
    pfVar25[3] = fVar29;
    pfVar25 = pfVar25 + 4;
    if (0x31 < iVar23) {
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




