#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part032.c - 10 个函数

// 函数: void FUN_180670c6a(void)
void FUN_180670c6a(void)

{
  int32_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t unaff_RBX;
  uint64_t uVar4;
  uint unaff_ESI;
  uint64_t uVar5;
  int64_t unaff_RDI;
  uint uVar6;
  uint64_t uVar7;
  
  FUN_180671080();
  if ((unaff_ESI & 0xf) != 0) {
    unaff_ESI = unaff_ESI + (0x10 - (unaff_ESI & 0xf));
  }
  if ((int)unaff_ESI < 0x280) {
    *(int32_t *)(unaff_RDI + 0x43a4) = 1;
  }
  else if ((int)unaff_ESI < 0x501) {
    *(int32_t *)(unaff_RDI + 0x43a4) = 8;
  }
  else {
    uVar1 = 0x20;
    if ((int)unaff_ESI < 0xa01) {
      uVar1 = 0x10;
    }
    *(int32_t *)(unaff_RDI + 0x43a4) = uVar1;
  }
  lVar2 = FUN_18066e8f0(4,(int64_t)*(int *)(unaff_RBX + 0xbb4));
  *(int64_t *)(unaff_RDI + 0x43a8) = lVar2;
  if (lVar2 == 0) {
    SystemInitializationProcessor();
  }
  lVar2 = FUN_18066e8f0(8,(int64_t)*(int *)(unaff_RBX + 0xbb4));
  *(int64_t *)(unaff_RDI + 0x43b0) = lVar2;
  if (lVar2 == 0) {
    SystemInitializationProcessor();
  }
  uVar4 = 0;
  if (0 < *(int *)(unaff_RBX + 0xbb4)) {
    uVar5 = uVar4;
    uVar7 = uVar4;
    do {
      uVar3 = FUN_18066e960(0x10,(int64_t)(int)(unaff_ESI + 0x40));
      *(uint64_t *)(uVar5 + *(int64_t *)(unaff_RDI + 0x43b0)) = uVar3;
      if (*(int64_t *)(uVar5 + *(int64_t *)(unaff_RDI + 0x43b0)) == 0) {
        SystemInitializationProcessor();
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (uint64_t)uVar6;
      uVar5 = uVar5 + 8;
    } while ((int)uVar6 < *(int *)(unaff_RBX + 0xbb4));
  }
  lVar2 = FUN_18066e8f0(8,(int64_t)*(int *)(unaff_RBX + 0xbb4));
  *(int64_t *)(unaff_RDI + 0x43b8) = lVar2;
  if (lVar2 == 0) {
    SystemInitializationProcessor();
  }
  if (0 < *(int *)(unaff_RBX + 0xbb4)) {
    uVar5 = uVar4;
    uVar7 = uVar4;
    do {
      uVar3 = FUN_18066e960(0x10,(int64_t)(((int)unaff_ESI >> 1) + 0x20));
      *(uint64_t *)(uVar7 + *(int64_t *)(unaff_RDI + 0x43b8)) = uVar3;
      if (*(int64_t *)(uVar7 + *(int64_t *)(unaff_RDI + 0x43b8)) == 0) {
        SystemInitializationProcessor();
      }
      uVar6 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar6;
      uVar7 = uVar7 + 8;
    } while ((int)uVar6 < *(int *)(unaff_RBX + 0xbb4));
  }
  lVar2 = FUN_18066e8f0(8,(int64_t)*(int *)(unaff_RBX + 0xbb4));
  *(int64_t *)(unaff_RDI + 0x43c0) = lVar2;
  if (lVar2 == 0) {
    SystemInitializationProcessor();
  }
  if (0 < *(int *)(unaff_RBX + 0xbb4)) {
    uVar5 = uVar4;
    uVar7 = uVar4;
    do {
      uVar3 = FUN_18066e960(0x10,(int64_t)(((int)unaff_ESI >> 1) + 0x20));
      *(uint64_t *)(uVar5 + *(int64_t *)(unaff_RDI + 0x43c0)) = uVar3;
      if (*(int64_t *)(uVar5 + *(int64_t *)(unaff_RDI + 0x43c0)) == 0) {
        SystemInitializationProcessor();
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (uint64_t)uVar6;
      uVar5 = uVar5 + 8;
    } while ((int)uVar6 < *(int *)(unaff_RBX + 0xbb4));
  }
  lVar2 = FUN_18066e8f0(8,(int64_t)*(int *)(unaff_RBX + 0xbb4));
  *(int64_t *)(unaff_RDI + 0x43c8) = lVar2;
  if (lVar2 == 0) {
    SystemInitializationProcessor();
  }
  uVar5 = uVar4;
  uVar7 = uVar4;
  if (0 < *(int *)(unaff_RBX + 0xbb4)) {
    do {
      uVar3 = FUN_18066e8f0(0x10,1);
      *(uint64_t *)(uVar5 + *(int64_t *)(unaff_RDI + 0x43c8)) = uVar3;
      if (*(int64_t *)(uVar5 + *(int64_t *)(unaff_RDI + 0x43c8)) == 0) {
        SystemInitializationProcessor();
      }
      uVar6 = (int)uVar7 + 1;
      uVar5 = uVar5 + 8;
      uVar7 = (uint64_t)uVar6;
    } while ((int)uVar6 < *(int *)(unaff_RBX + 0xbb4));
  }
  lVar2 = FUN_18066e8f0(8,(int64_t)*(int *)(unaff_RBX + 0xbb4));
  *(int64_t *)(unaff_RDI + 0x43d0) = lVar2;
  if (lVar2 == 0) {
    SystemInitializationProcessor();
  }
  uVar5 = uVar4;
  uVar7 = uVar4;
  if (0 < *(int *)(unaff_RBX + 0xbb4)) {
    do {
      uVar3 = FUN_18066e8f0(8);
      *(uint64_t *)(uVar5 + *(int64_t *)(unaff_RDI + 0x43d0)) = uVar3;
      if (*(int64_t *)(uVar5 + *(int64_t *)(unaff_RDI + 0x43d0)) == 0) {
        SystemInitializationProcessor();
      }
      uVar6 = (int)uVar7 + 1;
      uVar5 = uVar5 + 8;
      uVar7 = (uint64_t)uVar6;
    } while ((int)uVar6 < *(int *)(unaff_RBX + 0xbb4));
  }
  lVar2 = FUN_18066e8f0(8,(int64_t)*(int *)(unaff_RBX + 0xbb4));
  *(int64_t *)(unaff_RDI + 0x43d8) = lVar2;
  if (lVar2 == 0) {
    SystemInitializationProcessor();
  }
  uVar5 = uVar4;
  if (0 < *(int *)(unaff_RBX + 0xbb4)) {
    do {
      uVar3 = FUN_18066e8f0(8);
      *(uint64_t *)(uVar5 + *(int64_t *)(unaff_RDI + 0x43d8)) = uVar3;
      if (*(int64_t *)(uVar5 + *(int64_t *)(unaff_RDI + 0x43d8)) == 0) {
        SystemInitializationProcessor();
      }
      uVar6 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar6;
      uVar5 = uVar5 + 8;
    } while ((int)uVar6 < *(int *)(unaff_RBX + 0xbb4));
  }
  return;
}





// 函数: void FUN_180670c6f(void)
void FUN_180670c6f(void)

{
  int32_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t unaff_RBX;
  uint64_t uVar4;
  uint unaff_ESI;
  uint64_t uVar5;
  int64_t unaff_RDI;
  uint uVar6;
  uint64_t uVar7;
  
  FUN_180671080();
  if ((unaff_ESI & 0xf) != 0) {
    unaff_ESI = unaff_ESI + (0x10 - (unaff_ESI & 0xf));
  }
  if ((int)unaff_ESI < 0x280) {
    *(int32_t *)(unaff_RDI + 0x43a4) = 1;
  }
  else if ((int)unaff_ESI < 0x501) {
    *(int32_t *)(unaff_RDI + 0x43a4) = 8;
  }
  else {
    uVar1 = 0x20;
    if ((int)unaff_ESI < 0xa01) {
      uVar1 = 0x10;
    }
    *(int32_t *)(unaff_RDI + 0x43a4) = uVar1;
  }
  lVar2 = FUN_18066e8f0(4,(int64_t)*(int *)(unaff_RBX + 0xbb4));
  *(int64_t *)(unaff_RDI + 0x43a8) = lVar2;
  if (lVar2 == 0) {
    SystemInitializationProcessor();
  }
  lVar2 = FUN_18066e8f0(8,(int64_t)*(int *)(unaff_RBX + 0xbb4));
  *(int64_t *)(unaff_RDI + 0x43b0) = lVar2;
  if (lVar2 == 0) {
    SystemInitializationProcessor();
  }
  uVar4 = 0;
  if (0 < *(int *)(unaff_RBX + 0xbb4)) {
    uVar5 = uVar4;
    uVar7 = uVar4;
    do {
      uVar3 = FUN_18066e960(0x10,(int64_t)(int)(unaff_ESI + 0x40));
      *(uint64_t *)(uVar5 + *(int64_t *)(unaff_RDI + 0x43b0)) = uVar3;
      if (*(int64_t *)(uVar5 + *(int64_t *)(unaff_RDI + 0x43b0)) == 0) {
        SystemInitializationProcessor();
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (uint64_t)uVar6;
      uVar5 = uVar5 + 8;
    } while ((int)uVar6 < *(int *)(unaff_RBX + 0xbb4));
  }
  lVar2 = FUN_18066e8f0(8,(int64_t)*(int *)(unaff_RBX + 0xbb4));
  *(int64_t *)(unaff_RDI + 0x43b8) = lVar2;
  if (lVar2 == 0) {
    SystemInitializationProcessor();
  }
  if (0 < *(int *)(unaff_RBX + 0xbb4)) {
    uVar5 = uVar4;
    uVar7 = uVar4;
    do {
      uVar3 = FUN_18066e960(0x10,(int64_t)(((int)unaff_ESI >> 1) + 0x20));
      *(uint64_t *)(uVar7 + *(int64_t *)(unaff_RDI + 0x43b8)) = uVar3;
      if (*(int64_t *)(uVar7 + *(int64_t *)(unaff_RDI + 0x43b8)) == 0) {
        SystemInitializationProcessor();
      }
      uVar6 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar6;
      uVar7 = uVar7 + 8;
    } while ((int)uVar6 < *(int *)(unaff_RBX + 0xbb4));
  }
  lVar2 = FUN_18066e8f0(8,(int64_t)*(int *)(unaff_RBX + 0xbb4));
  *(int64_t *)(unaff_RDI + 0x43c0) = lVar2;
  if (lVar2 == 0) {
    SystemInitializationProcessor();
  }
  if (0 < *(int *)(unaff_RBX + 0xbb4)) {
    uVar5 = uVar4;
    uVar7 = uVar4;
    do {
      uVar3 = FUN_18066e960(0x10,(int64_t)(((int)unaff_ESI >> 1) + 0x20));
      *(uint64_t *)(uVar5 + *(int64_t *)(unaff_RDI + 0x43c0)) = uVar3;
      if (*(int64_t *)(uVar5 + *(int64_t *)(unaff_RDI + 0x43c0)) == 0) {
        SystemInitializationProcessor();
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (uint64_t)uVar6;
      uVar5 = uVar5 + 8;
    } while ((int)uVar6 < *(int *)(unaff_RBX + 0xbb4));
  }
  lVar2 = FUN_18066e8f0(8,(int64_t)*(int *)(unaff_RBX + 0xbb4));
  *(int64_t *)(unaff_RDI + 0x43c8) = lVar2;
  if (lVar2 == 0) {
    SystemInitializationProcessor();
  }
  uVar5 = uVar4;
  uVar7 = uVar4;
  if (0 < *(int *)(unaff_RBX + 0xbb4)) {
    do {
      uVar3 = FUN_18066e8f0(0x10,1);
      *(uint64_t *)(uVar5 + *(int64_t *)(unaff_RDI + 0x43c8)) = uVar3;
      if (*(int64_t *)(uVar5 + *(int64_t *)(unaff_RDI + 0x43c8)) == 0) {
        SystemInitializationProcessor();
      }
      uVar6 = (int)uVar7 + 1;
      uVar5 = uVar5 + 8;
      uVar7 = (uint64_t)uVar6;
    } while ((int)uVar6 < *(int *)(unaff_RBX + 0xbb4));
  }
  lVar2 = FUN_18066e8f0(8,(int64_t)*(int *)(unaff_RBX + 0xbb4));
  *(int64_t *)(unaff_RDI + 0x43d0) = lVar2;
  if (lVar2 == 0) {
    SystemInitializationProcessor();
  }
  uVar5 = uVar4;
  uVar7 = uVar4;
  if (0 < *(int *)(unaff_RBX + 0xbb4)) {
    do {
      uVar3 = FUN_18066e8f0(8);
      *(uint64_t *)(uVar5 + *(int64_t *)(unaff_RDI + 0x43d0)) = uVar3;
      if (*(int64_t *)(uVar5 + *(int64_t *)(unaff_RDI + 0x43d0)) == 0) {
        SystemInitializationProcessor();
      }
      uVar6 = (int)uVar7 + 1;
      uVar5 = uVar5 + 8;
      uVar7 = (uint64_t)uVar6;
    } while ((int)uVar6 < *(int *)(unaff_RBX + 0xbb4));
  }
  lVar2 = FUN_18066e8f0(8,(int64_t)*(int *)(unaff_RBX + 0xbb4));
  *(int64_t *)(unaff_RDI + 0x43d8) = lVar2;
  if (lVar2 == 0) {
    SystemInitializationProcessor();
  }
  uVar5 = uVar4;
  if (0 < *(int *)(unaff_RBX + 0xbb4)) {
    do {
      uVar3 = FUN_18066e8f0(8);
      *(uint64_t *)(uVar5 + *(int64_t *)(unaff_RDI + 0x43d8)) = uVar3;
      if (*(int64_t *)(uVar5 + *(int64_t *)(unaff_RDI + 0x43d8)) == 0) {
        SystemInitializationProcessor();
      }
      uVar6 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar6;
      uVar5 = uVar5 + 8;
    } while ((int)uVar6 < *(int *)(unaff_RBX + 0xbb4));
  }
  return;
}





// 函数: void FUN_180670ede(void)
void FUN_180670ede(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t unaff_RBX;
  int iVar3;
  uint64_t unaff_RBP;
  uint64_t uVar4;
  int64_t unaff_RDI;
  uint uVar5;
  uint64_t uVar6;
  
  SystemInitializationProcessor();
  iVar3 = (int)unaff_RBP;
  uVar6 = unaff_RBP & 0xffffffff;
  uVar4 = unaff_RBP;
  if (iVar3 < *(int *)(unaff_RBX + 0xbb4)) {
    do {
      uVar1 = FUN_18066e8f0();
      *(uint64_t *)(uVar4 + *(int64_t *)(unaff_RDI + 0x43c8)) = uVar1;
      if (*(uint64_t *)(uVar4 + *(int64_t *)(unaff_RDI + 0x43c8)) == unaff_RBP) {
        SystemInitializationProcessor();
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (uint64_t)uVar5;
      uVar4 = uVar4 + 8;
    } while ((int)uVar5 < *(int *)(unaff_RBX + 0xbb4));
  }
  lVar2 = FUN_18066e8f0(8,(int64_t)*(int *)(unaff_RBX + 0xbb4));
  *(int64_t *)(unaff_RDI + 0x43d0) = lVar2;
  if (lVar2 == 0) {
    SystemInitializationProcessor();
  }
  uVar6 = unaff_RBP & 0xffffffff;
  uVar4 = unaff_RBP;
  if (iVar3 < *(int *)(unaff_RBX + 0xbb4)) {
    do {
      uVar1 = FUN_18066e8f0(8);
      *(uint64_t *)(uVar4 + *(int64_t *)(unaff_RDI + 0x43d0)) = uVar1;
      if (*(uint64_t *)(uVar4 + *(int64_t *)(unaff_RDI + 0x43d0)) == unaff_RBP) {
        SystemInitializationProcessor();
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (uint64_t)uVar5;
      uVar4 = uVar4 + 8;
    } while ((int)uVar5 < *(int *)(unaff_RBX + 0xbb4));
  }
  lVar2 = FUN_18066e8f0(8,(int64_t)*(int *)(unaff_RBX + 0xbb4));
  *(int64_t *)(unaff_RDI + 0x43d8) = lVar2;
  if (lVar2 == 0) {
    SystemInitializationProcessor();
  }
  uVar4 = unaff_RBP;
  if (iVar3 < *(int *)(unaff_RBX + 0xbb4)) {
    do {
      uVar1 = FUN_18066e8f0(8);
      *(uint64_t *)(uVar4 + *(int64_t *)(unaff_RDI + 0x43d8)) = uVar1;
      if (*(int64_t *)(uVar4 + *(int64_t *)(unaff_RDI + 0x43d8)) == 0) {
        SystemInitializationProcessor();
      }
      uVar5 = (int)unaff_RBP + 1;
      unaff_RBP = (uint64_t)uVar5;
      uVar4 = uVar4 + 8;
    } while ((int)uVar5 < *(int *)(unaff_RBX + 0xbb4));
  }
  return;
}





// 函数: void FUN_180670f6b(void)
void FUN_180670f6b(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t uVar3;
  int64_t unaff_RDI;
  uint uVar4;
  uint64_t uVar5;
  
  SystemInitializationProcessor();
  uVar5 = unaff_RBP & 0xffffffff;
  uVar3 = unaff_RBP;
  if ((int)unaff_RBP < *(int *)(unaff_RBX + 0xbb4)) {
    do {
      uVar1 = FUN_18066e8f0(8);
      *(uint64_t *)(uVar3 + *(int64_t *)(unaff_RDI + 0x43d0)) = uVar1;
      if (*(uint64_t *)(uVar3 + *(int64_t *)(unaff_RDI + 0x43d0)) == unaff_RBP) {
        SystemInitializationProcessor();
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar4;
      uVar3 = uVar3 + 8;
    } while ((int)uVar4 < *(int *)(unaff_RBX + 0xbb4));
  }
  lVar2 = FUN_18066e8f0(8,(int64_t)*(int *)(unaff_RBX + 0xbb4));
  *(int64_t *)(unaff_RDI + 0x43d8) = lVar2;
  if (lVar2 == 0) {
    SystemInitializationProcessor();
  }
  uVar3 = unaff_RBP;
  if ((int)unaff_RBP < *(int *)(unaff_RBX + 0xbb4)) {
    do {
      uVar1 = FUN_18066e8f0(8);
      *(uint64_t *)(uVar3 + *(int64_t *)(unaff_RDI + 0x43d8)) = uVar1;
      if (*(int64_t *)(uVar3 + *(int64_t *)(unaff_RDI + 0x43d8)) == 0) {
        SystemInitializationProcessor();
      }
      uVar4 = (int)unaff_RBP + 1;
      unaff_RBP = (uint64_t)uVar4;
      uVar3 = uVar3 + 8;
    } while ((int)uVar4 < *(int *)(unaff_RBX + 0xbb4));
  }
  return;
}





// 函数: void FUN_180670ffb(void)
void FUN_180670ffb(void)

{
  uint64_t uVar1;
  int64_t unaff_RBX;
  uint uVar2;
  uint64_t unaff_RBP;
  uint64_t uVar3;
  int64_t unaff_RDI;
  
  SystemInitializationProcessor();
  uVar3 = unaff_RBP;
  if ((int)unaff_RBP < *(int *)(unaff_RBX + 0xbb4)) {
    do {
      uVar1 = FUN_18066e8f0(8);
      *(uint64_t *)(uVar3 + *(int64_t *)(unaff_RDI + 0x43d8)) = uVar1;
      if (*(int64_t *)(uVar3 + *(int64_t *)(unaff_RDI + 0x43d8)) == 0) {
        SystemInitializationProcessor();
      }
      uVar2 = (int)unaff_RBP + 1;
      unaff_RBP = (uint64_t)uVar2;
      uVar3 = uVar3 + 8;
    } while ((int)uVar2 < *(int *)(unaff_RBX + 0xbb4));
  }
  return;
}





// 函数: void FUN_18067106d(void)
void FUN_18067106d(void)

{
  return;
}





// 函数: void FUN_180671080(int64_t param_1,int param_2)
void FUN_180671080(int64_t param_1,int param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  lVar3 = (int64_t)param_2;
  if (*(int *)(param_1 + 0x4380) != 0) {
    func_0x00018066e940(*(uint64_t *)(param_1 + 0x43a8));
    lVar2 = 0;
    *(uint64_t *)(param_1 + 0x43a8) = 0;
    if (*(int64_t *)(param_1 + 0x43b0) != 0) {
      lVar1 = lVar2;
      if (0 < lVar3) {
        do {
          func_0x00018066e940(*(uint64_t *)(*(int64_t *)(param_1 + 0x43b0) + lVar1 * 8));
          *(uint64_t *)(*(int64_t *)(param_1 + 0x43b0) + lVar1 * 8) = 0;
          lVar1 = lVar1 + 1;
        } while (lVar1 < lVar3);
      }
      func_0x00018066e940(*(uint64_t *)(param_1 + 0x43b0));
      *(uint64_t *)(param_1 + 0x43b0) = 0;
    }
    if (*(int64_t *)(param_1 + 0x43b8) != 0) {
      lVar1 = lVar2;
      if (0 < lVar3) {
        do {
          func_0x00018066e940(*(uint64_t *)(*(int64_t *)(param_1 + 0x43b8) + lVar1 * 8));
          *(uint64_t *)(*(int64_t *)(param_1 + 0x43b8) + lVar1 * 8) = 0;
          lVar1 = lVar1 + 1;
        } while (lVar1 < lVar3);
      }
      func_0x00018066e940(*(uint64_t *)(param_1 + 0x43b8));
      *(uint64_t *)(param_1 + 0x43b8) = 0;
    }
    if (*(int64_t *)(param_1 + 0x43c0) != 0) {
      lVar1 = lVar2;
      if (0 < lVar3) {
        do {
          func_0x00018066e940(*(uint64_t *)(*(int64_t *)(param_1 + 0x43c0) + lVar1 * 8));
          *(uint64_t *)(*(int64_t *)(param_1 + 0x43c0) + lVar1 * 8) = 0;
          lVar1 = lVar1 + 1;
        } while (lVar1 < lVar3);
      }
      func_0x00018066e940(*(uint64_t *)(param_1 + 0x43c0));
      *(uint64_t *)(param_1 + 0x43c0) = 0;
    }
    if (*(int64_t *)(param_1 + 0x43c8) != 0) {
      lVar1 = lVar2;
      if (0 < lVar3) {
        do {
          func_0x00018066e940(*(uint64_t *)(*(int64_t *)(param_1 + 0x43c8) + lVar1 * 8));
          *(uint64_t *)(*(int64_t *)(param_1 + 0x43c8) + lVar1 * 8) = 0;
          lVar1 = lVar1 + 1;
        } while (lVar1 < lVar3);
      }
      func_0x00018066e940(*(uint64_t *)(param_1 + 0x43c8));
      *(uint64_t *)(param_1 + 0x43c8) = 0;
    }
    if (*(int64_t *)(param_1 + 0x43d0) != 0) {
      lVar1 = lVar2;
      if (0 < lVar3) {
        do {
          func_0x00018066e940(*(uint64_t *)(*(int64_t *)(param_1 + 0x43d0) + lVar1 * 8));
          *(uint64_t *)(*(int64_t *)(param_1 + 0x43d0) + lVar1 * 8) = 0;
          lVar1 = lVar1 + 1;
        } while (lVar1 < lVar3);
      }
      func_0x00018066e940(*(uint64_t *)(param_1 + 0x43d0));
      *(uint64_t *)(param_1 + 0x43d0) = 0;
    }
    if (*(int64_t *)(param_1 + 0x43d8) != 0) {
      if (0 < lVar3) {
        do {
          func_0x00018066e940(*(uint64_t *)(*(int64_t *)(param_1 + 0x43d8) + lVar2 * 8));
          *(uint64_t *)(*(int64_t *)(param_1 + 0x43d8) + lVar2 * 8) = 0;
          lVar2 = lVar2 + 1;
        } while (lVar2 < lVar3);
      }
      func_0x00018066e940(*(uint64_t *)(param_1 + 0x43d8));
      *(uint64_t *)(param_1 + 0x43d8) = 0;
    }
  }
  return;
}





// 函数: void FUN_1806710a5(void)
void FUN_1806710a5(void)

{
  int64_t unaff_RBX;
  int64_t lVar1;
  int64_t lVar2;
  int64_t unaff_RDI;
  
  func_0x00018066e940();
  lVar2 = 0;
  *(uint64_t *)(unaff_RBX + 0x43a8) = 0;
  if (*(int64_t *)(unaff_RBX + 0x43b0) != 0) {
    lVar1 = lVar2;
    if (0 < unaff_RDI) {
      do {
        func_0x00018066e940(*(uint64_t *)(*(int64_t *)(unaff_RBX + 0x43b0) + lVar1 * 8));
        *(uint64_t *)(*(int64_t *)(unaff_RBX + 0x43b0) + lVar1 * 8) = 0;
        lVar1 = lVar1 + 1;
      } while (lVar1 < unaff_RDI);
    }
    func_0x00018066e940(*(uint64_t *)(unaff_RBX + 0x43b0));
    *(uint64_t *)(unaff_RBX + 0x43b0) = 0;
  }
  if (*(int64_t *)(unaff_RBX + 0x43b8) != 0) {
    lVar1 = lVar2;
    if (0 < unaff_RDI) {
      do {
        func_0x00018066e940(*(uint64_t *)(*(int64_t *)(unaff_RBX + 0x43b8) + lVar1 * 8));
        *(uint64_t *)(*(int64_t *)(unaff_RBX + 0x43b8) + lVar1 * 8) = 0;
        lVar1 = lVar1 + 1;
      } while (lVar1 < unaff_RDI);
    }
    func_0x00018066e940(*(uint64_t *)(unaff_RBX + 0x43b8));
    *(uint64_t *)(unaff_RBX + 0x43b8) = 0;
  }
  if (*(int64_t *)(unaff_RBX + 0x43c0) != 0) {
    lVar1 = lVar2;
    if (0 < unaff_RDI) {
      do {
        func_0x00018066e940(*(uint64_t *)(*(int64_t *)(unaff_RBX + 0x43c0) + lVar1 * 8));
        *(uint64_t *)(*(int64_t *)(unaff_RBX + 0x43c0) + lVar1 * 8) = 0;
        lVar1 = lVar1 + 1;
      } while (lVar1 < unaff_RDI);
    }
    func_0x00018066e940(*(uint64_t *)(unaff_RBX + 0x43c0));
    *(uint64_t *)(unaff_RBX + 0x43c0) = 0;
  }
  if (*(int64_t *)(unaff_RBX + 0x43c8) != 0) {
    lVar1 = lVar2;
    if (0 < unaff_RDI) {
      do {
        func_0x00018066e940(*(uint64_t *)(*(int64_t *)(unaff_RBX + 0x43c8) + lVar1 * 8));
        *(uint64_t *)(*(int64_t *)(unaff_RBX + 0x43c8) + lVar1 * 8) = 0;
        lVar1 = lVar1 + 1;
      } while (lVar1 < unaff_RDI);
    }
    func_0x00018066e940(*(uint64_t *)(unaff_RBX + 0x43c8));
    *(uint64_t *)(unaff_RBX + 0x43c8) = 0;
  }
  if (*(int64_t *)(unaff_RBX + 0x43d0) != 0) {
    lVar1 = lVar2;
    if (0 < unaff_RDI) {
      do {
        func_0x00018066e940(*(uint64_t *)(*(int64_t *)(unaff_RBX + 0x43d0) + lVar1 * 8));
        *(uint64_t *)(*(int64_t *)(unaff_RBX + 0x43d0) + lVar1 * 8) = 0;
        lVar1 = lVar1 + 1;
      } while (lVar1 < unaff_RDI);
    }
    func_0x00018066e940(*(uint64_t *)(unaff_RBX + 0x43d0));
    *(uint64_t *)(unaff_RBX + 0x43d0) = 0;
  }
  if (*(int64_t *)(unaff_RBX + 0x43d8) != 0) {
    if (0 < unaff_RDI) {
      do {
        func_0x00018066e940(*(uint64_t *)(*(int64_t *)(unaff_RBX + 0x43d8) + lVar2 * 8));
        *(uint64_t *)(*(int64_t *)(unaff_RBX + 0x43d8) + lVar2 * 8) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar2 < unaff_RDI);
    }
    func_0x00018066e940(*(uint64_t *)(unaff_RBX + 0x43d8));
    *(uint64_t *)(unaff_RBX + 0x43d8) = 0;
  }
  return;
}





// 函数: void FUN_1806712a0(void)
void FUN_1806712a0(void)

{
  return;
}





// 函数: void FUN_1806712b0(int64_t param_1,uint64_t param_2)
void FUN_1806712b0(int64_t param_1,uint64_t param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x2be0) == 0) {
    FUN_18069def0(*(int **)(param_1 + 0x12a0));
    FUN_180670510(param_1,param_2,*(uint64_t *)(param_1 + 0x43e0),
                  *(int32_t *)(param_1 + 0x438c));
    if (*(int *)(param_1 + 0x438c) != 0) {
      do {
        ReleaseSemaphore(*(uint64_t *)(*(int64_t *)(param_1 + 0x43f8) + (uint64_t)uVar1 * 8),1);
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0x438c));
    }
    FUN_18066f810(param_1,param_2,0);
                    // WARNING: Could not recover jumptable at 0x000180671494. Too many branches
                    // WARNING: Treating indirect jump as call
    WaitForSingleObject(*(uint64_t *)(param_1 + 0x4400),0xffffffff);
    return;
  }
                    // WARNING: Subroutine does not return
  memset(**(int64_t **)(param_1 + 0x43b0) + 0x1f,0x7f,(int64_t)(**(int **)(param_1 + 0x12a0) + 5))
  ;
}



int FUN_1806714a0(int64_t param_1,int64_t param_2,int64_t param_3,short *param_4,short *param_5,
                 int param_6,int param_7,int *param_8,uint64_t *param_9,int64_t *param_10,
                 short *param_11)

{
  short sVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  uint uVar7;
  short sVar8;
  uint64_t uVar9;
  int iVar10;
  int64_t lVar11;
  uint64_t uVar12;
  int *piVar13;
  short sVar14;
  int64_t lVar15;
  uint64_t uVar16;
  int iVar17;
  int iStackX_8;
  int iStackX_20;
  uint auStack_a8 [2];
  uint64_t uStack_a0;
  int64_t lStack_98;
  int64_t lStack_90;
  int64_t lStack_88;
  uint64_t uStack_80;
  int64_t lStack_78;
  int64_t lStack_70;
  int64_t lStack_68;
  int64_t lStack_60;
  int64_t lStack_58;
  
  psVar5 = param_5;
  lVar15 = *(int64_t *)(param_1 + 0x1e98);
  iVar10 = *(int *)(param_1 + 0x23dc);
  iVar17 = *(int *)(param_1 + 0x23d8);
  iStackX_8 = 0;
  lStack_78 = (int64_t)*(int *)(param_2 + 0x50) + **(int64_t **)(param_2 + 0x48);
  uVar2 = *(int32_t *)(param_2 + 0x54);
  iVar3 = *(int *)(param_1 + 0x1e70);
  lStack_90 = *(int64_t *)(param_1 + 0x2398);
  lStack_88 = *(int64_t *)(param_1 + 0x23a0);
  iStackX_20 = 0;
  sVar1 = *param_11;
  sVar8 = param_11[1];
  iVar6 = (int)param_4[1];
  if ((int)param_4[1] < *(int *)(param_1 + 0x23d0)) {
    iVar6 = *(int *)(param_1 + 0x23d0);
  }
  iVar4 = (int)(short)iVar6;
  if (*(int *)(param_1 + 0x23d4) < (int)(short)iVar6) {
    iVar4 = *(int *)(param_1 + 0x23d4);
  }
  sVar14 = (short)iVar4;
  param_4[1] = sVar14;
  iVar6 = (int)*param_4;
  if (*param_4 < iVar17) {
    iVar6 = iVar17;
  }
  iVar17 = (int)(short)iVar6;
  if (iVar10 < (short)iVar6) {
    iVar17 = iVar10;
  }
  lStack_68 = (int64_t)(sVar8 >> 3);
  sVar8 = (short)iVar17;
  *param_4 = sVar8;
  *param_8 = 0;
  *param_5 = sVar8;
  param_5[1] = sVar14;
  lStack_70 = (int64_t)(sVar1 >> 3);
  lVar11 = *(int *)(param_3 + 0x20) + lVar15 + (int64_t)(sVar8 * iVar3) + (int64_t)sVar14;
  iVar10 = *(int *)(lStack_90 + (sVar8 - lStack_70) * 4);
  iVar17 = *(int *)(lStack_88 + (sVar14 - lStack_68) * 4);
  lStack_98 = lVar11;
  lStack_58 = lVar11;
  iVar6 = (*(code *)*param_9)(lStack_78,uVar2,lVar11,iVar3);
  uVar12 = 1;
  param_5._0_4_ = iVar6 + ((iVar10 + iVar17) * param_7 + 0x80 >> 8);
  lVar15 = *(int64_t *)(param_1 + 0x2348) + (int64_t)(*(int *)(param_1 + 0x2354) * param_6) * 8;
  uVar7 = *(int *)(param_1 + 0x2350) / *(int *)(param_1 + 0x2354) - param_6;
  lStack_60 = lVar15;
  if (0 < (int)uVar7) {
    uVar9 = 0;
    uStack_80 = (uint64_t)uVar7;
    uStack_a0 = 0;
    iVar10 = 0;
    uVar16 = uVar12;
    do {
      iVar17 = 0;
      if (0 < *(int *)(param_1 + 0x2354)) {
        piVar13 = (int *)(uVar12 * 8 + 4 + lVar15);
        do {
          iVar10 = (int)(short)piVar13[-1] + (int)*psVar5;
          iVar6 = (int)*(short *)((int64_t)piVar13 + -2) + (int)psVar5[1];
          if ((((*(int *)(param_1 + 0x23d0) < iVar6) && (iVar6 < *(int *)(param_1 + 0x23d4))) &&
              (*(int *)(param_1 + 0x23d8) < iVar10)) &&
             (((iVar10 < *(int *)(param_1 + 0x23dc) &&
               (auStack_a8[0] = (*(code *)*param_9)(lStack_78,uVar2,*piVar13 + lStack_98,iVar3),
               uVar9 = uStack_a0, auStack_a8[0] < (uint)param_5)) &&
              (auStack_a8[0] =
                    auStack_a8[0] +
                    ((*(int *)(lStack_90 + ((short)iVar10 - lStack_70) * 4) +
                     *(int *)(lStack_88 + ((short)iVar6 - lStack_68) * 4)) * param_7 + 0x80 >> 8),
              auStack_a8[0] < (uint)param_5)))) {
            uVar9 = uVar12;
            iStackX_8 = (int)uVar16;
            param_5._0_4_ = auStack_a8[0];
            uStack_a0 = uVar12;
          }
          uVar16 = (uint64_t)((int)uVar16 + 1);
          uVar12 = uVar12 + 1;
          piVar13 = piVar13 + 2;
          iVar17 = iVar17 + 1;
          lVar11 = lStack_98;
          lVar15 = lStack_60;
          iVar10 = iStackX_8;
        } while (iVar17 < *(int *)(param_1 + 0x2354));
      }
      if (iVar10 == iStackX_20) {
        if (lVar11 == lStack_58) {
          *param_8 = *param_8 + 1;
        }
      }
      else {
        *psVar5 = *psVar5 + *(short *)(lVar15 + uVar9 * 8);
        psVar5[1] = psVar5[1] + *(short *)(lVar15 + 2 + uVar9 * 8);
        lVar11 = lVar11 + *(int *)(lVar15 + 4 + uVar9 * 8);
        iStackX_20 = iVar10;
        lStack_98 = lVar11;
      }
      uStack_80 = uStack_80 - 1;
    } while (uStack_80 != 0);
    uStack_80 = 0;
  }
  iVar10 = 0;
  if (param_10 != (int64_t *)0x0) {
    iVar10 = (*(int *)(param_10[1] +
                      ((int64_t)((int)(short)(psVar5[1] << 3) - (int)param_11[1]) >> 1) * 4) +
             *(int *)(*param_10 + ((int64_t)((int)(short)(*psVar5 << 3) - (int)*param_11) >> 1) * 4
                     )) * *(int *)(param_1 + 0x2358) + 0x80 >> 8;
  }
  iVar17 = (*(code *)param_9[1])(lStack_78,uVar2,lVar11,iVar3,auStack_a8);
  return iVar17 + iVar10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



