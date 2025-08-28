#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_02_part043.c - 14 个函数

// 函数: void FUN_1801b3d80(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801b3d80(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStackX_18;
  float fStackX_1c;
  uint64_t uVar12;
  
  FUN_1801b44c0(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  *(int *)(param_1 + 0x28b4) = *(int *)(param_1 + 0x28b4) + 1;
  FUN_1801b6370(param_1);
  if ((char)param_2 != '\0') {
    if (((*(char *)(param_1 + 0x2964) != '\0') && (*(int64_t *)(param_1 + 0x60b80) != 0)) &&
       (*(int64_t *)(param_1 + 0x448) != 0)) {
      FUN_180378d40(*(int64_t *)(param_1 + 0x448),param_1);
    }
    FUN_1801ac240(param_1);
  }
  FUN_1803986d0(param_1 + 0x607e0);
  FUN_180397f00(param_1 + 0x607e0);
  uVar12 = 0xfffffffffffffffe;
  uVar5 = *(uint64_t *)(param_1 + 0x28d8);
  fVar11 = (float)uVar5 + 100.0;
  fStackX_1c = (float)((uint64_t)*(uint64_t *)(param_1 + 0x28d0) >> 0x20);
  fStackX_18 = (float)*(uint64_t *)(param_1 + 0x28d0);
  plVar1 = (int64_t *)(param_1 + 0x60c80);
  FUN_1801b9920(plVar1);
  fVar9 = (float)logf();
  fVar10 = (float)logf();
  *(uint64_t *)(param_1 + 0x60c88) = CONCAT44(fStackX_1c - 100.0,fStackX_18 - 100.0);
  *(uint64_t *)(param_1 + 0x60c90) = CONCAT44((float)((uint64_t)uVar5 >> 0x20) + 100.0,fVar11);
  *(int *)(param_1 + 0x60ca0) = 1 << ((byte)(int)(fVar10 * 1.442695) & 0x1f);
  *(int *)(param_1 + 0x60ca4) = 1 << ((byte)(int)(fVar9 * 1.442695) & 0x1f);
  plVar2 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,3,fVar11,uVar12);
  *plVar2 = 0;
  lVar3 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x400000,0x1f);
  *plVar2 = lVar3;
  LOCK();
  plVar2[1] = 0;
  UNLOCK();
  *(int32_t *)(plVar2 + 2) = 0;
  *(int64_t **)(param_1 + 0x60ca8) = plVar2;
  uVar6 = (int64_t)((int)plVar2[2] + 0xf) & 0xfffffffffffffff0;
  *(int *)(plVar2 + 2) =
       (int)uVar6 + *(int *)(param_1 + 0x60ca4) * *(int *)(param_1 + 0x60ca0) * 0x28;
  *plVar1 = *plVar2 + uVar6;
  iVar7 = *(int *)(param_1 + 0x60ca0);
  iVar8 = 0;
  if (0 < iVar7) {
    do {
      iVar7 = 0;
      if (0 < *(int *)(param_1 + 0x60ca4)) {
        do {
          lVar4 = (int64_t)(*(int *)(param_1 + 0x60ca4) * iVar8 + iVar7);
          lVar3 = *plVar1;
          uVar5 = *(uint64_t *)(param_1 + 0x60ca8);
          *(uint64_t *)(lVar3 + 8 + lVar4 * 0x28) = 0;
          *(uint64_t *)(lVar3 + 0x10 + lVar4 * 0x28) = 0;
          *(uint64_t *)(lVar3 + 0x18 + lVar4 * 0x28) = 0;
          *(uint64_t *)(lVar3 + 0x20 + lVar4 * 0x28) = uVar5;
          *(int32_t *)(*plVar1 + (int64_t)(*(int *)(param_1 + 0x60ca4) * iVar8 + iVar7) * 0x28)
               = 0;
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(param_1 + 0x60ca4));
      }
      iVar8 = iVar8 + 1;
      iVar7 = *(int *)(param_1 + 0x60ca0);
    } while (iVar8 < iVar7);
  }
  *(float *)(param_1 + 0x60c98) =
       (*(float *)(param_1 + 0x60c90) - *(float *)(param_1 + 0x60c88)) / (float)iVar7;
  *(float *)(param_1 + 0x60c9c) =
       (*(float *)(param_1 + 0x60c94) - *(float *)(param_1 + 0x60c8c)) /
       (float)*(int *)(param_1 + 0x60ca4);
  uVar5 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10000,3);
                    // WARNING: Subroutine does not return
  memset(uVar5,0,0x10000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801b3e70(int64_t param_1)
void FUN_1801b3e70(int64_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fStackX_10;
  float fStackX_14;
  float fStackX_18;
  float fStackX_1c;
  uint64_t uVar10;
  
  uVar10 = 0xfffffffffffffffe;
  fStackX_14 = (float)((uint64_t)*(uint64_t *)(param_1 + 0x28d8) >> 0x20);
  fStackX_10 = (float)*(uint64_t *)(param_1 + 0x28d8);
  fStackX_10 = fStackX_10 + 100.0;
  fStackX_1c = (float)((uint64_t)*(uint64_t *)(param_1 + 0x28d0) >> 0x20);
  fStackX_18 = (float)*(uint64_t *)(param_1 + 0x28d0);
  plVar1 = (int64_t *)(param_1 + 0x60c80);
  FUN_1801b9920(plVar1);
  fVar8 = (float)logf();
  fVar9 = (float)logf();
  *(uint64_t *)(param_1 + 0x60c88) = CONCAT44(fStackX_1c - 100.0,fStackX_18 - 100.0);
  *(uint64_t *)(param_1 + 0x60c90) = CONCAT44(fStackX_14 + 100.0,fStackX_10);
  *(int *)(param_1 + 0x60ca0) = 1 << ((byte)(int)(fVar9 * 1.442695) & 0x1f);
  *(int *)(param_1 + 0x60ca4) = 1 << ((byte)(int)(fVar8 * 1.442695) & 0x1f);
  plVar2 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,3,fStackX_10,uVar10);
  *plVar2 = 0;
  lVar3 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x400000,0x1f);
  *plVar2 = lVar3;
  LOCK();
  plVar2[1] = 0;
  UNLOCK();
  *(int32_t *)(plVar2 + 2) = 0;
  *(int64_t **)(param_1 + 0x60ca8) = plVar2;
  uVar5 = (int64_t)((int)plVar2[2] + 0xf) & 0xfffffffffffffff0;
  *(int *)(plVar2 + 2) =
       (int)uVar5 + *(int *)(param_1 + 0x60ca4) * *(int *)(param_1 + 0x60ca0) * 0x28;
  *plVar1 = *plVar2 + uVar5;
  iVar6 = *(int *)(param_1 + 0x60ca0);
  iVar7 = 0;
  if (0 < iVar6) {
    do {
      iVar6 = 0;
      if (0 < *(int *)(param_1 + 0x60ca4)) {
        do {
          lVar4 = (int64_t)(*(int *)(param_1 + 0x60ca4) * iVar7 + iVar6);
          lVar3 = *plVar1;
          uVar10 = *(uint64_t *)(param_1 + 0x60ca8);
          *(uint64_t *)(lVar3 + 8 + lVar4 * 0x28) = 0;
          *(uint64_t *)(lVar3 + 0x10 + lVar4 * 0x28) = 0;
          *(uint64_t *)(lVar3 + 0x18 + lVar4 * 0x28) = 0;
          *(uint64_t *)(lVar3 + 0x20 + lVar4 * 0x28) = uVar10;
          *(int32_t *)(*plVar1 + (int64_t)(*(int *)(param_1 + 0x60ca4) * iVar7 + iVar6) * 0x28)
               = 0;
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(param_1 + 0x60ca4));
      }
      iVar7 = iVar7 + 1;
      iVar6 = *(int *)(param_1 + 0x60ca0);
    } while (iVar7 < iVar6);
  }
  *(float *)(param_1 + 0x60c98) =
       (*(float *)(param_1 + 0x60c90) - *(float *)(param_1 + 0x60c88)) / (float)iVar6;
  *(float *)(param_1 + 0x60c9c) =
       (*(float *)(param_1 + 0x60c94) - *(float *)(param_1 + 0x60c8c)) /
       (float)*(int *)(param_1 + 0x60ca4);
  uVar10 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10000,3);
                    // WARNING: Subroutine does not return
  memset(uVar10,0,0x10000);
}






// 函数: void FUN_1801b44c0(int64_t param_1)
void FUN_1801b44c0(int64_t param_1)

{
  char cVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  uint uVar6;
  uint64_t uVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  uint64_t uVar7;
  
  iVar4 = (int)(*(int64_t *)(param_1 + 0x60860) - *(int64_t *)(param_1 + 0x60858) >> 3);
  if (0 < iVar4) {
    lVar10 = 0;
    do {
      uVar7 = 0;
      lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x60858) + lVar10 * 8);
      if ((*(byte *)(lVar2 + 0x2c4) & 2) != 0) {
        cVar1 = *(char *)(lVar2 + 0x2e8);
        PhysicsSystem_CharacterController(lVar2,1);
        lVar5 = *(int64_t *)(lVar2 + 0xf0);
        uVar8 = uVar7;
        if (*(int64_t *)(lVar2 + 0xf8) - lVar5 >> 3 != 0) {
          do {
            plVar3 = *(int64_t **)(uVar8 + lVar5);
            if (((-1 < cVar1) || (plVar3 != (int64_t *)0x0)) &&
               ((**(code **)(*plVar3 + 0x1e0))(plVar3,0), *(int64_t *)(lVar2 + 0x20) != 0)) {
              FUN_1802549d0(plVar3);
            }
            uVar6 = (int)uVar7 + 1;
            uVar7 = (uint64_t)uVar6;
            uVar8 = uVar8 + 8;
            lVar5 = *(int64_t *)(lVar2 + 0xf0);
          } while ((uint64_t)(int64_t)(int)uVar6 <
                   (uint64_t)(*(int64_t *)(lVar2 + 0xf8) - lVar5 >> 3));
        }
        SystemCore_Controller(lVar2 + 0xf0);
        SystemCore_Controller(lVar2 + 0x1e0);
        puVar9 = *(uint64_t **)(lVar2 + 0x1c0);
        if (puVar9 != *(uint64_t **)(lVar2 + 0x1c8)) {
          do {
            FUN_1802e9fa0(*puVar9,1,0,0);
            puVar9 = puVar9 + 1;
          } while (puVar9 != *(uint64_t **)(lVar2 + 0x1c8));
        }
        if (*(int64_t *)(lVar2 + 0x260) != 0) {
          FUN_1802fc320();
          FUN_180300650(*(uint64_t *)(lVar2 + 0x260),0);
          lVar5 = *(int64_t *)(lVar2 + 0x260);
          if ((*(int64_t *)(lVar5 + 0xd0) != 0) &&
             (*(int64_t *)(*(int64_t *)(lVar5 + 0xd0) + 0x1000) != 0)) {
            FUN_1802fc520(lVar5,0);
            lVar5 = *(int64_t *)(lVar2 + 0x260);
          }
          FUN_1802fdb10(lVar5,0);
          plVar3 = *(int64_t **)(lVar2 + 0x260);
          *(uint64_t *)(lVar2 + 0x260) = 0;
          if (plVar3 != (int64_t *)0x0) {
            (**(code **)(*plVar3 + 0x38))();
          }
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar4);
  }
  return;
}



int64_t * FUN_1801b46a0(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t alStack_20 [3];
  
  FUN_1801ba400(param_1 + 0xb0,alStack_20,param_3,param_4,0);
  if (alStack_20[0] ==
      *(int64_t *)(*(int64_t *)(param_1 + 0xb8) + *(int64_t *)(param_1 + 0xc0) * 8)) {
    *param_2 = 0;
  }
  else {
    plVar1 = *(int64_t **)(alStack_20[0] + 0x98);
    *param_2 = (int64_t)plVar1;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x28))();
    }
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801b4720(int64_t param_1,int param_2)
void FUN_1801b4720(int64_t param_1,int param_2)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plStackX_8;
  uint64_t uVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  int64_t alStack_30 [2];
  void *puStack_20;
  code *pcStack_18;
  
  uVar7 = 0xfffffffffffffffe;
  iVar1 = *(int *)(param_1 + 0x3054);
  if (iVar1 != param_2) {
    *(uint *)(param_1 + 0x3324) = *(uint *)(param_1 + 0x3324) & 0xffffffef;
  }
  *(int *)(param_1 + 0x3358) = *(int *)(param_1 + 0x3358) + 1;
  *(int *)(param_1 + 0x3054) = param_2;
  if (*(int64_t **)(param_1 + 0x60b80) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x60b80) + 0x20))();
    uVar5 = system_context_ptr;
    if ((iVar1 != param_2) && (lVar3 = *(int64_t *)(param_1 + 0x448), lVar3 != 0)) {
      plVar6 = *(int64_t **)(lVar3 + 0x2308);
      if (plVar6 != (int64_t *)0x0) {
        plStackX_8 = plVar6;
        (**(code **)(*plVar6 + 0x28))();
        SystemCore_ErrorHandler(uVar5,&plStackX_8,0);
        lVar3 = *(int64_t *)(param_1 + 0x448);
      }
      FUN_180374e60(lVar3);
      lVar3 = *(int64_t *)(param_1 + 0x60b28);
      lVar2 = *(int64_t *)(param_1 + 0x60b20);
      plStackX_8 = alStack_30;
      puStack_20 = &processed_var_8688_ptr;
      pcStack_18 = FUN_1801bbc00;
      plVar6 = alStack_30;
      uVar5 = 0xffffffffffffffff;
      alStack_30[0] = param_1;
      SystemCore_DataTransformer();
      lVar4 = *(int64_t *)(param_1 + 0x448);
      if (lVar4 == 0) {
        uVar7 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x2370,8,3,uVar5,plVar6,uVar7);
        lVar4 = FUN_180373a60(uVar7,param_1);
      }
      FUN_1803786b0(lVar4,*(uint64_t *)(param_1 + 0x60b80),lVar3 - lVar2 >> 3 & 0xffffffff);
      *(int *)(param_1 + 0x28b4) = *(int *)(param_1 + 0x28b4) + 1;
    }
  }
  return;
}






// 函数: void FUN_1801b48a0(int64_t param_1)
void FUN_1801b48a0(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  
  lVar1 = *(int64_t *)(param_1 + 0x60b80);
  if (((lVar1 != 0) && (*(int64_t *)(*(int64_t *)(lVar1 + 0x68) + 0x2908) != 0)) &&
     (uVar6 = 0, uVar7 = uVar6, uVar8 = uVar6, 0 < *(int *)(lVar1 + 0x14))) {
    do {
      uVar3 = uVar6;
      uVar5 = uVar6;
      if (0 < *(int *)(lVar1 + 0x18)) {
        do {
          lVar2 = *(int64_t *)
                   (*(int64_t *)(*(int64_t *)(*(int64_t *)(lVar1 + 0x68) + 0x2908) + 0x40) +
                   uVar7);
          if (*(int64_t *)(uVar3 + 0x20 + lVar2) != 0) {
                    // WARNING: Subroutine does not return
            CoreEngine_MemoryPoolManager();
          }
          *(uint64_t *)(uVar3 + 0x20 + lVar2) = 0;
          uVar4 = (int)uVar5 + 1;
          *(uint64_t *)(uVar3 + 0x40 + lVar2) = *(uint64_t *)(uVar3 + 0x38 + lVar2);
          uVar3 = uVar3 + 0x68;
          uVar5 = (uint64_t)uVar4;
        } while ((int)uVar4 < *(int *)(lVar1 + 0x18));
      }
      uVar4 = (int)uVar8 + 1;
      uVar7 = uVar7 + 8;
      uVar8 = (uint64_t)uVar4;
    } while ((int)uVar4 < *(int *)(lVar1 + 0x14));
  }
  return;
}






// 函数: void FUN_1801b48c8(void)
void FUN_1801b48c8(void)

{
  int64_t lVar1;
  int64_t unaff_RBP;
  uint64_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  
  uVar5 = 0;
  uVar6 = uVar5;
  uVar7 = uVar5;
  if (0 < *(int *)(unaff_RBP + 0x14)) {
    do {
      uVar2 = uVar5;
      uVar4 = uVar5;
      if (0 < *(int *)(unaff_RBP + 0x18)) {
        do {
          lVar1 = *(int64_t *)
                   (*(int64_t *)(*(int64_t *)(*(int64_t *)(unaff_RBP + 0x68) + 0x2908) + 0x40) +
                   uVar6);
          if (*(int64_t *)(uVar2 + 0x20 + lVar1) != 0) {
                    // WARNING: Subroutine does not return
            CoreEngine_MemoryPoolManager();
          }
          *(uint64_t *)(uVar2 + 0x20 + lVar1) = 0;
          uVar3 = (int)uVar4 + 1;
          *(uint64_t *)(uVar2 + 0x40 + lVar1) = *(uint64_t *)(uVar2 + 0x38 + lVar1);
          uVar2 = uVar2 + 0x68;
          uVar4 = (uint64_t)uVar3;
        } while ((int)uVar3 < *(int *)(unaff_RBP + 0x18));
      }
      uVar3 = (int)uVar7 + 1;
      uVar6 = uVar6 + 8;
      uVar7 = (uint64_t)uVar3;
    } while ((int)uVar3 < *(int *)(unaff_RBP + 0x14));
  }
  return;
}






// 函数: void FUN_1801b48e2(void)
void FUN_1801b48e2(void)

{
  int64_t lVar1;
  int64_t unaff_RBP;
  uint64_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t unaff_R12;
  uint64_t uVar5;
  int unaff_R15D;
  
  uVar5 = unaff_R12 & 0xffffffff;
  do {
    uVar4 = unaff_R12 & 0xffffffff;
    uVar2 = unaff_R12;
    if ((int)unaff_R12 < *(int *)(unaff_RBP + 0x18)) {
      do {
        lVar1 = *(int64_t *)
                 (*(int64_t *)(*(int64_t *)(*(int64_t *)(unaff_RBP + 0x68) + 0x2908) + 0x40) +
                 uVar5);
        if (*(int64_t *)(uVar2 + 0x20 + lVar1) != 0) {
                    // WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        *(uint64_t *)(uVar2 + 0x20 + lVar1) = unaff_R12;
        uVar3 = (int)uVar4 + 1;
        uVar4 = (uint64_t)uVar3;
        *(uint64_t *)(uVar2 + 0x40 + lVar1) = *(uint64_t *)(uVar2 + 0x38 + lVar1);
        uVar2 = uVar2 + 0x68;
      } while ((int)uVar3 < *(int *)(unaff_RBP + 0x18));
    }
    unaff_R15D = unaff_R15D + 1;
    uVar5 = uVar5 + 8;
  } while (unaff_R15D < *(int *)(unaff_RBP + 0x14));
  return;
}






// 函数: void FUN_1801b496d(void)
void FUN_1801b496d(void)

{
  return;
}






// 函数: void FUN_1801b4977(void)
void FUN_1801b4977(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801b4980(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801b4980(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  int16_t *puVar2;
  void *puStack_30;
  int16_t *puStack_28;
  int32_t uStack_20;
  uint64_t uStack_18;
  
  puStack_30 = &system_data_buffer_ptr;
  uStack_18 = 0;
  puStack_28 = (int16_t *)0x0;
  uStack_20 = 0;
  puVar2 = (int16_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13,param_4,0xfffffffffffffffe);
  *(int8_t *)puVar2 = 0;
  puStack_28 = puVar2;
  uVar1 = CoreMemoryPoolCleaner(puVar2);
  uStack_18 = CONCAT44(uStack_18._4_4_,uVar1);
  *puVar2 = 0x706d;
  *(int8_t *)(puVar2 + 1) = 0;
  uStack_20 = 2;
  FUN_180063510(param_1 + 0x8178,&puStack_30);
  puStack_30 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager(puVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_1801b4a60(int64_t param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  int64_t lVar7;
  int iStackX_8;
  int64_t lStackX_10;
  uint64_t uVar8;
  uint64_t *puStack_60;
  uint64_t *puStack_58;
  uint64_t *puStack_50;
  int32_t uStack_48;
  
  uVar8 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x5c40) != '\0') {
    if (*(char *)(param_1 + 0x5c41) != '\0') {
      SystemCore_Controller(param_1 + 0x8138);
      FUN_1801ae4a0(param_1,&processed_var_6976_ptr,param_1 + 0x8138);
      *(int8_t *)(param_1 + 0x5c41) = 0;
    }
    puStack_60 = (uint64_t *)0x0;
    puStack_58 = (uint64_t *)0x0;
    puStack_50 = (uint64_t *)0x0;
    uStack_48 = 3;
    iStackX_8 = 0;
    lVar6 = *(int64_t *)(param_1 + 0x8138);
    puVar2 = (uint64_t *)0x0;
    if (*(int64_t *)(param_1 + 0x8140) - lVar6 >> 3 != 0) {
      lStackX_10 = 0;
      puVar3 = puVar2;
      puVar5 = (uint64_t *)0x0;
      do {
        puVar1 = puStack_58;
        lVar6 = *(int64_t *)(lStackX_10 + lVar6);
        if (puStack_58 < puVar5) {
          *puStack_58 = *(uint64_t *)(lVar6 + 0xa0);
          puVar2 = puVar3;
        }
        else {
          lVar4 = (int64_t)puStack_58 - (int64_t)puVar3 >> 3;
          lVar7 = lVar4 * 2;
          if (lVar4 == 0) {
            lVar7 = 1;
          }
          puVar2 = (uint64_t *)0x0;
          if (lVar7 != 0) {
            puVar2 = (uint64_t *)
                     CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar7 * 8,
                                   CONCAT71((int7)((int64_t)puStack_58 - (int64_t)puVar3 >> 0xb),3
                                           ),puVar5,uVar8);
          }
          if (puVar3 != puVar1) {
                    // WARNING: Subroutine does not return
            memmove(puVar2,puVar3,(int64_t)puVar1 - (int64_t)puVar3);
          }
          *puVar2 = *(uint64_t *)(lVar6 + 0xa0);
          if (puVar3 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
            CoreEngine_MemoryPoolManager(puVar3);
          }
          puVar5 = puVar2 + lVar7;
          puStack_60 = puVar2;
          puStack_50 = puVar5;
          puStack_58 = puVar2;
        }
        puStack_58 = puStack_58 + 1;
        iStackX_8 = iStackX_8 + 1;
        lStackX_10 = lStackX_10 + 8;
        lVar6 = *(int64_t *)(param_1 + 0x8138);
        puVar3 = puVar2;
      } while ((uint64_t)(int64_t)iStackX_8 <
               (uint64_t)(*(int64_t *)(param_1 + 0x8140) - lVar6 >> 3));
    }
    if (2 < (uint64_t)((int64_t)puStack_58 - (int64_t)puVar2 >> 3)) {
      lVar6 = (int64_t)puStack_58 - (int64_t)puVar2;
      FUN_180640330(puVar2);
      FUN_18063efb0(param_1 + 0x5bf8,&puStack_60,lVar6 >> 3 & 0xffffffff,0);
    }
    *(int8_t *)(param_1 + 0x5c40) = 0;
    if (puVar2 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(puVar2);
    }
  }
  return param_1 + 0x5bf8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_1801b4cd0(int64_t param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  int aiStackX_8 [2];
  int64_t lStackX_10;
  int64_t lStackX_18;
  uint64_t uVar7;
  uint64_t *puStack_60;
  uint64_t *puStack_58;
  uint64_t *puStack_50;
  int32_t uStack_48;
  
  uVar7 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x5bf0) != '\0') {
    if (*(char *)(param_1 + 0x5c42) != '\0') {
      SystemCore_Controller(param_1 + 0x8158);
      FUN_1801ae4a0(param_1,&processed_var_7008_ptr,param_1 + 0x8158);
      *(int8_t *)(param_1 + 0x5c42) = 0;
    }
    puStack_60 = (uint64_t *)0x0;
    puStack_58 = (uint64_t *)0x0;
    puStack_50 = (uint64_t *)0x0;
    uStack_48 = 3;
    aiStackX_8[0] = 0;
    lVar3 = *(int64_t *)(param_1 + 0x8158);
    puVar2 = (uint64_t *)0x0;
    if (*(int64_t *)(param_1 + 0x8160) - lVar3 >> 3 != 0) {
      lStackX_10 = 0;
      puVar4 = puVar2;
      puVar6 = (uint64_t *)0x0;
      do {
        puVar1 = puStack_58;
        lStackX_18 = *(int64_t *)(lVar3 + lStackX_10);
        if (puStack_58 < puVar6) {
          *puStack_58 = *(uint64_t *)(lStackX_18 + 0xa0);
          puVar2 = puVar4;
        }
        else {
          lVar5 = (int64_t)puStack_58 - (int64_t)puVar4 >> 3;
          lVar3 = lVar5 * 2;
          if (lVar5 == 0) {
            lVar3 = 1;
          }
          puVar2 = (uint64_t *)0x0;
          if (lVar3 != 0) {
            puVar2 = (uint64_t *)
                     CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar3 * 8,
                                   CONCAT71((int7)((int64_t)puStack_58 - (int64_t)puVar4 >> 0xb),3
                                           ),puVar6,uVar7);
          }
          if (puVar4 != puVar1) {
                    // WARNING: Subroutine does not return
            memmove(puVar2,puVar4,(int64_t)puVar1 - (int64_t)puVar4);
          }
          *puVar2 = *(uint64_t *)(lStackX_18 + 0xa0);
          if (puVar4 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
            CoreEngine_MemoryPoolManager(puVar4);
          }
          puVar6 = puVar2 + lVar3;
          puStack_60 = puVar2;
          puStack_50 = puVar6;
          puStack_58 = puVar2;
        }
        puStack_58 = puStack_58 + 1;
        aiStackX_8[0] = aiStackX_8[0] + 1;
        lStackX_10 = lStackX_10 + 8;
        lVar3 = *(int64_t *)(param_1 + 0x8158);
        puVar4 = puVar2;
      } while ((uint64_t)(int64_t)aiStackX_8[0] <
               (uint64_t)(*(int64_t *)(param_1 + 0x8160) - lVar3 >> 3));
    }
    if ((uint64_t)((int64_t)puStack_58 - (int64_t)puVar2 >> 3) < 3) {
      *(int8_t *)(param_1 + 0x5bf1) = 0;
      aiStackX_8[0] = -0x3d380000;
      aiStackX_8[1] = 0xc2c80000;
      SystemSecurity_Manager(&puStack_60,aiStackX_8);
      aiStackX_8[0] = -0x3d380000;
      aiStackX_8[1] = 0x46224400;
      SystemSecurity_Manager(&puStack_60,aiStackX_8);
      aiStackX_8[0] = 0x46224400;
      aiStackX_8[1] = 0xc2c80000;
      SystemSecurity_Manager(&puStack_60,aiStackX_8);
      aiStackX_8[0] = 0x46224400;
      aiStackX_8[1] = 0x46224400;
      SystemSecurity_Manager(&puStack_60,aiStackX_8);
      puVar2 = puStack_60;
    }
    else {
      *(int8_t *)(param_1 + 0x5bf1) = 1;
    }
    lVar3 = (int64_t)puStack_58 - (int64_t)puVar2;
    FUN_180640330(puVar2);
    FUN_18063efb0(param_1 + 0x5ba8,&puStack_60,lVar3 >> 3 & 0xffffffff,0);
    *(int8_t *)(param_1 + 0x5bf0) = 0;
    if (puVar2 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(puVar2);
    }
  }
  return param_1 + 0x5ba8;
}



uint64_t * FUN_1801b4fa0(uint64_t param_1,uint64_t *param_2,uint64_t *param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  char cVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  float fVar7;
  uint64_t uStackX_10;
  
  uVar5 = FUN_1801b4cd0();
  uVar1 = *(int32_t *)((int64_t)param_3 + 4);
  uVar2 = *(int32_t *)(param_3 + 1);
  uVar3 = *(int32_t *)((int64_t)param_3 + 0xc);
  uVar6 = *param_3;
  *(int32_t *)param_2 = *(int32_t *)param_3;
  *(int32_t *)((int64_t)param_2 + 4) = uVar1;
  *(int32_t *)(param_2 + 1) = uVar2;
  *(int32_t *)((int64_t)param_2 + 0xc) = uVar3;
  uStackX_10 = uVar6;
  cVar4 = FUN_18063e7e0(uVar5,param_3);
  if (cVar4 == '\0') {
    FUN_18063ee10(uVar5,param_3,&uStackX_10);
    uVar6 = uStackX_10;
  }
  fVar7 = *(float *)(param_2 + 1);
  *param_2 = uVar6;
  if (-100.0 <= fVar7) {
    if (2521.0 <= fVar7) {
      fVar7 = 2521.0;
    }
    *(float *)(param_2 + 1) = fVar7;
  }
  else {
    *(int32_t *)(param_2 + 1) = 0xc2c80000;
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801b5040(int64_t param_1)
void FUN_1801b5040(int64_t param_1)

{
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  if (*(int64_t **)(param_1 + 0x28c0) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x28c0) + 0x10))();
    puVar1 = *(uint64_t **)(param_1 + 0x28c0);
    if (puVar1 != (uint64_t *)0x0) {
      lVar2 = __RTCastToVoid(puVar1);
      (**(code **)*puVar1)(puVar1,0);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager(lVar2);
      }
    }
    *(uint64_t *)(param_1 + 0x28c0) = 0;
  }
  if (*(float *)(param_1 + 0x3140) <= 0.1) {
    plVar3 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x10,8,3,uVar4);
    *plVar3 = (int64_t)&processed_var_6232_ptr;
    plVar3[1] = param_1;
  }
  else if (*(int *)(param_1 + 0x3054) == 2) {
    plVar3 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,3,uVar4);
    *plVar3 = (int64_t)&processed_var_6232_ptr;
    plVar3[1] = param_1;
    *plVar3 = (int64_t)&processed_var_6136_ptr;
    plVar3[2] = 0;
    plVar3[3] = 0;
  }
  else {
    plVar3 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x70,8,3,uVar4);
    *plVar3 = (int64_t)&processed_var_6232_ptr;
    plVar3[1] = param_1;
    *plVar3 = (int64_t)&processed_var_6184_ptr;
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    *(int32_t *)(plVar3 + 5) = 0;
  }
  *(int64_t **)(param_1 + 0x28c0) = plVar3;
  (**(code **)(*plVar3 + 8))();
  *(uint *)(param_1 + 0x3674) = *(uint *)(param_1 + 0x3674) | 0x10;
  return;
}






// 函数: void FUN_1801b51a0(int64_t param_1)
void FUN_1801b51a0(int64_t param_1)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t *puVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int8_t auStack_18 [16];
  
  uVar6 = *(uint *)(param_1 + 0x3674);
  if ((uVar6 >> 4 & 1) == 0) {
    FUN_1801b5040(param_1);
    uVar6 = *(uint *)(param_1 + 0x3674);
  }
  if ((uVar6 >> 3 & 1) == 0) {
    FUN_1801983b0(param_1,param_1 + 0x3830);
    *(int32_t *)(param_1 + 0x3860) = 0;
    *(int32_t *)(param_1 + 0x3864) = 0;
    *(int32_t *)(param_1 + 0x3868) = 0;
    *(int32_t *)(param_1 + 0x386c) = 0x7f7fffff;
    FUN_1801b32d0(param_1);
    *(uint *)(param_1 + 0x3674) = *(uint *)(param_1 + 0x3674) | 8;
    uVar6 = *(uint *)(param_1 + 0x3674);
  }
  if ((uVar6 >> 2 & 1) != 0) goto LAB_1801b528e;
  *(bool *)(param_1 + 0x3e04) = 0.0 < *(float *)(param_1 + 0x347c);
  if ((*(uint *)(param_1 + 0x33a0) & 0x10000000) == 0) {
    fVar9 = *(float *)(param_1 + 0x3418);
    fVar8 = fVar9 * *(float *)(param_1 + 0x3430);
    fVar7 = fVar9 * *(float *)(param_1 + 0x342c);
    fVar9 = fVar9 * *(float *)(param_1 + 0x3434);
    if (fVar8 * fVar8 + fVar7 * fVar7 + fVar9 * fVar9 < 1e-08) goto LAB_1801b527a;
    *(uint *)(param_1 + 0x3e08) = *(uint *)(param_1 + 0x3e08) & 0xfffffffd;
  }
  else {
LAB_1801b527a:
    *(uint *)(param_1 + 0x3e08) = *(uint *)(param_1 + 0x3e08) | 2;
  }
  *(uint *)(param_1 + 0x3674) = *(uint *)(param_1 + 0x3674) | 4;
  uVar6 = *(uint *)(param_1 + 0x3674);
LAB_1801b528e:
  if ((*(byte *)(param_1 + 0x3324) & 1) == 0) {
    FUN_1801b3050(param_1);
    *(uint *)(param_1 + 0x3674) = *(uint *)(param_1 + 0x3674) | 1;
    uVar6 = *(uint *)(param_1 + 0x3674);
  }
  if ((uVar6 >> 1 & 1) == 0) {
    puVar5 = (int32_t *)
             FUN_180145140(param_1 + 0x3368,auStack_18,*(int32_t *)(param_1 + 0x3f50));
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    uVar3 = puVar5[2];
    uVar4 = puVar5[3];
    *(int8_t *)(param_1 + 0x3e05) = 1;
    *(int32_t *)(param_1 + 0x3e0c) = uVar1;
    *(int32_t *)(param_1 + 0x3e10) = uVar2;
    *(int32_t *)(param_1 + 0x3e14) = uVar3;
    *(int32_t *)(param_1 + 0x3e18) = uVar4;
    FUN_1801983b0(param_1,param_1 + 0x3830);
    *(uint64_t *)(param_1 + 0x3860) = 0;
    *(uint64_t *)(param_1 + 0x3868) = 0x7f7fffff00000000;
    *(uint *)(param_1 + 0x3674) = *(uint *)(param_1 + 0x3674) | 2;
  }
  return;
}






// 函数: void FUN_1801b5310(uint64_t param_1)
void FUN_1801b5310(uint64_t param_1)

{
  SystemDataValidator(param_1,0x128,2,FUN_1801b9690,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1801b5340(int64_t param_1)
void FUN_1801b5340(int64_t param_1)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if (*(int64_t **)(param_1 + 0xe18) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0xe18) + 0x38))();
  }
  SystemDataValidator(param_1 + 0xe08,8,2,DataCacheManager,uVar1);
  if (*(int64_t **)(param_1 + 0xe00) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0xe00) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0xdf8) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0xdf8) + 0x38))();
  }
  SystemDataValidator(param_1 + 0xde8,8,2,DataCacheManager,uVar1);
  SystemDataValidator(param_1 + 0xdd8,8,2,DataCacheManager);
  SystemDataValidator(param_1 + 0xdc8,8,2,DataCacheManager);
  SystemDataValidator(param_1 + 0xb70,0x128,2,FUN_1801b9690);
  SystemDataValidator(param_1 + 0x918,0x128,2,FUN_1801b9690);
  SystemDataValidator(param_1,0x488,2,FUN_1800e7ca0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




