#include "TaleWorlds.Native.Split.h"

// 99_part_02_part007.c - 9 个函数

// 函数: void FUN_1800ebb40(longlong *param_1,longlong *param_2,longlong param_3)
void FUN_1800ebb40(longlong *param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  char cVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar7 = *param_1;
  lVar3 = param_1[1];
  lVar16 = (longlong)(int)param_2[1] - (longlong)(int)lVar3;
  if (1 < lVar16) {
    lVar14 = (lVar16 + -2 >> 1) + 1;
    do {
      lVar14 = lVar14 + -1;
      uVar17 = (int)lVar14 + (int)lVar3;
      uVar13 = uVar17 >> 0xb;
      uVar11 = (ulonglong)(uVar17 + uVar13 * -0x800);
      lVar6 = *(longlong *)(lVar7 + 8 + (ulonglong)uVar13 * 8);
      puVar1 = (undefined8 *)(lVar6 + uVar11 * 0x18);
      uStack_88 = *puVar1;
      uStack_80 = puVar1[1];
      uStack_78 = *(undefined8 *)(lVar6 + 0x10 + uVar11 * 0x18);
      lStack_b8 = *param_1;
      lStack_b0 = param_1[1];
      FUN_1800eccd0(&lStack_b8,lVar14,lVar16,lVar14,&uStack_88);
    } while (lVar14 != 0);
  }
  lVar7 = *param_2;
  lStack_b0 = param_2[1];
  iVar5 = *(int *)(param_3 + 8);
  uVar13 = (uint)lStack_b0;
  lStack_b8 = lVar7;
  if ((int)uVar13 < iVar5) {
    uVar17 = *(uint *)(param_1 + 1);
    lVar16 = *param_1;
    lVar3 = (ulonglong)(uVar17 >> 0xb) * 8;
    uVar11 = (ulonglong)(uVar17 - (uVar17 & 0xfffff800));
    do {
      uVar15 = uVar13 >> 0xb;
      cVar9 = func_0x0001800d4090(*(undefined8 *)
                                   (*(longlong *)(lVar7 + 8 + (ulonglong)uVar15 * 8) + 0x10 +
                                   (ulonglong)(uVar13 + uVar15 * -0x800) * 0x18),
                                  *(undefined8 *)
                                   (*(longlong *)(lVar3 + 8 + lVar16) + 0x10 + uVar11 * 0x18));
      if (cVar9 != '\0') {
        lVar16 = *(longlong *)(lVar7 + 8 + (ulonglong)uVar15 * 8);
        uVar12 = (ulonglong)(uVar13 + uVar15 * -0x800);
        puVar1 = (undefined8 *)(lVar16 + uVar12 * 0x18);
        uStack_70 = *puVar1;
        uStack_68 = puVar1[1];
        uStack_60 = *(undefined8 *)(lVar16 + 0x10 + uVar12 * 0x18);
        lVar16 = *(longlong *)(lVar3 + 8 + *param_1);
        lVar14 = *(longlong *)(lVar7 + 8 + (ulonglong)uVar15 * 8);
        puVar1 = (undefined8 *)(lVar16 + uVar11 * 0x18);
        uVar8 = puVar1[1];
        uVar4 = *(undefined8 *)(lVar16 + 0x10 + uVar11 * 0x18);
        uVar12 = (ulonglong)(uVar13 + uVar15 * -0x800);
        puVar2 = (undefined8 *)(lVar14 + uVar12 * 0x18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar8;
        lStack_a8 = *param_1;
        lStack_a0 = param_1[1];
        *(undefined8 *)(lVar14 + 0x10 + uVar12 * 0x18) = uVar4;
        FUN_1800eccd0(&lStack_a8,0,(longlong)(int)param_2[1] - (longlong)(int)uVar17,0,&uStack_70);
      }
      lVar16 = *param_1;
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < iVar5);
  }
  lVar7 = *param_2;
  uVar13 = *(uint *)(param_2 + 1);
  lStack_a0 = param_2[1];
  lVar3 = param_1[1];
  if (1 < (longlong)(int)uVar13 - (longlong)(int)lVar3) {
    lVar16 = *param_1;
    uVar17 = (uint)param_1[1];
    uVar11 = (ulonglong)(uVar17 + (uVar17 >> 0xb) * -0x800);
    lStack_a8 = lVar7;
    do {
      uVar15 = uVar13 - 1;
      uVar10 = uVar15 & 0x7ff;
      lVar14 = *(longlong *)(lVar7 + 8 + (ulonglong)(uVar15 >> 0xb) * 8);
      puVar1 = (undefined8 *)(lVar14 + (ulonglong)uVar10 * 0x18);
      uStack_58 = *puVar1;
      uStack_50 = puVar1[1];
      uStack_48 = *(undefined8 *)(lVar14 + 0x10 + (ulonglong)uVar10 * 0x18);
      lVar14 = *(longlong *)(lVar16 + (ulonglong)(uVar17 >> 0xb) * 8 + 8);
      lVar6 = *(longlong *)(lVar7 + 8 + (ulonglong)(uVar15 >> 0xb) * 8);
      puVar1 = (undefined8 *)(lVar14 + uVar11 * 0x18);
      uVar8 = puVar1[1];
      uVar4 = *(undefined8 *)(lVar14 + 0x10 + uVar11 * 0x18);
      puVar2 = (undefined8 *)(lVar6 + (ulonglong)uVar10 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar8;
      lStack_98 = *param_1;
      lStack_90 = param_1[1];
      *(undefined8 *)(lVar6 + 0x10 + (ulonglong)uVar10 * 0x18) = uVar4;
      FUN_1800eccd0(&lStack_98,0,((longlong)(int)uVar13 - (longlong)(int)uVar17) + -1,0,&uStack_58);
      uVar13 = uVar15;
    } while (1 < (longlong)(int)uVar15 - (longlong)(int)lVar3);
  }
  return;
}






// 函数: void FUN_1800ebb7f(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
void FUN_1800ebb7f(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6,undefined8 param_7,longlong param_8,
                  longlong param_9,longlong param_10,longlong param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  char cVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  int unaff_EBP;
  longlong *unaff_RSI;
  uint uVar15;
  longlong unaff_RDI;
  longlong lVar16;
  uint uVar17;
  longlong *unaff_R15;
  longlong *in_stack_000000f8;
  
  lVar7 = param_6;
  lVar16 = unaff_RDI - unaff_EBP;
  if (1 < lVar16) {
    lVar14 = (lVar16 + -2 >> 1) + 1;
    do {
      lVar14 = lVar14 + -1;
      uVar17 = (int)lVar14 + unaff_EBP;
      uVar13 = uVar17 >> 0xb;
      uVar11 = (ulonglong)(uVar17 + uVar13 * -0x800);
      lVar5 = *(longlong *)(lVar7 + 8 + (ulonglong)uVar13 * 8);
      puVar1 = (undefined8 *)(lVar5 + uVar11 * 0x18);
      param_12 = *puVar1;
      param_13 = puVar1[1];
      param_14 = *(undefined8 *)(lVar5 + 0x10 + uVar11 * 0x18);
      param_6 = *unaff_RSI;
      param_7 = unaff_RSI[1];
      FUN_1800eccd0(&param_6,lVar14,lVar16,lVar14,&param_12);
    } while (lVar14 != 0);
  }
  lVar7 = *unaff_R15;
  param_7 = unaff_R15[1];
  iVar4 = *(int *)(param_3 + 8);
  uVar13 = (uint)param_7;
  param_6 = lVar7;
  if ((int)uVar13 < iVar4) {
    uVar17 = *(uint *)(unaff_RSI + 1);
    lVar14 = *unaff_RSI;
    lVar16 = (ulonglong)(uVar17 >> 0xb) * 8;
    uVar11 = (ulonglong)(uVar17 - (uVar17 & 0xfffff800));
    do {
      uVar15 = uVar13 >> 0xb;
      cVar9 = func_0x0001800d4090(*(undefined8 *)
                                   (*(longlong *)(lVar7 + 8 + (ulonglong)uVar15 * 8) + 0x10 +
                                   (ulonglong)(uVar13 + uVar15 * -0x800) * 0x18),
                                  *(undefined8 *)
                                   (*(longlong *)(lVar16 + 8 + lVar14) + 0x10 + uVar11 * 0x18));
      if (cVar9 != '\0') {
        lVar14 = *(longlong *)(lVar7 + 8 + (ulonglong)uVar15 * 8);
        uVar12 = (ulonglong)(uVar13 + uVar15 * -0x800);
        puVar1 = (undefined8 *)(lVar14 + uVar12 * 0x18);
        param_15 = *puVar1;
        param_16 = puVar1[1];
        param_17 = *(undefined8 *)(lVar14 + 0x10 + uVar12 * 0x18);
        lVar14 = *(longlong *)(lVar16 + 8 + *unaff_RSI);
        lVar5 = *(longlong *)(lVar7 + 8 + (ulonglong)uVar15 * 8);
        puVar1 = (undefined8 *)(lVar14 + uVar11 * 0x18);
        uVar8 = puVar1[1];
        uVar3 = *(undefined8 *)(lVar14 + 0x10 + uVar11 * 0x18);
        uVar12 = (ulonglong)(uVar13 + uVar15 * -0x800);
        puVar2 = (undefined8 *)(lVar5 + uVar12 * 0x18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar8;
        param_8 = *unaff_RSI;
        param_9 = unaff_RSI[1];
        *(undefined8 *)(lVar5 + 0x10 + uVar12 * 0x18) = uVar3;
        FUN_1800eccd0(&param_8,0,(longlong)(int)in_stack_000000f8[1] - (longlong)(int)uVar17,0,
                      &param_15);
      }
      lVar14 = *unaff_RSI;
      uVar13 = uVar13 + 1;
      unaff_R15 = in_stack_000000f8;
    } while ((int)uVar13 < iVar4);
  }
  lVar7 = *unaff_R15;
  uVar13 = *(uint *)(unaff_R15 + 1);
  param_9 = unaff_R15[1];
  lVar16 = unaff_RSI[1];
  if (1 < (longlong)(int)uVar13 - (longlong)(int)lVar16) {
    lVar14 = *unaff_RSI;
    uVar17 = (uint)unaff_RSI[1];
    uVar11 = (ulonglong)(uVar17 + (uVar17 >> 0xb) * -0x800);
    param_8 = lVar7;
    do {
      uVar15 = uVar13 - 1;
      uVar10 = uVar15 & 0x7ff;
      lVar5 = *(longlong *)(lVar7 + 8 + (ulonglong)(uVar15 >> 0xb) * 8);
      puVar1 = (undefined8 *)(lVar5 + (ulonglong)uVar10 * 0x18);
      param_18 = *puVar1;
      param_19 = puVar1[1];
      param_20 = *(undefined8 *)(lVar5 + 0x10 + (ulonglong)uVar10 * 0x18);
      lVar5 = *(longlong *)(lVar14 + (ulonglong)(uVar17 >> 0xb) * 8 + 8);
      lVar6 = *(longlong *)(lVar7 + 8 + (ulonglong)(uVar15 >> 0xb) * 8);
      puVar1 = (undefined8 *)(lVar5 + uVar11 * 0x18);
      uVar8 = puVar1[1];
      uVar3 = *(undefined8 *)(lVar5 + 0x10 + uVar11 * 0x18);
      puVar2 = (undefined8 *)(lVar6 + (ulonglong)uVar10 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar8;
      param_10 = *unaff_RSI;
      param_11 = unaff_RSI[1];
      *(undefined8 *)(lVar6 + 0x10 + (ulonglong)uVar10 * 0x18) = uVar3;
      FUN_1800eccd0(&param_10,0,((longlong)(int)uVar13 - (longlong)(int)uVar17) + -1,0,&param_18);
      uVar13 = uVar15;
    } while (1 < (longlong)(int)uVar15 - (longlong)(int)lVar16);
  }
  return;
}






// 函数: void FUN_1800ebd8e(void)
void FUN_1800ebd8e(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  uint uVar11;
  uint in_R9D;
  longlong in_stack_00000040;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  
  lVar6 = *unaff_RSI;
  uVar11 = (uint)unaff_RSI[1];
  uVar9 = (ulonglong)(uVar11 + (uVar11 >> 0xb) * -0x800);
  do {
    uVar10 = in_R9D - 1;
    uVar8 = uVar10 & 0x7ff;
    lVar4 = *(longlong *)(in_stack_00000040 + 8 + (ulonglong)(uVar10 >> 0xb) * 8);
    puVar1 = (undefined8 *)(lVar4 + (ulonglong)uVar8 * 0x18);
    uStack0000000000000090 = *puVar1;
    uStack0000000000000098 = puVar1[1];
    uStack00000000000000a0 = *(undefined8 *)(lVar4 + 0x10 + (ulonglong)uVar8 * 0x18);
    lVar4 = *(longlong *)(lVar6 + (ulonglong)(uVar11 >> 0xb) * 8 + 8);
    lVar5 = *(longlong *)(in_stack_00000040 + 8 + (ulonglong)(uVar10 >> 0xb) * 8);
    puVar1 = (undefined8 *)(lVar4 + uVar9 * 0x18);
    uVar7 = puVar1[1];
    uVar3 = *(undefined8 *)(lVar4 + 0x10 + uVar9 * 0x18);
    puVar2 = (undefined8 *)(lVar5 + (ulonglong)uVar8 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    uStack0000000000000050 = (undefined4)*unaff_RSI;
    uStack0000000000000054 = *(undefined4 *)((longlong)unaff_RSI + 4);
    uStack0000000000000058 = (undefined4)unaff_RSI[1];
    uStack000000000000005c = *(undefined4 *)((longlong)unaff_RSI + 0xc);
    *(undefined8 *)(lVar5 + 0x10 + (ulonglong)uVar8 * 0x18) = uVar3;
    FUN_1800eccd0(&stack0x00000050,0,((longlong)(int)in_R9D - (longlong)(int)uVar11) + -1,0,
                  &stack0x00000090);
    in_R9D = uVar10;
  } while (1 < (int)uVar10 - unaff_RBP);
  return;
}






// 函数: void FUN_1800ebe90(longlong *param_1,longlong *param_2,longlong param_3)
void FUN_1800ebe90(longlong *param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  longlong lStack_68;
  longlong lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  longlong lStack_48;
  longlong lStack_40;
  
  lVar6 = *param_1;
  iVar5 = (int)param_1[1];
  lStack_90 = param_1[1];
  lVar12 = (longlong)(int)param_2[1] - (longlong)iVar5;
  lStack_98 = lVar6;
  if (1 < lVar12) {
    lVar11 = (lVar12 + -2 >> 1) + 1;
    do {
      lStack_88 = *param_1;
      lStack_80 = param_1[1];
      lVar11 = lVar11 + -1;
      uVar10 = (int)lVar11 + iVar5;
      uVar9 = uVar10 >> 0xb;
      plVar2 = (longlong *)
               (*(longlong *)(lVar6 + 8 + (ulonglong)uVar9 * 8) +
               (ulonglong)(uVar10 + uVar9 * -0x800) * 0x10);
      lStack_98 = *plVar2;
      lStack_90 = plVar2[1];
      FUN_1800ecf20(&lStack_88,lVar11,lVar12,lVar11,&lStack_98);
    } while (lVar11 != 0);
  }
  lVar6 = *param_2;
  lStack_80 = param_2[1];
  iVar5 = *(int *)(param_3 + 8);
  uVar9 = (uint)lStack_80;
  lStack_88 = lVar6;
  if ((int)uVar9 < iVar5) {
    uVar10 = *(uint *)(param_1 + 1);
    lVar11 = *param_1;
    lVar13 = (ulonglong)(uVar10 - (uVar10 & 0xfffff800)) * 0x10;
    lVar12 = (ulonglong)(uVar10 >> 0xb) * 8;
    do {
      uVar10 = uVar9 >> 0xb;
      cVar8 = func_0x0001800d40c0(*(longlong *)(lVar6 + 8 + (ulonglong)uVar10 * 8) +
                                  (ulonglong)(uVar9 + uVar10 * -0x800) * 0x10,
                                  *(longlong *)(lVar12 + 8 + lVar11) + lVar13);
      if (cVar8 != '\0') {
        puVar3 = (undefined8 *)
                 (*(longlong *)(lVar6 + 8 + (ulonglong)uVar10 * 8) +
                 (ulonglong)(uVar9 + uVar10 * -0x800) * 0x10);
        uStack_78 = *puVar3;
        uStack_70 = puVar3[1];
        puVar3 = (undefined8 *)(*(longlong *)(lVar12 + 8 + *param_1) + lVar13);
        uVar7 = puVar3[1];
        puVar4 = (undefined8 *)
                 (*(longlong *)(lVar6 + 8 + (ulonglong)uVar10 * 8) +
                 (ulonglong)(uVar9 + uVar10 * -0x800) * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar7;
        lStack_68 = *param_1;
        lStack_60 = param_1[1];
        FUN_1800ecf20(&lStack_68,0,(longlong)(int)param_2[1] - (longlong)(int)param_1[1],0,
                      &uStack_78);
      }
      lVar11 = *param_1;
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < iVar5);
  }
  lVar6 = *param_2;
  uVar9 = *(uint *)(param_2 + 1);
  lStack_60 = param_2[1];
  lVar12 = param_1[1];
  if (1 < (longlong)(int)uVar9 - (longlong)(int)lVar12) {
    lVar11 = *param_1;
    uVar10 = (uint)param_1[1];
    lStack_68 = lVar6;
    do {
      uVar1 = uVar9 - 1;
      puVar3 = (undefined8 *)
               (*(longlong *)(lVar6 + 8 + (ulonglong)(uVar1 >> 0xb) * 8) +
               (ulonglong)(uVar1 & 0x7ff) * 0x10);
      uStack_58 = *puVar3;
      uStack_50 = puVar3[1];
      puVar3 = (undefined8 *)
               (*(longlong *)(lVar11 + (ulonglong)(uVar10 >> 0xb) * 8 + 8) +
               (ulonglong)(uVar10 + (uVar10 >> 0xb) * -0x800) * 0x10);
      uVar7 = puVar3[1];
      puVar4 = (undefined8 *)
               (*(longlong *)(lVar6 + 8 + (ulonglong)(uVar1 >> 0xb) * 8) +
               (ulonglong)(uVar1 & 0x7ff) * 0x10);
      *puVar4 = *puVar3;
      puVar4[1] = uVar7;
      lStack_48 = *param_1;
      lStack_40 = param_1[1];
      FUN_1800ecf20(&lStack_48,0,((longlong)(int)uVar9 - (longlong)(int)uVar10) + -1,0,&uStack_58);
      uVar9 = uVar1;
    } while (1 < (longlong)(int)uVar1 - (longlong)(int)lVar12);
  }
  return;
}






// 函数: void FUN_1800ebecf(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
void FUN_1800ebecf(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6,longlong param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,longlong param_12,
                  longlong param_13,undefined8 param_14,undefined8 param_15,longlong param_16,
                  longlong param_17)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  int unaff_EBP;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar12;
  longlong *unaff_R15;
  longlong lVar13;
  longlong *in_stack_000000d8;
  
  lVar6 = param_6;
  lVar12 = unaff_RDI - unaff_EBP;
  if (1 < lVar12) {
    lVar11 = (lVar12 + -2 >> 1) + 1;
    do {
      param_8 = *unaff_RSI;
      param_9 = unaff_RSI[1];
      lVar11 = lVar11 + -1;
      uVar10 = (int)lVar11 + unaff_EBP;
      uVar9 = uVar10 >> 0xb;
      plVar2 = (longlong *)
               (*(longlong *)(lVar6 + 8 + (ulonglong)uVar9 * 8) +
               (ulonglong)(uVar10 + uVar9 * -0x800) * 0x10);
      param_6 = *plVar2;
      param_7 = plVar2[1];
      FUN_1800ecf20(&param_8,lVar11,lVar12,lVar11,&param_6);
    } while (lVar11 != 0);
  }
  lVar6 = *unaff_R15;
  param_9 = unaff_R15[1];
  iVar5 = *(int *)(param_3 + 8);
  uVar9 = (uint)param_9;
  param_8 = lVar6;
  if ((int)uVar9 < iVar5) {
    uVar10 = *(uint *)(unaff_RSI + 1);
    lVar11 = *unaff_RSI;
    lVar13 = (ulonglong)(uVar10 - (uVar10 & 0xfffff800)) * 0x10;
    lVar12 = (ulonglong)(uVar10 >> 0xb) * 8;
    do {
      uVar10 = uVar9 >> 0xb;
      cVar8 = func_0x0001800d40c0(*(longlong *)(lVar6 + 8 + (ulonglong)uVar10 * 8) +
                                  (ulonglong)(uVar9 + uVar10 * -0x800) * 0x10,
                                  *(longlong *)(lVar12 + 8 + lVar11) + lVar13);
      if (cVar8 != '\0') {
        puVar3 = (undefined8 *)
                 (*(longlong *)(lVar6 + 8 + (ulonglong)uVar10 * 8) +
                 (ulonglong)(uVar9 + uVar10 * -0x800) * 0x10);
        param_10 = *puVar3;
        param_11 = puVar3[1];
        puVar3 = (undefined8 *)(*(longlong *)(lVar12 + 8 + *unaff_RSI) + lVar13);
        uVar7 = puVar3[1];
        puVar4 = (undefined8 *)
                 (*(longlong *)(lVar6 + 8 + (ulonglong)uVar10 * 8) +
                 (ulonglong)(uVar9 + uVar10 * -0x800) * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar7;
        param_12 = *unaff_RSI;
        param_13 = unaff_RSI[1];
        FUN_1800ecf20(&param_12,0,(longlong)(int)in_stack_000000d8[1] - (longlong)(int)unaff_RSI[1],
                      0,&param_10);
      }
      lVar11 = *unaff_RSI;
      uVar9 = uVar9 + 1;
      unaff_R15 = in_stack_000000d8;
    } while ((int)uVar9 < iVar5);
  }
  lVar6 = *unaff_R15;
  uVar9 = *(uint *)(unaff_R15 + 1);
  param_13 = unaff_R15[1];
  lVar12 = unaff_RSI[1];
  if (1 < (longlong)(int)uVar9 - (longlong)(int)lVar12) {
    lVar11 = *unaff_RSI;
    uVar10 = (uint)unaff_RSI[1];
    param_12 = lVar6;
    do {
      uVar1 = uVar9 - 1;
      puVar3 = (undefined8 *)
               (*(longlong *)(lVar6 + 8 + (ulonglong)(uVar1 >> 0xb) * 8) +
               (ulonglong)(uVar1 & 0x7ff) * 0x10);
      param_14 = *puVar3;
      param_15 = puVar3[1];
      puVar3 = (undefined8 *)
               (*(longlong *)(lVar11 + (ulonglong)(uVar10 >> 0xb) * 8 + 8) +
               (ulonglong)(uVar10 + (uVar10 >> 0xb) * -0x800) * 0x10);
      uVar7 = puVar3[1];
      puVar4 = (undefined8 *)
               (*(longlong *)(lVar6 + 8 + (ulonglong)(uVar1 >> 0xb) * 8) +
               (ulonglong)(uVar1 & 0x7ff) * 0x10);
      *puVar4 = *puVar3;
      puVar4[1] = uVar7;
      param_16 = *unaff_RSI;
      param_17 = unaff_RSI[1];
      FUN_1800ecf20(&param_16,0,((longlong)(int)uVar9 - (longlong)(int)uVar10) + -1,0,&param_14);
      uVar9 = uVar1;
    } while (1 < (longlong)(int)uVar1 - (longlong)(int)lVar12);
  }
  return;
}






// 函数: void FUN_1800ec0a8(void)
void FUN_1800ec0a8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  uint uVar6;
  uint in_R9D;
  longlong in_stack_00000060;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  longlong lStack0000000000000080;
  longlong lStack0000000000000088;
  
  lVar3 = *unaff_RSI;
  uVar6 = (uint)unaff_RSI[1];
  do {
    uVar5 = in_R9D - 1;
    puVar1 = (undefined8 *)
             (*(longlong *)(in_stack_00000060 + 8 + (ulonglong)(uVar5 >> 0xb) * 8) +
             (ulonglong)(uVar5 & 0x7ff) * 0x10);
    uStack0000000000000070 = *puVar1;
    uStack0000000000000078 = puVar1[1];
    puVar1 = (undefined8 *)
             (*(longlong *)(lVar3 + (ulonglong)(uVar6 >> 0xb) * 8 + 8) +
             (ulonglong)(uVar6 + (uVar6 >> 0xb) * -0x800) * 0x10);
    uVar4 = puVar1[1];
    puVar2 = (undefined8 *)
             (*(longlong *)(in_stack_00000060 + 8 + (ulonglong)(uVar5 >> 0xb) * 8) +
             (ulonglong)(uVar5 & 0x7ff) * 0x10);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    lStack0000000000000080 = *unaff_RSI;
    lStack0000000000000088 = unaff_RSI[1];
    FUN_1800ecf20(&stack0x00000080,0,((longlong)(int)in_R9D - (longlong)(int)uVar6) + -1,0,
                  &stack0x00000070);
    in_R9D = uVar5;
  } while (1 < (int)uVar5 - unaff_RBP);
  return;
}






// 函数: void FUN_1800ec180(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)
void FUN_1800ec180(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  bool bVar11;
  
  lVar9 = (longlong)param_2 - (longlong)param_1 >> 3;
  if (1 < lVar9) {
    lVar3 = (lVar9 + -2 >> 1) + 1;
    lVar6 = lVar3 * 2 + 2;
    do {
      uVar1 = param_1[lVar3 + -1];
      lVar3 = lVar3 + -1;
      lVar6 = lVar6 + -2;
      lVar4 = lVar3;
      for (lVar5 = lVar6; lVar5 < lVar9; lVar5 = lVar5 * 2 + 2) {
        cVar2 = func_0x0001800da750(param_1[lVar5],param_1[lVar5 + -1]);
        if (cVar2 != '\0') {
          lVar5 = lVar5 + -1;
        }
        param_1[lVar4] = param_1[lVar5];
        lVar4 = lVar5;
      }
      if (lVar5 == lVar9) {
        param_1[lVar4] = param_1[lVar5 + -1];
        lVar4 = lVar5 + -1;
      }
      while (lVar3 < lVar4) {
        lVar5 = lVar4 + -1 >> 1;
        cVar2 = func_0x0001800da750(param_1[lVar5],uVar1);
        if (cVar2 == '\0') break;
        param_1[lVar4] = param_1[lVar5];
        lVar4 = lVar5;
      }
      param_1[lVar4] = uVar1;
    } while (lVar3 != 0);
  }
  uVar7 = 0;
  uVar8 = (ulonglong)((longlong)param_3 + (7 - (longlong)param_2)) >> 3;
  if (param_3 < param_2) {
    uVar8 = uVar7;
  }
  puVar10 = param_2;
  if (uVar8 != 0) {
    do {
      lVar6 = 0;
      cVar2 = func_0x0001800da750(*puVar10,*param_1);
      if (cVar2 != '\0') {
        uVar1 = *puVar10;
        lVar3 = 2;
        *puVar10 = *param_1;
        bVar11 = lVar9 == 2;
        lVar4 = lVar6;
        if (2 < lVar9) {
          do {
            cVar2 = func_0x0001800da750(param_1[lVar3],param_1[lVar3 + -1]);
            lVar6 = lVar3;
            if (cVar2 != '\0') {
              lVar6 = lVar3 + -1;
            }
            param_1[lVar4] = param_1[lVar6];
            lVar3 = lVar6 * 2 + 2;
            bVar11 = lVar3 == lVar9;
            lVar4 = lVar6;
          } while (lVar3 < lVar9);
        }
        if (bVar11) {
          param_1[lVar6] = param_1[lVar3 + -1];
          lVar6 = lVar3 + -1;
        }
        while (0 < lVar6) {
          lVar3 = lVar6 + -1 >> 1;
          cVar2 = func_0x0001800da750(param_1[lVar3],uVar1);
          if (cVar2 == '\0') break;
          param_1[lVar6] = param_1[lVar3];
          lVar6 = lVar3;
        }
        param_1[lVar6] = uVar1;
      }
      puVar10 = puVar10 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar8);
  }
  if (1 < lVar9) {
    param_2 = param_2 + -1;
    do {
      lVar6 = 0;
      uVar1 = *param_2;
      lVar3 = 2;
      lVar9 = lVar9 + -1;
      *param_2 = *param_1;
      bVar11 = lVar9 == 2;
      lVar4 = lVar6;
      if (2 < lVar9) {
        do {
          cVar2 = func_0x0001800da750(param_1[lVar3],param_1[lVar3 + -1]);
          lVar6 = lVar3;
          if (cVar2 != '\0') {
            lVar6 = lVar3 + -1;
          }
          param_1[lVar4] = param_1[lVar6];
          lVar3 = lVar6 * 2 + 2;
          bVar11 = lVar3 == lVar9;
          lVar4 = lVar6;
        } while (lVar3 < lVar9);
      }
      if (bVar11) {
        param_1[lVar6] = param_1[lVar3 + -1];
        lVar6 = lVar3 + -1;
      }
      while (0 < lVar6) {
        lVar9 = lVar6 + -1 >> 1;
        cVar2 = func_0x0001800da750(param_1[lVar9],uVar1);
        if (cVar2 == '\0') break;
        param_1[lVar6] = param_1[lVar9];
        lVar6 = lVar9;
      }
      param_2 = param_2 + -1;
      param_1[lVar6] = uVar1;
      lVar9 = (8 - (longlong)param_1) + (longlong)param_2 >> 3;
    } while (1 < lVar9);
  }
  return;
}






// 函数: void FUN_1800ec19b(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)
void FUN_1800ec19b(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong unaff_R14;
  longlong lVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined8 *in_stack_00000068;
  undefined8 *in_stack_00000070;
  
  lVar9 = unaff_R14 - (longlong)param_1 >> 3;
  if (1 < lVar9) {
    lVar3 = (lVar9 + -2 >> 1) + 1;
    lVar6 = lVar3 * 2 + 2;
    do {
      uVar1 = param_1[lVar3 + -1];
      lVar3 = lVar3 + -1;
      lVar6 = lVar6 + -2;
      lVar4 = lVar3;
      for (lVar5 = lVar6; lVar5 < lVar9; lVar5 = lVar5 * 2 + 2) {
        cVar2 = func_0x0001800da750(param_1[lVar5],param_1[lVar5 + -1]);
        if (cVar2 != '\0') {
          lVar5 = lVar5 + -1;
        }
        param_1[lVar4] = param_1[lVar5];
        lVar4 = lVar5;
      }
      if (lVar5 == lVar9) {
        param_1[lVar4] = param_1[lVar5 + -1];
        lVar4 = lVar5 + -1;
      }
      while (lVar3 < lVar4) {
        lVar5 = lVar4 + -1 >> 1;
        cVar2 = func_0x0001800da750(param_1[lVar5],uVar1);
        if (cVar2 == '\0') break;
        param_1[lVar4] = param_1[lVar5];
        lVar4 = lVar5;
      }
      param_1[lVar4] = uVar1;
      param_3 = in_stack_00000070;
      param_2 = in_stack_00000068;
    } while (lVar3 != 0);
  }
  uVar7 = 0;
  uVar8 = (ulonglong)((longlong)param_3 + (7 - (longlong)param_2)) >> 3;
  if (param_3 < param_2) {
    uVar8 = uVar7;
  }
  puVar10 = param_2;
  if (uVar8 != 0) {
    do {
      lVar6 = 0;
      cVar2 = func_0x0001800da750(*puVar10,*param_1);
      if (cVar2 != '\0') {
        uVar1 = *puVar10;
        lVar3 = 2;
        *puVar10 = *param_1;
        bVar11 = lVar9 == 2;
        lVar4 = lVar6;
        if (2 < lVar9) {
          do {
            cVar2 = func_0x0001800da750(param_1[lVar3],param_1[lVar3 + -1]);
            lVar6 = lVar3;
            if (cVar2 != '\0') {
              lVar6 = lVar3 + -1;
            }
            param_1[lVar4] = param_1[lVar6];
            lVar3 = lVar6 * 2 + 2;
            bVar11 = lVar3 == lVar9;
            lVar4 = lVar6;
          } while (lVar3 < lVar9);
        }
        if (bVar11) {
          param_1[lVar6] = param_1[lVar3 + -1];
          lVar6 = lVar3 + -1;
        }
        while (0 < lVar6) {
          lVar3 = lVar6 + -1 >> 1;
          cVar2 = func_0x0001800da750(param_1[lVar3],uVar1);
          if (cVar2 == '\0') break;
          param_1[lVar6] = param_1[lVar3];
          lVar6 = lVar3;
        }
        param_1[lVar6] = uVar1;
      }
      puVar10 = puVar10 + 1;
      uVar7 = uVar7 + 1;
      param_2 = in_stack_00000068;
    } while (uVar7 < uVar8);
  }
  if (1 < lVar9) {
    param_2 = param_2 + -1;
    do {
      lVar6 = 0;
      uVar1 = *param_2;
      lVar3 = 2;
      lVar9 = lVar9 + -1;
      *param_2 = *param_1;
      bVar11 = lVar9 == 2;
      lVar4 = lVar6;
      if (2 < lVar9) {
        do {
          cVar2 = func_0x0001800da750(param_1[lVar3],param_1[lVar3 + -1]);
          lVar6 = lVar3;
          if (cVar2 != '\0') {
            lVar6 = lVar3 + -1;
          }
          param_1[lVar4] = param_1[lVar6];
          lVar3 = lVar6 * 2 + 2;
          bVar11 = lVar3 == lVar9;
          lVar4 = lVar6;
        } while (lVar3 < lVar9);
      }
      if (bVar11) {
        param_1[lVar6] = param_1[lVar3 + -1];
        lVar6 = lVar3 + -1;
      }
      while (0 < lVar6) {
        lVar9 = lVar6 + -1 >> 1;
        cVar2 = func_0x0001800da750(param_1[lVar9],uVar1);
        if (cVar2 == '\0') break;
        param_1[lVar6] = param_1[lVar9];
        lVar6 = lVar9;
      }
      param_2 = param_2 + -1;
      param_1[lVar6] = uVar1;
      lVar9 = (8 - (longlong)param_1) + (longlong)param_2 >> 3;
    } while (1 < lVar9);
  }
  return;
}






// 函数: void FUN_1800ec362(undefined8 param_1,longlong param_2)
void FUN_1800ec362(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *unaff_RBX;
  longlong lVar3;
  longlong unaff_RDI;
  longlong lVar4;
  longlong unaff_R14;
  longlong lVar5;
  undefined8 *puVar6;
  bool bVar7;
  
  puVar6 = (undefined8 *)(param_2 + -8);
  do {
    uVar1 = *puVar6;
    lVar4 = 2;
    lVar5 = unaff_R14 + -1;
    *puVar6 = *unaff_RBX;
    bVar7 = lVar5 == 2;
    lVar3 = unaff_RDI;
    if (2 < lVar5) {
      do {
        cVar2 = func_0x0001800da750(unaff_RBX[lVar4],unaff_RBX[lVar4 + -1]);
        unaff_RDI = lVar4;
        if (cVar2 != '\0') {
          unaff_RDI = lVar4 + -1;
        }
        unaff_RBX[lVar3] = unaff_RBX[unaff_RDI];
        lVar4 = unaff_RDI * 2 + 2;
        bVar7 = lVar4 == lVar5;
        lVar3 = unaff_RDI;
      } while (lVar4 < lVar5);
    }
    if (bVar7) {
      unaff_RBX[unaff_RDI] = unaff_RBX[lVar4 + -1];
      unaff_RDI = lVar4 + -1;
    }
    while (0 < unaff_RDI) {
      lVar4 = unaff_RDI + -1 >> 1;
      cVar2 = func_0x0001800da750(unaff_RBX[lVar4],uVar1);
      if (cVar2 == '\0') break;
      unaff_RBX[unaff_RDI] = unaff_RBX[lVar4];
      unaff_RDI = lVar4;
    }
    puVar6 = puVar6 + -1;
    unaff_RBX[unaff_RDI] = uVar1;
    unaff_RDI = 0;
    unaff_R14 = (8 - (longlong)unaff_RBX) + (longlong)puVar6 >> 3;
    if (unaff_R14 < 2) {
      return;
    }
  } while( true );
}






