#include "TaleWorlds.Native.Split.h"

// 99_part_12_part025.c - 9 个函数

// 函数: void FUN_1807da1b3(longlong param_1,longlong param_2,uint param_3)
void FUN_1807da1b3(longlong param_1,longlong param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
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
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  uint uVar39;
  longlong in_RAX;
  ulonglong uVar40;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  uint in_R10D;
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
  float unaff_XMM14_Da;
  float unaff_XMM14_Db;
  float unaff_XMM14_Dc;
  float unaff_XMM14_Dd;
  float unaff_XMM15_Da;
  float unaff_XMM15_Db;
  float unaff_XMM15_Dc;
  float unaff_XMM15_Dd;
  
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
    uVar39 = in_R10D * 0x20;
    pfVar1 = (float *)(param_1 + (ulonglong)uVar39 * 4);
    fVar8 = pfVar1[1];
    fVar9 = pfVar1[2];
    fVar10 = pfVar1[3];
    pfVar2 = (float *)(param_1 + (ulonglong)(uVar39 + 4) * 4);
    fVar11 = *pfVar2;
    fVar12 = pfVar2[1];
    fVar13 = pfVar2[2];
    fVar14 = pfVar2[3];
    pfVar2 = (float *)(param_1 + (ulonglong)(uVar39 + 8) * 4);
    fVar15 = *pfVar2;
    fVar16 = pfVar2[1];
    fVar17 = pfVar2[2];
    fVar18 = pfVar2[3];
    pfVar2 = (float *)(param_1 + (ulonglong)(uVar39 + 0xc) * 4);
    fVar19 = *pfVar2;
    fVar20 = pfVar2[1];
    fVar21 = pfVar2[2];
    fVar22 = pfVar2[3];
    pfVar2 = (float *)(param_1 + (ulonglong)(uVar39 + 0x10) * 4);
    fVar23 = *pfVar2;
    fVar24 = pfVar2[1];
    fVar25 = pfVar2[2];
    fVar26 = pfVar2[3];
    pfVar2 = (float *)(param_1 + (ulonglong)(uVar39 + 0x14) * 4);
    fVar27 = *pfVar2;
    fVar28 = pfVar2[1];
    fVar29 = pfVar2[2];
    fVar30 = pfVar2[3];
    pfVar2 = (float *)(param_1 + (ulonglong)(uVar39 + 0x18) * 4);
    fVar31 = *pfVar2;
    fVar32 = pfVar2[1];
    fVar33 = pfVar2[2];
    fVar34 = pfVar2[3];
    pfVar2 = (float *)(param_1 + (ulonglong)(uVar39 + 0x1c) * 4);
    fVar35 = *pfVar2;
    fVar36 = pfVar2[1];
    fVar37 = pfVar2[2];
    fVar38 = pfVar2[3];
    uVar40 = (ulonglong)(in_R10D * 4);
    in_R10D = in_R10D + 1;
    pfVar2 = (float *)(in_R11 + uVar40 * 4);
    *pfVar2 = *pfVar1 + fVar11 * unaff_XMM12_Da;
    pfVar2[1] = fVar15 + fVar19 * unaff_XMM12_Db;
    pfVar2[2] = fVar23 + fVar27 * unaff_XMM12_Dc;
    pfVar2[3] = fVar31 + fVar35 * unaff_XMM12_Dd;
    pfVar1 = (float *)(lVar3 + uVar40 * 4);
    *pfVar1 = fVar8 + fVar12 * unaff_XMM12_Da;
    pfVar1[1] = fVar16 + fVar20 * unaff_XMM12_Db;
    pfVar1[2] = fVar24 + fVar28 * unaff_XMM12_Dc;
    pfVar1[3] = fVar32 + fVar36 * unaff_XMM12_Dd;
    pfVar1 = (float *)(lVar6 + uVar40 * 4);
    *pfVar1 = fVar9;
    pfVar1[1] = fVar17;
    pfVar1[2] = fVar25;
    pfVar1[3] = fVar33;
    pfVar1 = (float *)(lVar5 + uVar40 * 4);
    *pfVar1 = fVar10;
    pfVar1[1] = fVar18;
    pfVar1[2] = fVar26;
    pfVar1[3] = fVar34;
    pfVar1 = (float *)(lVar4 + uVar40 * 4);
    *pfVar1 = fVar14 * unaff_XMM15_Da + fVar13 * unaff_XMM14_Da + fVar11 * unaff_XMM13_Da;
    pfVar1[1] = fVar22 * unaff_XMM15_Db + fVar21 * unaff_XMM14_Db + fVar19 * unaff_XMM13_Db;
    pfVar1[2] = fVar30 * unaff_XMM15_Dc + fVar29 * unaff_XMM14_Dc + fVar27 * unaff_XMM13_Dc;
    pfVar1[3] = fVar38 * unaff_XMM15_Dd + fVar37 * unaff_XMM14_Dd + fVar35 * unaff_XMM13_Dd;
    pfVar1 = (float *)(lVar7 + uVar40 * 4);
    *pfVar1 = fVar13 * unaff_XMM15_Da + fVar14 * unaff_XMM14_Da + fVar12 * unaff_XMM13_Da;
    pfVar1[1] = fVar21 * unaff_XMM15_Db + fVar22 * unaff_XMM14_Db + fVar20 * unaff_XMM13_Db;
    pfVar1[2] = fVar29 * unaff_XMM15_Dc + fVar30 * unaff_XMM14_Dc + fVar28 * unaff_XMM13_Dc;
    pfVar1[3] = fVar37 * unaff_XMM15_Dd + fVar38 * unaff_XMM14_Dd + fVar36 * unaff_XMM13_Dd;
  } while (in_R10D < param_3);
  return;
}






// 函数: void FUN_1807da358(void)
void FUN_1807da358(void)

{
  return;
}






// 函数: void FUN_1807da380(longlong param_1,longlong *param_2,uint param_3)
void FUN_1807da380(longlong param_1,longlong *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  uint uVar42;
  ulonglong uVar43;
  uint uVar44;
  
  uVar44 = 0;
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
      uVar42 = uVar44 * 0x20;
      puVar1 = (undefined4 *)(param_1 + (ulonglong)uVar42 * 4);
      uVar11 = puVar1[1];
      uVar12 = puVar1[2];
      uVar13 = puVar1[3];
      puVar2 = (undefined4 *)(param_1 + (ulonglong)(uVar42 + 4) * 4);
      uVar14 = *puVar2;
      uVar15 = puVar2[1];
      uVar16 = puVar2[2];
      uVar17 = puVar2[3];
      puVar2 = (undefined4 *)(param_1 + (ulonglong)(uVar42 + 8) * 4);
      uVar18 = *puVar2;
      uVar19 = puVar2[1];
      uVar20 = puVar2[2];
      uVar21 = puVar2[3];
      puVar2 = (undefined4 *)(param_1 + (ulonglong)(uVar42 + 0xc) * 4);
      uVar22 = *puVar2;
      uVar23 = puVar2[1];
      uVar24 = puVar2[2];
      uVar25 = puVar2[3];
      puVar2 = (undefined4 *)(param_1 + (ulonglong)(uVar42 + 0x10) * 4);
      uVar26 = *puVar2;
      uVar27 = puVar2[1];
      uVar28 = puVar2[2];
      uVar29 = puVar2[3];
      puVar2 = (undefined4 *)(param_1 + (ulonglong)(uVar42 + 0x14) * 4);
      uVar30 = *puVar2;
      uVar31 = puVar2[1];
      uVar32 = puVar2[2];
      uVar33 = puVar2[3];
      puVar2 = (undefined4 *)(param_1 + (ulonglong)(uVar42 + 0x18) * 4);
      uVar34 = *puVar2;
      uVar35 = puVar2[1];
      uVar36 = puVar2[2];
      uVar37 = puVar2[3];
      puVar2 = (undefined4 *)(param_1 + (ulonglong)(uVar42 + 0x1c) * 4);
      uVar38 = *puVar2;
      uVar39 = puVar2[1];
      uVar40 = puVar2[2];
      uVar41 = puVar2[3];
      uVar43 = (ulonglong)(uVar44 * 4);
      uVar44 = uVar44 + 1;
      puVar2 = (undefined4 *)(lVar3 + uVar43 * 4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar18;
      puVar2[2] = uVar26;
      puVar2[3] = uVar34;
      puVar1 = (undefined4 *)(lVar4 + uVar43 * 4);
      *puVar1 = uVar11;
      puVar1[1] = uVar19;
      puVar1[2] = uVar27;
      puVar1[3] = uVar35;
      puVar1 = (undefined4 *)(lVar7 + uVar43 * 4);
      *puVar1 = uVar12;
      puVar1[1] = uVar20;
      puVar1[2] = uVar28;
      puVar1[3] = uVar36;
      puVar1 = (undefined4 *)(lVar6 + uVar43 * 4);
      *puVar1 = uVar13;
      puVar1[1] = uVar21;
      puVar1[2] = uVar29;
      puVar1[3] = uVar37;
      puVar1 = (undefined4 *)(lVar5 + uVar43 * 4);
      *puVar1 = uVar14;
      puVar1[1] = uVar22;
      puVar1[2] = uVar30;
      puVar1[3] = uVar38;
      puVar1 = (undefined4 *)(lVar9 + uVar43 * 4);
      *puVar1 = uVar15;
      puVar1[1] = uVar23;
      puVar1[2] = uVar31;
      puVar1[3] = uVar39;
      puVar1 = (undefined4 *)(lVar10 + uVar43 * 4);
      *puVar1 = uVar16;
      puVar1[1] = uVar24;
      puVar1[2] = uVar32;
      puVar1[3] = uVar40;
      puVar1 = (undefined4 *)(lVar8 + uVar43 * 4);
      *puVar1 = uVar17;
      puVar1[1] = uVar25;
      puVar1[2] = uVar33;
      puVar1[3] = uVar41;
    } while (uVar44 < param_3 >> 2);
  }
  return;
}






// 函数: void FUN_1807da39a(longlong param_1,longlong param_2,uint param_3)
void FUN_1807da39a(longlong param_1,longlong param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  uint uVar41;
  longlong in_RAX;
  ulonglong uVar42;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  uint in_R10D;
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
  *(undefined4 *)(in_RAX + -0x48) = unaff_XMM8_Da;
  *(undefined4 *)(in_RAX + -0x44) = unaff_XMM8_Db;
  *(undefined4 *)(in_RAX + -0x40) = unaff_XMM8_Dc;
  *(undefined4 *)(in_RAX + -0x3c) = unaff_XMM8_Dd;
  *(undefined4 *)(in_RAX + -0x58) = unaff_XMM9_Da;
  *(undefined4 *)(in_RAX + -0x54) = unaff_XMM9_Db;
  *(undefined4 *)(in_RAX + -0x50) = unaff_XMM9_Dc;
  *(undefined4 *)(in_RAX + -0x4c) = unaff_XMM9_Dd;
  *(undefined4 *)(in_RAX + -0x68) = unaff_XMM10_Da;
  *(undefined4 *)(in_RAX + -100) = unaff_XMM10_Db;
  *(undefined4 *)(in_RAX + -0x60) = unaff_XMM10_Dc;
  *(undefined4 *)(in_RAX + -0x5c) = unaff_XMM10_Dd;
  do {
    uVar41 = in_R10D * 0x20;
    puVar1 = (undefined4 *)(param_1 + (ulonglong)uVar41 * 4);
    uVar10 = puVar1[1];
    uVar11 = puVar1[2];
    uVar12 = puVar1[3];
    puVar2 = (undefined4 *)(param_1 + (ulonglong)(uVar41 + 4) * 4);
    uVar13 = *puVar2;
    uVar14 = puVar2[1];
    uVar15 = puVar2[2];
    uVar16 = puVar2[3];
    puVar2 = (undefined4 *)(param_1 + (ulonglong)(uVar41 + 8) * 4);
    uVar17 = *puVar2;
    uVar18 = puVar2[1];
    uVar19 = puVar2[2];
    uVar20 = puVar2[3];
    puVar2 = (undefined4 *)(param_1 + (ulonglong)(uVar41 + 0xc) * 4);
    uVar21 = *puVar2;
    uVar22 = puVar2[1];
    uVar23 = puVar2[2];
    uVar24 = puVar2[3];
    puVar2 = (undefined4 *)(param_1 + (ulonglong)(uVar41 + 0x10) * 4);
    uVar25 = *puVar2;
    uVar26 = puVar2[1];
    uVar27 = puVar2[2];
    uVar28 = puVar2[3];
    puVar2 = (undefined4 *)(param_1 + (ulonglong)(uVar41 + 0x14) * 4);
    uVar29 = *puVar2;
    uVar30 = puVar2[1];
    uVar31 = puVar2[2];
    uVar32 = puVar2[3];
    puVar2 = (undefined4 *)(param_1 + (ulonglong)(uVar41 + 0x18) * 4);
    uVar33 = *puVar2;
    uVar34 = puVar2[1];
    uVar35 = puVar2[2];
    uVar36 = puVar2[3];
    puVar2 = (undefined4 *)(param_1 + (ulonglong)(uVar41 + 0x1c) * 4);
    uVar37 = *puVar2;
    uVar38 = puVar2[1];
    uVar39 = puVar2[2];
    uVar40 = puVar2[3];
    uVar42 = (ulonglong)(in_R10D * 4);
    in_R10D = in_R10D + 1;
    puVar2 = (undefined4 *)(in_R11 + uVar42 * 4);
    *puVar2 = *puVar1;
    puVar2[1] = uVar17;
    puVar2[2] = uVar25;
    puVar2[3] = uVar33;
    puVar1 = (undefined4 *)(lVar3 + uVar42 * 4);
    *puVar1 = uVar10;
    puVar1[1] = uVar18;
    puVar1[2] = uVar26;
    puVar1[3] = uVar34;
    puVar1 = (undefined4 *)(lVar6 + uVar42 * 4);
    *puVar1 = uVar11;
    puVar1[1] = uVar19;
    puVar1[2] = uVar27;
    puVar1[3] = uVar35;
    puVar1 = (undefined4 *)(lVar5 + uVar42 * 4);
    *puVar1 = uVar12;
    puVar1[1] = uVar20;
    puVar1[2] = uVar28;
    puVar1[3] = uVar36;
    puVar1 = (undefined4 *)(lVar4 + uVar42 * 4);
    *puVar1 = uVar13;
    puVar1[1] = uVar21;
    puVar1[2] = uVar29;
    puVar1[3] = uVar37;
    puVar1 = (undefined4 *)(lVar8 + uVar42 * 4);
    *puVar1 = uVar14;
    puVar1[1] = uVar22;
    puVar1[2] = uVar30;
    puVar1[3] = uVar38;
    puVar1 = (undefined4 *)(lVar9 + uVar42 * 4);
    *puVar1 = uVar15;
    puVar1[1] = uVar23;
    puVar1[2] = uVar31;
    puVar1[3] = uVar39;
    puVar1 = (undefined4 *)(lVar7 + uVar42 * 4);
    *puVar1 = uVar16;
    puVar1[1] = uVar24;
    puVar1[2] = uVar32;
    puVar1[3] = uVar40;
  } while (in_R10D < param_3);
  return;
}






// 函数: void FUN_1807da511(void)
void FUN_1807da511(void)

{
  return;
}






// 函数: void FUN_1807da520(longlong param_1,longlong *param_2,uint param_3)
void FUN_1807da520(longlong param_1,longlong *param_2,uint param_3)

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
  uint uVar26;
  uint uVar27;
  
  uVar27 = 0;
  if (param_3 >> 2 != 0) {
    lVar4 = *param_2;
    do {
      uVar26 = uVar27 * 0x20;
      pfVar1 = (float *)(param_1 + (ulonglong)uVar26 * 4);
      pfVar2 = (float *)(param_1 + (ulonglong)(uVar26 + 4) * 4);
      pfVar3 = (float *)(param_1 + (ulonglong)(uVar26 + 8) * 4);
      fVar5 = *pfVar3;
      fVar6 = pfVar3[1];
      fVar7 = pfVar3[2];
      pfVar3 = (float *)(param_1 + (ulonglong)(uVar26 + 0xc) * 4);
      fVar8 = *pfVar3;
      fVar9 = pfVar3[1];
      fVar10 = pfVar3[2];
      fVar11 = pfVar3[3];
      pfVar3 = (float *)(param_1 + (ulonglong)(uVar26 + 0x10) * 4);
      fVar12 = *pfVar3;
      fVar13 = pfVar3[1];
      fVar14 = pfVar3[2];
      pfVar3 = (float *)(param_1 + (ulonglong)(uVar26 + 0x14) * 4);
      fVar15 = *pfVar3;
      fVar16 = pfVar3[1];
      fVar17 = pfVar3[2];
      fVar18 = pfVar3[3];
      pfVar3 = (float *)(param_1 + (ulonglong)(uVar26 + 0x18) * 4);
      fVar19 = *pfVar3;
      fVar20 = pfVar3[1];
      fVar21 = pfVar3[2];
      pfVar3 = (float *)(param_1 + (ulonglong)(uVar26 + 0x1c) * 4);
      fVar22 = *pfVar3;
      fVar23 = pfVar3[1];
      fVar24 = pfVar3[2];
      fVar25 = pfVar3[3];
      uVar26 = uVar27 * 4;
      uVar27 = uVar27 + 1;
      pfVar3 = (float *)(lVar4 + (ulonglong)uVar26 * 4);
      *pfVar3 = (pfVar1[2] + pfVar2[2] + *pfVar2 + *pfVar1 + pfVar2[1] + pfVar1[1] + pfVar2[3]) *
                0.37796447;
      pfVar3[1] = (fVar7 + fVar10 + fVar8 + fVar5 + fVar9 + fVar6 + fVar11) * 0.37796447;
      pfVar3[2] = (fVar14 + fVar17 + fVar15 + fVar12 + fVar16 + fVar13 + fVar18) * 0.37796447;
      pfVar3[3] = (fVar21 + fVar24 + fVar22 + fVar19 + fVar23 + fVar20 + fVar25) * 0.37796447;
    } while (uVar27 < param_3 >> 2);
  }
  return;
}






// 函数: void FUN_1807da544(longlong param_1,undefined8 param_2,uint param_3)
void FUN_1807da544(longlong param_1,undefined8 param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
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
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  uint in_R10D;
  longlong in_R11;
  float unaff_XMM12_Da;
  float unaff_XMM12_Db;
  float unaff_XMM12_Dc;
  float unaff_XMM12_Dd;
  
  do {
    uVar25 = in_R10D * 0x20;
    pfVar1 = (float *)(param_1 + (ulonglong)uVar25 * 4);
    pfVar2 = (float *)(param_1 + (ulonglong)(uVar25 + 4) * 4);
    pfVar3 = (float *)(param_1 + (ulonglong)(uVar25 + 8) * 4);
    fVar4 = *pfVar3;
    fVar5 = pfVar3[1];
    fVar6 = pfVar3[2];
    pfVar3 = (float *)(param_1 + (ulonglong)(uVar25 + 0xc) * 4);
    fVar7 = *pfVar3;
    fVar8 = pfVar3[1];
    fVar9 = pfVar3[2];
    fVar10 = pfVar3[3];
    pfVar3 = (float *)(param_1 + (ulonglong)(uVar25 + 0x10) * 4);
    fVar11 = *pfVar3;
    fVar12 = pfVar3[1];
    fVar13 = pfVar3[2];
    pfVar3 = (float *)(param_1 + (ulonglong)(uVar25 + 0x14) * 4);
    fVar14 = *pfVar3;
    fVar15 = pfVar3[1];
    fVar16 = pfVar3[2];
    fVar17 = pfVar3[3];
    pfVar3 = (float *)(param_1 + (ulonglong)(uVar25 + 0x18) * 4);
    fVar18 = *pfVar3;
    fVar19 = pfVar3[1];
    fVar20 = pfVar3[2];
    pfVar3 = (float *)(param_1 + (ulonglong)(uVar25 + 0x1c) * 4);
    fVar21 = *pfVar3;
    fVar22 = pfVar3[1];
    fVar23 = pfVar3[2];
    fVar24 = pfVar3[3];
    uVar25 = in_R10D * 4;
    in_R10D = in_R10D + 1;
    pfVar3 = (float *)(in_R11 + (ulonglong)uVar25 * 4);
    *pfVar3 = (pfVar1[2] + pfVar2[2] + *pfVar2 + *pfVar1 + pfVar2[1] + pfVar1[1] + pfVar2[3]) *
              unaff_XMM12_Da;
    pfVar3[1] = (fVar6 + fVar9 + fVar7 + fVar4 + fVar8 + fVar5 + fVar10) * unaff_XMM12_Db;
    pfVar3[2] = (fVar13 + fVar16 + fVar14 + fVar11 + fVar15 + fVar12 + fVar17) * unaff_XMM12_Dc;
    pfVar3[3] = (fVar20 + fVar23 + fVar21 + fVar18 + fVar22 + fVar19 + fVar24) * unaff_XMM12_Dd;
  } while (in_R10D < param_3);
  return;
}






// 函数: void FUN_1807da654(void)
void FUN_1807da654(void)

{
  return;
}






// 函数: void FUN_1807da660(longlong param_1,longlong *param_2,uint param_3)
void FUN_1807da660(longlong param_1,longlong *param_2,uint param_3)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
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
  float fVar31;
  float fVar32;
  float fVar33;
  uint uVar34;
  ulonglong uVar35;
  uint uVar36;
  
  uVar36 = 0;
  if (param_3 >> 2 != 0) {
    lVar2 = *param_2;
    lVar3 = param_2[1];
    lVar4 = param_2[3];
    lVar5 = param_2[2];
    do {
      uVar34 = uVar36 * 0x20;
      pfVar1 = (float *)(param_1 + (ulonglong)uVar34 * 4);
      fVar6 = *pfVar1;
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      pfVar1 = (float *)(param_1 + (ulonglong)(uVar34 + 4) * 4);
      fVar9 = *pfVar1;
      fVar10 = pfVar1[1];
      fVar11 = pfVar1[2];
      fVar12 = pfVar1[3];
      pfVar1 = (float *)(param_1 + (ulonglong)(uVar34 + 8) * 4);
      fVar13 = *pfVar1;
      fVar14 = pfVar1[1];
      fVar15 = pfVar1[2];
      pfVar1 = (float *)(param_1 + (ulonglong)(uVar34 + 0xc) * 4);
      fVar16 = *pfVar1;
      fVar17 = pfVar1[1];
      fVar18 = pfVar1[2];
      fVar19 = pfVar1[3];
      pfVar1 = (float *)(param_1 + (ulonglong)(uVar34 + 0x10) * 4);
      fVar20 = *pfVar1;
      fVar21 = pfVar1[1];
      fVar22 = pfVar1[2];
      pfVar1 = (float *)(param_1 + (ulonglong)(uVar34 + 0x14) * 4);
      fVar23 = *pfVar1;
      fVar24 = pfVar1[1];
      fVar25 = pfVar1[2];
      fVar26 = pfVar1[3];
      pfVar1 = (float *)(param_1 + (ulonglong)(uVar34 + 0x18) * 4);
      fVar27 = *pfVar1;
      fVar28 = pfVar1[1];
      fVar29 = pfVar1[2];
      pfVar1 = (float *)(param_1 + (ulonglong)(uVar34 + 0x1c) * 4);
      fVar30 = *pfVar1;
      fVar31 = pfVar1[1];
      fVar32 = pfVar1[2];
      fVar33 = pfVar1[3];
      uVar35 = (ulonglong)(uVar36 * 4);
      uVar36 = uVar36 + 1;
      pfVar1 = (float *)(lVar2 + uVar35 * 4);
      *pfVar1 = fVar7 * 0.2588 + fVar6 * 0.9659 + fVar8 * 0.7071 + fVar9 * 0.7071;
      pfVar1[1] = fVar14 * 0.2588 + fVar13 * 0.9659 + fVar15 * 0.7071 + fVar16 * 0.7071;
      pfVar1[2] = fVar21 * 0.2588 + fVar20 * 0.9659 + fVar22 * 0.7071 + fVar23 * 0.7071;
      pfVar1[3] = fVar28 * 0.2588 + fVar27 * 0.9659 + fVar29 * 0.7071 + fVar30 * 0.7071;
      pfVar1 = (float *)(lVar3 + uVar35 * 4);
      *pfVar1 = fVar6 * 0.2588 + fVar7 * 0.9659 + fVar8 * 0.7071 + fVar10 * 0.7071;
      pfVar1[1] = fVar13 * 0.2588 + fVar14 * 0.9659 + fVar15 * 0.7071 + fVar17 * 0.7071;
      pfVar1[2] = fVar20 * 0.2588 + fVar21 * 0.9659 + fVar22 * 0.7071 + fVar24 * 0.7071;
      pfVar1[3] = fVar27 * 0.2588 + fVar28 * 0.9659 + fVar29 * 0.7071 + fVar31 * 0.7071;
      pfVar1 = (float *)(lVar5 + uVar35 * 4);
      *pfVar1 = fVar12 * 0.2588 + fVar11 * 0.9659 + fVar9 * 0.7071;
      pfVar1[1] = fVar19 * 0.2588 + fVar18 * 0.9659 + fVar16 * 0.7071;
      pfVar1[2] = fVar26 * 0.2588 + fVar25 * 0.9659 + fVar23 * 0.7071;
      pfVar1[3] = fVar33 * 0.2588 + fVar32 * 0.9659 + fVar30 * 0.7071;
      pfVar1 = (float *)(lVar4 + uVar35 * 4);
      *pfVar1 = fVar11 * 0.2588 + fVar12 * 0.9659 + fVar10 * 0.7071;
      pfVar1[1] = fVar18 * 0.2588 + fVar19 * 0.9659 + fVar17 * 0.7071;
      pfVar1[2] = fVar25 * 0.2588 + fVar26 * 0.9659 + fVar24 * 0.7071;
      pfVar1[3] = fVar32 * 0.2588 + fVar33 * 0.9659 + fVar31 * 0.7071;
    } while (uVar36 < param_3 >> 2);
  }
  return;
}






