#include "TaleWorlds.Native.Split.h"

// 99_part_11_part029.c - 7 个函数

// 函数: void FUN_1806fb489(undefined8 param_1,undefined8 param_2,longlong *param_3)
void FUN_1806fb489(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong in_stack_00000090;
  
  if (*param_3 != 0) {
    FUN_1807030d0();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000090 ^ (ulonglong)&stack0x00000000);
}



void free(void)

{
                    // WARNING: Could not recover jumptable at 0x0001806fb630. Too many branches
                    // WARNING: Treating indirect jump as call
  free();
  return;
}



undefined8 FUN_1806fb640(undefined8 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint auStackX_10 [6];
  
  if (((((param_2 != 48000) && (param_2 != 24000)) && (param_2 != 16000)) &&
      ((param_2 != 12000 && (param_2 != 8000)))) ||
     ((1 < param_3 - 1U || (((param_4 - 0x800U & 0xfffffffc) != 0 || (param_4 == 0x802)))))) {
    return 0xffffffff;
  }
  if (param_3 - 1U < 2) {
    iVar1 = func_0x0001807069d0(auStackX_10);
    if (iVar1 == 0) {
      auStackX_10[0] = auStackX_10[0] + 7 & 0xfffffff8;
      iVar1 = FUN_180700c10(param_3);
      iVar1 = iVar1 + auStackX_10[0] + 0x4678;
      goto LAB_1806fb6ef;
    }
  }
  iVar1 = 0;
LAB_1806fb6ef:
                    // WARNING: Subroutine does not return
  memset(param_1,0,(longlong)iVar1);
}



undefined8 FUN_1806fb715(void)

{
  uint in_EAX;
  int iVar1;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_RDI;
  undefined8 unaff_R13;
  int unaff_R14D;
  longlong lVar2;
  uint uVar3;
  
  unaff_RDI[1] = 0x4678;
  uVar3 = in_EAX & 0xfffffff8;
  unaff_RDI[0x1c] = unaff_EBP;
  lVar2 = (longlong)(int)(uVar3 + 0x4678) + (longlong)unaff_RDI;
  *unaff_RDI = uVar3 + 0x4678;
  unaff_RDI[0xdc2] = unaff_EBP;
  unaff_RDI[0x24] = unaff_ESI;
  iVar1 = FUN_1807058d0();
  unaff_RDI[0x2d] = iVar1;
  iVar1 = FUN_1807069e0(unaff_RDI + 0x119e,iVar1,unaff_RDI + 2);
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
    *(undefined8 *)(unaff_RDI + 0xe) = unaff_R13;
    unaff_RDI[0x13] = (int)unaff_R13;
    iVar1 = FUN_180700c50(lVar2,unaff_ESI,unaff_EBP,unaff_RDI[0x2d],uVar3);
    if (iVar1 == 0) {
      FUN_1807030d0(lVar2,0x2720,0);
      FUN_1807030d0(lVar2,0xfaa,unaff_RDI[0xb]);
      unaff_RDI[0x25] = 1;
      unaff_RDI[0x26] = 1;
      unaff_RDI[0x29] = -1000;
      unaff_RDI[0x2b] = unaff_RDI[0x24] / 100;
      unaff_RDI[0x1b] = unaff_R14D;
      unaff_RDI[0x28] = unaff_ESI * unaff_EBP + 3000;
      unaff_RDI[0x1f] = -1000;
      unaff_RDI[0x20] = -1000;
      *(undefined2 *)(unaff_RDI + 0xdc3) = 0x4000;
      unaff_RDI[0x21] = 0x451;
      unaff_RDI[0x1e] = -1000;
      unaff_RDI[0x22] = -1000;
      unaff_RDI[0x23] = -1;
      unaff_RDI[0x2a] = 0x18;
      unaff_RDI[0x27] = 5000;
      unaff_RDI[0x1d] = unaff_RDI[0x24] / 0xfa;
      unaff_RDI[0xdc5] = 0x3f800000;
      iVar1 = func_0x00018070b980(0x3c);
      unaff_RDI[0xdc4] = iVar1 << 8;
      unaff_RDI[0xdd1] = 1;
      unaff_RDI[0xdca] = 0x3e9;
      unaff_RDI[0xdce] = 0x451;
      FUN_18070b610(unaff_RDI + 0x2f,unaff_RDI[0x24]);
      unaff_RDI[0x30] = unaff_RDI[0x1b];
      return 0;
    }
  }
  return 0xfffffffd;
}



undefined8 FUN_1806fb77f(void)

{
  int iVar1;
  undefined8 uVar2;
  int unaff_EBP;
  int unaff_ESI;
  longlong unaff_RDI;
  undefined8 unaff_R13;
  undefined4 unaff_R14D;
  
  *(undefined4 *)(unaff_RDI + 0x10) = *(undefined4 *)(unaff_RDI + 0x90);
  *(int *)(unaff_RDI + 8) = unaff_EBP;
  *(int *)(unaff_RDI + 0xc) = unaff_EBP;
  *(undefined4 *)(unaff_RDI + 0x14) = 16000;
  *(undefined4 *)(unaff_RDI + 0x18) = 8000;
  *(undefined4 *)(unaff_RDI + 0x1c) = 16000;
  *(undefined4 *)(unaff_RDI + 0x20) = 0x14;
  *(undefined8 *)(unaff_RDI + 0x24) = 25000;
  *(undefined8 *)(unaff_RDI + 0x2c) = 9;
  *(undefined8 *)(unaff_RDI + 0x38) = unaff_R13;
  *(int *)(unaff_RDI + 0x4c) = (int)unaff_R13;
  iVar1 = FUN_180700c50();
  if (iVar1 == 0) {
    FUN_1807030d0();
    FUN_1807030d0();
    *(undefined4 *)(unaff_RDI + 0x94) = 1;
    *(undefined4 *)(unaff_RDI + 0x98) = 1;
    *(undefined4 *)(unaff_RDI + 0xa4) = 0xfffffc18;
    *(int *)(unaff_RDI + 0xac) = *(int *)(unaff_RDI + 0x90) / 100;
    *(undefined4 *)(unaff_RDI + 0x6c) = unaff_R14D;
    *(int *)(unaff_RDI + 0xa0) = unaff_ESI * unaff_EBP + 3000;
    *(undefined4 *)(unaff_RDI + 0x7c) = 0xfffffc18;
    *(undefined4 *)(unaff_RDI + 0x80) = 0xfffffc18;
    *(undefined2 *)(unaff_RDI + 0x370c) = 0x4000;
    *(undefined4 *)(unaff_RDI + 0x84) = 0x451;
    *(undefined4 *)(unaff_RDI + 0x78) = 0xfffffc18;
    *(undefined8 *)(unaff_RDI + 0x88) = 0xfffffffffffffc18;
    *(undefined4 *)(unaff_RDI + 0xa8) = 0x18;
    *(undefined4 *)(unaff_RDI + 0x9c) = 5000;
    *(int *)(unaff_RDI + 0x74) = *(int *)(unaff_RDI + 0x90) / 0xfa;
    *(undefined4 *)(unaff_RDI + 0x3714) = 0x3f800000;
    iVar1 = func_0x00018070b980(0x3c);
    *(int *)(unaff_RDI + 0x3710) = iVar1 << 8;
    *(undefined4 *)(unaff_RDI + 0x3744) = 1;
    *(undefined4 *)(unaff_RDI + 0x3728) = 0x3e9;
    *(undefined4 *)(unaff_RDI + 0x3738) = 0x451;
    FUN_18070b610(unaff_RDI + 0xbc,*(undefined4 *)(unaff_RDI + 0x90));
    *(undefined4 *)(unaff_RDI + 0xc0) = *(undefined4 *)(unaff_RDI + 0x6c);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffd;
  }
  return uVar2;
}



undefined8 FUN_1806fb91c(void)

{
  return 0xfffffffd;
}



undefined8 FUN_1806fb923(void)

{
  return 0xffffffff;
}






// 函数: void FUN_1806fb940(longlong param_1,int *param_2,int *param_3,float *param_4,longlong param_5,
void FUN_1806fb940(longlong param_1,int *param_2,int *param_3,float *param_4,longlong param_5,
                  int param_6,int param_7)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  iVar7 = 0;
  lVar8 = (longlong)param_7;
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
    uVar6 = (ulonglong)uVar2;
    iVar7 = uVar2 * 4;
    do {
      fVar1 = *(float *)((longlong)pfVar5 + ((param_1 + lVar8 * -4) - param_5));
      fVar9 = fVar12 * fVar1 + *param_4;
      *param_4 = (param_4[1] - fVar10 * fVar9) + fVar13 * fVar1;
      param_4[1] = (fVar14 * fVar1 - fVar11 * fVar9) + 1e-30;
      pfVar5[-lVar8] = fVar9;
      fVar1 = *(float *)((param_1 - param_5) + (longlong)pfVar5);
      fVar9 = fVar12 * fVar1 + *param_4;
      *param_4 = (param_4[1] - fVar10 * fVar9) + fVar13 * fVar1;
      param_4[1] = (fVar14 * fVar1 - fVar11 * fVar9) + 1e-30;
      *pfVar5 = fVar9;
      fVar1 = *(float *)((longlong)pfVar5 + (lVar3 * 4 - param_5) + param_1);
      fVar9 = fVar12 * fVar1 + *param_4;
      *param_4 = (param_4[1] - fVar10 * fVar9) + fVar13 * fVar1;
      param_4[1] = (fVar14 * fVar1 - fVar11 * fVar9) + 1e-30;
      pfVar5[lVar3] = fVar9;
      fVar1 = *(float *)((longlong)pfVar5 + (lVar4 * 4 - param_5) + param_1);
      fVar9 = fVar12 * fVar1 + *param_4;
      *param_4 = (param_4[1] - fVar10 * fVar9) + fVar13 * fVar1;
      param_4[1] = (fVar14 * fVar1 - fVar11 * fVar9) + 1e-30;
      pfVar5[lVar4] = fVar9;
      pfVar5 = pfVar5 + param_7 * 4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (iVar7 < param_6) {
    pfVar5 = (float *)(param_5 + (longlong)(iVar7 * param_7) * 4);
    uVar6 = (ulonglong)(uint)(param_6 - iVar7);
    do {
      fVar1 = *(float *)((param_1 - param_5) + (longlong)pfVar5);
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






// 函数: void FUN_1806fb9e6(longlong param_1,undefined8 param_2,longlong param_3,float *param_4)
void FUN_1806fb9e6(longlong param_1,undefined8 param_2,longlong param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  longlong in_RAX;
  longlong lVar4;
  longlong lVar5;
  float *pfVar6;
  ulonglong uVar7;
  longlong unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  longlong in_R10;
  int in_R11D;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  float fVar8;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  int in_stack_000000d0;
  
  *(undefined8 *)(in_RAX + 8) = unaff_RBP;
  *(undefined8 *)(in_RAX + -0x18) = unaff_RSI;
  *(undefined8 *)(in_RAX + -0x20) = unaff_R12;
  pfVar6 = (float *)(param_3 * 4 + unaff_RBX);
  *(undefined8 *)(in_RAX + -0x28) = unaff_R13;
  *(undefined8 *)(in_RAX + -0x30) = unaff_R14;
  *(undefined8 *)(in_RAX + -0x38) = unaff_R15;
  iVar2 = (int)param_3;
  lVar4 = iVar2 * 2 - param_3;
  lVar5 = iVar2 * 3 - param_3;
  uVar3 = (in_R11D - 4U >> 2) + 1;
  uVar7 = (ulonglong)uVar3;
  do {
    fVar1 = *(float *)((longlong)pfVar6 + ((in_R10 + param_3 * -4) - unaff_RBX));
    fVar8 = unaff_XMM8_Da * fVar1 + *param_4;
    *param_4 = (param_4[1] - unaff_XMM6_Da * fVar8) + unaff_XMM9_Da * fVar1;
    param_4[1] = (unaff_XMM10_Da * fVar1 - unaff_XMM7_Da * fVar8) + unaff_XMM11_Da;
    pfVar6[-param_3] = fVar8;
    fVar1 = *(float *)((param_1 - unaff_RBX) + (longlong)pfVar6);
    fVar8 = unaff_XMM8_Da * fVar1 + *param_4;
    *param_4 = (param_4[1] - unaff_XMM6_Da * fVar8) + unaff_XMM9_Da * fVar1;
    param_4[1] = (unaff_XMM10_Da * fVar1 - unaff_XMM7_Da * fVar8) + unaff_XMM11_Da;
    *pfVar6 = fVar8;
    fVar1 = *(float *)((longlong)pfVar6 + (lVar4 * 4 - unaff_RBX) + in_R10);
    fVar8 = unaff_XMM8_Da * fVar1 + *param_4;
    *param_4 = (param_4[1] - unaff_XMM6_Da * fVar8) + unaff_XMM9_Da * fVar1;
    param_4[1] = (unaff_XMM10_Da * fVar1 - unaff_XMM7_Da * fVar8) + unaff_XMM11_Da;
    pfVar6[lVar4] = fVar8;
    fVar1 = *(float *)((longlong)pfVar6 + (lVar5 * 4 - unaff_RBX) + in_R10);
    fVar8 = unaff_XMM8_Da * fVar1 + *param_4;
    *param_4 = (param_4[1] - unaff_XMM6_Da * fVar8) + unaff_XMM9_Da * fVar1;
    param_4[1] = (unaff_XMM10_Da * fVar1 - unaff_XMM7_Da * fVar8) + unaff_XMM11_Da;
    pfVar6[lVar5] = fVar8;
    pfVar6 = pfVar6 + iVar2 * 4;
    uVar7 = uVar7 - 1;
  } while (uVar7 != 0);
  if ((int)(uVar3 * 4) < in_R11D) {
    pfVar6 = (float *)(unaff_RBX + (longlong)(int)(uVar3 * 4 * in_stack_000000d0) * 4);
    uVar7 = (ulonglong)(in_R11D + uVar3 * -4);
    do {
      fVar1 = *(float *)((in_R10 - unaff_RBX) + (longlong)pfVar6);
      fVar8 = unaff_XMM8_Da * fVar1 + *param_4;
      *param_4 = (param_4[1] - unaff_XMM6_Da * fVar8) + unaff_XMM9_Da * fVar1;
      param_4[1] = (unaff_XMM10_Da * fVar1 - unaff_XMM7_Da * fVar8) + unaff_XMM11_Da;
      *pfVar6 = fVar8;
      pfVar6 = pfVar6 + in_stack_000000d0;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}






// 函数: void FUN_1806fbc38(undefined8 param_1,undefined8 param_2,int param_3,float *param_4)
void FUN_1806fbc38(undefined8 param_1,undefined8 param_2,int param_3,float *param_4)

{
  float fVar1;
  ulonglong uVar2;
  float *pfVar3;
  longlong unaff_RBX;
  int unaff_EDI;
  longlong in_R10;
  int in_R11D;
  float fVar4;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  
  if (unaff_EDI < in_R11D) {
    pfVar3 = (float *)(unaff_RBX + (longlong)(unaff_EDI * param_3) * 4);
    uVar2 = (ulonglong)(uint)(in_R11D - unaff_EDI);
    do {
      fVar1 = *(float *)((in_R10 - unaff_RBX) + (longlong)pfVar3);
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






// 函数: void FUN_1806fbcf0(longlong param_1,longlong param_2,float param_3,float param_4,int param_5,
void FUN_1806fbcf0(longlong param_1,longlong param_2,float param_3,float param_4,int param_5,
                  int param_6,int param_7,longlong param_8,int param_9)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  ulonglong uVar9;
  float *pfVar10;
  float *pfVar11;
  longlong lVar12;
  float *pfVar13;
  int iVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  ulonglong uStack_98;
  
  lVar15 = (longlong)param_7;
  iVar2 = (int)(48000 / (longlong)param_9);
  param_4 = 1.0 - param_4;
  iVar14 = 0;
  param_5 = param_5 / iVar2;
  param_3 = 1.0 - param_3;
  if (3 < param_5) {
    pfVar10 = (float *)(param_2 + 4 + lVar15 * 4);
    lVar12 = (longlong)(iVar2 * 2);
    pfVar8 = (float *)(param_8 + lVar12 * 4);
    lVar5 = param_7 * 2 - lVar15;
    lVar3 = (lVar5 * 4 - param_2) + param_1;
    lVar6 = param_7 * 3 - lVar15;
    lVar4 = (lVar6 * 4 - param_2) + param_1;
    lVar7 = (param_1 + lVar15 * -4) - param_2;
    uVar1 = (param_5 - 4U >> 2) + 1;
    uStack_98 = (ulonglong)uVar1;
    iVar14 = uVar1 * 4;
    do {
      fVar16 = pfVar8[-lVar12] * pfVar8[-lVar12];
      fVar17 = (*(float *)(lVar7 + -4 + (longlong)pfVar10) - *(float *)(lVar7 + (longlong)pfVar10))
               * 0.5 * ((1.0 - fVar16) * param_3 + fVar16 * param_4);
      fVar16 = pfVar10[-lVar15];
      pfVar10[-1 - lVar15] = pfVar10[-1 - lVar15] - fVar17;
      pfVar10[-lVar15] = fVar17 + fVar16;
      fVar16 = pfVar8[iVar2 - lVar12] * pfVar8[iVar2 - lVar12];
      fVar16 = (*(float *)((param_1 - param_2) + -4 + (longlong)pfVar10) -
               *(float *)((param_1 - param_2) + (longlong)pfVar10)) * 0.5 *
               ((1.0 - fVar16) * param_3 + fVar16 * param_4);
      pfVar10[-1] = pfVar10[-1] - fVar16;
      *pfVar10 = fVar16 + *pfVar10;
      fVar16 = *pfVar8 * *pfVar8;
      fVar16 = (*(float *)(lVar3 + -4 + (longlong)pfVar10) - *(float *)(lVar3 + (longlong)pfVar10))
               * 0.5 * ((1.0 - fVar16) * param_3 + fVar16 * param_4);
      pfVar10[lVar5 + -1] = pfVar10[lVar5 + -1] - fVar16;
      pfVar10[lVar5] = fVar16 + pfVar10[lVar5];
      pfVar11 = pfVar8 + (iVar2 * 3 - lVar12);
      pfVar8 = pfVar8 + iVar2 * 4;
      fVar16 = *pfVar11 * *pfVar11;
      fVar16 = (*(float *)((longlong)pfVar10 + lVar4 + -4) - *(float *)(lVar4 + (longlong)pfVar10))
               * 0.5 * ((1.0 - fVar16) * param_3 + fVar16 * param_4);
      pfVar10[lVar6 + -1] = pfVar10[lVar6 + -1] - fVar16;
      pfVar10[lVar6] = fVar16 + pfVar10[lVar6];
      pfVar10 = pfVar10 + param_7 * 4;
      uStack_98 = uStack_98 - 1;
    } while (uStack_98 != 0);
  }
  if (iVar14 < param_5) {
    uVar9 = (ulonglong)(uint)(param_5 - iVar14);
    pfVar8 = (float *)(param_8 + (longlong)(iVar14 * iVar2) * 4);
    pfVar10 = (float *)(param_2 + ((longlong)(iVar14 * param_7) + 1) * 4);
    iVar14 = iVar14 + (param_5 - iVar14);
    do {
      fVar16 = *pfVar8;
      pfVar8 = pfVar8 + iVar2;
      fVar16 = fVar16 * fVar16;
      fVar16 = (*(float *)((param_1 - param_2) + -4 + (longlong)pfVar10) -
               *(float *)((param_1 - param_2) + (longlong)pfVar10)) * 0.5 *
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
      pfVar8 = (float *)(param_2 + ((longlong)(iVar14 * param_7) + 1) * 4);
      pfVar10 = (float *)(param_2 + ((longlong)((iVar14 + 3) * param_7) + 1) * 4);
      pfVar11 = (float *)(param_2 + ((longlong)((iVar14 + 2) * param_7) + 1) * 4);
      uVar1 = ((param_6 - iVar14) - 4U >> 2) + 1;
      uVar9 = (ulonglong)uVar1;
      pfVar13 = (float *)(param_2 + ((longlong)((iVar14 + 1) * param_7) + 1) * 4);
      iVar14 = iVar14 + uVar1 * 4;
      do {
        fVar16 = (*(float *)(lVar15 + -4 + (longlong)pfVar8) - *(float *)(lVar15 + (longlong)pfVar8)
                 ) * 0.5 * param_4;
        pfVar8[-1] = pfVar8[-1] - fVar16;
        *pfVar8 = fVar16 + *pfVar8;
        pfVar8 = pfVar8 + iVar2;
        fVar16 = (*(float *)(lVar15 + -4 + (longlong)pfVar13) -
                 *(float *)((longlong)pfVar13 + lVar15)) * 0.5 * param_4;
        pfVar13[-1] = pfVar13[-1] - fVar16;
        *pfVar13 = fVar16 + *pfVar13;
        pfVar13 = pfVar13 + iVar2;
        fVar16 = (*(float *)(lVar15 + -4 + (longlong)pfVar11) -
                 *(float *)((longlong)pfVar11 + lVar15)) * 0.5 * param_4;
        pfVar11[-1] = pfVar11[-1] - fVar16;
        *pfVar11 = fVar16 + *pfVar11;
        pfVar11 = pfVar11 + iVar2;
        fVar16 = (*(float *)(lVar15 + -4 + (longlong)pfVar10) -
                 *(float *)((longlong)pfVar10 + lVar15)) * 0.5 * param_4;
        pfVar10[-1] = pfVar10[-1] - fVar16;
        *pfVar10 = fVar16 + *pfVar10;
        pfVar10 = pfVar10 + iVar2;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (iVar14 < param_6) {
      pfVar8 = (float *)(param_2 + ((longlong)(iVar14 * param_7) + 1) * 4);
      lVar15 = (longlong)(param_6 - iVar14);
      do {
        fVar16 = (*(float *)((param_1 - param_2) + -4 + (longlong)pfVar8) -
                 *(float *)((param_1 - param_2) + (longlong)pfVar8)) * 0.5 * param_4;
        pfVar8[-1] = pfVar8[-1] - fVar16;
        *pfVar8 = fVar16 + *pfVar8;
        pfVar8 = pfVar8 + param_7;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
  }
  return;
}






// 函数: void FUN_1806fbd1d(longlong param_1,uint param_2,float param_3,float param_4)
void FUN_1806fbd1d(longlong param_1,uint param_2,float param_3,float param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong in_RAX;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  longlong unaff_RSI;
  ulonglong uVar9;
  float *pfVar10;
  float *pfVar11;
  longlong lVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  ulonglong unaff_R14;
  float fVar16;
  float fVar17;
  float in_XMM5_Da;
  longlong in_stack_000000a0;
  longlong in_stack_000000a8;
  int in_stack_000000c0;
  int in_stack_000000c8;
  uint in_stack_000000d0;
  longlong in_stack_000000d8;
  int in_stack_000000e0;
  
  iVar2 = (int)((longlong)((ulonglong)param_2 << 0x20 | in_RAX & 0xffffffff) /
               (longlong)in_stack_000000e0);
  param_4 = in_XMM5_Da - param_4;
  iVar14 = 0;
  in_stack_000000c0 = in_stack_000000c0 / iVar2;
  param_3 = in_XMM5_Da - param_3;
  if (3 < in_stack_000000c0) {
    iVar15 = (int)unaff_R14;
    pfVar10 = (float *)(unaff_RSI + 4 + unaff_R14 * 4);
    lVar12 = (longlong)(iVar2 * 2);
    pfVar8 = (float *)(in_stack_000000d8 + lVar12 * 4);
    lVar5 = (longlong)(iVar15 * 2) - unaff_R14;
    lVar3 = (lVar5 * 4 - unaff_RSI) + param_1;
    lVar6 = (longlong)(iVar15 * 3) - unaff_R14;
    lVar4 = (lVar6 * 4 - unaff_RSI) + param_1;
    lVar7 = (param_1 + unaff_R14 * -4) - unaff_RSI;
    uVar1 = (in_stack_000000c0 - 4U >> 2) + 1;
    uVar9 = (ulonglong)uVar1;
    iVar14 = uVar1 * 4;
    do {
      fVar16 = pfVar8[-lVar12] * pfVar8[-lVar12];
      fVar17 = (*(float *)(lVar7 + -4 + (longlong)pfVar10) - *(float *)(lVar7 + (longlong)pfVar10))
               * 0.5 * ((in_XMM5_Da - fVar16) * param_3 + fVar16 * param_4);
      fVar16 = pfVar10[-unaff_R14];
      pfVar10[-1 - unaff_R14] = pfVar10[-1 - unaff_R14] - fVar17;
      pfVar10[-unaff_R14] = fVar17 + fVar16;
      fVar16 = pfVar8[iVar2 - lVar12] * pfVar8[iVar2 - lVar12];
      fVar16 = (*(float *)((param_1 - unaff_RSI) + -4 + (longlong)pfVar10) -
               *(float *)((param_1 - unaff_RSI) + (longlong)pfVar10)) * 0.5 *
               ((in_XMM5_Da - fVar16) * param_3 + fVar16 * param_4);
      pfVar10[-1] = pfVar10[-1] - fVar16;
      *pfVar10 = fVar16 + *pfVar10;
      fVar16 = *pfVar8 * *pfVar8;
      fVar16 = (*(float *)(lVar3 + -4 + (longlong)pfVar10) - *(float *)(lVar3 + (longlong)pfVar10))
               * 0.5 * ((in_XMM5_Da - fVar16) * param_3 + fVar16 * param_4);
      pfVar10[lVar5 + -1] = pfVar10[lVar5 + -1] - fVar16;
      pfVar10[lVar5] = fVar16 + pfVar10[lVar5];
      pfVar11 = pfVar8 + (iVar2 * 3 - lVar12);
      pfVar8 = pfVar8 + iVar2 * 4;
      fVar16 = *pfVar11 * *pfVar11;
      fVar16 = (*(float *)((longlong)pfVar10 + lVar4 + -4) - *(float *)(lVar4 + (longlong)pfVar10))
               * 0.5 * ((in_XMM5_Da - fVar16) * param_3 + fVar16 * param_4);
      pfVar10[lVar6 + -1] = pfVar10[lVar6 + -1] - fVar16;
      pfVar10[lVar6] = fVar16 + pfVar10[lVar6];
      pfVar10 = pfVar10 + iVar15 * 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    unaff_R14 = (ulonglong)in_stack_000000d0;
    param_1 = in_stack_000000a0;
    unaff_RSI = in_stack_000000a8;
  }
  iVar15 = (int)unaff_R14;
  if (iVar14 < in_stack_000000c0) {
    uVar9 = (ulonglong)(uint)(in_stack_000000c0 - iVar14);
    pfVar8 = (float *)(in_stack_000000d8 + (longlong)(iVar14 * iVar2) * 4);
    pfVar10 = (float *)(unaff_RSI + ((longlong)(iVar14 * iVar15) + 1) * 4);
    iVar14 = iVar14 + (in_stack_000000c0 - iVar14);
    do {
      fVar16 = *pfVar8;
      pfVar8 = pfVar8 + iVar2;
      fVar16 = fVar16 * fVar16;
      fVar16 = (*(float *)((param_1 - unaff_RSI) + -4 + (longlong)pfVar10) -
               *(float *)((param_1 - unaff_RSI) + (longlong)pfVar10)) * 0.5 *
               ((in_XMM5_Da - fVar16) * param_3 + fVar16 * param_4);
      pfVar10[-1] = pfVar10[-1] - fVar16;
      *pfVar10 = fVar16 + *pfVar10;
      pfVar10 = pfVar10 + iVar15;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (iVar14 < in_stack_000000c8) {
    if (3 < in_stack_000000c8 - iVar14) {
      iVar2 = iVar15 * 4;
      lVar3 = param_1 - unaff_RSI;
      pfVar8 = (float *)(unaff_RSI + ((longlong)(iVar14 * iVar15) + 1) * 4);
      pfVar10 = (float *)(unaff_RSI + ((longlong)((iVar14 + 3) * iVar15) + 1) * 4);
      pfVar11 = (float *)(unaff_RSI + ((longlong)((iVar14 + 2) * iVar15) + 1) * 4);
      uVar1 = ((in_stack_000000c8 - iVar14) - 4U >> 2) + 1;
      uVar9 = (ulonglong)uVar1;
      pfVar13 = (float *)(unaff_RSI + ((longlong)((iVar14 + 1) * iVar15) + 1) * 4);
      iVar14 = iVar14 + uVar1 * 4;
      do {
        fVar16 = (*(float *)(lVar3 + -4 + (longlong)pfVar8) - *(float *)(lVar3 + (longlong)pfVar8))
                 * 0.5 * param_4;
        pfVar8[-1] = pfVar8[-1] - fVar16;
        *pfVar8 = fVar16 + *pfVar8;
        pfVar8 = pfVar8 + iVar2;
        fVar16 = (*(float *)(lVar3 + -4 + (longlong)pfVar13) - *(float *)((longlong)pfVar13 + lVar3)
                 ) * 0.5 * param_4;
        pfVar13[-1] = pfVar13[-1] - fVar16;
        *pfVar13 = fVar16 + *pfVar13;
        pfVar13 = pfVar13 + iVar2;
        fVar16 = (*(float *)(lVar3 + -4 + (longlong)pfVar11) - *(float *)((longlong)pfVar11 + lVar3)
                 ) * 0.5 * param_4;
        pfVar11[-1] = pfVar11[-1] - fVar16;
        *pfVar11 = fVar16 + *pfVar11;
        pfVar11 = pfVar11 + iVar2;
        fVar16 = (*(float *)(lVar3 + -4 + (longlong)pfVar10) - *(float *)((longlong)pfVar10 + lVar3)
                 ) * 0.5 * param_4;
        pfVar10[-1] = pfVar10[-1] - fVar16;
        *pfVar10 = fVar16 + *pfVar10;
        pfVar10 = pfVar10 + iVar2;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (iVar14 < in_stack_000000c8) {
      pfVar8 = (float *)(unaff_RSI + ((longlong)(iVar14 * iVar15) + 1) * 4);
      lVar3 = (longlong)(in_stack_000000c8 - iVar14);
      do {
        fVar16 = (*(float *)((param_1 - unaff_RSI) + -4 + (longlong)pfVar8) -
                 *(float *)((param_1 - unaff_RSI) + (longlong)pfVar8)) * 0.5 * param_4;
        pfVar8[-1] = pfVar8[-1] - fVar16;
        *pfVar8 = fVar16 + *pfVar8;
        pfVar8 = pfVar8 + iVar15;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  return;
}






// 函数: void FUN_1806fbd73(longlong param_1,undefined8 param_2,longlong param_3,float param_4)
void FUN_1806fbd73(longlong param_1,undefined8 param_2,longlong param_3,float param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float *pfVar9;
  longlong unaff_RBX;
  longlong unaff_RSI;
  int unaff_EDI;
  ulonglong uVar10;
  float *pfVar11;
  float *pfVar12;
  longlong lVar13;
  float *pfVar14;
  int iVar15;
  longlong unaff_R14;
  longlong unaff_R15;
  float fVar16;
  float fVar17;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  longlong in_stack_000000a0;
  longlong in_stack_000000a8;
  int in_stack_000000c8;
  int in_stack_000000d0;
  longlong in_stack_000000d8;
  int in_stack_000000e0;
  
  iVar1 = (int)unaff_R14;
  pfVar11 = (float *)(unaff_RSI + 4 + param_3);
  iVar2 = (int)unaff_R15;
  lVar13 = (longlong)(iVar2 * 2);
  pfVar9 = (float *)(in_stack_000000d8 + lVar13 * 4);
  lVar6 = iVar1 * 2 - unaff_R14;
  lVar4 = (lVar6 * 4 - unaff_RSI) + unaff_RBX;
  lVar7 = iVar1 * 3 - unaff_R14;
  lVar5 = (lVar7 * 4 - unaff_RSI) + unaff_RBX;
  lVar8 = (unaff_RBX - param_3) - unaff_RSI;
  uVar3 = (unaff_EDI - 4U >> 2) + 1;
  uVar10 = (ulonglong)uVar3;
  iVar15 = uVar3 * 4;
  do {
    fVar16 = pfVar9[-lVar13] * pfVar9[-lVar13];
    fVar17 = (*(float *)(lVar8 + -4 + (longlong)pfVar11) - *(float *)(lVar8 + (longlong)pfVar11)) *
             param_4 * ((in_XMM5_Da - fVar16) * unaff_XMM6_Da + fVar16 * in_XMM4_Da);
    fVar16 = pfVar11[-unaff_R14];
    *(float *)((-4 - param_3) + (longlong)pfVar11) =
         *(float *)((-4 - param_3) + (longlong)pfVar11) - fVar17;
    pfVar11[-unaff_R14] = fVar17 + fVar16;
    fVar16 = pfVar9[unaff_R15 - lVar13] * pfVar9[unaff_R15 - lVar13];
    fVar16 = (*(float *)((param_1 - unaff_RSI) + -4 + (longlong)pfVar11) -
             *(float *)((param_1 - unaff_RSI) + (longlong)pfVar11)) * param_4 *
             ((in_XMM5_Da - fVar16) * unaff_XMM6_Da + fVar16 * in_XMM4_Da);
    pfVar11[-1] = pfVar11[-1] - fVar16;
    *pfVar11 = fVar16 + *pfVar11;
    fVar16 = *pfVar9 * *pfVar9;
    fVar16 = (*(float *)(lVar4 + -4 + (longlong)pfVar11) - *(float *)(lVar4 + (longlong)pfVar11)) *
             param_4 * ((in_XMM5_Da - fVar16) * unaff_XMM6_Da + fVar16 * in_XMM4_Da);
    pfVar11[lVar6 + -1] = pfVar11[lVar6 + -1] - fVar16;
    pfVar11[lVar6] = fVar16 + pfVar11[lVar6];
    pfVar12 = pfVar9 + (iVar2 * 3 - lVar13);
    pfVar9 = pfVar9 + iVar2 * 4;
    fVar16 = *pfVar12 * *pfVar12;
    fVar16 = (*(float *)((longlong)pfVar11 + lVar5 + -4) - *(float *)(lVar5 + (longlong)pfVar11)) *
             param_4 * ((in_XMM5_Da - fVar16) * unaff_XMM6_Da + fVar16 * in_XMM4_Da);
    pfVar11[lVar7 + -1] = pfVar11[lVar7 + -1] - fVar16;
    pfVar11[lVar7] = fVar16 + pfVar11[lVar7];
    pfVar11 = pfVar11 + iVar1 * 4;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (iVar15 < unaff_EDI) {
    uVar3 = unaff_EDI + uVar3 * -4;
    uVar10 = (ulonglong)uVar3;
    pfVar9 = (float *)(in_stack_000000d8 + (longlong)(iVar15 * in_stack_000000e0) * 4);
    pfVar11 = (float *)(in_stack_000000a8 + ((longlong)(iVar15 * in_stack_000000d0) + 1) * 4);
    iVar15 = iVar15 + uVar3;
    do {
      fVar16 = *pfVar9;
      pfVar9 = pfVar9 + in_stack_000000e0;
      fVar16 = fVar16 * fVar16;
      fVar16 = (*(float *)((in_stack_000000a0 - in_stack_000000a8) + -4 + (longlong)pfVar11) -
               *(float *)((in_stack_000000a0 - in_stack_000000a8) + (longlong)pfVar11)) * param_4 *
               ((in_XMM5_Da - fVar16) * unaff_XMM6_Da + fVar16 * in_XMM4_Da);
      pfVar11[-1] = pfVar11[-1] - fVar16;
      *pfVar11 = fVar16 + *pfVar11;
      pfVar11 = pfVar11 + in_stack_000000d0;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if (iVar15 < in_stack_000000c8) {
    if (3 < in_stack_000000c8 - iVar15) {
      iVar1 = in_stack_000000d0 * 4;
      lVar4 = in_stack_000000a0 - in_stack_000000a8;
      pfVar9 = (float *)(in_stack_000000a8 + ((longlong)(iVar15 * in_stack_000000d0) + 1) * 4);
      pfVar11 = (float *)(in_stack_000000a8 + ((longlong)((iVar15 + 3) * in_stack_000000d0) + 1) * 4
                         );
      pfVar12 = (float *)(in_stack_000000a8 + ((longlong)((iVar15 + 2) * in_stack_000000d0) + 1) * 4
                         );
      uVar3 = ((in_stack_000000c8 - iVar15) - 4U >> 2) + 1;
      uVar10 = (ulonglong)uVar3;
      pfVar14 = (float *)(in_stack_000000a8 + ((longlong)((iVar15 + 1) * in_stack_000000d0) + 1) * 4
                         );
      iVar15 = iVar15 + uVar3 * 4;
      do {
        fVar16 = (*(float *)(lVar4 + -4 + (longlong)pfVar9) - *(float *)(lVar4 + (longlong)pfVar9))
                 * param_4 * in_XMM4_Da;
        pfVar9[-1] = pfVar9[-1] - fVar16;
        *pfVar9 = fVar16 + *pfVar9;
        pfVar9 = pfVar9 + iVar1;
        fVar16 = (*(float *)(lVar4 + -4 + (longlong)pfVar14) - *(float *)((longlong)pfVar14 + lVar4)
                 ) * param_4 * in_XMM4_Da;
        pfVar14[-1] = pfVar14[-1] - fVar16;
        *pfVar14 = fVar16 + *pfVar14;
        pfVar14 = pfVar14 + iVar1;
        fVar16 = (*(float *)(lVar4 + -4 + (longlong)pfVar12) - *(float *)((longlong)pfVar12 + lVar4)
                 ) * param_4 * in_XMM4_Da;
        pfVar12[-1] = pfVar12[-1] - fVar16;
        *pfVar12 = fVar16 + *pfVar12;
        pfVar12 = pfVar12 + iVar1;
        fVar16 = (*(float *)(lVar4 + -4 + (longlong)pfVar11) - *(float *)((longlong)pfVar11 + lVar4)
                 ) * param_4 * in_XMM4_Da;
        pfVar11[-1] = pfVar11[-1] - fVar16;
        *pfVar11 = fVar16 + *pfVar11;
        pfVar11 = pfVar11 + iVar1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (iVar15 < in_stack_000000c8) {
      pfVar9 = (float *)(in_stack_000000a8 + ((longlong)(iVar15 * in_stack_000000d0) + 1) * 4);
      lVar4 = (longlong)(in_stack_000000c8 - iVar15);
      do {
        fVar16 = (*(float *)((in_stack_000000a0 - in_stack_000000a8) + -4 + (longlong)pfVar9) -
                 *(float *)((in_stack_000000a0 - in_stack_000000a8) + (longlong)pfVar9)) * param_4 *
                 in_XMM4_Da;
        pfVar9[-1] = pfVar9[-1] - fVar16;
        *pfVar9 = fVar16 + *pfVar9;
        pfVar9 = pfVar9 + in_stack_000000d0;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  return;
}






