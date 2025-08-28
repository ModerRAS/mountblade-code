#include "TaleWorlds.Native.Split.h"

// 99_part_05_part049.c - 8 个函数

// 函数: void FUN_1802f94d1(void)
void FUN_1802f94d1(void)

{
  uint uVar1;
  longlong *plVar2;
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
  float fVar19;
  float fVar20;
  bool bVar21;
  char cVar22;
  int in_EAX;
  int iVar23;
  uint *unaff_RBX;
  longlong unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  longlong lVar24;
  longlong in_R11;
  uint64_t unaff_R12;
  float *unaff_R13;
  uint64_t unaff_R14;
  longlong unaff_R15;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  uint uStack0000000000000060;
  uint uStack0000000000000064;
  uint uStack0000000000000068;
  uint uStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  uint uStack000000000000007c;
  
  *(uint64_t *)(in_R11 + -0x38) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x40) = unaff_R14;
  bVar21 = false;
  if (0 < in_EAX) {
    *(uint64_t *)(in_R11 + -0x28) = unaff_RSI;
    *(uint64_t *)(in_R11 + -0x30) = unaff_RDI;
    lVar24 = 0;
    *(int32_t *)(in_R11 + -0x58) = unaff_XMM6_Da;
    *(int32_t *)(in_R11 + -0x54) = unaff_XMM6_Db;
    *(int32_t *)(in_R11 + -0x50) = unaff_XMM6_Dc;
    *(int32_t *)(in_R11 + -0x4c) = unaff_XMM6_Dd;
    *(int32_t *)(in_R11 + -0x68) = unaff_XMM7_Da;
    *(int32_t *)(in_R11 + -100) = unaff_XMM7_Db;
    *(int32_t *)(in_R11 + -0x60) = unaff_XMM7_Dc;
    *(int32_t *)(in_R11 + -0x5c) = unaff_XMM7_Dd;
    *(int32_t *)(in_R11 + -0x78) = unaff_XMM8_Da;
    *(int32_t *)(in_R11 + -0x74) = unaff_XMM8_Db;
    *(int32_t *)(in_R11 + -0x70) = unaff_XMM8_Dc;
    *(int32_t *)(in_R11 + -0x6c) = unaff_XMM8_Dd;
    do {
      plVar2 = *(longlong **)(*(longlong *)(unaff_RBX + 0x34) + lVar24 * 8);
      iVar23 = (**(code **)(*plVar2 + 0x98))(plVar2);
      if ((iVar23 != 2) ||
         (*(char *)(*(longlong *)(*(longlong *)(unaff_RBX + 0x34) + lVar24 * 8) + 0xaa) != '\0')) {
        if (!bVar21) {
          bVar21 = true;
          do {
            LOCK();
            uVar1 = *unaff_RBX;
            *unaff_RBX = *unaff_RBX | 1;
            UNLOCK();
          } while ((uVar1 & 1) != 0);
          uStack0000000000000060 = unaff_RBX[1];
          uStack0000000000000064 = unaff_RBX[2];
          uStack0000000000000068 = unaff_RBX[3];
          uStack000000000000006c = unaff_RBX[4];
          fVar3 = (float)unaff_RBX[5];
          fVar4 = (float)unaff_RBX[6];
          fVar5 = (float)unaff_RBX[7];
          uStack000000000000007c = unaff_RBX[8];
          *(uint *)(unaff_RBP + -0x40) = uStack0000000000000060;
          *(uint *)(unaff_RBP + -0x3c) = uStack0000000000000064;
          *(uint *)(unaff_RBP + -0x38) = uStack0000000000000068;
          *(uint *)(unaff_RBP + -0x34) = uStack000000000000006c;
          *(float *)(unaff_RBP + -0x30) = fVar3;
          *(float *)(unaff_RBP + -0x2c) = fVar4;
          *(float *)(unaff_RBP + -0x28) = fVar5;
          *(uint *)(unaff_RBP + -0x24) = uStack000000000000007c;
          *unaff_RBX = 0;
          fStack0000000000000070 = fVar3;
          fStack0000000000000074 = fVar4;
          fStack0000000000000078 = fVar5;
          FUN_18063b5f0(&stack0x00000030,&stack0x00000060);
          fVar6 = *unaff_R13;
          fVar7 = unaff_R13[1];
          fVar8 = unaff_R13[2];
          fVar9 = unaff_R13[3];
          fVar10 = unaff_R13[4];
          fVar11 = unaff_R13[5];
          fVar12 = unaff_R13[6];
          fVar13 = unaff_R13[7];
          fVar14 = unaff_R13[8];
          fVar15 = unaff_R13[9];
          fVar16 = unaff_R13[10];
          fVar17 = unaff_R13[0xb];
          *(float *)(unaff_RBP + -0x80) =
               fStack0000000000000034 * fVar10 + fStack0000000000000030 * fVar6 +
               in_stack_00000038 * fVar14;
          *(float *)(unaff_RBP + -0x7c) =
               fStack0000000000000034 * fVar11 + fStack0000000000000030 * fVar7 +
               in_stack_00000038 * fVar15;
          *(float *)(unaff_RBP + -0x78) =
               fStack0000000000000034 * fVar12 + fStack0000000000000030 * fVar8 +
               in_stack_00000038 * fVar16;
          *(float *)(unaff_RBP + -0x74) =
               fStack0000000000000034 * fVar13 + fStack0000000000000030 * fVar9 +
               in_stack_00000038 * fVar17;
          *(float *)(unaff_RBP + -0x70) =
               fStack0000000000000044 * fVar10 + fStack0000000000000040 * fVar6 +
               in_stack_00000048 * fVar14;
          *(float *)(unaff_RBP + -0x6c) =
               fStack0000000000000044 * fVar11 + fStack0000000000000040 * fVar7 +
               in_stack_00000048 * fVar15;
          *(float *)(unaff_RBP + -0x68) =
               fStack0000000000000044 * fVar12 + fStack0000000000000040 * fVar8 +
               in_stack_00000048 * fVar16;
          *(float *)(unaff_RBP + -100) =
               fStack0000000000000044 * fVar13 + fStack0000000000000040 * fVar9 +
               in_stack_00000048 * fVar17;
          *(float *)(unaff_RBP + -0x60) =
               fStack0000000000000054 * fVar10 + fStack0000000000000050 * fVar6 +
               in_stack_00000058 * fVar14;
          *(float *)(unaff_RBP + -0x5c) =
               fStack0000000000000054 * fVar11 + fStack0000000000000050 * fVar7 +
               in_stack_00000058 * fVar15;
          *(float *)(unaff_RBP + -0x58) =
               fStack0000000000000054 * fVar12 + fStack0000000000000050 * fVar8 +
               in_stack_00000058 * fVar16;
          *(float *)(unaff_RBP + -0x54) =
               fStack0000000000000054 * fVar13 + fStack0000000000000050 * fVar9 +
               in_stack_00000058 * fVar17;
          fVar18 = unaff_R13[0xd];
          fVar19 = unaff_R13[0xe];
          fVar20 = unaff_R13[0xf];
          *(float *)(unaff_RBP + -0x50) =
               fVar4 * fVar10 + fVar3 * fVar6 + fVar5 * fVar14 + unaff_R13[0xc];
          *(float *)(unaff_RBP + -0x4c) = fVar4 * fVar11 + fVar3 * fVar7 + fVar5 * fVar15 + fVar18;
          *(float *)(unaff_RBP + -0x48) = fVar4 * fVar12 + fVar3 * fVar8 + fVar5 * fVar16 + fVar19;
          *(float *)(unaff_RBP + -0x44) = fVar4 * fVar13 + fVar3 * fVar9 + fVar5 * fVar17 + fVar20;
        }
        (**(code **)(**(longlong **)(*(longlong *)(unaff_RBX + 0x34) + lVar24 * 8) + 0x1b8))();
      }
      cVar22 = (**(code **)(*plVar2 + 0x138))(plVar2);
      if (cVar22 != '\0') {
        FUN_1801985e0(*(uint64_t *)(*(longlong *)(unaff_R15 + 0x10) + 0x20),plVar2,3);
      }
      lVar24 = lVar24 + 1;
    } while (lVar24 < in_EAX);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x20) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1802f94e7(void)
void FUN_1802f94e7(void)

{
  uint uVar1;
  longlong *plVar2;
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
  float fVar19;
  float fVar20;
  char cVar21;
  int iVar22;
  uint *unaff_RBX;
  longlong unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  longlong lVar23;
  longlong in_R11;
  longlong unaff_R12;
  float *unaff_R13;
  char unaff_R14B;
  longlong unaff_R15;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  uint uStack0000000000000060;
  uint uStack0000000000000064;
  uint uStack0000000000000068;
  uint uStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  uint uStack000000000000007c;
  
  *(uint64_t *)(in_R11 + -0x28) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x30) = unaff_RDI;
  lVar23 = 0;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM6_Dd;
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM7_Dd;
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM8_Dd;
  do {
    plVar2 = *(longlong **)(*(longlong *)(unaff_RBX + 0x34) + lVar23 * 8);
    iVar22 = (**(code **)(*plVar2 + 0x98))(plVar2);
    if ((iVar22 != 2) ||
       (*(char *)(*(longlong *)(*(longlong *)(unaff_RBX + 0x34) + lVar23 * 8) + 0xaa) != '\0')) {
      if (unaff_R14B == '\0') {
        unaff_R14B = '\x01';
        do {
          LOCK();
          uVar1 = *unaff_RBX;
          *unaff_RBX = *unaff_RBX | 1;
          UNLOCK();
        } while ((uVar1 & 1) != 0);
        uStack0000000000000060 = unaff_RBX[1];
        uStack0000000000000064 = unaff_RBX[2];
        uStack0000000000000068 = unaff_RBX[3];
        uStack000000000000006c = unaff_RBX[4];
        fVar3 = (float)unaff_RBX[5];
        fVar4 = (float)unaff_RBX[6];
        fVar5 = (float)unaff_RBX[7];
        uStack000000000000007c = unaff_RBX[8];
        *(uint *)(unaff_RBP + -0x40) = uStack0000000000000060;
        *(uint *)(unaff_RBP + -0x3c) = uStack0000000000000064;
        *(uint *)(unaff_RBP + -0x38) = uStack0000000000000068;
        *(uint *)(unaff_RBP + -0x34) = uStack000000000000006c;
        *(float *)(unaff_RBP + -0x30) = fVar3;
        *(float *)(unaff_RBP + -0x2c) = fVar4;
        *(float *)(unaff_RBP + -0x28) = fVar5;
        *(uint *)(unaff_RBP + -0x24) = uStack000000000000007c;
        *unaff_RBX = 0;
        fStack0000000000000070 = fVar3;
        fStack0000000000000074 = fVar4;
        fStack0000000000000078 = fVar5;
        FUN_18063b5f0(&stack0x00000030,&stack0x00000060);
        fVar6 = *unaff_R13;
        fVar7 = unaff_R13[1];
        fVar8 = unaff_R13[2];
        fVar9 = unaff_R13[3];
        fVar10 = unaff_R13[4];
        fVar11 = unaff_R13[5];
        fVar12 = unaff_R13[6];
        fVar13 = unaff_R13[7];
        fVar14 = unaff_R13[8];
        fVar15 = unaff_R13[9];
        fVar16 = unaff_R13[10];
        fVar17 = unaff_R13[0xb];
        *(float *)(unaff_RBP + -0x80) =
             fStack0000000000000034 * fVar10 + fStack0000000000000030 * fVar6 +
             in_stack_00000038 * fVar14;
        *(float *)(unaff_RBP + -0x7c) =
             fStack0000000000000034 * fVar11 + fStack0000000000000030 * fVar7 +
             in_stack_00000038 * fVar15;
        *(float *)(unaff_RBP + -0x78) =
             fStack0000000000000034 * fVar12 + fStack0000000000000030 * fVar8 +
             in_stack_00000038 * fVar16;
        *(float *)(unaff_RBP + -0x74) =
             fStack0000000000000034 * fVar13 + fStack0000000000000030 * fVar9 +
             in_stack_00000038 * fVar17;
        *(float *)(unaff_RBP + -0x70) =
             fStack0000000000000044 * fVar10 + fStack0000000000000040 * fVar6 +
             in_stack_00000048 * fVar14;
        *(float *)(unaff_RBP + -0x6c) =
             fStack0000000000000044 * fVar11 + fStack0000000000000040 * fVar7 +
             in_stack_00000048 * fVar15;
        *(float *)(unaff_RBP + -0x68) =
             fStack0000000000000044 * fVar12 + fStack0000000000000040 * fVar8 +
             in_stack_00000048 * fVar16;
        *(float *)(unaff_RBP + -100) =
             fStack0000000000000044 * fVar13 + fStack0000000000000040 * fVar9 +
             in_stack_00000048 * fVar17;
        *(float *)(unaff_RBP + -0x60) =
             fStack0000000000000054 * fVar10 + fStack0000000000000050 * fVar6 +
             in_stack_00000058 * fVar14;
        *(float *)(unaff_RBP + -0x5c) =
             fStack0000000000000054 * fVar11 + fStack0000000000000050 * fVar7 +
             in_stack_00000058 * fVar15;
        *(float *)(unaff_RBP + -0x58) =
             fStack0000000000000054 * fVar12 + fStack0000000000000050 * fVar8 +
             in_stack_00000058 * fVar16;
        *(float *)(unaff_RBP + -0x54) =
             fStack0000000000000054 * fVar13 + fStack0000000000000050 * fVar9 +
             in_stack_00000058 * fVar17;
        fVar18 = unaff_R13[0xd];
        fVar19 = unaff_R13[0xe];
        fVar20 = unaff_R13[0xf];
        *(float *)(unaff_RBP + -0x50) =
             fVar4 * fVar10 + fVar3 * fVar6 + fVar5 * fVar14 + unaff_R13[0xc];
        *(float *)(unaff_RBP + -0x4c) = fVar4 * fVar11 + fVar3 * fVar7 + fVar5 * fVar15 + fVar18;
        *(float *)(unaff_RBP + -0x48) = fVar4 * fVar12 + fVar3 * fVar8 + fVar5 * fVar16 + fVar19;
        *(float *)(unaff_RBP + -0x44) = fVar4 * fVar13 + fVar3 * fVar9 + fVar5 * fVar17 + fVar20;
      }
      (**(code **)(**(longlong **)(*(longlong *)(unaff_RBX + 0x34) + lVar23 * 8) + 0x1b8))();
    }
    cVar21 = (**(code **)(*plVar2 + 0x138))(plVar2);
    if (cVar21 != '\0') {
      FUN_1801985e0(*(uint64_t *)(*(longlong *)(unaff_R15 + 0x10) + 0x20),plVar2,3);
    }
    lVar23 = lVar23 + 1;
  } while (lVar23 < unaff_R12);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x20) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1802f96da(void)
void FUN_1802f96da(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x20) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1802f96ea(void)
void FUN_1802f96ea(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x20) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1802f9710(longlong param_1,longlong *param_2,longlong param_3,uint64_t param_4)
void FUN_1802f9710(longlong param_1,longlong *param_2,longlong param_3,uint64_t param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  uint64_t uVar5;
  int32_t uVar6;
  int32_t uStack_2c;
  uint64_t uVar7;
  uint64_t uVar8;
  
  uVar5 = 0xfffffffffffffffe;
  plVar2 = (longlong *)
           FUN_1802f4600(*(uint64_t *)(param_1 + 0xb0),*(uint64_t *)(param_1 + 0xb8),*param_2,
                         param_4,0xfffffffffffffffe);
  if (plVar2 != *(longlong **)(param_1 + 0xb8)) {
    if (((param_3 != 0) && (*(longlong *)(param_3 + 0x10) != 0)) &&
       (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x20) != 0)) {
      FUN_1802549d0(*param_2);
    }
    plVar4 = (longlong *)*plVar2;
    (**(code **)(*plVar4 + 0x1e0))(plVar4,0);
    uVar6 = 4;
    uVar7 = 0;
    uVar8 = 0;
    *(int32_t *)(plVar4 + 2) = 4;
    *(int32_t *)((longlong)plVar4 + 0x14) = uStack_2c;
    *(int32_t *)(plVar4 + 3) = 0;
    *(int32_t *)((longlong)plVar4 + 0x1c) = 0;
    plVar4[4] = 0;
    FUN_1800ba050(param_1 + 0xb0,plVar2);
    lVar3 = FUN_1802f4600(*(uint64_t *)(param_1 + 0xd0),*(uint64_t *)(param_1 + 0xd8),*param_2,
                          param_4,uVar5,uVar6,uVar7,uVar8);
    if (lVar3 != *(longlong *)(param_1 + 0xd8)) {
      FUN_1800ba050(param_1 + 0xd0,lVar3);
      if ((*(longlong *)(param_1 + 0xd8) - *(longlong *)(param_1 + 0xd0) & 0xfffffffffffffff8U) == 0
         ) {
        FUN_180300e10(param_3,(longlong)(ulonglong)(uint)((int)param_1 - *(int *)(param_3 + 0x18))
                              >> 8);
      }
    }
    if ((*(longlong *)(param_1 + 0xb8) - *(longlong *)(param_1 + 0xb0) & 0xfffffffffffffff8U) == 0)
    {
      plVar2 = *(longlong **)(param_3 + 0x148);
      plVar4 = *(longlong **)(param_3 + 0x140);
      if (plVar4 != plVar2) {
        do {
          if (*plVar4 == param_1) break;
          plVar4 = plVar4 + 1;
        } while (plVar4 != plVar2);
        if (plVar4 != plVar2) {
          plVar1 = plVar4 + 1;
          if (plVar1 < plVar2) {
                    // WARNING: Subroutine does not return
            memmove(plVar4,plVar1,(longlong)plVar2 - (longlong)plVar1);
          }
          *(longlong **)(param_3 + 0x148) = plVar2 + -1;
        }
      }
    }
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x38))();
  }
  return;
}






// 函数: void FUN_1802f98b0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
void FUN_1802f98b0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,uint64_t param_6,char param_7)

{
  char cVar1;
  uint64_t *puVar2;
  char *pcVar3;
  uint64_t *puVar5;
  longlong lVar6;
  uint64_t uStack_e8;
  ulonglong uStack_e0;
  uint64_t uStack_d8;
  ulonglong uStack_d0;
  uint64_t uStack_c8;
  ulonglong uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  ulonglong uStack_a0;
  uint64_t uStack_98;
  ulonglong uStack_90;
  uint64_t uStack_88;
  ulonglong uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  char *pcVar4;
  
  uStack_68 = 0xfffffffffffffffe;
  puVar2 = (uint64_t *)FUN_1804c1300(param_2 + 0x60,0x60);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  *(int32_t *)(puVar2 + 5) = 1;
  puVar2[6] = 0;
  puVar2[8] = 0;
  pcVar3 = "bone";
  do {
    pcVar4 = pcVar3;
    pcVar3 = pcVar4 + 1;
  } while (*pcVar3 != '\0');
  *puVar2 = &UNK_180a19c84;
  puVar2[2] = pcVar4 + -0x180a19c83;
  if (param_4 == 0) {
    uStack_a8 = *(uint64_t *)(param_5 + 0x50);
    uStack_a0 = *(ulonglong *)(param_5 + 0x58);
    uStack_98 = *(uint64_t *)(param_5 + 0x60);
    uStack_90 = *(ulonglong *)(param_5 + 0x68);
    uStack_88 = *(uint64_t *)(param_5 + 0x70);
    uStack_80 = *(ulonglong *)(param_5 + 0x78);
    uStack_78 = *(uint64_t *)(param_5 + 0x80);
    uStack_70 = *(uint64_t *)(param_5 + 0x88);
    puVar5 = &uStack_a8;
  }
  else {
    lVar6 = param_4 + 0x30;
    FUN_18063b5f0(&uStack_a8);
    uStack_e8 = uStack_a8;
    uStack_e0 = uStack_a0;
    uStack_d8 = uStack_98;
    uStack_d0 = uStack_90;
    uStack_c8 = uStack_88;
    uStack_c0 = uStack_80;
    uStack_b8 = *(uint64_t *)(lVar6 + 0x10);
    uStack_b0 = *(uint64_t *)(lVar6 + 0x18);
    puVar5 = &uStack_e8;
  }
  uStack_58 = *puVar5;
  uStack_50 = puVar5[1];
  uStack_48 = puVar5[2];
  uStack_40 = puVar5[3];
  uStack_38 = *(int32_t *)(puVar5 + 4);
  uStack_34 = *(int32_t *)((longlong)puVar5 + 0x24);
  uStack_30 = *(int32_t *)(puVar5 + 5);
  uStack_2c = *(int32_t *)((longlong)puVar5 + 0x2c);
  uStack_28 = *(int32_t *)(puVar5 + 6);
  uStack_24 = *(int32_t *)((longlong)puVar5 + 0x34);
  uStack_20 = *(int32_t *)(puVar5 + 7);
  uStack_1c = *(int32_t *)((longlong)puVar5 + 0x3c);
  lVar6 = param_1 + 0x30;
  FUN_18063b5f0(&uStack_a8);
  uStack_e8 = uStack_a8;
  uStack_e0 = uStack_a0;
  uStack_d8 = uStack_98;
  uStack_d0 = uStack_90;
  uStack_c8 = uStack_88;
  uStack_c0 = uStack_80;
  uStack_b8 = *(uint64_t *)(lVar6 + 0x10);
  uStack_b0 = *(uint64_t *)(lVar6 + 0x18);
  cVar1 = func_0x000180285f10(&uStack_e8,&uStack_58,0x3c23d70a);
  if (cVar1 == '\0') {
    uStack_e0 = uStack_e0 & 0xffffffff;
    uStack_d0 = uStack_d0 & 0xffffffff;
    uStack_c0 = uStack_c0 & 0xffffffff;
    uStack_b0 = CONCAT44(0x3f800000,(int32_t)uStack_b0);
    FUN_180630240(param_2,puVar2,&UNK_180a015a8,&uStack_e8);
  }
  if (param_4 == 0) {
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = CONCAT44(uStack_90._4_4_,3);
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = CONCAT44(uStack_d0._4_4_,3);
    if (*(longlong *)(param_1 + 0xb8) - *(longlong *)(param_1 + 0xb0) >> 3 != 0) {
      FUN_1803c1870((longlong *)(param_1 + 0xb0),&uStack_a8,&uStack_e8,param_2,puVar2,param_6);
    }
  }
  else {
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = CONCAT44(uStack_d0._4_4_,3);
    if (*(longlong *)(param_1 + 0xb8) - *(longlong *)(param_1 + 0xb0) >> 3 != 0) {
      FUN_1803c1870((longlong *)(param_1 + 0xb0),param_4 + 0xb0,&uStack_e8,param_2,puVar2,param_6);
    }
  }
  if ((puVar2[6] != 0) || (puVar2[8] != 0)) {
    if (param_7 != '\0') {
      FUN_180630c80(param_2,puVar2,&UNK_180a16930);
    }
    if (*(longlong *)(param_3 + 0x30) == 0) {
      puVar2[10] = 0;
      *(uint64_t **)(param_3 + 0x30) = puVar2;
    }
    else {
      puVar2[10] = *(uint64_t *)(param_3 + 0x38);
      *(uint64_t **)(*(longlong *)(param_3 + 0x38) + 0x58) = puVar2;
    }
    *(uint64_t **)(param_3 + 0x38) = puVar2;
    puVar2[4] = param_3;
    puVar2[0xb] = 0;
  }
  return;
}






// 函数: void FUN_1802f9b60(longlong param_1,longlong param_2,longlong param_3,uint64_t param_4,
void FUN_1802f9b60(longlong param_1,longlong param_2,longlong param_3,uint64_t param_4,
                  uint64_t param_5)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  char *pcVar4;
  ulonglong uVar5;
  char *pcVar6;
  longlong lVar7;
  void *puVar8;
  longlong *plVar9;
  void *puVar10;
  longlong *plVar11;
  uint64_t *puVar12;
  char *pcVar13;
  longlong lVar14;
  char *pcVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong in_stack_ffffffffffffffa0;
  char acStack_58 [8];
  uint64_t uStack_50;
  longlong *plStack_48;
  longlong *plStack_40;
  uint64_t uStack_38;
  int32_t uStack_30;
  
  uStack_50 = 0xfffffffffffffffe;
  pcVar15 = "_index_";
  do {
    pcVar13 = pcVar15;
    pcVar15 = pcVar13 + 1;
  } while (*pcVar15 != '\0');
  puVar12 = *(uint64_t **)(param_2 + 0x40);
  pcVar15 = (char *)0x0;
  do {
    if (puVar12 == (uint64_t *)0x0) goto LAB_1802f9c56;
    pcVar6 = (char *)*puVar12;
    if (pcVar6 == (char *)0x0) {
      pcVar6 = (char *)0x180d48d24;
      pcVar4 = pcVar15;
    }
    else {
      pcVar4 = (char *)puVar12[2];
    }
    if (pcVar4 == pcVar13 + -0x180a1692f) {
      pcVar4 = pcVar4 + (longlong)pcVar6;
      if (pcVar4 <= pcVar6) {
LAB_1802f9c04:
        pcVar13 = (char *)0x180d48d24;
        if ((char *)puVar12[1] != (char *)0x0) {
          pcVar13 = (char *)puVar12[1];
        }
        uVar5 = 0xffffffffffffffff;
        do {
          uVar5 = uVar5 + 1;
        } while (pcVar13[uVar5] != '\0');
        if (((uVar5 < 3) || (*pcVar13 != '0')) ||
           (puVar8 = &UNK_180a3cb84, (pcVar13[1] + 0xa8U & 0xdf) != 0)) {
          puVar8 = &UNK_180a063a0;
        }
        FUN_18010cbc0(pcVar13,puVar8,acStack_58);
LAB_1802f9c56:
        pcVar13 = "components";
        do {
          pcVar6 = pcVar13;
          pcVar13 = pcVar6 + 1;
        } while (*pcVar13 != '\0');
        puVar12 = *(uint64_t **)(param_2 + 0x30);
        do {
          if (puVar12 == (uint64_t *)0x0) {
            return;
          }
          pcVar13 = (char *)*puVar12;
          if (pcVar13 == (char *)0x0) {
            pcVar13 = (char *)0x180d48d24;
            pcVar4 = pcVar15;
          }
          else {
            pcVar4 = (char *)puVar12[2];
          }
          if (pcVar4 == pcVar6 + -0x180a19c77) {
            pcVar4 = pcVar4 + (longlong)pcVar13;
            if (pcVar4 <= pcVar13) {
LAB_1802f9cc0:
              lVar7 = *(longlong *)(param_3 + 0x260);
              lVar1 = *(longlong *)(param_3 + 0x268);
              if (lVar1 == 0) {
                plStack_48 = (longlong *)0x0;
                plStack_40 = (longlong *)0x0;
                uStack_38 = 0;
                uStack_30 = 3;
                FUN_1803be9f0(param_5,&plStack_48,0,puVar12,param_4,
                              in_stack_ffffffffffffffa0 & 0xffffffffffffff00);
                plVar3 = plStack_40;
                plVar2 = plStack_48;
                uVar5 = (longlong)plStack_40 - (longlong)plStack_48 >> 3;
                plVar11 = plStack_48;
                plVar9 = plVar2;
                if (uVar5 != 0) {
                  do {
                    (**(code **)(*(longlong *)*plVar11 + 0x1e0))((longlong *)*plVar11,param_3);
                    FUN_1802f9110(param_1,*plVar11,lVar7);
                    uVar17 = (int)pcVar15 + 1;
                    pcVar15 = (char *)(ulonglong)uVar17;
                    plVar11 = plVar11 + 1;
                  } while ((ulonglong)(longlong)(int)uVar17 < uVar5);
                }
                for (; plVar9 != plVar3; plVar9 = plVar9 + 1) {
                  if ((longlong *)*plVar9 != (longlong *)0x0) {
                    (**(code **)(*(longlong *)*plVar9 + 0x38))();
                  }
                }
                if (plVar2 == (longlong *)0x0) {
                  return;
                }
                    // WARNING: Subroutine does not return
                FUN_18064e900(plVar2);
              }
              plVar9 = (longlong *)
                       ((longlong)acStack_58[0] * 0x100 + 0xb0 +
                       *(longlong *)(*(longlong *)(lVar1 + 0x260) + 0x18));
              lVar16 = *(longlong *)(param_1 + 0xb8) - *(longlong *)(param_1 + 0xb0) >> 3;
              lVar14 = plVar9[1] - *plVar9 >> 3;
              if (lVar14 == lVar16) {
                FUN_1803bf690((longlong *)(param_1 + 0xb0),plVar9,puVar12,param_4,0,0);
                return;
              }
              puVar8 = &system_buffer_ptr;
              if (*(void **)(lVar1 + 0x290) != (void *)0x0) {
                puVar8 = *(void **)(lVar1 + 0x290);
              }
              puVar10 = &system_buffer_ptr;
              if (*(void **)(param_3 + 0x290) != (void *)0x0) {
                puVar10 = *(void **)(param_3 + 0x290);
              }
              FUN_180627020(&UNK_180a19c00,puVar10,(int)acStack_58[0],lVar16,puVar8,lVar14);
              lVar7 = *(longlong *)(lVar7 + 0x10);
              if (lVar7 == 0) {
                return;
              }
              FUN_1802ed990(lVar7,1);
              return;
            }
            lVar7 = (longlong)&UNK_180a19c78 - (longlong)pcVar13;
            while (*pcVar13 == pcVar13[lVar7]) {
              pcVar13 = pcVar13 + 1;
              if (pcVar4 <= pcVar13) goto LAB_1802f9cc0;
            }
          }
          puVar12 = (uint64_t *)puVar12[0xb];
        } while( true );
      }
      lVar7 = (longlong)&UNK_180a16930 - (longlong)pcVar6;
      while (*pcVar6 == pcVar6[lVar7]) {
        pcVar6 = pcVar6 + 1;
        if (pcVar4 <= pcVar6) goto LAB_1802f9c04;
      }
    }
    puVar12 = (uint64_t *)puVar12[6];
  } while( true );
}






// 函数: void FUN_1802f9e70(longlong param_1,longlong param_2)
void FUN_1802f9e70(longlong param_1,longlong param_2)

{
  uint64_t *puVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  char *pcVar6;
  ulonglong uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  char acStackX_8 [8];
  
  lVar12 = *(longlong *)(param_1 + 0xd0);
  iVar9 = 0;
  iVar10 = 0;
  bVar3 = false;
  if (*(longlong *)(param_1 + 0xd8) - lVar12 >> 3 != 0) {
    lVar11 = 0;
    do {
      plVar2 = *(longlong **)(lVar11 + lVar12);
      iVar4 = (**(code **)(*plVar2 + 0x98))(plVar2);
      if ((iVar4 != 2) || ((plVar2[0xb] - plVar2[10] & 0xfffffffffffffff8U) != 0)) {
        bVar3 = true;
        break;
      }
      lVar12 = *(longlong *)(param_1 + 0xd0);
      iVar10 = iVar10 + 1;
      lVar11 = lVar11 + 8;
      bVar3 = false;
    } while ((ulonglong)(longlong)iVar10 < (ulonglong)(*(longlong *)(param_1 + 0xd8) - lVar12 >> 3))
    ;
  }
  puVar1 = (uint64_t *)(param_2 + 0xb0);
  uVar14 = (int)param_1 - *(int *)(param_2 + 0x18);
  acStackX_8[0] = (char)(uVar14 >> 8);
  if (bVar3) {
    pcVar8 = (char *)*puVar1;
    uVar13 = (longlong)*(char **)(param_2 + 0xb8) - (longlong)pcVar8;
    if (*(char **)(param_2 + 0xb8) != pcVar8) {
      do {
        if (*pcVar8 == acStackX_8[0]) {
          return;
        }
        iVar9 = iVar9 + 1;
        pcVar8 = pcVar8 + 1;
      } while ((ulonglong)(longlong)iVar9 < uVar13);
    }
    FUN_180194a50(puVar1,acStackX_8);
    return;
  }
  pcVar8 = (char *)*puVar1;
  pcVar6 = pcVar8;
  if (*(char **)(param_2 + 0xb8) != pcVar8) {
    while (*pcVar6 != acStackX_8[0]) {
      iVar9 = iVar9 + 1;
      pcVar6 = pcVar6 + 1;
      if ((ulonglong)((longlong)*(char **)(param_2 + 0xb8) - (longlong)pcVar8) <=
          (ulonglong)(longlong)iVar9) {
        return;
      }
    }
    uVar13 = *(ulonglong *)(param_2 + 0xb8);
    uVar5 = memchr(pcVar8,(longlong)(ulonglong)uVar14 >> 8 & 0xff,uVar13 - (longlong)pcVar8);
    uVar7 = uVar13;
    if (uVar5 != 0) {
      uVar7 = uVar5;
    }
    uVar5 = uVar7 + 1;
    if (uVar5 < uVar13) {
                    // WARNING: Subroutine does not return
      memmove(uVar7,uVar5,uVar13 - uVar5);
    }
    *(ulonglong *)(param_2 + 0xb8) = uVar13 - 1;
  }
  return;
}






