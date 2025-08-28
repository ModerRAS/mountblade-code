#include "TaleWorlds.Native.Split.h"

// 03_rendering_part007.c - 4 个函数

// 渲染系统常量定义
#define RENDER_DATA_START_OFFSET    0x4a
#define RENDER_DATA_END_OFFSET      0x4c
#define RENDER_DATA_SIZE_DIVISOR    6
#define RENDER_DATA_SHIFT_DIVISOR    0x3f
#define RENDER_DATA_BLOCK_SIZE      0x60
#define RENDER_DATA_FIELD_OFFSET    0x58
#define RENDER_DATA_SECOND_OFFSET   0x5c
#define RENDER_FLAG_OFFSET          499
#define RENDER_ITERATION_COUNT      0x10
#define RENDER_CHSYSTEM_SIZE_1         0x26
#define RENDER_CHSYSTEM_SIZE_2         0x98
#define RENDER_PADDING_COUNT_1      5
#define RENDER_PADDING_COUNT_2      9
#define RENDER_EXTENDED_OFFSET_1    0x1fc
#define RENDER_EXTENDED_OFFSET_2    0x1fe
#define RENDER_LARGE_OFFSET_1       0x18c9
#define RENDER_DATA_ARRAY_SIZE      0x10

// 函数: void serialize_render_data(int32_t *render_params, int64_t *buffer_manager)
// 功能: 序列化渲染数据，处理各种渲染参数和缓冲区管理
// 参数: render_params - 渲染参数数组, buffer_manager - 缓冲区管理器指针
// 返回: 无
// 说明: 此函数负责序列化渲染数据到缓冲区，包括处理各种渲染参数和状态标志
void serialize_render_data(int32_t *render_params, int64_t *buffer_manager)

{
  int8_t uVar1;
  int32_t uVar2;
  int8_t *puVar3;
  int32_t *puVar4;
  int *piVar5;
  int64_t lVar6;
  int64_t *unaff_RBX;
  int iVar7;
  int iVar8;
  int64_t lVar9;
  
  puVar4 = (int32_t *)buffer_manager[1];
  if ((uint64_t)((*buffer_manager - (int64_t)puVar4) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar4 = (int32_t *)unaff_RBX[1];
  }
  *puVar4 = 1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  System_DataSerializer(&render_data_ptr,*render_params);
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  lVar6 = (*(int64_t *)(render_params + RENDER_DATA_END_OFFSET) - *(int64_t *)(render_params + RENDER_DATA_START_OFFSET)) / RENDER_DATA_SIZE_DIVISOR +
          (*(int64_t *)(render_params + RENDER_DATA_END_OFFSET) - *(int64_t *)(render_params + RENDER_DATA_START_OFFSET) >> RENDER_DATA_SHIFT_DIVISOR);
  piVar5 = (int *)unaff_RBX[1];
  iVar8 = (int)(lVar6 >> 4) - (int)(lVar6 >> RENDER_DATA_SHIFT_DIVISOR);
  if ((uint64_t)((*unaff_RBX - (int64_t)piVar5) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = iVar8;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = (int64_t)iVar8;
  if (0 < iVar8) {
    lVar9 = 0;
    do {
      System_QueueProcessor();
      puVar4 = (int32_t *)unaff_RBX[1];
      uVar2 = *(int32_t *)(lVar9 + RENDER_DATA_FIELD_OFFSET + *(int64_t *)(render_params + RENDER_DATA_START_OFFSET));
      if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) < 5) {
        System_BufferManager();
        puVar4 = (int32_t *)unaff_RBX[1];
      }
      *puVar4 = uVar2;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      puVar4 = (int32_t *)unaff_RBX[1];
      uVar2 = *(int32_t *)(lVar9 + RENDER_DATA_SECOND_OFFSET + *(int64_t *)(render_params + RENDER_DATA_START_OFFSET));
      if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) < 5) {
        System_BufferManager();
        puVar4 = (int32_t *)unaff_RBX[1];
      }
      *puVar4 = uVar2;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      lVar9 = lVar9 + RENDER_DATA_BLOCK_SIZE;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  lVar6 = RENDER_ITERATION_COUNT;
  do {
    System_QueueProcessor();
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  FUN_18025a940(&processed_var_9712_ptr,render_params[0x1f2]);
  puVar3 = (int8_t *)unaff_RBX[1];
  uVar1 = *(int8_t *)(render_params + RENDER_FLAG_OFFSET);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar3) + unaff_RBX[2]) < 2) {
    System_BufferManager();
    puVar3 = (int8_t *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  if (*(char *)(render_params + RENDER_FLAG_OFFSET) == '\0') {
    return;
  }
  puVar4 = (int32_t *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar4 = (int32_t *)unaff_RBX[1];
  }
  iVar8 = 0;
  *puVar4 = 0;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  piVar5 = (int *)unaff_RBX[1];
  lVar6 = (*(int64_t *)(render_params + RENDER_EXTENDED_OFFSET_2) - *(int64_t *)(render_params + RENDER_EXTENDED_OFFSET_1)) / RENDER_CHSYSTEM_SIZE_1 +
          (*(int64_t *)(render_params + RENDER_EXTENDED_OFFSET_2) - *(int64_t *)(render_params + RENDER_EXTENDED_OFFSET_1) >> RENDER_DATA_SHIFT_DIVISOR);
  if ((uint64_t)((*unaff_RBX - (int64_t)piVar5) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> RENDER_DATA_SHIFT_DIVISOR);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = *(int64_t *)(render_params + RENDER_EXTENDED_OFFSET_2) - *(int64_t *)(render_params + RENDER_EXTENDED_OFFSET_1) >> RENDER_DATA_SHIFT_DIVISOR;
  iVar7 = iVar8;
  if ((*(int64_t *)(render_params + RENDER_EXTENDED_OFFSET_2) - *(int64_t *)(render_params + RENDER_EXTENDED_OFFSET_1)) / RENDER_CHSYSTEM_SIZE_2 + lVar6 != lVar6) {
    do {
      System_QueueProcessor();
      iVar7 = iVar7 + 1;
    } while ((uint64_t)(int64_t)iVar7 <
             (uint64_t)((*(int64_t *)(render_params + RENDER_EXTENDED_OFFSET_2) - *(int64_t *)(render_params + RENDER_EXTENDED_OFFSET_1)) / RENDER_CHSYSTEM_SIZE_2));
  }
  System_QueueProcessor();
  puVar3 = (int8_t *)unaff_RBX[1];
  uVar1 = *(int8_t *)(render_params + 0x22a);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar3) + unaff_RBX[2]) < 2) {
    System_BufferManager();
    puVar3 = (int8_t *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar4 = (int32_t *)unaff_RBX[1];
  uVar2 = render_params[0x22b];
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar4 = (int32_t *)unaff_RBX[1];
  }
  *puVar4 = uVar2;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  System_QueueProcessor();
  lVar6 = (*(int64_t *)(render_params + 0x254) - *(int64_t *)(render_params + 0x252)) / RENDER_CHSYSTEM_SIZE_1 +
          (*(int64_t *)(render_params + 0x254) - *(int64_t *)(render_params + 0x252) >> RENDER_DATA_SHIFT_DIVISOR);
  piVar5 = (int *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)piVar5) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> RENDER_DATA_SHIFT_DIVISOR);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = *(int64_t *)(render_params + 0x254) - *(int64_t *)(render_params + 0x252) >> RENDER_DATA_SHIFT_DIVISOR;
  iVar7 = iVar8;
  if ((*(int64_t *)(render_params + 0x254) - *(int64_t *)(render_params + 0x252)) / RENDER_CHSYSTEM_SIZE_2 + lVar6 != lVar6) {
    do {
      System_QueueProcessor();
      iVar7 = iVar7 + 1;
    } while ((uint64_t)(int64_t)iVar7 <
             (uint64_t)((*(int64_t *)(render_params + 0x254) - *(int64_t *)(render_params + 0x252)) / RENDER_CHSYSTEM_SIZE_2));
  }
  lVar6 = RENDER_PADDING_COUNT_1;
  do {
    System_QueueProcessor();
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  lVar6 = (*(int64_t *)(render_params + 0x31a) - *(int64_t *)(render_params + 0x318)) / RENDER_CHSYSTEM_SIZE_1 +
          (*(int64_t *)(render_params + 0x31a) - *(int64_t *)(render_params + 0x318) >> RENDER_DATA_SHIFT_DIVISOR);
  piVar5 = (int *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)piVar5) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> RENDER_DATA_SHIFT_DIVISOR);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = *(int64_t *)(render_params + 0x31a) - *(int64_t *)(render_params + 0x318) >> RENDER_DATA_SHIFT_DIVISOR;
  iVar7 = iVar8;
  if ((*(int64_t *)(render_params + 0x31a) - *(int64_t *)(render_params + 0x318)) / RENDER_CHSYSTEM_SIZE_2 + lVar6 != lVar6) {
    do {
      System_QueueProcessor();
      iVar7 = iVar7 + 1;
    } while ((uint64_t)(int64_t)iVar7 <
             (uint64_t)((*(int64_t *)(render_params + 0x31a) - *(int64_t *)(render_params + 0x318)) / RENDER_CHSYSTEM_SIZE_2));
  }
  lVar6 = RENDER_PADDING_COUNT_2;
  do {
    System_QueueProcessor();
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  System_QueueProcessor();
  System_QueueProcessor();
  lVar6 = (*(int64_t *)(render_params + 0x624) - *(int64_t *)(render_params + 0x622)) / RENDER_CHSYSTEM_SIZE_1 +
          (*(int64_t *)(render_params + 0x624) - *(int64_t *)(render_params + 0x622) >> RENDER_DATA_SHIFT_DIVISOR);
  piVar5 = (int *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)piVar5) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> RENDER_DATA_SHIFT_DIVISOR);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = *(int64_t *)(render_params + 0x624) - *(int64_t *)(render_params + 0x622) >> RENDER_DATA_SHIFT_DIVISOR;
  iVar7 = iVar8;
  if ((*(int64_t *)(render_params + 0x624) - *(int64_t *)(render_params + 0x622)) / RENDER_CHSYSTEM_SIZE_2 + lVar6 != lVar6) {
    do {
      System_QueueProcessor();
      iVar7 = iVar7 + 1;
    } while ((uint64_t)(int64_t)iVar7 <
             (uint64_t)((*(int64_t *)(render_params + 0x624) - *(int64_t *)(render_params + 0x622)) / RENDER_CHSYSTEM_SIZE_2));
  }
  System_QueueProcessor();
  puVar3 = (int8_t *)unaff_RBX[1];
  uVar1 = *(int8_t *)((int64_t)render_params + RENDER_LARGE_OFFSET_1);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar3) + unaff_RBX[2]) < 2) {
    System_BufferManager();
    puVar3 = (int8_t *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar4 = (int32_t *)unaff_RBX[1];
  if (*(char *)((int64_t)render_params + RENDER_LARGE_OFFSET_1) != '\0') {
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    puVar4 = (int32_t *)unaff_RBX[1];
  }
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar4 = (int32_t *)unaff_RBX[1];
  }
  *puVar4 = RENDER_ITERATION_COUNT;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  do {
    piVar5 = (int *)unaff_RBX[1];
    if ((uint64_t)((*unaff_RBX - (int64_t)piVar5) + unaff_RBX[2]) < 5) {
      System_BufferManager();
      piVar5 = (int *)unaff_RBX[1];
    }
    *piVar5 = iVar8;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    System_QueueProcessor();
    iVar8 = iVar8 + 1;
  } while (iVar8 < RENDER_DATA_ARRAY_SIZE);
  return;
}

// 函数: void process_render_batch(int32_t *render_params)
// 功能: 处理渲染批次数据，执行批量渲染操作
// 参数: render_params - 渲染参数数组
// 返回: 无
// 说明: 此函数负责处理渲染批次数据，包括批量渲染操作和状态管理
void process_render_batch(int32_t *render_params)

{
  int8_t uVar1;
  int32_t uVar2;
  int64_t in_RAX;
  int8_t *puVar3;
  int32_t *puVar4;
  int *piVar5;
  int64_t lVar6;
  int64_t *unaff_RBX;
  int iVar7;
  int iVar8;
  int64_t lVar9;
  int32_t *unaff_RDI;
  
  if ((uint64_t)((in_RAX - (int64_t)render_params) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    render_params = (int32_t *)unaff_RBX[1];
  }
  *render_params = 1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  System_DataSerializer(&render_data_ptr,*unaff_RDI);
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  lVar6 = (*(int64_t *)(unaff_RDI + RENDER_DATA_END_OFFSET) - *(int64_t *)(unaff_RDI + RENDER_DATA_START_OFFSET)) / RENDER_DATA_SIZE_DIVISOR +
          (*(int64_t *)(unaff_RDI + RENDER_DATA_END_OFFSET) - *(int64_t *)(unaff_RDI + RENDER_DATA_START_OFFSET) >> RENDER_DATA_SHIFT_DIVISOR);
  piVar5 = (int *)unaff_RBX[1];
  iVar8 = (int)(lVar6 >> 4) - (int)(lVar6 >> RENDER_DATA_SHIFT_DIVISOR);
  if ((uint64_t)((*unaff_RBX - (int64_t)piVar5) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = iVar8;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = (int64_t)iVar8;
  if (0 < iVar8) {
    lVar9 = 0;
    do {
      System_QueueProcessor();
      puVar4 = (int32_t *)unaff_RBX[1];
      uVar2 = *(int32_t *)(lVar9 + RENDER_DATA_FIELD_OFFSET + *(int64_t *)(unaff_RDI + RENDER_DATA_START_OFFSET));
      if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) < 5) {
        System_BufferManager();
        puVar4 = (int32_t *)unaff_RBX[1];
      }
      *puVar4 = uVar2;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      puVar4 = (int32_t *)unaff_RBX[1];
      uVar2 = *(int32_t *)(lVar9 + RENDER_DATA_SECOND_OFFSET + *(int64_t *)(unaff_RDI + RENDER_DATA_START_OFFSET));
      if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) < 5) {
        System_BufferManager();
        puVar4 = (int32_t *)unaff_RBX[1];
      }
      *puVar4 = uVar2;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      lVar9 = lVar9 + RENDER_DATA_BLOCK_SIZE;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  lVar6 = RENDER_ITERATION_COUNT;
  do {
    System_QueueProcessor();
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  FUN_18025a940(&processed_var_9712_ptr,unaff_RDI[0x1f2]);
  puVar3 = (int8_t *)unaff_RBX[1];
  uVar1 = *(int8_t *)(unaff_RDI + RENDER_FLAG_OFFSET);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar3) + unaff_RBX[2]) < 2) {
    System_BufferManager();
    puVar3 = (int8_t *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  if (*(char *)(unaff_RDI + RENDER_FLAG_OFFSET) == '\0') {
    return;
  }
  puVar4 = (int32_t *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar4 = (int32_t *)unaff_RBX[1];
  }
  iVar8 = 0;
  *puVar4 = 0;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  piVar5 = (int *)unaff_RBX[1];
  lVar6 = (*(int64_t *)(unaff_RDI + RENDER_EXTENDED_OFFSET_2) - *(int64_t *)(unaff_RDI + RENDER_EXTENDED_OFFSET_1)) / RENDER_CHSYSTEM_SIZE_1 +
          (*(int64_t *)(unaff_RDI + RENDER_EXTENDED_OFFSET_2) - *(int64_t *)(unaff_RDI + RENDER_EXTENDED_OFFSET_1) >> RENDER_DATA_SHIFT_DIVISOR);
  if ((uint64_t)((*unaff_RBX - (int64_t)piVar5) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> RENDER_DATA_SHIFT_DIVISOR);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = *(int64_t *)(unaff_RDI + RENDER_EXTENDED_OFFSET_2) - *(int64_t *)(unaff_RDI + RENDER_EXTENDED_OFFSET_1) >> RENDER_DATA_SHIFT_DIVISOR;
  iVar7 = iVar8;
  if ((*(int64_t *)(unaff_RDI + RENDER_EXTENDED_OFFSET_2) - *(int64_t *)(unaff_RDI + RENDER_EXTENDED_OFFSET_1)) / RENDER_CHSYSTEM_SIZE_2 + lVar6 != lVar6)
  {
    do {
      System_QueueProcessor();
      iVar7 = iVar7 + 1;
    } while ((uint64_t)(int64_t)iVar7 <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + RENDER_EXTENDED_OFFSET_2) - *(int64_t *)(unaff_RDI + RENDER_EXTENDED_OFFSET_1)) / RENDER_CHSYSTEM_SIZE_2));
  }
  System_QueueProcessor();
  puVar3 = (int8_t *)unaff_RBX[1];
  uVar1 = *(int8_t *)(unaff_RDI + 0x22a);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar3) + unaff_RBX[2]) < 2) {
    System_BufferManager();
    puVar3 = (int8_t *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar4 = (int32_t *)unaff_RBX[1];
  uVar2 = unaff_RDI[0x22b];
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar4 = (int32_t *)unaff_RBX[1];
  }
  *puVar4 = uVar2;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  System_QueueProcessor();
  lVar6 = (*(int64_t *)(unaff_RDI + 0x254) - *(int64_t *)(unaff_RDI + 0x252)) / RENDER_CHSYSTEM_SIZE_1 +
          (*(int64_t *)(unaff_RDI + 0x254) - *(int64_t *)(unaff_RDI + 0x252) >> RENDER_DATA_SHIFT_DIVISOR);
  piVar5 = (int *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)piVar5) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> RENDER_DATA_SHIFT_DIVISOR);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = *(int64_t *)(unaff_RDI + 0x254) - *(int64_t *)(unaff_RDI + 0x252) >> RENDER_DATA_SHIFT_DIVISOR;
  iVar7 = iVar8;
  if ((*(int64_t *)(unaff_RDI + 0x254) - *(int64_t *)(unaff_RDI + 0x252)) / RENDER_CHSYSTEM_SIZE_2 + lVar6 != lVar6)
  {
    do {
      System_QueueProcessor();
      iVar7 = iVar7 + 1;
    } while ((uint64_t)(int64_t)iVar7 <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0x254) - *(int64_t *)(unaff_RDI + 0x252)) / RENDER_CHSYSTEM_SIZE_2));
  }
  lVar6 = RENDER_PADDING_COUNT_1;
  do {
    System_QueueProcessor();
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  lVar6 = (*(int64_t *)(unaff_RDI + 0x31a) - *(int64_t *)(unaff_RDI + 0x318)) / RENDER_CHSYSTEM_SIZE_1 +
          (*(int64_t *)(unaff_RDI + 0x31a) - *(int64_t *)(unaff_RDI + 0x318) >> RENDER_DATA_SHIFT_DIVISOR);
  piVar5 = (int *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)piVar5) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> RENDER_DATA_SHIFT_DIVISOR);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = *(int64_t *)(unaff_RDI + 0x31a) - *(int64_t *)(unaff_RDI + 0x318) >> RENDER_DATA_SHIFT_DIVISOR;
  iVar7 = iVar8;
  if ((*(int64_t *)(unaff_RDI + 0x31a) - *(int64_t *)(unaff_RDI + 0x318)) / RENDER_CHSYSTEM_SIZE_2 + lVar6 != lVar6)
  {
    do {
      System_QueueProcessor();
      iVar7 = iVar7 + 1;
    } while ((uint64_t)(int64_t)iVar7 <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0x31a) - *(int64_t *)(unaff_RDI + 0x318)) / RENDER_CHSYSTEM_SIZE_2));
  }
  lVar6 = RENDER_PADDING_COUNT_2;
  do {
    System_QueueProcessor();
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  System_QueueProcessor();
  System_QueueProcessor();
  lVar6 = (*(int64_t *)(unaff_RDI + 0x624) - *(int64_t *)(unaff_RDI + 0x622)) / RENDER_CHSYSTEM_SIZE_1 +
          (*(int64_t *)(unaff_RDI + 0x624) - *(int64_t *)(unaff_RDI + 0x622) >> RENDER_DATA_SHIFT_DIVISOR);
  piVar5 = (int *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)piVar5) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> RENDER_DATA_SHIFT_DIVISOR);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = *(int64_t *)(unaff_RDI + 0x624) - *(int64_t *)(unaff_RDI + 0x622) >> RENDER_DATA_SHIFT_DIVISOR;
  iVar7 = iVar8;
  if ((*(int64_t *)(unaff_RDI + 0x624) - *(int64_t *)(unaff_RDI + 0x622)) / RENDER_CHSYSTEM_SIZE_2 + lVar6 != lVar6)
  {
    do {
      System_QueueProcessor();
      iVar7 = iVar7 + 1;
    } while ((uint64_t)(int64_t)iVar7 <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0x624) - *(int64_t *)(unaff_RDI + 0x622)) / RENDER_CHSYSTEM_SIZE_2));
  }
  System_QueueProcessor();
  puVar3 = (int8_t *)unaff_RBX[1];
  uVar1 = *(int8_t *)((int64_t)unaff_RDI + RENDER_LARGE_OFFSET_1);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar3) + unaff_RBX[2]) < 2) {
    System_BufferManager();
    puVar3 = (int8_t *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar4 = (int32_t *)unaff_RBX[1];
  if (*(char *)((int64_t)unaff_RDI + RENDER_LARGE_OFFSET_1) != '\0') {
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    puVar4 = (int32_t *)unaff_RBX[1];
  }
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar4 = (int32_t *)unaff_RBX[1];
  }
  *puVar4 = RENDER_ITERATION_COUNT;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  do {
    piVar5 = (int *)unaff_RBX[1];
    if ((uint64_t)((*unaff_RBX - (int64_t)piVar5) + unaff_RBX[2]) < 5) {
      System_BufferManager();
      piVar5 = (int *)unaff_RBX[1];
    }
    *piVar5 = iVar8;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    System_QueueProcessor();
    iVar8 = iVar8 + 1;
  } while (iVar8 < RENDER_DATA_ARRAY_SIZE);
  return;
}

// 函数: void serialize_vertex_attributes(void)
// 功能: 序列化顶点属性数据，包括位置、纹理坐标、法线等信息
void serialize_vertex_attributes(void)

{
  int8_t byte_value;
  int32_t dword_value;
  int64_t temp_var;
  int8_t *byte_ptr;
  int32_t *dword_ptr;
  int *int_ptr;
  int64_t *unaff_RBX;
  uint unaff_EBP;
  int loop_counter;
  int64_t data_count;
  int item_count;
  uint64_t uVar10;
  int64_t unaff_RDI;
  int64_t unaff_R14;
  
  uVar10 = (uint64_t)unaff_EBP;
  do {
    System_QueueProcessor();
    dword_ptr = (int32_t *)unaff_RBX[1];
    dword_value = *(int32_t *)(uVar10 + 0x58 + *(int64_t *)(unaff_RDI + 0x128));
    if ((uint64_t)((*unaff_RBX - (int64_t)dword_ptr) + unaff_RBX[2]) < 5) {
      System_BufferManager();
      dword_ptr = (int32_t *)unaff_RBX[1];
    }
    *dword_ptr = dword_value;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    dword_ptr = (int32_t *)unaff_RBX[1];
    dword_value = *(int32_t *)(uVar10 + 0x5c + *(int64_t *)(unaff_RDI + 0x128));
    if ((uint64_t)((*unaff_RBX - (int64_t)dword_ptr) + unaff_RBX[2]) < 5) {
      System_BufferManager();
      dword_ptr = (int32_t *)unaff_RBX[1];
    }
    *dword_ptr = dword_value;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    uVar10 = uVar10 + 0x60;
    unaff_R14 = unaff_R14 + -1;
  } while (unaff_R14 != 0);
  
  // 填充空白字节
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  data_count = 0x10;
  do {
    System_QueueProcessor();
    data_count = data_count + -1;
  } while (data_count != 0);
  
  // 处理材质标识符
  FUN_18025a940(&processed_var_9712_ptr, *(int32_t *)(unaff_RDI + 0x7c8));
  byte_ptr = (int8_t *)unaff_RBX[1];
  byte_value = *(int8_t *)(unaff_RDI + 0x7cc);
  if ((uint64_t)((*unaff_RBX - (int64_t)byte_ptr) + unaff_RBX[2]) < 2) {
    System_BufferManager();
    byte_ptr = (int8_t *)unaff_RBX[1];
  }
  *byte_ptr = byte_value;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  if (*(char *)(unaff_RDI + 0x7cc) == '\0') {
    return;
  }
  
  // 序列化材质属性
  dword_ptr = (int32_t *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)dword_ptr) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    dword_ptr = (int32_t *)unaff_RBX[1];
  }
  item_count = 0;
  *dword_ptr = 0;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  data_count = *(int64_t *)(unaff_RDI + 0x7f8) - *(int64_t *)(unaff_RDI + 0x7f0);
  int_ptr = (int *)unaff_RBX[1];
  data_count = data_count / 0x26 + (data_count >> 0x3f);
  if ((uint64_t)((*unaff_RBX - (int64_t)int_ptr) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    int_ptr = (int *)unaff_RBX[1];
  }
  *int_ptr = (int)(data_count >> 2) - (int)(data_count >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  temp_var = *(int64_t *)(unaff_RDI + 0x7f8) - *(int64_t *)(unaff_RDI + 0x7f0);
  data_count = temp_var >> 0x3f;
  loop_counter = item_count;
  if (temp_var / 0x98 + data_count != data_count) {
    do {
      System_QueueProcessor();
      loop_counter = loop_counter + 1;
    } while ((uint64_t)(int64_t)loop_counter <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0x7f8) - *(int64_t *)(unaff_RDI + 0x7f0)) / 0x98));
  }
  System_QueueProcessor();
  byte_ptr = (int8_t *)unaff_RBX[1];
  byte_value = *(int8_t *)(unaff_RDI + 0x8a8);
  if ((uint64_t)((*unaff_RBX - (int64_t)byte_ptr) + unaff_RBX[2]) < 2) {
    System_BufferManager();
    byte_ptr = (int8_t *)unaff_RBX[1];
  }
  *byte_ptr = byte_value;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  dword_ptr = (int32_t *)unaff_RBX[1];
  dword_value = *(int32_t *)(unaff_RDI + 0x8ac);
  if ((uint64_t)((*unaff_RBX - (int64_t)dword_ptr) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    dword_ptr = (int32_t *)unaff_RBX[1];
  }
  *dword_ptr = dword_value;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  System_QueueProcessor();
  
  // 序列化纹理坐标数据
  data_count = *(int64_t *)(unaff_RDI + 0x950) - *(int64_t *)(unaff_RDI + 0x948);
  data_count = data_count / 0x26 + (data_count >> 0x3f);
  int_ptr = (int *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)int_ptr) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    int_ptr = (int *)unaff_RBX[1];
  }
  *int_ptr = (int)(data_count >> 2) - (int)(data_count >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  temp_var = *(int64_t *)(unaff_RDI + 0x950) - *(int64_t *)(unaff_RDI + 0x948);
  data_count = temp_var >> 0x3f;
  loop_counter = item_count;
  if (temp_var / 0x98 + data_count != data_count) {
    do {
      System_QueueProcessor();
      loop_counter = loop_counter + 1;
    } while ((uint64_t)(int64_t)loop_counter <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0x950) - *(int64_t *)(unaff_RDI + 0x948)) / 0x98));
  }
  
  // 填充纹理数据间隔
  data_count = 5;
  do {
    System_QueueProcessor();
    data_count = data_count + -1;
  } while (data_count != 0);
  
  // 序列化法线数据
  data_count = *(int64_t *)(unaff_RDI + 0xc68) - *(int64_t *)(unaff_RDI + 0xc60);
  data_count = data_count / 0x26 + (data_count >> 0x3f);
  int_ptr = (int *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)int_ptr) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    int_ptr = (int *)unaff_RBX[1];
  }
  *int_ptr = (int)(data_count >> 2) - (int)(data_count >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  temp_var = *(int64_t *)(unaff_RDI + 0xc68) - *(int64_t *)(unaff_RDI + 0xc60);
  data_count = temp_var >> 0x3f;
  loop_counter = item_count;
  if (temp_var / 0x98 + data_count != data_count) {
    do {
      System_QueueProcessor();
      loop_counter = loop_counter + 1;
    } while ((uint64_t)(int64_t)loop_counter <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0xc68) - *(int64_t *)(unaff_RDI + 0xc60)) / 0x98));
  }
  
  // 填充法线数据间隔
  data_count = 9;
  do {
    System_QueueProcessor();
    data_count = data_count + -1;
  } while (data_count != 0);
  
  System_QueueProcessor();
  System_QueueProcessor();
  
  // 序列化颜色数据
  data_count = *(int64_t *)(unaff_RDI + 0x1890) - *(int64_t *)(unaff_RDI + 0x1888);
  data_count = data_count / 0x26 + (data_count >> 0x3f);
  int_ptr = (int *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)int_ptr) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    int_ptr = (int *)unaff_RBX[1];
  }
  *int_ptr = (int)(data_count >> 2) - (int)(data_count >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  temp_var = *(int64_t *)(unaff_RDI + 0x1890) - *(int64_t *)(unaff_RDI + 0x1888);
  data_count = temp_var >> 0x3f;
  loop_counter = item_count;
  if (temp_var / 0x98 + data_count != data_count) {
    do {
      System_QueueProcessor();
      loop_counter = loop_counter + 1;
    } while ((uint64_t)(int64_t)loop_counter <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0x1890) - *(int64_t *)(unaff_RDI + 0x1888)) / 0x98));
  }
  System_QueueProcessor();
  byte_ptr = (int8_t *)unaff_RBX[1];
  byte_value = *(int8_t *)(unaff_RDI + 0x18c9);
  if ((uint64_t)((*unaff_RBX - (int64_t)byte_ptr) + unaff_RBX[2]) < 2) {
    System_BufferManager();
    byte_ptr = (int8_t *)unaff_RBX[1];
  }
  *byte_ptr = byte_value;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  dword_ptr = (int32_t *)unaff_RBX[1];
  if (*(char *)(unaff_RDI + 0x18c9) != '\0') {
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    dword_ptr = (int32_t *)unaff_RBX[1];
  }
  if ((uint64_t)((*unaff_RBX - (int64_t)dword_ptr) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    dword_ptr = (int32_t *)unaff_RBX[1];
  }
  *dword_ptr = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  
  // 序列化额外的渲染属性
  do {
    int_ptr = (int *)unaff_RBX[1];
    if ((uint64_t)((*unaff_RBX - (int64_t)int_ptr) + unaff_RBX[2]) < 5) {
      System_BufferManager();
      int_ptr = (int *)unaff_RBX[1];
    }
    *int_ptr = item_count;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    System_QueueProcessor();
    item_count = item_count + 1;
  } while (item_count < 0x10);
  return;
}



// 函数: void serialize_material_properties(void)
// 功能: 序列化材质属性数据，处理材质标识符和属性数组
void serialize_material_properties(void)

{
  int8_t byte_value;
  int32_t dword_value;
  int64_t temp_var;
  int8_t *byte_ptr;
  int32_t *dword_ptr;
  int *int_ptr;
  int64_t *unaff_RBX;
  int loop_counter;
  int64_t data_count;
  int item_count;
  int64_t unaff_RDI;
  
  // 填充空白字节
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  System_QueueProcessor();
  data_count = 0x10;
  do {
    System_QueueProcessor();
    data_count = data_count + -1;
  } while (data_count != 0);
  
  // 处理材质标识符
  FUN_18025a940(&processed_var_9712_ptr, *(int32_t *)(unaff_RDI + 0x7c8));
  byte_ptr = (int8_t *)unaff_RBX[1];
  byte_value = *(int8_t *)(unaff_RDI + 0x7cc);
  if ((uint64_t)((*unaff_RBX - (int64_t)byte_ptr) + unaff_RBX[2]) < 2) {
    System_BufferManager();
    byte_ptr = (int8_t *)unaff_RBX[1];
  }
  *byte_ptr = byte_value;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  if (*(char *)(unaff_RDI + 0x7cc) == '\0') {
    return;
  }
  
  // 序列化材质属性
  dword_ptr = (int32_t *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)dword_ptr) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    dword_ptr = (int32_t *)unaff_RBX[1];
  }
  item_count = 0;
  *dword_ptr = 0;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  data_count = *(int64_t *)(unaff_RDI + 0x7f8) - *(int64_t *)(unaff_RDI + 0x7f0);
  int_ptr = (int *)unaff_RBX[1];
  data_count = data_count / 0x26 + (data_count >> 0x3f);
  if ((uint64_t)((*unaff_RBX - (int64_t)int_ptr) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    int_ptr = (int *)unaff_RBX[1];
  }
  *int_ptr = (int)(data_count >> 2) - (int)(data_count >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  temp_var = *(int64_t *)(unaff_RDI + 0x7f8) - *(int64_t *)(unaff_RDI + 0x7f0);
  data_count = temp_var >> 0x3f;
  loop_counter = item_count;
  if (temp_var / 0x98 + data_count != data_count) {
    do {
      System_QueueProcessor();
      loop_counter = loop_counter + 1;
    } while ((uint64_t)(int64_t)loop_counter <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0x7f8) - *(int64_t *)(unaff_RDI + 0x7f0)) / 0x98));
  }
  System_QueueProcessor();
  byte_ptr = (int8_t *)unaff_RBX[1];
  byte_value = *(int8_t *)(unaff_RDI + 0x8a8);
  if ((uint64_t)((*unaff_RBX - (int64_t)byte_ptr) + unaff_RBX[2]) < 2) {
    System_BufferManager();
    byte_ptr = (int8_t *)unaff_RBX[1];
  }
  *byte_ptr = byte_value;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  dword_ptr = (int32_t *)unaff_RBX[1];
  dword_value = *(int32_t *)(unaff_RDI + 0x8ac);
  if ((uint64_t)((*unaff_RBX - (int64_t)dword_ptr) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    dword_ptr = (int32_t *)unaff_RBX[1];
  }
  *dword_ptr = dword_value;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  System_QueueProcessor();
  
  // 序列化纹理坐标数据
  data_count = *(int64_t *)(unaff_RDI + 0x950) - *(int64_t *)(unaff_RDI + 0x948);
  data_count = data_count / 0x26 + (data_count >> 0x3f);
  int_ptr = (int *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)int_ptr) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    int_ptr = (int *)unaff_RBX[1];
  }
  *int_ptr = (int)(data_count >> 2) - (int)(data_count >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  temp_var = *(int64_t *)(unaff_RDI + 0x950) - *(int64_t *)(unaff_RDI + 0x948);
  data_count = temp_var >> 0x3f;
  loop_counter = item_count;
  if (temp_var / 0x98 + data_count != data_count) {
    do {
      System_QueueProcessor();
      loop_counter = loop_counter + 1;
    } while ((uint64_t)(int64_t)loop_counter <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0x950) - *(int64_t *)(unaff_RDI + 0x948)) / 0x98));
  }
  
  // 填充纹理数据间隔
  data_count = 5;
  do {
    System_QueueProcessor();
    data_count = data_count + -1;
  } while (data_count != 0);
  
  // 序列化法线数据
  data_count = *(int64_t *)(unaff_RDI + 0xc68) - *(int64_t *)(unaff_RDI + 0xc60);
  data_count = data_count / 0x26 + (data_count >> 0x3f);
  int_ptr = (int *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)int_ptr) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    int_ptr = (int *)unaff_RBX[1];
  }
  *int_ptr = (int)(data_count >> 2) - (int)(data_count >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  temp_var = *(int64_t *)(unaff_RDI + 0xc68) - *(int64_t *)(unaff_RDI + 0xc60);
  data_count = temp_var >> 0x3f;
  loop_counter = item_count;
  if (temp_var / 0x98 + data_count != data_count) {
    do {
      System_QueueProcessor();
      loop_counter = loop_counter + 1;
    } while ((uint64_t)(int64_t)loop_counter <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0xc68) - *(int64_t *)(unaff_RDI + 0xc60)) / 0x98));
  }
  
  // 填充法线数据间隔
  data_count = 9;
  do {
    System_QueueProcessor();
    data_count = data_count + -1;
  } while (data_count != 0);
  
  System_QueueProcessor();
  System_QueueProcessor();
  
  // 序列化颜色数据
  data_count = *(int64_t *)(unaff_RDI + 0x1890) - *(int64_t *)(unaff_RDI + 0x1888);
  data_count = data_count / 0x26 + (data_count >> 0x3f);
  int_ptr = (int *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)int_ptr) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    int_ptr = (int *)unaff_RBX[1];
  }
  *int_ptr = (int)(data_count >> 2) - (int)(data_count >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  temp_var = *(int64_t *)(unaff_RDI + 0x1890) - *(int64_t *)(unaff_RDI + 0x1888);
  data_count = temp_var >> 0x3f;
  loop_counter = item_count;
  if (temp_var / 0x98 + data_count != data_count) {
    do {
      System_QueueProcessor();
      loop_counter = loop_counter + 1;
    } while ((uint64_t)(int64_t)loop_counter <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0x1890) - *(int64_t *)(unaff_RDI + 0x1888)) / 0x98));
  }
  System_QueueProcessor();
  byte_ptr = (int8_t *)unaff_RBX[1];
  byte_value = *(int8_t *)(unaff_RDI + 0x18c9);
  if ((uint64_t)((*unaff_RBX - (int64_t)byte_ptr) + unaff_RBX[2]) < 2) {
    System_BufferManager();
    byte_ptr = (int8_t *)unaff_RBX[1];
  }
  *byte_ptr = byte_value;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  dword_ptr = (int32_t *)unaff_RBX[1];
  if (*(char *)(unaff_RDI + 0x18c9) != '\0') {
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    dword_ptr = (int32_t *)unaff_RBX[1];
  }
  if ((uint64_t)((*unaff_RBX - (int64_t)dword_ptr) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    dword_ptr = (int32_t *)unaff_RBX[1];
  }
  *dword_ptr = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  
  // 序列化额外的渲染属性
  do {
    int_ptr = (int *)unaff_RBX[1];
    if ((uint64_t)((*unaff_RBX - (int64_t)int_ptr) + unaff_RBX[2]) < 5) {
      System_BufferManager();
      int_ptr = (int *)unaff_RBX[1];
    }
    *int_ptr = item_count;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    System_QueueProcessor();
    item_count = item_count + 1;
  } while (item_count < 0x10);
  return;
}