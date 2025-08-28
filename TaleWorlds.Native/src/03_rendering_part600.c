#include "TaleWorlds.Native.Split.h"

// 03_rendering_part600.c - 14 个函数

// 函数: void FUN_180598210(longlong param_1,undefined8 param_2,float param_3,longlong param_4)
void FUN_180598210(longlong param_1,undefined8 param_2,float param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  
  cVar1 = func_0x00018057c520(param_1 + 0xa0,*(uint *)(param_4 + 0x24) >> 8 & 0xffffff01);
  if (cVar1 != '\0') {
    if (*(float *)(param_1 + 0xb8) <= *(float *)(param_1 + 0x70)) {
      fVar8 = *(float *)(param_1 + 0xf8) - *(float *)(param_1 + 0xc);
      fVar4 = *(float *)(param_1 + 0xfc) - *(float *)(param_1 + 0x10);
      fVar5 = *(float *)(param_1 + 0x100) - *(float *)(param_1 + 0x14);
      fVar5 = fVar8 * fVar8 + fVar4 * fVar4 + fVar5 * fVar5;
      if (fVar5 <= 0.010000001) goto LAB_1805983ca;
      fVar5 = SQRT(fVar5) * 1.5;
      if (1.0 <= fVar5) {
        fVar5 = 1.0;
      }
      fVar4 = 1.0 - fVar5;
      *(float *)(param_1 + 0x68) =
           fVar4 * *(float *)(param_1 + 0x68) + fVar5 * *(float *)(param_1 + 0xb0);
      *(float *)(param_1 + 0x6c) =
           fVar4 * *(float *)(param_1 + 0x6c) + fVar5 * *(float *)(param_1 + 0xb4);
      *(float *)(param_1 + 0x70) =
           fVar4 * *(float *)(param_1 + 0x70) + fVar5 * *(float *)(param_1 + 0xb8);
      *(undefined4 *)(param_1 + 0x74) = 0x7f7fffff;
      fVar5 = *(float *)(param_1 + 0x70);
      fVar4 = *(float *)(param_1 + 0x6c);
      fVar8 = *(float *)(param_1 + 0x68);
      fVar6 = fVar8 * fVar8 + fVar4 * fVar4 + fVar5 * fVar5;
      auVar9 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
      fVar7 = auVar9._0_4_;
      fVar6 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
      *(float *)(param_1 + 0x70) = fVar5 * fVar6;
      *(float *)(param_1 + 0x68) = fVar8 * fVar6;
      *(float *)(param_1 + 0x6c) = fVar4 * fVar6;
    }
    else {
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0xb0);
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0xb8);
    }
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0xc);
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0x14);
  }
LAB_1805983ca:
  fVar5 = *(float *)(param_1 + 0x108);
  if (0.0001 < ABS(fVar5)) {
    iVar2 = 1;
    iVar3 = -1;
    if (0.0 <= fVar5) {
      iVar3 = iVar2;
    }
    if (*(float *)(param_1 + 0x78) < 0.0) {
      iVar2 = -1;
    }
    if (iVar3 != iVar2) {
      *(float *)(param_1 + 0x78) = -*(float *)(param_1 + 0x78);
    }
  }
  fVar8 = fVar5 - *(float *)(param_1 + 0x78);
  fVar4 = fVar8 * fVar8;
  if (fVar4 <= 0.02) {
    fVar4 = 0.02;
  }
  param_3 = fVar4 * 10.0 * param_3;
  if (1.0 <= param_3) {
    param_3 = 1.0;
  }
  if ((fVar8 < -param_3) || (param_3 <= fVar8)) {
    if (fVar8 < 0.0) {
      param_3 = -param_3;
    }
    fVar5 = *(float *)(param_1 + 0x78) + param_3;
  }
  *(float *)(param_1 + 0x78) = fVar5;
  if ((*(uint *)(param_4 + 0x24) & 0x800) == 0) {
    FUN_180597510(param_1,param_2);
  }
  else if (*(char *)(param_4 + 0x98) == '\0') {
    FUN_180596510(param_2);
  }
  *(undefined8 *)(param_1 + 0xf0) = 0;
  return;
}





// 函数: void FUN_18059823c(undefined8 param_1,undefined8 param_2,float param_3,longlong param_4)
void FUN_18059823c(undefined8 param_1,undefined8 param_2,float param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong unaff_RBX;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  
  cVar1 = func_0x00018057c520();
  if (cVar1 != '\0') {
    if (*(float *)(unaff_RBX + 0xb8) <= *(float *)(unaff_RBX + 0x70)) {
      fVar8 = *(float *)(unaff_RBX + 0xf8) - *(float *)(unaff_RBX + 0xc);
      fVar4 = *(float *)(unaff_RBX + 0xfc) - *(float *)(unaff_RBX + 0x10);
      fVar5 = *(float *)(unaff_RBX + 0x100) - *(float *)(unaff_RBX + 0x14);
      fVar5 = fVar8 * fVar8 + fVar4 * fVar4 + fVar5 * fVar5;
      if (fVar5 <= 0.010000001) goto LAB_1805983ca;
      fVar5 = SQRT(fVar5) * 1.5;
      if (1.0 <= fVar5) {
        fVar5 = 1.0;
      }
      fVar4 = 1.0 - fVar5;
      *(float *)(unaff_RBX + 0x68) =
           fVar4 * *(float *)(unaff_RBX + 0x68) + fVar5 * *(float *)(unaff_RBX + 0xb0);
      *(float *)(unaff_RBX + 0x6c) =
           fVar4 * *(float *)(unaff_RBX + 0x6c) + fVar5 * *(float *)(unaff_RBX + 0xb4);
      *(float *)(unaff_RBX + 0x70) =
           fVar4 * *(float *)(unaff_RBX + 0x70) + fVar5 * *(float *)(unaff_RBX + 0xb8);
      *(undefined4 *)(unaff_RBX + 0x74) = 0x7f7fffff;
      fVar5 = *(float *)(unaff_RBX + 0x70);
      fVar4 = *(float *)(unaff_RBX + 0x6c);
      fVar8 = *(float *)(unaff_RBX + 0x68);
      fVar6 = fVar8 * fVar8 + fVar4 * fVar4 + fVar5 * fVar5;
      auVar9 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
      fVar7 = auVar9._0_4_;
      fVar6 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
      *(float *)(unaff_RBX + 0x70) = fVar5 * fVar6;
      *(float *)(unaff_RBX + 0x68) = fVar8 * fVar6;
      *(float *)(unaff_RBX + 0x6c) = fVar4 * fVar6;
    }
    else {
      *(undefined8 *)(unaff_RBX + 0x68) = *(undefined8 *)(unaff_RBX + 0xb0);
      *(undefined8 *)(unaff_RBX + 0x70) = *(undefined8 *)(unaff_RBX + 0xb8);
    }
    *(undefined8 *)(unaff_RBX + 0xf8) = *(undefined8 *)(unaff_RBX + 0xc);
    *(undefined8 *)(unaff_RBX + 0x100) = *(undefined8 *)(unaff_RBX + 0x14);
  }
LAB_1805983ca:
  fVar5 = *(float *)(unaff_RBX + 0x108);
  if (0.0001 < ABS(fVar5)) {
    iVar2 = 1;
    iVar3 = -1;
    if (0.0 <= fVar5) {
      iVar3 = iVar2;
    }
    if (*(float *)(unaff_RBX + 0x78) < 0.0) {
      iVar2 = -1;
    }
    if (iVar3 != iVar2) {
      *(float *)(unaff_RBX + 0x78) = -*(float *)(unaff_RBX + 0x78);
    }
  }
  fVar8 = fVar5 - *(float *)(unaff_RBX + 0x78);
  fVar4 = fVar8 * fVar8;
  if (fVar4 <= 0.02) {
    fVar4 = 0.02;
  }
  param_3 = fVar4 * 10.0 * param_3;
  if (1.0 <= param_3) {
    param_3 = 1.0;
  }
  if ((fVar8 < -param_3) || (param_3 <= fVar8)) {
    if (fVar8 < 0.0) {
      param_3 = -param_3;
    }
    fVar5 = *(float *)(unaff_RBX + 0x78) + param_3;
  }
  *(float *)(unaff_RBX + 0x78) = fVar5;
  if ((*(uint *)(param_4 + 0x24) & 0x800) == 0) {
    FUN_180597510();
  }
  else if (*(char *)(param_4 + 0x98) == '\0') {
    FUN_180596510();
  }
  *(undefined8 *)(unaff_RBX + 0xf0) = 0;
  return;
}





// 函数: void FUN_1805982c7(undefined8 param_1,undefined8 param_2,float param_3,float param_4)
void FUN_1805982c7(undefined8 param_1,undefined8 param_2,float param_3,float param_4)

{
  int iVar1;
  int iVar2;
  longlong unaff_RBX;
  longlong unaff_RDI;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float unaff_XMM8_Da;
  
  param_3 = param_3 * 1.5;
  if (1.0 <= param_3) {
    param_3 = 1.0;
  }
  param_4 = param_4 - param_3;
  *(float *)(unaff_RBX + 0x68) =
       param_4 * *(float *)(unaff_RBX + 0x68) + param_3 * *(float *)(unaff_RBX + 0xb0);
  *(float *)(unaff_RBX + 0x6c) =
       param_4 * *(float *)(unaff_RBX + 0x6c) + param_3 * *(float *)(unaff_RBX + 0xb4);
  *(float *)(unaff_RBX + 0x70) =
       param_4 * *(float *)(unaff_RBX + 0x70) + param_3 * *(float *)(unaff_RBX + 0xb8);
  *(undefined4 *)(unaff_RBX + 0x74) = 0x7f7fffff;
  fVar4 = *(float *)(unaff_RBX + 0x70);
  fVar3 = *(float *)(unaff_RBX + 0x6c);
  fVar7 = *(float *)(unaff_RBX + 0x68);
  fVar5 = fVar7 * fVar7 + fVar3 * fVar3 + fVar4 * fVar4;
  auVar8 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
  fVar6 = auVar8._0_4_;
  fVar5 = fVar6 * 0.5 * (3.0 - fVar5 * fVar6 * fVar6);
  *(float *)(unaff_RBX + 0x70) = fVar4 * fVar5;
  *(float *)(unaff_RBX + 0x68) = fVar7 * fVar5;
  *(float *)(unaff_RBX + 0x6c) = fVar3 * fVar5;
  *(undefined8 *)(unaff_RBX + 0xf8) = *(undefined8 *)(unaff_RBX + 0xc);
  *(undefined8 *)(unaff_RBX + 0x100) = *(undefined8 *)(unaff_RBX + 0x14);
  fVar4 = *(float *)(unaff_RBX + 0x108);
  if (0.0001 < ABS(fVar4)) {
    iVar1 = 1;
    iVar2 = -1;
    if (0.0 <= fVar4) {
      iVar2 = iVar1;
    }
    if (*(float *)(unaff_RBX + 0x78) < 0.0) {
      iVar1 = -1;
    }
    if (iVar2 != iVar1) {
      *(float *)(unaff_RBX + 0x78) = -*(float *)(unaff_RBX + 0x78);
    }
  }
  fVar7 = fVar4 - *(float *)(unaff_RBX + 0x78);
  fVar3 = fVar7 * fVar7;
  if (fVar3 <= 0.02) {
    fVar3 = 0.02;
  }
  fVar3 = fVar3 * 10.0 * unaff_XMM8_Da;
  if (1.0 <= fVar3) {
    fVar3 = 1.0;
  }
  if ((fVar7 < -fVar3) || (fVar3 <= fVar7)) {
    if (fVar7 < 0.0) {
      fVar3 = -fVar3;
    }
    fVar4 = *(float *)(unaff_RBX + 0x78) + fVar3;
  }
  *(float *)(unaff_RBX + 0x78) = fVar4;
  if ((*(uint *)(unaff_RDI + 0x24) & 0x800) == 0) {
    FUN_180597510();
  }
  else if (*(char *)(unaff_RDI + 0x98) == '\0') {
    FUN_180596510();
  }
  *(undefined8 *)(unaff_RBX + 0xf0) = 0;
  return;
}





// 函数: void FUN_1805983bf(void)
void FUN_1805983bf(void)

{
  int iVar1;
  int iVar2;
  longlong unaff_RBX;
  longlong unaff_RDI;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_XMM8_Da;
  
  *(undefined8 *)(unaff_RBX + 0xf8) = *(undefined8 *)(unaff_RBX + 0xc);
  *(undefined8 *)(unaff_RBX + 0x100) = *(undefined8 *)(unaff_RBX + 0x14);
  fVar4 = *(float *)(unaff_RBX + 0x108);
  if (0.0001 < ABS(fVar4)) {
    iVar1 = 1;
    iVar2 = -1;
    if (0.0 <= fVar4) {
      iVar2 = iVar1;
    }
    if (*(float *)(unaff_RBX + 0x78) < 0.0) {
      iVar1 = -1;
    }
    if (iVar2 != iVar1) {
      *(float *)(unaff_RBX + 0x78) = -*(float *)(unaff_RBX + 0x78);
    }
  }
  fVar5 = fVar4 - *(float *)(unaff_RBX + 0x78);
  fVar3 = fVar5 * fVar5;
  if (fVar3 <= 0.02) {
    fVar3 = 0.02;
  }
  fVar3 = fVar3 * 10.0 * unaff_XMM8_Da;
  if (1.0 <= fVar3) {
    fVar3 = 1.0;
  }
  if ((fVar5 < -fVar3) || (fVar3 <= fVar5)) {
    if (fVar5 < 0.0) {
      fVar3 = -fVar3;
    }
    fVar4 = *(float *)(unaff_RBX + 0x78) + fVar3;
  }
  *(float *)(unaff_RBX + 0x78) = fVar4;
  if ((*(uint *)(unaff_RDI + 0x24) & 0x800) == 0) {
    FUN_180597510();
  }
  else if (*(char *)(unaff_RDI + 0x98) == '\0') {
    FUN_180596510();
  }
  *(undefined8 *)(unaff_RBX + 0xf0) = 0;
  return;
}





// 函数: void FUN_18059847b(void)
void FUN_18059847b(void)

{
  longlong unaff_RBX;
  longlong unaff_RDI;
  
  if (*(char *)(unaff_RDI + 0x98) == '\0') {
    FUN_180596510();
  }
  *(undefined8 *)(unaff_RBX + 0xf0) = 0;
  return;
}





// 函数: void FUN_1805984e0(longlong param_1,float param_2,longlong param_3)
void FUN_1805984e0(longlong param_1,float param_2,longlong param_3)

{
  bool bVar1;
  uint uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  bVar1 = false;
  fVar8 = *(float *)(param_1 + 0x34);
  if ((*(int *)(param_3 + 0x28) == 2) ||
     (((*(uint *)(param_3 + 0x68) | *(uint *)(param_3 + 0x60)) >> 0x18 & 1) != 0)) {
    if ((((*(uint *)(param_3 + 0x68) | *(uint *)(param_3 + 0x60)) >> 0x17 & 1) == 0) &&
       (*(int *)(param_3 + 0x70) != 0x25)) {
      uVar4 = atan2f(*(uint *)(param_3 + 0x2c) ^ 0x80000000,*(undefined4 *)(param_3 + 0x30));
      FUN_180595490(param_1,param_2,param_3,uVar4);
    }
    goto LAB_1805988c4;
  }
  if (*(char *)(param_3 + 0x9a) != '\0') {
    fVar3 = (float)atan2f(*(uint *)(param_3 + 0x108) ^ 0x80000000,*(undefined4 *)(param_3 + 0x10c));
    fVar9 = fVar3 - fVar8;
    if (fVar9 <= 3.1415927) {
      if (fVar9 < -3.1415927) {
        fVar9 = fVar9 + 6.2831855;
      }
    }
    else {
      fVar9 = fVar9 + -6.2831855;
    }
    fVar6 = ABS(fVar9);
    fVar5 = fVar6;
    if (fVar6 <= 0.01) {
      fVar5 = 0.01;
    }
    if (fVar5 * param_2 * 8.0 <= fVar6) {
      fVar3 = fVar9 * 8.0 * param_2 + fVar8;
      *(float *)(param_1 + 0x34) = fVar3;
      if (fVar3 <= 3.1415927) {
        if (fVar3 < -3.1415927) {
          *(float *)(param_1 + 0x34) = fVar3 + 6.2831855;
        }
      }
      else {
        *(float *)(param_1 + 0x34) = fVar3 - 6.2831855;
      }
    }
    else {
      *(float *)(param_1 + 0x34) = fVar3;
    }
    goto LAB_1805988c4;
  }
  if (*(float *)(param_1 + 0x44) <= 0.0 && *(float *)(param_1 + 0x44) != 0.0) goto LAB_1805988c4;
  if (*(char *)(param_3 + 0x98) != '\0') {
    *(undefined4 *)(param_1 + 0x138) = 0;
    goto LAB_1805988c4;
  }
  if (((*(char *)(param_3 + 0x170) == '\0') || (*(int *)(param_3 + 0x70) != -1)) ||
     ((*(byte *)(param_1 + 0x40) & 3) != 1)) {
    FUN_180595490();
    *(undefined4 *)(param_1 + 0x14c) = 0;
    goto LAB_1805988c4;
  }
  fVar3 = *(float *)(param_3 + 0x4c) - fVar8;
  if (fVar3 <= 3.1415927) {
    if (fVar3 < -3.1415927) {
      fVar3 = fVar3 + 6.2831855;
    }
  }
  else {
    fVar3 = fVar3 + -6.2831855;
  }
  uVar2 = *(uint *)(param_1 + 8) >> 5;
  if ((uVar2 & 1) == 0) {
    if ((fVar3 < -0.62831855) || (0.62831855 <= fVar3)) {
      fVar9 = *(float *)(param_1 + 0x14c);
      if (((((0.1 <= fVar9) || ((fVar3 < -1.5707964 || (1.5707964 <= fVar3)))) &&
           (*(int *)(param_3 + 0x74) != -1)) && ((fVar3 < -0.62831855 || (0.62831855 <= fVar3)))) ||
         (((0.2 <= fVar9 && ((fVar3 < -1.5707964 || (1.5707964 <= fVar3)))) ||
          ((0.4 <= fVar9 && ((fVar3 < -0.62831855 || (0.62831855 <= fVar3)))))))) {
        bVar1 = true;
      }
      else {
        *(float *)(param_1 + 0x128) = fVar8;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x14c) = 0;
    }
  }
  if (*(int *)(param_3 + 0x74) == -1) {
    fVar9 = 0.31415927;
  }
  else {
    fVar9 = 0.15707964;
  }
  if ((((uVar2 & 1) == 0) && (!bVar1)) || (fVar5 = *(float *)(param_3 + 0x4c) - fVar8, fVar5 == 0.0)
     ) goto LAB_1805988c4;
  if (fVar5 <= 3.1415927) {
    if (fVar5 < -3.1415927) {
      fVar5 = fVar5 + 6.2831855;
    }
  }
  else {
    fVar5 = fVar5 + -6.2831855;
  }
  fVar7 = *(float *)(param_3 + 0x174) + 0.001;
  fVar6 = (fVar9 / fVar7) * 1.5;
  if (ABS(fVar3) <= fVar6) {
    fVar9 = 1.5;
  }
  else {
    fVar9 = (fVar7 * ABS(fVar3)) / fVar9;
    if (2.0 <= fVar9) {
      fVar9 = 2.0;
    }
  }
  *(float *)(param_1 + 0x150) = fVar9;
  FUN_180595490(fVar6,param_2 * 0.4 * fVar9,fVar9,*(undefined4 *)(param_3 + 0x4c));
  fVar3 = *(float *)(param_1 + 0x150) * -0.6;
  if ((fVar3 <= fVar5) && (fVar3 = *(float *)(param_1 + 0x150) * 0.6, fVar5 <= fVar3)) {
    fVar3 = fVar5;
  }
  fVar3 = fVar3 + *(float *)(param_1 + 0x34);
  *(float *)(param_1 + 0x128) = fVar3;
  if (fVar3 <= 3.1415927) {
    if (fVar3 < -3.1415927) {
      fVar3 = fVar3 + 6.2831855;
      goto LAB_180598852;
    }
  }
  else {
    fVar3 = fVar3 - 6.2831855;
LAB_180598852:
    *(float *)(param_1 + 0x128) = fVar3;
  }
  *(undefined4 *)(param_1 + 0x14c) = 0x3ecccccd;
  bVar1 = true;
LAB_1805988c4:
  fVar8 = *(float *)(param_1 + 0x34) - fVar8;
  if (fVar8 <= 3.1415927) {
    if (fVar8 < -3.1415927) {
      fVar8 = fVar8 + 6.2831855;
    }
  }
  else {
    fVar8 = fVar8 + -6.2831855;
  }
  fVar8 = (1.0 - param_2 * 5.0) * *(float *)(param_1 + 0x138) + fVar8 * 5.0;
  *(float *)(param_1 + 0x138) = fVar8;
  if (ABS(fVar8) < 0.0001) {
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  uVar2 = *(uint *)(param_1 + 8) | 0x20;
  if (!bVar1) {
    uVar2 = *(uint *)(param_1 + 8) & 0xffffffdf;
  }
  *(uint *)(param_1 + 8) = uVar2;
  return;
}





// 函数: void FUN_1805984f3(longlong param_1,float param_2,longlong param_3)
void FUN_1805984f3(longlong param_1,float param_2,longlong param_3)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  longlong in_RAX;
  undefined8 unaff_RDI;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM10_Db;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM10_Dd;
  undefined4 unaff_XMM11_Da;
  undefined4 unaff_XMM11_Db;
  undefined4 unaff_XMM11_Dc;
  undefined4 unaff_XMM11_Dd;
  undefined4 unaff_XMM12_Da;
  undefined4 unaff_XMM12_Db;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM12_Dd;
  
  *(undefined8 *)(in_RAX + 8) = unaff_RDI;
  bVar2 = false;
  *(undefined4 *)(in_RAX + -0x18) = unaff_XMM6_Da;
  *(undefined4 *)(in_RAX + -0x14) = unaff_XMM6_Db;
  *(undefined4 *)(in_RAX + -0x10) = unaff_XMM6_Dc;
  *(undefined4 *)(in_RAX + -0xc) = unaff_XMM6_Dd;
  iVar1 = *(int *)(param_3 + 0x28);
  *(undefined4 *)(in_RAX + -0x28) = unaff_XMM7_Da;
  *(undefined4 *)(in_RAX + -0x24) = unaff_XMM7_Db;
  *(undefined4 *)(in_RAX + -0x20) = unaff_XMM7_Dc;
  *(undefined4 *)(in_RAX + -0x1c) = unaff_XMM7_Dd;
  *(undefined4 *)(in_RAX + -0x38) = unaff_XMM8_Da;
  *(undefined4 *)(in_RAX + -0x34) = unaff_XMM8_Db;
  *(undefined4 *)(in_RAX + -0x30) = unaff_XMM8_Dc;
  *(undefined4 *)(in_RAX + -0x2c) = unaff_XMM8_Dd;
  *(undefined4 *)(in_RAX + -0x48) = unaff_XMM9_Da;
  *(undefined4 *)(in_RAX + -0x44) = unaff_XMM9_Db;
  *(undefined4 *)(in_RAX + -0x40) = unaff_XMM9_Dc;
  *(undefined4 *)(in_RAX + -0x3c) = unaff_XMM9_Dd;
  *(undefined4 *)(in_RAX + -0x58) = unaff_XMM10_Da;
  *(undefined4 *)(in_RAX + -0x54) = unaff_XMM10_Db;
  *(undefined4 *)(in_RAX + -0x50) = unaff_XMM10_Dc;
  *(undefined4 *)(in_RAX + -0x4c) = unaff_XMM10_Dd;
  *(undefined4 *)(in_RAX + -0x68) = unaff_XMM11_Da;
  *(undefined4 *)(in_RAX + -100) = unaff_XMM11_Db;
  *(undefined4 *)(in_RAX + -0x60) = unaff_XMM11_Dc;
  *(undefined4 *)(in_RAX + -0x5c) = unaff_XMM11_Dd;
  *(undefined4 *)(in_RAX + -0x78) = unaff_XMM12_Da;
  *(undefined4 *)(in_RAX + -0x74) = unaff_XMM12_Db;
  *(undefined4 *)(in_RAX + -0x70) = unaff_XMM12_Dc;
  *(undefined4 *)(in_RAX + -0x6c) = unaff_XMM12_Dd;
  fVar9 = *(float *)(param_1 + 0x34);
  if ((iVar1 == 2) || (((*(uint *)(param_3 + 0x68) | *(uint *)(param_3 + 0x60)) >> 0x18 & 1) != 0))
  {
    if ((((*(uint *)(param_3 + 0x68) | *(uint *)(param_3 + 0x60)) >> 0x17 & 1) == 0) &&
       (*(int *)(param_3 + 0x70) != 0x25)) {
      uVar5 = atan2f(*(uint *)(param_3 + 0x2c) ^ 0x80000000,*(undefined4 *)(param_3 + 0x30));
      FUN_180595490(param_1,param_2,param_3,uVar5);
    }
    goto LAB_1805988c4;
  }
  if (*(char *)(param_3 + 0x9a) != '\0') {
    fVar4 = (float)atan2f(*(uint *)(param_3 + 0x108) ^ 0x80000000,*(undefined4 *)(param_3 + 0x10c));
    fVar10 = fVar4 - fVar9;
    if (fVar10 <= 3.1415927) {
      if (fVar10 < -3.1415927) {
        fVar10 = fVar10 + 6.2831855;
      }
    }
    else {
      fVar10 = fVar10 + -6.2831855;
    }
    fVar7 = ABS(fVar10);
    fVar6 = fVar7;
    if (fVar7 <= 0.01) {
      fVar6 = 0.01;
    }
    if (fVar6 * param_2 * 8.0 <= fVar7) {
      fVar4 = fVar10 * 8.0 * param_2 + fVar9;
      *(float *)(param_1 + 0x34) = fVar4;
      if (fVar4 <= 3.1415927) {
        if (fVar4 < -3.1415927) {
          *(float *)(param_1 + 0x34) = fVar4 + 6.2831855;
        }
      }
      else {
        *(float *)(param_1 + 0x34) = fVar4 - 6.2831855;
      }
    }
    else {
      *(float *)(param_1 + 0x34) = fVar4;
    }
    goto LAB_1805988c4;
  }
  if (*(float *)(param_1 + 0x44) <= 0.0 && *(float *)(param_1 + 0x44) != 0.0) goto LAB_1805988c4;
  if (*(char *)(param_3 + 0x98) != '\0') {
    *(undefined4 *)(param_1 + 0x138) = 0;
    goto LAB_1805988c4;
  }
  if (((*(char *)(param_3 + 0x170) == '\0') || (*(int *)(param_3 + 0x70) != -1)) ||
     ((*(byte *)(param_1 + 0x40) & 3) != 1)) {
    FUN_180595490(param_1,param_2,param_3,*(undefined4 *)(param_3 + 0x4c));
    *(undefined4 *)(param_1 + 0x14c) = 0;
    goto LAB_1805988c4;
  }
  fVar4 = *(float *)(param_3 + 0x4c) - fVar9;
  if (fVar4 <= 3.1415927) {
    if (fVar4 < -3.1415927) {
      fVar4 = fVar4 + 6.2831855;
    }
  }
  else {
    fVar4 = fVar4 + -6.2831855;
  }
  uVar3 = *(uint *)(param_1 + 8) >> 5;
  if ((uVar3 & 1) == 0) {
    if ((fVar4 < -0.62831855) || (0.62831855 <= fVar4)) {
      fVar10 = *(float *)(param_1 + 0x14c);
      if (((((0.1 <= fVar10) || ((fVar4 < -1.5707964 || (1.5707964 <= fVar4)))) &&
           (*(int *)(param_3 + 0x74) != -1)) && ((fVar4 < -0.62831855 || (0.62831855 <= fVar4)))) ||
         (((0.2 <= fVar10 && ((fVar4 < -1.5707964 || (1.5707964 <= fVar4)))) ||
          ((0.4 <= fVar10 && ((fVar4 < -0.62831855 || (0.62831855 <= fVar4)))))))) {
        bVar2 = true;
      }
      else {
        *(float *)(param_1 + 0x128) = fVar9;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x14c) = 0;
    }
  }
  if (*(int *)(param_3 + 0x74) == -1) {
    fVar10 = 0.31415927;
  }
  else {
    fVar10 = 0.15707964;
  }
  if ((((uVar3 & 1) == 0) && (!bVar2)) || (fVar6 = *(float *)(param_3 + 0x4c) - fVar9, fVar6 == 0.0)
     ) goto LAB_1805988c4;
  if (fVar6 <= 3.1415927) {
    if (fVar6 < -3.1415927) {
      fVar6 = fVar6 + 6.2831855;
    }
  }
  else {
    fVar6 = fVar6 + -6.2831855;
  }
  fVar8 = *(float *)(param_3 + 0x174) + 0.001;
  fVar7 = (fVar10 / fVar8) * 1.5;
  if (ABS(fVar4) <= fVar7) {
    fVar10 = 1.5;
  }
  else {
    fVar10 = (fVar8 * ABS(fVar4)) / fVar10;
    if (2.0 <= fVar10) {
      fVar10 = 2.0;
    }
  }
  *(float *)(param_1 + 0x150) = fVar10;
  FUN_180595490(fVar7,param_2 * 0.4 * fVar10,fVar10,*(undefined4 *)(param_3 + 0x4c));
  fVar4 = *(float *)(param_1 + 0x150) * -0.6;
  if ((fVar4 <= fVar6) && (fVar4 = *(float *)(param_1 + 0x150) * 0.6, fVar6 <= fVar4)) {
    fVar4 = fVar6;
  }
  fVar4 = fVar4 + *(float *)(param_1 + 0x34);
  *(float *)(param_1 + 0x128) = fVar4;
  if (fVar4 <= 3.1415927) {
    if (fVar4 < -3.1415927) {
      fVar4 = fVar4 + 6.2831855;
      goto LAB_180598852;
    }
  }
  else {
    fVar4 = fVar4 - 6.2831855;
LAB_180598852:
    *(float *)(param_1 + 0x128) = fVar4;
  }
  *(undefined4 *)(param_1 + 0x14c) = 0x3ecccccd;
  bVar2 = true;
LAB_1805988c4:
  fVar9 = *(float *)(param_1 + 0x34) - fVar9;
  if (fVar9 <= 3.1415927) {
    if (fVar9 < -3.1415927) {
      fVar9 = fVar9 + 6.2831855;
    }
  }
  else {
    fVar9 = fVar9 + -6.2831855;
  }
  fVar9 = (1.0 - param_2 * 5.0) * *(float *)(param_1 + 0x138) + fVar9 * 5.0;
  *(float *)(param_1 + 0x138) = fVar9;
  if (ABS(fVar9) < 0.0001) {
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  uVar3 = *(uint *)(param_1 + 8) | 0x20;
  if (!bVar2) {
    uVar3 = *(uint *)(param_1 + 8) & 0xffffffdf;
  }
  *(uint *)(param_1 + 8) = uVar3;
  return;
}





// 函数: void FUN_1805988fc(undefined8 param_1,undefined8 param_2,float param_3)
void FUN_1805988fc(undefined8 param_1,undefined8 param_2,float param_3)

{
  uint uVar1;
  longlong unaff_RBX;
  undefined4 unaff_EBP;
  char unaff_SIL;
  float fVar2;
  float unaff_XMM9_Da;
  float unaff_XMM14_Da;
  uint unaff_XMM15_Da;
  
  fVar2 = (1.0 - unaff_XMM9_Da * 5.0) * *(float *)(unaff_RBX + 0x138) +
          (param_3 + unaff_XMM14_Da) * 5.0;
  *(float *)(unaff_RBX + 0x138) = fVar2;
  if ((float)((uint)fVar2 & unaff_XMM15_Da) < 0.0001) {
    *(undefined4 *)(unaff_RBX + 0x138) = unaff_EBP;
  }
  uVar1 = *(uint *)(unaff_RBX + 8) | 0x20;
  if (unaff_SIL == '\0') {
    uVar1 = *(uint *)(unaff_RBX + 8) & 0xffffffdf;
  }
  *(uint *)(unaff_RBX + 8) = uVar1;
  return;
}





// 函数: void FUN_180598972(void)
void FUN_180598972(void)

{
  uint uVar1;
  longlong unaff_RBX;
  undefined4 unaff_EBP;
  char unaff_SIL;
  
  *(undefined4 *)(unaff_RBX + 0x138) = unaff_EBP;
  uVar1 = *(uint *)(unaff_RBX + 8) | 0x20;
  if (unaff_SIL == '\0') {
    uVar1 = *(uint *)(unaff_RBX + 8) & 0xffffffdf;
  }
  *(uint *)(unaff_RBX + 8) = uVar1;
  return;
}





// 函数: void FUN_1805989b0(float *param_1,float param_2,char param_3,longlong param_4)
void FUN_1805989b0(float *param_1,float param_2,char param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = ABS(*param_1 * 0.101978384);
  if (param_3 == '\0') {
    fVar5 = fVar5 - 0.2;
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    fVar5 = fVar5 * 1.7;
  }
  else {
    fVar5 = fVar5 - 0.4;
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    fVar5 = fVar5 * 0.25;
  }
  if (*param_1 < 0.0) {
    fVar5 = -fVar5;
  }
  fVar6 = -*(float *)(param_4 + 0x90);
  fVar1 = fVar5 - *(float *)(param_4 + 0x8c);
  if (-0.6 <= fVar6) {
    if (0.6 <= fVar6) {
      fVar6 = 0.6;
    }
  }
  else {
    fVar6 = -0.6;
  }
  fVar7 = -0.6;
  if ((-0.6 <= fVar1) && (fVar7 = fVar1, 0.6 <= fVar1)) {
    fVar7 = 0.6;
  }
  fVar4 = fVar6 * fVar6 + fVar7 * fVar7;
  fVar4 = fVar4 + (float)(fVar4 <= 1.1754944e-38) * 1.1754944e-38;
  auVar3 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
  fVar1 = auVar3._0_4_;
  fVar1 = fVar1 * 0.5 * (3.0 - fVar4 * fVar1 * fVar1);
  if ((param_3 == '\0') || (ABS(*(float *)(param_4 + 0x8c)) < ABS(fVar5))) {
    fVar2 = 0.4;
  }
  else {
    fVar2 = fVar1 * fVar4 * 7.0;
    if (fVar2 <= 0.4) {
      fVar2 = 0.4;
    }
  }
  fVar2 = fVar2 * param_2;
  if (fVar2 <= fVar1 * fVar4) {
    *(float *)(param_4 + 0x90) = fVar6 * fVar1 * fVar2 + *(float *)(param_4 + 0x90);
    *(float *)(param_4 + 0x8c) = fVar1 * fVar7 * fVar2 + *(float *)(param_4 + 0x8c);
    return;
  }
  *(ulonglong *)(param_4 + 0x8c) = (ulonglong)(uint)fVar5;
  return;
}





// 函数: void FUN_1805989db(float param_1,float param_2,char param_3,longlong param_4)
void FUN_1805989db(float param_1,float param_2,char param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  uint in_XMM2_Da;
  undefined1 auVar3 [16];
  float in_XMM3_Da;
  float fVar4;
  float in_XMM5_Da;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 in_stack_00000060;
  
  if (param_3 == '\0') {
    fVar5 = ABS(in_XMM5_Da) - 0.2;
    if (fVar5 <= param_1) {
      fVar5 = param_1;
    }
    fVar5 = fVar5 * 1.7;
  }
  else {
    fVar5 = ABS(in_XMM5_Da) - 0.4;
    if (fVar5 <= param_1) {
      fVar5 = param_1;
    }
    fVar5 = fVar5 * 0.25;
  }
  if (in_XMM3_Da < param_1) {
    fVar5 = (float)((uint)fVar5 ^ in_XMM2_Da);
  }
  fVar6 = (float)(*(uint *)(param_4 + 0x90) ^ in_XMM2_Da);
  fVar1 = fVar5 - *(float *)(param_4 + 0x8c);
  if (-0.6 <= fVar6) {
    if (0.6 <= fVar6) {
      fVar6 = 0.6;
    }
  }
  else {
    fVar6 = -0.6;
  }
  fVar7 = -0.6;
  if ((-0.6 <= fVar1) && (fVar7 = fVar1, 0.6 <= fVar1)) {
    fVar7 = 0.6;
  }
  fVar4 = fVar6 * fVar6 + fVar7 * fVar7;
  fVar4 = fVar4 + (float)(fVar4 <= 1.1754944e-38) * 1.1754944e-38;
  auVar3 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
  fVar1 = auVar3._0_4_;
  fVar1 = fVar1 * 0.5 * (3.0 - fVar4 * fVar1 * fVar1);
  if ((param_3 == '\0') || (ABS(*(float *)(param_4 + 0x8c)) < ABS(fVar5))) {
    fVar2 = 0.4;
  }
  else {
    fVar2 = fVar1 * fVar4 * 7.0;
    if (fVar2 <= 0.4) {
      fVar2 = 0.4;
    }
  }
  fVar2 = fVar2 * param_2;
  if (fVar2 <= fVar1 * fVar4) {
    *(float *)(param_4 + 0x90) = fVar6 * fVar1 * fVar2 + *(float *)(param_4 + 0x90);
    *(float *)(param_4 + 0x8c) = fVar1 * fVar7 * fVar2 + *(float *)(param_4 + 0x8c);
    return;
  }
  *(ulonglong *)(param_4 + 0x8c) = CONCAT44(in_stack_00000060._4_4_,fVar5);
  return;
}





// 函数: void FUN_180598b0d(undefined8 param_1,undefined8 param_2,float param_3,longlong param_4)
void FUN_180598b0d(undefined8 param_1,undefined8 param_2,float param_3,longlong param_4)

{
  float fVar1;
  uint in_XMM5_Da;
  float unaff_XMM6_Da;
  uint unaff_XMM8_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  undefined8 in_stack_00000060;
  
  if ((float)(*(uint *)(param_4 + 0x8c) & unaff_XMM8_Da) < (float)(in_XMM5_Da & unaff_XMM8_Da)) {
    fVar1 = 0.4;
  }
  else {
    fVar1 = unaff_XMM11_Da * 7.0;
    if (fVar1 <= 0.4) {
      fVar1 = 0.4;
    }
  }
  fVar1 = fVar1 * unaff_XMM12_Da;
  if (fVar1 <= unaff_XMM11_Da) {
    *(float *)(param_4 + 0x90) = unaff_XMM6_Da * fVar1 + *(float *)(param_4 + 0x90);
    *(float *)(param_4 + 0x8c) = param_3 * fVar1 + *(float *)(param_4 + 0x8c);
    return;
  }
  *(undefined8 *)(param_4 + 0x8c) = in_stack_00000060;
  return;
}





// 函数: void FUN_180598b5d(void)
void FUN_180598b5d(void)

{
  longlong in_R9;
  undefined8 in_stack_00000060;
  
  *(undefined8 *)(in_R9 + 0x8c) = in_stack_00000060;
  return;
}





// 函数: void FUN_180598c50(float *param_1,float param_2,float *param_3,float param_4)
void FUN_180598c50(float *param_1,float param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_3[1];
  fVar8 = param_1[1] * param_2 + fVar1;
  fVar2 = *param_3;
  fVar7 = *param_1 * param_2 + fVar2;
  fVar9 = fVar8 * fVar8 + fVar7 * fVar7;
  if (param_4 * param_4 < fVar9) {
    auVar4 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
    fVar5 = auVar4._0_4_;
    fVar3 = 1.0 / (param_2 + 1e-06);
    fVar6 = fVar5 * 0.5 * (3.0 - fVar9 * fVar5 * fVar5);
    fVar5 = param_4 - fVar6 * fVar9;
    fVar9 = fVar5;
    if (-1.0 <= fVar5) {
      fVar9 = -1.0;
    }
    fVar1 = (SQRT(fVar1 * fVar1 + fVar2 * fVar2) - param_4) * fVar3;
    fVar3 = fVar3 * fVar5;
    if (2.0 <= fVar1) {
      fVar1 = 2.0;
    }
    fVar2 = fVar9 * 10.0;
    if (fVar9 * 10.0 <= fVar3) {
      fVar2 = fVar3;
    }
    fVar1 = -(fVar8 * fVar6 * param_1[1] + fVar7 * fVar6 * *param_1) - fVar1;
    if (fVar2 <= fVar1) {
      fVar1 = fVar2;
    }
    param_1[1] = fVar1 * fVar8 * fVar6 + param_1[1];
    *param_1 = fVar1 * fVar7 * fVar6 + *param_1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



