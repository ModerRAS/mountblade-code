#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part044.c - 16 个函数

// 函数: void FUN_180084000(float *param_1)
void FUN_180084000(float *param_1)

{
  int8_t auVar1 [16];
  double dVar2;
  double dVar3;
  float fVar4;
  int8_t auVar5 [16];
  float fVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  
  dVar3 = (double)param_1[1];
  dVar11 = (double)param_1[2];
  dVar8 = (double)param_1[3];
  dVar10 = (double)*param_1;
  auVar5._0_8_ = dVar10 * dVar10;
  auVar5._8_8_ = 0;
  dVar2 = dVar3 * dVar3 + dVar11 * dVar11 + dVar8 * dVar8 + auVar5._0_8_;
  if (dVar2 <= 1e-07) {
    fVar9 = 1.0;
    fVar7 = 0.0;
    fVar4 = 0.0;
    fVar6 = 0.0;
  }
  else {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = dVar2;
    auVar5 = sqrtpd(auVar5,auVar1);
    dVar2 = 1.0 / auVar5._0_8_;
    fVar9 = (float)(dVar2 * dVar10);
    fVar7 = (float)(dVar2 * dVar8);
    fVar4 = (float)(dVar2 * dVar11);
    fVar6 = (float)(dVar2 * dVar3);
  }
  param_1[1] = fVar6;
  param_1[2] = fVar4;
  param_1[3] = fVar7;
  *param_1 = fVar9;
  return;
}



uint64_t * FUN_180084180(uint64_t *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(int8_t *)((int64_t)param_1 + 0x14) = 0;
  LOCK();
  *(int32_t *)(param_1 + 2) = 0;
  UNLOCK();
  LOCK();
  *(int8_t *)((int64_t)param_1 + 0x16) = 1;
  UNLOCK();
  LOCK();
  *(int8_t *)((int64_t)param_1 + 0x15) = 0;
  UNLOCK();
  return param_1;
}



uint64_t *
FUN_1800841c0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if ((int64_t *)param_1[4] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[4] + 0x38))();
  }
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30,param_3,param_4,uVar1);
  }
  return param_1;
}



uint64_t * FUN_180084230(uint64_t *param_1,uint param_2)

{
  FUN_1808fc8a8(param_1 + 3,8,0x10,FUN_180045af0,0xfffffffffffffffe);
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0xa0);
  }
  return param_1;
}



uint64_t * FUN_1800842a0(uint64_t *param_1)

{
  *param_1 = &system_handler1_ptr;
  *param_1 = &system_handler2_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &unknown_var_6856_ptr;
  FUN_1808fc838(param_1 + 3,8,0x10,&SUB_18005d5f0,FUN_180045af0);
  *(int32_t *)(param_1 + 2) = 0;
  *(int8_t *)((int64_t)param_1 + 0x14) = 9;
  *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) | 1;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180084320(uint64_t *param_1,uint param_2)
void FUN_180084320(uint64_t *param_1,uint param_2)

{
  uint64_t uVar1;
  void **ppuVar2;
  int8_t auStack_158 [32];
  void **ppuStack_138;
  void ***pppuStack_130;
  uint64_t uStack_128;
  uint64_t *puStack_120;
  void **ppuStack_118;
  void *puStack_108;
  int8_t *puStack_100;
  int32_t uStack_f8;
  int8_t auStack_f0 [128];
  int32_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_28;
  
  uStack_128 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  *param_1 = &unknown_var_6960_ptr;
  puStack_120 = param_1;
  if (param_1[3] != 0) {
    ppuStack_138 = &puStack_108;
    puStack_108 = &unknown_var_3432_ptr;
    puStack_100 = auStack_f0;
    uStack_f8 = 0;
    auStack_f0[0] = 0;
    uStack_70 = 0x25;
    uStack_68 = param_1[3];
    uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
    ppuVar2 = (void **)FUN_18005ce30(uVar1,&puStack_108);
    ppuStack_118 = ppuVar2;
    if (ppuVar2 != (void **)0x0) {
      (**(code **)(*ppuVar2 + 0x28))(ppuVar2);
    }
    uVar1 = system_context_ptr;
    pppuStack_130 = &ppuStack_138;
    ppuStack_138 = ppuVar2;
    if (ppuVar2 != (void **)0x0) {
      (**(code **)(*ppuVar2 + 0x28))(ppuVar2);
    }
    FUN_18005e370(uVar1,&ppuStack_138);
    if (ppuVar2 != (void **)0x0) {
      (**(code **)(*ppuVar2 + 0x38))(ppuVar2);
    }
    pppuStack_130 = (void ***)&puStack_108;
    puStack_108 = &system_state_ptr;
  }
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x20);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800844c0(uint64_t *param_1,uint param_2)
void FUN_1800844c0(uint64_t *param_1,uint param_2)

{
  uint64_t uVar1;
  void **ppuVar2;
  int8_t auStack_158 [32];
  void **ppuStack_138;
  void ***pppuStack_130;
  uint64_t uStack_128;
  uint64_t *puStack_120;
  void **ppuStack_118;
  void *puStack_108;
  int8_t *puStack_100;
  int32_t uStack_f8;
  int8_t auStack_f0 [128];
  int32_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_28;
  
  uStack_128 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  *param_1 = &unknown_var_7064_ptr;
  puStack_120 = param_1;
  if (param_1[3] != 0) {
    ppuStack_138 = &puStack_108;
    puStack_108 = &unknown_var_3432_ptr;
    puStack_100 = auStack_f0;
    uStack_f8 = 0;
    auStack_f0[0] = 0;
    uStack_70 = 0x23;
    uStack_68 = param_1[3];
    uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
    ppuVar2 = (void **)FUN_18005ce30(uVar1,&puStack_108);
    ppuStack_118 = ppuVar2;
    if (ppuVar2 != (void **)0x0) {
      (**(code **)(*ppuVar2 + 0x28))(ppuVar2);
    }
    uVar1 = system_context_ptr;
    pppuStack_130 = &ppuStack_138;
    ppuStack_138 = ppuVar2;
    if (ppuVar2 != (void **)0x0) {
      (**(code **)(*ppuVar2 + 0x28))(ppuVar2);
    }
    FUN_18005e370(uVar1,&ppuStack_138);
    if (ppuVar2 != (void **)0x0) {
      (**(code **)(*ppuVar2 + 0x38))(ppuVar2);
    }
    pppuStack_130 = (void ***)&puStack_108;
    puStack_108 = &system_state_ptr;
  }
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_158);
}





// 函数: void FUN_180084670(int64_t *param_1)
void FUN_180084670(int64_t *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x38))();
  if (iVar1 == 0) {
    LOCK();
    *(int8_t *)(param_1 + 2) = 1;
    UNLOCK();
  }
  return;
}





// 函数: void FUN_1800846a0(int64_t param_1)
void FUN_1800846a0(int64_t param_1)

{
  int iVar1;
  
  iVar1 = FUN_1806237a0();
  if (iVar1 == 0) {
    LOCK();
    *(int8_t *)(param_1 + 0x10) = 1;
    UNLOCK();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800846d0(int *param_1)
void FUN_1800846d0(int *param_1)

{
  uint64_t uVar1;
  
  if (param_1[1] < 1) {
    if (*(int64_t *)(param_1 + 2) != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  uVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)param_1[1] << 4,(char)param_1[8]);
  if (*(int64_t *)(param_1 + 2) != 0) {
                    // WARNING: Subroutine does not return
    memcpy(uVar1,*(int64_t *)(param_1 + 2),(int64_t)*param_1 << 4);
  }
  *(uint64_t *)(param_1 + 2) = uVar1;
  return;
}





// 函数: void FUN_1800846f4(void)
void FUN_1800846f4(void)

{
  uint64_t uVar1;
  int *unaff_RBX;
  
  uVar1 = CoreEngineMemoryPoolAllocator();
  if (*(int64_t *)(unaff_RBX + 2) != 0) {
                    // WARNING: Subroutine does not return
    memcpy(uVar1,*(int64_t *)(unaff_RBX + 2),(int64_t)*unaff_RBX << 4);
  }
  *(uint64_t *)(unaff_RBX + 2) = uVar1;
  return;
}





// 函数: void FUN_180084736(int64_t param_1)
void FUN_180084736(int64_t param_1)

{
  int64_t unaff_RBX;
  
  if (*(int64_t *)(param_1 + 8) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(unaff_RBX + 8) = 0;
  return;
}





// 函数: void FUN_180084760(float *param_1,float *param_2)
void FUN_180084760(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar6 = param_1[6];
  fVar4 = param_1[0xd];
  fVar1 = param_1[9];
  fVar5 = param_1[1];
  fVar3 = param_1[0xe];
  fVar11 = param_1[2];
  fVar13 = param_1[10];
  fVar16 = param_1[5];
  fVar12 = fVar3 * fVar1 - fVar4 * fVar13;
  fVar9 = fVar3 * fVar16 - fVar4 * fVar6;
  fVar10 = fVar3 * fVar5 - fVar4 * fVar11;
  fVar17 = fVar16 * fVar13 - fVar1 * fVar6;
  fVar8 = fVar5 * fVar13 - fVar1 * fVar11;
  *param_2 = fVar17;
  fVar7 = fVar5 * fVar6 - fVar16 * fVar11;
  fVar18 = fVar11 * param_1[9] - fVar13 * param_1[1];
  param_2[1] = fVar18;
  fVar4 = param_1[5];
  fVar3 = param_1[1];
  param_2[3] = 0.0;
  fVar19 = fVar6 * fVar3 - fVar11 * fVar4;
  param_2[2] = fVar19;
  fVar2 = fVar6 * param_1[8] - fVar13 * param_1[4];
  param_2[4] = fVar2;
  fVar15 = fVar13 * *param_1 - fVar11 * param_1[8];
  param_2[5] = fVar15;
  fVar4 = param_1[4];
  fVar3 = *param_1;
  param_2[7] = 0.0;
  fVar14 = fVar11 * fVar4 - fVar6 * fVar3;
  param_2[6] = fVar14;
  fVar3 = fVar1 * param_1[4] - fVar16 * param_1[8];
  param_2[8] = fVar3;
  fVar1 = fVar5 * param_1[8] - fVar1 * *param_1;
  param_2[9] = fVar1;
  fVar6 = param_1[4];
  fVar4 = *param_1;
  param_2[0xb] = 0.0;
  fVar16 = fVar16 * fVar4 - fVar5 * fVar6;
  param_2[10] = fVar16;
  fVar4 = (fVar9 * param_1[8] - fVar12 * param_1[4]) - fVar17 * param_1[0xc];
  param_2[0xc] = fVar4;
  fVar13 = (fVar12 * *param_1 - fVar10 * param_1[8]) + fVar8 * param_1[0xc];
  param_2[0xd] = fVar13;
  fVar11 = (fVar10 * param_1[4] - fVar9 * *param_1) - fVar7 * param_1[0xc];
  param_2[0xe] = fVar11;
  fVar5 = (fVar17 * *param_1 - fVar8 * param_1[4]) + fVar7 * param_1[8];
  param_2[0xf] = fVar5;
  fVar6 = fVar18 * param_1[4] + fVar17 * *param_1 + fVar19 * param_1[8];
  if (fVar6 != 1.0) {
    fVar6 = 1.0 / fVar6;
    param_2[4] = fVar2 * fVar6;
    param_2[8] = fVar3 * fVar6;
    *param_2 = fVar17 * fVar6;
    param_2[1] = fVar18 * fVar6;
    param_2[2] = fVar19 * fVar6;
    param_2[5] = fVar15 * fVar6;
    param_2[6] = fVar14 * fVar6;
    param_2[9] = fVar1 * fVar6;
    param_2[10] = fVar16 * fVar6;
    param_2[0xc] = fVar4 * fVar6;
    param_2[0xd] = fVar13 * fVar6;
    param_2[0xe] = fVar11 * fVar6;
    param_2[0xf] = fVar5 * fVar6;
  }
  return;
}





// 函数: void FUN_180084ae0(float *param_1)
void FUN_180084ae0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int8_t auVar4 [16];
  float fVar5;
  float fVar6;
  
  fVar2 = param_1[4];
  fVar3 = param_1[6];
  fVar5 = param_1[5];
  fVar1 = fVar2 * fVar2 + fVar5 * fVar5 + fVar3 * fVar3;
  auVar4 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
  fVar6 = auVar4._0_4_;
  fVar1 = fVar6 * 0.5 * (3.0 - fVar1 * fVar6 * fVar6);
  param_1[6] = fVar3 * fVar1;
  param_1[4] = fVar2 * fVar1;
  param_1[5] = fVar5 * fVar1;
  fVar6 = fVar5 * fVar1 * param_1[10] - fVar3 * fVar1 * param_1[9];
  *param_1 = fVar6;
  fVar1 = param_1[6] * param_1[8] - param_1[4] * param_1[10];
  param_1[1] = fVar1;
  fVar5 = param_1[4] * param_1[9] - param_1[5] * param_1[8];
  fVar2 = fVar1 * fVar1 + fVar6 * fVar6 + fVar5 * fVar5;
  auVar4 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
  fVar3 = auVar4._0_4_;
  fVar2 = fVar3 * 0.5 * (3.0 - fVar2 * fVar3 * fVar3);
  param_1[1] = fVar1 * fVar2;
  param_1[2] = fVar5 * fVar2;
  *param_1 = fVar6 * fVar2;
  param_1[8] = fVar1 * fVar2 * param_1[6] - fVar5 * fVar2 * param_1[5];
  param_1[9] = param_1[4] * param_1[2] - param_1[6] * *param_1;
  param_1[10] = param_1[5] * *param_1 - param_1[4] * param_1[1];
  return;
}





// 函数: void FUN_180084c70(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)
void FUN_180084c70(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  param_1[0] = 1.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 1.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[10] = 1.0;
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 1.0;
  fVar3 = *param_4;
  fVar4 = param_1[4];
  fVar1 = param_1[5];
  fVar2 = param_1[6];
  param_1[4] = *param_1 * fVar3 + param_1[4];
  param_1[5] = param_1[1] * fVar3 + param_1[5];
  param_1[6] = param_1[2] * fVar3 + param_1[6];
  fVar3 = param_4[1];
  *param_1 = fVar4 * fVar3 + *param_1;
  param_1[1] = fVar1 * fVar3 + param_1[1];
  param_1[2] = fVar2 * fVar3 + param_1[2];
  fVar3 = *param_5;
  fVar4 = fVar3 * param_1[4] + param_1[0xc];
  param_1[0xc] = fVar4;
  param_1[0xd] = param_1[5] * fVar3 + param_1[0xd];
  param_1[0xe] = param_1[6] * fVar3 + param_1[0xe];
  fVar3 = param_5[1];
  param_1[0xc] = fVar3 * *param_1 + fVar4;
  param_1[0xd] = param_1[1] * fVar3 + param_1[0xd];
  param_1[0xe] = param_1[2] * fVar3 + param_1[0xe];
  FUN_180085970(SUB84((double)*param_2 * 0.0174532925199433,0),
                (float)((double)*param_2 * 0.0174532925199433));
  FUN_180085ac0(param_1,param_2[1] * 0.017453292);
  FUN_180085c10(param_1,param_2[2] * 0.017453292);
  fVar3 = 1.0 / *param_3;
  param_1[4] = fVar3 * param_1[4];
  param_1[5] = fVar3 * param_1[5];
  param_1[6] = fVar3 * param_1[6];
  fVar3 = 1.0 / param_3[1];
  *param_1 = fVar3 * *param_1;
  param_1[1] = fVar3 * param_1[1];
  param_1[2] = fVar3 * param_1[2];
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xf] = 1.0;
  return;
}



uint64_t * FUN_180084ea0(uint64_t *param_1)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int16_t uStack_a;
  
  lVar2 = 6;
  puVar3 = param_1;
  do {
    func_0x000180084e80(puVar3);
    puVar3 = puVar3 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  uVar1 = CONCAT26(uStack_a,0xffffffffffff);
  *param_1 = 0xffffffffffffffff;
  param_1[1] = uVar1;
  param_1[0xc] = 0;
  param_1[0x12] = 0;
  param_1[2] = 0xffffffffffffffff;
  param_1[3] = uVar1;
  param_1[0xd] = 0;
  param_1[0x13] = 0;
  param_1[4] = 0xffffffffffffffff;
  param_1[5] = uVar1;
  param_1[0xe] = 0;
  param_1[0x14] = 0;
  param_1[6] = 0xffffffffffffffff;
  param_1[7] = uVar1;
  param_1[0xf] = 0;
  param_1[0x15] = 0;
  param_1[8] = 0xffffffffffffffff;
  param_1[9] = uVar1;
  param_1[0x10] = 0;
  param_1[0x16] = 0;
  param_1[10] = 0xffffffffffffffff;
  param_1[0xb] = uVar1;
  param_1[0x11] = 0;
  param_1[0x17] = 0;
  return param_1;
}



bool FUN_180084fa0(float *param_1)

{
  return (param_1[2] * param_1[4] - *param_1 * param_1[6]) * param_1[9] +
         (param_1[1] * param_1[6] - param_1[2] * param_1[5]) * param_1[8] +
         (*param_1 * param_1[5] - param_1[1] * param_1[4]) * param_1[10] < 0.0;
}



float * FUN_180085020(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = param_1[6];
  fVar2 = param_1[9];
  fVar3 = param_1[8];
  fVar4 = param_1[5];
  fVar5 = param_1[4];
  fVar6 = param_1[2];
  fVar7 = param_1[1];
  fVar8 = *param_1;
  fVar10 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
  *param_2 = fVar10;
  fVar9 = param_1[10];
  param_2[1] = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar1 * fVar1);
  param_2[2] = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar9 * fVar9);
  if ((fVar6 * fVar5 - fVar8 * fVar1) * fVar2 + (fVar7 * fVar1 - fVar6 * fVar4) * fVar3 +
      (fVar8 * fVar4 - fVar7 * fVar5) * param_1[10] < 0.0) {
    *param_2 = -fVar10;
  }
  return param_2;
}





// 函数: void FUN_180085190(float *param_1,int64_t param_2,char param_3,uint64_t *param_4)
void FUN_180085190(float *param_1,int64_t param_2,char param_3,uint64_t *param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  float fVar5;
  int8_t auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  
  if (param_3 == '\0') {
    uVar1 = param_4[1];
    uVar2 = param_4[2];
    uVar3 = param_4[3];
    *(uint64_t *)param_1 = *param_4;
    *(uint64_t *)(param_1 + 2) = uVar1;
    uVar1 = param_4[4];
    uVar4 = param_4[5];
    *(uint64_t *)(param_1 + 4) = uVar2;
    *(uint64_t *)(param_1 + 6) = uVar3;
    uVar2 = param_4[6];
    uVar3 = param_4[7];
    *(uint64_t *)(param_1 + 8) = uVar1;
    *(uint64_t *)(param_1 + 10) = uVar4;
    *(uint64_t *)(param_1 + 0xc) = uVar2;
    *(uint64_t *)(param_1 + 0xe) = uVar3;
    param_1[3] = 0.0;
    param_1[7] = 0.0;
    param_1[0xb] = 0.0;
    param_1[0xf] = 1.0;
    return;
  }
  fVar5 = *(float *)((int64_t)param_4 + 0x34);
  fVar12 = *(float *)(param_4 + 7);
  fVar11 = *(float *)((int64_t)param_4 + 0x3c);
  param_1[0xc] = *(float *)(param_4 + 6);
  param_1[0xd] = fVar5;
  param_1[0xe] = fVar12;
  param_1[0xf] = fVar11;
  if (param_3 == '\x01') {
    fVar12 = *(float *)(param_4 + 4);
    fVar11 = *(float *)((int64_t)param_4 + 0x24);
    fVar10 = *(float *)(param_4 + 5);
    fVar7 = *(float *)((int64_t)param_4 + 0x2c);
    fVar5 = *(float *)(param_2 + 0xc4);
    param_1[8] = fVar12;
    param_1[9] = fVar11;
    param_1[10] = fVar10;
    param_1[0xb] = fVar7;
    fVar8 = fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10;
    auVar6 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
    fVar7 = auVar6._0_4_;
    fVar13 = fVar7 * 0.5 * (3.0 - fVar8 * fVar7 * fVar7);
    fVar11 = fVar11 * fVar13;
    fVar10 = fVar10 * fVar13;
    fVar12 = fVar12 * fVar13;
    fVar13 = fVar13 * fVar8;
    fVar7 = *(float *)(param_2 + 0xc0) * fVar10 - *(float *)(param_2 + 200) * fVar12;
    fVar8 = *(float *)(param_2 + 200) * fVar11 - fVar5 * fVar10;
    fVar9 = fVar5 * fVar12 - *(float *)(param_2 + 0xc0) * fVar11;
    param_1[4] = fVar8;
    param_1[5] = fVar7;
    param_1[6] = fVar9;
    param_1[7] = 3.4028235e+38;
    fVar5 = fVar7 * fVar10 - fVar9 * fVar11;
    *param_1 = fVar5;
    param_1[1] = fVar9 * fVar12 - fVar8 * fVar10;
    param_1[2] = fVar8 * fVar11 - fVar7 * fVar12;
    param_1[3] = 3.4028235e+38;
    *param_1 = fVar13 * fVar5;
    param_1[2] = fVar13 * param_1[2];
    param_1[1] = fVar13 * param_1[1];
    param_1[6] = fVar13 * param_1[6];
    param_1[4] = fVar13 * param_1[4];
    param_1[5] = fVar13 * param_1[5];
    param_1[3] = 0.0;
    param_1[7] = 0.0;
    param_1[0xb] = 0.0;
    param_1[0xf] = 1.0;
    return;
  }
  FUN_180085020(param_4,&fStack_68);
  uVar1 = *(uint64_t *)(param_2 + 200);
  uVar2 = *(uint64_t *)(param_2 + 0xd0);
  uVar3 = *(uint64_t *)(param_2 + 0xd8);
  *(uint64_t *)param_1 = *(uint64_t *)(param_2 + 0xc0);
  *(uint64_t *)(param_1 + 2) = uVar1;
  uVar1 = *(uint64_t *)(param_2 + 0xe0);
  uVar4 = *(uint64_t *)(param_2 + 0xe8);
  *(uint64_t *)(param_1 + 4) = uVar2;
  *(uint64_t *)(param_1 + 6) = uVar3;
  *(uint64_t *)(param_1 + 8) = uVar1;
  *(uint64_t *)(param_1 + 10) = uVar4;
  param_1[1] = fStack_68 * param_1[1];
  *param_1 = fStack_68 * *param_1;
  param_1[2] = fStack_68 * param_1[2];
  param_1[4] = fStack_64 * param_1[4];
  param_1[5] = fStack_64 * param_1[5];
  param_1[6] = fStack_64 * param_1[6];
  param_1[8] = fStack_60 * param_1[8];
  param_1[9] = fStack_60 * param_1[9];
  param_1[10] = fStack_60 * param_1[10];
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xf] = 1.0;
  return;
}





// 函数: void FUN_18008520c(float *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_18008520c(float *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5)

{
  uint64_t in_XMM0_Qa;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  float fVar1;
  int8_t auVar2 [16];
  int8_t auVar3 [16];
  int32_t uVar4;
  int32_t in_XMM3_Dc;
  int32_t in_XMM3_Dd;
  float in_XMM4_Da;
  float fVar5;
  float fVar6;
  float in_XMM5_Da;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar4 = (int32_t)((uint64_t)param_4 >> 0x20);
  fVar9 = (float)((uint64_t)in_XMM0_Qa >> 0x20);
  fVar10 = (float)in_XMM0_Qa;
  param_1[8] = fVar10;
  param_1[9] = fVar9;
  param_1[10] = in_XMM0_Dc;
  param_1[0xb] = in_XMM0_Dd;
  fVar5 = in_XMM4_Da * fVar10 + fVar9 * fVar9 + in_XMM0_Dc * in_XMM0_Dc;
  auVar2._4_4_ = uVar4;
  auVar2._0_4_ = fVar5;
  auVar2._8_4_ = in_XMM3_Dc;
  auVar2._12_4_ = in_XMM3_Dd;
  auVar3._4_4_ = uVar4;
  auVar3._0_4_ = fVar5;
  auVar3._8_4_ = in_XMM3_Dc;
  auVar3._12_4_ = in_XMM3_Dd;
  auVar3 = rsqrtss(auVar2,auVar3);
  fVar1 = auVar3._0_4_;
  fVar11 = fVar1 * 0.5 * (3.0 - fVar5 * fVar1 * fVar1);
  fVar9 = fVar9 * fVar11;
  fVar8 = in_XMM0_Dc * fVar11;
  fVar10 = fVar10 * fVar11;
  fVar11 = fVar11 * fVar5;
  fVar5 = *(float *)(param_2 + 0xc0) * fVar8 - *(float *)(param_2 + 200) * fVar10;
  fVar6 = *(float *)(param_2 + 200) * fVar9 - in_XMM5_Da * fVar8;
  fVar7 = in_XMM5_Da * fVar10 - *(float *)(param_2 + 0xc0) * fVar9;
  param_1[4] = fVar6;
  param_1[5] = fVar5;
  param_1[6] = fVar7;
  param_1[7] = param_5._4_4_;
  fVar1 = fVar5 * fVar8 - fVar7 * fVar9;
  *param_1 = fVar1;
  param_1[1] = fVar7 * fVar10 - fVar6 * fVar8;
  param_1[2] = fVar6 * fVar9 - fVar5 * fVar10;
  param_1[3] = 3.4028235e+38;
  *param_1 = fVar11 * fVar1;
  param_1[2] = fVar11 * param_1[2];
  param_1[1] = fVar11 * param_1[1];
  param_1[6] = fVar11 * param_1[6];
  param_1[4] = fVar11 * param_1[4];
  param_1[5] = fVar11 * param_1[5];
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xf] = 1.0;
  return;
}





// 函数: void FUN_1800853fd(void)
void FUN_1800853fd(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t in_R9;
  float *in_R10;
  int64_t in_R11;
  float fStackX_20;
  float fStackX_24;
  float in_stack_00000028;
  
  FUN_180085020(in_R9,&fStackX_20);
  uVar1 = *(uint64_t *)(in_R11 + 200);
  uVar2 = *(uint64_t *)(in_R11 + 0xd0);
  uVar3 = *(uint64_t *)(in_R11 + 0xd8);
  *(uint64_t *)in_R10 = *(uint64_t *)(in_R11 + 0xc0);
  *(uint64_t *)(in_R10 + 2) = uVar1;
  uVar1 = *(uint64_t *)(in_R11 + 0xe0);
  uVar4 = *(uint64_t *)(in_R11 + 0xe8);
  *(uint64_t *)(in_R10 + 4) = uVar2;
  *(uint64_t *)(in_R10 + 6) = uVar3;
  *(uint64_t *)(in_R10 + 8) = uVar1;
  *(uint64_t *)(in_R10 + 10) = uVar4;
  in_R10[1] = fStackX_20 * in_R10[1];
  *in_R10 = fStackX_20 * *in_R10;
  in_R10[2] = fStackX_20 * in_R10[2];
  in_R10[4] = fStackX_24 * in_R10[4];
  in_R10[5] = fStackX_24 * in_R10[5];
  in_R10[6] = fStackX_24 * in_R10[6];
  in_R10[8] = in_stack_00000028 * in_R10[8];
  in_R10[9] = in_stack_00000028 * in_R10[9];
  in_R10[10] = in_stack_00000028 * in_R10[10];
  in_R10[3] = 0.0;
  in_R10[7] = 0.0;
  in_R10[0xb] = 0.0;
  in_R10[0xf] = 1.0;
  return;
}





// 函数: void FUN_180085530(int64_t param_1)
void FUN_180085530(int64_t param_1)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    return;
  }
  uVar1 = *(uint64_t *)(param_1 + -0x10);
  uVar2 = uVar1 >> 0x20;
  uVar3 = 0;
  if ((int)(uVar1 >> 0x20) != 0) {
    do {
      if (*(int64_t *)((uint64_t)uVar3 + param_1 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      if (*(int64_t *)((uint64_t)uVar3 + param_1 + 8) != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      uVar3 = uVar3 + (int)uVar1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(param_1 + -0x10);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1800855e0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return (uint64_t *)0x0;
  }
  puVar1 = (uint64_t *)
           CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,param_1 * 0x50 + 0x10,0xf,param_4,0xfffffffffffffffe);
  *puVar1 = param_1 << 0x20 | 0x50;
  iVar3 = 0;
  puVar2 = puVar1 + 8;
  do {
    *(int32_t *)((int64_t)puVar2 + -0x2c) = 0;
    *(int32_t *)(puVar2 + -6) = 0;
    puVar2[-5] = 0;
    *(int8_t *)(puVar2 + -2) = 3;
    puVar2[-1] = 0;
    *puVar2 = 0;
    *(int8_t *)(puVar2 + 3) = 3;
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 10;
  } while ((uint64_t)(int64_t)iVar3 < param_1);
  return puVar1 + 2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180085680(int64_t *param_1,int64_t *param_2)
void FUN_180085680(int64_t *param_1,int64_t *param_2)

{
  int32_t *puVar1;
  int32_t *puVar2;
  uint uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  ushort uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint64_t uVar13;
  uint *puVar14;
  
  *(short *)(param_1 + 2) = (short)param_2[2];
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  uVar13 = 0;
  param_1[1] = 0;
  FUN_180085530(*param_1);
  *param_1 = 0;
  if ((short)param_2[2] == 0) {
    return;
  }
  uVar7 = *(ushort *)(param_1 + 2);
  uVar8 = uVar13;
  if ((uint64_t)uVar7 != 0) {
    uVar8 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(uint64_t)uVar7 * 4,0xf);
    uVar7 = *(ushort *)(param_1 + 2);
  }
  param_1[1] = uVar8;
  lVar9 = FUN_1800855e0(uVar7);
  *param_1 = lVar9;
  uVar7 = *(ushort *)(param_1 + 2);
  uVar8 = uVar13;
  if (uVar7 != 0) {
    do {
      uVar10 = 0;
      puVar14 = (uint *)(*param_2 + uVar8);
      puVar12 = (uint *)(*param_1 + uVar8);
      uVar11 = *puVar14;
      uVar3 = puVar12[1];
      if ((int)uVar3 < (int)uVar11) {
        if (uVar11 == 0) {
          if ((int)uVar3 < 2) {
            puVar12[1] = 8;
          }
          else {
            puVar12[1] = ((int)uVar3 >> 1) + uVar3;
          }
        }
        else {
          puVar12[1] = uVar11;
        }
        FUN_1800846d0(puVar12);
      }
      *puVar12 = uVar11;
      if (*puVar14 != 0) {
        do {
          lVar9 = (int64_t)(int)uVar10;
          uVar10 = uVar10 + 1;
          puVar1 = (int32_t *)(*(int64_t *)(puVar14 + 2) + lVar9 * 0x10);
          uVar4 = puVar1[1];
          uVar5 = puVar1[2];
          uVar6 = puVar1[3];
          puVar2 = (int32_t *)(*(int64_t *)(puVar12 + 2) + lVar9 * 0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar2[2] = uVar5;
          puVar2[3] = uVar6;
        } while (uVar10 < *puVar14);
      }
      uVar11 = puVar14[10];
      uVar3 = puVar12[0xb];
      if ((int)uVar3 < (int)uVar11) {
        if (uVar11 == 0) {
          if ((int)uVar3 < 2) {
            puVar12[0xb] = 8;
          }
          else {
            puVar12[0xb] = ((int)uVar3 >> 1) + uVar3;
          }
        }
        else {
          puVar12[0xb] = uVar11;
        }
        FUN_1800846d0(puVar12 + 10);
      }
      puVar12[10] = uVar11;
      uVar11 = 0;
      if (puVar14[10] != 0) {
        do {
          lVar9 = (int64_t)(int)uVar11;
          uVar11 = uVar11 + 1;
          puVar1 = (int32_t *)(*(int64_t *)(puVar14 + 0xc) + lVar9 * 0x10);
          uVar4 = puVar1[1];
          uVar5 = puVar1[2];
          uVar6 = puVar1[3];
          puVar2 = (int32_t *)(*(int64_t *)(puVar12 + 0xc) + lVar9 * 0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar2[2] = uVar5;
          puVar2[3] = uVar6;
        } while (uVar11 < puVar14[10]);
      }
      uVar7 = *(ushort *)(param_1 + 2);
      uVar11 = (int)uVar13 + 1;
      uVar13 = (uint64_t)uVar11;
      uVar8 = uVar8 + 0x50;
    } while ((int)uVar11 < (int)(uint)uVar7);
  }
                    // WARNING: Subroutine does not return
  memcpy(param_1[1],param_2[1],(uint64_t)uVar7 << 2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



