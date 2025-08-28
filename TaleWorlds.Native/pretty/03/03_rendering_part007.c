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
#define RENDER_CHUNK_SIZE_1         0x26
#define RENDER_CHUNK_SIZE_2         0x98
#define RENDER_PADDING_COUNT_1      5
#define RENDER_PADDING_COUNT_2      9
#define RENDER_EXTENDED_OFFSET_1    0x1fc
#define RENDER_EXTENDED_OFFSET_2    0x1fe
#define RENDER_LARGE_OFFSET_1       0x18c9
#define RENDER_DATA_ARRAY_SIZE      0x10

// 函数: void serialize_render_data(int32_t *render_params, longlong *buffer_manager)
// 功能: 序列化渲染数据，处理各种渲染参数和缓冲区管理
// 参数: render_params - 渲染参数数组, buffer_manager - 缓冲区管理器指针
// 返回: 无
// 说明: 此函数负责序列化渲染数据到缓冲区，包括处理各种渲染参数和状态标志
void serialize_render_data(int32_t *render_params, longlong *buffer_manager)

{
  int8_t uVar1;
  int32_t uVar2;
  int8_t *puVar3;
  int32_t *puVar4;
  int *piVar5;
  longlong lVar6;
  longlong *unaff_RBX;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  puVar4 = (int32_t *)buffer_manager[1];
  if ((ulonglong)((*buffer_manager - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (int32_t *)unaff_RBX[1];
  }
  *puVar4 = 1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  FUN_180272d60(&unknown_var_9376_ptr,*render_params);
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  lVar6 = (*(longlong *)(render_params + RENDER_DATA_END_OFFSET) - *(longlong *)(render_params + RENDER_DATA_START_OFFSET)) / RENDER_DATA_SIZE_DIVISOR +
          (*(longlong *)(render_params + RENDER_DATA_END_OFFSET) - *(longlong *)(render_params + RENDER_DATA_START_OFFSET) >> RENDER_DATA_SHIFT_DIVISOR);
  piVar5 = (int *)unaff_RBX[1];
  iVar8 = (int)(lVar6 >> 4) - (int)(lVar6 >> RENDER_DATA_SHIFT_DIVISOR);
  if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = iVar8;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = (longlong)iVar8;
  if (0 < iVar8) {
    lVar9 = 0;
    do {
      FUN_180639ec0();
      puVar4 = (int32_t *)unaff_RBX[1];
      uVar2 = *(int32_t *)(lVar9 + RENDER_DATA_FIELD_OFFSET + *(longlong *)(render_params + RENDER_DATA_START_OFFSET));
      if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar4 = (int32_t *)unaff_RBX[1];
      }
      *puVar4 = uVar2;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      puVar4 = (int32_t *)unaff_RBX[1];
      uVar2 = *(int32_t *)(lVar9 + RENDER_DATA_SECOND_OFFSET + *(longlong *)(render_params + RENDER_DATA_START_OFFSET));
      if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar4 = (int32_t *)unaff_RBX[1];
      }
      *puVar4 = uVar2;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      lVar9 = lVar9 + RENDER_DATA_BLOCK_SIZE;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  lVar6 = RENDER_ITERATION_COUNT;
  do {
    FUN_180639ec0();
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  FUN_18025a940(&unknown_var_9712_ptr,render_params[0x1f2]);
  puVar3 = (int8_t *)unaff_RBX[1];
  uVar1 = *(int8_t *)(render_params + RENDER_FLAG_OFFSET);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar3 = (int8_t *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  if (*(char *)(render_params + RENDER_FLAG_OFFSET) == '\0') {
    return;
  }
  puVar4 = (int32_t *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (int32_t *)unaff_RBX[1];
  }
  iVar8 = 0;
  *puVar4 = 0;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  piVar5 = (int *)unaff_RBX[1];
  lVar6 = (*(longlong *)(render_params + RENDER_EXTENDED_OFFSET_2) - *(longlong *)(render_params + RENDER_EXTENDED_OFFSET_1)) / RENDER_CHUNK_SIZE_1 +
          (*(longlong *)(render_params + RENDER_EXTENDED_OFFSET_2) - *(longlong *)(render_params + RENDER_EXTENDED_OFFSET_1) >> RENDER_DATA_SHIFT_DIVISOR);
  if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> RENDER_DATA_SHIFT_DIVISOR);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = *(longlong *)(render_params + RENDER_EXTENDED_OFFSET_2) - *(longlong *)(render_params + RENDER_EXTENDED_OFFSET_1) >> RENDER_DATA_SHIFT_DIVISOR;
  iVar7 = iVar8;
  if ((*(longlong *)(render_params + RENDER_EXTENDED_OFFSET_2) - *(longlong *)(render_params + RENDER_EXTENDED_OFFSET_1)) / RENDER_CHUNK_SIZE_2 + lVar6 != lVar6) {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)((*(longlong *)(render_params + RENDER_EXTENDED_OFFSET_2) - *(longlong *)(render_params + RENDER_EXTENDED_OFFSET_1)) / RENDER_CHUNK_SIZE_2));
  }
  FUN_180639ec0();
  puVar3 = (int8_t *)unaff_RBX[1];
  uVar1 = *(int8_t *)(render_params + 0x22a);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar3 = (int8_t *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar4 = (int32_t *)unaff_RBX[1];
  uVar2 = render_params[0x22b];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (int32_t *)unaff_RBX[1];
  }
  *puVar4 = uVar2;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  FUN_180639ec0();
  lVar6 = (*(longlong *)(render_params + 0x254) - *(longlong *)(render_params + 0x252)) / RENDER_CHUNK_SIZE_1 +
          (*(longlong *)(render_params + 0x254) - *(longlong *)(render_params + 0x252) >> RENDER_DATA_SHIFT_DIVISOR);
  piVar5 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> RENDER_DATA_SHIFT_DIVISOR);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = *(longlong *)(render_params + 0x254) - *(longlong *)(render_params + 0x252) >> RENDER_DATA_SHIFT_DIVISOR;
  iVar7 = iVar8;
  if ((*(longlong *)(render_params + 0x254) - *(longlong *)(render_params + 0x252)) / RENDER_CHUNK_SIZE_2 + lVar6 != lVar6) {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)((*(longlong *)(render_params + 0x254) - *(longlong *)(render_params + 0x252)) / RENDER_CHUNK_SIZE_2));
  }
  lVar6 = RENDER_PADDING_COUNT_1;
  do {
    FUN_180639ec0();
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  lVar6 = (*(longlong *)(render_params + 0x31a) - *(longlong *)(render_params + 0x318)) / RENDER_CHUNK_SIZE_1 +
          (*(longlong *)(render_params + 0x31a) - *(longlong *)(render_params + 0x318) >> RENDER_DATA_SHIFT_DIVISOR);
  piVar5 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> RENDER_DATA_SHIFT_DIVISOR);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = *(longlong *)(render_params + 0x31a) - *(longlong *)(render_params + 0x318) >> RENDER_DATA_SHIFT_DIVISOR;
  iVar7 = iVar8;
  if ((*(longlong *)(render_params + 0x31a) - *(longlong *)(render_params + 0x318)) / RENDER_CHUNK_SIZE_2 + lVar6 != lVar6) {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)((*(longlong *)(render_params + 0x31a) - *(longlong *)(render_params + 0x318)) / RENDER_CHUNK_SIZE_2));
  }
  lVar6 = RENDER_PADDING_COUNT_2;
  do {
    FUN_180639ec0();
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  FUN_180639ec0();
  FUN_180639ec0();
  lVar6 = (*(longlong *)(render_params + 0x624) - *(longlong *)(render_params + 0x622)) / RENDER_CHUNK_SIZE_1 +
          (*(longlong *)(render_params + 0x624) - *(longlong *)(render_params + 0x622) >> RENDER_DATA_SHIFT_DIVISOR);
  piVar5 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> RENDER_DATA_SHIFT_DIVISOR);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = *(longlong *)(render_params + 0x624) - *(longlong *)(render_params + 0x622) >> RENDER_DATA_SHIFT_DIVISOR;
  iVar7 = iVar8;
  if ((*(longlong *)(render_params + 0x624) - *(longlong *)(render_params + 0x622)) / RENDER_CHUNK_SIZE_2 + lVar6 != lVar6) {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)((*(longlong *)(render_params + 0x624) - *(longlong *)(render_params + 0x622)) / RENDER_CHUNK_SIZE_2));
  }
  FUN_180639ec0();
  puVar3 = (int8_t *)unaff_RBX[1];
  uVar1 = *(int8_t *)((longlong)render_params + RENDER_LARGE_OFFSET_1);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar3 = (int8_t *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar4 = (int32_t *)unaff_RBX[1];
  if (*(char *)((longlong)render_params + RENDER_LARGE_OFFSET_1) != '\0') {
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    puVar4 = (int32_t *)unaff_RBX[1];
  }
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (int32_t *)unaff_RBX[1];
  }
  *puVar4 = RENDER_ITERATION_COUNT;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  do {
    piVar5 = (int *)unaff_RBX[1];
    if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      piVar5 = (int *)unaff_RBX[1];
    }
    *piVar5 = iVar8;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    FUN_180639ec0();
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
  longlong in_RAX;
  int8_t *puVar3;
  int32_t *puVar4;
  int *piVar5;
  longlong lVar6;
  longlong *unaff_RBX;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int32_t *unaff_RDI;
  
  if ((ulonglong)((in_RAX - (longlong)render_params) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    render_params = (int32_t *)unaff_RBX[1];
  }
  *render_params = 1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  FUN_180272d60(&unknown_var_9376_ptr,*unaff_RDI);
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  lVar6 = (*(longlong *)(unaff_RDI + RENDER_DATA_END_OFFSET) - *(longlong *)(unaff_RDI + RENDER_DATA_START_OFFSET)) / RENDER_DATA_SIZE_DIVISOR +
          (*(longlong *)(unaff_RDI + RENDER_DATA_END_OFFSET) - *(longlong *)(unaff_RDI + RENDER_DATA_START_OFFSET) >> RENDER_DATA_SHIFT_DIVISOR);
  piVar5 = (int *)unaff_RBX[1];
  iVar8 = (int)(lVar6 >> 4) - (int)(lVar6 >> RENDER_DATA_SHIFT_DIVISOR);
  if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = iVar8;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = (longlong)iVar8;
  if (0 < iVar8) {
    lVar9 = 0;
    do {
      FUN_180639ec0();
      puVar4 = (int32_t *)unaff_RBX[1];
      uVar2 = *(int32_t *)(lVar9 + RENDER_DATA_FIELD_OFFSET + *(longlong *)(unaff_RDI + RENDER_DATA_START_OFFSET));
      if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar4 = (int32_t *)unaff_RBX[1];
      }
      *puVar4 = uVar2;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      puVar4 = (int32_t *)unaff_RBX[1];
      uVar2 = *(int32_t *)(lVar9 + RENDER_DATA_SECOND_OFFSET + *(longlong *)(unaff_RDI + RENDER_DATA_START_OFFSET));
      if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar4 = (int32_t *)unaff_RBX[1];
      }
      *puVar4 = uVar2;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      lVar9 = lVar9 + RENDER_DATA_BLOCK_SIZE;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  lVar6 = RENDER_ITERATION_COUNT;
  do {
    FUN_180639ec0();
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  FUN_18025a940(&unknown_var_9712_ptr,unaff_RDI[0x1f2]);
  puVar3 = (int8_t *)unaff_RBX[1];
  uVar1 = *(int8_t *)(unaff_RDI + RENDER_FLAG_OFFSET);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar3 = (int8_t *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  if (*(char *)(unaff_RDI + RENDER_FLAG_OFFSET) == '\0') {
    return;
  }
  puVar4 = (int32_t *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (int32_t *)unaff_RBX[1];
  }
  iVar8 = 0;
  *puVar4 = 0;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  piVar5 = (int *)unaff_RBX[1];
  lVar6 = (*(longlong *)(unaff_RDI + RENDER_EXTENDED_OFFSET_2) - *(longlong *)(unaff_RDI + RENDER_EXTENDED_OFFSET_1)) / RENDER_CHUNK_SIZE_1 +
          (*(longlong *)(unaff_RDI + RENDER_EXTENDED_OFFSET_2) - *(longlong *)(unaff_RDI + RENDER_EXTENDED_OFFSET_1) >> RENDER_DATA_SHIFT_DIVISOR);
  if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> RENDER_DATA_SHIFT_DIVISOR);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = *(longlong *)(unaff_RDI + RENDER_EXTENDED_OFFSET_2) - *(longlong *)(unaff_RDI + RENDER_EXTENDED_OFFSET_1) >> RENDER_DATA_SHIFT_DIVISOR;
  iVar7 = iVar8;
  if ((*(longlong *)(unaff_RDI + RENDER_EXTENDED_OFFSET_2) - *(longlong *)(unaff_RDI + RENDER_EXTENDED_OFFSET_1)) / RENDER_CHUNK_SIZE_2 + lVar6 != lVar6)
  {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + RENDER_EXTENDED_OFFSET_2) - *(longlong *)(unaff_RDI + RENDER_EXTENDED_OFFSET_1)) / RENDER_CHUNK_SIZE_2));
  }
  FUN_180639ec0();
  puVar3 = (int8_t *)unaff_RBX[1];
  uVar1 = *(int8_t *)(unaff_RDI + 0x22a);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar3 = (int8_t *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar4 = (int32_t *)unaff_RBX[1];
  uVar2 = unaff_RDI[0x22b];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (int32_t *)unaff_RBX[1];
  }
  *puVar4 = uVar2;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  FUN_180639ec0();
  lVar6 = (*(longlong *)(unaff_RDI + 0x254) - *(longlong *)(unaff_RDI + 0x252)) / RENDER_CHUNK_SIZE_1 +
          (*(longlong *)(unaff_RDI + 0x254) - *(longlong *)(unaff_RDI + 0x252) >> RENDER_DATA_SHIFT_DIVISOR);
  piVar5 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> RENDER_DATA_SHIFT_DIVISOR);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = *(longlong *)(unaff_RDI + 0x254) - *(longlong *)(unaff_RDI + 0x252) >> RENDER_DATA_SHIFT_DIVISOR;
  iVar7 = iVar8;
  if ((*(longlong *)(unaff_RDI + 0x254) - *(longlong *)(unaff_RDI + 0x252)) / RENDER_CHUNK_SIZE_2 + lVar6 != lVar6)
  {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x254) - *(longlong *)(unaff_RDI + 0x252)) / RENDER_CHUNK_SIZE_2));
  }
  lVar6 = RENDER_PADDING_COUNT_1;
  do {
    FUN_180639ec0();
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  lVar6 = (*(longlong *)(unaff_RDI + 0x31a) - *(longlong *)(unaff_RDI + 0x318)) / RENDER_CHUNK_SIZE_1 +
          (*(longlong *)(unaff_RDI + 0x31a) - *(longlong *)(unaff_RDI + 0x318) >> RENDER_DATA_SHIFT_DIVISOR);
  piVar5 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> RENDER_DATA_SHIFT_DIVISOR);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = *(longlong *)(unaff_RDI + 0x31a) - *(longlong *)(unaff_RDI + 0x318) >> RENDER_DATA_SHIFT_DIVISOR;
  iVar7 = iVar8;
  if ((*(longlong *)(unaff_RDI + 0x31a) - *(longlong *)(unaff_RDI + 0x318)) / RENDER_CHUNK_SIZE_2 + lVar6 != lVar6)
  {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x31a) - *(longlong *)(unaff_RDI + 0x318)) / RENDER_CHUNK_SIZE_2));
  }
  lVar6 = RENDER_PADDING_COUNT_2;
  do {
    FUN_180639ec0();
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  FUN_180639ec0();
  FUN_180639ec0();
  lVar6 = (*(longlong *)(unaff_RDI + 0x624) - *(longlong *)(unaff_RDI + 0x622)) / RENDER_CHUNK_SIZE_1 +
          (*(longlong *)(unaff_RDI + 0x624) - *(longlong *)(unaff_RDI + 0x622) >> RENDER_DATA_SHIFT_DIVISOR);
  piVar5 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> RENDER_DATA_SHIFT_DIVISOR);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = *(longlong *)(unaff_RDI + 0x624) - *(longlong *)(unaff_RDI + 0x622) >> RENDER_DATA_SHIFT_DIVISOR;
  iVar7 = iVar8;
  if ((*(longlong *)(unaff_RDI + 0x624) - *(longlong *)(unaff_RDI + 0x622)) / RENDER_CHUNK_SIZE_2 + lVar6 != lVar6)
  {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x624) - *(longlong *)(unaff_RDI + 0x622)) / RENDER_CHUNK_SIZE_2));
  }
  FUN_180639ec0();
  puVar3 = (int8_t *)unaff_RBX[1];
  uVar1 = *(int8_t *)((longlong)unaff_RDI + RENDER_LARGE_OFFSET_1);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar3 = (int8_t *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar4 = (int32_t *)unaff_RBX[1];
  if (*(char *)((longlong)unaff_RDI + RENDER_LARGE_OFFSET_1) != '\0') {
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    puVar4 = (int32_t *)unaff_RBX[1];
  }
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (int32_t *)unaff_RBX[1];
  }
  *puVar4 = RENDER_ITERATION_COUNT;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  do {
    piVar5 = (int *)unaff_RBX[1];
    if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      piVar5 = (int *)unaff_RBX[1];
    }
    *piVar5 = iVar8;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    FUN_180639ec0();
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
  longlong temp_var;
  int8_t *byte_ptr;
  int32_t *dword_ptr;
  int *int_ptr;
  longlong *unaff_RBX;
  uint unaff_EBP;
  int loop_counter;
  longlong data_count;
  int item_count;
  ulonglong uVar10;
  longlong unaff_RDI;
  longlong unaff_R14;
  
  uVar10 = (ulonglong)unaff_EBP;
  do {
    FUN_180639ec0();
    dword_ptr = (int32_t *)unaff_RBX[1];
    dword_value = *(int32_t *)(uVar10 + 0x58 + *(longlong *)(unaff_RDI + 0x128));
    if ((ulonglong)((*unaff_RBX - (longlong)dword_ptr) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      dword_ptr = (int32_t *)unaff_RBX[1];
    }
    *dword_ptr = dword_value;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    dword_ptr = (int32_t *)unaff_RBX[1];
    dword_value = *(int32_t *)(uVar10 + 0x5c + *(longlong *)(unaff_RDI + 0x128));
    if ((ulonglong)((*unaff_RBX - (longlong)dword_ptr) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      dword_ptr = (int32_t *)unaff_RBX[1];
    }
    *dword_ptr = dword_value;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    uVar10 = uVar10 + 0x60;
    unaff_R14 = unaff_R14 + -1;
  } while (unaff_R14 != 0);
  
  // 填充空白字节
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  data_count = 0x10;
  do {
    FUN_180639ec0();
    data_count = data_count + -1;
  } while (data_count != 0);
  
  // 处理材质标识符
  FUN_18025a940(&unknown_var_9712_ptr, *(int32_t *)(unaff_RDI + 0x7c8));
  byte_ptr = (int8_t *)unaff_RBX[1];
  byte_value = *(int8_t *)(unaff_RDI + 0x7cc);
  if ((ulonglong)((*unaff_RBX - (longlong)byte_ptr) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    byte_ptr = (int8_t *)unaff_RBX[1];
  }
  *byte_ptr = byte_value;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  if (*(char *)(unaff_RDI + 0x7cc) == '\0') {
    return;
  }
  
  // 序列化材质属性
  dword_ptr = (int32_t *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)dword_ptr) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    dword_ptr = (int32_t *)unaff_RBX[1];
  }
  item_count = 0;
  *dword_ptr = 0;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  data_count = *(longlong *)(unaff_RDI + 0x7f8) - *(longlong *)(unaff_RDI + 0x7f0);
  int_ptr = (int *)unaff_RBX[1];
  data_count = data_count / 0x26 + (data_count >> 0x3f);
  if ((ulonglong)((*unaff_RBX - (longlong)int_ptr) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    int_ptr = (int *)unaff_RBX[1];
  }
  *int_ptr = (int)(data_count >> 2) - (int)(data_count >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  temp_var = *(longlong *)(unaff_RDI + 0x7f8) - *(longlong *)(unaff_RDI + 0x7f0);
  data_count = temp_var >> 0x3f;
  loop_counter = item_count;
  if (temp_var / 0x98 + data_count != data_count) {
    do {
      FUN_180639ec0();
      loop_counter = loop_counter + 1;
    } while ((ulonglong)(longlong)loop_counter <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x7f8) - *(longlong *)(unaff_RDI + 0x7f0)) / 0x98));
  }
  FUN_180639ec0();
  byte_ptr = (int8_t *)unaff_RBX[1];
  byte_value = *(int8_t *)(unaff_RDI + 0x8a8);
  if ((ulonglong)((*unaff_RBX - (longlong)byte_ptr) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    byte_ptr = (int8_t *)unaff_RBX[1];
  }
  *byte_ptr = byte_value;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  dword_ptr = (int32_t *)unaff_RBX[1];
  dword_value = *(int32_t *)(unaff_RDI + 0x8ac);
  if ((ulonglong)((*unaff_RBX - (longlong)dword_ptr) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    dword_ptr = (int32_t *)unaff_RBX[1];
  }
  *dword_ptr = dword_value;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  FUN_180639ec0();
  
  // 序列化纹理坐标数据
  data_count = *(longlong *)(unaff_RDI + 0x950) - *(longlong *)(unaff_RDI + 0x948);
  data_count = data_count / 0x26 + (data_count >> 0x3f);
  int_ptr = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)int_ptr) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    int_ptr = (int *)unaff_RBX[1];
  }
  *int_ptr = (int)(data_count >> 2) - (int)(data_count >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  temp_var = *(longlong *)(unaff_RDI + 0x950) - *(longlong *)(unaff_RDI + 0x948);
  data_count = temp_var >> 0x3f;
  loop_counter = item_count;
  if (temp_var / 0x98 + data_count != data_count) {
    do {
      FUN_180639ec0();
      loop_counter = loop_counter + 1;
    } while ((ulonglong)(longlong)loop_counter <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x950) - *(longlong *)(unaff_RDI + 0x948)) / 0x98));
  }
  
  // 填充纹理数据间隔
  data_count = 5;
  do {
    FUN_180639ec0();
    data_count = data_count + -1;
  } while (data_count != 0);
  
  // 序列化法线数据
  data_count = *(longlong *)(unaff_RDI + 0xc68) - *(longlong *)(unaff_RDI + 0xc60);
  data_count = data_count / 0x26 + (data_count >> 0x3f);
  int_ptr = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)int_ptr) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    int_ptr = (int *)unaff_RBX[1];
  }
  *int_ptr = (int)(data_count >> 2) - (int)(data_count >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  temp_var = *(longlong *)(unaff_RDI + 0xc68) - *(longlong *)(unaff_RDI + 0xc60);
  data_count = temp_var >> 0x3f;
  loop_counter = item_count;
  if (temp_var / 0x98 + data_count != data_count) {
    do {
      FUN_180639ec0();
      loop_counter = loop_counter + 1;
    } while ((ulonglong)(longlong)loop_counter <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0xc68) - *(longlong *)(unaff_RDI + 0xc60)) / 0x98));
  }
  
  // 填充法线数据间隔
  data_count = 9;
  do {
    FUN_180639ec0();
    data_count = data_count + -1;
  } while (data_count != 0);
  
  FUN_180639ec0();
  FUN_180639ec0();
  
  // 序列化颜色数据
  data_count = *(longlong *)(unaff_RDI + 0x1890) - *(longlong *)(unaff_RDI + 0x1888);
  data_count = data_count / 0x26 + (data_count >> 0x3f);
  int_ptr = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)int_ptr) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    int_ptr = (int *)unaff_RBX[1];
  }
  *int_ptr = (int)(data_count >> 2) - (int)(data_count >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  temp_var = *(longlong *)(unaff_RDI + 0x1890) - *(longlong *)(unaff_RDI + 0x1888);
  data_count = temp_var >> 0x3f;
  loop_counter = item_count;
  if (temp_var / 0x98 + data_count != data_count) {
    do {
      FUN_180639ec0();
      loop_counter = loop_counter + 1;
    } while ((ulonglong)(longlong)loop_counter <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x1890) - *(longlong *)(unaff_RDI + 0x1888)) / 0x98));
  }
  FUN_180639ec0();
  byte_ptr = (int8_t *)unaff_RBX[1];
  byte_value = *(int8_t *)(unaff_RDI + 0x18c9);
  if ((ulonglong)((*unaff_RBX - (longlong)byte_ptr) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    byte_ptr = (int8_t *)unaff_RBX[1];
  }
  *byte_ptr = byte_value;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  dword_ptr = (int32_t *)unaff_RBX[1];
  if (*(char *)(unaff_RDI + 0x18c9) != '\0') {
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    dword_ptr = (int32_t *)unaff_RBX[1];
  }
  if ((ulonglong)((*unaff_RBX - (longlong)dword_ptr) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    dword_ptr = (int32_t *)unaff_RBX[1];
  }
  *dword_ptr = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  
  // 序列化额外的渲染属性
  do {
    int_ptr = (int *)unaff_RBX[1];
    if ((ulonglong)((*unaff_RBX - (longlong)int_ptr) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      int_ptr = (int *)unaff_RBX[1];
    }
    *int_ptr = item_count;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    FUN_180639ec0();
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
  longlong temp_var;
  int8_t *byte_ptr;
  int32_t *dword_ptr;
  int *int_ptr;
  longlong *unaff_RBX;
  int loop_counter;
  longlong data_count;
  int item_count;
  longlong unaff_RDI;
  
  // 填充空白字节
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  data_count = 0x10;
  do {
    FUN_180639ec0();
    data_count = data_count + -1;
  } while (data_count != 0);
  
  // 处理材质标识符
  FUN_18025a940(&unknown_var_9712_ptr, *(int32_t *)(unaff_RDI + 0x7c8));
  byte_ptr = (int8_t *)unaff_RBX[1];
  byte_value = *(int8_t *)(unaff_RDI + 0x7cc);
  if ((ulonglong)((*unaff_RBX - (longlong)byte_ptr) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    byte_ptr = (int8_t *)unaff_RBX[1];
  }
  *byte_ptr = byte_value;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  if (*(char *)(unaff_RDI + 0x7cc) == '\0') {
    return;
  }
  
  // 序列化材质属性
  dword_ptr = (int32_t *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)dword_ptr) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    dword_ptr = (int32_t *)unaff_RBX[1];
  }
  item_count = 0;
  *dword_ptr = 0;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  data_count = *(longlong *)(unaff_RDI + 0x7f8) - *(longlong *)(unaff_RDI + 0x7f0);
  int_ptr = (int *)unaff_RBX[1];
  data_count = data_count / 0x26 + (data_count >> 0x3f);
  if ((ulonglong)((*unaff_RBX - (longlong)int_ptr) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    int_ptr = (int *)unaff_RBX[1];
  }
  *int_ptr = (int)(data_count >> 2) - (int)(data_count >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  temp_var = *(longlong *)(unaff_RDI + 0x7f8) - *(longlong *)(unaff_RDI + 0x7f0);
  data_count = temp_var >> 0x3f;
  loop_counter = item_count;
  if (temp_var / 0x98 + data_count != data_count) {
    do {
      FUN_180639ec0();
      loop_counter = loop_counter + 1;
    } while ((ulonglong)(longlong)loop_counter <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x7f8) - *(longlong *)(unaff_RDI + 0x7f0)) / 0x98));
  }
  FUN_180639ec0();
  byte_ptr = (int8_t *)unaff_RBX[1];
  byte_value = *(int8_t *)(unaff_RDI + 0x8a8);
  if ((ulonglong)((*unaff_RBX - (longlong)byte_ptr) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    byte_ptr = (int8_t *)unaff_RBX[1];
  }
  *byte_ptr = byte_value;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  dword_ptr = (int32_t *)unaff_RBX[1];
  dword_value = *(int32_t *)(unaff_RDI + 0x8ac);
  if ((ulonglong)((*unaff_RBX - (longlong)dword_ptr) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    dword_ptr = (int32_t *)unaff_RBX[1];
  }
  *dword_ptr = dword_value;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  FUN_180639ec0();
  
  // 序列化纹理坐标数据
  data_count = *(longlong *)(unaff_RDI + 0x950) - *(longlong *)(unaff_RDI + 0x948);
  data_count = data_count / 0x26 + (data_count >> 0x3f);
  int_ptr = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)int_ptr) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    int_ptr = (int *)unaff_RBX[1];
  }
  *int_ptr = (int)(data_count >> 2) - (int)(data_count >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  temp_var = *(longlong *)(unaff_RDI + 0x950) - *(longlong *)(unaff_RDI + 0x948);
  data_count = temp_var >> 0x3f;
  loop_counter = item_count;
  if (temp_var / 0x98 + data_count != data_count) {
    do {
      FUN_180639ec0();
      loop_counter = loop_counter + 1;
    } while ((ulonglong)(longlong)loop_counter <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x950) - *(longlong *)(unaff_RDI + 0x948)) / 0x98));
  }
  
  // 填充纹理数据间隔
  data_count = 5;
  do {
    FUN_180639ec0();
    data_count = data_count + -1;
  } while (data_count != 0);
  
  // 序列化法线数据
  data_count = *(longlong *)(unaff_RDI + 0xc68) - *(longlong *)(unaff_RDI + 0xc60);
  data_count = data_count / 0x26 + (data_count >> 0x3f);
  int_ptr = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)int_ptr) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    int_ptr = (int *)unaff_RBX[1];
  }
  *int_ptr = (int)(data_count >> 2) - (int)(data_count >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  temp_var = *(longlong *)(unaff_RDI + 0xc68) - *(longlong *)(unaff_RDI + 0xc60);
  data_count = temp_var >> 0x3f;
  loop_counter = item_count;
  if (temp_var / 0x98 + data_count != data_count) {
    do {
      FUN_180639ec0();
      loop_counter = loop_counter + 1;
    } while ((ulonglong)(longlong)loop_counter <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0xc68) - *(longlong *)(unaff_RDI + 0xc60)) / 0x98));
  }
  
  // 填充法线数据间隔
  data_count = 9;
  do {
    FUN_180639ec0();
    data_count = data_count + -1;
  } while (data_count != 0);
  
  FUN_180639ec0();
  FUN_180639ec0();
  
  // 序列化颜色数据
  data_count = *(longlong *)(unaff_RDI + 0x1890) - *(longlong *)(unaff_RDI + 0x1888);
  data_count = data_count / 0x26 + (data_count >> 0x3f);
  int_ptr = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)int_ptr) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    int_ptr = (int *)unaff_RBX[1];
  }
  *int_ptr = (int)(data_count >> 2) - (int)(data_count >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  temp_var = *(longlong *)(unaff_RDI + 0x1890) - *(longlong *)(unaff_RDI + 0x1888);
  data_count = temp_var >> 0x3f;
  loop_counter = item_count;
  if (temp_var / 0x98 + data_count != data_count) {
    do {
      FUN_180639ec0();
      loop_counter = loop_counter + 1;
    } while ((ulonglong)(longlong)loop_counter <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x1890) - *(longlong *)(unaff_RDI + 0x1888)) / 0x98));
  }
  FUN_180639ec0();
  byte_ptr = (int8_t *)unaff_RBX[1];
  byte_value = *(int8_t *)(unaff_RDI + 0x18c9);
  if ((ulonglong)((*unaff_RBX - (longlong)byte_ptr) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    byte_ptr = (int8_t *)unaff_RBX[1];
  }
  *byte_ptr = byte_value;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  dword_ptr = (int32_t *)unaff_RBX[1];
  if (*(char *)(unaff_RDI + 0x18c9) != '\0') {
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    dword_ptr = (int32_t *)unaff_RBX[1];
  }
  if ((ulonglong)((*unaff_RBX - (longlong)dword_ptr) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    dword_ptr = (int32_t *)unaff_RBX[1];
  }
  *dword_ptr = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  
  // 序列化额外的渲染属性
  do {
    int_ptr = (int *)unaff_RBX[1];
    if ((ulonglong)((*unaff_RBX - (longlong)int_ptr) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      int_ptr = (int *)unaff_RBX[1];
    }
    *int_ptr = item_count;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    FUN_180639ec0();
    item_count = item_count + 1;
  } while (item_count < 0x10);
  return;
}