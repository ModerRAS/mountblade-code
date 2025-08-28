#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// $fun 的语义化别名
#define $alias_name $fun


// 02_core_engine_part089.c - 核心引擎模块第089部分
// 包含文本处理、数值计算和渲染相关的函数

// 全局变量
extern int64_t SYSTEM_DATA_MANAGER_A;      // 引擎全局上下文
extern uint64_t GET_SECURITY_COOKIE();     // 安全检查相关
extern char global_var_5912_ptr[];          // 数据类型映射表
extern char system_buffer_ptr;            // 默认格式字符串
extern char global_var_2224_ptr;            // 操作符标识
extern char system_buffer_63b4;            // 减法操作符
extern char global_var_2240_ptr;            // 加法操作符
extern uint global_var_3572_ptr[];          // 函数跳转表1
extern uint global_var_3596_ptr[];          // 函数跳转表2

/**
 * 处理格式化字符串并执行渲染操作
 * @param param_1 浮点参数数组（包含坐标信息）
 * @param param_2 整数参数
 * @param param_3 渲染上下文
 * @param param_4 渲染目标
 * @param param_5 浮点数值
 * @param param_6 格式化字符串
 */
void process_formatted_text_render(float *param_1, int param_2, uint64_t param_3, uint64_t param_4, 
                                  float *param_5, char *param_6)
{
  int64_t engine_context;
  char current_char;
  int format_length;
  char *format_ptr;
  int64_t temp_ptr;
  char *text_start;
  char *text_end;
  int buffer_size;
  bool is_format_specifier;
  int8_t security_buffer[32];
  uint64_t security_check1;
  uint64_t security_check2;
  uint64_t security_check3;
  float width_value;
  float height_value;
  char format_buffer[31];
  char processed_text[33];
  uint64_t security_token;
  
  engine_context = SYSTEM_DATA_MANAGER_A;
  security_token = GET_SECURITY_COOKIE() ^ (uint64_t)security_buffer;
  
  // 初始化渲染状态
  *(int8_t *)(*(int64_t *)(engine_context + 0x1af8) + 0xb1) = 1;
  func_0x000180123e90(*(int32_t *)(engine_context + 0x2da0), 
                      *(uint64_t *)(engine_context + 0x1af8));
  *(int32_t *)(engine_context + 0x1b18) = 0;
  *(int8_t *)(engine_context + 0x1b1c) = 0;
  *(int32_t *)(engine_context + 0x1b44) = 0xc;
  
  // 解析格式化字符串
  current_char = *param_6;
  format_ptr = param_6;
  while (current_char != '\0') {
    is_format_specifier = current_char == '%';
    if (is_format_specifier) {
      if (format_ptr[1] != '%') break;
      is_format_specifier = true;
    }
    text_start = format_ptr + 1;
    if (!is_format_specifier) {
      text_start = format_ptr;
    }
    format_ptr = text_start + 1;
    current_char = text_start[1];
  }
  
  // 处理格式说明符
  if ((*format_ptr == '%') && 
      (text_start = (char *)func_0x000180114060(format_ptr), param_6 = format_ptr, *text_start != '\0')) {
    format_length = ((int)text_start - (int)format_ptr) + 1;
    buffer_size = 0x20;
    if (format_length < 0x20) {
      buffer_size = format_length;
    }
    temp_ptr = (int64_t)buffer_size;
    if (temp_ptr != 0) {
      strncpy(processed_text + 1, format_ptr, temp_ptr);
      processed_text[buffer_size] = '\0';
    }
    param_6 = processed_text + 1;
  }
  
  // 格式化文本
  SystemCore_LoggingSystem(format_buffer, 0x20, param_6, (double)*param_5);
  
  // 去除前后空白字符
  for (text_start = format_buffer; (current_char = *text_start, current_char == ' ' || (current_char == '\t')); 
       text_start = text_start + 1) {
  }
  
  text_end = text_start;
  if (current_char != '\0') {
    do {
      text_end = text_end + 1;
    } while (*text_end != '\0');
    do {
      text_start = text_end;
      if (text_start <= text_start) break;
      text_end = text_start + -1;
    } while ((text_start[-1] == ' ') || (text_start[-1] == '\t'));
  }
  
  if (text_start != format_buffer) {
    memmove(format_buffer, text_start, (int64_t)text_start - (int64_t)text_start);
  }
  
  // 计算尺寸
  width_value = param_1[2] - *param_1;
  height_value = param_1[3] - param_1[1];
  security_check3 = 0;
  security_check2 = 0;
  security_check1 = CONCAT44(security_check1._4_4_, 0x20010);
  text_start[(int64_t)(format_buffer + -(int64_t)text_start)] = '\0';
  
  // 执行渲染
  current_char = FUN_1801166f0(param_3, format_buffer, 0x20, &width_value);
  
  // 更新渲染上下文
  if (*(int *)(engine_context + 0x2da0) == 0) {
    *(int32_t *)(engine_context + 0x2da0) = *(int32_t *)(engine_context + 0x1b2c);
    temp_ptr = SYSTEM_DATA_MANAGER_A;
    *(int *)(engine_context + 0x1b18) = param_2;
    *(int8_t *)(temp_ptr + 0x1b1c) = 0;
    if ((param_2 != 0) && (*(int *)(temp_ptr + 0x1b20) != param_2)) {
      *(uint64_t *)(temp_ptr + 0x1b24) = 0;
    }
  }
  
  if (current_char != '\0') {
    security_check1 = 0;
    FUN_1801134b0(format_buffer, *(uint64_t *)(engine_context + 0x1ec8), 4, param_5);
  }
  
  // 安全检查清理
  SystemSecurityChecker(security_token ^ (uint64_t)security_buffer);
}

/**
 * 执行数值运算和渲染操作
 * @param param_1 目标字符串
 * @param param_2 数据类型
 * @param param_3 主数值
 * @param param_4 副数值
 * @param param_5 结果数值
 * @param param_6 格式字符串
 * @param param_7 操作标志
 */
void execute_numeric_operation(char *param_1, uint param_2, double *param_3, double *param_4, 
                              double *param_5, uint64_t param_6, uint param_7)
{
  int *render_counter;
  double converted_value;
  int64_t engine_context;
  char operation_result;
  double *value_ptr;
  char *string_ptr;
  uint operation_flags;
  float timing_factor1;
  float timing_factor2;
  float timing_factor3;
  int8_t security_buffer[32];
  uint64_t render_param1;
  uint64_t render_param2;
  uint64_t render_param3;
  uint64_t render_param4;
  int8_t temp_buffer[64];
  uint64_t security_token;
  
  engine_context = SYSTEM_DATA_MANAGER_A;
  security_token = GET_SECURITY_COOKIE() ^ (uint64_t)security_buffer;
  *(int8_t *)(*(int64_t *)(engine_context + 0x1af8) + 0xb1) = 1;
  
  // 检查渲染状态
  if (*(char *)(*(int64_t *)(engine_context + 0x1af8) + 0xb4) != '\0') goto cleanup_and_exit;
  
  // 获取格式字符串
  if (param_6 == 0) {
    param_6 = *(uint64_t *)(&global_var_5912_ptr + (int64_t)(int)param_2 * 0x18);
  }
  
  // 格式化数值
  if (param_2 < 2) {
    SystemCore_LoggingSystem(temp_buffer, 0x40, param_6, *(float *)param_3);
  }
  else if (param_2 - 2 < 2) {
    SystemCore_LoggingSystem(temp_buffer, 0x40, param_6, *param_3);
  }
  else {
    if (param_2 == 4) {
      converted_value = (double)*(float *)param_3;
    }
    else {
      if (param_2 != 5) goto skip_format_conversion;
      converted_value = *param_3;
    }
    SystemCore_LoggingSystem(temp_buffer, 0x40, param_6, converted_value);
  }
  
skip_format_conversion:
  operation_flags = param_7 | 1;
  if ((param_7 & 0x20002) != 0) {
    operation_flags = param_7;
  }
  
  if (param_4 == (double *)0x0) {
    // 简单渲染模式
    render_param4 = 0;
    render_param3 = 0;
    render_param2 = 0;
    render_param1 = CONCAT44(render_param1._4_4_, operation_flags) | 0x10;
    operation_result = FUN_1801166f0(param_1, temp_buffer, 0x40, &render_param4);
    if (operation_result != '\0') {
      render_param1 = param_6;
      FUN_1801134b0(temp_buffer, *(uint64_t *)(engine_context + 0x1ec8), param_2, param_3);
    }
  }
  else {
    // 复杂运算模式
    timing_factor3 = *(float *)(engine_context + 0x1660) + *(float *)(engine_context + 0x1660) +
                     *(float *)(engine_context + 0x19f8);
    FUN_18012e3b0();
    FUN_18012e1b0(param_1);
    timing_factor2 = *(float *)(engine_context + 0x1674);
    timing_factor1 = (float)func_0x00018012d6a0();
    timing_factor1 = timing_factor1 - (timing_factor3 + timing_factor3 + timing_factor2 + timing_factor2);
    if (timing_factor1 <= 1.0) {
      timing_factor1 = 1.0;
    }
    func_0x00018012d470(timing_factor1);
    
    // 执行减法操作
    render_param4 = 0;
    render_param3 = 0;
    render_param2 = 0;
    render_param1 = CONCAT44(render_param1._4_4_, operation_flags) | 0x10;
    operation_result = FUN_1801166f0(&system_buffer_ptr, temp_buffer, 0x40, &render_param4);
    if (operation_result != '\0') {
      render_param1 = param_6;
      FUN_1801134b0(temp_buffer, *(uint64_t *)(engine_context + 0x1ec8), param_2, param_3);
    }
    
    func_0x00018012d640();
    operation_flags = (operation_flags & 0x4000 | 0x2040) >> 6;
    func_0x00018012e760(0, *(int32_t *)(engine_context + 0x1674));
    render_param4 = CONCAT44(timing_factor3, timing_factor3);
    operation_result = FUN_18010f6f0(&system_buffer_63b4, &render_param4, operation_flags);
    
    if (operation_result != '\0') {
      if ((*(char *)(engine_context + 0x134) == '\0') || (value_ptr = param_5, param_5 == (double *)0x0)) {
        value_ptr = param_4;
      }
      
      // 根据数据类型执行减法
      switch(param_2) {
      case 0:
      case 1:
        *(int *)param_3 = (int)*(float *)param_3 - (int)*(float *)value_ptr;
        break;
      case 2:
      case 3:
        *param_3 = (double)((int64_t)*param_3 - (int64_t)*value_ptr);
        break;
      case 4:
        *(float *)param_3 = *(float *)param_3 - *(float *)value_ptr;
        break;
      case 5:
        *param_3 = *param_3 - *value_ptr;
      }
    }
    
    // 执行加法操作
    func_0x00018012e760(0, *(int32_t *)(engine_context + 0x1674));
    render_param4 = CONCAT44(timing_factor3, timing_factor3);
    operation_result = FUN_18010f6f0(&global_var_2240_ptr, &render_param4, operation_flags);
    if (operation_result != '\0') {
      if ((*(char *)(engine_context + 0x134) == '\0') || (param_5 == (double *)0x0)) {
        param_5 = param_4;
      }
      
      // 根据数据类型执行加法
      switch(param_2) {
      case 0:
      case 1:
        *(int *)param_3 = (int)*(float *)param_3 + (int)*(float *)param_5;
        break;
      case 2:
      case 3:
        *param_3 = (double)((int64_t)*param_3 + (int64_t)*param_5);
        break;
      case 4:
        *(float *)param_3 = *(float *)param_3 + *(float *)param_5;
        break;
      case 5:
        *param_3 = *param_3 + *param_5;
      }
    }
    
    func_0x00018012e760(0, *(int32_t *)(engine_context + 0x1674));
    string_ptr = param_1;
    if (param_1 != (char *)0xffffffffffffffff) {
      while (*string_ptr != '\0') {
        if (((*string_ptr == '#') && (string_ptr[1] == '#')) ||
           (string_ptr = string_ptr + 1, string_ptr == (char *)0xffffffffffffffff)) break;
      }
    }
    FUN_18010e8a0(param_1);
    render_counter = (int *)(*(int64_t *)(engine_context + 0x1af8) + 0x218);
    *render_counter = *render_counter + -1;
    FUN_18012e4e0();
  }
  
cleanup_and_exit:
  SystemSecurityChecker(security_token ^ (uint64_t)security_buffer);
}

/**
 * 简化的数值操作函数
 * @param param_1 返回值
 * @param param_2 数据类型
 * @param param_3 数值指针
 */
void simplified_numeric_operation(int32_t param_1, uint64_t param_2, double *param_3)
{
  int *render_counter;
  double converted_value;
  char operation_result;
  uint data_type;
  char *target_string;
  int64_t engine_context;
  int64_t context_ptr;
  float timing_factor1;
  float timing_factor2;
  float timing_factor3;
  int32_t xmm6_value_a;
  float result_float;
  int32_t xmm6_value_c;
  uint64_t stack_param1;
  int32_t format_param;
  uint64_t stack_param2;
  uint64_t security_token;
  int32_t stack_param3;
  int32_t stack_param4;
  int64_t stack_param5;
  uint operation_flags;
  
  format_param = (int32_t)((uint64_t)stack_param1 >> 0x20);
  if (stack_param5 == 0) {
    stack_param5 = *(int64_t *)(&global_var_5912_ptr + 
            (CONCAT44(stack_param4, data_type) * 2 + CONCAT44(stack_param4, data_type)) * 8);
  }
  
  // 格式化数值
  if (data_type < 2) {
    param_1 = SystemCore_LoggingSystem(&stack0x00000050, 0x40, stack_param5, *(float *)param_3);
  }
  else if (data_type - 2 < 2) {
    param_1 = SystemCore_LoggingSystem(&stack0x00000050, 0x40, stack_param5, *param_3);
  }
  else {
    if (data_type == 4) {
      converted_value = (double)*(float *)param_3;
    }
    else {
      if (data_type != 5) goto skip_format;
      converted_value = *param_3;
    }
    param_1 = SystemCore_LoggingSystem(&stack0x00000050, 0x40, stack_param5, converted_value);
  }
  
skip_format:
  operation_flags = stack_param5 | 1;
  if ((stack_param5 & 0x20002) != 0) {
    operation_flags = stack_param5;
  }
  
  if (context_ptr == 0) {
    // 简单渲染模式
    stack_param2 = 0;
    operation_result = FUN_1801166f0(param_1, &stack0x00000050, 0x40, &stack_param2,
                          CONCAT44(format_param, operation_flags) | 0x10);
    if (operation_result != '\0') {
      FUN_1801134b0(&stack0x00000050, *(uint64_t *)(context_ptr + 0x1ec8), data_type);
    }
  }
  else {
    // 复杂运算模式
    result_float = *(float *)(engine_context + 0x1660) + *(float *)(engine_context + 0x1660) +
                   *(float *)(engine_context + 0x19f8);
    stack_param3 = xmm6_value_a;
    stack_param4 = xmm6_value_c;
    FUN_18012e3b0();
    FUN_18012e1b0();
    timing_factor2 = *(float *)(context_ptr + 0x1674);
    timing_factor1 = (float)func_0x00018012d6a0();
    timing_factor1 = timing_factor1 - (result_float + result_float + timing_factor2 + timing_factor2);
    if (timing_factor1 <= 1.0) {
      timing_factor1 = 1.0;
    }
    func_0x00018012d470(timing_factor1);
    
    stack_param2 = 0;
    operation_result = FUN_1801166f0(&system_buffer_ptr, &stack0x00000050, 0x40, &stack_param2,
                          CONCAT44(format_param, operation_flags) | 0x10);
    if (operation_result != '\0') {
      FUN_1801134b0(&stack0x00000050, *(uint64_t *)(context_ptr + 0x1ec8), data_type);
    }
    
    func_0x00018012d640();
    operation_flags = (operation_flags & 0x4000 | 0x2040) >> 6;
    func_0x00018012e760(0, *(int32_t *)(context_ptr + 0x1674));
    stack_param2 = CONCAT44(result_float, result_float);
    operation_result = FUN_18010f6f0(&system_buffer_63b4, &stack_param2, operation_flags);
    
    if ((operation_result != '\0') && (data_type < 6)) {
      // 执行减法操作（通过跳转表）
      (*(code *)((uint64_t)*(uint *)(&global_var_3572_ptr + CONCAT44(stack_param4, data_type) * 4) +
                0x180000000))
                ((code *)((uint64_t)
                          *(uint *)(&global_var_3572_ptr + CONCAT44(stack_param4, data_type) * 4) +
                         0x180000000));
      return;
    }
    
    func_0x00018012e760(0, *(int32_t *)(context_ptr + 0x1674));
    stack_param2 = CONCAT44(result_float, result_float);
    operation_result = FUN_18010f6f0(&global_var_2240_ptr, &stack_param2, operation_flags);
    if ((operation_result != '\0') && (data_type < 6)) {
      // 执行加法操作（通过跳转表）
      (*(code *)((uint64_t)*(uint *)(&global_var_3596_ptr + CONCAT44(stack_param4, data_type) * 4) +
                0x180000000))
                ((code *)((uint64_t)
                          *(uint *)(&global_var_3596_ptr + CONCAT44(stack_param4, data_type) * 4) +
                         0x180000000));
      return;
    }
    
    func_0x00018012e760(0, *(int32_t *)(context_ptr + 0x1674));
    if (target_string != (char *)0xffffffffffffffff) {
      while (*target_string != '\0') {
        if (((*target_string == '#') && (target_string[1] == '#')) ||
           (target_string = target_string + 1, target_string == (char *)0xffffffffffffffff)) break;
      }
    }
    FUN_18010e8a0();
    render_counter = (int *)(*(int64_t *)(engine_context + 0x1af8) + 0x218);
    *render_counter = *render_counter + -1;
    FUN_18012e4e0();
  }
  
  SystemSecurityChecker(security_token ^ (uint64_t)&stack0x00000000);
}

/**
 * 执行核心引擎运算操作
 */
void execute_core_engine_operation(void)
{
  int *render_counter;
  char operation_result;
  int64_t engine_context;
  uint data_type;
  int32_t format_param;
  uint operation_flags;
  char *target_string;
  int64_t context_ptr;
  float timing_factor1;
  float timing_factor2;
  float timing_factor3;
  uint64_t stack_param1;
  int32_t format_value;
  uint64_t stack_param2;
  uint64_t security_token;
  uint64_t stack_param3;
  
  format_value = (int32_t)((uint64_t)stack_param1 >> 0x20);
  timing_factor3 = *(float *)(engine_context + 0x1660) + *(float *)(engine_context + 0x1660) + 
                  *(float *)(engine_context + 0x19f8);
  FUN_18012e3b0();
  FUN_18012e1b0();
  timing_factor2 = *(float *)(context_ptr + 0x1674);
  timing_factor1 = (float)func_0x00018012d6a0();
  timing_factor1 = timing_factor1 - (timing_factor3 + timing_factor3 + timing_factor2 + timing_factor2);
  if (timing_factor1 <= 1.0) {
    timing_factor1 = 1.0;
  }
  func_0x00018012d470(timing_factor1);
  
  stack_param2 = 0;
  operation_result = FUN_1801166f0(&system_buffer_ptr, &stack0x00000050, 0x40, &stack_param2,
                        CONCAT44(format_value, operation_flags));
  if (operation_result != '\0') {
    FUN_1801134b0(&stack0x00000050, *(uint64_t *)(context_ptr + 0x1ec8), data_type);
  }
  
  func_0x00018012d640();
  operation_flags = (operation_flags & 0x4000 | 0x2040) >> 6;
  func_0x00018012e760(0, *(int32_t *)(context_ptr + 0x1674));
  stack_param2 = CONCAT44(timing_factor3, timing_factor3);
  operation_result = FUN_18010f6f0(&system_buffer_63b4, &stack_param2, operation_flags);
  
  if ((operation_result != '\0') && (data_type < 6)) {
    // 执行减法操作（通过跳转表）
    (*(code *)((uint64_t)*(uint *)(&global_var_3572_ptr + CONCAT44(format_param, data_type) * 4) +
              0x180000000))
              ((code *)((uint64_t)
                        *(uint *)(&global_var_3572_ptr + CONCAT44(format_param, data_type) * 4) +
                       0x180000000));
    return;
  }
  
  func_0x00018012e760(0, *(int32_t *)(context_ptr + 0x1674));
  stack_param2 = CONCAT44(timing_factor3, timing_factor3);
  operation_result = FUN_18010f6f0(&global_var_2240_ptr, &stack_param2, operation_flags);
  if ((operation_result != '\0') && (data_type < 6)) {
    // 执行加法操作（通过跳转表）
    (*(code *)((uint64_t)*(uint *)(&global_var_3596_ptr + CONCAT44(format_param, data_type) * 4) +
              0x180000000))
              ((code *)((uint64_t)
                        *(uint *)(&global_var_3596_ptr + CONCAT44(format_param, data_type) * 4) +
                       0x180000000));
    return;
  }
  
  func_0x00018012e760(0, *(int32_t *)(context_ptr + 0x1674));
  if (target_string != (char *)0xffffffffffffffff) {
    while (*target_string != '\0') {
      if (((*target_string == '#') && (target_string[1] == '#')) ||
         (target_string = target_string + 1, target_string == (char *)0xffffffffffffffff)) break;
    }
  }
  FUN_18010e8a0();
  render_counter = (int *)(*(int64_t *)(engine_context + 0x1af8) + 0x218);
  *render_counter = *render_counter + -1;
  FUN_18012e4e0();
  
  SystemSecurityChecker(security_token ^ (uint64_t)&stack0x00000000);
}

/**
 * 执行加法操作（通过跳转表）
 */
void execute_addition_operation(void)
{
  uint data_type;
  int32_t format_param;
  char *target_string;
  int64_t context_ptr;
  uint64_t security_token;
  
  if (data_type < 6) {
    // 执行加法操作（通过跳转表）
    (*(code *)((uint64_t)*(uint *)(&global_var_3596_ptr + CONCAT44(format_param, data_type) * 4) +
              0x180000000))
              ((code *)((uint64_t)
                        *(uint *)(&global_var_3596_ptr + CONCAT44(format_param, data_type) * 4) +
                       0x180000000));
    return;
  }
  
  func_0x00018012e760(0, *(int32_t *)(context_ptr + 0x1674));
  if (target_string != (char *)0xffffffffffffffff) {
    while (*target_string != '\0') {
      if (((*target_string == '#') && (target_string[1] == '#')) ||
         (target_string = target_string + 1, target_string == (char *)0xffffffffffffffff)) break;
    }
  }
  FUN_18010e8a0();
  render_counter = (int *)(*(int64_t *)(engine_context + 0x1af8) + 0x218);
  *render_counter = *render_counter + -1;
  FUN_18012e4e0();
  
  SystemSecurityChecker(security_token ^ (uint64_t)&stack0x00000000);
}

/**
 * 清理操作函数
 */
void cleanup_operation(void)
{
  uint64_t security_token;
  SystemSecurityChecker(security_token ^ (uint64_t)&stack0x00000000);
}

/**
 * 批量数值运算处理函数
 * @param param_1 目标字符串
 * @param param_2 上下文参数
 * @param param_3 数值数组
 * @param param_4 数值数量
 * @param param_5 附加参数1
 * @param param_6 附加参数2
 * @param param_7 操作标志
 * @return 操作结果状态
 */
uint64_t process_batch_numeric_operations(char *param_1, uint64_t param_2, int64_t param_3, 
                                         int param_4, uint64_t param_5, uint64_t param_6, 
                                         uint64_t param_7)
{
  int operation_result;
  uint64_t status_flag;
  int64_t engine_context;
  int64_t render_context;
  byte operation_success;
  int index;
  int *render_counter;
  char *string_ptr;
  int array_index;
  int64_t context_base;
  byte batch_result;
  int32_t operation_flag;
  
  context_base = SYSTEM_DATA_MANAGER_A;
  *(int8_t *)(*(int64_t *)(context_base + 0x1af8) + 0xb1) = 1;
  status_flag = *(uint64_t *)(context_base + 0x1af8);
  
  // 检查渲染状态
  if (*(char *)(status_flag + 0xb4) != '\0') {
    return status_flag & 0xffffffffffffff00;
  }
  
  batch_result = 0;
  FUN_18012e3b0();
  FUN_18012e1b0(param_1);
  FUN_18012d4c0(param_4);
  
  array_index = 0;
  context_base = SYSTEM_DATA_MANAGER_A;
  if (0 < param_4) {
    do {
      FUN_18012e2d0(array_index);
      operation_success = FUN_180114450(&global_var_2224_ptr, 4, param_3, 0, 0, param_7, 0);
      batch_result = batch_result | operation_success;
      func_0x00018012e760(0, *(int32_t *)(engine_context + 0x1674));
      context_base = SYSTEM_DATA_MANAGER_A;
      render_counter = (int *)(*(int64_t *)(context_base + 0x1af8) + 0x218);
      *render_counter = *render_counter + -1;
      *(int8_t *)(*(int64_t *)(context_base + 0x1af8) + 0xb1) = 1;
      render_context = *(int64_t *)(context_base + 0x1af8);
      operation_result = *(int *)(render_context + 0x1c8);
      index = operation_result + -1;
      *(int *)(render_context + 0x1c8) = index;
      if (index == 0) {
        operation_flag = *(int32_t *)(render_context + 0x284);
      }
      else {
        operation_flag = *(int32_t *)(*(int64_t *)(render_context + 0x1d0) + -8 + (int64_t)operation_result * 4);
      }
      param_3 = param_3 + 4;
      *(int32_t *)(render_context + 0x1ac) = operation_flag;
      array_index = array_index + 1;
    } while (array_index < param_4);
  }
  
  render_counter = (int *)(*(int64_t *)(context_base + 0x1af8) + 0x218);
  *render_counter = *render_counter + -1;
  string_ptr = param_1;
  if (param_1 != (char *)0xffffffffffffffff) {
    while (*string_ptr != '\0') {
      if (((*string_ptr == '#') && (string_ptr[1] == '#')) ||
         (string_ptr = string_ptr + 1, string_ptr == (char *)0xffffffffffffffff)) break;
    }
  }
  FUN_18010e8a0(param_1);
  FUN_18012e4e0();
  return (uint64_t)batch_result;
}

/**
 * 批量数值运算处理函数（简化版）
 * @return 操作结果状态
 */
byte process_batch_numeric_operations_simple(void)
{
  int operation_result;
  int64_t engine_context;
  int64_t render_context;
  byte operation_success;
  int index;
  int *render_counter;
  char *target_string;
  int array_index;
  int64_t context_base;
  byte batch_result;
  int32_t operation_flag;
  
  batch_result = 0;
  FUN_18012e3b0();
  FUN_18012e1b0();
  FUN_18012d4c0(operation_count);
  
  array_index = 0;
  context_base = SYSTEM_DATA_MANAGER_A;
  if (0 < operation_count) {
    do {
      FUN_18012e2d0(array_index);
      operation_success = FUN_180114450(&global_var_2224_ptr, 4, value_array, 0, 0);
      batch_result = batch_result | operation_success;
      func_0x00018012e760(0, *(int32_t *)(context_ptr + 0x1674));
      context_base = SYSTEM_DATA_MANAGER_A;
      render_counter = (int *)(*(int64_t *)(context_base + 0x1af8) + 0x218);
      *render_counter = *render_counter + -1;
      *(int8_t *)(*(int64_t *)(context_base + 0x1af8) + 0xb1) = 1;
      render_context = *(int64_t *)(context_base + 0x1af8);
      operation_result = *(int *)(render_context + 0x1c8);
      index = operation_result + -1;
      *(int *)(render_context + 0x1c8) = index;
      if (index == 0) {
        operation_flag = *(int32_t *)(render_context + 0x284);
      }
      else {
        operation_flag = *(int32_t *)(*(int64_t *)(render_context + 0x1d0) + -8 + (int64_t)operation_result * 4);
      }
      value_array = value_array + 4;
      *(int32_t *)(render_context + 0x1ac) = operation_flag;
      array_index = array_index + 1;
    } while (array_index < operation_count);
  }
  
  render_counter = (int *)(*(int64_t *)(context_base + 0x1af8) + 0x218);
  *render_counter = *render_counter + -1;
  if (target_string != (char *)0xffffffffffffffff) {
    while (*target_string != '\0') {
      if (((*target_string == '#') && (target_string[1] == '#')) ||
         (target_string = target_string + 1, target_string == (char *)0xffffffffffffffff)) break;
    }
  }
  FUN_18010e8a0();
  FUN_18012e4e0();
  return batch_result;
}

/**
 * 循环批量数值运算处理函数
 * @return 操作结果状态
 */
byte process_loop_batch_numeric_operations(void)
{
  int operation_result;
  int64_t engine_context;
  int64_t render_context;
  byte operation_success;
  int index;
  int *render_counter;
  char *target_string;
  int loop_index;
  int64_t context_base;
  byte loop_result;
  int32_t operation_flag;
  
  do {
    FUN_18012e2d0(loop_index);
    operation_success = FUN_180114450(&global_var_2224_ptr, 4, value_array);
    loop_result = loop_result | operation_success;
    func_0x00018012e760(0, *(int32_t *)(context_ptr + 0x1674));
    context_base = SYSTEM_DATA_MANAGER_A;
    render_counter = (int *)(*(int64_t *)(context_base + 0x1af8) + 0x218);
    *render_counter = *render_counter + -1;
    *(int8_t *)(*(int64_t *)(context_base + 0x1af8) + 0xb1) = 1;
    render_context = *(int64_t *)(context_base + 0x1af8);
    operation_result = *(int *)(render_context + 0x1c8);
    index = operation_result + -1;
    *(int *)(render_context + 0x1c8) = index;
    if (index == 0) {
      operation_flag = *(int32_t *)(render_context + 0x284);
    }
    else {
      operation_flag = *(int32_t *)(*(int64_t *)(render_context + 0x1d0) + -8 + (int64_t)operation_result * 4);
    }
    value_array = value_array + 4;
    *(int32_t *)(render_context + 0x1ac) = operation_flag;
    loop_index = loop_index + 1;
  } while (loop_index < operation_count);
  
  render_counter = (int *)(*(int64_t *)(context_base + 0x1af8) + 0x218);
  *render_counter = *render_counter + -1;
  if (target_string != (char *)0xffffffffffffffff) {
    while (*target_string != '\0') {
      if (((*target_string == '#') && (target_string[1] == '#')) ||
         (target_string = target_string + 1, target_string == (char *)0xffffffffffffffff)) break;
    }
  }
  FUN_18010e8a0();
  FUN_18012e4e0();
  return loop_result;
}

/**
 * 清理渲染操作函数
 * @return 清理结果状态
 */
int8_t cleanup_render_operation(void)
{
  int *render_counter;
  char *target_string;
  int8_t cleanup_result;
  
  render_counter = (int *)(*(int64_t *)(engine_context + 0x1af8) + 0x218);
  *render_counter = *render_counter + -1;
  if (target_string != (char *)0xffffffffffffffff) {
    while (*target_string != '\0') {
      if (((*target_string == '#') && (target_string[1] == '#')) ||
         (target_string = target_string + 1, target_string == (char *)0xffffffffffffffff)) break;
    }
  }
  FUN_18010e8a0();
  FUN_18012e4e0();
  return cleanup_result;
}

/**
 * 字符串清理函数
 * @param param_1 上下文参数
 * @param param_2 目标字符串
 * @return 清理结果状态
 */
int8_t cleanup_string_operation(uint64_t param_1, char *param_2)
{
  int8_t cleanup_result;
  
  while (*param_2 != '\0') {
    if (((*param_2 == '#') && (param_2[1] == '#')) ||
       (param_2 = param_2 + 1, param_2 == (char *)0xffffffffffffffff)) break;
  }
  FUN_18010e8a0();
  FUN_18012e4e0();
  return cleanup_result;
}

/**
 * 处理短整型数组并计算浮点数值
 * @param param_1 输出浮点数组
 * @param param_2 输入短整型数组起始指针
 * @param param_3 输入短整型数组结束指针
 * @param param_4 输出位置指针
 * @param param_5 上下文参数
 * @param param_6 操作标志
 * @return 输出浮点数组指针
 */
float * process_ushort_array_to_float(float *param_1, ushort *param_2, ushort *param_3, 
                                      uint64_t *param_4, uint64_t param_5, char param_6)
{
  float current_value;
  float scale_factor;
  ushort current_ushort;
  float *result_ptr;
  float accumulated_value;
  float base_value;
  
  accumulated_value = 0.0;
  result_ptr = *(float **)(engine_context + 0x19f0);
  current_value = *(float *)(engine_context + 0x19f8);
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  scale_factor = *result_ptr;
  
  if (param_2 < param_3) {
    do {
      current_ushort = *param_2;
      param_2 = param_2 + 1;
      if (current_ushort == 10) {
        // 处理换行符
        base_value = *param_1;
        if (*param_1 <= accumulated_value) {
          base_value = accumulated_value;
        }
        accumulated_value = 0.0;
        *param_1 = base_value;
        param_1[1] = current_value + param_1[1];
        if (param_6 != '\0') goto finalize_processing;
      }
      else if (current_ushort != 0xd) {
        // 处理普通字符
        if ((int)(uint)current_ushort < (int)result_ptr[8]) {
          base_value = *(float *)(*(int64_t *)(result_ptr + 10) + (uint64_t)current_ushort * 4);
        }
        else {
          base_value = result_ptr[0x12];
        }
        accumulated_value = accumulated_value + base_value * (current_value / scale_factor);
      }
    } while (param_2 < param_3);
    base_value = *param_1;
    
finalize_processing:
    if (base_value < accumulated_value) {
      *param_1 = accumulated_value;
    }
    if (accumulated_value <= 0.0) goto skip_accumulation;
  }
  else {
skip_accumulation:
    if (param_1[1] != 0.0) goto finalize_output;
  }
  param_1[1] = current_value + param_1[1];
  
finalize_output:
  if (param_4 != (uint64_t *)0x0) {
    *param_4 = param_2;
  }
  return param_1;
}

/**
 * 优化的短整型数组处理函数
 * @param param_1 上下文参数
 * @param param_2 输入短整型数组指针
 * @param param_3 浮点参数1
 * @param param_4 浮点参数2
 * @param param_5 上下文参数
 * @param param_6 上下文参数
 * @param param_7 操作标志
 */
void optimized_ushort_array_processing(uint64_t param_1, ushort *param_2, float param_3, 
                                       float param_4, uint64_t param_5, uint64_t param_6, 
                                       char param_7)
{
  ushort current_ushort;
  ushort *array_end;
  uint64_t *output_ptr;
  float *result_ptr;
  int64_t context_ptr;
  float accumulated_value;
  float timing_factor1;
  float timing_factor2;
  
  do {
    current_ushort = *param_2;
    param_2 = param_2 + 1;
    if (current_ushort == 10) {
      // 处理换行符
      accumulated_value = *result_ptr;
      if (*result_ptr <= param_3) {
        accumulated_value = param_3;
      }
      *result_ptr = accumulated_value;
      result_ptr[1] = param_4 + result_ptr[1];
      param_3 = timing_factor1;
      if (param_7 != '\0') goto finalize_processing;
    }
    else if (current_ushort != 0xd) {
      // 处理普通字符
      if ((int)(uint)current_ushort < *(int *)(context_ptr + 0x20)) {
        accumulated_value = *(float *)(*(int64_t *)(context_ptr + 0x28) + (uint64_t)current_ushort * 4);
      }
      else {
        accumulated_value = *(float *)(context_ptr + 0x48);
      }
      param_3 = param_3 + accumulated_value * timing_factor2;
    }
  } while (param_2 < array_end);
  accumulated_value = *result_ptr;
  
finalize_processing:
  if (accumulated_value < param_3) {
    *result_ptr = param_3;
  }
  if ((timing_factor1 < param_3) || (timing_factor1 == result_ptr[1])) {
    result_ptr[1] = param_4 + result_ptr[1];
  }
  if (output_ptr != (uint64_t *)0x0) {
    *output_ptr = param_2;
  }
  return;
}

/**
 * 简化的浮点数值设置函数
 * @param param_1 上下文参数
 * @param param_2 上下文参数
 * @param param_3 浮点数值
 * @param param_4 输出位置指针
 */
void simplified_float_value_setter(uint64_t param_1, uint64_t param_2, float param_3, 
                                   uint64_t *param_4)
{
  float *result_ptr;
  float timing_factor1;
  float timing_factor2;
  
  *result_ptr = param_3;
  if ((timing_factor2 < param_3) || (timing_factor2 == result_ptr[1])) {
    result_ptr[1] = timing_factor1 + result_ptr[1];
  }
  if (param_4 != (uint64_t *)0x0) {
    *param_4 = param_2;
  }
  return;
}
