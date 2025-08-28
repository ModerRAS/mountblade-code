#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 04_ui_system_part165.c - 14 个函数
// 函数: void function_766970(int64_t param_1,float *param_2)
void function_766970(int64_t param_1,float *param_2)
{
  float *pfVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  pfVar1 = param_2 + 3;
  fVar4 = param_2[2];
  fVar5 = param_2[5];
  fVar6 = fVar4 - *(float *)(param_1 + 0x94);
  uVar2 = *(uint64_t *)pfVar1;
  uVar3 = *(uint64_t *)param_2;
  fVar7 = (float)((uint64_t)uVar3 >> 0x20) - *(float *)(param_1 + 0x90);
  fVar8 = (float)uVar3 - *(float *)(param_1 + 0x8c);
  fVar11 = (float)uVar2 - *(float *)(param_1 + 0x8c);
  fVar9 = fVar5 - *(float *)(param_1 + 0x94);
  fVar10 = (float)((uint64_t)uVar2 >> 0x20) - *(float *)(param_1 + 0x90);
  *param_2 = fVar7 * *(float *)(param_1 + 0xd8) + fVar8 * *(float *)(param_1 + 0xd4) +
             fVar6 * *(float *)(param_1 + 0xdc);
  param_2[1] = fVar7 * *(float *)(param_1 + 0xe8) + fVar8 * *(float *)(param_1 + 0xe4) +
               fVar6 * *(float *)(param_1 + 0xec);
  param_2[2] = fVar7 * *(float *)(param_1 + 0xf8) + fVar8 * *(float *)(param_1 + 0xf4) +
               fVar6 * *(float *)(param_1 + 0xfc);
  *pfVar1 = fVar10 * *(float *)(param_1 + 0xd8) + fVar11 * *(float *)(param_1 + 0xd4) +
            fVar9 * *(float *)(param_1 + 0xdc);
  param_2[4] = fVar11 * *(float *)(param_1 + 0xe4) + fVar10 * *(float *)(param_1 + 0xe8) +
               fVar9 * *(float *)(param_1 + 0xec);
  param_2[5] = fVar11 * *(float *)(param_1 + 0xf4) + fVar10 * *(float *)(param_1 + 0xf8) +
               fVar9 * *(float *)(param_1 + 0xfc);
  function_7e4630(param_1 + 0x110,function_766ba0,param_2,param_2,pfVar1);
  *(uint64_t *)param_2 = uVar3;
  *(uint64_t *)pfVar1 = uVar2;
  param_2[5] = fVar5;
  param_2[2] = fVar4;
  param_2[8] = 0.0;
  param_2[9] = 0.0;
  return;
}
uint64_t function_766ba0(int64_t param_1,float *param_2)
{
  float fVar1;
  float fVar2;
  float fVar3;
  int64_t lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int64_t lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  fVar12 = param_2[1];
  fVar11 = *param_2;
  fVar9 = param_2[2];
  fVar1 = *(float *)(param_1 + 0xa4);
  fVar14 = (fVar11 * fVar1 + fVar12 * *(float *)(param_1 + 0xa8) +
           fVar9 * *(float *)(param_1 + 0xac)) - *(float *)(param_1 + 0xa0);
  fVar10 = (fVar1 * param_2[3] + *(float *)(param_1 + 0xa8) * param_2[4] +
           *(float *)(param_1 + 0xac) * param_2[5]) - *(float *)(param_1 + 0xa0);
  if (fVar14 < 0.0) {
LAB_180766c72:
    if (fVar10 <= 0.0) {
      return 1;
    }
    if (0.0 < fVar14) goto LAB_180766c82;
  }
  else {
    if (0.0 <= fVar10) {
      return 1;
    }
    if (fVar14 <= 0.0) goto LAB_180766c72;
LAB_180766c82:
    if ((*(uint *)(param_1 + 0xb8) & 0x10000) == 0) {
      return 1;
    }
  }
  fVar14 = fVar14 / (fVar14 - fVar10);
  uVar7 = *(uint *)(param_1 + 0xb8) & 0xffff;
  uVar6 = 0;
  if (uVar7 != 0) {
    lVar8 = 0;
    do {
      uVar5 = uVar6 + 1;
      lVar4 = 0;
      if ((int)uVar5 < (int)uVar7) {
        lVar4 = lVar8 + 1;
      }
      fVar10 = *(float *)(param_1 + 0xc0 + lVar8 * 0xc);
      fVar2 = *(float *)(param_1 + 0xbc + lVar8 * 0xc);
      fVar3 = *(float *)(param_1 + 0xc4 + lVar8 * 0xc);
      fVar13 = *(float *)(param_1 + 0xc4 + lVar4 * 0xc) - fVar3;
      fVar16 = *(float *)(param_1 + 0xbc + lVar4 * 0xc) - fVar2;
      fVar15 = *(float *)(param_1 + 0xc0 + lVar4 * 0xc) - fVar10;
    } while (((fVar1 * fVar13 - *(float *)(param_1 + 0xac) * fVar16) *
              (((param_2[4] - fVar12) * fVar14 + fVar12) - fVar10) +
              (*(float *)(param_1 + 0xac) * fVar15 - *(float *)(param_1 + 0xa8) * fVar13) *
              (((param_2[3] - fVar11) * fVar14 + fVar11) - fVar2) +
              (*(float *)(param_1 + 0xa8) * fVar16 - fVar1 * fVar15) *
              (((param_2[5] - fVar9) * fVar14 + fVar9) - fVar3) <= 0.0) &&
            (lVar8 = lVar8 + 1, uVar6 = uVar5, (int)uVar5 < (int)uVar7));
  }
  if (uVar6 != uVar7) {
    return 1;
  }
  fVar12 = 1.0 - *(float *)(param_1 + 0xb0);
  if ((*(uint *)(**(int64_t **)(*(int64_t *)(param_2 + 8) + 0x18) + 0x78) & 0x40000) == 0) {
    fVar12 = fVar12 * param_2[6];
    param_2[6] = fVar12;
    fVar11 = (1.0 - *(float *)(param_1 + 0xb4)) * param_2[7];
  }
  else {
    fVar9 = param_2[6];
    fVar11 = 1.0 - *(float *)(param_1 + 0xb4);
    if ((fVar9 <= fVar12) && ((fVar12 != fVar9 || (param_2[7] <= fVar11)))) goto LAB_180766e88;
    param_2[6] = fVar12;
  }
  param_2[7] = fVar11;
  fVar9 = fVar12;
LAB_180766e88:
  if ((fVar9 < 0.05) && (param_2[7] <= 0.05 && param_2[7] != 0.05)) {
    return 0;
  }
  return 1;
}
uint64_t function_766ce1(int64_t param_1,int64_t param_2,int64_t param_3,int param_4)
{
  int64_t lVar1;
  uint64_t uVar2;
  int iVar3;
  int in_R10D;
  int64_t lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  lVar4 = 0;
  do {
    iVar3 = param_4 + 1;
    lVar1 = 0;
    if (iVar3 < in_R10D) {
      lVar1 = lVar4 + 1;
    }
    uVar2 = lVar4 * 3;
    fVar7 = *(float *)(param_3 + 0xc0 + lVar4 * 0xc);
    fVar6 = *(float *)(param_3 + 0xbc + lVar4 * 0xc);
    fVar5 = *(float *)(param_3 + 0xc4 + lVar4 * 0xc);
    fVar8 = *(float *)(param_3 + 0xc4 + lVar1 * 0xc) - fVar5;
    fVar10 = *(float *)(param_3 + 0xbc + lVar1 * 0xc) - fVar6;
    fVar9 = *(float *)(param_3 + 0xc0 + lVar1 * 0xc) - fVar7;
  } while (((unaff_XMM13_Da * fVar8 - *(float *)(param_1 + 0xac) * fVar10) *
            (unaff_XMM11_Da - fVar7) +
            (*(float *)(param_1 + 0xac) * fVar9 - *(float *)(param_1 + 0xa8) * fVar8) *
            (unaff_XMM10_Da - fVar6) +
            (*(float *)(param_1 + 0xa8) * fVar10 - unaff_XMM13_Da * fVar9) *
            (unaff_XMM12_Da - fVar5) <= unaff_XMM9_Da) &&
          (lVar4 = lVar4 + 1, param_4 = iVar3, iVar3 < in_R10D));
  if (param_4 != in_R10D) goto LAB_180766e9f;
  fVar7 = 1.0 - *(float *)(param_3 + 0xb0);
  uVar2 = **(uint64_t **)(*(int64_t *)(param_2 + 0x20) + 0x18);
  if ((*(uint *)(uVar2 + 0x78) & 0x40000) == 0) {
    fVar7 = fVar7 * *(float *)(param_2 + 0x18);
    *(float *)(param_2 + 0x18) = fVar7;
    fVar6 = (1.0 - *(float *)(param_3 + 0xb4)) * *(float *)(param_2 + 0x1c);
LAB_180766e83:
    *(float *)(param_2 + 0x1c) = fVar6;
    fVar5 = fVar7;
  }
  else {
    fVar5 = *(float *)(param_2 + 0x18);
    fVar6 = 1.0 - *(float *)(param_3 + 0xb4);
    if ((fVar7 < fVar5) || ((fVar7 == fVar5 && (fVar6 < *(float *)(param_2 + 0x1c))))) {
      *(float *)(param_2 + 0x18) = fVar7;
      goto LAB_180766e83;
    }
  }
  if ((fVar5 < 0.05) && (*(float *)(param_2 + 0x1c) <= 0.05 && *(float *)(param_2 + 0x1c) != 0.05))
  {
    return uVar2 & 0xffffffffffffff00;
  }
LAB_180766e9f:
  return CONCAT71((int7)(uVar2 >> 8),1);
}
uint64_t function_766e0f(uint64_t param_1,int64_t param_2,int64_t param_3,int param_4)
{
  int in_R10D;
  float fVar1;
  float fVar2;
  float fVar3;
  if (param_4 != in_R10D) {
    return 1;
  }
  fVar3 = 1.0 - *(float *)(param_3 + 0xb0);
  if ((*(uint *)(**(int64_t **)(*(int64_t *)(param_2 + 0x20) + 0x18) + 0x78) & 0x40000) == 0) {
    fVar3 = fVar3 * *(float *)(param_2 + 0x18);
    *(float *)(param_2 + 0x18) = fVar3;
    fVar2 = (1.0 - *(float *)(param_3 + 0xb4)) * *(float *)(param_2 + 0x1c);
  }
  else {
    fVar1 = *(float *)(param_2 + 0x18);
    fVar2 = 1.0 - *(float *)(param_3 + 0xb4);
    if ((fVar1 <= fVar3) && ((fVar3 != fVar1 || (*(float *)(param_2 + 0x1c) <= fVar2))))
    goto LAB_180766e88;
    *(float *)(param_2 + 0x18) = fVar3;
  }
  *(float *)(param_2 + 0x1c) = fVar2;
  fVar1 = fVar3;
LAB_180766e88:
  if ((fVar1 < 0.05) && (*(float *)(param_2 + 0x1c) <= 0.05 && *(float *)(param_2 + 0x1c) != 0.05))
  {
    return 0;
  }
  return 1;
}
// 函数: void function_766ee0(int64_t param_1)
void function_766ee0(int64_t param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  fVar1 = (*(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x6c)) * 0.5;
  fVar5 = (*(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0x68)) * 0.5;
  fVar8 = (*(float *)(param_1 + 0x60) + *(float *)(param_1 + 100)) * 0.5;
  fVar2 = (*(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x5c)) * 0.5;
  fVar3 = (*(float *)(param_1 + 100) - *(float *)(param_1 + 0x60)) * 0.5;
  fVar7 = (*(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x58)) * 0.5;
  fVar6 = fVar8 * *(float *)(param_1 + 0xa8) + fVar2 * *(float *)(param_1 + 0xa4) +
          fVar1 * *(float *)(param_1 + 0xac) + *(float *)(param_1 + 0x8c);
  fVar4 = fVar8 * *(float *)(param_1 + 0xb8) + fVar2 * *(float *)(param_1 + 0xb4) +
          fVar1 * *(float *)(param_1 + 0xbc) + *(float *)(param_1 + 0x90);
  fVar9 = fVar8 * *(float *)(param_1 + 200) + fVar2 * *(float *)(param_1 + 0xc4) +
          fVar1 * *(float *)(param_1 + 0xcc) + *(float *)(param_1 + 0x94);
  fVar8 = ABS(*(float *)(param_1 + 0xb4)) * fVar3 + ABS(*(float *)(param_1 + 0xa4)) * fVar7 +
          ABS(*(float *)(param_1 + 0xc4)) * fVar5;
  fVar2 = ABS(*(float *)(param_1 + 0xb8)) * fVar3 + ABS(*(float *)(param_1 + 0xa8)) * fVar7 +
          ABS(*(float *)(param_1 + 200)) * fVar5;
  fVar1 = ABS(*(float *)(param_1 + 0xbc)) * fVar3 + ABS(*(float *)(param_1 + 0xac)) * fVar7 +
          ABS(*(float *)(param_1 + 0xcc)) * fVar5;
  *(float *)(*(int64_t *)(param_1 + 0x108) + 4) = fVar8 + fVar6;
  **(float **)(param_1 + 0x108) = fVar6 - fVar8;
  *(float *)(*(int64_t *)(param_1 + 0x108) + 0xc) = fVar2 + fVar4;
  *(float *)(*(int64_t *)(param_1 + 0x108) + 8) = fVar4 - fVar2;
  *(float *)(*(int64_t *)(param_1 + 0x108) + 0x14) = fVar1 + fVar9;
  *(float *)(*(int64_t *)(param_1 + 0x108) + 0x10) = fVar9 - fVar1;
  if (*(char *)(param_1 + 0x70) == '\0') {
    function_7e3740(*(uint64_t *)(*(int64_t *)(param_1 + 0x18) + 0x1a0),
                  *(uint64_t *)(param_1 + 0x108));
  }
  else {
    function_7e46a0();
  }
  return;
}
// 函数: void function_7671a0(int64_t param_1,float *param_2,int32_t *param_3,float *param_4)
void function_7671a0(int64_t param_1,float *param_2,int32_t *param_3,float *param_4)
{
  float fVar1;
  int32_t uVar2;
  float fVar3;
  float fVar4;
  fVar3 = *param_2 - *(float *)(param_1 + 0x60);
  fVar4 = param_2[1] - *(float *)(param_1 + 100);
  fVar1 = param_2[2] - *(float *)(param_1 + 0x68);
  fVar1 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar1 * fVar1);
  if (*(float *)(param_1 + 0x6c) < fVar1) {
    uVar2 = 0;
    if (fVar1 < *(float *)(param_1 + 0x70)) {
      fVar3 = 1.0;
      if (0.0 < *(float *)(param_1 + 0x74)) {
        fVar1 = (fVar1 - *(float *)(param_1 + 0x6c)) / *(float *)(param_1 + 0x74);
        fVar3 = 1.0 - fVar1;
        uVar2 = powf(0x41200000,fVar1 * -3.0);
      }
      else {
        uVar2 = 0x3f800000;
      }
    }
    else {
      fVar3 = 0.0;
    }
  }
  else {
    fVar3 = 1.0;
    uVar2 = 0x3f800000;
  }
  if (param_3 != (int32_t *)0x0) {
    *param_3 = uVar2;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = fVar3;
  }
  return;
}
// 函数: void function_7671e3(float param_1,uint64_t param_2,float param_3,float param_4)
void function_7671e3(float param_1,uint64_t param_2,float param_3,float param_4)
{
  int64_t in_RCX;
  float *unaff_RBX;
  int32_t *in_R8;
  int32_t uVar1;
  float fVar2;
  float fVar3;
  fVar2 = SQRT(param_3 + param_1);
  if (param_4 < fVar2) {
    uVar1 = 0;
    if (fVar2 < *(float *)(in_RCX + 0x70)) {
      fVar3 = 1.0;
      if (0.0 < *(float *)(in_RCX + 0x74)) {
        fVar2 = (fVar2 - param_4) / *(float *)(in_RCX + 0x74);
        fVar3 = 1.0 - fVar2;
        uVar1 = powf(0x41200000,fVar2 * -3.0);
      }
      else {
        uVar1 = 0x3f800000;
      }
    }
    else {
      fVar3 = 0.0;
    }
  }
  else {
    fVar3 = 1.0;
    uVar1 = 0x3f800000;
  }
  if (in_R8 != (int32_t *)0x0) {
    *in_R8 = uVar1;
  }
  if (unaff_RBX != (float *)0x0) {
    *unaff_RBX = fVar3;
  }
  return;
}
// 函数: void function_76725e(void)
void function_76725e(void)
{
  int32_t *unaff_RBX;
  int32_t unaff_XMM6_Da;
  *unaff_RBX = unaff_XMM6_Da;
  return;
}
// 函数: void function_767270(float *param_1,float *param_2,float param_3)
void function_767270(float *param_1,float *param_2,float param_3)
{
  float fVar1;
  float fVar2;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[10] = 0.0;
  param_1[0xb] = 0.0;
  if ((param_1 != (float *)0x0) && (param_2 != (float *)0x0)) {
    *param_1 = param_3 * *param_2;
    param_1[1] = param_3 * param_2[1];
    param_1[2] = param_3 * param_2[2];
    fVar1 = (float)expf(param_3 * param_2[3]);
    param_1[3] = fVar1;
    param_1[4] = param_3 * param_2[4];
    param_1[5] = param_3 * param_2[5];
    param_1[6] = param_3 * param_2[6];
    fVar1 = (float)expf(param_3 * param_2[7]);
    fVar2 = -80.0;
    param_1[7] = fVar1;
    if (param_2[8] <= 0.0) {
      fVar1 = -80.0;
    }
    else {
      fVar1 = (float)logf(param_2[8] * param_3);
      fVar1 = fVar1 * 5.0;
    }
    param_1[8] = fVar1;
    fVar1 = (float)expf(param_3 * param_2[9]);
    param_1[9] = fVar1;
    param_1[10] = param_3 * param_2[10];
    if (0.0 < param_2[0xb]) {
      fVar2 = (float)logf(param_2[0xb] * param_3);
      fVar2 = fVar2 * 5.0;
    }
    param_1[0xb] = fVar2;
  }
  return;
}
// 函数: void function_7672b6(float param_1,float *param_2,float param_3)
void function_7672b6(float param_1,float *param_2,float param_3)
{
  float *in_RCX;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  int32_t uVar1;
  float fVar2;
  float unaff_XMM6_Da;
  float fVar3;
  *in_RCX = param_1 * *param_2;
  in_RCX[1] = param_3 * param_2[1];
  in_RCX[2] = param_3 * param_2[2];
  uVar1 = expf(param_3 * param_2[3]);
  *(int32_t *)(unaff_RBX + 0xc) = uVar1;
  *(float *)(unaff_RBX + 0x10) = unaff_XMM6_Da * *(float *)(unaff_RDI + 0x10);
  *(float *)(unaff_RBX + 0x14) = unaff_XMM6_Da * *(float *)(unaff_RDI + 0x14);
  *(float *)(unaff_RBX + 0x18) = unaff_XMM6_Da * *(float *)(unaff_RDI + 0x18);
  uVar1 = expf(unaff_XMM6_Da * *(float *)(unaff_RDI + 0x1c));
  fVar3 = -80.0;
  *(int32_t *)(unaff_RBX + 0x1c) = uVar1;
  if (*(float *)(unaff_RDI + 0x20) <= 0.0) {
    fVar2 = -80.0;
  }
  else {
    fVar2 = (float)logf(*(float *)(unaff_RDI + 0x20) * unaff_XMM6_Da);
    fVar2 = fVar2 * 5.0;
  }
  *(float *)(unaff_RBX + 0x20) = fVar2;
  uVar1 = expf(unaff_XMM6_Da * *(float *)(unaff_RDI + 0x24));
  *(int32_t *)(unaff_RBX + 0x24) = uVar1;
  *(float *)(unaff_RBX + 0x28) = unaff_XMM6_Da * *(float *)(unaff_RDI + 0x28);
  if (0.0 < *(float *)(unaff_RDI + 0x2c)) {
    fVar3 = (float)logf(*(float *)(unaff_RDI + 0x2c) * unaff_XMM6_Da);
    fVar3 = fVar3 * 5.0;
  }
  *(float *)(unaff_RBX + 0x2c) = fVar3;
  return;
}
// 函数: void function_7672c2(int32_t param_1,int64_t param_2,float param_3)
void function_7672c2(int32_t param_1,int64_t param_2,float param_3)
{
  int32_t *in_RCX;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  int32_t uVar1;
  float fVar2;
  float in_XMM1_Da;
  float unaff_XMM6_Da;
  float fVar3;
  *in_RCX = param_1;
  in_RCX[1] = in_XMM1_Da * *(float *)(param_2 + 4);
  in_RCX[2] = param_3 * *(float *)(param_2 + 8);
  uVar1 = expf(param_3 * *(float *)(param_2 + 0xc));
  *(int32_t *)(unaff_RBX + 0xc) = uVar1;
  *(float *)(unaff_RBX + 0x10) = unaff_XMM6_Da * *(float *)(unaff_RDI + 0x10);
  *(float *)(unaff_RBX + 0x14) = unaff_XMM6_Da * *(float *)(unaff_RDI + 0x14);
  *(float *)(unaff_RBX + 0x18) = unaff_XMM6_Da * *(float *)(unaff_RDI + 0x18);
  uVar1 = expf(unaff_XMM6_Da * *(float *)(unaff_RDI + 0x1c));
  fVar3 = -80.0;
  *(int32_t *)(unaff_RBX + 0x1c) = uVar1;
  if (*(float *)(unaff_RDI + 0x20) <= 0.0) {
    fVar2 = -80.0;
  }
  else {
    fVar2 = (float)logf(*(float *)(unaff_RDI + 0x20) * unaff_XMM6_Da);
    fVar2 = fVar2 * 5.0;
  }
  *(float *)(unaff_RBX + 0x20) = fVar2;
  uVar1 = expf(unaff_XMM6_Da * *(float *)(unaff_RDI + 0x24));
  *(int32_t *)(unaff_RBX + 0x24) = uVar1;
  *(float *)(unaff_RBX + 0x28) = unaff_XMM6_Da * *(float *)(unaff_RDI + 0x28);
  if (0.0 < *(float *)(unaff_RDI + 0x2c)) {
    fVar3 = (float)logf(*(float *)(unaff_RDI + 0x2c) * unaff_XMM6_Da);
    fVar3 = fVar3 * 5.0;
  }
  *(float *)(unaff_RBX + 0x2c) = fVar3;
  return;
}
// 函数: void function_767390(float param_1)
void function_767390(float param_1)
{
  int64_t unaff_RBX;
  float fVar1;
  float unaff_XMM6_Da;
  fVar1 = (float)logf(param_1 * unaff_XMM6_Da);
  *(float *)(unaff_RBX + 0x2c) = fVar1 * 5.0;
  return;
}
// 函数: void function_7673ae(void)
void function_7673ae(void)
{
  return;
}
uint64_t function_767440(int64_t *param_1,uint param_2,int64_t param_3)
{
  int iVar1;
  uint64_t uVar2;
  int iVar3;
  int iVar4;
  int aiStackX_10 [4];
  int32_t astack_special_x_20 [2];
  int64_t alStack_28 [2];
  if (3 < param_2) {
    return 0x1f;
  }
  *param_1 = param_3;
  *(uint *)(param_1 + 2) = param_2;
  if (param_1[1] != 0) {
    return 0;
  }
  uVar2 = SystemFunction_000180771d40(*(uint64_t *)(param_3 + 0x11418),aiStackX_10);
  if ((int)uVar2 == 0) {
    iVar4 = 0;
    iVar3 = iVar4;
    if (0 < aiStackX_10[0]) {
      do {
        alStack_28[0] = 0;
        iVar1 = SystemFunction_000180771cd0(*(uint64_t *)(*param_1 + 0x11418),iVar3,astack_special_x_20);
        if (((iVar1 == 0) &&
            (iVar1 = SystemFunction_000180771c60(*(uint64_t *)(*param_1 + 0x11418),astack_special_x_20[0],
                                         alStack_28), iVar1 == 0)) &&
           (*(int *)(alStack_28[0] + 0x18) == 0x13)) {
          uVar2 = function_7716e0(*(uint64_t *)(*param_1 + 0x11418),alStack_28[0],0,param_1 + 1);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          iVar3 = *(int *)(*param_1 + 0x1193c);
          if (1000 < iVar3) goto LAB_180767577;
          if (iVar3 == 1000) {
LAB_180767572:
            iVar4 = 2;
          }
          else {
            switch(iVar3) {
            case 2:
              iVar4 = 1;
              break;
            case 3:
              goto LAB_180767572;
            case 4:
              iVar4 = 4;
              break;
            case 5:
              iVar4 = 5;
              break;
            case 6:
              iVar4 = 6;
              break;
            case 7:
              iVar4 = 8;
              break;
            case 8:
              iVar4 = 0xc;
            }
          }
LAB_180767577:
          function_7621f0(param_1[1],0,iVar4);
          uVar2 = SystemFunction_000180762a70(param_1[1],0xc,0xc2a00000);
          return uVar2;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < aiStackX_10[0]);
    }
    uVar2 = 0x36;
  }
  return uVar2;
}
uint64_t function_767457(int64_t *param_1,int32_t param_2,int64_t param_3)
{
  int iVar1;
  uint64_t uVar2;
  int iVar3;
  int64_t *unaff_RSI;
  int iVar4;
  bool in_ZF;
  int64_t lStackX_20;
  int local_buffer_58;
  int32_t local_buffer_68;
  *param_1 = param_3;
  *(int32_t *)(param_1 + 2) = param_2;
  if (!in_ZF) {
    return 0;
  }
  uVar2 = SystemFunction_000180771d40(*(uint64_t *)(param_3 + 0x11418),&local_buffer_00000058);
  if ((int)uVar2 == 0) {
    iVar4 = 0;
    iVar3 = iVar4;
    if (0 < local_buffer_58) {
      do {
        lStackX_20 = 0;
        iVar1 = SystemFunction_000180771cd0(*(uint64_t *)(*unaff_RSI + 0x11418),iVar3,&local_buffer_00000068);
        if (((iVar1 == 0) &&
            (iVar1 = SystemFunction_000180771c60(*(uint64_t *)(*unaff_RSI + 0x11418),local_buffer_68,
                                         &lStackX_20), iVar1 == 0)) &&
           (*(int *)(lStackX_20 + 0x18) == 0x13)) {
          uVar2 = function_7716e0(*(uint64_t *)(*unaff_RSI + 0x11418),lStackX_20,0,unaff_RSI + 1);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          iVar3 = *(int *)(*unaff_RSI + 0x1193c);
          if (1000 < iVar3) goto LAB_180767577;
          if (iVar3 == 1000) {
LAB_180767572:
            iVar4 = 2;
          }
          else {
            switch(iVar3) {
            case 2:
              iVar4 = 1;
              break;
            case 3:
              goto LAB_180767572;
            case 4:
              iVar4 = 4;
              break;
            case 5:
              iVar4 = 5;
              break;
            case 6:
              iVar4 = 6;
              break;
            case 7:
              iVar4 = 8;
              break;
            case 8:
              iVar4 = 0xc;
            }
          }
LAB_180767577:
          function_7621f0(unaff_RSI[1],0,iVar4);
          uVar2 = SystemFunction_000180762a70(unaff_RSI[1],0xc,0xc2a00000);
          return uVar2;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_buffer_58);
    }
    uVar2 = 0x36;
  }
  return uVar2;
}
uint64_t function_76747d(void)
{
  int iVar1;
  uint64_t uVar2;
  int iVar3;
  int64_t *unaff_RSI;
  int iVar4;
  int64_t lStackX_20;
  int local_buffer_58;
  int32_t local_buffer_68;
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < local_buffer_58) {
    do {
      lStackX_20 = 0;
      iVar1 = SystemFunction_000180771cd0(*(uint64_t *)(*unaff_RSI + 0x11418),iVar3,&local_buffer_00000068);
      if (((iVar1 == 0) &&
          (iVar1 = SystemFunction_000180771c60(*(uint64_t *)(*unaff_RSI + 0x11418),local_buffer_68,
                                       &lStackX_20), iVar1 == 0)) &&
         (*(int *)(lStackX_20 + 0x18) == 0x13)) {
        uVar2 = function_7716e0(*(uint64_t *)(*unaff_RSI + 0x11418),lStackX_20,0,unaff_RSI + 1);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        iVar3 = *(int *)(*unaff_RSI + 0x1193c);
        if (1000 < iVar3) goto LAB_180767577;
        if (iVar3 == 1000) {
LAB_180767572:
          iVar4 = 2;
        }
        else {
          switch(iVar3) {
          case 2:
            iVar4 = 1;
            break;
          case 3:
            goto LAB_180767572;
          case 4:
            iVar4 = 4;
            break;
          case 5:
            iVar4 = 5;
            break;
          case 6:
            iVar4 = 6;
            break;
          case 7:
            iVar4 = 8;
            break;
          case 8:
            iVar4 = 0xc;
          }
        }
LAB_180767577:
        function_7621f0(unaff_RSI[1],0,iVar4);
        uVar2 = SystemFunction_000180762a70(unaff_RSI[1],0xc,0xc2a00000);
        return uVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_buffer_58);
  }
  return 0x36;
}
// 函数: void function_7674ee(void)
void function_7674ee(void)
{
  return;
}
// 函数: void function_7674f9(uint64_t param_1,uint64_t param_2)
void function_7674f9(uint64_t param_1,uint64_t param_2)
{
  int iVar1;
  int64_t *unaff_RSI;
  int32_t unaff_EDI;
  iVar1 = function_7716e0(*(uint64_t *)(*unaff_RSI + 0x11418),param_2,0,unaff_RSI + 1);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = *(int *)(*unaff_RSI + 0x1193c);
  if (1000 < iVar1) goto LAB_180767577;
  if (iVar1 == 1000) {
LAB_180767572:
    unaff_EDI = 2;
  }
  else {
    switch(iVar1) {
    case 2:
      unaff_EDI = 1;
      break;
    case 3:
      goto LAB_180767572;
    case 4:
      unaff_EDI = 4;
      break;
    case 5:
      unaff_EDI = 5;
      break;
    case 6:
      unaff_EDI = 6;
      break;
    case 7:
      unaff_EDI = 8;
      break;
    case 8:
      unaff_EDI = 0xc;
    }
  }
LAB_180767577:
  function_7621f0(unaff_RSI[1],0,unaff_EDI);
  SystemFunction_000180762a70(unaff_RSI[1],0xc,0xc2a00000);
  return;
}
uint64_t function_7675a0(void)
{
  return 0;
}
uint64_t function_7675ad(void)
{
  return 0x1f;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_7675e0(int64_t *param_1,char param_2)
{
  *(int64_t *)param_1[1] = *param_1;
  *(int64_t *)(*param_1 + 8) = param_1[1];
  param_1[1] = (int64_t)param_1;
  *param_1 = (int64_t)param_1;
  if (param_1[10] != 0) {
    function_78b880();
  }
  if (param_2 != '\0') {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&ui_system_data_1216_ptr,0x13a,1);
  }
  return 0;
}
uint64_t function_767660(int64_t param_1)
{
  uint64_t uVar1;
  if (*(int64_t *)(param_1 + 8) != 0) {
    uVar1 = SystemCore_ConfigurationManager(*(int64_t *)(param_1 + 8),0,0,4);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = (**(code **)(**(int64_t **)(param_1 + 8) + 0x10))();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    *(uint64_t *)(param_1 + 8) = 0;
  }
  return 0;
}
uint64_t function_7676b0(int64_t param_1,int32_t *param_2)
{
  uint64_t uVar1;
  if (*(int64_t *)(param_1 + 8) != 0) {
    uVar1 = SystemCore_Initializer(*(int64_t *)(param_1 + 8),1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = SystemFunction_000180762a70(*(uint64_t *)(param_1 + 8),0,*param_2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = SystemFunction_000180762a70(*(uint64_t *)(param_1 + 8),1,param_2[1]);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = SystemFunction_000180762a70(*(uint64_t *)(param_1 + 8),2,param_2[2]);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = SystemFunction_000180762a70(*(uint64_t *)(param_1 + 8),3,param_2[3]);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = SystemFunction_000180762a70(*(uint64_t *)(param_1 + 8),4,param_2[4]);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = SystemFunction_000180762a70(*(uint64_t *)(param_1 + 8),5,param_2[5]);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = SystemFunction_000180762a70(*(uint64_t *)(param_1 + 8),6,param_2[6]);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = SystemFunction_000180762a70(*(uint64_t *)(param_1 + 8),7,param_2[7]);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = SystemFunction_000180762a70(*(uint64_t *)(param_1 + 8),8,param_2[8]);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = SystemFunction_000180762a70(*(uint64_t *)(param_1 + 8),9,param_2[9]);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = SystemFunction_000180762a70(*(uint64_t *)(param_1 + 8),10,param_2[10]);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = SystemFunction_000180762a70(*(uint64_t *)(param_1 + 8),0xb,param_2[0xb]);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}
// 函数: void function_767800(float *param_1,float *param_2,float param_3)
void function_767800(float *param_1,float *param_2,float param_3)
{
  float fVar1;
  float fVar2;
  if ((param_1 != (float *)0x0) && (param_2 != (float *)0x0)) {
    fVar2 = 0.0;
    *param_1 = param_3 * *param_2 + *param_1;
    param_1[1] = param_3 * param_2[1] + param_1[1];
    param_1[2] = param_3 * param_2[2] + param_1[2];
    if (param_2[3] <= 0.0) {
      fVar1 = 0.0;
    }
    else {
      fVar1 = (float)logf();
      fVar1 = fVar1 * param_3;
    }
    param_1[3] = fVar1 + param_1[3];
    param_1[4] = param_3 * param_2[4] + param_1[4];
    param_1[5] = param_3 * param_2[5] + param_1[5];
    param_1[6] = param_3 * param_2[6] + param_1[6];
    if (param_2[7] <= 0.0) {
      fVar1 = 0.0;
    }
    else {
      fVar1 = (float)logf();
      fVar1 = fVar1 * param_3;
    }
    param_1[7] = fVar1 + param_1[7];
    fVar1 = (float)expf(param_2[8] * 0.2);
    param_1[8] = fVar1 * param_3 + param_1[8];
    if (0.0 < param_2[9]) {
      fVar2 = (float)logf();
      fVar2 = fVar2 * param_3;
    }
    param_1[9] = fVar2 + param_1[9];
    param_1[10] = param_3 * param_2[5] + param_1[10];
    fVar2 = (float)expf(param_2[0xb] * 0.2);
    param_1[0xb] = fVar2 * param_3 + param_1[0xb];
  }
  return;
}
// 函数: void function_76782d(float param_1,float *param_2,float param_3)
void function_76782d(float param_1,float *param_2,float param_3)
{
  float *in_RCX;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  float fVar1;
  float fVar2;
  float unaff_XMM7_Da;
  fVar2 = 0.0;
  *in_RCX = param_1 * *param_2 + *in_RCX;
  in_RCX[1] = param_3 * param_2[1] + in_RCX[1];
  in_RCX[2] = param_3 * param_2[2] + in_RCX[2];
  if (param_2[3] <= 0.0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = (float)logf();
    fVar1 = fVar1 * unaff_XMM7_Da;
  }
  *(float *)(unaff_RBX + 0xc) = fVar1 + *(float *)(unaff_RBX + 0xc);
  *(float *)(unaff_RBX + 0x10) =
       unaff_XMM7_Da * *(float *)(unaff_RDI + 0x10) + *(float *)(unaff_RBX + 0x10);
  *(float *)(unaff_RBX + 0x14) =
       unaff_XMM7_Da * *(float *)(unaff_RDI + 0x14) + *(float *)(unaff_RBX + 0x14);
  *(float *)(unaff_RBX + 0x18) =
       unaff_XMM7_Da * *(float *)(unaff_RDI + 0x18) + *(float *)(unaff_RBX + 0x18);
  if (*(float *)(unaff_RDI + 0x1c) <= 0.0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = (float)logf();
    fVar1 = fVar1 * unaff_XMM7_Da;
  }
  *(float *)(unaff_RBX + 0x1c) = fVar1 + *(float *)(unaff_RBX + 0x1c);
  fVar1 = (float)expf(*(float *)(unaff_RDI + 0x20) * 0.2);
  *(float *)(unaff_RBX + 0x20) = fVar1 * unaff_XMM7_Da + *(float *)(unaff_RBX + 0x20);
  if (0.0 < *(float *)(unaff_RDI + 0x24)) {
    fVar2 = (float)logf();
    fVar2 = fVar2 * unaff_XMM7_Da;
  }
  *(float *)(unaff_RBX + 0x24) = fVar2 + *(float *)(unaff_RBX + 0x24);
  *(float *)(unaff_RBX + 0x28) =
       unaff_XMM7_Da * *(float *)(unaff_RDI + 0x14) + *(float *)(unaff_RBX + 0x28);
  fVar2 = (float)expf(*(float *)(unaff_RDI + 0x2c) * 0.2);
  *(float *)(unaff_RBX + 0x2c) = fVar2 * unaff_XMM7_Da + *(float *)(unaff_RBX + 0x2c);
  return;
}