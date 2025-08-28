#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part298.c - 15 个函数

// 函数: void FUN_180831328(void)
void FUN_180831328(void)

{
                    // WARNING: Subroutine does not return
  FUN_1807c41d0();
}



ulonglong FUN_180831360(void)

{
  longlong lVar1;
  longlong unaff_RSI;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  
  if (*(int *)(unaff_RSI + 0x68) != 0) {
    lVar1 = FUN_1807c4260();
    *(longlong *)(unaff_RSI + 0x58) = lVar1;
    *(int *)(unaff_RSI + 100) = *(int *)(unaff_RSI + 100) + *(int *)(unaff_RSI + 0x68);
    *(int *)(unaff_RSI + 0x68) = (int)unaff_R15;
    unaff_R14 = 0xffffff75;
    if (lVar1 != 0) {
      unaff_R14 = unaff_R15 & 0xffffffff;
    }
  }
  *(int *)(unaff_RSI + 0x60) = (int)unaff_R15;
  *(ulonglong *)(unaff_RSI + 0x70) = unaff_R15;
  return unaff_R14 & 0xffffffff;
}



ulonglong FUN_18083136c(void)

{
  longlong lVar1;
  longlong unaff_RSI;
  ulonglong uVar2;
  ulonglong unaff_R15;
  
  lVar1 = FUN_1807c4260();
  *(longlong *)(unaff_RSI + 0x58) = lVar1;
  *(int *)(unaff_RSI + 100) = *(int *)(unaff_RSI + 100) + *(int *)(unaff_RSI + 0x68);
  *(int *)(unaff_RSI + 0x68) = (int)unaff_R15;
  uVar2 = 0xffffff75;
  if (lVar1 != 0) {
    uVar2 = unaff_R15 & 0xffffffff;
  }
  *(int *)(unaff_RSI + 0x60) = (int)unaff_R15;
  *(ulonglong *)(unaff_RSI + 0x70) = unaff_R15;
  return uVar2;
}



undefined4 FUN_1808313c0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (*(longlong *)(param_3 + 0x20) == 0) {
    return 1;
  }
                    // WARNING: Subroutine does not return
  memset(param_2,0,0x78);
}



undefined4 FUN_1808317a0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_28 [32];
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  func_0x00018082d920(auStack_28,*param_2,*(undefined4 *)(param_2 + 1));
  iVar2 = FUN_18082d7f0(auStack_28,1);
  if (iVar2 != 0) {
    return 0xffffff79;
  }
  iVar3 = 0;
  for (iVar2 = *(int *)(lVar1 + 8); 1 < iVar2; iVar2 = iVar2 >> 1) {
    iVar3 = iVar3 + 1;
  }
  iVar2 = FUN_18082d7f0(auStack_28,iVar3);
  if (iVar2 != -1) {
    return *(undefined4 *)(lVar1 + (longlong)**(int **)(lVar1 + 0x20 + (longlong)iVar2 * 8) * 4);
  }
  return 0xffffff78;
}



undefined8 FUN_180831820(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  lVar10 = *(longlong *)param_2[10];
  lVar6 = ((longlong *)param_2[10])[0xe];
  lVar1 = *(longlong *)(lVar10 + 0x20);
  uVar5 = FUN_180831300();
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  func_0x00018082d920(param_2 + 1,*param_3,*(undefined4 *)(param_3 + 1));
  iVar2 = FUN_18082d7f0(param_2 + 1,1);
  if (iVar2 != 0) {
    return 0xffffff79;
  }
  iVar2 = FUN_18082d7f0(param_2 + 1,*(undefined4 *)(lVar6 + 0x18));
  if (iVar2 == -1) {
LAB_180831995:
    uVar5 = 0xffffff78;
  }
  else {
    *(int *)(param_2 + 7) = iVar2;
    uVar7 = 0;
    iVar4 = **(int **)(lVar1 + 0x20 + (longlong)iVar2 * 8);
    *(int *)((longlong)param_2 + 0x2c) = iVar4;
    if (iVar4 == 0) {
      *(undefined4 *)(param_2 + 5) = 0;
      *(undefined4 *)(param_2 + 6) = 0;
      iVar4 = 0;
    }
    else {
      uVar3 = FUN_18082d7f0(param_2 + 1,1);
      *(undefined4 *)(param_2 + 5) = uVar3;
      iVar4 = FUN_18082d7f0(param_2 + 1,1);
      *(int *)(param_2 + 6) = iVar4;
      if (iVar4 == -1) goto LAB_180831995;
      iVar4 = *(int *)((longlong)param_2 + 0x2c);
    }
    param_2[8] = param_3[3];
    param_2[9] = param_3[4];
    *(undefined4 *)((longlong)param_2 + 0x3c) = *(undefined4 *)(param_3 + 2);
    *(undefined4 *)((longlong)param_2 + 0x34) = *(undefined4 *)(lVar1 + (longlong)iVar4 * 4);
    lVar6 = FUN_180831260(param_1,param_2,*(int *)(lVar10 + 4) << 3);
    *param_2 = lVar6;
    if (lVar6 == 0) {
LAB_18083198e:
      uVar5 = 0xffffff75;
    }
    else {
      uVar9 = uVar7;
      if (0 < *(int *)(lVar10 + 4)) {
        do {
          uVar5 = FUN_180831260(param_1,param_2,*(int *)((longlong)param_2 + 0x34) << 2);
          *(undefined8 *)(uVar7 + *param_2) = uVar5;
          if (*(longlong *)(uVar7 + *param_2) == 0) goto LAB_18083198e;
          uVar8 = (int)uVar9 + 1;
          uVar7 = uVar7 + 8;
          uVar9 = (ulonglong)uVar8;
        } while ((int)uVar8 < *(int *)(lVar10 + 4));
      }
      lVar10 = (longlong)*(int *)(*(longlong *)(lVar1 + (longlong)iVar2 * 8 + 0x20) + 0xc);
      uVar5 = (**(code **)(*(longlong *)
                            (&UNK_180980730 + (longlong)*(int *)(lVar1 + 0x220 + lVar10 * 4) * 8) +
                          0x20))(param_1,param_2,*(undefined8 *)(lVar1 + 800 + lVar10 * 8));
    }
  }
  return uVar5;
}



undefined8 FUN_18083188e(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong unaff_R12;
  longlong unaff_R15;
  
  iVar1 = FUN_18082d7f0();
  if (iVar1 == -1) {
LAB_180831995:
    uVar5 = 0xffffff78;
  }
  else {
    *(int *)(unaff_RBX + 7) = iVar1;
    uVar6 = 0;
    iVar3 = **(int **)(unaff_R12 + 0x20 + (longlong)iVar1 * 8);
    *(int *)((longlong)unaff_RBX + 0x2c) = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)(unaff_RBX + 5) = 0;
      *(undefined4 *)(unaff_RBX + 6) = 0;
      iVar3 = 0;
    }
    else {
      uVar2 = FUN_18082d7f0(unaff_RBX + 1,1);
      *(undefined4 *)(unaff_RBX + 5) = uVar2;
      iVar3 = FUN_18082d7f0(unaff_RBX + 1,1);
      *(int *)(unaff_RBX + 6) = iVar3;
      if (iVar3 == -1) goto LAB_180831995;
      iVar3 = *(int *)((longlong)unaff_RBX + 0x2c);
    }
    unaff_RBX[8] = *(longlong *)(unaff_R15 + 0x18);
    unaff_RBX[9] = *(longlong *)(unaff_R15 + 0x20);
    *(undefined4 *)((longlong)unaff_RBX + 0x3c) = *(undefined4 *)(unaff_R15 + 0x10);
    *(undefined4 *)((longlong)unaff_RBX + 0x34) = *(undefined4 *)(unaff_R12 + (longlong)iVar3 * 4);
    lVar4 = FUN_180831260();
    *unaff_RBX = lVar4;
    if (lVar4 == 0) {
LAB_18083198e:
      uVar5 = 0xffffff75;
    }
    else {
      uVar8 = uVar6;
      if (0 < *(int *)(unaff_RBP + 4)) {
        do {
          uVar5 = FUN_180831260();
          *(undefined8 *)(uVar6 + *unaff_RBX) = uVar5;
          if (*(longlong *)(uVar6 + *unaff_RBX) == 0) goto LAB_18083198e;
          uVar7 = (int)uVar8 + 1;
          uVar6 = uVar6 + 8;
          uVar8 = (ulonglong)uVar7;
        } while ((int)uVar7 < *(int *)(unaff_RBP + 4));
      }
      uVar5 = (**(code **)(*(longlong *)
                            (&UNK_180980730 +
                            (longlong)
                            *(int *)(unaff_R12 + 0x220 +
                                    (longlong)
                                    *(int *)(*(longlong *)(unaff_R12 + (longlong)iVar1 * 8 + 0x20) +
                                            0xc) * 4) * 8) + 0x20))();
    }
  }
  return uVar5;
}





// 函数: void FUN_18083199f(void)
void FUN_18083199f(void)

{
  return;
}



undefined8 FUN_1808319c0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  lVar1 = ((longlong *)param_2[10])[0xe];
  lVar2 = *(longlong *)(*(longlong *)param_2[10] + 0x20);
  uVar5 = FUN_180831300();
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  func_0x00018082d920(param_2 + 1,*param_3,*(undefined4 *)(param_3 + 1));
  iVar3 = FUN_18082d7f0(param_2 + 1,1);
  if (iVar3 != 0) {
    return 0xffffff79;
  }
  iVar3 = FUN_18082d7f0(param_2 + 1,*(undefined4 *)(lVar1 + 0x18));
  if (iVar3 == -1) {
LAB_180831a6b:
    uVar5 = 0xffffff78;
  }
  else {
    *(int *)(param_2 + 7) = iVar3;
    iVar3 = **(int **)(lVar2 + 0x20 + (longlong)iVar3 * 8);
    *(int *)((longlong)param_2 + 0x2c) = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)(param_2 + 5) = 0;
      *(undefined4 *)(param_2 + 6) = 0;
    }
    else {
      uVar4 = FUN_18082d7f0(param_2 + 1,1);
      *(undefined4 *)(param_2 + 5) = uVar4;
      iVar3 = FUN_18082d7f0(param_2 + 1,1);
      *(int *)(param_2 + 6) = iVar3;
      if (iVar3 == -1) goto LAB_180831a6b;
    }
    param_2[8] = param_3[3];
    param_2[9] = param_3[4];
    *(undefined4 *)((longlong)param_2 + 0x3c) = *(undefined4 *)(param_3 + 2);
    uVar5 = 0;
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *param_2 = 0;
  }
  return uVar5;
}





// 函数: void FUN_180831ac0(float *param_1,uint param_2,longlong param_3,ulonglong *param_4,longlong *param_5
void FUN_180831ac0(float *param_1,uint param_2,longlong param_3,ulonglong *param_4,longlong *param_5
                  )

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  
  for (iVar7 = (int)param_2 >> 2; iVar7 != 0; iVar7 = iVar7 + -1) {
    uVar5 = *param_4 + *param_5;
    sVar1 = *(short *)(param_3 + (ulonglong)*(uint *)((longlong)param_4 + 4) * 2);
    *param_4 = uVar5;
    sVar2 = *(short *)(param_3 + (uVar5 >> 0x20) * 2);
    uVar5 = *param_5 + uVar5;
    *param_4 = uVar5;
    uVar6 = *param_5 + uVar5;
    sVar3 = *(short *)(param_3 + (uVar5 >> 0x20) * 2);
    *param_4 = uVar6;
    sVar4 = *(short *)(param_3 + (uVar6 >> 0x20) * 2);
    *param_4 = *param_5 + uVar6;
    param_1[3] = (float)(int)sVar4 * 3.0517578e-05;
    *param_1 = (float)(int)sVar1 * 3.0517578e-05;
    param_1[1] = (float)(int)sVar2 * 3.0517578e-05;
    param_1[2] = (float)(int)sVar3 * 3.0517578e-05;
    param_1 = param_1 + 4;
  }
  for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
    *param_1 = (float)(int)*(short *)(param_3 + (ulonglong)*(uint *)((longlong)param_4 + 4) * 2) *
               3.0517578e-05;
    *param_4 = *param_4 + *param_5;
    param_1 = param_1 + 1;
  }
  return;
}





// 函数: void FUN_180831be0(float *param_1,uint param_2,longlong param_3,longlong *param_4,longlong *param_5)
void FUN_180831be0(float *param_1,uint param_2,longlong param_3,longlong *param_4,longlong *param_5)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  
  for (iVar10 = (int)param_2 >> 2; iVar10 != 0; iVar10 = iVar10 + -1) {
    lVar11 = *param_4 + *param_5;
    sVar1 = *(short *)(param_3 + (ulonglong)(uint)(*(int *)((longlong)param_4 + 4) * 2) * 2);
    sVar2 = *(short *)(param_3 + (ulonglong)(*(int *)((longlong)param_4 + 4) * 2 + 1) * 2);
    *param_4 = lVar11;
    lVar12 = *param_5 + lVar11;
    iVar9 = (int)((ulonglong)lVar11 >> 0x20);
    sVar3 = *(short *)(param_3 + (ulonglong)(uint)(iVar9 * 2) * 2);
    sVar4 = *(short *)(param_3 + (ulonglong)(iVar9 * 2 + 1) * 2);
    *param_4 = lVar12;
    lVar11 = *param_5 + lVar12;
    iVar9 = (int)((ulonglong)lVar12 >> 0x20);
    sVar5 = *(short *)(param_3 + (ulonglong)(uint)(iVar9 * 2) * 2);
    sVar6 = *(short *)(param_3 + (ulonglong)(iVar9 * 2 + 1) * 2);
    *param_4 = lVar11;
    iVar9 = (int)((ulonglong)lVar11 >> 0x20);
    sVar7 = *(short *)(param_3 + (ulonglong)(uint)(iVar9 * 2) * 2);
    sVar8 = *(short *)(param_3 + (ulonglong)(iVar9 * 2 + 1) * 2);
    *param_4 = *param_5 + lVar11;
    param_1[7] = (float)(int)sVar8 * 3.0517578e-05;
    *param_1 = (float)(int)sVar1 * 3.0517578e-05;
    param_1[1] = (float)(int)sVar2 * 3.0517578e-05;
    param_1[2] = (float)(int)sVar3 * 3.0517578e-05;
    param_1[3] = (float)(int)sVar4 * 3.0517578e-05;
    param_1[4] = (float)(int)sVar5 * 3.0517578e-05;
    param_1[5] = (float)(int)sVar6 * 3.0517578e-05;
    param_1[6] = (float)(int)sVar7 * 3.0517578e-05;
    param_1 = param_1 + 8;
  }
  for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
    *param_1 = (float)(int)*(short *)(param_3 +
                                     (ulonglong)(uint)(*(int *)((longlong)param_4 + 4) * 2) * 2) *
               3.0517578e-05;
    param_1[1] = (float)(int)*(short *)(param_3 +
                                       (ulonglong)(*(int *)((longlong)param_4 + 4) * 2 + 1) * 2) *
                 3.0517578e-05;
    *param_4 = *param_4 + *param_5;
    param_1 = param_1 + 2;
  }
  return;
}





// 函数: void FUN_180831c0a(float *param_1,int param_2)
void FUN_180831c0a(float *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  uint unaff_EBX;
  uint uVar10;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar11;
  longlong lVar12;
  longlong *in_R11;
  float unaff_XMM8_Da;
  
  for (param_2 = param_2 >> 2; param_2 != 0; param_2 = param_2 + -1) {
    lVar11 = *in_R11 + *unaff_RSI;
    sVar1 = *(short *)(unaff_RDI + (ulonglong)(uint)(*(int *)((longlong)in_R11 + 4) * 2) * 2);
    sVar2 = *(short *)(unaff_RDI + (ulonglong)(*(int *)((longlong)in_R11 + 4) * 2 + 1) * 2);
    *in_R11 = lVar11;
    lVar12 = *unaff_RSI + lVar11;
    iVar9 = (int)((ulonglong)lVar11 >> 0x20);
    sVar3 = *(short *)(unaff_RDI + (ulonglong)(uint)(iVar9 * 2) * 2);
    sVar4 = *(short *)(unaff_RDI + (ulonglong)(iVar9 * 2 + 1) * 2);
    *in_R11 = lVar12;
    lVar11 = *unaff_RSI + lVar12;
    iVar9 = (int)((ulonglong)lVar12 >> 0x20);
    sVar5 = *(short *)(unaff_RDI + (ulonglong)(uint)(iVar9 * 2) * 2);
    sVar6 = *(short *)(unaff_RDI + (ulonglong)(iVar9 * 2 + 1) * 2);
    *in_R11 = lVar11;
    iVar9 = (int)((ulonglong)lVar11 >> 0x20);
    sVar7 = *(short *)(unaff_RDI + (ulonglong)(uint)(iVar9 * 2) * 2);
    sVar8 = *(short *)(unaff_RDI + (ulonglong)(iVar9 * 2 + 1) * 2);
    *in_R11 = *unaff_RSI + lVar11;
    param_1[7] = (float)(int)sVar8 * unaff_XMM8_Da;
    *param_1 = (float)(int)sVar1 * unaff_XMM8_Da;
    param_1[1] = (float)(int)sVar2 * unaff_XMM8_Da;
    param_1[2] = (float)(int)sVar3 * unaff_XMM8_Da;
    param_1[3] = (float)(int)sVar4 * unaff_XMM8_Da;
    param_1[4] = (float)(int)sVar5 * unaff_XMM8_Da;
    param_1[5] = (float)(int)sVar6 * unaff_XMM8_Da;
    param_1[6] = (float)(int)sVar7 * unaff_XMM8_Da;
    param_1 = param_1 + 8;
  }
  for (uVar10 = unaff_EBX & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *param_1 = (float)(int)*(short *)(unaff_RDI +
                                     (ulonglong)(uint)(*(int *)((longlong)in_R11 + 4) * 2) * 2) *
               unaff_XMM8_Da;
    param_1[1] = (float)(int)*(short *)(unaff_RDI +
                                       (ulonglong)(*(int *)((longlong)in_R11 + 4) * 2 + 1) * 2) *
                 unaff_XMM8_Da;
    *in_R11 = *in_R11 + *unaff_RSI;
    param_1 = param_1 + 2;
  }
  return;
}





// 函数: void FUN_180831c1f(void)
void FUN_180831c1f(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  uint unaff_EBX;
  uint uVar10;
  int unaff_EBP;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar11;
  longlong lVar12;
  float *in_R10;
  longlong *in_R11;
  float unaff_XMM8_Da;
  
  do {
    lVar11 = *in_R11 + *unaff_RSI;
    sVar1 = *(short *)(unaff_RDI + (ulonglong)(uint)(*(int *)((longlong)in_R11 + 4) * 2) * 2);
    sVar2 = *(short *)(unaff_RDI + (ulonglong)(*(int *)((longlong)in_R11 + 4) * 2 + 1) * 2);
    *in_R11 = lVar11;
    lVar12 = *unaff_RSI + lVar11;
    iVar9 = (int)((ulonglong)lVar11 >> 0x20);
    sVar3 = *(short *)(unaff_RDI + (ulonglong)(uint)(iVar9 * 2) * 2);
    sVar4 = *(short *)(unaff_RDI + (ulonglong)(iVar9 * 2 + 1) * 2);
    *in_R11 = lVar12;
    lVar11 = *unaff_RSI + lVar12;
    iVar9 = (int)((ulonglong)lVar12 >> 0x20);
    sVar5 = *(short *)(unaff_RDI + (ulonglong)(uint)(iVar9 * 2) * 2);
    sVar6 = *(short *)(unaff_RDI + (ulonglong)(iVar9 * 2 + 1) * 2);
    *in_R11 = lVar11;
    iVar9 = (int)((ulonglong)lVar11 >> 0x20);
    sVar7 = *(short *)(unaff_RDI + (ulonglong)(uint)(iVar9 * 2) * 2);
    sVar8 = *(short *)(unaff_RDI + (ulonglong)(iVar9 * 2 + 1) * 2);
    *in_R11 = *unaff_RSI + lVar11;
    in_R10[7] = (float)(int)sVar8 * unaff_XMM8_Da;
    *in_R10 = (float)(int)sVar1 * unaff_XMM8_Da;
    in_R10[1] = (float)(int)sVar2 * unaff_XMM8_Da;
    in_R10[2] = (float)(int)sVar3 * unaff_XMM8_Da;
    in_R10[3] = (float)(int)sVar4 * unaff_XMM8_Da;
    in_R10[4] = (float)(int)sVar5 * unaff_XMM8_Da;
    in_R10[5] = (float)(int)sVar6 * unaff_XMM8_Da;
    in_R10[6] = (float)(int)sVar7 * unaff_XMM8_Da;
    in_R10 = in_R10 + 8;
    unaff_EBP = unaff_EBP + -1;
  } while (unaff_EBP != 0);
  for (uVar10 = unaff_EBX & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *in_R10 = (float)(int)*(short *)(unaff_RDI +
                                    (ulonglong)(uint)(*(int *)((longlong)in_R11 + 4) * 2) * 2) *
              unaff_XMM8_Da;
    in_R10[1] = (float)(int)*(short *)(unaff_RDI +
                                      (ulonglong)(*(int *)((longlong)in_R11 + 4) * 2 + 1) * 2) *
                unaff_XMM8_Da;
    *in_R11 = *in_R11 + *unaff_RSI;
    in_R10 = in_R10 + 2;
  }
  return;
}





// 函数: void FUN_180831d5b(void)
void FUN_180831d5b(void)

{
  uint unaff_EBX;
  uint uVar1;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  float *in_R10;
  longlong *in_R11;
  float unaff_XMM8_Da;
  
  for (uVar1 = unaff_EBX & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *in_R10 = (float)(int)*(short *)(unaff_RDI +
                                    (ulonglong)(uint)(*(int *)((longlong)in_R11 + 4) * 2) * 2) *
              unaff_XMM8_Da;
    in_R10[1] = (float)(int)*(short *)(unaff_RDI +
                                      (ulonglong)(*(int *)((longlong)in_R11 + 4) * 2 + 1) * 2) *
                unaff_XMM8_Da;
    *in_R11 = *in_R11 + *unaff_RSI;
    in_R10 = in_R10 + 2;
  }
  return;
}





// 函数: void FUN_180831d70(void)
void FUN_180831d70(void)

{
  int unaff_EBX;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  float *in_R10;
  longlong *in_R11;
  float unaff_XMM8_Da;
  
  do {
    *in_R10 = (float)(int)*(short *)(unaff_RDI +
                                    (ulonglong)(uint)(*(int *)((longlong)in_R11 + 4) * 2) * 2) *
              unaff_XMM8_Da;
    in_R10[1] = (float)(int)*(short *)(unaff_RDI +
                                      (ulonglong)(*(int *)((longlong)in_R11 + 4) * 2 + 1) * 2) *
                unaff_XMM8_Da;
    *in_R11 = *in_R11 + *unaff_RSI;
    unaff_EBX = unaff_EBX + -1;
    in_R10 = in_R10 + 2;
  } while (unaff_EBX != 0);
  return;
}





// 函数: void FUN_180831de0(float *param_1,int param_2,longlong param_3,longlong *param_4,longlong *param_5)
void FUN_180831de0(float *param_1,int param_2,longlong param_3,longlong *param_4,longlong *param_5)

{
  longlong lVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  uVar8 = (undefined4)*param_4;
  auVar11._0_8_ = *param_4;
  lVar5 = *param_5;
  lVar1 = lVar5 * 4;
  lVar6 = lVar5 * 3;
  auVar13._4_4_ = uVar8;
  auVar13._0_4_ = uVar8;
  auVar13._8_4_ = uVar8;
  auVar13._12_4_ = *(undefined4 *)((longlong)param_4 + 4);
  iVar10 = 0;
  auVar14._0_8_ = lVar5 << 0x20;
  auVar14._8_4_ = (int)lVar5;
  auVar14._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
  auVar15._8_8_ = auVar14._8_8_ + auVar13._8_8_;
  auVar15._0_8_ = auVar11._0_8_;
  auVar16._0_8_ = lVar6 << 0x20;
  auVar16._8_4_ = (int)lVar6;
  auVar16._12_4_ = (int)((ulonglong)lVar6 >> 0x20);
  auVar17._0_8_ = lVar5 * 2 + auVar11._0_8_;
  auVar17._8_8_ = auVar16._8_8_ + auVar13._8_8_;
  uVar8 = (undefined4)lVar1;
  auVar18._4_4_ = uVar8;
  auVar18._0_4_ = uVar8;
  auVar18._8_4_ = uVar8;
  auVar18._12_4_ = (int)((ulonglong)lVar1 >> 0x20);
  if (0 < param_2 + -3) {
    uVar7 = (param_2 - 4U >> 2) + 1;
    uVar9 = (ulonglong)uVar7;
    iVar10 = uVar7 * 4;
    do {
      sVar2 = *(short *)(param_3 + (longlong)auVar15._12_4_ * 2);
      sVar3 = *(short *)(param_3 + (longlong)auVar17._4_4_ * 2);
      sVar4 = *(short *)(param_3 + (longlong)auVar17._12_4_ * 2);
      auVar12._0_8_ = lVar1 + auVar17._0_8_;
      auVar12._8_8_ = auVar18._8_8_ + auVar17._8_8_;
      *param_1 = (float)(int)*(short *)(param_3 + (longlong)auVar15._4_4_ * 2) * 3.0517578e-05;
      param_1[1] = (float)(int)sVar2 * 3.0517578e-05;
      param_1[2] = (float)(int)sVar3 * 3.0517578e-05;
      param_1[3] = (float)(int)sVar4 * 3.0517578e-05;
      param_1 = param_1 + 4;
      auVar11._0_8_ = lVar1 + auVar15._0_8_;
      auVar11._8_8_ = auVar18._8_8_ + auVar15._8_8_;
      uVar9 = uVar9 - 1;
      auVar15 = auVar11;
      auVar17 = auVar12;
    } while (uVar9 != 0);
  }
  *param_4 = auVar11._0_8_;
  for (param_2 = param_2 - iVar10; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = (float)(int)*(short *)(param_3 + (ulonglong)*(uint *)((longlong)param_4 + 4) * 2) *
               3.0517578e-05;
    *param_4 = *param_4 + *param_5;
    param_1 = param_1 + 1;
  }
  return;
}





// 函数: void FUN_180831ff0(float *param_1,int param_2,longlong param_3,longlong *param_4,longlong *param_5)
void FUN_180831ff0(float *param_1,int param_2,longlong param_3,longlong *param_4,longlong *param_5)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  longlong lVar14;
  longlong lVar15;
  
  iVar11 = 0;
  uVar4 = (undefined4)*param_5;
  lVar5 = *param_5;
  auVar13._4_4_ = uVar4;
  auVar13._0_4_ = uVar4;
  lVar14 = *param_4;
  auVar13._8_4_ = uVar4;
  auVar13._12_4_ = *(undefined4 *)((longlong)param_5 + 4);
  lVar15 = lVar14 + lVar5;
  if (0 < param_2 + -1) {
    uVar8 = (param_2 - 2U >> 1) + 1;
    uVar12 = (ulonglong)uVar8;
    iVar11 = uVar8 * 2;
    do {
      uVar6 = (ulonglong)lVar14 >> 0x20;
      uVar7 = (ulonglong)lVar15 >> 0x20;
      lVar14 = lVar14 + lVar5 * 2;
      lVar15 = lVar15 + auVar13._8_8_ * 2;
      lVar9 = (longlong)((int)uVar6 * 2);
      lVar10 = (longlong)((int)uVar7 * 2);
      sVar1 = *(short *)(param_3 + 2 + lVar9 * 2);
      sVar2 = *(short *)(param_3 + lVar10 * 2);
      sVar3 = *(short *)(param_3 + 2 + lVar10 * 2);
      *param_1 = (float)(int)*(short *)(param_3 + lVar9 * 2) * 3.0517578e-05;
      param_1[1] = (float)(int)sVar1 * 3.0517578e-05;
      param_1[2] = (float)(int)sVar2 * 3.0517578e-05;
      param_1[3] = (float)(int)sVar3 * 3.0517578e-05;
      param_1 = param_1 + 4;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  *param_4 = lVar14;
  for (param_2 = param_2 - iVar11; param_2 != 0; param_2 = param_2 + -1) {
    uVar8 = *(int *)((longlong)param_4 + 4) * 2;
    sVar1 = *(short *)(param_3 + (ulonglong)(uVar8 + 1) * 2);
    *param_1 = (float)(int)*(short *)(param_3 + (ulonglong)uVar8 * 2) * 3.0517578e-05;
    param_1[1] = (float)(int)sVar1 * 3.0517578e-05;
    *param_4 = *param_4 + *param_5;
    param_1 = param_1 + 2;
  }
  return;
}





// 函数: void FUN_180832150(void)
void FUN_180832150(void)

{
  FUN_180832190();
  return;
}





// 函数: void FUN_180832170(void)
void FUN_180832170(void)

{
  FUN_180832190();
  return;
}





// 函数: void FUN_180832190(float *param_1,int param_2,longlong param_3,ulonglong *param_4,longlong *param_5,
void FUN_180832190(float *param_1,int param_2,longlong param_3,ulonglong *param_4,longlong *param_5,
                  int param_6)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  if (param_2 != 0) {
    uVar3 = (ulonglong)(uint)*param_4;
    do {
      iVar4 = 0;
      fVar5 = (float)(uVar3 & 0xffffffff) * 2.3283064e-10;
      if (3 < param_6) {
        fVar6 = 1.0 - fVar5;
        do {
          *param_1 = fVar5 * *(float *)(param_3 +
                                       (ulonglong)
                                       ((*(uint *)((longlong)param_4 + 4) + 1) * param_6 + iVar4) *
                                       4) +
                     fVar6 * *(float *)(param_3 +
                                       (ulonglong)
                                       (*(uint *)((longlong)param_4 + 4) * param_6 + iVar4) * 4);
          param_1[1] = fVar5 * *(float *)(param_3 +
                                         (ulonglong)
                                         ((*(uint *)((longlong)param_4 + 4) + 1) * param_6 + 1 +
                                         iVar4) * 4) +
                       fVar6 * *(float *)(param_3 +
                                         (ulonglong)
                                         (*(uint *)((longlong)param_4 + 4) * param_6 + 1 + iVar4) *
                                         4);
          param_1[2] = fVar5 * *(float *)(param_3 +
                                         (ulonglong)
                                         ((*(uint *)((longlong)param_4 + 4) + 1) * param_6 + 2 +
                                         iVar4) * 4) +
                       fVar6 * *(float *)(param_3 +
                                         (ulonglong)
                                         (*(uint *)((longlong)param_4 + 4) * param_6 + 2 + iVar4) *
                                         4);
          uVar1 = (*(uint *)((longlong)param_4 + 4) + 1) * param_6 + 3 + iVar4;
          uVar2 = *(uint *)((longlong)param_4 + 4) * param_6 + 3 + iVar4;
          iVar4 = iVar4 + 4;
          param_1[3] = fVar5 * *(float *)(param_3 + (ulonglong)uVar1 * 4) +
                       fVar6 * *(float *)(param_3 + (ulonglong)uVar2 * 4);
          param_1 = param_1 + 4;
        } while (iVar4 < param_6 + -3);
      }
      if (iVar4 < param_6) {
        do {
          uVar2 = *(uint *)((longlong)param_4 + 4) * param_6 + iVar4;
          uVar1 = (*(uint *)((longlong)param_4 + 4) + 1) * param_6 + iVar4;
          iVar4 = iVar4 + 1;
          *param_1 = fVar5 * *(float *)(param_3 + (ulonglong)uVar1 * 4) +
                     (1.0 - fVar5) * *(float *)(param_3 + (ulonglong)uVar2 * 4);
          param_1 = param_1 + 1;
        } while (iVar4 < param_6);
      }
      *param_4 = *param_4 + *param_5;
      uVar3 = *param_4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}





// 函数: void FUN_1808321be(void)
void FUN_1808321be(void)

{
  uint uVar1;
  uint uVar2;
  ulonglong in_RAX;
  longlong unaff_RBX;
  int unaff_EDI;
  int iVar3;
  ulonglong *in_R9;
  int in_R10D;
  float *in_R11;
  float fVar4;
  float fVar5;
  float in_XMM4_Da;
  float in_XMM5_Da;
  longlong *in_stack_00000030;
  
  do {
    iVar3 = 0;
    fVar4 = (float)(in_RAX & 0xffffffff) * in_XMM5_Da;
    if (3 < in_R10D) {
      fVar5 = in_XMM4_Da - fVar4;
      do {
        *in_R11 = fVar4 * *(float *)(unaff_RBX +
                                    (ulonglong)
                                    (uint)((*(int *)((longlong)in_R9 + 4) + 1) * in_R10D + iVar3) *
                                    4) +
                  fVar5 * *(float *)(unaff_RBX +
                                    (ulonglong)
                                    (uint)(*(int *)((longlong)in_R9 + 4) * in_R10D + iVar3) * 4);
        in_R11[1] = fVar4 * *(float *)(unaff_RBX +
                                      (ulonglong)
                                      (uint)((*(int *)((longlong)in_R9 + 4) + 1) * in_R10D + 1 +
                                            iVar3) * 4) +
                    fVar5 * *(float *)(unaff_RBX +
                                      (ulonglong)
                                      (uint)(*(int *)((longlong)in_R9 + 4) * in_R10D + 1 + iVar3) *
                                      4);
        in_R11[2] = fVar4 * *(float *)(unaff_RBX +
                                      (ulonglong)
                                      (uint)((*(int *)((longlong)in_R9 + 4) + 1) * in_R10D + 2 +
                                            iVar3) * 4) +
                    fVar5 * *(float *)(unaff_RBX +
                                      (ulonglong)
                                      (uint)(*(int *)((longlong)in_R9 + 4) * in_R10D + 2 + iVar3) *
                                      4);
        uVar1 = (*(int *)((longlong)in_R9 + 4) + 1) * in_R10D + 3 + iVar3;
        uVar2 = *(int *)((longlong)in_R9 + 4) * in_R10D + 3 + iVar3;
        iVar3 = iVar3 + 4;
        in_R11[3] = fVar4 * *(float *)(unaff_RBX + (ulonglong)uVar1 * 4) +
                    fVar5 * *(float *)(unaff_RBX + (ulonglong)uVar2 * 4);
        in_R11 = in_R11 + 4;
      } while (iVar3 < in_R10D + -3);
    }
    if (iVar3 < in_R10D) {
      do {
        uVar2 = *(int *)((longlong)in_R9 + 4) * in_R10D + iVar3;
        uVar1 = (*(int *)((longlong)in_R9 + 4) + 1) * in_R10D + iVar3;
        iVar3 = iVar3 + 1;
        *in_R11 = fVar4 * *(float *)(unaff_RBX + (ulonglong)uVar1 * 4) +
                  (in_XMM4_Da - fVar4) * *(float *)(unaff_RBX + (ulonglong)uVar2 * 4);
        in_R11 = in_R11 + 1;
      } while (iVar3 < in_R10D);
    }
    *in_R9 = *in_R9 + *in_stack_00000030;
    in_RAX = *in_R9;
    unaff_EDI = unaff_EDI + -1;
  } while (unaff_EDI != 0);
  return;
}





// 函数: void FUN_180832345(void)
void FUN_180832345(void)

{
  return;
}





