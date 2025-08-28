#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part081.c - 10 个函数

// 函数: void FUN_18010e9ca(void)
void FUN_18010e9ca(void)

{
  float fVar1;
  float *pfVar2;
  int64_t lVar3;
  char cVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  int64_t lVar7;
  uint64_t unaff_R12;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  float unaff_XMM6_Da;
  float fVar12;
  float unaff_XMM8_Da;
  int32_t unaff_XMM9_Da;
  float fVar13;
  int32_t unaff_XMM9_Dc;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  int32_t unaff_XMM12_Da;
  int32_t unaff_XMM12_Dc;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  int32_t unaff_XMM15_Da;
  int32_t unaff_XMM15_Dc;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  float fStack000000000000005c;
  int32_t in_stack_00000060;
  int32_t in_stack_00000068;
  int32_t in_stack_00000090;
  int32_t in_stack_00000098;
  int32_t in_stack_000000c0;
  int32_t in_stack_000000c8;
  
  cVar4 = (char)unaff_R12;
  uVar9 = (uint)unaff_R12;
  if (*(char *)(unaff_RSI + 0x2e38) == cVar4) {
    *(float *)(unaff_RBP + 0x44) = unaff_XMM6_Da;
    iVar10 = (int)((fStack0000000000000054 - unaff_XMM13_Da) / unaff_XMM10_Da);
    if (0 < iVar10) {
      uVar6 = unaff_R12 & 0xffffffff;
      uVar8 = uVar9;
      if (unaff_RDI < unaff_RBX) {
        do {
          uVar8 = (uint)uVar6;
          if (iVar10 <= (int)uVar8) break;
          uVar5 = memchr(unaff_RDI,10,unaff_RBX - unaff_RDI);
          if (uVar5 == 0) {
            uVar5 = unaff_RBX;
          }
          uVar8 = uVar8 + 1;
          uVar6 = (uint64_t)uVar8;
          unaff_RDI = uVar5 + 1;
        } while (unaff_RDI < unaff_RBX);
      }
      unaff_XMM6_Da = (float)(int)uVar8 * unaff_XMM10_Da + unaff_XMM13_Da;
      *(float *)(unaff_RBP + 0x44) = unaff_XMM6_Da;
    }
  }
  if (unaff_RDI < unaff_RBX) {
    fVar13 = unaff_XMM6_Da;
    fVar12 = unaff_XMM6_Da;
    in_stack_00000060 = unaff_XMM15_Da;
    in_stack_00000068 = unaff_XMM15_Dc;
    in_stack_00000090 = unaff_XMM12_Da;
    in_stack_00000098 = unaff_XMM12_Dc;
    in_stack_000000c0 = unaff_XMM9_Da;
    in_stack_000000c8 = unaff_XMM9_Dc;
    do {
      fVar13 = fVar13 + unaff_XMM10_Da;
      lVar7 = *(int64_t *)(unaff_RSI + 0x1af8);
      if (((((fVar13 < *(float *)(lVar7 + 0x22c) || fVar13 == *(float *)(lVar7 + 0x22c)) ||
            (*(float *)(lVar7 + 0x234) <= unaff_XMM6_Da)) ||
           (unaff_XMM14_Da + 3.4028235e+38 < *(float *)(lVar7 + 0x228) ||
            unaff_XMM14_Da + 3.4028235e+38 == *(float *)(lVar7 + 0x228))) ||
          (*(float *)(lVar7 + 0x230) <= unaff_XMM14_Da)) && (*(char *)(unaff_RSI + 0x2e38) == cVar4)
         ) break;
      uVar6 = memchr(unaff_RDI,10,unaff_RBX - unaff_RDI);
      pfVar2 = *(float **)(unaff_RSI + 0x19f0);
      fVar1 = *(float *)(unaff_RSI + 0x19f8);
      if (uVar6 == 0) {
        uVar6 = unaff_RBX;
      }
      fVar11 = unaff_XMM8_Da;
      if (unaff_RDI != uVar6) {
        FUN_180297340(pfVar2,&stack0x00000050,fVar1,0x7f7fffff,0xbf800000);
        if (unaff_XMM8_Da < fStack0000000000000050) {
          fStack0000000000000050 = fStack0000000000000050 - fVar1 / *pfVar2;
        }
        fStack0000000000000050 = (float)(int)(fStack0000000000000050 + 0.95);
        fVar11 = fStack0000000000000050;
      }
      if (unaff_XMM11_Da < fVar11) {
        *(float *)(unaff_RBP + 0x48) = fVar11;
        unaff_XMM11_Da = fVar11;
      }
      FUN_180122320(*(uint64_t *)(unaff_RBP + 0x40),unaff_RDI,uVar6,0);
      unaff_RSI = SYSTEM_DATA_MANAGER_A;
      fVar12 = fVar12 + unaff_XMM10_Da;
      unaff_RDI = uVar6 + 1;
      unaff_XMM6_Da = unaff_XMM6_Da + unaff_XMM10_Da;
      *(float *)(unaff_RBP + 0x44) = fVar12;
    } while (unaff_RDI < unaff_RBX);
    uVar6 = unaff_R12 & 0xffffffff;
    while (unaff_RDI < unaff_RBX) {
      uVar5 = memchr(unaff_RDI,10,unaff_RBX - unaff_RDI);
      if (uVar5 == 0) {
        uVar5 = unaff_RBX;
      }
      uVar9 = (int)uVar6 + 1;
      uVar6 = (uint64_t)uVar9;
      unaff_RDI = uVar5 + 1;
    }
    unaff_XMM6_Da = fVar12 + (float)(int)uVar9 * unaff_XMM10_Da;
  }
  *(float *)(unaff_RBP + 0x4c) = unaff_XMM6_Da - unaff_XMM13_Da;
  fVar13 = unaff_XMM13_Da + (unaff_XMM6_Da - unaff_XMM13_Da);
  fVar12 = unaff_XMM14_Da + unaff_XMM11_Da;
  func_0x000180124080(unaff_RBP + 0x48);
  lVar7 = *(int64_t *)(unaff_RSI + 0x1af8);
  *(uint64_t *)(lVar7 + 0x144) = unaff_R12;
  *(float *)(lVar7 + 0x14c) = unaff_XMM14_Da;
  *(float *)(lVar7 + 0x150) = unaff_XMM13_Da;
  *(float *)(lVar7 + 0x154) = fVar12;
  *(float *)(lVar7 + 0x158) = fVar13;
  lVar3 = *(int64_t *)(unaff_RSI + 0x1af8);
  if (((((*(float *)(lVar3 + 0x22c) <= fVar13 && fVar13 != *(float *)(lVar3 + 0x22c)) &&
        (unaff_XMM13_Da < *(float *)(lVar3 + 0x234))) &&
       ((*(float *)(lVar3 + 0x228) <= fVar12 && fVar12 != *(float *)(lVar3 + 0x228) &&
        (unaff_XMM14_Da < *(float *)(lVar3 + 0x230))))) || (*(char *)(unaff_RSI + 0x2e38) != cVar4))
     && (in_stack_00000058 = fVar12, fStack000000000000005c = fVar13,
        cVar4 = FUN_180128040(&stack0x00000050,&stack0x00000058,1), cVar4 != '\0')) {
    *(uint *)(lVar7 + 0x148) = *(uint *)(lVar7 + 0x148) | 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18010ea4d(void)
void FUN_18010ea4d(void)

{
  float fVar1;
  float *pfVar2;
  int64_t lVar3;
  char cVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  int64_t lVar7;
  uint64_t unaff_R12;
  uint uVar8;
  float fVar9;
  float unaff_XMM6_Da;
  float unaff_XMM8_Da;
  float fVar10;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float fVar11;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float in_stack_00000050;
  float in_stack_00000058;
  float fStack000000000000005c;
  
  fVar10 = unaff_XMM6_Da + unaff_XMM10_Da;
  fVar11 = unaff_XMM6_Da;
  do {
    lVar7 = *(int64_t *)(unaff_RSI + 0x1af8);
    if (((((fVar10 < *(float *)(lVar7 + 0x22c) || fVar10 == *(float *)(lVar7 + 0x22c)) ||
          (*(float *)(lVar7 + 0x234) <= fVar11)) ||
         (unaff_XMM14_Da + 3.4028235e+38 < *(float *)(lVar7 + 0x228) ||
          unaff_XMM14_Da + 3.4028235e+38 == *(float *)(lVar7 + 0x228))) ||
        (*(float *)(lVar7 + 0x230) <= unaff_XMM14_Da)) &&
       (*(char *)(unaff_RSI + 0x2e38) == (char)unaff_R12)) break;
    uVar5 = memchr(unaff_RDI,10,unaff_RBX - unaff_RDI);
    pfVar2 = *(float **)(unaff_RSI + 0x19f0);
    fVar1 = *(float *)(unaff_RSI + 0x19f8);
    if (uVar5 == 0) {
      uVar5 = unaff_RBX;
    }
    fVar9 = unaff_XMM8_Da;
    if (unaff_RDI != uVar5) {
      FUN_180297340(pfVar2,&stack0x00000050,fVar1,0x7f7fffff,0xbf800000);
      if (unaff_XMM8_Da < in_stack_00000050) {
        in_stack_00000050 = in_stack_00000050 - fVar1 / *pfVar2;
      }
      in_stack_00000050 = (float)(int)(in_stack_00000050 + 0.95);
      fVar9 = in_stack_00000050;
    }
    if (unaff_XMM11_Da < fVar9) {
      *(float *)(unaff_RBP + 0x48) = fVar9;
      unaff_XMM11_Da = fVar9;
    }
    FUN_180122320(*(uint64_t *)(unaff_RBP + 0x40),unaff_RDI,uVar5,0);
    unaff_RSI = SYSTEM_DATA_MANAGER_A;
    unaff_XMM6_Da = unaff_XMM6_Da + unaff_XMM10_Da;
    unaff_RDI = uVar5 + 1;
    fVar11 = fVar11 + unaff_XMM10_Da;
    fVar10 = fVar10 + unaff_XMM10_Da;
    *(float *)(unaff_RBP + 0x44) = unaff_XMM6_Da;
  } while (unaff_RDI < unaff_RBX);
  uVar5 = unaff_R12 & 0xffffffff;
  uVar8 = (uint)unaff_R12;
  while (unaff_RDI < unaff_RBX) {
    uVar6 = memchr(unaff_RDI,10,unaff_RBX - unaff_RDI);
    if (uVar6 == 0) {
      uVar6 = unaff_RBX;
    }
    uVar8 = (int)uVar5 + 1;
    uVar5 = (uint64_t)uVar8;
    unaff_RDI = uVar6 + 1;
  }
  fVar11 = (unaff_XMM6_Da + (float)(int)uVar8 * unaff_XMM10_Da) - unaff_XMM13_Da;
  *(float *)(unaff_RBP + 0x4c) = fVar11;
  fVar11 = unaff_XMM13_Da + fVar11;
  fVar10 = unaff_XMM14_Da + unaff_XMM11_Da;
  func_0x000180124080(unaff_RBP + 0x48);
  lVar7 = *(int64_t *)(unaff_RSI + 0x1af8);
  *(uint64_t *)(lVar7 + 0x144) = unaff_R12;
  *(float *)(lVar7 + 0x14c) = unaff_XMM14_Da;
  *(float *)(lVar7 + 0x150) = unaff_XMM13_Da;
  *(float *)(lVar7 + 0x154) = fVar10;
  *(float *)(lVar7 + 0x158) = fVar11;
  lVar3 = *(int64_t *)(unaff_RSI + 0x1af8);
  if (((((*(float *)(lVar3 + 0x22c) <= fVar11 && fVar11 != *(float *)(lVar3 + 0x22c)) &&
        (unaff_XMM13_Da < *(float *)(lVar3 + 0x234))) &&
       ((*(float *)(lVar3 + 0x228) <= fVar10 && fVar10 != *(float *)(lVar3 + 0x228) &&
        (unaff_XMM14_Da < *(float *)(lVar3 + 0x230))))) ||
      (*(char *)(unaff_RSI + 0x2e38) != (char)unaff_R12)) &&
     (in_stack_00000058 = fVar10, fStack000000000000005c = fVar11,
     cVar4 = FUN_180128040(&stack0x00000050,&stack0x00000058,1), cVar4 != '\0')) {
    *(uint *)(lVar7 + 0x148) = *(uint *)(lVar7 + 0x148) | 1;
  }
  return;
}





// 函数: void FUN_18010ebc0(void)
void FUN_18010ebc0(void)

{
  int64_t lVar1;
  char cVar2;
  uint64_t uVar3;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  int64_t lVar4;
  uint64_t unaff_R12;
  int unaff_R14D;
  float unaff_XMM6_Da;
  float fVar5;
  float fVar6;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  int32_t in_stack_00000050;
  float in_stack_00000058;
  float fStack000000000000005c;
  
  do {
    uVar3 = memchr(unaff_RDI,10,unaff_RBX - unaff_RDI);
    if (uVar3 == 0) {
      uVar3 = unaff_RBX;
    }
    unaff_R14D = unaff_R14D + 1;
    unaff_RDI = uVar3 + 1;
  } while (unaff_RDI < unaff_RBX);
  fVar5 = (unaff_XMM6_Da + (float)unaff_R14D * unaff_XMM10_Da) - unaff_XMM13_Da;
  *(float *)(unaff_RBP + 0x4c) = fVar5;
  fVar5 = unaff_XMM13_Da + fVar5;
  fVar6 = unaff_XMM14_Da + unaff_XMM11_Da;
  func_0x000180124080(unaff_RBP + 0x48);
  lVar4 = *(int64_t *)(unaff_RSI + 0x1af8);
  *(uint64_t *)(lVar4 + 0x144) = unaff_R12;
  *(float *)(lVar4 + 0x14c) = unaff_XMM14_Da;
  *(float *)(lVar4 + 0x150) = unaff_XMM13_Da;
  *(float *)(lVar4 + 0x154) = fVar6;
  *(float *)(lVar4 + 0x158) = fVar5;
  lVar1 = *(int64_t *)(unaff_RSI + 0x1af8);
  if (((((*(float *)(lVar1 + 0x22c) <= fVar5 && fVar5 != *(float *)(lVar1 + 0x22c)) &&
        (unaff_XMM13_Da < *(float *)(lVar1 + 0x234))) &&
       (*(float *)(lVar1 + 0x228) <= fVar6 && fVar6 != *(float *)(lVar1 + 0x228))) &&
      (unaff_XMM14_Da < *(float *)(lVar1 + 0x230))) ||
     (*(char *)(unaff_RSI + 0x2e38) != (char)unaff_R12)) {
    in_stack_00000058 = fVar6;
    fStack000000000000005c = fVar5;
    cVar2 = FUN_180128040(&stack0x00000050,&stack0x00000058,1);
    if (cVar2 != '\0') {
      *(uint *)(lVar4 + 0x148) = *(uint *)(lVar4 + 0x148) | 1;
    }
  }
  return;
}





// 函数: void FUN_18010ec09(void)
void FUN_18010ec09(void)

{
  int64_t lVar1;
  char cVar2;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t lVar3;
  uint64_t unaff_R12;
  float fVar4;
  float unaff_XMM6_Da;
  float fVar5;
  float unaff_XMM11_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  int32_t in_stack_00000050;
  float in_stack_00000058;
  float fStack000000000000005c;
  
  fVar4 = unaff_XMM13_Da + unaff_XMM6_Da;
  fVar5 = unaff_XMM14_Da + unaff_XMM11_Da;
  func_0x000180124080(unaff_RBP + 0x48);
  lVar3 = *(int64_t *)(unaff_RSI + 0x1af8);
  *(uint64_t *)(lVar3 + 0x144) = unaff_R12;
  *(float *)(lVar3 + 0x14c) = unaff_XMM14_Da;
  *(float *)(lVar3 + 0x150) = unaff_XMM13_Da;
  *(float *)(lVar3 + 0x154) = fVar5;
  *(float *)(lVar3 + 0x158) = fVar4;
  lVar1 = *(int64_t *)(unaff_RSI + 0x1af8);
  if (((((*(float *)(lVar1 + 0x22c) <= fVar4 && fVar4 != *(float *)(lVar1 + 0x22c)) &&
        (unaff_XMM13_Da < *(float *)(lVar1 + 0x234))) &&
       (*(float *)(lVar1 + 0x228) <= fVar5 && fVar5 != *(float *)(lVar1 + 0x228))) &&
      (unaff_XMM14_Da < *(float *)(lVar1 + 0x230))) ||
     (*(char *)(unaff_RSI + 0x2e38) != (char)unaff_R12)) {
    in_stack_00000058 = fVar5;
    fStack000000000000005c = fVar4;
    cVar2 = FUN_180128040(&stack0x00000050,&stack0x00000058,1);
    if (cVar2 != '\0') {
      *(uint *)(lVar3 + 0x148) = *(uint *)(lVar3 + 0x148) | 1;
    }
  }
  return;
}





// 函数: void FUN_18010ec85(void)
void FUN_18010ec85(void)

{
  float *pfVar1;
  int8_t in_AL;
  char cVar2;
  uint8_t in_register_00000001;
  int64_t unaff_RSI;
  int64_t in_R10;
  char unaff_R12B;
  float unaff_XMM7_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  
  if ((((unaff_XMM13_Da < *(float *)(CONCAT71(in_register_00000001,in_AL) + 0x234)) &&
       (pfVar1 = (float *)(CONCAT71(in_register_00000001,in_AL) + 0x228),
       *pfVar1 <= unaff_XMM7_Da && unaff_XMM7_Da != *pfVar1)) &&
      (unaff_XMM14_Da < *(float *)(CONCAT71(in_register_00000001,in_AL) + 0x230))) ||
     (*(char *)(unaff_RSI + 0x2e38) != unaff_R12B)) {
    cVar2 = FUN_180128040(&stack0x00000050,&stack0x00000058,1);
    if (cVar2 != '\0') {
      *(uint *)(in_R10 + 0x148) = *(uint *)(in_R10 + 0x148) | 1;
    }
  }
  return;
}





// 函数: void FUN_18010effd(void)
void FUN_18010effd(void)

{
  return;
}





// 函数: void FUN_18010f010(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18010f010(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uStackX_10;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  
  uStackX_10 = param_2;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  FUN_18010f040(param_1,&uStackX_10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18010f040(uint64_t param_1,uint64_t param_2)
void FUN_18010f040(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  
  lVar2 = SYSTEM_DATA_MANAGER_A;
  *(int8_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0xb1) = 1;
  if (*(char *)(*(int64_t *)(lVar2 + 0x1af8) + 0xb4) == '\0') {
    lVar1 = lVar2 + 0x3054;
    iVar3 = FUN_18004b9b0(lVar1,0xc01,param_1,param_2);
    if (lVar1 != 0) {
      if ((iVar3 == -1) || (0xc00 < iVar3)) {
        iVar3 = 0xc00;
      }
      *(int8_t *)(iVar3 + lVar1) = 0;
    }
    FUN_18010e8a0(lVar1,lVar2 + 0x3054 + (int64_t)iVar3);
  }
  return;
}





// 函数: void FUN_18010f06e(uint64_t param_1)
void FUN_18010f06e(uint64_t param_1)

{
  int64_t lVar1;
  int iVar2;
  int64_t unaff_RBX;
  
  lVar1 = unaff_RBX + 0x3054;
  iVar2 = FUN_18004b9b0(lVar1,0xc01,param_1);
  if (lVar1 != 0) {
    if ((iVar2 == -1) || (0xc00 < iVar2)) {
      iVar2 = 0xc00;
    }
    *(int8_t *)(iVar2 + lVar1) = 0;
  }
  FUN_18010e8a0(lVar1,unaff_RBX + 0x3054 + (int64_t)iVar2);
  return;
}





// 函数: void FUN_18010f0c3(void)
void FUN_18010f0c3(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



