#include "TaleWorlds.Native.Split.h"

// 03_rendering_part363.c - 2 个函数

// 函数: void FUN_180466529(uint64_t param_1,int64_t param_2)
void FUN_180466529(uint64_t param_1,int64_t param_2)

{
  uint64_t *unaff_RBX;
  float *unaff_RBP;
  int64_t unaff_RSI;
  uint unaff_EDI;
  uint64_t uVar1;
  int64_t in_R11;
  uint64_t unaff_R14;
  float fVar2;
  float unaff_XMM6_Da;
  uint64_t in_stack_00000030;
  uint64_t in_stack_00000038;
  uint64_t in_stack_00000040;
  uint64_t in_stack_00000048;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000054;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  int32_t uStack000000000000006c;
  
  *(uint64_t *)(in_R11 + 8) = unaff_R14;
  uVar1 = (uint64_t)unaff_EDI;
  do {
    FUN_180463870(&stack0x00000030,*(uint64_t *)(uVar1 + param_2),
                  *(uint64_t *)(uVar1 + 8 + param_2));
    fVar2 = (*unaff_RBP - fStack0000000000000060) * (*unaff_RBP - fStack0000000000000060) +
            (unaff_RBP[1] - fStack0000000000000064) * (unaff_RBP[1] - fStack0000000000000064) +
            (unaff_RBP[2] - fStack0000000000000068) * (unaff_RBP[2] - fStack0000000000000068);
    if (fVar2 < unaff_XMM6_Da) {
      *unaff_RBX = in_stack_00000030;
      unaff_RBX[1] = in_stack_00000038;
      unaff_RBX[2] = in_stack_00000040;
      unaff_RBX[3] = in_stack_00000048;
      *(int32_t *)(unaff_RBX + 4) = uStack0000000000000050;
      *(int32_t *)((int64_t)unaff_RBX + 0x24) = uStack0000000000000054;
      *(int32_t *)(unaff_RBX + 5) = uStack0000000000000058;
      *(int32_t *)((int64_t)unaff_RBX + 0x2c) = uStack000000000000005c;
      *(float *)(unaff_RBX + 6) = fStack0000000000000060;
      *(float *)((int64_t)unaff_RBX + 0x34) = fStack0000000000000064;
      *(float *)(unaff_RBX + 7) = fStack0000000000000068;
      *(int32_t *)((int64_t)unaff_RBX + 0x3c) = uStack000000000000006c;
      unaff_XMM6_Da = fVar2;
    }
    param_2 = *(int64_t *)(unaff_RSI + 0xd0);
    unaff_EDI = unaff_EDI + 1;
    uVar1 = uVar1 + 8;
  } while ((uint64_t)(int64_t)(int)unaff_EDI <
           (*(int64_t *)(unaff_RSI + 0xd8) - param_2 >> 3) - 1U);
  return;
}





// 函数: void FUN_1804665e5(void)
void FUN_1804665e5(void)

{
  return;
}



uint64_t * FUN_180466610(int64_t param_1,uint64_t *param_2,int32_t param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1b0);
  if (iVar1 == 0) {
    FUN_1804649e0(param_2,*(uint64_t *)(*(int64_t *)(param_1 + 0xd0) + (uint64_t)param_4 * 8),
                  *(uint64_t *)(*(int64_t *)(param_1 + 0xd0) + (uint64_t)(param_4 + 1) * 8),
                  param_3);
    return param_2;
  }
  if (iVar1 == 2) {
    FUN_180463cd0(param_2,*(uint64_t *)(*(int64_t *)(param_1 + 0xd0) + (uint64_t)param_4 * 8),
                  *(uint64_t *)(*(int64_t *)(param_1 + 0xd0) + (uint64_t)(param_4 + 1) * 8),
                  param_3);
    return param_2;
  }
  if (iVar1 == 1) {
    FUN_1804643c0(param_2,*(uint64_t *)(*(int64_t *)(param_1 + 0xd0) + (uint64_t)param_4 * 8),
                  *(uint64_t *)(*(int64_t *)(param_1 + 0xd0) + (uint64_t)(param_4 + 1) * 8),
                  param_3);
    return param_2;
  }
  *param_2 = 0x3f800000;
  param_2[1] = 0;
  param_2[2] = 0x3f80000000000000;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0x3f800000;
  param_2[6] = 0;
  param_2[7] = 0x3f80000000000000;
  *(int32_t *)(param_2 + 8) = 0x3f800000;
  *(int32_t *)((int64_t)param_2 + 0x44) = 0x3f800000;
  *(int32_t *)(param_2 + 9) = 0x3f800000;
  *(int32_t *)((int64_t)param_2 + 0x4c) = 0x7f7fffff;
  return param_2;
}



uint64_t * FUN_180466700(int64_t param_1,uint64_t *param_2,int32_t param_3)

{
  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0xf0)) {
    FUN_180467500();
    *(int32_t *)(param_1 + 0xf0) = *(int32_t *)(param_1 + 0x70);
  }
  if (*(int64_t *)(param_1 + 0xd8) - *(int64_t *)(param_1 + 0xd0) >> 3 != 0) {
    if (*(int *)(param_1 + 0x1b0) == 0) {
      FUN_1804656d0(param_1,param_2,param_3);
      return param_2;
    }
    if (*(int *)(param_1 + 0x1b0) - 1U < 2) {
      FUN_180465950(param_1,param_2,param_3);
      return param_2;
    }
  }
  *param_2 = 0x3f800000;
  param_2[1] = 0;
  param_2[2] = 0x3f80000000000000;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0x3f800000;
  param_2[6] = 0;
  param_2[7] = 0x3f80000000000000;
  *(int32_t *)(param_2 + 8) = 0x3f800000;
  *(int32_t *)((int64_t)param_2 + 0x44) = 0x3f800000;
  *(int32_t *)(param_2 + 9) = 0x3f800000;
  *(int32_t *)((int64_t)param_2 + 0x4c) = 0x7f7fffff;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



