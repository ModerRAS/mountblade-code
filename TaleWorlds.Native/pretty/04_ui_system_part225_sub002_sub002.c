#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part225_sub002_sub002.c - 1 个函数

// 函数: void FUN_180798860(void)
void FUN_180798860(void)

{
                    // WARNING: Subroutine does not return
  memset(0x180c114d4,0,0x5c);
}



uint64_t
FUN_1807989b0(longlong param_1,uint param_2,uint64_t param_3,longlong param_4,uint64_t param_5,
             int param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar8 = (ulonglong)param_2;
  if (param_6 == 1) {
    if (param_4 != 0) {
      **(int32_t **)(param_4 + 8) = 1;
      return 0;
    }
  }
  else {
    uVar4 = 0;
    uVar1 = **(uint **)(param_4 + 8);
    fVar10 = *(float *)(param_1 + 0x23c);
    iVar3 = *(int *)(param_1 + 0x234);
    pfVar7 = (float *)**(uint64_t **)(param_4 + 0x18);
    iVar2 = *(int *)(param_1 + 0x218);
    if (*(int *)(param_1 + 0x218) != iVar3) {
      *(int *)(param_1 + 0x218) = iVar3;
      *(int32_t *)(param_1 + 0x220) = 0;
      iVar2 = iVar3;
    }
    if (1 < uVar1) {
                    // WARNING: Subroutine does not return
      memset(pfVar7,0,(ulonglong)(uVar1 * param_2) << 2);
    }
    switch(iVar2) {
    case 0:
      if (param_2 != 0) {
        do {
          fVar11 = (float)sinf();
          *pfVar7 = fVar11;
          fVar11 = fVar10 * 6.2831855 + *(float *)(param_1 + 0x220);
          *(float *)(param_1 + 0x220) = fVar11;
          if (6.2831855 <= fVar11) {
            *(float *)(param_1 + 0x220) = fVar11 - 6.2831855;
          }
          pfVar7 = pfVar7 + uVar1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      break;
    case 1:
      if (3 < param_2) {
        uVar4 = (param_2 - 4 >> 2) + 1;
        uVar8 = (ulonglong)uVar4;
        uVar4 = uVar4 * 4;
        do {
          *pfVar7 = (float)*(int *)(param_1 + 0x21c);
          fVar11 = fVar10 + *(float *)(param_1 + 0x220);
          iVar3 = *(int *)(param_1 + 0x21c);
          *(float *)(param_1 + 0x220) = fVar11;
          if (1.0 <= fVar11) {
            iVar3 = -iVar3;
            *(int *)(param_1 + 0x21c) = iVar3;
            *(float *)(param_1 + 0x220) = fVar11 - 1.0;
          }
          pfVar7 = pfVar7 + uVar1;
          *pfVar7 = (float)iVar3;
          fVar11 = fVar10 + *(float *)(param_1 + 0x220);
          *(float *)(param_1 + 0x220) = fVar11;
          if (1.0 <= fVar11) {
            *(int *)(param_1 + 0x21c) = -*(int *)(param_1 + 0x21c);
            *(float *)(param_1 + 0x220) = fVar11 - 1.0;
          }
          pfVar7 = pfVar7 + uVar1;
          *pfVar7 = (float)*(int *)(param_1 + 0x21c);
          fVar11 = fVar10 + *(float *)(param_1 + 0x220);
          *(float *)(param_1 + 0x220) = fVar11;
          if (1.0 <= fVar11) {
            *(int *)(param_1 + 0x21c) = -*(int *)(param_1 + 0x21c);
            *(float *)(param_1 + 0x220) = fVar11 - 1.0;
          }
          pfVar7[uVar1] = (float)*(int *)(param_1 + 0x21c);
          fVar11 = fVar10 + *(float *)(param_1 + 0x220);
          *(float *)(param_1 + 0x220) = fVar11;
          if (1.0 <= fVar11) {
            *(int *)(param_1 + 0x21c) = -*(int *)(param_1 + 0x21c);
            *(float *)(param_1 + 0x220) = fVar11 - 1.0;
          }
          pfVar7 = pfVar7 + uVar1 + uVar1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (uVar4 < param_2) {
        uVar8 = (ulonglong)(param_2 - uVar4);
        do {
          *pfVar7 = (float)*(int *)(param_1 + 0x21c);
          fVar11 = fVar10 + *(float *)(param_1 + 0x220);
          *(float *)(param_1 + 0x220) = fVar11;
          if (1.0 <= fVar11) {
            *(int *)(param_1 + 0x21c) = -*(int *)(param_1 + 0x21c);
            *(float *)(param_1 + 0x220) = fVar11 - 1.0;
          }
          pfVar7 = pfVar7 + uVar1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      break;
    case 2:
      if (3 < param_2) {
        fVar11 = *(float *)(param_1 + 0x220);
        uVar4 = (param_2 - 4 >> 2) + 1;
        uVar8 = (ulonglong)uVar4;
        uVar4 = uVar4 * 4;
        do {
          *pfVar7 = (fVar11 + fVar11) - 1.0;
          fVar11 = fVar10 + *(float *)(param_1 + 0x220);
          *(float *)(param_1 + 0x220) = fVar11;
          if (1.0 <= fVar11) {
            fVar11 = fVar11 - 1.0;
            *(float *)(param_1 + 0x220) = fVar11;
          }
          pfVar7 = pfVar7 + uVar1;
          *pfVar7 = (fVar11 + fVar11) - 1.0;
          fVar11 = fVar10 + *(float *)(param_1 + 0x220);
          *(float *)(param_1 + 0x220) = fVar11;
          if (1.0 <= fVar11) {
            fVar11 = fVar11 - 1.0;
            *(float *)(param_1 + 0x220) = fVar11;
          }
          pfVar7 = pfVar7 + uVar1;
          *pfVar7 = (fVar11 + fVar11) - 1.0;
          fVar11 = fVar10 + *(float *)(param_1 + 0x220);
          *(float *)(param_1 + 0x220) = fVar11;
          if (1.0 <= fVar11) {
            fVar11 = fVar11 - 1.0;
            *(float *)(param_1 + 0x220) = fVar11;
          }
          pfVar7[uVar1] = (fVar11 + fVar11) - 1.0;
          fVar11 = fVar10 + *(float *)(param_1 + 0x220);
          *(float *)(param_1 + 0x220) = fVar11;
          if (1.0 <= fVar11) {
            fVar11 = fVar11 - 1.0;
            *(float *)(param_1 + 0x220) = fVar11;
          }
          pfVar7 = pfVar7 + uVar1 + uVar1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (uVar4 < param_2) {
        uVar8 = (ulonglong)(param_2 - uVar4);
        do {
          *pfVar7 = (*(float *)(param_1 + 0x220) + *(float *)(param_1 + 0x220)) - 1.0;
          fVar11 = fVar10 + *(float *)(param_1 + 0x220);
          *(float *)(param_1 + 0x220) = fVar11;
          if (1.0 <= fVar11) {
            *(float *)(param_1 + 0x220) = fVar11 - 1.0;
          }
          pfVar7 = pfVar7 + uVar1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      break;
    case 3:
      if (3 < param_2) {
        fVar11 = *(float *)(param_1 + 0x220);
        uVar4 = (param_2 - 4 >> 2) + 1;
        uVar8 = (ulonglong)uVar4;
        uVar4 = uVar4 * 4;
        do {
          *pfVar7 = 1.0 - (fVar11 + fVar11);
          fVar11 = fVar10 + *(float *)(param_1 + 0x220);
          *(float *)(param_1 + 0x220) = fVar11;
          if (1.0 <= fVar11) {
            fVar11 = fVar11 - 1.0;
            *(float *)(param_1 + 0x220) = fVar11;
          }
          pfVar7 = pfVar7 + uVar1;
          *pfVar7 = 1.0 - (fVar11 + fVar11);
          fVar11 = fVar10 + *(float *)(param_1 + 0x220);
          *(float *)(param_1 + 0x220) = fVar11;
          if (1.0 <= fVar11) {
            fVar11 = fVar11 - 1.0;
            *(float *)(param_1 + 0x220) = fVar11;
          }
          pfVar7 = pfVar7 + uVar1;
          *pfVar7 = 1.0 - (fVar11 + fVar11);
          fVar11 = fVar10 + *(float *)(param_1 + 0x220);
          *(float *)(param_1 + 0x220) = fVar11;
          if (1.0 <= fVar11) {
            fVar11 = fVar11 - 1.0;
            *(float *)(param_1 + 0x220) = fVar11;
          }
          pfVar7[uVar1] = 1.0 - (fVar11 + fVar11);
          fVar11 = fVar10 + *(float *)(param_1 + 0x220);
          *(float *)(param_1 + 0x220) = fVar11;
          if (1.0 <= fVar11) {
            fVar11 = fVar11 - 1.0;
            *(float *)(param_1 + 0x220) = fVar11;
          }
          pfVar7 = pfVar7 + uVar1 + uVar1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (uVar4 < param_2) {
        uVar8 = (ulonglong)(param_2 - uVar4);
        do {
          *pfVar7 = 1.0 - (*(float *)(param_1 + 0x220) + *(float *)(param_1 + 0x220));
          fVar11 = fVar10 + *(float *)(param_1 + 0x220);
          *(float *)(param_1 + 0x220) = fVar11;
          if (1.0 <= fVar11) {
            *(float *)(param_1 + 0x220) = fVar11 - 1.0;
          }
          pfVar7 = pfVar7 + uVar1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      break;
    case 4:
      if (3 < param_2) {
        fVar11 = *(float *)(param_1 + 0x220);
        uVar4 = (param_2 - 4 >> 2) + 1;
        uVar8 = (ulonglong)uVar4;
        uVar4 = uVar4 * 4;
        do {
          *pfVar7 = fVar11;
          fVar11 = (float)*(int *)(param_1 + 0x21c) * fVar10;
          fVar11 = fVar11 + fVar11 + *(float *)(param_1 + 0x220);
          *(float *)(param_1 + 0x220) = fVar11;
          if ((1.0 < fVar11) || (fVar11 < -1.0)) {
            iVar3 = -*(int *)(param_1 + 0x21c);
            *(int *)(param_1 + 0x21c) = iVar3;
            fVar9 = (float)iVar3 * fVar10;
            fVar11 = fVar11 + fVar9 + fVar9;
            *(float *)(param_1 + 0x220) = fVar11;
          }
          pfVar7 = pfVar7 + uVar1;
          *pfVar7 = fVar11;
          fVar11 = (float)*(int *)(param_1 + 0x21c) * fVar10;
          fVar11 = fVar11 + fVar11 + *(float *)(param_1 + 0x220);
          *(float *)(param_1 + 0x220) = fVar11;
          if ((1.0 < fVar11) || (fVar11 < -1.0)) {
            iVar3 = -*(int *)(param_1 + 0x21c);
            *(int *)(param_1 + 0x21c) = iVar3;
            fVar9 = (float)iVar3 * fVar10;
            fVar11 = fVar9 + fVar11 + fVar9;
            *(float *)(param_1 + 0x220) = fVar11;
          }
          pfVar7 = pfVar7 + uVar1;
          *pfVar7 = fVar11;
          fVar11 = (float)*(int *)(param_1 + 0x21c) * fVar10;
          fVar11 = fVar11 + fVar11 + *(float *)(param_1 + 0x220);
          *(float *)(param_1 + 0x220) = fVar11;
          if ((1.0 < fVar11) || (fVar11 < -1.0)) {
            iVar3 = -*(int *)(param_1 + 0x21c);
            *(int *)(param_1 + 0x21c) = iVar3;
            fVar9 = (float)iVar3 * fVar10;
            fVar11 = fVar9 + fVar11 + fVar9;
            *(float *)(param_1 + 0x220) = fVar11;
          }
          pfVar7[uVar1] = fVar11;
          fVar11 = (float)*(int *)(param_1 + 0x21c) * fVar10;
          fVar11 = fVar11 + fVar11 + *(float *)(param_1 + 0x220);
          *(float *)(param_1 + 0x220) = fVar11;
          if ((1.0 < fVar11) || (fVar11 < -1.0)) {
            iVar3 = -*(int *)(param_1 + 0x21c);
            *(int *)(param_1 + 0x21c) = iVar3;
            fVar9 = (float)iVar3 * fVar10;
            fVar11 = fVar11 + fVar9 + fVar9;
            *(float *)(param_1 + 0x220) = fVar11;
          }
          pfVar7 = pfVar7 + uVar1 + uVar1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (uVar4 < param_2) {
        fVar11 = *(float *)(param_1 + 0x220);
        uVar8 = (ulonglong)(param_2 - uVar4);
        do {
          *pfVar7 = fVar11;
          fVar11 = (float)*(int *)(param_1 + 0x21c) * fVar10;
          fVar11 = fVar11 + fVar11 + *(float *)(param_1 + 0x220);
          *(float *)(param_1 + 0x220) = fVar11;
          if ((1.0 < fVar11) || (fVar11 < -1.0)) {
            iVar3 = -*(int *)(param_1 + 0x21c);
            *(int *)(param_1 + 0x21c) = iVar3;
            fVar9 = (float)iVar3 * fVar10;
            fVar11 = fVar11 + fVar9 + fVar9;
            *(float *)(param_1 + 0x220) = fVar11;
          }
          pfVar7 = pfVar7 + uVar1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      break;
    case 5:
      if (3 < param_2) {
        uVar4 = (param_2 - 4 >> 2) + 1;
        uVar8 = (ulonglong)uVar4;
        uVar4 = uVar4 * 4;
        do {
          uVar5 = *(uint *)(param_1 + 0x224) << 0xb ^ *(uint *)(param_1 + 0x224);
          *(int32_t *)(param_1 + 0x224) = *(int32_t *)(param_1 + 0x228);
          *(int32_t *)(param_1 + 0x228) = *(int32_t *)(param_1 + 0x22c);
          uVar6 = *(uint *)(param_1 + 0x230);
          *(uint *)(param_1 + 0x22c) = uVar6;
          uVar5 = (uVar6 >> 0xb ^ uVar5) >> 8 ^ uVar6 ^ uVar5;
          *(uint *)(param_1 + 0x230) = uVar5;
          fVar10 = (float)(uVar5 & 0x7fffffff) * 4.656613e-10;
          *pfVar7 = (fVar10 + fVar10) - 1.0;
          pfVar7 = pfVar7 + uVar1;
          uVar5 = *(uint *)(param_1 + 0x224) << 0xb ^ *(uint *)(param_1 + 0x224);
          *(int32_t *)(param_1 + 0x224) = *(int32_t *)(param_1 + 0x228);
          *(int32_t *)(param_1 + 0x228) = *(int32_t *)(param_1 + 0x22c);
          uVar6 = *(uint *)(param_1 + 0x230);
          *(uint *)(param_1 + 0x22c) = uVar6;
          uVar5 = (uVar6 >> 0xb ^ uVar5) >> 8 ^ uVar6 ^ uVar5;
          *(uint *)(param_1 + 0x230) = uVar5;
          fVar10 = (float)(uVar5 & 0x7fffffff) * 4.656613e-10;
          *pfVar7 = (fVar10 + fVar10) - 1.0;
          pfVar7 = pfVar7 + uVar1;
          uVar5 = *(uint *)(param_1 + 0x224) << 0xb ^ *(uint *)(param_1 + 0x224);
          *(int32_t *)(param_1 + 0x224) = *(int32_t *)(param_1 + 0x228);
          *(int32_t *)(param_1 + 0x228) = *(int32_t *)(param_1 + 0x22c);
          uVar6 = *(uint *)(param_1 + 0x230);
          *(uint *)(param_1 + 0x22c) = uVar6;
          uVar5 = (uVar6 >> 0xb ^ uVar5) >> 8 ^ uVar6 ^ uVar5;
          *(uint *)(param_1 + 0x230) = uVar5;
          fVar10 = (float)(uVar5 & 0x7fffffff) * 4.656613e-10;
          *pfVar7 = (fVar10 + fVar10) - 1.0;
          uVar5 = *(uint *)(param_1 + 0x224) << 0xb ^ *(uint *)(param_1 + 0x224);
          *(int32_t *)(param_1 + 0x224) = *(int32_t *)(param_1 + 0x228);
          *(int32_t *)(param_1 + 0x228) = *(int32_t *)(param_1 + 0x22c);
          uVar6 = *(uint *)(param_1 + 0x230);
          *(uint *)(param_1 + 0x22c) = uVar6;
          uVar5 = (uVar6 >> 0xb ^ uVar5) >> 8 ^ uVar6 ^ uVar5;
          *(uint *)(param_1 + 0x230) = uVar5;
          fVar10 = (float)(uVar5 & 0x7fffffff) * 4.656613e-10;
          pfVar7[uVar1] = (fVar10 + fVar10) - 1.0;
          pfVar7 = pfVar7 + uVar1 + uVar1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (uVar4 < param_2) {
        uVar8 = (ulonglong)(param_2 - uVar4);
        do {
          uVar6 = *(uint *)(param_1 + 0x224) << 0xb ^ *(uint *)(param_1 + 0x224);
          *(int32_t *)(param_1 + 0x224) = *(int32_t *)(param_1 + 0x228);
          *(int32_t *)(param_1 + 0x228) = *(int32_t *)(param_1 + 0x22c);
          uVar4 = *(uint *)(param_1 + 0x230);
          *(uint *)(param_1 + 0x22c) = uVar4;
          uVar6 = (uVar4 >> 0xb ^ uVar6) >> 8 ^ uVar4 ^ uVar6;
          *(uint *)(param_1 + 0x230) = uVar6;
          fVar10 = (float)(uVar6 & 0x7fffffff) * 4.656613e-10;
          *pfVar7 = (fVar10 + fVar10) - 1.0;
          pfVar7 = pfVar7 + uVar1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
  }
  return 0;
}



uint64_t FUN_1807989ea(longlong param_1,uint64_t param_2,uint64_t param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *in_RAX;
  uint uVar6;
  uint uVar7;
  longlong unaff_RBX;
  longlong unaff_RSI;
  float *pfVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar5 = 0;
  uVar1 = *in_RAX;
  fVar11 = *(float *)(param_1 + 0x23c);
  iVar4 = *(int *)(param_1 + 0x234);
  pfVar8 = (float *)**(uint64_t **)(param_4 + 0x18);
  iVar3 = *(int *)(unaff_RBX + 0x218);
  if (*(int *)(unaff_RBX + 0x218) != iVar4) {
    *(int *)(unaff_RBX + 0x218) = iVar4;
    *(int32_t *)(unaff_RBX + 0x220) = 0;
    iVar3 = iVar4;
  }
  uVar7 = (uint)unaff_RSI;
  if (uVar1 < 2) {
    switch(iVar3) {
    case 0:
      if (uVar7 != 0) {
        do {
          fVar12 = (float)sinf();
          *pfVar8 = fVar12;
          fVar12 = fVar11 * 6.2831855 + *(float *)(unaff_RBX + 0x220);
          *(float *)(unaff_RBX + 0x220) = fVar12;
          if (6.2831855 <= fVar12) {
            *(float *)(unaff_RBX + 0x220) = fVar12 - 6.2831855;
          }
          pfVar8 = pfVar8 + uVar1;
          unaff_RSI = unaff_RSI + -1;
        } while (unaff_RSI != 0);
      }
      break;
    case 1:
      if (3 < uVar7) {
        uVar5 = (uVar7 - 4 >> 2) + 1;
        uVar9 = (ulonglong)uVar5;
        uVar5 = uVar5 * 4;
        do {
          *pfVar8 = (float)*(int *)(unaff_RBX + 0x21c);
          fVar12 = fVar11 + *(float *)(unaff_RBX + 0x220);
          iVar4 = *(int *)(unaff_RBX + 0x21c);
          *(float *)(unaff_RBX + 0x220) = fVar12;
          if (1.0 <= fVar12) {
            iVar4 = -iVar4;
            *(int *)(unaff_RBX + 0x21c) = iVar4;
            *(float *)(unaff_RBX + 0x220) = fVar12 - 1.0;
          }
          pfVar8 = pfVar8 + uVar1;
          *pfVar8 = (float)iVar4;
          fVar12 = fVar11 + *(float *)(unaff_RBX + 0x220);
          *(float *)(unaff_RBX + 0x220) = fVar12;
          if (1.0 <= fVar12) {
            *(int *)(unaff_RBX + 0x21c) = -*(int *)(unaff_RBX + 0x21c);
            *(float *)(unaff_RBX + 0x220) = fVar12 - 1.0;
          }
          pfVar8 = pfVar8 + uVar1;
          *pfVar8 = (float)*(int *)(unaff_RBX + 0x21c);
          fVar12 = fVar11 + *(float *)(unaff_RBX + 0x220);
          *(float *)(unaff_RBX + 0x220) = fVar12;
          if (1.0 <= fVar12) {
            *(int *)(unaff_RBX + 0x21c) = -*(int *)(unaff_RBX + 0x21c);
            *(float *)(unaff_RBX + 0x220) = fVar12 - 1.0;
          }
          pfVar8[uVar1] = (float)*(int *)(unaff_RBX + 0x21c);
          fVar12 = fVar11 + *(float *)(unaff_RBX + 0x220);
          *(float *)(unaff_RBX + 0x220) = fVar12;
          if (1.0 <= fVar12) {
            *(int *)(unaff_RBX + 0x21c) = -*(int *)(unaff_RBX + 0x21c);
            *(float *)(unaff_RBX + 0x220) = fVar12 - 1.0;
          }
          pfVar8 = pfVar8 + uVar1 + uVar1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if (uVar5 < uVar7) {
        uVar9 = (ulonglong)(uVar7 - uVar5);
        do {
          *pfVar8 = (float)*(int *)(unaff_RBX + 0x21c);
          fVar12 = fVar11 + *(float *)(unaff_RBX + 0x220);
          *(float *)(unaff_RBX + 0x220) = fVar12;
          if (1.0 <= fVar12) {
            *(int *)(unaff_RBX + 0x21c) = -*(int *)(unaff_RBX + 0x21c);
            *(float *)(unaff_RBX + 0x220) = fVar12 - 1.0;
          }
          pfVar8 = pfVar8 + uVar1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      break;
    case 2:
      if (3 < uVar7) {
        fVar12 = *(float *)(unaff_RBX + 0x220);
        uVar5 = (uVar7 - 4 >> 2) + 1;
        uVar9 = (ulonglong)uVar5;
        uVar5 = uVar5 * 4;
        do {
          *pfVar8 = (fVar12 + fVar12) - 1.0;
          fVar12 = fVar11 + *(float *)(unaff_RBX + 0x220);
          *(float *)(unaff_RBX + 0x220) = fVar12;
          if (1.0 <= fVar12) {
            fVar12 = fVar12 - 1.0;
            *(float *)(unaff_RBX + 0x220) = fVar12;
          }
          pfVar8 = pfVar8 + uVar1;
          *pfVar8 = (fVar12 + fVar12) - 1.0;
          fVar12 = fVar11 + *(float *)(unaff_RBX + 0x220);
          *(float *)(unaff_RBX + 0x220) = fVar12;
          if (1.0 <= fVar12) {
            fVar12 = fVar12 - 1.0;
            *(float *)(unaff_RBX + 0x220) = fVar12;
          }
          pfVar8 = pfVar8 + uVar1;
          *pfVar8 = (fVar12 + fVar12) - 1.0;
          fVar12 = fVar11 + *(float *)(unaff_RBX + 0x220);
          *(float *)(unaff_RBX + 0x220) = fVar12;
          if (1.0 <= fVar12) {
            fVar12 = fVar12 - 1.0;
            *(float *)(unaff_RBX + 0x220) = fVar12;
          }
          pfVar8[uVar1] = (fVar12 + fVar12) - 1.0;
          fVar12 = fVar11 + *(float *)(unaff_RBX + 0x220);
          *(float *)(unaff_RBX + 0x220) = fVar12;
          if (1.0 <= fVar12) {
            fVar12 = fVar12 - 1.0;
            *(float *)(unaff_RBX + 0x220) = fVar12;
          }
          pfVar8 = pfVar8 + uVar1 + uVar1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if (uVar5 < uVar7) {
        uVar9 = (ulonglong)(uVar7 - uVar5);
        do {
          *pfVar8 = (*(float *)(unaff_RBX + 0x220) + *(float *)(unaff_RBX + 0x220)) - 1.0;
          fVar12 = fVar11 + *(float *)(unaff_RBX + 0x220);
          *(float *)(unaff_RBX + 0x220) = fVar12;
          if (1.0 <= fVar12) {
            *(float *)(unaff_RBX + 0x220) = fVar12 - 1.0;
          }
          pfVar8 = pfVar8 + uVar1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      break;
    case 3:
      if (3 < uVar7) {
        fVar12 = *(float *)(unaff_RBX + 0x220);
        uVar5 = (uVar7 - 4 >> 2) + 1;
        uVar9 = (ulonglong)uVar5;
        uVar5 = uVar5 * 4;
        do {
          *pfVar8 = 1.0 - (fVar12 + fVar12);
          fVar12 = fVar11 + *(float *)(unaff_RBX + 0x220);
          *(float *)(unaff_RBX + 0x220) = fVar12;
          if (1.0 <= fVar12) {
            fVar12 = fVar12 - 1.0;
            *(float *)(unaff_RBX + 0x220) = fVar12;
          }
          pfVar8 = pfVar8 + uVar1;
          *pfVar8 = 1.0 - (fVar12 + fVar12);
          fVar12 = fVar11 + *(float *)(unaff_RBX + 0x220);
          *(float *)(unaff_RBX + 0x220) = fVar12;
          if (1.0 <= fVar12) {
            fVar12 = fVar12 - 1.0;
            *(float *)(unaff_RBX + 0x220) = fVar12;
          }
          pfVar8 = pfVar8 + uVar1;
          *pfVar8 = 1.0 - (fVar12 + fVar12);
          fVar12 = fVar11 + *(float *)(unaff_RBX + 0x220);
          *(float *)(unaff_RBX + 0x220) = fVar12;
          if (1.0 <= fVar12) {
            fVar12 = fVar12 - 1.0;
            *(float *)(unaff_RBX + 0x220) = fVar12;
          }
          pfVar8[uVar1] = 1.0 - (fVar12 + fVar12);
          fVar12 = fVar11 + *(float *)(unaff_RBX + 0x220);
          *(float *)(unaff_RBX + 0x220) = fVar12;
          if (1.0 <= fVar12) {
            fVar12 = fVar12 - 1.0;
            *(float *)(unaff_RBX + 0x220) = fVar12;
          }
          pfVar8 = pfVar8 + uVar1 + uVar1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if (uVar5 < uVar7) {
        uVar9 = (ulonglong)(uVar7 - uVar5);
        do {
          *pfVar8 = 1.0 - (*(float *)(unaff_RBX + 0x220) + *(float *)(unaff_RBX + 0x220));
          fVar12 = fVar11 + *(float *)(unaff_RBX + 0x220);
          *(float *)(unaff_RBX + 0x220) = fVar12;
          if (1.0 <= fVar12) {
            *(float *)(unaff_RBX + 0x220) = fVar12 - 1.0;
          }
          pfVar8 = pfVar8 + uVar1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      break;
    case 4:
      if (3 < uVar7) {
        fVar12 = *(float *)(unaff_RBX + 0x220);
        uVar5 = (uVar7 - 4 >> 2) + 1;
        uVar9 = (ulonglong)uVar5;
        uVar5 = uVar5 * 4;
        do {
          *pfVar8 = fVar12;
          fVar12 = (float)*(int *)(unaff_RBX + 0x21c) * fVar11;
          fVar12 = fVar12 + fVar12 + *(float *)(unaff_RBX + 0x220);
          *(float *)(unaff_RBX + 0x220) = fVar12;
          if ((1.0 < fVar12) || (fVar12 < -1.0)) {
            iVar4 = -*(int *)(unaff_RBX + 0x21c);
            *(int *)(unaff_RBX + 0x21c) = iVar4;
            fVar10 = (float)iVar4 * fVar11;
            fVar12 = fVar12 + fVar10 + fVar10;
            *(float *)(unaff_RBX + 0x220) = fVar12;
          }
          pfVar8 = pfVar8 + uVar1;
          *pfVar8 = fVar12;
          fVar12 = (float)*(int *)(unaff_RBX + 0x21c) * fVar11;
          fVar12 = fVar12 + fVar12 + *(float *)(unaff_RBX + 0x220);
          *(float *)(unaff_RBX + 0x220) = fVar12;
          if ((1.0 < fVar12) || (fVar12 < -1.0)) {
            iVar4 = -*(int *)(unaff_RBX + 0x21c);
            *(int *)(unaff_RBX + 0x21c) = iVar4;
            fVar10 = (float)iVar4 * fVar11;
            fVar12 = fVar10 + fVar12 + fVar10;
            *(float *)(unaff_RBX + 0x220) = fVar12;
          }
          pfVar8 = pfVar8 + uVar1;
          *pfVar8 = fVar12;
          fVar12 = (float)*(int *)(unaff_RBX + 0x21c) * fVar11;
          fVar12 = fVar12 + fVar12 + *(float *)(unaff_RBX + 0x220);
          *(float *)(unaff_RBX + 0x220) = fVar12;
          if ((1.0 < fVar12) || (fVar12 < -1.0)) {
            iVar4 = -*(int *)(unaff_RBX + 0x21c);
            *(int *)(unaff_RBX + 0x21c) = iVar4;
            fVar10 = (float)iVar4 * fVar11;
            fVar12 = fVar10 + fVar12 + fVar10;
            *(float *)(unaff_RBX + 0x220) = fVar12;
          }
          pfVar8[uVar1] = fVar12;
          fVar12 = (float)*(int *)(unaff_RBX + 0x21c) * fVar11;
          fVar12 = fVar12 + fVar12 + *(float *)(unaff_RBX + 0x220);
          *(float *)(unaff_RBX + 0x220) = fVar12;
          if ((1.0 < fVar12) || (fVar12 < -1.0)) {
            iVar4 = -*(int *)(unaff_RBX + 0x21c);
            *(int *)(unaff_RBX + 0x21c) = iVar4;
            fVar10 = (float)iVar4 * fVar11;
            fVar12 = fVar12 + fVar10 + fVar10;
            *(float *)(unaff_RBX + 0x220) = fVar12;
          }
          pfVar8 = pfVar8 + uVar1 + uVar1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if (uVar5 < uVar7) {
        fVar12 = *(float *)(unaff_RBX + 0x220);
        uVar9 = (ulonglong)(uVar7 - uVar5);
        do {
          *pfVar8 = fVar12;
          fVar12 = (float)*(int *)(unaff_RBX + 0x21c) * fVar11;
          fVar12 = fVar12 + fVar12 + *(float *)(unaff_RBX + 0x220);
          *(float *)(unaff_RBX + 0x220) = fVar12;
          if ((1.0 < fVar12) || (fVar12 < -1.0)) {
            iVar4 = -*(int *)(unaff_RBX + 0x21c);
            *(int *)(unaff_RBX + 0x21c) = iVar4;
            fVar10 = (float)iVar4 * fVar11;
            fVar12 = fVar12 + fVar10 + fVar10;
            *(float *)(unaff_RBX + 0x220) = fVar12;
          }
          pfVar8 = pfVar8 + uVar1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      break;
    case 5:
      if (3 < uVar7) {
        uVar5 = (uVar7 - 4 >> 2) + 1;
        uVar9 = (ulonglong)uVar5;
        uVar5 = uVar5 * 4;
        do {
          uVar6 = *(uint *)(unaff_RBX + 0x224) << 0xb ^ *(uint *)(unaff_RBX + 0x224);
          *(int32_t *)(unaff_RBX + 0x224) = *(int32_t *)(unaff_RBX + 0x228);
          *(int32_t *)(unaff_RBX + 0x228) = *(int32_t *)(unaff_RBX + 0x22c);
          uVar2 = *(uint *)(unaff_RBX + 0x230);
          *(uint *)(unaff_RBX + 0x22c) = uVar2;
          uVar6 = (uVar2 >> 0xb ^ uVar6) >> 8 ^ uVar2 ^ uVar6;
          *(uint *)(unaff_RBX + 0x230) = uVar6;
          fVar11 = (float)(uVar6 & 0x7fffffff) * 4.656613e-10;
          *pfVar8 = (fVar11 + fVar11) - 1.0;
          pfVar8 = pfVar8 + uVar1;
          uVar6 = *(uint *)(unaff_RBX + 0x224) << 0xb ^ *(uint *)(unaff_RBX + 0x224);
          *(int32_t *)(unaff_RBX + 0x224) = *(int32_t *)(unaff_RBX + 0x228);
          *(int32_t *)(unaff_RBX + 0x228) = *(int32_t *)(unaff_RBX + 0x22c);
          uVar2 = *(uint *)(unaff_RBX + 0x230);
          *(uint *)(unaff_RBX + 0x22c) = uVar2;
          uVar6 = (uVar2 >> 0xb ^ uVar6) >> 8 ^ uVar2 ^ uVar6;
          *(uint *)(unaff_RBX + 0x230) = uVar6;
          fVar11 = (float)(uVar6 & 0x7fffffff) * 4.656613e-10;
          *pfVar8 = (fVar11 + fVar11) - 1.0;
          pfVar8 = pfVar8 + uVar1;
          uVar6 = *(uint *)(unaff_RBX + 0x224) << 0xb ^ *(uint *)(unaff_RBX + 0x224);
          *(int32_t *)(unaff_RBX + 0x224) = *(int32_t *)(unaff_RBX + 0x228);
          *(int32_t *)(unaff_RBX + 0x228) = *(int32_t *)(unaff_RBX + 0x22c);
          uVar2 = *(uint *)(unaff_RBX + 0x230);
          *(uint *)(unaff_RBX + 0x22c) = uVar2;
          uVar6 = (uVar2 >> 0xb ^ uVar6) >> 8 ^ uVar2 ^ uVar6;
          *(uint *)(unaff_RBX + 0x230) = uVar6;
          fVar11 = (float)(uVar6 & 0x7fffffff) * 4.656613e-10;
          *pfVar8 = (fVar11 + fVar11) - 1.0;
          uVar6 = *(uint *)(unaff_RBX + 0x224) << 0xb ^ *(uint *)(unaff_RBX + 0x224);
          *(int32_t *)(unaff_RBX + 0x224) = *(int32_t *)(unaff_RBX + 0x228);
          *(int32_t *)(unaff_RBX + 0x228) = *(int32_t *)(unaff_RBX + 0x22c);
          uVar2 = *(uint *)(unaff_RBX + 0x230);
          *(uint *)(unaff_RBX + 0x22c) = uVar2;
          uVar6 = (uVar2 >> 0xb ^ uVar6) >> 8 ^ uVar2 ^ uVar6;
          *(uint *)(unaff_RBX + 0x230) = uVar6;
          fVar11 = (float)(uVar6 & 0x7fffffff) * 4.656613e-10;
          pfVar8[uVar1] = (fVar11 + fVar11) - 1.0;
          pfVar8 = pfVar8 + uVar1 + uVar1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if (uVar5 < uVar7) {
        uVar9 = (ulonglong)(uVar7 - uVar5);
        do {
          uVar7 = *(uint *)(unaff_RBX + 0x224) << 0xb ^ *(uint *)(unaff_RBX + 0x224);
          *(int32_t *)(unaff_RBX + 0x224) = *(int32_t *)(unaff_RBX + 0x228);
          *(int32_t *)(unaff_RBX + 0x228) = *(int32_t *)(unaff_RBX + 0x22c);
          uVar5 = *(uint *)(unaff_RBX + 0x230);
          *(uint *)(unaff_RBX + 0x22c) = uVar5;
          uVar7 = (uVar5 >> 0xb ^ uVar7) >> 8 ^ uVar5 ^ uVar7;
          *(uint *)(unaff_RBX + 0x230) = uVar7;
          fVar11 = (float)(uVar7 & 0x7fffffff) * 4.656613e-10;
          *pfVar8 = (fVar11 + fVar11) - 1.0;
          pfVar8 = pfVar8 + uVar1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    return 0;
  }
                    // WARNING: Subroutine does not return
  memset(pfVar8,0,(ulonglong)(uVar1 * uVar7) << 2);
}



uint64_t FUN_180798a77(void)

{
  longlong unaff_RBX;
  longlong unaff_RSI;
  int32_t *unaff_RDI;
  longlong unaff_R14;
  int32_t uVar1;
  float fVar2;
  float unaff_XMM6_Da;
  
  do {
    uVar1 = sinf(*(int32_t *)(unaff_RBX + 0x220));
    *unaff_RDI = uVar1;
    fVar2 = unaff_XMM6_Da * 6.2831855 + *(float *)(unaff_RBX + 0x220);
    *(float *)(unaff_RBX + 0x220) = fVar2;
    if (6.2831855 <= fVar2) {
      *(float *)(unaff_RBX + 0x220) = fVar2 - 6.2831855;
    }
    unaff_RDI = unaff_RDI + unaff_R14;
    unaff_RSI = unaff_RSI + -1;
  } while (unaff_RSI != 0);
  return 0;
}



uint64_t FUN_180798ad8(void)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong unaff_RBX;
  uint unaff_EBP;
  uint unaff_ESI;
  float *unaff_RDI;
  float *pfVar4;
  longlong unaff_R14;
  float fVar5;
  float unaff_XMM6_Da;
  
  if (3 < unaff_ESI) {
    uVar1 = (unaff_ESI - 4 >> 2) + 1;
    uVar3 = (ulonglong)uVar1;
    unaff_EBP = uVar1 * 4;
    do {
      *unaff_RDI = (float)*(int *)(unaff_RBX + 0x21c);
      fVar5 = unaff_XMM6_Da + *(float *)(unaff_RBX + 0x220);
      iVar2 = *(int *)(unaff_RBX + 0x21c);
      *(float *)(unaff_RBX + 0x220) = fVar5;
      if (1.0 <= fVar5) {
        iVar2 = -iVar2;
        *(int *)(unaff_RBX + 0x21c) = iVar2;
        *(float *)(unaff_RBX + 0x220) = fVar5 - 1.0;
      }
      pfVar4 = unaff_RDI + unaff_R14;
      *pfVar4 = (float)iVar2;
      fVar5 = unaff_XMM6_Da + *(float *)(unaff_RBX + 0x220);
      *(float *)(unaff_RBX + 0x220) = fVar5;
      if (1.0 <= fVar5) {
        *(int *)(unaff_RBX + 0x21c) = -*(int *)(unaff_RBX + 0x21c);
        *(float *)(unaff_RBX + 0x220) = fVar5 - 1.0;
      }
      pfVar4 = pfVar4 + unaff_R14;
      *pfVar4 = (float)*(int *)(unaff_RBX + 0x21c);
      fVar5 = unaff_XMM6_Da + *(float *)(unaff_RBX + 0x220);
      *(float *)(unaff_RBX + 0x220) = fVar5;
      if (1.0 <= fVar5) {
        *(int *)(unaff_RBX + 0x21c) = -*(int *)(unaff_RBX + 0x21c);
        *(float *)(unaff_RBX + 0x220) = fVar5 - 1.0;
      }
      pfVar4[unaff_R14] = (float)*(int *)(unaff_RBX + 0x21c);
      fVar5 = unaff_XMM6_Da + *(float *)(unaff_RBX + 0x220);
      *(float *)(unaff_RBX + 0x220) = fVar5;
      if (1.0 <= fVar5) {
        *(int *)(unaff_RBX + 0x21c) = -*(int *)(unaff_RBX + 0x21c);
        *(float *)(unaff_RBX + 0x220) = fVar5 - 1.0;
      }
      unaff_RDI = pfVar4 + unaff_R14 + unaff_R14;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (unaff_EBP < unaff_ESI) {
    uVar3 = (ulonglong)(unaff_ESI - unaff_EBP);
    do {
      *unaff_RDI = (float)*(int *)(unaff_RBX + 0x21c);
      fVar5 = unaff_XMM6_Da + *(float *)(unaff_RBX + 0x220);
      *(float *)(unaff_RBX + 0x220) = fVar5;
      if (1.0 <= fVar5) {
        *(int *)(unaff_RBX + 0x21c) = -*(int *)(unaff_RBX + 0x21c);
        *(float *)(unaff_RBX + 0x220) = fVar5 - 1.0;
      }
      unaff_RDI = unaff_RDI + unaff_R14;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return 0;
}



uint64_t FUN_1807993e4(void)

{
  return 0;
}



uint64_t FUN_180799410(longlong *param_1)

{
  int32_t uVar1;
  int32_t uVar2;
  longlong lVar3;
  longlong lVar4;
  uint64_t uVar5;
  int iVar6;
  longlong lVar7;
  int32_t uVar8;
  
  lVar3 = *param_1;
  iVar6 = 0;
  lVar4 = *(longlong *)(lVar3 + 0xe8);
  *(uint64_t *)(lVar3 + 0x21c) = 0x3e4ccccd;
  *(int32_t *)(lVar3 + 0x224) = 0x3f800000;
  if (0 < *(int *)(lVar4 + 0x60)) {
    lVar7 = 0;
    do {
      uVar5 = func_0x000180762a70(lVar3,iVar6,
                                  *(int32_t *)
                                   (*(longlong *)(*(longlong *)(lVar4 + 0x68) + lVar7) + 0x38));
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      lVar4 = *(longlong *)(lVar3 + 0xe8);
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 8;
    } while (iVar6 < *(int *)(lVar4 + 0x60));
  }
  func_0x00018079ac80(lVar3);
  uVar1 = *(int32_t *)(lVar3 + 0x440);
  uVar2 = *(int32_t *)(lVar3 + 0x444);
  *(float *)(lVar3 + 0x220) = *(float *)(lVar3 + 0x448);
  *(int32_t *)(lVar3 + 0x218) = uVar1;
  *(int32_t *)(lVar3 + 0x21c) = uVar2;
  uVar8 = powf(0x41200000,*(float *)(lVar3 + 0x448) * 0.05);
  *(int32_t *)(lVar3 + 0x224) = uVar8;
  FUN_18079ae50(lVar3,uVar1,uVar2,uVar8);
  return 0;
}



uint64_t FUN_180799481(void)

{
  int32_t uVar1;
  int32_t uVar2;
  longlong unaff_RDI;
  int32_t uVar3;
  
  func_0x00018079ac80();
  uVar1 = *(int32_t *)(unaff_RDI + 0x440);
  uVar2 = *(int32_t *)(unaff_RDI + 0x444);
  *(float *)(unaff_RDI + 0x220) = *(float *)(unaff_RDI + 0x448);
  *(int32_t *)(unaff_RDI + 0x218) = uVar1;
  *(int32_t *)(unaff_RDI + 0x21c) = uVar2;
  uVar3 = powf(0x41200000,*(float *)(unaff_RDI + 0x448) * 0.05);
  *(int32_t *)(unaff_RDI + 0x224) = uVar3;
  FUN_18079ae50(uVar3,uVar1,uVar2,uVar3);
  return 0;
}







