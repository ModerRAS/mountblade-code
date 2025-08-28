#include "TaleWorlds.Native.Split.h"

// 01_initialization_part041.c - 初始化模块第41部分
// 本文件包含错误处理、调试输出和程序退出相关功能

/**
 * 检查并处理关键组件的初始化状态
 * 如果关键组件未正确初始化，则触发错误处理
 * 
 * @param component_ptr 组件指针，包含状态信息和回调函数
 */
void check_component_initialization(longlong component_ptr)
{
  // 检查关键组件是否已初始化
  if (*(longlong *)(component_ptr + 0x1d8) != 0) {
    // 触发严重错误处理（此函数不返回）
    trigger_critical_error();
  }
  
  // 调用组件的清理回调函数
  if (*(longlong **)(component_ptr + 0x1b8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(component_ptr + 0x1b8) + 0x38))();
  }
  return;
}



/**
 * 初始化调试输出系统
 * 根据全局配置状态设置调试输出的初始参数
 * 
 * @param output_config 输出配置结构体指针
 * @param param2 参数2（用途未知）
 * @param param3 参数3（用途未知）
 * @param param4 参数4（用途未知）
 * @return 返回配置结构体指针
 */
undefined8 *
initialize_debug_output_system(undefined8 *output_config, undefined8 param2, undefined8 param3, undefined8 param4)
{
  // 检查是否启用调试模式
  if (debug_mode_enabled == '\0') {
    // 初始化第一个输出通道
    *output_config = &debug_output_channel_1;
    output_config[1] = 0;
    *(undefined4 *)(output_config + 2) = 0;
    
    // 初始化第二个输出通道
    *output_config = &debug_output_channel_2;
    output_config[3] = 0;
    output_config[1] = 0;
    *(undefined4 *)(output_config + 2) = 0;
    
    // 调用底层初始化函数
    initialize_output_channels(output_config, 0, param3, param4, 0, 0xfffffffffffffffe);
    *(undefined4 *)(output_config + 2) = 0;
    
    // 清理输出缓冲区
    if ((undefined1 *)output_config[1] != (undefined1 *)0x0) {
      *(undefined1 *)output_config[1] = 0;
    }
  }
  else {
    // 使用现有配置进行初始化
    configure_existing_output(output_config, output_config);
  }
  return output_config;
}



/**
 * 处理严重错误并显示错误消息
 * 在发生严重错误时调用，显示错误信息并终止程序
 * 
 * @param param1 参数1（用途未知）
 * @param error_message 错误消息字符串
 * @return 返回错误代码
 */
ulonglong handle_critical_error(undefined8 param1, undefined8 error_message)
{
  code *pcVar1;
  bool is_debug_mode;
  longlong thread_context;
  char check_result;
  int debugger_present;
  int thread_id;
  ulonglong wait_result;
  undefined *error_buffer;
  bool is_main_thread;
  undefined *local_stack_50;
  undefined *local_stack_48;
  undefined4 local_stack_40;
  undefined8 local_stack_38;
  undefined1 local_buffer_30[8];
  undefined *local_stack_28;
  
  thread_context = global_thread_context;
  wait_result = check_process_state(error_message);
  
  // 检查进程状态是否允许继续
  if (((char)wait_result != '\0') || 
      (wait_result = WaitForSingleObject(global_semaphore_handle, 0), (int)wait_result != 0)) {
    return wait_result & 0xffffffffffffff00;
  }
  
  // 清理线程上下文
  if (thread_context != 0) {
    cleanup_thread_context(thread_context);
  }
  
  is_main_thread = true;
  check_result = (**(code **)**(undefined8 **)(global_debug_system + 0x18))();
  if ((check_result == '\0') && (debugger_present = IsDebuggerPresent(), debugger_present != 0)) {
    is_debug_mode = true;
  }
  else {
    is_debug_mode = false;
  }
  
  // 验证当前线程是否为主线程
  if (thread_context != 0) {
    debugger_present = *(int *)(**(longlong **)(thread_context + 8) + 0x48);
    thread_id = _Thrd_id();
    is_main_thread = thread_id == debugger_present;
  }
  
  // 初始化错误报告缓冲区
  initialize_error_buffer(local_buffer_30, 0);
  local_stack_50 = &debug_output_channel_2;
  local_stack_38 = 0;
  local_stack_48 = (undefined *)0x0;
  local_stack_40 = 0;
  
  // 格式化错误消息
  format_error_message(&local_stack_50, &error_format_string, error_message);
  log_error_message(global_log_system, 5, 0xffffffff00000000, &error_header_string);
  
  // 选择错误输出源
  error_buffer = &default_error_buffer;
  if (local_stack_48 != (undefined *)0x0) {
    error_buffer = local_stack_48;
  }
  
  // 记录详细错误信息
  log_error_message(global_log_system, 5, 0xffffffff00000000, &error_detail_string, error_buffer);
  
  error_buffer = &default_error_buffer;
  if (local_stack_28 != (undefined *)0x0) {
    error_buffer = local_stack_28;
  }
  
  // 输出错误级别信息
  log_error_level(global_log_system, 5, 0xffffffff00000000, 3, error_buffer);
  flush_error_logs();
  
  // 输出调试字符串
  error_buffer = &default_error_buffer;
  if (local_stack_48 != (undefined *)0x0) {
    error_buffer = local_stack_48;
  }
  OutputDebugStringA(error_buffer);
  
  // 处理错误消息
  process_error_message(error_message);
  
  thread_context = global_error_handler;
  
  // 如果是主线程且错误处理器可用，执行错误处理
  if (((is_main_thread) && (global_error_handler != 0)) && 
      (*(char *)(global_error_handler + 0x1609) != '\x01')) {
    execute_error_recovery(*(undefined8 *)(global_system_object + 8),
                          *(char *)(global_config_data + 0x2028) != '\0',
                          *(undefined4 *)(global_error_handler + 0x160c));
    *(undefined1 *)(thread_context + 0x1609) = 1;
  }
  
  // 显示错误对话框
  if (error_dialog_suppressed == '\0') {
    if ((error_silent_mode == '\0') || 
        ((debugger_present = IsDebuggerPresent(), debugger_present != 0 && 
          (error_dialog_suppressed == '\0')))) {
      MessageBoxA(0, error_message, &critical_error_title, 0x41010);
    }
    else if (*(char *)(global_log_system + 0x18) != '\0') {
      log_error_level(global_log_system, 3, 0xffffffff00000000, 0xd, 
                     &error_dialog_format, &critical_error_title, error_message);
    }
  }
  else if (error_silent_mode == '\0') {
    error_buffer = &default_error_buffer;
    if (local_stack_48 != (undefined *)0x0) {
      error_buffer = local_stack_48;
    }
    display_error_message(error_buffer);
  }
  
  // 检查是否需要调试中断
  debugger_present = check_debug_break_required(error_message);
  if ((!is_debug_mode) && (debugger_present == 0)) {
    trigger_debug_break();
  }
  
  // 清理进程状态
  cleanup_process_state(error_message, 0);
  
  // 检查系统对象是否有效
  if (global_system_object == 0) {
    _Exit(5);
    pcVar1 = (code *)swi(3);
    wait_result = (*pcVar1)();
    return wait_result;
  }
  
  // 执行最终清理
  perform_final_cleanup();
  pcVar1 = (code *)swi(3);
  wait_result = (*pcVar1)();
  return wait_result;
}



/**
 * 处理应用程序错误并生成错误报告
 * 根据错误类型和配置决定是否显示错误对话框或生成报告
 * 
 * @param param1 参数1（用途未知）
 * @param error_message 错误消息字符串
 * @param error_type 错误类型标志
 * @return 返回处理结果标志
 */
ulonglong handle_application_error(undefined8 param1, undefined8 error_message, char error_type)
{
  undefined1 local_flag;
  code *pcVar2;
  bool is_debug_mode;
  longlong thread_context;
  undefined *error_buffer;
  char check_result;
  int debugger_present;
  int thread_id;
  undefined4 format_result;
  ulonglong process_state;
  longlong buffer_pointer;
  undefined *buffer_data;
  ulonglong string_result;
  undefined8 string_pointer;
  undefined8 *alloc_pointer;
  bool should_generate_report;
  byte report_generated;
  undefined *local_stack_e0;
  undefined8 *local_stack_d8;
  undefined4 local_stack_d0;
  ulonglong local_stack_c8;
  undefined *local_stack_c0;
  undefined *local_stack_b8;
  undefined4 local_stack_b0;
  undefined8 local_stack_a8;
  undefined *local_stack_a0;
  undefined *local_stack_98;
  undefined4 local_stack_90;
  ulonglong local_stack_88;
  undefined *local_stack_80;
  longlong local_stack_78;
  undefined4 local_stack_68;
  undefined8 local_stack_40;
  
  thread_context = global_thread_context;
  local_stack_40 = 0xfffffffffffffffe;
  report_generated = 0;
  
  // 检查进程状态和信号量
  if (((error_silent_mode == '\0') || 
       (process_state = check_process_state(error_message), (char)process_state != '\0')) ||
      (process_state = WaitForSingleObject(global_semaphore_handle, 0), (int)process_state != 0)) {
    string_result = process_state & 0xffffffffffffff00;
  }
  else {
    // 初始化线程上下文
    if (thread_context != 0) {
      cleanup_thread_context(thread_context);
    }
    
    should_generate_report = true;
    check_result = (**(code **)**(undefined8 **)(global_debug_system + 0x18))();
    if ((check_result == '\0') && (debugger_present = IsDebuggerPresent(), debugger_present != 0)) {
      is_debug_mode = true;
    }
    else {
      is_debug_mode = false;
    }
    
    // 验证线程身份
    if (thread_context != 0) {
      debugger_present = *(int *)(**(longlong **)(thread_context + 8) + 0x48);
      thread_id = _Thrd_id();
      should_generate_report = thread_id == debugger_present;
    }
    
    // 初始化错误报告缓冲区
    local_stack_c0 = &debug_output_channel_2;
    local_stack_a8 = 0;
    local_stack_b8 = (undefined *)0x0;
    local_stack_b0 = 0;
    
    if (!is_debug_mode) {
      buffer_pointer = initialize_error_buffer(&local_stack_e0, 0);
      local_stack_b0 = *(undefined4 *)(buffer_pointer + 0x10);
      local_stack_b8 = *(undefined **)(buffer_pointer + 8);
      local_stack_a8 = *(undefined8 *)(buffer_pointer + 0x18);
      
      // 清理缓冲区
      *(undefined4 *)(buffer_pointer + 0x10) = 0;
      *(undefined8 *)(buffer_pointer + 8) = 0;
      *(undefined8 *)(buffer_pointer + 0x18) = 0;
      
      local_stack_e0 = &debug_output_channel_2;
      if (local_stack_d8 != (undefined8 *)0x0) {
        // 触发内存错误
        trigger_memory_error();
      }
      local_stack_d8 = (undefined8 *)0x0;
      local_stack_c8 = local_stack_c8 & 0xffffffff00000000;
      local_stack_e0 = &debug_output_channel_1;
    }
    
    error_buffer = local_stack_b8;
    local_stack_a0 = &debug_output_channel_2;
    local_stack_88 = 0;
    local_stack_98 = (undefined *)0x0;
    local_stack_90 = 0;
    
    // 格式化应用程序错误消息
    format_error_message(&local_stack_a0, &app_error_format_string, error_message);
    log_error_message(global_log_system, 5, 0xffffffff00000000, &error_header_string);
    
    // 选择错误输出源
    buffer_data = &default_error_buffer;
    if (local_stack_98 != (undefined *)0x0) {
      buffer_data = local_stack_98;
    }
    
    log_error_message(global_log_system, 2, 0xffffffff00000000, &error_detail_string, buffer_data);
    
    buffer_data = &default_error_buffer;
    if (error_buffer != (undefined *)0x0) {
      buffer_data = error_buffer;
    }
    
    log_error_level(global_log_system, 2, 0xffffffff00000000, 3, buffer_data);
    flush_error_logs();
    
    // 输出调试信息
    buffer_data = &default_error_buffer;
    if (local_stack_98 != (undefined *)0x0) {
      buffer_data = local_stack_98;
    }
    OutputDebugStringA(buffer_data);
    
    // 处理错误消息
    process_error_message(error_message);
    
    // 检查是否需要生成错误报告
    if (((error_silent_mode != '\0') && (is_debug_mode)) &&
       ((*(char *)(global_system_object + 0x25) != '\0' ||
         ((error_type == '\0' || (*(int *)(global_system_object + 0x340) == 2)))))) {
      if (report_generation_enabled == '\0') {
        pcVar2 = (code *)swi(3);
        string_result = (*pcVar2)();
        return string_result;
      }
      report_generated = 1;
    }
    
    // 显示错误对话框
    if (error_dialog_suppressed == '\0') {
      if (should_generate_report) {
        if (*(longlong *)(global_system_object + 8) != 0) {
          cleanup_system_resources(*(longlong *)(global_system_object + 8));
        }
        
        thread_context = global_error_handler;
        if ((global_error_handler != 0) && 
            (*(char *)(global_error_handler + 0x1609) != '\x01')) {
          execute_error_recovery(*(undefined8 *)(global_system_object + 8),
                                *(char *)(global_config_data + 0x2028) != '\0',
                                *(undefined4 *)(global_error_handler + 0x160c));
          *(undefined1 *)(thread_context + 0x1609) = 1;
        }
      }
      
      // 创建错误报告标题
      local_stack_e0 = &debug_output_channel_2;
      local_stack_c8 = 0;
      local_stack_d8 = (undefined8 *)0x0;
      local_stack_d0 = 0;
      
      alloc_pointer = (undefined8 *)allocate_error_report_buffer(global_error_report_system, 0x10, 0x13);
      *(undefined1 *)alloc_pointer = 0;
      local_stack_d8 = alloc_pointer;
      
      format_result = format_error_title(alloc_pointer);
      local_stack_c8 = CONCAT44(local_stack_c8._4_4_, format_result);
      
      *alloc_pointer = 0x4e524157204c4752;  // "WALR LGR"
      *(undefined4 *)(alloc_pointer + 1) = 0x474e49;  // "ING"
      local_stack_d0 = 0xb;
      
      // 显示错误对话框
      if (((error_silent_mode == '\0') || 
           (debugger_present = IsDebuggerPresent(), debugger_present != 0)) &&
          (error_dialog_suppressed == '\0')) {
        MessageBoxA(0, error_message, alloc_pointer, 0x41030);
      }
      else if (*(char *)(global_log_system + 0x18) != '\0') {
        log_error_level(global_log_system, 3, 0xffffffff00000000, 0xd, 
                       &error_dialog_format, alloc_pointer, error_message);
      }
      
      local_stack_e0 = &debug_output_channel_2;
      // 释放错误报告缓冲区
      free_error_report_buffer(alloc_pointer);
    }
    
    // 静默模式处理
    if (error_silent_mode == '\0') {
      display_silent_error(&silent_error_format, error_message);
    }
    
    // 检查调试中断需求
    debugger_present = check_debug_break_required(error_message);
    if (((!is_debug_mode) && (debugger_present == 0)) && 
        (*(char *)(global_system_object + 0x2a) != '\0')) {
      local_flag = *(undefined1 *)(global_system_object + 0x141);
      string_pointer = build_error_description(&local_stack_80, global_system_object + 0x148);
      string_pointer = build_error_description(&local_stack_e0, string_pointer);
      
      local_stack_80 = &debug_output_channel_2;
      if (local_stack_78 != 0) {
        // 触发内存错误
        trigger_memory_error();
      }
      
      local_stack_78 = 0;
      local_stack_68 = 0;
      local_stack_80 = &debug_output_channel_1;
      
      buffer_data = &default_error_buffer;
      if (error_buffer != (undefined *)0x0) {
        buffer_data = error_buffer;
      }
      
      generate_error_report(string_pointer, &local_stack_e0, local_flag, 0, buffer_data);
      
      local_stack_e0 = &debug_output_channel_2;
      if (local_stack_d8 != (undefined8 *)0x0) {
        // 触发内存错误
        trigger_memory_error();
      }
      
      local_stack_d8 = (undefined8 *)0x0;
      local_stack_c8 = local_stack_c8 & 0xffffffff00000000;
      local_stack_e0 = &debug_output_channel_1;
    }
    
    // 清理进程状态
    cleanup_process_state(error_message, 0);
    
    // 检查退出模式
    if (global_system_object == 0) {
      check_result = '\x01';
    }
    else {
      check_result = *(char *)(global_system_object + 0x29);
    }
    
    // 强制退出处理
    if (*(char *)(global_system_object + 0x25) != '\0') {
      perform_emergency_exit(global_system_object, 5);
      pcVar2 = (code *)swi(3);
      string_result = (*pcVar2)();
      return string_result;
    }
    
    // 设置退出代码
    if (check_result != '\0') {
      global_exit_code = 5;
    }
    
    // 执行清理操作
    if ((error_dialog_suppressed == '\0') && (should_generate_report)) {
      if (*(longlong *)(global_system_object + 8) != 0) {
        perform_system_cleanup();
      }
      
      if (global_error_handler != 0) {
        cleanup_error_handler(global_error_handler, 
                             *(undefined1 *)(global_error_handler + 0x160a));
      }
    }
    
    // 清理线程上下文
    if (thread_context != 0) {
      finalize_thread_context(thread_context);
    }
    
    // 释放信号量
    do {
      debugger_present = ReleaseSemaphore(global_semaphore_handle, 1);
    } while (debugger_present == 0);
    
    // 清理栈内存
    local_stack_a0 = &debug_output_channel_2;
    if (local_stack_98 != (undefined *)0x0) {
      // 触发内存错误
      trigger_memory_error();
    }
    
    local_stack_98 = (undefined *)0x0;
    local_stack_88 = local_stack_88 & 0xffffffff00000000;
    local_stack_a0 = &debug_output_channel_1;
    
    local_stack_c0 = &debug_output_channel_2;
    if (error_buffer != (undefined *)0x0) {
      // 触发内存错误
      trigger_memory_error(error_buffer);
    }
    
    string_result = (ulonglong)report_generated;
  }
  
  return string_result;
}



/**
 * 处理模块加载错误
 * 专门处理模块加载过程中的错误，包括依赖检查和错误报告
 * 
 * @param param1 参数1（用途未知）
 * @param error_message 错误消息字符串
 * @param error_type 错误类型标志
 * @return 返回处理结果标志
 */
ulonglong handle_module_loading_error(undefined8 param1, undefined8 error_message, char error_type)
{
  code *pcVar1;
  longlong thread_context;
  char check_result;
  int debugger_present;
  int thread_id;
  undefined1 *process_result;
  longlong buffer_pointer;
  undefined **buffer_pointer_ptr;
  undefined8 *alloc_pointer;
  undefined *buffer_data;
  ulonglong error_flag;
  undefined *error_buffer;
  undefined1 local_flag;
  bool is_debug_mode;
  bool should_handle_error;
  undefined4 format_result;
  byte report_generated;
  undefined *local_stack_b0;
  undefined *local_stack_a8;
  undefined4 local_stack_a0;
  ulonglong local_stack_98;
  undefined *local_stack_90;
  undefined8 *local_stack_88;
  undefined4 local_stack_80;
  ulonglong local_stack_78;
  undefined *local_stack_70;
  longlong local_stack_68;
  undefined4 local_stack_58;
  undefined *local_stack_50;
  longlong local_stack_48;
  undefined4 local_stack_38;
  undefined8 local_stack_30;
  
  thread_context = global_thread_context;
  local_stack_30 = 0xfffffffffffffffe;
  report_generated = 0;
  process_result = (undefined1 *)register0x00000020;
  
  // 检查进程状态和信号量
  if (((error_silent_mode == '\0') ||
      (process_result = (undefined1 *)check_process_state(error_message), (char)process_result != '\0')) ||
     (process_result = (undefined1 *)WaitForSingleObject(global_semaphore_handle, 0), (int)process_result != 0)) {
    return (ulonglong)process_result & 0xffffffffffffff00;
  }
  
  // 初始化线程上下文
  if (thread_context != 0) {
    cleanup_thread_context(thread_context);
  }
  
  should_handle_error = true;
  check_result = (**(code **)**(undefined8 **)(global_debug_system + 0x18))();
  if ((check_result == '\0') && (debugger_present = IsDebuggerPresent(), debugger_present != 0)) {
    is_debug_mode = true;
  }
  else {
    is_debug_mode = false;
  }
  
  // 验证线程身份
  if (thread_context != 0) {
    debugger_present = *(int *)(**(longlong **)(thread_context + 8) + 0x48);
    thread_id = _Thrd_id();
    should_handle_error = thread_id == debugger_present;
  }
  
  error_buffer = (undefined *)0x0;
  if (!is_debug_mode) {
    buffer_pointer = initialize_error_buffer(&local_stack_70, 0);
    error_buffer = *(undefined **)(buffer_pointer + 8);
    
    // 清理缓冲区
    *(undefined4 *)(buffer_pointer + 0x10) = 0;
    *(undefined8 *)(buffer_pointer + 8) = 0;
    *(undefined8 *)(buffer_pointer + 0x18) = 0;
    
    local_stack_70 = &debug_output_channel_2;
    if (local_stack_68 != 0) {
      // 触发内存错误
      trigger_memory_error();
    }
    
    local_stack_68 = 0;
    local_stack_58 = 0;
    local_stack_70 = &debug_output_channel_1;
  }
  
  // 初始化错误处理栈
  local_stack_b0 = &debug_output_channel_2;
  local_stack_98 = 0;
  local_stack_a8 = (undefined *)0x0;
  local_stack_a0 = 0;
  
  // 格式化模块加载错误消息
  format_error_message(&local_stack_b0, &module_error_format_string, error_message);
  log_error_message(global_log_system, 5, 0xffffffff00000000, &error_header_string);
  
  // 选择错误输出源
  buffer_data = &default_error_buffer;
  if (local_stack_a8 != (undefined *)0x0) {
    buffer_data = local_stack_a8;
  }
  
  log_error_message(global_log_system, 2, 0xffffffff00000000, &error_detail_string, buffer_data);
  
  // 如果启用了详细日志，记录更多错误信息
  if (detailed_logging_enabled != '\0') {
    buffer_data = &default_error_buffer;
    if (error_buffer != (undefined *)0x0) {
      buffer_data = error_buffer;
    }
    log_error_level(global_log_system, 2, 0xffffffff00000000, 3, buffer_data);
  }
  
  flush_error_logs();
  
  // 输出调试信息
  buffer_data = &default_error_buffer;
  if (local_stack_a8 != (undefined *)0x0) {
    buffer_data = local_stack_a8;
  }
  OutputDebugStringA(buffer_data);
  
  // 处理错误消息
  process_error_message(error_message);
  
  // 检查是否需要生成模块加载报告
  if ((error_silent_mode != '\0') && (is_debug_mode)) {
    if ((*(char *)(global_system_object + 0x25) == '\0') &&
        ((error_type != '\0' && (*(int *)(global_system_object + 0x340) != 2)))) {
      error_flag = 1;
      report_generated = 1;
      goto skip_error_dialog;
    }
    
    if (report_generation_enabled == '\0') {
      pcVar1 = (code *)swi(3);
      error_flag = (*pcVar1)();
      return error_flag;
    }
  }
  
  error_flag = 0;
skip_error_dialog:
  
  // 检查模块加载状态
  if (*(int *)(global_module_state + 0x460) == 0) {
    if (error_dialog_suppressed == '\0') {
      if (should_handle_error) {
        if (*(longlong *)(global_system_object + 8) != 0) {
          cleanup_system_resources(*(longlong *)(global_system_object + 8));
        }
        
        buffer_pointer = global_error_handler;
        if ((global_error_handler != 0) && 
            (*(char *)(global_error_handler + 0x1609) != '\x01')) {
          execute_error_recovery(*(undefined8 *)(global_system_object + 8),
                                *(char *)(global_config_data + 0x2028) != '\0',
                                *(undefined4 *)(global_error_handler + 0x160c));
          *(undefined1 *)(buffer_pointer + 0x1609) = 1;
        }
      }
      
      // 显示模块加载错误对话框
      if (((error_silent_mode == '\0') || 
           (debugger_present = IsDebuggerPresent(), debugger_present != 0)) &&
          (error_dialog_suppressed == '\0')) {
        MessageBoxA(0, error_message, &module_error_title, 0x41030);
      }
      else if (*(char *)(global_log_system + 0x18) != '\0') {
        log_error_level(global_log_system, 3, 0xffffffff00000000, 0xd, 
                       &error_dialog_format, &module_error_title, error_message);
      }
    }
    else if (error_silent_mode == '\0') {
      display_silent_error(&module_error_format, error_message);
    }
    
    // 检查调试中断需求
    debugger_present = check_debug_break_required(error_message);
    if ((!is_debug_mode) && (debugger_present == 0)) {
      is_debug_mode = global_system_object == 0;
      if (is_debug_mode) {
        local_flag = 0;
        local_stack_90 = &debug_output_channel_2;
        local_stack_78 = 0;
        local_stack_88 = (undefined8 *)0x0;
        local_stack_80 = 0;
        
        // 创建模块路径字符串
        alloc_pointer = (undefined8 *)allocate_error_report_buffer(global_error_report_system, 0x34, 0x13);
        *(undefined1 *)alloc_pointer = 0;
        local_stack_88 = alloc_pointer;
        
        format_result = format_error_title(alloc_pointer);
        local_stack_78 = CONCAT44(local_stack_78._4_4_, format_result);
        
        *alloc_pointer = 0x7270706d75645c5c;  // "\\dumpprop"
        alloc_pointer[1] = 0x2e726f737365636f;  // "ocessor."
        alloc_pointer[2] = 0x6c726f77656c6174;  // "taleworl"
        alloc_pointer[3] = 0x445c6d6f632e7364;  // "ds.Code\\D"
        *(undefined4 *)(alloc_pointer + 4) = 0x50706d75;  // "umpP"
        *(undefined4 *)((longlong)alloc_pointer + 0x24) = 0x65636f72;  // "roce"
        *(undefined4 *)(alloc_pointer + 5) = 0x6e697373;  // "ssin"
        *(undefined4 *)((longlong)alloc_pointer + 0x2c) = 0x6c6f4667;  // "gFol"
        *(undefined4 *)(alloc_pointer + 6) = 0x726564;  // "der"
        local_stack_80 = 0x33;
        buffer_pointer_ptr = &local_stack_90;
      }
      else {
        local_flag = *(undefined1 *)(global_system_object + 0x141);
        buffer_pointer_ptr = (undefined **)build_error_description(&local_stack_50, global_system_object + 0x148);
        alloc_pointer = local_stack_88;
      }
      
      format_result = build_error_description(&local_stack_70, buffer_pointer_ptr);
      if (is_debug_mode) {
        local_stack_90 = &debug_output_channel_2;
        if (alloc_pointer != (undefined8 *)0x0) {
          // 触发内存错误
          trigger_memory_error(alloc_pointer);
        }
        local_stack_88 = (undefined8 *)0x0;
        local_stack_78 = local_stack_78 & 0xffffffff00000000;
        local_stack_90 = &debug_output_channel_1;
      }
      
      if (!is_debug_mode) {
        local_stack_50 = &debug_output_channel_2;
        if (local_stack_48 != 0) {
          // 触发内存错误
          trigger_memory_error();
        }
        local_stack_48 = 0;
        local_stack_38 = 0;
        local_stack_50 = &debug_output_channel_1;
      }
      
      buffer_data = &default_error_buffer;
      if (error_buffer != (undefined *)0x0) {
        buffer_data = error_buffer;
      }
      
      generate_error_report(format_result, &local_stack_70, local_flag, 0, buffer_data);
      
      local_stack_70 = &debug_output_channel_2;
      if (local_stack_68 != 0) {
        // 触发内存错误
        trigger_memory_error();
      }
      local_stack_68 = 0;
      local_stack_58 = 0;
      local_stack_70 = &debug_output_channel_1;
    }
    
    // 清理进程状态
    cleanup_process_state(error_message, 0);
    
    // 检查退出模式
    if (global_system_object == 0) {
      check_result = '\x01';
    }
    else {
      check_result = *(char *)(global_system_object + 0x29);
    }
    
    // 强制退出处理
    if (*(char *)(global_system_object + 0x25) != '\0') {
      perform_emergency_exit(global_system_object, 5);
      pcVar1 = (code *)swi(3);
      error_flag = (*pcVar1)();
      return error_flag;
    }
    
    // 设置退出代码
    if (check_result != '\0') {
      global_exit_code = 5;
    }
    
    // 执行清理操作
    if ((error_dialog_suppressed == '\0') && (should_handle_error)) {
      if (*(longlong *)(global_system_object + 8) != 0) {
        perform_system_cleanup();
      }
      
      if (global_error_handler != 0) {
        cleanup_error_handler(global_error_handler, 
                             *(undefined1 *)(global_error_handler + 0x160a));
      }
    }
    
    // 清理线程上下文
    if (thread_context != 0) {
      finalize_thread_context(thread_context);
    }
    
    // 释放信号量
    do {
      debugger_present = ReleaseSemaphore(global_semaphore_handle, 1);
    } while (debugger_present == 0);
    
    // 清理栈内存
    local_stack_b0 = &debug_output_channel_2;
    if (local_stack_a8 != (undefined *)0x0) {
      // 触发内存错误
      trigger_memory_error();
    }
    
    local_stack_a8 = (undefined *)0x0;
    local_stack_98 = local_stack_98 & 0xffffffff00000000;
    local_stack_b0 = &debug_output_channel_1;
    
    if (error_buffer != (undefined *)0x0) {
      // 触发内存错误
      trigger_memory_error(error_buffer);
    }
    
    error_flag = (ulonglong)report_generated;
  }
  else {
    // 处理已加载模块的情况
    if (*(int *)(global_module_state + 0x460) == 1) {
      display_silent_error(&module_error_format, error_message);
    }
    
    local_stack_b0 = &debug_output_channel_2;
    if (local_stack_a8 != (undefined *)0x0) {
      // 触发内存错误
      trigger_memory_error();
    }
    
    local_stack_a8 = (undefined *)0x0;
    local_stack_98 = local_stack_98 & 0xffffffff00000000;
    local_stack_b0 = &debug_output_channel_1;
    
    if (error_buffer != (undefined *)0x0) {
      // 触发内存错误
      trigger_memory_error(error_buffer);
    }
  }
  
  return error_flag;
}



/**
 * 执行紧急退出程序
 * 在发生不可恢复的错误时调用，清理资源并终止程序
 * 
 * @param param1 参数1（用途未知）
 * @param error_message 错误消息字符串
 */
void perform_emergency_exit(undefined8 param1, undefined8 error_message)
{
  bool is_main_thread;
  char check_result;
  int debugger_present;
  int thread_id;
  longlong thread_context;
  undefined *error_buffer;
  undefined8 error_info;
  undefined *buffer_data;
  bool is_debug_mode;
  undefined *local_stack_70;
  undefined *local_stack_68;
  undefined4 local_stack_60;
  undefined8 local_stack_58;
  undefined *local_stack_50;
  longlong local_stack_48;
  undefined4 local_stack_38;
  
  // 等待信号量
  thread_id = WaitForSingleObject(global_semaphore_handle, 0);
  if (thread_id != 0) {
    return;
  }
  
  is_main_thread = true;
  check_result = (**(code **)**(undefined8 **)(global_debug_system + 0x18))();
  if ((check_result == '\0') && (thread_id = IsDebuggerPresent(), thread_id != 0)) {
    is_debug_mode = true;
  }
  else {
    is_debug_mode = false;
  }
  
  // 验证线程身份
  if (global_thread_context != 0) {
    thread_id = *(int *)(**(longlong **)(global_thread_context + 8) + 0x48);
    debugger_present = _Thrd_id();
    is_main_thread = debugger_present == thread_id;
  }
  
  error_buffer = (undefined *)0x0;
  if (!is_debug_mode) {
    thread_context = initialize_error_buffer(&local_stack_50, 0);
    error_buffer = *(undefined **)(thread_context + 8);
    
    // 清理缓冲区
    *(undefined4 *)(thread_context + 0x10) = 0;
    *(undefined8 *)(thread_context + 8) = 0;
    *(undefined8 *)(thread_context + 0x18) = 0;
    
    local_stack_50 = &debug_output_channel_2;
    if (local_stack_48 != 0) {
      // 触发内存错误
      trigger_memory_error();
    }
    
    local_stack_48 = 0;
    local_stack_38 = 0;
    local_stack_50 = &debug_output_channel_1;
  }
  
  // 初始化错误处理栈
  local_stack_70 = &debug_output_channel_2;
  local_stack_58 = 0;
  local_stack_68 = (undefined *)0x0;
  local_stack_60 = 0;
  
  // 格式化紧急退出消息
  format_error_message(&local_stack_70, &emergency_exit_format_string, error_message);
  log_error_message(global_log_system, 5, 0xffffffff00000000, &error_header_string);
  
  // 选择错误输出源
  buffer_data = &default_error_buffer;
  if (local_stack_68 != (undefined *)0x0) {
    buffer_data = local_stack_68;
  }
  
  log_error_message(global_log_system, 5, 0xffffffff00000000, &error_detail_string, buffer_data);
  
  buffer_data = &default_error_buffer;
  if (error_buffer != (undefined *)0x0) {
    buffer_data = error_buffer;
  }
  
  log_error_level(global_log_system, 5, 0xffffffff00000000, 3, buffer_data);
  flush_error_logs();
  
  // 输出调试信息
  error_buffer = &default_error_buffer;
  if (local_stack_68 != (undefined *)0x0) {
    error_buffer = local_stack_68;
  }
  OutputDebugStringA(error_buffer);
  
  // 执行错误恢复
  thread_context = global_error_handler;
  if (((is_main_thread) && (global_error_handler != 0)) && 
      (*(char *)(global_error_handler + 0x1609) != '\x01')) {
    execute_error_recovery(*(undefined8 *)(global_system_object + 8),
                          *(char *)(global_config_data + 0x2028) != '\0',
                          *(undefined4 *)(global_error_handler + 0x160c));
    *(undefined1 *)(thread_context + 0x1609) = 1;
  }
  
  // 根据配置显示错误信息
  if (error_dialog_suppressed == '\0') {
    perform_system_error_check();
  }
  else {
    error_info = build_error_info(&local_stack_70);
    display_error_message(error_info);
  }
  
  // 释放信号量并退出
  release_semaphore(&global_semaphore_handle, 1);
  _Exit(5);
  return;
}



// 重命名的全局变量和常量
#define global_thread_context _DAT_180c82868
#define global_debug_system _DAT_180c8ed08
#define global_semaphore_handle _DAT_180c91900
#define global_log_system _DAT_180c86928
#define global_system_object _DAT_180c86870
#define global_config_data _DAT_180c868d0
#define global_error_handler _DAT_180c86950
#define global_error_report_system _DAT_180c8ed18
#define global_module_state _DAT_180c86908
#define global_exit_code _DAT_180c82854

#define debug_mode_enabled DAT_180c8aa69
#define error_dialog_suppressed DAT_180c82842
#define error_silent_mode DAT_180c82860
#define detailed_logging_enabled DAT_180bf0100
#define report_generation_enabled DAT_180c82851

#define debug_output_channel_1 UNK_18098bcb0
#define debug_output_channel_2 UNK_180a3c3e0
#define default_error_buffer DAT_18098bc73

#define error_format_string UNK_1809ff538
#define error_header_string UNK_1809ff550
#define error_detail_string UNK_1809ff5b0
#define critical_error_title UNK_1809ff5b8
#define app_error_format_string UNK_1809ff5c0
#define module_error_format_string UNK_1809ff5f8
#define module_error_title UNK_1809ff630
#define silent_error_format UNK_1809ff610
#define emergency_exit_format_string UNK_1809ff538
#define error_dialog_format UNK_180a04f08

// 重命名的函数调用
#define trigger_critical_error FUN_18064e900
#define trigger_memory_error FUN_18064e900
#define check_process_state FUN_1800f9600
#define cleanup_thread_context FUN_18005dab0
#define initialize_error_buffer FUN_1800f9ce0
#define initialize_output_channels FUN_1806277c0
#define configure_existing_output FUN_1802265d0
#define format_error_message FUN_180628040
#define log_error_message FUN_180062380
#define log_error_level FUN_1800623b0
#define flush_error_logs FUN_1800623e0
#define process_error_message FUN_18004c2b0
#define execute_error_recovery FUN_1801723a0
#define cleanup_system_resources FUN_1801719d0
#define perform_system_cleanup FUN_1801718f0
#define cleanup_error_handler FUN_180092940
#define finalize_thread_context FUN_18005db30
#define display_error_message FUN_1806272a0
#define check_debug_break_required FUN_1800f98e0
#define trigger_debug_break FUN_180066320
#define cleanup_process_state FUN_1800f96b0
#define perform_final_cleanup FUN_180055f70
#define allocate_error_report_buffer FUN_18062b420
#define format_error_title FUN_18064e990
#define free_error_report_buffer FUN_18064e900
#define build_error_description FUN_180627ae0
#define generate_error_report FUN_180066320
#define perform_emergency_exit FUN_180055f70
#define perform_system_error_check FUN_1800f93e0
#define build_error_info func_0x0001800464d0
#define release_semaphore FUN_180046130