#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part142.c - 6 个函数

// 函数: void FUN_180134826(void)
void FUN_180134826(void)

{
  float *pfVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int in_EAX;
  int iVar7;
  uint uVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  int unaff_EBP;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar12;
  uint uVar13;
  int unaff_R13D;
  longlong unaff_R14;
  int unaff_R15D;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  undefined4 uStackX_24;
  float fStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  
  do {
    iVar7 = *(int *)(unaff_R14 + 0x34);
    uStackX_24 = (undefined4)unaff_RDI;
    fStack0000000000000028 = (float)(unaff_RDI >> 0x20);
    uStack000000000000002c = 0x7f7fffff;
    uStack0000000000000030 = 0x7f7fffff;
    uStack0000000000000034 = 0xff7fffff;
    uStack0000000000000038 = 0xff7fffff;
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
      FUN_18013e250(unaff_R14 + 0x30,iVar6);
      in_EAX = *(int *)(unaff_R14 + 0x30);
    }
    lVar3 = *(longlong *)(unaff_R14 + 0x38);
    unaff_EBP = unaff_EBP + 1;
    lVar10 = (longlong)in_EAX * 0x1c;
    *(undefined8 *)(lVar10 + lVar3) = CONCAT44(uStackX_24,fVar14);
    ((undefined8 *)(lVar10 + lVar3))[1] = CONCAT44(uStack000000000000002c,fStack0000000000000028);
    *(ulonglong *)(lVar10 + 0x10 + lVar3) = CONCAT44(uStack0000000000000034,uStack0000000000000030);
    *(undefined4 *)(lVar10 + 0x18 + lVar3) = uStack0000000000000038;
    *(int *)(unaff_R14 + 0x30) = *(int *)(unaff_R14 + 0x30) + 1;
    lVar3 = _DAT_180c8a9b0;
    in_EAX = *(int *)(unaff_R14 + 0x30);
  } while (unaff_EBP < unaff_R15D);
  if (0 < unaff_R13D) {
    uStack000000000000002c = 0x7f7fffff;
    uVar12 = unaff_RDI;
    do {
      iVar6 = (int)unaff_RDI;
      lVar10 = *(longlong *)(unaff_R14 + 0x38);
      lVar11 = *(longlong *)(*(longlong *)(lVar3 + 0x1af8) + 0x210);
      iVar7 = iVar6;
      if (iVar6 < 0) {
        iVar7 = *(int *)(lVar11 + 0xc);
      }
      fVar16 = *(float *)(lVar11 + 0x14);
      uVar13 = iVar6 + 1;
      fVar15 = *(float *)(lVar11 + 0x18) - fVar16;
      fVar17 = *(float *)(unaff_RSI + 0x40) + 0.5;
      fVar14 = (float)(int)((fVar15 * *(float *)((longlong)iVar7 * 0x1c +
                                                *(longlong *)(lVar11 + 0x38)) + fVar16 + fVar17) -
                           unaff_XMM7_Da);
      uVar8 = uVar13;
      if ((int)uVar13 < 0) {
        uVar8 = *(uint *)(lVar11 + 0xc);
      }
      unaff_RDI = (ulonglong)uVar13;
      fStack0000000000000028 =
           (float)(int)((fVar15 * *(float *)((longlong)(int)uVar8 * 0x1c +
                                            *(longlong *)(lVar11 + 0x38)) + fVar16 + fVar17) -
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
  FUN_180291cf0(*(undefined8 *)(unaff_RSI + 0x2e8),*(undefined4 *)(unaff_R14 + 0x10));
  lVar10 = _DAT_180c8a9b0;
  lVar3 = *(longlong *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0x210);
  lVar11 = (longlong)*(int *)(lVar3 + 0xc) * 0x1c + *(longlong *)(lVar3 + 0x38);
  *(undefined1 *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
  lVar3 = *(longlong *)(lVar10 + 0x1af8);
  FUN_180291b40(*(undefined8 *)(lVar3 + 0x2e8),*(undefined8 *)(lVar11 + 0xc),
                *(undefined8 *)(lVar11 + 0x14),0,fVar14);
  lVar10 = _DAT_180c8a9b0;
  puVar2 = (undefined8 *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x2e8) + 0x68) + -0x10 +
           (longlong)*(int *)(*(longlong *)(lVar3 + 0x2e8) + 0x60) * 0x10);
  uVar5 = puVar2[1];
  *(undefined8 *)(lVar3 + 0x228) = *puVar2;
  *(undefined8 *)(lVar3 + 0x230) = uVar5;
  fStack0000000000000028 = (float)uVar5;
  uStack000000000000002c = (undefined4)((ulonglong)uVar5 >> 0x20);
  lVar3 = *(longlong *)(*(longlong *)(lVar10 + 0x1af8) + 0x210);
  fVar14 = *(float *)(lVar3 + 0x18);
  fVar16 = *(float *)(lVar3 + 0x14);
  fVar15 = *(float *)(((longlong)*(int *)(lVar3 + 0xc) + 1) * 0x1c + *(longlong *)(lVar3 + 0x38));
  fVar17 = *(float *)((longlong)*(int *)(lVar3 + 0xc) * 0x1c + *(longlong *)(lVar3 + 0x38));
  *(undefined1 *)(*(longlong *)(lVar10 + 0x1af8) + 0xb1) = 1;
  lVar3 = *(longlong *)(lVar10 + 0x1af8);
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
    FUN_18011dbd0(piVar9,iVar4);
    iVar7 = *piVar9;
  }
  *(float *)(*(longlong *)(lVar3 + 0x1d0) + (longlong)iVar7 * 4) = *(float *)(lVar3 + 0x1ac);
  *piVar9 = *piVar9 + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801348d8(void)
void FUN_1801348d8(void)

{
  float *pfVar1;
  undefined8 *puVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  longlong lVar12;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar13;
  uint uVar14;
  int unaff_R13D;
  longlong unaff_R14;
  float fVar15;
  float fVar16;
  float fVar17;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  
  lVar5 = _DAT_180c8a9b0;
  uVar13 = unaff_RDI;
  if (0 < unaff_R13D) {
    do {
      iVar8 = (int)unaff_RDI;
      lVar4 = *(longlong *)(unaff_R14 + 0x38);
      lVar12 = *(longlong *)(*(longlong *)(lVar5 + 0x1af8) + 0x210);
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
      unaff_RDI = (ulonglong)uVar14;
      fVar3 = *(float *)((longlong)(int)uVar10 * 0x1c + *(longlong *)(lVar12 + 0x38));
      pfVar1 = (float *)(uVar13 + 0xc + lVar4);
      *pfVar1 = (float)(int)((fVar15 * *(float *)((longlong)iVar9 * 0x1c +
                                                 *(longlong *)(lVar12 + 0x38)) + fVar16 + fVar17) -
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
  FUN_180291cf0(*(undefined8 *)(unaff_RSI + 0x2e8),*(undefined4 *)(unaff_R14 + 0x10));
  lVar4 = _DAT_180c8a9b0;
  lVar5 = *(longlong *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0x210);
  lVar12 = (longlong)*(int *)(lVar5 + 0xc) * 0x1c + *(longlong *)(lVar5 + 0x38);
  *(undefined1 *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
  lVar5 = *(longlong *)(lVar4 + 0x1af8);
  FUN_180291b40(*(undefined8 *)(lVar5 + 0x2e8),*(undefined8 *)(lVar12 + 0xc),
                *(undefined8 *)(lVar12 + 0x14),0);
  lVar4 = _DAT_180c8a9b0;
  puVar2 = (undefined8 *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x2e8) + 0x68) + -0x10 +
           (longlong)*(int *)(*(longlong *)(lVar5 + 0x2e8) + 0x60) * 0x10);
  uVar7 = puVar2[1];
  *(undefined8 *)(lVar5 + 0x228) = *puVar2;
  *(undefined8 *)(lVar5 + 0x230) = uVar7;
  lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x1af8) + 0x210);
  fVar16 = *(float *)(lVar5 + 0x18);
  fVar15 = *(float *)(lVar5 + 0x14);
  fVar17 = *(float *)(((longlong)*(int *)(lVar5 + 0xc) + 1) * 0x1c + *(longlong *)(lVar5 + 0x38));
  fVar3 = *(float *)((longlong)*(int *)(lVar5 + 0xc) * 0x1c + *(longlong *)(lVar5 + 0x38));
  *(undefined1 *)(*(longlong *)(lVar4 + 0x1af8) + 0xb1) = 1;
  lVar5 = *(longlong *)(lVar4 + 0x1af8);
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
    FUN_18011dbd0(piVar11,iVar6);
    iVar9 = *piVar11;
  }
  *(float *)(*(longlong *)(lVar5 + 0x1d0) + (longlong)iVar9 * 4) = *(float *)(lVar5 + 0x1ac);
  *piVar11 = *piVar11 + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801348ee(void)
void FUN_1801348ee(void)

{
  float *pfVar1;
  undefined8 *puVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  longlong lVar11;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar12;
  uint uVar13;
  int unaff_R13D;
  longlong unaff_R14;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float fStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  lVar5 = _DAT_180c8a9b0;
  uStack000000000000002c = 0x7f7fffff;
  uVar12 = unaff_RDI;
  do {
    iVar7 = (int)unaff_RDI;
    lVar4 = *(longlong *)(unaff_R14 + 0x38);
    lVar11 = *(longlong *)(*(longlong *)(lVar5 + 0x1af8) + 0x210);
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
    unaff_RDI = (ulonglong)uVar13;
    fStack0000000000000028 =
         (float)(int)((fVar14 * *(float *)((longlong)(int)uVar9 * 0x1c +
                                          *(longlong *)(lVar11 + 0x38)) + fVar15 + fVar16) -
                     unaff_XMM7_Da);
    pfVar1 = (float *)(uVar12 + 0xc + lVar4);
    *pfVar1 = (float)(int)((fVar14 * *(float *)((longlong)iVar8 * 0x1c +
                                               *(longlong *)(lVar11 + 0x38)) + fVar15 + fVar16) -
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
  FUN_180291cf0(*(undefined8 *)(unaff_RSI + 0x2e8),*(undefined4 *)(unaff_R14 + 0x10));
  lVar4 = _DAT_180c8a9b0;
  lVar5 = *(longlong *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0x210);
  lVar11 = (longlong)*(int *)(lVar5 + 0xc) * 0x1c + *(longlong *)(lVar5 + 0x38);
  *(undefined1 *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
  lVar5 = *(longlong *)(lVar4 + 0x1af8);
  FUN_180291b40(*(undefined8 *)(lVar5 + 0x2e8),*(undefined8 *)(lVar11 + 0xc),
                *(undefined8 *)(lVar11 + 0x14),0);
  lVar4 = _DAT_180c8a9b0;
  puVar2 = (undefined8 *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x2e8) + 0x68) + -0x10 +
           (longlong)*(int *)(*(longlong *)(lVar5 + 0x2e8) + 0x60) * 0x10);
  _fStack0000000000000028 = puVar2[1];
  *(undefined8 *)(lVar5 + 0x228) = *puVar2;
  *(undefined8 *)(lVar5 + 0x230) = _fStack0000000000000028;
  lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x1af8) + 0x210);
  fVar15 = *(float *)(lVar5 + 0x18);
  fVar14 = *(float *)(lVar5 + 0x14);
  fVar16 = *(float *)(((longlong)*(int *)(lVar5 + 0xc) + 1) * 0x1c + *(longlong *)(lVar5 + 0x38));
  fVar3 = *(float *)((longlong)*(int *)(lVar5 + 0xc) * 0x1c + *(longlong *)(lVar5 + 0x38));
  *(undefined1 *)(*(longlong *)(lVar4 + 0x1af8) + 0xb1) = 1;
  lVar5 = *(longlong *)(lVar4 + 0x1af8);
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
    FUN_18011dbd0(piVar10,iVar6);
    iVar8 = *piVar10;
  }
  *(float *)(*(longlong *)(lVar5 + 0x1d0) + (longlong)iVar8 * 4) = *(float *)(lVar5 + 0x1ac);
  *piVar10 = *piVar10 + 1;
  return;
}





// 函数: void FUN_180134b4f(longlong param_1)
void FUN_180134b4f(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 uStack0000000000000058;
  
  piVar4 = (int *)(param_1 + 0x1c8);
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x284);
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
    uStack0000000000000058 = 0x18011d983;
    FUN_18011dbd0(piVar4,iVar1);
    iVar3 = *piVar4;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x1d0) + (longlong)iVar3 * 4) =
       *(undefined4 *)(param_1 + 0x1ac);
  *piVar4 = *piVar4 + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180134b80(void)
void FUN_180134b80(void)

{
  undefined4 *puVar1;
  float fVar2;
  longlong lVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  char acStackX_8 [8];
  char acStackX_10 [8];
  undefined1 uStackX_18;
  float fStackX_20;
  float fStackX_24;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  float fStack_a4;
  
  lVar9 = _DAT_180c8a9b0;
  *(undefined1 *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
  lVar3 = *(longlong *)(lVar9 + 0x1af8);
  piVar4 = *(int **)(lVar3 + 0x210);
  func_0x00018012d640();
  FUN_180126d80();
  FUN_180291f60(*(undefined8 *)(lVar3 + 0x2e8));
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
  uStackX_18 = 0;
  if (((uVar5 & 1) == 0) && (*(char *)(lVar3 + 0xb4) == '\0')) {
    iVar10 = 1;
    fVar2 = (float)piVar4[9];
    iVar12 = -1;
    if (1 < piVar4[4]) {
      lVar14 = 0x1c;
      lVar11 = _DAT_180c8a9b0;
      do {
        lVar7 = *(longlong *)(*(longlong *)(lVar11 + 0x1af8) + 0x210);
        iVar13 = iVar10;
        if (iVar10 < 0) {
          iVar13 = *(int *)(lVar7 + 0xc);
        }
        iVar8 = *piVar4 + iVar10;
        fVar17 = (*(float *)(lVar7 + 0x18) - *(float *)(lVar7 + 0x14)) *
                 *(float *)((longlong)iVar13 * 0x1c + *(longlong *)(lVar7 + 0x38)) +
                 *(float *)(lVar7 + 0x14) + *(float *)(lVar3 + 0x40);
        fStack_b8 = fVar17 + 4.0;
        fStack_c0 = fVar17 - 4.0;
        if (*(int *)(lVar11 + 0x1b2c) == iVar8) {
          *(int *)(lVar11 + 0x1b34) = iVar8;
        }
        if (*(int *)(lVar11 + 0x1b30) == iVar8) {
          *(undefined1 *)(lVar11 + 0x1b3f) = 1;
        }
        lVar7 = *(longlong *)(lVar11 + 0x1af8);
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
              ((FUN_18010f170(&fStack_c0,iVar8,acStackX_10,acStackX_8,0), acStackX_10[0] != '\0' ||
               (acStackX_8[0] != '\0')))) &&
             (*(undefined4 *)(lVar9 + 0x1dcc) = 4, acStackX_8[0] != '\0')) {
            lVar7 = 0x1d;
            iVar13 = iVar10;
            if ((*(byte *)(*(longlong *)(piVar4 + 0xe) + 8 + lVar14) & 2) != 0) {
              iVar13 = iVar12;
            }
          }
          else {
            lVar7 = (ulonglong)(acStackX_10[0] != '\0') + 0x1b;
            iVar13 = iVar12;
          }
          puVar1 = (undefined4 *)(lVar11 + 0x1628 + (lVar7 + 10) * 0x10);
          uStack_b0 = *puVar1;
          uStack_ac = puVar1[1];
          uStack_a8 = puVar1[2];
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
          uVar6 = func_0x000180121e20(&uStack_b0);
          FUN_180293d20(*(undefined8 *)(lVar3 + 0x2e8),&fStack_c8,&fStackX_20,uVar6,0x3f800000);
          lVar11 = _DAT_180c8a9b0;
          iVar12 = iVar13;
        }
        iVar10 = iVar10 + 1;
        lVar14 = lVar14 + 0x1c;
      } while (iVar10 < piVar4[4]);
      if (iVar12 != -1) {
        if ((*(char *)((longlong)piVar4 + 9) == '\0') && (iVar10 = 0, 0 < piVar4[4] + 1)) {
          lVar9 = 0;
          do {
            iVar10 = iVar10 + 1;
            *(undefined4 *)(lVar9 + 4 + *(longlong *)(piVar4 + 0xe)) =
                 *(undefined4 *)(lVar9 + *(longlong *)(piVar4 + 0xe));
            lVar9 = lVar9 + 0x1c;
          } while (iVar10 < piVar4[4] + 1);
        }
        *(undefined1 *)((longlong)piVar4 + 9) = 1;
        iVar10 = iVar12 + -1;
        uStackX_18 = 1;
        lVar9 = *(longlong *)(*(longlong *)(lVar11 + 0x1af8) + 0x210);
        fVar16 = ((*(float *)(lVar11 + 0x118) - *(float *)(lVar11 + 0x1b48)) + 4.0) -
                 *(float *)(*(longlong *)(lVar11 + 0x1af8) + 0x40);
        if (iVar10 < 0) {
          iVar10 = *(int *)(lVar9 + 0xc);
        }
        fVar2 = *(float *)(lVar9 + 0x14);
        lVar14 = *(longlong *)(lVar9 + 0x38);
        fVar15 = *(float *)(lVar9 + 0x18) - fVar2;
        fVar17 = fVar15 * *(float *)((longlong)iVar10 * 0x1c + lVar14) + fVar2 +
                 *(float *)(lVar11 + 0x1688);
        if (fVar17 <= fVar16) {
          fVar17 = fVar16;
        }
        if ((*(byte *)(piVar4 + 1) & 4) != 0) {
          iVar10 = iVar12 + 1;
          if (iVar10 < 0) {
            iVar10 = *(int *)(lVar9 + 0xc);
          }
          lVar9 = (longlong)iVar10 * 0x1c;
          fVar16 = (fVar15 * *(float *)(lVar9 + lVar14) + fVar2) - *(float *)(lVar11 + 0x1688);
          if (fVar16 <= fVar17) {
            fVar17 = fVar16;
          }
        }
        FUN_1801342e0(iVar12,lVar9,lVar14,fVar17);
      }
    }
  }
  *(undefined1 *)((longlong)piVar4 + 9) = uStackX_18;
  *(undefined8 *)(lVar3 + 0x210) = 0;
  *(undefined4 *)(lVar3 + 0x20c) = 0;
  *(float *)(lVar3 + 0x100) = (float)(int)(*(float *)(lVar3 + 0x204) + *(float *)(lVar3 + 0x40));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180134c17(void)
void FUN_180134c17(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  int *unaff_RBX;
  longlong unaff_RBP;
  int iVar5;
  longlong lVar6;
  longlong unaff_R13;
  int iVar7;
  int iVar8;
  longlong lVar9;
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
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  float fStack0000000000000054;
  char in_stack_00000100;
  char in_stack_00000108;
  undefined1 in_stack_00000110;
  float fStack0000000000000118;
  float fStack000000000000011c;
  
  iVar5 = 1;
  fVar12 = (float)unaff_RBX[9];
  iVar7 = -1;
  if (1 < unaff_RBX[4]) {
    lVar9 = 0x1c;
    lVar6 = _DAT_180c8a9b0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar6 + 0x1af8) + 0x210);
      iVar8 = iVar5;
      if (iVar5 < 0) {
        iVar8 = *(int *)(lVar3 + 0xc);
      }
      iVar4 = *unaff_RBX + iVar5;
      fVar13 = (*(float *)(lVar3 + 0x18) - *(float *)(lVar3 + 0x14)) *
               *(float *)((longlong)iVar8 * 0x1c + *(longlong *)(lVar3 + 0x38)) +
               *(float *)(lVar3 + 0x14) + *(float *)(unaff_RBP + 0x40);
      fStack0000000000000040 = fVar13 + 4.0;
      fStack0000000000000038 = fVar13 - 4.0;
      if (*(int *)(lVar6 + 0x1b2c) == iVar4) {
        *(int *)(lVar6 + 0x1b34) = iVar4;
      }
      if (*(int *)(lVar6 + 0x1b30) == iVar4) {
        *(undefined1 *)(lVar6 + 0x1b3f) = 1;
      }
      lVar3 = *(longlong *)(lVar6 + 0x1af8);
      fStack000000000000003c = fVar12;
      if (((((*(float *)(lVar3 + 0x22c) <= unaff_XMM7_Da &&
              unaff_XMM7_Da != *(float *)(lVar3 + 0x22c)) && (fVar12 < *(float *)(lVar3 + 0x234)))
           && (*(float *)(lVar3 + 0x228) <= fStack0000000000000040 &&
               fStack0000000000000040 != *(float *)(lVar3 + 0x228))) &&
          (fStack0000000000000038 < *(float *)(lVar3 + 0x230))) ||
         (((iVar4 != 0 && (iVar4 == *(int *)(lVar6 + 0x1b2c))) ||
          (*(char *)(lVar6 + 0x2e38) != '\0')))) {
        in_stack_00000108 = '\0';
        in_stack_00000100 = '\0';
        if ((((*(byte *)(unaff_RBX + 1) & 2) == 0) &&
            ((FUN_18010f170(&stack0x00000038,iVar4,&stack0x00000108,&stack0x00000100,0),
             in_stack_00000108 != '\0' || (in_stack_00000100 != '\0')))) &&
           (*(undefined4 *)(unaff_R13 + 0x1dcc) = 4, in_stack_00000100 != '\0')) {
          lVar3 = 0x1d;
          iVar8 = iVar5;
          if ((*(byte *)(*(longlong *)(unaff_RBX + 0xe) + 8 + lVar9) & 2) != 0) {
            iVar8 = iVar7;
          }
        }
        else {
          lVar3 = (ulonglong)(in_stack_00000108 != '\0') + 0x1b;
          iVar8 = iVar7;
        }
        puVar1 = (undefined4 *)(lVar6 + 0x1628 + (lVar3 + 10) * 0x10);
        uStack0000000000000048 = *puVar1;
        uStack000000000000004c = puVar1[1];
        uStack0000000000000050 = puVar1[2];
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
        uVar2 = func_0x000180121e20(&stack0x00000048);
        FUN_180293d20(*(undefined8 *)(unaff_RBP + 0x2e8),&stack0x00000030,&stack0x00000118,uVar2,
                      0x3f800000);
        lVar6 = _DAT_180c8a9b0;
        iVar7 = iVar8;
      }
      iVar5 = iVar5 + 1;
      lVar9 = lVar9 + 0x1c;
    } while (iVar5 < unaff_RBX[4]);
    if (iVar7 != -1) {
      if ((*(char *)((longlong)unaff_RBX + 9) == '\0') && (iVar5 = 0, 0 < unaff_RBX[4] + 1)) {
        lVar9 = 0;
        do {
          iVar5 = iVar5 + 1;
          *(undefined4 *)(lVar9 + 4 + *(longlong *)(unaff_RBX + 0xe)) =
               *(undefined4 *)(lVar9 + *(longlong *)(unaff_RBX + 0xe));
          lVar9 = lVar9 + 0x1c;
        } while (iVar5 < unaff_RBX[4] + 1);
      }
      *(undefined1 *)((longlong)unaff_RBX + 9) = 1;
      iVar5 = iVar7 + -1;
      in_stack_00000110 = 1;
      lVar9 = *(longlong *)(*(longlong *)(lVar6 + 0x1af8) + 0x210);
      fVar12 = ((*(float *)(lVar6 + 0x118) - *(float *)(lVar6 + 0x1b48)) + 4.0) -
               *(float *)(*(longlong *)(lVar6 + 0x1af8) + 0x40);
      if (iVar5 < 0) {
        iVar5 = *(int *)(lVar9 + 0xc);
      }
      fVar13 = *(float *)(lVar9 + 0x14);
      lVar3 = *(longlong *)(lVar9 + 0x38);
      fVar10 = *(float *)(lVar9 + 0x18) - fVar13;
      fVar11 = fVar10 * *(float *)((longlong)iVar5 * 0x1c + lVar3) + fVar13 +
               *(float *)(lVar6 + 0x1688);
      if (fVar11 <= fVar12) {
        fVar11 = fVar12;
      }
      if ((*(byte *)(unaff_RBX + 1) & 4) != 0) {
        iVar5 = iVar7 + 1;
        if (iVar5 < 0) {
          iVar5 = *(int *)(lVar9 + 0xc);
        }
        lVar9 = (longlong)iVar5 * 0x1c;
        fVar12 = (fVar10 * *(float *)(lVar9 + lVar3) + fVar13) - *(float *)(lVar6 + 0x1688);
        if (fVar12 <= fVar11) {
          fVar11 = fVar12;
        }
      }
      FUN_1801342e0(iVar7,lVar9,lVar3,fVar11);
    }
  }
  *(undefined1 *)((longlong)unaff_RBX + 9) = in_stack_00000110;
  *(undefined8 *)(unaff_RBP + 0x210) = 0;
  *(undefined4 *)(unaff_RBP + 0x20c) = 0;
  *(float *)(unaff_RBP + 0x100) =
       (float)(int)(*(float *)(unaff_RBP + 0x204) + *(float *)(unaff_RBP + 0x40));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



