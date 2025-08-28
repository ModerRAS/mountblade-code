#include "TaleWorlds.Native.Split.h"

// 99_part_07_part051.c - 16 个函数

// 函数: void FUN_1804cd9f0(undefined8 param_1,longlong param_2,undefined4 param_3)
void FUN_1804cd9f0(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
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
  undefined8 uVar18;
  longlong in_RAX;
  longlong lVar19;
  uint uVar20;
  undefined8 unaff_RBX;
  ulonglong uVar21;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  ulonglong uVar22;
  ushort uVar23;
  longlong in_R11;
  ushort unaff_R12W;
  longlong unaff_R14;
  longlong unaff_R15;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float in_XMM4_Da;
  float fVar28;
  float in_XMM4_Db;
  float fVar29;
  float in_XMM4_Dc;
  float fVar30;
  float in_XMM4_Dd;
  float fVar31;
  float in_XMM5_Da;
  float in_XMM5_Db;
  float in_XMM5_Dc;
  float in_XMM5_Dd;
  undefined4 unaff_XMM6_Da;
  float fVar32;
  undefined4 unaff_XMM6_Db;
  float fVar33;
  undefined4 unaff_XMM6_Dc;
  float fVar34;
  undefined4 unaff_XMM6_Dd;
  float fVar35;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined8 uStack0000000000000030;
  undefined4 uStack0000000000000038;
  
  *(undefined8 *)(in_R11 + 8) = unaff_RBX;
  uVar21 = 0;
  *(undefined4 *)(in_R11 + -0x28) = unaff_XMM6_Da;
  *(undefined4 *)(in_R11 + -0x24) = unaff_XMM6_Db;
  *(undefined4 *)(in_R11 + -0x20) = unaff_XMM6_Dc;
  *(undefined4 *)(in_R11 + -0x1c) = unaff_XMM6_Dd;
  *(undefined4 *)(in_R11 + -0x38) = unaff_XMM7_Da;
  *(undefined4 *)(in_R11 + -0x34) = unaff_XMM7_Db;
  *(undefined4 *)(in_R11 + -0x30) = unaff_XMM7_Dc;
  *(undefined4 *)(in_R11 + -0x2c) = unaff_XMM7_Dd;
  uStack0000000000000030 = 0;
  *(undefined2 *)(unaff_RBP + -0x7d) = 0xff01;
  *(undefined8 *)(unaff_RBP + -0x79) = 0;
  *(undefined4 *)(unaff_RBP + -0x59) = 0;
  uVar3 = *(undefined4 *)(param_2 + 0x48 + in_RAX * 0x50);
  *(undefined4 *)(unaff_RBP + -0x71) = *(undefined4 *)(param_2 + 0x3c + in_RAX * 0x50);
  *(undefined4 *)(unaff_RBP + -0x6d) = *(undefined4 *)(param_2 + 0x38 + in_RAX * 0x50);
  *(undefined4 *)(unaff_RBP + -0x69) = *(undefined4 *)(param_2 + 0x34 + in_RAX * 0x50);
  *(undefined1 *)(unaff_RBP + -0x65) = *(undefined1 *)(param_2 + 0x30 + in_RAX * 0x50);
  *(undefined4 *)(unaff_RBP + -0x5d) = *(undefined4 *)(param_2 + 0x40 + in_RAX * 0x50);
  uVar4 = *(undefined4 *)(param_2 + 0x44 + in_RAX * 0x50);
  lVar19 = *(longlong *)(unaff_RSI + 8);
  *(undefined4 *)(unaff_RBP + -0x39) = uVar3;
  *(undefined4 *)(unaff_RBP + -0x61) = uVar4;
  uVar22 = (ulonglong)*(ushort *)(unaff_R14 + 0x24 + unaff_R15);
  *(undefined2 *)(unaff_RBP + -0x55) = 0x400;
  *(undefined8 *)(unaff_RBP + -0x51) = 0;
  *(undefined4 *)(unaff_RBP + -0x49) = 0;
  *(undefined8 *)(unaff_RBP + -0x41) = 0;
  lVar5 = *(longlong *)(unaff_RSI + 0x90);
  *(undefined1 *)(unaff_RBP + -0x35) = 0;
  *(undefined8 *)(unaff_RBP + -0x21) = 0;
  pfVar1 = (float *)(lVar5 + 0x28 + uVar22 * 0x48);
  fVar6 = *pfVar1;
  fVar7 = pfVar1[1];
  fVar8 = pfVar1[2];
  fVar9 = pfVar1[3];
  pfVar1 = (float *)(lVar5 + 8 + uVar22 * 0x48);
  fVar10 = *pfVar1;
  fVar11 = pfVar1[1];
  fVar12 = pfVar1[2];
  fVar13 = pfVar1[3];
  pfVar1 = (float *)(lVar5 + 0x18 + uVar22 * 0x48);
  fVar14 = *pfVar1;
  fVar15 = pfVar1[1];
  fVar16 = pfVar1[2];
  fVar17 = pfVar1[3];
  puVar2 = (undefined8 *)(lVar5 + 0x38 + uVar22 * 0x48);
  uVar18 = puVar2[1];
  lVar5 = *(longlong *)(unaff_RSI + 0x10);
  fVar32 = fVar10 * 0.0;
  fVar33 = fVar11 * 0.0;
  fVar34 = fVar12 * 0.0;
  fVar35 = fVar13 * 0.0;
  *(undefined8 *)(unaff_RBP + 0x17) = *puVar2;
  *(undefined8 *)(unaff_RBP + 0x1f) = uVar18;
  fVar24 = fVar6 * 0.0;
  fVar25 = fVar7 * 0.0;
  fVar26 = fVar8 * 0.0;
  fVar27 = fVar9 * 0.0;
  fVar28 = in_XMM4_Da * fVar14;
  fVar29 = in_XMM4_Db * fVar15;
  fVar30 = in_XMM4_Dc * fVar16;
  fVar31 = in_XMM4_Dd * fVar17;
  *(float *)(unaff_RBP + -0x19) = in_XMM5_Da * fVar10 + fVar28 + fVar24;
  *(float *)(unaff_RBP + -0x15) = in_XMM5_Db * fVar11 + fVar29 + fVar25;
  *(float *)(unaff_RBP + -0x11) = in_XMM5_Dc * fVar12 + fVar30 + fVar26;
  *(float *)(unaff_RBP + -0xd) = in_XMM5_Dd * fVar13 + fVar31 + fVar27;
  *(float *)(unaff_RBP + -9) = in_XMM5_Da * fVar14 + fVar32 + fVar24;
  *(float *)(unaff_RBP + -5) = in_XMM5_Db * fVar15 + fVar33 + fVar25;
  *(float *)(unaff_RBP + -1) = in_XMM5_Dc * fVar16 + fVar34 + fVar26;
  *(float *)(unaff_RBP + 3) = in_XMM5_Dd * fVar17 + fVar35 + fVar27;
  *(float *)(unaff_RBP + 7) = fVar6 * 1.0 + fVar32 + fVar28;
  *(float *)(unaff_RBP + 0xb) = fVar7 * 1.0 + fVar33 + fVar29;
  *(float *)(unaff_RBP + 0xf) = fVar8 * 1.0 + fVar34 + fVar30;
  *(float *)(unaff_RBP + 0x13) = fVar9 * 1.0 + fVar35 + fVar31;
  if (lVar5 - lVar19 >> 3 != 0) {
    *(undefined8 *)(in_R11 + 0x10) = unaff_RDI;
    uVar22 = uVar21;
    uStack0000000000000038 = param_3;
    do {
      uVar23 = 1 << ((byte)uVar21 & 0x1f);
      if ((1 < *(int *)(*(longlong *)(lVar19 + uVar22) + 0x178)) &&
         ((uVar23 & unaff_R12W) == uVar23)) {
        FUN_180077750(*(undefined8 *)(unaff_R14 + 8 + unaff_R15),*(longlong *)(lVar19 + uVar22),
                      unaff_RBP + -0x19,0,&stack0x00000030);
      }
      lVar19 = *(longlong *)(unaff_RSI + 8);
      uVar20 = (int)uVar21 + 1;
      uVar21 = (ulonglong)uVar20;
      uVar22 = uVar22 + 8;
    } while ((ulonglong)(longlong)(int)uVar20 <
             (ulonglong)(*(longlong *)(unaff_RSI + 0x10) - lVar19 >> 3));
  }
  return;
}






// 函数: void FUN_1804cd9f9(undefined8 param_1,undefined8 param_2,undefined4 param_3)
void FUN_1804cd9f9(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
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
  undefined8 uVar18;
  longlong in_RAX;
  longlong in_RDX;
  longlong lVar19;
  uint uVar20;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  ulonglong uVar21;
  ushort uVar22;
  longlong in_R11;
  ushort unaff_R12W;
  longlong unaff_R14;
  longlong unaff_R15;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float in_XMM4_Da;
  float fVar27;
  float in_XMM4_Db;
  float fVar28;
  float in_XMM4_Dc;
  float fVar29;
  float in_XMM4_Dd;
  float fVar30;
  float in_XMM5_Da;
  float in_XMM5_Db;
  float in_XMM5_Dc;
  float in_XMM5_Dd;
  undefined4 unaff_XMM6_Da;
  float fVar31;
  undefined4 unaff_XMM6_Db;
  float fVar32;
  undefined4 unaff_XMM6_Dc;
  float fVar33;
  undefined4 unaff_XMM6_Dd;
  float fVar34;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined4 uStack0000000000000038;
  
  *(undefined4 *)(in_R11 + -0x28) = unaff_XMM6_Da;
  *(undefined4 *)(in_R11 + -0x24) = unaff_XMM6_Db;
  *(undefined4 *)(in_R11 + -0x20) = unaff_XMM6_Dc;
  *(undefined4 *)(in_R11 + -0x1c) = unaff_XMM6_Dd;
  *(undefined4 *)(in_R11 + -0x38) = unaff_XMM7_Da;
  *(undefined4 *)(in_R11 + -0x34) = unaff_XMM7_Db;
  *(undefined4 *)(in_R11 + -0x30) = unaff_XMM7_Dc;
  *(undefined4 *)(in_R11 + -0x2c) = unaff_XMM7_Dd;
  *(undefined2 *)(unaff_RBP + -0x7d) = 0xff01;
  *(ulonglong *)(unaff_RBP + -0x79) = unaff_RBX;
  *(int *)(unaff_RBP + -0x59) = (int)unaff_RBX;
  uVar3 = *(undefined4 *)(in_RDX + 0x48 + in_RAX * 0x50);
  *(undefined4 *)(unaff_RBP + -0x71) = *(undefined4 *)(in_RDX + 0x3c + in_RAX * 0x50);
  *(undefined4 *)(unaff_RBP + -0x6d) = *(undefined4 *)(in_RDX + 0x38 + in_RAX * 0x50);
  *(undefined4 *)(unaff_RBP + -0x69) = *(undefined4 *)(in_RDX + 0x34 + in_RAX * 0x50);
  *(undefined1 *)(unaff_RBP + -0x65) = *(undefined1 *)(in_RDX + 0x30 + in_RAX * 0x50);
  *(undefined4 *)(unaff_RBP + -0x5d) = *(undefined4 *)(in_RDX + 0x40 + in_RAX * 0x50);
  uVar4 = *(undefined4 *)(in_RDX + 0x44 + in_RAX * 0x50);
  lVar19 = *(longlong *)(unaff_RSI + 8);
  *(undefined4 *)(unaff_RBP + -0x39) = uVar3;
  *(undefined4 *)(unaff_RBP + -0x61) = uVar4;
  uVar21 = (ulonglong)*(ushort *)(unaff_R14 + 0x24 + unaff_R15);
  *(undefined2 *)(unaff_RBP + -0x55) = 0x400;
  *(ulonglong *)(unaff_RBP + -0x51) = unaff_RBX;
  *(int *)(unaff_RBP + -0x49) = (int)unaff_RBX;
  *(ulonglong *)(unaff_RBP + -0x41) = unaff_RBX;
  lVar5 = *(longlong *)(unaff_RSI + 0x90);
  *(char *)(unaff_RBP + -0x35) = (char)unaff_RBX;
  *(ulonglong *)(unaff_RBP + -0x21) = unaff_RBX;
  pfVar1 = (float *)(lVar5 + 0x28 + uVar21 * 0x48);
  fVar6 = *pfVar1;
  fVar7 = pfVar1[1];
  fVar8 = pfVar1[2];
  fVar9 = pfVar1[3];
  pfVar1 = (float *)(lVar5 + 8 + uVar21 * 0x48);
  fVar10 = *pfVar1;
  fVar11 = pfVar1[1];
  fVar12 = pfVar1[2];
  fVar13 = pfVar1[3];
  pfVar1 = (float *)(lVar5 + 0x18 + uVar21 * 0x48);
  fVar14 = *pfVar1;
  fVar15 = pfVar1[1];
  fVar16 = pfVar1[2];
  fVar17 = pfVar1[3];
  puVar2 = (undefined8 *)(lVar5 + 0x38 + uVar21 * 0x48);
  uVar18 = puVar2[1];
  lVar5 = *(longlong *)(unaff_RSI + 0x10);
  fVar31 = fVar10 * 0.0;
  fVar32 = fVar11 * 0.0;
  fVar33 = fVar12 * 0.0;
  fVar34 = fVar13 * 0.0;
  *(undefined8 *)(unaff_RBP + 0x17) = *puVar2;
  *(undefined8 *)(unaff_RBP + 0x1f) = uVar18;
  fVar23 = fVar6 * 0.0;
  fVar24 = fVar7 * 0.0;
  fVar25 = fVar8 * 0.0;
  fVar26 = fVar9 * 0.0;
  fVar27 = in_XMM4_Da * fVar14;
  fVar28 = in_XMM4_Db * fVar15;
  fVar29 = in_XMM4_Dc * fVar16;
  fVar30 = in_XMM4_Dd * fVar17;
  *(float *)(unaff_RBP + -0x19) = (float)param_2 * fVar10 + fVar27 + fVar23;
  *(float *)(unaff_RBP + -0x15) = (float)((ulonglong)param_2 >> 0x20) * fVar11 + fVar28 + fVar24;
  *(float *)(unaff_RBP + -0x11) = in_XMM1_Dc * fVar12 + fVar29 + fVar25;
  *(float *)(unaff_RBP + -0xd) = in_XMM1_Dd * fVar13 + fVar30 + fVar26;
  *(float *)(unaff_RBP + -9) = in_XMM5_Da * fVar14 + fVar31 + fVar23;
  *(float *)(unaff_RBP + -5) = in_XMM5_Db * fVar15 + fVar32 + fVar24;
  *(float *)(unaff_RBP + -1) = in_XMM5_Dc * fVar16 + fVar33 + fVar25;
  *(float *)(unaff_RBP + 3) = in_XMM5_Dd * fVar17 + fVar34 + fVar26;
  *(float *)(unaff_RBP + 7) = fVar6 * 1.0 + fVar31 + fVar27;
  *(float *)(unaff_RBP + 0xb) = fVar7 * 1.0 + fVar32 + fVar28;
  *(float *)(unaff_RBP + 0xf) = fVar8 * 1.0 + fVar33 + fVar29;
  *(float *)(unaff_RBP + 0x13) = fVar9 * 1.0 + fVar34 + fVar30;
  if (lVar5 - lVar19 >> 3 != 0) {
    *(undefined8 *)(in_R11 + 0x10) = unaff_RDI;
    uVar21 = unaff_RBX & 0xffffffff;
    uStack0000000000000038 = param_3;
    do {
      uVar22 = 1 << ((byte)unaff_RBX & 0x1f);
      if ((1 < *(int *)(*(longlong *)(lVar19 + uVar21) + 0x178)) &&
         ((uVar22 & unaff_R12W) == uVar22)) {
        FUN_180077750(*(undefined8 *)(unaff_R14 + 8 + unaff_R15),*(longlong *)(lVar19 + uVar21),
                      unaff_RBP + -0x19,0,&stack0x00000030);
      }
      lVar19 = *(longlong *)(unaff_RSI + 8);
      uVar20 = (int)unaff_RBX + 1;
      unaff_RBX = (ulonglong)uVar20;
      uVar21 = uVar21 + 8;
    } while ((ulonglong)(longlong)(int)uVar20 <
             (ulonglong)(*(longlong *)(unaff_RSI + 0x10) - lVar19 >> 3));
  }
  return;
}






// 函数: void FUN_1804cdafa(undefined8 param_1,longlong param_2)
void FUN_1804cdafa(undefined8 param_1,longlong param_2)

{
  uint unaff_EBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  ulonglong uVar1;
  ushort uVar2;
  longlong in_R11;
  ushort unaff_R12W;
  longlong unaff_R14;
  longlong unaff_R15;
  
  *(undefined8 *)(in_R11 + 0x10) = unaff_RDI;
  uVar1 = (ulonglong)unaff_EBX;
  do {
    uVar2 = 1 << ((byte)unaff_EBX & 0x1f);
    if ((1 < *(int *)(*(longlong *)(param_2 + uVar1) + 0x178)) && ((uVar2 & unaff_R12W) == uVar2)) {
      FUN_180077750(*(undefined8 *)(unaff_R14 + 8 + unaff_R15),*(longlong *)(param_2 + uVar1),
                    unaff_RBP + -0x19,0,&stack0x00000030);
    }
    param_2 = *(longlong *)(unaff_RSI + 8);
    unaff_EBX = unaff_EBX + 1;
    uVar1 = uVar1 + 8;
  } while ((ulonglong)(longlong)(int)unaff_EBX <
           (ulonglong)(*(longlong *)(unaff_RSI + 0x10) - param_2 >> 3));
  return;
}






// 函数: void FUN_1804cdb67(void)
void FUN_1804cdb67(void)

{
  return;
}






// 函数: void FUN_1804cdb6f(void)
void FUN_1804cdb6f(void)

{
  return;
}






// 函数: void FUN_1804cdb90(longlong param_1,ushort param_2,int param_3,ushort param_4)
void FUN_1804cdb90(longlong param_1,ushort param_2,int param_3,ushort param_4)

{
  longlong lVar1;
  float *pfVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ushort uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uStack_c8;
  int iStack_c0;
  undefined1 uStack_bc;
  char cStack_bb;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined2 uStack_94;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined8 uStack_60;
  ulonglong uVar12;
  
  lVar10 = 0;
  uStack_c8 = 0;
  uStack_98 = 0;
  uStack_94 = 0x400;
  lVar14 = *(longlong *)(param_1 + 0x68) + (ulonglong)param_2 * 0x38 + 8;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uVar7 = (ulonglong)*(ushort *)(lVar14 + 0xc + (longlong)param_3 * 2);
  uStack_74 = 0;
  uStack_60 = 0;
  uStack_bc = 1;
  lVar4 = *(longlong *)(param_1 + 0x1a8 + (longlong)param_3 * 0x28);
  lVar15 = *(longlong *)(param_1 + 0xe0);
  uVar8 = (ulonglong)*(ushort *)(lVar14 + 0x20);
  uStack_b0 = *(undefined4 *)(lVar15 + 0x3c + uVar8 * 0x50);
  uStack_78 = *(undefined4 *)(lVar15 + 0x48 + uVar8 * 0x50);
  uStack_ac = *(undefined4 *)(lVar15 + 0x38 + uVar8 * 0x50);
  uStack_a8 = *(undefined4 *)(lVar15 + 0x34 + uVar8 * 0x50);
  uStack_a4 = *(undefined1 *)(lVar15 + 0x30 + uVar8 * 0x50);
  uStack_9c = *(undefined4 *)(lVar15 + 0x40 + uVar8 * 0x50);
  uStack_a0 = *(undefined4 *)(lVar15 + 0x44 + uVar8 * 0x50);
  uVar8 = (*(longlong *)(lVar4 + 0x10 + uVar7 * 0x28) - *(longlong *)(lVar4 + 8 + uVar7 * 0x28)) /
          0x60;
  lVar15 = lVar10;
  iStack_c0 = param_3;
  if ((char)uVar8 != '\0') {
    do {
      uVar12 = 0;
      lVar5 = *(longlong *)(lVar4 + 8 + uVar7 * 0x28);
      lVar1 = *(longlong *)(param_1 + 0x90) + (ulonglong)*(ushort *)(lVar14 + 0x1c) * 0x48;
      cStack_bb = *(char *)(lVar10 + 0x50 + lVar5);
      if (cStack_bb == -1) {
        uStack_b8 = 0;
      }
      else {
        uStack_b8 = *(undefined8 *)(lVar10 + 0x40 + lVar5);
      }
      lVar13 = *(longlong *)(param_1 + 8);
      uVar16 = uVar12;
      if (*(longlong *)(param_1 + 0x10) - lVar13 >> 3 != 0) {
        do {
          uVar9 = 1 << ((byte)uVar12 & 0x1f);
          if (((((uVar9 & param_4) == uVar9) &&
               (lVar13 = *(longlong *)(uVar16 + lVar13), *(int *)(lVar13 + 0x178) < 2)) &&
              ((*(uint *)(lVar13 + 4) & 0x1000000) == 0)) &&
             ((((lVar6 = *(longlong *)(lVar13 + 0x28), lVar6 == 0 ||
                (fVar18 = *(float *)(lVar10 + 0x54 + lVar5), fVar18 == 3.4028235e+38)) ||
               (fVar19 = *(float *)(lVar1 + 0x3c) - *(float *)(lVar6 + 0x124),
               fVar20 = *(float *)(lVar1 + 0x38) - *(float *)(lVar6 + 0x120),
               fVar17 = *(float *)(lVar1 + 0x40) - *(float *)(lVar6 + 0x128),
               fVar3 = *(float *)(lVar10 + 0x58 + lVar5),
               (fVar20 * fVar20 + fVar19 * fVar19 + fVar17 * fVar17) - fVar3 * fVar3 <=
               fVar18 * fVar18)) &&
              ((fVar18 = *(float *)(lVar13 + 0x174) * 0.2, fVar18 <= 0.0 ||
               (pfVar2 = (float *)(lVar10 + 0x5c + lVar5), fVar18 < *pfVar2 || fVar18 == *pfVar2))))
             )) {
            FUN_180077750(*(undefined8 *)(lVar10 + 0x48 + lVar5),lVar13,lVar1 + 8,0,&uStack_c8);
          }
          lVar13 = *(longlong *)(param_1 + 8);
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
          uVar16 = uVar16 + 8;
        } while ((ulonglong)(longlong)(int)uVar11 <
                 (ulonglong)(*(longlong *)(param_1 + 0x10) - lVar13 >> 3));
      }
      lVar15 = lVar15 + 1;
      lVar10 = lVar10 + 0x60;
    } while (lVar15 < (longlong)(uVar8 & 0xff));
  }
  return;
}






// 函数: void FUN_1804cdcb5(void)
void FUN_1804cdcb5(void)

{
  longlong lVar1;
  float *pfVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  longlong unaff_RBP;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong in_R9;
  longlong in_R10;
  longlong in_R11;
  ulonglong uVar11;
  ushort unaff_R13W;
  ulonglong unaff_R14;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  longlong in_stack_00000030;
  longlong in_stack_00000038;
  longlong in_stack_00000040;
  char cStack000000000000005d;
  ulonglong uStack0000000000000060;
  longlong in_stack_00000120;
  
  uVar7 = unaff_R14 & 0xffffffff;
  uVar11 = unaff_R14 & 0xffffffff;
  do {
    lVar4 = *(longlong *)(in_R11 + 8 + in_R10 * 8);
    lVar1 = *(longlong *)(unaff_RBP + 0x90) + (ulonglong)*(ushort *)(in_R9 + 0x1c) * 0x48;
    cStack000000000000005d = *(char *)(uVar7 + 0x50 + lVar4);
    uStack0000000000000060 = unaff_R14;
    if (cStack000000000000005d != -1) {
      uStack0000000000000060 = *(ulonglong *)(uVar7 + 0x40 + lVar4);
    }
    lVar10 = *(longlong *)(unaff_RBP + 8);
    uVar9 = unaff_R14 & 0xffffffff;
    if (*(longlong *)(unaff_RBP + 0x10) - lVar10 >> 3 != 0) {
      do {
        uVar6 = 1 << ((byte)uVar9 & 0x1f);
        if (((((uVar6 & unaff_R13W) == uVar6) &&
             (lVar10 = *(longlong *)(unaff_R14 + lVar10), *(int *)(lVar10 + 0x178) < 2)) &&
            ((*(uint *)(lVar10 + 4) & 0x1000000) == 0)) &&
           ((((lVar5 = *(longlong *)(lVar10 + 0x28), lVar5 == 0 ||
              (fVar13 = *(float *)(uVar7 + 0x54 + lVar4), fVar13 == 3.4028235e+38)) ||
             (fVar14 = *(float *)(lVar1 + 0x3c) - *(float *)(lVar5 + 0x124),
             fVar15 = *(float *)(lVar1 + 0x38) - *(float *)(lVar5 + 0x120),
             fVar12 = *(float *)(lVar1 + 0x40) - *(float *)(lVar5 + 0x128),
             fVar3 = *(float *)(uVar7 + 0x58 + lVar4),
             (fVar15 * fVar15 + fVar14 * fVar14 + fVar12 * fVar12) - fVar3 * fVar3 <=
             fVar13 * fVar13)) &&
            ((fVar13 = *(float *)(lVar10 + 0x174) * 0.2, fVar13 <= 0.0 ||
             (pfVar2 = (float *)(uVar7 + 0x5c + lVar4), fVar13 < *pfVar2 || fVar13 == *pfVar2))))))
        {
          FUN_180077750(*(undefined8 *)(uVar7 + 0x48 + lVar4),lVar10,lVar1 + 8,0,&stack0x00000050);
        }
        lVar10 = *(longlong *)(unaff_RBP + 8);
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        unaff_R14 = unaff_R14 + 8;
      } while ((ulonglong)(longlong)(int)uVar8 <
               (ulonglong)(*(longlong *)(unaff_RBP + 0x10) - lVar10 >> 3));
      unaff_R14 = 0;
      in_R9 = in_stack_00000120;
      in_R10 = in_stack_00000030;
      in_R11 = in_stack_00000038;
    }
    uVar11 = uVar11 + 1;
    uVar7 = uVar7 + 0x60;
  } while ((longlong)uVar11 < in_stack_00000040);
  return;
}






// 函数: void FUN_1804cdec5(void)
void FUN_1804cdec5(void)

{
  return;
}



undefined8 *
FUN_1804cdee0(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  
  uVar4 = param_4[1];
  *param_1 = *param_4;
  param_1[1] = uVar4;
  uVar4 = param_4[3];
  param_1[2] = param_4[2];
  param_1[3] = uVar4;
  uVar1 = *(undefined4 *)((longlong)param_4 + 0x24);
  uVar2 = *(undefined4 *)(param_4 + 5);
  uVar3 = *(undefined4 *)((longlong)param_4 + 0x2c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_4 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 5) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  uVar1 = *(undefined4 *)((longlong)param_4 + 0x34);
  uVar2 = *(undefined4 *)(param_4 + 7);
  uVar3 = *(undefined4 *)((longlong)param_4 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_4 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 7) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
  param_1[8] = param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  param_1[9] = param_3;
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 0x28))(param_3);
  }
  *(char *)(param_1 + 10) = (char)param_2[0x76];
  *(int *)((longlong)param_1 + 0x54) = (int)param_2[0xd];
  if (*(code **)(*param_2 + 0x198) == (code *)&UNK_18027d990) {
    lVar5 = (longlong)param_2 + 0x214;
  }
  else {
    lVar5 = (**(code **)(*param_2 + 0x198))(param_2);
  }
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(lVar5 + 0x30);
  fVar7 = *(float *)((longlong)param_3 + 0x28c) - *(float *)((longlong)param_3 + 0x27c);
  fVar6 = *(float *)((longlong)param_3 + 0x284) - *(float *)((longlong)param_3 + 0x274);
  if (*(float *)(param_3 + 0x51) - *(float *)(param_3 + 0x4f) <= fVar6) {
    fVar6 = *(float *)(param_3 + 0x51) - *(float *)(param_3 + 0x4f);
  }
  if (fVar7 <= fVar6) {
    fVar6 = fVar7;
  }
  *(float *)((longlong)param_1 + 0x5c) = fVar6;
  return param_1;
}






// 函数: void FUN_1804cdfe0(longlong param_1)
void FUN_1804cdfe0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(undefined1 *)(param_1 + 0x28) = 0xff;
  *(undefined8 *)(param_1 + 0x2c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x34) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x44) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804ce040(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1804ce040(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uVar2 = 0;
  if (param_1[1] != 0) {
    do {
      if (((*(ulonglong *)(*param_1 + (uVar2 & 0xffffffff) * 0x28) & 0xffffffff00000000) != 0) &&
         (*param_1 + ((uVar2 & 0xffffffff) * 5 + 1) * 8 != 0)) {
        FUN_1804ce6b0();
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ulonglong)param_1[1]);
  }
  if (*param_1 == 0) {
    *param_1 = 0;
    param_1[2] = 1;
    param_1[1] = 0;
    param_1[3] = 0xffffffff;
    lVar1 = FUN_18062b420(_DAT_180c8ed18,param_1[4] * 0x28,0x18,param_4,uVar3);
    *param_1 = lVar1;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1804ce100(longlong *param_1)
void FUN_1804ce100(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    uVar3 = 0;
    if (param_1[1] != 0) {
      do {
        lVar2 = *param_1;
        if (((*(ulonglong *)(lVar2 + (uVar3 & 0xffffffff) * 0x28) & 0xffffffff00000000) != 0) &&
           (lVar1 = lVar2 + ((uVar3 & 0xffffffff) * 5 + 1) * 8, lVar1 != 0)) {
          FUN_1804ce6b0(lVar1);
          lVar2 = *param_1;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < (ulonglong)param_1[1]);
    }
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804ce1c0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1804ce1c0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_1[1] != 0) {
    do {
      puVar2 = (ulonglong *)((uVar3 & 0xffffffff) * 0x50 + *param_1);
      if (((*puVar2 & 0xffffffff00000000) != 0) && (puVar2 + 1 != (ulonglong *)0x0)) {
        if ((longlong *)puVar2[5] != (longlong *)0x0) {
          (**(code **)(*(longlong *)puVar2[5] + 0x38))();
        }
        FUN_180057830(puVar2 + 1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulonglong)param_1[1]);
  }
  if (*param_1 == 0) {
    *param_1 = 0;
    param_1[2] = 1;
    param_1[1] = 0;
    param_1[3] = 0xffffffff;
    lVar1 = FUN_18062b420(_DAT_180c8ed18,param_1[4] * 0x50,0x18,param_4,uVar4);
    *param_1 = lVar1;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1804ce2b0(longlong *param_1)
void FUN_1804ce2b0(longlong *param_1)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = 0;
    if (param_1[1] != 0) {
      do {
        lVar1 = *param_1;
        puVar2 = (ulonglong *)((uVar3 & 0xffffffff) * 0x50 + lVar1);
        if (((*puVar2 & 0xffffffff00000000) != 0) && (puVar2 + 1 != (ulonglong *)0x0)) {
          if ((longlong *)puVar2[5] != (longlong *)0x0) {
            (**(code **)(*(longlong *)puVar2[5] + 0x38))();
          }
          FUN_180057830(puVar2 + 1);
          lVar1 = *param_1;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < (ulonglong)param_1[1]);
    }
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804ce510(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1804ce510(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  if (param_1[1] != 0) {
    do {
      puVar2 = (ulonglong *)((uVar4 & 0xffffffff) * 0x38 + *param_1);
      if ((((*puVar2 & 0xffffffff00000000) != 0) &&
          (puVar2 = puVar2 + 1, puVar2 != (ulonglong *)0x0)) &&
         (plVar1 = (longlong *)*puVar2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x38))();
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulonglong)param_1[1]);
  }
  if (*param_1 == 0) {
    *param_1 = 0;
    param_1[2] = 1;
    param_1[1] = 0;
    param_1[3] = 0xffffffff;
    lVar3 = FUN_18062b420(_DAT_180c8ed18,param_1[4] * 0x38,0x18,param_4,uVar5);
    *param_1 = lVar3;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1804ce5d0(longlong *param_1)
void FUN_1804ce5d0(longlong *param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    uVar4 = 0;
    if (param_1[1] != 0) {
      do {
        puVar2 = (ulonglong *)((uVar4 & 0xffffffff) * 0x38 + *param_1);
        if ((((*puVar2 & 0xffffffff00000000) != 0) &&
            (puVar2 = puVar2 + 1, puVar2 != (ulonglong *)0x0)) &&
           (plVar1 = (longlong *)*puVar2, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x38))();
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < (ulonglong)param_1[1]);
      lVar3 = *param_1;
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = 0;
  }
  return;
}



longlong FUN_1804ce670(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x38))();
  }
  FUN_180057830(param_1);
  return param_1;
}






// 函数: void FUN_1804ce6b0(longlong *param_1)
void FUN_1804ce6b0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x60) {
    if (*(longlong **)(lVar2 + 0x48) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 0x48) + 0x38))();
    }
    if (*(longlong **)(lVar2 + 0x40) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 0x40) + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




