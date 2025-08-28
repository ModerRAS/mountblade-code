#include "TaleWorlds.Native.Split.h"
// 03_rendering_part363.c - 2 个函数
// 函数: void UISystem_66529(uint64_t param_1,int64_t param_2)
void UISystem_66529(uint64_t param_1,int64_t param_2)
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
  uint64_t local_var_30;
  uint64_t local_var_38;
  uint64_t local_var_40;
  uint64_t local_var_48;
  int32_t local_buffer_50;
  int32_t local_buffer_54;
  int32_t local_buffer_58;
  int32_t local_buffer_5c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  int32_t local_buffer_6c;
  *(uint64_t *)(in_R11 + 8) = unaff_R14;
  uVar1 = (uint64_t)unaff_EDI;
  do {
    UISystem_63870(&local_buffer_00000030,*(uint64_t *)(uVar1 + param_2),
                  *(uint64_t *)(uVar1 + 8 + param_2));
    fVar2 = (*unaff_RBP - fStack0000000000000060) * (*unaff_RBP - fStack0000000000000060) +
            (unaff_RBP[1] - fStack0000000000000064) * (unaff_RBP[1] - fStack0000000000000064) +
            (unaff_RBP[2] - fStack0000000000000068) * (unaff_RBP[2] - fStack0000000000000068);
    if (fVar2 < unaff_XMM6_Da) {
      *unaff_RBX = local_var_30;
      unaff_RBX[1] = local_var_38;
      unaff_RBX[2] = local_var_40;
      unaff_RBX[3] = local_var_48;
      *(int32_t *)(unaff_RBX + 4) = local_buffer_50;
      *(int32_t *)((int64_t)unaff_RBX + 0x24) = local_buffer_54;
      *(int32_t *)(unaff_RBX + 5) = local_buffer_58;
      *(int32_t *)((int64_t)unaff_RBX + 0x2c) = local_buffer_5c;
      *(float *)(unaff_RBX + 6) = fStack0000000000000060;
      *(float *)((int64_t)unaff_RBX + 0x34) = fStack0000000000000064;
      *(float *)(unaff_RBX + 7) = fStack0000000000000068;
      *(int32_t *)((int64_t)unaff_RBX + 0x3c) = local_buffer_6c;
      unaff_XMM6_Da = fVar2;
    }
    param_2 = *(int64_t *)(unaff_RSI + 0xd0);
    unaff_EDI = unaff_EDI + 1;
    uVar1 = uVar1 + 8;
  } while ((uint64_t)(int64_t)(int)unaff_EDI <
           (*(int64_t *)(unaff_RSI + 0xd8) - param_2 >> 3) - 1U);
  return;
}
// 函数: void UISystem_665e5(void)
void UISystem_665e5(void)
{
  return;
}
uint64_t * UISystem_66610(int64_t param_1,uint64_t *param_2,int32_t param_3,uint param_4)
{
  int iVar1;
  iVar1 = *(int *)(param_1 + 0x1b0);
  if (iVar1 == 0) {
    UISystem_649e0(param_2,*(uint64_t *)(*(int64_t *)(param_1 + 0xd0) + (uint64_t)param_4 * 8),
                  *(uint64_t *)(*(int64_t *)(param_1 + 0xd0) + (uint64_t)(param_4 + 1) * 8),
                  param_3);
    return param_2;
  }
  if (iVar1 == 2) {
    UISystem_63cd0(param_2,*(uint64_t *)(*(int64_t *)(param_1 + 0xd0) + (uint64_t)param_4 * 8),
                  *(uint64_t *)(*(int64_t *)(param_1 + 0xd0) + (uint64_t)(param_4 + 1) * 8),
                  param_3);
    return param_2;
  }
  if (iVar1 == 1) {
    UISystem_643c0(param_2,*(uint64_t *)(*(int64_t *)(param_1 + 0xd0) + (uint64_t)param_4 * 8),
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
uint64_t * UISystem_66700(int64_t param_1,uint64_t *param_2,int32_t param_3)
{
  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0xf0)) {
    UISystem_67500();
    *(int32_t *)(param_1 + 0xf0) = *(int32_t *)(param_1 + 0x70);
  }
  if (*(int64_t *)(param_1 + 0xd8) - *(int64_t *)(param_1 + 0xd0) >> 3 != 0) {
    if (*(int *)(param_1 + 0x1b0) == 0) {
      UISystem_656d0(param_1,param_2,param_3);
      return param_2;
    }
    if (*(int *)(param_1 + 0x1b0) - 1U < 2) {
      UISystem_65950(param_1,param_2,param_3);
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