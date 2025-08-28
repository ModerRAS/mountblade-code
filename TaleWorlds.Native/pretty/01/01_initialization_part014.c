#include "TaleWorlds.Native.Split.h"

// 01_initialization_part014.c - 初始化模块第14部分
// 本文件包含21个函数，主要用于字符串处理、同步操作、内存管理和系统初始化

// 函数: 字符串处理函数 - 类型1
// 功能: 处理字符串拼接和内存操作，使用加密保护
void process_string_with_encryption(int64_t string_param1, int64_t string_param2, int64_t string_param3)

{
  int64_t string_length1;
  int64_t string_length2;
  int64_t string_length3;
  int8_t encryption_buffer[32];
  uint64_t encryption_key;
  void *string_table_ptr;
  int8_t *output_buffer;
  int32_t buffer_size;
  int8_t work_buffer[1032];
  uint64_t checksum;
  
  encryption_key = 0xfffffffffffffffe;
  checksum = GLOBAL_CHECKSUM_00a8 ^ (uint64_t)encryption_buffer;
  string_table_ptr = &STRING_TABLE_bb30;
  output_buffer = work_buffer;
  buffer_size = 0;
  work_buffer[0] = 0;
  string_length1 = find_string_substring(*(uint64_t *)(string_param1 + 8));
  if (string_length1 != 0) {
    string_length2 = -1;
    string_length3 = -1;
    do {
      string_length3 = string_length3 + 1;
    } while (*(char *)(string_param2 + string_length3) != '\0');
    do {
      string_length2 = string_length2 + 1;
    } while (*(char *)(string_length2 + string_param3) != '\0');
    // 复制字符串前缀到输出缓冲区
    copy_string_prefix(output_buffer, *(int64_t *)(string_param1 + 8), string_length1 - *(int64_t *)(string_param1 + 8));
  }
  string_table_ptr = &STRING_TABLE_bcb0;
  // 执行加密保护的操作
  execute_encrypted_operation(checksum ^ (uint64_t)encryption_buffer);
}



// 函数: 信号量释放函数
// 功能: 循环释放信号量直到成功
void release_semaphore_loop(uint64_t *semaphore_handle, int32_t release_count)

{
  int release_result;
  
  do {
    release_result = ReleaseSemaphore(*semaphore_handle, release_count, 0);
  } while (release_result == 0);
  return;
}



// 函数: 互斥锁解锁函数
// 功能: 安全解锁互斥锁，处理错误情况
void safe_mutex_unlock(uint64_t *mutex_handle)

{
  int unlock_result;
  
  if (*(char *)(mutex_handle + 1) != '\0') {
    unlock_result = _Mtx_unlock(*mutex_handle);
    if (unlock_result != 0) {
      throw_c_standard_error(unlock_result);
    }
  }
  return;
}



// 函数: 条件变量等待函数
// 功能: 等待条件变量满足，处理超时和错误
uint64_t wait_for_condition_variable(int64_t condition_var, uint64_t timeout_param1, uint64_t timeout_param2, uint64_t timeout_param3)

{
  char condition_status;
  int wait_result;
  int64_t mutex_ptr;
  uint64_t return_value;
  int8_t wait_flag;
  
  return_value = 0xfffffffffffffffe;
  mutex_ptr = condition_var + 0x48;
  wait_result = _Mtx_lock();
  if (wait_result != 0) {
    throw_c_standard_error(wait_result);
  }
  wait_flag = 1;
  if (*(char *)(condition_var + 0x98) != '\x01') {
    condition_status = *(char *)(condition_var + 0x98);
    while (condition_status == '\0') {
      wait_result = _Cnd_wait(condition_var, mutex_ptr, timeout_param1, timeout_param2, return_value, mutex_ptr, wait_flag);
      if (wait_result != 0) {
        throw_c_standard_error(wait_result);
      }
      condition_status = *(char *)(condition_var + 0x98);
    }
  }
  *(int8_t *)(condition_var + 0x98) = 0;
  wait_result = _Mtx_unlock(mutex_ptr);
  if (wait_result != 0) {
    throw_c_standard_error(wait_result);
  }
  return 1;
}



// 函数: 队列处理函数
// 功能: 处理队列元素的插入和移除操作
int64_t process_queue_element(int32_t *queue_head, int32_t *queue_element)

{
  int32_t element_value;
  char processing_result;
  void *error_handler;
  
  if (*(int64_t *)(queue_head + 0x18) != 0) {
    processing_result = (**(code **)(queue_head + 0x1a))(queue_element, queue_head + 0x14);
    if (processing_result == '\0') {
      if (GLOBAL_ERROR_FLAG_82860 == '\0') {
        error_handler = &ERROR_HANDLER_bc73;
        if (*(void **)(queue_head + 4) != (void *)0x0) {
          error_handler = *(void **)(queue_head + 4);
        }
        log_runtime_error(&ERROR_MESSAGE_bc00, error_handler);
      }
      *queue_head = queue_head[0x12];
      return (uint64_t)(uint3)((uint)queue_head[0x12] >> 8) << 8;
    }
  }
  element_value = *queue_element;
  *queue_head = element_value;
  return CONCAT71((uint7)(uint3)((uint)element_value >> 8), 1);
}



// 函数: 队列更新函数
// 功能: 更新队列元素，处理验证和错误情况
void update_queue_element(uint64_t queue_handle, int32_t element_value)

{
  int64_t queue_ptr;
  char validation_result;
  void *error_handler;
  int32_t validation_buffer[6];
  
  queue_ptr = GLOBAL_QUEUE_POINTER_86920;
  if ((*(int64_t *)(GLOBAL_QUEUE_POINTER_86920 + 0x22f0) != 0) &&
     (validation_buffer[0] = element_value, validation_result = (**(code **)(GLOBAL_QUEUE_POINTER_86920 + 0x22f8))(validation_buffer),
     element_value = validation_buffer[0], validation_result == '\0')) {
    if (GLOBAL_ERROR_FLAG_82860 == '\0') {
      error_handler = &ERROR_HANDLER_bc73;
      if (*(void **)(queue_ptr + 0x22a0) != (void *)0x0) {
        error_handler = *(void **)(queue_ptr + 0x22a0);
      }
      log_runtime_error(&ERROR_MESSAGE_bc00, error_handler);
    }
    *(int32_t *)(queue_ptr + 0x2290) = *(int32_t *)(queue_ptr + 0x22d8);
    return;
  }
  *(int32_t *)(queue_ptr + 0x2290) = element_value;
  return;
}



// 函数: 内存释放包装器
// 功能: 安全释放内存，支持条件释放
uint64_t *
safe_memory_free(uint64_t *memory_ptr, uint64_t free_flags, uint64_t param3, uint64_t param4)

{
  *memory_ptr = &DEALLOCATED_MEMORY_bcb0;
  if ((free_flags & 1) != 0) {
    free(memory_ptr, 0x38, param3, param4, 0xfffffffffffffffe);
  }
  return memory_ptr;
}



// 函数: 字符串设置函数
// 功能: 安全设置字符串内容，处理长度限制
void set_string_content(int64_t string_obj, int64_t string_source)

{
  int64_t source_length;
  
  if (string_source == 0) {
    *(int32_t *)(string_obj + 0x10) = 0;
    **(int8_t **)(string_obj + 8) = 0;
    return;
  }
  source_length = -1;
  do {
    source_length = source_length + 1;
  } while (*(char *)(string_source + source_length) != '\0');
  if ((int)source_length < 0x20) {
    *(int *)(string_obj + 0x10) = (int)source_length;
    // 复制字符串到对象内部缓冲区
    copy_to_internal_buffer(*(uint64_t *)(string_obj + 8), 0x20);
    return;
  }
  log_string_length_error(&ERROR_MESSAGE_bc48, 0x20, string_source);
  *(int32_t *)(string_obj + 0x10) = 0;
  **(int8_t **)(string_obj + 8) = 0;
  return;
}



// 函数: 字符串复制函数
// 功能: 安全复制字符串内容，处理缓冲区大小
void copy_string_content(int64_t string_obj, uint64_t source_ptr, int copy_length)

{
  if (copy_length + 1 < 0x20) {
    // 复制字符串到对象内部缓冲区
    memcpy(*(int8_t **)(string_obj + 8), source_ptr, (int64_t)copy_length);
  }
  **(int8_t **)(string_obj + 8) = 0;
  *(int32_t *)(string_obj + 0x10) = 0;
  return;
}



// 函数: 内存复制包装器
// 功能: 简单的内存复制操作
void simple_memcpy_wrapper(void)

{
  memcpy();
}



// 函数: 对象重置函数
// 功能: 重置对象状态和计数器
void reset_object_state(int8_t *object_ptr)

{
  int64_t object_base;
  
  *object_ptr = 0;
  *(int32_t *)(object_base + 0x10) = 0;
  return;
}



// 函数: 内存初始化函数
// 功能: 初始化内存结构，设置默认值
uint64_t * initialize_memory_structure(uint64_t *memory_ptr)

{
  *memory_ptr = &DEALLOCATED_MEMORY_bcb0;
  memory_ptr[1] = 0;
  *(int32_t *)(memory_ptr + 2) = 0;
  *memory_ptr = &INITIALIZED_MEMORY_bc80;
  memory_ptr[1] = memory_ptr + 3;
  *(int32_t *)(memory_ptr + 2) = 0;
  *(int8_t *)(memory_ptr + 3) = 0;
  return memory_ptr;
}



// 函数: 字符串处理函数 - 类型2
// 功能: 处理字符串拼接和内存操作，使用加密保护
void process_string_with_encryption_type2(int64_t string_param1, int64_t string_param2, int64_t string_param3)

{
  int64_t string_length1;
  int64_t string_length2;
  int64_t string_length3;
  int8_t encryption_buffer[32];
  uint64_t encryption_key;
  void *string_table_ptr;
  int8_t *output_buffer;
  int32_t buffer_size;
  int8_t work_buffer[32];
  uint64_t checksum;
  
  encryption_key = 0xfffffffffffffffe;
  checksum = GLOBAL_CHECKSUM_00a8 ^ (uint64_t)encryption_buffer;
  string_table_ptr = &STRING_TABLE_bc80;
  output_buffer = work_buffer;
  buffer_size = 0;
  work_buffer[0] = 0;
  string_length1 = find_string_substring(*(uint64_t *)(string_param1 + 8));
  if (string_length1 != 0) {
    string_length2 = -1;
    string_length3 = -1;
    do {
      string_length3 = string_length3 + 1;
    } while (*(char *)(string_param2 + string_length3) != '\0');
    do {
      string_length2 = string_length2 + 1;
    } while (*(char *)(string_length2 + string_param3) != '\0');
    // 复制字符串前缀到输出缓冲区
    copy_string_prefix(output_buffer, *(int64_t *)(string_param1 + 8), string_length1 - *(int64_t *)(string_param1 + 8));
  }
  string_table_ptr = &STRING_TABLE_bcb0;
  // 执行加密保护的操作
  execute_encrypted_operation(checksum ^ (uint64_t)encryption_buffer);
}



// 函数: 小内存块释放函数
// 功能: 释放小块内存，支持条件释放
uint64_t * free_small_memory_block(uint64_t *memory_ptr, uint64_t free_flags)

{
  *memory_ptr = &DEALLOCATED_MEMORY_bcb0;
  if ((free_flags & 1) != 0) {
    free(memory_ptr, 0x18);
  }
  return memory_ptr;
}



// 函数: 互斥锁解锁函数 - 简化版
// 功能: 简单的互斥锁解锁操作
void simple_mutex_unlock(uint64_t *mutex_handle)

{
  int unlock_result;
  
  unlock_result = _Mtx_unlock(*mutex_handle);
  if (unlock_result != 0) {
    throw_c_standard_error(unlock_result);
  }
  return;
}



// 函数: 条件变量通知函数
// 功能: 通知条件变量，广播等待的线程
void notify_condition_variable(int64_t condition_var)

{
  int notify_result;
  
  notify_result = _Mtx_lock(condition_var + 0x48);
  if (notify_result != 0) {
    throw_c_standard_error(notify_result);
  }
  *(int8_t *)(condition_var + 0x98) = 1;
  notify_result = _Cnd_broadcast(condition_var);
  if (notify_result != 0) {
    throw_c_standard_error(notify_result);
  }
  notify_result = _Mtx_unlock(condition_var + 0x48);
  if (notify_result != 0) {
    throw_c_standard_error(notify_result);
  }
  return;
}



// 函数: 指针初始化函数
// 功能: 初始化全局指针变量
void initialize_global_pointers(uint64_t *ptr_array)

{
  *ptr_array = &GLOBAL_POINTER_bdc8;
  *ptr_array = &GLOBAL_POINTER_21720;
  *ptr_array = &GLOBAL_POINTER_21690;
  return;
}



// 函数: 指针初始化和释放函数
// 功能: 初始化指针并支持条件释放
uint64_t *
initialize_and_free_pointers(uint64_t *ptr_array, uint64_t free_flags, uint64_t param3, uint64_t param4)

{
  *ptr_array = &GLOBAL_POINTER_bdc8;
  *ptr_array = &GLOBAL_POINTER_21720;
  *ptr_array = &GLOBAL_POINTER_21690;
  if ((free_flags & 1) != 0) {
    free(ptr_array, 0x20, param3, param4, 0xfffffffffffffffe);
  }
  return ptr_array;
}



// 函数: 内存块清理函数
// 功能: 清理内存块，逐个处理元素
void cleanup_memory_blocks(int64_t *memory_range)

{
  int64_t block_start;
  int64_t block_end;
  int64_t current_block;
  
  block_start = memory_range[1];
  for (current_block = *memory_range; current_block != block_start; current_block = current_block + 0x100) {
    cleanup_single_block(current_block);
  }
  if (*memory_range == 0) {
    return;
  }
  // 清理剩余内存
  cleanup_remaining_memory();
}



// 函数: 数组清理函数
// 功能: 清理数组元素，重置状态
void cleanup_array_elements(int64_t *array_range)

{
  uint64_t *array_start;
  uint64_t *array_end;
  uint64_t *current_element;
  
  array_start = (uint64_t *)array_range[1];
  for (current_element = (uint64_t *)*array_range; current_element != array_start; current_element = current_element + 5) {
    *current_element = &GLOBAL_ELEMENT_3c3e0;
    if (current_element[1] != 0) {
      // 清理元素时发生错误
      cleanup_remaining_memory();
    }
    current_element[1] = 0;
    *(int32_t *)(current_element + 3) = 0;
    *current_element = &DEALLOCATED_MEMORY_bcb0;
  }
  if (*array_range != 0) {
    // 清理剩余内存
    cleanup_remaining_memory();
  }
  return;
}



// 函数: 指针释放函数
// 功能: 安全释放指针，处理引用计数
void release_pointer_safely(uint64_t *pointer_ref)

{
  int *ref_count_ptr;
  uint64_t *pointer_to_free;
  int64_t memory_block;
  uint64_t block_base;
  
  pointer_to_free = (uint64_t *)*pointer_ref;
  if (pointer_to_free == (uint64_t *)0x0) {
    return;
  }
  block_base = (uint64_t)pointer_to_free & 0xffffffffffc00000;
  if (block_base != 0) {
    memory_block = block_base + 0x80 + ((int64_t)pointer_to_free - block_base >> 0x10) * 0x50;
    memory_block = memory_block - (uint64_t)*(uint *)(memory_block + 4);
    if ((*(void ***)(block_base + 0x70) == &ExceptionList) && (*(char *)(memory_block + 0xe) == '\0')) {
      *pointer_to_free = *(uint64_t *)(memory_block + 0x20);
      *(uint64_t **)(memory_block + 0x20) = pointer_to_free;
      ref_count_ptr = (int *)(memory_block + 0x18);
      *ref_count_ptr = *ref_count_ptr + -1;
      if (*ref_count_ptr == 0) {
        cleanup_memory_manager();
        return;
      }
    }
    else {
      // 使用替代的释放方法
      alternative_pointer_release(block_base, CONCAT71(0xff000000, *(void ***)(block_base + 0x70) == &ExceptionList),
                                  pointer_to_free, block_base, 0xfffffffffffffffe);
    }
  }
  return;
}



// 函数: 容器插入函数
// 功能: 向容器中插入元素，处理扩容和错误
int insert_into_container(int64_t container_ptr, int64_t element_ptr)

{
  uint64_t ***container_manager;
  int64_t container_capacity;
  void *error_handler;
  int64_t container_data;
  int insert_index;
  int64_t element_count;
  int64_t old_data;
  int64_t new_data;
  uint64_t current_size;
  uint64_t ****container_ptr_array;
  uint64_t ***temp_container;
  uint64_t *element_ref;
  int64_t stack_data_130;
  int32_t stack_data_128;
  uint64_t stack_data_120;
  uint64_t stack_data_118;
  uint64_t stack_data_110;
  uint64_t stack_data_108;
  uint64_t stack_data_100;
  uint64_t stack_data_f8;
  uint64_t stack_data_f0;
  uint64_t stack_data_e8;
  uint64_t stack_data_e0;
  uint64_t stack_data_d8;
  uint64_t stack_data_d0;
  uint64_t stack_data_c8;
  uint64_t stack_data_c0;
  uint64_t stack_data_b8;
  uint64_t stack_data_b0;
  uint64_t stack_data_a8;
  uint64_t stack_data_a0;
  uint64_t stack_data_98;
  uint64_t stack_data_90;
  uint64_t stack_data_88;
  uint64_t stack_data_80;
  uint64_t stack_data_78;
  uint64_t stack_data_70;
  uint64_t ***temp_container_68;
  uint64_t ***temp_container_60;
  uint64_t stack_data_58;
  uint64_t stack_data_50;
  uint64_t stack_data_48;
  int32_t stack_data_40;
  uint64_t stack_data_38;
  
  stack_data_38 = 0xfffffffffffffffe;
  container_capacity = 0;
  element_ref = (uint64_t *)&GLOBAL_ELEMENT_3c3e0;
  stack_data_120 = 0;
  stack_data_130 = 0;
  stack_data_128 = 0;
  stack_data_108 = 0;
  stack_data_100 = 0;
  stack_data_f8 = 0;
  stack_data_f0 = 0;
  stack_data_e8 = 0;
  stack_data_e0 = 0;
  stack_data_d8 = 0;
  stack_data_d0 = 0;
  stack_data_c8 = 0;
  stack_data_40 = 3;
  stack_data_58 = 0;
  stack_data_50 = 0;
  stack_data_48 = 0;
  error_handler = &ERROR_HANDLER_bc73;
  if (*(void **)(element_ptr + 8) != (void *)0x0) {
    error_handler = *(void **)(element_ptr + 8);
  }
  temp_container = &temp_container_68;
  temp_container_68 = &temp_container_68;
  temp_container_60 = &temp_container_68;
  initialize_container_data(&element_ref, error_handler);
  stack_data_118 = 0;
  stack_data_110 = 0;
  stack_data_c0 = 0;
  stack_data_b8 = 0;
  stack_data_b0 = 0;
  stack_data_a8 = 0;
  stack_data_a0 = 0;
  stack_data_98 = 0;
  stack_data_90 = 0;
  stack_data_88 = 0;
  stack_data_80 = 0;
  stack_data_78 = 0;
  stack_data_70 = 0;
  current_size = *(uint64_t *)(container_ptr + 0x10);
  if (current_size < *(uint64_t *)(container_ptr + 0x18)) {
    *(uint64_t *)(container_ptr + 0x10) = current_size + 0x100;
    process_container_element(current_size, &element_ref);
    container_ptr_array = *(uint64_t *****)(container_ptr + 0x10);
    goto INSERT_COMPLETE;
  }
  old_data = *(int64_t *)(container_ptr + 8);
  element_count = (int64_t)(current_size - old_data) >> 8;
  if (element_count == 0) {
    element_count = 1;
CALCULATE_NEW_SIZE:
    container_capacity = allocate_container_memory(GLOBAL_MEMORY_POOL_ed18, element_count << 8, *(int8_t *)(container_ptr + 0x20));
    current_size = *(uint64_t *)(container_ptr + 0x10);
    old_data = *(int64_t *)(container_ptr + 8);
  }
  else {
    element_count = element_count * 2;
    if (element_count != 0) goto CALCULATE_NEW_SIZE;
  }
  resize_container(&temp_container, old_data, current_size, container_capacity);
  container_manager = temp_container;
  process_container_element(temp_container, &element_ref);
  container_ptr_array = (uint64_t ****)(container_manager + 0x20);
  old_data = *(int64_t *)(container_ptr + 0x10);
  new_data = *(int64_t *)(container_ptr + 8);
  if (new_data != old_data) {
    do {
      cleanup_single_block(new_data);
      new_data = new_data + 0x100;
    } while (new_data != old_data);
    new_data = *(int64_t *)(container_ptr + 8);
  }
  if (new_data != 0) {
    // 清理旧内存
    cleanup_remaining_memory(new_data);
  }
  *(int64_t *)(container_ptr + 8) = container_capacity;
  *(uint64_t *****)(container_ptr + 0x10) = container_ptr_array;
  *(int64_t *)(container_ptr + 0x18) = element_count * 0x100 + container_capacity;
INSERT_COMPLETE:
  insert_index = (int)((uint64_t)((int64_t)container_ptr_array - *(int64_t *)(container_ptr + 8)) >> 8) + -1;
  *(int *)(container_ptr + 0x68) = insert_index;
  temp_container = &temp_container_68;
  cleanup_container_data(&temp_container_68, stack_data_58);
  temp_container = (uint64_t ***)&element_ref;
  element_ref = (uint64_t *)&GLOBAL_ELEMENT_3c3e0;
  if (stack_data_130 == 0) {
    return insert_index;
  }
  // 清理临时数据
  cleanup_remaining_memory();
}



// 函数: 元素清理函数
// 功能: 清理单个元素，释放资源
void cleanup_single_element(uint64_t *element_ptr, uint64_t param2, uint64_t param3, uint64_t param4)

{
  cleanup_element_resources(element_ptr + 0x1a, element_ptr[0x1c], param3, param4, 0xfffffffffffffffe);
  *element_ptr = &GLOBAL_ELEMENT_3c3e0;
  if (element_ptr[1] != 0) {
    // 清理时发生错误
    cleanup_remaining_memory();
  }
  element_ptr[1] = 0;
  *(int32_t *)(element_ptr + 3) = 0;
  *element_ptr = &DEALLOCATED_MEMORY_bcb0;
  return;
}



// 函数: 元素查找函数
// 功能: 在容器中查找元素，返回索引
uint64_t find_element_in_container(int64_t container_ptr, int64_t search_key)

{
  byte *element_name;
  int element_length;
  int64_t container_data;
  byte *search_name;
  int search_length;
  int name_compare;
  uint64_t current_index;
  int64_t name_offset;
  uint char_diff;
  uint64_t total_elements;
  uint64_t search_index;
  uint64_t compare_result;
  
  current_index = (uint64_t)*(int *)(container_ptr + 0x68);
  container_data = *(int64_t *)(container_ptr + 8);
  if (current_index < (uint64_t)(*(int64_t *)(container_ptr + 0x10) - container_data >> 8)) {
    search_length = *(int *)(search_key + 0x10);
    element_length = *(int *)(current_index * 0x100 + 0x10 + container_data);
    if (element_length == search_length) {
      if (element_length != 0) {
        element_name = *(byte **)(current_index * 0x100 + 8 + container_data);
        name_offset = *(int64_t *)(search_key + 8) - (int64_t)element_name;
        do {
          search_name = element_name + name_offset;
          char_diff = (uint)*element_name - (uint)*search_name;
          if (char_diff != 0) break;
          element_name = element_name + 1;
        } while (*search_name != 0);
      }
    }
    else if (element_length != 0) goto SEARCH_ALL_ELEMENTS;
    if (search_length == 0) {
FOUND_ELEMENT:
      return current_index & 0xffffffff;
    }
  }
SEARCH_ALL_ELEMENTS:
  current_index = 0;
  total_elements = *(int64_t *)(container_ptr + 0x10) - container_data >> 8;
  if (total_elements != 0) {
    search_length = *(int *)(search_key + 0x10);
    search_index = current_index;
    do {
      element_length = *(int *)(search_index + 0x10 + container_data);
      name_compare = search_length;
      if (element_length == search_length) {
        if (element_length != 0) {
          element_name = *(byte **)(search_index + 8 + container_data);
          name_offset = *(int64_t *)(search_key + 8) - (int64_t)element_name;
          do {
            search_name = element_name + name_offset;
            name_compare = (uint)*element_name - (uint)*search_name;
            if (name_compare != 0) break;
            element_name = element_name + 1;
          } while (*search_name != 0);
        }
COMPARE_COMPLETE:
        if (name_compare == 0) {
          *(int *)(container_ptr + 0x68) = (int)current_index;
          goto FOUND_ELEMENT;
        }
      }
      else if (element_length == 0) goto COMPARE_COMPLETE;
      char_diff = (int)current_index + 1;
      current_index = (uint64_t)char_diff;
      search_index = search_index + 0x100;
    } while ((uint64_t)(int64_t)(int)char_diff < total_elements);
  }
  return 0xffffffff;
}



// 函数: 容器初始化函数
// 功能: 初始化容器，设置管理器和回调
void initialize_container(int64_t *container_ptr, uint64_t *config_ptr)

{
  int64_t *allocated_memory;
  int64_t *temp_stack_8;
  uint64_t *temp_stack_10;
  int64_t *temp_stack_18;
  int64_t **temp_stack_20;
  int32_t allocation_flags;
  uint64_t allocation_params;
  
  allocation_params = 0xfffffffffffffffe;
  allocation_flags = 0;
  temp_stack_8 = container_ptr;
  temp_stack_10 = config_ptr;
  initialize_container_manager();
  allocated_memory = (int64_t *)allocate_container_memory(GLOBAL_MEMORY_POOL_ed18, 200, 8, 3, allocation_flags, allocation_params);
  temp_stack_8 = allocated_memory;
  setup_container_manager(allocated_memory);
  *allocated_memory = (int64_t)&GLOBAL_CONTAINER_cb00;
  allocated_memory[0x18] = (int64_t)&CONTAINER_CALLBACK_6dd0;
  temp_stack_18 = allocated_memory;
  (*(code **)(*allocated_memory + 0x28))(allocated_memory);
  allocation_params = GLOBAL_CONFIG_82868;
  temp_stack_20 = &temp_stack_8;
  temp_stack_8 = allocated_memory;
  (*(code **)(*allocated_memory + 0x28))(allocated_memory);
  configure_container(allocation_params, &temp_stack_8);
  (*(code **)(*allocated_memory + 0x38))(allocated_memory);
  GLOBAL_COUNTER_52b0 = (int64_t)*(int *)(GLOBAL_CONFIG_86920 + 0x224);
  configure_container_data(&GLOBAL_CONFIG_52c0, config_ptr);
  *config_ptr = &GLOBAL_ELEMENT_3c3e0;
  if (config_ptr[1] != 0) {
    // 初始化时发生错误
    cleanup_remaining_memory();
  }
  config_ptr[1] = 0;
  *(int32_t *)(config_ptr + 3) = 0;
  *config_ptr = &DEALLOCATED_MEMORY_bcb0;
  return;
}



// 函数: 系统初始化函数
// 功能: 初始化游戏系统，配置各种参数
void initialize_game_system(void)

{
  uint64_t system_config;
  char config_status;
  int config_result;
  int64_t ***system_manager;
  uint64_t config_key;
  int64_t system_data;
  uint64_t *config_ptr;
  int32_t *config_data;
  int8_t *config_buffer;
  int32_t buffer_size;
  float float_param1;
  float float_param2;
  int8_t encryption_buffer[32];
  int64_t stack_data_678;
  int64_t stack_data_670;
  int stack_data_668;
  void *stack_data_618;
  int8_t *stack_data_610;
  uint stack_data_608;
  uint64_t stack_data_600;
  int32_t stack_data_5b8;
  int64_t ***system_manager_590;
  int64_t **system_manager_588;
  int64_t ****system_manager_580;
  void *stack_data_578;
  uint64_t stack_data_570;
  int32_t stack_data_568;
  uint64_t stack_data_560;
  void *stack_data_558;
  int64_t stack_data_550;
  int stack_data_548;
  int32_t stack_data_540;
  void *stack_data_538;
  int64_t stack_data_530;
  int32_t stack_data_520;
  int64_t ***temp_manager_518 [2];
  void *stack_data_508;
  code *callback_func;
  uint64_t stack_data_4f8;
  int64_t **stack_data_4f0;
  void *stack_data_4e8;
  int8_t *stack_data_4e0;
  int32_t stack_data_4d8;
  int8_t work_buffer_4d0[72];
  void *stack_data_488;
  int8_t *stack_data_480;
  int32_t stack_data_478;
  int8_t work_buffer_470[72];
  void *stack_data_428;
  int8_t *stack_data_420;
  int32_t stack_data_418;
  int8_t work_buffer_410[72];
  void *stack_data_3c8;
  int8_t *stack_data_3c0;
  int32_t stack_data_3b8;
  int8_t work_buffer_3b0[72];
  void *stack_data_368;
  int8_t *stack_data_360;
  int32_t stack_data_358;
  int8_t work_buffer_350[72];
  void *stack_data_308;
  int8_t *stack_data_300;
  int32_t stack_data_2f8;
  int8_t work_buffer_2f0[648];
  uint64_t checksum;
  
  stack_data_4f8 = 0xfffffffffffffffe;
  checksum = GLOBAL_CHECKSUM_00a8 ^ (uint64_t)encryption_buffer;
  stack_data_5b8 = 0;
  if (*(int *)(GLOBAL_CONFIG_86920 + 0x224) - GLOBAL_COUNTER_52b0 < 0xfb) {
    // 系统初始化失败
    execute_encrypted_operation(checksum ^ (uint64_t)encryption_buffer);
  }
  *(int8_t *)(GLOBAL_CONFIG_86960 + 0x39) = 1;
  system_manager = (int64_t ***)allocate_container_memory(GLOBAL_MEMORY_POOL_ed18, 200, 8, 3);
  system_manager_590 = system_manager;
  setup_container_manager(system_manager);
  *system_manager = (int64_t **)&GLOBAL_CONTAINER_cb00;
  system_manager[0x18] = (int64_t **)&SYSTEM_CALLBACK_7d20;
  system_manager_588 = (int64_t **)system_manager;
  (*(code *)(*system_manager)[5])(system_manager);
  system_config = GLOBAL_CONFIG_82868;
  stack_data_5b8 = 1;
  system_manager_590 = &system_manager_588;
  system_manager_588 = (int64_t **)system_manager;
  (*(code *)(*system_manager)[5])(system_manager);
  configure_container(system_config, &system_manager_588);
  stack_data_5b8 = 0;
  (*(code *)(*system_manager)[7])(system_manager);
  initialize_system_data(&stack_data_678, &GLOBAL_CONFIG_52c0);
  if (stack_data_668 == 0) {
    (*(code **)(stack_data_678 + 0x10))(&stack_data_678, &GLOBAL_CONFIG_7a0);
    config_status = validate_system_config(&stack_data_678);
    if (config_status == '\0') {
      cleanup_system_config(&stack_data_678);
    }
  }
  config_status = validate_system_config(&stack_data_678);
  if (config_status == '\0') {
    cleanup_system_config(&stack_data_678);
  }
  stack_data_4e8 = &GLOBAL_CONFIG_cc58;
  stack_data_4e0 = work_buffer_4d0;
  work_buffer_4d0[0] = 0;
  stack_data_4d8 = 0x18;
  copy_config_string(work_buffer_4d0, 0x40, &GLOBAL_CONFIG_7b8);
  process_system_config(GLOBAL_CONFIG_86960, &stack_data_4e8, &stack_data_678);
  stack_data_4e8 = &DEALLOCATED_MEMORY_bcb0;
  stack_data_488 = &GLOBAL_CONFIG_cc58;
  stack_data_480 = work_buffer_470;
  work_buffer_470[0] = 0;
  stack_data_478 = 0xb;
  copy_config_string(work_buffer_470, 0x40, &GLOBAL_CONFIG_790);
  process_system_config(GLOBAL_CONFIG_86960, &stack_data_488, &stack_data_678);
  stack_data_488 = &DEALLOCATED_MEMORY_bcb0;
  stack_data_428 = &GLOBAL_CONFIG_cc58;
  stack_data_420 = work_buffer_410;
  work_buffer_410[0] = 0;
  stack_data_418 = 0x18;
  buffer_size = copy_config_string(work_buffer_410, 0x40, &GLOBAL_CONFIG_7b8);
  GLOBAL_CONFIG_52b8 = (float)parse_config_value(buffer_size, &stack_data_428);
  GLOBAL_CONFIG_52b8 = 1.0 / GLOBAL_CONFIG_52b8;
  stack_data_428 = &DEALLOCATED_MEMORY_bcb0;
  stack_data_3c8 = &GLOBAL_CONFIG_cc58;
  stack_data_3c0 = work_buffer_3b0;
  work_buffer_3b0[0] = 0;
  stack_data_3b8 = 0xb;
  buffer_size = copy_config_string(work_buffer_3b0, 0x40, &GLOBAL_CONFIG_790);
  GLOBAL_CONFIG_52bc = (float)parse_config_value(buffer_size, &stack_data_3c8);
  GLOBAL_CONFIG_52bc = 1.0 / GLOBAL_CONFIG_52bc;
  stack_data_3c8 = &DEALLOCATED_MEMORY_bcb0;
  stack_data_368 = &GLOBAL_CONFIG_cc58;
  stack_data_360 = work_buffer_350;
  work_buffer_350[0] = 0;
  stack_data_358 = 0xb;
  buffer_size = copy_config_string(work_buffer_350, 0x40, &GLOBAL_CONFIG_790);
  float_param1 = (float)parse_config_float(buffer_size, &stack_data_368);
  stack_data_368 = &DEALLOCATED_MEMORY_bcb0;
  stack_data_308 = &GLOBAL_CONFIG_cc58;
  stack_data_300 = work_buffer_2f0;
  work_buffer_2f0[0] = 0;
  stack_data_2f8 = 0x18;
  buffer_size = copy_config_string(work_buffer_2f0, 0x40, &GLOBAL_CONFIG_7b8);
  float_param2 = (float)parse_config_float(buffer_size, &stack_data_308);
  stack_data_308 = &DEALLOCATED_MEMORY_bcb0;
  config_key = get_system_timestamp();
  if (0 < GLOBAL_CONFIG_52d0) {
    extract_config_data(&GLOBAL_CONFIG_52c0, &stack_data_558, 0, GLOBAL_CONFIG_52d0 + -1);
    stack_data_548 = stack_data_548 + -1;
    system_data = (int64_t)stack_data_548;
    config_result = -1;
    if (-1 < stack_data_548) {
      do {
        config_result = stack_data_548;
        if (*(char *)(stack_data_550 + system_data) == '/') break;
        stack_data_548 = stack_data_548 + -1;
        system_data = system_data + -1;
        config_result = -1;
      } while (-1 < system_data);
    }
    extract_config_data(&stack_data_558, &stack_data_538, config_result + 1, 0xffffffff);
    config_result = find_element_in_container(&GLOBAL_CONFIG_5240, &stack_data_538);
    if (config_result == -1) {
      config_result = insert_into_container(&GLOBAL_CONFIG_5240, &stack_data_538);
    }
    system_data = (int64_t)config_result * 0x100;
    system_manager_590 = (int64_t ***)(GLOBAL_CONFIG_5248 + 0x30 + system_data);
    system_manager_580 = temp_manager_518;
    stack_data_508 = &GLOBAL_CALLBACK_0adc10;
    callback_func = SYSTEM_CALLBACK_0adba0;
    temp_manager_518[0] = (int64_t ***)&system_manager_590;
    register_system_callback(temp_manager_518);
    *(double *)(system_data + 0xa0 + GLOBAL_CONFIG_5248) = (double)(1.0 / float_param2);
    *(double *)(system_data + 0xb8 + GLOBAL_CONFIG_5248) = (double)(1.0 / float_param1);
    *(int *)(system_data + 0xb0 + GLOBAL_CONFIG_5248) = (int)(int64_t)GLOBAL_CONFIG_52b8;
    *(int *)(system_data + 200 + GLOBAL_CONFIG_5248) = (int)(int64_t)GLOBAL_CONFIG_52bc;
    *(double *)(system_data + 0x20 + GLOBAL_CONFIG_5248) = (double)(config_key >> 0x14);
    stack_data_538 = &GLOBAL_ELEMENT_3c3e0;
    if (stack_data_530 != 0) {
      // 系统初始化失败
      cleanup_remaining_memory();
    }
    stack_data_530 = 0;
    stack_data_520 = 0;
    stack_data_538 = &DEALLOCATED_MEMORY_bcb0;
    stack_data_558 = &GLOBAL_ELEMENT_3c3e0;
    if (stack_data_550 != 0) {
      // 系统初始化失败
      cleanup_remaining_memory();
    }
    stack_data_550 = 0;
    stack_data_540 = 0;
    stack_data_558 = &DEALLOCATED_MEMORY_bcb0;
  }
  stack_data_578 = &GLOBAL_ELEMENT_3c3e0;
  stack_data_560 = 0;
  stack_data_570 = 0;
  stack_data_568 = 0;
  stack_data_618 = &GLOBAL_ELEMENT_3c3e0;
  stack_data_600 = 0;
  stack_data_610 = (int8_t *)0x0;
  stack_data_608 = 0;
  initialize_system_buffer(&stack_data_618, stack_data_668);
  if (stack_data_668 != 0) {
    // 复制系统配置数据
    memcpy(stack_data_610, stack_data_670, stack_data_668 + 1);
  }
  if (stack_data_670 != 0) {
    stack_data_608 = 0;
    if (stack_data_610 != (int8_t *)0x0) {
      *stack_data_610 = 0;
    }
    stack_data_600 = stack_data_600 & 0xffffffff;
  }
  finalize_system_data(&stack_data_678, 1);
  config_result = stack_data_608 + 0x11;
  initialize_system_buffer(&stack_data_618, config_result);
  config_data = (int32_t *)(stack_data_610 + stack_data_608);
  *config_data = 0x69676e65;  // "engine"
  config_data[1] = 0x635f656e;  // "en_c"
  config_data[2] = 0x69666e6f;  // "onfi"
  config_data[3] = 0x78742e67;  // "g.tx"
  *(int16_t *)(config_data + 4) = 0x74;  // "t"
  stack_data_608 = config_result;
  config_ptr = (uint64_t *)allocate_container_memory(GLOBAL_MEMORY_POOL_ed18, 0x18, 8, 3);
  config_buffer = &ERROR_HANDLER_bc73;
  if (stack_data_610 != (int8_t *)0x0) {
    config_buffer = stack_data_610;
  }
  *config_ptr = 0;
  *(int8_t *)(config_ptr + 2) = 0;
  initialize_config_object(config_ptr, config_buffer, &GLOBAL_CONFIG_7ec);
  register_config_object(GLOBAL_CONFIG_86920, config_ptr);
  if (config_ptr[1] != 0) {
    fclose();
    config_ptr[1] = 0;
    LOCK();
    GLOBAL_MEMORY_POOL_ed60 = GLOBAL_MEMORY_POOL_ed60 + -1;
    UNLOCK();
    if (config_ptr[1] != 0) {
      fclose();
      config_ptr[1] = 0;
      LOCK();
      GLOBAL_MEMORY_POOL_ed60 = GLOBAL_MEMORY_POOL_ed60 + -1;
      UNLOCK();
    }
  }
  // 系统初始化完成，清理临时数据
  cleanup_remaining_memory(config_ptr);
}



// 函数: 对象复制函数
// 功能: 深度复制对象，包括所有属性
uint64_t *
deep_copy_object(uint64_t *dest_ptr, uint64_t *src_ptr, uint64_t param3, uint64_t param4)

{
  *dest_ptr = *src_ptr;
  *(int32_t *)(dest_ptr + 1) = *(int32_t *)(src_ptr + 1);
  copy_object_properties(dest_ptr + 2, src_ptr + 2, param3, param4, 0xfffffffffffffffe);
  *(int32_t *)(dest_ptr + 0x15) = *(int32_t *)(src_ptr + 0x15);
  *(int32_t *)((int64_t)dest_ptr + 0xac) = *(int32_t *)((int64_t)src_ptr + 0xac);
  dest_ptr[0x16] = src_ptr[0x16];
  dest_ptr[0x17] = src_ptr[0x17];
  dest_ptr[0x18] = src_ptr[0x18];
  *(int8_t *)(dest_ptr + 0x19) = *(int8_t *)(src_ptr + 0x19);
  *(int8_t *)((int64_t)dest_ptr + 0xc9) = *(int8_t *)((int64_t)src_ptr + 0xc9);
  *(int8_t *)((int64_t)dest_ptr + 0xca) = *(int8_t *)((int64_t)src_ptr + 0xca);
  *(int8_t *)((int64_t)dest_ptr + 0xcb) = *(int8_t *)((int64_t)src_ptr + 0xcb);
  *(int8_t *)((int64_t)dest_ptr + 0xcc) = *(int8_t *)((int64_t)src_ptr + 0xcc);
  return dest_ptr;
}



// 函数: 对象重置函数 - 简化版
// 功能: 重置对象的特定字段
void reset_object_field(int64_t object_ptr)

{
  *(void **)(object_ptr + 0x10) = &DEALLOCATED_MEMORY_bcb0;
  return;
}



// 函数: 指针重置函数
// 功能: 重置指针为默认值
void reset_pointer_to_default(uint64_t *ptr_obj)

{
  *ptr_obj = &DEALLOCATED_MEMORY_bcb0;
  return;
}



// 函数: 元素插入函数
// 功能: 向数据结构中插入元素，处理排序和查找
void insert_element_into_structure(uint64_t param1, uint64_t param2, int64_t element_data, uint64_t param4)

{
  byte element_byte;
  bool comparison_result;
  int search_result;
  uint64_t *current_node;
  uint element_value;
  byte *element_name;
  uint64_t *next_node;
  uint64_t *insertion_point;
  int64_t name_offset;
  uint64_t param_copy;
  
  param_copy = param1;
  search_result = find_element_in_container(&GLOBAL_CONFIG_5240);
  if (search_result == -1) {
    search_result = insert_into_container(&GLOBAL_CONFIG_5240, param2);
  }
  current_node = (uint64_t *)(GLOBAL_CONFIG_5248 + 0xd0 + (int64_t)search_result * 0x100);
  insertion_point = current_node;
  if ((uint64_t *)current_node[2] != (uint64_t *)0x0) {
    next_node = (uint64_t *)current_node[2];
    do {
      if (*(int *)(element_data + 0x10) == 0) {
        current_node = (uint64_t *)next_node[1];
        comparison_result = false;
      }
      else {
        if (*(int *)(next_node + 6) == 0) {
          comparison_result = true;
        }
        else {
          element_name = *(byte **)(element_data + 8);
          name_offset = next_node[5] - (int64_t)element_name;
          do {
            element_value = (uint)element_name[name_offset];
            search_result = *element_name - element_value;
            if (*element_name != element_value) break;
            element_name = element_name + 1;
          } while (element_value != 0);
          comparison_result = 0 < search_result;
          if (search_result < 1) {
            current_node = (uint64_t *)next_node[1];
            goto INSERTION_POINT_FOUND;
          }
        }
        current_node = (uint64_t *)*next_node;
      }
INSERTION_POINT_FOUND:
      if (comparison_result) {
        next_node = insertion_point;
      }
      insertion_point = next_node;
      next_node = current_node;
    } while (current_node != (uint64_t *)0x0);
  }
  if (insertion_point != current_node) {
    if (*(int *)(insertion_point + 6) == 0) goto PERFORM_INSERTION;
    if (*(int *)(element_data + 0x10) != 0) {
      element_name = (byte *)insertion_point[5];
      name_offset = *(int64_t *)(element_data + 8) - (int64_t)element_name;
      do {
        element_byte = *element_name;
        element_value = (uint)element_name[name_offset];
        if (element_byte != element_value) break;
        element_name = element_name + 1;
      } while (element_value != 0);
      if ((int)(element_byte - element_value) < 1) goto PERFORM_INSERTION;
    }
  }
  insertion_point = (uint64_t *)insert_into_sorted_list(current_node, &param_copy);
  insertion_point = (uint64_t *)*insertion_point;
PERFORM_INSERTION:
  configure_element_data(insertion_point + 8, element_data);
  insertion_point[0xc] = param4;
  return;
}