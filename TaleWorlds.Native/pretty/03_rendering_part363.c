#include "TaleWorlds.Native.Split.h"

// 03_rendering_part363.c - 2 个函数

// 函数: void FUN_180466529(undefined8 param_1,longlong param_2)
void FUN_180466529(undefined8 param_1,longlong param_2)

{
  undefined8 *unaff_RBX;
  float *unaff_RBP;
  longlong unaff_RSI;
  uint unaff_EDI;
  ulonglong uVar1;
  longlong in_R11;
  undefined8 unaff_R14;
  float fVar2;
  float unaff_XMM6_Da;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  undefined4 uStack000000000000006c;
  
  *(undefined8 *)(in_R11 + 8) = unaff_R14;
  uVar1 = (ulonglong)unaff_EDI;
  do {
    FUN_180463870(&stack0x00000030,*(undefined8 *)(uVar1 + param_2),
                  *(undefined8 *)(uVar1 + 8 + param_2));
    fVar2 = (*unaff_RBP - fStack0000000000000060) * (*unaff_RBP - fStack0000000000000060) +
            (unaff_RBP[1] - fStack0000000000000064) * (unaff_RBP[1] - fStack0000000000000064) +
            (unaff_RBP[2] - fStack0000000000000068) * (unaff_RBP[2] - fStack0000000000000068);
    if (fVar2 < unaff_XMM6_Da) {
      *unaff_RBX = in_stack_00000030;
      unaff_RBX[1] = in_stack_00000038;
      unaff_RBX[2] = in_stack_00000040;
      unaff_RBX[3] = in_stack_00000048;
      *(undefined4 *)(unaff_RBX + 4) = uStack0000000000000050;
      *(undefined4 *)((longlong)unaff_RBX + 0x24) = uStack0000000000000054;
      *(undefined4 *)(unaff_RBX + 5) = uStack0000000000000058;
      *(undefined4 *)((longlong)unaff_RBX + 0x2c) = uStack000000000000005c;
      *(float *)(unaff_RBX + 6) = fStack0000000000000060;
      *(float *)((longlong)unaff_RBX + 0x34) = fStack0000000000000064;
      *(float *)(unaff_RBX + 7) = fStack0000000000000068;
      *(undefined4 *)((longlong)unaff_RBX + 0x3c) = uStack000000000000006c;
      unaff_XMM6_Da = fVar2;
    }
    param_2 = *(longlong *)(unaff_RSI + 0xd0);
    unaff_EDI = unaff_EDI + 1;
    uVar1 = uVar1 + 8;
  } while ((ulonglong)(longlong)(int)unaff_EDI <
           (*(longlong *)(unaff_RSI + 0xd8) - param_2 >> 3) - 1U);
  return;
}





// 函数: void FUN_1804665e5(void)
void FUN_1804665e5(void)

{
  return;
}



undefined8 * FUN_180466610(longlong param_1,undefined8 *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1b0);
  if (iVar1 == 0) {
    FUN_1804649e0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)param_4 * 8),
                  *(undefined8 *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)(param_4 + 1) * 8),
                  param_3);
    return param_2;
  }
  if (iVar1 == 2) {
    FUN_180463cd0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)param_4 * 8),
                  *(undefined8 *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)(param_4 + 1) * 8),
                  param_3);
    return param_2;
  }
  if (iVar1 == 1) {
    FUN_1804643c0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)param_4 * 8),
                  *(undefined8 *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)(param_4 + 1) * 8),
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
  *(undefined4 *)(param_2 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0x44) = 0x3f800000;
  *(undefined4 *)(param_2 + 9) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0x7f7fffff;
  return param_2;
}



undefined8 * FUN_180466700(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0xf0)) {
    FUN_180467500();
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0x70);
  }
  if (*(longlong *)(param_1 + 0xd8) - *(longlong *)(param_1 + 0xd0) >> 3 != 0) {
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
  *(undefined4 *)(param_2 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0x44) = 0x3f800000;
  *(undefined4 *)(param_2 + 9) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0x7f7fffff;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



