#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part030.c - 7 个函数

// 函数: void FUN_1800748d0(int64_t param_1,int64_t *param_2)
void FUN_1800748d0(int64_t param_1,int64_t *param_2)

{
  int8_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t *puVar5;
  int8_t *puVar6;
  
  puVar5 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar5 + (4 - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  *puVar5 = 1;
  puVar5 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar5;
  if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 0x11) {
    System_BufferManager(param_2,(int64_t)puVar5 + (0x10 - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  uVar2 = *(int32_t *)(param_1 + 0x1c);
  uVar3 = *(int32_t *)(param_1 + 0x20);
  uVar4 = *(int32_t *)(param_1 + 0x24);
  *puVar5 = *(int32_t *)(param_1 + 0x18);
  puVar5[1] = uVar2;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  puVar6 = (int8_t *)(param_2[1] + 0x10);
  param_2[1] = (int64_t)puVar6;
  uVar1 = *(int8_t *)(param_1 + 0x28);
  if ((uint64_t)((*param_2 - (int64_t)puVar6) + param_2[2]) < 2) {
    System_BufferManager(param_2,puVar6 + (1 - *param_2));
    puVar6 = (int8_t *)param_2[1];
  }
  *puVar6 = uVar1;
  puVar5 = (int32_t *)(param_2[1] + 1);
  param_2[1] = (int64_t)puVar5;
  if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 0x11) {
    System_BufferManager(param_2,(int64_t)puVar5 + (0x10 - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  uVar2 = *(int32_t *)(param_1 + 0xc);
  uVar3 = *(int32_t *)(param_1 + 0x10);
  uVar4 = *(int32_t *)(param_1 + 0x14);
  *puVar5 = *(int32_t *)(param_1 + 8);
  puVar5[1] = uVar2;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  puVar5 = (int32_t *)(param_2[1] + 0x10);
  param_2[1] = (int64_t)puVar5;
  uVar2 = *(int32_t *)(param_1 + 0x2c);
  if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar5 + (4 - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  *puVar5 = uVar2;
  puVar5 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar5;
  uVar2 = *(int32_t *)(param_1 + 0x30);
  if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar5 + (4 - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  *puVar5 = uVar2;
  puVar5 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar5;
  uVar2 = *(int32_t *)(param_1 + 0x34);
  if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar5 + (4 - *param_2));
    *(int32_t *)param_2[1] = uVar2;
  }
  else {
    *puVar5 = uVar2;
  }
  param_2[1] = param_2[1] + 4;
  return;
}





// 函数: void FUN_180074a80(int64_t *param_1)
void FUN_180074a80(int64_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  
  plVar1 = (int64_t *)param_1[1];
  plVar2 = (int64_t *)*param_1;
  while( true ) {
    if (plVar2 == plVar1) {
      if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      return;
    }
    if (*(int64_t *)((int64_t)plVar2 + 0x12) != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)((int64_t)plVar2 + 0x12) = 0;
    if (*(int64_t *)((int64_t)plVar2 + 0x1a) != 0) break;
    *(uint64_t *)((int64_t)plVar2 + 0x1a) = 0;
    if (*plVar2 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *plVar2 = 0;
    if (plVar2[1] != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plVar2[1] = 0;
    plVar2 = (int64_t *)((int64_t)plVar2 + 0x24);
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





// 函数: void FUN_180074b30(int64_t *param_1,uint64_t param_2)
void FUN_180074b30(int64_t *param_1,uint64_t param_2)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t lVar5;
  
  plVar1 = (int64_t *)param_1[1];
  lVar5 = *param_1;
  uVar2 = ((int64_t)plVar1 - lVar5) / 0x24;
  if (uVar2 < param_2) {
    lVar4 = param_2 - uVar2;
    FUN_180074c20(param_1,lVar4,(int64_t)plVar1 - lVar5,lVar4,0xfffffffffffffffe);
  }
  else {
    plVar3 = (int64_t *)(param_2 * 0x24 + lVar5);
    if (plVar3 != plVar1) {
      do {
        if (*(int64_t *)((int64_t)plVar3 + 0x12) != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *(uint64_t *)((int64_t)plVar3 + 0x12) = 0;
        if (*(int64_t *)((int64_t)plVar3 + 0x1a) != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *(uint64_t *)((int64_t)plVar3 + 0x1a) = 0;
        if (*plVar3 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *plVar3 = 0;
        if (plVar3[1] != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        plVar3[1] = 0;
        plVar3 = (int64_t *)((int64_t)plVar3 + 0x24);
      } while (plVar3 != plVar1);
      lVar5 = *param_1;
    }
    param_1[1] = param_2 * 0x24 + lVar5;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180074c20(uint64_t *param_1,uint64_t param_2)
void FUN_180074c20(uint64_t *param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  uint64_t uVar9;
  
  puVar7 = (uint64_t *)param_1[1];
  if ((uint64_t)((param_1[2] - (int64_t)puVar7) / 0x24) < param_2) {
    puVar3 = (uint64_t *)*param_1;
    lVar8 = ((int64_t)puVar7 - (int64_t)puVar3) / 0x24;
    uVar9 = lVar8 * 2;
    if (lVar8 == 0) {
      uVar9 = 1;
    }
    if (uVar9 < lVar8 + param_2) {
      uVar9 = lVar8 + param_2;
    }
    plVar1 = (int64_t *)0x0;
    if (uVar9 != 0) {
      plVar1 = (int64_t *)
               CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar9 * 0x24,*(int8_t *)(param_1 + 3),puVar7,
                             0xfffffffffffffffe);
      puVar7 = (uint64_t *)param_1[1];
      puVar3 = (uint64_t *)*param_1;
    }
    plVar2 = plVar1;
    if (puVar3 != puVar7) {
      lVar8 = (int64_t)plVar1 - (int64_t)puVar3;
      plVar4 = (int64_t *)((int64_t)puVar3 + 0x1a);
      do {
        *(int16_t *)(lVar8 + -10 + (int64_t)plVar4) = *(int16_t *)((int64_t)plVar4 + -10);
        if (*(int64_t *)((int64_t)plVar4 + -0x12) == 0) {
          *(uint64_t *)(lVar8 + -0x12 + (int64_t)plVar4) = 0;
        }
        else {
          *(int64_t *)(lVar8 + -0x12 + (int64_t)plVar4) = *(int64_t *)((int64_t)plVar4 + -0x12);
          *(uint64_t *)((int64_t)plVar4 + -0x12) = 0;
        }
        if (*(int64_t *)((int64_t)plVar4 + -0x1a) == 0) {
          *plVar2 = 0;
        }
        else {
          *plVar2 = *(int64_t *)((int64_t)plVar4 + -0x1a);
          *(uint64_t *)((int64_t)plVar4 + -0x1a) = 0;
        }
        *(int16_t *)((int64_t)plVar4 + -10) = 0;
        *(short *)(lVar8 + 8 + (int64_t)plVar4) = (short)plVar4[1];
        if (*plVar4 == 0) {
          *(uint64_t *)((int64_t)plVar4 + lVar8) = 0;
        }
        else {
          *(int64_t *)((int64_t)plVar4 + lVar8) = *plVar4;
          *plVar4 = 0;
        }
        if (plVar4[-1] == 0) {
          *(uint64_t *)(lVar8 + -8 + (int64_t)plVar4) = 0;
        }
        else {
          *(int64_t *)(lVar8 + -8 + (int64_t)plVar4) = plVar4[-1];
          plVar4[-1] = 0;
        }
        *(int16_t *)(plVar4 + 1) = 0;
        plVar2 = (int64_t *)((int64_t)plVar2 + 0x24);
        puVar3 = (uint64_t *)((int64_t)plVar4 + 10);
        plVar4 = (int64_t *)((int64_t)plVar4 + 0x24);
      } while (puVar3 != puVar7);
    }
    if (param_2 != 0) {
      puVar7 = (uint64_t *)((int64_t)plVar2 + 0x1a);
      uVar6 = param_2;
      do {
        puVar7[-1] = 0;
        *puVar7 = 0;
        *(int16_t *)(puVar7 + 1) = 0;
        *(int16_t *)((int64_t)puVar7 + -10) = 0;
        *(uint64_t *)((int64_t)puVar7 + -0x1a) = 0;
        *(uint64_t *)((int64_t)puVar7 + -0x12) = 0;
        *(int16_t *)(puVar7 + 1) = 0;
        puVar7[-1] = 0;
        *puVar7 = 0;
        puVar7 = (uint64_t *)((int64_t)puVar7 + 0x24);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    plVar4 = (int64_t *)param_1[1];
    plVar5 = (int64_t *)*param_1;
    if (plVar5 != plVar4) {
      do {
        if (*(int64_t *)((int64_t)plVar5 + 0x12) != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *(uint64_t *)((int64_t)plVar5 + 0x12) = 0;
        if (*(int64_t *)((int64_t)plVar5 + 0x1a) != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *(uint64_t *)((int64_t)plVar5 + 0x1a) = 0;
        if (*plVar5 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *plVar5 = 0;
        if (plVar5[1] != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        plVar5[1] = 0;
        plVar5 = (int64_t *)((int64_t)plVar5 + 0x24);
      } while (plVar5 != plVar4);
      plVar5 = (int64_t *)*param_1;
    }
    if (plVar5 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(plVar5);
    }
    *param_1 = plVar1;
    param_1[1] = (int64_t)plVar2 + param_2 * 0x24;
    param_1[2] = (int64_t)plVar1 + uVar9 * 0x24;
  }
  else {
    if (param_2 != 0) {
      puVar3 = (uint64_t *)((int64_t)puVar7 + 0x1a);
      uVar9 = param_2;
      do {
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        *(int32_t *)(puVar7 + 4) = 0;
        *(int16_t *)((int64_t)puVar3 + -10) = 0;
        *puVar7 = 0;
        *(uint64_t *)((int64_t)puVar3 + -0x12) = 0;
        *(int16_t *)(puVar3 + 1) = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        puVar7 = (uint64_t *)((int64_t)puVar7 + 0x24);
        puVar3 = (uint64_t *)((int64_t)puVar3 + 0x24);
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      puVar7 = (uint64_t *)param_1[1];
    }
    param_1[1] = (int64_t)puVar7 + param_2 * 0x24;
  }
  return;
}





// 函数: void FUN_180074ed0(int64_t *param_1)
void FUN_180074ed0(int64_t *param_1)

{
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *param_1 = 0;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[1] = 0;
  return;
}



uint64_t *
FUN_180074f20(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &processed_var_5192_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x38,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t * FUN_180074f70(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &processed_var_5192_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



uint64_t *
FUN_180074fb0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &memory_allocator_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 7;
  strcpy_s(param_2[1],0x80,&processed_var_5216_ptr,param_4,0,0xfffffffffffffffe);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180075030(uint64_t *param_1,char param_2,char param_3)

{
  int64_t *plVar1;
  byte bVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  
  *param_1 = &system_handler1_ptr;
  *param_1 = &system_handler2_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &processed_var_8584_ptr;
  param_1[2] = &system_state_ptr;
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 0;
  param_1[2] = &memory_allocator_3432_ptr;
  param_1[3] = param_1 + 5;
  *(int32_t *)(param_1 + 4) = 0;
  *(int8_t *)(param_1 + 5) = 0;
  *(int8_t *)((int64_t)param_1 + 0xb2) = 0;
  *(int32_t *)(param_1 + 1) = 0;
  *(int16_t *)(param_1 + 0x16) = 0;
  param_1[0x15] = 0;
  *param_1 = &processed_var_7328_ptr;
  func_0x000180086550(param_1 + 0x19);
  *(int32_t *)(param_1 + 0x1e) = 0;
  LOCK();
  *(int32_t *)(param_1 + 0x1d) = 0;
  UNLOCK();
  LOCK();
  *(int8_t *)((int64_t)param_1 + 0xec) = 0;
  UNLOCK();
  *(int32_t *)(param_1 + 0x1e) = 0;
  param_1[0x23] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3e] = param_1;
  param_1[0x3d] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(int32_t *)(param_1 + 0x46) = 3;
  param_1[0x4d] = 0;
  *(int32_t *)((int64_t)param_1 + 0x2a4) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x274) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x27c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x284) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x28c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x294) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x29c) = 0;
  *(int16_t *)(param_1 + 0x5d) = 0;
  param_1[0x5c] = 0;
  *(int32_t *)((int64_t)param_1 + 0x2ec) = 0xffffffff;
  *(int16_t *)(param_1 + 0x5f) = 0;
  param_1[0x5e] = 0;
  *(int32_t *)((int64_t)param_1 + 0x2fc) = 0xffffffff;
  *(byte *)((int64_t)param_1 + 0xfd) = *(byte *)((int64_t)param_1 + 0xfd) & 0xfb;
  *(byte *)((int64_t)param_1 + 0xfd) = *(byte *)((int64_t)param_1 + 0xfd) | param_2 << 2;
  param_1[0x15] = 0;
  *(int32_t *)(param_1 + 0x17) = 0;
  *(int32_t *)((int64_t)param_1 + 0xbc) = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  *(int32_t *)((int64_t)param_1 + 0xc4) = 0;
  *(byte *)((int64_t)param_1 + 0xfe) = *(byte *)((int64_t)param_1 + 0xfe) & 0xfe;
  *(int8_t *)((int64_t)param_1 + 0xfc) = 0;
  plVar4 = (int64_t *)param_1[0x36];
  param_1[0x36] = 0;
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  if (param_3 == '\0') {
    *(byte *)((int64_t)param_1 + 0xfd) = *(byte *)((int64_t)param_1 + 0xfd) & 0xdf;
  }
  else {
    *(byte *)((int64_t)param_1 + 0xfd) = *(byte *)((int64_t)param_1 + 0xfd) | 0x20;
  }
  *(byte *)((int64_t)param_1 + 0xfd) = *(byte *)((int64_t)param_1 + 0xfd) & 0xbf;
  *(int8_t *)((int64_t)param_1 + 0xff) = 1;
  plVar4 = (int64_t *)param_1[0x37];
  param_1[0x37] = 0;
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  *(int8_t *)((int64_t)param_1 + 0xf4) = 0;
  *(int32_t *)(param_1 + 0x20) = 0;
  *(int8_t *)((int64_t)param_1 + 0xf7) = 0;
  *(byte *)((int64_t)param_1 + 0xfd) = *(byte *)((int64_t)param_1 + 0xfd) & 0x6d;
  plVar3 = (int64_t *)param_1[0x38];
  param_1[0x38] = 0;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  bVar2 = *(byte *)((int64_t)param_1 + 0xfd) & 0xf7;
  *(byte *)((int64_t)param_1 + 0xfd) = bVar2;
  param_1[0x47] = 0x3f8000003f800000;
  param_1[0x48] = 0x3f8000003f800000;
  param_1[0x49] = 0x3f8000003f800000;
  param_1[0x4a] = 0x3f8000003f800000;
  *(int32_t *)(param_1 + 0x4c) = 0x3f800000;
  param_1[0x24] = 0x3f800000;
  param_1[0x25] = 0;
  param_1[0x26] = 0x3f80000000000000;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0x3f800000;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0x3f80000000000000;
  param_1[0x2c] = 0x3f800000;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x3f80000000000000;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0x3f800000;
  param_1[0x32] = 0;
  param_1[0x33] = 0x3f80000000000000;
  *(byte *)((int64_t)param_1 + 0xfd) = bVar2 | 1;
  *(byte *)((int64_t)param_1 + 0xfe) = *(byte *)((int64_t)param_1 + 0xfe) | 2;
  *(int32_t *)(param_1 + 0x4e) = 0x21;
  *(int32_t *)((int64_t)param_1 + 0x104) = 0x80;
  *(int8_t *)((int64_t)param_1 + 0xf6) = 0;
  *(int16_t *)((int64_t)param_1 + 0xfa) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x204) = 0;
  param_1[0x3f] = 0;
  *(int32_t *)(param_1 + 0x40) = 0;
  *(int32_t *)(param_1 + 0x5b) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x2dc) = 0xbf800000;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(int32_t *)(param_1 + 0x19) = 0;
  *(int32_t *)((int64_t)param_1 + 0xcc) = 0;
  *(int32_t *)(param_1 + 0x1a) = 0;
  *(int32_t *)((int64_t)param_1 + 0xd4) = 0x7f7fffff;
  *(int32_t *)(param_1 + 0x1b) = 0;
  *(int32_t *)((int64_t)param_1 + 0xdc) = 0;
  *(int32_t *)(param_1 + 0x1c) = 0;
  *(int32_t *)((int64_t)param_1 + 0xe4) = 0x7f7fffff;
  *(int32_t *)(param_1 + 0x21) = 0xffffffff;
  param_1[0x5a] = 0;
  if (param_2 == '\0') {
    plVar1 = (int64_t *)param_1[0x42];
    param_1[0x42] = 0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))(plVar1,0);
    }
  }
  *(int8_t *)(param_1 + 0x1f) = 0;
  *(int32_t *)(param_1 + 0x34) = 0x3f800000;
  *(int32_t *)((int64_t)param_1 + 0x1a4) = 0x3f800000;
  *(int32_t *)(param_1 + 0x35) = 0x3f800000;
  *(int32_t *)((int64_t)param_1 + 0x1ac) = 0x7f7fffff;
  *(int32_t *)(param_1 + 0x3a) = 0xffffffff;
  plVar3 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x70,8,9,plVar4,plVar3);
  *plVar3 = (int64_t)&system_handler1_ptr;
  *plVar3 = (int64_t)&system_handler2_ptr;
  *(int32_t *)(plVar3 + 1) = 0;
  *plVar3 = (int64_t)&processed_var_7224_ptr;
  plVar3[4] = (int64_t)&system_state_ptr;
  plVar3[5] = 0;
  *(int32_t *)(plVar3 + 6) = 0;
  plVar3[4] = (int64_t)&system_data_buffer_ptr;
  plVar3[7] = 0;
  plVar3[5] = 0;
  *(int32_t *)(plVar3 + 6) = 0;
  *(int32_t *)(plVar3 + 8) = 0xffffffff;
  *(int32_t *)((int64_t)plVar3 + 0x44) = 0x3f000000;
  *(int32_t *)(plVar3 + 9) = 0x3f000000;
  *(int32_t *)((int64_t)plVar3 + 0x4c) = 0x3f4ccccd;
  *(int32_t *)(plVar3 + 10) = 0x3f000000;
  *(int32_t *)((int64_t)plVar3 + 0x54) = 0x3e99999a;
  *(int32_t *)(plVar3 + 0xb) = 0x411cf5c3;
  *(int32_t *)((int64_t)plVar3 + 0x5c) = 0x3f800000;
  *(int32_t *)(plVar3 + 0xc) = 0xbf800000;
  *(int32_t *)((int64_t)plVar3 + 100) = 0x3f800000;
  *(int32_t *)(plVar3 + 0xd) = 0x3f000000;
  *(int32_t *)((int64_t)plVar3 + 0x6c) = 0x3f800000;
  *(int32_t *)(plVar3 + 2) = 0x3f800000;
  *(int32_t *)((int64_t)plVar3 + 0x14) = 0x78;
  *(int16_t *)(plVar3 + 3) = 0;
  *(int8_t *)((int64_t)plVar3 + 0x1a) = 0;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar4 = (int64_t *)param_1[0x4d];
  param_1[0x4d] = plVar3;
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  *(byte *)((int64_t)param_1 + 0xfe) = *(byte *)((int64_t)param_1 + 0xfe) & 0xf3;
  param_1[0x3b] = 0;
  LOCK();
  *(int8_t *)((int64_t)param_1 + 0xf9) = 0;
  UNLOCK();
  param_1[0x59] = 0;
  *(int8_t *)((int64_t)param_1 + 0xf5) = 0;
  param_1[0x4b] = 0;
  return param_1;
}



uint64_t FUN_180075580(uint64_t param_1,uint64_t param_2)

{
  FUN_1800756e0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x300);
  }
  return param_1;
}



int8_t FUN_1800755c0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int8_t uVar1;
  uint64_t uVar2;
  void *puStack_30;
  int64_t lStack_28;
  
  uVar2 = 0xfffffffffffffffe;
  SystemCore_EncryptionEngine0(&puStack_30);
  uVar1 = FUN_180063510(param_1 + 0x218,&puStack_30,param_3,param_4,uVar2);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x000180276fbd)



// 函数: void FUN_180075630(int64_t param_1,uint64_t *param_2)
void FUN_180075630(int64_t param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  char cVar8;
  int64_t lVar9;
  int64_t *plVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int8_t auStack_e8 [184];
  uint64_t uStack_30;
  
  uVar11 = *(uint *)(param_1 + 0x100) & 0xfbffffff;
  *(uint *)(param_1 + 0x100) = uVar11;
  uStack_30 = 0x180075655;
  cVar8 = FUN_1800861a0(param_2);
  if (cVar8 == '\0') {
    *(uint *)(param_1 + 0x100) = uVar11 | 0x4000000;
  }
  uVar7 = param_2[1];
  plVar2 = *(int64_t **)(param_1 + 0x1c8);
  *(uint64_t *)(param_1 + 0x120) = *param_2;
  *(uint64_t *)(param_1 + 0x128) = uVar7;
  uVar7 = param_2[3];
  *(uint64_t *)(param_1 + 0x130) = param_2[2];
  *(uint64_t *)(param_1 + 0x138) = uVar7;
  uVar4 = *(int32_t *)((int64_t)param_2 + 0x24);
  uVar5 = *(int32_t *)(param_2 + 5);
  uVar6 = *(int32_t *)((int64_t)param_2 + 0x2c);
  *(int32_t *)(param_1 + 0x140) = *(int32_t *)(param_2 + 4);
  *(int32_t *)(param_1 + 0x144) = uVar4;
  *(int32_t *)(param_1 + 0x148) = uVar5;
  *(int32_t *)(param_1 + 0x14c) = uVar6;
  uVar4 = *(int32_t *)((int64_t)param_2 + 0x34);
  uVar5 = *(int32_t *)(param_2 + 7);
  uVar6 = *(int32_t *)((int64_t)param_2 + 0x3c);
  *(int32_t *)(param_1 + 0x150) = *(int32_t *)(param_2 + 6);
  *(int32_t *)(param_1 + 0x154) = uVar4;
  *(int32_t *)(param_1 + 0x158) = uVar5;
  *(int32_t *)(param_1 + 0x15c) = uVar6;
  if (plVar2 != (int64_t *)0x0) {
    if (*(code **)(*plVar2 + 0x160) == (code *)&processed_var_6368_ptr) {
      puVar1 = (uint64_t *)((int64_t)plVar2 + 0x214);
      *(int32_t *)((int64_t)plVar2 + 0x244) = 0;
      if (plVar2[8] - plVar2[7] >> 4 == 0) {
        *puVar1 = 0;
        *(uint64_t *)((int64_t)plVar2 + 0x21c) = 0;
        *(uint64_t *)((int64_t)plVar2 + 0x224) = 0;
        *(uint64_t *)((int64_t)plVar2 + 0x22c) = 0;
        *(uint64_t *)((int64_t)plVar2 + 0x234) = 0;
        *(uint64_t *)((int64_t)plVar2 + 0x23c) = 0;
      }
      else {
        *puVar1 = 0x4cbebc204cbebc20;
        *(uint64_t *)((int64_t)plVar2 + 0x21c) = 0x7f7fffff4cbebc20;
        *(int32_t *)((int64_t)plVar2 + 0x234) = 0;
        *(int32_t *)(plVar2 + 0x47) = 0;
        *(int32_t *)((int64_t)plVar2 + 0x23c) = 0;
        *(int32_t *)(plVar2 + 0x48) = 0x7f7fffff;
        *(uint64_t *)((int64_t)plVar2 + 0x224) = 0xccbebc20ccbebc20;
        *(uint64_t *)((int64_t)plVar2 + 0x22c) = 0x7f7fffffccbebc20;
        plVar10 = (int64_t *)plVar2[7];
        if (plVar10 < (int64_t *)plVar2[8]) {
          do {
            lVar3 = *plVar10;
            if (((*(byte *)(lVar3 + 0x100) & 0x20) == 0) || (plVar2[5] == 0)) {
              lVar9 = lVar3 + 0x120;
            }
            else {
              lVar9 = FUN_180194940(lVar3 + 0x120,auStack_e8,plVar2[5] + 0x70);
            }
            FUN_18063a240(puVar1,lVar3 + 0x274,lVar9);
            plVar10 = plVar10 + 2;
          } while (plVar10 < (int64_t *)plVar2[8]);
        }
        if (((plVar2[8] - plVar2[7] & 0xfffffffffffffff0U) == 0x10) &&
           (lVar3 = *(int64_t *)plVar2[7], (*(uint *)(lVar3 + 0x100) & 0x4000000) == 0)) {
          uVar7 = *(uint64_t *)(lVar3 + 0x29c);
          *(uint64_t *)((int64_t)plVar2 + 0x234) = *(uint64_t *)(lVar3 + 0x294);
          *(uint64_t *)((int64_t)plVar2 + 0x23c) = uVar7;
          *(int32_t *)((int64_t)plVar2 + 0x244) =
               *(int32_t *)(*(int64_t *)plVar2[7] + 0x2a4);
        }
        else {
          FUN_1800b9f60(puVar1);
          plVar10 = (int64_t *)plVar2[7];
          fVar14 = 0.0;
          if (plVar10 < (int64_t *)plVar2[8]) {
            do {
              lVar3 = *plVar10;
              if ((*(uint *)(lVar3 + 0x100) & 0x4000000) == 0) {
                fVar15 = *(float *)(lVar3 + 0x294);
                fVar16 = *(float *)(lVar3 + 0x298);
                fVar17 = *(float *)(lVar3 + 0x29c);
                fVar12 = *(float *)(lVar3 + 0x2a4);
              }
              else {
                fVar12 = *(float *)(lVar3 + 0x298);
                fVar17 = *(float *)(lVar3 + 0x294);
                fVar13 = *(float *)(lVar3 + 0x29c);
                fVar15 = *(float *)(lVar3 + 0x130) * fVar12 + *(float *)(lVar3 + 0x120) * fVar17 +
                         *(float *)(lVar3 + 0x140) * fVar13 + *(float *)(lVar3 + 0x150);
                fVar16 = *(float *)(lVar3 + 0x134) * fVar12 + *(float *)(lVar3 + 0x124) * fVar17 +
                         *(float *)(lVar3 + 0x144) * fVar13 + *(float *)(lVar3 + 0x154);
                fVar17 = *(float *)(lVar3 + 0x138) * fVar12 + *(float *)(lVar3 + 0x128) * fVar17 +
                         *(float *)(lVar3 + 0x148) * fVar13 + *(float *)(lVar3 + 0x158);
                fVar12 = *(float *)(lVar3 + 0x140) * *(float *)(lVar3 + 0x140) +
                         *(float *)(lVar3 + 0x144) * *(float *)(lVar3 + 0x144) +
                         *(float *)(lVar3 + 0x148) * *(float *)(lVar3 + 0x148);
                fVar13 = *(float *)(lVar3 + 0x130) * *(float *)(lVar3 + 0x130) +
                         *(float *)(lVar3 + 0x134) * *(float *)(lVar3 + 0x134) +
                         *(float *)(lVar3 + 0x138) * *(float *)(lVar3 + 0x138);
                fVar18 = *(float *)(lVar3 + 0x120) * *(float *)(lVar3 + 0x120) +
                         *(float *)(lVar3 + 0x124) * *(float *)(lVar3 + 0x124) +
                         *(float *)(lVar3 + 0x128) * *(float *)(lVar3 + 0x128);
                if (fVar18 <= fVar13) {
                  if (fVar12 <= fVar13) {
                    fVar12 = fVar13;
                  }
                }
                else if (fVar12 <= fVar18) {
                  fVar12 = fVar18;
                }
                if ((fVar12 - 1.0 <= -1e-06) || (1e-06 <= fVar12 - 1.0)) {
                  fVar12 = SQRT(fVar12) * *(float *)(lVar3 + 0x2a4);
                }
                else {
                  fVar12 = *(float *)(lVar3 + 0x2a4) * 1.0;
                }
              }
              fVar17 = *(float *)((int64_t)plVar2 + 0x23c) - fVar17;
              fVar15 = *(float *)((int64_t)plVar2 + 0x234) - fVar15;
              fVar16 = (*(float *)(plVar2 + 0x47) - fVar16) * (*(float *)(plVar2 + 0x47) - fVar16) +
                       fVar15 * fVar15 + fVar17 * fVar17;
              fVar15 = fVar14 - fVar12;
              if (fVar15 <= 0.0) {
                fVar15 = 0.0;
              }
              if (fVar15 * fVar15 < fVar16) {
                fVar14 = SQRT(fVar16) + fVar12;
              }
              plVar10 = plVar10 + 2;
            } while (plVar10 < (int64_t *)plVar2[8]);
            if ((0.0 < fVar14) &&
               (fVar14 < *(float *)((int64_t)plVar2 + 0x244) ||
                fVar14 == *(float *)((int64_t)plVar2 + 0x244))) {
              *(float *)((int64_t)plVar2 + 0x244) = fVar14;
            }
          }
        }
      }
      return;
    }
    uStack_30 = 0x1800756d4;
    (**(code **)(*plVar2 + 0x160))();
  }
  return;
}





// 函数: void FUN_1800756e0(uint64_t *param_1)
void FUN_1800756e0(uint64_t *param_1)

{
  byte *pbVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  *param_1 = &processed_var_7328_ptr;
  param_1[0x39] = 0;
  if (param_1[0x59] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x59] = 0;
  plVar2 = (int64_t *)param_1[0x37];
  param_1[0x37] = 0;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar2 = (int64_t *)param_1[0x38];
  param_1[0x38] = 0;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  if (param_1[0x5a] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x5a] = 0;
  plVar2 = (int64_t *)param_1[0x4b];
  if (plVar2 != (int64_t *)0x0) {
    if (*plVar2 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *plVar2 = 0;
    if (plVar2[2] != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plVar2[2] = 0;
    if (plVar2[7] != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plVar2[2] = 0;
    plVar2[7] = 0;
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(plVar2);
  }
  param_1[0x4b] = 0;
  if (*(char *)((int64_t)param_1 + 0xf9) != '\0') {
    if (param_1[0x3b] != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    param_1[0x3b] = 0;
    LOCK();
    *(int8_t *)((int64_t)param_1 + 0xf9) = 0;
    UNLOCK();
  }
  if (param_1[0x3d] != 0) {
    FUN_180080060();
    param_1[0x3d] = 0;
    if (param_1[0x3e] != 0) {
      pbVar1 = (byte *)(param_1[0x3e] + 0xfe);
      *pbVar1 = *pbVar1 & 0xfb;
    }
  }
  plVar2 = (int64_t *)param_1[0x42];
  param_1[0x42] = 0;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  lVar3 = param_1[0x3c];
  if (lVar3 != 0) {
    SystemMemoryManager(lVar3,0x18,0x10,FUN_18007bb70,uVar4,lVar3);
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar3);
  }
  param_1[0x3c] = 0;
  FUN_180080870(param_1 + 0x5e);
  FUN_1800809a0(param_1 + 0x5c);
  if ((int64_t *)param_1[0x4d] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x4d] + 0x38))();
  }
  FUN_18005d580();
  if ((int64_t *)param_1[0x42] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x42] + 0x38))();
  }
  if (param_1[0x3d] != 0) {
    FUN_180080060();
  }
  if ((int64_t *)param_1[0x38] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x38] + 0x38))();
  }
  if ((int64_t *)param_1[0x37] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x37] + 0x38))();
  }
  if ((int64_t *)param_1[0x36] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x36] + 0x38))();
  }
  if ((int64_t *)param_1[0x23] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x23] + 0x38))();
  }
  *param_1 = &processed_var_8584_ptr;
  param_1[2] = &system_state_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  return;
}





