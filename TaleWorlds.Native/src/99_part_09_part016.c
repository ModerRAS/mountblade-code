#include "TaleWorlds.Native.Split.h"

// 99_part_09_part016.c - 13 个函数

// 函数: void FUN_1805c465b(longlong *param_1,undefined8 *param_2,undefined1 *param_3,char param_4)
void FUN_1805c465b(longlong *param_1,undefined8 *param_2,undefined1 *param_3,char param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  longlong in_RAX;
  longlong lVar10;
  float *pfVar11;
  uint uVar12;
  undefined8 unaff_RSI;
  longlong lVar13;
  undefined8 unaff_RDI;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  *(undefined8 *)(in_RAX + 0x10) = unaff_RSI;
  *(undefined8 *)(in_RAX + 0x18) = unaff_RDI;
  uVar12 = *(uint *)((longlong)param_1 + 0x209c);
  *param_3 = 1;
  if (((uVar12 >> 2 & 1) != 0) && (param_4 != '\0')) {
    lVar10 = func_0x0001805b7270(param_1 + 1);
    if (lVar10 != 0) {
      if ((int)param_1[0x2f1] == 0) {
        *(undefined4 *)(param_1 + 0x2f1) = 0;
        param_1[0x2ed] =
             *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ee] * 8) + -0x8000000000000000
        ;
      }
      else {
        func_0x0001805d88c0(param_1);
      }
    }
  }
  if ((char)param_1[0x438] == '\0') {
    iVar9 = *(int *)((longlong)param_1 + 0x14b4);
  }
  else {
    iVar9 = *(int *)((longlong)param_1 + 0x21c4);
  }
  if (((iVar9 < 0) ||
      (lVar10 = *(longlong *)((longlong)iVar9 * 0xa60 + 0x3778 + param_1[0x291]), lVar10 == 0)) ||
     (*(char *)(lVar10 + 0x8be) == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  lVar10 = *param_1;
  if (bVar6) {
    iVar9 = *(int *)(lVar10 + 0x678);
    if (iVar9 < 1) {
      iVar9 = 1;
    }
    else if (6 < iVar9) {
      iVar9 = 6;
    }
    if ((int)param_1[0x284] == 0) {
      if (*(int *)(lVar10 + 0x564) == -1) {
        fVar16 = 2.3283065e-11;
        uVar12 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
        uVar12 = uVar12 ^ uVar12 >> 0x11;
        uVar12 = uVar12 ^ uVar12 << 5;
        *(uint *)(param_1 + 0x272) = uVar12;
        fVar15 = (float)(uVar12 - 1) * 2.3283065e-11 * (float)iVar9 +
                 *(float *)((longlong)param_1 + 0x14ac);
        *(float *)((longlong)param_1 + 0x14ac) = fVar15;
        if ((char)param_1[0x438] == '\0') {
          iVar9 = *(int *)((longlong)param_1 + 0x14b4);
        }
        else {
          iVar9 = *(int *)((longlong)param_1 + 0x21c4);
        }
        if (1 < *(int *)((longlong)iVar9 * 0xa60 + 0x3718 + param_1[0x291])) {
          uVar12 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
          uVar12 = uVar12 ^ uVar12 >> 0x11;
          uVar12 = uVar12 ^ uVar12 << 5;
          *(uint *)(param_1 + 0x272) = uVar12;
          lVar10 = func_0x0001805d1df0(param_1);
          fVar15 = (float)*(int *)(lVar10 + 0x678) * (float)(uVar12 - 1) * fVar16 +
                   *(float *)((longlong)param_1 + 0x14ac);
          *(float *)((longlong)param_1 + 0x14ac) = fVar15;
        }
        if (10.0 < fVar15) {
          *(undefined4 *)(param_1 + 0x284) = 1;
        }
      }
    }
    else if ((int)param_1[0x284] == 1) {
      uVar12 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
      uVar12 = uVar12 ^ uVar12 >> 0x11;
      uVar12 = uVar12 ^ uVar12 << 5;
      *(uint *)(param_1 + 0x272) = uVar12;
      fVar15 = (float)(uVar12 - 1) * (5.820766e-11 / (float)iVar9);
      if ((*(uint *)(param_1 + 2) >> 0x1b & 1) == 0) {
        bVar7 = (byte)((uint)*(undefined4 *)(*(longlong *)param_1[1] + 0x564) >> 0x1f) ^ 1;
        *(byte *)((longlong)param_1 + 0x11c) = bVar7;
      }
      else {
        bVar7 = *(byte *)((longlong)param_1 + 0x11c);
      }
      if (bVar7 == 0) {
        if ((*(uint *)(param_1 + 2) & 1) == 0) {
          FUN_1805d3210(param_1 + 1);
        }
        fVar17 = *(float *)(*(longlong *)(*param_1 + 0x20) + 0x10) -
                 *(float *)((longlong)param_1 + 0x54);
        fVar16 = *(float *)(*(longlong *)(*param_1 + 0x20) + 0xc) - *(float *)(param_1 + 10);
        pfVar11 = (float *)func_0x0001805b7300(param_1 + 1);
        fVar16 = SQRT(fVar16 * fVar16 + fVar17 * fVar17) - *pfVar11;
        if (fVar16 <= 0.0) {
          fVar15 = fVar15 * 10.0;
        }
        else {
          fVar16 = fVar16 / *(float *)(*(longlong *)(*param_1 + 0x20) + 0x1d0);
          fVar16 = 6.5 - fVar16 * 0.22 * fVar16;
          if (fVar16 <= 1.0) {
            fVar16 = 1.0;
          }
          fVar15 = fVar15 * fVar16;
        }
      }
      fVar15 = *(float *)((longlong)param_1 + 0x14ac) - fVar15;
      *(float *)((longlong)param_1 + 0x14ac) = fVar15;
      if (fVar15 < 0.0) {
        *(undefined4 *)(param_1 + 0x284) = 0;
      }
    }
  }
  else {
    lVar14 = *(longlong *)(lVar10 + 0x9d8);
    lVar1 = *(longlong *)(lVar10 + 0x20);
    lVar13 = 0;
    if (lVar14 != 0) {
      cVar8 = FUN_18038d0a0(lVar14,lVar1 + 0xc);
      if (cVar8 != '\0') {
        lVar13 = lVar14;
      }
    }
    uVar2 = *(undefined8 *)(lVar1 + 0xc);
    uVar3 = *(undefined8 *)(lVar1 + 0x14);
    uVar4 = *(undefined8 *)(lVar1 + 0xb0);
    uVar5 = *(undefined8 *)(lVar1 + 0xb8);
    *param_2 = *(undefined8 *)(*(longlong *)(lVar10 + 0x8d8) + 0x18);
    param_2[5] = uVar4;
    param_2[6] = uVar5;
    param_2[1] = lVar13;
    param_2[3] = uVar2;
    param_2[4] = uVar3;
    param_2[2] = lVar14;
    param_2[7] = uVar2;
    *(undefined4 *)(param_2 + 8) = 3;
  }
  if ((*(byte *)((longlong)param_1 + 0x1484) & 0x40) != 0) {
    iVar9 = (int)param_1[0x426];
    if (((-1 < iVar9) && (iVar9 < *(int *)(param_1[0x291] + 0x52ed94))) &&
       (-1 < *(short *)(param_1[0x291] + 0x52dda0 + (longlong)iVar9 * 2))) {
      *(undefined1 *)((longlong)param_1 + 0x21fd) = 1;
    }
  }
  return;
}






// 函数: void FUN_1805c4876(uint param_1,int param_2)
void FUN_1805c4876(uint param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  float *pfVar3;
  longlong *unaff_RBX;
  undefined4 unaff_ESI;
  float in_XMM1_Da;
  float fVar4;
  float fVar5;
  float fVar6;
  
  param_1 = param_1 ^ param_1 >> 0x11;
  param_1 = param_1 ^ param_1 << 5;
  *(uint *)(unaff_RBX + 0x272) = param_1;
  fVar6 = (float)(param_1 - 1) * (in_XMM1_Da / (float)param_2);
  if ((*(uint *)(unaff_RBX + 2) >> 0x1b & 1) == 0) {
    bVar2 = (byte)((uint)*(undefined4 *)(*(longlong *)unaff_RBX[1] + 0x564) >> 0x1f) ^ 1;
    *(byte *)((longlong)unaff_RBX + 0x11c) = bVar2;
  }
  else {
    bVar2 = *(byte *)((longlong)unaff_RBX + 0x11c);
  }
  if (bVar2 == 0) {
    if ((*(uint *)(unaff_RBX + 2) & 1) == 0) {
      FUN_1805d3210(unaff_RBX + 1);
    }
    fVar5 = *(float *)(*(longlong *)(*unaff_RBX + 0x20) + 0x10) -
            *(float *)((longlong)unaff_RBX + 0x54);
    fVar4 = *(float *)(*(longlong *)(*unaff_RBX + 0x20) + 0xc) - *(float *)(unaff_RBX + 10);
    pfVar3 = (float *)func_0x0001805b7300(unaff_RBX + 1);
    fVar4 = SQRT(fVar4 * fVar4 + fVar5 * fVar5) - *pfVar3;
    if (fVar4 <= 0.0) {
      fVar6 = fVar6 * 10.0;
    }
    else {
      fVar4 = fVar4 / *(float *)(*(longlong *)(*unaff_RBX + 0x20) + 0x1d0);
      fVar4 = 6.5 - fVar4 * 0.22 * fVar4;
      if (fVar4 <= 1.0) {
        fVar4 = 1.0;
      }
      fVar6 = fVar6 * fVar4;
    }
  }
  fVar6 = *(float *)((longlong)unaff_RBX + 0x14ac) - fVar6;
  *(float *)((longlong)unaff_RBX + 0x14ac) = fVar6;
  if (fVar6 < 0.0) {
    *(undefined4 *)(unaff_RBX + 0x284) = unaff_ESI;
  }
  if ((*(byte *)((longlong)unaff_RBX + 0x1484) & 0x40) != 0) {
    iVar1 = (int)unaff_RBX[0x426];
    if (((-1 < iVar1) && (iVar1 < *(int *)(unaff_RBX[0x291] + 0x52ed94))) &&
       (-1 < *(short *)(unaff_RBX[0x291] + 0x52dda0 + (longlong)iVar1 * 2))) {
      *(undefined1 *)((longlong)unaff_RBX + 0x21fd) = 1;
    }
  }
  return;
}






// 函数: void FUN_1805c48ea(undefined8 param_1,ulonglong param_2)
void FUN_1805c48ea(undefined8 param_1,ulonglong param_2)

{
  int iVar1;
  float *pfVar2;
  longlong *unaff_RBX;
  undefined4 unaff_ESI;
  float fVar3;
  float fVar4;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  
  if ((param_2 & 1) == 0) {
    FUN_1805d3210(unaff_RBX + 1);
  }
  fVar4 = *(float *)(*(longlong *)(*unaff_RBX + 0x20) + 0x10) -
          *(float *)((longlong)unaff_RBX + 0x54);
  fVar3 = *(float *)(*(longlong *)(*unaff_RBX + 0x20) + 0xc) - *(float *)(unaff_RBX + 10);
  pfVar2 = (float *)func_0x0001805b7300(unaff_RBX + 1);
  fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4) - *pfVar2;
  if (fVar3 <= unaff_XMM8_Da) {
    fVar3 = unaff_XMM7_Da * 10.0;
  }
  else {
    fVar3 = fVar3 / *(float *)(*(longlong *)(*unaff_RBX + 0x20) + 0x1d0);
    fVar3 = 6.5 - fVar3 * 0.22 * fVar3;
    if (fVar3 <= 1.0) {
      fVar3 = 1.0;
    }
    fVar3 = unaff_XMM7_Da * fVar3;
  }
  fVar3 = *(float *)((longlong)unaff_RBX + 0x14ac) - fVar3;
  *(float *)((longlong)unaff_RBX + 0x14ac) = fVar3;
  if (fVar3 < unaff_XMM8_Da) {
    *(undefined4 *)(unaff_RBX + 0x284) = unaff_ESI;
  }
  if ((*(byte *)((longlong)unaff_RBX + 0x1484) & 0x40) != 0) {
    iVar1 = (int)unaff_RBX[0x426];
    if (((-1 < iVar1) && (iVar1 < *(int *)(unaff_RBX[0x291] + 0x52ed94))) &&
       (-1 < *(short *)(unaff_RBX[0x291] + 0x52dda0 + (longlong)iVar1 * 2))) {
      *(undefined1 *)((longlong)unaff_RBX + 0x21fd) = 1;
    }
  }
  return;
}






// 函数: void FUN_1805c4949(float param_1)
void FUN_1805c4949(float param_1)

{
  int iVar1;
  longlong *unaff_RBX;
  undefined4 unaff_ESI;
  float fVar2;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  
  param_1 = param_1 / *(float *)(*(longlong *)(*unaff_RBX + 0x20) + 0x1d0);
  fVar2 = 6.5 - param_1 * 0.22 * param_1;
  if (fVar2 <= 1.0) {
    fVar2 = 1.0;
  }
  fVar2 = *(float *)((longlong)unaff_RBX + 0x14ac) - unaff_XMM7_Da * fVar2;
  *(float *)((longlong)unaff_RBX + 0x14ac) = fVar2;
  if (fVar2 < unaff_XMM8_Da) {
    *(undefined4 *)(unaff_RBX + 0x284) = unaff_ESI;
  }
  if ((*(byte *)((longlong)unaff_RBX + 0x1484) & 0x40) != 0) {
    iVar1 = (int)unaff_RBX[0x426];
    if (((-1 < iVar1) && (iVar1 < *(int *)(unaff_RBX[0x291] + 0x52ed94))) &&
       (-1 < *(short *)(unaff_RBX[0x291] + 0x52dda0 + (longlong)iVar1 * 2))) {
      *(undefined1 *)((longlong)unaff_RBX + 0x21fd) = 1;
    }
  }
  return;
}






// 函数: void FUN_1805c49b5(void)
void FUN_1805c49b5(void)

{
  int iVar1;
  longlong unaff_RBX;
  undefined4 unaff_ESI;
  
  *(undefined4 *)(unaff_RBX + 0x1420) = unaff_ESI;
  if ((*(byte *)(unaff_RBX + 0x1484) & 0x40) != 0) {
    iVar1 = *(int *)(unaff_RBX + 0x2130);
    if (((-1 < iVar1) && (iVar1 < *(int *)(*(longlong *)(unaff_RBX + 0x1488) + 0x52ed94))) &&
       (-1 < *(short *)(*(longlong *)(unaff_RBX + 0x1488) + 0x52dda0 + (longlong)iVar1 * 2))) {
      *(undefined1 *)(unaff_RBX + 0x21fd) = 1;
    }
  }
  return;
}






// 函数: void FUN_1805c49c4(undefined4 param_1)
void FUN_1805c49c4(undefined4 param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  longlong unaff_RBX;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong in_R10;
  longlong in_R11;
  
  lVar2 = *(longlong *)(in_R10 + 0x20);
  if (in_R11 != 0) {
    cVar7 = FUN_18038d0a0(param_1,lVar2 + 0xc);
    if (cVar7 != '\0') {
      unaff_RSI = in_R11;
    }
  }
  uVar3 = *(undefined8 *)(lVar2 + 0xc);
  uVar4 = *(undefined8 *)(lVar2 + 0x14);
  uVar5 = *(undefined8 *)(lVar2 + 0xb0);
  uVar6 = *(undefined8 *)(lVar2 + 0xb8);
  *unaff_RDI = *(undefined8 *)(*(longlong *)(in_R10 + 0x8d8) + 0x18);
  unaff_RDI[5] = uVar5;
  unaff_RDI[6] = uVar6;
  unaff_RDI[1] = unaff_RSI;
  unaff_RDI[3] = uVar3;
  unaff_RDI[4] = uVar4;
  unaff_RDI[2] = in_R11;
  unaff_RDI[7] = uVar3;
  *(undefined4 *)(unaff_RDI + 8) = 3;
  if ((*(byte *)(unaff_RBX + 0x1484) & 0x40) != 0) {
    iVar1 = *(int *)(unaff_RBX + 0x2130);
    if (((-1 < iVar1) && (iVar1 < *(int *)(*(longlong *)(unaff_RBX + 0x1488) + 0x52ed94))) &&
       (-1 < *(short *)(*(longlong *)(unaff_RBX + 0x1488) + 0x52dda0 + (longlong)iVar1 * 2))) {
      *(undefined1 *)(unaff_RBX + 0x21fd) = 1;
    }
  }
  return;
}






// 函数: void FUN_1805c4a3c(void)
void FUN_1805c4a3c(void)

{
  int iVar1;
  longlong unaff_RBX;
  
  if ((*(byte *)(unaff_RBX + 0x1484) & 0x40) != 0) {
    iVar1 = *(int *)(unaff_RBX + 0x2130);
    if (((-1 < iVar1) && (iVar1 < *(int *)(*(longlong *)(unaff_RBX + 0x1488) + 0x52ed94))) &&
       (-1 < *(short *)(*(longlong *)(unaff_RBX + 0x1488) + 0x52dda0 + (longlong)iVar1 * 2))) {
      *(undefined1 *)(unaff_RBX + 0x21fd) = 1;
    }
  }
  return;
}






// 函数: void FUN_1805c4a55(void)
void FUN_1805c4a55(void)

{
  int iVar1;
  longlong unaff_RBX;
  
  iVar1 = *(int *)(unaff_RBX + 0x2130);
  if (((-1 < iVar1) && (iVar1 < *(int *)(*(longlong *)(unaff_RBX + 0x1488) + 0x52ed94))) &&
     (-1 < *(short *)(*(longlong *)(unaff_RBX + 0x1488) + 0x52dda0 + (longlong)iVar1 * 2))) {
    *(undefined1 *)(unaff_RBX + 0x21fd) = 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805c4a90(longlong *param_1,undefined8 *param_2,undefined1 *param_3)
void FUN_1805c4a90(longlong *param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  char *pcVar12;
  undefined4 *puVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  lVar15 = *(longlong *)(*param_1 + 0x630);
  if (*(int *)(*param_1 + 0x638) < 1) {
    lVar15 = param_1[0x274];
    *param_3 = 1;
    param_1[0x273] = *(longlong *)(&DAT_180c8ed30 + (longlong)(int)lVar15 * 8);
    lVar15 = *param_1;
    iVar10 = *(int *)(*(longlong *)(lVar15 + 0x590) + 0x2498);
    if (((iVar10 == -1) || (*(int *)((longlong)iVar10 * 0x68 + 0x58 + _DAT_180c96150) != 0x21)) &&
       (0.12 < (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x276] * 8) -
                      param_1[0x275]) * 1e-05)) {
      *(undefined4 *)(param_1 + 0x277) = 0;
    }
    if ((char)param_1[0x438] == '\0') {
      iVar10 = *(int *)((longlong)param_1 + 0x14b4);
    }
    else {
      iVar10 = *(int *)((longlong)param_1 + 0x21c4);
    }
    if (((-1 < iVar10) &&
        (lVar11 = *(longlong *)((longlong)iVar10 * 0xa60 + 0x3778 + param_1[0x291]), lVar11 != 0))
       && (*(char *)(lVar11 + 0x8be) != '\0')) goto LAB_1805c4f52;
  }
  else {
    if ((((*(int *)((longlong)param_1 + 0x178c) - 2U & 0xfffffffd) != 0) &&
        ((*(uint *)((longlong)param_1 + 0x209c) >> 2 & 1) != 0)) &&
       (lVar11 = func_0x0001805b7270(param_1 + 1), lVar11 != 0)) {
      if ((((int)param_1[0x2f1] == 0) ||
          (pcVar12 = (char *)func_0x0001805b71d0(param_1 + 1), *pcVar12 != '\0')) ||
         (pcVar12 = (char *)FUN_1805b7080(param_1 + 1), *pcVar12 != '\0')) {
        *(undefined4 *)(param_1 + 0x2f1) = 0;
        param_1[0x2ed] =
             *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ee] * 8) + -0x8000000000000000
        ;
      }
      else {
        func_0x0001805d88c0(param_1,(int)param_1[0x2f1]);
      }
    }
    if ((char)param_1[0x438] == '\0') {
      iVar10 = *(int *)((longlong)param_1 + 0x14b4);
    }
    else {
      iVar10 = *(int *)((longlong)param_1 + 0x21c4);
    }
    if (-1 < iVar10) {
      lVar11 = param_1[0x291];
      lVar3 = *(longlong *)((longlong)iVar10 * 0xa60 + 0x3778 + lVar11);
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0x8be) != '\0')) {
        if ((char)param_1[0x438] == '\0') {
          iVar10 = *(int *)((longlong)param_1 + 0x14b4);
        }
        else {
          iVar10 = *(int *)((longlong)param_1 + 0x21c4);
        }
        if (*(int *)((longlong)iVar10 * 0xa60 + 0x3608 + lVar11) == 1) {
          if ((*(byte *)(param_1 + 2) & 2) == 0) {
            FUN_1805d3550(param_1 + 1);
          }
          fVar16 = (*(float *)(*(longlong *)((longlong)iVar10 * 0xa60 + 0x30c0 + lVar11) + 0x1d0) +
                   *(float *)(*(longlong *)(*param_1 + 0x20) + 0x1d0)) * 1.5;
          if ((*(float *)((longlong)param_1 + 0x6c) <= fVar16 &&
               fVar16 != *(float *)((longlong)param_1 + 0x6c)) ||
             ((-1 < (int)param_1[0x29a] &&
              (cVar9 = FUN_1805c79a0(param_1,param_1[0x291] + 0x30a0 +
                                             (longlong)(int)param_1[0x29a] * 0xa60), cVar9 != '\0'))
             )) {
            *(undefined4 *)(param_1 + 0x277) = 0;
          }
          else if ((-1 < (int)param_1[0x29a]) &&
                  (0.0 <= (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x299] * 8)
                                 - param_1[0x298]) * 1e-05)) {
            lVar11 = (longlong)(int)param_1[0x29a] * 0xa60;
            if (*(int *)(lVar11 + 0x3608 + param_1[0x291]) == 1) {
              lVar11 = *(longlong *)(lVar11 + 0x30c0 + param_1[0x291]);
              lVar3 = *(longlong *)(*param_1 + 0x20);
              fVar20 = *(float *)(lVar11 + 0x10) - *(float *)(lVar3 + 0x10);
              fVar19 = *(float *)(lVar11 + 0xc) - *(float *)(lVar3 + 0xc);
              fVar17 = *(float *)(lVar11 + 0x14) - *(float *)(lVar3 + 0x14);
              fVar16 = *(float *)(lVar11 + 0x84) + *(float *)(lVar11 + 0x84);
              if (fVar20 * fVar20 + fVar19 * fVar19 + fVar17 * fVar17 < fVar16 * fVar16) {
                lVar11 = func_0x0001805b6e80(param_1 + 1);
                uVar2 = *(undefined4 *)(*(longlong *)(*param_1 + 0x8f8) + 0x9e0);
                puVar13 = (undefined4 *)FUN_180507fc0(param_1 + 1);
                uVar1 = *puVar13;
                puVar13 = (undefined4 *)FUN_1805b7700(param_1 + 1);
                uVar18 = *(undefined4 *)(lVar15 + 0xa4);
                uVar21 = *puVar13;
                fVar16 = (float)*(int *)((longlong)*(int *)(lVar11 + 0xf0) * 0xa0 + 0x70 +
                                        *(longlong *)(lVar11 + 0xd0));
                uStack_70 = FUN_1805a0690(*param_1 + 0x28,9,lVar11,
                                          *(undefined8 *)(*(longlong *)(*param_1 + 0x8f8) + 0x9f0),0
                                          ,*(int *)(lVar11 + 0xf0));
                _uStack_60 = CONCAT44(uVar1,uVar21);
                _uStack_58 = CONCAT44(uStack_54,uVar2);
                uStack_78 = *(undefined8 *)
                             ((longlong)*(int *)(lVar11 + 0xf0) * 0xa0 + 0x50 +
                             *(longlong *)(lVar11 + 0xd0));
                uStack_68 = uVar18;
                fStack_64 = fVar16;
                iVar10 = FUN_1805bf5a0(param_1,(int)param_1[0x29a],&uStack_78);
                if (iVar10 == 3) {
                  *(undefined4 *)(param_1 + 0x277) = 0;
                  param_1[0x298] =
                       *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x299] * 8) + 100000;
                }
              }
            }
          }
        }
        goto LAB_1805c4f52;
      }
    }
    lVar15 = *param_1;
  }
  lVar11 = *(longlong *)(lVar15 + 0x9d8);
  lVar3 = *(longlong *)(lVar15 + 0x20);
  lVar14 = 0;
  if ((lVar11 != 0) && (cVar9 = FUN_18038d0a0(lVar11,lVar3 + 0xc), cVar9 != '\0')) {
    lVar14 = lVar11;
  }
  uVar4 = *(undefined8 *)(*(longlong *)(lVar15 + 0x8d8) + 0x18);
  uVar5 = *(undefined8 *)(lVar3 + 0xc);
  uVar6 = *(undefined8 *)(lVar3 + 0x14);
  uVar7 = *(undefined8 *)(lVar3 + 0xb0);
  uVar8 = *(undefined8 *)(lVar3 + 0xb8);
  *(undefined4 *)(param_2 + 8) = 3;
  param_2[7] = uVar5;
  param_2[5] = uVar7;
  param_2[6] = uVar8;
  param_2[2] = lVar11;
  param_2[1] = lVar14;
  param_2[3] = uVar5;
  param_2[4] = uVar6;
  *param_2 = uVar4;
LAB_1805c4f52:
  if ((*(byte *)((longlong)param_1 + 0x1484) & 0x40) != 0) {
    iVar10 = (int)param_1[0x426];
    if (((-1 < iVar10) && (iVar10 < *(int *)(param_1[0x291] + 0x52ed94))) &&
       (-1 < *(short *)(param_1[0x291] + 0x52dda0 + (longlong)iVar10 * 2))) {
      *(undefined1 *)((longlong)param_1 + 0x21fd) = 1;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805c4a9b(longlong *param_1,undefined8 *param_2,undefined1 *param_3,undefined8 param_4,
void FUN_1805c4a9b(longlong *param_1,undefined8 *param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined4 param_16,
                  undefined4 param_17)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  longlong in_RAX;
  longlong lVar11;
  char *pcVar12;
  undefined4 *puVar13;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  longlong lVar14;
  undefined8 unaff_RDI;
  longlong lVar15;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fStack0000000000000044;
  
  *(undefined8 *)(in_RAX + 8) = unaff_RBX;
  *(undefined8 *)(in_RAX + 0x10) = unaff_RBP;
  *(undefined8 *)(in_RAX + 0x18) = unaff_RDI;
  *(undefined8 *)(in_RAX + 0x20) = unaff_R12;
  *(undefined8 *)(in_RAX + -0x10) = unaff_R14;
  *(undefined8 *)(in_RAX + -0x18) = unaff_R15;
  lVar15 = *(longlong *)(*param_1 + 0x630);
  if (*(int *)(*param_1 + 0x638) < 1) {
    lVar15 = param_1[0x274];
    *param_3 = 1;
    param_1[0x273] = *(longlong *)(&DAT_180c8ed30 + (longlong)(int)lVar15 * 8);
    lVar15 = *param_1;
    iVar10 = *(int *)(*(longlong *)(lVar15 + 0x590) + 0x2498);
    if (((iVar10 == -1) || (*(int *)((longlong)iVar10 * 0x68 + 0x58 + _DAT_180c96150) != 0x21)) &&
       (0.12 < (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x276] * 8) -
                      param_1[0x275]) * 1e-05)) {
      *(undefined4 *)(param_1 + 0x277) = 0;
    }
    if ((char)param_1[0x438] == '\0') {
      iVar10 = *(int *)((longlong)param_1 + 0x14b4);
    }
    else {
      iVar10 = *(int *)((longlong)param_1 + 0x21c4);
    }
    if (((-1 < iVar10) &&
        (lVar11 = *(longlong *)((longlong)iVar10 * 0xa60 + 0x3778 + param_1[0x291]), lVar11 != 0))
       && (*(char *)(lVar11 + 0x8be) != '\0')) goto LAB_1805c4f52;
  }
  else {
    if ((((*(int *)((longlong)param_1 + 0x178c) - 2U & 0xfffffffd) != 0) &&
        ((*(uint *)((longlong)param_1 + 0x209c) >> 2 & 1) != 0)) &&
       (lVar11 = func_0x0001805b7270(param_1 + 1), lVar11 != 0)) {
      if ((((int)param_1[0x2f1] == 0) ||
          (pcVar12 = (char *)func_0x0001805b71d0(param_1 + 1), *pcVar12 != '\0')) ||
         (pcVar12 = (char *)FUN_1805b7080(param_1 + 1), *pcVar12 != '\0')) {
        *(undefined4 *)(param_1 + 0x2f1) = 0;
        param_1[0x2ed] =
             *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ee] * 8) + -0x8000000000000000
        ;
      }
      else {
        func_0x0001805d88c0(param_1,(int)param_1[0x2f1]);
      }
    }
    if ((char)param_1[0x438] == '\0') {
      iVar10 = *(int *)((longlong)param_1 + 0x14b4);
    }
    else {
      iVar10 = *(int *)((longlong)param_1 + 0x21c4);
    }
    if (-1 < iVar10) {
      lVar11 = param_1[0x291];
      lVar3 = *(longlong *)((longlong)iVar10 * 0xa60 + 0x3778 + lVar11);
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0x8be) != '\0')) {
        if ((char)param_1[0x438] == '\0') {
          iVar10 = *(int *)((longlong)param_1 + 0x14b4);
        }
        else {
          iVar10 = *(int *)((longlong)param_1 + 0x21c4);
        }
        if (*(int *)((longlong)iVar10 * 0xa60 + 0x3608 + lVar11) == 1) {
          if ((*(byte *)(param_1 + 2) & 2) == 0) {
            FUN_1805d3550(param_1 + 1);
          }
          fVar16 = (*(float *)(*(longlong *)((longlong)iVar10 * 0xa60 + 0x30c0 + lVar11) + 0x1d0) +
                   *(float *)(*(longlong *)(*param_1 + 0x20) + 0x1d0)) * 1.5;
          if ((*(float *)((longlong)param_1 + 0x6c) <= fVar16 &&
               fVar16 != *(float *)((longlong)param_1 + 0x6c)) ||
             ((-1 < (int)param_1[0x29a] &&
              (cVar9 = FUN_1805c79a0(param_1,param_1[0x291] + 0x30a0 +
                                             (longlong)(int)param_1[0x29a] * 0xa60), cVar9 != '\0'))
             )) {
            *(undefined4 *)(param_1 + 0x277) = 0;
          }
          else if ((-1 < (int)param_1[0x29a]) &&
                  (0.0 <= (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x299] * 8)
                                 - param_1[0x298]) * 1e-05)) {
            lVar11 = (longlong)(int)param_1[0x29a] * 0xa60;
            if (*(int *)(lVar11 + 0x3608 + param_1[0x291]) == 1) {
              lVar11 = *(longlong *)(lVar11 + 0x30c0 + param_1[0x291]);
              lVar3 = *(longlong *)(*param_1 + 0x20);
              fVar20 = *(float *)(lVar11 + 0x10) - *(float *)(lVar3 + 0x10);
              fVar19 = *(float *)(lVar11 + 0xc) - *(float *)(lVar3 + 0xc);
              fVar17 = *(float *)(lVar11 + 0x14) - *(float *)(lVar3 + 0x14);
              fVar16 = *(float *)(lVar11 + 0x84) + *(float *)(lVar11 + 0x84);
              if (fVar20 * fVar20 + fVar19 * fVar19 + fVar17 * fVar17 < fVar16 * fVar16) {
                lVar11 = func_0x0001805b6e80(param_1 + 1);
                uVar2 = *(undefined4 *)(*(longlong *)(*param_1 + 0x8f8) + 0x9e0);
                puVar13 = (undefined4 *)FUN_180507fc0(param_1 + 1);
                uVar1 = *puVar13;
                puVar13 = (undefined4 *)FUN_1805b7700(param_1 + 1);
                uVar18 = *(undefined4 *)(lVar15 + 0xa4);
                uVar21 = *puVar13;
                fVar16 = (float)*(int *)((longlong)*(int *)(lVar11 + 0xf0) * 0xa0 + 0x70 +
                                        *(longlong *)(lVar11 + 0xd0));
                param_7 = FUN_1805a0690(*param_1 + 0x28,9,lVar11,
                                        *(undefined8 *)(*(longlong *)(*param_1 + 0x8f8) + 0x9f0),0);
                param_9 = CONCAT44(uVar1,uVar21);
                param_10 = CONCAT44(param_10._4_4_,uVar2);
                param_6 = *(undefined8 *)
                           ((longlong)*(int *)(lVar11 + 0xf0) * 0xa0 + 0x50 +
                           *(longlong *)(lVar11 + 0xd0));
                param_8 = uVar18;
                fStack0000000000000044 = fVar16;
                iVar10 = FUN_1805bf5a0(param_1,(int)param_1[0x29a],&param_6);
                if (iVar10 == 3) {
                  *(undefined4 *)(param_1 + 0x277) = 0;
                  param_1[0x298] =
                       *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x299] * 8) + 100000;
                }
              }
            }
          }
        }
        goto LAB_1805c4f52;
      }
    }
    lVar15 = *param_1;
  }
  lVar11 = *(longlong *)(lVar15 + 0x9d8);
  lVar3 = *(longlong *)(lVar15 + 0x20);
  lVar14 = 0;
  if ((lVar11 != 0) && (cVar9 = FUN_18038d0a0(lVar11,lVar3 + 0xc), cVar9 != '\0')) {
    lVar14 = lVar11;
  }
  uVar4 = *(undefined8 *)(*(longlong *)(lVar15 + 0x8d8) + 0x18);
  uVar5 = *(undefined8 *)(lVar3 + 0xc);
  uVar6 = *(undefined8 *)(lVar3 + 0x14);
  uVar7 = *(undefined8 *)(lVar3 + 0xb0);
  uVar8 = *(undefined8 *)(lVar3 + 0xb8);
  *(undefined4 *)(param_2 + 8) = 3;
  param_2[7] = uVar5;
  param_2[5] = uVar7;
  param_2[6] = uVar8;
  param_2[2] = lVar11;
  param_2[1] = lVar14;
  param_2[3] = uVar5;
  param_2[4] = uVar6;
  *param_2 = uVar4;
LAB_1805c4f52:
  if ((*(byte *)((longlong)param_1 + 0x1484) & 0x40) != 0) {
    iVar10 = (int)param_1[0x426];
    if (((-1 < iVar10) && (iVar10 < *(int *)(param_1[0x291] + 0x52ed94))) &&
       (-1 < *(short *)(param_1[0x291] + 0x52dda0 + (longlong)iVar10 * 2))) {
      *(undefined1 *)((longlong)param_1 + 0x21fd) = 1;
    }
  }
  return;
}






// 函数: void FUN_1805c4dbe(void)
void FUN_1805c4dbe(void)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 unaff_EBP;
  longlong *unaff_RSI;
  longlong unaff_R14;
  float fVar5;
  float fStack0000000000000044;
  undefined4 uStack000000000000004c;
  
  lVar3 = func_0x0001805b6e80();
  puVar4 = (undefined4 *)FUN_180507fc0(unaff_RSI + 1);
  uVar1 = *puVar4;
  FUN_1805b7700(unaff_RSI + 1);
  fVar5 = (float)*(int *)((longlong)*(int *)(lVar3 + 0xf0) * 0xa0 + 0x70 +
                         *(longlong *)(lVar3 + 0xd0));
  FUN_1805a0690(*unaff_RSI + 0x28,9,lVar3,*(undefined8 *)(*(longlong *)(*unaff_RSI + 0x8f8) + 0x9f0)
               );
  fStack0000000000000044 = fVar5;
  uStack000000000000004c = uVar1;
  iVar2 = FUN_1805bf5a0();
  if (iVar2 == 3) {
    *(undefined4 *)(unaff_RSI + 0x277) = unaff_EBP;
    unaff_RSI[0x298] = *(longlong *)(unaff_R14 + (longlong)(int)unaff_RSI[0x299] * 8) + 100000;
  }
  if ((*(byte *)((longlong)unaff_RSI + 0x1484) & 0x40) != 0) {
    iVar2 = (int)unaff_RSI[0x426];
    if (((-1 < iVar2) && (iVar2 < *(int *)(unaff_RSI[0x291] + 0x52ed94))) &&
       (-1 < *(short *)(unaff_RSI[0x291] + 0x52dda0 + (longlong)iVar2 * 2))) {
      *(undefined1 *)((longlong)unaff_RSI + 0x21fd) = 1;
    }
  }
  return;
}






// 函数: void FUN_1805c4eb2(void)
void FUN_1805c4eb2(void)

{
  int iVar1;
  undefined4 unaff_EBP;
  longlong unaff_RSI;
  longlong unaff_R14;
  
  *(undefined4 *)(unaff_RSI + 0x13b8) = unaff_EBP;
  *(longlong *)(unaff_RSI + 0x14c0) =
       *(longlong *)(unaff_R14 + (longlong)*(int *)(unaff_RSI + 0x14c8) * 8) + 100000;
  if ((*(byte *)(unaff_RSI + 0x1484) & 0x40) != 0) {
    iVar1 = *(int *)(unaff_RSI + 0x2130);
    if (((-1 < iVar1) && (iVar1 < *(int *)(*(longlong *)(unaff_RSI + 0x1488) + 0x52ed94))) &&
       (-1 < *(short *)(*(longlong *)(unaff_RSI + 0x1488) + 0x52dda0 + (longlong)iVar1 * 2))) {
      *(undefined1 *)(unaff_RSI + 0x21fd) = 1;
    }
  }
  return;
}






// 函数: void FUN_1805c4f8b(void)
void FUN_1805c4f8b(void)

{
  int iVar1;
  longlong unaff_RSI;
  
  iVar1 = *(int *)(unaff_RSI + 0x2130);
  if (((-1 < iVar1) && (iVar1 < *(int *)(*(longlong *)(unaff_RSI + 0x1488) + 0x52ed94))) &&
     (-1 < *(short *)(*(longlong *)(unaff_RSI + 0x1488) + 0x52dda0 + (longlong)iVar1 * 2))) {
    *(undefined1 *)(unaff_RSI + 0x21fd) = 1;
  }
  return;
}






