#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// $fun 的语义化别名
#define $alias_name $fun


// 99_part_12_part017.c - 6 个函数

// 函数: void FUN_1807d68f0(int *param_1,float param_2,float param_3,float param_4,float param_5,
void FUN_1807d68f0(int *param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,int param_7,int64_t param_8)

{
  int *piVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  int32_t *puVar5;
  int32_t uVar6;
  float fVar7;
  int8_t auStack_168 [32];
  uint uStack_148;
  int64_t lStack_140;
  int32_t *puStack_138;
  int32_t auStack_128 [32];
  uint64_t uStack_a8;
  
  uStack_a8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_168;
  if ((param_1[1] == 0) && (param_1[0x2a] == 0)) {
    iVar4 = 0;
    if (0 < param_1[0x27]) {
      lVar3 = 0;
      do {
        iVar4 = iVar4 + 1;
        lVar2 = (int64_t)(*(int *)(lVar3 + *(int64_t *)(param_1 + 0x28)) * param_7);
        *(float *)(param_8 + lVar2 * 4) = param_6 * 0.70710677 + *(float *)(param_8 + lVar2 * 4);
        piVar1 = (int *)(lVar3 + *(int64_t *)(param_1 + 0x28));
        lVar3 = lVar3 + 4;
        lVar2 = (int64_t)(*piVar1 * param_7);
        *(float *)(param_8 + 4 + lVar2 * 4) =
             param_6 * 0.70710677 + *(float *)(param_8 + 4 + lVar2 * 4);
      } while (iVar4 < param_1[0x27]);
    }
  }
  else {
    uVar6 = 0xc3340000;
    for (param_4 = param_4 - param_2; param_4 < -180.0; param_4 = param_4 + 360.0) {
    }
    if (180.0 <= param_4) {
      uVar6 = 0xc3b40000;
      do {
        param_4 = param_4 + -360.0;
      } while (180.0 <= param_4);
    }
    if (0.0 <= param_4) {
      puStack_138 = (int32_t *)param_8;
      lStack_140 = CONCAT44(lStack_140._4_4_,param_7);
      uStack_148 = CONCAT31(uStack_148._1_3_,1);
      SystemCore_ThreadManager(uVar6,(param_4 - 90.0) * param_3 * 0.0027777778 + param_2,
                    param_3 * 0.0027777778 * 180.0,param_6);
    }
    else {
      lVar3 = (int64_t)*param_1;
      if (0 < lVar3) {
        puVar5 = auStack_128;
        for (; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
      }
      fVar7 = param_3 * 0.0027777778;
      puStack_138 = auStack_128;
      lStack_140._0_4_ = 1;
      uStack_148 = (uint)uStack_148._1_3_ << 8;
      SystemCore_ThreadManager(param_1,(param_4 - 180.0) * 0.5 * fVar7 + param_2,fVar7 * (param_4 + 180.0),
                    (param_4 + 180.0) * 0.0055555557 * param_6);
      puStack_138 = auStack_128;
      lStack_140 = CONCAT44(lStack_140._4_4_,1);
      uStack_148 = uStack_148 & 0xffffff00;
      SystemCore_ThreadManager(param_1,(param_4 * 0.5 + 180.0) * fVar7 + param_2,fVar7 * -param_4,
                    -param_4 * 0.0055555557 * param_6);
      lStack_140 = param_8;
      uStack_148 = param_7;
      FUN_1807d5580(*param_1,param_6,1,auStack_128);
    }
    param_3 = param_3 * 0.0027777778;
    if (param_4 <= 0.0) {
      puStack_138 = (int32_t *)(param_8 + 4);
      lStack_140 = CONCAT44(lStack_140._4_4_,param_7);
      uStack_148 = CONCAT31(uStack_148._1_3_,1);
      SystemCore_ThreadManager(param_1,(param_4 + 90.0) * param_3 + param_2,param_3 * 180.0,param_6);
    }
    else {
      lVar3 = (int64_t)*param_1;
      if (0 < lVar3) {
        puVar5 = auStack_128;
        for (; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
      }
      puStack_138 = auStack_128;
      lStack_140._0_4_ = 1;
      uStack_148 = (uint)uStack_148._1_3_ << 8;
      SystemCore_ThreadManager(param_1,(param_4 * 0.5 + 90.0) * param_3 + param_2,param_3 * (180.0 - param_4),
                    (180.0 - param_4) * 0.0055555557 * param_6);
      puStack_138 = auStack_128;
      lStack_140 = CONCAT44(lStack_140._4_4_,1);
      uStack_148 = uStack_148 & 0xffffff00;
      SystemCore_ThreadManager(param_1,(param_4 * 0.5 - 180.0) * param_3 + param_2,param_3 * param_4,
                    param_4 * 0.0055555557 * param_6);
      lStack_140 = param_8 + 4;
      uStack_148 = param_7;
      FUN_1807d5580(*param_1,param_6,1,auStack_128);
    }
  }
  if (param_1[0x26] != -1) {
    fVar7 = param_5 * param_6 * 0.70710677;
    lVar3 = (int64_t)(param_1[0x26] * param_7);
    *(float *)(param_8 + lVar3 * 4) = fVar7 + *(float *)(param_8 + lVar3 * 4);
    *(float *)(param_8 + 4 + (int64_t)(param_1[0x26] * param_7) * 4) =
         fVar7 + *(float *)(param_8 + 4 + (int64_t)(param_1[0x26] * param_7) * 4);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_a8 ^ (uint64_t)auStack_168);
}






// 函数: void FUN_1807d6934(int *param_1,float param_2,float param_3,float param_4)
void FUN_1807d6934(int *param_1,float param_2,float param_3,float param_4)

{
  int *piVar1;
  int64_t lVar2;
  int64_t lVar3;
  int *unaff_RBX;
  uint unaff_EBP;
  int64_t unaff_RSI;
  int iVar4;
  uint64_t unaff_RDI;
  int32_t *puVar5;
  uint64_t in_R9;
  int64_t in_R11;
  bool in_ZF;
  int32_t uVar6;
  float fVar7;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM9_Da;
  float fVar8;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  float unaff_XMM10_Da;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  int32_t unaff_XMM13_Da;
  int32_t unaff_XMM13_Dc;
  int32_t in_stack_00000020;
  uint3 uVar10;
  uint uVar9;
  uint64_t in_stack_000000c0;
  int32_t in_stack_000000d0;
  int32_t in_stack_000000d8;
  int32_t in_stack_00000110;
  int32_t in_stack_00000118;
  int32_t in_stack_00000130;
  int32_t in_stack_00000138;
  float in_stack_00000190;
  
  *(uint64_t *)(in_R11 + -0x20) = unaff_RDI;
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM7_Dd;
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM9_Dd;
  *(int32_t *)(in_R11 + -0x88) = unaff_XMM11_Da;
  *(int32_t *)(in_R11 + -0x84) = unaff_XMM11_Db;
  *(int32_t *)(in_R11 + -0x80) = unaff_XMM11_Dc;
  *(int32_t *)(in_R11 + -0x7c) = unaff_XMM11_Dd;
  if ((in_ZF) && (param_1[0x2a] == 0)) {
    iVar4 = 0;
    if (0 < param_1[0x27]) {
      lVar3 = 0;
      do {
        iVar4 = iVar4 + 1;
        lVar2 = (int64_t)(int)(*(int *)(lVar3 + *(int64_t *)(param_1 + 0x28)) * unaff_EBP);
        *(float *)(unaff_RSI + lVar2 * 4) =
             unaff_XMM10_Da * 0.70710677 + *(float *)(unaff_RSI + lVar2 * 4);
        piVar1 = (int *)(lVar3 + *(int64_t *)(param_1 + 0x28));
        lVar3 = lVar3 + 4;
        lVar2 = (int64_t)(int)(*piVar1 * unaff_EBP);
        *(float *)(unaff_RSI + 4 + lVar2 * 4) =
             unaff_XMM10_Da * 0.70710677 + *(float *)(unaff_RSI + 4 + lVar2 * 4);
      } while (iVar4 < param_1[0x27]);
    }
  }
  else {
    uVar6 = 0xc3340000;
    for (param_4 = param_4 - param_2; param_4 < -180.0; param_4 = param_4 + 360.0) {
    }
    if (180.0 <= param_4) {
      uVar6 = 0xc3b40000;
      do {
        param_4 = param_4 + -360.0;
      } while (180.0 <= param_4);
    }
    uVar10 = (uint3)((uint)in_stack_00000020 >> 8);
    in_stack_000000d0 = unaff_XMM13_Da;
    in_stack_000000d8 = unaff_XMM13_Dc;
    in_stack_00000110 = unaff_XMM8_Da;
    in_stack_00000118 = unaff_XMM8_Dc;
    in_stack_00000130 = unaff_XMM6_Da;
    in_stack_00000138 = unaff_XMM6_Dc;
    if (0.0 <= param_4) {
      uVar9 = CONCAT31(uVar10,1);
      uVar6 = SystemCore_ThreadManager(uVar6,(param_4 - 90.0) * param_3 * 0.0027777778 + param_2,
                            param_3 * 0.0027777778 * 180.0,in_R9,uVar9);
    }
    else {
      lVar3 = (int64_t)*param_1;
      if (0 < lVar3) {
        puVar5 = (int32_t *)&stack0x00000040;
        for (; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
      }
      fVar8 = param_3 * 0.0027777778;
      fVar7 = param_4 + 180.0;
      uVar9 = (uint)uVar10 << 8;
      SystemCore_ThreadManager(fVar7,(param_4 - 180.0) * 0.5 * fVar8 + param_2,fVar8 * fVar7,
                    fVar7 * 0.0055555557 * unaff_XMM10_Da,uVar9);
      fVar7 = -param_4;
      SystemCore_ThreadManager(fVar7,(param_4 * 0.5 + 180.0) * fVar8 + param_2,fVar8 * fVar7,
                    fVar7 * 0.0055555557 * unaff_XMM10_Da,uVar9 & 0xffffff00);
      uVar9 = unaff_EBP;
      uVar6 = FUN_1807d5580(*unaff_RBX);
    }
    param_3 = param_3 * 0.0027777778;
    if (param_4 <= 0.0) {
      SystemCore_ThreadManager(uVar6,(param_4 + 90.0) * param_3 + param_2,param_3 * 180.0);
    }
    else {
      lVar3 = (int64_t)*unaff_RBX;
      if (0 < lVar3) {
        puVar5 = (int32_t *)&stack0x00000040;
        for (; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
      }
      fVar7 = 180.0 - param_4;
      uVar9 = uVar9 & 0xffffff00;
      uVar6 = SystemCore_ThreadManager(fVar7,(param_4 * 0.5 + 90.0) * param_3 + param_2,param_3 * fVar7,
                            fVar7 * 0.0055555557 * unaff_XMM10_Da,uVar9);
      SystemCore_ThreadManager(uVar6,(param_4 * 0.5 - 180.0) * param_3 + param_2,param_3 * param_4,
                    param_4 * 0.0055555557 * unaff_XMM10_Da,uVar9 & 0xffffff00);
      FUN_1807d5580(*unaff_RBX);
    }
  }
  if (unaff_RBX[0x26] != -1) {
    fVar7 = in_stack_00000190 * unaff_XMM10_Da * 0.70710677;
    lVar3 = (int64_t)(int)(unaff_RBX[0x26] * unaff_EBP);
    *(float *)(unaff_RSI + lVar3 * 4) = fVar7 + *(float *)(unaff_RSI + lVar3 * 4);
    *(float *)(unaff_RSI + 4 + (int64_t)(int)(unaff_RBX[0x26] * unaff_EBP) * 4) =
         fVar7 + *(float *)(unaff_RSI + 4 + (int64_t)(int)(unaff_RBX[0x26] * unaff_EBP) * 4);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000c0 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1807d69da(float param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1807d69da(float param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int *in_RCX;
  int64_t lVar1;
  int *unaff_RBX;
  uint unaff_EBP;
  int64_t unaff_RSI;
  int32_t *puVar2;
  float fVar3;
  int32_t uVar4;
  float unaff_XMM7_Da;
  float unaff_XMM9_Da;
  float fVar5;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  int32_t in_stack_00000020;
  uint3 uVar7;
  uint uVar6;
  uint64_t in_stack_000000c0;
  float in_stack_00000190;
  
  if (unaff_XMM7_Da < param_1) {
    do {
      unaff_XMM7_Da = unaff_XMM7_Da + 360.0;
    } while (unaff_XMM7_Da < param_1);
  }
  if (180.0 <= unaff_XMM7_Da) {
    param_1 = -360.0;
    do {
      unaff_XMM7_Da = unaff_XMM7_Da + -360.0;
    } while (180.0 <= unaff_XMM7_Da);
  }
  uVar7 = (uint3)((uint)in_stack_00000020 >> 8);
  if (0.0 <= unaff_XMM7_Da) {
    uVar6 = CONCAT31(uVar7,1);
    uVar4 = SystemCore_ThreadManager(param_1,(unaff_XMM7_Da - 90.0) * unaff_XMM9_Da * 0.0027777778 +
                                  unaff_XMM11_Da,unaff_XMM9_Da * 0.0027777778 * 180.0,param_4,uVar6)
    ;
  }
  else {
    lVar1 = (int64_t)*in_RCX;
    if (0 < lVar1) {
      puVar2 = (int32_t *)&stack0x00000040;
      for (; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
    }
    fVar5 = unaff_XMM9_Da * 0.0027777778;
    fVar3 = unaff_XMM7_Da + 180.0;
    uVar6 = (uint)uVar7 << 8;
    SystemCore_ThreadManager(fVar3,(unaff_XMM7_Da - 180.0) * 0.5 * fVar5 + unaff_XMM11_Da,fVar5 * fVar3,
                  fVar3 * 0.0055555557 * unaff_XMM10_Da,uVar6);
    fVar3 = -unaff_XMM7_Da;
    SystemCore_ThreadManager(fVar3,(unaff_XMM7_Da * 0.5 + 180.0) * fVar5 + unaff_XMM11_Da,fVar5 * fVar3,
                  fVar3 * 0.0055555557 * unaff_XMM10_Da,uVar6 & 0xffffff00);
    uVar6 = unaff_EBP;
    uVar4 = FUN_1807d5580(*unaff_RBX);
  }
  fVar3 = unaff_XMM9_Da * 0.0027777778;
  if (unaff_XMM7_Da <= 0.0) {
    SystemCore_ThreadManager(uVar4,(unaff_XMM7_Da + 90.0) * fVar3 + unaff_XMM11_Da,fVar3 * 180.0);
  }
  else {
    lVar1 = (int64_t)*unaff_RBX;
    if (0 < lVar1) {
      puVar2 = (int32_t *)&stack0x00000040;
      for (; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
    }
    fVar5 = 180.0 - unaff_XMM7_Da;
    uVar6 = uVar6 & 0xffffff00;
    uVar4 = SystemCore_ThreadManager(fVar5,(unaff_XMM7_Da * 0.5 + 90.0) * fVar3 + unaff_XMM11_Da,fVar3 * fVar5,
                          fVar5 * 0.0055555557 * unaff_XMM10_Da,uVar6);
    SystemCore_ThreadManager(uVar4,(unaff_XMM7_Da * 0.5 - 180.0) * fVar3 + unaff_XMM11_Da,fVar3 * unaff_XMM7_Da
                  ,unaff_XMM7_Da * 0.0055555557 * unaff_XMM10_Da,uVar6 & 0xffffff00);
    FUN_1807d5580(*unaff_RBX);
  }
  if (unaff_RBX[0x26] != -1) {
    fVar3 = in_stack_00000190 * unaff_XMM10_Da * 0.70710677;
    lVar1 = (int64_t)(int)(unaff_RBX[0x26] * unaff_EBP);
    *(float *)(unaff_RSI + lVar1 * 4) = fVar3 + *(float *)(unaff_RSI + lVar1 * 4);
    *(float *)(unaff_RSI + 4 + (int64_t)(int)(unaff_RBX[0x26] * unaff_EBP) * 4) =
         fVar3 + *(float *)(unaff_RSI + 4 + (int64_t)(int)(unaff_RBX[0x26] * unaff_EBP) * 4);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000c0 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1807d6c9e(void)
void FUN_1807d6c9e(void)

{
  int64_t lVar1;
  int64_t unaff_RBX;
  int unaff_EBP;
  int64_t unaff_RSI;
  float fVar2;
  float unaff_XMM10_Da;
  uint64_t in_stack_000000c0;
  float in_stack_00000190;
  
  if (*(int *)(unaff_RBX + 0x98) != -1) {
    fVar2 = in_stack_00000190 * unaff_XMM10_Da * 0.70710677;
    lVar1 = (int64_t)(*(int *)(unaff_RBX + 0x98) * unaff_EBP);
    *(float *)(unaff_RSI + lVar1 * 4) = fVar2 + *(float *)(unaff_RSI + lVar1 * 4);
    lVar1 = (int64_t)(*(int *)(unaff_RBX + 0x98) * unaff_EBP);
    *(float *)(unaff_RSI + 4 + lVar1 * 4) = fVar2 + *(float *)(unaff_RSI + 4 + lVar1 * 4);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000c0 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1807d6ccb(void)
void FUN_1807d6ccb(void)

{
  int in_EAX;
  int64_t lVar1;
  int64_t unaff_RBX;
  int unaff_EBP;
  int64_t unaff_RSI;
  float fVar2;
  float unaff_XMM10_Da;
  uint64_t in_stack_000000c0;
  float in_stack_00000190;
  
  fVar2 = in_stack_00000190 * unaff_XMM10_Da * 0.70710677;
  *(float *)(unaff_RSI + (int64_t)(in_EAX * unaff_EBP) * 4) =
       fVar2 + *(float *)(unaff_RSI + (int64_t)(in_EAX * unaff_EBP) * 4);
  lVar1 = (int64_t)(*(int *)(unaff_RBX + 0x98) * unaff_EBP);
  *(float *)(unaff_RSI + 4 + lVar1 * 4) = fVar2 + *(float *)(unaff_RSI + 4 + lVar1 * 4);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000c0 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807d6d40(int64_t param_1,int *param_2,float param_3,uint64_t param_4,float param_5,
void FUN_1807d6d40(int64_t param_1,int *param_2,float param_3,uint64_t param_4,float param_5,
                  float param_6,float param_7,float param_8,int64_t param_9,byte param_10)

{
  uint uVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  int iVar5;
  int iVar6;
  int64_t lVar7;
  int32_t *puVar8;
  float fVar9;
  int8_t auVar10 [16];
  int8_t auVar11 [16];
  float fVar12;
  int8_t auVar13 [16];
  int8_t auVar14 [16];
  int8_t auVar15 [16];
  int8_t auVar16 [16];
  float fVar17;
  int32_t in_XMM3_Dc;
  int32_t in_XMM3_Dd;
  float fVar18;
  int8_t auStack_1d8 [32];
  float fStack_1b8;
  int64_t lStack_1b0;
  int32_t *puStack_1a8;
  int64_t lStack_1a0;
  float fStack_198;
  float fStack_194;
  int iStack_18c;
  float fStack_188;
  int32_t auStack_178 [32];
  uint64_t uStack_f8;
  
  fVar18 = (float)param_4;
  uStack_f8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1d8;
  fStack_188 = fVar18;
  if ((param_2[1] == 0) && (param_2[0x2a] == 0)) {
    iVar6 = 0;
    if (0 < param_2[0x27]) {
      do {
        func_0x0001807d64c0(param_1);
        iVar6 = iVar6 + 1;
      } while (iVar6 < param_2[0x27]);
    }
    if ((*(int *)(param_1 + 0x98) == -1) && (param_2[0x26] != -1)) {
      func_0x0001807d64c0(param_1);
    }
  }
  else {
    iVar6 = *(int *)(param_1 + 4);
    if (iVar6 == 0) {
      if (*(int *)(param_1 + 0xa8) == 0) {
        if ((*(int *)(param_1 + 0x9c) != 0) && (iVar6 = 0, 0 < *(int *)(param_1 + 0x9c))) {
          lVar2 = 0;
          do {
            if ((*(int *)(param_1 + 0x98) != -1) || (fVar12 = param_6, param_2[0x26] == -1)) {
              fVar12 = 0.0;
            }
            puVar8 = (int32_t *)
                     (param_9 + (int64_t)*(int *)(lVar2 + *(int64_t *)(param_1 + 0xa0)) * 4);
            lStack_1b0 = CONCAT44(lStack_1b0._4_4_,param_8);
            fStack_1b8 = (float)CONCAT31(fStack_1b8._1_3_,1);
            puStack_1a8 = puVar8;
            SystemCore_ThreadManager(param_2);
            if (param_2[0x26] != -1) {
              iVar3 = param_2[0x26] * (int)param_8;
              puVar8[iVar3] = fVar12 * param_7 + (float)puVar8[iVar3];
            }
            iVar6 = iVar6 + 1;
            lVar2 = lVar2 + 4;
          } while (iVar6 < *(int *)(param_1 + 0x9c));
        }
      }
      else {
        iVar6 = 0;
        if (0 < *(int *)(param_1 + 0xa8)) {
          lVar2 = 0;
          do {
            if ((*(int *)(param_1 + 0x98) != -1) || (fStack_1b8 = param_6, param_2[0x26] == -1)) {
              fStack_1b8 = 0.0;
            }
            iVar3 = *(int *)(lVar2 + *(int64_t *)(param_1 + 0xb0));
            lStack_1a0 = param_9 + (int64_t)iVar3 * 4;
            iVar3 = (*(int *)(lVar2 + *(int64_t *)(param_1 + 0xb8)) - iVar3) * (int)param_8;
            puStack_1a8 = (int32_t *)CONCAT44(puStack_1a8._4_4_,iVar3);
            lStack_1b0 = CONCAT44(lStack_1b0._4_4_,param_7);
            FUN_1807d68f0(param_2,iVar3,fVar18,param_5);
            iVar6 = iVar6 + 1;
            lVar2 = lVar2 + 4;
          } while (iVar6 < *(int *)(param_1 + 0xa8));
        }
      }
    }
    else {
      fVar17 = param_5 * 0.0027777778 * (float)iVar6;
      iVar3 = (int)fVar17;
      fVar12 = fVar17;
      if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar17)) {
        auVar13._4_4_ = fVar17;
        auVar13._0_4_ = fVar17;
        auVar13._8_8_ = 0;
        uVar1 = movmskps((int)uStack_f8,auVar13);
        fVar12 = (float)(int)(iVar3 - (uVar1 & 1));
      }
      iVar3 = (int)fVar12;
      fVar12 = (float)iVar3;
      if ((param_2[1] == 0) && (param_2[0x2a] != 0)) {
        fStack_194 = SQRT((float)param_2[0x2a]);
      }
      else {
        fStack_194 = 1.0;
      }
      iStack_18c = iVar3;
      if (0 < iVar6) {
        auVar10._8_4_ = in_XMM3_Dc;
        auVar10._0_8_ = param_4;
        auVar10._12_4_ = in_XMM3_Dd;
        lVar7 = 0;
        auVar11._4_12_ = auVar10._4_12_;
        auVar11._0_4_ = fVar18 * 0.0027777778;
        lVar2 = lVar7;
        fStack_198 = auVar11._0_4_;
        do {
          if (iVar6 == 1) {
            for (fVar18 = (*(float *)(*(int64_t *)(param_1 + 8) + 4) - param_3) + param_5;
                fVar18 < -180.0; fVar18 = fVar18 + 360.0) {
            }
            for (; 180.0 <= fVar18; fVar18 = fVar18 + -360.0) {
            }
          }
          else {
            iVar5 = iVar3;
            if ((param_10 & 1) == 0) {
              for (; iVar5 < 0; iVar5 = iVar5 + iVar6) {
              }
              for (; iVar6 <= iVar5; iVar5 = iVar5 - iVar6) {
              }
              fVar18 = *(float *)(*(int64_t *)(param_1 + 8) + 4 + (int64_t)iVar5 * 0x14);
              fVar9 = *(float *)(*(int64_t *)(param_1 + 0x28) + 0x14 + (int64_t)iVar5 * 0x20);
              if (180.0 <= fVar9) {
                for (iVar5 = iVar5 + 1; iVar5 < 0; iVar5 = iVar5 + iVar6) {
                }
                for (; iVar6 <= iVar5; iVar5 = iVar5 - iVar6) {
                }
                for (fVar9 = *(float *)(*(int64_t *)(param_1 + 8) + 4 + (int64_t)iVar5 * 0x14) -
                             fVar18; fVar9 < 0.0; fVar9 = fVar9 + 360.0) {
                }
                for (; 360.0 <= fVar9; fVar9 = fVar9 + -360.0) {
                }
              }
              for (fVar18 = (fVar18 - param_3) + fVar9 * (fVar17 - fVar12); fVar18 < -180.0;
                  fVar18 = fVar18 + 360.0) {
              }
              for (; 180.0 <= fVar18; fVar18 = fVar18 + -360.0) {
              }
              auVar11 = ZEXT416((uint)fStack_198);
            }
            else {
              for (fVar18 = (*(float *)(*(int64_t *)(*(int64_t *)(param_1 + 0x28) + lVar2) + 4) -
                            param_3) + param_5; fVar18 < -180.0; fVar18 = fVar18 + 360.0) {
              }
              for (; 180.0 <= fVar18; fVar18 = fVar18 + -360.0) {
              }
            }
          }
          auVar14._4_12_ = auVar11._4_12_;
          fVar9 = auVar11._0_4_;
          if (-150.0 <= fVar18) {
            if (150.0 < fVar18) {
              lVar4 = (int64_t)*param_2;
              if (0 < lVar4) {
                puVar8 = auStack_178;
                for (; lVar4 != 0; lVar4 = lVar4 + -1) {
                  *puVar8 = 0;
                  puVar8 = puVar8 + 1;
                }
              }
              puStack_1a8 = auStack_178;
              lStack_1b0 = CONCAT44(lStack_1b0._4_4_,1);
              fStack_1b8 = (float)((uint)fStack_1b8._1_3_ << 8);
              auVar15._0_4_ = fVar9 * fVar18 + param_3;
              auVar15._4_12_ = auVar14._4_12_;
              SystemCore_ThreadManager(param_2,auVar15._0_8_,0,(210.0 - fVar18) * 0.016666668);
              goto LAB_1807d71b7;
            }
            auVar16._0_4_ = fVar9 * fVar18 + param_3;
            auVar16._4_12_ = auVar14._4_12_;
            puStack_1a8 = (int32_t *)
                          (param_9 + (int64_t)*(int *)(*(int64_t *)(param_1 + 8) + lVar7) * 4);
            lStack_1b0 = CONCAT44(lStack_1b0._4_4_,param_8);
            fStack_1b8 = (float)CONCAT31(fStack_1b8._1_3_,1);
            SystemCore_ThreadManager(param_2,auVar16._0_8_,0,param_7);
          }
          else {
            lVar4 = (int64_t)*param_2;
            if (0 < lVar4) {
              puVar8 = auStack_178;
              for (; lVar4 != 0; lVar4 = lVar4 + -1) {
                *puVar8 = 0;
                puVar8 = puVar8 + 1;
              }
            }
            puStack_1a8 = auStack_178;
            lStack_1b0 = CONCAT44(lStack_1b0._4_4_,1);
            fStack_1b8 = (float)((uint)fStack_1b8._1_3_ << 8);
            auVar14._0_4_ = fVar9 * fVar18 + param_3;
            SystemCore_ThreadManager(param_2,auVar14._0_8_,0,fVar18 * 0.016666668 + 3.5);
LAB_1807d71b7:
            puStack_1a8 = auStack_178;
            lStack_1b0 = CONCAT44(lStack_1b0._4_4_,1);
            fStack_1b8 = (float)((uint)fStack_1b8 & 0xffffff00);
            SystemCore_ThreadManager(param_2);
            lStack_1b0 = param_9 + (int64_t)*(int *)(*(int64_t *)(param_1 + 8) + lVar7) * 4;
            fStack_1b8 = param_8;
            FUN_1807d5580(*param_2,fStack_194 * param_7,1,auStack_178);
          }
          iVar6 = *(int *)(param_1 + 4);
          iVar3 = iVar3 + 1;
          lVar2 = lVar2 + 0x20;
          auVar11 = ZEXT416((uint)fStack_198);
          lVar7 = lVar7 + 0x14;
        } while (iVar3 - iStack_18c < iVar6);
      }
      fVar18 = fStack_188;
      if ((*(int *)(param_1 + 0x98) == -1) && (param_2[0x26] != -1)) {
        func_0x0001807d64c0(param_1);
      }
    }
  }
  iVar6 = *(int *)(param_1 + 0x98);
  if (iVar6 != -1) {
    if (param_2[0x26] == -1) {
      puStack_1a8 = (int32_t *)(param_9 + (int64_t)iVar6 * 4);
      lStack_1b0 = CONCAT44(lStack_1b0._4_4_,param_8);
      fStack_1b8 = (float)CONCAT31(fStack_1b8._1_3_,1);
      SystemCore_ThreadManager(param_2,puStack_1a8,fVar18,param_6 * param_7);
    }
    else {
      lVar2 = (int64_t)(param_2[0x26] * (int)param_8 + iVar6);
      *(float *)(param_9 + lVar2 * 4) = param_6 * param_7 + *(float *)(param_9 + lVar2 * 4);
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_f8 ^ (uint64_t)auStack_1d8);
}






