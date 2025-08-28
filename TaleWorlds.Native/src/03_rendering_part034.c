#include "TaleWorlds.Native.Split.h"

// 03_rendering_part034.c - 5 个函数

// 函数: void FUN_180286514(float *param_1)
void FUN_180286514(float *param_1)

{
  float fVar1;
  longlong unaff_RBP;
  undefined8 in_XMM0_Qa;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  param_1[0x20] = (float)in_XMM0_Qa;
  param_1[0x21] = (float)((ulonglong)in_XMM0_Qa >> 0x20);
  param_1[0x22] = in_XMM0_Dc;
  param_1[0x23] = in_XMM0_Dd;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x3c);
  *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_1 + 0x3e);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x3c);
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_1 + 0x3e);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x3c);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_1 + 0x3e);
  fVar5 = param_1[0x45];
  fVar3 = param_1[0x43];
  fVar7 = -(fVar5 * param_1[0x34]) - fVar3 * param_1[0x38];
  fVar2 = -(fVar5 * param_1[0x35]) - fVar3 * param_1[0x39];
  fVar1 = *(float *)(unaff_RBP + -0x34);
  fVar9 = -(fVar5 * param_1[0x36]) - fVar3 * param_1[0x3a];
  param_1[0x24] = fVar7;
  param_1[0x25] = fVar2;
  param_1[0x26] = fVar9;
  param_1[0x27] = fVar1;
  fVar5 = param_1[0x45];
  fVar3 = param_1[0x44];
  *(float *)(unaff_RBP + -0x40) = fVar7;
  *(float *)(unaff_RBP + -0x3c) = fVar2;
  *(float *)(unaff_RBP + -0x38) = fVar9;
  *(float *)(unaff_RBP + -0x34) = fVar1;
  *(undefined4 *)(unaff_RBP + -0x34) = 0x7f7fffff;
  fVar8 = fVar3 * param_1[0x38] + fVar5 * param_1[0x34];
  fVar10 = fVar3 * param_1[0x3a] + fVar5 * param_1[0x36];
  fVar4 = fVar3 * param_1[0x39] + fVar5 * param_1[0x35];
  fVar9 = *(float *)(unaff_RBP + -0x34);
  param_1[0x2c] = fVar8;
  param_1[0x2d] = fVar4;
  param_1[0x2e] = fVar10;
  param_1[0x2f] = fVar9;
  fVar5 = param_1[0x45];
  fVar3 = param_1[0x42];
  fVar1 = param_1[0x30];
  fVar2 = param_1[0x31];
  fVar7 = param_1[0x32];
  *(float *)(unaff_RBP + -0x40) = fVar8;
  *(float *)(unaff_RBP + -0x3c) = fVar4;
  *(float *)(unaff_RBP + -0x38) = fVar10;
  *(float *)(unaff_RBP + -0x34) = fVar9;
  fVar8 = -(fVar5 * fVar1) - fVar3 * param_1[0x38];
  fVar4 = -(fVar5 * fVar2) - fVar3 * param_1[0x39];
  fVar1 = param_1[0x3a];
  *(undefined4 *)(unaff_RBP + -0x34) = 0x7f7fffff;
  fVar9 = *(float *)(unaff_RBP + -0x34);
  fVar7 = -(fVar5 * fVar7) - fVar3 * fVar1;
  param_1[0x1c] = fVar8;
  param_1[0x1d] = fVar4;
  param_1[0x1e] = fVar7;
  param_1[0x1f] = fVar9;
  fVar5 = param_1[0x45];
  fVar3 = param_1[0x41];
  fVar1 = param_1[0x31];
  fVar2 = param_1[0x38];
  *(float *)(unaff_RBP + -0x40) = fVar8;
  *(float *)(unaff_RBP + -0x3c) = fVar4;
  *(float *)(unaff_RBP + -0x38) = fVar7;
  *(float *)(unaff_RBP + -0x34) = fVar9;
  *(undefined4 *)(unaff_RBP + -0x34) = 0x7f7fffff;
  fVar9 = fVar3 * fVar2 + fVar5 * param_1[0x30];
  fVar7 = fVar5 * fVar1 + fVar3 * param_1[0x39];
  fVar2 = *(float *)(unaff_RBP + -0x34);
  fVar4 = fVar3 * param_1[0x3a] + fVar5 * param_1[0x32];
  param_1[0x14] = fVar9;
  param_1[0x15] = fVar7;
  param_1[0x16] = fVar4;
  param_1[0x17] = fVar2;
  fVar5 = param_1[0x25];
  fVar3 = param_1[0x24];
  fVar1 = param_1[0x26];
  *(float *)(unaff_RBP + -0x40) = fVar9;
  *(float *)(unaff_RBP + -0x3c) = fVar7;
  *(float *)(unaff_RBP + -0x38) = fVar4;
  *(float *)(unaff_RBP + -0x34) = fVar2;
  fVar2 = fVar3 * fVar3 + fVar5 * fVar5 + fVar1 * fVar1;
  auVar6 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
  fVar7 = auVar6._0_4_;
  fVar2 = fVar7 * 0.5 * (3.0 - fVar2 * fVar7 * fVar7);
  param_1[0x24] = fVar3 * fVar2;
  param_1[0x25] = fVar5 * fVar2;
  param_1[0x26] = fVar1 * fVar2;
  fVar5 = param_1[0x2d];
  fVar3 = param_1[0x2c];
  fVar1 = param_1[0x2e];
  fVar2 = fVar3 * fVar3 + fVar5 * fVar5 + fVar1 * fVar1;
  auVar6 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
  fVar7 = auVar6._0_4_;
  *(undefined4 *)(unaff_RBP + -0x34) = 0x7f7fffff;
  fVar2 = fVar7 * 0.5 * (3.0 - fVar2 * fVar7 * fVar7);
  param_1[0x2c] = fVar3 * fVar2;
  param_1[0x2d] = fVar5 * fVar2;
  param_1[0x2e] = fVar1 * fVar2;
  fVar5 = param_1[0x1d];
  fVar3 = param_1[0x1c];
  fVar1 = param_1[0x1e];
  fVar2 = fVar3 * fVar3 + fVar5 * fVar5 + fVar1 * fVar1;
  auVar6 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
  fVar7 = auVar6._0_4_;
  fVar2 = fVar7 * 0.5 * (3.0 - fVar2 * fVar7 * fVar7);
  param_1[0x1c] = fVar3 * fVar2;
  param_1[0x1d] = fVar5 * fVar2;
  param_1[0x1e] = fVar1 * fVar2;
  fVar5 = param_1[0x15];
  fVar3 = param_1[0x14];
  fVar1 = param_1[0x16];
  fVar2 = fVar3 * fVar3 + fVar5 * fVar5 + fVar1 * fVar1;
  auVar6 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
  fVar7 = auVar6._0_4_;
  fVar2 = fVar7 * 0.5 * (3.0 - fVar2 * fVar7 * fVar7);
  param_1[0x14] = fVar3 * fVar2;
  param_1[0x15] = fVar5 * fVar2;
  param_1[0x16] = fVar1 * fVar2;
  fVar5 = param_1[0x46];
  fVar9 = param_1[0x3c] - fVar5 * param_1[0x38];
  fVar4 = param_1[0x3d] - fVar5 * param_1[0x39];
  fVar2 = *(float *)(unaff_RBP + -0x34);
  fVar7 = param_1[0x3e] - fVar5 * param_1[0x3a];
  param_1[8] = fVar9;
  param_1[9] = fVar4;
  param_1[10] = fVar7;
  param_1[0xb] = fVar2;
  fVar5 = param_1[0x45];
  fVar3 = param_1[0x38];
  fVar1 = param_1[0x3a];
  fVar8 = param_1[0x3d] - fVar5 * param_1[0x39];
  *(float *)(unaff_RBP + -0x40) = fVar9;
  *(float *)(unaff_RBP + -0x3c) = fVar4;
  *(float *)(unaff_RBP + -0x38) = fVar7;
  *(float *)(unaff_RBP + -0x34) = fVar2;
  *(undefined4 *)(unaff_RBP + -0x34) = 0x7f7fffff;
  fVar2 = *(float *)(unaff_RBP + -0x34);
  fVar3 = param_1[0x3c] - fVar5 * fVar3;
  fVar5 = param_1[0x3e] - fVar5 * fVar1;
  *param_1 = fVar3;
  param_1[1] = fVar8;
  param_1[2] = fVar5;
  param_1[3] = fVar2;
  *(float *)(unaff_RBP + -0x40) = fVar3;
  *(float *)(unaff_RBP + -0x3c) = fVar8;
  *(float *)(unaff_RBP + -0x38) = fVar5;
  *(float *)(unaff_RBP + -0x34) = fVar2;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x3a);
  fVar1 = param_1[0x38];
  fVar2 = param_1[0x39];
  fVar5 = param_1[0x3a];
  *(undefined4 *)(unaff_RBP + -0x34) = 0x7f7fffff;
  fVar3 = *(float *)(unaff_RBP + -0x34);
  param_1[4] = -fVar1;
  param_1[5] = -fVar2;
  param_1[6] = -fVar5;
  param_1[7] = fVar3;
  return;
}





// 函数: void FUN_180286a98(float *param_1)
void FUN_180286a98(float *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar9 = param_1[0x43];
  *(undefined4 *)(unaff_RBP + -0x34) = 0x7f7fffff;
  fVar6 = fVar9 * param_1[0x34] + param_1[0x3c];
  fVar8 = *(float *)(unaff_RBP + -0x34);
  fVar5 = fVar9 * param_1[0x35] + param_1[0x3d];
  fVar10 = fVar9 * param_1[0x36] + param_1[0x3e];
  param_1[0x20] = fVar6;
  param_1[0x21] = fVar5;
  param_1[0x22] = fVar10;
  param_1[0x23] = fVar8;
  fVar9 = param_1[0x44];
  *(float *)(unaff_RBP + -0x40) = fVar6;
  *(float *)(unaff_RBP + -0x3c) = fVar5;
  *(float *)(unaff_RBP + -0x38) = fVar10;
  *(float *)(unaff_RBP + -0x34) = fVar8;
  *(undefined4 *)(unaff_RBP + -0x34) = 0x7f7fffff;
  fVar10 = fVar9 * param_1[0x36] + param_1[0x3e];
  fVar6 = fVar9 * param_1[0x35] + param_1[0x3d];
  fVar8 = *(float *)(unaff_RBP + -0x34);
  fVar5 = fVar9 * param_1[0x34] + param_1[0x3c];
  param_1[0x28] = fVar5;
  param_1[0x29] = fVar6;
  param_1[0x2a] = fVar10;
  param_1[0x2b] = fVar8;
  fVar9 = param_1[0x42];
  *(float *)(unaff_RBP + -0x40) = fVar5;
  *(float *)(unaff_RBP + -0x3c) = fVar6;
  *(float *)(unaff_RBP + -0x38) = fVar10;
  *(float *)(unaff_RBP + -0x34) = fVar8;
  *(undefined4 *)(unaff_RBP + -0x34) = 0x7f7fffff;
  fVar10 = fVar9 * param_1[0x32] + param_1[0x3e];
  fVar6 = fVar9 * param_1[0x31] + param_1[0x3d];
  fVar8 = *(float *)(unaff_RBP + -0x34);
  fVar5 = fVar9 * param_1[0x30] + param_1[0x3c];
  param_1[0x18] = fVar5;
  param_1[0x19] = fVar6;
  param_1[0x1a] = fVar10;
  param_1[0x1b] = fVar8;
  fVar9 = param_1[0x41];
  *(float *)(unaff_RBP + -0x40) = fVar5;
  *(float *)(unaff_RBP + -0x3c) = fVar6;
  *(float *)(unaff_RBP + -0x38) = fVar10;
  *(float *)(unaff_RBP + -0x34) = fVar8;
  *(undefined4 *)(unaff_RBP + -0x34) = 0x7f7fffff;
  fVar7 = fVar9 * param_1[0x32] + param_1[0x3e];
  fVar10 = fVar9 * param_1[0x31] + param_1[0x3d];
  fVar5 = *(float *)(unaff_RBP + -0x34);
  fVar6 = fVar9 * param_1[0x30] + param_1[0x3c];
  param_1[0x10] = fVar6;
  param_1[0x11] = fVar10;
  param_1[0x12] = fVar7;
  param_1[0x13] = fVar5;
  fVar9 = param_1[0x46];
  fVar8 = param_1[0x3c];
  *(float *)(unaff_RBP + -0x40) = fVar6;
  *(float *)(unaff_RBP + -0x3c) = fVar10;
  *(float *)(unaff_RBP + -0x38) = fVar7;
  *(float *)(unaff_RBP + -0x34) = fVar5;
  fVar8 = fVar8 - fVar9 * param_1[0x38];
  fVar5 = param_1[0x3d];
  fVar6 = param_1[0x3a];
  *(undefined4 *)(unaff_RBP + -0x34) = 0x7f7fffff;
  fVar5 = fVar5 - fVar9 * param_1[0x39];
  fVar10 = param_1[0x3e] - fVar9 * fVar6;
  fVar6 = *(float *)(unaff_RBP + -0x34);
  param_1[8] = fVar8;
  param_1[9] = fVar5;
  param_1[10] = fVar10;
  param_1[0xb] = fVar6;
  fVar9 = param_1[0x3c];
  *(float *)(unaff_RBP + -0x40) = fVar8;
  *(float *)(unaff_RBP + -0x3c) = fVar5;
  *(float *)(unaff_RBP + -0x38) = fVar10;
  *(float *)(unaff_RBP + -0x34) = fVar6;
  *(undefined4 *)(unaff_RBP + -0x34) = 0x7f7fffff;
  fVar8 = param_1[0x45];
  fVar9 = fVar9 - fVar8 * param_1[0x38];
  fVar3 = param_1[0x3d] - fVar8 * param_1[0x39];
  fVar4 = param_1[0x3e] - fVar8 * param_1[0x3a];
  fVar8 = *(float *)(unaff_RBP + -0x34);
  *param_1 = fVar9;
  param_1[1] = fVar3;
  param_1[2] = fVar4;
  param_1[3] = fVar8;
  fVar10 = param_1[0x34];
  fVar7 = param_1[0x35];
  fVar5 = param_1[0x34];
  fVar6 = param_1[0x35];
  *(float *)(unaff_RBP + -0x40) = fVar9;
  *(float *)(unaff_RBP + -0x3c) = fVar3;
  *(float *)(unaff_RBP + -0x38) = fVar4;
  *(float *)(unaff_RBP + -0x34) = fVar8;
  *(undefined4 *)(unaff_RBP + -0x34) = 0x7f7fffff;
  fVar9 = param_1[0x36];
  fVar8 = *(float *)(unaff_RBP + -0x34);
  param_1[0x24] = -fVar5;
  param_1[0x25] = -fVar6;
  param_1[0x26] = -fVar9;
  param_1[0x27] = fVar8;
  uVar1 = *(undefined8 *)(param_1 + 0x34);
  uVar2 = *(undefined8 *)(param_1 + 0x36);
  *(float *)(unaff_RBP + -0x40) = -fVar10;
  *(float *)(unaff_RBP + -0x3c) = -fVar7;
  *(float *)(unaff_RBP + -0x38) = -fVar9;
  *(float *)(unaff_RBP + -0x34) = fVar8;
  *(undefined4 *)(unaff_RBP + -0x34) = 0x7f7fffff;
  fVar8 = *(float *)(unaff_RBP + -0x34);
  *(undefined8 *)(param_1 + 0x2c) = uVar1;
  *(undefined8 *)(param_1 + 0x2e) = uVar2;
  fVar5 = param_1[0x31];
  fVar9 = param_1[0x32];
  param_1[0x1c] = -param_1[0x30];
  param_1[0x1d] = -param_1[0x31];
  param_1[0x1e] = -fVar9;
  param_1[0x1f] = fVar8;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x32);
  *(float *)(unaff_RBP + -0x40) = -param_1[0x30];
  *(float *)(unaff_RBP + -0x3c) = -fVar5;
  *(float *)(unaff_RBP + -0x38) = -fVar9;
  *(float *)(unaff_RBP + -0x34) = fVar8;
  *(undefined8 *)(param_1 + 0x14) = uVar1;
  *(undefined8 *)(param_1 + 0x16) = uVar2;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x3a);
  fVar5 = param_1[0x38];
  fVar6 = param_1[0x39];
  fVar9 = param_1[0x3a];
  *(undefined4 *)(unaff_RBP + -0x34) = 0x7f7fffff;
  fVar8 = *(float *)(unaff_RBP + -0x34);
  param_1[4] = -fVar5;
  param_1[5] = -fVar6;
  param_1[6] = -fVar9;
  param_1[7] = fVar8;
  return;
}





// 函数: void FUN_180286e40(float *param_1,float param_2,float param_3,float param_4,float param_5)
void FUN_180286e40(float *param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  
  param_1[0x47] = param_2;
  *(undefined1 *)(param_1 + 0x40) = 1;
  param_1[0x46] = param_5;
  param_1[0x45] = param_4;
  param_1[0x48] = param_3;
  fVar3 = (float)tanf(param_2 * 0.5);
  fVar3 = fVar3 * param_4;
  param_1[0x42] = fVar3;
  param_1[0x41] = -fVar3;
  param_1[0x43] = fVar3 / param_3;
  param_1[0x44] = -(fVar3 / param_3);
  if (*(char *)(param_1 + 0x40) == '\0') {
    fVar3 = param_1[0x43];
    param_1[0x20] = fVar3 * param_1[0x34] + param_1[0x3c];
    param_1[0x21] = fVar3 * param_1[0x35] + param_1[0x3d];
    param_1[0x22] = fVar3 * param_1[0x36] + param_1[0x3e];
    param_1[0x23] = 3.4028235e+38;
    fVar3 = param_1[0x44];
    param_1[0x28] = fVar3 * param_1[0x34] + param_1[0x3c];
    param_1[0x29] = fVar3 * param_1[0x35] + param_1[0x3d];
    param_1[0x2a] = fVar3 * param_1[0x36] + param_1[0x3e];
    param_1[0x2b] = 3.4028235e+38;
    fVar3 = param_1[0x42];
    param_1[0x18] = fVar3 * param_1[0x30] + param_1[0x3c];
    param_1[0x19] = fVar3 * param_1[0x31] + param_1[0x3d];
    param_1[0x1a] = fVar3 * param_1[0x32] + param_1[0x3e];
    param_1[0x1b] = 3.4028235e+38;
    fVar3 = param_1[0x41];
    param_1[0x10] = fVar3 * param_1[0x30] + param_1[0x3c];
    param_1[0x11] = fVar3 * param_1[0x31] + param_1[0x3d];
    param_1[0x12] = fVar3 * param_1[0x32] + param_1[0x3e];
    param_1[0x13] = 3.4028235e+38;
    fVar3 = param_1[0x46];
    param_1[8] = param_1[0x3c] - fVar3 * param_1[0x38];
    param_1[9] = param_1[0x3d] - fVar3 * param_1[0x39];
    param_1[10] = param_1[0x3e] - fVar3 * param_1[0x3a];
    param_1[0xb] = 3.4028235e+38;
    fVar3 = param_1[0x45];
    *param_1 = param_1[0x3c] - fVar3 * param_1[0x38];
    param_1[1] = param_1[0x3d] - fVar3 * param_1[0x39];
    param_1[2] = param_1[0x3e] - fVar3 * param_1[0x3a];
    param_1[3] = 3.4028235e+38;
    param_1[0x24] = -param_1[0x34];
    param_1[0x25] = -param_1[0x35];
    param_1[0x26] = -param_1[0x36];
    param_1[0x27] = 3.4028235e+38;
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_1 + 0x34);
    *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_1 + 0x36);
    param_1[0x1c] = -param_1[0x30];
    param_1[0x1d] = -param_1[0x31];
    param_1[0x1e] = -param_1[0x32];
    param_1[0x1f] = 3.4028235e+38;
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_1 + 0x32);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x3a);
    fVar1 = param_1[0x38];
    fVar2 = param_1[0x39];
    fVar3 = param_1[0x3a];
  }
  else {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x3c);
    *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_1 + 0x3e);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x3c);
    *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_1 + 0x3e);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x3c);
    *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_1 + 0x3e);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x3c);
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_1 + 0x3e);
    fVar3 = param_1[0x45];
    fVar1 = param_1[0x43];
    param_1[0x24] = -(fVar3 * param_1[0x34]) - fVar1 * param_1[0x38];
    param_1[0x25] = -(fVar3 * param_1[0x35]) - fVar1 * param_1[0x39];
    param_1[0x26] = -(fVar3 * param_1[0x36]) - fVar1 * param_1[0x3a];
    param_1[0x27] = 3.4028235e+38;
    fVar3 = param_1[0x45];
    fVar1 = param_1[0x44];
    param_1[0x2c] = fVar1 * param_1[0x38] + fVar3 * param_1[0x34];
    param_1[0x2d] = fVar1 * param_1[0x39] + fVar3 * param_1[0x35];
    param_1[0x2e] = fVar1 * param_1[0x3a] + fVar3 * param_1[0x36];
    param_1[0x2f] = 3.4028235e+38;
    fVar3 = param_1[0x45];
    fVar1 = param_1[0x42];
    param_1[0x1c] = -(fVar3 * param_1[0x30]) - fVar1 * param_1[0x38];
    param_1[0x1d] = -(fVar3 * param_1[0x31]) - fVar1 * param_1[0x39];
    param_1[0x1e] = -(fVar3 * param_1[0x32]) - fVar1 * param_1[0x3a];
    param_1[0x1f] = 3.4028235e+38;
    fVar3 = param_1[0x45];
    fVar1 = param_1[0x41];
    param_1[0x14] = fVar1 * param_1[0x38] + fVar3 * param_1[0x30];
    param_1[0x15] = fVar3 * param_1[0x31] + fVar1 * param_1[0x39];
    param_1[0x16] = fVar1 * param_1[0x3a] + fVar3 * param_1[0x32];
    param_1[0x17] = 3.4028235e+38;
    fVar3 = param_1[0x25];
    fVar1 = param_1[0x24];
    fVar2 = param_1[0x26];
    fVar4 = fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2;
    auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar5 = auVar6._0_4_;
    fVar4 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
    param_1[0x24] = fVar1 * fVar4;
    param_1[0x25] = fVar3 * fVar4;
    param_1[0x26] = fVar2 * fVar4;
    fVar3 = param_1[0x2d];
    fVar1 = param_1[0x2c];
    fVar2 = param_1[0x2e];
    fVar4 = fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2;
    auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar5 = auVar6._0_4_;
    fVar4 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
    param_1[0x2c] = fVar1 * fVar4;
    param_1[0x2d] = fVar3 * fVar4;
    param_1[0x2e] = fVar2 * fVar4;
    fVar3 = param_1[0x1d];
    fVar1 = param_1[0x1c];
    fVar2 = param_1[0x1e];
    fVar4 = fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2;
    auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar5 = auVar6._0_4_;
    fVar4 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
    param_1[0x1c] = fVar1 * fVar4;
    param_1[0x1d] = fVar3 * fVar4;
    param_1[0x1e] = fVar2 * fVar4;
    fVar3 = param_1[0x15];
    fVar1 = param_1[0x14];
    fVar2 = param_1[0x16];
    fVar4 = fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2;
    auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar5 = auVar6._0_4_;
    fVar4 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
    param_1[0x14] = fVar1 * fVar4;
    param_1[0x15] = fVar3 * fVar4;
    param_1[0x16] = fVar2 * fVar4;
    fVar3 = param_1[0x46];
    param_1[8] = param_1[0x3c] - fVar3 * param_1[0x38];
    param_1[9] = param_1[0x3d] - fVar3 * param_1[0x39];
    param_1[10] = param_1[0x3e] - fVar3 * param_1[0x3a];
    param_1[0xb] = 3.4028235e+38;
    fVar3 = param_1[0x45];
    *param_1 = param_1[0x3c] - fVar3 * param_1[0x38];
    param_1[1] = param_1[0x3d] - fVar3 * param_1[0x39];
    param_1[2] = param_1[0x3e] - fVar3 * param_1[0x3a];
    param_1[3] = 3.4028235e+38;
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x3a);
    fVar1 = param_1[0x38];
    fVar2 = param_1[0x39];
    fVar3 = param_1[0x3a];
  }
  param_1[4] = -fVar1;
  param_1[5] = -fVar2;
  param_1[6] = -fVar3;
  param_1[7] = 3.4028235e+38;
  return;
}



undefined8 * FUN_180286f50(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_48 [72];
  
  if (*(char *)(param_1 + 0x124) == '\0') {
    puVar6 = (undefined8 *)(param_1 + 0xc0);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 200);
    *param_2 = *(undefined8 *)(param_1 + 0xc0);
    param_2[1] = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0xd8);
    param_2[2] = *(undefined8 *)(param_1 + 0xd0);
    param_2[3] = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0xe8);
    param_2[4] = *(undefined8 *)(param_1 + 0xe0);
    param_2[5] = uVar5;
    fVar1 = *(float *)(param_1 + 0xf0);
    uVar2 = *(undefined4 *)(param_1 + 0xf4);
    uVar3 = *(undefined4 *)(param_1 + 0xf8);
    uVar4 = *(undefined4 *)(param_1 + 0xfc);
    *(float *)(param_2 + 6) = fVar1;
    *(undefined4 *)((longlong)param_2 + 0x34) = uVar2;
    *(undefined4 *)(param_2 + 7) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0x3c) = uVar4;
    *(float *)(param_2 + 6) = fVar1 + *(float *)(param_1 + 0x128);
    *(float *)((longlong)param_2 + 0x34) =
         *(float *)(param_1 + 300) + *(float *)((longlong)param_2 + 0x34);
    *(float *)(param_2 + 7) = *(float *)(param_1 + 0x130) + *(float *)(param_2 + 7);
    puVar6 = param_2;
  }
  puVar6 = (undefined8 *)FUN_180287b30(puVar6,auStack_48);
  uVar5 = puVar6[1];
  *param_2 = *puVar6;
  param_2[1] = uVar5;
  uVar5 = puVar6[3];
  param_2[2] = puVar6[2];
  param_2[3] = uVar5;
  uVar5 = puVar6[5];
  param_2[4] = puVar6[4];
  param_2[5] = uVar5;
  uVar5 = puVar6[7];
  param_2[6] = puVar6[6];
  param_2[7] = uVar5;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0x3f800000;
  return param_2;
}





// 函数: void FUN_180287020(longlong param_1,float *param_2,float *param_3,float *param_4)
void FUN_180287020(longlong param_1,float *param_2,float *param_3,float *param_4)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar6 = *param_3 - *param_2;
  fVar7 = param_3[1] - param_2[1];
  fVar13 = param_3[2] - param_2[2];
  fVar2 = fVar7 * fVar7 + fVar6 * fVar6 + fVar13 * fVar13;
  auVar4 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
  fVar3 = auVar4._0_4_;
  fVar5 = fVar3 * 0.5 * (3.0 - fVar2 * fVar3 * fVar3);
  fVar13 = fVar13 * fVar5;
  fVar6 = fVar5 * fVar6;
  fVar5 = fVar5 * fVar7;
  fVar10 = fVar6 * param_4[1] - *param_4 * fVar5;
  fVar12 = fVar5 * param_4[2] - fVar13 * param_4[1];
  fVar11 = fVar13 * *param_4 - fVar6 * param_4[2];
  fVar2 = fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10;
  auVar4 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
  fVar3 = auVar4._0_4_;
  fVar2 = fVar3 * 0.5 * (3.0 - fVar2 * fVar3 * fVar3);
  fVar12 = fVar12 * fVar2;
  fVar11 = fVar11 * fVar2;
  fVar10 = fVar10 * fVar2;
  fVar9 = fVar11 * fVar13 - fVar10 * fVar5;
  fVar8 = fVar10 * fVar6 - fVar12 * fVar13;
  fVar7 = fVar12 * fVar5 - fVar11 * fVar6;
  fVar2 = fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7;
  auVar4 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
  fVar3 = auVar4._0_4_;
  fVar2 = fVar3 * 0.5 * (3.0 - fVar2 * fVar3 * fVar3);
  *(float *)(param_1 + 0xc0) = fVar12;
  *(float *)(param_1 + 0xc4) = fVar11;
  *(float *)(param_1 + 200) = fVar10;
  *(undefined4 *)(param_1 + 0xcc) = 0x7f7fffff;
  *(float *)(param_1 + 0xe0) = -fVar6;
  *(float *)(param_1 + 0xe4) = -fVar5;
  *(float *)(param_1 + 0xe8) = -fVar13;
  *(undefined4 *)(param_1 + 0xec) = 0x7f7fffff;
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 0xf8) = uVar1;
  *(float *)(param_1 + 0xd0) = fVar9 * fVar2;
  *(float *)(param_1 + 0xd4) = fVar8 * fVar2;
  *(float *)(param_1 + 0xd8) = fVar7 * fVar2;
  *(undefined4 *)(param_1 + 0xdc) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0x3f800000;
  return;
}



float * FUN_180287320(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = param_3[1] - *(float *)(param_1 + 0xf4);
  fVar3 = *param_3 - *(float *)(param_1 + 0xf0);
  fVar6 = param_3[2] - *(float *)(param_1 + 0xf8);
  fVar4 = *(float *)(param_1 + 0xc4) * fVar2 + *(float *)(param_1 + 0xc0) * fVar3 +
          *(float *)(param_1 + 200) * fVar6;
  fVar5 = *(float *)(param_1 + 0xd4) * fVar2 + *(float *)(param_1 + 0xd0) * fVar3 +
          *(float *)(param_1 + 0xd8) * fVar6;
  fVar2 = *(float *)(param_1 + 0xe4) * fVar2 + *(float *)(param_1 + 0xe0) * fVar3 +
          *(float *)(param_1 + 0xe8) * fVar6;
  if (*(char *)(param_1 + 0x100) == '\0') {
    fVar4 = fVar4 - *(float *)(param_1 + 0x104);
    fVar6 = (-fVar2 - *(float *)(param_1 + 0x114)) /
            (*(float *)(param_1 + 0x118) - *(float *)(param_1 + 0x114));
    fVar3 = (fVar5 - *(float *)(param_1 + 0x110)) /
            (*(float *)(param_1 + 0x10c) - *(float *)(param_1 + 0x110));
    fVar2 = *(float *)(param_1 + 0x108) - *(float *)(param_1 + 0x104);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x114);
    fVar6 = (-fVar2 - fVar1) / (*(float *)(param_1 + 0x118) - fVar1);
    fVar3 = (-(fVar1 * fVar5 * (1.0 / fVar2)) - *(float *)(param_1 + 0x110)) /
            (*(float *)(param_1 + 0x10c) - *(float *)(param_1 + 0x110));
    fVar4 = -(fVar1 * fVar4 * (1.0 / fVar2)) - *(float *)(param_1 + 0x104);
    fVar2 = *(float *)(param_1 + 0x108) - *(float *)(param_1 + 0x104);
  }
  *param_2 = fVar4 / fVar2;
  param_2[1] = fVar3;
  param_2[2] = fVar6;
  return param_2;
}





// 函数: void FUN_1802874c0(longlong param_1,float *param_2,float *param_3,float *param_4,float *param_5)
void FUN_1802874c0(longlong param_1,float *param_2,float *param_3,float *param_4,float *param_5)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar16 = *(float *)(param_1 + 0x118);
  fVar13 = *param_5;
  fVar17 = fVar16;
  if ((0.0 < fVar13) && (fVar17 = fVar13, fVar16 <= fVar13)) {
    fVar17 = fVar16;
  }
  fVar18 = -*(float *)(param_1 + 0x114);
  fVar15 = (*(float *)(param_1 + 0x108) - *(float *)(param_1 + 0x104)) * *param_4 +
           *(float *)(param_1 + 0x104);
  fVar14 = (*(float *)(param_1 + 0x10c) - *(float *)(param_1 + 0x110)) * param_4[1] +
           *(float *)(param_1 + 0x110);
  fVar16 = fVar15;
  fVar13 = fVar14;
  if (*(char *)(param_1 + 0x100) != '\0') {
    fVar13 = 1.0 / *(float *)(param_1 + 0x114);
    fVar16 = fVar15 * fVar17 * fVar13;
    fVar13 = fVar14 * fVar17 * fVar13;
  }
  fVar1 = *(float *)(param_1 + 0xd4);
  fVar2 = *(float *)(param_1 + 0xd8);
  fVar3 = *(float *)(param_1 + 0xdc);
  fVar17 = -fVar17;
  fVar4 = *(float *)(param_1 + 0xc4);
  fVar5 = *(float *)(param_1 + 200);
  fVar6 = *(float *)(param_1 + 0xcc);
  fVar7 = *(float *)(param_1 + 0xe4);
  fVar8 = *(float *)(param_1 + 0xe8);
  fVar9 = *(float *)(param_1 + 0xec);
  fVar10 = *(float *)(param_1 + 0xf4);
  fVar11 = *(float *)(param_1 + 0xf8);
  fVar12 = *(float *)(param_1 + 0xfc);
  *param_2 = *(float *)(param_1 + 0xd0) * fVar14 + *(float *)(param_1 + 0xc0) * fVar15 +
             *(float *)(param_1 + 0xe0) * fVar18 + *(float *)(param_1 + 0xf0);
  param_2[1] = fVar1 * fVar14 + fVar4 * fVar15 + fVar7 * fVar18 + fVar10;
  param_2[2] = fVar2 * fVar14 + fVar5 * fVar15 + fVar8 * fVar18 + fVar11;
  param_2[3] = fVar3 * fVar14 + fVar6 * fVar15 + fVar9 * fVar18 + fVar12;
  fVar14 = *(float *)(param_1 + 0xd4);
  fVar15 = *(float *)(param_1 + 0xd8);
  fVar18 = *(float *)(param_1 + 0xdc);
  fVar1 = *(float *)(param_1 + 0xc4);
  fVar2 = *(float *)(param_1 + 200);
  fVar3 = *(float *)(param_1 + 0xcc);
  fVar4 = *(float *)(param_1 + 0xe4);
  fVar5 = *(float *)(param_1 + 0xe8);
  fVar6 = *(float *)(param_1 + 0xec);
  fVar7 = *(float *)(param_1 + 0xf4);
  fVar8 = *(float *)(param_1 + 0xf8);
  fVar9 = *(float *)(param_1 + 0xfc);
  *param_3 = *(float *)(param_1 + 0xd0) * fVar13 + *(float *)(param_1 + 0xc0) * fVar16 +
             *(float *)(param_1 + 0xe0) * fVar17 + *(float *)(param_1 + 0xf0);
  param_3[1] = fVar14 * fVar13 + fVar1 * fVar16 + fVar4 * fVar17 + fVar7;
  param_3[2] = fVar15 * fVar13 + fVar2 * fVar16 + fVar5 * fVar17 + fVar8;
  param_3[3] = fVar18 * fVar13 + fVar3 * fVar16 + fVar6 * fVar17 + fVar9;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



