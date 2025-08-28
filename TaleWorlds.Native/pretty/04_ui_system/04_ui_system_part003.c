#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part003.c - UI系统组件第3部分
// 包含23个函数，主要处理UI日志记录、内存管理、模块加载和资源初始化

// 函数: void log_ui_message_with_format(uint64_t log_context, uint64_t log_level, uint64_t log_source, longlong format_string, uint64_t format_args)
// 功能: 使用格式化字符串记录UI消息日志
void log_ui_message_with_format(uint64_t log_context, uint64_t log_level, uint64_t log_source, longlong format_string,
                                uint64_t format_args)

{
  ulonglong *printf_ptr;
  char *thread_flag;
  int8_t stack_guard[32];
  uint64_t arg1;
  uint64_t arg2;
  int8_t format_buffer[512];
  ulonglong security_cookie;
  
  if (format_string != 0) {
    security_cookie = _security_cookie ^ (ulonglong)stack_guard;
    thread_flag = (char *)(*(longlong *)
                       ((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) + 8);
    if (*thread_flag == '\0') {
      *thread_flag = '\x01';
      printf_ptr = (ulonglong *)get_stdio_function_table();
      arg2 = format_args;
      arg1 = 0;
      __stdio_common_vsprintf(*printf_ptr | 2, format_buffer, 0x1ff, format_string);
      *thread_flag = '\0';
      log_ui_message_base(log_context, log_level, log_source, format_buffer);
    }
                    // WARNING: Subroutine does not return
    security_check_fail(security_cookie ^ (ulonglong)stack_guard);
  }
  return;
}



// 函数: void log_ui_message_simple(longlong log_context)
// 功能: 记录简单的UI消息日志
void log_ui_message_simple(longlong log_context)

{
  longlong tls_base;
  ulonglong *printf_ptr;
  char *thread_flag;
  ulonglong stack_cookie;
  
  thread_flag = (char *)(*(longlong *)(tls_base + log_context * 8) + 8);
  if (*thread_flag == '\0') {
    *thread_flag = '\x01';
    printf_ptr = (ulonglong *)get_stdio_function_table();
    __stdio_common_vsprintf(*printf_ptr | 2, &stack_buffer, 0x1ff);
    *thread_flag = '\0';
    log_ui_message_base();
  }
                    // WARNING: Subroutine does not return
  security_check_fail(stack_cookie ^ (ulonglong)&stack_base);
}



// 函数: void ui_system_no_operation(void)
// 功能: UI系统空操作函数
void ui_system_no_operation(void)

{
  return;
}



// 函数: void log_ui_message_wrapper(uint64_t log_context, uint64_t log_level, uint64_t log_source, uint64_t message)
// 功能: UI消息日志记录的包装函数
void log_ui_message_wrapper(uint64_t log_context, uint64_t log_level, uint64_t log_source, uint64_t message)

{
  uint64_t stack_arg;
  
  stack_arg = message;
  log_ui_message_with_format(log_context, log_level, 0, message, &stack_arg);
  return;
}



// 函数: void log_ui_debug_message(uint64_t message, uint64_t param2, uint64_t param3, uint64_t param4)
// 功能: 记录UI调试消息
void log_ui_debug_message(uint64_t message, uint64_t param2, uint64_t param3, uint64_t param4)

{
  uint64_t stack_arg1;
  uint64_t stack_arg2;
  uint64_t stack_arg3;
  
  stack_arg1 = param2;
  stack_arg2 = param3;
  stack_arg3 = param4;
  if (_ui_debug_enabled == 0) {
    initialize_ui_debug_system(&_ui_debug_status);
  }
  if (_ui_debug_status != 0) {
    log_ui_message_with_format(0, 0, &_debug_message_prefix, message, &stack_arg1);
  }
  return;
}



// 函数: void log_ui_warning_message(uint64_t message, uint64_t param2, uint64_t param3, uint64_t param4)
// 功能: 记录UI警告消息
void log_ui_warning_message(uint64_t message, uint64_t param2, uint64_t param3, uint64_t param4)

{
  bool should_log;
  longlong message_count;
  uint64_t stack_arg1;
  uint64_t stack_arg2;
  uint64_t stack_arg3;
  
  stack_arg1 = param2;
  stack_arg2 = param3;
  stack_arg3 = param4;
  if (_ui_warning_enabled == 0) {
    initialize_ui_debug_system(&_ui_warning_status);
  }
  if (_ui_warning_status == 0) {
    if (_ui_debug_enabled == 0) {
      initialize_ui_debug_system(&_ui_debug_status);
    }
    if (_ui_debug_status == 0) {
      return;
    }
  }
  acquire_ui_lock();
  message_count = _ui_message_counter + 1;
  release_ui_lock();
  should_log = _ui_message_counter <= _ui_max_messages;
  _ui_message_counter = message_count;
  if (should_log) {
    log_ui_message_with_format(0, 0, &_warning_message_prefix, message, &stack_arg1);
  }
  return;
}



// 函数: void log_ui_error_message(int32_t error_code, uint64_t message, uint64_t param3, uint64_t param4)
// 功能: 记录UI错误消息
void log_ui_error_message(int32_t error_code, uint64_t message, uint64_t param3, uint64_t param4)

{
  bool should_log;
  ulonglong error_count;
  uint64_t stack_arg2;
  uint64_t stack_arg3;
  
  stack_arg2 = param3;
  stack_arg3 = param4;
  if (_ui_warning_enabled == 0) {
    initialize_ui_debug_system(&_ui_warning_status);
  }
  if (_ui_warning_status == 0) {
    if (_ui_debug_enabled == 0) {
      initialize_ui_debug_system(&_ui_debug_status);
    }
    if (_ui_debug_status == 0) goto skip_logging;
  }
  acquire_ui_lock();
  error_count = _ui_error_counter + 1;
  release_ui_lock();
  should_log = _ui_error_counter <= _ui_max_errors;
  _ui_error_counter = error_count;
  if (should_log) {
    log_ui_message_with_format(0, 0, &_error_message_prefix, message, &stack_arg2);
  }
skip_logging:
  if (_ui_error_callback != (code *)0x0) {
    (*_ui_error_callback)(error_code, _ui_error_context);
  }
  return;
}



// 函数: void parse_ui_config_value(int *config_param)
// 功能: 解析UI配置值
void parse_ui_config_value(int *config_param)

{
  code *error_handler;
  char config_char;
  uint env_length;
  int config_value;
  longlong parse_result;
  ulonglong str_length;
  ulonglong loop_counter;
  int8_t stack_guard[32];
  char *string_end[2];
  char config_buffer[80];
  char env_buffer[80];
  ulonglong security_cookie;
  
  security_cookie = _security_cookie ^ (ulonglong)stack_guard;
  config_buffer[0] = '\0';
  strncpy(config_buffer, &_config_path_prefix, 0x40);
  config_buffer[0x40] = 0;
  strncat(config_buffer, *(uint64_t *)(config_param + 4), 0x40);
  config_buffer[0x40] = 0;
  env_buffer[0] = '\0';
  env_length = GetEnvironmentVariableA(config_buffer, env_buffer, 0x41);
  if ((ulonglong)env_length - 1 < 0x40) {
    str_length = 0xffffffffffffffff;
    do {
      str_length = str_length + 1;
      parse_result = str_length + 1;
      str_length = parse_result;
    } while (env_buffer[parse_result] != '\0');
    if (0x40 < parse_result) {
      str_length = 0x40;
    }
    parse_result = 0;
    if (str_length != 0) {
      do {
        config_char = toupper((int)env_buffer[parse_result]);
        config_buffer[parse_result] = config_char;
        parse_result = parse_result + 1;
      } while (parse_result < str_length);
    }
    if (0x40 < str_length) {
      buffer_overflow_error();
      error_handler = (code *)software_interrupt(3);
      (*error_handler)();
      return;
    }
    config_buffer[str_length] = '\0';
    if ((config_buffer[0] == '\0') || (parse_result = strstr(&_true_value_string, config_buffer), parse_result != 0)) {
      *config_param = 1;
    }
    else {
      parse_result = strstr(&_false_value_string, config_buffer);
      if (parse_result == 0) {
        string_end[0] = config_buffer;
        config_value = strtol(config_buffer, string_end, 10);
        if (config_param[2] == 8) {
          config_char = *string_end[0];
          if (config_char == 'K') {
            string_end[0] = string_end[0] + 1;
          }
          else if (config_char == 'M') {
            config_value = config_value << 10;
            string_end[0] = string_end[0] + 1;
          }
          else if (config_char == 'G') {
            config_value = config_value << 0x14;
            string_end[0] = string_end[0] + 1;
          }
          else {
            config_value = (int)((longlong)config_value + 0x3ffU >> 10);
          }
          if (*string_end[0] == 'B') {
            string_end[0] = string_end[0] + 1;
          }
        }
        if (*string_end[0] != '\0') {
          log_ui_warning_message(&_invalid_config_warning, *(uint64_t *)(config_param + 4), config_buffer);
          config_param[1] = 1;
          goto parse_complete;
        }
        *config_param = config_value;
      }
      else {
        *config_param = 0;
      }
    }
    config_param[1] = 2;
  }
  else if (_default_config_available == '\0') {
    config_param[1] = 1;
  }
parse_complete:
                    // WARNING: Subroutine does not return
  security_check_fail(security_cookie ^ (ulonglong)stack_guard);
}



// 函数: void parse_ui_config_string(void)
// 功能: 解析UI配置字符串
void parse_ui_config_string(void)

{
  char config_char;
  code *error_handler;
  int8_t format_flag;
  int config_value;
  longlong parse_result;
  char *string_ptr;
  ulonglong str_length;
  longlong frame_base;
  int *config_param;
  ulonglong frame_offset;
  ulonglong loop_counter;
  
  loop_counter = 0xffffffffffffffff;
  do {
    loop_counter = loop_counter + 1;
  } while (*(char *)(frame_base + -9 + loop_counter) != '\0');
  if (0x40 < loop_counter) {
    loop_counter = frame_offset;
  }
  str_length = 0;
  if (loop_counter != 0) {
    do {
      format_flag = toupper((int)*(char *)(frame_base + -9 + str_length));
      *(int8_t *)(frame_base + -0x59 + str_length) = format_flag;
      str_length = str_length + 1;
    } while (str_length < loop_counter);
  }
  if (0x40 < str_length) {
    buffer_overflow_error();
    error_handler = (code *)software_interrupt(3);
    (*error_handler)();
    return;
  }
  *(int8_t *)(frame_base + -0x59 + str_length) = 0;
  if (*(char *)(frame_base + -0x59) == '\0') {
set_default_value:
    *config_param = 1;
  }
  else {
    parse_result = strstr(&_true_value_string, frame_base + -0x59);
    if (parse_result != 0) goto set_default_value;
    parse_result = strstr(&_false_value_string, frame_base + -0x59);
    if (parse_result == 0) {
      *(longlong *)(frame_base + -0x69) = frame_base + -0x59;
      config_value = strtol(frame_base + -0x59, frame_base + -0x69, 10);
      string_ptr = *(char **)(frame_base + -0x69);
      if (config_param[2] == 8) {
        config_char = *string_ptr;
        if (config_char == 'K') {
          string_ptr = string_ptr + 1;
          *(char **)(frame_base + -0x69) = string_ptr;
        }
        else if (config_char == 'M') {
          config_value = config_value << 10;
          string_ptr = string_ptr + 1;
          *(char **)(frame_base + -0x69) = string_ptr;
        }
        else if (config_char == 'G') {
          config_value = config_value << 0x14;
          string_ptr = string_ptr + 1;
          *(char **)(frame_base + -0x69) = string_ptr;
        }
        else {
          config_value = (int)((longlong)config_value + 0x3ffU >> 10);
        }
        if (*string_ptr == 'B') {
          string_ptr = string_ptr + 1;
          *(char **)(frame_base + -0x69) = string_ptr;
        }
      }
      if (*string_ptr != '\0') {
        log_ui_warning_message(&_invalid_config_warning, *(uint64_t *)(config_param + 4), frame_base + -0x59);
        config_param[1] = 1;
        goto parse_string_complete;
      }
      *config_param = config_value;
    }
    else {
      *config_param = 0;
    }
  }
  config_param[1] = 2;
parse_string_complete:
                    // WARNING: Subroutine does not return
  security_check_fail(*(ulonglong *)(frame_base + 0x47) ^ (ulonglong)&stack_base);
}



// 函数: void ui_config_cleanup(void)
// 功能: UI配置清理函数
void ui_config_cleanup(void)

{
  longlong frame_base;
  
                    // WARNING: Subroutine does not return
  security_check_fail(*(ulonglong *)(frame_base + 0x47) ^ (ulonglong)&stack_base);
}



// 函数: void parse_ui_numeric_value(void)
// 功能: 解析UI数值配置
void parse_ui_numeric_value(void)

{
  char value_char;
  int numeric_value;
  char *string_ptr;
  longlong frame_base;
  int *config_param;
  
  *(longlong *)(frame_base + -0x69) = frame_base + -0x59;
  numeric_value = strtol(frame_base + -0x59, frame_base + -0x69, 10);
  string_ptr = *(char **)(frame_base + -0x69);
  if (config_param[2] == 8) {
    value_char = *string_ptr;
    if (value_char == 'K') {
      string_ptr = string_ptr + 1;
      *(char **)(frame_base + -0x69) = string_ptr;
    }
    else if (value_char == 'M') {
      numeric_value = numeric_value << 10;
      string_ptr = string_ptr + 1;
      *(char **)(frame_base + -0x69) = string_ptr;
    }
    else if (value_char == 'G') {
      numeric_value = numeric_value << 0x14;
      string_ptr = string_ptr + 1;
      *(char **)(frame_base + -0x69) = string_ptr;
    }
    else {
      numeric_value = (int)((longlong)numeric_value + 0x3ffU >> 10);
    }
    if (*string_ptr == 'B') {
      string_ptr = string_ptr + 1;
      *(char **)(frame_base + -0x69) = string_ptr;
    }
  }
  if (*string_ptr == '\0') {
    *config_param = numeric_value;
    config_param[1] = 2;
  }
  else {
    log_ui_warning_message(&_invalid_config_warning, *(uint64_t *)(config_param + 4), frame_base + -0x59);
    config_param[1] = 1;
  }
                    // WARNING: Subroutine does not return
  security_check_fail(*(ulonglong *)(frame_base + 0x47) ^ (ulonglong)&stack_base);
}



// 函数: void ui_config_use_default(void)
// 功能: 使用默认UI配置
void ui_config_use_default(void)

{
  longlong frame_base;
  longlong config_param;
  
  if (_default_config_available == '\0') {
    *(int32_t *)(config_param + 4) = 1;
  }
                    // WARNING: Subroutine does not return
  security_check_fail(*(ulonglong *)(frame_base + 0x47) ^ (ulonglong)&stack_base);
}



// 函数: void ui_config_buffer_overflow(void)
// 功能: UI配置缓冲区溢出错误处理
void ui_config_buffer_overflow(void)

{
  code *error_handler;
  
  buffer_overflow_error();
  error_handler = (code *)software_interrupt(3);
  (*error_handler)();
  return;
}



// 函数: bool calculate_ui_bounding_box(float *output_box, float *transform1, float *transform2, float *transform3)
// 功能: 计算UI边界框
bool calculate_ui_bounding_box(float *output_box, float *transform1, float *transform2, float *transform3)

{
  float det1;
  float det2;
  float det3;
  float det4;
  float det5;
  float det6;
  float det7;
  float det8;
  float det9;
  float det10;
  float det11;
  float det12;
  float det13;
  float det14;
  float det15;
  float det16;
  float det17;
  float det18;
  float det19;
  float det20;
  
  det1 = transform3[4];
  det2 = transform2[6];
  det3 = transform1[6];
  det4 = transform3[5];
  det5 = transform1[5];
  det6 = transform3[6];
  det18 = det4 * det3 - det6 * det5;
  det7 = transform1[4];
  det19 = det7 * det6 - det1 * det3;
  det20 = det1 * det5 - det7 * det4;
  det13 = det19 * transform2[5] + det18 * transform2[4] + det20 * det2;
  if (det13 != 0.0) {
    det17 = transform2[5] * transform2[1] + transform2[4] * *transform2 + det2 * transform2[2];
    det14 = 1.0 / det13;
    det8 = transform2[4];
    det15 = det4 * transform3[1] + det1 * *transform3 + det6 * transform3[2];
    det16 = det5 * transform1[1] + det7 * *transform1 + det3 * transform1[2];
    det1 = transform2[5];
    det9 = transform2[6];
    det10 = transform3[4];
    det11 = transform2[4];
    det12 = transform3[4];
    *output_box = ((det2 * det5 - transform2[5] * det3) * det15 + det17 * det18 +
                   (transform2[5] * det6 - transform2[6] * det4) * det16) * det14;
    output_box[1] = ((det8 * det3 - det9 * det7) * det15 + det17 * det19 +
                    (det9 * det10 - det11 * det6) * det16) * det14;
    output_box[2] = ((det1 * det7 - det11 * det5) * det15 + det17 * det20 +
                    (det11 * det4 - det1 * det12) * det16) * det14;
    output_box[3] = 3.4028235e+38;
  }
  return det13 != 0.0;
}



// 函数: int8_t transform_ui_coordinates(float *output_coords, float *input_transform, float scale_x, float scale_y)
// 功能: 变换UI坐标系
int8_t transform_ui_coordinates(float *output_coords, float *input_transform, float scale_x, float scale_y)

{
  float transform_dot;
  float transform_det;
  float transform_cross;
  float transform_x;
  float transform_y;
  float *matrix1;
  float *matrix2;
  float scale_factor_x;
  float scale_factor_y;
  float uniform_scale_x;
  float uniform_scale_y;
  float uniform_scale_z;
  float uniform_scale_w;
  
  uniform_scale_y = scale_factor_y * input_transform[1] + scale_factor_x * *input_transform + uniform_scale_x * input_transform[2];
  scale_x = 1.0 / scale_x;
  transform_x = input_transform[4];
  uniform_scale_z = uniform_scale_w * matrix1[1] + scale_y * *matrix1 + uniform_scale_z * matrix1[2];
  uniform_scale_w = uniform_scale_z * matrix2[1] + uniform_scale_y * *matrix2 + uniform_scale_x * matrix2[2];
  transform_y = input_transform[5];
  transform_z = input_transform[6];
  transform_w = input_transform[4];
  transform_dot = input_transform[4];
  transform_cross = input_transform[4];
  *output_coords = ((uniform_scale_x * uniform_scale_z - input_transform[5] * uniform_scale_x) * uniform_scale_z +
                     uniform_scale_y * uniform_scale_w +
                    (input_transform[5] * uniform_scale_z - input_transform[6] * uniform_scale_w) * uniform_scale_w) * scale_x;
  output_coords[1] = ((transform_x * uniform_scale_x - transform_z * uniform_scale_y) * uniform_scale_z + uniform_scale_y * uniform_scale_y +
                      (transform_z * transform_w - transform_dot * uniform_scale_z) * uniform_scale_w) * scale_x;
  output_coords[2] = ((transform_y * uniform_scale_y - transform_dot * uniform_scale_z) * uniform_scale_z + uniform_scale_y * uniform_scale_x +
                      (transform_dot * uniform_scale_w - transform_y * transform_cross) * uniform_scale_w) * scale_x;
  output_coords[3] = 3.4028235e+38;
  return 1;
}



// 函数: void ui_system_idle(void)
// 功能: UI系统空闲处理
void ui_system_idle(void)

{
  return;
}



// 函数: void extract_ui_filename(longlong path_info, longlong output_buffer)
// 功能: 从路径信息中提取UI文件名
void extract_ui_filename(longlong path_info, longlong output_buffer)

{
  char path_char;
  ulonglong last_separator1;
  ulonglong last_separator2;
  void *default_path;
  char *path_string;
  
  default_path = &_default_ui_path;
  if (*(void **)(path_info + 8) != (void *)0x0) {
    default_path = *(void **)(path_info + 8);
  }
  last_separator1 = strrchr(default_path, 0x5c);
  default_path = &_default_ui_path;
  if (*(void **)(path_info + 8) != (void *)0x0) {
    default_path = *(void **)(path_info + 8);
  }
  last_separator2 = strrchr(default_path, 0x5c);
  if (last_separator1 == 0) {
    if (last_separator2 == 0) {
      path_string = "";
      if (*(char **)(path_info + 8) != (char *)0x0) {
        path_string = *(char **)(path_info + 8);
      }
      output_buffer = output_buffer - (longlong)path_string;
      do {
        path_char = *path_string;
        path_string[output_buffer] = path_char;
        path_string = path_string + 1;
      } while (path_char != '\0');
    }
    else {
      path_string = (char *)(last_separator2 + 1);
      output_buffer = output_buffer - (longlong)path_string;
      do {
        path_char = *path_string;
        path_string[output_buffer] = path_char;
        path_string = path_string + 1;
      } while (path_char != '\0');
    }
  }
  else if (last_separator2 == 0) {
    path_string = (char *)(last_separator1 + 1);
    output_buffer = output_buffer - (longlong)path_string;
    do {
      path_char = *path_string;
      path_string[output_buffer] = path_char;
      path_string = path_string + 1;
    } while (path_char != '\0');
  }
  else if (last_separator2 < last_separator1) {
    path_string = (char *)(last_separator1 + 1);
    output_buffer = output_buffer - (longlong)path_string;
    do {
      path_char = *path_string;
      path_string[output_buffer] = path_char;
      path_string = path_string + 1;
    } while (path_char != '\0');
  }
  else {
    path_string = (char *)(last_separator2 + 1);
    output_buffer = output_buffer - (longlong)path_string;
    do {
      path_char = *path_string;
      path_string[output_buffer] = path_char;
      path_string = path_string + 1;
    } while (path_char != '\0');
  }
  return;
}



// 函数: void load_ui_module(uint64_t module_handle, uint64_t param2, uint64_t param3, uint64_t param4)
// 功能: 加载UI模块
void load_ui_module(uint64_t module_handle, uint64_t param2, uint64_t param3, uint64_t param4)

{
  initialize_ui_module_resources(module_handle, _ui_module_registry, param3, param4, 0xfffffffffffffffe);
  return;
}



// 函数: longlong copy_ui_module_data(longlong dest_module, longlong src_module)
// 功能: 复制UI模块数据
longlong copy_ui_module_data(longlong dest_module, longlong src_module)

{
  uint64_t module_flag;
  
  initialize_ui_memory_manager();
  copy_ui_memory_block(dest_module + 0x20, src_module + 0x20);
  *(int8_t *)(dest_module + 0x40) = *(int8_t *)(src_module + 0x40);
  *(int32_t *)(dest_module + 0x44) = *(int32_t *)(src_module + 0x44);
  *(uint64_t *)(dest_module + 0x48) = *(uint64_t *)(src_module + 0x48);
  *(int32_t *)(dest_module + 0x50) = *(int32_t *)(src_module + 0x50);
  copy_ui_memory_block(dest_module + 0x58, src_module + 0x58);
  copy_ui_memory_block(dest_module + 0x78, src_module + 0x78);
  module_flag = *(uint64_t *)(src_module + 0xa0);
  *(uint64_t *)(dest_module + 0x98) = *(uint64_t *)(src_module + 0x98);
  *(uint64_t *)(dest_module + 0xa0) = module_flag;
  *(int32_t *)(dest_module + 0xa8) = *(int32_t *)(src_module + 0xa8);
  *(int32_t *)(dest_module + 0xac) = *(int32_t *)(src_module + 0xac);
  return dest_module;
}



// 函数: ulonglong parse_ui_resource_header(longlong output_header, longlong file_offset, longlong file_base)
// 功能: 解析UI资源头部信息
ulonglong parse_ui_resource_header(longlong output_header, longlong file_offset, longlong file_base)

{
  uint section_count;
  uint section_size;
  uint resource_type;
  ulonglong resource_data;
  longlong section_offset;
  int *section_ptr;
  uint section_index;
  ulonglong parse_result;
  uint *resource_data_ptr;
  
  section_offset = *(int *)(file_base + 0x3c) + file_offset;
  *(int32_t *)(output_header + 0x50) = *(int32_t *)(section_offset + 0x50);
  *(int32_t *)(output_header + 0x44) = *(int32_t *)(section_offset + 8);
  if ((*(ushort *)(section_offset + 0x16) & 0x200) != 0) {
    *(int8_t *)(output_header + 0x40) = 1;
  }
  parse_result = (ulonglong)*(uint *)(section_offset + 0xbc);
  resource_data = parse_result * 0x2492492492492493;
  section_index = (uint)((parse_result - parse_result / 7 >> 1) + parse_result / 7 >> 4);
  if (section_index == 0) {
parse_complete:
    parse_result = parse_result & 0xffffffffffffff00;
  }
  else {
    resource_type = 0;
    if (section_index != 0) {
      section_ptr = (int *)((ulonglong)*(uint *)(section_offset + 0xb8) + 0xc + file_offset);
      do {
        if ((section_ptr[1] != 0) && (*section_ptr == 2)) {
          resource_data_ptr = (uint *)((ulonglong)(uint)section_ptr[2] + file_offset);
          if (*resource_data_ptr != 0x53445352) goto parse_complete;
          *(uint *)(output_header + 0xac) = resource_data_ptr[5];
          (**(code **)(*(longlong *)(output_header + 0x78) + 0x10))
                    ((longlong *)(output_header + 0x78), resource_data_ptr + 6);
          parse_result = (ulonglong)*resource_data_ptr;
          *(uint *)(output_header + 0xa8) = *resource_data_ptr;
          resource_type = resource_data_ptr[2];
          section_size = resource_data_ptr[3];
          resource_count = resource_data_ptr[4];
          *(uint *)(output_header + 0x98) = resource_data_ptr[1];
          *(uint *)(output_header + 0x9c) = resource_type;
          *(uint *)(output_header + 0xa0) = section_size;
          *(uint *)(output_header + 0xa4) = resource_count;
        }
        resource_type = resource_type + 1;
        section_ptr = section_ptr + 7;
      } while (resource_type < section_index);
    }
    parse_result = CONCAT71((int7)(parse_result >> 8), 1);
  }
  return parse_result;
}



// 函数: void load_ui_library(longlong library_info)
// 功能: 加载UI库文件
void load_ui_library(longlong library_info)

{
  short *library_handle;
  uint64_t *module_node;
  uint64_t *current_node;
  void *library_path;
  uint64_t *next_node;
  ulonglong module_address;
  int8_t stack_guard[32];
  short **library_ptr;
  short *current_library;
  uint64_t stack_param;
  int8_t temp_buffer[16];
  longlong module_data[4];
  int8_t path_buffer[272];
  ulonglong security_cookie;
  
  stack_param = 0xfffffffffffffffe;
  security_cookie = _security_cookie ^ (ulonglong)stack_guard;
  library_path = &_default_ui_path;
  if (*(void **)(library_info + 8) != (void *)0x0) {
    library_path = *(void **)(library_info + 8);
  }
  library_handle = (short *)LoadLibraryA(library_path);
  if (library_handle != (short *)0x0) {
    next_node = (uint64_t *)&_ui_module_list_head;
    module_node = _ui_module_registry;
    current_library = library_handle;
    if (_ui_module_registry != (uint64_t *)0x0) {
      do {
        if ((short *)module_node[4] < library_handle) {
          current_node = (uint64_t *)*module_node;
        }
        else {
          current_node = (uint64_t *)module_node[1];
          next_node = module_node;
        }
        module_node = current_node;
      } while (current_node != (uint64_t *)0x0);
      if ((next_node != (uint64_t *)&_ui_module_list_head) && ((short *)next_node[4] <= library_handle))
      goto library_found;
    }
    extract_ui_filename(library_info, path_buffer);
    initialize_ui_module_data(module_data);
    library_ptr = library_handle;
    (**(code **)(module_data[0] + 0x10))(module_data, path_buffer);
    module_address = *(uint *)(library_info + 0x10);
    parse_result = (ulonglong)module_address;
    if (*(longlong *)(library_info + 8) != 0) {
      copy_ui_string_data(temp_buffer, parse_result);
    }
    if (module_address != 0) {
                    // WARNING: Subroutine does not return
      memcpy(module_path, *(uint64_t *)(library_info + 8), parse_result);
    }
    if (module_path != 0) {
      *(int8_t *)(parse_result + module_path) = 0;
    }
    module_flags = *(int32_t *)(library_info + 0x1c);
    if (*library_ptr == 0x5a4d) {
      parse_ui_resource_header(module_data, library_ptr, library_ptr);
    }
    next_node = (uint64_t *)&_ui_module_list_head;
    module_node = _ui_module_registry;
    while (module_node != (uint64_t *)0x0) {
      if ((short *)module_node[4] < library_handle) {
        module_node = (uint64_t *)*module_node;
      }
      else {
        next_node = module_node;
        module_node = (uint64_t *)module_node[1];
      }
    }
    if ((next_node == (uint64_t *)&_ui_module_list_head) || (library_handle < (short *)next_node[4])) {
      library_ptr = &current_library;
      next_node = (uint64_t *)insert_ui_module_node(next_node, temp_buffer);
      next_node = (uint64_t *)*next_node;
    }
    copy_ui_module_data(next_node + 5, module_data);
    cleanup_ui_module_data(module_data);
  }
library_found:
                    // WARNING: Subroutine does not return
  security_check_fail(security_cookie ^ (ulonglong)stack_guard);
}



// 函数: void initialize_ui_process_monitor(void)
// 功能: 初始化UI进程监控
void initialize_ui_process_monitor(void)

{
  int mutex_result;
  int32_t process_id;
  uint64_t module_handle;
  longlong snapshot_handle;
  int8_t stack_guard[128];
  uint64_t stack_param1;
  uint64_t stack_param2;
  int8_t process_buffer[748];
  ulonglong security_cookie;
  
  stack_param1 = 0xfffffffffffffffe;
  security_cookie = _security_cookie ^ (ulonglong)stack_guard;
  stack_param2 = _ui_mutex_address;
  mutex_result = _Mtx_lock(_ui_mutex_address);
  if (mutex_result != 0) {
    __Throw_C_error_std__YAXH_Z(mutex_result);
  }
  module_handle = GetModuleHandleA(0);
  process_id = GetProcessId(module_handle);
  snapshot_handle = CreateToolhelp32Snapshot(0x18, process_id);
  while( true ) {
    if (snapshot_handle != -1) {
                    // WARNING: Subroutine does not return
      memset(process_buffer, 0, 0x234);
    }
    mutex_result = GetLastError();
    if (mutex_result != 0x18) break;
    snapshot_handle = CreateToolhelp32Snapshot(0x18, process_id);
  }
  mutex_result = _Mtx_unlock(_ui_mutex_address);
  if (mutex_result != 0) {
    __Throw_C_error_std__YAXH_Z(mutex_result);
  }
                    // WARNING: Subroutine does not return
  security_check_fail(security_cookie ^ (ulonglong)stack_guard);
}



// 函数: void unload_ui_module(uint64_t module_handle, uint64_t param2, uint64_t param3, uint64_t param4)
// 功能: 卸载UI模块
void unload_ui_module(uint64_t module_handle, uint64_t param2, uint64_t param3, uint64_t param4)

{
  initialize_ui_module_resources(module_handle, _ui_module_registry, param3, param4, 0xfffffffffffffffe);
  return;
}



// 函数: void cleanup_ui_module_registry(uint64_t module_handle, uint64_t *module_node, uint64_t param3, uint64_t param4)
// 功能: 清理UI模块注册表
void cleanup_ui_module_registry(uint64_t module_handle, uint64_t *module_node, uint64_t param3, uint64_t param4)

{
  if (module_node != (uint64_t *)0x0) {
    cleanup_ui_module_registry(&_ui_module_list_head, *module_node, param3, param4, 0xfffffffffffffffe);
    cleanup_ui_module_data(module_node + 5);
                    // WARNING: Subroutine does not return
    free_ui_memory(module_node);
  }
  return;
}



// 函数: uint64_t * find_or_create_ui_module_node(uint64_t module_handle, uint64_t *module_node, uint64_t param3, longlong *param_4, ulonglong *param_5)
// 功能: 查找或创建UI模块节点
uint64_t * find_or_create_ui_module_node(uint64_t module_handle, uint64_t *module_node, uint64_t param3, longlong *param_4,
                                            ulonglong *param_5)

{
  longlong *module_ptr;
  uint64_t *node_ptr;
  ulonglong module_size;
  longlong module_base;
  uint64_t *target_node;
  int32_t node_flag;
  bool insert_before;
  
  if ((param_4 == _ui_module_list_head) || (param_4 == (longlong *)&_ui_module_list_head)) {
    if ((_ui_module_tail != 0) && (param_4 = _ui_module_list_head, (ulonglong)_ui_module_list_head[4] < *param_5)
       ) goto found_node;
  }
  else {
    module_ptr = (longlong *)get_ui_module_info(param_4);
    if (((ulonglong)param_4[4] < *param_5) && (*param_5 < (ulonglong)module_ptr[4])) {
      if (*param_4 != 0) {
        param_4 = module_ptr;
      }
found_node:
      if (param_4 != (longlong *)0x0) {
        initialize_ui_module_node();
        return module_node;
      }
    }
  }
  target_node = (uint64_t *)&_ui_module_list_head;
  insert_before = true;
  if (_ui_module_registry != (uint64_t *)0x0) {
    node_ptr = _ui_module_registry;
    do {
      target_node = node_ptr;
      insert_before = *param_5 < (ulonglong)target_node[4];
      if (insert_before) {
        node_ptr = (uint64_t *)target_node[1];
      }
      else {
        node_ptr = (uint64_t *)*target_node;
      }
    } while (node_ptr != (uint64_t *)0x0);
  }
  node_ptr = target_node;
  if (insert_before) {
    if (target_node == _ui_module_tail) {
      module_size = *param_5;
      goto allocate_node;
    }
    node_ptr = (uint64_t *)get_ui_module_prev(target_node);
  }
  module_size = *param_5;
  if (module_size <= (ulonglong)node_ptr[4]) {
    *module_node = node_ptr;
    return module_node;
  }
allocate_node:
  if ((target_node == (uint64_t *)&_ui_module_list_head) || (module_size < (ulonglong)target_node[4])) {
    node_flag = 0;
  }
  else {
    node_flag = 1;
  }
  module_base = allocate_ui_memory(_ui_memory_pool, 0xd8, _ui_module_flags);
  *(ulonglong *)(module_base + 0x20) = *param_5;
  initialize_ui_module_data(module_base + 0x28);
                    // WARNING: Subroutine does not return
  insert_ui_module_node(module_base, target_node, &_ui_module_list_head, node_flag);
}



// 函数: void insert_ui_module_node(uint64_t module_handle, uint64_t module_node, void *list_head, uint64_t param4, ulonglong *param_5)
// 功能: 插入UI模块节点
void insert_ui_module_node(uint64_t module_handle, uint64_t module_node, void *list_head, uint64_t param4,
                           ulonglong *param_5)

{
  longlong module_offset;
  int32_t insert_flag;
  
  if ((((char)param4 == '\0') && (list_head != &_ui_module_list_head)) &&
     (*(ulonglong *)(list_head + 0x20) <= *param_5)) {
    insert_flag = 1;
  }
  else {
    insert_flag = 0;
  }
  module_offset = allocate_ui_memory(_ui_memory_pool, 0xd8, _ui_module_flags, param4, 0xfffffffffffffffe);
  *(ulonglong *)(module_offset + 0x20) = *param_5;
  initialize_ui_module_data(module_offset + 0x28);
                    // WARNING: Subroutine does not return
  insert_ui_module_node(module_offset, list_head, &_ui_module_list_head, insert_flag);
}



// 函数: void cleanup_ui_resource_manager(longlong resource_manager)
// 功能: 清理UI资源管理器
void cleanup_ui_resource_manager(longlong resource_manager)

{
  *(uint64_t *)(resource_manager + 0x80) = &_ui_resource_vtable;
  if (*(longlong *)(resource_manager + 0x88) != 0) {
                    // WARNING: Subroutine does not return
    free_ui_memory();
  }
  *(uint64_t *)(resource_manager + 0x88) = 0;
  *(int32_t *)(resource_manager + 0x98) = 0;
  *(uint64_t *)(resource_manager + 0x80) = &_ui_object_vtable;
  *(uint64_t *)(resource_manager + 0x60) = &_ui_resource_vtable;
  if (*(longlong *)(resource_manager + 0x68) != 0) {
                    // WARNING: Subroutine does not return
    free_ui_memory();
  }
  *(uint64_t *)(resource_manager + 0x68) = 0;
  *(int32_t *)(resource_manager + 0x78) = 0;
  *(uint64_t *)(resource_manager + 0x60) = &_ui_object_vtable;
  *(uint64_t *)(resource_manager + 0x28) = &_ui_resource_vtable;
  if (*(longlong *)(resource_manager + 0x30) != 0) {
                    // WARNING: Subroutine does not return
    free_ui_memory();
  }
  *(uint64_t *)(resource_manager + 0x30) = 0;
  *(int32_t *)(resource_manager + 0x40) = 0;
  *(uint64_t *)(resource_manager + 0x28) = &_ui_object_vtable;
  *(uint64_t *)(resource_manager + 8) = &_ui_resource_vtable;
  if (*(longlong *)(resource_manager + 0x10) != 0) {
                    // WARNING: Subroutine does not return
    free_ui_memory();
  }
  *(uint64_t *)(resource_manager + 0x10) = 0;
  *(int32_t *)(resource_manager + 0x20) = 0;
  *(uint64_t *)(resource_manager + 8) = &_ui_object_vtable;
  return;
}



// 函数: uint64_t * create_ui_resource_manager(uint64_t *resource_manager, ulonglong flags)
// 功能: 创建UI资源管理器
uint64_t * create_ui_resource_manager(uint64_t *resource_manager, ulonglong flags)

{
  *resource_manager = &_ui_manager_vtable;
  if ((flags & 1) != 0) {
    free(resource_manager, 0x160);
  }
  return resource_manager;
}



// 函数: void pass_managed_library_callback_method_pointers(uint64_t callback_pointers)
// 功能: 传递托管库回调方法指针
void pass_managed_library_callback_method_pointers(uint64_t callback_pointers)

{
                    // 0x651890  36  pass_managed_library_callback_method_pointers
                    // WARNING: Could not recover jumptable at 0x00018065189d. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*_ui_callback_table + 0x40))(_ui_callback_table, callback_pointers);
  return;
}



// 函数: void pass_controller_methods(uint64_t controller_methods)
// 功能: 传递控制器方法
void pass_controller_methods(uint64_t controller_methods)

{
                    // 0x6518b0  34  pass_controller_methods
  _ui_controller_methods = controller_methods;
  return;
}



// 函数: void pass_managed_initialize_method_pointer(uint64_t init_method)
// 功能: 传递托管初始化方法指针
void pass_managed_initialize_method_pointer(uint64_t init_method)

{
                    // 0x6518c0  35  pass_managed_initialize_method_pointer
  _ui_init_method = init_method;
  return;
}



// 函数: uint64_t initialize_ui_system(uint64_t system_handle, ulonglong flags)
// 功能: 初始化UI系统
uint64_t initialize_ui_system(uint64_t system_handle, ulonglong flags)

{
  initialize_ui_system_core();
  if ((flags & 1) != 0) {
    free(system_handle, 400);
  }
  return system_handle;
}



// 函数: void setup_ui_system_vtable(uint64_t *system_object)
// 功能: 设置UI系统虚函数表
void setup_ui_system_vtable(uint64_t *system_object)

{
  *system_object = &_ui_system_vtable;
  _ui_callback_table = 0;
  if (system_object[0x2d] != 0) {
                    // WARNING: Subroutine does not return
    free_ui_memory();
  }
  system_object[1] = &_ui_manager_vtable;
  return;
}