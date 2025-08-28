#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part075.c - 6 个函数

// 函数: void FUN_18030b270(int64_t param_1,int64_t *param_2)
void FUN_18030b270(int64_t param_1,int64_t *param_2)

{
  float *pfVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  plVar2 = *(int64_t **)(param_1 + 0x48);
  *(int64_t **)(param_1 + 0x48) = param_2;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *(int32_t *)(param_1 + 0x30) = 0xffffffff;
  if (*(int64_t *)(param_1 + 0x48) == 0) {
    *(uint64_t *)(param_1 + 0x84) = 0;
    *(uint64_t *)(param_1 + 0x8c) = 0;
    *(uint64_t *)(param_1 + 0x94) = 0;
    *(uint64_t *)(param_1 + 0x9c) = 0;
    *(uint64_t *)(param_1 + 0xa4) = 0;
    *(uint64_t *)(param_1 + 0xac) = 0;
    *(int32_t *)(param_1 + 0xb4) = 0;
    return;
  }
  (**(code **)(*param_2 + 0x1e0))(param_2,*(uint64_t *)(param_1 + 0x28));
  if (*(code **)(*param_2 + 0x198) == (code *)&rendering_buffer_2544_ptr) {
    puVar4 = (uint64_t *)((int64_t)param_2 + 0x214);
  }
  else {
    puVar4 = (uint64_t *)(**(code **)(*param_2 + 0x198))(param_2);
  }
  pfVar1 = (float *)(param_1 + 0x84);
  uVar3 = puVar4[1];
  *(uint64_t *)pfVar1 = *puVar4;
  *(uint64_t *)(param_1 + 0x8c) = uVar3;
  uVar3 = puVar4[3];
  *(uint64_t *)(param_1 + 0x94) = puVar4[2];
  *(uint64_t *)(param_1 + 0x9c) = uVar3;
  uVar3 = puVar4[5];
  *(uint64_t *)(param_1 + 0xa4) = puVar4[4];
  *(uint64_t *)(param_1 + 0xac) = uVar3;
  *(int32_t *)(param_1 + 0xb4) = *(int32_t *)(puVar4 + 6);
  fVar7 = (*(float *)(param_1 + 0x94) - *(float *)(param_1 + 0xa4)) * 0.05;
  if (fVar7 <= 0.05) {
    fVar7 = 0.05;
  }
  fVar6 = (*(float *)(param_1 + 0x98) - *(float *)(param_1 + 0xa8)) * 0.05;
  if (fVar6 <= 0.05) {
    fVar6 = 0.05;
  }
  fVar5 = (*(float *)(param_1 + 0x9c) - *(float *)(param_1 + 0xac)) * 0.05;
  if (fVar5 <= 0.05) {
    fVar5 = 0.05;
  }
  *(float *)(param_1 + 0x94) = fVar7 + *(float *)(param_1 + 0x94);
  *(float *)(param_1 + 0x98) = fVar6 + *(float *)(param_1 + 0x98);
  *(float *)(param_1 + 0x9c) = fVar5 + *(float *)(param_1 + 0x9c);
  *pfVar1 = *pfVar1 - fVar7;
  *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x88) - fVar6;
  *(float *)(param_1 + 0x8c) = *(float *)(param_1 + 0x8c) - fVar5;
  fVar7 = *(float *)(param_1 + 0x94);
  if (*pfVar1 <= fVar7) {
    fVar6 = (fVar7 + *pfVar1) * 0.5;
    *(float *)(param_1 + 0xa4) = fVar6;
    *(float *)(param_1 + 0xa8) = (*(float *)(param_1 + 0x98) + *(float *)(param_1 + 0x88)) * 0.5;
    *(float *)(param_1 + 0xac) = (*(float *)(param_1 + 0x9c) + *(float *)(param_1 + 0x8c)) * 0.5;
    *(int32_t *)(param_1 + 0xb0) = 0x7f7fffff;
    fVar7 = fVar7 - fVar6;
    fVar6 = *(float *)(param_1 + 0x9c) - *(float *)(param_1 + 0xac);
    fVar5 = *(float *)(param_1 + 0x98) - *(float *)(param_1 + 0xa8);
    *(float *)(param_1 + 0xb4) = SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6);
    return;
  }
  *(int32_t *)(param_1 + 0xb4) = 0;
  pfVar1[0] = 0.0;
  pfVar1[1] = 0.0;
  *(uint64_t *)(param_1 + 0x8c) = 0;
  *(uint64_t *)(param_1 + 0x94) = 0;
  *(uint64_t *)(param_1 + 0x9c) = 0;
  *(uint64_t *)(param_1 + 0xa4) = 0;
  *(uint64_t *)(param_1 + 0xac) = 0;
  return;
}



uint64_t * FUN_18030b420(uint64_t *param_1,uint64_t param_2,int8_t param_3)

{
  *param_1 = &system_handler1_ptr;
  *param_1 = &system_handler2_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &processed_var_768_ptr;
  *(int32_t *)(param_1 + 2) = 4;
  param_1[3] = 0;
  param_1[4] = 0;
  *(int32_t *)(param_1 + 1) = 0;
  param_1[5] = 0;
  *param_1 = &processed_var_4384_ptr;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(int32_t *)(param_1 + 0xd) = 3;
  *(int32_t *)((int64_t)param_1 + 0xb4) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x84) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x8c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x94) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x9c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0xa4) = 0;
  *(uint64_t *)((int64_t)param_1 + 0xac) = 0;
  *(int32_t *)(param_1 + 6) = 0xffffffff;
  *(int16_t *)((int64_t)param_1 + 0x41) = 0;
  *(int8_t *)((int64_t)param_1 + 0x43) = param_3;
  *(int8_t *)((int64_t)param_1 + 0x44) = 1;
  *(int32_t *)((int64_t)param_1 + 0xbc) = 0;
  *(int8_t *)(param_1 + 8) = 0;
  *(int8_t *)(param_1 + 0x18) = 0;
  *(int32_t *)(param_1 + 0xe) = 0;
  *(int32_t *)((int64_t)param_1 + 0x74) = 0;
  *(int32_t *)(param_1 + 0xf) = 0;
  *(int32_t *)((int64_t)param_1 + 0x7c) = 0;
  *(int32_t *)(param_1 + 0x10) = 0;
  *(int32_t *)(param_1 + 0x17) = 0x3f800000;
  FUN_18030b270(param_1);
  return param_1;
}



uint64_t *
FUN_18030b510(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &processed_var_4384_ptr;
  if (param_1[10] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  if ((int64_t *)param_1[9] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[9] + 0x38))();
  }
  if ((int64_t *)param_1[7] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[7] + 0x38))();
  }
  *param_1 = &processed_var_768_ptr;
  param_1[5] = 0;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,200,param_3,param_4,uVar1);
  }
  return param_1;
}



uint64_t FUN_18030b610(int64_t param_1)

{
  void *puVar1;
  uint64_t uVar2;
  
  puVar1 = (void *)**(uint64_t **)(param_1 + 0x48);
  if (puVar1 == &processed_var_9304_ptr) {
    return (uint64_t)*(uint *)(*(uint64_t **)(param_1 + 0x48) + 0x42);
  }
  uVar2 = (**(code **)(puVar1 + 0x130))();
  return uVar2;
}



uint64_t * FUN_18030b650(int64_t param_1)

{
  void *puVar1;
  uint64_t *puVar2;
  
  puVar1 = (void *)**(uint64_t **)(param_1 + 0x48);
  if (puVar1 == &processed_var_9304_ptr) {
    return *(uint64_t **)(param_1 + 0x48) + 0x66;
  }
  puVar2 = (uint64_t *)(**(code **)(puVar1 + 0x158))();
  return puVar2;
}





// 函数: void FUN_18030b680(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,
void FUN_18030b680(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,
                  int32_t param_5)

{
  uint64_t *puVar1;
  char *pcVar2;
  uint64_t uVar4;
  char *pcVar3;
  
  puVar1 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x60);
  uVar4 = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  *(int32_t *)(puVar1 + 5) = 1;
  puVar1[6] = 0;
  puVar1[8] = 0;
  pcVar2 = "cloth_simulator";
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar2 != '\0');
  *puVar1 = &system_data_9de8;
  puVar1[2] = pcVar3 + -0x180a09de7;
  if (param_4 != 0) {
    uVar4 = *(uint64_t *)(param_4 + 0x48);
  }
  (**(code **)(**(int64_t **)(param_1 + 0x48) + 0x70))
            (*(int64_t **)(param_1 + 0x48),param_2,puVar1,uVar4,param_5);
  if (*(int64_t *)(param_3 + 0x30) == 0) {
    puVar1[10] = 0;
    *(uint64_t **)(param_3 + 0x30) = puVar1;
  }
  else {
    puVar1[10] = *(uint64_t *)(param_3 + 0x38);
    *(uint64_t **)(*(int64_t *)(param_3 + 0x38) + 0x58) = puVar1;
  }
  *(uint64_t **)(param_3 + 0x38) = puVar1;
  puVar1[4] = param_3;
  puVar1[0xb] = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18030b780(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18030b780(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  char *pcVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  char *pcVar7;
  void *puStack_40;
  int64_t lStack_38;
  int iStack_30;
  uint64_t uStack_28;
  char *pcVar8;
  
  lVar1 = FUN_18005d4b0(param_2,&system_data_9d80,0,param_4,0xfffffffffffffffe);
  if (lVar1 != 0) {
    puStack_40 = &system_data_buffer_ptr;
    uStack_28 = 0;
    lStack_38 = 0;
    iStack_30 = 0;
    pcVar7 = "name";
    do {
      pcVar8 = pcVar7;
      pcVar7 = pcVar8 + 1;
    } while (*pcVar7 != '\0');
    puVar6 = *(uint64_t **)(lVar1 + 0x40);
    if (puVar6 != (uint64_t *)0x0) {
      do {
        pcVar7 = (char *)*puVar6;
        if (pcVar7 == (char *)0x0) {
          pcVar7 = (char *)0x180d48d24;
          pcVar4 = (char *)0x0;
        }
        else {
          pcVar4 = (char *)puVar6[2];
        }
        if (pcVar4 == pcVar8 + -0x180a03a83) {
          pcVar4 = pcVar4 + (int64_t)pcVar7;
          if (pcVar4 <= pcVar7) {
LAB_18030b860:
            lVar5 = 0x180d48d24;
            if (puVar6[1] != 0) {
              lVar5 = puVar6[1];
            }
            CoreSystem_ConfigValidator0(&puStack_40,lVar5);
            break;
          }
          lVar5 = (int64_t)&system_data_3a84 - (int64_t)pcVar7;
          while (*pcVar7 == pcVar7[lVar5]) {
            pcVar7 = pcVar7 + 1;
            if (pcVar4 <= pcVar7) goto LAB_18030b860;
          }
        }
        puVar6 = (uint64_t *)puVar6[6];
      } while (puVar6 != (uint64_t *)0x0);
    }
    if (iStack_30 < 1) {
      uVar2 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x3d0,8,0x16);
      plVar3 = (int64_t *)FUN_180275540(uVar2,*(int64_t *)(param_1 + 0x48) + 0x1f0,lVar1);
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3);
      }
      FUN_18030b270(param_1,plVar3);
    }
    else {
      uVar2 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x3d0,8,0x16);
      plVar3 = (int64_t *)FUN_180275370(uVar2,lVar1);
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3);
      }
      FUN_18030b270(param_1,plVar3);
    }
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    puStack_40 = &system_data_buffer_ptr;
    if (lStack_38 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18030b970(int64_t param_1,uint64_t *param_2)

{
  int8_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  
  uVar3 = CoreMemoryPoolReallocator(system_memory_pool_ptr,200,8,3,0,0xfffffffffffffffe);
  uVar1 = *(int8_t *)(param_1 + 0x43);
  uVar2 = *(uint64_t *)(param_1 + 0x48);
  uVar4 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x3d0,8,0x16);
  plVar5 = (int64_t *)RenderingSystem_ShaderManager(uVar4);
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  FUN_180275a60(uVar2,plVar5,1);
  plVar6 = (int64_t *)FUN_18030b420(uVar3,plVar5,uVar1);
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x38))(plVar5);
  }
  *param_2 = plVar6;
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
    (**(code **)(*plVar6 + 0x38))(plVar6);
  }
  return param_2;
}



uint64_t *
FUN_18030bac0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &system_data_buffer_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  CoreMemoryPoolProcessor(param_2,0xf,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (uint64_t *)param_2[1];
  *puVar1 = 0x69735f68746f6c63;
  puVar1[1] = 0x726f74616c756d;
  *(int32_t *)(param_2 + 2) = 0xf;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18030bb40(uint64_t param_1,int64_t param_2,uint64_t param_3,int8_t param_4)
void FUN_18030bb40(uint64_t param_1,int64_t param_2,uint64_t param_3,int8_t param_4)

{
  uint *puVar1;
  uint uVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  void *puStack_40;
  int64_t lStack_38;
  int32_t uStack_30;
  uint64_t uStack_28;
  
  puStack_40 = &system_data_buffer_ptr;
  uStack_28 = 0;
  lStack_38 = 0;
  uStack_30 = 0;
  uVar2 = **(uint **)(param_2 + 8);
  puVar1 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar1;
  if (uVar2 != 0) {
    FUN_180628f30(&puStack_40,puVar1,uVar2,param_4,0xfffffffffffffffe);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar2;
  }
  uVar3 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x3d0,8,3);
  plVar4 = (int64_t *)RenderingSystem_ShaderManager(uVar3);
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  (**(code **)(*plVar4 + 0x68))(plVar4,param_2);
  FUN_18030b270(param_1,plVar4);
  (**(code **)(*plVar4 + 0x38))(plVar4);
  puStack_40 = &system_data_buffer_ptr;
  if (lStack_38 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18030bc60(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18030bc60(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  int32_t *puVar2;
  void *puStack_38;
  int32_t *puStack_30;
  int32_t uStack_28;
  uint64_t uStack_20;
  
  puStack_38 = &system_data_buffer_ptr;
  uStack_20 = 0;
  puStack_30 = (int32_t *)0x0;
  uStack_28 = 0;
  puVar2 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13,param_4,0,0xfffffffffffffffe);
  *(int8_t *)puVar2 = 0;
  puStack_30 = puVar2;
  uVar1 = CoreMemoryPoolCleaner(puVar2);
  uStack_20 = CONCAT44(uStack_20._4_4_,uVar1);
  *puVar2 = 0x746f6c63;
  puVar2[1] = 0x69735f68;
  puVar2[2] = 0x616c756d;
  puVar2[3] = 0x726f74;
  uStack_28 = 0xf;
  System_QueueProcessor(param_2,&puStack_38);
  puStack_38 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager(puVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18030bd90(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_18030bd90(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  uint64_t uStackX_10;
  uint64_t *puStackX_18;
  
  if (*(int *)(SYSTEM_STATE_MANAGER + 0x624) != *(int *)(SYSTEM_STATE_MANAGER + 0x620)) {
    puStackX_18 = &uStackX_10;
    uStackX_10 = 0;
    FUN_1800f5a90(param_1,param_1,param_3,&uStackX_10,0xfffffffffffffffe);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



