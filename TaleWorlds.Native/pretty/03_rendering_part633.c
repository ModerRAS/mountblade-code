#include "TaleWorlds.Native.Split.h"

// 03_rendering_part633.c - 2 个函数

// 函数: void FUN_18061e1bc(uint64_t param_1,int64_t param_2)
void FUN_18061e1bc(uint64_t param_1,int64_t param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int64_t *plVar7;
  float *pfVar8;
  int64_t lVar9;
  float *pfVar10;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_R12;
  uint uVar11;
  uint64_t unaff_R14;
  uint64_t uVar12;
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
  int32_t uStack000000000000002c;
  int32_t uStack000000000000003c;
  int64_t *in_stack_00000040;
  int64_t *in_stack_00000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  int32_t uStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  int32_t uStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  int32_t uStack000000000000007c;
  
  uStack000000000000002c = 0x7f7fffff;
  uStack000000000000003c = 0x7f7fffff;
  uVar12 = unaff_R14;
  do {
    (**(code **)(**(int64_t **)(param_2 + uVar12) + 0x30))
              (*(int64_t **)(param_2 + uVar12),&stack0x00000040,&stack0x00000048);
    pfVar8 = (float *)(**(code **)(*in_stack_00000040 + 0x90))(in_stack_00000040,unaff_RBP + -0x30);
    plVar7 = *(int64_t **)(uVar12 + *(int64_t *)(unaff_RSI + 0x1c0));
    lVar9 = (**(code **)(*plVar7 + 0x40))(plVar7,unaff_RBP + -0x10,0);
    pfVar10 = (float *)FUN_1800fcb90(pfVar8,unaff_RBP + 0xc,lVar9);
    fVar13 = pfVar8[3];
    fVar18 = pfVar8[1];
    fVar21 = *pfVar8;
    fVar25 = pfVar8[2];
    fVar24 = *(float *)(lVar9 + 0x10) + *(float *)(lVar9 + 0x10);
    fVar19 = *(float *)(lVar9 + 0x14) + *(float *)(lVar9 + 0x14);
    fVar1 = *pfVar10;
    fVar23 = *(float *)(lVar9 + 0x18) + *(float *)(lVar9 + 0x18);
    fVar2 = pfVar10[2];
    fVar3 = pfVar10[3];
    fVar22 = fVar13 * fVar13 - 0.5;
    fVar16 = fVar21 * fVar24 + fVar18 * fVar19 + fVar25 * fVar23;
    fVar15 = (fVar18 * fVar23 - fVar25 * fVar19) * fVar13 + fVar22 * fVar24 + fVar21 * fVar16 +
             pfVar8[4];
    fVar4 = pfVar8[6];
    fVar5 = pfVar8[5];
    cVar6 = *(char *)(unaff_R12 + 0x11aa0);
    fVar17 = pfVar10[1];
    fVar14 = fVar2 + fVar2;
    fVar20 = fVar1 * (fVar1 + fVar1);
    *(float *)(unaff_RBP + -0x80) = fVar15;
    *(float *)(unaff_RBP + -0x7c) =
         (fVar25 * fVar24 - fVar21 * fVar23) * fVar13 + fVar22 * fVar19 + fVar18 * fVar16 + fVar5;
    *(float *)(unaff_RBP + -0x78) =
         (fVar21 * fVar19 - fVar18 * fVar24) * fVar13 + fVar22 * fVar23 + fVar25 * fVar16 + fVar4;
    *(int32_t *)(unaff_RBP + -0x74) = uStack000000000000002c;
    fStack0000000000000074 = fVar3 * (fVar1 + fVar1);
    fVar13 = fVar17 + fVar17;
    fStack0000000000000050 = 1.0 - (fVar2 * fVar14 + fVar17 * fVar13);
    fStack0000000000000054 = fVar3 * fVar14 + fVar13 * fVar1;
    fStack0000000000000060 = fVar13 * fVar1 - fVar3 * fVar14;
    fStack0000000000000058 = fVar14 * fVar1 - fVar3 * fVar13;
    fStack0000000000000068 = fStack0000000000000074 + fVar17 * fVar14;
    fStack0000000000000070 = fVar3 * fVar13 + fVar14 * fVar1;
    fStack0000000000000074 = fVar17 * fVar14 - fStack0000000000000074;
    fStack0000000000000064 = 1.0 - (fVar2 * fVar14 + fVar20);
    fStack0000000000000078 = 1.0 - (fVar17 * fVar13 + fVar20);
    if (cVar6 != '\0') {
      FUN_180635c40(unaff_R12 + 0x11a50,&stack0x00000050,0x3ccccccd,fStack0000000000000070,fVar15);
    }
    pfVar8 = (float *)(**(code **)(*in_stack_00000048 + 0x90))(in_stack_00000048,unaff_RBP + -0x10);
    plVar7 = *(int64_t **)(uVar12 + *(int64_t *)(unaff_RSI + 0x1c0));
    lVar9 = (**(code **)(*plVar7 + 0x40))(plVar7,unaff_RBP + 0x2c,1);
    pfVar10 = (float *)FUN_1800fcb90(pfVar8,unaff_RBP + 0x1c,lVar9);
    fVar13 = pfVar8[3];
    fVar18 = pfVar8[1];
    fVar21 = *pfVar8;
    fVar25 = pfVar8[2];
    fVar20 = *(float *)(lVar9 + 0x10) + *(float *)(lVar9 + 0x10);
    fVar14 = *(float *)(lVar9 + 0x14) + *(float *)(lVar9 + 0x14);
    fVar1 = *pfVar10;
    fVar19 = *(float *)(lVar9 + 0x18) + *(float *)(lVar9 + 0x18);
    fVar2 = pfVar10[1];
    fVar3 = pfVar10[2];
    fVar16 = fVar13 * fVar13 - 0.5;
    fVar17 = fVar21 * fVar20 + fVar18 * fVar14 + fVar25 * fVar19;
    fVar4 = pfVar8[5];
    fVar5 = pfVar8[6];
    cVar6 = *(char *)(unaff_R12 + 0x11aa0);
    *(float *)(unaff_RBP + -0x30) =
         (fVar18 * fVar19 - fVar25 * fVar14) * fVar13 + fVar16 * fVar20 + fVar21 * fVar17 +
         pfVar8[4];
    *(float *)(unaff_RBP + -0x2c) =
         (fVar25 * fVar20 - fVar21 * fVar19) * fVar13 + fVar16 * fVar14 + fVar18 * fVar17 + fVar4;
    *(float *)(unaff_RBP + -0x28) =
         (fVar21 * fVar14 - fVar18 * fVar20) * fVar13 + fVar16 * fVar19 + fVar25 * fVar17 + fVar5;
    *(int32_t *)(unaff_RBP + -0x24) = uStack000000000000003c;
    fVar13 = pfVar10[3];
    fVar18 = fVar3 + fVar3;
    fVar25 = fVar2 + fVar2;
    fStack0000000000000074 = (fVar1 + fVar1) * fVar13;
    fStack0000000000000058 = fVar18 * fVar1 - fVar25 * fVar13;
    fVar21 = (fVar1 + fVar1) * fVar1;
    fStack0000000000000070 = fVar25 * fVar13 + fVar18 * fVar1;
    fStack0000000000000054 = fVar18 * fVar13 + fVar25 * fVar1;
    fStack0000000000000050 = 1.0 - (fVar18 * fVar3 + fVar25 * fVar2);
    uStack000000000000005c = *(int32_t *)(unaff_RBP + -100);
    fStack0000000000000060 = fVar25 * fVar1 - fVar18 * fVar13;
    fStack0000000000000064 = 1.0 - (fVar18 * fVar3 + fVar21);
    fStack0000000000000068 = fStack0000000000000074 + fVar18 * fVar2;
    uStack000000000000006c = *(int32_t *)(unaff_RBP + -0x54);
    fStack0000000000000074 = fVar18 * fVar2 - fStack0000000000000074;
    *(float *)(unaff_RBP + -0x70) = fStack0000000000000050;
    *(float *)(unaff_RBP + -0x6c) = fStack0000000000000054;
    *(float *)(unaff_RBP + -0x68) = fStack0000000000000058;
    *(int32_t *)(unaff_RBP + -100) = uStack000000000000005c;
    fStack0000000000000078 = 1.0 - (fVar25 * fVar2 + fVar21);
    uStack000000000000007c = *(int32_t *)(unaff_RBP + -0x44);
    *(float *)(unaff_RBP + -0x60) = fStack0000000000000060;
    *(float *)(unaff_RBP + -0x5c) = fStack0000000000000064;
    *(float *)(unaff_RBP + -0x58) = fStack0000000000000068;
    *(int32_t *)(unaff_RBP + -0x54) = uStack000000000000006c;
    *(float *)(unaff_RBP + -0x50) = fStack0000000000000070;
    *(float *)(unaff_RBP + -0x4c) = fStack0000000000000074;
    *(float *)(unaff_RBP + -0x48) = fStack0000000000000078;
    *(int32_t *)(unaff_RBP + -0x44) = uStack000000000000007c;
    *(int32_t *)(unaff_RBP + -0x80) = *(int32_t *)(unaff_RBP + -0x30);
    *(int32_t *)(unaff_RBP + -0x7c) = *(int32_t *)(unaff_RBP + -0x2c);
    *(int32_t *)(unaff_RBP + -0x78) = *(int32_t *)(unaff_RBP + -0x28);
    *(int32_t *)(unaff_RBP + -0x74) = *(int32_t *)(unaff_RBP + -0x24);
    if (cVar6 != '\0') {
      FUN_180635c40(unaff_R12 + 0x11a50,&stack0x00000050,0x3c8f5c29,fStack0000000000000054,fVar15);
    }
    param_2 = *(int64_t *)(unaff_RSI + 0x1c0);
    uVar11 = (int)unaff_R14 + 1;
    unaff_R14 = (uint64_t)uVar11;
    uVar12 = uVar12 + 8;
  } while ((uint64_t)(int64_t)(int)uVar11 <
           (uint64_t)(*(int64_t *)(unaff_RSI + 0x1c8) - param_2 >> 3));
  return;
}





// 函数: void FUN_18061e834(void)
void FUN_18061e834(void)

{
  return;
}





