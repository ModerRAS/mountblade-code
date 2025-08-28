#include "TaleWorlds.Native.Split.h"

/**
 * 核心引擎模块第183部分
 * 
 * 本文件包含核心引擎的配置和数据处理功能实现
 * 
 * 文件标识: 02_core_engine_part183.c
 * 模块: 核心引擎 (02)
 * 功能描述: 引擎配置与数据处理
 * 函数数量: 6 个函数
 */

/**
 * 初始化引擎配置指针
 * 
 * 该函数负责初始化引擎配置的各种指针设置
 * 将配置指针指向默认的空字符串缓冲区
 * 
 * 参数:
 *   config_ptr - 配置指针数组
 * 
 * 功能:
 *   - 设置配置指针为默认值
 *   - 初始化指针数组
 *   - 确保配置结构正确初始化
 */
void initialize_engine_config_pointers(undefined8 *config_ptr)
{
  // 设置配置指针为默认空字符串缓冲区
  config_ptr[0x16] = &engine_null_string_buffer;
  config_ptr[0x0b] = &engine_null_string_buffer;
  *config_ptr = &engine_null_string_buffer;
  return;
}

/**
 * 复制引擎数据结构
 * 
 * 该函数负责复制引擎的数据结构，包括字符串数组、配置参数等
 * 处理复杂的数据复制和内存分配操作
 * 
 * 参数:
 *   dest_ptr - 目标数据结构指针
 *   src_ptr - 源数据结构指针
 * 
 * 返回值:
 *   返回目标数据结构指针
 * 
 * 功能:
 *   - 复制基本数据字段
 *   - 分配并复制字符串数组
 *   - 处理复杂的数据结构复制
 *   - 确保内存正确分配和释放
 */
longlong copy_engine_data_structure(longlong *dest_ptr, longlong *src_ptr)
{
  uint allocation_flags;
  undefined *string_ptr;
  longlong buffer_size;
  longlong array_size;
  longlong item_count;
  undefined8 *array_ptr;
  undefined *default_string;
  undefined *source_string;
  
  // 初始化内存分配器
  initialize_memory_allocator();
  
  // 计算第一个数组的大小
  buffer_size = *(longlong *)(src_ptr + 0x28) - *(longlong *)(src_ptr + 0x20);
  buffer_size = buffer_size / 0x26 + (buffer_size >> 0x3f);
  array_size = 0;
  item_count = (buffer_size >> 2) - (buffer_size >> 0x3f);
  allocation_flags = *(uint *)(src_ptr + 0x38);
  *(uint *)(dest_ptr + 0x38) = allocation_flags;
  buffer_size = array_size;
  
  // 分配第一个数组内存
  if (item_count != 0) {
    buffer_size = allocate_memory_block(global_memory_pool, item_count * 0x98, allocation_flags & 0xff);
  }
  
  // 设置数组指针
  *(longlong *)(dest_ptr + 0x20) = buffer_size;
  *(longlong *)(dest_ptr + 0x28) = buffer_size;
  *(longlong *)(dest_ptr + 0x30) = item_count * 0x98 + buffer_size;
  array_ptr = *(undefined8 **)(dest_ptr + 0x20);
  buffer_size = *(longlong *)(src_ptr + 0x28);
  
  // 复制第一个数组数据
  if (*(longlong *)(src_ptr + 0x20) != buffer_size) {
    array_size = *(longlong *)(src_ptr + 0x20) - (longlong)array_ptr;
    do {
      // 初始化数组项
      *array_ptr = &engine_null_string_buffer;
      array_ptr[1] = 0;
      *(undefined4 *)(array_ptr + 2) = 0;
      *array_ptr = &engine_string_buffer;
      array_ptr[1] = array_ptr + 3;
      *(undefined4 *)(array_ptr + 2) = 0;
      *(undefined1 *)(array_ptr + 3) = 0;
      *(undefined4 *)(array_ptr + 2) = *(undefined4 *)(array_size + 0x10 + (longlong)array_ptr);
      source_string = *(undefined **)(array_size + 8 + (longlong)array_ptr);
      default_string = &default_empty_string;
      if (source_string != (undefined *)0x0) {
        default_string = source_string;
      }
      // 安全复制字符串
      safe_string_copy(array_ptr[1], 0x80, default_string);
      array_ptr = array_ptr + 0x13;
    } while (array_size + (longlong)array_ptr != buffer_size);
  }
  
  *(undefined8 **)(dest_ptr + 0x28) = array_ptr;
  copy_memory_block(dest_ptr + 0x40, src_ptr + 0x40);
  *(undefined1 *)(dest_ptr + 0xd8) = *(undefined1 *)(src_ptr + 0xd8);
  *(undefined4 *)(dest_ptr + 0xdc) = *(undefined4 *)(src_ptr + 0xdc);
  copy_memory_block(dest_ptr + 0xe0, src_ptr + 0xe0);
  
  // 处理第二个数组
  buffer_size = *(longlong *)(src_ptr + 0x180) - *(longlong *)(src_ptr + 0x178);
  buffer_size = buffer_size / 0x26 + (buffer_size >> 0x3f);
  item_count = (buffer_size >> 2) - (buffer_size >> 0x3f);
  allocation_flags = *(uint *)(src_ptr + 400);
  *(uint *)(dest_ptr + 400) = allocation_flags;
  buffer_size = array_size;
  
  if (item_count != 0) {
    buffer_size = allocate_memory_block(global_memory_pool, item_count * 0x98, allocation_flags & 0xff);
  }
  
  *(longlong *)(dest_ptr + 0x178) = buffer_size;
  *(longlong *)(dest_ptr + 0x180) = buffer_size;
  *(longlong *)(dest_ptr + 0x188) = item_count * 0x98 + buffer_size;
  array_ptr = *(undefined8 **)(dest_ptr + 0x178);
  buffer_size = *(longlong *)(src_ptr + 0x180);
  
  if (*(longlong *)(src_ptr + 0x178) != buffer_size) {
    array_size = *(longlong *)(src_ptr + 0x178) - (longlong)array_ptr;
    do {
      *array_ptr = &engine_null_string_buffer;
      array_ptr[1] = 0;
      *(undefined4 *)(array_ptr + 2) = 0;
      *array_ptr = &engine_string_buffer;
      array_ptr[1] = array_ptr + 3;
      *(undefined4 *)(array_ptr + 2) = 0;
      *(undefined1 *)(array_ptr + 3) = 0;
      *(undefined4 *)(array_ptr + 2) = *(undefined4 *)(array_size + 0x10 + (longlong)array_ptr);
      source_string = *(undefined **)(array_size + 8 + (longlong)array_ptr);
      default_string = &default_empty_string;
      if (source_string != (undefined *)0x0) {
        default_string = source_string;
      }
      safe_string_copy(array_ptr[1], 0x80, default_string);
      array_ptr = array_ptr + 0x13;
    } while (array_size + (longlong)array_ptr != buffer_size);
  }
  
  *(undefined8 **)(dest_ptr + 0x180) = array_ptr;
  process_engine_data(dest_ptr + 0x198, src_ptr + 0x198, 0x98, 5, copy_memory_block, cleanup_memory_block);
  
  // 处理第三个数组
  buffer_size = *(longlong *)(src_ptr + 0x498) - *(longlong *)(src_ptr + 0x490);
  buffer_size = buffer_size / 0x26 + (buffer_size >> 0x3f);
  item_count = (buffer_size >> 2) - (buffer_size >> 0x3f);
  allocation_flags = *(uint *)(src_ptr + 0x4a8);
  *(uint *)(dest_ptr + 0x4a8) = allocation_flags;
  buffer_size = array_size;
  
  if (item_count != 0) {
    buffer_size = allocate_memory_block(global_memory_pool, item_count * 0x98, allocation_flags & 0xff);
  }
  
  *(longlong *)(dest_ptr + 0x490) = buffer_size;
  *(longlong *)(dest_ptr + 0x498) = buffer_size;
  *(longlong *)(dest_ptr + 0x4a0) = item_count * 0x98 + buffer_size;
  array_ptr = *(undefined8 **)(dest_ptr + 0x490);
  buffer_size = *(longlong *)(src_ptr + 0x498);
  
  if (*(longlong *)(src_ptr + 0x490) != buffer_size) {
    array_size = *(longlong *)(src_ptr + 0x490) - (longlong)array_ptr;
    do {
      *array_ptr = &engine_null_string_buffer;
      array_ptr[1] = 0;
      *(undefined4 *)(array_ptr + 2) = 0;
      *array_ptr = &engine_string_buffer;
      array_ptr[1] = array_ptr + 3;
      *(undefined4 *)(array_ptr + 2) = 0;
      *(undefined1 *)(array_ptr + 3) = 0;
      *(undefined4 *)(array_ptr + 2) = *(undefined4 *)(array_size + 0x10 + (longlong)array_ptr);
      source_string = *(undefined **)(array_size + 8 + (longlong)array_ptr);
      default_string = &default_empty_string;
      if (source_string != (undefined *)0x0) {
        default_string = source_string;
      }
      safe_string_copy(array_ptr[1], 0x80, default_string);
      array_ptr = array_ptr + 0x13;
    } while (array_size + (longlong)array_ptr != buffer_size);
  }
  
  *(undefined8 **)(dest_ptr + 0x498) = array_ptr;
  process_engine_data(dest_ptr + 0x4b0, src_ptr + 0x4b0, 0x58, 0x10, process_extended_data, cleanup_memory_block);
  process_engine_data(dest_ptr + 0xa30, src_ptr + 0xa30, 0x98, 9, copy_memory_block, cleanup_memory_block);
  copy_memory_block(dest_ptr + 0xf88, src_ptr + 0xf88);
  copy_memory_block(dest_ptr + 0x1020, src_ptr + 0x1020);
  
  // 处理第四个数组
  buffer_size = *(longlong *)(src_ptr + 0x10c0) - *(longlong *)(src_ptr + 0x10b8);
  buffer_size = buffer_size / 0x26 + (buffer_size >> 0x3f);
  buffer_size = (buffer_size >> 2) - (buffer_size >> 0x3f);
  allocation_flags = *(uint *)(src_ptr + 0x10d0);
  *(uint *)(dest_ptr + 0x10d0) = allocation_flags;
  
  if (buffer_size != 0) {
    array_size = allocate_memory_block(global_memory_pool, buffer_size * 0x98, allocation_flags & 0xff);
  }
  
  *(longlong *)(dest_ptr + 0x10b8) = array_size;
  *(longlong *)(dest_ptr + 0x10c0) = array_size;
  *(longlong *)(dest_ptr + 0x10c8) = buffer_size * 0x98 + array_size;
  array_ptr = *(undefined8 **)(dest_ptr + 0x10b8);
  buffer_size = *(longlong *)(src_ptr + 0x10c0);
  
  if (*(longlong *)(src_ptr + 0x10b8) != buffer_size) {
    array_size = *(longlong *)(src_ptr + 0x10b8) - (longlong)array_ptr;
    do {
      *array_ptr = &engine_null_string_buffer;
      array_ptr[1] = 0;
      *(undefined4 *)(array_ptr + 2) = 0;
      *array_ptr = &engine_string_buffer;
      array_ptr[1] = array_ptr + 3;
      *(undefined4 *)(array_ptr + 2) = 0;
      *(undefined1 *)(array_ptr + 3) = 0;
      *(undefined4 *)(array_ptr + 2) = *(undefined4 *)(array_size + 0x10 + (longlong)array_ptr);
      source_string = *(undefined **)(array_size + 8 + (longlong)array_ptr);
      default_string = &default_empty_string;
      if (source_string != (undefined *)0x0) {
        default_string = source_string;
      }
      safe_string_copy(array_ptr[1], 0x80, default_string);
      array_ptr = array_ptr + 0x13;
    } while (array_size + (longlong)array_ptr != buffer_size);
  }
  
  *(undefined8 **)(dest_ptr + 0x10c0) = array_ptr;
  initialize_memory_allocator(dest_ptr + 0x10d8, src_ptr + 0x10d8);
  *(undefined1 *)(dest_ptr + 0x10f8) = *(undefined1 *)(src_ptr + 0x10f8);
  *(undefined1 *)(dest_ptr + 0x10f9) = *(undefined1 *)(src_ptr + 0x10f9);
  copy_memory_block(dest_ptr + 0x1100, src_ptr + 0x1100);
  copy_memory_block(dest_ptr + 0x1198, src_ptr + 0x1198);
  copy_memory_block(dest_ptr + 0x1230, src_ptr + 0x1230);
  copy_memory_block(dest_ptr + 0x12c8, src_ptr + 0x12c8);
  copy_memory_block(dest_ptr + 0x1360, src_ptr + 0x1360);
  copy_memory_block(dest_ptr + 0x13f8, src_ptr + 0x13f8);
  
  return dest_ptr;
}

/**
 * 创建引擎数据结构
 * 
 * 该函数负责创建引擎的数据结构，处理字符串和配置参数
 * 执行复杂的数据结构创建和初始化操作
 * 
 * 参数:
 *   param1 - 参数1（用途未明）
 *   dest_ptr - 目标数据结构指针
 *   param3 - 参数3（字符串信息）
 *   param4 - 参数4（配置标志）
 * 
 * 返回值:
 *   返回目标数据结构指针
 * 
 * 功能:
 *   - 初始化数据结构
 *   - 处理字符串参数
 *   - 创建配置项
 *   - 管理内存分配
 */
longlong * create_engine_data_structure(undefined8 param1, longlong *dest_ptr, longlong param3, undefined8 param4)
{
  undefined8 *data_ptr1;
  undefined8 *data_ptr2;
  longlong context_handle;
  longlong result;
  undefined8 config_value;
  undefined *string_ptr;
  undefined *temp_string;
  undefined1 *buffer_ptr;
  undefined4 buffer_size;
  undefined8 buffer_data;
  undefined *cleanup_ptr;
  longlong allocation_size;
  undefined4 allocation_flags;
  
  context_handle = global_data_context;
  initialize_string_builder(&temp_string, param3, param3, param4, 0, memory_allocation_flags);
  result = validate_engine_data(context_handle, &temp_string);
  temp_string = &empty_string_buffer;
  
  // 检查缓冲区状态
  if (buffer_ptr != (undefined1 *)0x0) {
    // 触发错误处理
    trigger_memory_error();
  }
  
  buffer_ptr = (undefined1 *)0x0;
  buffer_data = (ulonglong)buffer_data._4_4_ << 0x20;
  temp_string = &engine_null_string_buffer;
  
  // 初始化目标数据结构
  *dest_ptr = (longlong)&engine_null_string_buffer;
  dest_ptr[1] = 0;
  *(undefined4 *)(dest_ptr + 2) = 0;
  *dest_ptr = (longlong)&empty_string_buffer;
  dest_ptr[3] = 0;
  dest_ptr[1] = 0;
  *(undefined4 *)(dest_ptr + 2) = 0;
  
  if (result == 0) {
    // 处理默认情况
    string_ptr = &default_empty_string;
    if (*(undefined **)(param3 + 8) != (undefined *)0x0) {
      string_ptr = *(undefined **)(param3 + 8);
    }
    log_engine_message(&engine_error_log, string_ptr);
    (**(code **)(*dest_ptr + 0x10))(dest_ptr, &engine_error_target);
  }
  else {
    // 处理数据创建
    config_value = create_engine_config_data(result, &cleanup_ptr, param3, param4, 1);
    process_engine_data(dest_ptr, config_value);
    cleanup_ptr = &empty_string_buffer;
    
    if (allocation_size != 0) {
      // 触发错误处理
      trigger_memory_error();
    }
    
    allocation_size = 0;
    allocation_flags = 0;
    cleanup_ptr = &engine_null_string_buffer;
  }
  
  temp_string = &empty_string_buffer;
  buffer_data = 0;
  buffer_ptr = (undefined1 *)0x0;
  buffer_size = 0;
  
  // 处理字符串数据
  initialize_string_builder(&temp_string, *(undefined4 *)(param3 + 0x10));
  
  if (0 < *(int *)(param3 + 0x10)) {
    string_ptr = &default_empty_string;
    if (*(undefined **)(param3 + 8) != (undefined *)0x0) {
      string_ptr = *(undefined **)(param3 + 8);
    }
    // 安全复制字符串数据
    safe_memory_copy(buffer_ptr, string_ptr, (longlong)(*(int *)(param3 + 0x10) + 1));
  }
  
  if (*(longlong *)(param3 + 8) != 0) {
    buffer_size = 0;
    if (buffer_ptr != (undefined1 *)0x0) {
      *buffer_ptr = 0;
    }
  }
  
  data_ptr1 = *(undefined8 **)(context_handle + 8);
  data_ptr2 = *(undefined8 **)(context_handle + 0x10);
  
  if ((data_ptr2 == *(undefined8 **)(context_handle + 0x18)) || (data_ptr1 != data_ptr2)) {
    process_engine_data((undefined8 *)(context_handle + 8), data_ptr1, &temp_string);
  }
  else {
    *data_ptr2 = &engine_null_string_buffer;
    data_ptr2[1] = 0;
    *(undefined4 *)(data_ptr2 + 2) = 0;
    *data_ptr2 = &empty_string_buffer;
    data_ptr2[3] = 0;
    data_ptr2[1] = 0;
    *(undefined4 *)(data_ptr2 + 2) = 0;
    *(undefined4 *)(data_ptr2 + 2) = buffer_size;
    data_ptr2[1] = buffer_ptr;
    *(uint *)((longlong)data_ptr2 + 0x1c) = buffer_data._4_4_;
    *(undefined4 *)(data_ptr2 + 3) = (undefined4)buffer_data;
    buffer_size = 0;
    buffer_ptr = (undefined1 *)0x0;
    buffer_data = 0;
    *(longlong *)(context_handle + 0x10) = *(longlong)(context_handle + 0x10) + 0x20;
  }
  
  temp_string = &empty_string_buffer;
  if (buffer_ptr != (undefined1 *)0x0) {
    // 触发错误处理
    trigger_memory_error();
  }
  
  return dest_ptr;
}

/**
 * 验证引擎数据
 * 
 * 该函数负责验证引擎数据的完整性和正确性
 * 处理字符串解析和数据验证操作
 * 
 * 参数:
 *   context_ptr - 上下文指针
 *   param2 - 参数2（字符串信息）
 * 
 * 返回值:
 *   返回验证结果
 * 
 * 功能:
 *   - 解析字符串参数
 *   - 验证数据格式
 *   - 处理字符串比较
 *   - 返回验证结果
 */
longlong validate_engine_data(longlong *context_ptr, longlong param2)
{
  undefined4 validation_flags;
  char *string_ptr;
  longlong validation_result;
  undefined2 *temp_ptr;
  undefined *default_string;
  uint string_length;
  undefined *validation_buffer;
  undefined *temp_buffer;
  int buffer_size;
  undefined8 buffer_data;
  undefined *buffer_ptr;
  undefined8 buffer_info;
  undefined4 temp_flags;
  undefined8 temp_data;
  undefined *search_buffer;
  undefined2 *search_ptr;
  undefined4 search_size;
  ulonglong search_length;
  longlong search_result;
  undefined8 search_config;
  
  search_config = 0xfffffffffffffffe;
  string_length = 0;
  initialize_memory_allocator(&validation_buffer);
  
  // 处理字符串验证
  if (*(uint *)(param2 + 0x10) != 0) {
    string_ptr = *(char **)(param2 + 8);
    do {
      if (*string_ptr == ' ') {
        if (string_length != 0xffffffff) {
          validation_result = parse_string_parameter(param2, &search_buffer, 0);
          if (temp_buffer != (undefined *)0x0) {
            // 触发错误处理
            trigger_memory_error();
          }
          buffer_size = *(int *)(validation_result + 0x10);
          temp_buffer = *(undefined **)(validation_result + 8);
          buffer_data = *(undefined8 *)(validation_result + 0x18);
          *(undefined4 *)(validation_result + 0x10) = 0;
          *(undefined8 *)(validation_result + 8) = 0;
          *(undefined8 *)(validation_result + 0x18) = 0;
          search_buffer = &empty_string_buffer;
          
          if (search_ptr != (undefined2 *)0x0) {
            // 触发错误处理
            trigger_memory_error();
          }
          
          search_ptr = (undefined2 *)0x0;
          search_length = search_length & 0xffffffff00000000;
          search_buffer = &engine_null_string_buffer;
        }
        break;
      }
      string_length = string_length + 1;
      string_ptr = string_ptr + 1;
    } while (string_length < *(uint *)(param2 + 0x10));
  }
  
  buffer_ptr = &empty_string_buffer;
  buffer_info = 0;
  temp_data = 0;
  temp_flags = 0;
  search_result = *context_ptr;
  
  if ((search_result != 0) && (0 < buffer_size)) {
    search_buffer = &empty_string_buffer;
    search_length = 0;
    search_ptr = (undefined2 *)0x0;
    search_size = 0;
    temp_ptr = (undefined2 *)allocate_memory_block(global_memory_pool, 0x10, 0x13);
    *(undefined1 *)temp_ptr = 0;
    search_ptr = temp_ptr;
    validation_flags = get_string_length(temp_ptr);
    search_length = CONCAT44(search_length._4_4_, validation_flags);
    *temp_ptr = 0x2e;
    search_size = 1;
    default_string = &default_empty_string;
    if (temp_buffer != (undefined *)0x0) {
      default_string = temp_buffer;
    }
    
    // 执行字符串搜索
    search_substring(default_string, temp_ptr);
    search_buffer = &empty_string_buffer;
    // 释放搜索内存
    release_memory_block(temp_ptr);
  }
  
  temp_data = 0;
  buffer_info = 0;
  buffer_ptr = &engine_null_string_buffer;
  validation_buffer = &empty_string_buffer;
  
  if (temp_buffer != (undefined *)0x0) {
    // 触发错误处理
    trigger_memory_error();
  }
  
  return search_result;
}

/**
 * 解析引擎配置字符串
 * 
 * 该函数负责解析引擎配置字符串，处理引号和空格分隔的参数
 * 执行复杂的字符串解析和标记化操作
 * 
 * 参数:
 *   dest_ptr - 目标数据结构指针
 *   param2 - 参数2（字符串信息）
 * 
 * 返回值:
 *   返回目标数据结构指针
 * 
 * 功能:
 *   - 解析配置字符串
 *   - 处理引号内的内容
 *   - 分隔参数
 *   - 创建数据结构
 */
longlong * parse_engine_config_string(longlong *dest_ptr, longlong param2)
{
  char quote_flag;
  undefined8 *array_ptr;
  bool in_quotes;
  uint allocation_flags;
  undefined1 *string_buffer;
  ulonglong buffer_size;
  undefined1 *temp_buffer;
  uint string_length;
  longlong buffer_offset;
  uint *size_ptr;
  ulonglong total_size;
  ulonglong allocated_size;
  undefined1 *char_ptr;
  char *current_char;
  char *next_char;
  undefined *temp_string;
  undefined1 *parse_buffer;
  uint parse_length;
  undefined4 parse_flags;
  undefined4 temp_flags;
  
  // 初始化目标数据结构
  *dest_ptr = 0;
  dest_ptr[1] = 0;
  dest_ptr[2] = 0;
  *(undefined4 *)(dest_ptr + 3) = 3;
  
  next_char = "";
  if (*(char **)(param2 + 8) != (char *)0x0) {
    next_char = *(char **)(param2 + 8);
  }
  
  in_quotes = false;
  
  // 处理字符串解析
  if (*next_char != '\0') {
    do {
      string_buffer = (undefined1 *)0x0;
      temp_string = &empty_string_buffer;
      parse_flags = 0;
      parse_buffer = (undefined1 *)0x0;
      temp_flags = 0;
      parse_length = 0;
      
      current_char = next_char;
      quote_flag = *current_char;
      temp_buffer = string_buffer;
      char_ptr = temp_buffer;
      
      if (quote_flag != '\0') {
        do {
          next_char = current_char;
          
          if (quote_flag == '\"') {
            in_quotes = !in_quotes;
          }
          else {
            if ((!in_quotes) && (quote_flag == ' ')) break;
            
            string_length = (int)char_ptr + 1;
            if (string_length != 0) {
              allocation_flags = (int)char_ptr + 2;
              
              if (string_buffer == (undefined1 *)0x0) {
                if ((int)allocation_flags < 0x10) {
                  allocation_flags = 0x10;
                }
                string_buffer = (undefined1 *)allocate_memory_block(global_memory_pool, (longlong)(int)allocation_flags, 0x13);
                *string_buffer = 0;
              }
              else {
                if (allocation_flags <= (uint)buffer_size) goto SKIP_ALLOCATION;
                string_buffer = (undefined1 *)resize_memory_block(global_memory_pool, string_buffer, allocation_flags, 0x10, 0x13);
              }
              
              buffer_size = (ulonglong)string_buffer & 0xffffffffffc00000;
              if (buffer_size == 0) {
                buffer_size = (undefined1 *)0x0;
              }
              else {
                buffer_offset = ((longlong)string_buffer - buffer_size >> 0x10) * 0x50 + 0x80 + buffer_size;
                size_ptr = (uint *)(buffer_offset - (ulonglong)*(uint *)(buffer_offset + 4));
                
                if ((*(byte *)((longlong)size_ptr + 0xe) & 2) == 0) {
                  buffer_size = (undefined1 *)(ulonglong)size_ptr[7];
                  if ((undefined1 *)0x3ffffff < buffer_size) {
                    buffer_size = (undefined1 *)((ulonglong)*size_ptr << 0x10);
                  }
                }
                else {
                  total_size = (ulonglong)size_ptr[7];
                  if (total_size < 0x4000000) {
                    allocated_size = (ulonglong)size_ptr[7];
                  }
                  else {
                    allocated_size = (ulonglong)*size_ptr << 0x10;
                  }
                  
                  if (0x3ffffff < total_size) {
                    total_size = (ulonglong)*size_ptr << 0x10;
                  }
                  
                  buffer_size = (undefined1 *)
                           (total_size - ((longlong)string_buffer -
                                    (((longlong)((longlong)size_ptr + (-0x80 - buffer_size)) / 0x50) *
                                     0x10000 + buffer_size)) % allocated_size);
                }
              }
              
              parse_flags = SUB84(buffer_size, 0);
              parse_buffer = string_buffer;
            }
            
SKIP_ALLOCATION:
            char_ptr[(longlong)string_buffer] = quote_flag;
            string_buffer[string_length] = 0;
            char_ptr = (undefined1 *)(ulonglong)string_length;
            parse_length = string_length;
          }
          
          next_char = current_char + 1;
          quote_flag = *next_char;
        } while (quote_flag != '\0');
        
        next_char = current_char + 1;
      }
      
      // 处理解析结果
      array_ptr = (undefined8 *)dest_ptr[1];
      if (array_ptr < (undefined8 *)dest_ptr[2]) {
        dest_ptr[1] = (longlong)(array_ptr + 4);
        *array_ptr = &engine_null_string_buffer;
        array_ptr[1] = 0;
        *(undefined4 *)(array_ptr + 2) = 0;
        *array_ptr = &empty_string_buffer;
        array_ptr[3] = 0;
        array_ptr[1] = 0;
        *(undefined4 *)(array_ptr + 2) = 0;
        
        // 格式化字符串长度
        format_string_length(array_ptr, char_ptr);
        
        if ((int)char_ptr != 0) {
          // 安全复制字符串
          safe_memory_copy(array_ptr[1], string_buffer, (int)char_ptr + 1);
        }
        
        if (string_buffer != (undefined1 *)0x0) {
          *(undefined4 *)(array_ptr + 2) = 0;
          if ((undefined1 *)array_ptr[1] != (undefined1 *)0x0) {
            *(undefined1 *)array_ptr[1] = 0;
          }
          *(undefined4 *)((longlong)array_ptr + 0x1c) = 0;
        }
      }
      else {
        // 扩展数组
        expand_engine_array(dest_ptr, &temp_string);
        string_buffer = parse_buffer;
      }
      
      temp_string = &empty_string_buffer;
      if (string_buffer != (undefined1 *)0x0) {
        // 释放字符串缓冲区
        release_memory_block(string_buffer);
      }
      
      parse_buffer = (undefined1 *)0x0;
      parse_flags = 0;
      temp_string = &engine_null_string_buffer;
    } while (*next_char != '\0');
    
    if (in_quotes) {
      log_engine_error(&engine_config_error);
      cleanup_engine_data(dest_ptr);
    }
  }
  
  if (*dest_ptr != dest_ptr[1]) {
    optimize_engine_array(dest_ptr);
  }
  
  return dest_ptr;
}

/**
 * 处理引擎文件扩展名
 * 
 * 该函数负责处理引擎文件扩展名，执行文件名分析和处理
 * 处理复杂的文件名解析和扩展名操作
 * 
 * 参数:
 *   param1 - 参数1（用途未明）
 *   dest_ptr - 目标数据结构指针
 *   param3 - 参数3（文件名信息）
 * 
 * 返回值:
 *   返回目标数据结构指针
 * 
 * 功能:
 *   - 解析文件名
 *   - 处理扩展名
 *   - 创建数据结构
 *   - 管理内存分配
 */
longlong * process_engine_file_extension(undefined8 param1, longlong *dest_ptr, undefined8 param3)
{
  undefined8 *array_ptr;
  undefined8 context_data;
  longlong string_offset;
  longlong **data_ptr_ptr;
  longlong temp_var;
  longlong loop_var;
  ulonglong array_size;
  uint file_count;
  longlong *file_ptr;
  int file_index;
  undefined8 *file_array;
  longlong *temp_file_ptr;
  longlong *file_data_ptr;
  ulonglong file_size;
  longlong *current_file;
  uint current_index;
  undefined *file_string;
  undefined1 *filename_buffer;
  uint filename_length;
  ulonglong buffer_size;
  undefined *extension_buffer;
  longlong string_pos;
  uint string_flags;
  undefined8 string_data;
  undefined *temp_buffer;
  longlong allocation_size;
  undefined4 allocation_flags;
  
  context_data = global_data_context;
  string_data = 0xfffffffffffffffe;
  file_ptr = (longlong *)0x0;
  allocation_flags = 0;
  
  // 初始化字符串处理器
  initialize_string_processor(&temp_buffer, param3);
  temp_var = file_ptr;
  file_data_ptr = file_ptr;
  
  // 处理字符串数据
  if (filename_length != 0) {
    do {
      // 转换特殊字符
      if ((byte)(*(char *)(string_pos + (longlong)file_data_ptr) + 0xbfU) < 0x1a) {
        *(char *)(string_pos + (longlong)file_data_ptr) = *(char *)(string_pos + (longlong)file_data_ptr) + ' ';
      }
      
      file_count = (int)temp_var + 1;
      temp_var = (longlong *)(ulonglong)file_count;
      file_data_ptr = (longlong *)((longlong)file_data_ptr + 1);
    } while (file_count < filename_length);
  }
  
  // 初始化第二个字符串处理器
  initialize_string_processor(&extension_buffer, param3);
  temp_var = file_ptr;
  file_data_ptr = file_ptr;
  
  if (current_index != 0) {
    do {
      // 转换特殊字符
      if ((byte)(*(char *)(allocation_size + (longlong)file_data_ptr) + 0xbfU) < 0x1a) {
        *(char *)(allocation_size + (longlong)file_data_ptr) = *(char *)(allocation_size + (longlong)file_data_ptr) + ' ';
      }
      
      file_count = (int)temp_var + 1;
      temp_var = (longlong *)(ulonglong)file_count;
      file_data_ptr = (longlong *)((longlong)file_data_ptr + 1);
    } while (file_count < current_index);
  }
  
  file_index = filename_length - 1;
  string_offset = (longlong)file_index;
  
  if (-1 < file_index) {
    do {
      if (*(char *)(string_pos + string_offset) == '.') {
        if (file_index != -1) {
          string_offset = parse_string_parameter(&temp_buffer, &temp_file_ptr, 0, file_index);
          if (string_pos != 0) {
            // 触发错误处理
            trigger_memory_error();
          }
          filename_length = *(uint *)(string_offset + 0x10);
          string_pos = *(longlong *)(string_offset + 8);
          string_data = *(undefined8 *)(string_offset + 0x18);
          *(undefined4 *)(string_offset + 0x10) = 0;
          *(undefined8 *)(string_offset + 8) = 0;
          *(undefined8 *)(string_offset + 0x18) = 0;
          temp_file_ptr = (longlong *)&empty_string_buffer;
          
          if (file_data_ptr != (longlong *)0x0) {
            // 触发错误处理
            trigger_memory_error();
          }
          
          file_data_ptr = (longlong *)0x0;
          string_flags = 0;
          temp_file_ptr = (longlong *)&engine_null_string_buffer;
          
          string_offset = parse_string_parameter(&extension_buffer, &temp_file_ptr, file_index + 1, current_index);
          if (allocation_size != 0) {
            // 触发错误处理
            trigger_memory_error();
          }
          current_index = *(uint *)(string_offset + 0x10);
          allocation_size = *(longlong *)(string_offset + 8);
          file_size = *(ulonglong *)(string_offset + 0x18);
          *(undefined4 *)(string_offset + 0x10) = 0;
          *(undefined8 *)(string_offset + 8) = 0;
          *(undefined8 *)(string_offset + 0x18) = 0;
          temp_file_ptr = (longlong *)&empty_string_buffer;
          
          if (file_data_ptr != (longlong *)0x0) {
            // 触发错误处理
            trigger_memory_error();
          }
          
          file_data_ptr = (longlong *)0x0;
          string_flags = 0;
          temp_file_ptr = (longlong *)&engine_null_string_buffer;
          goto PROCESS_EXTENSION;
        }
        break;
      }
      
      file_index = file_index + -1;
      string_offset = string_offset + -1;
    } while (-1 < string_offset);
  }
  
  // 处理默认情况
  (**(code **)(temp_buffer + 0x10))(&temp_buffer, &default_empty_string);
  
PROCESS_EXTENSION:
  // 初始化目标数据结构
  *dest_ptr = 0;
  dest_ptr[1] = 0;
  dest_ptr[2] = 0;
  *(undefined4 *)(dest_ptr + 3) = 3;
  allocation_flags = 1;
  string_offset = validate_engine_data(context_data, &temp_buffer);
  
  if (string_offset != 0) {
    temp_file_ptr = (longlong *)0x0;
    file_data_ptr = (longlong *)0x0;
    current_file = (longlong *)0x0;
    string_flags = 3;
    data_ptr_ptr = (longlong **)create_engine_data_array(string_offset, &temp_buffer, &extension_buffer);
    current_file = (longlong *)0x0;
    temp_var = file_ptr;
    
    if (&temp_file_ptr != data_ptr_ptr) {
      file_string = (undefined *)0x0;
      string_pos = 0;
      file_size = 0;
      string_data = CONCAT44((int)((ulonglong)string_data >> 0x20), 3);
      current_file = *data_ptr_ptr;
      *data_ptr_ptr = (longlong *)0x0;
      temp_var = data_ptr_ptr[1];
      data_ptr_ptr[1] = (longlong *)0x0;
      current_file = data_ptr_ptr[2];
      data_ptr_ptr[2] = (longlong *)0x0;
      string_flags = *(undefined4 *)(data_ptr_ptr + 3);
      *(undefined4 *)(data_ptr_ptr + 3) = 3;
      temp_file_ptr = current_file;
      file_data_ptr = temp_var;
    }
    
    if (temp_buffer != (undefined *)0x0) {
      // 触发错误处理
      trigger_memory_error();
    }
    
    current_index = 0;
    array_size = (longlong)temp_var - (longlong)current_file >> 3;
    file_size = array_size;
    
    if (array_size != 0) {
      do {
        loop_var = 0;
        string_offset = *current_file;
        file_string = &empty_string_buffer;
        buffer_size = 0;
        filename_buffer = (undefined1 *)0x0;
        filename_length = 0;
        
        // 格式化字符串长度
        format_string_length(&file_string, *(undefined4 *)(string_offset + 0x10));
        
        allocation_flags = filename_length;
        if (*(int *)(string_offset + 0x10) != 0) {
          // 安全复制字符串
          safe_memory_copy(filename_buffer, *(undefined8 *)(string_offset + 8), *(int *)(string_offset + 0x10) + 1);
        }
        
        if (*(longlong *)(string_offset + 8) != 0) {
          filename_length = 0;
          if (filename_buffer != (undefined1 *)0x0) {
            *filename_buffer = 0;
          }
          buffer_size = buffer_size & 0xffffffff;
        }
        
        if (0 < (int)allocation_flags) {
          file_string = &empty_string_buffer;
          string_data = 0;
          string_pos = 0;
          file_size = file_size & 0xffffffff00000000;
          allocation_flags = 3;
          array_size = (ulonglong)allocation_flags;
          
          if (string_pos != 0) {
            format_string_length(&file_string, array_size);
          }
          
          if (filename_length != 0) {
            // 安全复制字符串
            safe_memory_copy(string_pos, string_pos, array_size);
          }
          
          file_size = file_size & 0xffffffff00000000;
          if (string_pos != 0) {
            *(undefined1 *)(array_size + string_pos) = 0;
          }
          
          string_data._4_4_ = string_data._4_4_;
          format_string_length(&file_string, 1);
          *(undefined2 *)((file_size & 0xffffffff) + string_pos) = 0x2e;
          file_size = CONCAT44(file_size._4_4_, 1);
          
          string_offset = process_string_concatenation(&file_string, &temp_buffer, *current_file);
          if (filename_buffer != (undefined1 *)0x0) {
            // 触发错误处理
            trigger_memory_error();
          }
          
          filename_length = *(uint *)(string_offset + 0x10);
          filename_buffer = *(undefined1 **)(string_offset + 8);
          buffer_size = *(ulonglong *)(string_offset + 0x18);
          *(undefined4 *)(string_offset + 0x10) = 0;
          *(undefined8 *)(string_offset + 8) = 0;
          *(undefined8 *)(string_offset + 0x18) = 0;
          temp_buffer = &empty_string_buffer;
          
          if (allocation_size != 0) {
            // 触发错误处理
            trigger_memory_error();
          }
          
          allocation_size = 0;
          allocation_flags = 0;
          temp_buffer = &engine_null_string_buffer;
          file_string = &empty_string_buffer;
          allocation_flags = 1;
          
          if (string_pos != 0) {
            // 触发错误处理
            trigger_memory_error();
          }
          
          string_pos = 0;
          string_data = (ulonglong)string_data._4_4_ << 0x20;
          file_string = &engine_null_string_buffer;
        }
        
        if (*(int *)(*current_file + 0x20) == 0) {
          filename_length = filename_length + 1;
          format_string_length(&file_string, filename_length);
          *(undefined2 *)(filename_buffer + filename_length) = 0x2e;
          filename_length = filename_length;
        }
        
        array_size = dest_ptr[1];
        if (array_size < (ulonglong)dest_ptr[2]) {
          dest_ptr[1] = array_size + 0x20;
          initialize_memory_allocator(array_size, &file_string);
          current_index = (uint)file_ptr;
        }
        else {
          string_offset = (longlong)(array_size - *dest_ptr) >> 5;
          if (string_offset == 0) {
            string_offset = 1;
REALLOCATE_ARRAY:
            loop_var = allocate_memory_block(global_memory_pool, string_offset << 5, (char)dest_ptr[3]);
            array_size = dest_ptr[1];
          }
          else {
            string_offset = string_offset * 2;
            if (string_offset != 0) goto REALLOCATE_ARRAY;
          }
          
          temp_var = resize_engine_array(*dest_ptr, array_size, loop_var);
          initialize_memory_allocator(temp_var, &file_string);
          array_ptr = (undefined8 *)dest_ptr[1];
          file_size = array_size;
          
          for (file_array = (undefined8 *)*dest_ptr; array_size = file_size, file_array != array_ptr;
              file_array = file_array + 4) {
            (**(code **)*file_array)(file_array, 0);
            array_size = file_size;
          }
          
          if (*dest_ptr != 0) {
            // 触发错误处理
            trigger_memory_error();
          }
          
          *dest_ptr = loop_var;
          dest_ptr[1] = temp_var + 0x20;
          dest_ptr[2] = string_offset * 0x20 + loop_var;
        }
        
        file_string = &empty_string_buffer;
        if (filename_buffer != (undefined1 *)0x0) {
          // 触发错误处理
          trigger_memory_error();
        }
        
        filename_buffer = (undefined1 *)0x0;
        buffer_size = buffer_size & 0xffffffff00000000;
        file_string = &engine_null_string_buffer;
        current_index = current_index + 1;
        file_ptr = (longlong *)(ulonglong)current_index;
        current_file = current_file + 1;
      } while ((ulonglong)(longlong)(int)current_index < file_size);
    }
    
    if (temp_file_ptr != (longlong *)0x0) {
      // 触发错误处理
      trigger_memory_error();
    }
  }
  
  // 优化数据结构
  optimize_engine_data(*dest_ptr, dest_ptr[1], 0);
  extension_buffer = &empty_string_buffer;
  
  if (allocation_size != 0) {
    // 触发错误处理
    trigger_memory_error();
  }
  
  allocation_size = 0;
  file_size = file_size & 0xffffffff00000000;
  extension_buffer = &engine_null_string_buffer;
  temp_buffer = &empty_string_buffer;
  
  if (string_pos != 0) {
    // 触发错误处理
    trigger_memory_error();
  }
  
  return dest_ptr;
}

/**
 * 创建引擎配置数据
 * 
 * 该函数负责创建引擎配置数据，处理各种配置参数
 * 执行配置数据的创建和初始化操作
 * 
 * 参数:
 *   param1 - 参数1（用途未明）
 *   dest_ptr - 目标数据结构指针
 *   param3 - 参数3（配置信息）
 *   param4 - 参数4（配置标志）
 * 
 * 返回值:
 *   返回目标数据结构指针
 * 
 * 功能:
 *   - 初始化配置数据
 *   - 处理配置参数
 *   - 创建数据结构
 *   - 管理内存分配
 */
undefined8 * create_engine_config_data(undefined8 *param1, undefined8 *dest_ptr, undefined8 param3, undefined8 param4)
{
  undefined8 config_data;
  undefined8 time_data;
  undefined4 config_flags;
  undefined8 allocation_size;
  undefined1 temp_buffer[32];
  
  allocation_size = 0xfffffffffffffffe;
  *dest_ptr = 0;
  dest_ptr[1] = 0;
  dest_ptr[2] = 0;
  *(undefined4 *)(dest_ptr + 3) = 3;
  config_flags = 1;
  config_data = *param1;
  time_data = get_current_time();
  time_data = initialize_memory_allocator(temp_buffer, time_data);
  process_engine_config(config_data, dest_ptr, time_data, param4, config_flags, allocation_size);
  return dest_ptr;
}

/**
 * 处理引擎配置数据
 * 
 * 该函数负责处理引擎配置数据，根据输入参数创建相应的配置
 * 处理不同类型的配置数据和参数
 * 
 * 参数:
 *   param1 - 参数1（用途未明）
 *   dest_ptr - 目标数据结构指针
 *   param3 - 参数3（配置信息）
 *   param4 - 参数4（配置标志）
 * 
 * 返回值:
 *   返回目标数据结构指针
 * 
 * 功能:
 *   - 处理配置参数
 *   - 创建配置数据
 *   - 初始化数据结构
 *   - 管理内存分配
 */
undefined8 * process_engine_config_data(longlong *param1, undefined8 *dest_ptr, undefined8 param3, undefined8 param4)
{
  undefined8 config_data;
  undefined *temp_string;
  undefined8 temp_data;
  undefined4 temp_flags;
  undefined8 buffer_info;
  
  if (*param1 == 0) {
    if (param1[1] == 0) {
      if (param1[2] == 0) {
        config_data = get_current_time();
        initialize_memory_allocator(dest_ptr, config_data);
      }
      else {
        config_data = get_current_time();
        process_string_concatenation(config_data, dest_ptr, param1[2]);
      }
    }
    else {
      temp_string = &empty_string_buffer;
      buffer_info = 0;
      temp_data = 0;
      temp_flags = 0;
      process_numeric_data(&temp_string, &engine_config_target, (double)*(float *)param1[1], param4, 0, memory_allocation_flags);
      *dest_ptr = &engine_null_string_buffer;
      dest_ptr[1] = 0;
      *(undefined4 *)(dest_ptr + 2) = 0;
      *dest_ptr = &empty_string_buffer;
      *(undefined4 *)(dest_ptr + 2) = temp_flags;
      dest_ptr[1] = temp_data;
      *(undefined4 *)((longlong)dest_ptr + 0x1c) = buffer_info._4_4_;
      *(undefined4 *)(dest_ptr + 3) = (undefined4)buffer_info;
    }
  }
  else {
    config_data = get_current_time();
    process_engine_parameter(config_data, dest_ptr, *(undefined4 *)*param1);
  }
  
  return dest_ptr;
}

// 文件结束