#include "TaleWorlds.Native.Split.h"

// 03_rendering_part275.c - 15 个函数

// 函数: void FUN_18041a890(int32_t param_1,uint64_t param_2)
void FUN_18041a890(int32_t param_1,uint64_t param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
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
    lVar5 = ((longlong)unaff_RSI - (longlong)unaff_R15) / 6 +
            ((longlong)unaff_RSI - (longlong)unaff_R15 >> 0x3f);
    lVar6 = (lVar5 >> 1) - (lVar5 >> 0x3f);
    for (lVar5 = lVar6; lVar5 != 0; lVar5 = lVar5 >> 1) {
      unaff_EBP = unaff_EBP + 1;
    }
    uVar8 = FUN_18041b6a0(param_1,param_2,(longlong)(unaff_EBP + -1) * 2,0);
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
          uStackX_24 = (int32_t)((ulonglong)*(uint64_t *)pfVar7 >> 0x20);
          pfVar3 = pfVar7;
          if (fVar10 < fVar9) {
            do {
              *pfVar3 = fVar9;
              *(uint64_t *)(pfVar3 + 1) =
                   *(uint64_t *)((longlong)pfVar3 + ((longlong)pfVar4 - (longlong)pfVar7) + 4);
              pfVar3 = pfVar3 + -3;
              fVar9 = *(float *)((longlong)pfVar3 + ((longlong)pfVar4 - (longlong)pfVar7));
            } while (fVar10 < fVar9);
          }
          pfVar7 = pfVar7 + 3;
          pfVar4 = pfVar4 + 3;
          *pfVar3 = fVar10;
          *(ulonglong *)(pfVar3 + 1) = CONCAT44(fVar1,uStackX_24);
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
    unaff_RDI[1] = pfVar4 + (((longlong)pfVar4 - (longlong)pfVar7) / 0xc) * -3;
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
  longlong lVar5;
  longlong lVar6;
  int unaff_EBP;
  float *unaff_RSI;
  uint64_t *unaff_RDI;
  float *pfVar7;
  longlong unaff_R14;
  longlong unaff_R15;
  int32_t uVar8;
  float fVar9;
  float fVar10;
  int32_t uStackX_24;
  
  lVar5 = SUB168(SEXT816(unaff_R14) * SEXT816((longlong)unaff_RSI - unaff_R15),8);
  lVar6 = (lVar5 >> 1) - (lVar5 >> 0x3f);
  for (lVar5 = lVar6; lVar5 != 0; lVar5 = lVar5 >> 1) {
    unaff_EBP = unaff_EBP + 1;
  }
  uVar8 = FUN_18041b6a0(param_1,param_2,(longlong)(unaff_EBP + -1) * 2,0);
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
        uStackX_24 = (int32_t)((ulonglong)*(uint64_t *)pfVar7 >> 0x20);
        pfVar3 = pfVar7;
        if (fVar10 < fVar9) {
          do {
            *pfVar3 = fVar9;
            *(uint64_t *)(pfVar3 + 1) =
                 *(uint64_t *)((longlong)pfVar3 + ((longlong)pfVar4 - (longlong)pfVar7) + 4);
            pfVar3 = pfVar3 + -3;
            fVar9 = *(float *)((longlong)pfVar3 + ((longlong)pfVar4 - (longlong)pfVar7));
          } while (fVar10 < fVar9);
        }
        pfVar7 = pfVar7 + 3;
        pfVar4 = pfVar4 + 3;
        *pfVar3 = fVar10;
        *(ulonglong *)(pfVar3 + 1) = CONCAT44(fVar1,uStackX_24);
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
    lVar5 = SUB168(SEXT816(unaff_R14) * SEXT816((longlong)pfVar4 - (longlong)pfVar7),8);
    unaff_RDI[1] = pfVar4 + ((lVar5 >> 1) - (lVar5 >> 0x3f)) * -3;
  }
  return;
}





// 函数: void FUN_18041a9bb(float *param_1,uint64_t param_2,float *param_3)
void FUN_18041a9bb(float *param_1,uint64_t param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  longlong unaff_RDI;
  longlong unaff_R14;
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
    lVar3 = SUB168(SEXT816(unaff_R14) * SEXT816((longlong)pfVar1 - (longlong)param_3),8);
    *(float **)(unaff_RDI + 8) = pfVar1 + ((lVar3 >> 1) - (lVar3 >> 0x3f)) * -3;
  }
  return;
}





// 函数: void FUN_18041aa70(uint64_t *param_1)
void FUN_18041aa70(uint64_t *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = &UNK_180a27bf8;
  FUN_180418260(param_1 + 5);
  plVar1 = param_1 + 9;
  lVar3 = *plVar1;
  *plVar1 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(int32_t *)(param_1 + 0xc) = 5;
  if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  plVar2 = param_1 + 1;
  FUN_1802708b0(plVar2);
  if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = &UNK_180a16270;
  FUN_1802708b0(plVar2);
  if (*plVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



uint64_t FUN_18041ab70(uint64_t param_1,ulonglong param_2)

{
  FUN_18041aa70();
  if ((param_2 & 1) != 0) {
    free(param_1,0x68);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18041abb0(longlong *param_1,uint64_t *param_2,uint64_t *param_3)

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
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int32_t *puVar16;
  
  lVar15 = (longlong)param_2 - *param_1 >> 5;
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
      lVar14 = (longlong)puVar1 - (longlong)param_2 >> 5;
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
  lVar14 = (longlong)puVar1 - *param_1 >> 5;
  if (lVar14 == 0) {
    lVar14 = 1;
LAB_18041ac8a:
    puVar12 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,lVar14 << 5,(char)param_1[3]);
  }
  else {
    lVar14 = lVar14 * 2;
    if (lVar14 != 0) goto LAB_18041ac8a;
    puVar12 = (int32_t *)0x0;
  }
  uVar2 = *(int32_t *)((longlong)param_3 + 4);
  uVar3 = *(int32_t *)(param_3 + 1);
  uVar4 = *(int32_t *)((longlong)param_3 + 0xc);
  puVar10 = puVar12 + lVar15 * 8;
  *puVar10 = *(int32_t *)param_3;
  puVar10[1] = uVar2;
  puVar10[2] = uVar3;
  puVar10[3] = uVar4;
  uVar2 = *(int32_t *)((longlong)param_3 + 0x14);
  uVar3 = *(int32_t *)(param_3 + 3);
  uVar4 = *(int32_t *)((longlong)param_3 + 0x1c);
  puVar10 = puVar12 + lVar15 * 8 + 4;
  *puVar10 = *(int32_t *)(param_3 + 2);
  puVar10[1] = uVar2;
  puVar10[2] = uVar3;
  puVar10[3] = uVar4;
  puVar10 = (int32_t *)*param_1;
  puVar16 = puVar12;
  for (lVar13 = (longlong)param_2 - *param_1 >> 5; 0 < lVar13; lVar13 = lVar13 + -1) {
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
  lVar13 = param_1[1] - (longlong)param_2 >> 5;
  for (; puVar16 = puVar16 + 8, 0 < lVar13; lVar13 = lVar13 + -1) {
    uVar2 = *(int32_t *)((longlong)param_2 + 4);
    uVar3 = *(int32_t *)(param_2 + 1);
    uVar4 = *(int32_t *)((longlong)param_2 + 0xc);
    *puVar16 = *(int32_t *)param_2;
    puVar16[1] = uVar2;
    puVar16[2] = uVar3;
    puVar16[3] = uVar4;
    uVar2 = *(int32_t *)((longlong)param_2 + 0x14);
    uVar3 = *(int32_t *)(param_2 + 3);
    uVar4 = *(int32_t *)((longlong)param_2 + 0x1c);
    puVar16[4] = *(int32_t *)(param_2 + 2);
    puVar16[5] = uVar2;
    puVar16[6] = uVar3;
    puVar16[7] = uVar4;
    param_2 = param_2 + 4;
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = (longlong)puVar12;
  param_1[2] = (longlong)(puVar12 + lVar14 * 8);
  param_1[1] = (longlong)puVar16;
FUN_18041ad57:
  return lVar15 * 0x20 + *param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18041ac63(void)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t *puVar4;
  longlong in_RAX;
  int32_t *puVar5;
  longlong lVar6;
  int32_t *unaff_RBX;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  int32_t *unaff_RDI;
  int32_t *puVar7;
  longlong lVar8;
  
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
  puVar5 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,lVar8 << 5,(char)unaff_RSI[3]);
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
  for (lVar6 = (longlong)unaff_RBX - *unaff_RSI >> 5; 0 < lVar6; lVar6 = lVar6 + -1) {
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
  lVar6 = unaff_RSI[1] - (longlong)unaff_RBX >> 5;
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
    *unaff_RSI = (longlong)puVar5;
    unaff_RSI[2] = (longlong)(puVar5 + lVar8 * 8);
    unaff_RSI[1] = (longlong)puVar7;
    return unaff_RBP * 0x20 + *unaff_RSI;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



longlong FUN_18041ad57(void)

{
  longlong unaff_RBP;
  longlong *unaff_RSI;
  
  return unaff_RBP * 0x20 + *unaff_RSI;
}



longlong * FUN_18041adc0(longlong *param_1,longlong param_2,uint64_t param_3,ulonglong param_4)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  char cStackX_8;
  uint8_t uStackX_9;
  
  plVar5 = param_1;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[2];
    do {
      if (*(int *)(param_2 + 0x10) == 0) {
        plVar8 = (longlong *)plVar4[1];
        bVar2 = false;
      }
      else {
        if ((int)plVar4[6] == 0) {
          bVar2 = true;
        }
        else {
          pbVar3 = *(byte **)(param_2 + 8);
          param_4 = plVar4[5] - (longlong)pbVar3;
          do {
            uVar6 = (uint)pbVar3[param_4];
            iVar7 = *pbVar3 - uVar6;
            if (*pbVar3 != uVar6) break;
            pbVar3 = pbVar3 + 1;
          } while (uVar6 != 0);
          bVar2 = 0 < iVar7;
          if (iVar7 < 1) {
            plVar8 = (longlong *)plVar4[1];
            goto LAB_18041ae37;
          }
        }
        plVar8 = (longlong *)*plVar4;
      }
LAB_18041ae37:
      if (bVar2) {
        plVar4 = plVar5;
      }
      plVar5 = plVar4;
      plVar4 = plVar8;
    } while (plVar8 != (longlong *)0x0);
  }
  if (plVar5 != param_1) {
    if ((int)plVar5[6] == 0) {
LAB_18041ae78:
      return plVar5 + 8;
    }
    if (*(int *)(param_2 + 0x10) != 0) {
      pbVar3 = (byte *)plVar5[5];
      lVar9 = *(longlong *)(param_2 + 8) - (longlong)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar6 = (uint)pbVar3[lVar9];
        if (bVar1 != uVar6) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) goto LAB_18041ae78;
    }
  }
  plVar4 = (longlong *)*param_1;
  if ((plVar5 == plVar4) || (plVar5 == param_1)) {
    if ((param_1[4] == 0) || (*(int *)(param_2 + 0x10) == 0)) goto LAB_18041af5f;
    plVar5 = plVar4;
    if ((int)plVar4[6] != 0) {
      pbVar3 = *(byte **)(param_2 + 8);
      param_4 = plVar4[5] - (longlong)pbVar3;
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
    if (plVar5 == (longlong *)0x0) goto LAB_18041af5f;
  }
  else {
    plVar4 = (longlong *)func_0x00018066bd70(plVar5);
    if (*(int *)(param_2 + 0x10) != 0) {
      if ((int)plVar5[6] != 0) {
        pbVar3 = *(byte **)(param_2 + 8);
        lVar9 = plVar5[5] - (longlong)pbVar3;
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
        param_4 = *(longlong *)(param_2 + 8) - (longlong)pbVar3;
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
    plVar5 = (longlong *)FUN_1800590b0(param_1,&cStackX_8,param_2);
    if (cStackX_8 == '\0') goto LAB_18041af93;
    param_4 = 0;
  }
  FUN_18041b280(param_1,&cStackX_8,plVar5,param_4,param_2);
  plVar5 = (longlong *)CONCAT71(uStackX_9,cStackX_8);
LAB_18041af93:
  return plVar5 + 8;
}





// 函数: void FUN_18041afb0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18041afb0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_18041b140(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18041afd0(uint64_t *param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  uint64_t *puVar2;
  longlong lVar3;
  longlong lVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  longlong lVar7;
  uint64_t uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  FUN_18026ead0();
  *param_1 = &UNK_180a27bc8;
  *param_1 = &UNK_180a27bf8;
  lVar7 = *(longlong *)(param_2 + 0x30) - *(longlong *)(param_2 + 0x28) >> 3;
  uVar1 = *(uint *)(param_2 + 0x40);
  *(uint *)(param_1 + 8) = uVar1;
  lVar4 = 0;
  lVar3 = lVar4;
  if (lVar7 != 0) {
    lVar3 = FUN_18062b420(_DAT_180c8ed18,lVar7 * 8,uVar1 & 0xff,param_4,uVar8);
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
  lVar3 = *(longlong *)(param_2 + 0x50) - *(longlong *)(param_2 + 0x48);
  lVar3 = lVar3 / 6 + (lVar3 >> 0x3f);
  lVar3 = (lVar3 >> 1) - (lVar3 >> 0x3f);
  uVar1 = *(uint *)(param_2 + 0x60);
  *(uint *)(param_1 + 0xc) = uVar1;
  if (lVar3 != 0) {
    lVar4 = FUN_18062b420(_DAT_180c8ed18,lVar3 * 0xc,uVar1 & 0xff,param_4,uVar8);
  }
  param_1[9] = lVar4;
  param_1[10] = lVar4;
  param_1[0xb] = lVar4 + lVar3 * 0xc;
  puVar6 = (uint64_t *)param_1[9];
  puVar2 = *(uint64_t **)(param_2 + 0x50);
  for (puVar5 = *(uint64_t **)(param_2 + 0x48); puVar5 != puVar2;
      puVar5 = (uint64_t *)((longlong)puVar5 + 0xc)) {
    *puVar6 = *puVar5;
    *(int32_t *)(puVar6 + 1) = *(int32_t *)(puVar5 + 1);
    puVar6 = (uint64_t *)((longlong)puVar6 + 0xc);
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
  param_2[4] = &UNK_180a3c3e0;
  if (param_2[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_2[5] = 0;
  *(int32_t *)(param_2 + 7) = 0;
  param_2[4] = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_2);
}





// 函数: void FUN_18041b200(uint64_t param_1,longlong param_2)
void FUN_18041b200(uint64_t param_1,longlong param_2)

{
  FUN_18041aa70(param_2 + 0x40);
  *(uint64_t *)(param_2 + 0x20) = &UNK_180a3c3e0;
  if (*(longlong *)(param_2 + 0x28) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_2 + 0x28) = 0;
  *(int32_t *)(param_2 + 0x38) = 0;
  *(uint64_t *)(param_2 + 0x20) = &UNK_18098bcb0;
  if (param_2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18041b280(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
void FUN_18041b280(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
                  longlong param_5)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint64_t *puVar4;
  longlong lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  uVar6 = 0;
  if (((char)param_4 != '\0') || (param_3 == param_1)) goto LAB_18041b302;
  if (*(int *)(param_3 + 0x30) != 0) {
    if (*(int *)(param_5 + 0x10) == 0) goto LAB_18041b302;
    pbVar2 = *(byte **)(param_3 + 0x28);
    lVar5 = *(longlong *)(param_5 + 8) - (longlong)pbVar2;
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
  lVar5 = FUN_18062b420(_DAT_180c8ed18,0xa8,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  FUN_180627ae0(lVar5 + 0x20,param_5);
  puVar4 = (uint64_t *)(lVar5 + 0x40);
  *puVar4 = &UNK_180a16270;
  *(uint64_t *)(lVar5 + 0x48) = 0;
  *(uint64_t *)(lVar5 + 0x50) = 0;
  *(uint64_t *)(lVar5 + 0x58) = 0;
  *(int32_t *)(lVar5 + 0x60) = 3;
  *puVar4 = &UNK_180a27bc8;
  *puVar4 = &UNK_180a27bf8;
  *(uint64_t *)(lVar5 + 0x68) = 0;
  *(uint64_t *)(lVar5 + 0x70) = 0;
  *(uint64_t *)(lVar5 + 0x78) = 0;
  *(int32_t *)(lVar5 + 0x80) = 5;
  *(uint64_t *)(lVar5 + 0x88) = 0;
  *(uint64_t *)(lVar5 + 0x90) = 0;
  *(uint64_t *)(lVar5 + 0x98) = 0;
  *(int32_t *)(lVar5 + 0xa0) = 5;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar5,param_3,param_1,uVar6,uVar7,(uint64_t *)(lVar5 + 0x88));
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
      uStack_14 = (int32_t)((ulonglong)*(uint64_t *)pfVar4 >> 0x20);
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
      *(ulonglong *)(pfVar3 + 1) = CONCAT44(fVar1,uStack_14);
    }
  }
  return;
}





// 函数: void FUN_18041b4d0(int param_1,int param_2,uint64_t *param_3)
void FUN_18041b4d0(int param_1,int param_2,uint64_t *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  for (lVar2 = (longlong)param_1; lVar2 < param_2; lVar2 = lVar2 + 1) {
    plVar1 = *(longlong **)(*(longlong *)*param_3 + lVar2 * 8);
    (**(code **)(*plVar1 + 0x20))(plVar1,*(int32_t *)param_3[1]);
  }
  return;
}





// 函数: void FUN_18041b560(float *param_1,float *param_2,longlong param_3,int8_t param_4)
void FUN_18041b560(float *param_1,float *param_2,longlong param_3,int8_t param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong uVar6;
  longlong lVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  
  uVar6 = (longlong)param_2 - (longlong)param_1;
  while ((0xe0 < (longlong)(uVar6 & 0xfffffffffffffff8) && (0 < param_3))) {
    lVar7 = (longlong)param_2 - (longlong)param_1 >> 3;
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
    uVar6 = (longlong)pfVar8 - (longlong)param_1;
    param_2 = pfVar8;
  }
  if (param_3 == 0) {
    FUN_18041b820(param_1,param_2,param_2,param_4);
  }
  return;
}





// 函数: void FUN_18041b56d(float *param_1,float *param_2,longlong param_3,int8_t param_4)
void FUN_18041b56d(float *param_1,float *param_2,longlong param_3,int8_t param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong in_RAX;
  ulonglong uVar6;
  longlong lVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  
  uVar6 = in_RAX - (longlong)param_1;
  while ((0xe0 < (longlong)(uVar6 & 0xfffffffffffffff8) && (0 < param_3))) {
    lVar7 = (longlong)param_2 - (longlong)param_1 >> 3;
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
    uVar6 = (longlong)pfVar8 - (longlong)param_1;
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
  longlong lVar6;
  float *pfVar7;
  int8_t unaff_BL;
  longlong unaff_RBP;
  float *unaff_RSI;
  float *pfVar8;
  float *in_R10;
  float fVar9;
  
  do {
    pfVar8 = in_R10;
    if (unaff_RBP < 1) break;
    lVar6 = (longlong)in_R10 - (longlong)unaff_RSI >> 3;
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
  } while (0xe0 < (longlong)((longlong)pfVar8 - (longlong)unaff_RSI & 0xfffffffffffffff8U));
  if (unaff_RBP == 0) {
    FUN_18041b820(param_1,pfVar8,pfVar8,unaff_BL);
  }
  return;
}





// 函数: void FUN_18041b675(void)
void FUN_18041b675(void)

{
  longlong unaff_RBP;
  
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





