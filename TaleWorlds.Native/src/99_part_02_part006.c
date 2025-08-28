#include "TaleWorlds.Native.Split.h"

// 99_part_02_part006.c - 8 个函数

// 函数: void FUN_1800eb500(longlong *param_1,longlong *param_2,longlong param_3,undefined1 param_4)
void FUN_1800eb500(longlong *param_1,longlong *param_2,longlong param_3,undefined1 param_4)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  uint uVar8;
  ulonglong *puVar9;
  uint uVar10;
  ulonglong *puVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong lStack_98;
  longlong lStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar12 = (longlong)(int)param_2[1];
  uVar1 = *(uint *)(param_1 + 1);
  lVar13 = (longlong)(int)uVar1;
  lVar5 = lVar12 - lVar13;
  do {
    if ((lVar5 < 0x1d) || (param_3 < 1)) {
      if (param_3 == 0) {
        lStack_68 = *param_2;
        lStack_60 = param_2[1];
        uStack_48 = (undefined4)*param_1;
        uStack_44 = *(undefined4 *)((longlong)param_1 + 4);
        uStack_40 = (undefined4)param_1[1];
        uStack_3c = *(undefined4 *)((longlong)param_1 + 0xc);
        lStack_58 = lStack_68;
        lStack_50 = lStack_60;
        FUN_1800ec430(&uStack_48,&lStack_58,&lStack_68,param_4);
      }
      return;
    }
    uVar10 = (int)lVar12 - 1;
    uVar8 = uVar10 >> 0xb;
    puVar11 = (ulonglong *)
              (*(longlong *)(*param_2 + 8 + (ulonglong)uVar8 * 8) +
              (ulonglong)(uVar10 + uVar8 * -0x800) * 0x10);
    uVar8 = (int)(((int)lVar12 - lVar13) / 2) + uVar1;
    uVar10 = uVar8 >> 0xb;
    puVar6 = (ulonglong *)
             ((ulonglong)(uVar8 + uVar10 * -0x800) * 0x10 +
             *(longlong *)(*param_1 + 8 + (ulonglong)uVar10 * 8));
    uVar2 = *puVar6;
    puVar9 = (ulonglong *)
             (*(longlong *)(*param_1 + 8 + (ulonglong)(uVar1 >> 0xb) * 8) +
             (ulonglong)(uVar1 + (uVar1 >> 0xb) * -0x800) * 0x10);
    uVar3 = *puVar9;
    bVar14 = uVar3 < uVar2;
    if (uVar3 == uVar2) {
      bVar14 = *(int *)(*(longlong *)(*(longlong *)puVar6[1] + 0x18) + 0x184) <
               *(int *)(*(longlong *)(*(longlong *)puVar9[1] + 0x18) + 0x184);
    }
    uVar4 = *puVar11;
    if (bVar14) {
      bVar14 = uVar2 < uVar4;
      if (uVar2 == uVar4) {
        bVar14 = *(int *)(*(longlong *)(*(longlong *)puVar11[1] + 0x18) + 0x184) <
                 *(int *)(*(longlong *)(*(longlong *)puVar6[1] + 0x18) + 0x184);
      }
      puVar7 = puVar6;
      if (!bVar14) {
        bVar14 = uVar3 < uVar4;
        if (uVar3 == uVar4) {
          bVar14 = *(int *)(*(longlong *)(*(longlong *)puVar11[1] + 0x18) + 0x184) <
                   *(int *)(*(longlong *)(*(longlong *)puVar9[1] + 0x18) + 0x184);
        }
LAB_1800eb6ee:
        puVar7 = puVar9;
        if (bVar14) {
          puVar7 = puVar11;
        }
      }
    }
    else {
      bVar14 = uVar3 < uVar4;
      if (uVar3 == uVar4) {
        bVar14 = *(int *)(*(longlong *)(*(longlong *)puVar11[1] + 0x18) + 0x184) <
                 *(int *)(*(longlong *)(*(longlong *)puVar9[1] + 0x18) + 0x184);
      }
      puVar7 = puVar9;
      if (!bVar14) {
        bVar14 = uVar2 < uVar4;
        puVar9 = puVar6;
        if (uVar2 == uVar4) {
          bVar14 = *(int *)(*(longlong *)(*(longlong *)puVar11[1] + 0x18) + 0x184) <
                   *(int *)(*(longlong *)(*(longlong *)puVar6[1] + 0x18) + 0x184);
        }
        goto LAB_1800eb6ee;
      }
    }
    uStack_c8 = *puVar7;
    uStack_c0 = puVar7[1];
    uStack_b8 = (undefined4)*param_2;
    uStack_b4 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_b0 = (undefined4)param_2[1];
    uStack_ac = *(undefined4 *)((longlong)param_2 + 0xc);
    uStack_a8 = (undefined4)*param_1;
    uStack_a4 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_a0 = (undefined4)param_1[1];
    uStack_9c = *(undefined4 *)((longlong)param_1 + 0xc);
    FUN_1800ec8e0(&lStack_98,&uStack_a8,&uStack_b8,&uStack_c8);
    lVar5 = lStack_90;
    lVar12 = lStack_98;
    uStack_88 = (undefined4)*param_2;
    uStack_84 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_80 = (undefined4)param_2[1];
    uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
    param_3 = param_3 + -1;
    lStack_78 = lStack_98;
    lStack_70 = lStack_90;
    FUN_1800eb500(&lStack_78,&uStack_88,param_3,param_4);
    *param_2 = lVar12;
    param_2[1] = lVar5;
    lVar12 = (longlong)(int)param_2[1];
    lVar5 = lVar12 - lVar13;
  } while( true );
}






// 函数: void FUN_1800eb517(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
void FUN_1800eb517(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6,ulonglong param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,longlong param_12,
                  longlong param_13,undefined8 param_14,undefined8 param_15,longlong param_16,
                  longlong param_17,longlong param_18,longlong param_19,longlong param_20,
                  longlong param_21,undefined4 param_22,undefined4 param_23,undefined4 param_24,
                  undefined4 param_25)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong in_RAX;
  longlong lVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  uint uVar13;
  undefined1 unaff_BL;
  undefined8 unaff_RBP;
  ulonglong *puVar14;
  uint uVar15;
  ulonglong *puVar16;
  longlong in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  longlong lVar17;
  bool bVar18;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Dc;
  undefined4 uStack00000000000000b4;
  undefined4 uStack00000000000000bc;
  
  *(undefined8 *)(in_RAX + 8) = unaff_RBP;
  *(undefined8 *)(in_RAX + -0x20) = unaff_R12;
  *(undefined8 *)(in_RAX + -0x28) = unaff_R13;
  uVar1 = *(uint *)(param_1 + 1);
  lVar17 = (longlong)(int)uVar1;
  lVar10 = in_R11 - lVar17;
  uVar8 = unaff_XMM6_Dc;
  uVar9 = unaff_XMM6_Da;
  uVar7 = param_25;
  uVar6 = param_24;
  do {
    param_24 = uVar9;
    param_25 = uVar8;
    if ((lVar10 < 0x1d) || (uVar6 = param_24, uVar7 = param_25, param_3 < 1)) {
      param_25 = uVar7;
      param_24 = uVar6;
      if (param_3 == 0) {
        param_18 = *param_2;
        param_19 = param_2[1];
        param_22 = (undefined4)*param_1;
        uStack00000000000000b4 = *(undefined4 *)((longlong)param_1 + 4);
        param_23 = (undefined4)param_1[1];
        uStack00000000000000bc = *(undefined4 *)((longlong)param_1 + 0xc);
        param_20 = param_18;
        param_21 = param_19;
        FUN_1800ec430(&param_22,&param_20,&param_18,unaff_BL);
      }
      return;
    }
    uVar15 = (int)in_R11 - 1;
    uVar13 = uVar15 >> 0xb;
    puVar16 = (ulonglong *)
              (*(longlong *)(*param_2 + 8 + (ulonglong)uVar13 * 8) +
              (ulonglong)(uVar15 + uVar13 * -0x800) * 0x10);
    uVar13 = (int)(((int)in_R11 - lVar17) / 2) + uVar1;
    uVar15 = uVar13 >> 0xb;
    puVar11 = (ulonglong *)
              ((ulonglong)(uVar13 + uVar15 * -0x800) * 0x10 +
              *(longlong *)(*param_1 + 8 + (ulonglong)uVar15 * 8));
    uVar2 = *puVar11;
    puVar14 = (ulonglong *)
              (*(longlong *)(*param_1 + 8 + (ulonglong)(uVar1 >> 0xb) * 8) +
              (ulonglong)(uVar1 + (uVar1 >> 0xb) * -0x800) * 0x10);
    uVar3 = *puVar14;
    bVar18 = uVar3 < uVar2;
    if (uVar3 == uVar2) {
      bVar18 = *(int *)(*(longlong *)(*(longlong *)puVar11[1] + 0x18) + 0x184) <
               *(int *)(*(longlong *)(*(longlong *)puVar14[1] + 0x18) + 0x184);
    }
    uVar4 = *puVar16;
    if (bVar18) {
      bVar18 = uVar2 < uVar4;
      if (uVar2 == uVar4) {
        bVar18 = *(int *)(*(longlong *)(*(longlong *)puVar16[1] + 0x18) + 0x184) <
                 *(int *)(*(longlong *)(*(longlong *)puVar11[1] + 0x18) + 0x184);
      }
      puVar12 = puVar11;
      if (!bVar18) {
        bVar18 = uVar3 < uVar4;
        if (uVar3 == uVar4) {
          bVar18 = *(int *)(*(longlong *)(*(longlong *)puVar16[1] + 0x18) + 0x184) <
                   *(int *)(*(longlong *)(*(longlong *)puVar14[1] + 0x18) + 0x184);
        }
LAB_1800eb6ee:
        puVar12 = puVar14;
        if (bVar18) {
          puVar12 = puVar16;
        }
      }
    }
    else {
      bVar18 = uVar3 < uVar4;
      if (uVar3 == uVar4) {
        bVar18 = *(int *)(*(longlong *)(*(longlong *)puVar16[1] + 0x18) + 0x184) <
                 *(int *)(*(longlong *)(*(longlong *)puVar14[1] + 0x18) + 0x184);
      }
      puVar12 = puVar14;
      if (!bVar18) {
        bVar18 = uVar2 < uVar4;
        puVar14 = puVar11;
        if (uVar2 == uVar4) {
          bVar18 = *(int *)(*(longlong *)(*(longlong *)puVar16[1] + 0x18) + 0x184) <
                   *(int *)(*(longlong *)(*(longlong *)puVar11[1] + 0x18) + 0x184);
        }
        goto LAB_1800eb6ee;
      }
    }
    param_6 = *puVar12;
    param_7 = puVar12[1];
    param_8._0_4_ = (undefined4)*param_2;
    param_8._4_4_ = *(undefined4 *)((longlong)param_2 + 4);
    param_9._0_4_ = (undefined4)param_2[1];
    param_9._4_4_ = *(undefined4 *)((longlong)param_2 + 0xc);
    param_10._0_4_ = (undefined4)*param_1;
    param_10._4_4_ = *(undefined4 *)((longlong)param_1 + 4);
    param_11._0_4_ = (undefined4)param_1[1];
    param_11._4_4_ = *(undefined4 *)((longlong)param_1 + 0xc);
    FUN_1800ec8e0(&param_12,&param_10,&param_8,&param_6);
    lVar5 = param_13;
    lVar10 = param_12;
    param_14._0_4_ = (undefined4)*param_2;
    param_14._4_4_ = *(undefined4 *)((longlong)param_2 + 4);
    param_15._0_4_ = (undefined4)param_2[1];
    param_15._4_4_ = *(undefined4 *)((longlong)param_2 + 0xc);
    param_3 = param_3 + -1;
    param_16 = param_12;
    param_17 = param_13;
    FUN_1800eb500(&param_16,&param_14,param_3,unaff_BL);
    *param_2 = lVar10;
    param_2[1] = lVar5;
    in_R11 = (longlong)(int)param_2[1];
    lVar10 = in_R11 - lVar17;
    uVar8 = param_25;
    uVar9 = param_24;
    uVar7 = param_25;
    uVar6 = param_24;
  } while( true );
}






// 函数: void FUN_1800eb540(void)
void FUN_1800eb540(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 unaff_BL;
  longlong unaff_RBP;
  ulonglong *puVar9;
  uint uVar10;
  ulonglong *puVar11;
  longlong in_R11;
  ulonglong unaff_R13;
  longlong *unaff_R14;
  longlong *unaff_R15;
  bool bVar12;
  ulonglong in_stack_00000030;
  ulonglong in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  longlong in_stack_00000060;
  longlong in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  longlong in_stack_00000080;
  longlong in_stack_00000088;
  longlong in_stack_00000090;
  longlong in_stack_00000098;
  longlong in_stack_000000a0;
  longlong in_stack_000000a8;
  undefined4 in_stack_000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 in_stack_000000b8;
  undefined4 uStack00000000000000bc;
  
  do {
    if (unaff_RBP < 1) break;
    uVar10 = (int)in_R11 - 1;
    uVar7 = uVar10 >> 0xb;
    puVar11 = (ulonglong *)
              (*(longlong *)(*unaff_R14 + 8 + (ulonglong)uVar7 * 8) +
              (ulonglong)(uVar10 + uVar7 * -0x800) * 0x10);
    uVar7 = (int)((longlong)((longlong)(int)in_R11 - unaff_R13) / 2) + (int)unaff_R13;
    uVar10 = uVar7 >> 0xb;
    puVar5 = (ulonglong *)
             ((ulonglong)(uVar7 + uVar10 * -0x800) * 0x10 +
             *(longlong *)(*unaff_R15 + 8 + (ulonglong)uVar10 * 8));
    uVar8 = unaff_R13 >> 0xb & 0x1fffff;
    uVar1 = *puVar5;
    puVar9 = (ulonglong *)
             (*(longlong *)(*unaff_R15 + 8 + uVar8 * 8) +
             (ulonglong)(uint)((int)unaff_R13 + (int)uVar8 * -0x800) * 0x10);
    uVar8 = *puVar9;
    bVar12 = uVar8 < uVar1;
    if (uVar8 == uVar1) {
      bVar12 = *(int *)(*(longlong *)(*(longlong *)puVar5[1] + 0x18) + 0x184) <
               *(int *)(*(longlong *)(*(longlong *)puVar9[1] + 0x18) + 0x184);
    }
    uVar2 = *puVar11;
    if (bVar12) {
      bVar12 = uVar1 < uVar2;
      if (uVar1 == uVar2) {
        bVar12 = *(int *)(*(longlong *)(*(longlong *)puVar11[1] + 0x18) + 0x184) <
                 *(int *)(*(longlong *)(*(longlong *)puVar5[1] + 0x18) + 0x184);
      }
      puVar6 = puVar5;
      if (!bVar12) {
        bVar12 = uVar8 < uVar2;
        if (uVar8 == uVar2) {
          bVar12 = *(int *)(*(longlong *)(*(longlong *)puVar11[1] + 0x18) + 0x184) <
                   *(int *)(*(longlong *)(*(longlong *)puVar9[1] + 0x18) + 0x184);
        }
LAB_1800eb6ee:
        puVar6 = puVar9;
        if (bVar12) {
          puVar6 = puVar11;
        }
      }
    }
    else {
      bVar12 = uVar8 < uVar2;
      if (uVar8 == uVar2) {
        bVar12 = *(int *)(*(longlong *)(*(longlong *)puVar11[1] + 0x18) + 0x184) <
                 *(int *)(*(longlong *)(*(longlong *)puVar9[1] + 0x18) + 0x184);
      }
      puVar6 = puVar9;
      if (!bVar12) {
        bVar12 = uVar1 < uVar2;
        puVar9 = puVar5;
        if (uVar1 == uVar2) {
          bVar12 = *(int *)(*(longlong *)(*(longlong *)puVar11[1] + 0x18) + 0x184) <
                   *(int *)(*(longlong *)(*(longlong *)puVar5[1] + 0x18) + 0x184);
        }
        goto LAB_1800eb6ee;
      }
    }
    in_stack_00000030 = *puVar6;
    in_stack_00000038 = puVar6[1];
    uStack0000000000000040 = (undefined4)*unaff_R14;
    uStack0000000000000044 = *(undefined4 *)((longlong)unaff_R14 + 4);
    uStack0000000000000048 = (undefined4)unaff_R14[1];
    uStack000000000000004c = *(undefined4 *)((longlong)unaff_R14 + 0xc);
    uStack0000000000000050 = (undefined4)*unaff_R15;
    uStack0000000000000054 = *(undefined4 *)((longlong)unaff_R15 + 4);
    uStack0000000000000058 = (undefined4)unaff_R15[1];
    uStack000000000000005c = *(undefined4 *)((longlong)unaff_R15 + 0xc);
    FUN_1800ec8e0(&stack0x00000060,&stack0x00000050,&stack0x00000040,&stack0x00000030);
    lVar4 = in_stack_00000068;
    lVar3 = in_stack_00000060;
    uStack0000000000000070 = (undefined4)*unaff_R14;
    uStack0000000000000074 = *(undefined4 *)((longlong)unaff_R14 + 4);
    uStack0000000000000078 = (undefined4)unaff_R14[1];
    uStack000000000000007c = *(undefined4 *)((longlong)unaff_R14 + 0xc);
    unaff_RBP = unaff_RBP + -1;
    in_stack_00000080 = in_stack_00000060;
    in_stack_00000088 = in_stack_00000068;
    FUN_1800eb500(&stack0x00000080,&stack0x00000070,unaff_RBP,unaff_BL);
    *unaff_R14 = lVar3;
    unaff_R14[1] = lVar4;
    in_R11 = (longlong)(int)unaff_R14[1];
  } while (0x1c < (longlong)(in_R11 - unaff_R13));
  if (unaff_RBP == 0) {
    in_stack_00000090 = *unaff_R14;
    in_stack_00000098 = unaff_R14[1];
    in_stack_000000b0 = (undefined4)*unaff_R15;
    uStack00000000000000b4 = *(undefined4 *)((longlong)unaff_R15 + 4);
    in_stack_000000b8 = (undefined4)unaff_R15[1];
    uStack00000000000000bc = *(undefined4 *)((longlong)unaff_R15 + 0xc);
    in_stack_000000a0 = in_stack_00000090;
    in_stack_000000a8 = in_stack_00000098;
    FUN_1800ec430(&stack0x000000b0,&stack0x000000a0,&stack0x00000090,unaff_BL);
  }
  return;
}






// 函数: void FUN_1800eb78a(void)
void FUN_1800eb78a(void)

{
  undefined1 unaff_BL;
  longlong unaff_RBP;
  undefined8 *unaff_R14;
  undefined4 *unaff_R15;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  
  if (unaff_RBP == 0) {
    uStack0000000000000090 = *unaff_R14;
    uStack0000000000000098 = unaff_R14[1];
    uStack00000000000000b0 = *unaff_R15;
    uStack00000000000000b4 = unaff_R15[1];
    uStack00000000000000b8 = unaff_R15[2];
    uStack00000000000000bc = unaff_R15[3];
    uStack00000000000000a0 = uStack0000000000000090;
    uStack00000000000000a8 = uStack0000000000000098;
    FUN_1800ec430(&stack0x000000b0,&stack0x000000a0,&stack0x00000090,unaff_BL);
  }
  return;
}






// 函数: void FUN_1800eb7a7(void)
void FUN_1800eb7a7(void)

{
  undefined1 unaff_BL;
  undefined8 *unaff_R14;
  undefined4 *unaff_R15;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  
  uStack0000000000000090 = *unaff_R14;
  uStack0000000000000098 = unaff_R14[1];
  uStack00000000000000b0 = *unaff_R15;
  uStack00000000000000b4 = unaff_R15[1];
  uStack00000000000000b8 = unaff_R15[2];
  uStack00000000000000bc = unaff_R15[3];
  uStack00000000000000a0 = uStack0000000000000090;
  uStack00000000000000a8 = uStack0000000000000098;
  FUN_1800ec430(&stack0x000000b0,&stack0x000000a0,&stack0x00000090,unaff_BL);
  return;
}






// 函数: void FUN_1800eb800(longlong *param_1,longlong *param_2,longlong param_3)
void FUN_1800eb800(longlong *param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar9 = *param_1;
  lVar3 = param_1[1];
  lVar16 = (longlong)(int)param_2[1] - (longlong)(int)lVar3;
  if (1 < lVar16) {
    lVar15 = (lVar16 + -2 >> 1) + 1;
    do {
      lVar15 = lVar15 + -1;
      uVar17 = (int)lVar15 + (int)lVar3;
      uVar13 = uVar17 >> 0xb;
      uVar12 = (ulonglong)(uVar17 + uVar13 * -0x800);
      lVar6 = *(longlong *)(lVar9 + 8 + (ulonglong)uVar13 * 8);
      puVar1 = (undefined8 *)(lVar6 + uVar12 * 0x18);
      uStack_78 = *puVar1;
      uStack_70 = puVar1[1];
      uStack_68 = *(undefined8 *)(lVar6 + 0x10 + uVar12 * 0x18);
      lStack_a8 = *param_1;
      lStack_a0 = param_1[1];
      FUN_1800eca80(&lStack_a8,lVar15,lVar16,lVar15,&uStack_78);
    } while (lVar15 != 0);
  }
  lVar9 = *param_2;
  uVar13 = *(uint *)(param_2 + 1);
  lStack_a0 = param_2[1];
  iVar5 = *(int *)(param_3 + 8);
  lStack_a8 = lVar9;
  if ((int)uVar13 < iVar5) {
    uVar17 = *(uint *)(param_1 + 1);
    lVar15 = *param_1;
    lVar3 = (ulonglong)(uVar17 >> 0xb) * 8;
    lVar16 = (ulonglong)(uVar17 - (uVar17 & 0xfffff800)) * 0x18;
    do {
      lVar6 = *(longlong *)(lVar3 + 8 + lVar15);
      uVar18 = uVar13 >> 0xb;
      uVar14 = (ulonglong)(uVar13 + uVar18 * -0x800);
      lVar7 = *(longlong *)(lVar9 + 8 + (ulonglong)uVar18 * 8);
      uVar12 = *(ulonglong *)(lVar7 + uVar14 * 0x18);
      uVar8 = *(ulonglong *)(lVar6 + lVar16);
      bVar19 = uVar12 < uVar8;
      if (uVar12 == uVar8) {
        bVar19 = *(ulonglong *)(lVar7 + uVar14 * 0x18 + 8) < *(ulonglong *)(lVar6 + 8 + lVar16);
      }
      if (bVar19) {
        lVar6 = *(longlong *)(lVar9 + 8 + (ulonglong)uVar18 * 8);
        uVar12 = (ulonglong)(uVar13 + uVar18 * -0x800);
        lVar7 = *(longlong *)(lVar3 + 8 + lVar15);
        puVar1 = (undefined8 *)(lVar6 + uVar12 * 0x18);
        uStack_60 = *puVar1;
        uStack_58 = puVar1[1];
        uStack_50 = *(undefined8 *)(lVar6 + 0x10 + uVar12 * 0x18);
        lVar6 = *(longlong *)(lVar9 + 8 + (ulonglong)uVar18 * 8);
        puVar1 = (undefined8 *)(lVar7 + lVar16);
        uVar10 = puVar1[1];
        uVar4 = *(undefined8 *)(lVar7 + 0x10 + lVar16);
        uVar12 = (ulonglong)(uVar13 + uVar18 * -0x800);
        lVar7 = param_2[1];
        puVar2 = (undefined8 *)(lVar6 + uVar12 * 0x18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar10;
        lStack_98 = *param_1;
        lStack_90 = param_1[1];
        *(undefined8 *)(lVar6 + 0x10 + uVar12 * 0x18) = uVar4;
        FUN_1800eca80(&lStack_98,0,(longlong)(int)lVar7 - (longlong)(int)uVar17,0,&uStack_60);
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < iVar5);
  }
  lVar9 = *param_2;
  uVar13 = *(uint *)(param_2 + 1);
  lStack_90 = param_2[1];
  lVar3 = param_1[1];
  if (1 < (longlong)(int)uVar13 - (longlong)(int)lVar3) {
    lVar16 = *param_1;
    uVar17 = (uint)param_1[1];
    uVar12 = (ulonglong)(uVar17 + (uVar17 >> 0xb) * -0x800);
    lStack_98 = lVar9;
    do {
      uVar18 = uVar13 - 1;
      uVar11 = uVar18 & 0x7ff;
      lVar15 = *(longlong *)(lVar9 + 8 + (ulonglong)(uVar18 >> 0xb) * 8);
      puVar1 = (undefined8 *)(lVar15 + (ulonglong)uVar11 * 0x18);
      uStack_48 = *puVar1;
      uStack_40 = puVar1[1];
      uStack_38 = *(undefined8 *)(lVar15 + 0x10 + (ulonglong)uVar11 * 0x18);
      lVar15 = *(longlong *)(lVar16 + (ulonglong)(uVar17 >> 0xb) * 8 + 8);
      lVar6 = *(longlong *)(lVar9 + 8 + (ulonglong)(uVar18 >> 0xb) * 8);
      puVar1 = (undefined8 *)(lVar15 + uVar12 * 0x18);
      uVar10 = puVar1[1];
      uVar4 = *(undefined8 *)(lVar15 + 0x10 + uVar12 * 0x18);
      puVar2 = (undefined8 *)(lVar6 + (ulonglong)uVar11 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar10;
      lStack_88 = *param_1;
      lStack_80 = param_1[1];
      *(undefined8 *)(lVar6 + 0x10 + (ulonglong)uVar11 * 0x18) = uVar4;
      FUN_1800eca80(&lStack_88,0,((longlong)(int)uVar13 - (longlong)(int)uVar17) + -1,0,&uStack_48);
      uVar13 = uVar18;
    } while (1 < (longlong)(int)uVar18 - (longlong)(int)lVar3);
  }
  return;
}






// 函数: void FUN_1800eb8f6(int param_1)
void FUN_1800eb8f6(int param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong in_RAX;
  ulonglong uVar13;
  ulonglong uVar14;
  uint unaff_EBX;
  longlong unaff_RBP;
  int unaff_ESI;
  longlong *unaff_RDI;
  uint uVar15;
  uint uVar16;
  longlong *unaff_R12;
  longlong unaff_R15;
  bool bVar17;
  longlong lStack0000000000000040;
  longlong lStack0000000000000048;
  longlong in_stack_00000050;
  longlong in_stack_00000058;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  longlong lStack00000000000000e0;
  
  lVar6 = *unaff_RDI;
  lStack00000000000000e0 = in_RAX * 8;
  lVar4 = (ulonglong)(uint)((int)unaff_R15 - param_1) * 0x18;
  do {
    lVar7 = *(longlong *)(lStack00000000000000e0 + 8 + lVar6);
    uVar15 = unaff_EBX >> 0xb;
    uVar14 = (ulonglong)(unaff_EBX + uVar15 * -0x800);
    lVar8 = *(longlong *)(unaff_RBP + 8 + (ulonglong)uVar15 * 8);
    uVar13 = *(ulonglong *)(lVar8 + uVar14 * 0x18);
    uVar9 = *(ulonglong *)(lVar7 + lVar4);
    bVar17 = uVar13 < uVar9;
    if (uVar13 == uVar9) {
      bVar17 = *(ulonglong *)(lVar8 + uVar14 * 0x18 + 8) < *(ulonglong *)(lVar7 + 8 + lVar4);
    }
    if (bVar17) {
      lVar7 = *(longlong *)(unaff_RBP + 8 + (ulonglong)uVar15 * 8);
      uVar13 = (ulonglong)(unaff_EBX + uVar15 * -0x800);
      lVar8 = *(longlong *)(lStack00000000000000e0 + 8 + lVar6);
      puVar2 = (undefined8 *)(lVar7 + uVar13 * 0x18);
      in_stack_00000078 = *puVar2;
      in_stack_00000080 = puVar2[1];
      in_stack_00000088 = *(undefined8 *)(lVar7 + 0x10 + uVar13 * 0x18);
      lVar7 = *(longlong *)(unaff_RBP + 8 + (ulonglong)uVar15 * 8);
      puVar2 = (undefined8 *)(lVar8 + lVar4);
      uVar11 = puVar2[1];
      uVar5 = *(undefined8 *)(lVar8 + 0x10 + lVar4);
      uVar13 = (ulonglong)(unaff_EBX + uVar15 * -0x800);
      lVar8 = unaff_R12[1];
      puVar3 = (undefined8 *)(lVar7 + uVar13 * 0x18);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      lStack0000000000000040 = *unaff_RDI;
      lStack0000000000000048 = unaff_RDI[1];
      *(undefined8 *)(lVar7 + 0x10 + uVar13 * 0x18) = uVar5;
      FUN_1800eca80(&stack0x00000040,0,(int)lVar8 - unaff_R15,0,&stack0x00000078);
    }
    unaff_EBX = unaff_EBX + 1;
  } while ((int)unaff_EBX < unaff_ESI);
  lVar4 = *unaff_R12;
  uVar15 = *(uint *)(unaff_R12 + 1);
  lStack0000000000000048 = unaff_R12[1];
  lVar6 = unaff_RDI[1];
  if (1 < (longlong)(int)uVar15 - (longlong)(int)lVar6) {
    lVar7 = *unaff_RDI;
    uVar16 = (uint)unaff_RDI[1];
    uVar13 = (ulonglong)(uVar16 + (uVar16 >> 0xb) * -0x800);
    lStack0000000000000040 = lVar4;
    do {
      uVar1 = uVar15 - 1;
      uVar12 = uVar1 & 0x7ff;
      lVar8 = *(longlong *)(lVar4 + 8 + (ulonglong)(uVar1 >> 0xb) * 8);
      puVar2 = (undefined8 *)(lVar8 + (ulonglong)uVar12 * 0x18);
      in_stack_00000090 = *puVar2;
      in_stack_00000098 = puVar2[1];
      in_stack_000000a0 = *(undefined8 *)(lVar8 + 0x10 + (ulonglong)uVar12 * 0x18);
      lVar8 = *(longlong *)(lVar7 + (ulonglong)(uVar16 >> 0xb) * 8 + 8);
      lVar10 = *(longlong *)(lVar4 + 8 + (ulonglong)(uVar1 >> 0xb) * 8);
      puVar2 = (undefined8 *)(lVar8 + uVar13 * 0x18);
      uVar11 = puVar2[1];
      uVar5 = *(undefined8 *)(lVar8 + 0x10 + uVar13 * 0x18);
      puVar3 = (undefined8 *)(lVar10 + (ulonglong)uVar12 * 0x18);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      in_stack_00000050 = *unaff_RDI;
      in_stack_00000058 = unaff_RDI[1];
      *(undefined8 *)(lVar10 + 0x10 + (ulonglong)uVar12 * 0x18) = uVar5;
      FUN_1800eca80(&stack0x00000050,0,((longlong)(int)uVar15 - (longlong)(int)uVar16) + -1,0,
                    &stack0x00000090);
      uVar15 = uVar1;
    } while (1 < (longlong)(int)uVar1 - (longlong)(int)lVar6);
  }
  return;
}






// 函数: void FUN_1800eba0a(void)
void FUN_1800eba0a(void)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong *unaff_RDI;
  uint uVar13;
  uint uVar14;
  longlong *unaff_R12;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  uint uStack0000000000000048;
  undefined4 uStack000000000000004c;
  longlong lStack0000000000000050;
  longlong lStack0000000000000058;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  
  uStack0000000000000040 = (undefined4)*unaff_R12;
  uStack0000000000000044 = *(undefined4 *)((longlong)unaff_R12 + 4);
  lVar9 = *unaff_R12;
  uStack0000000000000048 = *(uint *)(unaff_R12 + 1);
  uStack000000000000004c = *(undefined4 *)((longlong)unaff_R12 + 0xc);
  lVar10 = unaff_RDI[1];
  if (1 < (longlong)(int)uStack0000000000000048 - (longlong)(int)lVar10) {
    lVar7 = *unaff_RDI;
    uVar13 = (uint)unaff_RDI[1];
    uVar12 = (ulonglong)(uVar13 + (uVar13 >> 0xb) * -0x800);
    uVar14 = uStack0000000000000048;
    do {
      uVar1 = uVar14 - 1;
      uVar11 = uVar1 & 0x7ff;
      lVar5 = *(longlong *)(lVar9 + 8 + (ulonglong)(uVar1 >> 0xb) * 8);
      puVar2 = (undefined8 *)(lVar5 + (ulonglong)uVar11 * 0x18);
      uStack0000000000000090 = *puVar2;
      uStack0000000000000098 = puVar2[1];
      uStack00000000000000a0 = *(undefined8 *)(lVar5 + 0x10 + (ulonglong)uVar11 * 0x18);
      lVar5 = *(longlong *)(lVar7 + (ulonglong)(uVar13 >> 0xb) * 8 + 8);
      lVar6 = *(longlong *)(lVar9 + 8 + (ulonglong)(uVar1 >> 0xb) * 8);
      puVar2 = (undefined8 *)(lVar5 + uVar12 * 0x18);
      uVar8 = puVar2[1];
      uVar4 = *(undefined8 *)(lVar5 + 0x10 + uVar12 * 0x18);
      puVar3 = (undefined8 *)(lVar6 + (ulonglong)uVar11 * 0x18);
      *puVar3 = *puVar2;
      puVar3[1] = uVar8;
      lStack0000000000000050 = *unaff_RDI;
      lStack0000000000000058 = unaff_RDI[1];
      *(undefined8 *)(lVar6 + 0x10 + (ulonglong)uVar11 * 0x18) = uVar4;
      FUN_1800eca80(&stack0x00000050,0,((longlong)(int)uVar14 - (longlong)(int)uVar13) + -1,0,
                    &stack0x00000090);
      uVar14 = uVar1;
    } while (1 < (longlong)(int)uVar1 - (longlong)(int)lVar10);
  }
  return;
}






