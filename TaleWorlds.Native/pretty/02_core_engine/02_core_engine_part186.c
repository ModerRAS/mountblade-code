#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part186.c - 核心引擎模块第186部分
// 本文件包含12个函数，主要处理内存管理、数据结构操作和字符串处理

// 函数: 处理核心引擎内存分配和数据结构初始化
// 参数:
//   param_1: 上下文指针
//   param_2: 数据缓冲区指针
//   param_3: 配置参数指针
//   param_4: 状态标志指针
void process_engine_memory_allocation(longlong param_1, uint64_t *param_2, uint64_t *param_3, uint64_t param_4)

{
  uint *buffer_ptr;
  int *status_ptr;
  uint64_t *data_ptr1;
  uint64_t *data_ptr2;
  float float_val1;
  float float_val2;
  float float_val3;
  int index_val;
  void *temp_ptr1;
  longlong context_ptr;
  uint64_t temp_val1;
  char flag_char;
  int temp_int1;
  longlong register_rax;
  longlong temp_long1;
  longlong temp_long2;
  void *temp_ptr2;
  uint64_t register_rbx;
  longlong temp_long3;
  uint64_t register_rsi;
  uint64_t register_rdi;
  ulonglong counter_val;
  int32_t temp_flag1;
  uint64_t register_r12;
  uint64_t register_r13;
  ulonglong temp_ulong1;
  int32_t register_xmm6_a;
  int32_t register_xmm6_b;
  int32_t register_xmm6_c;
  int32_t register_xmm6_d;
  int32_t stack_data[2];
  uint64_t stack_param90;
  
  // 保存寄存器状态到栈上
  *(uint64_t *)(register_rax + 0x10) = register_rbx;
  *(uint64_t *)(register_rax + 0x20) = register_rsi;
  *(uint64_t *)(register_rax + -8) = register_rdi;
  *(uint64_t *)(register_rax + -0x10) = register_r12;
  *(uint64_t *)(register_rax + -0x18) = register_r13;
  *(int32_t *)(register_rax + -0x38) = register_xmm6_a;
  *(int32_t *)(register_rax + -0x34) = register_xmm6_b;
  *(int32_t *)(register_rax + -0x30) = register_xmm6_c;
  *(int32_t *)(register_rax + -0x2c) = register_xmm6_d;
  
  // 初始化内存管理器
  initialize_memory_manager(2, 0);
  temp_long3 = _DAT_180c8a9b0;
  counter_val = 0;
  temp_flag1 = 0;
  
  // 设置数据结构初始值
  *(uint64_t *)(_DAT_180c8a9b0 + 0x1bf4) = *param_2;
  *(uint64_t *)(temp_long3 + 0x1bfc) = 0;
  *(int32_t *)(temp_long3 + 0x1bd0) = 1;
  *(int8_t *)(temp_long3 + 0x1c14) = 1;
  *(uint64_t *)(temp_long3 + 0x1c04) = *param_3;
  *(int32_t *)(temp_long3 + 0x1bd4) = 1;
  
  // 初始化字符串处理模块
  initialize_string_processor(&UNK_180a08910, 0, 0x907);
  temp_long3 = _DAT_180c8a9b0;
  
  // 设置处理标志
  *(int8_t *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
  temp_long3 = *(longlong *)(temp_long3 + 0x1af8);
  buffer_ptr = (uint *)(temp_long3 + 0x1a8);
  *buffer_ptr = *buffer_ptr | 1;
  
  // 激活数据结构处理器
  activate_data_structure_processor(temp_long3 + 0x1b8);
  temp_long3 = _DAT_180c8a9b0;
  
  // 检查是否需要初始化默认值
  if (*(char *)(param_1 + 0x74) == '\0') {
    stack_data[0] = 5;
    process_buffer_operation(_DAT_180c8a9b0 + 0x1b80, stack_data);
    *(uint64_t *)(temp_long3 + 0x1718) = 0x3f8000003f800000;
    *(uint64_t *)(temp_long3 + 0x1720) = 0x3f8000003f800000;
    initialize_default_values(&UNK_180a08900);
    temp_long3 = _DAT_180c8a9b0;
    
    // 处理数据队列操作
    data_ptr1 = (uint64_t *)
             (*(longlong *)(_DAT_180c8a9b0 + 0x1b88) + -0x10 +
             (longlong)*(int *)(_DAT_180c8a9b0 + 0x1b80) * 0x14);
    temp_val1 = data_ptr1[1];
    data_ptr2 = (uint64_t *)
             (_DAT_180c8a9b0 + 0x16c8 +
             (longlong)
             *(int *)(*(longlong *)(_DAT_180c8a9b0 + 0x1b88) + -0x14 +
                     (longlong)*(int *)(_DAT_180c8a9b0 + 0x1b80) * 0x14) * 0x10);
    *data_ptr2 = *data_ptr1;
    data_ptr2[1] = temp_val1;
    *(int *)(temp_long3 + 0x1b80) = *(int *)(temp_long3 + 0x1b80) + -1;
  }
  
  // 处理数据块循环
  if (*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 5 != 0) {
    stack_param90 = 0;
    temp_ulong1 = counter_val;
    do {
      index_val = *(int *)(param_1 + 100);
      temp_int1 = (int)counter_val;
      if (index_val == temp_int1) {
        stack_data[0] = 5;
        process_buffer_operation(temp_long3 + 0x1b80, stack_data);
        *(uint64_t *)(temp_long3 + 0x1718) = 0x3f800000;
        *(uint64_t *)(temp_long3 + 0x1720) = 0x3f80000000000000;
      }
      
      // 处理数据项
      process_data_item(counter_val);
      temp_ptr1 = *(void **)(*(longlong *)(param_1 + 0x20) + 8 + temp_ulong1);
      temp_ptr2 = &DAT_18098bc73;
      if (temp_ptr1 != (void *)0x0) {
        temp_ptr2 = temp_ptr1;
      }
      
      // 验证数据项
      flag_char = validate_data_item(temp_ptr2, index_val == temp_int1, 0, &stack0x00000090);
      if (flag_char != '\0') {
        *(int *)(param_1 + 0x68) = temp_int1;
      }
      
      temp_long3 = _DAT_180c8a9b0;
      status_ptr = (int *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0x218);
      *status_ptr = *status_ptr + -1;
      
      if (index_val == temp_int1) {
        if (*(char *)(param_1 + 0x70) != '\0') {
          *(int8_t *)(*(longlong *)(temp_long3 + 0x1af8) + 0xb1) = 1;
          context_ptr = *(longlong *)(temp_long3 + 0x1af8);
          float_val1 = *(float *)(context_ptr + 0x130);
          float_val2 = *(float *)(context_ptr + 0x10c);
          float_val3 = *(float *)(context_ptr + 0x44);
          *(int8_t *)(context_ptr + 0xb1) = 1;
          context_ptr = *(longlong *)(temp_long3 + 0x1af8);
          *(int32_t *)(context_ptr + 0xa0) = 0x3f000000;
          *(float *)(context_ptr + 0x98) =
               (float)(int)((float_val2 - float_val3) + float_val1 * 0.5 + *(float *)(context_ptr + 0x90));
          *(int8_t *)(param_1 + 0x70) = 0;
        }
        
        // 处理队列操作
        data_ptr1 = (uint64_t *)
                 (*(longlong *)(temp_long3 + 0x1b88) + -0x10 +
                 (longlong)*(int *)(temp_long3 + 0x1b80) * 0x14);
        temp_val1 = data_ptr1[1];
        data_ptr2 = (uint64_t *)
                 (temp_long3 + 0x16c8 +
                 (longlong)
                 *(int *)(*(longlong *)(temp_long3 + 0x1b88) + -0x14 +
                         (longlong)*(int *)(temp_long3 + 0x1b80) * 0x14) * 0x10);
        *data_ptr2 = *data_ptr1;
        data_ptr2[1] = temp_val1;
        *(int *)(temp_long3 + 0x1b80) = *(int *)(temp_long3 + 0x1b80) + -1;
      }
      counter_val = (ulonglong)(temp_int1 + 1U);
      temp_ulong1 = temp_ulong1 + 0x20;
    } while ((ulonglong)(longlong)(int)(temp_int1 + 1U) <
             (ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 5));
  }
  
  // 设置最终状态
  *(bool *)param_4 =
       *(longlong *)(temp_long3 + 0x1c98) == *(longlong *)(*(longlong *)(temp_long3 + 0x1af8) + 0x3a8);
  *(int8_t *)(*(longlong *)(temp_long3 + 0x1af8) + 0xb1) = 1;
  temp_long3 = *(longlong *)(temp_long3 + 0x1af8);
  index_val = *(int *)(temp_long3 + 0x1b8);
  temp_int1 = index_val + -1;
  *(int *)(temp_long3 + 0x1b8) = temp_int1;
  if (temp_int1 != 0) {
    temp_flag1 = *(int32_t *)(*(longlong *)(temp_long3 + 0x1c0) + -8 + (longlong)index_val * 4);
  }
  *(int32_t *)(temp_long3 + 0x1a8) = temp_flag1;
  
  // 清理资源
  cleanup_resources();
  context_ptr = _DAT_180c8a9b0;
  temp_long1 = (longlong)*(int *)(_DAT_180c8a9b0 + 0x1b90);
  temp_long3 = *(longlong *)(_DAT_180c8a9b0 + 0x1b98);
  temp_long2 = (longlong)*(int *)(temp_long3 + -0xc + temp_long1 * 0xc);
  temp_ulong1 = (ulonglong)*(uint *)(&UNK_18098d188 + temp_long2 * 0xc);
  
  // 处理最终数据块
  if (*(int *)(&UNK_18098d180 + temp_long2 * 0xc) == 4) {
    if (*(int *)(&UNK_18098d184 + temp_long2 * 0xc) == 1) {
      *(int32_t *)(temp_ulong1 + 0x1628 + _DAT_180c8a9b0) =
           *(int32_t *)(temp_long3 + -8 + temp_long1 * 0xc);
      *(int *)(context_ptr + 0x1b90) = *(int *)(context_ptr + 0x1b90) + -1;
      return;
    }
    if (*(int *)(&UNK_18098d184 + temp_long2 * 0xc) == 2) {
      *(int32_t *)(temp_ulong1 + 0x1628 + _DAT_180c8a9b0) =
           *(int32_t *)(temp_long3 + -8 + temp_long1 * 0xc);
      *(int32_t *)(temp_ulong1 + 0x162c + context_ptr) = *(int32_t *)(temp_long3 + -4 + temp_long1 * 0xc);
    }
  }
  *(int *)(context_ptr + 0x1b90) = *(int *)(context_ptr + 0x1b90) + -1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 优化的内存分配处理函数
// 使用寄存器传递参数以提高性能
void optimized_memory_allocation_handler(void)

{
  int *status_ptr;
  uint64_t *data_ptr1;
  uint64_t *data_ptr2;
  float float_val1;
  float float_val2;
  float float_val3;
  int index_val;
  void *temp_ptr1;
  longlong context_ptr;
  uint64_t temp_val1;
  longlong temp_long1;
  char flag_char;
  int temp_int1;
  longlong temp_long2;
  longlong temp_long3;
  void *temp_ptr2;
  longlong register_rbx;
  longlong register_rsi;
  int register_edi;
  ulonglong register_r12;
  uint64_t register_r13;
  ulonglong temp_ulong1;
  int32_t stack_data[2];
  
  temp_ulong1 = register_r12;
  do {
    index_val = *(int *)(register_rsi + 100);
    if (index_val == register_edi) {
      stack_data[0] = 5;
      process_buffer_operation(register_rbx + 0x1b80, stack_data);
      *(uint64_t *)(register_rbx + 0x1718) = 0x3f800000;
      *(uint64_t *)(register_rbx + 0x1720) = 0x3f80000000000000;
    }
    
    // 处理数据项
    process_data_item(register_edi);
    temp_ptr1 = *(void **)(*(longlong *)(register_rsi + 0x20) + 8 + temp_ulong1);
    temp_ptr2 = &DAT_18098bc73;
    if (temp_ptr1 != (void *)0x0) {
      temp_ptr2 = temp_ptr1;
    }
    
    // 验证数据项
    flag_char = validate_data_item(temp_ptr2, index_val == register_edi, 0, &stack0x00000090);
    if (flag_char != '\0') {
      *(int *)(register_rsi + 0x68) = register_edi;
    }
    
    register_rbx = _DAT_180c8a9b0;
    status_ptr = (int *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0x218);
    *status_ptr = *status_ptr + -1;
    
    if (index_val == register_edi) {
      if (*(char *)(register_rsi + 0x70) != (char)register_r12) {
        *(int8_t *)(*(longlong *)(register_rbx + 0x1af8) + 0xb1) = 1;
        context_ptr = *(longlong *)(register_rbx + 0x1af8);
        float_val1 = *(float *)(context_ptr + 0x130);
        float_val2 = *(float *)(context_ptr + 0x10c);
        float_val3 = *(float *)(context_ptr + 0x44);
        *(int8_t *)(context_ptr + 0xb1) = 1;
        context_ptr = *(longlong *)(register_rbx + 0x1af8);
        *(int32_t *)(context_ptr + 0xa0) = 0x3f000000;
        *(float *)(context_ptr + 0x98) =
             (float)(int)((float_val2 - float_val3) + float_val1 * 0.5 + *(float *)(context_ptr + 0x90));
        *(char *)(register_rsi + 0x70) = (char)register_r12;
      }
      
      // 处理队列操作
      data_ptr1 = (uint64_t *)
               (*(longlong *)(register_rbx + 0x1b88) + -0x10 +
               (longlong)*(int *)(register_rbx + 0x1b80) * 0x14);
      temp_val1 = data_ptr1[1];
      data_ptr2 = (uint64_t *)
               (register_rbx + 0x16c8 +
               (longlong)
               *(int *)(*(longlong *)(register_rbx + 0x1b88) + -0x14 +
                       (longlong)*(int *)(register_rbx + 0x1b80) * 0x14) * 0x10);
      *data_ptr2 = *data_ptr1;
      data_ptr2[1] = temp_val1;
      *(int *)(register_rbx + 0x1b80) = *(int *)(register_rbx + 0x1b80) + -1;
    }
    register_edi = register_edi + 1;
    temp_ulong1 = temp_ulong1 + 0x20;
  } while ((ulonglong)(longlong)register_edi <
           (ulonglong)(*(longlong *)(register_rsi + 0x28) - *(longlong *)(register_rsi + 0x20) >> 5));
  
  // 设置最终状态
  *(bool *)register_r13 =
       *(longlong *)(register_rbx + 0x1c98) == *(longlong *)(*(longlong *)(register_rbx + 0x1af8) + 0x3a8);
  *(int8_t *)(*(longlong *)(register_rbx + 0x1af8) + 0xb1) = 1;
  context_ptr = *(longlong *)(register_rbx + 0x1af8);
  index_val = *(int *)(context_ptr + 0x1b8);
  temp_int1 = index_val + -1;
  *(int *)(context_ptr + 0x1b8) = temp_int1;
  if (temp_int1 != 0) {
    register_r12 = (ulonglong)*(uint *)(*(longlong *)(context_ptr + 0x1c0) + -8 + (longlong)index_val * 4);
  }
  *(int *)(context_ptr + 0x1a8) = (int)register_r12;
  
  // 清理资源
  cleanup_resources();
  temp_long1 = _DAT_180c8a9b0;
  temp_long2 = (longlong)*(int *)(_DAT_180c8a9b0 + 0x1b90);
  context_ptr = *(longlong *)(_DAT_180c8a9b0 + 0x1b98);
  temp_long3 = (longlong)*(int *)(context_ptr + -0xc + temp_long2 * 0xc);
  temp_ulong1 = (ulonglong)*(uint *)(&UNK_18098d188 + temp_long3 * 0xc);
  
  // 处理最终数据块
  if (*(int *)(&UNK_18098d180 + temp_long3 * 0xc) == 4) {
    if (*(int *)(&UNK_18098d184 + temp_long3 * 0xc) == 1) {
      *(int32_t *)(temp_ulong1 + 0x1628 + _DAT_180c8a9b0) = *(int32_t *)(context_ptr + -8 + temp_long2 * 0xc);
      *(int *)(temp_long1 + 0x1b90) = *(int *)(temp_long1 + 0x1b90) + -1;
      return;
    }
    if (*(int *)(&UNK_18098d184 + temp_long3 * 0xc) == 2) {
      *(int32_t *)(temp_ulong1 + 0x1628 + _DAT_180c8a9b0) = *(int32_t *)(context_ptr + -8 + temp_long2 * 0xc);
      *(int32_t *)(temp_ulong1 + 0x162c + temp_long1) = *(int32_t *)(context_ptr + -4 + temp_long2 * 0xc);
    }
  }
  *(int *)(temp_long1 + 0x1b90) = *(int *)(temp_long1 + 0x1b90) + -1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 简化的状态清理函数
// 专注于资源释放和状态重置
void simplified_state_cleanup(void)

{
  int temp_int1;
  longlong temp_long1;
  longlong temp_long2;
  int temp_int2;
  longlong temp_long3;
  longlong temp_long4;
  longlong register_rbx;
  ulonglong temp_ulong1;
  int32_t register_r12d;
  uint64_t register_r13;
  
  // 设置最终状态
  *(bool *)register_r13 =
       *(longlong *)(register_rbx + 0x1c98) == *(longlong *)(*(longlong *)(register_rbx + 0x1af8) + 0x3a8);
  *(int8_t *)(*(longlong *)(register_rbx + 0x1af8) + 0xb1) = 1;
  temp_long1 = *(longlong *)(register_rbx + 0x1af8);
  temp_int1 = *(int *)(temp_long1 + 0x1b8);
  temp_int2 = temp_int1 + -1;
  *(int *)(temp_long1 + 0x1b8) = temp_int2;
  if (temp_int2 != 0) {
    register_r12d = *(int32_t *)(*(longlong *)(temp_long1 + 0x1c0) + -8 + (longlong)temp_int1 * 4);
  }
  *(int32_t *)(temp_long1 + 0x1a8) = register_r12d;
  
  // 清理资源
  cleanup_resources();
  temp_long2 = _DAT_180c8a9b0;
  temp_long3 = (longlong)*(int *)(_DAT_180c8a9b0 + 0x1b90);
  temp_long1 = *(longlong *)(_DAT_180c8a9b0 + 0x1b98);
  temp_long4 = (longlong)*(int *)(temp_long1 + -0xc + temp_long3 * 0xc);
  temp_ulong1 = (ulonglong)*(uint *)(&UNK_18098d188 + temp_long4 * 0xc);
  
  // 处理最终数据块
  if (*(int *)(&UNK_18098d180 + temp_long4 * 0xc) == 4) {
    if (*(int *)(&UNK_18098d184 + temp_long4 * 0xc) == 1) {
      *(int32_t *)(temp_ulong1 + 0x1628 + _DAT_180c8a9b0) = *(int32_t *)(temp_long1 + -8 + temp_long3 * 0xc);
      *(int *)(temp_long2 + 0x1b90) = *(int *)(temp_long2 + 0x1b90) + -1;
      return;
    }
    if (*(int *)(&UNK_18098d184 + temp_long4 * 0xc) == 2) {
      *(int32_t *)(temp_ulong1 + 0x1628 + _DAT_180c8a9b0) = *(int32_t *)(temp_long1 + -8 + temp_long3 * 0xc);
      *(int32_t *)(temp_ulong1 + 0x162c + temp_long2) = *(int32_t *)(temp_long1 + -4 + temp_long3 * 0xc);
    }
  }
  *(int *)(temp_long2 + 0x1b90) = *(int *)(temp_long2 + 0x1b90) + -1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 状态标志设置函数
// 根据索引设置相应的状态标志
void set_status_flag_by_index(longlong param_1, longlong param_2)

{
  longlong temp_long1;
  longlong temp_long2;
  longlong temp_long3;
  longlong temp_long4;
  ulonglong temp_ulong1;
  
  // 设置状态标志
  *(int32_t *)(param_2 + 0x1a8) =
       *(int32_t *)(*(longlong *)(param_2 + 0x1c0) + -8 + param_1 * 4);
  
  // 清理资源
  cleanup_resources();
  temp_long2 = _DAT_180c8a9b0;
  temp_long3 = (longlong)*(int *)(_DAT_180c8a9b0 + 0x1b90);
  temp_long1 = *(longlong *)(_DAT_180c8a9b0 + 0x1b98);
  temp_long4 = (longlong)*(int *)(temp_long1 + -0xc + temp_long3 * 0xc);
  temp_ulong1 = (ulonglong)*(uint *)(&UNK_18098d188 + temp_long4 * 0xc);
  
  // 处理数据块
  if (*(int *)(&UNK_18098d180 + temp_long4 * 0xc) == 4) {
    if (*(int *)(&UNK_18098d184 + temp_long4 * 0xc) == 1) {
      *(int32_t *)(temp_ulong1 + 0x1628 + _DAT_180c8a9b0) = *(int32_t *)(temp_long1 + -8 + temp_long3 * 0xc);
      *(int *)(temp_long2 + 0x1b90) = *(int *)(temp_long2 + 0x1b90) + -1;
      return;
    }
    if (*(int *)(&UNK_18098d184 + temp_long4 * 0xc) == 2) {
      *(int32_t *)(temp_ulong1 + 0x1628 + _DAT_180c8a9b0) = *(int32_t *)(temp_long1 + -8 + temp_long3 * 0xc);
      *(int32_t *)(temp_ulong1 + 0x162c + temp_long2) = *(int32_t *)(temp_long1 + -4 + temp_long3 * 0xc);
    }
  }
  *(int *)(temp_long2 + 0x1b90) = *(int *)(temp_long2 + 0x1b90) + -1;
  return;
}





// 函数: 数据块处理函数
// 根据数据类型处理不同的数据块
void process_data_block_by_type(longlong param_1, longlong param_2, longlong param_3, longlong param_4)

{
  int temp_int1;
  longlong register_rax;
  longlong register_r10;
  
  temp_int1 = *(int *)(register_rax + 4 + register_r10 * 4);
  if (temp_int1 == 1) {
    *(int32_t *)(param_4 + 0x1628 + param_1) = *(int32_t *)(param_3 + -8 + param_2 * 4);
    *(int *)(param_1 + 0x1b90) = *(int *)(param_1 + 0x1b90) + -1;
    return;
  }
  if (temp_int1 == 2) {
    *(int32_t *)(param_4 + 0x1628 + param_1) = *(int32_t *)(param_3 + -8 + param_2 * 4);
    *(int32_t *)(param_4 + 0x162c + param_1) = *(int32_t *)(param_3 + -4 + param_2 * 4);
  }
  *(int *)(param_1 + 0x1b90) = *(int *)(param_1 + 0x1b90) + -1;
  return;
}





// 函数: 指针解引用调用函数
// 安全地解引用指针并调用相应的函数
void safe_pointer_dereference_call(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x38))();
  }
  return;
}



// 函数: 流初始化函数
// 初始化标准C++流对象
longlong * initialize_standard_stream(longlong *param_1)

{
  uint64_t temp_val1;
  
  temp_val1 = 0xfffffffffffffffe;
  *param_1 = (longlong)&UNK_180a01620;
  __0__basic_ios_DU__char_traits_D_std___std__IEAA_XZ(param_1 + 0x15);
  __0__basic_ostream_DU__char_traits_D_std___std__QEAA_PEAV__basic_streambuf_DU__char_traits_D_std___1__N_Z
            (param_1, param_1 + 1, 0, 0, 1, temp_val1);
  *(void **)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &UNK_180a01630;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0xa8;
  initialize_stream_helper(param_1 + 1);
  return param_1;
}





// 函数: 内存区域清理函数
// 清理指定的内存区域，确保没有内存泄漏
void cleanup_memory_region(longlong *param_1)

{
  longlong temp_long1;
  longlong temp_long2;
  
  temp_long1 = param_1[1];
  for (temp_long2 = *param_1; temp_long2 != temp_long1; temp_long2 = temp_long2 + 0x28) {
    *(uint64_t *)(temp_long2 + 8) = &UNK_180a3c3e0;
    if (*(longlong *)(temp_long2 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
      trigger_memory_error();
    }
    *(uint64_t *)(temp_long2 + 0x10) = 0;
    *(int32_t *)(temp_long2 + 0x20) = 0;
    *(uint64_t *)(temp_long2 + 8) = &UNK_18098bcb0;
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    trigger_memory_error();
  }
  return;
}





// 函数: 递归资源释放函数
// 递归地释放资源和清理内存
void recursive_resource_cleanup(uint64_t *param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)

{
  longlong *array_ptr;
  uint temp_uint1;
  ulonglong temp_ulong1;
  uint64_t temp_val1;
  ulonglong counter;
  
  if (param_1 == (uint64_t *)0x0) {
    return;
  }
  temp_val1 = 0xfffffffffffffffe;
  counter = 0;
  param_1[9] = 0;
  array_ptr = param_1 + 5;
  temp_ulong1 = counter;
  
  // 递归处理子项
  if (param_1[6] - *array_ptr >> 3 != 0) {
    do {
      recursive_resource_cleanup(*(uint64_t *)(temp_ulong1 + *array_ptr));
      *(uint64_t *)(temp_ulong1 + *array_ptr) = 0;
      temp_uint1 = (int)counter + 1;
      counter = (ulonglong)temp_uint1;
      temp_ulong1 = temp_ulong1 + 8;
    } while ((ulonglong)(longlong)(int)temp_uint1 < (ulonglong)(param_1[6] - *array_ptr >> 3));
  }
  
  // 调用清理回调函数
  if ((code *)param_1[0xc] != (code *)0x0) {
    (*(code *)param_1[0xc])(param_1 + 10, 0, 0, param_4, temp_val1);
  }
  
  // 处理空数组情况
  if (*array_ptr == 0) {
    *param_1 = &UNK_180a3c3e0;
    if (param_1[1] == 0) {
      param_1[1] = 0;
      *(int32_t *)(param_1 + 3) = 0;
      *param_1 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
      trigger_memory_error(param_1);
    }
                    // WARNING: Subroutine does not return
    trigger_memory_error();
  }
                    // WARNING: Subroutine does not return
  trigger_memory_error();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 动态数组扩展函数
// 动态扩展数组容量并复制数据
void expand_dynamic_array(longlong *param_1, int32_t *param_2)

{
  int32_t *src_ptr;
  int32_t *dest_ptr;
  uint64_t *temp_ptr1;
  longlong temp_long1;
  longlong temp_long2;
  longlong temp_long3;
  
  temp_long2 = param_1[1];
  temp_long1 = *param_1;
  temp_long3 = (temp_long2 - temp_long1) / 0x28;
  src_ptr = (int32_t *)0x0;
  if (temp_long3 == 0) {
    temp_long3 = 1;
  }
  else {
    temp_long3 = temp_long3 * 2;
    if (temp_long3 == 0) goto LAB_18016d07b;
  }
  src_ptr = (int32_t *)
           allocate_memory_block(_DAT_180c8ed18, temp_long3 * 0x28, (char)param_1[3], temp_long1, 0xfffffffffffffffe);
  temp_long2 = param_1[1];
  temp_long1 = *param_1;
LAB_18016d07b:
  dest_ptr = src_ptr;
  if (temp_long1 != temp_long2) {
    temp_ptr1 = (uint64_t *)(dest_ptr + 4);
    temp_long1 = temp_long1 - (longlong)dest_ptr;
    do {
      *dest_ptr = *(int32_t *)((longlong)temp_ptr1 + temp_long1 + -0x10);
      temp_ptr1[-1] = &UNK_18098bcb0;
      *temp_ptr1 = 0;
      *(int32_t *)(temp_ptr1 + 1) = 0;
      temp_ptr1[-1] = &UNK_180a3c3e0;
      temp_ptr1[2] = 0;
      *temp_ptr1 = 0;
      *(int32_t *)(temp_ptr1 + 1) = 0;
      *(int32_t *)(temp_ptr1 + 1) = *(int32_t *)(temp_long1 + 8 + (longlong)temp_ptr1);
      *temp_ptr1 = *(uint64_t *)(temp_long1 + (longlong)temp_ptr1);
      *(int32_t *)((longlong)temp_ptr1 + 0x14) = *(int32_t *)((longlong)temp_ptr1 + temp_long1 + 0x14);
      *(int32_t *)(temp_ptr1 + 2) = *(int32_t *)((longlong)temp_ptr1 + temp_long1 + 0x10);
      *(int32_t *)(temp_long1 + 8 + (longlong)temp_ptr1) = 0;
      *(uint64_t *)(temp_long1 + (longlong)temp_ptr1) = 0;
      *(uint64_t *)((longlong)temp_ptr1 + temp_long1 + 0x10) = 0;
      dest_ptr = dest_ptr + 10;
      temp_ptr1 = temp_ptr1 + 5;
    } while (temp_long1 + -0x10 + (longlong)temp_ptr1 != temp_long2);
  }
  
  // 添加新元素
  *dest_ptr = *param_2;
  *(void **)(dest_ptr + 2) = &UNK_18098bcb0;
  *(uint64_t *)(dest_ptr + 4) = 0;
  dest_ptr[6] = 0;
  *(void **)(dest_ptr + 2) = &UNK_180a3c3e0;
  *(uint64_t *)(dest_ptr + 8) = 0;
  *(uint64_t *)(dest_ptr + 4) = 0;
  dest_ptr[6] = 0;
  dest_ptr[6] = param_2[6];
  *(uint64_t *)(dest_ptr + 4) = *(uint64_t *)(param_2 + 4);
  dest_ptr[9] = param_2[9];
  dest_ptr[8] = param_2[8];
  
  // 清理源数据
  param_2[6] = 0;
  *(uint64_t *)(param_2 + 4) = 0;
  *(uint64_t *)(param_2 + 8) = 0;
  temp_long2 = param_1[1];
  temp_long1 = *param_1;
  
  // 释放旧内存
  if (temp_long1 != temp_long2) {
    do {
      *(uint64_t *)(temp_long1 + 8) = &UNK_180a3c3e0;
      if (*(longlong *)(temp_long1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        trigger_memory_error();
      }
      *(uint64_t *)(temp_long1 + 0x10) = 0;
      *(int32_t *)(temp_long1 + 0x20) = 0;
      *(uint64_t *)(temp_long1 + 8) = &UNK_18098bcb0;
      temp_long1 = temp_long1 + 0x28;
    } while (temp_long1 != temp_long2);
    temp_long1 = *param_1;
  }
  
  // 更新数组指针
  if (temp_long1 == 0) {
    *param_1 = (longlong)src_ptr;
    param_1[1] = (longlong)(dest_ptr + 10);
    param_1[2] = (longlong)(src_ptr + temp_long3 * 10);
    return;
  }
                    // WARNING: Subroutine does not return
  trigger_memory_error(temp_long1);
}





// 函数: 内存区域重新平衡函数
// 重新平衡内存区域以提高访问效率
void rebalance_memory_region(longlong param_1, longlong param_2, int8_t param_3)

{
  byte temp_byte1;
  int32_t temp_val1;
  int32_t temp_val2;
  longlong temp_long1;
  byte *byte_ptr;
  uint temp_uint1;
  uint64_t *ptr8;
  longlong temp_long2;
  longlong temp_long3;
  longlong temp_long4;
  int temp_int1;
  
  if (param_1 != param_2) {
    temp_int1 = 0;
    temp_long3 = param_2 - param_1 >> 5;
    for (temp_long1 = temp_long3; temp_long1 != 0; temp_long1 = temp_long1 >> 1) {
      temp_int1 = temp_int1 + 1;
    }
    rebalance_memory_helper(param_1, param_2, (longlong)(temp_int1 + -1) * 2, param_3, 0xfffffffffffffffe);
    if (temp_long3 < 0x1d) {
      rebalance_memory_chunk(param_1, param_2);
    }
    else {
      temp_long1 = param_1 + 0x380;
      rebalance_memory_chunk(param_1, temp_long1);
      for (; temp_long1 != param_2; temp_long1 = temp_long1 + 0x20) {
        temp_int1 = *(int *)(temp_long1 + 0x10);
        temp_long3 = *(longlong *)(temp_long1 + 8);
        temp_val1 = *(int32_t *)(temp_long1 + 0x1c);
        temp_val2 = *(int32_t *)(temp_long1 + 0x18);
        *(int32_t *)(temp_long1 + 0x10) = 0;
        *(uint64_t *)(temp_long1 + 8) = 0;
        *(uint64_t *)(temp_long1 + 0x18) = 0;
        temp_long2 = temp_long1;
        for (ptr8 = (uint64_t *)(temp_long1 + -0x18); *(int *)(ptr8 + 1) != 0; ptr8 = ptr8 + -4) {
          if (temp_int1 != 0) {
            byte_ptr = (byte *)*ptr8;
            temp_long4 = temp_long3 - (longlong)byte_ptr;
            do {
              temp_byte1 = *byte_ptr;
              temp_uint1 = (uint)byte_ptr[temp_long4];
              if (temp_byte1 != temp_uint1) break;
              byte_ptr = byte_ptr + 1;
            } while (temp_uint1 != 0);
            if ((int)(temp_byte1 - temp_uint1) < 1) break;
          }
          if (ptr8[4] != 0) {
                    // WARNING: Subroutine does not return
            trigger_memory_error();
          }
          ptr8[6] = 0;
          ptr8[4] = 0;
          *(int32_t *)(ptr8 + 5) = 0;
          *(int32_t *)(ptr8 + 5) = *(int32_t *)(ptr8 + 1);
          ptr8[4] = *ptr8;
          *(int32_t *)((longlong)ptr8 + 0x34) = *(int32_t *)((longlong)ptr8 + 0x14);
          *(int32_t *)(ptr8 + 6) = *(int32_t *)(ptr8 + 2);
          *(int32_t *)(ptr8 + 1) = 0;
          *ptr8 = 0;
          ptr8[2] = 0;
          temp_long2 = temp_long2 + -0x20;
        }
        if (*(longlong *)(temp_long2 + 8) != 0) {
                    // WARNING: Subroutine does not return
          trigger_memory_error();
        }
        *(int *)(temp_long2 + 0x10) = temp_int1;
        *(longlong *)(temp_long2 + 8) = temp_long3;
        *(int32_t *)(temp_long2 + 0x1c) = temp_val1;
        *(int32_t *)(temp_long2 + 0x18) = temp_val2;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 数据结构插入函数
// 向数据结构中插入新元素
void insert_into_data_structure(longlong *param_1, uint64_t *param_2, longlong param_3, uint64_t param_4)

{
  int32_t temp_val1;
  int32_t temp_val2;
  int32_t temp_val3;
  uint64_t temp_val4;
  uint64_t *temp_ptr1;
  longlong temp_long1;
  longlong temp_long2;
  uint64_t *temp_ptr2;
  longlong temp_long3;
  
  temp_long1 = 0;
  if (param_1[1] != param_1[2]) {
    temp_val1 = *(int32_t *)(param_3 + 0x10);
    temp_val4 = *(uint64_t *)(param_3 + 8);
    temp_val2 = *(int32_t *)(param_3 + 0x1c);
    temp_val3 = *(int32_t *)(param_3 + 0x18);
    *(int32_t *)(param_3 + 0x10) = 0;
    *(uint64_t *)(param_3 + 8) = 0;
    *(uint64_t *)(param_3 + 0x18) = 0;
    temp_ptr1 = (uint64_t *)param_1[1];
    *temp_ptr1 = &UNK_18098bcb0;
    temp_ptr1[1] = 0;
    *(int32_t *)(temp_ptr1 + 2) = 0;
    *temp_ptr1 = &UNK_180a3c3e0;
    temp_ptr1[3] = 0;
    temp_ptr1[1] = 0;
    *(int32_t *)(temp_ptr1 + 2) = 0;
    *(int32_t *)(temp_ptr1 + 2) = *(int32_t *)(temp_ptr1 + -2);
    temp_ptr1[1] = temp_ptr1[-3];
    *(int32_t *)((longlong)temp_ptr1 + 0x1c) = *(int32_t *)((longlong)temp_ptr1 + -4);
    *(int32_t *)(temp_ptr1 + 3) = *(int32_t *)(temp_ptr1 + -1);
    *(int32_t *)(temp_ptr1 + -2) = 0;
    temp_ptr1[-3] = 0;
    temp_ptr1[-1] = 0;
    process_data_structure_node(param_2, param_1[1] + -0x20);
    (**(code **)*param_2)(param_2, 0);
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &UNK_180a3c3e0;
    *(int32_t *)(param_2 + 2) = temp_val1;
    param_2[1] = temp_val4;
    *(int32_t *)((longlong)param_2 + 0x1c) = temp_val2;
    *(int32_t *)(param_2 + 3) = temp_val3;
    param_1[1] = param_1[1] + 0x20;
    return;
  }
  temp_long2 = *param_1;
  temp_long3 = param_1[1] - *param_1 >> 5;
  if (temp_long3 == 0) {
    temp_long3 = 1;
  }
  else {
    temp_long3 = temp_long3 * 2;
    if (temp_long3 == 0) goto LAB_18016d59c;
  }
  temp_long1 = allocate_memory_block(_DAT_180c8ed18, temp_long3 << 5, (char)param_1[3], param_4, 0xfffffffffffffffe);
LAB_18016d59c:
  temp_ptr1 = (uint64_t *)(((longlong)param_2 - temp_long2 & 0xffffffffffffffe0U) + temp_long1);
  *temp_ptr1 = &UNK_18098bcb0;
  temp_ptr1[1] = 0;
  *(int32_t *)(temp_ptr1 + 2) = 0;
  *temp_ptr1 = &UNK_180a3c3e0;
  temp_ptr1[3] = 0;
  temp_ptr1[1] = 0;
  *(int32_t *)(temp_ptr1 + 2) = 0;
  *(int32_t *)(temp_ptr1 + 2) = *(int32_t *)(param_3 + 0x10);
  temp_ptr1[1] = *(uint64_t *)(param_3 + 8);
  *(int32_t *)((longlong)temp_ptr1 + 0x1c) = *(int32_t *)(param_3 + 0x1c);
  *(int32_t *)(temp_ptr1 + 3) = *(int32_t *)(param_3 + 0x18);
  *(int32_t *)(param_3 + 0x10) = 0;
  *(uint64_t *)(param_3 + 8) = 0;
  *(uint64_t *)(param_3 + 0x18) = 0;
  temp_long2 = copy_memory_block(*param_1, param_2, temp_long1);
  temp_long2 = copy_memory_block(param_2, param_1[1], temp_long2 + 0x20);
  temp_ptr1 = (uint64_t *)param_1[1];
  temp_ptr2 = (uint64_t *)*param_1;
  if (temp_ptr2 != temp_ptr1) {
    do {
      (**(code **)*temp_ptr2)(temp_ptr2, 0);
      temp_ptr2 = temp_ptr2 + 4;
    } while (temp_ptr2 != temp_ptr1);
    temp_ptr2 = (uint64_t *)*param_1;
  }
  if (temp_ptr2 == (uint64_t *)0x0) {
    *param_1 = temp_long1;
    param_1[1] = temp_long2;
    param_1[2] = temp_long3 * 0x20 + temp_long1;
    return;
  }
                    // WARNING: Subroutine does not return
  trigger_memory_error(temp_ptr2);
}





// 函数: 内存块重排函数
// 重新排列内存块以提高缓存效率
void rearrange_memory_blocks(longlong param_1, longlong param_2)

{
  byte temp_byte1;
  int temp_int1;
  int32_t temp_val1;
  int32_t temp_val2;
  longlong temp_long1;
  longlong temp_long2;
  byte *byte_ptr;
  uint temp_uint1;
  longlong temp_long3;
  longlong temp_long4;
  longlong temp_long5;
  
  if (param_1 != param_2) {
    for (temp_long4 = param_1 + 0x20; temp_long4 != param_2; temp_long4 = temp_long4 + 0x20) {
      temp_int1 = *(int *)(temp_long4 + 0x10);
      temp_long1 = *(longlong *)(temp_long4 + 8);
      temp_val1 = *(int32_t *)(temp_long4 + 0x1c);
      temp_val2 = *(int32_t *)(temp_long4 + 0x18);
      *(int32_t *)(temp_long4 + 0x10) = 0;
      *(uint64_t *)(temp_long4 + 8) = 0;
      *(uint64_t *)(temp_long4 + 0x18) = 0;
      temp_long3 = temp_long4;
      temp_long2 = temp_long4;
      while ((temp_long2 != param_1 && (*(int *)(temp_long2 + -0x10) != 0))) {
        if (temp_int1 != 0) {
          byte_ptr = *(byte **)(temp_long2 + -0x18);
          temp_long5 = temp_long1 - (longlong)byte_ptr;
          do {
            temp_byte1 = *byte_ptr;
            temp_uint1 = (uint)byte_ptr[temp_long5];
            if (temp_byte1 != temp_uint1) break;
            byte_ptr = byte_ptr + 1;
          } while (temp_uint1 != 0);
          if ((int)(temp_byte1 - temp_uint1) < 1) break;
        }
        if (*(longlong *)(temp_long3 + 8) != 0) {
                    // WARNING: Subroutine does not return
          trigger_memory_error();
        }
        *(uint64_t *)(temp_long3 + 0x18) = 0;
        *(uint64_t *)(temp_long3 + 8) = 0;
        *(int32_t *)(temp_long3 + 0x10) = 0;
        *(int32_t *)(temp_long3 + 0x10) = *(int32_t *)(temp_long2 + -0x10);
        *(uint64_t *)(temp_long3 + 8) = *(uint64_t *)(temp_long2 + -0x18);
        *(int32_t *)(temp_long3 + 0x1c) = *(int32_t *)(temp_long2 + -4);
        *(int32_t *)(temp_long3 + 0x18) = *(int32_t *)(temp_long2 + -8);
        *(int32_t *)(temp_long2 + -0x10) = 0;
        *(uint64_t *)(temp_long2 + -0x18) = 0;
        *(uint64_t *)(temp_long2 + -8) = 0;
        temp_long3 = temp_long3 + -0x20;
        temp_long2 = temp_long2 + -0x20;
      }
      if (*(longlong *)(temp_long3 + 8) != 0) {
                    // WARNING: Subroutine does not return
        trigger_memory_error();
      }
      *(int *)(temp_long3 + 0x10) = temp_int1;
      *(longlong *)(temp_long3 + 8) = temp_long1;
      *(int32_t *)(temp_long3 + 0x1c) = temp_val1;
      *(int32_t *)(temp_long3 + 0x18) = temp_val2;
    }
  }
  return;
}



uint64_t
process_data_structure_operation(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)

{
  perform_data_structure_operation(param_4, param_1, param_3, param_4, 0, 0xfffffffffffffffe);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



uint64_t *
initialize_data_structure(uint64_t *param_1, uint64_t param_2, ulonglong param_3, ulonglong param_4)

{
  int32_t *temp_ptr1;
  char *char_ptr;
  ulonglong temp_ulong1;
  uint temp_uint1;
  
  char_ptr = _DAT_180c82868;
  temp_ulong1 = 0;
  if ((*_DAT_180c82868 == '\0') &&
     (*_DAT_180c82868 = '\x01', param_4 = temp_ulong1,
     *(longlong *)(char_ptr + 0x10) - *(longlong *)(char_ptr + 8) >> 3 != 0)) {
    do {
      *(uint64_t *)(*(longlong *)(*(longlong *)(char_ptr + 8) + temp_ulong1) + 0x1f8) = 0x3f1a36e2eb1c432d;
      *(uint64_t *)(*(longlong *)(*(longlong *)(char_ptr + 8) + temp_ulong1) + 0x200) = 0x3f1a36e2eb1c432d;
      temp_uint1 = (int)param_4 + 1;
      param_4 = (ulonglong)temp_uint1;
      param_3 = temp_ulong1 + 8;
      temp_ulong1 = param_3;
    } while ((ulonglong)(longlong)(int)temp_uint1 <
             (ulonglong)(*(longlong *)(char_ptr + 0x10) - *(longlong *)(char_ptr + 8) >> 3));
  }
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  initialize_data_structure_helper(param_1, 4, param_3, param_4, 0, 0xfffffffffffffffe);
  temp_ptr1 = (int32_t *)param_1[1];
  *temp_ptr1 = 0x656e6f44;  // "Done"
  *(int8_t *)(temp_ptr1 + 1) = 0;
  *(int32_t *)(param_1 + 2) = 4;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address