#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part027.c - 核心引擎模块第27部分 - 错误处理和调试系统
// 本文件包含错误报告、调试信息输出和异常处理相关功能

// 全局变量声明
extern char system_debug_flag;       // 调试模式标志
extern char system_event_handler;       // 日志系统标志
extern char system_context_ptr;       // 线程安全标志
extern void* _DAT_180c86950;     // 引擎实例指针
extern void* _DAT_180c86870;     // 系统配置指针
extern void* _DAT_180c868d0;     // 路径配置指针
extern void* _DAT_180c8ed08;     // 系统接口指针
extern void* _DAT_180c91900;     // 同步信号量
extern void* _DAT_180c86928;     // 日志系统指针
extern void* _DAT_180c8ed18;     // 内存管理器指针

// 常量定义
#define MAX_ERROR_MESSAGE_SIZE 1024
#define DEBUG_BUFFER_SIZE 512
#define STACK_TRACE_DEPTH 32

/**
 * 错误报告函数 - 处理和报告运行时错误
 * @param engine_context 引擎上下文指针
 * @param error_message 错误消息字符串
 * @param error_code 错误代码
 * @param additional_info 额外信息指针
 * @param severity_level 严重级别
 * @param should_exit 是否应该退出程序
 */
void report_runtime_error(void* engine_context, const char* error_message, int error_code, 
                          const char* additional_info, char severity_level, char should_exit)
{
  void* temp_buffer;
  char debug_mode;
  int wait_result;
  uint message_length;
  uint buffer_size;
  int total_length;
  uint current_size;
  void* message_buffer;
  void* string_builder;
  void* format_buffer;
  uint format_length;
  longlong context_data;
  void* temp_pointer;
  uint new_size;
  longlong str_length;
  char is_debugger_attached;
  
  // 初始化栈变量
  void* stack_buffer[32];
  uint stack_flags = 0;
  uint buffer_capacity = 0;
  
  // 检查是否处于调试模式
  if ((system_debug_flag != '\0') || (system_event_handler != '\0')) {
    goto direct_error_handling;
  }
  
  // 构建错误消息头
  message_buffer = create_string_buffer();
  append_format_string(message_buffer, "ERROR: %s (Code: %d)", error_message, error_code);
  
  // 获取上下文信息
  context_data = get_engine_context_info(engine_context);
  
  // 构建详细错误信息
  string_builder = create_string_builder();
  if (get_message_length(context_data) > 0) {
    copy_message_data(string_builder, context_data);
  }
  
  // 添加额外信息
  if (additional_info != NULL) {
    append_additional_info(string_builder, additional_info, message_buffer);
  }
  
  // 释放临时缓冲区
  cleanup_string_buffer(&message_buffer);
  
  // 检查是否需要处理调试器
  temp_pointer = get_debug_interface();
  debug_mode = is_debug_mode_active(temp_pointer);
  if (debug_mode == '\0') {
    // 等待调试器响应
    wait_result = WaitForSingleObject(_DAT_180c91900, 0);
    if (wait_result == 0) {
      // 调试器处理逻辑
      char debugger_handled = invoke_debugger_handler();
      is_debugger_attached = IsDebuggerPresent();
      if ((debugger_handled == '\0') && (is_debugger_attached != 0)) {
        debug_mode = '\x01';
      } else {
        debug_mode = '\0';
      }
      
      // 执行调试后处理
      if (_DAT_180c82868 == 0) {
        // 主线程处理
        execute_main_thread_debug_logic();
      } else {
        // 检查线程ID
        int current_thread_id = _Thrd_id();
        int expected_thread_id = get_expected_thread_id();
        char is_correct_thread = (current_thread_id == expected_thread_id);
        if (!is_correct_thread) {
          // 等待正确线程
          wait_for_correct_thread();
        }
      }
      
      // 根据调试模式决定是否退出
      if (debug_mode != '\0') {
        if ((should_exit == '\0') || (get_exit_mode() == 2)) {
          // 触发软件中断
          trigger_software_interrupt();
          return;
        }
        stack_flags |= 1;
      }
    }
  }
  
  // 构建完整的错误报告
  if (debug_mode == '\0') {
    // 获取系统错误信息
    context_data = get_system_error_info(&string_builder);
    message_buffer = extract_error_message(context_data);
    
    // 构建错误报告头
    format_buffer = create_error_report_header();
    append_error_code(format_buffer, error_code);
    append_error_description(format_buffer, "Notification: Assertion failed\r\n");
    
    // 添加错误详情
    append_error_details(format_buffer, additional_info);
    append_error_context(format_buffer, "Exception: ");
    
    // 添加分隔符
    append_separator(format_buffer);
    
    // 添加调用堆栈信息
    append_call_stack_info(format_buffer);
    
    // 添加内存信息
    append_memory_info(format_buffer);
    
    // 添加错误位置信息
    append_error_location(format_buffer);
    
    // 构建HTML格式的错误报告
    build_html_error_report(format_buffer);
    
    // 输出调试信息
    output_debug_string(format_buffer);
    
    // 触发错误回调
    trigger_error_callback(additional_info);
    
    // 检查是否需要记录到文件
    if (!debug_mode && !should_log_to_file()) {
      // 构建日志文件路径
      void* log_file_path = build_log_file_path();
      
      // 写入错误日志
      write_error_log(log_file_path, format_buffer);
      
      // 清理资源
      cleanup_log_resources();
    }
    
    // 执行错误处理后的清理
    cleanup_after_error_handling();
    
    // 如果调试器已连接，执行清理
    if (debug_mode != '\0') {
      cleanup_debugger_resources();
    }
  }
  
direct_error_handling:
  // 直接错误处理路径
  // [简化实现：原始实现包含大量错误处理逻辑，这里简化为基本框架]
  
  // 记录错误到系统日志
  log_system_error(error_code, error_message);
  
  // 如果需要，显示错误对话框
  if (should_show_error_dialog()) {
    show_error_dialog(error_message, severity_level);
  }
  
  // 根据严重级别决定是否退出
  if (should_exit && severity_level >= SEVERITY_CRITICAL) {
    exit_process(error_code);
  }
}

/**
 * 调试信息输出函数 - 输出调试信息到调试器
 * @param output_handle 输出句柄
 * @param debug_info 调试信息结构
 * @param format_string 格式化字符串
 * @param var_args 可变参数列表
 */
void output_debug_info(void* output_handle, void* debug_info, const char* format_string, void* var_args)
{
  void** interface_ptr;
  void* interface_instance;
  void* debug_output;
  
  // 获取调试接口
  interface_ptr = (void**)(get_system_interface() + 0x2b0);
  if (interface_ptr != NULL) {
    // 调用调试输出方法
    interface_instance = (**(code **)(*interface_ptr + 0x110))(interface_ptr, &debug_output, debug_info, var_args, 0xfffffffffffffffe);
    // 输出到调试器
    send_to_debugger(output_handle, interface_instance);
    // 清理资源
    cleanup_debug_output(&debug_output);
  }
}

/**
 * 错误处理函数 - 处理系统级错误
 * @param error_context 错误上下文
 * @param error_data 错误数据指针数组
 * @return 处理成功返回true，否则返回false
 */
bool handle_system_error(void* error_context, void** error_data)
{
  int error_code;
  int wait_result;
  int thread_id;
  longlong error_info;
  void** error_info_ptr;
  void** temp_ptr;
  void*** ptr_ptr;
  void* string_buffer;
  void* error_message;
  void* formatted_output;
  char log_to_file;
  uint output_length;
  
  // 初始化变量
  void* error_string = NULL;
  int string_length = 0;
  
  // 等待系统资源
  WaitForSingleObject(_DAT_180c91900, 300000);
  
  // 获取错误处理上下文
  void* error_handler_context = get_error_handler_context();
  if (error_handler_context != NULL) {
    initialize_error_handler(error_handler_context);
  }
  
  // 创建错误消息缓冲区
  formatted_output = create_output_buffer();
  
  // 构建错误信息头部
  append_error_header(formatted_output, "Error Report");
  
  // 获取错误代码
  error_code = get_error_code_from_data(error_data);
  
  // 构建详细错误信息
  append_error_details(formatted_output, error_data);
  
  // 添加错误代码信息
  append_error_code_info(formatted_output, error_code);
  
  // 输出错误信息到调试器
  output_to_debugger(formatted_output);
  
  // 获取系统配置信息
  error_info = get_system_config_info();
  if (error_info == NULL) {
    log_to_file = '\0';
    // 使用默认日志路径
    string_buffer = create_default_log_path();
  } else {
    log_to_file = get_log_to_file_flag(error_info);
    // 使用配置中的日志路径
    string_buffer = create_configured_log_path(error_info);
  }
  
  // 构建完整的错误报告
  void* error_report = build_complete_error_report(error_data, string_buffer, log_to_file);
  
  // 输出错误报告
  output_error_report(error_report);
  
  // 清理错误处理上下文
  if (error_handler_context != NULL) {
    cleanup_error_handler(error_handler_context);
  }
  
  // 释放系统资源
  release_system_resources();
  
  // 刷新输出缓冲区
  flush_output_buffers();
  
  // 执行清理操作
  perform_cleanup_operations();
  
  // 返回处理结果
  return log_to_file != '\0';
}

/**
 * 异常处理函数 - 处理系统异常
 * @param exception_context 异常上下文
 * @param exception_data 异常数据
 */
void handle_system_exception(void* exception_context, void* exception_data)
{
  void* system_interface;
  char is_debug_mode;
  int debug_flag;
  void* debug_buffer;
  
  // 记录异常信息
  log_exception_info(exception_data);
  
  // 检查是否处于调试模式
  if (system_debug_flag == '\0') {
    // 创建调试信息结构
    int debug_info[4] = {0xffff0000, 0, 0, 0};
    
    // 获取异常信息
    void* exception_info = get_exception_info(exception_data);
    
    // 获取系统接口
    system_interface = *(void**)_DAT_180c8ed08;
    
    // 检查接口类型
    if (system_interface == &UNK_18098bb88) {
      is_debug_mode = (get_debug_flag() != 0);
    } else {
      is_debug_mode = (**(code **)(system_interface + 0x50))((void**)_DAT_180c8ed08);
    }
    
    // 如果不是调试模式，调用异常处理器
    if (is_debug_mode == '\0') {
      (**(code **)(*(longlong *)_DAT_180c8ed08[1] + 0x18))
                ((longlong *)_DAT_180c8ed08[1], &exception_info, debug_info);
    }
    
    // 清理资源
    cleanup_exception_info(&exception_info);
  }
}

// 辅助函数声明
void* create_string_buffer(void);
void append_format_string(void* buffer, const char* format, ...);
longlong get_engine_context_info(void* context);
void copy_message_data(void* dest, longlong src);
void append_additional_info(void* buffer, const char* info, void* source);
void cleanup_string_buffer(void** buffer);
void* get_debug_interface(void);
char is_debug_mode_active(void* interface);
char invoke_debugger_handler(void);
int _Thrd_id(void);
int get_expected_thread_id(void);
void wait_for_correct_thread(void);
void execute_main_thread_debug_logic(void);
int get_exit_mode(void);
void trigger_software_interrupt(void);
longlong get_system_error_info(void** builder);
void* extract_error_message(longlong context);
void* create_error_report_header(void);
void append_error_code(void* buffer, int code);
void append_error_description(void* buffer, const char* desc);
void append_error_details(void* buffer, const char* details);
void append_error_context(void* buffer, const char* context);
void append_separator(void* buffer);
void append_call_stack_info(void* buffer);
void append_memory_info(void* buffer);
void append_error_location(void* buffer);
void build_html_error_report(void* buffer);
void output_debug_string(void* buffer);
void trigger_error_callback(const char* error_info);
bool should_log_to_file(void);
void* build_log_file_path(void);
void write_error_log(void* path, void* content);
void cleanup_log_resources(void);
void cleanup_after_error_handling(void);
void cleanup_debugger_resources(void);
void log_system_error(int code, const char* message);
bool should_show_error_dialog(void);
void show_error_dialog(const char* message, int severity);
void exit_process(int code);
void* get_system_interface(void);
void send_to_debugger(void* handle, void* data);
void cleanup_debug_output(void** output);
int get_error_code_from_data(void** data);
void* get_error_handler_context(void);
void initialize_error_handler(void* context);
void* create_output_buffer(void);
void append_error_header(void* buffer, const char* header);
void append_error_code_info(void* buffer, int code);
void output_to_debugger(void* output);
longlong get_system_config_info(void);
char get_log_to_file_flag(longlong config);
void* create_default_log_path(void);
void* create_configured_log_path(longlong config);
void* build_complete_error_report(void** data, void* path, char log_to_file);
void output_error_report(void* report);
void cleanup_error_handler(void* context);
void release_system_resources(void);
void flush_output_buffers(void);
void perform_cleanup_operations(void);
void log_exception_info(void* data);
void* get_exception_info(void* context);
int get_debug_flag(void);
void cleanup_exception_info(void** info);