// 原始函数语义化别名定义
// 本文件包含当前文件中使用的原始函数的语义化别名
// 这些别名提高了代码的可读性和维护性
#include "TaleWorlds.Native.Split.h"
// 99_part_03_part055.c - 6 个函数
// 函数: void DataStructure_32191(void)
void DataStructure_32191(void)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int iVar5;
  uint uVar6;
  uint64_t unaff_RBX;
  int64_t lVar7;
  int64_t lVar8;
  int64_t unaff_RSI;
  uint64_t uVar9;
  int64_t lVar10;
  int64_t in_R9;
  int64_t in_R10;
  int64_t lVar11;
  float *in_R11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float in_XMM3_Da;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM13_Da;
  lVar7 = (unaff_RSI - 4U >> 2) + 1;
  uVar4 = unaff_RBX;
  lVar8 = lVar7;
  uVar9 = unaff_RBX;
  do {
    lVar11 = *(int64_t *)(in_R10 + 0x18);
    *(float *)(uVar4 + lVar11) = *(float *)(uVar4 + lVar11) - unaff_XMM8_Da;
    *(float *)(uVar4 + 4 + lVar11) = *(float *)(uVar4 + 4 + lVar11) - unaff_XMM9_Da;
    *(float *)(uVar4 + lVar11) = in_XMM5_Da * *(float *)(uVar4 + lVar11);
    *(float *)(uVar4 + 4 + lVar11) = unaff_XMM6_Da * *(float *)(uVar4 + 4 + lVar11);
    *(float *)(uVar4 + 8 + lVar11) = unaff_XMM7_Da * *(float *)(uVar4 + 8 + lVar11);
    *(float *)(uVar4 + lVar11) = *in_R11 + *(float *)(uVar4 + lVar11);
    *(float *)(uVar4 + 4 + lVar11) = *(float *)(uVar4 + 4 + lVar11) + in_R11[1];
    lVar10 = *(int64_t *)(in_R9 + 8);
    iVar5 = (int)unaff_RBX;
    if (*(int *)(lVar10 + 0x38) != iVar5) {
      uVar3 = ((uint64_t *)(uVar4 + lVar11))[1];
      puVar1 = (uint64_t *)(*(int64_t *)(lVar10 + 0x40) + uVar4);
      *puVar1 = *(uint64_t *)(uVar4 + lVar11);
      puVar1[1] = uVar3;
      lVar10 = *(int64_t *)(in_R9 + 8);
    }
    lVar11 = *(int64_t *)(lVar10 + 0x18);
    fVar14 = *(float *)(*(int64_t *)(lVar10 + 0x68) + 0x48 + uVar9);
    fVar13 = fVar14;
    if (in_XMM3_Da <= fVar14) {
      fVar13 = in_XMM3_Da;
    }
    if (fVar14 <= in_XMM4_Da) {
      fVar14 = in_XMM4_Da;
    }
    *(float *)(lVar11 + 0x10 + uVar4) = *(float *)(lVar11 + 0x10 + uVar4) - unaff_XMM8_Da;
    *(float *)(lVar11 + 0x14 + uVar4) = *(float *)(lVar11 + 0x14 + uVar4) - unaff_XMM9_Da;
    *(float *)(lVar11 + 0x10 + uVar4) = in_XMM5_Da * *(float *)(lVar11 + 0x10 + uVar4);
    *(float *)(lVar11 + 0x14 + uVar4) = unaff_XMM6_Da * *(float *)(lVar11 + 0x14 + uVar4);
    *(float *)(lVar11 + 0x18 + uVar4) = unaff_XMM7_Da * *(float *)(lVar11 + 0x18 + uVar4);
    *(float *)(lVar11 + 0x10 + uVar4) = *in_R11 + *(float *)(lVar11 + 0x10 + uVar4);
    *(float *)(lVar11 + 0x14 + uVar4) = *(float *)(lVar11 + 0x14 + uVar4) + in_R11[1];
    lVar10 = *(int64_t *)(in_R9 + 8);
    if (*(int *)(lVar10 + 0x38) != iVar5) {
      puVar1 = (uint64_t *)(lVar11 + 0x10 + uVar4);
      uVar3 = puVar1[1];
      puVar2 = (uint64_t *)(*(int64_t *)(lVar10 + 0x40) + 0x10 + uVar4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      lVar10 = *(int64_t *)(in_R9 + 8);
    }
    lVar11 = *(int64_t *)(lVar10 + 0x18);
    fVar12 = *(float *)(*(int64_t *)(lVar10 + 0x68) + 0xa4 + uVar9);
    fVar15 = fVar12;
    if (fVar13 <= fVar12) {
      fVar15 = fVar13;
    }
    if (fVar12 <= fVar14) {
      fVar12 = fVar14;
    }
    *(float *)(uVar4 + 0x20 + lVar11) = *(float *)(uVar4 + 0x20 + lVar11) - unaff_XMM8_Da;
    *(float *)(uVar4 + 0x24 + lVar11) = *(float *)(uVar4 + 0x24 + lVar11) - unaff_XMM9_Da;
    *(float *)(uVar4 + 0x20 + lVar11) = in_XMM5_Da * *(float *)(uVar4 + 0x20 + lVar11);
    *(float *)(uVar4 + 0x24 + lVar11) = unaff_XMM6_Da * *(float *)(uVar4 + 0x24 + lVar11);
    *(float *)(uVar4 + 0x28 + lVar11) = unaff_XMM7_Da * *(float *)(uVar4 + 0x28 + lVar11);
    *(float *)(uVar4 + 0x20 + lVar11) = *in_R11 + *(float *)(uVar4 + 0x20 + lVar11);
    *(float *)(uVar4 + 0x24 + lVar11) = *(float *)(uVar4 + 0x24 + lVar11) + in_R11[1];
    lVar10 = *(int64_t *)(in_R9 + 8);
    if (*(int *)(lVar10 + 0x38) != iVar5) {
      puVar1 = (uint64_t *)(uVar4 + 0x20 + lVar11);
      uVar3 = puVar1[1];
      puVar2 = (uint64_t *)(*(int64_t *)(lVar10 + 0x40) + 0x20 + uVar4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      lVar10 = *(int64_t *)(in_R9 + 8);
    }
    lVar11 = *(int64_t *)(lVar10 + 0x18);
    fVar14 = *(float *)(*(int64_t *)(lVar10 + 0x68) + 0x100 + uVar9);
    fVar13 = fVar14;
    if (fVar14 <= fVar12) {
      fVar13 = fVar12;
    }
    if (fVar15 <= fVar14) {
      fVar14 = fVar15;
    }
    *(float *)(uVar4 + 0x30 + lVar11) = *(float *)(uVar4 + 0x30 + lVar11) - unaff_XMM8_Da;
    *(float *)(uVar4 + 0x34 + lVar11) = *(float *)(uVar4 + 0x34 + lVar11) - unaff_XMM9_Da;
    *(float *)(uVar4 + 0x30 + lVar11) = in_XMM5_Da * *(float *)(uVar4 + 0x30 + lVar11);
    *(float *)(uVar4 + 0x34 + lVar11) = unaff_XMM6_Da * *(float *)(uVar4 + 0x34 + lVar11);
    *(float *)(uVar4 + 0x38 + lVar11) = unaff_XMM7_Da * *(float *)(uVar4 + 0x38 + lVar11);
    *(float *)(uVar4 + 0x30 + lVar11) = *in_R11 + *(float *)(uVar4 + 0x30 + lVar11);
    *(float *)(uVar4 + 0x34 + lVar11) = *(float *)(uVar4 + 0x34 + lVar11) + in_R11[1];
    in_R10 = *(int64_t *)(in_R9 + 8);
    if (*(int *)(in_R10 + 0x38) != iVar5) {
      puVar1 = (uint64_t *)(uVar4 + 0x30 + lVar11);
      uVar3 = puVar1[1];
      puVar2 = (uint64_t *)(*(int64_t *)(in_R10 + 0x40) + 0x30 + uVar4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      in_R10 = *(int64_t *)(in_R9 + 8);
    }
    uVar4 = uVar4 + 0x40;
    in_XMM4_Da = *(float *)(*(int64_t *)(in_R10 + 0x68) + 0x15c + uVar9);
    uVar9 = uVar9 + 0x170;
    in_XMM3_Da = in_XMM4_Da;
    if (fVar14 <= in_XMM4_Da) {
      in_XMM3_Da = fVar14;
    }
    if (in_XMM4_Da <= fVar13) {
      in_XMM4_Da = fVar13;
    }
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  if (lVar7 * 4 < unaff_RSI) {
    lVar8 = lVar7 * 0x40;
    lVar11 = lVar7 * 0x170;
    lVar7 = unaff_RSI + lVar7 * -4;
    fVar14 = in_XMM3_Da;
    fVar13 = in_XMM4_Da;
    do {
      lVar10 = *(int64_t *)(in_R10 + 0x18);
      *(float *)(lVar8 + 8 + lVar10) = unaff_XMM7_Da * *(float *)(lVar8 + 8 + lVar10);
      fVar15 = (*(float *)(lVar8 + lVar10) - unaff_XMM8_Da) * in_XMM5_Da;
      fVar12 = (*(float *)(lVar8 + 4 + lVar10) - unaff_XMM9_Da) * unaff_XMM6_Da;
      *(float *)(lVar8 + lVar10) = fVar15;
      *(float *)(lVar8 + 4 + lVar10) = fVar12;
      *(float *)(lVar8 + lVar10) = fVar15 + *in_R11;
      *(float *)(lVar8 + 4 + lVar10) = fVar12 + in_R11[1];
      in_R10 = *(int64_t *)(in_R9 + 8);
      if (*(int *)(in_R10 + 0x38) != iVar5) {
        uVar3 = ((uint64_t *)(lVar8 + lVar10))[1];
        puVar1 = (uint64_t *)(*(int64_t *)(in_R10 + 0x40) + lVar8);
        *puVar1 = *(uint64_t *)(lVar8 + lVar10);
        puVar1[1] = uVar3;
        in_R10 = *(int64_t *)(in_R9 + 8);
      }
      lVar8 = lVar8 + 0x10;
      in_XMM4_Da = *(float *)(*(int64_t *)(in_R10 + 0x68) + 0x48 + lVar11);
      lVar11 = lVar11 + 0x5c;
      in_XMM3_Da = in_XMM4_Da;
      if (fVar14 <= in_XMM4_Da) {
        in_XMM3_Da = fVar14;
      }
      if (in_XMM4_Da <= fVar13) {
        in_XMM4_Da = fVar13;
      }
      lVar7 = lVar7 + -1;
      fVar14 = in_XMM3_Da;
      fVar13 = in_XMM4_Da;
    } while (lVar7 != 0);
  }
  uVar4 = unaff_RBX;
  if (iVar5 < *(int *)(in_R10 + 0x60)) {
    do {
      if (in_XMM3_Da == *(float *)(*(int64_t *)(in_R10 + 0x68) + 0x48 + unaff_RBX)) {
        *(float *)(*(int64_t *)(in_R10 + 0x68) + 0x48 + unaff_RBX) =
             (in_XMM4_Da - in_XMM3_Da) * (1.0 - unaff_XMM13_Da) + in_XMM3_Da;
      }
      in_R10 = *(int64_t *)(in_R9 + 8);
      uVar6 = (int)uVar4 + 1;
      unaff_RBX = unaff_RBX + 0x5c;
      uVar4 = (uint64_t)uVar6;
    } while ((int)uVar6 < *(int *)(in_R10 + 0x60));
  }
  *(int8_t *)(in_R9 + 0x30) = 1;
  return;
}
// 函数: void DataStructure_32489(void)
void DataStructure_32489(void)
{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint uVar5;
  uint64_t unaff_RBX;
  uint64_t uVar6;
  int64_t unaff_RSI;
  int64_t lVar7;
  int64_t in_R9;
  int64_t in_R10;
  int64_t lVar8;
  float *in_R11;
  int64_t unaff_R14;
  float fVar9;
  float fVar10;
  float in_XMM3_Da;
  float fVar11;
  float in_XMM4_Da;
  float fVar12;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM13_Da;
  if (unaff_R14 < unaff_RSI) {
    lVar4 = unaff_R14 << 4;
    lVar8 = unaff_R14 * 0x5c;
    lVar7 = unaff_RSI - unaff_R14;
    fVar11 = in_XMM3_Da;
    fVar12 = in_XMM4_Da;
    do {
      lVar2 = *(int64_t *)(in_R10 + 0x18);
      *(float *)(lVar4 + 8 + lVar2) = unaff_XMM7_Da * *(float *)(lVar4 + 8 + lVar2);
      fVar10 = (*(float *)(lVar4 + lVar2) - unaff_XMM8_Da) * in_XMM5_Da;
      fVar9 = (*(float *)(lVar4 + 4 + lVar2) - unaff_XMM9_Da) * unaff_XMM6_Da;
      *(float *)(lVar4 + lVar2) = fVar10;
      *(float *)(lVar4 + 4 + lVar2) = fVar9;
      *(float *)(lVar4 + lVar2) = fVar10 + *in_R11;
      *(float *)(lVar4 + 4 + lVar2) = fVar9 + in_R11[1];
      in_R10 = *(int64_t *)(in_R9 + 8);
      if (*(int *)(in_R10 + 0x38) != (int)unaff_RBX) {
        uVar3 = ((uint64_t *)(lVar4 + lVar2))[1];
        puVar1 = (uint64_t *)(*(int64_t *)(in_R10 + 0x40) + lVar4);
        *puVar1 = *(uint64_t *)(lVar4 + lVar2);
        puVar1[1] = uVar3;
        in_R10 = *(int64_t *)(in_R9 + 8);
      }
      lVar4 = lVar4 + 0x10;
      in_XMM4_Da = *(float *)(*(int64_t *)(in_R10 + 0x68) + 0x48 + lVar8);
      lVar8 = lVar8 + 0x5c;
      in_XMM3_Da = in_XMM4_Da;
      if (fVar11 <= in_XMM4_Da) {
        in_XMM3_Da = fVar11;
      }
      if (in_XMM4_Da <= fVar12) {
        in_XMM4_Da = fVar12;
      }
      lVar7 = lVar7 + -1;
      fVar11 = in_XMM3_Da;
      fVar12 = in_XMM4_Da;
    } while (lVar7 != 0);
  }
  uVar6 = unaff_RBX;
  if ((int)unaff_RBX < *(int *)(in_R10 + 0x60)) {
    do {
      if (in_XMM3_Da == *(float *)(*(int64_t *)(in_R10 + 0x68) + 0x48 + unaff_RBX)) {
        *(float *)(*(int64_t *)(in_R10 + 0x68) + 0x48 + unaff_RBX) =
             (in_XMM4_Da - in_XMM3_Da) * (1.0 - unaff_XMM13_Da) + in_XMM3_Da;
      }
      in_R10 = *(int64_t *)(in_R9 + 8);
      uVar5 = (int)uVar6 + 1;
      unaff_RBX = unaff_RBX + 0x5c;
      uVar6 = (uint64_t)uVar5;
    } while ((int)uVar5 < *(int *)(in_R10 + 0x60));
  }
  *(int8_t *)(in_R9 + 0x30) = 1;
  return;
}
// 函数: void DataStructure_32551(uint64_t param_1,int64_t param_2,uint64_t param_3,float param_4)
void DataStructure_32551(uint64_t param_1,int64_t param_2,uint64_t param_3,float param_4)
{
  uint uVar1;
  uint64_t unaff_RBX;
  int64_t in_R9;
  float in_XMM4_Da;
  float unaff_XMM13_Da;
  uint64_t uVar2;
  uVar2 = unaff_RBX;
  do {
    if (param_4 == *(float *)(*(int64_t *)(param_2 + 0x68) + 0x48 + unaff_RBX)) {
      *(float *)(*(int64_t *)(param_2 + 0x68) + 0x48 + unaff_RBX) =
           (in_XMM4_Da - param_4) * (1.0 - unaff_XMM13_Da) + param_4;
    }
    param_2 = *(int64_t *)(in_R9 + 8);
    uVar1 = (int)uVar2 + 1;
    uVar2 = (uint64_t)uVar1;
    unaff_RBX = unaff_RBX + 0x5c;
  } while ((int)uVar1 < *(int *)(param_2 + 0x60));
  *(int8_t *)(in_R9 + 0x30) = 1;
  return;
}
// 函数: void DataStructure_325e0(int64_t param_1,float *param_2,float *param_3,float *param_4,int *param_5,
void DataStructure_325e0(int64_t param_1,float *param_2,float *param_3,float *param_4,int *param_5,
                  float param_6)
{
  int64_t lVar1;
  int64_t lVar2;
  float *pfVar3;
  int64_t lVar4;
  float *pfVar5;
  int64_t lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStackX_8;
  float fStackX_c;
  uint64_t local_var_118;
  uint64_t local_var_110;
  int32_t local_var_108;
  int32_t local_var_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  int32_t local_var_e0;
  int32_t local_var_dc;
  float fStack_d8;
  float fStack_d4;
  int32_t local_var_d0;
  int32_t local_var_cc;
  lVar1 = *(int64_t *)(param_1 + 8);
  lVar4 = 0;
  lVar6 = (int64_t)*(int *)(lVar1 + 0x10);
  fVar13 = -9999.0;
  fVar14 = -9999.0;
  fVar15 = 9999.0;
  fVar16 = 9999.0;
  if (3 < lVar6) {
    lVar2 = (lVar6 - 4U >> 2) + 1;
    lVar4 = lVar2 * 4;
    pfVar3 = (float *)(*(int64_t *)(lVar1 + 0x18) + 0x10);
    pfVar5 = (float *)(*(int64_t *)(lVar1 + 0x18) + 0x24);
    do {
      fVar9 = pfVar3[-4];
      fVar10 = pfVar3[-3];
      fVar7 = fVar9;
      if (fVar9 <= fVar13) {
        fVar7 = fVar13;
      }
      if (fVar15 <= fVar9) {
        fVar9 = fVar15;
      }
      fVar8 = fVar10;
      if (fVar10 <= fVar14) {
        fVar8 = fVar14;
      }
      if (fVar16 <= fVar10) {
        fVar10 = fVar16;
      }
      if (fVar7 <= *pfVar3) {
        fVar7 = *pfVar3;
      }
      if (*pfVar3 <= fVar9) {
        fVar9 = *pfVar3;
      }
      if (fVar8 <= pfVar5[-4]) {
        fVar8 = pfVar5[-4];
      }
      if (pfVar5[-4] <= fVar10) {
        fVar10 = pfVar5[-4];
      }
      if (fVar7 <= pfVar3[4]) {
        fVar7 = pfVar3[4];
      }
      if (pfVar3[4] <= fVar9) {
        fVar9 = pfVar3[4];
      }
      if (fVar8 <= *pfVar5) {
        fVar8 = *pfVar5;
      }
      if (*pfVar5 <= fVar10) {
        fVar10 = *pfVar5;
      }
      fVar13 = fVar7;
      if (fVar7 <= pfVar3[8]) {
        fVar13 = pfVar3[8];
      }
      fVar15 = fVar9;
      if (pfVar3[8] <= fVar9) {
        fVar15 = pfVar3[8];
      }
      fVar14 = fVar8;
      if (fVar8 <= pfVar5[4]) {
        fVar14 = pfVar5[4];
      }
      fVar16 = fVar10;
      if (pfVar5[4] <= fVar10) {
        fVar16 = pfVar5[4];
      }
      lVar2 = lVar2 + -1;
      pfVar3 = pfVar3 + 0x10;
      pfVar5 = pfVar5 + 0x10;
    } while (lVar2 != 0);
  }
  if (lVar4 < lVar6) {
    pfVar3 = (float *)(lVar4 * 0x10 + *(int64_t *)(lVar1 + 0x18));
    lVar6 = lVar6 - lVar4;
    fVar9 = fVar13;
    fVar10 = fVar14;
    fVar7 = fVar15;
    fVar8 = fVar16;
    do {
      fVar15 = *pfVar3;
      fVar16 = pfVar3[1];
      fVar13 = fVar15;
      if (fVar15 <= fVar9) {
        fVar13 = fVar9;
      }
      if (fVar7 <= fVar15) {
        fVar15 = fVar7;
      }
      pfVar3 = pfVar3 + 4;
      fVar14 = fVar16;
      if (fVar16 <= fVar10) {
        fVar14 = fVar10;
      }
      if (fVar8 <= fVar16) {
        fVar16 = fVar8;
      }
      lVar6 = lVar6 + -1;
      fVar9 = fVar13;
      fVar10 = fVar14;
      fVar7 = fVar15;
      fVar8 = fVar16;
    } while (lVar6 != 0);
  }
  fVar14 = fVar14 - fVar16;
  if ((fVar13 - fVar15 != 0.0) && (fVar14 != 0.0)) {
    fVar16 = param_3[1];
    fVar9 = param_2[1];
    lVar4 = *(int64_t *)(lVar1 + 0x68);
    param_6 = (fVar13 - fVar15) * param_6;
    *(int64_t *)(lVar1 + 0x70) = lVar4;
    local_var_118 = CONCAT44(local_var_118._4_4_,0x447a0000);
    fVar10 = (fVar16 - fVar9) / fVar14;
    *(int64_t *)(lVar1 + 0x78) = (int64_t)*(int *)(lVar1 + 0x60) * 0x5c + lVar4;
    lVar1 = *(int64_t *)(param_1 + 8);
    fVar15 = -1000.0;
    fVar16 = -1000.0;
    fVar13 = 1000.0;
    fVar9 = 1000.0;
    while (*(int64_t *)(lVar1 + 0x78) != lVar4) {
      fStack_fc = *(float *)(lVar4 + 0x48);
      fStack_100 = *(float *)(lVar4 + 0x44);
      fStackX_c = fStack_fc;
      if (fVar13 <= fStack_fc) {
        fStackX_c = fVar13;
      }
      fStackX_8 = fStack_100;
      if (fVar9 <= fStack_100) {
        fStackX_8 = fVar9;
      }
      lVar4 = lVar4 + 0x5c;
      if (fStack_100 <= fVar15) {
        fStack_100 = fVar15;
      }
      if (fStack_fc <= fVar16) {
        fStack_fc = fVar16;
      }
      local_var_118 = CONCAT44(fStackX_c,fStackX_8);
      local_var_110 = CONCAT44(fStack_fc,fStack_100);
      fVar15 = fStack_100;
      fVar16 = fStack_fc;
      fVar13 = fStackX_c;
      fVar9 = fStackX_8;
    }
    *(int32_t *)(lVar1 + 0x10) = 0;
    *(int32_t *)(lVar1 + 0x38) = 0;
    *(int32_t *)(lVar1 + 0x88) = 0;
    *(int32_t *)(lVar1 + 0x60) = 0;
    *(int16_t *)(lVar1 + 0xc0) = 0;
    if (*(int64_t *)(lVar1 + 0xb8) != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)(lVar1 + 0xb8) = 0;
    GenericFunction_180085530(*(uint64_t *)(lVar1 + 0xb0));
    *(uint64_t *)(lVar1 + 0xb0) = 0;
    fVar16 = fVar16 - fVar13;
    *(int32_t *)(lVar1 + 200) = 0;
    fVar15 = fVar15 - fVar9;
    *(int16_t *)(param_1 + 0x30) = 0x101;
    fVar7 = *param_3;
    fVar13 = fVar13 + fVar16;
    local_var_118 = CONCAT44(fVar13,(int32_t)local_var_118);
    local_var_110 = CONCAT44(fVar16,fVar15);
    if (*param_2 < fVar7) {
      fVar11 = fVar10 * param_6;
      fVar8 = *param_2;
      do {
        fStackX_8 = -NAN;
        fVar12 = fVar11 + fVar8;
        if (fVar12 <= fVar7) {
          local_var_d0 = 0;
          local_var_cc = 0x7f7fffff;
          fStack_f0 = fVar11;
          fStack_ec = fVar10 * fVar14;
          fStack_d8 = fVar8;
          fStack_d4 = param_2[1];
          DataStructure_356b0(param_1,&fStack_d8,&fStack_f0,&local_var_118,&local_var_110,&fStackX_8);
          fVar7 = *param_3;
        }
        else {
          fStack_f8 = fVar7 - fVar8;
          local_var_e0 = 0;
          local_var_dc = 0x7f7fffff;
          fStack_100 = (fStack_f8 * fVar15) / fVar11;
          fStack_fc = fVar16;
          fStack_f4 = fVar10 * fVar14;
          fStack_e8 = fVar8;
          fStack_e4 = param_2[1];
          DataStructure_356b0(param_1,&fStack_e8,&fStack_f8,&local_var_118,&fStack_100,&fStackX_8);
          fVar12 = *param_3;
          fVar7 = fVar12;
        }
        fVar8 = fVar12;
      } while (fVar12 < fVar7);
    }
    fStack_d4 = *param_4;
    if (0.0 < fStack_d4) {
      fStack_d8 = *param_2;
      fStackX_8 = -NAN;
      local_var_d0 = 0;
      local_var_cc = 0x7f7fffff;
      local_var_e0 = 0;
      local_var_dc = 0x7f7fffff;
      local_var_108 = 0;
      local_var_104 = 0x7f7fffff;
      fStack_e8 = fStack_d8 - fStack_d4;
      fStack_ec = fVar13 - fVar16;
      fStack_100 = fVar15 + fVar9;
      fStack_f8 = (1.0 - fStack_d4 * (1.0 / (fVar10 * param_6))) * fVar15 + fVar9;
      fStack_f0 = fStack_100;
      if (*param_5 != 0) {
        fStack_e4 = param_3[1];
        fStack_d4 = fStack_e4 - fStack_d4;
        local_var_110 = CONCAT44(fStack_e4,fStack_d8);
        fStack_fc = fVar13;
        fStack_f4 = fVar13;
// WARNING: Subroutine does not return
        DataStructure_354f0(param_1,&local_var_110,&fStack_e8,&fStack_d8,&fStack_100,&fStack_f8,&fStack_f0,
                      &fStackX_8);
      }
      fStack_e4 = param_2[1];
      fStack_d4 = fStack_e4 + fStack_d4;
      local_var_110 = CONCAT44(fStack_e4,fStack_e8);
      fStack_100 = fStack_f8;
      fStack_fc = fStack_ec;
      fStack_f8 = fStack_f0;
      fStack_f4 = fStack_ec;
      fStack_ec = fVar13;
      fStack_e8 = fStack_d8;
// WARNING: Subroutine does not return
      DataStructure_354f0(param_1,&local_var_110,&fStack_e8,&fStack_d8,&fStack_100,&fStack_f8,&fStack_f0,
                    &fStackX_8);
    }
  }
  return;
}
// 函数: void DataStructure_327a4(int64_t param_1)
void DataStructure_327a4(int64_t param_1)
{
  float fVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t in_RAX;
  int64_t unaff_RBP;
  float *unaff_RSI;
  int64_t unaff_RDI;
  int64_t in_R11;
  int iVar6;
  uint64_t unaff_R12;
  float *unaff_R14;
  float *unaff_R15;
  float fVar7;
  float fVar8;
  float unaff_XMM6_Da;
  float fVar9;
  float fVar10;
  float unaff_XMM7_Da;
  float fVar11;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM11_Da;
  float fVar12;
  float fVar13;
  int32_t unaff_XMM13_Da;
  int32_t unaff_XMM13_Dc;
  float fVar14;
  float fVar15;
  float fStack0000000000000040;
  float fStack0000000000000044;
  uint64_t local_var_48;
  int local_buffer_50;
  int32_t local_buffer_54;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  int iStack0000000000000078;
  int32_t local_buffer_7c;
  int32_t local_buffer_b0;
  int32_t local_buffer_b8;
  *(int64_t *)(in_R11 + 0x70) = in_RAX;
  _fStack0000000000000040 = CONCAT44(fStack0000000000000044,0x447a0000);
  fVar9 = unaff_XMM6_Da / unaff_XMM9_Da;
  *(int64_t *)(in_R11 + 0x78) = param_1 * 0x5c + in_RAX;
  lVar3 = *(int64_t *)(unaff_RDI + 8);
  lVar4 = *(int64_t *)(lVar3 + 0x78);
  fVar13 = unaff_XMM11_Da;
  fVar14 = 1000.0;
  fVar15 = 1000.0;
  while (lVar4 != in_RAX) {
    fStack000000000000005c = *(float *)(in_RAX + 0x48);
    fStack0000000000000058 = *(float *)(in_RAX + 0x44);
    fVar7 = fStack000000000000005c;
    if (fVar14 <= fStack000000000000005c) {
      fVar7 = fVar14;
    }
    fVar14 = fStack0000000000000058;
    if (fVar15 <= fStack0000000000000058) {
      fVar14 = fVar15;
    }
    in_RAX = in_RAX + 0x5c;
    if (fStack0000000000000058 <= unaff_XMM11_Da) {
      fStack0000000000000058 = unaff_XMM11_Da;
    }
    if (fStack000000000000005c <= fVar13) {
      fStack000000000000005c = fVar13;
    }
    *(float *)(unaff_RBP + 100) = fVar7;
    *(float *)(unaff_RBP + 0x60) = fVar14;
    uVar5 = *(uint64_t *)(unaff_RBP + 0x60);
    fStack0000000000000044 = (float)((uint64_t)uVar5 >> 0x20);
    fStack0000000000000040 = (float)uVar5;
    local_var_48 = CONCAT44(fStack000000000000005c,fStack0000000000000058);
    unaff_XMM11_Da = fStack0000000000000058;
    fVar13 = fStack000000000000005c;
    fVar14 = fStack0000000000000044;
    fVar15 = fStack0000000000000040;
    _fStack0000000000000040 = uVar5;
  }
  iVar6 = (int)unaff_R12;
  *(int *)(lVar3 + 0x10) = iVar6;
  *(int *)(lVar3 + 0x38) = iVar6;
  *(int *)(lVar3 + 0x88) = iVar6;
  *(int *)(lVar3 + 0x60) = iVar6;
  *(short *)(lVar3 + 0xc0) = (short)unaff_R12;
  if (*(int64_t *)(lVar3 + 0xb8) == 0) {
    *(uint64_t *)(lVar3 + 0xb8) = unaff_R12;
    GenericFunction_180085530(*(uint64_t *)(lVar3 + 0xb0));
    *(uint64_t *)(lVar3 + 0xb0) = unaff_R12;
    fVar13 = fVar13 - fVar14;
    *(int *)(lVar3 + 200) = iVar6;
    fVar12 = unaff_XMM11_Da - fVar15;
    *(int16_t *)(unaff_RDI + 0x30) = 0x101;
    fVar7 = *unaff_RSI;
    fVar14 = fVar14 + fVar13;
    _fStack0000000000000040 = CONCAT44(fVar14,fStack0000000000000040);
    local_var_48 = CONCAT44(fVar13,fVar12);
    if (*unaff_R14 < fVar7) {
      fVar10 = fVar9 * unaff_XMM8_Da;
      fVar8 = *unaff_R14;
      local_buffer_b0 = unaff_XMM13_Da;
      local_buffer_b8 = unaff_XMM13_Dc;
      do {
        fVar1 = unaff_R14[1];
        *(int32_t *)(unaff_RBP + 0x60) = 0xffffffff;
        fVar11 = fVar10 + fVar8;
        if (fVar11 <= fVar7) {
          *(float *)(unaff_RBP + -0x80) = fVar8;
          *(float *)(unaff_RBP + -0x7c) = fVar1;
          *(int *)(unaff_RBP + -0x78) = iVar6;
          *(int32_t *)(unaff_RBP + -0x74) = 0x7f7fffff;
          fStack0000000000000068 = fVar10;
          fStack000000000000006c = fVar9 * unaff_XMM9_Da;
          DataStructure_356b0(fVar1,unaff_RBP + -0x80,&local_buffer_00000068,&local_buffer_00000040,&local_buffer_00000048);
          fVar7 = *unaff_RSI;
        }
        else {
          fStack0000000000000060 = fVar7 - fVar8;
          local_buffer_7c = 0x7f7fffff;
          fStack0000000000000058 = (fStack0000000000000060 * fVar12) / fVar10;
          fStack000000000000005c = fVar13;
          fStack0000000000000064 = fVar9 * unaff_XMM9_Da;
          fStack0000000000000070 = fVar8;
          fStack0000000000000074 = fVar1;
          iStack0000000000000078 = iVar6;
          DataStructure_356b0(fVar1,&local_buffer_00000070,&local_buffer_00000060,&local_buffer_00000040,&local_buffer_00000058);
          fVar11 = *unaff_RSI;
          fVar7 = fVar11;
        }
        fVar8 = fVar11;
      } while (fVar11 < fVar7);
      unaff_XMM7_Da = 0.0;
    }
    fVar7 = *unaff_R15;
    if (fVar7 <= unaff_XMM7_Da) {
      return;
    }
    fVar8 = *unaff_R14;
    *(float *)(unaff_RBP + -0x80) = fVar8;
    iVar2 = **(int **)(unaff_RBP + 0x80);
    *(int32_t *)(unaff_RBP + 0x60) = 0xffffffff;
    *(int *)(unaff_RBP + -0x78) = iVar6;
    *(int32_t *)(unaff_RBP + -0x74) = 0x7f7fffff;
    local_buffer_7c = 0x7f7fffff;
    local_buffer_54 = 0x7f7fffff;
    fStack0000000000000070 = fVar8 - fVar7;
    fStack000000000000006c = fVar14 - fVar13;
    fStack0000000000000058 = fVar12 + fVar15;
    fStack0000000000000060 = (1.0 - fVar7 * (1.0 / (fVar9 * unaff_XMM8_Da))) * fVar12 + fVar15;
    local_buffer_50 = iVar6;
    fStack0000000000000068 = fStack0000000000000058;
    if (iVar2 != iVar6) {
      fStack0000000000000074 = unaff_RSI[1];
      *(float *)(unaff_RBP + -0x7c) = fStack0000000000000074 - fVar7;
      local_var_48 = CONCAT44(fStack0000000000000074,fVar8);
      fStack000000000000005c = fVar14;
      fStack0000000000000064 = fVar14;
      iStack0000000000000078 = iVar6;
// WARNING: Subroutine does not return
      DataStructure_354f0(fStack0000000000000074 - fVar7,&local_buffer_00000048,&local_buffer_00000070,
                    unaff_RBP + -0x80,&local_buffer_00000058);
    }
    fStack0000000000000074 = unaff_R14[1];
    *(float *)(unaff_RBP + -0x7c) = fStack0000000000000074 + fVar7;
    local_var_48 = CONCAT44(fStack0000000000000074,fStack0000000000000070);
    fStack0000000000000058 = fStack0000000000000060;
    fStack000000000000005c = fStack000000000000006c;
    fStack0000000000000060 = fStack0000000000000068;
    fStack0000000000000064 = fStack000000000000006c;
    fStack000000000000006c = fVar14;
    fStack0000000000000070 = fVar8;
    iStack0000000000000078 = iVar6;
// WARNING: Subroutine does not return
    DataStructure_354f0(fStack0000000000000074 + fVar7,&local_buffer_00000048,&local_buffer_00000070,unaff_RBP + -0x80
                  ,&local_buffer_00000058);
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// 函数: void DataStructure_32909(uint64_t param_1,float param_2,float param_3)
void DataStructure_32909(uint64_t param_1,float param_2,float param_3)
{
  float fVar1;
  int iVar2;
  int64_t unaff_RBP;
  float *unaff_RSI;
  int unaff_R12D;
  float *unaff_R14;
  float *unaff_R15;
  float unaff_XMM6_Da;
  float fVar3;
  float fVar4;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  uint64_t *plocal_buffer_28;
  float local_var_48;
  float fStack000000000000004c;
  int32_t local_buffer_50;
  int32_t local_buffer_54;
  float local_buffer_58;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  int iStack0000000000000078;
  int32_t local_buffer_7c;
  fVar3 = unaff_XMM6_Da * unaff_XMM8_Da;
  do {
    fVar1 = unaff_R14[1];
    plocal_buffer_28 = (uint64_t *)(unaff_RBP + 0x60);
    *(int32_t *)(unaff_RBP + 0x60) = 0xffffffff;
    fVar4 = fVar3 + param_2;
    if (fVar4 <= param_3) {
      *(float *)(unaff_RBP + -0x80) = param_2;
      *(float *)(unaff_RBP + -0x7c) = fVar1;
      *(int *)(unaff_RBP + -0x78) = unaff_R12D;
      *(int32_t *)(unaff_RBP + -0x74) = 0x7f7fffff;
      fStack0000000000000068 = fVar3;
      fStack000000000000006c = unaff_XMM6_Da * unaff_XMM9_Da;
      DataStructure_356b0(fVar1,unaff_RBP + -0x80,&local_buffer_00000068,&local_buffer_00000040,&local_buffer_00000048);
      param_3 = *unaff_RSI;
    }
    else {
      fStack0000000000000060 = param_3 - param_2;
      local_buffer_7c = 0x7f7fffff;
      local_buffer_58 = (fStack0000000000000060 * unaff_XMM11_Da) / fVar3;
      fStack0000000000000064 = unaff_XMM6_Da * unaff_XMM9_Da;
      fStack0000000000000070 = param_2;
      fStack0000000000000074 = fVar1;
      iStack0000000000000078 = unaff_R12D;
      DataStructure_356b0(fVar1,&local_buffer_00000070,&local_buffer_00000060,&local_buffer_00000040,&local_buffer_00000058);
      fVar4 = *unaff_RSI;
      param_3 = fVar4;
    }
    param_2 = fVar4;
  } while (fVar4 < param_3);
  fVar1 = *unaff_R15;
  if (0.0 < fVar1) {
    local_var_48 = *unaff_R14;
    *(float *)(unaff_RBP + -0x80) = local_var_48;
    iVar2 = **(int **)(unaff_RBP + 0x80);
    plocal_buffer_28 = (uint64_t *)&local_buffer_00000060;
    *(int32_t *)(unaff_RBP + 0x60) = 0xffffffff;
    *(int *)(unaff_RBP + -0x78) = unaff_R12D;
    *(int32_t *)(unaff_RBP + -0x74) = 0x7f7fffff;
    local_buffer_7c = 0x7f7fffff;
    local_buffer_54 = 0x7f7fffff;
    fStack0000000000000070 = local_var_48 - fVar1;
    fStack000000000000005c = unaff_XMM14_Da - unaff_XMM12_Da;
    local_buffer_58 = unaff_XMM11_Da + unaff_XMM15_Da;
    fStack0000000000000060 = (1.0 - fVar1 * (1.0 / fVar3)) * unaff_XMM11_Da + unaff_XMM15_Da;
    fStack0000000000000068 = local_buffer_58;
    if (iVar2 == unaff_R12D) {
      fStack000000000000004c = unaff_R14[1];
      *(float *)(unaff_RBP + -0x7c) = fStack000000000000004c + fVar1;
      fVar3 = local_var_48;
      local_var_48 = fStack0000000000000070;
      local_buffer_58 = fStack0000000000000060;
      fStack0000000000000060 = fStack0000000000000068;
      fStack0000000000000064 = fStack000000000000005c;
      fStack0000000000000070 = fVar3;
      fStack0000000000000074 = fStack000000000000004c;
// WARNING: Subroutine does not return
      DataStructure_354f0(fStack000000000000004c + fVar1,&local_buffer_00000048,&local_buffer_00000070,
                    unaff_RBP + -0x80,&local_buffer_00000058);
    }
    fStack000000000000004c = unaff_RSI[1];
    *(float *)(unaff_RBP + -0x7c) = fStack000000000000004c - fVar1;
    fStack000000000000006c = fStack000000000000005c;
    fStack0000000000000074 = fStack000000000000004c;
// WARNING: Subroutine does not return
    DataStructure_354f0(fStack000000000000004c - fVar1,&local_buffer_00000048,&local_buffer_00000070,unaff_RBP + -0x80
                  ,&local_buffer_00000058);
  }
  return;
}