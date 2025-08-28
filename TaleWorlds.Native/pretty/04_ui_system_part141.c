#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part141.c - 2 个函数

// 函数: void FUN_18074cec0(longlong *param_1,undefined8 param_2,undefined8 param_3)
void FUN_18074cec0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lStackX_8;
  
  iVar1 = (**(code **)(*param_1 + 0x120))(param_1,0xfffffffe,&lStackX_8);
  if (iVar1 == 0) {
    if ((lStackX_8 != 0) && (iVar1 = FUN_18076f100(lStackX_8,param_2,param_3,1), iVar1 != 0)) {
      return;
    }
    (**(code **)(*param_1 + 0x208))(param_1);
  }
  return;
}



ulonglong FUN_18074cf30(longlong *param_1,float *param_2,float *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint auStackX_8 [2];
  
  uVar1 = (**(code **)(*param_1 + 0x98))(param_1,auStackX_8);
  if ((int)uVar1 == 0) {
    if ((auStackX_8[0] & 0x10) == 0) {
      return 0x28;
    }
    uVar5 = 0x1d;
    if (param_2 != (float *)0x0) {
      uVar2 = 0;
      uVar4 = 0;
      uVar3 = 0;
      if (((uint)param_2[2] & 0x7f800000) == 0x7f800000) {
        uVar3 = uVar5;
      }
      if (((uint)param_2[1] & 0x7f800000) == 0x7f800000) {
        uVar2 = 0x1d;
      }
      if (((uint)*param_2 & 0x7f800000) == 0x7f800000) {
        uVar4 = 0x1d;
      }
      uVar4 = uVar3 | uVar2 | uVar4;
      if (uVar4 != 0) {
        return (ulonglong)uVar4;
      }
      if (((*param_2 != *(float *)(param_1 + 0x10)) ||
          (param_2[1] != *(float *)((longlong)param_1 + 0x84))) ||
         (param_2[2] != *(float *)(param_1 + 0x11))) {
        *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 4;
      }
      param_1[0x10] = *(longlong *)param_2;
      *(float *)(param_1 + 0x11) = param_2[2];
    }
    if (param_3 != (float *)0x0) {
      uVar2 = 0;
      uVar3 = 0;
      if (((uint)param_3[2] & 0x7f800000) == 0x7f800000) {
        uVar3 = uVar5;
      }
      if (((uint)param_3[1] & 0x7f800000) == 0x7f800000) {
        uVar2 = 0x1d;
      }
      uVar4 = 0;
      if (((uint)*param_3 & 0x7f800000) == 0x7f800000) {
        uVar4 = uVar5;
      }
      uVar4 = uVar3 | uVar2 | uVar4;
      if (uVar4 != 0) {
        return (ulonglong)uVar4;
      }
      if (((*param_3 != *(float *)((longlong)param_1 + 0x8c)) ||
          (param_3[1] != *(float *)(param_1 + 0x12))) ||
         (param_3[2] != *(float *)((longlong)param_1 + 0x94))) {
        *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 4;
      }
      *(undefined8 *)((longlong)param_1 + 0x8c) = *(undefined8 *)param_3;
      *(float *)((longlong)param_1 + 0x94) = param_3[2];
    }
    uVar1 = 0;
  }
  return uVar1;
}



ulonglong FUN_18074d100(longlong *param_1,uint *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uStackX_8;
  
  uVar1 = (**(code **)(*param_1 + 0x98))();
  if ((int)uVar1 == 0) {
    if ((uStackX_8 & 0x10) == 0) {
      return 0x28;
    }
    if (param_2 == (uint *)0x0) {
      return 0x1f;
    }
    uVar3 = 0;
    if ((param_2[2] & 0x7f800000) == 0x7f800000) {
      uVar3 = 0x1d;
    }
    uVar2 = 0;
    if ((param_2[1] & 0x7f800000) == 0x7f800000) {
      uVar2 = 0x1d;
    }
    uVar4 = 0;
    if ((*param_2 & 0x7f800000) == 0x7f800000) {
      uVar4 = 0x1d;
    }
    uVar4 = uVar3 | uVar2 | uVar4;
    if (uVar4 == 0) {
      *(undefined8 *)((longlong)param_1 + 0xb4) = *(undefined8 *)param_2;
      uVar3 = param_2[2];
      *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 4;
      *(uint *)((longlong)param_1 + 0xbc) = uVar3;
    }
    uVar1 = (ulonglong)uVar4;
  }
  return uVar1;
}



ulonglong FUN_18074d1f0(longlong *param_1,float param_2,float param_3,float param_4)

{
  uint uVar1;
  ulonglong uVar2;
  uint auStackX_8 [8];
  
  uVar2 = (**(code **)(*param_1 + 0x98))(param_1,auStackX_8);
  if ((int)uVar2 == 0) {
    if ((auStackX_8[0] & 0x10) == 0) {
      uVar2 = 0x28;
    }
    else if ((((uint)param_2 & 0x7f800000) == 0x7f800000) ||
            (((uint)param_3 & 0x7f800000) == 0x7f800000)) {
      uVar2 = 0x1d;
    }
    else {
      uVar1 = 0x1d;
      if (((uint)param_4 & 0x7f800000) != 0x7f800000) {
        if (param_3 < param_2) {
          return 0x1f;
        }
        if (1.0 <= param_4) {
          param_4 = 1.0;
        }
        *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 4;
        *(float *)(param_1 + 0x15) = param_2;
        *(float *)((longlong)param_1 + 0xac) = param_3;
        if (param_4 <= 0.0) {
          param_4 = 0.0;
        }
        *(float *)(param_1 + 0x16) = param_4;
        uVar1 = 0;
      }
      uVar2 = (ulonglong)uVar1;
    }
  }
  return uVar2;
}



uint FUN_18074d2f0(longlong param_1,longlong param_2,int param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_3 < 0) {
    return 0x1f;
  }
  if ((param_2 != 0) && (0 < param_3)) {
    lVar6 = 0;
    puVar4 = (uint *)(param_2 + 8);
    uVar5 = 0x1d;
    do {
      fVar1 = (float)puVar4[-1];
      fVar2 = (float)puVar4[-2];
      uVar7 = 0;
      if ((*puVar4 & 0x7f800000) == 0x7f800000) {
        uVar7 = uVar5;
      }
      uVar3 = 0;
      if (((uint)fVar1 & 0x7f800000) == 0x7f800000) {
        uVar3 = uVar5;
      }
      uVar8 = 0;
      if (((uint)fVar2 & 0x7f800000) == 0x7f800000) {
        uVar8 = uVar5;
      }
      uVar8 = uVar7 | uVar3 | uVar8;
      if (uVar8 != 0) {
        return uVar8;
      }
      if ((0 < lVar6) && (fVar2 < (float)puVar4[-5] || fVar2 == (float)puVar4[-5])) {
        return 0x1f;
      }
      if (fVar1 < 0.0) {
        return 0x1f;
      }
      if (1.0 < fVar1) {
        return 0x1f;
      }
      lVar6 = lVar6 + 1;
      puVar4 = puVar4 + 3;
    } while (lVar6 < param_3);
  }
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | 4;
  *(longlong *)(param_1 + 0xe0) = param_2;
  *(int *)(param_1 + 0xe8) = param_3;
  return 0;
}



undefined8 FUN_18074d420(longlong *param_1,char param_2,float param_3,float param_4)

{
  uint uVar1;
  undefined8 uVar2;
  byte abStackX_8 [8];
  
  uVar2 = (**(code **)(*param_1 + 0x98))(param_1,abStackX_8);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if ((abStackX_8[0] & 0x10) == 0) {
    return 0x28;
  }
  if ((((uint)param_3 & 0x7f800000) == 0x7f800000) || (((uint)param_4 & 0x7f800000) == 0x7f800000))
  {
    return 0x1d;
  }
  if ((param_3 < 0.0) || (1.0 < param_3)) {
LAB_18074d4fb:
    uVar2 = 0x1f;
  }
  else {
    if (0.0001 <= param_4) {
      if ((param_4 < 10.0) || (22050.0 < param_4)) goto LAB_18074d4fb;
    }
    else {
      param_4 = *(float *)(param_1[1] + 0x11650);
    }
    *(float *)(param_1 + 0x1f) = param_3;
    *(float *)((longlong)param_1 + 0xfc) = param_4;
    uVar1 = *(uint *)(param_1 + 9) | 0x100000;
    if (param_2 == '\0') {
      uVar1 = *(uint *)(param_1 + 9) & 0xffefffff;
    }
    uVar2 = 0;
    *(uint *)(param_1 + 9) = uVar1;
  }
  return uVar2;
}



undefined8 FUN_18074d520(longlong *param_1,float param_2)

{
  undefined8 uVar1;
  uint auStackX_8 [8];
  
  uVar1 = (**(code **)(*param_1 + 0x98))(param_1,auStackX_8);
  if ((int)uVar1 == 0) {
    if ((auStackX_8[0] & 0x10) == 0) {
      return 0x28;
    }
    if (((uint)param_2 & 0x7f800000) == 0x7f800000) {
      return 0x1d;
    }
    if ((0.0 <= param_2) && (param_2 <= 5.0)) {
      *(float *)((longlong)param_1 + 0xf4) = param_2;
      return 0;
    }
    uVar1 = 0x1f;
  }
  return uVar1;
}



undefined8 FUN_18074d5c0(longlong *param_1,float param_2)

{
  undefined8 uVar1;
  uint auStackX_8 [8];
  
  uVar1 = (**(code **)(*param_1 + 0x98))(param_1,auStackX_8);
  if ((int)uVar1 == 0) {
    if ((auStackX_8[0] & 0x10) == 0) {
      return 0x28;
    }
    if (((uint)param_2 & 0x7f800000) == 0x7f800000) {
      return 0x1d;
    }
    if ((0.0 <= param_2) && (param_2 <= 1.0)) {
      *(float *)(param_1 + 0x1e) = param_2;
      return 0;
    }
    uVar1 = 0x1f;
  }
  return uVar1;
}



ulonglong FUN_18074d660(longlong *param_1,float param_2,float param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint auStackX_8 [6];
  float fStackX_20;
  
  uVar2 = (**(code **)(*param_1 + 0x98))(param_1,auStackX_8);
  if ((int)uVar2 == 0) {
    if ((auStackX_8[0] & 0x10) == 0) {
      return 0x28;
    }
    uVar2 = 0x1d;
    if (((uint)param_2 & 0x7f800000) != 0x7f800000) {
      uVar1 = 0x1d;
      if (((uint)param_3 & 0x7f800000) == 0x7f800000) {
LAB_18074d78b:
        return (ulonglong)uVar1;
      }
      if (((param_2 < 0.0) || (param_3 < 0.0)) || (param_3 < param_2)) {
        uVar2 = 0x1f;
      }
      else {
        if ((param_2 == *(float *)((longlong)param_1 + 0x9c)) &&
           (uVar1 = 0, param_3 == *(float *)(param_1 + 0x14))) goto LAB_18074d78b;
        *(float *)((longlong)param_1 + 0x9c) = param_2;
        *(float *)(param_1 + 0x14) = param_3;
        if (((auStackX_8[0] & 0x4f00000) == 0) && (*(longlong *)(param_1[1] + 0x11410) == 0)) {
          *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 4;
          return 0;
        }
        *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 4;
        fStackX_20 = param_3;
        uVar2 = FUN_18074f900(param_1,0,0,0);
        if ((int)uVar2 == 0) {
          uVar2 = (**(code **)(*param_1 + 0x20))(param_1,(int)param_1[6],0);
          uVar1 = (uint)uVar2;
          if (uVar1 == 0) goto LAB_18074d78b;
        }
      }
    }
  }
  return uVar2;
}



undefined8 FUN_18074d7c0(longlong *param_1,float param_2)

{
  undefined8 uVar1;
  uint auStackX_8 [8];
  
  uVar1 = (**(code **)(*param_1 + 0x98))(param_1,auStackX_8);
  if ((int)uVar1 == 0) {
    if ((auStackX_8[0] & 0x10) == 0) {
      return 0x28;
    }
    if (((uint)param_2 & 0x7f800000) == 0x7f800000) {
      uVar1 = 0x1d;
    }
    else {
      if ((0.0 <= param_2) && (param_2 <= 360.0)) {
        *(float *)((longlong)param_1 + 0xec) = param_2;
        return 0;
      }
      uVar1 = 0x1f;
    }
  }
  return uVar1;
}



ulonglong FUN_18074d860(longlong *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  int aiStackX_18 [2];
  int aiStackX_20 [2];
  longlong lStack_38;
  longlong lStack_30;
  
  lVar1 = param_1[0xc];
  lVar2 = param_1[0xe];
  lStack_38 = 0;
  lStack_30 = 0;
  if (lVar1 == 0) {
    return 9;
  }
  if (param_3 == -1) {
    aiStackX_18[0] = 0;
  }
  else {
    if (param_3 == -3) {
      aiStackX_18[0] = (int)param_1[3] + -1;
    }
    else {
      aiStackX_18[0] = param_3;
      if ((param_3 == -2) &&
         (uVar4 = (**(code **)(*param_1 + 0x138))(param_1,lVar2,aiStackX_18), (int)uVar4 != 0)) {
        return uVar4;
      }
    }
    if (aiStackX_18[0] < 0) {
      return 0x1f;
    }
  }
  if ((int)param_1[3] <= aiStackX_18[0]) {
    return 0x1f;
  }
  uVar4 = (**(code **)(*param_1 + 0x138))(param_1,param_2,aiStackX_20);
  if ((int)uVar4 == 0) {
    if (aiStackX_18[0] == aiStackX_20[0]) {
      return uVar4;
    }
    if (aiStackX_20[0] == 0) {
      uVar4 = (**(code **)(*param_1 + 0x120))(param_1,1,&lStack_38);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
    else if (aiStackX_18[0] == 0) {
      lStack_38 = param_2;
    }
    iVar5 = (int)param_1[3] + -1;
    if (aiStackX_20[0] == iVar5) {
      uVar4 = (**(code **)(*param_1 + 0x120))(param_1,(int)param_1[3] + -2,&lStack_30);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
    else if (aiStackX_18[0] == iVar5) {
      lStack_30 = param_2;
    }
    if (aiStackX_20[0] < aiStackX_18[0]) {
      lVar6 = (longlong)aiStackX_20[0] * 8;
      iVar5 = aiStackX_20[0];
      do {
        lVar6 = lVar6 + 8;
        iVar5 = iVar5 + 1;
        *(undefined8 *)(param_1[2] + -8 + lVar6) = *(undefined8 *)(param_1[2] + lVar6);
      } while (iVar5 < aiStackX_18[0]);
    }
    else if (aiStackX_18[0] < aiStackX_20[0]) {
      lVar6 = (longlong)aiStackX_20[0] * 8;
      iVar5 = aiStackX_20[0];
      do {
        lVar6 = lVar6 + -8;
        iVar5 = iVar5 + -1;
        *(undefined8 *)(param_1[2] + 8 + lVar6) = *(undefined8 *)(param_1[2] + lVar6);
      } while (aiStackX_18[0] < iVar5);
    }
    *(longlong *)(param_1[2] + (longlong)aiStackX_18[0] * 8) = param_2;
    lVar6 = param_1[1];
    bVar7 = lVar6 != 0;
    if (bVar7) {
      func_0x000180743c20(lVar6,1);
    }
    uVar3 = FUN_1807593d0(lVar1,param_2,aiStackX_20[0],aiStackX_18[0],1,0);
    if ((uVar3 == 0) &&
       ((lStack_38 == 0 || (uVar3 = FUN_18076f4f0(lVar2,lStack_38 + 8,0), uVar3 == 0)))) {
      if ((bVar7) && (lVar6 != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180743d60(lVar6,1);
      }
      if (((lStack_38 == 0) && (lStack_30 == 0)) ||
         (uVar4 = (**(code **)(*param_1 + 0x1e8))(param_1), (int)uVar4 == 0)) {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = (ulonglong)uVar3;
      if ((bVar7) && (lVar6 != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180743d60(lVar6,1);
      }
    }
  }
  return uVar4;
}



ulonglong FUN_18074d99f(int param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  longlong lVar4;
  bool bVar5;
  
  if (param_2 < param_1) {
    lVar4 = (longlong)param_2 * 8;
    do {
      lVar4 = lVar4 + 8;
      param_2 = param_2 + 1;
      *(undefined8 *)(unaff_RBX[2] + -8 + lVar4) = *(undefined8 *)(unaff_RBX[2] + lVar4);
      param_1 = *(int *)(unaff_RBP + 0x40);
    } while (param_2 < param_1);
  }
  else if (param_1 < param_2) {
    lVar4 = (longlong)param_2 * 8;
    do {
      lVar4 = lVar4 + -8;
      param_2 = param_2 + -1;
      *(undefined8 *)(unaff_RBX[2] + 8 + lVar4) = *(undefined8 *)(unaff_RBX[2] + lVar4);
      param_1 = *(int *)(unaff_RBP + 0x40);
    } while (param_1 < param_2);
  }
  *(undefined8 *)(unaff_RBX[2] + (longlong)param_1 * 8) = unaff_RSI;
  lVar4 = unaff_RBX[1];
  bVar5 = lVar4 != 0;
  if (bVar5) {
    func_0x000180743c20(lVar4,1);
  }
  uVar1 = FUN_1807593d0();
  if (uVar1 == 0) {
    lVar3 = *(longlong *)(unaff_RBP + -0x10);
    if (lVar3 != 0) {
      uVar1 = FUN_18076f4f0();
      if (uVar1 != 0) goto LAB_18074da75;
      lVar3 = *(longlong *)(unaff_RBP + -0x10);
    }
    if ((bVar5) && (lVar4 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180743d60(lVar4,1);
    }
    if (((lVar3 == 0) && (*(longlong *)(unaff_RBP + -8) == 0)) ||
       (uVar2 = (**(code **)(*unaff_RBX + 0x1e8))(), (int)uVar2 == 0)) {
      uVar2 = 0;
    }
  }
  else {
LAB_18074da75:
    uVar2 = (ulonglong)uVar1;
    if ((bVar5) && (lVar4 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180743d60(lVar4,1);
    }
  }
  return uVar2;
}





// 函数: void FUN_18074da98(void)
void FUN_18074da98(void)

{
  return;
}



undefined8 FUN_18074daa4(void)

{
  undefined8 uVar1;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  char unaff_R14B;
  
  if ((unaff_R14B != '\0') && (unaff_RDI != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  if (((*(longlong *)(unaff_RBP + -0x10) != 0) || (*(longlong *)(unaff_RBP + -8) != 0)) &&
     (uVar1 = (**(code **)(*unaff_RBX + 0x1e8))(), (int)uVar1 != 0)) {
    return uVar1;
  }
  return 0;
}



undefined8 FUN_18074dae5(void)

{
  return 0x1f;
}



undefined8 FUN_18074db00(longlong *param_1,longlong param_2,longlong param_3,char param_4)

{
  undefined8 uVar1;
  longlong lStackX_8;
  
  if (((param_2 == param_1[0x25]) && (param_3 == param_1[0x26])) && (param_4 == (char)param_1[0x27])
     ) {
    return 0;
  }
  param_1[0x25] = param_2;
  param_1[0x26] = param_3;
  *(char *)(param_1 + 0x27) = param_4;
  uVar1 = (**(code **)(*param_1 + 0x120))(param_1,0,&lStackX_8);
  if ((int)uVar1 == 0) {
    if (lStackX_8 == 0) {
      return 9;
    }
    uVar1 = FUN_180762250(lStackX_8,param_2,param_3,param_4);
  }
  return uVar1;
}



undefined8 FUN_18074dbb0(longlong *param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uStackX_20;
  
  if ((param_3 & 0x7f800000) == 0x7f800000) {
    return 0x1d;
  }
  uVar1 = (**(code **)(*param_1 + 0x120))(param_1,0xfffffffe,&uStackX_20);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_18076f350(uStackX_20,param_2,param_3);
    if ((int)uVar1 == 0) {
      uVar1 = (**(code **)(*param_1 + 0x208))(param_1);
    }
  }
  return uVar1;
}



ulonglong FUN_18074dc70(longlong param_1,longlong param_2,int param_3,int param_4,int param_5,
                       char param_6)

{
  uint uVar1;
  undefined2 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  if (param_6 != '\0') {
    if (param_2 == 0) {
      if (*(longlong *)(param_1 + 0x40) != 0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(longlong *)(param_1 + 8) + 0x10bd0,*(longlong *)(param_1 + 0x40),
                      &DAT_18098bc73,0,1);
      }
    }
    else {
      iVar9 = param_4;
      if (param_5 != 0) {
        iVar9 = param_5;
      }
      iVar7 = 0;
      if (0 < param_3) {
        iVar8 = 0;
        do {
          iVar5 = 0;
          if (0 < param_4) {
            puVar6 = (uint *)(param_2 + (longlong)iVar8 * 4);
            do {
              bVar10 = (*puVar6 & 0x7f800000) == 0x7f800000;
              uVar1 = 0;
              if (bVar10) {
                uVar1 = 0x1d;
              }
              if (bVar10) {
                return (ulonglong)uVar1;
              }
              iVar5 = iVar5 + 1;
              puVar6 = puVar6 + 1;
            } while (iVar5 < param_4);
          }
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + iVar9;
        } while (iVar7 < param_3);
      }
      if (*(longlong *)(param_1 + 0x40) == 0) {
        iVar9 = param_3;
        if (param_3 < param_4) {
          iVar9 = param_4;
        }
        lVar3 = FUN_180741e10(*(longlong *)(param_1 + 8) + 0x10bd0,iVar9 * param_3 * 4,
                              &DAT_18098bc73,0,0,0,1);
        if (lVar3 == 0) {
          return 0x26;
        }
        *(short *)(param_1 + 0x3a) = (short)param_3;
        *(longlong *)(param_1 + 0x40) = lVar3;
        uVar2 = (short)param_3;
        if (param_3 < param_4) {
          uVar2 = (short)param_4;
        }
        *(undefined2 *)(param_1 + 0x38) = uVar2;
      }
      else if ((*(short *)(param_1 + 0x38) < param_4) || (*(short *)(param_1 + 0x3a) < param_3)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(longlong *)(param_1 + 8) + 0x10bd0,*(longlong *)(param_1 + 0x40),
                      &DAT_18098bc73,0,1);
      }
      uVar4 = FUN_18076def0(param_1 + 0x38,param_2,param_3,param_4,param_5);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
  }
  return 0;
}



undefined8 FUN_18074de80(longlong *param_1,float param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  if (((uint)param_2 & 0x7f800000) == 0x7f800000) {
    return 0x1d;
  }
  if (-1.0 <= param_2) {
    if (param_2 <= 1.0) {
      fVar2 = (param_2 + 1.0) * 0.5;
    }
    else {
      fVar2 = 1.0;
    }
  }
  else {
    fVar2 = 0.0;
  }
  uVar1 = (**(code **)(*param_1 + 0xb8))(1.0 - fVar2,SQRT(1.0 - fVar2),SQRT(fVar2),0,0,0,0,0,0);
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



