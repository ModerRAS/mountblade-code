#include "TaleWorlds.Native.Split.h"

// 03_rendering_part572.c - 10 个函数

// 函数: void FUN_18057dfdb(int64_t param_1,uint64_t param_2,float param_3)
void FUN_18057dfdb(int64_t param_1,uint64_t param_2,float param_3)

{
  uint64_t uVar1;
  int64_t lVar2;
  float fVar3;
  uint64_t uVar4;
  int64_t in_RAX;
  int64_t unaff_RBX;
  int32_t *unaff_RBP;
  float *in_R8;
  int64_t *plVar5;
  float fVar6;
  float fVar7;
  int8_t auVar8 [16];
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
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  int32_t uStack000000000000003c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  float fStack000000000000007c;
  
  _fStack0000000000000050 = *(uint64_t *)(in_RAX + 0x1b0);
  _fStack0000000000000058 = *(uint64_t *)(in_RAX + 0x1b8);
  _fStack0000000000000060 = *(uint64_t *)(in_RAX + 0x1c0);
  _fStack0000000000000068 = *(uint64_t *)(in_RAX + 0x1c8);
  fVar14 = *(float *)(in_RAX + 0x1d0);
  uVar4 = *(uint64_t *)(in_RAX + 0x1e8);
  uVar1 = *(uint64_t *)(in_RAX + 0x1f0);
  *(uint64_t *)(unaff_RBP + -0x20) = *(uint64_t *)(in_RAX + 0x1e0);
  *(uint64_t *)(unaff_RBP + -0x1e) = uVar4;
  *(uint64_t *)(unaff_RBP + -0x1c) = uVar1;
  if (fVar14 < param_3) {
    _fStack0000000000000050 = *(uint64_t *)in_R8;
    _fStack0000000000000058 = *(uint64_t *)(in_R8 + 2);
    fVar14 = 1.5;
    _fStack0000000000000060 = *(uint64_t *)in_R8;
    _fStack0000000000000068 = CONCAT44(0x7f7fffff,in_R8[2] + 1.5);
  }
  fVar3 = *in_R8;
  fVar18 = in_R8[1];
  fVar19 = in_R8[2];
  fVar17 = fStack0000000000000060 - fVar3;
  fVar20 = fStack0000000000000050 - fVar3;
  fVar15 = fStack0000000000000054 - fVar18;
  unaff_RBP[4] = fVar18;
  unaff_RBP[5] = fVar18;
  unaff_RBP[6] = fVar18;
  unaff_RBP[7] = fVar18;
  fVar18 = fStack0000000000000064 - fVar18;
  unaff_RBP[-0xd] = 0x7f7fffff;
  fVar16 = fStack0000000000000058 - fVar19;
  unaff_RBP[8] = fVar19;
  unaff_RBP[9] = fVar19;
  unaff_RBP[10] = fVar19;
  unaff_RBP[0xb] = fVar19;
  unaff_RBP[-0x10] = fVar20;
  fVar19 = fStack0000000000000068 - fVar19;
  unaff_RBP[-0xf] = fVar15;
  unaff_RBP[-8] = fVar14;
  unaff_RBP[-0xe] = fVar16;
  uStack000000000000003c = 0x7f7fffff;
  unaff_RBP[-0xc] = fVar17;
  unaff_RBP[-0xb] = fVar18;
  unaff_RBP[-10] = fVar19;
  unaff_RBP[-9] = 0x7f7fffff;
  fVar9 = (fVar18 - fVar15) * (fVar18 - fVar15) + (fVar17 - fVar20) * (fVar17 - fVar20) +
          (fVar19 - fVar16) * (fVar19 - fVar16);
  auVar8 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
  fVar6 = auVar8._0_4_;
  fVar9 = fVar6 * 0.5 * (3.0 - fVar9 * fVar6 * fVar6) * fVar9 * 0.5;
  fVar6 = fVar9 - *(float *)(unaff_RBX + 0x14);
  fStack0000000000000030 = fVar17;
  fStack0000000000000034 = fVar18;
  fStack0000000000000038 = fVar19;
  if ((((fVar6 <= -0.01) || (0.01 <= fVar6)) ||
      (fVar6 = fVar14 - *(float *)(unaff_RBX + 0x10), fVar6 <= -0.01)) || (0.01 <= fVar6)) {
    FUN_18057f1f0(param_1 + 0x48,&stack0x00000030,auVar8._0_8_,unaff_RBP + 0x3a);
    lVar2 = CONCAT44(fStack0000000000000034,fStack0000000000000030);
    fStack0000000000000030 = 2.8026e-45;
    plVar5 = *(int64_t **)(lVar2 + 8);
    fStack0000000000000034 = fVar14;
    fStack0000000000000038 = fVar9;
    (**(code **)(*plVar5 + 0x40))(plVar5,&stack0x00000030);
    *(float *)(unaff_RBX + 0x10) = fVar14;
    *(float *)(unaff_RBX + 0x14) = fVar9;
  }
  if ((((0.01 <= ABS(fVar20 - *(float *)(unaff_RBX + 0x18))) ||
       (0.01 <= ABS(fVar15 - *(float *)(unaff_RBX + 0x1c)))) ||
      ((0.01 <= ABS(fVar16 - *(float *)(unaff_RBX + 0x20)) ||
       ((0.01 <= ABS(fVar17 - *(float *)(unaff_RBX + 0x28)) ||
        (0.01 <= ABS(fVar18 - *(float *)(unaff_RBX + 0x2c)))))))) ||
     (0.01 <= ABS(fVar19 - *(float *)(unaff_RBX + 0x30)))) {
    FUN_18057f1f0(param_1 + 0x48,&stack0x00000030);
    lVar2 = CONCAT44(fStack0000000000000034,fStack0000000000000030);
    fStack0000000000000030 = 0.0;
    fStack0000000000000034 = 0.0;
    fStack0000000000000038 = 1.0;
    uStack000000000000003c = 0;
    plVar5 = *(int64_t **)(lVar2 + 8);
    FUN_180645340(&stack0x00000050,unaff_RBP + -0xc,unaff_RBP + -0x10,&stack0x00000030);
    fVar10 = fStack0000000000000050 * 0.0;
    fVar11 = fStack0000000000000054 * 0.0;
    fVar12 = fStack0000000000000058 * 0.0;
    fVar13 = fStack000000000000005c * 0.0;
    fVar14 = fStack0000000000000070 * 1.0;
    fVar6 = fStack0000000000000074 * 1.0;
    fVar9 = fStack0000000000000078 * 1.0;
    fVar7 = fStack000000000000007c * 1.0;
    _fStack0000000000000050 =
         CONCAT44(fStack0000000000000054 * -1.0 + fStack0000000000000064 * 0.0 +
                  fStack0000000000000074 * 0.0,
                  fStack0000000000000050 * -1.0 + fStack0000000000000060 * 0.0 +
                  fStack0000000000000070 * 0.0);
    _fStack0000000000000058 =
         CONCAT44(fStack000000000000005c * -1.0 + fStack000000000000006c * 0.0 +
                  fStack000000000000007c * 0.0,
                  fStack0000000000000058 * -1.0 + fStack0000000000000068 * 0.0 +
                  fStack0000000000000078 * 0.0);
    fStack0000000000000070 = fStack0000000000000060 * 1.0 + fVar10 + fStack0000000000000070 * 0.0;
    fStack0000000000000074 = fStack0000000000000064 * 1.0 + fVar11 + fStack0000000000000074 * 0.0;
    fStack0000000000000078 = fStack0000000000000068 * 1.0 + fVar12 + fStack0000000000000078 * 0.0;
    fStack000000000000007c = fStack000000000000006c * 1.0 + fVar13 + fStack000000000000007c * 0.0;
    _fStack0000000000000060 =
         CONCAT44(fVar11 + fStack0000000000000064 * 0.0 + fVar6,
                  fVar10 + fStack0000000000000060 * 0.0 + fVar14);
    _fStack0000000000000068 =
         CONCAT44(fVar13 + fStack000000000000006c * 0.0 + fVar7,
                  fVar12 + fStack0000000000000068 * 0.0 + fVar9);
    AdvancedProcessor_StateManager0(&stack0x00000030,&stack0x00000050);
    lVar2 = *plVar5;
    unaff_RBP[-0x18] = fStack0000000000000034;
    unaff_RBP[-0x16] = uStack000000000000003c;
    unaff_RBP[-0x17] = fStack0000000000000038;
    unaff_RBP[-0x14] = unaff_RBP[-0x20];
    unaff_RBP[-0x15] = fStack0000000000000030;
    unaff_RBP[-0x12] = unaff_RBP[-0x1e];
    unaff_RBP[-0x13] = unaff_RBP[-0x1f];
    (**(code **)(lVar2 + 0x90))(plVar5,unaff_RBP + -0x18);
    uStack000000000000003c = 0x7f7fffff;
    *(float *)(unaff_RBX + 0x18) = fVar20;
    *(float *)(unaff_RBX + 0x1c) = fVar15;
    *(float *)(unaff_RBX + 0x20) = fVar16;
    *(int32_t *)(unaff_RBX + 0x24) = 0x7f7fffff;
    *(float *)(unaff_RBX + 0x28) = fVar17;
    *(float *)(unaff_RBX + 0x2c) = fVar18;
    *(float *)(unaff_RBX + 0x30) = fVar19;
    *(int32_t *)(unaff_RBX + 0x34) = 0x7f7fffff;
    fStack0000000000000030 = fVar20;
    fStack0000000000000034 = fVar15;
    fStack0000000000000038 = fVar16;
  }
  plVar5 = *(int64_t **)(unaff_RBX + 8);
  *(uint64_t *)(unaff_RBP + -6) = 0;
  *(uint64_t *)(unaff_RBP + -4) = 0x3f80000000000000;
  *unaff_RBP = unaff_RBP[8];
  unaff_RBP[-2] = fVar3;
  unaff_RBP[-1] = unaff_RBP[4];
  (**(code **)(*plVar5 + 0x98))(plVar5,unaff_RBP + -6,1);
  return;
}





// 函数: void FUN_18057e23a(int64_t param_1,uint64_t param_2,float *param_3)
void FUN_18057e23a(int64_t param_1,uint64_t param_2,float *param_3)

{
  uint64_t uVar1;
  int64_t lVar2;
  float fVar3;
  uint64_t uVar4;
  int64_t unaff_RBX;
  int32_t *unaff_RBP;
  int64_t unaff_RDI;
  int64_t in_R10;
  int64_t *plVar5;
  float fVar6;
  float fVar7;
  int8_t auVar8 [16];
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
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  int32_t uStack000000000000003c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  float fStack000000000000007c;
  
  if (unaff_RBX != *(int64_t *)(in_R10 + *(int64_t *)(param_1 + 0x28) * 8)) {
    lVar2 = *(int64_t *)(unaff_RDI + 0x20);
    _fStack0000000000000050 = *(uint64_t *)(lVar2 + 0x1b0);
    _fStack0000000000000058 = *(uint64_t *)(lVar2 + 0x1b8);
    _fStack0000000000000060 = *(uint64_t *)(lVar2 + 0x1c0);
    _fStack0000000000000068 = *(uint64_t *)(lVar2 + 0x1c8);
    fVar14 = *(float *)(lVar2 + 0x1d0);
    uVar4 = *(uint64_t *)(lVar2 + 0x1e8);
    uVar1 = *(uint64_t *)(lVar2 + 0x1f0);
    *(uint64_t *)(unaff_RBP + -0x20) = *(uint64_t *)(lVar2 + 0x1e0);
    *(uint64_t *)(unaff_RBP + -0x1e) = uVar4;
    *(uint64_t *)(unaff_RBP + -0x1c) = uVar1;
    if (fVar14 < 0.0) {
      _fStack0000000000000050 = *(uint64_t *)param_3;
      _fStack0000000000000058 = *(uint64_t *)(param_3 + 2);
      fVar14 = 1.5;
      _fStack0000000000000060 = *(uint64_t *)param_3;
      _fStack0000000000000068 = CONCAT44(0x7f7fffff,param_3[2] + 1.5);
    }
    fVar3 = *param_3;
    fVar18 = param_3[1];
    fVar19 = param_3[2];
    fVar17 = fStack0000000000000060 - fVar3;
    fVar20 = fStack0000000000000050 - fVar3;
    fVar15 = fStack0000000000000054 - fVar18;
    unaff_RBP[4] = fVar18;
    unaff_RBP[5] = fVar18;
    unaff_RBP[6] = fVar18;
    unaff_RBP[7] = fVar18;
    fVar18 = fStack0000000000000064 - fVar18;
    unaff_RBP[-0xd] = 0x7f7fffff;
    fVar16 = fStack0000000000000058 - fVar19;
    unaff_RBP[8] = fVar19;
    unaff_RBP[9] = fVar19;
    unaff_RBP[10] = fVar19;
    unaff_RBP[0xb] = fVar19;
    unaff_RBP[-0x10] = fVar20;
    fVar19 = fStack0000000000000068 - fVar19;
    unaff_RBP[-0xf] = fVar15;
    unaff_RBP[-8] = fVar14;
    unaff_RBP[-0xe] = fVar16;
    uStack000000000000003c = 0x7f7fffff;
    unaff_RBP[-0xc] = fVar17;
    unaff_RBP[-0xb] = fVar18;
    unaff_RBP[-10] = fVar19;
    unaff_RBP[-9] = 0x7f7fffff;
    fVar9 = (fVar18 - fVar15) * (fVar18 - fVar15) + (fVar17 - fVar20) * (fVar17 - fVar20) +
            (fVar19 - fVar16) * (fVar19 - fVar16);
    auVar8 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
    fVar6 = auVar8._0_4_;
    fVar9 = fVar6 * 0.5 * (3.0 - fVar9 * fVar6 * fVar6) * fVar9 * 0.5;
    fVar6 = fVar9 - *(float *)(unaff_RBX + 0x14);
    fStack0000000000000030 = fVar17;
    fStack0000000000000034 = fVar18;
    fStack0000000000000038 = fVar19;
    if ((((fVar6 <= -0.01) || (0.01 <= fVar6)) ||
        (fVar6 = fVar14 - *(float *)(unaff_RBX + 0x10), fVar6 <= -0.01)) || (0.01 <= fVar6)) {
      FUN_18057f1f0(param_1 + 0x48,&stack0x00000030,auVar8._0_8_,unaff_RBP + 0x3a);
      lVar2 = CONCAT44(fStack0000000000000034,fStack0000000000000030);
      fStack0000000000000030 = 2.8026e-45;
      plVar5 = *(int64_t **)(lVar2 + 8);
      fStack0000000000000034 = fVar14;
      fStack0000000000000038 = fVar9;
      (**(code **)(*plVar5 + 0x40))(plVar5,&stack0x00000030);
      *(float *)(unaff_RBX + 0x10) = fVar14;
      *(float *)(unaff_RBX + 0x14) = fVar9;
    }
    if ((((0.01 <= ABS(fVar20 - *(float *)(unaff_RBX + 0x18))) ||
         (0.01 <= ABS(fVar15 - *(float *)(unaff_RBX + 0x1c)))) ||
        ((0.01 <= ABS(fVar16 - *(float *)(unaff_RBX + 0x20)) ||
         ((0.01 <= ABS(fVar17 - *(float *)(unaff_RBX + 0x28)) ||
          (0.01 <= ABS(fVar18 - *(float *)(unaff_RBX + 0x2c)))))))) ||
       (0.01 <= ABS(fVar19 - *(float *)(unaff_RBX + 0x30)))) {
      FUN_18057f1f0(param_1 + 0x48,&stack0x00000030);
      lVar2 = CONCAT44(fStack0000000000000034,fStack0000000000000030);
      fStack0000000000000030 = 0.0;
      fStack0000000000000034 = 0.0;
      fStack0000000000000038 = 1.0;
      uStack000000000000003c = 0;
      plVar5 = *(int64_t **)(lVar2 + 8);
      FUN_180645340(&stack0x00000050,unaff_RBP + -0xc,unaff_RBP + -0x10,&stack0x00000030);
      fVar10 = fStack0000000000000050 * 0.0;
      fVar11 = fStack0000000000000054 * 0.0;
      fVar12 = fStack0000000000000058 * 0.0;
      fVar13 = fStack000000000000005c * 0.0;
      fVar14 = fStack0000000000000070 * 1.0;
      fVar6 = fStack0000000000000074 * 1.0;
      fVar9 = fStack0000000000000078 * 1.0;
      fVar7 = fStack000000000000007c * 1.0;
      _fStack0000000000000050 =
           CONCAT44(fStack0000000000000054 * -1.0 + fStack0000000000000064 * 0.0 +
                    fStack0000000000000074 * 0.0,
                    fStack0000000000000050 * -1.0 + fStack0000000000000060 * 0.0 +
                    fStack0000000000000070 * 0.0);
      _fStack0000000000000058 =
           CONCAT44(fStack000000000000005c * -1.0 + fStack000000000000006c * 0.0 +
                    fStack000000000000007c * 0.0,
                    fStack0000000000000058 * -1.0 + fStack0000000000000068 * 0.0 +
                    fStack0000000000000078 * 0.0);
      fStack0000000000000070 = fStack0000000000000060 * 1.0 + fVar10 + fStack0000000000000070 * 0.0;
      fStack0000000000000074 = fStack0000000000000064 * 1.0 + fVar11 + fStack0000000000000074 * 0.0;
      fStack0000000000000078 = fStack0000000000000068 * 1.0 + fVar12 + fStack0000000000000078 * 0.0;
      fStack000000000000007c = fStack000000000000006c * 1.0 + fVar13 + fStack000000000000007c * 0.0;
      _fStack0000000000000060 =
           CONCAT44(fVar11 + fStack0000000000000064 * 0.0 + fVar6,
                    fVar10 + fStack0000000000000060 * 0.0 + fVar14);
      _fStack0000000000000068 =
           CONCAT44(fVar13 + fStack000000000000006c * 0.0 + fVar7,
                    fVar12 + fStack0000000000000068 * 0.0 + fVar9);
      AdvancedProcessor_StateManager0(&stack0x00000030,&stack0x00000050);
      lVar2 = *plVar5;
      unaff_RBP[-0x18] = fStack0000000000000034;
      unaff_RBP[-0x16] = uStack000000000000003c;
      unaff_RBP[-0x17] = fStack0000000000000038;
      unaff_RBP[-0x14] = unaff_RBP[-0x20];
      unaff_RBP[-0x15] = fStack0000000000000030;
      unaff_RBP[-0x12] = unaff_RBP[-0x1e];
      unaff_RBP[-0x13] = unaff_RBP[-0x1f];
      (**(code **)(lVar2 + 0x90))(plVar5,unaff_RBP + -0x18);
      uStack000000000000003c = 0x7f7fffff;
      *(float *)(unaff_RBX + 0x18) = fVar20;
      *(float *)(unaff_RBX + 0x1c) = fVar15;
      *(float *)(unaff_RBX + 0x20) = fVar16;
      *(int32_t *)(unaff_RBX + 0x24) = 0x7f7fffff;
      *(float *)(unaff_RBX + 0x28) = fVar17;
      *(float *)(unaff_RBX + 0x2c) = fVar18;
      *(float *)(unaff_RBX + 0x30) = fVar19;
      *(int32_t *)(unaff_RBX + 0x34) = 0x7f7fffff;
      fStack0000000000000030 = fVar20;
      fStack0000000000000034 = fVar15;
      fStack0000000000000038 = fVar16;
    }
    plVar5 = *(int64_t **)(unaff_RBX + 8);
    *(uint64_t *)(unaff_RBP + -6) = 0;
    *(uint64_t *)(unaff_RBP + -4) = 0x3f80000000000000;
    *unaff_RBP = unaff_RBP[8];
    unaff_RBP[-2] = fVar3;
    unaff_RBP[-1] = unaff_RBP[4];
    (**(code **)(*plVar5 + 0x98))(plVar5,unaff_RBP + -6,1);
  }
  return;
}





// 函数: void FUN_18057e243(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_18057e243(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                  uint64_t param_9,uint64_t param_10,uint64_t param_11,uint64_t param_12,
                  uint64_t param_13,uint64_t param_14,uint64_t param_15)

{
  int64_t lVar1;
  int64_t unaff_RBX;
  int32_t *unaff_RBP;
  int64_t *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_XMM6_Da;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  
  FUN_18057f1f0(param_1 + 0x48,&param_6,param_3,unaff_RBP + 0x3a);
  lVar1 = CONCAT44(param_6._4_4_,(float)param_6);
  param_6._0_4_ = 2.8026e-45;
  plVar2 = *(int64_t **)(lVar1 + 8);
  param_6._4_4_ = unaff_XMM7_Da;
  (**(code **)(*plVar2 + 0x40))(plVar2,&param_6);
  *(int32_t *)(unaff_RBX + 0x10) = unaff_XMM7_Da;
  *(int32_t *)(unaff_RBX + 0x14) = unaff_XMM8_Da;
  if ((((unaff_XMM6_Da <= ABS(unaff_XMM15_Da - *(float *)(unaff_RBX + 0x18))) ||
       (unaff_XMM6_Da <= ABS(unaff_XMM10_Da - *(float *)(unaff_RBX + 0x1c)))) ||
      (unaff_XMM6_Da <= ABS(unaff_XMM11_Da - *(float *)(unaff_RBX + 0x20)))) ||
     (((unaff_XMM6_Da <= ABS(unaff_XMM12_Da - *(float *)(unaff_RBX + 0x28)) ||
       (unaff_XMM6_Da <= ABS(unaff_XMM13_Da - *(float *)(unaff_RBX + 0x2c)))) ||
      (unaff_XMM6_Da <= ABS(unaff_XMM14_Da - *(float *)(unaff_RBX + 0x30)))))) {
    FUN_18057f1f0(param_1 + 0x48,&param_6);
    lVar1 = CONCAT44(param_6._4_4_,(float)param_6);
    param_6._0_4_ = 0.0;
    param_6._4_4_ = 0;
    param_7._0_4_ = 0x3f800000;
    param_7._4_4_ = 0;
    plVar2 = *(int64_t **)(lVar1 + 8);
    FUN_180645340(&param_10,unaff_RBP + -0xc,unaff_RBP + -0x10,&param_6);
    fVar7 = (float)param_10 * 0.0;
    fVar8 = param_10._4_4_ * 0.0;
    fVar9 = (float)param_11 * 0.0;
    fVar10 = param_11._4_4_ * 0.0;
    fVar3 = (float)param_12 * 1.0;
    fVar4 = param_12._4_4_ * 1.0;
    fVar5 = (float)param_13 * 1.0;
    fVar6 = param_13._4_4_ * 1.0;
    param_10._0_4_ = (float)param_10 * -1.0 + (float)param_12 * 0.0 + (float)param_14 * 0.0;
    param_10._4_4_ = param_10._4_4_ * -1.0 + param_12._4_4_ * 0.0 + param_14._4_4_ * 0.0;
    param_11._0_4_ = (float)param_11 * -1.0 + (float)param_13 * 0.0 + (float)param_15 * 0.0;
    param_11._4_4_ = param_11._4_4_ * -1.0 + param_13._4_4_ * 0.0 + param_15._4_4_ * 0.0;
    param_12._0_4_ = fVar7 + (float)param_12 * 0.0 + (float)param_14 * 1.0;
    param_12._4_4_ = fVar8 + param_12._4_4_ * 0.0 + param_14._4_4_ * 1.0;
    param_13._0_4_ = fVar9 + (float)param_13 * 0.0 + (float)param_15 * 1.0;
    param_13._4_4_ = fVar10 + param_13._4_4_ * 0.0 + param_15._4_4_ * 1.0;
    param_14._0_4_ = fVar3 + fVar7 + (float)param_14 * 0.0;
    param_14._4_4_ = fVar4 + fVar8 + param_14._4_4_ * 0.0;
    param_15._0_4_ = fVar5 + fVar9 + (float)param_15 * 0.0;
    param_15._4_4_ = fVar6 + fVar10 + param_15._4_4_ * 0.0;
    AdvancedProcessor_StateManager0(&param_6,&param_10);
    lVar1 = *plVar2;
    unaff_RBP[-0x18] = param_6._4_4_;
    unaff_RBP[-0x16] = param_7._4_4_;
    unaff_RBP[-0x17] = (int32_t)param_7;
    unaff_RBP[-0x14] = unaff_RBP[-0x20];
    unaff_RBP[-0x15] = (float)param_6;
    unaff_RBP[-0x12] = unaff_RBP[-0x1e];
    unaff_RBP[-0x13] = unaff_RBP[-0x1f];
    (**(code **)(lVar1 + 0x90))(plVar2,unaff_RBP + -0x18);
    param_7._4_4_ = 0x7f7fffff;
    *(float *)(unaff_RBX + 0x18) = unaff_XMM15_Da;
    *(float *)(unaff_RBX + 0x1c) = unaff_XMM10_Da;
    *(float *)(unaff_RBX + 0x20) = unaff_XMM11_Da;
    *(int32_t *)(unaff_RBX + 0x24) = 0x7f7fffff;
    *(float *)(unaff_RBX + 0x28) = unaff_XMM12_Da;
    *(float *)(unaff_RBX + 0x2c) = unaff_XMM13_Da;
    *(float *)(unaff_RBX + 0x30) = unaff_XMM14_Da;
    *(int32_t *)(unaff_RBX + 0x34) = 0x7f7fffff;
    param_6._0_4_ = unaff_XMM15_Da;
  }
  plVar2 = *(int64_t **)(unaff_RBX + 8);
  *(uint64_t *)(unaff_RBP + -6) = 0;
  *(uint64_t *)(unaff_RBP + -4) = 0x3f80000000000000;
  *unaff_RBP = unaff_RBP[8];
  unaff_RBP[-2] = unaff_XMM9_Da;
  unaff_RBP[-1] = unaff_RBP[4];
  (**(code **)(*plVar2 + 0x98))(plVar2,unaff_RBP + -6,1);
  return;
}





// 函数: void FUN_18057e2b9(uint64_t param_1,uint param_2,uint64_t param_3,uint64_t param_4,
void FUN_18057e2b9(uint64_t param_1,uint param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                  uint64_t param_9,uint64_t param_10,uint64_t param_11,uint64_t param_12,
                  uint64_t param_13,uint64_t param_14,uint64_t param_15)

{
  int64_t lVar1;
  int64_t unaff_RBX;
  int32_t *unaff_RBP;
  int64_t *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_XMM6_Da;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int32_t unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  int32_t unaff_XMM15_Da;
  
  fVar3 = (float)((uint)(unaff_XMM10_Da - *(float *)(unaff_RBX + 0x1c)) & param_2);
  if ((((unaff_XMM6_Da <= fVar3) ||
       (fVar3 = (float)((uint)(unaff_XMM11_Da - *(float *)(unaff_RBX + 0x20)) & param_2),
       unaff_XMM6_Da <= fVar3)) ||
      (fVar3 = (float)((uint)(unaff_XMM12_Da - *(float *)(unaff_RBX + 0x28)) & param_2),
      unaff_XMM6_Da <= fVar3)) ||
     ((fVar3 = (float)((uint)(unaff_XMM13_Da - *(float *)(unaff_RBX + 0x2c)) & param_2),
      unaff_XMM6_Da <= fVar3 ||
      (fVar3 = (float)((uint)(unaff_XMM14_Da - *(float *)(unaff_RBX + 0x30)) & param_2),
      unaff_XMM6_Da <= fVar3)))) {
    FUN_18057f1f0(fVar3,&param_6,param_3,unaff_RBP + 0x3a);
    lVar1 = CONCAT44(param_6._4_4_,(int32_t)param_6);
    param_6._0_4_ = 0;
    param_6._4_4_ = 0;
    param_7._0_4_ = 1.0;
    param_7._4_4_ = 0;
    plVar2 = *(int64_t **)(lVar1 + 8);
    FUN_180645340(&param_10,unaff_RBP + -0xc,unaff_RBP + -0x10,&param_6);
    fVar7 = (float)param_10 * 0.0;
    fVar8 = param_10._4_4_ * 0.0;
    fVar9 = (float)param_11 * 0.0;
    fVar10 = param_11._4_4_ * 0.0;
    fVar3 = (float)param_12 * 1.0;
    fVar4 = param_12._4_4_ * 1.0;
    fVar5 = (float)param_13 * 1.0;
    fVar6 = param_13._4_4_ * 1.0;
    param_10._0_4_ = (float)param_10 * -1.0 + (float)param_12 * 0.0 + (float)param_14 * 0.0;
    param_10._4_4_ = param_10._4_4_ * -1.0 + param_12._4_4_ * 0.0 + param_14._4_4_ * 0.0;
    param_11._0_4_ = (float)param_11 * -1.0 + (float)param_13 * 0.0 + (float)param_15 * 0.0;
    param_11._4_4_ = param_11._4_4_ * -1.0 + param_13._4_4_ * 0.0 + param_15._4_4_ * 0.0;
    param_12._0_4_ = fVar7 + (float)param_12 * 0.0 + (float)param_14 * 1.0;
    param_12._4_4_ = fVar8 + param_12._4_4_ * 0.0 + param_14._4_4_ * 1.0;
    param_13._0_4_ = fVar9 + (float)param_13 * 0.0 + (float)param_15 * 1.0;
    param_13._4_4_ = fVar10 + param_13._4_4_ * 0.0 + param_15._4_4_ * 1.0;
    param_14._0_4_ = fVar3 + fVar7 + (float)param_14 * 0.0;
    param_14._4_4_ = fVar4 + fVar8 + param_14._4_4_ * 0.0;
    param_15._0_4_ = fVar5 + fVar9 + (float)param_15 * 0.0;
    param_15._4_4_ = fVar6 + fVar10 + param_15._4_4_ * 0.0;
    AdvancedProcessor_StateManager0(&param_6,&param_10);
    lVar1 = *plVar2;
    unaff_RBP[-0x18] = param_6._4_4_;
    unaff_RBP[-0x16] = param_7._4_4_;
    unaff_RBP[-0x17] = (float)param_7;
    unaff_RBP[-0x14] = unaff_RBP[-0x20];
    unaff_RBP[-0x15] = (int32_t)param_6;
    unaff_RBP[-0x12] = unaff_RBP[-0x1e];
    unaff_RBP[-0x13] = unaff_RBP[-0x1f];
    (**(code **)(lVar1 + 0x90))(plVar2,unaff_RBP + -0x18);
    param_7._4_4_ = 0x7f7fffff;
    *(int32_t *)(unaff_RBX + 0x18) = unaff_XMM15_Da;
    *(float *)(unaff_RBX + 0x1c) = unaff_XMM10_Da;
    *(float *)(unaff_RBX + 0x20) = unaff_XMM11_Da;
    *(int32_t *)(unaff_RBX + 0x24) = 0x7f7fffff;
    *(float *)(unaff_RBX + 0x28) = unaff_XMM12_Da;
    *(float *)(unaff_RBX + 0x2c) = unaff_XMM13_Da;
    *(float *)(unaff_RBX + 0x30) = unaff_XMM14_Da;
    *(int32_t *)(unaff_RBX + 0x34) = 0x7f7fffff;
    param_6._0_4_ = unaff_XMM15_Da;
    param_7._0_4_ = unaff_XMM11_Da;
  }
  plVar2 = *(int64_t **)(unaff_RBX + 8);
  *(uint64_t *)(unaff_RBP + -6) = 0;
  *(uint64_t *)(unaff_RBP + -4) = 0x3f80000000000000;
  *unaff_RBP = unaff_RBP[8];
  unaff_RBP[-2] = unaff_XMM9_Da;
  unaff_RBP[-1] = unaff_RBP[4];
  (**(code **)(*plVar2 + 0x98))(plVar2,unaff_RBP + -6,1);
  return;
}





// 函数: void FUN_18057e505(void)
void FUN_18057e505(void)

{
  return;
}





// 函数: void FUN_18057e520(int64_t param_1,uint64_t param_2)
void FUN_18057e520(int64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  
  lVar1 = *(int64_t *)(param_1 + 0x20);
  uVar6 = param_2 % (uint64_t)*(uint *)(param_1 + 0x28);
  for (puVar7 = *(uint64_t **)(lVar1 + uVar6 * 8); puVar7 != (uint64_t *)0x0;
      puVar7 = (uint64_t *)puVar7[7]) {
    if (param_2 == *puVar7) goto LAB_18057e570;
  }
  puVar7 = (uint64_t *)0x0;
LAB_18057e570:
  uVar2 = *(uint64_t *)(param_1 + 0x28);
  if (puVar7 == (uint64_t *)0x0) {
    puVar7 = *(uint64_t **)(lVar1 + uVar2 * 8);
    uVar6 = uVar2;
  }
  puVar8 = (uint64_t *)(lVar1 + uVar6 * 8);
  if (puVar7 == *(uint64_t **)(lVar1 + uVar2 * 8)) {
    return;
  }
  puVar3 = (uint64_t *)puVar7[1];
  (**(code **)(**(int64_t **)(param_1 + 8) + 0x68))
            (*(int64_t **)(param_1 + 8),puVar3,
             CONCAT71((uint7)(uint3)(*(uint *)(param_1 + 0x28) >> 8),1));
  (**(code **)*puVar3)(puVar3);
  uVar6 = puVar7[7];
  puVar3 = puVar8;
  while (uVar6 == 0) {
    puVar4 = puVar3 + 1;
    puVar3 = puVar3 + 1;
    uVar6 = *puVar4;
  }
  puVar4 = (uint64_t *)*puVar8;
  puVar5 = (uint64_t *)puVar4[7];
  if (puVar4 == puVar7) {
    *puVar8 = puVar5;
  }
  else {
    for (; puVar5 != puVar7; puVar5 = (uint64_t *)puVar5[7]) {
      puVar4 = puVar5;
    }
    puVar4[7] = puVar5[7];
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(puVar7);
}





// 函数: void FUN_18057e592(int64_t *param_1)
void FUN_18057e592(int64_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t unaff_RDI;
  int64_t *unaff_R14;
  
  puVar3 = *(uint64_t **)(unaff_RDI + 8);
  (**(code **)(*param_1 + 0x68))(param_1,puVar3);
  (**(code **)*puVar3)(puVar3);
  lVar4 = *(int64_t *)(unaff_RDI + 0x38);
  plVar2 = unaff_R14;
  while (lVar4 == 0) {
    plVar1 = plVar2 + 1;
    plVar2 = plVar2 + 1;
    lVar4 = *plVar1;
  }
  lVar4 = *unaff_R14;
  lVar5 = *(int64_t *)(lVar4 + 0x38);
  if (lVar4 == unaff_RDI) {
    *unaff_R14 = lVar5;
  }
  else {
    for (; lVar5 != unaff_RDI; lVar5 = *(int64_t *)(lVar5 + 0x38)) {
      lVar4 = lVar5;
    }
    *(uint64_t *)(lVar4 + 0x38) = *(uint64_t *)(lVar5 + 0x38);
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}





// 函数: void FUN_18057e6a6(void)
void FUN_18057e6a6(void)

{
  return;
}





// 函数: void FUN_18057e6d0(int64_t param_1)
void FUN_18057e6d0(int64_t param_1)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  int64_t lVar7;
  
  plVar3 = *(int64_t **)(param_1 + 0x20);
  lVar7 = *plVar3;
  plVar5 = plVar3;
  if (lVar7 == 0) {
    lVar7 = plVar3[1];
    plVar4 = plVar3;
    while (plVar5 = plVar4 + 1, lVar7 == 0) {
      lVar7 = plVar4[2];
      plVar4 = plVar5;
    }
  }
  if (lVar7 != plVar3[*(int64_t *)(param_1 + 0x28)]) {
    do {
      (**(code **)**(uint64_t **)(lVar7 + 8))();
      lVar7 = *(int64_t *)(lVar7 + 0x38);
      while (lVar7 == 0) {
        plVar3 = plVar5 + 1;
        plVar5 = plVar5 + 1;
        lVar7 = *plVar3;
      }
    } while (lVar7 != *(int64_t *)
                       (*(int64_t *)(param_1 + 0x20) + *(int64_t *)(param_1 + 0x28) * 8));
  }
  plVar3 = *(int64_t **)(param_1 + 0x50);
  lVar7 = *plVar3;
  plVar5 = plVar3;
  if (lVar7 == 0) {
    lVar7 = plVar3[1];
    while (plVar5 = plVar5 + 1, lVar7 == 0) {
      lVar7 = plVar5[1];
    }
  }
  if (lVar7 != plVar3[*(int64_t *)(param_1 + 0x58)]) {
    do {
      (**(code **)**(uint64_t **)(lVar7 + 8))();
      lVar7 = *(int64_t *)(lVar7 + 0x10);
      while (lVar7 == 0) {
        plVar3 = plVar5 + 1;
        plVar5 = plVar5 + 1;
        lVar7 = *plVar3;
      }
    } while (lVar7 != *(int64_t *)
                       (*(int64_t *)(param_1 + 0x50) + *(int64_t *)(param_1 + 0x58) * 8));
  }
  if (*(int64_t **)(param_1 + 8) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 8) + 8))();
    *(uint64_t *)(param_1 + 8) = 0;
  }
  uVar1 = *(uint64_t *)(param_1 + 0x58);
  uVar6 = 0;
  lVar7 = *(int64_t *)(param_1 + 0x50);
  if (uVar1 == 0) {
    *(uint64_t *)(param_1 + 0x60) = 0;
  }
  else {
    do {
      lVar2 = *(int64_t *)(lVar7 + uVar6 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer(lVar2);
      }
      *(uint64_t *)(lVar7 + uVar6 * 8) = 0;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
    *(uint64_t *)(param_1 + 0x60) = 0;
  }
  return;
}



uint64_t FUN_18057e800(uint64_t param_1,uint64_t param_2)

{
  FUN_18057e880();
  if ((param_2 & 1) != 0) {
    free(param_1,0x78);
  }
  return param_1;
}





// 函数: void FUN_18057e840(int64_t param_1)
void FUN_18057e840(int64_t param_1)

{
  int *piVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  
  uVar6 = *(uint64_t *)(param_1 + 0x10);
  lVar4 = *(int64_t *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(int64_t *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (uint64_t)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((int64_t)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (uint64_t)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemCore_DebugHandler();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





