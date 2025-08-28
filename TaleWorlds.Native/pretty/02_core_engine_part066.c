#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part066.c - 9 个函数

// 函数: void FUN_18009d7b5(uint64_t param_1,float *param_2)
void FUN_18009d7b5(uint64_t param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int64_t lVar3;
  int64_t lVar4;
  float *pfVar5;
  int64_t lVar6;
  float *pfVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t unaff_RSI;
  float *unaff_RDI;
  int64_t lVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  
  do {
    pfVar7 = param_2;
    if (unaff_RSI < 1) break;
    lVar3 = (int64_t)param_2 - (int64_t)unaff_RDI >> 2;
    if (lVar3 < 0) {
      lVar3 = lVar3 + 1;
    }
    fVar12 = *unaff_RDI;
    fVar1 = param_2[-1];
    fVar2 = unaff_RDI[lVar3 >> 1];
    fVar13 = fVar12;
    if (fVar12 < fVar2) {
      fVar13 = fVar2;
      fVar2 = fVar12;
    }
    pfVar5 = param_2;
    pfVar7 = unaff_RDI;
    if ((fVar1 <= fVar13) && (fVar13 = fVar2, fVar2 < fVar1)) {
      fVar13 = fVar1;
    }
    while( true ) {
      while (fVar12 < fVar13) {
        fVar12 = pfVar7[1];
        pfVar7 = pfVar7 + 1;
      }
      pfVar5 = pfVar5 + -1;
      fVar1 = *pfVar5;
      while (fVar13 < fVar1) {
        pfVar5 = pfVar5 + -1;
        fVar1 = *pfVar5;
      }
      if (pfVar5 <= pfVar7) break;
      fVar1 = *pfVar7;
      *pfVar7 = *pfVar5;
      *pfVar5 = fVar1;
      fVar12 = pfVar7[1];
      pfVar7 = pfVar7 + 1;
    }
    unaff_RSI = unaff_RSI + -1;
    FUN_18009d790(pfVar7,param_2,unaff_RSI);
    param_2 = pfVar7;
  } while (0x70 < (int64_t)((int64_t)pfVar7 - (int64_t)unaff_RDI & 0xfffffffffffffffcU));
  if (unaff_RSI != 0) {
    return;
  }
  lVar3 = (int64_t)pfVar7 - (int64_t)unaff_RDI >> 2;
  if (1 < lVar3) {
    lVar10 = (lVar3 + -2 >> 1) + 1;
    lVar9 = lVar10 * 2 + 2;
    do {
      fVar1 = unaff_RDI[lVar10 + -1];
      lVar10 = lVar10 + -1;
      lVar9 = lVar9 + -2;
      lVar8 = lVar10;
      lVar4 = lVar9;
      while (lVar4 < lVar3) {
        lVar6 = lVar4 + -1;
        if (unaff_RDI[lVar4 + -1] < unaff_RDI[lVar4] || unaff_RDI[lVar4 + -1] == unaff_RDI[lVar4]) {
          lVar6 = lVar4;
        }
        unaff_RDI[lVar8] = unaff_RDI[lVar6];
        lVar8 = lVar6;
        lVar4 = lVar6 * 2 + 2;
      }
      if (lVar4 == lVar3) {
        unaff_RDI[lVar8] = unaff_RDI[lVar4 + -1];
        lVar8 = lVar4 + -1;
      }
      while (lVar10 < lVar8) {
        lVar4 = lVar8 + -1 >> 1;
        if (fVar1 <= unaff_RDI[lVar4]) break;
        unaff_RDI[lVar8] = unaff_RDI[lVar4];
        lVar8 = lVar4;
      }
      unaff_RDI[lVar8] = fVar1;
    } while (lVar10 != 0);
  }
  if (1 < lVar3) {
    pfVar7 = pfVar7 + -1;
    do {
      fVar1 = *pfVar7;
      lVar3 = lVar3 + -1;
      lVar10 = 2;
      *pfVar7 = *unaff_RDI;
      bVar11 = lVar3 == 2;
      lVar8 = 0;
      lVar9 = 0;
      if (2 < lVar3) {
        do {
          lVar9 = lVar10 + -1;
          if (unaff_RDI[lVar10 + -1] < unaff_RDI[lVar10] ||
              unaff_RDI[lVar10 + -1] == unaff_RDI[lVar10]) {
            lVar9 = lVar10;
          }
          lVar10 = lVar9 * 2 + 2;
          unaff_RDI[lVar8] = unaff_RDI[lVar9];
          bVar11 = lVar10 == lVar3;
          lVar8 = lVar9;
        } while (lVar10 < lVar3);
      }
      if (bVar11) {
        unaff_RDI[lVar9] = unaff_RDI[lVar10 + -1];
        lVar9 = lVar10 + -1;
      }
      while (0 < lVar9) {
        lVar3 = lVar9 + -1 >> 1;
        if (fVar1 <= unaff_RDI[lVar3]) break;
        unaff_RDI[lVar9] = unaff_RDI[lVar3];
        lVar9 = lVar3;
      }
      pfVar7 = pfVar7 + -1;
      unaff_RDI[lVar9] = fVar1;
      lVar3 = (4 - (int64_t)unaff_RDI) + (int64_t)pfVar7 >> 2;
    } while (1 < lVar3);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018009e099)
// WARNING: Removing unreachable block (ram,0x00018009e0a6)
// WARNING: Removing unreachable block (ram,0x00018009e0b0)
// WARNING: Removing unreachable block (ram,0x00018009e0c3)
// WARNING: Removing unreachable block (ram,0x00018009e0d6)
// WARNING: Removing unreachable block (ram,0x00018009e0e0)
// WARNING: Removing unreachable block (ram,0x00018009e0f0)
// WARNING: Removing unreachable block (ram,0x00018009e0f4)
// WARNING: Removing unreachable block (ram,0x00018009e10c)
// WARNING: Removing unreachable block (ram,0x00018009e10e)
// WARNING: Removing unreachable block (ram,0x00018009e11b)
// WARNING: Removing unreachable block (ram,0x00018009e120)
// WARNING: Removing unreachable block (ram,0x00018009e132)
// WARNING: Removing unreachable block (ram,0x00018009e140)
// WARNING: Removing unreachable block (ram,0x00018009e146)



// 函数: void FUN_18009d87b(uint64_t param_1,int64_t param_2)
void FUN_18009d87b(uint64_t param_1,int64_t param_2)

{
  float fVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t unaff_RSI;
  float *unaff_RDI;
  int64_t lVar6;
  float *pfVar7;
  int64_t lVar8;
  bool bVar9;
  
  if (unaff_RSI != 0) {
    return;
  }
  lVar8 = param_2 - (int64_t)unaff_RDI >> 2;
  if (1 < lVar8) {
    lVar6 = (lVar8 + -2 >> 1) + 1;
    lVar5 = lVar6 * 2 + 2;
    do {
      fVar1 = unaff_RDI[lVar6 + -1];
      lVar6 = lVar6 + -1;
      lVar5 = lVar5 + -2;
      lVar4 = lVar6;
      lVar2 = lVar5;
      while (lVar2 < lVar8) {
        lVar3 = lVar2 + -1;
        if (unaff_RDI[lVar2 + -1] < unaff_RDI[lVar2] || unaff_RDI[lVar2 + -1] == unaff_RDI[lVar2]) {
          lVar3 = lVar2;
        }
        unaff_RDI[lVar4] = unaff_RDI[lVar3];
        lVar4 = lVar3;
        lVar2 = lVar3 * 2 + 2;
      }
      if (lVar2 == lVar8) {
        unaff_RDI[lVar4] = unaff_RDI[lVar2 + -1];
        lVar4 = lVar2 + -1;
      }
      while (lVar6 < lVar4) {
        lVar2 = lVar4 + -1 >> 1;
        if (fVar1 <= unaff_RDI[lVar2]) break;
        unaff_RDI[lVar4] = unaff_RDI[lVar2];
        lVar4 = lVar2;
      }
      unaff_RDI[lVar4] = fVar1;
    } while (lVar6 != 0);
  }
  if (1 < lVar8) {
    pfVar7 = (float *)(param_2 + -4);
    do {
      fVar1 = *pfVar7;
      lVar8 = lVar8 + -1;
      lVar6 = 2;
      *pfVar7 = *unaff_RDI;
      bVar9 = lVar8 == 2;
      lVar4 = 0;
      lVar5 = 0;
      if (2 < lVar8) {
        do {
          lVar5 = lVar6 + -1;
          if (unaff_RDI[lVar6 + -1] < unaff_RDI[lVar6] || unaff_RDI[lVar6 + -1] == unaff_RDI[lVar6])
          {
            lVar5 = lVar6;
          }
          lVar6 = lVar5 * 2 + 2;
          unaff_RDI[lVar4] = unaff_RDI[lVar5];
          bVar9 = lVar6 == lVar8;
          lVar4 = lVar5;
        } while (lVar6 < lVar8);
      }
      if (bVar9) {
        unaff_RDI[lVar5] = unaff_RDI[lVar6 + -1];
        lVar5 = lVar6 + -1;
      }
      while (0 < lVar5) {
        lVar8 = lVar5 + -1 >> 1;
        if (fVar1 <= unaff_RDI[lVar8]) break;
        unaff_RDI[lVar5] = unaff_RDI[lVar8];
        lVar5 = lVar8;
      }
      pfVar7 = pfVar7 + -1;
      unaff_RDI[lVar5] = fVar1;
      lVar8 = (4 - (int64_t)unaff_RDI) + (int64_t)pfVar7 >> 2;
    } while (1 < lVar8);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018009e099)
// WARNING: Removing unreachable block (ram,0x00018009e0a6)
// WARNING: Removing unreachable block (ram,0x00018009e0b0)
// WARNING: Removing unreachable block (ram,0x00018009e0c3)
// WARNING: Removing unreachable block (ram,0x00018009e0d6)
// WARNING: Removing unreachable block (ram,0x00018009e0e0)
// WARNING: Removing unreachable block (ram,0x00018009e0f0)
// WARNING: Removing unreachable block (ram,0x00018009e0f4)
// WARNING: Removing unreachable block (ram,0x00018009e10c)
// WARNING: Removing unreachable block (ram,0x00018009e10e)
// WARNING: Removing unreachable block (ram,0x00018009e11b)
// WARNING: Removing unreachable block (ram,0x00018009e120)
// WARNING: Removing unreachable block (ram,0x00018009e132)
// WARNING: Removing unreachable block (ram,0x00018009e140)
// WARNING: Removing unreachable block (ram,0x00018009e146)



// 函数: void FUN_18009d885(uint64_t param_1,int64_t param_2)
void FUN_18009d885(uint64_t param_1,int64_t param_2)

{
  float fVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  float *unaff_RDI;
  int64_t lVar6;
  float *pfVar7;
  int64_t lVar8;
  bool bVar9;
  
  lVar8 = param_2 - (int64_t)unaff_RDI >> 2;
  if (1 < lVar8) {
    lVar6 = (lVar8 + -2 >> 1) + 1;
    lVar5 = lVar6 * 2 + 2;
    do {
      fVar1 = unaff_RDI[lVar6 + -1];
      lVar6 = lVar6 + -1;
      lVar5 = lVar5 + -2;
      lVar4 = lVar6;
      lVar2 = lVar5;
      while (lVar2 < lVar8) {
        lVar3 = lVar2 + -1;
        if (unaff_RDI[lVar2 + -1] < unaff_RDI[lVar2] || unaff_RDI[lVar2 + -1] == unaff_RDI[lVar2]) {
          lVar3 = lVar2;
        }
        unaff_RDI[lVar4] = unaff_RDI[lVar3];
        lVar4 = lVar3;
        lVar2 = lVar3 * 2 + 2;
      }
      if (lVar2 == lVar8) {
        unaff_RDI[lVar4] = unaff_RDI[lVar2 + -1];
        lVar4 = lVar2 + -1;
      }
      while (lVar6 < lVar4) {
        lVar2 = lVar4 + -1 >> 1;
        if (fVar1 <= unaff_RDI[lVar2]) break;
        unaff_RDI[lVar4] = unaff_RDI[lVar2];
        lVar4 = lVar2;
      }
      unaff_RDI[lVar4] = fVar1;
    } while (lVar6 != 0);
  }
  if (1 < lVar8) {
    pfVar7 = (float *)(param_2 + -4);
    do {
      fVar1 = *pfVar7;
      lVar8 = lVar8 + -1;
      lVar6 = 2;
      *pfVar7 = *unaff_RDI;
      bVar9 = lVar8 == 2;
      lVar4 = 0;
      lVar5 = 0;
      if (2 < lVar8) {
        do {
          lVar5 = lVar6 + -1;
          if (unaff_RDI[lVar6 + -1] < unaff_RDI[lVar6] || unaff_RDI[lVar6 + -1] == unaff_RDI[lVar6])
          {
            lVar5 = lVar6;
          }
          lVar6 = lVar5 * 2 + 2;
          unaff_RDI[lVar4] = unaff_RDI[lVar5];
          bVar9 = lVar6 == lVar8;
          lVar4 = lVar5;
        } while (lVar6 < lVar8);
      }
      if (bVar9) {
        unaff_RDI[lVar5] = unaff_RDI[lVar6 + -1];
        lVar5 = lVar6 + -1;
      }
      while (0 < lVar5) {
        lVar8 = lVar5 + -1 >> 1;
        if (fVar1 <= unaff_RDI[lVar8]) break;
        unaff_RDI[lVar5] = unaff_RDI[lVar8];
        lVar5 = lVar8;
      }
      pfVar7 = pfVar7 + -1;
      unaff_RDI[lVar5] = fVar1;
      lVar8 = (4 - (int64_t)unaff_RDI) + (int64_t)pfVar7 >> 2;
    } while (1 < lVar8);
  }
  return;
}





// 函数: void FUN_18009d8f0(int64_t *param_1,int64_t *param_2,int64_t *param_3,int64_t param_4)
void FUN_18009d8f0(int64_t *param_1,int64_t *param_2,int64_t *param_3,int64_t param_4)

{
  byte bVar1;
  int64_t lVar2;
  bool bVar3;
  int64_t *plVar4;
  byte *pbVar5;
  uint uVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t lVar10;
  uint64_t uVar11;
  int64_t *plVar12;
  float extraout_XMM0_Da;
  int64_t lStackX_8;
  int64_t *plStackX_10;
  int8_t auStackX_18 [8];
  int8_t auStackX_20 [8];
  
  lVar7 = (int64_t)param_2 - (int64_t)param_1 >> 3;
  plStackX_10 = param_2;
  if (1 < lVar7) {
    lVar8 = (lVar7 + -2 >> 1) + 1;
    do {
      lStackX_8 = param_1[lVar8 + -1];
      lVar8 = lVar8 + -1;
      FUN_18009e500(param_1,lVar8,lVar7,lVar8,&lStackX_8,param_4);
    } while (lVar8 != 0);
  }
  uVar9 = 0;
  uVar11 = (uint64_t)((int64_t)param_3 + (7 - (int64_t)param_2)) >> 3;
  if (param_3 < param_2) {
    uVar11 = uVar9;
  }
  plVar12 = param_2;
  if (uVar11 != 0) {
    do {
      lVar8 = *plVar12;
      lVar2 = *param_1;
      plVar4 = (int64_t *)> HighFreq_AnimationSystem1(param_4 + 0x90,auStackX_18,lVar8 + 0x20);
      plVar4 = (int64_t *)> HighFreq_AnimationSystem1(*(int32_t *)(*plVar4 + 0x40),auStackX_20,lVar2 + 0x20);
      if (extraout_XMM0_Da == *(float *)(*plVar4 + 0x40)) {
        if (*(int *)(lVar8 + 0x30) == 0) {
          bVar3 = false;
        }
        else if (*(int *)(lVar2 + 0x30) == 0) {
          bVar3 = true;
        }
        else {
          pbVar5 = *(byte **)(lVar8 + 0x28);
          lVar10 = *(int64_t *)(lVar2 + 0x28) - (int64_t)pbVar5;
          do {
            bVar1 = *pbVar5;
            uVar6 = (uint)pbVar5[lVar10];
            if (bVar1 != uVar6) break;
            pbVar5 = pbVar5 + 1;
          } while (uVar6 != 0);
          bVar3 = 0 < (int)(bVar1 - uVar6);
        }
      }
      else {
        bVar3 = *(float *)(*plVar4 + 0x40) < extraout_XMM0_Da;
      }
      if (bVar3) {
        *plVar12 = lVar2;
        lStackX_8 = lVar8;
        FUN_18009e500(param_1,0,lVar7,0,&lStackX_8,param_4);
      }
      uVar9 = uVar9 + 1;
      param_2 = plStackX_10;
      plVar12 = plVar12 + 1;
    } while (uVar9 < uVar11);
  }
  if (1 < lVar7) {
    param_2 = param_2 + -1;
    do {
      plStackX_10 = (int64_t *)*param_2;
      *param_2 = *param_1;
      FUN_18009e500(param_1,0,lVar7 + -1,0,&plStackX_10,param_4);
      param_2 = param_2 + -1;
      lVar7 = (8 - (int64_t)param_1) + (int64_t)param_2 >> 3;
    } while (1 < lVar7);
  }
  return;
}





// 函数: void FUN_18009daf0(int *param_1,int *param_2,int *param_3,uint64_t *param_4)
void FUN_18009daf0(int *param_1,int *param_2,int *param_3,uint64_t *param_4)

{
  int iVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  int *piVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int aiStackX_8 [2];
  
  lVar5 = (int64_t)param_2 - (int64_t)param_1 >> 2;
  if (1 < lVar5) {
    lVar7 = (lVar5 + -2 >> 1) + 1;
    do {
      aiStackX_8[0] = param_1[lVar7 + -1];
      lVar7 = lVar7 + -1;
      FUN_18009e700(param_1,lVar7,lVar5,lVar7,aiStackX_8,param_4);
    } while (lVar7 != 0);
  }
  uVar9 = 0;
  uVar8 = (uint64_t)((int64_t)param_3 + (3 - (int64_t)param_2)) >> 2;
  if (param_3 < param_2) {
    uVar8 = uVar9;
  }
  piVar6 = param_2;
  if (uVar8 != 0) {
    do {
      puVar4 = (uint64_t *)param_4[2];
      iVar1 = *param_1;
      aiStackX_8[0] = *piVar6;
      puVar2 = puVar4;
      puVar3 = param_4;
      if (puVar4 == (uint64_t *)0x0) {
LAB_18009dbde:
        puVar3 = param_4;
      }
      else {
        do {
          if (*(int *)(puVar2 + 4) < iVar1) {
            puVar2 = (uint64_t *)*puVar2;
          }
          else {
            puVar3 = puVar2;
            puVar2 = (uint64_t *)puVar2[1];
          }
        } while (puVar2 != (uint64_t *)0x0);
        if ((puVar3 == param_4) || (iVar1 < *(int *)(puVar3 + 4))) goto LAB_18009dbde;
      }
      puVar2 = param_4;
      if (puVar4 == (uint64_t *)0x0) {
LAB_18009dc19:
        puVar2 = param_4;
      }
      else {
        do {
          if (*(int *)(puVar4 + 4) < aiStackX_8[0]) {
            puVar4 = (uint64_t *)*puVar4;
          }
          else {
            puVar2 = puVar4;
            puVar4 = (uint64_t *)puVar4[1];
          }
        } while (puVar4 != (uint64_t *)0x0);
        if ((puVar2 == param_4) || (aiStackX_8[0] < *(int *)(puVar2 + 4))) goto LAB_18009dc19;
      }
      if (*(float *)((int64_t)puVar3 + 0x24) < *(float *)((int64_t)puVar2 + 0x24)) {
        *piVar6 = iVar1;
        FUN_18009e700(param_1,0,lVar5,0,aiStackX_8,param_4);
      }
      uVar9 = uVar9 + 1;
      piVar6 = piVar6 + 1;
    } while (uVar9 < uVar8);
  }
  if (1 < lVar5) {
    param_2 = param_2 + -1;
    do {
      aiStackX_8[0] = *param_2;
      *param_2 = *param_1;
      FUN_18009e700(param_1,0,lVar5 + -1,0,aiStackX_8,param_4);
      param_2 = param_2 + -1;
      lVar5 = (4 - (int64_t)param_1) + (int64_t)param_2 >> 2;
    } while (1 < lVar5);
  }
  return;
}





// 函数: void FUN_18009dcd0(int64_t *param_1,int64_t *param_2,int64_t *param_3)
void FUN_18009dcd0(int64_t *param_1,int64_t *param_2,int64_t *param_3)

{
  double dVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  uint64_t uVar10;
  bool bVar11;
  
  uVar10 = (int64_t)param_2 - (int64_t)param_1 >> 3;
  if (1 < (int64_t)uVar10) {
    uVar8 = ((int64_t)(uVar10 - 2) >> 1) + 1;
    uVar5 = uVar8 * 2 + 2;
    do {
      lVar2 = param_1[uVar8 - 1];
      uVar8 = uVar8 - 1;
      uVar5 = uVar5 - 2;
      uVar6 = uVar8;
      uVar3 = uVar5;
      while ((int64_t)uVar3 < (int64_t)uVar10) {
        uVar7 = uVar3 - 1;
        if (*(double *)(param_1[uVar3] + 0x40) < *(double *)(param_1[uVar3 - 1] + 0x40) ||
            *(double *)(param_1[uVar3] + 0x40) == *(double *)(param_1[uVar3 - 1] + 0x40)) {
          uVar7 = uVar3;
        }
        param_1[uVar6] = param_1[uVar7];
        uVar6 = uVar7;
        uVar3 = uVar7 * 2 + 2;
      }
      if (uVar3 == uVar10) {
        param_1[uVar6] = param_1[uVar3 - 1];
        uVar6 = uVar3 - 1;
      }
      if ((int64_t)uVar8 < (int64_t)uVar6) {
        dVar1 = *(double *)(lVar2 + 0x40);
        do {
          uVar3 = (int64_t)(uVar6 - 1) >> 1;
          if (*(double *)(param_1[uVar3] + 0x40) <= dVar1) break;
          param_1[uVar6] = param_1[uVar3];
          uVar6 = uVar3;
        } while ((int64_t)uVar8 < (int64_t)uVar3);
      }
      param_1[uVar6] = lVar2;
    } while (uVar8 != 0);
  }
  uVar8 = 0;
  uVar5 = (uint64_t)((int64_t)param_3 + (7 - (int64_t)param_2)) >> 3;
  if (param_3 < param_2) {
    uVar5 = uVar8;
  }
  uVar6 = uVar8;
  plVar9 = param_2;
  if (uVar5 != 0) {
    do {
      lVar2 = *plVar9;
      if (*(double *)(*param_1 + 0x40) < *(double *)(lVar2 + 0x40)) {
        uVar7 = 2;
        *plVar9 = *param_1;
        bVar11 = uVar10 == 2;
        uVar3 = uVar8;
        uVar4 = uVar8;
        if (2 < (int64_t)uVar10) {
          do {
            uVar3 = uVar7 - 1;
            if (*(double *)(param_1[uVar7] + 0x40) < *(double *)(param_1[uVar7 - 1] + 0x40) ||
                *(double *)(param_1[uVar7] + 0x40) == *(double *)(param_1[uVar7 - 1] + 0x40)) {
              uVar3 = uVar7;
            }
            uVar7 = uVar3 * 2 + 2;
            param_1[uVar4] = param_1[uVar3];
            bVar11 = uVar7 == uVar10;
            uVar4 = uVar3;
          } while ((int64_t)uVar7 < (int64_t)uVar10);
        }
        if (bVar11) {
          param_1[uVar3] = param_1[uVar7 - 1];
          uVar3 = uVar7 - 1;
        }
        if (0 < (int64_t)uVar3) {
          dVar1 = *(double *)(lVar2 + 0x40);
          do {
            uVar7 = (int64_t)(uVar3 - 1) >> 1;
            if (*(double *)(param_1[uVar7] + 0x40) <= dVar1) break;
            param_1[uVar3] = param_1[uVar7];
            uVar3 = uVar7;
          } while (0 < (int64_t)uVar7);
        }
        param_1[uVar3] = lVar2;
      }
      uVar6 = uVar6 + 1;
      plVar9 = plVar9 + 1;
    } while (uVar6 < uVar5);
  }
  if (1 < (int64_t)uVar10) {
    param_2 = param_2 + -1;
    do {
      uVar10 = uVar10 - 1;
      lVar2 = *param_2;
      uVar6 = 2;
      *param_2 = *param_1;
      bVar11 = uVar10 == 2;
      uVar5 = uVar8;
      uVar3 = uVar8;
      if (2 < (int64_t)uVar10) {
        do {
          uVar5 = uVar6 - 1;
          if (*(double *)(param_1[uVar6] + 0x40) < *(double *)(param_1[uVar6 - 1] + 0x40) ||
              *(double *)(param_1[uVar6] + 0x40) == *(double *)(param_1[uVar6 - 1] + 0x40)) {
            uVar5 = uVar6;
          }
          uVar6 = uVar5 * 2 + 2;
          param_1[uVar3] = param_1[uVar5];
          bVar11 = uVar6 == uVar10;
          uVar3 = uVar5;
        } while ((int64_t)uVar6 < (int64_t)uVar10);
      }
      if (bVar11) {
        param_1[uVar5] = param_1[uVar6 - 1];
        uVar5 = uVar6 - 1;
      }
      if (0 < (int64_t)uVar5) {
        dVar1 = *(double *)(lVar2 + 0x40);
        do {
          uVar10 = (int64_t)(uVar5 - 1) >> 1;
          if (*(double *)(param_1[uVar10] + 0x40) <= dVar1) break;
          param_1[uVar5] = param_1[uVar10];
          uVar5 = uVar10;
        } while (0 < (int64_t)uVar10);
      }
      param_2 = param_2 + -1;
      param_1[uVar5] = lVar2;
      uVar10 = (8 - (int64_t)param_1) + (int64_t)param_2 >> 3;
    } while (1 < (int64_t)uVar10);
  }
  return;
}





// 函数: void FUN_18009dcde(int64_t *param_1,int64_t *param_2,int64_t *param_3)
void FUN_18009dcde(int64_t *param_1,int64_t *param_2,int64_t *param_3)

{
  double dVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  uint64_t uVar10;
  bool bVar11;
  
  uVar10 = (int64_t)param_2 - (int64_t)param_1 >> 3;
  if (1 < (int64_t)uVar10) {
    uVar8 = ((int64_t)(uVar10 - 2) >> 1) + 1;
    uVar5 = uVar8 * 2 + 2;
    do {
      lVar2 = param_1[uVar8 - 1];
      uVar8 = uVar8 - 1;
      uVar5 = uVar5 - 2;
      uVar6 = uVar8;
      uVar3 = uVar5;
      while ((int64_t)uVar3 < (int64_t)uVar10) {
        uVar7 = uVar3 - 1;
        if (*(double *)(param_1[uVar3] + 0x40) < *(double *)(param_1[uVar3 - 1] + 0x40) ||
            *(double *)(param_1[uVar3] + 0x40) == *(double *)(param_1[uVar3 - 1] + 0x40)) {
          uVar7 = uVar3;
        }
        param_1[uVar6] = param_1[uVar7];
        uVar6 = uVar7;
        uVar3 = uVar7 * 2 + 2;
      }
      if (uVar3 == uVar10) {
        param_1[uVar6] = param_1[uVar3 - 1];
        uVar6 = uVar3 - 1;
      }
      if ((int64_t)uVar8 < (int64_t)uVar6) {
        dVar1 = *(double *)(lVar2 + 0x40);
        do {
          uVar3 = (int64_t)(uVar6 - 1) >> 1;
          if (*(double *)(param_1[uVar3] + 0x40) <= dVar1) break;
          param_1[uVar6] = param_1[uVar3];
          uVar6 = uVar3;
        } while ((int64_t)uVar8 < (int64_t)uVar3);
      }
      param_1[uVar6] = lVar2;
    } while (uVar8 != 0);
  }
  uVar8 = 0;
  uVar5 = (uint64_t)((int64_t)param_3 + (7 - (int64_t)param_2)) >> 3;
  if (param_3 < param_2) {
    uVar5 = uVar8;
  }
  uVar6 = uVar8;
  plVar9 = param_2;
  if (uVar5 != 0) {
    do {
      lVar2 = *plVar9;
      if (*(double *)(*param_1 + 0x40) < *(double *)(lVar2 + 0x40)) {
        uVar7 = 2;
        *plVar9 = *param_1;
        bVar11 = uVar10 == 2;
        uVar3 = uVar8;
        uVar4 = uVar8;
        if (2 < (int64_t)uVar10) {
          do {
            uVar3 = uVar7 - 1;
            if (*(double *)(param_1[uVar7] + 0x40) < *(double *)(param_1[uVar7 - 1] + 0x40) ||
                *(double *)(param_1[uVar7] + 0x40) == *(double *)(param_1[uVar7 - 1] + 0x40)) {
              uVar3 = uVar7;
            }
            uVar7 = uVar3 * 2 + 2;
            param_1[uVar4] = param_1[uVar3];
            bVar11 = uVar7 == uVar10;
            uVar4 = uVar3;
          } while ((int64_t)uVar7 < (int64_t)uVar10);
        }
        if (bVar11) {
          param_1[uVar3] = param_1[uVar7 - 1];
          uVar3 = uVar7 - 1;
        }
        if (0 < (int64_t)uVar3) {
          dVar1 = *(double *)(lVar2 + 0x40);
          do {
            uVar7 = (int64_t)(uVar3 - 1) >> 1;
            if (*(double *)(param_1[uVar7] + 0x40) <= dVar1) break;
            param_1[uVar3] = param_1[uVar7];
            uVar3 = uVar7;
          } while (0 < (int64_t)uVar7);
        }
        param_1[uVar3] = lVar2;
      }
      uVar6 = uVar6 + 1;
      plVar9 = plVar9 + 1;
    } while (uVar6 < uVar5);
  }
  if (1 < (int64_t)uVar10) {
    param_2 = param_2 + -1;
    do {
      uVar10 = uVar10 - 1;
      lVar2 = *param_2;
      uVar6 = 2;
      *param_2 = *param_1;
      bVar11 = uVar10 == 2;
      uVar5 = uVar8;
      uVar3 = uVar8;
      if (2 < (int64_t)uVar10) {
        do {
          uVar5 = uVar6 - 1;
          if (*(double *)(param_1[uVar6] + 0x40) < *(double *)(param_1[uVar6 - 1] + 0x40) ||
              *(double *)(param_1[uVar6] + 0x40) == *(double *)(param_1[uVar6 - 1] + 0x40)) {
            uVar5 = uVar6;
          }
          uVar6 = uVar5 * 2 + 2;
          param_1[uVar3] = param_1[uVar5];
          bVar11 = uVar6 == uVar10;
          uVar3 = uVar5;
        } while ((int64_t)uVar6 < (int64_t)uVar10);
      }
      if (bVar11) {
        param_1[uVar5] = param_1[uVar6 - 1];
        uVar5 = uVar6 - 1;
      }
      if (0 < (int64_t)uVar5) {
        dVar1 = *(double *)(lVar2 + 0x40);
        do {
          uVar10 = (int64_t)(uVar5 - 1) >> 1;
          if (*(double *)(param_1[uVar10] + 0x40) <= dVar1) break;
          param_1[uVar5] = param_1[uVar10];
          uVar5 = uVar10;
        } while (0 < (int64_t)uVar10);
      }
      param_2 = param_2 + -1;
      param_1[uVar5] = lVar2;
      uVar10 = (8 - (int64_t)param_1) + (int64_t)param_2 >> 3;
    } while (1 < (int64_t)uVar10);
  }
  return;
}





// 函数: void FUN_18009de00(void)
void FUN_18009de00(void)

{
  double dVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *in_R9;
  int64_t *in_R10;
  int64_t *plVar6;
  int64_t in_R11;
  int64_t lVar7;
  int64_t unaff_R14;
  int64_t unaff_R15;
  bool bVar8;
  
  do {
    lVar2 = *in_R10;
    if (*(double *)(*in_R9 + 0x40) < *(double *)(lVar2 + 0x40)) {
      lVar4 = 2;
      *in_R10 = *in_R9;
      bVar8 = in_R11 == 2;
      lVar5 = unaff_R15;
      lVar3 = unaff_R15;
      if (2 < in_R11) {
        do {
          lVar5 = lVar4 + -1;
          if (*(double *)(in_R9[lVar4] + 0x40) < *(double *)(in_R9[lVar4 + -1] + 0x40) ||
              *(double *)(in_R9[lVar4] + 0x40) == *(double *)(in_R9[lVar4 + -1] + 0x40)) {
            lVar5 = lVar4;
          }
          lVar4 = lVar5 * 2 + 2;
          in_R9[lVar3] = in_R9[lVar5];
          bVar8 = lVar4 == in_R11;
          lVar3 = lVar5;
        } while (lVar4 < in_R11);
      }
      if (bVar8) {
        in_R9[lVar5] = in_R9[lVar4 + -1];
        lVar5 = lVar4 + -1;
      }
      if (0 < lVar5) {
        dVar1 = *(double *)(lVar2 + 0x40);
        do {
          lVar4 = lVar5 + -1 >> 1;
          if (*(double *)(in_R9[lVar4] + 0x40) <= dVar1) break;
          in_R9[lVar5] = in_R9[lVar4];
          lVar5 = lVar4;
        } while (0 < lVar4);
      }
      in_R9[lVar5] = lVar2;
    }
    in_R10 = in_R10 + 1;
    unaff_RDI = unaff_RDI + 1;
  } while (unaff_RDI < unaff_RSI);
  if (1 < in_R11) {
    plVar6 = (int64_t *)(unaff_R14 + -8);
    do {
      lVar7 = in_R11 + -1;
      lVar4 = *plVar6;
      lVar5 = 2;
      *plVar6 = *in_R9;
      bVar8 = lVar7 == 2;
      lVar2 = unaff_R15;
      lVar3 = unaff_R15;
      if (2 < lVar7) {
        do {
          lVar2 = lVar5 + -1;
          if (*(double *)(in_R9[lVar5] + 0x40) < *(double *)(in_R9[lVar5 + -1] + 0x40) ||
              *(double *)(in_R9[lVar5] + 0x40) == *(double *)(in_R9[lVar5 + -1] + 0x40)) {
            lVar2 = lVar5;
          }
          lVar5 = lVar2 * 2 + 2;
          in_R9[lVar3] = in_R9[lVar2];
          bVar8 = lVar5 == lVar7;
          lVar3 = lVar2;
        } while (lVar5 < lVar7);
      }
      if (bVar8) {
        in_R9[lVar2] = in_R9[lVar5 + -1];
        lVar2 = lVar5 + -1;
      }
      if (0 < lVar2) {
        dVar1 = *(double *)(lVar4 + 0x40);
        do {
          lVar5 = lVar2 + -1 >> 1;
          if (*(double *)(in_R9[lVar5] + 0x40) <= dVar1) break;
          in_R9[lVar2] = in_R9[lVar5];
          lVar2 = lVar5;
        } while (0 < lVar5);
      }
      plVar6 = plVar6 + -1;
      in_R9[lVar2] = lVar4;
      in_R11 = (8 - (int64_t)in_R9) + (int64_t)plVar6 >> 3;
    } while (1 < in_R11);
  }
  return;
}





// 函数: void FUN_18009dec3(void)
void FUN_18009dec3(void)

{
  double dVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *in_R9;
  int64_t *plVar6;
  int64_t in_R11;
  int64_t lVar7;
  int64_t unaff_R14;
  int64_t unaff_R15;
  bool bVar8;
  
  plVar6 = (int64_t *)(unaff_R14 + -8);
  do {
    lVar7 = in_R11 + -1;
    lVar2 = *plVar6;
    lVar5 = 2;
    *plVar6 = *in_R9;
    bVar8 = lVar7 == 2;
    lVar3 = unaff_R15;
    lVar4 = unaff_R15;
    if (2 < lVar7) {
      do {
        lVar3 = lVar5 + -1;
        if (*(double *)(in_R9[lVar5] + 0x40) < *(double *)(in_R9[lVar5 + -1] + 0x40) ||
            *(double *)(in_R9[lVar5] + 0x40) == *(double *)(in_R9[lVar5 + -1] + 0x40)) {
          lVar3 = lVar5;
        }
        lVar5 = lVar3 * 2 + 2;
        in_R9[lVar4] = in_R9[lVar3];
        bVar8 = lVar5 == lVar7;
        lVar4 = lVar3;
      } while (lVar5 < lVar7);
    }
    if (bVar8) {
      in_R9[lVar3] = in_R9[lVar5 + -1];
      lVar3 = lVar5 + -1;
    }
    if (0 < lVar3) {
      dVar1 = *(double *)(lVar2 + 0x40);
      do {
        lVar5 = lVar3 + -1 >> 1;
        if (*(double *)(in_R9[lVar5] + 0x40) <= dVar1) break;
        in_R9[lVar3] = in_R9[lVar5];
        lVar3 = lVar5;
      } while (0 < lVar5);
    }
    plVar6 = plVar6 + -1;
    in_R9[lVar3] = lVar2;
    in_R11 = (8 - (int64_t)in_R9) + (int64_t)plVar6 >> 3;
    if (in_R11 < 2) {
      return;
    }
  } while( true );
}





