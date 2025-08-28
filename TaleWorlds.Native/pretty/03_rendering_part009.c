#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part009.c - 5 个函数

// 函数: void FUN_1802722e0(int64_t param_1,int64_t *param_2)
void FUN_1802722e0(int64_t param_1,int64_t *param_2)

{
  int8_t uVar1;
  int32_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int8_t *puVar5;
  int32_t *puVar6;
  int *piVar7;
  uint uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  
  puVar6 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar6) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar6 + (4 - *param_2));
    puVar6 = (int32_t *)param_2[1];
  }
  uVar10 = 0;
  *puVar6 = 0;
  param_2[1] = param_2[1] + 4;
  lVar3 = *(int64_t *)(param_1 + 0x28) - *(int64_t *)(param_1 + 0x20);
  piVar7 = (int *)param_2[1];
  lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
  if ((uint64_t)((*param_2 - (int64_t)piVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)piVar7 + (4 - *param_2));
    piVar7 = (int *)param_2[1];
  }
  *piVar7 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
  param_2[1] = param_2[1] + 4;
  lVar4 = *(int64_t *)(param_1 + 0x28) - *(int64_t *)(param_1 + 0x20);
  lVar3 = lVar4 >> 0x3f;
  uVar9 = uVar10;
  uVar11 = uVar10;
  if (lVar4 / 0x98 + lVar3 != lVar3) {
    do {
      System_QueueProcessor(param_2,uVar11 * 0x98 + *(int64_t *)(param_1 + 0x20));
      uVar8 = (int)uVar9 + 1;
      uVar9 = (uint64_t)uVar8;
      uVar11 = (int64_t)(int)uVar8;
    } while ((uint64_t)(int64_t)(int)uVar8 <
             (uint64_t)((*(int64_t *)(param_1 + 0x28) - *(int64_t *)(param_1 + 0x20)) / 0x98));
  }
  System_QueueProcessor(param_2,param_1 + 0x40);
  puVar5 = (int8_t *)param_2[1];
  uVar1 = *(int8_t *)(param_1 + 0xd8);
  if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 2) {
    System_BufferManager(param_2,puVar5 + (1 - *param_2));
    puVar5 = (int8_t *)param_2[1];
  }
  *puVar5 = uVar1;
  param_2[1] = param_2[1] + 1;
  puVar6 = (int32_t *)param_2[1];
  uVar2 = *(int32_t *)(param_1 + 0xdc);
  if ((uint64_t)((*param_2 - (int64_t)puVar6) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar6 + (4 - *param_2));
    puVar6 = (int32_t *)param_2[1];
  }
  *puVar6 = uVar2;
  param_2[1] = param_2[1] + 4;
  System_QueueProcessor(param_2,param_1 + 0xe0);
  lVar3 = *(int64_t *)(param_1 + 0x180) - *(int64_t *)(param_1 + 0x178);
  lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
  piVar7 = (int *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)piVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)piVar7 + (4 - *param_2));
    piVar7 = (int *)param_2[1];
  }
  *piVar7 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
  param_2[1] = param_2[1] + 4;
  lVar4 = *(int64_t *)(param_1 + 0x180) - *(int64_t *)(param_1 + 0x178);
  lVar3 = lVar4 >> 0x3f;
  uVar9 = uVar10;
  uVar11 = uVar10;
  if (lVar4 / 0x98 + lVar3 != lVar3) {
    do {
      System_QueueProcessor(param_2,uVar11 * 0x98 + *(int64_t *)(param_1 + 0x178));
      uVar8 = (int)uVar9 + 1;
      uVar9 = (uint64_t)uVar8;
      uVar11 = (int64_t)(int)uVar8;
    } while ((uint64_t)(int64_t)(int)uVar8 <
             (uint64_t)((*(int64_t *)(param_1 + 0x180) - *(int64_t *)(param_1 + 0x178)) / 0x98));
  }
  lVar3 = param_1 + 0x198;
  lVar4 = 5;
  do {
    System_QueueProcessor(param_2,lVar3);
    lVar3 = lVar3 + 0x98;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  lVar3 = *(int64_t *)(param_1 + 0x498) - *(int64_t *)(param_1 + 0x490);
  lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
  piVar7 = (int *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)piVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)piVar7 + (4 - *param_2));
    piVar7 = (int *)param_2[1];
  }
  *piVar7 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
  param_2[1] = param_2[1] + 4;
  lVar4 = *(int64_t *)(param_1 + 0x498) - *(int64_t *)(param_1 + 0x490);
  lVar3 = lVar4 >> 0x3f;
  uVar9 = uVar10;
  uVar11 = uVar10;
  if (lVar4 / 0x98 + lVar3 != lVar3) {
    do {
      System_QueueProcessor(param_2,uVar11 * 0x98 + *(int64_t *)(param_1 + 0x490));
      uVar8 = (int)uVar9 + 1;
      uVar9 = (uint64_t)uVar8;
      uVar11 = (int64_t)(int)uVar8;
    } while ((uint64_t)(int64_t)(int)uVar8 <
             (uint64_t)((*(int64_t *)(param_1 + 0x498) - *(int64_t *)(param_1 + 0x490)) / 0x98));
  }
  lVar3 = param_1 + 0xa30;
  lVar4 = 9;
  do {
    System_QueueProcessor(param_2,lVar3);
    lVar3 = lVar3 + 0x98;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  System_QueueProcessor(param_2,param_1 + 0xf88);
  System_QueueProcessor(param_2,param_1 + 0x1020);
  lVar3 = *(int64_t *)(param_1 + 0x10c0) - *(int64_t *)(param_1 + 0x10b8);
  lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
  piVar7 = (int *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)piVar7) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)piVar7 + (4 - *param_2));
    piVar7 = (int *)param_2[1];
  }
  *piVar7 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
  param_2[1] = param_2[1] + 4;
  lVar4 = *(int64_t *)(param_1 + 0x10c0) - *(int64_t *)(param_1 + 0x10b8);
  lVar3 = lVar4 >> 0x3f;
  uVar9 = uVar10;
  uVar11 = uVar10;
  if (lVar4 / 0x98 + lVar3 != lVar3) {
    do {
      System_QueueProcessor(param_2,uVar11 * 0x98 + *(int64_t *)(param_1 + 0x10b8));
      uVar8 = (int)uVar9 + 1;
      uVar9 = (uint64_t)uVar8;
      uVar11 = (int64_t)(int)uVar8;
    } while ((uint64_t)(int64_t)(int)uVar8 <
             (uint64_t)((*(int64_t *)(param_1 + 0x10c0) - *(int64_t *)(param_1 + 0x10b8)) / 0x98)
            );
  }
  System_QueueProcessor(param_2,param_1 + 0x10d8);
  puVar5 = (int8_t *)param_2[1];
  uVar1 = *(int8_t *)(param_1 + 0x10f9);
  if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 2) {
    System_BufferManager(param_2,puVar5 + (1 - *param_2));
    puVar5 = (int8_t *)param_2[1];
  }
  *puVar5 = uVar1;
  param_2[1] = param_2[1] + 1;
  puVar6 = (int32_t *)param_2[1];
  if (*(char *)(param_1 + 0x10f9) != '\0') {
    System_QueueProcessor(param_2,param_1 + 0x1100);
    System_QueueProcessor(param_2,param_1 + 0x1198);
    System_QueueProcessor(param_2,param_1 + 0x1230);
    System_QueueProcessor(param_2,param_1 + 0x12c8);
    System_QueueProcessor(param_2,param_1 + 0x1360);
    System_QueueProcessor(param_2,param_1 + 0x13f8);
    puVar6 = (int32_t *)param_2[1];
  }
  if ((uint64_t)((*param_2 - (int64_t)puVar6) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar6 + (4 - *param_2));
    puVar6 = (int32_t *)param_2[1];
  }
  *puVar6 = 0x10;
  param_2[1] = param_2[1] + 4;
  param_1 = param_1 + 0x4b0;
  do {
    piVar7 = (int *)param_2[1];
    if ((uint64_t)((*param_2 - (int64_t)piVar7) + param_2[2]) < 5) {
      System_BufferManager(param_2,(int64_t)piVar7 + (4 - *param_2));
      piVar7 = (int *)param_2[1];
    }
    *piVar7 = (int)uVar10;
    param_2[1] = param_2[1] + 4;
    System_QueueProcessor(param_2,param_1);
    uVar8 = (int)uVar10 + 1;
    uVar10 = (uint64_t)uVar8;
    param_1 = param_1 + 0x58;
  } while ((int)uVar8 < 0x10);
  return;
}



int32_t * FUN_180272880(int32_t *param_1)

{
  *(void **)(param_1 + 2) = &system_state_ptr;
  *(uint64_t *)(param_1 + 4) = 0;
  param_1[6] = 0;
  *(void **)(param_1 + 2) = &system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 8) = 0;
  *(uint64_t *)(param_1 + 4) = 0;
  param_1[6] = 0;
  *(void **)(param_1 + 10) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  *(void **)(param_1 + 10) = &system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(uint64_t *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  *(void **)(param_1 + 0x12) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  *(void **)(param_1 + 0x12) = &system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  *(void **)(param_1 + 0x1a) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = 0;
  *(void **)(param_1 + 0x1a) = &system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = 0;
  *(void **)(param_1 + 0x22) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0;
  *(void **)(param_1 + 0x22) = &system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 0x28) = 0;
  *(uint64_t *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0;
  *(void **)(param_1 + 0x2a) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x2c) = 0;
  param_1[0x2e] = 0;
  *(void **)(param_1 + 0x2a) = &system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(uint64_t *)(param_1 + 0x2c) = 0;
  param_1[0x2e] = 0;
  *(void **)(param_1 + 0x32) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x34) = 0;
  param_1[0x36] = 0;
  *(void **)(param_1 + 0x32) = &system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 0x38) = 0;
  *(uint64_t *)(param_1 + 0x34) = 0;
  param_1[0x36] = 0;
  *(void **)(param_1 + 0x3a) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x3c) = 0;
  param_1[0x3e] = 0;
  *(void **)(param_1 + 0x3a) = &system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 0x40) = 0;
  *(uint64_t *)(param_1 + 0x3c) = 0;
  param_1[0x3e] = 0;
  *(void **)(param_1 + 0x42) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x44) = 0;
  param_1[0x46] = 0;
  *(void **)(param_1 + 0x42) = &system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 0x48) = 0;
  *(uint64_t *)(param_1 + 0x44) = 0;
  param_1[0x46] = 0;
  *(uint64_t *)(param_1 + 0x4a) = 0;
  *(uint64_t *)(param_1 + 0x4c) = 0;
  *(uint64_t *)(param_1 + 0x4e) = 0;
  param_1[0x50] = 3;
  *(void **)(param_1 + 0x52) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x54) = 0;
  param_1[0x56] = 0;
  *(void **)(param_1 + 0x52) = &system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 0x58) = 0;
  *(uint64_t *)(param_1 + 0x54) = 0;
  param_1[0x56] = 0;
  *(void **)(param_1 + 0x5a) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x5c) = 0;
  param_1[0x5e] = 0;
  *(void **)(param_1 + 0x5a) = &system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 0x60) = 0;
  *(uint64_t *)(param_1 + 0x5c) = 0;
  param_1[0x5e] = 0;
  *(void **)(param_1 + 0x62) = &system_state_ptr;
  *(uint64_t *)(param_1 + 100) = 0;
  param_1[0x66] = 0;
  *(void **)(param_1 + 0x62) = &system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 0x68) = 0;
  *(uint64_t *)(param_1 + 100) = 0;
  param_1[0x66] = 0;
  *(void **)(param_1 + 0x6a) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x6c) = 0;
  param_1[0x6e] = 0;
  *(void **)(param_1 + 0x6a) = &system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 0x70) = 0;
  *(uint64_t *)(param_1 + 0x6c) = 0;
  param_1[0x6e] = 0;
  *(void **)(param_1 + 0x72) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x74) = 0;
  param_1[0x76] = 0;
  *(void **)(param_1 + 0x72) = &system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 0x78) = 0;
  *(uint64_t *)(param_1 + 0x74) = 0;
  param_1[0x76] = 0;
  *(void **)(param_1 + 0x7a) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x7c) = 0;
  param_1[0x7e] = 0;
  *(void **)(param_1 + 0x7a) = &system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 0x80) = 0;
  *(uint64_t *)(param_1 + 0x7c) = 0;
  param_1[0x7e] = 0;
  *(void **)(param_1 + 0x82) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x84) = 0;
  param_1[0x86] = 0;
  *(void **)(param_1 + 0x82) = &system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 0x88) = 0;
  *(uint64_t *)(param_1 + 0x84) = 0;
  param_1[0x86] = 0;
  *(void **)(param_1 + 0x8a) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x8c) = 0;
  param_1[0x8e] = 0;
  *(void **)(param_1 + 0x8a) = &system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 0x90) = 0;
  *(uint64_t *)(param_1 + 0x8c) = 0;
  param_1[0x8e] = 0;
  DataStructureManager(param_1 + 0x92,0x58,0x10,FUN_180049cd0,CoreSystem_MessageHandler);
  FUN_180241f10(param_1 + 500);
  *param_1 = 0;
  param_1[0x1f2] = 0;
  *(int8_t *)(param_1 + 499) = 0;
  return param_1;
}





// 函数: void FUN_180272b60(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180272b60(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int8_t uVar1;
  int32_t uVar2;
  int64_t lVar3;
  int8_t *puVar4;
  int32_t *puVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint64_t uVar9;
  int iVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t unaff_RDI;
  uint64_t uVar13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  
  puVar5 = (int32_t *)param_2[1];
  if ((uint64_t)((param_2[2] - (int64_t)puVar5) + *param_2) < 5) {
    System_BufferManager(param_2,(int64_t)puVar5 + (4 - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  *puVar5 = 0;
  param_2[1] = param_2[1] + 4;
  puVar5 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar5 + (4 - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  *puVar5 = 1;
  param_2[1] = param_2[1] + 4;
  System_DataSerializer(&render_data_ptr,*(int32_t *)(param_1 + 8),param_2);
  System_QueueProcessor(param_2,param_1 + 0x10);
  System_QueueProcessor(param_2,param_1 + 0x30);
  System_QueueProcessor(param_2,param_1 + 0x50);
  System_QueueProcessor(param_2,param_1 + 0x70);
  System_QueueProcessor(param_2,param_1 + 0x90);
  System_QueueProcessor(param_2,param_1 + 0xb0);
  System_QueueProcessor(param_2,param_1 + 0xd0);
  System_QueueProcessor(param_2,param_1 + 0xf0);
  System_QueueProcessor(param_2,param_1 + 0x110);
  lVar3 = *(int64_t *)(param_1 + 0x138) - *(int64_t *)(param_1 + 0x130);
  lVar3 = lVar3 / 6 + (lVar3 >> 0x3f);
  piVar6 = (int *)param_2[1];
  iVar10 = (int)(lVar3 >> 4) - (int)(lVar3 >> 0x3f);
  if ((uint64_t)((*param_2 - (int64_t)piVar6) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)piVar6 + (4 - *param_2));
    piVar6 = (int *)param_2[1];
  }
  *piVar6 = iVar10;
  iVar7 = 0;
  param_2[1] = param_2[1] + 4;
  lVar3 = (int64_t)iVar10;
  if (0 < iVar10) {
    lVar11 = 0;
    do {
      System_QueueProcessor(param_2,(int64_t)iVar7 * 0x60 + *(int64_t *)(param_1 + 0x130));
      puVar5 = (int32_t *)param_2[1];
      uVar2 = *(int32_t *)(lVar11 + 0x58 + *(int64_t *)(param_1 + 0x130));
      if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 5) {
        System_BufferManager(param_2,(int64_t)puVar5 + (4 - *param_2));
        puVar5 = (int32_t *)param_2[1];
      }
      *puVar5 = uVar2;
      param_2[1] = param_2[1] + 4;
      puVar5 = (int32_t *)param_2[1];
      uVar2 = *(int32_t *)(lVar11 + 0x5c + *(int64_t *)(param_1 + 0x130));
      if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 5) {
        System_BufferManager(param_2,(int64_t)puVar5 + (4 - *param_2));
        puVar5 = (int32_t *)param_2[1];
      }
      *puVar5 = uVar2;
      iVar7 = iVar7 + 1;
      param_2[1] = param_2[1] + 4;
      lVar11 = lVar11 + 0x60;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  System_QueueProcessor(param_2,param_1 + 0x150);
  System_QueueProcessor(param_2,param_1 + 0x170);
  System_QueueProcessor(param_2,param_1 + 400);
  System_QueueProcessor(param_2,param_1 + 0x1b0);
  System_QueueProcessor(param_2,param_1 + 0x1d0);
  System_QueueProcessor(param_2,param_1 + 0x1f0);
  System_QueueProcessor(param_2,param_1 + 0x210);
  System_QueueProcessor(param_2,param_1 + 0x230);
  lVar3 = param_1 + 0x250;
  lVar11 = 0x10;
  do {
    System_QueueProcessor(param_2,lVar3);
    lVar3 = lVar3 + 0x58;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  FUN_18025a940(&processed_var_9712_ptr,*(int32_t *)(param_1 + 2000),param_2);
  puVar4 = (int8_t *)param_2[1];
  uVar1 = *(int8_t *)(param_1 + 0x7d4);
  if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 2) {
    System_BufferManager(param_2,puVar4 + (1 - *param_2));
    puVar4 = (int8_t *)param_2[1];
  }
  *puVar4 = uVar1;
  param_2[1] = param_2[1] + 1;
  if (*(char *)(param_1 + 0x7d4) == '\0') {
    return;
  }
  puVar5 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar5 + (4 - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  uVar12 = 0;
  *puVar5 = 0;
  param_2[1] = param_2[1] + 4;
  lVar3 = *(int64_t *)(param_1 + 0x800) - *(int64_t *)(param_1 + 0x7f8);
  piVar6 = (int *)param_2[1];
  lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
  if ((uint64_t)((*param_2 - (int64_t)piVar6) + param_2[2]) < 5) {
    lVar11 = (int64_t)piVar6 - *param_2;
    System_BufferManager(param_2,lVar11 + 4,lVar11,param_4,unaff_R15,unaff_R14,unaff_RDI);
    piVar6 = (int *)param_2[1];
  }
  *piVar6 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
  param_2[1] = param_2[1] + 4;
  lVar11 = *(int64_t *)(param_1 + 0x800) - *(int64_t *)(param_1 + 0x7f8);
  lVar3 = lVar11 >> 0x3f;
  uVar9 = uVar12;
  uVar13 = uVar12;
  if (lVar11 / 0x98 + lVar3 != lVar3) {
    do {
      System_QueueProcessor(param_2,uVar13 * 0x98 + *(int64_t *)(param_1 + 0x7f8));
      uVar8 = (int)uVar9 + 1;
      uVar9 = (uint64_t)uVar8;
      uVar13 = (int64_t)(int)uVar8;
    } while ((uint64_t)(int64_t)(int)uVar8 <
             (uint64_t)((*(int64_t *)(param_1 + 0x800) - *(int64_t *)(param_1 + 0x7f8)) / 0x98));
  }
  System_QueueProcessor(param_2,param_1 + 0x818);
  puVar4 = (int8_t *)param_2[1];
  uVar1 = *(int8_t *)(param_1 + 0x8b0);
  if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 2) {
    System_BufferManager(param_2,puVar4 + (1 - *param_2));
    puVar4 = (int8_t *)param_2[1];
  }
  *puVar4 = uVar1;
  param_2[1] = param_2[1] + 1;
  puVar5 = (int32_t *)param_2[1];
  uVar2 = *(int32_t *)(param_1 + 0x8b4);
  if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar5 + (4 - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  *puVar5 = uVar2;
  param_2[1] = param_2[1] + 4;
  System_QueueProcessor(param_2,param_1 + 0x8b8);
  lVar3 = *(int64_t *)(param_1 + 0x958) - *(int64_t *)(param_1 + 0x950);
  lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
  piVar6 = (int *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)piVar6) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)piVar6 + (4 - *param_2));
    piVar6 = (int *)param_2[1];
  }
  *piVar6 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
  param_2[1] = param_2[1] + 4;
  lVar11 = *(int64_t *)(param_1 + 0x958) - *(int64_t *)(param_1 + 0x950);
  lVar3 = lVar11 >> 0x3f;
  uVar9 = uVar12;
  uVar13 = uVar12;
  if (lVar11 / 0x98 + lVar3 != lVar3) {
    do {
      System_QueueProcessor(param_2,uVar13 * 0x98 + *(int64_t *)(param_1 + 0x950));
      uVar8 = (int)uVar9 + 1;
      uVar9 = (uint64_t)uVar8;
      uVar13 = (int64_t)(int)uVar8;
    } while ((uint64_t)(int64_t)(int)uVar8 <
             (uint64_t)((*(int64_t *)(param_1 + 0x958) - *(int64_t *)(param_1 + 0x950)) / 0x98));
  }
  lVar3 = param_1 + 0x970;
  lVar11 = 5;
  do {
    System_QueueProcessor(param_2,lVar3);
    lVar3 = lVar3 + 0x98;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  lVar3 = *(int64_t *)(param_1 + 0xc70) - *(int64_t *)(param_1 + 0xc68);
  lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
  piVar6 = (int *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)piVar6) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)piVar6 + (4 - *param_2));
    piVar6 = (int *)param_2[1];
  }
  *piVar6 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
  param_2[1] = param_2[1] + 4;
  lVar11 = *(int64_t *)(param_1 + 0xc70) - *(int64_t *)(param_1 + 0xc68);
  lVar3 = lVar11 >> 0x3f;
  uVar9 = uVar12;
  uVar13 = uVar12;
  if (lVar11 / 0x98 + lVar3 != lVar3) {
    do {
      System_QueueProcessor(param_2,uVar13 * 0x98 + *(int64_t *)(param_1 + 0xc68));
      uVar8 = (int)uVar9 + 1;
      uVar9 = (uint64_t)uVar8;
      uVar13 = (int64_t)(int)uVar8;
    } while ((uint64_t)(int64_t)(int)uVar8 <
             (uint64_t)((*(int64_t *)(param_1 + 0xc70) - *(int64_t *)(param_1 + 0xc68)) / 0x98));
  }
  lVar3 = param_1 + 0x1208;
  lVar11 = 9;
  do {
    System_QueueProcessor(param_2,lVar3);
    lVar3 = lVar3 + 0x98;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  System_QueueProcessor(param_2,param_1 + 0x1760);
  System_QueueProcessor(param_2,param_1 + 0x17f8);
  lVar3 = *(int64_t *)(param_1 + 0x1898) - *(int64_t *)(param_1 + 0x1890);
  lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
  piVar6 = (int *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)piVar6) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)piVar6 + (4 - *param_2));
    piVar6 = (int *)param_2[1];
  }
  *piVar6 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
  param_2[1] = param_2[1] + 4;
  lVar11 = *(int64_t *)(param_1 + 0x1898) - *(int64_t *)(param_1 + 0x1890);
  lVar3 = lVar11 >> 0x3f;
  uVar9 = uVar12;
  uVar13 = uVar12;
  if (lVar11 / 0x98 + lVar3 != lVar3) {
    do {
      System_QueueProcessor(param_2,uVar13 * 0x98 + *(int64_t *)(param_1 + 0x1890));
      uVar8 = (int)uVar9 + 1;
      uVar9 = (uint64_t)uVar8;
      uVar13 = (int64_t)(int)uVar8;
    } while ((uint64_t)(int64_t)(int)uVar8 <
             (uint64_t)((*(int64_t *)(param_1 + 0x1898) - *(int64_t *)(param_1 + 0x1890)) / 0x98)
            );
  }
  System_QueueProcessor(param_2,param_1 + 0x18b0);
  puVar4 = (int8_t *)param_2[1];
  uVar1 = *(int8_t *)(param_1 + 0x18d1);
  if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 2) {
    System_BufferManager(param_2,puVar4 + (1 - *param_2));
    puVar4 = (int8_t *)param_2[1];
  }
  *puVar4 = uVar1;
  param_2[1] = param_2[1] + 1;
  puVar5 = (int32_t *)param_2[1];
  if (*(char *)(param_1 + 0x18d1) != '\0') {
    System_QueueProcessor(param_2,param_1 + 0x18d8);
    System_QueueProcessor(param_2,param_1 + 0x1970);
    System_QueueProcessor(param_2,param_1 + 0x1a08);
    System_QueueProcessor(param_2,param_1 + 0x1aa0);
    System_QueueProcessor(param_2,param_1 + 0x1b38);
    System_QueueProcessor(param_2,param_1 + 0x1bd0);
    puVar5 = (int32_t *)param_2[1];
  }
  if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar5 + (4 - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  *puVar5 = 0x10;
  param_2[1] = param_2[1] + 4;
  param_1 = param_1 + 0xc88;
  do {
    piVar6 = (int *)param_2[1];
    if ((uint64_t)((*param_2 - (int64_t)piVar6) + param_2[2]) < 5) {
      System_BufferManager(param_2,(int64_t)piVar6 + (4 - *param_2));
      piVar6 = (int *)param_2[1];
    }
    *piVar6 = (int)uVar12;
    param_2[1] = param_2[1] + 4;
    System_QueueProcessor(param_2,param_1);
    uVar8 = (int)uVar12 + 1;
    uVar12 = (uint64_t)uVar8;
    param_1 = param_1 + 0x58;
  } while ((int)uVar8 < 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180272bd0(int64_t *param_1,int64_t param_2,uint *param_3)
void FUN_180272bd0(int64_t *param_1,int64_t param_2,uint *param_3)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  int64_t lVar4;
  byte *pbVar5;
  int iVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int8_t auStack_498 [32];
  uint64_t uStack_478;
  void *puStack_468;
  byte *pbStack_460;
  int iStack_458;
  byte abStack_450 [1032];
  uint64_t uStack_48;
  
  uStack_478 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_498;
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *param_3 = 0;
  uVar3 = **(uint **)(param_2 + 8);
  uVar7 = (uint64_t)uVar3;
  *(uint **)(param_2 + 8) = *(uint **)(param_2 + 8) + 1;
  if (uVar3 != 0) {
    do {
      puStack_468 = &rendering_ripple_ptr;
      pbStack_460 = abStack_450;
      iStack_458 = 0;
      abStack_450[0] = 0;
      uVar3 = **(uint **)(param_2 + 8);
      puVar1 = *(uint **)(param_2 + 8) + 1;
      *(uint **)(param_2 + 8) = puVar1;
      lVar8 = 0;
      plVar9 = param_1;
      if (uVar3 != 0) {
        SystemManager_Executor(&puStack_468,puVar1,uVar3);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar3;
      }
      do {
        lVar4 = -1;
        do {
          lVar4 = lVar4 + 1;
        } while (*(char *)(*plVar9 + lVar4) != '\0');
        iVar6 = (int)lVar4;
        if (iStack_458 == iVar6) {
          if (iStack_458 != 0) {
            pbVar5 = pbStack_460;
            do {
              pbVar2 = pbVar5 + (*plVar9 - (int64_t)pbStack_460);
              iVar6 = (uint)*pbVar5 - (uint)*pbVar2;
              if (iVar6 != 0) break;
              pbVar5 = pbVar5 + 1;
            } while (*pbVar2 != 0);
          }
LAB_180272cfe:
          if (iVar6 == 0) {
            *param_3 = *param_3 | *(uint *)(param_1 + lVar8 * 2 + 1);
            break;
          }
        }
        else if (iStack_458 == 0) goto LAB_180272cfe;
        lVar8 = lVar8 + 1;
        plVar9 = plVar9 + 2;
      } while (lVar8 < 0x15);
      puStack_468 = &system_state_ptr;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_498);
}





// 函数: void System_DataSerializer(uint64_t *param_1,uint param_2,int64_t *param_3)
void System_DataSerializer(uint64_t *param_1,uint param_2,int64_t *param_3)

{
  int32_t *puVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  int64_t lVar5;
  
  puVar1 = (int32_t *)param_3[1];
  if ((uint64_t)((*param_3 - (int64_t)puVar1) + param_3[2]) < 5) {
    System_BufferManager(param_3,(int64_t)puVar1 + (4 - *param_3));
    puVar1 = (int32_t *)param_3[1];
  }
  iVar4 = 0;
  *puVar1 = 0;
  lVar3 = *param_3;
  lVar2 = param_3[1] + 4;
  param_3[1] = lVar2;
  lVar5 = 0;
  if (lVar3 != 0) {
    lVar5 = lVar2 - lVar3;
  }
  if ((uint64_t)((lVar3 - lVar2) + param_3[2]) < 5) {
    System_BufferManager(param_3,(lVar2 - lVar3) + 4);
    lVar2 = param_3[1];
  }
  lVar3 = 0x15;
  param_3[1] = lVar2 + 4;
  do {
    if ((*(uint *)(param_1 + 1) & param_2) != 0) {
      UtilitiesSystem_ThreadManager(param_3,*param_1);
      iVar4 = iVar4 + 1;
    }
    param_1 = param_1 + 2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(int *)(lVar5 + *param_3) = iVar4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180272e40(int64_t *param_1,uint64_t param_2)
void FUN_180272e40(int64_t *param_1,uint64_t param_2)

{
  void *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  void *puVar8;
  int64_t lVar9;
  
  puVar4 = (uint64_t *)param_1[1];
  lVar9 = *param_1;
  uVar3 = ((int64_t)puVar4 - lVar9) / 0x98;
  if (param_2 <= uVar3) {
    puVar7 = (uint64_t *)(param_2 * 0x98 + lVar9);
    if (puVar7 != puVar4) {
      do {
        (**(code **)*puVar7)(puVar7,0);
        puVar7 = puVar7 + 0x13;
      } while (puVar7 != puVar4);
      lVar9 = *param_1;
    }
    param_1[1] = param_2 * 0x98 + lVar9;
    return;
  }
  param_2 = param_2 - uVar3;
  puVar4 = (uint64_t *)param_1[1];
  if ((uint64_t)((param_1[2] - (int64_t)puVar4) / 0x98) < param_2) {
    puVar7 = (uint64_t *)*param_1;
    lVar9 = ((int64_t)puVar4 - (int64_t)puVar7) / 0x98;
    uVar3 = lVar9 * 2;
    if (lVar9 == 0) {
      uVar3 = 1;
    }
    if (uVar3 < lVar9 + param_2) {
      uVar3 = lVar9 + param_2;
    }
    puVar2 = (uint64_t *)0x0;
    if (uVar3 != 0) {
      puVar2 = (uint64_t *)
               CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar3 * 0x98,(char)param_1[3],0x6bca1af286bca1b,
                             0xfffffffffffffffe);
      puVar4 = (uint64_t *)param_1[1];
      puVar7 = (uint64_t *)*param_1;
    }
    puVar6 = puVar2;
    if (puVar7 != puVar4) {
      lVar9 = (int64_t)puVar7 - (int64_t)puVar2;
      do {
        *puVar6 = &system_state_ptr;
        puVar6[1] = 0;
        *(int32_t *)(puVar6 + 2) = 0;
        *puVar6 = &memory_allocator_3432_ptr;
        puVar6[1] = puVar6 + 3;
        *(int32_t *)(puVar6 + 2) = 0;
        *(int8_t *)(puVar6 + 3) = 0;
        *(int32_t *)(puVar6 + 2) = *(int32_t *)((int64_t)puVar6 + lVar9 + 0x10);
        puVar1 = *(void **)((int64_t)puVar6 + lVar9 + 8);
        puVar8 = &system_buffer_ptr;
        if (puVar1 != (void *)0x0) {
          puVar8 = puVar1;
        }
        strcpy_s(puVar6[1],0x80,puVar8);
        puVar6 = puVar6 + 0x13;
      } while ((uint64_t *)((int64_t)puVar6 + lVar9) != puVar4);
    }
    if (param_2 != 0) {
      puVar4 = puVar6 + 1;
      uVar5 = param_2;
      do {
        puVar4[-1] = &system_state_ptr;
        *puVar4 = 0;
        *(int32_t *)(puVar4 + 1) = 0;
        puVar4[-1] = &memory_allocator_3432_ptr;
        *puVar4 = puVar4 + 2;
        *(int32_t *)(puVar4 + 1) = 0;
        *(int8_t *)(puVar4 + 2) = 0;
        puVar4 = puVar4 + 0x13;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    puVar4 = (uint64_t *)param_1[1];
    puVar7 = (uint64_t *)*param_1;
    if (puVar7 != puVar4) {
      do {
        (**(code **)*puVar7)(puVar7,0);
        puVar7 = puVar7 + 0x13;
      } while (puVar7 != puVar4);
      puVar7 = (uint64_t *)*param_1;
    }
    if (puVar7 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar7);
    }
    *param_1 = (int64_t)puVar2;
    param_1[1] = (int64_t)(puVar6 + param_2 * 0x13);
    param_1[2] = (int64_t)(puVar2 + uVar3 * 0x13);
  }
  else {
    uVar3 = param_2;
    if (param_2 != 0) {
      do {
        *puVar4 = &system_state_ptr;
        puVar4[1] = 0;
        *(int32_t *)(puVar4 + 2) = 0;
        *puVar4 = &memory_allocator_3432_ptr;
        puVar4[1] = puVar4 + 3;
        *(int32_t *)(puVar4 + 2) = 0;
        *(int8_t *)(puVar4 + 3) = 0;
        puVar4 = puVar4 + 0x13;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puVar4 = (uint64_t *)param_1[1];
    }
    param_1[1] = (int64_t)(puVar4 + param_2 * 0x13);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



