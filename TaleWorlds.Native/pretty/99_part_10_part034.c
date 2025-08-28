#include "TaleWorlds.Native.Split.h"

// 99_part_10_part034.c - 1 个函数

// 函数: void FUN_1806bae08(void)
void FUN_1806bae08(void)

{
  int64_t in_RAX;
  int64_t lVar1;
  float *unaff_RBX;
  float *unaff_RBP;
  int64_t *unaff_RSI;
  int32_t unaff_EDI;
  int64_t in_R11;
  int32_t uVar2;
  int32_t unaff_XMM6_Da;
  float fVar3;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  float fVar4;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  float fVar5;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  float fVar6;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  float fVar7;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  int32_t unaff_XMM12_Da;
  int32_t unaff_XMM12_Db;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM12_Dd;
  int32_t unaff_XMM13_Da;
  float fVar8;
  int32_t unaff_XMM13_Db;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM13_Dd;
  int32_t unaff_XMM14_Da;
  float fVar9;
  int32_t unaff_XMM14_Db;
  int32_t unaff_XMM14_Dc;
  int32_t unaff_XMM14_Dd;
  float in_stack_00000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  int8_t in_stack_00000140;
  
  *(int32_t *)(in_R11 + -0x18) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x14) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x10) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0xc) = unaff_XMM6_Dd;
  *(int32_t *)(in_R11 + -0x28) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x24) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x20) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x1c) = unaff_XMM7_Dd;
  *(int32_t *)(in_R11 + -0x38) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -0x34) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x30) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x2c) = unaff_XMM8_Dd;
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM9_Dd;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM10_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM10_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM10_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM10_Dd;
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM11_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM11_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM11_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM11_Dd;
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM12_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM12_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM12_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM12_Dd;
  *(int32_t *)(in_R11 + -0x88) = unaff_XMM13_Da;
  *(int32_t *)(in_R11 + -0x84) = unaff_XMM13_Db;
  *(int32_t *)(in_R11 + -0x80) = unaff_XMM13_Dc;
  *(int32_t *)(in_R11 + -0x7c) = unaff_XMM13_Dd;
  *(int32_t *)(in_R11 + -0x98) = unaff_XMM14_Da;
  *(int32_t *)(in_R11 + -0x94) = unaff_XMM14_Db;
  *(int32_t *)(in_R11 + -0x90) = unaff_XMM14_Dc;
  *(int32_t *)(in_R11 + -0x8c) = unaff_XMM14_Dd;
  uVar2 = (**(code **)(in_RAX + 0x90))();
  lVar1 = (**(code **)(*unaff_RSI + 0xd8))(uVar2,&stack0x00000060);
  fVar9 = *(float *)(lVar1 + 0x10) + *(float *)(lVar1 + 0x10);
  fVar6 = *(float *)(lVar1 + 0x14) + *(float *)(lVar1 + 0x14);
  fVar8 = *(float *)(lVar1 + 0x18) + *(float *)(lVar1 + 0x18);
  fVar7 = fStack000000000000004c * fStack000000000000004c - 0.5;
  fVar4 = fStack0000000000000044 * fVar6 + fStack0000000000000040 * fVar9 +
          fStack0000000000000048 * fVar8;
  fVar5 = *unaff_RBX -
          ((fStack0000000000000044 * fVar8 - fStack0000000000000048 * fVar6) *
           fStack000000000000004c + fVar7 * fVar9 + fStack0000000000000040 * fVar4 +
          fStack0000000000000050);
  fVar3 = unaff_RBX[1] -
          ((fStack0000000000000048 * fVar9 - fStack0000000000000040 * fVar8) *
           fStack000000000000004c + fVar7 * fVar6 + fStack0000000000000044 * fVar4 +
          fStack0000000000000054);
  fVar6 = unaff_RBX[2] -
          ((fStack0000000000000040 * fVar6 - fStack0000000000000044 * fVar9) *
           fStack000000000000004c + fVar7 * fVar8 + fStack0000000000000048 * fVar4 +
          in_stack_00000058);
  in_stack_00000030 = fVar3 * unaff_RBP[2] - fVar6 * unaff_RBP[1];
  fVar4 = fVar5 * unaff_RBP[2];
  in_stack_00000038 = fVar5 * unaff_RBP[1] - fVar3 * *unaff_RBP;
  fStack0000000000000034 = fVar6 * *unaff_RBP - fVar4;
  uVar2 = (**(code **)(*unaff_RSI + 0x170))(fVar4,in_stack_00000030,unaff_EDI,in_stack_00000140);
  (**(code **)(*unaff_RSI + 0x178))(uVar2,&stack0x00000030,unaff_EDI,in_stack_00000140);
  return;
}






