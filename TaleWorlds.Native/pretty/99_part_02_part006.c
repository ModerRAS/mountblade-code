#include "TaleWorlds.Native.Split.h"

// 99_part_02_part006.c - 8 个函数

// 函数: void FUN_1800eb500(int64_t *param_1,int64_t *param_2,int64_t param_3,int8_t param_4)
void FUN_1800eb500(int64_t *param_1,int64_t *param_2,int64_t param_3,int8_t param_4)

{
  uint uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint uVar8;
  uint64_t *puVar9;
  uint uVar10;
  uint64_t *puVar11;
  int64_t lVar12;
  int64_t lVar13;
  bool bVar14;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  int32_t uStack_b8;
  int32_t uStack_b4;
  int32_t uStack_b0;
  int32_t uStack_ac;
  int32_t uStack_a8;
  int32_t uStack_a4;
  int32_t uStack_a0;
  int32_t uStack_9c;
  int64_t lStack_98;
  int64_t lStack_90;
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  int64_t lStack_78;
  int64_t lStack_70;
  int64_t lStack_68;
  int64_t lStack_60;
  int64_t lStack_58;
  int64_t lStack_50;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  
  lVar12 = (int64_t)(int)param_2[1];
  uVar1 = *(uint *)(param_1 + 1);
  lVar13 = (int64_t)(int)uVar1;
  lVar5 = lVar12 - lVar13;
  do {
    if ((lVar5 < 0x1d) || (param_3 < 1)) {
      if (param_3 == 0) {
        lStack_68 = *param_2;
        lStack_60 = param_2[1];
        uStack_48 = (int32_t)*param_1;
        uStack_44 = *(int32_t *)((int64_t)param_1 + 4);
        uStack_40 = (int32_t)param_1[1];
        uStack_3c = *(int32_t *)((int64_t)param_1 + 0xc);
        lStack_58 = lStack_68;
        lStack_50 = lStack_60;
        FUN_1800ec430(&uStack_48,&lStack_58,&lStack_68,param_4);
      }
      return;
    }
    uVar10 = (int)lVar12 - 1;
    uVar8 = uVar10 >> 0xb;
    puVar11 = (uint64_t *)
              (*(int64_t *)(*param_2 + 8 + (uint64_t)uVar8 * 8) +
              (uint64_t)(uVar10 + uVar8 * -0x800) * 0x10);
    uVar8 = (int)(((int)lVar12 - lVar13) / 2) + uVar1;
    uVar10 = uVar8 >> 0xb;
    puVar6 = (uint64_t *)
             ((uint64_t)(uVar8 + uVar10 * -0x800) * 0x10 +
             *(int64_t *)(*param_1 + 8 + (uint64_t)uVar10 * 8));
    uVar2 = *puVar6;
    puVar9 = (uint64_t *)
             (*(int64_t *)(*param_1 + 8 + (uint64_t)(uVar1 >> 0xb) * 8) +
             (uint64_t)(uVar1 + (uVar1 >> 0xb) * -0x800) * 0x10);
    uVar3 = *puVar9;
    bVar14 = uVar3 < uVar2;
    if (uVar3 == uVar2) {
      bVar14 = *(int *)(*(int64_t *)(*(int64_t *)puVar6[1] + 0x18) + 0x184) <
               *(int *)(*(int64_t *)(*(int64_t *)puVar9[1] + 0x18) + 0x184);
    }
    uVar4 = *puVar11;
    if (bVar14) {
      bVar14 = uVar2 < uVar4;
      if (uVar2 == uVar4) {
        bVar14 = *(int *)(*(int64_t *)(*(int64_t *)puVar11[1] + 0x18) + 0x184) <
                 *(int *)(*(int64_t *)(*(int64_t *)puVar6[1] + 0x18) + 0x184);
      }
      puVar7 = puVar6;
      if (!bVar14) {
        bVar14 = uVar3 < uVar4;
        if (uVar3 == uVar4) {
          bVar14 = *(int *)(*(int64_t *)(*(int64_t *)puVar11[1] + 0x18) + 0x184) <
                   *(int *)(*(int64_t *)(*(int64_t *)puVar9[1] + 0x18) + 0x184);
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
        bVar14 = *(int *)(*(int64_t *)(*(int64_t *)puVar11[1] + 0x18) + 0x184) <
                 *(int *)(*(int64_t *)(*(int64_t *)puVar9[1] + 0x18) + 0x184);
      }
      puVar7 = puVar9;
      if (!bVar14) {
        bVar14 = uVar2 < uVar4;
        puVar9 = puVar6;
        if (uVar2 == uVar4) {
          bVar14 = *(int *)(*(int64_t *)(*(int64_t *)puVar11[1] + 0x18) + 0x184) <
                   *(int *)(*(int64_t *)(*(int64_t *)puVar6[1] + 0x18) + 0x184);
        }
        goto LAB_1800eb6ee;
      }
    }
    uStack_c8 = *puVar7;
    uStack_c0 = puVar7[1];
    uStack_b8 = (int32_t)*param_2;
    uStack_b4 = *(int32_t *)((int64_t)param_2 + 4);
    uStack_b0 = (int32_t)param_2[1];
    uStack_ac = *(int32_t *)((int64_t)param_2 + 0xc);
    uStack_a8 = (int32_t)*param_1;
    uStack_a4 = *(int32_t *)((int64_t)param_1 + 4);
    uStack_a0 = (int32_t)param_1[1];
    uStack_9c = *(int32_t *)((int64_t)param_1 + 0xc);
    FUN_1800ec8e0(&lStack_98,&uStack_a8,&uStack_b8,&uStack_c8);
    lVar5 = lStack_90;
    lVar12 = lStack_98;
    uStack_88 = (int32_t)*param_2;
    uStack_84 = *(int32_t *)((int64_t)param_2 + 4);
    uStack_80 = (int32_t)param_2[1];
    uStack_7c = *(int32_t *)((int64_t)param_2 + 0xc);
    param_3 = param_3 + -1;
    lStack_78 = lStack_98;
    lStack_70 = lStack_90;
    FUN_1800eb500(&lStack_78,&uStack_88,param_3,param_4);
    *param_2 = lVar12;
    param_2[1] = lVar5;
    lVar12 = (int64_t)(int)param_2[1];
    lVar5 = lVar12 - lVar13;
  } while( true );
}






// 函数: void FUN_1800eb517(int64_t *param_1,int64_t *param_2,int64_t param_3,uint64_t param_4,
void FUN_1800eb517(int64_t *param_1,int64_t *param_2,int64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                  uint64_t param_9,uint64_t param_10,uint64_t param_11,int64_t param_12,
                  int64_t param_13,uint64_t param_14,uint64_t param_15,int64_t param_16,
                  int64_t param_17,int64_t param_18,int64_t param_19,int64_t param_20,
                  int64_t param_21,int32_t param_22,int32_t param_23,int32_t param_24,
                  int32_t param_25)

{
  uint uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int64_t in_RAX;
  int64_t lVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  uint uVar13;
  int8_t unaff_BL;
  uint64_t unaff_RBP;
  uint64_t *puVar14;
  uint uVar15;
  uint64_t *puVar16;
  int64_t in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  int64_t lVar17;
  bool bVar18;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Dc;
  int32_t uStack00000000000000b4;
  int32_t uStack00000000000000bc;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBP;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R13;
  uVar1 = *(uint *)(param_1 + 1);
  lVar17 = (int64_t)(int)uVar1;
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
        param_22 = (int32_t)*param_1;
        uStack00000000000000b4 = *(int32_t *)((int64_t)param_1 + 4);
        param_23 = (int32_t)param_1[1];
        uStack00000000000000bc = *(int32_t *)((int64_t)param_1 + 0xc);
        param_20 = param_18;
        param_21 = param_19;
        FUN_1800ec430(&param_22,&param_20,&param_18,unaff_BL);
      }
      return;
    }
    uVar15 = (int)in_R11 - 1;
    uVar13 = uVar15 >> 0xb;
    puVar16 = (uint64_t *)
              (*(int64_t *)(*param_2 + 8 + (uint64_t)uVar13 * 8) +
              (uint64_t)(uVar15 + uVar13 * -0x800) * 0x10);
    uVar13 = (int)(((int)in_R11 - lVar17) / 2) + uVar1;
    uVar15 = uVar13 >> 0xb;
    puVar11 = (uint64_t *)
              ((uint64_t)(uVar13 + uVar15 * -0x800) * 0x10 +
              *(int64_t *)(*param_1 + 8 + (uint64_t)uVar15 * 8));
    uVar2 = *puVar11;
    puVar14 = (uint64_t *)
              (*(int64_t *)(*param_1 + 8 + (uint64_t)(uVar1 >> 0xb) * 8) +
              (uint64_t)(uVar1 + (uVar1 >> 0xb) * -0x800) * 0x10);
    uVar3 = *puVar14;
    bVar18 = uVar3 < uVar2;
    if (uVar3 == uVar2) {
      bVar18 = *(int *)(*(int64_t *)(*(int64_t *)puVar11[1] + 0x18) + 0x184) <
               *(int *)(*(int64_t *)(*(int64_t *)puVar14[1] + 0x18) + 0x184);
    }
    uVar4 = *puVar16;
    if (bVar18) {
      bVar18 = uVar2 < uVar4;
      if (uVar2 == uVar4) {
        bVar18 = *(int *)(*(int64_t *)(*(int64_t *)puVar16[1] + 0x18) + 0x184) <
                 *(int *)(*(int64_t *)(*(int64_t *)puVar11[1] + 0x18) + 0x184);
      }
      puVar12 = puVar11;
      if (!bVar18) {
        bVar18 = uVar3 < uVar4;
        if (uVar3 == uVar4) {
          bVar18 = *(int *)(*(int64_t *)(*(int64_t *)puVar16[1] + 0x18) + 0x184) <
                   *(int *)(*(int64_t *)(*(int64_t *)puVar14[1] + 0x18) + 0x184);
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
        bVar18 = *(int *)(*(int64_t *)(*(int64_t *)puVar16[1] + 0x18) + 0x184) <
                 *(int *)(*(int64_t *)(*(int64_t *)puVar14[1] + 0x18) + 0x184);
      }
      puVar12 = puVar14;
      if (!bVar18) {
        bVar18 = uVar2 < uVar4;
        puVar14 = puVar11;
        if (uVar2 == uVar4) {
          bVar18 = *(int *)(*(int64_t *)(*(int64_t *)puVar16[1] + 0x18) + 0x184) <
                   *(int *)(*(int64_t *)(*(int64_t *)puVar11[1] + 0x18) + 0x184);
        }
        goto LAB_1800eb6ee;
      }
    }
    param_6 = *puVar12;
    param_7 = puVar12[1];
    param_8._0_4_ = (int32_t)*param_2;
    param_8._4_4_ = *(int32_t *)((int64_t)param_2 + 4);
    param_9._0_4_ = (int32_t)param_2[1];
    param_9._4_4_ = *(int32_t *)((int64_t)param_2 + 0xc);
    param_10._0_4_ = (int32_t)*param_1;
    param_10._4_4_ = *(int32_t *)((int64_t)param_1 + 4);
    param_11._0_4_ = (int32_t)param_1[1];
    param_11._4_4_ = *(int32_t *)((int64_t)param_1 + 0xc);
    FUN_1800ec8e0(&param_12,&param_10,&param_8,&param_6);
    lVar5 = param_13;
    lVar10 = param_12;
    param_14._0_4_ = (int32_t)*param_2;
    param_14._4_4_ = *(int32_t *)((int64_t)param_2 + 4);
    param_15._0_4_ = (int32_t)param_2[1];
    param_15._4_4_ = *(int32_t *)((int64_t)param_2 + 0xc);
    param_3 = param_3 + -1;
    param_16 = param_12;
    param_17 = param_13;
    FUN_1800eb500(&param_16,&param_14,param_3,unaff_BL);
    *param_2 = lVar10;
    param_2[1] = lVar5;
    in_R11 = (int64_t)(int)param_2[1];
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
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint uVar7;
  uint64_t uVar8;
  int8_t unaff_BL;
  int64_t unaff_RBP;
  uint64_t *puVar9;
  uint uVar10;
  uint64_t *puVar11;
  int64_t in_R11;
  uint64_t unaff_R13;
  int64_t *unaff_R14;
  int64_t *unaff_R15;
  bool bVar12;
  uint64_t in_stack_00000030;
  uint64_t in_stack_00000038;
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000044;
  int32_t uStack0000000000000048;
  int32_t uStack000000000000004c;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000054;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  int64_t in_stack_00000060;
  int64_t in_stack_00000068;
  int32_t uStack0000000000000070;
  int32_t uStack0000000000000074;
  int32_t uStack0000000000000078;
  int32_t uStack000000000000007c;
  int64_t in_stack_00000080;
  int64_t in_stack_00000088;
  int64_t in_stack_00000090;
  int64_t in_stack_00000098;
  int64_t in_stack_000000a0;
  int64_t in_stack_000000a8;
  int32_t in_stack_000000b0;
  int32_t uStack00000000000000b4;
  int32_t in_stack_000000b8;
  int32_t uStack00000000000000bc;
  
  do {
    if (unaff_RBP < 1) break;
    uVar10 = (int)in_R11 - 1;
    uVar7 = uVar10 >> 0xb;
    puVar11 = (uint64_t *)
              (*(int64_t *)(*unaff_R14 + 8 + (uint64_t)uVar7 * 8) +
              (uint64_t)(uVar10 + uVar7 * -0x800) * 0x10);
    uVar7 = (int)((int64_t)((int64_t)(int)in_R11 - unaff_R13) / 2) + (int)unaff_R13;
    uVar10 = uVar7 >> 0xb;
    puVar5 = (uint64_t *)
             ((uint64_t)(uVar7 + uVar10 * -0x800) * 0x10 +
             *(int64_t *)(*unaff_R15 + 8 + (uint64_t)uVar10 * 8));
    uVar8 = unaff_R13 >> 0xb & 0x1fffff;
    uVar1 = *puVar5;
    puVar9 = (uint64_t *)
             (*(int64_t *)(*unaff_R15 + 8 + uVar8 * 8) +
             (uint64_t)(uint)((int)unaff_R13 + (int)uVar8 * -0x800) * 0x10);
    uVar8 = *puVar9;
    bVar12 = uVar8 < uVar1;
    if (uVar8 == uVar1) {
      bVar12 = *(int *)(*(int64_t *)(*(int64_t *)puVar5[1] + 0x18) + 0x184) <
               *(int *)(*(int64_t *)(*(int64_t *)puVar9[1] + 0x18) + 0x184);
    }
    uVar2 = *puVar11;
    if (bVar12) {
      bVar12 = uVar1 < uVar2;
      if (uVar1 == uVar2) {
        bVar12 = *(int *)(*(int64_t *)(*(int64_t *)puVar11[1] + 0x18) + 0x184) <
                 *(int *)(*(int64_t *)(*(int64_t *)puVar5[1] + 0x18) + 0x184);
      }
      puVar6 = puVar5;
      if (!bVar12) {
        bVar12 = uVar8 < uVar2;
        if (uVar8 == uVar2) {
          bVar12 = *(int *)(*(int64_t *)(*(int64_t *)puVar11[1] + 0x18) + 0x184) <
                   *(int *)(*(int64_t *)(*(int64_t *)puVar9[1] + 0x18) + 0x184);
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
        bVar12 = *(int *)(*(int64_t *)(*(int64_t *)puVar11[1] + 0x18) + 0x184) <
                 *(int *)(*(int64_t *)(*(int64_t *)puVar9[1] + 0x18) + 0x184);
      }
      puVar6 = puVar9;
      if (!bVar12) {
        bVar12 = uVar1 < uVar2;
        puVar9 = puVar5;
        if (uVar1 == uVar2) {
          bVar12 = *(int *)(*(int64_t *)(*(int64_t *)puVar11[1] + 0x18) + 0x184) <
                   *(int *)(*(int64_t *)(*(int64_t *)puVar5[1] + 0x18) + 0x184);
        }
        goto LAB_1800eb6ee;
      }
    }
    in_stack_00000030 = *puVar6;
    in_stack_00000038 = puVar6[1];
    uStack0000000000000040 = (int32_t)*unaff_R14;
    uStack0000000000000044 = *(int32_t *)((int64_t)unaff_R14 + 4);
    uStack0000000000000048 = (int32_t)unaff_R14[1];
    uStack000000000000004c = *(int32_t *)((int64_t)unaff_R14 + 0xc);
    uStack0000000000000050 = (int32_t)*unaff_R15;
    uStack0000000000000054 = *(int32_t *)((int64_t)unaff_R15 + 4);
    uStack0000000000000058 = (int32_t)unaff_R15[1];
    uStack000000000000005c = *(int32_t *)((int64_t)unaff_R15 + 0xc);
    FUN_1800ec8e0(&stack0x00000060,&stack0x00000050,&stack0x00000040,&stack0x00000030);
    lVar4 = in_stack_00000068;
    lVar3 = in_stack_00000060;
    uStack0000000000000070 = (int32_t)*unaff_R14;
    uStack0000000000000074 = *(int32_t *)((int64_t)unaff_R14 + 4);
    uStack0000000000000078 = (int32_t)unaff_R14[1];
    uStack000000000000007c = *(int32_t *)((int64_t)unaff_R14 + 0xc);
    unaff_RBP = unaff_RBP + -1;
    in_stack_00000080 = in_stack_00000060;
    in_stack_00000088 = in_stack_00000068;
    FUN_1800eb500(&stack0x00000080,&stack0x00000070,unaff_RBP,unaff_BL);
    *unaff_R14 = lVar3;
    unaff_R14[1] = lVar4;
    in_R11 = (int64_t)(int)unaff_R14[1];
  } while (0x1c < (int64_t)(in_R11 - unaff_R13));
  if (unaff_RBP == 0) {
    in_stack_00000090 = *unaff_R14;
    in_stack_00000098 = unaff_R14[1];
    in_stack_000000b0 = (int32_t)*unaff_R15;
    uStack00000000000000b4 = *(int32_t *)((int64_t)unaff_R15 + 4);
    in_stack_000000b8 = (int32_t)unaff_R15[1];
    uStack00000000000000bc = *(int32_t *)((int64_t)unaff_R15 + 0xc);
    in_stack_000000a0 = in_stack_00000090;
    in_stack_000000a8 = in_stack_00000098;
    FUN_1800ec430(&stack0x000000b0,&stack0x000000a0,&stack0x00000090,unaff_BL);
  }
  return;
}






// 函数: void FUN_1800eb78a(void)
void FUN_1800eb78a(void)

{
  int8_t unaff_BL;
  int64_t unaff_RBP;
  uint64_t *unaff_R14;
  int32_t *unaff_R15;
  uint64_t uStack0000000000000090;
  uint64_t uStack0000000000000098;
  uint64_t uStack00000000000000a0;
  uint64_t uStack00000000000000a8;
  int32_t uStack00000000000000b0;
  int32_t uStack00000000000000b4;
  int32_t uStack00000000000000b8;
  int32_t uStack00000000000000bc;
  
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
  int8_t unaff_BL;
  uint64_t *unaff_R14;
  int32_t *unaff_R15;
  uint64_t uStack0000000000000090;
  uint64_t uStack0000000000000098;
  uint64_t uStack00000000000000a0;
  uint64_t uStack00000000000000a8;
  int32_t uStack00000000000000b0;
  int32_t uStack00000000000000b4;
  int32_t uStack00000000000000b8;
  int32_t uStack00000000000000bc;
  
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






// 函数: void FUN_1800eb800(int64_t *param_1,int64_t *param_2,int64_t param_3)
void FUN_1800eb800(int64_t *param_1,int64_t *param_2,int64_t param_3)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int iVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint uVar11;
  uint64_t uVar12;
  uint uVar13;
  uint64_t uVar14;
  int64_t lVar15;
  int64_t lVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  int64_t lStack_a8;
  int64_t lStack_a0;
  int64_t lStack_98;
  int64_t lStack_90;
  int64_t lStack_88;
  int64_t lStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  
  lVar9 = *param_1;
  lVar3 = param_1[1];
  lVar16 = (int64_t)(int)param_2[1] - (int64_t)(int)lVar3;
  if (1 < lVar16) {
    lVar15 = (lVar16 + -2 >> 1) + 1;
    do {
      lVar15 = lVar15 + -1;
      uVar17 = (int)lVar15 + (int)lVar3;
      uVar13 = uVar17 >> 0xb;
      uVar12 = (uint64_t)(uVar17 + uVar13 * -0x800);
      lVar6 = *(int64_t *)(lVar9 + 8 + (uint64_t)uVar13 * 8);
      puVar1 = (uint64_t *)(lVar6 + uVar12 * 0x18);
      uStack_78 = *puVar1;
      uStack_70 = puVar1[1];
      uStack_68 = *(uint64_t *)(lVar6 + 0x10 + uVar12 * 0x18);
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
    lVar3 = (uint64_t)(uVar17 >> 0xb) * 8;
    lVar16 = (uint64_t)(uVar17 - (uVar17 & 0xfffff800)) * 0x18;
    do {
      lVar6 = *(int64_t *)(lVar3 + 8 + lVar15);
      uVar18 = uVar13 >> 0xb;
      uVar14 = (uint64_t)(uVar13 + uVar18 * -0x800);
      lVar7 = *(int64_t *)(lVar9 + 8 + (uint64_t)uVar18 * 8);
      uVar12 = *(uint64_t *)(lVar7 + uVar14 * 0x18);
      uVar8 = *(uint64_t *)(lVar6 + lVar16);
      bVar19 = uVar12 < uVar8;
      if (uVar12 == uVar8) {
        bVar19 = *(uint64_t *)(lVar7 + uVar14 * 0x18 + 8) < *(uint64_t *)(lVar6 + 8 + lVar16);
      }
      if (bVar19) {
        lVar6 = *(int64_t *)(lVar9 + 8 + (uint64_t)uVar18 * 8);
        uVar12 = (uint64_t)(uVar13 + uVar18 * -0x800);
        lVar7 = *(int64_t *)(lVar3 + 8 + lVar15);
        puVar1 = (uint64_t *)(lVar6 + uVar12 * 0x18);
        uStack_60 = *puVar1;
        uStack_58 = puVar1[1];
        uStack_50 = *(uint64_t *)(lVar6 + 0x10 + uVar12 * 0x18);
        lVar6 = *(int64_t *)(lVar9 + 8 + (uint64_t)uVar18 * 8);
        puVar1 = (uint64_t *)(lVar7 + lVar16);
        uVar10 = puVar1[1];
        uVar4 = *(uint64_t *)(lVar7 + 0x10 + lVar16);
        uVar12 = (uint64_t)(uVar13 + uVar18 * -0x800);
        lVar7 = param_2[1];
        puVar2 = (uint64_t *)(lVar6 + uVar12 * 0x18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar10;
        lStack_98 = *param_1;
        lStack_90 = param_1[1];
        *(uint64_t *)(lVar6 + 0x10 + uVar12 * 0x18) = uVar4;
        FUN_1800eca80(&lStack_98,0,(int64_t)(int)lVar7 - (int64_t)(int)uVar17,0,&uStack_60);
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < iVar5);
  }
  lVar9 = *param_2;
  uVar13 = *(uint *)(param_2 + 1);
  lStack_90 = param_2[1];
  lVar3 = param_1[1];
  if (1 < (int64_t)(int)uVar13 - (int64_t)(int)lVar3) {
    lVar16 = *param_1;
    uVar17 = (uint)param_1[1];
    uVar12 = (uint64_t)(uVar17 + (uVar17 >> 0xb) * -0x800);
    lStack_98 = lVar9;
    do {
      uVar18 = uVar13 - 1;
      uVar11 = uVar18 & 0x7ff;
      lVar15 = *(int64_t *)(lVar9 + 8 + (uint64_t)(uVar18 >> 0xb) * 8);
      puVar1 = (uint64_t *)(lVar15 + (uint64_t)uVar11 * 0x18);
      uStack_48 = *puVar1;
      uStack_40 = puVar1[1];
      uStack_38 = *(uint64_t *)(lVar15 + 0x10 + (uint64_t)uVar11 * 0x18);
      lVar15 = *(int64_t *)(lVar16 + (uint64_t)(uVar17 >> 0xb) * 8 + 8);
      lVar6 = *(int64_t *)(lVar9 + 8 + (uint64_t)(uVar18 >> 0xb) * 8);
      puVar1 = (uint64_t *)(lVar15 + uVar12 * 0x18);
      uVar10 = puVar1[1];
      uVar4 = *(uint64_t *)(lVar15 + 0x10 + uVar12 * 0x18);
      puVar2 = (uint64_t *)(lVar6 + (uint64_t)uVar11 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar10;
      lStack_88 = *param_1;
      lStack_80 = param_1[1];
      *(uint64_t *)(lVar6 + 0x10 + (uint64_t)uVar11 * 0x18) = uVar4;
      FUN_1800eca80(&lStack_88,0,((int64_t)(int)uVar13 - (int64_t)(int)uVar17) + -1,0,&uStack_48);
      uVar13 = uVar18;
    } while (1 < (int64_t)(int)uVar18 - (int64_t)(int)lVar3);
  }
  return;
}






// 函数: void FUN_1800eb8f6(int param_1)
void FUN_1800eb8f6(int param_1)

{
  uint uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint uVar12;
  int64_t in_RAX;
  uint64_t uVar13;
  uint64_t uVar14;
  uint unaff_EBX;
  int64_t unaff_RBP;
  int unaff_ESI;
  int64_t *unaff_RDI;
  uint uVar15;
  uint uVar16;
  int64_t *unaff_R12;
  int64_t unaff_R15;
  bool bVar17;
  int64_t lStack0000000000000040;
  int64_t lStack0000000000000048;
  int64_t in_stack_00000050;
  int64_t in_stack_00000058;
  uint64_t in_stack_00000078;
  uint64_t in_stack_00000080;
  uint64_t in_stack_00000088;
  uint64_t in_stack_00000090;
  uint64_t in_stack_00000098;
  uint64_t in_stack_000000a0;
  int64_t lStack00000000000000e0;
  
  lVar6 = *unaff_RDI;
  lStack00000000000000e0 = in_RAX * 8;
  lVar4 = (uint64_t)(uint)((int)unaff_R15 - param_1) * 0x18;
  do {
    lVar7 = *(int64_t *)(lStack00000000000000e0 + 8 + lVar6);
    uVar15 = unaff_EBX >> 0xb;
    uVar14 = (uint64_t)(unaff_EBX + uVar15 * -0x800);
    lVar8 = *(int64_t *)(unaff_RBP + 8 + (uint64_t)uVar15 * 8);
    uVar13 = *(uint64_t *)(lVar8 + uVar14 * 0x18);
    uVar9 = *(uint64_t *)(lVar7 + lVar4);
    bVar17 = uVar13 < uVar9;
    if (uVar13 == uVar9) {
      bVar17 = *(uint64_t *)(lVar8 + uVar14 * 0x18 + 8) < *(uint64_t *)(lVar7 + 8 + lVar4);
    }
    if (bVar17) {
      lVar7 = *(int64_t *)(unaff_RBP + 8 + (uint64_t)uVar15 * 8);
      uVar13 = (uint64_t)(unaff_EBX + uVar15 * -0x800);
      lVar8 = *(int64_t *)(lStack00000000000000e0 + 8 + lVar6);
      puVar2 = (uint64_t *)(lVar7 + uVar13 * 0x18);
      in_stack_00000078 = *puVar2;
      in_stack_00000080 = puVar2[1];
      in_stack_00000088 = *(uint64_t *)(lVar7 + 0x10 + uVar13 * 0x18);
      lVar7 = *(int64_t *)(unaff_RBP + 8 + (uint64_t)uVar15 * 8);
      puVar2 = (uint64_t *)(lVar8 + lVar4);
      uVar11 = puVar2[1];
      uVar5 = *(uint64_t *)(lVar8 + 0x10 + lVar4);
      uVar13 = (uint64_t)(unaff_EBX + uVar15 * -0x800);
      lVar8 = unaff_R12[1];
      puVar3 = (uint64_t *)(lVar7 + uVar13 * 0x18);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      lStack0000000000000040 = *unaff_RDI;
      lStack0000000000000048 = unaff_RDI[1];
      *(uint64_t *)(lVar7 + 0x10 + uVar13 * 0x18) = uVar5;
      FUN_1800eca80(&stack0x00000040,0,(int)lVar8 - unaff_R15,0,&stack0x00000078);
    }
    unaff_EBX = unaff_EBX + 1;
  } while ((int)unaff_EBX < unaff_ESI);
  lVar4 = *unaff_R12;
  uVar15 = *(uint *)(unaff_R12 + 1);
  lStack0000000000000048 = unaff_R12[1];
  lVar6 = unaff_RDI[1];
  if (1 < (int64_t)(int)uVar15 - (int64_t)(int)lVar6) {
    lVar7 = *unaff_RDI;
    uVar16 = (uint)unaff_RDI[1];
    uVar13 = (uint64_t)(uVar16 + (uVar16 >> 0xb) * -0x800);
    lStack0000000000000040 = lVar4;
    do {
      uVar1 = uVar15 - 1;
      uVar12 = uVar1 & 0x7ff;
      lVar8 = *(int64_t *)(lVar4 + 8 + (uint64_t)(uVar1 >> 0xb) * 8);
      puVar2 = (uint64_t *)(lVar8 + (uint64_t)uVar12 * 0x18);
      in_stack_00000090 = *puVar2;
      in_stack_00000098 = puVar2[1];
      in_stack_000000a0 = *(uint64_t *)(lVar8 + 0x10 + (uint64_t)uVar12 * 0x18);
      lVar8 = *(int64_t *)(lVar7 + (uint64_t)(uVar16 >> 0xb) * 8 + 8);
      lVar10 = *(int64_t *)(lVar4 + 8 + (uint64_t)(uVar1 >> 0xb) * 8);
      puVar2 = (uint64_t *)(lVar8 + uVar13 * 0x18);
      uVar11 = puVar2[1];
      uVar5 = *(uint64_t *)(lVar8 + 0x10 + uVar13 * 0x18);
      puVar3 = (uint64_t *)(lVar10 + (uint64_t)uVar12 * 0x18);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      in_stack_00000050 = *unaff_RDI;
      in_stack_00000058 = unaff_RDI[1];
      *(uint64_t *)(lVar10 + 0x10 + (uint64_t)uVar12 * 0x18) = uVar5;
      FUN_1800eca80(&stack0x00000050,0,((int64_t)(int)uVar15 - (int64_t)(int)uVar16) + -1,0,
                    &stack0x00000090);
      uVar15 = uVar1;
    } while (1 < (int64_t)(int)uVar1 - (int64_t)(int)lVar6);
  }
  return;
}






// 函数: void FUN_1800eba0a(void)
void FUN_1800eba0a(void)

{
  uint uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint uVar11;
  uint64_t uVar12;
  int64_t *unaff_RDI;
  uint uVar13;
  uint uVar14;
  int64_t *unaff_R12;
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000044;
  uint uStack0000000000000048;
  int32_t uStack000000000000004c;
  int64_t lStack0000000000000050;
  int64_t lStack0000000000000058;
  uint64_t uStack0000000000000090;
  uint64_t uStack0000000000000098;
  uint64_t uStack00000000000000a0;
  
  uStack0000000000000040 = (int32_t)*unaff_R12;
  uStack0000000000000044 = *(int32_t *)((int64_t)unaff_R12 + 4);
  lVar9 = *unaff_R12;
  uStack0000000000000048 = *(uint *)(unaff_R12 + 1);
  uStack000000000000004c = *(int32_t *)((int64_t)unaff_R12 + 0xc);
  lVar10 = unaff_RDI[1];
  if (1 < (int64_t)(int)uStack0000000000000048 - (int64_t)(int)lVar10) {
    lVar7 = *unaff_RDI;
    uVar13 = (uint)unaff_RDI[1];
    uVar12 = (uint64_t)(uVar13 + (uVar13 >> 0xb) * -0x800);
    uVar14 = uStack0000000000000048;
    do {
      uVar1 = uVar14 - 1;
      uVar11 = uVar1 & 0x7ff;
      lVar5 = *(int64_t *)(lVar9 + 8 + (uint64_t)(uVar1 >> 0xb) * 8);
      puVar2 = (uint64_t *)(lVar5 + (uint64_t)uVar11 * 0x18);
      uStack0000000000000090 = *puVar2;
      uStack0000000000000098 = puVar2[1];
      uStack00000000000000a0 = *(uint64_t *)(lVar5 + 0x10 + (uint64_t)uVar11 * 0x18);
      lVar5 = *(int64_t *)(lVar7 + (uint64_t)(uVar13 >> 0xb) * 8 + 8);
      lVar6 = *(int64_t *)(lVar9 + 8 + (uint64_t)(uVar1 >> 0xb) * 8);
      puVar2 = (uint64_t *)(lVar5 + uVar12 * 0x18);
      uVar8 = puVar2[1];
      uVar4 = *(uint64_t *)(lVar5 + 0x10 + uVar12 * 0x18);
      puVar3 = (uint64_t *)(lVar6 + (uint64_t)uVar11 * 0x18);
      *puVar3 = *puVar2;
      puVar3[1] = uVar8;
      lStack0000000000000050 = *unaff_RDI;
      lStack0000000000000058 = unaff_RDI[1];
      *(uint64_t *)(lVar6 + 0x10 + (uint64_t)uVar11 * 0x18) = uVar4;
      FUN_1800eca80(&stack0x00000050,0,((int64_t)(int)uVar14 - (int64_t)(int)uVar13) + -1,0,
                    &stack0x00000090);
      uVar14 = uVar1;
    } while (1 < (int64_t)(int)uVar1 - (int64_t)(int)lVar10);
  }
  return;
}






