#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 04_ui_system_part006.c - UI系统字符串处理和资源管理模块
// 本文件包含11个函数，主要处理UI系统的字符串操作、内存分配、资源管理和路径处理
// 
// 主要功能：
// 1. 字符串数据处理：ui_process_string_data - 处理UI字符串数据的内存复制和初始化
// 2. 字符串缓冲区分配：ui_allocate_string_buffer - 为UI系统分配字符串缓冲区
// 3. 错误消息格式化：ui_format_error_message - 格式化UI系统的错误消息
// 4. 警告消息格式化：ui_format_warning_message - 格式化UI系统的警告消息
// 5. 资源数据处理：ui_process_resource_data - 处理UI系统的资源数据
// 6. 资源管理器执行：ui_execute_resource_manager - 执行UI系统的资源管理器
// 7. 资源加载器初始化：ui_initialize_resource_loader - 初始化UI系统的资源加载器
// 8. 路径字符串处理：ui_process_path_string - 处理UI系统的路径字符串
// 9. 资源缓存清理：ui_cleanup_resource_cache - 清理UI系统的资源缓存
// 10. 资源查找：ui_find_resource_by_name - 根据名称查找UI资源
// 11. 资源内存释放：ui_free_resource_memory - 释放UI系统的资源内存
// 12. 资源节点插入：ui_insert_resource_node - 插入UI系统的资源节点

// 全局常量定义
#define MEMORY_POOL_HANDLE      system_memory_pool_ptr
#define RESOURCE_MANAGER_HANDLE ui_system_buffer
#define EMPTY_STRING_PTR       unknown_var_3456_ptr
#define NULL_STRING_PTR        unknown_var_720_ptr
#define ERROR_FORMAT_PTR       unknown_var_3432
#define WARNING_FORMAT_PTR     unknown_var_3432
#define ERROR_TEMPLATE_STRING  unknown_var_1640
#define WARNING_TEMPLATE_STRING unknown_var_1664

// 函数别名定义
#define allocate_string_memory  FUN_180627910
#define allocate_memory_buffer  FUN_1806277c0
#define copy_string_data        memcpy
#define release_memory_buffer   FUN_18064e900
#define allocate_ui_memory      FUN_18062b1e0
#define copy_string_content     memcpy
#define copy_error_message      strcpy_s
#define copy_warning_message    strcpy_s
#define process_ui_resource     FUN_180657620
#define initialize_resource_stack FUN_180657040
#define process_resource_string FUN_180624af0
#define find_resource_by_id     FUN_180657fa0
#define reallocate_resource_array FUN_18062b420
#define move_resource_data      memmove
#define free_resource_memory    FUN_18064e900
#define process_resource_path   FUN_180627ae0
#define compare_resource_names  FUN_180657530
#define process_resource_config FUN_1806279c0
#define load_resource_list      FUN_18062c5f0
#define validate_security_cookie FUN_1808fc050
#define insert_resource_node    FUN_18066bdc0

// 全局变量定义
#define GLOBAL_MANAGER_CONTEXT ui_system_buffer
#define STACK_POINTER_78        plStack_78
#define STACK_POINTER_70        plStack_70
#define STACK_POINTER_68        plStack_68
#define STACK_POINTER_X_8       plStackX_8

// 函数: ui_process_string_data - 处理UI字符串数据
// 参数: data_context - 数据上下文指针, option_flags - 选项标志, callback_func - 回调函数, security_param - 安全参数
// 功能: 处理UI系统的字符串数据，包括内存复制、数据初始化和清理
void ui_process_string_data(longlong data_context, uint64_t option_flags, uint64_t callback_func, uint64_t security_param)

{
  ulonglong string_length;
  uint64_t security_cookie;
  void *string_handler;
  longlong source_buffer;
  uint source_size;
  int32_t processing_flag;
  
  security_cookie = 0xfffffffffffffffe;
  allocate_string_memory(&string_handler);
  string_length = (ulonglong)source_size;
  if (source_buffer != 0) {
    allocate_memory_buffer(data_context + 0x10, string_length);
  }
  if (source_size != 0) {
    // 警告：子函数不返回
    copy_string_data(*(uint64_t *)(data_context + 0x18), source_buffer, string_length, security_param, security_cookie);
  }
  *(int32_t *)(data_context + 0x20) = 0;
  if (*(longlong *)(data_context + 0x18) != 0) {
    *(int8_t *)(string_length + *(longlong *)(data_context + 0x18)) = 0;
  }
  *(int32_t *)(data_context + 0x2c) = processing_flag;
  string_handler = &EMPTY_STRING_PTR;
  if (source_buffer != 0) {
    // 警告：子函数不返回
    release_memory_buffer(source_buffer, source_buffer);
  }
  return;
}



// 警告：以'_'开头的全局变量与同一地址的较小符号重叠

// 函数: ui_allocate_string_buffer - 分配UI字符串缓冲区
// 参数: input_string - 输入字符串指针
// 功能: 为UI系统分配字符串缓冲区，初始化字符串数据
uint64_t * ui_allocate_string_buffer(longlong input_string)

{
  uint64_t *string_buffer;
  ulonglong calculated_length;
  ulonglong current_char;
  
  string_buffer = (uint64_t *)allocate_ui_memory(MEMORY_POOL_HANDLE, 0x20, 8, 3);
  *string_buffer = &NULL_STRING_PTR;
  string_buffer[1] = 0;
  *(int32_t *)(string_buffer + 2) = 0;
  *string_buffer = &EMPTY_STRING_PTR;
  string_buffer[3] = 0;
  string_buffer[1] = 0;
  *(int32_t *)(string_buffer + 2) = 0;
  if (input_string != 0) {
    calculated_length = 0xffffffffffffffff;
    do {
      current_char = calculated_length;
      calculated_length = current_char + 1;
    } while (*(char *)(input_string + calculated_length) != '\0');
    allocate_string_memory(string_buffer, calculated_length & 0xffffffff);
    if ((int)calculated_length != 0) {
      // 警告：子函数不返回
      copy_string_content(string_buffer[1], input_string, (int)current_char + 2);
    }
    *(int32_t *)(string_buffer + 2) = 0;
    if ((int8_t *)string_buffer[1] != (int8_t *)0x0) {
      *(int8_t *)string_buffer[1] = 0;
    }
  }
  return string_buffer;
}



// 函数: ui_format_error_message - 格式化UI错误消息
// 参数: error_code - 错误代码, output_buffer - 输出缓冲区, format_options - 格式化选项, security_param - 安全参数
// 功能: 格式化UI系统的错误消息，使用预定义的错误模板
uint64_t *
ui_format_error_message(uint64_t error_code, uint64_t *output_buffer, uint64_t format_options, uint64_t security_param)

{
  *output_buffer = &NULL_STRING_PTR;
  output_buffer[1] = 0;
  *(int32_t *)(output_buffer + 2) = 0;
  *output_buffer = &ERROR_FORMAT_PTR;
  output_buffer[1] = output_buffer + 3;
  *(int8_t *)(output_buffer + 3) = 0;
  *(int32_t *)(output_buffer + 2) = 0x17;
  copy_error_message(output_buffer[1], 0x80, &ERROR_TEMPLATE_STRING, security_param, 0, 0xfffffffffffffffe);
  return output_buffer;
}



// 函数: ui_format_warning_message - 格式化UI警告消息
// 参数: warning_code - 警告代码, output_buffer - 输出缓冲区, format_options - 格式化选项, security_param - 安全参数
// 功能: 格式化UI系统的警告消息，使用预定义的警告模板
uint64_t *
ui_format_warning_message(uint64_t warning_code, uint64_t *output_buffer, uint64_t format_options, uint64_t security_param)

{
  *output_buffer = &NULL_STRING_PTR;
  output_buffer[1] = 0;
  *(int32_t *)(output_buffer + 2) = 0;
  *output_buffer = &WARNING_FORMAT_PTR;
  output_buffer[1] = output_buffer + 3;
  *(int8_t *)(output_buffer + 3) = 0;
  *(int32_t *)(output_buffer + 2) = 0x11;
  copy_warning_message(output_buffer[1], 0x80, &WARNING_TEMPLATE_STRING, security_param, 0, 0xfffffffffffffffe);
  return output_buffer;
}



// 警告：以'_'开头的全局变量与同一地址的较小符号重叠



// 函数: ui_process_resource_data - 处理UI资源数据
// 参数: resource_id - 资源ID, resource_data - 资源数据, process_options - 处理选项, security_param - 安全参数
// 功能: 处理UI系统的资源数据，调用资源处理函数进行数据转换
void ui_process_resource_data(uint64_t resource_id, uint64_t resource_data, uint64_t process_options, uint64_t security_param)

{
  process_ui_resource(resource_id, RESOURCE_MANAGER_HANDLE, process_options, security_param, 0xfffffffffffffffe);
  return;
}



// 警告：以'_'开头的全局变量与同一地址的较小符号重叠



// 函数: ui_execute_resource_manager - 执行UI资源管理器
// 参数: manager_context - 管理器上下文指针
// 功能: 执行UI系统的资源管理器，处理资源加载、卸载和管理操作
void ui_execute_resource_manager(longlong *manager_context)

{
  byte processing_status;
  bool comparison_result;
  uint64_t *current_resource;
  uint64_t *next_resource;
  char character_value;
  longlong resource_identifier;
  longlong *manager_ptr;
  byte *string_data;
  byte *temp_string;
  uint64_t *temp_pointer;
  byte *buffer_pointer;
  int comparison_value;
  ulonglong resource_index;
  int iteration_count;
  longlong *array_pointer;
  longlong temp_value;
  ulonglong array_capacity;
  byte *character_buffer;
  byte *temp_buffer;
  ulonglong buffer_capacity;
  longlong *resource_collection;
  uint resource_total;
  longlong resource_info;
  longlong *stack_pointer_8;
  void *string_handler;
  byte *string_content;
  uint string_length;
  ulonglong data_size;
  void *format_handler;
  int8_t *output_buffer;
  uint output_length;
  ulonglong temp_size;
  int32_t allocation_mode;
  uint64_t *resource_list;
  uint64_t *list_end;
  uint64_t resource_counter;
  int32_t temp_flag;
  uint64_t security_cookie;
  
  security_cookie = 0xfffffffffffffffe;
  GLOBAL_MANAGER_CONTEXT = manager_context;
  if (manager_context != (longlong *)0x0) {
    (**(code **)(*manager_context + 8))();
  }
  STACK_POINTER_78 = (longlong *)0x0;
  STACK_POINTER_70 = (longlong *)0x0;
  buffer_capacity = 0;
  STACK_POINTER_68 = (longlong *)0x0;
  allocation_mode = 3;
  initialize_resource_stack(&STACK_POINTER_78);
  resource_collection = STACK_POINTER_70;
  if (ui_system_buffer != (longlong *)0x0) {
    resource_list = (uint64_t *)0x0;
    resource_end = (uint64_t *)0x0;
    resource_count_var = 0;
    temp_flag = 3;
    (**(code **)(*ui_system_buffer + 0x18))(ui_system_buffer, &resource_list);
    temp_ptr = resource_list;
    next_resource = resource_end;
    resource_array = plStack_70;
    if ((longlong)resource_end - (longlong)resource_list >> 5 != 0) {
      plStackX_8 = plStack_70;
      array_ptr = plStack_68;
      index = buffer_size;
      manager_ptr = plStack_70;
      do {
        temp_ptr = resource_list;
        string_handler = &unknown_var_3456_ptr;
        data_size = 0;
        string_data = (int8_t *)0x0;
        string_length = 0;
        FUN_1806277c0(&string_handler, *(int32_t *)(buffer_size + 0x10 + (longlong)resource_list));
        loop_counter = *(int *)(buffer_size + 0x10 + (longlong)temp_ptr);
        if (loop_counter != 0) {
          // 警告：子函数不返回
          memcpy(string_data, *(uint64_t *)(buffer_size + 8 + (longlong)temp_ptr), loop_counter + 1);
        }
        if (*(longlong *)(buffer_size + 8 + (longlong)temp_ptr) != 0) {
          string_length = 0;
          if (string_data != (int8_t *)0x0) {
            *string_data = 0;
          }
          data_size = data_size & 0xffffffff;
        }
        format_ptr = &unknown_var_3456_ptr;
        temp_size = 0;
        output_ptr = (int8_t *)0x0;
        output_size = 0;
        FUN_1806277c0(&format_ptr, string_length);
        if (string_length != 0) {
          // 警告：子函数不返回
          memcpy(output_ptr, string_data, string_length + 1);
        }
        if (string_data != (int8_t *)0x0) {
          output_size = 0;
          if (output_ptr != (int8_t *)0x0) {
            *output_ptr = 0;
          }
          temp_size = temp_size & 0xffffffff;
        }
        loop_counter = output_size + 0xe;
        FUN_1806277c0(&format_ptr, loop_counter);
        temp_ptr = (uint64_t *)(output_ptr + output_size);
        *temp_ptr = 0x75646f4d6275532f;
        *(int32_t *)(temp_ptr + 1) = 0x782e656c;
        *(int16_t *)((longlong)temp_ptr + 0xc) = 0x6c6d;
        *(int8_t *)((longlong)temp_ptr + 0xe) = 0;
        output_size = loop_counter;
        char_val = FUN_180624af0(&format_ptr);
        resource_array = manager_ptr;
        if (char_val != '\0') {
          resource_id = FUN_180657fa0(&format_ptr);
          if (manager_ptr < array_ptr) {
            resource_array = manager_ptr + 1;
            *manager_ptr = resource_id;
            plStackX_8 = resource_array;
            plStack_70 = resource_array;
          }
          else {
            temp_long = (longlong)manager_ptr - (longlong)plStack_78;
            resource_data = temp_long >> 3;
            if (resource_data == 0) {
              resource_data = 1;
LAB_180656abd:
              manager_ptr = (longlong *)FUN_18062b420(system_memory_pool_ptr, resource_data * 8, (int8_t)allocation_flag);
            }
            else {
              resource_data = resource_data * 2;
              if (resource_data != 0) goto LAB_180656abd;
              manager_ptr = (longlong *)0x0;
            }
            if (plStack_78 != plStackX_8) {
              // 警告：子函数不返回
              memmove(manager_ptr, plStack_78, temp_long);
            }
            *manager_ptr = resource_id;
            resource_array = manager_ptr + 1;
            plStackX_8 = resource_array;
            if (plStack_78 != (longlong *)0x0) {
              // 警告：子函数不返回
              FUN_18064e900();
            }
            array_ptr = manager_ptr + resource_data;
            plStack_78 = manager_ptr;
            plStack_70 = resource_array;
            plStack_68 = array_ptr;
          }
        }
        format_ptr = &unknown_var_3456_ptr;
        if (output_ptr != (int8_t *)0x0) {
          // 警告：子函数不返回
          FUN_18064e900();
        }
        output_ptr = (int8_t *)0x0;
        temp_size = temp_size & 0xffffffff00000000;
        format_ptr = &unknown_var_720_ptr;
        string_handler = &unknown_var_3456_ptr;
        if (string_data != (int8_t *)0x0) {
          // 警告：子函数不返回
          FUN_18064e900();
        }
        string_data = (byte *)0x0;
        data_size = data_size & 0xffffffff00000000;
        string_handler = &unknown_var_720_ptr;
        resource_count = (int)index + 1;
        index = (ulonglong)resource_count;
        buffer_size = buffer_size + 0x20;
        manager_ptr = resource_array;
        temp_ptr = resource_list;
        next_resource = resource_end;
      } while ((ulonglong)(longlong)resource_count <
               (ulonglong)((longlong)resource_end - (longlong)resource_list >> 5));
    }
    for (; next_resource = resource_end, temp_ptr != resource_end; temp_ptr = temp_ptr + 4) {
      resource_end = next_resource;
      (**(code **)*temp_ptr)(temp_ptr, 0);
      next_resource = resource_end;
      resource_end = temp_ptr;
    }
    if (resource_list != (uint64_t *)0x0) {
      resource_end = next_resource;
      // 警告：子函数不返回
      FUN_18064e900();
    }
    resource_list = (uint64_t *)0x0;
    resource_end = next_resource;
  }
  loop_counter = 0;
  buffer_size = (longlong)resource_array - (longlong)plStack_78 >> 3;
  resource_array = plStack_78;
  if (buffer_size != 0) {
    do {
      index = 0;
      char_buffer = &system_memory_67e0;
      resource_id = *resource_array;
      string_handler = &unknown_var_3456_ptr;
      data_size = 0;
      string_data = (byte *)0x0;
      string_length = 0;
      FUN_1806277c0(&string_handler, *(int32_t *)(resource_id + 0x10));
      if (*(int *)(resource_id + 0x10) != 0) {
        // 警告：子函数不返回
        memcpy(string_data, *(uint64_t *)(resource_id + 8), *(int *)(resource_id + 0x10) + 1);
      }
      if (*(longlong *)(resource_id + 8) != 0) {
        string_length = 0;
        if (string_data != (byte *)0x0) {
          *string_data = 0;
        }
        data_size = data_size & 0xffffffff;
      }
      array_size = index;
      if (string_length != 0) {
        do {
          if ((byte)(string_data[array_size] + 0xbf) < 0x1a) {
            string_data[array_size] = string_data[array_size] + 0x20;
          }
          resource_count = (int)index + 1;
          index = (ulonglong)resource_count;
          array_size = array_size + 1;
        } while (resource_count < string_length);
      }
      temp_buffer = ui_system_buffer;
      if (ui_system_buffer == (byte *)0x0) {
LAB_180656d5b:
        buffer_ptr = &system_memory_67e0;
        char_buffer = ui_system_buffer;
        while (temp_string = buffer_ptr, char_buffer != (byte *)0x0) {
          if (string_length == 0) {
            comparison_result = false;
            temp_buffer = *(byte **)(char_buffer + 8);
          }
          else {
            if (*(int *)(char_buffer + 0x30) == 0) {
              comparison_result = true;
            }
            else {
              buffer_ptr = string_data;
              do {
                temp_buffer = buffer_ptr + (*(longlong *)(char_buffer + 0x28) - (longlong)string_data);
                resource_count = (uint)*buffer_ptr - (uint)*temp_buffer;
                temp_buffer = (byte *)(ulonglong)resource_count;
                if (resource_count != 0) break;
                buffer_ptr = buffer_ptr + 1;
              } while (*temp_buffer != 0);
              comparison_result = 0 < (int)resource_count;
              if ((int)resource_count < 1) {
                temp_buffer = *(byte **)(char_buffer + 8);
                goto LAB_180656dbb;
              }
            }
            temp_buffer = *(byte **)char_buffer;
          }
LAB_180656dbb:
          buffer_ptr = char_buffer;
          char_buffer = temp_buffer;
          if (comparison_result) {
            buffer_ptr = temp_string;
          }
        }
        if (temp_string == &system_memory_67e0) {
LAB_180656df9:
          temp_ptr = (uint64_t *)FUN_1806576d0(&string_handler, &plStackX_8, temp_buffer, temp_string, &string_handler);
          temp_string = (byte *)*temp_ptr;
        }
        else if (*(int *)(temp_string + 0x30) != 0) {
          if (string_length != 0) {
            char_buffer = *(byte **)(temp_string + 0x28);
            resource_data = (longlong)string_data - (longlong)char_buffer;
            do {
              buffer_ptr = char_buffer + resource_data;
              resource_count = (uint)*char_buffer - (uint)*buffer_ptr;
              temp_buffer = (byte *)(ulonglong)resource_count;
              if (resource_count != 0) break;
              char_buffer = char_buffer + 1;
            } while (*buffer_ptr != 0);
            if ((int)resource_count < 1) goto LAB_180656e11;
          }
          goto LAB_180656df9;
        }
LAB_180656e11:
        *(longlong *)(temp_string + 0x40) = resource_id;
      }
      else {
        do {
          if (string_length == 0) {
            comparison_result = false;
            buffer_ptr = *(byte **)(temp_buffer + 8);
          }
          else {
            if (*(int *)(temp_buffer + 0x30) == 0) {
              comparison_result = true;
            }
            else {
              buffer_ptr = string_data;
              do {
                resource_count = (uint)buffer_ptr[*(longlong *)(temp_buffer + 0x28) - (longlong)string_data];
                int_val = *buffer_ptr - resource_count;
                if (*buffer_ptr != resource_count) break;
                buffer_ptr = buffer_ptr + 1;
              } while (resource_count != 0);
              comparison_result = 0 < int_val;
              if (int_val < 1) {
                buffer_ptr = *(byte **)(temp_buffer + 8);
                goto LAB_180656d07;
              }
            }
            buffer_ptr = *(byte **)temp_buffer;
          }
LAB_180656d07:
          if (comparison_result) {
            temp_buffer = char_buffer;
          }
          char_buffer = temp_buffer;
          temp_buffer = buffer_ptr;
        } while (buffer_ptr != (byte *)0x0);
        temp_buffer = (byte *)0x0;
        if (char_buffer == &system_memory_67e0) goto LAB_180656d5b;
        if (*(int *)(char_buffer + 0x30) != 0) {
          if (string_length != 0) {
            char_buffer = *(byte **)(char_buffer + 0x28);
            temp_buffer = string_data + -(longlong)char_buffer;
            do {
              status_flag = *char_buffer;
              resource_count = (uint)char_buffer[(longlong)temp_buffer];
              if (status_flag != resource_count) break;
              char_buffer = char_buffer + 1;
            } while (resource_count != 0);
            if ((int)(status_flag - resource_count) < 1) goto LAB_180656e1e;
          }
          goto LAB_180656d5b;
        }
      }
LAB_180656e1e:
      string_handler = &unknown_var_3456_ptr;
      if (string_data != (byte *)0x0) {
        // 警告：子函数不返回
        FUN_18064e900();
      }
      string_data = (byte *)0x0;
      data_size = data_size & 0xffffffff00000000;
      string_handler = &unknown_var_720_ptr;
      loop_counter = loop_counter + 1;
      resource_array = resource_array + 1;
    } while ((ulonglong)(longlong)loop_counter < buffer_size);
  }
  if (plStack_78 != (longlong *)0x0) {
    // 警告：子函数不返回
    FUN_18064e900(plStack_78);
  }
  return;
}



// 警告：以'_'开头的全局变量与同一地址的较小符号重叠



// 函数: ui_initialize_resource_loader - 初始化UI资源加载器
// 参数: param_1 - 加载器配置指针
// 功能: 初始化UI系统的资源加载器，配置加载参数和资源路径
void ui_initialize_resource_loader(ulonglong *param_1)

{
  uint64_t *config_ptr;
  uint64_t *next_config;
  char char_val;
  uint64_t config_var;
  longlong temp_long;
  uint64_t *current_config;
  uint64_t *prev_config;
  uint64_t *start_config;
  int config_count;
  int *config_size_ptr;
  int size_val;
  ulonglong total_size;
  int8_t security_buffer[32];
  void *temp_ptr;
  int8_t *string_ptr;
  uint string_len;
  ulonglong buffer_size;
  int32_t buffer_flag;
  void *format_handler;
  longlong path_offset;
  uint path_size;
  int32_t path_flag;
  ulonglong path_capacity;
  uint64_t *resource_array;
  uint64_t *array_end;
  uint64_t array_count;
  int32_t allocation_flag;
  uint64_t stack_var;
  ulonglong config_array[2];
  ulonglong security_cookie;
  
  stack_var = 0xfffffffffffffffe;
  security_cookie = GET_SECURITY_COOKIE() ^ (ulonglong)security_buffer;
  size_val = 0;
  buffer_flag = 0;
  format_handler = &unknown_var_7512_ptr;
  temp_ptr = config_array;
  config_array[0] = config_array[0] & 0xffffffffffffff00;
  config_count = 6;
  strcpy_s(config_array, 0x10, &unknown_var_2588_ptr);
  buffer_flag = 1;
  FUN_1806279c0(&string_ptr, &format_handler);
  buffer_flag = 0;
  format_handler = &unknown_var_720_ptr;
  config_count = path_size + 8;
  FUN_1806277c0(&string_ptr, config_count);
  *(uint64_t *)((ulonglong)path_size + path_offset) = 0x2f73656c75646f4d;
  *(int8_t *)((uint64_t *)((ulonglong)path_size + path_offset) + 1) = 0;
  resource_array = (uint64_t *)0x0;
  array_end = (uint64_t *)0x0;
  array_count = 0;
  allocation_flag = 3;
  path_size = config_count;
  FUN_18062c5f0(&string_ptr, &resource_array);
  total_size = (longlong)array_end - (longlong)resource_array >> 5;
  path_capacity = total_size;
  prev_config = resource_array;
  start_config = resource_array;
  current_config = array_end;
  if (total_size != 0) {
    config_size_ptr = (int *)(resource_array + 2);
    do {
      format_handler = &unknown_var_3456_ptr;
      config_array[0] = 0;
      temp_ptr = (ulonglong *)0x0;
      config_count = 0;
      FUN_1806277c0(&format_handler, *config_size_ptr);
      if (*config_size_ptr != 0) {
        // 警告：子函数不返回
        memcpy(temp_ptr, *(uint64_t *)(config_size_ptr + -2), *config_size_ptr + 1);
      }
      if (*(longlong *)(config_size_ptr + -2) != 0) {
        config_count = 0;
        if (temp_ptr != (ulonglong *)0x0) {
          *(int8_t *)temp_ptr = 0;
        }
        config_array[0] = config_array[0] & 0xffffffff;
      }
      temp_ptr = &unknown_var_3456_ptr;
      buffer_size = 0;
      string_ptr = (int8_t *)0x0;
      string_len = 0;
      FUN_1806277c0(&temp_ptr, config_count);
      if (config_count != 0) {
        // 警告：子函数不返回
        memcpy(string_ptr, temp_ptr, config_count + 1);
      }
      if (temp_ptr != (ulonglong *)0x0) {
        string_len = 0;
        if (string_ptr != (int8_t *)0x0) {
          *string_ptr = 0;
        }
        buffer_size = buffer_size & 0xffffffff;
      }
      config_count = string_len + 0xe;
      FUN_1806277c0(&temp_ptr, config_count);
      prev_config = (uint64_t *)(string_ptr + string_len);
      *prev_config = 0x75646f4d6275532f;
      *(int32_t *)(prev_config + 1) = 0x782e656c;
      *(int16_t *)((longlong)prev_config + 0xc) = 0x6c6d;
      *(int8_t *)((longlong)prev_config + 0xe) = 0;
      string_len = config_count;
      char_val = FUN_180624af0(&temp_ptr);
      if (char_val != '\0') {
        config_var = FUN_180657fa0(&temp_ptr);
        prev_config = (uint64_t *)param_1[1];
        if (prev_config < (uint64_t *)param_1[2]) {
          param_1[1] = (ulonglong)(prev_config + 1);
          *prev_config = config_var;
        }
        else {
          start_config = (uint64_t *)*param_1;
          temp_long = (longlong)prev_config - (longlong)start_config >> 3;
          if (temp_long == 0) {
            temp_long = 1;
LAB_1806572f9:
            current_config = (uint64_t *)FUN_18062b420(system_memory_pool_ptr, temp_long * 8, (char)param_1[3]);
            prev_config = (uint64_t *)param_1[1];
            start_config = (uint64_t *)*param_1;
          }
          else {
            temp_long = temp_long * 2;
            if (temp_long != 0) goto LAB_1806572f9;
            current_config = (uint64_t *)0x0;
          }
          if (start_config != prev_config) {
            // 警告：子函数不返回
            memmove(current_config, start_config, (longlong)prev_config - (longlong)start_config);
          }
          *current_config = config_var;
          if (*param_1 != 0) {
            // 警告：子函数不返回
            FUN_18064e900();
          }
          *param_1 = (ulonglong)current_config;
          param_1[1] = (ulonglong)(current_config + 1);
          param_1[2] = (ulonglong)(current_config + temp_long);
          total_size = path_capacity;
        }
      }
      temp_ptr = &unknown_var_3456_ptr;
      if (string_ptr != (int8_t *)0x0) {
        // 警告：子函数不返回
        FUN_18064e900();
      }
      string_ptr = (int8_t *)0x0;
      buffer_size = buffer_size & 0xffffffff00000000;
      temp_ptr = &unknown_var_720_ptr;
      format_handler = &unknown_var_3456_ptr;
      if (temp_ptr != (ulonglong *)0x0) {
        // 警告：子函数不返回
        FUN_18064e900();
      }
      temp_ptr = (ulonglong *)0x0;
      config_array[0] = config_array[0] & 0xffffffff00000000;
      format_handler = &unknown_var_720_ptr;
      size_val = size_val + 1;
      config_size_ptr = config_size_ptr + 8;
      prev_config = resource_array;
      start_config = resource_array;
      current_config = array_end;
    } while ((ulonglong)(longlong)size_val < total_size);
  }
  for (; next_config = array_end, config_ptr = resource_array, prev_config != array_end; prev_config = prev_config + 4) {
    resource_array = start_config;
    array_end = current_config;
    (**(code **)*prev_config)(prev_config, 0);
    start_config = resource_array;
    current_config = array_end;
    array_end = next_config;
    resource_array = config_ptr;
  }
  if (resource_array != (uint64_t *)0x0) {
    resource_array = start_config;
    array_end = current_config;
    // 警告：子函数不返回
    FUN_18064e900(config_ptr);
  }
  string_ptr = &unknown_var_3456_ptr;
  if (path_offset != 0) {
    resource_array = start_config;
    array_end = current_config;
    // 警告：子函数不返回
    FUN_18064e900();
  }
  path_offset = 0;
  path_flag = 0;
  string_ptr = &unknown_var_720_ptr;
  resource_array = start_config;
  array_end = current_config;
  // 警告：子函数不返回
  FUN_1808fc050(security_cookie ^ (ulonglong)security_buffer);
}



// 函数: ui_process_path_string - 处理UI路径字符串
// 参数: param_1 - 输入字符串, param_2 - 处理选项, param_3/4 - 处理参数
// 功能: 处理UI系统的路径字符串，进行字符转换和路径规范化
uint64_t
ui_process_path_string(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)

{
  uint char_count;
  uint64_t result;
  longlong string_ptr;
  void *temp_array[3];
  void *string_handler;
  longlong buffer_ptr;
  uint buffer_size;
  
  FUN_180627ae0(&string_handler, param_1, param_3, param_4, 0xfffffffffffffffe);
  char_count = 0;
  if (buffer_size != 0) {
    string_ptr = 0;
    do {
      if ((byte)(*(char *)(buffer_ptr + string_ptr) + 0xbfU) < 0x1a) {
        *(char *)(buffer_ptr + string_ptr) = *(char *)(buffer_ptr + string_ptr) + ' ';
      }
      char_count = char_count + 1;
      string_ptr = string_ptr + 1;
    } while (char_count < buffer_size);
  }
  FUN_180657530(char_count, temp_array, &string_handler);
  if (temp_array[0] == &system_memory_67e0) {
    result = 0;
  }
  else {
    result = *(uint64_t *)(temp_array[0] + 0x40);
  }
  string_handler = &unknown_var_3456_ptr;
  if (buffer_ptr != 0) {
    // 警告：子函数不返回
    FUN_18064e900();
  }
  return result;
}



// 警告：以'_'开头的全局变量与同一地址的较小符号重叠



// 函数: ui_cleanup_resource_cache - 清理UI资源缓存
// 参数: param_1 - 缓存标识, param_2 - 清理选项, param_3/4 - 清理参数
// 功能: 清理UI系统的资源缓存，释放不再使用的资源
void ui_cleanup_resource_cache(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)

{
  FUN_180657620(param_1, ui_system_buffer, param_3, param_4, 0xfffffffffffffffe);
  return;
}



// 警告：以'_'开头的全局变量与同一地址的较小符号重叠

// 函数: ui_find_resource_by_name - 根据名称查找UI资源
// 参数: param_1 - 查找类型, param_2 - 输出缓冲区, param_3 - 资源名称
// 功能: 在UI系统中根据名称查找资源，返回资源指针
uint64_t * ui_find_resource_by_name(uint64_t param_1, uint64_t *param_2, longlong param_3)

{
  byte char_val;
  bool comparison_result;
  byte *name_ptr;
  uint name_length;
  int comparison_val;
  longlong name_offset;
  uint64_t *resource_ptr;
  uint64_t *next_resource;
  uint64_t *current_resource;
  uint64_t *found_resource;
  
  if (ui_system_buffer != (uint64_t *)0x0) {
    resource_ptr = ui_system_buffer;
    found_resource = (uint64_t *)&system_memory_67e0;
    do {
      if (*(int *)(param_3 + 0x10) == 0) {
        next_resource = (uint64_t *)resource_ptr[1];
        comparison_result = false;
      }
      else {
        if (*(int *)(resource_ptr + 6) == 0) {
          comparison_result = true;
        }
        else {
          name_ptr = *(byte **)(param_3 + 8);
          name_offset = resource_ptr[5] - (longlong)name_ptr;
          do {
            name_length = (uint)name_ptr[name_offset];
            comparison_val = *name_ptr - name_length;
            if (*name_ptr != name_length) break;
            name_ptr = name_ptr + 1;
          } while (name_length != 0);
          comparison_result = 0 < comparison_val;
          if (comparison_val < 1) {
            next_resource = (uint64_t *)resource_ptr[1];
            goto LAB_1806575b7;
          }
        }
        next_resource = (uint64_t *)*resource_ptr;
      }
LAB_1806575b7:
      current_resource = resource_ptr;
      if (comparison_result) {
        current_resource = found_resource;
      }
      resource_ptr = next_resource;
      found_resource = current_resource;
    } while (next_resource != (uint64_t *)0x0);
    if (current_resource != (uint64_t *)&system_memory_67e0) {
      if (*(int *)(current_resource + 6) == 0) {
LAB_1806575f7:
        *param_2 = current_resource;
        return param_2;
      }
      if (*(int *)(param_3 + 0x10) != 0) {
        name_ptr = (byte *)current_resource[5];
        name_offset = *(longlong *)(param_3 + 8) - (longlong)name_ptr;
        do {
          char_val = *name_ptr;
          name_length = (uint)name_ptr[name_offset];
          if (char_val != name_length) break;
          name_ptr = name_ptr + 1;
        } while (name_length != 0);
        if ((int)(char_val - name_length) < 1) goto LAB_1806575f7;
      }
    }
  }
  *param_2 = &system_memory_67e0;
  return param_2;
}





// 函数: ui_free_resource_memory - 释放UI资源内存
// 参数: param_1 - 资源指针, param_2 - 释放选项, param_3/4 - 释放参数
// 功能: 释放UI系统占用的资源内存，清理相关数据结构
void ui_free_resource_memory(uint64_t param_1, uint64_t *param_2, uint64_t param_3, uint64_t param_4)

{
  if (param_2 == (uint64_t *)0x0) {
    return;
  }
  FUN_180657620(&system_memory_67e0, *param_2, param_3, param_4, 0xfffffffffffffffe);
  param_2[4] = &unknown_var_3456_ptr;
  if (param_2[5] != 0) {
    // 警告：子函数不返回
    FUN_18064e900();
  }
  param_2[5] = 0;
  *(int32_t *)(param_2 + 7) = 0;
  param_2[4] = &unknown_var_720_ptr;
  // 警告：子函数不返回
  FUN_18064e900(param_2);
}



// 警告：以'_'开头的全局变量与同一地址的较小符号的重叠

uint64_t *
ui_insert_resource_node(ulonglong param_1, uint64_t *param_2, uint64_t param_3, longlong *param_4,
                        longlong param_5)

{
  byte char_val;
  bool comparison_result;
  uint64_t *new_node;
  longlong *node_ptr;
  byte *name_ptr;
  uint64_t *current_node;
  uint name_length;
  longlong *next_node;
  longlong name_offset;
  ulonglong node_flags;
  uint64_t insert_flag;
  
  if ((param_4 == ui_system_buffer) || (param_4 == (longlong *)&system_memory_67e0)) {
    if ((ui_system_buffer != 0) && (*(int *)(param_5 + 0x10) != 0)) {
      next_node = ui_system_buffer;
      node_ptr = param_4;
      if ((int)ui_system_buffer[6] != 0) {
        name_ptr = *(byte **)(param_5 + 8);
        node_ptr = (longlong *)(ui_system_buffer[5] - (longlong)name_ptr);
        do {
          char_val = *name_ptr;
          param_1 = (ulonglong)name_ptr[(longlong)node_ptr];
          name_length = (uint)name_ptr[(longlong)node_ptr];
          if (char_val != name_length) break;
          name_ptr = name_ptr + 1;
        } while (name_length != 0);
        if ((int)(char_val - name_length) < 1) goto LAB_1806577f1;
      }
LAB_1806577d7:
      node_flags = (ulonglong)node_ptr & 0xffffffffffffff00;
LAB_1806577da:
      if (next_node != (longlong *)0x0) {
        FUN_180657970(param_1, param_2, next_node, node_flags, param_5);
        return param_2;
      }
    }
  }
  else {
    node_ptr = (longlong *)func_0x00018066bd70(param_4);
    if (*(int *)(param_5 + 0x10) != 0) {
      if ((int)param_4[6] != 0) {
        name_ptr = *(byte **)(param_5 + 8);
        name_offset = param_4[5] - (longlong)name_ptr;
        do {
          char_val = *name_ptr;
          name_length = (uint)name_ptr[name_offset];
          if (char_val != name_length) break;
          name_ptr = name_ptr + 1;
        } while (name_length != 0);
        if ((int)(char_val - name_length) < 1) goto LAB_1806577f1;
      }
      if ((int)node_ptr[6] != 0) {
        name_ptr = (byte *)node_ptr[5];
        node_ptr = (longlong *)(*(longlong *)(param_5 + 8) - (longlong)name_ptr);
        do {
          char_val = *name_ptr;
          param_1 = (ulonglong)name_ptr[(longlong)node_ptr];
          name_length = (uint)name_ptr[(longlong)node_ptr];
          if (char_val != name_length) break;
          name_ptr = name_ptr + 1;
        } while (name_length != 0);
        if (0 < (int)(char_val - name_length)) {
          next_node = param_4;
          if (*param_4 == 0) goto LAB_1806577d7;
          node_flags = CONCAT71((int7)((ulonglong)node_ptr >> 8), 1);
          next_node = node_ptr;
          goto LAB_1806577da;
        }
      }
    }
  }
LAB_1806577f1:
  comparison_result = true;
  new_node = (uint64_t *)&system_memory_67e0;
  current_node = ui_system_buffer;
  while (current_node != (uint64_t *)0x0) {
    new_node = current_node;
    if (*(int *)(current_node + 6) == 0) {
      comparison_result = false;
LAB_180657812:
      current_node = (uint64_t *)*current_node;
    }
    else {
      if (*(int *)(param_5 + 0x10) == 0) {
        comparison_result = true;
      }
      else {
        name_ptr = (byte *)current_node[5];
        name_offset = *(longlong *)(param_5 + 8) - (longlong)name_ptr;
        do {
          char_val = *name_ptr;
          name_length = (uint)name_ptr[name_offset];
          if (char_val != name_length) break;
          name_ptr = name_ptr + 1;
        } while (name_length != 0);
        comparison_result = 0 < (int)(char_val - name_length);
      }
      if (!comparison_result) goto LAB_180657812;
      current_node = (uint64_t *)current_node[1];
    }
  }
  current_node = new_node;
  if (comparison_result) {
    if (new_node != ui_system_buffer) {
      current_node = (uint64_t *)func_0x00018066b9a0(new_node);
      goto LAB_180657835;
    }
  }
  else {
LAB_180657835:
    if (*(int *)(param_5 + 0x10) == 0) {
LAB_180657941:
      *param_2 = current_node;
      return param_2;
    }
    if (*(int *)(current_node + 6) != 0) {
      name_ptr = *(byte **)(param_5 + 8);
      name_offset = current_node[5] - (longlong)name_ptr;
      do {
        char_val = *name_ptr;
        name_length = (uint)name_ptr[name_offset];
        if (char_val != name_length) break;
        name_ptr = name_ptr + 1;
      } while (name_length != 0);
      if ((int)(char_val - name_length) < 1) goto LAB_180657941;
    }
  }
  if (new_node != (uint64_t *)&system_memory_67e0) {
    if (*(int *)(new_node + 6) == 0) {
LAB_1806578a7:
      insert_flag = 1;
      goto LAB_1806578f0;
    }
    if (*(int *)(param_5 + 0x10) != 0) {
      name_ptr = (byte *)new_node[5];
      name_offset = *(longlong *)(param_5 + 8) - (longlong)name_ptr;
      do {
        char_val = *name_ptr;
        name_length = (uint)name_ptr[name_offset];
        if (char_val != name_length) break;
        name_ptr = name_ptr + 1;
      } while (name_length != 0);
      if ((int)(char_val - name_length) < 1) goto LAB_1806578a7;
    }
  }
  insert_flag = 0;
LAB_1806578f0:
  name_offset = FUN_18062b420(system_memory_pool_ptr, 0x48, system_memory_6808);
  FUN_180627ae0(name_offset + 0x20, param_5);
  *(uint64_t *)(name_offset + 0x40) = 0;
  // 警告：子函数不返回
  FUN_18066bdc0(name_offset, new_node, &system_memory_67e0, insert_flag);
}



// 警告：以'_'开头的全局变量与同一地址的较小符号的重叠