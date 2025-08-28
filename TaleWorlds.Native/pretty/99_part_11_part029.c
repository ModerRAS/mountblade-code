#include "TaleWorlds.Native.Split.h"
// 99_part_11_part029.c - 7 个函数
// 函数: void function_6fb489(uint64_t param_1,uint64_t param_2,int64_t *param_3)
void function_6fb489(uint64_t param_1,uint64_t param_2,int64_t *param_3)
{
  uint64_t local_buffer_90;
  if (*param_3 != 0) {
    function_7030d0();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_90 ^ (uint64_t)&local_buffer_00000000);
}
void free(void)
{
// WARNING: Could not recover jumptable at 0x0001806fb630. Too many branches
// WARNING: Treating indirect jump as call
  free();
  return;
}
uint64_t function_6fb640(uint64_t param_1,int param_2,int param_3,int param_4)
{
  int iVar1;
  uint astack_special_x_10 [6];
  if (((((param_2 != 48000) && (param_2 != 24000)) && (param_2 != 16000)) &&
      ((param_2 != 12000 && (param_2 != 8000)))) ||
     ((1 < param_3 - 1U || (((param_4 - 0x800U & 0xfffffffc) != 0 || (param_4 == 0x802)))))) {
    return 0xffffffff;
  }
  if (param_3 - 1U < 2) {
    iVar1 = SystemFunction_0001807069d0(astack_special_x_10);
    if (iVar1 == 0) {
      astack_special_x_10[0] = astack_special_x_10[0] + 7 & 0xfffffff8;
      iVar1 = function_700c10(param_3);
      iVar1 = iVar1 + astack_special_x_10[0] + 0x4678;
      goto LAB_1806fb6ef;
    }
  }
  iVar1 = 0;
LAB_1806fb6ef:
// WARNING: Subroutine does not return
  memset(param_1,0,(int64_t)iVar1);
}
uint64_t function_6fb715(void)
{
  uint in_EAX;
  int iVar1;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_RDI;
  uint64_t unaff_R13;
  int unaff_R14D;
  int64_t lVar2;
  uint uVar3;
  unaff_RDI[1] = 0x4678;
  uVar3 = in_EAX & 0xfffffff8;
  unaff_RDI[0x1c] = unaff_EBP;
  lVar2 = (int64_t)(int)(uVar3 + 0x4678) + (int64_t)unaff_RDI;
  *unaff_RDI = uVar3 + 0x4678;
  unaff_RDI[0xdc2] = unaff_EBP;
  unaff_RDI[0x24] = unaff_ESI;
  iVar1 = function_7058d0();
  unaff_RDI[0x2d] = iVar1;
  iVar1 = function_7069e0(unaff_RDI + 0x119e,iVar1,unaff_RDI + 2);
  if (iVar1 == 0) {
    unaff_RDI[4] = unaff_RDI[0x24];
    unaff_RDI[2] = unaff_EBP;
    unaff_RDI[3] = unaff_EBP;
    unaff_RDI[5] = 16000;
    unaff_RDI[6] = 8000;
    unaff_RDI[7] = 16000;
    unaff_RDI[8] = 0x14;
    unaff_RDI[9] = 25000;
    unaff_RDI[10] = 0;
    unaff_RDI[0xb] = 9;
    unaff_RDI[0xc] = 0;
    *(uint64_t *)(unaff_RDI + 0xe) = unaff_R13;
    unaff_RDI[0x13] = (int)unaff_R13;
    iVar1 = function_700c50(lVar2,unaff_ESI,unaff_EBP,unaff_RDI[0x2d],uVar3);
    if (iVar1 == 0) {
      function_7030d0(lVar2,0x2720,0);
      function_7030d0(lVar2,0xfaa,unaff_RDI[0xb]);
      unaff_RDI[0x25] = 1;
      unaff_RDI[0x26] = 1;
      unaff_RDI[0x29] = -1000;
      unaff_RDI[0x2b] = unaff_RDI[0x24] / 100;
      unaff_RDI[0x1b] = unaff_R14D;
      unaff_RDI[0x28] = unaff_ESI * unaff_EBP + 3000;
      unaff_RDI[0x1f] = -1000;
      unaff_RDI[0x20] = -1000;
      *(int16_t *)(unaff_RDI + 0xdc3) = 0x4000;
      unaff_RDI[0x21] = 0x451;
      unaff_RDI[0x1e] = -1000;
      unaff_RDI[0x22] = -1000;
      unaff_RDI[0x23] = -1;
      unaff_RDI[0x2a] = 0x18;
      unaff_RDI[0x27] = 5000;
      unaff_RDI[0x1d] = unaff_RDI[0x24] / 0xfa;
      unaff_RDI[0xdc5] = 0x3f800000;
      iVar1 = SystemFunction_00018070b980(0x3c);
      unaff_RDI[0xdc4] = iVar1 << 8;
      unaff_RDI[0xdd1] = 1;
      unaff_RDI[0xdca] = 0x3e9;
      unaff_RDI[0xdce] = 0x451;
      function_70b610(unaff_RDI + 0x2f,unaff_RDI[0x24]);
      unaff_RDI[0x30] = unaff_RDI[0x1b];
      return 0;
    }
  }
  return 0xfffffffd;
}
uint64_t function_6fb77f(void)
{
  int iVar1;
  uint64_t uVar2;
  int unaff_EBP;
  int unaff_ESI;
  int64_t unaff_RDI;
  uint64_t unaff_R13;
  int32_t unaff_R14D;
  *(int32_t *)(unaff_RDI + 0x10) = *(int32_t *)(unaff_RDI + 0x90);
  *(int *)(unaff_RDI + 8) = unaff_EBP;
  *(int *)(unaff_RDI + 0xc) = unaff_EBP;
  *(int32_t *)(unaff_RDI + 0x14) = 16000;
  *(int32_t *)(unaff_RDI + 0x18) = 8000;
  *(int32_t *)(unaff_RDI + 0x1c) = 16000;
  *(int32_t *)(unaff_RDI + 0x20) = 0x14;
  *(uint64_t *)(unaff_RDI + 0x24) = 25000;
  *(uint64_t *)(unaff_RDI + 0x2c) = 9;
  *(uint64_t *)(unaff_RDI + 0x38) = unaff_R13;
  *(int *)(unaff_RDI + 0x4c) = (int)unaff_R13;
  iVar1 = function_700c50();
  if (iVar1 == 0) {
    function_7030d0();
    function_7030d0();
    *(int32_t *)(unaff_RDI + 0x94) = 1;
    *(int32_t *)(unaff_RDI + 0x98) = 1;
    *(int32_t *)(unaff_RDI + 0xa4) = 0xfffffc18;
    *(int *)(unaff_RDI + 0xac) = *(int *)(unaff_RDI + 0x90) / 100;
    *(int32_t *)(unaff_RDI + 0x6c) = unaff_R14D;
    *(int *)(unaff_RDI + 0xa0) = unaff_ESI * unaff_EBP + 3000;
    *(int32_t *)(unaff_RDI + 0x7c) = 0xfffffc18;
    *(int32_t *)(unaff_RDI + 0x80) = 0xfffffc18;
    *(int16_t *)(unaff_RDI + 0x370c) = 0x4000;
    *(int32_t *)(unaff_RDI + 0x84) = 0x451;
    *(int32_t *)(unaff_RDI + 0x78) = 0xfffffc18;
    *(uint64_t *)(unaff_RDI + 0x88) = 0xfffffffffffffc18;
    *(int32_t *)(unaff_RDI + 0xa8) = 0x18;
    *(int32_t *)(unaff_RDI + 0x9c) = 5000;
    *(int *)(unaff_RDI + 0x74) = *(int *)(unaff_RDI + 0x90) / 0xfa;
    *(int32_t *)(unaff_RDI + 0x3714) = 0x3f800000;
    iVar1 = SystemFunction_00018070b980(0x3c);
    *(int *)(unaff_RDI + 0x3710) = iVar1 << 8;
    *(int32_t *)(unaff_RDI + 0x3744) = 1;
    *(int32_t *)(unaff_RDI + 0x3728) = 0x3e9;
    *(int32_t *)(unaff_RDI + 0x3738) = 0x451;
    function_70b610(unaff_RDI + 0xbc,*(int32_t *)(unaff_RDI + 0x90));
    *(int32_t *)(unaff_RDI + 0xc0) = *(int32_t *)(unaff_RDI + 0x6c);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffd;
  }
  return uVar2;
}
uint64_t function_6fb91c(void)
{
  return 0xfffffffd;
}
uint64_t function_6fb923(void)
{
  return 0xffffffff;
}
// 函数: void function_6fb940(int64_t param_1,int *param_2,int *param_3,float *param_4,int64_t param_5,
void function_6fb940(int64_t param_1,int *param_2,int *param_3,float *param_4,int64_t param_5,
                  int param_6,int param_7)
{
  float fVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t lVar4;
  float *pfVar5;
  uint64_t uVar6;
  int iVar7;
  int64_t lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  iVar7 = 0;
  lVar8 = (int64_t)param_7;
  fVar10 = (float)*param_3 * 3.7252903e-09;
  fVar11 = (float)param_3[1] * 3.7252903e-09;
  fVar14 = (float)param_2[2] * 3.7252903e-09;
  fVar12 = (float)*param_2 * 3.7252903e-09;
  fVar13 = (float)param_2[1] * 3.7252903e-09;
  if (3 < param_6) {
    pfVar5 = (float *)(lVar8 * 4 + param_5);
    lVar3 = param_7 * 2 - lVar8;
    lVar4 = param_7 * 3 - lVar8;
    uVar2 = (param_6 - 4U >> 2) + 1;
    uVar6 = (uint64_t)uVar2;
    iVar7 = uVar2 * 4;
    do {
      fVar1 = *(float *)((int64_t)pfVar5 + ((param_1 + lVar8 * -4) - param_5));
      fVar9 = fVar12 * fVar1 + *param_4;
      *param_4 = (param_4[1] - fVar10 * fVar9) + fVar13 * fVar1;
      param_4[1] = (fVar14 * fVar1 - fVar11 * fVar9) + 1e-30;
      pfVar5[-lVar8] = fVar9;
      fVar1 = *(float *)((param_1 - param_5) + (int64_t)pfVar5);
      fVar9 = fVar12 * fVar1 + *param_4;
      *param_4 = (param_4[1] - fVar10 * fVar9) + fVar13 * fVar1;
      param_4[1] = (fVar14 * fVar1 - fVar11 * fVar9) + 1e-30;
      *pfVar5 = fVar9;
      fVar1 = *(float *)((int64_t)pfVar5 + (lVar3 * 4 - param_5) + param_1);
      fVar9 = fVar12 * fVar1 + *param_4;
      *param_4 = (param_4[1] - fVar10 * fVar9) + fVar13 * fVar1;
      param_4[1] = (fVar14 * fVar1 - fVar11 * fVar9) + 1e-30;
      pfVar5[lVar3] = fVar9;
      fVar1 = *(float *)((int64_t)pfVar5 + (lVar4 * 4 - param_5) + param_1);
      fVar9 = fVar12 * fVar1 + *param_4;
      *param_4 = (param_4[1] - fVar10 * fVar9) + fVar13 * fVar1;
      param_4[1] = (fVar14 * fVar1 - fVar11 * fVar9) + 1e-30;
      pfVar5[lVar4] = fVar9;
      pfVar5 = pfVar5 + param_7 * 4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (iVar7 < param_6) {
    pfVar5 = (float *)(param_5 + (int64_t)(iVar7 * param_7) * 4);
    uVar6 = (uint64_t)(uint)(param_6 - iVar7);
    do {
      fVar1 = *(float *)((param_1 - param_5) + (int64_t)pfVar5);
      fVar9 = fVar12 * fVar1 + *param_4;
      *param_4 = (param_4[1] - fVar10 * fVar9) + fVar13 * fVar1;
      param_4[1] = (fVar14 * fVar1 - fVar11 * fVar9) + 1e-30;
      *pfVar5 = fVar9;
      pfVar5 = pfVar5 + param_7;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}
// 函数: void function_6fb9e6(int64_t param_1,uint64_t param_2,int64_t param_3,float *param_4)
void function_6fb9e6(int64_t param_1,uint64_t param_2,int64_t param_3,float *param_4)
{
  float fVar1;
  int iVar2;
  uint uVar3;
  int64_t in_RAX;
  int64_t lVar4;
  int64_t lVar5;
  float *pfVar6;
  uint64_t uVar7;
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t in_R10;
  int in_R11D;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  float fVar8;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  int local_buffer_d0;
  *(uint64_t *)(in_RAX + 8) = unaff_RBP;
  *(uint64_t *)(in_RAX + -0x18) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R12;
  pfVar6 = (float *)(param_3 * 4 + unaff_RBX);
  *(uint64_t *)(in_RAX + -0x28) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  iVar2 = (int)param_3;
  lVar4 = iVar2 * 2 - param_3;
  lVar5 = iVar2 * 3 - param_3;
  uVar3 = (in_R11D - 4U >> 2) + 1;
  uVar7 = (uint64_t)uVar3;
  do {
    fVar1 = *(float *)((int64_t)pfVar6 + ((in_R10 + param_3 * -4) - unaff_RBX));
    fVar8 = unaff_XMM8_Da * fVar1 + *param_4;
    *param_4 = (param_4[1] - unaff_XMM6_Da * fVar8) + unaff_XMM9_Da * fVar1;
    param_4[1] = (unaff_XMM10_Da * fVar1 - unaff_XMM7_Da * fVar8) + unaff_XMM11_Da;
    pfVar6[-param_3] = fVar8;
    fVar1 = *(float *)((param_1 - unaff_RBX) + (int64_t)pfVar6);
    fVar8 = unaff_XMM8_Da * fVar1 + *param_4;
    *param_4 = (param_4[1] - unaff_XMM6_Da * fVar8) + unaff_XMM9_Da * fVar1;
    param_4[1] = (unaff_XMM10_Da * fVar1 - unaff_XMM7_Da * fVar8) + unaff_XMM11_Da;
    *pfVar6 = fVar8;
    fVar1 = *(float *)((int64_t)pfVar6 + (lVar4 * 4 - unaff_RBX) + in_R10);
    fVar8 = unaff_XMM8_Da * fVar1 + *param_4;
    *param_4 = (param_4[1] - unaff_XMM6_Da * fVar8) + unaff_XMM9_Da * fVar1;
    param_4[1] = (unaff_XMM10_Da * fVar1 - unaff_XMM7_Da * fVar8) + unaff_XMM11_Da;
    pfVar6[lVar4] = fVar8;
    fVar1 = *(float *)((int64_t)pfVar6 + (lVar5 * 4 - unaff_RBX) + in_R10);
    fVar8 = unaff_XMM8_Da * fVar1 + *param_4;
    *param_4 = (param_4[1] - unaff_XMM6_Da * fVar8) + unaff_XMM9_Da * fVar1;
    param_4[1] = (unaff_XMM10_Da * fVar1 - unaff_XMM7_Da * fVar8) + unaff_XMM11_Da;
    pfVar6[lVar5] = fVar8;
    pfVar6 = pfVar6 + iVar2 * 4;
    uVar7 = uVar7 - 1;
  } while (uVar7 != 0);
  if ((int)(uVar3 * 4) < in_R11D) {
    pfVar6 = (float *)(unaff_RBX + (int64_t)(int)(uVar3 * 4 * local_buffer_d0) * 4);
    uVar7 = (uint64_t)(in_R11D + uVar3 * -4);
    do {
      fVar1 = *(float *)((in_R10 - unaff_RBX) + (int64_t)pfVar6);
      fVar8 = unaff_XMM8_Da * fVar1 + *param_4;
      *param_4 = (param_4[1] - unaff_XMM6_Da * fVar8) + unaff_XMM9_Da * fVar1;
      param_4[1] = (unaff_XMM10_Da * fVar1 - unaff_XMM7_Da * fVar8) + unaff_XMM11_Da;
      *pfVar6 = fVar8;
      pfVar6 = pfVar6 + local_buffer_d0;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}
// 函数: void function_6fbc38(uint64_t param_1,uint64_t param_2,int param_3,float *param_4)
void function_6fbc38(uint64_t param_1,uint64_t param_2,int param_3,float *param_4)
{
  float fVar1;
  uint64_t uVar2;
  float *pfVar3;
  int64_t unaff_RBX;
  int unaff_EDI;
  int64_t in_R10;
  int in_R11D;
  float fVar4;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  if (unaff_EDI < in_R11D) {
    pfVar3 = (float *)(unaff_RBX + (int64_t)(unaff_EDI * param_3) * 4);
    uVar2 = (uint64_t)(uint)(in_R11D - unaff_EDI);
    do {
      fVar1 = *(float *)((in_R10 - unaff_RBX) + (int64_t)pfVar3);
      fVar4 = unaff_XMM8_Da * fVar1 + *param_4;
      *param_4 = (param_4[1] - unaff_XMM6_Da * fVar4) + unaff_XMM9_Da * fVar1;
      param_4[1] = (unaff_XMM10_Da * fVar1 - unaff_XMM7_Da * fVar4) + unaff_XMM11_Da;
      *pfVar3 = fVar4;
      pfVar3 = pfVar3 + param_3;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}
// 函数: void function_6fbcf0(int64_t param_1,int64_t param_2,float param_3,float param_4,int param_5,
void function_6fbcf0(int64_t param_1,int64_t param_2,float param_3,float param_4,int param_5,
                  int param_6,int param_7,int64_t param_8,int param_9)
{
  uint uVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  float *pfVar8;
  uint64_t uVar9;
  float *pfVar10;
  float *pfVar11;
  int64_t lVar12;
  float *pfVar13;
  int iVar14;
  int64_t lVar15;
  float fVar16;
  float fVar17;
  uint64_t local_var_98;
  lVar15 = (int64_t)param_7;
  iVar2 = (int)(48000 / (int64_t)param_9);
  param_4 = 1.0 - param_4;
  iVar14 = 0;
  param_5 = param_5 / iVar2;
  param_3 = 1.0 - param_3;
  if (3 < param_5) {
    pfVar10 = (float *)(param_2 + 4 + lVar15 * 4);
    lVar12 = (int64_t)(iVar2 * 2);
    pfVar8 = (float *)(param_8 + lVar12 * 4);
    lVar5 = param_7 * 2 - lVar15;
    lVar3 = (lVar5 * 4 - param_2) + param_1;
    lVar6 = param_7 * 3 - lVar15;
    lVar4 = (lVar6 * 4 - param_2) + param_1;
    lVar7 = (param_1 + lVar15 * -4) - param_2;
    uVar1 = (param_5 - 4U >> 2) + 1;
    local_var_98 = (uint64_t)uVar1;
    iVar14 = uVar1 * 4;
    do {
      fVar16 = pfVar8[-lVar12] * pfVar8[-lVar12];
      fVar17 = (*(float *)(lVar7 + -4 + (int64_t)pfVar10) - *(float *)(lVar7 + (int64_t)pfVar10))
               * 0.5 * ((1.0 - fVar16) * param_3 + fVar16 * param_4);
      fVar16 = pfVar10[-lVar15];
      pfVar10[-1 - lVar15] = pfVar10[-1 - lVar15] - fVar17;
      pfVar10[-lVar15] = fVar17 + fVar16;
      fVar16 = pfVar8[iVar2 - lVar12] * pfVar8[iVar2 - lVar12];
      fVar16 = (*(float *)((param_1 - param_2) + -4 + (int64_t)pfVar10) -
               *(float *)((param_1 - param_2) + (int64_t)pfVar10)) * 0.5 *
               ((1.0 - fVar16) * param_3 + fVar16 * param_4);
      pfVar10[-1] = pfVar10[-1] - fVar16;
      *pfVar10 = fVar16 + *pfVar10;
      fVar16 = *pfVar8 * *pfVar8;
      fVar16 = (*(float *)(lVar3 + -4 + (int64_t)pfVar10) - *(float *)(lVar3 + (int64_t)pfVar10))
               * 0.5 * ((1.0 - fVar16) * param_3 + fVar16 * param_4);
      pfVar10[lVar5 + -1] = pfVar10[lVar5 + -1] - fVar16;
      pfVar10[lVar5] = fVar16 + pfVar10[lVar5];
      pfVar11 = pfVar8 + (iVar2 * 3 - lVar12);
      pfVar8 = pfVar8 + iVar2 * 4;
      fVar16 = *pfVar11 * *pfVar11;
      fVar16 = (*(float *)((int64_t)pfVar10 + lVar4 + -4) - *(float *)(lVar4 + (int64_t)pfVar10))
               * 0.5 * ((1.0 - fVar16) * param_3 + fVar16 * param_4);
      pfVar10[lVar6 + -1] = pfVar10[lVar6 + -1] - fVar16;
      pfVar10[lVar6] = fVar16 + pfVar10[lVar6];
      pfVar10 = pfVar10 + param_7 * 4;
      local_var_98 = local_var_98 - 1;
    } while (local_var_98 != 0);
  }
  if (iVar14 < param_5) {
    uVar9 = (uint64_t)(uint)(param_5 - iVar14);
    pfVar8 = (float *)(param_8 + (int64_t)(iVar14 * iVar2) * 4);
    pfVar10 = (float *)(param_2 + ((int64_t)(iVar14 * param_7) + 1) * 4);
    iVar14 = iVar14 + (param_5 - iVar14);
    do {
      fVar16 = *pfVar8;
      pfVar8 = pfVar8 + iVar2;
      fVar16 = fVar16 * fVar16;
      fVar16 = (*(float *)((param_1 - param_2) + -4 + (int64_t)pfVar10) -
               *(float *)((param_1 - param_2) + (int64_t)pfVar10)) * 0.5 *
               ((1.0 - fVar16) * param_3 + fVar16 * param_4);
      pfVar10[-1] = pfVar10[-1] - fVar16;
      *pfVar10 = fVar16 + *pfVar10;
      pfVar10 = pfVar10 + param_7;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (iVar14 < param_6) {
    if (3 < param_6 - iVar14) {
      iVar2 = param_7 * 4;
      lVar15 = param_1 - param_2;
      pfVar8 = (float *)(param_2 + ((int64_t)(iVar14 * param_7) + 1) * 4);
      pfVar10 = (float *)(param_2 + ((int64_t)((iVar14 + 3) * param_7) + 1) * 4);
      pfVar11 = (float *)(param_2 + ((int64_t)((iVar14 + 2) * param_7) + 1) * 4);
      uVar1 = ((param_6 - iVar14) - 4U >> 2) + 1;
      uVar9 = (uint64_t)uVar1;
      pfVar13 = (float *)(param_2 + ((int64_t)((iVar14 + 1) * param_7) + 1) * 4);
      iVar14 = iVar14 + uVar1 * 4;
      do {
        fVar16 = (*(float *)(lVar15 + -4 + (int64_t)pfVar8) - *(float *)(lVar15 + (int64_t)pfVar8)
                 ) * 0.5 * param_4;
        pfVar8[-1] = pfVar8[-1] - fVar16;
        *pfVar8 = fVar16 + *pfVar8;
        pfVar8 = pfVar8 + iVar2;
        fVar16 = (*(float *)(lVar15 + -4 + (int64_t)pfVar13) -
                 *(float *)((int64_t)pfVar13 + lVar15)) * 0.5 * param_4;
        pfVar13[-1] = pfVar13[-1] - fVar16;
        *pfVar13 = fVar16 + *pfVar13;
        pfVar13 = pfVar13 + iVar2;
        fVar16 = (*(float *)(lVar15 + -4 + (int64_t)pfVar11) -
                 *(float *)((int64_t)pfVar11 + lVar15)) * 0.5 * param_4;
        pfVar11[-1] = pfVar11[-1] - fVar16;
        *pfVar11 = fVar16 + *pfVar11;
        pfVar11 = pfVar11 + iVar2;
        fVar16 = (*(float *)(lVar15 + -4 + (int64_t)pfVar10) -
                 *(float *)((int64_t)pfVar10 + lVar15)) * 0.5 * param_4;
        pfVar10[-1] = pfVar10[-1] - fVar16;
        *pfVar10 = fVar16 + *pfVar10;
        pfVar10 = pfVar10 + iVar2;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (iVar14 < param_6) {
      pfVar8 = (float *)(param_2 + ((int64_t)(iVar14 * param_7) + 1) * 4);
      lVar15 = (int64_t)(param_6 - iVar14);
      do {
        fVar16 = (*(float *)((param_1 - param_2) + -4 + (int64_t)pfVar8) -
                 *(float *)((param_1 - param_2) + (int64_t)pfVar8)) * 0.5 * param_4;
        pfVar8[-1] = pfVar8[-1] - fVar16;
        *pfVar8 = fVar16 + *pfVar8;
        pfVar8 = pfVar8 + param_7;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
  }
  return;
}
// 函数: void function_6fbd1d(int64_t param_1,uint param_2,float param_3,float param_4)
void function_6fbd1d(int64_t param_1,uint param_2,float param_3,float param_4)
{
  uint uVar1;
  int iVar2;
  uint64_t in_RAX;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  float *pfVar8;
  int64_t unaff_RSI;
  uint64_t uVar9;
  float *pfVar10;
  float *pfVar11;
  int64_t lVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  uint64_t unaff_R14;
  float fVar16;
  float fVar17;
  float in_XMM5_Da;
  int64_t local_buffer_a0;
  int64_t local_buffer_a8;
  int local_buffer_c0;
  int local_buffer_c8;
  uint local_buffer_d0;
  int64_t local_buffer_d8;
  int local_buffer_e0;
  iVar2 = (int)((int64_t)((uint64_t)param_2 << 0x20 | in_RAX & 0xffffffff) /
               (int64_t)local_buffer_e0);
  param_4 = in_XMM5_Da - param_4;
  iVar14 = 0;
  local_buffer_c0 = local_buffer_c0 / iVar2;
  param_3 = in_XMM5_Da - param_3;
  if (3 < local_buffer_c0) {
    iVar15 = (int)unaff_R14;
    pfVar10 = (float *)(unaff_RSI + 4 + unaff_R14 * 4);
    lVar12 = (int64_t)(iVar2 * 2);
    pfVar8 = (float *)(local_buffer_d8 + lVar12 * 4);
    lVar5 = (int64_t)(iVar15 * 2) - unaff_R14;
    lVar3 = (lVar5 * 4 - unaff_RSI) + param_1;
    lVar6 = (int64_t)(iVar15 * 3) - unaff_R14;
    lVar4 = (lVar6 * 4 - unaff_RSI) + param_1;
    lVar7 = (param_1 + unaff_R14 * -4) - unaff_RSI;
    uVar1 = (local_buffer_c0 - 4U >> 2) + 1;
    uVar9 = (uint64_t)uVar1;
    iVar14 = uVar1 * 4;
    do {
      fVar16 = pfVar8[-lVar12] * pfVar8[-lVar12];
      fVar17 = (*(float *)(lVar7 + -4 + (int64_t)pfVar10) - *(float *)(lVar7 + (int64_t)pfVar10))
               * 0.5 * ((in_XMM5_Da - fVar16) * param_3 + fVar16 * param_4);
      fVar16 = pfVar10[-unaff_R14];
      pfVar10[-1 - unaff_R14] = pfVar10[-1 - unaff_R14] - fVar17;
      pfVar10[-unaff_R14] = fVar17 + fVar16;
      fVar16 = pfVar8[iVar2 - lVar12] * pfVar8[iVar2 - lVar12];
      fVar16 = (*(float *)((param_1 - unaff_RSI) + -4 + (int64_t)pfVar10) -
               *(float *)((param_1 - unaff_RSI) + (int64_t)pfVar10)) * 0.5 *
               ((in_XMM5_Da - fVar16) * param_3 + fVar16 * param_4);
      pfVar10[-1] = pfVar10[-1] - fVar16;
      *pfVar10 = fVar16 + *pfVar10;
      fVar16 = *pfVar8 * *pfVar8;
      fVar16 = (*(float *)(lVar3 + -4 + (int64_t)pfVar10) - *(float *)(lVar3 + (int64_t)pfVar10))
               * 0.5 * ((in_XMM5_Da - fVar16) * param_3 + fVar16 * param_4);
      pfVar10[lVar5 + -1] = pfVar10[lVar5 + -1] - fVar16;
      pfVar10[lVar5] = fVar16 + pfVar10[lVar5];
      pfVar11 = pfVar8 + (iVar2 * 3 - lVar12);
      pfVar8 = pfVar8 + iVar2 * 4;
      fVar16 = *pfVar11 * *pfVar11;
      fVar16 = (*(float *)((int64_t)pfVar10 + lVar4 + -4) - *(float *)(lVar4 + (int64_t)pfVar10))
               * 0.5 * ((in_XMM5_Da - fVar16) * param_3 + fVar16 * param_4);
      pfVar10[lVar6 + -1] = pfVar10[lVar6 + -1] - fVar16;
      pfVar10[lVar6] = fVar16 + pfVar10[lVar6];
      pfVar10 = pfVar10 + iVar15 * 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    unaff_R14 = (uint64_t)local_buffer_d0;
    param_1 = local_buffer_a0;
    unaff_RSI = local_buffer_a8;
  }
  iVar15 = (int)unaff_R14;
  if (iVar14 < local_buffer_c0) {
    uVar9 = (uint64_t)(uint)(local_buffer_c0 - iVar14);
    pfVar8 = (float *)(local_buffer_d8 + (int64_t)(iVar14 * iVar2) * 4);
    pfVar10 = (float *)(unaff_RSI + ((int64_t)(iVar14 * iVar15) + 1) * 4);
    iVar14 = iVar14 + (local_buffer_c0 - iVar14);
    do {
      fVar16 = *pfVar8;
      pfVar8 = pfVar8 + iVar2;
      fVar16 = fVar16 * fVar16;
      fVar16 = (*(float *)((param_1 - unaff_RSI) + -4 + (int64_t)pfVar10) -
               *(float *)((param_1 - unaff_RSI) + (int64_t)pfVar10)) * 0.5 *
               ((in_XMM5_Da - fVar16) * param_3 + fVar16 * param_4);
      pfVar10[-1] = pfVar10[-1] - fVar16;
      *pfVar10 = fVar16 + *pfVar10;
      pfVar10 = pfVar10 + iVar15;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (iVar14 < local_buffer_c8) {
    if (3 < local_buffer_c8 - iVar14) {
      iVar2 = iVar15 * 4;
      lVar3 = param_1 - unaff_RSI;
      pfVar8 = (float *)(unaff_RSI + ((int64_t)(iVar14 * iVar15) + 1) * 4);
      pfVar10 = (float *)(unaff_RSI + ((int64_t)((iVar14 + 3) * iVar15) + 1) * 4);
      pfVar11 = (float *)(unaff_RSI + ((int64_t)((iVar14 + 2) * iVar15) + 1) * 4);
      uVar1 = ((local_buffer_c8 - iVar14) - 4U >> 2) + 1;
      uVar9 = (uint64_t)uVar1;
      pfVar13 = (float *)(unaff_RSI + ((int64_t)((iVar14 + 1) * iVar15) + 1) * 4);
      iVar14 = iVar14 + uVar1 * 4;
      do {
        fVar16 = (*(float *)(lVar3 + -4 + (int64_t)pfVar8) - *(float *)(lVar3 + (int64_t)pfVar8))
                 * 0.5 * param_4;
        pfVar8[-1] = pfVar8[-1] - fVar16;
        *pfVar8 = fVar16 + *pfVar8;
        pfVar8 = pfVar8 + iVar2;
        fVar16 = (*(float *)(lVar3 + -4 + (int64_t)pfVar13) - *(float *)((int64_t)pfVar13 + lVar3)
                 ) * 0.5 * param_4;
        pfVar13[-1] = pfVar13[-1] - fVar16;
        *pfVar13 = fVar16 + *pfVar13;
        pfVar13 = pfVar13 + iVar2;
        fVar16 = (*(float *)(lVar3 + -4 + (int64_t)pfVar11) - *(float *)((int64_t)pfVar11 + lVar3)
                 ) * 0.5 * param_4;
        pfVar11[-1] = pfVar11[-1] - fVar16;
        *pfVar11 = fVar16 + *pfVar11;
        pfVar11 = pfVar11 + iVar2;
        fVar16 = (*(float *)(lVar3 + -4 + (int64_t)pfVar10) - *(float *)((int64_t)pfVar10 + lVar3)
                 ) * 0.5 * param_4;
        pfVar10[-1] = pfVar10[-1] - fVar16;
        *pfVar10 = fVar16 + *pfVar10;
        pfVar10 = pfVar10 + iVar2;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (iVar14 < local_buffer_c8) {
      pfVar8 = (float *)(unaff_RSI + ((int64_t)(iVar14 * iVar15) + 1) * 4);
      lVar3 = (int64_t)(local_buffer_c8 - iVar14);
      do {
        fVar16 = (*(float *)((param_1 - unaff_RSI) + -4 + (int64_t)pfVar8) -
                 *(float *)((param_1 - unaff_RSI) + (int64_t)pfVar8)) * 0.5 * param_4;
        pfVar8[-1] = pfVar8[-1] - fVar16;
        *pfVar8 = fVar16 + *pfVar8;
        pfVar8 = pfVar8 + iVar15;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  return;
}
// 函数: void function_6fbd73(int64_t param_1,uint64_t param_2,int64_t param_3,float param_4)
void function_6fbd73(int64_t param_1,uint64_t param_2,int64_t param_3,float param_4)
{
  int iVar1;
  int iVar2;
  uint uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  float *pfVar9;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int unaff_EDI;
  uint64_t uVar10;
  float *pfVar11;
  float *pfVar12;
  int64_t lVar13;
  float *pfVar14;
  int iVar15;
  int64_t unaff_R14;
  int64_t unaff_R15;
  float fVar16;
  float fVar17;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  int64_t local_buffer_a0;
  int64_t local_buffer_a8;
  int local_buffer_c8;
  int local_buffer_d0;
  int64_t local_buffer_d8;
  int local_buffer_e0;
  iVar1 = (int)unaff_R14;
  pfVar11 = (float *)(unaff_RSI + 4 + param_3);
  iVar2 = (int)unaff_R15;
  lVar13 = (int64_t)(iVar2 * 2);
  pfVar9 = (float *)(local_buffer_d8 + lVar13 * 4);
  lVar6 = iVar1 * 2 - unaff_R14;
  lVar4 = (lVar6 * 4 - unaff_RSI) + unaff_RBX;
  lVar7 = iVar1 * 3 - unaff_R14;
  lVar5 = (lVar7 * 4 - unaff_RSI) + unaff_RBX;
  lVar8 = (unaff_RBX - param_3) - unaff_RSI;
  uVar3 = (unaff_EDI - 4U >> 2) + 1;
  uVar10 = (uint64_t)uVar3;
  iVar15 = uVar3 * 4;
  do {
    fVar16 = pfVar9[-lVar13] * pfVar9[-lVar13];
    fVar17 = (*(float *)(lVar8 + -4 + (int64_t)pfVar11) - *(float *)(lVar8 + (int64_t)pfVar11)) *
             param_4 * ((in_XMM5_Da - fVar16) * unaff_XMM6_Da + fVar16 * in_XMM4_Da);
    fVar16 = pfVar11[-unaff_R14];
    *(float *)((-4 - param_3) + (int64_t)pfVar11) =
         *(float *)((-4 - param_3) + (int64_t)pfVar11) - fVar17;
    pfVar11[-unaff_R14] = fVar17 + fVar16;
    fVar16 = pfVar9[unaff_R15 - lVar13] * pfVar9[unaff_R15 - lVar13];
    fVar16 = (*(float *)((param_1 - unaff_RSI) + -4 + (int64_t)pfVar11) -
             *(float *)((param_1 - unaff_RSI) + (int64_t)pfVar11)) * param_4 *
             ((in_XMM5_Da - fVar16) * unaff_XMM6_Da + fVar16 * in_XMM4_Da);
    pfVar11[-1] = pfVar11[-1] - fVar16;
    *pfVar11 = fVar16 + *pfVar11;
    fVar16 = *pfVar9 * *pfVar9;
    fVar16 = (*(float *)(lVar4 + -4 + (int64_t)pfVar11) - *(float *)(lVar4 + (int64_t)pfVar11)) *
             param_4 * ((in_XMM5_Da - fVar16) * unaff_XMM6_Da + fVar16 * in_XMM4_Da);
    pfVar11[lVar6 + -1] = pfVar11[lVar6 + -1] - fVar16;
    pfVar11[lVar6] = fVar16 + pfVar11[lVar6];
    pfVar12 = pfVar9 + (iVar2 * 3 - lVar13);
    pfVar9 = pfVar9 + iVar2 * 4;
    fVar16 = *pfVar12 * *pfVar12;
    fVar16 = (*(float *)((int64_t)pfVar11 + lVar5 + -4) - *(float *)(lVar5 + (int64_t)pfVar11)) *
             param_4 * ((in_XMM5_Da - fVar16) * unaff_XMM6_Da + fVar16 * in_XMM4_Da);
    pfVar11[lVar7 + -1] = pfVar11[lVar7 + -1] - fVar16;
    pfVar11[lVar7] = fVar16 + pfVar11[lVar7];
    pfVar11 = pfVar11 + iVar1 * 4;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (iVar15 < unaff_EDI) {
    uVar3 = unaff_EDI + uVar3 * -4;
    uVar10 = (uint64_t)uVar3;
    pfVar9 = (float *)(local_buffer_d8 + (int64_t)(iVar15 * local_buffer_e0) * 4);
    pfVar11 = (float *)(local_buffer_a8 + ((int64_t)(iVar15 * local_buffer_d0) + 1) * 4);
    iVar15 = iVar15 + uVar3;
    do {
      fVar16 = *pfVar9;
      pfVar9 = pfVar9 + local_buffer_e0;
      fVar16 = fVar16 * fVar16;
      fVar16 = (*(float *)((local_buffer_a0 - local_buffer_a8) + -4 + (int64_t)pfVar11) -
               *(float *)((local_buffer_a0 - local_buffer_a8) + (int64_t)pfVar11)) * param_4 *
               ((in_XMM5_Da - fVar16) * unaff_XMM6_Da + fVar16 * in_XMM4_Da);
      pfVar11[-1] = pfVar11[-1] - fVar16;
      *pfVar11 = fVar16 + *pfVar11;
      pfVar11 = pfVar11 + local_buffer_d0;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if (iVar15 < local_buffer_c8) {
    if (3 < local_buffer_c8 - iVar15) {
      iVar1 = local_buffer_d0 * 4;
      lVar4 = local_buffer_a0 - local_buffer_a8;
      pfVar9 = (float *)(local_buffer_a8 + ((int64_t)(iVar15 * local_buffer_d0) + 1) * 4);
      pfVar11 = (float *)(local_buffer_a8 + ((int64_t)((iVar15 + 3) * local_buffer_d0) + 1) * 4
                         );
      pfVar12 = (float *)(local_buffer_a8 + ((int64_t)((iVar15 + 2) * local_buffer_d0) + 1) * 4
                         );
      uVar3 = ((local_buffer_c8 - iVar15) - 4U >> 2) + 1;
      uVar10 = (uint64_t)uVar3;
      pfVar14 = (float *)(local_buffer_a8 + ((int64_t)((iVar15 + 1) * local_buffer_d0) + 1) * 4
                         );
      iVar15 = iVar15 + uVar3 * 4;
      do {
        fVar16 = (*(float *)(lVar4 + -4 + (int64_t)pfVar9) - *(float *)(lVar4 + (int64_t)pfVar9))
                 * param_4 * in_XMM4_Da;
        pfVar9[-1] = pfVar9[-1] - fVar16;
        *pfVar9 = fVar16 + *pfVar9;
        pfVar9 = pfVar9 + iVar1;
        fVar16 = (*(float *)(lVar4 + -4 + (int64_t)pfVar14) - *(float *)((int64_t)pfVar14 + lVar4)
                 ) * param_4 * in_XMM4_Da;
        pfVar14[-1] = pfVar14[-1] - fVar16;
        *pfVar14 = fVar16 + *pfVar14;
        pfVar14 = pfVar14 + iVar1;
        fVar16 = (*(float *)(lVar4 + -4 + (int64_t)pfVar12) - *(float *)((int64_t)pfVar12 + lVar4)
                 ) * param_4 * in_XMM4_Da;
        pfVar12[-1] = pfVar12[-1] - fVar16;
        *pfVar12 = fVar16 + *pfVar12;
        pfVar12 = pfVar12 + iVar1;
        fVar16 = (*(float *)(lVar4 + -4 + (int64_t)pfVar11) - *(float *)((int64_t)pfVar11 + lVar4)
                 ) * param_4 * in_XMM4_Da;
        pfVar11[-1] = pfVar11[-1] - fVar16;
        *pfVar11 = fVar16 + *pfVar11;
        pfVar11 = pfVar11 + iVar1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (iVar15 < local_buffer_c8) {
      pfVar9 = (float *)(local_buffer_a8 + ((int64_t)(iVar15 * local_buffer_d0) + 1) * 4);
      lVar4 = (int64_t)(local_buffer_c8 - iVar15);
      do {
        fVar16 = (*(float *)((local_buffer_a0 - local_buffer_a8) + -4 + (int64_t)pfVar9) -
                 *(float *)((local_buffer_a0 - local_buffer_a8) + (int64_t)pfVar9)) * param_4 *
                 in_XMM4_Da;
        pfVar9[-1] = pfVar9[-1] - fVar16;
        *pfVar9 = fVar16 + *pfVar9;
        pfVar9 = pfVar9 + local_buffer_d0;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  return;
}