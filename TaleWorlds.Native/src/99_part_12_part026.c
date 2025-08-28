#include "TaleWorlds.Native.Split.h"

// 99_part_12_part026.c - 11 个函数

// 函数: void FUN_1807da698(longlong param_1,longlong param_2,uint param_3)
void FUN_1807da698(longlong param_1,longlong param_2,uint param_3)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
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
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  uint uVar33;
  longlong in_RAX;
  ulonglong uVar34;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  uint in_R10D;
  longlong in_R11;
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
  float unaff_XMM14_Da;
  float unaff_XMM14_Db;
  float unaff_XMM14_Dc;
  float unaff_XMM14_Dd;
  float unaff_XMM15_Da;
  float unaff_XMM15_Db;
  float unaff_XMM15_Dc;
  float unaff_XMM15_Dd;
  
  *(undefined8 *)(in_RAX + 8) = unaff_RBX;
  lVar2 = *(longlong *)(param_2 + 8);
  *(undefined8 *)(in_RAX + 0x10) = unaff_RSI;
  lVar3 = *(longlong *)(param_2 + 0x18);
  *(undefined8 *)(in_RAX + -8) = unaff_RDI;
  lVar4 = *(longlong *)(param_2 + 0x10);
  *(undefined4 *)(in_RAX + -0x18) = unaff_XMM6_Da;
  *(undefined4 *)(in_RAX + -0x14) = unaff_XMM6_Db;
  *(undefined4 *)(in_RAX + -0x10) = unaff_XMM6_Dc;
  *(undefined4 *)(in_RAX + -0xc) = unaff_XMM6_Dd;
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
  do {
    uVar33 = in_R10D * 0x20;
    pfVar1 = (float *)(param_1 + (ulonglong)uVar33 * 4);
    fVar5 = *pfVar1;
    fVar6 = pfVar1[1];
    fVar7 = pfVar1[2];
    pfVar1 = (float *)(param_1 + (ulonglong)(uVar33 + 4) * 4);
    fVar8 = *pfVar1;
    fVar9 = pfVar1[1];
    fVar10 = pfVar1[2];
    fVar11 = pfVar1[3];
    pfVar1 = (float *)(param_1 + (ulonglong)(uVar33 + 8) * 4);
    fVar12 = *pfVar1;
    fVar13 = pfVar1[1];
    fVar14 = pfVar1[2];
    pfVar1 = (float *)(param_1 + (ulonglong)(uVar33 + 0xc) * 4);
    fVar15 = *pfVar1;
    fVar16 = pfVar1[1];
    fVar17 = pfVar1[2];
    fVar18 = pfVar1[3];
    pfVar1 = (float *)(param_1 + (ulonglong)(uVar33 + 0x10) * 4);
    fVar19 = *pfVar1;
    fVar20 = pfVar1[1];
    fVar21 = pfVar1[2];
    pfVar1 = (float *)(param_1 + (ulonglong)(uVar33 + 0x14) * 4);
    fVar22 = *pfVar1;
    fVar23 = pfVar1[1];
    fVar24 = pfVar1[2];
    fVar25 = pfVar1[3];
    pfVar1 = (float *)(param_1 + (ulonglong)(uVar33 + 0x18) * 4);
    fVar26 = *pfVar1;
    fVar27 = pfVar1[1];
    fVar28 = pfVar1[2];
    pfVar1 = (float *)(param_1 + (ulonglong)(uVar33 + 0x1c) * 4);
    fVar29 = *pfVar1;
    fVar30 = pfVar1[1];
    fVar31 = pfVar1[2];
    fVar32 = pfVar1[3];
    uVar34 = (ulonglong)(in_R10D * 4);
    in_R10D = in_R10D + 1;
    pfVar1 = (float *)(in_R11 + uVar34 * 4);
    *pfVar1 = fVar6 * unaff_XMM15_Da + fVar5 * unaff_XMM14_Da + fVar7 * 0.7071 + fVar8 * 0.7071;
    pfVar1[1] = fVar13 * unaff_XMM15_Db + fVar12 * unaff_XMM14_Db + fVar14 * 0.7071 +
                fVar15 * 0.7071;
    pfVar1[2] = fVar20 * unaff_XMM15_Dc + fVar19 * unaff_XMM14_Dc + fVar21 * 0.7071 +
                fVar22 * 0.7071;
    pfVar1[3] = fVar27 * unaff_XMM15_Dd + fVar26 * unaff_XMM14_Dd + fVar28 * 0.7071 +
                fVar29 * 0.7071;
    pfVar1 = (float *)(lVar2 + uVar34 * 4);
    *pfVar1 = fVar5 * unaff_XMM15_Da + fVar6 * unaff_XMM14_Da + fVar7 * 0.7071 + fVar9 * 0.7071;
    pfVar1[1] = fVar12 * unaff_XMM15_Db + fVar13 * unaff_XMM14_Db + fVar14 * 0.7071 +
                fVar16 * 0.7071;
    pfVar1[2] = fVar19 * unaff_XMM15_Dc + fVar20 * unaff_XMM14_Dc + fVar21 * 0.7071 +
                fVar23 * 0.7071;
    pfVar1[3] = fVar26 * unaff_XMM15_Dd + fVar27 * unaff_XMM14_Dd + fVar28 * 0.7071 +
                fVar30 * 0.7071;
    pfVar1 = (float *)(lVar4 + uVar34 * 4);
    *pfVar1 = fVar11 * unaff_XMM15_Da + fVar10 * unaff_XMM14_Da + fVar8 * 0.7071;
    pfVar1[1] = fVar18 * unaff_XMM15_Db + fVar17 * unaff_XMM14_Db + fVar15 * 0.7071;
    pfVar1[2] = fVar25 * unaff_XMM15_Dc + fVar24 * unaff_XMM14_Dc + fVar22 * 0.7071;
    pfVar1[3] = fVar32 * unaff_XMM15_Dd + fVar31 * unaff_XMM14_Dd + fVar29 * 0.7071;
    pfVar1 = (float *)(lVar3 + uVar34 * 4);
    *pfVar1 = fVar10 * unaff_XMM15_Da + fVar11 * unaff_XMM14_Da + fVar9 * 0.7071;
    pfVar1[1] = fVar17 * unaff_XMM15_Db + fVar18 * unaff_XMM14_Db + fVar16 * 0.7071;
    pfVar1[2] = fVar24 * unaff_XMM15_Dc + fVar25 * unaff_XMM14_Dc + fVar23 * 0.7071;
    pfVar1[3] = fVar31 * unaff_XMM15_Dd + fVar32 * unaff_XMM14_Dd + fVar30 * 0.7071;
  } while (in_R10D < param_3);
  return;
}






// 函数: void FUN_1807da84a(void)
void FUN_1807da84a(void)

{
  return;
}






// 函数: void FUN_1807da860(longlong param_1,longlong *param_2,uint param_3)
void FUN_1807da860(longlong param_1,longlong *param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
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
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  uint uVar31;
  uint uVar32;
  
  uVar32 = 0;
  if (param_3 >> 2 != 0) {
    lVar4 = *param_2;
    lVar5 = param_2[1];
    do {
      uVar31 = uVar32 * 0x20;
      pfVar1 = (float *)(param_1 + (ulonglong)uVar31 * 4);
      fVar6 = pfVar1[1];
      fVar7 = pfVar1[2];
      pfVar2 = (float *)(param_1 + (ulonglong)(uVar31 + 4) * 4);
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[3];
      pfVar3 = (float *)(param_1 + (ulonglong)(uVar31 + 8) * 4);
      fVar10 = *pfVar3;
      fVar11 = pfVar3[1];
      fVar12 = pfVar3[2];
      pfVar3 = (float *)(param_1 + (ulonglong)(uVar31 + 0xc) * 4);
      fVar13 = *pfVar3;
      fVar14 = pfVar3[1];
      fVar15 = pfVar3[2];
      fVar16 = pfVar3[3];
      pfVar3 = (float *)(param_1 + (ulonglong)(uVar31 + 0x10) * 4);
      fVar17 = *pfVar3;
      fVar18 = pfVar3[1];
      fVar19 = pfVar3[2];
      pfVar3 = (float *)(param_1 + (ulonglong)(uVar31 + 0x14) * 4);
      fVar20 = *pfVar3;
      fVar21 = pfVar3[1];
      fVar22 = pfVar3[2];
      fVar23 = pfVar3[3];
      pfVar3 = (float *)(param_1 + (ulonglong)(uVar31 + 0x18) * 4);
      fVar24 = *pfVar3;
      fVar25 = pfVar3[1];
      fVar26 = pfVar3[2];
      pfVar3 = (float *)(param_1 + (ulonglong)(uVar31 + 0x1c) * 4);
      fVar27 = *pfVar3;
      fVar28 = pfVar3[1];
      fVar29 = pfVar3[2];
      fVar30 = pfVar3[3];
      uVar31 = uVar32 * 4;
      uVar32 = uVar32 + 1;
      pfVar3 = (float *)(lVar4 + (ulonglong)uVar31 * 4);
      *pfVar3 = pfVar2[2] * 0.596 + *pfVar1 + (*pfVar2 + fVar7) * 0.7071;
      pfVar3[1] = fVar15 * 0.596 + fVar10 + (fVar13 + fVar12) * 0.7071;
      pfVar3[2] = fVar22 * 0.596 + fVar17 + (fVar20 + fVar19) * 0.7071;
      pfVar3[3] = fVar29 * 0.596 + fVar24 + (fVar27 + fVar26) * 0.7071;
      pfVar1 = (float *)(lVar5 + (ulonglong)uVar31 * 4);
      *pfVar1 = fVar9 * 0.596 + fVar6 + (fVar8 + fVar7) * 0.7071;
      pfVar1[1] = fVar16 * 0.596 + fVar11 + (fVar14 + fVar12) * 0.7071;
      pfVar1[2] = fVar23 * 0.596 + fVar18 + (fVar21 + fVar19) * 0.7071;
      pfVar1[3] = fVar30 * 0.596 + fVar25 + (fVar28 + fVar26) * 0.7071;
    } while (uVar32 < param_3 >> 2);
  }
  return;
}






// 函数: void FUN_1807da897(longlong param_1,longlong param_2,uint param_3)
void FUN_1807da897(longlong param_1,longlong param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
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
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  uint uVar30;
  longlong in_RAX;
  undefined8 unaff_RBX;
  uint in_R10D;
  longlong in_R11;
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
  float unaff_XMM12_Da;
  float unaff_XMM12_Db;
  float unaff_XMM12_Dc;
  float unaff_XMM12_Dd;
  float unaff_XMM13_Da;
  float unaff_XMM13_Db;
  float unaff_XMM13_Dc;
  float unaff_XMM13_Dd;
  
  *(undefined8 *)(in_RAX + -8) = unaff_RBX;
  lVar4 = *(longlong *)(param_2 + 8);
  *(undefined4 *)(in_RAX + -0x18) = unaff_XMM6_Da;
  *(undefined4 *)(in_RAX + -0x14) = unaff_XMM6_Db;
  *(undefined4 *)(in_RAX + -0x10) = unaff_XMM6_Dc;
  *(undefined4 *)(in_RAX + -0xc) = unaff_XMM6_Dd;
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
  do {
    uVar30 = in_R10D * 0x20;
    pfVar1 = (float *)(param_1 + (ulonglong)uVar30 * 4);
    fVar5 = pfVar1[1];
    fVar6 = pfVar1[2];
    pfVar2 = (float *)(param_1 + (ulonglong)(uVar30 + 4) * 4);
    fVar7 = pfVar2[1];
    fVar8 = pfVar2[3];
    pfVar3 = (float *)(param_1 + (ulonglong)(uVar30 + 8) * 4);
    fVar9 = *pfVar3;
    fVar10 = pfVar3[1];
    fVar11 = pfVar3[2];
    pfVar3 = (float *)(param_1 + (ulonglong)(uVar30 + 0xc) * 4);
    fVar12 = *pfVar3;
    fVar13 = pfVar3[1];
    fVar14 = pfVar3[2];
    fVar15 = pfVar3[3];
    pfVar3 = (float *)(param_1 + (ulonglong)(uVar30 + 0x10) * 4);
    fVar16 = *pfVar3;
    fVar17 = pfVar3[1];
    fVar18 = pfVar3[2];
    pfVar3 = (float *)(param_1 + (ulonglong)(uVar30 + 0x14) * 4);
    fVar19 = *pfVar3;
    fVar20 = pfVar3[1];
    fVar21 = pfVar3[2];
    fVar22 = pfVar3[3];
    pfVar3 = (float *)(param_1 + (ulonglong)(uVar30 + 0x18) * 4);
    fVar23 = *pfVar3;
    fVar24 = pfVar3[1];
    fVar25 = pfVar3[2];
    pfVar3 = (float *)(param_1 + (ulonglong)(uVar30 + 0x1c) * 4);
    fVar26 = *pfVar3;
    fVar27 = pfVar3[1];
    fVar28 = pfVar3[2];
    fVar29 = pfVar3[3];
    uVar30 = in_R10D * 4;
    in_R10D = in_R10D + 1;
    pfVar3 = (float *)(in_R11 + (ulonglong)uVar30 * 4);
    *pfVar3 = pfVar2[2] * unaff_XMM13_Da + *pfVar1 + (*pfVar2 + fVar6) * unaff_XMM12_Da;
    pfVar3[1] = fVar14 * unaff_XMM13_Db + fVar9 + (fVar12 + fVar11) * unaff_XMM12_Db;
    pfVar3[2] = fVar21 * unaff_XMM13_Dc + fVar16 + (fVar19 + fVar18) * unaff_XMM12_Dc;
    pfVar3[3] = fVar28 * unaff_XMM13_Dd + fVar23 + (fVar26 + fVar25) * unaff_XMM12_Dd;
    pfVar1 = (float *)(lVar4 + (ulonglong)uVar30 * 4);
    *pfVar1 = fVar8 * unaff_XMM13_Da + fVar5 + (fVar7 + fVar6) * unaff_XMM12_Da;
    pfVar1[1] = fVar15 * unaff_XMM13_Db + fVar10 + (fVar13 + fVar11) * unaff_XMM12_Db;
    pfVar1[2] = fVar22 * unaff_XMM13_Dc + fVar17 + (fVar20 + fVar18) * unaff_XMM12_Dc;
    pfVar1[3] = fVar29 * unaff_XMM13_Dd + fVar24 + (fVar27 + fVar25) * unaff_XMM12_Dd;
  } while (in_R10D < param_3);
  return;
}






// 函数: void FUN_1807da9bd(void)
void FUN_1807da9bd(void)

{
  return;
}






// 函数: void FUN_1807da9d0(longlong param_1,longlong *param_2,uint param_3)
void FUN_1807da9d0(longlong param_1,longlong *param_2,uint param_3)

{
  float *pfVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
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
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  ulonglong uVar26;
  uint uVar27;
  
  uVar27 = 0;
  if (param_3 >> 2 != 0) {
    lVar3 = *param_2;
    lVar4 = param_2[1];
    lVar5 = param_2[4];
    lVar6 = param_2[3];
    lVar7 = param_2[2];
    lVar8 = param_2[5];
    do {
      uVar25 = uVar27 * 0x10;
      pfVar1 = (float *)(param_1 + (ulonglong)uVar25 * 4);
      fVar9 = *pfVar1;
      fVar10 = pfVar1[1];
      fVar11 = pfVar1[2];
      fVar12 = pfVar1[3];
      pfVar1 = (float *)(param_1 + (ulonglong)(uVar25 + 4) * 4);
      fVar13 = *pfVar1;
      fVar14 = pfVar1[1];
      fVar15 = pfVar1[2];
      fVar16 = pfVar1[3];
      pfVar1 = (float *)(param_1 + (ulonglong)(uVar25 + 8) * 4);
      fVar17 = *pfVar1;
      fVar18 = pfVar1[1];
      fVar19 = pfVar1[2];
      fVar20 = pfVar1[3];
      pfVar1 = (float *)(param_1 + (ulonglong)(uVar25 + 0xc) * 4);
      fVar21 = *pfVar1;
      fVar22 = pfVar1[1];
      fVar23 = pfVar1[2];
      fVar24 = pfVar1[3];
      uVar26 = (ulonglong)(uVar27 * 4);
      uVar27 = uVar27 + 1;
      pfVar1 = (float *)(lVar3 + uVar26 * 4);
      *pfVar1 = fVar9 * 0.9616;
      pfVar1[1] = fVar13 * 0.9616;
      pfVar1[2] = fVar17 * 0.9616;
      pfVar1[3] = fVar21 * 0.9616;
      pfVar1 = (float *)(lVar4 + uVar26 * 4);
      *pfVar1 = fVar10 * 0.9616;
      pfVar1[1] = fVar14 * 0.9616;
      pfVar1[2] = fVar18 * 0.9616;
      pfVar1[3] = fVar22 * 0.9616;
      puVar2 = (undefined8 *)(lVar7 + uVar26 * 4);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(lVar6 + uVar26 * 4);
      *puVar2 = 0;
      puVar2[1] = 0;
      pfVar1 = (float *)(lVar5 + uVar26 * 4);
      *pfVar1 = fVar11 * 0.9603 + fVar9 * 0.2746 + fVar12 * 0.4226;
      pfVar1[1] = fVar15 * 0.9603 + fVar13 * 0.2746 + fVar16 * 0.4226;
      pfVar1[2] = fVar19 * 0.9603 + fVar17 * 0.2746 + fVar20 * 0.4226;
      pfVar1[3] = fVar23 * 0.9603 + fVar21 * 0.2746 + fVar24 * 0.4226;
      pfVar1 = (float *)(lVar8 + uVar26 * 4);
      *pfVar1 = fVar10 * 0.2746 + fVar11 * 0.4226 + fVar12 * 0.9603;
      pfVar1[1] = fVar14 * 0.2746 + fVar15 * 0.4226 + fVar16 * 0.9603;
      pfVar1[2] = fVar18 * 0.2746 + fVar19 * 0.4226 + fVar20 * 0.9603;
      pfVar1[3] = fVar22 * 0.2746 + fVar23 * 0.4226 + fVar24 * 0.9603;
    } while (uVar27 < param_3 >> 2);
  }
  return;
}






// 函数: void FUN_1807daa27(longlong param_1,longlong param_2,uint param_3,uint param_4)
void FUN_1807daa27(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
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
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint uVar24;
  longlong in_RAX;
  ulonglong uVar25;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  longlong in_R11;
  undefined8 unaff_R14;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  float unaff_XMM8_Da;
  float unaff_XMM8_Db;
  float unaff_XMM8_Dc;
  float unaff_XMM8_Dd;
  float unaff_XMM9_Da;
  float unaff_XMM9_Db;
  float unaff_XMM9_Dc;
  float unaff_XMM9_Dd;
  float unaff_XMM10_Da;
  float unaff_XMM10_Db;
  float unaff_XMM10_Dc;
  float unaff_XMM10_Dd;
  float unaff_XMM11_Da;
  float unaff_XMM11_Db;
  float unaff_XMM11_Dc;
  float unaff_XMM11_Dd;
  undefined4 unaff_XMM12_Da;
  undefined4 unaff_XMM12_Db;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM12_Dd;
  
  *(undefined8 *)(in_RAX + 8) = unaff_RBX;
  lVar3 = *(longlong *)(param_2 + 8);
  *(undefined8 *)(in_RAX + 0x10) = unaff_RBP;
  lVar4 = *(longlong *)(param_2 + 0x20);
  *(undefined8 *)(in_RAX + 0x18) = unaff_RSI;
  lVar5 = *(longlong *)(param_2 + 0x18);
  *(undefined8 *)(in_RAX + 0x20) = unaff_RDI;
  lVar6 = *(longlong *)(param_2 + 0x10);
  *(undefined8 *)(in_RAX + -8) = unaff_R14;
  lVar7 = *(longlong *)(param_2 + 0x28);
  *(undefined4 *)(in_RAX + -0x18) = unaff_XMM6_Da;
  *(undefined4 *)(in_RAX + -0x14) = unaff_XMM6_Db;
  *(undefined4 *)(in_RAX + -0x10) = unaff_XMM6_Dc;
  *(undefined4 *)(in_RAX + -0xc) = unaff_XMM6_Dd;
  *(undefined4 *)(in_RAX + -0x28) = unaff_XMM7_Da;
  *(undefined4 *)(in_RAX + -0x24) = unaff_XMM7_Db;
  *(undefined4 *)(in_RAX + -0x20) = unaff_XMM7_Dc;
  *(undefined4 *)(in_RAX + -0x1c) = unaff_XMM7_Dd;
  do {
    uVar24 = param_4 * 0x10;
    pfVar1 = (float *)(param_1 + (ulonglong)uVar24 * 4);
    fVar8 = *pfVar1;
    fVar9 = pfVar1[1];
    fVar10 = pfVar1[2];
    fVar11 = pfVar1[3];
    pfVar1 = (float *)(param_1 + (ulonglong)(uVar24 + 4) * 4);
    fVar12 = *pfVar1;
    fVar13 = pfVar1[1];
    fVar14 = pfVar1[2];
    fVar15 = pfVar1[3];
    pfVar1 = (float *)(param_1 + (ulonglong)(uVar24 + 8) * 4);
    fVar16 = *pfVar1;
    fVar17 = pfVar1[1];
    fVar18 = pfVar1[2];
    fVar19 = pfVar1[3];
    pfVar1 = (float *)(param_1 + (ulonglong)(uVar24 + 0xc) * 4);
    fVar20 = *pfVar1;
    fVar21 = pfVar1[1];
    fVar22 = pfVar1[2];
    fVar23 = pfVar1[3];
    uVar25 = (ulonglong)(param_4 * 4);
    param_4 = param_4 + 1;
    pfVar1 = (float *)(in_R11 + uVar25 * 4);
    *pfVar1 = fVar8 * unaff_XMM8_Da;
    pfVar1[1] = fVar12 * unaff_XMM8_Db;
    pfVar1[2] = fVar16 * unaff_XMM8_Dc;
    pfVar1[3] = fVar20 * unaff_XMM8_Dd;
    pfVar1 = (float *)(lVar3 + uVar25 * 4);
    *pfVar1 = fVar9 * unaff_XMM8_Da;
    pfVar1[1] = fVar13 * unaff_XMM8_Db;
    pfVar1[2] = fVar17 * unaff_XMM8_Dc;
    pfVar1[3] = fVar21 * unaff_XMM8_Dd;
    puVar2 = (undefined4 *)(lVar6 + uVar25 * 4);
    *puVar2 = unaff_XMM12_Da;
    puVar2[1] = unaff_XMM12_Db;
    puVar2[2] = unaff_XMM12_Dc;
    puVar2[3] = unaff_XMM12_Dd;
    puVar2 = (undefined4 *)(lVar5 + uVar25 * 4);
    *puVar2 = unaff_XMM12_Da;
    puVar2[1] = unaff_XMM12_Db;
    puVar2[2] = unaff_XMM12_Dc;
    puVar2[3] = unaff_XMM12_Dd;
    pfVar1 = (float *)(lVar4 + uVar25 * 4);
    *pfVar1 = fVar10 * unaff_XMM9_Da + fVar8 * unaff_XMM11_Da + fVar11 * unaff_XMM10_Da;
    pfVar1[1] = fVar14 * unaff_XMM9_Db + fVar12 * unaff_XMM11_Db + fVar15 * unaff_XMM10_Db;
    pfVar1[2] = fVar18 * unaff_XMM9_Dc + fVar16 * unaff_XMM11_Dc + fVar19 * unaff_XMM10_Dc;
    pfVar1[3] = fVar22 * unaff_XMM9_Dd + fVar20 * unaff_XMM11_Dd + fVar23 * unaff_XMM10_Dd;
    pfVar1 = (float *)(lVar7 + uVar25 * 4);
    *pfVar1 = fVar9 * unaff_XMM11_Da + fVar10 * unaff_XMM10_Da + fVar11 * unaff_XMM9_Da;
    pfVar1[1] = fVar13 * unaff_XMM11_Db + fVar14 * unaff_XMM10_Db + fVar15 * unaff_XMM9_Db;
    pfVar1[2] = fVar17 * unaff_XMM11_Dc + fVar18 * unaff_XMM10_Dc + fVar19 * unaff_XMM9_Dc;
    pfVar1[3] = fVar21 * unaff_XMM11_Dd + fVar22 * unaff_XMM10_Dd + fVar23 * unaff_XMM9_Dd;
  } while (param_4 < param_3);
  return;
}






// 函数: void FUN_1807dab3d(void)
void FUN_1807dab3d(void)

{
  return;
}






// 函数: void FUN_1807dab60(longlong param_1,longlong *param_2,uint param_3)
void FUN_1807dab60(longlong param_1,longlong *param_2,uint param_3)

{
  float *pfVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint uVar27;
  ulonglong uVar28;
  uint uVar29;
  
  uVar29 = 0;
  if (param_3 >> 2 != 0) {
    lVar3 = *param_2;
    lVar4 = param_2[1];
    lVar5 = param_2[4];
    lVar6 = param_2[3];
    lVar7 = param_2[2];
    lVar8 = param_2[7];
    lVar9 = param_2[5];
    lVar10 = param_2[6];
    do {
      uVar27 = uVar29 * 0x10;
      pfVar1 = (float *)(param_1 + (ulonglong)uVar27 * 4);
      fVar11 = *pfVar1;
      fVar12 = pfVar1[1];
      fVar13 = pfVar1[2];
      fVar14 = pfVar1[3];
      pfVar1 = (float *)(param_1 + (ulonglong)(uVar27 + 4) * 4);
      fVar15 = *pfVar1;
      fVar16 = pfVar1[1];
      fVar17 = pfVar1[2];
      fVar18 = pfVar1[3];
      pfVar1 = (float *)(param_1 + (ulonglong)(uVar27 + 8) * 4);
      fVar19 = *pfVar1;
      fVar20 = pfVar1[1];
      fVar21 = pfVar1[2];
      fVar22 = pfVar1[3];
      pfVar1 = (float *)(param_1 + (ulonglong)(uVar27 + 0xc) * 4);
      fVar23 = *pfVar1;
      fVar24 = pfVar1[1];
      fVar25 = pfVar1[2];
      fVar26 = pfVar1[3];
      uVar28 = (ulonglong)(uVar29 * 4);
      uVar29 = uVar29 + 1;
      pfVar1 = (float *)(lVar3 + uVar28 * 4);
      *pfVar1 = fVar11 * 0.9391;
      pfVar1[1] = fVar15 * 0.9391;
      pfVar1[2] = fVar19 * 0.9391;
      pfVar1[3] = fVar23 * 0.9391;
      pfVar1 = (float *)(lVar4 + uVar28 * 4);
      *pfVar1 = fVar12 * 0.9391;
      pfVar1[1] = fVar16 * 0.9391;
      pfVar1[2] = fVar20 * 0.9391;
      pfVar1[3] = fVar24 * 0.9391;
      puVar2 = (undefined8 *)(lVar7 + uVar28 * 4);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(lVar6 + uVar28 * 4);
      *puVar2 = 0;
      puVar2[1] = 0;
      pfVar1 = (float *)(lVar5 + uVar28 * 4);
      *pfVar1 = (fVar13 + fVar11) * 0.3437;
      pfVar1[1] = (fVar17 + fVar15) * 0.3437;
      pfVar1[2] = (fVar21 + fVar19) * 0.3437;
      pfVar1[3] = (fVar25 + fVar23) * 0.3437;
      pfVar1 = (float *)(lVar9 + uVar28 * 4);
      *pfVar1 = (fVar14 + fVar12) * 0.3437;
      pfVar1[1] = (fVar18 + fVar16) * 0.3437;
      pfVar1[2] = (fVar22 + fVar20) * 0.3437;
      pfVar1[3] = (fVar26 + fVar24) * 0.3437;
      pfVar1 = (float *)(lVar10 + uVar28 * 4);
      *pfVar1 = fVar13 * 0.9391;
      pfVar1[1] = fVar17 * 0.9391;
      pfVar1[2] = fVar21 * 0.9391;
      pfVar1[3] = fVar25 * 0.9391;
      pfVar1 = (float *)(lVar8 + uVar28 * 4);
      *pfVar1 = fVar14 * 0.9391;
      pfVar1[1] = fVar18 * 0.9391;
      pfVar1[2] = fVar22 * 0.9391;
      pfVar1[3] = fVar26 * 0.9391;
    } while (uVar29 < param_3 >> 2);
  }
  return;
}






// 函数: void FUN_1807dab9d(longlong param_1,longlong param_2,uint param_3,uint param_4)
void FUN_1807dab9d(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  longlong in_RAX;
  ulonglong uVar27;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  longlong in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  float unaff_XMM8_Da;
  float unaff_XMM8_Db;
  float unaff_XMM8_Dc;
  float unaff_XMM8_Dd;
  float unaff_XMM9_Da;
  float unaff_XMM9_Db;
  float unaff_XMM9_Dc;
  float unaff_XMM9_Dd;
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM10_Db;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM10_Dd;
  
  *(undefined8 *)(in_RAX + 8) = unaff_RBX;
  lVar3 = *(longlong *)(param_2 + 8);
  *(undefined8 *)(in_RAX + 0x10) = unaff_RBP;
  lVar4 = *(longlong *)(param_2 + 0x20);
  *(undefined8 *)(in_RAX + 0x18) = unaff_RSI;
  lVar5 = *(longlong *)(param_2 + 0x18);
  *(undefined8 *)(in_RAX + 0x20) = unaff_RDI;
  lVar6 = *(longlong *)(param_2 + 0x10);
  *(undefined8 *)(in_RAX + -8) = unaff_R12;
  lVar7 = *(longlong *)(param_2 + 0x38);
  *(undefined8 *)(in_RAX + -0x10) = unaff_R14;
  lVar8 = *(longlong *)(param_2 + 0x28);
  *(undefined8 *)(in_RAX + -0x18) = unaff_R15;
  lVar9 = *(longlong *)(param_2 + 0x30);
  *(undefined4 *)(in_RAX + -0x28) = unaff_XMM6_Da;
  *(undefined4 *)(in_RAX + -0x24) = unaff_XMM6_Db;
  *(undefined4 *)(in_RAX + -0x20) = unaff_XMM6_Dc;
  *(undefined4 *)(in_RAX + -0x1c) = unaff_XMM6_Dd;
  *(undefined4 *)(in_RAX + -0x38) = unaff_XMM7_Da;
  *(undefined4 *)(in_RAX + -0x34) = unaff_XMM7_Db;
  *(undefined4 *)(in_RAX + -0x30) = unaff_XMM7_Dc;
  *(undefined4 *)(in_RAX + -0x2c) = unaff_XMM7_Dd;
  do {
    uVar26 = param_4 * 0x10;
    pfVar1 = (float *)(param_1 + (ulonglong)uVar26 * 4);
    fVar10 = *pfVar1;
    fVar11 = pfVar1[1];
    fVar12 = pfVar1[2];
    fVar13 = pfVar1[3];
    pfVar1 = (float *)(param_1 + (ulonglong)(uVar26 + 4) * 4);
    fVar14 = *pfVar1;
    fVar15 = pfVar1[1];
    fVar16 = pfVar1[2];
    fVar17 = pfVar1[3];
    pfVar1 = (float *)(param_1 + (ulonglong)(uVar26 + 8) * 4);
    fVar18 = *pfVar1;
    fVar19 = pfVar1[1];
    fVar20 = pfVar1[2];
    fVar21 = pfVar1[3];
    pfVar1 = (float *)(param_1 + (ulonglong)(uVar26 + 0xc) * 4);
    fVar22 = *pfVar1;
    fVar23 = pfVar1[1];
    fVar24 = pfVar1[2];
    fVar25 = pfVar1[3];
    uVar27 = (ulonglong)(param_4 * 4);
    param_4 = param_4 + 1;
    pfVar1 = (float *)(in_R11 + uVar27 * 4);
    *pfVar1 = fVar10 * unaff_XMM8_Da;
    pfVar1[1] = fVar14 * unaff_XMM8_Db;
    pfVar1[2] = fVar18 * unaff_XMM8_Dc;
    pfVar1[3] = fVar22 * unaff_XMM8_Dd;
    pfVar1 = (float *)(lVar3 + uVar27 * 4);
    *pfVar1 = fVar11 * unaff_XMM8_Da;
    pfVar1[1] = fVar15 * unaff_XMM8_Db;
    pfVar1[2] = fVar19 * unaff_XMM8_Dc;
    pfVar1[3] = fVar23 * unaff_XMM8_Dd;
    puVar2 = (undefined4 *)(lVar6 + uVar27 * 4);
    *puVar2 = unaff_XMM10_Da;
    puVar2[1] = unaff_XMM10_Db;
    puVar2[2] = unaff_XMM10_Dc;
    puVar2[3] = unaff_XMM10_Dd;
    puVar2 = (undefined4 *)(lVar5 + uVar27 * 4);
    *puVar2 = unaff_XMM10_Da;
    puVar2[1] = unaff_XMM10_Db;
    puVar2[2] = unaff_XMM10_Dc;
    puVar2[3] = unaff_XMM10_Dd;
    pfVar1 = (float *)(lVar4 + uVar27 * 4);
    *pfVar1 = (fVar12 + fVar10) * unaff_XMM9_Da;
    pfVar1[1] = (fVar16 + fVar14) * unaff_XMM9_Db;
    pfVar1[2] = (fVar20 + fVar18) * unaff_XMM9_Dc;
    pfVar1[3] = (fVar24 + fVar22) * unaff_XMM9_Dd;
    pfVar1 = (float *)(lVar8 + uVar27 * 4);
    *pfVar1 = (fVar13 + fVar11) * unaff_XMM9_Da;
    pfVar1[1] = (fVar17 + fVar15) * unaff_XMM9_Db;
    pfVar1[2] = (fVar21 + fVar19) * unaff_XMM9_Dc;
    pfVar1[3] = (fVar25 + fVar23) * unaff_XMM9_Dd;
    pfVar1 = (float *)(lVar9 + uVar27 * 4);
    *pfVar1 = fVar12 * unaff_XMM8_Da;
    pfVar1[1] = fVar16 * unaff_XMM8_Db;
    pfVar1[2] = fVar20 * unaff_XMM8_Dc;
    pfVar1[3] = fVar24 * unaff_XMM8_Dd;
    pfVar1 = (float *)(lVar7 + uVar27 * 4);
    *pfVar1 = fVar13 * unaff_XMM8_Da;
    pfVar1[1] = fVar17 * unaff_XMM8_Db;
    pfVar1[2] = fVar21 * unaff_XMM8_Dc;
    pfVar1[3] = fVar25 * unaff_XMM8_Dd;
  } while (param_4 < param_3);
  return;
}






// 函数: void FUN_1807dacbd(void)
void FUN_1807dacbd(void)

{
  return;
}






