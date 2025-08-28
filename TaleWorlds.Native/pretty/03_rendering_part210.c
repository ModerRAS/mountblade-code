#include "SystemDataAdvancedOptimizer_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part210.c - 8 个函数

// 函数: void FUN_18038cd10(int64_t param_1,uint64_t *param_2,uint64_t *param_3)
void FUN_18038cd10(int64_t param_1,uint64_t *param_2,uint64_t *param_3)

{
  byte bVar1;
  float *pfVar2;
  uint uVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint64_t uStackX_8;
  uint64_t uStackX_10;
  
  bVar1 = *(byte *)(param_1 + 0xa8);
  iVar6 = 0;
  uStackX_8 = 0x7f7fffff7f7fffff;
  uStackX_10 = 0xff7fffffff7fffff;
  if (3 < bVar1) {
    uVar3 = (bVar1 - 4 >> 2) + 1;
    uVar5 = (uint64_t)uVar3;
    iVar6 = uVar3 * 4;
    puVar4 = (uint64_t *)(param_1 + 0x88);
    do {
      fVar13 = ((float *)puVar4[-1])[1];
      fVar11 = *(float *)puVar4[-1];
      fVar10 = fVar11;
      if ((float)uStackX_8 <= fVar11) {
        fVar10 = (float)uStackX_8;
      }
      fVar8 = fVar13;
      if (uStackX_8._4_4_ <= fVar13) {
        fVar8 = uStackX_8._4_4_;
      }
      if (fVar11 <= (float)uStackX_10) {
        fVar11 = (float)uStackX_10;
      }
      if (fVar13 <= uStackX_10._4_4_) {
        fVar13 = uStackX_10._4_4_;
      }
      fVar12 = ((float *)*puVar4)[1];
      fVar9 = *(float *)*puVar4;
      fVar7 = fVar9;
      if (fVar10 <= fVar9) {
        fVar7 = fVar10;
      }
      fVar10 = fVar12;
      if (fVar8 <= fVar12) {
        fVar10 = fVar8;
      }
      if (fVar9 <= fVar11) {
        fVar9 = fVar11;
      }
      if (fVar12 <= fVar13) {
        fVar12 = fVar13;
      }
      fVar13 = ((float *)puVar4[1])[1];
      fVar11 = *(float *)puVar4[1];
      fVar8 = fVar11;
      if (fVar7 <= fVar11) {
        fVar8 = fVar7;
      }
      fVar7 = fVar13;
      if (fVar10 <= fVar13) {
        fVar7 = fVar10;
      }
      if (fVar11 <= fVar9) {
        fVar11 = fVar9;
      }
      if (fVar13 <= fVar12) {
        fVar13 = fVar12;
      }
      fVar10 = ((float *)puVar4[2])[1];
      fVar12 = *(float *)puVar4[2];
      fVar9 = fVar12;
      if (fVar8 <= fVar12) {
        fVar9 = fVar8;
      }
      fVar8 = fVar10;
      if (fVar7 <= fVar10) {
        fVar8 = fVar7;
      }
      if (fVar12 <= fVar11) {
        fVar12 = fVar11;
      }
      if (fVar10 <= fVar13) {
        fVar10 = fVar13;
      }
      uStackX_8 = CONCAT44(fVar8,fVar9);
      uStackX_10 = CONCAT44(fVar10,fVar12);
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 4;
    } while (uVar5 != 0);
  }
  if (iVar6 < (int)(uint)bVar1) {
    uVar5 = (uint64_t)((uint)bVar1 - iVar6);
    puVar4 = (uint64_t *)(param_1 + ((int64_t)iVar6 + 0x10) * 8);
    do {
      pfVar2 = (float *)*puVar4;
      puVar4 = puVar4 + 1;
      fVar13 = pfVar2[1];
      fVar11 = *pfVar2;
      fVar10 = fVar11;
      if ((float)uStackX_8 <= fVar11) {
        fVar10 = (float)uStackX_8;
      }
      fVar8 = fVar13;
      if (uStackX_8._4_4_ <= fVar13) {
        fVar8 = uStackX_8._4_4_;
      }
      if (fVar11 <= (float)uStackX_10) {
        fVar11 = (float)uStackX_10;
      }
      if (fVar13 <= uStackX_10._4_4_) {
        fVar13 = uStackX_10._4_4_;
      }
      uStackX_8 = CONCAT44(fVar8,fVar10);
      uStackX_10 = CONCAT44(fVar13,fVar11);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  *param_2 = uStackX_8;
  *param_3 = uStackX_10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18038cf30(int64_t param_1,int64_t param_2)
void FUN_18038cf30(int64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint uVar8;
  uint64_t uVar10;
  int64_t *plVar11;
  int iVar12;
  uint64_t uVar13;
  int64_t lVar14;
  int iVar15;
  uint64_t uVar9;
  
  plVar1 = (int64_t *)(param_1 + 0x458);
  uVar13 = 0;
  iVar12 = 0;
  iVar15 = (int)(*(int64_t *)(param_1 + 0x460) - *plVar1 >> 3);
  if (*(char *)(param_2 + 0xa8) != '\0') {
    plVar11 = (int64_t *)(param_2 + 0x60);
    lVar14 = (int64_t)iVar15 * 8 + -8;
    uVar6 = uVar13;
    uVar7 = uVar13;
    do {
      lVar2 = *plVar11;
      if (lVar2 != 0) {
        if (*(int64_t *)(lVar2 + 0x10) == param_2) {
          *(uint64_t *)(lVar2 + 0x10) = *(uint64_t *)(lVar2 + 0x18);
LAB_18038cfae:
          *(char *)(lVar2 + 0x20) = *(char *)(lVar2 + 0x20) + -1;
          *(uint64_t *)(lVar2 + 0x18) = 0;
        }
        else if (*(int64_t *)(lVar2 + 0x18) == param_2) goto LAB_18038cfae;
        *plVar11 = 0;
        if (*(char *)(lVar2 + 0x20) == '\0') {
          lVar3 = *plVar1;
          uVar10 = *(int64_t *)(param_1 + 0x460) - lVar3 >> 3;
          uVar5 = uVar13;
          uVar9 = uVar13;
          if (uVar10 != 0) {
            do {
              if (lVar2 == *(int64_t *)(lVar3 + uVar5 * 8)) goto LAB_18038cff2;
              uVar8 = (int)uVar9 + 1;
              uVar9 = (uint64_t)uVar8;
              uVar5 = uVar5 + 1;
            } while ((uint64_t)(int64_t)(int)uVar8 < uVar10);
          }
          uVar5 = 0xffffffffffffffff;
LAB_18038cff2:
          uVar6 = (uint64_t)((int)uVar6 + 1);
          uVar4 = *(uint64_t *)(lVar3 + uVar5 * 8);
          *(uint64_t *)(lVar3 + uVar5 * 8) = *(uint64_t *)(lVar14 + lVar3);
          *(uint64_t *)(lVar14 + lVar3) = uVar4;
          lVar14 = lVar14 + -8;
        }
      }
      iVar12 = (int)uVar6;
      uVar8 = (int)uVar7 + 1;
      uVar7 = (uint64_t)uVar8;
      plVar11 = plVar11 + 1;
    } while ((int)uVar8 < (int)(uint)*(byte *)(param_2 + 0xa8));
  }
  if (iVar12 < 1) {
    if (0 < iVar12) {
      FUN_180057340(plVar1,(int64_t)(iVar15 - iVar12));
    }
    return;
  }
                    // WARNING: Subroutine does not return
  SystemParameterHandler(system_message_context,&processed_var_5352_ptr);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18038cf39(int64_t param_1,int64_t param_2)
void FUN_18038cf39(int64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint uVar8;
  uint64_t uVar10;
  int64_t *plVar11;
  int iVar12;
  uint64_t uVar13;
  int64_t lVar14;
  int iVar15;
  uint64_t uVar9;
  
  plVar1 = (int64_t *)(param_1 + 0x458);
  uVar13 = 0;
  iVar12 = 0;
  iVar15 = (int)(*(int64_t *)(param_1 + 0x460) - *plVar1 >> 3);
  if (*(char *)(param_2 + 0xa8) != '\0') {
    plVar11 = (int64_t *)(param_2 + 0x60);
    lVar14 = (int64_t)iVar15 * 8 + -8;
    uVar6 = uVar13;
    uVar7 = uVar13;
    do {
      lVar2 = *plVar11;
      if (lVar2 != 0) {
        if (*(int64_t *)(lVar2 + 0x10) == param_2) {
          *(uint64_t *)(lVar2 + 0x10) = *(uint64_t *)(lVar2 + 0x18);
LAB_18038cfae:
          *(char *)(lVar2 + 0x20) = *(char *)(lVar2 + 0x20) + -1;
          *(uint64_t *)(lVar2 + 0x18) = 0;
        }
        else if (*(int64_t *)(lVar2 + 0x18) == param_2) goto LAB_18038cfae;
        *plVar11 = 0;
        if (*(char *)(lVar2 + 0x20) == '\0') {
          lVar3 = *plVar1;
          uVar10 = *(int64_t *)(param_1 + 0x460) - lVar3 >> 3;
          uVar5 = uVar13;
          uVar9 = uVar13;
          if (uVar10 != 0) {
            do {
              if (lVar2 == *(int64_t *)(lVar3 + uVar5 * 8)) goto LAB_18038cff2;
              uVar8 = (int)uVar9 + 1;
              uVar9 = (uint64_t)uVar8;
              uVar5 = uVar5 + 1;
            } while ((uint64_t)(int64_t)(int)uVar8 < uVar10);
          }
          uVar5 = 0xffffffffffffffff;
LAB_18038cff2:
          uVar6 = (uint64_t)((int)uVar6 + 1);
          uVar4 = *(uint64_t *)(lVar3 + uVar5 * 8);
          *(uint64_t *)(lVar3 + uVar5 * 8) = *(uint64_t *)(lVar14 + lVar3);
          *(uint64_t *)(lVar14 + lVar3) = uVar4;
          lVar14 = lVar14 + -8;
        }
      }
      iVar12 = (int)uVar6;
      uVar8 = (int)uVar7 + 1;
      uVar7 = (uint64_t)uVar8;
      plVar11 = plVar11 + 1;
    } while ((int)uVar8 < (int)(uint)*(byte *)(param_2 + 0xa8));
  }
  if (iVar12 < 1) {
    if (0 < iVar12) {
      FUN_180057340(plVar1,(int64_t)(iVar15 - iVar12));
    }
    return;
  }
                    // WARNING: Subroutine does not return
  SystemParameterHandler(system_message_context,&processed_var_5352_ptr);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18038cf5d(uint64_t param_1,int64_t param_2)
void FUN_18038cf5d(uint64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t unaff_RBX;
  uint64_t uVar5;
  int64_t *unaff_RSI;
  uint64_t uVar6;
  uint uVar7;
  uint64_t uVar9;
  int64_t *plVar10;
  int iVar11;
  uint64_t uVar12;
  int64_t lVar13;
  int unaff_R15D;
  uint64_t uVar8;
  
  uVar12 = 0;
  iVar11 = 0;
  if (*(char *)(param_2 + 0xa8) != '\0') {
    plVar10 = (int64_t *)(param_2 + 0x60);
    lVar13 = (int64_t)unaff_R15D * 8 + -8;
    uVar5 = uVar12;
    uVar6 = uVar12;
    do {
      lVar1 = *plVar10;
      if (lVar1 != 0) {
        if (*(int64_t *)(lVar1 + 0x10) == unaff_RBX) {
          *(uint64_t *)(lVar1 + 0x10) = *(uint64_t *)(lVar1 + 0x18);
LAB_18038cfae:
          *(char *)(lVar1 + 0x20) = *(char *)(lVar1 + 0x20) + -1;
          *(uint64_t *)(lVar1 + 0x18) = 0;
        }
        else if (*(int64_t *)(lVar1 + 0x18) == unaff_RBX) goto LAB_18038cfae;
        *plVar10 = 0;
        if (*(char *)(lVar1 + 0x20) == '\0') {
          lVar2 = *unaff_RSI;
          uVar9 = unaff_RSI[1] - lVar2 >> 3;
          uVar4 = uVar12;
          uVar8 = uVar12;
          if (uVar9 != 0) {
            do {
              if (lVar1 == *(int64_t *)(lVar2 + uVar4 * 8)) goto LAB_18038cff2;
              uVar7 = (int)uVar8 + 1;
              uVar8 = (uint64_t)uVar7;
              uVar4 = uVar4 + 1;
            } while ((uint64_t)(int64_t)(int)uVar7 < uVar9);
          }
          uVar4 = 0xffffffffffffffff;
LAB_18038cff2:
          uVar5 = (uint64_t)((int)uVar5 + 1);
          uVar3 = *(uint64_t *)(lVar2 + uVar4 * 8);
          *(uint64_t *)(lVar2 + uVar4 * 8) = *(uint64_t *)(lVar13 + lVar2);
          *(uint64_t *)(lVar13 + lVar2) = uVar3;
          lVar13 = lVar13 + -8;
        }
      }
      iVar11 = (int)uVar5;
      uVar7 = (int)uVar6 + 1;
      uVar6 = (uint64_t)uVar7;
      plVar10 = plVar10 + 1;
    } while ((int)uVar7 < (int)(uint)*(byte *)(unaff_RBX + 0xa8));
  }
  if (iVar11 < 1) {
    if (0 < iVar11) {
      FUN_180057340();
    }
    return;
  }
                    // WARNING: Subroutine does not return
  SystemParameterHandler(system_message_context,&processed_var_5352_ptr);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18038cf7b(uint64_t param_1,int64_t param_2)
void FUN_18038cf7b(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t unaff_RBX;
  int unaff_EBP;
  int64_t *unaff_RSI;
  int unaff_EDI;
  uint uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  int64_t unaff_R12;
  uint64_t unaff_R13;
  int64_t lVar9;
  
  puVar8 = (uint64_t *)(param_2 + 0x60);
  lVar9 = unaff_R12 * 8 + -8;
  do {
    uVar1 = *puVar8;
    if (uVar1 != 0) {
      if (*(int64_t *)(uVar1 + 0x10) == unaff_RBX) {
        *(uint64_t *)(uVar1 + 0x10) = *(uint64_t *)(uVar1 + 0x18);
LAB_18038cfae:
        *(char *)(uVar1 + 0x20) = *(char *)(uVar1 + 0x20) + -1;
        *(uint64_t *)(uVar1 + 0x18) = unaff_R13;
      }
      else if (*(int64_t *)(uVar1 + 0x18) == unaff_RBX) goto LAB_18038cfae;
      *puVar8 = unaff_R13;
      if (*(char *)(uVar1 + 0x20) == (char)unaff_R13) {
        lVar2 = *unaff_RSI;
        uVar6 = unaff_R13 & 0xffffffff;
        uVar7 = unaff_RSI[1] - lVar2 >> 3;
        uVar4 = unaff_R13;
        if (uVar7 != 0) {
          do {
            if (uVar1 == *(uint64_t *)(lVar2 + uVar4 * 8)) goto LAB_18038cff2;
            uVar5 = (int)uVar6 + 1;
            uVar6 = (uint64_t)uVar5;
            uVar4 = uVar4 + 1;
          } while ((uint64_t)(int64_t)(int)uVar5 < uVar7);
        }
        uVar4 = 0xffffffffffffffff;
LAB_18038cff2:
        unaff_EBP = unaff_EBP + 1;
        uVar3 = *(uint64_t *)(lVar2 + uVar4 * 8);
        *(uint64_t *)(lVar2 + uVar4 * 8) = *(uint64_t *)(lVar9 + lVar2);
        *(uint64_t *)(lVar9 + lVar2) = uVar3;
        lVar9 = lVar9 + -8;
      }
    }
    unaff_EDI = unaff_EDI + 1;
    puVar8 = puVar8 + 1;
    if ((int)(uint)*(byte *)(unaff_RBX + 0xa8) <= unaff_EDI) {
      if (0 < unaff_EBP) {
                    // WARNING: Subroutine does not return
        SystemParameterHandler(system_message_context,&processed_var_5352_ptr);
      }
      if (0 < unaff_EBP) {
        FUN_180057340();
      }
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18038d022(void)
void FUN_18038d022(void)

{
  int unaff_EBP;
  
  if (0 < unaff_EBP) {
                    // WARNING: Subroutine does not return
    SystemParameterHandler(system_message_context,&processed_var_5352_ptr);
  }
  if (0 < unaff_EBP) {
    FUN_180057340();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18038d02e(void)
void FUN_18038d02e(void)

{
                    // WARNING: Subroutine does not return
  SystemParameterHandler(system_message_context,&processed_var_5352_ptr);
}





// 函数: void FUN_18038d081(void)
void FUN_18038d081(void)

{
  FUN_180057340();
  return;
}



int8_t SystemCore_PerformanceMonitor(int64_t param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int8_t uVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_2[1];
  fVar9 = fVar1 - *(float *)(param_1 + 0xec);
  fVar2 = *param_2;
  fVar8 = fVar2 - *(float *)(param_1 + 0xe8);
  fVar8 = fVar9 * fVar9 + fVar8 * fVar8;
  if (fVar8 < *(float *)(param_1 + 0xa4) || fVar8 == *(float *)(param_1 + 0xa4)) {
    return 1;
  }
  if (fVar8 < *(float *)(param_1 + 0xa0) || fVar8 == *(float *)(param_1 + 0xa0)) {
    uVar7 = 0;
    fVar8 = **(float **)(param_1 + 0x80);
    fVar9 = (*(float **)(param_1 + 0x80))[1];
    fVar3 = **(float **)(param_1 + 0x88);
    fVar4 = (*(float **)(param_1 + 0x88))[1];
    if (-0.001 <= (fVar3 - fVar8) * (fVar1 - fVar9) - (fVar4 - fVar9) * (fVar2 - fVar8)) {
      fVar5 = **(float **)(param_1 + 0x90);
      fVar6 = (*(float **)(param_1 + 0x90))[1];
      if (-0.001 <= (fVar5 - fVar3) * (fVar1 - fVar4) - (fVar6 - fVar4) * (fVar2 - fVar3)) {
        if (*(char *)(param_1 + 0xa8) == '\x03') {
          if (-0.001 <= (fVar8 - fVar5) * (fVar1 - fVar6) - (fVar9 - fVar6) * (fVar2 - fVar5)) {
            uVar7 = 1;
          }
        }
        else {
          fVar3 = **(float **)(param_1 + 0x98);
          fVar4 = (*(float **)(param_1 + 0x98))[1];
          if (-0.001 <= (fVar3 - fVar5) * (fVar1 - fVar6) - (fVar4 - fVar6) * (fVar2 - fVar5)) {
            uVar7 = 0;
            if (-0.001 <= (fVar8 - fVar3) * (fVar1 - fVar4) - (fVar9 - fVar4) * (fVar2 - fVar3)) {
              uVar7 = 1;
            }
          }
        }
      }
    }
    return uVar7;
  }
  return 0;
}



int8_t FUN_18038d177(uint64_t param_1,int8_t param_2,int64_t param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int8_t unaff_10000049;
  float *in_R9;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  
  fVar1 = *in_R9;
  fVar2 = in_R9[1];
  if (unaff_XMM7_Da <=
      (fVar1 - unaff_XMM10_Da) * (in_XMM5_Da - unaff_XMM11_Da) -
      (fVar2 - unaff_XMM11_Da) * (unaff_XMM6_Da - unaff_XMM10_Da)) {
    if (*(char *)(param_3 + 0xa8) == '\x03') {
      if (unaff_XMM7_Da <=
          (param_4 - fVar1) * (in_XMM5_Da - fVar2) - (in_XMM4_Da - fVar2) * (unaff_XMM6_Da - fVar1))
      {
        param_2 = 1;
      }
    }
    else {
      fVar3 = **(float **)(param_3 + 0x98);
      fVar4 = (*(float **)(param_3 + 0x98))[1];
      if (unaff_XMM7_Da <=
          (fVar3 - fVar1) * (in_XMM5_Da - fVar2) - (fVar4 - fVar2) * (unaff_XMM6_Da - fVar1)) {
        param_2 = unaff_10000049;
        if (unaff_XMM7_Da <=
            (param_4 - fVar3) * (in_XMM5_Da - fVar4) -
            (in_XMM4_Da - fVar4) * (unaff_XMM6_Da - fVar3)) {
          param_2 = 1;
        }
      }
    }
  }
  return param_2;
}



int8_t FUN_18038d26d(uint64_t param_1,int8_t param_2)

{
  return param_2;
}



bool FUN_18038d290(uint64_t param_1,int64_t param_2,float param_3)

{
  char cVar1;
  float fVar2;
  
  cVar1 = SystemCore_PerformanceMonitor();
  if (cVar1 != '\0') {
    fVar2 = (float)func_0x00018038d2f0(param_1,param_2);
    return ABS(*(float *)(param_2 + 8) - fVar2) < param_3;
  }
  return false;
}



float FUN_18038d440(int64_t param_1,float *param_2)

{
  float fVar1;
  byte bVar2;
  float *pfVar3;
  float *pfVar4;
  uint64_t uVar5;
  int iVar6;
  uint64_t *puVar7;
  float fVar8;
  uint64_t uVar9;
  float fVar10;
  float fVar11;
  int8_t auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fStack_c8;
  float fStack_c4;
  
  bVar2 = *(byte *)(param_1 + 0xa8);
  uVar5 = (uint64_t)(uint)bVar2;
  fVar17 = 3.4028235e+38;
  if (bVar2 != 0) {
    puVar7 = (uint64_t *)(param_1 + 0x80);
    iVar6 = 1;
    do {
      pfVar3 = (float *)*puVar7;
      fVar11 = *pfVar3;
      fVar1 = pfVar3[1];
      fVar8 = pfVar3[2];
      pfVar4 = *(float **)(param_1 + 0x80 + (int64_t)(iVar6 % (int)(uint)bVar2) * 8);
      fVar14 = *pfVar4 - fVar11;
      fVar15 = pfVar4[1] - fVar1;
      fVar16 = pfVar4[2] - fVar8;
      fVar18 = fVar15 * fVar15 + fVar14 * fVar14 + fVar16 * fVar16;
      auVar12 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
      fVar10 = auVar12._0_4_;
      fVar13 = fVar10 * 0.5 * (3.0 - fVar18 * fVar10 * fVar10);
      fVar10 = (param_2[1] - fVar1) * fVar15 * fVar13 + (*param_2 - fVar11) * fVar14 * fVar13 +
               (param_2[2] - fVar8) * fVar16 * fVar13;
      if (0.0 <= fVar10) {
        if (fVar10 <= fVar13 * fVar18) {
          fVar8 = fVar16 * fVar13 * fVar10 + fVar8;
          uVar9 = CONCAT44(fVar15 * fVar13 * fVar10 + fVar1,fVar14 * fVar13 * fVar10 + fVar11);
        }
        else {
          uVar9 = *(uint64_t *)pfVar4;
          fVar8 = pfVar4[2];
        }
      }
      else {
        uVar9 = *(uint64_t *)pfVar3;
        fVar8 = pfVar3[2];
      }
      fStack_c8 = (float)uVar9;
      fStack_c8 = *param_2 - fStack_c8;
      fStack_c4 = (float)((uint64_t)uVar9 >> 0x20);
      fStack_c4 = param_2[1] - fStack_c4;
      iVar6 = iVar6 + 1;
      fVar8 = param_2[2] - fVar8;
      puVar7 = puVar7 + 1;
      fVar11 = fStack_c8 * fStack_c8 + fStack_c4 * fStack_c4 + fVar8 * fVar8;
      if (fVar17 <= fVar11) {
        fVar11 = fVar17;
      }
      fVar17 = fVar11;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    return SQRT(fVar17);
  }
  return 1.8446743e+19;
}



float FUN_18038d46c(int64_t param_1,float *param_2,int64_t param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int64_t in_RAX;
  int unaff_EBX;
  int iVar6;
  uint64_t *puVar7;
  int64_t in_R11;
  float fVar8;
  uint64_t uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int8_t auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  int32_t unaff_XMM6_Da;
  float fVar17;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  float unaff_XMM7_Da;
  int32_t unaff_XMM8_Da;
  float fVar18;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  int32_t unaff_XMM12_Da;
  int32_t unaff_XMM12_Db;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM12_Dd;
  
  *(int32_t *)(in_RAX + -0x18) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x14) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x10) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0xc) = unaff_XMM6_Dd;
  puVar7 = (uint64_t *)(param_1 + 0x80);
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM8_Dd;
  iVar6 = 1;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM9_Dd;
  fVar1 = *param_2;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM10_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM10_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM10_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM10_Dd;
  fVar2 = param_2[1];
  *(int32_t *)(in_RAX + -0x68) = unaff_XMM11_Da;
  *(int32_t *)(in_RAX + -100) = unaff_XMM11_Db;
  *(int32_t *)(in_RAX + -0x60) = unaff_XMM11_Dc;
  *(int32_t *)(in_RAX + -0x5c) = unaff_XMM11_Dd;
  fVar3 = param_2[2];
  *(int32_t *)(in_RAX + -0x78) = unaff_XMM12_Da;
  *(int32_t *)(in_RAX + -0x74) = unaff_XMM12_Db;
  *(int32_t *)(in_RAX + -0x70) = unaff_XMM12_Dc;
  *(int32_t *)(in_RAX + -0x6c) = unaff_XMM12_Dd;
  do {
    pfVar4 = (float *)*puVar7;
    fVar10 = *pfVar4;
    fVar12 = pfVar4[1];
    fVar8 = pfVar4[2];
    pfVar5 = *(float **)(in_R11 + 0x80 + (int64_t)(iVar6 % unaff_EBX) * 8);
    fVar15 = *pfVar5 - fVar10;
    fVar16 = pfVar5[1] - fVar12;
    fVar17 = pfVar5[2] - fVar8;
    fVar18 = fVar16 * fVar16 + fVar15 * fVar15 + fVar17 * fVar17;
    auVar13 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
    fVar11 = auVar13._0_4_;
    fVar14 = fVar11 * 0.5 * (3.0 - fVar18 * fVar11 * fVar11);
    fVar11 = (fVar2 - fVar12) * fVar16 * fVar14 + (fVar1 - fVar10) * fVar15 * fVar14 +
             (fVar3 - fVar8) * fVar17 * fVar14;
    if (0.0 <= fVar11) {
      if (fVar11 <= fVar14 * fVar18) {
        fVar8 = fVar17 * fVar14 * fVar11 + fVar8;
        uVar9 = CONCAT44(fVar16 * fVar14 * fVar11 + fVar12,fVar15 * fVar14 * fVar11 + fVar10);
      }
      else {
        uVar9 = *(uint64_t *)pfVar5;
        fVar8 = pfVar5[2];
      }
    }
    else {
      uVar9 = *(uint64_t *)pfVar4;
      fVar8 = pfVar4[2];
    }
    fVar12 = fVar1 - (float)uVar9;
    fVar10 = fVar2 - (float)((uint64_t)uVar9 >> 0x20);
    iVar6 = iVar6 + 1;
    fVar8 = fVar3 - fVar8;
    puVar7 = puVar7 + 1;
    fVar10 = fVar12 * fVar12 + fVar10 * fVar10 + fVar8 * fVar8;
    if (unaff_XMM7_Da <= fVar10) {
      fVar10 = unaff_XMM7_Da;
    }
    unaff_XMM7_Da = fVar10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return SQRT(unaff_XMM7_Da);
}



float FUN_18038d686(void)

{
  float unaff_XMM7_Da;
  
  return SQRT(unaff_XMM7_Da);
}



float FUN_18038d6a0(int64_t param_1,float *param_2)

{
  float fVar1;
  byte bVar2;
  float *pfVar3;
  float *pfVar4;
  uint64_t uVar5;
  int iVar6;
  uint64_t *puVar7;
  float fVar8;
  uint64_t uVar9;
  float fVar10;
  float fVar11;
  int8_t auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fStack_c8;
  float fStack_c4;
  
  bVar2 = *(byte *)(param_1 + 0xa8);
  uVar5 = (uint64_t)(uint)bVar2;
  fVar17 = 3.4028235e+38;
  if (bVar2 != 0) {
    puVar7 = (uint64_t *)(param_1 + 0x80);
    iVar6 = 1;
    do {
      pfVar3 = (float *)*puVar7;
      fVar11 = *pfVar3;
      fVar1 = pfVar3[1];
      fVar8 = pfVar3[2];
      pfVar4 = *(float **)(param_1 + 0x80 + (int64_t)(iVar6 % (int)(uint)bVar2) * 8);
      fVar14 = *pfVar4 - fVar11;
      fVar15 = pfVar4[1] - fVar1;
      fVar16 = pfVar4[2] - fVar8;
      fVar18 = fVar15 * fVar15 + fVar14 * fVar14 + fVar16 * fVar16;
      auVar12 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
      fVar10 = auVar12._0_4_;
      fVar13 = fVar10 * 0.5 * (3.0 - fVar18 * fVar10 * fVar10);
      fVar10 = (param_2[1] - fVar1) * fVar15 * fVar13 + (*param_2 - fVar11) * fVar14 * fVar13 +
               (param_2[2] - fVar8) * fVar16 * fVar13;
      if (0.0 <= fVar10) {
        if (fVar10 <= fVar13 * fVar18) {
          fVar8 = fVar16 * fVar13 * fVar10 + fVar8;
          uVar9 = CONCAT44(fVar15 * fVar13 * fVar10 + fVar1,fVar14 * fVar13 * fVar10 + fVar11);
        }
        else {
          uVar9 = *(uint64_t *)pfVar4;
          fVar8 = pfVar4[2];
        }
      }
      else {
        uVar9 = *(uint64_t *)pfVar3;
        fVar8 = pfVar3[2];
      }
      fStack_c8 = (float)uVar9;
      fStack_c8 = *param_2 - fStack_c8;
      fStack_c4 = (float)((uint64_t)uVar9 >> 0x20);
      fStack_c4 = param_2[1] - fStack_c4;
      iVar6 = iVar6 + 1;
      fVar8 = param_2[2] - fVar8;
      puVar7 = puVar7 + 1;
      fVar11 = fStack_c8 * fStack_c8 + fStack_c4 * fStack_c4 + fVar8 * fVar8;
      if (fVar17 <= fVar11) {
        fVar11 = fVar17;
      }
      fVar17 = fVar11;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return fVar17;
}



float FUN_18038d6cc(int64_t param_1,float *param_2,int64_t param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int64_t in_RAX;
  int unaff_EBX;
  int iVar6;
  uint64_t *puVar7;
  int64_t in_R11;
  float fVar8;
  uint64_t uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int8_t auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  int32_t unaff_XMM6_Da;
  float fVar17;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  float unaff_XMM7_Da;
  int32_t unaff_XMM8_Da;
  float fVar18;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  int32_t unaff_XMM12_Da;
  int32_t unaff_XMM12_Db;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM12_Dd;
  
  *(int32_t *)(in_RAX + -0x18) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x14) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x10) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0xc) = unaff_XMM6_Dd;
  puVar7 = (uint64_t *)(param_1 + 0x80);
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM8_Dd;
  iVar6 = 1;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM9_Dd;
  fVar1 = *param_2;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM10_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM10_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM10_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM10_Dd;
  fVar2 = param_2[1];
  *(int32_t *)(in_RAX + -0x68) = unaff_XMM11_Da;
  *(int32_t *)(in_RAX + -100) = unaff_XMM11_Db;
  *(int32_t *)(in_RAX + -0x60) = unaff_XMM11_Dc;
  *(int32_t *)(in_RAX + -0x5c) = unaff_XMM11_Dd;
  fVar3 = param_2[2];
  *(int32_t *)(in_RAX + -0x78) = unaff_XMM12_Da;
  *(int32_t *)(in_RAX + -0x74) = unaff_XMM12_Db;
  *(int32_t *)(in_RAX + -0x70) = unaff_XMM12_Dc;
  *(int32_t *)(in_RAX + -0x6c) = unaff_XMM12_Dd;
  do {
    pfVar4 = (float *)*puVar7;
    fVar10 = *pfVar4;
    fVar12 = pfVar4[1];
    fVar8 = pfVar4[2];
    pfVar5 = *(float **)(in_R11 + 0x80 + (int64_t)(iVar6 % unaff_EBX) * 8);
    fVar15 = *pfVar5 - fVar10;
    fVar16 = pfVar5[1] - fVar12;
    fVar17 = pfVar5[2] - fVar8;
    fVar18 = fVar16 * fVar16 + fVar15 * fVar15 + fVar17 * fVar17;
    auVar13 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
    fVar11 = auVar13._0_4_;
    fVar14 = fVar11 * 0.5 * (3.0 - fVar18 * fVar11 * fVar11);
    fVar11 = (fVar2 - fVar12) * fVar16 * fVar14 + (fVar1 - fVar10) * fVar15 * fVar14 +
             (fVar3 - fVar8) * fVar17 * fVar14;
    if (0.0 <= fVar11) {
      if (fVar11 <= fVar14 * fVar18) {
        fVar8 = fVar17 * fVar14 * fVar11 + fVar8;
        uVar9 = CONCAT44(fVar16 * fVar14 * fVar11 + fVar12,fVar15 * fVar14 * fVar11 + fVar10);
      }
      else {
        uVar9 = *(uint64_t *)pfVar5;
        fVar8 = pfVar5[2];
      }
    }
    else {
      uVar9 = *(uint64_t *)pfVar4;
      fVar8 = pfVar4[2];
    }
    fVar12 = fVar1 - (float)uVar9;
    fVar10 = fVar2 - (float)((uint64_t)uVar9 >> 0x20);
    iVar6 = iVar6 + 1;
    fVar8 = fVar3 - fVar8;
    puVar7 = puVar7 + 1;
    fVar10 = fVar12 * fVar12 + fVar10 * fVar10 + fVar8 * fVar8;
    if (unaff_XMM7_Da <= fVar10) {
      fVar10 = unaff_XMM7_Da;
    }
    unaff_XMM7_Da = fVar10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return unaff_XMM7_Da;
}





