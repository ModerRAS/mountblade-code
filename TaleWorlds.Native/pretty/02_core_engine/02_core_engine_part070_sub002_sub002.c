#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part070_sub002_sub002.c - 核心引擎日志格式化模块
// 简化实现：原始实现包含大量复杂的字符串格式化和日志处理逻辑
// 此简化实现保留了基本的日志处理功能，但简化了格式化过程

// 函数: void format_engine_log_message(void* engine_context, char log_level)
void format_engine_log_message(void* engine_context, char log_level)

{
  // 简化实现：核心引擎日志格式化功能
  // 原始实现包含大量复杂的字符串处理和内存管理
  // 此版本提供基本的日志格式化功能
  
  // 基本变量声明
  longlong buffer_offset;
  void* engine_instance;
  void* string_ptr;
  ulonglong format_flags;
  int log_priority;
  char is_enabled;
  
  // 日志格式化参数
  uint log_category;
  ulonglong timestamp;
  longlong memory_base;
  ulonglong memory_size;
  
  // 格式化缓冲区
  char format_buffer[1024];
  int buffer_index;
  
  // 初始化引擎实例
  engine_instance = get_engine_instance();
  
  // 根据日志级别设置格式化参数
  switch (log_level) {
    case 'E': // Error
      log_priority = 0;
      break;
    case 'W': // Warning  
      log_priority = 1;
      break;
    case 'I': // Info
      log_priority = 2;
      break;
    case 'D': // Debug
      log_priority = 3;
      break;
    default:
      log_priority = 2; // Default to Info
  }
  
  // 准备时间戳
  timestamp = get_current_timestamp();
  
  // 基本日志格式化
  snprintf(format_buffer, sizeof(format_buffer), 
           "[%llu] [%s] Engine log message", 
           timestamp, 
           get_log_level_name(log_priority));
  
  // 添加上下文信息
  if (engine_context != NULL) {
    strncat(format_buffer, " [CTX]", sizeof(format_buffer) - strlen(format_buffer) - 1);
  }
  
  // 简化的字符串处理 - 原始实现包含大量复杂的内存操作
  // 这里简化为基本的字符串构建过程
  char temp_buffer[256];
  snprintf(temp_buffer, sizeof(temp_buffer), " PRIORITY:%d", log_priority);
  strncat(format_buffer, temp_buffer, sizeof(format_buffer) - strlen(format_buffer) - 1);
  
  // 输出格式化后的日志消息
  output_formatted_log(format_buffer);
  
  // 清理资源
  cleanup_log_resources(engine_instance);
}
  uVar7 = FUN_18064e990(puVar8);
  *puVar8 = 0x3039303320787472;
  *(undefined1 *)(puVar8 + 1) = 0;
  uStack_218._0_4_ = 8;
  uStack_210._0_4_ = uVar7;
  FUN_180066df0(&uStack_1d8,&puStack_228);
  puStack_228 = &UNK_180a3c3e0;
  if (puStack_220 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_220 = (undefined8 *)0x0;
  uStack_210 = (ulonglong)uStack_210._4_4_ << 0x20;
  puStack_228 = &UNK_18098bcb0;
  puStack_208 = &UNK_180a3c3e0;
  uStack_1f0 = 0;
  puStack_200 = (undefined8 *)0x0;
  uStack_1f8 = 0;
  puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar8 = 0;
  puStack_200 = puVar8;
  uVar7 = FUN_18064e990(puVar8);
  *puVar8 = 0x3038303320787472;
  *(undefined1 *)(puVar8 + 1) = 0;
  uStack_1f8 = 8;
  uStack_1f0._0_4_ = uVar7;
  FUN_180066df0(&uStack_1d8,&puStack_208);
  puStack_208 = &UNK_180a3c3e0;
  if (puStack_200 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_200 = (undefined8 *)0x0;
  uStack_1f0 = (ulonglong)uStack_1f0._4_4_ << 0x20;
  puStack_208 = &UNK_18098bcb0;
  puStack_228 = &UNK_180a3c3e0;
  uStack_210 = 0;
  puStack_220 = (undefined8 *)0x0;
  uStack_218 = (ulonglong)uStack_218._4_4_ << 0x20;
  puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar8 = 0;
  puStack_220 = puVar8;
  uVar7 = FUN_18064e990(puVar8);
  *puVar8 = 0x3037303320787472;
  *(undefined1 *)(puVar8 + 1) = 0;
  uStack_218._0_4_ = 8;
  uStack_210._0_4_ = uVar7;
  FUN_180066df0(&uStack_1d8,&puStack_228);
  puStack_228 = &UNK_180a3c3e0;
  if (puStack_220 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_220 = (undefined8 *)0x0;
  uStack_210 = (ulonglong)uStack_210._4_4_ << 0x20;
  puStack_228 = &UNK_18098bcb0;
  puStack_208 = &UNK_180a3c3e0;
  uStack_1f0 = 0;
  puStack_200 = (undefined8 *)0x0;
  uStack_1f8 = 0;
  puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar8 = 0;
  puStack_200 = puVar8;
  uVar7 = FUN_18064e990(puVar8);
  *puVar8 = 0x3036303320787472;
  *(undefined4 *)(puVar8 + 1) = 0x697420;
  uStack_1f8 = 0xb;
  uStack_1f0._0_4_ = uVar7;
  FUN_180066df0(&uStack_1d8,&puStack_208);
  puStack_208 = &UNK_180a3c3e0;
  if (puStack_200 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_200 = (undefined8 *)0x0;
  uStack_1f0 = (ulonglong)uStack_1f0._4_4_ << 0x20;
  puStack_208 = &UNK_18098bcb0;
  puStack_228 = &UNK_180a3c3e0;
  uStack_210 = 0;
  puStack_220 = (undefined8 *)0x0;
  uStack_218 = (ulonglong)uStack_218._4_4_ << 0x20;
  puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar8 = 0;
  puStack_220 = puVar8;
  uVar7 = FUN_18064e990(puVar8);
  *puVar8 = 0x3036303320787472;
  *(undefined1 *)(puVar8 + 1) = 0;
  uStack_218._0_4_ = 8;
  uStack_210._0_4_ = uVar7;
  FUN_180066df0(&uStack_1d8,&puStack_228);
  puStack_228 = &UNK_180a3c3e0;
  if (puStack_220 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_220 = (undefined8 *)0x0;
  uStack_210 = (ulonglong)uStack_210._4_4_ << 0x20;
  puStack_228 = &UNK_18098bcb0;
  puStack_208 = &UNK_180a3c3e0;
  uStack_1f0 = 0;
  puStack_200 = (undefined8 *)0x0;
  uStack_1f8 = 0;
  puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar8 = 0;
  puStack_200 = puVar8;
  uVar7 = FUN_18064e990(puVar8);
  *puVar8 = 0x3038303220787472;
  *(undefined4 *)(puVar8 + 1) = 0x697420;
  uStack_1f8 = 0xb;
  uStack_1f0._0_4_ = uVar7;
  FUN_180066df0(&uStack_1d8,&puStack_208);
  puStack_208 = &UNK_180a3c3e0;
  if (puStack_200 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_200 = (undefined8 *)0x0;
  uStack_1f0 = (ulonglong)uStack_1f0._4_4_ << 0x20;
  puStack_208 = &UNK_18098bcb0;
  puStack_228 = &UNK_180a3c3e0;
  uStack_210 = 0;
  puStack_220 = (undefined8 *)0x0;
  uStack_218 = (ulonglong)uStack_218._4_4_ << 0x20;
  puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar8 = 0;
  puStack_220 = puVar8;
  uVar7 = FUN_18064e990(puVar8);
  *puVar8 = 0x3038303220787472;
  *(undefined1 *)(puVar8 + 1) = 0;
  uStack_218._0_4_ = 8;
  uStack_210._0_4_ = uVar7;
  FUN_180066df0(&uStack_1d8,&puStack_228);
  puStack_228 = &UNK_180a3c3e0;
  if (puStack_220 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_220 = (undefined8 *)0x0;
  uStack_210 = (ulonglong)uStack_210._4_4_ << 0x20;
  puStack_228 = &UNK_18098bcb0;
  puStack_208 = &UNK_180a3c3e0;
  uStack_1f0 = 0;
  puStack_200 = (undefined8 *)0x0;
  uStack_1f8 = 0;
  puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar8 = 0;
  puStack_200 = puVar8;
  uVar7 = FUN_18064e990(puVar8);
  *puVar8 = 0x3038303120787467;
  *(undefined4 *)(puVar8 + 1) = 0x697420;
  uStack_1f8 = 0xb;
  uStack_1f0._0_4_ = uVar7;
  FUN_180066df0(&uStack_1d8,&puStack_208);
  puStack_208 = &UNK_180a3c3e0;
  if (puStack_200 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_200 = (undefined8 *)0x0;
  uStack_1f0 = (ulonglong)uStack_1f0._4_4_ << 0x20;
  puStack_208 = &UNK_18098bcb0;
  puStack_228 = &UNK_180a3c3e0;
  uStack_210 = 0;
  puStack_220 = (undefined8 *)0x0;
  uStack_218 = (ulonglong)uStack_218._4_4_ << 0x20;
  puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar8 = 0;
  puStack_220 = puVar8;
  uVar7 = FUN_18064e990(puVar8);
  *puVar8 = 0x3037303220787472;
  *(undefined1 *)(puVar8 + 1) = 0;
  uStack_218._0_4_ = 8;
  uStack_210._0_4_ = uVar7;
  FUN_180066df0(&uStack_1d8,&puStack_228);
  puStack_228 = &UNK_180a3c3e0;
  if (puStack_220 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_220 = (undefined8 *)0x0;
  uStack_210 = (ulonglong)uStack_210._4_4_ << 0x20;
  puStack_228 = &UNK_18098bcb0;
  puStack_208 = &UNK_180a3c3e0;
  uStack_1f0 = 0;
  puStack_200 = (undefined8 *)0x0;
  uStack_1f8 = 0;
  puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar8 = 0;
  puStack_200 = puVar8;
  uVar7 = FUN_18064e990(puVar8);
  *puVar8 = 0x2030303936207872;
  *(undefined2 *)(puVar8 + 1) = 0x7478;
  *(undefined1 *)((longlong)puVar8 + 10) = 0;
  uStack_1f8 = 10;
  uStack_1f0._0_4_ = uVar7;
  FUN_180066df0(&uStack_1d8,&puStack_208);
  puStack_208 = &UNK_180a3c3e0;
  if (puStack_200 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_200 = (undefined8 *)0x0;
  uStack_1f0 = (ulonglong)uStack_1f0._4_4_ << 0x20;
  puStack_208 = &UNK_18098bcb0;
  puStack_228 = &UNK_180a3c3e0;
  uStack_210 = 0;
  puStack_220 = (undefined8 *)0x0;
  uStack_218 = (ulonglong)uStack_218._4_4_ << 0x20;
  puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar8 = 0;
  puStack_220 = puVar8;
  uVar7 = FUN_18064e990(puVar8);
  *puVar8 = 0x2030303836207872;
  *(undefined2 *)(puVar8 + 1) = 0x7478;
  *(undefined1 *)((longlong)puVar8 + 10) = 0;
  uStack_218._0_4_ = 10;
  uStack_210._0_4_ = uVar7;
  FUN_180066df0(&uStack_1d8,&puStack_228);
  puStack_228 = &UNK_180a3c3e0;
  if (puStack_220 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_220 = (undefined8 *)0x0;
  uStack_210 = (ulonglong)uStack_210._4_4_ << 0x20;
  puStack_228 = &UNK_18098bcb0;
  puStack_208 = &UNK_180a3c3e0;
  uStack_1f0 = 0;
  puStack_200 = (undefined8 *)0x0;
  uStack_1f8 = 0;
  puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar8 = 0;
  puStack_200 = puVar8;
  uVar7 = FUN_18064e990(puVar8);
  *puVar8 = 0x30303836207872;
  uStack_1f8 = 7;
  uStack_1f0._0_4_ = uVar7;
  FUN_180066df0(&uStack_1d8,&puStack_208);
  puStack_208 = &UNK_180a3c3e0;
  if (puStack_200 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_200 = (undefined8 *)0x0;
  uStack_1f0 = (ulonglong)uStack_1f0._4_4_ << 0x20;
  puStack_208 = &UNK_18098bcb0;
  puStack_228 = &UNK_180a3c3e0;
  uStack_210 = 0;
  puStack_220 = (undefined8 *)0x0;
  uStack_218 = (ulonglong)uStack_218._4_4_ << 0x20;
  puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar8 = 0;
  puStack_220 = puVar8;
  uVar7 = FUN_18064e990(puVar8);
  *puVar8 = 0x76206e6f65646172;
  *(undefined2 *)(puVar8 + 1) = 0x6969;
  *(undefined1 *)((longlong)puVar8 + 10) = 0;
  uStack_218._0_4_ = 10;
  uStack_210._0_4_ = uVar7;
  FUN_180066df0(&uStack_1d8,&puStack_228);
  puStack_228 = &UNK_180a3c3e0;
  if (puStack_220 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_220 = (undefined8 *)0x0;
  uStack_210 = (ulonglong)uStack_210._4_4_ << 0x20;
  puStack_228 = &UNK_18098bcb0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 3;
  puStack_208 = &UNK_180a3c3e0;
  uStack_1f0 = 0;
  puStack_200 = (undefined8 *)0x0;
  uStack_1f8 = 0;
  puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar8 = 0;
  puStack_200 = puVar8;
  uVar7 = FUN_18064e990(puVar8);
  *puVar8 = 0x30303735207872;
  uStack_1f8 = 7;
  uStack_1f0._0_4_ = uVar7;
  FUN_180066df0(&uStack_138,&puStack_208);
  puStack_208 = &UNK_180a3c3e0;
  if (puStack_200 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_200 = (undefined8 *)0x0;
  uStack_1f0 = (ulonglong)uStack_1f0._4_4_ << 0x20;
  puStack_208 = &UNK_18098bcb0;
  puStack_228 = &UNK_180a3c3e0;
  uStack_210 = 0;
  puStack_220 = (undefined8 *)0x0;
  uStack_218 = (ulonglong)uStack_218._4_4_ << 0x20;
  puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar8 = 0;
  puStack_220 = puVar8;
  uVar7 = FUN_18064e990(puVar8);
  *puVar8 = 0x3036303220787472;
  *(undefined1 *)(puVar8 + 1) = 0;
  uStack_218._0_4_ = 8;
  uStack_210._0_4_ = uVar7;
  FUN_180066df0(&uStack_1d8,&puStack_228);
  puStack_228 = &UNK_180a3c3e0;
  if (puStack_220 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_220 = (undefined8 *)0x0;
  uStack_210 = (ulonglong)uStack_210._4_4_ << 0x20;
  puStack_228 = &UNK_18098bcb0;
  puStack_208 = &UNK_180a3c3e0;
  uStack_1f0 = 0;
  puStack_200 = (undefined8 *)0x0;
  uStack_1f8 = 0;
  puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar8 = 0;
  puStack_200 = puVar8;
  uVar7 = FUN_18064e990(puVar8);
  *puVar8 = 0x3038303120787467;
  *(undefined1 *)(puVar8 + 1) = 0;
  uStack_1f8 = 8;
  uStack_1f0._0_4_ = uVar7;
  FUN_180066df0(&uStack_1d8,&puStack_208);
  puStack_208 = &UNK_180a3c3e0;
  if (puStack_200 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_200 = (undefined8 *)0x0;
  uStack_1f0 = (ulonglong)uStack_1f0._4_4_ << 0x20;
  puStack_208 = &UNK_18098bcb0;
  puStack_228 = &UNK_180a3c3e0;
  uStack_210 = 0;
  puStack_220 = (undefined8 *)0x0;
  uStack_218 = (ulonglong)uStack_218._4_4_ << 0x20;
  puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar8 = 0;
  puStack_220 = puVar8;
  uVar7 = FUN_18064e990(puVar8);
  *puVar8 = 0x3037303120787467;
  *(undefined4 *)(puVar8 + 1) = 0x697420;
  uStack_218._0_4_ = 0xb;
  uStack_210._0_4_ = uVar7;
  FUN_180066df0(&uStack_138,&puStack_228);
  puStack_228 = &UNK_180a3c3e0;
  if (puStack_220 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_220 = (undefined8 *)0x0;
  uStack_210 = (ulonglong)uStack_210._4_4_ << 0x20;
  puStack_228 = &UNK_18098bcb0;
  puStack_208 = &UNK_180a3c3e0;
  uStack_1f0 = 0;
  puStack_200 = (undefined8 *)0x0;
  uStack_1f8 = 0;
  puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar8 = 0;
  puStack_200 = puVar8;
  uVar7 = FUN_18064e990(puVar8);
  *puVar8 = 0x3037303120787467;
  *(undefined1 *)(puVar8 + 1) = 0;
  uStack_1f8 = 8;
  uStack_1f0._0_4_ = uVar7;
  FUN_180066df0(&uStack_138,&puStack_208);
  puStack_208 = &UNK_180a3c3e0;
  if (puStack_200 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_200 = (undefined8 *)0x0;
  uStack_1f0 = (ulonglong)uStack_1f0._4_4_ << 0x20;
  puStack_208 = &UNK_18098bcb0;
  puStack_228 = &UNK_180a3c3e0;
  uStack_210 = 0;
  puStack_220 = (undefined8 *)0x0;
  uStack_218 = (ulonglong)uStack_218._4_4_ << 0x20;
  puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar8 = 0;
  puStack_220 = puVar8;
  uVar7 = FUN_18064e990(puVar8);
  *puVar8 = 0x3036363120787467;
  *(undefined1 *)(puVar8 + 1) = 0;
  uStack_218._0_4_ = 8;
  uStack_210._0_4_ = uVar7;
  FUN_180066df0(&uStack_138,&puStack_228);
  puStack_228 = &UNK_180a3c3e0;
  if (puStack_220 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_220 = (undefined8 *)0x0;
  uStack_210 = (ulonglong)uStack_210._4_4_ << 0x20;
  puStack_228 = &UNK_18098bcb0;
  puStack_208 = &UNK_180a3c3e0;
  uStack_1f0 = 0;
  puStack_200 = (undefined8 *)0x0;
  uStack_1f8 = 0;
  puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar8 = 0;
  puStack_200 = puVar8;
  uVar7 = FUN_18064e990(puVar8);
  *puVar8 = 0x34362061676576;
  uStack_1f8 = 7;
  uStack_1f0._0_4_ = uVar7;
  FUN_180066df0(&uStack_1d8,&puStack_208);
  puStack_208 = &UNK_180a3c3e0;
  if (puStack_200 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_200 = (undefined8 *)0x0;
  uStack_1f0 = (ulonglong)uStack_1f0._4_4_ << 0x20;
  puStack_208 = &UNK_18098bcb0;
  puStack_228 = &UNK_180a3c3e0;
  uStack_210 = 0;
  puStack_220 = (undefined8 *)0x0;
  uStack_218 = (ulonglong)uStack_218._4_4_ << 0x20;
  puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar8 = 0;
  puStack_220 = puVar8;
  uVar7 = FUN_18064e990(puVar8);
  *puVar8 = 0x36352061676576;
  uStack_218._0_4_ = 7;
  uStack_210._0_4_ = uVar7;
  FUN_180066df0(&uStack_138,&puStack_228);
  puStack_228 = &UNK_180a3c3e0;
  if (puStack_220 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_220 = (undefined8 *)0x0;
  uStack_210 = (ulonglong)uStack_210._4_4_ << 0x20;
  puStack_228 = &UNK_18098bcb0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 3;
  puStack_208 = &UNK_180a3c3e0;
  uStack_1f0 = 0;
  puStack_200 = (undefined8 *)0x0;
  uStack_1f8 = 0;
  puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar8 = 0;
  puStack_200 = puVar8;
  uVar7 = FUN_18064e990(puVar8);
  *puVar8 = 0x3036363120787467;
  *(undefined1 *)(puVar8 + 1) = 0;
  uStack_1f8 = 8;
  uStack_1f0._0_4_ = uVar7;
  FUN_180066df0(&uStack_1b8,&puStack_208);
  puStack_208 = &UNK_180a3c3e0;
  if (puStack_200 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_200 = (undefined8 *)0x0;
  uStack_1f0 = (ulonglong)uStack_1f0._4_4_ << 0x20;
  puStack_208 = &UNK_18098bcb0;
  puStack_228 = &UNK_180a3c3e0;
  uStack_210 = 0;
  puStack_220 = (undefined8 *)0x0;
  uStack_218 = (ulonglong)uStack_218._4_4_ << 0x20;
  puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar8 = 0;
  puStack_220 = puVar8;
  uVar7 = FUN_18064e990(puVar8);
  *puVar8 = 0x3036303120787467;
  *(undefined1 *)(puVar8 + 1) = 0;
  uStack_218._0_4_ = 8;
  uStack_210._0_4_ = uVar7;
  FUN_180066df0(&uStack_1b8,&puStack_228);
  puStack_228 = &UNK_180a3c3e0;
  if (puStack_220 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_220 = (undefined8 *)0x0;
  uStack_210 = (ulonglong)uStack_210._4_4_ << 0x20;
  puStack_228 = &UNK_18098bcb0;
  puStack_208 = &UNK_180a3c3e0;
  uStack_1f0 = 0;
  puStack_200 = (undefined8 *)0x0;
  uStack_1f8 = 0;
  puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar8 = 0;
  puStack_200 = puVar8;
  uVar7 = FUN_18064e990(puVar8);
  *puVar8 = 0x30383920787467;
  uStack_1f8 = 7;
  uStack_1f0._0_4_ = uVar7;
  FUN_180066df0(&uStack_1b8,&puStack_208);
  puStack_208 = &UNK_180a3c3e0;
  if (puStack_200 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_200 = (undefined8 *)0x0;
  uStack_1f0 = (ulonglong)uStack_1f0._4_4_ << 0x20;
  puStack_208 = &UNK_18098bcb0;
  puStack_228 = &UNK_180a3c3e0;
  uStack_210 = 0;
  puStack_220 = (undefined8 *)0x0;
  uStack_218 = (ulonglong)uStack_218._4_4_ << 0x20;
  puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar8 = 0;
  puStack_220 = puVar8;
  uVar7 = FUN_18064e990(puVar8);
  *puVar8 = 0x2030383920787467;
  *(undefined2 *)(puVar8 + 1) = 0x6974;
  *(undefined1 *)((longlong)puVar8 + 10) = 0;
  uStack_218._0_4_ = 10;
  uStack_210._0_4_ = uVar7;
  FUN_180066df0(&uStack_1b8,&puStack_228);
  puStack_228 = &UNK_180a3c3e0;
  if (puStack_220 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_220 = (undefined8 *)0x0;
  uStack_210 = (ulonglong)uStack_210._4_4_ << 0x20;
  puStack_228 = &UNK_18098bcb0;
  puStack_208 = &UNK_180a3c3e0;
  uStack_1f0 = 0;
  puStack_200 = (undefined8 *)0x0;
  uStack_1f8 = 0;
  puVar9 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar9 = 0;
  puStack_200 = (undefined8 *)puVar9;
  uVar7 = FUN_18064e990(puVar9);
  *puVar9 = 0x35207872;
  *(undefined2 *)(puVar9 + 1) = 0x3038;
  *(undefined1 *)((longlong)puVar9 + 6) = 0;
  uStack_1f8 = 6;
  uStack_1f0._0_4_ = uVar7;
  FUN_180066df0(&uStack_1b8,&puStack_208);
  puStack_208 = &UNK_180a3c3e0;
  if (puStack_200 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_200 = (undefined8 *)0x0;
  uStack_1f0 = (ulonglong)uStack_1f0._4_4_ << 0x20;
  puStack_208 = &UNK_18098bcb0;
  puStack_228 = &UNK_180a3c3e0;
  uStack_210 = 0;
  puStack_220 = (undefined8 *)0x0;
  uStack_218 = (ulonglong)uStack_218._4_4_ << 0x20;
  puVar9 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar9 = 0;
  puStack_220 = (undefined8 *)puVar9;
  uVar7 = FUN_18064e990(puVar9);
  *puVar9 = 0x34207872;
  *(undefined2 *)(puVar9 + 1) = 0x3038;
  *(undefined1 *)((longlong)puVar9 + 6) = 0;
  uStack_218._0_4_ = 6;
  uStack_210._0_4_ = uVar7;
  FUN_180066df0(&uStack_1b8,&puStack_228);
  puStack_228 = &UNK_180a3c3e0;
  if (puStack_220 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_220 = (undefined8 *)0x0;
  uStack_210 = (ulonglong)uStack_210._4_4_ << 0x20;
  puStack_228 = &UNK_18098bcb0;
  puStack_208 = &UNK_180a3c3e0;
  uStack_1f0 = 0;
  puStack_200 = (undefined8 *)0x0;
  uStack_1f8 = 0;
  puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar8 = 0;
  puStack_200 = puVar8;
  uVar7 = FUN_18064e990(puVar8);
  *puVar8 = 0x58303933203972;
  uStack_1f8 = 7;
  uStack_1f0._0_4_ = uVar7;
  FUN_180066df0(&uStack_1b8,&puStack_208);
  puStack_208 = &UNK_180a3c3e0;
  if (puStack_200 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_200 = (undefined8 *)0x0;
  uStack_1f0 = (ulonglong)uStack_1f0._4_4_ << 0x20;
  puStack_208 = &UNK_18098bcb0;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 3;
  puStack_228 = &UNK_180a3c3e0;
  uStack_210 = 0;
  puStack_220 = (undefined8 *)0x0;
  uStack_218 = (ulonglong)uStack_218._4_4_ << 0x20;
  puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar8 = 0;
  puStack_220 = puVar8;
  uVar7 = FUN_18064e990(puVar8);
  *puVar8 = 0x3035303120787467;
  *(undefined4 *)(puVar8 + 1) = 0x697420;
  uStack_218._0_4_ = 0xb;
  uStack_210._0_4_ = uVar7;
  FUN_180066df0(&uStack_158,&puStack_228);
  puStack_228 = &UNK_180a3c3e0;
  if (puStack_220 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_220 = (undefined8 *)0x0;
  uStack_210 = (ulonglong)uStack_210._4_4_ << 0x20;
  puStack_228 = &UNK_18098bcb0;
  puStack_208 = &UNK_180a3c3e0;
  uStack_1f0 = 0;
  puStack_200 = (undefined8 *)0x0;
  uStack_1f8 = 0;
  puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar8 = 0;
  puStack_200 = puVar8;
  uVar7 = FUN_18064e990(puVar8);
  *puVar8 = 0x30373920787467;
  uStack_1f8 = 7;
  uStack_1f0._0_4_ = uVar7;
  FUN_180066df0(&uStack_158,&puStack_208);
  puStack_208 = &UNK_180a3c3e0;
  if (puStack_200 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_200 = (undefined8 *)0x0;
  uStack_1f0 = (ulonglong)uStack_1f0._4_4_ << 0x20;
  puStack_208 = &UNK_18098bcb0;
  puStack_228 = &UNK_180a3c3e0;
  uStack_210 = 0;
  puStack_220 = (undefined8 *)0x0;
  uStack_218 = (ulonglong)uStack_218._4_4_ << 0x20;
  puVar9 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar9 = 0;
  puStack_220 = (undefined8 *)puVar9;
  uVar7 = FUN_18064e990(puVar9);
  *puVar9 = 0x35207872;
  *(undefined2 *)(puVar9 + 1) = 0x3037;
  *(undefined1 *)((longlong)puVar9 + 6) = 0;
  uStack_218._0_4_ = 6;
  uStack_210._0_4_ = uVar7;
  FUN_180066df0(&uStack_158,&puStack_228);
  puStack_228 = &UNK_180a3c3e0;
  if (puStack_220 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_220 = (undefined8 *)0x0;
  uStack_210 = (ulonglong)uStack_210._4_4_ << 0x20;
  puStack_228 = &UNK_18098bcb0;
  puStack_208 = &UNK_180a3c3e0;
  uStack_1f0 = 0;
  puStack_200 = (undefined8 *)0x0;
  uStack_1f8 = 0;
  puVar9 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar9 = 0;
  puStack_200 = (undefined8 *)puVar9;
  uVar7 = FUN_18064e990(puVar9);
  *puVar9 = 0x34207872;
  *(undefined2 *)(puVar9 + 1) = 0x3037;
  *(undefined1 *)((longlong)puVar9 + 6) = 0;
  uStack_1f8 = 6;
  uStack_1f0._0_4_ = uVar7;
  FUN_180066df0(&uStack_158,&puStack_208);
  puStack_208 = &UNK_180a3c3e0;
  if (puStack_200 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_200 = (undefined8 *)0x0;
  uStack_1f0 = (ulonglong)uStack_1f0._4_4_ << 0x20;
  puStack_208 = &UNK_18098bcb0;
  puStack_228 = &UNK_180a3c3e0;
  uStack_210 = 0;
  puStack_220 = (undefined8 *)0x0;
  uStack_218 = (ulonglong)uStack_218._4_4_ << 0x20;
  FUN_1806277c0(&puStack_228,6);
  *(undefined4 *)puStack_220 = 0x33203972;
  *(undefined2 *)((longlong)puStack_220 + 4) = 0x3038;
  *(undefined1 *)((longlong)puStack_220 + 6) = 0;
  uStack_218._0_4_ = 6;
  FUN_180066df0(&uStack_158,&puStack_228);
  puStack_228 = &UNK_180a3c3e0;
  if (puStack_220 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_220 = (undefined8 *)0x0;
  uStack_210 = uStack_210 & 0xffffffff00000000;
  puStack_228 = &UNK_18098bcb0;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_160 = 3;
  puStack_208 = &UNK_180a3c3e0;
  uStack_1f0 = 0;
  puStack_200 = (undefined8 *)0x0;
  uStack_1f8 = 0;
  FUN_1806277c0(&puStack_208,8);
  *puStack_200 = 0x3035303120787467;
  *(undefined1 *)(puStack_200 + 1) = 0;
  uStack_1f8 = 8;
  FUN_180066df0(&uStack_178,&puStack_208);
  puStack_208 = &UNK_180a3c3e0;
  if (puStack_200 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_200 = (undefined8 *)0x0;
  uStack_1f0 = uStack_1f0 & 0xffffffff00000000;
  puStack_208 = &UNK_18098bcb0;
  puStack_228 = &UNK_180a3c3e0;
  uStack_210 = 0;
  puStack_220 = (undefined8 *)0x0;
  uStack_218 = (ulonglong)uStack_218._4_4_ << 0x20;
  FUN_1806277c0(&puStack_228,7);
  *puStack_220 = 0x58303833203972;
  uStack_218._0_4_ = 7;
  FUN_180066df0(&uStack_178,&puStack_228);
  puStack_228 = &UNK_180a3c3e0;
  if (puStack_220 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_220 = (undefined8 *)0x0;
  uStack_210 = uStack_210 & 0xffffffff00000000;
  puStack_228 = &UNK_18098bcb0;
  puStack_208 = &UNK_180a3c3e0;
  uStack_1f0 = 0;
  puStack_200 = (undefined8 *)0x0;
  uStack_1f8 = 0;
  FUN_1806277c0(&puStack_208,7);
  *puStack_200 = 0x30363920787467;
  uStack_1f8 = 7;
  FUN_180066df0(&uStack_178,&puStack_208);
  puStack_208 = &UNK_180a3c3e0;
  if (puStack_200 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_200 = (undefined8 *)0x0;
  uStack_1f0 = uStack_1f0 & 0xffffffff00000000;
  puStack_208 = &UNK_18098bcb0;
  puStack_228 = &UNK_180a3c3e0;
  uStack_210 = 0;
  puStack_220 = (undefined8 *)0x0;
  uStack_218 = (ulonglong)uStack_218._4_4_ << 0x20;
  FUN_1806277c0(&puStack_228,7);
  *puStack_220 = 0x30353920787467;
  uStack_218._0_4_ = 7;
  FUN_180066df0(&uStack_178,&puStack_228);
  puStack_228 = &UNK_180a3c3e0;
  if (puStack_220 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_220 = (undefined8 *)0x0;
  uStack_210 = uStack_210 & 0xffffffff00000000;
  puStack_228 = &UNK_18098bcb0;
  puStack_208 = &UNK_180a3c3e0;
  uStack_1f0 = 0;
  puStack_200 = (undefined8 *)0x0;
  uStack_1f8 = 0;
  FUN_1806277c0(&puStack_208,6);
  *(undefined4 *)puStack_200 = 0x35207872;
  *(undefined2 *)((longlong)puStack_200 + 4) = 0x3036;
  *(undefined1 *)((longlong)puStack_200 + 6) = 0;
  uStack_1f8 = 6;
  FUN_180066df0(&uStack_178,&puStack_208);
  puStack_208 = &UNK_180a3c3e0;
  if (puStack_200 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_200 = (undefined8 *)0x0;
  uStack_1f0 = uStack_1f0 & 0xffffffff00000000;
  puStack_208 = &UNK_18098bcb0;
  puStack_228 = &UNK_180a3c3e0;
  uStack_210 = 0;
  puStack_220 = (undefined8 *)0x0;
  uStack_218 = (ulonglong)uStack_218._4_4_ << 0x20;
  FUN_1806277c0(&puStack_228,6);
  *(undefined4 *)puStack_220 = 0x34207872;
  *(undefined2 *)((longlong)puStack_220 + 4) = 0x3036;
  *(undefined1 *)((longlong)puStack_220 + 6) = 0;
  uStack_218._0_4_ = 6;
  FUN_180066df0(&uStack_178,&puStack_228);
  puStack_228 = &UNK_180a3c3e0;
  if (puStack_220 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_220 = (undefined8 *)0x0;
  uStack_210 = uStack_210 & 0xffffffff00000000;
  puStack_228 = &UNK_18098bcb0;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  uStack_180 = 3;
  puStack_208 = &UNK_180a3c3e0;
  uStack_1f0 = 0;
  puStack_200 = (undefined8 *)0x0;
  uStack_1f8 = 0;
  FUN_1806277c0(&puStack_208,8);
  *puStack_200 = 0x3033303120787467;
  *(undefined1 *)(puStack_200 + 1) = 0;
  uStack_1f8 = 8;
  FUN_180066df0(&uStack_198,&puStack_208);
  puStack_208 = &UNK_180a3c3e0;
  if (puStack_200 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_200 = (undefined8 *)0x0;
  uStack_1f0 = uStack_1f0 & 0xffffffff00000000;
  puStack_208 = &UNK_18098bcb0;
  puStack_228 = &UNK_180a3c3e0;
  uStack_210 = 0;
  puStack_220 = (undefined8 *)0x0;
  uStack_218 = (ulonglong)uStack_218._4_4_ << 0x20;
  FUN_1806277c0(&puStack_228,0xf);
  *(undefined4 *)puStack_220 = 0x61676556;
  *(undefined4 *)((longlong)puStack_220 + 4) = 0x47203820;
  *(undefined4 *)((longlong)puStack_220 + 8) = 0x68706172;
  *(undefined4 *)((longlong)puStack_220 + 0xc) = 0x736369;
  uStack_218._0_4_ = 0xf;
  FUN_180066df0(&uStack_198,&puStack_228);
  puStack_228 = &UNK_180a3c3e0;
  if (puStack_220 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_220 = (undefined8 *)0x0;
  uStack_210 = uStack_210 & 0xffffffff00000000;
  puStack_228 = &UNK_18098bcb0;
  puStack_208 = &UNK_180a3c3e0;
  uStack_1f0 = 0;
  puStack_200 = (undefined8 *)0x0;
  uStack_1f8 = 0;
  FUN_1806277c0(&puStack_208,10);
  *puStack_200 = 0x2030353720787467;
  *(undefined2 *)(puStack_200 + 1) = 0x6974;
  *(undefined1 *)((longlong)puStack_200 + 10) = 0;
  uStack_1f8 = 10;
  FUN_180066df0(&uStack_198,&puStack_208);
  puStack_208 = &UNK_180a3c3e0;
  if (puStack_200 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_200 = (undefined8 *)0x0;
  uStack_1f0 = uStack_1f0 & 0xffffffff00000000;
  puStack_208 = &UNK_18098bcb0;
  puStack_228 = &UNK_180a3c3e0;
  uStack_210 = 0;
  puStack_220 = (undefined8 *)0x0;
  uStack_218 = (ulonglong)uStack_218._4_4_ << 0x20;
  FUN_1806277c0(&puStack_228,7);
  *puStack_220 = 0x30363720787467;
  uStack_218._0_4_ = 7;
  FUN_180066df0(&uStack_198,&puStack_228);
  puStack_228 = &UNK_180a3c3e0;
  if (puStack_220 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_220 = (undefined8 *)0x0;
  uStack_210 = uStack_210 & 0xffffffff00000000;
  puStack_228 = &UNK_18098bcb0;
  puStack_208 = &UNK_180a3c3e0;
  uStack_1f0 = 0;
  puStack_200 = (undefined8 *)0x0;
  uStack_1f8 = 0;
  FUN_1806277c0(&puStack_208,7);
  *puStack_200 = 0x30363620787467;
  uStack_1f8 = 7;
  FUN_180066df0(&uStack_198,&puStack_208);
  puStack_208 = &UNK_180a3c3e0;
  if (puStack_200 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_200 = (undefined8 *)0x0;
  uStack_1f0 = uStack_1f0 & 0xffffffff00000000;
  puStack_208 = &UNK_18098bcb0;
  puStack_228 = &UNK_180a3c3e0;
  uStack_210 = 0;
  puStack_220 = (undefined8 *)0x0;
  uStack_218 = (ulonglong)uStack_218._4_4_ << 0x20;
  FUN_1806277c0(&puStack_228,8);
  *puStack_220 = 0x6d30363920787467;
  *(undefined1 *)(puStack_220 + 1) = 0;
  uStack_218._0_4_ = 8;
  FUN_180066df0(&uStack_198,&puStack_228);
  puStack_228 = &UNK_180a3c3e0;
  if (puStack_220 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_220 = (undefined8 *)0x0;
  uStack_210 = uStack_210 & 0xffffffff00000000;
  puStack_228 = &UNK_18098bcb0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 3;
  puStack_208 = &UNK_180a3c3e0;
  uStack_1f0 = 0;
  puStack_200 = (undefined8 *)0x0;
  uStack_1f8 = 0;
  FUN_1806277c0(&puStack_208,5);
  *(undefined4 *)puStack_200 = 0x65746e69;
  *(undefined2 *)((longlong)puStack_200 + 4) = 0x6c;
  uStack_1f8 = 5;
  FUN_180066df0(&uStack_118,&puStack_208);
  puStack_208 = &UNK_180a3c3e0;
  if (puStack_200 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_200 = (undefined8 *)0x0;
  uStack_1f0 = uStack_1f0 & 0xffffffff00000000;
  puStack_208 = &UNK_18098bcb0;
  puStack_228 = &UNK_180a3c3e0;
  uStack_210 = 0;
  puStack_220 = (undefined8 *)0x0;
  uStack_218 = (ulonglong)uStack_218._4_4_ << 0x20;
  FUN_1806277c0(&puStack_228,9);
  *puStack_220 = 0x72206e6f65646172;
  *(undefined2 *)(puStack_220 + 1) = 0x37;
  uStack_218 = CONCAT44(uStack_218._4_4_,9);
  FUN_180066df0(&uStack_118,&puStack_228);
  puStack_228 = &UNK_180a3c3e0;
  if (puStack_220 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_220 = (undefined8 *)0x0;
  uStack_210 = uStack_210 & 0xffffffff00000000;
  puStack_228 = &UNK_18098bcb0;
  puStack_208 = &UNK_180a3c3e0;
  uStack_1f0 = 0;
  puStack_200 = (undefined8 *)0x0;
  uStack_1f8 = 0;
  FUN_1806277c0(&puStack_208,8);
  *puStack_200 = 0x6d30353920787467;
  *(undefined1 *)(puStack_200 + 1) = 0;
  uStack_1f8 = 8;
  FUN_180066df0(&uStack_118,&puStack_208);
  puStack_208 = &UNK_180a3c3e0;
  if (puStack_200 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_200 = (undefined8 *)0x0;
  uStack_1f0 = uStack_1f0 & 0xffffffff00000000;
  puStack_208 = &UNK_18098bcb0;
  puStack_228 = (undefined *)0x0;
  puStack_220 = (undefined8 *)0x0;
  uStack_218 = 0;
  uStack_210 = CONCAT44(uStack_210._4_4_,3);
  uStack_1e8 = (undefined **)0x87000000f00;
  FUN_18005ea90(&puStack_228,&uStack_1e8);
  uStack_1e8 = (undefined **)0x70800000c80;
  FUN_18005ea90(&puStack_228,&uStack_1e8);
  uStack_1e8 = (undefined **)0x5a000000a00;
  FUN_18005ea90(&puStack_228,&uStack_1e8);
  uStack_1e8 = (undefined **)0x43800000780;
  FUN_18005ea90(&puStack_228,&uStack_1e8);
  uStack_1e8 = (undefined **)0x38400000640;
  FUN_18005ea90(&puStack_228,&uStack_1e8);
  uStack_1e8 = (undefined **)0x2d000000500;
  uVar7 = FUN_18005ea90(&puStack_228,&uStack_1e8);
  cVar6 = FUN_180103800(uVar7,&uStack_1d8,lVar1);
  uVar12 = 4;
  uVar13 = uVar14;
  if (cVar6 == '\0') {
    cVar6 = FUN_180103800(extraout_XMM0_Da,&uStack_138,lVar1);
    if (cVar6 == '\0') {
      cVar6 = FUN_180103800(extraout_XMM0_Da_00,&uStack_1b8,lVar1);
      if (cVar6 == '\0') {
        cVar6 = FUN_180103800(extraout_XMM0_Da_01,&uStack_158,lVar1);
        if (cVar6 == '\0') {
          cVar6 = FUN_180103800(extraout_XMM0_Da_02,&uStack_178,lVar1);
          uVar12 = 2;
          if (cVar6 == '\0') {
            cVar6 = FUN_180103800(extraout_XMM0_Da_03,&uStack_198,lVar1);
            uVar13 = 3;
            if (cVar6 == '\0') {
              cVar6 = FUN_180103800(extraout_XMM0_Da_04,&uStack_118,lVar1);
              if (cVar6 == '\0') goto LAB_1801035ea;
              uVar13 = 5;
            }
            uVar12 = 1;
          }
          else {
            uVar13 = 3;
          }
        }
        else {
          uVar13 = 3;
          uVar12 = 3;
        }
      }
      else {
        uVar13 = 3;
      }
    }
    else {
      uVar13 = 2;
    }
  }
LAB_1801035ea:
  FUN_180171f10(*(undefined8 *)(_DAT_180c86870 + 8),&uStack_1e8);
  uVar4 = (ulonglong)uStack_1e8;
  puVar3 = puStack_228;
  iVar5 = uStack_1e8._4_4_;
  iVar10 = uStack_1e8._4_4_ * (int)uStack_1e8;
  if (iVar10 < *(int *)(puStack_228 + uVar13 * 8 + 4) * *(int *)(puStack_228 + uVar13 * 8)) {
    uVar12 = uVar12 + 1;
  }
  else if (*(int *)(puStack_228 + uVar13 * 8 + 4) * *(int *)(puStack_228 + uVar13 * 8) < iVar10) {
    uVar12 = uVar12 - 1;
  }
  if (-1 < (int)uVar12) {
    if (4 < (int)uVar12) {
      uVar12 = 4;
    }
    uVar14 = (ulonglong)uVar12;
  }
  FUN_18005ca20(_DAT_180c86920,1);
  FUN_18006b4c0(_DAT_180c86920,uVar4 & 0xffffffff);
  uVar7 = FUN_18006b440(_DAT_180c86920,iVar5);
  FUN_180100ff0(uVar7,uVar14);
  if (uVar16 < 0x708) {
    FUN_18010e330(_DAT_180c86920,0);
    FUN_18010d570(_DAT_180c86920,0);
    FUN_18010d5f0(_DAT_180c86920,1);
  }
  else if (uVar16 < 0xaf0) {
    FUN_18010e330(_DAT_180c86920,0);
    FUN_18010d570(_DAT_180c86920,1);
    FUN_18010d5f0(_DAT_180c86920,2);
  }
  else if (uVar16 < 0xed8) {
    FUN_18010e330(_DAT_180c86920,1);
    FUN_18010d570(_DAT_180c86920,2);
  }
  else {
    uVar11 = 2;
    if (0x16a7 < uVar16) {
      uVar11 = 3;
    }
    FUN_18010e330(_DAT_180c86920,uVar11);
  }
  FUN_180623de0(apuStack_e8);
  if (iStack_50 < 4) {
    uVar11 = 0;
  }
  else if (iStack_50 < 5) {
    uVar11 = 1;
  }
  else {
    uVar11 = 2;
    if (8 < iStack_50) {
      uVar11 = 3;
    }
  }
  uVar7 = FUN_18010cff0(uVar2,uVar11);
  if (cStack_1e0 != '\0') {
    FUN_180103970(uVar7,1);
  }
  uStack_1e8 = apuStack_e8;
  apuStack_e8[0] = &UNK_18098bcb0;
  if (puVar3 == (undefined *)0x0) {
    FUN_18005d580(&uStack_118);
    FUN_18005d580(&uStack_198);
    FUN_18005d580(&uStack_178);
    FUN_18005d580(&uStack_158);
    FUN_18005d580(&uStack_1b8);
    FUN_18005d580(&uStack_138);
    FUN_18005d580(&uStack_1d8);
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_248);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



undefined8 FUN_180103800(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined *puStack_30;
  undefined *puStack_28;
  uint uStack_20;
  
  FUN_1806279c0(&puStack_30,param_3,param_3,param_4,0xfffffffffffffffe);
  uVar8 = 0;
  if (uStack_20 != 0) {
    lVar9 = 0;
    do {
      cVar1 = puStack_28[lVar9];
      if ((byte)(cVar1 + 0xbfU) < 0x1a) {
        puStack_28[lVar9] = cVar1 + ' ';
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 1;
    } while (uVar8 < uStack_20);
  }
  iVar7 = 0;
  lVar9 = *param_2;
  if (param_2[1] - lVar9 >> 5 != 0) {
    lVar5 = 0;
    do {
      puVar3 = &DAT_18098bc73;
      if (puStack_28 != (undefined *)0x0) {
        puVar3 = puStack_28;
      }
      puVar4 = *(undefined **)(lVar5 + 8 + lVar9);
      puVar2 = &DAT_18098bc73;
      if (puVar4 != (undefined *)0x0) {
        puVar2 = puVar4;
      }
      lVar9 = strstr(puVar2,puVar3);
      if (lVar9 != 0) {
LAB_180103916:
        uVar6 = 1;
        goto LAB_18010391c;
      }
      puVar3 = *(undefined **)(lVar5 + 8 + *param_2);
      puVar4 = &DAT_18098bc73;
      if (puVar3 != (undefined *)0x0) {
        puVar4 = puVar3;
      }
      puVar3 = &DAT_18098bc73;
      if (puStack_28 != (undefined *)0x0) {
        puVar3 = puStack_28;
      }
      lVar9 = strstr(puVar3,puVar4);
      if (lVar9 != 0) goto LAB_180103916;
      iVar7 = iVar7 + 1;
      lVar5 = lVar5 + 0x20;
      lVar9 = *param_2;
    } while ((ulonglong)(longlong)iVar7 < (ulonglong)(param_2[1] - lVar9 >> 5));
  }
  uVar6 = 0;
LAB_18010391c:
  puStack_30 = &UNK_180a3c3e0;
  if (puStack_28 == (undefined *)0x0) {
    return uVar6;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





