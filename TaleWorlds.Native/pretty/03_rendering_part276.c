#include "TaleWorlds.Native.Split.h"

// 03_rendering_part276.c - 14 个函数

// 函数: void FUN_18041b6a0(float *param_1,float *param_2,int64_t param_3,int8_t param_4)
void FUN_18041b6a0(float *param_1,float *param_2,int64_t param_3,int8_t param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint64_t uVar5;
  float fVar6;
  int64_t lVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fStack_38;
  float fStack_28;
  int32_t uStack_24;
  
  lVar7 = (int64_t)param_2 - (int64_t)param_1;
  while ((0x15b < lVar7 && (0 < param_3))) {
    fVar10 = *param_1;
    fVar2 = param_2[-3];
    lVar7 = ((int64_t)param_2 - (int64_t)param_1) / 0x18;
    fVar3 = param_1[lVar7 * 3];
    fVar6 = fVar3;
    pfVar9 = param_1 + lVar7 * 3;
    pfVar8 = param_1;
    fVar4 = fVar10;
    if (fVar10 < fVar3) {
      fVar6 = fVar10;
      pfVar9 = param_1;
      pfVar8 = param_1 + lVar7 * 3;
      fVar4 = fVar3;
    }
    if ((fVar2 <= fVar4) && (pfVar8 = pfVar9, fVar6 < fVar2)) {
      pfVar8 = param_2 + -3;
    }
    fStack_38 = (float)*(uint64_t *)pfVar8;
    pfVar9 = param_2;
    pfVar8 = param_1;
    while( true ) {
      while (fVar10 < fStack_38) {
        pfVar1 = pfVar8 + 3;
        pfVar8 = pfVar8 + 3;
        fVar10 = *pfVar1;
      }
      pfVar9 = pfVar9 + -3;
      fVar10 = *pfVar9;
      while (fStack_38 < fVar10) {
        pfVar9 = pfVar9 + -3;
        fVar10 = *pfVar9;
      }
      if (pfVar9 <= pfVar8) break;
      fVar10 = pfVar8[2];
      uVar5 = *(uint64_t *)pfVar8;
      *pfVar8 = *pfVar9;
      *(uint64_t *)(pfVar8 + 1) = *(uint64_t *)(pfVar9 + 1);
      pfVar8 = pfVar8 + 3;
      fStack_28 = (float)uVar5;
      uStack_24 = (int32_t)((uint64_t)uVar5 >> 0x20);
      *pfVar9 = fStack_28;
      *(uint64_t *)(pfVar9 + 1) = CONCAT44(fVar10,uStack_24);
      fVar10 = *pfVar8;
    }
    param_3 = param_3 + -1;
    FUN_18041b6a0(pfVar8,param_2,param_3,param_4);
    lVar7 = (int64_t)pfVar8 - (int64_t)param_1;
    param_2 = pfVar8;
  }
  if (param_3 == 0) {
    FUN_18041bb20(param_1,param_2,param_4);
    FUN_18041bc90(param_1,param_2,param_4);
  }
  return;
}





// 函数: void FUN_18041b6ac(float *param_1,float *param_2,int64_t param_3,int8_t param_4)
void FUN_18041b6ac(float *param_1,float *param_2,int64_t param_3,int8_t param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint64_t uVar5;
  float fVar6;
  int64_t in_RAX;
  int64_t lVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fStackX_20;
  float fStack0000000000000030;
  int32_t uStack0000000000000034;
  
  lVar7 = in_RAX - (int64_t)param_1;
  while ((0x15b < lVar7 && (0 < param_3))) {
    fVar10 = *param_1;
    fVar2 = param_2[-3];
    lVar7 = ((int64_t)param_2 - (int64_t)param_1) / 0x18;
    fVar3 = param_1[lVar7 * 3];
    fVar6 = fVar3;
    pfVar9 = param_1 + lVar7 * 3;
    pfVar8 = param_1;
    fVar4 = fVar10;
    if (fVar10 < fVar3) {
      fVar6 = fVar10;
      pfVar9 = param_1;
      pfVar8 = param_1 + lVar7 * 3;
      fVar4 = fVar3;
    }
    if ((fVar2 <= fVar4) && (pfVar8 = pfVar9, fVar6 < fVar2)) {
      pfVar8 = param_2 + -3;
    }
    fStackX_20 = (float)*(uint64_t *)pfVar8;
    pfVar9 = param_2;
    pfVar8 = param_1;
    while( true ) {
      while (fVar10 < fStackX_20) {
        pfVar1 = pfVar8 + 3;
        pfVar8 = pfVar8 + 3;
        fVar10 = *pfVar1;
      }
      pfVar9 = pfVar9 + -3;
      fVar10 = *pfVar9;
      while (fStackX_20 < fVar10) {
        pfVar9 = pfVar9 + -3;
        fVar10 = *pfVar9;
      }
      if (pfVar9 <= pfVar8) break;
      fVar10 = pfVar8[2];
      uVar5 = *(uint64_t *)pfVar8;
      *pfVar8 = *pfVar9;
      *(uint64_t *)(pfVar8 + 1) = *(uint64_t *)(pfVar9 + 1);
      pfVar8 = pfVar8 + 3;
      fStack0000000000000030 = (float)uVar5;
      uStack0000000000000034 = (int32_t)((uint64_t)uVar5 >> 0x20);
      *pfVar9 = fStack0000000000000030;
      *(uint64_t *)(pfVar9 + 1) = CONCAT44(fVar10,uStack0000000000000034);
      fVar10 = *pfVar8;
    }
    param_3 = param_3 + -1;
    FUN_18041b6a0(pfVar8,param_2,param_3,param_4);
    lVar7 = (int64_t)pfVar8 - (int64_t)param_1;
    param_2 = pfVar8;
  }
  if (param_3 == 0) {
    FUN_18041bb20(param_1,param_2,param_4);
    FUN_18041bc90(param_1,param_2,param_4);
  }
  return;
}





// 函数: void FUN_18041b6cd(uint64_t param_1)
void FUN_18041b6cd(uint64_t param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int64_t lVar5;
  float fVar6;
  float *pfVar7;
  int8_t unaff_BL;
  int64_t unaff_RBP;
  float *unaff_RSI;
  float *pfVar8;
  float *unaff_R14;
  uint64_t uVar9;
  float fVar10;
  float fStackX_20;
  float fStack0000000000000030;
  int32_t uStack0000000000000034;
  
  do {
    pfVar8 = unaff_R14;
    if (unaff_RBP < 1) break;
    fVar10 = *unaff_RSI;
    fVar2 = unaff_R14[-3];
    lVar5 = ((int64_t)unaff_R14 - (int64_t)unaff_RSI) / 0x18;
    fVar3 = unaff_RSI[lVar5 * 3];
    fVar6 = fVar3;
    pfVar8 = unaff_RSI + lVar5 * 3;
    pfVar7 = unaff_RSI;
    fVar4 = fVar10;
    if (fVar10 < fVar3) {
      fVar6 = fVar10;
      pfVar8 = unaff_RSI;
      pfVar7 = unaff_RSI + lVar5 * 3;
      fVar4 = fVar3;
    }
    if ((fVar2 <= fVar4) && (pfVar7 = pfVar8, fVar6 < fVar2)) {
      pfVar7 = unaff_R14 + -3;
    }
    fStackX_20 = (float)*(uint64_t *)pfVar7;
    pfVar7 = unaff_R14;
    pfVar8 = unaff_RSI;
    while( true ) {
      while (fVar10 < fStackX_20) {
        pfVar1 = pfVar8 + 3;
        pfVar8 = pfVar8 + 3;
        fVar10 = *pfVar1;
      }
      pfVar7 = pfVar7 + -3;
      fVar10 = *pfVar7;
      while (fStackX_20 < fVar10) {
        pfVar7 = pfVar7 + -3;
        fVar10 = *pfVar7;
      }
      if (pfVar7 <= pfVar8) break;
      fVar10 = pfVar8[2];
      uVar9 = *(uint64_t *)pfVar8;
      *pfVar8 = *pfVar7;
      *(uint64_t *)(pfVar8 + 1) = *(uint64_t *)(pfVar7 + 1);
      pfVar8 = pfVar8 + 3;
      fStack0000000000000030 = (float)uVar9;
      uStack0000000000000034 = (int32_t)((uint64_t)uVar9 >> 0x20);
      *pfVar7 = fStack0000000000000030;
      *(uint64_t *)(pfVar7 + 1) = CONCAT44(fVar10,uStack0000000000000034);
      fVar10 = *pfVar8;
    }
    unaff_RBP = unaff_RBP + -1;
    param_1 = FUN_18041b6a0(pfVar8,unaff_R14,unaff_RBP,unaff_BL);
    unaff_R14 = pfVar8;
  } while (0x15b < (int64_t)pfVar8 - (int64_t)unaff_RSI);
  if (unaff_RBP == 0) {
    uVar9 = FUN_18041bb20(param_1,pfVar8,unaff_BL);
    FUN_18041bc90(uVar9,pfVar8,unaff_BL);
  }
  return;
}





// 函数: void FUN_18041b7e4(void)
void FUN_18041b7e4(void)

{
  int64_t unaff_RBP;
  
  if (unaff_RBP == 0) {
    FUN_18041bb20();
    FUN_18041bc90();
  }
  return;
}





// 函数: void FUN_18041b7ee(void)
void FUN_18041b7ee(void)

{
  FUN_18041bb20();
  FUN_18041bc90();
  return;
}





// 函数: void FUN_18041b820(float *param_1,float *param_2,float *param_3)
void FUN_18041b820(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  float *pfVar9;
  int64_t lVar10;
  bool bVar11;
  
  lVar10 = (int64_t)param_2 - (int64_t)param_1 >> 3;
  if (1 < lVar10) {
    lVar8 = (lVar10 + -2 >> 1) + 1;
    lVar7 = lVar8 * 2 + 2;
    do {
      fVar1 = param_1[lVar8 * 2 + -2];
      lVar8 = lVar8 + -1;
      lVar7 = lVar7 + -2;
      fVar2 = param_1[lVar8 * 2 + 1];
      lVar6 = lVar8;
      lVar5 = lVar7;
      while (lVar5 < lVar10) {
        lVar4 = lVar5 + -1;
        if (param_1[lVar5 * 2 + -2] < param_1[lVar5 * 2] ||
            param_1[lVar5 * 2 + -2] == param_1[lVar5 * 2]) {
          lVar4 = lVar5;
        }
        param_1[lVar6 * 2] = param_1[lVar4 * 2];
        param_1[lVar6 * 2 + 1] = param_1[lVar4 * 2 + 1];
        lVar6 = lVar4;
        lVar5 = lVar4 * 2 + 2;
      }
      if (lVar5 == lVar10) {
        param_1[lVar6 * 2] = param_1[lVar5 * 2 + -2];
        param_1[lVar6 * 2 + 1] = param_1[lVar5 * 2 + -1];
        lVar6 = lVar5 + -1;
      }
      while (lVar8 < lVar6) {
        lVar5 = lVar6 + -1 >> 1;
        if (fVar1 <= param_1[lVar5 * 2]) break;
        param_1[lVar6 * 2] = param_1[lVar5 * 2];
        param_1[lVar6 * 2 + 1] = param_1[lVar5 * 2 + 1];
        lVar6 = lVar5;
      }
      param_1[lVar6 * 2] = fVar1;
      param_1[lVar6 * 2 + 1] = fVar2;
    } while (lVar8 != 0);
  }
  pfVar9 = param_2;
  if (param_2 < param_3) {
    do {
      fVar1 = *param_1;
      if (*pfVar9 <= fVar1 && fVar1 != *pfVar9) {
        fVar2 = *pfVar9;
        lVar7 = 0;
        fVar3 = pfVar9[1];
        lVar8 = 2;
        *pfVar9 = fVar1;
        pfVar9[1] = param_1[1];
        bVar11 = lVar10 == 2;
        lVar6 = lVar7;
        if (2 < lVar10) {
          do {
            lVar7 = lVar8 + -1;
            if (param_1[lVar8 * 2 + -2] < param_1[lVar8 * 2] ||
                param_1[lVar8 * 2 + -2] == param_1[lVar8 * 2]) {
              lVar7 = lVar8;
            }
            lVar8 = lVar7 * 2 + 2;
            param_1[lVar6 * 2] = param_1[lVar7 * 2];
            param_1[lVar6 * 2 + 1] = param_1[lVar7 * 2 + 1];
            bVar11 = lVar8 == lVar10;
            lVar6 = lVar7;
          } while (lVar8 < lVar10);
        }
        if (bVar11) {
          param_1[lVar7 * 2] = param_1[lVar8 * 2 + -2];
          param_1[lVar7 * 2 + 1] = param_1[lVar8 * 2 + -1];
          lVar7 = lVar8 + -1;
        }
        while (0 < lVar7) {
          lVar8 = lVar7 + -1 >> 1;
          if (fVar2 <= param_1[lVar8 * 2]) break;
          param_1[lVar7 * 2] = param_1[lVar8 * 2];
          param_1[lVar7 * 2 + 1] = param_1[lVar8 * 2 + 1];
          lVar7 = lVar8;
        }
        param_1[lVar7 * 2] = fVar2;
        param_1[lVar7 * 2 + 1] = fVar3;
      }
      pfVar9 = pfVar9 + 2;
    } while (pfVar9 < param_3);
  }
  if (1 < lVar10) {
    param_2 = param_2 + -2;
    do {
      lVar10 = lVar10 + -1;
      fVar1 = *param_2;
      lVar7 = 0;
      fVar2 = param_2[1];
      lVar8 = 2;
      *param_2 = *param_1;
      param_2[1] = param_1[1];
      bVar11 = lVar10 == 2;
      lVar6 = lVar7;
      if (2 < lVar10) {
        do {
          lVar7 = lVar8 + -1;
          if (param_1[lVar8 * 2 + -2] < param_1[lVar8 * 2] ||
              param_1[lVar8 * 2 + -2] == param_1[lVar8 * 2]) {
            lVar7 = lVar8;
          }
          lVar8 = lVar7 * 2 + 2;
          param_1[lVar6 * 2] = param_1[lVar7 * 2];
          param_1[lVar6 * 2 + 1] = param_1[lVar7 * 2 + 1];
          bVar11 = lVar8 == lVar10;
          lVar6 = lVar7;
        } while (lVar8 < lVar10);
      }
      if (bVar11) {
        param_1[lVar7 * 2] = param_1[lVar8 * 2 + -2];
        param_1[lVar7 * 2 + 1] = param_1[lVar8 * 2 + -1];
        lVar7 = lVar8 + -1;
      }
      while (0 < lVar7) {
        lVar10 = lVar7 + -1 >> 1;
        if (fVar1 <= param_1[lVar10 * 2]) break;
        param_1[lVar7 * 2] = param_1[lVar10 * 2];
        param_1[lVar7 * 2 + 1] = param_1[lVar10 * 2 + 1];
        lVar7 = lVar10;
      }
      param_2 = param_2 + -2;
      param_1[lVar7 * 2] = fVar1;
      param_1[lVar7 * 2 + 1] = fVar2;
      lVar10 = (8 - (int64_t)param_1) + (int64_t)param_2 >> 3;
    } while (1 < lVar10);
  }
  return;
}





// 函数: void FUN_18041b829(float *param_1,float *param_2,float *param_3)
void FUN_18041b829(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  float *pfVar9;
  int64_t in_R11;
  int64_t lVar10;
  bool bVar11;
  
  lVar10 = in_R11 - (int64_t)param_1 >> 3;
  if (1 < lVar10) {
    lVar8 = (lVar10 + -2 >> 1) + 1;
    lVar7 = lVar8 * 2 + 2;
    do {
      fVar1 = param_1[lVar8 * 2 + -2];
      lVar8 = lVar8 + -1;
      lVar7 = lVar7 + -2;
      fVar2 = param_1[lVar8 * 2 + 1];
      lVar6 = lVar8;
      lVar5 = lVar7;
      while (lVar5 < lVar10) {
        lVar4 = lVar5 + -1;
        if (param_1[lVar5 * 2 + -2] < param_1[lVar5 * 2] ||
            param_1[lVar5 * 2 + -2] == param_1[lVar5 * 2]) {
          lVar4 = lVar5;
        }
        param_1[lVar6 * 2] = param_1[lVar4 * 2];
        param_1[lVar6 * 2 + 1] = param_1[lVar4 * 2 + 1];
        lVar6 = lVar4;
        lVar5 = lVar4 * 2 + 2;
      }
      if (lVar5 == lVar10) {
        param_1[lVar6 * 2] = param_1[lVar5 * 2 + -2];
        param_1[lVar6 * 2 + 1] = param_1[lVar5 * 2 + -1];
        lVar6 = lVar5 + -1;
      }
      while (lVar8 < lVar6) {
        lVar5 = lVar6 + -1 >> 1;
        if (fVar1 <= param_1[lVar5 * 2]) break;
        param_1[lVar6 * 2] = param_1[lVar5 * 2];
        param_1[lVar6 * 2 + 1] = param_1[lVar5 * 2 + 1];
        lVar6 = lVar5;
      }
      param_1[lVar6 * 2] = fVar1;
      param_1[lVar6 * 2 + 1] = fVar2;
    } while (lVar8 != 0);
  }
  pfVar9 = param_2;
  if (param_2 < param_3) {
    do {
      fVar1 = *param_1;
      if (*pfVar9 <= fVar1 && fVar1 != *pfVar9) {
        fVar2 = *pfVar9;
        lVar7 = 0;
        fVar3 = pfVar9[1];
        lVar8 = 2;
        *pfVar9 = fVar1;
        pfVar9[1] = param_1[1];
        bVar11 = lVar10 == 2;
        lVar6 = lVar7;
        if (2 < lVar10) {
          do {
            lVar7 = lVar8 + -1;
            if (param_1[lVar8 * 2 + -2] < param_1[lVar8 * 2] ||
                param_1[lVar8 * 2 + -2] == param_1[lVar8 * 2]) {
              lVar7 = lVar8;
            }
            lVar8 = lVar7 * 2 + 2;
            param_1[lVar6 * 2] = param_1[lVar7 * 2];
            param_1[lVar6 * 2 + 1] = param_1[lVar7 * 2 + 1];
            bVar11 = lVar8 == lVar10;
            lVar6 = lVar7;
          } while (lVar8 < lVar10);
        }
        if (bVar11) {
          param_1[lVar7 * 2] = param_1[lVar8 * 2 + -2];
          param_1[lVar7 * 2 + 1] = param_1[lVar8 * 2 + -1];
          lVar7 = lVar8 + -1;
        }
        while (0 < lVar7) {
          lVar8 = lVar7 + -1 >> 1;
          if (fVar2 <= param_1[lVar8 * 2]) break;
          param_1[lVar7 * 2] = param_1[lVar8 * 2];
          param_1[lVar7 * 2 + 1] = param_1[lVar8 * 2 + 1];
          lVar7 = lVar8;
        }
        param_1[lVar7 * 2] = fVar2;
        param_1[lVar7 * 2 + 1] = fVar3;
      }
      pfVar9 = pfVar9 + 2;
    } while (pfVar9 < param_3);
  }
  if (1 < lVar10) {
    param_2 = param_2 + -2;
    do {
      lVar10 = lVar10 + -1;
      fVar1 = *param_2;
      lVar7 = 0;
      fVar2 = param_2[1];
      lVar8 = 2;
      *param_2 = *param_1;
      param_2[1] = param_1[1];
      bVar11 = lVar10 == 2;
      lVar6 = lVar7;
      if (2 < lVar10) {
        do {
          lVar7 = lVar8 + -1;
          if (param_1[lVar8 * 2 + -2] < param_1[lVar8 * 2] ||
              param_1[lVar8 * 2 + -2] == param_1[lVar8 * 2]) {
            lVar7 = lVar8;
          }
          lVar8 = lVar7 * 2 + 2;
          param_1[lVar6 * 2] = param_1[lVar7 * 2];
          param_1[lVar6 * 2 + 1] = param_1[lVar7 * 2 + 1];
          bVar11 = lVar8 == lVar10;
          lVar6 = lVar7;
        } while (lVar8 < lVar10);
      }
      if (bVar11) {
        param_1[lVar7 * 2] = param_1[lVar8 * 2 + -2];
        param_1[lVar7 * 2 + 1] = param_1[lVar8 * 2 + -1];
        lVar7 = lVar8 + -1;
      }
      while (0 < lVar7) {
        lVar10 = lVar7 + -1 >> 1;
        if (fVar1 <= param_1[lVar10 * 2]) break;
        param_1[lVar7 * 2] = param_1[lVar10 * 2];
        param_1[lVar7 * 2 + 1] = param_1[lVar10 * 2 + 1];
        lVar7 = lVar10;
      }
      param_2 = param_2 + -2;
      param_1[lVar7 * 2] = fVar1;
      param_1[lVar7 * 2 + 1] = fVar2;
      lVar10 = (8 - (int64_t)param_1) + (int64_t)param_2 >> 3;
    } while (1 < lVar10);
  }
  return;
}





// 函数: void FUN_18041ba22(void)
void FUN_18041ba22(void)

{
  float fVar1;
  float fVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t unaff_RSI;
  int64_t lVar5;
  float *in_R9;
  float *pfVar6;
  int64_t in_R11;
  int64_t lVar7;
  bool bVar8;
  
  pfVar6 = (float *)(unaff_RSI + -8);
  do {
    lVar7 = in_R11 + -1;
    fVar1 = *pfVar6;
    lVar3 = 0;
    fVar2 = pfVar6[1];
    lVar5 = 2;
    *pfVar6 = *in_R9;
    pfVar6[1] = in_R9[1];
    bVar8 = lVar7 == 2;
    lVar4 = lVar3;
    if (2 < lVar7) {
      do {
        lVar3 = lVar5 + -1;
        if (in_R9[lVar5 * 2 + -2] < in_R9[lVar5 * 2] || in_R9[lVar5 * 2 + -2] == in_R9[lVar5 * 2]) {
          lVar3 = lVar5;
        }
        lVar5 = lVar3 * 2 + 2;
        in_R9[lVar4 * 2] = in_R9[lVar3 * 2];
        in_R9[lVar4 * 2 + 1] = in_R9[lVar3 * 2 + 1];
        bVar8 = lVar5 == lVar7;
        lVar4 = lVar3;
      } while (lVar5 < lVar7);
    }
    if (bVar8) {
      in_R9[lVar3 * 2] = in_R9[lVar5 * 2 + -2];
      in_R9[lVar3 * 2 + 1] = in_R9[lVar5 * 2 + -1];
      lVar3 = lVar5 + -1;
    }
    while (0 < lVar3) {
      lVar5 = lVar3 + -1 >> 1;
      if (fVar1 <= in_R9[lVar5 * 2]) break;
      in_R9[lVar3 * 2] = in_R9[lVar5 * 2];
      in_R9[lVar3 * 2 + 1] = in_R9[lVar5 * 2 + 1];
      lVar3 = lVar5;
    }
    pfVar6 = pfVar6 + -2;
    in_R9[lVar3 * 2] = fVar1;
    in_R9[lVar3 * 2 + 1] = fVar2;
    in_R11 = (8 - (int64_t)in_R9) + (int64_t)pfVar6 >> 3;
    if (in_R11 < 2) {
      return;
    }
  } while( true );
}





// 函数: void FUN_18041bb20(int64_t param_1,int64_t param_2)
void FUN_18041bb20(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  float *pfVar2;
  float fVar3;
  int32_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  float fStack_18;
  int32_t uStack_14;
  
  lVar5 = (param_2 - param_1) / 6 + (param_2 - param_1 >> 0x3f);
  lVar5 = (lVar5 >> 1) - (lVar5 >> 0x3f);
  if (1 < lVar5) {
    lVar10 = (lVar5 + -2 >> 1) + 1;
    lVar8 = lVar10 * 2 + 2;
    lVar7 = param_1 + lVar10 * 0xc;
    do {
      uVar4 = *(int32_t *)(lVar7 + -4);
      lVar10 = lVar10 + -1;
      lVar8 = lVar8 + -2;
      fStack_18 = (float)*(uint64_t *)(lVar7 + -0xc);
      uStack_14 = (int32_t)((uint64_t)*(uint64_t *)(lVar7 + -0xc) >> 0x20);
      lVar1 = lVar10;
      lVar6 = lVar8;
      while (lVar6 < lVar5) {
        fVar3 = *(float *)(param_1 + -0xc + lVar6 * 0xc);
        pfVar2 = (float *)(param_1 + lVar6 * 0xc);
        lVar9 = lVar6 + -1;
        if (fVar3 < *pfVar2 || fVar3 == *pfVar2) {
          lVar9 = lVar6;
        }
        *(int32_t *)(param_1 + lVar1 * 0xc) = *(int32_t *)(param_1 + lVar9 * 0xc);
        *(uint64_t *)(param_1 + 4 + lVar1 * 0xc) = *(uint64_t *)(param_1 + 4 + lVar9 * 0xc);
        lVar1 = lVar9;
        lVar6 = lVar9 * 2 + 2;
      }
      if (lVar6 == lVar5) {
        *(int32_t *)(param_1 + lVar1 * 0xc) = *(int32_t *)(param_1 + -0xc + lVar6 * 0xc);
        *(uint64_t *)(param_1 + 4 + lVar1 * 0xc) = *(uint64_t *)(param_1 + -8 + lVar6 * 0xc);
        lVar1 = lVar6 + -1;
      }
      while (lVar10 < lVar1) {
        lVar6 = lVar1 + -1 >> 1;
        fVar3 = *(float *)(param_1 + lVar6 * 0xc);
        if (fStack_18 <= fVar3) break;
        *(float *)(param_1 + lVar1 * 0xc) = fVar3;
        *(uint64_t *)(param_1 + 4 + lVar1 * 0xc) = *(uint64_t *)(param_1 + 4 + lVar6 * 0xc);
        lVar1 = lVar6;
      }
      *(float *)(param_1 + lVar1 * 0xc) = fStack_18;
      *(uint64_t *)(param_1 + 4 + lVar1 * 0xc) = CONCAT44(uVar4,uStack_14);
      lVar7 = lVar7 + -0xc;
    } while (lVar10 != 0);
  }
  return;
}





// 函数: void FUN_18041bb53(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)
void FUN_18041bb53(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)

{
  int64_t lVar1;
  float *pfVar2;
  float fVar3;
  uint64_t uVar4;
  int32_t uVar5;
  int64_t lVar6;
  int64_t unaff_RBX;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  float fVar11;
  
  lVar10 = (unaff_RBX + -2 >> 1) + 1;
  lVar8 = lVar10 * 2 + 2;
  lVar7 = param_1 + lVar10 * 0xc;
  do {
    uVar4 = *(uint64_t *)(lVar7 + -0xc);
    uVar5 = *(int32_t *)(lVar7 + -4);
    lVar10 = lVar10 + -1;
    lVar8 = lVar8 + -2;
    fVar11 = (float)uVar4;
    lVar1 = lVar10;
    lVar6 = lVar8;
    while (lVar6 < unaff_RBX) {
      fVar3 = *(float *)(param_4 + -0xc + lVar6 * 0xc);
      pfVar2 = (float *)(param_4 + lVar6 * 0xc);
      lVar9 = lVar6 + -1;
      if (fVar3 < *pfVar2 || fVar3 == *pfVar2) {
        lVar9 = lVar6;
      }
      *(int32_t *)(param_4 + lVar1 * 0xc) = *(int32_t *)(param_4 + lVar9 * 0xc);
      *(uint64_t *)(param_4 + 4 + lVar1 * 0xc) = *(uint64_t *)(param_4 + 4 + lVar9 * 0xc);
      lVar1 = lVar9;
      lVar6 = lVar9 * 2 + 2;
    }
    if (lVar6 == unaff_RBX) {
      *(int32_t *)(param_4 + lVar1 * 0xc) = *(int32_t *)(param_4 + -0xc + lVar6 * 0xc);
      *(uint64_t *)(param_4 + 4 + lVar1 * 0xc) = *(uint64_t *)(param_4 + -8 + lVar6 * 0xc);
      lVar1 = lVar6 + -1;
    }
    while (lVar10 < lVar1) {
      lVar6 = lVar1 + -1 >> 1;
      fVar3 = *(float *)(param_4 + lVar6 * 0xc);
      if (fVar11 <= fVar3) break;
      *(float *)(param_4 + lVar1 * 0xc) = fVar3;
      *(uint64_t *)(param_4 + 4 + lVar1 * 0xc) = *(uint64_t *)(param_4 + 4 + lVar6 * 0xc);
      lVar1 = lVar6;
    }
    *(float *)(param_4 + lVar1 * 0xc) = fVar11;
    *(uint64_t *)(param_4 + 4 + lVar1 * 0xc) = CONCAT44(uVar5,(int)((uint64_t)uVar4 >> 0x20));
    lVar7 = lVar7 + -0xc;
    if (lVar10 == 0) {
      return;
    }
  } while( true );
}





// 函数: void FUN_18041bc88(void)
void FUN_18041bc88(void)

{
  return;
}





// 函数: void FUN_18041bc90(int32_t *param_1,int64_t param_2)
void FUN_18041bc90(int32_t *param_1,int64_t param_2)

{
  uint64_t uVar1;
  int32_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  bool bVar8;
  float fStack_18;
  int32_t uStack_14;
  
  if (0x17 < param_2 - (int64_t)param_1) {
    puVar7 = (uint64_t *)(param_2 + -0xc);
    do {
      uVar2 = *(int32_t *)(puVar7 + 1);
      uVar1 = *puVar7;
      lVar6 = 2;
      *(int32_t *)puVar7 = *param_1;
      *(uint64_t *)((int64_t)puVar7 + 4) = *(uint64_t *)(param_1 + 1);
      fStack_18 = (float)uVar1;
      uStack_14 = (int32_t)((uint64_t)uVar1 >> 0x20);
      lVar3 = 0;
      lVar5 = ((0xc - (int64_t)param_1) + (int64_t)puVar7) / 0xc + -1;
      bVar8 = lVar5 == 2;
      lVar4 = lVar3;
      if (2 < lVar5) {
        do {
          lVar3 = lVar6 + -1;
          if ((float)param_1[lVar6 * 3 + -3] < (float)param_1[lVar6 * 3] ||
              (float)param_1[lVar6 * 3 + -3] == (float)param_1[lVar6 * 3]) {
            lVar3 = lVar6;
          }
          lVar6 = lVar3 * 2 + 2;
          param_1[lVar4 * 3] = param_1[lVar3 * 3];
          *(uint64_t *)(param_1 + lVar4 * 3 + 1) = *(uint64_t *)(param_1 + lVar3 * 3 + 1);
          bVar8 = lVar6 == lVar5;
          lVar4 = lVar3;
        } while (lVar6 < lVar5);
      }
      if (bVar8) {
        param_1[lVar3 * 3] = param_1[lVar6 * 3 + -3];
        *(uint64_t *)(param_1 + lVar3 * 3 + 1) = *(uint64_t *)(param_1 + lVar6 * 3 + -2);
        lVar3 = lVar6 + -1;
      }
      while (0 < lVar3) {
        lVar6 = lVar3 + -1 >> 1;
        if (fStack_18 <= (float)param_1[lVar6 * 3]) break;
        param_1[lVar3 * 3] = param_1[lVar6 * 3];
        *(uint64_t *)(param_1 + lVar3 * 3 + 1) = *(uint64_t *)(param_1 + lVar6 * 3 + 1);
        lVar3 = lVar6;
      }
      puVar7 = (uint64_t *)((int64_t)puVar7 + -0xc);
      *(uint64_t *)(param_1 + lVar3 * 3 + 1) = CONCAT44(uVar2,uStack_14);
      param_1[lVar3 * 3] = fStack_18;
    } while (0x17 < (0xc - (int64_t)param_1) + (int64_t)puVar7);
  }
  return;
}





// 函数: void FUN_18041bca7(int64_t param_1,int64_t param_2,uint64_t param_3,int32_t *param_4)
void FUN_18041bca7(int64_t param_1,int64_t param_2,uint64_t param_3,int32_t *param_4)

{
  uint64_t uVar1;
  int32_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  bool bVar8;
  float fVar9;
  
  puVar7 = (uint64_t *)(param_2 + -0xc);
  do {
    uVar2 = *(int32_t *)(puVar7 + 1);
    uVar1 = *puVar7;
    lVar6 = 2;
    *(int32_t *)puVar7 = *param_4;
    *(uint64_t *)((int64_t)puVar7 + 4) = *(uint64_t *)(param_4 + 1);
    fVar9 = (float)uVar1;
    lVar3 = 0;
    lVar5 = ((0xc - param_1) + (int64_t)puVar7) / 0xc + -1;
    bVar8 = lVar5 == 2;
    lVar4 = lVar3;
    if (2 < lVar5) {
      do {
        lVar3 = lVar6 + -1;
        if ((float)param_4[lVar6 * 3 + -3] < (float)param_4[lVar6 * 3] ||
            (float)param_4[lVar6 * 3 + -3] == (float)param_4[lVar6 * 3]) {
          lVar3 = lVar6;
        }
        lVar6 = lVar3 * 2 + 2;
        param_4[lVar4 * 3] = param_4[lVar3 * 3];
        *(uint64_t *)(param_4 + lVar4 * 3 + 1) = *(uint64_t *)(param_4 + lVar3 * 3 + 1);
        bVar8 = lVar6 == lVar5;
        lVar4 = lVar3;
      } while (lVar6 < lVar5);
    }
    if (bVar8) {
      param_4[lVar3 * 3] = param_4[lVar6 * 3 + -3];
      *(uint64_t *)(param_4 + lVar3 * 3 + 1) = *(uint64_t *)(param_4 + lVar6 * 3 + -2);
      lVar3 = lVar6 + -1;
    }
    while (0 < lVar3) {
      lVar6 = lVar3 + -1 >> 1;
      if (fVar9 <= (float)param_4[lVar6 * 3]) break;
      param_4[lVar3 * 3] = param_4[lVar6 * 3];
      *(uint64_t *)(param_4 + lVar3 * 3 + 1) = *(uint64_t *)(param_4 + lVar6 * 3 + 1);
      lVar3 = lVar6;
    }
    puVar7 = (uint64_t *)((int64_t)puVar7 + -0xc);
    *(uint64_t *)(param_4 + lVar3 * 3 + 1) = CONCAT44(uVar2,(int)((uint64_t)uVar1 >> 0x20));
    param_4[lVar3 * 3] = fVar9;
    if ((0xc - param_1) + (int64_t)puVar7 < 0x18) {
      return;
    }
  } while( true );
}





// 函数: void FUN_18041be06(void)
void FUN_18041be06(void)

{
  return;
}



uint64_t *
FUN_18041be10(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &processed_var_7440_ptr;
  MemoryBufferManager(param_1 + 1);
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



