#include "TaleWorlds.Native.Split.h"

// 03_rendering_part599.c - 8 个函数

// 函数: void FUN_1805975e5(longlong param_1,uint64_t param_2,uint64_t param_3,longlong param_4)
void FUN_1805975e5(longlong param_1,uint64_t param_2,uint64_t param_3,longlong param_4)

{
  int32_t uVar1;
  int8_t uVar2;
  int in_EAX;
  uint uVar3;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int32_t uVar4;
  uint64_t unaff_RSI;
  longlong unaff_RDI;
  char cVar5;
  float fVar6;
  int32_t uVar7;
  float fVar8;
  float fVar9;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar4 = (int32_t)unaff_RSI;
  if (((in_EAX != 1) && (in_EAX != 4)) || (*(int *)(param_4 + 0x17c) == 2)) {
    *(uint64_t *)(param_1 + 0x38) = unaff_RSI;
    uVar3 = *(uint *)(param_4 + 0xb4);
    if ((uVar3 & 0x30) == 0) {
      *(int32_t *)(param_1 + 0x134) = uVar4;
      uVar3 = *(uint *)(param_4 + 0xb4);
    }
    if ((uVar3 & 0x10) == 0) {
      if ((uVar3 & 0x20) != 0) {
        if (unaff_XMM6_Da <= *(float *)(param_4 + 0xb8)) {
          *(int32_t *)(param_1 + 0x134) = 0x3f800000;
        }
        else {
          fVar6 = *(float *)(param_4 + 0xb8) * -2.0;
          if (1.0 <= fVar6) {
            fVar6 = 1.0;
          }
          *(float *)(param_1 + 0x134) = fVar6;
        }
      }
    }
    else if (*(float *)(param_4 + 0xb8) <= unaff_XMM6_Da) {
      *(float *)(param_1 + 0x134) = unaff_XMM8_Da;
    }
    else {
      fVar6 = *(float *)(param_4 + 0xb8) * -2.0;
      if (fVar6 <= unaff_XMM8_Da) {
        fVar6 = unaff_XMM8_Da;
      }
      *(float *)(param_1 + 0x134) = fVar6;
    }
  }
  FUN_180595790();
  uVar7 = FUN_180597ec0();
  fVar6 = unaff_XMM7_Da * *(float *)(unaff_RBX + 0x138) + *(float *)(unaff_RBX + 0x34);
  if (fVar6 <= 3.1415927) {
    if (fVar6 < -3.1415927) {
      fVar6 = fVar6 + 6.2831855;
    }
  }
  else {
    fVar6 = fVar6 + -6.2831855;
  }
  FUN_180595690(uVar7,fVar6);
  uVar3 = *(uint *)(unaff_RDI + 0xc0) & 0x70000;
  if ((((uVar3 == 0x10000) ||
       (((*(uint *)(unaff_RDI + 0xc0) >> 0xf & 1) != 0 &&
        (((*(byte *)(unaff_RDI + 0xb4) & 1) != 0 || (unaff_XMM6_Da < *(float *)(unaff_RDI + 0xbc))))
        ))) && ((*(byte *)(unaff_RDI + 0xb4) & 2) == 0)) &&
     (unaff_XMM6_Da < *(float *)(unaff_RDI + 0xbc) || unaff_XMM6_Da == *(float *)(unaff_RDI + 0xbc))
     ) {
    if (((int)_DAT_180c92514 == 1) || (*(int *)(unaff_RDI + 0x17c) == 2)) {
      fVar6 = 0.7;
    }
    else {
      fVar6 = 0.9;
    }
    fVar6 = fVar6 * *(float *)(unaff_RBX + 0x8c);
    if (fVar6 < *(float *)(unaff_RBX + 0x20) || fVar6 == *(float *)(unaff_RBX + 0x20)) {
      if ((int)_DAT_180c92514 == 1) {
        if (uVar3 == 0x10000) {
          *(uint *)(unaff_RBX + 8) = *(uint *)(unaff_RBX + 8) | 0x10000000;
        }
        if ((*(uint *)(unaff_RDI + 0xc0) & 0x8000) != 0) {
          *(uint *)(unaff_RBX + 8) = *(uint *)(unaff_RBX + 8) | 0x8000000;
        }
      }
    }
    else {
      *(uint *)(unaff_RBX + 8) = *(uint *)(unaff_RBX + 8) | 0x2000;
    }
  }
  uVar3 = *(uint *)(unaff_RDI + 0xc0);
  if ((((uVar3 & 0x70000) != 0x20000) &&
      (((uVar3 >> 0xf & 1) == 0 ||
       (((*(byte *)(unaff_RDI + 0xb4) & 2) == 0 &&
        (unaff_XMM6_Da < *(float *)(unaff_RDI + 0xbc) ||
         unaff_XMM6_Da == *(float *)(unaff_RDI + 0xbc))))))) ||
     (((*(byte *)(unaff_RDI + 0xb4) & 1) != 0 || (unaff_XMM6_Da < *(float *)(unaff_RDI + 0xbc))))) {
    uVar3 = *(uint *)(unaff_RDI + 0xb4);
    if (((((uVar3 & 2) == 0) &&
         (unaff_XMM6_Da < *(float *)(unaff_RDI + 0xbc) ||
          unaff_XMM6_Da == *(float *)(unaff_RDI + 0xbc))) && (*(int *)(unaff_RDI + 0x78) == 0x27))
       && (0.1 < *(float *)(unaff_RDI + 0x88))) {
      *(uint *)(unaff_RBX + 8) = *(uint *)(unaff_RBX + 8) | 0x800;
      goto LAB_180597859;
    }
  }
  else {
    if (*(int *)(unaff_RDI + 0x14c) < 4) {
      if ((uVar3 & 0x70000) == 0x20000) {
        *(uint *)(unaff_RBX + 8) = *(uint *)(unaff_RBX + 8) | 0x10000000;
        uVar3 = *(uint *)(unaff_RDI + 0xc0);
      }
      if ((uVar3 >> 0xf & 1) != 0) {
        *(uint *)(unaff_RBX + 8) = *(uint *)(unaff_RBX + 8) | 0x8000000;
      }
    }
    else {
      *(uint *)(unaff_RBX + 8) = *(uint *)(unaff_RBX + 8) | 0x1000;
    }
LAB_180597859:
    uVar3 = *(uint *)(unaff_RDI + 0xb4);
  }
  fVar11 = 3.0;
  cVar5 = '\0';
  fVar6 = 0.0;
  *(int32_t *)(unaff_RBP + 0x6b) = 0;
  fVar12 = 1.0;
  if ((((uVar3 & 1) != 0) || (unaff_XMM6_Da < *(float *)(unaff_RDI + 0xbc))) ||
     (*(int *)(unaff_RDI + 0x78) == 0x26)) {
    fVar6 = *(float *)(unaff_RBX + 0x20);
    *(int32_t *)(unaff_RBX + 0x38) = 0x3f800000;
    *(int32_t *)(unaff_RBX + 0x140) = 0xbdcccccd;
    if (fVar6 == unaff_XMM6_Da) {
      *(int32_t *)(unaff_RBX + 0x140) = 0xbe4ccccd;
    }
    if ((*(uint *)(unaff_RBX + 0x130) < 2) || (unaff_XMM6_Da < fVar6)) {
      *(int32_t *)(unaff_RBX + 0x130) = 1;
      fVar10 = *(float *)(unaff_RDI + 0x148);
      if ((unaff_XMM6_Da < fVar10) && (fVar6 < fVar10)) {
        fVar12 = ((*(float *)(unaff_RDI + 0x144) + *(float *)(unaff_RDI + 0x144)) * (fVar10 - fVar6)
                 ) / fVar10 + 1.0;
      }
    }
    fVar6 = 5.0;
  }
  else {
    if (((uVar3 & 2) == 0) && (unaff_XMM6_Da <= *(float *)(unaff_RDI + 0xbc))) {
      fVar10 = *(float *)(unaff_RBX + 0x20);
      if (unaff_XMM6_Da <= fVar10) {
        if (fVar10 < 0.9) {
          fVar6 = -1.5;
          goto LAB_1805978dc;
        }
      }
      else {
        fVar6 = 1.0;
        *(int32_t *)(unaff_RBP + 0x6b) = 0x3f800000;
        if (-0.3 < fVar10) {
          fVar6 = 3.0;
LAB_1805978dc:
          *(float *)(unaff_RBP + 0x6b) = fVar6;
        }
      }
      if ((fVar10 < -0.06) || (0.06 <= fVar10)) {
        *(int *)(unaff_RBX + 0x130) =
             (int)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),fVar10 <= unaff_XMM6_Da) + 1;
      }
      else {
        *(int32_t *)(unaff_RBX + 0x130) = uVar4;
        cVar5 = '\x01';
      }
      goto LAB_180597a79;
    }
    *(int32_t *)(unaff_RBX + 0x38) = 0xbf800000;
    *(int32_t *)(unaff_RBX + 0x140) = 0x461c4000;
    if ((*(uint *)(unaff_RBX + 0x130) & 0xfffffffd) != 0) {
      if (*(uint *)(unaff_RBX + 0x130) == 1) {
        if (*(int *)(unaff_RDI + 0x78) == 0x27) {
          fVar6 = -5.9500003 - *(float *)(unaff_RDI + 0x144) * 1.0500001;
        }
        else {
          fVar6 = -3.5;
        }
        uVar7 = *(int32_t *)(unaff_RDI + 200);
        uVar3 = *(uint *)(unaff_RDI + 0x24);
        uVar1 = *(int32_t *)(unaff_RBX + 0x8c);
        uVar2 = *(int8_t *)(unaff_RDI + 0x9b);
        fVar10 = *(float *)(unaff_RBX + 0x20);
        *(float *)(unaff_RBP + 0x6b) = fVar6;
        cVar5 = '\0';
        fVar8 = (float)func_0x000180598bb0(uVar3 >> 0xb & 0xffffff01,uVar2,unaff_RDI + 0xf8,uVar1,
                                           uVar7);
        if (fVar10 < fVar8 * unaff_XMM7_Da) {
          cVar5 = '\x01';
          if (fVar10 <= 0.01) {
            if (0.5 < *(float *)(unaff_RBX + 0x13c)) {
              *(int32_t *)(unaff_RBX + 0x130) = uVar4;
            }
          }
          else {
            *(int32_t *)(unaff_RBX + 0x13c) = uVar4;
          }
        }
      }
      goto LAB_180597a79;
    }
    *(int32_t *)(unaff_RBX + 0x130) = 2;
    fVar6 = unaff_XMM8_Da;
  }
  *(float *)(unaff_RBP + 0x6b) = fVar6;
LAB_180597a79:
  if (20.0 <= *(float *)(unaff_RBX + 0x140)) {
    *(int32_t *)(unaff_RBX + 0x15c) = uVar4;
  }
  else {
    fVar10 = *(float *)(unaff_RBX + 0x20);
    fVar8 = fVar10 * 0.9;
    if (fVar10 * 0.9 <= unaff_XMM6_Da) {
      fVar8 = unaff_XMM6_Da;
    }
    if (unaff_XMM6_Da <= *(float *)(unaff_RBX + 0x140)) {
      fVar9 = (fVar8 - *(float *)(unaff_RBX + 0x15c)) * 0.5 * unaff_XMM7_Da +
              *(float *)(unaff_RBX + 0x15c);
      *(float *)(unaff_RBX + 0x15c) = fVar9;
    }
    else {
      if (fVar6 < 1.0) {
        fVar6 = 1.0;
        *(int32_t *)(unaff_RBP + 0x6b) = 0x3f800000;
      }
      fVar9 = *(float *)(unaff_RBX + 0x15c);
      if (*(float *)(unaff_RBX + 0x15c) < fVar8) {
        fVar9 = fVar8;
      }
      fVar9 = fVar9 - unaff_XMM7_Da * 0.3;
      *(float *)(unaff_RBX + 0x15c) = fVar9;
      if (fVar9 < 0.5) {
        *(int32_t *)(unaff_RBX + 0x15c) = 0x3f000000;
        fVar9 = 0.5;
      }
    }
    if ((1.0 < fVar10) && (fVar10 < fVar9)) {
      fVar6 = fVar6 + (fVar9 - fVar10) * 2.0;
      *(float *)(unaff_RBP + 0x6b) = fVar6;
    }
  }
  uVar3 = *(uint *)(unaff_RDI + 0xb4);
  if (((uVar3 & 4) != 0) ||
     (((uVar3 & 0x10) == 0 && (unaff_XMM6_Da < *(float *)(unaff_RDI + 0xb8))))) {
    *(int32_t *)(unaff_RBX + 0x3c) = 0x3f800000;
    *(int32_t *)(unaff_RBP + 0x67) = 0x40400000;
  }
  else if (((uVar3 & 8) != 0) ||
          (((uVar3 & 0x20) == 0 &&
           (*(float *)(unaff_RDI + 0xb8) <= unaff_XMM6_Da &&
            unaff_XMM6_Da != *(float *)(unaff_RDI + 0xb8))))) {
    fVar11 = -3.0;
    *(int32_t *)(unaff_RBX + 0x3c) = 0xbf800000;
    *(int32_t *)(unaff_RBP + 0x67) = 0xc0400000;
  }
  else {
    fVar11 = *(float *)(unaff_RBX + 0x1c) * -4.0;
    *(float *)(unaff_RBP + 0x67) = fVar11;
  }
  fVar10 = *(float *)(unaff_RDI + 200);
  fVar8 = (float)func_0x000180598bb0(*(uint *)(unaff_RDI + 0x24) >> 0xb & 0xffffff01,
                                     *(int8_t *)(unaff_RDI + 0x9b),unaff_RDI + 0xf8,
                                     *(int32_t *)(unaff_RBX + 0x8c),fVar10);
  fVar10 = fVar10 * fVar8;
  if (-fVar10 <= fVar11) {
    if (fVar10 <= fVar11) {
      *(float *)(unaff_RBP + 0x67) = fVar10;
    }
  }
  else {
    *(float *)(unaff_RBP + 0x67) = -fVar10;
  }
  fVar11 = *(float *)(unaff_RBX + 0x20);
  if (0.0001 < fVar11 * fVar6) {
    fVar10 = ABS(fVar11) * 0.4;
    if (fVar10 <= 1.0) {
      fVar10 = 1.0;
    }
    *(float *)(unaff_RBP + 0x6b) = fVar6 * (1.0 / fVar10);
  }
  FUN_180598c50(unaff_RBP + 0x67);
  fVar6 = *(float *)(unaff_RBP + 0x6b);
  fVar10 = -fVar8;
  if ((fVar10 <= fVar6) && (fVar10 = fVar6, fVar8 <= fVar6)) {
    fVar10 = fVar8;
  }
  fVar6 = *(float *)(unaff_RBP + 0x67);
  *(float *)(unaff_RBP + 0x6b) = fVar10 * fVar12;
  *(float *)(unaff_RBP + -0x49) = fVar6 * unaff_XMM7_Da;
  *(float *)(unaff_RBP + -0x45) = fVar10 * fVar12 * unaff_XMM7_Da;
  *(uint64_t *)(unaff_RBX + 0x48) = *(uint64_t *)(unaff_RBP + -0x49);
  if (cVar5 != '\0') {
    *(float *)(unaff_RBX + 0x4c) = -fVar11;
  }
  if ((ABS(*(float *)(unaff_RBX + 0x1c)) < unaff_XMM7_Da * 0.1) && (ABS(fVar6) < 0.1)) {
    *(float *)(unaff_RBX + 0x48) = -*(float *)(unaff_RBX + 0x1c);
  }
  if ((unaff_XMM6_Da == *(float *)(unaff_RBX + 0xf0)) &&
     (unaff_XMM6_Da == *(float *)(unaff_RBX + 0xf4))) {
    *(float *)(unaff_RBX + 0x1c) = *(float *)(unaff_RBX + 0x48) + *(float *)(unaff_RBX + 0x1c);
    *(float *)(unaff_RBX + 0x20) = *(float *)(unaff_RBX + 0x4c) + *(float *)(unaff_RBX + 0x20);
    FUN_1805989b0(unaff_RBP + 0x67);
    return;
  }
  uVar3 = *(uint *)(unaff_RBX + 0x34);
  *(uint64_t *)(unaff_RBP + -0x49) = *(uint64_t *)(unaff_RBX + 0xf0);
                    // WARNING: Subroutine does not return
  FUN_1808fd400(uVar3 ^ 0x80000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805975fa(longlong param_1,uint64_t param_2,uint64_t param_3,longlong param_4)
void FUN_1805975fa(longlong param_1,uint64_t param_2,uint64_t param_3,longlong param_4)

{
  int32_t uVar1;
  int8_t uVar2;
  int in_EAX;
  uint uVar3;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int32_t uVar4;
  uint64_t unaff_RSI;
  longlong unaff_RDI;
  char cVar5;
  float fVar6;
  int32_t uVar7;
  float fVar8;
  float fVar9;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar4 = (int32_t)unaff_RSI;
  if (((in_EAX != 1) && (in_EAX != 4)) || (*(int *)(param_4 + 0x17c) == 2)) {
    *(uint64_t *)(param_1 + 0x38) = unaff_RSI;
    uVar3 = *(uint *)(param_4 + 0xb4);
    if ((uVar3 & 0x30) == 0) {
      *(int32_t *)(param_1 + 0x134) = uVar4;
      uVar3 = *(uint *)(param_4 + 0xb4);
    }
    if ((uVar3 & 0x10) == 0) {
      if ((uVar3 & 0x20) != 0) {
        if (unaff_XMM6_Da <= *(float *)(param_4 + 0xb8)) {
          *(int32_t *)(param_1 + 0x134) = 0x3f800000;
        }
        else {
          fVar6 = *(float *)(param_4 + 0xb8) * -2.0;
          if (1.0 <= fVar6) {
            fVar6 = 1.0;
          }
          *(float *)(param_1 + 0x134) = fVar6;
        }
      }
    }
    else if (*(float *)(param_4 + 0xb8) <= unaff_XMM6_Da) {
      *(float *)(param_1 + 0x134) = unaff_XMM8_Da;
    }
    else {
      fVar6 = *(float *)(param_4 + 0xb8) * -2.0;
      if (fVar6 <= unaff_XMM8_Da) {
        fVar6 = unaff_XMM8_Da;
      }
      *(float *)(param_1 + 0x134) = fVar6;
    }
  }
  FUN_180595790();
  uVar7 = FUN_180597ec0();
  fVar6 = unaff_XMM7_Da * *(float *)(unaff_RBX + 0x138) + *(float *)(unaff_RBX + 0x34);
  if (fVar6 <= 3.1415927) {
    if (fVar6 < -3.1415927) {
      fVar6 = fVar6 + 6.2831855;
    }
  }
  else {
    fVar6 = fVar6 + -6.2831855;
  }
  FUN_180595690(uVar7,fVar6);
  uVar3 = *(uint *)(unaff_RDI + 0xc0) & 0x70000;
  if ((((uVar3 == 0x10000) ||
       (((*(uint *)(unaff_RDI + 0xc0) >> 0xf & 1) != 0 &&
        (((*(byte *)(unaff_RDI + 0xb4) & 1) != 0 || (unaff_XMM6_Da < *(float *)(unaff_RDI + 0xbc))))
        ))) && ((*(byte *)(unaff_RDI + 0xb4) & 2) == 0)) &&
     (unaff_XMM6_Da < *(float *)(unaff_RDI + 0xbc) || unaff_XMM6_Da == *(float *)(unaff_RDI + 0xbc))
     ) {
    if (((int)_DAT_180c92514 == 1) || (*(int *)(unaff_RDI + 0x17c) == 2)) {
      fVar6 = 0.7;
    }
    else {
      fVar6 = 0.9;
    }
    fVar6 = fVar6 * *(float *)(unaff_RBX + 0x8c);
    if (fVar6 < *(float *)(unaff_RBX + 0x20) || fVar6 == *(float *)(unaff_RBX + 0x20)) {
      if ((int)_DAT_180c92514 == 1) {
        if (uVar3 == 0x10000) {
          *(uint *)(unaff_RBX + 8) = *(uint *)(unaff_RBX + 8) | 0x10000000;
        }
        if ((*(uint *)(unaff_RDI + 0xc0) & 0x8000) != 0) {
          *(uint *)(unaff_RBX + 8) = *(uint *)(unaff_RBX + 8) | 0x8000000;
        }
      }
    }
    else {
      *(uint *)(unaff_RBX + 8) = *(uint *)(unaff_RBX + 8) | 0x2000;
    }
  }
  uVar3 = *(uint *)(unaff_RDI + 0xc0);
  if ((((uVar3 & 0x70000) != 0x20000) &&
      (((uVar3 >> 0xf & 1) == 0 ||
       (((*(byte *)(unaff_RDI + 0xb4) & 2) == 0 &&
        (unaff_XMM6_Da < *(float *)(unaff_RDI + 0xbc) ||
         unaff_XMM6_Da == *(float *)(unaff_RDI + 0xbc))))))) ||
     (((*(byte *)(unaff_RDI + 0xb4) & 1) != 0 || (unaff_XMM6_Da < *(float *)(unaff_RDI + 0xbc))))) {
    uVar3 = *(uint *)(unaff_RDI + 0xb4);
    if (((((uVar3 & 2) == 0) &&
         (unaff_XMM6_Da < *(float *)(unaff_RDI + 0xbc) ||
          unaff_XMM6_Da == *(float *)(unaff_RDI + 0xbc))) && (*(int *)(unaff_RDI + 0x78) == 0x27))
       && (0.1 < *(float *)(unaff_RDI + 0x88))) {
      *(uint *)(unaff_RBX + 8) = *(uint *)(unaff_RBX + 8) | 0x800;
      goto LAB_180597859;
    }
  }
  else {
    if (*(int *)(unaff_RDI + 0x14c) < 4) {
      if ((uVar3 & 0x70000) == 0x20000) {
        *(uint *)(unaff_RBX + 8) = *(uint *)(unaff_RBX + 8) | 0x10000000;
        uVar3 = *(uint *)(unaff_RDI + 0xc0);
      }
      if ((uVar3 >> 0xf & 1) != 0) {
        *(uint *)(unaff_RBX + 8) = *(uint *)(unaff_RBX + 8) | 0x8000000;
      }
    }
    else {
      *(uint *)(unaff_RBX + 8) = *(uint *)(unaff_RBX + 8) | 0x1000;
    }
LAB_180597859:
    uVar3 = *(uint *)(unaff_RDI + 0xb4);
  }
  fVar11 = 3.0;
  cVar5 = '\0';
  fVar6 = 0.0;
  *(int32_t *)(unaff_RBP + 0x6b) = 0;
  fVar12 = 1.0;
  if ((((uVar3 & 1) != 0) || (unaff_XMM6_Da < *(float *)(unaff_RDI + 0xbc))) ||
     (*(int *)(unaff_RDI + 0x78) == 0x26)) {
    fVar6 = *(float *)(unaff_RBX + 0x20);
    *(int32_t *)(unaff_RBX + 0x38) = 0x3f800000;
    *(int32_t *)(unaff_RBX + 0x140) = 0xbdcccccd;
    if (fVar6 == unaff_XMM6_Da) {
      *(int32_t *)(unaff_RBX + 0x140) = 0xbe4ccccd;
    }
    if ((*(uint *)(unaff_RBX + 0x130) < 2) || (unaff_XMM6_Da < fVar6)) {
      *(int32_t *)(unaff_RBX + 0x130) = 1;
      fVar10 = *(float *)(unaff_RDI + 0x148);
      if ((unaff_XMM6_Da < fVar10) && (fVar6 < fVar10)) {
        fVar12 = ((*(float *)(unaff_RDI + 0x144) + *(float *)(unaff_RDI + 0x144)) * (fVar10 - fVar6)
                 ) / fVar10 + 1.0;
      }
    }
    fVar6 = 5.0;
  }
  else {
    if (((uVar3 & 2) == 0) && (unaff_XMM6_Da <= *(float *)(unaff_RDI + 0xbc))) {
      fVar10 = *(float *)(unaff_RBX + 0x20);
      if (unaff_XMM6_Da <= fVar10) {
        if (fVar10 < 0.9) {
          fVar6 = -1.5;
          goto LAB_1805978dc;
        }
      }
      else {
        fVar6 = 1.0;
        *(int32_t *)(unaff_RBP + 0x6b) = 0x3f800000;
        if (-0.3 < fVar10) {
          fVar6 = 3.0;
LAB_1805978dc:
          *(float *)(unaff_RBP + 0x6b) = fVar6;
        }
      }
      if ((fVar10 < -0.06) || (0.06 <= fVar10)) {
        *(int *)(unaff_RBX + 0x130) =
             (int)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),fVar10 <= unaff_XMM6_Da) + 1;
      }
      else {
        *(int32_t *)(unaff_RBX + 0x130) = uVar4;
        cVar5 = '\x01';
      }
      goto LAB_180597a79;
    }
    *(int32_t *)(unaff_RBX + 0x38) = 0xbf800000;
    *(int32_t *)(unaff_RBX + 0x140) = 0x461c4000;
    if ((*(uint *)(unaff_RBX + 0x130) & 0xfffffffd) != 0) {
      if (*(uint *)(unaff_RBX + 0x130) == 1) {
        if (*(int *)(unaff_RDI + 0x78) == 0x27) {
          fVar6 = -5.9500003 - *(float *)(unaff_RDI + 0x144) * 1.0500001;
        }
        else {
          fVar6 = -3.5;
        }
        uVar7 = *(int32_t *)(unaff_RDI + 200);
        uVar3 = *(uint *)(unaff_RDI + 0x24);
        uVar1 = *(int32_t *)(unaff_RBX + 0x8c);
        uVar2 = *(int8_t *)(unaff_RDI + 0x9b);
        fVar10 = *(float *)(unaff_RBX + 0x20);
        *(float *)(unaff_RBP + 0x6b) = fVar6;
        cVar5 = '\0';
        fVar8 = (float)func_0x000180598bb0(uVar3 >> 0xb & 0xffffff01,uVar2,unaff_RDI + 0xf8,uVar1,
                                           uVar7);
        if (fVar10 < fVar8 * unaff_XMM7_Da) {
          cVar5 = '\x01';
          if (fVar10 <= 0.01) {
            if (0.5 < *(float *)(unaff_RBX + 0x13c)) {
              *(int32_t *)(unaff_RBX + 0x130) = uVar4;
            }
          }
          else {
            *(int32_t *)(unaff_RBX + 0x13c) = uVar4;
          }
        }
      }
      goto LAB_180597a79;
    }
    *(int32_t *)(unaff_RBX + 0x130) = 2;
    fVar6 = unaff_XMM8_Da;
  }
  *(float *)(unaff_RBP + 0x6b) = fVar6;
LAB_180597a79:
  if (20.0 <= *(float *)(unaff_RBX + 0x140)) {
    *(int32_t *)(unaff_RBX + 0x15c) = uVar4;
  }
  else {
    fVar10 = *(float *)(unaff_RBX + 0x20);
    fVar8 = fVar10 * 0.9;
    if (fVar10 * 0.9 <= unaff_XMM6_Da) {
      fVar8 = unaff_XMM6_Da;
    }
    if (unaff_XMM6_Da <= *(float *)(unaff_RBX + 0x140)) {
      fVar9 = (fVar8 - *(float *)(unaff_RBX + 0x15c)) * 0.5 * unaff_XMM7_Da +
              *(float *)(unaff_RBX + 0x15c);
      *(float *)(unaff_RBX + 0x15c) = fVar9;
    }
    else {
      if (fVar6 < 1.0) {
        fVar6 = 1.0;
        *(int32_t *)(unaff_RBP + 0x6b) = 0x3f800000;
      }
      fVar9 = *(float *)(unaff_RBX + 0x15c);
      if (*(float *)(unaff_RBX + 0x15c) < fVar8) {
        fVar9 = fVar8;
      }
      fVar9 = fVar9 - unaff_XMM7_Da * 0.3;
      *(float *)(unaff_RBX + 0x15c) = fVar9;
      if (fVar9 < 0.5) {
        *(int32_t *)(unaff_RBX + 0x15c) = 0x3f000000;
        fVar9 = 0.5;
      }
    }
    if ((1.0 < fVar10) && (fVar10 < fVar9)) {
      fVar6 = fVar6 + (fVar9 - fVar10) * 2.0;
      *(float *)(unaff_RBP + 0x6b) = fVar6;
    }
  }
  uVar3 = *(uint *)(unaff_RDI + 0xb4);
  if (((uVar3 & 4) != 0) ||
     (((uVar3 & 0x10) == 0 && (unaff_XMM6_Da < *(float *)(unaff_RDI + 0xb8))))) {
    *(int32_t *)(unaff_RBX + 0x3c) = 0x3f800000;
    *(int32_t *)(unaff_RBP + 0x67) = 0x40400000;
  }
  else if (((uVar3 & 8) != 0) ||
          (((uVar3 & 0x20) == 0 &&
           (*(float *)(unaff_RDI + 0xb8) <= unaff_XMM6_Da &&
            unaff_XMM6_Da != *(float *)(unaff_RDI + 0xb8))))) {
    fVar11 = -3.0;
    *(int32_t *)(unaff_RBX + 0x3c) = 0xbf800000;
    *(int32_t *)(unaff_RBP + 0x67) = 0xc0400000;
  }
  else {
    fVar11 = *(float *)(unaff_RBX + 0x1c) * -4.0;
    *(float *)(unaff_RBP + 0x67) = fVar11;
  }
  fVar10 = *(float *)(unaff_RDI + 200);
  fVar8 = (float)func_0x000180598bb0(*(uint *)(unaff_RDI + 0x24) >> 0xb & 0xffffff01,
                                     *(int8_t *)(unaff_RDI + 0x9b),unaff_RDI + 0xf8,
                                     *(int32_t *)(unaff_RBX + 0x8c),fVar10);
  fVar10 = fVar10 * fVar8;
  if (-fVar10 <= fVar11) {
    if (fVar10 <= fVar11) {
      *(float *)(unaff_RBP + 0x67) = fVar10;
    }
  }
  else {
    *(float *)(unaff_RBP + 0x67) = -fVar10;
  }
  fVar11 = *(float *)(unaff_RBX + 0x20);
  if (0.0001 < fVar11 * fVar6) {
    fVar10 = ABS(fVar11) * 0.4;
    if (fVar10 <= 1.0) {
      fVar10 = 1.0;
    }
    *(float *)(unaff_RBP + 0x6b) = fVar6 * (1.0 / fVar10);
  }
  FUN_180598c50(unaff_RBP + 0x67);
  fVar6 = *(float *)(unaff_RBP + 0x6b);
  fVar10 = -fVar8;
  if ((fVar10 <= fVar6) && (fVar10 = fVar6, fVar8 <= fVar6)) {
    fVar10 = fVar8;
  }
  fVar6 = *(float *)(unaff_RBP + 0x67);
  *(float *)(unaff_RBP + 0x6b) = fVar10 * fVar12;
  *(float *)(unaff_RBP + -0x49) = fVar6 * unaff_XMM7_Da;
  *(float *)(unaff_RBP + -0x45) = fVar10 * fVar12 * unaff_XMM7_Da;
  *(uint64_t *)(unaff_RBX + 0x48) = *(uint64_t *)(unaff_RBP + -0x49);
  if (cVar5 != '\0') {
    *(float *)(unaff_RBX + 0x4c) = -fVar11;
  }
  if ((ABS(*(float *)(unaff_RBX + 0x1c)) < unaff_XMM7_Da * 0.1) && (ABS(fVar6) < 0.1)) {
    *(float *)(unaff_RBX + 0x48) = -*(float *)(unaff_RBX + 0x1c);
  }
  if ((unaff_XMM6_Da == *(float *)(unaff_RBX + 0xf0)) &&
     (unaff_XMM6_Da == *(float *)(unaff_RBX + 0xf4))) {
    *(float *)(unaff_RBX + 0x1c) = *(float *)(unaff_RBX + 0x48) + *(float *)(unaff_RBX + 0x1c);
    *(float *)(unaff_RBX + 0x20) = *(float *)(unaff_RBX + 0x4c) + *(float *)(unaff_RBX + 0x20);
    FUN_1805989b0(unaff_RBP + 0x67);
    return;
  }
  uVar3 = *(uint *)(unaff_RBX + 0x34);
  *(uint64_t *)(unaff_RBP + -0x49) = *(uint64_t *)(unaff_RBX + 0xf0);
                    // WARNING: Subroutine does not return
  FUN_1808fd400(uVar3 ^ 0x80000000);
}





// 函数: void FUN_180597c7a(float param_1,uint64_t param_2,uint64_t param_3,char param_4)
void FUN_180597c7a(float param_1,uint64_t param_2,uint64_t param_3,char param_4)

{
  float fVar1;
  uint uVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  uint unaff_XMM8_Da;
  uint unaff_XMM9_Da;
  float unaff_XMM10_Da;
  uint unaff_XMM11_Da;
  float unaff_XMM14_Da;
  
  fVar1 = *(float *)(unaff_RBP + 0x67);
  *(float *)(unaff_RBP + 0x6b) = param_1 * unaff_XMM10_Da;
  *(float *)(unaff_RBP + -0x49) = fVar1 * unaff_XMM7_Da;
  *(float *)(unaff_RBP + -0x45) = param_1 * unaff_XMM10_Da * unaff_XMM7_Da;
  *(uint64_t *)(unaff_RBX + 0x48) = *(uint64_t *)(unaff_RBP + -0x49);
  if (param_4 != '\0') {
    *(uint *)(unaff_RBX + 0x4c) = unaff_XMM8_Da ^ unaff_XMM11_Da;
  }
  if (((float)(*(uint *)(unaff_RBX + 0x1c) & unaff_XMM9_Da) < unaff_XMM7_Da * unaff_XMM14_Da) &&
     ((float)((uint)fVar1 & unaff_XMM9_Da) < unaff_XMM14_Da)) {
    *(uint *)(unaff_RBX + 0x48) = *(uint *)(unaff_RBX + 0x1c) ^ unaff_XMM11_Da;
  }
  if ((unaff_XMM6_Da == *(float *)(unaff_RBX + 0xf0)) &&
     (unaff_XMM6_Da == *(float *)(unaff_RBX + 0xf4))) {
    *(float *)(unaff_RBX + 0x1c) = *(float *)(unaff_RBX + 0x48) + *(float *)(unaff_RBX + 0x1c);
    *(float *)(unaff_RBX + 0x20) = *(float *)(unaff_RBX + 0x4c) + *(float *)(unaff_RBX + 0x20);
    FUN_1805989b0(unaff_RBP + 0x67);
    return;
  }
  uVar2 = *(uint *)(unaff_RBX + 0x34);
  *(uint64_t *)(unaff_RBP + -0x49) = *(uint64_t *)(unaff_RBX + 0xf0);
                    // WARNING: Subroutine does not return
  FUN_1808fd400(uVar2 ^ unaff_XMM11_Da);
}





// 函数: void FUN_180597cc9(void)
void FUN_180597cc9(void)

{
  uint uVar1;
  longlong unaff_RBX;
  longlong unaff_RBP;
  uint in_XMM3_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  uint unaff_XMM8_Da;
  uint unaff_XMM9_Da;
  uint unaff_XMM11_Da;
  float unaff_XMM14_Da;
  
  *(uint *)(unaff_RBX + 0x4c) = unaff_XMM8_Da ^ unaff_XMM11_Da;
  if (((float)(*(uint *)(unaff_RBX + 0x1c) & unaff_XMM9_Da) < unaff_XMM7_Da * unaff_XMM14_Da) &&
     ((float)(in_XMM3_Da & unaff_XMM9_Da) < unaff_XMM14_Da)) {
    *(uint *)(unaff_RBX + 0x48) = *(uint *)(unaff_RBX + 0x1c) ^ unaff_XMM11_Da;
  }
  if ((unaff_XMM6_Da == *(float *)(unaff_RBX + 0xf0)) &&
     (unaff_XMM6_Da == *(float *)(unaff_RBX + 0xf4))) {
    *(float *)(unaff_RBX + 0x1c) = *(float *)(unaff_RBX + 0x48) + *(float *)(unaff_RBX + 0x1c);
    *(float *)(unaff_RBX + 0x20) = *(float *)(unaff_RBX + 0x4c) + *(float *)(unaff_RBX + 0x20);
    FUN_1805989b0(unaff_RBP + 0x67);
    return;
  }
  uVar1 = *(uint *)(unaff_RBX + 0x34);
  *(uint64_t *)(unaff_RBP + -0x49) = *(uint64_t *)(unaff_RBX + 0xf0);
                    // WARNING: Subroutine does not return
  FUN_1808fd400(uVar1 ^ unaff_XMM11_Da);
}





// 函数: void FUN_180597d0e(void)
void FUN_180597d0e(void)

{
  uint uVar1;
  longlong unaff_RBX;
  longlong unaff_RBP;
  float unaff_XMM6_Da;
  uint unaff_XMM11_Da;
  
  if (unaff_XMM6_Da != *(float *)(unaff_RBX + 0xf4)) {
    uVar1 = *(uint *)(unaff_RBX + 0x34);
    *(uint64_t *)(unaff_RBP + -0x49) = *(uint64_t *)(unaff_RBX + 0xf0);
                    // WARNING: Subroutine does not return
    FUN_1808fd400(uVar1 ^ unaff_XMM11_Da);
  }
  *(float *)(unaff_RBX + 0x1c) = *(float *)(unaff_RBX + 0x48) + *(float *)(unaff_RBX + 0x1c);
  *(float *)(unaff_RBX + 0x20) = *(float *)(unaff_RBX + 0x4c) + *(float *)(unaff_RBX + 0x20);
  FUN_1805989b0(unaff_RBP + 0x67);
  return;
}





// 函数: void FUN_180597e78(longlong param_1)
void FUN_180597e78(longlong param_1)

{
  *(int32_t *)(param_1 + 0x138) = 0;
  FUN_1805989b0(&system_data_f0c8);
  return;
}





// 函数: void FUN_180597ec0(longlong param_1,float param_2,longlong param_3)
void FUN_180597ec0(longlong param_1,float param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(param_1 + 0x134);
  fVar4 = fVar2;
  if (*(char *)(param_3 + 0xb0) != '\0') {
    fVar4 = fVar2 * 0.3;
  }
  fVar3 = fVar4 * param_2 * *(float *)(param_3 + 0x13c) * 0.0725 + *(float *)(param_1 + 0x138);
  *(float *)(param_1 + 0x138) = fVar3;
  if (fVar3 * fVar4 < 0.0) {
    fVar3 = ABS(fVar3) * param_2 * fVar4 * 9.0 + fVar3;
    *(float *)(param_1 + 0x138) = fVar3;
  }
  if (*(char *)(param_3 + 0xb0) == '\0') {
    fVar4 = 0.04;
  }
  else {
    fVar4 = 0.012;
  }
  if (fVar2 == 0.0) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = ABS(fVar2);
  }
  fVar1 = fVar4 * *(float *)(param_3 + 0x13c) * fVar1;
  if ((0.0 < *(float *)(param_1 + 0x20)) && (0.01 < *(float *)(param_1 + 0x1c) * fVar3)) {
    fVar4 = 1.0 - (ABS(*(float *)(param_1 + 0x1c)) * 0.1 + *(float *)(param_1 + 0x20) * 0.04);
    if (fVar4 <= 0.1) {
      fVar4 = 0.1;
    }
    fVar1 = fVar1 * fVar4;
  }
  if (((*(byte *)(param_3 + 0xb4) & 1) != 0) || (0.0 < *(float *)(param_3 + 0xbc))) {
    fVar1 = fVar1 * 0.7;
  }
  *(float *)(param_1 + 300) = fVar1;
  fVar4 = -fVar1;
  if ((-fVar1 <= fVar3) && (fVar4 = fVar3, fVar1 <= fVar3)) {
    fVar4 = fVar1;
  }
  *(float *)(param_1 + 0x138) = fVar4;
  if (fVar2 == 0.0) {
    fVar2 = param_2 * 9.0;
    fVar4 = fVar4 - (1.0 - (fVar2 * 0.5 * fVar2 + (1.0 - fVar2))) * fVar4;
    *(float *)(param_1 + 0x138) = fVar4;
  }
  if (ABS(fVar4) < 0.0001) {
    *(int32_t *)(param_1 + 0x138) = 0;
    fVar4 = 0.0;
  }
  if (*(float *)(param_1 + 0x164) * fVar4 < 0.0) {
    fVar2 = *(float *)(param_1 + 0x164) + *(float *)(param_1 + 0x34);
    *(float *)(param_1 + 0x34) = fVar2;
    *(float *)(param_1 + 0x138) = (1.0 - param_2 * 5.0) * fVar4;
    if (fVar2 <= 3.1415927) {
      if (-3.1415927 <= fVar2) goto LAB_180598105;
      fVar2 = fVar2 + 6.2831855;
    }
    else {
      fVar2 = fVar2 - 6.2831855;
    }
    *(float *)(param_1 + 0x34) = fVar2;
  }
LAB_180598105:
  *(int32_t *)(param_1 + 0x164) = 0;
  return;
}





// 函数: void FUN_180598160(void)
void FUN_180598160(void)

{
  float in_XMM3_Da;
  float in_stack_00000028;
  
                    // WARNING: Subroutine does not return
  FUN_1808fd400(in_XMM3_Da - in_stack_00000028);
}





