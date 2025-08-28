#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part003.c - UI系统底层支持函数 (23个函数)
// 该文件包含UI系统的底层支持函数，主要用于日志记录、错误处理、内存管理、字符串处理等

// ============================================================================
// UI系统日志记录函数
// ============================================================================

// 函数: 格式化并记录UI系统日志消息
// 原始函数名: FUN_1806501d0
// 功能: 格式化日志消息并记录到UI系统日志中
// 参数: param_1-日志上下文, param_2-日志级别, param_3-格式字符串, param_4-可变参数, param_5-附加数据
void format_ui_log_message(undefined8 log_context, undefined8 log_level, undefined8 format_string, 
                        longlong variable_args, undefined8 additional_data)
{
  ulonglong *security_check;
  char *thread_local_flag;
  undefined1 security_buffer[32];
  undefined8 formatted_data_ptr;
  undefined8 zero_flag;
  undefined1 log_buffer[512];
  ulonglong stack_guard;
  
  if (variable_args != 0) {
    // 安全检查：堆栈保护
    stack_guard = _DAT_180bf00a8 ^ (ulonglong)security_buffer;
    
    // 获取线程本地存储标志
    thread_local_flag = (char *)(*(longlong *)
                       ((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) + 8);
    
    // 检查是否已经在处理中（防止递归）
    if (*thread_local_flag == '\0') {
      *thread_local_flag = '\x01';  // 设置处理中标志
      
      // 获取标准IO函数指针
      security_check = (ulonglong *)func_0x00018004b9a0();
      
      // 准备格式化参数
      formatted_data_ptr = additional_data;
      zero_flag = 0;
      
      // 格式化日志消息
      __stdio_common_vsprintf(*security_check | 2, log_buffer, 0x1ff, variable_args);
      
      *thread_local_flag = '\0';  // 清除处理中标志
      
      // 调用实际日志记录函数
      log_ui_system_message(log_context, log_level, format_string, log_buffer);
    }
    
    // 安全检查结束
    perform_security_check(stack_guard ^ (ulonglong)security_buffer);
  }
  return;
}

// 函数: 记录UI系统错误日志
// 原始函数名: FUN_180650219
// 功能: 记录UI系统错误日志
// 参数: param_1-错误代码
void log_ui_system_error(longlong error_code)
{
  longlong register_value;
  ulonglong *stdio_ptr;
  char *thread_local_flag;
  ulonglong stack_cookie;
  
  // 获取线程本地存储标志
  thread_local_flag = (char *)(*(longlong *)(register_value + error_code * 8) + 8);
  
  // 检查是否已经在处理中
  if (*thread_local_flag == '\0') {
    *thread_local_flag = '\x01';  // 设置处理中标志
    
    // 获取标准IO函数指针
    stdio_ptr = (ulonglong *)func_0x00018004b9a0();
    
    // 格式化错误消息
    __stdio_common_vsprintf(*stdio_ptr | 2, &stack0x00000030, 0x1ff);
    
    *thread_local_flag = '\0';  // 清除处理中标志
    
    // 记录错误消息
    log_ui_system_message();
  }
  
  // 安全检查
  perform_security_check(stack_cookie ^ (ulonglong)&stack0x00000000);
}

// 函数: UI系统空操作函数
// 原始函数名: FUN_1806502a2
// 功能: 空操作函数，用于占位或同步
void ui_system_no_operation(void)
{
  return;
}

// ============================================================================
// UI系统消息处理函数
// ============================================================================

// 函数: 发送UI系统消息
// 原始函数名: FUN_1806502b0
// 功能: 发送UI系统消息
// 参数: param_1-消息类型, param_2-消息参数1, param_3-消息参数2, param_4-消息参数3
void send_ui_system_message(undefined8 message_type, undefined8 message_param1, 
                          undefined8 message_param2, undefined8 message_param3)
{
  undefined8 message_data;
  
  // 准备消息数据
  message_data = message_param3;
  
  // 格式化并发送消息
  format_ui_log_message(message_type, message_param1, 0, message_param2, &message_data);
  
  return;
}

// 函数: 广播UI系统消息
// 原始函数名: FUN_1806502e0
// 功能: 向所有UI组件广播系统消息
// 参数: param_1-消息ID, param_2-消息数据1, param_3-消息数据2, param_4-消息数据3
void broadcast_ui_system_message(undefined8 message_id, undefined8 message_data1, 
                               undefined8 message_data2, undefined8 message_data3)
{
  undefined8 msg_data1;
  undefined8 msg_data2;
  undefined8 msg_data3;
  
  // 准备消息数据
  msg_data1 = message_data1;
  msg_data2 = message_data2;
  msg_data3 = message_data3;
  
  // 初始化消息系统（如果需要）
  if (_DAT_180bfbdb4 == 0) {
    initialize_ui_message_system(&DAT_180bfbdb0);
  }
  
  // 如果消息系统可用，则广播消息
  if (_DAT_180bfbdb0 != 0) {
    format_ui_log_message(0, 0, &UNK_180a3db78, message_id, &msg_data1);
  }
  
  return;
}

// 函数: 发送UI系统警告消息
// 原始函数名: FUN_180650340
// 功能: 发送UI系统警告消息
// 参数: param_1-警告代码, param_2-警告数据1, param_3-警告数据2, param_4-警告数据3
void send_ui_system_warning(undefined8 warning_code, undefined8 warning_data1, 
                           undefined8 warning_data2, undefined8 warning_data3)
{
  bool should_log;
  longlong warning_count;
  undefined8 warn_data1;
  undefined8 warn_data2;
  undefined8 warn_data3;
  
  // 准备警告数据
  warn_data1 = warning_data1;
  warn_data2 = warning_data2;
  warn_data3 = warning_data3;
  
  // 初始化警告系统（如果需要）
  if (_DAT_180bfbd84 == 0) {
    initialize_ui_warning_system(&DAT_180bfbd80);
  }
  
  // 检查警告系统是否可用
  if (_DAT_180bfbd80 == 0) {
    // 如果警告系统不可用，尝试使用消息系统
    if (_DAT_180bfbdb4 == 0) {
      initialize_ui_message_system(&DAT_180bfbdb0);
    }
    if (_DAT_180bfbdb0 == 0) {
      return;  // 两个系统都不可用，直接返回
    }
  }
  
  // 线程安全：增加警告计数器
  LOCK();
  warning_count = _DAT_180c9e910 + 1;
  UNLOCK();
  
  // 检查是否超过警告限制
  should_log = _DAT_180c9e910 <= _DAT_180bf72a8;
  _DAT_180c9e910 = warning_count;
  
  // 如果未超过限制，则记录警告
  if (should_log) {
    format_ui_log_message(0, 0, &UNK_180a3db48, warning_code, &warn_data1);
  }
  
  return;
}

// 函数: 发送UI系统调试消息
// 原始函数名: FUN_1806503d0
// 功能: 发送UI系统调试消息
// 参数: param_1-调试级别, param_2-调试数据1, param_3-调试数据2, param_4-调试数据3
void send_ui_system_debug_message(undefined4 debug_level, undefined8 debug_data1, 
                                undefined8 debug_data2, undefined8 debug_data3)
{
  bool should_log;
  ulonglong debug_count;
  undefined8 dbg_data2;
  undefined8 dbg_data3;
  
  // 准备调试数据
  dbg_data2 = debug_data2;
  dbg_data3 = debug_data3;
  
  // 初始化调试系统（如果需要）
  if (_DAT_180bfbd84 == 0) {
    initialize_ui_warning_system(&DAT_180bfbd80);
  }
  
  // 检查调试系统是否可用
  if (_DAT_180bfbd80 == 0) {
    // 如果调试系统不可用，尝试使用消息系统
    if (_DAT_180bfbdb4 == 0) {
      initialize_ui_message_system(&DAT_180bfbdb0);
    }
    if (_DAT_180bfbdb0 == 0) {
      goto skip_logging;  // 两个系统都不可用，跳过记录
    }
  }
  
  // 线程安全：增加调试计数器
  LOCK();
  debug_count = _DAT_180ca8b88 + 1;
  UNLOCK();
  
  // 检查是否超过调试限制
  should_log = _DAT_180ca8b88 <= _DAT_180bf7308;
  _DAT_180ca8b88 = debug_count;
  
  // 如果未超过限制，则记录调试消息
  if (should_log) {
    format_ui_log_message(0, 0, &UNK_180a3db30, debug_data1, &dbg_data2);
  }
  
skip_logging:
  // 调用调试回调函数（如果已注册）
  if (_DAT_180c9e908 != (code *)0x0) {
    (*_DAT_180c9e908)(debug_level, _DAT_180c9eb48);
  }
  
  return;
}

// ============================================================================
// UI系统环境变量处理函数
// ============================================================================

// 函数: 解析UI系统环境变量
// 原始函数名: FUN_180650490
// 功能: 解析UI系统相关的环境变量
// 参数: param_1-环境变量配置结构
void parse_ui_environment_variable(int *env_config)
{
  code *error_handler;
  char uppercase_char;
  uint env_value_length;
  int parsed_value;
  longlong string_length;
  ulonglong char_index;
  ulonglong max_length;
  undefined1 security_buffer[32];
  char *string_end_ptr[2];
  char env_name_buffer[80];
  char env_value_buffer[80];
  ulonglong stack_guard;
  
  // 安全检查：堆栈保护
  stack_guard = _DAT_180bf00a8 ^ (ulonglong)security_buffer;
  
  // 初始化环境变量名称缓冲区
  env_name_buffer[0] = '\0';
  strncpy(env_name_buffer, &UNK_180a3dc10, 0x40);
  env_name_buffer[0x40] = 0;  // 确保字符串终止
  
  // 构建完整的环境变量名称
  strncat(env_name_buffer, *(undefined8 *)(env_config + 4), 0x40);
  env_name_buffer[0x40] = 0;  // 确保字符串终止
  
  // 初始化环境变量值缓冲区
  env_value_buffer[0] = '\0';
  
  // 获取环境变量值
  env_value_length = GetEnvironmentVariableA(env_name_buffer, env_value_buffer, 0x41);
  
  // 检查获取是否成功
  if ((ulonglong)env_value_length - 1 < 0x40) {
    // 计算环境变量值的实际长度
    max_length = 0xffffffffffffffff;
    do {
      char_index = max_length + 1;
      string_length = max_length + 1;
      max_length = char_index;
    } while (env_value_buffer[string_length] != '\0');
    
    // 限制最大长度为64字符
    if (0x40 < char_index) {
      char_index = 0x40;
    }
    
    // 转换为大写字母
    max_length = 0;
    if (char_index != 0) {
      do {
        uppercase_char = toupper((int)env_value_buffer[max_length]);
        env_name_buffer[max_length] = uppercase_char;
        max_length = max_length + 1;
      } while (max_length < char_index);
    }
    
    // 检查长度是否仍然超限
    if (0x40 < char_index) {
      handle_ui_buffer_overflow();
      error_handler = (code *)swi(3);
      (*error_handler)();
      return;
    }
    
    // 终止字符串
    env_name_buffer[char_index] = '\0';
    
    // 检查是否为特殊值
    if ((env_name_buffer[0] == '\0') || 
        (string_length = strstr(&UNK_180a3dc20, env_name_buffer), string_length != 0)) {
      *env_config = 1;  // 特殊值标志
    }
    else {
      // 检查是否为禁用值
      string_length = strstr(&UNK_180a3dbc0, env_name_buffer);
      if (string_length == 0) {
        // 尝试解析为数值
        string_end_ptr[0] = env_name_buffer;
        parsed_value = strtol(env_name_buffer, string_end_ptr, 10);
        
        // 处理单位后缀（如果配置为字节单位）
        if (env_config[2] == 8) {
          uppercase_char = *string_end_ptr[0];
          if (uppercase_char == 'K') {
            string_end_ptr[0] = string_end_ptr[0] + 1;  // 跳过'K'
          }
          else if (uppercase_char == 'M') {
            parsed_value = parsed_value << 10;  // 转换为MB
            string_end_ptr[0] = string_end_ptr[0] + 1;  // 跳过'M'
          }
          else if (uppercase_char == 'G') {
            parsed_value = parsed_value << 0x14;  // 转换为GB
            string_end_ptr[0] = string_end_ptr[0] + 1;  // 跳过'G'
          }
          else {
            // 默认转换为KB
            parsed_value = (int)((longlong)parsed_value + 0x3ffU >> 10);
          }
          // 跳过可选的'B'后缀
          if (*string_end_ptr[0] == 'B') {
            string_end_ptr[0] = string_end_ptr[0] + 1;
          }
        }
        
        // 检查是否还有剩余字符
        if (*string_end_ptr[0] != '\0') {
          // 如果有剩余字符，记录为无效值
          send_ui_system_warning(&UNK_180a3dbd0, *(undefined8 *)(env_config + 4), env_name_buffer);
          env_config[1] = 1;  // 无效值标志
          goto security_check_exit;
        }
        
        *env_config = parsed_value;  // 设置解析的值
      }
      else {
        *env_config = 0;  // 禁用值
      }
    }
    
    env_config[1] = 2;  // 成功解析标志
  }
  else if (DAT_180bf66d8 == '\0') {
    env_config[1] = 1;  // 环境变量未找到
  }
  
security_check_exit:
  // 安全检查结束
  perform_security_check(stack_guard ^ (ulonglong)security_buffer);
}

// 函数: 处理UI系统环境变量值
// 原始函数名: FUN_180650513
// 功能: 处理UI系统环境变量值的内部函数
void process_ui_environment_value(void)
{
  char uppercase_char;
  code *error_handler;
  undefined1 current_char;
  int parsed_value;
  longlong search_result;
  char *parse_end_ptr;
  ulonglong char_index;
  longlong stack_frame_offset;
  int *config_ptr;
  ulonglong register_value;
  ulonglong string_length;
  
  // 计算输入字符串的长度
  register_value = 0xffffffffffffffff;
  do {
    register_value = register_value + 1;
  } while (*(char *)(stack_frame_offset + -9 + register_value) != '\0');
  
  // 限制最大长度为64字符
  if (0x40 < register_value) {
    register_value = register_value;
  }
  
  // 转换为大写字母
  string_length = 0;
  if (register_value != 0) {
    do {
      current_char = toupper((int)*(char *)(stack_frame_offset + -9 + string_length));
      *(undefined1 *)(stack_frame_offset + -0x59 + string_length) = current_char;
      string_length = string_length + 1;
    } while (string_length < register_value);
  }
  
  // 检查长度是否超限
  if (0x40 < register_value) {
    handle_ui_buffer_overflow();
    error_handler = (code *)swi(3);
    (*error_handler)();
    return;
  }
  
  // 终止字符串
  *(undefined1 *)(stack_frame_offset + -0x59 + register_value) = 0;
  
  // 检查是否为空字符串
  if (*(char *)(stack_frame_offset + -0x59) == '\0') {
  empty_string_case:
    *config_ptr = 1;  // 空字符串标志
  }
  else {
    // 检查是否为启用值
    search_result = strstr(&UNK_180a3dc20, stack_frame_offset + -0x59);
    if (search_result != 0) goto empty_string_case;
    
    // 检查是否为禁用值
    search_result = strstr(&UNK_180a3dbc0, stack_frame_offset + -0x59);
    if (search_result == 0) {
      // 尝试解析为数值
      *(longlong *)(stack_frame_offset + -0x69) = stack_frame_offset + -0x59;
      parsed_value = strtol(stack_frame_offset + -0x59, stack_frame_offset + -0x69, 10);
      parse_end_ptr = *(char **)(stack_frame_offset + -0x69);
      
      // 处理单位后缀（如果配置为字节单位）
      if (config_ptr[2] == 8) {
        uppercase_char = *parse_end_ptr;
        if (uppercase_char == 'K') {
          parse_end_ptr = parse_end_ptr + 1;
          *(char **)(stack_frame_offset + -0x69) = parse_end_ptr;
        }
        else if (uppercase_char == 'M') {
          parsed_value = parsed_value << 10;  // 转换为MB
          parse_end_ptr = parse_end_ptr + 1;
          *(char **)(stack_frame_offset + -0x69) = parse_end_ptr;
        }
        else if (uppercase_char == 'G') {
          parsed_value = parsed_value << 0x14;  // 转换为GB
          parse_end_ptr = parse_end_ptr + 1;
          *(char **)(stack_frame_offset + -0x69) = parse_end_ptr;
        }
        else {
          // 默认转换为KB
          parsed_value = (int)((longlong)parsed_value + 0x3ffU >> 10);
        }
        // 跳过可选的'B'后缀
        if (*parse_end_ptr == 'B') {
          parse_end_ptr = parse_end_ptr + 1;
          *(char **)(stack_frame_offset + -0x69) = parse_end_ptr;
        }
      }
      
      // 检查是否还有剩余字符
      if (*parse_end_ptr != '\0') {
        send_ui_system_warning(&UNK_180a3dbd0, *(undefined8 *)(config_ptr + 4), stack_frame_offset + -0x59);
        config_ptr[1] = 1;  // 无效值标志
        goto security_check_exit;
      }
      
      *config_ptr = parsed_value;  // 设置解析的值
    }
    else {
      *config_ptr = 0;  // 禁用值
    }
  }
  
  config_ptr[1] = 2;  // 成功解析标志
  
security_check_exit:
  // 安全检查结束
  perform_security_check(*(ulonglong *)(stack_frame_offset + 0x47) ^ (ulonglong)&stack0x00000000);
}

// 函数: UI系统环境变量处理结束函数
// 原始函数名: FUN_1806505b5
// 功能: UI系统环境变量处理的结束函数
void ui_environment_processing_end(void)
{
  longlong stack_frame_offset;
  
  // 安全检查结束
  perform_security_check(*(ulonglong *)(stack_frame_offset + 0x47) ^ (ulonglong)&stack0x00000000);
}

// 函数: 处理UI系统数值环境变量
// 原始函数名: FUN_1806505d6
// 功能: 处理UI系统数值类型的环境变量
void process_ui_numeric_environment(void)
{
  char unit_char;
  int parsed_value;
  char *parse_end_ptr;
  longlong stack_frame_offset;
  int *config_ptr;
  
  // 设置解析指针
  *(longlong *)(stack_frame_offset + -0x69) = stack_frame_offset + -0x59;
  parsed_value = strtol(stack_frame_offset + -0x59, stack_frame_offset + -0x69, 10);
  parse_end_ptr = *(char **)(stack_frame_offset + -0x69);
  
  // 处理单位后缀（如果配置为字节单位）
  if (config_ptr[2] == 8) {
    unit_char = *parse_end_ptr;
    if (unit_char == 'K') {
      parse_end_ptr = parse_end_ptr + 1;
      *(char **)(stack_frame_offset + -0x69) = parse_end_ptr;
    }
    else if (unit_char == 'M') {
      parsed_value = parsed_value << 10;  // 转换为MB
      parse_end_ptr = parse_end_ptr + 1;
      *(char **)(stack_frame_offset + -0x69) = parse_end_ptr;
    }
    else if (unit_char == 'G') {
      parsed_value = parsed_value << 0x14;  // 转换为GB
      parse_end_ptr = parse_end_ptr + 1;
      *(char **)(stack_frame_offset + -0x69) = parse_end_ptr;
    }
    else {
      // 默认转换为KB
      parsed_value = (int)((longlong)parsed_value + 0x3ffU >> 10);
    }
    // 跳过可选的'B'后缀
    if (*parse_end_ptr == 'B') {
      parse_end_ptr = parse_end_ptr + 1;
      *(char **)(stack_frame_offset + -0x69) = parse_end_ptr;
    }
  }
  
  // 检查解析结果
  if (*parse_end_ptr == '\0') {
    *config_ptr = parsed_value;  // 设置解析的值
    config_ptr[1] = 2;  // 成功解析标志
  }
  else {
    // 有剩余字符，记录为无效值
    send_ui_system_warning(&UNK_180a3dbd0, *(undefined8 *)(config_ptr + 4), stack_frame_offset + -0x59);
    config_ptr[1] = 1;  // 无效值标志
  }
  
  // 安全检查结束
  perform_security_check(*(ulonglong *)(stack_frame_offset + 0x47) ^ (ulonglong)&stack0x00000000);
}

// 函数: 处理UI系统默认环境变量
// 原始函数名: FUN_18065067e
// 功能: 处理UI系统默认环境变量情况
void process_ui_default_environment(void)
{
  longlong stack_frame_offset;
  longlong config_ptr;
  
  // 检查是否使用默认值
  if (DAT_180bf66d8 == '\0') {
    *(undefined4 *)(config_ptr + 4) = 1;  // 使用默认值标志
  }
  
  // 安全检查结束
  perform_security_check(*(ulonglong *)(stack_frame_offset + 0x47) ^ (ulonglong)&stack0x00000000);
}

// 函数: 处理UI系统缓冲区溢出
// 原始函数名: FUN_180650697
// 功能: 处理UI系统缓冲区溢出错误
void handle_ui_buffer_overflow(void)
{
  code *error_handler;
  
  // 调用错误处理函数
  handle_ui_buffer_overflow_internal();
  
  // 调用系统错误处理器
  error_handler = (code *)swi(3);
  (*error_handler)();
  
  return;
}

// ============================================================================
// UI系统数学计算函数
// ============================================================================

// 函数: 计算UI射线与平面交点
// 原始函数名: FUN_1806506a0
// 功能: 计算UI射线与平面的交点
// 参数: param_1-输出交点, param_2-射线起点, param_3-平面法向量, param_4-平面上的点
// 返回值: 是否相交（true=相交，false=不相交）
bool calculate_ui_ray_plane_intersection(float *intersection_point, float *ray_origin, 
                                       float *plane_normal, float *plane_point)
{
  float plane_normal_x;
  float ray_direction_x;
  float plane_point_x;
  float ray_direction_y;
  float plane_normal_y;
  float plane_point_y;
  float plane_normal_z;
  float ray_direction_z;
  float denominator;
  float plane_normal_dot_ray_y;
  float plane_normal_dot_ray_z;
  float plane_normal_dot_ray_x;
  float ray_origin_dot_plane_normal;
  float plane_point_dot_plane_normal;
  float ray_direction_dot_plane_normal;
  float intersection_distance;
  
  // 计算平面法向量分量
  plane_normal_x = plane_normal[4];
  ray_direction_x = ray_origin[6];
  plane_point_x = plane_point[6];
  plane_normal_y = plane_normal[5];
  ray_direction_y = plane_point[5];
  plane_normal_z = plane_normal[6];
  
  // 计算分母（平面法向量与射线方向的点积）
  denominator = plane_normal_y * ray_direction_y - plane_normal_z * ray_direction_x;
  plane_normal_dot_ray_x = plane_point_x * plane_normal_z - plane_normal_x * ray_direction_x;
  plane_normal_dot_ray_y = plane_normal_x * ray_direction_y - plane_point_x * plane_normal_y;
  plane_normal_dot_ray_z = plane_normal_x * ray_direction_x - plane_normal_y * plane_point_x;
  
  // 计算分子（射线起点到平面的距离）
  ray_origin_dot_plane_normal = plane_normal_dot_ray_y * ray_origin[5] + 
                               plane_normal_dot_ray_x * ray_origin[4] + 
                               plane_normal_dot_ray_z * ray_direction_x;
  
  // 检查是否相交（分母不为零）
  if (ray_origin_dot_plane_normal != 0.0) {
    // 计算平面上的点到射线起点的距离
    plane_point_dot_plane_normal = ray_origin[5] * ray_origin[1] + 
                                  ray_origin[4] * *ray_origin + 
                                  ray_direction_x * ray_origin[2];
    
    // 计算交点距离
    intersection_distance = 1.0 / ray_origin_dot_plane_normal;
    
    // 计算平面法向量与射线起点的点积
    plane_normal_dot_ray_x = plane_normal_y * plane_normal[1] + 
                           plane_normal_x * *plane_normal + 
                           plane_normal_z * plane_normal[2];
    
    // 计算平面法向量与平面点的点积
    plane_normal_dot_ray_y = ray_direction_y * plane_point[1] + 
                           plane_point_x * *plane_point + 
                           ray_direction_x * plane_point[2];
    
    // 计算射线方向与平面法向量的点积
    ray_direction_dot_plane_normal = ray_origin[5];
    
    // 计算交点坐标
    *intersection_point = ((ray_direction_x * ray_direction_y - ray_origin[5] * ray_direction_x) * plane_normal_dot_ray_x + 
                         plane_point_dot_plane_normal * plane_normal_dot_ray_x +
                         (ray_origin[5] * plane_normal_z - ray_origin[6] * plane_normal_y) * plane_normal_dot_ray_y) * intersection_distance;
    
    intersection_point[1] = ((ray_origin[4] * ray_direction_x - ray_origin[6] * plane_point_x) * plane_normal_dot_ray_x + 
                           plane_point_dot_plane_normal * plane_normal_dot_ray_y +
                           (ray_origin[6] * plane_normal_x - ray_origin[4] * plane_normal_z) * plane_normal_dot_ray_y) * intersection_distance;
    
    intersection_point[2] = ((ray_direction_dot_plane_normal * plane_point_x - ray_origin[4] * ray_direction_y) * plane_normal_dot_ray_x + 
                           plane_point_dot_plane_normal * plane_normal_dot_ray_z +
                           (ray_origin[4] * plane_normal_x - ray_direction_dot_plane_normal * plane_normal_x) * plane_normal_dot_ray_y) * intersection_distance;
    
    intersection_point[3] = 3.4028235e+38;  // 设置最大浮点数作为标记
  }
  
  return ray_origin_dot_plane_normal != 0.0;
}

// 函数: 计算UI变换矩阵
// 原始函数名: FUN_180650782
// 功能: 计算UI元素的变换矩阵
// 参数: param_1-输出矩阵, param_2-输入矩阵1, param_3-缩放因子1, param_4-缩放因子2
// 返回值: 计算是否成功
undefined1 calculate_ui_transform_matrix(float *output_matrix, float *input_matrix1, 
                                       float scale_factor1, float scale_factor2)
{
  float matrix_element_11;
  float matrix_element_12;
  float matrix_element_13;
  float matrix_element_21;
  float matrix_element_22;
  float matrix_element_23;
  float *input_matrix2;
  float *input_matrix3;
  float scale_value1;
  float scale_value2;
  float transform_factor1;
  float transform_factor2;
  float normalized_scale1;
  float normalized_scale2;
  float determinant1;
  float determinant2;
  float determinant3;
  
  // 计算输入矩阵1的行列式
  determinant1 = scale_value2 * input_matrix1[1] + scale_value1 * *input_matrix1 + transform_factor1 * input_matrix1[2];
  
  // 计算缩放因子的倒数
  scale_factor1 = 1.0 / scale_factor1;
  
  // 计算输入矩阵2的行列式
  matrix_element_11 = input_matrix1[4];
  normalized_scale1 = determinant2 * input_matrix2[1] + scale_factor2 * *input_matrix2 + determinant3 * input_matrix2[2];
  normalized_scale2 = determinant1 * input_matrix3[1] + transform_factor2 * *input_matrix3 + transform_factor1 * input_matrix3[2];
  
  // 计算中间变换矩阵元素
  matrix_element_12 = input_matrix1[5];
  matrix_element_13 = input_matrix1[6];
  matrix_element_21 = input_matrix2[4];
  matrix_element_22 = input_matrix1[4];
  matrix_element_23 = input_matrix2[4];
  
  // 计算输出矩阵的第一行
  *output_matrix = ((transform_factor1 * determinant1 - input_matrix1[5] * transform_factor1) * normalized_scale1 +
                   determinant1 * determinant2 +
                   (input_matrix1[5] * determinant3 - input_matrix1[6] * determinant2) * normalized_scale2) * scale_factor1;
  
  // 计算输出矩阵的第二行
  output_matrix[1] = ((matrix_element_11 * transform_factor1 - matrix_element_13 * transform_factor2) * normalized_scale1 + 
                      determinant1 * determinant3 +
                      (matrix_element_13 * matrix_element_21 - matrix_element_22 * determinant3) * normalized_scale2) * scale_factor1;
  
  // 计算输出矩阵的第三行
  output_matrix[2] = ((matrix_element_12 * transform_factor2 - matrix_element_22 * determinant1) * normalized_scale1 + 
                      determinant1 * transform_factor2 +
                      (matrix_element_22 * determinant2 - matrix_element_12 * matrix_element_23) * normalized_scale2) * scale_factor1;
  
  output_matrix[3] = 3.4028235e+38;  // 设置最大浮点数作为标记
  
  return 1;  // 总是返回成功
}

// ============================================================================
// UI系统工具函数
// ============================================================================

// 函数: UI系统空操作函数2
// 原始函数名: FUN_180650908
// 功能: UI系统空操作函数，用于占位
void ui_system_no_operation2(void)
{
  return;
}

// 函数: 提取UI系统文件名
// 原始函数名: FUN_180650950
// 功能: 从路径中提取文件名
// 参数: param_1-路径信息结构, param_2-输出缓冲区
void extract_ui_filename(longlong path_info, longlong output_buffer)
{
  char path_char;
  ulonglong last_backslash1;
  ulonglong last_backslash2;
  ulonglong last_backslash3;
  undefined *path_ptr;
  char *filename_ptr;
  
  // 获取路径指针
  path_ptr = &DAT_18098bc73;
  if (*(undefined **)(path_info + 8) != (undefined *)0x0) {
    path_ptr = *(undefined **)(path_info + 8);
  }
  
  // 查找最后一个反斜杠
  last_backslash1 = strrchr(path_ptr, 0x5c);
  
  // 重新获取路径指针
  path_ptr = &DAT_18098bc73;
  if (*(undefined **)(path_info + 8) != (undefined *)0x0) {
    path_ptr = *(undefined **)(path_info + 8);
  }
  
  // 再次查找最后一个反斜杠
  last_backslash2 = strrchr(path_ptr, 0x5c);
  
  // 确定使用哪个反斜杠位置
  if (last_backslash1 == 0) {
    if (last_backslash2 == 0) {
      // 没有反斜杠，使用整个路径作为文件名
      filename_ptr = "";
      if (*(char **)(path_info + 8) != (char *)0x0) {
        filename_ptr = *(char **)(path_info + 8);
      }
      
      // 复制文件名到输出缓冲区
      output_buffer = output_buffer - (longlong)filename_ptr;
      do {
        path_char = *filename_ptr;
        filename_ptr[output_buffer] = path_char;
        filename_ptr = filename_ptr + 1;
      } while (path_char != '\0');
    }
    else {
      // 使用第二个反斜杠后的部分作为文件名
      filename_ptr = (char *)(last_backslash2 + 1);
      output_buffer = output_buffer - (longlong)filename_ptr;
      do {
        path_char = *filename_ptr;
        filename_ptr[output_buffer] = path_char;
        filename_ptr = filename_ptr + 1;
      } while (path_char != '\0');
    }
  }
  else if (last_backslash2 == 0) {
    // 使用第一个反斜杠后的部分作为文件名
    filename_ptr = (char *)(last_backslash1 + 1);
    output_buffer = output_buffer - (longlong)filename_ptr;
    do {
      path_char = *filename_ptr;
      filename_ptr[output_buffer] = path_char;
      filename_ptr = filename_ptr + 1;
    } while (path_char != '\0');
  }
  else if (last_backslash2 < last_backslash1) {
    // 使用第一个反斜杠后的部分作为文件名
    filename_ptr = (char *)(last_backslash1 + 1);
    output_buffer = output_buffer - (longlong)filename_ptr;
    do {
      path_char = *filename_ptr;
      filename_ptr[output_buffer] = path_char;
      filename_ptr = filename_ptr + 1;
    } while (path_char != '\0');
  }
  else {
    // 使用第二个反斜杠后的部分作为文件名
    filename_ptr = (char *)(last_backslash2 + 1);
    output_buffer = output_buffer - (longlong)filename_ptr;
    do {
      path_char = *filename_ptr;
      filename_ptr[output_buffer] = path_char;
      filename_ptr = filename_ptr + 1;
    } while (path_char != '\0');
  }
  
  return;
}

// ============================================================================
// UI系统消息队列函数
// ============================================================================

// 函数: 发送UI系统优先级消息
// 原始函数名: FUN_180650a70
// 功能: 发送UI系统优先级消息
// 参数: param_1-消息类型, param_2-消息参数1, param_3-消息参数2, param_4-消息参数3
void send_ui_priority_message(undefined8 message_type, undefined8 message_param1, 
                            undefined8 message_param2, undefined8 message_param3)
{
  // 调用内部消息发送函数，使用高优先级
  send_ui_internal_message(message_type, _DAT_180c967a0, message_param2, message_param3, 0xfffffffffffffffe);
  
  return;
}

// 函数: 复制UI系统消息数据
// 原始函数名: FUN_180650aa0
// 功能: 复制UI系统消息数据
// 参数: param_1-目标地址, param_2-源地址
// 返回值: 目标地址
longlong copy_ui_message_data(longlong destination, longlong source)
{
  undefined8 temp_value;
  
  // 初始化复制操作
  initialize_ui_message_copy();
  
  // 复制基本消息数据（0x20字节）
  copy_ui_message_data_internal(destination + 0x20, source + 0x20);
  
  // 复制消息标志（1字节）
  *(undefined1 *)(destination + 0x40) = *(undefined1 *)(source + 0x40);
  
  // 复制消息时间戳（4字节）
  *(undefined4 *)(destination + 0x44) = *(undefined4 *)(source + 0x44);
  
  // 复制消息序列号（8字节）
  *(undefined8 *)(destination + 0x48) = *(undefined8 *)(source + 0x48);
  
  // 复制消息优先级（4字节）
  *(undefined4 *)(destination + 0x50) = *(undefined4 *)(source + 0x50);
  
  // 复制扩展消息数据（0x18字节）
  copy_ui_message_data_internal(destination + 0x58, source + 0x58);
  
  // 复制附加消息数据（0x20字节）
  copy_ui_message_data_internal(destination + 0x78, source + 0x78);
  
  // 复制消息句柄（8字节）
  temp_value = *(undefined8 *)(source + 0xa0);
  *(undefined8 *)(destination + 0x98) = *(undefined8 *)(source + 0x98);
  *(undefined8 *)(destination + 0xa0) = temp_value;
  
  // 复制消息验证数据（8字节）
  *(undefined4 *)(destination + 0xa8) = *(undefined4 *)(source + 0xa8);
  *(undefined4 *)(destination + 0xac) = *(undefined4 *)(source + 0xac);
  
  return destination;
}

// 函数: 解析UI系统可执行文件头
// 原始函数名: FUN_180650b30
// 功能: 解析UI系统可执行文件的头部信息
// 参数: param_1-输出结构, param_2-文件基址, param_3-PE头偏移
// 返回值: 解析结果标志
ulonglong parse_ui_executable_header(longlong output_struct, longlong file_base, longlong pe_offset)
{
  uint section_count;
  uint export_table_rva;
  uint export_table_size;
  uint section_alignment;
  ulonglong parse_result;
  longlong pe_header_ptr;
  int *section_header_ptr;
  uint current_section;
  ulonglong export_directory_rva;
  uint *export_directory_ptr;
  uint export_name_rva;
  uint export_ordinal_base;
  uint export_function_rva;
  uint export_name_rva_array;
  
  // 计算PE头位置
  pe_header_ptr = *(int *)(pe_offset + 0x3c) + file_base;
  
  // 复制可选头特征值
  *(undefined4 *)(output_struct + 0x50) = *(undefined4 *)(pe_header_ptr + 0x50);
  *(undefined4 *)(output_struct + 0x44) = *(undefined4 *)(pe_header_ptr + 8);
  
  // 检查是否为DLL文件
  if ((*(ushort *)(pe_header_ptr + 0x16) & 0x200) != 0) {
    *(undefined1 *)(output_struct + 0x40) = 1;  // DLL标志
  }
  
  // 获取导出表信息
  export_directory_rva = (ulonglong)*(uint *)(pe_header_ptr + 0xbc);
  parse_result = export_directory_rva * 0x2492492492492493;  // 计算对齐
  
  // 计算节数量
  section_alignment = (uint)((export_directory_rva - export_directory_rva / 7 >> 1) + export_directory_rva / 7 >> 4);
  if (section_alignment == 0) {
  no_export_table:
    parse_result = parse_result & 0xffffffffffffff00;  // 无导出表标志
  }
  else {
    current_section = 0;
    if (section_alignment != 0) {
      // 遍历所有节
      section_header_ptr = (int *)((ulonglong)*(uint *)(pe_header_ptr + 0xb8) + 0xc + file_base);
      do {
        // 检查是否为导出节
        if ((section_header_ptr[1] != 0) && (*section_header_ptr == 2)) {
          export_directory_ptr = (uint *)((ulonglong)(uint)section_header_ptr[2] + file_base);
          if (*export_directory_ptr != 0x53445352) goto no_export_table;  // 检查"RSDS"签名
          
          // 复制导出表时间戳
          *(uint *)(output_struct + 0xac) = export_directory_ptr[5];
          
          // 调用回调函数处理导出名称
          (**(code **)(*(longlong *)(output_struct + 0x78) + 0x10))
                    ((longlong *)(output_struct + 0x78), export_directory_ptr + 6);
          
          parse_result = (ulonglong)*export_directory_ptr;
          *(uint *)(output_struct + 0xa8) = *export_directory_ptr;
          
          // 复制导出函数信息
          export_name_rva = export_directory_ptr[2];
          export_ordinal_base = export_directory_ptr[3];
          export_function_rva = export_directory_ptr[4];
          *(uint *)(output_struct + 0x98) = export_directory_ptr[1];
          *(uint *)(output_struct + 0x9c) = export_name_rva;
          *(uint *)(output_struct + 0xa0) = export_ordinal_base;
          *(uint *)(output_struct + 0xa4) = export_function_rva;
        }
        current_section = current_section + 1;
        section_header_ptr = section_header_ptr + 7;
      } while (current_section < section_alignment);
    }
    parse_result = CONCAT71((int7)(parse_result >> 8), 1);  // 设置成功标志
  }
  
  return parse_result;
}

// ============================================================================
// UI系统动态库管理函数
// ============================================================================

// 函数: 加载UI系统动态库
// 原始函数名: FUN_180650c20
// 功能: 加载UI系统所需的动态库
// 参数: param_1-库信息结构
void load_ui_system_library(longlong library_info)
{
  short *library_handle;
  undefined8 *library_list_ptr;
  undefined8 *current_ptr;
  undefined *library_path;
  undefined8 *previous_ptr;
  ulonglong library_base;
  undefined1 security_buffer[32];
  short **handle_ptr;
  short *temp_handle;
  undefined8 load_address;
  undefined1 handle_buffer[16];
  longlong library_data[4];
  undefined1 path_buffer[272];
  ulonglong stack_guard;
  
  // 初始化加载地址
  load_address = 0xfffffffffffffffe;
  
  // 安全检查：堆栈保护
  stack_guard = _DAT_180bf00a8 ^ (ulonglong)security_buffer;
  
  // 获取库路径
  library_path = &DAT_18098bc73;
  if (*(undefined **)(library_info + 8) != (undefined *)0x0) {
    library_path = *(undefined **)(library_info + 8);
  }
  
  // 加载动态库
  library_handle = (short *)LoadLibraryA(library_path);
  if (library_handle != (short *)0x0) {
    // 初始化库链表指针
    previous_ptr = (undefined8 *)&DAT_180c96790;
    current_ptr = _DAT_180c967a0;
    temp_handle = library_handle;
    
    // 在库链表中查找合适的插入位置
    if (_DAT_180c967a0 != (undefined8 *)0x0) {
      do {
        if ((short *)current_ptr[4] < library_handle) {
          library_list_ptr = (undefined8 *)*current_ptr;
        }
        else {
          library_list_ptr = (undefined8 *)current_ptr[1];
          previous_ptr = current_ptr;
        }
        current_ptr = library_list_ptr;
      } while (library_list_ptr != (undefined8 *)0x0);
      
      // 检查是否需要插入到链表中
      if ((previous_ptr != (undefined8 *)&DAT_180c96790) && ((short *)previous_ptr[4] <= library_handle))
        goto insert_into_list;
    }
    
    // 提取文件名
    extract_ui_filename(library_info, path_buffer);
    
    // 初始化库数据结构
    initialize_ui_library_data(library_data);
    
    // 设置库句柄
    handle_ptr = &temp_handle;
    
    // 调用库初始化函数
    (**(code **)(library_data[0] + 0x10))(library_data, path_buffer);
    
    // 获取库大小
    library_base = *(uint *)(library_info + 0x10);
    if (*(longlong *)(library_info + 8) != 0) {
      copy_ui_library_info(path_buffer, library_base);
    }
    
    // 复制库路径
    if (library_base != 0) {
      memcpy(load_address, *(undefined8 *)(library_info + 8), library_base);
    }
    
    // 确保路径字符串终止
    if (load_address != 0) {
      *(undefined1 *)(library_base + load_address) = 0;
    }
    
    // 获取库特征值
    *(undefined4 *)(library_info + 0x1c) = *(undefined4 *)(library_info + 0x1c);
    
    // 检查PE签名
    if (*temp_handle == 0x5a4d) {
      parse_ui_executable_header(library_data, temp_handle, temp_handle);
    }
    
    // 重新定位插入点
    previous_ptr = (undefined8 *)&DAT_180c96790;
    current_ptr = _DAT_180c967a0;
    
    // 查找插入位置
    while (current_ptr != (undefined8 *)0x0) {
      if ((short *)current_ptr[4] < library_handle) {
        current_ptr = (undefined8 *)*current_ptr;
      }
      else {
        previous_ptr = current_ptr;
        current_ptr = (undefined8 *)current_ptr[1];
      }
    }
    
    // 检查是否需要插入到链表头部
    if ((previous_ptr == (undefined8 *)&DAT_180c96790) || (library_handle < (short *)previous_ptr[4])) {
      handle_ptr = &temp_handle;
      previous_ptr = (undefined8 *)insert_ui_library_node(previous_ptr, handle_buffer);
      previous_ptr = (undefined8 *)*previous_ptr;
    }
    
  insert_into_list:
    // 复制库数据到链表节点
    copy_ui_message_data(previous_ptr + 5, library_data);
    
    // 清理库数据
    cleanup_ui_library_data(library_data);
  }
  
  // 安全检查结束
  perform_security_check(stack_guard ^ (ulonglong)security_buffer);
}

// 函数: 创建UI系统进程快照
// 原始函数名: FUN_180650e00
// 功能: 创建UI系统相关进程的快照
void create_ui_process_snapshot(void)
{
  int mutex_result;
  undefined4 process_id;
  undefined8 module_handle;
  longlong snapshot_handle;
  undefined1 security_buffer[128];
  undefined8 snapshot_flags;
  undefined8 snapshot_address;
  undefined1 process_info_buffer[748];
  ulonglong stack_guard;
  
  // 设置快照标志
  snapshot_flags = 0xfffffffffffffffe;
  
  // 安全检查：堆栈保护
  stack_guard = _DAT_180bf00a8 ^ (ulonglong)security_buffer;
  
  // 设置快照地址
  snapshot_address = 0x180c96740;
  
  // 锁定互斥体
  mutex_result = _Mtx_lock(0x180c96740);
  if (mutex_result != 0) {
    __Throw_C_error_std__YAXH_Z(mutex_result);
  }
  
  // 获取当前模块句柄
  module_handle = GetModuleHandleA(0);
  
  // 获取进程ID
  process_id = GetProcessId(module_handle);
  
  // 创建进程快照
  snapshot_handle = CreateToolhelp32Snapshot(0x18, process_id);
  
  // 处理快照创建失败的情况
  while( true ) {
    if (snapshot_handle != -1) {
      // 成功创建快照，初始化进程信息结构
      memset(process_info_buffer, 0, 0x234);
    }
    
    // 检查错误代码
    mutex_result = GetLastError();
    if (mutex_result != 0x18) break;
    
    // 如果错误为"ERROR_BAD_LENGTH"，重试
    snapshot_handle = CreateToolhelp32Snapshot(0x18, process_id);
  }
  
  // 解锁互斥体
  mutex_result = _Mtx_unlock(0x180c96740);
  if (mutex_result != 0) {
    __Throw_C_error_std__YAXH_Z(mutex_result);
  }
  
  // 安全检查结束
  perform_security_check(stack_guard ^ (ulonglong)security_buffer);
}

// 函数: 发送UI系统内部消息
// 原始函数名: FUN_180651540
// 功能: 发送UI系统内部消息
// 参数: param_1-消息类型, param_2-消息参数1, param_3-消息参数2, param_4-消息参数3
void send_ui_internal_message(undefined8 message_type, undefined8 message_param1, 
                           undefined8 message_param2, undefined8 message_param3)
{
  // 调用内部消息发送函数，使用内部优先级
  send_ui_internal_message(message_type, _DAT_180c967a0, message_param2, message_param3, 0xfffffffffffffffe);
  
  return;
}

// 函数: 递归发送UI系统内部消息
// 原始函数名: FUN_180651560
// 功能: 递归发送UI系统内部消息
// 参数: param_1-消息类型, param_2-消息链表, param_3-消息参数2, param_4-消息参数3
void send_ui_internal_message_recursive(undefined8 message_type, undefined8 *message_list, 
                                      undefined8 message_param2, undefined8 message_param3)
{
  if (message_list != (undefined8 *)0x0) {
    // 递归发送消息到链表中的所有节点
    send_ui_internal_message_recursive(&DAT_180c96790, *message_list, message_param2, message_param3, 0xfffffffffffffffe);
    
    // 清理当前节点
    cleanup_ui_message_node(message_list + 5);
    
    // 释放节点内存
    free_ui_message_node(message_list);
  }
  
  return;
}

// 函数: 查找UI系统消息节点插入位置
// 原始函数名: FUN_1806515e0
// 功能: 在UI系统消息链表中查找合适的插入位置
// 参数: param_1-消息类型, param_2-消息链表, param_3-消息数据, param_4-节点指针, param_5-优先级
// 返回值: 插入位置的指针
undefined8 *find_ui_message_insert_position(undefined8 message_type, undefined8 *message_list, 
                                           undefined8 message_data, longlong *node_ptr,
                                           ulonglong *priority)
{
  longlong *node_info;
  undefined8 *insert_position;
  ulonglong current_priority;
  longlong current_node;
  undefined8 *search_ptr;
  undefined4 insert_flag;
  bool is_higher_priority;
  
  // 检查是否为特殊节点
  if ((node_ptr == _DAT_180c96790) || (node_ptr == (longlong *)&DAT_180c96790)) {
    if ((_DAT_180c967b0 != 0) && (node_ptr = _DAT_180c96790, (ulonglong)_DAT_180c96790[4] < *priority))
       goto insert_at_position;
  }
  else {
    // 获取节点信息
    node_info = (longlong *)func_0x00018066bd70(node_ptr);
    if (((ulonglong)node_ptr[4] < *priority) && (*priority < (ulonglong)node_info[4])) {
      if (*node_ptr != 0) {
        node_ptr = node_info;
      }
    insert_at_position:
      if (node_ptr != (longlong *)0x0) {
        initialize_ui_message_node();
        return message_list;
      }
    }
  }
  
  // 在链表中查找插入位置
  insert_position = (undefined8 *)&DAT_180c96790;
  is_higher_priority = true;
  
  if (_DAT_180c967a0 != (undefined8 *)0x0) {
    search_ptr = _DAT_180c967a0;
    do {
      insert_position = search_ptr;
      is_higher_priority = *priority < (ulonglong)insert_position[4];
      if (is_higher_priority) {
        search_ptr = (undefined8 *)insert_position[1];
      }
      else {
        search_ptr = (undefined8 *)*insert_position;
      }
    } while (search_ptr != (undefined8 *)0x0);
  }
  
  search_ptr = insert_position;
  if (is_higher_priority) {
    if (insert_position == _DAT_180c96798) {
      current_priority = *priority;
      goto insert_node;
    }
    search_ptr = (undefined8 *)func_0x00018066b9a0(insert_position);
  }
  
  current_priority = *priority;
  if (current_priority <= (ulonglong)search_ptr[4]) {
    *message_list = search_ptr;
    return message_list;
  }
  
insert_node:
  // 确定插入标志
  if ((insert_position == (undefined8 *)&DAT_180c96790) || (current_priority < (ulonglong)insert_position[4])) {
    insert_flag = 0;
  }
  else {
    insert_flag = 1;
  }
  
  // 分配新节点
  current_node = allocate_ui_message_node(_DAT_180c8ed18, 0xd8, DAT_180c967b8);
  
  // 设置节点优先级
  *(ulonglong *)(current_node + 0x20) = *priority;
  
  // 初始化节点数据
  initialize_ui_message_node(current_node + 0x28);
  
  // 插入节点到链表
  insert_ui_message_node(current_node, insert_position, &DAT_180c96790, insert_flag);
}

// 函数: 插入UI系统消息节点
// 原始函数名: FUN_180651770
// 功能: 在UI系统消息链表中插入新节点
// 参数: param_1-消息类型, param_2-消息数据, param_3-节点位置, param_4-消息参数, param_5-优先级
void insert_ui_message_node(undefined8 message_type, undefined8 message_data, undefined *node_position, 
                          undefined8 message_param, ulonglong *priority)
{
  longlong new_node;
  undefined4 insert_flag;
  
  // 检查插入条件
  if ((((char)message_param == '\0') && (node_position != &DAT_180c96790)) &&
     (*(ulonglong *)(node_position + 0x20) <= *priority)) {
    insert_flag = 1;
  }
  else {
    insert_flag = 0;
  }
  
  // 分配新节点
  new_node = allocate_ui_message_node(_DAT_180c8ed18, 0xd8, DAT_180c967b8, message_param, 0xfffffffffffffffe);
  
  // 设置节点优先级
  *(ulonglong *)(new_node + 0x20) = *priority;
  
  // 初始化节点数据
  initialize_ui_message_node(new_node + 0x28);
  
  // 插入节点
  insert_ui_message_node(new_node, node_position, &DAT_180c96790, insert_flag);
}

// ============================================================================
// UI系统内存管理函数
// ============================================================================

// 函数: 初始化UI系统内存管理器
// 原始函数名: FUN_180651830
// 功能: 初始化UI系统内存管理器的各个部分
// 参数: param_1-内存管理器结构
void initialize_ui_memory_manager(longlong memory_manager)
{
  // 初始化高级内存管理部分
  *(undefined8 *)(memory_manager + 0x80) = &UNK_180a3c3e0;
  if (*(longlong *)(memory_manager + 0x88) != 0) {
    free_ui_memory_region();
  }
  *(undefined8 *)(memory_manager + 0x88) = 0;
  *(undefined4 *)(memory_manager + 0x98) = 0;
  *(undefined8 *)(memory_manager + 0x80) = &UNK_18098bcb0;
  
  // 初始化中级内存管理部分
  *(undefined8 *)(memory_manager + 0x60) = &UNK_180a3c3e0;
  if (*(longlong *)(memory_manager + 0x68) != 0) {
    free_ui_memory_region();
  }
  *(undefined8 *)(memory_manager + 0x68) = 0;
  *(undefined4 *)(memory_manager + 0x78) = 0;
  *(undefined8 *)(memory_manager + 0x60) = &UNK_18098bcb0;
  
  // 初始化基础内存管理部分
  *(undefined8 *)(memory_manager + 0x28) = &UNK_180a3c3e0;
  if (*(longlong *)(memory_manager + 0x30) != 0) {
    free_ui_memory_region();
  }
  *(undefined8 *)(memory_manager + 0x30) = 0;
  *(undefined4 *)(memory_manager + 0x40) = 0;
  *(undefined8 *)(memory_manager + 0x28) = &UNK_18098bcb0;
  
  // 初始化核心内存管理部分
  *(undefined8 *)(memory_manager + 8) = &UNK_180a3c3e0;
  if (*(longlong *)(memory_manager + 0x10) != 0) {
    free_ui_memory_region();
  }
  *(undefined8 *)(memory_manager + 0x10) = 0;
  *(undefined4 *)(memory_manager + 0x20) = 0;
  *(undefined8 *)(memory_manager + 8) = &UNK_18098bcb0;
  
  return;
}

// 函数: 释放UI系统内存池
// 原始函数名: FUN_180651860
// 功能: 释放UI系统内存池
// 参数: param_1-内存池指针, param_2-释放标志
// 返回值: 内存池指针
undefined8 *free_ui_memory_pool(undefined8 *memory_pool, ulonglong free_flag)
{
  // 设置内存池为默认状态
  *memory_pool = &UNK_180a3dca0;
  
  // 如果设置了释放标志，则释放内存
  if ((free_flag & 1) != 0) {
    free(memory_pool, 0x160);
  }
  
  return memory_pool;
}

// ============================================================================
// UI系统托管代码接口函数
// ============================================================================

// 函数: 传递UI系统托管库回调方法指针
// 原始函数名: pass_managed_library_callback_method_pointers
// 功能: 将托管库的回调方法指针传递给UI系统
// 参数: param_1-回调方法指针
void pass_managed_library_callback_method_pointers(undefined8 callback_method_pointers)
{
  // 调用托管代码的回调方法指针传递函数
  (**(code **)(*_DAT_180c8f008 + 0x40))(_DAT_180c8f008, callback_method_pointers);
  
  return;
}

// 函数: 传递UI系统控制器方法
// 原始函数名: pass_controller_methods
// 功能: 将控制器方法传递给UI系统
// 参数: param_1-控制器方法指针
void pass_controller_methods(undefined8 controller_methods)
{
  // 保存控制器方法指针
  _DAT_180c8f018 = controller_methods;
  
  return;
}

// 函数: 传递UI系统托管初始化方法指针
// 原始函数名: pass_managed_initialize_method_pointer
// 功能: 将托管初始化方法指针传递给UI系统
// 参数: param_1-初始化方法指针
void pass_managed_initialize_method_pointer(undefined8 initialize_method_pointer)
{
  // 保存初始化方法指针
  _DAT_180c8f010 = initialize_method_pointer;
  
  return;
}

// 函数: 释放UI系统托管内存
// 原始函数名: FUN_1806518d0
// 功能: 释放UI系统托管内存
// 参数: param_1-内存指针, param_2-释放标志
// 返回值: 内存指针
undefined8 free_ui_managed_memory(undefined8 memory_pointer, ulonglong free_flag)
{
  // 初始化托管内存清理
  initialize_ui_managed_memory_cleanup();
  
  // 如果设置了释放标志，则释放内存
  if ((free_flag & 1) != 0) {
    free(memory_pointer, 400);
  }
  
  return memory_pointer;
}

// 函数: 初始化UI系统托管环境
// 原始函数名: FUN_180651910
// 功能: 初始化UI系统的托管环境
// 参数: param_1-托管环境结构
void initialize_ui_managed_environment(undefined8 *managed_environment)
{
  // 设置托管环境为默认状态
  *managed_environment = &UNK_180a3dcb0;
  
  // 清除托管函数指针
  _DAT_180c8f008 = 0;
  
  // 检查并清理现有的托管内存
  if (managed_environment[0x2d] != 0) {
    free_ui_memory_region();
  }
  
  // 设置托管内存池
  managed_environment[1] = &UNK_180a3dca0;
  
  return;
}