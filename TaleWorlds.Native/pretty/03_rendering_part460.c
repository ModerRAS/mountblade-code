#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part460.c - 9 个函数

// 函数: void FUN_180514c04(uint64_t param_1,longlong param_2)
void FUN_180514c04(uint64_t param_1,longlong param_2)

{
  ushort *puVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  float fVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  longlong in_RAX;
  longlong lVar9;
  ushort uVar10;
  uint *puVar11;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int8_t auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint64_t uStack0000000000000040;
  uint64_t uStack0000000000000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  int32_t uStack000000000000006c;
  
  fVar22 = *(float *)(param_2 + 0xa4);
  lVar9 = *(longlong *)(in_RAX + 0x8a8);
  fVar20 = *(float *)(param_2 + 0xa8);
  lVar5 = *(longlong *)(unaff_RBX + 0x20);
  fStack0000000000000054 =
       *(float *)(param_2 + 0xb4) * *(float *)(lVar9 + 0x80) +
       *(float *)(param_2 + 0xb0) * *(float *)(lVar9 + 0x70) + *(float *)(lVar9 + 0xa0);
  fStack0000000000000058 =
       *(float *)(lVar9 + 0x98) * *(float *)(param_2 + 0xb8) + *(float *)(lVar9 + 0xa8);
  fStack0000000000000050 =
       *(float *)(param_2 + 0xb0) * *(float *)(lVar9 + 0x74) +
       *(float *)(param_2 + 0xb4) * *(float *)(lVar9 + 0x84) + *(float *)(lVar9 + 0xa4);
  lVar9 = *(longlong *)(unaff_RDI + 0x30c0 + unaff_RSI);
  fVar17 = *(float *)(param_2 + 0xa0) * fVar20;
  fVar12 = fVar22 * *(float *)(param_2 + 0xac);
  fVar23 = fVar20 * *(float *)(param_2 + 0xac) - *(float *)(param_2 + 0xa0) * fVar22;
  fStack0000000000000064 = *(float *)(lVar9 + 0x10) - *(float *)(lVar5 + 0x10);
  fStack0000000000000068 = *(float *)(lVar9 + 0x14) - *(float *)(lVar5 + 0x14);
  fVar23 = fVar23 + fVar23;
  fVar18 = fVar17 + fVar17 + fVar12 + fVar12;
  fVar12 = *(float *)(unaff_RBX + 0x530);
  fVar17 = *(float *)(unaff_RBX + 0x520);
  fVar2 = *(float *)(unaff_RBX + 0x534);
  fVar3 = *(float *)(unaff_RBX + 0x524);
  fStack0000000000000060 = *(float *)(lVar9 + 0xc) - *(float *)(lVar5 + 0xc);
  uStack000000000000006c = 0x7f7fffff;
  fVar14 = fStack0000000000000064 * fStack0000000000000064 +
           fStack0000000000000060 * fStack0000000000000060 +
           fStack0000000000000068 * fStack0000000000000068;
  auVar16 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
  fVar24 = auVar16._0_4_;
  fVar14 = fVar24 * 0.5 * (3.0 - fVar14 * fVar24 * fVar24);
  *(float *)(param_2 + 0x70) = fStack0000000000000060 * fVar14;
  *(float *)(param_2 + 0x74) = fStack0000000000000064 * fVar14;
  *(float *)(param_2 + 0x78) = fStack0000000000000068 * fVar14;
  *(int32_t *)(param_2 + 0x7c) = 0x7f7fffff;
  lVar9 = *(longlong *)(unaff_RBX + 0x728);
  fVar14 = *(float *)(lVar9 + 0x78) * *(float *)(lVar9 + 100) -
           *(float *)(lVar9 + 0x74) * *(float *)(lVar9 + 0x68);
  uStack0000000000000040 = *(uint64_t *)(lVar9 + 0x40);
  uStack0000000000000048 = *(uint64_t *)(lVar9 + 0x48);
  fVar24 = *(float *)(lVar9 + 0x70) * *(float *)(lVar9 + 0x68) -
           *(float *)(lVar9 + 0x60) * *(float *)(lVar9 + 0x78);
  fVar25 = *(float *)(lVar9 + 0x60) * *(float *)(lVar9 + 0x74) -
           *(float *)(lVar9 + 0x70) * *(float *)(lVar9 + 100);
  if (((fVar14 == 0.0) && (fVar24 == 0.0)) && (fVar25 == 0.0)) {
    puVar11 = (uint *)((longlong)*(char *)(*(longlong *)(unaff_RBX + 0x590) + 0x25fb) * 0x100 +
                      *(longlong *)(*(longlong *)(unaff_RBX + 0x658) + 0x18));
    do {
      LOCK();
      uVar4 = *puVar11;
      *puVar11 = *puVar11 | 1;
      UNLOCK();
    } while ((uVar4 & 1) != 0);
    fVar14 = (float)puVar11[1];
    fVar24 = (float)puVar11[2];
    fVar25 = (float)puVar11[3];
    fVar6 = (float)puVar11[4];
    uVar7 = *(uint64_t *)(puVar11 + 5);
    uVar8 = *(uint64_t *)(puVar11 + 7);
    *(float *)(unaff_RBP + -0x40) = fVar14;
    *(float *)(unaff_RBP + -0x3c) = fVar24;
    *(float *)(unaff_RBP + -0x38) = fVar25;
    *(float *)(unaff_RBP + -0x34) = fVar6;
    *(uint64_t *)(unaff_RBP + -0x30) = uVar7;
    *(uint64_t *)(unaff_RBP + -0x28) = uVar8;
    *puVar11 = 0;
    lVar9 = *(longlong *)(unaff_RBX + 0x728);
    fVar21 = *(float *)(lVar9 + 0x54) - fStack0000000000000050;
    fVar13 = *(float *)(lVar9 + 0x58) - fStack0000000000000058;
    fVar19 = fVar25 * fVar6 - fVar14 * fVar24;
    fVar15 = *(float *)(lVar9 + 0x50) - fStack0000000000000054;
    fVar14 = fVar14 * fVar25 + fVar14 * fVar25 + fVar24 * fVar6 + fVar24 * fVar6;
    fVar19 = fVar19 + fVar19;
    fVar14 = (fVar19 * *(float *)(unaff_RBX + 0x530) + fVar14 * *(float *)(unaff_RBX + 0x520)) *
             fVar15 + (fVar19 * *(float *)(unaff_RBX + 0x534) +
                      fVar14 * *(float *)(unaff_RBX + 0x524)) * fVar21 +
             (1.0 - (fVar25 * fVar25 + fVar25 * fVar25 + fVar24 * fVar24 + fVar24 * fVar24)) *
             fVar13;
    if (((((fVar23 * fVar2 + fVar18 * fVar3) * fVar21 + (fVar18 * fVar17 + fVar23 * fVar12) * fVar15
          + (1.0 - (fVar22 * fVar22 + fVar22 * fVar22 + fVar20 * fVar20 + fVar20 * fVar20)) * fVar13
          ) / (SQRT(fVar21 * fVar21 + fVar15 * fVar15 + fVar13 * fVar13) + 1e-06) < 0.8) ||
        (fVar14 < 0.3)) || (*(float *)(lVar9 + 0x4f0) + 0.01 < fVar14)) {
      uVar10 = *(ushort *)(lVar9 + 0x5aa) & 0x40;
      if (uVar10 != 0) {
        *(ushort *)(lVar9 + 0x5ac) = *(ushort *)(lVar9 + 0x5ac) | uVar10;
        puVar1 = (ushort *)(*(longlong *)(unaff_RBX + 0x728) + 0x5aa);
        *puVar1 = *puVar1 & ~uVar10;
        lVar9 = *(longlong *)(unaff_RBX + 0x728);
      }
      *(int32_t *)(lVar9 + 0x5a4) = 0xffffffff;
    }
    else {
      *(float *)(lVar9 + 0x59c) = fVar14;
      FUN_180575360(*(uint64_t *)(unaff_RBX + 0x590),*(longlong *)(unaff_RBX + 0x728) + 0x50,
                    &stack0x00000040,
                    *(float *)(*(longlong *)(unaff_RBX + 0x728) + 0x59c) /
                    *(float *)(*(longlong *)(unaff_RBX + 0x6d8) + 0x8c0),0x3f800000);
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x20) ^ (ulonglong)&stack0x00000000);
  }
  fVar20 = fVar24 * fVar24 + fVar14 * fVar14 + fVar25 * fVar25;
  auVar16 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
  fVar22 = auVar16._0_4_;
  fVar20 = fVar22 * 0.5 * (3.0 - fVar20 * fVar22 * fVar22) * fVar20;
  fVar22 = 0.0;
  if ((0.0 <= fVar20) && (fVar22 = fVar20, 1.0 <= fVar20)) {
    fVar22 = 1.0;
  }
  fVar22 = (float)asinf(fVar22);
                    // WARNING: Subroutine does not return
  FUN_1808fd400(fVar22 * 0.5);
}





// 函数: void FUN_180514cd3(float param_1,longlong param_2,float param_3,float param_4)
void FUN_180514cd3(float param_1,longlong param_2,float param_3,float param_4)

{
  ushort *puVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  longlong in_RAX;
  longlong lVar8;
  ushort uVar9;
  longlong in_RCX;
  uint *puVar10;
  longlong unaff_RBX;
  longlong unaff_RBP;
  float in_XMM1_Da;
  float fVar11;
  float fVar12;
  int8_t auVar13 [16];
  float fVar14;
  float fVar15;
  float in_XMM4_Da;
  float fVar16;
  float in_XMM5_Da;
  float fVar17;
  int32_t unaff_XMM6_Dd;
  float fVar18;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float fVar19;
  float fVar20;
  uint64_t uStack0000000000000040;
  uint64_t uStack0000000000000048;
  float fStack0000000000000054;
  float in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  
  param_1 = param_1 * *(float *)(param_2 + 0xac);
  in_XMM1_Da = unaff_XMM9_Da * *(float *)(param_2 + 0xac) - in_XMM1_Da;
  fStack0000000000000064 = *(float *)(in_RCX + 0x10) - *(float *)(in_RAX + 0x10);
  fStack0000000000000068 = *(float *)(in_RCX + 0x14) - *(float *)(in_RAX + 0x14);
  in_XMM1_Da = in_XMM1_Da + in_XMM1_Da;
  fVar14 = param_4 + param_4 + param_1 + param_1;
  fVar18 = *(float *)(unaff_RBX + 0x530);
  fVar16 = *(float *)(unaff_RBX + 0x520);
  fVar2 = *(float *)(unaff_RBX + 0x534);
  fVar3 = *(float *)(unaff_RBX + 0x524);
  fStack0000000000000060 = *(float *)(in_RCX + 0xc) - *(float *)(in_RAX + 0xc);
  fVar12 = fStack0000000000000064 * fStack0000000000000064 +
           fStack0000000000000060 * fStack0000000000000060 +
           fStack0000000000000068 * fStack0000000000000068;
  auVar13 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
  fVar19 = auVar13._0_4_;
  fVar12 = fVar19 * 0.5 * (3.0 - fVar12 * fVar19 * fVar19);
  *(float *)(param_2 + 0x70) = fStack0000000000000060 * fVar12;
  *(float *)(param_2 + 0x74) = fStack0000000000000064 * fVar12;
  *(float *)(param_2 + 0x78) = fStack0000000000000068 * fVar12;
  *(int32_t *)(param_2 + 0x7c) = unaff_XMM6_Dd;
  lVar8 = *(longlong *)(unaff_RBX + 0x728);
  fVar12 = *(float *)(lVar8 + 0x78) * *(float *)(lVar8 + 100) -
           *(float *)(lVar8 + 0x74) * *(float *)(lVar8 + 0x68);
  uStack0000000000000040 = *(uint64_t *)(lVar8 + 0x40);
  uStack0000000000000048 = *(uint64_t *)(lVar8 + 0x48);
  fVar19 = *(float *)(lVar8 + 0x70) * *(float *)(lVar8 + 0x68) -
           *(float *)(lVar8 + 0x60) * *(float *)(lVar8 + 0x78);
  fVar20 = *(float *)(lVar8 + 0x60) * *(float *)(lVar8 + 0x74) -
           *(float *)(lVar8 + 0x70) * *(float *)(lVar8 + 100);
  fStack0000000000000054 = param_3;
  if (((fVar12 == 0.0) && (fVar19 == 0.0)) && (fVar20 == 0.0)) {
    puVar10 = (uint *)((longlong)*(char *)(*(longlong *)(unaff_RBX + 0x590) + 0x25fb) * 0x100 +
                      *(longlong *)(*(longlong *)(unaff_RBX + 0x658) + 0x18));
    do {
      LOCK();
      uVar4 = *puVar10;
      *puVar10 = *puVar10 | 1;
      UNLOCK();
    } while ((uVar4 & 1) != 0);
    fVar12 = (float)puVar10[1];
    fVar19 = (float)puVar10[2];
    fVar20 = (float)puVar10[3];
    fVar5 = (float)puVar10[4];
    uVar6 = *(uint64_t *)(puVar10 + 5);
    uVar7 = *(uint64_t *)(puVar10 + 7);
    *(float *)(unaff_RBP + -0x40) = fVar12;
    *(float *)(unaff_RBP + -0x3c) = fVar19;
    *(float *)(unaff_RBP + -0x38) = fVar20;
    *(float *)(unaff_RBP + -0x34) = fVar5;
    *(uint64_t *)(unaff_RBP + -0x30) = uVar6;
    *(uint64_t *)(unaff_RBP + -0x28) = uVar7;
    *puVar10 = 0;
    lVar8 = *(longlong *)(unaff_RBX + 0x728);
    fVar17 = *(float *)(lVar8 + 0x54) - unaff_XMM8_Da;
    fVar11 = *(float *)(lVar8 + 0x58) - in_stack_00000058;
    fVar15 = fVar20 * fVar5 - fVar12 * fVar19;
    param_3 = *(float *)(lVar8 + 0x50) - param_3;
    fVar12 = fVar12 * fVar20 + fVar12 * fVar20 + fVar19 * fVar5 + fVar19 * fVar5;
    fVar15 = fVar15 + fVar15;
    fVar12 = (fVar15 * *(float *)(unaff_RBX + 0x530) + fVar12 * *(float *)(unaff_RBX + 0x520)) *
             param_3 + (fVar15 * *(float *)(unaff_RBX + 0x534) +
                       fVar12 * *(float *)(unaff_RBX + 0x524)) * fVar17 +
             (1.0 - (fVar20 * fVar20 + fVar20 * fVar20 + fVar19 * fVar19 + fVar19 * fVar19)) *
             fVar11;
    if (((((in_XMM1_Da * fVar2 + fVar14 * fVar3) * fVar17 +
           (fVar14 * fVar16 + in_XMM1_Da * fVar18) * param_3 +
          (1.0 - (in_XMM5_Da * in_XMM5_Da + in_XMM5_Da * in_XMM5_Da +
                 in_XMM4_Da * in_XMM4_Da + in_XMM4_Da * in_XMM4_Da)) * fVar11) /
          (SQRT(fVar17 * fVar17 + param_3 * param_3 + fVar11 * fVar11) + 1e-06) < 0.8) ||
        (fVar12 < 0.3)) || (*(float *)(lVar8 + 0x4f0) + 0.01 < fVar12)) {
      uVar9 = *(ushort *)(lVar8 + 0x5aa) & 0x40;
      if (uVar9 != 0) {
        *(ushort *)(lVar8 + 0x5ac) = *(ushort *)(lVar8 + 0x5ac) | uVar9;
        puVar1 = (ushort *)(*(longlong *)(unaff_RBX + 0x728) + 0x5aa);
        *puVar1 = *puVar1 & ~uVar9;
        lVar8 = *(longlong *)(unaff_RBX + 0x728);
      }
      *(int32_t *)(lVar8 + 0x5a4) = 0xffffffff;
    }
    else {
      *(float *)(lVar8 + 0x59c) = fVar12;
      FUN_180575360(*(uint64_t *)(unaff_RBX + 0x590),*(longlong *)(unaff_RBX + 0x728) + 0x50,
                    &stack0x00000040,
                    *(float *)(*(longlong *)(unaff_RBX + 0x728) + 0x59c) /
                    *(float *)(*(longlong *)(unaff_RBX + 0x6d8) + 0x8c0),0x3f800000);
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x20) ^ (ulonglong)&stack0x00000000);
  }
  fVar16 = fVar19 * fVar19 + fVar12 * fVar12 + fVar20 * fVar20;
  auVar13 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
  fVar18 = auVar13._0_4_;
  fVar16 = fVar18 * 0.5 * (3.0 - fVar16 * fVar18 * fVar18) * fVar16;
  fVar18 = 0.0;
  if ((0.0 <= fVar16) && (fVar18 = fVar16, 1.0 <= fVar16)) {
    fVar18 = 1.0;
  }
  fVar18 = (float)asinf(fVar18);
                    // WARNING: Subroutine does not return
  FUN_1808fd400(fVar18 * 0.5);
}





// 函数: void FUN_180515050(uint64_t param_1,uint *param_2)
void FUN_180515050(uint64_t param_1,uint *param_2)

{
  ushort *puVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  longlong lVar8;
  ushort uVar9;
  longlong unaff_RBX;
  longlong unaff_RBP;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  uint64_t in_stack_00000050;
  float in_stack_00000058;
  
  do {
    LOCK();
    uVar2 = *param_2;
    *param_2 = *param_2 | 1;
    UNLOCK();
  } while ((uVar2 & 1) != 0);
  fVar12 = (float)param_2[1];
  fVar3 = (float)param_2[2];
  fVar4 = (float)param_2[3];
  fVar5 = (float)param_2[4];
  uVar6 = *(uint64_t *)(param_2 + 5);
  uVar7 = *(uint64_t *)(param_2 + 7);
  *(float *)(unaff_RBP + -0x40) = fVar12;
  *(float *)(unaff_RBP + -0x3c) = fVar3;
  *(float *)(unaff_RBP + -0x38) = fVar4;
  *(float *)(unaff_RBP + -0x34) = fVar5;
  *(uint64_t *)(unaff_RBP + -0x30) = uVar6;
  *(uint64_t *)(unaff_RBP + -0x28) = uVar7;
  *param_2 = 0;
  lVar8 = *(longlong *)(unaff_RBX + 0x728);
  fVar13 = *(float *)(lVar8 + 0x54) - unaff_XMM8_Da;
  fVar10 = *(float *)(lVar8 + 0x58) - in_stack_00000058;
  fVar11 = fVar4 * fVar5 - fVar12 * fVar3;
  in_stack_00000050._4_4_ = *(float *)(lVar8 + 0x50) - in_stack_00000050._4_4_;
  fVar12 = fVar12 * fVar4 + fVar12 * fVar4 + fVar3 * fVar5 + fVar3 * fVar5;
  fVar11 = fVar11 + fVar11;
  fVar12 = (fVar11 * *(float *)(unaff_RBX + 0x530) + fVar12 * *(float *)(unaff_RBX + 0x520)) *
           in_stack_00000050._4_4_ +
           (fVar11 * *(float *)(unaff_RBX + 0x534) + fVar12 * *(float *)(unaff_RBX + 0x524)) *
           fVar13 + (unaff_XMM13_Da -
                    (fVar4 * fVar4 + fVar4 * fVar4 + fVar3 * fVar3 + fVar3 * fVar3)) * fVar10;
  if ((((unaff_XMM9_Da * fVar13 + unaff_XMM14_Da * in_stack_00000050._4_4_ + unaff_XMM15_Da * fVar10
        ) / (SQRT(fVar13 * fVar13 + in_stack_00000050._4_4_ * in_stack_00000050._4_4_ +
                  fVar10 * fVar10) + 1e-06) < 0.8) || (fVar12 < 0.3)) ||
     (*(float *)(lVar8 + 0x4f0) + 0.01 < fVar12)) {
    uVar9 = *(ushort *)(lVar8 + 0x5aa) & 0x40;
    if (uVar9 != 0) {
      *(ushort *)(lVar8 + 0x5ac) = *(ushort *)(lVar8 + 0x5ac) | uVar9;
      puVar1 = (ushort *)(*(longlong *)(unaff_RBX + 0x728) + 0x5aa);
      *puVar1 = *puVar1 & ~uVar9;
      lVar8 = *(longlong *)(unaff_RBX + 0x728);
    }
    *(int32_t *)(lVar8 + 0x5a4) = 0xffffffff;
  }
  else {
    *(float *)(lVar8 + 0x59c) = fVar12;
    FUN_180575360(*(uint64_t *)(unaff_RBX + 0x590),*(longlong *)(unaff_RBX + 0x728) + 0x50,
                  &stack0x00000040,
                  *(float *)(*(longlong *)(unaff_RBX + 0x728) + 0x59c) /
                  *(float *)(*(longlong *)(unaff_RBX + 0x6d8) + 0x8c0));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x20) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1805151b4(void)
void FUN_1805151b4(void)

{
  ushort *puVar1;
  longlong in_RAX;
  ushort uVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  float unaff_XMM8_Da;
  
  if ((unaff_XMM8_Da < 0.3) || (*(float *)(in_RAX + 0x4f0) + 0.01 < unaff_XMM8_Da)) {
    uVar2 = *(ushort *)(in_RAX + 0x5aa) & 0x40;
    if (uVar2 != 0) {
      *(ushort *)(in_RAX + 0x5ac) = *(ushort *)(in_RAX + 0x5ac) | uVar2;
      puVar1 = (ushort *)(*(longlong *)(unaff_RBX + 0x728) + 0x5aa);
      *puVar1 = *puVar1 & ~uVar2;
      in_RAX = *(longlong *)(unaff_RBX + 0x728);
    }
    *(int32_t *)(in_RAX + 0x5a4) = 0xffffffff;
  }
  else {
    *(float *)(in_RAX + 0x59c) = unaff_XMM8_Da;
    FUN_180575360(*(uint64_t *)(unaff_RBX + 0x590),*(longlong *)(unaff_RBX + 0x728) + 0x50,
                  &stack0x00000040,
                  *(float *)(*(longlong *)(unaff_RBX + 0x728) + 0x59c) /
                  *(float *)(*(longlong *)(unaff_RBX + 0x6d8) + 0x8c0));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x20) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18051524d(void)
void FUN_18051524d(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x20) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180515255(void)
void FUN_180515255(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x20) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18051527a(void)
void FUN_18051527a(void)

{
  ushort *puVar1;
  longlong in_RAX;
  ushort uVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  uVar2 = *(ushort *)(in_RAX + 0x5aa) & 0x40;
  if (uVar2 != 0) {
    *(ushort *)(in_RAX + 0x5ac) = *(ushort *)(in_RAX + 0x5ac) | uVar2;
    puVar1 = (ushort *)(*(longlong *)(unaff_RBX + 0x728) + 0x5aa);
    *puVar1 = *puVar1 & ~uVar2;
    in_RAX = *(longlong *)(unaff_RBX + 0x728);
  }
  *(int32_t *)(in_RAX + 0x5a4) = 0xffffffff;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x20) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1805152b2(void)
void FUN_1805152b2(void)

{
  ushort *puVar1;
  longlong lVar2;
  ushort uVar3;
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  lVar2 = *(longlong *)(unaff_RBX + 0x728);
  uVar3 = *(ushort *)(lVar2 + 0x5aa) & 0x40;
  if (uVar3 != 0) {
    *(ushort *)(lVar2 + 0x5ac) = *(ushort *)(lVar2 + 0x5ac) | uVar3;
    puVar1 = (ushort *)(*(longlong *)(unaff_RBX + 0x728) + 0x5aa);
    *puVar1 = *puVar1 & ~uVar3;
    lVar2 = *(longlong *)(unaff_RBX + 0x728);
  }
  *(int32_t *)(lVar2 + 0x5a4) = 0xffffffff;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x20) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180515300(longlong param_1,uint64_t param_2,float *param_3,float param_4)
void FUN_180515300(longlong param_1,uint64_t param_2,float *param_3,float param_4)

{
  uint uVar1;
  char cVar2;
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
  uint *puVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int8_t auStack_188 [32];
  int32_t uStack_168;
  int8_t uStack_160;
  int8_t uStack_158;
  uint64_t uStack_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  uint uStack_bc;
  ulonglong uStack_b8;
  
  uStack_b8 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_188;
  if ((*(ushort *)(*(longlong *)(param_1 + 0x728) + 0x5aa) & 0x7fc) == 0) {
    *(int8_t *)(*(longlong *)(param_1 + 0x728) + 0x5a8) = 0xff;
    *(int32_t *)(*(longlong *)(param_1 + 0x728) + 0x5a0) =
         *(int32_t *)(*(longlong *)(param_1 + 0x590) + 0x2498);
    lVar14 = *(longlong *)(param_1 + 0x658);
    cVar2 = *(char *)(*(longlong *)(param_1 + 0x590) + 0x25f9);
    if ((*(byte *)(lVar14 + 0xa8) & 1) == 0) {
      FUN_1802fac00(lVar14,*(longlong *)(lVar14 + 0x10) + 0x70,0xbf800000);
    }
    puVar13 = (uint *)((longlong)cVar2 * 0x100 + *(longlong *)(lVar14 + 0x18));
    do {
      LOCK();
      uVar1 = *puVar13;
      *puVar13 = *puVar13 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    fStack_148 = (float)puVar13[1];
    fStack_144 = (float)puVar13[2];
    fStack_140 = (float)puVar13[3];
    fStack_13c = (float)puVar13[4];
    uStack_138 = puVar13[5];
    uStack_134 = puVar13[6];
    uStack_130 = puVar13[7];
    uStack_12c = puVar13[8];
    *puVar13 = 0;
    lVar14 = *(longlong *)(param_1 + 0x658);
    cVar2 = *(char *)(*(longlong *)(param_1 + 0x590) + 0x25fb);
    fStack_118 = fStack_148;
    fStack_114 = fStack_144;
    fStack_110 = fStack_140;
    fStack_10c = fStack_13c;
    uStack_108 = uStack_138;
    uStack_104 = uStack_134;
    uStack_100 = uStack_130;
    uStack_fc = uStack_12c;
    fStack_f8 = fStack_148;
    fStack_f4 = fStack_144;
    fStack_f0 = fStack_140;
    fStack_ec = fStack_13c;
    uStack_e8 = uStack_138;
    uStack_e4 = uStack_134;
    uStack_e0 = uStack_130;
    uStack_dc = uStack_12c;
    if ((*(byte *)(lVar14 + 0xa8) & 1) == 0) {
      FUN_1802fac00(lVar14,*(longlong *)(lVar14 + 0x10) + 0x70,0xbf800000);
    }
    puVar13 = (uint *)((longlong)cVar2 * 0x100 + *(longlong *)(lVar14 + 0x18));
    do {
      LOCK();
      uVar1 = *puVar13;
      *puVar13 = *puVar13 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    fVar4 = (float)puVar13[1];
    fVar5 = (float)puVar13[2];
    fVar6 = (float)puVar13[3];
    fVar7 = (float)puVar13[4];
    fVar8 = (float)puVar13[5];
    fVar9 = (float)puVar13[6];
    fVar10 = (float)puVar13[7];
    uVar1 = puVar13[8];
    *puVar13 = 0;
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x8a8);
    lVar3 = *(longlong *)(param_1 + 0x728);
    fStack_13c = 3.4028235e+38;
    fVar18 = fVar9 * *(float *)(lVar14 + 0x80) + fVar8 * *(float *)(lVar14 + 0x70) +
             *(float *)(lVar14 + 0xa0);
    fVar16 = fVar8 * *(float *)(lVar14 + 0x74) + fVar9 * *(float *)(lVar14 + 0x84) +
             *(float *)(lVar14 + 0xa4);
    fVar17 = fVar10 * *(float *)(lVar14 + 0x98) + *(float *)(lVar14 + 0xa8);
    fVar19 = fVar4 * fVar6 + fVar4 * fVar6 + fVar5 * fVar7 + fVar5 * fVar7;
    fVar15 = fVar6 * fVar7 - fVar4 * fVar5;
    fVar15 = fVar15 + fVar15;
    fVar21 = 1.0 - (fVar5 * fVar5 + fVar5 * fVar5 + fVar6 * fVar6 + fVar6 * fVar6);
    fVar20 = fVar19 * *(float *)(param_1 + 0x524) + fVar15 * *(float *)(param_1 + 0x534);
    fVar22 = fVar15 * *(float *)(param_1 + 0x530) + fVar19 * *(float *)(param_1 + 0x520);
    fVar15 = param_3[1];
    fVar19 = param_3[2];
    fVar11 = param_3[3];
    *(float *)(lVar3 + 0x50) = *param_3;
    *(float *)(lVar3 + 0x54) = fVar15;
    *(float *)(lVar3 + 0x58) = fVar19;
    *(float *)(lVar3 + 0x5c) = fVar11;
    fStack_148 = fVar18;
    fStack_144 = fVar16;
    fStack_140 = fVar17;
    fStack_d8 = fVar4;
    fStack_d4 = fVar5;
    fStack_d0 = fVar6;
    fStack_cc = fVar7;
    fStack_c8 = fVar8;
    fStack_c4 = fVar9;
    fStack_c0 = fVar10;
    uStack_bc = uVar1;
    FUN_18063b470(&fStack_128);
    fVar12 = fStack_ec;
    fVar11 = fStack_f0;
    fVar19 = fStack_f4;
    fVar15 = fStack_f8;
    lVar14 = *(longlong *)(param_1 + 0x728);
    *(float *)(lVar14 + 0x40) =
         fStack_11c * fStack_ec * -1.0 + fStack_120 * fStack_f0 * -1.0 +
         (fStack_f8 * fStack_128 - fStack_124 * fStack_f4);
    *(float *)(lVar14 + 0x44) =
         fStack_120 * fStack_ec * 1.0 + fStack_128 * fStack_f4 * 1.0 +
         (fStack_f8 * fStack_124 - fStack_11c * fStack_f0);
    *(float *)(lVar14 + 0x48) =
         fStack_11c * fStack_f4 * 1.0 + fStack_128 * fStack_f0 * 1.0 +
         (fStack_f8 * fStack_120 - fStack_124 * fStack_ec);
    *(float *)(lVar14 + 0x4c) =
         fStack_124 * fStack_f0 * 1.0 + fStack_128 * fStack_ec * 1.0 +
         (fStack_f8 * fStack_11c - fStack_120 * fStack_f4);
    *(float *)(*(longlong *)(param_1 + 0x728) + 0x59c) =
         (param_3[1] - fVar16) * fVar20 + (*param_3 - fVar18) * fVar22 +
         (param_3[2] - fVar17) * fVar21;
    *(int8_t *)(*(longlong *)(param_1 + 0x728) + 0x5ae) = 1;
    lVar14 = *(longlong *)(param_1 + 0x728);
    if (*(float *)(lVar14 + 0x59c) < 0.1) {
      fVar16 = 0.1 - *(float *)(lVar14 + 0x59c);
      *(float *)(lVar14 + 0x54) = fVar20 * fVar16 + *(float *)(lVar14 + 0x54);
      *(float *)(lVar14 + 0x50) = fVar16 * fVar22 + *(float *)(lVar14 + 0x50);
      *(float *)(lVar14 + 0x58) = fVar21 * fVar16 + *(float *)(lVar14 + 0x58);
      *(int32_t *)(*(longlong *)(param_1 + 0x728) + 0x59c) = 0x3dcccccd;
      lVar14 = *(longlong *)(param_1 + 0x728);
    }
    uStack_150 = *(uint64_t *)(param_1 + 0x658);
    uStack_158 = *(int8_t *)(*(longlong *)(param_1 + 0x590) + 0x2600);
    uStack_160 = 1;
    uStack_168 = 0x7149f2ca;
    FUN_180575360(*(longlong *)(param_1 + 0x590),lVar14 + 0x50,lVar14 + 0x40,
                  *(float *)(lVar14 + 0x59c) / *(float *)(*(longlong *)(param_1 + 0x6d8) + 0x8c0));
    *(float *)(*(longlong *)(param_1 + 0x728) + 0x598) = param_4;
    *(longlong *)(*(longlong *)(param_1 + 0x728) + 0x578) =
         *(longlong *)
          (&system_error_code + (longlong)*(int *)(*(longlong *)(param_1 + 0x728) + 0x580) * 8) -
         (longlong)(param_4 * -100000.0);
    lVar14 = *(longlong *)(param_1 + 0x728);
    *(float *)(lVar14 + 0x10) = fStack_148;
    *(float *)(lVar14 + 0x14) = fStack_144;
    *(float *)(lVar14 + 0x18) = fStack_140;
    *(float *)(lVar14 + 0x1c) = fStack_13c;
    lVar14 = *(longlong *)(param_1 + 0x728);
    *(float *)(lVar14 + 0xa0) = fVar4;
    *(float *)(lVar14 + 0xa4) = fVar5;
    *(float *)(lVar14 + 0xa8) = fVar6;
    *(float *)(lVar14 + 0xac) = fVar7;
    *(float *)(lVar14 + 0xb0) = fVar8;
    *(float *)(lVar14 + 0xb4) = fVar9;
    *(float *)(lVar14 + 0xb8) = fVar10;
    *(uint *)(lVar14 + 0xbc) = uVar1;
    lVar14 = *(longlong *)(param_1 + 0x728);
    *(float *)(lVar14 + 0x90) = fVar15;
    *(float *)(lVar14 + 0x94) = fVar19;
    *(float *)(lVar14 + 0x98) = fVar11;
    *(float *)(lVar14 + 0x9c) = fVar12;
    FUN_180516bd0(param_1,0x100,0xc7d5);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_b8 ^ (ulonglong)auStack_188);
}





