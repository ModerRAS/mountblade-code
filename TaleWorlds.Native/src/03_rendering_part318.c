#include "TaleWorlds.Native.Split.h"

// 03_rendering_part318.c - 9 个函数

// 函数: void FUN_180436630(undefined8 param_1,undefined8 param_2,longlong param_3)
void FUN_180436630(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float *unaff_RBX;
  longlong unaff_RBP;
  uint uVar17;
  ulonglong unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar18;
  int in_R10D;
  longlong in_R11;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  uVar18 = unaff_RSI;
  do {
    pfVar1 = (float *)(param_3 + 4 + uVar18);
    fVar28 = *pfVar1;
    fVar26 = pfVar1[1];
    fVar21 = pfVar1[2];
    fVar19 = unaff_RBX[1];
    fVar20 = unaff_RBX[2];
    fVar29 = unaff_RBX[3];
    fVar2 = unaff_RBX[5];
    fVar4 = unaff_RBX[6];
    fVar5 = unaff_RBX[7];
    pfVar1 = (float *)(param_3 + 0x14 + uVar18);
    fVar6 = *pfVar1;
    fVar7 = pfVar1[1];
    fVar8 = pfVar1[2];
    fVar9 = unaff_RBX[9];
    fVar10 = unaff_RBX[10];
    fVar11 = unaff_RBX[0xb];
    fVar12 = unaff_RBX[0xd];
    fVar27 = unaff_RBX[0xe];
    fVar13 = unaff_RBX[0xf];
    pfVar1 = (float *)(param_3 + 4 + uVar18);
    *pfVar1 = *unaff_RBX * fVar28 + unaff_RBX[4] * fVar26 + unaff_RBX[8] * fVar21 + unaff_RBX[0xc];
    pfVar1[1] = fVar19 * fVar28 + fVar2 * fVar26 + fVar9 * fVar21 + fVar12;
    pfVar1[2] = fVar20 * fVar28 + fVar4 * fVar26 + fVar10 * fVar21 + fVar27;
    pfVar1[3] = fVar29 * fVar28 + fVar5 * fVar26 + fVar11 * fVar21 + fVar13;
    fVar28 = unaff_RBX[1];
    fVar26 = unaff_RBX[2];
    fVar21 = unaff_RBX[3];
    fVar19 = unaff_RBX[5];
    fVar20 = unaff_RBX[6];
    fVar29 = unaff_RBX[7];
    fVar2 = unaff_RBX[9];
    fVar4 = unaff_RBX[10];
    fVar5 = unaff_RBX[0xb];
    fVar9 = unaff_RBX[0xd];
    fVar10 = unaff_RBX[0xe];
    fVar11 = unaff_RBX[0xf];
    pfVar1 = (float *)(param_3 + 0x14 + uVar18);
    *pfVar1 = *unaff_RBX * fVar6 + unaff_RBX[4] * fVar7 + unaff_RBX[8] * fVar8 + unaff_RBX[0xc];
    pfVar1[1] = fVar28 * fVar6 + fVar19 * fVar7 + fVar2 * fVar8 + fVar9;
    pfVar1[2] = fVar26 * fVar6 + fVar20 * fVar7 + fVar4 * fVar8 + fVar10;
    pfVar1[3] = fVar21 * fVar6 + fVar29 * fVar7 + fVar5 * fVar8 + fVar11;
    fVar28 = *(float *)(param_3 + 4 + uVar18);
    fVar26 = *(float *)(unaff_RBP + -0x59);
    if (fVar28 < *(float *)(unaff_RBP + -0x59)) {
      fVar26 = fVar28;
    }
    fVar21 = *(float *)(param_3 + 8 + uVar18);
    fVar19 = *(float *)(unaff_RBP + -0x55);
    if (fVar21 < *(float *)(unaff_RBP + -0x55)) {
      fVar19 = fVar21;
    }
    fVar20 = *(float *)(param_3 + 0xc + uVar18);
    fVar29 = *(float *)(unaff_RBP + -0x51);
    if (fVar20 < *(float *)(unaff_RBP + -0x51)) {
      fVar29 = fVar20;
    }
    if (fVar28 <= *(float *)(unaff_RBP + -0x49)) {
      fVar28 = *(float *)(unaff_RBP + -0x49);
    }
    if (fVar21 <= *(float *)(unaff_RBP + -0x45)) {
      fVar21 = *(float *)(unaff_RBP + -0x45);
    }
    if (fVar20 <= *(float *)(unaff_RBP + -0x41)) {
      fVar20 = *(float *)(unaff_RBP + -0x41);
    }
    fVar2 = *(float *)(param_3 + 0x14 + uVar18);
    if (fVar26 <= fVar2) {
      *(float *)(unaff_RBP + -0x29) = fVar26;
    }
    else {
      *(float *)(unaff_RBP + -0x29) = fVar2;
    }
    fVar26 = *(float *)(param_3 + 0x18 + uVar18);
    if (fVar19 <= fVar26) {
      *(float *)(unaff_RBP + -0x25) = fVar19;
    }
    else {
      *(float *)(unaff_RBP + -0x25) = fVar26;
    }
    fVar19 = *(float *)(param_3 + 0x1c + uVar18);
    if (fVar29 <= fVar19) {
      *(float *)(unaff_RBP + -0x21) = fVar29;
    }
    else {
      *(float *)(unaff_RBP + -0x21) = fVar19;
    }
    *(undefined8 *)(unaff_RBP + -0x59) = *(undefined8 *)(unaff_RBP + -0x29);
    *(undefined8 *)(unaff_RBP + -0x51) = *(undefined8 *)(unaff_RBP + -0x21);
    if (fVar2 <= fVar28) {
      *(float *)(unaff_RBP + -0x39) = fVar28;
    }
    else {
      *(float *)(unaff_RBP + -0x39) = fVar2;
    }
    if (fVar26 <= fVar21) {
      *(float *)(unaff_RBP + -0x35) = fVar21;
    }
    else {
      *(float *)(unaff_RBP + -0x35) = fVar26;
    }
    if (fVar19 <= fVar20) {
      *(float *)(unaff_RBP + -0x31) = fVar20;
    }
    else {
      *(float *)(unaff_RBP + -0x31) = fVar19;
    }
    param_3 = *unaff_RDI;
    in_R10D = in_R10D + 1;
    uVar22 = *(undefined4 *)(unaff_RBP + -0x39);
    uVar23 = *(undefined4 *)(unaff_RBP + -0x35);
    uVar24 = *(undefined4 *)(unaff_RBP + -0x31);
    uVar25 = *(undefined4 *)(unaff_RBP + -0x2d);
    lVar16 = SUB168(SEXT816(in_R11) * SEXT816(unaff_RDI[1] - param_3),8);
    *(undefined4 *)(unaff_RBP + -0x49) = uVar22;
    *(undefined4 *)(unaff_RBP + -0x45) = uVar23;
    *(undefined4 *)(unaff_RBP + -0x41) = uVar24;
    *(undefined4 *)(unaff_RBP + -0x3d) = uVar25;
    uVar18 = uVar18 + 0x30;
  } while ((ulonglong)(longlong)in_R10D < (ulonglong)((lVar16 >> 3) - (lVar16 >> 0x3f)));
  lVar16 = unaff_RDI[4];
  uVar18 = unaff_RSI;
  if (unaff_RDI[5] - lVar16 >> 5 != 0) {
    do {
      pfVar1 = (float *)(lVar16 + 4 + uVar18);
      fVar26 = *pfVar1;
      fVar21 = pfVar1[1];
      fVar19 = pfVar1[2];
      fVar20 = unaff_RBX[1];
      fVar29 = unaff_RBX[2];
      fVar2 = unaff_RBX[3];
      fVar4 = unaff_RBX[5];
      fVar5 = unaff_RBX[6];
      fVar6 = unaff_RBX[7];
      fVar7 = unaff_RBX[9];
      fVar8 = unaff_RBX[10];
      fVar9 = unaff_RBX[0xb];
      fVar10 = unaff_RBX[0xd];
      fVar11 = unaff_RBX[0xe];
      fVar12 = unaff_RBX[0xf];
      fVar27 = *unaff_RBX * fVar26 + unaff_RBX[4] * fVar21 + unaff_RBX[8] * fVar19 + unaff_RBX[0xc];
      fVar28 = *(float *)(unaff_RBP + -0x59);
      pfVar1 = (float *)(lVar16 + 4 + uVar18);
      *pfVar1 = fVar27;
      pfVar1[1] = fVar20 * fVar26 + fVar4 * fVar21 + fVar7 * fVar19 + fVar10;
      pfVar1[2] = fVar29 * fVar26 + fVar5 * fVar21 + fVar8 * fVar19 + fVar11;
      pfVar1[3] = fVar2 * fVar26 + fVar6 * fVar21 + fVar9 * fVar19 + fVar12;
      if (fVar28 <= fVar27) {
        *(float *)(unaff_RBP + -0x29) = fVar28;
      }
      else {
        *(float *)(unaff_RBP + -0x29) = fVar27;
      }
      fVar28 = *(float *)(lVar16 + 8 + uVar18);
      if (*(float *)(unaff_RBP + -0x55) <= fVar28) {
        *(float *)(unaff_RBP + -0x25) = *(float *)(unaff_RBP + -0x55);
      }
      else {
        *(float *)(unaff_RBP + -0x25) = fVar28;
      }
      fVar26 = *(float *)(lVar16 + 0xc + uVar18);
      if (*(float *)(unaff_RBP + -0x51) <= fVar26) {
        *(float *)(unaff_RBP + -0x21) = *(float *)(unaff_RBP + -0x51);
      }
      else {
        *(float *)(unaff_RBP + -0x21) = fVar26;
      }
      *(undefined8 *)(unaff_RBP + -0x59) = *(undefined8 *)(unaff_RBP + -0x29);
      *(undefined8 *)(unaff_RBP + -0x51) = *(undefined8 *)(unaff_RBP + -0x21);
      if (fVar27 <= *(float *)(unaff_RBP + -0x49)) {
        *(float *)(unaff_RBP + -0x39) = *(float *)(unaff_RBP + -0x49);
      }
      else {
        *(float *)(unaff_RBP + -0x39) = fVar27;
      }
      if (fVar28 <= *(float *)(unaff_RBP + -0x45)) {
        *(float *)(unaff_RBP + -0x35) = *(float *)(unaff_RBP + -0x45);
      }
      else {
        *(float *)(unaff_RBP + -0x35) = fVar28;
      }
      if (fVar26 <= *(float *)(unaff_RBP + -0x41)) {
        *(float *)(unaff_RBP + -0x31) = *(float *)(unaff_RBP + -0x41);
      }
      else {
        *(float *)(unaff_RBP + -0x31) = fVar26;
      }
      lVar16 = unaff_RDI[4];
      uVar17 = (int)unaff_RSI + 1;
      unaff_RSI = (ulonglong)uVar17;
      lVar3 = unaff_RDI[5];
      uVar22 = *(undefined4 *)(unaff_RBP + -0x39);
      uVar23 = *(undefined4 *)(unaff_RBP + -0x35);
      uVar24 = *(undefined4 *)(unaff_RBP + -0x31);
      uVar25 = *(undefined4 *)(unaff_RBP + -0x2d);
      *(undefined4 *)(unaff_RBP + -0x49) = uVar22;
      *(undefined4 *)(unaff_RBP + -0x45) = uVar23;
      *(undefined4 *)(unaff_RBP + -0x41) = uVar24;
      *(undefined4 *)(unaff_RBP + -0x3d) = uVar25;
      uVar18 = uVar18 + 0x20;
    } while ((ulonglong)(longlong)(int)uVar17 < (ulonglong)(lVar3 - lVar16 >> 5));
  }
  *(undefined4 *)(unaff_RBP + -0x19) = *(undefined4 *)(unaff_RBP + -0x59);
  *(undefined4 *)(unaff_RBP + -0x15) = *(undefined4 *)(unaff_RBP + -0x55);
  *(undefined4 *)(unaff_RBP + -0x11) = *(undefined4 *)(unaff_RBP + -0x51);
  *(undefined4 *)(unaff_RBP + -0xd) = *(undefined4 *)(unaff_RBP + -0x4d);
  *(undefined4 *)(unaff_RBP + -9) = uVar22;
  *(undefined4 *)(unaff_RBP + -5) = uVar23;
  *(undefined4 *)(unaff_RBP + -1) = uVar24;
  *(undefined4 *)(unaff_RBP + 3) = uVar25;
  FUN_1800b9f60(unaff_RBP + -0x19);
  lVar16 = *(longlong *)(unaff_RBP + -0x11);
  uVar22 = *(undefined4 *)(unaff_RBP + 0x17);
  lVar3 = *(longlong *)(unaff_RBP + -9);
  lVar14 = *(longlong *)(unaff_RBP + -1);
  unaff_RDI[0x1f] = *(longlong *)(unaff_RBP + -0x19);
  unaff_RDI[0x20] = lVar16;
  lVar16 = *(longlong *)(unaff_RBP + 7);
  lVar15 = *(longlong *)(unaff_RBP + 0xf);
  unaff_RDI[0x21] = lVar3;
  unaff_RDI[0x22] = lVar14;
  unaff_RDI[0x23] = lVar16;
  unaff_RDI[0x24] = lVar15;
  *(undefined4 *)(unaff_RDI + 0x25) = uVar22;
  return;
}





// 函数: void FUN_180436829(undefined8 param_1,undefined8 param_2,undefined8 param_3)
void FUN_180436829(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
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
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  longlong lVar23;
  float *unaff_RBX;
  longlong unaff_RBP;
  uint uVar24;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  float fVar28;
  
  uVar27 = (undefined4)((ulonglong)param_3 >> 0x20);
  uVar26 = (undefined4)param_3;
  lVar23 = *(longlong *)(unaff_RDI + 0x20);
  uVar25 = unaff_RSI;
  if (*(longlong *)(unaff_RDI + 0x28) - lVar23 >> 5 != 0) {
    do {
      pfVar1 = (float *)(lVar23 + 4 + uVar25);
      fVar3 = *pfVar1;
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = unaff_RBX[1];
      fVar8 = unaff_RBX[2];
      fVar9 = unaff_RBX[3];
      fVar10 = unaff_RBX[5];
      fVar11 = unaff_RBX[6];
      fVar12 = unaff_RBX[7];
      fVar13 = unaff_RBX[9];
      fVar14 = unaff_RBX[10];
      fVar15 = unaff_RBX[0xb];
      fVar16 = unaff_RBX[0xd];
      fVar17 = unaff_RBX[0xe];
      fVar18 = unaff_RBX[0xf];
      fVar28 = *unaff_RBX * fVar3 + unaff_RBX[4] * fVar5 + unaff_RBX[8] * fVar6 + unaff_RBX[0xc];
      fVar2 = *(float *)(unaff_RBP + -0x59);
      pfVar1 = (float *)(lVar23 + 4 + uVar25);
      *pfVar1 = fVar28;
      pfVar1[1] = fVar7 * fVar3 + fVar10 * fVar5 + fVar13 * fVar6 + fVar16;
      pfVar1[2] = fVar8 * fVar3 + fVar11 * fVar5 + fVar14 * fVar6 + fVar17;
      pfVar1[3] = fVar9 * fVar3 + fVar12 * fVar5 + fVar15 * fVar6 + fVar18;
      if (fVar2 <= fVar28) {
        *(float *)(unaff_RBP + -0x29) = fVar2;
      }
      else {
        *(float *)(unaff_RBP + -0x29) = fVar28;
      }
      fVar2 = *(float *)(lVar23 + 8 + uVar25);
      if (*(float *)(unaff_RBP + -0x55) <= fVar2) {
        *(float *)(unaff_RBP + -0x25) = *(float *)(unaff_RBP + -0x55);
      }
      else {
        *(float *)(unaff_RBP + -0x25) = fVar2;
      }
      fVar3 = *(float *)(lVar23 + 0xc + uVar25);
      if (*(float *)(unaff_RBP + -0x51) <= fVar3) {
        *(float *)(unaff_RBP + -0x21) = *(float *)(unaff_RBP + -0x51);
      }
      else {
        *(float *)(unaff_RBP + -0x21) = fVar3;
      }
      *(undefined8 *)(unaff_RBP + -0x59) = *(undefined8 *)(unaff_RBP + -0x29);
      *(undefined8 *)(unaff_RBP + -0x51) = *(undefined8 *)(unaff_RBP + -0x21);
      if (fVar28 <= *(float *)(unaff_RBP + -0x49)) {
        *(float *)(unaff_RBP + -0x39) = *(float *)(unaff_RBP + -0x49);
      }
      else {
        *(float *)(unaff_RBP + -0x39) = fVar28;
      }
      if (fVar2 <= *(float *)(unaff_RBP + -0x45)) {
        *(float *)(unaff_RBP + -0x35) = *(float *)(unaff_RBP + -0x45);
      }
      else {
        *(float *)(unaff_RBP + -0x35) = fVar2;
      }
      if (fVar3 <= *(float *)(unaff_RBP + -0x41)) {
        *(float *)(unaff_RBP + -0x31) = *(float *)(unaff_RBP + -0x41);
      }
      else {
        *(float *)(unaff_RBP + -0x31) = fVar3;
      }
      lVar23 = *(longlong *)(unaff_RDI + 0x20);
      uVar24 = (int)unaff_RSI + 1;
      unaff_RSI = (ulonglong)uVar24;
      lVar4 = *(longlong *)(unaff_RDI + 0x28);
      uVar26 = *(undefined4 *)(unaff_RBP + -0x39);
      uVar27 = *(undefined4 *)(unaff_RBP + -0x35);
      in_XMM2_Dc = *(undefined4 *)(unaff_RBP + -0x31);
      in_XMM2_Dd = *(undefined4 *)(unaff_RBP + -0x2d);
      *(undefined4 *)(unaff_RBP + -0x49) = uVar26;
      *(undefined4 *)(unaff_RBP + -0x45) = uVar27;
      *(undefined4 *)(unaff_RBP + -0x41) = in_XMM2_Dc;
      *(undefined4 *)(unaff_RBP + -0x3d) = in_XMM2_Dd;
      uVar25 = uVar25 + 0x20;
    } while ((ulonglong)(longlong)(int)uVar24 < (ulonglong)(lVar4 - lVar23 >> 5));
  }
  *(undefined4 *)(unaff_RBP + -0x19) = *(undefined4 *)(unaff_RBP + -0x59);
  *(undefined4 *)(unaff_RBP + -0x15) = *(undefined4 *)(unaff_RBP + -0x55);
  *(undefined4 *)(unaff_RBP + -0x11) = *(undefined4 *)(unaff_RBP + -0x51);
  *(undefined4 *)(unaff_RBP + -0xd) = *(undefined4 *)(unaff_RBP + -0x4d);
  *(undefined4 *)(unaff_RBP + -9) = uVar26;
  *(undefined4 *)(unaff_RBP + -5) = uVar27;
  *(undefined4 *)(unaff_RBP + -1) = in_XMM2_Dc;
  *(undefined4 *)(unaff_RBP + 3) = in_XMM2_Dd;
  FUN_1800b9f60(unaff_RBP + -0x19);
  uVar19 = *(undefined8 *)(unaff_RBP + -0x11);
  uVar26 = *(undefined4 *)(unaff_RBP + 0x17);
  uVar20 = *(undefined8 *)(unaff_RBP + -9);
  uVar21 = *(undefined8 *)(unaff_RBP + -1);
  *(undefined8 *)(unaff_RDI + 0xf8) = *(undefined8 *)(unaff_RBP + -0x19);
  *(undefined8 *)(unaff_RDI + 0x100) = uVar19;
  uVar19 = *(undefined8 *)(unaff_RBP + 7);
  uVar22 = *(undefined8 *)(unaff_RBP + 0xf);
  *(undefined8 *)(unaff_RDI + 0x108) = uVar20;
  *(undefined8 *)(unaff_RDI + 0x110) = uVar21;
  *(undefined8 *)(unaff_RDI + 0x118) = uVar19;
  *(undefined8 *)(unaff_RDI + 0x120) = uVar22;
  *(undefined4 *)(unaff_RDI + 0x128) = uVar26;
  return;
}





// 函数: void FUN_1804369d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1804369d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStackX_8;
  undefined8 *puStackX_10;
  
  puStackX_10 = &uStackX_8;
  uStackX_8 = 0;
  FUN_1804856a0(param_1,&uStackX_8,param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180436a00(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)
void FUN_180436a00(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plStackX_8;
  longlong **pplStackX_10;
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  FUN_1804856a0(param_1,&plStackX_8,param_3,param_4,uVar1);
  return;
}



undefined8 * FUN_180436a50(undefined8 *param_1,undefined8 param_2)

{
  longlong *plStackX_8;
  longlong *plStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_180485650(param_2,&plStackX_8);
  plStack_18 = plStackX_8;
  if (plStackX_8 == (longlong *)0x0) {
    plStack_18 = (longlong *)0x0;
    uStack_10 = 0xffffffff;
  }
  else {
    uStack_10 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plStack_18 + 0x28))(plStack_18);
  }
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  *param_1 = plStack_18;
  param_1[1] = CONCAT44(uStack_c,uStack_10);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_180436ae0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined4 uStack_14;
  
  plVar3 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x160,0x10,3,0xfffffffffffffffe);
  *plVar3 = (longlong)&UNK_180a21690;
  *plVar3 = (longlong)&UNK_180a21720;
  *(undefined4 *)(plVar3 + 1) = 0;
  *plVar3 = (longlong)&UNK_180a2bf30;
  FUN_180094c20(plVar3 + 2);
  plVar3[0x2a] = 0;
  *(undefined4 *)(plVar3 + 1) = 0;
  plVar1 = (longlong *)plVar3[0x2a];
  plVar3[0x2a] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
  (**(code **)(*plVar3 + 0x28))(plVar3);
  *param_1 = plVar3;
  param_1[1] = CONCAT44(uStack_14,uVar2);
  return param_1;
}





// 函数: void FUN_180436bb0(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4)
void FUN_180436bb0(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_38 = *param_4;
  uStack_30 = param_4[1];
  uStack_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  uStack_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_180287020(param_1 + 0x10,&uStack_18,&uStack_28,&uStack_38);
  return;
}





// 函数: void FUN_180436bf0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180436bf0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 auStackX_8 [4];
  undefined8 auStackX_18 [2];
  
  auStackX_8[0] = 0xbf800000;
  auStackX_18[0] = param_2;
  FUN_1802874c0(param_1 + 0x10,param_3,param_4,auStackX_18,auStackX_8);
  return;
}



bool FUN_180436c30(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_1801c0d90(param_2);
  uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + 0xb0);
  FUN_1801c0d90(param_2);
  iVar2 = FUN_18063c760(param_1 + 0x10,*(longlong *)(param_2 + 0x28) + 0x20,uVar1);
  return iVar2 != 0;
}





// 函数: void FUN_180436d00(longlong param_1,undefined8 *param_2)
void FUN_180436d00(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_c8 [12];
  undefined4 uStack_bc;
  undefined4 uStack_ac;
  undefined4 uStack_9c;
  undefined4 uStack_8c;
  undefined1 auStack_88 [64];
  undefined1 auStack_48 [64];
  
  lVar3 = param_1 + 0x10;
  FUN_180287b30(param_1 + 0xd0,auStack_c8);
  uStack_8c = 0x3f800000;
  uStack_bc = 0;
  uStack_ac = 0;
  uStack_9c = 0;
  uVar1 = FUN_180286010(lVar3,auStack_88,0);
  puVar2 = (undefined8 *)FUN_1800946d0(auStack_c8,auStack_48,uVar1);
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  uVar1 = puVar2[3];
  param_2[2] = puVar2[2];
  param_2[3] = uVar1;
  uVar1 = puVar2[5];
  param_2[4] = puVar2[4];
  param_2[5] = uVar1;
  uVar1 = puVar2[7];
  param_2[6] = puVar2[6];
  param_2[7] = uVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180436da0(undefined8 *param_1,float param_2,float param_3,undefined4 param_4,
void FUN_180436da0(undefined8 *param_1,float param_2,float param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 *param_6)

{
  float fVar1;
  undefined1 auStack_1f8 [32];
  undefined4 uStack_1d8;
  undefined1 auStack_1c8 [64];
  undefined1 auStack_188 [32];
  undefined1 auStack_168 [32];
  undefined1 auStack_148 [32];
  undefined1 auStack_128 [32];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_1f8;
  FUN_180094c20(auStack_1c8);
  uStack_108 = *param_1;
  uStack_100 = param_1[1];
  uStack_f8 = param_1[2];
  uStack_f0 = param_1[3];
  uStack_d8 = *(undefined4 *)(param_1 + 6);
  uStack_d4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_d0 = *(undefined4 *)(param_1 + 7);
  uStack_cc = *(undefined4 *)((longlong)param_1 + 0x3c);
  uStack_e8 = *(undefined4 *)(param_1 + 4);
  uStack_e4 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_e0 = *(undefined4 *)(param_1 + 5);
  uStack_dc = *(undefined4 *)((longlong)param_1 + 0x2c);
  FUN_1802864f0(auStack_1c8);
  fVar1 = (float)tanf(param_2 * 0.5);
  fVar1 = (float)atanf(fVar1 * param_3);
  uStack_1d8 = param_5;
  FUN_180286e40(auStack_1c8,fVar1 + fVar1,param_3,param_4);
  FUN_1806506a0(&uStack_88,auStack_1c8,auStack_148,auStack_168);
  FUN_1806506a0(&uStack_78,auStack_1c8,auStack_148,auStack_188);
  FUN_1806506a0(&uStack_68,auStack_1c8,auStack_128,auStack_168);
  FUN_1806506a0(&uStack_58,auStack_1c8,auStack_128,auStack_188);
  *param_6 = uStack_88;
  param_6[1] = uStack_80;
  param_6[2] = uStack_78;
  param_6[3] = uStack_70;
  *(undefined4 *)(param_6 + 4) = uStack_68;
  *(undefined4 *)((longlong)param_6 + 0x24) = uStack_64;
  *(undefined4 *)(param_6 + 5) = uStack_60;
  *(undefined4 *)((longlong)param_6 + 0x2c) = uStack_5c;
  *(undefined4 *)(param_6 + 6) = uStack_58;
  *(undefined4 *)((longlong)param_6 + 0x34) = uStack_54;
  *(undefined4 *)(param_6 + 7) = uStack_50;
  *(undefined4 *)((longlong)param_6 + 0x3c) = uStack_4c;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_1f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180436f20(longlong param_1,undefined8 *param_2)
void FUN_180436f20(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_78;
  FUN_1806506a0(&uStack_58,param_1 + 0x10,param_1 + 0x90,param_1 + 0x70);
  FUN_1806506a0(&uStack_48);
  FUN_1806506a0(&uStack_38);
  FUN_1806506a0(&uStack_28);
  *param_2 = uStack_58;
  param_2[1] = uStack_50;
  param_2[2] = uStack_48;
  param_2[3] = uStack_40;
  *(undefined4 *)(param_2 + 4) = uStack_38;
  *(undefined4 *)((longlong)param_2 + 0x24) = uStack_34;
  *(undefined4 *)(param_2 + 5) = uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_2c;
  *(undefined4 *)(param_2 + 6) = uStack_28;
  *(undefined4 *)((longlong)param_2 + 0x34) = uStack_24;
  *(undefined4 *)(param_2 + 7) = uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_1c;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_78);
}





