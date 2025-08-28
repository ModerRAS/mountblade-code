#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part032.c - 渲染系统模块第32部分
// 本文件包含9个函数，主要处理渲染数据结构管理、缓冲区操作和资源清理

// 全局变量声明
uint64_t system_memory_pool_ptr;  // 内存分配器
uint64_t SYSTEM_FILE_COUNTER_ADDR;  // 渲染上下文
uint64_t SYSTEM_DATA_MANAGER_A;  // 引擎状态数据
uint64_t system_data_buffer_ptr;   // 渲染资源管理器
uint64_t system_state_ptr;   // 纹理管理器
uint64_t unknown_var_3480_ptr;   // 缓冲区管理器
uint64_t system_handler2_ptr;   // 渲染状态管理器
uint64_t system_handler1_ptr;   // 渲染队列管理器
uint64_t system_buffer_ptr;   // 默认渲染数据

/**
 * 渲染数据插入函数
 * 向渲染数据结构中插入新的数据项，支持动态扩容
 * 
 * 原始函数名: FUN_180284cf0
 * 
 * @param data_struct_ptr 渲染数据结构指针
 * @param data_item_ptr 要插入的数据项指针
 */
void insert_rendering_data_item(uint64_t *data_struct_ptr, uint64_t *data_item_ptr)

{
  int32_t data_field1;
  int32_t data_field2;
  int32_t data_field3;
  uint64_t data_value1;
  uint64_t *buffer_ptr;
  uint64_t *source_ptr;
  uint64_t *dest_ptr;
  int64_t capacity;
  uint64_t *current_ptr;
  
  current_ptr = (uint64_t *)data_struct_ptr[1];
  if (current_ptr < (uint64_t *)data_struct_ptr[2]) {
    // 有足够空间，直接插入
    data_struct_ptr[1] = (uint64_t)(current_ptr + 2);
    data_value1 = data_item_ptr[1];
    *current_ptr = *data_item_ptr;
    current_ptr[1] = data_value1;
    return;
  }
  
  // 空间不足，需要扩容
  source_ptr = (uint64_t *)*data_struct_ptr;
  capacity = (int64_t)current_ptr - (int64_t)source_ptr >> 4;
  if (capacity == 0) {
    capacity = 1;
  }
  else {
    capacity = capacity * 2;
    if (capacity == 0) {
      dest_ptr = (uint64_t *)0x0;
      buffer_ptr = dest_ptr;
      goto copy_data;
    }
  }
  
  // 分配新内存
  dest_ptr = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr, capacity << 4, (char)data_struct_ptr[3]);
  current_ptr = (uint64_t *)data_struct_ptr[1];
  source_ptr = (uint64_t *)*data_struct_ptr;
  buffer_ptr = dest_ptr;
  
copy_data:
  // 复制现有数据
  for (; source_ptr != current_ptr; source_ptr = source_ptr + 2) {
    data_value1 = source_ptr[1];
    *buffer_ptr = *source_ptr;
    buffer_ptr[1] = data_value1;
    buffer_ptr = buffer_ptr + 2;
  }
  
  // 插入新数据
  data_field1 = *(int32_t *)((int64_t)data_item_ptr + 4);
  data_field2 = *(int32_t *)(data_item_ptr + 1);
  data_field3 = *(int32_t *)((int64_t)data_item_ptr + 0xc);
  *(int32_t *)buffer_ptr = *(int32_t *)data_item_ptr;
  *(int32_t *)((int64_t)buffer_ptr + 4) = data_field1;
  *(int32_t *)(buffer_ptr + 1) = data_field2;
  *(int32_t *)((int64_t)buffer_ptr + 0xc) = data_field3;
  
  if (*data_struct_ptr == 0) {
    *data_struct_ptr = (uint64_t)buffer_ptr;
    data_struct_ptr[2] = (uint64_t)(buffer_ptr + capacity * 2);
    data_struct_ptr[1] = (uint64_t)(buffer_ptr + 2);
    return;
  }
  // 错误处理
  CoreMemoryPoolInitializer();
}

/**
 * 渲染缓冲区预留函数
 * 为渲染缓冲区预留指定大小的空间
 * 
 * 原始函数名: FUN_180284de0
 * 
 * @param buffer_ptr 缓冲区指针
 * @param reserve_size 预留大小
 */
void reserve_rendering_buffer(int64_t *buffer_ptr, uint64_t reserve_size)

{
  int32_t *data_ptr;
  int64_t *size_ptr;
  uint64_t *buffer_start;
  uint64_t *buffer_end;
  uint64_t *new_buffer;
  int64_t current_size;
  uint64_t *temp_ptr;
  uint64_t new_size;
  int64_t *iter_ptr;
  uint64_t required_size;
  int64_t offset;
  
  buffer_end = (uint64_t *)buffer_ptr[1];
  if ((uint64_t)(buffer_ptr[2] - (int64_t)buffer_end >> 4) < reserve_size) {
    buffer_start = (uint64_t *)*buffer_ptr;
    current_size = (int64_t)buffer_end - (int64_t)buffer_start >> 4;
    required_size = current_size * 2;
    if (current_size == 0) {
      required_size = 1;
    }
    if (required_size < current_size + reserve_size) {
      required_size = current_size + reserve_size;
    }
    
    // 分配新缓冲区
    new_buffer = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr, required_size << 4, (char)buffer_ptr[3]);
    buffer_end = (uint64_t *)buffer_ptr[1];
    buffer_start = (uint64_t *)*buffer_ptr;
    temp_ptr = new_buffer;
    
    // 复制数据并清理旧数据
    if (buffer_start != buffer_end) {
      offset = (int64_t)buffer_start - (int64_t)new_buffer;
      current_size = 8 - (int64_t)buffer_start;
      do {
        *temp_ptr = *buffer_start;
        *buffer_start = 0;
        data_ptr = (int32_t *)((int64_t)new_buffer + current_size + (int64_t)buffer_start);
        *data_ptr = *(int32_t *)((int64_t)data_ptr + offset);
        buffer_start = buffer_start + 2;
        temp_ptr = temp_ptr + 2;
      } while (buffer_start != buffer_end);
    }
    
    // 初始化预留空间
    temp_ptr = new_buffer + (buffer_end - buffer_start);
    new_size = reserve_size;
    if (reserve_size != 0) {
      do {
        temp_ptr[1] = 0;
        *temp_ptr = 0;
        new_size = new_size - 1;
        temp_ptr = temp_ptr + 2;
      } while (new_size != 0);
    }
    
    // 释放旧缓冲区
    size_ptr = (int64_t *)buffer_ptr[1];
    iter_ptr = (int64_t *)*buffer_ptr;
    if (iter_ptr != size_ptr) {
      do {
        if ((int64_t *)*iter_ptr != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*iter_ptr + 0x38))();
        }
        iter_ptr = iter_ptr + 2;
      } while (iter_ptr != size_ptr);
      iter_ptr = (int64_t *)*buffer_ptr;
    }
    if (iter_ptr != (int64_t *)0x0) {
      CoreMemoryPoolInitializer(iter_ptr);
    }
    
    // 更新指针
    *buffer_ptr = (int64_t)new_buffer;
    buffer_ptr[1] = (int64_t)(temp_ptr + reserve_size * 2);
    buffer_ptr[2] = (int64_t)(new_buffer + required_size * 2);
  }
  else {
    // 有足够空间，直接预留
    new_size = reserve_size;
    if (reserve_size != 0) {
      do {
        buffer_end[1] = 0;
        *buffer_end = 0;
        buffer_end = buffer_end + 2;
        new_size = new_size - 1;
      } while (new_size != 0);
      buffer_end = (uint64_t *)buffer_ptr[1];
    }
    buffer_ptr[1] = (int64_t)(buffer_end + reserve_size * 2);
  }
  return;
}

/**
 * 渲染数据清理函数
 * 清理渲染数据结构，释放相关资源
 * 
 * 原始函数名: FUN_180284f90
 * 
 * @param data_start_ptr 数据起始指针
 * @param data_end_ptr 数据结束指针
 */
void cleanup_rendering_data(int64_t *data_start_ptr, int64_t *data_end_ptr)

{
  if (data_start_ptr != data_end_ptr) {
    do {
      if ((int64_t *)*data_start_ptr != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*data_start_ptr + 0x38))();
      }
      data_start_ptr = data_start_ptr + 2;
    } while (data_start_ptr != data_end_ptr);
  }
  return;
}

/**
 * 渲染数据移动函数
 * 移动渲染数据到新的位置
 * 
 * 原始函数名: FUN_180284fe0
 * 
 * @param source_ptr 源数据指针
 * @param source_end_ptr 源数据结束指针
 * @param dest_ptr 目标数据指针
 * @return 移动后的目标指针
 */
uint64_t * move_rendering_data(uint64_t *source_ptr, uint64_t *source_end_ptr, uint64_t *dest_ptr)

{
  int32_t *data_ptr;
  int64_t offset;
  int64_t dest_offset;
  
  if (source_ptr != source_end_ptr) {
    offset = (int64_t)source_ptr - (int64_t)dest_ptr;
    dest_offset = (int64_t)dest_ptr + (8 - (int64_t)source_ptr);
    do {
      *dest_ptr = *source_ptr;
      *source_ptr = 0;
      data_ptr = (int32_t *)(dest_offset + (int64_t)source_ptr);
      *data_ptr = *(int32_t *)((int64_t)data_ptr + offset);
      source_ptr = source_ptr + 2;
      dest_ptr = dest_ptr + 2;
    } while (source_ptr != source_end_ptr);
  }
  return dest_ptr;
}

/**
 * 渲染资源清理函数类型1
 * 清理渲染资源，处理资源引用
 * 
 * 原始函数名: FUN_180285040
 * 
 * @param resource_ptr 资源指针
 */
void cleanup_rendering_resources_type1(int64_t resource_ptr)

{
  int64_t resource_array_ptr;
  uint64_t *current_resource;
  uint64_t resource_count;
  uint64_t resource_index;
  
  resource_count = *(uint64_t *)(resource_ptr + 0x10);
  resource_array_ptr = *(int64_t *)(resource_ptr + 8);
  resource_index = 0;
  if (resource_count != 0) {
    do {
      current_resource = *(uint64_t **)(resource_array_ptr + resource_index * 8);
      if (current_resource != (uint64_t *)0x0) {
        if (current_resource[4] != 0) {
          CoreMemoryPoolInitializer();
        }
        *current_resource = &system_data_buffer_ptr;
        if (current_resource[1] == 0) {
          current_resource[1] = 0;
          *(int32_t *)(current_resource + 3) = 0;
          *current_resource = &system_state_ptr;
          CoreMemoryPoolInitializer(current_resource);
        }
        CoreMemoryPoolInitializer();
      }
      *(uint64_t *)(resource_array_ptr + resource_index * 8) = 0;
      resource_index = resource_index + 1;
    } while (resource_index < resource_count);
    resource_count = *(uint64_t *)(resource_ptr + 0x10);
  }
  *(uint64_t *)(resource_ptr + 0x18) = 0;
  if ((1 < resource_count) && (*(int64_t *)(resource_ptr + 8) != 0)) {
    CoreMemoryPoolInitializer();
  }
  return;
}

/**
 * 渲染资源清理函数类型2
 * 清理渲染资源，处理资源引用
 * 
 * 原始函数名: FUN_180285060
 * 
 * @param resource_ptr 资源指针
 */
void cleanup_rendering_resources_type2(int64_t resource_ptr)

{
  int64_t resource_array_ptr;
  uint64_t *current_resource;
  uint64_t resource_count;
  uint64_t resource_index;
  
  resource_count = *(uint64_t *)(resource_ptr + 0x10);
  resource_array_ptr = *(int64_t *)(resource_ptr + 8);
  resource_index = 0;
  if (resource_count != 0) {
    do {
      current_resource = *(uint64_t **)(resource_array_ptr + resource_index * 8);
      if (current_resource != (uint64_t *)0x0) {
        if (current_resource[4] != 0) {
          CoreMemoryPoolInitializer();
        }
        *current_resource = &system_data_buffer_ptr;
        if (current_resource[1] == 0) {
          current_resource[1] = 0;
          *(int32_t *)(current_resource + 3) = 0;
          *current_resource = &system_state_ptr;
          CoreMemoryPoolInitializer(current_resource);
        }
        CoreMemoryPoolInitializer();
      }
      *(uint64_t *)(resource_array_ptr + resource_index * 8) = 0;
      resource_index = resource_index + 1;
    } while (resource_index < resource_count);
    resource_count = *(uint64_t *)(resource_ptr + 0x10);
  }
  *(uint64_t *)(resource_ptr + 0x18) = 0;
  if ((1 < resource_count) && (*(int64_t *)(resource_ptr + 8) != 0)) {
    CoreMemoryPoolInitializer();
  }
  return;
}

/**
 * 渲染资源清理函数类型3
 * 清理渲染资源，处理资源引用
 * 
 * 原始函数名: FUN_180285080
 * 
 * @param resource_ptr 资源指针
 */
void cleanup_rendering_resources_type3(int64_t resource_ptr)

{
  int64_t resource_array_ptr;
  uint64_t *current_resource;
  uint64_t resource_count;
  uint64_t resource_index;
  
  resource_count = *(uint64_t *)(resource_ptr + 0x10);
  resource_array_ptr = *(int64_t *)(resource_ptr + 8);
  resource_index = 0;
  if (resource_count != 0) {
    do {
      current_resource = *(uint64_t **)(resource_array_ptr + resource_index * 8);
      if (current_resource != (uint64_t *)0x0) {
        if (current_resource[4] != 0) {
          CoreMemoryPoolInitializer();
        }
        *current_resource = &system_data_buffer_ptr;
        if (current_resource[1] == 0) {
          current_resource[1] = 0;
          *(int32_t *)(current_resource + 3) = 0;
          *current_resource = &system_state_ptr;
          CoreMemoryPoolInitializer(current_resource);
        }
        CoreMemoryPoolInitializer();
      }
      *(uint64_t *)(resource_array_ptr + resource_index * 8) = 0;
      resource_index = resource_index + 1;
    } while (resource_index < resource_count);
    resource_count = *(uint64_t *)(resource_ptr + 0x10);
  }
  *(uint64_t *)(resource_ptr + 0x18) = 0;
  if ((1 < resource_count) && (*(int64_t *)(resource_ptr + 8) != 0)) {
    CoreMemoryPoolInitializer();
  }
  return;
}

/**
 * 渲染数据初始化函数
 * 初始化渲染数据结构
 * 
 * 原始函数名: FUN_180285190
 * 
 * @param data_ptr 数据指针
 * @param init_count 初始化数量
 */
void initialize_rendering_data(int64_t data_ptr, int64_t init_count)

{
  int32_t *data_field_ptr;
  
  if (init_count != 0) {
    data_field_ptr = (int32_t *)(data_ptr + 0x168);
    do {
      // 初始化渲染数据结构
      *(void **)(data_field_ptr + -0x5a) = &system_state_ptr;
      *(uint64_t *)(data_field_ptr + -0x58) = 0;
      data_field_ptr[-0x56] = 0;
      *(void **)(data_field_ptr + -0x5a) = &unknown_var_3480_ptr;
      *(int32_t **)(data_field_ptr + -0x58) = data_field_ptr + -0x54;
      data_field_ptr[-0x56] = 0;
      *(int8_t *)(data_field_ptr + -0x54) = 0;
      
      // 设置渲染状态
      *(void **)(data_field_ptr + -0x16) = &system_state_ptr;
      *(uint64_t *)(data_field_ptr + -0x14) = 0;
      data_field_ptr[-0x12] = 0;
      *(void **)(data_field_ptr + -0x16) = &system_data_buffer_ptr;
      *(uint64_t *)(data_field_ptr + -0x10) = 0;
      *(uint64_t *)(data_field_ptr + -0x14) = 0;
      data_field_ptr[-0x12] = 0;
      *(uint64_t *)(data_field_ptr + -0xe) = 0;
      *(uint64_t *)(data_field_ptr + -0xc) = 0;
      *(uint64_t *)(data_field_ptr + -10) = 0;
      data_field_ptr[-8] = 3;
      *(uint64_t *)(data_field_ptr + -6) = 0;
      *(uint64_t *)(data_field_ptr + -4) = 0;
      *(uint64_t *)(data_field_ptr + -2) = 0;
      *data_field_ptr = 3;
      *(uint64_t *)(data_field_ptr + 2) = 0;
      *(uint64_t *)(data_field_ptr + 4) = 0;
      *(uint64_t *)(data_field_ptr + 6) = 0;
      data_field_ptr[8] = 3;
      
      // 设置渲染参数
      *(uint64_t *)(data_field_ptr + -0x43) = 0;
      data_field_ptr[-0x41] = 0;
      data_field_ptr[-0x3a] = 0;
      data_field_ptr[-0x39] = 0;
      data_field_ptr[-0x38] = 0;
      data_field_ptr[-0x37] = 0x3f800000;  // 1.0f
      data_field_ptr[-0x36] = 0;
      data_field_ptr[-0x35] = 0;
      data_field_ptr[-0x34] = 0;
      data_field_ptr[-0x33] = 0x3f800000;  // 1.0f
      *(uint64_t *)(data_field_ptr + -0x32) = 0;
      *(uint64_t *)(data_field_ptr + -0x30) = 0;
      *(uint64_t *)(data_field_ptr + -0x2e) = 0;
      *(uint64_t *)(data_field_ptr + -0x2c) = 0;
      *(uint64_t *)(data_field_ptr + -0x2a) = 0;
      *(uint64_t *)(data_field_ptr + -0x28) = 0;
      *(uint64_t *)(data_field_ptr + -0x26) = 0x3f800000;  // 1.0f
      *(uint64_t *)(data_field_ptr + -0x24) = 0;
      *(uint64_t *)(data_field_ptr + -0x22) = 0x3f80000000000000;  // 1.0
      *(uint64_t *)(data_field_ptr + -0x20) = 0;
      *(uint64_t *)(data_field_ptr + -0x1e) = 0;
      *(uint64_t *)(data_field_ptr + -0x1c) = 0x3f800000;  // 1.0f
      *(uint64_t *)(data_field_ptr + -0x1a) = 0;
      *(uint64_t *)(data_field_ptr + -0x18) = 0x3f80000000000000;  // 1.0
      
      // 设置渲染标志
      data_field_ptr[-0x44] = 0;
      *(uint64_t *)(data_field_ptr + -0x40) = 0;
      *(uint64_t *)(data_field_ptr + -0x3e) = 0;
      *(uint64_t *)(data_field_ptr + -0x3c) = 0;
      data_field_ptr[0xc] = 0xffffffff;  // 最大无符号整数
      *(uint64_t *)(data_field_ptr + 10) = 0;
      data_field_ptr = data_field_ptr + 0x68;
      init_count = init_count - 1;
    } while (init_count != 0);
  }
  return;
}

/**
 * 渲染资源清理函数类型4
 * 清理渲染资源，处理资源引用
 * 
 * 原始函数名: FUN_180285410
 * 
 * @param resource_ptr 资源指针
 */
void cleanup_rendering_resources_type4(int64_t resource_ptr)

{
  int64_t resource_array_ptr;
  uint64_t *current_resource;
  uint64_t resource_count;
  uint64_t resource_index;
  
  resource_count = *(uint64_t *)(resource_ptr + 0x18);
  resource_array_ptr = *(int64_t *)(resource_ptr + 0x10);
  resource_index = 0;
  if (resource_count != 0) {
    do {
      current_resource = *(uint64_t **)(resource_array_ptr + resource_index * 8);
      if (current_resource != (uint64_t *)0x0) {
        if (current_resource[4] != 0) {
          CoreMemoryPoolInitializer();
        }
        *current_resource = &system_data_buffer_ptr;
        if (current_resource[1] == 0) {
          current_resource[1] = 0;
          *(int32_t *)(current_resource + 3) = 0;
          *current_resource = &system_state_ptr;
          CoreMemoryPoolInitializer(current_resource);
        }
        CoreMemoryPoolInitializer();
      }
      *(uint64_t *)(resource_array_ptr + resource_index * 8) = 0;
      resource_index = resource_index + 1;
    } while (resource_index < resource_count);
    resource_count = *(uint64_t *)(resource_ptr + 0x18);
  }
  *(uint64_t *)(resource_ptr + 0x20) = 0;
  if ((1 < resource_count) && (*(int64_t *)(resource_ptr + 0x10) != 0)) {
    CoreMemoryPoolInitializer();
  }
  return;
}

/**
 * 渲染数据创建函数
 * 创建渲染数据结构
 * 
 * 原始函数名: FUN_180285440
 * 
 * @param data_ptr 数据指针
 * @param src_data_ptr 源数据指针
 * @param src_data_end_ptr 源数据结束指针
 * @param dest_data_ptr 目标数据指针
 * @return 创建后的数据指针
 */
int64_t * create_rendering_data(int64_t *data_ptr, int32_t *src_data_ptr, int32_t *src_data_end_ptr, uint64_t *dest_data_ptr)

{
  uint64_t *new_data_ptr;
  int32_t *src_field_ptr;
  int32_t data_field1;
  uint64_t data_value1;
  int32_t data_field2;
  int32_t data_field3;
  int32_t *temp_ptr;
  void *name_ptr;
  
  *data_ptr = (int64_t)dest_data_ptr;
  if (src_data_ptr != src_data_end_ptr) {
    src_field_ptr = src_data_ptr + 0x5a;
    do {
      // 初始化数据结构
      *dest_data_ptr = &system_state_ptr;
      dest_data_ptr[1] = 0;
      *(int32_t *)(dest_data_ptr + 2) = 0;
      *dest_data_ptr = &unknown_var_3480_ptr;
      dest_data_ptr[1] = dest_data_ptr + 3;
      *(int32_t *)(dest_data_ptr + 2) = 0;
      *(int8_t *)(dest_data_ptr + 3) = 0;
      
      // 复制数据字段
      *(int32_t *)(dest_data_ptr + 2) = src_field_ptr[-0x56];
      name_ptr = &system_buffer_ptr;
      if (*(void **)(src_field_ptr + -0x58) != (void *)0x0) {
        name_ptr = *(void **)(src_field_ptr + -0x58);
      }
      strcpy_s(dest_data_ptr[1], 0x40, name_ptr);
      
      // 复制渲染参数
      *(int32_t *)(dest_data_ptr + 0xb) = src_field_ptr[-0x44];
      *(int32_t *)((int64_t)dest_data_ptr + 0x5c) = src_field_ptr[-0x43];
      *(int32_t *)(dest_data_ptr + 0xc) = src_field_ptr[-0x42];
      *(int32_t *)((int64_t)dest_data_ptr + 100) = src_field_ptr[-0x41];
      *(int32_t *)(dest_data_ptr + 0xd) = src_field_ptr[-0x40];
      *(int32_t *)((int64_t)dest_data_ptr + 0x6c) = src_field_ptr[-0x3f];
      *(int32_t *)(dest_data_ptr + 0xe) = src_field_ptr[-0x3e];
      *(int32_t *)((int64_t)dest_data_ptr + 0x74) = src_field_ptr[-0x3d];
      *(int32_t *)(dest_data_ptr + 0xf) = src_field_ptr[-0x3c];
      *(int32_t *)((int64_t)dest_data_ptr + 0x7c) = src_field_ptr[-0x3b];
      
      // 复制变换矩阵
      data_value1 = *(uint64_t *)(src_field_ptr + -0x38);
      dest_data_ptr[0x10] = *(uint64_t *)(src_field_ptr + -0x3a);
      dest_data_ptr[0x11] = data_value1;
      data_value1 = *(uint64_t *)(src_field_ptr + -0x34);
      dest_data_ptr[0x12] = *(uint64_t *)(src_field_ptr + -0x36);
      dest_data_ptr[0x13] = data_value1;
      data_value1 = *(uint64_t *)(src_field_ptr + -0x30);
      dest_data_ptr[0x14] = *(uint64_t *)(src_field_ptr + -0x32);
      dest_data_ptr[0x15] = data_value1;
      data_value1 = *(uint64_t *)(src_field_ptr + -0x2c);
      dest_data_ptr[0x16] = *(uint64_t *)(src_field_ptr + -0x2e);
      dest_data_ptr[0x17] = data_value1;
      data_value1 = *(uint64_t *)(src_field_ptr + -0x28);
      dest_data_ptr[0x18] = *(uint64_t *)(src_field_ptr + -0x2a);
      dest_data_ptr[0x19] = data_value1;
      data_value1 = *(uint64_t *)(src_field_ptr + -0x24);
      dest_data_ptr[0x1a] = *(uint64_t *)(src_field_ptr + -0x26);
      dest_data_ptr[0x1b] = data_value1;
      data_value1 = *(uint64_t *)(src_field_ptr + -0x20);
      dest_data_ptr[0x1c] = *(uint64_t *)(src_field_ptr + -0x22);
      dest_data_ptr[0x1d] = data_value1;
      
      // 复制颜色值
      data_field1 = src_field_ptr[-0x1d];
      data_field2 = src_field_ptr[-0x1c];
      data_field3 = src_field_ptr[-0x1b];
      *(int32_t *)(dest_data_ptr + 0x1e) = src_field_ptr[-0x1e];
      *(int32_t *)((int64_t)dest_data_ptr + 0xf4) = data_field1;
      *(int32_t *)(dest_data_ptr + 0x1f) = data_field2;
      *(int32_t *)((int64_t)dest_data_ptr + 0xfc) = data_field3;
      data_field1 = src_field_ptr[-0x19];
      data_field2 = src_field_ptr[-0x18];
      data_field3 = src_field_ptr[-0x17];
      *(int32_t *)(dest_data_ptr + 0x20) = src_field_ptr[-0x1a];
      *(int32_t *)((int64_t)dest_data_ptr + 0x104) = data_field1;
      *(int32_t *)(dest_data_ptr + 0x21) = data_field2;
      *(int32_t *)((int64_t)dest_data_ptr + 0x10c) = data_field3;
      
      // 设置渲染状态
      dest_data_ptr[0x22] = &system_state_ptr;
      dest_data_ptr[0x23] = 0;
      *(int32_t *)(dest_data_ptr + 0x24) = 0;
      dest_data_ptr[0x22] = &system_data_buffer_ptr;
      dest_data_ptr[0x25] = 0;
      dest_data_ptr[0x23] = 0;
      *(int32_t *)(dest_data_ptr + 0x24) = 0;
      *(int32_t *)(dest_data_ptr + 0x24) = src_field_ptr[-0x12];
      dest_data_ptr[0x23] = *(uint64_t *)(src_field_ptr + -0x14);
      *(int32_t *)((int64_t)dest_data_ptr + 300) = src_field_ptr[-0xf];
      *(int32_t *)(dest_data_ptr + 0x25) = src_field_ptr[-0x10];
      src_field_ptr[-0x12] = 0;
      *(uint64_t *)(src_field_ptr + -0x14) = 0;
      *(uint64_t *)(src_field_ptr + -0x10) = 0;
      
      // 交换数据
      new_data_ptr = dest_data_ptr + 0x26;
      *new_data_ptr = 0;
      dest_data_ptr[0x27] = 0;
      dest_data_ptr[0x28] = 0;
      *(int32_t *)(dest_data_ptr + 0x29) = src_field_ptr[-8];
      data_value1 = *new_data_ptr;
      *new_data_ptr = *(uint64_t *)(src_field_ptr + -0xe);
      *(uint64_t *)(src_field_ptr + -0xe) = data_value1;
      data_value1 = dest_data_ptr[0x27];
      dest_data_ptr[0x27] = *(uint64_t *)(src_field_ptr + -0xc);
      *(uint64_t *)(src_field_ptr + -0xc) = data_value1;
      data_value1 = dest_data_ptr[0x28];
      dest_data_ptr[0x28] = *(uint64_t *)(src_field_ptr + -10);
      *(uint64_t *)(src_field_ptr + -10) = data_value1;
      data_field1 = *(int32_t *)(dest_data_ptr + 0x29);
      *(int32_t *)(dest_data_ptr + 0x29) = src_field_ptr[-8];
      src_field_ptr[-8] = data_field1;
      
      // 交换更多数据
      new_data_ptr = dest_data_ptr + 0x2a;
      *new_data_ptr = 0;
      dest_data_ptr[0x2b] = 0;
      dest_data_ptr[0x2c] = 0;
      *(int32_t *)(dest_data_ptr + 0x2d) = *src_field_ptr;
      data_value1 = *new_data_ptr;
      *new_data_ptr = *(uint64_t *)(src_field_ptr + -6);
      *(uint64_t *)(src_field_ptr + -6) = data_value1;
      data_value1 = dest_data_ptr[0x2b];
      dest_data_ptr[0x2b] = *(uint64_t *)(src_field_ptr + -4);
      *(uint64_t *)(src_field_ptr + -4) = data_value1;
      data_value1 = dest_data_ptr[0x2c];
      dest_data_ptr[0x2c] = *(uint64_t *)(src_field_ptr + -2);
      *(uint64_t *)(src_field_ptr + -2) = data_value1;
      data_field1 = *(int32_t *)(dest_data_ptr + 0x2d);
      *(int32_t *)(dest_data_ptr + 0x2d) = *src_field_ptr;
      *src_field_ptr = data_field1;
      
      // 交换最后的数据
      new_data_ptr = dest_data_ptr + 0x2e;
      *new_data_ptr = 0;
      dest_data_ptr[0x2f] = 0;
      dest_data_ptr[0x30] = 0;
      *(int32_t *)(dest_data_ptr + 0x31) = src_field_ptr[8];
      data_value1 = *new_data_ptr;
      *new_data_ptr = *(uint64_t *)(src_field_ptr + 2);
      *(uint64_t *)(src_field_ptr + 2) = data_value1;
      data_value1 = dest_data_ptr[0x2f];
      dest_data_ptr[0x2f] = *(uint64_t *)(src_field_ptr + 4);
      *(uint64_t *)(src_field_ptr + 4) = data_value1;
      data_value1 = dest_data_ptr[0x30];
      dest_data_ptr[0x30] = *(uint64_t *)(src_field_ptr + 6);
      *(uint64_t *)(src_field_ptr + 6) = data_value1;
      data_field1 = *(int32_t *)(dest_data_ptr + 0x31);
      *(int32_t *)(dest_data_ptr + 0x31) = src_field_ptr[8];
      src_field_ptr[8] = data_field1;
      
      // 完成数据创建
      dest_data_ptr[0x32] = *(uint64_t *)(src_field_ptr + 10);
      *(int32_t *)(dest_data_ptr + 0x33) = src_field_ptr[0xc];
      *data_ptr = *data_ptr + 0x1a0;
      dest_data_ptr = (uint64_t *)*data_ptr;
      new_data_ptr = src_field_ptr + 0xe;
      src_field_ptr = src_field_ptr + 0x68;
    } while (new_data_ptr != src_data_end_ptr);
  }
  return data_ptr;
}

/**
 * 渲染内存分配函数
 * 分配渲染系统所需的内存
 * 
 * 原始函数名: FUN_180285760
 * 
 * @param memory_ptr 内存指针
 * @param allocation_size 分配大小
 */
void allocate_rendering_memory(int64_t memory_ptr, int64_t allocation_size)

{
  int64_t *memory_manager_ptr;
  uint64_t aligned_size;
  
  memory_manager_ptr = *(int64_t **)(memory_ptr + 0x30);
  aligned_size = (int64_t)(int)memory_manager_ptr[2] + 7U & 0xfffffffffffffff8;
  *(int *)(memory_manager_ptr + 2) = (int)aligned_size + ((int)allocation_size + 1) * 8;
  memset(*memory_manager_ptr + aligned_size, 0, allocation_size * 8);
}

/**
 * 渲染状态更新函数
 * 更新渲染系统状态
 * 
 * 原始函数名: FUN_180285840
 * 
 * @param state_ptr 状态指针
 * @param update_flag 更新标志
 * @return 更新结果
 */
int8_t update_rendering_state(int64_t state_ptr, int8_t update_flag)

{
  uint state_flags;
  int64_t state_data_ptr;
  char state_char;
  int8_t update_result;
  uint flag_mask;
  int8_t temp_flag;
  int64_t list_offset;
  int64_t list_start;
  int list_index;
  
  list_start = *(int64_t *)(state_ptr + 0x38);
  list_index = 0;
  update_result = 1;
  if (*(int64_t *)(state_ptr + 0x40) - list_start >> 4 != 0) {
    list_offset = 0;
    temp_flag = update_result;
    do {
      list_start = *(int64_t *)(list_offset + list_start);
      state_data_ptr = *(int64_t *)(list_start + 0x1b8);
      state_char = *(char *)(state_data_ptr + 0x38c);
      if (state_char == '\t') {
        state_flags = *(uint *)(state_data_ptr + 0x388);
        if ((state_flags >> 0x1e & 1) == 0) {
          if ((state_flags >> 0x1c & 1) == 0) {
            flag_mask = state_flags & 0x1000000;
            if ((int)state_flags < 0) {
              if ((state_flags >> 0x1b & 1) == 0) {
                state_char = (flag_mask != 0) + '\f';
              }
              else {
                state_char = (flag_mask != 0) + '\x0e';
              }
            }
            else if ((state_flags >> 0x19 & 1) == 0) {
              state_char = flag_mask != 0;
            }
            else if ((state_flags >> 0x1b & 1) == 0) {
              state_char = (flag_mask != 0) + '\x02';
            }
            else {
              state_char = (flag_mask != 0) + '\a';
            }
          }
          else {
            state_char = '\x04';
          }
        }
        *(char *)(state_data_ptr + 0x38c) = state_char;
      }
      state_char = FUN_18007b240(list_start, list_start + 0x1e8, state_char, update_flag);
      if (state_char == '\0') {
        *(byte *)(list_start + 0xfe) = *(byte *)(list_start + 0xfe) & 0xfb;
      }
      list_start = *(int64_t *)(state_ptr + 0x38);
      update_result = 0;
      if (state_char != '\0') {
        update_result = temp_flag;
      }
      list_index = list_index + 1;
      list_offset = list_offset + 0x10;
      temp_flag = update_result;
    } while ((uint64_t)(int64_t)list_index < (uint64_t)(*(int64_t *)(state_ptr + 0x40) - list_start >> 4));
  }
  return update_result;
}

/**
 * 渲染状态更新函数变体
 * 更新渲染系统状态的变体实现
 * 
 * 原始函数名: FUN_180285873
 * 
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 * @return 更新结果
 */
int8_t update_rendering_state_variant(uint64_t param1, uint64_t param2, int64_t param3)

{
  uint state_flags;
  int64_t state_data_ptr;
  int64_t list_offset;
  char state_char;
  int8_t update_result;
  uint flag_mask;
  int64_t list_start;
  int list_index;
  
  list_offset = 0;
  do {
    state_data_ptr = *(int64_t *)(list_offset + param3);
    list_start = *(int64_t *)(state_data_ptr + 0x1b8);
    state_char = *(char *)(list_start + 0x38c);
    if (state_char == '\t') {
      state_flags = *(uint *)(list_start + 0x388);
      if ((state_flags >> 0x1e & 1) == 0) {
        if ((state_flags >> 0x1c & 1) == 0) {
          flag_mask = state_flags & 0x1000000;
          if ((int)state_flags < 0) {
            if ((state_flags >> 0x1b & 1) == 0) {
              state_char = (flag_mask != 0) + '\f';
            }
            else {
              state_char = (flag_mask != 0) + '\x0e';
            }
          }
          else if ((state_flags >> 0x19 & 1) == 0) {
            state_char = flag_mask != 0;
          }
          else if ((state_flags >> 0x1b & 1) == 0) {
            state_char = (flag_mask != 0) + '\x02';
          }
          else {
            state_char = (flag_mask != 0) + '\a';
          }
        }
        else {
          state_char = '\x04';
        }
      }
      *(char *)(list_start + 0x38c) = state_char;
    }
    state_char = FUN_18007b240(state_data_ptr, state_data_ptr + 0x1e8, state_char, param2);
    if (state_char == '\0') {
      *(byte *)(state_data_ptr + 0xfe) = *(byte *)(state_data_ptr + 0xfe) & 0xfb;
    }
    param3 = *(int64_t *)(param1 + 0x38);
    update_result = 0;
    if (state_char != '\0') {
      update_result = param2;
    }
    list_index = list_index + 1;
    list_offset = list_offset + 0x10;
    param2 = update_result;
  } while ((uint64_t)(int64_t)list_index < (uint64_t)(*(int64_t *)(param1 + 0x40) - param3 >> 4));
  return update_result;
}

/**
 * 渲染状态获取函数
 * 获取渲染系统状态
 * 
 * 原始函数名: FUN_18028596b
 * 
 * @return 当前状态
 */
int8_t get_rendering_state(void)

{
  int8_t current_state;
  
  return current_state;
}

/**
 * 渲染资源释放函数
 * 释放渲染资源
 * 
 * 原始函数名: FUN_180285a10
 * 
 * @param resource_ptr 资源指针
 * @param release_flags 释放标志
 * @param param3 参数3
 * @param param4 参数4
 * @return 释放后的资源指针
 */
uint64_t * release_rendering_resource(uint64_t *resource_ptr, uint64_t release_flags, uint64_t param3, uint64_t param4)

{
  uint64_t free_flag;
  
  free_flag = 0xfffffffffffffffe;
  if ((int64_t *)resource_ptr[4] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)resource_ptr[4] + 0x38))();
  }
  if ((int64_t *)resource_ptr[3] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)resource_ptr[3] + 0x38))();
  }
  *resource_ptr = &system_handler2_ptr;
  *resource_ptr = &system_handler1_ptr;
  if ((release_flags & 1) != 0) {
    free(resource_ptr, 0x30, param3, param4, free_flag);
  }
  return resource_ptr;
}

/**
 * 渲染向量计算函数
 * 计算渲染相关的向量运算
 * 
 * 原始函数名: FUN_180285b40
 * 
 * @param vector_ptr1 向量指针1
 * @param result_ptr 结果指针
 * @param vector_ptr2 向量指针2
 * @return 计算结果指针
 */
float * calculate_rendering_vector(float *vector_ptr1, float *result_ptr, float *vector_ptr2)

{
  float vec1_x;
  float vec1_y;
  float vec1_z;
  float vec1_w;
  float vec2_x;
  float vec2_y;
  float vec2_z;
  float vec2_w;
  float cross_x;
  float cross_y;
  float cross_z;
  float dot_product;
  float result_x;
  float result_y;
  float result_z;
  
  vec2_x = *vector_ptr2;
  vec1_x = *vector_ptr1;
  vec1_w = -vector_ptr1[3];
  vec2_y = vector_ptr2[1];
  vec2_z = vector_ptr2[2];
  vec1_z = -vector_ptr1[2];
  result_ptr[3] = 3.4028235e+38;  // 最大浮点数
  vec1_y = -vector_ptr1[1];
  cross_z = vec2_z * vec1_z - vector_ptr2[1] * vec1_w;
  cross_y = vec2_x * vec1_w - vector_ptr2[2] * vec1_y;
  cross_z = cross_z + cross_z;
  cross_x = vec2_y * vec1_y - vec2_x * vec1_z;
  cross_y = cross_y + cross_y;
  cross_x = cross_x + cross_x;
  vec2_z = vector_ptr2[2];
  *result_ptr = (cross_x * vec1_z - cross_y * vec1_w) + cross_z * vec1_x + vec2_x;
  vec2_x = vector_ptr2[1];
  result_ptr[2] = (cross_y * vec1_y - cross_z * vec1_z) + cross_x * vec1_x + vec2_z;
  result_ptr[1] = (cross_z * vec1_w - cross_x * vec1_y) + cross_y * vec1_x + vec2_x;
  return result_ptr;
}

/**
 * 渲染距离计算函数
 * 计算渲染相关的距离
 * 
 * 原始函数名: FUN_180285c90
 * 
 * @param param1 参数1
 * @param param2 参数2
 * @param position_ptr 位置指针
 * @return 计算结果
 */
uint64_t calculate_rendering_distance(int64_t param1, uint64_t param2, float *position_ptr)

{
  float distance_x;
  float distance_y;
  float distance_z;
  int32_t max_distance;
  
  distance_x = *position_ptr - *(float *)(param1 + 0x10);
  distance_y = position_ptr[1] - *(float *)(param1 + 0x14);
  distance_z = position_ptr[2] - *(float *)(param1 + 0x18);
  max_distance = 0x7f7fffff;  // 最大浮点数
  FUN_180285b40(0x7f7fffff, distance_y, &distance_x);
  return param2;
}

// 辅助函数声明（在其他文件中实现）
void CoreMemoryPoolAllocator(uint64_t allocator, uint64_t size, char flags);
void CoreMemoryPoolInitializer(void);
void FUN_18007b240(int64_t param1, int64_t param2, char param3, int8_t param4);
void memset(void *ptr, int value, size_t num);
void free(void *ptr, size_t size, uint64_t param3, uint64_t param4, uint64_t param5);
void strcpy_s(char *dest, size_t dest_size, const char *src);