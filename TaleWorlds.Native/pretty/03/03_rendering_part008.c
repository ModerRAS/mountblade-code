#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part008.c - 4 个函数
// 渲染系统核心功能模块 - 负责渲染数据的序列化和处理

// 函数: void FUN_180271c54(void)
// 渲染系统数据序列化函数 - 处理渲染相关的数据序列化操作
void serialize_rendering_data(void)

{
  int8_t byte_value;
  int32_t dword_value;
  int64_t calculated_value;
  int64_t range_value;
  int8_t *byte_writer;
  int32_t *dword_writer;
  int *int_writer;
  int64_t *buffer_manager;
  int iteration_index;
  int64_t data_range;
  int64_t render_context;
  
  // 初始化渲染数据序列化循环
  do {
    System_QueueProcessor();
    unaff_RBP = unaff_RBP + -1;
  } while (unaff_RBP != 0);
  
  // 处理渲染数据缓冲区初始化
  FUN_18025a940(&processed_var_9712_ptr,*(int32_t *)(unaff_RDI + 0x7c8));
  byte_writer = (int8_t *)unaff_RBX[1];
  byte_value = *(int8_t *)(unaff_RDI + 0x7cc);
  
  // 检查缓冲区空间并写入字节数据
  if ((uint64_t)((*unaff_RBX - (int64_t)byte_writer) + unaff_RBX[2]) < 2) {
    System_BufferManager();
    byte_writer = (int8_t *)unaff_RBX[1];
  }
  *byte_writer = byte_value;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  
  // 检查渲染状态标志，如果为空则返回
  if (*(char *)(unaff_RDI + 0x7cc) == '\0') {
    return;
  }
  
  // 处理双字数据写入初始化
  dword_writer = (int32_t *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)dword_writer) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    dword_writer = (int32_t *)unaff_RBX[1];
  }
  iteration_index = 0;
  *dword_writer = 0;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  
  // 计算渲染数据范围并写入缓冲区
  data_range = *(int64_t *)(unaff_RDI + 0x7f8) - *(int64_t *)(unaff_RDI + 0x7f0);
  int_writer = (int *)unaff_RBX[1];
  data_range = data_range / 0x26 + (data_range >> 0x3f);
  if ((uint64_t)((*unaff_RBX - (int64_t)int_writer) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    int_writer = (int *)unaff_RBX[1];
  }
  *int_writer = (int)(data_range >> 2) - (int)(data_range >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  
  // 处理渲染数据块的序列化循环
  range_value = *(int64_t *)(unaff_RDI + 0x7f8) - *(int64_t *)(unaff_RDI + 0x7f0);
  calculated_value = range_value >> 0x3f;
  iVar8 = iteration_index;
  if (range_value / 0x98 + calculated_value != calculated_value) {
    do {
      System_QueueProcessor();
      iVar8 = iVar8 + 1;
    } while ((uint64_t)(int64_t)iVar8 <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0x7f8) - *(int64_t *)(unaff_RDI + 0x7f0)) / 0x98));
  }
  
  // 处理渲染状态数据
  System_QueueProcessor();
  byte_writer = (int8_t *)unaff_RBX[1];
  byte_value = *(int8_t *)(unaff_RDI + 0x8a8);
  if ((uint64_t)((*unaff_RBX - (int64_t)byte_writer) + unaff_RBX[2]) < 2) {
    System_BufferManager();
    byte_writer = (int8_t *)unaff_RBX[1];
  }
  *byte_writer = byte_value;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  
  // 写入渲染配置数据
  dword_writer = (int32_t *)unaff_RBX[1];
  dword_value = *(int32_t *)(unaff_RDI + 0x8ac);
  if ((uint64_t)((*unaff_RBX - (int64_t)dword_writer) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    dword_writer = (int32_t *)unaff_RBX[1];
  }
  *dword_writer = dword_value;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  
  // 继续处理渲染数据的其他部分
  System_QueueProcessor();
  data_range = *(int64_t *)(unaff_RDI + 0x950) - *(int64_t *)(unaff_RDI + 0x948);
  data_range = data_range / 0x26 + (data_range >> 0x3f);
  int_writer = (int *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)int_writer) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    int_writer = (int *)unaff_RBX[1];
  }
  *int_writer = (int)(data_range >> 2) - (int)(data_range >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  
  // 处理渲染数据块的第二次序列化
  range_value = *(int64_t *)(unaff_RDI + 0x950) - *(int64_t *)(unaff_RDI + 0x948);
  calculated_value = range_value >> 0x3f;
  iVar8 = iteration_index;
  if (range_value / 0x98 + calculated_value != calculated_value) {
    do {
      System_QueueProcessor();
      iVar8 = iVar8 + 1;
    } while ((uint64_t)(int64_t)iVar8 <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0x950) - *(int64_t *)(unaff_RDI + 0x948)) / 0x98));
  }
  
  // 执行5次渲染数据清理操作
  calculated_value = 5;
  do {
    System_QueueProcessor();
    calculated_value = calculated_value + -1;
  } while (calculated_value != 0);
  
  // 处理第三组渲染数据
  data_range = *(int64_t *)(unaff_RDI + 0xc68) - *(int64_t *)(unaff_RDI + 0xc60);
  data_range = data_range / 0x26 + (data_range >> 0x3f);
  int_writer = (int *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)int_writer) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    int_writer = (int *)unaff_RBX[1];
  }
  *int_writer = (int)(data_range >> 2) - (int)(data_range >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  
  // 处理第三组渲染数据块的序列化
  range_value = *(int64_t *)(unaff_RDI + 0xc68) - *(int64_t *)(unaff_RDI + 0xc60);
  calculated_value = range_value >> 0x3f;
  iVar8 = iteration_index;
  if (range_value / 0x98 + calculated_value != calculated_value) {
    do {
      System_QueueProcessor();
      iVar8 = iVar8 + 1;
    } while ((uint64_t)(int64_t)iVar8 <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0xc68) - *(int64_t *)(unaff_RDI + 0xc60)) / 0x98));
  }
  
  // 执行9次渲染数据清理操作
  calculated_value = 9;
  do {
    System_QueueProcessor();
    calculated_value = calculated_value + -1;
  } while (calculated_value != 0);
  
  // 执行两次额外的渲染数据清理
  System_QueueProcessor();
  System_QueueProcessor();
  
  // 处理第四组渲染数据
  data_range = *(int64_t *)(unaff_RDI + 0x1890) - *(int64_t *)(unaff_RDI + 0x1888);
  data_range = data_range / 0x26 + (data_range >> 0x3f);
  int_writer = (int *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)int_writer) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    int_writer = (int *)unaff_RBX[1];
  }
  *int_writer = (int)(data_range >> 2) - (int)(data_range >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  
  // 处理第四组渲染数据块的序列化
  range_value = *(int64_t *)(unaff_RDI + 0x1890) - *(int64_t *)(unaff_RDI + 0x1888);
  calculated_value = range_value >> 0x3f;
  iVar8 = iteration_index;
  if (range_value / 0x98 + calculated_value != calculated_value) {
    do {
      System_QueueProcessor();
      iVar8 = iVar8 + 1;
    } while ((uint64_t)(int64_t)iVar8 <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0x1890) - *(int64_t *)(unaff_RDI + 0x1888)) / 0x98));
  }
  
  // 处理渲染状态标志
  System_QueueProcessor();
  byte_writer = (int8_t *)unaff_RBX[1];
  byte_value = *(int8_t *)(unaff_RDI + 0x18c9);
  if ((uint64_t)((*unaff_RBX - (int64_t)byte_writer) + unaff_RBX[2]) < 2) {
    System_BufferManager();
    byte_writer = (int8_t *)unaff_RBX[1];
  }
  *byte_writer = byte_value;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  
  // 处理渲染配置数据块
  dword_writer = (int32_t *)unaff_RBX[1];
  if (*(char *)(unaff_RDI + 0x18c9) != '\0') {
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    dword_writer = (int32_t *)unaff_RBX[1];
  }
  if ((uint64_t)((*unaff_RBX - (int64_t)dword_writer) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    dword_writer = (int32_t *)unaff_RBX[1];
  }
  *dword_writer = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  
  // 写入16个渲染数据块
  do {
    int_writer = (int *)unaff_RBX[1];
    if ((uint64_t)((*unaff_RBX - (int64_t)int_writer) + unaff_RBX[2]) < 5) {
      System_BufferManager();
      int_writer = (int *)unaff_RBX[1];
    }
    *int_writer = iteration_index;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    System_QueueProcessor();
    iteration_index = iteration_index + 1;
  } while (iteration_index < 0x10);
  return;
}



// 函数: void FUN_180271ca1(void)
// 渲染系统备用序列化函数 - 处理渲染数据的备用序列化路径
void serialize_rendering_data_alternate(void)

{
  int8_t byte_value;
  int32_t dword_value;
  int64_t calculated_value;
  int64_t range_value;
  int8_t *byte_writer;
  int32_t *dword_writer;
  int *int_writer;
  int64_t *buffer_manager;
  int iteration_index;
  int8_t status_flag;
  int data_index;
  int64_t render_context;
  
  // 备用序列化路径初始化
  System_BufferManager();
  *(int8_t *)unaff_RBX[1] = unaff_SIL;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  
  // 检查渲染状态标志
  if (*(char *)(unaff_RDI + 0x7cc) == '\0') {
    return;
  }
  
  // 处理双字数据写入
  dword_writer = (int32_t *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)dword_writer) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    dword_writer = (int32_t *)unaff_RBX[1];
  }
  iteration_index = 0;
  *dword_writer = 0;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  
  // 计算渲染数据范围
  data_range = *(int64_t *)(unaff_RDI + 0x7f8) - *(int64_t *)(unaff_RDI + 0x7f0);
  int_writer = (int *)unaff_RBX[1];
  data_range = data_range / 0x26 + (data_range >> 0x3f);
  if ((uint64_t)((*unaff_RBX - (int64_t)int_writer) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    int_writer = (int *)unaff_RBX[1];
  }
  *int_writer = (int)(data_range >> 2) - (int)(data_range >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  
  // 处理渲染数据块的序列化
  range_value = *(int64_t *)(unaff_RDI + 0x7f8) - *(int64_t *)(unaff_RDI + 0x7f0);
  calculated_value = range_value >> 0x3f;
  iVar8 = iteration_index;
  if (range_value / 0x98 + calculated_value != calculated_value) {
    do {
      System_QueueProcessor();
      iVar8 = iVar8 + 1;
    } while ((uint64_t)(int64_t)iVar8 <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0x7f8) - *(int64_t *)(unaff_RDI + 0x7f0)) / 0x98));
  }
  
  // 处理渲染状态数据
  System_QueueProcessor();
  byte_writer = (int8_t *)unaff_RBX[1];
  byte_value = *(int8_t *)(unaff_RDI + 0x8a8);
  if ((uint64_t)((*unaff_RBX - (int64_t)byte_writer) + unaff_RBX[2]) < 2) {
    System_BufferManager();
    byte_writer = (int8_t *)unaff_RBX[1];
  }
  *byte_writer = byte_value;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  
  // 写入渲染配置数据
  dword_writer = (int32_t *)unaff_RBX[1];
  dword_value = *(int32_t *)(unaff_RDI + 0x8ac);
  if ((uint64_t)((*unaff_RBX - (int64_t)dword_writer) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    dword_writer = (int32_t *)unaff_RBX[1];
  }
  *dword_writer = dword_value;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  
  // 继续处理渲染数据的其他部分（与主函数类似）
  System_QueueProcessor();
  data_range = *(int64_t *)(unaff_RDI + 0x950) - *(int64_t *)(unaff_RDI + 0x948);
  data_range = data_range / 0x26 + (data_range >> 0x3f);
  int_writer = (int *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)int_writer) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    int_writer = (int *)unaff_RBX[1];
  }
  *int_writer = (int)(data_range >> 2) - (int)(data_range >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  
  // 处理渲染数据块的序列化
  range_value = *(int64_t *)(unaff_RDI + 0x950) - *(int64_t *)(unaff_RDI + 0x948);
  calculated_value = range_value >> 0x3f;
  iVar8 = iteration_index;
  if (range_value / 0x98 + calculated_value != calculated_value) {
    do {
      System_QueueProcessor();
      iVar8 = iVar8 + 1;
    } while ((uint64_t)(int64_t)iVar8 <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0x950) - *(int64_t *)(unaff_RDI + 0x948)) / 0x98));
  }
  
  // 执行5次渲染数据清理操作
  calculated_value = 5;
  do {
    System_QueueProcessor();
    calculated_value = calculated_value + -1;
  } while (calculated_value != 0);
  
  // 处理第三组渲染数据
  data_range = *(int64_t *)(unaff_RDI + 0xc68) - *(int64_t *)(unaff_RDI + 0xc60);
  data_range = data_range / 0x26 + (data_range >> 0x3f);
  int_writer = (int *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)int_writer) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    int_writer = (int *)unaff_RBX[1];
  }
  *int_writer = (int)(data_range >> 2) - (int)(data_range >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  
  // 处理第三组渲染数据块的序列化
  range_value = *(int64_t *)(unaff_RDI + 0xc68) - *(int64_t *)(unaff_RDI + 0xc60);
  calculated_value = range_value >> 0x3f;
  iVar8 = iteration_index;
  if (range_value / 0x98 + calculated_value != calculated_value) {
    do {
      System_QueueProcessor();
      iVar8 = iVar8 + 1;
    } while ((uint64_t)(int64_t)iVar8 <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0xc68) - *(int64_t *)(unaff_RDI + 0xc60)) / 0x98));
  }
  
  // 执行9次渲染数据清理操作
  calculated_value = 9;
  do {
    System_QueueProcessor();
    calculated_value = calculated_value + -1;
  } while (calculated_value != 0);
  
  // 执行两次额外的渲染数据清理
  System_QueueProcessor();
  System_QueueProcessor();
  
  // 处理第四组渲染数据
  data_range = *(int64_t *)(unaff_RDI + 0x1890) - *(int64_t *)(unaff_RDI + 0x1888);
  data_range = data_range / 0x26 + (data_range >> 0x3f);
  int_writer = (int *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)int_writer) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    int_writer = (int *)unaff_RBX[1];
  }
  *int_writer = (int)(data_range >> 2) - (int)(data_range >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  
  // 处理第四组渲染数据块的序列化
  range_value = *(int64_t *)(unaff_RDI + 0x1890) - *(int64_t *)(unaff_RDI + 0x1888);
  calculated_value = range_value >> 0x3f;
  iVar8 = iteration_index;
  if (range_value / 0x98 + calculated_value != calculated_value) {
    do {
      System_QueueProcessor();
      iVar8 = iVar8 + 1;
    } while ((uint64_t)(int64_t)iVar8 <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0x1890) - *(int64_t *)(unaff_RDI + 0x1888)) / 0x98));
  }
  
  // 处理渲染状态标志
  System_QueueProcessor();
  byte_writer = (int8_t *)unaff_RBX[1];
  byte_value = *(int8_t *)(unaff_RDI + 0x18c9);
  if ((uint64_t)((*unaff_RBX - (int64_t)byte_writer) + unaff_RBX[2]) < 2) {
    System_BufferManager();
    byte_writer = (int8_t *)unaff_RBX[1];
  }
  *byte_writer = byte_value;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  
  // 处理渲染配置数据块
  dword_writer = (int32_t *)unaff_RBX[1];
  if (*(char *)(unaff_RDI + 0x18c9) != '\0') {
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    dword_writer = (int32_t *)unaff_RBX[1];
  }
  if ((uint64_t)((*unaff_RBX - (int64_t)dword_writer) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    dword_writer = (int32_t *)unaff_RBX[1];
  }
  *dword_writer = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  
  // 写入16个渲染数据块
  do {
    int_writer = (int *)unaff_RBX[1];
    if ((uint64_t)((*unaff_RBX - (int64_t)int_writer) + unaff_RBX[2]) < 5) {
      System_BufferManager();
      int_writer = (int *)unaff_RBX[1];
    }
    *int_writer = iteration_index;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    System_QueueProcessor();
    iteration_index = iteration_index + 1;
  } while (iteration_index < 0x10);
  return;
}



// 函数: void FUN_180271cc9(void)
// 渲染系统参数化序列化函数 - 接受参数的渲染数据序列化处理
void serialize_rendering_data_parameterized(void)

{
  int8_t byte_value;
  int32_t dword_value;
  int64_t calculated_value;
  int64_t range_value;
  int8_t *byte_writer;
  int32_t *dword_writer;
  int *int_writer;
  int64_t *buffer_manager;
  int iteration_index;
  int data_index;
  int64_t render_context;
  uint64_t stack_parameter;
  uint64_t stack_temp;
  
  // 参数化序列化初始化
  uStack0000000000000040 = in_stack_00000030;
  dword_writer = (int32_t *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)dword_writer) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    dword_writer = (int32_t *)unaff_RBX[1];
  }
  iteration_index = 0;
  *dword_writer = 0;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  
  // 计算渲染数据范围
  data_range = *(int64_t *)(unaff_RDI + 0x7f8) - *(int64_t *)(unaff_RDI + 0x7f0);
  int_writer = (int *)unaff_RBX[1];
  data_range = data_range / 0x26 + (data_range >> 0x3f);
  if ((uint64_t)((*unaff_RBX - (int64_t)int_writer) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    int_writer = (int *)unaff_RBX[1];
  }
  *int_writer = (int)(data_range >> 2) - (int)(data_range >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  
  // 处理渲染数据块的序列化
  range_value = *(int64_t *)(unaff_RDI + 0x7f8) - *(int64_t *)(unaff_RDI + 0x7f0);
  calculated_value = range_value >> 0x3f;
  iVar8 = iteration_index;
  if (range_value / 0x98 + calculated_value != calculated_value) {
    do {
      System_QueueProcessor();
      iVar8 = iVar8 + 1;
    } while ((uint64_t)(int64_t)iVar8 <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0x7f8) - *(int64_t *)(unaff_RDI + 0x7f0)) / 0x98));
  }
  
  // 处理渲染状态数据
  System_QueueProcessor();
  byte_writer = (int8_t *)unaff_RBX[1];
  byte_value = *(int8_t *)(unaff_RDI + 0x8a8);
  if ((uint64_t)((*unaff_RBX - (int64_t)byte_writer) + unaff_RBX[2]) < 2) {
    System_BufferManager();
    byte_writer = (int8_t *)unaff_RBX[1];
  }
  *byte_writer = byte_value;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  
  // 写入渲染配置数据
  dword_writer = (int32_t *)unaff_RBX[1];
  dword_value = *(int32_t *)(unaff_RDI + 0x8ac);
  if ((uint64_t)((*unaff_RBX - (int64_t)dword_writer) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    dword_writer = (int32_t *)unaff_RBX[1];
  }
  *dword_writer = dword_value;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  
  // 继续处理渲染数据的其他部分
  System_QueueProcessor();
  data_range = *(int64_t *)(unaff_RDI + 0x950) - *(int64_t *)(unaff_RDI + 0x948);
  data_range = data_range / 0x26 + (data_range >> 0x3f);
  int_writer = (int *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)int_writer) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    int_writer = (int *)unaff_RBX[1];
  }
  *int_writer = (int)(data_range >> 2) - (int)(data_range >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  
  // 处理渲染数据块的序列化
  range_value = *(int64_t *)(unaff_RDI + 0x950) - *(int64_t *)(unaff_RDI + 0x948);
  calculated_value = range_value >> 0x3f;
  iVar8 = iteration_index;
  if (range_value / 0x98 + calculated_value != calculated_value) {
    do {
      System_QueueProcessor();
      iVar8 = iVar8 + 1;
    } while ((uint64_t)(int64_t)iVar8 <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0x950) - *(int64_t *)(unaff_RDI + 0x948)) / 0x98));
  }
  
  // 执行5次渲染数据清理操作
  calculated_value = 5;
  do {
    System_QueueProcessor();
    calculated_value = calculated_value + -1;
  } while (calculated_value != 0);
  
  // 处理第三组渲染数据
  data_range = *(int64_t *)(unaff_RDI + 0xc68) - *(int64_t *)(unaff_RDI + 0xc60);
  data_range = data_range / 0x26 + (data_range >> 0x3f);
  int_writer = (int *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)int_writer) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    int_writer = (int *)unaff_RBX[1];
  }
  *int_writer = (int)(data_range >> 2) - (int)(data_range >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  
  // 处理第三组渲染数据块的序列化
  range_value = *(int64_t *)(unaff_RDI + 0xc68) - *(int64_t *)(unaff_RDI + 0xc60);
  calculated_value = range_value >> 0x3f;
  iVar8 = iteration_index;
  if (range_value / 0x98 + calculated_value != calculated_value) {
    do {
      System_QueueProcessor();
      iVar8 = iVar8 + 1;
    } while ((uint64_t)(int64_t)iVar8 <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0xc68) - *(int64_t *)(unaff_RDI + 0xc60)) / 0x98));
  }
  
  // 执行9次渲染数据清理操作
  calculated_value = 9;
  do {
    System_QueueProcessor();
    calculated_value = calculated_value + -1;
  } while (calculated_value != 0);
  
  // 执行两次额外的渲染数据清理
  System_QueueProcessor();
  System_QueueProcessor();
  
  // 处理第四组渲染数据
  data_range = *(int64_t *)(unaff_RDI + 0x1890) - *(int64_t *)(unaff_RDI + 0x1888);
  data_range = data_range / 0x26 + (data_range >> 0x3f);
  int_writer = (int *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)int_writer) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    int_writer = (int *)unaff_RBX[1];
  }
  *int_writer = (int)(data_range >> 2) - (int)(data_range >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  
  // 处理第四组渲染数据块的序列化
  range_value = *(int64_t *)(unaff_RDI + 0x1890) - *(int64_t *)(unaff_RDI + 0x1888);
  calculated_value = range_value >> 0x3f;
  iVar8 = iteration_index;
  if (range_value / 0x98 + calculated_value != calculated_value) {
    do {
      System_QueueProcessor();
      iVar8 = iVar8 + 1;
    } while ((uint64_t)(int64_t)iVar8 <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0x1890) - *(int64_t *)(unaff_RDI + 0x1888)) / 0x98));
  }
  
  // 处理渲染状态标志
  System_QueueProcessor();
  byte_writer = (int8_t *)unaff_RBX[1];
  byte_value = *(int8_t *)(unaff_RDI + 0x18c9);
  if ((uint64_t)((*unaff_RBX - (int64_t)byte_writer) + unaff_RBX[2]) < 2) {
    System_BufferManager();
    byte_writer = (int8_t *)unaff_RBX[1];
  }
  *byte_writer = byte_value;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  
  // 处理渲染配置数据块
  dword_writer = (int32_t *)unaff_RBX[1];
  if (*(char *)(unaff_RDI + 0x18c9) != '\0') {
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    dword_writer = (int32_t *)unaff_RBX[1];
  }
  if ((uint64_t)((*unaff_RBX - (int64_t)dword_writer) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    dword_writer = (int32_t *)unaff_RBX[1];
  }
  *dword_writer = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  
  // 写入16个渲染数据块
  do {
    int_writer = (int *)unaff_RBX[1];
    if ((uint64_t)((*unaff_RBX - (int64_t)int_writer) + unaff_RBX[2]) < 5) {
      System_BufferManager();
      int_writer = (int *)unaff_RBX[1];
    }
    *int_writer = iteration_index;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    System_QueueProcessor();
    iteration_index = iteration_index + 1;
  } while (iteration_index < 0x10);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address


// 函数: void FUN_180271cf0(int64_t param_1,int64_t param_2)
// 渲染系统主处理函数 - 处理渲染系统的主要逻辑
void process_rendering_system(int64_t render_manager,int64_t data_buffer)

{
  int temp_int;
  int64_t temp_long;
  int *int_pointer;
  int32_t *dword_pointer;
  int64_t range_size;
  int64_t *context_pointer;
  uint *uint_pointer;
  void *data_pointer;
  uint64_t offset_1;
  uint64_t offset_2;
  uint uint_value;
  uint64_t loop_count;
  int64_t temp_value;
  int8_t stack_buffer [32];
  uint64_t stack_guard;
  void *ptr_e8;
  void *ptr_e0;
  int32_t stack_d8;
  uint8_t stack_d0 [136];
  uint64_t stack_checksum;
  
  // 初始化栈保护和校验
  stack_guard = 0xfffffffffffffffe;
  stack_checksum = GET_SECURITY_COOKIE() ^ (uint64_t)stack_buffer;
  
  // 处理数据缓冲区
  temp_value = *(int64_t *)(data_buffer + 8);
  int_pointer = (int *)(temp_value + 4);
  *(int **)(data_buffer + 8) = int_pointer;
  temp_int = *int_pointer;
  *(int64_t *)(data_buffer + 8) = temp_value + 8;
  FUN_180272e40(render_manager + 0x20,(int64_t)temp_int);
  
  // 初始化渲染处理循环
  offset_2 = 0;
  temp_value = *(int64_t *)(render_manager + 0x20);
  range_size = *(int64_t *)(render_manager + 0x28) - temp_value;
  temp_long = range_size >> 0x3f;
  offset_1 = offset_2;
  loop_count = offset_2;
  
  // 处理渲染数据块的主循环
  if (lVar5 / 0x98 + lVar2 == lVar2) {
    uint_pointer = *(uint **)(data_buffer + 8);
  }
  else {
    do {
      uint_value = **(uint **)(data_buffer + 8);
      uint_pointer = *(uint **)(data_buffer + 8) + 1;
      *(uint **)(data_buffer + 8) = uint_pointer;
      if (uint_value != 0) {
        (**(code **)(*(int64_t *)(uVar9 + lVar13) + 0x18))
                  ((int64_t *)(uVar9 + lVar13),uint_pointer,uint_value);
        *(int64_t *)(data_buffer + 8) = *(int64_t *)(data_buffer + 8) + (uint64_t)uint_value;
        uint_pointer = *(uint **)(data_buffer + 8);
      }
      uint_value = (int)uVar12 + 1;
      lVar13 = *(int64_t *)(render_manager + 0x20);
      uVar9 = uVar9 + 0x98;
      uVar12 = (uint64_t)uint_value;
    } while ((uint64_t)(int64_t)(int)uint_value <
             (uint64_t)((*(int64_t *)(render_manager + 0x28) - lVar13) / 0x98));
  }
  
  // 处理渲染数据块
  uint_value = *uint_pointer;
  uint_pointer = uint_pointer + 1;
  *(uint **)(data_buffer + 8) = uint_pointer;
  if (uint_value != 0) {
    (**(code **)(*(int64_t *)(render_manager + 0x40) + 0x18))((int64_t *)(render_manager + 0x40),uint_pointer,uint_value);
    *(int64_t *)(data_buffer + 8) = *(int64_t *)(data_buffer + 8) + (uint64_t)uint_value;
    uint_pointer = *(uint **)(data_buffer + 8);
  }
  
  // 处理渲染状态和配置数据
  *(char *)(render_manager + 0xd8) = (char)*uint_pointer;
  dword_pointer = (int32_t *)(*(int64_t *)(data_buffer + 8) + 1);
  *(int32_t **)(data_buffer + 8) = dword_pointer;
  *(int32_t *)(render_manager + 0xdc) = *dword_pointer;
  lVar13 = *(int64_t *)(data_buffer + 8);
  uint_pointer = (uint *)(lVar13 + 4);
  *(uint **)(data_buffer + 8) = uint_pointer;
  uint_value = *uint_pointer;
  int_pointer = (int *)(lVar13 + 8);
  *(int **)(data_buffer + 8) = int_pointer;
  
  // 处理渲染配置数据块
  if (uint_value != 0) {
    (**(code **)(*(int64_t *)(render_manager + 0xe0) + 0x18))((int64_t *)(render_manager + 0xe0),int_pointer,uint_value);
    *(int64_t *)(data_buffer + 8) = *(int64_t *)(data_buffer + 8) + (uint64_t)uint_value;
    int_pointer = *(int **)(data_buffer + 8);
  }
  temp_int = *int_pointer;
  *(int **)(data_buffer + 8) = int_pointer + 1;
  FUN_180272e40(render_manager + 0x178,(int64_t)temp_int);
  
  // 处理渲染数据块的第二次循环
  lVar13 = *(int64_t *)(render_manager + 0x178);
  lVar5 = *(int64_t *)(render_manager + 0x180) - lVar13;
  lVar2 = lVar5 >> 0x3f;
  uVar9 = uVar10;
  uVar12 = uVar10;
  if (lVar5 / 0x98 + lVar2 != lVar2) {
    do {
      uint_value = **(uint **)(data_buffer + 8);
      uint_pointer = *(uint **)(data_buffer + 8) + 1;
      *(uint **)(data_buffer + 8) = uint_pointer;
      if (uint_value != 0) {
        (**(code **)(*(int64_t *)(uVar9 + lVar13) + 0x18))
                  ((int64_t *)(uVar9 + lVar13),uint_pointer,uint_value);
        *(int64_t *)(data_buffer + 8) = *(int64_t *)(data_buffer + 8) + (uint64_t)uint_value;
      }
      uint_value = (int)uVar12 + 1;
      lVar13 = *(int64_t *)(render_manager + 0x178);
      uVar9 = uVar9 + 0x98;
      uVar12 = (uint64_t)uint_value;
    } while ((uint64_t)(int64_t)(int)uint_value <
             (uint64_t)((*(int64_t *)(render_manager + 0x180) - lVar13) / 0x98));
  }
  
  // 处理渲染配置数据块的5次循环
  context_pointer = (int64_t *)(render_manager + 0x198);
  lVar13 = 5;
  do {
    uint_value = **(uint **)(data_buffer + 8);
    uint_pointer = *(uint **)(data_buffer + 8) + 1;
    *(uint **)(data_buffer + 8) = uint_pointer;
    if (uint_value != 0) {
      (**(code **)(*context_pointer + 0x18))(context_pointer,uint_pointer,uint_value);
      *(int64_t *)(data_buffer + 8) = *(int64_t *)(data_buffer + 8) + (uint64_t)uint_value;
      uint_pointer = *(uint **)(data_buffer + 8);
    }
    context_pointer = context_pointer + 0x13;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  
  // 处理渲染数据块的第三次循环
  lVar13 = (int64_t)(int)*uint_pointer;
  *(uint **)(data_buffer + 8) = uint_pointer + 1;
  FUN_180272e40(render_manager + 0x490,lVar13);
  uVar9 = uVar10;
  if (0 < lVar13) {
    do {
      context_pointer = (int64_t *)(*(int64_t *)(render_manager + 0x490) + uVar9);
      uint_value = **(uint **)(data_buffer + 8);
      uint_pointer = *(uint **)(data_buffer + 8) + 1;
      *(uint **)(data_buffer + 8) = uint_pointer;
      if (uint_value != 0) {
        (**(code **)(*context_pointer + 0x18))(context_pointer,uint_pointer,uint_value);
        *(int64_t *)(data_buffer + 8) = *(int64_t *)(data_buffer + 8) + (uint64_t)uint_value;
      }
      lVar13 = lVar13 + -1;
      uVar9 = uVar9 + 0x98;
    } while (lVar13 != 0);
  }
  
  // 处理渲染配置数据块的9次循环
  context_pointer = (int64_t *)(render_manager + 0xa30);
  lVar13 = 9;
  do {
    uint_value = **(uint **)(data_buffer + 8);
    uint_pointer = *(uint **)(data_buffer + 8) + 1;
    *(uint **)(data_buffer + 8) = uint_pointer;
    if (uint_value != 0) {
      (**(code **)(*context_pointer + 0x18))(context_pointer,uint_pointer,uint_value);
      *(int64_t *)(data_buffer + 8) = *(int64_t *)(data_buffer + 8) + (uint64_t)uint_value;
      uint_pointer = *(uint **)(data_buffer + 8);
    }
    context_pointer = context_pointer + 0x13;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  
  // 处理渲染状态数据块
  uint_value = *uint_pointer;
  uint_pointer = uint_pointer + 1;
  *(uint **)(data_buffer + 8) = uint_pointer;
  if (uint_value != 0) {
    (**(code **)(*(int64_t *)(render_manager + 0xf88) + 0x18))(render_manager + 0xf88,uint_pointer,uint_value);
    *(int64_t *)(data_buffer + 8) = *(int64_t *)(data_buffer + 8) + (uint64_t)uint_value;
    uint_pointer = *(uint **)(data_buffer + 8);
  }
  
  // 处理渲染配置数据块
  uint_value = *uint_pointer;
  uint_pointer = uint_pointer + 1;
  *(uint **)(data_buffer + 8) = uint_pointer;
  if (uint_value != 0) {
    (**(code **)(*(int64_t *)(render_manager + 0x1020) + 0x18))(render_manager + 0x1020,uint_pointer,uint_value);
    *(int64_t *)(data_buffer + 8) = *(int64_t *)(data_buffer + 8) + (uint64_t)uint_value;
    uint_pointer = *(uint **)(data_buffer + 8);
  }
  
  // 处理渲染数据块的第四次循环
  lVar13 = (int64_t)(int)*uint_pointer;
  *(uint **)(data_buffer + 8) = uint_pointer + 1;
  FUN_180272e40(render_manager + 0x10b8,lVar13);
  if (lVar13 < 1) {
    uint_pointer = *(uint **)(data_buffer + 8);
  }
  else {
    do {
      context_pointer = (int64_t *)(*(int64_t *)(render_manager + 0x10b8) + uVar10);
      uint_value = **(uint **)(data_buffer + 8);
      uint_pointer = *(uint **)(data_buffer + 8) + 1;
      *(uint **)(data_buffer + 8) = uint_pointer;
      if (uint_value != 0) {
        (**(code **)(*context_pointer + 0x18))(context_pointer,uint_pointer,uint_value);
        *(int64_t *)(data_buffer + 8) = *(int64_t *)(data_buffer + 8) + (uint64_t)uint_value;
        uint_pointer = *(uint **)(data_buffer + 8);
      }
      uVar10 = uVar10 + 0x98;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  
  // 处理渲染状态数据块
  uint_value = *uint_pointer;
  uint_pointer = uint_pointer + 1;
  *(uint **)(data_buffer + 8) = uint_pointer;
  if (uint_value != 0) {
    (**(code **)(*(int64_t *)(render_manager + 0x10d8) + 0x18))
              ((int64_t *)(render_manager + 0x10d8),uint_pointer,uint_value);
    *(int64_t *)(data_buffer + 8) = *(int64_t *)(data_buffer + 8) + (uint64_t)uint_value;
    uint_pointer = *(uint **)(data_buffer + 8);
  }
  
  // 处理渲染配置标志
  *(char *)(render_manager + 0x10f9) = (char)*uint_pointer;
  lVar13 = *(int64_t *)(data_buffer + 8);
  uint_pointer = (uint *)(lVar13 + 1);
  *(uint **)(data_buffer + 8) = uint_pointer;
  
  // 处理渲染配置数据（如果标志不为空）
  if (*(char *)(render_manager + 0x10f9) != '\0') {
    uint_value = *uint_pointer;
    uint_pointer = (uint *)(lVar13 + 5);
    *(uint **)(data_buffer + 8) = uint_pointer;
    if (uint_value != 0) {
      (**(code **)(*(int64_t *)(render_manager + 0x1100) + 0x18))
                ((int64_t *)(render_manager + 0x1100),uint_pointer,uint_value);
      *(int64_t *)(data_buffer + 8) = *(int64_t *)(data_buffer + 8) + (uint64_t)uint_value;
      uint_pointer = *(uint **)(data_buffer + 8);
    }
    
    // 处理多个渲染配置数据块
    uint_value = *uint_pointer;
    uint_pointer = uint_pointer + 1;
    *(uint **)(data_buffer + 8) = uint_pointer;
    if (uint_value != 0) {
      (**(code **)(*(int64_t *)(render_manager + 0x1198) + 0x18))
                ((int64_t *)(render_manager + 0x1198),uint_pointer,uint_value);
      *(int64_t *)(data_buffer + 8) = *(int64_t *)(data_buffer + 8) + (uint64_t)uint_value;
      uint_pointer = *(uint **)(data_buffer + 8);
    }
    
    uint_value = *uint_pointer;
    uint_pointer = uint_pointer + 1;
    *(uint **)(data_buffer + 8) = uint_pointer;
    if (uint_value != 0) {
      (**(code **)(*(int64_t *)(render_manager + 0x1230) + 0x18))
                ((int64_t *)(render_manager + 0x1230),uint_pointer,uint_value);
      *(int64_t *)(data_buffer + 8) = *(int64_t *)(data_buffer + 8) + (uint64_t)uint_value;
      uint_pointer = *(uint **)(data_buffer + 8);
    }
    
    uint_value = *uint_pointer;
    uint_pointer = uint_pointer + 1;
    *(uint **)(data_buffer + 8) = uint_pointer;
    if (uint_value != 0) {
      (**(code **)(*(int64_t *)(render_manager + 0x12c8) + 0x18))
                ((int64_t *)(render_manager + 0x12c8),uint_pointer,uint_value);
      *(int64_t *)(data_buffer + 8) = *(int64_t *)(data_buffer + 8) + (uint64_t)uint_value;
      uint_pointer = *(uint **)(data_buffer + 8);
    }
    
    uint_value = *uint_pointer;
    uint_pointer = uint_pointer + 1;
    *(uint **)(data_buffer + 8) = uint_pointer;
    if (uint_value != 0) {
      (**(code **)(*(int64_t *)(render_manager + 0x1360) + 0x18))
                ((int64_t *)(render_manager + 0x1360),uint_pointer,uint_value);
      *(int64_t *)(data_buffer + 8) = *(int64_t *)(data_buffer + 8) + (uint64_t)uint_value;
      uint_pointer = *(uint **)(data_buffer + 8);
    }
    
    uint_value = *uint_pointer;
    uint_pointer = uint_pointer + 1;
    *(uint **)(data_buffer + 8) = uint_pointer;
    if (uint_value != 0) {
      (**(code **)(*(int64_t *)(render_manager + 0x13f8) + 0x18))
                ((int64_t *)(render_manager + 0x13f8),uint_pointer,uint_value);
      *(int64_t *)(data_buffer + 8) = *(int64_t *)(data_buffer + 8) + (uint64_t)uint_value;
      uint_pointer = *(uint **)(data_buffer + 8);
    }
  }
  
  // 处理最终渲染数据块
  uint_value = *uint_pointer;
  lVar13 = (int64_t)(int)uint_value;
  *(uint **)(data_buffer + 8) = uint_pointer + 1;
  if (0 < (int)uint_value) {
    context_pointer = (int64_t *)(render_manager + 0x4b0);
    do {
      temp_int = **(int **)(data_buffer + 8);
      *(int **)(data_buffer + 8) = *(int **)(data_buffer + 8) + 1;
      puStack_e8 = &memory_allocator_3432_ptr;
      puStack_e0 = auStack_d0;
      uStack_d8 = 0;
      auStack_d0[0] = 0;
      uint_value = **(uint **)(data_buffer + 8);
      uint_pointer = *(uint **)(data_buffer + 8) + 1;
      *(uint **)(data_buffer + 8) = uint_pointer;
      if (uint_value != 0) {
        FUN_180049910(&puStack_e8,uint_pointer,uint_value);
        *(int64_t *)(data_buffer + 8) = *(int64_t *)(data_buffer + 8) + (uint64_t)uint_value;
      }
      if (temp_int < 0x10) {
        puVar8 = &system_buffer_ptr;
        if (puStack_e0 != (void *)0x0) {
          puVar8 = puStack_e0;
        }
        (**(code **)(*context_pointer + 0x10))(context_pointer,puVar8);
      }
      puStack_e8 = &system_state_ptr;
      context_pointer = context_pointer + 0xb;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  
  // 执行最终的栈保护检查
  // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_118);
}