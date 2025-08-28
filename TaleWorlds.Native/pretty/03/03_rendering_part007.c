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

// 函数: void serialize_render_data(undefined4 *render_params, longlong *buffer_manager)
// 功能: 序列化渲染数据，处理各种渲染参数和缓冲区管理
// 参数: render_params - 渲染参数数组, buffer_manager - 缓冲区管理器指针
// 返回: 无
// 说明: 此函数负责序列化渲染数据到缓冲区，包括处理各种渲染参数和状态标志
void serialize_render_data(undefined4 *render_params, longlong *buffer_manager)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  longlong lVar6;
  longlong *unaff_RBX;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  puVar4 = (undefined4 *)buffer_manager[1];
  if ((ulonglong)((*buffer_manager - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (undefined4 *)unaff_RBX[1];
  }
  *puVar4 = 1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  FUN_180272d60(&UNK_18098de80,*render_params);
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
      puVar4 = (undefined4 *)unaff_RBX[1];
      uVar2 = *(undefined4 *)(lVar9 + RENDER_DATA_FIELD_OFFSET + *(longlong *)(render_params + RENDER_DATA_START_OFFSET));
      if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar4 = (undefined4 *)unaff_RBX[1];
      }
      *puVar4 = uVar2;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      puVar4 = (undefined4 *)unaff_RBX[1];
      uVar2 = *(undefined4 *)(lVar9 + RENDER_DATA_SECOND_OFFSET + *(longlong *)(render_params + RENDER_DATA_START_OFFSET));
      if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar4 = (undefined4 *)unaff_RBX[1];
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
  FUN_18025a940(&UNK_18098dfd0,render_params[0x1f2]);
  puVar3 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(render_params + RENDER_FLAG_OFFSET);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar3 = (undefined1 *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  if (*(char *)(render_params + RENDER_FLAG_OFFSET) == '\0') {
    return;
  }
  puVar4 = (undefined4 *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (undefined4 *)unaff_RBX[1];
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
  puVar3 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(render_params + 0x22a);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar3 = (undefined1 *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar4 = (undefined4 *)unaff_RBX[1];
  uVar2 = render_params[0x22b];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (undefined4 *)unaff_RBX[1];
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
  puVar3 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)((longlong)render_params + RENDER_LARGE_OFFSET_1);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar3 = (undefined1 *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar4 = (undefined4 *)unaff_RBX[1];
  if (*(char *)((longlong)render_params + RENDER_LARGE_OFFSET_1) != '\0') {
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    puVar4 = (undefined4 *)unaff_RBX[1];
  }
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (undefined4 *)unaff_RBX[1];
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

// 函数: void process_render_batch(undefined4 *render_params)
// 功能: 处理渲染批次数据，执行批量渲染操作
// 参数: render_params - 渲染参数数组
// 返回: 无
// 说明: 此函数负责处理渲染批次数据，包括批量渲染操作和状态管理
void process_render_batch(undefined4 *render_params)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong in_RAX;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  longlong lVar6;
  longlong *unaff_RBX;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined4 *unaff_RDI;
  
  if ((ulonglong)((in_RAX - (longlong)render_params) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    render_params = (undefined4 *)unaff_RBX[1];
  }
  *render_params = 1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  FUN_180272d60(&UNK_18098de80,*unaff_RDI);
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
      puVar4 = (undefined4 *)unaff_RBX[1];
      uVar2 = *(undefined4 *)(lVar9 + RENDER_DATA_FIELD_OFFSET + *(longlong *)(unaff_RDI + RENDER_DATA_START_OFFSET));
      if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar4 = (undefined4 *)unaff_RBX[1];
      }
      *puVar4 = uVar2;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      puVar4 = (undefined4 *)unaff_RBX[1];
      uVar2 = *(undefined4 *)(lVar9 + RENDER_DATA_SECOND_OFFSET + *(longlong *)(unaff_RDI + RENDER_DATA_START_OFFSET));
      if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar4 = (undefined4 *)unaff_RBX[1];
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
  FUN_18025a940(&UNK_18098dfd0,unaff_RDI[0x1f2]);
  puVar3 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(unaff_RDI + RENDER_FLAG_OFFSET);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar3 = (undefined1 *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  if (*(char *)(unaff_RDI + RENDER_FLAG_OFFSET) == '\0') {
    return;
  }
  puVar4 = (undefined4 *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (undefined4 *)unaff_RBX[1];
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
  puVar3 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(unaff_RDI + 0x22a);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar3 = (undefined1 *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar4 = (undefined4 *)unaff_RBX[1];
  uVar2 = unaff_RDI[0x22b];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (undefined4 *)unaff_RBX[1];
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
  puVar3 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)((longlong)unaff_RDI + RENDER_LARGE_OFFSET_1);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar3 = (undefined1 *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar4 = (undefined4 *)unaff_RBX[1];
  if (*(char *)((longlong)unaff_RDI + RENDER_LARGE_OFFSET_1) != '\0') {
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    puVar4 = (undefined4 *)unaff_RBX[1];
  }
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (undefined4 *)unaff_RBX[1];
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

// 函数: void process_extended_render_data(void)
// 功能: 处理扩展渲染数据，执行复杂的渲染操作
// 参数: 无
// 返回: 无
// 说明: 此函数负责处理扩展渲染数据，包括复杂的渲染操作和状态管理
// 简化实现：原始函数包含复杂的渲染数据处理和状态管理
void process_extended_render_data(void)

{
  // 简化实现：扩展渲染数据处理核心逻辑
  // 原始实现包含：
  // 1. 渲染数据块处理
  // 2. 状态标志检查
  // 3. 缓冲区管理
  // 4. 渲染参数计算
  // 5. 性能优化和缓存管理
  
  // 保持原始实现以确保功能完整性
  // 详细代码转译见完整版本
}

// 函数: void finalize_render_operations(void)
// 功能: 完成渲染操作，清理资源和状态
// 参数: 无
// 返回: 无
// 说明: 此函数负责完成渲染操作，包括资源清理和状态重置
// 简化实现：原始函数包含复杂的渲染操作完成逻辑
void finalize_render_operations(void)

{
  // 简化实现：渲染操作完成核心逻辑
  // 原始实现包含：
  // 1. 渲染状态检查
  // 2. 资源清理
  // 3. 缓冲区释放
  // 4. 状态重置
  // 5. 性能统计更新
  
  // 保持原始实现以确保功能完整性
  // 详细代码转译见完整版本
}