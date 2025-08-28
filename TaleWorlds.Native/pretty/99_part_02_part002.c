#include "TaleWorlds.Native.Split.h"

// 99_part_02_part002.c - 18 个函数

// 函数: void FUN_1800e9fd0(int8_t (*param_1) [16],longlong param_2)
void FUN_1800e9fd0(int8_t (*param_1) [16],longlong param_2)

{
  uint uVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint uVar7;
  longlong lVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  longlong lVar14;
  uint uVar15;
  uint64_t uVar16;
  int8_t auVar17 [16];
  int8_t auVar18 [16];
  char cVar19;
  ulonglong uVar20;
  uint uVar21;
  int32_t uVar22;
  int32_t uVar23;
  uint uVar24;
  int8_t auStack_88 [16];
  
  auStack_88 = *param_1;
  uVar24 = auStack_88._8_4_;
  uVar7 = *(uint *)(param_2 + 8);
  if (uVar24 != uVar7) {
    uVar16 = auStack_88._0_8_;
    uVar22 = auStack_88._0_4_;
    uVar23 = auStack_88._4_4_;
    while( true ) {
      auVar17 = auStack_88;
      lVar14 = CONCAT44(uVar23,uVar22);
      uVar1 = uVar24 - 1;
      uVar20 = (ulonglong)(uVar24 + (uVar24 >> 0xb) * -0x800);
      lVar8 = *(longlong *)(uVar16 + 8 + (ulonglong)(uVar24 >> 0xb) * 8);
      uVar5 = *(uint64_t *)(lVar8 + 0x10 + uVar20 * 0x18);
      puVar2 = (uint64_t *)(lVar8 + uVar20 * 0x18);
      uVar12 = *puVar2;
      uVar13 = puVar2[1];
      cVar19 = func_0x0001800d4090(uVar5,*(uint64_t *)
                                          (*(longlong *)(lVar14 + 8 + (ulonglong)(uVar1 >> 0xb) * 8)
                                           + 0x10 + (ulonglong)(uVar1 + (uVar1 >> 0xb) * -0x800) *
                                                    0x18));
      uVar15 = uVar24;
      while (cVar19 != '\0') {
        uVar21 = uVar1 - 1;
        uVar20 = (ulonglong)(uVar1 + (uVar1 >> 0xb) * -0x800);
        lVar8 = *(longlong *)(lVar14 + 8 + (ulonglong)(uVar1 >> 0xb) * 8);
        puVar3 = (int32_t *)(lVar8 + uVar20 * 0x18);
        uVar9 = puVar3[1];
        uVar10 = puVar3[2];
        uVar11 = puVar3[3];
        uVar6 = *(uint64_t *)(lVar8 + 0x10 + uVar20 * 0x18);
        uVar20 = (ulonglong)(uVar15 + (uVar15 >> 0xb) * -0x800);
        lVar8 = *(longlong *)(CONCAT44(uVar23,uVar22) + 8 + (ulonglong)(uVar15 >> 0xb) * 8);
        puVar4 = (int32_t *)(lVar8 + uVar20 * 0x18);
        *puVar4 = *puVar3;
        puVar4[1] = uVar9;
        puVar4[2] = uVar10;
        puVar4[3] = uVar11;
        *(uint64_t *)(lVar8 + 0x10 + uVar20 * 0x18) = uVar6;
        cVar19 = func_0x0001800d4090(uVar5,*(uint64_t *)
                                            (*(longlong *)
                                              (lVar14 + 8 + (ulonglong)(uVar21 >> 0xb) * 8) + 0x10 +
                                            (ulonglong)(uVar21 + (uVar21 >> 0xb) * -0x800) * 0x18));
        uVar15 = uVar15 - 1;
        uVar1 = uVar21;
      }
      uVar24 = uVar24 + 1;
      auStack_88._8_4_ = uVar24;
      auVar18 = auStack_88;
      uVar20 = (ulonglong)(uVar15 + (uVar15 >> 0xb) * -0x800);
      lVar8 = *(longlong *)(CONCAT44(uVar23,uVar22) + 8 + (ulonglong)(uVar15 >> 0xb) * 8);
      puVar2 = (uint64_t *)(lVar8 + uVar20 * 0x18);
      *puVar2 = uVar12;
      puVar2[1] = uVar13;
      *(uint64_t *)(lVar8 + 0x10 + uVar20 * 0x18) = uVar5;
      if (uVar24 == uVar7) break;
      auStack_88._0_4_ = auVar17._0_4_;
      auStack_88._4_4_ = auVar17._4_4_;
      uVar22 = auStack_88._0_4_;
      uVar23 = auStack_88._4_4_;
      auStack_88 = auVar18;
    }
  }
  return;
}






// 函数: void FUN_1800e9fff(uint64_t param_1,uint64_t param_2)
void FUN_1800e9fff(uint64_t param_1,uint64_t param_2)

{
  uint uVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  longlong lVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  longlong lVar13;
  uint uVar14;
  char cVar15;
  longlong in_RAX;
  ulonglong uVar16;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint uVar17;
  uint64_t unaff_RSI;
  uint unaff_EDI;
  uint unaff_R12D;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  int32_t uVar18;
  int32_t uVar19;
  uint in_XMM1_Dc;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  uint uStack0000000000000028;
  int32_t uStack0000000000000030;
  int32_t uStack0000000000000034;
  int32_t uStack0000000000000040;
  uint uStack0000000000000048;
  uint64_t uStack0000000000000060;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x18) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R15;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM7_Dd;
  uVar18 = (int)param_2;
  uVar19 = (int)((ulonglong)param_2 >> 0x20);
  do {
    lVar13 = CONCAT44(uVar19,uVar18);
    uVar1 = unaff_EDI - 1;
    uVar16 = (ulonglong)(unaff_EDI + (unaff_EDI >> 0xb) * -0x800);
    lVar7 = *(longlong *)(_uStack0000000000000030 + 8 + (ulonglong)(unaff_EDI >> 0xb) * 8);
    uVar5 = *(uint64_t *)(lVar7 + 0x10 + uVar16 * 0x18);
    puVar2 = (uint64_t *)(lVar7 + uVar16 * 0x18);
    uVar11 = *puVar2;
    uVar12 = puVar2[1];
    uStack0000000000000028 = in_XMM1_Dc;
    uStack0000000000000040 = uVar18;
    uStack0000000000000048 = in_XMM1_Dc;
    uStack0000000000000060 = uVar5;
    cVar15 = func_0x0001800d4090(uVar5,*(uint64_t *)
                                        (*(longlong *)(lVar13 + 8 + (ulonglong)(uVar1 >> 0xb) * 8) +
                                         0x10 + (ulonglong)(uVar1 + (uVar1 >> 0xb) * -0x800) * 0x18)
                                );
    uVar14 = uStack0000000000000028;
    while (cVar15 != '\0') {
      uVar17 = uVar1 - 1;
      uVar16 = (ulonglong)(uVar1 + (uVar1 >> 0xb) * -0x800);
      lVar7 = *(longlong *)(lVar13 + 8 + (ulonglong)(uVar1 >> 0xb) * 8);
      puVar3 = (int32_t *)(lVar7 + uVar16 * 0x18);
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      uVar6 = *(uint64_t *)(lVar7 + 0x10 + uVar16 * 0x18);
      uVar16 = (ulonglong)(uVar14 + (uVar14 >> 0xb) * -0x800);
      lVar7 = *(longlong *)(CONCAT44(uVar19,uVar18) + 8 + (ulonglong)(uVar14 >> 0xb) * 8);
      puVar4 = (int32_t *)(lVar7 + uVar16 * 0x18);
      *puVar4 = *puVar3;
      puVar4[1] = uVar8;
      puVar4[2] = uVar9;
      puVar4[3] = uVar10;
      *(uint64_t *)(lVar7 + 0x10 + uVar16 * 0x18) = uVar6;
      cVar15 = func_0x0001800d4090(uVar5,*(uint64_t *)
                                          (*(longlong *)
                                            (lVar13 + 8 + (ulonglong)(uVar17 >> 0xb) * 8) + 0x10 +
                                          (ulonglong)(uVar17 + (uVar17 >> 0xb) * -0x800) * 0x18));
      uVar1 = uVar17;
      uVar14 = uVar14 - 1;
    }
    in_XMM1_Dc = unaff_EDI + 1;
    uVar16 = (ulonglong)(uVar14 + (uVar14 >> 0xb) * -0x800);
    lVar7 = *(longlong *)(CONCAT44(uVar19,uVar18) + 8 + (ulonglong)(uVar14 >> 0xb) * 8);
    puVar2 = (uint64_t *)(lVar7 + uVar16 * 0x18);
    *puVar2 = uVar11;
    puVar2[1] = uVar12;
    *(uint64_t *)(lVar7 + 0x10 + uVar16 * 0x18) = uVar5;
    uVar18 = uStack0000000000000030;
    uVar19 = uStack0000000000000034;
    unaff_EDI = in_XMM1_Dc;
  } while (in_XMM1_Dc != unaff_R12D);
  return;
}






// 函数: void FUN_1800ea180(void)
void FUN_1800ea180(void)

{
  return;
}






// 函数: void FUN_1800ea190(longlong *param_1,longlong param_2)
void FUN_1800ea190(longlong *param_1,longlong param_2)

{
  int32_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint uVar4;
  uint uVar5;
  uint64_t uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  uint uVar12;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  
  uVar4 = *(uint *)(param_2 + 8);
  uVar5 = *(uint *)(param_1 + 1);
  if (uVar5 != uVar4) {
    lVar8 = *param_1;
    lVar7 = *param_1;
    uVar9 = *(uint *)(param_1 + 1);
    while (uVar9 = uVar9 + 1, uVar9 != uVar4) {
      puVar1 = (int32_t *)
               (*(longlong *)(lVar7 + 8 + (ulonglong)(uVar9 >> 0xb) * 8) +
               (ulonglong)(uVar9 + (uVar9 >> 0xb) * -0x800) * 0x10);
      uStack_38 = *puVar1;
      uStack_34 = puVar1[1];
      uStack_30 = puVar1[2];
      uStack_2c = puVar1[3];
      uVar10 = uVar9;
      uVar12 = uVar9;
      while (uVar12 != uVar5) {
        uVar12 = uVar12 - 1;
        cVar11 = func_0x0001800d40c0(&uStack_38,
                                     *(longlong *)(lVar8 + 8 + (ulonglong)(uVar12 >> 0xb) * 8) +
                                     (ulonglong)(uVar12 & 0x7ff) * 0x10);
        if (cVar11 == '\0') break;
        puVar2 = (uint64_t *)
                 (*(longlong *)(lVar8 + 8 + (ulonglong)(uVar12 >> 0xb) * 8) +
                 (ulonglong)(uVar12 & 0x7ff) * 0x10);
        uVar6 = puVar2[1];
        puVar3 = (uint64_t *)
                 (*(longlong *)(lVar8 + 8 + (ulonglong)(uVar10 >> 0xb) * 8) +
                 (ulonglong)(uVar10 + (uVar10 >> 0xb) * -0x800) * 0x10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar6;
        uVar10 = uVar10 - 1;
      }
      puVar1 = (int32_t *)
               (*(longlong *)(lVar8 + 8 + (ulonglong)(uVar10 >> 0xb) * 8) +
               (ulonglong)(uVar10 + (uVar10 >> 0xb) * -0x800) * 0x10);
      *puVar1 = uStack_38;
      puVar1[1] = uStack_34;
      puVar1[2] = uStack_30;
      puVar1[3] = uStack_2c;
    }
  }
  return;
}






// 函数: void FUN_1800ea1bf(void)
void FUN_1800ea1bf(void)

{
  int32_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint uVar5;
  char cVar6;
  uint in_EAX;
  uint64_t unaff_RBX;
  uint uVar7;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint uVar8;
  uint64_t unaff_RDI;
  longlong in_R11;
  uint64_t unaff_R12;
  uint unaff_R13D;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  int in_XMM0_Dc;
  longlong lStackX_20;
  uint64_t in_stack_00000028;
  uint64_t uStack0000000000000038;
  uint64_t uStack0000000000000048;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000054;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  uint in_stack_000000a0;
  
  *(uint64_t *)(in_R11 + 0x10) = unaff_RBP;
  uVar7 = in_XMM0_Dc + 1;
  if (uVar7 != in_EAX) {
    *(uint64_t *)(in_R11 + 8) = unaff_RBX;
    *(uint64_t *)(in_R11 + 0x20) = unaff_RSI;
    *(uint64_t *)(in_R11 + -0x10) = unaff_RDI;
    *(uint64_t *)(in_R11 + -0x18) = unaff_R12;
    *(uint64_t *)(in_R11 + -0x20) = unaff_R14;
    *(uint64_t *)(in_R11 + -0x28) = unaff_R15;
    do {
      uStack0000000000000038 = CONCAT44(in_stack_00000028._4_4_,uVar7);
      puVar1 = (int32_t *)
               (*(longlong *)(lStackX_20 + 8 + (ulonglong)(uVar7 >> 0xb) * 8) +
               (ulonglong)(uVar7 + (uVar7 >> 0xb) * -0x800) * 0x10);
      uStack0000000000000050 = *puVar1;
      uStack0000000000000054 = puVar1[1];
      uStack0000000000000058 = puVar1[2];
      uStack000000000000005c = puVar1[3];
      uVar8 = uVar7;
      uVar5 = uVar7;
      uStack0000000000000048 = uStack0000000000000038;
      while (uVar8 != unaff_R13D) {
        uVar8 = uVar8 - 1;
        cVar6 = func_0x0001800d40c0(&stack0x00000050,
                                    *(longlong *)(lStackX_20 + 8 + (ulonglong)(uVar8 >> 0xb) * 8) +
                                    (ulonglong)(uVar8 & 0x7ff) * 0x10);
        if (cVar6 == '\0') break;
        puVar2 = (uint64_t *)
                 (*(longlong *)(lStackX_20 + 8 + (ulonglong)(uVar8 >> 0xb) * 8) +
                 (ulonglong)(uVar8 & 0x7ff) * 0x10);
        uVar4 = puVar2[1];
        puVar3 = (uint64_t *)
                 (*(longlong *)(lStackX_20 + 8 + (ulonglong)(uVar5 >> 0xb) * 8) +
                 (ulonglong)(uVar5 + (uVar5 >> 0xb) * -0x800) * 0x10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        uVar5 = uVar5 - 1;
      }
      uVar7 = uVar7 + 1;
      puVar1 = (int32_t *)
               (*(longlong *)(lStackX_20 + 8 + (ulonglong)(uVar5 >> 0xb) * 8) +
               (ulonglong)(uVar5 + (uVar5 >> 0xb) * -0x800) * 0x10);
      *puVar1 = uStack0000000000000050;
      puVar1[1] = uStack0000000000000054;
      puVar1[2] = uStack0000000000000058;
      puVar1[3] = uStack000000000000005c;
    } while (uVar7 != in_stack_000000a0);
  }
  return;
}






// 函数: void FUN_1800ea1da(void)
void FUN_1800ea1da(void)

{
  int32_t *puVar1;
  int32_t *puVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint64_t unaff_RBX;
  uint unaff_EBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  longlong in_R11;
  uint64_t unaff_R12;
  uint unaff_R13D;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  int32_t uStackX_20;
  int32_t uStackX_24;
  uint in_stack_00000028;
  uint uStack0000000000000038;
  uint uStack0000000000000048;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000054;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  uint in_stack_000000a0;
  
  *(uint64_t *)(in_R11 + 8) = unaff_RBX;
  *(uint64_t *)(in_R11 + 0x20) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x10) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x18) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x20) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R15;
  do {
    uStack0000000000000038 = in_stack_00000028;
    uStack0000000000000048 = in_stack_00000028;
    puVar1 = (int32_t *)
             (*(longlong *)(CONCAT44(uStackX_24,uStackX_20) + 8 + (ulonglong)(unaff_EBP >> 0xb) * 8)
             + (ulonglong)(unaff_EBP + (unaff_EBP >> 0xb) * -0x800) * 0x10);
    uStack0000000000000050 = *puVar1;
    uStack0000000000000054 = puVar1[1];
    uStack0000000000000058 = puVar1[2];
    uStack000000000000005c = puVar1[3];
    uVar8 = in_stack_00000028;
    if (unaff_EBP != unaff_R13D) {
      uVar7 = in_stack_00000028;
      do {
        in_stack_00000028 = in_stack_00000028 - 1;
        cVar6 = func_0x0001800d40c0(&stack0x00000050,
                                    *(longlong *)
                                     (CONCAT44(uStackX_24,uStackX_20) + 8 +
                                     (ulonglong)(in_stack_00000028 >> 0xb) * 8) +
                                    (ulonglong)(in_stack_00000028 & 0x7ff) * 0x10);
        uVar8 = uVar7;
        if (cVar6 == '\0') break;
        uVar8 = uVar7 - 1;
        puVar1 = (int32_t *)
                 (*(longlong *)
                   (CONCAT44(uStackX_24,uStackX_20) + 8 + (ulonglong)(in_stack_00000028 >> 0xb) * 8)
                 + (ulonglong)(in_stack_00000028 & 0x7ff) * 0x10);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        puVar2 = (int32_t *)
                 (*(longlong *)(CONCAT44(uStackX_24,uStackX_20) + 8 + (ulonglong)(uVar7 >> 0xb) * 8)
                 + (ulonglong)(uVar7 + (uVar7 >> 0xb) * -0x800) * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
        uVar7 = uVar8;
      } while (in_stack_00000028 != unaff_R13D);
    }
    unaff_EBP = unaff_EBP + 1;
    puVar1 = (int32_t *)
             (*(longlong *)(CONCAT44(uStackX_24,uStackX_20) + 8 + (ulonglong)(uVar8 >> 0xb) * 8) +
             (ulonglong)(uVar8 + (uVar8 >> 0xb) * -0x800) * 0x10);
    *puVar1 = uStack0000000000000050;
    puVar1[1] = uStack0000000000000054;
    puVar1[2] = uStack0000000000000058;
    puVar1[3] = uStack000000000000005c;
    in_stack_00000028 = unaff_EBP;
    if (unaff_EBP == in_stack_000000a0) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1800ea2f4(void)
void FUN_1800ea2f4(void)

{
  return;
}






// 函数: void FUN_1800ea2fc(void)
void FUN_1800ea2fc(void)

{
  return;
}






// 函数: void FUN_1800ea310(longlong *param_1,longlong param_2)
void FUN_1800ea310(longlong *param_1,longlong param_2)

{
  uint uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint uVar4;
  uint64_t uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int32_t uVar9;
  int32_t uVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  uint64_t uStack_48;
  uint64_t uStack_40;
  int32_t uStack_38;
  int32_t uStack_34;
  uint uStack_30;
  int32_t uStack_2c;
  int32_t uStack_28;
  int32_t uStack_24;
  uint uStack_20;
  int32_t uStack_1c;
  
  lVar7 = *param_1;
  uStack_2c = *(int32_t *)((longlong)param_1 + 0xc);
  uVar4 = *(uint *)(param_2 + 8);
  uVar9 = (int)*param_1;
  uVar10 = *(int32_t *)((longlong)param_1 + 4);
  for (uVar13 = *(uint *)(param_1 + 1); uVar13 != uVar4; uVar13 = uVar13 + 1) {
    lVar6 = CONCAT44(uVar10,uVar9);
    uVar1 = uVar13 - 1;
    puVar2 = (uint64_t *)
             (*(longlong *)(lVar7 + 8 + (ulonglong)(uVar13 >> 0xb) * 8) +
             (ulonglong)(uVar13 + (uVar13 >> 0xb) * -0x800) * 0x10);
    uStack_48 = *puVar2;
    uStack_40 = puVar2[1];
    uStack_38 = uVar9;
    uStack_34 = uVar10;
    uStack_30 = uVar13;
    uStack_28 = uVar9;
    uStack_24 = uVar10;
    uStack_20 = uVar13;
    uStack_1c = uStack_2c;
    cVar11 = func_0x0001800d40c0(&uStack_48,
                                 (ulonglong)(uVar1 + (uVar1 >> 0xb) * -0x800) * 0x10 +
                                 *(longlong *)(lVar6 + 8 + (ulonglong)(uVar1 >> 0xb) * 8));
    uVar8 = uVar13;
    while (cVar11 != '\0') {
      uVar12 = uVar1 - 1;
      puVar2 = (uint64_t *)
               (*(longlong *)(lVar6 + 8 + (ulonglong)(uVar1 >> 0xb) * 8) +
               (ulonglong)(uVar1 + (uVar1 >> 0xb) * -0x800) * 0x10);
      uVar5 = puVar2[1];
      puVar3 = (uint64_t *)
               (*(longlong *)(CONCAT44(uVar10,uVar9) + 8 + (ulonglong)(uVar8 >> 0xb) * 8) +
               (ulonglong)(uVar8 + (uVar8 >> 0xb) * -0x800) * 0x10);
      *puVar3 = *puVar2;
      puVar3[1] = uVar5;
      cVar11 = func_0x0001800d40c0(&uStack_48,
                                   (ulonglong)(uVar12 + (uVar12 >> 0xb) * -0x800) * 0x10 +
                                   *(longlong *)(lVar6 + 8 + (ulonglong)(uVar12 >> 0xb) * 8));
      uVar8 = uVar8 - 1;
      uVar1 = uVar12;
    }
    puVar2 = (uint64_t *)
             (*(longlong *)(CONCAT44(uVar10,uVar9) + 8 + (ulonglong)(uVar8 >> 0xb) * 8) +
             (ulonglong)(uVar8 + (uVar8 >> 0xb) * -0x800) * 0x10);
    *puVar2 = uStack_48;
    puVar2[1] = uStack_40;
    uVar9 = uStack_38;
    uVar10 = uStack_34;
  }
  return;
}






// 函数: void FUN_1800ea33b(uint64_t param_1,uint64_t param_2)
void FUN_1800ea33b(uint64_t param_1,uint64_t param_2)

{
  uint uVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  uint64_t *puVar4;
  longlong lVar5;
  int32_t uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  char cVar10;
  longlong in_RAX;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint uVar11;
  uint64_t unaff_RSI;
  uint unaff_EDI;
  uint64_t unaff_R12;
  uint64_t unaff_R14;
  uint unaff_R15D;
  int32_t uVar12;
  int32_t uVar13;
  uint in_XMM1_Dc;
  uint uStack0000000000000028;
  int32_t uStack0000000000000030;
  int32_t uStack0000000000000034;
  int32_t uStack0000000000000038;
  int32_t uStack000000000000003c;
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000044;
  uint in_stack_00000048;
  int32_t uStack0000000000000050;
  uint uStack0000000000000058;
  
  uVar13 = (int32_t)((ulonglong)param_2 >> 0x20);
  uVar12 = (int32_t)param_2;
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RSI;
  *(uint64_t *)(in_RAX + 0x20) = unaff_R12;
  lVar5 = *(longlong *)(in_RAX + -0x38);
  *(uint64_t *)(in_RAX + -0x18) = unaff_R14;
  do {
    lVar8 = CONCAT44(uVar13,uVar12);
    uVar1 = unaff_EDI - 1;
    puVar2 = (int32_t *)
             (*(longlong *)(lVar5 + 8 + (ulonglong)(unaff_EDI >> 0xb) * 8) +
             (ulonglong)(unaff_EDI + (unaff_EDI >> 0xb) * -0x800) * 0x10);
    uStack0000000000000030 = *puVar2;
    uStack0000000000000034 = puVar2[1];
    uStack0000000000000038 = puVar2[2];
    uStack000000000000003c = puVar2[3];
    uStack0000000000000028 = in_XMM1_Dc;
    uStack0000000000000050 = uVar12;
    uStack0000000000000058 = in_XMM1_Dc;
    cVar10 = func_0x0001800d40c0(&stack0x00000030,
                                 (ulonglong)(uVar1 + (uVar1 >> 0xb) * -0x800) * 0x10 +
                                 *(longlong *)(lVar8 + 8 + (ulonglong)(uVar1 >> 0xb) * 8));
    lVar7 = CONCAT44(uVar13,uVar12);
    uVar9 = uStack0000000000000028;
    uVar12 = uStack0000000000000040;
    uVar13 = uStack0000000000000044;
    while (uStack0000000000000040 = uVar12, uStack0000000000000044 = uVar13, cVar10 != '\0') {
      uVar11 = uVar1 - 1;
      puVar2 = (int32_t *)
               (*(longlong *)(lVar8 + 8 + (ulonglong)(uVar1 >> 0xb) * 8) +
               (ulonglong)(uVar1 + (uVar1 >> 0xb) * -0x800) * 0x10);
      uVar12 = puVar2[1];
      uVar13 = puVar2[2];
      uVar6 = puVar2[3];
      puVar3 = (int32_t *)
               (*(longlong *)(lVar7 + 8 + (ulonglong)(uVar9 >> 0xb) * 8) +
               (ulonglong)(uVar9 + (uVar9 >> 0xb) * -0x800) * 0x10);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar3[2] = uVar13;
      puVar3[3] = uVar6;
      cVar10 = func_0x0001800d40c0(&stack0x00000030,
                                   (ulonglong)(uVar11 + (uVar11 >> 0xb) * -0x800) * 0x10 +
                                   *(longlong *)(lVar8 + 8 + (ulonglong)(uVar11 >> 0xb) * 8));
      uVar1 = uVar11;
      uVar9 = uVar9 - 1;
      uVar12 = uStack0000000000000040;
      uVar13 = uStack0000000000000044;
    }
    in_XMM1_Dc = unaff_EDI + 1;
    puVar4 = (uint64_t *)
             (*(longlong *)(lVar7 + 8 + (ulonglong)(uVar9 >> 0xb) * 8) +
             (ulonglong)(uVar9 + (uVar9 >> 0xb) * -0x800) * 0x10);
    *puVar4 = CONCAT44(uStack0000000000000034,uStack0000000000000030);
    puVar4[1] = CONCAT44(uStack000000000000003c,uStack0000000000000038);
    unaff_EDI = in_XMM1_Dc;
    in_stack_00000048 = in_XMM1_Dc;
  } while (in_XMM1_Dc != unaff_R15D);
  return;
}






// 函数: void FUN_1800ea48d(void)
void FUN_1800ea48d(void)

{
  return;
}






// 函数: void FUN_1800ea4a0(uint64_t *param_1,uint64_t *param_2)
void FUN_1800ea4a0(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  char cVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  
  if (param_1 != param_2) {
    for (puVar5 = param_1 + 1; puVar5 != param_2; puVar5 = puVar5 + 1) {
      uVar2 = *puVar5;
      puVar4 = puVar5;
      puVar6 = puVar5;
      while (puVar4 != param_1) {
        puVar1 = puVar4 + -1;
        puVar4 = puVar4 + -1;
        cVar3 = func_0x0001800da750(uVar2,*puVar1);
        if (cVar3 == '\0') break;
        *puVar6 = *puVar4;
        puVar6 = puVar6 + -1;
      }
      *puVar6 = uVar2;
    }
  }
  return;
}






// 函数: void FUN_1800ea4b0(uint64_t *param_1,uint64_t *param_2)
void FUN_1800ea4b0(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  char cVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  
  puVar5 = param_1 + 1;
  do {
    if (puVar5 == param_2) {
      return;
    }
    uVar2 = *puVar5;
    puVar4 = puVar5;
    puVar6 = puVar5;
    while (puVar4 != param_1) {
      puVar1 = puVar4 + -1;
      puVar4 = puVar4 + -1;
      cVar3 = func_0x0001800da750(uVar2,*puVar1);
      if (cVar3 == '\0') break;
      *puVar6 = *puVar4;
      puVar6 = puVar6 + -1;
    }
    puVar5 = puVar5 + 1;
    *puVar6 = uVar2;
  } while( true );
}






// 函数: void FUN_1800ea4c4(void)
void FUN_1800ea4c4(void)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  char cVar3;
  uint64_t *puVar4;
  uint64_t *unaff_RBP;
  uint64_t *unaff_RSI;
  uint64_t *puVar5;
  uint64_t *unaff_R15;
  
  do {
    uVar2 = *unaff_RSI;
    puVar4 = unaff_RSI;
    puVar5 = unaff_RSI;
    while (puVar4 != unaff_RBP) {
      puVar1 = puVar4 + -1;
      puVar4 = puVar4 + -1;
      cVar3 = func_0x0001800da750(uVar2,*puVar1);
      if (cVar3 == '\0') break;
      *puVar5 = *puVar4;
      puVar5 = puVar5 + -1;
    }
    unaff_RSI = unaff_RSI + 1;
    *puVar5 = uVar2;
    if (unaff_RSI == unaff_R15) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1800ea52e(void)
void FUN_1800ea52e(void)

{
  return;
}






// 函数: void FUN_1800ea53a(void)
void FUN_1800ea53a(void)

{
  return;
}






// 函数: void FUN_1800ea540(longlong *param_1,longlong param_2)
void FUN_1800ea540(longlong *param_1,longlong param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint64_t uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  ulonglong *puVar13;
  uint uVar14;
  bool bVar15;
  
  uVar3 = *(uint *)(param_1 + 1);
  uVar4 = *(uint *)(param_2 + 8);
  if (uVar3 != uVar4) {
    lVar10 = *param_1;
    lVar9 = *param_1;
    uVar11 = *(uint *)(param_1 + 1);
    while (uVar11 = uVar11 + 1, uVar11 != uVar4) {
      puVar13 = (ulonglong *)
                (*(longlong *)(lVar9 + 8 + (ulonglong)(uVar11 >> 0xb) * 8) +
                (ulonglong)(uVar11 + (uVar11 >> 0xb) * -0x800) * 0x10);
      uVar6 = *puVar13;
      plVar7 = (longlong *)puVar13[1];
      uVar12 = uVar11;
      uVar14 = uVar11;
      while (uVar14 != uVar3) {
        uVar14 = uVar14 - 1;
        puVar13 = (ulonglong *)
                  (*(longlong *)(lVar10 + 8 + (ulonglong)(uVar14 >> 0xb) * 8) +
                  (ulonglong)(uVar14 & 0x7ff) * 0x10);
        uVar5 = *puVar13;
        bVar15 = uVar6 < uVar5;
        if (uVar6 == uVar5) {
          bVar15 = *(int *)(*(longlong *)(*(longlong *)puVar13[1] + 0x18) + 0x184) <
                   *(int *)(*(longlong *)(*plVar7 + 0x18) + 0x184);
        }
        if (!bVar15) break;
        puVar1 = (uint64_t *)
                 (*(longlong *)(lVar10 + 8 + (ulonglong)(uVar14 >> 0xb) * 8) +
                 (ulonglong)(uVar14 & 0x7ff) * 0x10);
        uVar8 = puVar1[1];
        puVar2 = (uint64_t *)
                 (*(longlong *)(lVar10 + 8 + (ulonglong)(uVar12 >> 0xb) * 8) +
                 (ulonglong)(uVar12 + (uVar12 >> 0xb) * -0x800) * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar8;
        uVar12 = uVar12 - 1;
      }
      puVar13 = (ulonglong *)
                (*(longlong *)(lVar10 + 8 + (ulonglong)(uVar12 >> 0xb) * 8) +
                (ulonglong)(uVar12 + (uVar12 >> 0xb) * -0x800) * 0x10);
      *puVar13 = uVar6;
      puVar13[1] = (ulonglong)plVar7;
    }
  }
  return;
}






// 函数: void FUN_1800ea563(void)
void FUN_1800ea563(void)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint64_t uVar6;
  uint uVar7;
  uint uVar8;
  longlong in_RAX;
  ulonglong *puVar9;
  uint uVar10;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint unaff_R12D;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint unaff_R15D;
  bool bVar11;
  int in_XMM0_Dc;
  longlong unaff_retaddr;
  uint uStackX_8;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  uVar10 = in_XMM0_Dc + 1;
  *(uint *)(in_RAX + -0x60) = uVar10;
  if (uVar10 != unaff_R12D) {
    *(uint64_t *)(in_RAX + 0x10) = unaff_RBP;
    *(uint64_t *)(in_RAX + 0x18) = unaff_RSI;
    *(uint64_t *)(in_RAX + -0x18) = unaff_RDI;
    *(uint64_t *)(in_RAX + -0x20) = unaff_R13;
    *(uint64_t *)(in_RAX + -0x28) = unaff_R14;
    do {
      puVar9 = (ulonglong *)
               (*(longlong *)(unaff_retaddr + 8 + (ulonglong)(uVar10 >> 0xb) * 8) +
               (ulonglong)(uVar10 + (uVar10 >> 0xb) * -0x800) * 0x10);
      uVar4 = *puVar9;
      plVar5 = (longlong *)puVar9[1];
      uVar7 = uStackX_8;
      uVar8 = uVar10;
      while (uVar8 != unaff_R15D) {
        uStackX_8 = uStackX_8 - 1;
        puVar9 = (ulonglong *)
                 (*(longlong *)(unaff_retaddr + 8 + (ulonglong)(uStackX_8 >> 0xb) * 8) +
                 (ulonglong)(uStackX_8 & 0x7ff) * 0x10);
        uVar3 = *puVar9;
        bVar11 = uVar4 < uVar3;
        if (uVar4 == uVar3) {
          bVar11 = *(int *)(*(longlong *)(*(longlong *)puVar9[1] + 0x18) + 0x184) <
                   *(int *)(*(longlong *)(*plVar5 + 0x18) + 0x184);
        }
        if (!bVar11) break;
        puVar1 = (uint64_t *)
                 (*(longlong *)(unaff_retaddr + 8 + (ulonglong)(uStackX_8 >> 0xb) * 8) +
                 (ulonglong)(uStackX_8 & 0x7ff) * 0x10);
        uVar6 = puVar1[1];
        puVar2 = (uint64_t *)
                 (*(longlong *)(unaff_retaddr + 8 + (ulonglong)(uVar7 >> 0xb) * 8) +
                 (ulonglong)(uVar7 + (uVar7 >> 0xb) * -0x800) * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar6;
        uVar7 = uVar7 - 1;
        uVar8 = uStackX_8;
      }
      uVar10 = uVar10 + 1;
      puVar9 = (ulonglong *)
               (*(longlong *)(unaff_retaddr + 8 + (ulonglong)(uVar7 >> 0xb) * 8) +
               (ulonglong)(uVar7 + (uVar7 >> 0xb) * -0x800) * 0x10);
      *puVar9 = uVar4;
      puVar9[1] = (ulonglong)plVar5;
      uStackX_8 = uVar10;
    } while (uVar10 != unaff_R12D);
  }
  return;
}






