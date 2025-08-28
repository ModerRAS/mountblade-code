#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part174.c - 核心引擎模块第174部分
// 包含15个函数：数据处理、内存管理、资源清理、哈希表操作等功能

/**
 * 处理字符数据和编码转换
 * @param context_ptr 上下文指针
 * @param data_source 数据源指针
 * @param data_size 数据大小
 * @param param4 参数4
 * @param output_ptr 输出结果指针
 * 
 * 原函数名: FUN_18015af90
 */
void process_character_data_encoding(uint64_t context_ptr, int64_t data_source, int data_size, uint64_t param4,
                                   int32_t *output_ptr)
{
  int64_t global_ptr;
  int32_t result;
  int64_t temp_ptr;
  int16_t char_data;
  int processed_size;
  int16_t *buffer_ptr;
  int16_t *buffer_end;
  int64_t buffer_capacity;
  int64_t current_index;
  int16_t *stack_buffer_1;
  int16_t *stack_buffer_2;
  
  global_ptr = core_system_data_pointer;
  stack_buffer_1 = (int16_t *)0x0;
  stack_buffer_2 = (int16_t *)0x0;
  processed_size = (int)((uint64_t)(int64_t)data_size >> 1);
  buffer_capacity = (int64_t)processed_size;
  
  // 分配缓冲区
  if (processed_size != 0) {
    stack_buffer_1 = (int16_t *)allocate_memory_block(system_memory_pool_ptr, buffer_capacity * 2, 3);
    stack_buffer_2 = stack_buffer_1 + buffer_capacity;
  }
  
  // 处理字符数据
  if (0 < processed_size) {
    current_index = 0;
    buffer_ptr = stack_buffer_1;
    buffer_end = stack_buffer_1;
    
    do {
      // 读取字符数据
      char_data = CONCAT11(*(int8_t *)(data_source + 1 + current_index * 2), 
                          *(int8_t *)(data_source + current_index * 2));
      
      if (buffer_end < stack_buffer_2) {
        *buffer_end = char_data;
        stack_buffer_1 = buffer_ptr;
      }
      else {
        // 重新分配缓冲区
        temp_ptr = (int64_t)buffer_end - (int64_t)buffer_ptr >> 1;
        if (temp_ptr == 0) {
          temp_ptr = 1;
LAB_BUFFER_REALLOC:
          stack_buffer_1 = (int16_t *)
                         allocate_memory_block(system_memory_pool_ptr, temp_ptr * 2,
                                             CONCAT71((int7)((uint64_t)stack_buffer_2 >> 8), 3));
        }
        else {
          temp_ptr = temp_ptr * 2;
          if (temp_ptr != 0) goto LAB_BUFFER_REALLOC;
          stack_buffer_1 = (int16_t *)0x0;
        }
        
        // 移动现有数据
        if (buffer_ptr != buffer_end) {
          memmove(stack_buffer_1, buffer_ptr, (int64_t)buffer_end - (int64_t)buffer_ptr);
        }
        
        *stack_buffer_1 = char_data;
        if (buffer_ptr != (int16_t *)0x0) {
          release_memory(buffer_ptr);
        }
        
        stack_buffer_2 = stack_buffer_1 + temp_ptr;
        buffer_end = stack_buffer_1;
      }
      
      buffer_end = buffer_end + 1;
      current_index = current_index + 1;
      buffer_ptr = stack_buffer_1;
    } while (current_index < buffer_capacity);
  }
  
  // 调用编码处理函数
  result = process_text_encoding(*(uint64_t *)(global_ptr + 0x250), stack_buffer_1,
                                (uint64_t)(int64_t)data_size >> 1 & 0xffffffff, param4, processed_size * 6);
  *output_ptr = result;
  
  // 清理缓冲区
  if (stack_buffer_1 == (int16_t *)0x0) {
    return;
  }
  release_memory(stack_buffer_1);
}

/**
 * 执行引擎初始化检查
 * 
 * 原函数名: FUN_18015b160
 */
void perform_engine_initialization_check(void)
{
  execute_engine_system_check();
}

/**
 * 创建引擎数据结构
 * @param item_count 项目数量
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 * @return 分配的数据结构指针
 * 
 * 原函数名: FUN_18015b2b0
 */
uint64_t *create_engine_data_structure(uint64_t item_count, uint64_t param2, uint64_t param3, uint64_t param4)
{
  uint64_t *structure_ptr;
  uint64_t *temp_ptr1;
  uint64_t *temp_ptr2;
  int index;
  
  // 分配主结构内存
  structure_ptr = (uint64_t *)
                 allocate_memory_block(system_memory_pool_ptr, item_count * 0x3088 + 0x10, 3, param4, 0xfffffffffffffffe);
  
  *structure_ptr = item_count << 0x20 | 0x3088;
  index = 0;
  
  if (item_count != 0) {
    temp_ptr2 = structure_ptr + 0x11;
    
    // 初始化每个项目
    do {
      temp_ptr2[-0xf] = 0;
      temp_ptr2[-0xe] = 0;
      temp_ptr2[-0xb] = 0;
      *(int32_t *)(temp_ptr2 + -10) = 0;
      temp_ptr2[-9] = 0;
      temp_ptr2[-7] = 0;
      temp_ptr1 = temp_ptr2 + 0x600;
      *temp_ptr1 = 0;
      temp_ptr2[0x601] = 0;
      temp_ptr2[-3] = (uint64_t)temp_ptr2;
      temp_ptr2[-2] = (uint64_t)(-(int)temp_ptr2 & 7) + (int64_t)temp_ptr2;
      temp_ptr2[-1] = (uint64_t)temp_ptr1;
      *temp_ptr1 = (uint64_t)&unknown_var_8432_ptr;
      temp_ptr2[0x601] = (uint64_t)SystemResourceCleaner;
      index = index + 1;
      temp_ptr2 = temp_ptr2 + 0x611;
    } while ((uint64_t)(int64_t)index < item_count);
  }
  
  return structure_ptr + 2;
}

/**
 * 销毁引擎数据结构
 * @param structure_ptr 结构指针
 * 
 * 原函数名: FUN_18015b3a0
 */
void destroy_engine_data_structure(int64_t structure_ptr)
{
  uint64_t header_info;
  uint64_t item_count;
  uint64_t index;
  
  if (structure_ptr == 0) {
    return;
  }
  
  header_info = *(uint64_t *)(structure_ptr + -0x10);
  item_count = header_info >> 0x20;
  index = 0;
  
  if ((int)(header_info >> 0x20) != 0) {
    // 清理每个项目
    do {
      cleanup_engine_item(index + structure_ptr + 0x60);
      index = (uint64_t)(uint)((int)index + (int)header_info);
      item_count = item_count - 1;
    } while (item_count != 0);
  }
  
  // 释放主结构内存
  release_memory(structure_ptr + -0x10);
}

/**
 * 清理引擎资源管理器
 * @param manager_ptr 管理器指针
 * 
 * 原函数名: FUN_18015b420
 */
void cleanup_engine_resource_manager(int64_t manager_ptr)
{
  int *ref_count_ptr;
  uint64_t *resource_ptr;
  int64_t memory_block;
  uint64_t base_address;
  
  cleanup_resource_cache();
  
  if ((1 < *(uint64_t *)(manager_ptr + 0x10)) &&
      (resource_ptr = *(uint64_t **)(manager_ptr + 8), resource_ptr != (uint64_t *)0x0)) {
    
    base_address = (uint64_t)resource_ptr & 0xffffffffffc00000;
    if (base_address != 0) {
      memory_block = base_address + 0x80 + ((int64_t)resource_ptr - base_address >> 0x10) * 0x50;
      memory_block = memory_block - (uint64_t)*(uint *)(memory_block + 4);
      
      if ((*(void ***)(base_address + 0x70) == &ExceptionList) && (*(char *)(memory_block + 0xe) == '\0')) {
        // 标准清理流程
        *resource_ptr = *(uint64_t *)(memory_block + 0x20);
        *(uint64_t **)(memory_block + 0x20) = resource_ptr;
        ref_count_ptr = (int *)(memory_block + 0x18);
        *ref_count_ptr = *ref_count_ptr + -1;
        if (*ref_count_ptr == 0) {
          cleanup_memory_pool();
          return;
        }
      }
      else {
        // 异常清理流程
        cleanup_memory_block(base_address, CONCAT71(0xff000000, *(void ***)(base_address + 0x70) == &ExceptionList),
                            resource_ptr, base_address, 0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}

/**
 * 清理资源缓存
 * @param cache_ptr 缓存指针
 * 
 * 原函数名: FUN_18015b450
 */
void cleanup_resource_cache(int64_t cache_ptr)
{
  uint64_t cache_size;
  int64_t cache_data;
  int64_t item_ptr;
  uint64_t index;
  
  cache_size = *(uint64_t *)(cache_ptr + 0x10);
  cache_data = *(int64_t *)(cache_ptr + 8);
  index = 0;
  
  if (cache_size == 0) {
    *(uint64_t *)(cache_ptr + 0x18) = 0;
  }
  else {
    // 清理缓存中的每个项目
    do {
      item_ptr = *(int64_t *)(cache_data + index * 8);
      if (item_ptr != 0) {
        if (*(int64_t **)(item_ptr + 8) != (int64_t *)0x0) {
          (**(code **)(**(int64_t **)(item_ptr + 8) + 0x38))();
        }
        release_memory(item_ptr);
      }
      *(uint64_t *)(cache_data + index * 8) = 0;
      index = index + 1;
    } while (index < cache_size);
    *(uint64_t *)(cache_ptr + 0x18) = 0;
  }
  return;
}

/**
 * 释放资源数组
 * @param array_ptr 数组指针
 * 
 * 原函数名: FUN_18015b4f0
 */
void release_resource_array(int64_t array_ptr)
{
  int *ref_count_ptr;
  int64_t item_ptr;
  uint64_t *array_data;
  int64_t memory_block;
  uint64_t index;
  uint64_t array_size;
  
  array_size = *(uint64_t *)(array_ptr + 0x10);
  memory_block = *(int64_t *)(array_ptr + 8);
  index = 0;
  
  if (array_size != 0) {
    // 释放数组中的每个项目
    do {
      item_ptr = *(int64_t *)(memory_block + index * 8);
      if (item_ptr != 0) {
        release_memory(item_ptr);
      }
      *(uint64_t *)(memory_block + index * 8) = 0;
      index = index + 1;
    } while (index < array_size);
    array_size = *(uint64_t *)(array_ptr + 0x10);
  }
  
  *(uint64_t *)(array_ptr + 0x18) = 0;
  
  if ((1 < array_size) && (array_data = *(uint64_t **)(array_ptr + 8), array_data != (uint64_t *)0x0)) {
    // 清理数组数据
    cleanup_array_memory(array_ptr, array_data, array_size);
  }
  return;
}

/**
 * 清理数组内存
 * @param array_ptr 数组指针
 * @param array_data 数组数据
 * @param array_size 数组大小
 * 
 * 原函数名: FUN_18015b4f6
 */
void cleanup_array_memory(int64_t array_ptr, uint64_t *array_data, uint64_t array_size)
{
  int *ref_count_ptr;
  int64_t item_ptr;
  int64_t memory_block;
  uint64_t index;
  
  memory_block = *(int64_t *)(array_ptr + 8);
  index = 0;
  
  if (array_size != 0) {
    // 释放数组中的每个项目
    do {
      item_ptr = *(int64_t *)(memory_block + index * 8);
      if (item_ptr != 0) {
        release_memory(item_ptr);
      }
      *(uint64_t *)(memory_block + index * 8) = 0;
      index = index + 1;
    } while (index < array_size);
  }
  
  *(uint64_t *)(array_ptr + 0x18) = 0;
  
  if ((1 < array_size) && (array_data != (uint64_t *)0x0)) {
    // 执行内存清理
    perform_memory_cleanup(array_ptr, array_data, array_size);
  }
  return;
}

/**
 * 执行内存清理
 * @param context_ptr 上下文指针
 * @param data_ptr 数据指针
 * @param size 大小
 * 
 * 原函数名: FUN_18015b520
 */
void perform_memory_cleanup(int64_t context_ptr, uint64_t *data_ptr, uint64_t size)
{
  int *ref_count_ptr;
  uint64_t *memory_ptr;
  int64_t memory_block;
  int64_t base_ptr;
  uint64_t index;
  uint64_t array_size;
  uint64_t zero_value;
  
  do {
    memory_block = *(int64_t *)(base_ptr + index * 8);
    if (memory_block != 0) {
      release_memory(memory_block);
    }
    *(uint64_t *)(base_ptr + index * 8) = zero_value;
    index = index + 1;
  } while (index < array_size);
  
  *(uint64_t *)(context_ptr + 0x18) = zero_value;
  
  if ((1 < *(uint64_t *)(context_ptr + 0x10)) &&
      (memory_ptr = *(uint64_t **)(context_ptr + 8), memory_ptr != (uint64_t *)0x0)) {
    
    // 清理内存块
    cleanup_memory_block(context_ptr, memory_ptr, array_size);
  }
  return;
}

/**
 * 释放引擎资源
 * @param resource_ptr 资源指针
 * 
 * 原函数名: FUN_18015b556
 */
void release_engine_resource(int64_t resource_ptr)
{
  int *ref_count_ptr;
  uint64_t *memory_ptr;
  int64_t memory_block;
  int64_t base_ptr;
  uint64_t resource_size;
  uint64_t zero_value;
  
  *(uint64_t *)(base_ptr + 0x18) = zero_value;
  
  if ((1 < resource_size) && (memory_ptr = *(uint64_t **)(base_ptr + 8), memory_ptr != (uint64_t *)0x0)) {
    // 执行资源释放
    execute_resource_release(base_ptr, memory_ptr, resource_size);
  }
  return;
}

/**
 * 清理引擎对象
 * @param object_ptr 对象指针
 * 
 * 原函数名: FUN_18015b574
 */
void cleanup_engine_object(int64_t object_ptr)
{
  int *ref_count_ptr;
  uint64_t *object_data;
  int64_t memory_block;
  uint64_t base_address;
  
  object_data = *(uint64_t **)(object_ptr + 8);
  if (object_data == (uint64_t *)0x0) {
    return;
  }
  
  base_address = (uint64_t)object_data & 0xffffffffffc00000;
  if (base_address != 0) {
    memory_block = base_address + 0x80 + ((int64_t)object_data - base_address >> 0x10) * 0x50;
    memory_block = memory_block - (uint64_t)*(uint *)(memory_block + 4);
    
    if ((*(void ***)(base_address + 0x70) == &ExceptionList) && (*(char *)(memory_block + 0xe) == '\0')) {
      // 标准对象清理
      *object_data = *(uint64_t *)(memory_block + 0x20);
      *(uint64_t **)(memory_block + 0x20) = object_data;
      ref_count_ptr = (int *)(memory_block + 0x18);
      *ref_count_ptr = *ref_count_ptr + -1;
      if (*ref_count_ptr == 0) {
        cleanup_memory_pool();
        return;
      }
    }
    else {
      // 异常对象清理
      cleanup_memory_block(base_address, CONCAT71(0xff000000, *(void ***)(base_address + 0x70) == &ExceptionList),
                          object_data, base_address, 0xfffffffffffffffe);
    }
  }
  return;
}

/**
 * 交换引擎数据
 * @param data_ptr1 数据指针1
 * @param data_ptr2 数据指针2
 * 
 * 原函数名: FUN_18015b590
 */
void swap_engine_data(int64_t *data_ptr1, int64_t *data_ptr2)
{
  int32_t temp_data;
  int64_t temp_ptr1;
  int64_t temp_ptr2;
  int64_t temp_ptr3;
  int64_t temp_ptr4;
  int64_t stack_data1;
  int64_t stack_data2;
  int64_t stack_data3;
  int32_t stack_data4;
  
  // 保存第一个数据结构的内容
  temp_ptr1 = *data_ptr1;
  *data_ptr1 = 0;
  temp_ptr2 = data_ptr1[1];
  data_ptr1[1] = 0;
  temp_ptr3 = data_ptr1[2];
  data_ptr1[2] = 0;
  temp_data = (int32_t)data_ptr1[3];
  *(int *)(data_ptr1 + 3) = (int)data_ptr1[3];
  
  // 保存到栈上
  stack_data1 = temp_ptr1;
  stack_data2 = temp_ptr2;
  stack_data3 = temp_ptr3;
  stack_data4 = temp_data;
  
  if (data_ptr1 != data_ptr2) {
    // 交换数据
    perform_data_swap(data_ptr1, data_ptr2);
    temp_ptr4 = *data_ptr1;
    *data_ptr1 = *data_ptr2;
    *data_ptr2 = temp_ptr4;
    
    temp_ptr4 = data_ptr1[1];
    data_ptr1[1] = data_ptr2[1];
    data_ptr2[1] = temp_ptr4;
    
    temp_ptr4 = data_ptr1[2];
    data_ptr1[2] = data_ptr2[2];
    data_ptr2[2] = temp_ptr4;
    
    temp_ptr4 = data_ptr1[3];
    *(int *)(data_ptr1 + 3) = (int)data_ptr2[3];
    *(int *)(data_ptr2 + 3) = (int)temp_ptr4;
  }
  
  temp_ptr4 = temp_ptr1;
  if (data_ptr2 != &stack_data1) {
    // 恢复栈数据到第二个数据结构
    perform_data_swap(data_ptr2, &stack_data1);
    temp_ptr4 = *data_ptr2;
    *data_ptr2 = temp_ptr1;
    stack_data2 = data_ptr2[1];
    data_ptr2[1] = temp_ptr2;
    stack_data3 = data_ptr2[2];
    data_ptr2[2] = temp_ptr3;
    stack_data4 = (int32_t)data_ptr2[3];
    *(int32_t *)(data_ptr2 + 3) = temp_data;
    stack_data1 = temp_ptr4;
  }
  
  // 清理临时数据
  if (temp_ptr4 != 0) {
    release_memory(temp_ptr4);
  }
  return;
}

/**
 * 插入哈希表项
 * @param table_ptr 表指针
 * @param key_ptr 键指针
 * @param value_ptr 值指针
 * @return 插入的项指针
 * 
 * 原函数名: FUN_18015b6b0
 */
uint64_t *insert_hash_table_item(int64_t table_ptr, uint64_t *key_ptr, int *value_ptr)
{
  int hash_key;
  int *bucket_ptr;
  int64_t bucket_data;
  int *current_item;
  uint64_t bucket_index;
  uint64_t temp_data;
  
  // 创建新的哈希项
  current_item = (int *)allocate_memory_block(system_memory_pool_ptr, 0x18, *(int8_t *)(table_ptr + 0x2c));
  *current_item = *value_ptr;
  *(uint64_t *)(current_item + 2) = *(uint64_t *)(value_ptr + 2);
  value_ptr[2] = 0;
  value_ptr[3] = 0;
  current_item[4] = 0;
  current_item[5] = 0;
  
  hash_key = *current_item;
  bucket_index = (uint64_t)(int64_t)hash_key % (uint64_t)*(uint *)(table_ptr + 0x10);
  bucket_ptr = *(int **)(bucket_index * 8 + *(int64_t *)(table_ptr + 8));
  
  while (true) {
    temp_data = current_item;
    if (bucket_ptr == (int *)0x0) {
      // 桶为空，插入新项
      resize_hash_table(table_ptr + 0x20, &temp_data, (uint64_t)*(uint *)(table_ptr + 0x10),
                        *(int32_t *)(table_ptr + 0x18), 1);
      
      if ((char)temp_data != '\0') {
        bucket_index = (uint64_t)(int64_t)hash_key % (uint64_t)temp_data._4_4_;
        expand_hash_table(table_ptr, temp_data._4_4_);
      }
      
      *(uint64_t *)(current_item + 4) = *(uint64_t *)(*(int64_t *)(table_ptr + 8) + bucket_index * 8);
      *(int **)(*(int64_t *)(table_ptr + 8) + bucket_index * 8) = current_item;
      *(int64_t *)(table_ptr + 0x18) = *(int64_t *)(table_ptr + 0x18) + 1;
      bucket_data = *(int64_t *)(table_ptr + 8);
      *key_ptr = current_item;
      key_ptr[1] = bucket_data + bucket_index * 8;
      *(int8_t *)(key_ptr + 2) = 1;
      return key_ptr;
    }
    
    if (hash_key == *bucket_ptr) break;
    bucket_ptr = *(int **)(bucket_ptr + 4);
  }
  
  // 键已存在，清理旧项
  if (*(int64_t **)(current_item + 2) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(current_item + 2) + 0x38))();
  }
  release_memory(current_item);
}

/**
 * 处理批量数据操作
 * @param param1 参数1
 * @param start_index 开始索引
 * @param end_index 结束索引
 * @param batch_size 批量大小
 * @param param5 参数5
 * @param param6 参数6
 * 
 * 原函数名: FUN_18015b810
 */
void process_batch_data_operation(uint64_t param1, int start_index, int end_index, int batch_size, uint64_t param5,
                                 int64_t param6)
{
  int32_t result;
  int max_batch_size;
  int total_items;
  int items_per_batch;
  int64_t *batch_data;
  int64_t processing_ptr;
  int batch_count;
  int remaining_items;
  int8_t temp_buffer1 [16];
  int8_t temp_buffer2 [16];
  
  max_batch_size = 0x7fffffff;
  if (*(int *)(core_system_data_pointer + 0x310) == 0) {
    max_batch_size = batch_size;
  }
  
  total_items = end_index - start_index;
  if (0 < total_items) {
    if (max_batch_size <= total_items) {
      batch_count = total_items / max_batch_size + 1;
      items_per_batch = (int)(*(int64_t *)(system_context_ptr + 0x10) - *(int64_t *)(system_context_ptr + 8) >> 3);
      
      if (batch_count < items_per_batch) {
        items_per_batch = batch_count;
      }
      
      items_per_batch = total_items / items_per_batch;
      if (items_per_batch < 1) {
        items_per_batch = 1;
      }
      else if (max_batch_size < items_per_batch) {
        items_per_batch = max_batch_size;
      }
      
      // 创建批处理数据结构
      batch_data = (int64_t *)allocate_memory_block(system_memory_pool_ptr, 0x18, 8, 3);
      initialize_batch_data(batch_data);
      
      // 设置批处理参数
      LOCK();
      result = (int32_t)batch_data[2];
      *(int *)(batch_data + 2) = items_per_batch + start_index;
      UNLOCK();
      
      // 计算批处理进度
      temp_buffer1._0_4_ = (float)total_items / (float)items_per_batch;
      max_batch_size = (int)temp_buffer1._0_4_;
      
      if (temp_buffer1._0_4_ <= 0.0) {
        if ((max_batch_size != -0x80000000) && ((float)max_batch_size != temp_buffer1._0_4_)) {
          temp_buffer2._4_4_ = temp_buffer1._0_4_;
          temp_buffer2._0_4_ = temp_buffer1._0_4_;
          temp_buffer2._8_8_ = 0;
          calculate_batch_progress(result, temp_buffer2);
        }
      }
      else if ((max_batch_size != -0x80000000) && ((float)max_batch_size != temp_buffer1._0_4_)) {
        temp_buffer1._4_4_ = temp_buffer1._0_4_;
        temp_buffer1._8_8_ = 0;
        calculate_batch_progress(result, temp_buffer1);
      }
      
      processing_ptr = allocate_memory_block(system_memory_pool_ptr, 0x58, 8, 3);
      memset(processing_ptr + 8, 0, 0x50);
    }
    
    // 执行批处理操作
    (**(code **)(param6 + 0x18))(start_index, end_index, param6);
  }
  
  // 清理回调
  if (*(code **)(param6 + 0x10) != (code *)0x0) {
    (**(code **)(param6 + 0x10))(param6, 0, 0);
  }
  return;
}

/**
 * 扩展哈希表
 * @param table_ptr 表指针
 * @param new_size 新大小
 * 
 * 原函数名: FUN_18015bdc0
 */
void expand_hash_table(int64_t table_ptr, int64_t new_size)
{
  uint64_t new_table;
  
  new_table = allocate_memory_block(system_memory_pool_ptr, new_size * 8 + 8, 8, *(int8_t *)(table_ptr + 0x2c));
  memset(new_table, 0, new_size * 8);
}

/**
 * 调整动态数组大小
 * @param array_ptr 数组指针
 * @param new_size 新大小
 * 
 * 原函数名: FUN_18015bea0
 */
void resize_dynamic_array(uint64_t *array_ptr, int64_t new_size)
{
  uint64_t *array_end;
  uint64_t *array_start;
  int64_t current_size;
  uint64_t *new_array;
  int64_t size_diff;
  uint64_t *temp_ptr;
  int64_t copy_offset;
  uint64_t *item_ptr;
  
  array_end = (uint64_t *)array_ptr[1];
  array_start = (uint64_t *)*array_ptr;
  current_size = ((int64_t)array_end - (int64_t)array_start) / 0x28;
  new_array = (uint64_t *)0x0;
  
  if (current_size == 0) {
    current_size = 1;
  }
  else {
    current_size = current_size * 2;
    if (current_size == 0) goto LAB_REALLOC_DONE;
  }
  
  new_array = (uint64_t *)
              allocate_memory_block(system_memory_pool_ptr, current_size * 0x28, *(int8_t *)(array_ptr + 3), array_start,
                                    0xfffffffffffffffe);
  
LAB_REALLOC_DONE:
  temp_ptr = new_array;
  if (array_start != array_end) {
    copy_offset = (int64_t)new_array - (int64_t)array_start;
    array_start = array_start + 1;
    
    // 复制现有数据
    do {
      *temp_ptr = &system_state_ptr;
      *(uint64_t *)(copy_offset + (int64_t)array_start) = 0;
      *(int32_t *)(copy_offset + 8 + (int64_t)array_start) = 0;
      *temp_ptr = &system_data_buffer_ptr;
      *(uint64_t *)(copy_offset + 0x10 + (int64_t)array_start) = 0;
      *(uint64_t *)(copy_offset + (int64_t)array_start) = 0;
      *(int32_t *)(copy_offset + 8 + (int64_t)array_start) = 0;
      *(int32_t *)(copy_offset + 8 + (int64_t)array_start) = *(int32_t *)(array_start + 1);
      *(uint64_t *)(copy_offset + (int64_t)array_start) = *array_start;
      *(int32_t *)(copy_offset + 0x14 + (int64_t)array_start) = *(int32_t *)((int64_t)array_start + 0x14);
      *(int32_t *)(copy_offset + 0x10 + (int64_t)array_start) = *(int32_t *)(array_start + 2);
      *(int32_t *)(array_start + 1) = 0;
      *array_start = 0;
      array_start[2] = 0;
      *(int8_t *)(copy_offset + 0x18 + (int64_t)array_start) = *(int8_t *)(array_start + 3);
      temp_ptr = temp_ptr + 5;
      item_ptr = array_start + 4;
      array_start = array_start + 5;
    } while (item_ptr != array_end);
  }
  
  // 添加新项
  add_array_item(temp_ptr, new_size);
  
  // 清理旧数组
  array_end = (uint64_t *)array_ptr[1];
  array_start = (uint64_t *)*array_ptr;
  if (array_start != array_end) {
    do {
      *array_start = &system_data_buffer_ptr;
      if (array_start[1] != 0) {
        release_memory();
      }
      array_start[1] = 0;
      *(int32_t *)(array_start + 3) = 0;
      *array_start = &system_state_ptr;
      array_start = array_start + 5;
    } while (array_start != array_end);
    array_start = (uint64_t *)*array_ptr;
  }
  
  if (array_start == (uint64_t *)0x0) {
    *array_ptr = new_array;
    array_ptr[1] = temp_ptr + 5;
    array_ptr[2] = new_array + current_size * 5;
    return;
  }
  release_memory(array_start);
}

/**
 * 处理引擎对象操作
 * @param object_ptr 对象指针
 * @param param2 参数2
 * @param operation 操作类型
 * @return 操作结果
 * 
 * 原函数名: FUN_18015c0a0
 */
int64_t process_engine_object_operation(int64_t *object_ptr, int64_t *param2, int operation)
{
  uint64_t *temp_ptr;
  uint64_t temp_data;
  uint64_t *new_object;
  
  if (operation == 3) {
    return 0x180c00930;
  }
  if (operation == 4) {
    return *object_ptr;
  }
  if (operation == 0) {
    if (*object_ptr != 0) {
      release_memory();
    }
  }
  else {
    if (operation == 1) {
      // 复制对象
      new_object = (uint64_t *)allocate_memory_block(system_memory_pool_ptr, 0x18, 8, system_allocation_flags, 0xfffffffffffffffe);
      temp_ptr = (uint64_t *)*param2;
      temp_data = temp_ptr[1];
      *new_object = *temp_ptr;
      new_object[1] = temp_data;
      new_object[2] = temp_ptr[2];
      *object_ptr = (int64_t)new_object;
      return 0;
    }
    if (operation == 2) {
      // 移动对象
      *object_ptr = *param2;
      *param2 = 0;
      return 0;
    }
  }
  return 0;
}

/**
 * 处理引擎对象引用
 * @param object_ptr 对象指针
 * @param param2 参数2
 * @param operation 操作类型
 * @return 操作结果
 * 
 * 原函数名: FUN_18015c190
 */
int64_t process_engine_object_reference(int64_t *object_ptr, int64_t *param2, int operation)
{
  uint64_t *temp_ptr;
  uint64_t temp_data;
  uint64_t *new_object;
  
  if (operation == 3) {
    return 0x180c008f0;
  }
  if (operation == 4) {
    return *object_ptr;
  }
  if (operation == 0) {
    if (*object_ptr != 0) {
      release_memory();
    }
  }
  else {
    if (operation == 1) {
      // 创建引用
      new_object = (uint64_t *)allocate_memory_block(system_memory_pool_ptr, 0x18, 8, system_allocation_flags, 0xfffffffffffffffe);
      temp_ptr = (uint64_t *)*param2;
      temp_data = temp_ptr[1];
      *new_object = *temp_ptr;
      new_object[1] = temp_data;
      new_object[2] = temp_ptr[2];
      *object_ptr = (int64_t)new_object;
      return 0;
    }
    if (operation == 2) {
      // 移动引用
      *object_ptr = *param2;
      *param2 = 0;
      return 0;
    }
  }
  return 0;
}

/**
 * 释放引擎对象
 * @param object_ptr 对象指针
 * @param flags 释放标志
 * @return 对象指针
 * 
 * 原函数名: FUN_18015c270
 */
uint64_t release_engine_object(uint64_t object_ptr, uint64_t flags)
{
  perform_engine_cleanup();
  if ((flags & 1) != 0) {
    free(object_ptr, 0x60);
  }
  return object_ptr;
}

/**
 * 初始化引擎对象结构
 * @param object_ptr 对象指针
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 * @return 初始化的对象指针
 * 
 * 原函数名: FUN_18015c2b0
 */
int32_t *initialize_engine_object_structure(int32_t *object_ptr, uint64_t param2, uint64_t param3, uint64_t param4)
{
  int64_t *internal_ptr;
  
  internal_ptr = (int64_t *)(object_ptr + 2);
  *internal_ptr = (int64_t)&system_state_ptr;
  *(uint64_t *)(object_ptr + 4) = 0;
  object_ptr[6] = 0;
  *internal_ptr = (int64_t)&system_data_buffer_ptr;
  *(uint64_t *)(object_ptr + 8) = 0;
  *(uint64_t *)(object_ptr + 4) = 0;
  object_ptr[6] = 0;
  *object_ptr = 0;
  *(uint64_t *)(object_ptr + 10) = 0;
  *(uint64_t *)(object_ptr + 0xc) = 0;
  
  (**(code **)(*internal_ptr + 0x10))(internal_ptr, &system_buffer_ptr, param3, param4, 0xfffffffffffffffe);
  *(int16_t *)(object_ptr + 0xe) = 0;
  return object_ptr;
}

/**
 * 销毁引擎对象
 * @param object_ptr 对象指针
 * @param flags 销毁标志
 * @param param3 参数3
 * @param param4 参数4
 * @return 对象指针
 * 
 * 原函数名: FUN_18015c320
 */
uint64_t destroy_engine_object(uint64_t object_ptr, uint64_t flags, uint64_t param3, uint64_t param4)
{
  uint64_t cleanup_flags;
  
  cleanup_flags = 0xfffffffffffffffe;
  perform_engine_cleanup();
  if ((flags & 1) != 0) {
    free(object_ptr, 0x60, param3, param4, cleanup_flags);
  }
  return object_ptr;
}

/**
 * 执行引擎对象回调
 * @param param1 参数1
 * @param callback_ptr 回调指针
 * 
 * 原函数名: FUN_18015c3b0
 */
void execute_engine_object_callback(uint64_t param1, int64_t callback_ptr)
{
  if (*(code **)(callback_ptr + 0x10) != (code *)0x0) {
    (**(code **)(callback_ptr + 0x10))(callback_ptr, 0, 0);
    return;
  }
  return;
}