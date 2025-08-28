#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part086.c - 7 个函数

// 函数: void FUN_18071991e(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)
void FUN_18071991e(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  float fVar1;
  float *pfVar2;
  longlong lVar3;
  longlong unaff_RBX;
  longlong unaff_RDI;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float in_XMM3_Da;
  float in_XMM4_Da;
  float unaff_XMM6_Da;
  
  if (3 < param_1 - param_4) {
    pfVar2 = (float *)(unaff_RDI + 4 + param_4 * 4);
    lVar4 = unaff_RBX - unaff_RDI;
    lVar3 = ((param_1 - param_4) - 4U >> 2) + 1;
    param_4 = param_4 + lVar3 * 4;
    do {
      fVar1 = pfVar2[-1];
      fVar5 = unaff_XMM6_Da * *(float *)(lVar4 + -4 + (longlong)pfVar2);
      fVar6 = unaff_XMM6_Da * *(float *)(lVar4 + (longlong)pfVar2);
      *(float *)(lVar4 + -4 + (longlong)pfVar2) = (fVar5 - fVar1) * in_XMM4_Da;
      pfVar2[-1] = (fVar1 + fVar5) * in_XMM3_Da;
      fVar1 = *pfVar2;
      fVar5 = unaff_XMM6_Da * *(float *)(lVar4 + 4 + (longlong)pfVar2);
      *(float *)(lVar4 + (longlong)pfVar2) = (fVar6 - fVar1) * in_XMM4_Da;
      *pfVar2 = (fVar1 + fVar6) * in_XMM3_Da;
      fVar1 = pfVar2[1];
      fVar6 = unaff_XMM6_Da * *(float *)(lVar4 + 8 + (longlong)pfVar2);
      *(float *)(lVar4 + 4 + (longlong)pfVar2) = (fVar5 - fVar1) * in_XMM4_Da;
      pfVar2[1] = (fVar1 + fVar5) * in_XMM3_Da;
      fVar1 = pfVar2[2];
      *(float *)(lVar4 + 8 + (longlong)pfVar2) = (fVar6 - fVar1) * in_XMM4_Da;
      pfVar2[2] = (fVar1 + fVar6) * in_XMM3_Da;
      pfVar2 = pfVar2 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (param_4 < param_1) {
    pfVar2 = (float *)(unaff_RDI + param_4 * 4);
    param_1 = param_1 - param_4;
    do {
      fVar1 = *pfVar2;
      fVar5 = unaff_XMM6_Da * *(float *)((unaff_RBX - unaff_RDI) + (longlong)pfVar2);
      *(float *)((unaff_RBX - unaff_RDI) + (longlong)pfVar2) = (fVar5 - fVar1) * in_XMM4_Da;
      *pfVar2 = (fVar1 + fVar5) * in_XMM3_Da;
      pfVar2 = pfVar2 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}





// 函数: void FUN_180719a90(longlong param_1,longlong param_2,uint param_3)
void FUN_180719a90(longlong param_1,longlong param_2,uint param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulonglong uVar17;
  
  lVar18 = (longlong)(int)param_3;
  uVar14 = 0;
  uVar16 = 0;
  if ((0 < (int)param_3) && (7 < param_3)) {
    uVar12 = param_3 & 0x80000007;
    if ((int)uVar12 < 0) {
      uVar12 = (uVar12 - 1 | 0xfffffff8) + 1;
    }
    lVar13 = param_1 - param_2;
    pfVar11 = (float *)(param_2 + 0x10);
    uVar17 = uVar14;
    do {
      pfVar1 = (float *)(lVar13 + -0x10 + (longlong)pfVar11);
      fVar2 = *pfVar1;
      fVar22 = pfVar1[1];
      fVar20 = pfVar1[2];
      fVar21 = pfVar1[3];
      uVar16 = (int)uVar17 + 8;
      uVar17 = (ulonglong)uVar16;
      uVar14 = uVar14 + 8;
      fVar3 = pfVar11[-4];
      fVar4 = pfVar11[-3];
      fVar5 = pfVar11[-2];
      fVar6 = pfVar11[-1];
      pfVar11[-4] = fVar3 * 0.70710677 - fVar2 * 0.70710677;
      pfVar11[-3] = fVar4 * 0.70710677 - fVar22 * 0.70710677;
      pfVar11[-2] = fVar5 * 0.70710677 - fVar20 * 0.70710677;
      pfVar11[-1] = fVar6 * 0.70710677 - fVar21 * 0.70710677;
      fVar7 = *pfVar11;
      fVar8 = pfVar11[1];
      fVar9 = pfVar11[2];
      fVar10 = pfVar11[3];
      pfVar1 = (float *)(lVar13 + -0x10 + (longlong)pfVar11);
      *pfVar1 = fVar3 * 0.70710677 + fVar2 * 0.70710677;
      pfVar1[1] = fVar4 * 0.70710677 + fVar22 * 0.70710677;
      pfVar1[2] = fVar5 * 0.70710677 + fVar20 * 0.70710677;
      pfVar1[3] = fVar6 * 0.70710677 + fVar21 * 0.70710677;
      pfVar1 = (float *)(lVar13 + (longlong)pfVar11);
      fVar2 = *pfVar1;
      fVar22 = pfVar1[1];
      fVar20 = pfVar1[2];
      fVar21 = pfVar1[3];
      pfVar1 = (float *)(lVar13 + (longlong)pfVar11);
      *pfVar1 = fVar2 * 0.70710677 + fVar7 * 0.70710677;
      pfVar1[1] = fVar22 * 0.70710677 + fVar8 * 0.70710677;
      pfVar1[2] = fVar20 * 0.70710677 + fVar9 * 0.70710677;
      pfVar1[3] = fVar21 * 0.70710677 + fVar10 * 0.70710677;
      *pfVar11 = fVar7 * 0.70710677 - fVar2 * 0.70710677;
      pfVar11[1] = fVar8 * 0.70710677 - fVar22 * 0.70710677;
      pfVar11[2] = fVar9 * 0.70710677 - fVar20 * 0.70710677;
      pfVar11[3] = fVar10 * 0.70710677 - fVar21 * 0.70710677;
      pfVar11 = pfVar11 + 8;
    } while ((longlong)uVar14 < (longlong)(int)(param_3 - uVar12));
  }
  lVar13 = (longlong)(int)uVar16;
  if (lVar13 < lVar18) {
    if (3 < lVar18 - lVar13) {
      pfVar11 = (float *)(param_2 + 4 + lVar13 * 4);
      lVar19 = param_1 - param_2;
      lVar15 = ((lVar18 - lVar13) - 4U >> 2) + 1;
      lVar13 = lVar13 + lVar15 * 4;
      do {
        fVar2 = pfVar11[-1];
        fVar20 = *(float *)(lVar19 + -4 + (longlong)pfVar11) * 0.70710677;
        fVar21 = *(float *)(lVar19 + (longlong)pfVar11) * 0.70710677;
        pfVar11[-1] = fVar2 * 0.70710677 - fVar20;
        fVar22 = *pfVar11;
        *(float *)(lVar19 + -4 + (longlong)pfVar11) = fVar2 * 0.70710677 + fVar20;
        fVar20 = *(float *)(lVar19 + 4 + (longlong)pfVar11) * 0.70710677;
        *pfVar11 = fVar22 * 0.70710677 - fVar21;
        fVar2 = pfVar11[1];
        *(float *)(lVar19 + (longlong)pfVar11) = fVar22 * 0.70710677 + fVar21;
        fVar21 = *(float *)(lVar19 + 8 + (longlong)pfVar11) * 0.70710677;
        pfVar11[1] = fVar2 * 0.70710677 - fVar20;
        fVar22 = pfVar11[2];
        *(float *)(lVar19 + 4 + (longlong)pfVar11) = fVar2 * 0.70710677 + fVar20;
        pfVar11[2] = fVar22 * 0.70710677 - fVar21;
        *(float *)(lVar19 + 8 + (longlong)pfVar11) = fVar22 * 0.70710677 + fVar21;
        pfVar11 = pfVar11 + 4;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    if (lVar13 < lVar18) {
      pfVar11 = (float *)(param_2 + lVar13 * 4);
      lVar18 = lVar18 - lVar13;
      do {
        fVar2 = *pfVar11;
        fVar22 = *(float *)((param_1 - param_2) + (longlong)pfVar11) * 0.70710677;
        *(float *)((param_1 - param_2) + (longlong)pfVar11) = fVar2 * 0.70710677 + fVar22;
        *pfVar11 = fVar2 * 0.70710677 - fVar22;
        pfVar11 = pfVar11 + 1;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
  }
  return;
}





// 函数: void FUN_180719ab8(uint param_1,longlong param_2,int param_3,longlong param_4)
void FUN_180719ab8(uint param_1,longlong param_2,int param_3,longlong param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  longlong lVar12;
  longlong lVar13;
  longlong in_R10;
  longlong lVar14;
  longlong in_R11;
  float fVar15;
  float fVar16;
  float fVar17;
  
  param_1 = param_1 & 0x80000007;
  if ((int)param_1 < 0) {
    param_1 = (param_1 - 1 | 0xfffffff8) + 1;
  }
  lVar12 = param_4 - in_R11;
  pfVar11 = (float *)(in_R11 + 0x10);
  do {
    pfVar1 = (float *)(lVar12 + -0x10 + (longlong)pfVar11);
    fVar2 = *pfVar1;
    fVar17 = pfVar1[1];
    fVar15 = pfVar1[2];
    fVar16 = pfVar1[3];
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    fVar3 = pfVar11[-4];
    fVar4 = pfVar11[-3];
    fVar5 = pfVar11[-2];
    fVar6 = pfVar11[-1];
    pfVar11[-4] = fVar3 * 0.70710677 - fVar2 * 0.70710677;
    pfVar11[-3] = fVar4 * 0.70710677 - fVar17 * 0.70710677;
    pfVar11[-2] = fVar5 * 0.70710677 - fVar15 * 0.70710677;
    pfVar11[-1] = fVar6 * 0.70710677 - fVar16 * 0.70710677;
    fVar7 = *pfVar11;
    fVar8 = pfVar11[1];
    fVar9 = pfVar11[2];
    fVar10 = pfVar11[3];
    pfVar1 = (float *)(lVar12 + -0x10 + (longlong)pfVar11);
    *pfVar1 = fVar3 * 0.70710677 + fVar2 * 0.70710677;
    pfVar1[1] = fVar4 * 0.70710677 + fVar17 * 0.70710677;
    pfVar1[2] = fVar5 * 0.70710677 + fVar15 * 0.70710677;
    pfVar1[3] = fVar6 * 0.70710677 + fVar16 * 0.70710677;
    pfVar1 = (float *)(lVar12 + (longlong)pfVar11);
    fVar2 = *pfVar1;
    fVar17 = pfVar1[1];
    fVar15 = pfVar1[2];
    fVar16 = pfVar1[3];
    pfVar1 = (float *)(lVar12 + (longlong)pfVar11);
    *pfVar1 = fVar2 * 0.70710677 + fVar7 * 0.70710677;
    pfVar1[1] = fVar17 * 0.70710677 + fVar8 * 0.70710677;
    pfVar1[2] = fVar15 * 0.70710677 + fVar9 * 0.70710677;
    pfVar1[3] = fVar16 * 0.70710677 + fVar10 * 0.70710677;
    *pfVar11 = fVar7 * 0.70710677 - fVar2 * 0.70710677;
    pfVar11[1] = fVar8 * 0.70710677 - fVar17 * 0.70710677;
    pfVar11[2] = fVar9 * 0.70710677 - fVar15 * 0.70710677;
    pfVar11[3] = fVar10 * 0.70710677 - fVar16 * 0.70710677;
    pfVar11 = pfVar11 + 8;
  } while (param_2 < (int)((int)in_R10 - param_1));
  lVar12 = (longlong)param_3;
  if (lVar12 < in_R10) {
    if (3 < in_R10 - lVar12) {
      pfVar11 = (float *)(in_R11 + 4 + lVar12 * 4);
      lVar14 = param_4 - in_R11;
      lVar13 = ((in_R10 - lVar12) - 4U >> 2) + 1;
      lVar12 = lVar12 + lVar13 * 4;
      do {
        fVar2 = pfVar11[-1];
        fVar15 = *(float *)(lVar14 + -4 + (longlong)pfVar11) * 0.70710677;
        fVar16 = *(float *)(lVar14 + (longlong)pfVar11) * 0.70710677;
        pfVar11[-1] = fVar2 * 0.70710677 - fVar15;
        fVar17 = *pfVar11;
        *(float *)(lVar14 + -4 + (longlong)pfVar11) = fVar2 * 0.70710677 + fVar15;
        fVar15 = *(float *)(lVar14 + 4 + (longlong)pfVar11) * 0.70710677;
        *pfVar11 = fVar17 * 0.70710677 - fVar16;
        fVar2 = pfVar11[1];
        *(float *)(lVar14 + (longlong)pfVar11) = fVar17 * 0.70710677 + fVar16;
        fVar16 = *(float *)(lVar14 + 8 + (longlong)pfVar11) * 0.70710677;
        pfVar11[1] = fVar2 * 0.70710677 - fVar15;
        fVar17 = pfVar11[2];
        *(float *)(lVar14 + 4 + (longlong)pfVar11) = fVar2 * 0.70710677 + fVar15;
        pfVar11[2] = fVar17 * 0.70710677 - fVar16;
        *(float *)(lVar14 + 8 + (longlong)pfVar11) = fVar17 * 0.70710677 + fVar16;
        pfVar11 = pfVar11 + 4;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    if (lVar12 < in_R10) {
      pfVar11 = (float *)(in_R11 + lVar12 * 4);
      lVar12 = in_R10 - lVar12;
      do {
        fVar2 = *pfVar11;
        fVar17 = *(float *)((param_4 - in_R11) + (longlong)pfVar11) * 0.70710677;
        *(float *)((param_4 - in_R11) + (longlong)pfVar11) = fVar2 * 0.70710677 + fVar17;
        *pfVar11 = fVar2 * 0.70710677 - fVar17;
        pfVar11 = pfVar11 + 1;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
  }
  return;
}





// 函数: void FUN_180719b4c(undefined8 param_1,undefined8 param_2,int param_3,longlong param_4)
void FUN_180719b4c(undefined8 param_1,undefined8 param_2,int param_3,longlong param_4)

{
  float fVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  longlong in_R10;
  longlong lVar5;
  longlong in_R11;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar4 = (longlong)param_3;
  if (lVar4 < in_R10) {
    if (3 < in_R10 - lVar4) {
      pfVar2 = (float *)(in_R11 + 4 + lVar4 * 4);
      lVar5 = param_4 - in_R11;
      lVar3 = ((in_R10 - lVar4) - 4U >> 2) + 1;
      lVar4 = lVar4 + lVar3 * 4;
      do {
        fVar1 = pfVar2[-1];
        fVar6 = *(float *)(lVar5 + -4 + (longlong)pfVar2) * 0.70710677;
        fVar7 = *(float *)(lVar5 + (longlong)pfVar2) * 0.70710677;
        pfVar2[-1] = fVar1 * 0.70710677 - fVar6;
        fVar8 = *pfVar2;
        *(float *)(lVar5 + -4 + (longlong)pfVar2) = fVar1 * 0.70710677 + fVar6;
        fVar6 = *(float *)(lVar5 + 4 + (longlong)pfVar2) * 0.70710677;
        *pfVar2 = fVar8 * 0.70710677 - fVar7;
        fVar1 = pfVar2[1];
        *(float *)(lVar5 + (longlong)pfVar2) = fVar8 * 0.70710677 + fVar7;
        fVar7 = *(float *)(lVar5 + 8 + (longlong)pfVar2) * 0.70710677;
        pfVar2[1] = fVar1 * 0.70710677 - fVar6;
        fVar8 = pfVar2[2];
        *(float *)(lVar5 + 4 + (longlong)pfVar2) = fVar1 * 0.70710677 + fVar6;
        pfVar2[2] = fVar8 * 0.70710677 - fVar7;
        *(float *)(lVar5 + 8 + (longlong)pfVar2) = fVar8 * 0.70710677 + fVar7;
        pfVar2 = pfVar2 + 4;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (lVar4 < in_R10) {
      pfVar2 = (float *)(in_R11 + lVar4 * 4);
      lVar4 = in_R10 - lVar4;
      do {
        fVar1 = *pfVar2;
        fVar8 = *(float *)((param_4 - in_R11) + (longlong)pfVar2) * 0.70710677;
        *(float *)((param_4 - in_R11) + (longlong)pfVar2) = fVar1 * 0.70710677 + fVar8;
        *pfVar2 = fVar1 * 0.70710677 - fVar8;
        pfVar2 = pfVar2 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  return;
}





// 函数: void FUN_180719ca0(longlong param_1,int param_2,int param_3,longlong param_4,longlong param_5,
void FUN_180719ca0(longlong param_1,int param_2,int param_3,longlong param_4,longlong param_5,
                  int param_6)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  
  iVar5 = 0;
  do {
    iVar6 = 0;
    lVar4 = 0;
    if (0 < (longlong)param_2) {
      do {
        lVar3 = (longlong)(*(int *)(param_1 + 8) * iVar5 + iVar6);
        dVar7 = (double)log((double)*(float *)(param_4 + lVar3 * 4));
        iVar6 = iVar6 + 1;
        lVar1 = lVar4 * 4;
        lVar4 = lVar4 + 1;
        *(float *)(param_5 + lVar3 * 4) =
             (float)(dVar7 * 1.4426950408889634) - *(float *)(&UNK_1809533a0 + lVar1);
      } while (lVar4 < param_2);
    }
    if (param_2 < param_3) {
      iVar6 = param_2;
      if (3 < param_3 - param_2) {
        do {
          *(undefined4 *)(param_5 + (longlong)(*(int *)(param_1 + 8) * iVar5 + iVar6) * 4) =
               0xc1600000;
          *(undefined4 *)(param_5 + 4 + (longlong)(*(int *)(param_1 + 8) * iVar5 + iVar6) * 4) =
               0xc1600000;
          *(undefined4 *)(param_5 + 8 + (longlong)(*(int *)(param_1 + 8) * iVar5 + iVar6) * 4) =
               0xc1600000;
          iVar2 = *(int *)(param_1 + 8) * iVar5 + iVar6;
          iVar6 = iVar6 + 4;
          *(undefined4 *)(param_5 + 0xc + (longlong)iVar2 * 4) = 0xc1600000;
        } while (iVar6 < param_3 + -3);
      }
      for (; iVar6 < param_3; iVar6 = iVar6 + 1) {
        *(undefined4 *)(param_5 + (longlong)(*(int *)(param_1 + 8) * iVar5 + iVar6) * 4) =
             0xc1600000;
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < param_6);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180719e00(longlong param_1,int param_2,int param_3,int param_4,undefined8 param_5,
void FUN_180719e00(longlong param_1,int param_2,int param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,uint param_7,undefined8 param_8,longlong param_9,int param_10,
                  undefined8 param_11,int param_12,int param_13,float *param_14,int param_15,
                  int param_16)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uStack_128;
  int iStack_124;
  int iStack_120;
  longlong lStack_118;
  undefined4 uStack_110;
  int iStack_10c;
  int iStack_108;
  ulonglong uStack_d8;
  
  uStack_d8 = _DAT_180bf00a8 ^ (ulonglong)&uStack_128;
  iStack_10c = 0;
  lVar3 = (longlong)param_2;
  uStack_110 = 0;
  if ((param_13 != 0) ||
     (((param_15 == 0 && (iVar1 = (param_3 - param_2) * param_10, (float)(iVar1 * 2) < *param_14))
      && (iVar1 < param_12)))) {
    uStack_128 = 1;
  }
  else {
    uStack_128 = 0;
  }
  iVar1 = 0;
  lVar5 = (longlong)param_4;
  iStack_108 = (int)(((float)param_7 * *param_14 * (float)param_16) / (float)(param_10 << 9));
  lVar2 = param_1;
  do {
    if (lVar3 < lVar5) {
      lVar4 = lVar3;
      if (3 < lVar5 - lVar3) {
        lVar2 = ((lVar5 - lVar3) - 4U >> 2) + 1;
        lVar4 = lVar3 + lVar2 * 4;
        do {
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
        lVar2 = 0;
      }
      if (lVar4 < lVar5) {
        lVar2 = lVar5 - lVar4;
        do {
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < param_10);
  iVar1 = 0x1f;
  if (*(uint *)(param_9 + 0x20) != 0) {
    for (; *(uint *)(param_9 + 0x20) >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if ((*(int *)(param_9 + 0x18) - iVar1) + 2U <= param_7) {
    iStack_10c = param_15;
  }
  iStack_124 = param_3;
  iStack_120 = param_2;
  lStack_118 = param_1;
                    // WARNING: Subroutine does not return
  FUN_1808fd200(lVar2,0xffffffffffffff0);
}



int FUN_18071a480(longlong param_1,int param_2,int param_3,longlong param_4,longlong param_5,
                 int param_6,int param_7,longlong param_8,longlong param_9,longlong param_10,
                 int param_11,int param_12,int param_13,float param_14,int param_15)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int iStack_d8;
  float afStack_d0 [38];
  
  iVar8 = param_13;
  lVar3 = param_10;
  iStack_d8 = 0;
  afStack_d0[0] = 0.0;
  afStack_d0[1] = 0.0;
  fVar20 = 0.0;
  if (param_7 + 3 <= param_6) {
    func_0x000180705150(param_10,param_13,3);
  }
  fVar4 = param_14;
  if (iVar8 == 0) {
    fVar21 = *(float *)(&UNK_180953570 + (longlong)param_12 * 4);
    fVar20 = *(float *)(&UNK_180953560 + (longlong)param_12 * 4);
  }
  else {
    fVar21 = 0.1499939;
  }
  iVar8 = param_15;
  iVar13 = 0;
  if (param_2 < param_3) {
    param_13 = 1;
    iVar12 = param_2;
    do {
      pfVar14 = afStack_d0;
      iVar5 = (param_3 - iVar12) * param_11;
      iVar13 = 0;
      do {
        iVar6 = iVar13 * *(int *)(param_1 + 8) + iVar12;
        lVar11 = (longlong)iVar6;
        fVar18 = *(float *)(param_5 + lVar11 * 4);
        fVar16 = *(float *)(param_4 + lVar11 * 4);
        if (fVar18 < -9.0) {
          fVar18 = -9.0;
        }
        fVar1 = *pfVar14;
        fVar19 = (fVar16 - fVar18 * fVar20) - fVar1;
        fVar15 = fVar19 + 0.5;
        auVar17._0_8_ = (double)fVar15;
        lVar10 = (longlong)fVar15;
        if ((lVar10 != -0x8000000000000000) && ((double)lVar10 != auVar17._0_8_)) {
          auVar17._8_8_ = auVar17._0_8_;
          uVar7 = movmskpd(iVar6,auVar17);
          auVar17._0_8_ = (double)(longlong)(lVar10 - (ulonglong)(uVar7 & 1));
        }
        param_7 = (int)auVar17._0_8_;
        fVar15 = *(float *)(param_5 + lVar11 * 4);
        if (fVar15 <= -28.0) {
          fVar15 = -28.0;
        }
        if (((param_7 < 0) && (fVar16 < fVar15 - fVar4)) &&
           (param_7 = (int)((fVar15 - fVar4) - fVar16) + param_7, 0 < param_7)) {
          param_7 = 0;
        }
        iVar2 = param_7;
        iVar6 = 0x1f;
        if (*(uint *)(lVar3 + 0x20) != 0) {
          for (; *(uint *)(lVar3 + 0x20) >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        iVar9 = (iVar6 - *(int *)(lVar3 + 0x18)) + 1;
        iVar6 = iVar9 + param_6 + iVar5 * -3;
        if ((iVar12 != param_2) && (iVar6 < 0x1e)) {
          if ((iVar6 < 0x18) && (1 < param_7)) {
            param_7 = param_13;
          }
          if ((iVar6 < 0x10) && (param_7 < -1)) {
            param_7 = -1;
          }
        }
        iVar6 = param_7;
        if (((iVar8 != 0) && (1 < iVar12)) && (iVar6 = 0, param_7 < 0)) {
          iVar6 = param_7;
        }
        param_7 = iVar6;
        iVar9 = iVar9 + param_6;
        if (iVar9 < 0xf) {
          if (iVar9 < 2) {
            if (iVar9 < 1) {
              param_7 = -1;
            }
            else {
              if (0 < param_7) {
                param_7 = 0;
              }
              func_0x000180705150(lVar3,-param_7,1);
              iVar8 = param_15;
            }
          }
          else {
            iVar8 = 1;
            if (param_7 < 1) {
              iVar8 = param_7;
            }
            if (iVar8 < -1) {
              iVar8 = -1;
            }
            param_7 = iVar8;
            FUN_1807054a0(lVar3,iVar8 >> 0x1f ^ iVar8 * 2,&UNK_180953404,2);
            iVar8 = param_15;
          }
        }
        else {
          iVar8 = 0x14;
          if (iVar12 < 0x14) {
            iVar8 = iVar12;
          }
          FUN_180723060(lVar3,&param_7,(ulonglong)*(byte *)(iVar8 * 2 + param_8) << 7,
                        (ulonglong)*(byte *)((longlong)(iVar8 * 2) + 1 + param_8) << 6);
          iVar8 = param_15;
        }
        *(float *)(param_9 + (longlong)(iVar13 * *(int *)(param_1 + 8) + iVar12) * 4) =
             fVar19 - (float)param_7;
        uVar7 = iVar2 - param_7 >> 0x1f;
        iStack_d8 = iStack_d8 + ((iVar2 - param_7 ^ uVar7) - uVar7);
        fVar16 = (float)param_7;
        iVar6 = iVar13 + 1;
        *(float *)(param_5 + (longlong)(iVar13 * *(int *)(param_1 + 8) + iVar12) * 4) =
             fVar1 + fVar18 * fVar20 + fVar16;
        *pfVar14 = (fVar1 + fVar16) - fVar16 * fVar21;
        pfVar14 = pfVar14 + 1;
        iVar13 = iVar6;
      } while (iVar6 < param_11);
      iVar12 = iVar12 + 1;
      iVar13 = iStack_d8;
    } while (iVar12 < param_3);
  }
  if (iVar8 != 0) {
    iVar13 = 0;
  }
  return iVar13;
}



int FUN_18071a56f(int param_1,undefined8 param_2,int param_3,int param_4)

{
  float fVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong unaff_RBX;
  longlong unaff_RSI;
  int unaff_EDI;
  int in_R10D;
  longlong in_R11;
  longlong unaff_R12;
  int iVar9;
  int unaff_R14D;
  int unaff_R15D;
  float *pfVar10;
  float fVar11;
  undefined1 auVar15 [12];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar16;
  undefined1 auVar17 [16];
  double dVar18;
  float fVar19;
  float fVar20;
  float unaff_XMM10_Da;
  float unaff_XMM14_Da;
  int iStackX_20;
  int in_stack_00000108;
  int in_stack_00000110;
  longlong in_stack_00000118;
  longlong in_stack_00000120;
  int in_stack_00000128;
  int iStack0000000000000130;
  longlong in_stack_00000138;
  longlong in_stack_00000140;
  int in_stack_00000150;
  int iStack0000000000000160;
  float in_stack_00000168;
  int in_stack_00000170;
  undefined8 uVar12;
  
  fVar3 = in_stack_00000168;
  iStack0000000000000160 = 1;
  do {
    pfVar10 = (float *)&stack0x00000028;
    iVar9 = param_3 + (unaff_R15D - unaff_EDI) * param_1 * -3;
    do {
      iVar4 = unaff_R14D * *(int *)(unaff_R12 + 8) + unaff_EDI;
      lVar8 = (longlong)iVar4;
      fVar19 = *(float *)(in_stack_00000120 + lVar8 * 4);
      fVar16 = *(float *)(in_R11 + lVar8 * 4);
      if (fVar19 < -9.0) {
        fVar19 = -9.0;
      }
      fVar1 = *pfVar10;
      dVar18 = 0.0;
      fVar20 = (fVar16 - fVar19 * unaff_XMM10_Da) - fVar1;
      fVar11 = fVar20 + 0.5;
      auVar17._0_8_ = (double)fVar11;
      lVar7 = (longlong)fVar11;
      if ((lVar7 != unaff_RBX) && (dVar18 = (double)lVar7, dVar18 != auVar17._0_8_)) {
        auVar17._8_8_ = auVar17._0_8_;
        uVar5 = movmskpd(iVar4,auVar17);
        auVar17._0_8_ = (double)(longlong)(lVar7 - (ulonglong)(uVar5 & 1));
      }
      iStack0000000000000130 = (int)auVar17._0_8_;
      fVar11 = *(float *)(in_stack_00000120 + lVar8 * 4);
      auVar15 = (undefined1  [12])0x0;
      if (fVar11 <= -28.0) {
        auVar15 = ZEXT412(0);
        fVar11 = -28.0;
      }
      auVar13._0_4_ = fVar11 - fVar3;
      auVar13._4_12_ = auVar15;
      uVar12 = auVar13._0_8_;
      if ((iStack0000000000000130 < 0) && (fVar16 < auVar13._0_4_)) {
        auVar14._0_4_ = auVar13._0_4_ - fVar16;
        auVar14._4_12_ = auVar15;
        uVar12 = auVar14._0_8_;
        iStack0000000000000130 = (int)auVar14._0_4_ + iStack0000000000000130;
        if (0 < iStack0000000000000130) {
          iStack0000000000000130 = 0;
        }
      }
      iVar2 = iStack0000000000000130;
      iVar4 = 0x1f;
      if (*(uint *)(unaff_RSI + 0x20) != 0) {
        for (; *(uint *)(unaff_RSI + 0x20) >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      iVar6 = (iVar4 - *(int *)(unaff_RSI + 0x18)) + 1;
      iVar4 = iVar6 + iVar9;
      if ((unaff_EDI != in_R10D) && (iVar4 < 0x1e)) {
        if ((iVar4 < 0x18) && (1 < iStack0000000000000130)) {
          iStack0000000000000130 = iStack0000000000000160;
        }
        if ((iVar4 < 0x10) && (iStack0000000000000130 < -1)) {
          iStack0000000000000130 = -1;
        }
      }
      iVar4 = iStack0000000000000130;
      if (((param_4 != 0) && (1 < unaff_EDI)) && (iVar4 = 0, iStack0000000000000130 < 0)) {
        iVar4 = iStack0000000000000130;
      }
      iStack0000000000000130 = iVar4;
      iVar6 = iVar6 + param_3;
      if (iVar6 < 0xf) {
        if (iVar6 < 2) {
          if (iVar6 < 1) {
            iStack0000000000000130 = -1;
          }
          else {
            if (0 < iStack0000000000000130) {
              iStack0000000000000130 = 0;
            }
            func_0x000180705150(uVar12,-iStack0000000000000130,dVar18);
            in_R11 = in_stack_00000118;
            param_3 = in_stack_00000128;
            in_R10D = in_stack_00000108;
            param_4 = in_stack_00000170;
          }
        }
        else {
          iVar4 = 1;
          if (iStack0000000000000130 < 1) {
            iVar4 = iStack0000000000000130;
          }
          if (iVar4 < -1) {
            iVar4 = -1;
          }
          iStack0000000000000130 = iVar4;
          FUN_1807054a0(uVar12,iVar4 >> 0x1f ^ iVar4 * 2,&UNK_180953404,2);
          in_R11 = in_stack_00000118;
          param_3 = in_stack_00000128;
          in_R10D = in_stack_00000108;
          param_4 = in_stack_00000170;
        }
      }
      else {
        iVar4 = 0x14;
        if (unaff_EDI < 0x14) {
          iVar4 = unaff_EDI;
        }
        FUN_180723060(uVar12,&stack0x00000130,
                      (ulonglong)*(byte *)(iVar4 * 2 + in_stack_00000138) << 7,
                      (ulonglong)*(byte *)((longlong)(iVar4 * 2) + 1 + in_stack_00000138) << 6);
        in_R11 = in_stack_00000118;
        param_3 = in_stack_00000128;
        in_R10D = in_stack_00000108;
        param_4 = in_stack_00000170;
      }
      param_1 = in_stack_00000150;
      *(float *)(in_stack_00000140 +
                (longlong)(unaff_R14D * *(int *)(unaff_R12 + 8) + unaff_EDI) * 4) =
           fVar20 - (float)iStack0000000000000130;
      unaff_RBX = -0x8000000000000000;
      uVar5 = iVar2 - iStack0000000000000130 >> 0x1f;
      iStackX_20 = iStackX_20 + ((iVar2 - iStack0000000000000130 ^ uVar5) - uVar5);
      fVar16 = (float)iStack0000000000000130;
      iVar4 = unaff_R14D + 1;
      *(float *)(in_stack_00000120 +
                (longlong)(unaff_R14D * *(int *)(unaff_R12 + 8) + unaff_EDI) * 4) =
           fVar1 + fVar19 * unaff_XMM10_Da + fVar16;
      *pfVar10 = (fVar1 + fVar16) - fVar16 * unaff_XMM14_Da;
      pfVar10 = pfVar10 + 1;
      unaff_R14D = iVar4;
    } while (iVar4 < param_1);
    unaff_EDI = unaff_EDI + 1;
    unaff_R14D = 0;
    unaff_R15D = in_stack_00000110;
  } while (unaff_EDI < in_stack_00000110);
  if (param_4 != 0) {
    iStackX_20 = 0;
  }
  return iStackX_20;
}



undefined4 FUN_18071a8ff(undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  undefined4 unaff_R14D;
  
  if (param_4 != 0) {
    param_2 = unaff_R14D;
  }
  return param_2;
}





// 函数: void FUN_18071a930(longlong param_1,uint param_2,int param_3,longlong param_4,longlong param_5,
void FUN_18071a930(longlong param_1,uint param_2,int param_3,longlong param_4,longlong param_5,
                  longlong param_6,longlong param_7,int param_8,undefined8 param_9,int param_10)

{
  float *pfVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  int *piVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  int iStack_98;
  
  uVar9 = (ulonglong)(int)param_2;
  iStack_98 = 0;
  uVar10 = uVar9;
  do {
    uVar6 = uVar10 & 0xffffffff;
    if ((longlong)uVar9 < (longlong)param_3) {
      piVar8 = (int *)(param_6 + uVar9 * 4);
      uVar10 = uVar9;
      do {
        if (param_8 < param_10) break;
        iVar5 = (int)uVar6;
        if ((*piVar8 < 8) && (*(int *)((param_7 - param_6) + (longlong)piVar8) == iStack_98)) {
          iVar7 = 0;
          do {
            pfVar1 = (float *)(param_5 + (longlong)(*(int *)(param_1 + 8) * iVar7 + iVar5) * 4);
            bVar2 = 0.0 < *pfVar1 || *pfVar1 == 0.0;
            FUN_180705180(param_9,bVar2,1);
            param_8 = param_8 + -1;
            lVar4 = (longlong)(*(int *)(param_1 + 8) * iVar7 + iVar5);
            fVar11 = (float)(1 << (0xdU - (char)*piVar8 & 0x1f)) * ((float)bVar2 - 0.5) *
                     6.1035156e-05;
            *(float *)(param_4 + lVar4 * 4) = fVar11 + *(float *)(param_4 + lVar4 * 4);
            iVar3 = *(int *)(param_1 + 8) * iVar7;
            iVar7 = iVar7 + 1;
            lVar4 = (longlong)(iVar3 + iVar5);
            *(float *)(param_5 + lVar4 * 4) = *(float *)(param_5 + lVar4 * 4) - fVar11;
          } while (iVar7 < param_10);
        }
        uVar10 = uVar10 + 1;
        uVar6 = (ulonglong)(iVar5 + 1);
        piVar8 = piVar8 + 1;
      } while ((longlong)uVar10 < (longlong)param_3);
      uVar10 = (ulonglong)param_2;
    }
    iStack_98 = iStack_98 + 1;
    if (1 < iStack_98) {
      return;
    }
  } while( true );
}





