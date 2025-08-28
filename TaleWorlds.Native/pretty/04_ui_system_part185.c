#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part185.c - 8 个函数

// 函数: void FUN_180775120(void)
void FUN_180775120(void)

{
                    // WARNING: Subroutine does not return
  memset(0x180c0cee4,0,0x5c);
}



uint64_t FUN_1807751f0(int64_t param_1,float *param_2,float *param_3,int param_4,int param_5)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  int64_t lVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *(float *)(param_1 + 0x220);
  fVar6 = *(float *)(param_1 + 0x218);
  if (*(float *)(param_1 + 0x218) != fVar5) {
    *(float *)(param_1 + 0x218) = fVar5;
    fVar6 = fVar5;
  }
  if (param_2 == (float *)0x0) {
    return 0;
  }
  if (1.0 <= fVar6) {
    fVar5 = 19994.682;
  }
  else {
    fVar5 = (fVar6 + fVar6) / (1.0 - fVar6);
  }
  fVar6 = fVar5 + 1.0;
  for (uVar3 = (uint)(param_4 * param_5) >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_3 = (*param_2 * fVar6) / (ABS(*param_2) * fVar5 + 1.0);
    param_3[1] = (param_2[1] * fVar6) / (ABS(param_2[1]) * fVar5 + 1.0);
    param_3[2] = (param_2[2] * fVar6) / (ABS(param_2[2]) * fVar5 + 1.0);
    param_3[3] = (param_2[3] * fVar6) / (ABS(param_2[3]) * fVar5 + 1.0);
    param_3[4] = (param_2[4] * fVar6) / (ABS(param_2[4]) * fVar5 + 1.0);
    param_3[5] = (param_2[5] * fVar6) / (ABS(param_2[5]) * fVar5 + 1.0);
    param_3[6] = (fVar6 * param_2[6]) / (ABS(param_2[6]) * fVar5 + 1.0);
    pfVar1 = param_2 + 7;
    param_2 = param_2 + 8;
    param_3[7] = (*pfVar1 * fVar6) / (ABS(*pfVar1) * fVar5 + 1.0);
    param_3 = param_3 + 8;
  }
  uVar3 = param_4 * param_5 & 7;
  if (uVar3 != 0) {
    lVar4 = (int64_t)param_2 - (int64_t)param_3;
    do {
      fVar2 = *(float *)(lVar4 + (int64_t)param_3);
      *param_3 = (fVar2 * fVar6) / (ABS(fVar2) * fVar5 + 1.0);
      param_3 = param_3 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return 0;
}



uint64_t FUN_180775228(uint64_t param_1,float *param_2,float *param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  int64_t lVar4;
  bool in_CF;
  float in_XMM1_Da;
  float fVar5;
  float in_XMM4_Da;
  float fVar6;
  int in_stack_00000040;
  
  if (in_CF) {
    fVar5 = (in_XMM1_Da + in_XMM1_Da) / (in_XMM4_Da - in_XMM1_Da);
  }
  else {
    fVar5 = 19994.682;
  }
  fVar6 = fVar5 + in_XMM4_Da;
  for (uVar3 = (uint)(param_4 * in_stack_00000040) >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_3 = (*param_2 * fVar6) / (ABS(*param_2) * fVar5 + in_XMM4_Da);
    param_3[1] = (param_2[1] * fVar6) / (ABS(param_2[1]) * fVar5 + in_XMM4_Da);
    param_3[2] = (param_2[2] * fVar6) / (ABS(param_2[2]) * fVar5 + in_XMM4_Da);
    param_3[3] = (param_2[3] * fVar6) / (ABS(param_2[3]) * fVar5 + in_XMM4_Da);
    param_3[4] = (param_2[4] * fVar6) / (ABS(param_2[4]) * fVar5 + in_XMM4_Da);
    param_3[5] = (param_2[5] * fVar6) / (ABS(param_2[5]) * fVar5 + in_XMM4_Da);
    param_3[6] = (fVar6 * param_2[6]) / (ABS(param_2[6]) * fVar5 + in_XMM4_Da);
    pfVar1 = param_2 + 7;
    param_2 = param_2 + 8;
    param_3[7] = (*pfVar1 * fVar6) / (ABS(*pfVar1) * fVar5 + in_XMM4_Da);
    param_3 = param_3 + 8;
  }
  uVar3 = param_4 * in_stack_00000040 & 7;
  if (uVar3 != 0) {
    lVar4 = (int64_t)param_2 - (int64_t)param_3;
    do {
      fVar2 = *(float *)(lVar4 + (int64_t)param_3);
      *param_3 = (fVar2 * fVar6) / (ABS(fVar2) * fVar5 + in_XMM4_Da);
      param_3 = param_3 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return 0;
}



uint64_t FUN_1807753c6(void)

{
  return 0;
}



uint64_t FUN_1807753d0(int64_t *param_1)

{
  float fVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint uVar6;
  uint64_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  
  lVar2 = *param_1;
  uVar5 = 0;
  lVar3 = *(int64_t *)(lVar2 + 0xe8);
  *(int32_t *)(lVar2 + 0x26c) = 1;
  *(int32_t *)(lVar2 + 0x1c0) = 1;
  *(uint64_t *)(lVar2 + 0x248) = 0;
  *(uint64_t *)(lVar2 + 0x238) = 0;
  *(uint64_t *)(lVar2 + 0x240) = 0;
  *(int32_t *)(lVar2 + 0x250) = 0;
  *(int32_t *)(lVar2 + 0x260) = 0;
  uVar7 = uVar5;
  if (0 < *(int *)(lVar3 + 0x60)) {
    do {
      uVar4 = func_0x000180762a70(lVar2,uVar7,
                                  *(int32_t *)
                                   (*(int64_t *)(*(int64_t *)(lVar3 + 0x68) + uVar5) + 0x38));
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      lVar3 = *(int64_t *)(lVar2 + 0xe8);
      uVar6 = (int)uVar7 + 1;
      uVar5 = uVar5 + 8;
      uVar7 = (uint64_t)uVar6;
    } while ((int)uVar6 < *(int *)(lVar3 + 0x60));
  }
  fVar1 = *(float *)(lVar2 + 0x284);
  *(int32_t *)(lVar2 + 0x218) = *(int32_t *)(lVar2 + 0x278);
  *(float *)(lVar2 + 0x21c) = *(float *)(lVar2 + 0x27c);
  uVar9 = 0;
  *(float *)(lVar2 + 0x224) = fVar1;
  *(float *)(lVar2 + 0x220) = *(float *)(lVar2 + 0x27c) * 0.01;
  if (-80.0 < fVar1) {
    uVar8 = powf(0x41200000,fVar1 * 0.05);
  }
  else {
    uVar8 = 0;
  }
  fVar1 = *(float *)(lVar2 + 0x288);
  *(int32_t *)(lVar2 + 0x228) = uVar8;
  *(float *)(lVar2 + 0x22c) = fVar1;
  if (-80.0 < fVar1) {
    uVar9 = powf(0x41200000,fVar1 * 0.05);
  }
  *(int32_t *)(lVar2 + 0x230) = uVar9;
  uVar9 = FUN_180776010(lVar2);
  *(int32_t *)(lVar2 + 0x274) = uVar9;
  return 0;
}



int32_t FUN_180775494(int32_t param_1,float param_2)

{
  float fVar1;
  int64_t unaff_RBX;
  int32_t unaff_EBP;
  bool in_CF;
  bool in_ZF;
  int32_t uVar2;
  int32_t uVar3;
  
  uVar3 = 0;
  *(float *)(unaff_RBX + 0x224) = param_2;
  *(int32_t *)(unaff_RBX + 0x220) = param_1;
  if (in_CF || in_ZF) {
    uVar2 = 0;
  }
  else {
    uVar2 = powf(0x41200000,param_2 * 0.05);
  }
  fVar1 = *(float *)(unaff_RBX + 0x288);
  *(int32_t *)(unaff_RBX + 0x228) = uVar2;
  *(float *)(unaff_RBX + 0x22c) = fVar1;
  if (-80.0 < fVar1) {
    uVar3 = powf(0x41200000,fVar1 * 0.05);
  }
  *(int32_t *)(unaff_RBX + 0x230) = uVar3;
  uVar3 = FUN_180776010();
  *(int32_t *)(unaff_RBX + 0x274) = uVar3;
  return unaff_EBP;
}





// 函数: void FUN_180775520(void)
void FUN_180775520(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180775540(int64_t *param_1)

{
  if (*(int64_t *)(*param_1 + 0x240) != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(*param_1 + 0x240),
                  &unknown_var_4256_ptr,0x134,1);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_180775620(int64_t *param_1,uint64_t param_2,uint64_t param_3,int param_4,int param_5)

{
  int32_t *puVar1;
  int64_t lVar2;
  bool bVar3;
  int iVar4;
  uint64_t uVar5;
  int iVar6;
  uint64_t uStackX_8;
  uint64_t uStackX_10;
  int aiStackX_20 [2];
  uint64_t in_stack_ffffffffffffff98;
  int32_t uVar7;
  
  uVar7 = (int32_t)((uint64_t)in_stack_ffffffffffffff98 >> 0x20);
  lVar2 = *param_1;
  iVar6 = *(int *)(lVar2 + 0x260);
  uStackX_8 = param_3;
  uStackX_10 = param_2;
  aiStackX_20[0] = iVar6;
  iVar4 = param_4;
  if (((param_5 == *(int *)(lVar2 + 0x26c)) ||
      (((*(int *)(lVar2 + 0x26c) = param_5, bVar3 = param_5 <= *(int *)(lVar2 + 0x1c0),
        param_5 = param_4, bVar3 ||
        (uVar5 = FUN_180776880(lVar2,*(int32_t *)(lVar2 + 0x250)), (int)uVar5 == 0)) &&
       (uVar5 = FUN_1807769b0(lVar2), iVar4 = param_5, (int)uVar5 == 0)))) &&
     ((param_5 = iVar4, puVar1 = (int32_t *)(lVar2 + 0x254), iVar6 == 0 ||
      (uVar5 = FUN_1807762e0(lVar2,&uStackX_8,&uStackX_10,*(uint64_t *)(lVar2 + 0x238),lVar2 + 600
                             ,puVar1,CONCAT44(uVar7,*(int32_t *)(lVar2 + 0x24c)),
                             *(int32_t *)(lVar2 + 0x230),*(int32_t *)(lVar2 + 0x228),
                             *(int32_t *)(lVar2 + 0x220),&param_5,*(int32_t *)(lVar2 + 0x26c),
                             aiStackX_20,lVar2 + 0x25c), param_3 = uStackX_8, param_2 = uStackX_10,
      iVar6 = aiStackX_20[0], param_4 = param_5, (int)uVar5 == 0)))) {
    if (param_4 != 0) {
      (*(code *)*ui_system_config)
                (param_3,param_2,*(uint64_t *)(lVar2 + 0x238),*(int32_t *)(lVar2 + 600),*puVar1
                 ,(int32_t *)(lVar2 + 600),puVar1,*(int32_t *)(lVar2 + 0x24c),
                 *(int32_t *)(lVar2 + 0x230),*(int32_t *)(lVar2 + 0x228),
                 *(int32_t *)(lVar2 + 0x220),param_4,*(int32_t *)(lVar2 + 0x26c));
    }
    *(int *)(lVar2 + 0x260) = iVar6;
    uVar5 = 0;
  }
  return uVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180775691(void)

{
  uint64_t uVar1;
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  uint64_t unaff_R15;
  int32_t *puStack0000000000000028;
  int32_t uStack0000000000000038;
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000048;
  int iStack0000000000000058;
  uint64_t in_stack_000000a0;
  uint64_t in_stack_000000a8;
  int in_stack_000000b8;
  int in_stack_000000c0;
  
  if (unaff_EDI != 0) {
    uStack0000000000000048 = *(int32_t *)(unaff_RBX + 0x220);
    uStack0000000000000040 = *(int32_t *)(unaff_RBX + 0x228);
    iStack0000000000000058 = *(int32_t *)(unaff_RBX + 0x26c);
    uStack0000000000000038 = *(int32_t *)(unaff_RBX + 0x230);
    puStack0000000000000028 = (int32_t *)(unaff_RBX + 0x254);
    uVar1 = FUN_1807762e0(uStack0000000000000038,&stack0x000000a0,&stack0x000000a8,
                          *(uint64_t *)(unaff_RBX + 0x238),unaff_RBX + 600);
    unaff_RBP = in_stack_000000a0;
    unaff_R15 = in_stack_000000a8;
    unaff_EDI = in_stack_000000b8;
    unaff_ESI = in_stack_000000c0;
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  if (unaff_ESI != 0) {
    puStack0000000000000028 = (int32_t *)(unaff_RBX + 600);
    uStack0000000000000048 = *(int32_t *)(unaff_RBX + 0x228);
    uStack0000000000000038 = *(int32_t *)(unaff_RBX + 0x24c);
    uStack0000000000000040 = *(int32_t *)(unaff_RBX + 0x230);
    iStack0000000000000058 = unaff_ESI;
    (*(code *)*ui_system_config)
              (unaff_RBP,unaff_R15,*(uint64_t *)(unaff_RBX + 0x238),*puStack0000000000000028,
               *(int32_t *)(unaff_RBX + 0x254));
  }
  *(int *)(unaff_RBX + 0x260) = unaff_EDI;
  return 0;
}





// 函数: void FUN_1807757e9(void)
void FUN_1807757e9(void)

{
  return;
}



uint64_t FUN_180775800(int64_t *param_1,int param_2,int32_t param_3)

{
  int64_t lVar1;
  uint64_t uVar2;
  int8_t *apuStackX_8 [4];
  
  lVar1 = *param_1;
  if (param_2 == 0) {
    *(int32_t *)(lVar1 + 0x278) = param_3;
  }
  else if (param_2 == 1) {
    *(int32_t *)(lVar1 + 0x27c) = param_3;
  }
  else if (param_2 == 2) {
    *(int32_t *)(lVar1 + 0x284) = param_3;
  }
  else {
    if (param_2 != 3) {
      return 0x1f;
    }
    *(int32_t *)(lVar1 + 0x288) = param_3;
  }
  uVar2 = FUN_180743700(*(uint64_t *)(lVar1 + 0xa8),apuStackX_8,0x10,1);
  if ((int)uVar2 == 0) {
    *apuStackX_8[0] = 7;
    *(int64_t *)(apuStackX_8[0] + 8) = lVar1;
    uVar2 = func_0x000180743b40(*(uint64_t *)(lVar1 + 0xa8),apuStackX_8[0],1);
  }
  return uVar2;
}



uint64_t FUN_1807758a0(int64_t *param_1,int param_2,int32_t *param_3,int64_t param_4)

{
  int64_t lVar1;
  void *puVar2;
  float fVar3;
  
  lVar1 = *param_1;
  if (param_2 == 0) {
    *param_3 = *(int32_t *)(lVar1 + 0x278);
    if (param_4 == 0) {
      return 0;
    }
    fVar3 = *(float *)(lVar1 + 0x278);
    puVar2 = &unknown_var_2048_ptr;
  }
  else if (param_2 == 1) {
    *param_3 = *(int32_t *)(lVar1 + 0x27c);
    if (param_4 == 0) {
      return 0;
    }
    fVar3 = *(float *)(lVar1 + 0x27c);
    puVar2 = &unknown_var_4372_ptr;
  }
  else if (param_2 == 2) {
    *param_3 = *(int32_t *)(lVar1 + 0x284);
    if (param_4 == 0) {
      return 0;
    }
    fVar3 = *(float *)(lVar1 + 0x284);
    puVar2 = &unknown_var_4372_ptr;
  }
  else {
    if ((param_2 != 3) || (*param_3 = *(int32_t *)(lVar1 + 0x288), param_4 == 0)) {
      return 0;
    }
    fVar3 = *(float *)(lVar1 + 0x288);
    puVar2 = &unknown_var_4372_ptr;
  }
                    // WARNING: Subroutine does not return
  FUN_18076b390(param_4,0x20,puVar2,(double)fVar3);
}





// 函数: void FUN_180775970(short *param_1,int param_2,int param_3,int param_4,int param_5)
void FUN_180775970(short *param_1,int param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  uint uVar2;
  uint64_t uVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar11 = 1.0 / (float)(param_5 + 1);
  psVar4 = param_1 + param_2 * param_4;
  fVar10 = fVar11;
  if (param_5 != 0) {
    do {
      iVar7 = param_3;
      if (param_4 + param_5 < param_3) {
        iVar7 = param_4 + param_5;
      }
      iVar7 = iVar7 - param_4;
      iVar6 = iVar7;
      while (iVar6 != 0) {
        iVar6 = iVar6 + -1;
        iVar5 = 0;
        fVar9 = fVar10 * 3.051851e-05;
        if (3 < param_2) {
          uVar2 = (param_2 - 4U >> 2) + 1;
          uVar3 = (uint64_t)uVar2;
          iVar5 = uVar2 * 4;
          do {
            fVar8 = (float)(int)*psVar4 * fVar9;
            if (fVar8 <= 1.0) {
              if (-1.0 <= fVar8) {
                sVar1 = (short)(int)(fVar8 * 32767.0);
              }
              else {
                sVar1 = -0x8000;
              }
            }
            else {
              sVar1 = 0x7fff;
            }
            *psVar4 = sVar1;
            fVar8 = (float)(int)psVar4[1] * fVar9;
            if (fVar8 <= 1.0) {
              if (-1.0 <= fVar8) {
                sVar1 = (short)(int)(fVar8 * 32767.0);
              }
              else {
                sVar1 = -0x8000;
              }
            }
            else {
              sVar1 = 0x7fff;
            }
            psVar4[1] = sVar1;
            fVar8 = (float)(int)psVar4[2] * fVar9;
            if (fVar8 <= 1.0) {
              if (-1.0 <= fVar8) {
                sVar1 = (short)(int)(fVar8 * 32767.0);
              }
              else {
                sVar1 = -0x8000;
              }
            }
            else {
              sVar1 = 0x7fff;
            }
            psVar4[2] = sVar1;
            fVar8 = (float)(int)psVar4[3] * fVar9;
            if (fVar8 <= 1.0) {
              if (-1.0 <= fVar8) {
                sVar1 = (short)(int)(fVar8 * 32767.0);
              }
              else {
                sVar1 = -0x8000;
              }
            }
            else {
              sVar1 = 0x7fff;
            }
            psVar4[3] = sVar1;
            psVar4 = psVar4 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        if (iVar5 < param_2) {
          uVar3 = (uint64_t)(uint)(param_2 - iVar5);
          do {
            fVar8 = (float)(int)*psVar4 * fVar9;
            if (fVar8 <= 1.0) {
              if (-1.0 <= fVar8) {
                sVar1 = (short)(int)(fVar8 * 32767.0);
              }
              else {
                sVar1 = -0x8000;
              }
            }
            else {
              sVar1 = 0x7fff;
            }
            *psVar4 = sVar1;
            psVar4 = psVar4 + 1;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        fVar10 = fVar10 + fVar11;
      }
      param_4 = 0;
      param_5 = param_5 - iVar7;
      psVar4 = param_1;
    } while (param_5 != 0);
  }
  return;
}





// 函数: void FUN_1807759d1(uint64_t param_1,float param_2,uint64_t param_3,float param_4)
void FUN_1807759d1(uint64_t param_1,float param_2,uint64_t param_3,float param_4)

{
  short sVar1;
  uint uVar2;
  uint64_t uVar3;
  short *in_RDX;
  int unaff_EBX;
  int unaff_ESI;
  short *unaff_RDI;
  int iVar4;
  int in_R9D;
  int iVar5;
  int in_R10D;
  int iVar6;
  float fVar7;
  float fVar8;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  
  do {
    iVar6 = unaff_ESI;
    if (in_R9D + unaff_EBX < unaff_ESI) {
      iVar6 = in_R9D + unaff_EBX;
    }
    iVar6 = iVar6 - in_R9D;
    iVar5 = iVar6;
    while (iVar5 != 0) {
      iVar5 = iVar5 + -1;
      iVar4 = 0;
      fVar8 = in_XMM5_Da * 3.051851e-05;
      if (3 < in_R10D) {
        uVar2 = (in_R10D - 4U >> 2) + 1;
        uVar3 = (uint64_t)uVar2;
        iVar4 = uVar2 * 4;
        do {
          fVar7 = (float)(int)*in_RDX * fVar8;
          if (fVar7 <= param_4) {
            if (param_2 <= fVar7) {
              sVar1 = (short)(int)(fVar7 * in_XMM4_Da);
            }
            else {
              sVar1 = -0x8000;
            }
          }
          else {
            sVar1 = 0x7fff;
          }
          *in_RDX = sVar1;
          fVar7 = (float)(int)in_RDX[1] * fVar8;
          if (fVar7 <= param_4) {
            if (param_2 <= fVar7) {
              sVar1 = (short)(int)(fVar7 * in_XMM4_Da);
            }
            else {
              sVar1 = -0x8000;
            }
          }
          else {
            sVar1 = 0x7fff;
          }
          in_RDX[1] = sVar1;
          fVar7 = (float)(int)in_RDX[2] * fVar8;
          if (fVar7 <= param_4) {
            if (param_2 <= fVar7) {
              sVar1 = (short)(int)(fVar7 * in_XMM4_Da);
            }
            else {
              sVar1 = -0x8000;
            }
          }
          else {
            sVar1 = 0x7fff;
          }
          in_RDX[2] = sVar1;
          fVar7 = (float)(int)in_RDX[3] * fVar8;
          if (fVar7 <= param_4) {
            if (param_2 <= fVar7) {
              sVar1 = (short)(int)(fVar7 * in_XMM4_Da);
            }
            else {
              sVar1 = -0x8000;
            }
          }
          else {
            sVar1 = 0x7fff;
          }
          in_RDX[3] = sVar1;
          in_RDX = in_RDX + 4;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      if (iVar4 < in_R10D) {
        uVar3 = (uint64_t)(uint)(in_R10D - iVar4);
        do {
          fVar7 = (float)(int)*in_RDX * fVar8;
          if (fVar7 <= param_4) {
            if (param_2 <= fVar7) {
              sVar1 = (short)(int)(fVar7 * in_XMM4_Da);
            }
            else {
              sVar1 = -0x8000;
            }
          }
          else {
            sVar1 = 0x7fff;
          }
          *in_RDX = sVar1;
          in_RDX = in_RDX + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      in_XMM5_Da = in_XMM5_Da + unaff_XMM6_Da;
    }
    in_R9D = 0;
    unaff_EBX = unaff_EBX - iVar6;
    in_RDX = unaff_RDI;
  } while (unaff_EBX != 0);
  return;
}





// 函数: void FUN_180775b7c(void)
void FUN_180775b7c(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180775bb0(int64_t param_1,int param_2)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int iVar6;
  int iVar7;
  uint64_t uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int32_t uVar15;
  int32_t uVar16;
  
  if (param_2 == 2) {
    fVar2 = *(float *)(param_1 + 0x27c);
    if (fVar2 != *(float *)(param_1 + 0x21c)) {
      *(float *)(param_1 + 0x21c) = fVar2;
      *(float *)(param_1 + 0x220) = fVar2 * 0.01;
      uVar15 = FUN_180776010();
      *(int32_t *)(param_1 + 0x274) = uVar15;
    }
    fVar2 = *(float *)(param_1 + 0x284);
    uVar15 = 0;
    if (fVar2 != *(float *)(param_1 + 0x224)) {
      *(float *)(param_1 + 0x224) = fVar2;
      if (-80.0 < fVar2) {
        uVar16 = powf();
      }
      else {
        uVar16 = 0;
      }
      *(int32_t *)(param_1 + 0x228) = uVar16;
    }
    fVar2 = *(float *)(param_1 + 0x288);
    if (fVar2 != *(float *)(param_1 + 0x22c)) {
      *(float *)(param_1 + 0x22c) = fVar2;
      if (-80.0 < fVar2) {
        uVar15 = powf();
      }
      *(int32_t *)(param_1 + 0x230) = uVar15;
    }
  }
  else if (param_2 == 1) {
    fVar2 = *(float *)(param_1 + 0x278);
    iVar11 = *(int *)(param_1 + 0x260);
    if ((fVar2 != *(float *)(param_1 + 0x218)) && (iVar11 == 0)) {
      *(float *)(param_1 + 0x218) = fVar2;
      uVar15 = FUN_180776010();
      *(int32_t *)(param_1 + 0x274) = uVar15;
      if (*(int *)(param_1 + 0x26c) == *(int *)(param_1 + 0x1c0)) {
        uVar3 = *(uint *)(param_1 + 0x24c);
        uVar9 = (int)(int64_t)
                     ((float)*(int *)(*(int64_t *)(param_1 + 0xa8) + 0x6d0) * fVar2 * 0.001 + 0.5)
                + 7U & 0xfffffff8;
        *(uint *)(param_1 + 0x250) = uVar9;
        if (uVar3 < uVar9 + 0x80) {
          iVar12 = 0;
          if (uVar3 != 0) {
            for (iVar12 = *(int *)(param_1 + 0x254) - *(int *)(param_1 + 600); iVar12 < 0;
                iVar12 = iVar12 + uVar3) {
            }
            for (; (int)uVar3 <= iVar12; iVar12 = iVar12 - uVar3) {
            }
          }
          lVar4 = *(int64_t *)(param_1 + 0x240);
          lVar5 = *(int64_t *)(param_1 + 0x238);
          iVar10 = *(int *)(param_1 + 0x248);
          *(uint64_t *)(param_1 + 0x240) = 0;
          uVar8 = FUN_180776880(param_1,uVar9);
          if ((int)uVar8 != 0) {
            return uVar8;
          }
          if (lVar4 != 0) {
            iVar11 = *(int *)(param_1 + 0x24c);
            for (iVar12 = *(int *)(param_1 + 0x250) - uVar3; iVar12 < 0; iVar12 = iVar12 + iVar11) {
            }
            for (; iVar11 <= iVar12; iVar12 = iVar12 - iVar11) {
            }
            iVar11 = *(int *)(param_1 + 0x26c);
            iVar13 = *(int *)(param_1 + 0x254) * iVar11;
            iVar6 = iVar11 * iVar12 * 2;
            iVar7 = iVar13 * 2;
            if (iVar10 == 0) {
              FUN_180775970(*(int64_t *)(param_1 + 0x238),iVar11,*(int32_t *)(param_1 + 0x24c),
                            iVar12,0x80);
                    // WARNING: Subroutine does not return
              FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar4,&unknown_var_4256_ptr,0x2c6,1);
            }
            iVar1 = iVar7 + iVar10;
            iVar14 = iVar6 + iVar10;
            if (iVar1 < iVar10) {
              iVar10 = iVar1;
            }
            iVar10 = iVar10 + iVar13 * -2;
            if (*(int *)(param_1 + 0x248) <= iVar14) {
              iVar14 = *(int *)(param_1 + 0x248);
            }
            iVar14 = iVar14 + iVar11 * iVar12 * -2;
            if (iVar10 < iVar14) {
              iVar14 = iVar10;
            }
                    // WARNING: Subroutine does not return
            memcpy((int64_t)iVar6 + *(int64_t *)(param_1 + 0x238),iVar7 + lVar5,(int64_t)iVar14);
          }
          *(int *)(param_1 + 0x254) = *(int *)(param_1 + 0x250);
          iVar10 = *(int *)(param_1 + 0x250) - iVar12;
          if (iVar12 == 0) {
            iVar10 = 0;
          }
          *(int32_t *)(param_1 + 600) = 0;
          *(int *)(param_1 + 0x25c) = iVar10;
          iVar12 = *(int *)(param_1 + 600);
        }
        else {
          *(int32_t *)(param_1 + 0x25c) = *(int32_t *)(param_1 + 600);
          for (iVar12 = *(int *)(param_1 + 0x254) - uVar9; iVar12 < 0; iVar12 = iVar12 + uVar3) {
          }
          for (; (int)uVar3 <= iVar12; iVar12 = iVar12 - uVar3) {
          }
          iVar10 = *(int *)(param_1 + 0x25c);
          *(int *)(param_1 + 600) = iVar12;
        }
        if (iVar10 != iVar12) {
          iVar11 = 0x800;
        }
      }
    }
    if ((*(int *)(param_1 + 0x26c) != *(int *)(param_1 + 0x1c0)) ||
       (*(int64_t *)(param_1 + 0x238) == 0)) {
      *(int *)(param_1 + 0x26c) = *(int *)(param_1 + 0x1c0);
      uVar8 = FUN_180776880(param_1,*(int32_t *)(param_1 + 0x250));
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      uVar8 = FUN_1807769b0(param_1);
      iVar11 = 0;
      if ((int)uVar8 != 0) {
        return uVar8;
      }
    }
    *(int *)(param_1 + 0x260) = iVar11;
  }
  return 0;
}





// 函数: void FUN_180775e3b(int64_t param_1)
void FUN_180775e3b(int64_t param_1)

{
  int iVar1;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  int iVar2;
  int unaff_R13D;
  int unaff_R14D;
  int64_t unaff_R15;
  
  if (unaff_EDI + unaff_R13D < unaff_EBP) {
    unaff_EBP = unaff_EDI + unaff_R13D;
  }
  iVar2 = unaff_EBX + unaff_R13D;
  if (unaff_R14D <= unaff_EBX + unaff_R13D) {
    iVar2 = unaff_R14D;
  }
  iVar1 = iVar2 - unaff_EBX;
  if (unaff_EBP - unaff_EDI < iVar2 - unaff_EBX) {
    iVar1 = unaff_EBP - unaff_EDI;
  }
                    // WARNING: Subroutine does not return
  memcpy(unaff_EBX + param_1,unaff_EDI + unaff_R15,(int64_t)iVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180775ee7(uint64_t param_1,uint64_t param_2)
void FUN_180775ee7(uint64_t param_1,uint64_t param_2)

{
  int64_t unaff_RSI;
  int32_t unaff_R15D;
  uint64_t in_stack_00000048;
  
  FUN_180775970(param_1,param_2,*(int32_t *)(unaff_RSI + 0x24c),unaff_R15D,0x80);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),in_stack_00000048,&unknown_var_4256_ptr,0x2c6,1);
}



float FUN_180776010(int64_t param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x220);
  if (1.0 <= fVar1) {
    return -1.0;
  }
  if (0.0 < fVar1) {
    fVar1 = (float)log10f(fVar1);
    fVar1 = 5e-05 / fVar1;
  }
  else {
    fVar1 = -1.25e-05;
  }
  return (0.001 - (*(float *)(param_1 + 0x22c) + 100.0) * fVar1) * *(float *)(param_1 + 0x218);
}





