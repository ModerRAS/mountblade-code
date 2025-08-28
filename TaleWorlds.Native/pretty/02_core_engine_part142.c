#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// $fun 的语义化别名
#define $alias_name $fun
// 02_core_engine_part142.c - 6 个函数
// 函数: void GenericFunction_180134826(void)
void GenericFunction_180134826(void)
{
  float *pfVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int iVar4;
  uint64_t uVar5;
  int iVar6;
  int in_EAX;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int64_t lVar10;
  int64_t lVar11;
  int unaff_EBP;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t uVar12;
  uint uVar13;
  int unaff_R13D;
  int64_t unaff_R14;
  int unaff_R15D;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  int32_t stack_special_x_24;
  float fStack0000000000000028;
  int32_t local_buffer_2c;
  int32_t local_buffer_30;
  int32_t local_buffer_34;
  int32_t local_buffer_38;
  do {
    iVar7 = *(int *)(unaff_R14 + 0x34);
    stack_special_x_24 = (int32_t)unaff_RDI;
    fStack0000000000000028 = (float)(unaff_RDI >> 0x20);
    local_buffer_2c = 0x7f7fffff;
    local_buffer_30 = 0x7f7fffff;
    local_buffer_34 = 0xff7fffff;
    local_buffer_38 = 0xff7fffff;
    fVar14 = (float)unaff_EBP * (unaff_XMM7_Da / (float)unaff_R13D);
    if (in_EAX == iVar7) {
      if (iVar7 == 0) {
        iVar7 = 8;
      }
      else {
        iVar7 = iVar7 / 2 + iVar7;
      }
      iVar6 = in_EAX + 1;
      if (in_EAX + 1 < iVar7) {
        iVar6 = iVar7;
      }
      GenericFunction_18013e250(unaff_R14 + 0x30,iVar6);
      in_EAX = *(int *)(unaff_R14 + 0x30);
    }
    lVar3 = *(int64_t *)(unaff_R14 + 0x38);
    unaff_EBP = unaff_EBP + 1;
    lVar10 = (int64_t)in_EAX * 0x1c;
    *(uint64_t *)(lVar10 + lVar3) = CONCAT44(stack_special_x_24,fVar14);
    ((uint64_t *)(lVar10 + lVar3))[1] = CONCAT44(local_buffer_2c,fStack0000000000000028);
    *(uint64_t *)(lVar10 + 0x10 + lVar3) = CONCAT44(local_buffer_34,local_buffer_30);
    *(int32_t *)(lVar10 + 0x18 + lVar3) = local_buffer_38;
    *(int *)(unaff_R14 + 0x30) = *(int *)(unaff_R14 + 0x30) + 1;
    lVar3 = SYSTEM_DATA_MANAGER_A;
    in_EAX = *(int *)(unaff_R14 + 0x30);
  } while (unaff_EBP < unaff_R15D);
  if (0 < unaff_R13D) {
    local_buffer_2c = 0x7f7fffff;
    uVar12 = unaff_RDI;
    do {
      iVar6 = (int)unaff_RDI;
      lVar10 = *(int64_t *)(unaff_R14 + 0x38);
      lVar11 = *(int64_t *)(*(int64_t *)(lVar3 + 0x1af8) + 0x210);
      iVar7 = iVar6;
      if (iVar6 < 0) {
        iVar7 = *(int *)(lVar11 + 0xc);
      }
      fVar16 = *(float *)(lVar11 + 0x14);
      uVar13 = iVar6 + 1;
      fVar15 = *(float *)(lVar11 + 0x18) - fVar16;
      fVar17 = *(float *)(unaff_RSI + 0x40) + 0.5;
      fVar14 = (float)(int)((fVar15 * *(float *)((int64_t)iVar7 * 0x1c +
                                                *(int64_t *)(lVar11 + 0x38)) + fVar16 + fVar17) -
                           unaff_XMM7_Da);
      uVar8 = uVar13;
      if ((int)uVar13 < 0) {
        uVar8 = *(uint *)(lVar11 + 0xc);
      }
      unaff_RDI = (uint64_t)uVar13;
      fStack0000000000000028 =
           (float)(int)((fVar15 * *(float *)((int64_t)(int)uVar8 * 0x1c +
                                            *(int64_t *)(lVar11 + 0x38)) + fVar16 + fVar17) -
                       unaff_XMM7_Da);
      pfVar1 = (float *)(uVar12 + 0xc + lVar10);
      *pfVar1 = fVar14;
      pfVar1[1] = -3.4028235e+38;
      pfVar1[2] = fStack0000000000000028;
      pfVar1[3] = 3.4028235e+38;
      fVar16 = *(float *)(uVar12 + 0x10 + lVar10);
      if (fVar16 <= *(float *)(unaff_RSI + 0x22c)) {
        fVar16 = *(float *)(unaff_RSI + 0x22c);
      }
      fVar15 = *(float *)(uVar12 + 0xc + lVar10);
      fVar17 = *(float *)(unaff_RSI + 0x228);
      if (*(float *)(unaff_RSI + 0x228) <= fVar15) {
        fVar17 = fVar15;
      }
      *(float *)(uVar12 + 0x10 + lVar10) = fVar16;
      *(float *)(uVar12 + 0xc + lVar10) = fVar17;
      fVar16 = *(float *)(uVar12 + 0x14 + lVar10);
      fVar15 = *(float *)(uVar12 + 0x18 + lVar10);
      if (*(float *)(unaff_RSI + 0x230) <= fVar16) {
        fVar16 = *(float *)(unaff_RSI + 0x230);
      }
      if (*(float *)(unaff_RSI + 0x234) <= fVar15) {
        fVar15 = *(float *)(unaff_RSI + 0x234);
      }
      *(float *)(uVar12 + 0x14 + lVar10) = fVar16;
      *(float *)(uVar12 + 0x18 + lVar10) = fVar15;
      uVar12 = uVar12 + 0x1c;
    } while ((int)uVar13 < unaff_R13D);
  }
  DataStructure_91cf0(*(uint64_t *)(unaff_RSI + 0x2e8),*(int32_t *)(unaff_R14 + 0x10));
  lVar10 = SYSTEM_DATA_MANAGER_A;
  lVar3 = *(int64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x210);
  lVar11 = (int64_t)*(int *)(lVar3 + 0xc) * 0x1c + *(int64_t *)(lVar3 + 0x38);
  *(int8_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0xb1) = 1;
  lVar3 = *(int64_t *)(lVar10 + 0x1af8);
  DataStructure_91b40(*(uint64_t *)(lVar3 + 0x2e8),*(uint64_t *)(lVar11 + 0xc),
                *(uint64_t *)(lVar11 + 0x14),0,fVar14);
  lVar10 = SYSTEM_DATA_MANAGER_A;
  puVar2 = (uint64_t *)
           (*(int64_t *)(*(int64_t *)(lVar3 + 0x2e8) + 0x68) + -0x10 +
           (int64_t)*(int *)(*(int64_t *)(lVar3 + 0x2e8) + 0x60) * 0x10);
  uVar5 = puVar2[1];
  *(uint64_t *)(lVar3 + 0x228) = *puVar2;
  *(uint64_t *)(lVar3 + 0x230) = uVar5;
  fStack0000000000000028 = (float)uVar5;
  local_buffer_2c = (int32_t)((uint64_t)uVar5 >> 0x20);
  lVar3 = *(int64_t *)(*(int64_t *)(lVar10 + 0x1af8) + 0x210);
  fVar14 = *(float *)(lVar3 + 0x18);
  fVar16 = *(float *)(lVar3 + 0x14);
  fVar15 = *(float *)(((int64_t)*(int *)(lVar3 + 0xc) + 1) * 0x1c + *(int64_t *)(lVar3 + 0x38));
  fVar17 = *(float *)((int64_t)*(int *)(lVar3 + 0xc) * 0x1c + *(int64_t *)(lVar3 + 0x38));
  *(int8_t *)(*(int64_t *)(lVar10 + 0x1af8) + 0xb1) = 1;
  lVar3 = *(int64_t *)(lVar10 + 0x1af8);
  fVar14 = (fVar15 - fVar17) * (fVar14 - fVar16) * 0.65;
  if (fVar14 == unaff_XMM8_Da) {
    fVar14 = *(float *)(lVar3 + 0x284);
  }
  piVar9 = (int *)(lVar3 + 0x1c8);
  *(float *)(lVar3 + 0x1ac) = fVar14;
  iVar7 = *piVar9;
  iVar6 = *(int *)(lVar3 + 0x1cc);
  if (iVar7 == iVar6) {
    if (iVar6 == 0) {
      iVar6 = 8;
    }
    else {
      iVar6 = iVar6 / 2 + iVar6;
    }
    iVar4 = iVar7 + 1;
    if (iVar7 + 1 < iVar6) {
      iVar4 = iVar6;
    }
    GenericFunction_18011dbd0(piVar9,iVar4);
    iVar7 = *piVar9;
  }
  *(float *)(*(int64_t *)(lVar3 + 0x1d0) + (int64_t)iVar7 * 4) = *(float *)(lVar3 + 0x1ac);
  *piVar9 = *piVar9 + 1;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1801348d8(void)
void GenericFunction_1801348d8(void)
{
  float *pfVar1;
  uint64_t *puVar2;
  float fVar3;
  int64_t lVar4;
  int64_t lVar5;
  int iVar6;
  uint64_t uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int64_t lVar12;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t uVar13;
  uint uVar14;
  int unaff_R13D;
  int64_t unaff_R14;
  float fVar15;
  float fVar16;
  float fVar17;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  lVar5 = SYSTEM_DATA_MANAGER_A;
  uVar13 = unaff_RDI;
  if (0 < unaff_R13D) {
    do {
      iVar8 = (int)unaff_RDI;
      lVar4 = *(int64_t *)(unaff_R14 + 0x38);
      lVar12 = *(int64_t *)(*(int64_t *)(lVar5 + 0x1af8) + 0x210);
      iVar9 = iVar8;
      if (iVar8 < 0) {
        iVar9 = *(int *)(lVar12 + 0xc);
      }
      fVar16 = *(float *)(lVar12 + 0x14);
      uVar14 = iVar8 + 1;
      fVar15 = *(float *)(lVar12 + 0x18) - fVar16;
      fVar17 = *(float *)(unaff_RSI + 0x40) + 0.5;
      uVar10 = uVar14;
      if ((int)uVar14 < 0) {
        uVar10 = *(uint *)(lVar12 + 0xc);
      }
      unaff_RDI = (uint64_t)uVar14;
      fVar3 = *(float *)((int64_t)(int)uVar10 * 0x1c + *(int64_t *)(lVar12 + 0x38));
      pfVar1 = (float *)(uVar13 + 0xc + lVar4);
      *pfVar1 = (float)(int)((fVar15 * *(float *)((int64_t)iVar9 * 0x1c +
                                                 *(int64_t *)(lVar12 + 0x38)) + fVar16 + fVar17) -
                            unaff_XMM7_Da);
      pfVar1[1] = -3.4028235e+38;
      pfVar1[2] = (float)(int)((fVar15 * fVar3 + fVar16 + fVar17) - unaff_XMM7_Da);
      pfVar1[3] = 3.4028235e+38;
      fVar16 = *(float *)(uVar13 + 0x10 + lVar4);
      if (fVar16 <= *(float *)(unaff_RSI + 0x22c)) {
        fVar16 = *(float *)(unaff_RSI + 0x22c);
      }
      fVar15 = *(float *)(uVar13 + 0xc + lVar4);
      fVar17 = *(float *)(unaff_RSI + 0x228);
      if (*(float *)(unaff_RSI + 0x228) <= fVar15) {
        fVar17 = fVar15;
      }
      *(float *)(uVar13 + 0x10 + lVar4) = fVar16;
      *(float *)(uVar13 + 0xc + lVar4) = fVar17;
      fVar16 = *(float *)(uVar13 + 0x14 + lVar4);
      fVar15 = *(float *)(uVar13 + 0x18 + lVar4);
      if (*(float *)(unaff_RSI + 0x230) <= fVar16) {
        fVar16 = *(float *)(unaff_RSI + 0x230);
      }
      if (*(float *)(unaff_RSI + 0x234) <= fVar15) {
        fVar15 = *(float *)(unaff_RSI + 0x234);
      }
      *(float *)(uVar13 + 0x14 + lVar4) = fVar16;
      *(float *)(uVar13 + 0x18 + lVar4) = fVar15;
      uVar13 = uVar13 + 0x1c;
    } while ((int)uVar14 < unaff_R13D);
  }
  DataStructure_91cf0(*(uint64_t *)(unaff_RSI + 0x2e8),*(int32_t *)(unaff_R14 + 0x10));
  lVar4 = SYSTEM_DATA_MANAGER_A;
  lVar5 = *(int64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x210);
  lVar12 = (int64_t)*(int *)(lVar5 + 0xc) * 0x1c + *(int64_t *)(lVar5 + 0x38);
  *(int8_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0xb1) = 1;
  lVar5 = *(int64_t *)(lVar4 + 0x1af8);
  DataStructure_91b40(*(uint64_t *)(lVar5 + 0x2e8),*(uint64_t *)(lVar12 + 0xc),
                *(uint64_t *)(lVar12 + 0x14),0);
  lVar4 = SYSTEM_DATA_MANAGER_A;
  puVar2 = (uint64_t *)
           (*(int64_t *)(*(int64_t *)(lVar5 + 0x2e8) + 0x68) + -0x10 +
           (int64_t)*(int *)(*(int64_t *)(lVar5 + 0x2e8) + 0x60) * 0x10);
  uVar7 = puVar2[1];
  *(uint64_t *)(lVar5 + 0x228) = *puVar2;
  *(uint64_t *)(lVar5 + 0x230) = uVar7;
  lVar5 = *(int64_t *)(*(int64_t *)(lVar4 + 0x1af8) + 0x210);
  fVar16 = *(float *)(lVar5 + 0x18);
  fVar15 = *(float *)(lVar5 + 0x14);
  fVar17 = *(float *)(((int64_t)*(int *)(lVar5 + 0xc) + 1) * 0x1c + *(int64_t *)(lVar5 + 0x38));
  fVar3 = *(float *)((int64_t)*(int *)(lVar5 + 0xc) * 0x1c + *(int64_t *)(lVar5 + 0x38));
  *(int8_t *)(*(int64_t *)(lVar4 + 0x1af8) + 0xb1) = 1;
  lVar5 = *(int64_t *)(lVar4 + 0x1af8);
  fVar16 = (fVar17 - fVar3) * (fVar16 - fVar15) * 0.65;
  if (fVar16 == unaff_XMM8_Da) {
    fVar16 = *(float *)(lVar5 + 0x284);
  }
  piVar11 = (int *)(lVar5 + 0x1c8);
  *(float *)(lVar5 + 0x1ac) = fVar16;
  iVar9 = *piVar11;
  iVar8 = *(int *)(lVar5 + 0x1cc);
  if (iVar9 == iVar8) {
    if (iVar8 == 0) {
      iVar8 = 8;
    }
    else {
      iVar8 = iVar8 / 2 + iVar8;
    }
    iVar6 = iVar9 + 1;
    if (iVar9 + 1 < iVar8) {
      iVar6 = iVar8;
    }
    GenericFunction_18011dbd0(piVar11,iVar6);
    iVar9 = *piVar11;
  }
  *(float *)(*(int64_t *)(lVar5 + 0x1d0) + (int64_t)iVar9 * 4) = *(float *)(lVar5 + 0x1ac);
  *piVar11 = *piVar11 + 1;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1801348ee(void)
void GenericFunction_1801348ee(void)
{
  float *pfVar1;
  uint64_t *puVar2;
  float fVar3;
  int64_t lVar4;
  int64_t lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int64_t lVar11;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t uVar12;
  uint uVar13;
  int unaff_R13D;
  int64_t unaff_R14;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float fStack0000000000000028;
  int32_t local_buffer_2c;
  lVar5 = SYSTEM_DATA_MANAGER_A;
  local_buffer_2c = 0x7f7fffff;
  uVar12 = unaff_RDI;
  do {
    iVar7 = (int)unaff_RDI;
    lVar4 = *(int64_t *)(unaff_R14 + 0x38);
    lVar11 = *(int64_t *)(*(int64_t *)(lVar5 + 0x1af8) + 0x210);
    iVar8 = iVar7;
    if (iVar7 < 0) {
      iVar8 = *(int *)(lVar11 + 0xc);
    }
    fVar15 = *(float *)(lVar11 + 0x14);
    uVar13 = iVar7 + 1;
    fVar14 = *(float *)(lVar11 + 0x18) - fVar15;
    fVar16 = *(float *)(unaff_RSI + 0x40) + 0.5;
    uVar9 = uVar13;
    if ((int)uVar13 < 0) {
      uVar9 = *(uint *)(lVar11 + 0xc);
    }
    unaff_RDI = (uint64_t)uVar13;
    fStack0000000000000028 =
         (float)(int)((fVar14 * *(float *)((int64_t)(int)uVar9 * 0x1c +
                                          *(int64_t *)(lVar11 + 0x38)) + fVar15 + fVar16) -
                     unaff_XMM7_Da);
    pfVar1 = (float *)(uVar12 + 0xc + lVar4);
    *pfVar1 = (float)(int)((fVar14 * *(float *)((int64_t)iVar8 * 0x1c +
                                               *(int64_t *)(lVar11 + 0x38)) + fVar15 + fVar16) -
                          unaff_XMM7_Da);
    pfVar1[1] = -3.4028235e+38;
    pfVar1[2] = fStack0000000000000028;
    pfVar1[3] = 3.4028235e+38;
    fVar15 = *(float *)(uVar12 + 0x10 + lVar4);
    if (fVar15 <= *(float *)(unaff_RSI + 0x22c)) {
      fVar15 = *(float *)(unaff_RSI + 0x22c);
    }
    fVar14 = *(float *)(uVar12 + 0xc + lVar4);
    fVar16 = *(float *)(unaff_RSI + 0x228);
    if (*(float *)(unaff_RSI + 0x228) <= fVar14) {
      fVar16 = fVar14;
    }
    *(float *)(uVar12 + 0x10 + lVar4) = fVar15;
    *(float *)(uVar12 + 0xc + lVar4) = fVar16;
    fVar15 = *(float *)(uVar12 + 0x14 + lVar4);
    fVar14 = *(float *)(uVar12 + 0x18 + lVar4);
    if (*(float *)(unaff_RSI + 0x230) <= fVar15) {
      fVar15 = *(float *)(unaff_RSI + 0x230);
    }
    if (*(float *)(unaff_RSI + 0x234) <= fVar14) {
      fVar14 = *(float *)(unaff_RSI + 0x234);
    }
    *(float *)(uVar12 + 0x14 + lVar4) = fVar15;
    *(float *)(uVar12 + 0x18 + lVar4) = fVar14;
    uVar12 = uVar12 + 0x1c;
  } while ((int)uVar13 < unaff_R13D);
  DataStructure_91cf0(*(uint64_t *)(unaff_RSI + 0x2e8),*(int32_t *)(unaff_R14 + 0x10));
  lVar4 = SYSTEM_DATA_MANAGER_A;
  lVar5 = *(int64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x210);
  lVar11 = (int64_t)*(int *)(lVar5 + 0xc) * 0x1c + *(int64_t *)(lVar5 + 0x38);
  *(int8_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0xb1) = 1;
  lVar5 = *(int64_t *)(lVar4 + 0x1af8);
  DataStructure_91b40(*(uint64_t *)(lVar5 + 0x2e8),*(uint64_t *)(lVar11 + 0xc),
                *(uint64_t *)(lVar11 + 0x14),0);
  lVar4 = SYSTEM_DATA_MANAGER_A;
  puVar2 = (uint64_t *)
           (*(int64_t *)(*(int64_t *)(lVar5 + 0x2e8) + 0x68) + -0x10 +
           (int64_t)*(int *)(*(int64_t *)(lVar5 + 0x2e8) + 0x60) * 0x10);
  _fStack0000000000000028 = puVar2[1];
  *(uint64_t *)(lVar5 + 0x228) = *puVar2;
  *(uint64_t *)(lVar5 + 0x230) = _fStack0000000000000028;
  lVar5 = *(int64_t *)(*(int64_t *)(lVar4 + 0x1af8) + 0x210);
  fVar15 = *(float *)(lVar5 + 0x18);
  fVar14 = *(float *)(lVar5 + 0x14);
  fVar16 = *(float *)(((int64_t)*(int *)(lVar5 + 0xc) + 1) * 0x1c + *(int64_t *)(lVar5 + 0x38));
  fVar3 = *(float *)((int64_t)*(int *)(lVar5 + 0xc) * 0x1c + *(int64_t *)(lVar5 + 0x38));
  *(int8_t *)(*(int64_t *)(lVar4 + 0x1af8) + 0xb1) = 1;
  lVar5 = *(int64_t *)(lVar4 + 0x1af8);
  fVar15 = (fVar16 - fVar3) * (fVar15 - fVar14) * 0.65;
  if (fVar15 == unaff_XMM8_Da) {
    fVar15 = *(float *)(lVar5 + 0x284);
  }
  piVar10 = (int *)(lVar5 + 0x1c8);
  *(float *)(lVar5 + 0x1ac) = fVar15;
  iVar8 = *piVar10;
  iVar7 = *(int *)(lVar5 + 0x1cc);
  if (iVar8 == iVar7) {
    if (iVar7 == 0) {
      iVar7 = 8;
    }
    else {
      iVar7 = iVar7 / 2 + iVar7;
    }
    iVar6 = iVar8 + 1;
    if (iVar8 + 1 < iVar7) {
      iVar6 = iVar7;
    }
    GenericFunction_18011dbd0(piVar10,iVar6);
    iVar8 = *piVar10;
  }
  *(float *)(*(int64_t *)(lVar5 + 0x1d0) + (int64_t)iVar8 * 4) = *(float *)(lVar5 + 0x1ac);
  *piVar10 = *piVar10 + 1;
  return;
}
// 函数: void GenericFunction_180134b4f(int64_t param_1)
void GenericFunction_180134b4f(int64_t param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint64_t local_buffer_58;
  piVar4 = (int *)(param_1 + 0x1c8);
  *(int32_t *)(param_1 + 0x1ac) = *(int32_t *)(param_1 + 0x284);
  iVar3 = *piVar4;
  iVar2 = *(int *)(param_1 + 0x1cc);
  if (iVar3 == iVar2) {
    if (iVar2 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar2 / 2 + iVar2;
    }
    iVar1 = iVar3 + 1;
    if (iVar3 + 1 < iVar2) {
      iVar1 = iVar2;
    }
    local_buffer_58 = 0x18011d983;
    GenericFunction_18011dbd0(piVar4,iVar1);
    iVar3 = *piVar4;
  }
  *(int32_t *)(*(int64_t *)(param_1 + 0x1d0) + (int64_t)iVar3 * 4) =
       *(int32_t *)(param_1 + 0x1ac);
  *piVar4 = *piVar4 + 1;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_180134b80(void)
void GenericFunction_180134b80(void)
{
  int32_t *puVar1;
  float fVar2;
  int64_t lVar3;
  int *piVar4;
  uint uVar5;
  int32_t uVar6;
  int64_t lVar7;
  int iVar8;
  int64_t lVar9;
  int iVar10;
  int64_t lVar11;
  int iVar12;
  int iVar13;
  int64_t lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  char acStackX_8 [8];
  char acStackX_10 [8];
  int8_t stack_special_x_18;
  float fStackX_20;
  float fStackX_24;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  int32_t local_var_b0;
  int32_t local_var_ac;
  int32_t local_var_a8;
  float fStack_a4;
  lVar9 = SYSTEM_DATA_MANAGER_A;
  *(int8_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0xb1) = 1;
  lVar3 = *(int64_t *)(lVar9 + 0x1af8);
  piVar4 = *(int **)(lVar3 + 0x210);
  Function_c7f18569();
  GenericFunction_180126d80();
  DataStructure_91f60(*(uint64_t *)(lVar3 + 0x2e8));
  fVar16 = *(float *)(lVar3 + 0x104);
  if (*(float *)(lVar3 + 0x104) <= (float)piVar4[8]) {
    fVar16 = (float)piVar4[8];
  }
  piVar4[8] = (int)fVar16;
  *(float *)(lVar3 + 0x104) = fVar16;
  uVar5 = piVar4[1];
  if ((uVar5 & 0x10) == 0) {
    *(int *)(lVar3 + 0x118) = piVar4[10];
    uVar5 = piVar4[1];
  }
  stack_special_x_18 = 0;
  if (((uVar5 & 1) == 0) && (*(char *)(lVar3 + 0xb4) == '\0')) {
    iVar10 = 1;
    fVar2 = (float)piVar4[9];
    iVar12 = -1;
    if (1 < piVar4[4]) {
      lVar14 = 0x1c;
      lVar11 = SYSTEM_DATA_MANAGER_A;
      do {
        lVar7 = *(int64_t *)(*(int64_t *)(lVar11 + 0x1af8) + 0x210);
        iVar13 = iVar10;
        if (iVar10 < 0) {
          iVar13 = *(int *)(lVar7 + 0xc);
        }
        iVar8 = *piVar4 + iVar10;
        fVar17 = (*(float *)(lVar7 + 0x18) - *(float *)(lVar7 + 0x14)) *
                 *(float *)((int64_t)iVar13 * 0x1c + *(int64_t *)(lVar7 + 0x38)) +
                 *(float *)(lVar7 + 0x14) + *(float *)(lVar3 + 0x40);
        fStack_b8 = fVar17 + 4.0;
        fStack_c0 = fVar17 - 4.0;
        if (*(int *)(lVar11 + 0x1b2c) == iVar8) {
          *(int *)(lVar11 + 0x1b34) = iVar8;
        }
        if (*(int *)(lVar11 + 0x1b30) == iVar8) {
          *(int8_t *)(lVar11 + 0x1b3f) = 1;
        }
        lVar7 = *(int64_t *)(lVar11 + 0x1af8);
        fStack_bc = fVar2;
        fStack_b4 = fVar16;
        if (((((*(float *)(lVar7 + 0x22c) <= fVar16 && fVar16 != *(float *)(lVar7 + 0x22c)) &&
              (fVar2 < *(float *)(lVar7 + 0x234))) &&
             (*(float *)(lVar7 + 0x228) <= fStack_b8 && fStack_b8 != *(float *)(lVar7 + 0x228))) &&
            (fStack_c0 < *(float *)(lVar7 + 0x230))) ||
           (((iVar8 != 0 && (iVar8 == *(int *)(lVar11 + 0x1b2c))) ||
            (*(char *)(lVar11 + 0x2e38) != '\0')))) {
          acStackX_10[0] = '\0';
          acStackX_8[0] = '\0';
          if ((((*(byte *)(piVar4 + 1) & 2) == 0) &&
              ((SystemCore_Formatter(&fStack_c0,iVar8,acStackX_10,acStackX_8,0), acStackX_10[0] != '\0' ||
               (acStackX_8[0] != '\0')))) &&
             (*(int32_t *)(lVar9 + 0x1dcc) = 4, acStackX_8[0] != '\0')) {
            lVar7 = 0x1d;
            iVar13 = iVar10;
            if ((*(byte *)(*(int64_t *)(piVar4 + 0xe) + 8 + lVar14) & 2) != 0) {
              iVar13 = iVar12;
            }
          }
          else {
            lVar7 = (uint64_t)(acStackX_10[0] != '\0') + 0x1b;
            iVar13 = iVar12;
          }
          puVar1 = (int32_t *)(lVar11 + 0x1628 + (lVar7 + 10) * 0x10);
          local_var_b0 = *puVar1;
          local_var_ac = puVar1[1];
          local_var_a8 = puVar1[2];
          fStack_a4 = (float)puVar1[3] * *(float *)(lVar11 + 0x1628);
          fStackX_20 = (float)(int)fVar17;
          fStackX_24 = *(float *)(lVar3 + 0x234);
          if (fVar16 <= *(float *)(lVar3 + 0x234)) {
            fStackX_24 = fVar16;
          }
          fStack_c4 = fVar2 + 1.0;
          if (fVar2 + 1.0 <= *(float *)(lVar3 + 0x22c)) {
            fStack_c4 = *(float *)(lVar3 + 0x22c);
          }
          fStack_c8 = fStackX_20;
          uVar6 = Function_56da4ab5(&local_var_b0);
          SystemCore_SystemMonitor(*(uint64_t *)(lVar3 + 0x2e8),&fStack_c8,&fStackX_20,uVar6,0x3f800000);
          lVar11 = SYSTEM_DATA_MANAGER_A;
          iVar12 = iVar13;
        }
        iVar10 = iVar10 + 1;
        lVar14 = lVar14 + 0x1c;
      } while (iVar10 < piVar4[4]);
      if (iVar12 != -1) {
        if ((*(char *)((int64_t)piVar4 + 9) == '\0') && (iVar10 = 0, 0 < piVar4[4] + 1)) {
          lVar9 = 0;
          do {
            iVar10 = iVar10 + 1;
            *(int32_t *)(lVar9 + 4 + *(int64_t *)(piVar4 + 0xe)) =
                 *(int32_t *)(lVar9 + *(int64_t *)(piVar4 + 0xe));
            lVar9 = lVar9 + 0x1c;
          } while (iVar10 < piVar4[4] + 1);
        }
        *(int8_t *)((int64_t)piVar4 + 9) = 1;
        iVar10 = iVar12 + -1;
        stack_special_x_18 = 1;
        lVar9 = *(int64_t *)(*(int64_t *)(lVar11 + 0x1af8) + 0x210);
        fVar16 = ((*(float *)(lVar11 + 0x118) - *(float *)(lVar11 + 0x1b48)) + 4.0) -
                 *(float *)(*(int64_t *)(lVar11 + 0x1af8) + 0x40);
        if (iVar10 < 0) {
          iVar10 = *(int *)(lVar9 + 0xc);
        }
        fVar2 = *(float *)(lVar9 + 0x14);
        lVar14 = *(int64_t *)(lVar9 + 0x38);
        fVar15 = *(float *)(lVar9 + 0x18) - fVar2;
        fVar17 = fVar15 * *(float *)((int64_t)iVar10 * 0x1c + lVar14) + fVar2 +
                 *(float *)(lVar11 + 0x1688);
        if (fVar17 <= fVar16) {
          fVar17 = fVar16;
        }
        if ((*(byte *)(piVar4 + 1) & 4) != 0) {
          iVar10 = iVar12 + 1;
          if (iVar10 < 0) {
            iVar10 = *(int *)(lVar9 + 0xc);
          }
          lVar9 = (int64_t)iVar10 * 0x1c;
          fVar16 = (fVar15 * *(float *)(lVar9 + lVar14) + fVar2) - *(float *)(lVar11 + 0x1688);
          if (fVar16 <= fVar17) {
            fVar17 = fVar16;
          }
        }
        GenericFunction_1801342e0(iVar12,lVar9,lVar14,fVar17);
      }
    }
  }
  *(int8_t *)((int64_t)piVar4 + 9) = stack_special_x_18;
  *(uint64_t *)(lVar3 + 0x210) = 0;
  *(int32_t *)(lVar3 + 0x20c) = 0;
  *(float *)(lVar3 + 0x100) = (float)(int)(*(float *)(lVar3 + 0x204) + *(float *)(lVar3 + 0x40));
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_180134c17(void)
void GenericFunction_180134c17(void)
{
  int32_t *puVar1;
  int32_t uVar2;
  int64_t lVar3;
  int iVar4;
  int *unaff_RBX;
  int64_t unaff_RBP;
  int iVar5;
  int64_t lVar6;
  int64_t unaff_R13;
  int iVar7;
  int iVar8;
  int64_t lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_XMM7_Da;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  int32_t local_buffer_48;
  int32_t local_buffer_4c;
  int32_t local_buffer_50;
  float fStack0000000000000054;
  char local_var_100;
  char local_var_108;
  int8_t local_var_110;
  float fStack0000000000000118;
  float fStack000000000000011c;
  iVar5 = 1;
  fVar12 = (float)unaff_RBX[9];
  iVar7 = -1;
  if (1 < unaff_RBX[4]) {
    lVar9 = 0x1c;
    lVar6 = SYSTEM_DATA_MANAGER_A;
    do {
      lVar3 = *(int64_t *)(*(int64_t *)(lVar6 + 0x1af8) + 0x210);
      iVar8 = iVar5;
      if (iVar5 < 0) {
        iVar8 = *(int *)(lVar3 + 0xc);
      }
      iVar4 = *unaff_RBX + iVar5;
      fVar13 = (*(float *)(lVar3 + 0x18) - *(float *)(lVar3 + 0x14)) *
               *(float *)((int64_t)iVar8 * 0x1c + *(int64_t *)(lVar3 + 0x38)) +
               *(float *)(lVar3 + 0x14) + *(float *)(unaff_RBP + 0x40);
      fStack0000000000000040 = fVar13 + 4.0;
      fStack0000000000000038 = fVar13 - 4.0;
      if (*(int *)(lVar6 + 0x1b2c) == iVar4) {
        *(int *)(lVar6 + 0x1b34) = iVar4;
      }
      if (*(int *)(lVar6 + 0x1b30) == iVar4) {
        *(int8_t *)(lVar6 + 0x1b3f) = 1;
      }
      lVar3 = *(int64_t *)(lVar6 + 0x1af8);
      fStack000000000000003c = fVar12;
      if (((((*(float *)(lVar3 + 0x22c) <= unaff_XMM7_Da &&
              unaff_XMM7_Da != *(float *)(lVar3 + 0x22c)) && (fVar12 < *(float *)(lVar3 + 0x234)))
           && (*(float *)(lVar3 + 0x228) <= fStack0000000000000040 &&
               fStack0000000000000040 != *(float *)(lVar3 + 0x228))) &&
          (fStack0000000000000038 < *(float *)(lVar3 + 0x230))) ||
         (((iVar4 != 0 && (iVar4 == *(int *)(lVar6 + 0x1b2c))) ||
          (*(char *)(lVar6 + 0x2e38) != '\0')))) {
        local_var_108 = '\0';
        local_var_100 = '\0';
        if ((((*(byte *)(unaff_RBX + 1) & 2) == 0) &&
            ((SystemCore_Formatter(&local_buffer_00000038,iVar4,&local_buffer_00000108,&local_buffer_00000100,0),
             local_var_108 != '\0' || (local_var_100 != '\0')))) &&
           (*(int32_t *)(unaff_R13 + 0x1dcc) = 4, local_var_100 != '\0')) {
          lVar3 = 0x1d;
          iVar8 = iVar5;
          if ((*(byte *)(*(int64_t *)(unaff_RBX + 0xe) + 8 + lVar9) & 2) != 0) {
            iVar8 = iVar7;
          }
        }
        else {
          lVar3 = (uint64_t)(local_var_108 != '\0') + 0x1b;
          iVar8 = iVar7;
        }
        puVar1 = (int32_t *)(lVar6 + 0x1628 + (lVar3 + 10) * 0x10);
        local_buffer_48 = *puVar1;
        local_buffer_4c = puVar1[1];
        local_buffer_50 = puVar1[2];
        fStack0000000000000054 = (float)puVar1[3] * *(float *)(lVar6 + 0x1628);
        fStack0000000000000030 = (float)(int)fVar13;
        fStack000000000000011c = *(float *)(unaff_RBP + 0x234);
        if (unaff_XMM7_Da <= *(float *)(unaff_RBP + 0x234)) {
          fStack000000000000011c = unaff_XMM7_Da;
        }
        fStack0000000000000034 = fVar12 + 1.0;
        if (fVar12 + 1.0 <= *(float *)(unaff_RBP + 0x22c)) {
          fStack0000000000000034 = *(float *)(unaff_RBP + 0x22c);
        }
        fStack0000000000000118 = fStack0000000000000030;
        uVar2 = Function_56da4ab5(&local_buffer_00000048);
        SystemCore_SystemMonitor(*(uint64_t *)(unaff_RBP + 0x2e8),&local_buffer_00000030,&local_buffer_00000118,uVar2,
                      0x3f800000);
        lVar6 = SYSTEM_DATA_MANAGER_A;
        iVar7 = iVar8;
      }
      iVar5 = iVar5 + 1;
      lVar9 = lVar9 + 0x1c;
    } while (iVar5 < unaff_RBX[4]);
    if (iVar7 != -1) {
      if ((*(char *)((int64_t)unaff_RBX + 9) == '\0') && (iVar5 = 0, 0 < unaff_RBX[4] + 1)) {
        lVar9 = 0;
        do {
          iVar5 = iVar5 + 1;
          *(int32_t *)(lVar9 + 4 + *(int64_t *)(unaff_RBX + 0xe)) =
               *(int32_t *)(lVar9 + *(int64_t *)(unaff_RBX + 0xe));
          lVar9 = lVar9 + 0x1c;
        } while (iVar5 < unaff_RBX[4] + 1);
      }
      *(int8_t *)((int64_t)unaff_RBX + 9) = 1;
      iVar5 = iVar7 + -1;
      local_var_110 = 1;
      lVar9 = *(int64_t *)(*(int64_t *)(lVar6 + 0x1af8) + 0x210);
      fVar12 = ((*(float *)(lVar6 + 0x118) - *(float *)(lVar6 + 0x1b48)) + 4.0) -
               *(float *)(*(int64_t *)(lVar6 + 0x1af8) + 0x40);
      if (iVar5 < 0) {
        iVar5 = *(int *)(lVar9 + 0xc);
      }
      fVar13 = *(float *)(lVar9 + 0x14);
      lVar3 = *(int64_t *)(lVar9 + 0x38);
      fVar10 = *(float *)(lVar9 + 0x18) - fVar13;
      fVar11 = fVar10 * *(float *)((int64_t)iVar5 * 0x1c + lVar3) + fVar13 +
               *(float *)(lVar6 + 0x1688);
      if (fVar11 <= fVar12) {
        fVar11 = fVar12;
      }
      if ((*(byte *)(unaff_RBX + 1) & 4) != 0) {
        iVar5 = iVar7 + 1;
        if (iVar5 < 0) {
          iVar5 = *(int *)(lVar9 + 0xc);
        }
        lVar9 = (int64_t)iVar5 * 0x1c;
        fVar12 = (fVar10 * *(float *)(lVar9 + lVar3) + fVar13) - *(float *)(lVar6 + 0x1688);
        if (fVar12 <= fVar11) {
          fVar11 = fVar12;
        }
      }
      GenericFunction_1801342e0(iVar7,lVar9,lVar3,fVar11);
    }
  }
  *(int8_t *)((int64_t)unaff_RBX + 9) = local_var_110;
  *(uint64_t *)(unaff_RBP + 0x210) = 0;
  *(int32_t *)(unaff_RBP + 0x20c) = 0;
  *(float *)(unaff_RBP + 0x100) =
       (float)(int)(*(float *)(unaff_RBP + 0x204) + *(float *)(unaff_RBP + 0x40));
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address