#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part218.c - 19 个函数

// 函数: void FUN_180194350(int64_t *param_1)
void FUN_180194350(int64_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  
  plVar1 = (int64_t *)param_1[1];
  for (plVar2 = (int64_t *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 3) {
    if ((int64_t *)plVar2[1] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)plVar2[1] + 0x38))();
    }
    if ((int64_t *)*plVar2 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar2 + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180194370(void)
void FUN_180194370(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  uint uVar5;
  uint64_t uVar6;
  
  lVar1 = core_system_data_config;
  uVar4 = 0;
  plVar3 = *(int64_t **)(core_system_data_config + 0x58);
  plVar2 = *(int64_t **)(core_system_data_config + 0x50);
  uVar6 = uVar4;
  if (((int64_t)plVar3 - (int64_t)plVar2) / 0x18 != 0) {
    do {
      plVar3 = *(int64_t **)(uVar4 + (int64_t)plVar2);
      *(uint64_t *)(uVar4 + (int64_t)plVar2) = 0;
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x38))();
      }
      plVar3 = *(int64_t **)(uVar4 + 8 + *(int64_t *)(lVar1 + 0x50));
      *(uint64_t *)(uVar4 + 8 + *(int64_t *)(lVar1 + 0x50)) = 0;
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x38))();
      }
      uVar5 = (int)uVar6 + 1;
      uVar4 = uVar4 + 0x18;
      plVar3 = *(int64_t **)(lVar1 + 0x58);
      plVar2 = *(int64_t **)(lVar1 + 0x50);
      uVar6 = (uint64_t)uVar5;
    } while ((uint64_t)(int64_t)(int)uVar5 <
             (uint64_t)(((int64_t)plVar3 - (int64_t)plVar2) / 0x18));
  }
  if (plVar2 == plVar3) {
    *(int64_t **)(lVar1 + 0x58) = plVar2;
  }
  else {
    do {
      if ((int64_t *)plVar2[1] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)plVar2[1] + 0x38))();
      }
      if ((int64_t *)*plVar2 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar2 + 0x38))();
      }
      plVar2 = plVar2 + 3;
    } while (plVar2 != plVar3);
    *(uint64_t *)(lVar1 + 0x58) = *(uint64_t *)(lVar1 + 0x50);
  }
  return;
}





// 函数: void FUN_1801944b0(int64_t *param_1)
void FUN_1801944b0(int64_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  
  plVar1 = (int64_t *)param_1[1];
  for (plVar2 = (int64_t *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 3) {
    if ((int64_t *)plVar2[1] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)plVar2[1] + 0x38))();
    }
    if ((int64_t *)*plVar2 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar2 + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180194530(int64_t *param_1,int64_t *param_2)
void FUN_180194530(int64_t *param_1,int64_t *param_2)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  uint64_t *puVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  
  puVar8 = (uint64_t *)param_1[1];
  puVar7 = (uint64_t *)*param_1;
  lVar9 = ((int64_t)puVar8 - (int64_t)puVar7) / 0x18;
  plVar3 = (int64_t *)0x0;
  if (lVar9 == 0) {
    lVar9 = 1;
  }
  else {
    lVar9 = lVar9 * 2;
    if (lVar9 == 0) goto LAB_1801945bb;
  }
  plVar3 = (int64_t *)
           CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar9 * 0x18,(char)param_1[3],puVar7,0xfffffffffffffffe);
  puVar8 = (uint64_t *)param_1[1];
  puVar7 = (uint64_t *)*param_1;
LAB_1801945bb:
  plVar5 = plVar3;
  if (puVar7 != puVar8) {
    puVar4 = puVar7 + 1;
    do {
      *plVar5 = puVar4[-1];
      puVar4[-1] = 0;
      *(uint64_t *)((int64_t)puVar4 + ((int64_t)plVar3 - (int64_t)puVar7)) = *puVar4;
      *puVar4 = 0;
      *(int32_t *)(((int64_t)plVar3 - (int64_t)puVar7) + 8 + (int64_t)puVar4) =
           *(int32_t *)(puVar4 + 1);
      plVar5 = plVar5 + 3;
      puVar1 = puVar4 + 2;
      puVar4 = puVar4 + 3;
    } while (puVar1 != puVar8);
  }
  plVar2 = (int64_t *)*param_2;
  *plVar5 = (int64_t)plVar2;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))();
  }
  plVar2 = (int64_t *)param_2[1];
  plVar5[1] = (int64_t)plVar2;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))();
  }
  *(int *)(plVar5 + 2) = (int)param_2[2];
  plVar2 = (int64_t *)param_1[1];
  plVar6 = (int64_t *)*param_1;
  if (plVar6 != plVar2) {
    do {
      if ((int64_t *)plVar6[1] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)plVar6[1] + 0x38))();
      }
      if ((int64_t *)*plVar6 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar6 + 0x38))();
      }
      plVar6 = plVar6 + 3;
    } while (plVar6 != plVar2);
    plVar6 = (int64_t *)*param_1;
  }
  if (plVar6 == (int64_t *)0x0) {
    *param_1 = (int64_t)plVar3;
    param_1[1] = (int64_t)(plVar5 + 3);
    param_1[2] = (int64_t)(plVar3 + lVar9 * 3);
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(plVar6);
}





// 函数: void FUN_1801946c0(int64_t *param_1)
void FUN_1801946c0(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  while( true ) {
    if (lVar2 == lVar1) {
      if (*param_1 == 0) {
        return;
      }
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    if (*(int64_t **)(lVar2 + 0x40) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(lVar2 + 0x40) + 0x38))();
    }
    if (*(int64_t *)(lVar2 + 0x20) != 0) break;
    FUN_180057830(lVar2);
    lVar2 = lVar2 + 0x48;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





// 函数: void FUN_1801946e0(uint64_t *param_1)
void FUN_1801946e0(uint64_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  
  uVar11 = 0;
  *param_1 = 0;
  *(int32_t *)(param_1 + 1) = 0;
  lVar10 = param_1[3];
  lVar5 = param_1[2];
  lVar3 = lVar10 - lVar5 >> 0x3f;
  uVar6 = uVar11;
  uVar12 = uVar11;
  if ((lVar10 - lVar5) / 0x48 + lVar3 != lVar3) {
    do {
      uVar8 = uVar11;
      uVar9 = uVar11;
      if (*(int64_t *)(uVar12 + 8 + lVar5) - *(int64_t *)(uVar12 + lVar5) >> 3 != 0) {
        do {
          plVar1 = *(int64_t **)(uVar9 + *(int64_t *)(uVar12 + lVar5));
          *(uint64_t *)(uVar9 + *(int64_t *)(uVar12 + lVar5)) = 0;
          if (plVar1 != (int64_t *)0x0) {
            (**(code **)(*plVar1 + 0x38))();
          }
          uVar7 = (int)uVar8 + 1;
          lVar5 = param_1[2];
          uVar8 = (uint64_t)uVar7;
          uVar9 = uVar9 + 8;
        } while ((uint64_t)(int64_t)(int)uVar7 <
                 (uint64_t)(*(int64_t *)(uVar12 + 8 + lVar5) - *(int64_t *)(uVar12 + lVar5) >> 3)
                );
      }
      plVar1 = (int64_t *)(uVar12 + lVar5);
      plVar2 = (int64_t *)plVar1[1];
      plVar4 = (int64_t *)*plVar1;
      if (plVar4 != plVar2) {
        do {
          if ((int64_t *)*plVar4 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar4 + 0x38))();
          }
          plVar4 = plVar4 + 1;
        } while (plVar4 != plVar2);
        plVar4 = (int64_t *)*plVar1;
      }
      plVar1[1] = (int64_t)plVar4;
      plVar1 = *(int64_t **)(uVar12 + 0x40 + param_1[2]);
      *(uint64_t *)(uVar12 + 0x40 + param_1[2]) = 0;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
      uVar7 = (int)uVar6 + 1;
      lVar10 = param_1[3];
      lVar5 = param_1[2];
      uVar6 = (uint64_t)uVar7;
      uVar12 = uVar12 + 0x48;
    } while ((uint64_t)(int64_t)(int)uVar7 < (uint64_t)((lVar10 - lVar5) / 0x48));
  }
  if (lVar5 == lVar10) {
    param_1[3] = lVar5;
  }
  else {
    do {
      if (*(int64_t **)(lVar5 + 0x40) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(lVar5 + 0x40) + 0x38))();
      }
      if (*(int64_t *)(lVar5 + 0x20) != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      FUN_180057830(lVar5);
      lVar5 = lVar5 + 0x48;
    } while (lVar5 != lVar10);
    param_1[3] = param_1[2];
  }
  return;
}





// 函数: void FUN_1801948b0(int64_t *param_1)
void FUN_1801948b0(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  while( true ) {
    if (lVar2 == lVar1) {
      if (*param_1 == 0) {
        return;
      }
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    if (*(int64_t **)(lVar2 + 0x40) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(lVar2 + 0x40) + 0x38))();
    }
    if (*(int64_t *)(lVar2 + 0x20) != 0) break;
    FUN_180057830(lVar2);
    lVar2 = lVar2 + 0x48;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



float * FUN_180194940(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = param_1[8];
  fVar2 = param_1[9];
  fVar3 = param_1[10];
  fVar4 = param_1[0xb];
  fVar5 = param_1[4];
  fVar6 = param_1[5];
  fVar7 = param_1[6];
  fVar11 = param_3[1];
  fVar8 = *param_1;
  fVar9 = param_1[1];
  fVar10 = param_1[2];
  fVar12 = *param_3;
  fVar13 = param_3[2];
  *param_2 = fVar11 * fVar9 + fVar12 * fVar8 + fVar13 * fVar10;
  param_2[1] = fVar11 * fVar6 + fVar12 * fVar5 + fVar13 * fVar7;
  param_2[2] = fVar11 * fVar2 + fVar12 * fVar1 + fVar13 * fVar3;
  param_2[3] = fVar11 * fVar4 + fVar12 * fVar4 + fVar13 * fVar4;
  fVar11 = param_3[5];
  fVar12 = param_3[4];
  fVar13 = param_3[6];
  param_2[4] = fVar11 * fVar9 + fVar12 * fVar8 + fVar13 * fVar10;
  param_2[5] = fVar11 * fVar6 + fVar12 * fVar5 + fVar13 * fVar7;
  param_2[6] = fVar11 * fVar2 + fVar12 * fVar1 + fVar13 * fVar3;
  param_2[7] = fVar11 * fVar4 + fVar12 * fVar4 + fVar13 * fVar4;
  fVar11 = param_3[9];
  fVar12 = param_3[8];
  fVar13 = param_3[10];
  param_2[8] = fVar11 * fVar9 + fVar12 * fVar8 + fVar13 * fVar10;
  param_2[9] = fVar11 * fVar6 + fVar12 * fVar5 + fVar13 * fVar7;
  param_2[10] = fVar11 * fVar2 + fVar12 * fVar1 + fVar13 * fVar3;
  param_2[0xb] = fVar11 * fVar4 + fVar12 * fVar4 + fVar13 * fVar4;
  fVar13 = param_3[0xd] - param_1[0xd];
  fVar11 = param_3[0xc] - param_1[0xc];
  fVar12 = param_3[0xe] - param_1[0xe];
  param_2[0xc] = fVar13 * fVar9 + fVar11 * fVar8 + fVar12 * fVar10;
  param_2[0xd] = fVar13 * fVar6 + fVar11 * fVar5 + fVar12 * fVar7;
  param_2[0xe] = fVar13 * fVar2 + fVar11 * fVar1 + fVar12 * fVar3;
  param_2[0xf] = fVar13 * fVar4 + fVar11 * fVar4 + fVar12 * fVar4;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180194a50(int64_t *param_1,int8_t *param_2)
void FUN_180194a50(int64_t *param_1,int8_t *param_2)

{
  int8_t *puVar1;
  int8_t *puVar2;
  int64_t lVar3;
  int8_t *puVar4;
  
  puVar4 = (int8_t *)param_1[1];
  if (puVar4 < (int8_t *)param_1[2]) {
    param_1[1] = (int64_t)(puVar4 + 1);
    *puVar4 = *param_2;
    return;
  }
  puVar2 = (int8_t *)*param_1;
  if ((int64_t)puVar4 - (int64_t)puVar2 == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = ((int64_t)puVar4 - (int64_t)puVar2) * 2;
    if (lVar3 == 0) {
      puVar1 = (int8_t *)0x0;
      goto LAB_180194acf;
    }
  }
  puVar1 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar3,(char)param_1[3]);
  puVar2 = (int8_t *)*param_1;
  puVar4 = (int8_t *)param_1[1];
LAB_180194acf:
  if (puVar2 != puVar4) {
                    // WARNING: Subroutine does not return
    memmove(puVar1,puVar2,(int64_t)puVar4 - (int64_t)puVar2);
  }
  *puVar1 = *param_2;
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *param_1 = (int64_t)puVar1;
  param_1[1] = (int64_t)(puVar1 + 1);
  param_1[2] = (int64_t)(puVar1 + lVar3);
  return;
}





// 函数: void FUN_180194b30(uint64_t param_1)
void FUN_180194b30(uint64_t param_1)

{
  FUN_1808fc8a8(param_1,0x30,4,FUN_18004a130,0xfffffffffffffffe);
  return;
}



uint64_t *
FUN_180194b60(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_8320_ptr;
  *param_1 = &unknown_var_8736_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



int32_t * FUN_180194c10(uint64_t param_1,int32_t *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0x7f7fffff;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0x7f7fffff;
  FUN_1800b9f60(0);
  return param_2;
}



uint64_t *
FUN_180194c60(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_7912_ptr;
  *param_1 = &unknown_var_8336_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x70,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t *
FUN_180194cc0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_7864_ptr;
  *param_1 = &unknown_var_7888_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_180194d10(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  
  plVar1 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x70,8,3,0,0xfffffffffffffffe);
  *plVar1 = (int64_t)&system_handler1_ptr;
  *plVar1 = (int64_t)&system_handler2_ptr;
  *(int32_t *)(plVar1 + 1) = 0;
  *plVar1 = (int64_t)&unknown_var_8336_ptr;
  plVar1[2] = 0;
  *(int32_t *)(plVar1 + 3) = 0;
  plVar1[4] = 0;
  *plVar1 = (int64_t)&unknown_var_7912_ptr;
  plVar1[0xd] = 0;
  plVar1[5] = 0x3f800000;
  plVar1[6] = 0;
  plVar1[7] = 0x3f80000000000000;
  plVar1[8] = 0;
  *(int32_t *)(plVar1 + 9) = 0;
  *(int32_t *)((int64_t)plVar1 + 0x4c) = 0;
  *(int32_t *)(plVar1 + 10) = 0x3f800000;
  *(int32_t *)((int64_t)plVar1 + 0x54) = 0;
  *(int32_t *)(plVar1 + 0xb) = 0;
  *(int32_t *)((int64_t)plVar1 + 0x5c) = 0;
  *(int32_t *)(plVar1 + 0xc) = 0;
  *(int32_t *)((int64_t)plVar1 + 100) = 0x3f800000;
  (**(code **)(*plVar1 + 0x138))(plVar1,param_4);
  *param_2 = plVar1;
  (**(code **)(*plVar1 + 0x28))(plVar1);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_180194e00(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  
  plVar1 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x70,8,3,0,0xfffffffffffffffe);
  *plVar1 = (int64_t)&system_handler1_ptr;
  *plVar1 = (int64_t)&system_handler2_ptr;
  *(int32_t *)(plVar1 + 1) = 0;
  *plVar1 = (int64_t)&unknown_var_8336_ptr;
  plVar1[2] = 0;
  *(int32_t *)(plVar1 + 3) = 0;
  plVar1[4] = 0;
  *plVar1 = (int64_t)&unknown_var_7912_ptr;
  plVar1[0xd] = 0;
  plVar1[5] = 0x3f800000;
  plVar1[6] = 0;
  plVar1[7] = 0x3f80000000000000;
  plVar1[8] = 0;
  *(int32_t *)(plVar1 + 9) = 0;
  *(int32_t *)((int64_t)plVar1 + 0x4c) = 0;
  *(int32_t *)(plVar1 + 10) = 0x3f800000;
  *(int32_t *)((int64_t)plVar1 + 0x54) = 0;
  *(int32_t *)(plVar1 + 0xb) = 0;
  *(int32_t *)((int64_t)plVar1 + 0x5c) = 0;
  *(int32_t *)(plVar1 + 0xc) = 0;
  *(int32_t *)((int64_t)plVar1 + 100) = 0x3f800000;
  *param_2 = plVar1;
  (**(code **)(*plVar1 + 0x28))();
  (**(code **)(*(int64_t *)*param_2 + 0x138))((int64_t *)*param_2,param_4);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180194ef0(int64_t param_1)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  
  puVar1 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,8,8,3,0xfffffffffffffffe);
  *puVar1 = &unknown_var_8736_ptr;
  *puVar1 = &unknown_var_8320_ptr;
  puVar5 = *(uint64_t **)(param_1 + 0x30);
  if (puVar5 < *(uint64_t **)(param_1 + 0x38)) {
    *(uint64_t **)(param_1 + 0x30) = puVar5 + 1;
    *puVar5 = puVar1;
    return puVar1;
  }
  puVar4 = *(uint64_t **)(param_1 + 0x28);
  lVar2 = (int64_t)puVar5 - (int64_t)puVar4 >> 3;
  if (lVar2 == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = lVar2 * 2;
    if (lVar2 == 0) {
      puVar3 = (uint64_t *)0x0;
      goto LAB_180194fa5;
    }
  }
  puVar3 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar2 * 8,*(int8_t *)(param_1 + 0x40));
  puVar5 = *(uint64_t **)(param_1 + 0x30);
  puVar4 = *(uint64_t **)(param_1 + 0x28);
LAB_180194fa5:
  if (puVar4 != puVar5) {
                    // WARNING: Subroutine does not return
    memmove(puVar3,puVar4,(int64_t)puVar5 - (int64_t)puVar4);
  }
  *puVar3 = puVar1;
  if (*(int64_t *)(param_1 + 0x28) == 0) {
    *(uint64_t **)(param_1 + 0x28) = puVar3;
    *(uint64_t **)(param_1 + 0x30) = puVar3 + 1;
    *(uint64_t **)(param_1 + 0x38) = puVar3 + lVar2;
    return puVar1;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180195000(uint64_t param_1,uint64_t *param_2)

{
  int64_t *plVar1;
  
  plVar1 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x70,8,3,0,0xfffffffffffffffe);
  *plVar1 = (int64_t)&system_handler1_ptr;
  *plVar1 = (int64_t)&system_handler2_ptr;
  *(int32_t *)(plVar1 + 1) = 0;
  *plVar1 = (int64_t)&unknown_var_8336_ptr;
  plVar1[2] = 0;
  *(int32_t *)(plVar1 + 3) = 0;
  plVar1[4] = 0;
  *plVar1 = (int64_t)&unknown_var_7912_ptr;
  plVar1[0xd] = 0;
  plVar1[5] = 0x3f800000;
  plVar1[6] = 0;
  plVar1[7] = 0x3f80000000000000;
  plVar1[8] = 0;
  *(int32_t *)(plVar1 + 9) = 0;
  *(int32_t *)((int64_t)plVar1 + 0x4c) = 0;
  *(int32_t *)(plVar1 + 10) = 0x3f800000;
  *(int32_t *)((int64_t)plVar1 + 0x54) = 0;
  *(int32_t *)(plVar1 + 0xb) = 0;
  *(int32_t *)((int64_t)plVar1 + 0x5c) = 0;
  *(int32_t *)(plVar1 + 0xc) = 0;
  *(int32_t *)((int64_t)plVar1 + 100) = 0x3f800000;
  *param_2 = plVar1;
  (**(code **)(*plVar1 + 0x28))();
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1801950d0(int64_t param_1)

{
  uint64_t *puVar1;
  uint64_t *puStackX_8;
  
  puVar1 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,8,8,3,0xfffffffffffffffe);
  *puVar1 = &unknown_var_7888_ptr;
  *puVar1 = &unknown_var_7864_ptr;
  puStackX_8 = puVar1;
  SystemInitializer(param_1 + 0x48,&puStackX_8);
  return puVar1;
}





// 函数: void FUN_180195140(int64_t param_1,uint64_t *param_2)
void FUN_180195140(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  
  FUN_1801ba580(param_1 + 0x28);
  if (param_2 != (uint64_t *)0x0) {
    lVar1 = __RTCastToVoid(param_2);
    (**(code **)*param_2)(param_2,0);
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar1);
    }
  }
  return;
}





// 函数: void FUN_18019515a(void)
void FUN_18019515a(void)

{
  int64_t lVar1;
  uint64_t *unaff_RBX;
  
  lVar1 = __RTCastToVoid();
  (**(code **)*unaff_RBX)();
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar1);
  }
  return;
}





// 函数: void FUN_180195184(void)
void FUN_180195184(void)

{
  return;
}





// 函数: void FUN_180195190(int64_t param_1,uint64_t *param_2)
void FUN_180195190(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  
  FUN_1801ba580(param_1 + 0x48);
  if (param_2 != (uint64_t *)0x0) {
    lVar1 = __RTCastToVoid(param_2);
    (**(code **)*param_2)(param_2,0);
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar1);
    }
  }
  return;
}





// 函数: void FUN_1801951aa(void)
void FUN_1801951aa(void)

{
  int64_t lVar1;
  uint64_t *unaff_RBX;
  
  lVar1 = __RTCastToVoid();
  (**(code **)*unaff_RBX)();
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar1);
  }
  return;
}





// 函数: void FUN_1801951d4(void)
void FUN_1801951d4(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1801951e0(uint64_t param_1,uint64_t *param_2)

{
  int64_t *plVar1;
  
  plVar1 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x70,8,3,0,0xfffffffffffffffe);
  *plVar1 = (int64_t)&system_handler1_ptr;
  *plVar1 = (int64_t)&system_handler2_ptr;
  *(int32_t *)(plVar1 + 1) = 0;
  *plVar1 = (int64_t)&unknown_var_8336_ptr;
  plVar1[2] = 0;
  *(int32_t *)(plVar1 + 3) = 0;
  plVar1[4] = 0;
  *plVar1 = (int64_t)&unknown_var_7912_ptr;
  plVar1[0xd] = 0;
  plVar1[5] = 0x3f800000;
  plVar1[6] = 0;
  plVar1[7] = 0x3f80000000000000;
  plVar1[8] = 0;
  *(int32_t *)(plVar1 + 9) = 0;
  *(int32_t *)((int64_t)plVar1 + 0x4c) = 0;
  *(int32_t *)(plVar1 + 10) = 0x3f800000;
  *(int32_t *)((int64_t)plVar1 + 0x54) = 0;
  *(int32_t *)(plVar1 + 0xb) = 0;
  *(int32_t *)((int64_t)plVar1 + 0x5c) = 0;
  *(int32_t *)(plVar1 + 0xc) = 0;
  *(int32_t *)((int64_t)plVar1 + 100) = 0x3f800000;
  *param_2 = plVar1;
  (**(code **)(*plVar1 + 0x28))();
  return param_2;
}



uint64_t * FUN_1801952b0(uint64_t param_1,uint64_t *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



uint64_t *
FUN_1801952e0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_7144_ptr;
  FUN_1801c2640();
  if ((param_2 & 1) != 0) {
    free(param_1,0xb8,param_3,param_4,uVar1);
  }
  return param_1;
}



uint64_t FUN_180195330(int64_t param_1,int param_2,int param_3)

{
  int64_t lVar1;
  int *piVar2;
  
  lVar1 = *(int64_t *)(param_1 + 0x40);
  for (piVar2 = *(int **)(lVar1 + ((uint64_t)(int64_t)(param_2 * 1000 + param_3) %
                                  (uint64_t)*(uint *)(param_1 + 0x48)) * 8); piVar2 != (int *)0x0;
      piVar2 = *(int **)(piVar2 + 4)) {
    if ((param_2 == *piVar2) && (param_3 == piVar2[1])) goto LAB_180195376;
  }
  piVar2 = (int *)0x0;
LAB_180195376:
  if (piVar2 == (int *)0x0) {
    piVar2 = *(int **)(lVar1 + *(int64_t *)(param_1 + 0x48) * 8);
  }
  if (piVar2 != *(int **)(lVar1 + *(int64_t *)(param_1 + 0x48) * 8)) {
    return *(uint64_t *)(piVar2 + 2);
  }
  return 0;
}



uint64_t *
FUN_1801953d0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 8;
  strcpy_s(param_2[1],0x80,&unknown_var_2216_ptr,param_4,0,0xfffffffffffffffe);
  return param_2;
}





// 函数: void FUN_180195450(int64_t param_1)
void FUN_180195450(int64_t param_1)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  
  lVar1 = *(int64_t *)(param_1 + 0x40);
  if (lVar1 == 0) {
    return;
  }
  uVar4 = 0;
  uVar2 = *(uint64_t *)(lVar1 + -0x10);
  uVar3 = uVar2 >> 0x20;
  if ((int)(uVar2 >> 0x20) != 0) {
    do {
      FUN_180195450(uVar4 + lVar1);
      uVar4 = (uint64_t)(uint)((int)uVar4 + (int)uVar2);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(lVar1 + -0x10);
}





// 函数: void FUN_180195464(void)
void FUN_180195464(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t unaff_RDI;
  
  uVar3 = 0;
  uVar1 = *(uint64_t *)(unaff_RDI + -0x10);
  uVar2 = uVar1 >> 0x20;
  if ((int)(uVar1 >> 0x20) != 0) {
    do {
      FUN_180195450(uVar3 + unaff_RDI);
      uVar3 = (uint64_t)(uint)((int)uVar3 + (int)uVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(unaff_RDI + -0x10);
}





// 函数: void FUN_180195484(void)
void FUN_180195484(void)

{
  int64_t in_RAX;
  uint unaff_EBX;
  int unaff_EBP;
  int64_t unaff_RDI;
  
  do {
    FUN_180195450((uint64_t)unaff_EBX + unaff_RDI);
    unaff_EBX = unaff_EBX + unaff_EBP;
    in_RAX = in_RAX + -1;
  } while (in_RAX != 0);
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(unaff_RDI + -0x10);
}





// 函数: void FUN_1801954a7(void)
void FUN_1801954a7(void)

{
  int64_t unaff_RDI;
  
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(unaff_RDI + -0x10);
}





