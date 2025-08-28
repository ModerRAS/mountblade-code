#include "TaleWorlds.Native.Split.h"

// 99_part_13_part068.c - 5 个函数

// 函数: void FUN_1808d6c72(void)
void FUN_1808d6c72(void)

{
  ulonglong in_stack_000000b8;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000b8 ^ (ulonglong)&stack0x00000000);
}



undefined8 FUN_1808d6cc0(void)

{
  FUN_1808d5ee0();
  return 0;
}



undefined8 FUN_1808d6cd0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  if ((*(byte *)(param_1 + 0x2c) & 1) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x50);
    plVar9 = (longlong *)0x0;
    plVar8 = plVar9;
    if (lVar1 != 0) {
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x2b0) + 0x30);
      iVar4 = FUN_18085ab70(lVar1 + 200);
      plVar8 = (longlong *)(iVar4 + lVar2);
    }
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x40) + -0x18);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      plVar6 = plVar9;
    }
    plVar3 = plVar9;
    if (plVar6 != (longlong *)0x0) {
      plVar3 = plVar6 + 3;
    }
    while (plVar3 != (longlong *)(param_1 + 0x40)) {
      plVar6 = plVar3 + -3;
      if (plVar3 == (longlong *)0x0) {
        plVar6 = plVar9;
      }
      uVar5 = FUN_1808c6c60(plVar6,param_4,plVar8);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      if (plVar3 == (longlong *)(param_1 + 0x40)) break;
      plVar6 = (longlong *)(*plVar3 + -0x18);
      if (*plVar3 == 0) {
        plVar6 = plVar9;
      }
      plVar3 = plVar9;
      if (plVar6 != (longlong *)0x0) {
        plVar3 = plVar6 + 3;
      }
    }
    lVar1 = *(longlong *)(param_1 + 0x50);
    if ((lVar1 != 0) && (2 < *(int *)(lVar1 + 0x2e4))) {
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x2b0) + 0x30);
      iVar4 = FUN_18085ab70(lVar1 + 200);
      lVar1 = *(longlong *)(param_1 + 0x30);
      for (uVar7 = *(ulonglong *)(lVar1 + 0x58);
          (*(ulonglong *)(lVar1 + 0x58) <= uVar7 &&
          (uVar7 < (longlong)*(int *)(lVar1 + 0x60) * 0x10 + *(ulonglong *)(lVar1 + 0x58)));
          uVar7 = uVar7 + 0x10) {
        FUN_180862000(*(undefined8 *)(param_1 + 0x50),uVar7,lVar2 + iVar4 + 0x40);
      }
      *(undefined4 *)(param_1 + 0x28) = param_4;
    }
  }
  return 0;
}



undefined8 FUN_1808d6e30(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 auStackX_8 [2];
  
  if (*(int *)(*(longlong *)(param_1 + 0x18) + 0x30) != 0) {
    auStackX_8[0] = 0;
    lVar4 = (**(code **)(*(longlong *)(param_2 + 8) + 0x30))(param_2 + 8);
    lVar4 = *(longlong *)(lVar4 + 8);
    uVar1 = *(undefined1 *)(lVar4 + 0x781);
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x30);
    uVar3 = *(undefined4 *)(lVar4 + 0x550);
    uVar6 = func_0x000180860320(param_2);
    uVar7 = func_0x000180860340(param_2);
    uVar5 = FUN_1808d6010(uVar2,uVar3,lVar4 + 0x554,param_2,uVar7,uVar6,uVar1,auStackX_8);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    fVar8 = (float)func_0x00018084dcc0(*(undefined8 *)(param_1 + 0x18),auStackX_8[0]);
    if (((*(char *)(param_1 + 0x34) == '\0') ||
        ((*(uint *)(*(longlong *)(param_1 + 0x18) + 0x34) >> 1 & 1) == 0)) &&
       (fVar8 != *(float *)(param_1 + 0x20))) {
      *(float *)(param_1 + 0x20) = fVar8;
      FUN_1808d7020(param_1);
      *(undefined1 *)(param_1 + 0x35) = 0;
    }
  }
  return 0;
}



undefined8 FUN_1808d6e57(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong in_RAX;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  longlong in_R11;
  longlong unaff_R14;
  float fVar5;
  undefined4 uStack0000000000000070;
  
  *(undefined8 *)(in_R11 + 0x10) = unaff_RBX;
  *(undefined8 *)(in_R11 + 0x18) = unaff_RBP;
  *(undefined8 *)(in_R11 + 0x20) = unaff_RSI;
  *(undefined8 *)(in_R11 + -0x18) = unaff_RDI;
  uStack0000000000000070 = 0;
  lVar3 = (**(code **)(in_RAX + 0x30))();
  lVar3 = *(longlong *)(lVar3 + 8);
  uVar1 = *(undefined4 *)(*(longlong *)(unaff_R14 + 0x18) + 0x30);
  uVar2 = *(undefined4 *)(lVar3 + 0x550);
  func_0x000180860320();
  func_0x000180860340();
  uVar4 = FUN_1808d6010(uVar1,uVar2,lVar3 + 0x554);
  if ((int)uVar4 == 0) {
    fVar5 = (float)func_0x00018084dcc0(*(undefined8 *)(unaff_R14 + 0x18),uStack0000000000000070);
    if (((*(char *)(unaff_R14 + 0x34) == '\0') ||
        ((*(uint *)(*(longlong *)(unaff_R14 + 0x18) + 0x34) >> 1 & 1) == 0)) &&
       (fVar5 != *(float *)(unaff_R14 + 0x20))) {
      *(float *)(unaff_R14 + 0x20) = fVar5;
      FUN_1808d7020();
      *(undefined1 *)(unaff_R14 + 0x35) = 0;
    }
    uVar4 = 0;
  }
  return uVar4;
}



undefined8 FUN_1808d6ef4(void)

{
  longlong unaff_R14;
  float fVar1;
  undefined4 in_stack_00000070;
  
  fVar1 = (float)func_0x00018084dcc0(*(undefined8 *)(unaff_R14 + 0x18),in_stack_00000070);
  if (((*(char *)(unaff_R14 + 0x34) == '\0') ||
      ((*(uint *)(*(longlong *)(unaff_R14 + 0x18) + 0x34) >> 1 & 1) == 0)) &&
     (fVar1 != *(float *)(unaff_R14 + 0x20))) {
    *(float *)(unaff_R14 + 0x20) = fVar1;
    FUN_1808d7020();
    *(undefined1 *)(unaff_R14 + 0x35) = 0;
  }
  return 0;
}



undefined8 FUN_1808d6f40(longlong param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined1 in_XMM2 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (param_2 != 2) {
    return 0x1c;
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar2 = *(uint *)(lVar1 + 0x34) >> 3;
  if ((uVar2 & 1) != 0) {
    fVar6 = *(float *)(lVar1 + 0x38);
    fVar5 = *(float *)(lVar1 + 0x3c);
    auVar7._4_12_ = in_XMM2._4_12_;
    auVar7._0_4_ = ((in_XMM2._0_4_ - fVar6) / (fVar5 - fVar6)) * ((fVar5 - fVar6) + 1.0) + fVar6;
    iVar4 = (int)auVar7._0_4_;
    if ((iVar4 != -0x80000000) && ((float)iVar4 != auVar7._0_4_)) {
      auVar9._0_8_ = auVar7._0_8_;
      auVar9._8_4_ = in_XMM2._4_4_;
      auVar9._12_4_ = in_XMM2._4_4_;
      auVar8._8_8_ = auVar9._8_8_;
      auVar8._4_4_ = auVar7._0_4_;
      auVar8._0_4_ = auVar7._0_4_;
      uVar2 = movmskps(uVar2,auVar8);
      auVar7 = ZEXT416((uint)(float)(int)(iVar4 - (uVar2 & 1)));
    }
    in_XMM2 = auVar7;
    if (fVar5 <= in_XMM2._0_4_) {
      in_XMM2._0_4_ = fVar5;
    }
  }
  fVar6 = in_XMM2._0_4_;
  *(float *)(param_1 + 0x24) = fVar6;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if ((0.0 <= fVar6 - *(float *)(param_1 + 0x28)) || ((*(uint *)(lVar1 + 0x34) >> 2 & 1) == 0)) {
    fVar5 = *(float *)(lVar1 + 0x44);
  }
  else {
    fVar5 = *(float *)(lVar1 + 0x48);
  }
  if (((fVar5 == 0.0) || (*(char *)(param_1 + 0x34) == '\0')) || (*(char *)(param_1 + 0x35) != '\0')
     ) {
    uVar3 = FUN_1808d72a0(param_1,fVar6);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return 0;
}



undefined8 FUN_1808d7020(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  undefined1 auVar6 [16];
  
  if (*(longlong *)(param_1 + 0x38) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    uVar2 = *(uint *)(lVar1 + 0x34) >> 3;
    auVar6._0_4_ = *(float *)(param_1 + 0x20);
    if ((uVar2 & 1) != 0) {
      auVar6._0_4_ = *(float *)(lVar1 + 0x38);
      fVar5 = *(float *)(lVar1 + 0x3c);
      auVar6._0_4_ = ((*(float *)(param_1 + 0x20) - auVar6._0_4_) / (fVar5 - auVar6._0_4_)) *
                     ((fVar5 - auVar6._0_4_) + 1.0) + auVar6._0_4_;
      iVar4 = (int)auVar6._0_4_;
      if ((iVar4 != -0x80000000) && ((float)iVar4 != auVar6._0_4_)) {
        auVar6._4_4_ = auVar6._0_4_;
        auVar6._8_8_ = 0;
        uVar2 = movmskps(uVar2,auVar6);
        auVar6._0_4_ = (float)(int)(iVar4 - (uVar2 & 1));
      }
      if (fVar5 <= auVar6._0_4_) {
        auVar6._0_4_ = fVar5;
      }
    }
    *(float *)(param_1 + 0x24) = auVar6._0_4_;
    lVar1 = *(longlong *)(param_1 + 0x18);
    if ((0.0 <= auVar6._0_4_ - *(float *)(param_1 + 0x28)) ||
       ((*(uint *)(lVar1 + 0x34) >> 2 & 1) == 0)) {
      fVar5 = *(float *)(lVar1 + 0x44);
    }
    else {
      fVar5 = *(float *)(lVar1 + 0x48);
    }
    if (((fVar5 == 0.0) || (*(char *)(param_1 + 0x34) == '\0')) ||
       (*(char *)(param_1 + 0x35) != '\0')) {
      uVar3 = FUN_1808d72a0(param_1,auVar6._0_4_);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
  }
  else {
    uVar3 = FUN_1808b3060(*(longlong *)(param_1 + 0x38),0);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  return 0;
}



undefined8 FUN_1808d7110(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)0x0;
  plVar2 = (longlong *)(*(longlong *)(param_1 + 0x40) + -0x18);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    plVar2 = plVar5;
  }
  plVar4 = plVar5;
  if (plVar2 != (longlong *)0x0) {
    plVar4 = plVar2 + 3;
  }
  do {
    if (plVar4 == (longlong *)(param_1 + 0x40)) {
      return 0;
    }
    plVar2 = plVar4 + -3;
    if (plVar4 == (longlong *)0x0) {
      plVar2 = plVar5;
    }
    if (plVar4 != (longlong *)(param_1 + 0x40)) {
      plVar3 = (longlong *)(*plVar4 + -0x18);
      if (*plVar4 == 0) {
        plVar3 = plVar5;
      }
      plVar4 = plVar5;
      if (plVar3 != (longlong *)0x0) {
        plVar4 = plVar3 + 3;
      }
    }
    uVar1 = func_0x0001808bef20(param_2,plVar2);
  } while ((int)uVar1 == 0);
  return uVar1;
}



undefined8 FUN_1808d71b0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  *(char *)(param_1 + 0x34) = param_2;
  if (param_2 == '\0') {
    uVar1 = FUN_1808d72a0(param_1,*(undefined4 *)(param_1 + 0x24));
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  else {
    uVar1 = FUN_1808d7020();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}



undefined8 FUN_1808d71e0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    return 0x1c;
  }
  *(longlong *)(param_1 + 0x40) = param_2;
  iVar3 = *(int *)(param_2 + 0x50) + 1;
  uVar4 = (int)*(uint *)(param_2 + 0x54) >> 0x1f;
  iVar1 = (*(uint *)(param_2 + 0x54) ^ uVar4) - uVar4;
  if (iVar1 < iVar3) {
    iVar1 = (int)((float)iVar1 * 1.5);
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    if (iVar3 < 8) {
      iVar3 = 8;
    }
    uVar2 = FUN_180747f10(param_2 + 0x48,iVar3);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  *(longlong *)(*(longlong *)(param_2 + 0x48) + (longlong)*(int *)(param_2 + 0x50) * 8) = param_1;
  *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
  uVar2 = FUN_1808d73b0(param_1,*(undefined4 *)(param_2 + 0x20),0);
  return uVar2;
}



undefined8 FUN_1808d72a0(longlong param_1,float param_2)

{
  longlong *plVar1;
  float fVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (((*(char *)(param_1 + 0x34) == '\0') ||
      ((*(uint *)(*(longlong *)(param_1 + 0x18) + 0x34) >> 1 & 1) == 0)) &&
     (fVar2 = *(float *)(param_1 + 0x28), fVar2 != param_2)) {
    plVar8 = (longlong *)0x0;
    *(float *)(param_1 + 0x28) = param_2;
    plVar1 = (longlong *)(param_1 + 0x58);
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x60) + -8);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      plVar5 = plVar8;
    }
    plVar3 = plVar5 + 1;
    if (plVar5 == (longlong *)0x0) {
      plVar3 = plVar8;
    }
    plVar7 = plVar8;
    if (plVar3 != plVar1) {
      plVar7 = plVar5;
    }
    plVar5 = (longlong *)(*plVar1 + -8);
    if (*plVar1 == 0) {
      plVar5 = plVar8;
    }
    plVar3 = plVar8;
    if (plVar5 != (longlong *)0x0) {
      plVar3 = plVar5 + 1;
    }
    if (plVar7 != (longlong *)0x0) {
      do {
        plVar5 = plVar3 + -1;
        if (plVar3 == (longlong *)0x0) {
          plVar5 = plVar8;
        }
        uVar4 = (**(code **)*plVar5)(plVar5,param_1,fVar2,param_2);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        if (plVar3 != plVar1) {
          plVar6 = (longlong *)(*plVar3 + -8);
          if (*plVar3 == 0) {
            plVar6 = plVar8;
          }
          plVar3 = plVar8;
          if (plVar6 != (longlong *)0x0) {
            plVar3 = plVar6 + 1;
          }
        }
      } while (plVar5 != plVar7);
    }
  }
  return 0;
}



undefined8 FUN_1808d73b0(longlong param_1,undefined8 param_2,char param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  uVar7 = (undefined4)((ulonglong)param_2 >> 0x20);
  fVar8 = (float)param_2;
  for (puVar5 = *(undefined8 **)(param_1 + 0x48);
      (*(undefined8 **)(param_1 + 0x48) <= puVar5 &&
      (puVar5 < *(undefined8 **)(param_1 + 0x48) + *(int *)(param_1 + 0x50))); puVar5 = puVar5 + 1)
  {
    uVar4 = FUN_1808d73b0(*puVar5,fVar8,param_3);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  }
  if ((*(char *)(param_1 + 0x34) == '\0') ||
     ((*(uint *)(*(longlong *)(param_1 + 0x18) + 0x34) >> 1 & 1) == 0)) {
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x34);
    uVar2 = uVar3 >> 4;
    if ((uVar2 & 1) == 0) {
      if ((((uVar3 >> 3 & 1) != 0) && (iVar6 = (int)fVar8, iVar6 != -0x80000000)) &&
         ((float)iVar6 != fVar8)) {
        auVar10._8_4_ = uVar7;
        auVar10._0_8_ = param_2;
        auVar10._12_4_ = uVar7;
        auVar9._8_8_ = auVar10._8_8_;
        auVar9._4_4_ = fVar8;
        auVar9._0_4_ = fVar8;
        uVar3 = movmskps(uVar2,auVar9);
        fVar8 = (float)(int)(iVar6 - (uVar3 & 1));
      }
      fVar8 = (float)func_0x00018084dcc0(*(longlong *)(param_1 + 0x18),fVar8);
      if (((*(char *)(param_1 + 0x34) == '\0') ||
          ((*(uint *)(*(longlong *)(param_1 + 0x18) + 0x34) >> 1 & 1) == 0)) &&
         ((fVar8 != *(float *)(param_1 + 0x20) ||
          ((param_3 != '\0' && (*(float *)(param_1 + 0x24) != *(float *)(param_1 + 0x28))))))) {
        if (param_3 != '\0') {
          *(char *)(param_1 + 0x35) = param_3;
          if (*(longlong *)(param_1 + 0x38) != 0) {
            puVar1 = (uint *)(*(longlong *)(param_1 + 0x38) + 0x5c);
            *puVar1 = *puVar1 & 0xfffffffd;
          }
        }
        *(float *)(param_1 + 0x20) = fVar8;
        FUN_1808d7020(param_1);
        *(undefined1 *)(param_1 + 0x35) = 0;
      }
    }
  }
  return 0;
}



undefined8 FUN_1808d74e0(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if (param_2 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x30);
    for (uVar3 = *(ulonglong *)(lVar1 + 0x58);
        (*(ulonglong *)(lVar1 + 0x58) <= uVar3 &&
        (uVar3 < (longlong)*(int *)(lVar1 + 0x60) * 0x10 + *(ulonglong *)(lVar1 + 0x58)));
        uVar3 = uVar3 + 0x10) {
      uVar2 = FUN_180862000(*(undefined8 *)(param_1 + 0x50),uVar3,0);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x28);
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 1;
  return 0;
}



undefined8 FUN_1808d7550(longlong param_1,float param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float afStackX_8 [8];
  
  if (*(char *)(param_1 + 0x34) == '\0') {
    return 0x1c;
  }
  fVar5 = *(float *)(param_1 + 0x28);
  fVar6 = *(float *)(param_1 + 0x24);
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (fVar5 == fVar6) {
    cVar1 = func_0x00018084de30();
    if (cVar1 == '\0') {
      lVar3 = *(longlong *)(param_1 + 0x18);
      if (*(float *)(lVar3 + 0x40) != 0.0) {
        afStackX_8[0] = *(float *)(lVar3 + 0x40) * param_2;
        if ((*(uint *)(lVar3 + 0x34) >> 3 & 1) != 0) {
          uVar4 = modff(afStackX_8[0] + *(float *)(param_1 + 0x2c),afStackX_8);
          lVar3 = *(longlong *)(param_1 + 0x18);
          *(undefined4 *)(param_1 + 0x2c) = uVar4;
        }
        fVar5 = (float)func_0x00018084dcc0(lVar3,afStackX_8[0] + *(float *)(param_1 + 0x20));
        if (((*(char *)(param_1 + 0x34) == '\0') ||
            ((*(uint *)(*(longlong *)(param_1 + 0x18) + 0x34) >> 1 & 1) == 0)) &&
           (fVar5 != *(float *)(param_1 + 0x20))) {
          *(float *)(param_1 + 0x20) = fVar5;
          FUN_1808d7020(param_1);
          *(undefined1 *)(param_1 + 0x35) = 0;
        }
        uVar2 = FUN_1808d72a0(param_1,*(undefined4 *)(param_1 + 0x24));
        if ((int)uVar2 != 0) {
          return uVar2;
        }
      }
    }
  }
  else {
    if ((0.0 <= fVar6 - fVar5) || ((*(uint *)(lVar3 + 0x34) >> 2 & 1) == 0)) {
      fVar7 = *(float *)(lVar3 + 0x44);
    }
    else {
      fVar7 = *(float *)(lVar3 + 0x48);
    }
    if (fVar7 != 0.0) {
      afStackX_8[0] = fVar7 * param_2;
      fVar7 = fVar6 - (*(float *)(param_1 + 0x2c) + fVar5);
      if (afStackX_8[0] <= ABS(fVar7)) {
        if (fVar7 <= 0.0) {
          afStackX_8[0] = -afStackX_8[0];
        }
        if ((*(uint *)(lVar3 + 0x34) >> 3 & 1) != 0) {
          uVar4 = modff(*(float *)(param_1 + 0x2c) + afStackX_8[0],afStackX_8);
          fVar5 = *(float *)(param_1 + 0x28);
          lVar3 = *(longlong *)(param_1 + 0x18);
          *(undefined4 *)(param_1 + 0x2c) = uVar4;
        }
        fVar6 = fVar5 + afStackX_8[0];
      }
      else {
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
    }
    uVar4 = func_0x00018084dcc0(lVar3,fVar6);
    uVar2 = FUN_1808d72a0(param_1,uVar4);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}



undefined8 FUN_1808d75c4(float param_1,float param_2,float param_3,float param_4)

{
  undefined8 uVar1;
  longlong in_RCX;
  longlong unaff_RBX;
  undefined4 uVar2;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float fVar3;
  float unaff_XMM7_Da;
  float fStack0000000000000050;
  
  fStack0000000000000050 = param_2 * unaff_XMM7_Da;
  fVar3 = param_3 - (param_1 + param_4);
  if (fStack0000000000000050 <= ABS(fVar3)) {
    if (fVar3 <= in_XMM4_Da) {
      fStack0000000000000050 = -fStack0000000000000050;
    }
    if ((*(uint *)(in_RCX + 0x34) >> 3 & 1) != 0) {
      uVar2 = modff(in_XMM5_Da + fStack0000000000000050,&stack0x00000050);
      param_4 = *(float *)(unaff_RBX + 0x28);
      in_RCX = *(longlong *)(unaff_RBX + 0x18);
      *(undefined4 *)(unaff_RBX + 0x2c) = uVar2;
    }
    param_3 = param_4 + fStack0000000000000050;
  }
  else {
    *(undefined4 *)(unaff_RBX + 0x2c) = 0;
  }
  uVar2 = func_0x00018084dcc0(in_RCX,param_3);
  uVar1 = FUN_1808d72a0(uVar2,uVar2);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  return 0;
}



undefined8 FUN_1808d7647(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = func_0x00018084dcc0(param_1,param_3);
  uVar1 = FUN_1808d72a0(uVar2,uVar2);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808d77c0(undefined8 *param_1,longlong *param_2)
void FUN_1808d77c0(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 auStack_38 [40];
  ulonglong uStack_10;
  
  uStack_10 = _DAT_180bf00a8 ^ (ulonglong)auStack_58;
  if (*param_2 != 0) {
    lVar1 = *param_2 + 0x10;
    lVar2 = (**(code **)(*(longlong *)*param_1 + 0x280))((longlong *)*param_1,lVar1,1);
    if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18084b240(lVar1,auStack_38);
    }
    *param_2 = lVar2;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_10 ^ (ulonglong)auStack_58);
}






// 函数: void FUN_1808d77e6(longlong *param_1)
void FUN_1808d77e6(longlong *param_1)

{
  longlong in_RAX;
  longlong lVar1;
  longlong *unaff_RBX;
  undefined1 auStackX_20 [8];
  ulonglong in_stack_00000048;
  
  lVar1 = (**(code **)(*param_1 + 0x280))(param_1,in_RAX + 0x10);
  if (lVar1 == 0) {
                    // WARNING: Subroutine does not return
    FUN_18084b240(in_RAX + 0x10,auStackX_20);
  }
  *unaff_RBX = lVar1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000048 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808d7822(void)
void FUN_1808d7822(void)

{
  ulonglong in_stack_00000048;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000048 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808d7840(longlong *param_1,undefined8 param_2,undefined4 param_3)
void FUN_1808d7840(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = param_1 + 4;
  plVar1 = (longlong *)*plVar2;
  if ((plVar1 == plVar2) && ((longlong *)param_1[5] == plVar2)) {
    func_0x00018085dda0(plVar2);
    *(longlong *)param_1[1] = *param_1;
    *(longlong *)(*param_1 + 8) = param_1[1];
    param_1[1] = (longlong)param_1;
    *param_1 = (longlong)param_1;
    *(longlong **)param_1[1] = param_1;
    *(longlong *)(*param_1 + 8) = param_1[1];
    param_1[1] = (longlong)param_1;
    *param_1 = (longlong)param_1;
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_1,param_2,param_3,1);
  }
  if (plVar1 == plVar2) {
    plVar1 = (longlong *)0x0;
  }
  if (plVar1 != (longlong *)0x0) {
    plVar2 = plVar1;
  }
  *(longlong *)plVar2[1] = *plVar2;
  *(longlong *)(*plVar2 + 8) = plVar2[1];
  plVar2[1] = (longlong)plVar2;
  *plVar2 = (longlong)plVar2;
  *(longlong **)plVar2[1] = plVar2;
  *(longlong *)(*plVar2 + 8) = plVar2[1];
  plVar2[1] = (longlong)plVar2;
  *plVar2 = (longlong)plVar2;
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar2,&UNK_180988870,0xc0,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




