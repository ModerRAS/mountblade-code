#include "TaleWorlds.Native.Split.h"

// 03_rendering_part016.c - 10 个函数

// 函数: void FUN_180276f8c(longlong param_1,longlong param_2)
void FUN_180276f8c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint64_t uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong unaff_RBP;
  longlong unaff_RDI;
  char unaff_R14B;
  int32_t uVar5;
  int32_t extraout_XMM0_Da;
  uint64_t in_XMM1_Qa;
  int32_t in_XMM1_Dc;
  int32_t in_XMM1_Dd;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int32_t in_stack_00000070;
  int32_t in_stack_00000078;
  int32_t in_stack_00000080;
  int32_t in_stack_00000088;
  int32_t in_stack_00000090;
  int32_t in_stack_00000098;
  int32_t in_stack_000000a0;
  int32_t in_stack_000000a8;
  int32_t in_stack_000000b0;
  int32_t in_stack_000000b8;
  int32_t in_stack_000000c0;
  int32_t in_stack_000000c8;
  int32_t in_stack_000000d0;
  int32_t in_stack_000000d8;
  int32_t in_stack_000000e0;
  int32_t in_stack_000000e8;
  int32_t in_stack_000000f0;
  int32_t in_stack_000000f8;
  int32_t in_stack_00000100;
  int32_t in_stack_00000108;
  
  uVar5 = 0;
  *(int32_t *)(param_2 + 0x20) = 0;
  *(int32_t *)(param_2 + 0x24) = 0;
  *(int32_t *)(param_2 + 0x28) = 0;
  *(int32_t *)(param_2 + 0x2c) = 0x7f7fffff;
  *(int *)(param_2 + 0x10) = (int)in_XMM1_Qa;
  *(int *)(param_2 + 0x14) = (int)((ulonglong)in_XMM1_Qa >> 0x20);
  *(int32_t *)(param_2 + 0x18) = in_XMM1_Dc;
  *(int32_t *)(param_2 + 0x1c) = in_XMM1_Dd;
  plVar4 = *(longlong **)(param_1 + 0x38);
  if (plVar4 < *(longlong **)(param_1 + 0x40)) {
    do {
      lVar1 = *plVar4;
      if (unaff_R14B != '\0') {
        uVar5 = FUN_180075b70(lVar1);
      }
      if (((*(byte *)(lVar1 + 0x100) & 0x20) == 0) || (*(longlong *)(unaff_RBP + 0x28) == 0)) {
        lVar3 = lVar1 + 0x120;
      }
      else {
        lVar3 = FUN_180194940(lVar1 + 0x120,&stack0x00000030,*(longlong *)(unaff_RBP + 0x28) + 0x70)
        ;
        uVar5 = extraout_XMM0_Da;
      }
      uVar5 = FUN_18063a240(uVar5,lVar1 + 0x274,lVar3);
      plVar4 = plVar4 + 2;
    } while (plVar4 < *(longlong **)(unaff_RBP + 0x40));
  }
  if (((*(longlong *)(unaff_RBP + 0x40) - (longlong)*(longlong **)(unaff_RBP + 0x38) &
       0xfffffffffffffff0U) == 0x10) &&
     (lVar1 = **(longlong **)(unaff_RBP + 0x38), (*(uint *)(lVar1 + 0x100) & 0x4000000) == 0)) {
    uVar2 = *(uint64_t *)(lVar1 + 0x29c);
    *(uint64_t *)(unaff_RDI + 0x20) = *(uint64_t *)(lVar1 + 0x294);
    *(uint64_t *)(unaff_RDI + 0x28) = uVar2;
    *(int32_t *)(unaff_RDI + 0x30) = *(int32_t *)(**(longlong **)(unaff_RBP + 0x38) + 0x2a4);
  }
  else {
    FUN_1800b9f60();
    plVar4 = *(longlong **)(unaff_RBP + 0x38);
    fVar8 = 0.0;
    if (plVar4 < *(longlong **)(unaff_RBP + 0x40)) {
      do {
        lVar1 = *plVar4;
        if ((*(uint *)(lVar1 + 0x100) & 0x4000000) == 0) {
          fVar9 = *(float *)(lVar1 + 0x294);
          fVar10 = *(float *)(lVar1 + 0x298);
          fVar11 = *(float *)(lVar1 + 0x29c);
          fVar6 = *(float *)(lVar1 + 0x2a4);
        }
        else {
          fVar6 = *(float *)(lVar1 + 0x298);
          fVar11 = *(float *)(lVar1 + 0x294);
          fVar7 = *(float *)(lVar1 + 0x29c);
          fVar9 = *(float *)(lVar1 + 0x130) * fVar6 + *(float *)(lVar1 + 0x120) * fVar11 +
                  *(float *)(lVar1 + 0x140) * fVar7 + *(float *)(lVar1 + 0x150);
          fVar10 = *(float *)(lVar1 + 0x134) * fVar6 + *(float *)(lVar1 + 0x124) * fVar11 +
                   *(float *)(lVar1 + 0x144) * fVar7 + *(float *)(lVar1 + 0x154);
          fVar11 = *(float *)(lVar1 + 0x138) * fVar6 + *(float *)(lVar1 + 0x128) * fVar11 +
                   *(float *)(lVar1 + 0x148) * fVar7 + *(float *)(lVar1 + 0x158);
          fVar6 = *(float *)(lVar1 + 0x140) * *(float *)(lVar1 + 0x140) +
                  *(float *)(lVar1 + 0x144) * *(float *)(lVar1 + 0x144) +
                  *(float *)(lVar1 + 0x148) * *(float *)(lVar1 + 0x148);
          fVar7 = *(float *)(lVar1 + 0x130) * *(float *)(lVar1 + 0x130) +
                  *(float *)(lVar1 + 0x134) * *(float *)(lVar1 + 0x134) +
                  *(float *)(lVar1 + 0x138) * *(float *)(lVar1 + 0x138);
          fVar12 = *(float *)(lVar1 + 0x120) * *(float *)(lVar1 + 0x120) +
                   *(float *)(lVar1 + 0x124) * *(float *)(lVar1 + 0x124) +
                   *(float *)(lVar1 + 0x128) * *(float *)(lVar1 + 0x128);
          if (fVar12 <= fVar7) {
            if (fVar6 <= fVar7) {
              fVar6 = fVar7;
            }
          }
          else if (fVar6 <= fVar12) {
            fVar6 = fVar12;
          }
          if ((fVar6 - 1.0 <= -1e-06) || (1e-06 <= fVar6 - 1.0)) {
            fVar6 = SQRT(fVar6) * *(float *)(lVar1 + 0x2a4);
          }
          else {
            fVar6 = *(float *)(lVar1 + 0x2a4) * 1.0;
          }
        }
        fVar11 = *(float *)(unaff_RDI + 0x28) - fVar11;
        fVar10 = *(float *)(unaff_RDI + 0x24) - fVar10;
        fVar9 = *(float *)(unaff_RDI + 0x20) - fVar9;
        fVar10 = fVar10 * fVar10 + fVar9 * fVar9 + fVar11 * fVar11;
        fVar9 = fVar8 - fVar6;
        if (fVar9 <= 0.0) {
          fVar9 = 0.0;
        }
        if (fVar9 * fVar9 < fVar10) {
          fVar8 = SQRT(fVar10) + fVar6;
        }
        plVar4 = plVar4 + 2;
      } while (plVar4 < *(longlong **)(unaff_RBP + 0x40));
      if ((0.0 < fVar8) &&
         (fVar8 < *(float *)(unaff_RDI + 0x30) || fVar8 == *(float *)(unaff_RDI + 0x30))) {
        *(float *)(unaff_RDI + 0x30) = fVar8;
      }
    }
  }
  return;
}





// 函数: void FUN_180276fad(int32_t param_1)
void FUN_180276fad(int32_t param_1)

{
  longlong lVar1;
  uint64_t uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  char unaff_R14B;
  int32_t extraout_XMM0_Da;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int32_t in_stack_00000070;
  int32_t in_stack_00000078;
  int32_t in_stack_00000080;
  int32_t in_stack_00000088;
  int32_t in_stack_00000090;
  int32_t in_stack_00000098;
  int32_t in_stack_000000a0;
  int32_t in_stack_000000a8;
  int32_t in_stack_000000b0;
  int32_t in_stack_000000b8;
  int32_t in_stack_000000c0;
  int32_t in_stack_000000c8;
  int32_t in_stack_000000d0;
  int32_t in_stack_000000d8;
  int32_t in_stack_000000e0;
  int32_t in_stack_000000e8;
  int32_t in_stack_000000f0;
  int32_t in_stack_000000f8;
  int32_t in_stack_00000100;
  int32_t in_stack_00000108;
  
  do {
    lVar1 = *unaff_RSI;
    if (unaff_R14B != '\0') {
      param_1 = FUN_180075b70(lVar1);
    }
    if (((*(byte *)(lVar1 + 0x100) & 0x20) == 0) || (*(longlong *)(unaff_RBP + 0x28) == 0)) {
      lVar3 = lVar1 + 0x120;
    }
    else {
      lVar3 = FUN_180194940(lVar1 + 0x120,&stack0x00000030,*(longlong *)(unaff_RBP + 0x28) + 0x70);
      param_1 = extraout_XMM0_Da;
    }
    param_1 = FUN_18063a240(param_1,lVar1 + 0x274,lVar3);
    unaff_RSI = unaff_RSI + 2;
  } while (unaff_RSI < *(longlong **)(unaff_RBP + 0x40));
  if (((*(longlong *)(unaff_RBP + 0x40) - (longlong)*(longlong **)(unaff_RBP + 0x38) &
       0xfffffffffffffff0U) == 0x10) &&
     (lVar1 = **(longlong **)(unaff_RBP + 0x38), (*(uint *)(lVar1 + 0x100) & 0x4000000) == 0)) {
    uVar2 = *(uint64_t *)(lVar1 + 0x29c);
    *(uint64_t *)(unaff_RDI + 0x20) = *(uint64_t *)(lVar1 + 0x294);
    *(uint64_t *)(unaff_RDI + 0x28) = uVar2;
    *(int32_t *)(unaff_RDI + 0x30) = *(int32_t *)(**(longlong **)(unaff_RBP + 0x38) + 0x2a4);
  }
  else {
    FUN_1800b9f60();
    plVar4 = *(longlong **)(unaff_RBP + 0x38);
    fVar7 = 0.0;
    if (plVar4 < *(longlong **)(unaff_RBP + 0x40)) {
      do {
        lVar1 = *plVar4;
        if ((*(uint *)(lVar1 + 0x100) & 0x4000000) == 0) {
          fVar8 = *(float *)(lVar1 + 0x294);
          fVar9 = *(float *)(lVar1 + 0x298);
          fVar10 = *(float *)(lVar1 + 0x29c);
          fVar5 = *(float *)(lVar1 + 0x2a4);
        }
        else {
          fVar5 = *(float *)(lVar1 + 0x298);
          fVar10 = *(float *)(lVar1 + 0x294);
          fVar6 = *(float *)(lVar1 + 0x29c);
          fVar8 = *(float *)(lVar1 + 0x130) * fVar5 + *(float *)(lVar1 + 0x120) * fVar10 +
                  *(float *)(lVar1 + 0x140) * fVar6 + *(float *)(lVar1 + 0x150);
          fVar9 = *(float *)(lVar1 + 0x134) * fVar5 + *(float *)(lVar1 + 0x124) * fVar10 +
                  *(float *)(lVar1 + 0x144) * fVar6 + *(float *)(lVar1 + 0x154);
          fVar10 = *(float *)(lVar1 + 0x138) * fVar5 + *(float *)(lVar1 + 0x128) * fVar10 +
                   *(float *)(lVar1 + 0x148) * fVar6 + *(float *)(lVar1 + 0x158);
          fVar5 = *(float *)(lVar1 + 0x140) * *(float *)(lVar1 + 0x140) +
                  *(float *)(lVar1 + 0x144) * *(float *)(lVar1 + 0x144) +
                  *(float *)(lVar1 + 0x148) * *(float *)(lVar1 + 0x148);
          fVar6 = *(float *)(lVar1 + 0x130) * *(float *)(lVar1 + 0x130) +
                  *(float *)(lVar1 + 0x134) * *(float *)(lVar1 + 0x134) +
                  *(float *)(lVar1 + 0x138) * *(float *)(lVar1 + 0x138);
          fVar11 = *(float *)(lVar1 + 0x120) * *(float *)(lVar1 + 0x120) +
                   *(float *)(lVar1 + 0x124) * *(float *)(lVar1 + 0x124) +
                   *(float *)(lVar1 + 0x128) * *(float *)(lVar1 + 0x128);
          if (fVar11 <= fVar6) {
            if (fVar5 <= fVar6) {
              fVar5 = fVar6;
            }
          }
          else if (fVar5 <= fVar11) {
            fVar5 = fVar11;
          }
          if ((fVar5 - 1.0 <= -1e-06) || (1e-06 <= fVar5 - 1.0)) {
            fVar5 = SQRT(fVar5) * *(float *)(lVar1 + 0x2a4);
          }
          else {
            fVar5 = *(float *)(lVar1 + 0x2a4) * 1.0;
          }
        }
        fVar10 = *(float *)(unaff_RDI + 0x28) - fVar10;
        fVar9 = *(float *)(unaff_RDI + 0x24) - fVar9;
        fVar8 = *(float *)(unaff_RDI + 0x20) - fVar8;
        fVar9 = fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10;
        fVar8 = fVar7 - fVar5;
        if (fVar8 <= 0.0) {
          fVar8 = 0.0;
        }
        if (fVar8 * fVar8 < fVar9) {
          fVar7 = SQRT(fVar9) + fVar5;
        }
        plVar4 = plVar4 + 2;
      } while (plVar4 < *(longlong **)(unaff_RBP + 0x40));
      if ((0.0 < fVar7) &&
         (fVar7 < *(float *)(unaff_RDI + 0x30) || fVar7 == *(float *)(unaff_RDI + 0x30))) {
        *(float *)(unaff_RDI + 0x30) = fVar7;
      }
    }
  }
  return;
}





// 函数: void FUN_180277019(void)
void FUN_180277019(void)

{
  longlong lVar1;
  uint64_t uVar2;
  longlong *plVar3;
  longlong unaff_RBP;
  longlong unaff_RDI;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (((*(longlong *)(unaff_RBP + 0x40) - (longlong)*(longlong **)(unaff_RBP + 0x38) &
       0xfffffffffffffff0U) == 0x10) &&
     (lVar1 = **(longlong **)(unaff_RBP + 0x38), (*(uint *)(lVar1 + 0x100) & 0x4000000) == 0)) {
    uVar2 = *(uint64_t *)(lVar1 + 0x29c);
    *(uint64_t *)(unaff_RDI + 0x20) = *(uint64_t *)(lVar1 + 0x294);
    *(uint64_t *)(unaff_RDI + 0x28) = uVar2;
    *(int32_t *)(unaff_RDI + 0x30) = *(int32_t *)(**(longlong **)(unaff_RBP + 0x38) + 0x2a4);
  }
  else {
    FUN_1800b9f60();
    plVar3 = *(longlong **)(unaff_RBP + 0x38);
    fVar6 = 0.0;
    if (plVar3 < *(longlong **)(unaff_RBP + 0x40)) {
      do {
        lVar1 = *plVar3;
        if ((*(uint *)(lVar1 + 0x100) & 0x4000000) == 0) {
          fVar7 = *(float *)(lVar1 + 0x294);
          fVar8 = *(float *)(lVar1 + 0x298);
          fVar9 = *(float *)(lVar1 + 0x29c);
          fVar4 = *(float *)(lVar1 + 0x2a4);
        }
        else {
          fVar4 = *(float *)(lVar1 + 0x298);
          fVar9 = *(float *)(lVar1 + 0x294);
          fVar5 = *(float *)(lVar1 + 0x29c);
          fVar7 = *(float *)(lVar1 + 0x130) * fVar4 + *(float *)(lVar1 + 0x120) * fVar9 +
                  *(float *)(lVar1 + 0x140) * fVar5 + *(float *)(lVar1 + 0x150);
          fVar8 = *(float *)(lVar1 + 0x134) * fVar4 + *(float *)(lVar1 + 0x124) * fVar9 +
                  *(float *)(lVar1 + 0x144) * fVar5 + *(float *)(lVar1 + 0x154);
          fVar9 = *(float *)(lVar1 + 0x138) * fVar4 + *(float *)(lVar1 + 0x128) * fVar9 +
                  *(float *)(lVar1 + 0x148) * fVar5 + *(float *)(lVar1 + 0x158);
          fVar4 = *(float *)(lVar1 + 0x140) * *(float *)(lVar1 + 0x140) +
                  *(float *)(lVar1 + 0x144) * *(float *)(lVar1 + 0x144) +
                  *(float *)(lVar1 + 0x148) * *(float *)(lVar1 + 0x148);
          fVar5 = *(float *)(lVar1 + 0x130) * *(float *)(lVar1 + 0x130) +
                  *(float *)(lVar1 + 0x134) * *(float *)(lVar1 + 0x134) +
                  *(float *)(lVar1 + 0x138) * *(float *)(lVar1 + 0x138);
          fVar10 = *(float *)(lVar1 + 0x120) * *(float *)(lVar1 + 0x120) +
                   *(float *)(lVar1 + 0x124) * *(float *)(lVar1 + 0x124) +
                   *(float *)(lVar1 + 0x128) * *(float *)(lVar1 + 0x128);
          if (fVar10 <= fVar5) {
            if (fVar4 <= fVar5) {
              fVar4 = fVar5;
            }
          }
          else if (fVar4 <= fVar10) {
            fVar4 = fVar10;
          }
          if ((fVar4 - 1.0 <= -1e-06) || (1e-06 <= fVar4 - 1.0)) {
            fVar4 = SQRT(fVar4) * *(float *)(lVar1 + 0x2a4);
          }
          else {
            fVar4 = *(float *)(lVar1 + 0x2a4) * 1.0;
          }
        }
        fVar9 = *(float *)(unaff_RDI + 0x28) - fVar9;
        fVar8 = *(float *)(unaff_RDI + 0x24) - fVar8;
        fVar7 = *(float *)(unaff_RDI + 0x20) - fVar7;
        fVar8 = fVar8 * fVar8 + fVar7 * fVar7 + fVar9 * fVar9;
        fVar7 = fVar6 - fVar4;
        if (fVar7 <= 0.0) {
          fVar7 = 0.0;
        }
        if (fVar7 * fVar7 < fVar8) {
          fVar6 = SQRT(fVar8) + fVar4;
        }
        plVar3 = plVar3 + 2;
      } while (plVar3 < *(longlong **)(unaff_RBP + 0x40));
      if ((0.0 < fVar6) &&
         (fVar6 < *(float *)(unaff_RDI + 0x30) || fVar6 == *(float *)(unaff_RDI + 0x30))) {
        *(float *)(unaff_RDI + 0x30) = fVar6;
      }
    }
  }
  return;
}





// 函数: void FUN_180277036(longlong *param_1)
void FUN_180277036(longlong *param_1)

{
  longlong lVar1;
  uint64_t uVar2;
  longlong *plVar3;
  longlong unaff_RBP;
  longlong unaff_RDI;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar1 = *param_1;
  if ((*(uint *)(lVar1 + 0x100) & 0x4000000) == 0) {
    uVar2 = *(uint64_t *)(lVar1 + 0x29c);
    *(uint64_t *)(unaff_RDI + 0x20) = *(uint64_t *)(lVar1 + 0x294);
    *(uint64_t *)(unaff_RDI + 0x28) = uVar2;
    *(int32_t *)(unaff_RDI + 0x30) = *(int32_t *)(**(longlong **)(unaff_RBP + 0x38) + 0x2a4);
  }
  else {
    FUN_1800b9f60();
    plVar3 = *(longlong **)(unaff_RBP + 0x38);
    fVar6 = 0.0;
    if (plVar3 < *(longlong **)(unaff_RBP + 0x40)) {
      do {
        lVar1 = *plVar3;
        if ((*(uint *)(lVar1 + 0x100) & 0x4000000) == 0) {
          fVar7 = *(float *)(lVar1 + 0x294);
          fVar8 = *(float *)(lVar1 + 0x298);
          fVar9 = *(float *)(lVar1 + 0x29c);
          fVar4 = *(float *)(lVar1 + 0x2a4);
        }
        else {
          fVar4 = *(float *)(lVar1 + 0x298);
          fVar9 = *(float *)(lVar1 + 0x294);
          fVar5 = *(float *)(lVar1 + 0x29c);
          fVar7 = *(float *)(lVar1 + 0x130) * fVar4 + *(float *)(lVar1 + 0x120) * fVar9 +
                  *(float *)(lVar1 + 0x140) * fVar5 + *(float *)(lVar1 + 0x150);
          fVar8 = *(float *)(lVar1 + 0x134) * fVar4 + *(float *)(lVar1 + 0x124) * fVar9 +
                  *(float *)(lVar1 + 0x144) * fVar5 + *(float *)(lVar1 + 0x154);
          fVar9 = *(float *)(lVar1 + 0x138) * fVar4 + *(float *)(lVar1 + 0x128) * fVar9 +
                  *(float *)(lVar1 + 0x148) * fVar5 + *(float *)(lVar1 + 0x158);
          fVar4 = *(float *)(lVar1 + 0x140) * *(float *)(lVar1 + 0x140) +
                  *(float *)(lVar1 + 0x144) * *(float *)(lVar1 + 0x144) +
                  *(float *)(lVar1 + 0x148) * *(float *)(lVar1 + 0x148);
          fVar5 = *(float *)(lVar1 + 0x130) * *(float *)(lVar1 + 0x130) +
                  *(float *)(lVar1 + 0x134) * *(float *)(lVar1 + 0x134) +
                  *(float *)(lVar1 + 0x138) * *(float *)(lVar1 + 0x138);
          fVar10 = *(float *)(lVar1 + 0x120) * *(float *)(lVar1 + 0x120) +
                   *(float *)(lVar1 + 0x124) * *(float *)(lVar1 + 0x124) +
                   *(float *)(lVar1 + 0x128) * *(float *)(lVar1 + 0x128);
          if (fVar10 <= fVar5) {
            if (fVar4 <= fVar5) {
              fVar4 = fVar5;
            }
          }
          else if (fVar4 <= fVar10) {
            fVar4 = fVar10;
          }
          if ((fVar4 - 1.0 <= -1e-06) || (1e-06 <= fVar4 - 1.0)) {
            fVar4 = SQRT(fVar4) * *(float *)(lVar1 + 0x2a4);
          }
          else {
            fVar4 = *(float *)(lVar1 + 0x2a4) * 1.0;
          }
        }
        fVar9 = *(float *)(unaff_RDI + 0x28) - fVar9;
        fVar8 = *(float *)(unaff_RDI + 0x24) - fVar8;
        fVar7 = *(float *)(unaff_RDI + 0x20) - fVar7;
        fVar8 = fVar8 * fVar8 + fVar7 * fVar7 + fVar9 * fVar9;
        fVar7 = fVar6 - fVar4;
        if (fVar7 <= 0.0) {
          fVar7 = 0.0;
        }
        if (fVar7 * fVar7 < fVar8) {
          fVar6 = SQRT(fVar8) + fVar4;
        }
        plVar3 = plVar3 + 2;
      } while (plVar3 < *(longlong **)(unaff_RBP + 0x40));
      if ((0.0 < fVar6) &&
         (fVar6 < *(float *)(unaff_RDI + 0x30) || fVar6 == *(float *)(unaff_RDI + 0x30))) {
        *(float *)(unaff_RDI + 0x30) = fVar6;
      }
    }
  }
  return;
}





// 函数: void FUN_180277068(void)
void FUN_180277068(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong unaff_RBP;
  longlong unaff_RDI;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  FUN_1800b9f60();
  plVar2 = *(longlong **)(unaff_RBP + 0x38);
  fVar5 = 0.0;
  if (plVar2 < *(longlong **)(unaff_RBP + 0x40)) {
    do {
      lVar1 = *plVar2;
      if ((*(uint *)(lVar1 + 0x100) & 0x4000000) == 0) {
        fVar6 = *(float *)(lVar1 + 0x294);
        fVar7 = *(float *)(lVar1 + 0x298);
        fVar8 = *(float *)(lVar1 + 0x29c);
        fVar3 = *(float *)(lVar1 + 0x2a4);
      }
      else {
        fVar3 = *(float *)(lVar1 + 0x298);
        fVar8 = *(float *)(lVar1 + 0x294);
        fVar4 = *(float *)(lVar1 + 0x29c);
        fVar6 = *(float *)(lVar1 + 0x130) * fVar3 + *(float *)(lVar1 + 0x120) * fVar8 +
                *(float *)(lVar1 + 0x140) * fVar4 + *(float *)(lVar1 + 0x150);
        fVar7 = *(float *)(lVar1 + 0x134) * fVar3 + *(float *)(lVar1 + 0x124) * fVar8 +
                *(float *)(lVar1 + 0x144) * fVar4 + *(float *)(lVar1 + 0x154);
        fVar8 = *(float *)(lVar1 + 0x138) * fVar3 + *(float *)(lVar1 + 0x128) * fVar8 +
                *(float *)(lVar1 + 0x148) * fVar4 + *(float *)(lVar1 + 0x158);
        fVar3 = *(float *)(lVar1 + 0x140) * *(float *)(lVar1 + 0x140) +
                *(float *)(lVar1 + 0x144) * *(float *)(lVar1 + 0x144) +
                *(float *)(lVar1 + 0x148) * *(float *)(lVar1 + 0x148);
        fVar4 = *(float *)(lVar1 + 0x130) * *(float *)(lVar1 + 0x130) +
                *(float *)(lVar1 + 0x134) * *(float *)(lVar1 + 0x134) +
                *(float *)(lVar1 + 0x138) * *(float *)(lVar1 + 0x138);
        fVar9 = *(float *)(lVar1 + 0x120) * *(float *)(lVar1 + 0x120) +
                *(float *)(lVar1 + 0x124) * *(float *)(lVar1 + 0x124) +
                *(float *)(lVar1 + 0x128) * *(float *)(lVar1 + 0x128);
        if (fVar9 <= fVar4) {
          if (fVar3 <= fVar4) {
            fVar3 = fVar4;
          }
        }
        else if (fVar3 <= fVar9) {
          fVar3 = fVar9;
        }
        if ((fVar3 - 1.0 <= -1e-06) || (1e-06 <= fVar3 - 1.0)) {
          fVar3 = SQRT(fVar3) * *(float *)(lVar1 + 0x2a4);
        }
        else {
          fVar3 = *(float *)(lVar1 + 0x2a4) * 1.0;
        }
      }
      fVar8 = *(float *)(unaff_RDI + 0x28) - fVar8;
      fVar7 = *(float *)(unaff_RDI + 0x24) - fVar7;
      fVar6 = *(float *)(unaff_RDI + 0x20) - fVar6;
      fVar7 = fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8;
      fVar6 = fVar5 - fVar3;
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      if (fVar6 * fVar6 < fVar7) {
        fVar5 = SQRT(fVar7) + fVar3;
      }
      plVar2 = plVar2 + 2;
    } while (plVar2 < *(longlong **)(unaff_RBP + 0x40));
    if ((0.0 < fVar5) &&
       (fVar5 < *(float *)(unaff_RDI + 0x30) || fVar5 == *(float *)(unaff_RDI + 0x30))) {
      *(float *)(unaff_RDI + 0x30) = fVar5;
    }
  }
  return;
}





// 函数: void FUN_18027708e(longlong *param_1,longlong *param_2)
void FUN_18027708e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong unaff_RDI;
  float fVar2;
  float fVar3;
  float in_XMM4_Da;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_XMM10_Da;
  
  do {
    lVar1 = *param_1;
    if ((*(uint *)(lVar1 + 0x100) & 0x4000000) == 0) {
      fVar4 = *(float *)(lVar1 + 0x294);
      fVar5 = *(float *)(lVar1 + 0x298);
      fVar6 = *(float *)(lVar1 + 0x29c);
      fVar2 = *(float *)(lVar1 + 0x2a4);
    }
    else {
      fVar2 = *(float *)(lVar1 + 0x298);
      fVar6 = *(float *)(lVar1 + 0x294);
      fVar3 = *(float *)(lVar1 + 0x29c);
      fVar4 = *(float *)(lVar1 + 0x130) * fVar2 + *(float *)(lVar1 + 0x120) * fVar6 +
              *(float *)(lVar1 + 0x140) * fVar3 + *(float *)(lVar1 + 0x150);
      fVar5 = *(float *)(lVar1 + 0x134) * fVar2 + *(float *)(lVar1 + 0x124) * fVar6 +
              *(float *)(lVar1 + 0x144) * fVar3 + *(float *)(lVar1 + 0x154);
      fVar6 = *(float *)(lVar1 + 0x138) * fVar2 + *(float *)(lVar1 + 0x128) * fVar6 +
              *(float *)(lVar1 + 0x148) * fVar3 + *(float *)(lVar1 + 0x158);
      fVar2 = *(float *)(lVar1 + 0x140) * *(float *)(lVar1 + 0x140) +
              *(float *)(lVar1 + 0x144) * *(float *)(lVar1 + 0x144) +
              *(float *)(lVar1 + 0x148) * *(float *)(lVar1 + 0x148);
      fVar3 = *(float *)(lVar1 + 0x130) * *(float *)(lVar1 + 0x130) +
              *(float *)(lVar1 + 0x134) * *(float *)(lVar1 + 0x134) +
              *(float *)(lVar1 + 0x138) * *(float *)(lVar1 + 0x138);
      fVar7 = *(float *)(lVar1 + 0x120) * *(float *)(lVar1 + 0x120) +
              *(float *)(lVar1 + 0x124) * *(float *)(lVar1 + 0x124) +
              *(float *)(lVar1 + 0x128) * *(float *)(lVar1 + 0x128);
      if (fVar7 <= fVar3) {
        if (fVar2 <= fVar3) {
          fVar2 = fVar3;
        }
      }
      else if (fVar2 <= fVar7) {
        fVar2 = fVar7;
      }
      if ((fVar2 - 1.0 <= -1e-06) || (1e-06 <= fVar2 - 1.0)) {
        fVar2 = SQRT(fVar2) * *(float *)(lVar1 + 0x2a4);
      }
      else {
        fVar2 = *(float *)(lVar1 + 0x2a4) * 1.0;
      }
    }
    fVar6 = *(float *)(unaff_RDI + 0x28) - fVar6;
    fVar5 = *(float *)(unaff_RDI + 0x24) - fVar5;
    fVar4 = *(float *)(unaff_RDI + 0x20) - fVar4;
    fVar5 = fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6;
    fVar4 = in_XMM4_Da - fVar2;
    if (in_XMM4_Da - fVar2 <= unaff_XMM10_Da) {
      fVar4 = unaff_XMM10_Da;
    }
    if (fVar4 * fVar4 < fVar5) {
      in_XMM4_Da = SQRT(fVar5) + fVar2;
    }
    param_1 = param_1 + 2;
  } while (param_1 < param_2);
  if ((unaff_XMM10_Da < in_XMM4_Da) &&
     (in_XMM4_Da < *(float *)(unaff_RDI + 0x30) || in_XMM4_Da == *(float *)(unaff_RDI + 0x30))) {
    *(float *)(unaff_RDI + 0x30) = in_XMM4_Da;
  }
  return;
}





// 函数: void FUN_180277326(void)
void FUN_180277326(void)

{
  longlong unaff_RDI;
  float in_XMM4_Da;
  
  if (in_XMM4_Da < *(float *)(unaff_RDI + 0x30) || in_XMM4_Da == *(float *)(unaff_RDI + 0x30)) {
    *(float *)(unaff_RDI + 0x30) = in_XMM4_Da;
  }
  return;
}





// 函数: void FUN_18027733a(void)
void FUN_18027733a(void)

{
  return;
}





// 函数: void FUN_180277360(longlong param_1)
void FUN_180277360(longlong param_1)

{
  char *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar4 = (int)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 4);
  lVar5 = (longlong)iVar4;
  if (0 < iVar4) {
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(lVar6 + *(longlong *)(param_1 + 0x38));
      iVar4 = _Mtx_lock(0x180c91910);
      if (iVar4 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar4);
      }
      pcVar1 = (char *)(lVar2 + 0xfc);
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0') {
        while( true ) {
          LOCK();
          bVar7 = *(char *)(lVar2 + 0xec) == '\0';
          if (bVar7) {
            *(char *)(lVar2 + 0xec) = '\x01';
          }
          UNLOCK();
          if (bVar7) break;
          Sleep();
        }
        while (*(int *)(lVar2 + 0xe8) != 0) {
          Sleep(0);
        }
        if ((((*(longlong *)(lVar2 + 0x210) != 0) &&
             (FUN_1800791a0(lVar2), *(char *)(lVar2 + 0xfc) == '\0')) &&
            (*(char *)(lVar2 + 0xf4) == '\0')) &&
           (((*(byte *)(lVar2 + 0xfd) & 0x20) == 0 || ((*(byte *)(lVar2 + 0xfe) & 1) == 0)))) {
          plVar3 = *(longlong **)(lVar2 + 0x210);
          *(uint64_t *)(lVar2 + 0x210) = 0;
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x38))();
          }
        }
        LOCK();
        if (*(char *)(lVar2 + 0xec) == '\x01') {
          *(char *)(lVar2 + 0xec) = '\0';
        }
        UNLOCK();
      }
      iVar4 = _Mtx_unlock(0x180c91910);
      if (iVar4 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar4);
      }
      lVar6 = lVar6 + 0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



int FUN_1802774e0(longlong param_1,longlong param_2)

{
  int iVar1;
  uint64_t *puVar2;
  int iVar3;
  
  puVar2 = *(uint64_t **)(param_1 + 0x38);
  iVar3 = 0;
  if (puVar2 < *(uint64_t **)(param_1 + 0x40)) {
    do {
      if ((*(uint *)(param_2 + 0xc) & *(uint *)(puVar2 + 1)) != 0) {
        iVar1 = FUN_180076c50(*puVar2,param_2);
        iVar3 = iVar3 + iVar1;
      }
      puVar2 = puVar2 + 2;
    } while (puVar2 < *(uint64_t **)(param_1 + 0x40));
  }
  return iVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180277540(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  longlong *plVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  longlong lVar6;
  uint64_t *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  
  plVar10 = *(longlong **)(param_1 + 0x38);
  bVar11 = plVar10 < *(longlong **)(param_1 + 0x40);
  do {
    if (!bVar11) {
      return 1;
    }
    plVar1 = (longlong *)*plVar10;
    plVar3 = plVar1;
    if ((*(byte *)((longlong)plVar1 + 0xfd) & 0x20) == 0) {
      plVar3 = (longlong *)func_0x000180085de0(plVar1[0x36]);
    }
    uVar8 = *(ulonglong *)(_DAT_180c86870 + 0x98);
    if (uVar8 != 0) {
      puVar7 = (uint64_t *)(uVar8 + 0x30);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3);
      }
      puVar5 = *(uint64_t **)(uVar8 + 0x40);
      puVar4 = puVar7;
      if (puVar5 == (uint64_t *)0x0) {
LAB_1802775f0:
        puVar4 = puVar7;
      }
      else {
        do {
          if ((longlong *)puVar5[4] < plVar3) {
            puVar5 = (uint64_t *)*puVar5;
          }
          else {
            puVar4 = puVar5;
            puVar5 = (uint64_t *)puVar5[1];
          }
        } while (puVar5 != (uint64_t *)0x0);
        if ((puVar4 == puVar7) || (plVar3 < (longlong *)puVar4[4])) goto LAB_1802775f0;
      }
      uVar8 = (ulonglong)(puVar4 != puVar7);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3);
      }
    }
    if (((plVar3[0x15] == 0) && (plVar3[0x42] == 0)) && ((char)uVar8 == '\0')) {
      if (plVar3[0x3c] == 0) {
        return 0;
      }
      lVar9 = plVar3[0x3c];
      lVar6 = plVar1[0x37];
      bVar2 = *(byte *)(lVar6 + 0x38c);
      if (bVar2 == 9) {
        bVar2 = func_0x00018022d300();
        *(byte *)(lVar6 + 0x38c) = bVar2;
      }
      if (*(char *)(lVar9 + 0x15 + (ulonglong)bVar2 * 0x18) == '\0') {
        return 0;
      }
    }
    plVar10 = plVar10 + 2;
    bVar11 = plVar10 < *(longlong **)(param_1 + 0x40);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180277690(longlong param_1,uint param_2)
void FUN_180277690(longlong param_1,uint param_2)

{
  int *piVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)(param_1 + 0x38);
  if (plVar7 < *(longlong **)(param_1 + 0x40)) {
    do {
      if ((*(uint *)(plVar7 + 1) & param_2) != 0) {
        lVar3 = *plVar7;
        if (*(longlong *)(lVar3 + 0x1b8) != 0) {
          lVar6 = 0xb8;
          lVar5 = _DAT_180c86870;
          do {
            lVar4 = *(longlong *)(lVar6 + *(longlong *)(lVar3 + 0x1b8));
            if ((((lVar4 != 0) && (*(longlong *)(lVar6 + 0x328 + *(longlong *)(lVar3 + 0x1b8)) == 0)
                 ) && ((*(uint *)(lVar4 + 0x328) & 0x20000000) == 0)) &&
               (*(longlong *)(lVar4 + 0x370) == 0)) {
              if (*(longlong *)(lVar4 + 0x1d8) == 0) {
                FUN_18023b050(lVar4,0);
                lVar5 = _DAT_180c86870;
                piVar1 = (int *)(*(longlong *)(lVar6 + *(longlong *)(lVar3 + 0x1b8)) + 0x3a8);
                *piVar1 = *piVar1 + 1;
              }
              else if (lVar5 != 0) {
                *(longlong *)(lVar4 + 0x340) = (longlong)*(int *)(lVar5 + 0x224);
              }
            }
            lVar6 = lVar6 + 8;
          } while (lVar6 < 0x138);
        }
        if (*(char *)(lVar3 + 0xf9) != '\0') {
          if (*(longlong *)(lVar3 + 0x1d8) != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *(uint64_t *)(lVar3 + 0x1d8) = 0;
          LOCK();
          *(int8_t *)(lVar3 + 0xf9) = 0;
          UNLOCK();
        }
        if (*(longlong *)(lVar3 + 0x1e8) != 0) {
          FUN_180080060();
          *(uint64_t *)(lVar3 + 0x1e8) = 0;
          if (*(longlong *)(lVar3 + 0x1f0) != 0) {
            pbVar2 = (byte *)(*(longlong *)(lVar3 + 0x1f0) + 0xfe);
            *pbVar2 = *pbVar2 & 0xfb;
          }
        }
      }
      plVar7 = plVar7 + 2;
    } while (plVar7 < *(longlong **)(param_1 + 0x40));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



