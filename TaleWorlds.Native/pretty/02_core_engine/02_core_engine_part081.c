#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part081.c - 核心引擎模块第081部分
// 包含10个函数，主要涉及文本处理、位置计算和状态管理

/**
 * 处理文本布局和位置计算的主函数
 * 
 * 此函数处理文本行分割、位置计算和状态更新，支持复杂的文本布局需求
 * 包含字符查找、位置调整和边界检查等功能
 */
void process_text_layout_and_position_calculation(void)
{
  float temp_float_1;
  float *float_pointer;
  longlong long_var_1;
  char char_var;
  ulonglong ulong_var_1;
  ulonglong ulong_var_2;
  ulonglong unaff_rbx;
  longlong unaff_rbp;
  longlong unaff_rsi;
  ulonglong unaff_rdi;
  longlong long_var_2;
  ulonglong unaff_r12;
  uint uint_var_1;
  uint uint_var_2;
  int int_var;
  float temp_float_2;
  float unaff_xmm6_da;
  float temp_float_3;
  float unaff_xmm8_da;
  int32_t unaff_xmm9_da;
  float temp_float_4;
  int32_t unaff_xmm9_dc;
  float unaff_xmm10_da;
  float unaff_xmm11_da;
  int32_t unaff_xmm12_da;
  int32_t unaff_xmm12_dc;
  float unaff_xmm13_da;
  float unaff_xmm14_da;
  int32_t unaff_xmm15_da;
  int32_t unaff_xmm15_dc;
  float stack_offset_50;
  float stack_offset_54;
  float in_stack_58;
  float stack_offset_5c;
  int32_t in_stack_60;
  int32_t in_stack_68;
  int32_t in_stack_90;
  int32_t in_stack_98;
  int32_t in_stack_c0;
  int32_t in_stack_c8;
  
  char_var = (char)unaff_r12;
  uint_var_2 = (uint)unaff_r12;
  
  // 检查字符匹配状态
  if (*(char *)(unaff_rsi + 0x2e38) == char_var) {
    *(float *)(unaff_rbp + 0x44) = unaff_xmm6_da;
    int_var = (int)((stack_offset_54 - unaff_xmm13_da) / unaff_xmm10_da);
    if (0 < int_var) {
      ulong_var_2 = unaff_r12 & 0xffffffff;
      uint_var_1 = uint_var_2;
      if (unaff_rdi < unaff_rbx) {
        do {
          uint_var_1 = (uint)ulong_var_2;
          if (int_var <= (int)uint_var_1) break;
          ulong_var_1 = memchr(unaff_rdi, 10, unaff_rbx - unaff_rdi);
          if (ulong_var_1 == 0) {
            ulong_var_1 = unaff_rbx;
          }
          uint_var_1 = uint_var_1 + 1;
          ulong_var_2 = (ulonglong)uint_var_1;
          unaff_rdi = ulong_var_1 + 1;
        } while (unaff_rdi < unaff_rbx);
      }
      unaff_xmm6_da = (float)(int)uint_var_1 * unaff_xmm10_da + unaff_xmm13_da;
      *(float *)(unaff_rbp + 0x44) = unaff_xmm6_da;
    }
  }
  
  // 主处理循环
  if (unaff_rdi < unaff_rbx) {
    temp_float_4 = unaff_xmm6_da;
    temp_float_3 = unaff_xmm6_da;
    in_stack_60 = unaff_xmm15_da;
    in_stack_68 = unaff_xmm15_dc;
    in_stack_90 = unaff_xmm12_da;
    in_stack_98 = unaff_xmm12_dc;
    in_stack_c0 = unaff_xmm9_da;
    in_stack_c8 = unaff_xmm9_dc;
    do {
      temp_float_4 = temp_float_4 + unaff_xmm10_da;
      long_var_2 = *(longlong *)(unaff_rsi + 0x1af8);
      
      // 边界检查条件
      if (((((temp_float_4 < *(float *)(long_var_2 + 0x22c) || temp_float_4 == *(float *)(long_var_2 + 0x22c)) ||
            (*(float *)(long_var_2 + 0x234) <= unaff_xmm6_da)) ||
           (unaff_xmm14_da + 3.4028235e+38 < *(float *)(long_var_2 + 0x228) ||
            unaff_xmm14_da + 3.4028235e+38 == *(float *)(long_var_2 + 0x228))) ||
          (*(float *)(long_var_2 + 0x230) <= unaff_xmm14_da)) && (*(char *)(unaff_rsi + 0x2e38) == char_var)
         ) break;
         
      ulong_var_1 = memchr(unaff_rdi, 10, unaff_rbx - unaff_rdi);
      float_pointer = *(float **)(unaff_rsi + 0x19f0);
      temp_float_1 = *(float *)(unaff_rsi + 0x19f8);
      if (ulong_var_1 == 0) {
        ulong_var_1 = unaff_rbx;
      }
      temp_float_2 = unaff_xmm8_da;
      if (unaff_rdi != ulong_var_1) {
        calculate_text_position(float_pointer, &stack_offset_50, temp_float_1, 0x7f7fffff, 0xbf800000);
        if (unaff_xmm8_da < stack_offset_50) {
          stack_offset_50 = stack_offset_50 - temp_float_1 / *float_pointer;
        }
        stack_offset_50 = (float)(int)(stack_offset_50 + 0.95);
        temp_float_2 = stack_offset_50;
      }
      if (unaff_xmm11_da < temp_float_2) {
        *(float *)(unaff_rbp + 0x48) = temp_float_2;
        unaff_xmm11_da = temp_float_2;
      }
      process_text_line(*(uint64_t *)(unaff_rbp + 0x40), unaff_rdi, ulong_var_1, 0);
      unaff_rsi = _DAT_180c8a9b0;
      temp_float_3 = temp_float_3 + unaff_xmm10_da;
      unaff_rdi = ulong_var_1 + 1;
      unaff_xmm6_da = unaff_xmm6_da + unaff_xmm10_da;
      *(float *)(unaff_rbp + 0x44) = temp_float_3;
    } while (unaff_rdi < unaff_rbx);
    
    ulong_var_2 = unaff_r12 & 0xffffffff;
    while (unaff_rdi < unaff_rbx) {
      ulong_var_1 = memchr(unaff_rdi, 10, unaff_rbx - unaff_rdi);
      if (ulong_var_1 == 0) {
        ulong_var_1 = unaff_rbx;
      }
      uint_var_2 = (int)ulong_var_2 + 1;
      ulong_var_2 = (ulonglong)uint_var_2;
      unaff_rdi = ulong_var_1 + 1;
    }
    unaff_xmm6_da = temp_float_3 + (float)(int)uint_var_2 * unaff_xmm10_da;
  }
  
  // 最终位置计算和状态更新
  *(float *)(unaff_rbp + 0x4c) = unaff_xmm6_da - unaff_xmm13_da;
  temp_float_4 = unaff_xmm13_da + (unaff_xmm6_da - unaff_xmm13_da);
  temp_float_3 = unaff_xmm14_da + unaff_xmm11_da;
  update_render_state(unaff_rbp + 0x48);
  long_var_2 = *(longlong *)(unaff_rsi + 0x1af8);
  *(ulonglong *)(long_var_2 + 0x144) = unaff_r12;
  *(float *)(long_var_2 + 0x14c) = unaff_xmm14_da;
  *(float *)(long_var_2 + 0x150) = unaff_xmm13_da;
  *(float *)(long_var_2 + 0x154) = temp_float_3;
  *(float *)(long_var_2 + 0x158) = temp_float_4;
  long_var_1 = *(longlong *)(unaff_rsi + 0x1af8);
  if (((((*(float *)(long_var_1 + 0x22c) <= temp_float_4 && temp_float_4 != *(float *)(long_var_1 + 0x22c)) &&
        (unaff_xmm13_da < *(float *)(long_var_1 + 0x234))) &&
       ((*(float *)(long_var_1 + 0x228) <= temp_float_3 && temp_float_3 != *(float *)(long_var_1 + 0x228) &&
        (unaff_xmm14_da < *(float *)(long_var_1 + 0x230))))) || (*(char *)(unaff_rsi + 0x2e38) != char_var))
     && (in_stack_58 = temp_float_3, stack_offset_5c = temp_float_4,
        char_var = validate_text_layout(&stack_offset_50, &in_stack_58, 1), char_var != '\0')) {
    *(uint *)(long_var_2 + 0x148) = *(uint *)(long_var_2 + 0x148) | 1;
  }
  return;
}

/**
 * 简化版本的文本布局处理函数
 * 
 * 此函数是process_text_layout_and_position_calculation的简化版本，
 * 去除了部分复杂的边界检查，保持核心功能不变
 */
void process_text_layout_simple(void)
{
  float temp_float_1;
  float *float_pointer;
  longlong long_var_1;
  char char_var;
  ulonglong ulong_var_1;
  ulonglong ulong_var_2;
  ulonglong unaff_rbx;
  longlong unaff_rbp;
  longlong unaff_rsi;
  ulonglong unaff_rdi;
  longlong long_var_2;
  ulonglong unaff_r12;
  uint uint_var_1;
  float temp_float_2;
  float unaff_xmm6_da;
  float unaff_xmm8_da;
  float temp_float_3;
  float unaff_xmm10_da;
  float unaff_xmm11_da;
  float temp_float_4;
  float unaff_xmm13_da;
  float unaff_xmm14_da;
  float in_stack_50;
  float in_stack_58;
  float stack_offset_5c;
  
  temp_float_3 = unaff_xmm6_da + unaff_xmm10_da;
  temp_float_4 = unaff_xmm6_da;
  
  do {
    long_var_2 = *(longlong *)(unaff_rsi + 0x1af8);
    
    // 简化的边界检查
    if (((((temp_float_3 < *(float *)(long_var_2 + 0x22c) || temp_float_3 == *(float *)(long_var_2 + 0x22c)) ||
          (*(float *)(long_var_2 + 0x234) <= temp_float_4)) ||
         (unaff_xmm14_da + 3.4028235e+38 < *(float *)(long_var_2 + 0x228) ||
          unaff_xmm14_da + 3.4028235e+38 == *(float *)(long_var_2 + 0x228))) ||
        (*(float *)(long_var_2 + 0x230) <= unaff_xmm14_da)) &&
       (*(char *)(unaff_rsi + 0x2e38) == (char)unaff_r12)) break;
       
    ulong_var_1 = memchr(unaff_rdi, 10, unaff_rbx - unaff_rdi);
    float_pointer = *(float **)(unaff_rsi + 0x19f0);
    temp_float_1 = *(float *)(unaff_rsi + 0x19f8);
    if (ulong_var_1 == 0) {
      ulong_var_1 = unaff_rbx;
    }
    temp_float_2 = unaff_xmm8_da;
    if (unaff_rdi != ulong_var_1) {
      calculate_text_position(float_pointer, &in_stack_50, temp_float_1, 0x7f7fffff, 0xbf800000);
      if (unaff_xmm8_da < in_stack_50) {
        in_stack_50 = in_stack_50 - temp_float_1 / *float_pointer;
      }
      in_stack_50 = (float)(int)(in_stack_50 + 0.95);
      temp_float_2 = in_stack_50;
    }
    if (unaff_xmm11_da < temp_float_2) {
      *(float *)(unaff_rbp + 0x48) = temp_float_2;
      unaff_xmm11_da = temp_float_2;
    }
    process_text_line(*(uint64_t *)(unaff_rbp + 0x40), unaff_rdi, ulong_var_1, 0);
    unaff_rsi = _DAT_180c8a9b0;
    unaff_xmm6_da = unaff_xmm6_da + unaff_xmm10_da;
    unaff_rdi = ulong_var_1 + 1;
    temp_float_4 = temp_float_4 + unaff_xmm10_da;
    temp_float_3 = temp_float_3 + unaff_xmm10_da;
    *(float *)(unaff_rbp + 0x44) = unaff_xmm6_da;
  } while (unaff_rdi < unaff_rbx);
  
  ulong_var_1 = unaff_r12 & 0xffffffff;
  uint_var_1 = (uint)unaff_r12;
  while (unaff_rdi < unaff_rbx) {
    ulong_var_2 = memchr(unaff_rdi, 10, unaff_rbx - unaff_rdi);
    if (ulong_var_2 == 0) {
      ulong_var_2 = unaff_rbx;
    }
    uint_var_1 = (int)ulong_var_1 + 1;
    ulong_var_1 = (ulonglong)uint_var_1;
    unaff_rdi = ulong_var_2 + 1;
  }
  
  temp_float_4 = (unaff_xmm6_da + (float)(int)uint_var_1 * unaff_xmm10_da) - unaff_xmm13_da;
  *(float *)(unaff_rbp + 0x4c) = temp_float_4;
  temp_float_4 = unaff_xmm13_da + temp_float_4;
  temp_float_3 = unaff_xmm14_da + unaff_xmm11_da;
  update_render_state(unaff_rbp + 0x48);
  long_var_2 = *(longlong *)(unaff_rsi + 0x1af8);
  *(ulonglong *)(long_var_2 + 0x144) = unaff_r12;
  *(float *)(long_var_2 + 0x14c) = unaff_xmm14_da;
  *(float *)(long_var_2 + 0x150) = unaff_xmm13_da;
  *(float *)(long_var_2 + 0x154) = temp_float_3;
  *(float *)(long_var_2 + 0x158) = temp_float_4;
  long_var_1 = *(longlong *)(unaff_rsi + 0x1af8);
  if (((((*(float *)(long_var_1 + 0x22c) <= temp_float_4 && temp_float_4 != *(float *)(long_var_1 + 0x22c)) &&
        (unaff_xmm13_da < *(float *)(long_var_1 + 0x234))) &&
       ((*(float *)(long_var_1 + 0x228) <= temp_float_3 && temp_float_3 != *(float *)(long_var_1 + 0x228) &&
        (unaff_xmm14_da < *(float *)(long_var_1 + 0x230))))) ||
      (*(char *)(unaff_rsi + 0x2e38) != (char)unaff_r12)) &&
     (in_stack_58 = temp_float_3, stack_offset_5c = temp_float_4,
     char_var = validate_text_layout(&in_stack_50, &in_stack_58, 1), char_var != '\0')) {
    *(uint *)(long_var_2 + 0x148) = *(uint *)(long_var_2 + 0x148) | 1;
  }
  return;
}

/**
 * 批量文本行处理函数
 * 
 * 此函数专门处理大量文本行的快速处理，优化了性能
 */
void process_text_lines_batch(void)
{
  longlong long_var_1;
  char char_var;
  ulonglong ulong_var_1;
  ulonglong unaff_rbx;
  longlong unaff_rbp;
  longlong unaff_rsi;
  ulonglong unaff_rdi;
  longlong long_var_2;
  uint64_t unaff_r12;
  int unaff_r14d;
  float unaff_xmm6_da;
  float temp_float_1;
  float temp_float_2;
  float unaff_xmm10_da;
  float unaff_xmm11_da;
  float unaff_xmm13_da;
  float unaff_xmm14_da;
  int32_t in_stack_50;
  float in_stack_58;
  float stack_offset_5c;
  
  // 批量处理文本行
  do {
    ulong_var_1 = memchr(unaff_rdi, 10, unaff_rbx - unaff_rdi);
    if (ulong_var_1 == 0) {
      ulong_var_1 = unaff_rbx;
    }
    unaff_r14d = unaff_r14d + 1;
    unaff_rdi = ulong_var_1 + 1;
  } while (unaff_rdi < unaff_rbx);
  
  // 计算最终位置
  temp_float_1 = (unaff_xmm6_da + (float)unaff_r14d * unaff_xmm10_da) - unaff_xmm13_da;
  *(float *)(unaff_rbp + 0x4c) = temp_float_1;
  temp_float_1 = unaff_xmm13_da + temp_float_1;
  temp_float_2 = unaff_xmm14_da + unaff_xmm11_da;
  update_render_state(unaff_rbp + 0x48);
  long_var_2 = *(longlong *)(unaff_rsi + 0x1af8);
  *(uint64_t *)(long_var_2 + 0x144) = unaff_r12;
  *(float *)(long_var_2 + 0x14c) = unaff_xmm14_da;
  *(float *)(long_var_2 + 0x150) = unaff_xmm13_da;
  *(float *)(long_var_2 + 0x154) = temp_float_2;
  *(float *)(long_var_2 + 0x158) = temp_float_1;
  long_var_1 = *(longlong *)(unaff_rsi + 0x1af8);
  if (((((*(float *)(long_var_1 + 0x22c) <= temp_float_1 && temp_float_1 != *(float *)(long_var_1 + 0x22c)) &&
        (unaff_xmm13_da < *(float *)(long_var_1 + 0x234))) &&
       (*(float *)(long_var_1 + 0x228) <= temp_float_2 && temp_float_2 != *(float *)(long_var_1 + 0x228))) &&
      (unaff_xmm14_da < *(float *)(long_var_1 + 0x230))) ||
     (*(char *)(unaff_rsi + 0x2e38) != (char)unaff_r12)) {
    in_stack_58 = temp_float_2;
    stack_offset_5c = temp_float_1;
    char_var = validate_text_layout(&in_stack_50, &in_stack_58, 1);
    if (char_var != '\0') {
      *(uint *)(long_var_2 + 0x148) = *(uint *)(long_var_2 + 0x148) | 1;
    }
  }
  return;
}

/**
 * 快速文本处理函数
 * 
 * 此函数提供最简化的文本处理功能，用于快速场景
 */
void process_text_fast(void)
{
  longlong long_var_1;
  char char_var;
  longlong unaff_rbp;
  longlong unaff_rsi;
  longlong long_var_2;
  uint64_t unaff_r12;
  float temp_float_1;
  float unaff_xmm6_da;
  float temp_float_2;
  float unaff_xmm11_da;
  float unaff_xmm13_da;
  float unaff_xmm14_da;
  int32_t in_stack_50;
  float in_stack_58;
  float stack_offset_5c;
  
  // 快速计算位置
  temp_float_1 = unaff_xmm13_da + unaff_xmm6_da;
  temp_float_2 = unaff_xmm14_da + unaff_xmm11_da;
  update_render_state(unaff_rbp + 0x48);
  long_var_2 = *(longlong *)(unaff_rsi + 0x1af8);
  *(uint64_t *)(long_var_2 + 0x144) = unaff_r12;
  *(float *)(long_var_2 + 0x14c) = unaff_xmm14_da;
  *(float *)(long_var_2 + 0x150) = unaff_xmm13_da;
  *(float *)(long_var_2 + 0x154) = temp_float_2;
  *(float *)(long_var_2 + 0x158) = temp_float_1;
  long_var_1 = *(longlong *)(unaff_rsi + 0x1af8);
  if (((((*(float *)(long_var_1 + 0x22c) <= temp_float_1 && temp_float_1 != *(float *)(long_var_1 + 0x22c)) &&
        (unaff_xmm13_da < *(float *)(long_var_1 + 0x234))) &&
       (*(float *)(long_var_1 + 0x228) <= temp_float_2 && temp_float_2 != *(float *)(long_var_1 + 0x228))) &&
      (unaff_xmm14_da < *(float *)(long_var_1 + 0x230))) ||
     (*(char *)(unaff_rsi + 0x2e38) != (char)unaff_r12)) {
    in_stack_58 = temp_float_2;
    stack_offset_5c = temp_float_1;
    char_var = validate_text_layout(&in_stack_50, &in_stack_58, 1);
    if (char_var != '\0') {
      *(uint *)(long_var_2 + 0x148) = *(uint *)(long_var_2 + 0x148) | 1;
    }
  }
  return;
}

/**
 * 文本布局验证函数
 * 
 * 此函数验证文本布局的有效性，并更新相应的状态标志
 */
void validate_text_layout_bounds(void)
{
  float *float_pointer;
  int8_t in_al;
  char char_var;
  uint8_t in_register_1;
  longlong unaff_rsi;
  longlong in_r10;
  char unaff_r12b;
  float unaff_xmm7_da;
  float unaff_xmm13_da;
  float unaff_xmm14_da;
  
  // 验证边界条件
  if ((((unaff_xmm13_da < *(float *)(CONCAT71(in_register_1, in_al) + 0x234)) &&
       (float_pointer = (float *)(CONCAT71(in_register_1, in_al) + 0x228),
       *float_pointer <= unaff_xmm7_da && unaff_xmm7_da != *float_pointer)) &&
      (unaff_xmm14_da < *(float *)(CONCAT71(in_register_1, in_al) + 0x230))) ||
     (*(char *)(unaff_rsi + 0x2e38) != unaff_r12b)) {
    char_var = validate_text_layout(&stack_offset_50, &in_stack_58, 1);
    if (char_var != '\0') {
      *(uint *)(in_r10 + 0x148) = *(uint *)(in_r10 + 0x148) | 1;
    }
  }
  return;
}

/**
 * 空操作函数（占位符）
 * 
 * 此函数为空实现，可能用于接口兼容性或未来扩展
 */
void empty_function_placeholder_1(void)
{
  return;
}

/**
 * 文本处理包装函数
 * 
 * 此函数包装了底层的文本处理功能，提供统一的接口
 */
void text_processing_wrapper(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
  uint64_t stack_x_10;
  uint64_t stack_x_18;
  uint64_t stack_x_20;
  
  stack_x_10 = param_2;
  stack_x_18 = param_3;
  stack_x_20 = param_4;
  process_text_with_params(param_1, &stack_x_10);
  return;
}

/**
 * 带参数的文本处理函数
 * 
 * 此函数处理带参数的文本处理请求，支持更灵活的配置
 */
void process_text_with_params(uint64_t param_1, uint64_t param_2)
{
  longlong long_var_1;
  longlong long_var_2;
  int int_var;
  
  long_var_2 = _DAT_180c8a9b0;
  *(int8_t *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
  if (*(char *)(*(longlong *)(long_var_2 + 0x1af8) + 0xb4) == '\0') {
    long_var_1 = long_var_2 + 0x3054;
    int_var = buffer_operation(long_var_1, 0xc01, param_1, param_2);
    if (long_var_1 != 0) {
      if ((int_var == -1) || (0xc00 < int_var)) {
        int_var = 0xc00;
      }
      *(int8_t *)(int_var + long_var_1) = 0;
    }
    finalize_text_processing(long_var_1, long_var_2 + 0x3054 + (longlong)int_var);
  }
  return;
}

/**
 * 缓冲区操作函数
 * 
 * 此函数执行缓冲区相关的操作，包括写入和清理
 */
void buffer_operation_wrapper(uint64_t param_1)
{
  longlong long_var_1;
  int int_var;
  longlong unaff_rbx;
  
  long_var_1 = unaff_rbx + 0x3054;
  int_var = buffer_operation(long_var_1, 0xc01, param_1);
  if (long_var_1 != 0) {
    if ((int_var == -1) || (0xc00 < int_var)) {
      int_var = 0xc00;
    }
    *(int8_t *)(int_var + long_var_1) = 0;
  }
  finalize_text_processing(long_var_1, unaff_rbx + 0x3054 + (longlong)int_var);
  return;
}

/**
 * 空操作函数（占位符）
 * 
 * 此函数为空实现，可能用于接口兼容性或未来扩展
 */
void empty_function_placeholder_2(void)
{
  return;
}

// 以下是函数引用声明，这些函数在其他文件中定义
void calculate_text_position(float *float_ptr, float *stack_ptr, float param_1, uint param_2, uint param_3);
void process_text_line(uint64_t param_1, uint64_t param_2, uint64_t param_3, int param_4);
void update_render_state(uint64_t param_1);
char validate_text_layout(uint64_t param_1, uint64_t param_2, int param_3);
void finalize_text_processing(uint64_t param_1, uint64_t param_2);
int buffer_operation(uint64_t param_1, int param_2, uint64_t param_3, uint64_t param_4);