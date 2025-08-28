#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part367.c - 13 个函数

// 函数: void FUN_180469819(void)
void FUN_180469819(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_180469830(int64_t *param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             float *param_5)

{
  bool bVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  uint64_t uVar5;
  float fVar6;
  
  plVar2 = (int64_t *)*param_1;
  if ((param_4 == plVar2) || (param_4 == param_1)) {
    if ((param_1[4] != 0) &&
       (param_4 = plVar2, *(float *)(plVar2 + 4) <= *param_5 && *param_5 != *(float *)(plVar2 + 4)))
    {
LAB_180469891:
      uVar5 = 0;
      goto LAB_180469894;
    }
  }
  else {
    plVar2 = (int64_t *)func_0x00018066bd70(param_4);
    fVar6 = *param_5;
    if ((*(float *)(param_4 + 4) <= fVar6 && fVar6 != *(float *)(param_4 + 4)) &&
       (fVar6 < *(float *)(plVar2 + 4))) {
      if (*param_4 == 0) goto LAB_180469891;
      uVar5 = 1;
      param_4 = plVar2;
LAB_180469894:
      if (param_4 != (int64_t *)0x0) {
        FUN_180469b30(param_1,param_2,param_4,uVar5,param_5);
        return param_2;
      }
    }
  }
  bVar1 = true;
  plVar2 = param_1;
  if ((int64_t *)param_1[2] != (int64_t *)0x0) {
    plVar3 = (int64_t *)param_1[2];
    do {
      plVar2 = plVar3;
      bVar1 = *param_5 < *(float *)(plVar2 + 4);
      if (bVar1) {
        plVar3 = (int64_t *)plVar2[1];
      }
      else {
        plVar3 = (int64_t *)*plVar2;
      }
    } while (plVar3 != (int64_t *)0x0);
  }
  plVar3 = plVar2;
  if (bVar1) {
    if (plVar2 == (int64_t *)param_1[1]) {
      fVar6 = *param_5;
      goto FUN_180469922;
    }
    plVar3 = (int64_t *)func_0x00018066b9a0(plVar2);
  }
  fVar6 = *param_5;
  if (fVar6 < *(float *)(plVar3 + 4) || fVar6 == *(float *)(plVar3 + 4)) {
    *param_2 = plVar3;
    return param_2;
  }
FUN_180469922:
  if ((plVar2 == param_1) || (fVar6 < *(float *)(plVar2 + 4))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  lVar4 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x78,(char)param_1[5]);
  *(float *)(lVar4 + 0x20) = *param_5;
  *(uint64_t *)(lVar4 + 0x24) = 0x3f800000;
  *(uint64_t *)(lVar4 + 0x2c) = 0;
  *(uint64_t *)(lVar4 + 0x34) = 0x3f80000000000000;
  *(uint64_t *)(lVar4 + 0x3c) = 0;
  *(int32_t *)(lVar4 + 0x44) = 0;
  *(int32_t *)(lVar4 + 0x48) = 0;
  *(int32_t *)(lVar4 + 0x4c) = 0x3f800000;
  *(int32_t *)(lVar4 + 0x50) = 0;
  *(int32_t *)(lVar4 + 0x54) = 0;
  *(int32_t *)(lVar4 + 0x58) = 0;
  *(int32_t *)(lVar4 + 0x5c) = 0;
  *(int32_t *)(lVar4 + 0x60) = 0x3f800000;
  *(int32_t *)(lVar4 + 100) = 0x3f800000;
  *(int32_t *)(lVar4 + 0x68) = 0x3f800000;
  *(int32_t *)(lVar4 + 0x6c) = 0x3f800000;
  *(int32_t *)(lVar4 + 0x70) = 0x7f7fffff;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4,plVar2,param_1,uVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180469922(void)
void FUN_180469922(void)

{
  int64_t lVar1;
  int32_t *unaff_RSI;
  int64_t unaff_RDI;
  
  lVar1 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x78,*(int8_t *)(unaff_RDI + 0x28));
  *(int32_t *)(lVar1 + 0x20) = *unaff_RSI;
  *(uint64_t *)(lVar1 + 0x24) = 0x3f800000;
  *(uint64_t *)(lVar1 + 0x2c) = 0;
  *(uint64_t *)(lVar1 + 0x34) = 0x3f80000000000000;
  *(uint64_t *)(lVar1 + 0x3c) = 0;
  *(int32_t *)(lVar1 + 0x44) = 0;
  *(int32_t *)(lVar1 + 0x48) = 0;
  *(int32_t *)(lVar1 + 0x4c) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x50) = 0;
  *(int32_t *)(lVar1 + 0x54) = 0;
  *(int32_t *)(lVar1 + 0x58) = 0;
  *(int32_t *)(lVar1 + 0x5c) = 0;
  *(int32_t *)(lVar1 + 0x60) = 0x3f800000;
  *(int32_t *)(lVar1 + 100) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x68) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x6c) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x70) = 0x7f7fffff;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18046993a(void)
void FUN_18046993a(void)

{
  int64_t lVar1;
  int32_t *unaff_RSI;
  int64_t unaff_RDI;
  
  lVar1 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x78,*(int8_t *)(unaff_RDI + 0x28));
  *(int32_t *)(lVar1 + 0x20) = *unaff_RSI;
  *(uint64_t *)(lVar1 + 0x24) = 0x3f800000;
  *(uint64_t *)(lVar1 + 0x2c) = 0;
  *(uint64_t *)(lVar1 + 0x34) = 0x3f80000000000000;
  *(uint64_t *)(lVar1 + 0x3c) = 0;
  *(int32_t *)(lVar1 + 0x44) = 0;
  *(int32_t *)(lVar1 + 0x48) = 0;
  *(int32_t *)(lVar1 + 0x4c) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x50) = 0;
  *(int32_t *)(lVar1 + 0x54) = 0;
  *(int32_t *)(lVar1 + 0x58) = 0;
  *(int32_t *)(lVar1 + 0x5c) = 0;
  *(int32_t *)(lVar1 + 0x60) = 0x3f800000;
  *(int32_t *)(lVar1 + 100) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x68) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x6c) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x70) = 0x7f7fffff;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180469940(void)
void FUN_180469940(void)

{
  int64_t lVar1;
  int32_t *unaff_RSI;
  int64_t unaff_RDI;
  
  lVar1 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x78,*(int8_t *)(unaff_RDI + 0x28));
  *(int32_t *)(lVar1 + 0x20) = *unaff_RSI;
  *(uint64_t *)(lVar1 + 0x24) = 0x3f800000;
  *(uint64_t *)(lVar1 + 0x2c) = 0;
  *(uint64_t *)(lVar1 + 0x34) = 0x3f80000000000000;
  *(uint64_t *)(lVar1 + 0x3c) = 0;
  *(int32_t *)(lVar1 + 0x44) = 0;
  *(int32_t *)(lVar1 + 0x48) = 0;
  *(int32_t *)(lVar1 + 0x4c) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x50) = 0;
  *(int32_t *)(lVar1 + 0x54) = 0;
  *(int32_t *)(lVar1 + 0x58) = 0;
  *(int32_t *)(lVar1 + 0x5c) = 0;
  *(int32_t *)(lVar1 + 0x60) = 0x3f800000;
  *(int32_t *)(lVar1 + 100) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x68) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x6c) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x70) = 0x7f7fffff;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1);
}





// 函数: void FUN_1804699c3(void)
void FUN_1804699c3(void)

{
  uint64_t unaff_RBX;
  uint64_t *unaff_R14;
  
  *unaff_R14 = unaff_RBX;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804699e0(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
void FUN_1804699e0(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
                  int *param_5)

{
  int64_t lVar1;
  int64_t lVar2;
  int32_t uVar3;
  
  if ((((char)param_4 == '\0') && (param_3 != param_1)) && (*(int *)(param_3 + 0x20) <= *param_5)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  lVar1 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x58,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  *(int *)(lVar1 + 0x20) = *param_5;
  lVar2 = lVar1 + 0x28;
  *(uint64_t *)(lVar1 + 0x40) = 0;
  *(int32_t *)(lVar1 + 0x50) = 3;
  *(int64_t *)lVar2 = lVar2;
  *(int64_t *)(lVar1 + 0x30) = lVar2;
  *(uint64_t *)(lVar1 + 0x38) = 0;
  *(int8_t *)(lVar1 + 0x40) = 0;
  *(uint64_t *)(lVar1 + 0x48) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1,param_3,param_1,uVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180469ab0(int64_t param_1,int64_t param_2,uint64_t param_3)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  
  puVar2 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x78,*(int8_t *)(param_1 + 0x28));
  uVar1 = *(uint64_t *)(param_2 + 0x28);
  puVar2[4] = *(uint64_t *)(param_2 + 0x20);
  puVar2[5] = uVar1;
  uVar1 = *(uint64_t *)(param_2 + 0x38);
  puVar2[6] = *(uint64_t *)(param_2 + 0x30);
  puVar2[7] = uVar1;
  uVar1 = *(uint64_t *)(param_2 + 0x48);
  puVar2[8] = *(uint64_t *)(param_2 + 0x40);
  puVar2[9] = uVar1;
  uVar1 = *(uint64_t *)(param_2 + 0x58);
  puVar2[10] = *(uint64_t *)(param_2 + 0x50);
  puVar2[0xb] = uVar1;
  uVar1 = *(uint64_t *)(param_2 + 0x68);
  puVar2[0xc] = *(uint64_t *)(param_2 + 0x60);
  puVar2[0xd] = uVar1;
  *(int32_t *)(puVar2 + 0xe) = *(int32_t *)(param_2 + 0x70);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = param_3;
  *(int8_t *)(puVar2 + 3) = *(int8_t *)(param_2 + 0x18);
  return puVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180469b30(int64_t param_1,uint64_t param_2,int64_t param_3,char param_4,float *param_5)
void FUN_180469b30(int64_t param_1,uint64_t param_2,int64_t param_3,char param_4,float *param_5)

{
  int64_t lVar1;
  int32_t uVar2;
  
  if (((param_4 != '\0') || (param_3 == param_1)) ||
     (*param_5 <= *(float *)(param_3 + 0x20) && *(float *)(param_3 + 0x20) != *param_5)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  lVar1 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x78,*(int8_t *)(param_1 + 0x28));
  *(float *)(lVar1 + 0x20) = *param_5;
  *(uint64_t *)(lVar1 + 0x24) = 0x3f800000;
  *(uint64_t *)(lVar1 + 0x2c) = 0;
  *(uint64_t *)(lVar1 + 0x34) = 0x3f80000000000000;
  *(uint64_t *)(lVar1 + 0x3c) = 0;
  *(int32_t *)(lVar1 + 0x44) = 0;
  *(int32_t *)(lVar1 + 0x48) = 0;
  *(int32_t *)(lVar1 + 0x4c) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x50) = 0;
  *(int32_t *)(lVar1 + 0x54) = 0;
  *(int32_t *)(lVar1 + 0x58) = 0;
  *(int32_t *)(lVar1 + 0x5c) = 0;
  *(int32_t *)(lVar1 + 0x60) = 0x3f800000;
  *(int32_t *)(lVar1 + 100) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x68) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x6c) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x70) = 0x7f7fffff;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1,param_3,param_1,uVar2);
}



uint64_t FUN_180469c10(uint64_t param_1,uint64_t param_2)

{
  FUN_180469c50();
  if ((param_2 & 1) != 0) {
    free(param_1,600);
  }
  return param_1;
}





// 函数: void FUN_180469c50(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180469c50(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint uVar4;
  uint64_t uVar6;
  uint64_t uVar5;
  
  *param_1 = &unknown_var_1728_ptr;
  uVar5 = 0;
  plVar1 = param_1 + 0x1a;
  lVar3 = *plVar1;
  uVar6 = uVar5;
  if (param_1[0x1b] - lVar3 >> 3 != 0) {
    do {
      lVar3 = *(int64_t *)(lVar3 + uVar6);
      if (lVar3 != 0) {
        if (*(int64_t *)(lVar3 + 0xd0) == 0) {
          *(uint64_t *)(lVar3 + 0xd0) = 0;
                    // WARNING: Subroutine does not return
          CoreMemoryPoolInitializer(lVar3);
        }
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *(uint64_t *)(uVar6 + *plVar1) = 0;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar4;
      lVar3 = *plVar1;
      uVar6 = uVar6 + 8;
    } while ((uint64_t)(int64_t)(int)uVar4 < (uint64_t)(param_1[0x1b] - lVar3 >> 3));
  }
  param_1[0x38] = &system_state_ptr;
  puVar2 = (uint64_t *)param_1[0x32];
  if (puVar2 == (uint64_t *)0x0) {
    if ((int64_t *)param_1[0x2d] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)param_1[0x2d] + 0x38))();
    }
    if ((int64_t *)param_1[0x2c] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)param_1[0x2c] + 0x38))();
    }
    if ((int64_t *)param_1[0x2b] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)param_1[0x2b] + 0x38))();
    }
    if ((int64_t *)param_1[0x2a] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)param_1[0x2a] + 0x38))();
    }
    if ((int64_t *)param_1[0x29] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)param_1[0x29] + 0x38))();
    }
    if ((int64_t *)param_1[0x28] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)param_1[0x28] + 0x38))();
    }
    if ((int64_t *)param_1[0x27] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)param_1[0x27] + 0x38))();
    }
    FUN_180057830();
    if (param_1[0x1f] == 0) {
      if (*plVar1 == 0) {
        param_1[0xf] = &system_state_ptr;
        if ((code *)param_1[0xc] != (code *)0x0) {
          (*(code *)param_1[0xc])(param_1 + 10,0,0);
        }
        if ((code *)param_1[8] != (code *)0x0) {
          (*(code *)param_1[8])(param_1 + 6,0,0);
        }
        if ((code *)param_1[4] != (code *)0x0) {
          (*(code *)param_1[4])(param_1 + 2,0,0);
        }
        *param_1 = &system_handler2_ptr;
        *param_1 = &system_handler1_ptr;
        return;
      }
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  FUN_1801e85e0(param_1 + 0x30,*puVar2,param_3,param_4,0xfffffffffffffffe);
  FUN_18004b730();
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(puVar2);
}



uint64_t *
FUN_180469ec0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0x1b;
  strcpy_s(param_2[1],0x80,&unknown_var_1824_ptr,param_4,0,0xfffffffffffffffe);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_180469f40(int64_t *param_1,int64_t param_2,int64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  void *puVar4;
  uint64_t uVar5;
  int64_t *plStack_38;
  int32_t uStack_30;
  int64_t *plStack_28;
  int32_t uStack_20;
  
  uVar5 = 0xfffffffffffffffe;
  *param_1 = (int64_t)&system_handler1_ptr;
  *param_1 = (int64_t)&system_handler2_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = (int64_t)&unknown_var_4912_ptr;
  param_1[3] = 0;
  plVar1 = param_1 + 4;
  param_1[7] = 0;
  *(int32_t *)(param_1 + 9) = 3;
  *plVar1 = (int64_t)plVar1;
  param_1[5] = (int64_t)plVar1;
  param_1[6] = 0;
  *(int8_t *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *param_1 = (int64_t)&unknown_var_1864_ptr;
  *(int32_t *)(param_1 + 10) = 0;
  lVar3 = param_1[3];
  if (param_1[3] != param_2) {
    lVar3 = param_2;
  }
  param_1[3] = lVar3;
  param_1[2] = param_3;
  uStack_30 = (**(code **)(*param_1 + 8))(param_1);
  plStack_28 = (int64_t *)param_1[3];
  plStack_38 = param_1;
  if (plStack_28 == (int64_t *)0x0) {
    uStack_20 = 0xffffffff;
  }
  else {
    uStack_20 = (**(code **)(*plStack_28 + 8))(plStack_28);
  }
  puVar4 = &system_buffer_ptr;
  if (*(void **)(param_1[2] + 0x10) != (void *)0x0) {
    puVar4 = *(void **)(param_1[2] + 0x10);
  }
  iVar2 = (**(code **)(render_system_data_config + 0xc0))(puVar4,&plStack_28,&plStack_38,param_4,uVar5);
  if ((iVar2 != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x30))(iVar2);
  }
  if (((int)param_1[10] != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x18))();
  }
  *(int *)(param_1 + 10) = iVar2;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18046a090(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_1864_ptr;
  if ((*(int *)(param_1 + 10) != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x18))();
  }
  *param_1 = &unknown_var_4912_ptr;
  FUN_1802f5b10(param_1 + 4,param_1[6],param_3,param_4,uVar1);
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x58);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18046a190(int64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18046a190(int64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  bool bVar2;
  int iVar3;
  int iStackX_18;
  int32_t uVar5;
  uint64_t uVar6;
  int iVar4;
  
  uVar6 = 0xfffffffffffffffe;
  iVar4 = 0;
  iVar3 = 0;
  uVar5 = 0;
  if (system_data_ecee != '\0') {
    return;
  }
  lVar1 = *(int64_t *)(param_1 + 0x18);
  if (*(int64_t *)(lVar1 + 0x20) != 0) {
    uVar5 = 1;
    iStackX_18 = iVar4;
    iVar4 = 1;
    if (*(int *)(param_1 + 0x50) != 0) {
      bVar2 = true;
      goto LAB_18046a1ec;
    }
  }
  iVar3 = iStackX_18;
  bVar2 = false;
LAB_18046a1ec:
  if (((iVar4 != 0) && (uVar5 = 0, iVar3 != 0)) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x18))();
  }
  if (bVar2) {
    (**(code **)(render_system_data_config + 0x198))
              (*(int32_t *)(param_1 + 0x50),param_2,param_3,param_4,uVar5,uVar6);
    FUN_1802f3df0(lVar1,param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18046a320(int64_t param_1,int64_t param_2,int8_t param_3)
void FUN_18046a320(int64_t param_1,int64_t param_2,int8_t param_3)

{
  int64_t lVar1;
  void *puVar2;
  void *puVar3;
  int aiStackX_8 [2];
  int *piStackX_10;
  int aiStackX_18 [2];
  int *piStackX_20;
  uint64_t uVar4;
  int *piVar5;
  
  uVar4 = 0xfffffffffffffffe;
  lVar1 = *(int64_t *)(param_1 + 0x10);
  piStackX_10 = aiStackX_8;
  aiStackX_8[0] = *(int *)(param_2 + 0x50);
  if ((aiStackX_8[0] != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x30))();
  }
  piStackX_20 = aiStackX_8;
  piVar5 = aiStackX_18;
  aiStackX_18[0] = *(int *)(param_1 + 0x50);
  if ((aiStackX_18[0] != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x30))();
  }
  puVar2 = *(void **)(lVar1 + 0x10);
  puVar3 = &system_buffer_ptr;
  if (puVar2 != (void *)0x0) {
    puVar3 = puVar2;
  }
  (**(code **)(render_system_data_config + 0xb8))
            (aiStackX_18[0],aiStackX_8[0],puVar3,param_3,uVar4,piVar5,aiStackX_18);
  if ((aiStackX_18[0] != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x18))();
  }
  if ((aiStackX_8[0] != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x18))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18046a410(int64_t param_1,int64_t param_2,uint64_t param_3,int32_t param_4,
void FUN_18046a410(int64_t param_1,int64_t param_2,uint64_t param_3,int32_t param_4,
                  int8_t param_5)

{
  void *puVar1;
  int aiStackX_8 [2];
  int *piStackX_10;
  
  piStackX_10 = aiStackX_8;
  aiStackX_8[0] = *(int *)(param_1 + 0x50);
  if ((aiStackX_8[0] != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x30))();
  }
  puVar1 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar1 = *(void **)(param_2 + 8);
  }
  (**(code **)(render_system_data_config + 0xf0))(aiStackX_8[0],puVar1,param_3,param_4,param_5);
  if ((aiStackX_8[0] != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x18))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18046a4d0(int64_t param_1,int64_t param_2,uint64_t param_3,int32_t param_4)
void FUN_18046a4d0(int64_t param_1,int64_t param_2,uint64_t param_3,int32_t param_4)

{
  void *puVar1;
  int aiStackX_8 [2];
  int *piStackX_10;
  uint64_t uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  piStackX_10 = aiStackX_8;
  aiStackX_8[0] = *(int *)(param_1 + 0x50);
  if ((aiStackX_8[0] != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x30))();
  }
  puVar1 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar1 = *(void **)(param_2 + 8);
  }
  (**(code **)(render_system_data_config + 0xd8))(aiStackX_8[0],param_3,puVar1,param_4,uVar2,aiStackX_8);
  if ((aiStackX_8[0] != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x18))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18046a580(int64_t param_1,int64_t param_2,uint64_t param_3)
void FUN_18046a580(int64_t param_1,int64_t param_2,uint64_t param_3)

{
  void *puVar1;
  int64_t lVar2;
  void *puVar3;
  void *puVar4;
  int16_t auStackX_8 [4];
  void *puStack_30;
  int64_t lStack_28;
  
  puVar4 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar4 = *(void **)(param_2 + 8);
  }
  puVar1 = *(void **)(*(int64_t *)(param_1 + 0x10) + 0x10);
  puVar3 = &system_buffer_ptr;
  if (puVar1 != (void *)0x0) {
    puVar3 = puVar1;
  }
  lVar2 = (**(code **)(system_cache_buffer + 0x98))(puVar3,puVar4,param_3,puVar1,0xfffffffffffffffe);
  puVar4 = &system_buffer_ptr;
  if (*(void **)(lVar2 + 8) != (void *)0x0) {
    puVar4 = *(void **)(lVar2 + 8);
  }
  CoreMemoryPoolValidator(&puStack_30,puVar4);
  auStackX_8[0] = 0x20;
  if (lStack_28 != 0) {
    FUN_180057980(&puStack_30,param_3,auStackX_8);
  }
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



