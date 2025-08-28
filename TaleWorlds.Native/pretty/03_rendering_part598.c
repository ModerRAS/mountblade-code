#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part598.c - 2 个函数

// 函数: void FUN_180597510(float param_1,uint64_t param_2,float param_3,longlong param_4)
void FUN_180597510(float param_1,uint64_t param_2,float param_3,longlong param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong in_RCX;
  char cVar3;
  float fVar4;
  int32_t uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint64_t uStackX_8;
  uint64_t uStack_a8;
  
  if (((*(byte *)(in_RCX + 0x40) & 3) == 0) ||
     (*(float *)(in_RCX + 0x44) <= 0.0 && *(float *)(in_RCX + 0x44) != 0.0)) {
    *(int32_t *)(in_RCX + 0x138) = 0;
    FUN_1805989b0(&system_data_f0c8,param_3,0,in_RCX + 8);
    return;
  }
  if (((*(uint *)(param_4 + 0x68) | *(uint *)(param_4 + 0x60)) >> 0x18 & 1) != 0) {
    uStackX_8._0_4_ = (float)*(uint64_t *)(in_RCX + 0x1c);
    uStackX_8._4_4_ = (float)((ulonglong)*(uint64_t *)(in_RCX + 0x1c) >> 0x20);
    fVar4 = 1.0 - param_3 * 8.0;
    uStackX_8._4_4_ = uStackX_8._4_4_ * fVar4;
    uStackX_8._0_4_ = (float)uStackX_8 * fVar4;
    if (uStackX_8._4_4_ * uStackX_8._4_4_ + (float)uStackX_8 * (float)uStackX_8 < 0.0001) {
      uStackX_8 = 0;
    }
    *(longlong *)(in_RCX + 0x1c) = uStackX_8;
    return;
  }
  if (((_DAT_180c92514 != 1) && (_DAT_180c92514 != 4)) || (*(int *)(param_4 + 0x17c) == 2)) {
    *(uint64_t *)(in_RCX + 0x38) = 0;
    uVar2 = *(uint *)(param_4 + 0xb4);
    if ((uVar2 & 0x30) == 0) {
      *(int32_t *)(in_RCX + 0x134) = 0;
      uVar2 = *(uint *)(param_4 + 0xb4);
    }
    if ((uVar2 & 0x10) == 0) {
      if ((uVar2 & 0x20) != 0) {
        param_1 = *(float *)(param_4 + 0xb8);
        if (0.0 <= param_1) {
          *(int32_t *)(in_RCX + 0x134) = 0x3f800000;
        }
        else {
          param_1 = param_1 * -2.0;
          if (1.0 <= param_1) {
            param_1 = 1.0;
          }
          *(float *)(in_RCX + 0x134) = param_1;
        }
      }
    }
    else if (*(float *)(param_4 + 0xb8) <= 0.0) {
      param_1 = -1.0;
      *(int32_t *)(in_RCX + 0x134) = 0xbf800000;
    }
    else {
      param_1 = *(float *)(param_4 + 0xb8) * -2.0;
      if (param_1 <= -1.0) {
        param_1 = -1.0;
      }
      *(float *)(in_RCX + 0x134) = param_1;
    }
  }
  FUN_180595790(param_1,param_2,param_4);
  uVar5 = FUN_180597ec0(in_RCX,param_3,param_4);
  fVar4 = param_3 * *(float *)(in_RCX + 0x138) + *(float *)(in_RCX + 0x34);
  if (fVar4 <= 3.1415927) {
    if (fVar4 < -3.1415927) {
      fVar4 = fVar4 + 6.2831855;
    }
  }
  else {
    fVar4 = fVar4 + -6.2831855;
  }
  FUN_180595690(uVar5,fVar4,param_3);
  uVar2 = *(uint *)(param_4 + 0xc0) & 0x70000;
  if ((((uVar2 == 0x10000) ||
       (((*(uint *)(param_4 + 0xc0) >> 0xf & 1) != 0 &&
        (((*(byte *)(param_4 + 0xb4) & 1) != 0 || (0.0 < *(float *)(param_4 + 0xbc))))))) &&
      ((*(byte *)(param_4 + 0xb4) & 2) == 0)) &&
     (0.0 < *(float *)(param_4 + 0xbc) || *(float *)(param_4 + 0xbc) == 0.0)) {
    if ((_DAT_180c92514 == 1) || (*(int *)(param_4 + 0x17c) == 2)) {
      fVar4 = 0.7;
    }
    else {
      fVar4 = 0.9;
    }
    fVar4 = fVar4 * *(float *)(in_RCX + 0x8c);
    if (fVar4 < *(float *)(in_RCX + 0x20) || fVar4 == *(float *)(in_RCX + 0x20)) {
      if (_DAT_180c92514 == 1) {
        if (uVar2 == 0x10000) {
          *(uint *)(in_RCX + 8) = *(uint *)(in_RCX + 8) | 0x10000000;
        }
        if ((*(uint *)(param_4 + 0xc0) & 0x8000) != 0) {
          *(uint *)(in_RCX + 8) = *(uint *)(in_RCX + 8) | 0x8000000;
        }
      }
    }
    else {
      *(uint *)(in_RCX + 8) = *(uint *)(in_RCX + 8) | 0x2000;
    }
  }
  uVar2 = *(uint *)(param_4 + 0xc0);
  if ((((uVar2 & 0x70000) != 0x20000) &&
      (((uVar2 >> 0xf & 1) == 0 ||
       (((*(byte *)(param_4 + 0xb4) & 2) == 0 &&
        (0.0 < *(float *)(param_4 + 0xbc) || *(float *)(param_4 + 0xbc) == 0.0)))))) ||
     (((*(byte *)(param_4 + 0xb4) & 1) != 0 || (0.0 < *(float *)(param_4 + 0xbc))))) {
    uVar2 = *(uint *)(param_4 + 0xb4);
    if (((((uVar2 & 2) == 0) &&
         (0.0 < *(float *)(param_4 + 0xbc) || *(float *)(param_4 + 0xbc) == 0.0)) &&
        (*(int *)(param_4 + 0x78) == 0x27)) && (0.1 < *(float *)(param_4 + 0x88))) {
      *(uint *)(in_RCX + 8) = *(uint *)(in_RCX + 8) | 0x800;
      goto LAB_180597859;
    }
  }
  else {
    if (*(int *)(param_4 + 0x14c) < 4) {
      if ((uVar2 & 0x70000) == 0x20000) {
        *(uint *)(in_RCX + 8) = *(uint *)(in_RCX + 8) | 0x10000000;
        uVar2 = *(uint *)(param_4 + 0xc0);
      }
      if ((uVar2 >> 0xf & 1) != 0) {
        *(uint *)(in_RCX + 8) = *(uint *)(in_RCX + 8) | 0x8000000;
      }
    }
    else {
      *(uint *)(in_RCX + 8) = *(uint *)(in_RCX + 8) | 0x1000;
    }
LAB_180597859:
    uVar2 = *(uint *)(param_4 + 0xb4);
  }
  cVar3 = '\0';
  fVar4 = 0.0;
  fVar10 = 1.0;
  if ((((uVar2 & 1) != 0) || (0.0 < *(float *)(param_4 + 0xbc))) ||
     (*(int *)(param_4 + 0x78) == 0x26)) {
    fVar4 = *(float *)(in_RCX + 0x20);
    *(int32_t *)(in_RCX + 0x38) = 0x3f800000;
    *(int32_t *)(in_RCX + 0x140) = 0xbdcccccd;
    if (fVar4 == 0.0) {
      *(int32_t *)(in_RCX + 0x140) = 0xbe4ccccd;
    }
    if ((*(uint *)(in_RCX + 0x130) < 2) || (0.0 < fVar4)) {
      *(int32_t *)(in_RCX + 0x130) = 1;
      fVar9 = *(float *)(param_4 + 0x148);
      if ((0.0 < fVar9) && (fVar4 < fVar9)) {
        fVar10 = ((*(float *)(param_4 + 0x144) + *(float *)(param_4 + 0x144)) * (fVar9 - fVar4)) /
                 fVar9 + 1.0;
      }
    }
    fVar4 = 5.0;
  }
  else {
    if (((uVar2 & 2) == 0) && (0.0 <= *(float *)(param_4 + 0xbc))) {
      fVar9 = *(float *)(in_RCX + 0x20);
      if (0.0 <= fVar9) {
        uStackX_8 = 0;
        if (fVar9 < 0.9) {
          fVar4 = -1.5;
          goto LAB_1805978dc;
        }
      }
      else {
        fVar4 = 1.0;
        uStackX_8 = 0x3f80000000000000;
        if (-0.3 < fVar9) {
          fVar4 = 3.0;
LAB_1805978dc:
          uStackX_8 = (ulonglong)(uint)fVar4 << 0x20;
        }
      }
      lVar1 = uStackX_8;
      if ((fVar9 < -0.06) || (0.06 <= fVar9)) {
        *(uint *)(in_RCX + 0x130) = (fVar9 <= 0.0) + 1;
      }
      else {
        *(int32_t *)(in_RCX + 0x130) = 0;
        cVar3 = '\x01';
      }
      goto LAB_180597a79;
    }
    *(int32_t *)(in_RCX + 0x38) = 0xbf800000;
    *(int32_t *)(in_RCX + 0x140) = 0x461c4000;
    if ((*(uint *)(in_RCX + 0x130) & 0xfffffffd) != 0) {
      lVar1 = 0;
      if (*(uint *)(in_RCX + 0x130) == 1) {
        if (*(int *)(param_4 + 0x78) == 0x27) {
          fVar4 = -5.9500003 - *(float *)(param_4 + 0x144) * 1.0500001;
        }
        else {
          fVar4 = -3.5;
        }
        fVar9 = *(float *)(in_RCX + 0x20);
        uStackX_8 = CONCAT44(fVar4,(float)uStackX_8);
        cVar3 = '\0';
        fVar8 = (float)func_0x000180598bb0(*(uint *)(param_4 + 0x24) >> 0xb & 0xffffff01,
                                           *(int8_t *)(param_4 + 0x9b),param_4 + 0xf8,
                                           *(int32_t *)(in_RCX + 0x8c),
                                           *(int32_t *)(param_4 + 200));
        lVar1 = uStackX_8;
        if (fVar9 < fVar8 * param_3) {
          cVar3 = '\x01';
          if (fVar9 <= 0.01) {
            if (0.5 < *(float *)(in_RCX + 0x13c)) {
              *(int32_t *)(in_RCX + 0x130) = 0;
            }
          }
          else {
            *(int32_t *)(in_RCX + 0x13c) = 0;
          }
        }
      }
      goto LAB_180597a79;
    }
    *(int32_t *)(in_RCX + 0x130) = 2;
    fVar4 = -1.0;
  }
  uStackX_8 = (ulonglong)(uint)fVar4 << 0x20;
  lVar1 = uStackX_8;
LAB_180597a79:
  uStackX_8 = lVar1;
  if (20.0 <= *(float *)(in_RCX + 0x140)) {
    *(int32_t *)(in_RCX + 0x15c) = 0;
  }
  else {
    fVar9 = *(float *)(in_RCX + 0x20);
    fVar8 = fVar9 * 0.9;
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    if (0.0 <= *(float *)(in_RCX + 0x140)) {
      fVar7 = (fVar8 - *(float *)(in_RCX + 0x15c)) * 0.5 * param_3 + *(float *)(in_RCX + 0x15c);
      *(float *)(in_RCX + 0x15c) = fVar7;
    }
    else {
      if (fVar4 < 1.0) {
        fVar4 = 1.0;
        uStackX_8._4_4_ = 1.0;
      }
      fVar7 = *(float *)(in_RCX + 0x15c);
      if (*(float *)(in_RCX + 0x15c) < fVar8) {
        fVar7 = fVar8;
      }
      fVar7 = fVar7 - param_3 * 0.3;
      *(float *)(in_RCX + 0x15c) = fVar7;
      if (fVar7 < 0.5) {
        *(int32_t *)(in_RCX + 0x15c) = 0x3f000000;
        fVar7 = 0.5;
      }
    }
    if ((1.0 < fVar9) && (fVar9 < fVar7)) {
      fVar4 = fVar4 + (fVar7 - fVar9) * 2.0;
      uStackX_8._4_4_ = fVar4;
    }
  }
  uVar2 = *(uint *)(param_4 + 0xb4);
  if (((uVar2 & 4) != 0) || (((uVar2 & 0x10) == 0 && (0.0 < *(float *)(param_4 + 0xb8))))) {
    *(int32_t *)(in_RCX + 0x3c) = 0x3f800000;
    uStackX_8._0_4_ = 3.0;
  }
  else if (((uVar2 & 8) != 0) ||
          (((uVar2 & 0x20) == 0 &&
           (*(float *)(param_4 + 0xb8) <= 0.0 && *(float *)(param_4 + 0xb8) != 0.0)))) {
    *(int32_t *)(in_RCX + 0x3c) = 0xbf800000;
    uStackX_8._0_4_ = -3.0;
  }
  else {
    uStackX_8._0_4_ = *(float *)(in_RCX + 0x1c) * -4.0;
  }
  fVar8 = (float)uStackX_8;
  fVar9 = *(float *)(param_4 + 200);
  fVar6 = (float)func_0x000180598bb0(*(uint *)(param_4 + 0x24) >> 0xb & 0xffffff01,
                                     *(int8_t *)(param_4 + 0x9b),param_4 + 0xf8,
                                     *(int32_t *)(in_RCX + 0x8c),fVar9);
  fVar9 = fVar9 * fVar6;
  fVar7 = -fVar9;
  if ((-fVar9 <= fVar8) && (fVar7 = (float)uStackX_8, fVar9 <= fVar8)) {
    fVar7 = fVar9;
  }
  uStackX_8._0_4_ = fVar7;
  fVar9 = *(float *)(in_RCX + 0x20);
  if (0.0001 < fVar9 * fVar4) {
    fVar8 = ABS(fVar9) * 0.4;
    if (fVar8 <= 1.0) {
      fVar8 = 1.0;
    }
    uStackX_8._4_4_ = fVar4 * (1.0 / fVar8);
  }
  FUN_180598c50(&uStackX_8,param_3,in_RCX + 0x1c,*(int32_t *)(in_RCX + 0x54));
  fVar4 = -fVar6;
  if ((fVar4 <= uStackX_8._4_4_) && (fVar4 = uStackX_8._4_4_, fVar6 <= uStackX_8._4_4_)) {
    fVar4 = fVar6;
  }
  uStackX_8 = CONCAT44(fVar4 * fVar10,(float)uStackX_8);
  uStack_a8 = CONCAT44(fVar4 * fVar10 * param_3,(float)uStackX_8 * param_3);
  *(uint64_t *)(in_RCX + 0x48) = uStack_a8;
  if (cVar3 != '\0') {
    *(float *)(in_RCX + 0x4c) = -fVar9;
  }
  if ((ABS(*(float *)(in_RCX + 0x1c)) < param_3 * 0.1) && (ABS((float)uStackX_8) < 0.1)) {
    *(float *)(in_RCX + 0x48) = -*(float *)(in_RCX + 0x1c);
  }
  if ((*(float *)(in_RCX + 0xf0) == 0.0) && (*(float *)(in_RCX + 0xf4) == 0.0)) {
    *(float *)(in_RCX + 0x1c) = *(float *)(in_RCX + 0x48) + *(float *)(in_RCX + 0x1c);
    *(float *)(in_RCX + 0x20) = *(float *)(in_RCX + 0x4c) + *(float *)(in_RCX + 0x20);
    FUN_1805989b0(&uStackX_8,param_3,0,in_RCX + 8);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(uint *)(in_RCX + 0x34) ^ 0x80000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805975ca(longlong param_1,uint64_t param_2,uint64_t param_3,longlong param_4)
void FUN_1805975ca(longlong param_1,uint64_t param_2,uint64_t param_3,longlong param_4)

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
      *(int32_t *)(param_1 + 0x134) = 0xbf800000;
    }
    else {
      fVar6 = *(float *)(param_4 + 0xb8) * -2.0;
      if (fVar6 <= -1.0) {
        fVar6 = -1.0;
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
    fVar6 = -1.0;
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



