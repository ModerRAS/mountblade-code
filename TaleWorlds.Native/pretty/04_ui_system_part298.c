#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part298.c - 15 个函数

// 函数: void FUN_180831328(void)
void FUN_180831328(void)

{
                    // WARNING: Subroutine does not return
  RenderingSystem_CoreProcessor0();
}



uint64_t FUN_180831360(void)

{
  int64_t lVar1;
  int64_t unaff_RSI;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  
  if (*(int *)(unaff_RSI + 0x68) != 0) {
    lVar1 = FUN_1807c4260();
    *(int64_t *)(unaff_RSI + 0x58) = lVar1;
    *(int *)(unaff_RSI + 100) = *(int *)(unaff_RSI + 100) + *(int *)(unaff_RSI + 0x68);
    *(int *)(unaff_RSI + 0x68) = (int)unaff_R15;
    unaff_R14 = 0xffffff75;
    if (lVar1 != 0) {
      unaff_R14 = unaff_R15 & 0xffffffff;
    }
  }
  *(int *)(unaff_RSI + 0x60) = (int)unaff_R15;
  *(uint64_t *)(unaff_RSI + 0x70) = unaff_R15;
  return unaff_R14 & 0xffffffff;
}



uint64_t FUN_18083136c(void)

{
  int64_t lVar1;
  int64_t unaff_RSI;
  uint64_t uVar2;
  uint64_t unaff_R15;
  
  lVar1 = FUN_1807c4260();
  *(int64_t *)(unaff_RSI + 0x58) = lVar1;
  *(int *)(unaff_RSI + 100) = *(int *)(unaff_RSI + 100) + *(int *)(unaff_RSI + 0x68);
  *(int *)(unaff_RSI + 0x68) = (int)unaff_R15;
  uVar2 = 0xffffff75;
  if (lVar1 != 0) {
    uVar2 = unaff_R15 & 0xffffffff;
  }
  *(int *)(unaff_RSI + 0x60) = (int)unaff_R15;
  *(uint64_t *)(unaff_RSI + 0x70) = unaff_R15;
  return uVar2;
}



int32_t FUN_1808313c0(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  if (*(int64_t *)(param_3 + 0x20) == 0) {
    return 1;
  }
                    // WARNING: Subroutine does not return
  memset(param_2,0,0x78);
}



int32_t FUN_1808317a0(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_28 [32];
  
  lVar1 = *(int64_t *)(param_1 + 0x20);
  func_0x00018082d920(auStack_28,*param_2,*(int32_t *)(param_2 + 1));
  iVar2 = SystemCore_Optimizer(auStack_28,1);
  if (iVar2 != 0) {
    return 0xffffff79;
  }
  iVar3 = 0;
  for (iVar2 = *(int *)(lVar1 + 8); 1 < iVar2; iVar2 = iVar2 >> 1) {
    iVar3 = iVar3 + 1;
  }
  iVar2 = SystemCore_Optimizer(auStack_28,iVar3);
  if (iVar2 != -1) {
    return *(int32_t *)(lVar1 + (int64_t)**(int **)(lVar1 + 0x20 + (int64_t)iVar2 * 8) * 4);
  }
  return 0xffffff78;
}



uint64_t FUN_180831820(uint64_t param_1,int64_t *param_2,uint64_t *param_3)

{
  int64_t lVar1;
  int iVar2;
  int32_t uVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  
  lVar10 = *(int64_t *)param_2[10];
  lVar6 = ((int64_t *)param_2[10])[0xe];
  lVar1 = *(int64_t *)(lVar10 + 0x20);
  uVar5 = FUN_180831300();
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  func_0x00018082d920(param_2 + 1,*param_3,*(int32_t *)(param_3 + 1));
  iVar2 = SystemCore_Optimizer(param_2 + 1,1);
  if (iVar2 != 0) {
    return 0xffffff79;
  }
  iVar2 = SystemCore_Optimizer(param_2 + 1,*(int32_t *)(lVar6 + 0x18));
  if (iVar2 == -1) {
LAB_180831995:
    uVar5 = 0xffffff78;
  }
  else {
    *(int *)(param_2 + 7) = iVar2;
    uVar7 = 0;
    iVar4 = **(int **)(lVar1 + 0x20 + (int64_t)iVar2 * 8);
    *(int *)((int64_t)param_2 + 0x2c) = iVar4;
    if (iVar4 == 0) {
      *(int32_t *)(param_2 + 5) = 0;
      *(int32_t *)(param_2 + 6) = 0;
      iVar4 = 0;
    }
    else {
      uVar3 = SystemCore_Optimizer(param_2 + 1,1);
      *(int32_t *)(param_2 + 5) = uVar3;
      iVar4 = SystemCore_Optimizer(param_2 + 1,1);
      *(int *)(param_2 + 6) = iVar4;
      if (iVar4 == -1) goto LAB_180831995;
      iVar4 = *(int *)((int64_t)param_2 + 0x2c);
    }
    param_2[8] = param_3[3];
    param_2[9] = param_3[4];
    *(int32_t *)((int64_t)param_2 + 0x3c) = *(int32_t *)(param_3 + 2);
    *(int32_t *)((int64_t)param_2 + 0x34) = *(int32_t *)(lVar1 + (int64_t)iVar4 * 4);
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
          uVar5 = FUN_180831260(param_1,param_2,*(int *)((int64_t)param_2 + 0x34) << 2);
          *(uint64_t *)(uVar7 + *param_2) = uVar5;
          if (*(int64_t *)(uVar7 + *param_2) == 0) goto LAB_18083198e;
          uVar8 = (int)uVar9 + 1;
          uVar7 = uVar7 + 8;
          uVar9 = (uint64_t)uVar8;
        } while ((int)uVar8 < *(int *)(lVar10 + 4));
      }
      lVar10 = (int64_t)*(int *)(*(int64_t *)(lVar1 + (int64_t)iVar2 * 8 + 0x20) + 0xc);
      uVar5 = (**(code **)(*(int64_t *)
                            (&processed_var_4256_ptr + (int64_t)*(int *)(lVar1 + 0x220 + lVar10 * 4) * 8) +
                          0x20))(param_1,param_2,*(uint64_t *)(lVar1 + 800 + lVar10 * 8));
    }
  }
  return uVar5;
}



uint64_t FUN_18083188e(void)

{
  int iVar1;
  int32_t uVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  uint64_t uVar6;
  uint uVar7;
  uint64_t uVar8;
  int64_t unaff_R12;
  int64_t unaff_R15;
  
  iVar1 = SystemCore_Optimizer();
  if (iVar1 == -1) {
LAB_180831995:
    uVar5 = 0xffffff78;
  }
  else {
    *(int *)(unaff_RBX + 7) = iVar1;
    uVar6 = 0;
    iVar3 = **(int **)(unaff_R12 + 0x20 + (int64_t)iVar1 * 8);
    *(int *)((int64_t)unaff_RBX + 0x2c) = iVar3;
    if (iVar3 == 0) {
      *(int32_t *)(unaff_RBX + 5) = 0;
      *(int32_t *)(unaff_RBX + 6) = 0;
      iVar3 = 0;
    }
    else {
      uVar2 = SystemCore_Optimizer(unaff_RBX + 1,1);
      *(int32_t *)(unaff_RBX + 5) = uVar2;
      iVar3 = SystemCore_Optimizer(unaff_RBX + 1,1);
      *(int *)(unaff_RBX + 6) = iVar3;
      if (iVar3 == -1) goto LAB_180831995;
      iVar3 = *(int *)((int64_t)unaff_RBX + 0x2c);
    }
    unaff_RBX[8] = *(int64_t *)(unaff_R15 + 0x18);
    unaff_RBX[9] = *(int64_t *)(unaff_R15 + 0x20);
    *(int32_t *)((int64_t)unaff_RBX + 0x3c) = *(int32_t *)(unaff_R15 + 0x10);
    *(int32_t *)((int64_t)unaff_RBX + 0x34) = *(int32_t *)(unaff_R12 + (int64_t)iVar3 * 4);
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
          *(uint64_t *)(uVar6 + *unaff_RBX) = uVar5;
          if (*(int64_t *)(uVar6 + *unaff_RBX) == 0) goto LAB_18083198e;
          uVar7 = (int)uVar8 + 1;
          uVar6 = uVar6 + 8;
          uVar8 = (uint64_t)uVar7;
        } while ((int)uVar7 < *(int *)(unaff_RBP + 4));
      }
      uVar5 = (**(code **)(*(int64_t *)
                            (&processed_var_4256_ptr +
                            (int64_t)
                            *(int *)(unaff_R12 + 0x220 +
                                    (int64_t)
                                    *(int *)(*(int64_t *)(unaff_R12 + (int64_t)iVar1 * 8 + 0x20) +
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



uint64_t FUN_1808319c0(uint64_t param_1,uint64_t *param_2,uint64_t *param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int32_t uVar4;
  uint64_t uVar5;
  
  lVar1 = ((int64_t *)param_2[10])[0xe];
  lVar2 = *(int64_t *)(*(int64_t *)param_2[10] + 0x20);
  uVar5 = FUN_180831300();
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  func_0x00018082d920(param_2 + 1,*param_3,*(int32_t *)(param_3 + 1));
  iVar3 = SystemCore_Optimizer(param_2 + 1,1);
  if (iVar3 != 0) {
    return 0xffffff79;
  }
  iVar3 = SystemCore_Optimizer(param_2 + 1,*(int32_t *)(lVar1 + 0x18));
  if (iVar3 == -1) {
LAB_180831a6b:
    uVar5 = 0xffffff78;
  }
  else {
    *(int *)(param_2 + 7) = iVar3;
    iVar3 = **(int **)(lVar2 + 0x20 + (int64_t)iVar3 * 8);
    *(int *)((int64_t)param_2 + 0x2c) = iVar3;
    if (iVar3 == 0) {
      *(int32_t *)(param_2 + 5) = 0;
      *(int32_t *)(param_2 + 6) = 0;
    }
    else {
      uVar4 = SystemCore_Optimizer(param_2 + 1,1);
      *(int32_t *)(param_2 + 5) = uVar4;
      iVar3 = SystemCore_Optimizer(param_2 + 1,1);
      *(int *)(param_2 + 6) = iVar3;
      if (iVar3 == -1) goto LAB_180831a6b;
    }
    param_2[8] = param_3[3];
    param_2[9] = param_3[4];
    *(int32_t *)((int64_t)param_2 + 0x3c) = *(int32_t *)(param_3 + 2);
    uVar5 = 0;
    *(int32_t *)((int64_t)param_2 + 0x34) = 0;
    *param_2 = 0;
  }
  return uVar5;
}





// 函数: void FUN_180831ac0(float *param_1,uint param_2,int64_t param_3,uint64_t *param_4,int64_t *param_5
void FUN_180831ac0(float *param_1,uint param_2,int64_t param_3,uint64_t *param_4,int64_t *param_5
                  )

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int iVar7;
  
  for (iVar7 = (int)param_2 >> 2; iVar7 != 0; iVar7 = iVar7 + -1) {
    uVar5 = *param_4 + *param_5;
    sVar1 = *(short *)(param_3 + (uint64_t)*(uint *)((int64_t)param_4 + 4) * 2);
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
    *param_1 = (float)(int)*(short *)(param_3 + (uint64_t)*(uint *)((int64_t)param_4 + 4) * 2) *
               3.0517578e-05;
    *param_4 = *param_4 + *param_5;
    param_1 = param_1 + 1;
  }
  return;
}





// 函数: void FUN_180831be0(float *param_1,uint param_2,int64_t param_3,int64_t *param_4,int64_t *param_5)
void FUN_180831be0(float *param_1,uint param_2,int64_t param_3,int64_t *param_4,int64_t *param_5)

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
  int64_t lVar11;
  int64_t lVar12;
  
  for (iVar10 = (int)param_2 >> 2; iVar10 != 0; iVar10 = iVar10 + -1) {
    lVar11 = *param_4 + *param_5;
    sVar1 = *(short *)(param_3 + (uint64_t)(uint)(*(int *)((int64_t)param_4 + 4) * 2) * 2);
    sVar2 = *(short *)(param_3 + (uint64_t)(*(int *)((int64_t)param_4 + 4) * 2 + 1) * 2);
    *param_4 = lVar11;
    lVar12 = *param_5 + lVar11;
    iVar9 = (int)((uint64_t)lVar11 >> 0x20);
    sVar3 = *(short *)(param_3 + (uint64_t)(uint)(iVar9 * 2) * 2);
    sVar4 = *(short *)(param_3 + (uint64_t)(iVar9 * 2 + 1) * 2);
    *param_4 = lVar12;
    lVar11 = *param_5 + lVar12;
    iVar9 = (int)((uint64_t)lVar12 >> 0x20);
    sVar5 = *(short *)(param_3 + (uint64_t)(uint)(iVar9 * 2) * 2);
    sVar6 = *(short *)(param_3 + (uint64_t)(iVar9 * 2 + 1) * 2);
    *param_4 = lVar11;
    iVar9 = (int)((uint64_t)lVar11 >> 0x20);
    sVar7 = *(short *)(param_3 + (uint64_t)(uint)(iVar9 * 2) * 2);
    sVar8 = *(short *)(param_3 + (uint64_t)(iVar9 * 2 + 1) * 2);
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
                                     (uint64_t)(uint)(*(int *)((int64_t)param_4 + 4) * 2) * 2) *
               3.0517578e-05;
    param_1[1] = (float)(int)*(short *)(param_3 +
                                       (uint64_t)(*(int *)((int64_t)param_4 + 4) * 2 + 1) * 2) *
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
  int64_t *unaff_RSI;
  int64_t unaff_RDI;
  int64_t lVar11;
  int64_t lVar12;
  int64_t *in_R11;
  float unaff_XMM8_Da;
  
  for (param_2 = param_2 >> 2; param_2 != 0; param_2 = param_2 + -1) {
    lVar11 = *in_R11 + *unaff_RSI;
    sVar1 = *(short *)(unaff_RDI + (uint64_t)(uint)(*(int *)((int64_t)in_R11 + 4) * 2) * 2);
    sVar2 = *(short *)(unaff_RDI + (uint64_t)(*(int *)((int64_t)in_R11 + 4) * 2 + 1) * 2);
    *in_R11 = lVar11;
    lVar12 = *unaff_RSI + lVar11;
    iVar9 = (int)((uint64_t)lVar11 >> 0x20);
    sVar3 = *(short *)(unaff_RDI + (uint64_t)(uint)(iVar9 * 2) * 2);
    sVar4 = *(short *)(unaff_RDI + (uint64_t)(iVar9 * 2 + 1) * 2);
    *in_R11 = lVar12;
    lVar11 = *unaff_RSI + lVar12;
    iVar9 = (int)((uint64_t)lVar12 >> 0x20);
    sVar5 = *(short *)(unaff_RDI + (uint64_t)(uint)(iVar9 * 2) * 2);
    sVar6 = *(short *)(unaff_RDI + (uint64_t)(iVar9 * 2 + 1) * 2);
    *in_R11 = lVar11;
    iVar9 = (int)((uint64_t)lVar11 >> 0x20);
    sVar7 = *(short *)(unaff_RDI + (uint64_t)(uint)(iVar9 * 2) * 2);
    sVar8 = *(short *)(unaff_RDI + (uint64_t)(iVar9 * 2 + 1) * 2);
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
                                     (uint64_t)(uint)(*(int *)((int64_t)in_R11 + 4) * 2) * 2) *
               unaff_XMM8_Da;
    param_1[1] = (float)(int)*(short *)(unaff_RDI +
                                       (uint64_t)(*(int *)((int64_t)in_R11 + 4) * 2 + 1) * 2) *
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
  int64_t *unaff_RSI;
  int64_t unaff_RDI;
  int64_t lVar11;
  int64_t lVar12;
  float *in_R10;
  int64_t *in_R11;
  float unaff_XMM8_Da;
  
  do {
    lVar11 = *in_R11 + *unaff_RSI;
    sVar1 = *(short *)(unaff_RDI + (uint64_t)(uint)(*(int *)((int64_t)in_R11 + 4) * 2) * 2);
    sVar2 = *(short *)(unaff_RDI + (uint64_t)(*(int *)((int64_t)in_R11 + 4) * 2 + 1) * 2);
    *in_R11 = lVar11;
    lVar12 = *unaff_RSI + lVar11;
    iVar9 = (int)((uint64_t)lVar11 >> 0x20);
    sVar3 = *(short *)(unaff_RDI + (uint64_t)(uint)(iVar9 * 2) * 2);
    sVar4 = *(short *)(unaff_RDI + (uint64_t)(iVar9 * 2 + 1) * 2);
    *in_R11 = lVar12;
    lVar11 = *unaff_RSI + lVar12;
    iVar9 = (int)((uint64_t)lVar12 >> 0x20);
    sVar5 = *(short *)(unaff_RDI + (uint64_t)(uint)(iVar9 * 2) * 2);
    sVar6 = *(short *)(unaff_RDI + (uint64_t)(iVar9 * 2 + 1) * 2);
    *in_R11 = lVar11;
    iVar9 = (int)((uint64_t)lVar11 >> 0x20);
    sVar7 = *(short *)(unaff_RDI + (uint64_t)(uint)(iVar9 * 2) * 2);
    sVar8 = *(short *)(unaff_RDI + (uint64_t)(iVar9 * 2 + 1) * 2);
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
                                    (uint64_t)(uint)(*(int *)((int64_t)in_R11 + 4) * 2) * 2) *
              unaff_XMM8_Da;
    in_R10[1] = (float)(int)*(short *)(unaff_RDI +
                                      (uint64_t)(*(int *)((int64_t)in_R11 + 4) * 2 + 1) * 2) *
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
  int64_t *unaff_RSI;
  int64_t unaff_RDI;
  float *in_R10;
  int64_t *in_R11;
  float unaff_XMM8_Da;
  
  for (uVar1 = unaff_EBX & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *in_R10 = (float)(int)*(short *)(unaff_RDI +
                                    (uint64_t)(uint)(*(int *)((int64_t)in_R11 + 4) * 2) * 2) *
              unaff_XMM8_Da;
    in_R10[1] = (float)(int)*(short *)(unaff_RDI +
                                      (uint64_t)(*(int *)((int64_t)in_R11 + 4) * 2 + 1) * 2) *
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
  int64_t *unaff_RSI;
  int64_t unaff_RDI;
  float *in_R10;
  int64_t *in_R11;
  float unaff_XMM8_Da;
  
  do {
    *in_R10 = (float)(int)*(short *)(unaff_RDI +
                                    (uint64_t)(uint)(*(int *)((int64_t)in_R11 + 4) * 2) * 2) *
              unaff_XMM8_Da;
    in_R10[1] = (float)(int)*(short *)(unaff_RDI +
                                      (uint64_t)(*(int *)((int64_t)in_R11 + 4) * 2 + 1) * 2) *
                unaff_XMM8_Da;
    *in_R11 = *in_R11 + *unaff_RSI;
    unaff_EBX = unaff_EBX + -1;
    in_R10 = in_R10 + 2;
  } while (unaff_EBX != 0);
  return;
}





// 函数: void FUN_180831de0(float *param_1,int param_2,int64_t param_3,int64_t *param_4,int64_t *param_5)
void FUN_180831de0(float *param_1,int param_2,int64_t param_3,int64_t *param_4,int64_t *param_5)

{
  int64_t lVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint uVar7;
  int32_t uVar8;
  uint64_t uVar9;
  int iVar10;
  int8_t auVar11 [16];
  int8_t auVar12 [16];
  int8_t auVar13 [16];
  int8_t auVar14 [16];
  int8_t auVar15 [16];
  int8_t auVar16 [16];
  int8_t auVar17 [16];
  int8_t auVar18 [16];
  
  uVar8 = (int32_t)*param_4;
  auVar11._0_8_ = *param_4;
  lVar5 = *param_5;
  lVar1 = lVar5 * 4;
  lVar6 = lVar5 * 3;
  auVar13._4_4_ = uVar8;
  auVar13._0_4_ = uVar8;
  auVar13._8_4_ = uVar8;
  auVar13._12_4_ = *(int32_t *)((int64_t)param_4 + 4);
  iVar10 = 0;
  auVar14._0_8_ = lVar5 << 0x20;
  auVar14._8_4_ = (int)lVar5;
  auVar14._12_4_ = (int)((uint64_t)lVar5 >> 0x20);
  auVar15._8_8_ = auVar14._8_8_ + auVar13._8_8_;
  auVar15._0_8_ = auVar11._0_8_;
  auVar16._0_8_ = lVar6 << 0x20;
  auVar16._8_4_ = (int)lVar6;
  auVar16._12_4_ = (int)((uint64_t)lVar6 >> 0x20);
  auVar17._0_8_ = lVar5 * 2 + auVar11._0_8_;
  auVar17._8_8_ = auVar16._8_8_ + auVar13._8_8_;
  uVar8 = (int32_t)lVar1;
  auVar18._4_4_ = uVar8;
  auVar18._0_4_ = uVar8;
  auVar18._8_4_ = uVar8;
  auVar18._12_4_ = (int)((uint64_t)lVar1 >> 0x20);
  if (0 < param_2 + -3) {
    uVar7 = (param_2 - 4U >> 2) + 1;
    uVar9 = (uint64_t)uVar7;
    iVar10 = uVar7 * 4;
    do {
      sVar2 = *(short *)(param_3 + (int64_t)auVar15._12_4_ * 2);
      sVar3 = *(short *)(param_3 + (int64_t)auVar17._4_4_ * 2);
      sVar4 = *(short *)(param_3 + (int64_t)auVar17._12_4_ * 2);
      auVar12._0_8_ = lVar1 + auVar17._0_8_;
      auVar12._8_8_ = auVar18._8_8_ + auVar17._8_8_;
      *param_1 = (float)(int)*(short *)(param_3 + (int64_t)auVar15._4_4_ * 2) * 3.0517578e-05;
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
    *param_1 = (float)(int)*(short *)(param_3 + (uint64_t)*(uint *)((int64_t)param_4 + 4) * 2) *
               3.0517578e-05;
    *param_4 = *param_4 + *param_5;
    param_1 = param_1 + 1;
  }
  return;
}





// 函数: void FUN_180831ff0(float *param_1,int param_2,int64_t param_3,int64_t *param_4,int64_t *param_5)
void FUN_180831ff0(float *param_1,int param_2,int64_t param_3,int64_t *param_4,int64_t *param_5)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int32_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint uVar8;
  int64_t lVar9;
  int64_t lVar10;
  int iVar11;
  uint64_t uVar12;
  int8_t auVar13 [16];
  int64_t lVar14;
  int64_t lVar15;
  
  iVar11 = 0;
  uVar4 = (int32_t)*param_5;
  lVar5 = *param_5;
  auVar13._4_4_ = uVar4;
  auVar13._0_4_ = uVar4;
  lVar14 = *param_4;
  auVar13._8_4_ = uVar4;
  auVar13._12_4_ = *(int32_t *)((int64_t)param_5 + 4);
  lVar15 = lVar14 + lVar5;
  if (0 < param_2 + -1) {
    uVar8 = (param_2 - 2U >> 1) + 1;
    uVar12 = (uint64_t)uVar8;
    iVar11 = uVar8 * 2;
    do {
      uVar6 = (uint64_t)lVar14 >> 0x20;
      uVar7 = (uint64_t)lVar15 >> 0x20;
      lVar14 = lVar14 + lVar5 * 2;
      lVar15 = lVar15 + auVar13._8_8_ * 2;
      lVar9 = (int64_t)((int)uVar6 * 2);
      lVar10 = (int64_t)((int)uVar7 * 2);
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
    uVar8 = *(int *)((int64_t)param_4 + 4) * 2;
    sVar1 = *(short *)(param_3 + (uint64_t)(uVar8 + 1) * 2);
    *param_1 = (float)(int)*(short *)(param_3 + (uint64_t)uVar8 * 2) * 3.0517578e-05;
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





// 函数: void FUN_180832190(float *param_1,int param_2,int64_t param_3,uint64_t *param_4,int64_t *param_5,
void FUN_180832190(float *param_1,int param_2,int64_t param_3,uint64_t *param_4,int64_t *param_5,
                  int param_6)

{
  uint uVar1;
  uint uVar2;
  uint64_t uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  if (param_2 != 0) {
    uVar3 = (uint64_t)(uint)*param_4;
    do {
      iVar4 = 0;
      fVar5 = (float)(uVar3 & 0xffffffff) * 2.3283064e-10;
      if (3 < param_6) {
        fVar6 = 1.0 - fVar5;
        do {
          *param_1 = fVar5 * *(float *)(param_3 +
                                       (uint64_t)
                                       ((*(uint *)((int64_t)param_4 + 4) + 1) * param_6 + iVar4) *
                                       4) +
                     fVar6 * *(float *)(param_3 +
                                       (uint64_t)
                                       (*(uint *)((int64_t)param_4 + 4) * param_6 + iVar4) * 4);
          param_1[1] = fVar5 * *(float *)(param_3 +
                                         (uint64_t)
                                         ((*(uint *)((int64_t)param_4 + 4) + 1) * param_6 + 1 +
                                         iVar4) * 4) +
                       fVar6 * *(float *)(param_3 +
                                         (uint64_t)
                                         (*(uint *)((int64_t)param_4 + 4) * param_6 + 1 + iVar4) *
                                         4);
          param_1[2] = fVar5 * *(float *)(param_3 +
                                         (uint64_t)
                                         ((*(uint *)((int64_t)param_4 + 4) + 1) * param_6 + 2 +
                                         iVar4) * 4) +
                       fVar6 * *(float *)(param_3 +
                                         (uint64_t)
                                         (*(uint *)((int64_t)param_4 + 4) * param_6 + 2 + iVar4) *
                                         4);
          uVar1 = (*(uint *)((int64_t)param_4 + 4) + 1) * param_6 + 3 + iVar4;
          uVar2 = *(uint *)((int64_t)param_4 + 4) * param_6 + 3 + iVar4;
          iVar4 = iVar4 + 4;
          param_1[3] = fVar5 * *(float *)(param_3 + (uint64_t)uVar1 * 4) +
                       fVar6 * *(float *)(param_3 + (uint64_t)uVar2 * 4);
          param_1 = param_1 + 4;
        } while (iVar4 < param_6 + -3);
      }
      if (iVar4 < param_6) {
        do {
          uVar2 = *(uint *)((int64_t)param_4 + 4) * param_6 + iVar4;
          uVar1 = (*(uint *)((int64_t)param_4 + 4) + 1) * param_6 + iVar4;
          iVar4 = iVar4 + 1;
          *param_1 = fVar5 * *(float *)(param_3 + (uint64_t)uVar1 * 4) +
                     (1.0 - fVar5) * *(float *)(param_3 + (uint64_t)uVar2 * 4);
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
  uint64_t in_RAX;
  int64_t unaff_RBX;
  int unaff_EDI;
  int iVar3;
  uint64_t *in_R9;
  int in_R10D;
  float *in_R11;
  float fVar4;
  float fVar5;
  float in_XMM4_Da;
  float in_XMM5_Da;
  int64_t *in_stack_00000030;
  
  do {
    iVar3 = 0;
    fVar4 = (float)(in_RAX & 0xffffffff) * in_XMM5_Da;
    if (3 < in_R10D) {
      fVar5 = in_XMM4_Da - fVar4;
      do {
        *in_R11 = fVar4 * *(float *)(unaff_RBX +
                                    (uint64_t)
                                    (uint)((*(int *)((int64_t)in_R9 + 4) + 1) * in_R10D + iVar3) *
                                    4) +
                  fVar5 * *(float *)(unaff_RBX +
                                    (uint64_t)
                                    (uint)(*(int *)((int64_t)in_R9 + 4) * in_R10D + iVar3) * 4);
        in_R11[1] = fVar4 * *(float *)(unaff_RBX +
                                      (uint64_t)
                                      (uint)((*(int *)((int64_t)in_R9 + 4) + 1) * in_R10D + 1 +
                                            iVar3) * 4) +
                    fVar5 * *(float *)(unaff_RBX +
                                      (uint64_t)
                                      (uint)(*(int *)((int64_t)in_R9 + 4) * in_R10D + 1 + iVar3) *
                                      4);
        in_R11[2] = fVar4 * *(float *)(unaff_RBX +
                                      (uint64_t)
                                      (uint)((*(int *)((int64_t)in_R9 + 4) + 1) * in_R10D + 2 +
                                            iVar3) * 4) +
                    fVar5 * *(float *)(unaff_RBX +
                                      (uint64_t)
                                      (uint)(*(int *)((int64_t)in_R9 + 4) * in_R10D + 2 + iVar3) *
                                      4);
        uVar1 = (*(int *)((int64_t)in_R9 + 4) + 1) * in_R10D + 3 + iVar3;
        uVar2 = *(int *)((int64_t)in_R9 + 4) * in_R10D + 3 + iVar3;
        iVar3 = iVar3 + 4;
        in_R11[3] = fVar4 * *(float *)(unaff_RBX + (uint64_t)uVar1 * 4) +
                    fVar5 * *(float *)(unaff_RBX + (uint64_t)uVar2 * 4);
        in_R11 = in_R11 + 4;
      } while (iVar3 < in_R10D + -3);
    }
    if (iVar3 < in_R10D) {
      do {
        uVar2 = *(int *)((int64_t)in_R9 + 4) * in_R10D + iVar3;
        uVar1 = (*(int *)((int64_t)in_R9 + 4) + 1) * in_R10D + iVar3;
        iVar3 = iVar3 + 1;
        *in_R11 = fVar4 * *(float *)(unaff_RBX + (uint64_t)uVar1 * 4) +
                  (in_XMM4_Da - fVar4) * *(float *)(unaff_RBX + (uint64_t)uVar2 * 4);
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





