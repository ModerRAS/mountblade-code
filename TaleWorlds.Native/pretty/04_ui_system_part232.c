#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part232.c - 16 个函数

// 函数: void FUN_18079f269(uint64_t param_1,longlong param_2,uint64_t param_3,longlong param_4)
void FUN_18079f269(uint64_t param_1,longlong param_2,uint64_t param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int in_R10D;
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
  
  pfVar7 = (float *)&system_data_9950;
  pfVar6 = (float *)(param_2 + 0x50);
  pfVar5 = (float *)&system_data_9958;
  do {
    fVar1 = pfVar5[3];
    fVar2 = pfVar7[3];
    pfVar7 = pfVar7 + 2;
    fVar3 = pfVar5[2];
    fVar4 = *pfVar7;
    fVar9 = *pfVar6 + pfVar6[2];
    fVar11 = pfVar6[-4] + pfVar6[-2];
    fVar15 = pfVar6[-4] - pfVar6[-2];
    fVar13 = *pfVar6 - pfVar6[2];
    fVar17 = fVar3 - (fVar2 + fVar2) * fVar1;
    fVar18 = (fVar2 + fVar2) * fVar3 - fVar1;
    fVar10 = pfVar6[-1] + pfVar6[-3];
    fVar16 = pfVar6[-3] - pfVar6[-1];
    fVar8 = pfVar6[3] + pfVar6[1];
    fVar14 = pfVar6[1] - pfVar6[3];
    fVar12 = fVar11 - fVar9;
    pfVar6[-4] = fVar9 + fVar11;
    fVar11 = fVar10 - fVar8;
    fVar9 = fVar15 - fVar14;
    fVar14 = fVar14 + fVar15;
    pfVar6[-3] = fVar8 + fVar10;
    *pfVar6 = fVar4 * fVar12 - fVar2 * fVar11;
    pfVar6[1] = fVar4 * fVar11 + fVar2 * fVar12;
    fVar8 = fVar13 + fVar16;
    fVar16 = fVar16 - fVar13;
    pfVar6[-2] = fVar3 * fVar9 - fVar1 * fVar8;
    pfVar6[-1] = fVar1 * fVar9 + fVar3 * fVar8;
    pfVar6[2] = fVar17 * fVar14 - fVar18 * fVar16;
    pfVar6[3] = fVar17 * fVar16 + fVar18 * fVar14;
    fVar1 = pfVar5[4];
    fVar3 = pfVar5[5];
    fVar11 = pfVar6[6] + pfVar6[4];
    fVar15 = pfVar6[4] - pfVar6[6];
    fVar9 = pfVar6[10] + pfVar6[8];
    fVar13 = pfVar6[8] - pfVar6[10];
    in_R10D = in_R10D + 0x10;
    fVar17 = fVar1 - (fVar4 + fVar4) * fVar3;
    fVar10 = pfVar6[7] + pfVar6[5];
    fVar16 = pfVar6[5] - pfVar6[7];
    fVar18 = (fVar4 + fVar4) * fVar1 - fVar3;
    fVar8 = pfVar6[0xb] + pfVar6[9];
    fVar14 = pfVar6[9] - pfVar6[0xb];
    fVar12 = fVar11 - fVar9;
    pfVar6[4] = fVar9 + fVar11;
    fVar11 = fVar10 - fVar8;
    fVar9 = fVar15 - fVar14;
    fVar14 = fVar14 + fVar15;
    pfVar6[5] = fVar8 + fVar10;
    fVar8 = fVar13 + fVar16;
    fVar16 = fVar16 - fVar13;
    pfVar6[8] = -(fVar2 * fVar12) - fVar4 * fVar11;
    pfVar6[9] = fVar4 * fVar12 - fVar2 * fVar11;
    pfVar6[6] = fVar1 * fVar9 - fVar3 * fVar8;
    pfVar6[7] = fVar3 * fVar9 + fVar1 * fVar8;
    pfVar6[10] = fVar17 * fVar14 - fVar18 * fVar16;
    pfVar6[0xb] = fVar17 * fVar16 + fVar18 * fVar14;
    pfVar6 = pfVar6 + 0x10;
    pfVar5 = pfVar5 + 4;
  } while (in_R10D < *(int *)(param_4 + 0x14030) * 2);
  return;
}





// 函数: void FUN_18079f58c(void)
void FUN_18079f58c(void)

{
  return;
}





// 函数: void FUN_18079f5c0(longlong param_1,longlong param_2)
void FUN_18079f5c0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar6 = *(uint *)(param_1 + 0x14030);
  iVar4 = 2;
  if (8 < (int)(uVar6 * 2)) {
    FUN_18079f0b0();
    uVar6 = *(uint *)(param_1 + 0x14030);
    iVar4 = 8;
    if (0x20 < (int)(uVar6 * 2)) {
      iVar1 = 0x20;
      do {
        iVar4 = iVar1;
        FUN_18079fa70(param_1,param_2);
        uVar6 = *(uint *)(param_1 + 0x14030);
        iVar1 = iVar4 * 4;
      } while (iVar4 * 4 < (int)(uVar6 * 2));
    }
  }
  lVar7 = (longlong)iVar4;
  if (((iVar4 * 2 ^ uVar6) & 0x7fffffff) == 0) {
    if (0 < iVar4) {
      pfVar3 = (float *)(param_2 + 4 + lVar7 * 4);
      uVar5 = (ulonglong)((iVar4 - 1U >> 1) + 1);
      do {
        fVar12 = -pfVar3[-lVar7] - *pfVar3;
        fVar14 = *pfVar3 - pfVar3[-lVar7];
        fVar9 = pfVar3[lVar7 * 2 + -1] + pfVar3[lVar7 + -1];
        fVar11 = pfVar3[lVar7 + -1] - pfVar3[lVar7 * 2 + -1];
        fVar8 = pfVar3[lVar7 * 2] + pfVar3[lVar7];
        fVar13 = pfVar3[-1 - lVar7] + pfVar3[-1];
        fVar15 = pfVar3[-1 - lVar7] - pfVar3[-1];
        fVar10 = pfVar3[lVar7] - pfVar3[lVar7 * 2];
        pfVar3[-lVar7] = fVar12 - fVar8;
        pfVar3[-1 - lVar7] = fVar9 + fVar13;
        pfVar3[lVar7 + -1] = fVar13 - fVar9;
        pfVar3[lVar7] = fVar8 + fVar12;
        *pfVar3 = fVar14 - fVar11;
        pfVar3[-1] = fVar15 - fVar10;
        pfVar3[lVar7 * 2 + -1] = fVar10 + fVar15;
        pfVar3[lVar7 * 2] = fVar11 + fVar14;
        pfVar3 = pfVar3 + 2;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      return;
    }
  }
  else if (0 < iVar4) {
    pfVar3 = (float *)(param_2 + 4 + lVar7 * 4);
    lVar2 = (lVar7 - 1U >> 1) + 1;
    do {
      fVar8 = pfVar3[-1 - lVar7];
      fVar9 = pfVar3[-1];
      fVar10 = pfVar3[-lVar7];
      fVar11 = *pfVar3;
      pfVar3[-1 - lVar7] = fVar8 + fVar9;
      pfVar3[-lVar7] = -fVar10 - *pfVar3;
      pfVar3[-1] = fVar8 - fVar9;
      *pfVar3 = fVar11 - fVar10;
      pfVar3 = pfVar3 + 2;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}





// 函数: void FUN_18079f5d0(longlong param_1,uint64_t param_2,uint64_t param_3,uint param_4)
void FUN_18079f5d0(longlong param_1,uint64_t param_2,uint64_t param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  float *pfVar3;
  longlong unaff_RSI;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  iVar4 = 2;
  if (8 < (int)(param_4 * 2)) {
    FUN_18079f0b0();
    param_4 = *(uint *)(param_1 + 0x14030);
    iVar4 = 8;
    if (0x20 < (int)(param_4 * 2)) {
      iVar1 = 0x20;
      do {
        iVar4 = iVar1;
        FUN_18079fa70(param_1);
        param_4 = *(uint *)(param_1 + 0x14030);
        iVar1 = iVar4 * 4;
      } while (iVar4 * 4 < (int)(param_4 * 2));
    }
  }
  lVar6 = (longlong)iVar4;
  if (((iVar4 * 2 ^ param_4) & 0x7fffffff) == 0) {
    if (0 < iVar4) {
      pfVar3 = (float *)(unaff_RSI + 4 + lVar6 * 4);
      uVar5 = (ulonglong)((iVar4 - 1U >> 1) + 1);
      do {
        fVar11 = -pfVar3[-lVar6] - *pfVar3;
        fVar13 = *pfVar3 - pfVar3[-lVar6];
        fVar8 = pfVar3[lVar6 * 2 + -1] + pfVar3[lVar6 + -1];
        fVar10 = pfVar3[lVar6 + -1] - pfVar3[lVar6 * 2 + -1];
        fVar7 = pfVar3[lVar6 * 2] + pfVar3[lVar6];
        fVar12 = pfVar3[-1 - lVar6] + pfVar3[-1];
        fVar14 = pfVar3[-1 - lVar6] - pfVar3[-1];
        fVar9 = pfVar3[lVar6] - pfVar3[lVar6 * 2];
        pfVar3[-lVar6] = fVar11 - fVar7;
        pfVar3[-1 - lVar6] = fVar8 + fVar12;
        pfVar3[lVar6 + -1] = fVar12 - fVar8;
        pfVar3[lVar6] = fVar7 + fVar11;
        *pfVar3 = fVar13 - fVar10;
        pfVar3[-1] = fVar14 - fVar9;
        pfVar3[lVar6 * 2 + -1] = fVar9 + fVar14;
        pfVar3[lVar6 * 2] = fVar10 + fVar13;
        pfVar3 = pfVar3 + 2;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      return;
    }
  }
  else if (0 < iVar4) {
    pfVar3 = (float *)(unaff_RSI + 4 + lVar6 * 4);
    lVar2 = (lVar6 - 1U >> 1) + 1;
    do {
      fVar7 = pfVar3[-1 - lVar6];
      fVar8 = pfVar3[-1];
      fVar9 = pfVar3[-lVar6];
      fVar10 = *pfVar3;
      pfVar3[-1 - lVar6] = fVar7 + fVar8;
      pfVar3[-lVar6] = -fVar9 - *pfVar3;
      pfVar3[-1] = fVar7 - fVar8;
      *pfVar3 = fVar10 - fVar9;
      pfVar3 = pfVar3 + 2;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}





// 函数: void FUN_18079f605(uint64_t param_1,uint64_t param_2,int param_3)
void FUN_18079f605(uint64_t param_1,uint64_t param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  iVar1 = param_3 + 0x18;
  do {
    iVar4 = iVar1;
    FUN_18079fa70();
    iVar1 = iVar4 * 4;
  } while (iVar4 * 4 < (int)(*(uint *)(unaff_RDI + 0x14030) * 2));
  lVar6 = (longlong)iVar4;
  if (((iVar4 * 2 ^ *(uint *)(unaff_RDI + 0x14030)) & 0x7fffffff) == 0) {
    if (0 < iVar4) {
      pfVar3 = (float *)(unaff_RSI + 4 + lVar6 * 4);
      uVar5 = (ulonglong)((iVar4 - 1U >> 1) + 1);
      do {
        fVar11 = -pfVar3[-lVar6] - *pfVar3;
        fVar13 = *pfVar3 - pfVar3[-lVar6];
        fVar8 = pfVar3[lVar6 * 2 + -1] + pfVar3[lVar6 + -1];
        fVar10 = pfVar3[lVar6 + -1] - pfVar3[lVar6 * 2 + -1];
        fVar7 = pfVar3[lVar6 * 2] + pfVar3[lVar6];
        fVar12 = pfVar3[-1 - lVar6] + pfVar3[-1];
        fVar14 = pfVar3[-1 - lVar6] - pfVar3[-1];
        fVar9 = pfVar3[lVar6] - pfVar3[lVar6 * 2];
        pfVar3[-lVar6] = fVar11 - fVar7;
        pfVar3[-1 - lVar6] = fVar8 + fVar12;
        pfVar3[lVar6 + -1] = fVar12 - fVar8;
        pfVar3[lVar6] = fVar7 + fVar11;
        *pfVar3 = fVar13 - fVar10;
        pfVar3[-1] = fVar14 - fVar9;
        pfVar3[lVar6 * 2 + -1] = fVar9 + fVar14;
        pfVar3[lVar6 * 2] = fVar10 + fVar13;
        pfVar3 = pfVar3 + 2;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      return;
    }
  }
  else if (0 < iVar4) {
    pfVar3 = (float *)(unaff_RSI + 4 + lVar6 * 4);
    lVar2 = (lVar6 - 1U >> 1) + 1;
    do {
      fVar7 = pfVar3[-1 - lVar6];
      fVar8 = pfVar3[-1];
      fVar9 = pfVar3[-lVar6];
      fVar10 = *pfVar3;
      pfVar3[-1 - lVar6] = fVar7 + fVar8;
      pfVar3[-lVar6] = -fVar9 - *pfVar3;
      pfVar3[-1] = fVar7 - fVar8;
      *pfVar3 = fVar10 - fVar9;
      pfVar3 = pfVar3 + 2;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}





// 函数: void FUN_18079f63d(uint64_t param_1,uint64_t param_2,int param_3,uint param_4)
void FUN_18079f63d(uint64_t param_1,uint64_t param_2,int param_3,uint param_4)

{
  longlong lVar1;
  float *pfVar2;
  longlong unaff_RSI;
  ulonglong uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar4 = (longlong)param_3;
  if (((param_3 * 2 ^ param_4) & 0x7fffffff) == 0) {
    if (0 < param_3) {
      pfVar2 = (float *)(unaff_RSI + 4 + lVar4 * 4);
      uVar3 = (ulonglong)((param_3 - 1U >> 1) + 1);
      do {
        fVar9 = -pfVar2[-lVar4] - *pfVar2;
        fVar11 = *pfVar2 - pfVar2[-lVar4];
        fVar6 = pfVar2[lVar4 * 2 + -1] + pfVar2[lVar4 + -1];
        fVar8 = pfVar2[lVar4 + -1] - pfVar2[lVar4 * 2 + -1];
        fVar5 = pfVar2[lVar4 * 2] + pfVar2[lVar4];
        fVar10 = pfVar2[-1 - lVar4] + pfVar2[-1];
        fVar12 = pfVar2[-1 - lVar4] - pfVar2[-1];
        fVar7 = pfVar2[lVar4] - pfVar2[lVar4 * 2];
        pfVar2[-lVar4] = fVar9 - fVar5;
        pfVar2[-1 - lVar4] = fVar6 + fVar10;
        pfVar2[lVar4 + -1] = fVar10 - fVar6;
        pfVar2[lVar4] = fVar5 + fVar9;
        *pfVar2 = fVar11 - fVar8;
        pfVar2[-1] = fVar12 - fVar7;
        pfVar2[lVar4 * 2 + -1] = fVar7 + fVar12;
        pfVar2[lVar4 * 2] = fVar8 + fVar11;
        pfVar2 = pfVar2 + 2;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      return;
    }
  }
  else if (0 < param_3) {
    pfVar2 = (float *)(unaff_RSI + 4 + lVar4 * 4);
    lVar1 = (lVar4 - 1U >> 1) + 1;
    do {
      fVar5 = pfVar2[-1 - lVar4];
      fVar6 = pfVar2[-1];
      fVar7 = pfVar2[-lVar4];
      fVar8 = *pfVar2;
      pfVar2[-1 - lVar4] = fVar5 + fVar6;
      pfVar2[-lVar4] = -fVar7 - *pfVar2;
      pfVar2[-1] = fVar5 - fVar6;
      *pfVar2 = fVar8 - fVar7;
      pfVar2 = pfVar2 + 2;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}





// 函数: void FUN_18079f65a(uint64_t param_1,uint64_t param_2,int param_3)
void FUN_18079f65a(uint64_t param_1,uint64_t param_2,int param_3)

{
  float *pfVar1;
  longlong unaff_RSI;
  ulonglong uVar2;
  longlong in_R10;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (0 < param_3) {
    pfVar1 = (float *)(unaff_RSI + 4 + in_R10 * 4);
    uVar2 = (ulonglong)((param_3 - 1U >> 1) + 1);
    do {
      fVar7 = -pfVar1[-in_R10] - *pfVar1;
      fVar9 = *pfVar1 - pfVar1[-in_R10];
      fVar4 = pfVar1[in_R10 * 2 + -1] + pfVar1[in_R10 + -1];
      fVar6 = pfVar1[in_R10 + -1] - pfVar1[in_R10 * 2 + -1];
      fVar3 = pfVar1[in_R10 * 2] + pfVar1[in_R10];
      fVar8 = pfVar1[-1 - in_R10] + pfVar1[-1];
      fVar10 = pfVar1[-1 - in_R10] - pfVar1[-1];
      fVar5 = pfVar1[in_R10] - pfVar1[in_R10 * 2];
      pfVar1[-in_R10] = fVar7 - fVar3;
      pfVar1[-1 - in_R10] = fVar4 + fVar8;
      pfVar1[in_R10 + -1] = fVar8 - fVar4;
      pfVar1[in_R10] = fVar3 + fVar7;
      *pfVar1 = fVar9 - fVar6;
      pfVar1[-1] = fVar10 - fVar5;
      pfVar1[in_R10 * 2 + -1] = fVar5 + fVar10;
      pfVar1[in_R10 * 2] = fVar6 + fVar9;
      pfVar1 = pfVar1 + 2;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    return;
  }
  return;
}





// 函数: void FUN_18079f663(uint64_t param_1,uint64_t param_2,int param_3)
void FUN_18079f663(uint64_t param_1,uint64_t param_2,int param_3)

{
  float *pfVar1;
  longlong unaff_RSI;
  ulonglong uVar2;
  longlong in_R10;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  pfVar1 = (float *)(unaff_RSI + 4 + in_R10 * 4);
  uVar2 = (ulonglong)((param_3 - 1U >> 1) + 1);
  do {
    fVar7 = -pfVar1[-in_R10] - *pfVar1;
    fVar9 = *pfVar1 - pfVar1[-in_R10];
    fVar4 = pfVar1[in_R10 * 2 + -1] + pfVar1[in_R10 + -1];
    fVar6 = pfVar1[in_R10 + -1] - pfVar1[in_R10 * 2 + -1];
    fVar3 = pfVar1[in_R10 * 2] + pfVar1[in_R10];
    fVar8 = pfVar1[-1 - in_R10] + pfVar1[-1];
    fVar10 = pfVar1[-1 - in_R10] - pfVar1[-1];
    fVar5 = pfVar1[in_R10] - pfVar1[in_R10 * 2];
    pfVar1[-in_R10] = fVar7 - fVar3;
    pfVar1[-1 - in_R10] = fVar4 + fVar8;
    pfVar1[in_R10 + -1] = fVar8 - fVar4;
    pfVar1[in_R10] = fVar3 + fVar7;
    *pfVar1 = fVar9 - fVar6;
    pfVar1[-1] = fVar10 - fVar5;
    pfVar1[in_R10 * 2 + -1] = fVar5 + fVar10;
    pfVar1[in_R10 * 2] = fVar6 + fVar9;
    pfVar1 = pfVar1 + 2;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  return;
}





// 函数: void FUN_18079f79f(uint64_t param_1,uint64_t param_2,int param_3)
void FUN_18079f79f(uint64_t param_1,uint64_t param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float *pfVar6;
  longlong unaff_RSI;
  longlong in_R10;
  
  if (0 < param_3) {
    pfVar6 = (float *)(unaff_RSI + 4 + in_R10 * 4);
    lVar5 = (in_R10 - 1U >> 1) + 1;
    do {
      fVar1 = pfVar6[-1 - in_R10];
      fVar2 = pfVar6[-1];
      fVar3 = pfVar6[-in_R10];
      fVar4 = *pfVar6;
      pfVar6[-1 - in_R10] = fVar1 + fVar2;
      pfVar6[-in_R10] = -fVar3 - *pfVar6;
      pfVar6[-1] = fVar1 - fVar2;
      *pfVar6 = fVar4 - fVar3;
      pfVar6 = pfVar6 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}





// 函数: void FUN_18079f830(longlong param_1,longlong param_2)
void FUN_18079f830(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar6 = *(uint *)(param_1 + 0x14030);
  iVar4 = 2;
  if (8 < (int)(uVar6 * 2)) {
    FUN_18079f0b0();
    uVar6 = *(uint *)(param_1 + 0x14030);
    iVar4 = 8;
    if (0x20 < (int)(uVar6 * 2)) {
      iVar1 = 0x20;
      do {
        iVar4 = iVar1;
        FUN_18079fa70(param_1,param_2);
        uVar6 = *(uint *)(param_1 + 0x14030);
        iVar1 = iVar4 * 4;
      } while (iVar4 * 4 < (int)(uVar6 * 2));
    }
  }
  lVar7 = (longlong)iVar4;
  if (((iVar4 * 2 ^ uVar6) & 0x7fffffff) == 0) {
    if (0 < iVar4) {
      pfVar3 = (float *)(param_2 + 4 + lVar7 * 4);
      uVar5 = (ulonglong)((iVar4 - 1U >> 1) + 1);
      do {
        fVar9 = pfVar3[lVar7 * 2 + -1] + pfVar3[lVar7 + -1];
        fVar11 = pfVar3[lVar7 + -1] - pfVar3[lVar7 * 2 + -1];
        fVar13 = pfVar3[-1 - lVar7] + pfVar3[-1];
        fVar15 = pfVar3[-1 - lVar7] - pfVar3[-1];
        fVar8 = pfVar3[lVar7 * 2] + pfVar3[lVar7];
        fVar12 = pfVar3[-lVar7] + *pfVar3;
        fVar14 = pfVar3[-lVar7] - *pfVar3;
        fVar10 = pfVar3[lVar7] - pfVar3[lVar7 * 2];
        pfVar3[-1 - lVar7] = fVar9 + fVar13;
        pfVar3[-lVar7] = fVar8 + fVar12;
        pfVar3[lVar7 + -1] = fVar13 - fVar9;
        pfVar3[lVar7] = fVar12 - fVar8;
        pfVar3[-1] = fVar15 - fVar10;
        *pfVar3 = fVar11 + fVar14;
        pfVar3[lVar7 * 2 + -1] = fVar10 + fVar15;
        pfVar3[lVar7 * 2] = fVar14 - fVar11;
        pfVar3 = pfVar3 + 2;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      return;
    }
  }
  else if (0 < iVar4) {
    pfVar3 = (float *)(param_2 + 4 + lVar7 * 4);
    lVar2 = (lVar7 - 1U >> 1) + 1;
    do {
      fVar8 = pfVar3[-1 - lVar7];
      fVar9 = pfVar3[-1];
      fVar10 = pfVar3[-lVar7];
      fVar11 = *pfVar3;
      pfVar3[-1 - lVar7] = fVar8 + fVar9;
      pfVar3[-lVar7] = fVar10 + *pfVar3;
      pfVar3[-1] = fVar8 - fVar9;
      *pfVar3 = fVar10 - fVar11;
      pfVar3 = pfVar3 + 2;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}





// 函数: void FUN_18079f840(longlong param_1,uint64_t param_2,uint64_t param_3,uint param_4)
void FUN_18079f840(longlong param_1,uint64_t param_2,uint64_t param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  float *pfVar3;
  longlong unaff_RSI;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  iVar4 = 2;
  if (8 < (int)(param_4 * 2)) {
    FUN_18079f0b0();
    param_4 = *(uint *)(param_1 + 0x14030);
    iVar4 = 8;
    if (0x20 < (int)(param_4 * 2)) {
      iVar1 = 0x20;
      do {
        iVar4 = iVar1;
        FUN_18079fa70(param_1);
        param_4 = *(uint *)(param_1 + 0x14030);
        iVar1 = iVar4 * 4;
      } while (iVar4 * 4 < (int)(param_4 * 2));
    }
  }
  lVar6 = (longlong)iVar4;
  if (((iVar4 * 2 ^ param_4) & 0x7fffffff) == 0) {
    if (0 < iVar4) {
      pfVar3 = (float *)(unaff_RSI + 4 + lVar6 * 4);
      uVar5 = (ulonglong)((iVar4 - 1U >> 1) + 1);
      do {
        fVar8 = pfVar3[lVar6 * 2 + -1] + pfVar3[lVar6 + -1];
        fVar10 = pfVar3[lVar6 + -1] - pfVar3[lVar6 * 2 + -1];
        fVar12 = pfVar3[-1 - lVar6] + pfVar3[-1];
        fVar14 = pfVar3[-1 - lVar6] - pfVar3[-1];
        fVar7 = pfVar3[lVar6 * 2] + pfVar3[lVar6];
        fVar11 = pfVar3[-lVar6] + *pfVar3;
        fVar13 = pfVar3[-lVar6] - *pfVar3;
        fVar9 = pfVar3[lVar6] - pfVar3[lVar6 * 2];
        pfVar3[-1 - lVar6] = fVar8 + fVar12;
        pfVar3[-lVar6] = fVar7 + fVar11;
        pfVar3[lVar6 + -1] = fVar12 - fVar8;
        pfVar3[lVar6] = fVar11 - fVar7;
        pfVar3[-1] = fVar14 - fVar9;
        *pfVar3 = fVar10 + fVar13;
        pfVar3[lVar6 * 2 + -1] = fVar9 + fVar14;
        pfVar3[lVar6 * 2] = fVar13 - fVar10;
        pfVar3 = pfVar3 + 2;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      return;
    }
  }
  else if (0 < iVar4) {
    pfVar3 = (float *)(unaff_RSI + 4 + lVar6 * 4);
    lVar2 = (lVar6 - 1U >> 1) + 1;
    do {
      fVar7 = pfVar3[-1 - lVar6];
      fVar8 = pfVar3[-1];
      fVar9 = pfVar3[-lVar6];
      fVar10 = *pfVar3;
      pfVar3[-1 - lVar6] = fVar7 + fVar8;
      pfVar3[-lVar6] = fVar9 + *pfVar3;
      pfVar3[-1] = fVar7 - fVar8;
      *pfVar3 = fVar9 - fVar10;
      pfVar3 = pfVar3 + 2;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}





// 函数: void FUN_18079f872(uint64_t param_1,uint64_t param_2,int param_3)
void FUN_18079f872(uint64_t param_1,uint64_t param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  iVar1 = param_3 + 0x18;
  do {
    iVar4 = iVar1;
    FUN_18079fa70();
    iVar1 = iVar4 * 4;
  } while (iVar4 * 4 < (int)(*(uint *)(unaff_RDI + 0x14030) * 2));
  lVar6 = (longlong)iVar4;
  if (((iVar4 * 2 ^ *(uint *)(unaff_RDI + 0x14030)) & 0x7fffffff) == 0) {
    if (0 < iVar4) {
      pfVar3 = (float *)(unaff_RSI + 4 + lVar6 * 4);
      uVar5 = (ulonglong)((iVar4 - 1U >> 1) + 1);
      do {
        fVar8 = pfVar3[lVar6 * 2 + -1] + pfVar3[lVar6 + -1];
        fVar10 = pfVar3[lVar6 + -1] - pfVar3[lVar6 * 2 + -1];
        fVar12 = pfVar3[-1 - lVar6] + pfVar3[-1];
        fVar14 = pfVar3[-1 - lVar6] - pfVar3[-1];
        fVar7 = pfVar3[lVar6 * 2] + pfVar3[lVar6];
        fVar11 = pfVar3[-lVar6] + *pfVar3;
        fVar13 = pfVar3[-lVar6] - *pfVar3;
        fVar9 = pfVar3[lVar6] - pfVar3[lVar6 * 2];
        pfVar3[-1 - lVar6] = fVar8 + fVar12;
        pfVar3[-lVar6] = fVar7 + fVar11;
        pfVar3[lVar6 + -1] = fVar12 - fVar8;
        pfVar3[lVar6] = fVar11 - fVar7;
        pfVar3[-1] = fVar14 - fVar9;
        *pfVar3 = fVar10 + fVar13;
        pfVar3[lVar6 * 2 + -1] = fVar9 + fVar14;
        pfVar3[lVar6 * 2] = fVar13 - fVar10;
        pfVar3 = pfVar3 + 2;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      return;
    }
  }
  else if (0 < iVar4) {
    pfVar3 = (float *)(unaff_RSI + 4 + lVar6 * 4);
    lVar2 = (lVar6 - 1U >> 1) + 1;
    do {
      fVar7 = pfVar3[-1 - lVar6];
      fVar8 = pfVar3[-1];
      fVar9 = pfVar3[-lVar6];
      fVar10 = *pfVar3;
      pfVar3[-1 - lVar6] = fVar7 + fVar8;
      pfVar3[-lVar6] = fVar9 + *pfVar3;
      pfVar3[-1] = fVar7 - fVar8;
      *pfVar3 = fVar9 - fVar10;
      pfVar3 = pfVar3 + 2;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}





// 函数: void FUN_18079f8a9(uint64_t param_1,uint64_t param_2,int param_3,uint param_4)
void FUN_18079f8a9(uint64_t param_1,uint64_t param_2,int param_3,uint param_4)

{
  longlong lVar1;
  float *pfVar2;
  longlong unaff_RSI;
  ulonglong uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar4 = (longlong)param_3;
  if (((param_3 * 2 ^ param_4) & 0x7fffffff) == 0) {
    if (0 < param_3) {
      pfVar2 = (float *)(unaff_RSI + 4 + lVar4 * 4);
      uVar3 = (ulonglong)((param_3 - 1U >> 1) + 1);
      do {
        fVar6 = pfVar2[lVar4 * 2 + -1] + pfVar2[lVar4 + -1];
        fVar8 = pfVar2[lVar4 + -1] - pfVar2[lVar4 * 2 + -1];
        fVar10 = pfVar2[-1 - lVar4] + pfVar2[-1];
        fVar12 = pfVar2[-1 - lVar4] - pfVar2[-1];
        fVar5 = pfVar2[lVar4 * 2] + pfVar2[lVar4];
        fVar9 = pfVar2[-lVar4] + *pfVar2;
        fVar11 = pfVar2[-lVar4] - *pfVar2;
        fVar7 = pfVar2[lVar4] - pfVar2[lVar4 * 2];
        pfVar2[-1 - lVar4] = fVar6 + fVar10;
        pfVar2[-lVar4] = fVar5 + fVar9;
        pfVar2[lVar4 + -1] = fVar10 - fVar6;
        pfVar2[lVar4] = fVar9 - fVar5;
        pfVar2[-1] = fVar12 - fVar7;
        *pfVar2 = fVar8 + fVar11;
        pfVar2[lVar4 * 2 + -1] = fVar7 + fVar12;
        pfVar2[lVar4 * 2] = fVar11 - fVar8;
        pfVar2 = pfVar2 + 2;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      return;
    }
  }
  else if (0 < param_3) {
    pfVar2 = (float *)(unaff_RSI + 4 + lVar4 * 4);
    lVar1 = (lVar4 - 1U >> 1) + 1;
    do {
      fVar5 = pfVar2[-1 - lVar4];
      fVar6 = pfVar2[-1];
      fVar7 = pfVar2[-lVar4];
      fVar8 = *pfVar2;
      pfVar2[-1 - lVar4] = fVar5 + fVar6;
      pfVar2[-lVar4] = fVar7 + *pfVar2;
      pfVar2[-1] = fVar5 - fVar6;
      *pfVar2 = fVar7 - fVar8;
      pfVar2 = pfVar2 + 2;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}





// 函数: void FUN_18079f8c3(uint64_t param_1,uint64_t param_2,int param_3)
void FUN_18079f8c3(uint64_t param_1,uint64_t param_2,int param_3)

{
  float *pfVar1;
  longlong unaff_RSI;
  ulonglong uVar2;
  longlong in_R10;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (0 < param_3) {
    pfVar1 = (float *)(unaff_RSI + 4 + in_R10 * 4);
    uVar2 = (ulonglong)((param_3 - 1U >> 1) + 1);
    do {
      fVar4 = pfVar1[in_R10 * 2 + -1] + pfVar1[in_R10 + -1];
      fVar6 = pfVar1[in_R10 + -1] - pfVar1[in_R10 * 2 + -1];
      fVar8 = pfVar1[-1 - in_R10] + pfVar1[-1];
      fVar10 = pfVar1[-1 - in_R10] - pfVar1[-1];
      fVar3 = pfVar1[in_R10 * 2] + pfVar1[in_R10];
      fVar7 = pfVar1[-in_R10] + *pfVar1;
      fVar9 = pfVar1[-in_R10] - *pfVar1;
      fVar5 = pfVar1[in_R10] - pfVar1[in_R10 * 2];
      pfVar1[-1 - in_R10] = fVar4 + fVar8;
      pfVar1[-in_R10] = fVar3 + fVar7;
      pfVar1[in_R10 + -1] = fVar8 - fVar4;
      pfVar1[in_R10] = fVar7 - fVar3;
      pfVar1[-1] = fVar10 - fVar5;
      *pfVar1 = fVar6 + fVar9;
      pfVar1[in_R10 * 2 + -1] = fVar5 + fVar10;
      pfVar1[in_R10 * 2] = fVar9 - fVar6;
      pfVar1 = pfVar1 + 2;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    return;
  }
  return;
}





// 函数: void FUN_18079f8cc(uint64_t param_1,uint64_t param_2,int param_3)
void FUN_18079f8cc(uint64_t param_1,uint64_t param_2,int param_3)

{
  float *pfVar1;
  longlong unaff_RSI;
  ulonglong uVar2;
  longlong in_R10;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  pfVar1 = (float *)(unaff_RSI + 4 + in_R10 * 4);
  uVar2 = (ulonglong)((param_3 - 1U >> 1) + 1);
  do {
    fVar4 = pfVar1[in_R10 * 2 + -1] + pfVar1[in_R10 + -1];
    fVar6 = pfVar1[in_R10 + -1] - pfVar1[in_R10 * 2 + -1];
    fVar8 = pfVar1[-1 - in_R10] + pfVar1[-1];
    fVar10 = pfVar1[-1 - in_R10] - pfVar1[-1];
    fVar3 = pfVar1[in_R10 * 2] + pfVar1[in_R10];
    fVar7 = pfVar1[-in_R10] + *pfVar1;
    fVar9 = pfVar1[-in_R10] - *pfVar1;
    fVar5 = pfVar1[in_R10] - pfVar1[in_R10 * 2];
    pfVar1[-1 - in_R10] = fVar4 + fVar8;
    pfVar1[-in_R10] = fVar3 + fVar7;
    pfVar1[in_R10 + -1] = fVar8 - fVar4;
    pfVar1[in_R10] = fVar7 - fVar3;
    pfVar1[-1] = fVar10 - fVar5;
    *pfVar1 = fVar6 + fVar9;
    pfVar1[in_R10 * 2 + -1] = fVar5 + fVar10;
    pfVar1[in_R10 * 2] = fVar9 - fVar6;
    pfVar1 = pfVar1 + 2;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  return;
}





// 函数: void FUN_18079f9f0(uint64_t param_1,uint64_t param_2,int param_3)
void FUN_18079f9f0(uint64_t param_1,uint64_t param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float *pfVar6;
  longlong unaff_RSI;
  longlong in_R10;
  
  if (0 < param_3) {
    pfVar6 = (float *)(unaff_RSI + 4 + in_R10 * 4);
    lVar5 = (in_R10 - 1U >> 1) + 1;
    do {
      fVar1 = pfVar6[-1 - in_R10];
      fVar2 = pfVar6[-1];
      fVar3 = pfVar6[-in_R10];
      fVar4 = *pfVar6;
      pfVar6[-1 - in_R10] = fVar1 + fVar2;
      pfVar6[-in_R10] = fVar3 + *pfVar6;
      pfVar6[-1] = fVar1 - fVar2;
      *pfVar6 = fVar3 - fVar4;
      pfVar6 = pfVar6 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



