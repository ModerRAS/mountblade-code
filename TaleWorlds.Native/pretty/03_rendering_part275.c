#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part275.c - 15 个函数

// 函数: void FUN_18041a890(int32_t param_1,uint64_t param_2)
void FUN_18041a890(int32_t param_1,uint64_t param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int64_t lVar5;
  int64_t lVar6;
  int unaff_EBP;
  float *unaff_RSI;
  uint64_t *unaff_RDI;
  float *pfVar7;
  float *unaff_R15;
  int32_t uVar8;
  float fVar9;
  float fVar10;
  int32_t uStackX_24;
  
  if (unaff_R15 != unaff_RSI) {
    lVar5 = ((int64_t)unaff_RSI - (int64_t)unaff_R15) / 6 +
            ((int64_t)unaff_RSI - (int64_t)unaff_R15 >> 0x3f);
    lVar6 = (lVar5 >> 1) - (lVar5 >> 0x3f);
    for (lVar5 = lVar6; lVar5 != 0; lVar5 = lVar5 >> 1) {
      unaff_EBP = unaff_EBP + 1;
    }
    uVar8 = FUN_18041b6a0(param_1,param_2,(int64_t)(unaff_EBP + -1) * 2,0);
    if (lVar6 < 0x1d) {
      FUN_18041b450();
    }
    else {
      pfVar7 = unaff_R15 + 0x54;
      FUN_18041b450(uVar8,pfVar7);
      if (pfVar7 != unaff_RSI) {
        pfVar4 = pfVar7 + -3;
        do {
          fVar9 = *pfVar4;
          fVar10 = (float)*(uint64_t *)pfVar7;
          fVar1 = pfVar7[2];
          uStackX_24 = (int32_t)((uint64_t)*(uint64_t *)pfVar7 >> 0x20);
          pfVar3 = pfVar7;
          if (fVar10 < fVar9) {
            do {
              *pfVar3 = fVar9;
              *(uint64_t *)(pfVar3 + 1) =
                   *(uint64_t *)((int64_t)pfVar3 + ((int64_t)pfVar4 - (int64_t)pfVar7) + 4);
              pfVar3 = pfVar3 + -3;
              fVar9 = *(float *)((int64_t)pfVar3 + ((int64_t)pfVar4 - (int64_t)pfVar7));
            } while (fVar10 < fVar9);
          }
          pfVar7 = pfVar7 + 3;
          pfVar4 = pfVar4 + 3;
          *pfVar3 = fVar10;
          *(uint64_t *)(pfVar3 + 1) = CONCAT44(fVar1,uStackX_24);
        } while (pfVar7 != unaff_RSI);
      }
    }
  }
  pfVar7 = (float *)unaff_RDI[1];
  pfVar4 = (float *)*unaff_RDI;
  if ((pfVar4 != pfVar7) && (pfVar4 + 3 != pfVar7)) {
    pfVar3 = pfVar4 + 3;
    fVar9 = *pfVar4;
    do {
      pfVar2 = pfVar3;
      if (fVar9 == *pfVar2) {
        pfVar3 = pfVar4;
        if (pfVar4 != pfVar7) {
          while (pfVar4 = pfVar4 + 3, pfVar4 != pfVar7) {
            if (*pfVar4 != *pfVar3) {
              pfVar3[3] = *pfVar4;
              *(uint64_t *)(pfVar3 + 4) = *(uint64_t *)(pfVar4 + 1);
              pfVar3 = pfVar3 + 3;
            }
          }
          pfVar7 = pfVar3 + 3;
        }
        break;
      }
      pfVar3 = pfVar2 + 3;
      pfVar4 = pfVar2;
      fVar9 = *pfVar2;
    } while (pfVar2 + 3 != pfVar7);
  }
  pfVar4 = (float *)unaff_RDI[1];
  if (pfVar7 != pfVar4) {
    unaff_RDI[1] = pfVar4 + (((int64_t)pfVar4 - (int64_t)pfVar7) / 0xc) * -3;
  }
  return;
}





// 函数: void FUN_18041a8b7(int32_t param_1,uint64_t param_2)
void FUN_18041a8b7(int32_t param_1,uint64_t param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int64_t lVar5;
  int64_t lVar6;
  int unaff_EBP;
  float *unaff_RSI;
  uint64_t *unaff_RDI;
  float *pfVar7;
  int64_t unaff_R14;
  int64_t unaff_R15;
  int32_t uVar8;
  float fVar9;
  float fVar10;
  int32_t uStackX_24;
  
  lVar5 = SUB168(SEXT816(unaff_R14) * SEXT816((int64_t)unaff_RSI - unaff_R15),8);
  lVar6 = (lVar5 >> 1) - (lVar5 >> 0x3f);
  for (lVar5 = lVar6; lVar5 != 0; lVar5 = lVar5 >> 1) {
    unaff_EBP = unaff_EBP + 1;
  }
  uVar8 = FUN_18041b6a0(param_1,param_2,(int64_t)(unaff_EBP + -1) * 2,0);
  if (lVar6 < 0x1d) {
    FUN_18041b450();
  }
  else {
    pfVar7 = (float *)(unaff_R15 + 0x150);
    FUN_18041b450(uVar8,pfVar7);
    if (pfVar7 != unaff_RSI) {
      pfVar4 = pfVar7 + -3;
      do {
        fVar9 = *pfVar4;
        fVar10 = (float)*(uint64_t *)pfVar7;
        fVar1 = pfVar7[2];
        uStackX_24 = (int32_t)((uint64_t)*(uint64_t *)pfVar7 >> 0x20);
        pfVar3 = pfVar7;
        if (fVar10 < fVar9) {
          do {
            *pfVar3 = fVar9;
            *(uint64_t *)(pfVar3 + 1) =
                 *(uint64_t *)((int64_t)pfVar3 + ((int64_t)pfVar4 - (int64_t)pfVar7) + 4);
            pfVar3 = pfVar3 + -3;
            fVar9 = *(float *)((int64_t)pfVar3 + ((int64_t)pfVar4 - (int64_t)pfVar7));
          } while (fVar10 < fVar9);
        }
        pfVar7 = pfVar7 + 3;
        pfVar4 = pfVar4 + 3;
        *pfVar3 = fVar10;
        *(uint64_t *)(pfVar3 + 1) = CONCAT44(fVar1,uStackX_24);
      } while (pfVar7 != unaff_RSI);
    }
  }
  pfVar7 = (float *)unaff_RDI[1];
  pfVar4 = (float *)*unaff_RDI;
  if ((pfVar4 != pfVar7) && (pfVar4 + 3 != pfVar7)) {
    pfVar3 = pfVar4 + 3;
    fVar9 = *pfVar4;
    do {
      pfVar2 = pfVar3;
      if (fVar9 == *pfVar2) {
        pfVar3 = pfVar4;
        if (pfVar4 != pfVar7) {
          while (pfVar4 = pfVar4 + 3, pfVar4 != pfVar7) {
            if (*pfVar4 != *pfVar3) {
              pfVar3[3] = *pfVar4;
              *(uint64_t *)(pfVar3 + 4) = *(uint64_t *)(pfVar4 + 1);
              pfVar3 = pfVar3 + 3;
            }
          }
          pfVar7 = pfVar3 + 3;
        }
        break;
      }
      pfVar3 = pfVar2 + 3;
      pfVar4 = pfVar2;
      fVar9 = *pfVar2;
    } while (pfVar2 + 3 != pfVar7);
  }
  pfVar4 = (float *)unaff_RDI[1];
  if (pfVar7 != pfVar4) {
    lVar5 = SUB168(SEXT816(unaff_R14) * SEXT816((int64_t)pfVar4 - (int64_t)pfVar7),8);
    unaff_RDI[1] = pfVar4 + ((lVar5 >> 1) - (lVar5 >> 0x3f)) * -3;
  }
  return;
}





// 函数: void FUN_18041a9bb(float *param_1,uint64_t param_2,float *param_3)
void FUN_18041a9bb(float *param_1,uint64_t param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  int64_t lVar3;
  int64_t unaff_RDI;
  int64_t unaff_R14;
  float fVar4;
  
  if (param_1 + 3 != param_3) {
    pfVar1 = param_1 + 3;
    fVar4 = *param_1;
    do {
      pfVar2 = pfVar1;
      if (fVar4 == *pfVar2) {
        pfVar1 = param_1;
        if (param_1 != param_3) {
          while (param_1 = param_1 + 3, param_1 != param_3) {
            if (*param_1 != *pfVar1) {
              pfVar1[3] = *param_1;
              *(uint64_t *)(pfVar1 + 4) = *(uint64_t *)(param_1 + 1);
              pfVar1 = pfVar1 + 3;
            }
          }
          param_3 = pfVar1 + 3;
        }
        break;
      }
      pfVar1 = pfVar2 + 3;
      param_1 = pfVar2;
      fVar4 = *pfVar2;
    } while (pfVar2 + 3 != param_3);
  }
  pfVar1 = *(float **)(unaff_RDI + 8);
  if (param_3 != pfVar1) {
    lVar3 = SUB168(SEXT816(unaff_R14) * SEXT816((int64_t)pfVar1 - (int64_t)param_3),8);
    *(float **)(unaff_RDI + 8) = pfVar1 + ((lVar3 >> 1) - (lVar3 >> 0x3f)) * -3;
  }
  return;
}





// 函数: void FUN_18041aa70(uint64_t *param_1)
void FUN_18041aa70(uint64_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  
  *param_1 = &processed_var_9512_ptr;
  FUN_180418260(param_1 + 5);
  plVar1 = param_1 + 9;
  lVar3 = *plVar1;
  *plVar1 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(int32_t *)(param_1 + 0xc) = 5;
  if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plVar2 = param_1 + 1;
  MemoryBufferManager(plVar2);
  if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (param_1[5] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *param_1 = &processed_var_7440_ptr;
  MemoryBufferManager(plVar2);
  if (*plVar2 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}



uint64_t FUN_18041ab70(uint64_t param_1,uint64_t param_2)

{
  FUN_18041aa70();
  if ((param_2 & 1) != 0) {
    free(param_1,0x68);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_18041abb0(int64_t *param_1,uint64_t *param_2,uint64_t *param_3)

{
  uint64_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int32_t *puVar10;
  uint64_t *puVar11;
  int32_t *puVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  int32_t *puVar16;
  
  lVar15 = (int64_t)param_2 - *param_1 >> 5;
  puVar1 = (uint64_t *)param_1[1];
  if (puVar1 != (uint64_t *)param_1[2]) {
    if (param_2 == puVar1) {
      uVar5 = param_3[1];
      *puVar1 = *param_3;
      puVar1[1] = uVar5;
      uVar5 = param_3[3];
      puVar1[2] = param_3[2];
      puVar1[3] = uVar5;
      param_1[1] = param_1[1] + 0x20;
    }
    else {
      uVar5 = *param_3;
      uVar6 = param_3[1];
      uVar7 = param_3[2];
      uVar8 = param_3[3];
      *puVar1 = puVar1[-4];
      puVar1[1] = puVar1[-3];
      puVar1[2] = puVar1[-2];
      puVar1[3] = puVar1[-1];
      puVar1 = (uint64_t *)param_1[1] + -4;
      lVar14 = (int64_t)puVar1 - (int64_t)param_2 >> 5;
      puVar11 = (uint64_t *)param_1[1];
      for (; 0 < lVar14; lVar14 = lVar14 + -1) {
        uVar9 = puVar1[-3];
        puVar11[-4] = puVar1[-4];
        puVar11[-3] = uVar9;
        uVar9 = puVar1[-1];
        puVar11[-2] = puVar1[-2];
        puVar11[-1] = uVar9;
        puVar11 = puVar11 + -4;
        puVar1 = puVar1 + -4;
      }
      *param_2 = uVar5;
      param_2[1] = uVar6;
      param_2[2] = uVar7;
      param_2[3] = uVar8;
      param_1[1] = param_1[1] + 0x20;
    }
    goto FUN_18041ad57;
  }
  lVar14 = (int64_t)puVar1 - *param_1 >> 5;
  if (lVar14 == 0) {
    lVar14 = 1;
LAB_18041ac8a:
    puVar12 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar14 << 5,(char)param_1[3]);
  }
  else {
    lVar14 = lVar14 * 2;
    if (lVar14 != 0) goto LAB_18041ac8a;
    puVar12 = (int32_t *)0x0;
  }
  uVar2 = *(int32_t *)((int64_t)param_3 + 4);
  uVar3 = *(int32_t *)(param_3 + 1);
  uVar4 = *(int32_t *)((int64_t)param_3 + 0xc);
  puVar10 = puVar12 + lVar15 * 8;
  *puVar10 = *(int32_t *)param_3;
  puVar10[1] = uVar2;
  puVar10[2] = uVar3;
  puVar10[3] = uVar4;
  uVar2 = *(int32_t *)((int64_t)param_3 + 0x14);
  uVar3 = *(int32_t *)(param_3 + 3);
  uVar4 = *(int32_t *)((int64_t)param_3 + 0x1c);
  puVar10 = puVar12 + lVar15 * 8 + 4;
  *puVar10 = *(int32_t *)(param_3 + 2);
  puVar10[1] = uVar2;
  puVar10[2] = uVar3;
  puVar10[3] = uVar4;
  puVar10 = (int32_t *)*param_1;
  puVar16 = puVar12;
  for (lVar13 = (int64_t)param_2 - *param_1 >> 5; 0 < lVar13; lVar13 = lVar13 + -1) {
    uVar2 = puVar10[1];
    uVar3 = puVar10[2];
    uVar4 = puVar10[3];
    *puVar16 = *puVar10;
    puVar16[1] = uVar2;
    puVar16[2] = uVar3;
    puVar16[3] = uVar4;
    uVar2 = puVar10[5];
    uVar3 = puVar10[6];
    uVar4 = puVar10[7];
    puVar16[4] = puVar10[4];
    puVar16[5] = uVar2;
    puVar16[6] = uVar3;
    puVar16[7] = uVar4;
    puVar16 = puVar16 + 8;
    puVar10 = puVar10 + 8;
  }
  lVar13 = param_1[1] - (int64_t)param_2 >> 5;
  for (; puVar16 = puVar16 + 8, 0 < lVar13; lVar13 = lVar13 + -1) {
    uVar2 = *(int32_t *)((int64_t)param_2 + 4);
    uVar3 = *(int32_t *)(param_2 + 1);
    uVar4 = *(int32_t *)((int64_t)param_2 + 0xc);
    *puVar16 = *(int32_t *)param_2;
    puVar16[1] = uVar2;
    puVar16[2] = uVar3;
    puVar16[3] = uVar4;
    uVar2 = *(int32_t *)((int64_t)param_2 + 0x14);
    uVar3 = *(int32_t *)(param_2 + 3);
    uVar4 = *(int32_t *)((int64_t)param_2 + 0x1c);
    puVar16[4] = *(int32_t *)(param_2 + 2);
    puVar16[5] = uVar2;
    puVar16[6] = uVar3;
    puVar16[7] = uVar4;
    param_2 = param_2 + 4;
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *param_1 = (int64_t)puVar12;
  param_1[2] = (int64_t)(puVar12 + lVar14 * 8);
  param_1[1] = (int64_t)puVar16;
FUN_18041ad57:
  return lVar15 * 0x20 + *param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_18041ac63(void)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t *puVar4;
  int64_t in_RAX;
  int32_t *puVar5;
  int64_t lVar6;
  int32_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  int32_t *unaff_RDI;
  int32_t *puVar7;
  int64_t lVar8;
  
  if (in_RAX >> 5 == 0) {
    lVar8 = 1;
  }
  else {
    lVar8 = (in_RAX >> 5) * 2;
    if (lVar8 == 0) {
      puVar5 = (int32_t *)0x0;
      goto LAB_18041aca5;
    }
  }
  puVar5 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar8 << 5,(char)unaff_RSI[3]);
LAB_18041aca5:
  uVar1 = unaff_RDI[1];
  uVar2 = unaff_RDI[2];
  uVar3 = unaff_RDI[3];
  puVar4 = puVar5 + unaff_RBP * 8;
  *puVar4 = *unaff_RDI;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  uVar1 = unaff_RDI[5];
  uVar2 = unaff_RDI[6];
  uVar3 = unaff_RDI[7];
  puVar4 = puVar5 + unaff_RBP * 8 + 4;
  *puVar4 = unaff_RDI[4];
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  puVar4 = (int32_t *)*unaff_RSI;
  puVar7 = puVar5;
  for (lVar6 = (int64_t)unaff_RBX - *unaff_RSI >> 5; 0 < lVar6; lVar6 = lVar6 + -1) {
    uVar1 = puVar4[1];
    uVar2 = puVar4[2];
    uVar3 = puVar4[3];
    *puVar7 = *puVar4;
    puVar7[1] = uVar1;
    puVar7[2] = uVar2;
    puVar7[3] = uVar3;
    uVar1 = puVar4[5];
    uVar2 = puVar4[6];
    uVar3 = puVar4[7];
    puVar7[4] = puVar4[4];
    puVar7[5] = uVar1;
    puVar7[6] = uVar2;
    puVar7[7] = uVar3;
    puVar7 = puVar7 + 8;
    puVar4 = puVar4 + 8;
  }
  lVar6 = unaff_RSI[1] - (int64_t)unaff_RBX >> 5;
  for (; puVar7 = puVar7 + 8, 0 < lVar6; lVar6 = lVar6 + -1) {
    uVar1 = unaff_RBX[1];
    uVar2 = unaff_RBX[2];
    uVar3 = unaff_RBX[3];
    *puVar7 = *unaff_RBX;
    puVar7[1] = uVar1;
    puVar7[2] = uVar2;
    puVar7[3] = uVar3;
    uVar1 = unaff_RBX[5];
    uVar2 = unaff_RBX[6];
    uVar3 = unaff_RBX[7];
    puVar7[4] = unaff_RBX[4];
    puVar7[5] = uVar1;
    puVar7[6] = uVar2;
    puVar7[7] = uVar3;
    unaff_RBX = unaff_RBX + 8;
  }
  if (*unaff_RSI == 0) {
    *unaff_RSI = (int64_t)puVar5;
    unaff_RSI[2] = (int64_t)(puVar5 + lVar8 * 8);
    unaff_RSI[1] = (int64_t)puVar7;
    return unaff_RBP * 0x20 + *unaff_RSI;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



int64_t FUN_18041ad57(void)

{
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  
  return unaff_RBP * 0x20 + *unaff_RSI;
}



int64_t * FUN_18041adc0(int64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  uint uVar6;
  int iVar7;
  int64_t *plVar8;
  int64_t lVar9;
  char cStackX_8;
  uint8_t uStackX_9;
  
  plVar5 = param_1;
  if ((int64_t *)param_1[2] != (int64_t *)0x0) {
    plVar4 = (int64_t *)param_1[2];
    do {
      if (*(int *)(param_2 + 0x10) == 0) {
        plVar8 = (int64_t *)plVar4[1];
        bVar2 = false;
      }
      else {
        if ((int)plVar4[6] == 0) {
          bVar2 = true;
        }
        else {
          pbVar3 = *(byte **)(param_2 + 8);
          param_4 = plVar4[5] - (int64_t)pbVar3;
          do {
            uVar6 = (uint)pbVar3[param_4];
            iVar7 = *pbVar3 - uVar6;
            if (*pbVar3 != uVar6) break;
            pbVar3 = pbVar3 + 1;
          } while (uVar6 != 0);
          bVar2 = 0 < iVar7;
          if (iVar7 < 1) {
            plVar8 = (int64_t *)plVar4[1];
            goto LAB_18041ae37;
          }
        }
        plVar8 = (int64_t *)*plVar4;
      }
LAB_18041ae37:
      if (bVar2) {
        plVar4 = plVar5;
      }
      plVar5 = plVar4;
      plVar4 = plVar8;
    } while (plVar8 != (int64_t *)0x0);
  }
  if (plVar5 != param_1) {
    if ((int)plVar5[6] == 0) {
LAB_18041ae78:
      return plVar5 + 8;
    }
    if (*(int *)(param_2 + 0x10) != 0) {
      pbVar3 = (byte *)plVar5[5];
      lVar9 = *(int64_t *)(param_2 + 8) - (int64_t)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar6 = (uint)pbVar3[lVar9];
        if (bVar1 != uVar6) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_18041ae78;
    }
  }
  plVar4 = (int64_t *)*param_1;
  if ((plVar5 == plVar4) || (plVar5 == param_1)) {
    if ((param_1[4] == 0) || (*(int *)(param_2 + 0x10) == 0)) goto LAB_18041af5f;
    plVar5 = plVar4;
    if ((int)plVar4[6] != 0) {
      pbVar3 = *(byte **)(param_2 + 8);
      param_4 = plVar4[5] - (int64_t)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar6 = (uint)pbVar3[param_4];
        if (bVar1 != uVar6) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_18041af5f;
    }
LAB_18041af57:
    param_4 = param_4 & 0xffffffffffffff00;
LAB_18041af5a:
    if (plVar5 == (int64_t *)0x0) goto LAB_18041af5f;
  }
  else {
    plVar4 = (int64_t *)func_0x00018066bd70(plVar5);
    if (*(int *)(param_2 + 0x10) != 0) {
      if ((int)plVar5[6] != 0) {
        pbVar3 = *(byte **)(param_2 + 8);
        lVar9 = plVar5[5] - (int64_t)pbVar3;
        do {
          bVar1 = *pbVar3;
          uVar6 = (uint)pbVar3[lVar9];
          if (bVar1 != uVar6) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_18041af5f;
      }
      if ((int)plVar4[6] != 0) {
        pbVar3 = (byte *)plVar4[5];
        param_4 = *(int64_t *)(param_2 + 8) - (int64_t)pbVar3;
        do {
          bVar1 = *pbVar3;
          uVar6 = (uint)pbVar3[param_4];
          if (bVar1 != uVar6) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar6 != 0);
        if (0 < (int)(bVar1 - uVar6)) {
          if (*plVar5 == 0) goto LAB_18041af57;
          param_4 = CONCAT71((int7)(param_4 >> 8),1);
          plVar5 = plVar4;
          goto LAB_18041af5a;
        }
      }
    }
LAB_18041af5f:
    plVar5 = (int64_t *)SystemCore_SecurityValidator(param_1,&cStackX_8,param_2);
    if (cStackX_8 == '\0') goto LAB_18041af93;
    param_4 = 0;
  }
  FUN_18041b280(param_1,&cStackX_8,plVar5,param_4,param_2);
  plVar5 = (int64_t *)CONCAT71(uStackX_9,cStackX_8);
LAB_18041af93:
  return plVar5 + 8;
}





// 函数: void FUN_18041afb0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18041afb0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_18041b140(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18041afd0(uint64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  uint64_t uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  FUN_18026ead0();
  *param_1 = &processed_var_9464_ptr;
  *param_1 = &processed_var_9512_ptr;
  lVar7 = *(int64_t *)(param_2 + 0x30) - *(int64_t *)(param_2 + 0x28) >> 3;
  uVar1 = *(uint *)(param_2 + 0x40);
  *(uint *)(param_1 + 8) = uVar1;
  lVar4 = 0;
  lVar3 = lVar4;
  if (lVar7 != 0) {
    lVar3 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar7 * 8,uVar1 & 0xff,param_4,uVar8);
  }
  param_1[5] = lVar3;
  param_1[6] = lVar3;
  param_1[7] = lVar3 + lVar7 * 8;
  puVar6 = (uint64_t *)param_1[5];
  puVar2 = *(uint64_t **)(param_2 + 0x30);
  for (puVar5 = *(uint64_t **)(param_2 + 0x28); puVar5 != puVar2; puVar5 = puVar5 + 1) {
    *puVar6 = *puVar5;
    puVar6 = puVar6 + 1;
  }
  param_1[6] = puVar6;
  lVar3 = *(int64_t *)(param_2 + 0x50) - *(int64_t *)(param_2 + 0x48);
  lVar3 = lVar3 / 6 + (lVar3 >> 0x3f);
  lVar3 = (lVar3 >> 1) - (lVar3 >> 0x3f);
  uVar1 = *(uint *)(param_2 + 0x60);
  *(uint *)(param_1 + 0xc) = uVar1;
  if (lVar3 != 0) {
    lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar3 * 0xc,uVar1 & 0xff,param_4,uVar8);
  }
  param_1[9] = lVar4;
  param_1[10] = lVar4;
  param_1[0xb] = lVar4 + lVar3 * 0xc;
  puVar6 = (uint64_t *)param_1[9];
  puVar2 = *(uint64_t **)(param_2 + 0x50);
  for (puVar5 = *(uint64_t **)(param_2 + 0x48); puVar5 != puVar2;
      puVar5 = (uint64_t *)((int64_t)puVar5 + 0xc)) {
    *puVar6 = *puVar5;
    *(int32_t *)(puVar6 + 1) = *(int32_t *)(puVar5 + 1);
    puVar6 = (uint64_t *)((int64_t)puVar6 + 0xc);
  }
  param_1[10] = puVar6;
  return param_1;
}





// 函数: void FUN_18041b140(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_18041b140(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 == (uint64_t *)0x0) {
    return;
  }
  FUN_18041b140(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
  FUN_18041aa70(param_2 + 8);
  param_2[4] = &system_data_buffer_ptr;
  if (param_2[5] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_2[5] = 0;
  *(int32_t *)(param_2 + 7) = 0;
  param_2[4] = &system_state_ptr;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(param_2);
}





// 函数: void FUN_18041b200(uint64_t param_1,int64_t param_2)
void FUN_18041b200(uint64_t param_1,int64_t param_2)

{
  FUN_18041aa70(param_2 + 0x40);
  *(uint64_t *)(param_2 + 0x20) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_2 + 0x28) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_2 + 0x28) = 0;
  *(int32_t *)(param_2 + 0x38) = 0;
  *(uint64_t *)(param_2 + 0x20) = &system_state_ptr;
  if (param_2 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18041b280(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
void FUN_18041b280(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
                  int64_t param_5)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  uVar6 = 0;
  if (((char)param_4 != '\0') || (param_3 == param_1)) goto LAB_18041b302;
  if (*(int *)(param_3 + 0x30) != 0) {
    if (*(int *)(param_5 + 0x10) == 0) goto LAB_18041b302;
    pbVar2 = *(byte **)(param_3 + 0x28);
    lVar5 = *(int64_t *)(param_5 + 8) - (int64_t)pbVar2;
    do {
      bVar1 = *pbVar2;
      uVar3 = (uint)pbVar2[lVar5];
      if (bVar1 != uVar3) break;
      pbVar2 = pbVar2 + 1;
    } while (uVar3 != 0);
    if (0 < (int)(bVar1 - uVar3)) goto LAB_18041b302;
  }
  uVar6 = 1;
LAB_18041b302:
  lVar5 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0xa8,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  CoreEngineDataTransformer(lVar5 + 0x20,param_5);
  puVar4 = (uint64_t *)(lVar5 + 0x40);
  *puVar4 = &processed_var_7440_ptr;
  *(uint64_t *)(lVar5 + 0x48) = 0;
  *(uint64_t *)(lVar5 + 0x50) = 0;
  *(uint64_t *)(lVar5 + 0x58) = 0;
  *(int32_t *)(lVar5 + 0x60) = 3;
  *puVar4 = &processed_var_9464_ptr;
  *puVar4 = &processed_var_9512_ptr;
  *(uint64_t *)(lVar5 + 0x68) = 0;
  *(uint64_t *)(lVar5 + 0x70) = 0;
  *(uint64_t *)(lVar5 + 0x78) = 0;
  *(int32_t *)(lVar5 + 0x80) = 5;
  *(uint64_t *)(lVar5 + 0x88) = 0;
  *(uint64_t *)(lVar5 + 0x90) = 0;
  *(uint64_t *)(lVar5 + 0x98) = 0;
  *(int32_t *)(lVar5 + 0xa0) = 5;
                    // WARNING: Subroutine does not return
  SystemNetworkHandler(lVar5,param_3,param_1,uVar6,uVar7,(uint64_t *)(lVar5 + 0x88));
}





// 函数: void FUN_18041b450(float *param_1,float *param_2)
void FUN_18041b450(float *param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  int32_t uStack_14;
  
  if (param_1 != param_2) {
    for (pfVar4 = param_1 + 3; pfVar4 != param_2; pfVar4 = pfVar4 + 3) {
      fVar1 = pfVar4[2];
      uStack_14 = (int32_t)((uint64_t)*(uint64_t *)pfVar4 >> 0x20);
      fVar5 = (float)*(uint64_t *)pfVar4;
      pfVar2 = pfVar4;
      pfVar3 = pfVar4;
      while (pfVar2 != param_1) {
        if (pfVar2[-3] <= fVar5) break;
        *pfVar3 = pfVar2[-3];
        *(uint64_t *)(pfVar3 + 1) = *(uint64_t *)(pfVar2 + -2);
        pfVar3 = pfVar3 + -3;
        pfVar2 = pfVar2 + -3;
      }
      *pfVar3 = fVar5;
      *(uint64_t *)(pfVar3 + 1) = CONCAT44(fVar1,uStack_14);
    }
  }
  return;
}





// 函数: void FUN_18041b4d0(int param_1,int param_2,uint64_t *param_3)
void FUN_18041b4d0(int param_1,int param_2,uint64_t *param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  
  for (lVar2 = (int64_t)param_1; lVar2 < param_2; lVar2 = lVar2 + 1) {
    plVar1 = *(int64_t **)(*(int64_t *)*param_3 + lVar2 * 8);
    (**(code **)(*plVar1 + 0x20))(plVar1,*(int32_t *)param_3[1]);
  }
  return;
}





// 函数: void FUN_18041b560(float *param_1,float *param_2,int64_t param_3,int8_t param_4)
void FUN_18041b560(float *param_1,float *param_2,int64_t param_3,int8_t param_4)

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
    pfVar9 = param_1 + (lVar7 >> 1) * 2;
    pfVar8 = param_1;
    fVar4 = fVar10;
    if (fVar10 < fVar3) {
      fVar5 = fVar10;
      pfVar9 = param_1;
      pfVar8 = param_1 + (lVar7 >> 1) * 2;
      fVar4 = fVar3;
    }
    if ((fVar2 <= fVar4) && (pfVar8 = pfVar9, fVar5 < fVar2)) {
      pfVar8 = param_2 + -2;
    }
    fVar2 = *pfVar8;
    pfVar9 = param_2;
    pfVar8 = param_1;
    while( true ) {
      while (fVar10 < fVar2) {
        pfVar1 = pfVar8 + 2;
        pfVar8 = pfVar8 + 2;
        fVar10 = *pfVar1;
      }
      pfVar9 = pfVar9 + -2;
      fVar10 = *pfVar9;
      while (fVar2 < fVar10) {
        pfVar9 = pfVar9 + -2;
        fVar10 = *pfVar9;
      }
      if (pfVar9 <= pfVar8) break;
      fVar10 = pfVar8[1];
      fVar3 = *pfVar8;
      *pfVar8 = *pfVar9;
      pfVar8[1] = pfVar9[1];
      pfVar8 = pfVar8 + 2;
      *pfVar9 = fVar3;
      pfVar9[1] = fVar10;
      fVar10 = *pfVar8;
    }
    param_3 = param_3 + -1;
    FUN_18041b560(pfVar8,param_2,param_3,param_4);
    uVar6 = (int64_t)pfVar8 - (int64_t)param_1;
    param_2 = pfVar8;
  }
  if (param_3 == 0) {
    FUN_18041b820(param_1,param_2,param_2,param_4);
  }
  return;
}





// 函数: void FUN_18041b56d(float *param_1,float *param_2,int64_t param_3,int8_t param_4)
void FUN_18041b56d(float *param_1,float *param_2,int64_t param_3,int8_t param_4)

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
    pfVar9 = param_1 + (lVar7 >> 1) * 2;
    pfVar8 = param_1;
    fVar4 = fVar10;
    if (fVar10 < fVar3) {
      fVar5 = fVar10;
      pfVar9 = param_1;
      pfVar8 = param_1 + (lVar7 >> 1) * 2;
      fVar4 = fVar3;
    }
    if ((fVar2 <= fVar4) && (pfVar8 = pfVar9, fVar5 < fVar2)) {
      pfVar8 = param_2 + -2;
    }
    fVar2 = *pfVar8;
    pfVar9 = param_2;
    pfVar8 = param_1;
    while( true ) {
      while (fVar10 < fVar2) {
        pfVar1 = pfVar8 + 2;
        pfVar8 = pfVar8 + 2;
        fVar10 = *pfVar1;
      }
      pfVar9 = pfVar9 + -2;
      fVar10 = *pfVar9;
      while (fVar2 < fVar10) {
        pfVar9 = pfVar9 + -2;
        fVar10 = *pfVar9;
      }
      if (pfVar9 <= pfVar8) break;
      fVar10 = pfVar8[1];
      fVar3 = *pfVar8;
      *pfVar8 = *pfVar9;
      pfVar8[1] = pfVar9[1];
      pfVar8 = pfVar8 + 2;
      *pfVar9 = fVar3;
      pfVar9[1] = fVar10;
      fVar10 = *pfVar8;
    }
    param_3 = param_3 + -1;
    FUN_18041b560(pfVar8,param_2,param_3,param_4);
    uVar6 = (int64_t)pfVar8 - (int64_t)param_1;
    param_2 = pfVar8;
  }
  if (param_3 == 0) {
    FUN_18041b820(param_1,param_2,param_2,param_4);
  }
  return;
}





// 函数: void FUN_18041b592(int32_t param_1)
void FUN_18041b592(int32_t param_1)

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
      fVar9 = pfVar8[1];
      fVar3 = *pfVar8;
      *pfVar8 = *pfVar7;
      pfVar8[1] = pfVar7[1];
      pfVar8 = pfVar8 + 2;
      *pfVar7 = fVar3;
      pfVar7[1] = fVar9;
      fVar9 = *pfVar8;
    }
    unaff_RBP = unaff_RBP + -1;
    param_1 = FUN_18041b560(pfVar8,in_R10,unaff_RBP,unaff_BL);
    in_R10 = pfVar8;
  } while (0xe0 < (int64_t)((int64_t)pfVar8 - (int64_t)unaff_RSI & 0xfffffffffffffff8U));
  if (unaff_RBP == 0) {
    FUN_18041b820(param_1,pfVar8,pfVar8,unaff_BL);
  }
  return;
}





// 函数: void FUN_18041b675(void)
void FUN_18041b675(void)

{
  int64_t unaff_RBP;
  
  if (unaff_RBP == 0) {
    FUN_18041b820();
  }
  return;
}





// 函数: void FUN_18041b67f(void)
void FUN_18041b67f(void)

{
  FUN_18041b820();
  return;
}





