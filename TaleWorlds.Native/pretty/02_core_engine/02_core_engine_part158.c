#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part158.c - 核心引擎模块第158部分
// 本文件包含6个函数，主要处理字符串操作、内存管理和数据结构初始化

// 函数：处理字符串比较和内存分配
// 原始函数名：FUN_18013f4b0
void process_string_comparison_and_memory_allocation(longlong context_ptr, uint64_t param_2, 
                                                    longlong target_ptr, uint64_t flag_param,
                                                    longlong source_ptr)
{
  byte current_char;
  byte *string_ptr;
  uint char_value;
  int32_t comparison_result;
  longlong allocated_memory;
  
  // 检查标志位和指针有效性
  if (((char)flag_param == '\0') && (target_ptr != context_ptr)) {
    if (*(int *)(target_ptr + 0x30) == 0) {
    comparison_failed:
      comparison_result = 1;
      goto finalize_allocation;
    }
    if (*(int *)(source_ptr + 0x10) != 0) {
      string_ptr = *(byte **)(target_ptr + 0x28);
      allocated_memory = *(longlong *)(source_ptr + 8) - (longlong)string_ptr;
      // 执行字符串比较
      do {
        current_char = *string_ptr;
        char_value = (uint)string_ptr[allocated_memory];
        if (current_char != char_value) break;
        string_ptr = string_ptr + 1;
      } while (char_value != 0);
      if ((int)(current_char - char_value) < 1) goto comparison_failed;
    }
  }
  comparison_result = 0;
finalize_allocation:
  // 分配内存并初始化
  allocated_memory = allocate_memory_structure(system_memory_pool_ptr, 0x48, *(int8_t *)(context_ptr + 0x28), 
                                             flag_param, 0xfffffffffffffffe);
  copy_memory_data(allocated_memory + 0x20, source_ptr);
  *(uint64_t *)(allocated_memory + 0x40) = 0;
  // 调用处理函数（不返回）
  process_allocated_structure(allocated_memory, target_ptr, context_ptr, comparison_result);
}



// 函数：构建格式化字符串缓冲区
// 原始函数名：FUN_18013f590
uint64_t *build_formatted_string_buffer(longlong data_source, uint64_t *buffer_ptr, 
                                         uint64_t param_3, uint64_t param_4)
{
  int item_count;
  longlong base_offset;
  uint loop_counter;
  ulonglong total_items;
  ulonglong current_index;
  int32_t format_flag;
  uint64_t separator_flag;
  
  separator_flag = 0xfffffffffffffffe;
  total_items = 0;
  *buffer_ptr = &EMPTY_STRING_PTR;
  buffer_ptr[1] = 0;
  *(int32_t *)(buffer_ptr + 2) = 0;
  *buffer_ptr = &STRING_TERMINATOR;
  buffer_ptr[3] = 0;
  buffer_ptr[1] = 0;
  *(int32_t *)(buffer_ptr + 2) = 0;
  format_flag = 1;
  base_offset = *(longlong *)(data_source + 0x888);
  current_index = total_items;
  // 处理数据项循环
  if (*(longlong *)(data_source + 0x890) - base_offset >> 5 != 1) {
    do {
      item_count = *(int *)(current_index + 0x10 + base_offset);
      if (0 < item_count) {
        expand_buffer_capacity(buffer_ptr, *(int *)(buffer_ptr + 2) + item_count);
        // 复制数据到缓冲区（不返回）
        copy_data_to_buffer((ulonglong)*(uint *)(buffer_ptr + 2) + buffer_ptr[1], 
                           *(uint64_t *)(current_index + 8 + base_offset),
                           (longlong)(*(int *)(current_index + 0x10 + base_offset) + 1), 
                           param_4, format_flag, separator_flag);
      }
      item_count = *(int *)(buffer_ptr + 2) + 1;
      expand_buffer_capacity(buffer_ptr, item_count);
      // 添加分隔符
      *(int16_t *)((ulonglong)*(uint *)(buffer_ptr + 2) + buffer_ptr[1]) = 0x2a; // '*'
      *(int *)(buffer_ptr + 2) = item_count;
      loop_counter = (int)total_items + 1;
      total_items = (ulonglong)loop_counter;
      base_offset = *(longlong *)(data_source + 0x888);
      current_index = current_index + 0x20;
    } while ((ulonglong)(longlong)(int)loop_counter < (*(longlong *)(data_source + 0x890) - base_offset >> 5) - 1U);
  }
  base_offset = *(longlong *)(data_source + 0x890);
  // 处理最后一项
  if (*(int *)(base_offset + -0x10) < 1) {
    return buffer_ptr;
  }
  expand_buffer_capacity(buffer_ptr, *(int *)(buffer_ptr + 2) + *(int *)(base_offset + -0x10));
  // 复制最后一项数据（不返回）
  copy_data_to_buffer((ulonglong)*(uint *)(buffer_ptr + 2) + buffer_ptr[1], 
                     *(uint64_t *)(base_offset + -0x18),
                     (longlong)(*(int *)(base_offset + -0x10) + 1));
}



// 全局变量警告：以下全局变量地址重叠
// 警告：以'_'开头的全局变量与同一地址的较小符号重叠



// 函数：处理模块路径和配置
// 原始函数名：FUN_18013f6f0
void process_module_path_and_configuration(longlong module_context)
{
  longlong temp_offset;
  int config_result;
  int32_t string_length;
  uint64_t buffer_handle;
  uint64_t *string_buffer;
  longlong path_length;
  void *default_path;
  int8_t security_buffer [32];
  int32_t operation_flag;
  void *stack_ptr;
  uint64_t *buffer_ptr;
  int32_t buffer_size;
  uint64_t temp_value;
  uint64_t security_param;
  void **ptr_to_stack_ptr;
  void *string_start;
  int8_t *string_data;
  int32_t data_size;
  int8_t temp_string [16];
  char path_buffer [256];
  ulonglong security_hash;
  
  security_param = 0xfffffffffffffffe;
  security_hash = GET_SECURITY_COOKIE() ^ (ulonglong)security_buffer;
  operation_flag = 0;
  initialize_module_component(module_context + 0x20, system_main_module_state + 0x290);
  ptr_to_stack_ptr = &stack_ptr;
  buffer_handle = create_string_buffer(&stack_ptr, module_context + 0x20);
  config_result = lookup_configuration_entry(module_context, buffer_handle);
  // 检查配置结果
  if (*(char *)((longlong)config_result + *(longlong *)(module_context + 0x8c8)) == '\0') {
    initialize_module_component(module_context + 0x438, (longlong)config_result * 0x20 + *(longlong *)(module_context + 0x888));
    // 执行安全检查（不返回）
    perform_security_check(security_hash ^ (ulonglong)security_buffer);
  }
  stack_ptr = &STRING_TERMINATOR;
  temp_value = 0;
  buffer_ptr = (uint64_t *)0x0;
  buffer_size = 0;
  string_buffer = (uint64_t *)allocate_memory_structure(system_memory_pool_ptr, 0x10, 0x13);
  *(int8_t *)string_buffer = 0;
  buffer_ptr = string_buffer;
  string_length = get_string_length(string_buffer);
  temp_value = CONCAT44(temp_value._4_4_, string_length);
  *string_buffer = 0x2f73656c75646f4d; // "/Modules"
  *(int8_t *)(string_buffer + 1) = 0;
  buffer_size = 8;
  default_path = &DEFAULT_PATH_PTR;
  if (*(void **)(module_context + 0x28) != (void *)0x0) {
    default_path = *(void **)(module_context + 0x28);
  }
  // 构建完整路径
  format_path_string(path_buffer, &PATH_FORMAT_PTR, string_buffer, default_path);
  string_start = &MODULE_PREFIX_PTR;
  string_data = temp_string;
  temp_string[0] = 0;
  data_size = 6;
  copy_string_safely(temp_string, 0x10, &MODULE_TYPE_PTR);
  operation_flag = 1;
  initialize_module_component(module_context + 0x438, &string_start);
  operation_flag = 0;
  string_start = &EMPTY_STRING_PTR;
  temp_offset = -1;
  // 计算路径长度
  do {
    path_length = temp_offset;
    temp_offset = path_length + 1;
  } while (path_buffer[path_length + 1] != '\0');
  config_result = (int)(path_length + 1);
  // 检查缓冲区容量
  if ((0 < config_result) && (*(uint *)(module_context + 0x448) + config_result < 0x3ff)) {
    // 复制路径数据（不返回）
    copy_memory_data((ulonglong)*(uint *)(module_context + 0x448) + *(longlong *)(module_context + 0x440), 
                   path_buffer, (longlong)((int)path_length + 2));
  }
  stack_ptr = &STRING_TERMINATOR;
  // 释放字符串缓冲区（不返回）
  release_string_buffer(string_buffer);
}



// 函数：初始化引擎系统
// 原始函数名：FUN_18013f940
void initialize_engine_system(void)

{
  // 执行引擎初始化（不返回）
  execute_engine_initialization();
}



// 函数：初始化数据结构指针
// 原始函数名：FUN_180141660
uint64_t *initialize_data_structure_pointers(uint64_t *data_structure)
{
  uint64_t *return_ptr;
  
  // 初始化基础数据结构
  *data_structure = 0;
  data_structure[1] = 0;
  data_structure[2] = 0;
  *(int32_t *)(data_structure + 3) = 3;
  data_structure[4] = &EMPTY_STRING_PTR;
  data_structure[5] = 0;
  *(int32_t *)(data_structure + 6) = 0;
  data_structure[4] = &STRING_BUFFER_PTR;
  data_structure[5] = data_structure + 7;
  *(int32_t *)(data_structure + 6) = 0;
  *(int8_t *)(data_structure + 7) = 0;
  
  // 初始化索引87-8A的数据结构
  data_structure[0x87] = &EMPTY_STRING_PTR;
  data_structure[0x88] = 0;
  *(int32_t *)(data_structure + 0x89) = 0;
  data_structure[0x87] = &STRING_BUFFER_PTR;
  data_structure[0x88] = data_structure + 0x8a;
  *(int32_t *)(data_structure + 0x89) = 0;
  *(int8_t *)(data_structure + 0x8a) = 0;
  
  // 初始化10B-110的数据结构
  return_ptr = data_structure + 0x10b;
  data_structure[0x10e] = 0;
  *(int32_t *)(data_structure + 0x110) = 3;
  *return_ptr = return_ptr;
  data_structure[0x10c] = return_ptr;
  data_structure[0x10d] = 0;
  *(int8_t *)(data_structure + 0x10e) = 0;
  data_structure[0x10f] = 0;
  data_structure[0x111] = 0;
  data_structure[0x112] = 0;
  data_structure[0x113] = 0;
  *(int32_t *)(data_structure + 0x114) = 3;
  data_structure[0x115] = 0;
  data_structure[0x116] = 0;
  data_structure[0x117] = 0;
  *(int32_t *)(data_structure + 0x118) = 3;
  data_structure[0x119] = 0;
  data_structure[0x11a] = 0;
  data_structure[0x11b] = 0;
  *(int32_t *)(data_structure + 0x11c) = 3;
  
  // 初始化11D-122的数据结构
  return_ptr = data_structure + 0x11d;
  data_structure[0x120] = 0;
  *(int32_t *)(data_structure + 0x122) = 3;
  *return_ptr = return_ptr;
  data_structure[0x11e] = return_ptr;
  data_structure[0x11f] = 0;
  *(int8_t *)(data_structure + 0x120) = 0;
  data_structure[0x121] = 0;
  data_structure[0x123] = &EMPTY_STRING_PTR;
  data_structure[0x124] = 0;
  *(int32_t *)(data_structure + 0x125) = 0;
  data_structure[0x123] = &STRING_TERMINATOR;
  data_structure[0x126] = 0;
  data_structure[0x124] = 0;
  *(int32_t *)(data_structure + 0x125) = 0;
  
  // 初始化127-12A的数据结构
  return_ptr = data_structure + 0x127;
  data_structure[0x12a] = 0;
  *(int32_t *)(data_structure + 300) = 3;
  *return_ptr = return_ptr;
  data_structure[0x128] = return_ptr;
  data_structure[0x129] = 0;
  *(int8_t *)(data_structure + 0x12a) = 0;
  data_structure[299] = 0;
  
  // 初始化12D-132的数据结构
  return_ptr = data_structure + 0x12d;
  data_structure[0x130] = 0;
  *(int32_t *)(data_structure + 0x132) = 3;
  *return_ptr = return_ptr;
  data_structure[0x12e] = return_ptr;
  data_structure[0x12f] = 0;
  *(int8_t *)(data_structure + 0x130) = 0;
  data_structure[0x131] = 0;
  
  // 设置标志位
  *(int8_t *)(data_structure + 0x10a) = 0;
  return data_structure;
}

// 警告：移除不可达的代码块 (ram,0x0001801420ee)
// 警告：移除不可达的代码块 (ram,0x0001801420f4)
// 警告：移除不可达的代码块 (ram,0x0001801420fe)
// 警告：移除不可达的代码块 (ram,0x000180142103)
// 警告：移除不可达的代码块 (ram,0x000180142117)
// 警告：移除不可达的代码块 (ram,0x000180142121)
// 警告：移除不可达的代码块 (ram,0x00018014212d)
// 警告：移除不可达的代码块 (ram,0x000180142134)
// 警告：移除不可达的代码块 (ram,0x000180141aab)
// 警告：移除不可达的代码块 (ram,0x000180141ab3)
// 警告：移除不可达的代码块 (ram,0x000180141ab9)
// 警告：移除不可达的代码块 (ram,0x000180141ac6)
// 警告：移除不可达的代码块 (ram,0x000180141af9)
// 警告：移除不可达的代码块 (ram,0x000180141b01)
// 警告：移除不可达的代码块 (ram,0x000180141b04)
// 警告：移除不可达的代码块 (ram,0x000180141ad0)
// 警告：移除不可达的代码块 (ram,0x000180141ad5)
// 警告：移除不可达的代码块 (ram,0x000180141b1e)
// 警告：移除不可达的代码块 (ram,0x000180141b2f)
// 警告：移除不可达的代码块 (ram,0x000180141b49)
// 警告：移除不可达的代码块 (ram,0x000180141b4e)
// 警告：移除不可达的代码块 (ram,0x000180141baf)
// 警告：移除不可达的代码块 (ram,0x000180141bb7)
// 警告：全局变量以'_'开头与同一地址的较小符号重叠

// 函数：处理路径规范化
// 原始函数名：FUN_180141820
ulonglong process_path_normalization(longlong *path_data)
{
  char current_char;
  int32_t temp_result;
  int comparison_result;
  uint buffer_size;
  uint required_size;
  int string_length;
  uint64_t *main_buffer;
  int16_t *path_separator;
  int8_t *string_buffer;
  int8_t *temp_string_ptr;
  longlong current_offset;
  uint char_code;
  ulonglong loop_counter;
  ulonglong path_length;
  ulonglong normalized_length;
  ulonglong total_chars;
  void *stack_buffer_c0;
  int8_t *path_string;
  uint path_size;
  uint64_t temp_value;
  void *stack_buffer_a0;
  uint64_t *buffer_ptr;
  int32_t buffer_flag;
  ulonglong buffer_capacity;
  void *stack_buffer_80;
  int16_t *separator_ptr;
  int32_t separator_size;
  uint64_t separator_value;
  void *stack_buffer_60;
  int8_t *char_buffer;
  int32_t char_buffer_size;
  ulonglong buffer_handle;
  uint64_t security_param;
  
  security_param = 0xfffffffffffffffe;
  initialize_string_buffer(&stack_buffer_c0);
  stack_buffer_a0 = &STRING_TERMINATOR;
  buffer_capacity = 0;
  buffer_ptr = (uint64_t *)0x0;
  buffer_flag = 0;
  main_buffer = (uint64_t *)allocate_memory_structure(system_memory_pool_ptr, 0x10, 0x13);
  *(int8_t *)main_buffer = 0;
  buffer_ptr = main_buffer;
  temp_result = get_string_length(main_buffer);
  buffer_capacity = CONCAT44(buffer_capacity._4_4_, temp_result);
  *main_buffer = 0x73656c75646f4d2f; // "Modules/"
  *(int16_t *)(main_buffer + 1) = 0x2f; // "/"
  buffer_flag = 9;
  comparison_result = compare_string_paths(&stack_buffer_c0, &stack_buffer_a0);
  path_length = 0;
  // 处理路径数据
  if ((comparison_result < 0) && (path_data[1] - *path_data >> 5 != 0)) {
    stack_buffer_80 = &STRING_TERMINATOR;
    separator_value = 0;
    separator_ptr = (int16_t *)0x0;
    separator_size = 0;
    path_separator = (int16_t *)allocate_memory_structure(system_memory_pool_ptr, 0x10, 0x13);
    *(int8_t *)path_separator = 0;
    separator_ptr = path_separator;
    temp_result = get_string_length(path_separator);
    separator_value = CONCAT44(separator_value._4_4_, temp_result);
    *path_separator = 0x2f; // "/"
    separator_size = 1;
    current_offset = *path_data;
    temp_string_ptr = (int8_t *)0x0;
    stack_buffer_60 = &STRING_TERMINATOR;
    buffer_handle = 0;
    char_buffer = (int8_t *)0x0;
    char_buffer_size = 0;
    string_buffer = (int8_t *)allocate_memory_structure(system_memory_pool_ptr, 0x10, 0x13);
    *string_buffer = 0;
    char_buffer = string_buffer;
    buffer_size = get_string_length(string_buffer);
    *string_buffer = *(int8_t *)path_separator;
    char_buffer_size = 1;
    string_buffer[1] = 0;
    buffer_handle = (ulonglong)buffer_size;
    comparison_result = *(int *)(current_offset + 0x10);
    if (comparison_result < 1) {
      if (string_buffer != (int8_t *)0x0) {
        temp_string_ptr = (int8_t *)allocate_memory_structure(system_memory_pool_ptr, 0x10, 0x13);
        *temp_string_ptr = 0;
        get_string_length(temp_string_ptr);
      }
      // 复制字符串数据（不返回）
      copy_memory_data(temp_string_ptr, string_buffer, 1);
    }
    if ((comparison_result != -1) && (buffer_size < comparison_result + 2U)) {
      string_buffer = (int8_t *)expand_memory_buffer(system_memory_pool_ptr, string_buffer, 
                                                         comparison_result + 2U, 0x10, 0x13);
      char_buffer = string_buffer;
      temp_result = get_string_length(string_buffer);
      buffer_handle = CONCAT44(buffer_handle._4_4_, temp_result);
      comparison_result = *(int *)(current_offset + 0x10);
    }
    // 复制路径数据（不返回）
    copy_memory_data(string_buffer + 1, *(uint64_t *)(current_offset + 8), 
                   (longlong)(comparison_result + 1));
  }
  current_offset = concatenate_string_buffers(&stack_buffer_80, &stack_buffer_c0);
  if (path_string != (int8_t *)0x0) {
    // 释放字符串缓冲区（不返回）
    release_string_buffer();
  }
  path_size = *(uint *)(current_offset + 0x10);
  path_string = *(int8_t **)(current_offset + 8);
  buffer_size = *(uint *)(current_offset + 0x18);
  temp_value = *(uint64_t *)(current_offset + 0x18);
  *(int32_t *)(current_offset + 0x10) = 0;
  *(uint64_t *)(current_offset + 8) = 0;
  *(uint64_t *)(current_offset + 0x18) = 0;
  stack_buffer_80 = &STRING_TERMINATOR;
  if (separator_ptr != (int16_t *)0x0) {
    // 释放字符串缓冲区（不返回）
    release_string_buffer();
  }
  separator_ptr = (int16_t *)0x0;
  separator_value = (ulonglong)separator_value._4_4_ << 0x20;
  stack_buffer_80 = &EMPTY_STRING_PTR;
  normalized_length = (ulonglong)path_size;
  // 检查路径结尾
  if (((0 < (int)path_size) && (path_string[(int)(path_size - 1)] == '/')) &&
     (path_string[(longlong)(int)(path_size - 1) + 1] == '\0')) goto path_complete;
  required_size = path_size + 1;
  if (required_size != 0) {
    buffer_size = path_size + 2;
    if (path_string == (int8_t *)0x0) {
      if ((int)buffer_size < 0x10) {
        buffer_size = 0x10;
      }
      path_string = (int8_t *)
                   allocate_memory_structure(system_memory_pool_ptr, (longlong)(int)buffer_size,
                                 CONCAT71((uint7)(uint3)(path_size >> 8), 0x13));
      *path_string = 0;
    }
    else {
      if (buffer_size <= buffer_size) goto buffer_sufficient;
      path_string = (int8_t *)expand_memory_buffer(system_memory_pool_ptr, path_string, 
                                                       buffer_size, 0x10, 0x13);
    }
    temp_result = get_string_length(path_string);
    normalized_length = (ulonglong)path_size;
    temp_value = CONCAT44(temp_value._4_4_, temp_result);
  }
buffer_sufficient:
  *(int16_t *)(path_string + normalized_length) = 0x2f; // "/"
  normalized_length = (ulonglong)required_size;
  path_size = required_size;
path_complete:
  total_chars = path_length;
  char_code = path_length;
  // 规范化路径字符
  if ((int)normalized_length != 0) {
    do {
      current_char = path_string[char_code];
      if ((byte)(current_char + 0xbfU) < 0x1a) {
        path_string[char_code] = current_char + ' ';
        normalized_length = (ulonglong)path_size;
      }
      buffer_size = (int)total_chars + 1;
      total_chars = (ulonglong)buffer_size;
      char_code = char_code + 1;
    } while (buffer_size < (uint)normalized_length);
  }
  comparison_result = (int)(path_data[0x112] - path_data[0x111] >> 5);
  normalized_length = path_length;
  total_chars = path_length;
  // 处理路径组件
  if (0 < comparison_result) {
    do {
      string_buffer = (int8_t *)0x0;
      current_offset = path_data[0x111] + total_chars;
      if (*(int *)(current_offset + 0x10) != 0) {
        string_length = *(int *)(current_offset + 0x10) + 1;
        if (string_length < 0x10) {
          string_length = 0x10;
        }
        string_buffer = (int8_t *)allocate_memory_structure(system_memory_pool_ptr, (longlong)string_length, 0x13);
        *string_buffer = 0;
        if (*(int *)(current_offset + 0x10) != 0) {
          // 复制组件数据（不返回）
          copy_memory_data(string_buffer, *(uint64_t *)(current_offset + 8), 
                         *(int *)(current_offset + 0x10) + 1);
        }
      }
      if ((*(longlong *)(current_offset + 8) != 0) && (string_buffer != (int8_t *)0x0)) {
        *string_buffer = 0;
      }
      if ((path_size == 0) || (path_size == 0)) {
        if (string_buffer != (int8_t *)0x0) {
          // 释放字符串缓冲区（不返回）
          release_string_buffer(string_buffer);
        }
        goto cleanup_complete;
      }
      if (string_buffer != (int8_t *)0x0) {
        // 释放字符串缓冲区（不返回）
        release_string_buffer(string_buffer);
      }
      path_length = (ulonglong)((int)path_length + 1);
      normalized_length = normalized_length + 1;
      total_chars = total_chars + 0x20;
    } while ((longlong)normalized_length < (longlong)comparison_result);
  }
  path_length = 0xffffffff;
cleanup_complete:
  stack_buffer_a0 = &STRING_TERMINATOR;
  if (buffer_ptr != (uint64_t *)0x0) {
    // 释放字符串缓冲区（不返回）
    release_string_buffer();
  }
  buffer_ptr = (uint64_t *)0x0;
  buffer_capacity = buffer_capacity & 0xffffffff00000000;
  stack_buffer_a0 = &EMPTY_STRING_PTR;
  stack_buffer_c0 = &STRING_TERMINATOR;
  if (path_string == (int8_t *)0x0) {
    return path_length;
  }
  // 释放字符串缓冲区（不返回）
  release_string_buffer();
}



// 函数：查找配置条目
// 原始函数名：FUN_180142220
int32_t find_configuration_entry(longlong config_context, uint64_t *search_buffer, 
                                   uint64_t param_3, longlong search_key)
{
  int32_t result;
  longlong *found_entry;
  uint search_length;
  ulonglong current_pos;
  int8_t temp_stack [8];
  uint64_t *buffer_ptr;
  ulonglong search_index;
  
  search_index = 0;
  current_pos = search_index;
  // 搜索缓冲区内容
  if (*(int *)(search_buffer + 2) != 0) {
    do {
      search_key = search_buffer[1];
      if ((byte)(*(char *)(search_key + current_pos) + 0xbfU) < 0x1a) {
        *(char *)(search_key + current_pos) = *(char *)(search_key + current_pos) + ' ';
      }
      search_length = (int)search_index + 1;
      search_index = (ulonglong)search_length;
      current_pos = current_pos + 1;
    } while (search_length < *(uint *)(search_buffer + 2));
  }
  buffer_ptr = search_buffer;
  found_entry = (longlong *)search_configuration_table(config_context + 0x8e8, temp_stack, 
                                                      search_buffer, search_key, 0xfffffffffffffffe);
  if (*found_entry == config_context + 0x8e8) {
    *search_buffer = &STRING_TERMINATOR;
    if (search_buffer[1] != 0) {
      // 释放字符串缓冲区（不返回）
      release_string_buffer();
    }
    search_buffer[1] = 0;
    *(int32_t *)(search_buffer + 3) = 0;
    result = 0xffffffff;
  }
  else {
    result = *(int32_t *)(*found_entry + 0x40);
    *search_buffer = &STRING_TERMINATOR;
    if (search_buffer[1] != 0) {
      // 释放字符串缓冲区（不返回）
      release_string_buffer();
    }
    search_buffer[1] = 0;
    *(int32_t *)(search_buffer + 3) = 0;
  }
  *search_buffer = &EMPTY_STRING_PTR;
  return result;
}



// 警告：全局变量以'_'开头与同一地址的较小符号重叠



// 函数：处理模块配置更新
// 原始函数名：FUN_180142300
void process_module_configuration_update(longlong module_context, uint64_t *config_buffer, 
                                       longlong config_source)
{
  uint buffer_index;
  int32_t temp_result;
  int32_t config_size;
  ulonglong buffer_capacity;
  uint path_length;
  int string_length;
  int16_t *path_buffer;
  longlong source_offset;
  uint64_t temp_value1;
  uint64_t temp_value2;
  int config_length;
  void *default_config;
  int8_t security_buffer [32];
  int8_t buffer_type;
  int32_t operation_flag;
  void *stack_ptr;
  int16_t *string_ptr;
  int32_t ptr_size;
  uint64_t temp_value;
  uint64_t *main_buffer;
  void **ptr_to_stack_ptr;
  void *temp_stack_ptr;
  void *char_buffer;
  int32_t data_size;
  uint8_t temp_string [16];
  ulonglong security_hash;
  longlong temp_offset;
  
  temp_value = 0xfffffffffffffffe;
  security_hash = GET_SECURITY_COOKIE() ^ (ulonglong)security_buffer;
  operation_flag = 0;
  stack_ptr = &STRING_TERMINATOR;
  temp_value._0_4_ = 0;
  string_ptr = (int16_t *)0x0;
  ptr_size = 0;
  main_buffer = config_buffer;
  path_buffer = (int16_t *)allocate_memory_structure(system_memory_pool_ptr, 0x10, 0x13);
  *(int8_t *)path_buffer = 0;
  string_ptr = path_buffer;
  path_length = get_string_length(path_buffer);
  *path_buffer = 0x2f; // "/"
  ptr_size = 1;
  default_config = &DEFAULT_CONFIG_PTR;
  if (*(void **)(config_source + 8) != (void *)0x0) {
    default_config = *(void **)(config_source + 8);
  }
  source_offset = -1;
  // 计算配置字符串长度
  do {
    temp_offset = source_offset;
    source_offset = temp_offset + 1;
  } while (default_config[source_offset] != '\0');
  temp_value._0_4_ = path_length;
  // 处理配置字符串
  if (0 < (int)source_offset) {
    string_length = (int)temp_offset;
    config_length = string_length + 2;
    if ((config_length != 0) && (buffer_index = string_length + 3, path_length < buffer_index)) {
      buffer_type = 0x13;
      path_buffer = (int16_t *)expand_memory_buffer(system_memory_pool_ptr, path_buffer, 
                                                       buffer_index, 0x10);
      string_ptr = path_buffer;
      temp_value._0_4_ = get_string_length(path_buffer);
    }
    // 复制配置数据（不返回）
    copy_memory_data((int8_t *)((longlong)path_buffer + 1), default_config, 
                     (longlong)config_length);
  }
  ptr_to_stack_ptr = &char_buffer;
  temp_value1 = build_config_string(&char_buffer, &stack_ptr);
  string_length = find_configuration_entry(module_context, temp_value1);
  // 检查配置结果
  if (*(char *)((longlong)string_length + *(longlong *)(module_context + 0x8c8)) == '\0') {
    copy_configuration_data(config_buffer, config_source);
    operation_flag = 1;
    stack_ptr = &STRING_TERMINATOR;
    if (string_ptr != (int16_t *)0x0) {
      // 释放字符串缓冲区（不返回）
      release_string_buffer();
    }
    buffer_capacity = (ulonglong)temp_value._4_4_;
  }
  else {
    temp_stack_ptr = &ERROR_MESSAGE_PTR;
    char_buffer = temp_string;
    temp_string[0] = 0;
    data_size = 6;
    copy_string_safely(temp_string, 0x10, &ERROR_CODE_PTR);
    operation_flag = 2;
    default_config = &DEFAULT_CONFIG_PTR;
    if (char_buffer != (void *)0x0) {
      default_config = char_buffer;
    }
    temp_value1 = format_error_message(&char_buffer, default_config);
    temp_value2 = concatenate_buffers(&stack_ptr, &temp_stack_ptr, 1, ptr_size);
    source_offset = merge_config_data(temp_value1, &temp_stack_ptr, temp_value2);
    if (string_ptr != (int16_t *)0x0) {
      // 释放字符串缓冲区（不返回）
      release_string_buffer();
    }
    ptr_size = *(int32_t *)(source_offset + 0x10);
    string_ptr = *(int16_t **)(source_offset + 8);
    temp_result = *(int32_t *)(source_offset + 0x1c);
    config_size = *(int32_t *)(source_offset + 0x18);
    temp_value = *(uint64_t *)(source_offset + 0x18);
    *(int32_t *)(source_offset + 0x10) = 0;
    *(uint64_t *)(source_offset + 8) = 0;
    *(uint64_t *)(source_offset + 0x18) = 0;
    temp_stack_ptr = &STRING_TERMINATOR;
    if (temp_offset != 0) {
      // 释放字符串缓冲区（不返回）
      release_string_buffer();
    }
    temp_offset = 0;
    data_size = 0;
    temp_stack_ptr = &EMPTY_STRING_PTR;
    char_buffer = &STRING_TERMINATOR;
    if (temp_string != 0) {
      // 释放字符串缓冲区（不返回）
      release_string_buffer();
    }
    temp_string = 0;
    ptr_size = 0;
    char_buffer = &EMPTY_STRING_PTR;
    temp_stack_ptr = &EMPTY_STRING_PTR;
    *config_buffer = &EMPTY_STRING_PTR;
    config_buffer[1] = 0;
    *(int32_t *)(config_buffer + 2) = 0;
    *config_buffer = &STRING_TERMINATOR;
    *(int32_t *)(config_buffer + 2) = ptr_size;
    config_buffer[1] = string_ptr;
    *(int32_t *)((longlong)config_buffer + 0x1c) = temp_result;
    *(int32_t *)(config_buffer + 3) = config_size;
    ptr_size = 0;
    buffer_capacity = 0;
  }
  temp_value = buffer_capacity << 0x20;
  string_ptr = (int16_t *)0x0;
  stack_ptr = &EMPTY_STRING_PTR;
  operation_flag = 1;
  // 执行安全检查（不返回）
  perform_security_check(security_hash ^ (ulonglong)security_buffer);
}



// 函数：在模块列表中查找匹配项
// 原始函数名：FUN_1801426a0
int32_t find_matching_module_in_list(longlong module_list, longlong search_key)
{
  uint64_t *current_module;
  byte current_char;
  bool is_match;
  uint64_t *previous_module;
  byte *key_string;
  uint char_value;
  int comparison_result;
  uint64_t *next_module;
  uint64_t *temp_module;
  longlong string_offset;
  
  current_module = (uint64_t *)(module_list + 0x858);
  if (*(uint64_t **)(module_list + 0x868) != (uint64_t *)0x0) {
    previous_module = current_module;
    next_module = *(uint64_t **)(module_list + 0x868);
    do {
      if (*(int *)(search_key + 0x10) == 0) {
        temp_module = (uint64_t *)next_module[1];
        is_match = false;
      }
      else {
        if (*(int *)(next_module + 6) == 0) {
          is_match = true;
        }
        else {
          key_string = *(byte **)(search_key + 8);
          string_offset = next_module[5] - (longlong)key_string;
          do {
            char_value = (uint)key_string[string_offset];
            comparison_result = *key_string - char_value;
            if (*key_string != char_value) break;
            key_string = key_string + 1;
          } while (char_value != 0);
          is_match = 0 < comparison_result;
          if (comparison_result < 1) {
            temp_module = (uint64_t *)next_module[1];
            goto comparison_complete;
          }
        }
        temp_module = (uint64_t *)*next_module;
      }
comparison_complete:
      if (is_match) {
        next_module = previous_module;
      }
      previous_module = next_module;
      next_module = temp_module;
    } while (temp_module != (uint64_t *)0x0);
    if (previous_module != current_module) {
      if (*(int *)(previous_module + 6) == 0) goto match_found;
      if (*(int *)(search_key + 0x10) != 0) {
        key_string = (byte *)previous_module[5];
        string_offset = *(longlong *)(search_key + 8) - (longlong)key_string;
        do {
          current_char = *key_string;
          char_value = (uint)key_string[string_offset];
          if (current_char != char_value) break;
          key_string = key_string + 1;
        } while (char_value != 0);
        if ((int)(current_char - char_value) < 1) goto match_found;
      }
    }
  }
  previous_module = current_module;
match_found:
  if (previous_module == current_module) {
    return 0xffffffff;
  }
  return *(int32_t *)(previous_module[9] + -4);
}



// 函数：在模块列表中查找匹配项（副本）
// 原始函数名：FUN_1801426a4
int32_t find_matching_module_duplicate(longlong module_list, longlong search_key)
{
  uint64_t *current_module;
  byte current_char;
  bool is_match;
  uint64_t *previous_module;
  byte *key_string;
  uint char_value;
  int comparison_result;
  uint64_t *next_module;
  uint64_t *temp_module;
  longlong string_offset;
  
  current_module = (uint64_t *)(module_list + 0x858);
  if (*(uint64_t **)(module_list + 0x868) != (uint64_t *)0x0) {
    previous_module = current_module;
    next_module = *(uint64_t **)(module_list + 0x868);
    do {
      if (*(int *)(search_key + 0x10) == 0) {
        temp_module = (uint64_t *)next_module[1];
        is_match = false;
      }
      else {
        if (*(int *)(next_module + 6) == 0) {
          is_match = true;
        }
        else {
          key_string = *(byte **)(search_key + 8);
          string_offset = next_module[5] - (longlong)key_string;
          do {
            char_value = (uint)key_string[string_offset];
            comparison_result = *key_string - char_value;
            if (*key_string != char_value) break;
            key_string = key_string + 1;
          } while (char_value != 0);
          is_match = 0 < comparison_result;
          if (comparison_result < 1) {
            temp_module = (uint64_t *)next_module[1];
            goto comparison_complete;
          }
        }
        temp_module = (uint64_t *)*next_module;
      }
comparison_complete:
      if (is_match) {
        next_module = previous_module;
      }
      previous_module = next_module;
      next_module = temp_module;
    } while (temp_module != (uint64_t *)0x0);
    if (previous_module != current_module) {
      if (*(int *)(previous_module + 6) == 0) goto match_found;
      if (*(int *)(search_key + 0x10) != 0) {
        key_string = (byte *)previous_module[5];
        string_offset = *(longlong *)(search_key + 8) - (longlong)key_string;
        do {
          current_char = *key_string;
          char_value = (uint)key_string[string_offset];
          if (current_char != char_value) break;
          key_string = key_string + 1;
        } while (char_value != 0);
        if ((int)(current_char - char_value) < 1) goto match_found;
      }
    }
  }
  previous_module = current_module;
match_found:
  if (previous_module == current_module) {
    return 0xffffffff;
  }
  return *(int32_t *)(previous_module[9] + -4);
}



// 函数：获取默认错误代码
// 原始函数名：FUN_180142780
uint64_t get_default_error_code(void)

{
  return 0xffffffff;
}



// 函数：查找并插入数据结构项
// 原始函数名：FUN_1801427a0
longlong *find_and_insert_structure_item(longlong *structure_root, longlong search_key, 
                                      uint64_t param_3, ulonglong param_4)
{
  byte current_char;
  bool is_match;
  byte *key_string;
  longlong *current_item;
  longlong *previous_item;
  uint char_value;
  int comparison_result;
  longlong *next_item;
  longlong string_offset;
  char temp_char;
  uint8_t unused_padding;
  
  previous_item = structure_root;
  if ((longlong *)structure_root[2] != (longlong *)0x0) {
    current_item = (longlong *)structure_root[2];
    do {
      if (*(int *)(search_key + 0x10) == 0) {
        next_item = (longlong *)current_item[1];
        is_match = false;
      }
      else {
        if ((int)current_item[6] == 0) {
          is_match = true;
        }
        else {
          key_string = *(byte **)(search_key + 8);
          param_4 = current_item[5] - (longlong)key_string;
          do {
            char_value = (uint)key_string[param_4];
            comparison_result = *key_string - char_value;
            if (*key_string != char_value) break;
            key_string = key_string + 1;
          } while (char_value != 0);
          is_match = 0 < comparison_result;
          if (comparison_result < 1) {
            next_item = (longlong *)current_item[1];
            goto search_complete;
          }
        }
        next_item = (longlong *)*current_item;
      }
search_complete:
      if (is_match) {
        current_item = previous_item;
      }
      previous_item = current_item;
      current_item = next_item;
    } while (next_item != (longlong *)0x0);
  }
  if (previous_item != structure_root) {
    if ((int)previous_item[6] == 0) {
    item_found:
      return previous_item + 8;
    }
    if (*(int *)(search_key + 0x10) != 0) {
      key_string = (byte *)previous_item[5];
      string_offset = *(longlong *)(search_key + 8) - (longlong)key_string;
      do {
        current_char = *key_string;
        char_value = (uint)key_string[string_offset];
        if (current_char != char_value) break;
        key_string = key_string + 1;
      } while (char_value != 0);
      if ((int)(current_char - char_value) < 1) goto item_found;
    }
  }
  current_item = (longlong *)*structure_root;
  if ((previous_item == current_item) || (previous_item == structure_root)) {
    if ((structure_root[4] == 0) || (*(int *)(search_key + 0x10) == 0)) goto insertion_point;
    previous_item = current_item;
    if ((int)current_item[6] != 0) {
      key_string = *(byte **)(search_key + 8);
      param_4 = current_item[5] - (longlong)key_string;
      do {
        current_char = *key_string;
        char_value = (uint)key_string[param_4];
        if (current_char != char_value) break;
        key_string = key_string + 1;
      } while (char_value != 0);
      if ((int)(current_char - char_value) < 1) goto insertion_point;
    }
  normalize_search:
    param_4 = param_4 & 0xffffffffffffff00;
  search_next:
    if (previous_item == (longlong *)0x0) goto insertion_point;
  }
  else {
    current_item = (longlong *)get_structure_balance_factor(previous_item);
    if (*(int *)(search_key + 0x10) != 0) {
      if ((int)previous_item[6] != 0) {
        key_string = *(byte **)(search_key + 8);
        string_offset = previous_item[5] - (longlong)key_string;
        do {
          current_char = *key_string;
          char_value = (uint)key_string[string_offset];
          if (current_char != char_value) break;
          key_string = key_string + 1;
        } while (char_value != 0);
        if ((int)(current_char - char_value) < 1) goto insertion_point;
      }
      if ((int)current_item[6] != 0) {
        key_string = (byte *)current_item[5];
        param_4 = *(longlong *)(search_key + 8) - (longlong)key_string;
        do {
          current_char = *key_string;
          char_value = (uint)key_string[param_4];
          if (current_char != char_value) break;
          key_string = key_string + 1;
        } while (char_value != 0);
        if (0 < (int)(current_char - char_value)) {
          if (*previous_item == 0) goto normalize_search;
          param_4 = CONCAT71((int7)(param_4 >> 8),1);
          previous_item = current_item;
          goto search_next;
        }
      }
    }
  insertion_point:
    previous_item = (longlong *)create_new_structure_item(structure_root, &temp_char, search_key);
    if (temp_char == '\0') goto final_cleanup;
    param_4 = 0;
  }
  insert_structure_item(structure_root, &temp_char, previous_item, param_4, search_key);
  previous_item = (longlong *)CONCAT71(unused_padding, temp_char);
final_cleanup:
  return previous_item + 8;
}





// 函数：清理模块资源
// 原始函数名：FUN_180142990
void cleanup_module_resources(longlong module_context)
{
  uint64_t *resource_ptr;
  
  resource_ptr = *(uint64_t **)(module_context + 0x10);
  if (resource_ptr != (uint64_t *)0x0) {
    release_module_resources(module_context, *resource_ptr);
    deallocate_memory_buffer(resource_ptr);
    // 释放内存缓冲区（不返回）
    release_memory_buffer(resource_ptr);
  }
  *(longlong *)module_context = module_context;
  *(uint64_t *)(module_context + 0x10) = 0;
  *(int8_t *)(module_context + 0x18) = 0;
  *(uint64_t *)(module_context + 0x20) = 0;
  *(longlong *)(module_context + 8) = module_context;
  return;
}





// 函数：执行全局清理
// 原始函数名：FUN_1801429a6
void execute_global_cleanup(void)

{
  release_module_resources();
  deallocate_memory_buffer();
  // 释放内存缓冲区（不返回）
  release_memory_buffer();
}
