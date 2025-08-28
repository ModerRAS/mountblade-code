#include "TaleWorlds.Native.Split.h"

// 03_rendering_part661.c - 8 个函数

// 函数: void FUN_180645a6f(float *param_1,float param_2,float *param_3)
void FUN_180645a6f(float *param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float in_XMM2_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float *in_stack_000000e0;
  float *in_stack_000000e8;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  *in_stack_000000e0 = unaff_XMM11_Da * param_2 + *param_1;
  in_stack_000000e0[1] = unaff_XMM9_Da * param_2 + fVar1;
  in_stack_000000e0[2] = unaff_XMM10_Da * param_2 + fVar2;
  in_stack_000000e0[3] = 3.4028235e+38;
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  *in_stack_000000e8 = unaff_XMM15_Da * in_XMM2_Da + *param_3;
  in_stack_000000e8[1] = unaff_XMM13_Da * in_XMM2_Da + fVar1;
  in_stack_000000e8[2] = unaff_XMM14_Da * in_XMM2_Da + fVar2;
  in_stack_000000e8[3] = 3.4028235e+38;
  return;
}



ulonglong FUN_180645b70(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  *(undefined2 *)(param_1 + 2) = param_3;
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = gethostbyname(param_2);
  if ((lVar2 == 0) || (*(short *)(lVar2 + 0x10) != 2)) {
    uVar3 = inet_addr(param_2);
    if ((int)uVar3 == -1) {
      return uVar3 & 0xffffffffffffff00;
    }
  }
  else {
    uVar3 = (ulonglong)*(uint *)**(undefined8 **)(lVar2 + 0x18);
  }
  *(int *)((longlong)param_1 + 0x14) = (int)uVar3;
  *(undefined2 *)param_1 = 2;
  uVar1 = htons(param_3);
  *(undefined2 *)((longlong)param_1 + 2) = uVar1;
  *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_1 + 0x14);
  return CONCAT71((uint7)(uint3)((uint)*(undefined4 *)((longlong)param_1 + 0x14) >> 8),1);
}



undefined8 FUN_180645c10(longlong param_1,uint param_2,int *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  
  iVar6 = param_3[2];
  uVar5 = (ulonglong)param_2;
  if ((iVar6 != 0x20) || (*param_3 != -0x80000000)) {
    iVar3 = *param_3;
    if (((int)param_2 < iVar3) || (param_3[1] < (int)param_2)) {
      FUN_180627340(&UNK_180a35a20,&UNK_180a3d268,iVar3,param_3[1],param_2,&UNK_18098c850);
      FUN_180626f80(&UNK_180a359a0,*param_3,param_3[1]);
      iVar3 = *param_3;
      iVar6 = param_3[2];
    }
    uVar5 = (ulonglong)(param_2 - iVar3);
  }
  uVar4 = *(int *)(param_1 + 0x5c4) >> 0x1f & 0x1f;
  uVar2 = *(int *)(param_1 + 0x5c4) + uVar4;
  iVar3 = (uVar2 & 0x1f) - uVar4;
  puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x598) + (longlong)((int)uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | uVar5 << ((byte)iVar3 & 0x3f);
  *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + iVar6;
  *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + iVar6;
  return CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1);
}



undefined8 FUN_180645ce0(longlong param_1,uint param_2,uint *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = *param_3;
  if ((param_2 < uVar6) || (param_3[1] < param_2)) {
    FUN_180627340(&UNK_180a3baa0,&UNK_180a3d290,uVar6,param_3[1],param_2,&UNK_18098c850);
    FUN_180626f80(&UNK_180a3bb90,*param_3,param_3[1]);
    uVar6 = *param_3;
  }
  uVar2 = param_3[2];
  uVar5 = *(int *)(param_1 + 0x5c4) >> 0x1f & 0x1f;
  uVar3 = *(int *)(param_1 + 0x5c4) + uVar5;
  iVar4 = (uVar3 & 0x1f) - uVar5;
  puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x598) + (longlong)((int)uVar3 >> 5) * 4);
  *puVar1 = *puVar1 | (ulonglong)(param_2 - uVar6) << ((byte)iVar4 & 0x3f);
  *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + uVar2;
  *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + uVar2;
  return CONCAT71((uint7)(uint3)((uint)iVar4 >> 8),1);
}



undefined8 FUN_180645da0(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  lVar6 = *param_3;
  if ((param_2 < lVar6) || (param_3[1] < param_2)) {
    FUN_180627340(&UNK_180a3bb40,&UNK_180a3d240,lVar6,param_3[1],param_2,&UNK_18098c850);
    FUN_180626f80(&UNK_180a3ba50,*param_3,param_3[1]);
    lVar6 = *param_3;
  }
  lVar2 = *(longlong *)(param_1 + 0x598);
  lVar3 = param_3[2];
  uVar5 = *(int *)(param_1 + 0x5c4) >> 0x1f & 0x1f;
  iVar4 = *(int *)(param_1 + 0x5c4) + uVar5;
  puVar1 = (ulonglong *)(lVar2 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | (param_2 - lVar6 & 0xffffffffU) << (((byte)iVar4 & 0x1f) - (char)uVar5 & 0x3f)
  ;
  *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + 0x20;
  *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + 0x20;
  uVar5 = *(int *)(param_1 + 0x5c4) >> 0x1f & 0x1f;
  iVar4 = *(int *)(param_1 + 0x5c4) + uVar5;
  puVar1 = (ulonglong *)(lVar2 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | ((ulonglong)(param_2 - lVar6) >> 0x20) <<
                      (((byte)iVar4 & 0x1f) - (char)uVar5 & 0x3f);
  *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + (int)lVar3 + -0x20;
  iVar4 = (int)lVar3 + -0x20;
  *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + iVar4;
  return CONCAT71((uint7)(uint3)((uint)iVar4 >> 8),1);
}



undefined8 FUN_180645ea0(longlong param_1,ulonglong param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar6 = *param_3;
  if ((param_2 < uVar6) || (param_3[1] < param_2)) {
    FUN_180627340(&UNK_180a3ba00,&UNK_180a3d2c0,uVar6,param_3[1],param_2,&UNK_18098c850);
    FUN_180626f80(&UNK_180a3baf0,*param_3,param_3[1]);
    uVar6 = *param_3;
  }
  lVar2 = *(longlong *)(param_1 + 0x598);
  uVar3 = param_3[2];
  uVar5 = *(int *)(param_1 + 0x5c4) >> 0x1f & 0x1f;
  iVar4 = *(int *)(param_1 + 0x5c4) + uVar5;
  puVar1 = (ulonglong *)(lVar2 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | (param_2 - uVar6 & 0xffffffff) << (((byte)iVar4 & 0x1f) - (char)uVar5 & 0x3f);
  *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + 0x20;
  *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + 0x20;
  uVar5 = *(int *)(param_1 + 0x5c4) >> 0x1f & 0x1f;
  iVar4 = *(int *)(param_1 + 0x5c4) + uVar5;
  puVar1 = (ulonglong *)(lVar2 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | (param_2 - uVar6 >> 0x20) << (((byte)iVar4 & 0x1f) - (char)uVar5 & 0x3f);
  *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + (int)uVar3 + -0x20;
  iVar4 = (int)uVar3 + -0x20;
  *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + iVar4;
  return CONCAT71((uint7)(uint3)((uint)iVar4 >> 8),1);
}



undefined8 FUN_180645fa0(longlong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar3 = FUN_18055f6f0(param_3);
  iVar2 = *(int *)(param_3 + 0xc);
  uVar6 = *(int *)(param_1 + 0x5c4) >> 0x1f & 0x1f;
  uVar4 = *(int *)(param_1 + 0x5c4) + uVar6;
  iVar5 = (uVar4 & 0x1f) - uVar6;
  puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x598) + (longlong)((int)uVar4 >> 5) * 4);
  *puVar1 = *puVar1 | (ulonglong)uVar3 << ((byte)iVar5 & 0x3f);
  *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + iVar2;
  *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + iVar2;
  return CONCAT71((uint7)(uint3)((uint)iVar5 >> 8),1);
}



undefined1 FUN_180646010(undefined8 param_1,longlong param_2,int param_3)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0x7ff;
    if (param_3 < 0x7ff) {
      iVar1 = param_3;
    }
  }
  FUN_180645c10(param_1,iVar1,&UNK_1809fb1e8);
  if (0 < iVar1) {
    FUN_180646370(param_1,param_2,iVar1 * 8);
  }
  return 1;
}



char FUN_180646080(undefined8 param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  
  if (*param_2 < 1) {
    sVar3 = 0;
  }
  else {
    uVar4 = *param_2 - 1;
    sVar3 = (short)uVar4 + (short)(uVar4 / 0xffdc) * 0x24 + 1;
  }
  cVar2 = FUN_180645c10(param_1,sVar3,&UNK_1809fb208);
  iVar1 = param_2[1];
  if ((cVar2 == '\0') || (cVar2 = FUN_180645c10(param_1,iVar1 == 0,&UNK_1809fb228), cVar2 == '\0'))
  {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  if (iVar1 != 0) {
    if ((cVar2 != '\0') && (cVar2 = FUN_180645c10(param_1,param_2[1],&UNK_1809fb1f8), cVar2 != '\0')
       ) {
      return '\x01';
    }
    cVar2 = '\0';
  }
  return cVar2;
}



longlong FUN_180646140(longlong param_1,ulonglong *param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar2 = *(int *)(param_1 + 0x5c4);
  if (iVar2 + param_3 <= *(int *)(param_1 + 0x5c8)) {
    iVar7 = iVar2 + 0x20;
    uVar5 = iVar2 >> 0x1f & 0x1f;
    iVar2 = iVar2 + uVar5;
    uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0x598) + (longlong)(iVar2 >> 5) * 4);
    *(int *)(param_1 + 0x5c4) = iVar7;
    uVar6 = iVar7 >> 0x1f & 0x1f;
    iVar3 = iVar7 + uVar6;
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x598) + (longlong)(iVar3 >> 5) * 4);
    *(int *)(param_1 + 0x5c4) = iVar7 + param_3 + -0x20;
    uVar4 = uVar4 >> (((byte)iVar2 & 0x1f) - (char)uVar5 & 0x3f) & 0xffffffff;
    *param_2 = (uVar1 >> (((byte)iVar3 & 0x1f) - (char)uVar6 & 0x3f) &
               (1L << ((byte)(param_3 + -0x20) & 0x3f)) - 1U) << 0x20 | uVar4;
    return CONCAT71((int7)(uVar4 >> 8),1);
  }
  return (ulonglong)(uint3)((uint)(iVar2 + param_3) >> 8) << 8;
}



undefined8 FUN_180646171(void)

{
  ulonglong uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong *unaff_RSI;
  longlong unaff_RDI;
  int in_R9D;
  int in_R10D;
  longlong in_R11;
  
  in_R9D = in_R9D + 0x20;
  uVar5 = in_EAX >> 0x1f & 0x1f;
  iVar2 = in_EAX + uVar5;
  uVar4 = *(ulonglong *)(in_R11 + (longlong)(iVar2 >> 5) * 4);
  *(int *)(unaff_RDI + 0x5c4) = in_R9D;
  uVar6 = in_R9D >> 0x1f & 0x1f;
  iVar3 = in_R9D + uVar6;
  uVar1 = *(ulonglong *)(in_R11 + (longlong)(iVar3 >> 5) * 4);
  *(int *)(unaff_RDI + 0x5c4) = in_R9D + in_R10D;
  uVar4 = uVar4 >> (((byte)iVar2 & 0x1f) - (char)uVar5 & 0x3f) & 0xffffffff;
  *unaff_RSI = (uVar1 >> (((byte)iVar3 & 0x1f) - (char)uVar6 & 0x3f) &
               (1L << ((byte)in_R10D & 0x3f)) - 1U) << 0x20 | uVar4;
  return CONCAT71((int7)(uVar4 >> 8),1);
}



undefined1 FUN_1806461f3(void)

{
  return 0;
}





// 函数: void FUN_180646200(longlong param_1,longlong param_2,uint param_3)
void FUN_180646200(longlong param_1,longlong param_2,uint param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  
  if ((((longlong)*(int *)(param_1 + 0x5c4) & 7U) == 0) &&
     (((longlong)*(int *)(param_2 + 0x5c4) & 7U) == 0)) {
    uVar3 = param_3 >> 3;
    if ((param_3 & 7) != 0) {
      uVar3 = uVar3 + 1;
    }
                    // WARNING: Subroutine does not return
    memcpy(((longlong)*(int *)(param_1 + 0x5c4) >> 3) + *(longlong *)(param_1 + 0x598),
           ((longlong)*(int *)(param_2 + 0x5c4) >> 3) + *(longlong *)(param_2 + 0x598),uVar3);
  }
  if (param_3 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x598);
    iVar6 = *(int *)(param_2 + 0x5c4);
    do {
      iVar4 = *(int *)(param_1 + 0x5c4);
      uVar3 = 0x20;
      if ((int)param_3 < 0x20) {
        uVar3 = param_3;
      }
      bVar7 = (byte)iVar4 & 0x1f;
      iVar8 = iVar6 + uVar3;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0x1f;
        bVar7 = bVar7 - 0x20;
      }
      puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x598) + (longlong)(iVar4 >> 5) * 4);
      bVar5 = (byte)iVar6 & 0x1f;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0x1f;
        bVar5 = bVar5 - 0x20;
      }
      *puVar1 = *puVar1 | (ulonglong)
                          ((int)(1L << ((byte)uVar3 & 0x3f)) - 1U &
                          (uint)(*(ulonglong *)(lVar2 + (longlong)(iVar6 >> 5) * 4) >>
                                (bVar5 & 0x3f))) << (bVar7 & 0x3f);
      *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + uVar3;
      *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + uVar3;
      param_3 = param_3 - uVar3;
      iVar6 = iVar8;
    } while (param_3 != 0);
  }
  return;
}





// 函数: void FUN_1806462bd(undefined8 param_1,longlong param_2)
void FUN_1806462bd(undefined8 param_1,longlong param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  int iVar3;
  byte bVar4;
  longlong unaff_RBX;
  int unaff_EDI;
  int iVar5;
  byte bVar6;
  int in_R10D;
  int iVar7;
  
  lVar2 = *(longlong *)(param_2 + 0x598);
  do {
    iVar3 = *(int *)(unaff_RBX + 0x5c4);
    iVar5 = 0x20;
    if (unaff_EDI < 0x20) {
      iVar5 = unaff_EDI;
    }
    bVar6 = (byte)iVar3 & 0x1f;
    iVar7 = in_R10D + iVar5;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0x1f;
      bVar6 = bVar6 - 0x20;
    }
    puVar1 = (ulonglong *)(*(longlong *)(unaff_RBX + 0x598) + (longlong)(iVar3 >> 5) * 4);
    bVar4 = (byte)in_R10D & 0x1f;
    if (in_R10D < 0) {
      in_R10D = in_R10D + 0x1f;
      bVar4 = bVar4 - 0x20;
    }
    *puVar1 = *puVar1 | (ulonglong)
                        ((int)(1L << ((byte)iVar5 & 0x3f)) - 1U &
                        (uint)(*(ulonglong *)(lVar2 + (longlong)(in_R10D >> 5) * 4) >>
                              (bVar4 & 0x3f))) << (bVar6 & 0x3f);
    *(int *)(unaff_RBX + 0x5c4) = *(int *)(unaff_RBX + 0x5c4) + iVar5;
    *(int *)(unaff_RBX + 0x5c8) = *(int *)(unaff_RBX + 0x5c8) + iVar5;
    unaff_EDI = unaff_EDI - iVar5;
    in_R10D = iVar7;
  } while (unaff_EDI != 0);
  return;
}





// 函数: void FUN_180646360(void)
void FUN_180646360(void)

{
  return;
}





// 函数: void FUN_180646370(longlong param_1,uint *param_2,uint param_3)
void FUN_180646370(longlong param_1,uint *param_2,uint param_3)

{
  ulonglong *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint *puVar7;
  ulonglong uVar8;
  byte *pbVar9;
  longlong lVar10;
  
  if (((longlong)*(int *)(param_1 + 0x5c4) & 7U) == 0) {
    iVar4 = (int)param_3 >> 3;
    if ((param_3 & 7) != 0) {
      iVar4 = ((int)param_3 >> 3) + 1;
    }
                    // WARNING: Subroutine does not return
    memcpy(((longlong)*(int *)(param_1 + 0x5c4) >> 3) + *(longlong *)(param_1 + 0x598),param_2,
           (longlong)iVar4);
  }
  if ((int)param_3 < 0x20) {
    lVar10 = 0;
  }
  else {
    uVar6 = param_3 >> 5;
    param_3 = param_3 + uVar6 * -0x20;
    puVar7 = param_2;
    uVar8 = (ulonglong)uVar6;
    do {
      iVar4 = *(int *)(param_1 + 0x5c4);
      bVar5 = (byte)iVar4 & 0x1f;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0x1f;
        bVar5 = bVar5 - 0x20;
      }
      puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x598) + (longlong)(iVar4 >> 5) * 4);
      uVar3 = *puVar7;
      puVar7 = puVar7 + 1;
      *puVar1 = *puVar1 | (ulonglong)uVar3 << (bVar5 & 0x3f);
      *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + 0x20;
      *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + 0x20;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    lVar10 = (ulonglong)uVar6 * 4;
  }
  if (0 < (int)param_3) {
    pbVar9 = (byte *)(lVar10 + (longlong)param_2);
    do {
      iVar4 = *(int *)(param_1 + 0x5c4);
      uVar6 = 8;
      if ((int)param_3 < 8) {
        uVar6 = param_3;
      }
      bVar5 = (byte)iVar4 & 0x1f;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0x1f;
        bVar5 = bVar5 - 0x20;
      }
      param_3 = param_3 - uVar6;
      puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x598) + (longlong)(iVar4 >> 5) * 4);
      bVar2 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      *puVar1 = *puVar1 | (ulonglong)bVar2 << (bVar5 & 0x3f);
      *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + uVar6;
      *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + uVar6;
    } while (0 < (int)param_3);
  }
  return;
}



undefined8 FUN_180646500(longlong param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar1 = param_3[2];
  iVar5 = *(int *)(param_1 + 0x5c4);
  iVar7 = iVar5 + uVar1;
  if (iVar7 <= *(int *)(param_1 + 0x5c8)) {
    uVar6 = iVar5 >> 0x1f & 0x1f;
    iVar5 = iVar5 + uVar6;
    uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x598) + (longlong)(iVar5 >> 5) * 4);
    *(int *)(param_1 + 0x5c4) = iVar7;
    uVar2 = *param_3;
    uVar6 = uVar2 + ((uint)(uVar3 >> (((byte)iVar5 & 0x1f) - (char)uVar6 & 0x3f)) &
                    (int)(1L << ((byte)uVar1 & 0x3f)) - 1U);
    uVar1 = param_3[1];
    if ((uVar1 < uVar6) || (uVar6 < uVar2)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((uVar6 < uVar2) || (uVar1 < uVar6)) {
      FUN_180627340(&UNK_180a3baa0,&UNK_180a3d358,uVar2,uVar1,uVar6,&UNK_18098c860);
      FUN_180626f80(&UNK_180a3bb90,*param_3,param_3[1]);
    }
    *param_2 = uVar6;
    if (bVar4) {
      return 1;
    }
  }
  return 0;
}



undefined8 FUN_180646534(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  bool bVar4;
  int in_EAX;
  int iVar5;
  undefined4 unaff_EBX;
  uint uVar6;
  uint *unaff_RDI;
  longlong in_R10;
  byte in_R11B;
  uint *unaff_R14;
  undefined *puStack0000000000000028;
  
  iVar5 = in_EAX + (param_2 & 0x1f);
  uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x598) + (longlong)(iVar5 >> 5) * 4);
  *(undefined4 *)(in_R10 + 0x5c4) = unaff_EBX;
  uVar1 = *unaff_RDI;
  uVar6 = uVar1 + ((uint)(uVar3 >> (((byte)iVar5 & 0x1f) - (char)(param_2 & 0x1f) & 0x3f)) &
                  (int)(1L << (in_R11B & 0x3f)) - 1U);
  uVar2 = unaff_RDI[1];
  if ((uVar2 < uVar6) || (uVar6 < uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((uVar6 < uVar1) || (uVar2 < uVar6)) {
    puStack0000000000000028 = &UNK_18098c860;
    FUN_180627340(&UNK_180a3baa0,&UNK_180a3d358,uVar1,uVar2,uVar6);
    FUN_180626f80(&UNK_180a3bb90,*unaff_RDI,unaff_RDI[1]);
  }
  *unaff_R14 = uVar6;
  if (bVar4) {
    return 1;
  }
  return 0;
}



undefined1 FUN_1806465dd(void)

{
  return 1;
}



undefined8 FUN_180646610(undefined8 param_1,ulonglong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uStackX_20;
  
  uStackX_20 = 0;
  cVar4 = FUN_180646140(param_1,&uStackX_20,(int)param_3[2]);
  if (cVar4 != '\0') {
    if (((int)param_3[2] == 0x40) && (*param_3 == -0x8000000000000000)) {
      bVar3 = true;
      uVar5 = uStackX_20;
    }
    else {
      lVar1 = *param_3;
      lVar2 = param_3[1];
      uVar5 = lVar1 + uStackX_20;
      if ((lVar2 < (longlong)uVar5) || ((longlong)uVar5 < lVar1)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (((longlong)uVar5 < lVar1) || (lVar2 < (longlong)uVar5)) {
        FUN_180627340(&UNK_180a3bb40,&UNK_180a3d2f8,lVar1,lVar2,uVar5,&UNK_18098c860);
        FUN_180626f80(&UNK_180a3ba50,*param_3,param_3[1]);
      }
    }
    *param_2 = uVar5;
    if (bVar3) {
      return 1;
    }
  }
  return 0;
}



undefined8 FUN_180646644(void)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong *unaff_RDI;
  longlong *unaff_R14;
  bool in_ZF;
  undefined *puStack0000000000000028;
  longlong in_stack_00000058;
  
  if ((in_ZF) && (*unaff_RDI == -0x8000000000000000)) {
    bVar3 = true;
  }
  else {
    lVar1 = *unaff_RDI;
    lVar2 = unaff_RDI[1];
    in_stack_00000058 = lVar1 + in_stack_00000058;
    if ((lVar2 < in_stack_00000058) || (in_stack_00000058 < lVar1)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((in_stack_00000058 < lVar1) || (lVar2 < in_stack_00000058)) {
      puStack0000000000000028 = &UNK_18098c860;
      FUN_180627340(&UNK_180a3bb40,&UNK_180a3d2f8,lVar1,lVar2,in_stack_00000058);
      FUN_180626f80(&UNK_180a3ba50,*unaff_RDI,unaff_RDI[1]);
    }
  }
  *unaff_R14 = in_stack_00000058;
  if (bVar3) {
    return 1;
  }
  return 0;
}



undefined1 FUN_1806466de(void)

{
  return 1;
}



undefined8 FUN_180646700(longlong param_1,float *param_2,float *param_3)

{
  ulonglong uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar5 = param_3[3];
  iVar3 = *(int *)(param_1 + 0x5c4);
  iVar6 = iVar3 + (int)fVar5;
  if (iVar6 <= *(int *)(param_1 + 0x5c8)) {
    uVar4 = iVar3 >> 0x1f & 0x1f;
    iVar3 = iVar3 + uVar4;
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x598) + (longlong)(iVar3 >> 5) * 4);
    *(int *)(param_1 + 0x5c4) = iVar6;
    fVar8 = param_3[2];
    fVar5 = (float)((uint)(uVar1 >> (((byte)iVar3 & 0x1f) - (char)uVar4 & 0x3f)) &
                   (int)(1L << (SUB41(fVar5,0) & 0x3f)) - 1U);
    if (fVar8 == 0.0) {
      *param_2 = fVar5;
      return 1;
    }
    fVar7 = *param_3;
    fVar9 = param_3[1];
    fVar10 = (float)(uint)fVar5 * fVar8 + fVar7;
    fVar5 = fVar7 - fVar8 * 0.5;
    fVar8 = fVar8 * 0.5 + fVar9;
    if ((fVar8 < fVar10) || (fVar10 < fVar5)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((fVar8 < fVar10) || (fVar10 < fVar5)) {
      FUN_180627340(&UNK_180a35aa0,&UNK_180a3d388,(double)fVar7,(double)fVar9,(double)fVar10,
                    &UNK_18098c860);
      FUN_180626f80(&UNK_180a35af0,(double)*param_3,(double)param_3[1]);
      fVar9 = param_3[1];
      fVar7 = *param_3;
    }
    if ((fVar7 <= fVar10) && (fVar7 = fVar9, fVar10 <= fVar9)) {
      fVar7 = fVar10;
    }
    *param_2 = fVar7;
    if (bVar2) {
      return 1;
    }
  }
  return 0;
}



undefined8 FUN_18064679f(float param_1,float param_2,float param_3)

{
  bool bVar1;
  longlong in_RAX;
  float *unaff_RBX;
  float *unaff_RSI;
  float fVar2;
  float in_XMM4_Da;
  float fVar3;
  undefined *puStack0000000000000028;
  
  fVar3 = (float)in_RAX * param_3 + param_2;
  param_1 = param_1 - param_3 * 0.5;
  fVar2 = param_3 * 0.5 + in_XMM4_Da;
  if ((fVar2 < fVar3) || (fVar3 < param_1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((fVar2 < fVar3) || (fVar3 < param_1)) {
    puStack0000000000000028 = &UNK_18098c860;
    FUN_180627340(&UNK_180a35aa0,&UNK_180a3d388,(double)param_2,(double)in_XMM4_Da,(double)fVar3);
    FUN_180626f80(&UNK_180a35af0,(double)*unaff_RBX,(double)unaff_RBX[1]);
    in_XMM4_Da = unaff_RBX[1];
    param_2 = *unaff_RBX;
  }
  if ((param_2 <= fVar3) && (param_2 = in_XMM4_Da, fVar3 <= in_XMM4_Da)) {
    param_2 = fVar3;
  }
  *unaff_RSI = param_2;
  if (bVar1) {
    return 1;
  }
  return 0;
}



undefined1 FUN_18064686d(void)

{
  return 1;
}



longlong FUN_180646890(undefined8 param_1,undefined8 param_2,int param_3,int *param_4)

{
  int iVar1;
  
  *param_4 = 0;
  FUN_18055f260(param_1,param_4,&UNK_1809fb280);
  iVar1 = *param_4;
  if ((iVar1 < 0x800) && (iVar1 <= param_3)) {
                    // WARNING: Subroutine does not return
    memset(param_2,0,(longlong)iVar1);
  }
  return (ulonglong)(uint7)(int7)(int3)((uint)iVar1 >> 8) << 8;
}



undefined1 FUN_180646a60(undefined8 param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  uint auStackX_18 [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = 0xffff;
  uStack_18 = 0;
  auStackX_18[0] = 0;
  uStack_10 = 0x10;
  uVar3 = FUN_180646500(param_1,auStackX_18,&uStack_18);
  if (auStackX_18[0] != 0) {
    if (param_2 != 0) {
      uVar1 = (param_2 - 1U) % 0xffdc + 1;
      uVar2 = uVar1 - auStackX_18[0];
      if (uVar1 < auStackX_18[0]) {
        uVar2 = auStackX_18[0] - uVar1;
      }
      if (0x7fee < uVar2) {
        if (uVar1 < 0x7fee) {
          auStackX_18[0] = auStackX_18[0] - 0xffdc;
        }
        else {
          auStackX_18[0] = auStackX_18[0] + 0xffdc;
        }
      }
      auStackX_18[0] = auStackX_18[0] + ((param_2 - 1U) / 0xffdc) * 0xffdc;
    }
    if (auStackX_18[0] - 1 < 0x7fed) {
      *param_3 = auStackX_18[0] + 0xffdc;
      return uVar3;
    }
  }
  *param_3 = auStackX_18[0];
  return uVar3;
}



char FUN_180646b50(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  int aiStackX_18 [2];
  undefined4 auStackX_20 [2];
  undefined4 auStack_18 [4];
  
  auStackX_20[0] = 0;
  auStack_18[0] = 0;
  aiStackX_18[0] = 0;
  cVar1 = FUN_180646a60(param_1,param_2,auStackX_20);
  if (cVar1 == '\0') {
LAB_180646b98:
    cVar1 = '\0';
  }
  else {
    cVar1 = FUN_18055f260(param_1,aiStackX_18,&UNK_1809fb2a0);
    if (cVar1 == '\0') goto LAB_180646b98;
    cVar1 = '\x01';
  }
  if (aiStackX_18[0] == 0) {
    if (cVar1 != '\0') {
      cVar1 = FUN_18055f260(param_1,auStack_18,&UNK_1809fb290);
      if (cVar1 != '\0') {
        cVar1 = '\x01';
        goto LAB_180646bc3;
      }
    }
    cVar1 = '\0';
  }
LAB_180646bc3:
  *param_3 = auStackX_20[0];
  param_3[1] = auStack_18[0];
  return cVar1;
}



undefined8 FUN_180646be0(longlong param_1,longlong param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = socket(2,2,0);
  *(longlong *)(param_1 + 8) = lVar4;
  if (lVar4 != -1) {
    uVar2 = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined2 *)(param_1 + 0x10) = 2;
    if (param_2 != 0) {
      uVar1 = htons(*(undefined2 *)(param_2 + 0x10));
      *(undefined2 *)(param_1 + 0x12) = uVar1;
      uVar2 = *(undefined4 *)(param_2 + 0x14);
    }
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    iVar3 = bind(*(undefined8 *)(param_1 + 8),param_1 + 0x10,0x10);
    if (iVar3 != -1) {
      return 1;
    }
    closesocket(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  }
  return 0;
}



undefined8 FUN_180646c13(void)

{
  undefined2 uVar1;
  int iVar2;
  ulonglong in_RAX;
  longlong unaff_RBX;
  undefined2 unaff_BP;
  longlong unaff_RSI;
  
  *(ulonglong *)(unaff_RBX + 0x10) = in_RAX;
  *(ulonglong *)(unaff_RBX + 0x18) = in_RAX;
  *(undefined2 *)(unaff_RBX + 0x10) = unaff_BP;
  if (unaff_RSI != 0) {
    uVar1 = htons(*(undefined2 *)(unaff_RSI + 0x10));
    *(undefined2 *)(unaff_RBX + 0x12) = uVar1;
    in_RAX = (ulonglong)*(uint *)(unaff_RSI + 0x14);
  }
  *(int *)(unaff_RBX + 0x14) = (int)in_RAX;
  iVar2 = bind(*(undefined8 *)(unaff_RBX + 8),unaff_RBX + 0x10,0x10);
  if (iVar2 == -1) {
    closesocket(*(undefined8 *)(unaff_RBX + 8));
    *(undefined8 *)(unaff_RBX + 8) = 0xffffffffffffffff;
    return 0;
  }
  return 1;
}



undefined1 FUN_180646c5b(void)

{
  longlong unaff_RBX;
  
  closesocket(*(undefined8 *)(unaff_RBX + 8));
  *(undefined8 *)(unaff_RBX + 8) = 0xffffffffffffffff;
  return 0;
}



bool FUN_180646ca0(longlong param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 auStackX_10 [2];
  undefined4 auStackX_18 [4];
  
  iVar1 = -1;
  auStackX_18[0] = param_3;
  if (param_2 == 1) {
    auStackX_10[0] = param_3;
    iVar1 = ioctlsocket(*(undefined8 *)(param_1 + 8),0x8004667e,auStackX_10);
  }
  else {
    if (param_2 == 2) {
      iVar1 = setsockopt(*(undefined8 *)(param_1 + 8),0xffff,0x20,auStackX_18,4);
      return iVar1 != -1;
    }
    if (param_2 == 3) {
      iVar1 = setsockopt(*(undefined8 *)(param_1 + 8),0xffff,0x1002,auStackX_18,4);
      return iVar1 != -1;
    }
    if (param_2 == 4) {
      iVar1 = setsockopt(*(undefined8 *)(param_1 + 8),0xffff,0x1001,auStackX_18,4);
      return iVar1 != -1;
    }
  }
  return iVar1 != -1;
}





// 函数: void FUN_180646d90(longlong param_1)
void FUN_180646d90(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != -1) {
    shutdown(*(longlong *)(param_1 + 8),2);
    closesocket(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  }
  return;
}



int FUN_180646dd0(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  int aiStackX_18 [4];
  undefined4 auStack_18 [2];
  undefined8 uStack_10;
  
  uStack_10 = *(undefined8 *)(param_2 + 8);
  auStack_18[0] = param_3;
  iVar1 = WSASendTo(*(undefined8 *)(param_1 + 8),auStack_18,1,aiStackX_18,0,param_4,0x10,0,0);
  if (iVar1 == -1) {
    iVar1 = WSAGetLastError();
    return -(uint)(iVar1 != 0x2733);
  }
  return aiStackX_18[0];
}



ulonglong FUN_180646e40(longlong param_1,int *param_2,undefined4 *param_3,longlong param_4)

{
  undefined2 uVar1;
  ulonglong uVar2;
  uint auStackX_8 [2];
  undefined4 auStackX_10 [4];
  undefined4 auStackX_20 [2];
  int aiStack_28 [2];
  undefined8 uStack_20;
  
  uStack_20 = *(undefined8 *)(param_2 + 2);
  aiStack_28[0] = *param_2 >> 3;
  auStackX_10[0] = 0x10;
  auStackX_8[0] = 0;
  uVar2 = WSARecvFrom(*(undefined8 *)(param_1 + 8),aiStack_28,1,auStackX_20,auStackX_8,param_4,
                      auStackX_10,0,0);
  if ((int)uVar2 != -1) {
    uVar1 = ntohs(*(undefined2 *)(param_4 + 2));
    *(undefined2 *)(param_4 + 0x10) = uVar1;
    uVar2 = (ulonglong)*(uint *)(param_4 + 4);
    *(uint *)(param_4 + 0x14) = *(uint *)(param_4 + 4);
    if ((auStackX_8[0] & 0x8000) == 0) {
      *param_3 = auStackX_20[0];
      return CONCAT71((uint7)(uint3)((uint)auStackX_20[0] >> 8),1);
    }
  }
  *param_3 = 0;
  return uVar2 & 0xffffffffffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180646f40(void)

{
  longlong lVar1;
  
  lVar1 = _DAT_180c8ed78;
  if (_DAT_180c8ed78 == 0) {
    if (_DAT_180bfbf1c == 0) {
      FUN_180650490(&DAT_180bfbf18);
    }
    lVar1 = (longlong)_DAT_180bfbf18;
    if (_DAT_180bfbf18 < 1) {
      lVar1 = 1;
    }
    _DAT_180c8ed78 = lVar1;
    FUN_1806502e0(&UNK_180a3d710,lVar1);
  }
  return lVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180646f50(void)

{
  longlong lVar1;
  
  lVar1 = _DAT_180c8ed78;
  if (_DAT_180c8ed78 == 0) {
    if (_DAT_180bfbf1c == 0) {
      FUN_180650490(&DAT_180bfbf18);
    }
    lVar1 = (longlong)_DAT_180bfbf18;
    if (_DAT_180bfbf18 < 1) {
      lVar1 = 1;
    }
    _DAT_180c8ed78 = lVar1;
    FUN_1806502e0(&UNK_180a3d710,lVar1);
  }
  return lVar1;
}





// 函数: void FUN_180646fa6(void)
void FUN_180646fa6(void)

{
  return;
}





// 函数: void FUN_180646fb0(undefined1 *param_1,undefined1 *param_2,longlong param_3)
void FUN_180646fb0(undefined1 *param_1,undefined1 *param_2,longlong param_3)

{
  if (DAT_180c8f000 == '\0') {
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
    memcpy();
    return;
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}





