#include "TaleWorlds.Native.Split.h"

// 99_part_13_part065.c - 6 个函数

// 函数: void FUN_1808d5040(longlong param_1)
void FUN_1808d5040(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_198 [32];
  undefined1 auStack_178 [272];
  ulonglong uStack_68;
  undefined8 uStack_30;
  
  *(undefined4 *)(param_1 + 0x68) = 4;
  uStack_30 = 0x1808d5055;
  iVar3 = FUN_1808d3420();
  if (iVar3 != 0) {
    return;
  }
  iVar3 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x44);
  if ((iVar3 == 0) || (iVar3 == 1)) {
    uStack_30 = 0x1808d507d;
    iVar3 = FUN_1808b2f30(param_1 + 0x48,iVar3 + 0xc);
    if (iVar3 != 0) {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0x68) = 1;
  uStack_68 = _DAT_180bf00a8 ^ (ulonglong)auStack_198;
  iVar3 = 0;
  if (*(int *)(param_1 + 0xa0) == 0) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x778);
  }
  if ((*(ulonglong *)(param_1 + 0x98) < *(ulonglong *)(param_1 + 0x98)) ||
     (*(ulonglong *)(param_1 + 0x98) + (longlong)*(int *)(param_1 + 0xa0) * 8 <=
      *(ulonglong *)(param_1 + 0x98))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
                    // WARNING: Subroutine does not return
    memset(auStack_178,0,0x108);
  }
  if (iVar3 != 0) {
    lVar1 = *(longlong *)(param_1 + 0xa8);
    fVar7 = *(float *)(lVar1 + 0x58);
    fVar6 = *(float *)(lVar1 + 0x5c);
    fVar4 = fVar7;
    if ((fVar7 <= -80.0) && (fVar4 = fVar6, -80.0 <= fVar6)) {
      fVar4 = -80.0;
    }
    fVar9 = *(float *)(param_1 + 0xc0);
    fVar8 = fVar9 * (fVar6 - fVar7) + fVar7;
    fVar10 = (float)iVar3 / (float)*(int *)(*(longlong *)(param_1 + 0x78) + 0x774);
    if (fVar4 <= fVar8) {
      if (fVar8 <= fVar4) goto LAB_1808d4ae1;
      if (fVar9 <= *(float *)(param_1 + 0xb8)) {
        fVar9 = *(float *)(param_1 + 0xb8);
      }
      *(float *)(param_1 + 0xb8) = fVar9;
      fVar7 = *(float *)(lVar1 + 0x58);
      fVar5 = *(float *)(lVar1 + 0x5c) - fVar7;
      fVar6 = fVar7;
      if (fVar7 <= fVar4) {
        fVar6 = fVar4;
      }
      fVar4 = (fVar9 * fVar5 + fVar7) - fVar6;
      if (fVar4 == 0.0) {
        fVar4 = 0.0;
      }
      else {
        fVar4 = (fVar8 - fVar6) / fVar4;
      }
      fVar5 = (fVar6 - fVar7) / fVar5;
      fVar4 = 1.0 - fVar4;
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
      fVar4 = (1000.0 / *(float *)(lVar1 + 0x74)) * fVar10 + fVar4;
      if (1.0 <= fVar4) {
        fVar4 = 1.0;
      }
      if (0.0 <= fVar5) {
        if (1.0 <= fVar5) {
          fVar5 = 1.0;
        }
      }
      else {
        fVar5 = 0.0;
      }
      fVar9 = (fVar5 - fVar9) * fVar4 + fVar9;
      *(float *)(param_1 + 0xbc) = fVar9;
    }
    else {
      fVar5 = fVar6;
      if (fVar4 <= fVar6) {
        fVar5 = fVar4;
      }
      fVar5 = fVar5 - fVar7;
      if (fVar5 == 0.0) {
        fVar9 = 0.0;
      }
      else {
        fVar9 = (fVar8 - fVar7) / fVar5;
        if (fVar9 < 0.0) goto LAB_1808d4b3e;
      }
      fVar5 = fVar5 / (fVar6 - fVar7);
      fVar9 = (1000.0 / *(float *)(lVar1 + 0x70)) * fVar10 + fVar9;
      if (1.0 <= fVar9) {
        fVar9 = 1.0;
      }
      if (0.0 <= fVar5) {
        if (1.0 <= fVar5) {
          fVar5 = 1.0;
        }
        fVar9 = fVar5 * fVar9;
        *(float *)(param_1 + 0xb8) = fVar9;
      }
      else {
        fVar9 = fVar9 * 0.0;
        *(float *)(param_1 + 0xb8) = fVar9;
      }
    }
    *(float *)(param_1 + 0xc0) = fVar9;
  }
LAB_1808d4ae1:
  fVar7 = *(float *)(param_1 + 0xc0);
  fVar6 = 0.0;
  if ((0.0 <= fVar7) && (fVar6 = fVar7, 1.0 <= fVar7)) {
    fVar6 = 1.0;
  }
  *(float *)(param_1 + 0xc0) = fVar6;
  fVar7 = (*(float *)(param_1 + 0xb4) - *(float *)(param_1 + 0xb0)) * fVar6 +
          *(float *)(param_1 + 0xb0);
  if (fVar7 != *(float *)(param_1 + 0x6c)) {
    *(float *)(param_1 + 0x6c) = fVar7;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_1808b3060(*(longlong *)(param_1 + 0x70),0);
    }
  }
LAB_1808d4b3e:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_68 ^ (ulonglong)auStack_198);
}



undefined8 FUN_1808d50c0(longlong param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  undefined8 extraout_XMM0_Qb;
  
  *(undefined4 *)(param_1 + 0x68) = 4;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0xa0) + 0x44);
  if (iVar1 == 0) {
    uVar4 = FUN_1808b2f30(param_1 + 0x48,0xc);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  }
  else if ((iVar1 == 1) && (uVar4 = FUN_1808b2f30(param_1 + 0x48,0xd), (int)uVar4 != 0)) {
    return uVar4;
  }
  uVar4 = FUN_1808b2f30(param_1 + 0x48,0x1b);
  if ((((int)uVar4 == 0) && (uVar4 = FUN_1808b2f30(param_1 + 0x48,0xb), (int)uVar4 == 0)) &&
     (uVar4 = FUN_1808b2f30(param_1 + 0x48,0x1c), (int)uVar4 == 0)) {
    lVar6 = *(longlong *)(param_1 + 0xa0);
    fVar10 = *(float *)(param_1 + 0xb0) * 0.017453292;
    *(float *)(param_1 + 0xbc) = fVar10;
    if (((*(byte *)(lVar6 + 0x54) & 1) != 0) && (*(longlong *)(param_1 + 0x98) != 0)) {
      if (*(longlong *)(param_1 + 0x98) == -200) {
        return 0x1c;
      }
      uVar3 = func_0x000180855b70();
      auVar8._0_8_ = FUN_1808d4490(param_1);
      auVar8._8_8_ = extraout_XMM0_Qb;
      auVar9._4_12_ = auVar8._4_12_;
      auVar9._0_4_ = (float)auVar8._0_8_ * (float)uVar3 * 2.0833333e-05 + *(float *)(param_1 + 0xbc)
      ;
      fVar10 = (float)fmodf(auVar9._0_8_,0x40c90fdb);
      lVar6 = *(longlong *)(param_1 + 0xa0);
      *(float *)(param_1 + 0xbc) = fVar10;
    }
    uVar7 = func_0x0001808d3880(param_1);
    *(undefined4 *)(param_1 + 0xb8) = uVar7;
    if (*(int *)(lVar6 + 0x50) - 5U < 2) {
      FUN_1808edbf0(1,fVar10,param_1 + 200);
      puVar2 = *(uint **)(param_1 + 0xc0);
      uVar5 = *puVar2 << 0xb ^ *puVar2;
      *puVar2 = puVar2[1];
      puVar2[1] = puVar2[2];
      uVar3 = puVar2[3];
      puVar2[2] = uVar3;
      uVar5 = (uVar3 >> 0xb ^ uVar5) >> 8 ^ uVar3 ^ uVar5;
      puVar2[3] = uVar5;
      fVar10 = (float)(uVar5 & 0x7fffffff) * 4.656613e-10;
      *(float *)(param_1 + 0xcc) = (fVar10 + fVar10) - 1.0;
    }
    *(undefined4 *)(param_1 + 0x68) = 1;
    uVar4 = FUN_1808d4b90(param_1);
  }
  return uVar4;
}



undefined8 FUN_1808d5116(void)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong unaff_RBX;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  undefined8 extraout_XMM0_Qb;
  
  uVar3 = FUN_1808b2f30(unaff_RBX + 0x48);
  if ((int)uVar3 == 0) {
    uVar3 = FUN_1808b2f30(unaff_RBX + 0x48,0xb);
    if ((int)uVar3 == 0) {
      uVar3 = FUN_1808b2f30(unaff_RBX + 0x48,0x1c);
      if ((int)uVar3 == 0) {
        lVar5 = *(longlong *)(unaff_RBX + 0xa0);
        fVar9 = *(float *)(unaff_RBX + 0xb0) * 0.017453292;
        *(float *)(unaff_RBX + 0xbc) = fVar9;
        if (((*(byte *)(lVar5 + 0x54) & 1) != 0) && (*(longlong *)(unaff_RBX + 0x98) != 0)) {
          if (*(longlong *)(unaff_RBX + 0x98) == -200) {
            return 0x1c;
          }
          uVar2 = func_0x000180855b70();
          auVar7._0_8_ = FUN_1808d4490();
          auVar7._8_8_ = extraout_XMM0_Qb;
          auVar8._4_12_ = auVar7._4_12_;
          auVar8._0_4_ = (float)auVar7._0_8_ * (float)uVar2 * 2.0833333e-05 +
                         *(float *)(unaff_RBX + 0xbc);
          fVar9 = (float)fmodf(auVar8._0_8_,0x40c90fdb);
          lVar5 = *(longlong *)(unaff_RBX + 0xa0);
          *(float *)(unaff_RBX + 0xbc) = fVar9;
        }
        uVar6 = func_0x0001808d3880();
        *(undefined4 *)(unaff_RBX + 0xb8) = uVar6;
        if (*(int *)(lVar5 + 0x50) - 5U < 2) {
          FUN_1808edbf0(1,fVar9,unaff_RBX + 200);
          puVar1 = *(uint **)(unaff_RBX + 0xc0);
          uVar4 = *puVar1 << 0xb ^ *puVar1;
          *puVar1 = puVar1[1];
          puVar1[1] = puVar1[2];
          uVar2 = puVar1[3];
          puVar1[2] = uVar2;
          uVar4 = (uVar2 >> 0xb ^ uVar4) >> 8 ^ uVar2 ^ uVar4;
          puVar1[3] = uVar4;
          fVar9 = (float)(uVar4 & 0x7fffffff) * 4.656613e-10;
          *(float *)(unaff_RBX + 0xcc) = (fVar9 + fVar9) - 1.0;
        }
        *(undefined4 *)(unaff_RBX + 0x68) = 1;
        uVar3 = FUN_1808d4b90();
      }
    }
  }
  return uVar3;
}






// 函数: void FUN_1808d51a6(void)
void FUN_1808d51a6(void)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  longlong unaff_RBX;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 extraout_XMM0_Qb;
  
  uVar3 = func_0x000180855b70();
  auVar8._0_8_ = FUN_1808d4490();
  auVar8._8_8_ = extraout_XMM0_Qb;
  auVar9._4_12_ = auVar8._4_12_;
  auVar9._0_4_ = (float)auVar8._0_8_ * (float)uVar3 * 2.0833333e-05 + *(float *)(unaff_RBX + 0xbc);
  uVar5 = fmodf(auVar9._0_8_,0x40c90fdb);
  lVar1 = *(longlong *)(unaff_RBX + 0xa0);
  *(undefined4 *)(unaff_RBX + 0xbc) = uVar5;
  uVar6 = func_0x0001808d3880();
  *(undefined4 *)(unaff_RBX + 0xb8) = uVar6;
  if (*(int *)(lVar1 + 0x50) - 5U < 2) {
    FUN_1808edbf0(1,uVar5,unaff_RBX + 200);
    puVar2 = *(uint **)(unaff_RBX + 0xc0);
    uVar4 = *puVar2 << 0xb ^ *puVar2;
    *puVar2 = puVar2[1];
    puVar2[1] = puVar2[2];
    uVar3 = puVar2[3];
    puVar2[2] = uVar3;
    uVar4 = (uVar3 >> 0xb ^ uVar4) >> 8 ^ uVar3 ^ uVar4;
    puVar2[3] = uVar4;
    fVar7 = (float)(uVar4 & 0x7fffffff) * 4.656613e-10;
    *(float *)(unaff_RBX + 0xcc) = (fVar7 + fVar7) - 1.0;
  }
  *(undefined4 *)(unaff_RBX + 0x68) = 1;
  FUN_1808d4b90();
  return;
}






// 函数: void FUN_1808d5293(void)
void FUN_1808d5293(void)

{
  return;
}






// 函数: void FUN_1808d5298(void)
void FUN_1808d5298(void)

{
  return;
}



undefined8 FUN_1808d52a0(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)0x0;
  *param_1 = param_2;
  plVar1 = param_1 + 4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  plVar4 = (longlong *)(*plVar1 + -8);
  if (*plVar1 == 0) {
    plVar4 = plVar5;
  }
  plVar2 = plVar5;
  if (plVar4 != (longlong *)0x0) {
    plVar2 = plVar4 + 1;
  }
  while( true ) {
    if (plVar2 == plVar1) {
      return 0;
    }
    plVar4 = plVar2 + -1;
    if (plVar2 == (longlong *)0x0) {
      plVar4 = plVar5;
    }
    uVar3 = (**(code **)*plVar4)();
    if ((int)uVar3 != 0) break;
    if (plVar2 == plVar1) {
      return 0;
    }
    plVar4 = (longlong *)(*plVar2 + -8);
    if (*plVar2 == 0) {
      plVar4 = plVar5;
    }
    plVar2 = plVar5;
    if (plVar4 != (longlong *)0x0) {
      plVar2 = plVar4 + 1;
    }
  }
  return uVar3;
}



undefined8 FUN_1808d5330(longlong param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  undefined8 extraout_XMM0_Qb;
  
  *(undefined4 *)(param_1 + 0x68) = 4;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x98) + 0x44);
  if (iVar1 == 0) {
    uVar4 = FUN_1808b2f30(param_1 + 0x48,0xc);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  }
  else if ((iVar1 == 1) && (uVar4 = FUN_1808b2f30(param_1 + 0x48,0xd), (int)uVar4 != 0)) {
    return uVar4;
  }
  puVar3 = *(uint **)(param_1 + 0xa0);
  uVar5 = *puVar3 << 0xb ^ *puVar3;
  *puVar3 = puVar3[1];
  puVar3[1] = puVar3[2];
  uVar2 = puVar3[3];
  puVar3[2] = uVar2;
  uVar5 = (uVar2 >> 0xb ^ uVar5) >> 8 ^ uVar2 ^ uVar5;
  puVar3[3] = uVar5;
  *(undefined4 *)(param_1 + 0x68) = 2;
  *(float *)(param_1 + 0xb0) = (float)(uVar5 & 0x7fffffff) * 4.656613e-10;
  fVar8 = 0.0;
  if (*(int *)(param_1 + 0xb4) == 0) {
    fVar8 = (*(float *)(param_1 + 0xac) - *(float *)(param_1 + 0xa8)) * *(float *)(param_1 + 0xb0) +
            *(float *)(param_1 + 0xa8);
  }
  else if (*(int *)(param_1 + 0xb4) == 1) {
    fVar8 = (float)sinf(*(float *)(param_1 + 0xa8) * 0.03141593);
    auVar6._0_8_ = sinf(*(float *)(param_1 + 0xac) * 0.03141593);
    auVar6._8_8_ = extraout_XMM0_Qb;
    auVar7._4_12_ = auVar6._4_12_;
    auVar7._0_4_ = ((float)auVar6._0_8_ - fVar8) * *(float *)(param_1 + 0xb0) + fVar8;
    fVar8 = (float)asinf(auVar7._0_8_);
    fVar8 = fVar8 * 31.830988;
  }
  if (fVar8 != *(float *)(param_1 + 0x6c)) {
    *(float *)(param_1 + 0x6c) = fVar8;
    if ((*(longlong *)(param_1 + 0x70) != 0) &&
       (uVar4 = FUN_1808b3060(*(longlong *)(param_1 + 0x70),0), (int)uVar4 != 0)) {
      return uVar4;
    }
  }
  return 0;
}



undefined8 FUN_1808d53f0(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined1 auStackX_8 [8];
  undefined1 auStackX_10 [8];
  undefined1 auStackX_18 [16];
  
  *(undefined4 *)(param_1 + 0x68) = 3;
  puVar1 = *(ulonglong **)(param_1 + 0x88);
  fVar4 = 0.0;
  uVar2 = *puVar1;
  if (uVar2 < puVar1[2]) {
    fVar4 = (float)(longlong)(puVar1[2] - uVar2) / (float)(uint)puVar1[3];
  }
  *(float *)(param_1 + 200) = fVar4 - *(float *)(param_1 + 0xc0);
  uVar3 = FUN_1808d35c0(param_1,uVar2,auStackX_18,auStackX_10,auStackX_8);
  *(undefined4 *)(param_1 + 0xcc) = uVar3;
  return 0;
}



undefined8 FUN_1808d5480(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(int *)(param_1 + 0x1c) != 2) {
    if (*(int *)(param_1 + 0x1c) < 1) {
      *(undefined8 *)(param_1 + 0x10) = param_2;
    }
    plVar4 = (longlong *)0x0;
    *(undefined4 *)(param_1 + 0x1c) = 2;
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0x20) + -8);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      plVar3 = plVar4;
    }
    plVar1 = plVar4;
    if (plVar3 != (longlong *)0x0) {
      plVar1 = plVar3 + 1;
    }
    while (plVar1 != (longlong *)(param_1 + 0x20)) {
      plVar3 = plVar1 + -1;
      if (plVar1 == (longlong *)0x0) {
        plVar3 = plVar4;
      }
      uVar2 = (**(code **)(*plVar3 + 8))();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (plVar1 == (longlong *)(param_1 + 0x20)) {
        return 0;
      }
      plVar3 = (longlong *)(*plVar1 + -8);
      if (*plVar1 == 0) {
        plVar3 = plVar4;
      }
      plVar1 = plVar4;
      if (plVar3 != (longlong *)0x0) {
        plVar1 = plVar3 + 1;
      }
    }
  }
  return 0;
}



undefined8 FUN_1808d5520(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if (*(int *)(param_1 + 0x1c) < 1) {
    plVar6 = (longlong *)0x0;
    *(undefined4 *)(param_1 + 0x1c) = 1;
    plVar1 = (longlong *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x10) = param_2;
    plVar5 = (longlong *)(*plVar1 + -8);
    if (*plVar1 == 0) {
      plVar5 = plVar6;
    }
    plVar2 = plVar6;
    if (plVar5 != (longlong *)0x0) {
      plVar2 = plVar5 + 1;
    }
    while (plVar2 != plVar1) {
      plVar5 = plVar2 + -1;
      if (plVar2 == (longlong *)0x0) {
        plVar5 = plVar6;
      }
      cVar3 = (**(code **)(*plVar5 + 0x18))(plVar5);
      if ((cVar3 != '\0') && (uVar4 = (**(code **)(*plVar5 + 8))(plVar5), (int)uVar4 != 0)) {
        return uVar4;
      }
      if (plVar2 == plVar1) {
        return 0;
      }
      plVar5 = (longlong *)(*plVar2 + -8);
      if (*plVar2 == 0) {
        plVar5 = plVar6;
      }
      plVar2 = plVar6;
      if (plVar5 != (longlong *)0x0) {
        plVar2 = plVar5 + 1;
      }
    }
  }
  return 0;
}



undefined8 FUN_1808d55e0(longlong param_1)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  float fVar3;
  
  puVar1 = *(ulonglong **)(param_1 + 0x70);
  fVar3 = 0.0;
  if (*puVar1 < puVar1[1]) {
    fVar3 = (float)(longlong)(puVar1[1] - *puVar1) / (float)(uint)puVar1[3];
  }
  fVar3 = fVar3 - *(float *)(param_1 + 0xa8);
  if (fVar3 != *(float *)(param_1 + 0xac)) {
    *(float *)(param_1 + 0xac) = fVar3;
    uVar2 = FUN_1808d4500(param_1 + -0x18);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}



undefined8 FUN_1808d5650(longlong param_1)

{
  float fVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  puVar2 = *(ulonglong **)(param_1 + 0x70);
  fVar6 = 0.0;
  if (*puVar2 < puVar2[1]) {
    fVar6 = (float)(longlong)(puVar2[1] - *puVar2) / (float)(uint)puVar2[3];
  }
  fVar5 = *(float *)(param_1 + 0xa0);
  fVar4 = (float)FUN_1808d4490(param_1 + -0x18);
  fVar1 = *(float *)(param_1 + 0xa4);
  fVar5 = (float)fmodf(fVar1 + fVar4 * (fVar6 - fVar5),0x40c90fdb);
  if (fVar1 != fVar5) {
    *(float *)(param_1 + 0xa4) = fVar5;
    *(float *)(param_1 + 0xa0) = fVar6;
    uVar3 = FUN_1808d4b90(param_1 + -0x18);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  return 0;
}



undefined8 FUN_1808d5710(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)0x0;
  plVar4 = (longlong *)(*param_1 + -8);
  if (*param_1 == 0) {
    plVar4 = plVar5;
  }
  plVar1 = plVar5;
  if (plVar4 != (longlong *)0x0) {
    plVar1 = plVar4 + 1;
  }
  while( true ) {
    if (plVar1 == param_1) {
      return 0;
    }
    plVar4 = plVar1 + -1;
    if (plVar1 == (longlong *)0x0) {
      plVar4 = plVar5;
    }
    if (plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)&DAT_00000018;
      plVar2 = (longlong *)0x68;
    }
    else {
      plVar2 = plVar4 + 10;
    }
    if ((((int)*plVar2 - 2U & 0xfffffffd) != 0) && (uVar3 = (**(code **)*plVar4)(), (int)uVar3 != 0)
       ) break;
    if (plVar1 == param_1) {
      return 0;
    }
    plVar4 = (longlong *)(*plVar1 + -8);
    if (*plVar1 == 0) {
      plVar4 = plVar5;
    }
    plVar1 = plVar5;
    if (plVar4 != (longlong *)0x0) {
      plVar1 = plVar4 + 1;
    }
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808d58e0(undefined8 *param_1)
void FUN_1808d58e0(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  
  plVar9 = (longlong *)0x0;
  *param_1 = &UNK_180988788;
  param_1[3] = 0;
  lVar2 = param_1[8];
  if ((lVar2 != 0) && (iVar1 = *(int *)(lVar2 + 0x50), 0 < iVar1)) {
    plVar4 = plVar9;
    puVar5 = *(undefined8 **)(lVar2 + 0x48);
    do {
      iVar3 = (int)plVar4;
      if ((undefined8 *)*puVar5 == param_1) {
        if ((-1 < iVar3) && (iVar3 < iVar1)) {
          iVar10 = (iVar1 - iVar3) + -1;
          if (0 < iVar10) {
            puVar5 = *(undefined8 **)(lVar2 + 0x48) + iVar3;
                    // WARNING: Subroutine does not return
            memmove(puVar5,puVar5 + 1,(longlong)iVar10 << 3);
          }
          *(int *)(lVar2 + 0x50) = iVar1 + -1;
        }
        break;
      }
      plVar4 = (longlong *)(ulonglong)(iVar3 + 1U);
      puVar5 = puVar5 + 1;
    } while ((int)(iVar3 + 1U) < iVar1);
  }
  for (plVar4 = (longlong *)param_1[9];
      ((longlong *)param_1[9] <= plVar4 &&
      (plVar4 < (longlong *)param_1[9] + *(int *)(param_1 + 10))); plVar4 = plVar4 + 1) {
    *(undefined8 *)(*plVar4 + 0x40) = 0;
  }
  plVar4 = param_1 + 0xb;
  plVar6 = (longlong *)(param_1[0xb] + -8);
  if (param_1[0xb] == 0) {
    plVar6 = plVar9;
  }
  plVar8 = plVar9;
  if (plVar6 != (longlong *)0x0) {
    plVar8 = plVar6 + 1;
  }
  while (plVar8 != plVar4) {
    plVar6 = plVar8 + -1;
    if (plVar8 == (longlong *)0x0) {
      plVar6 = plVar9;
    }
    if (plVar8 != plVar4) {
      plVar7 = (longlong *)(*plVar8 + -8);
      if (*plVar8 == 0) {
        plVar7 = plVar9;
      }
      plVar8 = plVar9;
      if (plVar7 != (longlong *)0x0) {
        plVar8 = plVar7 + 1;
      }
    }
    (**(code **)(*plVar6 + 8))(plVar6,param_1);
  }
  lVar2 = param_1[7];
  if (lVar2 != 0) {
    FUN_1808b1880(lVar2);
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),lVar2,&UNK_1809887b0,0x34,1);
  }
  func_0x00018085deb0(plVar4);
  FUN_18085dbf0(param_1 + 9);
  plVar9 = param_1 + 1;
  *(longlong *)param_1[2] = *plVar9;
  *(undefined8 *)(*plVar9 + 8) = param_1[2];
  param_1[2] = plVar9;
  *plVar9 = (longlong)plVar9;
  *(longlong **)param_1[2] = plVar9;
  *(undefined8 *)(*plVar9 + 8) = param_1[2];
  param_1[2] = plVar9;
  *plVar9 = (longlong)plVar9;
  return;
}






// 函数: void FUN_1808d5aa0(undefined8 *param_1)
void FUN_1808d5aa0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  *param_1 = &UNK_1809875b0;
  FUN_1808d5ee0();
  lVar5 = param_1[8];
  plVar1 = param_1 + 8;
  plVar6 = (longlong *)0x0;
  plVar3 = (longlong *)(lVar5 + -0x18);
  if (lVar5 == 0) {
    plVar3 = plVar6;
  }
  plVar2 = plVar6;
  if (plVar3 != (longlong *)0x0) {
    plVar2 = plVar3 + 3;
  }
  if (plVar2 != plVar1) {
    do {
      if (plVar2 == plVar1) break;
      lVar5 = *plVar2;
      plVar3 = (longlong *)(lVar5 + -0x18);
      if (lVar5 == 0) {
        plVar3 = plVar6;
      }
      plVar4 = plVar6;
      if (plVar3 != (longlong *)0x0) {
        plVar4 = plVar3 + 3;
      }
      *(longlong *)plVar2[1] = lVar5;
      *(longlong *)(*plVar2 + 8) = plVar2[1];
      plVar2[1] = (longlong)plVar2;
      *plVar2 = (longlong)plVar2;
      plVar2 = plVar4;
    } while (plVar4 != plVar1);
    lVar5 = *plVar1;
  }
  *(longlong *)param_1[9] = lVar5;
  plVar3 = param_1 + 3;
  *(undefined8 *)(*plVar1 + 8) = param_1[9];
  param_1[9] = plVar1;
  *plVar1 = (longlong)plVar1;
  *(longlong **)param_1[9] = plVar1;
  *(undefined8 *)(*plVar1 + 8) = param_1[9];
  param_1[9] = plVar1;
  *plVar1 = (longlong)plVar1;
  *(longlong *)param_1[4] = *plVar3;
  *(undefined8 *)(*plVar3 + 8) = param_1[4];
  param_1[4] = plVar3;
  *plVar3 = (longlong)plVar3;
  *(longlong **)param_1[4] = plVar3;
  *(undefined8 *)(*plVar3 + 8) = param_1[4];
  param_1[4] = plVar3;
  *plVar3 = (longlong)plVar3;
  plVar1 = param_1 + 1;
  *(longlong *)param_1[2] = *plVar1;
  *(undefined8 *)(*plVar1 + 8) = param_1[2];
  param_1[2] = plVar1;
  *plVar1 = (longlong)plVar1;
  *(longlong **)param_1[2] = plVar1;
  *(undefined8 *)(*plVar1 + 8) = param_1[2];
  param_1[2] = plVar1;
  *plVar1 = (longlong)plVar1;
  return;
}



longlong * FUN_1808d5bd0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar1 = (longlong *)(param_1 + 0x40);
  plVar6 = (longlong *)0x0;
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x40) + -0x18);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    plVar3 = plVar6;
  }
  plVar5 = plVar6;
  if (plVar3 != (longlong *)0x0) {
    plVar5 = plVar3 + 3;
  }
  while (plVar5 != plVar1) {
    plVar3 = plVar5 + -3;
    if (plVar5 == (longlong *)0x0) {
      plVar3 = plVar6;
    }
    plVar3 = (longlong *)
             FUN_1808c6c60(plVar3,*(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x28),0);
    if ((int)plVar3 != 0) {
      return plVar3;
    }
    if (plVar5 == plVar1) break;
    plVar3 = (longlong *)(*plVar5 + -0x18);
    if (*plVar5 == 0) {
      plVar3 = plVar6;
    }
    plVar5 = plVar6;
    if (plVar3 != (longlong *)0x0) {
      plVar5 = plVar3 + 3;
    }
  }
  plVar3 = (longlong *)(*plVar1 + -0x18);
  if (*plVar1 == 0) {
    plVar3 = plVar6;
  }
  plVar5 = plVar6;
  if (plVar3 != (longlong *)0x0) {
    plVar5 = plVar3 + 3;
  }
  while (plVar5 != plVar1) {
    plVar3 = plVar5 + -3;
    if (plVar5 == (longlong *)0x0) {
      plVar3 = plVar6;
    }
    plVar3 = (longlong *)FUN_1808c6c00(plVar3,1);
    if ((int)plVar3 != 0) {
      return plVar3;
    }
    if (plVar5 == plVar1) break;
    plVar3 = (longlong *)(*plVar5 + -0x18);
    if (*plVar5 == 0) {
      plVar3 = plVar6;
    }
    plVar5 = plVar6;
    if (plVar3 != (longlong *)0x0) {
      plVar5 = plVar3 + 3;
    }
  }
  if ((*(uint *)(param_1 + 0x2c) >> 1 & 1) != 0) {
    return (longlong *)0x0;
  }
  lVar2 = *(longlong *)(param_1 + 0x38);
  plVar1 = (longlong *)(param_1 + 8);
  if (plVar1 == (longlong *)0x0) {
LAB_1808d5d0a:
    plVar6 = (longlong *)0x1c;
  }
  else {
    plVar3 = (longlong *)*plVar1;
    plVar5 = plVar6;
    if (plVar3 != plVar1) {
      do {
        plVar3 = (longlong *)*plVar3;
        uVar4 = (int)plVar5 + 1;
        plVar5 = (longlong *)(ulonglong)uVar4;
      } while (plVar3 != plVar1);
      if (uVar4 != 0) goto LAB_1808d5d0a;
    }
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar2 + 0x60);
    *plVar1 = lVar2 + 0x58;
    *(longlong **)(lVar2 + 0x60) = plVar1;
    **(longlong **)(param_1 + 0x10) = (longlong)plVar1;
  }
  if ((int)plVar6 == 0) {
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 2;
    return (longlong *)0x0;
  }
  return plVar6;
}



undefined8 FUN_1808d5da0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)0x0;
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x40) + -0x18);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    plVar3 = plVar4;
  }
  plVar1 = plVar4;
  if (plVar3 != (longlong *)0x0) {
    plVar1 = plVar3 + 3;
  }
  while( true ) {
    if (plVar1 == (longlong *)(param_1 + 0x40)) {
      return 0;
    }
    plVar3 = plVar1 + -3;
    if (plVar1 == (longlong *)0x0) {
      plVar3 = plVar4;
    }
    uVar2 = FUN_1808c6c60(plVar3,*(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x28),0);
    if ((int)uVar2 != 0) break;
    if (plVar1 == (longlong *)(param_1 + 0x40)) {
      return 0;
    }
    plVar3 = (longlong *)(*plVar1 + -0x18);
    if (*plVar1 == 0) {
      plVar3 = plVar4;
    }
    plVar1 = plVar4;
    if (plVar3 != (longlong *)0x0) {
      plVar1 = plVar3 + 3;
    }
  }
  return uVar2;
}



undefined8 FUN_1808d5e40(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x40);
  if (lVar2 == 0) {
    return 0x1c;
  }
  iVar1 = *(int *)(lVar2 + 0x50);
  iVar3 = 0;
  if (0 < iVar1) {
    plVar4 = *(longlong **)(lVar2 + 0x48);
    do {
      if (*plVar4 == param_1) {
        if (iVar3 < 0) {
          return 0x1c;
        }
        if (iVar1 <= iVar3) {
          return 0x1c;
        }
        iVar5 = (iVar1 - iVar3) + -1;
        if (iVar5 < 1) {
          *(int *)(lVar2 + 0x50) = iVar1 + -1;
          *(undefined8 *)(param_1 + 0x40) = 0;
          return 0;
        }
        plVar4 = *(longlong **)(lVar2 + 0x48) + iVar3;
                    // WARNING: Subroutine does not return
        memmove(plVar4,plVar4 + 1,(longlong)iVar5 << 3);
      }
      iVar3 = iVar3 + 1;
      plVar4 = plVar4 + 1;
    } while (iVar3 < iVar1);
  }
  return 0x4a;
}



undefined8 FUN_1808d5ee0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if ((*(uint *)(param_1 + 0x2c) >> 1 & 1) != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    **(longlong **)(param_1 + 0x10) = *plVar3;
    *(undefined8 *)(*plVar3 + 8) = *(undefined8 *)(param_1 + 0x10);
    *(longlong **)(param_1 + 0x10) = plVar3;
    *plVar3 = (longlong)plVar3;
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffffffd;
  }
  plVar4 = (longlong *)0x0;
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x40) + -0x18);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    plVar3 = plVar4;
  }
  plVar1 = plVar4;
  if (plVar3 != (longlong *)0x0) {
    plVar1 = plVar3 + 3;
  }
  while (plVar1 != (longlong *)(param_1 + 0x40)) {
    plVar3 = plVar1 + -3;
    if (plVar1 == (longlong *)0x0) {
      plVar3 = plVar4;
    }
    uVar2 = func_0x0001808c6bf0(plVar3);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (plVar1 == (longlong *)(param_1 + 0x40)) break;
    plVar3 = (longlong *)(*plVar1 + -0x18);
    if (*plVar1 == 0) {
      plVar3 = plVar4;
    }
    plVar1 = plVar4;
    if (plVar3 != (longlong *)0x0) {
      plVar1 = plVar3 + 3;
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 0x7f7fffff;
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffffffe;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




