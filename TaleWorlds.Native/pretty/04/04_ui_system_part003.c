#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part003.c - 32 个函数
// 
// 本文件包含UI系统的核心功能实现，主要涵盖以下模块：
// 1. 日志系统 - 格式化日志输出、条件性日志、带优先级的日志
// 2. 环境变量解析 - 支持K/M/G/B单位的数值解析
// 3. 向量数学计算 - UI布局的向量交点计算
// 4. 资源管理 - PE文件解析、库资源树管理
// 5. 托管代码交互 - 托管与非托管代码的桥接
// 6. 内存管理 - 栈保护、内存分配与清理
// 
// 核心特性：
// - 线程安全的日志系统，支持线程本地存储
// - 栈保护机制，防止缓冲区溢出攻击
// - 二叉搜索树结构的资源管理
// - PE文件资源节区解析
// - 托管代码回调方法管理

// 类型定义
typedef struct {
    void *vtable_ptr;           // 虚函数表指针
    uint32_t ui_flags;          // UI标志
    char ui_name[128];          // UI名称
    void *parent_widget;        // 父窗口部件
    void *child_widgets;        // 子窗口部件列表
    void *event_handler;        // 事件处理器
    void *render_context;       // 渲染上下文
    // ... 其他UI系统属性
} ui_widget_t;

typedef struct {
    void *format_string;         // 格式化字符串
    void *log_buffer;            // 日志缓冲区
    uint32_t log_level;          // 日志级别
    uint32_t log_flags;          // 日志标志
    char log_prefix[64];         // 日志前缀
    // ... 其他日志系统属性
} log_context_t;

// 函数: void ui_log_formatted_message(ui_widget_t *widget, log_context_t *log_ctx, 
//                                   void *param_3, const char *format, void *param_5)
// 功能: 格式化并记录UI系统日志消息
// 参数:
//   widget - UI窗口部件指针
//   log_ctx - 日志上下文指针
//   param_3 - 日志参数3
//   format - 格式化字符串
//   param_5 - 日志参数5
// 返回值: 无
void ui_log_formatted_message(ui_widget_t *widget, log_context_t *log_ctx, 
                             void *param_3, const char *format, void *param_5)

{
  uint64_t *format_flags;
  char *thread_local_flag;
  uint8_t stack_guard[32];
  void *log_param5;
  void *log_param4;
  char log_buffer[512];
  uint64_t guard_value;
  
  if (format != NULL) {
    guard_value = _DAT_180bf00a8 ^ (uint64_t)stack_guard;
    
    // 获取线程本地存储标志
    thread_local_flag = (char *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) + 8);
    
    if (*thread_local_flag == '\0') {
      *thread_local_flag = '\x01';  // 设置线程标志
      
      // 获取格式化标志
      format_flags = (uint64_t *)get_stdio_format_flags();
      log_param5 = param_5;
      log_param4 = NULL;
      
      // 格式化日志消息
      __stdio_common_vsprintf(*format_flags | 2, log_buffer, 0x1ff, format);
      
      *thread_local_flag = '\0';  // 重置线程标志
      
      // 调用日志记录函数
      ui_log_message(widget, log_ctx, param_3, log_buffer);
    }
    
    // 清理栈保护
    cleanup_stack_guard(guard_value ^ (uint64_t)stack_guard);
  }
  return;
}





// 函数: void ui_log_simple_message(log_context_t *log_ctx)
// 功能: 记录简单的UI系统日志消息
// 参数:
//   log_ctx - 日志上下文指针
// 返回值: 无
void ui_log_simple_message(log_context_t *log_ctx)

{
  uint64_t *format_flags;
  char *thread_local_flag;
  char *log_message_ptr;
  uint64_t stack_guard_value;
  
  // 获取线程本地存储中的日志消息指针
  log_message_ptr = (char *)(*(longlong *)(*(longlong *)log_ctx + log_ctx->log_level * 8) + 8);
  
  if (*log_message_ptr == '\0') {
    *log_message_ptr = '\x01';  // 设置线程标志
    
    // 获取格式化标志
    format_flags = (uint64_t *)get_stdio_format_flags();
    
    // 格式化日志消息到栈缓冲区
    __stdio_common_vsprintf(*format_flags | 2, &stack0x00000030, 0x1ff);
    
    *log_message_ptr = '\0';  // 重置线程标志
    
    // 调用日志记录函数
    ui_log_message_simple();
  }
  
  // 清理栈保护
  cleanup_stack_guard(stack_guard_value ^ (uint64_t)&stack0x00000000);
}





// 函数: void ui_no_operation(void)
// 功能: 空操作函数，用于占位或同步
// 参数: 无
// 返回值: 无
void ui_no_operation(void)

{
  return;
}





// 函数: void ui_log_formatted_wrapper(ui_widget_t *widget, log_context_t *log_ctx, 
//                                  void *format_handler, void *format_data)
// 功能: 格式化日志输出的包装函数
// 参数:
//   widget - UI窗口部件指针
//   log_ctx - 日志上下文指针
//   format_handler - 格式化处理器
//   format_data - 格式化数据
// 返回值: 无
void ui_log_formatted_wrapper(ui_widget_t *widget, log_context_t *log_ctx, 
                             void *format_handler, void *format_data)

{
  void *log_param4;
  
  log_param4 = format_data;
  ui_log_formatted_message(widget, log_ctx, NULL, format_handler, &log_param4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void ui_log_conditional_output(void *output_data, void *param_2, 
//                                    void *param_3, void *param_4)
// 功能: 条件性UI日志输出函数
// 参数:
//   output_data - 输出数据
//   param_2 - 参数2
//   param_3 - 参数3
//   param_4 - 参数4
// 返回值: 无
void ui_log_conditional_output(void *output_data, void *param_2, 
                               void *param_3, void *param_4)

{
  void *log_params[3];
  
  log_params[0] = param_2;
  log_params[1] = param_3;
  log_params[2] = param_4;
  if (ui_system_initialized == 0) {
    ui_initialize_system(&ui_system_init_flag);
  }
  if (ui_system_init_flag != 0) {
    ui_log_formatted_message(NULL, NULL, &ui_log_format_string, output_data, log_params);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void ui_log_limited_output(void *output_data, void *param_2, 
//                               void *param_3, void *param_4)
// 功能: 带计数限制的UI日志输出函数
// 参数:
//   output_data - 输出数据
//   param_2 - 参数2
//   param_3 - 参数3
//   param_4 - 参数4
// 返回值: 无
void ui_log_limited_output(void *output_data, void *param_2, 
                          void *param_3, void *param_4)

{
  bool within_limit;
  longlong counter_value;
  void *log_params[3];
  
  log_params[0] = param_2;
  log_params[1] = param_3;
  log_params[2] = param_4;
  if (ui_log_limiter_initialized == 0) {
    ui_initialize_log_limiter(&ui_log_limiter_flag);
  }
  if (ui_log_limiter_flag == 0) {
    if (ui_system_initialized == 0) {
      ui_initialize_system(&ui_system_init_flag);
    }
    if (ui_system_init_flag == 0) {
      return;
    }
  }
  LOCK();
  counter_value = ui_log_output_counter + 1;
  UNLOCK();
  within_limit = ui_log_output_counter <= ui_log_output_limit;
  ui_log_output_counter = counter_value;
  if (within_limit) {
    ui_log_formatted_message(NULL, NULL, &ui_limited_log_format, output_data, log_params);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void ui_log_priority_output(uint32_t priority, void *output_data, 
//                                void *param_3, void *param_4)
// 功能: 带优先级的UI日志输出函数
// 参数:
//   priority - 优先级
//   output_data - 输出数据
//   param_3 - 参数3
//   param_4 - 参数4
// 返回值: 无
void ui_log_priority_output(uint32_t priority, void *output_data, 
                           void *param_3, void *param_4)

{
  bool within_priority_limit;
  ulonglong priority_counter;
  void *log_params[2];
  
  log_params[0] = param_3;
  log_params[1] = param_4;
  if (ui_priority_limiter_initialized == 0) {
    ui_initialize_priority_limiter(&ui_priority_limiter_flag);
  }
  if (ui_priority_limiter_flag == 0) {
    if (ui_system_initialized == 0) {
      ui_initialize_system(&ui_system_init_flag);
    }
    if (ui_system_init_flag == 0) goto priority_callback_handler;
  }
  LOCK();
  priority_counter = ui_priority_output_counter + 1;
  UNLOCK();
  within_priority_limit = ui_priority_output_counter <= ui_priority_output_limit;
  ui_priority_output_counter = priority_counter;
  if (within_priority_limit) {
    ui_log_formatted_message(NULL, NULL, &ui_priority_format, output_data, log_params);
  }
priority_callback_handler:
  if (ui_priority_callback != NULL) {
    (*ui_priority_callback)(priority, ui_priority_callback_data);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void ui_parse_environment_variable(int *config_data)
// 功能: 解析环境变量并处理带单位的数值
// 参数:
//   config_data - 配置数据指针，包含环境变量名和类型信息
// 返回值: 无
void ui_parse_environment_variable(int *config_data)

{
  code *error_handler;
  char unit_char;
  uint env_length;
  int parsed_value;
  longlong str_ptr;
  ulonglong str_length;
  ulonglong char_index;
  uint8_t stack_guard[32];
  char *end_ptr[2];
  char env_var_name[80];
  char env_var_value[80];
  ulonglong guard_value;
  
  guard_value = _DAT_180bf00a8 ^ (ulonglong)stack_guard;
  env_var_name[0] = '\0';
  strncpy(env_var_name, &ui_env_prefix_string, 0x40);
  env_var_name[0x40] = 0;
  strncat(env_var_name, *(void **)(config_data + 4), 0x40);
  env_var_name[0x40] = 0;
  env_var_value[0] = '\0';
  env_length = GetEnvironmentVariableA(env_var_name, env_var_value, 0x41);
  if ((ulonglong)env_length - 1 < 0x40) {
    str_length = 0xffffffffffffffff;
    do {
      str_length = str_length + 1;
      str_ptr = str_length + 1;
    } while (env_var_value[str_ptr] != '\0');
    if (0x40 < str_length) {
      str_length = 0x40;
    }
    char_index = 0;
    if (str_length != 0) {
      do {
        unit_char = toupper((int)env_var_value[char_index]);
        env_var_name[char_index] = unit_char;
        char_index = char_index + 1;
      } while (char_index < str_length);
    }
    if (0x40 < str_length) {
      ui_handle_buffer_overflow();
      error_handler = (code *)swi(3);
      (*error_handler)();
      return;
    }
    env_var_name[str_length] = '\0';
    if ((env_var_name[0] == '\0') || 
        (str_ptr = strstr(&ui_enabled_strings, env_var_name), str_ptr != 0)) {
      *config_data = 1;  // 启用状态
    }
    else {
      str_ptr = strstr(&ui_disabled_strings, env_var_name);
      if (str_ptr == 0) {
        end_ptr[0] = env_var_name;
        parsed_value = strtol(env_var_name, end_ptr, 10);
        if (config_data[2] == 8) {  // 内存大小类型
          unit_char = *end_ptr[0];
          if (unit_char == 'K') {
            end_ptr[0] = end_ptr[0] + 1;  // KB
          }
          else if (unit_char == 'M') {
            parsed_value = parsed_value << 10;  // MB
            end_ptr[0] = end_ptr[0] + 1;
          }
          else if (unit_char == 'G') {
            parsed_value = parsed_value << 0x14;  // GB
            end_ptr[0] = end_ptr[0] + 1;
          }
          else {
            parsed_value = (int)((longlong)parsed_value + 0x3ffU >> 10);  // 默认转换为KB
          }
          if (*end_ptr[0] == 'B') {
            end_ptr[0] = end_ptr[0] + 1;  // 移除B后缀
          }
        }
        if (*end_ptr[0] != '\0') {
          // 无效的数值格式，记录错误
          ui_log_limited_output(&ui_error_format_string, *(void **)(config_data + 4), env_var_name);
          config_data[1] = 1;  // 错误状态
          goto cleanup_and_exit;
        }
        *config_data = parsed_value;  // 设置解析的数值
      }
      else {
        *config_data = 0;  // 禁用状态
      }
    }
    config_data[1] = 2;  // 成功状态
  }
  else if (ui_env_default_flag == '\0') {
    config_data[1] = 1;  // 默认状态
  }
cleanup_and_exit:
  cleanup_stack_guard(guard_value ^ (ulonglong)stack_guard);
}





// 函数: void ui_string_processor_internal(void)
// 功能: 内部字符串处理函数，处理UI相关的字符串操作
// 参数: 无（使用寄存器传递参数）
// 返回值: 无
// 说明: 内部函数，用于处理字符串的转换和解析
void ui_string_processor_internal(void)

{
  char current_char;
  code *error_handler;
  int8_t uppercase_char;
  int parsed_value;
  longlong found_pos;
  char *string_ptr;
  ulonglong string_length;
  longlong register_rbp;
  int *config_ptr;
  ulonglong register_rdi;
  ulonglong char_index;
  
  // 计算字符串长度
  string_length = 0xffffffffffffffff;
  do {
    string_length = string_length + 1;
  } while (*(char *)(register_rbp + -9 + string_length) != '\0');
  
  if (0x40 < string_length) {
    string_length = register_rdi;
  }
  
  // 转换为大写
  char_index = 0;
  if (string_length != 0) {
    do {
      uppercase_char = toupper((int)*(char *)(register_rbp + -9 + char_index));
      *(int8_t *)(register_rbp + -0x59 + char_index) = uppercase_char;
      char_index = char_index + 1;
    } while (char_index < string_length);
  }
  
  if (0x40 < string_length) {
    // 缓冲区溢出，触发异常
    ui_handle_buffer_overflow();
    error_handler = (code *)swi(3);
    (*error_handler)();
    return;
  }
  
  *(int8_t *)(register_rbp + -0x59 + string_length) = 0;
  
  // 检查是否为空字符串
  if (*(char *)(register_rbp + -0x59) == '\0') {
set_enabled:
    *config_ptr = 1;  // 启用状态
  }
  else {
    // 检查是否为启用值
    found_pos = strstr(&ui_enabled_strings, register_rbp + -0x59);
    if (found_pos != 0) goto set_enabled;
    
    // 检查是否为禁用值
    found_pos = strstr(&ui_disabled_strings, register_rbp + -0x59);
    if (found_pos == 0) {
      // 解析数值
      *(longlong *)(register_rbp + -0x69) = register_rbp + -0x59;
      parsed_value = strtol(register_rbp + -0x59, register_rbp + -0x69, 10);
      string_ptr = *(char **)(register_rbp + -0x69);
      
      // 处理单位后缀
      if (config_ptr[2] == 8) {
        current_char = *string_ptr;
        if (current_char == 'K') {
          string_ptr = string_ptr + 1;
          *(char **)(register_rbp + -0x69) = string_ptr;
        }
        else if (current_char == 'M') {
          parsed_value = parsed_value << 10;
          string_ptr = string_ptr + 1;
          *(char **)(register_rbp + -0x69) = string_ptr;
        }
        else if (current_char == 'G') {
          parsed_value = parsed_value << 0x14;
          string_ptr = string_ptr + 1;
          *(char **)(register_rbp + -0x69) = string_ptr;
        }
        else {
          parsed_value = (int)((longlong)parsed_value + 0x3ffU >> 10);
        }
        if (*string_ptr == 'B') {
          string_ptr = string_ptr + 1;
          *(char **)(register_rbp + -0x69) = string_ptr;
        }
      }
      
      // 检查是否完全解析
      if (*string_ptr != '\0') {
        // 解析失败，记录警告
        ui_log_limited_output(&ui_error_format_string, *(void **)(config_ptr + 4), register_rbp + -0x59);
        config_ptr[1] = 1;
        goto cleanup_stack;
      }
      *config_ptr = parsed_value;
    }
    else {
      *config_ptr = 0;  // 禁用状态
    }
  }
  config_ptr[1] = 2;  // 标记为已解析
  
cleanup_stack:
  // 执行栈保护检查
  cleanup_stack_guard(*(ulonglong *)(register_rbp + 0x47) ^ (ulonglong)&stack0x00000000);
}





// 函数: void ui_stack_cleanup_internal(void)
// 功能: 内部栈清理函数，用于栈保护和清理
// 参数: 无（使用寄存器传递参数）
// 返回值: 无
// 说明: 内部函数，用于执行栈保护检查
void ui_stack_cleanup_internal(void)

{
  longlong register_rbp;
  
  // 执行栈保护检查
  cleanup_stack_guard(*(ulonglong *)(register_rbp + 0x47) ^ (ulonglong)&stack0x00000000);
}





// 函数: void ui_numeric_parser_internal(void)
// 功能: 内部数值解析函数，解析UI相关的数值参数
// 参数: 无（使用寄存器传递参数）
// 返回值: 无
// 说明: 内部函数，用于解析带有单位的数值
void ui_numeric_parser_internal(void)

{
  char current_char;
  int parsed_value;
  char *string_ptr;
  longlong register_rbp;
  int *config_ptr;
  
  // 设置字符串指针
  *(longlong *)(register_rbp + -0x69) = register_rbp + -0x59;
  parsed_value = strtol(register_rbp + -0x59, register_rbp + -0x69, 10);
  string_ptr = *(char **)(register_rbp + -0x69);
  
  // 处理单位后缀
  if (config_ptr[2] == 8) {
    current_char = *string_ptr;
    if (current_char == 'K') {
      string_ptr = string_ptr + 1;
      *(char **)(register_rbp + -0x69) = string_ptr;
    }
    else if (current_char == 'M') {
      parsed_value = parsed_value << 10;
      string_ptr = string_ptr + 1;
      *(char **)(register_rbp + -0x69) = string_ptr;
    }
    else if (current_char == 'G') {
      parsed_value = parsed_value << 0x14;
      string_ptr = string_ptr + 1;
      *(char **)(register_rbp + -0x69) = string_ptr;
    }
    else {
      parsed_value = (int)((longlong)parsed_value + 0x3ffU >> 10);
    }
    if (*string_ptr == 'B') {
      string_ptr = string_ptr + 1;
      *(char **)(register_rbp + -0x69) = string_ptr;
    }
  }
  
  // 检查是否完全解析
  if (*string_ptr == '\0') {
    *config_ptr = parsed_value;
    config_ptr[1] = 2;  // 标记为已解析
  }
  else {
    // 解析失败，记录警告
    ui_log_limited_output(&ui_error_format_string, *(void **)(config_ptr + 4), register_rbp + -0x59);
    config_ptr[1] = 1;  // 标记为错误
  }
  
  // 执行栈保护检查
  cleanup_stack_guard(*(ulonglong *)(register_rbp + 0x47) ^ (ulonglong)&stack0x00000000);
}





// 函数: void ui_flag_checker_internal(void)
// 功能: 内部标志检查函数，检查UI相关的标志位
// 参数: 无（使用寄存器传递参数）
// 返回值: 无
// 说明: 内部函数，用于检查和处理标志位
void ui_flag_checker_internal(void)

{
  longlong register_rbp;
  longlong register_rsi;
  
  // 检查全局标志
  if (ui_env_default_flag == '\0') {
    *(int32_t *)(register_rsi + 4) = 1;  // 设置错误标志
  }
  
  // 执行栈保护检查
  cleanup_stack_guard(*(ulonglong *)(register_rbp + 0x47) ^ (ulonglong)&stack0x00000000);
}





// 函数: void ui_error_handler_internal(void)
// 功能: 内部错误处理函数，处理UI系统错误
// 参数: 无
// 返回值: 无
// 说明: 内部错误处理函数，触发异常处理
void ui_error_handler_internal(void)

{
  code *error_handler;
  
  // 触发异常处理
  ui_handle_buffer_overflow();
  error_handler = (code *)swi(3);
  (*error_handler)();
  return;
}



// 函数: bool ui_calculate_vector_intersection(float *result, float *vector_a, float *vector_b, float *vector_c)
// 功能: 计算三个向量的交点，用于UI布局计算
// 参数:
//   result - 计算结果向量指针 [x, y, z, w]
//   vector_a - 向量A指针 [x, y, z, wx, wy, wz, w]
//   vector_b - 向量B指针 [x, y, z, wx, wy, wz, w]
//   vector_c - 向量C指针 [x, y, z, wx, wy, wz, w]
// 返回值: 成功返回true，失败返回false
// 说明: 使用向量叉积计算三个向量的交点，用于UI布局计算
bool ui_calculate_vector_intersection(float *result, float *vector_a, float *vector_b, float *vector_c)

{
  float b_w, b_z, c_w, c_z;
  float b_y, c_y, a_w;
  float cross_x, cross_y, cross_z;
  float c_x, determinant;
  float a_dot, b_dot, c_dot;
  float a_y, a_z, a_x;
  float b_x, result_x, result_y, result_z;
  
  // 提取向量分量
  a_w = vector_b[4];
  b_w = vector_a[6];
  c_w = vector_c[6];
  b_z = vector_b[5];
  c_z = vector_c[5];
  a_z = vector_b[6];
  
  // 计算叉积
  cross_x = b_z * c_w - a_z * c_z;
  c_x = vector_c[4];
  cross_y = c_x * a_z - a_w * c_w;
  cross_z = a_w * c_z - c_x * b_z;
  
  // 计算行列式
  determinant = cross_y * vector_a[5] + cross_x * vector_a[4] + cross_z * b_w;
  
  if (determinant != 0.0) {
    // 计算点积
    a_dot = vector_a[5] * vector_a[1] + vector_a[4] * *vector_a + b_w * vector_a[2];
    b_dot = 1.0 / determinant;
    a_x = vector_a[4];
    
    // 计算向量B和C的点积
    b_dot = b_z * vector_b[1] + a_w * *vector_b + a_z * vector_b[2];
    c_dot = c_z * vector_c[1] + c_x * *vector_c + c_w * vector_c[2];
    
    a_y = vector_a[5];
    a_z = vector_a[6];
    a_x = vector_a[4];
    a_w = vector_b[4];
    
    // 计算结果向量
    result_x = ((b_w * c_z - vector_a[5] * c_w) * b_dot + a_dot * cross_x +
               (vector_a[5] * a_z - vector_a[6] * b_z) * c_dot) * b_dot;
    result_y = ((a_x * c_w - a_z * c_x) * b_dot + a_dot * cross_y +
               (a_z * a_w - a_x * a_z) * c_dot) * b_dot;
    result_z = ((a_y * c_x - a_x * c_z) * b_dot + a_dot * cross_z +
               (a_x * b_z - a_y * a_w) * c_dot) * b_dot;
    
    // 存储结果
    *result = result_x;
    result[1] = result_y;
    result[2] = result_z;
    result[3] = 3.4028235e+38;  // FLT_MAX
  }
  
  return determinant != 0.0;
}



// 函数: bool ui_calculate_scaled_vector_intersection(float *result, float *base_vector, 
//                                                  float scale_factor, float offset_factor)
// 功能: 计算带缩放因子的向量交点，用于UI缩放布局计算
// 参数:
//   result - 计算结果向量指针 [x, y, z, w]
//   base_vector - 基础向量指针 [x, y, z, wx, wy, wz, w]
//   scale_factor - 缩放因子
//   offset_factor - 偏移因子
// 返回值: 成功返回true，失败返回false
// 说明: 使用SIMD寄存器优化的向量计算，用于UI缩放和变换
bool ui_calculate_scaled_vector_intersection(float *result, float *base_vector, 
                                           float scale_factor, float offset_factor)

{
  float base_w, base_z;
  float base_y, scale_reciprocal;
  float vec1_dot, vec2_dot, vec3_dot;
  float vec1_w, vec2_w, vec3_w;
  float base_x, vec1_x, vec2_x, vec3_x;
  float xmm6, xmm8, xmm9, xmm10;
  float xmm11, xmm12, xmm13, xmm14, xmm15;
  
  // 从SIMD寄存器加载向量数据
  vec1_dot = xmm5_value * base_vector[1] + xmm4_value * *base_vector + xmm1_value * base_vector[2];
  scale_reciprocal = 1.0 / scale_factor;
  base_w = base_vector[4];
  
  // 计算向量1和向量2的点积
  vec1_dot = xmm12_value * vector1[1] + offset_factor * *vector1 + xmm14_value * vector1[2];
  vec2_dot = xmm13_value * vector2[1] + xmm15_value * *vector2 + xmm11_value * vector2[2];
  
  base_z = base_vector[5];
  base_y = base_vector[6];
  vec1_w = vector1[4];
  base_x = base_vector[4];
  vec2_w = vector1[4];
  
  // 计算X分量
  *result = ((xmm6_value * xmm13_value - base_vector[5] * xmm11_value) * vec1_dot +
              vec1_dot * xmm8_value +
             (base_vector[5] * xmm14_value - base_vector[6] * xmm12_value) * vec2_dot) * scale_reciprocal;
  
  // 计算Y分量
  result[1] = ((base_w * xmm11_value - base_y * xmm15_value) * vec1_dot + vec1_dot * xmm9_value +
               (base_y * vec1_w - base_x * xmm14_value) * vec2_dot) * scale_reciprocal;
  
  // 计算Z分量
  result[2] = ((base_z * xmm15_value - base_x * xmm13_value) * vec1_dot + vec1_dot * xmm10_value +
               (base_x * xmm12_value - base_z * vec2_w) * vec2_dot) * scale_reciprocal;
  
  result[3] = 3.4028235e+38;  // FLT_MAX
  return true;
}





// 函数: void ui_no_operation_placeholder(void)
// 功能: 空操作占位函数，用于UI系统中的占位或同步点
// 参数: 无
// 返回值: 无
// 说明: 此函数不执行任何操作，仅作为占位符使用
void ui_no_operation_placeholder(void)

{
  return;
}





// 函数: void ui_extract_filename_from_path(path_info_t *path_info, char *output_buffer)
// 功能: 从路径信息中提取文件名并复制到输出缓冲区
// 参数:
//   path_info - 路径信息结构体指针，包含源路径字符串
//   output_buffer - 输出缓冲区，用于存储提取的文件名
// 返回值: 无
// 说明: 此函数处理两个路径，比较它们最后一个反斜杠的位置，选择较长的文件名进行复制
void ui_extract_filename_from_path(path_info_t *path_info, char *output_buffer)

{
  char current_char;
  ulonglong last_backslash_1;
  ulonglong last_backslash_2;
  char *path_string_1;
  char *path_string_2;
  char *source_ptr;
  
  // 获取第一个路径字符串
  path_string_1 = &ui_empty_path_string;
  if (*(char **)(path_info + 8) != (char *)0x0) {
    path_string_1 = *(char **)(path_info + 8);
  }
  
  // 查找第一个路径中最后一个反斜杠
  last_backslash_1 = strrchr(path_string_1, '\\');
  
  // 获取第二个路径字符串
  path_string_2 = &ui_empty_path_string;
  if (*(char **)(path_info + 8) != (char *)0x0) {
    path_string_2 = *(char **)(path_info + 8);
  }
  
  // 查找第二个路径中最后一个反斜杠
  last_backslash_2 = strrchr(path_string_2, '\\');
  
  // 根据反斜杠位置选择源字符串
  if (last_backslash_1 == 0) {
    if (last_backslash_2 == 0) {
      // 两个路径都没有反斜杠，使用完整路径
      source_ptr = "";
      if (*(char **)(path_info + 8) != (char *)0x0) {
        source_ptr = *(char **)(path_info + 8);
      }
      output_buffer = output_buffer - (longlong)source_ptr;
      do {
        current_char = *source_ptr;
        source_ptr[output_buffer] = current_char;
        source_ptr = source_ptr + 1;
      } while (current_char != '\0');
    }
    else {
      // 只有第二个路径有反斜杠，使用第二个路径的文件名部分
      source_ptr = (char *)(last_backslash_2 + 1);
      output_buffer = output_buffer - (longlong)source_ptr;
      do {
        current_char = *source_ptr;
        source_ptr[output_buffer] = current_char;
        source_ptr = source_ptr + 1;
      } while (current_char != '\0');
    }
  }
  else if (last_backslash_2 == 0) {
    // 只有第一个路径有反斜杠，使用第一个路径的文件名部分
    source_ptr = (char *)(last_backslash_1 + 1);
    output_buffer = output_buffer - (longlong)source_ptr;
    do {
      current_char = *source_ptr;
      source_ptr[output_buffer] = current_char;
      source_ptr = source_ptr + 1;
    } while (current_char != '\0');
  }
  else if (last_backslash_2 < last_backslash_1) {
    // 第一个路径的反斜杠位置更靠后，使用第一个路径的文件名部分
    source_ptr = (char *)(last_backslash_1 + 1);
    output_buffer = output_buffer - (longlong)source_ptr;
    do {
      current_char = *source_ptr;
      source_ptr[output_buffer] = current_char;
      source_ptr = source_ptr + 1;
    } while (current_char != '\0');
  }
  else {
    // 第二个路径的反斜杠位置更靠后，使用第二个路径的文件名部分
    source_ptr = (char *)(last_backslash_2 + 1);
    output_buffer = output_buffer - (longlong)source_ptr;
    do {
      current_char = *source_ptr;
      source_ptr[output_buffer] = current_char;
      source_ptr = source_ptr + 1;
    } while (current_char != '\0');
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void ui_library_operation_wrapper(void *operation_data, void *root_node, void *param_3, void *param_4)
// 功能: 库操作包装函数，用于调用树节点操作函数
// 参数:
//   operation_data - 操作数据指针
//   root_node - 根节点指针
//   param_3 - 参数3
//   param_4 - 参数4
// 返回值: 无
// 说明: 这是一个包装函数，调用树节点操作函数并传递特定标志位
void ui_library_operation_wrapper(void *operation_data, void *root_node, void *param_3, void *param_4)

{
  ui_tree_node_operation(operation_data, root_node, param_3, param_4, 0xfffffffffffffffe);
  return;
}



// 函数: longlong ui_copy_library_data(library_data_t *dest_data, library_data_t *src_data)
// 功能: 复制库数据结构，包括基本信息和扩展数据
// 参数:
//   dest_data - 目标数据结构指针
//   src_data - 源数据结构指针
// 返回值: 返回目标数据结构指针
// 说明: 该函数复制库数据结构的各个字段，包括偏移量20、32、40、64、88、120、152、160、168、172等位置的数据
longlong ui_copy_library_data(library_data_t *dest_data, library_data_t *src_data)

{
  uint64_t temp_data;
  
  // 初始化复制操作
  ui_memory_copy_init();
  
  // 复制偏移量32处的数据
  ui_memory_copy_init(dest_data + 0x20, src_data + 0x20);
  
  // 复制各个字段
  *(int8_t *)(dest_data + 0x40) = *(int8_t *)(src_data + 0x40);  // 标志字段
  *(int32_t *)(dest_data + 0x44) = *(int32_t *)(src_data + 0x44);  // 整数字段1
  *(uint64_t *)(dest_data + 0x48) = *(uint64_t *)(src_data + 0x48);  // 长整数字段1
  *(int32_t *)(dest_data + 0x50) = *(int32_t *)(src_data + 0x50);  // 整数字段2
  
  // 复制偏移量88处的数据
  ui_memory_copy_init(dest_data + 0x58, src_data + 0x58);
  
  // 复制偏移量120处的数据
  ui_memory_copy_init(dest_data + 0x78, src_data + 0x78);
  
  // 复制偏移量160处的数据
  temp_data = *(uint64_t *)(src_data + 0xa0);
  *(uint64_t *)(dest_data + 0x98) = *(uint64_t *)(src_data + 0x98);  // 长整数字段2
  *(uint64_t *)(dest_data + 0xa0) = temp_data;                      // 长整数字段3
  *(int32_t *)(dest_data + 0xa8) = *(int32_t *)(src_data + 0xa8);  // 整数字段3
  *(int32_t *)(dest_data + 0xac) = *(int32_t *)(src_data + 0xac);  // 整数字段4
  
  return (longlong)dest_data;
}



// 函数: ulonglong ui_parse_pe_resource_section(longlong pe_header, longlong section_offset, longlong resource_data)
// 功能: 解析PE文件的资源节区，提取资源信息
// 参数:
//   pe_header - PE文件头指针
//   section_offset - 节区偏移量
//   resource_data - 资源数据指针
// 返回值: 成功返回资源数据地址，失败返回0
// 说明: 此函数解析PE文件头中的资源节区，查找RSDS签名并提取调试信息
ulonglong ui_parse_pe_resource_section(longlong pe_header, longlong section_offset, longlong resource_data)

{
  uint pe_signature;
  uint section_count;
  uint resource_index;
  ulonglong section_table_offset;
  longlong optional_header_offset;
  int *section_table_ptr;
  uint resource_rva;
  ulonglong resource_dir_offset;
  uint resource_size;
  uint *resource_data_ptr;
  
  // 读取PE签名和可选头偏移
  optional_header_offset = *(int *)(resource_data + 0x3c) + section_offset;
  *(uint *)(pe_header + 0x50) = *(uint *)(optional_header_offset + 0x50);  // 资源表RVA
  *(uint *)(pe_header + 0x44) = *(uint *)(optional_header_offset + 8);   // 节区对齐
  
  // 检查是否为可执行文件
  if ((*(ushort *)(optional_header_offset + 0x16) & 0x200) != 0) {
    *(uchar *)(pe_header + 0x40) = 1;  // 标记为可执行文件
  }
  
  // 计算资源目录偏移
  resource_rva = *(uint *)(optional_header_offset + 0xbc);
  section_table_offset = resource_rva * 0x2492492492492493;  // 除法优化
  resource_size = (uint)((resource_rva - resource_rva / 7 >> 1) + resource_rva / 7 >> 4);
  if (resource_size == 0) {
resource_section_exit:
    section_table_offset = section_table_offset & 0xffffffffffffff00;
  }
  else {
    resource_index = 0;
    if (resource_size != 0) {
      section_table_ptr = (int *)((ulonglong)*(uint *)(optional_header_offset + 0xb8) + 0xc + section_offset);
      do {
        if ((section_table_ptr[1] != 0) && (*section_table_ptr == 2)) {
          resource_data_ptr = (uint *)((ulonglong)(uint)section_table_ptr[2] + section_offset);
          if (*resource_data_ptr != 0x53445352) goto resource_section_exit;  // RSDS签名检查
          *(uint *)(pe_header + 0xac) = resource_data_ptr[5];  // 调试信息时间戳
          (**(code **)(*(longlong *)(pe_header + 0x78) + 0x10))
                    ((longlong *)(pe_header + 0x78),resource_data_ptr + 6);
          section_table_offset = (ulonglong)*resource_data_ptr;
          *(uint *)(pe_header + 0xa8) = *resource_data_ptr;     // 调试信息GUID低32位
          pe_signature = resource_data_ptr[2];                 // GUID中间32位
          section_count = resource_data_ptr[3];                 // GUID高32位
          resource_index = resource_data_ptr[4];                // 调试信息路径偏移
          *(uint *)(pe_header + 0x98) = resource_data_ptr[1];  // 调试信息签名
          *(uint *)(pe_header + 0x9c) = pe_signature;
          *(uint *)(pe_header + 0xa0) = section_count;
          *(uint *)(pe_header + 0xa4) = resource_index;
        }
        resource_index = resource_index + 1;
        section_table_ptr = section_table_ptr + 7;
      } while (resource_index < resource_size);
    }
    section_table_offset = CONCAT71((int7)(section_table_offset >> 8),1);
  }
  return section_table_offset;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void ui_load_library_with_resource_check(longlong library_info)
// 功能: 加载库文件并检查资源信息
// 参数:
//   library_info - 库信息结构体指针
// 返回值: 无
// 说明: 此函数加载指定的库文件，解析其PE头中的资源信息，并将其添加到资源树中
void ui_load_library_with_resource_check(longlong library_info)

{
  short *library_handle;
  uint64_t *library_node_ptr;
  uint64_t *next_node_ptr;
  void *library_path_ptr;
  uint64_t *insert_position_ptr;
  ulonglong path_length;
  int8_t stack_guard_buffer [32];
  short **library_handle_ptr;
  short *loaded_library_handle;
  uint64_t operation_flag;
  int8_t temp_buffer_1e8 [16];
  longlong resource_data [4];
  int8_t temp_buffer_1b8 [8];
  longlong pe_base_address;
  uint library_flags;
  int32_t pe_header_offset;
  short *module_base_ptr;
  int8_t resource_buffer [272];
  ulonglong stack_guard_value;
  
  operation_flag = 0xfffffffffffffffe;
  // 栈保护值初始化 - 使用随机种子与栈地址异或生成保护值
  stack_guard_value = _DAT_180bf00a8 ^ (ulonglong)stack_guard_buffer;  // _DAT_180bf00a8: 栈保护随机种子
  library_path_ptr = &DAT_18098bc73;
  if (*(void **)(library_info + 8) != (void *)0x0) {
    library_path_ptr = *(void **)(library_info + 8);
  }
  library_handle = (short *)LoadLibraryA(library_path_ptr);
  if (library_handle != (short *)0x0) {
    insert_position_ptr = (uint64_t *)&DAT_180c96790;
    library_node_ptr = _DAT_180c967a0;
    loaded_library_handle = library_handle;
    if (_DAT_180c967a0 != (uint64_t *)0x0) {
      do {
        if ((short *)library_node_ptr[4] < library_handle) {
          next_node_ptr = (uint64_t *)*library_node_ptr;
        }
        else {
          next_node_ptr = (uint64_t *)library_node_ptr[1];
          insert_position_ptr = library_node_ptr;
        }
        library_node_ptr = next_node_ptr;
      } while (next_node_ptr != (uint64_t *)0x0);
      if ((insert_position_ptr != (uint64_t *)&DAT_180c96790) && ((short *)insert_position_ptr[4] <= library_handle))
      goto library_loaded;
    }
    ui_parse_pe_resource_section(library_info,resource_buffer);
    ui_initialize_resource_data(resource_data);
    module_base_ptr = library_handle;
    (**(code **)(resource_data[0] + 0x10))(resource_data,resource_buffer);
    library_flags = *(uint *)(library_info + 0x10);
    path_length = (ulonglong)library_flags;
    if (*(longlong *)(library_info + 8) != 0) {
      ui_copy_library_path(temp_buffer_1b8,path_length);
    }
    if (library_flags != 0) {
                    // WARNING: Subroutine does not return
      memcpy(pe_base_address,*(uint64_t *)(library_info + 8),path_length);
    }
    if (pe_base_address != 0) {
      *(int8_t *)(path_length + pe_base_address) = 0;
    }
    pe_header_offset = *(int32_t *)(library_info + 0x1c);
    if (*module_base_ptr == 0x5a4d) {
      ui_parse_pe_header(resource_data,module_base_ptr,module_base_ptr);
    }
    insert_position_ptr = (uint64_t *)&DAT_180c96790;
    library_node_ptr = _DAT_180c967a0;
    while (library_node_ptr != (uint64_t *)0x0) {
      if ((short *)library_node_ptr[4] < library_handle) {
        library_node_ptr = (uint64_t *)*library_node_ptr;
      }
      else {
        insert_position_ptr = library_node_ptr;
        library_node_ptr = (uint64_t *)library_node_ptr[1];
      }
    }
    if ((insert_position_ptr == (uint64_t *)&DAT_180c96790) || (library_handle < (short *)insert_position_ptr[4])) {
      library_handle_ptr = &loaded_library_handle;
      insert_position_ptr = (uint64_t *)ui_insert_library_node(insert_position_ptr,temp_buffer_1e8);
      insert_position_ptr = (uint64_t *)*insert_position_ptr;
    }
    ui_setup_library_resource_handlers(insert_position_ptr + 5,resource_data);
    ui_cleanup_resource_data(resource_data);
  }
library_loaded:
                    // WARNING: Subroutine does not return
  cleanup_stack_guard(stack_guard_value ^ (ulonglong)stack_guard_buffer);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void ui_create_process_snapshot(void)
// 功能: 创建进程快照用于模块枚举
// 参数: 无
// 返回值: 无
// 说明: 此函数使用Toolhelp32 API创建当前进程的快照，用于枚举加载的模块
void ui_create_process_snapshot(void)

{
  int lock_result;
  int32_t process_id;
  uint64_t module_handle;
  longlong snapshot_handle;
  int8_t stack_guard_buffer [128];
  uint64_t operation_flag;
  uint64_t mutex_handle;
  int8_t module_entry_buffer [748];
  ulonglong stack_guard_value;
  
  operation_flag = 0xfffffffffffffffe;
  // 栈保护值初始化 - 使用随机种子与栈地址异或生成保护值
  stack_guard_value = _DAT_180bf00a8 ^ (ulonglong)stack_guard_buffer;  // _DAT_180bf00a8: 栈保护随机种子
  mutex_handle = 0x180c96740;
  lock_result = _Mtx_lock(0x180c96740);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  module_handle = GetModuleHandleA(0);
  process_id = GetProcessId(module_handle);
  snapshot_handle = CreateToolhelp32Snapshot(0x18,process_id);
  while( true ) {
    if (snapshot_handle != -1) {
                    // WARNING: Subroutine does not return
      memset(module_entry_buffer,0,0x234);
    }
    lock_result = GetLastError();
    if (lock_result != 0x18) break;
    snapshot_handle = CreateToolhelp32Snapshot(0x18,process_id);
  }
  lock_result = _Mtx_unlock(0x180c96740);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
                    // WARNING: Subroutine does not return
  cleanup_stack_guard(stack_guard_value ^ (ulonglong)stack_guard_buffer);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void ui_tree_operation_wrapper(uint64_t operation_data, uint64_t root_node, 
//                              uint64_t param_3, uint64_t param_4)
// 功能: 树操作包装函数，用于执行树节点的特定操作
// 参数:
//   operation_data - 操作数据
//   root_node - 根节点
//   param_3 - 参数3
//   param_4 - 参数4
// 返回值: 无
// 说明: 这是一个包装函数，调用树节点操作函数并传递特定标志位
void ui_tree_operation_wrapper(uint64_t operation_data, uint64_t root_node, 
                             uint64_t param_3, uint64_t param_4)

{
  ui_perform_tree_node_operation(operation_data,_DAT_180c967a0,param_3,param_4,0xfffffffffffffffe);  // _DAT_180c967a0: 库资源树根节点指针
  return;
}





// 函数: void ui_tree_cleanup_operation(uint64_t param_1, uint64_t *node_ptr, 
//                                  uint64_t param_3, uint64_t param_4)
// 功能: 树清理操作函数，用于清理树节点并释放资源
// 参数:
//   param_1 - 参数1
//   node_ptr - 节点指针
//   param_3 - 参数3
//   param_4 - 参数4
// 返回值: 无
// 说明: 此函数递归清理树节点，释放相关资源
void ui_tree_cleanup_operation(uint64_t param_1, uint64_t *node_ptr, 
                             uint64_t param_3, uint64_t param_4)

{
  if (param_2 != (uint64_t *)0x0) {
    ui_perform_tree_node_operation(&DAT_180c96790,*node_ptr,param_3,param_4,0xfffffffffffffffe);
    ui_cleanup_tree_node_resources(node_ptr + 5);
                    // WARNING: Subroutine does not return
    ui_free_tree_node_memory(node_ptr);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: uint64_t * ui_find_library_node_in_resource_tree(uint64_t param_1, uint64_t *param_2, uint64_t param_3, 
//                                     longlong *param_4, ulonglong *param_5)
// 功能: 在库资源树中查找库节点，如果未找到则创建新节点
// 参数:
//   param_1 - 搜索参数1
//   param_2 - 节点指针数组
//   param_3 - 搜索参数3
//   param_4 - 当前节点指针
//   param_5 - 搜索键值指针
// 返回值: 返回找到或创建的节点指针
// 说明: 此函数在二叉搜索树中查找库节点，支持自动创建新节点

{
  longlong *node_bounds_ptr;
  uint64_t *current_node_ptr;
  ulonglong search_key;
  longlong new_node_ptr;
  uint64_t *insert_position_ptr;
  int32_t insertion_flag;
  bool should_insert_left;
  
  if ((param_4 == _DAT_180c96790) || (param_4 == (longlong *)&DAT_180c96790)) {
    // _DAT_180c96790: 库资源树头节点指针
    // _DAT_180c967b0: 库资源树节点计数器
    if ((_DAT_180c967b0 != 0) && (param_4 = _DAT_180c96790, (ulonglong)_DAT_180c96790[4] < *param_5)
       ) goto node_found;
  }
  else {
    node_bounds_ptr = (longlong *)ui_get_library_node_bounds(param_4);
    if (((ulonglong)param_4[4] < *param_5) && (*param_5 < (ulonglong)node_bounds_ptr[4])) {
      if (*param_4 != 0) {
        param_4 = node_bounds_ptr;
      }
node_found:
      if (param_4 != (longlong *)0x0) {
        ui_setup_library_resource_node();
        return param_2;
      }
    }
  }
  insert_position_ptr = (uint64_t *)&DAT_180c96790;
  should_insert_left = true;
  if (_DAT_180c967a0 != (uint64_t *)0x0) {
    current_node_ptr = _DAT_180c967a0;
    do {
      insert_position_ptr = current_node_ptr;
      should_insert_left = *param_5 < (ulonglong)insert_position_ptr[4];
      if (should_insert_left) {
        current_node_ptr = (uint64_t *)insert_position_ptr[1];
      }
      else {
        current_node_ptr = (uint64_t *)*insert_position_ptr;
      }
    } while (current_node_ptr != (uint64_t *)0x0);
  }
  current_node_ptr = insert_position_ptr;
  if (should_insert_left) {
    if (insert_position_ptr == _DAT_180c96798) {  // _DAT_180c96798: 库资源树尾节点指针
      search_key = *param_5;
      goto create_new_node;
    }
    current_node_ptr = (uint64_t *)ui_allocate_tree_node(insert_position_ptr);
  }
  search_key = *param_5;
  if (search_key <= (ulonglong)current_node_ptr[4]) {
    *param_2 = current_node_ptr;
    return param_2;
  }
create_new_node:
  if ((insert_position_ptr == (uint64_t *)&DAT_180c96790) || (search_key < (ulonglong)insert_position_ptr[4])) {
    insertion_flag = 0;
  }
  else {
    insertion_flag = 1;
  }
  // 使用内存分配器和树节点类型信息分配新节点
  new_node_ptr = ui_allocate_library_node(_DAT_180c8ed18, 0xd8, DAT_180c967b8);
  *(ulonglong *)(new_node_ptr + 0x20) = *param_5;
  ui_initialize_node_data(new_node_ptr + 0x28);
  // 将新节点插入到树中
  ui_insert_node_into_tree(new_node_ptr, insert_position_ptr, &DAT_180c96790, insertion_flag);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void ui_tree_node_insert(uint64_t param_1, uint64_t param_2, void *param_3, 
//                           uint64_t param_4, ulonglong *param_5)
// 功能: 在树中插入新节点，维护树的平衡和顺序
// 参数:
//   param_1 - 参数1
//   param_2 - 参数2
//   param_3 - 参数3
//   param_4 - 参数4
//   param_5 - 参数5指针
// 返回值: 无
// 说明: 此函数在二叉树中插入新节点，保持树的排序和平衡

{
  longlong lVar1;
  int32_t uVar2;
  
  if ((((char)param_4 == '\0') && (param_3 != &DAT_180c96790)) &&
     (*(ulonglong *)(param_3 + 0x20) <= *param_5)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  // 使用内存分配器和树节点类型信息分配新节点
  lVar1 = ui_allocate_library_node(_DAT_180c8ed18, 0xd8, DAT_180c967b8, param_4, 0xfffffffffffffffe);
  *(ulonglong *)(lVar1 + 0x20) = *param_5;
  ui_initialize_node_data(lVar1 + 0x28);
  // 将新节点插入到树中
  ui_insert_node_into_tree(lVar1, param_3, &DAT_180c96790, uVar2);
}





// 函数: void ui_cleanup_resource_pointers(longlong resource_ptr)
// 功能: 清理资源指针和相关数据结构
// 参数:
//   resource_ptr - 资源指针
// 返回值: 无
// 说明: 此函数清理资源指针，释放相关内存，重置数据结构
void ui_cleanup_resource_pointers(longlong resource_ptr)

{
  // 重置资源指针为默认值
  *(uint64_t *)(resource_ptr + 0x80) = &UNK_180a3c3e0;
  if (*(longlong *)(resource_ptr + 0x88) != 0) {
    // 释放资源内存
    ui_release_resource_memory();
  }
  *(uint64_t *)(resource_ptr + 0x88) = 0;
  *(int32_t *)(resource_ptr + 0x98) = 0;
  *(uint64_t *)(resource_ptr + 0x80) = &UNK_18098bcb0;
  
  // 清理第二组资源指针
  *(uint64_t *)(resource_ptr + 0x60) = &UNK_180a3c3e0;
  if (*(longlong *)(resource_ptr + 0x68) != 0) {
    // 释放资源内存
    ui_release_resource_memory();
  }
  *(uint64_t *)(resource_ptr + 0x68) = 0;
  *(int32_t *)(resource_ptr + 0x78) = 0;
  *(uint64_t *)(resource_ptr + 0x60) = &UNK_18098bcb0;
  
  // 清理第三组资源指针
  *(uint64_t *)(resource_ptr + 0x28) = &UNK_180a3c3e0;
  if (*(longlong *)(resource_ptr + 0x30) != 0) {
    // 释放资源内存
    ui_release_resource_memory();
  }
  *(uint64_t *)(resource_ptr + 0x30) = 0;
  *(int32_t *)(resource_ptr + 0x40) = 0;
  *(uint64_t *)(resource_ptr + 0x28) = &UNK_18098bcb0;
  
  // 清理第四组资源指针
  *(uint64_t *)(resource_ptr + 8) = &UNK_180a3c3e0;
  if (*(longlong *)(resource_ptr + 0x10) != 0) {
    // 释放资源内存
    ui_release_resource_memory();
  }
  *(uint64_t *)(resource_ptr + 0x10) = 0;
  *(int32_t *)(resource_ptr + 0x20) = 0;
  *(uint64_t *)(resource_ptr + 8) = &UNK_18098bcb0;
  return;
}



// 函数: uint64_t * ui_free_managed_memory_block(uint64_t *memory_ptr, ulonglong flags)
// 功能: 释放托管内存块，根据标志决定是否真正释放
// 参数:
//   memory_ptr - 内存块指针
//   flags - 释放标志位
// 返回值: 返回内存块指针
// 说明: 此函数释放托管内存块，根据标志位决定是否执行实际的内存释放操作
uint64_t * ui_free_managed_memory_block(uint64_t *memory_ptr, ulonglong flags)

{
  *memory_ptr = &UNK_180a3dca0;
  if ((flags & 1) != 0) {
    // 根据标志位执行实际的内存释放
    free(memory_ptr, 0x160);
  }
  return memory_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: void pass_managed_library_callback_method_pointers(uint64_t callback_data)
// 功能: 传递托管库回调方法指针，用于托管与非托管代码的交互
// 参数:
//   callback_data - 回调数据指针，包含托管方法的回调信息
// 返回值: 无
// 说明: 此函数通过全局函数指针表调用托管代码的回调方法，实现托管与非托管代码的交互
void pass_managed_library_callback_method_pointers(uint64_t callback_data)

{
  // 通过托管库函数指针表调用回调方法
  // _DAT_180c8f008: 托管库函数指针表
  (**(code **)(*_DAT_180c8f008 + 0x40))(_DAT_180c8f008, callback_data);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: void pass_controller_methods(uint64_t controller_methods)
// 功能: 传递控制器方法指针，用于UI控制器方法的注册
// 参数:
//   controller_methods - 控制器方法指针，包含UI控制相关的方法信息
// 返回值: 无
// 说明: 此函数注册UI控制器方法到全局变量中，供UI系统调用
void pass_controller_methods(uint64_t controller_methods)

{
  // 注册控制器方法到全局变量
  // _DAT_180c8f018: 控制器方法指针
  _DAT_180c8f018 = controller_methods;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: void pass_managed_initialize_method_pointer(uint64_t init_method_ptr)
// 功能: 传递托管初始化方法指针，用于UI系统的初始化
// 参数:
//   init_method_ptr - 初始化方法指针，包含托管代码的初始化逻辑
// 返回值: 无
// 说明: 此函数注册托管初始化方法到全局变量中，供UI系统初始化时调用
void pass_managed_initialize_method_pointer(uint64_t init_method_ptr)

{
  // 注册初始化方法到全局变量
  // _DAT_180c8f010: 初始化方法指针
  _DAT_180c8f010 = init_method_ptr;
  return;
}



// 函数: uint64_t ui_cleanup_managed_resource(uint64_t resource_ptr, ulonglong flags)
// 功能: 清理托管资源，根据标志决定是否释放资源
// 参数:
//   resource_ptr - 资源指针
//   flags - 清理标志位
// 返回值: 返回资源指针
// 说明: 此函数清理托管资源，根据标志位决定是否执行实际的资源释放操作
uint64_t ui_cleanup_managed_resource(uint64_t resource_ptr, ulonglong flags)

{
  // 释放资源引用
  ui_release_resource_reference();
  if ((flags & 1) != 0) {
    // 根据标志位执行实际的资源释放
    free(resource_ptr, 400);
  }
  return resource_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void ui_cleanup_global_data_structure(uint64_t *global_ptr)
// 功能: 清理全局数据结构，重置为初始状态
// 参数:
//   global_ptr - 全局数据结构指针
// 返回值: 无
// 说明: 此函数清理全局数据结构，释放内存并重置指针
void ui_cleanup_global_data_structure(uint64_t *global_ptr)

{
  // 重置全局数据结构为默认值
  *global_ptr = &UNK_180a3dcb0;
  // 重置托管库函数指针表
  _DAT_180c8f008 = 0;                  // _DAT_180c8f008: 托管库函数指针表（重置）
  if (global_ptr[0x2d] != 0) {
    // 释放资源内存
    ui_cleanup_resource_memory();
  }
  global_ptr[1] = &UNK_180a3dca0;
  return;
}





