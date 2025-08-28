#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part149.c - 6 个函数

// 函数: void FUN_1807545e0(longlong *param_1,undefined4 param_2)
void FUN_1807545e0(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 auStackX_18 [2];
  
  iVar1 = func_0x00018074df20();
  if (iVar1 == 0) {
    iVar1 = FUN_180754640(param_1);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*param_1 + 0x120))(param_1,0,auStackX_18);
      if (iVar1 == 0) {
        FUN_180762b60(auStackX_18[0],param_2,1);
      }
    }
  }
  return;
}



undefined8 FUN_180754640(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  float fVar3;
  undefined4 auStackX_8 [2];
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    fVar3 = 1.0;
  }
  else {
    fVar3 = *(float *)(*(longlong *)(param_1 + 0x20) + 0x1f8);
  }
  puVar1 = *(undefined8 **)(param_1 + 400);
  *(float *)(param_1 + 0x1f8) = fVar3 * *(float *)(param_1 + 0x34);
  for (; puVar1 != (undefined8 *)(param_1 + 400); puVar1 = (undefined8 *)*puVar1) {
    FUN_180754640(puVar1[2]);
  }
  for (puVar1 = *(undefined8 **)(param_1 + 0x1a8); puVar1 != (undefined8 *)(param_1 + 0x1a8);
      puVar1 = (undefined8 *)*puVar1) {
    uVar2 = puVar1[2];
    func_0x000180756300(uVar2,auStackX_8);
    FUN_180757470(uVar2,auStackX_8[0]);
  }
  return 0;
}



undefined8 FUN_1807546f0(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (param_1 == *(longlong **)(param_1[1] + 0x116e0)) {
    return 5;
  }
  uVar1 = func_0x00018074df60();
  if ((int)uVar1 == 0) {
    uVar1 = (**(code **)(*param_1 + 0x78))(param_1,param_2);
  }
  return uVar1;
}



undefined8 FUN_180754740(longlong param_1,float param_2,char param_3)

{
  float fVar1;
  bool bVar2;
  undefined8 uVar3;
  
  if (((uint)param_2 & 0x7f800000) == 0x7f800000) {
    return 0x1d;
  }
  bVar2 = param_2 == *(float *)(param_1 + 0x30);
  *(float *)(param_1 + 0x30) = param_2;
  if ((*(uint *)(param_1 + 0x48) & 2) != 0) {
    param_2 = 0.0;
  }
  fVar1 = *(float *)(param_1 + 0xf0);
  uVar3 = 0;
  if ((*(uint *)(param_1 + 0x48) & 0x80030) == 0) {
    uVar3 = 0x40;
  }
  uVar3 = func_0x00018076f590(*(undefined8 *)(param_1 + 0x70),
                              (1.0 - *(float *)(param_1 + 0xd0)) *
                              (1.0 - *(float *)(param_1 + 0xc0)) *
                              (fVar1 * *(float *)(param_1 + 0x78) + (1.0 - fVar1)) * param_2 *
                              (fVar1 * *(float *)(param_1 + 0xa4) + (1.0 - fVar1)),uVar3,1,0);
  if (((int)uVar3 == 0) &&
     (((bVar2 && (param_3 == '\0')) || (uVar3 = FUN_18074f900(param_1,0,0,param_3), (int)uVar3 == 0)
      ))) {
    uVar3 = 0;
  }
  return uVar3;
}



undefined8 FUN_180754850(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  float *pfVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  
  if ((*(byte *)(param_1 + 0x48) & 2) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    fVar7 = 1.0;
    if (lVar1 == 0) {
      fVar8 = 1.0;
    }
    else {
      fVar8 = *(float *)(lVar1 + 0x1ec);
    }
    fVar8 = fVar8 * *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x5c);
    if (lVar1 != 0) {
      fVar7 = *(float *)(lVar1 + 0x1e8);
    }
    fVar7 = fVar7 * *(float *)(param_1 + 0x30);
  }
  else {
    fVar7 = 0.0;
    fVar8 = 0.0;
  }
  if ((fVar8 != *(float *)(param_1 + 0x1ec)) || (fVar7 != *(float *)(param_1 + 0x1e8))) {
    *(float *)(param_1 + 0x1e8) = fVar7;
    pfVar5 = (float *)(param_1 + 0x13c);
    *(float *)(param_1 + 0x1ec) = fVar8;
    plVar6 = (longlong *)(param_1 + 0x150);
    iVar4 = 0;
    do {
      if ((*plVar6 != 0) &&
         (uVar3 = FUN_180765c40(*plVar6,*(float *)(*(longlong *)(param_1 + 0x20) + 0x1ec) * *pfVar5,
                                0x40,1,0), (int)uVar3 != 0)) {
        return uVar3;
      }
      iVar4 = iVar4 + 1;
      plVar6 = plVar6 + 1;
      pfVar5 = pfVar5 + 1;
    } while (iVar4 < 4);
    for (puVar2 = *(undefined8 **)(param_1 + 400); puVar2 != (undefined8 *)(param_1 + 400);
        puVar2 = (undefined8 *)*puVar2) {
      uVar3 = FUN_180754850(puVar2[2]);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    for (puVar2 = *(undefined8 **)(param_1 + 0x1a8); puVar2 != (undefined8 *)(param_1 + 0x1a8);
        puVar2 = (undefined8 *)*puVar2) {
      uVar3 = (**(code **)(*(longlong *)puVar2[2] + 0x200))();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    if (*(longlong *)(param_1 + 0x248) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x248) + 0x274) = *(undefined4 *)(param_1 + 0x1ec);
    }
  }
  return 0;
}



undefined8 FUN_1807549c0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  for (puVar2 = *(undefined8 **)(param_1 + 400); puVar2 != (undefined8 *)(param_1 + 400);
      puVar2 = (undefined8 *)*puVar2) {
    (**(code **)(*(longlong *)puVar2[2] + 8))();
  }
  puVar2 = *(undefined8 **)(param_1 + 0x1a8);
  while (puVar2 != (undefined8 *)(param_1 + 0x1a8)) {
    puVar1 = puVar2 + 2;
    puVar2 = (undefined8 *)*puVar2;
    (**(code **)(*(longlong *)*puVar1 + 8))();
  }
  return 0;
}



undefined8 FUN_180754a30(longlong *param_1,ulonglong param_2,ulonglong param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  int aiStackX_20 [2];
  longlong alStack_28 [4];
  
  uVar1 = FUN_18074f900(param_1,param_2,param_3,0);
  if (((int)uVar1 == 0) &&
     ((((*(byte *)(param_1 + 0x40) & 0x10) == 0 ||
       (uVar1 = FUN_18074dfc0(param_1,param_2 & 0xffffffff,param_3 & 0xff), (int)uVar1 == 0)) &&
      (uVar1 = (**(code **)(*param_1 + 0x128))(param_1,aiStackX_20), (int)uVar1 == 0)))) {
    uVar6 = 0;
    uVar5 = uVar6;
    if (0 < aiStackX_20[0]) {
      do {
        uVar1 = (**(code **)(*param_1 + 0x120))(param_1,uVar5,alStack_28);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        if ((alStack_28[0] != 0) && (*(int *)(alStack_28[0] + 0x100) == 0x23)) {
          if (param_1[4] == 0) {
            uVar7 = 0x3f800000;
          }
          else {
            uVar7 = *(undefined4 *)(param_1[4] + 0x1e8);
          }
          func_0x000180762a70(alStack_28[0],8,uVar7);
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      } while ((int)uVar4 < aiStackX_20[0]);
    }
    if ((*(uint *)(param_1 + 9) & 4) == 0) {
      lVar3 = (longlong)*(int *)(param_1[1] + 0x11400);
      if (0 < lVar3) {
        pcVar2 = (char *)(param_1[1] + 0x110ec);
        do {
          if (*pcVar2 != '\0') goto LAB_180754b33;
          uVar6 = uVar6 + 1;
          pcVar2 = pcVar2 + 0x70;
        } while ((longlong)uVar6 < lVar3);
      }
    }
    else {
LAB_180754b33:
      *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & 0xfffffffb;
    }
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 FUN_180754a92(void)

{
  undefined8 uVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar6;
  longlong lStackX_20;
  int in_stack_00000068;
  
  uVar5 = unaff_RSI & 0xffffffff;
  uVar4 = (uint)unaff_RSI;
  while ((int)uVar4 < in_stack_00000068) {
    uVar1 = (**(code **)(*unaff_RDI + 0x120))();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if ((lStackX_20 != 0) && (*(int *)(lStackX_20 + 0x100) == 0x23)) {
      if (unaff_RDI[4] == 0) {
        uVar6 = 0x3f800000;
      }
      else {
        uVar6 = *(undefined4 *)(unaff_RDI[4] + 0x1e8);
      }
      func_0x000180762a70(lStackX_20,8,uVar6);
    }
    uVar4 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar4;
  }
  if ((*(uint *)(unaff_RDI + 9) & 4) == 0) {
    lVar3 = (longlong)*(int *)(unaff_RDI[1] + 0x11400);
    if (0 < lVar3) {
      pcVar2 = (char *)(unaff_RDI[1] + 0x110ec);
      do {
        if (*pcVar2 != '\0') goto LAB_180754b33;
        unaff_RSI = unaff_RSI + 1;
        pcVar2 = pcVar2 + 0x70;
      } while ((longlong)unaff_RSI < lVar3);
    }
  }
  else {
LAB_180754b33:
    *(uint *)(unaff_RDI + 9) = *(uint *)(unaff_RDI + 9) & 0xfffffffb;
  }
  return 0;
}





// 函数: void FUN_180754b40(void)
void FUN_180754b40(void)

{
  return;
}



undefined8 FUN_180754b60(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 8) = *param_2;
    *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x10) = param_2[1];
  }
  else {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x18)) {
      lVar3 = 0;
      do {
        iVar4 = iVar4 + 1;
        *(undefined8 *)(*(longlong *)(lVar3 + *(longlong *)(param_1 + 0x10)) + 8) = *param_2;
        *(undefined8 *)(*(longlong *)(lVar3 + *(longlong *)(param_1 + 0x10)) + 0x10) = param_2[1];
        lVar3 = lVar3 + 8;
      } while (iVar4 < *(int *)(param_1 + 0x18));
    }
  }
  puVar1 = *(undefined8 **)(param_1 + 400);
  while( true ) {
    if (puVar1 == (undefined8 *)(param_1 + 400)) {
      return 0;
    }
    uVar2 = FUN_180754b60(puVar1[2],param_2);
    if ((int)uVar2 != 0) break;
    puVar1 = (undefined8 *)*puVar1;
  }
  return uVar2;
}



undefined8 FUN_180754c20(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStackX_20 [8];
  char acStack_48 [8];
  undefined8 uStack_40;
  undefined8 auStack_38 [2];
  
  lVar1 = param_1[0xc];
  lVar4 = param_1[0xd];
  lVar3 = param_1[0xe];
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1,acStack_48);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  param_1[0xe] = lVar3;
  lVar3 = lVar1;
  if (param_2 != 0) {
    lVar3 = param_2;
  }
  param_1[0xc] = lVar3;
  if (param_3 != 0) {
    lVar4 = param_3;
  }
  param_1[0xd] = lVar4;
  if (param_2 != 0) {
    uVar2 = func_0x00018075e610(lVar1,auStack_38,&uStack_40,auStackX_20);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = FUN_180762250(lVar3,auStack_38[0],uStack_40,auStackX_20[0]);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = FUN_180762b60(lVar3,*(undefined4 *)((longlong)param_1 + 0x34),1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = FUN_180762250(lVar1,0,0,0);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = FUN_180762b60(lVar1,0x3f800000,1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = FUN_180762070(lVar3,acStack_48[0] == (char)uVar2,1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = FUN_180762070(lVar1,1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}



undefined8 FUN_180754c5c(void)

{
  undefined8 uVar1;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined8 uVar2;
  undefined7 uVar3;
  undefined8 unaff_R12;
  longlong unaff_R14;
  longlong unaff_R15;
  bool in_ZF;
  char cStackX_20;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined1 in_stack_00000088;
  
  *(undefined8 *)(unaff_RSI + 0x70) = unaff_R12;
  if (!in_ZF) {
    unaff_RBX = unaff_RBP;
  }
  *(longlong *)(unaff_RSI + 0x60) = unaff_RBX;
  if (unaff_R15 != 0) {
    unaff_R14 = unaff_R15;
  }
  *(longlong *)(unaff_RSI + 0x68) = unaff_R14;
  if (unaff_RBP != 0) {
    uVar1 = func_0x00018075e610();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_180762250(unaff_RBX,in_stack_00000030,in_stack_00000028,in_stack_00000088);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_180762b60(unaff_RBX,*(undefined4 *)(unaff_RSI + 0x34),1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar2 = 0;
    uVar1 = FUN_180762250();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar3 = (undefined7)((ulonglong)uVar2 >> 8);
    uVar1 = FUN_180762b60();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_180762070(unaff_RBX,cStackX_20 == (char)uVar1,CONCAT71(uVar3,1));
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_180762070();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}





// 函数: void FUN_180754d34(void)
void FUN_180754d34(void)

{
  return;
}



undefined8 FUN_180754d50(longlong *param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uStackX_8;
  
  lVar2 = (longlong)param_2;
  if (*(longlong *)(param_1[1] + 0x12640 + lVar2 * 0x18) != 0) {
    if (*(float *)((longlong)param_1 + lVar2 * 4 + 0x13c) != 0.0) {
      if (param_1[lVar2 + 0x2a] == 0) {
        uVar1 = (**(code **)(*param_1 + 0x120))(0,0xfffffffe,&uStackX_8);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        uVar1 = FUN_180759220(*(undefined8 *)(param_1[1] + 0x12640 + lVar2 * 0x18),uStackX_8,
                              param_1 + lVar2 + 0x2a,2,(char)uVar1,0);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
      uVar1 = FUN_180754e60(param_1,param_2);
      if ((int)uVar1 == 0) {
        return 0;
      }
      return uVar1;
    }
    if (param_1[lVar2 + 0x2a] == 0) {
      return 0;
    }
    uVar1 = (**(code **)(*param_1 + 0x120))(0,0xfffffffe,&uStackX_8);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_18075dbf0(*(undefined8 *)(param_1[1] + 0x12640 + lVar2 * 0x18),uStackX_8,
                          param_1[lVar2 + 0x2a],4);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  param_1[lVar2 + 0x2a] = 0;
  return 0;
}



undefined8 FUN_180754e60(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x150 + (longlong)param_2 * 8);
  if ((lVar1 != 0) &&
     (uVar2 = FUN_180765c40(lVar1,*(float *)(param_1 + 0x13c + (longlong)param_2 * 4) *
                                  *(float *)(*(longlong *)(param_1 + 0x20) + 0x1ec),0x40,1,0),
     (int)uVar2 != 0)) {
    return uVar2;
  }
  return 0;
}



undefined8 FUN_180754eb0(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x78))();
  if ((int)uVar2 == 0) {
    for (plVar1 = (longlong *)param_1[0x32]; plVar1 != param_1 + 0x32; plVar1 = (longlong *)*plVar1)
    {
      uVar2 = FUN_180754eb0(plVar1[2],param_2);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



undefined8 FUN_180754ed0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 unaff_ESI;
  undefined8 *unaff_RDI;
  
  puVar1 = (undefined8 *)*unaff_RDI;
  while( true ) {
    if (puVar1 == unaff_RDI) {
      return 0;
    }
    uVar2 = FUN_180754eb0(puVar1[2],unaff_ESI);
    if ((int)uVar2 != 0) break;
    puVar1 = (undefined8 *)*puVar1;
  }
  return uVar2;
}





// 函数: void FUN_180754efe(void)
void FUN_180754efe(void)

{
  return;
}



undefined8 FUN_180754f10(ulonglong param_1,ulonglong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 == (ulonglong *)0x0) {
    return 0x1f;
  }
  *param_2 = param_1;
  if (((param_1 != 0) && ((param_1 & 3) == 0)) && (*(int *)(param_1 + 0x1d8) == -0x35a3521b)) {
    if (param_3 != (longlong *)0x0) {
      if ((*param_3 != 0) || (lVar1 = *(longlong *)(param_1 + 8), lVar1 == 0)) {
        return 0x1c;
      }
      uVar2 = FUN_180743c40(lVar1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      *param_3 = lVar1;
    }
    return 0;
  }
  return 0x1e;
}



undefined8 FUN_180754f40(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *unaff_RDI;
  
  if (unaff_RDI != (longlong *)0x0) {
    if ((*param_3 != 0) || (lVar1 = *(longlong *)(param_1 + 8), lVar1 == 0)) {
      return 0x1c;
    }
    uVar2 = FUN_180743c40(lVar1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *unaff_RDI = lVar1;
  }
  return 0;
}



undefined8 FUN_180754f75(void)

{
  return 0x1c;
}



undefined8 FUN_180754f85(void)

{
  return 0x1e;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_180754fe0(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (int *)0x0) {
    FUN_180768360(*(undefined8 *)(_DAT_180be12f0 + 0x120));
    puVar1 = *(undefined8 **)(param_1 + 0x28);
    *param_2 = 0;
    for (; puVar1 != (undefined8 *)(param_1 + 0x28); puVar1 = (undefined8 *)*puVar1) {
      *param_2 = *param_2 + *(int *)(puVar1[2] + 0x138);
    }
                    // WARNING: Subroutine does not return
    FUN_180768400(*(undefined8 *)(_DAT_180be12f0 + 0x120));
  }
  return 0x1f;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180755070(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 == *(longlong **)(param_1[3] + 0x11720)) {
    return 0x1e;
  }
  if (*(longlong **)(param_1[3] + 0x11720) == (longlong *)0x0) {
    if (param_1[0xc] == 0) {
      FUN_180768360(*(undefined8 *)(_DAT_180be12f0 + 0x120));
      *(longlong *)param_1[1] = *param_1;
      *(longlong *)(*param_1 + 8) = param_1[1];
      param_1[1] = (longlong)param_1;
      *param_1 = (longlong)param_1;
                    // WARNING: Subroutine does not return
      FUN_180768400(*(undefined8 *)(_DAT_180be12f0 + 0x120));
    }
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_1[0xc],&UNK_1809586e0,0xb7,1);
  }
  plVar1 = (longlong *)param_1[8];
  while (plVar1 != param_1 + 8) {
    plVar3 = (longlong *)*plVar1;
    lVar4 = plVar1[2];
    plVar2 = (longlong *)(lVar4 + 0x1b0);
    **(longlong **)(lVar4 + 0x1b8) = *plVar2;
    *(undefined8 *)(*plVar2 + 8) = *(undefined8 *)(lVar4 + 0x1b8);
    *(longlong **)(lVar4 + 0x1b8) = plVar2;
    *plVar2 = (longlong)plVar2;
    *(undefined4 *)(lVar4 + 0x1c8) = 0xffffffff;
    *(undefined8 *)(lVar4 + 0x1c0) = 0;
    *(undefined4 *)(lVar4 + 0x218) = 0x3f800000;
    *(undefined4 *)(lVar4 + 0x21c) = 0x3f800000;
    *(undefined4 *)(lVar4 + 0x1e8) = 0;
    *(longlong *)plVar1[1] = *plVar1;
    *(longlong *)(*plVar1 + 8) = plVar1[1];
    plVar1[1] = (longlong)plVar1;
    *plVar1 = (longlong)plVar1;
    plVar1 = plVar3;
  }
  FUN_180768360(*(undefined8 *)(_DAT_180be12f0 + 0x120));
  plVar1 = param_1 + 5;
  plVar2 = (longlong *)*plVar1;
  while (plVar2 != plVar1) {
    (**(code **)(**(longlong **)(*plVar1 + 0x10) + 0xd8))
              (*(longlong **)(*plVar1 + 0x10),*(undefined8 *)(param_1[3] + 0x11720));
    plVar2 = (longlong *)*plVar1;
  }
                    // WARNING: Subroutine does not return
  FUN_180768400(*(undefined8 *)(_DAT_180be12f0 + 0x120));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807550a5(void)
void FUN_1807550a5(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong unaff_RDI;
  longlong *in_R10;
  longlong *in_R11;
  
  if (in_R10 != in_R11) {
    do {
      plVar2 = (longlong *)*in_R10;
      lVar3 = in_R10[2];
      plVar1 = (longlong *)(lVar3 + 0x1b0);
      **(longlong **)(lVar3 + 0x1b8) = *plVar1;
      *(undefined8 *)(*plVar1 + 8) = *(undefined8 *)(lVar3 + 0x1b8);
      *(longlong **)(lVar3 + 0x1b8) = plVar1;
      *plVar1 = (longlong)plVar1;
      *(undefined4 *)(lVar3 + 0x1c8) = 0xffffffff;
      *(undefined8 *)(lVar3 + 0x1c0) = 0;
      *(undefined4 *)(lVar3 + 0x218) = 0x3f800000;
      *(undefined4 *)(lVar3 + 0x21c) = 0x3f800000;
      *(undefined4 *)(lVar3 + 0x1e8) = 0;
      *(longlong *)in_R10[1] = *in_R10;
      *(longlong *)(*in_R10 + 8) = in_R10[1];
      in_R10[1] = (longlong)in_R10;
      *in_R10 = (longlong)in_R10;
      in_R10 = plVar2;
    } while (plVar2 != in_R11);
  }
  FUN_180768360(*(undefined8 *)(_DAT_180be12f0 + 0x120));
  plVar1 = (longlong *)(unaff_RDI + 0x28);
  plVar2 = (longlong *)*plVar1;
  while (plVar2 != plVar1) {
    (**(code **)(**(longlong **)(*plVar1 + 0x10) + 0xd8))
              (*(longlong **)(*plVar1 + 0x10),
               *(undefined8 *)(*(longlong *)(unaff_RDI + 0x18) + 0x11720));
    plVar2 = (longlong *)*plVar1;
  }
                    // WARNING: Subroutine does not return
  FUN_180768400(*(undefined8 *)(_DAT_180be12f0 + 0x120));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807551c2(void)
void FUN_1807551c2(void)

{
  longlong *unaff_RDI;
  
  if (unaff_RDI[0xc] != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),unaff_RDI[0xc],&UNK_1809586e0,0xb7,1);
  }
  FUN_180768360(*(undefined8 *)(_DAT_180be12f0 + 0x120));
  *(longlong *)unaff_RDI[1] = *unaff_RDI;
  *(longlong *)(*unaff_RDI + 8) = unaff_RDI[1];
  unaff_RDI[1] = (longlong)unaff_RDI;
  *unaff_RDI = (longlong)unaff_RDI;
                    // WARNING: Subroutine does not return
  FUN_180768400(*(undefined8 *)(_DAT_180be12f0 + 0x120));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



