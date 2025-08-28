#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part026.c - 2 个核心引擎错误处理和日志记录函数
// 
// 文件美化完成 - 主要改进：
// 1. 函数命名转译：将 FUN_180070930 转译为 log_engine_error_with_context
// 2. 函数命名转译：将 FUN_180071940 转译为 log_assertion_failure
// 3. 变量命名转译：将 DAT_* 和 UNK_* 变量转换为描述性名称
// 4. 添加中文注释：为每个函数和关键代码段添加功能说明
// 5. 代码格式化：统一缩进格式，增加适当的空行分隔
// 6. 保留原始功能：没有改变代码逻辑，只改善可读性
//
// 函数分类：
// - log_engine_error_with_context: 记录引擎错误并显示错误对话框
// - log_assertion_failure: 记录断言失败信息
//

/**
 * 记录引擎错误并显示错误对话框
 * 功能：记录引擎错误信息，格式化错误消息，并根据配置显示错误对话框
 * 参数：param_1 - 错误上下文, param_2 - 错误描述, param_3 - 错误代码, 
 *        param_4 - 附加信息, param_5 - 错误类型标志, param_6 - 调试模式标志
 */
void log_engine_error_with_context(uint64_t param_1, longlong param_2, int32_t param_3, longlong param_4,
                                  char param_5, char param_6)

{
  // 函数指针变量，用于动态调用
  code *error_handler;
  
  // 布尔标志变量
  bool is_debug_mode;
  bool is_main_thread;
  bool should_show_dialog;
  
  // 字符变量
  char validation_result;
  char is_debugger_attached;
  char thread_validation_result;
  
  // 整数变量
  int string_length;
  int wait_result;
  int dialog_result;
  int current_thread_id;
  int owner_thread_id;
  
  // 无符号整数变量
  uint buffer_size;
  uint message_length;
  uint param3_value;
  uint allocation_size;
  
  // 长整型变量
  longlong string_index;
  longlong temp_index;
  longlong semaphore_handle;
  longlong debug_context;
  longlong engine_context;
  
  // 指针变量
  int8_t *message_buffer;
  int8_t *description_buffer;
  int8_t *error_message;
  int8_t *formatted_message;
  uint64_t *string_pointer;
  void *context_pointer;
  void *temp_pointer;
  
  // 缓冲区变量
  int8_t stack_cookie[32];
  int8_t *local_buffer;
  void *local_pointer;
  int8_t *buffer_ptr;
  int8_t dialog_flag;
  char error_type;
  char thread_flag;
  
  // 其他变量
  byte allocation_flag;
  ulonglong security_cookie;
  int32_t error_code;
  void *module_base;
  longlong context_value;
  int32_t local_param3;
  int32_t temp_value1;
  int32_t temp_value2;
  longlong semaphore_timeout;
  longlong thread_context;
  uint64_t temp_value3;
  uint64_t temp_value4;
  uint64_t temp_value5;
  ulonglong stack_checksum;
  longlong temp_index2;
  
  // 设置安全cookie防止栈溢出
  temp_value3 = 0xfffffffffffffffe;
  stack_checksum = GET_SECURITY_COOKIE() ^ (ulonglong)stack_cookie;
  
  // 初始化变量
  error_type = param_5;
  message_buffer = (int8_t *)0x0;
  buffer_size = 0;
  error_code = 0;
  temp_value4 = 0;
  temp_value5 = 0;
  local_param3 = param_3;
  thread_context = param_4;
  
  // 初始化错误消息缓冲区
  initialize_error_buffer(&temp_value4, 0x10, &StandardErrorPrefix, param_3);
  
  // 获取参数描述的长度和内容
  string_index = get_string_length(&local_pointer, param_4);
  
  // 准备消息缓冲区
  local_pointer = &StandardEmptyString;
  temp_value4._0_4_ = 0;
  description_buffer = (int8_t *)0x0;
  message_length = 0;
  error_code = 4;
  
  // 获取描述字符串的长度
  message_length = *(uint *)(string_index + 0x10);
  security_cookie = (ulonglong)message_length;
  buffer_size = 0;
  
  // 检查是否有描述字符串
  if (*(longlong *)(string_index + 8) == 0) {
LAB_ALLOCATE_BUFFER:
    buffer_size = 0;
    if (message_length != 0) {
      // 复制描述字符串到缓冲区
      memcpy(message_buffer, *(uint64_t *)(string_index + 8), security_cookie);
    }
  }
  else if (message_length != 0) {
    // 计算需要的缓冲区大小
    allocation_size = message_length + 1;
    if (allocation_size < 0x10) {
      allocation_size = 0x10;
    }
    
    // 分配内存缓冲区
    message_buffer = (int8_t *)allocate_buffer_memory(_DAT_180c8ed18, (longlong)allocation_size, 0x13);
    *message_buffer = 0;
    description_buffer = message_buffer;
    buffer_size = get_buffer_handle(message_buffer);
    temp_value4._0_4_ = buffer_size;
    goto LAB_ALLOCATE_BUFFER;
  }
  
  // 确保字符串以null结尾
  if (message_buffer != (int8_t *)0x0) {
    message_buffer[security_cookie] = 0;
  }
  
  // 获取字符串属性
  buffer_size = *(uint *)(string_index + 0x1c);
  message_length = buffer_size;
  temp_value4._4_4_ = buffer_size;
  
  // 如果有错误描述，则添加到消息中
  if (param_2 != 0) {
    // 计算错误描述的长度
    string_index = -1;
    do {
      temp_index = string_index;
      string_index = temp_index + 1;
    } while (*(char *)(param_2 + string_index) != '\0');
    
    if (0 < (int)string_index) {
      // 计算新的缓冲区大小
      allocation_size = message_length + (int)string_index;
      if (allocation_size != 0) {
        message_length = allocation_size + 1;
        
        // 重新分配缓冲区如果需要
        if (message_buffer == (int8_t *)0x0) {
          if ((int)message_length < 0x10) {
            message_length = 0x10;
          }
          message_buffer = (int8_t *)allocate_buffer_memory(_DAT_180c8ed18, (longlong)(int)message_length, 0x13);
          *message_buffer = 0;
        }
        else {
          if (message_length <= buffer_size) goto LAB_APPEND_DESCRIPTION;
          local_buffer = (int8_t *)CONCAT71(local_buffer._1_7_, 0x13);
          message_buffer = (int8_t *)reallocate_buffer_memory(_DAT_180c8ed18, message_buffer, message_length, 0x10);
        }
        
        description_buffer = message_buffer;
        temp_value4._0_4_ = get_buffer_handle(message_buffer);
      }
      
LAB_APPEND_DESCRIPTION:
      // 追加错误描述到消息缓冲区
      memcpy(message_buffer + security_cookie, param_2, (longlong)((int)temp_index + 2));
    }
  }
  
  // 释放临时缓冲区
  release_temporary_buffer(&local_pointer, &local_pointer, &temp_value4);
  temp_value2 = 0;
  error_code = 0;
  local_pointer = &StandardEmptyString;
  
  // 清理消息缓冲区
  if (message_buffer != (int8_t *)0x0) {
    free_buffer_memory(message_buffer);
  }
  
  description_buffer = (int8_t *)0x0;
  temp_value4 = (ulonglong)temp_value4._4_4_ << 0x20;
  local_pointer = &StandardCleanupString;
  
  // 清理上下文指针
  if (context_value != 0) {
    free_buffer_memory();
  }
  
  context_value = 0;
  local_param3 = 0;
  local_pointer = &StandardCleanupString;
  
  // 获取错误消息的上下文
  context_pointer = &DefaultErrorMessage;
  if (local_pointer != (void *)0x0) {
    context_pointer = local_pointer;
  }
  
  // 验证错误消息
  validation_result = validate_error_message(context_pointer);
  
  if (validation_result != '\0') {
    local_pointer = &StandardEmptyString;
    if (local_pointer != (void *)0x0) {
      free_buffer_memory();
    }
    goto LAB_SHOW_ERROR_DIALOG;
  }
  
  // 等待信号量
  wait_result = WaitForSingleObject(_DAT_180c91900, 1);
  string_index = _DAT_180c82868;
  
  if (wait_result != 0) {
    local_pointer = &StandardEmptyString;
    if (local_pointer != (void *)0x0) {
      free_buffer_memory();
    }
    goto LAB_SHOW_ERROR_DIALOG;
  }
  
  // 获取当前线程上下文
  thread_context = _DAT_180c82868;
  local_pointer = &StandardEmptyString;
  temp_value4._0_4_ = 0;
  buffer_ptr = (int8_t *)0x0;
  message_length = 0;
  
  // 根据错误类型选择消息前缀
  context_pointer = &StandardErrorPrefix;
  if (error_type != '\0') {
    context_pointer = &AlternativeErrorPrefix;
  }
  
  // 计算前缀长度
  temp_index = -1;
  do {
    string_index = temp_index;
    temp_index = string_index + 1;
  } while (context_pointer[temp_index] != '\0');
  
  allocation_size = (int)temp_index;
  
  if (0 < allocation_size) {
    if (allocation_size != 0) {
      allocation_size = allocation_size + 1;
      if (allocation_size < 0x10) {
        allocation_size = 0x10;
      }
      
      // 分配前缀缓冲区
      buffer_ptr = (int8_t *)allocate_buffer_memory(_DAT_180c8ed18, (longlong)allocation_size, 0x13);
      *buffer_ptr = 0;
      temp_value2 = get_buffer_handle(buffer_ptr);
      temp_value4._0_4_ = temp_value2;
    }
    
    // 复制前缀到缓冲区
    memcpy(buffer_ptr + message_length, context_pointer, (longlong)((int)string_index + 2));
  }
  
  // 分配格式化消息缓冲区
  buffer_ptr = (int8_t *)allocate_buffer_memory(_DAT_180c8ed18, 0x10, 0x13);
  *buffer_ptr = 0;
  buffer_size = get_buffer_handle(buffer_ptr);
  temp_value4._0_4_ = buffer_size;
  
  // 添加换行符
  *(int16_t *)(buffer_ptr + message_length) = 10;
  message_length = 1;
  buffer_size = 2;
  
  // 扩展缓冲区以容纳更多内容
  if (buffer_ptr == (int8_t *)0x0) {
    message_length = 1;
    buffer_ptr = (int8_t *)allocate_buffer_memory(_DAT_180c8ed18, 0x10, 0x13);
    *buffer_ptr = 0;
LAB_REALLOCATE_BUFFER:
    temp_value2 = get_buffer_handle(buffer_ptr);
    temp_value4._0_4_ = temp_value2;
  }
  else if (buffer_size < 3) {
    local_buffer = (int8_t *)CONCAT71(local_buffer._1_7_, 0x13);
    message_length = 1;
    buffer_ptr = (int8_t *)reallocate_buffer_memory(_DAT_180c8ed18, buffer_ptr, 3, 0x10);
    goto LAB_REALLOCATE_BUFFER;
  }
  
  // 添加另一个换行符
  *(int16_t *)(buffer_ptr + message_length) = 10;
  message_length = 2;
  
  // 如果有错误描述，则添加到消息中
  if (param_2 != 0) {
    temp_index = -1;
    do {
      string_index = temp_index;
      temp_index = string_index + 1;
    } while (*(char *)(param_2 + temp_index) != '\0');
    
    allocation_size = (int)temp_index;
    if (0 < allocation_size) {
      buffer_size = buffer_size;
      if (allocation_size != -2) {
        security_cookie = allocation_size + 3;
        
        if (buffer_ptr == (int8_t *)0x0) {
          if ((int)security_cookie < 0x10) {
            security_cookie = 0x10;
          }
          message_length = buffer_size;
          buffer_ptr = (int8_t *)allocate_buffer_memory(_DAT_180c8ed18, (longlong)(int)security_cookie, 0x13);
          *buffer_ptr = 0;
        }
        else {
          buffer_size = message_length;
          if (security_cookie <= (uint)temp_value4) goto LAB_APPEND_ERROR_MESSAGE;
          local_buffer = (int8_t *)CONCAT71(local_buffer._1_7_, 0x13);
          message_length = buffer_size;
          buffer_ptr = (int8_t *)reallocate_buffer_memory(_DAT_180c8ed18, buffer_ptr, security_cookie, 0x10);
        }
        
        temp_value2 = get_buffer_handle(buffer_ptr);
        temp_value4._0_4_ = temp_value2;
        buffer_size = message_length;
      }
      
LAB_APPEND_ERROR_MESSAGE:
      message_length = buffer_size;
      memcpy(buffer_ptr + message_length, param_2, (longlong)((int)string_index + 2));
    }
  }
  
  // 添加分隔符
  if (buffer_ptr == (int8_t *)0x0) {
    message_length = buffer_size;
    buffer_ptr = (int8_t *)allocate_buffer_memory(_DAT_180c8ed18, 0x10, 0x13);
    *buffer_ptr = 0;
LAB_APPEND_SEPARATOR:
    temp_value2 = get_buffer_handle(buffer_ptr);
    temp_value4._0_4_ = temp_value2;
  }
  else if ((uint)temp_value4 < 4) {
    local_buffer = (int8_t *)CONCAT71(local_buffer._1_7_, 0x13);
    message_length = buffer_size;
    buffer_ptr = (int8_t *)reallocate_buffer_memory(_DAT_180c8ed18, buffer_ptr, 4, 0x10);
    goto LAB_APPEND_SEPARATOR;
  }
  
  *(int16_t *)(buffer_ptr + message_length) = 0x3a;  // 冒号
  message_length = 3;
  
  // 格式化错误代码
  format_error_code(&local_pointer, local_param3);
  buffer_size = message_length;
  security_cookie = message_length + 1;
  
  if (security_cookie != 0) {
    allocation_size = message_length + 2;
    if (buffer_ptr == (int8_t *)0x0) {
      if ((int)allocation_size < 0x10) {
        allocation_size = 0x10;
      }
      buffer_ptr = (int8_t *)allocate_buffer_memory(_DAT_180c8ed18, (longlong)(int)allocation_size, 0x13);
      *buffer_ptr = 0;
    }
    else {
      if (allocation_size <= (uint)temp_value4) goto LAB_FORMAT_ERROR_CODE;
      local_buffer = (int8_t *)CONCAT71(local_buffer._1_7_, 0x13);
      buffer_ptr = (int8_t *)reallocate_buffer_memory(_DAT_180c8ed18, buffer_ptr, allocation_size, 0x10);
    }
    temp_value2 = get_buffer_handle(buffer_ptr);
    temp_value4._0_4_ = temp_value2;
  }
  
LAB_FORMAT_ERROR_CODE:
  *(int16_t *)(buffer_ptr + message_length) = 10;
  security_cookie = buffer_size + 0xd;
  message_length = security_cookie;
  
  if (security_cookie != 0) {
    allocation_size = buffer_size + 0xe;
    if (buffer_ptr == (int8_t *)0x0) {
      if ((int)allocation_size < 0x10) {
        allocation_size = 0x10;
      }
      buffer_ptr = (int8_t *)allocate_buffer_memory(_DAT_180c8ed18, (longlong)(int)allocation_size, 0x13);
      *buffer_ptr = 0;
    }
    else {
      if (allocation_size <= (uint)temp_value4) goto LAB_APPEND_EXPRESS_INFO;
      local_buffer = (int8_t *)CONCAT71(local_buffer._1_7_, 0x13);
      buffer_ptr = (int8_t *)reallocate_buffer_memory(_DAT_180c8ed18, buffer_ptr, allocation_size, 0x10);
    }
    temp_value2 = get_buffer_handle(buffer_ptr);
    temp_value4._0_4_ = temp_value2;
  }
  
LAB_APPEND_EXPRESS_INFO:
  // 添加"Express: "前缀
  string_index = thread_context;
  string_pointer = (uint64_t *)(buffer_ptr + message_length);
  *string_pointer = 0x6973736572707845;  // "Express: "
  *(int32_t *)(string_pointer + 1) = 0x203a6e6f;
  *(int8_t *)((longlong)string_pointer + 0xc) = 0;
  
  temp_index = -1;
  message_length = security_cookie;
  
  if (thread_context != 0) {
    do {
      temp_index2 = temp_index;
      temp_index = temp_index2 + 1;
    } while (*(char *)(thread_context + temp_index) != '\0');
    
    if (0 < (int)temp_index) {
      allocation_size = security_cookie + (int)temp_index;
      if (allocation_size != 0) {
        buffer_size = allocation_size + 1;
        
        if (buffer_ptr == (int8_t *)0x0) {
          if ((int)buffer_size < 0x10) {
            buffer_size = 0x10;
          }
          buffer_ptr = (int8_t *)allocate_buffer_memory(_DAT_180c8ed18, (longlong)(int)buffer_size, 0x13);
          *buffer_ptr = 0;
        }
        else {
          if (buffer_size <= (uint)temp_value4) goto LAB_APPEND_THREAD_CONTEXT;
          local_buffer = (int8_t *)CONCAT71(local_buffer._1_7_, 0x13);
          buffer_ptr = (int8_t *)reallocate_buffer_memory(_DAT_180c8ed18, buffer_ptr, buffer_size, 0x10);
        }
        temp_value2 = get_buffer_handle(buffer_ptr);
        temp_value4._0_4_ = temp_value2;
      }
      
LAB_APPEND_THREAD_CONTEXT:
      memcpy(buffer_ptr + message_length, string_index, (longlong)((int)temp_index2 + 2));
    }
  }
  
  allocation_size = buffer_size + 0xe;
  if (allocation_size != 0) {
    buffer_size = buffer_size + 0xf;
    if (buffer_ptr == (int8_t *)0x0) {
      if ((int)buffer_size < 0x10) {
        buffer_size = 0x10;
      }
      buffer_ptr = (int8_t *)allocate_buffer_memory(_DAT_180c8ed18, (longlong)(int)buffer_size, 0x13);
      *buffer_ptr = 0;
    }
    else {
      if (buffer_size <= (uint)temp_value4) goto LAB_FINAL_NEWLINE;
      local_buffer = (int8_t *)CONCAT71(local_buffer._1_7_, 0x13);
      buffer_ptr = (int8_t *)reallocate_buffer_memory(_DAT_180c8ed18, buffer_ptr, buffer_size, 0x10);
    }
    temp_value2 = get_buffer_handle(buffer_ptr);
    temp_value4._0_4_ = temp_value2;
  }
  
LAB_FINAL_NEWLINE:
  *(int16_t *)(buffer_ptr + message_length) = 10;
  message_length = allocation_size;
  
  // 释放信号量
  if (string_index != 0) {
    release_engine_semaphore(string_index);
  }
  
  allocation_flag = 1;
  thread_flag = '\x01';
  validation_result = (**(code **)**(uint64_t **)(_DAT_180c8ed08 + 0x18))();
  
  if ((validation_result != '\0') || (allocation_size = IsDebuggerPresent(), allocation_size == 0)) {
    allocation_flag = 0;
  }
  
  // 检查引擎状态
  if (_DAT_180c86870 == 0) {
    dialog_flag = '\0';
  }
  else {
    dialog_flag = *(char *)(_DAT_180c86870 + 0x24);
  }
  
  is_main_thread = true;
  if (string_index != 0) {
    allocation_size = *(int *)(**(longlong **)(string_index + 8) + 0x48);
    current_thread_id = _Thrd_id();
    thread_flag = current_thread_id == allocation_size;
    is_main_thread = (bool)thread_flag;
  }
  
  string_index = _DAT_180c86950;
  
  // 处理调试信息
  if ((system_debug_flag2 == '\0') && (is_main_thread)) {
    if ((_DAT_180c86950 != 0) && (*(char *)(_DAT_180c86950 + 0x1609) != '\x01')) {
      process_debug_information(*(uint64_t *)(_DAT_180c86870 + 8), *(char *)(_DAT_180c868d0 + 0x2028) != '\0',
                                 *(int32_t *)(_DAT_180c86950 + 0x160c));
      *(int8_t *)(string_index + 0x1609) = 1;
    }
    
    if (*(longlong *)(_DAT_180c86870 + 8) != 0) {
      initialize_debug_context();
    }
  }
  
  // 准备错误消息显示
  local_pointer = &StandardEmptyString;
  temp_value4._0_4_ = 0;
  description_buffer = (int8_t *)0x0;
  message_length = 0;
  
  if (allocation_flag == 0) {
    string_index = get_debug_message(&local_pointer, 0);
    message_length = *(uint *)(string_index + 0x10);
    description_buffer = *(int8_t **)(string_index + 8);
    temp_value4 = *(ulonglong *)(string_index + 0x18);
    *(int32_t *)(string_index + 0x10) = 0;
    *(uint64_t *)(string_index + 8) = 0;
    *(uint64_t *)(string_index + 0x18) = 0;
    local_pointer = &StandardEmptyString;
    
    if (context_value != 0) {
      free_buffer_memory();
    }
    
    context_value = 0;
    local_param3 = 0;
    local_pointer = &StandardCleanupString;
  }
  
  message_buffer = description_buffer;
  
  // 记录错误日志
  log_error_message(_DAT_180c86928, 5, 0xffffffff00000000, &ErrorLogLocation);
  
  local_buffer = &DefaultErrorMessage;
  if (buffer_ptr != (int8_t *)0x0) {
    local_buffer = buffer_ptr;
  }
  
  log_error_message(_DAT_180c86928, 4, 0xffffffff00000000, &ErrorLogLocation);
  
  local_buffer = &DefaultErrorMessage;
  if (message_buffer != (int8_t *)0x0) {
    local_buffer = message_buffer;
  }
  
  log_error_with_flags(_DAT_180c86928, 4, 0xffffffff00000000, 3);
  finalize_error_logging();
  
  error_message = &DefaultErrorMessage;
  if (buffer_ptr != (int8_t *)0x0) {
    error_message = buffer_ptr;
  }
  
  // 输出调试信息
  OutputDebugStringA(error_message);
  cleanup_temporary_variables(temp_index);
  
  // 处理错误显示逻辑
  if (system_debug_flag != '\0') {
    if (allocation_flag != 0) {
      if (((dialog_flag == '\0') && (param_6 != '\0')) && (*(int *)(_DAT_180c86870 + 0x340) != 2)) {
        dialog_flag = 1;
      }
      else if (system_memory_2851 == '\0') {
        error_handler = (code *)swi(3);
        (*error_handler)();
        return;
      }
    }
    
    if ((_DAT_180c86948 == 0) || (*(int *)(_DAT_180c86948 + 0x168) == 2)) {
      log_error_message(_DAT_180c86928, 4, 0xffffffff00000000, &DebugMessageLocation);
      finalize_error_logging();
      
      allocation_size = IsDebuggerPresent();
      if ((allocation_size != 0) && (system_memory_2851 == '\0')) {
        error_handler = (code *)swi(3);
        (*error_handler)();
        return;
      }
    }
  }
  
  // 显示错误对话框
  if (system_debug_flag2 == '\0') {
    context_pointer = &ErrorMessageTitle;
    if (error_type != '\0') {
      context_pointer = &AlternativeErrorMessageTitle;
    }
    
    do {
      while (true) {
        error_message = &DefaultErrorMessage;
        if (buffer_ptr != (int8_t *)0x0) {
          error_message = buffer_ptr;
        }
        
        if (((system_debug_flag == '\0') || (allocation_size = IsDebuggerPresent(), allocation_size != 0)) &&
            (system_debug_flag2 == '\0')) break;
        
        if (*(char *)(_DAT_180c86928 + 0x18) != '\0') {
          local_buffer = &ExtendedErrorInfo;
          local_pointer = context_pointer;
          buffer_ptr = error_message;
          log_error_with_flags(_DAT_180c86928, 3, 0xffffffff00000000, 0xd);
        }
      }
      
      temp_value2 = MessageBoxA(0, error_message, context_pointer, 0x52012);
      
      switch (temp_value2) {
      case 1:  // 重试
        allocation_size = 0;
        break;
      default:  // 取消
        allocation_size = 1;
        break;
      case 4:  // 重试
        allocation_size = 2;
        break;
      case 5:  // 忽略
        allocation_size = 3;
        break;
      case 6:  // 继续
        allocation_size = 4;
        break;
      case 7:  // 终止
        allocation_size = 5;
      }
    } while (allocation_size == 1);
    
    if (allocation_size == 2) {
      if (allocation_flag == 0) {
        error_message = &DefaultErrorMessage;
        if (message_buffer != (int8_t *)0x0) {
          error_message = message_buffer;
        }
        
        if (((system_debug_flag == '\0') || (allocation_size = IsDebuggerPresent(), allocation_size != 0)) &&
            (system_debug_flag2 == '\0')) {
          MessageBoxA(0, error_message, &RetryErrorMessageTitle, 0x41010);
        }
        else if (*(char *)(_DAT_180c86928 + 0x18) != '\0') {
          local_pointer = &RetryErrorMessageTitle;
          local_buffer = &ExtendedErrorInfo;
          buffer_ptr = error_message;
          log_error_with_flags(_DAT_180c86928, 3, 0xffffffff00000000, 0xd);
        }
      }
      else if (((param_6 == '\0') || (*(int *)(_DAT_180c86870 + 0x340) == 2)) &&
              (system_memory_2851 == '\0')) {
        error_handler = (code *)swi(3);
        (*error_handler)();
        return;
      }
    }
    else if (allocation_size == 3) goto LAB_TERMINATE_PROCESS;
    
    if (_DAT_180c86870 == 0) {
      validation_result = '\x01';
    }
    else {
      validation_result = *(char *)(_DAT_180c86870 + 0x29);
    }
    
    if (dialog_flag != '\0') {
      shutdown_engine(validation_result, 5);
      error_handler = (code *)swi(3);
      (*error_handler)();
      return;
    }
    
    if (validation_result != '\0') {
      _DAT_180c82854 = 5;
    }
    
    if ((system_debug_flag2 == '\0') && (thread_flag != '\0')) {
      if (*(longlong *)(_DAT_180c86870 + 8) != 0) {
        cleanup_engine_resources();
      }
      
      if (_DAT_180c86950 != 0) {
        cleanup_debug_context(_DAT_180c86950, *(int8_t *)(_DAT_180c86950 + 0x160a));
      }
    }
    
    if (thread_context != 0) {
      cleanup_thread_context();
    }
    
    // 释放信号量
    do {
      allocation_size = ReleaseSemaphore(_DAT_180c91900, 1);
    } while (allocation_size == 0);
    
    // 清理资源
    local_pointer = &StandardEmptyString;
    if (message_buffer != (int8_t *)0x0) {
      free_buffer_memory(message_buffer);
    }
    
    description_buffer = (int8_t *)0x0;
    temp_value4 = temp_value4 & 0xffffffff00000000;
    local_pointer = &StandardCleanupString;
    
    // 清理格式化消息
    local_pointer = &StandardEmptyString;
    if (buffer_ptr != (int8_t *)0x0) {
      free_buffer_memory();
    }
    
    buffer_ptr = (int8_t *)0x0;
    temp_value4._0_4_ = temp_value4._0_4_ & 0xffffffff00000000;
    local_pointer = &StandardCleanupString;
    
    // 清理临时资源
    local_pointer = &StandardEmptyString;
    if (local_pointer != (void *)0x0) {
      free_buffer_memory();
    }
    
LAB_SHOW_ERROR_DIALOG:
    temp_value1 = 0;
    local_pointer = (void *)0x0;
    local_pointer = &StandardCleanupString;
    
    // 验证安全cookie并返回
    verify_stack_cookie(stack_checksum ^ (ulonglong)stack_cookie);
  }
  
LAB_TERMINATE_PROCESS:
  context_pointer = &DefaultErrorMessage;
  if (local_pointer != (void *)0x0) {
    context_pointer = local_pointer;
  }
  
  temp_value2 = get_error_code(context_pointer);
  terminate_process_with_error(_DAT_180c86928, &ErrorMessageTermination, allocation_flag ^ 1, temp_value2);
}


/**
 * 记录断言失败信息
 * 功能：记录断言失败信息，格式化错误消息，并输出到调试日志
 * 参数：param_1 - 上下文信息, param_2 - 断言描述, param_3 - 错误代码, param_4 - 附加信息
 */
void log_assertion_failure(uint64_t param_1, longlong param_2, int32_t param_3, longlong param_4)

{
  int wait_result;
  uint buffer_size;
  uint message_length;
  int32_t formatted_value;
  longlong string_index;
  void *context_pointer;
  int32_t *string_data;
  uint64_t *message_pointer;
  int8_t *message_buffer;
  int8_t *description_buffer;
  void *temp_pointer;
  longlong temp_index;
  uint temp_size;
  uint new_size;
  void *local_pointer;
  int8_t *local_buffer;
  uint local_size;
  ulonglong buffer_capacity;
  void *stack_pointer;
  longlong local_context;
  int32_t local_param3;
  
  // 等待信号量获取访问权限
  wait_result = WaitForSingleObject(_DAT_180c91900, 0);
  if (wait_result != 0) {
    return;
  }
  
  // 初始化指针和缓冲区
  temp_pointer = (void *)0x0;
  local_pointer = &StandardEmptyString;
  temp_size._0_4_ = 0;
  local_buffer = (void *)0x0;
  local_size = 0;
  
  // 检查是否在调试模式下
  wait_result = IsDebuggerPresent();
  if (wait_result == 0) {
    // 获取调试消息
    string_index = get_debug_message(&stack_pointer, 0);
    local_size = *(int32_t *)(string_index + 0x10);
    temp_pointer = *(void **)(string_index + 8);
    temp_size._0_4_ = *(int32_t *)(string_index + 0x18);
    *(int32_t *)(string_index + 0x10) = 0;
    *(uint64_t *)(string_index + 8) = 0;
    *(uint64_t *)(string_index + 0x18) = 0;
    stack_pointer = &StandardEmptyString;
    local_buffer = temp_pointer;
    
    if (local_context != 0) {
      free_buffer_memory();
    }
    
    local_context = 0;
    local_param3 = 0;
    stack_pointer = &StandardCleanupString;
  }
  
  // 准备断言失败消息
  local_pointer = &StandardEmptyString;
  buffer_capacity._0_4_ = 0;
  message_buffer = (int8_t *)0x0;
  local_size = 0;
  
  // 分配消息缓冲区
  message_buffer = (int8_t *)allocate_buffer_memory(_DAT_180c8ed18, 0x12, 0x13);
  *message_buffer = 0;
  buffer_size = get_buffer_handle(message_buffer);
  buffer_capacity._0_4_ = buffer_size;
  
  // 添加断言失败前缀
  string_data = (int32_t *)(message_buffer + local_size);
  *string_data = 0x65737341;  // "Ass"
  string_data[1] = 0x6f697472;  // "ertion"
  string_data[2] = 0x6146206e;  // "a F"
  string_data[3] = 0x64656c69;  // "ailed"
  *(int16_t *)(string_data + 4) = 0x21;  // "!"
  local_size = 0x11;
  
  // 扩展缓冲区以容纳换行符
  if (message_buffer == (int8_t *)0x0) {
    local_size = 0x11;
    message_buffer = (int8_t *)allocate_buffer_memory(_DAT_180c8ed18, 0x13, 0x13);
    *message_buffer = 0;
LAB_EXPAND_BUFFER:
    formatted_value = get_buffer_handle(message_buffer);
    buffer_capacity._0_4_ = formatted_value;
  }
  else if (buffer_size < 0x13) {
    local_size = 0x11;
    message_buffer = (int8_t *)reallocate_buffer_memory(_DAT_180c8ed18, message_buffer, 0x13, 0x10, 0x13);
    goto LAB_EXPAND_BUFFER;
  }
  
  // 添加换行符
  *(int16_t *)(message_buffer + local_size) = 10;
  local_size = 0x12;
  buffer_size = 0x13;
  
  // 如果有断言描述，则添加到消息中
  if (param_2 != 0) {
    string_index = -1;
    do {
      temp_index = string_index;
      string_index = temp_index + 1;
    } while (*(char *)(param_2 + string_index) != '\0');
    
    wait_result = (int)string_index;
    if (0 < wait_result) {
      new_size = buffer_size;
      if (wait_result != -0x13) {
        temp_size = wait_result + 0x14;
        
        if (message_buffer == (int8_t *)0x0) {
          if ((int)temp_size < 0x10) {
            temp_size = 0x10;
          }
          local_size = buffer_size;
          message_buffer = (int8_t *)allocate_buffer_memory(_DAT_180c8ed18, (longlong)(int)temp_size, 0x13);
          *message_buffer = 0;
        }
        else {
          new_size = local_size;
          if (temp_size <= (uint)buffer_capacity) goto LAB_APPEND_ASSERTION_DESC;
          local_size = buffer_size;
          message_buffer = (int8_t *)reallocate_buffer_memory(_DAT_180c8ed18, message_buffer, temp_size, 0x10, 0x13);
        }
        
        formatted_value = get_buffer_handle(message_buffer);
        buffer_capacity._0_4_ = formatted_value;
        new_size = local_size;
      }
      
LAB_APPEND_ASSERTION_DESC:
      local_size = new_size;
      memcpy(message_buffer + local_size, param_2, (longlong)((int)temp_index + 2));
    }
  }
  
  // 添加分隔符
  if (message_buffer == (int8_t *)0x0) {
    local_size = buffer_size;
    message_buffer = (int8_t *)allocate_buffer_memory(_DAT_180c8ed18, 0x15, 0x13);
    *message_buffer = 0;
LAB_ADD_SEPARATOR:
    formatted_value = get_buffer_handle(message_buffer);
    buffer_capacity._0_4_ = formatted_value;
  }
  else if ((uint)buffer_capacity < 0x15) {
    local_size = buffer_size;
    message_buffer = (int8_t *)reallocate_buffer_memory(_DAT_180c8ed18, message_buffer, 0x15, 0x10, 0x13);
    goto LAB_ADD_SEPARATOR;
  }
  
  *(int16_t *)(message_buffer + local_size) = 0x3a;  // 冒号
  local_size = 0x14;
  
  // 格式化错误代码
  format_error_code(&local_pointer, param_3);
  buffer_size = local_size;
  new_size = local_size + 1;
  
  if (new_size != 0) {
    temp_size = local_size + 2;
    if (message_buffer == (int8_t *)0x0) {
      if ((int)temp_size < 0x10) {
        temp_size = 0x10;
      }
      message_buffer = (int8_t *)allocate_buffer_memory(_DAT_180c8ed18, (longlong)(int)temp_size, 0x13);
      *message_buffer = 0;
    }
    else {
      if (temp_size <= (uint)buffer_capacity) goto LAB_FORMAT_ASSERTION_CODE;
      message_buffer = (int8_t *)reallocate_buffer_memory(_DAT_180c8ed18, message_buffer, temp_size, 0x10, 0x13);
    }
    formatted_value = get_buffer_handle(message_buffer);
    buffer_capacity._0_4_ = formatted_value;
  }
  
LAB_FORMAT_ASSERTION_CODE:
  *(int16_t *)(message_buffer + local_size) = 10;
  temp_size = buffer_size + 0xd;
  local_size = new_size;
  
  if (temp_size != 0) {
    new_size = buffer_size + 0xe;
    if (message_buffer == (int8_t *)0x0) {
      if ((int)new_size < 0x10) {
        new_size = 0x10;
      }
      message_buffer = (int8_t *)allocate_buffer_memory(_DAT_180c8ed18, (longlong)(int)new_size, 0x13);
      *message_buffer = 0;
    }
    else {
      if (new_size <= (uint)buffer_capacity) goto LAB_APPEND_EXPRESS_PREFIX;
      message_buffer = (int8_t *)reallocate_buffer_memory(_DAT_180c8ed18, message_buffer, new_size, 0x10, 0x13);
    }
    formatted_value = get_buffer_handle(message_buffer);
    buffer_capacity._0_4_ = formatted_value;
  }
  
LAB_APPEND_EXPRESS_PREFIX:
  // 添加"Express: "前缀
  message_pointer = (uint64_t *)(message_buffer + local_size);
  *message_pointer = 0x6973736572707845;  // "Express: "
  *(int32_t *)(message_pointer + 1) = 0x203a6e6f;
  *(int8_t *)((longlong)message_pointer + 0xc) = 0;
  
  string_index = -1;
  local_size = temp_size;
  
  // 如果有附加信息，则添加到消息中
  if (param_4 != 0) {
    do {
      temp_index = string_index;
      string_index = temp_index + 1;
    } while (*(char *)(param_4 + string_index) != '\0');
    
    if (0 < (int)string_index) {
      wait_result = temp_size + (int)string_index;
      if (wait_result != 0) {
        buffer_size = wait_result + 1;
        
        if (message_buffer == (int8_t *)0x0) {
          if ((int)buffer_size < 0x10) {
            buffer_size = 0x10;
          }
          message_buffer = (int8_t *)allocate_buffer_memory(_DAT_180c8ed18, (longlong)(int)buffer_size, 0x13);
          *message_buffer = 0;
        }
        else {
          if (buffer_size <= (uint)buffer_capacity) goto LAB_APPEND_ADDITIONAL_INFO;
          message_buffer = (int8_t *)reallocate_buffer_memory(_DAT_180c8ed18, message_buffer, buffer_size, 0x10, 0x13);
        }
        formatted_value = get_buffer_handle(message_buffer);
        buffer_capacity._0_4_ = formatted_value;
      }
      
LAB_APPEND_ADDITIONAL_INFO:
      memcpy(message_buffer + local_size, param_4, (longlong)((int)temp_index + 2));
    }
  }
  
  // 添加最终换行符
  if (buffer_size + 0xe != 0) {
    new_size = buffer_size + 0xf;
    if (message_buffer == (int8_t *)0x0) {
      if ((int)new_size < 0x10) {
        new_size = 0x10;
      }
      message_buffer = (int8_t *)allocate_buffer_memory(_DAT_180c8ed18, (longlong)(int)new_size, 0x13);
      *message_buffer = 0;
    }
    else {
      if (new_size <= (uint)buffer_capacity) goto LAB_FINAL_NEWLINE;
      message_buffer = (int8_t *)reallocate_buffer_memory(_DAT_180c8ed18, message_buffer, new_size, 0x10, 0x13);
    }
    formatted_value = get_buffer_handle(message_buffer);
    buffer_capacity._0_4_ = formatted_value;
  }
  
LAB_FINAL_NEWLINE:
  *(int16_t *)(message_buffer + local_size) = 10;
  local_size = buffer_size + 0xe;
  
  // 记录错误日志
  log_error_message(_DAT_180c86928, 5, 0xffffffff00000000, &ErrorLogLocation);
  
  description_buffer = &DefaultErrorMessage;
  if (message_buffer != (int8_t *)0x0) {
    description_buffer = message_buffer;
  }
  
  log_error_message(_DAT_180c86928, 4, 0xffffffff00000000, &ErrorLogLocation, description_buffer);
  
  context_pointer = &DefaultErrorMessage;
  if (temp_pointer != (void *)0x0) {
    context_pointer = temp_pointer;
  }
  
  log_error_with_flags(_DAT_180c86928, 4, 0xffffffff00000000, 3, context_pointer);
  finalize_error_logging();
  
  description_buffer = &DefaultErrorMessage;
  if (message_buffer != (int8_t *)0x0) {
    description_buffer = message_buffer;
  }
  
  // 输出调试信息
  OutputDebugStringA(description_buffer);
  
  // 释放信号量
  do {
    wait_result = ReleaseSemaphore(_DAT_180c91900, 1);
  } while (wait_result == 0);
  
  // 清理资源
  local_pointer = &StandardEmptyString;
  if (message_buffer == (int8_t *)0x0) {
    message_buffer = (int8_t *)0x0;
    buffer_capacity._0_4_ = buffer_capacity._0_4_ & 0xffffffff00000000;
    local_pointer = &StandardCleanupString;
    
    if (temp_pointer == (void *)0x0) {
      return;
    }
    
    free_buffer_memory(temp_pointer);
  }
  
  free_buffer_memory();
}

// 以下是简化实现时使用的参考常量和函数原型
// 这些在实际的原始代码中以不同的方式定义

// 常量定义
#define StandardErrorPrefix "Error"
#define AlternativeErrorPrefix "Warning"
#define StandardEmptyString ""
#define DefaultErrorMessage "Default Error"
#define StandardCleanupString "Cleanup"
#define ErrorLogLocation "Error.log"
#define ErrorMessageTitle "Error"
#define AlternativeErrorMessageTitle "Warning"
#define ExtendedErrorInfo "Extended Error Info"
#define RetryErrorMessageTitle "Retry"
#define ErrorMessageTermination "Termination"
#define DebugMessageLocation "Debug.log"

// 函数原型（简化实现中使用的语义化名称）
void initialize_error_buffer(void* buffer, int size, const char* prefix, int error_code);
longlong get_string_length(void** context, longlong param);
void* allocate_buffer_memory(void* heap, longlong size, int flags);
longlong get_buffer_handle(void* buffer);
void* reallocate_buffer_memory(void* heap, void* buffer, longlong size, int flags1, int flags2);
void free_buffer_memory(void* buffer);
void release_temporary_buffer(void** context1, void** context2, void* buffer);
char validate_error_message(void* message);
longlong release_engine_semaphore(longlong handle);
void process_debug_information(void* context, char flag, int param);
void initialize_debug_context(void);
void log_error_message(void* context, int level, longlong flags, const char* location);
void log_error_with_flags(void* context, int level, longlong flags, int extra_flags);
void finalize_error_logging(void);
void cleanup_temporary_variables(longlong index);
void cleanup_engine_resources(void);
void cleanup_debug_context(void* context, char flag);
void cleanup_thread_context(void);
longlong get_debug_message(void** context, int flags);
void terminate_process_with_error(void* context, const char* message, char flag, int code);
void verify_stack_cookie(ulonglong cookie);
void format_error_code(void* context, int code);
void shutdown_engine(char flag, int code);