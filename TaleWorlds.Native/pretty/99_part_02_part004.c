#include "TaleWorlds.Native.Split.h"

// 99_part_02_part004.c - 7 个函数

// 函数: void FUN_1800eae10(longlong *param_1,longlong *param_2,longlong param_3)
void FUN_1800eae10(longlong *param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong lStack_b8;
  longlong lStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar10 = (longlong)(int)param_2[1];
  uVar3 = *(uint *)(param_1 + 1);
  lVar11 = (longlong)(int)uVar3;
  lVar5 = lVar10 - lVar11;
  do {
    if ((lVar5 < 0x1d) || (param_3 < 1)) {
      if (param_3 == 0) {
        lStack_88 = *param_2;
        lStack_80 = param_2[1];
        uStack_68 = (undefined4)*param_1;
        uStack_64 = *(undefined4 *)((longlong)param_1 + 4);
        uStack_60 = (undefined4)param_1[1];
        uStack_5c = *(undefined4 *)((longlong)param_1 + 0xc);
        lStack_78 = lStack_88;
        lStack_70 = lStack_80;
        FUN_1800ebb40(&uStack_68,&lStack_78,&lStack_88);
      }
      return;
    }
    uVar9 = (int)lVar10 - 1;
    uVar6 = uVar9 >> 0xb;
    puVar1 = (undefined8 *)
             (*(longlong *)(*param_2 + 8 + (ulonglong)uVar6 * 8) +
             (ulonglong)(uVar9 + uVar6 * -0x800) * 0x18);
    uVar6 = (int)(((int)lVar10 - lVar11) / 2) + uVar3;
    uVar9 = uVar6 >> 0xb;
    puVar7 = (undefined8 *)
             (*(longlong *)(*param_1 + 8 + (ulonglong)uVar9 * 8) +
             (ulonglong)(uVar6 + uVar9 * -0x800) * 0x18);
    puVar2 = (undefined8 *)
             (*(longlong *)(*param_1 + 8 + (ulonglong)(uVar3 >> 0xb) * 8) +
             (ulonglong)(uVar3 + (uVar3 >> 0xb) * -0x800) * 0x18);
    cVar4 = func_0x0001800d4090(puVar2[2],puVar7[2]);
    if (cVar4 == '\0') {
      cVar4 = func_0x0001800d4090(puVar2[2],puVar1[2]);
      puVar8 = puVar2;
      if (cVar4 == '\0') {
        cVar4 = func_0x0001800d4090(puVar7[2],puVar1[2]);
        goto LAB_1800eaf28;
      }
    }
    else {
      cVar4 = func_0x0001800d4090(puVar7[2],puVar1[2]);
      puVar8 = puVar7;
      if (cVar4 == '\0') {
        cVar4 = func_0x0001800d4090(puVar2[2],puVar1[2]);
        puVar7 = puVar2;
LAB_1800eaf28:
        puVar8 = puVar7;
        if (cVar4 != '\0') {
          puVar8 = puVar1;
        }
      }
    }
    uStack_58 = *puVar8;
    uStack_50 = puVar8[1];
    uStack_48 = puVar8[2];
    uStack_d8 = (undefined4)*param_2;
    uStack_d4 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_d0 = (undefined4)param_2[1];
    uStack_cc = *(undefined4 *)((longlong)param_2 + 0xc);
    uStack_c8 = (undefined4)*param_1;
    uStack_c4 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_c0 = (undefined4)param_1[1];
    uStack_bc = *(undefined4 *)((longlong)param_1 + 0xc);
    FUN_1800ec740(&lStack_b8,&uStack_c8,&uStack_d8,&uStack_58);
    lVar5 = lStack_b0;
    lVar10 = lStack_b8;
    uStack_a8 = (undefined4)*param_2;
    uStack_a4 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_a0 = (undefined4)param_2[1];
    uStack_9c = *(undefined4 *)((longlong)param_2 + 0xc);
    param_3 = param_3 + -1;
    lStack_98 = lStack_b8;
    lStack_90 = lStack_b0;
    FUN_1800eae10(&lStack_98,&uStack_a8,param_3,&SUB_1800d4090);
    *param_2 = lVar10;
    param_2[1] = lVar5;
    lVar10 = (longlong)(int)param_2[1];
    lVar5 = lVar10 - lVar11;
  } while( true );
}






// 函数: void FUN_1800eae25(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,
void FUN_1800eae25(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,longlong param_10,longlong param_11,undefined8 param_12,
                  undefined8 param_13,longlong param_14,longlong param_15,longlong param_16,
                  longlong param_17,longlong param_18,longlong param_19,undefined4 param_20,
                  undefined4 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  undefined8 unaff_RBX;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  uint uVar10;
  longlong in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  longlong lVar11;
  longlong *unaff_R14;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000ac;
  
  *(undefined8 *)(in_R11 + 0x10) = unaff_RBP;
  *(undefined8 *)(in_R11 + -0x20) = unaff_R12;
  *(undefined8 *)(in_R11 + -0x28) = unaff_R13;
  uVar3 = *(uint *)(param_1 + 1);
  lVar11 = (longlong)(int)uVar3;
  if (0x1c < param_4 - lVar11) {
    *(undefined8 *)(in_R11 + 8) = unaff_RBX;
    *(undefined8 *)(in_R11 + 0x18) = unaff_RSI;
    *(undefined8 *)(in_R11 + -0x18) = unaff_RDI;
    *(undefined4 *)(in_R11 + -0x38) = unaff_XMM6_Da;
    *(undefined4 *)(in_R11 + -0x34) = unaff_XMM6_Db;
    *(undefined4 *)(in_R11 + -0x30) = unaff_XMM6_Dc;
    *(undefined4 *)(in_R11 + -0x2c) = unaff_XMM6_Dd;
    do {
      if (param_3 < 1) break;
      uVar10 = (int)param_4 - 1;
      uVar7 = uVar10 >> 0xb;
      puVar1 = (undefined8 *)
               (*(longlong *)(*unaff_R14 + 8 + (ulonglong)uVar7 * 8) +
               (ulonglong)(uVar10 + uVar7 * -0x800) * 0x18);
      uVar7 = (int)(((int)param_4 - lVar11) / 2) + uVar3;
      uVar10 = uVar7 >> 0xb;
      puVar8 = (undefined8 *)
               (*(longlong *)(*param_1 + 8 + (ulonglong)uVar10 * 8) +
               (ulonglong)(uVar7 + uVar10 * -0x800) * 0x18);
      puVar2 = (undefined8 *)
               (*(longlong *)(*param_1 + 8 + (ulonglong)(uVar3 >> 0xb) * 8) +
               (ulonglong)(uVar3 + (uVar3 >> 0xb) * -0x800) * 0x18);
      cVar6 = func_0x0001800d4090(puVar2[2],puVar8[2]);
      if (cVar6 == '\0') {
        cVar6 = func_0x0001800d4090(puVar2[2],puVar1[2]);
        puVar9 = puVar2;
        if (cVar6 == '\0') {
          cVar6 = func_0x0001800d4090(puVar8[2],puVar1[2]);
          goto LAB_1800eaf28;
        }
      }
      else {
        cVar6 = func_0x0001800d4090(puVar8[2],puVar1[2]);
        puVar9 = puVar8;
        if (cVar6 == '\0') {
          cVar6 = func_0x0001800d4090(puVar2[2],puVar1[2]);
          puVar8 = puVar2;
LAB_1800eaf28:
          puVar9 = puVar8;
          if (cVar6 != '\0') {
            puVar9 = puVar1;
          }
        }
      }
      param_22 = *puVar9;
      param_23 = puVar9[1];
      param_24 = puVar9[2];
      param_6._0_4_ = (undefined4)*unaff_R14;
      param_6._4_4_ = *(undefined4 *)((longlong)unaff_R14 + 4);
      param_7._0_4_ = (undefined4)unaff_R14[1];
      param_7._4_4_ = *(undefined4 *)((longlong)unaff_R14 + 0xc);
      param_8._0_4_ = (undefined4)*param_1;
      param_8._4_4_ = *(undefined4 *)((longlong)param_1 + 4);
      param_9._0_4_ = (undefined4)param_1[1];
      param_9._4_4_ = *(undefined4 *)((longlong)param_1 + 0xc);
      FUN_1800ec740(&param_10,&param_8,&param_6,&param_22);
      lVar5 = param_11;
      lVar4 = param_10;
      param_12._0_4_ = (undefined4)*unaff_R14;
      param_12._4_4_ = *(undefined4 *)((longlong)unaff_R14 + 4);
      param_13._0_4_ = (undefined4)unaff_R14[1];
      param_13._4_4_ = *(undefined4 *)((longlong)unaff_R14 + 0xc);
      param_3 = param_3 + -1;
      param_14 = param_10;
      param_15 = param_11;
      FUN_1800eae10(&param_14,&param_12,param_3,&SUB_1800d4090);
      *unaff_R14 = lVar4;
      unaff_R14[1] = lVar5;
      param_4 = (longlong)(int)unaff_R14[1];
    } while (0x1c < param_4 - lVar11);
  }
  if (param_3 == 0) {
    param_16 = *unaff_R14;
    param_17 = unaff_R14[1];
    param_20 = (undefined4)*param_1;
    uStack00000000000000a4 = *(undefined4 *)((longlong)param_1 + 4);
    param_21 = (undefined4)param_1[1];
    uStack00000000000000ac = *(undefined4 *)((longlong)param_1 + 0xc);
    param_18 = param_16;
    param_19 = param_17;
    FUN_1800ebb40(&param_20,&param_18,&param_16);
  }
  return;
}






// 函数: void FUN_1800eae4b(void)
void FUN_1800eae4b(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 unaff_RBX;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  uint uVar10;
  longlong in_R9;
  longlong in_R11;
  ulonglong unaff_R13;
  longlong *unaff_R14;
  longlong *unaff_R15;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  longlong in_stack_00000050;
  longlong in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  longlong in_stack_00000070;
  longlong in_stack_00000078;
  longlong in_stack_00000080;
  longlong in_stack_00000088;
  longlong in_stack_00000090;
  longlong in_stack_00000098;
  undefined4 in_stack_000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 in_stack_000000a8;
  undefined4 uStack00000000000000ac;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  
  *(undefined8 *)(in_R11 + 8) = unaff_RBX;
  *(undefined8 *)(in_R11 + 0x18) = unaff_RSI;
  *(undefined8 *)(in_R11 + -0x18) = unaff_RDI;
  *(undefined4 *)(in_R11 + -0x38) = unaff_XMM6_Da;
  *(undefined4 *)(in_R11 + -0x34) = unaff_XMM6_Db;
  *(undefined4 *)(in_R11 + -0x30) = unaff_XMM6_Dc;
  *(undefined4 *)(in_R11 + -0x2c) = unaff_XMM6_Dd;
  do {
    if (unaff_RBP < 1) break;
    uVar10 = (int)in_R9 - 1;
    uVar6 = uVar10 >> 0xb;
    puVar1 = (undefined8 *)
             (*(longlong *)(*unaff_R14 + 8 + (ulonglong)uVar6 * 8) +
             (ulonglong)(uVar10 + uVar6 * -0x800) * 0x18);
    uVar6 = (int)((longlong)((longlong)(int)in_R9 - unaff_R13) / 2) + (int)unaff_R13;
    uVar10 = uVar6 >> 0xb;
    puVar8 = (undefined8 *)
             (*(longlong *)(*unaff_R15 + 8 + (ulonglong)uVar10 * 8) +
             (ulonglong)(uVar6 + uVar10 * -0x800) * 0x18);
    uVar7 = unaff_R13 >> 0xb & 0x1fffff;
    puVar2 = (undefined8 *)
             (*(longlong *)(*unaff_R15 + 8 + uVar7 * 8) +
             (ulonglong)(uint)((int)unaff_R13 + (int)uVar7 * -0x800) * 0x18);
    cVar5 = func_0x0001800d4090(puVar2[2],puVar8[2]);
    if (cVar5 == '\0') {
      cVar5 = func_0x0001800d4090(puVar2[2],puVar1[2]);
      puVar9 = puVar2;
      if (cVar5 == '\0') {
        cVar5 = func_0x0001800d4090(puVar8[2],puVar1[2]);
        goto LAB_1800eaf28;
      }
    }
    else {
      cVar5 = func_0x0001800d4090(puVar8[2],puVar1[2]);
      puVar9 = puVar8;
      if (cVar5 == '\0') {
        cVar5 = func_0x0001800d4090(puVar2[2],puVar1[2]);
        puVar8 = puVar2;
LAB_1800eaf28:
        puVar9 = puVar8;
        if (cVar5 != '\0') {
          puVar9 = puVar1;
        }
      }
    }
    in_stack_000000b0 = *puVar9;
    in_stack_000000b8 = puVar9[1];
    in_stack_000000c0 = puVar9[2];
    uStack0000000000000030 = (undefined4)*unaff_R14;
    uStack0000000000000034 = *(undefined4 *)((longlong)unaff_R14 + 4);
    uStack0000000000000038 = (undefined4)unaff_R14[1];
    uStack000000000000003c = *(undefined4 *)((longlong)unaff_R14 + 0xc);
    uStack0000000000000040 = (undefined4)*unaff_R15;
    uStack0000000000000044 = *(undefined4 *)((longlong)unaff_R15 + 4);
    uStack0000000000000048 = (undefined4)unaff_R15[1];
    uStack000000000000004c = *(undefined4 *)((longlong)unaff_R15 + 0xc);
    FUN_1800ec740(&stack0x00000050,&stack0x00000040,&stack0x00000030,&stack0x000000b0);
    lVar4 = in_stack_00000058;
    lVar3 = in_stack_00000050;
    uStack0000000000000060 = (undefined4)*unaff_R14;
    uStack0000000000000064 = *(undefined4 *)((longlong)unaff_R14 + 4);
    uStack0000000000000068 = (undefined4)unaff_R14[1];
    uStack000000000000006c = *(undefined4 *)((longlong)unaff_R14 + 0xc);
    unaff_RBP = unaff_RBP + -1;
    in_stack_00000070 = in_stack_00000050;
    in_stack_00000078 = in_stack_00000058;
    FUN_1800eae10(&stack0x00000070,&stack0x00000060,unaff_RBP,&SUB_1800d4090);
    *unaff_R14 = lVar3;
    unaff_R14[1] = lVar4;
    in_R9 = (longlong)(int)unaff_R14[1];
  } while (0x1c < (longlong)(in_R9 - unaff_R13));
  if (unaff_RBP == 0) {
    in_stack_00000080 = *unaff_R14;
    in_stack_00000088 = unaff_R14[1];
    in_stack_000000a0 = (undefined4)*unaff_R15;
    uStack00000000000000a4 = *(undefined4 *)((longlong)unaff_R15 + 4);
    in_stack_000000a8 = (undefined4)unaff_R15[1];
    uStack00000000000000ac = *(undefined4 *)((longlong)unaff_R15 + 0xc);
    in_stack_00000090 = in_stack_00000080;
    in_stack_00000098 = in_stack_00000088;
    FUN_1800ebb40(&stack0x000000a0,&stack0x00000090,&stack0x00000080);
  }
  return;
}






// 函数: void FUN_1800eafdd(void)
void FUN_1800eafdd(void)

{
  longlong unaff_RBP;
  undefined8 *unaff_R14;
  undefined4 *unaff_R15;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  
  if (unaff_RBP == 0) {
    uStack0000000000000080 = *unaff_R14;
    uStack0000000000000088 = unaff_R14[1];
    uStack00000000000000a0 = *unaff_R15;
    uStack00000000000000a4 = unaff_R15[1];
    uStack00000000000000a8 = unaff_R15[2];
    uStack00000000000000ac = unaff_R15[3];
    uStack0000000000000090 = uStack0000000000000080;
    uStack0000000000000098 = uStack0000000000000088;
    FUN_1800ebb40(&stack0x000000a0,&stack0x00000090,&stack0x00000080);
  }
  return;
}






// 函数: void FUN_1800eaffa(void)
void FUN_1800eaffa(void)

{
  undefined8 *unaff_R14;
  undefined4 *unaff_R15;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  
  uStack0000000000000080 = *unaff_R14;
  uStack0000000000000088 = unaff_R14[1];
  uStack00000000000000a0 = *unaff_R15;
  uStack00000000000000a4 = unaff_R15[1];
  uStack00000000000000a8 = unaff_R15[2];
  uStack00000000000000ac = unaff_R15[3];
  uStack0000000000000090 = uStack0000000000000080;
  uStack0000000000000098 = uStack0000000000000088;
  FUN_1800ebb40(&stack0x000000a0,&stack0x00000090,&stack0x00000080);
  return;
}






// 函数: void FUN_1800eb050(longlong *param_1,longlong *param_2,longlong param_3)
void FUN_1800eb050(longlong *param_1,longlong *param_2,longlong param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  char cVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  uint uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  iVar2 = (int)param_1[1];
  lVar20 = (longlong)(int)param_2[1];
  lVar19 = lVar20 - iVar2;
  do {
    if ((lVar19 < 0x1d) || (param_3 < 1)) {
      if (param_3 == 0) {
        lStack_88 = *param_2;
        lStack_80 = param_2[1];
        uStack_68 = (undefined4)*param_1;
        uStack_64 = *(undefined4 *)((longlong)param_1 + 4);
        uStack_60 = (undefined4)param_1[1];
        uStack_5c = *(undefined4 *)((longlong)param_1 + 0xc);
        lStack_78 = lStack_88;
        lStack_70 = lStack_80;
        FUN_1800ebe90(&uStack_68,&lStack_78,&lStack_88);
      }
      return;
    }
    uVar18 = (int)lVar20 - 1;
    uVar13 = uVar18 >> 0xb;
    puVar17 = (undefined8 *)
              (*(longlong *)(*param_2 + 8 + (ulonglong)uVar13 * 8) +
              (ulonglong)(uVar18 + uVar13 * -0x800) * 0x10);
    uVar13 = (int)(((longlong)(int)lVar20 - (longlong)iVar2) / 2) + iVar2;
    uVar18 = uVar13 >> 0xb;
    puVar14 = (undefined8 *)
              (*(longlong *)(*param_1 + 8 + (ulonglong)uVar18 * 8) +
              (ulonglong)(uVar13 + uVar18 * -0x800) * 0x10);
    uVar12 = (ulonglong)(longlong)iVar2 >> 0xb & 0x1fffff;
    puVar16 = (undefined8 *)
              (*(longlong *)(*param_1 + 8 + uVar12 * 8) +
              (ulonglong)(uint)(iVar2 + (int)uVar12 * -0x800) * 0x10);
    cVar11 = func_0x0001800d40c0(puVar16,puVar14);
    if (cVar11 == '\0') {
      cVar11 = func_0x0001800d40c0(puVar16,puVar17);
      puVar15 = puVar16;
      if (cVar11 == '\0') {
        cVar11 = func_0x0001800d40c0(puVar14,puVar17);
        goto LAB_1800eb177;
      }
    }
    else {
      cVar11 = func_0x0001800d40c0(puVar14,puVar17);
      puVar15 = puVar14;
      if (cVar11 == '\0') {
        cVar11 = func_0x0001800d40c0(puVar16,puVar17);
        puVar14 = puVar16;
LAB_1800eb177:
        puVar15 = puVar14;
        if (cVar11 != '\0') {
          puVar15 = puVar17;
        }
      }
    }
    uStack_b8 = *puVar15;
    uStack_b0 = puVar15[1];
    lVar20 = *param_2;
    lStack_a0 = param_2[1];
    lVar10 = *param_1;
    lVar19 = *param_1;
    uStack_c0 = *(uint *)(param_1 + 1);
    uVar4 = *(undefined4 *)((longlong)param_1 + 0xc);
    uVar13 = (uint)lStack_a0;
    lStack_a8 = lVar20;
    while( true ) {
      while( true ) {
        uVar18 = uStack_c0 >> 0xb;
        cVar11 = func_0x0001800d40c0(*(longlong *)(lVar19 + 8 + (ulonglong)uVar18 * 8) +
                                     (ulonglong)(uStack_c0 + uVar18 * -0x800) * 0x10,&uStack_b8);
        if (cVar11 == '\0') break;
        uStack_c0 = uStack_c0 + 1;
      }
      uVar13 = uVar13 - 1;
      cVar11 = func_0x0001800d40c0(&uStack_b8,
                                   (ulonglong)(uVar13 + (uVar13 >> 0xb) * -0x800) * 0x10 +
                                   *(longlong *)(lVar20 + 8 + (ulonglong)(uVar13 >> 0xb) * 8));
      while (cVar11 != '\0') {
        uVar13 = uVar13 - 1;
        cVar11 = func_0x0001800d40c0(&uStack_b8,
                                     (ulonglong)(uVar13 + (uVar13 >> 0xb) * -0x800) * 0x10 +
                                     *(longlong *)(lVar20 + 8 + (ulonglong)(uVar13 >> 0xb) * 8));
      }
      if ((int)uVar13 <= (int)uStack_c0) break;
      uVar12 = (ulonglong)(uStack_c0 + uVar18 * -0x800);
      puVar16 = (undefined8 *)
                ((ulonglong)(uVar13 + (uVar13 >> 0xb) * -0x800) * 0x10 +
                *(longlong *)(lVar20 + 8 + (ulonglong)(uVar13 >> 0xb) * 8));
      lVar3 = *(longlong *)(lVar19 + 8 + (ulonglong)uVar18 * 8);
      uStack_c0 = uStack_c0 + 1;
      uVar5 = *(undefined4 *)((longlong)puVar16 + 4);
      uVar6 = *(undefined4 *)(puVar16 + 1);
      uVar7 = *(undefined4 *)((longlong)puVar16 + 0xc);
      puVar14 = (undefined8 *)(lVar3 + uVar12 * 0x10);
      uVar8 = *puVar14;
      uVar9 = puVar14[1];
      puVar1 = (undefined4 *)(lVar3 + uVar12 * 0x10);
      *puVar1 = *(undefined4 *)puVar16;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      *puVar16 = uVar8;
      puVar16[1] = uVar9;
    }
    lVar20 = CONCAT44(uVar4,uStack_c0);
    param_3 = param_3 + -1;
    lStack_a8 = *param_2;
    lStack_a0 = param_2[1];
    lStack_98 = lVar10;
    lStack_90 = lVar20;
    FUN_1800eb050(&lStack_98,&lStack_a8,param_3,&SUB_1800d40c0);
    *param_2 = lVar10;
    param_2[1] = lVar20;
    lVar20 = (longlong)(int)param_2[1];
    lVar19 = lVar20 - iVar2;
  } while( true );
}






// 函数: void FUN_1800eb07f(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
void FUN_1800eb07f(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong param_8,
                  longlong param_9,longlong param_10,longlong param_11,longlong param_12,
                  longlong param_13,longlong param_14,longlong param_15,undefined4 param_16,
                  undefined4 param_17)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  char cVar12;
  longlong in_RAX;
  ulonglong uVar13;
  uint uVar14;
  undefined8 unaff_RBX;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 *puVar17;
  undefined8 unaff_RDI;
  undefined8 *puVar18;
  uint uVar19;
  longlong in_R10;
  int iVar20;
  ulonglong in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  longlong *unaff_R14;
  longlong *unaff_R15;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 uStack0000000000000084;
  undefined4 uStack000000000000008c;
  longlong *in_stack_000000f0;
  longlong *in_stack_000000f8;
  longlong in_stack_00000100;
  int iStack0000000000000108;
  
  *(undefined8 *)(in_RAX + -0x18) = unaff_RBX;
  iStack0000000000000108 = (int)in_R11;
  if (0x1c < (longlong)(param_4 - in_R11)) {
    *(undefined8 *)(in_RAX + -0x20) = unaff_RBP;
    *(undefined8 *)(in_RAX + -0x28) = unaff_RSI;
    *(undefined8 *)(in_RAX + -0x30) = unaff_RDI;
    *(undefined8 *)(in_RAX + -0x38) = unaff_R12;
    *(undefined8 *)(in_RAX + -0x40) = unaff_R13;
    *(undefined4 *)(in_RAX + -0x58) = unaff_XMM6_Da;
    *(undefined4 *)(in_RAX + -0x54) = unaff_XMM6_Db;
    *(undefined4 *)(in_RAX + -0x50) = unaff_XMM6_Dc;
    *(undefined4 *)(in_RAX + -0x4c) = unaff_XMM6_Dd;
    do {
      if (param_3 < 1) break;
      uVar19 = (int)in_R10 - 1;
      uVar14 = uVar19 >> 0xb;
      iVar20 = (int)in_R11;
      puVar18 = (undefined8 *)
                (*(longlong *)(*unaff_R14 + 8 + (ulonglong)uVar14 * 8) +
                (ulonglong)(uVar19 + uVar14 * -0x800) * 0x10);
      uVar14 = (int)(((longlong)(int)in_R10 - (longlong)iVar20) / 2) + iVar20;
      uVar19 = uVar14 >> 0xb;
      puVar15 = (undefined8 *)
                (*(longlong *)(*unaff_R15 + 8 + (ulonglong)uVar19 * 8) +
                (ulonglong)(uVar14 + uVar19 * -0x800) * 0x10);
      uVar13 = in_R11 >> 0xb & 0x1fffff;
      puVar17 = (undefined8 *)
                (*(longlong *)(*unaff_R15 + 8 + uVar13 * 8) +
                (ulonglong)(uint)(iVar20 + (int)uVar13 * -0x800) * 0x10);
      cVar12 = func_0x0001800d40c0(puVar17,puVar15);
      if (cVar12 == '\0') {
        cVar12 = func_0x0001800d40c0(puVar17,puVar18);
        puVar16 = puVar17;
        if (cVar12 == '\0') {
          cVar12 = func_0x0001800d40c0(puVar15,puVar18);
          goto LAB_1800eb177;
        }
      }
      else {
        cVar12 = func_0x0001800d40c0(puVar15,puVar18);
        puVar16 = puVar15;
        if (cVar12 == '\0') {
          cVar12 = func_0x0001800d40c0(puVar17,puVar18);
          puVar15 = puVar17;
LAB_1800eb177:
          puVar16 = puVar15;
          if (cVar12 != '\0') {
            puVar16 = puVar18;
          }
        }
      }
      param_6 = *puVar16;
      param_7 = puVar16[1];
      lVar7 = *unaff_R14;
      param_9 = unaff_R14[1];
      lVar11 = *unaff_R15;
      lVar10 = *unaff_R15;
      param_5._0_4_ = *(uint *)(unaff_R15 + 1);
      uVar3 = *(undefined4 *)((longlong)unaff_R15 + 0xc);
      uVar14 = (uint)param_9;
      param_8 = lVar7;
      while( true ) {
        while( true ) {
          uVar19 = (uint)param_5 >> 0xb;
          cVar12 = func_0x0001800d40c0(*(longlong *)(lVar10 + 8 + (ulonglong)uVar19 * 8) +
                                       (ulonglong)((uint)param_5 + uVar19 * -0x800) * 0x10,&param_6)
          ;
          if (cVar12 == '\0') break;
          param_5._0_4_ = (uint)param_5 + 1;
        }
        uVar14 = uVar14 - 1;
        cVar12 = func_0x0001800d40c0(&param_6,(ulonglong)(uVar14 + (uVar14 >> 0xb) * -0x800) * 0x10
                                              + *(longlong *)
                                                 (lVar7 + 8 + (ulonglong)(uVar14 >> 0xb) * 8));
        unaff_R14 = in_stack_000000f8;
        while (in_stack_000000f8 = unaff_R14, cVar12 != '\0') {
          uVar14 = uVar14 - 1;
          cVar12 = func_0x0001800d40c0(&param_6,(ulonglong)(uVar14 + (uVar14 >> 0xb) * -0x800) *
                                                0x10 + *(longlong *)
                                                        (lVar7 + 8 + (ulonglong)(uVar14 >> 0xb) * 8)
                                      );
          unaff_R14 = in_stack_000000f8;
        }
        if ((int)uVar14 <= (int)(uint)param_5) break;
        uVar13 = (ulonglong)((uint)param_5 + uVar19 * -0x800);
        puVar17 = (undefined8 *)
                  ((ulonglong)(uVar14 + (uVar14 >> 0xb) * -0x800) * 0x10 +
                  *(longlong *)(lVar7 + 8 + (ulonglong)(uVar14 >> 0xb) * 8));
        lVar2 = *(longlong *)(lVar10 + 8 + (ulonglong)uVar19 * 8);
        param_5._0_4_ = (uint)param_5 + 1;
        uVar4 = *(undefined4 *)((longlong)puVar17 + 4);
        uVar5 = *(undefined4 *)(puVar17 + 1);
        uVar6 = *(undefined4 *)((longlong)puVar17 + 0xc);
        puVar15 = (undefined8 *)(lVar2 + uVar13 * 0x10);
        uVar8 = *puVar15;
        uVar9 = puVar15[1];
        puVar1 = (undefined4 *)(lVar2 + uVar13 * 0x10);
        *puVar1 = *(undefined4 *)puVar17;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
        *puVar17 = uVar8;
        puVar17[1] = uVar9;
      }
      lVar7 = CONCAT44(uVar3,(uint)param_5);
      param_3 = in_stack_00000100 + -1;
      param_8 = *unaff_R14;
      param_9 = unaff_R14[1];
      param_10 = lVar11;
      param_11 = lVar7;
      in_stack_00000100 = param_3;
      FUN_1800eb050(&param_10,&param_8,param_3,&SUB_1800d40c0);
      in_R11 = (ulonglong)iStack0000000000000108;
      *unaff_R14 = lVar11;
      unaff_R14[1] = lVar7;
      in_R10 = (longlong)(int)unaff_R14[1];
      unaff_R15 = in_stack_000000f0;
    } while (0x1c < (longlong)(in_R10 - in_R11));
  }
  if (param_3 == 0) {
    param_12 = *unaff_R14;
    param_13 = unaff_R14[1];
    param_16 = (undefined4)*unaff_R15;
    uStack0000000000000084 = *(undefined4 *)((longlong)unaff_R15 + 4);
    param_17 = (undefined4)unaff_R15[1];
    uStack000000000000008c = *(undefined4 *)((longlong)unaff_R15 + 0xc);
    param_14 = param_12;
    param_15 = param_13;
    FUN_1800ebe90(&param_16,&param_14,&param_12);
  }
  return;
}






