#include "TaleWorlds.Native.Split.h"
// 99_part_04_part026.c - 16 个函数
// 函数: void function_26f230(float *param_1,float *param_2,int64_t param_3,int8_t param_4)
void function_26f230(float *param_1,float *param_2,int64_t param_3,int8_t param_4)
{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  lVar9 = (int64_t)param_2 - (int64_t)param_1;
  while ((0x243 < lVar9 && (0 < param_3))) {
    fVar12 = *param_1;
    fVar2 = param_2[-5];
    lVar9 = ((int64_t)param_2 - (int64_t)param_1) / 0x28;
    fVar3 = param_1[lVar9 * 5];
    fVar5 = fVar3;
    pfVar11 = param_1 + lVar9 * 5;
    pfVar10 = param_1;
    fVar4 = fVar12;
    if (fVar12 < fVar3) {
      fVar5 = fVar12;
      pfVar11 = param_1;
      pfVar10 = param_1 + lVar9 * 5;
      fVar4 = fVar3;
    }
    if ((fVar2 <= fVar4) && (pfVar10 = pfVar11, fVar5 < fVar2)) {
      pfVar10 = param_2 + -5;
    }
    fVar2 = *pfVar10;
    fVar3 = pfVar10[2];
    pfVar11 = param_2;
    pfVar10 = param_1;
    while( true ) {
      while (fVar12 < fVar2) {
        pfVar1 = pfVar10 + 5;
        pfVar10 = pfVar10 + 5;
        fVar12 = *pfVar1;
      }
      pfVar11 = pfVar11 + -5;
      fVar12 = *pfVar11;
      while (fVar2 < fVar12) {
        pfVar11 = pfVar11 + -5;
        fVar12 = *pfVar11;
      }
      if (pfVar11 <= pfVar10) break;
      uVar7 = *(uint64_t *)pfVar10;
      uVar8 = *(uint64_t *)(pfVar10 + 2);
      fVar12 = pfVar10[4];
      fVar4 = pfVar11[1];
      fVar5 = pfVar11[2];
      fVar6 = pfVar11[3];
      *pfVar10 = *pfVar11;
      pfVar10[1] = fVar4;
      pfVar10[2] = fVar5;
      pfVar10[3] = fVar6;
      pfVar10[4] = pfVar11[4];
      pfVar10 = pfVar10 + 5;
      *(uint64_t *)pfVar11 = uVar7;
      *(uint64_t *)(pfVar11 + 2) = uVar8;
      pfVar11[4] = fVar12;
      fVar12 = *pfVar10;
    }
    param_3 = param_3 + -1;
    function_26f230(pfVar10,param_2,param_3,param_4,fVar2,fVar3);
    lVar9 = (int64_t)pfVar10 - (int64_t)param_1;
    param_2 = pfVar10;
  }
  if (param_3 == 0) {
    function_26ef40(param_1,param_2,param_2,param_4);
  }
  return;
}
// 函数: void function_26f23d(float *param_1,float *param_2,int64_t param_3,int8_t param_4)
void function_26f23d(float *param_1,float *param_2,int64_t param_3,int8_t param_4)
{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t in_RAX;
  int64_t lVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  lVar8 = in_RAX - (int64_t)param_1;
  while ((0x243 < lVar8 && (0 < param_3))) {
    fVar11 = *param_1;
    fVar2 = param_2[-5];
    lVar8 = ((int64_t)param_2 - (int64_t)param_1) / 0x28;
    fVar3 = param_1[lVar8 * 5];
    fVar5 = fVar3;
    pfVar10 = param_1 + lVar8 * 5;
    pfVar9 = param_1;
    fVar4 = fVar11;
    if (fVar11 < fVar3) {
      fVar5 = fVar11;
      pfVar10 = param_1;
      pfVar9 = param_1 + lVar8 * 5;
      fVar4 = fVar3;
    }
    if ((fVar2 <= fVar4) && (pfVar9 = pfVar10, fVar5 < fVar2)) {
      pfVar9 = param_2 + -5;
    }
    fVar2 = *pfVar9;
    pfVar10 = param_2;
    pfVar9 = param_1;
    while( true ) {
      while (fVar11 < fVar2) {
        pfVar1 = pfVar9 + 5;
        pfVar9 = pfVar9 + 5;
        fVar11 = *pfVar1;
      }
      pfVar10 = pfVar10 + -5;
      fVar11 = *pfVar10;
      while (fVar2 < fVar11) {
        pfVar10 = pfVar10 + -5;
        fVar11 = *pfVar10;
      }
      if (pfVar10 <= pfVar9) break;
      uVar6 = *(uint64_t *)pfVar9;
      uVar7 = *(uint64_t *)(pfVar9 + 2);
      fVar11 = pfVar9[4];
      fVar3 = pfVar10[1];
      fVar4 = pfVar10[2];
      fVar5 = pfVar10[3];
      *pfVar9 = *pfVar10;
      pfVar9[1] = fVar3;
      pfVar9[2] = fVar4;
      pfVar9[3] = fVar5;
      pfVar9[4] = pfVar10[4];
      pfVar9 = pfVar9 + 5;
      *(uint64_t *)pfVar10 = uVar6;
      *(uint64_t *)(pfVar10 + 2) = uVar7;
      pfVar10[4] = fVar11;
      fVar11 = *pfVar9;
    }
    param_3 = param_3 + -1;
    function_26f230(pfVar9,param_2,param_3,param_4);
    lVar8 = (int64_t)pfVar9 - (int64_t)param_1;
    param_2 = pfVar9;
  }
  if (param_3 == 0) {
    function_26ef40(param_1,param_2,param_2,param_4);
  }
  return;
}
// 函数: void function_26f25e(int32_t param_1)
void function_26f25e(int32_t param_1)
{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int64_t lVar4;
  float fVar5;
  float fVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  float *pfVar9;
  int8_t unaff_BL;
  int64_t unaff_RBP;
  float *unaff_RSI;
  float *pfVar10;
  float *in_R10;
  float fVar11;
  do {
    pfVar10 = in_R10;
    if (unaff_RBP < 1) break;
    fVar11 = *unaff_RSI;
    fVar2 = in_R10[-5];
    lVar4 = ((int64_t)in_R10 - (int64_t)unaff_RSI) / 0x28;
    fVar3 = unaff_RSI[lVar4 * 5];
    fVar6 = fVar3;
    pfVar10 = unaff_RSI + lVar4 * 5;
    pfVar9 = unaff_RSI;
    fVar5 = fVar11;
    if (fVar11 < fVar3) {
      fVar6 = fVar11;
      pfVar10 = unaff_RSI;
      pfVar9 = unaff_RSI + lVar4 * 5;
      fVar5 = fVar3;
    }
    if ((fVar2 <= fVar5) && (pfVar9 = pfVar10, fVar6 < fVar2)) {
      pfVar9 = in_R10 + -5;
    }
    fVar2 = *pfVar9;
    pfVar9 = in_R10;
    pfVar10 = unaff_RSI;
    while( true ) {
      while (fVar11 < fVar2) {
        pfVar1 = pfVar10 + 5;
        pfVar10 = pfVar10 + 5;
        fVar11 = *pfVar1;
      }
      pfVar9 = pfVar9 + -5;
      fVar11 = *pfVar9;
      while (fVar2 < fVar11) {
        pfVar9 = pfVar9 + -5;
        fVar11 = *pfVar9;
      }
      if (pfVar9 <= pfVar10) break;
      uVar7 = *(uint64_t *)pfVar10;
      uVar8 = *(uint64_t *)(pfVar10 + 2);
      fVar11 = pfVar10[4];
      fVar3 = pfVar9[1];
      fVar5 = pfVar9[2];
      fVar6 = pfVar9[3];
      *pfVar10 = *pfVar9;
      pfVar10[1] = fVar3;
      pfVar10[2] = fVar5;
      pfVar10[3] = fVar6;
      pfVar10[4] = pfVar9[4];
      pfVar10 = pfVar10 + 5;
      *(uint64_t *)pfVar9 = uVar7;
      *(uint64_t *)(pfVar9 + 2) = uVar8;
      pfVar9[4] = fVar11;
      fVar11 = *pfVar10;
    }
    unaff_RBP = unaff_RBP + -1;
    param_1 = function_26f230(pfVar10,in_R10,unaff_RBP,unaff_BL);
    in_R10 = pfVar10;
  } while (0x243 < (int64_t)pfVar10 - (int64_t)unaff_RSI);
  if (unaff_RBP == 0) {
    function_26ef40(param_1,pfVar10,pfVar10,unaff_BL);
  }
  return;
}
// 函数: void function_26f362(void)
void function_26f362(void)
{
  int64_t unaff_RBP;
  if (unaff_RBP == 0) {
    function_26ef40();
  }
  return;
}
// 函数: void function_26f36c(void)
void function_26f36c(void)
{
  function_26ef40();
  return;
}
// 函数: void function_26f390(float *param_1,float *param_2)
void function_26f390(float *param_1,float *param_2)
{
  float fVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  float *pfVar5;
  float *pfVar7;
  float *pfVar8;
  float fStack_28;
  float *pfVar6;
  if (param_1 != param_2) {
    for (pfVar8 = param_1 + 5; pfVar8 != param_2; pfVar8 = pfVar8 + 5) {
      fVar1 = pfVar8[4];
      uVar2 = *(uint64_t *)pfVar8;
      uVar3 = *(uint64_t *)(pfVar8 + 2);
      pfVar7 = pfVar8;
      if (pfVar8 != param_1) {
        fStack_28 = (float)uVar2;
        pfVar5 = pfVar8;
        do {
          pfVar6 = pfVar5 + -5;
          if (*pfVar6 <= fStack_28) break;
          uVar4 = *(uint64_t *)(pfVar5 + -3);
          *(uint64_t *)pfVar7 = *(uint64_t *)pfVar6;
          *(uint64_t *)(pfVar7 + 2) = uVar4;
          pfVar7[4] = pfVar5[-1];
          pfVar7 = pfVar7 + -5;
          pfVar5 = pfVar6;
        } while (pfVar6 != param_1);
      }
      *(uint64_t *)pfVar7 = uVar2;
      *(uint64_t *)(pfVar7 + 2) = uVar3;
      pfVar7[4] = fVar1;
    }
  }
  return;
}
// 函数: void function_26f410(float *param_1,float *param_2,float *param_3)
void function_26f410(float *param_1,float *param_2,float *param_3)
{
  float fVar1;
  float fVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  float *pfVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  bool bVar10;
  lVar8 = (int64_t)param_2 - (int64_t)param_1 >> 3;
  if (1 < lVar8) {
    lVar7 = (lVar8 + -2 >> 1) + 1;
    lVar9 = lVar7 * 2 + 2;
    pfVar6 = param_1 + lVar7 * 2;
    do {
      fVar1 = pfVar6[-2];
      fVar2 = pfVar6[-1];
      lVar7 = lVar7 + -1;
      lVar9 = lVar9 + -2;
      lVar5 = lVar7;
      lVar4 = lVar9;
      while (lVar4 < lVar8) {
        lVar3 = lVar4 + -1;
        if (param_1[lVar4 * 2 + -2] < param_1[lVar4 * 2] ||
            param_1[lVar4 * 2 + -2] == param_1[lVar4 * 2]) {
          lVar3 = lVar4;
        }
        *(uint64_t *)(param_1 + lVar5 * 2) = *(uint64_t *)(param_1 + lVar3 * 2);
        lVar5 = lVar3;
        lVar4 = lVar3 * 2 + 2;
      }
      if (lVar4 == lVar8) {
        *(uint64_t *)(param_1 + lVar5 * 2) = *(uint64_t *)(param_1 + lVar4 * 2 + -2);
        lVar5 = lVar4 + -1;
      }
      while ((lVar7 < lVar5 &&
             (lVar4 = lVar5 + -1 >> 1, param_1[lVar4 * 2] <= fVar1 && fVar1 != param_1[lVar4 * 2])))
      {
        *(uint64_t *)(param_1 + lVar5 * 2) = *(uint64_t *)(param_1 + lVar4 * 2);
        lVar5 = lVar4;
      }
      param_1[lVar5 * 2] = fVar1;
      param_1[lVar5 * 2 + 1] = fVar2;
      pfVar6 = pfVar6 + -2;
    } while (lVar7 != 0);
  }
  pfVar6 = param_2;
  if (param_2 < param_3) {
    do {
      if (*pfVar6 <= *param_1 && *param_1 != *pfVar6) {
        lVar9 = 0;
        fVar1 = *pfVar6;
        lVar7 = 2;
        fVar2 = pfVar6[1];
        *(uint64_t *)pfVar6 = *(uint64_t *)param_1;
        bVar10 = lVar8 == 2;
        lVar5 = lVar9;
        if (2 < lVar8) {
          do {
            lVar9 = lVar7 + -1;
            if (param_1[lVar7 * 2 + -2] < param_1[lVar7 * 2] ||
                param_1[lVar7 * 2 + -2] == param_1[lVar7 * 2]) {
              lVar9 = lVar7;
            }
            lVar7 = lVar9 * 2 + 2;
            *(uint64_t *)(param_1 + lVar5 * 2) = *(uint64_t *)(param_1 + lVar9 * 2);
            bVar10 = lVar7 == lVar8;
            lVar5 = lVar9;
          } while (lVar7 < lVar8);
        }
        if (bVar10) {
          *(uint64_t *)(param_1 + lVar9 * 2) = *(uint64_t *)(param_1 + lVar7 * 2 + -2);
          lVar9 = lVar7 + -1;
        }
        while ((0 < lVar9 &&
               (lVar7 = lVar9 + -1 >> 1, param_1[lVar7 * 2] <= fVar1 && fVar1 != param_1[lVar7 * 2])
               )) {
          *(uint64_t *)(param_1 + lVar9 * 2) = *(uint64_t *)(param_1 + lVar7 * 2);
          lVar9 = lVar7;
        }
        param_1[lVar9 * 2] = fVar1;
        param_1[lVar9 * 2 + 1] = fVar2;
      }
      pfVar6 = pfVar6 + 2;
    } while (pfVar6 < param_3);
  }
  if (1 < lVar8) {
    param_2 = param_2 + -2;
    do {
      lVar8 = lVar8 + -1;
      fVar1 = *param_2;
      lVar9 = 0;
      fVar2 = param_2[1];
      lVar7 = 2;
      *(uint64_t *)param_2 = *(uint64_t *)param_1;
      bVar10 = lVar8 == 2;
      lVar5 = lVar9;
      if (2 < lVar8) {
        do {
          lVar9 = lVar7 + -1;
          if (param_1[lVar7 * 2 + -2] < param_1[lVar7 * 2] ||
              param_1[lVar7 * 2 + -2] == param_1[lVar7 * 2]) {
            lVar9 = lVar7;
          }
          lVar7 = lVar9 * 2 + 2;
          *(uint64_t *)(param_1 + lVar5 * 2) = *(uint64_t *)(param_1 + lVar9 * 2);
          bVar10 = lVar7 == lVar8;
          lVar5 = lVar9;
        } while (lVar7 < lVar8);
      }
      if (bVar10) {
        *(uint64_t *)(param_1 + lVar9 * 2) = *(uint64_t *)(param_1 + lVar7 * 2 + -2);
        lVar9 = lVar7 + -1;
      }
      while ((0 < lVar9 &&
             (lVar8 = lVar9 + -1 >> 1, param_1[lVar8 * 2] <= fVar1 && fVar1 != param_1[lVar8 * 2])))
      {
        *(uint64_t *)(param_1 + lVar9 * 2) = *(uint64_t *)(param_1 + lVar8 * 2);
        lVar9 = lVar8;
      }
      param_2 = param_2 + -2;
      param_1[lVar9 * 2] = fVar1;
      param_1[lVar9 * 2 + 1] = fVar2;
      lVar8 = (int64_t)param_2 + (8 - (int64_t)param_1) >> 3;
    } while (1 < lVar8);
  }
  return;
}
// 函数: void function_26f415(float *param_1,float *param_2,float *param_3)
void function_26f415(float *param_1,float *param_2,float *param_3)
{
  float fVar1;
  float fVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  float *pfVar6;
  int64_t lVar7;
  int64_t in_R10;
  int64_t lVar8;
  int64_t lVar9;
  bool bVar10;
  lVar8 = in_R10 - (int64_t)param_1 >> 3;
  if (1 < lVar8) {
    lVar7 = (lVar8 + -2 >> 1) + 1;
    lVar9 = lVar7 * 2 + 2;
    pfVar6 = param_1 + lVar7 * 2;
    do {
      fVar1 = pfVar6[-2];
      fVar2 = pfVar6[-1];
      lVar7 = lVar7 + -1;
      lVar9 = lVar9 + -2;
      lVar5 = lVar7;
      lVar4 = lVar9;
      while (lVar4 < lVar8) {
        lVar3 = lVar4 + -1;
        if (param_1[lVar4 * 2 + -2] < param_1[lVar4 * 2] ||
            param_1[lVar4 * 2 + -2] == param_1[lVar4 * 2]) {
          lVar3 = lVar4;
        }
        *(uint64_t *)(param_1 + lVar5 * 2) = *(uint64_t *)(param_1 + lVar3 * 2);
        lVar5 = lVar3;
        lVar4 = lVar3 * 2 + 2;
      }
      if (lVar4 == lVar8) {
        *(uint64_t *)(param_1 + lVar5 * 2) = *(uint64_t *)(param_1 + lVar4 * 2 + -2);
        lVar5 = lVar4 + -1;
      }
      while ((lVar7 < lVar5 &&
             (lVar4 = lVar5 + -1 >> 1, param_1[lVar4 * 2] <= fVar1 && fVar1 != param_1[lVar4 * 2])))
      {
        *(uint64_t *)(param_1 + lVar5 * 2) = *(uint64_t *)(param_1 + lVar4 * 2);
        lVar5 = lVar4;
      }
      param_1[lVar5 * 2] = fVar1;
      param_1[lVar5 * 2 + 1] = fVar2;
      pfVar6 = pfVar6 + -2;
    } while (lVar7 != 0);
  }
  pfVar6 = param_2;
  if (param_2 < param_3) {
    do {
      if (*pfVar6 <= *param_1 && *param_1 != *pfVar6) {
        lVar9 = 0;
        fVar1 = *pfVar6;
        lVar7 = 2;
        fVar2 = pfVar6[1];
        *(uint64_t *)pfVar6 = *(uint64_t *)param_1;
        bVar10 = lVar8 == 2;
        lVar5 = lVar9;
        if (2 < lVar8) {
          do {
            lVar9 = lVar7 + -1;
            if (param_1[lVar7 * 2 + -2] < param_1[lVar7 * 2] ||
                param_1[lVar7 * 2 + -2] == param_1[lVar7 * 2]) {
              lVar9 = lVar7;
            }
            lVar7 = lVar9 * 2 + 2;
            *(uint64_t *)(param_1 + lVar5 * 2) = *(uint64_t *)(param_1 + lVar9 * 2);
            bVar10 = lVar7 == lVar8;
            lVar5 = lVar9;
          } while (lVar7 < lVar8);
        }
        if (bVar10) {
          *(uint64_t *)(param_1 + lVar9 * 2) = *(uint64_t *)(param_1 + lVar7 * 2 + -2);
          lVar9 = lVar7 + -1;
        }
        while ((0 < lVar9 &&
               (lVar7 = lVar9 + -1 >> 1, param_1[lVar7 * 2] <= fVar1 && fVar1 != param_1[lVar7 * 2])
               )) {
          *(uint64_t *)(param_1 + lVar9 * 2) = *(uint64_t *)(param_1 + lVar7 * 2);
          lVar9 = lVar7;
        }
        param_1[lVar9 * 2] = fVar1;
        param_1[lVar9 * 2 + 1] = fVar2;
      }
      pfVar6 = pfVar6 + 2;
    } while (pfVar6 < param_3);
  }
  if (1 < lVar8) {
    param_2 = param_2 + -2;
    do {
      lVar8 = lVar8 + -1;
      fVar1 = *param_2;
      lVar9 = 0;
      fVar2 = param_2[1];
      lVar7 = 2;
      *(uint64_t *)param_2 = *(uint64_t *)param_1;
      bVar10 = lVar8 == 2;
      lVar5 = lVar9;
      if (2 < lVar8) {
        do {
          lVar9 = lVar7 + -1;
          if (param_1[lVar7 * 2 + -2] < param_1[lVar7 * 2] ||
              param_1[lVar7 * 2 + -2] == param_1[lVar7 * 2]) {
            lVar9 = lVar7;
          }
          lVar7 = lVar9 * 2 + 2;
          *(uint64_t *)(param_1 + lVar5 * 2) = *(uint64_t *)(param_1 + lVar9 * 2);
          bVar10 = lVar7 == lVar8;
          lVar5 = lVar9;
        } while (lVar7 < lVar8);
      }
      if (bVar10) {
        *(uint64_t *)(param_1 + lVar9 * 2) = *(uint64_t *)(param_1 + lVar7 * 2 + -2);
        lVar9 = lVar7 + -1;
      }
      while ((0 < lVar9 &&
             (lVar8 = lVar9 + -1 >> 1, param_1[lVar8 * 2] <= fVar1 && fVar1 != param_1[lVar8 * 2])))
      {
        *(uint64_t *)(param_1 + lVar9 * 2) = *(uint64_t *)(param_1 + lVar8 * 2);
        lVar9 = lVar8;
      }
      param_2 = param_2 + -2;
      param_1[lVar9 * 2] = fVar1;
      param_1[lVar9 * 2 + 1] = fVar2;
      lVar8 = (int64_t)param_2 + (8 - (int64_t)param_1) >> 3;
    } while (1 < lVar8);
  }
  return;
}
// 函数: void function_26f435(float *param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)
void function_26f435(float *param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)
{
  float fVar1;
  float fVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  float *pfVar6;
  float *unaff_RSI;
  float *unaff_RDI;
  int64_t lVar7;
  int64_t in_R10;
  int64_t lVar8;
  bool bVar9;
  lVar7 = (param_4 >> 1) + 1;
  lVar8 = lVar7 * 2 + 2;
  pfVar6 = param_1 + lVar7 * 2;
  do {
    fVar1 = pfVar6[-2];
    fVar2 = pfVar6[-1];
    lVar7 = lVar7 + -1;
    lVar8 = lVar8 + -2;
    lVar5 = lVar7;
    lVar4 = lVar8;
    while (lVar4 < in_R10) {
      lVar3 = lVar4 + -1;
      if (param_1[lVar4 * 2 + -2] < param_1[lVar4 * 2] ||
          param_1[lVar4 * 2 + -2] == param_1[lVar4 * 2]) {
        lVar3 = lVar4;
      }
      *(uint64_t *)(param_1 + lVar5 * 2) = *(uint64_t *)(param_1 + lVar3 * 2);
      lVar5 = lVar3;
      lVar4 = lVar3 * 2 + 2;
    }
    if (lVar4 == in_R10) {
      *(uint64_t *)(param_1 + lVar5 * 2) = *(uint64_t *)(param_1 + lVar4 * 2 + -2);
      lVar5 = lVar4 + -1;
    }
    while ((lVar7 < lVar5 &&
           (lVar4 = lVar5 + -1 >> 1, param_1[lVar4 * 2] <= fVar1 && fVar1 != param_1[lVar4 * 2]))) {
      *(uint64_t *)(param_1 + lVar5 * 2) = *(uint64_t *)(param_1 + lVar4 * 2);
      lVar5 = lVar4;
    }
    param_1[lVar5 * 2] = fVar1;
    param_1[lVar5 * 2 + 1] = fVar2;
    pfVar6 = pfVar6 + -2;
  } while (lVar7 != 0);
  pfVar6 = unaff_RSI;
  if (unaff_RSI < unaff_RDI) {
    do {
      if (*pfVar6 <= *param_1 && *param_1 != *pfVar6) {
        lVar8 = 0;
        fVar1 = *pfVar6;
        lVar7 = 2;
        fVar2 = pfVar6[1];
        *(uint64_t *)pfVar6 = *(uint64_t *)param_1;
        bVar9 = in_R10 == 2;
        lVar5 = lVar8;
        if (2 < in_R10) {
          do {
            lVar8 = lVar7 + -1;
            if (param_1[lVar7 * 2 + -2] < param_1[lVar7 * 2] ||
                param_1[lVar7 * 2 + -2] == param_1[lVar7 * 2]) {
              lVar8 = lVar7;
            }
            lVar7 = lVar8 * 2 + 2;
            *(uint64_t *)(param_1 + lVar5 * 2) = *(uint64_t *)(param_1 + lVar8 * 2);
            bVar9 = lVar7 == in_R10;
            lVar5 = lVar8;
          } while (lVar7 < in_R10);
        }
        if (bVar9) {
          *(uint64_t *)(param_1 + lVar8 * 2) = *(uint64_t *)(param_1 + lVar7 * 2 + -2);
          lVar8 = lVar7 + -1;
        }
        while ((0 < lVar8 &&
               (lVar7 = lVar8 + -1 >> 1, param_1[lVar7 * 2] <= fVar1 && fVar1 != param_1[lVar7 * 2])
               )) {
          *(uint64_t *)(param_1 + lVar8 * 2) = *(uint64_t *)(param_1 + lVar7 * 2);
          lVar8 = lVar7;
        }
        param_1[lVar8 * 2] = fVar1;
        param_1[lVar8 * 2 + 1] = fVar2;
      }
      pfVar6 = pfVar6 + 2;
    } while (pfVar6 < unaff_RDI);
  }
  if (1 < in_R10) {
    pfVar6 = unaff_RSI + -2;
    do {
      lVar4 = in_R10 + -1;
      fVar1 = *pfVar6;
      lVar8 = 0;
      fVar2 = pfVar6[1];
      lVar7 = 2;
      *(uint64_t *)pfVar6 = *(uint64_t *)param_1;
      bVar9 = lVar4 == 2;
      lVar5 = lVar8;
      if (2 < lVar4) {
        do {
          lVar8 = lVar7 + -1;
          if (param_1[lVar7 * 2 + -2] < param_1[lVar7 * 2] ||
              param_1[lVar7 * 2 + -2] == param_1[lVar7 * 2]) {
            lVar8 = lVar7;
          }
          lVar7 = lVar8 * 2 + 2;
          *(uint64_t *)(param_1 + lVar5 * 2) = *(uint64_t *)(param_1 + lVar8 * 2);
          bVar9 = lVar7 == lVar4;
          lVar5 = lVar8;
        } while (lVar7 < lVar4);
      }
      if (bVar9) {
        *(uint64_t *)(param_1 + lVar8 * 2) = *(uint64_t *)(param_1 + lVar7 * 2 + -2);
        lVar8 = lVar7 + -1;
      }
      while ((0 < lVar8 &&
             (lVar7 = lVar8 + -1 >> 1, param_1[lVar7 * 2] <= fVar1 && fVar1 != param_1[lVar7 * 2])))
      {
        *(uint64_t *)(param_1 + lVar8 * 2) = *(uint64_t *)(param_1 + lVar7 * 2);
        lVar8 = lVar7;
      }
      pfVar6 = pfVar6 + -2;
      param_1[lVar8 * 2] = fVar1;
      param_1[lVar8 * 2 + 1] = fVar2;
      in_R10 = (int64_t)pfVar6 + (8 - (int64_t)param_1) >> 3;
    } while (1 < in_R10);
  }
  return;
}
// 函数: void function_26f4f7(float *param_1)
void function_26f4f7(float *param_1)
{
  float fVar1;
  float fVar2;
  int64_t lVar3;
  int64_t lVar4;
  float *unaff_RSI;
  float *unaff_RDI;
  int64_t lVar5;
  float *pfVar6;
  int64_t in_R10;
  int64_t lVar7;
  bool bVar8;
  pfVar6 = unaff_RSI;
  if (unaff_RSI < unaff_RDI) {
    do {
      if (*pfVar6 <= *param_1 && *param_1 != *pfVar6) {
        lVar3 = 0;
        fVar1 = *pfVar6;
        lVar5 = 2;
        fVar2 = pfVar6[1];
        *(uint64_t *)pfVar6 = *(uint64_t *)param_1;
        bVar8 = in_R10 == 2;
        lVar4 = lVar3;
        if (2 < in_R10) {
          do {
            lVar3 = lVar5 + -1;
            if (param_1[lVar5 * 2 + -2] < param_1[lVar5 * 2] ||
                param_1[lVar5 * 2 + -2] == param_1[lVar5 * 2]) {
              lVar3 = lVar5;
            }
            lVar5 = lVar3 * 2 + 2;
            *(uint64_t *)(param_1 + lVar4 * 2) = *(uint64_t *)(param_1 + lVar3 * 2);
            bVar8 = lVar5 == in_R10;
            lVar4 = lVar3;
          } while (lVar5 < in_R10);
        }
        if (bVar8) {
          *(uint64_t *)(param_1 + lVar3 * 2) = *(uint64_t *)(param_1 + lVar5 * 2 + -2);
          lVar3 = lVar5 + -1;
        }
        while ((0 < lVar3 &&
               (lVar5 = lVar3 + -1 >> 1, param_1[lVar5 * 2] <= fVar1 && fVar1 != param_1[lVar5 * 2])
               )) {
          *(uint64_t *)(param_1 + lVar3 * 2) = *(uint64_t *)(param_1 + lVar5 * 2);
          lVar3 = lVar5;
        }
        param_1[lVar3 * 2] = fVar1;
        param_1[lVar3 * 2 + 1] = fVar2;
      }
      pfVar6 = pfVar6 + 2;
    } while (pfVar6 < unaff_RDI);
  }
  if (1 < in_R10) {
    pfVar6 = unaff_RSI + -2;
    do {
      lVar7 = in_R10 + -1;
      fVar1 = *pfVar6;
      lVar3 = 0;
      fVar2 = pfVar6[1];
      lVar5 = 2;
      *(uint64_t *)pfVar6 = *(uint64_t *)param_1;
      bVar8 = lVar7 == 2;
      lVar4 = lVar3;
      if (2 < lVar7) {
        do {
          lVar3 = lVar5 + -1;
          if (param_1[lVar5 * 2 + -2] < param_1[lVar5 * 2] ||
              param_1[lVar5 * 2 + -2] == param_1[lVar5 * 2]) {
            lVar3 = lVar5;
          }
          lVar5 = lVar3 * 2 + 2;
          *(uint64_t *)(param_1 + lVar4 * 2) = *(uint64_t *)(param_1 + lVar3 * 2);
          bVar8 = lVar5 == lVar7;
          lVar4 = lVar3;
        } while (lVar5 < lVar7);
      }
      if (bVar8) {
        *(uint64_t *)(param_1 + lVar3 * 2) = *(uint64_t *)(param_1 + lVar5 * 2 + -2);
        lVar3 = lVar5 + -1;
      }
      while ((0 < lVar3 &&
             (lVar5 = lVar3 + -1 >> 1, param_1[lVar5 * 2] <= fVar1 && fVar1 != param_1[lVar5 * 2])))
      {
        *(uint64_t *)(param_1 + lVar3 * 2) = *(uint64_t *)(param_1 + lVar5 * 2);
        lVar3 = lVar5;
      }
      pfVar6 = pfVar6 + -2;
      param_1[lVar3 * 2] = fVar1;
      param_1[lVar3 * 2 + 1] = fVar2;
      in_R10 = (int64_t)pfVar6 + (8 - (int64_t)param_1) >> 3;
    } while (1 < in_R10);
  }
  return;
}
// 函数: void function_26f5d5(uint64_t *param_1)
void function_26f5d5(uint64_t *param_1)
{
  float fVar1;
  float fVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t unaff_RSI;
  int64_t lVar5;
  float *pfVar6;
  int64_t in_R10;
  int64_t lVar7;
  bool bVar8;
  pfVar6 = (float *)(unaff_RSI + -8);
  do {
    lVar7 = in_R10 + -1;
    fVar1 = *pfVar6;
    lVar3 = 0;
    fVar2 = pfVar6[1];
    lVar5 = 2;
    *(uint64_t *)pfVar6 = *param_1;
    bVar8 = lVar7 == 2;
    lVar4 = lVar3;
    if (2 < lVar7) {
      do {
        lVar3 = lVar5 + -1;
        if (*(float *)(param_1 + lVar5 + -1) < *(float *)(param_1 + lVar5) ||
            *(float *)(param_1 + lVar5 + -1) == *(float *)(param_1 + lVar5)) {
          lVar3 = lVar5;
        }
        lVar5 = lVar3 * 2 + 2;
        param_1[lVar4] = param_1[lVar3];
        bVar8 = lVar5 == lVar7;
        lVar4 = lVar3;
      } while (lVar5 < lVar7);
    }
    if (bVar8) {
      param_1[lVar3] = param_1[lVar5 + -1];
      lVar3 = lVar5 + -1;
    }
    while ((0 < lVar3 &&
           (lVar5 = lVar3 + -1 >> 1,
           *(float *)(param_1 + lVar5) <= fVar1 && fVar1 != *(float *)(param_1 + lVar5)))) {
      param_1[lVar3] = param_1[lVar5];
      lVar3 = lVar5;
    }
    pfVar6 = pfVar6 + -2;
    *(float *)(param_1 + lVar3) = fVar1;
    *(float *)((int64_t)param_1 + lVar3 * 8 + 4) = fVar2;
    in_R10 = (int64_t)pfVar6 + (8 - (int64_t)param_1) >> 3;
  } while (1 < in_R10);
  return;
}
// 函数: void function_26f6b0(float *param_1,float *param_2,int64_t param_3,int8_t param_4)
void function_26f6b0(float *param_1,float *param_2,int64_t param_3,int8_t param_4)
{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint64_t uVar6;
  int64_t lVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  uVar6 = (int64_t)param_2 - (int64_t)param_1;
  while ((0xe0 < (int64_t)(uVar6 & 0xfffffffffffffff8) && (0 < param_3))) {
    lVar7 = (int64_t)param_2 - (int64_t)param_1 >> 3;
    if (lVar7 < 0) {
      lVar7 = lVar7 + 1;
    }
    fVar10 = *param_1;
    fVar2 = param_2[-2];
    fVar3 = param_1[(lVar7 >> 1) * 2];
    fVar5 = fVar3;
    pfVar8 = param_1 + (lVar7 >> 1) * 2;
    pfVar9 = param_1;
    fVar4 = fVar10;
    if (fVar10 < fVar3) {
      fVar5 = fVar10;
      pfVar8 = param_1;
      pfVar9 = param_1 + (lVar7 >> 1) * 2;
      fVar4 = fVar3;
    }
    if ((fVar2 <= fVar4) && (pfVar9 = pfVar8, fVar5 < fVar2)) {
      pfVar9 = param_2 + -2;
    }
    fVar2 = *pfVar9;
    pfVar8 = param_2;
    pfVar9 = param_1;
    while( true ) {
      while (fVar10 < fVar2) {
        pfVar1 = pfVar9 + 2;
        pfVar9 = pfVar9 + 2;
        fVar10 = *pfVar1;
      }
      pfVar8 = pfVar8 + -2;
      fVar10 = *pfVar8;
      while (fVar2 < fVar10) {
        pfVar8 = pfVar8 + -2;
        fVar10 = *pfVar8;
      }
      if (pfVar8 <= pfVar9) break;
      fVar10 = *pfVar9;
      fVar3 = pfVar9[1];
      *(uint64_t *)pfVar9 = *(uint64_t *)pfVar8;
      pfVar9 = pfVar9 + 2;
      *pfVar8 = fVar10;
      pfVar8[1] = fVar3;
      fVar10 = *pfVar9;
    }
    param_3 = param_3 + -1;
    function_26f6b0(pfVar9,param_2,param_3,param_4);
    uVar6 = (int64_t)pfVar9 - (int64_t)param_1;
    param_2 = pfVar9;
  }
  if (param_3 == 0) {
    function_26f410(param_1,param_2,param_2,param_4);
  }
  return;
}
// 函数: void function_26f6bd(float *param_1,float *param_2,int64_t param_3,int8_t param_4)
void function_26f6bd(float *param_1,float *param_2,int64_t param_3,int8_t param_4)
{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int64_t in_RAX;
  uint64_t uVar6;
  int64_t lVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  uVar6 = in_RAX - (int64_t)param_1;
  while ((0xe0 < (int64_t)(uVar6 & 0xfffffffffffffff8) && (0 < param_3))) {
    lVar7 = (int64_t)param_2 - (int64_t)param_1 >> 3;
    if (lVar7 < 0) {
      lVar7 = lVar7 + 1;
    }
    fVar10 = *param_1;
    fVar2 = param_2[-2];
    fVar3 = param_1[(lVar7 >> 1) * 2];
    fVar5 = fVar3;
    pfVar8 = param_1 + (lVar7 >> 1) * 2;
    pfVar9 = param_1;
    fVar4 = fVar10;
    if (fVar10 < fVar3) {
      fVar5 = fVar10;
      pfVar8 = param_1;
      pfVar9 = param_1 + (lVar7 >> 1) * 2;
      fVar4 = fVar3;
    }
    if ((fVar2 <= fVar4) && (pfVar9 = pfVar8, fVar5 < fVar2)) {
      pfVar9 = param_2 + -2;
    }
    fVar2 = *pfVar9;
    pfVar8 = param_2;
    pfVar9 = param_1;
    while( true ) {
      while (fVar10 < fVar2) {
        pfVar1 = pfVar9 + 2;
        pfVar9 = pfVar9 + 2;
        fVar10 = *pfVar1;
      }
      pfVar8 = pfVar8 + -2;
      fVar10 = *pfVar8;
      while (fVar2 < fVar10) {
        pfVar8 = pfVar8 + -2;
        fVar10 = *pfVar8;
      }
      if (pfVar8 <= pfVar9) break;
      fVar10 = *pfVar9;
      fVar3 = pfVar9[1];
      *(uint64_t *)pfVar9 = *(uint64_t *)pfVar8;
      pfVar9 = pfVar9 + 2;
      *pfVar8 = fVar10;
      pfVar8[1] = fVar3;
      fVar10 = *pfVar9;
    }
    param_3 = param_3 + -1;
    function_26f6b0(pfVar9,param_2,param_3,param_4);
    uVar6 = (int64_t)pfVar9 - (int64_t)param_1;
    param_2 = pfVar9;
  }
  if (param_3 == 0) {
    function_26f410(param_1,param_2,param_2,param_4);
  }
  return;
}
// 函数: void function_26f6e2(uint64_t param_1)
void function_26f6e2(uint64_t param_1)
{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int64_t lVar6;
  float *pfVar7;
  int8_t unaff_BL;
  int64_t unaff_RBP;
  float *unaff_RSI;
  float *pfVar8;
  float *in_R10;
  float fVar9;
  do {
    pfVar8 = in_R10;
    if (unaff_RBP < 1) break;
    lVar6 = (int64_t)in_R10 - (int64_t)unaff_RSI >> 3;
    if (lVar6 < 0) {
      lVar6 = lVar6 + 1;
    }
    fVar9 = *unaff_RSI;
    fVar2 = in_R10[-2];
    fVar3 = unaff_RSI[(lVar6 >> 1) * 2];
    fVar5 = fVar3;
    pfVar8 = unaff_RSI + (lVar6 >> 1) * 2;
    pfVar7 = unaff_RSI;
    fVar4 = fVar9;
    if (fVar9 < fVar3) {
      fVar5 = fVar9;
      pfVar8 = unaff_RSI;
      pfVar7 = unaff_RSI + (lVar6 >> 1) * 2;
      fVar4 = fVar3;
    }
    if ((fVar2 <= fVar4) && (pfVar7 = pfVar8, fVar5 < fVar2)) {
      pfVar7 = in_R10 + -2;
    }
    fVar2 = *pfVar7;
    pfVar7 = in_R10;
    pfVar8 = unaff_RSI;
    while( true ) {
      while (fVar9 < fVar2) {
        pfVar1 = pfVar8 + 2;
        pfVar8 = pfVar8 + 2;
        fVar9 = *pfVar1;
      }
      pfVar7 = pfVar7 + -2;
      fVar9 = *pfVar7;
      while (fVar2 < fVar9) {
        pfVar7 = pfVar7 + -2;
        fVar9 = *pfVar7;
      }
      if (pfVar7 <= pfVar8) break;
      fVar9 = *pfVar8;
      fVar3 = pfVar8[1];
      *(uint64_t *)pfVar8 = *(uint64_t *)pfVar7;
      pfVar8 = pfVar8 + 2;
      *pfVar7 = fVar9;
      pfVar7[1] = fVar3;
      fVar9 = *pfVar8;
    }
    unaff_RBP = unaff_RBP + -1;
    param_1 = function_26f6b0(pfVar8,in_R10,unaff_RBP,unaff_BL);
    in_R10 = pfVar8;
  } while (0xe0 < (int64_t)((int64_t)pfVar8 - (int64_t)unaff_RSI & 0xfffffffffffffff8U));
  if (unaff_RBP == 0) {
    function_26f410(param_1,pfVar8,pfVar8,unaff_BL);
  }
  return;
}
// 函数: void function_26f7c3(void)
void function_26f7c3(void)
{
  int64_t unaff_RBP;
  if (unaff_RBP == 0) {
    function_26f410();
  }
  return;
}
// 函数: void function_26f7cd(void)
void function_26f7cd(void)
{
  function_26f410();
  return;
}